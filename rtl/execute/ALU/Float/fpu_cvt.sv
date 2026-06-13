module fpu_cvt
    import exec_pkg::*;
(
    input  logic [1:0]  cvt_op,
    input  logic        sign,
    input  logic [7:0]  exp,
    input  logic [23:0] mant,
    input  logic [31:0] op_a,
    output logic [31:0] result
);

    logic signed [7:0]  exp_true;
    logic        [31:0] mant_shft;
    logic        [31:0] mant_tmp;

    logic [31:0] res_tmp;
    logic [31:0] op_vec;
    logic [5:0]  shft_amt; //shift_dir = shift_amt[5] ? left : right
    logic [5:0]  shft;
    logic [31:0] shft_tmp;
    logic [7:0]  exp_cvt;
    logic [22:0]  mant_cvt;
    logic        sign_cvt;

    assign mant_tmp = {8'h0, mant};
    assign exp_true  = exp - 127;

    always_comb begin
        //Smaller 1
        case (cvt_op) 
            2'b00: begin
                if (exp_true < 0) mant_shft = '0;
                //Negative exponent
                else if (exp_true >= 0 && exp_true <= 23) begin
                    mant_shft = mant_tmp >> (23 - exp_true);
                end
                else if (exp_true > 23 && exp_true <= 30) begin
                    mant_shft = mant_tmp << (exp_true - 23);
                end
                else mant_shft = 32'h7FFF_FFFF;
            end
            2'b01: begin
                if (exp_true < 0) mant_shft = '0;
                else if (exp_true >= 0 && exp_true <= 23) begin
                    mant_shft = mant_tmp >> (23 - exp_true);
                end
                else if (exp_true > 23 && exp_true <= 31) begin
                    mant_shft = mant_tmp << (exp_true - 23);
                end
                else mant_shft = 32'hFFFF_FFFF;
            end
            2'b10: begin
                if (op_a == 0) res_tmp = 32'h0;
                else begin
                    sign_cvt = op_a[31];
                    op_vec   = (sign_cvt) ? -op_a : op_a;
                    shft_amt = lzd32_23(op_vec);
                    if (shft_amt[5]) begin
                        shft_tmp = op_vec << shft_amt[4:0];
                        exp_cvt  = 8'd150 - {3'b0, shft_amt[4:0]}; 
                    end
                    else begin
                        shft_tmp = op_vec >> shft_amt[4:0];
                        exp_cvt  = 8'd150 + {3'b0, shft_amt[4:0]}; 
                    end
                    mant_cvt = shft_tmp[22:0];
                    res_tmp = {sign_cvt, exp_cvt, mant_cvt};
                end
            end
            default: mant_shft = '0;
        endcase
    end

    always_comb begin
        case (cvt_op)
        2'b00:   result = sign ? ((exp_true > 30) ? 32'h8000_0000 : -mant_shft) : mant_shft;
        2'b01:   result = sign ?  32'h0 : mant_shft;
        2'b10:   result = res_tmp;
        default: result = mant_shft;
        endcase
    end


    
endmodule
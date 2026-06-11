module fpu_cvt
    import exec_pkg::*;
(
    input  logic [1:0]  cvt_op,
    input  logic        sign,
    input  logic [7:0]  exp,
    input  logic [23:0] mant,
    output logic [31:0] result
);

    logic signed [7:0]  exp_true;
    logic        [31:0] mant_shft;
    logic        [31:0] mant_tmp;

    assign mant_tmp = {8'h0, mant};
    assign exp_true  = exp - 127;

    //special case -2^31 not covered
    always_comb begin
        //Smaller 1
        case (cvt_op) 
            2'b00: begin
                if (exp_true < 0) mant_shft = '0;
                //Negative exponent
                else if (exp_true >= 0 && exp_true <= 23) begin
                    mant_shft = mant_tmp >> (32 - exp_true);
                end
                else if (exp_true > 23 && exp_true <= 30) begin
                    mant_shft = mant_tmp << (exp_true - 32);
                end
                else mant_shft = 32'h7FFF_FFFF;
            end
            default: mant_shft = '0;
        endcase
    end

    always_comb begin
        if (cvt_op == 2'b00)
            result = sign ? -mant_shft : mant_shft;
        else result = mant_shft;
    end


    
endmodule
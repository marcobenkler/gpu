module sfu_sign_expo
    import sfu_pkg::*;
(
    input  sfu_op_t     op,
    input  logic        sign_in,   
    input  logic [7:0]  exp_in,
    input  logic [22:0] mant_in, //check for special cases
    output logic        sign_out,
    output logic [7:0]  exp_out,
    output logic [22:0] mant_out,
    output logic        is_normal
);

    logic [8:0] exp_result;

    always_comb begin
        is_normal = 1'b0;
        sign_out = 'x;
        exp_out = 'x;
        mant_out = 'x;
        case (op)
            SFU_RCP: begin
                //NAN
                if (exp_in == 8'hFF && mant_in != 23'h0) begin
                    sign_out  = 0;
                    exp_out   = 8'hFF;
                    mant_out  = 23'h7FFFFF;
                end
                //pm inf
                else if (exp_in == 8'hFF && mant_in == 23'h0) begin
                    sign_out  = sign_in;
                    exp_out   = 8'h0;
                    mant_out  = 23'h0;
                end
                //pm 0
                else if (exp_in == 8'h0 && mant_in == 23'h0) begin
                    sign_out = sign_in;
                    exp_out  = 8'hFF;
                    mant_out = 23'h0;
                end
                //denormal
                else if (exp_in == 8'h0) begin
                    sign_out = 0;
                    exp_out  = 8'hFF;
                    mant_out = 23'h0; 
                end
                // normal
                else begin
                    sign_out  = sign_in;
                    if (mant_in == 23'h0) exp_result = 9'd254 - {1'b0, exp_in};
                    else exp_result = 9'd253 - {1'b0, exp_in};
                    //underflow
                    if (exp_result[8] || exp_result == 9'b0) begin
                        exp_out  = 8'h0;
                        mant_out = 23'h0;
                    end
                    else begin
                        exp_out = exp_result[7:0];
                        is_normal = 1'b1;
                    end
                end
            end
            default: ;
        endcase
    end

endmodule
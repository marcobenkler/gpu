module fpu_add_sub
    import exec_pkg::*;
(
    input  logic        add_op,
    input  logic        sign_a,
    input  logic        sign_b,
    input  logic [23:0] mant_a_shifted,
    input  logic [23:0] mant_b_shifted,
    output logic [24:0] mant_sum,
    output logic        sign_result
);

    logic sign_b_eff;
    assign sign_b_eff = (add_op) ? ~sign_b : sign_b;

    always_comb begin
        if (sign_a == sign_b_eff) begin
            mant_sum = mant_a_shifted + mant_b_shifted;    
            sign_result = sign_a;
        end
        else begin
            if (mant_a_shifted >= mant_b_shifted) begin
                mant_sum = mant_a_shifted - mant_b_shifted;
                sign_result = sign_a;
            end
            else begin
                mant_sum = mant_b_shifted - mant_b_shifted;
                sign_result = sign_b_eff;
            end
        end
    end

endmodule
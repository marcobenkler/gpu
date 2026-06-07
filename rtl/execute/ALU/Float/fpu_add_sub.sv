module fpu_add_sub
    import exec_pkg::*;
(
    input  logic        add_op,
    input  logic        sign_a,
    input  logic        sign_b,
    input  logic [23:0] mant_a_shifted,
    input  logic [23:0] mant_b_shifted,
    input  grs_t        flags_in,
    input  logic        shifted, //0 = a, 1 = b
    output logic [24:0] mant_sum,
    output logic        sign_result,
    output grs_t        flags_out
);

    logic [49:0] mant_temp;
    logic sign_b_eff;
    assign sign_b_eff = (add_op) ? ~sign_b : sign_b;

    always_comb begin
        flags_out = flags_in;
        mant_temp = '0;
        if (sign_a == sign_b_eff) begin
            mant_sum = mant_a_shifted + mant_b_shifted;    
            sign_result = sign_a;
        end
        // Special GRS handling required
        else begin
            //Possible edge case, b can be greater, if rounding bits count
            if (mant_a_shifted >= mant_b_shifted) begin
                // a was shifted => has grs
                if (shifted) begin
                    mant_sum = mant_a_shifted - mant_b_shifted;
                end
                else begin
                    mant_temp       = {mant_a_shifted, 26'h0} - {mant_b_shifted, flags_in.g, flags_in.r, flags_in.s_vec};
                    mant_sum        = {1'b0, mant_temp[49:26]};
                    flags_out.g     = mant_temp[25];
                    flags_out.r     = mant_temp[24];
                    flags_out.s_vec = mant_temp[23:0];
                    flags_out.s     = |mant_temp[23:0];
                end 
                if (mant_sum == 0) sign_result = 1'b0;
                else sign_result = sign_a;
            end
            else begin
                if (!shifted) begin
                    mant_sum = mant_b_shifted - mant_a_shifted;
                end
                else begin
                    mant_temp       = {mant_b_shifted, 26'h0} - {mant_a_shifted, flags_in.g, flags_in.r, flags_in.s_vec};
                    mant_sum        = {1'b0, mant_temp[49:26]}; //sub cant overflow
                    flags_out.g     = mant_temp[25];
                    flags_out.r     = mant_temp[24];
                    flags_out.s_vec = mant_temp[23:0];
                    flags_out.s     = |mant_temp[23:0];
                end
                sign_result = sign_b_eff;
            end
        end
    end

endmodule
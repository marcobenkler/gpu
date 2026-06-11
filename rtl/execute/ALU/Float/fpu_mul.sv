module fpu_mul
    import exec_pkg::*;
(
    input  logic        sign_a,
    input  logic        sign_b,
    input  logic [7:0]  exp_a,
    input  logic [7:0]  exp_b,
    input  logic [23:0] mant_a,
    input  logic [23:0] mant_b,
    output logic        sign_res,
    output logic [23:0] mant_mul,
    output logic [7:0]  exp_res,
    output grs_t        flags_out
);

    logic signed [9:0]  exp_tmp;
    logic signed [9:0]  exp_norm;
    logic        [47:0] mant_tmp;

    assign exp_tmp  = {2'b00, exp_a} + {2'b00, exp_b} - 127;
    assign exp_norm = mant_tmp[47] ? exp_tmp + 1 : exp_tmp;
    assign mant_tmp = mant_a * mant_b;
    assign sign_res = sign_a ^ sign_b;

    always_comb begin
        if (exp_norm <= 0) begin //not on -127 , 127 => flush to 0 or inf
            mant_mul        = '0;
            exp_res         = '0;
            flags_out.g     = '0;
            flags_out.r     = '0;
            flags_out.s     = '0;
            flags_out.s_vec = '0;
        end
        else if (exp_norm >= 255) begin
            mant_mul        = '0;
            exp_res         = 8'hFF;
            flags_out.g     = '0;
            flags_out.r     = '0;
            flags_out.s     = '0;
            flags_out.s_vec = '0;
        end
        else if (mant_tmp[47]) begin
            mant_mul        = mant_tmp[47:24];
            exp_res         = exp_norm[7:0];
            flags_out.g     = mant_tmp[23];
            flags_out.r     = mant_tmp[22];
            flags_out.s     = |mant_tmp[21:0];
            flags_out.s_vec = {2'b00, mant_tmp[21:0]};
        end
        else begin
            mant_mul        = mant_tmp[46:23];
            exp_res         = exp_tmp[7:0];
            flags_out.g     = mant_tmp[22];
            flags_out.r     = mant_tmp[21];
            flags_out.s     = |mant_tmp[20:0];
            flags_out.s_vec = {3'b000 ,mant_tmp[20:0]};
        end
    end

endmodule
module fpu_shifter
    import exec_pkg::*;
(
    input  logic [7:0]  exp_a,
    input  logic [7:0]  exp_b,
    input  logic [23:0] mant_a,
    input  logic [23:0] mant_b,
    output logic [7:0]  exp_shifted,
    output logic [23:0] mant_a_shifted,
    output logic [23:0] mant_b_shifted,
    output grs_t        flags
);

    logic [25:0] mant_ext;
    logic [23:0] sticky_mask;

    logic [8:0]  exp_delta;
    logic [25:0] mant_shifted;

    always_comb begin
        if (exp_a >= exp_b) begin
            exp_delta =      exp_a - exp_b;
            exp_shifted =    exp_a;
            mant_ext =       {mant_b, 2'b00};
            mant_shifted =   (exp_delta >= 26) ? '0 : mant_ext >> exp_delta;
            mant_b_shifted = mant_shifted[25:2];
            mant_a_shifted = mant_a;
            flags = get_grs(exp_delta, mant_b, mant_shifted);
        end
        else begin
            exp_delta =      exp_b - exp_a;
            exp_shifted =    exp_b;
            mant_ext =       {mant_a, 2'b00};
            mant_shifted   = (exp_delta >= 26) ? '0 : mant_ext >> exp_delta;
            mant_a_shifted = mant_shifted[25:2];
            mant_b_shifted = mant_b;
            flags = get_grs(exp_delta, mant_a, mant_shifted);
        end
    end
        

endmodule
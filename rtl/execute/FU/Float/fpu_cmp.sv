module fpu_cmp
    import exec_pkg::*;
(
    input  logic        cmp_op,
    input  logic        sign_a,
    input  logic        sign_b,
    input  grs_t        flags_in,
    input  logic [23:0] mant_a_shifted,
    input  logic [23:0] mant_b_shifted,
    input  logic        shifted, //1 = a, 0 = b
    output logic        cmp_res  //1 = a, 0 = b
);

    logic cmp_tmp;

    always_comb begin
        if (cmp_op) begin //max
            if (shifted)
                cmp_tmp = ({mant_a_shifted, flags_in.g, flags_in.r, flags_in.s_vec} > {mant_b_shifted, 26'h0});
            else 
                cmp_tmp = ({mant_a_shifted, 26'h0} > {mant_b_shifted, flags_in.g, flags_in.r, flags_in.s_vec});

            if      (sign_a == 0 && sign_b == 0) cmp_res = cmp_tmp;
            else if (sign_a == 1 && sign_b == 0) cmp_res = 0;
            else if (sign_a == 0 && sign_b == 1) cmp_res = 1;
            else                                 cmp_res = ~cmp_tmp;
        end                              
        else begin//min
            if (shifted)
                cmp_tmp = ({mant_a_shifted, flags_in.g, flags_in.r, flags_in.s_vec} < {mant_b_shifted, 26'h0});
            else 
                cmp_tmp = ({mant_a_shifted, 26'h0} < {mant_b_shifted, flags_in.g, flags_in.r, flags_in.s_vec});
            if      (sign_a == 0 && sign_b == 0) cmp_res = cmp_tmp;
            else if (sign_a == 1 && sign_b == 0) cmp_res = 1;
            else if (sign_a == 0 && sign_b == 1) cmp_res = 0;
            else                                 cmp_res = ~cmp_tmp;
        end
    end

endmodule
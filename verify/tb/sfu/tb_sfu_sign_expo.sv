module tb_sfu_sign_expo
    import sfu_pkg::*;
();

    sfu_op_t     op;
    logic [31:0] operand;
    logic        sign_out;
    logic [7:0]  exp_out;
    logic [22:0] mant_out;
    logic        is_normal;

    sfu_sign_expo u_sfu_sign_expo(
        .op(op),
        .sign_in(operand[31]),
        .exp_in(operand[30:23]),
        .mant_in(operand[22:0]),
        .sign_out(sign_out),
        .exp_out(exp_out),
        .mant_out(mant_out),
        .is_normal(is_normal)
    );

    localparam logic [31:0] POS_ZERO    = 32'h0000_0000;
    localparam logic [31:0] NEG_ZERO    = 32'h8000_0000;
    localparam logic [31:0] POS_INF     = 32'h7F80_0000;
    localparam logic [31:0] NEG_INF     = 32'hFF80_0000;
    localparam logic [31:0] QNAN        = 32'h7FC0_0000;
    localparam logic [31:0] SNAN        = 32'h7F80_0001;
    localparam logic [31:0] POS_ONE     = 32'h3F80_0000;
    localparam logic [31:0] NEG_ONE     = 32'hBF80_0000;
    localparam logic [31:0] SMALLEST_N  = 32'h0080_0000;
    localparam logic [31:0] LARGEST_F   = 32'h7F7F_FFFF;
    localparam logic [31:0] SMALLEST_DN = 32'h0000_0001;

    localparam test_t TESTS[52] = '{
        //Fetched by claude opus 4.6 from IEEE
        // ========== SFU_RCP (1/x) ==========
        '{SFU_RCP, POS_ZERO,    1'b0, 8'hFF},  // +0 → +inf
        '{SFU_RCP, NEG_ZERO,    1'b1, 8'hFF},  // -0 → -inf
        '{SFU_RCP, POS_INF,     1'b0, 8'h00},  // +inf → +0
        '{SFU_RCP, NEG_INF,     1'b1, 8'h00},  // -inf → -0
        '{SFU_RCP, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_RCP, SNAN,        1'b0, 8'hFF},  // sNaN → NaN
        '{SFU_RCP, POS_ONE,     1'b0, 8'h7F},  // 1/1.0 = 1.0
        '{SFU_RCP, NEG_ONE,     1'b1, 8'h7F},  // 1/-1.0 = -1.0
        '{SFU_RCP, SMALLEST_N,  1'b0, 8'hFD},  // 1/2^-126 = 2^126, exp=253
        '{SFU_RCP, LARGEST_F,   1'b0, 8'h00},  // 1/~2^128 → underflow
        '{SFU_RCP, SMALLEST_DN, 1'b0, 8'hFF},  // denorm flush→0 → inf

        // ========== SFU_RSQRT (1/√x) ==========
        '{SFU_RSQRT, POS_ZERO,    1'b0, 8'hFF},  // +0 → +inf
        '{SFU_RSQRT, NEG_ZERO,    1'b1, 8'hFF},  // -0 → -inf  (sqrt(-0)=-0, 1/-0=-inf)
        '{SFU_RSQRT, POS_INF,     1'b0, 8'h00},  // +inf → +0
        '{SFU_RSQRT, NEG_INF,     1'b0, 8'hFF},  // -inf → NaN
        '{SFU_RSQRT, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_RSQRT, SNAN,        1'b0, 8'hFF},  // sNaN → NaN
        '{SFU_RSQRT, POS_ONE,     1'b0, 8'h7F},  // 1/√1 = 1.0
        '{SFU_RSQRT, NEG_ONE,     1'b0, 8'hFF},  // neg normal → NaN
        '{SFU_RSQRT, SMALLEST_N,  1'b0, 8'hBE},  // 1/√(2^-126) = 2^63, exp=190
        '{SFU_RSQRT, LARGEST_F,   1'b0, 8'h3F},  // 1/√(~2^128) ≈ 2^-64, exp=63
        '{SFU_RSQRT, SMALLEST_DN, 1'b0, 8'hFF},  // denorm flush→0 → inf

        // ========== SFU_LG2 (log2(x)) ==========
        '{SFU_LG2, POS_ZERO,    1'b1, 8'hFF},  // +0 → -inf
        '{SFU_LG2, NEG_ZERO,    1'b1, 8'hFF},  // -0 → -inf
        '{SFU_LG2, POS_INF,     1'b0, 8'hFF},  // +inf → +inf
        '{SFU_LG2, NEG_INF,     1'b0, 8'hFF},  // -inf → NaN
        '{SFU_LG2, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_LG2, SNAN,        1'b0, 8'hFF},  // sNaN → NaN
        '{SFU_LG2, POS_ONE,     1'b0, 8'h00},  // log2(1) = +0
        '{SFU_LG2, NEG_ONE,     1'b0, 8'hFF},  // neg normal → NaN
        '{SFU_LG2, SMALLEST_DN, 1'b1, 8'hFF},  // denorm flush→0 → -inf... oder NaN

        // ========== SFU_EX2 (2^x) ==========
        '{SFU_EX2, POS_ZERO,    1'b0, 8'h7F},  // 2^0 = 1.0
        '{SFU_EX2, NEG_ZERO,    1'b0, 8'h7F},  // 2^-0 = 1.0
        '{SFU_EX2, POS_INF,     1'b0, 8'hFF},  // 2^+inf = +inf
        '{SFU_EX2, NEG_INF,     1'b0, 8'h00},  // 2^-inf = +0
        '{SFU_EX2, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_EX2, SNAN,        1'b0, 8'hFF},  // sNaN → NaN
        '{SFU_EX2, POS_ONE,     1'b0, 8'h80},  // 2^1 = 2.0, exp=128
        '{SFU_EX2, NEG_ONE,     1'b0, 8'h7E},  // 2^-1 = 0.5, exp=126
        '{SFU_EX2, LARGEST_F,   1'b0, 8'hFF},  // 2^huge = +inf (overflow)

        // ========== SFU_SIN ==========
        '{SFU_SIN, POS_ZERO,    1'b0, 8'h00},  // sin(+0) = +0
        '{SFU_SIN, NEG_ZERO,    1'b1, 8'h00},  // sin(-0) = -0
        '{SFU_SIN, POS_INF,     1'b0, 8'hFF},  // sin(+inf) = NaN
        '{SFU_SIN, NEG_INF,     1'b0, 8'hFF},  // sin(-inf) = NaN
        '{SFU_SIN, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_SIN, SNAN,        1'b0, 8'hFF},  // sNaN → NaN

        // ========== SFU_COS ==========
        '{SFU_COS, POS_ZERO,    1'b0, 8'h7F},  // cos(+0) = +1.0
        '{SFU_COS, NEG_ZERO,    1'b0, 8'h7F},  // cos(-0) = +1.0
        '{SFU_COS, POS_INF,     1'b0, 8'hFF},  // cos(+inf) = NaN
        '{SFU_COS, NEG_INF,     1'b0, 8'hFF},  // cos(-inf) = NaN
        '{SFU_COS, QNAN,        1'b0, 8'hFF},  // qNaN → NaN
        '{SFU_COS, SNAN,        1'b0, 8'hFF}   // sNaN → NaN
        //End of claude's code
    };

    task check(input sfu_op_t op, input logic [31:0] in,
               input logic sign_exp, input logic [7:0] exp_exp);
        if (sign_out !== sign_exp)
            $display("%s sign: got=%0b exp=%0b in=%0b", op.name(), sign_out, sign_exp, in[31]);
        if (exp_out !== exp_exp)
            $display("%s exp: got=%0b exp=%0b in=%0b isnormal=%0b", op.name(), exp_out, exp_exp, in[30:23], is_normal);
        if (sign_out == sign_exp && exp_out == exp_exp)
            $display("%s successfull", op.name());
   endtask

    initial begin
        $dumpfile("sim/sfu/tb_sign_expo.fst");
        $dumpvars(0, tb_sfu_sign_expo);

        op = sfu_op_t'(0);
        operand = '0;
        #5;
        for (int o = 0; o < 52; o++) begin
            op = sfu_op_t'(TESTS[o].op);
            operand = TESTS[o].operand;
            #5;
            check(op, operand, TESTS[o].sign_exp, TESTS[o].exp_exp);
        end

        $display("DONE");
        $finish;

    end

endmodule
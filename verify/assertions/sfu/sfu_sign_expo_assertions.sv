module sfu_sign_expo_assertions(
    input sfu_op_t     op,
    input logic        sign_in,
    input logic [7:0]  exp_in,
    input logic [22:0] mant_in,
    input logic        sign_out,
    input logic [7:0]  exp_out,
    input logic        is_nan,
    input logic        is_inf,
    input logic        is_zero,
    input logic        is_normal
);

    assert #0 ((is_nan + is_inf + is_zero + is_normal) == 1)
        else $error("Not exactly one flag high nan=%0b inf=%0b zero=%0b normal=%0b");

    assert #0 (op != SFU_RSQRT || sign_out == 1'b0)
        else $error("RSQRT produced negative value");

    assert #0 (op != SFU_EX2 || sign_out == 1'b0)
        else $error("EX2 produced negative value");

    assert #0 (!(is_zero && op != SFU_EX2) || (exp_out == 8'h00 || exp_out == 8'hFF))
        else $error("Wrong output after zero input");

    assert #0 (!is_nan || exp_out == 8'hFF)
        else $error("Wrong output after NaN input");

    assert #0 (op != SFU_RCP || !is_normal ||
           ((exp_in <= 8'd127 || exp_out < 8'd127) &&
            (exp_in >= 8'd127 || exp_out > 8'd127)))
    else $error("RCP exp wrong direction: exp_in=%0d exp_out=%0d", exp_in, exp_out);

endmodule
module sfu_sign_expo
    import sfu_pkg::*;
(
    input  sfu_op_t     op,
    input  logic        sign_in,   
    input  logic [7:0]  exp_in,
    input  logic [22:0] mant_in, //check for special cases
    output logic        sign_out,
    output logic [7:0]  exp_out
);
endmodule
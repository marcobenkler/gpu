module sfu_sign_expo
    import sfu_pkg::*;
(
    input  sfu_op_t     op,
    input  logic        sign_in,   
    input  logic [7:0]  exp_in,
    output logic        sign_out,
    output logic [7:0]  exp_out
);
endmodule
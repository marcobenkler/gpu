module sfu_top
    import sfu_pkg::*;
(
    input  logic        clk,
    input  logic        reset_n,
    input  logic [31:0] operand,
    input  sfu_op_t     op,
    input  logic        valid_in,
    output logic        valid_out,
    output logic [31:0] result
);

endmodule
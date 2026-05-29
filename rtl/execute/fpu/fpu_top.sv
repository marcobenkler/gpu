module fpu_top
    import fpu_pgk::*;
(
    input  logic        clk,
    input  logic        reset_n,
    input  logic [31:0] operand,
    input  logic [2:0]  funct3,
    input  logic        valid_in,
    output logic        valid_out,
    output logic [31:0] result
);

endmodule
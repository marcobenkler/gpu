module sfu_newton
    import sfu_pkg::*;
(
    input  logic        clk,
    input  logic        reset_n,
    input  logic        valid_in, 
    input  sfu_op_t     op,    
    input  logic [22:0] mant_in,
    input  logic [6:0]  seed,
    output logic        valid_out,
    output logic [22:0] mant_out
);

endmodule
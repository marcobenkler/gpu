module alu_addsub_integer (
    input   logic [31:0] a,
    input   logic [31:0] b,
    input   logic        sub,
    output  logic [31:0] result
);

    logic [31:0] b_buf;
    
    assign b_buf = sub ? ~b : b;
    assign result = a + b_buf + sub;

endmodule
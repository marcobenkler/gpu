module alu_logic_integer(
    input   logic [31:0] a,
    input   logic [31:0] b,
    input   logic [1:0]  logic_op,
    output  logic [31:0] result
);

    always_comb begin
        unique case (logic_op)
            2'b00: result = a & b;
            2'b01: result = a | b;
            2'b10: result = a ^ b;
            default: result = '0;
        endcase
    end

endmodule
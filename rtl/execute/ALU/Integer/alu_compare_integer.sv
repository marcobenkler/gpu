module alu_compare_integer(
    input   logic [31:0] a,
    input   logic [31:0] b,
    input   logic [1:0]  cmp_op,
    output  logic [31:0] result
);

    always_comb begin
        unique case (cmp_op)
            2'b00: result   = {31'b0, (a == b)};
            2'b01: result   = {31'b0, ($signed(a) < $signed(b))};
            2'b10: result   = {31'b0, (a < b)};
            2'b11: result   = {31'b0, (a != b)};
            default: result = '0;
        endcase
    end

endmodule
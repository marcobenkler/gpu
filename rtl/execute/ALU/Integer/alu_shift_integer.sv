module alu_shift_integer(
    input   logic [31:0] a,
    input   logic [31:0] b,
    input   logic [1:0]  shift_op,
    output  logic [31:0] result
);

    logic [4:0] shift_range;

    assign shift_range = b[4:0];

    always_comb begin
        unique case (shift_op)
            2'b00: result = a << shift_range;
            2'b01: result = a >> shift_range;
            2'b10: result = signed'(a) >>> shift_range;
            default: result = '0;
        endcase
    end

endmodule
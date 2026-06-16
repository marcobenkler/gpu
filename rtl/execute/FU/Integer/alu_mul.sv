// Might migrate next to alu, if timing violations occur
module alu_mul
    import exec_pkg::*;
(
    input  logic [31:0] op_a,
    input  logic [31:0] op_b,
    input  int_alu_op_e alu_op,
    output logic [31:0] mul_res
);

    logic [63:0] multi_ss; // mul, mulh
    logic [63:0] multi_su; // mulhsu
    logic [63:0] multi_uu; // mulhu

    always_comb begin
        multi_ss = $signed(op_a) * $signed(op_b);
        multi_su = $signed({op_a[31],op_a}) * $signed({1'b0,op_b});
        multi_uu = $unsigned(op_a) * $unsigned(op_b);
    end

    always_comb begin
        case (alu_op)
            INT_MUL:    mul_res = multi_ss[31:0];
            INT_MULH:   mul_res = multi_ss[63:32];
            INT_MULHSU: mul_res = multi_su[63:32];
            INT_MULHU:  mul_res = multi_uu[63:32];
            default:    mul_res = '0;
        endcase
    end

endmodule
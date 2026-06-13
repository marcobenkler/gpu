module fu_top
    import alu_pkg::*;
(
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    input  logic [3:0]  op,
    input  fu_sel_e     fu_sel,
    output logic [31:0] result
);

    logic [31:0] result_fpu;
    logic [31:0] result_alu;

    int_alu_op_e alu_op;
    assign alu_op = int_alu_op_e'(op)
    
    fpu_op_e fpu_op;
    assign fpu_op = fpu_op_e'(op)

    fpu_top u_fpu_top(
        .operand_a(operand_a),
        .operand_b(operand_b),
        .fpu_op(fpu_op),
        .fpu_result(result_fpu)
    );

    alu_top u_alu_top(
        .operand_a(operand_a),
        .operand_b(operand_b),
        .alu_op(alu_op),
        .result(result_alu)
    );

    always_comb begin 
        case (fu_sel)
            FU_ALU: result = result_alu;
            FU_FPU: result = result_fpu;
        endcase
    end

endmodule
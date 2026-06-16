module fu_top
    import exec_pkg::*;
(
    input  logic [31:0] op_a,
    input  logic [31:0] op_b,
    input  int_alu_op_e alu_op,
    input  fpu_op_e     fpu_op,
    input  fu_sel_e     fu_sel,
    output logic [31:0] result
);

    logic [31:0] result_fpu;
    logic [31:0] result_alu;

    fpu_top u_fpu_top(
        .operand_a(op_a),
        .operand_b(op_b),
        .fpu_op(fpu_op),
        .fpu_result(result_fpu)
    );

    alu_top_integer u_alu_top(
        .op_a(op_a),
        .op_b(op_b),
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
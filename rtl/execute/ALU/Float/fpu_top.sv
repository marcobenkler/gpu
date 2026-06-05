module fpu_top
    import alu_pkg::*;
(
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    input  fpu_op_e     fpu_op,
    output logic [31:0] fpu_result
);

    logic [31:0] add_sub_result;
    logic [31:0] cmp_result;
    logic [31:0] cvt_result;
    logic [31:0] mul_result;

    logic       add_op;
    logic       cmp_op;
    logic [1:0] cvt_op;

    always_comb begin
        add_op = 0;
        cmp_op = 0;
        cvt_op = 0;

        case (fpu_op)
            FPU_ADD:       add_op = 1'b0;
            FPU_SUB:       add_op = 1'b1; 
            FPU_MIN:       cmp_op = 1'b0;
            FPU_MAX:       cmp_op = 1'b1;
            FPU_CVT_F2I_S: cvt_op = 2'b00;
            FPU_CVT_F2I_U: cvt_op = 2'b01;
            FPU_CVT_I2F_S: cvt_op = 2'b10;
            FPU_CVT_I2F_U: cvt_op = 2'b11;
            default: ;
        endcase
    end

    

endmodule
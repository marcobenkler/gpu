module alu_top_integer
    import exec_pkg::*;
(
    input  logic [31:0] op_a,
    input  logic [31:0] op_b,
    input  int_alu_op_e alu_op,
    output logic [31:0] result    
);

    logic [31:0] addsub_result;
    logic [31:0] compare_result;
    logic [31:0] shift_result;
    logic [31:0] logic_result;
    logic [31:0] mul_result;

    logic        sub;
    logic [1:0]  cmp_op;
    logic [1:0]  logic_op;
    logic [1:0]  shift_op;

    always_comb begin 
        sub      = 1'b0;
        cmp_op   = 2'b00;
        logic_op = 2'b00;
        shift_op = 2'b00;
        
        unique case (alu_op)
            INT_ADD: sub      = 1'b0;
            INT_SUB: sub      = 1'b1;
            INT_AND: logic_op = 2'b00;
            INT_OR:  logic_op = 2'b01;
            INT_XOR: logic_op = 2'b10;
            INT_SLL: shift_op = 2'b00;
            INT_SRL: shift_op = 2'b01;
            INT_SRA: shift_op = 2'b10;
            INT_SLT: cmp_op   = 2'b01;
            INT_SLTU:cmp_op   = 2'b10;
            default: begin
            end
        endcase
    end
    
    alu_addsub_integer  u_addsub_module(.a(op_a),  .b(op_b), .result(addsub_result),  .sub(sub));           //sub / add
    alu_compare_integer u_compare_module(.a(op_a), .b(op_b), .result(compare_result), .cmp_op(cmp_op));     //eq / lt / ltu/ ne
    alu_shift_integer   u_shift_module(.a(op_a),   .b(op_b), .result(shift_result),   .shift_op(shift_op)); //sl / srl / sra      
    alu_logic_integer   u_logic_module(.a(op_a),   .b(op_b), .result(logic_result),   .logic_op(logic_op)); //and / or / xor
    alu_mul             u_alu_mul(.op_a(op_a), .op_b(op_b), .alu_op(alu_op), .mul_res(mul_result));

    always_comb begin
        unique case (alu_op)
            INT_ADD, INT_SUB:
                result = addsub_result;
            INT_AND, INT_OR, INT_XOR:
                result = logic_result;
            INT_SLL, INT_SRL, INT_SRA:
                result = shift_result;
            INT_SLT, INT_SLTU:
                result = compare_result;
            INT_MUL, INT_MULH, INT_MULHSU, INT_MULHU:
                result = mul_result;
            default: result = '0;
        endcase
    end

endmodule
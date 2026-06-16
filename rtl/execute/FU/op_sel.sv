module op_sel
    import exec_pkg::*;
(
    input  logic [31:0] rdata1,
    input  logic [31:0] rdata2,
    input  logic [31:0] pc_cur,
    input  logic [31:0] imm,
    input  exec_src_a_e exec_src_a,
    input  exec_src_b_e exec_src_b,
    output logic [31:0] op_a,
    output logic [31:0] op_b
);

    always_comb begin
        case (exec_src_a)
            SRC_REG_A: op_a = rdata1;
            SRC_PC:    op_a = pc_cur;
        endcase
        case (exec_src_b)
            SRC_REG_B: op_b = rdata2;
            SRC_IMM:   op_b = imm; 
        endcase
    end

endmodule
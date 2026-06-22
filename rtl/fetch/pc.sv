module pc
    import exec_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  pc_src_e     pc_src,
    input  logic [31:0] imm_res,
    input  logic [31:0] exec_res,
    input  logic [31:0] pc_cur,
    output logic [31:0] pc_nxt,
    output logic [31:0] pc_def //for JAL
);

    assign pc_def = pc_cur + 1;
    always_comb begin
        case (pc_src)
            PC_4:    pc_nxt = pc_def;
            PC_IMM:  pc_nxt = imm_res;
            PC_FU:   pc_nxt = exec_res;
            default: pc_nxt = pc_def;
        endcase
    end

endmodule
module pc
    import exec_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  pc_src_e     pc_src,
    input  logic [31:0] imm_res,
    input  logic [31:0] exec_res,
    output logic [31:0] pc_current
);

    logic [31:0] pc_def;

    always_ff @(posedge clk) begin : pc_update
        if (!rst_n)
            pc_current <= '0;
        else begin
            pc_current <= pc_next;
        end
    end

    always_comb begin
        pc_def = pc_current + 4;
        case (pc_src)
            PC_4:    pc_next = pc_def;
            PC_IMM:  pc_next = imm_res;
            PC_FU:   pc_next = exec_res;
            default: pc_next = pc_def;
        endcase
    end

endmodule
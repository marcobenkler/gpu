module wb
    import exec_pkg::*;
#(
    parameter lane_cnt = 4;
)
(
    input  res_src_e    res_src,
    input  logic [31:0] imm_res  [0: lane_cnt - 1],
    input  logic [31:0] mem_res  [0: lane_cnt - 1],
    input  logic [31:0] exec_res [0: lane_cnt - 1],
    input  logic [31:0] pc_res   [0: lane_cnt - 1],
    output logic [31:0] wb_res   [0: lane_cnt - 1]
);

    always_comb begin
        for (int i = 0; i < lane_cnt; i++) begin
            case (res_src)
                RES_FU:  wb_res[i] = exec_res[i];
                RES_MEM: wb_res[i] = mem_res[i];
                RES_IMM: wb_res[i] = imm_res[i];
                RES_PC4: wb_res[i] = pc_res[i];
                default: wb_res[i] = exec_res[i];
            endcase
        end
    end

endmodule
module wb
    import exec_pkg::*;
(
    input  res_src_e    res_src,
    input  logic [31:0] imm_res,
    input  logic [31:0] mem_res,
    input  logic [31:0] exec_res,
    input  logic [31:0] pc_res,
    output logic [31:0] wb_res
);

    always_comb begin
        case (res_src)
            RES_FU:  wb_res = exec_res;
            RES_MEM: wb_res = mem_res;
            RES_IMM: wb_res = imm_res;
            RES_PC4: wb_res = pc_res;
            default: wb_res = exec_res;
        endcase
    end

endmodule
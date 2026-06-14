module gpr #(
    parameter warp_cnt = 4,
    parameter lane_cnt = 4,
    parameter reg_cnt  = 32
)(
    input  logic                          clk,
    input  logic [$clog2(warp_cnt) - 1:0] id_warp_id,
    input  logic [4:0]                    id_rs1,
    input  logic [4:0]                    id_rs2,
    input  logic [$clog2(warp_cnt) - 1:0] wb_warp_id,
    input  logic [4:0]                    wb_rd,
    input  logic [31:0]                   wb_data [0:lane_cnt - 1],
    input  logic [lane_cnt - 1:0]         wb_en, // act_msk & wrt_rd
    output logic [31:0]                   rdata1 [0:lane_cnt - 1],
    output logic [31:0]                   rdata2 [0:lane_cnt - 1]
);

    (* ram_style = "block" *) logic [31:0] reg_mem [0:warp_cnt * lane_cnt * reg_cnt -1];

    always_ff @(posedge clk) begin : gpr_reg
        for (int i = 0; i < lane_cnt; i++) begin
            //READ
            rdata1[i] <= reg_mem[id_rs1 + i * reg_cnt + id_warp_id * lane_cnt * reg_cnt];
            rdata2[i] <= reg_mem[id_rs2 + i * reg_cnt + id_warp_id * lane_cnt * reg_cnt];
            
            //WRITE
            if (wb_en[i] && wb_rd != '0) begin
                reg_mem[wb_rd + i * reg_cnt + wb_warp_id * lane_cnt * reg_cnt] <= wb_data[i];
            end
        end
    end

endmodule
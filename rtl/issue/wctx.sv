module wctx
    import gpu_pkg::*;
    import warp_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic [$clog2(warp_cnt)-1:0] warp_id,
    input  logic                        pc_en,
    input  logic [31:0]                 pc_start,
    input  logic                        pc_init,
    input  warp_ctx_t                   ctx_in,
    output warp_ctx_t                   ctx_tbl [0:warp_cnt-1]
);

    always_ff @(posedge clk or negedge rst_n) begin //rst_n prohibits bram inference
        if (!rst_n) begin
            for (int i = 0; i < warp_cnt; i++)begin
                ctx_tbl[i] <= '0;
            end
        end
        else if (pc_init) begin
            for (int i = 0; i < warp_cnt; i++)
                ctx_tbl[i].pc <= pc_start;
        end
        else if (pc_en) begin
            ctx_tbl[warp_id] <= ctx_in;
        end
    end

endmodule
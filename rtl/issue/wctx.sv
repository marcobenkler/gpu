module wctx
    import gpu_pkg::*;
    import warp_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic [$clog2(warp_cnt)-1:0] warp_id,
    input  logic                        pc_en,
    input  warp_ctx_t                   ctx_in,
    output warp_ctx_t                   ctx_out
);

    warp_ctx_t ctx_tbl [0:warp_cnt-1];

    assign ctx_out = ctx_tbl[warp_id];

    always_ff @(posedge clk or negedge rst_n) begin //rst_n prohibits bram inference
        if (!rst_n) begin
            for (int i = 0; i < lane_cnt; i++)begin
                ctx_out <= '0;
            end
        end
        else if (pc_en) begin
            ctx_tbl[warp_id] <= ctx_in;
        end
    end

endmodule
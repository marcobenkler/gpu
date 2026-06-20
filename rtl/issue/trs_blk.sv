module wstate_ctrl
    import gpu_pkg::*;
    import warp_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic [reg_cnt-1:0]          scoreboard   [0:warp_cnt-1],
    input  logic [$clog2(warp_cnt)-1:0] fetch_warp_id,
    input  logic [4:0]                  rs1,
    input  logic [4:0]                  rs2,
    output wsched_entry_t               wsched_entry [0:warp_cnt-1]
);

    wsched_entry_t wsched_next [0:warp_cnt-1];

    always_ff @(posedge clk or negedge rst_n) begin
        for (int i = 0; i < warp_cnt; i++) begin
            if (!rst_n) begin
                wsched_entry[i]          <= '0;
                wsched_entry[i].state    <= WARP_IDLE;
                wsched_entry[i].age_rank <= i[$clog2(warp_cnt)-1:0];
                end
            else
                wsched_entry[i] <= wsched_next[i];
        end
    end
    
    always_comb begin
        for (int i = 0; i < warp_cnt; i++)
            wsched_next[i] = wsched_entry[i];
        //SB
        if (scoreboard[fetch_warp_id][rs1] || scoreboard[fetch_warp_id][rs2])
            wsched_next[fetch_warp_id].state = WARP_STL_SB;
    end

endmodule
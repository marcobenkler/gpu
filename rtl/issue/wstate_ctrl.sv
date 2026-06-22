/*
SB and MEM can never be overwritten at the same time, SB is fetch and wb stage, mem is mem only
*/

module wstate_ctrl
    import gpu_pkg::*;
    import warp_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic                        warp_bar,
    input  logic [$clog2(warp_cnt)-1:0] fetch_warp_id,
    input  logic [4:0]                  rs1,
    input  logic [4:0]                  rs2,
    input  logic [4:0]                  id_rd,
    input  logic                        mem_stl,
    input  logic [$clog2(warp_cnt)-1:0] mem_warp_id,
    input  warp_ctx_t                   warp_ctx     [0:warp_cnt-1],
    input  logic [31:0]                 warp_activate_cnt,
    input  logic                        wspawn,
    input  logic [$clog2(warp_cnt)-1:0] wb_warp_id,
    input  logic [4:0]                  wb_rd,
    output wsched_entry_t               wsched_entry [0:warp_cnt-1]
);

    wsched_entry_t       wsched_nxt   [0:warp_cnt-1];
    logic                all_at_bar;
    logic [warp_cnt-1:0] bar_msk;
    logic [warp_cnt-1:0] active_msk;

    always_ff @(posedge clk or negedge rst_n) begin
        for (int i = 0; i < warp_cnt; i++) begin
            if (!rst_n) begin
                wsched_entry[i]          <= '0;
                wsched_entry[i].state    <= WARP_IDLE;
                wsched_entry[i].age_rank <= i[$clog2(warp_cnt)-1:0];
                end
            else
                wsched_entry[i] <= wsched_nxt[i];
        end
    end

    always_comb begin : bar_cmpt
        for (int i = 0; i < warp_cnt; i++) begin
            bar_msk[i]    = wsched_entry[i].state == WARP_BAR;
            active_msk[i] = wsched_entry[i].state != WARP_IDLE &&
                            wsched_entry[i].state != WARP_FINISHED;
        end
    end

    assign all_at_bar = |(active_msk) && ((active_msk & bar_msk) == active_msk);

    /* later
    always_comb begin : sb_cmpt
            wsched_nxt[fetch_warp_id].scoreboard[id_rd] = 1'b1;
            wsched_nxt[wb_warp_id].scoreboard[wb_rd]    = 1'b0;
    end
    */

    always_comb begin : state_cmpt
        for (int i = 0; i < warp_cnt; i++) begin
            wsched_nxt[i] = wsched_entry[i];
            //BARRIER remove
            if (all_at_bar && bar_msk[i])
                wsched_nxt[i].state = WARP_READY;
            //SPAWN
            else if (wspawn &&
                     (wsched_entry[0].state == WARP_IDLE) &&
                     (i < warp_activate_cnt))
                wsched_nxt[i[$clog2(warp_cnt)-1:0]].state = WARP_READY;
            //FINISH
            else if (warp_ctx[i].amsk == {lane_cnt{1'b0}} &&
                     wsched_entry[i].state != WARP_IDLE)
                wsched_nxt[i].state = WARP_FINISHED;
            //BARRIER add
            else if (warp_bar && fetch_warp_id == i[$clog2(warp_cnt)-1:0])
                wsched_nxt[fetch_warp_id].state = WARP_BAR;
            //MEM
            else if (mem_stl && mem_warp_id == i[$clog2(warp_cnt)-1:0])
                wsched_nxt[mem_warp_id].state = WARP_STL_MEM;
            //SB
            //Hold
            else if (wsched_entry[i[$clog2(warp_cnt)-1:0]].state == WARP_STL_SB &&
                     wsched_entry[i[$clog2(warp_cnt)-1:0]].scoreboard != '0)
                wsched_nxt[i[$clog2(warp_cnt)-1:0]].state = WARP_STL_SB;
            //Set
            else if ((wsched_entry[fetch_warp_id].scoreboard[rs1] ||
                      wsched_entry[fetch_warp_id].scoreboard[rs2] ||
                      wsched_entry[fetch_warp_id].scoreboard[id_rd]    ) &&
                      fetch_warp_id == i[$clog2(warp_cnt)-1:0])
                wsched_nxt[fetch_warp_id].state = WARP_STL_SB;
            //READY
            else //fetching implicitly in here, if fetched only one cycle then ready again
                 //fetching opnly relevant when pipelining
                wsched_nxt[i[$clog2(warp_cnt)-1:0]].state = WARP_READY;
        end
    end

endmodule
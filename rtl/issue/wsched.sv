module wsched
    import warp_pkg::*;
    import gpu_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  wsched_entry_t               wsched_entry [0:warp_cnt - 1],
    output logic                        issue_fired,
    output logic [$clog2(warp_cnt)-1:0] warp_id
);

    logic [$clog2(warp_cnt)-1:0] last_issued;
    logic [$clog2(warp_cnt)-1:0] pick;

    logic [$clog2(warp_cnt)-1:0] best_rank;

    always_ff @(posedge clk) begin
        if (!rst_n)
            warp_id     <= '0;
            last_issued <= '0
        else
            warp_id     <= pick;
            last_issued <= pick;
    end

    always_comb begin
        issue_fired = 1'b0; // special case, no warp ready enter NOP
        pick        = '0;
        best_rank   = '1;
        //Greedy
        if (wsched_entry[last_issued].state == WARP_READY) begin
            pick = last_issued;
            issue_fired = 1'b1;
        end
        //Oldest
        else begin
            for (int i = 0; i < warp_cnt; i++) begin
                if (wsched_entry[i].state == WARP_READY &&
                    wsched_entry[i].age_rank < best_rank) begin
                    best_rank   = wsched_entry[i].age_rank;
                    pick        = i[$clog2(warp_cnt)-1:0];
                    issue_fired = 1'b1;
                    break;
                end
            end
        end
    end

endmodule
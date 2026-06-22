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

//Multicycle for first debug
typedef enum logic [1:0] {
    MC_ISSUE,
    MC_WAIT1,
    MC_WAIT2
} mc_state_e;

    mc_state_e mc_state, mc_state_nxt;

    always_ff @(posedge clk or negedge rst_n) begin : mc_debug
        if (!rst_n)
            mc_state <= MC_ISSUE;
        else
            mc_state <= mc_state_nxt;
    end

    always_comb begin : mc_debug_comb
        mc_state_nxt = mc_state;
        case (mc_state)
            MC_ISSUE: if (issue_fired) mc_state_nxt = MC_WAIT1;
            MC_WAIT1: mc_state_nxt = MC_WAIT2;
            MC_WAIT2: mc_state_nxt = MC_ISSUE;
            default: mc_state_nxt = MC_ISSUE;
        endcase
    end

    logic [$clog2(warp_cnt)-1:0] last_issued;
    logic [$clog2(warp_cnt)-1:0] pick;

    logic [$clog2(warp_cnt)-1:0] best_rank;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            warp_id     <= '0;
            last_issued <= '0;
        end
        else begin
            warp_id     <= pick;
            last_issued <= pick;
        end
    end

    always_comb begin
        issue_fired = 1'b0; // special case, no warp ready enter NOP
        pick        = last_issued;
        best_rank   = '1;
        if (mc_state == MC_ISSUE) begin
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
                    end
                end
            end
        end
    end

endmodule
module wsched
    import warp_pkg::*;
    import gpu_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  warp_state_e                 warp_states [0:warp_cnt - 1],
    output logic                        issue_fired,
    output logic [$clog2(warp_cnt)-1:0] warp_id
);

    logic [$clog2(warp_cnt)-1:0] last_issued;
    logic [$clog2(warp_cnt)-1:0] pick;

    always_ff @(posedge clk) begin
        if (!rst_n)
            warp_id <= 0;
        else
            warp_id <= pick;
    end

    always_comb begin
        //Greedy
        if (warp_states[last_issued] == WARP_READY)
            pick = last_issued;
            issue_fired = 1'b1;
        //Oldest
        else begin
            issue_fired = 1'b0; // special case, no warp ready enter NOP
            pick        = '0;
            for (int i = 0; i < warp_cnt; i++)begin
                if (warp_states[i] == WARP_READY) begin
                    pick = i;
                    issue_fired = 1'b1;
                    break;
                end
            end
        end
    end

endmodule
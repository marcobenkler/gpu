module wctx
    import gpu_pkg::*;
(
    input  logic                        clk,
    input  logic                        rst_n,
    input  logic [$clog2(warp_cnt)-1:0] warp_id,
    input  logic [31:0]                 pc_nxt,
    output logic [31:0]                 pc_cur,
    output logic [lane_cnt-1:0]         amsk
);

    logic [31:0] pc_tbl [0:lane_cnt-1];

    assign pc_cur = pc_tbl[warp_id];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < lane_cnt; i++)begin
                pc_tbl[i] <= '0;
                amsk[i]   <= '0;
            end
        end
        else begin
            pc_tbl[warp_id] <= pc_nxt;
            amsk               <= 4'b1111; //later
        end
    end

endmodule
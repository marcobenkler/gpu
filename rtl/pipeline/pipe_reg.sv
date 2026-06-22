module pipe_reg#(
    parameter type T = logic
)(
    input  logic clk,
    input  logic rst_n,
    input  T     in,
    output T    out   
);

    always_ff @(posedge clk or negedge rst_n) begin : pipe_clocking
        if (!rst_n)
            out <= '0;
        else
            out <= in;
    end

endmodule
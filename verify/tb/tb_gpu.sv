module tb_gpu();

    logic clk;
    logic rst_n;

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("sim/gpu.fst");
        $dumpvars(0, tb_gpu);
    end

    gpu u_gpu(
        .clk(clk),
        .rst_n(rst_n)
    );

    initial begin
        rst_n = 0;
        #5
        rst_n = 1;
        #5
        $finish;
    end

endmodule
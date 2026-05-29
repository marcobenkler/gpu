module tb_sfu_golden
    import sfu_pkg::*;
();

    logic clk;
    logic reset_n;
    sfu_op_t op;
    logic [31:0] operand;
    logic        valid_in;
    logic        valid_out;
    logic [31:0] result;

    sfu_top u_sfu_top(
        .clk(clk),
        .reset_n(reset_n),
        .operand(operand),
        .op(op),
        .valid_in(valid_in),
        .valid_out(valid_out),
        .result(result)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    logic [31:0] golden_in  [0:4095];
    logic [31:0] golden_out [0:4095];
    int pass_count;
    int fail_count;
    int vec_count;

    function automatic int ulp_diff(logic [31:0] a, logic [31:0] b);
        int sa, sb;
        sa = a[31] ? -($signed({1'b0, a[30:0]})) : $signed({1'b0, a[30:0]});
        sb = b[31] ? -($signed({1'b0, b[30:0]})) : $signed({1'b0, b[30:0]});
        return (sa > sb) ? (sa - sb) : (sb - sa);
    endfunction

    task load_and_test(string filename, sfu_op_t op_code);
        int fd;
        vec_count = 0;

        fd = $fopen(filename, "r");
        if (fd == 0)
            $fatal(1, "Could not open %s", filename);

        while (!$feof(fd))begin
            if ($fscanf(fd, "%h %h", golden_in[vec_count], golden_out[vec_count]) == 2)
                vec_count++;
        end
        $fclose(fd);
        $display("Loaded %0d vectors from %s", vec_count, filename);

        for (int i = 0; i < vec_count; i++) begin
            @(posedge clk);
            operand  <= golden_in[i];
            op       <= op_code;
            valid_in <= 1'b1;

            @(posedge clk);
            valid_in <= 1'b0;

            wait (valid_out);
            if (ulp_diff(result, golden_out[i]) > 2) begin
                $display("[%s] FAIL #%0d: in=%08h expected=%08h got=%08h",
                         filename, i, golden_in[i], golden_out[i], result);
                fail_count++;
            end
            else pass_count++;

        end
    endtask

    initial begin
        $dumpfile("sim/sfu/sfu_golden.fst");
        $dumpvars(0, tb_sfu_golden);

        pass_count = 0;
        fail_count = 0;

        reset_n  = 0;
        valid_in = 0;
        operand  = 0;
        op       = 0;
        repeat (5) @(posedge clk);
        reset_n = 1;

        load_and_test("hex/rcp_golden_model.hex",   SFU_RCP);
        load_and_test("hex/rsqrt_golden_model.hex", SFU_RSQRT);
        load_and_test("hex/lg2_golden_model.hex",   SFU_LG2);
        load_and_test("hex/ex2_golden_model.hex",   SFU_EX2);
        load_and_test("hex/sin_golden_model.hex",   SFU_SIN);
        load_and_test("hex/cos_golden_model.hex",   SFU_COS);
    
        $display("\n=== RESULTS: %0d PASS, %0d FAIL ===\n", pass_count, fail_count);
        $finish;
    end

endmodule
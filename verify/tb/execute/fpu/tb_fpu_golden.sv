module tb_fpu_golden
    import exec_pkg::*;
();

    logic [31:0] operand_a;
    logic [31:0] operand_b;
    fpu_op_e     fpu_op;
    logic [31:0] fpu_result;


    logic [31:0] golden_in_a [0:37000];
    logic [31:0] golden_in_b [0:37000];
    logic [31:0] golden_res  [0:37000];
    int pass_count;
    int fail_count;
    int vec_count;

    logic clk;

    initial clk = 0;
    always #5 clk = ~clk;

    fpu_top u_fpu_top(
        .operand_a(operand_a),
        .operand_b(operand_b),
        .fpu_op(fpu_op),
        .fpu_result(fpu_result)
    );

    task load_and_test(string filename, fpu_op_e fpu_op_code);
        int fd;
        vec_count = 0;

        fd = $fopen(filename, "r");
        if (fd == 0)
            $fatal(1, "Could not open %s", filename);

        while (!$feof(fd)) begin
            if ($fscanf(fd, "%h %h %h", golden_in_a[vec_count], golden_in_b[vec_count], golden_res[vec_count]) == 3)
                vec_count++; 
        end
        $fclose(fd);
        $display("LOADED %0d vectors from %s", vec_count, filename);

        for (int i = 0; i < vec_count; i++) begin
            @(posedge clk);
            operand_a = golden_in_a[i];
            operand_b = golden_in_b[i];
            fpu_op    = fpu_op_code;

            @(posedge clk);
            
            if (fpu_result != golden_res[i]) begin
                $display("[%s] FAIL #%0d: in_a=%08h, in_b=%08h, expected=%08h, got=%08h var=%0h",
                         filename, i, golden_in_a[i], golden_in_b[i], golden_res[i], fpu_result,
                         u_fpu_top.exp_normalized);
                fail_count++;
                if (fail_count > 10) $finish;
            end
            else pass_count++;

        end
    endtask
    
    task load_and_test_one(string filename, fpu_op_e fpu_op_code);
        int fd;
        vec_count = 0;

        fd = $fopen(filename, "r");
        if (fd == 0)
            $fatal(1, "Could not open %s", filename);

        while (!$feof(fd)) begin
            if ($fscanf(fd, "%h %h", golden_in_a[vec_count], golden_res[vec_count]) == 2)
                vec_count++; 
        end
        $fclose(fd);
        $display("LOADED %0d vectors from %s", vec_count, filename);

        for (int i = 0; i < vec_count; i++) begin
            @(posedge clk);
            operand_a = golden_in_a[i];
            fpu_op    = fpu_op_code;

            @(posedge clk);
            
            if (fpu_result != golden_res[i]) begin
                $display("[%s] FAIL #%0d: in=%08h, expected=%08h, got=%08h var=%0h",
                         filename, i, golden_in_a[i], golden_res[i], fpu_result,
                         u_fpu_top.spec_vld);
                fail_count++;
                //if (fail_count > 10) $finish;
            end
            else pass_count++;

        end
    endtask

    initial begin
        $dumpfile("sim/fpu/tb_golden.fst");
        $dumpvars(0, tb_fpu_golden);

        pass_count = 0;
        fail_count = 0;

        load_and_test("hex/fpu/add_golden_model.hex", FPU_ADD);
        load_and_test("hex/fpu/sub_golden_model.hex", FPU_SUB);
        load_and_test("hex/fpu/min_golden_model.hex", FPU_MIN);
        load_and_test("hex/fpu/max_golden_model.hex", FPU_MAX);
        load_and_test("hex/fpu/mul_golden_model.hex", FPU_MUL);
        load_and_test_one("hex/fpu/cvt_f2i_s_golden_model.hex", FPU_CVT_F2I_S);
        load_and_test_one("hex/fpu/cvt_f2i_u_golden_model.hex", FPU_CVT_F2I_U);
        load_and_test_one("hex/fpu/cvt_i2f_s_golden_model.hex", FPU_CVT_I2F_S);
        load_and_test_one("hex/fpu/cvt_i2f_u_golden_model.hex", FPU_CVT_I2F_U);

        $display("\n=== PASS: %0d   FAIL: %0d ===\n", pass_count, fail_count);
        $finish;
    end

endmodule
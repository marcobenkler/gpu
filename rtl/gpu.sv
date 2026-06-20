module gpu
    import exec_pkg::*;
    import warp_pkg::*;
    import gpu_pkg::*;
(
    input logic clk,
    input logic rst_n
);
    genvar i;

    //EACH STAGES OUTPUT
    //ISSUE
    logic [1:0] warp_id;
    warp_ctx_t  ctx_in;
    warp_ctx_t  ctx_out;

    wsched_entry_t      wsched_entry [0:warp_cnt-1];
    logic [reg_cnt-1:0] scoreboard   [0:warp_cnt-1]; //written to in issue cleared in wb

    //FETCH
    logic [31:0] imm_res;
    logic [31:0] pc_def;
    logic [31:0] instr;
    logic [31:0] imm;

    //DECODE
    logic        reg_wrt;
    logic        mem_wrt;
    pc_src_e     pc_src;
    fu_sel_e     fu_sel;
    int_alu_op_e alu_op;
    fpu_op_e     fpu_op;
    exec_src_a_e exec_src_a;
    exec_src_b_e exec_src_b;
    res_src_e    res_src;

    logic [31:0] rdata1 [0:lane_cnt - 1];
    logic [31:0] rdata2 [0:lane_cnt - 1];

    //EXECUTE
    logic [31:0] op_a   [0:lane_cnt - 1];
    logic [31:0] op_b   [0:lane_cnt - 1];

    logic [31:0] fu_res [0:lane_cnt - 1];

    //MEMORY
    
    //WRITEBACK
    logic [31:0] wb_res [0:lane_cnt - 1];


    //ISSUE
    assign ctx_in.amsk = {lane_cnt{1'b1}};
    
    wctx u_wctx(
        .clk(clk),
        .rst_n(rst_n),
        .warp_id(warp_id),
        .pc_en(issue_fired),
        .ctx_in(ctx_in),
        .ctx_out(ctx_out) //output
    );

    wsched u_wsched(
        .clk(clk),
        .rst_n(rst_n),
        .wsched_entry(wsched_entry),
        .issue_fired(issue_fired), //output
        .warp_id(warp_id) //output
    );

    wstate_ctrl u_wstate_ctrl(
        .clk(clk),
        .rst_n(rst_n),
        .scoreboard(scoreboard),
        .fetch_warp_id(warp_id),
        .rs1(instr[19:15])
        .rs2(instr[24:20]),
        .stl_mem_warp_id(warp_id),
        .wsched_entry(wsched_entry) //output
    )

    //FETCH
    assign imm_res = ctx_out.pc + imm;

    pc u_pc(
        .clk(clk),
        .rst_n(rst_n),
        .pc_src(pc_src),
        .imm_res(imm_res),
        .exec_res(wb_res[0]), //doesnot matter which, all are the same
        .pc_cur(ctx_out.pc),
        .pc_nxt(ctx_in.pc), //output
        .pc_def(pc_def)  //output
    );

    instr_mem u_instr_mem(
        .clk(clk),
        .pc(ctx_out.pc),
        .instr(instr) //output
    );

    imm_gen u_imm_gen(
        .instr(instr),
        .imm(imm) //output
    );

    //DECODE
    decoder u_decoder(
        .instr(instr),
        .reg_wrt(reg_wrt),     //output
        .mem_wrt(mem_wrt),     //output
        .pc_src(pc_src),       //output
        .fu_sel(fu_sel),       //output
        .alu_op(alu_op),       //output
        .fpu_op(fpu_op),       //output
        .exec_src_a(exec_src_a),//output
        .exec_src_b(exec_src_b),//output
        .res_src(res_src)      //output
    );

    gpr u_gpr(
        .clk(clk),
        .id_warp_id(warp_id),
        .id_rs1(instr[19:15]),
        .id_rs2(instr[24:20]),
        .wb_warp_id(warp_id),
        .wb_rd(instr[11:7]),
        .wb_res(wb_res),
        .wb_en({4{reg_wrt}} & ctx_out.amsk),
        .rdata1(rdata1), //output
        .rdata2(rdata2)  //output
    );

    //EXECUTE
    generate
        for(i = 0; i < lane_cnt; i++) begin : lane
            op_sel u_op_sel(
                .rdata1(rdata1[i]),
                .rdata2(rdata2[i]),
                .pc_cur(ctx_out.pc),
                .imm(imm),
                .exec_src_a(exec_src_a),
                .exec_src_b(exec_src_b),
                .op_a(op_a[i]), //output
                .op_b(op_b[i])  //output
            );

            fu_top u_fu_top(
                .op_a(op_a[i]),
                .op_b(op_b[i]),
                .alu_op(alu_op),
                .fpu_op(fpu_op),
                .fu_sel(fu_sel),
                .result(fu_res[i]) //output
            );
        end
    endgenerate

    wb u_wb(
        .res_src(res_src),
        .imm_res(imm_res),
        .mem_res('{default: '0}),
        .fu_res(fu_res),
        .pc_res(pc_def),
        .wb_res(wb_res) //output
    );

endmodule
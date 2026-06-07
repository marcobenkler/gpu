module fpu_top
    import exec_pkg::*;
(
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    input  fpu_op_e     fpu_op,
    output logic [31:0] fpu_result
);

    logic [31:0] add_sub_result;
    logic [31:0] cmp_result;
    logic [31:0] cvt_result;
    logic [31:0] mul_result;

    logic       add_op;
    logic       cmp_op;
    logic [1:0] cvt_op;

    //unpack
    logic        sign_a;
    logic        sign_b;
    logic [7:0]  exp_a;
    logic [7:0]  exp_b;
    logic [23:0] mant_a;
    logic [23:0] mant_b;
    logic [31:0] spec_out;
    logic        spec_vld;
    logic [31:0] flushed_operand_a;
    logic [31:0] flushed_operand_b;

    //shifter
    logic [7:0]  exp_shifted;
    logic [23:0] mant_a_shifted;
    logic [23:0] mant_b_shifted;
    grs_t        flags_out_shifter;
    logic        shifted;

    //exec
    logic [24:0] mant_sum_addsub;
    logic        sign_result_addsub;
    grs_t        flags_out_addsub;

    logic [24:0] mant_sum;
    logic        sign_result;
    grs_t        flags_out_exe;

    logic        cmp_res;
    
    //normalize
    logic [7:0]  exp_normalized;
    logic [23:0] mant_normalized;
    grs_t        flags_out_norm;

    //rouding
    logic [22:0] mant_final;
    logic [7:0]  exp_final;

  
    always_comb begin
        add_op = 0;
        cmp_op = 0;
        cvt_op = 0;

        case (fpu_op)
            FPU_ADD:       add_op = 1'b0;
            FPU_SUB:       add_op = 1'b1; 
            FPU_MIN:       cmp_op = 1'b0;
            FPU_MAX:       cmp_op = 1'b1;
            FPU_CVT_F2I_S: cvt_op = 2'b00;
            FPU_CVT_F2I_U: cvt_op = 2'b01;
            FPU_CVT_I2F_S: cvt_op = 2'b10;
            FPU_CVT_I2F_U: cvt_op = 2'b11;
            default: ;
        endcase
    end

    fpu_unpack u_fpu_unpack(
        .operand_a(operand_a),
        .operand_b(operand_b),
        .fpu_op(fpu_op),
        .sign_a(sign_a),
        .sign_b(sign_b),
        .exp_a(exp_a),
        .exp_b(exp_b),
        .mant_a(mant_a),
        .mant_b(mant_b),
        .spec_out(spec_out),
        .spec_vld(spec_vld),
        .flushed_operand_a(flushed_operand_a),
        .flushed_operand_b(flushed_operand_b)
    );

    fpu_shifter u_fpu_shifter(
        .exp_a(exp_a),
        .exp_b(exp_b),
        .mant_a(mant_a),
        .mant_b(mant_b),
        .exp_shifted(exp_shifted),
        .mant_a_shifted(mant_a_shifted),
        .mant_b_shifted(mant_b_shifted),
        .flags(flags_out_shifter),
        .shifted(shifted)
    );

    fpu_add_sub u_fpu_add_sub(
        .add_op(add_op),
        .sign_a(sign_a),
        .sign_b(sign_b),
        .mant_a_shifted(mant_a_shifted),
        .mant_b_shifted(mant_b_shifted),
        .flags_in(flags_out_shifter),
        .shifted(shifted),
        .mant_sum(mant_sum_addsub),
        .sign_result(sign_result_addsub),
        .flags_out(flags_out_addsub)
    );

    fpu_cmp u_fpu_cmp(
        .cmp_op(cmp_op),
        .sign_a(sign_a),
        .sign_b(sign_b),
        .flags_in(flags_out_shifter),
        .mant_a_shifted(mant_a_shifted),
        .mant_b_shifted(mant_b_shifted),
        .shifted(shifted),
        .cmp_res(cmp_res)
    );

    always_comb begin : exec_type_mux
        case (fpu_op)
            FPU_ADD, FPU_SUB: begin
                mant_sum      = mant_sum_addsub;
                sign_result   = sign_result_addsub;
                flags_out_exe = flags_out_addsub;
            end
            default: begin
                mant_sum      = '0;
                sign_result   = '0;
                flags_out_exe = '0;
            end
        endcase
    end

    fpu_normalize u_fpu_normalize(
        .exp_shifted(exp_shifted),
        .mant_sum(mant_sum),
        .flags_in(flags_out_exe),
        .exp_normalized(exp_normalized),
        .mant_normalized(mant_normalized),
        .flags_out(flags_out_norm)
    );

    fpu_rounding u_fpu_rounding(
        .mant_normalized(mant_normalized),
        .exp_normalized(exp_normalized),
        .flags(flags_out_norm),
        .mant_final(mant_final),
        .exp_final(exp_final)
    );

    always_comb begin
        if (spec_vld) fpu_result = spec_out;
        else if (fpu_op == FPU_MIN || fpu_op == FPU_MAX) begin
            if(cmp_res) fpu_result = flushed_operand_a;
            else        fpu_result = flushed_operand_b;
        end
        else fpu_result = {sign_result, exp_final, mant_final};
    end

endmodule
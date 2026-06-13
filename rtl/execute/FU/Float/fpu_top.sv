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
    logic [7:0]  exp_addsub;
    logic [23:0] mant_a_shifted;
    logic [23:0] mant_b_shifted;
    grs_t        flags_out_shifter;
    logic        shifted;

    //exec
    logic [24:0] mant_addsub;
    logic        sign_result_addsub;
    grs_t        flags_out_addsub;
    logic [7:0]  exp_add_norm;
    logic [23:0] mant_add_norm;

    logic [24:0] mant_sum;
    logic        sign_result;
    logic        cmp_res;

    logic        sign_res_mul;
    logic [23:0] mant_mul;
    logic [7:0]  exp_res_mul;
    grs_t        flags_out_mul;
    grs_t        flag_rounding;
    
    logic [31:0] cvt_res;
    
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

    fpu_cvt u_fpu_cvt(
        .cvt_op(cvt_op),
        .sign(sign_a),
        .exp(exp_a),
        .mant(mant_a),
        .op_a(operand_a),
        .result(cvt_res)
    );

    fpu_shifter u_fpu_shifter(
        .exp_a(exp_a),
        .exp_b(exp_b),
        .mant_a(mant_a),
        .mant_b(mant_b),
        .exp_shifted(exp_addsub),
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
        .mant_sum(mant_addsub),
        .sign_result(sign_result_addsub),
        .flags_out(flags_out_addsub)
    );
    
    fpu_normalize u_fpu_normalize(
        .exp_shifted(exp_addsub),
        .mant_sum(mant_addsub),
        .flags_in(flags_out_addsub),
        .exp_normalized(exp_add_norm),
        .mant_normalized(mant_add_norm),
        .flags_out(flags_out_norm)
    );

    fpu_mul u_fpu_mul(
        .sign_a(sign_a),
        .sign_b(sign_b),
        .exp_a(exp_a),
        .exp_b(exp_b),
        .mant_a(mant_a),
        .mant_b(mant_b),
        .sign_res(sign_res_mul),
        .mant_mul(mant_mul),
        .exp_res(exp_res_mul),
        .flags_out(flags_out_mul)
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

    always_comb begin
        case (fpu_op)
            FPU_ADD, FPU_SUB: begin
                mant_normalized      = mant_add_norm;
                sign_result   = sign_result_addsub;
                flag_rounding = flags_out_norm;
                exp_normalized      = exp_add_norm;
            end
            FPU_MUL: begin
                mant_normalized      = mant_mul;
                sign_result      = sign_res_mul;
                flag_rounding    = flags_out_mul;
                exp_normalized      = exp_res_mul;
            end
            default: begin
                mant_normalized      = '0;
                sign_result   = '0;
                flag_rounding = '0;
                exp_normalized = '0;
            end
        endcase
    end
    
    fpu_rounding u_fpu_rounding(
        .mant_normalized(mant_normalized),
        .exp_normalized(exp_normalized),
        .flags(flag_rounding),
        .mant_final(mant_final),
        .exp_final(exp_final)
    );

    always_comb begin
        if (spec_vld) fpu_result = spec_out;
        else if (fpu_op == FPU_MIN || fpu_op == FPU_MAX) begin
            if(cmp_res) fpu_result = flushed_operand_a;
            else        fpu_result = flushed_operand_b;
        end
        else if (fpu_op == FPU_CVT_F2I_S || fpu_op == FPU_CVT_F2I_U ||
                 fpu_op == FPU_CVT_I2F_S || fpu_op == FPU_CVT_I2F_U
        ) fpu_result = cvt_res;
        else fpu_result = {sign_result, exp_final, mant_final};
    end

endmodule
module fpu_unpack
    import alu_pkg::*;
(
    input  logic [31:0] operand_a,
    input  logic [31:0] operand_b,
    input  fpu_op_e     fpu_op,
    output logic        sign_a,
    output logic        sign_b,
    output logic [7:0]  exp_a,
    output logic [7:0]  exp_b,
    output logic [23:0] mant_a,
    output logic [23:0] mant_b,
    output logic [31:0] spec_out,
    output logic        spec_vld
);

    logic mant_a_zero;
    logic mant_b_zero;

    logic is_nan_a, is_nan_b;
    logic is_inf_a, is_inf_b;
    logic is_zero_a, is_zero_b;

    assign sign_a = operand_a[31];
    assign sign_b = operand_b[31];
    assign exp_a = operand_a[30:23];
    assign exp_b = operand_b[30:23];
    assign mant_a = {1'b1, operand_a[22:0]};
    assign mant_b = {1'b1, operand_b[22:0]};

    assign mant_a_zero = (operand_a[22:0] == 23'h0);
    assign mant_b_zero = (operand_b[22:0] == 23'h0);

    assign is_nan_a = (exp_a == 8'hFF && !mant_a_zero);
    assign is_nan_b = (exp_b == 8'hFF && !mant_b_zero);
    assign is_inf_a = (exp_a == 8'hFF && mant_a_zero);
    assign is_inf_b = (exp_b == 8'hFF && mant_b_zero);
    assign is_zero_a = (exp_a == 8'h0 && mant_a_zero);
    assign is_zero_b = (exp_b == 8'h0 && mant_b_zero);

//FLush to zero still missing

    always_comb begin
        spec_vld = 1'b1;
        spec_out = 32'h0;
        case (fpu_op)
            FPU_ADD: begin
                //NaN input
                if (is_nan_a || is_nan_b) begin
                    spec_out = 32'h7FC0_0000;
                end
                //Both inf
                else if (is_inf_a && is_inf_b) begin
                    if (sign_a == sign_b) begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                    else begin
                        spec_out = 32'h7FC0_0000;
                    end
                end
                //One inf
                else if (is_inf_a || is_inf_b) begin
                    //First is inf
                    if (is_inf_a) begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                    //Second is inf
                    else spec_out = {sign_b, 31'h7F80_0000};
                end
                //Both zero
                else if (is_zero_a && is_zero_b) begin
                    if (sign_a == sign_b) begin 
                        spec_out = {sign_a, 31'h0};
                    end
                    else spec_out = 32'h0;
                end
                //One zero - not neccessary, but speeds up computation, if pipelined in the future
                else if (is_zero_a || is_zero_b) begin
                    if (is_zero_a) begin
                        spec_out = operand_b;
                    end
                    else spec_out = operand_a;
                end
                else spec_vld = 1'b0;
            end
            FPU_SUB: begin
                //NaN input
                if (is_nan_a || is_nan_b) begin
                    spec_out = 32'h7FC0_0000;
                end
                //Both inf
                else if (is_inf_a && is_inf_b) begin
                    if (sign_a == sign_b) begin
                        spec_out = 32'h7FC0_0000;
                    end
                    else begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                end
                //One inf
                else if (is_inf_a || is_inf_b) begin
                    //First is inf
                    if (is_inf_a) begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                    //Second is inf
                    else spec_out = {~sign_b, 31'h7F80_0000};
                end
                //Both zero
                else if (is_zero_a && is_zero_b) begin
                    if (sign_a == sign_b) begin 
                        spec_out = 32'h0;
                    end
                    else spec_out = {sign_a, 31'h0};
                end
                //One zero - not neccessary, but speeds up computation, if pipelined in the future
                else if (is_zero_a || is_zero_b) begin
                    if (is_zero_a) begin
                        spec_out = {~sign_b, exp_b, mant_b[22:0]};
                    end
                    else spec_out = operand_a;
                end
                else spec_vld = 1'b0;
            end
            FPU_MUL: begin
                //Nan
                if (is_nan_a || is_nan_b) begin
                    spec_out = 32'h7FC0_0000;
                end
                //Inf
                else if (is_inf_a || is_inf_b) begin
                    //One is inf, one is 0
                    if (is_zero_a || is_zero_b) begin
                        spec_out = 32'h7FC0_0000;
                    end
                    else begin
                        spec_out = {(sign_a ^ sign_b) ,31'h7F80_0000};
                    end
                end
                //Zero
                else if (is_zero_a && is_zero_b) begin
                    spec_out = {(sign_a ^ sign_b) , 31'h0};
                end
                else spec_vld = 1'b0;
                ////WARNING OVERFLOW AND UNDERFLOW CHECK AFTER COMPUTATION
            end
            FPU_MIN: begin
                //NaN
                if      (is_nan_a) spec_out = operand_b;
                else if (is_nan_b) spec_out = operand_a;
                //Zero
                else if (is_zero_a && is_zero_b) begin
                    spec_out = {(sign_a || sign_b), 31'h0};
                end
                else spec_vld = 1'b0;
            end
            FPU_MAX: begin
                //NaN
                if      (is_nan_a) spec_out = operand_b;
                else if (is_nan_b) spec_out = operand_a;
                //Zero
                else if (is_zero_a && is_zero_b) begin
                    spec_out = {(sign_a && sign_b), 31'h0};
                end
                else spec_vld = 1'b0;
            end
            FPU_CVT_F2I_S: begin
                //NaN
                if (is_nan_a) spec_out = 32'h0;
                //Inf
                else if (is_inf_a) begin
                    if (sign_a != 0) spec_out = 32'h8000_0000;
                    else             spec_out = 32'h7FFF_FFF;
                end
                //Zero
                else if (is_zero_a) spec_out = 32'h0;
                else spec_vld = 1'b0;
                //Check on over/underflow !!
            end
            FPU_CVT_F2I_U: begin
                //NaN
                if (is_nan_a) spec_out = 32'h0;
                //Inf
                else if (is_inf_a) begin
                    if (sign_a != 0) spec_out = 32'h0;
                    else             spec_out = 32'hFFFF_FFFF;
                end
                //Zero
                else if (is_zero_a) spec_out = 32'h0;
                else spec_vld = 1'b0;
                //Check on over/underflow !!
            end
            FPU_CVT_I2F_S: begin
                if (operand_a == 32'h0) spec_out = 32'h0;
                else                    spec_vld = 1'b0;
            end
            FPU_CVT_I2F_U: begin
                if (operand_a == 32'h0) spec_out = 32'h0;
                else                    spec_vld = 1'b0;
            end
        endcase
    end

endmodule
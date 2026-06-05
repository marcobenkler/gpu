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

    assign sign_a = operand_a[31];
    assign sign_b = operand_b[31];
    assign exp_a = operand_a[30:23];
    assign exp_b = operand_b[30:23];
    assign mant_a = {1'b1, operand_a[22:0]};
    assign mant_b = {1'b1, operand_b[22:0]};

    assign mant_a_zero = (operand_a[22:0] == 23'h0);
    assign mant_b_zero = (operand_b[22:0] == 23'h0);

    always_comb begin
        spec_vld = 1'b1;
        spec_out = 32'h0;
        case (fpu_op)
            FPU_ADD: begin
                //NaN input
                if (exp_a == 8'hFF && !mant_a_zero) || (exp_b == 8'hFF && !mant_b_zero) begin
                    spec_out = 32'h7FC0_0000;
                end
                //Both inf
                else if (exp_a == 8'hFF && mant_a_zero) && (exp_b == 8'hFF && mant_b_zero) begin
                    if (sign_a == sign_b) begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                    else begin
                        spec_out = 32'h7FC0_0000;
                    end
                end
                //One inf
                else if (exp_a == 8'hFF && mant_a_zero) || (exp_b == 8'hFF && mant_b_zero) begin
                    //First is inf
                    if (exp_a == 8'hFF && mant_a_zero) begin
                        spec_out = {sign_a, 31'h7F80_0000};
                    end
                    //Second is inf
                    else spec_out = {sign_b, 31'h7F80_0000};
                end
                //Both zero
                else if (exp_a == 0 && mant_a-zero) && (exp_b == 0 && mant_b_zero) begin
                    if (sign_a == sign_b) begin 
                        spec_out = {sign_a, 31'h0};
                    end
                    else spec_out = 32'h0;
                end
                //One zero - not neccessary, but speeds up computation, if pipelined in the future
                else if (exp_a == 0 && mant_a_zero) || (exp_b == 0 && mant_b_zero) begin
                    if (exp_a == 0 && mant_a_zero) begin
                        spec_out = operand_a;
                    end
                    else spec_out = operand_b;
                end
                else spec_vld = 1'b0;
            end
        endcase
    end

endmodule
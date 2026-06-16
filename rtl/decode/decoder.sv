module decoder
    import exec_pkg::*;
(
    input  logic [31:0] instr,
    output logic        reg_wrt,
    output logic        mem_wrt,
    output logic [1:0]  pc_src,
    output fu_sel_e     fu_sel,
    output int_alu_op_e alu_op,
    output fpu_op_e     fpu_op,
    output exec_src_a_e exec_src_a,
    output exec_src_b_e exec_src_b,
    output res_src_e    res_src
);

    logic [4:0] op_code;
    logic [2:0] funct3;
    logic [6:0] funct7;
    logic [4:0] rs2;

    assign op_code = instr[6:2];
    assign funct3  = instr[14:12];
    assign funct7  = instr[31:25]; 
    assign rs2     = instr[24:20];

    always_comb begin : decode_comb
        alu_op    = INT_ADD;
        fpu_op    = FPU_ADD;
        exec_src_a = SRC_REG_A;
        exec_src_b = SRC_REG_B;
        res_src   = RES_FU;
        fu_sel    = FU_ALU;
        pc_src    = PC_4;
        reg_wrt   = 1'b1;
        mem_wrt = 1'b0;
        case (op_code)
            5'b01100: begin //R-Type
                case (funct3)
                    3'b000: case (funct7)
                        7'b0000000: alu_op = INT_ADD;
                        7'b0100000: alu_op = INT_SUB;
                        7'b0000001: alu_op = INT_MUL;
                        default: ;
                    endcase
                    3'b001: case (funct7)
                        7'b0000000: alu_op = INT_SLL;
                        7'b0000001: alu_op = INT_MULH;
                        default: ;
                    endcase
                    3'b010: case (funct7)
                        7'b0000000: alu_op = INT_SLT;
                        7'b0000001: alu_op = INT_MULHSU;
                        default: ;
                    endcase
                    3'b011: case (funct7)
                        7'b0000000: alu_op = INT_SLTU;
                        7'b0000001: alu_op = INT_MULHU;
                        default: ;
                    endcase
                    3'b100: case (funct7)
                        7'b0000000: alu_op = INT_XOR;
                        default: ;
                    endcase
                    3'b101: case (funct7)
                        7'b0000000: alu_op = INT_SRL;
                        7'b0100000: alu_op = INT_SRA;
                        default: ;
                    endcase
                    3'b110: case (funct7)
                        7'b0000000: alu_op = INT_OR;
                        default: ;
                    endcase
                    3'b111: case (funct7)
                        7'b0000000: alu_op = INT_AND;
                        default: ;
                    endcase
                endcase
            end
            5'b00100: begin // I-Type
                exec_src_b = SRC_IMM;
                case (funct3)
                    3'b000: alu_op = INT_ADD;
                    3'b001: alu_op = INT_SLL;
                    3'b010: alu_op = INT_SLT;
                    3'b011: alu_op = INT_SLTU;
                    3'b100: alu_op = INT_XOR;
                    3'b101: case (funct7)
                                7'b0000000: alu_op = INT_SRL;
                                7'b0100000: alu_op = INT_SRA;
                                default: ;
                            endcase
                    3'b110: alu_op = INT_OR;
                    3'b111: alu_op = INT_AND;
                endcase
            end
            5'b00000: begin // I-Type
                exec_src_b = SRC_IMM;
            end
            5'b11000: begin //B-Type
                reg_wrt = 1'b0;
                case (funct3)
                    3'b000:  alu_op = INT_SUB;
                    3'b001:  alu_op = INT_SUB;
                    3'b100:  alu_op = INT_SLT;
                    3'b101:  alu_op = INT_SLT;
                    3'b110:  alu_op = INT_SLTU;
                    3'b111:  alu_op = INT_SLTU;
                    default: ;
                endcase
            end
            5'b01101: begin //U-Type
                res_src = RES_MEM; //vlt wrong
            end
            5'b00101: begin //U-Type
                exec_src_a = SRC_PC; // Take PC instead of rs1
                exec_src_b = SRC_IMM;
            end
            5'b01000: begin //S-Type Decide in memory block which S-Type specifically
                reg_wrt = 1'b0;
                exec_src_b = SRC_IMM;
                mem_wrt = 1'b1;
            end
            5'b11011: begin //J-Type
                pc_src  = PC_IMM;
                res_src = RES_PC4;
            end
            5'b11001: begin //JALR
                exec_src_b = SRC_IMM;
                pc_src    = PC_FU;
                res_src   = RES_PC4;
            end
            5'b10100: begin //R-Type FLOAT
                fu_sel = FU_FPU;
                case (funct7)
                    7'b0000000: fpu_op = FPU_ADD;
                    7'b0000100: fpu_op = FPU_SUB;
                    7'b0001000: fpu_op = FPU_MUL;
                    7'b0010100: begin
                        case(funct3) 
                            3'b000: fpu_op = FPU_MIN;
                            3'b001: fpu_op = FPU_MAX;
                            default: ;
                        endcase
                    end
                    7'b1100000: begin
                        case (rs2)
                            5'b00000: fpu_op = FPU_CVT_F2I_S;
                            5'b00001: fpu_op = FPU_CVT_F2I_U;
                            default: ;
                        endcase
                    end
                    7'b1101000: begin
                        case (rs2) 
                            5'b00000: fpu_op = FPU_CVT_I2F_S;
                            5'b00001: fpu_op = FPU_CVT_I2F_U;
                            default: ;
                        endcase
                    end
                    default: ;
                endcase
            end
            default: ;
        endcase
    end
endmodule
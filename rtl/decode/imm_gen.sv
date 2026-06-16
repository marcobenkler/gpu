module imm_gen(
    input  logic [31:0] instr,
    output logic [31:0] imm
);
    logic [4:0] op_code;
    
    assign op_code = instr[6:2];

    always_comb begin
        imm = 'x;
        case (op_code)
            5'b00100: imm = {{20{instr[31]}}, instr[31:20]}; /// I-Type
            5'b00000: imm = {{20{instr[31]}}, instr[31:20]}; /// I-Type
            5'b11001: imm = {{20{instr[31]}}, instr[31:20]}; /// I-Type
            5'b01000: imm = {{20{instr[31]}}, instr[31:25], instr[11:7]}; /// S-Type
            5'b01101: imm = {instr[31:12], 12'b0}; /// U-Type
            5'b00101: imm = {instr[31:12], 12'b0}; /// U-Type
            5'b11000: imm = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}; /// B-Type
            5'b11011: imm = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0}; /// J-Type
            
            default: ;
        endcase
    end

endmodule

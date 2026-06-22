def add(rd, rs1, rs2):
    rs1 &= 0x1F
    rs2 &= 0x1F
    rd  &= 0x1F
    funct3 = 0x0
    funct7 = 0x0
    return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0x33

def addi(rd, rs1, imm):
    rs1 &= 0x1F
    rd  &= 0x1F
    imm &= 0xFFF
    funct3 = 0x0
    return (imm << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0x13
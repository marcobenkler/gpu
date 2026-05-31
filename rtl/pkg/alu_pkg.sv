package alu_pkg;
    typedef enum logic [4:0] {
        //Integer
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA,
        ALU_SLT,
        ALU_SLTU,
        //Float arithemtic
        ALU_FADD,
        ALU_FSUB,
        //Compare
        ALU_FEQ,
        ALU_FLT,
        ALU_FLE,
        //Conversion
        ALU_FCVTW,
        ALU_FCVTWU,
        ALU_FCVTSW,
        ALU_FCVTSWU,
        //Float misc
        ALU_FMVXW,
        ALU_FMVWX,
        ALU_FCLASS,
        ALU_FMIN,
        ALU_FMAX
    } alu_op_e;

    typedef enum logic [1:0] {
        IDLE,
        RUNNING,
        DONE
    } div_state_e;

    typedef enum logic [1:0] {
        DIV,
        DIVU,
        REM,
        REMU
    } div_op_e;

    typedef enum logic [1:0] {
        MUL,
        MULH,
        MULHSU,
        MULHU
    } mul_op_e;
endpackage
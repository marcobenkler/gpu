package exec_pkg;

    typedef enum logic [3:0] {
        INT_ADD,
        INT_SUB,
        INT_AND,
        INT_OR,
        INT_XOR,
        INT_SLL,
        INT_SRL,
        INT_SRA,
        INT_SLT,
        INT_SLTU
    } int_alu_op_e;

    typedef enum logic [3:0] {
        FPU_ADD,
        FPU_SUB,
        FPU_MUL,
        FPU_MIN,
        FPU_MAX,
        FPU_CVT_F2I_S,
        FPU_CVT_F2I_U,
        FPU_CVT_I2F_S,
        FPU_CVT_I2F_U
    } fpu_op_e;

    typedef enum logic [2:0] {
        SFU_RCP,
        SFU_RSQRT,
        SFU_LOG2,
        SFU_EX2,
        SFU_SIN,
        SFU_COS
    } sfu_op_t;

    typedef enum logic [1:0] {
        EXEC_INT,
        EXEC_FPU,
        EXEC_SFU
    } exec_unit_e;

endpackage
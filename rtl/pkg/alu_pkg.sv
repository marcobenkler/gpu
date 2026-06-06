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

    typedef struct packed {
        logic g,
        logic r,
        logic s
    } grs_t;

    function automatic grs_t get_grs(
        input logic [7:0]  exp_delta,
        input logic [23:0] mant,
        input logic [25:0] mant_shifted
    );
        grs_t result;
        logic [23:0] sticky_mask;

        sticky_mask = (exp_delta <= 2)  ? '0 : 
                      (exp_delta >= 26) ? 24'hFF_FFFF :
                      (24'hFF_FFFF >> (26 - exp_delta));
        result.g = mant_shifted[1];
        result.r = mant_shifted[0];
        result.s = |(mant & sticky_mask);

        return result;

    endfunction

endpackage
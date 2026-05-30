package sfu_pkg;
    typedef enum logic [2:0] {
        SFU_RCP, 
        SFU_RSQRT,
        SFU_LG2,
        SFU_EX2,
        SFU_SIN,
        SFU_COS
    } sfu_op_t;

    typedef struct packed {
        sfu_op_t     op;
        logic [31:0] operand;
        logic        sign_exp;
        logic [7:0]  exp_exp;
    } test_t;
endpackage
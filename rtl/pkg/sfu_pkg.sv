package sfu_pkg;
    typedef enum logic [2:0] {
        SFU_RCP, 
        SFU_RSQRT,
        SFU_LG2,
        SFU_EX2,
        SFU_SIN,
        SFU_COS
    } fpu_op_t;
endpackage
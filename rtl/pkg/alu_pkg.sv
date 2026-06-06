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

    function automatic logic [4:0] lzd24(
        input logic [23:0] val
    );
        casez (val)
            24'b1???????????????????????: return 5'd0;
            24'b01??????????????????????: return 5'd1;
            24'b001?????????????????????: return 5'd2;
            24'b0001????????????????????: return 5'd3;
            24'b00001???????????????????: return 5'd4;
            24'b000001??????????????????: return 5'd5;
            24'b0000001?????????????????: return 5'd6;
            24'b00000001????????????????: return 5'd7;
            24'b000000001???????????????: return 5'd8;
            24'b0000000001??????????????: return 5'd9;
            24'b00000000001?????????????: return 5'd10;
            24'b000000000001????????????: return 5'd11;
            24'b0000000000001???????????: return 5'd12;
            24'b00000000000001??????????: return 5'd13;
            24'b000000000000001?????????: return 5'd14;
            24'b0000000000000001????????: return 5'd15;
            24'b00000000000000001???????: return 5'd16;
            24'b000000000000000001??????: return 5'd17;
            24'b0000000000000000001?????: return 5'd18;
            24'b00000000000000000001????: return 5'd19;
            24'b000000000000000000001???: return 5'd20;
            24'b0000000000000000000001??: return 5'd21;
            24'b00000000000000000000001?: return 5'd22;
            24'b000000000000000000000001: return 5'd23;
            default:                      return 5'd24;
        endcase
    endfunction

endpackage
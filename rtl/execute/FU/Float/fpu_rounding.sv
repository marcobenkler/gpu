module fpu_rounding
    import exec_pkg::*;
(
    input  logic [23:0] mant_normalized,
    input  logic [7:0]  exp_normalized,
    input  grs_t        flags,
    output logic [22:0] mant_final,
    output logic [7:0]  exp_final
);

    logic        round_up;
    logic [24:0] mant_temp;
    
    //mant_normalized[0] for round to neares even
    assign round_up = flags.g && (flags.r || flags.s || mant_normalized[0]);
    
    always_comb begin
        mant_temp  = '0;
        mant_final = '0;
        exp_final  = '0;
        if (round_up) begin
            mant_temp = mant_normalized + 1;
            if (mant_temp[24]) begin
                if (exp_normalized == 8'hFE) begin
                    mant_final = 23'h0;
                    exp_final  = 8'hFF;
                end
                else begin
                    mant_final = mant_temp[23:1];
                    exp_final  = exp_normalized + 1;
                end
            end
            else begin
                mant_final = mant_temp[22:0];
                exp_final  = exp_normalized;
            end
        end
        else begin
            mant_final = mant_normalized[22:0];
            exp_final  = exp_normalized; 
        end
    end

endmodule
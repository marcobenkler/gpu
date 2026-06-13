module fpu_normalize
import exec_pkg::*;
(
    input  logic [7:0]  exp_shifted,
    input  logic [24:0] mant_sum,
    input  grs_t        flags_in, 
    output logic [7:0]  exp_normalized,
    output logic [23:0] mant_normalized,
    output grs_t        flags_out
);

    logic [4:0]  lead_zero;
    logic [25:0] flags_temp;
    logic [49:0] mant_temp;

    always_comb begin
        lead_zero = '0;
        flags_out.s_vec = flags_in.s_vec;
        flags_temp = '0;
        mant_temp = '0;
        if (mant_sum == 0 && !flags_in.g && !flags_in.r && !flags_in.s) begin
            mant_normalized = 0;
            exp_normalized  = 0;
            flags_out.g = 0;
            flags_out.r = 0;
            flags_out.s = 0;
        end
        //Case 2 overflow on mant
        else if (mant_sum[24]) begin
            exp_normalized = exp_shifted + 1;
            //Check on inf
            if (exp_normalized == 8'hFF) begin
                mant_normalized = 24'h0;
                flags_out.g = 0;
                flags_out.r = 0;
                flags_out.s = 0;
            end
            else begin 
                mant_normalized = mant_sum[24:1];
                flags_out.g = mant_sum[0];
                flags_out.r = flags_in.g;
                flags_out.s = flags_in.r || flags_in.s;
            end
        end
        //Case 3 undeflow on mant
        else if (!mant_sum[23]) begin
            lead_zero = lzd24(mant_sum[23:0]);
            if (8'(lead_zero) >= exp_shifted) begin
                mant_normalized = 24'h0;
                exp_normalized  = 8'h0;
                flags_out.g = 0;
                flags_out.r = 0;
                flags_out.s = 0;
            end
            else begin
                flags_temp      = {flags_in.g, flags_in.r, flags_in.s_vec};
                mant_temp       = {mant_sum[23:0], flags_temp} << lead_zero;
                mant_normalized = mant_temp[49:26];
                exp_normalized  = exp_shifted - 8'(lead_zero);
                flags_out.g = mant_temp[25];
                flags_out.r = mant_temp[24];
                flags_out.s = |mant_temp[23:0];
            end 
            
        end
        else begin
            mant_normalized = mant_sum[23:0];
            exp_normalized  = exp_shifted;
            flags_out = flags_in;
        end
    end

endmodule
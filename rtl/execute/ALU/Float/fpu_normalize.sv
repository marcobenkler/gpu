module fpu_normalize
import alu_pkg::*;
(
    input  logic [7:0]  exp_shifted,
    input  logic [24:0] mant_sum,
    input  grs_t        flags_in, 
    output logic [7:0]  exp_normalized,
    output logic [24:0] mant_normalized,
    output grs_t        flags_out
);

    always_comb begin
        //Case 1 overflow on mant
        if (mant_sum[24]) begin
            mant_normalized = mant_sum >> 1;
            exp_normalized = exp_shifted + 1;
            flags_out.g = mant_sum[0];
            flags_out.r = flags_in.g;
            flags_out.s = flags_in.r || flags_in.s;
        end
        //Case 2 undeflow on mant
        // Problem, I don't have the s flag in bits, OR should be in pack => Split path later
        // Hardwire all on 0 temporary => ~0.1% hab 1 ULP error
        else if (!mant_sum[23]) begin
            lead_zero = lzd24(mant_sum[23:0]);
            if (lzd >= exp_shifted) begin
                mant_normalized = 24'h0;
                exp_normalized  = 8'h0;
            end
            else begin
                mant_normalized = mant_sum << lead_zero;
                exp_normalized = exp_shifted - lead_zero;
            end 
            flags_out.g = 0;
            flags_out.r = 0;
            flags_out.s = 0;
        end
        else begin
            mant_normalized = mant_sum;
            exp_normalized  = exp_shifted;
            flags_out = flags_in;
        end
    end

endmodule
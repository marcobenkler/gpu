module instr_mem
    import exec_pkg::*;
    import gpu_pkg::*;
(
    input  logic        clk,
    input  logic [31:0] pc,
    output logic [31:0] instr
);

    (* rom_style = "block" *) logic [31:0] instr_mem [0:MEM_DEPTH - 1];

    always_ff @(posedge clk) begin : instr_mem_comb
        instr <= instr_mem[pc];
    end

endmodule
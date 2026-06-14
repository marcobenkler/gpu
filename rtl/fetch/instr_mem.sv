module instr_mem
    import exec_pkg::*;
#(
    parameter MEM_DEPTH = 32
)(
    input  logic        clk,
    input  logic [31:0] pc,
    output logic [31:0] intsr
);

    (* rom_style = "block" *) logic [31:0] instr_mem [0:MEM_DEPTH - 1];

    always_ff @(posedge clk) begin : instr_mem
        instr <= instr_mem[pc];
    end

endmodule
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
from gpu_config import WARP_CNT, LANE_CNT, REG_CNT
from cocotb_utils.cocotb_wrapper_classes import WarpCtx, WarpEntry
from cocotb_utils.cocotb_instr_vec_gen import add, addi

warp_num = 0

def add_simple():
    return [
        addi(1, 0, 5),
        addi(2, 0, 10),
        add (3, 1, 2)
    ]

@cocotb.test()
async def smoke_test(dut): #dut defined in makefile
    program = add_simple()

    for addr, instr in enumerate(program):
        dut.u_instr_mem.instr_mem[addr].value = instr

    cocotb.start_soon(Clock(dut.clk, 10, unit="ps").start())

    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 5)

    for cyc in range(20):
        await RisingEdge(dut.clk)

        ctx    = WarpCtx(dut.u_wctx.ctx_tbl[warp_num].value)
        entry  = WarpEntry(dut.u_wstate_ctrl.wsched_entry[warp_num].value)

        cocotb.log.info(f"cyc={cyc}, pc={ctx.pc}, state={entry.state}")

    x3 = dut.u_gpr.reg_mem[warp_num + 3].value
    assert x3 == 15, f"x3 expected 15, got {x3}"
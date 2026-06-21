import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

WARP_CNT = 4
LANE_CNT = 4
REG_CNT  = 32

warp_num = 0

@cocotb.test()
async def smoke_test(dut): #dut defined in makefile
    program = [
        0x00500093,  # addi x1, x0, 5
        0x00A00113,  # addi x2, x0, 10
        0x002081B3,  # add  x3, x1, x2
        0x40208233,  # sub  x4, x1, x2
    ]

    for addr, instr in enumerate(program):
        dut.u_instr_mem.instr_mem[addr].value = instr

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst_n.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 5)

    for cyc in range(20):
        await RisingEdge(dut.clk)

        pc    = dut.u_wctx.ctx_tbl[warp_num].value
        state = dut.u_wstate_ctrl.wsched_entry[warp_num].value

        cocotb.log.info(f"cyc={cyc}, pc={pc}, state={state}")

    x3 = dut.u_gpr.reg_mem[warp_num + 3].value
    assert x3 == 15, f"x3 expected 15, got {x3}"
import cocotb
import struct
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

WARP_CNT = 4
LANE_CNT = 4
REG_CNT  = 32

warp_num = 0

def add(rd, rs1, rs2):
    rs1 &= 0x1F
    rs2 &= 0x1F
    rd  &= 0x1F
    funct3 = 0x0
    funct7 = 0x0
    return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0x33

def addi(rd, rs1, imm):
    rs1 &= 0x1F
    rd  &= 0x1F
    imm &= 0xFFF
    funct3 = 0x0
    return (imm << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0x13

@cocotb.test()
async def smoke_test(dut): #dut defined in makefile
    program = []

    program.append(addi(1, 0, 5))
    program.append(addi(2, 0, 10))
    program.append(add(3, 1, 2))

    for addr, instr in enumerate(program):
        dut.u_instr_mem.instr_mem[addr].value = instr

    cocotb.start_soon(Clock(dut.clk, 10, unit="ps").start())

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
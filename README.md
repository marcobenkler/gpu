# GPU: Streaming Multiprocessor on FPGA

A from-scratch GPU targeting the Zybo Z7 (Zynq-7010). Final goal: heterogeneous SoC with a custom [RISC-V RV32IM CPU](https://github.com/marcobenkler/riscv-cpu) — CPU dispatches compute kernels to the GPU via shared BRAM and interrupt.

## Methodology

Verification-driven development: tests and assertions are written before RTL. Each module starts with a defined interface, golden model, and SVA assertions. Implementation follows only after the verification environment is in place.

## Roadmap

| # | Milestone | Status |
|---|---|---|
| 1 | GPU core MVP (fetch, decode, scheduler, register file, ALU, first kernel runs) | 🔲 |
| 2 | SIMT execution model (warp-based lockstep execution, 8 threads/warp) | 🔲 |
| 3 | Branch divergence handling (divergence stack, mask tracking, reconvergence) | 🔲 |
| 4 | Shared memory with bank conflict resolution | 🔲 |
| 5 | Barrier synchronization (`__syncthreads` equivalent) | 🔲 |
| 6 | Hazard detection, scoreboard, operand forwarding | 🔲 |
| 7 | Load/Store Unit with memory coalescing | 🔲 |
| 8 | L1 Data Cache | 🔲 |
| 9 | SFU (FP32 rcp, sqrt, sin, cos, exp2, log2 — LUT + Newton-Raphson) | 🔲 |
| 10 | Multi-warp support (multiple warps in-flight, warp scheduling policies) | 🔲 |
| 11 | Instruction Cache | 🔲 |
| 12 | DMA engine (bulk data transfer between main memory and shared memory) | 🔲 |
| 13 | Kernel assembler + minimal toolchain | 🔲 |
| 14 | CPU ↔ GPU SoC integration (shared BRAM, interrupt dispatch, MMIO) | 🔲 |

## Target Platform

Zynq-7010: 17,600 LUTs, 60 BRAM, 80 DSP48 — shared with CPU. Target clock 100 MHz.

## Design Philosophy

The goal is to learn GPU microarchitecture by building one. Every decision prioritizes architectural clarity over micro-optimization. Readable RTL, verification-first, and a complete working pipeline beat a half-finished design chasing frequency.
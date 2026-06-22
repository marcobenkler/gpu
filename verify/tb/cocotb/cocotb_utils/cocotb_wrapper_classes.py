import numpy as np
from gpu_config import WARP_CNT, LANE_CNT, REG_CNT

class WarpCtx:
    def __init__(self, val):
        v = int(val)
        self.pc   = (v >> LANE_CNT) & 0xFFFFFFFF
        self.amsk = v & ((1 << LANE_CNT) - 1)

class WarpEntry:
    def __init__(self, val):
        v = int(val)
        rank_bits       = int(np.log2(WARP_CNT))
        self.state      = (v >> (rank_bits + 32)) & 0x7
        self.age_rank   = (v >> 32) & ((1 << rank_bits) - 1)
        self.scoreboard = v & 0xFFFFFFFF
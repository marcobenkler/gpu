package warp_pkg;

    typedef enum logic [2:0] {
        WARP_READY,   //Can be put in pipe
        WARP_STL_SB,  //Waits til rd is written to
        WARP_STL_MEM, //Waits for data to be placed in cached, I only have 1 cycle bram latency
        WARP_BAR,     //Software forces all warps to finish specific pc
        WARP_IDLE,    //No data attached yet
        WARP_FINISHED //Warp finished executing
    } warp_state_e;

    typedef struct packed {
        logic [31:0]         pc;
        logic [lane_cnt-1:0] amsk;
    } warp_ctx_t;

    typedef struct packed {
        warp_state_e         state;
        [$clog2(warp_cnt):0] age_rank;
    } wsched_entry_t;

endpackage
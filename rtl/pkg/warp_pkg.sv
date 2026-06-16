package warp_pkg;

    typedef enum logic [1:0] {
        WARP_IDLE,
        WARP_READY,
        WARP_STALLD,
        WARP_DONE
    }warp_state_e;

endpackage
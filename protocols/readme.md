    struct can_frame {
            canid_t can_id;  /* 32 bit CAN_ID + EFF/RTR/ERR flags */
            __u8    can_dlc; /* frame payload length in byte (0 .. 8) */
            __u8    __pad;   /* padding */
            __u8    __res0;  /* reserved / padding */
            __u8    __res1;  /* reserved / padding */
            __u8    data[8] __attribute__((aligned(8)));
    };

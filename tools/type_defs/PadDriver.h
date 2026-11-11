/* the platform pad driver (*g_pPadDriver): a table of function pointers, each called with the driver */
typedef struct PadState PadState;
typedef struct PadDriver PadDriver;
typedef struct PadDriverFuncs {
    void *unk00, *unk04;
    void (*init)(PadDriver *drv);                            /* +0x08 */
    void (*shutdown)(PadDriver *drv);                        /* +0x0c */
    void (*update)(PadDriver *drv, int port, PadState *out); /* +0x10  PAD_PS_Update */
} PadDriverFuncs;
struct PadDriver {
    PadDriverFuncs *funcs;
};

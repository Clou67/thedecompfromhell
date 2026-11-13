#pragma once
// game/pad.h
#include "types.h"

// ---- types
typedef enum CONTROLLER_INPUT {
    L2=1,
    R2=2,
    L1=4,
    R1=8,
    TRIANGLE=16,
    CIRCLE=32,
    CROSS=64,
    SQUARE=128,
    SELECT=256,
    L3=512,
    R3=1024,
    START=2048,
    UP=4096,
    RIGHT=8192,
    DOWN=16384,
    LEFT=32768
} CONTROLLER_INPUT;

#define PAD_RING_LEN 30                 /* frames of input history kept per pad */

/* one controller's state, 0x564 bytes: g_PadPorts[4] (@0x965540, filled by the pad driver)
   and g_Pad (@0x964a40), the copy of the first connected port that the game reads */
typedef struct PadState {
    struct Vec4 sticks;                 /* 0x000 */
    u32 unk010, unk014, unk018, unk01c; /* 0x010 */
    char _pad020[0x8];
    u32 unk028, unk02c;                 /* 0x028 */
    char _pad030[0x18];
    u32 unk048, unk04c;                 /* 0x048 */
    char _pad050[0x39];
    u8 unk089;                          /* 0x089 */
    char _pad08a[0x4];
    u16 ringIndex;                      /* 0x08e  newest entry in the rings */
    int ringValid;                      /* 0x090  entries filled so far */
    char _pad094[0x8];
    int connected;                      /* 0x09c */
    enum CONTROLLER_INPUT downButtons;              /* 0x0a0  Ghidra: g_downButtons */
    enum CONTROLLER_INPUT buttonsPressedThisFrame;  /* 0x0a4  Ghidra: g_buttonsPressedThisFrame */
    u32 unk0a8;                         /* 0x0a8 */
    char _pad0ac[0x4];
    u32 padDownButtons;                 /* 0x0b0  Ghidra: pad_DownButtons (how it differs from 0x0a0 is unverified) */
    u32 repeat;                         /* 0x0b4  Ghidra: pad_Repeat */
    u32 unk0b8;                         /* 0x0b8 */
    char _pad0bc[0x4];
    u32 unk0c0;                         /* 0x0c0 */
    u32 pressedButton;                  /* 0x0c4  Ghidra: pad_pressedButton */
    char _pad0c8[0xc];
    u32 unk0d4, unk0d8, unk0dc;         /* 0x0d4 */
    u32 ringBits[PAD_RING_LEN];         /* 0x0e0  button bits per frame */
    u32 ring158[PAD_RING_LEN];          /* 0x158  another per-frame ring, not read in pad.cpp */
    float ringAng[PAD_RING_LEN];        /* 0x1d0  stick angle per frame */
    char _pad248[0x560 - 0x248];
    u8 showReconnectPrompt;             /* 0x560  startLevel opens prompt 9 while this is set */
    char _pad561[3];
} PadState;
typedef char PadState_size_check[sizeof(PadState) == 0x564 ? 1 : -1];
typedef char PadState_ringBits_check[offsetof(PadState, ringBits) == 0xe0 ? 1 : -1];
typedef char PadState_buttons_check[offsetof(PadState, downButtons) == 0xa0 ? 1 : -1];
typedef char PadState_ring_check[offsetof(PadState, ringIndex) == 0x8e && offsetof(PadState, ringValid) == 0x90 ? 1 : -1];

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

// ---- globals
extern PadState g_Pad; /* 0x964a40 */ /* type set in global_types.tsv */
extern PadState g_PadPorts[4]; /* 0x965540 */ /* type set in global_types.tsv */
extern PadDriver *g_pPadDriver; /* 0x902edc */ /* type set in global_types.tsv */

// ---- functions
void InitPadRing(void);
int PadRingBitsOn(int bits, int frames, int *pFrame);
int PadRingCoincidentBitsOn(int bits1, int bits2, int frames, int window);
float PadRingAng(int frames);
void UpdatePad(void);
void pad_Init(void);
void pad_Shutdown(void);

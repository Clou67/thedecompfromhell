// game/pad.cpp -- controller input: driver hooks, active-pad selection, input history ring
// STATUS: CLEAN (checked against the asm; local names are mine)
// 7 functions, 0x11dfc8-0x11e448
//
// The driver fills g_PadPorts[0..3] every frame; UpdatePad copies the first connected one to
// g_Pad, which is what the game reads. Each PadState keeps the last PAD_RING_LEN frames of
// button bits and stick angles in rings (ringIndex = newest entry, ringValid = entries filled).
#include "rc1.h"

#define MAX_PAD_PORTS 4

/* ring entry `age` frames back from the newest one (age 0 = newest) */
static inline int PadRingSlot(int age)
{
    return (g_Pad.ringIndex - age + PAD_RING_LEN) % PAD_RING_LEN;
}

static inline int PadRingFrames(int frames)
{
    return (frames < g_Pad.ringValid ? frames : g_Pad.ringValid);
}

// 0x011dfc8 (0x18 bytes)
void InitPadRing(void)
{
    g_Pad.ringIndex = 0;
    g_Pad.ringValid = 0;
}

// 0x011dfe0 (0xc4 bytes)
/* any of `bits` held in the last `frames` frames? returns the bits found (newest match first);
   *pFrame = how many frames ago (0 = the newest entry) */
int PadRingBitsOn(int bits, int frames, int *pFrame)
{
    int n = PadRingFrames(frames) + 1;
    for (int i = 1; i < n; i++) {
        u32 held = g_Pad.ringBits[PadRingSlot(i)];
        if (held & bits) {
            if (pFrame) *pFrame = i - 1;
            return held & bits;
        }
    }
    return 0;
}

// 0x011e0a4 (0x1bc bytes)
/* were bits1 and bits2 both pressed within `window` frames of each other, in the last `frames`?
   (the binary has PadRingBitsOn inlined twice here) */
int PadRingCoincidentBitsOn(int bits1, int bits2, int frames, int window)
{
    int frame1, frame2;
    if (!PadRingBitsOn(bits1, frames, &frame1)) return 0;
    if (!PadRingBitsOn(bits2, frames, &frame2)) return 0;
    return abs(frame1 - frame2) < window;
}

// 0x011e260 (0x74 bytes)
/* stick angle `frames` frames back (clamped to the history we have) */
float PadRingAng(int frames)
{
    return g_Pad.ringAng[PadRingSlot(PadRingFrames(frames))];
}

// 0x011e2d4 (0xec bytes)
/* poll every port; the first connected one becomes g_Pad */
void UpdatePad(void)
{
    for (int port = 0; port < MAX_PAD_PORTS; port++) {
        PadState *pad = &g_PadPorts[port];
        g_pPadDriver->funcs->update(g_pPadDriver, port, pad);
        if (pad->connected) {
            g_Pad = *pad;
            return;
        }
    }
}

// 0x011e3c0 (0x44 bytes)
void pad_Init(void)
{
    g_pPadDriver->funcs->init(g_pPadDriver);
}

// 0x011e404 (0x44 bytes)
void pad_Shutdown(void)
{
    g_pPadDriver->funcs->shutdown(g_pPadDriver);
}

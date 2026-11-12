// game/partproc.cpp -- the particle pool: allocation, the per-frame update and drawing
// STATUS: IN PROGRESS
// MERGE
// 11 functions, 0x11e448-0x11fb94
//
// Particles live in PartInstances[4096] (0x40 bytes each); g_PartUsed has a bit per slot.
// PartIndexNext is the lowest slot that may be free, PartIndexTop the highest one in use, so
// allocation and the update loop only look at that range. In Deadlocked this file is assembly
// (partproc.s); RaC1's PS3 build has it as C.
#include "rc1.h"

#define MAX_PARTS      4096
#define PART_DEAD      0x80             /* PartInstance.type: free slot */
#define PART_FADE_IN   8                /* frames a particle takes to fade out at the end of its life */

/* PartInstance.update[] as used by class 22 (a coloured, growing, falling puff) */
struct Part22 {
    Vec3 vel;                           /* 0x20 */
    float gravity;                      /* 0x2c  added to vel.z */
    u8 startColor[4];                   /* 0x30  RGBA at the start of its life */
    u8 endColor[4];                     /* 0x34  ... and at the end */
    short life;                         /* 0x38  frames */
    short _pad;
    float growth;                       /* 0x3c  added to scale */
};

static inline bool PartAlive(PartInstance *part)
{
    return (s8)part->type >= 0;
}

/* from the view: its x, y and z columns, the last two normalized, and its position */
static inline void SetPartView(void)
{
    float *view = (float *)(DAT_00902e9c + 0xa0);      /* 4x4 matrix, rows */
    float *pos = (float *)(DAT_00902e9c + 0x20);

    g_PartView.right.x = view[0];
    g_PartView.right.y = view[4];
    g_PartView.right.z = view[8];
    g_PartView.right.w = 0.0f;

    /* the binary includes the fourth row in the length (vrsqrtefp + one Newton step) */
    float upLen2 = view[1] * view[1] + view[5] * view[5] + view[9] * view[9] + view[13] * view[13];
    float upScale = 1.0f / sqrtf(upLen2);
    g_PartView.up.x = view[1] * upScale;
    g_PartView.up.y = view[5] * upScale;
    g_PartView.up.z = view[9] * upScale;
    g_PartView.up.w = 0.0f;

    float fwdLen2 = view[2] * view[2] + view[6] * view[6] + view[10] * view[10] + view[14] * view[14];
    float fwdScale = 1.0f / sqrtf(fwdLen2);
    g_PartView.fwd.x = view[2] * fwdScale;
    g_PartView.fwd.y = view[6] * fwdScale;
    g_PartView.fwd.z = view[10] * fwdScale;
    g_PartView.fwd.w = 0.0f;

    g_PartView.camPos.x = pos[0];
    g_PartView.camPos.y = pos[1];
    g_PartView.camPos.z = pos[2];
    g_PartView.camPos.w = 0.0f;
}

static inline void UpdateAllParts(void)
{
    for (int i = 0; i <= PartIndexTop; i++) {
        PartInstance *part = &PartInstances[i];

        if (PartAlive(part))
            PartUpdates[(u8)part->iClass](part);
    }
}

// 0x011e448 (0x14 bytes)
void SECTION_HEADER_PARTPROC(void)
{
    DAT_00729624 = 0x10000;
}

// 0x011e45c (0x11c bytes)
/* R1+R2+L2 held, L1 pressed: one update with the profile counters on, then print them */
void UpdatePartsDebug(void)
{
    if ((g_Pad.downButtons & (R1 | R2 | L2)) != (R1 | R2 | L2) || !(g_Pad.buttonsPressedThisFrame & L1)) {
        UpdateParts();
        return;
    }

    printf("\n");
    printf("*** frame %d ***\n", g_MainLoopFrames);
    printf("\n");
    *g_pDebugCounterMode = 0x81;
    UpdateParts_NotUsed();

    for (int i = 0; i < 128; i++) {
        u32 count = g_PartProfile[i].count;

        if (count != 0)
            printf("class: %d\tcount: %d\tcycles: %d\n", i, count, (int)(g_PartProfile[i].cycles << 5) / (int)count);
    }
}

// 0x011e580 (0x148 bytes)
PartInstance *CreatePartEx(int iClass, int unused)
{
    int index = PartIndexNext;

    if (index >= MAX_PARTS)
        return 0;

    PartIndexNext = index + 1;
    PartActiveCnt++;
    g_PartUsed[index >> 3] |= 1 << (index & 7);

    /* below the top: find the next free slot for PartIndexNext */
    if (PartIndexNext <= PartIndexTop) {
        PartIndexNext &= ~7;
        int byteIndex = PartIndexNext >> 3;

        while (PartIndexNext < MAX_PARTS) {
            bool found = false;

            for (int bit = 1; bit != 0x100; bit <<= 1) {
                if (!(bit & g_PartUsed[byteIndex])) {
                    found = true;
                    break;
                }
                PartIndexNext++;
            }
            if (found)
                break;

            byteIndex++;
        }
    }

    if (PartIndexNext - 1 > PartIndexTop)
        PartIndexTop = PartIndexNext - 1;

    PartInstance *part = &PartInstances[index];
    FastMemSetZero(part, sizeof(PartInstance));
    part->iClass = iClass;

    return part;
}

// 0x011e6c8 (0x24 bytes)
PartInstance *CreatePart(int iClass)
{
    return CreatePartEx(iClass, 0);
}

// 0x011e6ec (0x104 bytes)
void DeletePart(PartInstance *part)
{
    int index = part - PartInstances;

    PartActiveCnt--;
    g_PartUsed[index >> 3] &= ~(1 << (index & 7));

    /* it was the top one: move the top down to the next slot in use */
    if (PartIndexTop == index) {
        PartIndexTop = index - 1;

        int byteIndex = PartIndexTop >> 3;
        int bit = 1 << (PartIndexTop & 7);
        while (PartIndexTop >= 0) {
            u8 used = g_PartUsed[byteIndex];
            bool found = false;

            for (; bit != 0; bit >>= 1) {
                if (bit & used) {
                    found = true;
                    break;
                }
                PartIndexTop--;
            }
            if (found)
                break;

            byteIndex--;
            bit = 0x80;
        }
    }

    part->type = PART_DEAD;

    if (index < PartIndexNext)
        PartIndexNext = index;
}

// 0x011e7f0 (0x64 bytes)
/* particles in use, counting whole bytes of g_PartUsed below PartIndexTop */
int CountActiveParts(void)
{
    int count = 0;

    for (int i = 0; i < PartIndexTop >> 3; i++)
        count += g_NibbleBitCount[g_PartUsed[i] & 0xf] + g_NibbleBitCount[g_PartUsed[i] >> 4];

    return count;
}

// 0x011e8a0 (0x270 bytes)
void UpdateParts(void)
{
    SetPartView();
    UpdateAllParts();
}

// 0x011eb10 (0xb4 bytes)
void UpdateParts_NotUsed(void)
{
    UpdateAllParts();
}

// 0x011f918 (0x27c bytes)
/* class 22: drifts and falls, grows, and fades from its start colour to its end colour; the
   last PART_FADE_IN frames also fade the alpha */
void UpdatePart_22(PartInstance *part)
{
    Part22 *data = (Part22 *)part->update;

    part->timer--;
    short timer = part->timer;
    if (timer < 1) {
        DeletePart(part);
        return;
    }

    part->rot++;

    float fade = (float)((timer < PART_FADE_IN ? timer : PART_FADE_IN) << 9) * (1.0f / 4096.0f);
    float age = (float)timer * (1.0f / (float)data->life);     /* 1 at birth, 0 at the end */
    float rest = 1.0f - age;

    part->pos.x = data->vel.x + part->pos.x;
    part->pos.y = data->vel.y + part->pos.y;
    part->pos.z = data->vel.z + part->pos.z;
    data->vel.z = data->gravity + data->vel.z;
    part->scale = part->scale + data->growth;

    u8 *color = (u8 *)&part->color;
    color[0] = (int)(data->endColor[0] * rest + data->startColor[0] * age);
    color[1] = (int)(data->endColor[1] * rest + data->startColor[1] * age);
    color[2] = (int)(data->endColor[2] * rest + data->startColor[2] * age);
    color[3] = (int)(data->endColor[3] * fade * rest + data->startColor[3] * fade * age);
}

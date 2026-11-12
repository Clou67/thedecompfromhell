#pragma once
// game/update/moby1826.h
#include "types.h"
#include "game/camera.h"

// ---- types
struct Cylinder {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

// ---- globals
extern undefined4 DAT_007b7efc; /* 0x7b7efc */
extern undefined4 DAT_007b7f08; /* 0x7b7f08 */
extern undefined4 DAT_007b7f0c; /* 0x7b7f0c */
extern pointer32 PTR_M1827_002c11e8_0070b020; /* 0x70b020 */

// ---- functions
void UpdateMoby_1826(MobyInstance *moby);

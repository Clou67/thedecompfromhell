#pragma once
// game/update/moby263.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0080009c; /* 0x80009c */

// ---- functions
MobyInstance * M267_0031de18(int param_1,float *param_2);
MobyInstance * Spawn_Moby267_GasparAsteroid(void);
MobyInstance * M267_0031e5f0(float param_1);
void M267_0031ea48(MobyInstance *param_1);
void M267_0031eca8(MobyInstance *param_1);
void UpdateMoby_263(MobyInstance *moby);
void M267_00320570(void);

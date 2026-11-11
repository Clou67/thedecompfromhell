#pragma once
// game/update/moby1410.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007a2060; /* 0x7a2060 */

// ---- functions
void M1410_0026fe98(int param_1);
void M1410_00270018(int param_1);
void M1410_002702d8(int param_1);
MobyInstance * M1410_00270448(int param_1,short param_2);
void M1410_002704bc(int param_1);
bool M1410_00270600(int param_1);
void M1410_002706c4(int param_1);
void M1410_00270798(int param_1);
void UpdateMoby_1410(MobyInstance *moby);

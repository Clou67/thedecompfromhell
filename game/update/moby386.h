#pragma once
// game/update/moby386.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840810; /* 0x840810 */
extern undefined4 DAT_00840814; /* 0x840814 */
extern undefined4 DAT_00840818; /* 0x840818 */
extern undefined4 DAT_0084081c; /* 0x84081c */
extern undefined4 DAT_00840820; /* 0x840820 */
extern undefined4 DAT_00840830; /* 0x840830 */
extern undefined4 DAT_010c5114; /* 0x10c5114 */
extern undefined4 DAT_010c5118; /* 0x10c5118 */
extern pointer32 PTR_M388_0035b698_0070c6b8; /* 0x70c6b8 */
extern undefined4 _DAT_0035a410; /* direct read */
extern undefined4 _DAT_0035a420; /* direct read */
extern undefined4 _DAT_0035a430; /* direct read */
extern undefined4 _DAT_0035a440; /* direct read */
extern undefined4 _DAT_0035a650; /* direct read */
extern undefined4 _DAT_0035a660; /* direct read */
extern undefined4 _DAT_0035a670; /* direct read */
extern undefined4 _DAT_0035a680; /* direct read */

// ---- functions
void M386_00359ad0(int param_1);
void M386_00359f28(void *param_1);
void M386_0035a450(undefined8 param_1);
void M386_0035a560(int param_1);
void UpdateMoby_386(MobyInstance *moby);

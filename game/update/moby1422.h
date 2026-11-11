#pragma once
// game/update/moby1422.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007a9f4c; /* 0x7a9f4c */
extern undefined4 DAT_007a9fb8; /* 0x7a9fb8 */
extern undefined4 DAT_007a9fc0; /* 0x7a9fc0 */
extern undefined4 DAT_007a9fc4; /* 0x7a9fc4 */
extern undefined4 DAT_007a9fd4; /* 0x7a9fd4 */
extern undefined4 DAT_007a9fd8; /* 0x7a9fd8 */
extern undefined4 DAT_007a9fdc; /* 0x7a9fdc */
extern undefined4 DAT_007a9fe0; /* 0x7a9fe0 */
extern undefined4 DAT_007a9fe4; /* 0x7a9fe4 */
extern undefined4 DAT_007a9fec; /* 0x7a9fec */
extern undefined4 DAT_007a9ff0; /* 0x7a9ff0 */
extern undefined4 DAT_007a9ff4; /* 0x7a9ff4 */
extern undefined4 DAT_007a9ff8; /* 0x7a9ff8 */
extern undefined4 DAT_007aa000; /* 0x7aa000 */
extern undefined4 DAT_007aa004; /* 0x7aa004 */
extern undefined4 DAT_007aa008; /* 0x7aa008 */
extern undefined4 DAT_007aa00c; /* 0x7aa00c */
extern undefined4 DAT_007aa010; /* 0x7aa010 */
extern undefined4 DAT_007aa014; /* 0x7aa014 */
extern undefined4 DAT_007aa018; /* 0x7aa018 */
extern undefined4 DAT_007aa01c; /* 0x7aa01c */
extern undefined4 DAT_007aa020; /* 0x7aa020 */
extern undefined4 DAT_007aa024; /* 0x7aa024 */
extern undefined4 DAT_007aa028; /* 0x7aa028 */
extern undefined4 DAT_007aa02c; /* 0x7aa02c */
extern undefined4 DAT_007aa030; /* 0x7aa030 */
extern undefined4 DAT_007aa034; /* 0x7aa034 */
extern undefined4 DAT_007aa038; /* 0x7aa038 */
extern undefined4 DAT_007aa03c; /* 0x7aa03c */
extern undefined4 DAT_007aa040; /* 0x7aa040 */
extern undefined4 DAT_007aa044; /* 0x7aa044 */
extern undefined4 DAT_007aa048; /* 0x7aa048 */
extern undefined4 DAT_007aa04c; /* 0x7aa04c */
extern undefined4 DAT_007aa054; /* 0x7aa054 */
extern undefined4 DAT_007aa058; /* 0x7aa058 */
extern undefined4 DAT_007aa070; /* 0x7aa070 */
extern undefined4 DAT_007aa074; /* 0x7aa074 */
extern undefined4 DAT_007aa078; /* 0x7aa078 */
extern undefined4 DAT_007aa07c; /* 0x7aa07c */
extern undefined4 DAT_007aa080; /* 0x7aa080 */
extern undefined4 DAT_007aa084; /* 0x7aa084 */
extern undefined4 DAT_007aa088; /* 0x7aa088 */
extern undefined4 DAT_007aa08c; /* 0x7aa08c */
extern undefined4 DAT_007aa090; /* 0x7aa090 */
extern undefined4 DAT_007aa098; /* 0x7aa098 */
extern undefined4 DAT_007aa09c; /* 0x7aa09c */
extern undefined4 DAT_007aa0a0; /* 0x7aa0a0 */
extern undefined4 DAT_007aa0a4; /* 0x7aa0a4 */
extern undefined4 DAT_007aa0a8; /* 0x7aa0a8 */
extern undefined4 DAT_007aa0ac; /* 0x7aa0ac */
extern undefined4 DAT_007b0000; /* no defined data */
extern undefined4 DAT_00facc64; /* 0xfacc64 */
extern undefined4 DAT_00facc70; /* 0xfacc70 */
extern undefined4 DAT_00facc7c; /* 0xfacc7c */
extern undefined4 DAT_00facc84; /* 0xfacc84 */
extern undefined4 DAT_00facc88; /* 0xfacc88 */
extern pointer32 PTR_M1424_0027a098_0070a5b0; /* 0x70a5b0 */
extern undefined4 g_deplanetizerUp; /* 0xfacc78 */
extern undefined4 g_playDrekButtonCutscene; /* 0xfacc74 */

// ---- functions
void M1422_002736bc(void);
void M1422_002736d0(void);
double M1422_002737b8(int param_1);
undefined8 M1422_00273c08(double param_1,int param_2,float *param_3);
double M1422_00273da0(int param_1);
void M1422_002744f8(int param_1);
void M1422_002746a8(int param_1,undefined8 param_2);
void M1422_00274ad0 (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
int M1422_00274cf0(int param_1);
void M1422_00274eb8(undefined8 param_1,longlong param_2);
void M1422_00274f38(undefined8 param_1,longlong param_2);
MobyInstance * M1422_00274fd0(int param_1);
void M1422_00275240(MobyInstance *param_1);
void M1422_002765a4(int param_1);
void UpdateMoby_1422(MobyInstance *moby);

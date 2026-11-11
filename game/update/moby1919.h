#pragma once
// game/update/moby1919.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007dcd90; /* 0x7dcd90 */
extern undefined4 DAT_007dcd94; /* 0x7dcd94 */
extern undefined4 DAT_007dcd98; /* 0x7dcd98 */
extern undefined4 DAT_007dcda0; /* 0x7dcda0 */
extern undefined4 DAT_007dcda4; /* 0x7dcda4 */
extern undefined4 DAT_007dcdac; /* no defined data */
extern undefined4 DAT_007dcdb0; /* no defined data */
extern undefined4 DAT_007dcdc4; /* no defined data */
extern undefined4 DAT_007dcdc8; /* no defined data */
extern undefined4 DAT_007dcdd4; /* 0x7dcdd4 */
extern undefined4 DAT_007dcdd8; /* 0x7dcdd8 */
extern undefined4 DAT_007dcddc; /* no defined data */
extern undefined4 DAT_007dcde0; /* no defined data */
extern undefined4 DAT_007dcde4; /* 0x7dcde4 */
extern undefined4 DAT_007dcde8; /* 0x7dcde8 */
extern undefined4 DAT_007e3f90; /* 0x7e3f90 */
extern undefined4 DAT_007f1880; /* 0x7f1880 */
extern undefined4 DAT_007f3d94; /* 0x7f3d94 */
extern undefined1 DAT_010b8c30; /* 0x10b8c30 */
extern undefined4 DAT_010b8c34; /* 0x10b8c34 */
extern undefined4 DAT_010b8c38; /* 0x10b8c38 */
extern undefined4 DAT_010b8c3c; /* 0x10b8c3c */
extern undefined4 DAT_010b8c40; /* 0x10b8c40 */
extern undefined4 DAT_010b8c44; /* 0x10b8c44 */
extern undefined4 DAT_010b8c48; /* 0x10b8c48 */
extern undefined4 DAT_010b8c4c; /* 0x10b8c4c */
extern undefined4 DAT_010b8c50; /* 0x10b8c50 */
extern undefined4 DAT_010b8c54; /* 0x10b8c54 */
extern undefined4 DAT_010b8c58; /* 0x10b8c58 */
extern undefined4 DAT_010b8c5c; /* 0x10b8c5c */
extern undefined4 DAT_010b8c60; /* 0x10b8c60 */
extern undefined4 DAT_010b8c64; /* 0x10b8c64 */
extern undefined4 DAT_010b8c68; /* 0x10b8c68 */
extern undefined4 DAT_010b8c6c; /* 0x10b8c6c */
extern undefined4 DAT_010b8c70; /* no defined data */
extern undefined * PTR_DAT_007e3f00; /* 0x7e3f00 */
extern pointer PTR_DAT_007e3f24; /* 0x7e3f24 */
extern undefined * PTR_DAT_007e3f6c; /* 0x7e3f6c */
extern undefined * PTR_DAT_007f1770; /* 0x7f1770 */
extern pointer PTR_DAT_007f17b4; /* 0x7f17b4 */
extern undefined * PTR_DAT_007f183c; /* 0x7f183c */
extern undefined * PTR_DAT_007f3cf8; /* 0x7f3cf8 */
extern pointer PTR_DAT_007f3d0c; /* 0x7f3d0c */
extern undefined * PTR_DAT_007f3d34; /* 0x7f3d34 */
extern pointer32 PTR_M1919_002d9948_0070b4a8; /* 0x70b4a8 */

// ---- functions
void M1919_002d9678(int param_1);
void M1919_002d9768(int param_1);
void M1919_002d9858(int param_1);
void M1919_002d9948(int param_1);
void M1919_002da078 (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6, int *param_7);
void M1919_002da2c0 (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5, undefined8 param_6,float *param_7);
void M1919_002da418(longlong param_1);
void M1919_002da4d8(longlong param_1);
void M1919_002da598(longlong param_1);
void UpdateMoby_1919(MobyInstance *moby);
void M1919_002da9d8(void);

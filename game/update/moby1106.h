#pragma once
// game/update/moby1106.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001c1a30; /* 0x1c1a30 */
extern undefined4 DAT_001c4f8c; /* 0x1c4f8c */
extern undefined4 DAT_0072103c; /* no defined data */
extern undefined4 DAT_00763ed0; /* 0x763ed0 */
extern undefined4 DAT_00763f04; /* no defined data */
extern undefined4 DAT_00763fd0; /* no defined data */
extern undefined1 DAT_00763fd1; /* 0x763fd1 */
extern undefined4 DAT_00763ff0; /* 0x763ff0 */
extern undefined4 DAT_00763ff4; /* 0x763ff4 */
extern undefined4 DAT_00763ff8; /* 0x763ff8 */
extern undefined4 DAT_00764010; /* 0x764010 */
extern undefined4 DAT_00764014; /* 0x764014 */
extern undefined4 DAT_00764018; /* 0x764018 */
extern undefined4 DAT_00764020; /* 0x764020 */
extern undefined1 DAT_00eef9e0; /* 0xeef9e0 */
extern undefined4 DAT_00eef9f0; /* 0xeef9f0 */
extern undefined4 DAT_00eefa00; /* 0xeefa00 */
extern undefined4 DAT_00eefa04; /* 0xeefa04 */
extern undefined4 DAT_00eefa08; /* 0xeefa08 */
extern undefined4 DAT_00eefa0c; /* 0xeefa0c */
extern undefined4 DAT_00eefa10; /* 0xeefa10 */
extern undefined4 DAT_00eefa14; /* 0xeefa14 */
extern undefined4 DAT_00eefa18; /* 0xeefa18 */
extern undefined4 DAT_00eefa1c; /* 0xeefa1c */
extern undefined4 DAT_00eefa20; /* 0xeefa20 */
extern undefined4 DAT_00eefa24; /* 0xeefa24 */
extern undefined2 DAT_00eefa28; /* 0xeefa28 */
extern undefined2 DAT_00eefa2a; /* 0xeefa2a */
extern undefined4 DAT_00eefa2c; /* 0xeefa2c */
extern undefined4 DAT_00eefa30; /* 0xeefa30 */
extern undefined4 DAT_00eefa34; /* 0xeefa34 */
extern undefined4 DAT_00eefa38; /* 0xeefa38 */
extern undefined4 DAT_00eefa3c; /* 0xeefa3c */
extern undefined4 DAT_00ef0ce0; /* 0xef0ce0 */
extern undefined4 DAT_00ef0ce4; /* 0xef0ce4 */
extern undefined4 DAT_00ef0ce8; /* 0xef0ce8 */
extern undefined4 DAT_00ef0cf0; /* 0xef0cf0 */
extern undefined4 DAT_00ef0cf4; /* 0xef0cf4 */
extern undefined4 DAT_00ef0cf8; /* 0xef0cf8 */
extern undefined4 DAT_00ef0cfc; /* 0xef0cfc */
extern undefined4 DAT_00ef0d00; /* 0xef0d00 */
extern undefined2 DAT_00ef0db8; /* 0xef0db8 */
extern undefined2 DAT_00ef0dba; /* 0xef0dba */
extern undefined4 DAT_00ef0dd0; /* 0xef0dd0 */
extern undefined4 DAT_00ef0dd4; /* 0xef0dd4 */
extern undefined4 DAT_00ef0dd8; /* 0xef0dd8 */
extern pointer32 PTR_M1106_001c00b8_00708b90; /* 0x708b90 */
extern pointer32 PTR_M1106_001c13d0_00708ba8; /* 0x708ba8 */
extern pointer32 PTR_M1106_001c1a58_00708bb8; /* 0x708bb8 */
extern pointer32 PTR_M1107_001c90b0_00708cb0; /* 0x708cb0 */
extern undefined4 _DAT_001c1490; /* direct read */

// ---- functions
void M1106_001bf888(void);
void M1106_001bf8b0 (float param_1,undefined8 param_2,int param_3,short param_4,float *param_5, short param_6,ulonglong param_7,int param_8);
void M1106_001bfb58(int param_1);
void M1106_001bfbd8(int param_1);
u8 M1106_001bfdb8(undefined8 param_1,longlong param_2);
void M1106_001c00b8(int param_1);
void M1106_001c0a10(undefined4 param_1);
void M1106_001c0d58 (double param_1,double param_2,double param_3,double param_4,double param_5, int param_6,int param_7);
void M1106_001c13d0(int param_1);
void M1106_001c14d0 (double param_1,double param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6,uint param_7);
void M1106_001c1a58 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulonglong M1106_001c1d28(undefined8 param_1,int param_2,int *param_3);
void M1106_001c1e18(MobyInstance *param_1,longlong param_2,undefined8 param_3);
void M1106_001c2480(double param_1,float *param_2);
void M1106_001c2500 (undefined8 param_1,int param_2,Vec4 *param_3,undefined8 param_4);
ulonglong M1106_001c26e0 (double param_1,int param_2,int param_3,float *param_4,undefined8 param_5);
double M1106_001c2b20 (double param_1,double param_2,double param_3,int param_4,int param_5);
undefined8 M1106_001c2bb8 (int param_1,int param_2,float *param_3,undefined1 param_4,undefined1 param_5);
void M1106_001c30c0(int param_1,int param_2,float *param_3);
void M1106_001c3370(int param_1);
void M1106_001c3478(MobyInstance *param_1);
void M1106_001c3510(MobyInstance *param_1);
void M1106_001c3770(int param_1,undefined4 *param_2);
double M1106_001c3a18(longlong param_1,float *param_2);
void M1106_001c4f68(void);
void UpdateMoby_1106(MobyInstance *moby);

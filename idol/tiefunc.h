#pragma once
// idol/tiefunc.h
#include "types.h"

// ---- types
struct TieInstance {           /* 0x70 */
    char _unknown_00[64];
    struct BSphere bSphere;    /* 0x40 */
    char field2_0x50[8];
    char occlIndex[5];         /* 0x58 */
    char dir_lights_upd;       /* 0x5d  set when no point light is left on it (DetachPointLight) */
    char _unknown_5e[11];
    ushort point_lights;       /* 0x6a  four 4-bit point light slots, 0xf = empty */
    char _unknown_6c[4];
};

// ---- globals
extern undefined4 DAT_00903004; /* no defined data */
extern undefined4 DAT_00903008; /* no defined data */
extern undefined1 DAT_0159c369; /* 0x159c369 */
extern undefined1 DAT_0159c36a; /* 0x159c36a */
extern RenderingStep * ForwardPass; /* 0x8fa41c */
extern pointer PTR_DAT_0071a904; /* 0x71a904 */
extern pointer PTR_DAT_0071a908; /* 0x71a908 */
extern undefined4 _DAT_0050c5c0; /* direct read */
extern undefined4 _DAT_0050c5d0; /* direct read */
extern undefined4 _DAT_0050d220; /* direct read */
extern undefined4 _DAT_0050d230; /* direct read */

// ---- functions
void DrawTie(int param_1,int *param_2);
void FUN_0050d240(int param_1,int *param_2,longlong param_3);
void FUN_0050e390(undefined1 *param_1);
void FUN_0050e3cc(undefined1 *param_1);
void FUN_0050e408(undefined1 *param_1);
void FUN_0050e444(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
void FUN_0050e484(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
int FUN_0050e4c4(int param_1);
int FUN_0050e4dc(int param_1);
undefined8 FUN_0050e4f8(char *param_1);
undefined2 FUN_0050e52c(int param_1);
ulonglong FUN_0050e538(int param_1,int param_2);
undefined4 FUN_0050e568(int param_1);
void FUN_0050e574(undefined4 *param_1);
void FUN_0050e580(undefined4 *param_1);
undefined4 FUN_0050e58c(undefined4 *param_1);
undefined8 FUN_0050e594(undefined4 *param_1,undefined8 param_2);
int FUN_0050e5f4(int *param_1);
int FUN_0050e664(int *param_1);
undefined4 FUN_0050e6d8(undefined4 *param_1,ulonglong param_2);
undefined4 FUN_0050e794(void);
void FUN_0050e7a4(undefined4 param_1);
void FUN_0050e7b0(int param_1,uint param_2);
void FUN_0050e7d8(int *param_1,int param_2,uint param_3,int param_4);

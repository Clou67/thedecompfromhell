#pragma once
// idol/mathfunc.h
#include "types.h"
#include "idol/idol_draw.h"

// ---- globals
extern undefined4 DAT_0071a3c0; /* 0x71a3c0 */
extern undefined4 DAT_0071a3ec; /* 0x71a3ec */
extern undefined4 DAT_0071a3f0; /* 0x71a3f0 */
extern undefined4 DAT_0071a460; /* 0x71a460 */
extern undefined4 DAT_0071a464; /* 0x71a464 */
extern undefined4 DAT_0071a468; /* 0x71a468 */
extern undefined4 DAT_0071a490; /* 0x71a490 */
extern undefined4 DAT_0071a574; /* 0x71a574 */
extern undefined8 DAT_0071a580; /* 0x71a580 */
extern undefined8 DAT_0071a588; /* 0x71a588 */
extern undefined4 DAT_0071a590; /* 0x71a590 */
extern undefined4 DAT_0071a5d0; /* 0x71a5d0 */
extern undefined4 DAT_0071a5d4; /* 0x71a5d4 */
extern undefined4 DAT_0071a5d8; /* 0x71a5d8 */
extern undefined4 DAT_00989680; /* no defined data */
extern undefined1 DAT_01593350; /* 0x1593350 */
extern pointer PTR_DAT_0071a3c4; /* 0x71a3c4 */
extern pointer PTR_DAT_0071a3e8; /* 0x71a3e8 */
extern pointer PTR_DAT_0071a3f4; /* 0x71a3f4 */
extern pointer PTR_DAT_0071a3f8; /* 0x71a3f8 */
extern pointer PTR_DAT_0071a40c; /* 0x71a40c */
extern pointer PTR_DAT_0071a410; /* 0x71a410 */
extern pointer PTR_DAT_0071a414; /* 0x71a414 */
extern pointer PTR_DAT_0071a4a0; /* 0x71a4a0 */
extern pointer PTR_DAT_0071a51c; /* 0x71a51c */
extern pointer PTR_DAT_0071a520; /* 0x71a520 */
extern pointer PTR_DAT_0071a540; /* 0x71a540 */
extern pointer PTR_DAT_0071a544; /* 0x71a544 */
extern pointer PTR_DAT_0071a558; /* 0x71a558 */
extern pointer PTR_DAT_0071a55c; /* 0x71a55c */
extern pointer PTR_DAT_0071a560; /* 0x71a560 */
extern pointer PTR_DAT_0071a568; /* 0x71a568 */
extern pointer PTR_DAT_0071a56c; /* 0x71a56c */
extern pointer PTR_DAT_0071a570; /* 0x71a570 */
extern pointer PTR_DAT_0071a578; /* 0x71a578 */
extern pointer PTR_DAT_0071a598; /* 0x71a598 */
extern pointer PTR_DAT_0071a5a8; /* 0x71a5a8 */
extern pointer PTR_DAT_0071a5b0; /* 0x71a5b0 */
extern pointer PTR_DAT_0071a5b8; /* 0x71a5b8 */
extern pointer PTR_DAT_0071a5c4; /* 0x71a5c4 */
extern pointer PTR_DAT_0071a5c8; /* 0x71a5c8 */
extern undefined * PTR_PTR_006618e0; /* 0x6618e0 */
extern pointer PTR_PTR_006663e8; /* 0x6663e8 */
extern undefined * PTR_PTR_00666410; /* 0x666410 */
extern pointer PTR_PTR_0071a3c8; /* 0x71a3c8 */
extern pointer PTR_PTR_0071a3cc; /* 0x71a3cc */
extern pointer PTR_PTR_0071a3d0; /* 0x71a3d0 */
extern pointer PTR_PTR_0071a3d4; /* 0x71a3d4 */
extern pointer PTR_PTR_0071a3d8; /* 0x71a3d8 */
extern pointer PTR_PTR_0071a3dc; /* 0x71a3dc */
extern pointer PTR_PTR_0071a3e0; /* 0x71a3e0 */
extern pointer PTR_PTR_0071a3e4; /* 0x71a3e4 */
extern pointer PTR_PTR_0071a4d0; /* 0x71a4d0 */
extern pointer PTR_PTR_0071a4d4; /* 0x71a4d4 */
extern pointer PTR_PTR_0071a4d8; /* 0x71a4d8 */
extern pointer PTR_PTR_0071a4dc; /* 0x71a4dc */
extern pointer PTR_PTR_0071a500; /* 0x71a500 */
extern pointer PTR_PTR_0071a504; /* 0x71a504 */
extern pointer PTR_PTR_0071a508; /* 0x71a508 */
extern pointer PTR_PTR_0071a50c; /* 0x71a50c */
extern pointer PTR_PTR_0071a510; /* 0x71a510 */
extern pointer PTR_PTR_0071a514; /* 0x71a514 */
extern pointer PTR_PTR_0071a518; /* 0x71a518 */
extern pointer PTR_PTR_0071a5a0; /* 0x71a5a0 */
extern pointer PTR_PTR_0071a5a4; /* 0x71a5a4 */
extern pointer PTR_PTR_0071a5dc; /* 0x71a5dc */
extern pointer PTR_s_Bink_IO_0071a494; /* 0x71a494 */
extern pointer PTR_s_Bink_Snd_0071a44c; /* 0x71a44c */
extern pointer PTR_s_Bink_global_IO_mutex_0071a43c; /* 0x71a43c */
extern pointer PTR_s_Bink_global_sound_mutex_0071a440; /* 0x71a440 */
extern pointer PTR_s_Bink_instance_io_mutex_0071a420; /* 0x71a420 */
extern pointer PTR_s_Bink_instance_priority_io_mutex_0071a434; /* 0x71a434 */
extern pointer PTR_s_Bink_instance_sound_mutex_0071a438; /* 0x71a438 */
extern pointer PTR_s_Bink_list_mutex_0071a444; /* 0x71a444 */
extern pointer PTR_s_Data_rate_0071a48c; /* 0x71a48c */
extern pointer PTR_s_IO_buffer_0071a470; /* 0x71a470 */
extern pointer PTR_s_Loop_Seek_Period_0071a524; /* 0x71a524 */
extern pointer PTR_s_Percent_Full_0071a484; /* 0x71a484 */
extern pointer PTR_s_ratemem_0071a478; /* 0x71a478 */
extern undefined4 _DAT_005e8fa0; /* direct read */
extern undefined4 _DAT_005e8fb0; /* direct read */
extern undefined4 _DAT_005e8fd0; /* direct read */
extern undefined4 _DAT_005e8fe0; /* direct read */
extern undefined4 _DAT_005e8ff0; /* direct read */
extern Vec3 g_FrustumExtra; /* 0xa24608: the renderer vector after the six frustum planes (IdolDraw+0x380) */ /* type set in global_types.tsv */
extern undefined1 stack0xffffffa0[16]; /* stack slot, not a real global */
extern undefined1 stack0xffffffb0[16]; /* stack slot, not a real global */

// ---- functions
double FUN_005e8128(double param_1);
double FUN_005e81c0(float *param_1,float *param_2);
void FUN_005e81f0(float *param_1,float *param_2,float *param_3);
void FUN_005e822c(double param_1,float *param_2,float *param_3);
void FUN_005e825c(float *param_1,float *param_2,float *param_3);
double FUN_005e8338(double param_1,double param_2);
void FUN_005e84c0(double param_1,float *param_2,float *param_3);
double FUN_005e8548(float *param_1,float *param_2);
double FUN_005e8588(float *param_1,float *param_2);
void FUN_005e85b4(RenderingStep *param_1,int param_2,u32 param_3,int param_4,u32 param_5,u32 param_6);
void FUN_005e85f0(RenderingStep *param_1,u32 param_2);
void FUN_005e8610(RenderingStep *param_1,int param_2);
u32 FUN_005e8638(int param_1,u32 param_2);
void FUN_005e868c(float *param_1,float *param_2);
void FUN_005e86a8(float param_1,float *param_2,float *param_3);
bool FUN_005e86d8(float param_1,float param_2,Vec4 param_3);
void FUN_005e87d8(float param_1,float param_2,float param_3,float *param_4);
float FUN_005e87e8(Vec4 param_1,Vec4 param_2);
void FUN_005e8848(float param_1,float param_2,float param_3,float param_4,float *param_5);
void FUN_005e885c(double param_1,uint param_2);
void FUN_005e88f0(Mtx4 *param_1);
void FUN_005e8940(Mtx4 *param_1,Mtx4 *param_2);
void FUN_005e8970(RenderingStep *param_1,int param_2,u32 param_3);
void FUN_005e899c(RenderingStep *param_1,u32 param_2);
void FUN_005e89c4(Mtx4 *param_1,Mtx4 *param_2);
void FUN_005e89f4(float param_1,Mtx4 *param_2);
void FUN_005e8a94(Mtx4 *param_1,Mtx4 *param_2);
void FUN_005e8b10(float param_1,float param_2,float param_3,float *param_4);
void FUN_005e8b20(RenderingStep *param_1,u32 param_2);
void FUN_005e8b5c(RenderingStep *param_1,u32 param_2,u32 param_3);
void * FUN_005e8c64(undefined8 param_1,float *param_2);
void STUB_005e8df4(...);
double FUN_005e8e08(double param_1);
bool FUN_005e8e80(double param_1,float *param_2,float *param_3);
void FUN_005e8f04(double param_1,float *param_2,float *param_3,float *param_4);
void FUN_005e8f4c(float *param_1,float *param_2,float *param_3);
void FUN_005e9008(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_005e91b0(void);
void FUN_005e91b4(void);
void FUN_005e91b8(undefined4 *param_1);
void FUN_005e91f0(int param_1);
void FUN_005e91fc(undefined4 *param_1);
void FUN_005e923c(undefined4 *param_1);
void FUN_005e927c(undefined4 *param_1);
void FUN_005e92bc(undefined4 *param_1);
void FUN_005e92d4(undefined4 *param_1);
void FUN_005e931c(undefined4 *param_1);
void FUN_005e9334(undefined4 *param_1);
void FUN_005e937c(undefined4 *param_1);
void FUN_005e93bc(void);
void FUN_005e93c0(void);
void FUN_005e93c4(void);
void FUN_005e93c8(void);
void FUN_005e93cc(void);
void FUN_005e93d0(void);
void FUN_005e93d4(undefined4 *param_1);
void FUN_005e9414(int param_1,int param_2);
undefined8 FUN_005e9448(int param_1,undefined8 param_2);
undefined * FUN_005e9454(uint param_1);
int FUN_005e9484(int param_1,int param_2);
void FUN_005e9560(int param_1,int param_2,uint param_3);
undefined4 FUN_005e95f8(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5, undefined4 param_6);
void FUN_005e9848(int param_1);
void FUN_005e998c(int param_1,int param_2);
undefined8 FUN_005e99f8(void);
void FUN_005ea300(char *param_1);
undefined * FUN_005ea348(void);
void FUN_005ea350(undefined4 param_1,undefined4 param_2);
void FUN_005ea364(undefined8 param_1);
void FUN_005ea370(undefined4 param_1);
void FUN_005ea37c(undefined4 param_1);
void FUN_005ea388(undefined4 param_1);
void FUN_005ea398(uint param_1,undefined4 *param_2);
void FUN_005ea3e8(int param_1,undefined4 *param_2);
void FUN_005ea4dc(int param_1,int param_2);
ulonglong FUN_005ea4f8(int param_1,ulonglong param_2,uint param_3);
undefined4 FUN_005ea708(int *param_1,longlong param_2,uint param_3,uint *param_4);
int FUN_005ea9b0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 param_5);
void FUN_005eac3c(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_005ead38(int param_1,int param_2);
int FUN_005ead60(int param_1,int param_2);
undefined4 FUN_005ead8c(int param_1,int param_2);
undefined4 FUN_005eadb4(int param_1,undefined4 param_2);
void FUN_005eadd0(int param_1,int param_2);
void FUN_005eae04(u8 *param_1,u8 *param_2);
undefined4 FUN_005eae28(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 );
undefined8 FUN_005eb0b8(int param_1);
void FUN_005eb0f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_005eb2b0(int param_1);
void FUN_005eb2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_005eb374(int param_1);
void FUN_005eb41c(int param_1);
void FUN_005eb450(int param_1);
void FUN_005eb650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_005eb740(int param_1,undefined2 *param_2);
void FUN_005eb970(int param_1);
ulonglong FUN_005eb9ac(int *param_1);
void FUN_005ebac0(int param_1);
void FUN_005ebf50(int param_1);
undefined4 FUN_005ec00c(void);
uint FUN_005ec034(int param_1,undefined4 param_2);
void FUN_005ec0e0(void);
void FUN_005ec1d4(void);
undefined4 FUN_005ec2c8(void);
void FUN_005ec2f0(int param_1,ulonglong param_2,int param_3);
void FUN_005ec3c8(void);
u32 FUN_005ec620(u8 *param_1,u32 param_2);
undefined8 FUN_005ec778(void);
void FUN_005ecc80(uint *param_1,longlong param_2);
void thunk_FUN_005ecc80(uint *param_1,longlong param_2);
undefined4 FUN_005ece64(undefined8 param_1,int param_2,int param_3);
void FUN_005eced8(int param_1,undefined4 *param_2,ulonglong param_3);
void FUN_005ed184(undefined4 *param_1,undefined4 *param_2);
void FUN_005ed3a0(int param_1,int param_2,int param_3,int param_4,uint param_5);
void FUN_005ed898(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_005ed994(int param_1,undefined4 param_2);
void FUN_005eda28(int param_1,longlong param_2);
undefined4 FUN_005edea0(int param_1);
undefined8 FUN_005ee120(int param_1,uint param_2);
undefined4 FUN_005ee3a8(int param_1,int param_2);
void FUN_005ee638(int param_1);
undefined8 FUN_005eec10(void);
int FUN_005ef740(int param_1);
void FUN_005ef8f0(void);
undefined4 FUN_005efad8(int param_1,uint param_2);
void FUN_005efeb0(int param_1);
int FUN_005f01d8(int param_1,int param_2);
undefined4 FUN_005f0370(uint param_1,ulonglong param_2);
void FUN_005f0a98(undefined8 param_1);
void FUN_005f0aa0(int param_1,ulonglong param_2,uint param_3);
uint * FUN_005f0f38(uint param_1,uint param_2);
uint FUN_005f1198(uint *param_1,ulonglong param_2);
void * FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3);
void * thunk_FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3);
undefined4 FUN_005f3984(undefined8 param_1,undefined8 param_2);
uint FUN_005f3a3c(undefined8 param_1,int param_2);
void FUN_005f3a74(int param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_005f3b70(undefined4 *param_1,undefined4 param_2,ulonglong param_3);
void FUN_005f3cc0(int param_1);
int FUN_005f3d78(int param_1);
undefined4 FUN_005f43d0(int param_1,uint param_2);
int FUN_005f44f0(int param_1,int param_2,undefined4 param_3,int param_4);
int FUN_005f4738(int param_1,uint param_2,uint param_3,void *param_4,uint param_5);
ulonglong FUN_005f5090(void);
void FUN_005f515c(undefined4 param_1,undefined4 param_2);
void FUN_005f516c(int param_1);
int FUN_005f5204(int param_1);
longlong FUN_005f533c(uint param_1,int param_2);
undefined4 FUN_005f5384(int param_1);
undefined4 FUN_005f538c(int param_1);
void FUN_005f5398(undefined4 *param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4, ulonglong param_5,uint *param_6,undefined4 param_7,ulonglong param_8);
int * FUN_005f5cd0(int *param_1,ulonglong param_2,int param_3,uint param_4);
void FUN_005f5f70(int *param_1,uint *param_2,uint *param_3);
void FUN_005f6258(int *param_1,uint *param_2,int param_3,uint *param_4);
void FUN_005f6620(int *param_1,uint *param_2,int param_3,uint *param_4);
void FUN_005f6a08(uint *param_1,uint *param_2,uint *param_3);
void FUN_005f6d90(int *param_1,uint *param_2,uint *param_3);
void FUN_005f7140(uint *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4);
void FUN_005f8758(uint *param_1,uint param_2);
uint * FUN_005f87d0(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6, uint *param_7);
ulonglong FUN_005fb780(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,int param_5, int param_6,int *param_7,ulonglong param_8);
void FUN_005fbd88(void);
undefined4 FUN_005fbd90(undefined4 *param_1);
undefined8 FUN_005fbda0(undefined8 *param_1);
void FUN_005fbdac(undefined4 *param_1,undefined4 param_2);
void FUN_005fbdb8(undefined8 *param_1,undefined8 param_2);
undefined4 FUN_005fbdc8(ulonglong param_1,int *param_2,undefined8 param_3);
undefined4 FUN_005fbe20(ulonglong param_1,longlong *param_2,undefined8 param_3);
undefined4 FUN_005fbe78(undefined8 param_1,undefined8 param_2);
undefined8 FUN_005fbea8(undefined8 param_1,undefined8 param_2);
longlong FUN_005fbed8(undefined8 param_1,longlong param_2);
uint FUN_005fbef8(undefined8 param_1,longlong param_2);
void FUN_005fbf18(undefined8 param_1,undefined8 param_2,longlong param_3);
int FUN_005fbf3c(undefined8 param_1,undefined8 param_2,int param_3);
undefined4 FUN_005fbf64(void);
void FUN_005fbf70(void);
void FUN_005fbf74(int param_1);
void FUN_005fbfac(void);
void FUN_005fbfc8(void);
bool FUN_005fbfd4(int param_1,undefined4 param_2,int param_3);
int FUN_005fc098(int param_1);
uint FUN_005fc0f8(int param_1,int param_2);
undefined4 * FUN_005fc190(undefined4 *param_1);
void FUN_005fc1d8(int param_1);
uint FUN_005fc20c(int param_1,int param_2);
void FUN_005fc2bc(int param_1);
undefined4 FUN_005fc2ec(int param_1,int param_2,uint *param_3);
void FUN_005fc490(int param_1);
bool FUN_005fc508(int param_1);
undefined8 FUN_005fc5a8(void);
void FUN_005fc5dc(void);
undefined4 FUN_005fc5f8(undefined8 param_1);
undefined4 FUN_005fc620(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ulonglong param_5, undefined4 param_6);
undefined4 * FUN_005fc998(undefined4 *param_1);
int FUN_005fc9e0(int param_1);
undefined8 FUN_005fca40(int param_1);
bool FUN_005fcaa0(int param_1);
void FUN_005fcb58(int param_1);
uint FUN_005fcbb8(int param_1,int param_2);
undefined4 FUN_005fcc50(int param_1,undefined8 *param_2);
void FUN_005fccc8(int param_1,int param_2);
void FUN_005fcf70(int param_1);
undefined4 FUN_005fd004(void);
undefined4 FUN_005fd050(int param_1);
undefined8 FUN_005fd0bc(int param_1);
undefined4 FUN_005fd120(int param_1,ulonglong param_2,undefined4 *param_3);
undefined4 FUN_005fd1f0(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_005fd2a0(int param_1);
ulonglong FUN_005fd308(int param_1);
void FUN_005fd4d0(int param_1);
void FUN_005fd570(int param_1);
void FUN_005fd6d0(int *param_1,int param_2);
void FUN_005fd700(int param_1,undefined4 param_2,longlong param_3);
undefined4 FUN_005fd778(int param_1);
int FUN_005fd790(int param_1,int param_2);
void FUN_005fd890(uint param_1);
void FUN_005fd958(undefined4 *param_1);
void FUN_005fd9f8(int param_1,longlong param_2,int param_3);
void FUN_005fde88(int param_1,float *param_2,int param_3);
void FUN_005fe460(float *param_1,int param_2);
void FUN_005fedf0(float *param_1,int param_2);
void FUN_005ff938(float *param_1,int param_2);
void FUN_005ffb74(float *param_1,int param_2);
void FUN_005ffe10(int param_1,int param_2,int param_3,int param_4);
void FUN_005fff00(int param_1,int param_2,int param_3,int param_4);
void FUN_005ffff0(int param_1,int param_2,int param_3,int param_4);
void FUN_00600320(uint param_1,int param_2,int param_3,int param_4);
void FUN_00600458(uint param_1,int param_2,int param_3,int param_4);
void FUN_00600860(int param_1,ulonglong param_2,uint param_3,int param_4);
void FUN_006019d8(int param_1,float *param_2,ulonglong param_3,ulonglong param_4);
void FUN_00601cd8(undefined1 *param_1,int param_2,short *param_3,int *param_4);
void FUN_00602080(void);
void FUN_00602094(void);
void FUN_006020b0(uint *param_1,int param_2,short *param_3,int param_4);
void FUN_006024a8(char *param_1,int param_2,short *param_3,int param_4,char *param_5,int param_6);
void FUN_006028b8(int param_1,uint *param_2,int param_3);
void FUN_00602ec8(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,char *param_5, int param_6);
void FUN_006033fc(undefined2 *param_1);
void FUN_00603598(int param_1,uint *param_2);
char * FUN_00604050(char *param_1,char *param_2);
void FUN_00604088(uint *param_1,ulonglong param_2,uint param_3);
void FUN_006040f8(undefined4 *param_1,undefined4 param_2,int param_3);
int FUN_00604120(short *param_1);
undefined4 FUN_00604150(ushort *param_1,ushort *param_2);
undefined4 FUN_006041ac(ushort *param_1,ushort *param_2,uint param_3);
void FUN_00604240(undefined4 *param_1);
void FUN_00604250(undefined4 *param_1);
void FUN_00604260(undefined4 *param_1);
void FUN_006042a0(undefined4 *param_1);
void FUN_006042e0(int param_1,int param_2);
void FUN_0060430c(void);
void FUN_00604310(void);
void FUN_00604314(undefined4 *param_1);
void FUN_00604324(undefined4 *param_1);
undefined8 FUN_00604364(void);
void FUN_0060436c(uint param_1,uint param_2,uint param_3);
void FUN_0060444c(void);

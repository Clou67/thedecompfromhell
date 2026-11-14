#pragma once
// sdk/libdme/rt_msg_client.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071bf40; /* 0x71bf40 */
extern pointer PTR_DAT_0071bea4; /* 0x71bea4 */
extern pointer PTR_DAT_0071bf38; /* 0x71bf38 */
extern pointer PTR_DAT_0071bf3c; /* 0x71bf3c */
extern pointer PTR_DAT_0071bf98; /* 0x71bf98 */
extern pointer PTR_DAT_0071bf9c; /* 0x71bf9c */
extern undefined * PTR_DAT_0071bfa4; /* 0x71bfa4 */
extern pointer PTR_DAT_0071c02c; /* 0x71c02c */
extern undefined * PTR_DAT_0071c038; /* 0x71c038 */
extern pointer PTR_DAT_0071c078; /* 0x71c078 */
extern pointer PTR_DAT_0071c07c; /* 0x71c07c */
extern pointer PTR_DAT_0071c084; /* 0x71c084 */
extern pointer PTR_PTR_0071bf30; /* 0x71bf30 */
extern pointer PTR_PTR_0071bf68; /* 0x71bf68 */
extern pointer PTR_PTR_0071bf6c; /* 0x71bf6c */
extern pointer PTR_PTR_0071bf70; /* 0x71bf70 */
extern pointer PTR_PTR_0071bf74; /* 0x71bf74 */
extern pointer PTR_PTR_0071bf78; /* 0x71bf78 */
extern pointer PTR_PTR_0071bf7c; /* 0x71bf7c */
extern pointer PTR_PTR_0071bf80; /* 0x71bf80 */
extern pointer PTR_PTR_0071bf84; /* 0x71bf84 */
extern pointer PTR_PTR_0071bf88; /* 0x71bf88 */
extern pointer PTR_PTR_0071bf8c; /* 0x71bf8c */
extern pointer PTR_PTR_0071bf90; /* 0x71bf90 */
extern pointer PTR_PTR_0071bf94; /* 0x71bf94 */
extern pointer PTR_PTR_0071bff8; /* 0x71bff8 */
extern pointer PTR_PTR_0071bffc; /* 0x71bffc */
extern pointer PTR_PTR_0071c000; /* 0x71c000 */
extern pointer PTR_PTR_0071c004; /* 0x71c004 */
extern pointer PTR_PTR_0071c008; /* 0x71c008 */
extern pointer PTR_PTR_0071c00c; /* 0x71c00c */
extern pointer PTR_PTR_0071c010; /* 0x71c010 */
extern pointer PTR_PTR_0071c014; /* 0x71c014 */
extern pointer PTR_PTR_0071c018; /* 0x71c018 */
extern pointer PTR_PTR_0071c01c; /* 0x71c01c */
extern pointer PTR_PTR_0071c020; /* 0x71c020 */
extern pointer PTR_PTR_0071c024; /* 0x71c024 */
extern pointer PTR_PTR_0071c028; /* 0x71c028 */
extern pointer PTR_PTR_0071c088; /* 0x71c088 */
extern pointer PTR_PTR_0071c08c; /* 0x71c08c */
extern pointer PTR_PTR_0071c090; /* 0x71c090 */
extern pointer PTR_PTR_0071c094; /* 0x71c094 */
extern pointer PTR_PTR_0071c098; /* 0x71c098 */
extern pointer PTR_PTR_0071c09c; /* 0x71c09c */
extern pointer PTR_PTR_0071c0a0; /* 0x71c0a0 */
extern pointer PTR_PTR_0071c0a4; /* 0x71c0a4 */
extern pointer PTR_PTR_0071c0a8; /* 0x71c0a8 */
extern pointer PTR_PTR_0071c0ac; /* 0x71c0ac */
extern pointer PTR_PTR_0071c0b0; /* 0x71c0b0 */
extern pointer PTR_PTR_0071c0b4; /* 0x71c0b4 */
extern pointer PTR_PTR_0071c0b8; /* 0x71c0b8 */
extern pointer PTR_PTR_0071c0bc; /* 0x71c0bc */
extern pointer PTR_PTR_0071c0c0; /* 0x71c0c0 */
extern pointer PTR_PTR_0071c0c4; /* 0x71c0c4 */
extern pointer PTR_PTR_0071c0c8; /* 0x71c0c8 */
extern pointer PTR_PTR_0071c0cc; /* 0x71c0cc */
extern pointer PTR_PTR_0071c0d0; /* 0x71c0d0 */
extern pointer PTR_PTR_0071c0d4; /* 0x71c0d4 */
extern pointer PTR_PTR_0071c0d8; /* 0x71c0d8 */
extern pointer PTR_PTR_0071c0dc; /* 0x71c0dc */
extern pointer PTR_PTR_0071c0e0; /* 0x71c0e0 */
extern pointer PTR_PTR_0071c0e4; /* 0x71c0e4 */
extern pointer PTR_PTR_0071c0e8; /* 0x71c0e8 */
extern pointer PTR_PTR_0071c0ec; /* 0x71c0ec */
extern pointer PTR_PTR_0071c0f0; /* 0x71c0f0 */
extern pointer PTR_PTR_0071c0f4; /* 0x71c0f4 */
extern pointer PTR_PTR_0071c0f8; /* 0x71c0f8 */
extern pointer PTR_PTR_0071c0fc; /* 0x71c0fc */
extern pointer PTR_PTR_0071c100; /* 0x71c100 */
extern pointer PTR_PTR_0071c104; /* 0x71c104 */
extern pointer PTR_PTR_0071c108; /* 0x71c108 */
extern pointer PTR_PTR_0071c10c; /* 0x71c10c */
extern pointer PTR_PTR_0071c110; /* 0x71c110 */
extern pointer PTR_PTR_0071c114; /* 0x71c114 */
extern pointer PTR_PTR_0071c118; /* 0x71c118 */
extern pointer PTR_PTR_0071c11c; /* 0x71c11c */
extern pointer PTR_PTR_0071c120; /* 0x71c120 */
extern pointer PTR_PTR_0071c128; /* 0x71c128 */

// ---- functions
undefined4 rt_msg_client_GetVersion(void);
undefined * rt_msg_client_GetBuildDate(void);
undefined8 FUN_005a11dc(int param_1,undefined8 param_2,undefined1 *param_3,int param_4);
undefined4 FUN_005a124c(uint param_1);
undefined8 FUN_005a128c(int *param_1);
undefined8 FUN_005a139c(ulonglong param_1);
undefined8 FUN_005a13d4(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4);
uint FUN_005a1504(void);
undefined8 FUN_005a1558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_005a15dc(void);
undefined8 FUN_005a15ec(ulonglong param_1);
void FUN_005a166c(void);
undefined8 FUN_005a1670(undefined4 *param_1,undefined8 param_2,char *param_3);
undefined8 FUN_005a17d0(undefined4 *param_1,int param_2,int param_3,uint param_4);
undefined8 FUN_005a1930(undefined4 *param_1,undefined8 param_2,byte *param_3);
undefined8 FUN_005a1e54(undefined4 *param_1,int param_2,int param_3,uint param_4);
undefined8 FUN_005a2130(undefined8 param_1,undefined8 param_2,int param_3,uint param_4);
undefined8 FUN_005a21d8(int param_1);
ulonglong FUN_005a2224(undefined4 *param_1);
undefined4 FUN_005a2388(void);
void FUN_005a23d0(void);
ulonglong FUN_005a2400(undefined4 param_1,uint param_2,byte param_3,undefined8 param_4,uint param_5);
ulonglong FUN_005a25a4(undefined4 param_1,undefined2 param_2,int param_3);
int FUN_005a26ac(undefined4 param_1);
int FUN_005a274c(undefined4 param_1,ulonglong param_2,longlong param_3,undefined8 param_4, undefined1 param_5);
int FUN_005a28e0(undefined4 param_1,undefined2 param_2);
int FUN_005a29d0(undefined4 param_1,undefined1 *param_2);
int FUN_005a2b24(undefined4 param_1,undefined2 param_2);
int FUN_005a2c08(undefined4 param_1,int param_2);
int FUN_005a2cc8(undefined4 param_1,undefined2 param_2);
int FUN_005a2dac(undefined4 param_1,undefined4 param_2);
int FUN_005a2e58(undefined4 param_1,byte param_2);
int FUN_005a2f0c(undefined4 param_1,int param_2);
int FUN_005a2fe0(undefined4 param_1,undefined4 *param_2);
int FUN_005a308c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
int FUN_005a3184(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4);
int FUN_005a3328(undefined4 param_1,uint param_2);
int FUN_005a3408(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4);
int FUN_005a35ac(undefined4 param_1,uint param_2);
int FUN_005a368c(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4, undefined4 param_5,int param_6,uint param_7);
undefined4 FUN_005a395c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8);
int FUN_005a39cc(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4, undefined4 param_5,int param_6,uint param_7);
undefined4 FUN_005a3ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8);
int FUN_005a3d14(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5);
undefined4 FUN_005a3ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5,undefined4 param_6);
int FUN_005a3f10(undefined4 param_1);
int FUN_005a401c(undefined4 param_1,undefined4 param_2);
int FUN_005a40e4(void);
int FUN_005a41a8(undefined4 param_1,undefined4 param_2);
undefined8 FUN_005a4268(undefined4 *param_1,undefined8 param_2,char *param_3);
void FUN_005a45b4(undefined4 *param_1);
undefined8 FUN_005a462c(undefined4 *param_1);
int FUN_005a464c(int param_1,undefined4 param_2);
undefined8 FUN_005a4700(undefined8 param_1,undefined8 param_2,int param_3);
undefined8 FUN_005a4780(int param_1,undefined8 param_2,byte *param_3,uint param_4);
int FUN_005a52f0(undefined4 *param_1,uint *param_2);
int FUN_005a5404(void);
ulonglong FUN_005a557c(undefined4 param_1);
void FUN_005a562c(int param_1);
ulonglong FUN_005a56a8(int param_1);
int FUN_005a56d8(int param_1,uint param_2);
undefined8 FUN_005a5728(int param_1,undefined4 param_2);
undefined4 FUN_005a5764(int param_1);
undefined8 FUN_005a5798(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
undefined4 FUN_005a5970(int *param_1,int param_2,undefined4 *param_3);
ulonglong FUN_005a5b0c(int param_1);
ulonglong FUN_005a5f10(int param_1,int param_2);
int FUN_005a61ac(int param_1);
ulonglong FUN_005a6718(int param_1,uint param_2,uint param_3,int param_4,byte param_5);
undefined4 FUN_005a6d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,int param_5, undefined4 param_6);
int FUN_005a6d7c(int param_1);
ulonglong FUN_005a6e30(undefined4 param_1,int param_2,undefined4 param_3);
undefined4 FUN_005a6ed8(undefined4 param_1,longlong param_2,int param_3,undefined4 param_4);
undefined8 FUN_005a6f40(undefined4 *param_1,undefined8 param_2,undefined4 param_3,uint param_4);
int FUN_005a7050(int param_1);
undefined4 FUN_005a7554(int param_1);
undefined4 FUN_005a7684(uint *param_1);
int FUN_005a789c(uint *param_1,int param_2,int param_3,int param_4);
int FUN_005a79d0(int *param_1,int param_2);
undefined8 FUN_005a7bc4(int *param_1,int param_2,ulonglong param_3,undefined4 param_4,int param_5);
int FUN_005a8114(undefined8 param_1,int param_2);
ulonglong FUN_005a896c(uint *param_1,undefined8 param_2,int param_3,uint param_4);
void FUN_005a8fb8(longlong param_1);
undefined4 FUN_005a8ff0(undefined8 param_1);
int FUN_005a9028(int param_1,undefined8 param_2,int param_3,uint param_4);
int FUN_005a9148(int param_1,undefined8 param_2,int param_3,uint param_4);
undefined8 FUN_005a92c0(uint *param_1,int param_2,int param_3,int param_4);
undefined4 rt_msg_DefaultServerPassword(undefined4 *param_1,undefined8 param_2,int param_3);
int FUN_005a972c(uint *param_1,int param_2,undefined1 *param_3,uint param_4);
void FUN_005a99cc(int param_1);
void FUN_005a9a60(uint param_1);
undefined4 FUN_005a9c48(void);
ulonglong FUN_005a9dac(uint param_1,uint *param_2);
undefined8 FUN_005aa3d0(void);
int FUN_005aa458(undefined4 param_1);
undefined8 FUN_005aa4cc(void);
undefined8 FUN_005aa4d4(void);
void FUN_005aa4dc(int param_1);
ulonglong FUN_005aa558(int param_1);
uint FUN_005aa5a8(int param_1);
undefined4 FUN_005aa624(int param_1,undefined4 param_2);
undefined8 FUN_005aa6c4(undefined8 param_1,undefined4 *param_2);
undefined8 FUN_005aa6d4(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_005aa7d4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
int FUN_005aa95c(int param_1,int param_2,undefined1 param_3);
int FUN_005aab0c(int param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4);
int FUN_005aac48(int param_1,uint param_2,undefined2 param_3,int param_4,ulonglong param_5);
int FUN_005aafb0(int param_1,uint param_2,undefined2 param_3,undefined8 param_4,short param_5, ulonglong param_6);
undefined8 FUN_005ab2d0(void);
void FUN_005ab380(void);
ulonglong FUN_005ab51c(undefined4 param_1,int *param_2);
int FUN_005ab98c(int param_1,undefined8 param_2,undefined4 param_3,int param_4);
void FUN_005aba94(undefined8 param_1,undefined8 param_2,int param_3,uint param_4);
int FUN_005abd98(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_005abf68(int param_1);
ulonglong FUN_005abffc(int param_1,undefined8 param_2,int param_3,int param_4);
undefined4 FUN_005ac164(int param_1);
ulonglong FUN_005ac1dc(int param_1,undefined8 param_2,int param_3,int param_4);
undefined4 FUN_005ac354(int param_1);
void FUN_005ac3fc(undefined4 param_1,undefined4 param_2,uint param_3,undefined8 param_4,int param_5);
int FUN_005ac5b0(int param_1,undefined8 param_2,int param_3,int param_4);
undefined4 FUN_005ac6e8(int param_1);
int FUN_005ac824(int param_1,undefined8 param_2,undefined4 param_3);
undefined8 FUN_005ac994(void);
undefined8 FUN_005ac99c(void);
undefined8 FUN_005ac9a4(void);
undefined8 FUN_005ac9ac(void);
undefined8 FUN_005ac9b4(void);
undefined8 FUN_005ac9bc(void);
undefined8 FUN_005ac9c4(void);
undefined8 FUN_005ac9cc(void);
undefined8 FUN_005ac9d4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5 );
undefined8 FUN_005aca20(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_005aca68(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5 ,undefined8 param_6,undefined8 param_7);
undefined8 FUN_005acabc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5 ,undefined8 param_6);
undefined8 FUN_005acb0c(int param_1,uint param_2,int param_3,uint param_4,int *param_5);
undefined8 FUN_005acba4(void *param_1,void *param_2,size_t param_3);
undefined4 FUN_005acbcc(undefined4 *param_1);
undefined4 FUN_005acc40(int *param_1);
void FUN_005aceb8(void);
undefined4 FUN_005ad0d8(int param_1);
undefined4 * FUN_005ad168(void);
void FUN_005ad258(int param_1);
void FUN_005ad314(int param_1,int *param_2);
int FUN_005ad440(int param_1,uint param_2);
void FUN_005ad4e0(int param_1,int *param_2);
void FUN_005ad5d4(int param_1,undefined4 param_2);
int FUN_005ad66c(undefined4 param_1,undefined4 param_2);
void FUN_005ad76c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_005ad810(undefined4 param_1,undefined4 param_2);

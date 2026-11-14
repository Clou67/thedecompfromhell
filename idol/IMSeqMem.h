#pragma once
// idol/IMSeqMem.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00902e94; /* 0x902e94 */
extern undefined4 DAT_00902ebc; /* 0x902ebc */
extern undefined4 DAT_01593328; /* 0x1593328 */
extern undefined4 DAT_01593348; /* no defined data */
extern undefined1 DAT_0159334c; /* 0x159334c */
extern pointer PTR_PTR_006663fc; /* 0x6663fc */
extern undefined4 _DAT_004feb40; /* direct read */
extern undefined4 _DAT_004feb50; /* direct read */
extern undefined4 _DAT_004feb70; /* direct read */
extern undefined4 _DAT_004feb80; /* direct read */
extern undefined4 _DAT_004ff1d0; /* direct read */
extern undefined4 _DAT_004ff1e0; /* direct read */
extern undefined4 _DAT_004ff1f0; /* direct read */
extern undefined4 _DAT_004ff200; /* direct read */
extern undefined4 _DAT_004ff2e0; /* direct read */
extern undefined4 _DAT_004ff2f0; /* direct read */
extern undefined4 _DAT_004ff300; /* direct read */
extern undefined4 _DAT_004ff310; /* direct read */

// ---- functions
int IMSeqMem_BytesLeft(int param_1);
longlong IMSeqMem_BytesLeftClamped(int param_1);
namespace idol { ulonglong AllocateMemAlign(int param_1,longlong param_2,longlong param_3); } 
void IMSeqMem_Alloc16(undefined4 param_1,undefined8 param_2);
void IMSeqMem_AllocAligned(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void *IMSeqMem_Alloc(int param_1,void *param_2,int param_3);
void IMSeqMem_Alloc16_2(undefined4 param_1,undefined8 param_2);
void IMSeqMem_AllocAligned_2(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void IMSeqMem_Alloc_2(undefined4 param_1,undefined8 param_2);
void STUB_004fe338(void);
void STUB_004fe33c(void);
void STUB_004fe340(void);
void STUB_004fe344(void);
void IMSeqMem_Release(int *param_1);
void IMSeqMem_Init(IMSeqMem *param_1,void *param_2,int param_3,const char *param_4,int param_5,void *param_6);
ulonglong IMSeqMem_InitFromParent(int *param_1,ulonglong param_2,int param_3,int param_4,int param_5);
int IMSeqMem_AllocBytes(int param_1,int param_2);
double IMSeqMem_FreeMB(int param_1);
undefined4 IMSeqMem_GetBase(undefined4 *param_1);
namespace idol { ulonglong kalloc(int param_1,longlong param_2); } 
void IMSeqMem_AlignCur(int param_1,int param_2);
void *IMSeqMem_GetCur(IMSeqMem *param_1);
uint IMSeqMem_AlignUp(int param_1,int param_2);
void IMSeqMem_SetCur(IMSeqMem *param_1,u32 param_2);
ulonglong IMSeqMem_SetCurChecked(int param_1,ulonglong param_2);
void IMSeqMem_Advance(int param_1,int param_2);
int IMSeqMem_TotalFree(int *param_1);
void IMSeqMem_Lock(int param_1);
void IMSeqMem_Unlock(int param_1);
void IMSeqMem_PrintInfo(u8 *param_1,const char *param_2);
void TempPool_Init(void);
undefined4 FUN_004fe898(void);
void FUN_004fe97c(int param_1);
void FUN_004fea60(undefined4 param_1,longlong param_2);
void SetDefaultAllocator(void);
void SetAltAllocator(void);
void FUN_004feb98(uint param_1,uint param_2);
bool FUN_004ff210(double param_1,uint param_2);
int FastCheckBsphere(u8 *param_1,float param_2,float param_3,Vec4 param_4);

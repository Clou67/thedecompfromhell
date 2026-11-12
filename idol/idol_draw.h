#pragma once
// idol/idol_draw.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065f438; /* no defined data */
extern undefined4 DAT_0065f620; /* no defined data */
extern undefined4 DAT_0071a800; /* 0x71a800 */
extern undefined4 DAT_0071a808; /* 0x71a808 */
extern undefined4 DAT_00902e94; /* 0x902e94 */
extern undefined4 DAT_00902ea0; /* 0x902ea0 */
extern undefined4 DAT_00902ea4; /* 0x902ea4 */
extern undefined4 DAT_00902eb8; /* 0x902eb8 */
extern undefined4 DAT_00902ebc; /* 0x902ebc */
extern undefined4 DAT_015932cc; /* 0x15932cc */
extern undefined4 DAT_015932d0; /* 0x15932d0 */
extern undefined4 DAT_015932d4; /* 0x15932d4 */
extern undefined1 DAT_015932dc; /* 0x15932dc */
extern undefined4 DAT_015932e0; /* 0x15932e0 */
extern undefined4 DAT_015932e4; /* 0x15932e4 */
extern undefined4 DAT_015932e8; /* no defined data */
extern undefined4 DAT_0159331c; /* 0x159331c */
extern undefined4 DAT_01593320; /* 0x1593320 */
extern undefined4 DAT_01593324; /* 0x1593324 */
extern undefined4 DAT_01593328; /* 0x1593328 */
extern undefined4 DAT_01593348; /* no defined data */
extern undefined1 DAT_0159334c; /* 0x159334c */
extern undefined4 DAT_01593358; /* no defined data */
extern pointer PTR_DAT_0071a3b8; /* 0x71a3b8 */
extern pointer PTR_DAT_0071a614; /* 0x71a614 */
extern undefined * PTR_DAT_0071a654; /* 0x71a654 */
extern undefined * PTR_DAT_0071a7b0; /* 0x71a7b0 */
extern pointer PTR_DAT_0071a7fc; /* 0x71a7fc */
extern pointer PTR_DAT_0071a804; /* 0x71a804 */
extern pointer32 PTR_FUN_00710ef8; /* 0x710ef8 */
extern pointer32 PTR_FUN_00710f08; /* 0x710f08 */
extern pointer32 PTR_FUN_00710f10; /* 0x710f10 */
extern pointer32 PTR_FUN_00710f18; /* 0x710f18 */
extern pointer32 PTR_FUN_00710f20; /* 0x710f20 */
extern pointer32 PTR_FUN_00710f28; /* 0x710f28 */
extern pointer32 PTR_FUN_00710f30; /* 0x710f30 */
extern pointer32 PTR_FUN_00710f38; /* 0x710f38 */
extern pointer32 PTR_FUN_00710f40; /* 0x710f40 */
extern pointer32 PTR_FUN_00710f50; /* 0x710f50 */
extern pointer32 PTR_FUN_00710f58; /* 0x710f58 */
extern pointer32 PTR_FUN_00710f60; /* 0x710f60 */
extern pointer32 PTR_FUN_00710f80; /* 0x710f80 */
extern pointer32 PTR_FUN_00710f88; /* 0x710f88 */
extern pointer32 PTR_FUN_00710f90; /* 0x710f90 */
extern pointer32 PTR_FUN_00710f98; /* 0x710f98 */
extern pointer32 PTR_FUN_00710fa8; /* 0x710fa8 */
extern pointer PTR_PTR_006663fc; /* 0x6663fc */
extern pointer PTR_PTR_0071a5e4; /* 0x71a5e4 */
extern pointer PTR_PTR_00902ea8; /* 0x902ea8 */
extern pointer PTR_PTR_00902eac; /* 0x902eac */
extern pointer PTR_PTR_00902eb0; /* 0x902eb0 */
extern pointer PTR_PTR_00902eb4; /* 0x902eb4 */
extern undefined * PTR_s_Application_thinks_baseAddr_is_0_0071a390; /* 0x71a390 */
extern pointer PTR_s_No_name_0071a3bc; /* 0x71a3bc */
extern pointer PTR_s_WwsJob__0071a5e0; /* 0x71a5e0 */
extern undefined * PTR_s_false_0071a690; /* 0x71a690 */
extern pointer PTR_s_no_name_0071a3a0; /* 0x71a3a0 */
extern pointer PTR_s_validSpuReadLoadCommands_0071a648; /* 0x71a648 */
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
namespace idol_draw { void CmdQueue_ResetCounters(int *param_1,int param_2); } 
void FUN_004f1514(int *param_1,ulonglong param_2,uint param_3);
ushort FUN_004f15a4(int *param_1,ulonglong param_2);
namespace idol_draw { bool CmdQueue_HasCapacity(int *param_1,ulonglong param_2,uint param_3); } 
uint FUN_004f16cc(int *param_1,int param_2);
uint FUN_004f1734(int *param_1,int param_2);
uint FUN_004f179c(int *param_1,int param_2,uint param_3);
ulonglong FUN_004f17ec(int *param_1,ulonglong param_2,undefined4 param_3);
void FUN_004f19e8(int param_1);
void FUN_004f1a6c(int param_1,undefined8 param_2);
uint FUN_004f1a9c(int param_1);
undefined1 FUN_004f1b50(int param_1);
undefined1 FUN_004f1b84(int param_1);
namespace idol_draw { void CmdQueue_Submit(int param_1,undefined8 param_2); } 
void FUN_004f1be8(int param_1,undefined8 param_2);
void FUN_004f1c18(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 *param_6);
void FUN_004f1eb0(int *param_1,ulonglong param_2,undefined4 *param_3);
void FUN_004f1f60(int *param_1,ulonglong param_2,undefined4 *param_3);
void FUN_004f2010(int *param_1,int param_2);
void FUN_004f20b4(int *param_1,undefined4 *param_2,int param_3);
namespace idol_draw { void Spurs_WaitWorkloadIdle(int param_1); } 
uint FUN_004f234c(int *param_1,uint param_2);
void FUN_004f2550(int *param_1,uint param_2);
void FUN_004f2750(int *param_1,ulonglong param_2,undefined4 param_3);
void FUN_004f2a10(int *param_1,ulonglong param_2,undefined4 param_3);
void FUN_004f2cd0(undefined4 *param_1);
namespace idol_draw { ulonglong CmdQueue_ZeroCacheLines(uint *param_1); } 
namespace idol_draw { int RingBuffer_PushEntry(int *param_1,undefined8 param_2); } 
int FUN_004f2d48(int *param_1,undefined8 param_2);
void FUN_004f2d7c(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004f2d88(int param_1);
void FUN_004f2d9c(undefined4 *param_1);
ulonglong FUN_004f2da8(uint *param_1);
int FUN_004f2ddc(int *param_1,undefined8 param_2,int param_3);
int FUN_004f2e28(int *param_1,undefined8 param_2,int param_3);
int FUN_004f2e70(int *param_1,int param_2);
void FUN_004f2eb8(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004f2ec4(int param_1);
ulonglong FUN_004f2ed8(uint *param_1,undefined8 param_2,ulonglong param_3);
int FUN_004f2f88(int *param_1,ulonglong param_2,ulonglong param_3);
int FUN_004f2fdc(int *param_1,longlong param_2);
int FUN_004f3030(int *param_1,ulonglong param_2);
int FUN_004f3080(int *param_1,ulonglong param_2,ulonglong param_3);
int FUN_004f30d0(int *param_1,ulonglong param_2);
int FUN_004f310c(int *param_1,ulonglong param_2);
int FUN_004f315c(int *param_1);
int FUN_004f31ac(int *param_1,ulonglong param_2,ulonglong param_3,int param_4);
int FUN_004f3218(int *param_1,longlong param_2,int param_3);
int FUN_004f3280(int *param_1,ulonglong param_2,int param_3);
int FUN_004f32e8(int *param_1,ulonglong param_2,int param_3);
int FUN_004f3350(int *param_1,int param_2);
void FUN_004f33b8(undefined4 *param_1,longlong param_2,longlong param_3);
void FUN_004f33f8(undefined4 *param_1,longlong param_2,longlong param_3);
ulonglong FUN_004f3440(uint *param_1,ulonglong param_2);
ulonglong FUN_004f3508(uint *param_1,undefined8 param_2,ulonglong param_3);
ulonglong FUN_004f35b4(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong FUN_004f367c(uint *param_1,longlong param_2,ulonglong param_3);
ulonglong FUN_004f3748(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong FUN_004f3810(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong FUN_004f38d8(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong FUN_004f39a4(uint *param_1,ulonglong param_2,ulonglong param_3);
undefined2 * FUN_004f3a58(undefined2 *param_1,int param_2);
void FUN_004f3a70(undefined8 param_1);
void FUN_004f3a98(undefined8 param_1);
void FUN_004f3ac0(undefined8 param_1);
undefined1 FUN_004f3ae8(undefined8 param_1);
undefined2 * FUN_004f3b14(undefined2 *param_1,int param_2);
undefined2 * FUN_004f3b64(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
namespace idol_draw { void CmdQueue_Reset(int param_1); } 
void FUN_004f3c04(void);
void FUN_004f3c28(undefined4 *param_1,uint param_2);
undefined2 * FUN_004f3d40(undefined2 *param_1,int *param_2);
undefined2 * FUN_004f3d98(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * FUN_004f3e24(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * FUN_004f3e84(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * FUN_004f3ed8(undefined2 *param_1,int param_2,undefined8 param_3);
namespace idol_draw { undefined2 * CmdQueue_PushEntry_Blocking(undefined2 *param_1,int param_2,undefined8 param_3); } 
namespace idol_draw { undefined2 * CmdQueue_PushEntry(undefined2 *param_1,int param_2,undefined8 param_3); } 
undefined2 * FUN_004f3fd4(undefined2 *param_1,int *param_2);
undefined2 * FUN_004f402c(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * FUN_004f4088(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * FUN_004f40e4(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * FUN_004f416c(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * FUN_004f41c8(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * FUN_004f4224(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * FUN_004f4284(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * FUN_004f4310(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
undefined2 * FUN_004f43a0(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * FUN_004f4428(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined1 FUN_004f44b4(int param_1);
undefined2 * FUN_004f4510(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * FUN_004f4598(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f4610(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f4688(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f4700(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f4778(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * FUN_004f47f4(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * FUN_004f4870(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f48f4(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f4978(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * FUN_004f49fc(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
void FUN_004f4a80(int param_1);
namespace idol_draw { void CmdQueue_WaitForSpaceAndSync(int param_1); } 
void FUN_004f4b38(int param_1);
void FUN_004f4b7c(int param_1);
int FUN_004f4bc0(int param_1,int param_2);
void FUN_004f4c48(int *param_1,int param_2,int param_3,undefined8 param_4);
void FUN_004f4d1c(int *param_1,int param_2,int param_3,undefined8 param_4);
void FUN_004f4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004f4e40(undefined4 *param_1);
void FUN_004f4e50(undefined4 *param_1);
int FUN_004f4e60(int *param_1);
uint FUN_004f4e78(int *param_1);
void FUN_004f4f84(void);
ulonglong FUN_004f4f88(int *param_1);
int * FUN_004f4fc4(int param_1);
int * FUN_004f4ff8(ulonglong param_1);
int * FUN_004f5068(void);
void FUN_004f5098(int param_1);
void FUN_004f510c(int param_1,undefined *param_2);
undefined4 FUN_004f51f4(uint param_1,ulonglong *param_2,undefined1 *param_3,undefined4 param_4,int *param_5);
ulonglong FUN_004f5308(int *param_1);
void FUN_004f5324(int *param_1);
void FUN_004f539c(int *param_1);
uint * FUN_004f5414(ulonglong param_1);
undefined4 FUN_004f548c(ulonglong param_1,undefined1 *param_2,undefined4 param_3);
int * FUN_004f5558(int *param_1,int *param_2);
void FUN_004f56cc(int *param_1,int *param_2);
void FUN_004f57b0(int *param_1,int *param_2);
void FUN_004f5898(int *param_1,int param_2,int param_3,undefined *param_4);
void FUN_004f5998(int *param_1,int param_2,int param_3,undefined *param_4);
void FUN_004f5a98(undefined4 *param_1);
void FUN_004f5aec(undefined4 *param_1);
undefined4 * FUN_004f5b40(undefined8 param_1);
void FUN_004f5be4(int param_1);
void FUN_004f6134(int param_1);
void FUN_004f61fc(int param_1);
void FUN_004f6278(int param_1);
void FUN_004f63c0(int param_1);
void FUN_004f6454(int param_1);
void FUN_004f64bc(int param_1);
void FUN_004f6624(int param_1);
void FUN_004f66c4(int param_1);
void FUN_004f69b8(int param_1);
void FUN_004f6f58(int param_1);
void FUN_004f7014(int param_1);
void FUN_004f7118(undefined4 *param_1,undefined4 param_2);
undefined8 FUN_004f7120(void);
void FUN_004f7128(int param_1);
void FUN_004f71a0(int param_1);
void FUN_004f71d4(void);
void FUN_004f71e8(undefined4 *param_1);
void FUN_004f722c(void);
void FUN_004f7240(int param_1);
void FUN_004f7274(int param_1);
void FUN_004f72a4(int param_1);
void FUN_004f7300(int param_1,int *param_2,int param_3);
void FUN_004f73a4(int param_1,int *param_2,int param_3);
void FUN_004f7450(int param_1);
void FUN_004f74c8(int param_1);
void FUN_004f7534(int param_1);
void FUN_004f7588(undefined4 *param_1);
void FUN_004f75b0(undefined4 *param_1);
undefined4 * FUN_004f75d8(undefined8 param_1);
void FUN_004f766c(int param_1);
undefined8 FUN_004f77a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void FUN_004f7a58(longlong param_1);
void FUN_004f7b98(undefined8 param_1);
void FUN_004f7c34(undefined4 *param_1);
void FUN_004f7ca0(int param_1);
void FUN_004f7d7c(undefined4 *param_1,char param_2);
void FUN_004f7e34(int param_1,undefined4 param_2);
void FUN_004f7eb8(undefined4 *param_1);
int FUN_004f8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined * FUN_004f8da4(int param_1,int param_2);
undefined4 FUN_004f8eb0(int param_1,int param_2);
void FUN_004f8f68(undefined4 *param_1,undefined8 param_2);
undefined8 FUN_004f9080(int param_1,int param_2);
bool FUN_004f9130(int param_1,int param_2);
bool FUN_004f9298(int param_1,int param_2);
undefined1 FUN_004f93f0(int param_1);
void FUN_004f9460(undefined4 *param_1);
void FUN_004f9524(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void FUN_004f95dc(undefined4 *param_1,undefined4 param_2);
void FUN_004f95e8(int *param_1,undefined4 param_2);
void FUN_004f95f4(int *param_1,int param_2);
void FUN_004f9608(int *param_1,int param_2,longlong param_3);
void FUN_004f9630(int *param_1,int param_2,longlong param_3);
int FUN_004f9668(int *param_1,int param_2,int param_3);
undefined4 FUN_004f9690(int *param_1,int param_2,longlong param_3);
void FUN_004f96b4(int *param_1,int param_2,longlong param_3);
void FUN_004f96e0(int *param_1,int param_2);
uint FUN_004f9728(int param_1,int param_2);
void FUN_004f9740(int param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined4 param_5 );
void FUN_004f977c(int param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_004f97f8(int param_1,undefined1 param_2);
void FUN_004f9820(int param_1,uint param_2);
void FUN_004f9864(int param_1,int param_2);
void FUN_004f98ac(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4);
void FUN_004f9a0c(int param_1,int param_2);
void FUN_004f9a3c(uint *param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5, int param_6);
void FUN_004f9c74(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 param_5);
void FUN_004f9d60(int param_1);
void FUN_004f9dec(void);
int FUN_004f9e10(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004f9e90(int *param_1,int param_2);
void FUN_004f9ee4(int *param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004fa0c4(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_004fa118(ulonglong param_1,undefined4 param_2,ulonglong param_3,undefined4 *param_4);
void FUN_004fa2e4(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void FUN_004fa44c(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void FUN_004fa5b4(undefined4 *param_1);
void FUN_004fa678(undefined4 *param_1);
void FUN_004fa73c(undefined4 *param_1);
void FUN_004fa800(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,uint param_5, ushort param_6,uint param_7,ulonglong *param_8);
void FUN_004fb500(ulonglong *param_1,uint param_2,uint param_3);
void FUN_004fcd10(ulonglong param_1);
undefined * FUN_004fd358(void);
uint FUN_004fd360(void);
undefined * FUN_004fd370(void);
uint FUN_004fd378(void);
void FUN_004fd388(void);
int FUN_004fe048(int param_1);
longlong FUN_004fe06c(int param_1);
namespace idol { ulonglong AllocateMemAlign(int param_1,longlong param_2,longlong param_3); } 
void FUN_004fe218(undefined4 param_1,undefined8 param_2);
void FUN_004fe248(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void *FUN_004fe27c(int param_1,void *param_2,int param_3);
void FUN_004fe2a8(undefined4 param_1,undefined8 param_2);
void FUN_004fe2d8(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void FUN_004fe30c(undefined4 param_1,undefined8 param_2);
void FUN_004fe338(void);
void FUN_004fe33c(void);
void FUN_004fe340(void);
void FUN_004fe344(void);
void FUN_004fe348(int *param_1);
void FUN_004fe39c(IMSeqMem *param_1,void *param_2,int param_3,const char *param_4,int param_5,void *param_6);
ulonglong FUN_004fe3c4(int *param_1,ulonglong param_2,int param_3,int param_4,int param_5);
int FUN_004fe44c(int param_1,int param_2);
double FUN_004fe4d0(int param_1);
undefined4 FUN_004fe524(undefined4 *param_1);
namespace idol { ulonglong kalloc(int param_1,longlong param_2); } 
void FUN_004fe5c8(int param_1,int param_2);
void *FUN_004fe5ec(IMSeqMem *param_1);
uint FUN_004fe5f4(int param_1,int param_2);
void FUN_004fe61c(IMSeqMem *param_1,u32 param_2);
ulonglong FUN_004fe68c(int param_1,ulonglong param_2);
void FUN_004fe6ec(int param_1,int param_2);
int FUN_004fe734(int *param_1);
void FUN_004fe758(int param_1);
void FUN_004fe764(int param_1);
void FUN_004fe778(int param_1,undefined8 param_2);
void FUN_004fe804(void);
undefined4 FUN_004fe898(void);
void FUN_004fe97c(int param_1);
void FUN_004fea60(undefined4 param_1,longlong param_2);
void FUN_004feb14(void);
void FUN_004feb28(void);
void FUN_004feb98(uint param_1,uint param_2);
bool FUN_004ff210(double param_1,uint param_2);
bool FastCheckBsphere(double param_1,double param_2,uint param_3);
int32_t FUN_004ff480(void);
void FUN_004ff4ac(undefined8 param_1,undefined8 param_2);
namespace idol { int32_t print_mem_error (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8); } 
void FUN_004ff5e0(undefined4 param_1);
void FUN_004ff5ec(undefined *param_1);
void FUN_004ff5f8(undefined *param_1);
void FUN_004ff604(undefined *param_1);
void FUN_004ff610(undefined *param_1);
void FUN_004ff61c(undefined *param_1,undefined *param_2,undefined *param_3,undefined4 param_4);
void FUN_004ff648(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4, undefined4 param_5);
void FUN_004ff674(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void print_tty(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004ff780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004ff868(undefined8 param_1,undefined8 param_2);
void FUN_004ff8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
int32_t FUN_004ff98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004ffa4c(undefined8 param_1);
int32_t FUN_004ffac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004ffb7c(undefined1 param_1);
void FUN_004ffbf4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void print_tty2(char *format,...);
void FUN_004ffd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_004ffdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined4 FUN_004ffed4(void);
undefined4 FUN_004ffee4(void);
void FUN_004ffef4(undefined4 param_1);
void FUN_004fff00(undefined4 param_1);
int32_t FUN_004fff0c(undefined8 param_1,char *param_2);
int32_t FUN_004fff34(undefined8 param_1,char *param_2);

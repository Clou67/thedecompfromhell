#pragma once
// idol/hwsystem.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065f8dc; /* no defined data */
extern undefined4 DAT_0065f8e4; /* no defined data */
extern undefined4 DAT_0065f8ec; /* no defined data */
extern undefined4 DAT_0065f8f4; /* no defined data */
extern undefined4 DAT_0065f8fc; /* no defined data */
extern undefined4 DAT_0065f904; /* no defined data */
extern pointer32 PTR_FUN_00711e30; /* 0x711e30 */
extern void * g_pHWSystem; /* 0x902ed0 */

// ---- functions
void *HWSystem_MainHeap(void *param_1);
void HWSystem_InitVideoHeap(longlong param_1,undefined8 param_2,undefined4 param_3);
void HWSystem_InitScratchHeap(u8 *param_1);
namespace idol { void InitGameGraphics(u8 *param_1); } 
void LoadDialogMessages(u8 *param_1);
namespace idol { void GameAuthenticate(u8 *param_1,char *param_2,char *param_3); } 
void FUN_0050476c(void);
void STUB_005048f4(void);
void HWSystem_Yield(void);
void HWSystem_SleepMs(undefined8 param_1,int param_2);
void HWSystem_ActivateSku(u8 *param_1,const char *param_2,int param_3);
namespace idol { void CheckLicense(int *unk1,const char *glow_rgba,char *gameId,char *gameIdExt,bool isDisc,int param_6); } 
undefined4 HWSystem_SkuUnk18(int param_1);
undefined4 HWSystem_SkuUnk1c(int param_1);
undefined4 HWSystem_SkuUnk20(int param_1);
undefined4 HWSystem_SkuUnk1cOrParent(int param_1);
undefined4 HWSystem_SkuUnk20OrParent(int param_1);
int HWSystem_CurrentSku(int param_1);
int HWSystem_ParentSku(int param_1);
u8 HWSystem_SkuUnk24(void *param_1);
ulonglong HWSystem_IsRegion(int param_1,int param_2);

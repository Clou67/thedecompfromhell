#pragma once
// idol/mUnk.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00658e38; /* no defined data */
extern undefined4 DAT_00658e40; /* no defined data */
extern undefined4 DAT_00658e48; /* no defined data */
extern undefined4 DAT_00737bf0; /* 0x737bf0 */
extern undefined4 DAT_00737d30; /* no defined data */
extern undefined4 DAT_00737d44; /* no defined data */
extern undefined4 DAT_0073813c; /* no defined data */
extern undefined4 DAT_008f9330; /* 0x8f9330 */
extern undefined4 DAT_008f9334; /* 0x8f9334 */
extern undefined4 DAT_008f9384; /* 0x8f9384 */
extern undefined4 DAT_008f93f4; /* 0x8f93f4 */
extern undefined4 DAT_008f9418; /* 0x8f9418 */
extern undefined4 DAT_008fa1ac; /* no defined data */
extern undefined4 DAT_008fa3dc; /* 0x8fa3dc */
extern undefined4 DAT_00a15c18; /* 0xa15c18 */
extern undefined4 DAT_00e58c10; /* no defined data */
extern undefined4 DAT_00e59410; /* no defined data */
extern int g_LevelTargetStart[20]; /* 0x738138: each level's first entry in g_MissionTargets/g_MissionMobys (the next level's start ends it) */ /* type set in global_types.tsv */
extern IdolMsgDialog *g_pMsgDialog; /* 0x1111640 */ /* type set in global_types.tsv */

// ---- functions
namespace idol_draw { void DrawGalacticMapFrame(int param_1,int param_2,int param_3,int param_4); } 
void SECTION_HEADER_004d2e1c(void);
void UnlockPurchasableItem(void);
void InitLevelCommon(void);
void SECTION_HEADER_004d3198(void);
void Dialog_Advance(undefined8 param_1,int param_2,int param_3);
int FUN_004d3698(int param_1);
ulonglong FUN_004d3720(int param_1,int param_2);
undefined8 FUN_004d3870(int param_1,int param_2);
void MissionTarget_SetUnkC(int param_1,undefined4 param_2);
void SECTION_HEADER_004d4118(void);
MobyInstance * SpawnExplosionMoby(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5, undefined4 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9);
void FUN_004d4328(undefined8 param_1);
void FUN_004d4404(undefined8 param_1,int param_2);

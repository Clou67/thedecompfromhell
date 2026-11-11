#pragma once
// game/update/moby1267.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071cd44; /* 0x71cd44 */
extern undefined4 DAT_0071cd48; /* 0x71cd48 */
extern undefined4 DAT_0071cd4c; /* 0x71cd4c */
extern undefined4 DAT_0071cd50; /* 0x71cd50 */
extern undefined4 DAT_0071cd54; /* 0x71cd54 */
extern undefined4 DAT_0071cd58; /* 0x71cd58 */
extern undefined4 DAT_0071cd68; /* 0x71cd68 */
extern undefined4 DAT_0071cd6c; /* 0x71cd6c */
extern undefined4 DAT_0071cd70; /* 0x71cd70 */
extern undefined4 DAT_0071cd74; /* 0x71cd74 */
extern undefined4 DAT_0071cd84; /* 0x71cd84 */
extern undefined4 DAT_0071cd88; /* 0x71cd88 */
extern undefined4 DAT_0071cd8c; /* 0x71cd8c */
extern undefined4 DAT_0071ce48; /* 0x71ce48 */
extern undefined4 DAT_0071ce4c; /* 0x71ce4c */
extern undefined4 DAT_0071ce90; /* 0x71ce90 */
extern undefined4 DAT_0071ce94; /* 0x71ce94 */
extern undefined4 DAT_0071ce98; /* 0x71ce98 */
extern undefined4 DAT_0071ce9c; /* 0x71ce9c */
extern undefined4 DAT_0071cea0; /* 0x71cea0 */
extern undefined4 DAT_0071cea4; /* 0x71cea4 */
extern undefined4 DAT_0071cea8; /* 0x71cea8 */
extern undefined4 DAT_0071ceb0; /* 0x71ceb0 */
extern undefined4 DAT_0071ceb4; /* 0x71ceb4 */
extern undefined4 DAT_0071ceb8; /* 0x71ceb8 */
extern undefined4 DAT_0071cebc; /* 0x71cebc */
extern pointer32 PTR_Moby1267_DrawDeathFade_00703810; /* 0x703810 */
extern pointer32 PTR_Moby1267_DrawHud_00703808; /* 0x703808 */

// ---- functions
void Moby1267_UpdateCamera(MobyInstance *moby);
void Moby1267_UpdateTargetLock(MobyInstance *moby);
void UpdateMoby_1267(MobyInstance *moby);
void Moby1267_DrawHud(MobyInstance *moby);
void Moby1267_DrawDeathFade(MobyInstance *moby);

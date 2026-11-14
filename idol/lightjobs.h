#pragma once
// idol/lightjobs.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004804d0; /* 0x4804d0 */
extern undefined4 DAT_0065ab80; /* no defined data */
extern undefined4 DAT_008fa628; /* 0x8fa628 */
extern undefined4 DAT_00905900; /* no defined data */
extern undefined4 DAT_00907080; /* no defined data */
extern undefined4 DAT_0090a180; /* no defined data */
extern undefined4 DAT_0090b880; /* no defined data */
extern undefined4 DAT_01111680; /* no defined data */
extern undefined4 DAT_01111688; /* no defined data */
extern undefined4 DAT_01111690; /* no defined data */
extern undefined4 DAT_01111698; /* no defined data */
extern undefined4 DAT_01591f20; /* 0x1591f20 */
extern undefined4 DAT_01591f24; /* 0x1591f24 */
extern undefined4 DAT_01591f28; /* 0x1591f28 */
extern undefined4 DAT_01591f2c; /* 0x1591f2c */
extern undefined4 DAT_01591f40; /* 0x1591f40 */
extern undefined1 DAT_01592380; /* 0x1592380 */
extern undefined1 DAT_01592381; /* 0x1592381 */
extern undefined1 DAT_01592382; /* 0x1592382 */
extern undefined1 DAT_01592383; /* 0x1592383 */
extern undefined1 DAT_01592384; /* 0x1592384 */
extern undefined4 _DAT_011116a0; /* direct read */
extern undefined4 _DAT_011116b0; /* direct read */
extern undefined4 _DAT_011116c0; /* direct read */

// ---- functions
void SetupLightTfragJob(u8 *param_1,int param_2);
namespace idol_draw { void * InitFrameRenderState (int param_1,void *param_2,int param_3,void *param_4,int param_5,void *param_6, longlong param_7); } 
void LightJobs_ClearDone(int *param_1,longlong param_2);
void LightJobs_KickTfrag(int *param_1,undefined8 param_2,uint param_3);
void LightJobs_KickTie(int *param_1,ulonglong param_2,ulonglong param_3);
void LightJobs_KickMoby(int *param_1,undefined8 param_2,longlong param_3);
void LightJobs_KickShrubs(int *param_1,ulonglong param_2,ulonglong param_3);
namespace idol_draw { void Insert_WaitCmd_Marker(uint *param_1,RenderingStep *param_2,longlong param_3); } 
void GcmSetSemaphoreRelease(int param_1,int param_2);
void LightJobs_ClearLabel(int param_1);
void LightJobs_AddCount(int param_1,int param_2);
void LightJobs_Sync(int param_1);
void LightJobs_SyncAll(int param_1);
namespace idol_draw { void Spurs_FlushAndSwapQueue(uint *param_1); } 
void LightJobs_ReleaseModules(void);
void CreateLightingJobs(void);

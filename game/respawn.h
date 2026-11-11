#pragma once
// game/respawn.h
#include "types.h"
#include "game/camera.h"

// ---- globals
extern undefined4 DAT_00731734; /* 0x731734 */
extern undefined4 DAT_00a0e11c; /* no defined data */
extern undefined4 DAT_00a53504; /* 0xa53504 */
extern undefined4 DAT_00a53508; /* 0xa53508 */
extern undefined4 DAT_00a53510; /* no defined data */
extern undefined4 DAT_00a53560; /* no defined data */
extern undefined4 DAT_00a541c0; /* no defined data */
extern undefined4 DAT_00a54dc4; /* 0xa54dc4 */
extern undefined4 DAT_00a54dd0; /* no defined data */
extern Spawnpoint g_CheckpointPosition; /* 0xa54180 */
extern undefined4 g_CheckpointSet; /* 0xa54170 */

// ---- functions
void SECTION_HEADER_RESPAWN____(void);
undefined8 ____Unused_Respawn_IncCounter_a53504(void);
longlong ____NAVG_AllocSlot_a0e11c(longlong param_1,int param_2);
void ClearCheckpointData(void);
void SetSpawnPoint(Vec4 *pos,Vec4 *rot);
MobyInstance * FindMobyByUID(int unused,int uid);
void RestoreMobyVarList(int *list);
void RestoreSavedMobyVars(void);
void RestoreCheckpoint(void);
void SaveCheckpointMobyVar(void *data,int size,MobyInstance *moby,int isMoby,int *list);

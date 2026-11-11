#pragma once
// game/mission.h
#include "types.h"

// ---- types
struct Mission {
    short id;
    short pad[7];
    short flags;
    short descBase;
    short status;
    short step;
    short stepText;
};

// ---- globals
extern undefined4 DAT_00a24620; /* 0xa24620 */
extern undefined4 DAT_00a24624; /* 0xa24624 */
extern undefined * PTR_DAT_00728d84; /* 0x728d84 */
extern undefined * PTR_DAT_00728dd0; /* 0x728dd0 */
extern char g_KeyLevelFlags[1936]; /* 0x96c24c */

// ---- functions
void ResetMissionState(void);
ulonglong CheckMission(short type,longlong arg);
ulonglong RefreshLevelMissionStatus(void);
longlong BuildMissionList(int *outTextIds,uint *outCompleteMask,int *outDesc,char useStep);
void UpdateMissionDisplay(longlong param_1,char param_2);
int MissionCond_eaf70(void);
int MissionCond_eafa8(void);
int MissionCond_eafec(void);
int MissionCond_eb01c(void);
int MissionCond_eb054(void);
int MissionCond_eb08c(void);
int CheckIfMapOMaticAndHologuiseUnlocked(void);
bool IsItemUnlocked(int param_1);
int MissionCond_eb118(void);
int MissionCond_eb174(void);
int MissionCond_eb1b4(void);
int MissionCond_eb1ec(void);
bool CheckIfHologuiseUnlocked(void);
undefined8 GetKaleboItemsUnlockStatus(void);

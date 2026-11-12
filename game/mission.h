#pragma once
// game/mission.h
#include "types.h"
#include "game/mobyutil.h"

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

/* one mission of a level's mission list (g_MissionDefs[level], ends with textId 0) */
struct MissionDef {
    short textId;            /* 0x00  StringId; 0 ends the list */
    short condType;          /* 0x02  MissionCondType: shown when this holds ... */
    int condArg;             /* 0x04 */
    short doneType;          /* 0x08  ... and done when this holds */
    short _pad0a;
    int doneArg;             /* 0x0c */
    u16 flags;               /* 0x10  MISSION_* */
    short descBase;          /* 0x12  description StringId for step 0 */
    short stepText[4];       /* 0x14  StringId per step */
    int (*stepFunc)(int);    /* 0x1c  current step, or 0 */
    int stepArg;             /* 0x20 */
    short status;            /* 0x24  MISSION_HIDDEN / OPEN / DONE */
    short step;              /* 0x26 */
};
typedef char MissionDef_size_check[sizeof(struct MissionDef) == 0x28 ? 1 : -1];

/* a mission object's last known map position and state (save data, @0x96c24c) */
struct MissionTarget {
    float x;                 /* 0x0 */
    float y;                 /* 0x4 */
    float rot;               /* 0x8 */
    int state;               /* 0xc  0 = not reached; bit 0 shows MAPICON_NEEDS_TARGET icons; >= 2 done */
};

// ---- globals
extern char CHAR_ARRAY_0096c165[37]; /* 0x96c165 */
extern MissionDef *g_LevelMissions; /* 0xa24624: g_MissionDefs[g_SelectedLevel] */ /* type set in global_types.tsv */
extern MissionDef *g_MissionDefs[19]; /* 0x728d84: per level */ /* type set in global_types.tsv */
extern MobyInstance *g_MissionMobys[121]; /* 0xa15d40: the mobys of the current level's mission targets */ /* type set in global_types.tsv */
extern int g_MissionState[24]; /* 0xa245a8: cleared by ResetMissionState */ /* type set in global_types.tsv */
extern MissionTarget g_MissionTargets[121]; /* 0x96c24c: map position and state of the mission objects (save data) */ /* type set in global_types.tsv */
extern int g_MissionsOpen; /* 0xa24620: missions shown and not done (RefreshLevelMissionStatus) */ /* type set in global_types.tsv */

// ---- functions
void ResetMissionState(void);
int CheckMission(short type, int arg);
int RefreshLevelMissionStatus(void);
int BuildMissionList(int *outTextIds, u32 *outCompleteMask, int *outDesc, bool useStep);
void UpdateMissionDisplay(int level, bool showHero);
int MissionCond_eaf70(void);
int MissionCond_eafa8(void);
int MissionCond_eafec(void);
int MissionCond_eb01c(void);
int MissionCond_eb054(void);
int MissionCond_eb08c(void);
int CheckIfMapOMaticAndHologuiseUnlocked(void);
bool IsItemUnlocked(int item);
int MissionCond_eb118(void);
int MissionCond_eb174(void);
int MissionCond_eb1b4(void);
int MissionCond_eb1ec(void);
bool CheckIfHologuiseUnlocked(void);
int GetKaleboItemsUnlockStatus(void);

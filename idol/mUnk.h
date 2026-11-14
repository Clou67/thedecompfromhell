#pragma once
// idol/mUnk.h
#include "types.h"

// ---- types
/* Idol's save system state (idol::GetSaveData, 0x478 bytes, @*GameSavePtr). Only the fields the
   game code uses have real names; field0_0x0 and field3_0xc keep Ghidra's names because those
   names are shared with other structs and the raw idol::GetSaveData still uses them. */
typedef struct SaveDataInfo {
    undefined **field0_0x0;  /* 0x000  vtable */
    int loadResult;          /* 0x004  copied from result before the load callback */
    int callbackArg;         /* 0x008 */
    void *field3_0xc;        /* 0x00c  save callback (a function descriptor) */
    void *onLoad;            /* 0x010  load callback */
    u32 unk14;               /* 0x014 */
    u32 unk18;               /* 0x018 */
    int level;               /* 0x01c  shown in the save list */
    u8 unk20[0x10];          /* 0x020 */
    char title[0x400];       /* 0x030  the description (memcard_ConstructSaveString) */
    u8 unk430[0x20];         /* 0x430 */
    int result;              /* 0x450 */
    u32 unk454;              /* 0x454 */
    u32 unk458;              /* 0x458 */
    u8 unk45c;               /* 0x45c */
    u8 unk45d;               /* 0x45d */
    u8 _pad45e[2];
    u32 flags;               /* 0x460  bit 0: a game has been loaded */
    u8 _pad464[4];
    int state;               /* 0x468  SaveSysState */
    int dataSize;            /* 0x46c */
    u8 _pad470[4];
    char *dialogTitle;       /* 0x474 */
} SaveDataInfo;
typedef char SaveDataInfo_size_check[sizeof(SaveDataInfo) == 0x478 ? 1 : -1];

/* Idol's Bink movie player (0x60 bytes; the singleton is g_pBinkPlayer, built in place at
   0x927078 by the static constructors) */
typedef struct BinkPlayer {
    void *vtable;            /* 0x00 */
    u8 _pad04[4];
    void *bink;              /* 0x08 */
    u8 _pad0c[4];
    int state;               /* 0x10  BinkPlayer_GetState; > 1 once frames are coming */
    u8 _pad14[0x48];
    int unk5c;               /* 0x5c  -1: nothing to stop */
} BinkPlayer;
typedef char BinkPlayer_size_check[sizeof(BinkPlayer) == 0x60 ? 1 : -1];

/* Idol singleton (*g_pMsgDialog, 0x20 bytes, made by FUN_004eaddc) that owns the system message
   callback ("In messageCallback"); ticked once per frame from startLevel. Identification inferred. */
typedef struct IdolMsgDialog IdolMsgDialog;
typedef struct IdolMsgDialogFuncs {
    void *unk00, *unk04;
    void (*update)(IdolMsgDialog *self, float dt);   /* +0x08 */
} IdolMsgDialogFuncs;
struct IdolMsgDialog {
    IdolMsgDialogFuncs *funcs;   /* 0x00 */
    u8 busy;                     /* 0x04  cleared by the message callback */
    char _pad05[3];
    u32 unk08;
    u32 unk0c;
    void *callback;              /* 0x10  result callback, called with 0,1,3,4 */
    char _pad14[0x0c];
};

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

#pragma once
// game/help.h
#include "types.h"
#include "game/mobyutil.h"

// ---- types
/* one help message of the loaded language (g_HelpMsgs, from the locale file) */
struct HelpMsg {
    char *text;              /* 0x0 */
    int id;                  /* 0x4  StringId */
    int speech;              /* 0x8  voice line (track - 30000), -1 = none */
    int unk0c;               /* 0xc */
};
/* per help "flag" (DisplayHelp's second argument) @0xa1000c, 148 of them */
struct HelpFlag {
    u16 count;               /* 0x0  times shown; 0xffff = never show again */
    u16 lastShown;           /* 0x2  play time when last shown, (scaled frames) / 600 */
    u32 levels;              /* 0x4  bit per level it was shown on; bit 31: since the last death */
};
/* the help box state machine @0x720884 */
struct HelpState {
    int state;               /* 0x00  HelpBoxState */
    int timer;               /* 0x04  frames in this state */
    int boxHalfW;            /* 0x08  size of the open box */
    int boxHalfH;            /* 0x0c */
    int boxX;                /* 0x10  centre */
    int boxY;                /* 0x14 */
    int curHalfW;            /* 0x18  size as drawn this frame */
    int curHalfH;            /* 0x1c */
    int curIndex;            /* 0x20  into g_HelpMsgs, -1 = none */
    int curId;               /* 0x24  queued StringId, -1 = none */
    int curFlag;             /* 0x28 */
    int msgCount;            /* 0x2c  entries in g_HelpMsgs */
    int armed;               /* 0x30  help starts once the d-pad has been held for 2 s */
    int armTimer;            /* 0x34 */
    short suspended;         /* 0x38 */
    short resumed;           /* 0x3a */
    int resumeDelay;         /* 0x3c  frames before a suspended message comes back */
};
typedef char HelpState_size_check[sizeof(struct HelpState) == 0x40 ? 1 : -1];

// ---- globals
extern undefined4 DAT_00720860; /* 0x720860 */
extern HelpState g_Help; /* 0x720884 */ /* type set in global_types.tsv */
extern HelpFlag g_HelpFlags[148]; /* 0xa1000c */ /* type set in global_types.tsv */
extern short g_HelpIdPairs[150][2]; /* 0x7208cc */ /* type set in global_types.tsv */
extern u8 g_HelpLog[150]; /* 0xa104ac: indices into g_HelpIdPairs, oldest first */ /* type set in global_types.tsv */
extern int g_HelpLogCount; /* 0x71fb5c */
extern HelpMsg *g_HelpMsgs; /* 0xa1a800 */ /* type set in global_types.tsv */
extern bool g_HelpTextOn; /* 0x71fb59: options, help text */ /* type set in global_types.tsv */
extern bool g_HelpVoiceOn; /* 0x71fb58: options, help voice (guess) */ /* type set in global_types.tsv */
extern undefined4 g_PendingSpeech; /* 0x9636e4 */

// ---- functions
void SECTION_HEADER_HELP(void);
void Help_Skip(void);
int Help_FindPairIndex(short id, int column, short *pOther);
void Help_AddToLog(short id);
int Help_QueueMessage(StringId id, int flag);
void Help_Kill(void);
int Help_QueueMessageForce(StringId id, int flag);
void Help_ClearUsedSinceDeath(void);
int Help_FindIndex(int id);
char *help_msg_string_by_index(StringId helpmsg);
void Help_Suspend(void);
void Help_Resume(void);
void Help_StartMessageBox(void);
void Help_Update(void);
void Help_DrawIconBox(void);
void Help_Draw(void);
short Help_GetPairedId(short id, int column);

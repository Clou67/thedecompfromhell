#pragma once
// game/freeze.h
#include "types.h"
#include "game/path.h"

// ---- types
/* the in-game prompt ("freeze" mode: quit / continue / reconnect ...), g_Freeze @ 0x963670 */
typedef struct FreezeState {
    int dialogType;          /* 0x00  which prompt (DisplayPrompt's first argument) */
    int timer;               /* 0x04  frames */
    char *options[3];        /* 0x08  option texts */
    gameMode_t prevGameMode; /* 0x14  mode to return to */
    int arg;                 /* 0x18 */
    int state;               /* 0x1c */
    int openAnim;            /* 0x20 */
    int openAnim2;           /* 0x24 */
    int unk28;               /* 0x28 */
    int delay;               /* 0x2c  frames */
    int option;              /* 0x30  initially selected option */
} FreezeState;
typedef char FreezeState_size_check[sizeof(FreezeState) == 0x34 ? 1 : -1];

// ---- globals
extern ABGR ABGR_0071f338; /* 0x71f338 */
extern ABGR ABGR_0071f33c; /* 0x71f33c */
extern undefined4 DAT_0071f30c; /* 0x71f30c */
extern undefined4 DAT_0071f330; /* 0x71f330 */
extern undefined4 DAT_0071f334; /* 0x71f334 */
extern undefined4 DAT_0071f340; /* 0x71f340 */
extern undefined4 DAT_0071f344; /* 0x71f344 */
extern undefined4 DAT_0071f348; /* 0x71f348 */
extern undefined4 DAT_0071f34c; /* 0x71f34c */
extern undefined4 DAT_0071f350; /* 0x71f350 */
extern undefined4 DAT_0071f354; /* 0x71f354 */
extern undefined4 DAT_0071f358; /* 0x71f358 */
extern undefined4 DAT_0071f35c; /* 0x71f35c */
extern undefined4 DAT_0071f360; /* 0x71f360 */
extern undefined4 DAT_0071f364; /* 0x71f364 */
extern undefined4 DAT_0071f368; /* 0x71f368 */
extern undefined4 DAT_0071f36c; /* 0x71f36c */
extern undefined4 DAT_0071f370; /* 0x71f370 */
extern undefined4 DAT_0071f378; /* 0x71f378 */
extern undefined4 DAT_0071f37c; /* 0x71f37c */
extern undefined4 DAT_0071f380; /* 0x71f380 */
extern undefined4 DAT_0071f384; /* 0x71f384 */
extern undefined4 DAT_0071f388; /* 0x71f388 */
extern undefined1 DAT_0096b2ef; /* 0x96b2ef */
extern undefined4 DAT_0096b9e0; /* 0x96b9e0 */
extern undefined4 DAT_0096b9f0; /* 0x96b9f0 */
extern undefined1 DAT_00a15f39; /* 0xa15f39 */
extern undefined1 DAT_00a23099; /* 0xa23099 */
extern pointer PTR_DAT_0071f374; /* 0x71f374 */
extern FreezeState g_Freeze; /* 0x963670 */ /* type set in global_types.tsv */
extern gameMode_t g_gameMode; /* 0xa10708 */

// ---- functions
void SECTION_HEADER_FREEZE(void);
gameMode_t GetFreezePrevGameMode(void);
void DisplayPrompt(int dialog, int arg, int option);
void DrawDialogText(void);
void UpdateFreeze(void);

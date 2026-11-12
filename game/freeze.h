#pragma once
// game/freeze.h
#include "types.h"

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
extern undefined4 DAT_0071f30c; /* 0x71f30c */
extern undefined1 DAT_0096b2ef; /* 0x96b2ef */
extern undefined4 DAT_0096b9e0; /* 0x96b9e0 */
extern undefined4 DAT_0096b9f0; /* 0x96b9f0 */
extern undefined1 DAT_00a15f39; /* 0xa15f39 */
extern undefined1 DAT_00a23099; /* 0xa23099 */
extern FreezeState g_Freeze; /* 0x963670 */ /* type set in global_types.tsv */
extern int g_FreezeOpt1Y; /* 0x71f330: y of the second option line (115) */ /* type set in global_types.tsv */
extern int g_FreezeOpt2Y; /* 0x71f334: y of the third option line (130) */ /* type set in global_types.tsv */
extern u32 g_FreezePulseColor0; /* 0x71f36c */ /* type set in global_types.tsv */
extern u32 g_FreezePulseColor1; /* 0x71f370 */ /* type set in global_types.tsv */
extern int g_FreezePulsePeriod; /* 0x71f368: frames per pulse of the box colour (180) */ /* type set in global_types.tsv */
extern u32 g_FreezeTextColor0; /* 0x71f338: prompt text colour, faded in to ...Color1 */ /* type set in global_types.tsv */
extern u32 g_FreezeTextColor1; /* 0x71f33c */ /* type set in global_types.tsv */
extern int g_QuitBoxHalfH; /* 0x71f34c */ /* type set in global_types.tsv */
extern int g_QuitBoxHalfW; /* 0x71f348 */ /* type set in global_types.tsv */
extern int g_QuitBoxX; /* 0x71f340: "quit race?" box centre and half size (256,185 100x50) */ /* type set in global_types.tsv */
extern int g_QuitBoxY; /* 0x71f344 */ /* type set in global_types.tsv */
extern int g_QuitTextY; /* 0x71f350 */ /* type set in global_types.tsv */
extern u32 g_RaceBadColor0; /* 0x71f384 */ /* type set in global_types.tsv */
extern u32 g_RaceBadColor1; /* 0x71f388 */ /* type set in global_types.tsv */
extern u32 g_RaceGoodColor0; /* 0x71f37c */ /* type set in global_types.tsv */
extern u32 g_RaceGoodColor1; /* 0x71f380 */ /* type set in global_types.tsv */
extern u32 g_RaceTextColor0; /* 0x71f374: race prompt colours, faded from ...0 to ...1 */ /* type set in global_types.tsv */
extern u32 g_RaceTextColor1; /* 0x71f378 */ /* type set in global_types.tsv */
extern int g_ResultBoxHalfH; /* 0x71f360 */ /* type set in global_types.tsv */
extern int g_ResultBoxHalfW; /* 0x71f35c */ /* type set in global_types.tsv */
extern int g_ResultBoxX; /* 0x71f354: race results box centre and half size (256,205 100x120) */ /* type set in global_types.tsv */
extern int g_ResultBoxY; /* 0x71f358 */ /* type set in global_types.tsv */
extern int g_ResultTextY; /* 0x71f364 */ /* type set in global_types.tsv */
extern gameMode_t g_gameMode; /* 0xa10708 */

// ---- functions
void SECTION_HEADER_FREEZE(void);
gameMode_t GetFreezePrevGameMode(void);
void DisplayPrompt(int dialog, int arg, int option);
void DrawDialogText(void);
void UpdateFreeze(void);

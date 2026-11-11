#pragma once
// game/freeze.h
#include "types.h"
#include "game/path.h"

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
extern undefined4 DAT_00963678; /* 0x963678 */
extern undefined4 DAT_0096367c; /* 0x96367c */
extern undefined4 DAT_00963680; /* 0x963680 */
extern undefined4 DAT_00963698; /* 0x963698 */
extern undefined1 DAT_00964fa0; /* 0x964fa0 */
extern undefined1 DAT_0096b2ef; /* 0x96b2ef */
extern undefined4 DAT_0096b9e0; /* 0x96b9e0 */
extern undefined4 DAT_0096b9f0; /* 0x96b9f0 */
extern undefined4 DAT_00a10548; /* 0xa10548 */
extern undefined4 DAT_00a1054c; /* 0xa1054c */
extern undefined1 DAT_00a15f39; /* 0xa15f39 */
extern undefined1 DAT_00a23099; /* 0xa23099 */
extern pointer PTR_DAT_0071f374; /* 0x71f374 */
extern int g_freezeArg; /* 0x963688 */
extern int g_freezeDelay; /* 0x96369c */
extern int g_freezeDialogType; /* 0x963670 */
extern int g_freezeOpenAnim; /* 0x963690 */
extern int g_freezeOpenAnim2; /* 0x963694 */
extern int g_freezeOption; /* 0x9636a0 */
extern gameMode_t g_freezePrevGameMode; /* 0x963684 */
extern int g_freezeState; /* 0x96368c */
extern int g_freezeTimer; /* 0x963674 */
extern gameMode_t g_gameMode; /* 0xa10708 */

// ---- functions
void SECTION_HEADER_FREEZE(void);
gameMode_t GetFreezePrevGameMode(void);
void DisplayPrompt(int dialog,int arg,int option);
void DrawDialogText(void);
void UpdateFreeze(void);

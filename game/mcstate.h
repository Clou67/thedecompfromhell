#pragma once
// game/mcstate.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071fa40; /* 0x71fa40 */
extern undefined4 DAT_0071fa60; /* 0x71fa60 */
extern undefined4 DAT_0071fa7c; /* 0x71fa7c */
extern undefined4 DAT_0071fa98; /* 0x71fa98 */
extern undefined4 DAT_0071fab4; /* 0x71fab4 */
extern undefined4 DAT_0071fad4; /* 0x71fad4 */
extern undefined4 DAT_0071fae8; /* 0x71fae8 */
extern undefined4 DAT_0071fb08; /* 0x71fb08 */
extern undefined4 DAT_0071fb0c; /* 0x71fb0c */
extern undefined4 DAT_0071fb10; /* 0x71fb10 */
extern undefined4 DAT_00726534; /* 0x726534 */
extern undefined8 DAT_00a20848; /* 0xa20848 */
extern undefined4 DAT_00a20850; /* 0xa20850 */
extern undefined4 DAT_00a20854; /* 0xa20854 */
extern undefined4 DAT_00a20880; /* 0xa20880 */
extern undefined4 g_CardState; /* 0xa0fd1c */
extern undefined4 g_CardStateFlags; /* 0xa0fd20 */
extern undefined * g_CardStateFuncs; /* 0x7265bc */
extern int g_SaveCurCard; /* 0x71faf0 */ /* type set in global_types.tsv */

// ---- functions
void Map_InitColors(void);
void FlowState_Update(void);
void CardState_INIT(void);
void CardState_GOOD_SAVE(void);
void CardState_WARNING(void);
void CardState_NOCARD(void);
void CardState_WAIT_FOR_CARD(void);
void CardState_UNFORMATTED(void);
void CardState_PROMPT_FORMAT(void);
void CardState_FORMAT_PENDING(void);
void CardState_FORMATTING(void);
void CardState_FORMATTED(void);
void CardState_CHECK_SAVE(void);
void CardState_CHECKING_SAVE(void);
void CardState_NOSAVE(void);
void CardState_PROMPT_CREATE_SAVE(void);
void CardState_CREATE_SAVE_PENDING(void);
void CardState_CREATING_SAVE(void);
void CardState_NEWCARD(void);
void CardState_FORMAT_FAILED(void);
void CardState_CREATE_FAILED(void);
void CardState_NO_ROOM(void);
void CardState_LOAD_FAILED(void);
void CardState_SAVE_FAILED(void);
void CardState_SAVING(void);
void CardState_PROMPT_BEGIN_UNFORMATTED(void);
void CardState_PROMPT_BEGIN_NOSAVE(void);

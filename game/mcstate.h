#pragma once
// game/mcstate.h
#include "types.h"

// ---- types
/* a memory card state handler (g_CardStateFuncs) */
typedef void (*CardStateFunc)(void);

// ---- globals
extern int g_CardBootWarning; /* 0x71fae8 */ /* type set in global_types.tsv */
extern int g_CardError; /* 0x71fb10: the last memory card operation failed */ /* type set in global_types.tsv */
extern u64 g_CardMsgBgColor; /* 0xa20848 */ /* type set in global_types.tsv */
extern int g_CardMsgScale; /* 0x726534: 16.16 */ /* type set in global_types.tsv */
extern u32 g_CardMsgTextClear; /* 0xa20854 */ /* type set in global_types.tsv */
extern u32 g_CardMsgTextColor; /* 0xa20850 */ /* type set in global_types.tsv */
extern int g_CardOp; /* 0x71fb08: pending memory card operation, -1 none */ /* type set in global_types.tsv */
extern int g_CardOpStep; /* 0x71fb0c */ /* type set in global_types.tsv */
extern int g_CardState; /* 0xa0fd1c: CARD_STATE_* */ /* type set in global_types.tsv */
extern u32 g_CardStateFlags; /* 0xa0fd20: CARD_FLAG_* */ /* type set in global_types.tsv */
extern CardStateFunc g_CardStateFuncs[25]; /* 0x7265bc: one per CARD_STATE_* */ /* type set in global_types.tsv */
extern int g_CardStateTimer; /* 0xa20880: frames in g_CardState */ /* type set in global_types.tsv */
extern int g_CardWarning; /* 0x71fa40: show the memory card warning (copied from g_CardBootWarning) */ /* type set in global_types.tsv */
extern int g_SaveCurCard; /* 0x71faf0 */ /* type set in global_types.tsv */

// ---- functions
void MCSTATE_InitColors(void);
void MCSTATE_Update(void);
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

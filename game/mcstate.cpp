#include "game/mcstate.h"
#include "game/memcard.h"
#include "game/pause.h"
#include "idol/ps2shim.h"

/* g_CardState: index into g_CardStateFuncs */
enum {
    CARD_STATE_INIT = 0,
    CARD_STATE_GOOD_SAVE = 1,
    CARD_STATE_WARNING = 2,
    CARD_STATE_NOCARD = 3,
    CARD_STATE_WAIT_FOR_CARD = 4,
    CARD_STATE_UNFORMATTED = 5,
    CARD_STATE_PROMPT_FORMAT = 6,
    CARD_STATE_FORMAT_PENDING = 7,
    CARD_STATE_FORMATTING = 8,
    CARD_STATE_FORMATTED = 9,
    CARD_STATE_CHECK_SAVE = 10,
    CARD_STATE_CHECKING_SAVE = 11,
    CARD_STATE_NOSAVE = 12,
    CARD_STATE_PROMPT_CREATE_SAVE = 13,
    CARD_STATE_CREATE_SAVE_PENDING = 14,
    CARD_STATE_CREATING_SAVE = 15,
    CARD_STATE_NEWCARD = 16,
    CARD_STATE_FORMAT_FAILED = 17,
    CARD_STATE_CREATE_FAILED = 18,
    CARD_STATE_NO_ROOM = 19,
    CARD_STATE_LOAD_FAILED = 20,
    CARD_STATE_SAVE_FAILED = 21,
    CARD_STATE_SAVING = 22,
    CARD_STATE_PROMPT_BEGIN_UNFORMATTED = 23,
    CARD_STATE_PROMPT_BEGIN_NOSAVE = 24,
};

/* g_CardStateFlags */
enum {
    CARD_FLAG_WARNING = 0x001,
    CARD_FLAG_CREATE = 0x002,         /* NOSAVE: go on to PROMPT_CREATE_SAVE */
    CARD_FLAG_GOOD_CLEAR = 0x006,     /* cleared by GOOD_SAVE */
    CARD_FLAG_YES = 0x010,
    CARD_FLAG_NO = 0x020,
    CARD_FLAG_MESSAGE = 0x040,        /* a failure message is up */
    CARD_FLAG_SAVE_FAILED = 0x080,
    CARD_FLAG_LOAD_FAILED = 0x100,
    CARD_FLAG_SAVE = 0x200,
    CARD_FLAG_SAVE_ERROR = 0x400,
};

/* g_CardOp */
enum {
    CARD_OP_CHECK = 7,
    CARD_OP_CREATE = 9,
};

#define CARD_STATUS_WARNED 2

void MCSTATE_InitColors(void)
{
    g_CardMsgScale = 0x10000;
    g_CardMsgBgColor = STUB_00502f74_RET_0(0, 0, 0, 0x80, 0);
    g_CardMsgTextColor = (u32)STUB_00502f74_RET_0(0xff, 0xff, 0xaf, 0x80, 0);
    g_CardMsgTextClear = (u32)STUB_00502f74_RET_0(0xff, 0xff, 0xaf, 0, 0);
}

/* a failure the save code reported: show its message */
static inline int CardTakeFailure(void)
{
    if (g_CardStateFlags & CARD_FLAG_SAVE_FAILED) {
        g_CardStateFlags = (g_CardStateFlags & ~CARD_FLAG_SAVE_FAILED) | CARD_FLAG_MESSAGE;
        g_CardState = CARD_STATE_SAVE_FAILED;
        return 1;
    }

    if (g_CardStateFlags & CARD_FLAG_LOAD_FAILED) {
        g_CardStateFlags = (g_CardStateFlags & ~CARD_FLAG_LOAD_FAILED) | CARD_FLAG_MESSAGE;
        g_CardState = CARD_STATE_LOAD_FAILED;
        return 1;
    }

    return 0;
}

void MCSTATE_Update(void)
{
    int oldState = g_CardState;

    if (g_CardError != 0 || g_CardWarning != 0) {
        g_CardErrorSeen = 1;
    }

    if (g_CardStateFlags & CARD_FLAG_SAVE_FAILED) {
        g_CardStateFlags = (g_CardStateFlags & ~CARD_FLAG_SAVE_FAILED) | CARD_FLAG_MESSAGE;
        g_CardState = CARD_STATE_SAVE_FAILED;
    }

    if (g_CardStateFlags & CARD_FLAG_LOAD_FAILED) {
        g_CardStateFlags = (g_CardStateFlags & ~CARD_FLAG_LOAD_FAILED) | CARD_FLAG_MESSAGE;
        g_CardState = CARD_STATE_LOAD_FAILED;
    }

    g_CardStateFuncs[g_CardState]();

    g_CardStateTimer++;
    if (g_CardState != oldState) {
        g_CardStateTimer = 0;
    }
}

void CardState_INIT(void)
{
    g_memcardGameSaved = 0;
    g_CardWarning = g_CardBootWarning;
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_GOOD_SAVE(void)
{
    g_CardStateFlags &= ~CARD_FLAG_GOOD_CLEAR;

    if (CardTakeFailure()) {
        return;
    }

    if (g_CardWarning != 0) {
        g_memcardGameSaved = 0;
        g_CardState = CARD_STATE_WARNING;
        g_CardStateFlags |= CARD_FLAG_WARNING;
    }
    else if (g_CardStateFlags & CARD_FLAG_SAVE) {
        g_CardStateFlags &= ~CARD_FLAG_SAVE;
        g_CardState = CARD_STATE_SAVING;
    }
}

static inline void CardClearWarned(void)
{
    if (g_SaveCards[g_SaveCurCard].status == CARD_STATUS_WARNED) {
        g_SaveCards[g_SaveCurCard].status = 0;
    }
}

void CardState_WARNING(void)
{
    CardClearWarned();

    if ((g_CardStateFlags & CARD_FLAG_WARNING) == 0) {
        g_CardState = CARD_STATE_NOCARD;
    }
}

void CardState_NOCARD(void)
{
    g_CardOp = -1;
    g_CardOpStep = -1;

    for (int i = 0; i < 5; i++) {
        g_SaveCards[0].files[i].level = -1;
    }

    CardClearWarned();
    g_CardState = CARD_STATE_WAIT_FOR_CARD;
}

void CardState_WAIT_FOR_CARD(void)
{
    g_CardState = CARD_STATE_FORMATTED;
    g_CardStateFlags &= ~CARD_FLAG_NO;
}

void CardState_UNFORMATTED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_PROMPT_FORMAT(void)
{
    g_CardState = CARD_STATE_FORMATTED;
}

void CardState_FORMAT_PENDING(void)
{
    g_CardState = CARD_STATE_FORMATTED;
}

void CardState_FORMATTING(void)
{
    g_CardState = CARD_STATE_CREATE_SAVE_PENDING;
}

void CardState_FORMATTED(void)
{
    g_CardState = CARD_STATE_CHECK_SAVE;
}

static inline void CardStartOp(int op)
{
    if (g_CardOp < 0) {
        g_CardOp = op;
        g_CardOpStep = 0;
    }
}

void CardState_CHECK_SAVE(void)
{
    CardStartOp(CARD_OP_CHECK);
    g_CardState = CARD_STATE_CHECKING_SAVE;
}

void CardState_CHECKING_SAVE(void)
{
    g_CardState = CARD_STATE_NEWCARD;
}

void CardState_NOSAVE(void)
{
    if (g_CardStateFlags & CARD_FLAG_CREATE) {
        g_CardState = CARD_STATE_PROMPT_CREATE_SAVE;
    }
}

void CardState_PROMPT_CREATE_SAVE(void)
{
    if (g_CardStateFlags & CARD_FLAG_NO) {
        g_CardStateFlags ^= CARD_FLAG_NO;
        g_CardState = g_FrontEnd ? CARD_STATE_PROMPT_BEGIN_NOSAVE : CARD_STATE_NOSAVE;
    }
    else if (g_CardStateFlags & CARD_FLAG_YES) {
        g_CardStateFlags ^= CARD_FLAG_YES;
        g_CardState = CARD_STATE_CREATE_SAVE_PENDING;
    }
}

void CardState_CREATE_SAVE_PENDING(void)
{
    CardStartOp(CARD_OP_CREATE);
    g_CardState = CARD_STATE_CREATING_SAVE;
}

void CardState_CREATING_SAVE(void)
{
    if (g_CardError != 0) {
        g_CardState = CARD_STATE_CREATE_FAILED;
        g_CardStateFlags |= CARD_FLAG_MESSAGE;
        return;
    }

    DAT_0071faec = 0;
    g_SaveCurFile = 0;
    CardStartOp(CARD_OP_CHECK);
    g_CardState = CARD_STATE_NEWCARD;
}

void CardState_NEWCARD(void)
{
    g_CardState = CARD_STATE_GOOD_SAVE;
}

void CardState_FORMAT_FAILED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_CREATE_FAILED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_NO_ROOM(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_LOAD_FAILED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_SAVE_FAILED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_SAVING(void)
{
    g_CardState = CARD_STATE_GOOD_SAVE;

    if (g_CardError != 0) {
        g_CardState = CARD_STATE_SAVE_FAILED;
        g_memcardGameSaved = 0;
        g_CardStateFlags |= CARD_FLAG_SAVE_ERROR | CARD_FLAG_MESSAGE;
    }
}

void CardState_PROMPT_BEGIN_UNFORMATTED(void)
{
    g_CardState = CARD_STATE_NOCARD;
}

void CardState_PROMPT_BEGIN_NOSAVE(void)
{
    g_CardState = CARD_STATE_NOSAVE;
}

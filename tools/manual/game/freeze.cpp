// game/freeze.cpp -- in-game prompts ("freeze" mode): quit / continue / reconnect controller ...
// STATUS: IN PROGRESS
// MERGE
// 5 functions, 0x78140-0x7a338
//
// DisplayPrompt switches the game into GAME_MODE_FREEZE and sets up g_Freeze for one of the prompt
// types; UpdateFreeze runs it and DrawDialogText draws it. Timers are frame counts scaled by
// animationSpeed (the frame-rate factor, 1.0 at 60 fps).
#include "rc1.h"

#define FREEZE_OPEN_FRAMES   30.5f      /* constants at 0x7816c */
#define FREEZE_DELAY_FRAMES  10.5f
#define QUIT_FADE_FRAMES     600.5f     /* 0x79b08 */
#define RACE_MIN_FRAMES      4200.5f    /* 0x79b0c: a race quit after this long counts as an attempt */

/* frames scaled by the frame-rate factor; the binary does this through the vector unit
   (lvlx both floats, vmaddfp with -0.0, vctsxs, stvewx) */
static inline int ScaledFrames(float frames)
{
    return (int)(frames * animationSpeed);
}

static inline bool Pressed(int mask)
{
    return (g_Pad.buttonsPressedThisFrame & mask) != 0;
}

// 0x0078140 (0x14 bytes)
void SECTION_HEADER_FREEZE(void)
{
    DAT_0071f30c = 0x10000;
}

// 0x0078158 (0x14 bytes)
gameMode_t GetFreezePrevGameMode(void)
{
    return g_Freeze.prevGameMode;
}

// 0x0078178 (0x334 bytes)
void DisplayPrompt(int dialog, int arg, int option)
{
    g_Freeze.option = option;
    if (g_gameMode != GAME_MODE_PAUSE) {
        FUN_0060bc8c(29);
        music_Pause(0);
    }
    g_Freeze.prevGameMode = g_gameMode;
    g_Freeze.dialogType = dialog;
    g_Freeze.arg = arg;
    g_gameMode = GAME_MODE_FREEZE;
    g_Freeze.delay = 0;

    switch (dialog) {
    case 0:
        g_Freeze.options[0] = help_msg_string_by_index(STR_QUIT_RACE);
        g_Freeze.options[1] = help_msg_string_by_index(STR_QUIT_2);
        g_Freeze.options[2] = help_msg_string_by_index(STR_CONTINUE);
        g_Freeze.timer = 0;
        g_Freeze.state = 0;
        g_Freeze.openAnim = 0;
        g_Freeze.openAnim2 = 0;
        g_Freeze.unk28 = 0;
        break;
    case 1:
    case 4:
        g_Freeze.options[0] = help_msg_string_by_index(STR_QUIT);
        g_Freeze.options[1] = help_msg_string_by_index(STR_EXIT);
        g_Freeze.options[2] = help_msg_string_by_index(STR_CONTINUE_2);
        g_Freeze.timer = 0;
        break;
    case 2:
        g_Freeze.options[0] = help_msg_string_by_index(STR_CONTINUE_2);
        g_Freeze.options[1] = 0;
        g_Freeze.timer = 0;
        break;
    case 3:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = -1;
        g_Freeze.openAnim2 = g_Freeze.timer;
        DAT_0071fad4 = 3;
        g_Freeze.delay = ScaledFrames(FREEZE_DELAY_FRAMES);
        break;
    case 5:
        Help_AddToLog(STR_WHEN_THE_GAME_SHOWS_0x4E2B);
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = 0;
        g_Freeze.openAnim2 = g_Freeze.timer;
        break;
    case 6:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.state = 0;
        break;
    case 7:
    case 8:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = -1;
        g_Freeze.openAnim2 = g_Freeze.timer;
        break;
    case 9:                                     /* controller disconnected (startLevel) */
        g_Freeze.delay = 1;
        break;
    default:
        g_Freeze.options[0] = 0;
        g_Freeze.options[1] = 0;
        g_Freeze.options[2] = 0;
        g_Freeze.timer = 120;
        break;
    }
}

// 0x0079b18 (0x820 bytes)
void UpdateFreeze(void)
{
    sound_Update();
    if (g_Freeze.timer) g_Freeze.timer--;
    if (g_Freeze.delay) g_Freeze.delay--;

    switch (g_Freeze.dialogType) {
    case 0:                                     /* quit race? */
        switch (g_Freeze.state) {
        case 0:                                 /* open animation */
            if (g_Freeze.openAnim < 8) g_Freeze.openAnim++;
            else if (g_Freeze.openAnim2 < 8) g_Freeze.openAnim2++;
            else g_Freeze.state = 1;
            break;
        case 1:
            if (Pressed(pad_ConfirmButtonMask)) g_Freeze.state = 2;
            else if (Pressed(START | CIRCLE)) g_Freeze.state = 3;
            break;
        case 2:                                 /* close animation, then quit (2) or resume (3) */
        case 3:
            if (g_Freeze.openAnim2) { g_Freeze.openAnim2--; break; }
            if (g_Freeze.openAnim) { g_Freeze.openAnim--; break; }
            if (g_Freeze.state == 2) {
                if (DAT_0096a560 != -1) {
                    Hud_SetEntryValueById(DAT_0096a560, 0);
                    DAT_0096a560 = -1;
                }
                Hud_DecHideCounter();
                if (DAT_00969e7c > ScaledFrames(RACE_MIN_FRAMES)) {
                    if (Level == Rilgar) DAT_00a10548++;
                    else if (Level == Kalebo) DAT_00a1054c++;
                }
                g_gameMode = GAME_MODE_NORMAL;
                music_SetTransition(0, 8);
                Hero_Warp((float *)&DAT_0096b9e0, (float *)&DAT_0096b9f0, 0, 1);
            } else {
                g_gameMode = GAME_MODE_NORMAL;
                if (DAT_0096a57a > 2) {
                    DAT_0096a57a--;
                    *(u8 *)(DAT_0096a570 + 0xbc) = 3;
                }
            }
            break;
        }
        break;
    case 1:
        OcclMode = 2;
        if (Pressed(TRIANGLE)) {
            g_gameMode = GAME_MODE_NORMAL;
            DAT_0096b2ef |= 1;
        } else if (Pressed(pad_ConfirmButtonMask)) {
            g_gameMode = GAME_MODE_NORMAL;
        }
        break;
    case 2:
        OcclMode = 2;
        if (Pressed(pad_ConfirmButtonMask)) g_gameMode = GAME_MODE_NORMAL;
        break;
    case 3:                                     /* memory card save result */
        g_Freeze.openAnim++;
        if (g_Freeze.openAnim > ScaledFrames(FREEZE_OPEN_FRAMES) && g_Freeze.openAnim2) g_Freeze.openAnim2--;
        if (DAT_00a23099) {
            if (!g_Pad.showReconnectPrompt) {
                g_gameMode = g_Freeze.prevGameMode;
                DAT_00a23099 = 0;
                g_memcardPollDone = 0;
            }
            break;
        }
        {
            int result = memcard_PollSaveResult();
            if (result < 0 || !g_memcardPollDone || result == 2) break;
            int sys = memcard_GetSaveSysState();
            g_memcardPollDone = 0;
            if (sys == 6 || sys == 3) {
                g_memcardSaveSysState = 5;
                g_gameMode = g_Freeze.prevGameMode;
            } else if (sys == 1) {
                g_memcardSaveSysState = 5;
                if (result == 0) {
                    ChangeLevel(Level);
                    DAT_0096459a = 0;
                } else if (result == 1) {
                    g_gameMode = g_Freeze.prevGameMode;
                }
            } else if (sys == 0) {
                g_memcardSaveSysState = 5;
                if (result == 0) {
                    if (!g_FrontEnd && !DAT_00a15f39) {
                        g_gameMode = g_Freeze.prevGameMode;
                    } else {
                        if (DAT_00a15f39) DAT_00a15f39 = 0;
                        ChangeLevel(Veldin);
                        DAT_0096459a = 1;
                    }
                } else if (result == 1) {
                    g_gameMode = g_Freeze.prevGameMode;
                }
            }
        }
        break;
    case 4:
        if (Pressed(TRIANGLE)) {
            MobyInstance *hero = g_heroMobyPtr;
            hero->collision = 0;
            hero->enabled = 0;
            hero->modeBits = (MobyModeBit)(hero->modeBits | DISABLED);
            Hero_RevertToRatchet();
            Hero_Warp((float *)&DAT_0096b9e0, (float *)&DAT_0096b9f0, 0, 1);
            g_gameMode = GAME_MODE_NORMAL;
        } else if (Pressed(pad_ConfirmButtonMask)) {
            g_gameMode = GAME_MODE_NORMAL;
        }
        break;
    case 5:
        g_Freeze.openAnim++;
        g_gameMode = GAME_MODE_NORMAL;
        if (Level == Novalis) memcard_Save(0, -1);
        break;
    case 6:                                     /* quit to ...: wait, confirm, fade out */
        switch (g_Freeze.state) {
        case 0:
            if (!g_Freeze.timer) g_Freeze.state = 1;
            break;
        case 1:
            if (Pressed(TRIANGLE)) {
                g_gameMode = g_Freeze.prevGameMode;
            } else if (Pressed(pad_ConfirmButtonMask)) {
                FadeToBlack(4);
                DAT_00a52e60 = 0;
                g_Freeze.state = 2;
                g_Freeze.openAnim = ScaledFrames(QUIT_FADE_FRAMES);
            }
            break;
        case 2:
            if (g_Freeze.openAnim) g_Freeze.openAnim--;
            if (!g_Freeze.openAnim) {
                DAT_00a52e60 = 1;
                g_Freeze.state = 3;
            } else if (Pressed(TRIANGLE)) {
                FadeToBlack(4);
                DAT_00a52e60 = 1;
                g_gameMode = g_Freeze.prevGameMode;
            } else if (Pressed(pad_ConfirmButtonMask)) {
                DAT_00a52e60 = 0;
                g_gameMode = g_Freeze.prevGameMode;
            }
            break;
        case 3:
            if (Pressed(pad_ConfirmButtonMask)) g_gameMode = g_Freeze.prevGameMode;
            break;
        default:
            g_gameMode = g_Freeze.prevGameMode;
            break;
        }
        break;
    case 7:
        g_gameMode = g_Freeze.prevGameMode;
        break;
    case 9:                                     /* controller disconnected: wait for it */
        if (!g_Pad.showReconnectPrompt) g_gameMode = g_Freeze.prevGameMode;
        break;
    }

    if (g_gameMode != GAME_MODE_PAUSE && g_gameMode != GAME_MODE_FREEZE) {
        FUN_0060bb90(29);
        music_Unpause();
        STUB_00505d20();
    }
}

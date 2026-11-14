// game/freeze.cpp -- in-game prompts ("freeze" mode): quit / continue / reconnect controller ...
// STATUS: CLEAN (checked against the asm; local names are mine)
// 5 functions, 0x78140-0x7a338
//
// DisplayPrompt switches the game into GAME_MODE_FREEZE and sets up g_Freeze for one of the prompt
// types; UpdateFreeze runs it and DrawDialogText draws it. Timers are frame counts scaled by
// animationSpeed (the frame-rate factor, 1.0 at 60 fps).
#include <stdio.h>
#include <string.h>
#include "game/freeze.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "sdk/linked.h"
#include "sdk/mUnk4.h"
#include "idol/fastinline.h"

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

#define FADE_ALPHA           80.0f      /* 0x784b4 */
#define FONT_MEASURE         4          /* FontWindow.flags: only measure the text */
#define PROMPT_TEXT_FADE     0x0020ffff /* button label colour, faded in to ... */
#define PROMPT_TEXT          0x8020ffff
#define OPTION_TITLE_COLOR   0x8000c0c0
#define OPTION_COLOR         0x80ffa888

/* how far the open/close timer has run, 0 -> 1 */
static inline float OpenFraction(int timer)
{
    return 1.0f - timer / (float)ScaledFrames(FREEZE_OPEN_FRAMES);
}

/* box colour pulsing between two colours once every g_FreezePulsePeriod frames */
static u32 PulseColor(void)
{
    float period = (float)FastIntToDouble(g_FreezePulsePeriod);
    float t = (g_MainLoopFrames % g_FreezePulsePeriod) / period;
    return FastLerpColor(FastSinInline(t * 6.28318f - 3.14159f) * 0.5f + 0.5f,
                         g_FreezePulseColor0, g_FreezePulseColor1);
}

/* a box of half size (halfW, halfH) around (x, y), scaled by s */
static void DrawScaledBox(int x, int y, int halfW, int halfH, float s, u32 color)
{
    int top = y - FastDoubleToInt(halfH * s);
    int bottom = y + FastDoubleToInt(halfH * s);
    int left = x - FastDoubleToInt(halfW * s);
    DrawTextBox(top, bottom, left, x + FastDoubleToInt(halfW * s), color);
}

/* the "continue" / "quit" lines. The Japanese strings start with a two-byte button glyph;
   there the glyphs are swapped (circle confirms): the continue line gets the first byte of the
   "no" string, the quit line the glyph of the continue string. */
static void DrawContinueQuit(int y, u32 color)
{
    char buf[512];

    if (!g_JapaneseMode) {
        FontPrintMediumCenter(256, y, color, help_msg_string_by_index(STR_CONTINUE), -1);
        FontPrintMediumCenter(256, y + 24, color, help_msg_string_by_index(STR_QUIT_2), -1);
        return;
    }
    char *no = help_msg_string_by_index(STR_NO);
    strcpy(buf, help_msg_string_by_index(STR_CONTINUE));
    buf[2] = no[0];
    FontPrintMediumCenter(256, y, color, buf + 2, -1);
    help_msg_string_by_index(STR_CONTINUE);             /* result unused */
    strcpy(buf + 2, help_msg_string_by_index(STR_QUIT_2));
    FontPrintMediumCenter(256, y + 24, color, buf, -1);
}

/* centred message box sized to its text (memory card prompts) with an optional button line */
static void DrawMessageBox(const char *text, StringId button)
{
    FontWindow box = { 0, (short)g_ScreenHeight, 96, 416, 256, 104, 0, 0, 16, 1 | FONT_MEASURE, 0, 0 };

    FontPrintMediumOpt(&box, 0, text, -1);
    int h = box.max_height + 40;
    box.win_top = (g_ScreenHeight - h) >> 1;
    box.win_bot = box.win_top + h;
    box.text_y = box.win_top + 4;
    float t = OpenFraction(g_Freeze.timer);
    DrawRoundedRect(box.win_top, box.win_bot, 96, 416, (int)(t * FADE_ALPHA));
    box.flags ^= FONT_MEASURE;
    FontPrintMediumOpt(&box, FastLerpColor(t, g_FreezeTextColor0, g_FreezeTextColor1), text, -1);
    u32 color = FastLerpColor(OpenFraction(g_Freeze.openAnim2), PROMPT_TEXT_FADE, PROMPT_TEXT);
    if (button)
        FontPrintMediumCenter(256, box.win_bot - 20, color, help_msg_string_by_index(button), -1);
}

/* "quit race?" while racing, the results screen after it */
static void DrawRacePrompt(void)
{
    u32 box = PulseColor();
    float open = g_Freeze.openAnim * 0.125f;
    if (open > 1.0f) open = 1.0f;
    else if (!(open >= 0.1f)) open = 0.1f;

    u32 text = g_RaceTextColor0, good = g_RaceGoodColor0, bad = g_RaceBadColor0;
    if (g_Freeze.openAnim2) {
        float f = g_Freeze.openAnim2 * 0.125f;
        if (f > 1.0f) f = 1.0f;
        else if (!(f >= 0.0f)) f = 0.0f;
        text = FastLerpColor(f, g_RaceTextColor0, g_RaceTextColor1);
        good = FastLerpColor(f, g_RaceGoodColor0, g_RaceGoodColor1);
        bad = FastLerpColor(f, g_RaceBadColor0, g_RaceBadColor1);
    }

    if (DAT_0096a57a < 3) {
        DrawScaledBox(g_QuitBoxX, g_QuitBoxY, g_QuitBoxHalfW, g_QuitBoxHalfH, open, box);
        FontPrintMediumCenter(256, g_QuitTextY, text, help_msg_string_by_index(STR_QUIT_RACE), -1);
        DrawContinueQuit(g_QuitTextY + 24, text);
        return;
    }

    char line[64];
    int y = g_ResultTextY;
    DrawScaledBox(g_ResultBoxX, g_ResultBoxY, g_ResultBoxHalfW, g_ResultBoxHalfH, open, box);
    int place = g_RacePlace - 1;
    if (place > 4) place = 4;
    sprintf(line, "%s %s", help_msg_string_by_index((StringId)(STR_ST + place)),
            help_msg_string_by_index(STR_PLACE));
    FontPrintMediumCenter(256, y, g_RacePlace == 1 ? good : bad, line, -1);

    int track = Level == Kalebo;
    if (g_RaceBestTime[track] == g_RaceTime) {
        int perMin = g_IsPal ? 3000 : 3600;
        int perSec = (perMin + 1) / 60;     /* as the binary computes it: 50 or 60 */
        int min = g_RaceTime / perMin;
        int rest = g_RaceTime - min * perMin;
        int sec = rest / perSec;
        sprintf(line, "%s", help_msg_string_by_index(STR_NEW_BEST_TIME));
        FontPrintMediumCenter(256, y + 38, good, line, -1);
        sprintf(line, "%d:%02d:%02d", min, sec, (rest - sec * perSec) * 100 / perSec);
        FontPrintMediumCenter(256, y + 58, good, line, -1);
    } else {
        sprintf(line, "%s", help_msg_string_by_index(STR_NO_NEW_TIME));
        FontPrintMediumCenter(256, y + 48, bad, line, -1);
    }
    int best = g_RaceBestScore[Level == Kalebo];
    if (best != 0 && best == g_RaceScore) {
        sprintf(line, "%s", help_msg_string_by_index(STR_NEW_HIGH_SCORE));
        FontPrintMediumCenter(256, g_ResultTextY + 86, good, line, -1);
        sprintf(line, "%d", g_RaceScore);
        FontPrintMediumCenter(256, g_ResultTextY + 106, good, line, -1);
    } else {
        sprintf(line, "%s", help_msg_string_by_index(STR_NO_NEW_SCORE));
        FontPrintMediumCenter(256, g_ResultTextY + 96, bad, line, -1);
    }
    DrawContinueQuit(g_ResultTextY + 144, text);
}

/* the display mode prompt (dialog 6): yes/no, then the result */
static void DrawDisplayPrompt(void)
{
    FontWindow box = { 100, 300, 96, 416, 256, 104, 0, 0, 16, 1, 0, 0 };
    float t = OpenFraction(g_Freeze.timer);
    StringId msg;

    DrawRoundedRect(100, 300, 96, 416, (int)(t * FADE_ALPHA));
    u32 text = FastLerpColor(t, g_FreezeTextColor0, g_FreezeTextColor1);
    u32 button = FastLerpColor(t, PROMPT_TEXT_FADE, PROMPT_TEXT);
    switch (g_Freeze.state) {
    case 0:
    case 1:
    case 2:
        FontPrintMediumCenter(202, 280, button, help_msg_string_by_index(g_JapaneseMode ? STR_YES_3 : STR_YES_2), -1);
        FontPrintMediumCenter(309, 280, button, help_msg_string_by_index(STR_NO), -1);
        msg = g_Freeze.state == 2 ? STR_THE_DISPLAY_IS_NOW_0x522B : STR_THE_SCREEN_WILL_NOW_0x522A;
        break;
    case 3:
        FontPrintMediumCenter(256, 280, button,
                              help_msg_string_by_index(g_JapaneseMode ? STR_CONTINUE : STR_CONTINUE_2), -1);
        msg = STR_THE_DISPLAY_HAS_BEEN_0x522C;
        break;
    default:
        return;
    }
    char *str = help_msg_string_by_index(msg);
    FontPrintOptWestern(&box, text, str, -1, GetEffectTex(1), &MediumWesternGlyphs, 1.0f);
}

// 0x00784e8 (0x1620 bytes)
void DrawDialogText(void)
{
    DrawScreenOverlay(0, 0, 0, 48);
    if (g_Freeze.delay != 0) return;            /* skips the STUB_0006d708 below too */
    STUB_0006d704(0);

    switch (g_Freeze.dialogType) {
    case 9:
    case 5:
    case 3:
        break;
    case 8:                                     /* save failed */
        if (g_Freeze.openAnim > 0)
            DrawMessageBox(help_msg_string_by_index(g_Freeze.option == 0 ? STR_SAVE_FAILED_PLEASE_CHECK_0x4FBC
                                                                         : STR_SAVE_FAILED_PLEASE_CHECK_0x4FBD),
                           g_Freeze.timer == 0 ? STR_CONTINUE_2 : (StringId)0);
        break;
    case 7:
        if (g_Freeze.openAnim > 0) {
            char buf[512];
            StringId button = g_Freeze.timer == 0 ? STR_CONTINUE_2 : (StringId)0;
            char *p = buf;
            strncpy(buf, help_msg_string_by_index(STR_MEMORY_CARD_PS2_IN_0x4FA6), 1024);   /* sic: 1024 */
            /* the message is "<a>\1<b>": show the part after the \1 separators */
            while (*p != 0 && *p != 1) p++;
            while (*p == 1) *p++ = 0;
            DrawMessageBox(p, button);
        }
        break;
    case 6:
        DrawDisplayPrompt();
        break;
    case 2:
        DrawTextBox(100, 160, 176, 336, PulseColor());
        FontPrintMediumCenter(256, 122, OPTION_TITLE_COLOR, g_Freeze.options[0], -1);
        break;
    case 0:
        DrawRacePrompt();
        break;
    default:                                    /* 1, 4: title and two options */
        DrawTextBox(80, g_FreezeOpt2Y + 26, 176, 336, PulseColor());
        if (g_Freeze.options[0]) FontPrintMediumCenter(256, 90, OPTION_TITLE_COLOR, g_Freeze.options[0], -1);
        if (g_Freeze.options[1]) FontPrintMediumCenter(256, g_FreezeOpt1Y, OPTION_COLOR, g_Freeze.options[1], -1);
        if (g_Freeze.options[2]) FontPrintMediumCenter(256, g_FreezeOpt2Y, OPTION_COLOR, g_Freeze.options[2], -1);
        break;
    }
    STUB_0006d708();
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

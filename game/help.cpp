// game/help.cpp -- the in-game help messages (the box at the bottom of the screen and its voice)
// STATUS: CLEAN (checked against the asm; local names are mine)
// 17 functions, 0x7b0f4-0x7cf0c
//
// Help_QueueMessage asks for a message; Help_Update runs the box through its states (grow from the
// icon, show the text, shrink away) and Help_Draw draws it. Each request carries a "flag" (an index
// into HelpData) that counts how often that hint was shown and on which levels. The help log
// (pause menu) lists recently shown messages by their index in g_HelpIdPairs.
#include "game/help.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "idol/fastfunc.h"
#include "sdk/fios.h"

enum HelpBoxState {
    HELP_IDLE,          /* waiting for a queued message */
    HELP_OPEN,          /* box grows from the centre */
    HELP_ICON,          /* "?" icon */
    HELP_EXPAND,        /* icon box expands to the text size */
    HELP_FADE_IN,       /* text fades in */
    HELP_SHOW,
    HELP_FADE_OUT,
    HELP_CLOSE,         /* box shrinks away */
    HELP_SUSPENDED,     /* closed by Help_Suspend, comes back later */
};

#define HELP_PAIRS      150
#define HELP_FLAG_DONE  0xffff          /* HelpDatum.timesUsed: never show again */
#define SPEECH_BASE     30000
#define HELP_TEXT_COLOR 0x80ffa888
#define ICON_COLOR      0x808080
#define HELP_OWNER      ((MobyInstance *)5)    /* MB_RequestHelpMessage's owner for the help box */

static inline int ScaledFrames(float frames)
{
    return (int)(frames * animationSpeed);
}

static inline bool TrianglePressed(void)
{
    return (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0;
}

/* stop the current message's voice line if it is the one playing */
static inline void StopHelpSpeech(void)
{
    int speech = HelpMsgs[g_Help.message_index].vag;
    if (speech != -1 && speech == g_SpeechPlaying.track - SPEECH_BASE &&
        g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6)
        g_SpeechPlaying.status = 5;
}

/* move pair index to the end of the help log */
static inline void LogPair(int pair)
{
    int i;

    for (i = 0; HelpLog[i] != pair && i < HelpLogPos; i++) {}
    if (i < HelpLogPos) {
        HelpLogPos--;
        for (; i < HelpLogPos; i++) HelpLog[i] = HelpLog[i + 1];
        HelpLog[i] = 0;
    }
    HelpLog[HelpLogPos++] = pair;
}

static inline void LogMessage(short id)
{
    for (int i = 0; i < HELP_PAIRS; i++) {
        if (g_HelpIdPairs[i][0] == id) {
            LogPair(i);
            return;
        }
    }
}

/* the current message has been shown: update its flag */
static inline void MarkShownTime(HelpDatum *f)
{
    int t = (int)(animationSpeed * ((float)g_GameFrameCount + 0.5f)) / 600;
    if (f->lastTime < t) f->lastTime = t;
}
static inline void MarkShown(void)
{
    HelpDatum *f = &HelpData[g_Help.message_flg];
    if (f->timesUsed < HELP_FLAG_DONE) f->timesUsed++;
    MarkShownTime(f);
    f->level_die |= 1u << Level | 0x80000000u;
}

static inline void SetState(int state)
{
    g_Help.state = state;
    g_Help.counter = 0;
}

// 0x007b0f4 (0x3c bytes)
void SECTION_HEADER_HELP(void)
{
    DAT_00720860 = 0x10000;
    FUN_005084b8(&TEX_BASE);
}

// 0x007b130 (0xa8 bytes)
/* close the box early */
void Help_Skip(void)
{
    switch (g_Help.state) {
    case HELP_IDLE:
        g_Help.message_id = -1;
        break;
    case HELP_OPEN:
    case HELP_ICON:
    case HELP_EXPAND:
        SetState(HELP_CLOSE);
        break;
    case HELP_FADE_IN:
        g_Help.counter = 4 - g_Help.counter;        /* fade out from the same brightness */
        g_Help.state = HELP_FADE_OUT;
        break;
    case HELP_SHOW:
        SetState(HELP_FADE_OUT);
        break;
    }
}

// 0x007b1d8 (0x74 bytes)
/* index of the pair whose column holds id; the other column's id in *pOther */
int Help_FindPairIndex(short id, int column, short *pOther)
{
    for (int i = 0; i < HELP_PAIRS; i++) {
        if (g_HelpIdPairs[i][column] == id) {
            if (pOther) *pOther = g_HelpIdPairs[i][column == 0];
            return i;
        }
    }
    return -1;
}

// 0x007b24c (0xc4 bytes)
void Help_AddToLog(short id)
{
    LogMessage(id);
}

// 0x007b310 (0x148 bytes)
/* queue a message if nothing else is showing or speaking; 1 if queued */
int Help_QueueMessage(StringId id, int flag)
{
    if (g_Help.state != HELP_IDLE || g_Help.message_id != -1 || g_SpeechPlaying.handle != 0 ||
        g_PendingSpeech != -1 || HelpData[flag].timesUsed == HELP_FLAG_DONE)
        return 0;
    g_Help.message_id = id;
    g_Help.message_flg = flag;
    LogMessage(id);
    return 1;
}

// 0x007b458 (0x98 bytes)
void Help_Kill(void)
{
    if (g_Help.state != HELP_IDLE) {
        StopHelpSpeech();
        g_Help.state = HELP_IDLE;
        g_Help.message_id = -1;
        g_Help.message_index = -1;
        g_Help.counter = 0;
    }
}

// 0x007b4f0 (0x1c0 bytes)
/* like Help_QueueMessage, but first kills a message that is showing */
int Help_QueueMessageForce(StringId id, int flag)
{
    Help_Kill();
    if (g_Help.message_id != -1 || g_SpeechPlaying.handle != 0 || g_PendingSpeech != -1 ||
        HelpData[flag].timesUsed == HELP_FLAG_DONE)
        return 0;
    g_Help.message_id = id;
    g_Help.message_flg = flag;
    LogMessage(id);
    return 1;
}

// 0x007b6b0 (0x34 bytes)
void Help_ClearUsedSinceDeath(void)
{
    for (int i = 0; i < 148; i++) HelpData[i].level_die &= 0x7fffffff;
}

// 0x007b6e4 (0x5c bytes)
int Help_FindIndex(int id)
{
    for (int i = 0; i < g_Help.num_message; i++)
        if (HelpMsgs[i].id == id) return i;
    return -1;
}

// 0x007b740 (0x94 bytes)
char *help_msg_string_by_index(StringId helpmsg)
{
    if (g_Language == LANG_GERMAN && helpmsg == STR_JUMP_THEN_PRESS_AND_0x1773)
        helpmsg = STR_TRY_USING_THE_GLIDE_0x0BB8;
    int i = Help_FindIndex(helpmsg);
    if (i >= 0) return HelpMsgs[i].text;
    return (char *)"MESSAGE DOES NOT EXIST";
}

// 0x007b7d8 (0x90 bytes)
/* close the box for a while (cutscene, menu); the message comes back after Help_Resume */
void Help_Suspend(void)
{
    if (g_Help.suspend) return;
    g_Help.suspend = 1;
    g_Help.suspend_timer = ScaledFrames(60.5f);
    Help_Skip();
    if (g_Help.state == HELP_IDLE) g_Help.state = HELP_SUSPENDED;
}

// 0x007b868 (0x14 bytes)
void Help_Resume(void)
{
    g_Help.suspend = 0;
}

// 0x007b880 (0x168 bytes)
/* open the box for g_Help.message_index: measure the text to size it */
void Help_StartMessageBox(void)
{
    FontWindow win;

    SetState(HELP_OPEN);
    if (g_HelpTextOn || g_HelpVoiceOn) sound_CorePlay(0, 1, 0);
    char *text = HelpMsgs[g_Help.message_index].text;
    SetFontWindow(&win, 240, 480, 44, 468, 256, 360, 16, 7);
    FontPrintOpt(&win, HELP_TEXT_COLOR, text, -1, 1.0f);
    g_Help.boxX = 256;
    g_Help.boxHalfW = (win.max_width >> 1) + 10;
    g_Help.boxHalfH = (win.max_height >> 1) + 5;
    g_Help.curHalfW = 8;
    g_Help.curHalfH = 8;
    g_Help.boxY = g_ScreenHeight - 60;
    if (g_Help.boxY + g_Help.boxHalfH > g_ScreenHeight - 12)
        g_Help.boxY = g_ScreenHeight - g_Help.boxHalfH - 12;
}

// 0x007ba00 (0xe38 bytes)
void Help_Update(void)
{
    /* help stays off until the d-pad has been held for two seconds */
    if (!g_Help.ready && (g_Help.ready_timer != 0 || (g_Pad.downButtons & (LEFT | DOWN | RIGHT | UP)))) {
        if (g_Help.ready_timer == 0) g_Help.ready_timer = 1;
        g_Help.ready_timer++;
        if (g_Help.ready_timer >= ScaledFrames(120.5f)) g_Help.ready = 1;
    }
    if (g_gameMode != GAME_MODE_NORMAL || !g_Help.ready) {
        g_Help.message_id = -1;
        g_Help.state = HELP_IDLE;
        g_Help.counter = 0;
        return;
    }

    g_Help.counter++;
    switch (g_Help.state) {
    case HELP_IDLE:
        if (g_Help.message_id < 0) break;
        g_Help.message_index = Help_FindIndex(g_Help.message_id);
        g_Help.message_id = -1;
        if (g_Help.message_index >= 0) Help_StartMessageBox();
        break;

    case HELP_OPEN: {
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        int speech = HelpMsgs[g_Help.message_index].vag;
        if (speech >= 0 && g_SpeechPlaying.handle == 0 && g_PendingSpeech == -1)
            g_PendingSpeech = speech + SPEECH_BASE;
        if (TrianglePressed()) {
            MarkShown();
            g_Help.counter = 8 - g_Help.counter;    /* shrink from the current size */
            g_Help.state = HELP_CLOSE;
        } else if (g_Help.counter > 5) {
            SetState(HELP_ICON);
        }
        break;
    }

    case HELP_ICON:
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        if (TrianglePressed()) {
            MarkShown();
            SetState(HELP_CLOSE);
        } else if (g_Help.counter >= ScaledFrames(60.5f) ||
                   (g_Help.counter >= ScaledFrames(24.5f) &&
                    (g_SpeechPlaying.status == 3 || HelpMsgs[g_Help.message_index].vag == -1))) {
            SetState(HELP_EXPAND);
        }
        break;

    case HELP_EXPAND:
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        if (TrianglePressed()) {
            MarkShown();
            SetState(HELP_CLOSE);
        } else if (g_Help.counter > 7) {
            SetState(HELP_FADE_IN);
        }
        break;

    case HELP_FADE_IN:
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        if (TrianglePressed()) {
            MarkShown();
            g_Help.counter = 4 - g_Help.counter;
            g_Help.state = HELP_FADE_OUT;
        } else if (g_Help.counter > 3) {
            /* the voice line was preseeked while the box opened */
            int speech = HelpMsgs[g_Help.message_index].vag;
            if (speech != -1 && speech == g_SpeechPlaying.track - SPEECH_BASE && g_SpeechPlaying.status == 3)
                music_PlayPreseekedSpeech();
            SetState(HELP_SHOW);
        }
        break;

    case HELP_SHOW: {
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        int speech = HelpMsgs[g_Help.message_index].vag;
        /* at least 7 s, and until its voice line has finished */
        if ((g_Help.counter >= ScaledFrames(420.5f) &&
             (speech == -1 || speech != g_SpeechPlaying.track - SPEECH_BASE ||
              (g_SpeechPlaying.handle == 0 && g_PendingSpeech == -1))) ||
            TrianglePressed()) {
            MarkShown();
            SetState(HELP_FADE_OUT);
        }
        break;
    }

    case HELP_FADE_OUT:
        if (!g_HelpTextOn || g_Help.counter > 3 || TrianglePressed()) SetState(HELP_CLOSE);
        break;

    case HELP_CLOSE:
        MB_RequestHelpMessage(HELP_OWNER, (StringId)0);
        StopHelpSpeech();
        if (g_Help.counter > 7) {
            g_Help.state = HELP_SUSPENDED;
            if (!g_Help.suspend) {
                g_Help.state = HELP_IDLE;
                g_Help.message_index = -1;
            }
            g_Help.counter = 0;
        }
        break;

    case HELP_SUSPENDED:
        if (g_Help.suspend) break;
        if (g_Help.message_index >= 0) {
            if (g_Help.resumed == 0) {
                /* reopen the interrupted message once, after a delay */
                if (FastDecTimerS32(&g_Help.suspend_timer) == 0) return;
                Help_StartMessageBox();
                g_Help.resumed++;
                return;
            }
            if (HelpData[g_Help.message_flg].timesUsed < HELP_FLAG_DONE) HelpData[g_Help.message_flg].timesUsed++;
        }
        {
            HelpDatum *f = &HelpData[g_Help.message_flg];
            MarkShownTime(f);
            g_Help.resumed = 0;
            g_Help.message_index = -1;
            g_Help.state = HELP_IDLE;
            f->level_die |= 1u << Level | 0x80000000u;
        }
        break;
    }
}

// 0x007c838 (0x134 bytes)
/* the small box with the "?" icon; fades in while opening and out while closing */
void Help_DrawIconBox(void)
{
    int x = g_Help.boxX, y = g_Help.boxY;

    g_Help.curHalfW = 32;
    g_Help.curHalfH = 32;
    DrawRoundedRect(y - 32, y + 32, x - 32, x + 32, 96);
    int alpha = 126;
    if (g_Help.state == HELP_OPEN || g_Help.state == HELP_CLOSE) alpha = g_Help.counter * 21;
    if (alpha > 128) alpha = 128;
    Sprite_DrawShapeWrapper(x - 32, y - 32, 64, 64, 0, 0, 64, 64, alpha << 24 | ICON_COLOR, GetEffectTex(4));
}

// 0x007c978 (0x52c bytes)
void Help_Draw(void)
{
    if (g_Help.state == HELP_IDLE || !g_Help.ready) return;
    if (!g_HelpTextOn && !g_HelpVoiceOn) return;
    if (!g_HelpTextOn) return;                  /* every state below draws only with help text on */

    int x = g_Help.boxX, y = g_Help.boxY, t = g_Help.counter;
    int hw, hh;
    switch (g_Help.state) {
    case HELP_OPEN:
        hw = t * 4 + 8;
        g_Help.curHalfW = hw;
        g_Help.curHalfH = hw;
        DrawRoundedRect(y - hw, y + hw, x - hw, x + hw, 96);
        break;

    case HELP_ICON:
        Help_DrawIconBox();
        break;

    case HELP_EXPAND: {
        hw = (g_Help.boxHalfW * t - 32 * t) / 8 + 32;
        hh = (g_Help.boxHalfH * t - 32 * t) / 8 + 32;
        g_Help.curHalfW = hw;
        g_Help.curHalfH = hh;
        DrawRoundedRect(y - hh, y + hh, x - hw, x + hw, 96);
        int alpha = (8 - t) * 16;               /* the icon fades out */
        if (alpha < 0) alpha = 0;
        Sprite_DrawShapeWrapper(x - 32, y - 32, 64, 64, 0, 0, 64, 64, alpha << 24 | ICON_COLOR, GetEffectTex(4));
        break;
    }

    case HELP_FADE_IN:
    case HELP_SHOW:
    case HELP_FADE_OUT: {
        FontWindow win;
        g_Help.curHalfW = g_Help.boxHalfW;
        g_Help.curHalfH = g_Help.boxHalfH;
        DrawRoundedRect(300, 380, g_Language == LANG_FRENCH ? 30 : 40, g_Language == LANG_FRENCH ? 477 : 472, 96);
        u32 color = HELP_TEXT_COLOR;
        if (g_Help.state == HELP_FADE_IN) color = (u32)t << 29 | 0xffa888;
        else if (g_Help.state == HELP_FADE_OUT) color = (u32)(4 - t) << 29 | 0xffa888;
        char *text = HelpMsgs[g_Help.message_index].text;
        int indent = g_Language >= LANG_FRENCH && g_Language <= LANG_ITALIAN ? 10 : 0;   /* European languages */
        SetFontWindow(&win, 300, 380, indent + 40, 472, 250, 340, 18, 3);
        FontPrintOpt(&win, color, text, -1, g_Language == LANG_GERMAN ? 0.85f : 1.0f);
        break;
    }

    case HELP_CLOSE:
        hw = g_Help.curHalfW - (g_Help.curHalfW * t - 8 * t) / 8;
        hh = g_Help.curHalfH - (g_Help.curHalfH * t - 8 * t) / 8;
        DrawRoundedRect(y - hh, y + hh, x - hw, x + hw, (8 - t) * 12);
        break;
    }
}

// 0x007cea4 (0x68 bytes)
/* the id paired with id in the other column, -1 if none */
short Help_GetPairedId(short id, int column)
{
    for (int i = 0; i < HELP_PAIRS; i++)
        if (g_HelpIdPairs[i][column] == id) return g_HelpIdPairs[i][column == 0];
    return -1;
}

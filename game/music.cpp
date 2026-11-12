// game/music.cpp -- streamed music and speech (Scream VAG streams)
// STATUS: CLEAN (checked against the asm; local names are mine)
// 39 functions, 0x11b944-0x11dfc4
//
// Three streams are tracked by music_Playing records: g_MusicPlaying (the level music),
// g_TransitionPlaying (a one-shot transition piece) and g_SpeechPlaying (dialogue). Every
// Scream request is asynchronous: the record's handle is set to -1 while a request is in flight
// and the completion callback (music_*CB) stores the real handle and moves the status on.
//
// A music track is a head file music[n] and, when flags bit 0 is set, a looping body file
// music[n+1] queued behind it. music_SetTransition asks for a new track; music_Update then plays
// the transition piece, fades the old track out over the last quarter of the piece
// (g_TransitionState 1-5) and preseeks the new track to start when the piece ends.
//
// Speech ids select the file by range: <10000 level scene speech, 10000 vendor, 20000 level
// bindata, 30000 help, 40000 space, 50000 Qwark taunts, 60000 helpgirl. Speech is always
// preseeked (started paused) and music_PlayPreseekedSpeech lets it go.
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "game/music.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/pause.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/sound.h"
#include "sdk/libscream/989snd.h"
#include <ctype.h>

/* music_Playing.status */
#define MUSIC_IDLE           0
#define MUSIC_STARTING       1      /* stream requested, waiting for the handle */
#define MUSIC_BUFFERING      2      /* preseeked, polling snd_IsVAGStreamBuffered_CB */
#define MUSIC_BUFFERED       3      /* preseeked and ready to continue */
#define MUSIC_PLAYING        4
#define MUSIC_STOP           5      /* stop requested */
#define MUSIC_STOPPING       6
#define MUSIC_STOPPED        7
#define MUSIC_HEAD_READY     8      /* head started, body not queued yet */
#define MUSIC_BODY_STARTING  9      /* body requested behind the head */
#define MUSIC_PAUSED         0x8000 /* status and pause flag bit */

/* snd_PlayVAGStreamByNameEx_CB flags */
#define STREAM_PRESEEK       0x04   /* start paused, snd_ContinueVAGStream starts it */
#define STREAM_FLAG_8        0x08   /* set on every music stream (meaning unknown) */
#define STREAM_LOOP          0x10

/* snd_PlayVAGStreamByNameEx_CB volume groups */
#define VOLGROUP_MUSIC       1
#define VOLGROUP_SPEECH      2

#define SOUND_PARAM_VOLUME   0x0c   /* snd_SetSoundParams_CB mask used for the fade */

#define MUSIC_FLAG_HAS_BODY  0x01   /* music_Playing.flags: track n+1 loops after track n */

#define STREAM_QUEUE_LEN     10
#define STREAM_REMAIN_START  48000

#define NO_TRACK             (-1)
#define NO_SPEECH            (-1)
#define LANG_JAPANESE        6

#define SPEECH_VENDOR        10000
#define SPEECH_BINDATA       20000
#define SPEECH_HELP          30000
#define SPEECH_SPACE         40000
#define SPEECH_QWARK         50000
#define SPEECH_HELPGIRL      60000

#define MUSIC_FILE           "rc1/ps3data/level%d/music[%d].xvag"
#define HOST_WAD_FILE        "host0:\\data\\game.wad"
#define SECTOR_SHIFT         11
#define SECTOR_SIZE          0x800
#define HOST_SEEK_END        5
#define HOST_SEEK_SET        6

#define LEVEL_MUSIC_FILES    15

#define TRANSITION_DELAY_SECONDS  7.5f      /* constants at 0x11d1e4 */
#define FRAMES_PER_SECOND         60.0f

#define CD_REASON_READY      5
#define CD_STATUS_BUSY       4

/* Claims a free stream record and fills in what every new stream starts with. */
static inline void music_ClaimStream(music_Playing *stream, int track, int flags, int vol, int transition)
{
    stream->handle = -1;
    stream->status = MUSIC_STARTING;
    stream->track = (short)track;
    stream->volume = (short)vol;
    stream->flags = (short)flags;
    stream->queuelen = STREAM_QUEUE_LEN;
    stream->remain = STREAM_REMAIN_START;
    stream->transition = (short)transition;
}

static inline void music_PlayStream(music_Playing *stream, const char *path, int vol, int volGroup,
                                    int queueOn, int streamFlags, SndCompleteProc callback)
{
    snd_PlayVAGStreamByNameEx_CB(path, NULL, 0, 0, vol, 0, volGroup, queueOn, streamFlags, callback,
                                 (u64)stream);
}

static inline void music_PlaySpeechFile(const char *path, int vol)
{
    music_PlayStream(&g_SpeechPlaying, path, vol, VOLGROUP_SPEECH, 0, STREAM_FLAG_8 | STREAM_PRESEEK,
                     music_SpeechPreseekCB);
}

// 0x011b944 (0x14 bytes)
void SECTION_HEADER_MUSIC(void)
{
    DAT_00729554 = 0x10000;
}

// 0x011b960 (0xcc bytes)
void music_UppercaseCdromPath(char *path)
{
    size_t prefixLen = strlen("cdrom0:");

    if (strncmp("cdrom0:", path, prefixLen) != 0) {
        return;
    }

    for (size_t i = prefixLen; i < strlen(path); i++) {
        if (islower((unsigned char)path[i])) {
            path[i] = path[i] - ('a' - 'A');
        }
    }
}

// 0x011ba2c (0x2c bytes)
void music_LoadCoreBank(void)
{
    snd_StreamSafeCdCallback(music_CdCB);
}

// 0x011ba58 (0xa8 bytes)
void music_Init(void)
{
    DAT_009636f8 = 0x20;
    DAT_009636fc = 10;
    DAT_00963700 = 8;
    DAT_00963704 = 0;
    DAT_009636c8 = 0;

    g_MusicPlaying.handle = 0;
    g_MusicPlaying.status = MUSIC_IDLE;
    g_SpeechPlaying.handle = 0;
    g_SpeechPlaying.status = MUSIC_IDLE;
    g_TransitionPlaying.handle = 0;
    g_TransitionPlaying.status = MUSIC_IDLE;
    g_PendingSpeech = NO_SPEECH;
    g_PendingTrack = NO_TRACK;

    snd_InitVAGStreamingEx(4, 0xf000, 10, 1);
    while (STUB_00505d20() != 0) {
    }

    snd_StreamSafeCdCallback(music_CdCB);
}

// 0x011bb00 (0x9c bytes)
void InitLevelMusicFileSizes(void)
{
    char path[256];

    for (int music = 0; music < LEVEL_MUSIC_FILES; music++) {
        sprintf(path, MUSIC_FILE, Level, music);
        g_LevelMusicFileSizes[music] = GetFileSize(path);
    }
}

// 0x011bb9c (0xf4 bytes)
void music_StartSpeech_Helpgirl(int id, int flags, int vol)
{
    char path[256];

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/global/audio/helpgirl_speeches%d.xvag", id - SPEECH_HELPGIRL);
    music_PlaySpeechFile(path, g_SpeechPlaying.volume);
}

// 0x011bc90 (0x100 bytes)
void music_StartSpeech_Qwark(int id, int flags, int vol)
{
    char path[256];

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag", id - SPEECH_QWARK, g_Language);
    music_PlaySpeechFile(path, g_SpeechPlaying.volume);
}

// 0x011bd90 (0xf4 bytes)
void music_StartSpeech_Space(int id, int flags, int vol)
{
    char path[256];

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/global/audio/space_sounds_l%d.xvag", id - SPEECH_SPACE);
    music_PlaySpeechFile(path, g_SpeechPlaying.volume);
}

// 0x011be84 (0x180 bytes)
// Help voice-overs are muted when the help voice option is off. Japanese falls back to the
// English file when there is no Japanese one.
void music_StartSpeech_Help(int id, int flags, int vol)
{
    char path[264];
    int language = g_Language;

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/global/audio/help%d_%d.xvag", id - SPEECH_HELP, g_Language);
    if (language == LANG_JAPANESE && GetFileSize(path) == 0) {
        sprintf(path, "rc1/ps3data/global/audio/help%d_%d.xvag", id - SPEECH_HELP, 0);
    }

    music_PlaySpeechFile(path, g_HelpVoiceOn ? g_SpeechPlaying.volume : 0);
}

// 0x011c004 (0xf8 bytes)
void music_StartSpeech_Bindata(int id, int flags, int vol)
{
    char path[256];

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/level%d/bindata[%d].xvag", Level, id - SPEECH_BINDATA);
    music_PlaySpeechFile(path, g_SpeechPlaying.volume);
}

// 0x011c0fc (0xec bytes)
void music_StartSpeech_Vendor(int id, int flags, int vol)
{
    char path[256];

    if (g_SpeechPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
    sprintf(path, "rc1/ps3data/global/audio/vendor_speech%d.xvag", id - SPEECH_VENDOR);
    music_PlaySpeechFile(path, g_SpeechPlaying.volume);
}

// 0x011c1e8 (0x648 bytes)
// The per-range functions above are inlined here. Scene speech (ids below 10000) has one file per
// language, lettered by s_efgsij (English for language 0 as well as 1); it is also muted when the
// help voice option is off.
void music_StartSpeech(int id, int flags, int vol)
{
    char path[256];

    if (id >= SPEECH_HELPGIRL) {
        music_StartSpeech_Helpgirl(id, flags, vol);
    }
    else if (id >= SPEECH_QWARK) {
        music_StartSpeech_Qwark(id, flags, vol);
    }
    else if (id >= SPEECH_SPACE) {
        music_StartSpeech_Space(id, flags, vol);
    }
    else if (id >= SPEECH_HELP) {
        music_StartSpeech_Help(id, flags, vol);
    }
    else if (id >= SPEECH_BINDATA) {
        music_StartSpeech_Bindata(id, flags, vol);
    }
    else if (id >= SPEECH_VENDOR) {
        music_StartSpeech_Vendor(id, flags, vol);
    }
    else if (g_SpeechPlaying.handle == 0) {
        int letter = g_Language != 0 ? g_Language - 1 : 0;

        music_ClaimStream(&g_SpeechPlaying, id, flags, vol, 0);
        sprintf(path, "rc1/ps3data/level%d/scene[%d]/speech_%c.xvag", Level, id, s_efgsij_007295d0[letter]);
        music_PlaySpeechFile(path, g_HelpVoiceOn ? g_SpeechPlaying.volume : 0);
    }
}

// 0x011c830 (0x60 bytes)
int music_PlayPreseekedSpeech(void)
{
    if (g_SpeechPlaying.handle == 0 || g_SpeechPlaying.status != MUSIC_BUFFERED) {
        return 0;
    }

    snd_ContinueVAGStream(g_SpeechPlaying.handle);
    g_SpeechPlaying.status = MUSIC_PLAYING;
    return 1;
}

// 0x011c890 (0xf4 bytes)
void music_PreseekTrack(int track, int flags, int vol)
{
    char path[256];

    if (g_MusicPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_MusicPlaying, track, flags, vol, 0);
    sprintf(path, MUSIC_FILE, Level, track);
    music_PlayStream(&g_MusicPlaying, path, g_MusicPlaying.volume, VOLGROUP_MUSIC, 0,
                     STREAM_FLAG_8 | STREAM_PRESEEK, music_PreseekCB);
}

// 0x011c984 (0xf4 bytes)
void music_StartTrack(int track, int flags, int vol)
{
    char path[256];

    if (g_MusicPlaying.handle != 0) {
        return;
    }

    music_ClaimStream(&g_MusicPlaying, track, flags, vol, 0);
    sprintf(path, MUSIC_FILE, Level, track);
    music_PlayStream(&g_MusicPlaying, path, g_MusicPlaying.volume, VOLGROUP_MUSIC, 0, STREAM_FLAG_8,
                     music_PreseekTrackCB);
}

// 0x011ca78 (0x13c bytes)
// Queues the body (track + 1) behind the playing head; it loops when the track has a body.
void music_StartTrackBody(int track, int flags, int vol)
{
    char path[256];
    int head = g_MusicPlaying.handle;

    if (g_MusicPlaying.status == MUSIC_BODY_STARTING || head == -1 || head == 0) {
        return;
    }

    g_MusicPlaying.track = (short)track;
    g_MusicPlaying.status = MUSIC_BODY_STARTING;
    g_MusicPlaying.volume = (short)vol;
    g_MusicPlaying.flags = (short)flags;
    g_MusicPlaying.queuelen = STREAM_QUEUE_LEN;
    g_MusicPlaying.remain = STREAM_REMAIN_START;
    g_MusicPlaying.transition = 0;

    sprintf(path, MUSIC_FILE, Level, track + 1);
    music_PlayStream(&g_MusicPlaying, path, g_MusicPlaying.volume, VOLGROUP_MUSIC, head,
                     (flags & MUSIC_FLAG_HAS_BODY) ? STREAM_FLAG_8 | STREAM_LOOP : STREAM_FLAG_8,
                     music_StartBodyCB);
}

// 0x011cbb4 (0x114 bytes)
// Plays transition piece `transition` on its own stream; `track` is what follows it.
int music_Transition(int track, int transition, int flags, int vol)
{
    char path[264];

    if (g_TransitionPlaying.handle != 0) {
        return 0;
    }

    music_ClaimStream(&g_TransitionPlaying, track, flags, vol, 1);
    sprintf(path, MUSIC_FILE, Level, transition);
    music_PlayStream(&g_TransitionPlaying, path, g_TransitionPlaying.volume, VOLGROUP_MUSIC, 0, STREAM_FLAG_8,
                     music_StartCB);
    return 1;
}

// 0x011ccc8 (0x54 bytes)
void music_SetTransition(int track, int transition)
{
    if (g_MusicPlaying.track == track && g_PendingTrack == NO_TRACK) {
        return;
    }

    if (g_MusicPlaying.status == MUSIC_IDLE && g_TransitionPlaying.status == MUSIC_IDLE) {
        g_MusicPlaying.track = (short)track;
    }
    else {
        g_PendingTrack = (signed char)track;
        g_PendingTransition = (signed char)transition;
    }
}

// 0x011cd1c (0x104 bytes)
void music_Stop(void)
{
    while (g_MusicPlaying.handle == -1) {
        STUB_00505d20();
    }
    while (g_TransitionPlaying.handle == -1) {
        STUB_00505d20();
    }
    while (g_SpeechPlaying.handle == -1) {
        STUB_00505d20();
    }

    snd_StopAllStreams();
    while (STUB_00505d20() != 0) {
    }
    FUN_005066c4(1);

    g_MusicPlaying.status = MUSIC_IDLE;
    g_MusicPlaying.flags = 0;
    g_MusicPlaying.handle = 0;
    if (g_PendingTrack != NO_TRACK) {
        g_MusicPlaying.track = g_PendingTrack;
    }

    g_SpeechPlaying.status = MUSIC_IDLE;
    g_SpeechPlaying.flags = 0;
    g_SpeechPlaying.handle = 0;
    g_TransitionPlaying.status = MUSIC_IDLE;
    g_TransitionPlaying.flags = 0;
    g_TransitionPlaying.handle = 0;

    g_TransitionState = 0;
    g_PendingTrack = NO_TRACK;
    g_PendingTransition = NO_TRACK;
}

// 0x011ce20 (0x44 bytes)
void music_Pause(int speech)
{
    if (speech != 0) {
        g_SpeechPlaying.pause = (short)MUSIC_PAUSED;
        g_SpeechPlaying.unpause = 0;
    }

    g_MusicPlaying.pause = (short)MUSIC_PAUSED;
    g_MusicPlaying.unpause = 0;
    g_TransitionPlaying.pause = (short)MUSIC_PAUSED;
    g_TransitionPlaying.unpause = 0;
}

// 0x011ce64 (0x1c bytes)
void music_Unpause(void)
{
    g_MusicPlaying.pause = 4;
    g_TransitionPlaying.pause = 4;
    g_SpeechPlaying.pause = 4;
}

// 0x011ce80 (0x48 bytes)
// Unpauses the paused streams after `time` frames (counted down in music_UpdateStream).
void music_UnpauseDelay(int time)
{
    if (g_MusicPlaying.pause & MUSIC_PAUSED) {
        g_MusicPlaying.unpause = (short)time;
    }
    if (g_TransitionPlaying.pause & MUSIC_PAUSED) {
        g_TransitionPlaying.unpause = (short)time;
    }
    if (g_SpeechPlaying.pause & MUSIC_PAUSED) {
        g_SpeechPlaying.unpause = (short)time;
    }
}

// 0x011cec8 (0x1c0 bytes)
// Per-frame stream housekeeping: stops, pausing, and the buffered / still-playing polls.
void music_UpdateStream(music_Playing *stream)
{
    u16 status = stream->status;
    int handle = stream->handle;

    if (status == MUSIC_BODY_STARTING || handle == 0 || handle == -1) {
        if (status == MUSIC_STOPPED || handle == 0) {
            stream->status = MUSIC_IDLE;
        }
        return;
    }

    if (status == MUSIC_STOP) {
        snd_StopVAGStream(handle);
        handle = stream->handle;
        stream->status = MUSIC_STOPPING;
    }

    if (handle == 0) {
        return;
    }

    /* status is the value read on entry */
    if (stream->pause & MUSIC_PAUSED) {
        if (!(status & MUSIC_PAUSED)) {
            snd_PauseVAGStream(handle);
            stream->status |= MUSIC_PAUSED;
        }
        if (FastDecTimerS16((u16 *)&stream->unpause) == 2) {
            stream->pause = 4;
        }
    }
    else if (status & MUSIC_PAUSED) {
        snd_ContinueVAGStream(handle);
        stream->status ^= MUSIC_PAUSED;
    }

    status = stream->status;
    if ((status & MUSIC_PAUSED) || status == MUSIC_STARTING || status == MUSIC_HEAD_READY ||
        status == MUSIC_BODY_STARTING) {
        return;
    }

    if (status == MUSIC_BUFFERING || status == MUSIC_BUFFERED) {
        if (stream->handle != -1 && status == MUSIC_BUFFERING) {
            snd_IsVAGStreamBuffered_CB(stream->handle, music_FreshenCB, (u64)stream);
        }
        return;
    }

    handle = stream->handle;
    stream->handle = -1;
    snd_GetVAGStreamTimeRemaining_CB(handle, music_TimeRemainingCB, (u64)stream);
    snd_SoundIsStillPlaying_CB(handle, music_StopCB, (u64)stream);
}

// 0x011d088 (0x15c bytes)
// Debug path: reads sectors straight out of the host PC's game.wad.
int music_LoadFromHostWad(void *dest, int sector, int numSectors)
{
    char path[72];

    if (g_MusicLoading != 0 || numSectors == 0) {
        return 0;
    }

    sprintf(path, HOST_WAD_FILE);
    int file = HostOpen(path, 0);
    if (file < 0) {
        return 0;
    }

    if (HostSeek(file, 0, HOST_SEEK_END) <= (numSectors + sector - 1) * SECTOR_SIZE) {
        HostClose(file);
        return 0;
    }

    HostSeek(file, sector << SECTOR_SHIFT, HOST_SEEK_SET);
    int size = numSectors << SECTOR_SHIFT;
    if (HostRead(file, dest, size) <= (numSectors - 1) * SECTOR_SIZE) {
        HostClose(file);
        return 0;
    }

    HostClose(file);
    g_MusicLoading = 1;
    return size;
}

// 0x011d1f0 (0x7f0 bytes)
// Once per frame: starts the head and body of the level track, runs a pending transition,
// starts pending speech, fades between tracks, updates the streams and retries host loads.
void music_Update(void)
{
    if (g_FinishedLoading != 0) {
        return;
    }

    if (g_MusicLoading != 0) {
        g_MusicLoading--;
    }

    /* start the level track, then queue its body once the head is going */
    if (!(g_MusicPlaying.pause & MUSIC_PAUSED) && !(g_MusicPlaying.status & MUSIC_PAUSED)) {
        if (g_MusicPlaying.handle == 0 && (g_MusicPlaying.flags & MUSIC_FLAG_HAS_BODY) &&
            g_PendingTrack == NO_TRACK) {
            music_StartTrack(g_MusicPlaying.track, g_MusicPlaying.flags, g_MusicPlaying.volume);
        }
        else if (g_MusicPlaying.status == MUSIC_HEAD_READY) {
            music_StartTrackBody(g_MusicPlaying.track, g_MusicPlaying.flags, g_MusicPlaying.volume);
        }
    }

    /* a pending track change: play its transition piece, then wait before changing again */
    if (FastDecTimerS32(&g_TransitionTimer) != 0 && g_PendingTrack != NO_TRACK && g_TransitionState == 0) {
        if (g_MusicPlaying.track == g_PendingTrack) {
            g_PendingTrack = NO_TRACK;
        }
        else if (g_PendingTransition == NO_TRACK ||
                 music_Transition(g_PendingTrack, g_PendingTransition, g_MusicPlaying.flags,
                                  g_MusicPlaying.volume)) {
            int delay = (int)(animationSpeed * TRANSITION_DELAY_SECONDS);
            g_TransitionTimer = (int)((float)delay * FRAMES_PER_SECOND);
        }
    }

    if (g_PendingSpeech > NO_SPEECH) {
        if (g_SpeechPlaying.handle == 0) {
            music_StartSpeech(g_PendingSpeech, 0, 0x400);
            g_PendingSpeech = NO_SPEECH;
        }
        else if (g_SpeechPlaying.status != MUSIC_STOPPED && g_SpeechPlaying.status != MUSIC_STOPPING) {
            g_SpeechPlaying.status = MUSIC_STOP;
        }
    }

    /* the cross-fade, driven by the transition piece's time remaining */
    int handle = g_MusicPlaying.handle;
    bool transitionAlive = (g_TransitionPlaying.status == MUSIC_PLAYING && g_TransitionPlaying.transition != 0) ||
                           g_TransitionPlaying.handle != 0;
    if (g_MusicPlaying.status != MUSIC_BODY_STARTING && handle != -1 && !(g_MusicPlaying.pause & MUSIC_PAUSED) &&
        !(g_MusicPlaying.status & MUSIC_PAUSED) && !(g_TransitionPlaying.pause & MUSIC_PAUSED) &&
        !(g_TransitionPlaying.status & MUSIC_PAUSED)) {
        switch (g_TransitionState) {
        case 2: {
            /* fade the old track out over g_TransitionFadeTime */
            int elapsed = g_TransitionRemainStart - g_TransitionPlaying.remain;
            int vol = g_MusicPlaying.volume * (g_TransitionFadeTime - elapsed) / g_TransitionFadeTime;

            if (vol < 1 || !transitionAlive || g_MusicPlaying.handle == 0) {
                g_TransitionState = 3;
                g_MusicPlaying.status = MUSIC_STOP;
            }
            else if (g_MusicPlaying.status != MUSIC_BODY_STARTING) {
                g_MusicPlaying.handle = -1;
                snd_SetSoundParams_CB(handle, SOUND_PARAM_VOLUME, vol, 0, 0, 0, music_StopCB, (u64)&g_MusicPlaying);
            }
            break;
        }

        case 3:
            /* old track gone: preseek the new one */
            if (g_MusicPlaying.status == MUSIC_IDLE &&
                (g_TransitionPlaying.transition != 0 || g_TransitionPlaying.handle == 0)) {
                music_PreseekTrack(g_PendingTrack, g_MusicPlaying.flags, g_MusicPlaying.volume);
                g_PendingTrack = NO_TRACK;
                g_TransitionState = 4;
            }
            break;

        case 4:
            /* start the new track as the transition piece runs out */
            if (g_MusicPlaying.status == MUSIC_BUFFERED &&
                (g_TransitionPlaying.remain < g_TransitionFadeTime || g_TransitionPlaying.status != MUSIC_PLAYING ||
                 (g_TransitionPlaying.transition == 0 && g_TransitionPlaying.handle == 0))) {
                snd_ContinueVAGStream(g_MusicPlaying.handle);
                g_MusicPlaying.status = MUSIC_HEAD_READY;
                g_TransitionState = 5;
            }
            break;

        case 5:
            if (g_TransitionPlaying.status != MUSIC_PLAYING || g_TransitionPlaying.transition == 0) {
                g_TransitionState = 0;
            }
            break;
        }
    }

    music_UpdateStream(&g_MusicPlaying);
    music_UpdateStream(&g_TransitionPlaying);
    music_UpdateStream(&g_SpeechPlaying);

    /* host loads: 2 means retry */
    if (g_MusicLoadStop) {
        if (STUB_005066bc_RET_0(1) == 0) {
            g_MusicLoading = 0;
            g_MusicLoadStop = 0;
        }
    }
    else if (g_MusicLoading == 2) {
        g_MusicLoading = 0;
        music_LoadFromHostWad(g_MusicLoadBuffer, g_MusicLoadSector, g_MusicLoadSectors);
        if (g_MusicLoading == 0) {
            g_MusicLoading = 2;
        }
    }
}

// 0x011d9e0 (0x48 bytes)
void music_StopLoad(void)
{
    if (g_MusicLoading != 0) {
        snd_StreamSafeCdBreak();
        g_MusicLoadStop = 1;
    }
}

// 0x011da28 (0x2c bytes)
void music_Reset(void)
{
    DAT_009636c0 = 0;
    DAT_009636c4 = 0;
    g_FinishedLoading = 1;
    g_MusicLoading = 0;
}

// 0x011da54 (0x178 bytes)
// As music_LoadFromHostWad, but a read that returns data leaves g_MusicLoading clear.
int music_LoadFromHostWad_v2(void *dest, int sector, int numSectors)
{
    char path[64];

    if (g_MusicLoading != 0 || numSectors == 0) {
        return 0;
    }

    sprintf(path, HOST_WAD_FILE);
    int file = HostOpen(path, 0);
    if (file < 0) {
        return 0;
    }

    if (HostSeek(file, 0, HOST_SEEK_END) <= (numSectors + sector - 1) * SECTOR_SIZE) {
        HostClose(file);
        return 0;
    }

    HostSeek(file, sector << SECTOR_SHIFT, HOST_SEEK_SET);
    int size = numSectors << SECTOR_SHIFT;
    if (HostRead(file, dest, size) <= (numSectors - 1) * SECTOR_SIZE) {
        HostClose(file);
        return 0;
    }

    HostClose(file);
    g_MusicLoading = 1;
    if (size != 0) {
        g_MusicLoading = 0;
    }
    return size;
}

// 0x011dbcc (0x48 bytes)
void music_Sync(int block)
{
    music_Update();
    STUB_00505f4c();
    STUB_00505d20();
    STUB_00505f50();
    g_MusicLoading = 0;
}

// 0x011dc14 (0x5c bytes)
void music_CdCB(int reason)
{
    if (reason != CD_REASON_READY) {
        return;
    }

    g_MusicLoading = 0;
    if (snd_StreamSafeCdGetError() != CD_STATUS_BUSY) {
        g_MusicLoading = 2;
    }
}

// 0x011dc70 (0x28 bytes)
void music_FreshenCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream != NULL && retVal != 0 && stream->status == MUSIC_BUFFERING) {
        stream->status = MUSIC_BUFFERED;
    }
}

// 0x011dc98 (0x6c bytes)
// A failed speech request is simply asked for again.
void music_SpeechPreseekCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    stream->handle = retVal;
    if (retVal == 0) {
        music_StartSpeech(g_SpeechPlaying.track, g_SpeechPlaying.flags, g_SpeechPlaying.volume);
    }
    else if (stream->status == MUSIC_STARTING) {
        stream->status = MUSIC_BUFFERING;
    }
}

// 0x011dd04 (0x114 bytes)
void music_PreseekCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    stream->handle = retVal;
    if (retVal == 0) {
        music_PreseekTrack(g_MusicPlaying.track, g_MusicPlaying.flags, g_MusicPlaying.volume);
    }
    else if (stream->status == MUSIC_STARTING) {
        stream->status = MUSIC_BUFFERING;
    }
}

// 0x011de18 (0x54 bytes)
void music_StartCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    stream->handle = retVal;
    if (retVal == 0) {
        stream->status = MUSIC_IDLE;
    }
    else if (stream->status == MUSIC_STARTING) {
        stream->status = MUSIC_PLAYING;
        if (stream->transition != 0) {
            g_TransitionState = 1;
        }
    }
}

// 0x011de6c (0x60 bytes)
// The body is queued on the head's handle, so the handle only changes on an error.
void music_StartBodyCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    if ((int)retVal < 0) {
        stream->handle = retVal;
    }

    if (retVal == 0) {
        stream->status = MUSIC_IDLE;
    }
    else if (stream->status == MUSIC_BODY_STARTING) {
        stream->status = MUSIC_PLAYING;
        if (stream->transition != 0) {
            g_TransitionState = 1;
        }
    }
}

// 0x011decc (0x38 bytes)
void music_PreseekTrackCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    stream->handle = retVal;
    if (retVal == 0) {
        stream->status = MUSIC_IDLE;
    }
    else if (stream->status == MUSIC_STARTING) {
        stream->status = MUSIC_HEAD_READY;
    }
}

// 0x011df04 (0x58 bytes)
void music_StopCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    if (stream->handle != -1) {
        printf("wtf\n");
        return;
    }

    stream->handle = retVal;
    if (retVal == 0) {
        stream->status = MUSIC_STOPPED;
    }
}

// 0x011df5c (0x10 bytes)
void music_QueueLengthCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream != NULL) {
        stream->queuelen = retVal;
    }
}

// 0x011df6c (0x58 bytes)
// The transition piece's first time report starts the fade: it lasts the last quarter.
void music_TimeRemainingCB(u32 retVal, u64 data)
{
    music_Playing *stream = (music_Playing *)data;

    if (stream == NULL) {
        return;
    }

    stream->remain = retVal;
    if (stream->transition != 0 && g_TransitionState == 1 && retVal != 0) {
        g_TransitionState = 2;
        g_TransitionRemainStart = stream->remain;
        g_TransitionFadeTime = stream->remain / 4;
    }
}

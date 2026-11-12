#pragma once
// game/music.h
#include "types.h"

// ---- types
struct music_Playing { /* DL struct music_Playing (PS3 is 0x1c, no pMoby/channel/timer); instances at 0x963708/0x963724/0x963740 */
    int handle;
    short track;
    short volume;
    short flags;
    short status;
    short pause;
    short unpause;
    short transition;
    short fade;
    int queuelen;
    int remain;
};

// ---- globals
extern undefined4 DAT_00729554; /* 0x729554 */
extern undefined4 DAT_009636c4; /* 0x9636c4 */
extern undefined4 DAT_009636c8; /* 0x9636c8 */
extern undefined1 DAT_009636d2; /* 0x9636d2 */
extern undefined4 DAT_009636d4; /* 0x9636d4 */
extern undefined4 DAT_009636d8; /* 0x9636d8 */
extern undefined4 DAT_009636dc; /* 0x9636dc */
extern undefined4 DAT_009636f8; /* 0x9636f8 */
extern undefined4 DAT_009636fc; /* 0x9636fc */
extern undefined4 DAT_00963700; /* 0x963700 */
extern undefined4 DAT_00963704; /* 0x963704 */
extern undefined2 Music; /* 0x9636d0 */
extern undefined1 MusicId; /* 0x9636eb */
extern pointer PTR_PTR_00905664; /* 0x905664 */
extern pointer32 PTR_music_CdCB_00706db0; /* 0x706db0 */
extern pointer32 PTR_music_FreshenCB_00706db8; /* 0x706db8 */
extern pointer32 PTR_music_StopCB_00706de8; /* 0x706de8 */
extern pointer32 PTR_music_TimeRemainingCB_00706df8; /* 0x706df8 */
extern undefined g_LevelMusicFileSizes; /* 0x10ea770 */
extern music_Playing g_MusicPlaying; /* 0x963708 */
extern undefined1 g_PendingTrack; /* 0x9636ea */
extern music_Playing g_SpeechPlaying; /* 0x963724 */
extern undefined4 g_TransitionFadeTime; /* 0x9636f0 */
extern music_Playing g_TransitionPlaying; /* 0x963740 */
extern undefined4 g_TransitionRemainStart; /* 0x9636ec */
extern undefined2 g_TransitionState; /* 0x9636e8 */
extern undefined4 g_TransitionTimer; /* 0x9636f4 */
extern char s_efgsij_007295d0[7]; /* 0x7295d0 */

// ---- functions
void SECTION_HEADER_MUSIC(void);
void music_UppercaseCdromPath(char *path);
void music_LoadCoreBank(void);
void music_Init(void);
void InitLevelMusicFileSizes(void);
void music_StartSpeech_Helpgirl(int id,int flags,int vol);
void music_StartSpeech_Qwark(int id,int flags,int vol);
void music_StartSpeech_Space(int id,int flags,int vol);
void music_StartSpeech_Help(int id,int flags,int vol);
void music_StartSpeech_Bindata(int id,int flags,int vol);
void music_StartSpeech_Vendor(int id,int flags,int vol);
void music_StartSpeech(int id,int flags,int vol);
int music_PlayPreseekedSpeech(void);
void music_PreseekTrack(int track,int flags,int vol);
void music_StartTrack(int track,int flags,int vol);
void music_StartTrackBody(int track,int flags,int vol);
int music_Transition(int track,int transition,int flags,int vol);
void music_SetTransition(int track,int transition);
void music_Stop(void);
void music_Pause(int speech);
void music_Unpause(void);
void music_UnpauseDelay(int time);
void music_UpdateStream(music_Playing *stream);
int music_LoadFromHostWad(void *dest,int sector,int numSectors);
void LoadMusic(void);
void music_StopLoad(void);
void music_Reset(void);
int music_LoadFromHostWad_v2(void *dest,int sector,int numSectors);
void LoadMusic2(int block);
void music_CdCB(int reason);
void music_FreshenCB(int ret_val,music_Playing *mp);
void music_SpeechPreseekCB(int ret_val,music_Playing *mp);
void music_PreseekCB(int ret_val,music_Playing *mp);
void music_StartCB(int ret_val,music_Playing *mp);
void music_StartBodyCB(int ret_val,music_Playing *mp);
void music_PreseekTrackCB(int ret_val,music_Playing *mp);
int music_StopCB(int ret_val,music_Playing *mp);
void music_QueueLengthCB(int ret_val,music_Playing *mp);
void music_TimeRemainingCB(int ret_val,music_Playing *mp);

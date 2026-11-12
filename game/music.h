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
extern int DAT_009636c4; /* 0x9636c4 */ /* type set in global_types.tsv */
extern undefined4 DAT_009636c8; /* 0x9636c8 */
extern undefined4 DAT_009636f8; /* 0x9636f8 */
extern undefined4 DAT_009636fc; /* 0x9636fc */
extern undefined4 DAT_00963700; /* 0x963700 */
extern undefined4 DAT_00963704; /* 0x963704 */
extern undefined4 Help; /* 0x7208b0 */
extern int g_LevelMusicFileSizes[15]; /* 0x10ea770 */ /* type set in global_types.tsv */
extern void *g_MusicLoadBuffer; /* 0x9636dc */ /* type set in global_types.tsv */
extern int g_MusicLoadSector; /* 0x9636d4 */ /* type set in global_types.tsv */
extern int g_MusicLoadSectors; /* 0x9636d8 */ /* type set in global_types.tsv */
extern char g_MusicLoadStop; /* 0x9636d2 */ /* type set in global_types.tsv */
extern short g_MusicLoading; /* 0x9636d0: DL music_Globals.loading; 2 = retry the host load */ /* type set in global_types.tsv */
extern music_Playing g_MusicPlaying; /* 0x963708 */
extern signed char g_PendingTrack; /* 0x9636ea */ /* type set in global_types.tsv */
extern signed char g_PendingTransition; /* 0x9636eb: transition piece for g_PendingTrack */ /* type set in global_types.tsv */
extern music_Playing g_SpeechPlaying; /* 0x963724 */
extern int g_TransitionFadeTime; /* 0x9636f0 */ /* type set in global_types.tsv */
extern music_Playing g_TransitionPlaying; /* 0x963740 */
extern int g_TransitionRemainStart; /* 0x9636ec */ /* type set in global_types.tsv */
extern short g_TransitionState; /* 0x9636e8 */ /* type set in global_types.tsv */
extern int g_TransitionTimer; /* 0x9636f4 */ /* type set in global_types.tsv */
extern char s_efgsij_007295d0[7]; /* 0x7295d0 */

// ---- functions
void SECTION_HEADER_MUSIC(void);
void music_UppercaseCdromPath(char *path);
void music_LoadCoreBank(void);
void music_Init(void);
void InitLevelMusicFileSizes(void);
void music_StartSpeech_Helpgirl(int id, int flags, int vol);
void music_StartSpeech_Qwark(int id, int flags, int vol);
void music_StartSpeech_Space(int id, int flags, int vol);
void music_StartSpeech_Help(int id, int flags, int vol);
void music_StartSpeech_Bindata(int id, int flags, int vol);
void music_StartSpeech_Vendor(int id, int flags, int vol);
void music_StartSpeech(int id, int flags, int vol);
int music_PlayPreseekedSpeech(void);
void music_PreseekTrack(int track, int flags, int vol);
void music_StartTrack(int track, int flags, int vol);
void music_StartTrackBody(int track, int flags, int vol);
int music_Transition(int track, int transition, int flags, int vol);
void music_SetTransition(int track, int transition);
void music_Stop(void);
void music_Pause(int speech);
void music_Unpause(void);
void music_UnpauseDelay(int time);
void music_UpdateStream(music_Playing *stream);
int music_LoadFromHostWad(void *dest, int sector, int numSectors);
void music_Update(void);
void music_StopLoad(void);
void music_Reset(void);
int music_LoadFromHostWad_v2(void *dest, int sector, int numSectors);
void music_Sync(int block);
void music_CdCB(int reason);
void music_FreshenCB(u32 retVal, u64 data);
void music_SpeechPreseekCB(u32 retVal, u64 data);
void music_PreseekCB(u32 retVal, u64 data);
void music_StartCB(u32 retVal, u64 data);
void music_StartBodyCB(u32 retVal, u64 data);
void music_PreseekTrackCB(u32 retVal, u64 data);
void music_StopCB(u32 retVal, u64 data);
void music_QueueLengthCB(u32 retVal, u64 data);
void music_TimeRemainingCB(u32 retVal, u64 data);

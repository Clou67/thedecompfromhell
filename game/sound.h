#pragma once
// game/sound.h
#include "types.h"

// ---- types
struct SoundData { /* sound channel slot (DL _sound_data), 30 slots at 0x9637d0 */
    int handle;
    char state;
    char flags;
    undefined field3_0x6;
    undefined field4_0x7;
    void *pSoundDef;
    short bank_id;
    short sound_index;
    int vol;
    int pitch;
    struct MobyInstance *pMoby;
    void *pSoundInstance;
    float pos[4];
    float offset[4];
    int unk_40;
    undefined field15_0x44;
    undefined field16_0x45;
    undefined field17_0x46;
    undefined field18_0x47;
    undefined field19_0x48;
    undefined field20_0x49;
    undefined field21_0x4a;
    undefined field22_0x4b;
    undefined field23_0x4c;
    undefined field24_0x4d;
    undefined field25_0x4e;
    undefined field26_0x4f;
    undefined field27_0x50;
    undefined field28_0x51;
    undefined field29_0x52;
    undefined field30_0x53;
    undefined field31_0x54;
    undefined field32_0x55;
    undefined field33_0x56;
    undefined field34_0x57;
    undefined field35_0x58;
    undefined field36_0x59;
    undefined field37_0x5a;
    undefined field38_0x5b;
    undefined field39_0x5c;
    undefined field40_0x5d;
    undefined field41_0x5e;
    undefined field42_0x5f;
    undefined field43_0x60;
    undefined field44_0x61;
    undefined field45_0x62;
    undefined field46_0x63;
    undefined field47_0x64;
    undefined field48_0x65;
    undefined field49_0x66;
    undefined field50_0x67;
    undefined field51_0x68;
    undefined field52_0x69;
    undefined field53_0x6a;
    undefined field54_0x6b;
    undefined field55_0x6c;
    undefined field56_0x6d;
    undefined field57_0x6e;
    undefined field58_0x6f;
};

struct soundGlobals {
    float sfxVolume;
    float musicVolume;
    float dialogVolume;
    float ambientVolume;
    float shellVolume;
    float mpegVolume;
};

struct SoundVTable {
    uint idx;
    void *update;
};

// ---- globals
extern undefined4 DAT_00731be8; /* no defined data */
extern undefined1 DAT_00963760; /* 0x963760 */
extern undefined1 DAT_00963764; /* 0x963764 */
extern undefined1 DAT_00963768; /* 0x963768 */
extern undefined1 DAT_0096376c; /* 0x96376c */
extern undefined4 DAT_009637a0; /* 0x9637a0 */
extern undefined4 DAT_009637c0; /* 0x9637c0 */
extern undefined4 DAT_009637c4; /* 0x9637c4 */
extern undefined1 DAT_009637c8; /* 0x9637c8 */
extern undefined1 DAT_009637c9; /* 0x9637c9 */
extern undefined1 DAT_009637ca; /* 0x9637ca */
extern undefined4 DAT_009637cc; /* 0x9637cc */
extern undefined4 DAT_009644f8; /* 0x9644f8 */
extern undefined4 DAT_00964500; /* no defined data */
extern pointer32 PTR_sound_FreshenCB_00707c48; /* 0x707c48 */
extern pointer32 PTR_sound_PlayCB_00707c40; /* 0x707c40 */
extern SoundVTable g_SoundVTable[7]; /* 0x92d3fc */
extern int g_CoreSoundCnt; /* 0x71fbd0 */
extern SoundData g_SoundChannels[30]; /* 0x9637d0 */
extern undefined4 g_SoundCnt; /* 0x9644f0 */
extern int g_SoundLoadBusy; /* 0x9637a4 */
extern int g_TotalSoundDefCnt; /* 0xa10730 */
extern undefined4 g_pSoundDefs; /* 0xa10734 */
extern undefined4 g_pSoundInstances; /* 0x9644f4 */
extern soundGlobals g_soundGlobals; /* 0x9637a8 */

// ---- functions
void sound_CamOfs(float *cam_ofs_pos);
void sound_Occl(int param_1,undefined8 param_2);
int sound_GetFade(float dist,float minRange,float maxRange,void *sd);
int sound_GetFade_channel(SoundData *channel,float *soundPos);
void sound_GetPan(undefined8 param_1,float *param_2,float *param_3);
void sound_Init(void);
undefined8 sound_Update(void);
int IsMobyPlayingSound(MobyInstance *pMoby,int handle);
undefined8 sound_LoadLevelWadDebug(longlong param_1);
void ____Unused_SetStride20Field1c(int param_1,undefined4 param_2,int param_3);
void sound_Kill(int handle);
int sound_Play(void *sd,int flags,MobyInstance *pMoby,float *pos,int vol_mod);
int PlayMobySound(int sound,int flags,MobyInstance *pMoby);
int sound_MobyPlay_oClass(int sound,int flags,MobyInstance *pMoby,int oClass);
int sound_CorePlay(int sound,int flags,MobyInstance *pMoby);
int sound_LevelPlay(int sound,int flags,MobyInstance *pMoby);
int sound_AmbientPlay(int sound,int flags,void *pSoundInstance,int vol_mod);
int sound_FootstepPlay (int ground_type,int right_foot,int magneboots,int flags,MobyInstance *pMoby);
int sound_SetOffset(int handle,float *offset);
int sound_AddOffset(int handle,float *offset);
int sound_ClearOffset(int handle);
int sound_SetVol(int handle,int vol);
int sound_SetPitch(int handle,int pitch);
void sound_SetupAmbientFunctions(short *param_1);
void sound_UpdateAmbient(void);
void sound_SetReverb(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5);
void sound_StopAllSounds(void);
void sound_BasicCB(int ret_val,int *data);
void sound_PlayCB(int ret_val,SoundData *data);
void sound_FreshenCB(int ret_val,SoundData *data);

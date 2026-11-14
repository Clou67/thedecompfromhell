#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/sound.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/update.h"
#include "idol/audio.h"
#include "idol/fastfunc.h"
#include "idol/sound.h"
#include "sdk/libscream/common/api.h"
#include "idol/fastinline.h"

/* SoundData.state */
enum {
    SOUND_STATE_FREE = 0,
    SOUND_STATE_STARTING = 1,      /* play command sent, waiting for sound_PlayCB */
    SOUND_STATE_PLAYING = 2,
    SOUND_STATE_KILL = 4,          /* sound_Kill: stop it next update */
    SOUND_STATE_STOPPING = 6,
    SOUND_STATE_NEW = 7,           /* sound_Play: start it next update */
};

/* SoundData.flags */
enum {
    SOUND_FLAG_NO_PAN = 0x01,      /* no pan or doppler */
    SOUND_FLAG_CULL = 0x04,        /* stop once it fades out (required for looping sounds) */
    SOUND_FLAG_NO_FOLLOW = 0x08,   /* stays where it started instead of following pMoby */
    SOUND_FLAG_NO_FADE = 0x10,     /* no distance fade */
    SOUND_FLAG_NO_DOPPLER = 0x20,
    SOUND_FLAG_OFFSET = 0x40,      /* pos is pMoby's transform applied to offset */
};

/* SoundDef.flags */
enum {
    SOUNDDEF_FLAG_SQUARED_FADE = 0x01,
    SOUNDDEF_FLAG_NO_OCCLUSION = 0x02,
    SOUNDDEF_FLAG_NO_WATER_MUFFLE = 0x04,
    SOUNDDEF_FLAG_NO_WATER_PITCH = 0x08,
};

/* what sound_Update has to tell Scream about a channel this frame */
enum {
    SOUND_UPD_VOL = 0x01,
    SOUND_UPD_PAN = 0x02,
    SOUND_UPD_DOPPLER = 0x04,
    SOUND_UPD_OCCLUSION = 0x08,
    SOUND_UPD_POLL = 0x10,         /* only check it is still playing */
    SOUND_UPD_STOP = 0x20,
};

#define SOUND_CHANNEL_CNT 30
#define SOUND_CHANNEL_CNT_LOW 26   /* what sounds of other mobys may use */
#define SOUND_PROBE_CNT 6
#define SOUND_OCCL_CNT 36
#define SOUND_COLL_FLAGS 0x82

/* SoundDef.index of an unused sound */
#define SOUND_NO_INDEX(def) ((def)->index < 0)

static inline float SoundDistToCamera(float *pos)
{
    float dx = pos[0] - GameCamera.posX;
    float dy = pos[1] - GameCamera.posY;
    float dz = pos[2] - GameCamera.posZ;

    return sqrtf(dz * dz + dx * dx + dy * dy);
}

static inline int SoundCollLine(float *from, float *to, MobyInstance *ignore)
{
    return (int)CollLine(from, to, SOUND_COLL_FLAGS, ignore, NULL);
}

/* the volume a blocked line-of-sight count leaves: full up to half blocked, then down to 0 */
static inline int SoundOccludedVol(int blocked, int vol)
{
    if (blocked >= SOUND_OCCL_CNT) {
        return 0;
    }

    if (blocked > SOUND_OCCL_CNT / 2) {
        return ((SOUND_OCCL_CNT - blocked) * vol) / (SOUND_OCCL_CNT / 2);
    }

    return vol;
}

static inline void SoundClearChannels(void)
{
    for (int i = 0; i < 4; i++) {
        FastMemSet(&g_SoundCamHistory[i], 0, sizeof(Vec4));
    }

    g_SoundCamHistoryIdx = 0;

    for (int i = 0; i < SOUND_CHANNEL_CNT; i++) {
        g_SoundChannels[i].handle = 0;
        g_SoundChannels[i].state = SOUND_STATE_FREE;
    }
}

static inline void SoundClearOffset(SoundData *channel)
{
    FastMemSet(channel->offset, 0, sizeof(channel->offset));
}

/* a random point 0.5-6 units around the camera, pulled in from any wall in the way */
void sound_CamOfs(float *camOfsPos)
{
    MB_randVector(0.5f, 6.0f, (Vec4 *)camOfsPos);
    camOfsPos[0] += GameCamera.posX;
    camOfsPos[1] += GameCamera.posY;
    camOfsPos[2] += GameCamera.posZ;

    if (SoundCollLine(&GameCamera.posX, camOfsPos, g_SoundCamOfsIgnore) != 0) {
        camOfsPos[0] = (g_CollOutput.ip.x - GameCamera.posX) * 0.75f + GameCamera.posX;
        camOfsPos[1] = (g_CollOutput.ip.y - GameCamera.posY) * 0.75f + GameCamera.posY;
        camOfsPos[2] = (g_CollOutput.ip.z - GameCamera.posZ) * 0.75f + GameCamera.posZ;
        camOfsPos[3] = g_CollOutput.ip.w;
    }
}

/* is the line from `from` toward the channel blocked; the far end is at most 64 units out */
int sound_Occl(SoundData *channel, float *from)
{
    Vec4 to;

    to.x = (channel->pos[0] - GameCamera.posX) * 0.75f;
    to.y = (channel->pos[1] - GameCamera.posY) * 0.75f;
    to.z = (channel->pos[2] - GameCamera.posZ) * 0.75f;
    to.w = channel->pos[3];

    float len = sqrtf(to.x * to.x + to.y * to.y + to.z * to.z);
    if (len > 64.0f) {
        float scale = 64.0f / len;

        to.x *= scale;
        to.y *= scale;
        to.z *= scale;
    }

    to.x += GameCamera.posX;
    to.y += GameCamera.posY;
    to.z += GameCamera.posZ;

    return SoundCollLine(from, &to.x, channel->pMoby);
}

/* the volume at `dist`: maxVolume inside minRange, minVolume past maxRange */
int sound_GetFade(float dist, float minRange, float maxRange, SoundDef *def)
{
    if (dist <= minRange) {
        return def->maxVolume;
    }

    if (dist >= maxRange) {
        return def->minVolume;
    }

    float range = (float)FastIntToDouble(def->maxVolume - def->minVolume);
    float left = maxRange - dist;
    float width = maxRange - minRange;

    if (def->flags & SOUNDDEF_FLAG_SQUARED_FADE) {
        return def->minVolume + FastDoubleToInt((left * left * range) / (width * width));
    }

    return def->minVolume + FastDoubleToInt((left * range) / width);
}

int sound_GetFade_channel(SoundData *channel, float *soundPos)
{
    SoundDef *def = channel->pSoundDef;

    return sound_GetFade(SoundDistToCamera(soundPos), def->minRange, def->maxRange, def);
}

/* pan in degrees from the camera's view direction, narrowed when the sound is
   within a unit of the camera */
int sound_GetPan(SoundData *channel, float *pos, Mtx4 *viewMtx)
{
    float *mtx = (float *)viewMtx;
    float dx = pos[0] - GameCamera.posX;
    float dy = pos[1] - GameCamera.posY;
    float dz = pos[2] - GameCamera.posZ;
    float side = mtx[13] * pos[3] + mtx[9] * dz + mtx[1] * dx + mtx[5] * dy;
    float front = mtx[12] * pos[3] + mtx[8] * dz + mtx[0] * dx + mtx[4] * dy;

    float near = sqrtf(front * front + side * side) - 1.0f;
    if (near < 0.0f) {
        near = 0.0f;
    }
    if (near > 1.0f) {
        near = 1.0f;
    }

    float angle = FastAtan2Inline(side, front);

    return FastDoubleToInt(-(angle * 180.0f * near * 0.31830987f));
}

void sound_Init(void)
{
    SoundClearChannels();
    g_SoundLoadBusy = 0;

    FUN_00505810();
    snd_SetPlaybackMode(g_GameSettings.Stereo ? 6 : 7);
    STUB_00506040(8, 3);
    STUB_00505f44(0, 4);
    snd_SetGroupVoiceRange(1, 0x18, 0x2f);
    snd_SetGroupVoiceRange(2, 0x18, 0x2f);
    snd_SetGroupVoiceRange(4, 0x18, 0x2f);

    int sfx = g_GameSettings.SfxVolume;
    g_soundGlobals.sfxVolume = (float)((sfx * 8) / 10);
    g_soundGlobals.dialogVolume = (float)((sfx * 8) / 10);
    g_soundGlobals.musicVolume = (float)g_GameSettings.MusicVolume;
    g_soundGlobals.mpegVolume = (float)sfx;
    g_soundGlobals.ambientVolume = (float)((sfx * 7) / 10);
    g_soundGlobals.shellVolume = (float)((sfx * 7) / 10);

    music_Init();
    sound_SetMasterVolume(0, (int)g_soundGlobals.sfxVolume);
    sound_SetMasterVolume(1, (int)g_soundGlobals.musicVolume);
    sound_SetMasterVolume(2, (int)g_soundGlobals.dialogVolume);
    sound_SetMasterVolume(3, (int)g_soundGlobals.ambientVolume);
    sound_SetMasterVolume(4, (int)g_soundGlobals.shellVolume);
    sound_SetMasterVolume(5, (int)g_soundGlobals.mpegVolume);
}

static inline void SoundUpdateReverb(void)
{
    if (g_ReverbDirty & 8) {
        snd_SetReverbEx(0, 5, 0, 0, 0);
    }
    else if (g_ReverbDirty & 0x13) {
        snd_SetReverbEx(0, g_ReverbType, g_ReverbDepth, g_ReverbDelay, g_ReverbFeedback);
    }
    else if (g_ReverbDirty & 4) {
        snd_AutoReverb(0, g_ReverbDepth, 12, 3);
    }

    g_ReverbDirty = 0;
}

/* the camera's average step over the last frames of g_SoundCamHistory, stopping at a cut */
static inline void SoundCamVelocity(Vec4 *camVel)
{
    g_SoundCamHistoryIdx = (g_SoundCamHistoryIdx + 1) % 4;
    g_SoundCamHistory[g_SoundCamHistoryIdx] = *(Vec4 *)&GameCamera.posX;

    float velX = 0.0f;
    float velY = 0.0f;
    float velZ = 0.0f;
    int cnt = 0;
    int cur = g_SoundCamHistoryIdx;

    while (true) {
        int prev = (cur + 3) % 4;
        if (prev == g_SoundCamHistoryIdx) {
            break;
        }

        float dx = g_SoundCamHistory[cur].x - g_SoundCamHistory[prev].x;
        float dy = g_SoundCamHistory[cur].y - g_SoundCamHistory[prev].y;
        float dz = g_SoundCamHistory[cur].z - g_SoundCamHistory[prev].z;
        if (g_FrameTime * 60.0f <= sqrtf(dz * dz + (dx * dx + dy * dy))) {
            break;
        }

        cnt++;
        velX += dx;
        velY += dy;
        velZ += dz;
        cur = prev;
    }

    if (cnt > 1) {
        float scale = 1.0f / (float)FastIntToDouble(cnt);

        velX *= scale;
        velY *= scale;
        velZ *= scale;
    }

    camVel->x = velX;
    camVel->y = velY;
    camVel->z = velZ;
}

static inline void SoundSetMasterVolumes(int underWater)
{
    if (g_gameMode == GAME_MODE_SCENE) {
        sound_SetMasterVolume(1, 0);
        sound_SetMasterVolume(0, (int)g_soundGlobals.sfxVolume / 2);
        sound_SetMasterVolume(3, (int)g_soundGlobals.ambientVolume / 2);
    }
    else {
        float music = g_soundGlobals.musicVolume;
        if (underWater) {
            music = (float)(((int)g_soundGlobals.musicVolume * 3) / 5);
        }

        sound_SetMasterVolume(1, (int)music);
        sound_SetMasterVolume(0, (int)g_soundGlobals.sfxVolume);
        sound_SetMasterVolume(3, (int)g_soundGlobals.ambientVolume);
    }

    sound_SetMasterVolume(2, (int)g_soundGlobals.dialogVolume);
    sound_SetMasterVolume(4, (int)g_soundGlobals.shellVolume);
    sound_SetMasterVolume(5, (int)g_soundGlobals.mpegVolume);
}

/* moves the channel to its moby and returns how far it moved */
static inline void SoundFollowMoby(SoundData *channel, Vec4 *vel)
{
    MobyInstance *moby = channel->pMoby;
    float oldX = channel->pos[0];
    float oldY = channel->pos[1];
    float oldZ = channel->pos[2];

    if ((channel->flags & SOUND_FLAG_OFFSET) == 0) {
        channel->pos[0] = moby->pos.x;
        channel->pos[1] = moby->pos.y;
        channel->pos[2] = moby->pos.z + 1.0f;
        channel->pos[3] = moby->pos.w;
    }
    else {
        Mtx4 *mtx = &moby->transform;
        float *ofs = channel->offset;

        channel->pos[0] = mtx->v2.x * ofs[2] + mtx->v0.x * ofs[0] + mtx->v1.x * ofs[1] + moby->pos.x;
        channel->pos[1] = mtx->v2.y * ofs[2] + mtx->v0.y * ofs[0] + mtx->v1.y * ofs[1] + moby->pos.y;
        channel->pos[2] = mtx->v2.z * ofs[2] + mtx->v0.z * ofs[0] + mtx->v1.z * ofs[1] + moby->pos.z;
        channel->pos[3] = mtx->v2.w * ofs[2] + mtx->v0.w * ofs[0] + mtx->v1.w * ofs[1] + ofs[3];
    }

    vel->x = channel->pos[0] - oldX;
    vel->y = channel->pos[1] - oldY;
    vel->z = channel->pos[2] - oldZ;
}

/* works out what a live channel needs this frame: its position, volume and doppler speed */
static inline int SoundUpdateChannel(SoundData *channel, Vec4 *camVel, int underWater, float waterZ,
                                     int *vol, float *doppler)
{
    MobyInstance *moby = channel->pMoby;
    int mobyDeleted = 0;

    if (moby != NULL && (moby->state == 0xfe || moby->state == 0xfd)) {
        mobyDeleted = 1;
        channel->pMoby = NULL;
    }

    char state = channel->state;
    if (state == SOUND_STATE_KILL ||
        (mobyDeleted && state != SOUND_STATE_STOPPING && channel->pSoundDef->loop != 0)) {
        return SOUND_UPD_STOP;
    }

    if (g_gameMode != GAME_MODE_SCENE && g_gameMode != GAME_MODE_NORMAL &&
        g_gameMode != GAME_MODE_SPACE && state != SOUND_STATE_NEW) {
        return SOUND_UPD_POLL;
    }

    Vec4 vel = { 0.0f, 0.0f, 0.0f, 0.0f };
    if (channel->pMoby != NULL && (channel->flags & SOUND_FLAG_NO_FOLLOW) == 0) {
        SoundFollowMoby(channel, &vel);
    }

    /* the speed toward the camera */
    float toCamX = GameCamera.posX - channel->pos[0];
    float toCamY = GameCamera.posY - channel->pos[1];
    float toCamZ = GameCamera.posZ - channel->pos[2];
    float dist2 = toCamZ * toCamZ + toCamX * toCamX + toCamY * toCamY;
    float dirX = 0.0f;
    float dirY = 0.0f;
    float dirZ = 0.0f;
    if (sqrtf(dist2) != 0.0f) {
        float inv = 1.0f / sqrtf(dist2);

        dirX = toCamX * inv;
        dirY = toCamY * inv;
        dirZ = toCamZ * inv;
    }

    *doppler = dirZ * (vel.z - camVel->z) + dirX * (vel.x - camVel->x) + dirY * (vel.y - camVel->y);

    int upd = 0;
    int fade;
    if ((channel->flags & SOUND_FLAG_NO_FADE) == 0) {
        SoundDef *def = channel->pSoundDef;

        fade = sound_GetFade(SoundDistToCamera(channel->pos), def->minRange, def->maxRange, def);
        *vol = (fade * channel->vol) / 1024;
        if ((def->flags & SOUNDDEF_FLAG_NO_OCCLUSION) == 0) {
            upd = SOUND_UPD_OCCLUSION;
        }
    }
    else {
        fade = 0x400;
        *vol = channel->vol;
    }

    if (underWater && (channel->pSoundDef->flags & SOUNDDEF_FLAG_NO_WATER_MUFFLE) == 0 &&
        waterZ < channel->pos[2]) {
        *vol /= 2;
    }

    if (fade < 32 && *vol < 32 && (channel->flags & SOUND_FLAG_CULL)) {
        return SOUND_UPD_STOP;
    }

    if (channel->flags & SOUND_FLAG_NO_PAN) {
        return upd | SOUND_UPD_VOL;
    }

    if (channel->flags & SOUND_FLAG_NO_DOPPLER) {
        return upd | SOUND_UPD_VOL | SOUND_UPD_PAN;
    }

    return upd | SOUND_UPD_VOL | SOUND_UPD_PAN | SOUND_UPD_DOPPLER;
}

/* a new sound is tested from all 6 probes at once */
static inline int SoundOcclNew(SoundData *channel)
{
    if (worldUpdateTime != g_SoundProbeTime) {
        for (int i = 0; i < SOUND_PROBE_CNT; i++) {
            sound_CamOfs(&g_SoundProbes[i].x);
        }

        g_SoundProbeTime = worldUpdateTime;
    }

    int blocked = 0;
    for (int i = 0; i < SOUND_PROBE_CNT; i++) {
        char *slots = &channel->occl[i * 6];

        slots[0] = (char)sound_Occl(channel, &g_SoundProbes[i].x);
        for (int j = 1; j < 6; j++) {
            slots[j] = slots[0];
        }

        if (slots[0] != 0) {
            blocked += 6;
        }
    }

    return blocked;
}

/* a playing sound refreshes one slot a frame, every 4th frame per channel (every 2nd
   with SOUND_FLAG_CULL); otherwise the slot repeats the one before it */
static inline void SoundOcclStep(SoundData *channel, int index, float *camOfsPos)
{
    int prev = channel->occlpos - ((channel->occlpos + 1) / SOUND_OCCL_CNT) * SOUND_OCCL_CNT;
    channel->occlpos = prev + 1;

    int due;
    if (channel->flags & SOUND_FLAG_CULL) {
        due = ((index ^ worldUpdateTime) & 1) == 0;
    }
    else {
        due = (index & 3) == (worldUpdateTime & 3);
    }

    if (!due) {
        channel->occl[prev + 1] = channel->occl[(prev + SOUND_OCCL_CNT) % SOUND_OCCL_CNT];
    }
    else {
        channel->occl[channel->occlpos] = (char)sound_Occl(channel, camOfsPos);
    }
}

int sound_Update(void)
{
    int upd[SOUND_CHANNEL_CNT];
    int vol[SOUND_CHANNEL_CNT];
    float doppler[SOUND_CHANNEL_CNT];
    Vec4 camOfsPos;
    Mtx4 viewMtx;
    Vec4 camVel;

    int underWater = GameCamera.camUnderWater;
    float waterZ = 0.0f;
    if (underWater) {
        waterZ = g_heroWaterZ;
    }

    STUB_00505d20();
    SoundUpdateReverb();

    int inWorld = (g_gameMode == GAME_MODE_NORMAL || g_gameMode == GAME_MODE_SCENE) && g_FrontEnd == 0;
    if (inWorld) {
        sound_CamOfs(&camOfsPos.x);
    }

    SoundCamVelocity(&camVel);
    SoundSetMasterVolumes(underWater);

    FastMemSet(upd, 0, sizeof(upd));
    FastMemSet(vol, 0, sizeof(vol));
    FastMemSet(doppler, 0, sizeof(doppler));

    for (int i = 0; i < SOUND_CHANNEL_CNT; i++) {
        SoundData *channel = &g_SoundChannels[i];

        if (channel->state == SOUND_STATE_NEW || (channel->handle != 0 && channel->handle != -1)) {
            upd[i] = SoundUpdateChannel(channel, &camVel, underWater, waterZ, &vol[i], &doppler[i]);
        }
    }

    for (int i = 0; i < SOUND_CHANNEL_CNT; i++) {
        SoundData *channel = &g_SoundChannels[i];

        if ((upd[i] & SOUND_UPD_OCCLUSION) == 0) {
            continue;
        }

        if (channel->state == SOUND_STATE_NEW) {
            if (inWorld) {
                vol[i] = SoundOccludedVol(SoundOcclNew(channel), vol[i]);
            }
        }
        else {
            if (inWorld) {
                SoundOcclStep(channel, i, &camOfsPos.x);
            }

            vol[i] = SoundOccludedVol(FastSumChars((byte *)channel->occl, SOUND_OCCL_CNT), vol[i]);
        }
    }

    FastNormalizeRMtx4(&viewMtx, (Mtx4 *)&GameCamera.orientMtx);

    for (int i = 0; i < SOUND_CHANNEL_CNT; i++) {
        SoundData *channel = &g_SoundChannels[i];

        if (upd[i] == 0) {
            continue;
        }

        int handle = channel->handle;
        channel->handle = -1;

        if (upd[i] & SOUND_UPD_STOP) {
            if (channel->state == SOUND_STATE_NEW) {
                channel->pMoby = NULL;
                channel->pSoundInstance = NULL;
                channel->state = SOUND_STATE_FREE;
            }
            else {
                snd_StopVAGStream(handle);
                channel->state = SOUND_STATE_STOPPING;
                snd_SoundIsStillPlaying_CB(handle, (SndCompleteProc)sound_FreshenCB, (u64)channel);
            }
            continue;
        }

        if (upd[i] & SOUND_UPD_POLL) {
            snd_SoundIsStillPlaying_CB(handle, (SndCompleteProc)sound_FreshenCB, (u64)channel);
            continue;
        }

        /* Scream's param mask: 1 pitch mod, 2 pitch bend, 4 volume, 8 pan */
        int pitch = channel->pitch;
        int mask = (pitch != 0) ? 6 : 4;
        int pan = 0;
        if (upd[i] & SOUND_UPD_PAN) {
            mask |= 8;
            pan = sound_GetPan(channel, channel->pos, &viewMtx);
        }

        int pitchMod = 0;
        if (upd[i] & SOUND_UPD_DOPPLER) {
            mask |= 1;
            pitchMod = snd_GetDopplerPitchMod(FastDoubleToInt(doppler[i] * 300.0f));
        }

        if (underWater && (channel->pSoundDef->flags & SOUNDDEF_FLAG_NO_WATER_PITCH) == 0) {
            pitchMod -= 1524;
            mask |= 1;
        }

        if (channel->state == SOUND_STATE_NEW) {
            channel->state = SOUND_STATE_STARTING;
            snd_PlaySoundVolPanPMPB_CB(channel->pSoundDef->bank_index, channel->pSoundDef->index, vol[i],
                                       pan, pitchMod, pitch, (SndCompleteProc)sound_PlayCB, (u64)channel);
        }
        else {
            snd_SetSoundParams_CB(handle, mask, vol[i], pan, pitchMod, pitch,
                                  (SndCompleteProc)sound_FreshenCB, (u64)channel);
        }
    }

    music_Update();
    STUB_00505f4c();
    STUB_00505d20();
    STUB_00505f50();
    g_SoundCamOfsIgnore = NULL;

    return 0;
}

static inline int SoundIsActive(SoundData *channel)
{
    return channel->state == SOUND_STATE_STARTING || channel->state == SOUND_STATE_PLAYING;
}

int IsMobyPlayingSound(MobyInstance *pMoby, int handle)
{
    if (handle < 0) {
        return 0;
    }

    SoundData *channel = &g_SoundChannels[handle];

    return channel->pMoby == pMoby && SoundIsActive(channel);
}

int sound_LoadLevelWadDebug(int sectors)
{
    char path[64];

    if (g_SoundLoadBusy != 0) {
        return 0;
    }

    g_SoundLoadBusy = 1;
    sprintf(path, "host0:c:\\data\\levels\\level%d\\level.wad", Level);

    int bank = snd_BankLoadByPath(path, sectors << 11);

    STUB_00505f48();
    g_SoundLoadBusy = 0;

    return bank;
}

/* unused */
void sound_SetDefsBank(SoundDef *defs, int bank, int count)
{
    while (count > 0) {
        count--;
        defs->bank_index = bank;
        defs++;
    }
}

void sound_Kill(int handle)
{
    if (handle < 0) {
        return;
    }

    SoundData *channel = &g_SoundChannels[handle];

    if (channel->state == SOUND_STATE_NEW) {
        channel->pMoby = NULL;
        channel->pSoundInstance = NULL;
        channel->state = SOUND_STATE_FREE;
    }
    else if (channel->state != SOUND_STATE_FREE && channel->state != SOUND_STATE_STOPPING) {
        channel->state = SOUND_STATE_KILL;
    }
}

/* takes a free channel for `def`; sound_Update starts it. Returns the channel or -1 */
int sound_Play(SoundDef *def, int flags, MobyInstance *pMoby, float *pos, int vol)
{
    if (SOUND_NO_INDEX(def)) {
        return -1;
    }

    /* looping sounds must be culled */
    if ((def->loop == 0) != ((flags & SOUND_FLAG_CULL) == 0)) {
        return -1;
    }

    int channelCnt = SOUND_CHANNEL_CNT_LOW;
    if (pMoby != NULL && (g_heroMobyPtr == pMoby || g_currentWeaponMoby == pMoby || pMoby->oClass == FRAME)) {
        channelCnt = SOUND_CHANNEL_CNT;
    }

    int index = 0;
    while (index < channelCnt && g_SoundChannels[index].state != SOUND_STATE_FREE) {
        index++;
    }

    if (index >= channelCnt) {
        return -1;
    }

    SoundData *channel = &g_SoundChannels[index];

    channel->bank_id = def->index;
    channel->pSoundDef = def;
    channel->sound_index = -1;
    channel->vol = vol;
    channel->pMoby = NULL;
    channel->pSoundInstance = NULL;
    SoundClearOffset(channel);

    if (pos == NULL && pMoby == NULL) {
        channel->pos[3] = 0.0f;
        channel->pos[2] = 0.0f;
        flags |= SOUND_FLAG_NO_PAN | SOUND_FLAG_NO_FADE;
        channel->pos[1] = 0.0f;
        channel->pos[0] = 0.0f;
    }
    else if (pMoby == NULL) {
        channel->pos[0] = pos[0];
        channel->pos[1] = pos[1];
        channel->pos[2] = pos[2];
        channel->pos[3] = pos[3];
    }
    else {
        channel->pos[0] = pMoby->pos.x;
        channel->pos[1] = pMoby->pos.y;
        channel->pos[2] = pMoby->pos.z;
        channel->pos[3] = pMoby->pos.w;
        channel->pos[2] += 1.0f;
    }

    if ((flags & SOUND_FLAG_NO_FADE) == 0) {
        SoundDef *chDef = channel->pSoundDef;

        vol = sound_GetFade(SoundDistToCamera(channel->pos), chDef->minRange, chDef->maxRange, chDef);
    }

    if (vol < 32) {
        return -1;
    }

    channel->flags = (char)flags;
    channel->state = SOUND_STATE_NEW;
    channel->occlpos = 0;

    int pitch = def->maxPitch;
    if (pitch != def->minPitch) {
        pitch = MB_randInt(pitch - def->minPitch) + def->minPitch;
    }

    channel->pitch = pitch;
    channel->handle = -1;

    return index;
}

/* sound_Play for a moby's sound; the channel follows the moby */
static inline int SoundPlayForMoby(SoundDef *def, int sound, int flags, MobyInstance *pMoby)
{
    int handle = sound_Play(def, flags, pMoby, NULL, 0x400);

    if (handle >= 0) {
        g_SoundChannels[handle].pMoby = pMoby;
        g_SoundChannels[handle].sound_index = (short)sound;
    }

    return handle;
}

int PlayMobySound(int sound, int flags, MobyInstance *pMoby)
{
    if (pMoby == NULL) {
        return -1;
    }

    MobyClass *mobyClass = pMoby->pClass;
    if (mobyClass == NULL || mobyClass->SoundDefs == NULL) {
        return -1;
    }

    if (sound >= (int)mobyClass->sound_cnt) {
        return -1;
    }

    return SoundPlayForMoby((SoundDef *)mobyClass->SoundDefs + sound, sound, flags, pMoby);
}

int sound_MobyPlay_oClass(int sound, int flags, MobyInstance *pMoby, int oClass)
{
    MobyClass *mobyClass = MobyClasses[(&MobyClassLookup)[oClass]];

    if (mobyClass == NULL) {
        return -1;
    }

    if (sound >= (int)mobyClass->sound_cnt) {
        return -1;
    }

    return SoundPlayForMoby((SoundDef *)mobyClass->SoundDefs + sound, sound, flags, pMoby);
}

int sound_CorePlay(int sound, int flags, MobyInstance *pMoby)
{
    if (sound >= g_CoreSoundCnt) {
        return -1;
    }

    return SoundPlayForMoby(&g_pSoundDefs[sound], sound, flags, pMoby);
}

int sound_LevelPlay(int sound, int flags, MobyInstance *pMoby)
{
    int index = sound + g_CoreSoundCnt;

    if (index >= g_TotalSoundDefCnt) {
        return -1;
    }

    return SoundPlayForMoby(&g_pSoundDefs[index], index, flags, pMoby);
}

int sound_AmbientPlay(int sound, int flags, SoundInstance *pAmbient, int vol)
{
    if (sound >= g_TotalSoundDefCnt) {
        return -1;
    }

    int handle = sound_Play(&g_pSoundDefs[sound], flags, NULL, &pAmbient->cuboid.pos.x, vol);
    if (handle >= 0) {
        g_SoundChannels[handle].pSoundInstance = pAmbient;
        g_SoundChannels[handle].sound_index = (short)sound;
    }

    return handle;
}

int sound_FootstepPlay(int ground_type, int right_foot, int magneboots, int flags, MobyInstance *pMoby)
{
    int index = g_FootstepSoundBase[Level] + ground_type * 4 + right_foot * 2 + magneboots + g_CoreSoundCnt;

    if (index >= g_TotalSoundDefCnt) {
        return -1;
    }

    return SoundPlayForMoby(&g_pSoundDefs[index], index, flags, pMoby);
}

int sound_SetOffset(int handle, float *offset)
{
    SoundData *channel = &g_SoundChannels[handle];

    channel->flags |= SOUND_FLAG_OFFSET;
    channel->offset[0] = offset[0];
    channel->offset[1] = offset[1];
    channel->offset[2] = offset[2];
    channel->offset[3] = offset[3];

    return 1;
}

int sound_AddOffset(int handle, float *offset)
{
    SoundData *channel = &g_SoundChannels[handle];

    channel->offset[0] += offset[0];
    channel->offset[1] += offset[1];
    channel->offset[2] += offset[2];

    return 1;
}

int sound_ClearOffset(int handle)
{
    SoundData *channel = &g_SoundChannels[handle];

    channel->flags &= ~SOUND_FLAG_OFFSET;
    SoundClearOffset(channel);

    return 1;
}

int sound_SetVol(int handle, int vol)
{
    g_SoundChannels[handle].vol = vol;

    return 1;
}

int sound_SetPitch(int handle, int pitch)
{
    g_SoundChannels[handle].pitch = pitch;

    return 1;
}

/* looks up the ambient sound's update function by its oClass */
void sound_SetupAmbientFunctions(SoundInstance *sound)
{
    int index = 0;

    while (g_SoundVTable[index].idx != 0xffffffff && g_SoundVTable[index].idx != (uint)(int)sound->oClass) {
        index++;
    }

    sound->mClass = (short)index;
    sound->pUpdate = (void (*)(SoundInstance *))g_SoundVTable[index].update;
}

void sound_UpdateAmbient(void)
{
    for (int i = 0; i < g_SoundCnt; i++) {
        SoundInstance *sound = &g_pSoundInstances[i];

        if (sound->pUpdate != NULL) {
            sound->pUpdate(sound);
        }
    }
}

/* the change is sent to Scream by the next sound_Update */
void sound_SetReverb(SoundInstance *owner, int type, int depth, int delay, int feedback)
{
    g_ReverbOwner = owner;

    if (g_ReverbType != (u8)type) {
        g_ReverbDirty |= 1;
        g_ReverbType = (u8)type;
    }

    if (g_ReverbDepth != depth) {
        g_ReverbDirty |= 4;
        g_ReverbDepth = depth;
    }

    if (g_ReverbDelay != (u8)delay || g_ReverbFeedback != (u8)feedback) {
        g_ReverbDirty |= 2;
        g_ReverbDelay = (u8)delay;
        g_ReverbFeedback = (u8)feedback;
    }
}

void sound_StopAllSounds(void)
{
    STUB_00505f4c();
    STUB_00505d20();
    FUN_0060c0d0();

    while (STUB_00505d20() != 0) {
    }

    SoundClearChannels();
}

void sound_BasicCB(int ret_val, int *data)
{
    if (data != NULL) {
        *data = ret_val;
    }
}

void sound_PlayCB(int ret_val, SoundData *data)
{
    if (data == NULL) {
        return;
    }

    data->handle = ret_val;

    if (ret_val == 0) {
        data->pMoby = NULL;
        data->pSoundInstance = NULL;
        data->state = SOUND_STATE_FREE;
    }
    else if (data->state == SOUND_STATE_STARTING) {
        data->state = SOUND_STATE_PLAYING;
    }
}

void sound_FreshenCB(int ret_val, SoundData *data)
{
    if (data == NULL) {
        return;
    }

    data->handle = ret_val;

    if (ret_val == 0) {
        data->pMoby = NULL;
        data->pSoundInstance = NULL;
        data->state = SOUND_STATE_FREE;
    }
}

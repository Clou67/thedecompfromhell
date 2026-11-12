// game/music.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 39 functions, 0x11b944-0x11dfc4
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "game/music.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/pause.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/sound.h"
#include "sdk/libscream/989snd.h"

// 0x011b944 (0x14 bytes)
void SECTION_HEADER_MUSIC(void)

{
  DAT_00729554 = 0x10000;
  return;
}


// 0x011b960 (0xcc bytes)
// strings: 00653004: 'cdrom0:'


void music_UppercaseCdromPath(char *path)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  
  sVar2 = strlen("cdrom0:");
  iVar3 = FUN_005ccb28("cdrom0:",path,sVar2);
  if (iVar3 == 0) {
    for (; sVar4 = strlen(path), sVar2 < sVar4; sVar2 = sVar2 + 1) {
      bVar1 = path[sVar2];
      path[sVar2] = (bVar1 - 0x20) +
                    ((byte)(ZERO_MASK((*(ushort *)(PTR_PTR_00905664 + (uint)bVar1 * 2) & 0x10))) & bVar1 - (bVar1 - 0x20));
    }
  }
  return;
}


// 0x011ba2c (0x2c bytes)
void music_LoadCoreBank(void)

{
  FUN_00506664(&PTR_music_CdCB_00706db0);
  return;
}


// 0x011ba58 (0xa8 bytes)
void music_Init(void)

{
  int iVar1;
  
  DAT_009636f8 = 0x20;
  DAT_009636fc = 10;
  DAT_00963700 = 8;
  DAT_00963704 = 0;
  DAT_009636c8 = 0;
  g_MusicPlaying.handle = 0;
  g_MusicPlaying.status = 0;
  g_SpeechPlaying.handle = 0;
  g_SpeechPlaying.status = 0;
  g_TransitionPlaying.handle = 0;
  g_TransitionPlaying.status = 0;
  g_PendingSpeech = 0xffffffff;
  g_PendingTrack = 0xff;
  FUN_00505954(4,0xf000,10,1);
  do {
    iVar1 = STUB_00505d20();
  } while (iVar1 != 0);
  FUN_00506664(&PTR_music_CdCB_00706db0);
  return;
}


// 0x011bb00 (0x9c bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


void InitLevelMusicFileSizes(void)

{
  ulonglong uVar1;
  undefined4 size;
  ulonglong music;
  int iVar2;
  char buff [256];
  
  music = 0;
  do {
    snprintf(buff,"rc1/ps3data/level%d/music[%d].xvag",Level,music);
    size = GetFileSize(buff);
    uVar1 = music & 0xffffffff;
    iVar2 = (int)music + 1;
    music = (ulonglong)iVar2;
    *(undefined4 *)(&g_LevelMusicFileSizes + (int)(uVar1 << 2)) = size;
  } while (iVar2 < 0xf);
  return;
}


// 0x011bb9c (0xf4 bytes)
// strings: 00653030: 'rc1/ps3data/global/audio/helpgirl_speeches%d.xvag'


void music_StartSpeech_Helpgirl(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/global/audio/helpgirl_speeches%d.xvag",id + -60000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011bc90 (0x100 bytes)
// strings: 00653064: 'rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag'


void music_StartSpeech_Qwark(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag",id + -50000,
                   g_Language);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011bd90 (0xf4 bytes)
// strings: 00653094: 'rc1/ps3data/global/audio/space_sounds_l%d.xvag'


void music_StartSpeech_Space(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/global/audio/space_sounds_l%d.xvag",id + -40000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011be84 (0x180 bytes)
// strings: 006530c4: 'rc1/ps3data/global/audio/help%d_%d.xvag'


void music_StartSpeech_Help(int id,int flags,int vol)

{
  int iVar1;
  longlong lVar2;
  char acStack_130 [264];
  
  iVar1 = g_Language;
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_130,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,g_Language);
    if ((iVar1 == 6) && (lVar2 = GetFileSize(acStack_130), lVar2 == 0)) {
      snprintf(acStack_130,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,0);
    }
    FUN_00506444(acStack_130,0,0,0,
                 g_SpeechPlaying.volume +
                 ((ushort)(ZERO_MASK((uint)DAT_0071fb58)) & -g_SpeechPlaying.volume
                 ),0,2,0);
  }
  return;
}


// 0x011c004 (0xf8 bytes)
// strings: 006530ec: 'rc1/ps3data/level%d/bindata[%d].xvag'


void music_StartSpeech_Bindata(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/level%d/bindata[%d].xvag",Level,id + -20000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011c0fc (0xec bytes)
// strings: 00653114: 'rc1/ps3data/global/audio/vendor_speech%d.xvag'


void music_StartSpeech_Vendor(int id,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.track = (short)id;
    g_SpeechPlaying.volume = (short)vol;
    g_SpeechPlaying.flags = (short)flags;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/global/audio/vendor_speech%d.xvag",id + -10000);
    FUN_00506444(acStack_110,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011c1e8 (0x648 bytes)
// strings: 00653030: 'rc1/ps3data/global/audio/helpgirl_speeches%d.xvag' | 00653064: 'rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag' | 00653094: 'rc1/ps3data/global/audio/space_sounds_l%d.xvag' | 006530c4: 'rc1/ps3data/global/audio/help%d_%d.xvag' | 006530ec: 'rc1/ps3data/level%d/bindata[%d].xvag' | 00653114: 'rc1/ps3data/global/audio/vendor_speech%d.xvag' | 007295d0: 'efgsij' | 00653144: 'rc1/ps3data/level%d/scene[%d]/speech_%c.xvag'


void music_StartSpeech(int id,int flags,int vol)

{
  int iVar1;
  short sVar3;
  longlong lVar2;
  short sVar4;
  short sVar5;
  char acStack_730 [256];
  char acStack_630 [256];
  char acStack_530 [256];
  char acStack_430 [256];
  char acStack_330 [256];
  char acStack_230 [256];
  char acStack_130 [256];
  
  iVar1 = g_Language;
  sVar5 = (short)id;
  sVar3 = (short)vol;
  sVar4 = (short)flags;
  if (id < 60000) {
    if (id < 50000) {
      if (id < 40000) {
        if (id < 30000) {
          if (id < 20000) {
            if (id < 10000) {
              if (g_SpeechPlaying.handle == 0) {
                g_SpeechPlaying.handle = -1;
                g_SpeechPlaying.status = 1;
                g_SpeechPlaying.queuelen = 10;
                g_SpeechPlaying.remain = 48000;
                g_SpeechPlaying.transition = 0;
                g_SpeechPlaying.track = sVar5;
                g_SpeechPlaying.volume = sVar3;
                g_SpeechPlaying.flags = sVar4;
                snprintf(acStack_130,"rc1/ps3data/level%d/scene[%d]/speech_%c.xvag",Level,id,
                               (ulonglong)
                               (byte)s_efgsij_007295d0
                                     [g_Language + -1 +
                                      ((uint)(ZERO_MASK(g_Language)) &
                                      g_Language - (g_Language + -1))]);
                FUN_00506444(acStack_130,0,0,0,g_SpeechPlaying.volume,0,2,0);
              }
            }
            else if (g_SpeechPlaying.handle == 0) {
              g_SpeechPlaying.handle = -1;
              g_SpeechPlaying.status = 1;
              g_SpeechPlaying.queuelen = 10;
              g_SpeechPlaying.remain = 48000;
              g_SpeechPlaying.transition = 0;
              g_SpeechPlaying.track = sVar5;
              g_SpeechPlaying.volume = sVar3;
              g_SpeechPlaying.flags = sVar4;
              snprintf(acStack_730,"rc1/ps3data/global/audio/vendor_speech%d.xvag",id + -10000
                            );
              FUN_00506444(acStack_730,0,0,0,g_SpeechPlaying.volume,0,2,0);
            }
          }
          else if (g_SpeechPlaying.handle == 0) {
            g_SpeechPlaying.handle = -1;
            g_SpeechPlaying.status = 1;
            g_SpeechPlaying.queuelen = 10;
            g_SpeechPlaying.remain = 48000;
            g_SpeechPlaying.transition = 0;
            g_SpeechPlaying.track = sVar5;
            g_SpeechPlaying.volume = sVar3;
            g_SpeechPlaying.flags = sVar4;
            snprintf(acStack_630,"rc1/ps3data/level%d/bindata[%d].xvag",Level,id + -20000);
            FUN_00506444(acStack_630,0,0,0,g_SpeechPlaying.volume,0,2,0);
          }
        }
        else if (g_SpeechPlaying.handle == 0) {
          g_SpeechPlaying.handle = -1;
          g_SpeechPlaying.status = 1;
          g_SpeechPlaying.queuelen = 10;
          g_SpeechPlaying.remain = 48000;
          g_SpeechPlaying.transition = 0;
          g_SpeechPlaying.track = sVar5;
          g_SpeechPlaying.volume = sVar3;
          g_SpeechPlaying.flags = sVar4;
          snprintf(acStack_530,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,
                         g_Language);
          if ((iVar1 == 6) && (lVar2 = GetFileSize(acStack_530), lVar2 == 0)) {
            snprintf(acStack_530,"rc1/ps3data/global/audio/help%d_%d.xvag",id + -30000,0);
          }
          FUN_00506444(acStack_530,0,0,0,
                       g_SpeechPlaying.volume +
                       ((ushort)(ZERO_MASK((uint)DAT_0071fb58)) &
                       -g_SpeechPlaying.volume),0,2,0);
        }
      }
      else if (g_SpeechPlaying.handle == 0) {
        g_SpeechPlaying.handle = -1;
        g_SpeechPlaying.status = 1;
        g_SpeechPlaying.queuelen = 10;
        g_SpeechPlaying.remain = 48000;
        g_SpeechPlaying.transition = 0;
        g_SpeechPlaying.track = sVar5;
        g_SpeechPlaying.volume = sVar3;
        g_SpeechPlaying.flags = sVar4;
        snprintf(acStack_430,"rc1/ps3data/global/audio/space_sounds_l%d.xvag",id + -40000);
        FUN_00506444(acStack_430,0,0,0,g_SpeechPlaying.volume,0,2,0);
      }
    }
    else if (g_SpeechPlaying.handle == 0) {
      g_SpeechPlaying.handle = -1;
      g_SpeechPlaying.status = 1;
      g_SpeechPlaying.queuelen = 10;
      g_SpeechPlaying.remain = 48000;
      g_SpeechPlaying.transition = 0;
      g_SpeechPlaying.track = sVar5;
      g_SpeechPlaying.volume = sVar3;
      g_SpeechPlaying.flags = sVar4;
      snprintf(acStack_330,"rc1/ps3data/global/audio/qwark_taunts%d_%d.xvag",id + -50000,
                     g_Language);
      FUN_00506444(acStack_330,0,0,0,g_SpeechPlaying.volume,0,2,0);
    }
  }
  else if (g_SpeechPlaying.handle == 0) {
    g_SpeechPlaying.handle = -1;
    g_SpeechPlaying.status = 1;
    g_SpeechPlaying.queuelen = 10;
    g_SpeechPlaying.remain = 48000;
    g_SpeechPlaying.transition = 0;
    g_SpeechPlaying.track = sVar5;
    g_SpeechPlaying.volume = sVar3;
    g_SpeechPlaying.flags = sVar4;
    snprintf(acStack_230,"rc1/ps3data/global/audio/helpgirl_speeches%d.xvag",id + -60000);
    FUN_00506444(acStack_230,0,0,0,g_SpeechPlaying.volume,0,2,0);
  }
  return;
}


// 0x011c830 (0x60 bytes)
int music_PlayPreseekedSpeech(void)

{
  int iVar1;
  
  if ((g_SpeechPlaying.handle == 0) || (g_SpeechPlaying.status != 3)) {
    iVar1 = 0;
  }
  else {
    FUN_00505cfc();
    iVar1 = 1;
    g_SpeechPlaying.status = 4;
  }
  return iVar1;
}


// 0x011c890 (0xf4 bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


void music_PreseekTrack(int track,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_MusicPlaying.handle == 0) {
    g_MusicPlaying.handle = -1;
    g_MusicPlaying.status = 1;
    g_MusicPlaying.track = (short)track;
    g_MusicPlaying.volume = (short)vol;
    g_MusicPlaying.flags = (short)flags;
    g_MusicPlaying.queuelen = 10;
    g_MusicPlaying.remain = 48000;
    g_MusicPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,track);
    FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
  }
  return;
}


// 0x011c984 (0xf4 bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


void music_StartTrack(int track,int flags,int vol)

{
  char acStack_110 [256];
  
  if (g_MusicPlaying.handle == 0) {
    g_MusicPlaying.handle = -1;
    g_MusicPlaying.status = 1;
    g_MusicPlaying.track = (short)track;
    g_MusicPlaying.volume = (short)vol;
    g_MusicPlaying.flags = (short)flags;
    g_MusicPlaying.queuelen = 10;
    g_MusicPlaying.remain = 48000;
    g_MusicPlaying.transition = 0;
    snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,track);
    FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
  }
  return;
}


// 0x011ca78 (0x13c bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


void music_StartTrackBody(int track,int flags,int vol)

{
  int iVar1;
  char acStack_120 [256];
  
  iVar1 = g_MusicPlaying.handle;
  if (g_MusicPlaying.status != 9) {
    if (g_MusicPlaying.handle != -1 && g_MusicPlaying.handle != 0) {
      g_MusicPlaying.track = (short)track;
      g_MusicPlaying.status = 9;
      g_MusicPlaying.volume = (short)vol;
      g_MusicPlaying.flags = (short)flags;
      g_MusicPlaying.queuelen = 10;
      g_MusicPlaying.remain = 48000;
      g_MusicPlaying.transition = 0;
      snprintf(acStack_120,"rc1/ps3data/level%d/music[%d].xvag",Level,track + 1);
      FUN_00506444(acStack_120,0,0,0,g_MusicPlaying.volume,0,1,iVar1);
    }
  }
  return;
}


// 0x011cbb4 (0x114 bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


int music_Transition(int track,int transition,int flags,int vol)

{
  bool bVar1;
  char acStack_120 [264];
  
  bVar1 = g_TransitionPlaying.handle == 0;
  if (bVar1) {
    g_TransitionPlaying.handle = -1;
    g_TransitionPlaying.status = 1;
    g_TransitionPlaying.track = (short)track;
    g_TransitionPlaying.volume = (short)vol;
    g_TransitionPlaying.flags = (short)flags;
    g_TransitionPlaying.queuelen = 10;
    g_TransitionPlaying.remain = 48000;
    g_TransitionPlaying.transition = 1;
    snprintf(acStack_120,"rc1/ps3data/level%d/music[%d].xvag",Level,transition);
    FUN_00506444(acStack_120,0,0,0,g_TransitionPlaying.volume,0,1,0);
  }
  return (int)bVar1;
}


// 0x011ccc8 (0x54 bytes)
void music_SetTransition(int track,int transition)

{
  if ((g_MusicPlaying.track != track) || (g_PendingTrack != -1)) {
    if ((g_MusicPlaying.status == 0) && (g_TransitionPlaying.status == 0)) {
      g_MusicPlaying.track = (short)track;
    }
    else {
      g_PendingTrack = (char)track;
      MusicId = (undefined1)transition;
    }
  }
  return;
}


// 0x011cd1c (0x104 bytes)
void music_Stop(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = g_MusicPlaying.handle == -1;
  while (bVar1) {
    STUB_00505d20();
    bVar1 = g_MusicPlaying.handle == -1;
  }
  while (g_TransitionPlaying.handle == -1) {
    STUB_00505d20();
  }
  while (g_SpeechPlaying.handle == -1) {
    STUB_00505d20();
  }
  FUN_00632674();
  do {
    iVar2 = STUB_00505d20();
  } while (iVar2 != 0);
  FUN_005066c4(1);
  g_MusicPlaying.status = 0;
  g_MusicPlaying.flags = 0;
  g_MusicPlaying.handle = 0;
  if (g_PendingTrack != -1) {
    g_MusicPlaying.track = (short)g_PendingTrack;
  }
  g_SpeechPlaying.status = 0;
  g_SpeechPlaying.flags = 0;
  g_SpeechPlaying.handle = 0;
  g_TransitionPlaying.status = 0;
  g_TransitionPlaying.flags = 0;
  g_TransitionPlaying.handle = 0;
  g_TransitionState = 0;
  g_PendingTrack = 0xff;
  MusicId = 0xff;
  return;
}


// 0x011ce20 (0x44 bytes)
void music_Pause(int speech)

{
  if (speech != 0) {
    g_SpeechPlaying.pause = -0x8000;
    g_SpeechPlaying.unpause = 0;
  }
  g_MusicPlaying.pause = -0x8000;
  g_MusicPlaying.unpause = 0;
  g_TransitionPlaying.pause = -0x8000;
  g_TransitionPlaying.unpause = 0;
  return;
}


// 0x011ce64 (0x1c bytes)
void music_Unpause(void)

{
  g_MusicPlaying.pause = 4;
  g_TransitionPlaying.pause = 4;
  g_SpeechPlaying.pause = 4;
  return;
}


// 0x011ce80 (0x48 bytes)
void music_UnpauseDelay(int time)

{
  short sVar1;
  
  sVar1 = (short)time;
  if ((g_MusicPlaying.pause & 0x8000U) != 0) {
    g_MusicPlaying.unpause = sVar1;
  }
  if ((g_TransitionPlaying.pause & 0x8000U) != 0) {
    g_TransitionPlaying.unpause = sVar1;
  }
  if ((g_SpeechPlaying.pause & 0x8000U) != 0) {
    g_SpeechPlaying.unpause = sVar1;
  }
  return;
}


// 0x011cec8 (0x1c0 bytes)
void music_UpdateStream(music_Playing *stream)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  
  lVar1 = (longlong)(int)stream;
  uVar3 = stream->status;
  iVar2 = stream->handle;
  if (((uVar3 == 9) || (iVar2 == 0)) || (iVar2 == -1)) {
    if ((uVar3 == 7) || (iVar2 == 0)) {
      stream->status = 0;
    }
  }
  else {
    if (uVar3 == 5) {
      FUN_00506638();
      uVar3 = 0;
      iVar2 = stream->handle;
      stream->status = 6;
    }
    if (iVar2 != 0) {
      if ((stream->pause & 0x8000U) == 0) {
        if ((uVar3 & 0x8000) != 0) {
          FUN_00505cfc(iVar2);
          stream->status = stream->status ^ 0x8000;
        }
      }
      else {
        if ((uVar3 & 0x8000) == 0) {
          FUN_00505f18(iVar2);
          stream->status = stream->status | 0x8000;
        }
        iVar2 = FastDecTimerS16(lVar1 + 0xe);
        if (iVar2 == 2) {
          stream->pause = 4;
        }
      }
      uVar3 = stream->status;
      if ((((uVar3 & 0x8000) == 0 && uVar3 != 1) && (uVar3 != 8)) && (uVar3 != 9)) {
        if ((uVar3 == 2) || (uVar3 == 3)) {
          if ((stream->handle != -1) && (uVar3 == 2)) {
            FUN_00505e98(stream->handle,&PTR_music_FreshenCB_00706db8,lVar1);
          }
        }
        else {
          iVar2 = stream->handle;
          stream->handle = -1;
          FUN_00505e08(iVar2,&PTR_music_TimeRemainingCB_00706df8,lVar1);
          FUN_005065dc(iVar2,&PTR_music_StopCB_00706de8,lVar1);
        }
      }
    }
  }
  return;
}


// 0x011d088 (0x15c bytes)
// strings: 00653174: 'host0:\\data\\game.wad'


int music_LoadFromHostWad(void *dest,int sector,int numSectors)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_70 [72];
  
  if ((Music == 0) && (numSectors != 0)) {
    snprintf(acStack_70,"host0:\\data\\game.wad");
    uVar1 = FUN_00502dcc(acStack_70,0);
    if ((int)uVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = STUB_00502de0_RET_0(uVar1,0,5);
      if ((numSectors + sector + -1) * 0x800 < iVar2) {
        STUB_00502de0_RET_0(uVar1,sector << 0xb,6);
        iVar2 = numSectors << 0xb;
        iVar3 = STUB_00502dd4(uVar1,dest,iVar2);
        if ((numSectors + -1) * 0x800 < iVar3) {
          STUB_00502ddc(uVar1);
          Music = 1;
        }
        else {
          STUB_00502ddc(uVar1);
          iVar2 = 0;
        }
      }
      else {
        STUB_00502ddc(uVar1);
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x011d1f0 (0x7f0 bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag' | 00653174: 'host0:\\data\\game.wad'


void LoadMusic(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined8 in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  char acStack_470 [64];
  char acStack_430 [256];
  char acStack_330 [256];
  char acStack_230 [256];
  char acStack_130 [264];
  
  iVar4 = g_MusicPlaying.handle;
  if (g_FinishedLoading != '\0') {
    return;
  }
  if (Music != 0) {
    Music = Music + -1;
  }
  if (((g_MusicPlaying.pause & 0x8000U) == 0) && ((g_MusicPlaying.status & 0x8000U) == 0)) {
    if ((g_MusicPlaying.handle != 0) ||
       (((g_MusicPlaying.flags & 1U) == 0 || (g_PendingTrack != -1)))) {
      if (((g_MusicPlaying.status != 9) &&
          (((g_MusicPlaying.handle != 0 && (g_MusicPlaying.handle != -1)) &&
           (g_MusicPlaying.status == 8)))) &&
         ((g_MusicPlaying.status != 9 && (g_MusicPlaying.handle != -1)))) {
        g_MusicPlaying.status = 9;
        g_MusicPlaying.queuelen = 10;
        g_MusicPlaying.transition = 0;
        g_MusicPlaying.remain = 48000;
        snprintf(acStack_230,"rc1/ps3data/level%d/music[%d].xvag",Level,
                       (longlong)g_MusicPlaying.track + 1);
        FUN_00506444(acStack_230,0,0,0,g_MusicPlaying.volume,0,1,iVar4);
      }
    }
    else {
      g_MusicPlaying.handle = -1;
      g_MusicPlaying.status = 1;
      g_MusicPlaying.queuelen = 10;
      g_MusicPlaying.transition = 0;
      g_MusicPlaying.remain = 48000;
      snprintf(acStack_130,"rc1/ps3data/level%d/music[%d].xvag",Level,g_MusicPlaying.track);
      FUN_00506444(acStack_130,0,0,0,g_MusicPlaying.volume,0,1,0);
    }
  }
  iVar4 = FastDecTimerS32(&g_TransitionTimer);
  if (((iVar4 != 0) && (g_PendingTrack != -1)) && (g_TransitionState == 0)) {
    if ((int)g_MusicPlaying.track == (int)g_PendingTrack) {
      g_PendingTrack = -1;
    }
    else {
      if (MusicId != -1) {
        if (g_TransitionPlaying.handle != 0) goto LAB_0011d584;
        g_TransitionPlaying.track = (short)g_PendingTrack;
        g_TransitionPlaying.volume = g_MusicPlaying.volume;
        g_TransitionPlaying.handle = -1;
        g_TransitionPlaying.flags = g_MusicPlaying.flags;
        g_TransitionPlaying.status = 1;
        g_TransitionPlaying.queuelen = 10;
        g_TransitionPlaying.remain = 48000;
        g_TransitionPlaying.transition = 1;
        snprintf(acStack_330,"rc1/ps3data/level%d/music[%d].xvag",Level,MusicId);
        FUN_00506444(acStack_330,0,0,0,g_TransitionPlaying.volume,0,1,0);
      }
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_LR,0x11d1e4);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar7 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = ZEXT416(0xffffffff);
      auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar6 = loadVectorLeftIndexed(4,0x11d1e4);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar8);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      g_TransitionTimer =
           storeVectorElementWordIndexed
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2c,0x9636c8);
    }
  }
LAB_0011d584:
  if (-1 < g_PendingSpeech) {
    if (g_SpeechPlaying.handle == 0) {
      music_StartSpeech(g_PendingSpeech,0,0x400);
      g_PendingSpeech = -1;
    }
    else if (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6) {
      g_SpeechPlaying.status = 5;
    }
  }
  iVar4 = g_MusicPlaying.handle;
  if (((((g_MusicPlaying.status != 9) && (g_MusicPlaying.handle != -1)) &&
       ((g_MusicPlaying.pause & 0x8000U) == 0)) &&
      (((g_MusicPlaying.status & 0x8000U) == 0 && ((g_TransitionPlaying.pause & 0x8000U) == 0)))) &&
     ((g_TransitionPlaying.status & 0x8000U) == 0)) {
    if (g_TransitionState < 4) {
      if (1 < g_TransitionState) {
        if (g_TransitionState < 3) {
          iVar1 = ((int)g_MusicPlaying.volume *
                  (g_TransitionFadeTime - (g_TransitionRemainStart - g_TransitionPlaying.remain))) /
                  g_TransitionFadeTime;
          if (((iVar1 < 1) ||
              (((g_TransitionPlaying.status != 4 || (g_TransitionPlaying.transition == 0)) &&
               (g_TransitionPlaying.handle == 0)))) || (g_MusicPlaying.handle == 0)) {
            g_TransitionState = 3;
            g_MusicPlaying.status = 5;
          }
          else if (g_MusicPlaying.status != 9) {
            g_MusicPlaying.handle = -1;
            FUN_005063b0(iVar4,0xc,iVar1,0,0,0,&PTR_music_StopCB_00706de8,&g_MusicPlaying);
          }
        }
        else if ((g_MusicPlaying.status == 0) &&
                ((g_TransitionPlaying.transition != 0 || (g_TransitionPlaying.handle == 0)))) {
          if (g_MusicPlaying.handle == 0) {
            g_MusicPlaying.handle = -1;
            g_MusicPlaying.status = 1;
            g_MusicPlaying.track = (short)g_PendingTrack;
            g_MusicPlaying.queuelen = 10;
            g_MusicPlaying.remain = 48000;
            g_MusicPlaying.transition = 0;
            snprintf(acStack_430,"rc1/ps3data/level%d/music[%d].xvag",Level);
            FUN_00506444(acStack_430,0,0,0,g_MusicPlaying.volume,0,1,0);
          }
          g_PendingTrack = -1;
          g_TransitionState = 4;
        }
      }
    }
    else if (g_TransitionState < 5) {
      if ((g_MusicPlaying.status == 3) &&
         (((g_TransitionPlaying.remain < g_TransitionFadeTime || (g_TransitionPlaying.status != 4))
          || ((g_TransitionPlaying.transition == 0 && (g_TransitionPlaying.handle == 0)))))) {
        FUN_00505cfc(g_MusicPlaying.handle);
        g_MusicPlaying.status = 8;
        g_TransitionState = 5;
      }
    }
    else if ((g_TransitionState < 6) &&
            ((g_TransitionPlaying.status != 4 || (g_TransitionPlaying.transition == 0)))) {
      g_TransitionState = 0;
    }
  }
  music_UpdateStream(&g_MusicPlaying);
  music_UpdateStream(&g_TransitionPlaying);
  music_UpdateStream(&g_SpeechPlaying);
  uVar2 = DAT_009636dc;
  iVar1 = DAT_009636d8;
  iVar4 = DAT_009636d4;
  if (DAT_009636d2 == '\0') {
    if (Music == 2) {
      Music = 0;
      if (DAT_009636d8 != 0) {
        snprintf(acStack_470,"host0:\\data\\game.wad");
        uVar3 = FUN_00502dcc(acStack_470,0);
        if (-1 < (int)uVar3) {
          iVar5 = STUB_00502de0_RET_0(uVar3,0,5);
          if ((iVar1 + iVar4 + -1) * 0x800 < iVar5) {
            STUB_00502de0_RET_0(uVar3,iVar4 << 0xb,6);
            iVar4 = STUB_00502dd4(uVar3,uVar2,iVar1 << 0xb);
            if ((iVar1 + -1) * 0x800 < iVar4) {
              STUB_00502ddc(uVar3);
              Music = 1;
            }
            else {
              STUB_00502ddc(uVar3);
            }
          }
          else {
            STUB_00502ddc(uVar3);
          }
        }
      }
      if (Music == 0) {
        Music = 2;
      }
    }
  }
  else {
    iVar4 = STUB_005066bc_RET_0(1);
    if (iVar4 == 0) {
      Music = 0;
      DAT_009636d2 = '\0';
    }
  }
  return;
}


// 0x011d9e0 (0x48 bytes)
void music_StopLoad(void)

{
  if (Music != 0) {
    FUN_00506660();
    DAT_009636d2 = 1;
  }
  return;
}


// 0x011da28 (0x2c bytes)
void music_Reset(void)

{
  DAT_009636c0 = 0;
  DAT_009636c4 = 0;
  g_FinishedLoading = 1;
  Music = 0;
  return;
}


// 0x011da54 (0x178 bytes)
// strings: 00653174: 'host0:\\data\\game.wad'


int music_LoadFromHostWad_v2(void *dest,int sector,int numSectors)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_70 [64];
  
  if ((Music == 0) && (numSectors != 0)) {
    snprintf(acStack_70,"host0:\\data\\game.wad");
    uVar1 = FUN_00502dcc(acStack_70,0);
    if ((int)uVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = STUB_00502de0_RET_0(uVar1,0,5);
      if ((numSectors + sector + -1) * 0x800 < iVar2) {
        STUB_00502de0_RET_0(uVar1,sector << 0xb,6);
        iVar2 = numSectors << 0xb;
        iVar3 = STUB_00502dd4(uVar1,dest,iVar2);
        if ((numSectors + -1) * 0x800 < iVar3) {
          STUB_00502ddc(uVar1);
          Music = 1;
          if (iVar2 != 0) {
            Music = 0;
          }
        }
        else {
          STUB_00502ddc(uVar1);
          iVar2 = 0;
        }
      }
      else {
        STUB_00502ddc(uVar1);
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// 0x011dbcc (0x48 bytes)
void LoadMusic2(int block)

{
  LoadMusic();
  STUB_00505f4c();
  STUB_00505d20();
  STUB_00505f50();
  Music = 0;
  return;
}


// 0x011dc14 (0x5c bytes)
void music_CdCB(int reason)

{
  int iVar1;
  
  if ((reason < 0xb) && (reason == 5)) {
    Music = 0;
    iVar1 = FUN_005066ac();
    if (iVar1 != 4) {
      Music = 2;
    }
  }
  return;
}


// 0x011dc70 (0x28 bytes)
void music_FreshenCB(int ret_val,music_Playing *mp)

{
  if (((mp != (music_Playing *)0x0) && (ret_val != 0)) && (mp->status == 2)) {
    mp->status = 3;
  }
  return;
}


// 0x011dc98 (0x6c bytes)
void music_SpeechPreseekCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      music_StartSpeech((int)g_SpeechPlaying.track,(int)g_SpeechPlaying.flags,
                        (int)g_SpeechPlaying.volume);
    }
    else if (mp->status == 1) {
      mp->status = 2;
    }
  }
  return;
}


// 0x011dd04 (0x114 bytes)
// strings: 0065300c: 'rc1/ps3data/level%d/music[%d].xvag'


void music_PreseekCB(int ret_val,music_Playing *mp)

{
  char acStack_110 [256];
  
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      if (g_MusicPlaying.handle == 0) {
        g_MusicPlaying.handle = -1;
        g_MusicPlaying.status = 1;
        g_MusicPlaying.transition = 0;
        g_MusicPlaying.queuelen = 10;
        g_MusicPlaying.remain = 48000;
        snprintf(acStack_110,"rc1/ps3data/level%d/music[%d].xvag",Level,g_MusicPlaying.track);
        FUN_00506444(acStack_110,0,0,0,g_MusicPlaying.volume,0,1,0);
      }
    }
    else if (mp->status == 1) {
      mp->status = 2;
    }
  }
  return;
}


// 0x011de18 (0x54 bytes)
void music_StartCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if ((mp->status == 1) && (mp->status = 4, mp->transition != 0)) {
      g_TransitionState = 1;
    }
  }
  return;
}


// 0x011de6c (0x60 bytes)
void music_StartBodyCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    if ((ret_val & 0x80000000U) != 0) {
      mp->handle = ret_val;
    }
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if ((mp->status == 9) && (mp->status = 4, mp->transition != 0)) {
      g_TransitionState = 1;
    }
  }
  return;
}


// 0x011decc (0x38 bytes)
void music_PreseekTrackCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->handle = ret_val;
    if (ret_val == 0) {
      mp->status = 0;
    }
    else if (mp->status == 1) {
      mp->status = 8;
    }
  }
  return;
}


// 0x011df04 (0x58 bytes)
// strings: 0065318c: 'wtf\n' (raw)


int music_StopCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    if (mp->handle == -1) {
      mp->handle = ret_val;
      if (ret_val == 0) {
        ret_val = 7;
        mp->status = 7;
      }
    }
    else {
      ret_val = printf("wtf\n");
    }
  }
  return ret_val;
}


// 0x011df5c (0x10 bytes)
void music_QueueLengthCB(int ret_val,music_Playing *mp)

{
  if (mp != (music_Playing *)0x0) {
    mp->queuelen = ret_val;
  }
  return;
}


// 0x011df6c (0x58 bytes)
void music_TimeRemainingCB(int ret_val,music_Playing *mp)

{
  uint uVar1;
  
  if (mp != (music_Playing *)0x0) {
    mp->remain = ret_val;
    if (((mp->transition != 0) && (g_TransitionState == 1)) && (ret_val != 0)) {
      g_TransitionState = 2;
      g_TransitionRemainStart = mp->remain;
      uVar1 = mp->remain;
      g_TransitionFadeTime = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0);
    }
  }
  return;
}



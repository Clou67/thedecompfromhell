// game/sound.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 30 functions, 0x15b590-0x15da00
#include <stdio.h>
#include "game/sound.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/sound.h"
#include "sdk/mUnk4.h"

// 0x015b590 (0x134 bytes)
void sound_CamOfs(float *cam_ofs_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  
  MB_randVector(0.5,6.0,(Vec4 *)cam_ofs_pos);
  *cam_ofs_pos = *cam_ofs_pos + GameCamera.posX;
  uVar4 = DAT_009637cc;
  cam_ofs_pos[1] = cam_ofs_pos[1] + GameCamera.posY;
  cam_ofs_pos[2] = cam_ofs_pos[2] + GameCamera.posZ;
  iVar5 = CollLine(0x951500,cam_ofs_pos,0x82,uVar4,0);
  if (iVar5 != 0) {
    fVar1 = g_CollOutput.ip.x - GameCamera.posX;
    *cam_ofs_pos = fVar1;
    fVar2 = g_CollOutput.ip.y - GameCamera.posY;
    cam_ofs_pos[1] = fVar2;
    fVar3 = g_CollOutput.ip.z - GameCamera.posZ;
    cam_ofs_pos[2] = fVar3;
    fVar1 = fVar1 * 0.75;
    fVar2 = fVar2 * 0.75;
    cam_ofs_pos[3] = g_CollOutput.ip.w;
    fVar3 = fVar3 * 0.75;
    *cam_ofs_pos = fVar1;
    cam_ofs_pos[1] = fVar2;
    cam_ofs_pos[2] = fVar3;
    *cam_ofs_pos = fVar1 + GameCamera.posX;
    cam_ofs_pos[1] = fVar2 + GameCamera.posY;
    cam_ofs_pos[2] = fVar3 + GameCamera.posZ;
  }
  return;
}


// 0x015b6d0 (0x108 bytes)
void sound_Occl(int param_1,undefined8 param_2)

{
  GPiece<16> local_10;
  
  CollLine(param_2,local_10,0x82,*(undefined4 *)(param_1 + 0x18),0);
  return;
}


// 0x015b7d8 (0x114 bytes)
int sound_GetFade(float dist,float minRange,float maxRange,void *sd)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)maxRange;
  dVar2 = (double)dist;
  dVar4 = (double)minRange;
  if ((*(byte *)((int)sd + 0x19) & 1) == 0) {
    if (dVar4 < dVar2) {
      if (dVar2 < dVar5) {
        dVar3 = (double)FastIntToDouble(*(int *)((int)sd + 0xc) - *(int *)((int)sd + 8));
        iVar1 = FastDoubleToInt
                          ((double)((float)((double)(float)(dVar5 - dVar2) * dVar3) /
                                   (float)(dVar5 - dVar4)));
        iVar1 = *(int *)((int)sd + 8) + iVar1;
      }
      else {
        iVar1 = *(int *)((int)sd + 8);
      }
    }
    else {
      iVar1 = *(int *)((int)sd + 0xc);
    }
  }
  else if (dVar4 < dVar2) {
    if (dVar2 < dVar5) {
      dVar3 = (double)FastIntToDouble(*(int *)((int)sd + 0xc) - *(int *)((int)sd + 8));
      iVar1 = FastDoubleToInt
                        ((double)((float)((double)((float)(dVar5 - dVar2) * (float)(dVar5 - dVar2))
                                         * dVar3) /
                                 ((float)(dVar5 - dVar4) * (float)(dVar5 - dVar4))));
      iVar1 = *(int *)((int)sd + 8) + iVar1;
    }
    else {
      iVar1 = *(int *)((int)sd + 8);
    }
  }
  else {
    iVar1 = *(int *)((int)sd + 0xc);
  }
  return iVar1;
}


// 0x015b8ec (0x6c bytes)
int sound_GetFade_channel(SoundData *channel,float *soundPos)

{
  float *sd;
  int iVar1;
  
  sd = (float *)channel->pSoundDef;
  iVar1 = sound_GetFade(SQRT((soundPos[2] - GameCamera.posZ) * (soundPos[2] - GameCamera.posZ) +
                             (*soundPos - GameCamera.posX) * (*soundPos - GameCamera.posX) +
                             (soundPos[1] - GameCamera.posY) * (soundPos[1] - GameCamera.posY)),*sd,
                        sd[1],sd);
  return iVar1;
}


// 0x015b970 (0x290 bytes)
// inlined: FastAtan2 @0x15bac0
void sound_GetPan(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xa0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar11;
  puVar5[0x16] = in_LR;
  fVar6 = 0.0;
  fVar2 = param_3[0xd] * param_2[3] +
          param_3[9] * (param_2[2] - GameCamera.posZ) +
          param_3[1] * (*param_2 - GameCamera.posX) + param_3[5] * (param_2[1] - GameCamera.posY);
  fVar9 = param_3[0xc] * param_2[3] +
          param_3[8] * (param_2[2] - GameCamera.posZ) +
          *param_3 * (*param_2 - GameCamera.posX) + param_3[4] * (param_2[1] - GameCamera.posY);
  *(float *)(puVar5 + 0xe) = fVar9;
  *(float *)(puVar5 + 0xf) = ABS(fVar9) - ABS(fVar2);
  *(float *)((int)puVar5 + 0x74) = fVar2;
  uVar15 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar10 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar10 = ABS(fVar9);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar9 = SQRT(fVar9 * fVar9 + fVar2 * fVar2) - 1.0;
  if (fVar9 - 0.0 < 0.0) {
    fVar9 = fVar6;
  }
  if (1.0 - fVar9 < 0.0) {
    fVar9 = 1.0;
  }
  if (0.0 < fVar3) {
    lVar16 = uVar11 - 0x90;
    lVar13 = uVar11 - 0x14;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar3) / (fVar10 + fVar3);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar2;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x7c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
    *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar2 * fVar2;
      iVar7 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar16;
    lVar14 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar3 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar7 = (int)lVar12;
      iVar8 = (int)lVar16;
      lVar12 = lVar12 + 0x10;
      lVar16 = lVar16 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
              *(float *)(iVar8 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar6 = (fVar6 + 0.7853982) * fVar4 + fVar1;
  }
  FastDoubleToInt(-(double)(fVar6 * 180.0 * fVar9 * 0.31830987));
  return;
}


// 0x015bc00 (0x250 bytes)
void sound_Init(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  SoundData *pSVar7;
  longlong lVar8;
  
  puVar5 = &DAT_00963760;
  lVar8 = 4;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5 = puVar5 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  DAT_009637a0 = 0;
  pSVar7 = g_SoundChannels;
  pcVar6 = &g_SoundChannels[0].state;
  g_SoundLoadBusy = 0;
  lVar8 = 0xf;
  do {
    pSVar7->handle = 0;
    *pcVar6 = '\0';
    pSVar7[1].handle = 0;
    pcVar6[0x70] = 0;
    pSVar7 = pSVar7 + 2;
    pcVar6 = pcVar6 + 0xe0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_00505810();
  FUN_00506048((ZERO_MASK(g_GameSettings.Stereo) & 1U) + 6);
  STUB_00506040(8,3);
  STUB_00505f44(0,4);
  snd_SetGroupVoiceRange(1,0x18,0x2f);
  snd_SetGroupVoiceRange(2,0x18,0x2f);
  snd_SetGroupVoiceRange(4,0x18,0x2f);
  uVar3 = g_GameSettings.SfxVolume << 3;
  iVar2 = (int)(uVar3 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f;
  iVar4 = g_GameSettings.SfxVolume * 7;
  iVar1 = (int)uVar3 / 10 + iVar2;
  g_soundGlobals.sfxVolume = (float)(((int)uVar3 / 10 + iVar2) - ((int)uVar3 >> 0x1f));
  g_soundGlobals.dialogVolume = (float)(iVar1 - (iVar1 >> 0x1f));
  iVar1 = iVar4 / 10 + (iVar4 >> 0x1f);
  iVar2 = iVar4 / 10 + (iVar4 >> 0x1f);
  g_soundGlobals.musicVolume = (float)g_GameSettings.MusicVolume;
  g_soundGlobals.mpegVolume = (float)g_GameSettings.SfxVolume;
  g_soundGlobals.ambientVolume = (float)(iVar1 - (iVar1 >> 0x1f));
  g_soundGlobals.shellVolume = (float)(iVar2 - (iVar2 >> 0x1f));
  music_Init();
  sound_SetMasterVolume(0,(int)g_soundGlobals.sfxVolume);
  sound_SetMasterVolume(1,(int)g_soundGlobals.musicVolume);
  sound_SetMasterVolume(2,(int)g_soundGlobals.dialogVolume);
  sound_SetMasterVolume(3,(int)g_soundGlobals.ambientVolume);
  sound_SetMasterVolume(4,(int)g_soundGlobals.shellVolume);
  sound_SetMasterVolume(5,(int)g_soundGlobals.mpegVolume);
  return;
}


// 0x015be68 (0xe10 bytes)
// inlined: FastRSqrt @0x15c4f4
undefined8 sound_Update(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyInstance *pMVar10;
  float *sd;
  void *pvVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  bool bVar19;
  u32 uVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  uint uVar24;
  byte bVar28;
  byte *pbVar25;
  undefined1 uVar29;
  int iVar26;
  int iVar27;
  ulonglong uVar30;
  char cVar31;
  ulonglong unaff_r14;
  ulonglong uVar32;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar34;
  undefined8 uVar33;
  ulonglong unaff_r20;
  undefined1 *puVar35;
  ulonglong unaff_r21;
  undefined1 *puVar36;
  ulonglong unaff_r22;
  int *piVar37;
  ulonglong unaff_r23;
  SoundData *pSVar38;
  ulonglong unaff_r24;
  ulonglong uVar39;
  ulonglong unaff_r25;
  MobyInstance **ppMVar40;
  void **ppvVar41;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  float *pfVar43;
  longlong lVar42;
  float *pfVar44;
  ulonglong unaff_r28;
  float *pfVar45;
  ulonglong unaff_r29;
  char *pcVar47;
  undefined *puVar48;
  ulonglong uVar46;
  char *pcVar49;
  ulonglong unaff_r30;
  longlong lVar50;
  float *pfVar52;
  byte *pbVar53;
  longlong lVar51;
  ulonglong unaff_r31;
  ulonglong uVar54;
  ulonglong in_LR;
  longlong lVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar65;
  ulonglong in_f28;
  double dVar66;
  ulonglong in_f29;
  double dVar67;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar68;
  double dVar69;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar51 = uVar21 - 800;
  puVar14 = (ulonglong *)lVar51;
  *puVar14 = uVar21;
  puVar14[0x66] = in_LR;
  puVar14[0x5c] = in_f24;
  puVar14[0x5d] = in_f25;
  puVar14[0x5e] = in_f26;
  puVar14[0x5f] = in_f27;
  puVar14[0x60] = in_f28;
  puVar14[0x61] = in_f29;
  puVar14[0x62] = in_f30;
  puVar14[99] = in_f31;
  puVar14[0x4e] = unaff_r18;
  puVar14[0x4c] = unaff_r16;
  uVar20 = GameCamera.camUnderWater;
  dVar68 = 0.0;
  puVar14[0x5b] = unaff_r31;
  puVar14[0x5a] = unaff_r30;
  puVar14[0x59] = unaff_r29;
  puVar14[0x58] = unaff_r28;
  puVar14[0x57] = unaff_r27;
  puVar14[0x56] = unaff_r26;
  puVar14[0x55] = unaff_r25;
  puVar14[0x54] = unaff_r24;
  puVar14[0x53] = unaff_r23;
  puVar14[0x52] = unaff_r22;
  puVar14[0x51] = unaff_r21;
  puVar14[0x50] = unaff_r20;
  puVar14[0x4f] = unaff_r19;
  puVar14[0x4d] = unaff_r17;
  puVar14[0x4b] = unaff_r15;
  puVar14[0x4a] = unaff_r14;
  dVar69 = dVar68;
  if (uVar20 != 0) {
    dVar69 = (double)g_heroWaterZ;
  }
  STUB_00505d20();
  puVar36 = &DAT_00963760;
  if ((DAT_009637cb & 8) == 0) {
    if ((DAT_009637cb & 0x13) == 0) {
      if ((DAT_009637cb & 4) != 0) {
        FUN_00505af8(0,DAT_009637c4,0xc,3);
      }
    }
    else {
      STUB_00506074(0,DAT_009637c8,DAT_009637c4,DAT_009637c9,DAT_009637ca);
    }
  }
  else {
    STUB_00506074(0,5,0,0,0);
  }
  DAT_009637cb = 0;
  if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) && (g_FrontEnd == '\0'))
  {
    sound_CamOfs((float *)(puVar14 + 0xe));
  }
  uVar24 = DAT_009637a0 + 1;
  DAT_009637a0 = uVar24 + (((int)uVar24 >> 2) + (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0)) * -4;
  iVar34 = DAT_009637a0 * 0x10;
  iVar22 = 0;
  *(float *)(&DAT_00963760 + iVar34) = GameCamera.posX;
  *(float *)(&DAT_00963764 + iVar34) = GameCamera.posY;
  *(float *)(&DAT_00963768 + iVar34) = GameCamera.posZ;
  *(char (*) [4])(&DAT_0096376c + iVar34) = GameCamera.field8_0x14c;
  uVar39 = (ulonglong)DAT_009637a0;
  dVar65 = dVar68;
  dVar66 = dVar68;
  dVar67 = dVar68;
  while( true ) {
    uVar30 = uVar39 + 3;
    uVar30 = uVar30 + ((longlong)((int)uVar30 >> 2) +
                      (ulonglong)((int)uVar30 < 0 && (uVar30 & 3) != 0)) * -4;
    uVar24 = (uint)uVar30;
    if (uVar24 == DAT_009637a0) break;
    iVar26 = uVar24 * 0x10;
    iVar34 = (int)(uVar39 << 4);
    dVar57 = (double)(*(float *)(&DAT_00963764 + iVar34) - *(float *)(&DAT_00963764 + iVar26));
    dVar56 = (double)(*(float *)(&DAT_00963760 + iVar34) - *(float *)(&DAT_00963760 + iVar26));
    dVar59 = (double)(*(float *)(&DAT_00963768 + iVar34) - *(float *)(&DAT_00963768 + iVar26));
    if (g_FrameTime * 60.0 <=
        SQRT((float)(dVar59 * dVar59 +
                    (double)(float)(dVar56 * dVar56 + (double)(float)(dVar57 * dVar57))))) break;
    iVar22 = iVar22 + 1;
    dVar67 = (double)(float)(dVar67 + dVar56);
    dVar66 = (double)(float)(dVar66 + dVar57);
    dVar65 = (double)(float)(dVar65 + dVar59);
    uVar39 = uVar30;
  }
  if (1 < iVar22) {
    dVar56 = (double)FastIntToDouble();
    dVar56 = (double)(float)(1.0 / dVar56);
    dVar67 = (double)(float)(dVar67 * dVar56);
    dVar66 = (double)(float)(dVar66 * dVar56);
    dVar65 = (double)(float)(dVar65 * dVar56);
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    sound_SetMasterVolume(1,0);
    sound_SetMasterVolume
              (0,((int)g_soundGlobals.sfxVolume >> 1) +
                 (uint)((int)g_soundGlobals.sfxVolume < 0 && ((uint)g_soundGlobals.sfxVolume & 1) != 0))
    ;
    sound_SetMasterVolume
              (3,((int)g_soundGlobals.ambientVolume >> 1) +
                 (uint)((int)g_soundGlobals.ambientVolume < 0 &&
                       ((uint)g_soundGlobals.ambientVolume & 1) != 0));
  }
  else {
    fVar23 = g_soundGlobals.musicVolume;
    if (uVar20 != 0) {
      fVar23 = (float)(((int)g_soundGlobals.musicVolume * 3) / 5);
    }
    sound_SetMasterVolume(1,(int)fVar23);
    sound_SetMasterVolume(0,(int)g_soundGlobals.sfxVolume);
    sound_SetMasterVolume(3,(int)g_soundGlobals.ambientVolume);
  }
  sound_SetMasterVolume(2,(int)g_soundGlobals.dialogVolume);
  sound_SetMasterVolume(4,(int)g_soundGlobals.shellVolume);
  sound_SetMasterVolume(5,(int)g_soundGlobals.mpegVolume);
  FastMemSet(uVar21 - 0x260,0,0x78);
  FastMemSet(uVar21 - 0x1e8,0,0x78);
  FastMemSet(uVar21 - 0x170,0,0x78);
  pcVar49 = &g_SoundChannels[0].state;
  pSVar38 = g_SoundChannels;
  ppMVar40 = &g_SoundChannels[0].pMoby;
  ppvVar41 = &g_SoundChannels[0].pSoundDef;
  puVar14[0x48] = 0x9637d4;
  puVar14[0x47] = ZEXT48(g_SoundChannels);
  pfVar44 = g_SoundChannels[0].pos;
  puVar14[0x46] = 0x9637e8;
  puVar14[0x45] = 0x9637d8;
  pcVar47 = &g_SoundChannels[0].flags;
  dVar57 = 1.0;
  iVar34 = 0;
  dVar56 = 0.5;
  pfVar43 = g_SoundChannels[0].offset;
  pfVar45 = g_SoundChannels[0].pos + 2;
  piVar37 = &g_SoundChannels[0].vol;
  lVar50 = lVar51;
  puVar35 = puVar36;
  pfVar52 = pfVar44;
  do {
    cVar31 = *pcVar49;
    if ((cVar31 == '\a') || ((pSVar38->handle != 0 && (pSVar38->handle != -1)))) {
      iVar22 = *(int *)(puVar35 + 0x88);
      bVar19 = false;
      if ((iVar22 != 0) &&
         ((*(char *)(iVar22 + 0x20) == -2 || (bVar19 = false, *(char *)(iVar22 + 0x20) == -3)))) {
        cVar31 = *pcVar49;
        bVar19 = true;
        *ppMVar40 = (MobyInstance *)0x0;
      }
      iVar26 = (int)lVar50;
      if ((cVar31 == '\x04') ||
         ((bVar19 && cVar31 != '\x06' && (*(char *)((int)*ppvVar41 + 0x18) != '\0')))) {
        *(undefined4 *)(iVar26 + 0xc0) = 0x20;
      }
      else if (((g_gameMode == GAME_MODE_SCENE || g_gameMode == GAME_MODE_NORMAL) ||
               (g_gameMode == GAME_MODE_SPACE)) || (cVar31 == '\a')) {
        dVar59 = dVar68;
        dVar58 = dVar68;
        dVar60 = dVar68;
        if ((*ppMVar40 != (MobyInstance *)0x0) && ((*pcVar47 & 8U) == 0)) {
          if ((*pcVar47 & 0x40U) == 0) {
            pMVar10 = *ppMVar40;
            *pfVar45 = (float)((double)*pfVar45 - dVar57);
            fVar23 = (pMVar10->pos).x;
            fVar1 = *pfVar52;
            fVar2 = (pMVar10->pos).y;
            fVar3 = pfVar52[1];
            fVar4 = (pMVar10->pos).z;
            fVar5 = pfVar52[2];
            *pfVar52 = fVar23;
            pfVar52[1] = fVar2;
            pfVar52[2] = fVar4;
            pfVar52[3] = (pMVar10->pos).w;
            *pfVar45 = (float)((double)*pfVar45 + dVar57);
            dVar59 = (double)(fVar23 - fVar1);
            dVar58 = (double)(fVar2 - fVar3);
            dVar60 = (double)(fVar4 - fVar5);
          }
          else {
            fVar23 = pfVar43[1];
            fVar1 = *pfVar43;
            fVar2 = *(float *)(iVar22 + 0xdc);
            fVar3 = *(float *)(iVar22 + 0xcc);
            fVar4 = pfVar43[2];
            fVar5 = *(float *)(iVar22 + 0xec);
            fVar6 = pfVar43[3];
            fVar15 = *(float *)(iVar22 + 0xe0) * fVar4 +
                     *(float *)(iVar22 + 0xc0) * fVar1 + *(float *)(iVar22 + 0xd0) * fVar23 +
                     *(float *)(iVar22 + 0x10);
            fVar7 = *pfVar52;
            fVar16 = *(float *)(iVar22 + 0xe4) * fVar4 +
                     *(float *)(iVar22 + 0xc4) * fVar1 + *(float *)(iVar22 + 0xd4) * fVar23 +
                     *(float *)(iVar22 + 0x14);
            fVar17 = *(float *)(iVar22 + 0xe8) * fVar4 +
                     *(float *)(iVar22 + 200) * fVar1 + *(float *)(iVar22 + 0xd8) * fVar23 +
                     *(float *)(iVar22 + 0x18);
            fVar8 = pfVar52[1];
            fVar9 = pfVar52[2];
            *pfVar52 = fVar15;
            pfVar52[1] = fVar16;
            pfVar52[2] = fVar17;
            pfVar52[3] = fVar5 * fVar4 + fVar3 * fVar1 + fVar2 * fVar23 + fVar6;
            dVar59 = (double)(fVar15 - fVar7);
            dVar58 = (double)(fVar16 - fVar8);
            dVar60 = (double)(fVar17 - fVar9);
          }
        }
        fVar23 = GameCamera.posY - pfVar52[1];
        fVar1 = GameCamera.posX - *pfVar52;
        fVar2 = GameCamera.posZ - pfVar52[2];
        dVar64 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar23 * fVar23);
        dVar61 = dVar68;
        dVar62 = dVar68;
        dVar63 = dVar68;
        if ((double)(float)SQRT(dVar64) != dVar68) {
          dVar61 = 1.0 / SQRT(dVar64);
          dVar61 = (double)(float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 -
                                                   dVar57) * (double)(float)(dVar61 * dVar56) +
                                  dVar61);
          dVar61 = (double)(float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 -
                                                   dVar57) * (double)(float)(dVar61 * dVar56) +
                                  dVar61);
          fVar3 = (float)(-(double)(float)((double)(float)(dVar64 * dVar61) * dVar61 - dVar57) *
                          (double)(float)(dVar61 * dVar56) + dVar61);
          dVar61 = (double)(fVar1 * fVar3);
          dVar62 = (double)(fVar23 * fVar3);
          dVar63 = (double)(fVar2 * fVar3);
        }
        bVar28 = *pcVar47;
        *(float *)(iVar26 + 0x1b0) =
             (float)(dVar63 * (double)(float)(dVar60 - dVar65) +
                    (double)(float)(dVar61 * (double)(float)(dVar59 - dVar67) +
                                   (double)(float)(dVar62 * (double)(float)(dVar58 - dVar66))));
        if ((bVar28 & 0x10) == 0) {
          sd = (float *)pSVar38->pSoundDef;
          iVar22 = sound_GetFade(SQRT((pfVar52[2] - GameCamera.posZ) *
                                      (pfVar52[2] - GameCamera.posZ) +
                                      (*pfVar52 - GameCamera.posX) * (*pfVar52 - GameCamera.posX) +
                                      (pfVar52[1] - GameCamera.posY) *
                                      (pfVar52[1] - GameCamera.posY)),*sd,sd[1],sd);
          uVar24 = iVar22 * *piVar37;
          pvVar11 = *ppvVar41;
          uVar24 = ((int)uVar24 >> 10) + (uint)((int)uVar24 < 0 && (uVar24 & 0x3ff) != 0);
          *(uint *)(iVar26 + 0x138) = uVar24;
          if ((*(byte *)((int)pvVar11 + 0x19) & 2) == 0) {
            *(uint *)(iVar26 + 0xc0) = *(uint *)(iVar26 + 0xc0) | 8;
          }
        }
        else {
          uVar24 = *piVar37;
          iVar22 = 0x400;
          *(uint *)(iVar26 + 0x138) = uVar24;
        }
        if (((uVar20 != 0) && ((*(byte *)((int)*ppvVar41 + 0x19) & 4) == 0)) &&
           (dVar69 < (double)*pfVar45)) {
          uVar24 = ((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0);
          *(uint *)(iVar26 + 0x138) = uVar24;
        }
        uVar12 = *(uint *)(iVar26 + 0xc0);
        *(uint *)(iVar26 + 0xc0) = uVar12 | 1;
        if ((iVar22 < 0x20 && (int)uVar24 < 0x20) && ((*pcVar47 & 4U) != 0)) {
          *(undefined4 *)(iVar26 + 0xc0) = 0x20;
        }
        else if (((*pcVar47 & 1U) == 0) &&
                (bVar28 = *pcVar47, *(uint *)(iVar26 + 0xc0) = uVar12 | 3, (bVar28 & 0x20) == 0)) {
          *(uint *)(iVar26 + 0xc0) = uVar12 | 7;
        }
      }
      else {
        *(undefined4 *)(iVar26 + 0xc0) = 0x10;
      }
    }
    iVar34 = iVar34 + 1;
    pSVar38 = pSVar38 + 1;
    puVar35 = puVar35 + 0x70;
    piVar37 = piVar37 + 0x1c;
    pcVar49 = pcVar49 + 0x70;
    ppvVar41 = ppvVar41 + 0x1c;
    pfVar43 = pfVar43 + 0x1c;
    pfVar45 = pfVar45 + 0x1c;
    ppMVar40 = ppMVar40 + 0x1c;
    pcVar47 = pcVar47 + 0x70;
    pfVar52 = pfVar52 + 0x1c;
    lVar50 = lVar50 + 4;
  } while (iVar34 < 0x1e);
  uVar24 = 0;
  iVar34 = 0;
  lVar50 = lVar51;
  puVar35 = puVar36;
  do {
    iVar22 = (int)lVar50;
    if ((*(uint *)(iVar22 + 0xc0) & 8) != 0) {
      if (puVar35[0x74] == '\a') {
        if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) &&
           (g_FrontEnd == '\0')) {
          if (worldUpdateTime != DAT_009644f8) {
            iVar26 = 0;
            pfVar52 = (float *)&DAT_00964500;
            do {
              sound_CamOfs(pfVar52);
              iVar26 = iVar26 + 1;
              pfVar52 = pfVar52 + 4;
            } while (iVar26 < 6);
            DAT_009644f8 = worldUpdateTime;
          }
          lVar42 = 0;
          iVar27 = 0x963814;
          iVar26 = 0;
          puVar48 = &DAT_00964500;
          pbVar53 = (byte *)((int)g_SoundChannels[0].offset + iVar34 + 0x14);
          do {
            bVar28 = sound_Occl(puVar35 + 0x70,puVar48);
            *pbVar53 = bVar28;
            lVar55 = 5;
            pbVar25 = pbVar53;
            do {
              pbVar25 = pbVar25 + 1;
              *pbVar25 = *(byte *)(iVar34 + iVar27);
              lVar55 = lVar55 + -1;
            } while (lVar55 != 0);
            bVar28 = *pbVar53;
            iVar26 = iVar26 + 6;
            puVar48 = puVar48 + 0x10;
            pbVar53 = pbVar53 + 6;
            iVar27 = iVar27 + 6;
            lVar42 = lVar42 + 6 + (ZERO_MASK((uint)bVar28) & lVar42 - (lVar42 + 6))
            ;
          } while (iVar26 < 0x24);
          iVar26 = (int)lVar42;
          if (iVar26 < 0x24) {
            if (0x12 < iVar26) {
              *(int *)(iVar22 + 0x138) = ((0x24 - iVar26) * *(int *)(iVar22 + 0x138)) / 0x12;
            }
          }
          else {
            *(undefined4 *)(iVar22 + 0x138) = 0;
          }
        }
      }
      else {
        if (((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) &&
           (g_FrontEnd == '\0')) {
          uVar12 = worldUpdateTime & 3;
          lVar42 = (ulonglong)*(uint *)(puVar35 + 0xb0) +
                   (((ulonglong)*(uint *)(puVar35 + 0xb0) + 1 & 0xffffffff) / 0x24) * -0x24;
          uVar18 = (uVar24 ^ worldUpdateTime) & 1;
          iVar26 = (int)lVar42;
          iVar27 = iVar26 + 1;
          *(int *)(puVar35 + 0xb0) = iVar27;
          if (uVar18 + ((uint)(ZERO_MASK(((byte)puVar35[0x75] & 4))) &
                       ((((uVar24 & 3) - uVar12) == 0)) - uVar18) == 0) {
            uVar39 = (lVar42 + 0x24U & 0xffffffff) / 0x24;
            *(undefined1 *)(iVar26 + 0x963815 + iVar34) =
                 *(undefined1 *)
                  ((iVar27 - ((int)(uVar39 << 5) + (int)(uVar39 << 2))) + 0x963837 + iVar34);
          }
          else {
            uVar29 = sound_Occl(puVar35 + 0x70,uVar21 - 0x2b0);
            *(undefined1 *)(*(int *)(puVar35 + 0xb0) + 0x963814 + iVar34) = uVar29;
          }
        }
        iVar26 = FastSumChars(puVar35 + 0xb4,0x24);
        if (iVar26 < 0x24) {
          if (0x12 < iVar26) {
            *(int *)(iVar22 + 0x138) = ((0x24 - iVar26) * *(int *)(iVar22 + 0x138)) / 0x12;
          }
        }
        else {
          *(undefined4 *)(iVar22 + 0x138) = 0;
        }
      }
    }
    uVar24 = uVar24 + 1;
    lVar50 = lVar50 + 4;
    puVar35 = puVar35 + 0x70;
    iVar34 = iVar34 + 0x70;
  } while ((int)uVar24 < 0x1e);
  uVar46 = puVar14[0x48];
  uVar54 = puVar14[0x47];
  uVar39 = puVar14[0x46];
  uVar30 = puVar14[0x45];
  FastNormalizeRMtx4(uVar21 - 0x2a0,0x951710);
  iVar34 = 0;
  ppvVar41 = &g_SoundChannels[0].pSoundInstance;
  dVar69 = 300.0;
  do {
    iVar22 = (int)lVar51;
    if (*(int *)(iVar22 + 0xc0) != 0) {
      uVar24 = *(uint *)(iVar22 + 0xc0);
      uVar13 = *(undefined4 *)(puVar36 + 0x70);
      *(undefined4 *)uVar54 = 0xffffffff;
      pcVar49 = (char *)uVar46;
      if ((uVar24 & 0x20) == 0) {
        if ((uVar24 & 0x10) == 0) {
          iVar26 = *(int *)(puVar36 + 0x84);
          uVar33 = 0;
          uVar32 = (ZERO_MASK(iVar26) & 0xfffffffffffffffeU) + 6;
          if ((uVar24 & 2) != 0) {
            uVar32 = uVar32 | 8;
            uVar33 = sound_GetPan(uVar54,pfVar44,uVar21 - 0x2a0);
            uVar24 = *(uint *)(iVar22 + 0xc0);
          }
          iVar27 = 0;
          if ((uVar24 & 4) != 0) {
            uVar32 = uVar32 | 1;
            FastDoubleToInt((double)(float)((double)*(float *)(iVar22 + 0x1b0) * dVar69));
            iVar27 = FUN_00505d30();
          }
          if ((uVar20 != 0) && ((*(byte *)(*(int *)uVar30 + 0x19) & 8) == 0)) {
            iVar27 = iVar27 + -0x5f4;
            uVar32 = uVar32 | 1;
          }
          if (*pcVar49 == '\a') {
            *pcVar49 = '\x01';
            FUN_005062f4(*(undefined4 *)(*(int *)(puVar36 + 0x78) + 0x1c),
                         *(undefined2 *)(*(int *)(puVar36 + 0x78) + 0x1a),
                         *(undefined4 *)(iVar22 + 0x138),uVar33,iVar27,iVar26,
                         &PTR_sound_PlayCB_00707c40,uVar54);
          }
          else {
            snd_SetSoundParams_CB(uVar13,uVar32,*(undefined4 *)(iVar22 + 0x138),uVar33,iVar27,iVar26,
                         &PTR_sound_FreshenCB_00707c48,uVar54);
          }
        }
        else {
          snd_SoundIsStillPlaying_CB(uVar13,&PTR_sound_FreshenCB_00707c48,uVar54);
        }
      }
      else if (*pcVar49 == '\a') {
        *(undefined4 *)uVar39 = 0;
        *ppvVar41 = (void *)0x0;
        *pcVar49 = '\0';
      }
      else {
        snd_StopVAGStream(uVar13);
        *pcVar49 = '\x06';
        snd_SoundIsStillPlaying_CB(uVar13,&PTR_sound_FreshenCB_00707c48,uVar54);
      }
    }
    iVar34 = iVar34 + 1;
    uVar39 = uVar39 + 0x70;
    uVar54 = uVar54 + 0x70;
    ppvVar41 = ppvVar41 + 0x1c;
    puVar36 = puVar36 + 0x70;
    pfVar44 = pfVar44 + 0x1c;
    uVar30 = uVar30 + 0x70;
    uVar46 = uVar46 + 0x70;
    lVar51 = lVar51 + 4;
  } while (iVar34 < 0x1e);
  music_Update();
  STUB_00505f4c();
  STUB_00505d20();
  STUB_00505f50();
  DAT_009637cc = 0;
  return 0;
}


// 0x015cc7c (0x58 bytes)
int IsMobyPlayingSound(MobyInstance *pMoby,int handle)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((-1 < handle) &&
      (iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4),
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) == pMoby)) &&
     ((cVar1 = *(char *)((int)g_SoundChannels + iVar2 + 4), cVar1 == '\x01' || (cVar1 == '\x02'))))
  {
    iVar3 = 1;
  }
  return iVar3;
}


// 0x015ccd4 (0xb0 bytes)
// strings: 00653724: 'host0:c:\\data\\levels\\level%d\\level.wad'

undefined8 sound_LoadLevelWadDebug(longlong param_1)

{
  undefined8 uVar1;
  char acStack_60 [64];
  
  uVar1 = 0;
  if (g_SoundLoadBusy == 0) {
    g_SoundLoadBusy = 1;
    snprintf(acStack_60,"host0:c:\\data\\levels\\level%d\\level.wad",Level);
    uVar1 = FUN_00505c6c(acStack_60,(int)(param_1 << 0xb));
    STUB_00505f48();
    g_SoundLoadBusy = 0;
  }
  return uVar1;
}


// 0x015cd84 (0x2c bytes)
void ____Unused_SetStride20Field1c(int param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      param_1 = param_1 + 0x20;
    } while (0 < param_3);
  }
  return;
}


// 0x015cdb0 (0x60 bytes)
void sound_Kill(int handle)

{
  char cVar1;
  int iVar2;
  
  if (-1 < handle) {
    iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4);
    cVar1 = *(char *)((int)g_SoundChannels + iVar2 + 4);
    if (cVar1 == '\a') {
      *(undefined4 *)((int)g_SoundChannels + iVar2 + 0x18) = 0;
      *(undefined4 *)((int)g_SoundChannels + iVar2 + 0x1c) = 0;
      *(undefined1 *)((int)g_SoundChannels + iVar2 + 4) = 0;
    }
    else if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      *(undefined1 *)((int)g_SoundChannels + iVar2 + 4) = 4;
    }
  }
  return;
}


// 0x015ce18 (0x314 bytes)
int sound_Play(void *sd,int flags,MobyInstance *pMoby,float *pos,int vol_mod)

{
  float *sd_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(short *)((int)sd + 0x1a) < 0) {
    iVar6 = -1;
  }
  else if (((uint)*(byte *)((int)sd + 0x18) == 0) == ((flags & 4) == 0)) {
    iVar4 = 0x1a;
    if ((pMoby != (MobyInstance *)0x0) &&
       (((g_heroMobyPtr == pMoby || (g_currentWeaponMoby == pMoby)) || (pMoby->oClass == FRAME)))) {
      iVar4 = 0x1e;
    }
    lVar5 = 0;
    iVar6 = 0;
    if (iVar4 != 0) {
      do {
        iVar6 = (int)lVar5;
        if (*(char *)((int)g_SoundChannels + ((int)(lVar5 << 7) - (int)(lVar5 << 4)) + 4) == '\0')
        break;
        iVar6 = iVar6 + 1;
        lVar5 = (longlong)iVar6;
      } while (iVar6 < iVar4);
    }
    if (iVar6 < iVar4) {
      g_SoundChannels[iVar6].bank_id = *(short *)((int)sd + 0x1a);
      g_SoundChannels[iVar6].pSoundDef = sd;
      g_SoundChannels[iVar6].sound_index = -1;
      g_SoundChannels[iVar6].vol = vol_mod;
      g_SoundChannels[iVar6].pMoby = (MobyInstance *)0x0;
      g_SoundChannels[iVar6].pSoundInstance = (void *)0x0;
      *(undefined1 *)g_SoundChannels[iVar6].offset = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 1) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 2) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 3) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 1) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 5) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 6) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 7) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 2) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 9) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 10) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xb) = 0;
      *(undefined1 *)(g_SoundChannels[iVar6].offset + 3) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xd) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xe) = 0;
      *(undefined1 *)((int)g_SoundChannels[iVar6].offset + 0xf) = 0;
      if ((pos == (float *)0x0) && (pMoby == (MobyInstance *)0x0)) {
        g_SoundChannels[iVar6].pos[3] = 0.0;
        g_SoundChannels[iVar6].pos[2] = 0.0;
        flags = flags | 0x11;
        g_SoundChannels[iVar6].pos[1] = 0.0;
        g_SoundChannels[iVar6].pos[0] = 0.0;
      }
      else if (pMoby == (MobyInstance *)0x0) {
        g_SoundChannels[iVar6].pos[0] = *pos;
        g_SoundChannels[iVar6].pos[1] = pos[1];
        g_SoundChannels[iVar6].pos[2] = pos[2];
        g_SoundChannels[iVar6].pos[3] = pos[3];
      }
      else {
        g_SoundChannels[iVar6].pos[0] = (pMoby->pos).x;
        g_SoundChannels[iVar6].pos[1] = (pMoby->pos).y;
        g_SoundChannels[iVar6].pos[2] = (pMoby->pos).z;
        g_SoundChannels[iVar6].pos[3] = (pMoby->pos).w;
        g_SoundChannels[iVar6].pos[2] = g_SoundChannels[iVar6].pos[2] + 1.0;
      }
      if ((flags & 0x10U) == 0) {
        fVar1 = g_SoundChannels[iVar6].pos[1] - GameCamera.posY;
        fVar2 = g_SoundChannels[iVar6].pos[0] - GameCamera.posX;
        sd_00 = (float *)g_SoundChannels[iVar6].pSoundDef;
        fVar3 = g_SoundChannels[iVar6].pos[2] - GameCamera.posZ;
        vol_mod = sound_GetFade(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1),*sd_00,sd_00[1],
                                sd_00);
      }
      if (vol_mod < 0x20) {
        iVar6 = -1;
      }
      else {
        g_SoundChannels[iVar6].flags = (char)flags;
        g_SoundChannels[iVar6].state = '\a';
        g_SoundChannels[iVar6].unk_40 = 0;
        iVar4 = *(int *)((int)sd + 0x14);
        if (iVar4 != *(int *)((int)sd + 0x10)) {
          iVar4 = MB_randInt(iVar4 - *(int *)((int)sd + 0x10));
          iVar4 = iVar4 + *(int *)((int)sd + 0x10);
        }
        g_SoundChannels[iVar6].pitch = iVar4;
        g_SoundChannels[iVar6].handle = -1;
      }
    }
    else {
      iVar6 = -1;
    }
  }
  else {
    iVar6 = -1;
  }
  return iVar6;
}


// 0x015d12c (0xd8 bytes)
int PlayMobySound(int sound,int flags,MobyInstance *pMoby)

{
  MobyClass *pMVar1;
  int iVar2;
  int iVar3;
  
  if (pMoby == (MobyInstance *)0x0) {
    iVar2 = -1;
  }
  else {
    pMVar1 = pMoby->pClass;
    if (pMVar1 == (MobyClass *)0x0) {
      iVar2 = -1;
    }
    else if (pMVar1->SoundDefs == (void *)0x0) {
      iVar2 = -1;
    }
    else if (sound < (int)(uint)pMVar1->sound_cnt) {
      iVar2 = sound_Play((void *)((int)pMVar1->SoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,
                         0x400);
      if (-1 < iVar2) {
        iVar3 = (int)((longlong)iVar2 << 7) - (int)((longlong)iVar2 << 4);
        *(MobyInstance **)((int)g_SoundChannels + iVar3 + 0x18) = pMoby;
        *(short *)((int)g_SoundChannels + iVar3 + 0xe) = (short)sound;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}


// 0x015d204 (0xd0 bytes)
int sound_MobyPlay_oClass(int sound,int flags,MobyInstance *pMoby,int oClass)

{
  MobyClass *pMVar1;
  int iVar2;
  int iVar3;
  
  pMVar1 = MobyClasses[(byte)(&MobyClassLookup)[oClass]];
  if (pMVar1 == (MobyClass *)0x0) {
    iVar2 = -1;
  }
  else if (sound < (int)(uint)pMVar1->sound_cnt) {
    iVar2 = sound_Play((void *)((int)pMVar1->SoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,
                       0x400);
    if (-1 < iVar2) {
      iVar3 = (int)((longlong)iVar2 << 7) - (int)((longlong)iVar2 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar3 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar3 + 0xe) = (short)sound;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// 0x015d2d4 (0xac bytes)
int sound_CorePlay(int sound,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  
  if (sound < g_CoreSoundCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + sound * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)sound;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// 0x015d380 (0xb4 bytes)
int sound_LevelPlay(int sound,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = sound + g_CoreSoundCnt;
  if (iVar3 < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + iVar3 * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)iVar3;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// 0x015d434 (0xa8 bytes)
int sound_AmbientPlay(int sound,int flags,void *pSoundInstance,int vol_mod)

{
  int iVar1;
  int iVar2;
  
  if (sound < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + sound * 0x20),flags,(MobyInstance *)0x0,
                       (float *)((int)pSoundInstance + 0x40),vol_mod);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(void **)((int)g_SoundChannels + iVar2 + 0x1c) = pSoundInstance;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)sound;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// 0x015d4dc (0xdc bytes)
int sound_FootstepPlay
              (int ground_type,int right_foot,int magneboots,int flags,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)(byte)(&DAT_00731be8)[Level] + ground_type * 4 + right_foot * 2 + magneboots +
          g_CoreSoundCnt;
  if (iVar3 < g_TotalSoundDefCnt) {
    iVar1 = sound_Play((void *)(g_pSoundDefs + iVar3 * 0x20),flags,pMoby,(float *)0x0,0x400);
    if (-1 < iVar1) {
      iVar2 = (int)((longlong)iVar1 << 7) - (int)((longlong)iVar1 << 4);
      *(MobyInstance **)((int)g_SoundChannels + iVar2 + 0x18) = pMoby;
      *(short *)((int)g_SoundChannels + iVar2 + 0xe) = (short)iVar3;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// 0x015d5b8 (0x58 bytes)
int sound_SetOffset(int handle,float *offset)

{
  g_SoundChannels[handle].flags = g_SoundChannels[handle].flags | 0x40;
  g_SoundChannels[handle].offset[0] = *offset;
  g_SoundChannels[handle].offset[1] = offset[1];
  g_SoundChannels[handle].offset[2] = offset[2];
  g_SoundChannels[handle].offset[3] = offset[3];
  return 1;
}


// 0x015d610 (0x54 bytes)
int sound_AddOffset(int handle,float *offset)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  
  fVar1 = offset[1];
  fVar2 = offset[2];
  iVar3 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4);
  pfVar4 = (float *)((int)g_SoundChannels + iVar3 + 0x30);
  *pfVar4 = *pfVar4 + *offset;
  *(float *)((int)g_SoundChannels + iVar3 + 0x34) =
       *(float *)((int)g_SoundChannels + iVar3 + 0x34) + fVar1;
  *(float *)((int)g_SoundChannels + iVar3 + 0x38) =
       *(float *)((int)g_SoundChannels + iVar3 + 0x38) + fVar2;
  return 1;
}


// 0x015d664 (0xac bytes)
int sound_ClearOffset(int handle)

{
  g_SoundChannels[handle].flags = g_SoundChannels[handle].flags & 0xbf;
  *(undefined1 *)g_SoundChannels[handle].offset = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 1) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 2) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 3) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 1) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 5) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 6) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 7) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 2) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 9) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 10) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xb) = 0;
  *(undefined1 *)(g_SoundChannels[handle].offset + 3) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xd) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xe) = 0;
  *(undefined1 *)((int)g_SoundChannels[handle].offset + 0xf) = 0;
  return 1;
}


// 0x015d710 (0x24 bytes)
int sound_SetVol(int handle,int vol)

{
  *(int *)((int)g_SoundChannels +
          ((int)((longlong)handle << 7) - (int)((longlong)handle << 4)) + 0x10) = vol;
  return 1;
}


// 0x015d734 (0x24 bytes)
int sound_SetPitch(int handle,int pitch)

{
  *(int *)((int)g_SoundChannels +
          ((int)((longlong)handle << 7) - (int)((longlong)handle << 4)) + 0x14) = pitch;
  return 1;
}


// 0x015d758 (0x54 bytes)
void sound_SetupAmbientFunctions(short *param_1)

{
  SoundVTable *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  for (pSVar1 = g_SoundVTable; (pSVar1->idx != 0xffffffff && (pSVar1->idx != (int)*param_1));
      pSVar1 = pSVar1 + 1) {
    iVar2 = iVar2 + 1;
  }
  param_1[1] = (short)iVar2;
  *(void **)(param_1 + 2) = g_SoundVTable[iVar2].update;
  return;
}


// 0x015d7ac (0x98 bytes)
void sound_UpdateAmbient(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < g_SoundCnt) {
    iVar4 = 0;
    iVar2 = g_SoundCnt;
    do {
      puVar1 = *(undefined4 **)(g_pSoundInstances + iVar4 + 4);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(g_pSoundInstances + iVar4);
        iVar2 = g_SoundCnt;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x90;
    } while (iVar3 < iVar2);
  }
  return;
}


// 0x015d844 (0x70 bytes)
void sound_SetReverb(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  DAT_009637c0 = param_1;
  if (DAT_009637c8 != param_2) {
    DAT_009637cb = DAT_009637cb | 1;
    DAT_009637c8 = (byte)param_2;
  }
  if (DAT_009637c4 != param_3) {
    DAT_009637cb = DAT_009637cb | 4;
    DAT_009637c4 = param_3;
  }
  if ((DAT_009637c9 != param_4) || (DAT_009637ca != param_5)) {
    DAT_009637cb = DAT_009637cb | 2;
    DAT_009637c9 = (byte)param_4;
    DAT_009637ca = (byte)param_5;
  }
  return;
}


// 0x015d8b4 (0xd4 bytes)
void sound_StopAllSounds(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  SoundData *pSVar4;
  longlong lVar5;
  
  STUB_00505f4c();
  STUB_00505d20();
  FUN_0060c0d0();
  do {
    iVar1 = STUB_00505d20();
  } while (iVar1 != 0);
  puVar3 = &DAT_00963760;
  lVar5 = 4;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3 = puVar3 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pSVar4 = g_SoundChannels;
  DAT_009637a0 = 0;
  lVar5 = 0xf;
  pcVar2 = &g_SoundChannels[0].state;
  do {
    pSVar4->handle = 0;
    *pcVar2 = '\0';
    pSVar4[1].handle = 0;
    pcVar2[0x70] = 0;
    pSVar4 = pSVar4 + 2;
    pcVar2 = pcVar2 + 0xe0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x015d988 (0x10 bytes)
void sound_BasicCB(int ret_val,int *data)

{
  if (data != (int *)0x0) {
    *data = ret_val;
  }
  return;
}


// 0x015d998 (0x40 bytes)
void sound_PlayCB(int ret_val,SoundData *data)

{
  if (data != (SoundData *)0x0) {
    data->handle = ret_val;
    if (ret_val == 0) {
      data->pMoby = (MobyInstance *)0x0;
      data->pSoundInstance = (void *)0x0;
      data->state = '\0';
    }
    else if (data->state == '\x01') {
      data->state = '\x02';
    }
  }
  return;
}


// 0x015d9d8 (0x28 bytes)
void sound_FreshenCB(int ret_val,SoundData *data)

{
  if ((data != (SoundData *)0x0) && (data->handle = ret_val, ret_val == 0)) {
    data->pMoby = (MobyInstance *)0x0;
    data->pSoundInstance = (void *)0x0;
    data->state = '\0';
  }
  return;
}



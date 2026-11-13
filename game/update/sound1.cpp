// game/update/sound1.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x17fa08-0x17fecc
#include "game/update/sound1.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x017fa08 (0x4c4 bytes)
void UpdateSound_1(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int handle;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar16 = (double)*(float *)((int)param_1 + 0xc);
  dVar17 = (double)(GameCamera.posY - *(float *)((int)param_1 + 0x44));
  dVar18 = (double)(GameCamera.posX - *(float *)((int)param_1 + 0x40));
  dVar23 = (double)(GameCamera.posZ - *(float *)((int)param_1 + 0x48));
  dVar21 = (double)(float)((double)*(float *)((int)param_1 + 0x74) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 100) *
                                                        dVar17)));
  fVar1 = (float)((double)*(float *)((int)param_1 + 0x74) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 100) * dVar16)));
  dVar22 = (double)(float)((double)*(float *)((int)param_1 + 0x70) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x60) *
                                                        dVar17)));
  fVar2 = (float)((double)*(float *)((int)param_1 + 0x70) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x60) * dVar16)));
  dVar20 = (double)(float)((double)*(float *)((int)param_1 + 0x78) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x68) *
                                                        dVar17)));
  fVar3 = (float)((double)*(float *)((int)param_1 + 0x78) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x68) * dVar16)));
  fVar5 = SQRT((float)(dVar20 * dVar20 +
                      (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21))));
  dVar19 = (double)*(float *)((int)param_1 + 0x7c);
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  piVar13 = *(int **)((int)param_1 + 8);
  dVar16 = (double)(float)((double)*(float *)((int)param_1 + 0x5c) * dVar18 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x6c) * dVar17));
  if (fVar1 <= fVar5) {
    iVar14 = piVar13[4];
    if (((iVar14 != -1) && (g_SoundChannels[iVar14].pSoundInstance == param_1)) &&
       (g_SoundChannels[iVar14].state != '\0')) {
      sound_Kill(iVar14);
    }
    piVar13[4] = -1;
  }
  else {
    dVar17 = 1.0;
    if (((1.0 < ABS(dVar22)) || (1.0 < ABS(dVar21))) || (1.0 < ABS(dVar20))) {
      dVar18 = dVar17;
      if ((dVar22 <= 1.0) && (dVar18 = dVar22, dVar22 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar22 = dVar18;
      dVar18 = dVar17;
      if ((dVar21 <= 1.0) && (dVar18 = dVar21, dVar21 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar21 = dVar18;
      if ((dVar20 <= 1.0) && (dVar17 = dVar20, dVar20 < -1.0)) {
        dVar17 = -1.0;
      }
      iVar14 = sound_GetFade
                         (fVar5,SQRT((float)(dVar17 * dVar17 +
                                            (double)(float)(dVar22 * dVar22 +
                                                           (double)(float)(dVar21 * dVar21)))),fVar1
                          ,(void *)(g_pSoundDefs + *piVar13 * 0x20));
      iVar15 = *piVar13;
    }
    else {
      iVar15 = *piVar13;
      iVar14 = *(int *)(g_pSoundDefs + iVar15 * 0x20 + 0xc);
      dVar17 = dVar20;
    }
    handle = piVar13[4];
    bVar4 = *(byte *)(g_pSoundDefs + iVar15 * 0x20 + 0x18);
    if ((g_SoundChannels[handle].pSoundInstance != param_1) ||
       (g_SoundChannels[handle].state == '\0')) {
      iVar15 = FastDecTimerS32(piVar13 + 3);
      if (iVar15 == 0) {
        piVar13[4] = -1;
        return;
      }
      handle = sound_AmbientPlay
                         (*piVar13,((uint)(ZERO_MASK((uint)bVar4)) & 0xfffffffc) +
                                   0x14,param_1,iVar14);
      piVar13[4] = handle;
      if (0 < piVar13[2]) {
        iVar15 = MB_randInt(piVar13[2] - piVar13[1]);
        handle = piVar13[4];
        piVar13[3] = (int)((float)(longlong)
                                  (animationSpeed * ((float)(longlong)(piVar13[1] + iVar15) + 0.5))
                          * 60.0);
      }
    }
    if (handle != -1) {
      sound_SetVol(handle,iVar14);
      fVar1 = *(float *)((int)param_1 + 0x24);
      fVar2 = *(float *)((int)param_1 + 0x28);
      fVar3 = *(float *)((int)param_1 + 0x2c);
      fVar5 = *(float *)((int)param_1 + 0x14);
      fVar6 = *(float *)((int)param_1 + 0x18);
      fVar7 = *(float *)((int)param_1 + 0x1c);
      fVar8 = *(float *)((int)param_1 + 0x34);
      fVar9 = *(float *)((int)param_1 + 0x38);
      fVar10 = *(float *)((int)param_1 + 0x3c);
      fVar11 = *(float *)((int)param_1 + 0x44);
      fVar12 = *(float *)((int)param_1 + 0x48);
      iVar14 = piVar13[4];
      g_SoundChannels[iVar14].pos[0] =
           (float)((double)*(float *)((int)param_1 + 0x30) * dVar17 +
                  (double)(float)((double)*(float *)((int)param_1 + 0x10) * dVar22 +
                                 (double)(float)((double)*(float *)((int)param_1 + 0x20) * dVar21)))
           + *(float *)((int)param_1 + 0x40);
      g_SoundChannels[iVar14].pos[1] =
           (float)((double)fVar8 * dVar17 +
                  (double)(float)((double)fVar5 * dVar22 + (double)(float)((double)fVar1 * dVar21)))
           + fVar11;
      g_SoundChannels[iVar14].pos[2] =
           (float)((double)fVar9 * dVar17 +
                  (double)(float)((double)fVar6 * dVar22 + (double)(float)((double)fVar2 * dVar21)))
           + fVar12;
      g_SoundChannels[iVar14].pos[3] =
           (float)((double)fVar10 * dVar17 +
                  (double)(float)((double)fVar7 * dVar22 + (double)(float)((double)fVar3 * dVar21)))
           + (float)(dVar19 * dVar23 + dVar16);
    }
  }
  return;
}



// game/update/sound2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x17fee0-0x1801fc
#include "game/update/sound2.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x017fee0 (0x31c bytes)
void UpdateSound_2(void *param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  fVar1 = *(float *)((int)param_1 + 0xc);
  fVar2 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
  fVar3 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
  fVar4 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
  dVar18 = 1.0;
  piVar13 = *(int **)((int)param_1 + 8);
  if ((ABS(*(float *)((int)param_1 + 0x70) * fVar4 +
           *(float *)((int)param_1 + 0x50) * fVar3 + *(float *)((int)param_1 + 0x60) * fVar2) <=
       ABS(*(float *)((int)param_1 + 0x70) * fVar1 +
           *(float *)((int)param_1 + 0x50) * fVar1 + *(float *)((int)param_1 + 0x60) * fVar1) + 1.0)
     && (ABS(*(float *)((int)param_1 + 0x74) * fVar4 +
             *(float *)((int)param_1 + 0x54) * fVar3 + *(float *)((int)param_1 + 100) * fVar2) <=
         ABS(*(float *)((int)param_1 + 0x74) * fVar1 +
             *(float *)((int)param_1 + 0x54) * fVar1 + *(float *)((int)param_1 + 100) * fVar1) + 1.0
        )) {
    if (ABS(*(float *)((int)param_1 + 0x78) * fVar4 +
            *(float *)((int)param_1 + 0x58) * fVar3 + *(float *)((int)param_1 + 0x68) * fVar2) <=
        ABS(*(float *)((int)param_1 + 0x78) * fVar1 +
            *(float *)((int)param_1 + 0x58) * fVar1 + *(float *)((int)param_1 + 0x68) * fVar1) + 1.0
       ) {
      if ((g_SoundChannels[piVar13[4]].pSoundInstance != param_1) ||
         (g_SoundChannels[piVar13[4]].state == '\0')) {
        iVar14 = FastDecTimerS32(piVar13 + 3);
        if (iVar14 == 0) {
          piVar13[4] = -1;
        }
        else {
          iVar14 = sound_AmbientPlay(*piVar13,0,param_1,0x400);
          piVar13[4] = iVar14;
          if (iVar14 != -1) {
            dVar17 = -1.0;
            dVar15 = (double)MB_randRangeFloat(-1.0,(float)dVar18);
            dVar16 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
            dVar18 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
            fVar1 = *(float *)((int)param_1 + 0x20);
            fVar2 = *(float *)((int)param_1 + 0x24);
            fVar3 = *(float *)((int)param_1 + 0x28);
            fVar4 = *(float *)((int)param_1 + 0x10);
            fVar5 = *(float *)((int)param_1 + 0x14);
            fVar6 = *(float *)((int)param_1 + 0x18);
            fVar7 = *(float *)((int)param_1 + 0x30);
            fVar8 = *(float *)((int)param_1 + 0x34);
            fVar9 = *(float *)((int)param_1 + 0x38);
            fVar10 = *(float *)((int)param_1 + 0x40);
            fVar11 = *(float *)((int)param_1 + 0x44);
            fVar12 = *(float *)((int)param_1 + 0x48);
            iVar14 = piVar13[4];
            g_SoundChannels[iVar14].pos[3] =
                 (float)((double)(float)((double)*(float *)((int)param_1 + 0x3c) * dVar18 +
                                        (double)(float)((double)*(float *)((int)param_1 + 0x1c) *
                                                        dVar15 + (double)(float)((double)*(float *)(
                                                  (int)param_1 + 0x2c) * dVar16))) +
                        (double)*(float *)((int)param_1 + 0x3c));
            g_SoundChannels[iVar14].pos[0] =
                 (float)((double)fVar7 * dVar18 +
                        (double)(float)((double)fVar4 * dVar15 +
                                       (double)(float)((double)fVar1 * dVar16))) + fVar10;
            g_SoundChannels[iVar14].pos[1] =
                 (float)((double)fVar8 * dVar18 +
                        (double)(float)((double)fVar5 * dVar15 +
                                       (double)(float)((double)fVar2 * dVar16))) + fVar11;
            g_SoundChannels[iVar14].pos[2] =
                 (float)((double)fVar9 * dVar18 +
                        (double)(float)((double)fVar6 * dVar15 +
                                       (double)(float)((double)fVar3 * dVar16))) + fVar12;
          }
          if (0 < piVar13[2]) {
            iVar14 = MB_randInt(piVar13[2] - piVar13[1]);
            piVar13[3] = (int)((float)(longlong)
                                      (animationSpeed *
                                      ((float)(longlong)(piVar13[1] + iVar14) + 0.5)) * 60.0);
          }
        }
      }
    }
  }
  return;
}



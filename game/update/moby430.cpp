// game/update/moby430.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x371ef4-0x3725ec
#include "game/update/moby430.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x0371ef4 (0x14 bytes)
void M430_00371ef4(void)

{
  DAT_008415d8 = 0x10000;
  return;
}


// 0x0371f28 (0x6c4 bytes)
/* Moby 430 */

void UpdateMoby_430(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  float local_60;
  float local_5c;
  float local_58;
  f32 local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  pMVar17 = g_MobyInstance;
  piVar8 = (int *)moby->pVar;
  fVar9 = moby->animationBlend;
  if (piVar8 == (int *)0x0) {
    DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        fVar7 = -(g_FrameTime * 2.0 - (float)piVar8[6]);
        piVar8[6] = (int)fVar7;
        if (fVar7 < 0.0) {
          piVar8[6] = 0;
          fVar7 = 0.0;
        }
        moby->animationBlend = fVar7;
        dVar20 = (double)(float)piVar8[3];
        dVar19 = (double)FastAddRots((float)piVar8[1] * 0.017453292 * (float)piVar8[6]);
        dVar19 = (double)FastWrapRot((float)dVar20,(float)dVar19);
        fVar7 = moby->animationBlend;
        (moby->rotation).z = (float)dVar19;
        if (fVar7 == fVar9) {
          iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 != 0) {
            iVar18 = piVar8[5];
            if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
               (g_SoundChannels[iVar18].state != '\0')) {
              sound_Kill(iVar18);
            }
            piVar8[5] = -1;
          }
        }
        else if ((piVar8[6] == 0x3f800000) || (piVar8[6] == 0)) {
          iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 != 0) {
            iVar18 = piVar8[5];
            if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
               (g_SoundChannels[iVar18].state != '\0')) {
              sound_Kill(iVar18);
            }
            piVar8[5] = -1;
          }
        }
        else {
          iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 == 0) {
            iVar18 = PlayMobySound(0,4,moby);
            piVar8[5] = iVar18;
          }
        }
        if (piVar8[6] == 0x3f800000) {
          moby->state = '\x04';
        }
      }
      else {
        if (uVar1 == '\x02') {
          iVar18 = piVar8[2];
          if (iVar18 == -1) {
            return;
          }
          iVar11 = piVar8[4];
          if (iVar11 == -1) {
            return;
          }
          fVar9 = g_MobyInstance[iVar18].pos.y;
          fVar7 = g_MobyInstance[iVar18].pos.x;
          fVar3 = Cuboids[iVar11].pos.y;
          fVar4 = Cuboids[iVar11].pos.x;
          fVar5 = fVar9 - fVar3;
          fVar6 = fVar7 - fVar4;
          if (0.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
            fVar3 = fVar3 - fVar9;
            fVar5 = g_MobyInstance[iVar18].pos.z;
            fVar4 = fVar4 - fVar7;
            fVar14 = Cuboids[iVar11].pos.z - fVar5;
            fVar6 = 0.0;
            fVar16 = SQRT(fVar14 * fVar14 + fVar4 * fVar4 + fVar3 * fVar3);
            fVar15 = (g_FrameTime * 5.0) / fVar16;
            fVar13 = fVar6;
            if (0.0 - fVar16 < 0.0) {
              fVar13 = fVar14 * fVar15;
            }
            fVar12 = fVar6;
            if (0.0 - fVar16 < 0.0) {
              fVar12 = fVar3 * fVar15;
            }
            if (0.0 - fVar16 < 0.0) {
              fVar6 = fVar4 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar13 = fVar14 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar12 = fVar3 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar6 = fVar4 * fVar15;
            }
            g_MobyInstance[iVar18].pos.z = fVar5 + fVar13;
            pMVar17[iVar18].pos.y = fVar9 + fVar12;
            pMVar17[iVar18].pos.x = fVar7 + fVar6;
            return;
          }
          piVar8[6] = 0x3f800000;
          moby->state = '\x03';
          piVar8[2] = -1;
          return;
        }
        if (uVar1 == '\x01') {
          iVar18 = *piVar8;
          if ((iVar18 != -1) && (g_MobyInstance[iVar18].oClass == BOLT_CRANK)) {
            pfVar10 = (float *)g_MobyInstance[iVar18].pVar;
            moby->animationBlend = *pfVar10;
            dVar20 = (double)(float)piVar8[3];
            dVar19 = (double)FastAddRots((float)piVar8[1] * 0.017453292 * *pfVar10);
            dVar19 = (double)FastWrapRot((float)dVar20,(float)dVar19);
            fVar7 = moby->animationBlend;
            (moby->rotation).z = (float)dVar19;
            if (fVar7 == fVar9) {
              iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 != 0) {
                iVar18 = piVar8[5];
                if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
                   (g_SoundChannels[iVar18].state != '\0')) {
                  sound_Kill(iVar18);
                }
                piVar8[5] = -1;
              }
            }
            else if ((*pfVar10 == 1.0) || (*pfVar10 == 0.0)) {
              iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 != 0) {
                iVar18 = piVar8[5];
                if (((iVar18 != -1) && (g_SoundChannels[iVar18].pMoby == moby)) &&
                   (g_SoundChannels[iVar18].state != '\0')) {
                  sound_Kill(iVar18);
                }
                piVar8[5] = -1;
              }
            }
            else {
              iVar18 = IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 == 0) {
                iVar18 = PlayMobySound(0,4,moby);
                piVar8[5] = iVar18;
              }
            }
            if ((*pfVar10 == 1.0) && (piVar8[4] != -1)) {
              moby->state = '\x02';
            }
          }
        }
        else if (uVar1 == '\0') {
          MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
          fVar2 = (moby->rotation).z;
          moby->unk58 = 0.0;
          piVar8[3] = (int)fVar2;
          moby->state = '\x01';
        }
      }
      if (piVar8[2] != -1) {
        GetBonePosition(moby,0,&local_60);
        GetBonePosition(moby,1,&local_50);
        pMVar17 = g_MobyInstance;
        iVar18 = piVar8[2];
        g_MobyInstance[iVar18].pos.x = local_60 + local_50;
        pMVar17[iVar18].pos.y = local_5c + local_4c;
        pMVar17[iVar18].pos.z = local_58 + local_48;
        pMVar17[iVar18].pos.w = local_54;
        pMVar17 = g_MobyInstance;
        iVar18 = piVar8[2];
        fVar9 = g_MobyInstance[iVar18].pos.y;
        fVar7 = g_MobyInstance[iVar18].pos.z;
        g_MobyInstance[iVar18].pos.x = g_MobyInstance[iVar18].pos.x * 0.5;
        pMVar17[iVar18].pos.y = fVar9 * 0.5;
        pMVar17[iVar18].pos.z = fVar7 * 0.5;
        dVar19 = (double)FastWrapRot((moby->rotation).z,1.5707964);
        g_MobyInstance[piVar8[2]].rotation.z = (float)dVar19;
      }
    }
  }
  return;
}



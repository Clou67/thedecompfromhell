// game/update/moby432.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x372898-0x372c84
// shared update function UpdateMoby_{432_1052}; registered for oClasses 432, 1052
#include "game/update/moby432.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0372898 (0x14 bytes)
void M1052_00372898(void)

{
  DAT_00841648 = 0x10000;
  return;
}


// shared update function, registered for oClasses 432, 1052
// 0x03728b8 (0x3cc bytes)
/* Moby 432
   Moby 1052 */

void UpdateMoby_432(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  int *piVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  MobyClass *pMVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = (int *)moby->pVar;
  fVar4 = moby->animationBlend;
  if (piVar3 == (int *)0x0) {
    DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 == 0) {
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
      MVar2 = moby->oClass;
      moby->unk58 = 0.0;
      moby->state = '\x01';
      piVar3[1] = -1;
      if (MVar2 == EUDORA_BRIDGE) {
        moby->oClass = BRIDGE_041C;
        uVar8 = (uint)DAT_00a358dc;
        moby->mClass = DAT_00a358dc;
        pMVar7 = MobyClasses[uVar8];
        moby->unk71 = -1;
        moby->pClass = pMVar7;
        moby->scale = pMVar7->gScale;
        UpdateMobyFrameData(moby);
        moby->collision = moby->pClass->collision;
        PostUpdateMobyLockTransform(moby);
      }
    }
    else if (bVar1 < 2) {
      iVar9 = *piVar3;
      if ((iVar9 != -1) && (g_MobyInstance[iVar9].oClass == BOLT_CRANK)) {
        pfVar5 = (float *)g_MobyInstance[iVar9].pVar;
        fVar6 = *pfVar5;
        moby->animationBlend = *pfVar5;
        if (fVar6 == fVar4) {
          iVar9 = IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 != 0) {
            iVar9 = piVar3[1];
            if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
               (g_SoundChannels[iVar9].state != '\0')) {
              sound_Kill(iVar9);
            }
            piVar3[1] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar9 = IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 != 0) {
            iVar9 = piVar3[1];
            if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
               (g_SoundChannels[iVar9].state != '\0')) {
              sound_Kill(iVar9);
            }
            piVar3[1] = -1;
          }
          PlayMobySound(1,0,moby);
          if ((moby->oClass == BRIDGE_041C) && (*pfVar5 == 1.0)) {
            moby->oClass = EUDORA_BRIDGE;
            uVar8 = (uint)DAT_00a35670;
            moby->mClass = DAT_00a35670;
            pMVar7 = MobyClasses[uVar8];
            moby->unk71 = -1;
            moby->pClass = pMVar7;
            moby->scale = pMVar7->gScale;
            UpdateMobyFrameData(moby);
            moby->collision = moby->pClass->collision;
            PostUpdateMobyLockTransform(moby);
            moby->state = '\x02';
          }
        }
        else {
          iVar9 = IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 == 0) {
            iVar9 = PlayMobySound(0,4,moby);
            piVar3[1] = iVar9;
          }
        }
      }
    }
    else if ((bVar1 < 3) && (iVar9 = IsMobyPlayingSound(moby,piVar3[1]), iVar9 != 0)) {
      iVar9 = piVar3[1];
      if ((iVar9 != -1) &&
         ((g_SoundChannels[iVar9].pMoby == moby &&
          (g_SoundChannels[iVar9].state != '\0')))) {
        sound_Kill(iVar9);
      }
      piVar3[1] = -1;
    }
  }
  return;
}



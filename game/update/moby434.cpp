// game/update/moby434.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x372c8c-0x3731e8
#include "game/update/moby434.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0372c8c (0x14 bytes)
void M434_00372c8c(void)

{
  DAT_008416b8 = 0x10000;
  return;
}


// 0x0372cb0 (0x538 bytes)
/* Moby 434 */

MobyInstance * UpdateMoby_434(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  MobyInstance *pMVar6;
  int iVar7;
  
  piVar4 = (int *)moby->pVar;
  fVar2 = moby->animationBlend;
  if (piVar4 == (int *)0x0) {
    pMVar6 = (MobyInstance *)DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    pMVar6 = (MobyInstance *)(uint)bVar1;
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
        pMVar6 = (MobyInstance *)0x0;
        moby->unk58 = 0.0;
        moby->state = '\x01';
        piVar4[2] = -1;
      }
    }
    else if (bVar1 < 2) {
      pMVar6 = (MobyInstance *)*piVar4;
      if ((pMVar6 != (MobyInstance *)0xffffffff) &&
         (pMVar6 = g_MobyInstance + (int)pMVar6, pMVar6->oClass == BOLT_CRANK)) {
        pfVar5 = (float *)pMVar6->pVar;
        if (pMVar6->state == '\x03') {
          fVar3 = *pfVar5;
          moby->animationBlend = 1.0 - fVar3;
          fVar3 = 1.0 - fVar3;
        }
        else {
          fVar3 = fVar2;
          if (*pfVar5 == 1.0) {
            if ((((piVar4[1] != -1) && (piVar4[3] == 0)) &&
                ((g_heroStateType < 2 ||
                 ((g_heroStateType == 9 || (g_heroStateType == 0xc)))))) &&
               (g_standingOnMoby == g_MobyInstance + piVar4[1])) {
              moby->state = '\x02';
            }
          }
          else {
            moby->state = '\x02';
          }
        }
        if (fVar3 == fVar2) {
          pMVar6 = (MobyInstance *)IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 != (MobyInstance *)0x0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (g_SoundChannels[iVar7].pMoby == moby)) &&
               (g_SoundChannels[iVar7].state != '\0')) {
              sound_Kill(iVar7);
            }
            pMVar6 = (MobyInstance *)0xffffffff;
            piVar4[2] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar7 = IsMobyPlayingSound(moby,piVar4[2]);
          if (iVar7 != 0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (g_SoundChannels[iVar7].pMoby == moby)) &&
               (g_SoundChannels[iVar7].state != '\0')) {
              sound_Kill(iVar7);
            }
            piVar4[2] = -1;
          }
          pMVar6 = (MobyInstance *)PlayMobySound(1,0,moby);
        }
        else {
          pMVar6 = (MobyInstance *)IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 == (MobyInstance *)0x0) {
            pMVar6 = (MobyInstance *)PlayMobySound(0,4,moby);
            piVar4[2] = (int)pMVar6;
          }
        }
      }
    }
    else if (bVar1 < 3) {
      fVar3 = g_FrameTime * 0.5 + fVar2;
      moby->animationBlend = fVar3;
      if (1.0 < fVar3) {
        moby->animationBlend = 1.0;
        fVar3 = 1.0;
      }
      pMVar6 = (MobyInstance *)*piVar4;
      if ((pMVar6 != (MobyInstance *)0xffffffff) &&
         (pMVar6 = g_MobyInstance + (int)pMVar6, pMVar6->oClass == BOLT_CRANK)) {
        pfVar5 = (float *)pMVar6->pVar;
        if (pMVar6->state == '\x03') {
          fVar3 = 1.0 - *pfVar5;
          moby->state = '\x01';
          moby->animationBlend = fVar3;
        }
        else {
          *pfVar5 = 1.0 - fVar3;
          pfVar5[6] = pfVar5[0xc] * 6.2831855 * (1.0 - fVar3);
          fVar3 = moby->animationBlend;
        }
        if (fVar3 == fVar2) {
          pMVar6 = (MobyInstance *)IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 != (MobyInstance *)0x0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (g_SoundChannels[iVar7].pMoby == moby)) &&
               (g_SoundChannels[iVar7].state != '\0')) {
              sound_Kill(iVar7);
            }
            pMVar6 = (MobyInstance *)0xffffffff;
            piVar4[2] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar7 = IsMobyPlayingSound(moby,piVar4[2]);
          if (iVar7 != 0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (g_SoundChannels[iVar7].pMoby == moby)) &&
               (g_SoundChannels[iVar7].state != '\0')) {
              sound_Kill(iVar7);
            }
            piVar4[2] = -1;
          }
          pMVar6 = (MobyInstance *)PlayMobySound(1,0,moby);
        }
        else {
          pMVar6 = (MobyInstance *)IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 == (MobyInstance *)0x0) {
            pMVar6 = (MobyInstance *)PlayMobySound(0,4,moby);
            piVar4[2] = (int)pMVar6;
          }
        }
      }
    }
    if (piVar4[1] != -1) {
      pMVar6 = (MobyInstance *)GetBonePosition(moby,0,&g_MobyInstance[piVar4[1]].pos);
    }
  }
  return pMVar6;
}



// game/update/moby830.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x47e760-0x47ebac
#include "game/update/moby830.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x047e760 (0x14 bytes)
void M830_0047e760(void)

{
  DAT_00877c2c = 0x10000;
  return;
}


// 0x047e7a8 (0x404 bytes)
/* Moby 830 */

MobyInstance * UpdateMoby_830(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  longlong lVar5;
  MobyInstance *pMVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  piVar4 = (int *)moby->pVar;
  if (moby->state == 0) {
    dVar11 = (double)MB_randRot();
    piVar4[3] = (int)(float)dVar11;
    uVar3 = moby->uid;
    (moby->pos).z = (moby->pos).z - 0.35;
    if ((((&g_Checkpoint.objState[0])[(short)uVar3] == '\0') &&
        ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
         & 1 << (uVar3 & 0x1f)) == 0)) &&
       ((piVar4[2] == 0 || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)))) {
      moby->state = '\x01';
      pMVar6 = (MobyInstance *)0x1;
    }
    else {
      moby->setByGroup = '\x02';
      moby->state = '\x02';
      moby->glowRgba = 0x80208020;
      iVar10 = *piVar4;
      pMVar6 = (MobyInstance *)0x2;
      if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
        iVar9 = 0;
        do {
          if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar4[1]) {
            *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
            iVar10 = *piVar4;
          }
          pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
          iVar9 = iVar9 + 0x10;
        } while ((int)pMVar6 < Splines[iVar10]->cnt);
      }
    }
  }
  else {
    pMVar6 = moby;
    if (moby->state < 2) {
      dVar12 = (double)FastWrapRot((float)piVar4[3],g_FrameTime * 6.2831855);
      dVar11 = (double)(float)(3.141592502593994 - dVar12);
      if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
        dVar11 = dVar12;
      }
      dVar13 = (double)(float)(-3.141592502593994 - dVar12);
      if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
        dVar13 = dVar11;
      }
      dVar11 = (double)(float)(dVar13 * dVar13);
      dVar15 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
      dVar14 = (double)(float)(dVar11 * dVar15);
      piVar4[3] = (int)(float)dVar12;
      lVar5 = FastDoubleToInt
                        ((double)((((float)(dVar11 * dVar14) * 2.601887e-06 +
                                   (float)(dVar14 * -0.0001980741071747616 +
                                          (double)(float)(dVar15 * 0.008333025500178337 +
                                                         (double)(float)((double)(float)(dVar11 * 
                                                  dVar13) * -0.16666656732559204 + dVar13)))) * 4.0
                                  - 3.0) * 128.0));
      lVar7 = lVar5 + (lVar5 + -0x20 >> 0x3f & 0x20U - lVar5);
      uVar8 = lVar7 + (0x80 - lVar5 >> 0x3f & 0x80U - lVar7);
      bVar1 = g_standingOnMoby == moby;
      moby->glowRgba =
           (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 | (uint)((uVar8 & 0xffffffff) << 0x10) |
           0x80000000;
      pMVar6 = (MobyInstance *)&g_heroMtx;
      if ((bVar1) && (pMVar6 = (MobyInstance *)(uint)g_framesNotGrounded, g_framesNotGrounded == 0))
      {
        bVar2 = moby->levelFlagIdx;
        uVar3 = moby->uid;
        (&g_CheckpointLive.objState[0])[(short)uVar3] = bVar2 + 2;
        if ((bVar2 == 0xff) ||
           (((&g_CheckpointLevelFlags)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&g_Checkpoint.objState[0])[(short)uVar3] = bVar2 + 2;
        }
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        moby->glowRgba = 0x80208020;
        pMVar6 = (MobyInstance *)PlayMobySound(0,0,moby);
        iVar10 = *piVar4;
        if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
          iVar9 = 0;
          do {
            if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar4[1]) {
              *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
              iVar10 = *piVar4;
            }
            pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
            iVar9 = iVar9 + 0x10;
          } while ((int)pMVar6 < Splines[iVar10]->cnt);
        }
      }
    }
  }
  return pMVar6;
}



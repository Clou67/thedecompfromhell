// game/update/moby1416.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2712b8-0x271700
#include "game/update/moby1416.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x02712b8 (0x14 bytes)
void M1416_002712b8(void)

{
  DAT_007a218c = 0x10000;
  return;
}


// 0x0271300 (0x400 bytes)
/* Moby 1416 */

MobyInstance * UpdateMoby_1416(MobyInstance *moby)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
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
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    dVar11 = (double)MB_randRot();
    piVar3[3] = (int)(float)dVar11;
    uVar2 = moby->uid;
    (moby->pos).z = (moby->pos).z - 0.35;
    if ((((&g_Checkpoint.objState[0])[(short)uVar2] == '\0') &&
        ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2))
         & 1 << (uVar2 & 0x1f)) == 0)) &&
       ((piVar3[2] == 0 || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)))) {
      moby->state = '\x01';
      pMVar6 = (MobyInstance *)0x1;
    }
    else {
      moby->setByGroup = '\x02';
      moby->state = '\x02';
      moby->glowRgba = 0x80208020;
      iVar10 = *piVar3;
      pMVar6 = (MobyInstance *)0x2;
      if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
        iVar9 = 0;
        do {
          if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar3[1]) {
            *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
            iVar10 = *piVar3;
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
      dVar12 = (double)FastWrapRot((float)piVar3[3],g_FrameTime * 6.2831855);
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
      piVar3[3] = (int)(float)dVar12;
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
        uVar2 = moby->uid;
        iVar9 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        iVar10 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        uVar4 = *(uint *)(&g_CheckpointBits + iVar10);
        *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar9) =
             *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar9) | 1 << (uVar2 & 0x1f);
        *(uint *)(&g_CheckpointBits + iVar10) = uVar4 | 1 << (uVar2 & 0x1f);
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        moby->glowRgba = 0x80208020;
        pMVar6 = (MobyInstance *)PlayMobySound(0,0,moby);
        iVar10 = *piVar3;
        if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
          iVar9 = 0;
          do {
            if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar3[1]) {
              *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
              iVar10 = *piVar3;
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



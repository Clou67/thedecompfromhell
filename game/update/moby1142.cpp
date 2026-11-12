// game/update/moby1142.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1def78-0x1df4c0
#include <stdio.h>
#include "game/update/moby1142.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby58.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x01def78 (0x548 bytes)
// strings: 00654750: 'ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n' | 00654790: 'ERRORS, killing moby %d \n' | 006547b0: 'spawn_amt_i: %d  spawn_each: %d\n' | 006547d8: ' spawn %d of %d at %3.3f,%3.3f,%3.3f dist:%f \n' | 00654808: 'spawn_each reduced to %d\n'

/* Moby 1142 */

void UpdateMoby_1142(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  Spline *pSVar4;
  float fVar5;
  int *piVar6;
  bool bVar7;
  int iVar9;
  int iVar10;
  longlong lVar8;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_b0;
  float local_ac;
  float local_a8;
  GPiece<4> local_a0;
  GPiece<4> local_9c;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    iVar10 = *piVar3;
    if (iVar10 == -1) {
      printf("ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n");
    }
    iVar13 = piVar3[1];
    if (iVar13 == -1) {
      printf("ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n");
    }
    else if (iVar10 != -1) {
      piVar3[8] = 0;
      iVar9 = 0;
      iVar10 = 0;
      if (0 < Splines[iVar13]->cnt) {
        do {
          iVar9 = iVar9 + 1;
          pSVar4 = Splines[iVar13];
          iVar13 = iVar9 - (iVar9 / pSVar4->cnt) * pSVar4->cnt;
          fVar1 = *(float *)((int)&pSVar4->points[0].y + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 5) * 4);
          fVar2 = *(float *)((int)&pSVar4->points[0].x + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 4) * 4);
          fVar5 = *(float *)((int)&pSVar4->points[0].z + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 6) * 4);
          *(float *)((int)&pSVar4->points[0].w + iVar10) =
               SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
          iVar13 = piVar3[1];
          pSVar4 = Splines[iVar13];
          piVar3[8] = (int)((float)piVar3[8] + *(float *)((int)&pSVar4->points[0].w + iVar10));
          iVar10 = iVar10 + 0x10;
        } while (iVar9 < pSVar4->cnt);
      }
      moby->state = '\x01';
      return;
    }
    printf("ERRORS, killing moby %d \n",moby->uid);
    DeleteMoby(moby);
  }
  else if ((moby->state < 2) &&
          (iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3), iVar10 != 0)) {
    piVar11 = &DAT_00764c40;
    if (DAT_00764c40 != -1) {
      iVar10 = 0;
      do {
        lVar14 = (longlong)*piVar11;
        dVar15 = (double)FastIntToDouble((&currentAmmoArray.field0_0x0)[*piVar11]);
        dVar16 = (double)FastIntToDouble
                                   (*(undefined2 *)((int)&DAT_00737d3e + (int)(lVar14 << 3) * 3));
        dVar19 = (double)(float)(dVar15 / dVar16);
        dVar17 = (double)MB_randRangeFloat(0.0,(float)piVar3[8]);
        if (((double)((float)piVar3[2] * 0.01) <= dVar19) &&
           (dVar19 < (double)((float)piVar3[3] * 0.01))) {
          fVar1 = (float)(dVar16 * (double)((float)piVar3[4] * 0.01) - dVar15);
          fVar2 = (float)(dVar16 * (double)((float)piVar3[5] * 0.01));
          fVar5 = fVar2;
          if (fVar2 - fVar1 < 0.0) {
            fVar5 = fVar1;
          }
          if ((piVar3[6] == 0) && (fVar5 = fVar2, fVar1 - fVar2 < 0.0)) {
            fVar5 = fVar1;
          }
          lVar8 = FastDoubleToInt((double)(fVar5 + 0.5));
          iVar13 = (int)lVar8 / piVar3[7];
          lVar12 = (longlong)iVar13 + (ZERO_MASK(iVar13) & lVar8 - iVar13);
          pSVar4 = Splines[piVar3[1]];
          printf("spawn_amt_i: %d  spawn_each: %d\n",lVar8,lVar12);
          if (0 < (int)lVar8) {
            dVar20 = 12.0;
            dVar19 = 10.0;
            dVar16 = 0.10000000149011612;
            dVar15 = 2.0;
            do {
              bVar7 = false;
              do {
                MB_PathMoveDist(dVar17,pSVar4,&local_b0,local_9c,local_a0);
                iVar13 = piVar3[9];
                if (iVar13 == -1) {
                  bVar7 = true;
                }
                else {
                  fVar1 = g_MobyInstance[iVar13].pos.y - local_ac;
                  fVar2 = g_MobyInstance[iVar13].pos.x - local_b0;
                  if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= dVar20) {
                    dVar17 = (double)(float)(dVar17 + dVar19);
                  }
                  else {
                    bVar7 = true;
                  }
                }
              } while (!bVar7);
              printf(" spawn %d of %d at %3.3f,%3.3f,%3.3f dist:%f \n",lVar14,lVar12,
                           (double)local_b0,(double)local_ac,(double)local_a8,dVar17);
              FUN_002ea758(&local_b0,lVar14,lVar12,0);
              dVar18 = (double)MB_randRangeFloat
                                         ((float)((double)(float)piVar3[8] * dVar16),(float)dVar15);
              iVar13 = (int)lVar8 - (int)lVar12;
              dVar17 = (double)(float)(dVar17 + dVar18);
              lVar8 = (longlong)iVar13;
              if (iVar13 < (int)lVar12) {
                printf("spawn_each reduced to %d\n",lVar8);
                lVar12 = lVar8;
              }
            } while (0 < iVar13);
          }
        }
        piVar11 = piVar11 + 1;
        piVar6 = (int *)((int)&DAT_00764c44 + iVar10);
        iVar10 = iVar10 + 4;
      } while (*piVar6 != -1);
    }
    moby->state = '\x02';
  }
  return;
}



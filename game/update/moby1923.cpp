// game/update/moby1923.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x2dbe78-0x2dc4dc
#include "game/update/moby1923.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1138.h"
#include "game/update/moby270.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x02dbe78 (0xa8 bytes)
MobyInstance * M1923_002dbe78(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar4 = g_MobyInstance + (*puVar3 & 0x7fff);
      if ((pMVar4->oClass == MORPH_O_RAY_CHICKEN) && (iVar2 = FUN_00321970(pMVar4), iVar2 != 0)) {
        return pMVar4;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}


// 0x02dbf30 (0x374 bytes)
/* Moby 1923 */

void UpdateMoby_1923(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ushort *puVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  GPiece<40> local_50;
  
  piVar3 = (int *)moby->pVar;
  iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[2]);
  if (iVar6 != 0) {
    bVar1 = moby->state;
    pMVar10 = g_MobyInstance + piVar3[1];
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        moby->state = '\x01';
        iVar6 = MB_randRange(0xb4,0x168);
        piVar3[3] = (int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
      }
    }
    else if (bVar1 < 2) {
      fVar4 = g_heroPosition.y - (pMVar10->pos).y;
      fVar5 = g_heroPosition.x - (pMVar10->pos).x;
      if ((3.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) &&
         (puVar8 = (ushort *)(&g_MobyGroups)[*piVar3], pMVar7 = g_MobyInstance,
         puVar8 != (ushort *)0x0)) {
        do {
          pMVar9 = pMVar7 + (*puVar8 & 0x7fff);
          if ((pMVar9->oClass == MORPH_O_RAY_CHICKEN) &&
             (iVar6 = FUN_00321970(pMVar9), pMVar7 = g_MobyInstance, iVar6 != 0)) {
            if (pMVar9 == (MobyInstance *)0x0) {
              return;
            }
            iVar6 = FastDecTimerS32(piVar3 + 3);
            if (iVar6 == 0) {
              return;
            }
            moby->state = '\x02';
            FUN_001dbce8(pMVar10);
            iVar6 = MB_randRange(0xb4,0x168);
            piVar3[3] = (int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
            return;
          }
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
        } while (-1 < (short)uVar2);
      }
    }
    else if (bVar1 < 3) {
      iVar6 = FUN_001dbd38(pMVar10);
      if (iVar6 < 1) {
        if (-1 < iVar6) {
          moby->state = '\x01';
        }
      }
      else if (iVar6 == 2) {
        moby->state = '\x01';
        puVar8 = (ushort *)(&g_MobyGroups)[*piVar3];
        if (puVar8 != (ushort *)0x0) {
          do {
            pMVar10 = g_MobyInstance + (*puVar8 & 0x7fff);
            if ((pMVar10->oClass == MORPH_O_RAY_CHICKEN) &&
               (iVar6 = FUN_00321970(pMVar10), iVar6 != 0)) {
              if (pMVar10 == (MobyInstance *)0x0) {
                return;
              }
              GetGroundZ(0x3fe0000000000000,local_50,0);
              FUN_003216b8(pMVar10);
              return;
            }
            uVar2 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (-1 < (short)uVar2);
        }
      }
    }
  }
  return;
}


// 0x02dc2a4 (0x14 bytes)
void M1923_002dc2a4(void)

{
  DAT_007f3e7c = 0x10000;
  return;
}


// 0x02dc2b8 (0x58 bytes)
void M1923_002dc2b8(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x02dc310 (0x58 bytes)
void M1923_002dc310(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x02dc368 (0x58 bytes)
void M1923_002dc368(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x02dc3c0 (0x38 bytes)
void M1923_002dc3c0(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x02dc3f8 (0x40 bytes)
longlong M1923_002dc3f8(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x02dc438 (0xa4 bytes)
undefined8 M1923_002dc438(int param_1,undefined4 *param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x220);
  if ((iVar2 == -1) ||
     (iVar2 = PointInsideComplexPoly
                        ((Vec4 *)(param_1 + 0x10),(Vec4 *)Splines[iVar2]->points,Splines[iVar2]->cnt
                        ), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  }
  return uVar1;
}



// game/update/moby815.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x46d660-0x46daf0
#include "game/update/moby815.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x046d660 (0x148 bytes)
MobyInstance * M815_0046d660(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  MobyInstance *local_20 [2];
  
  local_20[0] = (MobyInstance *)0x0;
  MB_GetFirstMobyInGroup(local_20,**(int **)(param_1 + 0x78),'\0','\0');
  local_20[0]->updateDistance = -0x80;
  pvVar1 = local_20[0]->pVar;
  local_20[0]->drawDistance = 0x80;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_20[0]->color = (int)((ulonglong)uVar3 >> 0x20);
  local_20[0]->light = (int)uVar3;
  local_20[0]->enabled = '\x01';
  local_20[0]->collision = local_20[0]->pClass->collision;
  local_20[0]->modeBits = local_20[0]->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
  local_20[0]->scale = local_20[0]->pClass->gScale;
  (local_20[0]->pos).x = *(f32 *)(param_1 + 0x10);
  (local_20[0]->pos).y = *(f32 *)(param_1 + 0x14);
  (local_20[0]->pos).z = *(f32 *)(param_1 + 0x18);
  (local_20[0]->pos).w = *(f32 *)(param_1 + 0x1c);
  (local_20[0]->rotation).x = *(f32 *)(param_1 + 0x40);
  (local_20[0]->rotation).y = *(f32 *)(param_1 + 0x44);
  (local_20[0]->rotation).z = *(f32 *)(param_1 + 0x48);
  (local_20[0]->rotation).w = *(f32 *)(param_1 + 0x4c);
  *(undefined4 *)((int)pvVar1 + 0x20) = 0x40400000;
  *(undefined4 *)((int)pvVar1 + 0x250) = 0x3f800000;
  uVar2 = FastDoubleToInt(0x40899999a0000000);
  *(undefined4 *)((int)pvVar1 + 0x170) = uVar2;
  *(undefined4 *)((int)pvVar1 + 0x224) = 0x41f00000;
  UpdateMobyTransform(local_20[0]);
  return local_20[0];
}


// 0x046d7c0 (0x330 bytes)
// inlined: FastAtan2 @0x46d98c
/* Moby 815 */

void UpdateMoby_815(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar14;
  undefined4 uVar15;
  longlong lVar13;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xd0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar12;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x17] = unaff_r30;
  bVar1 = moby->state;
  puVar9[0x18] = unaff_r31;
  piVar7 = (int *)moby->pVar;
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if ((((bVar1 < 2) && (-1 < *piVar7)) &&
           (iVar14 = MB_CountActiveMobysByGroup(*piVar7,0xc), iVar14 == 0)) &&
          (piVar7[2] < DAT_00877748)) {
    piVar7[2] = piVar7[2] + 1;
    iVar14 = M815_0046d660(moby);
    if (iVar14 != 0) {
      iVar8 = *(int *)(iVar14 + 0x78);
      *(undefined4 *)(iVar8 + 0x84) = 8;
      dVar22 = 0.800000011920929;
      uVar15 = FastDoubleToInt((double)(*(float *)(iVar8 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)(iVar8 + 0x80) = uVar15;
      *(float *)(iVar8 + 0x88) = (float)((double)*(float *)(iVar8 + 0x250) * dVar22);
      fVar2 = 0.0;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      *(undefined4 *)(iVar8 + 0xb0) = 0x40e00000;
      *(undefined4 *)(iVar8 + 0xb4) = 0x41500000;
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar5 = g_heroPosition.y - (moby->pos).y;
      fVar3 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar4;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar3 - fVar6;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar19 = uVar12 - 0xc0;
        lVar18 = uVar12 - 0x54;
        lVar16 = uVar12 - 0x44;
        lVar21 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x11) = fVar4;
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar4;
        *(float *)((int)puVar9 + 0x7c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar5;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar4;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x6c) * fVar4 * fVar4;
          iVar10 = (int)lVar18;
          lVar19 = lVar19 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar19 = uVar12 - 0x54;
        pfVar20 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar16 = lVar19;
        lVar18 = lVar13;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        do {
          iVar10 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      FastWrapRot(fVar2,3.1415927);
      MB_StartKick(iVar14,iVar8 + 0x60);
      *(undefined1 *)(iVar14 + 0x20) = 9;
    }
  }
  return;
}



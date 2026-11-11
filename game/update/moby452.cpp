// game/update/moby452.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3874f0-0x388c24
#include "game/update/moby452.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby13.h"

// 0x03874f0 (0x4c bytes)
void M452_003874f0(int param_1)

{
  MobyInstance *pMVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  pMVar1 = g_MobyInstance;
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = 0;
  piVar2 = (int *)(iVar3 + 0x158);
  do {
    if (pMVar1[*(int *)(iVar3 + 0x130)].oClass == TREE) {
      *piVar2 = (int)(pMVar1 + *(int *)(iVar3 + 0x130));
      piVar2 = piVar2 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 10);
  return;
}


// 0x0387588 (0x169c bytes)
// inlined: FastAtan2 @0x3877d8, FastAtan2 @0x387c34, FastAtan2 @0x3881ac, FastAtan2 @0x388608, FastAtan2 @0x388938
/* Moby 452 */

void UpdateMoby_452(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  f32 fVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  bool bVar11;
  uint uVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  byte bVar22;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  void *pvVar20;
  uint uVar21;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  void *pvVar28;
  int *piVar29;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar30;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x1f0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar14;
  puVar10[0x40] = in_LR;
  puVar10[0x38] = in_f26;
  puVar10[0x39] = in_f27;
  puVar10[0x3a] = in_f28;
  puVar10[0x3b] = in_f29;
  puVar10[0x3c] = in_f30;
  puVar10[0x3d] = in_f31;
  puVar10[0x37] = unaff_r31;
  puVar10[0x34] = unaff_r28;
  pvVar7 = moby->pVar;
  puVar10[0x36] = unaff_r30;
  puVar10[0x35] = unaff_r29;
  puVar10[0x33] = unaff_r27;
  puVar10[0x32] = unaff_r26;
  puVar10[0x31] = unaff_r25;
  puVar10[0x30] = unaff_r24;
  DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar7 + 0x260));
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 29.0)) {
    MB_SetZBoundsFromGround(lVar15);
    moby->shadow = '\x17';
  }
  iVar19 = MB_damage(lVar15,0x210000,0);
  bVar22 = moby->state;
  if ((iVar19 != 0) && (bVar22 != 8)) {
    iVar19 = 0;
    pvVar28 = pvVar7;
    do {
      iVar24 = *(int *)((int)pvVar28 + 0x158);
      if ((iVar24 != 0) && (*(char *)(iVar24 + 0x20) == '\x03')) {
        *(undefined1 *)(iVar24 + 0x20) = 1;
      }
      iVar19 = iVar19 + 1;
      pvVar28 = (void *)((int)pvVar28 + 4);
    } while (iVar19 < 0x32);
    *(undefined4 *)((int)pvVar7 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    fVar5 = g_FrameTime;
    *(float *)((int)pvVar7 + 0x88) = g_FrameTime * 8.0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x8c) = fVar5 * 10.0;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar1 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)((int)puVar10 + 0xc4) = fVar4;
    *(float *)(puVar10 + 0x19) = fVar1 - fVar6;
    dVar34 = 0.0;
    uVar25 = (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1d) & 4;
    uVar16 = uVar25 << 2;
    fVar5 = ABS(*(float *)(puVar10 + 0x18));
    if (*(float *)(puVar10 + 0x19) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)uVar16);
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar2 = ABS(*(float *)((int)puVar10 + 0xc4));
    if (*(float *)(puVar10 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar17 = uVar14 - 0x1e0;
      lVar26 = uVar14 - 0x94;
      lVar23 = uVar14 - 0xa4;
      lVar31 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x2b) = fVar5;
      *(float *)(puVar10 + 0x2a) = fVar5;
      *(float *)((int)puVar10 + 0x154) = fVar5;
      *(float *)((int)puVar10 + 0x14c) = fVar5;
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar10 + 0x2a) = *(float *)(puVar10 + 0x2a) * fVar1;
      *(float *)((int)puVar10 + 0x154) = *(float *)((int)puVar10 + 0x154) * fVar5;
      *(float *)(puVar10 + 0x2b) = *(float *)(puVar10 + 0x2b) * fVar5 * fVar1;
      do {
        *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar5 * fVar5;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar14 - 0xa4;
      uVar16 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        pfVar27 = (float *)uVar16;
        fVar5 = pfVar27[1];
        uVar16 = uVar16 + 8;
        *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * *pfVar27;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
        lVar23 = lVar23 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar24 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar19 + 0x14c)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    MB_StartKick(dVar34,lVar15,(int)pvVar7 + 0x70,uVar16,4,1,0);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
    MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
    bVar22 = 8;
    moby->state = '\b';
  }
  moby->damage = -1;
  pMVar13 = g_MobyInstance;
  if (bVar22 < 4) {
    if (bVar22 == 0) {
      iVar19 = *(int *)((int)pvVar7 + 0x114);
      pSVar9 = Splines[*(int *)((int)pvVar7 + 0xe4)];
      *(Spline **)((int)pvVar7 + 0xe0) = pSVar9;
      (moby->pos).x = pSVar9->points[0].x;
      (moby->pos).y = pSVar9->points[0].y;
      (moby->pos).z = pSVar9->points[0].z;
      fVar5 = pSVar9->points[0].w;
      *(undefined4 *)((int)pvVar7 + 0xd0) = 1;
      (moby->pos).w = fVar5;
      if (-1 < iVar19) {
        *(undefined4 *)((int)pvVar7 + 0x100) = 1;
        *(Spline **)((int)pvVar7 + 0x110) = Splines[iVar19];
      }
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar7 + 0x29) = 0;
      uVar21 = g_heroMobyPtr->color;
      uVar12 = g_heroMobyPtr->light;
      *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x48) = 0;
      *(undefined4 *)((int)pvVar7 + 0x44) = 0;
      *(undefined4 *)((int)pvVar7 + 0x40) = 0;
      moby->color = uVar21;
      moby->light = uVar12;
      moby->state = '\x01';
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar15,1,0,0);
      }
    }
    else if (bVar22 < 2) {
      pSVar9 = Splines[*(int *)((int)pvVar7 + 0x220)];
      fVar5 = g_heroPosition.y - pSVar9->points[0].y;
      fVar4 = g_heroPosition.x - pSVar9->points[0].x;
      fVar6 = g_heroPosition.z - pSVar9->points[0].z;
      if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 24.0) {
        pvVar28 = moby->pVar;
        iVar19 = 0;
        piVar29 = (int *)((int)pvVar28 + 0x158);
        do {
          if (pMVar13[*(int *)((int)pvVar28 + 0x130)].oClass == TREE) {
            *piVar29 = (int)(pMVar13 + *(int *)((int)pvVar28 + 0x130));
            piVar29 = piVar29 + 1;
          }
          iVar19 = iVar19 + 1;
          pvVar28 = (void *)((int)pvVar28 + 4);
        } while (iVar19 < 10);
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar15,3,0,6);
        }
      }
    }
    else if (bVar22 < 3) {
      piVar29 = *(int **)((int)pvVar7 + 0xe0);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0xd0) + iVar19 + (int)*(char *)((int)pvVar7 + 0xd4);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar10 + 0xb4) = fVar5;
      *(float *)(puVar10 + 0x17) = fVar4;
      *(float *)((int)puVar10 + 0xbc) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar10 + 0xb4));
      if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)(puVar10 + 0x17));
      if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0xc4;
        lVar26 = uVar14 - 0xb4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x27) = fVar5;
        *(float *)(puVar10 + 0x26) = fVar5;
        *(float *)((int)puVar10 + 0x134) = fVar5;
        *(float *)((int)puVar10 + 300) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x26) = *(float *)(puVar10 + 0x26) * fVar1;
        *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar5;
        *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0xc4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 300)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,
                 &DAT_0038753c,(int)pvVar7 + 0x224);
      iVar19 = *(int *)((int)pvVar7 + 0xe0) + iVar24 * 0x10;
      if (*(int *)(iVar19 + 0x1c) == 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar15,2,0,6);
        }
      }
      else {
        dVar35 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).x;
        fVar4 = (float)((double)*(float *)(iVar19 + 0x14) - dVar35);
        fVar6 = (float)((double)*(float *)(iVar19 + 0x10) - dVar37);
        dVar41 = (double)(moby->pos).z;
        fVar1 = (float)((double)*(float *)(iVar19 + 0x18) - dVar41);
        dVar42 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
        fVar5 = (float)((double)(DAT_00841fd0 * g_FrameTime) / dVar42);
        dVar33 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        dVar32 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar32 = (double)(fVar6 * fVar5);
        }
        dVar38 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar38 = (double)(fVar1 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar32 = (double)(fVar6 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar38 = (double)(fVar1 * fVar5);
        }
        fVar5 = (float)(dVar35 + dVar33);
        fVar4 = (float)(dVar37 + dVar32);
        fVar6 = (float)(dVar41 + dVar38);
        fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar19 + 0x14));
        fVar2 = (float)((double)fVar4 - (double)*(float *)(iVar19 + 0x10));
        fVar3 = (float)((double)fVar6 - (double)*(float *)(iVar19 + 0x18));
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
          *(int *)((int)pvVar7 + 0xd0) = iVar24;
        }
      }
    }
    else {
      moby->unk58 = 3.0;
      pMVar13 = g_MobyInstance;
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar24 = 0;
        pvVar28 = moby->pVar;
        iVar19 = 0;
        piVar29 = (int *)((int)pvVar28 + 0x158);
        do {
          if (pMVar13[*(int *)((int)pvVar28 + 0x130)].oClass == TREE) {
            *piVar29 = (int)(pMVar13 + *(int *)((int)pvVar28 + 0x130));
            piVar29 = piVar29 + 1;
          }
          iVar19 = iVar19 + 1;
          pvVar28 = (void *)((int)pvVar28 + 4);
          pvVar20 = pvVar7;
        } while (iVar19 < 10);
        do {
          iVar19 = *(int *)((int)pvVar20 + 0x158);
          if ((iVar19 != 0) && (*(byte *)(iVar19 + 0x20) < 0x80)) {
            *(undefined1 *)(iVar19 + 0x20) = 3;
          }
          iVar24 = iVar24 + 1;
          pvVar20 = (void *)((int)pvVar20 + 4);
        } while (iVar24 < 0x32);
        moby->state = '\x04';
        if (moby->animationId != '\x06') {
          MB_SetAnimation(lVar15,6,0,6);
        }
        moby->unk58 = 1.0;
      }
    }
  }
  else if (bVar22 < 7) {
    if (bVar22 < 5) {
      iVar19 = 0;
      iVar24 = 0;
      dVar33 = 4.0;
      dVar34 = 2.0;
      pvVar28 = pvVar7;
      do {
        iVar30 = *(int *)((int)pvVar28 + 0x158);
        if ((iVar30 != 0) && (*(byte *)(iVar30 + 0x20) < 0x80)) {
          GetBonePosition(lVar15,0,uVar14 - 0x170);
          dVar35 = (double)g_FrameTime;
          *(float *)(puVar10 + 0xe) = *(float *)(puVar10 + 0x10) - *(float *)(iVar30 + 0x10);
          *(float *)((int)puVar10 + 0x74) =
               *(float *)((int)puVar10 + 0x84) - *(float *)(iVar30 + 0x14);
          fVar5 = *(float *)(iVar30 + 0x18);
          *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
          *(float *)(puVar10 + 0xf) = *(float *)(puVar10 + 0x11) - fVar5;
          ClampVec3Magnitude((double)(float)(dVar35 * dVar33),(Vec4 *)(puVar10 + 0xe));
          iVar24 = iVar24 + 1;
          *(float *)(iVar30 + 0x10) = *(float *)(iVar30 + 0x10) + *(float *)(puVar10 + 0xe);
          *(float *)(iVar30 + 0x14) = *(float *)(iVar30 + 0x14) + *(float *)((int)puVar10 + 0x74);
          *(float *)(iVar30 + 0x18) = *(float *)(iVar30 + 0x18) + *(float *)(puVar10 + 0xf);
          if (SQRT(*(float *)(puVar10 + 0xf) * *(float *)(puVar10 + 0xf) +
                   *(float *)(puVar10 + 0xe) * *(float *)(puVar10 + 0xe) +
                   *(float *)((int)puVar10 + 0x74) * *(float *)((int)puVar10 + 0x74)) <
              (float)((double)g_FrameTime * dVar34)) {
            *(undefined1 *)(iVar30 + 0x20) = 4;
            iVar30 = *(int *)((int)pvVar7 + 0x22c);
            *(undefined4 *)((int)pvVar28 + 0x158) = 0;
            *(int *)((int)pvVar7 + 0x22c) = iVar30 + 1;
          }
        }
        iVar19 = iVar19 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar19 < 0x32);
      if ((iVar24 == 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        MB_SetAnimation(lVar15,3,0,6);
      }
    }
    else if (bVar22 < 6) {
      piVar29 = *(int **)((int)pvVar7 + 0xe0);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0xd0) + iVar19 + (int)*(char *)((int)pvVar7 + 0xd4);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      pfVar27 = (float *)&g_atanQuadrantTable;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)(puVar10 + 0x15) = fVar5;
      *(float *)((int)puVar10 + 0xac) = fVar4;
      *(float *)(puVar10 + 0x16) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar10 + 0x15));
      if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)((int)puVar10 + 0xac));
      if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0xe4;
        lVar26 = uVar14 - 0xd4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x23) = fVar5;
        *(float *)(puVar10 + 0x22) = fVar5;
        *(float *)((int)puVar10 + 0x114) = fVar5;
        *(float *)((int)puVar10 + 0x10c) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x22) = *(float *)(puVar10 + 0x22) * fVar1;
        *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar5;
        *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0xe4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x10c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
                 (int)pvVar7 + 0x224);
      dVar35 = 6.0;
      iVar19 = *(int *)((int)pvVar7 + 0xe0) + iVar24 * 0x10;
      dVar33 = 20.5;
      iVar30 = 0;
      bVar11 = false;
      dVar42 = (double)*(float *)(iVar19 + 0x10);
      dVar41 = (double)*(float *)(iVar19 + 0x14);
      dVar37 = (double)*(float *)(iVar19 + 0x18);
      pvVar28 = pvVar7;
      do {
        iVar19 = *(int *)((int)pvVar28 + 0x158);
        if ((iVar19 != 0) && (*(byte *)(iVar19 + 0x20) < 0x80)) {
          fVar5 = (moby->pos).y - *(float *)(iVar19 + 0x14);
          fVar4 = (moby->pos).x - *(float *)(iVar19 + 0x10);
          if ((double)SQRT(fVar4 * fVar4 + fVar5 * fVar5) < dVar35) {
            if (moby->animationId != '\x06') {
              puVar10[0x2e] = (longlong)(int)((double)animationSpeed * dVar33);
              MB_SetAnimation(lVar15,6,0,*(undefined4 *)((int)puVar10 + 0x174));
              iVar19 = *(int *)((int)pvVar28 + 0x158);
            }
            M16_00240f38(dVar34,dVar34,iVar19,lVar15);
            *(undefined4 *)((int)pvVar28 + 0x158) = 0;
          }
          bVar11 = true;
        }
        iVar30 = iVar30 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar30 < 0x32);
      if ((!bVar11) && (moby->animationId != '\x03')) {
        puVar10[0x2e] = (longlong)(int)((double)animationSpeed * dVar33);
        MB_SetAnimation(lVar15,3,0,*(undefined4 *)((int)puVar10 + 0x174));
      }
      if (**(int **)((int)pvVar7 + 0xe0) + -1 == iVar24) {
        if (*(int *)((int)pvVar7 + 0x114) < 0) {
          DeleteMoby(moby);
          return;
        }
        moby->state = '\x06';
      }
      else {
        dVar35 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).x;
        fVar4 = (float)(dVar41 - dVar35);
        fVar6 = (float)(dVar42 - dVar32);
        dVar38 = (double)(moby->pos).z;
        fVar1 = (float)(dVar37 - dVar38);
        dVar40 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
        fVar5 = (float)((double)(DAT_00841fd0 * g_FrameTime) / dVar40);
        dVar33 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        dVar36 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar36 = (double)(fVar6 * fVar5);
        }
        dVar39 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar39 = (double)(fVar1 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar36 = (double)(fVar6 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar39 = (double)(fVar1 * fVar5);
        }
        fVar5 = (float)(dVar35 + dVar33);
        fVar4 = (float)(dVar32 + dVar36);
        fVar6 = (float)(dVar38 + dVar39);
        fVar1 = (float)((double)fVar5 - dVar41);
        fVar2 = (float)((double)fVar4 - dVar42);
        fVar3 = (float)((double)fVar6 - dVar37);
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
          *(int *)((int)pvVar7 + 0xd0) = iVar24;
        }
      }
    }
    else {
      piVar29 = *(int **)((int)pvVar7 + 0x110);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0x100) + iVar19 + (int)*(char *)((int)pvVar7 + 0x104);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      pfVar27 = (float *)&g_atanQuadrantTable;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar10 + 0x9c) = fVar5;
      *(float *)(puVar10 + 0x14) = fVar4;
      *(float *)((int)puVar10 + 0xa4) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar10 + 0x9c));
      if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)(puVar10 + 0x14));
      if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0x104;
        lVar26 = uVar14 - 0xf4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x1f) = fVar5;
        *(float *)(puVar10 + 0x1e) = fVar5;
        *(float *)((int)puVar10 + 0xf4) = fVar5;
        *(float *)((int)puVar10 + 0xec) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x1e) = *(float *)(puVar10 + 0x1e) * fVar1;
        *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar5;
        *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0x104;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0xec)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
                 (int)pvVar7 + 0x224);
      dVar37 = (double)(moby->pos).y;
      iVar19 = *(int *)((int)pvVar7 + 0x110) + iVar24 * 0x10;
      dVar35 = (double)(moby->pos).x;
      fVar4 = (float)((double)*(float *)(iVar19 + 0x14) - dVar37);
      fVar6 = (float)((double)*(float *)(iVar19 + 0x10) - dVar35);
      dVar41 = (double)(moby->pos).z;
      fVar1 = (float)((double)*(float *)(iVar19 + 0x18) - dVar41);
      dVar42 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
      fVar5 = (float)((double)(DAT_00841fd0 * g_FrameTime) / dVar42);
      dVar33 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar33 = (double)(fVar4 * fVar5);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar32 = (double)(fVar6 * fVar5);
      }
      dVar38 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar38 = (double)(fVar1 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar33 = (double)(fVar4 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar32 = (double)(fVar6 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar38 = (double)(fVar1 * fVar5);
      }
      fVar5 = (float)(dVar37 + dVar33);
      dVar33 = (double)fVar5;
      fVar4 = (float)(dVar35 + dVar32);
      dVar34 = (double)fVar4;
      fVar6 = (float)(dVar41 + dVar38);
      dVar35 = (double)fVar6;
      fVar1 = (float)(dVar33 - (double)*(float *)(iVar19 + 0x14));
      fVar2 = (float)(dVar34 - (double)*(float *)(iVar19 + 0x10));
      fVar3 = (float)(dVar35 - (double)*(float *)(iVar19 + 0x18));
      (moby->pos).x = fVar4;
      (moby->pos).y = fVar5;
      (moby->pos).z = fVar6;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        *(int *)((int)pvVar7 + 0x100) = iVar24;
        dVar34 = (double)(moby->pos).x;
        dVar33 = (double)(moby->pos).y;
        dVar35 = (double)(moby->pos).z;
      }
      if (19.0 < SQRT((float)((double)g_heroPosition.z - dVar35) *
                      (float)((double)g_heroPosition.z - dVar35) +
                      (float)((double)g_heroPosition.x - dVar34) *
                      (float)((double)g_heroPosition.x - dVar34) +
                      (float)((double)g_heroPosition.y - dVar33) *
                      (float)((double)g_heroPosition.y - dVar33))) {
        moby->state = '\a';
      }
    }
  }
  else if (bVar22 < 8) {
    fVar5 = g_heroPosition.x - (moby->pos).x;
    fVar4 = g_heroPosition.y - (moby->pos).y;
    pfVar27 = (float *)&g_atanQuadrantTable;
    fVar1 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0x12) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar4;
    *(float *)(puVar10 + 0x13) = fVar1 - fVar6;
    dVar34 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar2 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar17 = uVar14 - 0x1e0;
      lVar23 = uVar14 - 0x124;
      lVar26 = uVar14 - 0x114;
      lVar31 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)(puVar10 + 0x1a) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      *(float *)((int)puVar10 + 0xcc) = fVar5;
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar1;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar5;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5 * fVar1;
      do {
        *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar5 * fVar5;
        iVar19 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar14 - 0x124;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar5 = *pfVar27;
        fVar1 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
        lVar23 = lVar23 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar24 = (int)lVar26;
        lVar18 = lVar18 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar19 + 0xcc)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    OrganicDeltAngSpeed
              (dVar34,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
               (int)pvVar7 + 0x224);
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar4 = g_heroPosition.x - (moby->pos).x;
    fVar6 = g_heroPosition.z - (moby->pos).z;
    dVar34 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if ((dVar34 < 17.0) || (iVar19 = MB_FindMobyByVarId(lVar15), iVar19 != 0)) {
      fVar6 = g_heroPosition.z;
      fVar5 = g_heroPosition.y;
      fVar4 = g_heroPosition.x;
      iVar19 = **(int **)((int)pvVar7 + 0x110);
      iVar24 = *(int *)((int)pvVar7 + 0x100) + iVar19 + (int)*(char *)((int)pvVar7 + 0x104);
      moby->state = '\x06';
      iVar19 = *(int *)((int)pvVar7 + 0x110) + (iVar24 - (iVar24 / iVar19) * iVar19) * 0x10;
      fVar5 = fVar5 - *(float *)(iVar19 + 0x14);
      fVar4 = fVar4 - *(float *)(iVar19 + 0x10);
      fVar6 = fVar6 - *(float *)(iVar19 + 0x18);
      if ((double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < dVar34) {
        *(char *)((int)pvVar7 + 0x104) = -*(char *)((int)pvVar7 + 0x104);
      }
    }
  }
  else if (bVar22 < 9) {
    uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar21 & 3) != 0) {
      MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_0038753c,
                 0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    fVar8 = (moby->pos).z;
    uVar21 = (int)fVar8 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar8) - uVar21) < 0x40a00000) {
      DeleteMoby(moby);
      return;
    }
  }
  MB_ColorDyingMoby(lVar15,(int)pvVar7 + 0x60);
  return;
}



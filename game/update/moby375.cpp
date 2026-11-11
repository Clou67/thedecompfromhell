// game/update/moby375.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x356514-0x3572f4
#include <stdio.h>
#include "game/update/moby375.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby334.h"
#include "idol/fastfunc.h"

// 0x0356514 (0x14 bytes)
void M375_00356514(void)

{
  DAT_00840570 = 0x10000;
  return;
}


// 0x0356528 (0xcc bytes)
MobyInstance * M375_00356528(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(ROCKET_0100|GREEN_SHIP_0077);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x0356628 (0xccc bytes)
// inlined: FastAtan2 @0x3568a4, FastAtan2 @0x356aa8, FastAtan2 @0x356dd8, FastAtan2 @0x356fd4
// strings: 00656598: 'error, GunpVar was NULL!\n'

/* Moby 375 */

void UpdateMoby_375(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  short sVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x1d0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar11;
  puVar7[0x3c] = in_LR;
  puVar7[0x34] = in_f26;
  puVar7[0x35] = in_f27;
  puVar7[0x36] = in_f28;
  puVar7[0x37] = in_f29;
  puVar7[0x38] = in_f30;
  puVar7[0x39] = in_f31;
  puVar7[0x33] = unaff_r31;
  puVar7[0x32] = unaff_r30;
  puVar7[0x31] = unaff_r29;
  puVar7[0x30] = unaff_r28;
  puVar7[0x2f] = unaff_r27;
  if ((moby != (MobyInstance *)0x0) && (piVar6 = (int *)moby->pVar, piVar6 != (int *)0x0)) {
    iVar15 = *(int *)(*piVar6 + 0x78);
    if (iVar15 == 0) {
      printf("error, GunpVar was NULL!\n");
    }
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      if (*(char *)((int)piVar6 + 0x11) != '\0') {
        DetachManipulator(moby,piVar6 + 4);
        FastMemSet(piVar6 + 4,0,0x40);
      }
      DeleteMoby(moby);
    }
    else if (uVar1 == '\x04') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 0.0;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      dVar22 = (double)BlendAnimFrame(moby);
      dVar23 = (double)(moby->pos).x;
      dVar27 = (double)(moby->pos).y;
      dVar25 = (double)g_heroPosition.y;
      fVar2 = ABS((float)((double)g_heroPosition.x - dVar23));
      fVar4 = ABS((float)(dVar25 - dVar27));
      *(float *)((int)puVar7 + 0xbc) = (float)((double)g_heroPosition.x - dVar23);
      *(float *)(puVar7 + 0x18) = (float)(dVar25 - dVar27);
      dVar21 = (double)((moby->pos).z + 0.3);
      *(float *)((int)puVar7 + 0xc4) = fVar2 - fVar4;
      dVar26 = 0.0;
      dVar25 = (double)(moby->rotation).z;
      uVar12 = (ulonglong)(*(uint *)((int)puVar7 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar7 + 0xbc));
      if (*(float *)((int)puVar7 + 0xc4) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)(puVar7 + 0x18));
      if (*(float *)((int)puVar7 + 0xc4) - 0.0 < 0.0) {
        fVar10 = fVar2;
      }
      dVar24 = dVar26;
      if (0.0 < fVar5) {
        lVar13 = uVar11 - 0x1c0;
        lVar17 = uVar11 - 0xd0;
        lVar19 = uVar11 - 0xc0;
        lVar20 = 2;
        fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x10c) = fVar5;
        *(float *)((int)puVar7 + 0x104) = fVar5;
        *(float *)(puVar7 + 0x21) = fVar5;
        *(float *)(puVar7 + 0x20) = fVar5;
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar2;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar5;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5 * fVar2;
        do {
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar5 * fVar5;
          iVar8 = (int)lVar17;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar5 = *pfVar18;
          fVar2 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar13 = lVar14;
        do {
          iVar8 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar9 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x100)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar4);
      }
      dVar24 = (double)FastDiffRots(dVar24,dVar25);
      dVar25 = (double)FastWrapRot
                                 ((float)dVar25,(float)((double)(DAT_0071f408 * 0.05) * dVar24));
      (moby->rotation).z = (float)dVar25;
      dVar25 = (double)g_heroPosition.z;
      fVar5 = SQRT((float)(dVar23 - (double)g_heroPosition.x) *
                   (float)(dVar23 - (double)g_heroPosition.x) +
                   (float)(dVar27 - (double)g_heroPosition.y) *
                   (float)(dVar27 - (double)g_heroPosition.y));
      *(float *)((int)puVar7 + 0xb4) = (float)(dVar25 - dVar21);
      dVar23 = ABS((double)(float)(dVar25 - dVar21));
      dVar27 = ABS((double)fVar5);
      *(float *)(puVar7 + 0x16) = fVar5;
      *(float *)(puVar7 + 0x17) = (float)(dVar27 - dVar23);
      dVar21 = (double)(float)piVar6[0x15];
      uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xb4) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar7 + 0x16));
      if ((double)*(float *)(puVar7 + 0x17) - dVar26 < 0.0) {
        dVar25 = dVar23;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar7 + 0xb4));
      if ((double)*(float *)(puVar7 + 0x17) - dVar26 < 0.0) {
        dVar23 = dVar27;
      }
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      if (dVar26 < dVar25) {
        lVar13 = uVar11 - 0x1c0;
        lVar19 = uVar11 - 0xe0;
        lVar17 = uVar11 - 0xf0;
        lVar20 = 2;
        fVar2 = (float)(dVar23 - dVar25) / (float)(dVar23 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xec) = fVar2;
        *(float *)((int)puVar7 + 0xe4) = fVar2;
        *(float *)(puVar7 + 0x1d) = fVar2;
        *(float *)(puVar7 + 0x1c) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar3;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar2;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar2 * fVar2;
          iVar8 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xf0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar9 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0xe0)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar25 = (double)FastDiffRots(-dVar26,dVar21);
      dVar25 = (double)FastWrapRot
                                 ((float)dVar21,(float)((double)(DAT_0071f408 * 0.01) * dVar25));
      piVar6[0x15] = (int)(float)dVar25;
      FastQuaternionToEuler(piVar6 + 8,1);
      if (dVar22 == 11.0) {
        MB_SphericalToVector
                  (g_FrameTime * 25.0,(moby->rotation).z,-(float)piVar6[0x15],
                   (float *)(puVar7 + 0x12));
        *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) + *(float *)(iVar15 + 0x30);
        *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) + *(float *)(iVar15 + 0x34);
        *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) + *(float *)(iVar15 + 0x38);
        GetBonePosition(moby,1,uVar11 - 0x130);
        fVar5 = *(float *)(puVar7 + 0x14) + *(float *)(puVar7 + 0x12);
        fVar2 = *(float *)((int)puVar7 + 0xa4) + *(float *)((int)puVar7 + 0x94);
        fVar4 = *(float *)(puVar7 + 0x15) + *(float *)(puVar7 + 0x13);
        *(float *)(puVar7 + 0x14) = fVar5;
        *(float *)((int)puVar7 + 0xa4) = fVar2;
        *(float *)(puVar7 + 0x15) = fVar4;
        *(float *)(puVar7 + 8) = fVar5;
        *(float *)(puVar7 + 9) = fVar4;
        *(float *)(puVar7 + 10) = *(float *)(puVar7 + 0x12);
        *(float *)(puVar7 + 0xb) = *(float *)(puVar7 + 0x13);
        *(float *)((int)puVar7 + 0x44) = fVar2;
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xac);
        *(float *)((int)puVar7 + 0x54) = *(float *)((int)puVar7 + 0x94);
        *(undefined4 *)((int)puVar7 + 0x5c) = *(undefined4 *)((int)puVar7 + 0x9c);
        puVar7[0xe] = 0;
        FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,0x3fc99999a0000000,
                     moby,0,puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],3);
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\x02') {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
        puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
        MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar7 + 0x164));
      }
      dVar26 = (double)(moby->pos).x;
      dVar25 = (double)(moby->pos).y;
      dVar22 = (double)g_heroPosition.y;
      fVar2 = ABS((float)((double)g_heroPosition.x - dVar26));
      fVar4 = ABS((float)(dVar22 - dVar25));
      *(float *)((int)puVar7 + 0xd4) = (float)((double)g_heroPosition.x - dVar26);
      *(float *)(puVar7 + 0x1b) = (float)(dVar22 - dVar25);
      dVar27 = (double)((moby->pos).z + 0.3);
      *(float *)((int)puVar7 + 0xdc) = fVar2 - fVar4;
      dVar22 = 0.0;
      uVar12 = (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar7 + 0xd4));
      if (*(float *)((int)puVar7 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar3 = ABS(*(float *)(puVar7 + 0x1b));
      if (*(float *)((int)puVar7 + 0xdc) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      dVar23 = dVar22;
      if (0.0 < fVar5) {
        lVar13 = uVar11 - 0x1c0;
        lVar19 = uVar11 - 0x80;
        lVar17 = uVar11 - 0x90;
        lVar20 = 2;
        fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
        fVar3 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x14c) = fVar5;
        *(float *)((int)puVar7 + 0x144) = fVar5;
        *(float *)(puVar7 + 0x29) = fVar5;
        *(float *)(puVar7 + 0x28) = fVar5;
        fVar5 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0x144) = *(float *)((int)puVar7 + 0x144) * fVar3;
        *(float *)(puVar7 + 0x29) = *(float *)(puVar7 + 0x29) * fVar5;
        *(float *)((int)puVar7 + 0x14c) = *(float *)((int)puVar7 + 0x14c) * fVar5 * fVar3;
        do {
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar5 * fVar5;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar5 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x140) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar8 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0x140)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar2);
      }
      dVar24 = (double)(moby->rotation).z;
      dVar21 = (double)FastDiffRots(dVar23,dVar24);
      dVar21 = (double)FastWrapRot
                                 ((float)dVar24,(float)((double)(DAT_0071f408 * 0.05) * dVar21));
      (moby->rotation).z = (float)dVar21;
      dVar21 = (double)g_heroPosition.z;
      fVar5 = SQRT((float)(dVar26 - (double)g_heroPosition.x) *
                   (float)(dVar26 - (double)g_heroPosition.x) +
                   (float)(dVar25 - (double)g_heroPosition.y) *
                   (float)(dVar25 - (double)g_heroPosition.y));
      *(float *)((int)puVar7 + 0xcc) = (float)(dVar21 - dVar27);
      dVar27 = ABS((double)(float)(dVar21 - dVar27));
      dVar26 = ABS((double)fVar5);
      *(float *)(puVar7 + 0x19) = fVar5;
      *(float *)(puVar7 + 0x1a) = (float)(dVar26 - dVar27);
      dVar21 = (double)(float)piVar6[0x15];
      uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xcc) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar7 + 0x19));
      if ((double)*(float *)(puVar7 + 0x1a) - dVar22 < 0.0) {
        dVar25 = dVar27;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
      dVar27 = ABS((double)*(float *)((int)puVar7 + 0xcc));
      if ((double)*(float *)(puVar7 + 0x1a) - dVar22 < 0.0) {
        dVar27 = dVar26;
      }
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      if (dVar22 < dVar25) {
        lVar13 = uVar11 - 0x1c0;
        lVar17 = uVar11 - 0xb0;
        lVar19 = uVar11 - 0xa0;
        lVar20 = 2;
        fVar2 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 300) = fVar2;
        *(float *)((int)puVar7 + 0x124) = fVar2;
        *(float *)(puVar7 + 0x25) = fVar2;
        *(float *)(puVar7 + 0x24) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3;
        *(float *)(puVar7 + 0x25) = *(float *)(puVar7 + 0x25) * fVar2;
        *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar2 * fVar2;
          iVar15 = (int)lVar17;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0x120)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar22 = -dVar22;
      dVar25 = (double)FastDiffRots(dVar22,dVar21);
      dVar25 = (double)FastWrapRot
                                 ((float)dVar21,(float)((double)(DAT_0071f408 * 0.01) * dVar25));
      piVar6[0x15] = (int)(float)dVar25;
      FastQuaternionToEuler(piVar6 + 8,1);
      iVar15 = FastDecTimerS16(piVar6 + 0x14);
      if (iVar15 != 0) {
        dVar25 = (double)FastSubRots((moby->rotation).z,(float)dVar23);
        dVar26 = 0.20000000298023224;
        if (((dVar25 < 0.20000000298023224) &&
            (dVar22 = (double)FastSubRots((float)piVar6[0x15],(float)dVar22),
            dVar22 < dVar26)) && (moby->enabled != '\0')) {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar7 + 0x164));
          }
          sVar16 = *(short *)((int)piVar6 + 0x52) + 1;
          *(short *)((int)piVar6 + 0x52) = sVar16;
          if (sVar16 == 3) {
            *(undefined2 *)(piVar6 + 0x14) = 0xf0;
            *(undefined2 *)((int)piVar6 + 0x52) = 0;
          }
          else {
            *(undefined2 *)(piVar6 + 0x14) = 0x1e;
          }
        }
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x03') {
          puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
          MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar7 + 0x164));
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      FastMemSet(piVar6 + 4,0,0x40);
      AttachManipulator(moby,0,piVar6 + 4);
      moby->state = '\x01';
      piVar6[0x15] = 0;
    }
  }
  return;
}



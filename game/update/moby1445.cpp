// game/update/moby1445.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x280018-0x280de0
#include <stdlib.h>
#include "game/update/moby1445.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1440.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0280018 (0x3c0 bytes)
// inlined: FastAtan2 @0x280118
double M1445_00280018(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  undefined4 *unused;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xf0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x20] = in_LR;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x14);
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  fVar2 = ABS(fVar1);
  fVar6 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  puVar8[0x18] = unaff_r29;
  *(float *)(puVar8 + 0x11) = fVar4;
  iVar7 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar8 + 0x8c) = fVar2 - fVar6;
  dVar23 = 0.0;
  fVar1 = *(float *)(iVar7 + 0x1f8);
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x11));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  dVar19 = dVar23;
  if (0.0 < fVar4) {
    lVar12 = uVar11 - 0xe0;
    lVar17 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x60;
    lVar18 = 2;
    fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)(puVar8 + 0x13) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4;
    *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4 * fVar3;
    do {
      *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x80) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar11 - 0x60;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x90) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x90)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar6 + fVar2);
  }
  dVar19 = (double)FastWrapRot((float)dVar19,fVar1);
  fVar4 = *(float *)(param_1 + 0x14) - param_2[1];
  dVar22 = (double)*(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *param_2;
  fVar1 = param_2[2];
  unused = &DAT_00280000;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  dVar24 = (double)SQRT((float)(dVar22 - (double)fVar1) * (float)(dVar22 - (double)fVar1) +
                        fVar6 * fVar6 + fVar4 * fVar4);
  OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x280000,
             (float *)(iVar7 + 500));
  OrganicDelt
            ((float)dVar24,DAT_0071f418 * 8.0,DAT_0071f418 * 12.0,g_FrameTime * 4.0,
             (float *)(puVar8 + 0x10),(int)unused,(float *)(iVar7 + 0x204));
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  if (dVar19 == dVar23) {
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar23;
    dVar20 = dVar23;
    dVar21 = dVar23;
  }
  else {
    fVar2 = (float)((double)*(float *)(iVar7 + 0x204) / dVar19);
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar21 = (double)(fVar4 * fVar2);
    dVar20 = (double)(fVar1 * fVar2);
    dVar19 = (double)(fVar6 * fVar2);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar21;
  *(float *)((int)puVar8 + 0x74) = (float)dVar20;
  *(float *)(puVar8 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
  *(float *)(puVar8 + 0xf) = -(DAT_0071f418 * 10.0 - *(float *)(iVar7 + 0x208));
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_1,uVar11 - 0x80);
  MB_PushOutOfSplineWalls(0x3fd54fdf40000000,*(undefined4 *)(iVar7 + 0x1f0));
  *(float *)(iVar7 + 0x208) = (float)(dVar22 - (double)*(float *)(param_1 + 0x18));
  return dVar24;
}


// 0x02803e8 (0x290 bytes)
void M1445_002803e8(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  double dVar7;
  float local_30 [4];
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar6 = MB_damage(param_1,0x330000,0);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar1 + 0x140) = 0x200;
      *(undefined4 *)(iVar1 + 0x148) = 0x3f000000;
      fVar3 = DAT_0071f418;
      *(float *)(iVar1 + 0x130) = DAT_007aab3c * DAT_0071f418;
      *(float *)(iVar1 + 0x134) = DAT_007aab40 * fVar3;
      fVar3 = g_FrameTime;
      *(float *)(iVar1 + 0x138) = DAT_007aab48 * g_FrameTime;
      fVar4 = DAT_007aab44;
      *(undefined1 *)(iVar1 + 0x15d) = 0;
      *(float *)(iVar1 + 0x13c) = fVar4 * fVar3;
      *(undefined4 *)(iVar1 + 0x144) = 0x29;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff;
      *(float *)(iVar1 + 0x16c) = fVar3 * 2.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_30,iVar1 + 0x138,
                 iVar1 + 0x13c);
      MB_StartKick((double)local_30[0],param_1,iVar1 + 0x120);
      *(undefined4 *)(iVar1 + 0x170) = 0x41000000;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(iVar1 + 0x174) = 0x41800000;
      *(undefined1 *)(param_1 + 0x20) = 8;
      *(undefined1 *)(iVar1 + 0x117) = 0x78;
      MB_UpdateLightsTransition(param_1,iVar1 + 0x110);
    }
    *(undefined1 *)(param_1 + 0xa4) = 0xff;
    MB_ColorDyingMoby(param_1,iVar1 + 0x110);
    dVar7 = 16.0;
    pSVar2 = Splines[*(int *)(iVar1 + 0x1f0)];
    iVar6 = MB_getTargetInArea
                      (0x4030000000000000,param_1,iVar1 + 0x180,pSVar2,0,0,pSVar2->points,
                       pSVar2->cnt);
    if ((iVar6 != 2) &&
       ((fVar3 = *(float *)(iVar1 + 0x1d4) - *(float *)(iVar1 + 0x184),
        fVar4 = *(float *)(iVar1 + 0x1d0) - *(float *)(iVar1 + 0x180),
        dVar7 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
        (3.0 < ABS(*(float *)(param_1 + 0x18) - *(float *)(iVar1 + 0x188)))))) {
      *(undefined4 *)(iVar1 + 0x1c4) = 2;
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)(iVar1 + 0x1c0) == 0) {
      *(float *)(iVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)(iVar1 + 0x1c0) = pMVar5;
      *(float *)(iVar1 + 0x184) = fVar3;
      *(float *)(iVar1 + 0x188) = g_heroPosition.z;
      *(float *)(iVar1 + 0x18c) = g_heroPosition.w;
    }
  }
  return;
}


// 0x02806b0 (0x730 bytes)
// inlined: FastAtan2 @0x280a5c
/* Moby 1445 */

void UpdateMoby_1445(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar16;
  undefined1 uVar18;
  f32 *val;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xe0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x1e] = in_LR;
  puVar9[0x1b] = unaff_r31;
  puVar9[0x19] = unaff_r29;
  puVar9[0x1a] = unaff_r30;
  pvVar8 = moby->pVar;
  M1445_002803e8();
  DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar8 + 0x220));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) < 29.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x17';
  }
  uVar1 = moby->state;
  if (uVar1 == '\b') {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar16 & 0x140) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_00280678,6);
      MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\a') {
    iVar17 = FUN_0048c188(lVar13,(int)pvVar8 + 0x120);
    if (iVar17 != 0) {
      moby->state = '\x01';
      *(undefined2 *)((int)pvVar8 + 200) = 0;
    }
  }
  else if (uVar1 == '\x06') {
    dVar24 = (double)M1445_00280018(lVar13,(int)pvVar8 + 0x1d0);
    if (1.0 <= dVar24) {
      if (*(int *)((int)pvVar8 + 0x1c4) != 2) {
        moby->state = '\x04';
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,2,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
  }
  else if (uVar1 == '\x05') {
    fVar3 = *(float *)((int)pvVar8 + 0x180) - (moby->pos).x;
    fVar5 = *(float *)((int)pvVar8 + 0x184) - (moby->pos).y;
    val = &(moby->rotation).z;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    *(float *)(puVar9 + 0x11) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
    if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
      fVar10 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar21 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x44;
      lVar20 = uVar12 - 0x54;
      lVar23 = 2;
      fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x13) = fVar5;
      *(float *)(puVar9 + 0x12) = fVar5;
      *(float *)((int)puVar9 + 0x94) = fVar5;
      *(float *)((int)puVar9 + 0x8c) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar6;
      *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar5;
      *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x8c) = *(float *)((int)lVar21 + 0x7c) * fVar5 * fVar5;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar12 - 0x54;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar15;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0x8c) = *(float *)((int)lVar20 + 0x8c) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      do {
        iVar17 = (int)lVar15;
        iVar11 = (int)lVar21;
        lVar15 = lVar15 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0x8c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    OrganicDeltAng
              (fVar3,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar8 + 500));
    iVar17 = MB_MayaFrameTrigger(13.0,moby);
    if (iVar17 == 0) {
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x184),
          fVar5 = (moby->pos).x - *(float *)((int)pvVar8 + 0x180),
          fVar6 = (moby->pos).z - *(float *)((int)pvVar8 + 0x188),
          1.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3))) &&
         (moby->state = '\x04', moby->animationId != '\0')) {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,0,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
    else {
      puVar9[0xe] = 0;
      DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar13,0,0,1);
    }
  }
  else if (uVar1 == '\x04') {
    dVar24 = (double)M1445_00280018(lVar13,(int)pvVar8 + 0x180);
    if (1.25 <= dVar24) {
      if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
        moby->state = '\x06';
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x01') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,1,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar8 + 0x1c4) != 2) && (moby->state = '\x04', moby->animationId != '\0')) {
      puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar13,0,0,*(undefined4 *)((int)puVar9 + 0xb4));
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar8 + 0x1f0) == -1) {
      DeleteMoby(moby);
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
      *(undefined2 *)((int)pvVar8 + 0x24) = 1;
      *(undefined1 *)((int)pvVar8 + 0x28) = 0;
      *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007aab30;
      uVar16 = rand();
      fVar2 = (moby->pos).x;
      if ((uVar16 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(f32 *)((int)pvVar8 + 0x1d0) = fVar2;
      *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
      *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
      *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        puVar9[0x16] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,2,0,*(undefined4 *)((int)puVar9 + 0xb4));
      }
      uVar18 = FastDoubleToInt(0x4020000000000000);
      *(undefined1 *)((int)pvVar8 + 0x58) = uVar18;
      uVar18 = FastDoubleToInt(0x40099999a0000000);
      *(undefined1 *)((int)pvVar8 + 0x5a) = uVar18;
    }
  }
  return;
}



// game/update/moby1454.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x283428-0x284b14
#include "game/update/moby1454.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby410.h"
#include "idol/fastfunc.h"

// 0x0283428 (0xc bytes)
void M1454_00283428(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 4;
  return;
}


// 0x0283434 (0x14 bytes)
void M1454_00283434(void)

{
  DAT_007aac14 = 0x10000;
  return;
}


// 0x0283468 (0x518 bytes)
// inlined: FastAtan2 @0x283598
void M1454_00283468(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *unused;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x1a] = unaff_r29;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar14 = *(int *)(iVar6 + 0x100);
  iVar7 = *(int *)(iVar6 + 0x120);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar9[0x1c] = unaff_r31;
  pSVar8 = Splines[iVar14];
  dVar25 = (double)pSVar8->points[iVar7].x;
  dVar24 = (double)pSVar8->points[iVar7].y;
  fVar2 = (float)(dVar25 - (double)fVar2);
  dVar23 = (double)pSVar8->points[iVar7].z;
  fVar3 = (float)(dVar24 - (double)fVar3);
  fVar1 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 0x10) = fVar2;
  *(float *)((int)puVar9 + 0x84) = fVar3;
  *(float *)(puVar9 + 0x11) = fVar1 - fVar5;
  dVar21 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  unused = (float *)(uVar15 << 2);
  fVar2 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = unused[0x1cd640];
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar1;
  }
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar19 = dVar21;
  if (0.0 < fVar2) {
    lVar12 = uVar11 - 0x100;
    lVar16 = uVar11 - 0x84;
    lVar17 = uVar11 - 0x74;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)(puVar9 + 0x12) = fVar2;
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar1;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar2;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar2 * fVar1;
    do {
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar2 * fVar2;
      iVar14 = (int)lVar16;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x84;
    unused = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar16 = lVar17;
    do {
      fVar2 = *unused;
      fVar1 = unused[1];
      unused = unused + 2;
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar1;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar14 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
             g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x128));
  dVar22 = (double)(DAT_007aac38 * g_FrameTime);
  dVar19 = (double)FastSubRots((float)dVar19,*(float *)(param_1 + 0x48));
  if (0.2617993950843811 < dVar19) {
    dVar22 = (double)g_FrameTime;
  }
  Delt((float)dVar22,DAT_0071f418,(float *)(iVar6 + 300));
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar5 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar19 == dVar21) {
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar21;
    dVar22 = dVar21;
    dVar20 = dVar21;
  }
  else {
    fVar1 = (float)((double)*(float *)(iVar6 + 300) / dVar19);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar20 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar2 * fVar1);
    dVar19 = (double)(fVar5 * fVar1);
  }
  *(float *)(puVar9 + 0xe) = (float)dVar20;
  *(float *)((int)puVar9 + 0x74) = (float)dVar22;
  *(float *)(puVar9 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar4;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar21,param_1,uVar11 - 0xa0);
  fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar25);
  fVar5 = (float)((double)*(float *)(param_1 + 0x18) - dVar23);
  if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 1.0) {
    iVar14 = MB_randInt(Splines[*(int *)(iVar6 + 0x100)]->cnt + -1);
    iVar14 = *(int *)(iVar6 + 0x120) + iVar14 + 1;
    *(int *)(iVar6 + 0x120) =
         iVar14 - (iVar14 / Splines[*(int *)(iVar6 + 0x100)]->cnt) *
                  Splines[*(int *)(iVar6 + 0x100)]->cnt;
  }
  dVar24 = (double)(*(float *)(iVar6 + 300) / (DAT_007aac40 * g_FrameTime));
  dVar23 = 2.0;
  if ((dVar24 <= 2.0) && (dVar23 = dVar24, dVar24 < dVar21)) {
    dVar23 = dVar21;
  }
  if (*(int *)(iVar6 + 0x138) != 0) {
    *(float *)(*(int *)(iVar6 + 0x138) + 0x58) = (float)dVar23;
    iVar14 = *(int *)(iVar6 + 0x138);
    *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar14 = *(int *)(iVar6 + 0x138);
    *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  if (*(int *)(iVar6 + 0x13c) != 0) {
    *(float *)(*(int *)(iVar6 + 0x13c) + 0x58) = (float)dVar23;
    iVar14 = *(int *)(iVar6 + 0x13c);
    *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar6 = *(int *)(iVar6 + 0x13c);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


// 0x02839d8 (0xa44 bytes)
// inlined: FastAtan2 @0x283fcc, FastAtan2 @0x28417c
void M1454_002839d8(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  int iVar18;
  longlong lVar16;
  longlong lVar19;
  float *pfVar20;
  MobyInstance *pMVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r27;
  vec4 *pvVar24;
  ulonglong unaff_r28;
  longlong lVar25;
  ulonglong unaff_r29;
  vec4 *pvVar26;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar25 = uVar15 - 400;
  puVar10 = (ulonglong *)lVar25;
  *puVar10 = uVar15;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x2b] = unaff_r30;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x29] = unaff_r28;
  puVar10[0x28] = unaff_r27;
  pvVar9 = param_1->pVar;
  uVar27 = ZEXT48(pvVar9);
  uVar17 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar17,uVar27 + 0x20,0,puVar10 + 0x1c,(int)puVar10 + 0xe4,0,4);
  if ((*(int *)(puVar10 + 0x1c) != 1) && (param_1->state != '\0')) {
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar10 + 0xe4);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    uVar35 = 0;
    if (fVar3 <= 0.0) {
      fVar1 = (param_1->pos).y;
      *(f32 *)(puVar10 + 0x1a) = (param_1->pos).x;
      fVar2 = (param_1->pos).w;
      *(f32 *)((int)puVar10 + 0xd4) = fVar1;
      *(f32 *)((int)puVar10 + 0xdc) = fVar2;
      fVar3 = (param_1->pos).z;
      puVar10[0x12] = 0xffffffffffffffff;
      puVar10[0x14] = 1;
      puVar10[0x15] = 1;
      puVar10[0x16] = 0xffffffffffffffff;
      puVar10[0x17] = 0;
      *(float *)(puVar10 + 0x1b) = fVar3 + 1.0;
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,param_1,uVar27 + 0x40,uVar15 - 0xc0,&DAT_00283980,1,0x14,8,0x14)
      ;
      pvVar26 = &param_1->pos;
      pvVar24 = &param_1->rotation;
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x700,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x701,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x702,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x704,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x6fe,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x6fe,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      puVar10[0xe] = ZEXT48(&DAT_00a15d30);
      puVar10[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar35,param_1,0x6ff,pvVar26,pvVar24,0,0);
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      DeleteMoby(param_1);
      if (*(MobyInstance **)((int)pvVar9 + 0x138) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x138));
      }
      if (*(MobyInstance **)((int)pvVar9 + 0x13c) == (MobyInstance *)0x0) {
        return;
      }
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x13c));
      return;
    }
    *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
    MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
  }
  pMVar21 = (MobyInstance *)0xff;
  param_1->damage = -1;
  dVar36 = 30.0;
  iVar18 = MB_getTarget(0x403e000000000000,param_1,0xff,uVar27 + 0x70);
  pMVar14 = g_heroMobyPtr;
  if (iVar18 != 2) {
    fVar3 = (param_1->pos).y;
    fVar4 = (param_1->pos).x;
    fVar7 = fVar3 - g_heroPosition.y;
    fVar8 = fVar4 - g_heroPosition.x;
    pMVar21 = (MobyInstance *)&DAT_00283980;
    if (10.0 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7)) {
      iVar18 = *(int *)((int)pvVar9 + 0xb0);
      if ((iVar18 != 0) &&
         (fVar3 = fVar3 - *(float *)(iVar18 + 0x14), fVar4 = fVar4 - *(float *)(iVar18 + 0x10),
         dVar36 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
        *(undefined4 *)((int)pvVar9 + 0xb4) = 2;
      }
    }
    else {
      *(MobyInstance **)((int)pvVar9 + 0xb0) = g_heroMobyPtr;
      pMVar21 = g_heroMobyPtr;
      *(f32 *)((int)pvVar9 + 0x70) = (g_heroMobyPtr->pos).x;
      *(f32 *)((int)pvVar9 + 0x74) = (pMVar21->pos).y;
      *(f32 *)((int)pvVar9 + 0x78) = (pMVar21->pos).z;
      *(f32 *)((int)pvVar9 + 0x7c) = (pMVar21->pos).w;
      pMVar21 = pMVar14;
    }
  }
  if (*(int *)((int)pvVar9 + 0xb4) == 2) {
    dVar31 = 12.566370964050293;
    dVar36 = 9.42477798461914;
    OrganicDeltAng
              ((param_1->rotation).z,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar9 + 0x110),(int)pMVar21,
               (float *)((int)pvVar9 + 0x114));
    OrganicDeltAng
              (0.0,(float)((double)DAT_0071f418 * dVar31),(float)((double)DAT_0071f418 * dVar31),
               (float)((double)g_FrameTime * dVar36),(float *)((int)pvVar9 + 0x118),
               (int)pMVar21,(float *)((int)pvVar9 + 0x11c));
  }
  else {
    dVar34 = (double)(*(float *)((int)pvVar9 + 0x74) - (param_1->pos).y);
    dVar37 = (double)(*(float *)((int)pvVar9 + 0x70) - (param_1->pos).x);
    dVar33 = (double)((*(float *)((int)pvVar9 + 0x78) - (param_1->pos).z) - 3.0);
    dVar29 = (double)(float)(dVar37 * dVar37 + (double)(float)(dVar34 * dVar34));
    dVar36 = dVar34;
    dVar31 = dVar37;
    if (*(float *)((int)pvVar9 + 0x130) < SQRT((float)(dVar33 * dVar33 + dVar29))) {
      fVar3 = (float)SQRT(dVar29);
      dVar36 = 0.0;
      dVar31 = dVar36;
      if (fVar3 != 0.0) {
        dVar31 = (double)(*(float *)((int)pvVar9 + 0x130) / fVar3);
        dVar36 = (double)(float)(dVar31 * dVar34);
        dVar31 = (double)(float)(dVar31 * dVar37);
      }
    }
    fVar3 = *(float *)((int)pvVar9 + 0x134);
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    *(float *)((int)puVar10 + 0xf4) = (float)dVar31;
    *(float *)(puVar10 + 0x1f) = (float)dVar36;
    *(float *)((int)puVar10 + 0xfc) = (float)(ABS(dVar31) - ABS(dVar36));
    dVar29 = 0.0;
    fVar7 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar7 = fVar4;
    }
    fVar3 = fVar7 * fVar7;
    uVar23 = (ulonglong)(*(uint *)((int)puVar10 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x1f) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)((int)puVar10 + 0xf4));
    if (*(float *)((int)puVar10 + 0xfc) - 0.0 < 0.0) {
      dVar34 = ABS(dVar36);
    }
    fVar11 = fVar3 * fVar3 * fVar7;
    fVar12 = fVar3 * fVar11;
    dVar32 = 0.7853981852531433;
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar10 + 0x1f));
    if (*(float *)((int)puVar10 + 0xfc) - 0.0 < 0.0) {
      dVar37 = ABS(dVar31);
    }
    dVar30 = dVar29;
    if (0.0 < dVar34) {
      lVar16 = uVar15 - 0x180;
      lVar19 = uVar15 - 0x70;
      lVar22 = uVar15 - 0x60;
      lVar28 = 2;
      fVar5 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 300) = fVar5;
      *(float *)((int)puVar10 + 0x124) = fVar5;
      *(float *)(puVar10 + 0x25) = fVar5;
      *(float *)(puVar10 + 0x24) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar6;
      *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar5;
      *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar22 = uVar15 - 0x70;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar25;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar19 = 2;
      lVar16 = lVar25;
      dVar34 = dVar29;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar18 + 0x120)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar34 + 0.7853981852531433) * fVar8 + fVar4);
    }
    dVar34 = (double)FastWrapRot
                               ((float)dVar30,
                                (fVar3 * fVar12 * 2.601887e-06 +
                                fVar12 * -0.0001980741 +
                                fVar11 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
                                0.08726646);
    *(float *)((int)puVar10 + 0xec) = (float)dVar33;
    fVar3 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar36 * dVar36)));
    dVar31 = ABS((double)fVar3);
    *(float *)(puVar10 + 0x1d) = fVar3;
    *(float *)(puVar10 + 0x1e) = (float)(dVar31 - ABS(dVar33));
    uVar23 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
    pfVar20 = (float *)((uint)(uVar23 << 2) | 0x735900);
    dVar36 = ABS((double)*(float *)(puVar10 + 0x1d));
    if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
      dVar36 = ABS(dVar33);
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar10 + 0xec));
    if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
      dVar33 = dVar31;
    }
    fVar4 = pfVar20[1];
    if (dVar29 < dVar36) {
      lVar16 = uVar15 - 0x180;
      lVar19 = uVar15 - 0x90;
      lVar22 = uVar15 - 0x80;
      lVar28 = 2;
      fVar7 = (float)(dVar33 - dVar36) / (float)(dVar33 + dVar36);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x10c) = fVar7;
      *(float *)((int)puVar10 + 0x104) = fVar7;
      *(float *)(puVar10 + 0x21) = fVar7;
      *(float *)(puVar10 + 0x20) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar8;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar7;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar22 = uVar15 - 0x90;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar25;
      lVar19 = lVar22;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar25;
        iVar13 = (int)lVar22;
        lVar25 = lVar25 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0x100)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar29 = (double)((float)(dVar29 + dVar32) * fVar3 + fVar4);
    }
    dVar29 = -dVar29;
    dVar36 = 0.3490658402442932;
    if ((dVar29 <= 0.3490658402442932) && (dVar36 = dVar29, dVar29 < -0.7853981852531433)) {
      dVar36 = -0.7853981852531433;
    }
    dVar29 = 12.566370964050293;
    dVar31 = 9.42477798461914;
    OrganicDeltAng
              ((float)dVar34,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar9 + 0x110),(int)pfVar20,
               (float *)((int)pvVar9 + 0x114));
    OrganicDeltAng
              ((float)dVar36,(float)((double)DAT_0071f418 * dVar29),
               (float)((double)DAT_0071f418 * dVar29),
               (float)((double)g_FrameTime * dVar31),(float *)((int)pvVar9 + 0x118),
               (int)pfVar20,(float *)((int)pvVar9 + 0x11c));
  }
  FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x118),uVar15 - 0xd0,1);
  lVar25 = uVar27 + 0xd0;
  FastDiffRots((double)*(float *)((int)pvVar9 + 0x110),(double)(param_1->rotation).z);
  FastQuaternionToEuler(lVar25,2);
  FastQuaternionMult(lVar25,uVar15 - 0xd0,lVar25);
  MB_ColorDyingMoby(param_1,uVar27 + 0x60);
  return;
}


// 0x0284460 (0x6b4 bytes)
/* Moby 1454 */

void UpdateMoby_1454(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  int iVar7;
  undefined8 in_LR;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> local_60;
  GPiece<40> local_50;
  
  pvVar2 = moby->pVar;
  M1454_002839d8();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    AttachManipulator(moby,0,(int)pvVar2 + 0xc0);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x40c00000;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    *(undefined2 *)((int)pvVar2 + 0x24) = 6;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    auVar9 = loadVectorLeftIndexed(in_LR,0x28441c);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar7 = *(int *)((int)pvVar2 + 0x138);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x124,
                       ZEXT48(pvVar2));
    *(undefined4 *)((int)pvVar2 + 0x124U & 0xfffffffc) = uVar3;
    *(undefined4 *)((int)pvVar2 + 0x120) = 0;
    if (iVar7 == 0) {
      pMVar6 = CreateMoby(TRACKDRIVE_LEFT);
      *(MobyInstance **)((int)pvVar2 + 0x138) = pMVar6;
      pMVar6->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x138) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar2 + 0x138) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar2 + 0x138) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x138) + 0x34) = 0x4000;
      iVar7 = *(int *)((int)pvVar2 + 0x138);
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x138) + 0x94) = 0;
      MB_SetAnimation(*(undefined4 *)((int)pvVar2 + 0x138),0,0,0);
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar2 + 0x138));
    }
    if (*(int *)((int)pvVar2 + 0x13c) == 0) {
      pMVar6 = CreateMoby(TRACKDRIVE_LEFT);
      *(MobyInstance **)((int)pvVar2 + 0x13c) = pMVar6;
      pMVar6->updateDistance = '@';
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x13c) + 0x32) = 0x40;
      *(undefined1 *)(*(int *)((int)pvVar2 + 0x13c) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar2 + 0x13c) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(undefined2 *)(*(int *)((int)pvVar2 + 0x13c) + 0x34) = 0x8000;
      iVar7 = *(int *)((int)pvVar2 + 0x13c);
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x13c) + 0x94) = 0;
      MB_SetAnimation(*(undefined4 *)((int)pvVar2 + 0x13c),0,0,0);
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar2 + 0x13c));
    }
    if (moby->animationId != '\x01') {
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    M1454_00283468(moby);
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x41200000;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0;
      if (moby->animationId != '\x02') {
        MB_SetAnimation(moby,2,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    M1454_00283468(moby);
    Delt(30.0,g_FrameTime * 6.0,(float *)((int)pvVar2 + 0x130));
    dVar8 = (double)FastWrapRot
                              (*(float *)((int)pvVar2 + 0x134),g_FrameTime * 6.2831855);
    *(float *)((int)pvVar2 + 0x134) = (float)dVar8;
    iVar7 = MB_MayaFrameTrigger(4.0,moby);
    if ((iVar7 != 0) || (iVar7 = MB_MayaFrameTrigger(10.0,moby), iVar7 != 0)) {
      dVar8 = (double)BlendAnimFrame(moby);
      if (7.0 <= dVar8) {
        GetBonePosition(moby,2,local_50);
      }
      else {
        GetBonePosition(moby,1,local_50);
      }
      PlayMobySound(0,0,moby);
      ____MB_SpawnRingPartFx(moby);
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 10.0) {
        FUN_00366190(moby,local_50,local_60,1);
      }
      else {
        FUN_00366190(moby,local_50,local_60,0);
      }
    }
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x01';
    }
  }
  return;
}



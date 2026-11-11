// game/update/moby245.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x31152c-0x312b54
#include "game/update/moby245.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x031152c (0x14 bytes)
void M245_0031152c(void)

{
  DAT_007ff8ac = 0x10000;
  return;
}


// 0x0311558 (0x184 bytes)
longlong M245_00311558(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  undefined8 in_r7;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  pMVar7 = CreateMoby(0xf5);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = '\x7f';
    pMVar7->drawDistance = 0x7f;
    uVar5 = param_1->color;
    uVar6 = param_1->light;
    puVar3 = (undefined4 *)pMVar7->pVar;
    pMVar7->enabled = '\x01';
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    dVar8 = (double)MB_randRangeFloat(0.85,1.15);
    fVar1 = (param_1->pos).x;
    pMVar7->unk58 = (float)dVar8;
    fVar2 = (param_1->pos).y;
    (pMVar7->pos).x = fVar1;
    fVar1 = (param_1->pos).z;
    (pMVar7->pos).y = fVar2;
    fVar2 = (param_1->pos).w;
    (pMVar7->pos).z = fVar1;
    fVar1 = (param_1->rotation).x;
    (pMVar7->pos).w = fVar2;
    fVar2 = (param_1->rotation).y;
    (pMVar7->rotation).x = fVar1;
    fVar1 = (param_1->rotation).z;
    (pMVar7->rotation).y = fVar2;
    fVar2 = (param_1->rotation).w;
    (pMVar7->rotation).z = fVar1;
    auVar9 = ZEXT416(0xffffffff);
    auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    (pMVar7->rotation).w = fVar2;
    auVar9 = loadVectorLeftIndexed(8,0x311540);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x44,ZEXT48(puVar3)
                      );
    *(undefined4 *)((uint)(puVar3 + 0x11) & 0xfffffffc) = uVar4;
    *puVar3 = 0x3f800000;
    *(undefined2 *)(puVar3 + 1) = 1;
    *(undefined1 *)(puVar3 + 2) = 0;
    DeleteMoby(param_1);
    SpawnPart_5
              (0x412e848000000000,0,(longlong)(int)pMVar7 + 0x10,0x7f,0x7f,0x7f,in_r7,
               (int)(animationSpeed * 15.5));
    UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}


// 0x0311740 (0x1414 bytes)
// inlined: FastAtan2 @0x311cc8, FastAtan2 @0x312064, FastAtan2 @0x312410, FastAtan2 @0x3127a0
/* Moby 245 */

void UpdateMoby_245(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  undefined4 uVar25;
  longlong lVar22;
  longlong lVar23;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  undefined8 uVar35;
  ulonglong in_f28;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x1d0;
  puVar10 = (ulonglong *)lVar23;
  *puVar10 = uVar20;
  puVar10[0x3c] = in_LR;
  puVar10[0x31] = in_f23;
  puVar10[0x32] = in_f24;
  puVar10[0x33] = in_f25;
  puVar10[0x34] = in_f26;
  puVar10[0x35] = in_f27;
  puVar10[0x36] = in_f28;
  puVar10[0x37] = in_f29;
  puVar10[0x38] = in_f30;
  puVar10[0x39] = in_f31;
  puVar10[0x30] = unaff_r31;
  puVar10[0x2f] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  puVar10[0x2e] = unaff_r29;
  puVar10[0x2d] = unaff_r28;
  dVar39 = (double)moby->unk58;
  iVar24 = MB_damage(lVar21,0xffffffffffffffff,0);
  if (iVar24 != 0) {
    *pfVar8 = *pfVar8 - *(float *)(iVar24 + 0x2c);
  }
  moby->damage = -1;
  uVar9 = (int)*pfVar8 >> 0x1f;
  if ((int)((uVar9 >> 1 ^ (uint)*pfVar8) - uVar9) < 0x3f800000) {
    iVar24 = 0;
    dVar40 = 0.0;
    dVar38 = 0.25;
    dVar37 = 0.15000000596046448;
    dVar36 = 0.5;
    uVar35 = 0x41024f8000000000;
    dVar34 = 60.5;
    dVar39 = 90.5;
    do {
      dVar31 = (double)MB_randRangeFloat((float)dVar40,(float)dVar38);
      dVar32 = (double)MB_randRot();
      dVar33 = (double)MB_randRot();
      MB_SphericalToVector
                ((float)dVar31,(float)dVar32,(float)dVar33,(float *)(uVar20 - 0x140));
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      dVar31 = (double)g_FrameTime;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) + (moby->pos).x;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) + fVar2;
      *(float *)(puVar10 + 0x13) = (float)((double)*(float *)(puVar10 + 0x13) + dVar38) + fVar3;
      dVar31 = (double)MB_randRangeFloat
                                 ((float)(dVar31 * dVar37),(float)(dVar31 * dVar36));
      dVar32 = (double)MB_randRot();
      dVar33 = (double)MB_randRot();
      MB_SphericalToVector
                ((float)dVar31,(float)dVar32,(float)dVar33,(float *)(uVar20 - 0x150));
      dVar31 = (double)animationSpeed;
      puVar10[0x2a] = (longlong)(int)(dVar31 * dVar34);
      puVar10[0x2a] = (longlong)(int)(dVar31 * dVar39);
      MB_randRange
                (*(undefined4 *)((int)puVar10 + 0x154),*(undefined4 *)((int)puVar10 + 0x154));
      SpawnPart_22(uVar35,uVar20 - 0x140,uVar20 - 0x150,0x2f7f7f7f,0x2f2f2f);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 0x14);
    DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
      }
      else {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar25 = MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
        fVar7 = g_FrameTime;
        fVar2 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar4 = fVar2 - g_heroPosition.y;
        fVar12 = fVar3 - g_heroPosition.x;
        if (SQRT(fVar12 * fVar12 + fVar4 * fVar4) < 5.0) {
          fVar4 = (moby->rotation).z;
          fVar12 = fVar4 + 1.5707963;
          fVar13 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar13 = fVar4;
          }
          fVar15 = 3.1415925 - fVar12;
          if (fVar12 - (3.1415925 - fVar12) < 0.0) {
            fVar15 = fVar12;
          }
          fVar14 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar13 < 0.0) {
            fVar14 = fVar13;
          }
          fVar4 = -3.1415925 - fVar12;
          if ((-3.1415925 - fVar12) - fVar15 < 0.0) {
            fVar4 = fVar15;
          }
          fVar12 = fVar14 * fVar14;
          fVar13 = fVar4 * fVar4;
          fVar17 = fVar12 * fVar12 * fVar14;
          fVar15 = fVar13 * fVar13 * fVar4;
          fVar18 = fVar12 * fVar17;
          fVar16 = fVar13 * fVar15;
          fVar12 = (fVar12 * fVar18 * 2.601887e-06 +
                   fVar18 * -0.0001980741 +
                   fVar17 * 0.0083330255 + fVar12 * fVar14 * -0.16666657 + fVar14) *
                   g_FrameTime;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar7 = (fVar13 * fVar16 * 2.601887e-06 +
                  fVar16 * -0.0001980741 +
                  fVar15 * 0.0083330255 + fVar13 * fVar4 * -0.16666657 + fVar4) * fVar7;
          *(float *)((int)puVar10 + 0x74) = fVar12 + fVar2;
          *(float *)(puVar10 + 0xe) = fVar7;
          *(float *)(puVar10 + 0xe) = fVar7 + fVar3;
          dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <=
              g_FrameTime * 2.0) {
            moby->state = '\x02';
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar10 + 0x154));
          }
        }
      }
    }
    else if (bVar1 < 3) {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (fVar4 <= 6.0) {
        if (3.0 <= fVar4) {
          *(float *)(puVar10 + 0x17) = fVar3;
          *(float *)((int)puVar10 + 0xbc) = fVar2;
          pfVar27 = (float *)&g_atanQuadrantTable;
          *(float *)(puVar10 + 0x18) = ABS(fVar3) - ABS(fVar2);
          dVar34 = 0.0;
          uVar28 = (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar10 + 0x17));
          if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
            fVar4 = ABS(fVar2);
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
          fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar10 + 0xbc));
          if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
            fVar12 = ABS(fVar3);
          }
          if (0.0 < fVar4) {
            lVar22 = uVar20 - 0x1c0;
            lVar26 = uVar20 - 0xc0;
            lVar29 = uVar20 - 0xb0;
            lVar30 = 2;
            fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0x11c) = fVar3;
            *(float *)((int)puVar10 + 0x114) = fVar3;
            *(float *)(puVar10 + 0x23) = fVar3;
            *(float *)(puVar10 + 0x22) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar4;
            *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar3;
            *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x100) * fVar3 * fVar3;
              iVar24 = (int)lVar26;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar20 - 0xc0;
            pfVar27 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar26 = lVar29;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x110) * fVar3;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar11 = (int)lVar29;
              lVar23 = lVar23 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x110)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
          }
          OrganicDeltAngSpeed
                    (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                     (double)(g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
          fVar7 = g_FrameTime;
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar4 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar4 = fVar2;
          }
          fVar12 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar12 = fVar3;
          }
          fVar13 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
            fVar13 = fVar4;
          }
          fVar2 = (moby->pos).x;
          fVar4 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
            fVar4 = fVar12;
          }
          fVar12 = fVar13 * fVar13;
          fVar15 = fVar4 * fVar4;
          fVar17 = fVar12 * fVar12 * fVar13;
          fVar14 = fVar15 * fVar15 * fVar4;
          fVar18 = fVar12 * fVar17;
          fVar3 = (moby->pos).y;
          fVar16 = fVar15 * fVar14;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar4 = (fVar15 * fVar16 * 2.601887e-06 +
                  fVar16 * -0.0001980741 +
                  fVar14 * 0.0083330255 + fVar15 * fVar4 * -0.16666657 + fVar4) * fVar7;
          *(float *)((int)puVar10 + 0x74) =
               (fVar12 * fVar18 * 2.601887e-06 +
               fVar18 * -0.0001980741 +
               fVar17 * 0.0083330255 + fVar12 * fVar13 * -0.16666657 + fVar13) * fVar7 + fVar3;
          *(float *)(puVar10 + 0xe) = fVar4;
          *(float *)(puVar10 + 0xe) = fVar4 + fVar2;
          dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          fVar2 = *(float *)(puVar10 + 0xf);
          if (ABS((float)(dVar34 - (double)fVar2)) <= g_FrameTime * 2.0) {
            fVar5 = *(f32 *)((int)puVar10 + 0x74);
            (moby->pos).x = *(f32 *)(puVar10 + 0xe);
            fVar6 = *(f32 *)((int)puVar10 + 0x7c);
            (moby->pos).y = fVar5;
            (moby->pos).z = fVar2;
            (moby->pos).w = fVar6;
          }
          else {
            moby->state = '\x01';
            uVar25 = MB_randInt(2);
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation
                      (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                       *(undefined4 *)((int)puVar10 + 0x154));
          }
        }
        else {
          *(float *)((int)puVar10 + 0xc4) = fVar3;
          *(float *)(puVar10 + 0x19) = fVar2;
          pfVar27 = (float *)&g_atanQuadrantTable;
          *(float *)((int)puVar10 + 0xcc) = ABS(fVar3) - ABS(fVar2);
          dVar34 = 0.0;
          uVar28 = (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar10 + 0xc4));
          if (*(float *)((int)puVar10 + 0xcc) - 0.0 < 0.0) {
            fVar4 = ABS(fVar2);
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
          fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)(puVar10 + 0x19));
          if (*(float *)((int)puVar10 + 0xcc) - 0.0 < 0.0) {
            fVar12 = ABS(fVar3);
          }
          if (0.0 < fVar4) {
            lVar22 = uVar20 - 0x1c0;
            lVar29 = uVar20 - 0x90;
            lVar26 = uVar20 - 0xa0;
            lVar30 = 2;
            fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0x13c) = fVar3;
            *(float *)((int)puVar10 + 0x134) = fVar3;
            *(float *)(puVar10 + 0x27) = fVar3;
            *(float *)(puVar10 + 0x26) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar4;
            *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar3;
            *(float *)((int)puVar10 + 0x13c) = *(float *)((int)puVar10 + 0x13c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar22 + 0x130) = *(float *)((int)lVar22 + 0x120) * fVar3 * fVar3;
              iVar24 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar20 - 0xa0;
            pfVar27 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar26 = lVar29;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar22 + 0x130) = *(float *)((int)lVar22 + 0x130) * fVar3;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar11 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x130)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
          }
          OrganicDeltAngSpeed
                    (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                     (double)(g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
          fVar7 = g_FrameTime;
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar4 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar4 = fVar2;
          }
          fVar12 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar12 = fVar3;
          }
          fVar13 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
            fVar13 = fVar4;
          }
          fVar2 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
            fVar2 = fVar12;
          }
          fVar15 = fVar13 * fVar13;
          dVar36 = 2.0;
          fVar12 = g_FrameTime * 2.0;
          fVar14 = fVar2 * fVar2;
          fVar18 = fVar15 * fVar15 * fVar13;
          fVar3 = (moby->pos).x;
          fVar16 = fVar14 * fVar14 * fVar2;
          fVar19 = fVar15 * fVar18;
          fVar4 = (moby->pos).y;
          fVar17 = fVar14 * fVar16;
          *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
          fVar12 = fVar12 * (fVar14 * fVar17 * 2.601887e-06 +
                            fVar17 * -0.0001980741 +
                            fVar16 * 0.0083330255 + fVar14 * fVar2 * -0.16666657 + fVar2);
          *(float *)((int)puVar10 + 0x74) =
               fVar7 * 2.0 *
               (fVar15 * fVar19 * 2.601887e-06 +
               fVar19 * -0.0001980741 +
               fVar18 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13) + fVar4;
          *(float *)(puVar10 + 0xe) = fVar12;
          *(float *)(puVar10 + 0xe) = fVar12 + fVar3;
          dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
          if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <=
              (float)((double)(float)((double)g_FrameTime * dVar36) * dVar36)) {
            moby->state = '\x03';
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar21,2,0,*(undefined4 *)((int)puVar10 + 0x154));
          }
          else {
            moby->state = '\x01';
            uVar25 = MB_randInt(2);
            puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation
                      (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                       *(undefined4 *)((int)puVar10 + 0x154));
          }
        }
      }
      else {
        moby->state = '\x01';
        uVar25 = MB_randInt(2);
        puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation
                  (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                   *(undefined4 *)((int)puVar10 + 0x154));
      }
    }
    else if (bVar1 < 4) {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= 4.0) {
        *(float *)(puVar10 + 0x14) = fVar3;
        *(float *)((int)puVar10 + 0xa4) = fVar2;
        pfVar27 = (float *)&g_atanQuadrantTable;
        *(float *)(puVar10 + 0x15) = ABS(fVar3) - ABS(fVar2);
        dVar34 = 0.0;
        uVar28 = (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar10 + 0x14));
        if (*(float *)(puVar10 + 0x15) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
        fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)((int)puVar10 + 0xa4));
        if (*(float *)(puVar10 + 0x15) - 0.0 < 0.0) {
          fVar12 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar22 = uVar20 - 0x1c0;
          lVar29 = uVar20 - 0xf0;
          lVar26 = uVar20 - 0x100;
          lVar30 = 2;
          fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xdc) = fVar3;
          *(float *)((int)puVar10 + 0xd4) = fVar3;
          *(float *)(puVar10 + 0x1b) = fVar3;
          *(float *)(puVar10 + 0x1a) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar4;
          *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar3;
          *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xc0) * fVar3 * fVar3;
            iVar24 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar29 = uVar20 - 0x100;
          pfVar27 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar26 = lVar29;
          do {
            fVar3 = *pfVar27;
            fVar4 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xd0) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar22 = 2;
          do {
            iVar24 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar11 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xd0)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
        }
        OrganicDeltAngSpeed
                  (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
        fVar7 = g_FrameTime;
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar12 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar12 = fVar3;
        }
        fVar13 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
          fVar2 = fVar12;
        }
        fVar15 = fVar13 * fVar13;
        dVar36 = 2.0;
        fVar12 = g_FrameTime * 2.0;
        fVar14 = fVar2 * fVar2;
        fVar18 = fVar15 * fVar15 * fVar13;
        fVar3 = (moby->pos).x;
        fVar16 = fVar14 * fVar14 * fVar2;
        fVar19 = fVar15 * fVar18;
        fVar4 = (moby->pos).y;
        fVar17 = fVar14 * fVar16;
        *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
        fVar12 = fVar12 * (fVar14 * fVar17 * 2.601887e-06 +
                          fVar17 * -0.0001980741 +
                          fVar16 * 0.0083330255 + fVar14 * fVar2 * -0.16666657 + fVar2);
        *(float *)((int)puVar10 + 0x74) =
             fVar7 * 2.0 *
             (fVar15 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar18 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13
             ) + fVar4;
        *(float *)(puVar10 + 0xe) = fVar12;
        *(float *)(puVar10 + 0xe) = fVar12 + fVar3;
        dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
        fVar2 = *(float *)(puVar10 + 0xf);
        if (ABS((float)(dVar34 - (double)fVar2)) <=
            (float)((double)(float)((double)g_FrameTime * dVar36) * dVar36)) {
          fVar5 = *(f32 *)((int)puVar10 + 0x74);
          (moby->pos).x = *(f32 *)(puVar10 + 0xe);
          fVar6 = *(f32 *)((int)puVar10 + 0x7c);
          (moby->pos).y = fVar5;
          (moby->pos).z = fVar2;
          (moby->pos).w = fVar6;
        }
        else {
          moby->state = '\x01';
          uVar25 = MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
      }
      else {
        *(float *)((int)puVar10 + 0xac) = fVar3;
        *(float *)(puVar10 + 0x16) = fVar2;
        pfVar27 = (float *)&g_atanQuadrantTable;
        *(float *)((int)puVar10 + 0xb4) = ABS(fVar3) - ABS(fVar2);
        dVar34 = 0.0;
        uVar28 = (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar10 + 0xac));
        if (*(float *)((int)puVar10 + 0xb4) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
        fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x16));
        if (*(float *)((int)puVar10 + 0xb4) - 0.0 < 0.0) {
          fVar12 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar22 = uVar20 - 0x1c0;
          lVar29 = uVar20 - 0xd0;
          lVar26 = uVar20 - 0xe0;
          lVar30 = 2;
          fVar3 = (fVar12 - fVar4) / (fVar12 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xfc) = fVar3;
          *(float *)((int)puVar10 + 0xf4) = fVar3;
          *(float *)(puVar10 + 0x1f) = fVar3;
          *(float *)(puVar10 + 0x1e) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
          *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar3;
          *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xe0) * fVar3 * fVar3;
            iVar24 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar29 = uVar20 - 0xe0;
          pfVar27 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar26 = lVar29;
          do {
            fVar3 = *pfVar27;
            fVar4 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xf0) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar22 = 2;
          do {
            iVar24 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar11 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xf0)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar2);
        }
        OrganicDeltAngSpeed
                  (dVar34,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(g_FrameTime * 0.7853982),lVar21,pfVar27,pfVar8 + 0x12);
        fVar7 = g_FrameTime;
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar12 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar12 = fVar3;
        }
        fVar13 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = (moby->pos).x;
        fVar4 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar12 < 0.0) {
          fVar4 = fVar12;
        }
        fVar12 = fVar13 * fVar13;
        fVar15 = fVar4 * fVar4;
        fVar17 = fVar12 * fVar12 * fVar13;
        fVar14 = fVar15 * fVar15 * fVar4;
        fVar18 = fVar12 * fVar17;
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
        fVar16 = fVar15 * fVar14;
        fVar4 = (fVar15 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 +
                fVar14 * 0.0083330255 + fVar15 * fVar4 * -0.16666657 + fVar4) * fVar7;
        *(float *)((int)puVar10 + 0x74) =
             (fVar12 * fVar18 * 2.601887e-06 +
             fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar12 * fVar13 * -0.16666657 + fVar13
             ) * fVar7 + fVar3;
        *(float *)(puVar10 + 0xe) = fVar4;
        *(float *)(puVar10 + 0xe) = fVar4 + fVar2;
        dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar20 - 0x160,0);
        if (ABS((float)(dVar34 - (double)*(float *)(puVar10 + 0xf))) <= g_FrameTime * 2.0)
        {
          moby->state = '\x02';
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar10 + 0x154));
        }
        else {
          moby->state = '\x01';
          uVar25 = MB_randInt(2);
          puVar10[0x2a] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation
                    (lVar21,(ulonglong)(LZCOUNT(uVar25) << 0x20) >> 0x25,0,
                     *(undefined4 *)((int)puVar10 + 0x154));
        }
      }
    }
    fVar2 = DAT_0071f418 * 9.8 + pfVar8[0x13];
    pfVar8[0x13] = fVar2;
    (moby->pos).z = (moby->pos).z - fVar2;
    dVar36 = (double)GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
    dVar34 = (double)(moby->pos).z;
    if ((dVar34 < dVar36) && (dVar36 < (double)(float)(dVar34 + 0.25))) {
      pfVar8[0x13] = 0.0;
      (moby->pos).z = (float)dVar36;
      dVar34 = dVar36;
    }
    if (0.0 <= dVar34) {
      moby->unk58 = (float)dVar39;
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}



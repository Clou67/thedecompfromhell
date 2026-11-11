// game/update/moby881.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4a0760-0x4a1020
#include "game/update/moby881.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby882.h"
#include "idol/fastfunc.h"

// 0x04a0760 (0x14 bytes)
void M881_004a0760(void)

{
  DAT_008cbe0c = 0x10000;
  return;
}


// 0x04a07c0 (0x84c bytes)
// inlined: FastAtan2 @0x4a0c58
/* Moby 881 */

void UpdateMoby_881(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x210;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar18;
  puVar14[0x44] = in_LR;
  puVar14[0x3e] = in_f28;
  puVar14[0x3f] = in_f29;
  puVar14[0x40] = in_f30;
  puVar14[0x41] = in_f31;
  puVar14[0x3d] = unaff_r31;
  puVar14[0x3c] = unaff_r30;
  puVar14[0x3b] = unaff_r29;
  puVar14[0x3a] = unaff_r28;
  if (moby != (MobyInstance *)0x0) {
    pvVar9 = moby->pVar;
    uVar28 = ZEXT48(pvVar9);
    if (pvVar9 != (void *)0x0) {
      iVar21 = MB_damage(moby,0x230000,0);
      iVar22 = MB_HandleDamage(moby,iVar21,uVar28 + 0x20,0,puVar14 + 0x34,0,0,4);
      iVar23 = *(int *)(puVar14 + 0x34);
      if (((iVar22 < 3) && (-1 < iVar22)) && (0 < iVar22)) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0;
      }
      if ((1 < iVar23) &&
         (((iVar21 == 0 || (*(int *)(iVar21 + 0x20) == 0)) ||
          (*(short *)(*(int *)(iVar21 + 0x20) + 0xa6) != 0x372)))) {
        uVar10 = (int)*(uint *)((int)pvVar9 + 0x20) >> 0x1f;
        uVar11 = (int)*(uint *)(iVar21 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar21 + 0x2c);
        if ((int)((uVar10 >> 1 ^ *(uint *)((int)pvVar9 + 0x20)) - uVar10) <=
            (int)((uVar11 >> 1 ^ *(uint *)(iVar21 + 0x2c)) - uVar11)) {
          MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
          *(undefined4 *)((int)pvVar9 + 0x20) = 0;
          *(undefined4 *)((int)puVar14 + 0xcc) = 0;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
          *(undefined4 *)(puVar14 + 0x18) = 0;
          puVar14[0x12] = 0xffffffffffffffff;
          puVar14[0x14] = 1;
          puVar14[0x15] = 1;
          puVar14[0x16] = 0xffffffffffffffff;
          puVar14[0x17] = 0;
          MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,moby,uVar18 - 0x150,0,&DAT_004a0778,0,10,3,0x10);
          DeleteMoby(moby);
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        *(float *)((int)pvVar9 + 0x20) = *(float *)((int)pvVar9 + 0x20) - fVar2;
        auVar35 = loadVectorLeftIndexed(0x18,0x4a0778);
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x26,uVar28);
        *(undefined2 *)((int)pvVar9 + 0x26) = uVar12;
        MB_UpdateLightsTransition(moby,uVar28 + 0x60);
      }
      moby->damage = -1;
      MB_ColorDyingMoby(moby,uVar28 + 0x60);
      dVar33 = 20.0;
      MB_getTarget(0x4034000000000000,moby,&DAT_004a0778,uVar18 - 0xc0);
      bVar1 = moby->state;
      if (bVar1 == 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x70,uVar28);
        auVar36 = loadVectorRightIndexed(0x80,uVar28);
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
        auVar35 = loadVectorLeftIndexed(0x20,0x4a0778);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar36 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = ZEXT416((uint)(auVar36.piece<0,4>() + auVar35.piece<0,4>())) & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                            uVar28);
        *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        moby->state = '\x01';
      }
      else if (bVar1 < 2) {
        auVar35 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar9 + 0x74) <= worldUpdateTime) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x24,0x4a0778);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar35 = ZEXT416((uint)(auVar35.piece<0,4>() + auVar36.piece<0,4>())) & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                              uVar28);
          *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
          *(undefined2 *)((int)pvVar9 + 0x78) = 0;
          dVar33 = (double)MB_randRot();
          *(float *)((int)pvVar9 + 0x7c) = (float)dVar33;
          *(undefined2 *)((int)pvVar9 + 0x7a) = 0;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        iVar23 = FastDecTimerS16(uVar28 + 0x78);
        if (iVar23 != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x28,0x4a0778);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = vectorSplatHalfWord(auVar35,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x78,uVar28);
          *(undefined2 *)((int)pvVar9 + 0x78) = uVar12;
          fVar2 = (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar7 = fVar2 - *(float *)((int)puVar14 + 0x154);
          fVar4 = fVar3 - *(float *)(puVar14 + 0x2a);
          if ((double)SQRT(fVar4 * fVar4 + fVar7 * fVar7) < dVar33) {
            fVar3 = *(float *)(puVar14 + 0x2a) - fVar3;
            fVar2 = *(float *)((int)puVar14 + 0x154) - fVar2;
            fVar7 = ABS(fVar3);
            fVar4 = ABS(fVar2);
            *(float *)((int)puVar14 + 0x1a4) = fVar3;
            *(float *)(puVar14 + 0x35) = fVar2;
            *(float *)((int)puVar14 + 0x1ac) = fVar7 - fVar4;
            fVar2 = 0.0;
            uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x1a4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x1ac) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x35) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar14 + 0x1a4));
            if (*(float *)((int)puVar14 + 0x1ac) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)(puVar14 + 0x35));
            if (*(float *)((int)puVar14 + 0x1ac) - 0.0 < 0.0) {
              fVar15 = fVar7;
            }
            if (0.0 < fVar3) {
              lVar26 = uVar18 - 0x200;
              lVar25 = uVar18 - 0x60;
              lVar24 = uVar18 - 0x50;
              lVar29 = 2;
              fVar3 = (fVar15 - fVar3) / (fVar15 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0x1bc) = fVar3;
              *(float *)((int)puVar14 + 0x1b4) = fVar3;
              *(float *)(puVar14 + 0x37) = fVar3;
              *(float *)(puVar14 + 0x36) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar7;
              *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
              *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar26 + 0x1b0) = *(float *)((int)lVar26 + 0x1a0) * fVar3 * fVar3;
                iVar23 = (int)lVar25;
                lVar26 = lVar26 + 8;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar26 = uVar18 - 0x60;
              lVar29 = 4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar24 = lVar26;
              lVar25 = lVar20;
              do {
                fVar3 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar25 + 0x1b0) = *(float *)((int)lVar25 + 0x1b0) * fVar3;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar24 = 2;
              do {
                iVar23 = (int)lVar20;
                lVar20 = lVar20 + 0x10;
                iVar21 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar2 = fVar2 + *(float *)(iVar23 + 0x1b0) + *(float *)(iVar21 + 4) +
                        *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar4;
            }
            *(float *)((int)pvVar9 + 0x7c) = fVar2;
          }
          dVar33 = (double)MB_randRangeFloat(3.0,11.0);
          *(float *)(puVar14 + 0x1a) = (float)dVar33;
          dVar33 = (double)MB_randRangeFloat(-2.0,2.0);
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          dVar34 = 0.0;
          fVar5 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x1b) = 0;
          fVar6 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x20) = fVar5;
          fVar5 = (moby->pos).w;
          *(f32 *)((int)puVar14 + 0x104) = fVar6;
          *(f32 *)((int)puVar14 + 0x10c) = fVar5;
          *(float *)(puVar14 + 0x21) = (moby->pos).z + 1.0;
          *(undefined4 *)((int)puVar14 + 0xec) = 0;
          *(undefined4 *)(puVar14 + 0x1d) = 0;
          *(undefined4 *)((int)puVar14 + 0xe4) = 0;
          *(undefined4 *)(puVar14 + 0x1c) = 0;
          *(undefined4 *)(puVar14 + 0x1d) = *(undefined4 *)((int)pvVar9 + 0x7c);
          FastEulerToMtx1(uVar18 - 0x100,uVar18 - 0x130);
          fVar2 = *(float *)((int)puVar14 + 0xd4);
          fVar3 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          fVar4 = *(float *)((int)puVar14 + 0xdc);
          fVar16 = *(float *)((int)puVar14 + 0x144) * fVar4 +
                   *(float *)((int)puVar14 + 0x134) * fVar7 +
                   *(float *)((int)puVar14 + 0x114) * fVar3 +
                   *(float *)((int)puVar14 + 0x124) * fVar2;
          fVar15 = *(float *)(puVar14 + 0x28) * fVar4 +
                   *(float *)(puVar14 + 0x26) * fVar7 +
                   *(float *)(puVar14 + 0x22) * fVar3 + *(float *)(puVar14 + 0x24) * fVar2;
          fVar8 = *(float *)(puVar14 + 0x29) * fVar4 +
                  *(float *)(puVar14 + 0x27) * fVar7 +
                  *(float *)(puVar14 + 0x23) * fVar3 + *(float *)(puVar14 + 0x25) * fVar2;
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar16;
          *(float *)(puVar14 + 0x1b) = fVar8;
          fVar4 = *(float *)((int)puVar14 + 0x14c) * fVar4 +
                  *(float *)((int)puVar14 + 0x13c) * fVar7 +
                  *(float *)((int)puVar14 + 0x11c) * fVar3 + *(float *)((int)puVar14 + 300) * fVar2;
          dVar32 = (double)SQRT(fVar8 * fVar8 + fVar15 * fVar15 + fVar16 * fVar16);
          *(float *)((int)puVar14 + 0xdc) = fVar4;
          fVar17 = g_FrameTime;
          fVar2 = (moby->pos).x;
          fVar3 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          *(float *)((int)puVar14 + 0xfc) = fVar4;
          fVar4 = DAT_0071f418;
          *(float *)(puVar14 + 0x1a) = fVar15 + fVar2;
          *(float *)((int)puVar14 + 0xd4) = fVar16 + fVar3;
          *(float *)(puVar14 + 0x1b) = fVar8 + fVar7;
          fVar2 = (float)((double)(fVar17 * 7.0) / dVar32);
          dVar33 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar33 = (double)(fVar15 * fVar2);
          }
          dVar30 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar30 = (double)(fVar16 * fVar2);
          }
          dVar31 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar31 = (double)(fVar8 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar33 = (double)(fVar15 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar30 = (double)(fVar16 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar31 = (double)(fVar8 * fVar2);
          }
          *(float *)(puVar14 + 0x1e) = (float)dVar33;
          *(float *)((int)puVar14 + 0xf4) = (float)dVar30;
          *(float *)(puVar14 + 0x1f) = (float)dVar31;
          dVar33 = (double)MB_computeLobVelocity
                                     ((double)(fVar17 * 7.0),(double)(fVar4 * -9.8),uVar18 - 0x110,
                                      uVar18 - 0x140);
          *(float *)(puVar14 + 0x1f) = (float)dVar33;
          M881_004a1030
                    (uVar18 - 0x110,uVar18 - 0x120,moby,*(undefined2 *)((int)pvVar9 + 0x7a));
          *(short *)((int)pvVar9 + 0x7a) = *(short *)((int)pvVar9 + 0x7a) + 1;
        }
        auVar35 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar9 + 0x74) <= worldUpdateTime) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x44,0x4a0778);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar35 = ZEXT416((uint)(auVar35.piece<0,4>() + auVar36.piece<0,4>())) & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                              uVar28);
          *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
          moby->state = '\x01';
        }
      }
    }
  }
  return;
}


// 0x04a100c (0x14 bytes)
void M882_004a100c(void)

{
  DAT_008cbe7c = 0x10000;
  return;
}



// game/update/moby219.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2f5a7c-0x2f7684
#include "game/update/moby219.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02f5a7c (0x14 bytes)
void M219_002f5a7c(void)

{
  DAT_007feeb8 = 0x10000;
  return;
}


// 0x02f5b08 (0x1b68 bytes)
// inlined: FastAtan2 @0x2f5d08, FastAtan2 @0x2f5f08, FastAtan2 @0x2f61c4, FastAtan2 @0x2f635c, FastAtan2 @0x2f6610, FastAtan2 @0x2f68ec, FastAtan2 @0x2f6bc0, FastAtan2 @0x2f6e80, FastAtan2 @0x2f705c
/* Moby 219 */

void UpdateMoby_219(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  MobyInstance *victim;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  float *pfVar25;
  longlong lVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x2b0;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x58] = in_LR;
  puVar12[0x55] = in_f31;
  puVar12[0x54] = unaff_r31;
  puVar12[0x53] = unaff_r30;
  puVar12[0x52] = unaff_r29;
  puVar12[0x51] = unaff_r28;
  puVar12[0x50] = unaff_r27;
  pfVar23 = (float *)moby->pVar;
  uVar26 = ZEXT48(pfVar23);
  iVar18 = MB_damage(lVar15,0x10000,0);
  FastDecTimerS16(uVar26 + 0x136);
  if (((iVar18 != 0) && (moby->state != '\x06' && moby->state != '\x04')) &&
     (*(short *)((int)pfVar23 + 0x136) == 0)) {
    pfVar23[0x1d] = 1.26117e-44;
    pfVar23[0x18] = 0.008;
    pfVar23[0x19] = 0.0005;
    fVar6 = g_FrameTime;
    pfVar23[0x1a] = g_FrameTime * 10.0;
    *(undefined1 *)((int)pfVar23 + 0x8d) = 0;
    pfVar23[0x1b] = fVar6 * 6.0;
    fVar6 = *pfVar23 - *(float *)(iVar18 + 0x2c);
    *pfVar23 = fVar6;
    dVar28 = 0.0;
    if (0.0 <= fVar6) {
      moby->state = '\x06';
      pfVar23[0x28] = 2.0;
      pfVar23[0x29] = 8.0;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar3 = ABS(fVar6);
      fVar9 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x124) = fVar6;
      *(float *)(puVar12 + 0x25) = fVar5;
      *(float *)((int)puVar12 + 300) = fVar3 - fVar9;
      uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1d) & 4;
      uVar20 = uVar21 << 2 | 0x735900;
      fVar6 = ABS(*(float *)((int)puVar12 + 0x124));
      if (*(float *)((int)puVar12 + 300) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar9 = ABS(*(float *)(puVar12 + 0x25));
      if (*(float *)((int)puVar12 + 300) - 0.0 < 0.0) {
        fVar9 = fVar3;
      }
      fVar3 = *(float *)((int)uVar20 + 4);
      if (0.0 < fVar6) {
        lVar16 = uVar14 - 0x2a0;
        lVar24 = uVar14 - 0x84;
        lVar22 = uVar14 - 0x94;
        lVar27 = 2;
        fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
        fVar9 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x45) = fVar6;
        *(float *)(puVar12 + 0x44) = fVar6;
        *(float *)((int)puVar12 + 0x224) = fVar6;
        *(float *)((int)puVar12 + 0x21c) = fVar6;
        fVar6 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x44) = *(float *)(puVar12 + 0x44) * fVar9;
        *(float *)((int)puVar12 + 0x224) = *(float *)((int)puVar12 + 0x224) * fVar6;
        *(float *)(puVar12 + 0x45) = *(float *)(puVar12 + 0x45) * fVar6 * fVar9;
        do {
          *(float *)((int)lVar16 + 0x21c) = *(float *)((int)lVar16 + 0x20c) * fVar6 * fVar6;
          iVar18 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar14 - 0x94;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar22 = lVar24;
        do {
          pfVar25 = (float *)uVar20;
          fVar6 = pfVar25[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar16 + 0x21c) = *(float *)((int)lVar16 + 0x21c) * *pfVar25;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar13 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x21c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
      }
      MB_StartKick(dVar28,lVar15,uVar26 + 0x50,uVar20,6,3,0);
    }
    else {
      uVar19 = (int)*(uint *)(iVar18 + 0x2c) >> 0x1f;
      if ((int)((uVar19 >> 1 ^ *(uint *)(iVar18 + 0x2c)) - uVar19) < 0x3f800000) {
        *(undefined1 *)((int)pfVar23 + 0x47) = 0x4b;
      }
      else {
        *(undefined1 *)((int)pfVar23 + 0x47) = 0x5a;
        moby->state = '\x04';
        pfVar23[0x28] = 4.0;
        pfVar23[0x29] = 9.0;
        fVar6 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar3 = ABS(fVar6);
        fVar9 = ABS(fVar5);
        *(float *)(puVar12 + 0x26) = fVar6;
        *(float *)((int)puVar12 + 0x134) = fVar5;
        *(float *)(puVar12 + 0x27) = fVar3 - fVar9;
        uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1d) & 4;
        uVar20 = uVar21 << 2 | 0x735900;
        fVar6 = ABS(*(float *)(puVar12 + 0x26));
        if (*(float *)(puVar12 + 0x27) - 0.0 < 0.0) {
          fVar6 = fVar9;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        fVar9 = ABS(*(float *)((int)puVar12 + 0x134));
        if (*(float *)(puVar12 + 0x27) - 0.0 < 0.0) {
          fVar9 = fVar3;
        }
        fVar3 = *(float *)((int)uVar20 + 4);
        if (0.0 < fVar6) {
          lVar16 = uVar14 - 0x2a0;
          lVar24 = uVar14 - 100;
          lVar22 = uVar14 - 0x74;
          lVar27 = 2;
          fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
          fVar9 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x49) = fVar6;
          *(float *)(puVar12 + 0x48) = fVar6;
          *(float *)((int)puVar12 + 0x244) = fVar6;
          *(float *)((int)puVar12 + 0x23c) = fVar6;
          fVar6 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x48) = *(float *)(puVar12 + 0x48) * fVar9;
          *(float *)((int)puVar12 + 0x244) = *(float *)((int)puVar12 + 0x244) * fVar6;
          *(float *)(puVar12 + 0x49) = *(float *)(puVar12 + 0x49) * fVar6 * fVar9;
          do {
            *(float *)((int)lVar16 + 0x23c) = *(float *)((int)lVar16 + 0x22c) * fVar6 * fVar6;
            iVar18 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar14 - 0x74;
          uVar20 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar22 = lVar24;
          do {
            pfVar25 = (float *)uVar20;
            fVar6 = pfVar25[1];
            uVar20 = uVar20 + 8;
            *(float *)((int)lVar16 + 0x23c) = *(float *)((int)lVar16 + 0x23c) * *pfVar25;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar13 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x23c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
        }
        MB_StartKick(dVar28,lVar15,uVar26 + 0x50,uVar20,5,3,0);
      }
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x06') {
    uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar23 + 0x14));
    if ((uVar19 & 0x40) != 0) {
      DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x05') {
    dVar28 = (double)BlendAnimFrame(moby);
    if ((dVar28 < 12.0) || (40.0 < dVar28)) {
      if ((40.0 <= dVar28) && (moby->state = '\x01', moby->animationId != '\x03')) {
        MB_SetAnimation(lVar15,3,0,3);
      }
    }
    else {
      auVar32 = ZEXT416(0xfffffff0);
      auVar50 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x138,uVar26);
      auVar33 = loadVectorRightIndexed(0x148,uVar26);
      auVar35 = loadVectorLeftIndexed(0x48,lVar15);
      auVar32 = vectorShiftRightAlgebraicWord(auVar32 | auVar33,auVar50);
      auVar33 = loadVectorLeftIndexed(0x74,0x2f5a90);
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x34,0x2f5a90);
      auVar33 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar42 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar45 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar49,auVar35);
      auVar32 = loadVectorLeftIndexed(0x38,0x2f5a90);
      auVar37 = loadVectorLeftIndexed(0x3c,0x2f5a90);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar32 = ZEXT416(0xffffffff);
      auVar47 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = vectorAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar32 = vectorSubtractFloatingPoint(auVar34,auVar35);
      auVar45 = vectorSubtractFloatingPoint(auVar38,auVar35);
      auVar33 = vectorSubtractFloatingPoint(auVar34,auVar37);
      auVar38 = vectorSubtractFloatingPoint(auVar38,auVar37);
      auVar34 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar35);
      auVar42 = vectorConditionalSelect(auVar32,auVar35,auVar34);
      auVar32 = loadVectorLeftIndexed(0x40,0x2f5a90);
      auVar34 = loadVectorLeftIndexed(0x44,0x2f5a90);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar37);
      auVar34 = loadVectorLeftIndexed(0x48,0x2f5a90);
      auVar33 = vectorConditionalSelect(auVar33,auVar37,auVar32);
      auVar32 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar45);
      auVar45 = vectorConditionalSelect(auVar45,auVar42,auVar32);
      auVar37 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar38);
      auVar32 = ZEXT416(0xffffffff);
      auVar42 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = vectorConditionalSelect(auVar38,auVar33,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar45,auVar38);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar33);
      auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar33 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = loadVectorLeftIndexed(0x4c,0x2f5a90);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar32);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar38,auVar37,auVar42);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar46);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar45);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar40);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar37);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x30,0x2f5a90);
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar43 = vectorMultiplyAddFloatingPoint(auVar38,auVar45,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar45,auVar44,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar41,auVar46,auVar34);
      auVar45 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar43,auVar37);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar43,auVar36,auVar32);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar42);
      auVar32 = ZEXT416(0xffffffff);
      auVar43 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar35);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar38);
      auVar34 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar40,auVar42);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar45,auVar39,auVar36);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar34);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xb4,lVar17)
      ;
      *(undefined4 *)((int)puVar12 + 0xb4) = uVar11;
      *(undefined4 *)(puVar12 + 0x17) = 0;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb0,lVar17)
      ;
      *(undefined4 *)(puVar12 + 0x16) = uVar11;
      uVar11 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48,lVar15)
      ;
      *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar11;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar23 + 0x2c),puVar12 + 0x16,
                 puVar12 + 0x18);
      auVar32 = loadVectorLeftIndexed(0x138,uVar26);
      auVar33 = loadVectorLeftIndexed(0x48,lVar15);
      auVar36 = loadVectorRightIndexed(0x148,uVar26);
      auVar32 = vectorShiftRightAlgebraicWord(auVar32 | auVar36,auVar50);
      auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar49,auVar33);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x48,lVar15)
      ;
      *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar11;
    }
  }
  else if (uVar1 == '\x04') {
    uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar23 + 0x14));
    if ((uVar19 & 1) == 0) {
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      *(undefined2 *)(pfVar23 + 0x4d) = 0;
      if (moby->animationId != '\x02') {
        MB_SetAnimation(lVar15,2,10,3);
      }
      moby->state = '\x05';
      uVar19 = MB_randInt(0x100);
      *(ushort *)(pfVar23 + 0x4e) =
           ((ushort)(ZERO_MASK((uVar19 & 1))) & 0xfffe) + 1;
    }
  }
  else if (uVar1 == '\x03') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x1d) = fVar6;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1e) = fVar3 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar12 + 0x1d));
    if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar12 + 0xec));
    if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    dVar31 = dVar28;
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar24 = uVar14 - 0x124;
      lVar22 = uVar14 - 0x134;
      lVar27 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x31) = fVar6;
      *(float *)(puVar12 + 0x30) = fVar6;
      *(float *)((int)puVar12 + 0x184) = fVar6;
      *(float *)((int)puVar12 + 0x17c) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x30) = *(float *)(puVar12 + 0x30) * fVar3;
      *(float *)((int)puVar12 + 0x184) = *(float *)((int)puVar12 + 0x184) * fVar6;
      *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x17c) = *(float *)((int)lVar16 + 0x16c) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x134;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x17c) = *(float *)((int)lVar16 + 0x17c) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x17c)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar9 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar31,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,&DAT_002f5a90,
               uVar26 + 0x130);
    if ((moby->previousAnimationFrame == '\a') &&
       (iVar18 = FastDecTimerS16(uVar26 + 0x134), iVar18 == 0)) {
      moby->animationFrame = '\a';
    }
    if ((((moby->updateId == moby->animationId) &&
         (dVar31 = (double)BlendAnimFrame(moby), 16.0 <= dVar31)) &&
        (dVar31 = (double)BlendAnimFrame(moby), dVar31 < 21.0)) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
      fVar6 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar9 = fVar6 - g_heroPosition.y;
      fVar3 = fVar5 - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < 6.0) {
        fVar5 = fVar5 - GameCamera.posX;
        fVar6 = fVar6 - GameCamera.posY;
        dVar29 = ABS((double)fVar5);
        dVar30 = ABS((double)fVar6);
        *(float *)((int)puVar12 + 0xdc) = fVar5;
        *(float *)(puVar12 + 0x1c) = fVar6;
        fVar6 = GameCamera.rot.radius;
        *(float *)((int)puVar12 + 0xe4) = (float)(dVar29 - dVar30);
        uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1d) & 4;
        dVar31 = ABS((double)*(float *)((int)puVar12 + 0xdc));
        if ((double)*(float *)((int)puVar12 + 0xe4) - dVar28 < 0.0) {
          dVar31 = dVar30;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar30 = ABS((double)*(float *)(puVar12 + 0x1c));
        if ((double)*(float *)((int)puVar12 + 0xe4) - dVar28 < 0.0) {
          dVar30 = dVar29;
        }
        fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar29 = dVar28;
        if (dVar28 < dVar31) {
          lVar16 = uVar14 - 0x2a0;
          lVar24 = uVar14 - 0x144;
          lVar22 = uVar14 - 0x154;
          lVar27 = 2;
          fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x2d) = fVar3;
          *(float *)(puVar12 + 0x2c) = fVar3;
          *(float *)((int)puVar12 + 0x164) = fVar3;
          *(float *)((int)puVar12 + 0x15c) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar7;
          *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar3;
          *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x15c) = *(float *)((int)lVar16 + 0x14c) * fVar3 * fVar3;
            iVar18 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar14 - 0x154;
          pfVar23 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar7 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar16 + 0x15c) = *(float *)((int)lVar16 + 0x15c) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = 2;
          lVar16 = lVar17;
          dVar31 = dVar28;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar24;
            lVar16 = lVar16 + 0x10;
            lVar24 = lVar24 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x15c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar29 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar9);
        }
        dVar31 = (double)FastSubRots(fVar6,(float)dVar29);
        fVar6 = (moby->rotation).z;
        if (dVar31 < 36.0) {
          fVar5 = g_heroPosition.x - (moby->pos).x;
          fVar9 = g_heroPosition.y - (moby->pos).y;
          dVar29 = ABS((double)fVar5);
          dVar30 = ABS((double)fVar9);
          *(float *)(puVar12 + 0x1a) = fVar5;
          *(float *)((int)puVar12 + 0xd4) = fVar9;
          *(float *)(puVar12 + 0x1b) = (float)(dVar29 - dVar30);
          uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)(puVar12 + 0x1a));
          if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
            dVar31 = dVar30;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar12 + 0xd4));
          if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
            dVar30 = dVar29;
          }
          fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar16 = uVar14 - 0x2a0;
            lVar22 = uVar14 - 0x174;
            lVar24 = uVar14 - 0x164;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x29) = fVar3;
            *(float *)(puVar12 + 0x28) = fVar3;
            *(float *)((int)puVar12 + 0x144) = fVar3;
            *(float *)((int)puVar12 + 0x13c) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar7;
            *(float *)((int)puVar12 + 0x144) = *(float *)((int)puVar12 + 0x144) * fVar3;
            *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x13c) = *(float *)((int)lVar16 + 300) * fVar3 * fVar3;
              iVar18 = (int)lVar22;
              lVar16 = lVar16 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar24 = uVar14 - 0x174;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar24;
            do {
              fVar3 = *pfVar23;
              fVar7 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0x13c) = *(float *)((int)lVar16 + 0x13c) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar18 = (int)lVar17;
              iVar13 = (int)lVar24;
              lVar17 = lVar17 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x13c)) +
                                *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                               *(float *)(iVar13 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar9);
          }
          dVar28 = (double)FastSubRots((float)dVar28,fVar6);
          victim = g_heroMobyPtr;
          if (dVar28 < 0.10471975803375244) {
            fVar6 = (moby->rotation).z;
            fVar5 = fVar6 + 1.5707963;
            fVar9 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar9 = fVar6;
            }
            fVar3 = 3.1415925 - fVar5;
            if (fVar5 - (3.1415925 - fVar5) < 0.0) {
              fVar3 = fVar5;
            }
            fVar7 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
              fVar7 = fVar9;
            }
            *(undefined4 *)(puVar12 + 0x13) = 0;
            fVar6 = -3.1415925 - fVar5;
            if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
              fVar6 = fVar3;
            }
            fVar5 = fVar7 * fVar7;
            fVar9 = fVar6 * fVar6;
            fVar8 = fVar5 * fVar5 * fVar7;
            fVar3 = fVar9 * fVar9 * fVar6;
            fVar4 = fVar5 * fVar8;
            fVar2 = fVar9 * fVar3;
            *(float *)((int)puVar12 + 0x94) =
                 fVar5 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7;
            *(float *)(puVar12 + 0x12) =
                 fVar9 * fVar2 * 2.601887e-06 +
                 fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6;
            *(f32 *)(puVar12 + 0x14) = (victim->pos).x;
            *(f32 *)((int)puVar12 + 0xa4) = (victim->pos).y;
            fVar6 = (victim->pos).z;
            *(float *)(puVar12 + 0x15) = fVar6;
            *(f32 *)((int)puVar12 + 0xac) = (victim->pos).w;
            *(float *)(puVar12 + 0x15) = fVar6 + 0.75;
            CollDamageMobyDirect
                      (1.0,victim,moby,1,0x2f5a90,(float *)(puVar12 + 0x14),
                       (float *)(puVar12 + 0x12));
          }
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\x03')) {
      MB_SetAnimation(lVar15,3,0,3);
    }
  }
  else if (uVar1 == '\x02') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x20) = fVar6;
    *(float *)((int)puVar12 + 0x104) = fVar5;
    *(float *)(puVar12 + 0x21) = fVar3 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1d) & 4;
    uVar21 = uVar20 << 2 | 0x735900;
    fVar6 = ABS(*(float *)(puVar12 + 0x20));
    if (*(float *)(puVar12 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)((int)uVar21 + 4);
    fVar7 = ABS(*(float *)((int)puVar12 + 0x104));
    if (*(float *)(puVar12 + 0x21) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    dVar31 = dVar28;
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar24 = uVar14 - 0xe4;
      lVar22 = uVar14 - 0xf4;
      lVar27 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x39) = fVar6;
      *(float *)(puVar12 + 0x38) = fVar6;
      *(float *)((int)puVar12 + 0x1c4) = fVar6;
      *(float *)((int)puVar12 + 0x1bc) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x38) = *(float *)(puVar12 + 0x38) * fVar3;
      *(float *)((int)puVar12 + 0x1c4) = *(float *)((int)puVar12 + 0x1c4) * fVar6;
      *(float *)(puVar12 + 0x39) = *(float *)(puVar12 + 0x39) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x1bc) = *(float *)((int)lVar16 + 0x1ac) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xf4;
      uVar21 = ZEXT48(&DAT_007358e0);
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        pfVar25 = (float *)uVar21;
        fVar6 = pfVar25[1];
        uVar21 = uVar21 + 8;
        *(float *)((int)lVar16 + 0x1bc) = *(float *)((int)lVar16 + 0x1bc) * *pfVar25;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x1bc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar9 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar31,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar21,
               uVar26 + 0x130);
    fVar6 = (moby->rotation).z;
    fVar5 = fVar6 + 1.5707963;
    fVar9 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar9 = fVar6;
    }
    fVar3 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar3 = fVar5;
    }
    fVar7 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    fVar5 = fVar7 * fVar7;
    fVar9 = fVar6 * fVar6;
    fVar8 = fVar5 * fVar5 * fVar7;
    *(undefined4 *)(puVar12 + 0xf) = 0;
    fVar3 = fVar9 * fVar9 * fVar6;
    fVar4 = fVar5 * fVar8;
    fVar2 = fVar9 * fVar3;
    *(float *)((int)puVar12 + 0x74) =
         (fVar5 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 2.0;
    *(float *)(puVar12 + 0xe) =
         (fVar9 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(pfVar23 + 0x2c),puVar12 + 0xe,puVar12 + 0x10
              );
    fVar6 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar9 = (moby->rotation).z;
    if (SQRT((fVar5 - g_heroPosition.x) * (fVar5 - g_heroPosition.x) +
             (fVar6 - g_heroPosition.y) * (fVar6 - g_heroPosition.y)) < 6.0) {
      fVar6 = g_heroPosition.y - fVar6;
      dVar29 = ABS((double)(g_heroPosition.x - fVar5));
      dVar30 = ABS((double)fVar6);
      *(float *)((int)puVar12 + 0xf4) = g_heroPosition.x - fVar5;
      *(float *)(puVar12 + 0x1f) = fVar6;
      *(float *)((int)puVar12 + 0xfc) = (float)(dVar29 - dVar30);
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)((int)puVar12 + 0xf4));
      if ((double)*(float *)((int)puVar12 + 0xfc) - dVar28 < 0.0) {
        dVar31 = dVar30;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar30 = ABS((double)*(float *)(puVar12 + 0x1f));
      if ((double)*(float *)((int)puVar12 + 0xfc) - dVar28 < 0.0) {
        dVar30 = dVar29;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (dVar28 < dVar31) {
        lVar16 = uVar14 - 0x2a0;
        lVar22 = uVar14 - 0x114;
        lVar24 = uVar14 - 0x104;
        lVar27 = 2;
        fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
        fVar7 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x35) = fVar3;
        *(float *)(puVar12 + 0x34) = fVar3;
        *(float *)((int)puVar12 + 0x1a4) = fVar3;
        *(float *)((int)puVar12 + 0x19c) = fVar3;
        fVar3 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x34) = *(float *)(puVar12 + 0x34) * fVar7;
        *(float *)((int)puVar12 + 0x1a4) = *(float *)((int)puVar12 + 0x1a4) * fVar3;
        *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar3 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x19c) = *(float *)((int)lVar16 + 0x18c) * fVar3 * fVar3;
          iVar18 = (int)lVar22;
          lVar16 = lVar16 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar14 - 0x114;
        pfVar25 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar22 = lVar24;
        do {
          fVar3 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar16 + 0x19c) = *(float *)((int)lVar16 + 0x19c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar13 = (int)lVar24;
          lVar17 = lVar17 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x19c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar5);
      }
      dVar28 = (double)FastSubRots((float)dVar28,fVar9);
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      if (dVar28 < 0.10471975803375244) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        moby->state = '\x03';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x58,0x2f5a90);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar10 = storeVectorElementHalfWordIndexed(auVar32,0x134,uVar26);
        *(undefined2 *)(pfVar23 + 0x4d) = uVar10;
        if (moby->animationId != '\x04') {
          MB_SetAnimation(lVar15,4,0,3);
        }
        goto LAB_002f7628;
      }
    }
    if ((16.0 < SQRT((fVar5 - g_heroPosition.x) * (fVar5 - g_heroPosition.x) +
                     (fVar6 - g_heroPosition.y) * (fVar6 - g_heroPosition.y))) &&
       (moby->state = '\x01', moby->animationId != '\x03')) {
      MB_SetAnimation(lVar15,3,0,3);
    }
  }
  else if (uVar1 == '\x01') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar7 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x23) = fVar6;
    *(float *)((int)puVar12 + 0x11c) = fVar5;
    *(float *)(puVar12 + 0x24) = fVar7 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x23));
    if (*(float *)(puVar12 + 0x24) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar12 + 0x11c));
    if (*(float *)(puVar12 + 0x24) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    dVar31 = dVar28;
    if (0.0 < fVar3) {
      lVar16 = uVar14 - 0x2a0;
      lVar22 = uVar14 - 0xb4;
      lVar24 = uVar14 - 0xa4;
      lVar27 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x41) = fVar3;
      *(float *)(puVar12 + 0x40) = fVar3;
      *(float *)((int)puVar12 + 0x204) = fVar3;
      *(float *)((int)puVar12 + 0x1fc) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x40) = *(float *)(puVar12 + 0x40) * fVar4;
      *(float *)((int)puVar12 + 0x204) = *(float *)((int)puVar12 + 0x204) * fVar3;
      *(float *)(puVar12 + 0x41) = *(float *)(puVar12 + 0x41) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0x1fc) = *(float *)((int)lVar16 + 0x1ec) * fVar3 * fVar3;
        iVar18 = (int)lVar22;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xb4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x1fc) = *(float *)((int)lVar16 + 0x1fc) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x1fc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar2);
    }
    *(float *)((int)puVar12 + 0x10c) = fVar6;
    *(float *)((int)puVar12 + 0x114) = fVar7 - fVar9;
    *(float *)(puVar12 + 0x22) = fVar5;
    dVar31 = (double)(float)(dVar31 - (double)(moby->rotation).z);
    uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar12 + 0x10c));
    if (*(float *)((int)puVar12 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    uVar21 = uVar20 << 2 | 0x735900;
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)((int)uVar21 + 4);
    fVar3 = ABS(*(float *)(puVar12 + 0x22));
    if (*(float *)((int)puVar12 + 0x114) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar22 = uVar14 - 0xd4;
      lVar24 = uVar14 - 0xc4;
      lVar27 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x3d) = fVar6;
      *(float *)(puVar12 + 0x3c) = fVar6;
      *(float *)((int)puVar12 + 0x1e4) = fVar6;
      *(float *)((int)puVar12 + 0x1dc) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x3c) = *(float *)(puVar12 + 0x3c) * fVar3;
      *(float *)((int)puVar12 + 0x1e4) = *(float *)((int)puVar12 + 0x1e4) * fVar6;
      *(float *)(puVar12 + 0x3d) = *(float *)(puVar12 + 0x3d) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x1dc) = *(float *)((int)lVar16 + 0x1cc) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xd4;
      uVar21 = ZEXT48(&DAT_007358e0);
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        pfVar23 = (float *)uVar21;
        fVar6 = pfVar23[1];
        uVar21 = uVar21 + 8;
        *(float *)((int)lVar16 + 0x1dc) = *(float *)((int)lVar16 + 0x1dc) * *pfVar23;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar13 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x1dc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar9 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar21,
               uVar26 + 0x130);
    fVar6 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar5 * fVar5 + fVar6 * fVar6) < 15.0) && (dVar31 < 0.20000000298023224)) &&
        (-0.20000000298023224 < dVar31)) &&
       ((ABS((moby->pos).z - g_heroPosition.z) < 2.0 &&
        (moby->state = '\x02', moby->animationId != '\x01')))) {
      MB_SetAnimation(lVar15,1,0,3);
    }
  }
  else if (uVar1 == '\0') {
    moby->scale = moby->pClass->gScale * 1.2;
    MB_InitDefaultParams(pfVar23 + 0x2c);
    pfVar23[0x2f] = 2.0;
    pfVar23[0x2e] = 2.0;
    pfVar23[0x2c] = 1.27378e-42;
    fVar6 = g_FrameTime * 4.0;
    *(undefined2 *)((int)pfVar23 + 0x136) = 0;
    pfVar23[0x35] = fVar6;
    moby->state = '\x01';
    if (moby->animationId != '\x03') {
      MB_SetAnimation(lVar15,3,0,3);
    }
  }
LAB_002f7628:
  MB_ColorDyingMoby(lVar15,uVar26 + 0x40);
  return;
}


// 0x02f7670 (0x14 bytes)
void M219_002f7670(void)

{
  DAT_007fef28 = 0x10000;
  return;
}



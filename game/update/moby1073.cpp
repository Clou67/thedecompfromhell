// game/update/moby1073.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1b4cdc-0x1b5258
#include "game/update/moby1073.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1068.h"
#include "game/update/moby1072.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x01b4cdc (0x30 bytes)
void M1073_001b4cdc(void)

{
  WaterTile_DrawAll(&DAT_00e62840,0x80);
  return;
}


// 0x01b4d0c (0x14 bytes)
void M1073_001b4d0c(void)

{
  DAT_00757e28 = 0x10000;
  return;
}


// 0x01b4d38 (0x520 bytes)
/* Moby 1073 */

void UpdateMoby_1073(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong unaff_r16;
  longlong lVar18;
  ulonglong unaff_r17;
  longlong lVar19;
  ulonglong unaff_r18;
  longlong lVar20;
  ulonglong unaff_r19;
  longlong lVar21;
  ulonglong unaff_r20;
  ulonglong uVar22;
  ulonglong unaff_r21;
  ulonglong uVar23;
  ulonglong unaff_r22;
  longlong lVar24;
  ulonglong unaff_r23;
  ulonglong uVar25;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar26;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar28;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong in_f31;
  undefined8 uVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar9 - 0xdc0);
  *puVar4 = uVar9;
  puVar4[0x1ba] = in_LR;
  puVar4[0x1b7] = in_f31;
  puVar4[0x1b2] = unaff_r27;
  bVar1 = moby->state;
  puVar4[0x1b6] = unaff_r31;
  pvVar2 = moby->pVar;
  uVar28 = ZEXT48(pvVar2);
  puVar4[0x1b5] = unaff_r30;
  puVar4[0x1b4] = unaff_r29;
  puVar4[0x1b3] = unaff_r28;
  puVar4[0x1b1] = unaff_r26;
  puVar4[0x1b0] = unaff_r25;
  puVar4[0x1af] = unaff_r24;
  puVar4[0x1ae] = unaff_r23;
  puVar4[0x1ad] = unaff_r22;
  puVar4[0x1ac] = unaff_r21;
  puVar4[0x1ab] = unaff_r20;
  puVar4[0x1aa] = unaff_r19;
  puVar4[0x1a9] = unaff_r18;
  puVar4[0x1a8] = unaff_r17;
  puVar4[0x1a7] = unaff_r16;
  if (bVar1 == 0) {
    if ((Level == Orxon) && (g_heroType == '\x01')) {
      DeleteMoby(moby);
    }
    else {
      DAT_00eef984 = 0x16;
      iVar11 = 0;
      lVar29 = 10;
      DAT_00eef980 = 0x2d;
      do {
        iVar7 = iVar11 / 10;
        iVar10 = (int)uVar28;
        *(int *)(iVar10 + 0x12c00) = iVar7;
        *(int *)(iVar10 + 0x12cf0) = iVar7 + 0x17;
        *(int *)(iVar10 + 0x12c78) = iVar7 + 0xb;
        iVar11 = iVar11 + 0x2d;
        uVar28 = uVar28 + 4;
        *(int *)(iVar10 + 0x12d68) = iVar7 + 0x22;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar8 = DAT_00757e54 * g_FrameTime + *(float *)((int)pvVar2 + 0x12de0);
    *(float *)((int)pvVar2 + 0x12de0) = fVar8;
    if (1.0 < fVar8) {
      *(float *)((int)pvVar2 + 0x12de0) = fVar8 - 1.0;
    }
    lVar29 = 0;
    do {
      iVar11 = 0;
      lVar20 = uVar9 - 0xdf0;
      lVar26 = 0;
      lVar19 = uVar9 - 0xd50;
      lVar18 = uVar9 - 0xcb0;
      lVar24 = 0;
      do {
        lVar27 = lVar29 * 0x78 + uVar28 + lVar26;
        iVar10 = FastDecTimerS32(lVar27 + 0x12c00U & 0xffffffff);
        if (iVar10 == 0) {
          lVar31 = 0x12;
          uVar23 = lVar29 * 0x2580 + uVar28 + lVar24 + 0x140 & 0xffffffff;
          lVar27 = uVar23 + 0x9604;
          lVar21 = uVar23 + 0x9608;
          do {
            pfVar14 = (float *)uVar23;
            *pfVar14 = *pfVar14 + pfVar14[0x2580];
            pfVar16 = (float *)lVar27;
            lVar27 = lVar27 + 0x140;
            pfVar14[1] = pfVar14[1] + *pfVar16;
            pfVar16 = (float *)lVar21;
            lVar21 = lVar21 + 0x140;
            pfVar14[2] = pfVar14[2] + *pfVar16;
            uVar23 = uVar23 + 0x140;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        else {
          uVar32 = 0;
          auVar39 = ZEXT416(0);
          auVar37 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          uVar25 = lVar29 * 0x2580 + uVar28 + lVar24;
          auVar39 = loadVectorLeftIndexed(8,0x1b4d20);
          iVar10 = 0;
          auVar38 = loadVectorLeftIndexed(0xc,0x1b4d20);
          auVar36 = loadVectorLeftIndexed(0x10,0x1b4d20);
          uVar23 = uVar25 & 0xffffffff;
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          uVar22 = (uVar9 - 0xdc0) + lVar24 + 0x70 & 0xffffffff;
          auVar39 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          lVar21 = uVar23 + 4;
          auVar39 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          do {
            auVar36 = ZEXT416(0xffffffff);
            auVar33 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar36 = ZEXT416(0xffffffff);
            auVar35 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            puVar5 = (undefined4 *)uVar23;
            puVar5[2] = 0;
            auVar34 = vectorConvertFromSignedFixedPointWord(auVar37,0);
            *puVar5 = 0;
            auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = loadVectorLeftIndexed(0x7e50,0x750000);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar40,auVar36);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar33);
            auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar36,auVar33);
            auVar36 = (auVar36 ^ auVar39) >> 0x60 & (GPiece<16>)0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0,
                               lVar21);
            *(undefined4 *)((uint)lVar21 & 0xfffffffc) = uVar3;
            puVar5[3] = 0x3f800000;
            MB_randSphere(uVar32,(double)(DAT_00757e4c * g_FrameTime),uVar22);
            iVar10 = iVar10 + 1;
            lVar21 = lVar21 + 0x140;
            uVar23 = uVar23 + 0x140;
            uVar22 = uVar22 + 0xa0;
            auVar36.piece<0,4>() = auVar37.piece<0,4>() + 1;
            auVar36.piece<8,8>() = auVar37.piece<8,8>();
            auVar36.piece<4,4>() = auVar37.piece<4,4>() + 1;
            auVar33.piece<0,8>() = auVar36.piece<0,8>();
            auVar33.piece<12,4>() = auVar37.piece<12,4>();
            auVar33.piece<8,4>() = auVar37.piece<8,4>() + 1;
            auVar37.piece<0,12>() = auVar33.piece<0,12>();
            auVar37.piece<12,4>() = auVar33.piece<12,4>() + 1;
          } while (iVar10 < 0x14);
          uVar23 = uVar25 + 0x140 & 0xffffffff;
          lVar12 = uVar23 + 0x960c;
          lVar13 = uVar23 + 0x9604;
          lVar15 = uVar23 + 0x9608;
          lVar30 = 0x12;
          lVar21 = lVar19;
          lVar31 = lVar18;
          lVar6 = lVar20;
          do {
            pfVar17 = (float *)((int)uVar23 + 0x9600);
            uVar23 = uVar23 + 0x140;
            *pfVar17 = *(float *)(lVar6 + 0xa0) + *(float *)(lVar21 + 0xa0);
            iVar10 = (int)lVar6;
            pfVar14 = (float *)lVar13;
            *pfVar14 = *(float *)(iVar10 + 0xa4) + *(float *)((int)lVar21 + 0xa4);
            pfVar16 = (float *)lVar15;
            *pfVar16 = *(float *)(iVar10 + 0xa8) + *(float *)((int)lVar21 + 0xa8);
            *(undefined4 *)lVar12 = *(undefined4 *)(iVar10 + 0xac);
            lVar12 = lVar12 + 0x140;
            *pfVar17 = *pfVar17 + *(float *)(lVar31 + 0xa0);
            *pfVar14 = *pfVar14 + *(float *)((int)lVar31 + 0xa4);
            *pfVar16 = *pfVar16 + *(float *)((int)lVar31 + 0xa8);
            *pfVar17 = *pfVar17 * 0.333;
            *pfVar14 = *pfVar14 * 0.333;
            lVar13 = lVar13 + 0x140;
            *pfVar16 = *pfVar16 * 0.333;
            lVar15 = lVar15 + 0x140;
            lVar30 = lVar30 + -1;
            lVar21 = lVar21 + 0xa0;
            lVar31 = lVar31 + 0xa0;
            lVar6 = lVar6 + 0xa0;
          } while (lVar30 != 0);
          *(undefined4 *)((int)lVar27 + 0x12c00) = DAT_00eef980;
        }
        iVar11 = iVar11 + 1;
        lVar24 = lVar24 + 0x10;
        lVar26 = lVar26 + 4;
        lVar20 = lVar20 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while (iVar11 < 10);
      lVar29 = lVar29 + 1;
    } while ((int)lVar29 < 4);
  }
  return;
}



// game/update/moby1264.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x230bb8-0x232a80
#include "game/update/moby1264.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1266.h"
#include "idol/fastfunc.h"

// 0x0230bb8 (0x53c bytes)
// strings: 00a1000c: 'None'

void M1264_00230bb8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  vec4 *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  vec4 *pvVar14;
  ulonglong uVar15;
  byte in_cr6;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar23;
  float fVar24;
  float local_80;
  
  lVar4 = ZEXT48(&stack0x00000000) - 0x60;
  puVar5 = (undefined4 *)lVar4;
  puVar5[3] = in_vr31_32_3;
  puVar5[2] = in_vr31_32_2;
  puVar5[1] = in_vr31_32_1;
  *puVar5 = in_vr31_32_0;
  pvVar1 = param_1->pVar;
  uVar15 = ZEXT48(pvVar1);
  auVar23 = ZEXT416(0);
  auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  lVar11 = -1;
  lVar7 = 0;
  dVar17 = 0.0;
  dVar16 = dVar17;
  if (0 < *(int *)((int)pvVar1 + 100)) {
    auVar23 = ZEXT416(0);
    auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    uVar9 = uVar15;
    do {
      auVar23 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      uVar6 = MB_damage(*(undefined4 *)((int)uVar9 + 0x70),0xffffffffffffffff,0);
      if ((int)uVar6 != 0) {
        auVar23 = loadVectorLeftIndexed(0x2c,uVar6);
        auVar19 = loadVectorRightIndexed(0x3c,uVar6);
        *(undefined1 *)(*(int *)((int)uVar9 + 0x70) + 0xa4) = 0xff;
        auVar18 = vectorAddFloatingPoint(auVar18,auVar23 | auVar19);
        lVar11 = lVar7;
      }
      lVar7 = lVar7 + 1;
      uVar9 = uVar9 + 4;
    } while ((int)lVar7 < *(int *)((int)pvVar1 + 100));
    lVar4 = 0x90;
    auVar23 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    local_80 = auVar18.piece<0,4>();
    dVar17 = (double)local_80;
  }
  fVar24 = Delt((float)dVar16,(float)dVar17,(float *)((int)pvVar1 + 0xe0));
  auVar18 = ZEXT416(0);
  vectorCompareEqualToFloatingPoint
            (auVar23,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    auVar23 = ZEXT416(0xffffffff);
    auVar18 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar22 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar19 = loadVectorLeftIndexed(0xe0,uVar15);
    auVar20 = loadVectorRightIndexed(0xf0,uVar15);
    auVar23 = loadVectorLeftIndexed(4,0x230b98);
    auVar21 = loadVectorLeftIndexed(100,uVar15);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar19 | auVar20,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar18);
    auVar23 = loadVectorLeftIndexed(8,0x230b98);
    auVar20 = loadVectorRightIndexed(0x74,uVar15);
    auVar18 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = ZEXT416(1);
    auVar20 = vectorSubtractUnsignedWordModulo
                        (auVar21 | auVar20,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                         auVar22);
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
               auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      iVar12 = *(int *)((int)pvVar1 + 100) + -1;
      HelpData[0x2b0] = -1;
      HelpData[0x2b1] = -1;
      *(int *)((int)pvVar1 + 100) = iVar12;
      M1266_00232fa0((double)fVar24,*(undefined4 *)((int)pvVar1 + iVar12 * 4 + 0x70));
      uVar10 = uVar15 + lVar11 * 4;
      uVar9 = uVar10 & 0xffffffff;
      iVar3 = (int)uVar10;
      iVar12 = *(int *)(iVar3 + 0x70);
      iVar13 = *(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70);
      *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar12 + 0x10);
      *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar12 + 0x14);
      *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(iVar12 + 0x18);
      *(undefined4 *)(iVar13 + 0x1c) = *(undefined4 *)(iVar12 + 0x1c);
      iVar12 = *(int *)(iVar3 + 0x70);
      iVar13 = *(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70);
      *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(iVar12 + 0x40);
      *(undefined4 *)(iVar13 + 0x44) = *(undefined4 *)(iVar12 + 0x44);
      *(undefined4 *)(iVar13 + 0x48) = *(undefined4 *)(iVar12 + 0x48);
      *(undefined4 *)(iVar13 + 0x4c) = *(undefined4 *)(iVar12 + 0x4c);
      PlayMobySound
                (1,0,*(MobyInstance **)((int)pvVar1 + *(int *)((int)pvVar1 + 100) * 4 + 0x70));
      iVar12 = (int)lVar11;
      if (iVar12 < *(int *)((int)pvVar1 + 100)) {
        auVar23 = ZEXT416(0xfffffff0);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        uVar10 = uVar15 + lVar11 * 2 & 0xffffffff;
        auVar18 = loadVectorLeftIndexed(0x90,uVar10);
        auVar19 = loadVectorLeftIndexed(0x92,uVar10);
        auVar20 = loadVectorRightIndexed(0xa0,uVar10);
        auVar21 = loadVectorRightIndexed(0xa2,uVar10);
        auVar18 = vectorShiftRightAlgebraicWord(auVar18 | auVar20,auVar23);
        auVar23 = vectorShiftRightAlgebraicWord(auVar19 | auVar21,auVar23);
        auVar23 = vectorSubtractUnsignedWordModulo(auVar18,auVar23);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        if (iVar12 < *(int *)((int)pvVar1 + 100)) {
          uVar10 = uVar15 + lVar11 * 4 & 0xffffffff;
          lVar7 = lVar11;
          do {
            lVar7 = lVar7 + 1;
            iVar13 = *(int *)((int)pvVar1 + 100);
            *(undefined4 *)((int)uVar10 + 0xc0) = *(undefined4 *)((int)uVar10 + 0xc4);
            uVar10 = uVar10 + 4;
          } while ((int)lVar7 < iVar13);
        }
        auVar18 = loadVectorLeftIndexed(0xc0,uVar9);
        auVar19 = loadVectorRightIndexed(0xd0,uVar9);
        auVar19 = vectorAddFloatingPoint(auVar18 | auVar19,auVar23);
        auVar23 = ZEXT416(0);
        auVar18 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar18,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
        uVar2 = storeVectorElementWordIndexed(auVar18,0xc0,uVar9);
        *(undefined4 *)(iVar3 + 0xc0U & 0xfffffffc) = uVar2;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar23 = loadVectorLeftIndexed(lVar4,(ulonglong)*(uint *)((int)pvVar1 + 0xf0));
          auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
          auVar23 = vectorAddFloatingPoint(auVar19,auVar23);
          auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0xc0,
                             uVar9);
          *(undefined4 *)(iVar3 + 0xc0U & 0xfffffffc) = uVar2;
        }
      }
      iVar13 = *(int *)((int)pvVar1 + 100);
      if (iVar12 < iVar13) {
        uVar15 = uVar15 + lVar11 * 2 & 0xffffffff;
        do {
          lVar11 = lVar11 + 1;
          iVar13 = *(int *)((int)pvVar1 + 100);
          *(undefined2 *)((int)uVar15 + 0x90) = *(undefined2 *)((int)uVar15 + 0x92);
          uVar15 = uVar15 + 2;
        } while ((int)lVar11 < iVar13);
      }
      if (iVar13 == 0) {
        PlayMobySound(2,0,param_1);
        pvVar14 = &param_1->pos;
        MB_SpawnExplosionSparks(0x4008000000000000,0x402a000000000000,param_1,pvVar14);
        dVar17 = 90.5;
        pvVar8 = &param_1->rotation;
        dVar16 = 12.0;
        MB_SpawnDebrisMoby
                  ((double)(DAT_0071f418 * 12.0),param_1,0x602,pvVar14,pvVar8,
                   (int)(animationSpeed * 90.5),0);
        MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar16),param_1,0x603,pvVar14,pvVar8,
                   (int)((double)animationSpeed * dVar17),0);
        MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar16),param_1,0x784,pvVar14,pvVar8,
                   (int)((double)animationSpeed * dVar17),0);
        DeleteMoby(param_1);
      }
    }
  }
  return;
}


// 0x0231108 (0xc30 bytes)
// inlined: FastAtan2 @0x2315bc, FastAtan2 @0x231778, FastAtan2 @0x23193c, FastAtan2 @0x231af8
void M1264_00231108(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  ulonglong uVar20;
  int iVar22;
  ulonglong uVar21;
  float *pfVar23;
  float *pfVar24;
  ulonglong unaff_r22;
  int iVar25;
  ulonglong unaff_r23;
  int iVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  longlong lVar28;
  longlong lVar29;
  ulonglong unaff_r28;
  longlong lVar30;
  ulonglong unaff_r29;
  int iVar31;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar41;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar20;
  puVar13[0x38] = in_LR;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  fVar19 = DAT_0078d788;
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar4 = *(float *)(param_1 + 200);
  dVar40 = 0.0;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  puVar13[0x30] = unaff_r31;
  fVar7 = *(float *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x78);
  puVar13[0x2f] = unaff_r30;
  fVar14 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  puVar9 = *(uint **)(iVar8 + 0xf0);
  iVar26 = *(int *)(iVar8 + 100);
  fVar19 = fVar19 / fVar14;
  dVar41 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar41 = (double)(fVar4 * fVar19);
  }
  dVar35 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar35 = (double)(fVar2 * fVar19);
  }
  dVar33 = dVar40;
  if (0.0 - fVar14 < 0.0) {
    dVar33 = (double)(fVar3 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar41 = (double)(fVar4 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar35 = (double)(fVar2 * fVar19);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar19);
  }
  dVar41 = dVar41 + (double)fVar7;
  dVar35 = dVar35 + (double)fVar6;
  puVar13[0x2e] = unaff_r29;
  puVar13[0x2d] = unaff_r28;
  puVar13[0x2c] = unaff_r27;
  puVar13[0x2b] = unaff_r26;
  puVar13[0x2a] = unaff_r25;
  puVar13[0x29] = unaff_r24;
  puVar13[0x28] = unaff_r23;
  puVar13[0x27] = unaff_r22;
  dVar33 = dVar33 + (double)fVar5;
  if (0 < iVar26) {
    iVar31 = 0;
    iVar26 = iVar8;
    iVar25 = iVar8;
    do {
      fVar4 = (float)dVar33;
      fVar3 = (float)dVar35;
      fVar2 = (float)dVar41;
      uVar10 = *puVar9;
      lVar30 = (longlong)*(short *)(iVar26 + 0x90);
      lVar28 = (lVar30 + 1) - (longlong)((int)(lVar30 + 1) / (int)uVar10) * (longlong)(int)uVar10;
      pfVar23 = (float *)(puVar9 + (int)lVar28 * 4 + 4);
      pfVar24 = (float *)((int)puVar9 + (int)(lVar30 << 4) + 0x10);
      dVar35 = (double)DAT_0078d784;
      lVar27 = (lVar30 + 2) - (longlong)((int)(lVar30 + 2) / (int)uVar10) * (longlong)(int)uVar10;
      fVar5 = (pfVar23[2] - fVar2) * (pfVar23[2] - fVar2) +
              (*pfVar23 - fVar4) * (*pfVar23 - fVar4) + (pfVar23[1] - fVar3) * (pfVar23[1] - fVar3);
      dVar41 = (double)SQRT((pfVar24[2] - fVar2) * (pfVar24[2] - fVar2) +
                            (*pfVar24 - fVar4) * (*pfVar24 - fVar4) +
                            (pfVar24[1] - fVar3) * (pfVar24[1] - fVar3));
      while (dVar33 = (double)SQRT(fVar5), dVar35 < dVar33) {
        lVar30 = (longlong)((int)(lVar28 + 1) / (int)uVar10) * (longlong)(int)uVar10;
        lVar29 = (lVar28 + 1) - lVar30;
        pfVar23 = (float *)(puVar9 + (int)lVar29 * 4 + 4);
        lVar27 = (lVar28 - (lVar30 + (longlong)((((int)lVar28 - (int)lVar30) + 2) / (int)uVar10) *
                                     (longlong)(int)uVar10)) + 2;
        lVar30 = lVar28;
        lVar28 = lVar29;
        dVar41 = dVar33;
        fVar5 = (pfVar23[2] - fVar2) * (pfVar23[2] - fVar2) +
                (*pfVar23 - fVar4) * (*pfVar23 - fVar4) +
                (pfVar23[1] - fVar3) * (pfVar23[1] - fVar3);
      }
      if (*(int *)((int)puVar9 + (int)(lVar30 << 4) + 0x1c) == 0x42280000) {
        pvVar11 = (*(MobyInstance **)(iVar25 + 0x70))->pVar;
        if (*(int *)((int)pvVar11 + 0x28) == 0) {
          if (g_gameMode == GAME_MODE_NORMAL) {
            PlayMobySound(2,0,*(MobyInstance **)(iVar25 + 0x70));
            dVar35 = (double)DAT_0078d784;
          }
          auVar44 = ZEXT416(0xffffffff);
          auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
          auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar44 = loadVectorLeftIndexed(0xffffffffffffd78c,0x790000);
          auVar43 = vectorConvertFromSignedFixedPointWord(auVar44,0);
          auVar44 = loadVectorLeftIndexed(4,0x2310f4);
          auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar44 = vectorAddFloatingPoint
                              (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60
                              );
          auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar45);
          auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
          auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x28,
                              ZEXT48(pvVar11));
          *(undefined4 *)((int)pvVar11 + 0x28U & 0xfffffffc) = uVar12;
        }
      }
      *(short *)(iVar26 + 0x90) = (short)lVar30;
      dVar42 = dVar40;
      if (dVar35 - dVar41 < 0.0) {
        dVar42 = (double)((float)(dVar41 - dVar35) / (float)(dVar41 - dVar33));
      }
      *(float *)(iVar25 + 0xa0) = (float)dVar42;
      if (*(int *)(iVar25 + 0xc0) != 0) {
        dVar41 = (double)(float)(dVar42 - (double)*(float *)(iVar25 + 0xc0));
        lVar29 = FastDoubleToInt(dVar41);
        iVar22 = FastDoubleToInt(dVar41);
        puVar13[0x24] = (longlong)iVar22;
        uVar10 = *puVar9;
        uVar21 = (ulonglong)uVar10;
        dVar42 = (double)(float)(dVar41 - (double)(longlong)puVar13[0x24]);
        if (dVar42 < dVar40) {
          lVar29 = lVar29 + -1;
          dVar42 = (double)(float)(dVar42 + 1.0);
        }
        lVar30 = lVar29 + lVar30 + uVar21;
        lVar28 = lVar28 + lVar29 + uVar21;
        lVar27 = lVar27 + lVar29 + uVar21;
        lVar30 = lVar30 - (longlong)((int)lVar30 / (int)uVar10) * (longlong)(int)uVar10;
        lVar27 = lVar27 - (longlong)((int)lVar27 / (int)uVar10) * (longlong)(int)uVar10;
        lVar28 = lVar28 - (longlong)((int)lVar28 / (int)uVar10) * (longlong)(int)uVar10;
      }
      iVar22 = *(int *)(iVar25 + 0x70);
      iVar17 = (int)(lVar30 << 4);
      pfVar23 = (float *)((int)puVar9 + iVar17 + 0x10);
      iVar18 = (int)(lVar28 << 4);
      pfVar24 = (float *)((int)puVar9 + iVar18 + 0x10);
      dVar41 = (double)*pfVar23;
      dVar35 = (double)*pfVar24;
      fVar2 = pfVar24[1];
      fVar3 = pfVar23[1];
      dVar33 = (double)(float)(dVar35 - dVar41);
      fVar4 = pfVar24[2];
      fVar5 = pfVar23[2];
      dVar34 = (double)(float)((double)fVar2 - (double)fVar3);
      *(float *)(iVar22 + 0x1c) = pfVar24[3];
      dVar37 = ABS((double)(float)(dVar41 - dVar35));
      *(float *)(iVar22 + 0x10) = (float)(dVar42 * dVar33 + dVar41);
      *(float *)(iVar22 + 0x14) = (float)(dVar42 * dVar34 + (double)fVar3);
      *(float *)(iVar22 + 0x18) =
           (float)(dVar42 * (double)(float)((double)fVar4 - (double)fVar5) + (double)fVar5);
      fVar3 = *(float *)((int)puVar9 + iVar17 + 0x14);
      fVar4 = *(float *)((int)puVar9 + iVar18 + 0x14);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 - dVar35);
      fVar3 = fVar3 - fVar4;
      dVar36 = ABS((double)fVar3);
      *(float *)(puVar13 + 0x13) = fVar3;
      *(float *)((int)puVar13 + 0x9c) = (float)(dVar37 - dVar36);
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1d) & 4;
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar41 = ABS((double)*(float *)((int)puVar13 + 0x94));
      if ((double)*(float *)((int)puVar13 + 0x9c) - dVar40 < 0.0) {
        dVar41 = dVar36;
      }
      dVar36 = ABS((double)*(float *)(puVar13 + 0x13));
      if ((double)*(float *)((int)puVar13 + 0x9c) - dVar40 < 0.0) {
        dVar36 = dVar37;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar37 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar29 = uVar20 - 0xa0;
        lVar28 = uVar20 - 0xb0;
        lVar32 = 2;
        fVar6 = (float)(dVar36 - dVar41) / (float)(dVar36 + dVar41);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x10c) = fVar6;
        *(float *)((int)puVar13 + 0x104) = fVar6;
        *(float *)(puVar13 + 0x21) = fVar6;
        *(float *)(puVar13 + 0x20) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar7;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar6;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar30 + 0x100) = *(float *)((int)lVar30 + 0xf0) * fVar6 * fVar6;
          iVar22 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar29 = uVar20 - 0xb0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar29;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar30 + 0x100) = *(float *)((int)lVar30 + 0x100) * fVar6;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar22 = (int)lVar30;
          iVar15 = (int)lVar29;
          lVar30 = lVar30 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar22 + 0x100)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar37 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar5);
      }
      iVar22 = (int)(lVar27 << 4);
      pfVar23 = (float *)((int)puVar9 + iVar22 + 0x10);
      dVar36 = (double)*pfVar23;
      fVar3 = (float)(dVar35 - dVar36);
      fVar4 = fVar4 - *(float *)((int)puVar9 + iVar22 + 0x14);
      dVar39 = ABS((double)fVar3);
      dVar38 = ABS((double)fVar4);
      *(float *)(puVar13 + 0x11) = fVar3;
      *(float *)((int)puVar13 + 0x8c) = fVar4;
      *(float *)(puVar13 + 0x12) = (float)(dVar39 - dVar38);
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)(puVar13 + 0x11));
      if ((double)*(float *)(puVar13 + 0x12) - dVar40 < 0.0) {
        dVar41 = dVar38;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar38 = ABS((double)*(float *)((int)puVar13 + 0x8c));
      if ((double)*(float *)(puVar13 + 0x12) - dVar40 < 0.0) {
        dVar38 = dVar39;
      }
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar39 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar28 = uVar20 - 0xd0;
        lVar27 = uVar20 - 0xc0;
        lVar29 = 2;
        fVar5 = (float)(dVar38 - dVar41) / (float)(dVar38 + dVar41);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xec) = fVar5;
        *(float *)((int)puVar13 + 0xe4) = fVar5;
        *(float *)(puVar13 + 0x1d) = fVar5;
        *(float *)(puVar13 + 0x1c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar5;
        *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar30 + 0xe0) = *(float *)((int)lVar30 + 0xd0) * fVar5 * fVar5;
          iVar15 = (int)lVar28;
          lVar30 = lVar30 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xd0;
        pfVar24 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar5 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar30 + 0xe0) = *(float *)((int)lVar30 + 0xe0) * fVar5;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar15 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar16 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar15 + 0xe0)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar4);
      }
      fVar3 = *(float *)((int)puVar9 + iVar18 + 0x18);
      fVar5 = *(float *)((int)puVar9 + iVar17 + 0x18) - fVar3;
      fVar4 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar34 * dVar34)));
      *(float *)(puVar13 + 0x10) = fVar5;
      dVar34 = ABS((double)fVar5);
      dVar33 = ABS((double)fVar4);
      *(float *)((int)puVar13 + 0x7c) = fVar4;
      *(float *)((int)puVar13 + 0x84) = (float)(dVar33 - dVar34);
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)((int)puVar13 + 0x7c));
      if ((double)*(float *)((int)puVar13 + 0x84) - dVar40 < 0.0) {
        dVar41 = dVar34;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar34 = ABS((double)*(float *)(puVar13 + 0x10));
      if ((double)*(float *)((int)puVar13 + 0x84) - dVar40 < 0.0) {
        dVar34 = dVar33;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar27 = uVar20 - 0xe0;
        lVar28 = uVar20 - 0xf0;
        lVar29 = 2;
        fVar6 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0xcc) = fVar6;
        *(float *)((int)puVar13 + 0xc4) = fVar6;
        *(float *)(puVar13 + 0x19) = fVar6;
        *(float *)(puVar13 + 0x18) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar7;
        *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar6;
        *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar30 + 0xc0) = *(float *)((int)lVar30 + 0xb0) * fVar6 * fVar6;
          iVar17 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xf0;
        pfVar24 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar30 + 0xc0) = *(float *)((int)lVar30 + 0xc0) * fVar6;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar17 = (int)lVar30;
          iVar18 = (int)lVar27;
          lVar30 = lVar30 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar17 + 0xc0)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar33 = (double)((float)(dVar41 + 0.7853981852531433) * fVar4 + fVar5);
      }
      fVar4 = (float)(dVar36 - dVar35);
      fVar2 = (float)((double)pfVar23[1] - (double)fVar2);
      fVar3 = fVar3 - *(float *)((int)puVar9 + iVar22 + 0x18);
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
      *(float *)((int)puVar13 + 0x74) = fVar3;
      dVar34 = ABS((double)fVar3);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar13 + 0xe) = fVar2;
      *(float *)(puVar13 + 0xf) = (float)(dVar35 - dVar34);
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
      dVar41 = ABS((double)*(float *)(puVar13 + 0xe));
      if ((double)*(float *)(puVar13 + 0xf) - dVar40 < 0.0) {
        dVar41 = dVar34;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar34 = ABS((double)*(float *)((int)puVar13 + 0x74));
      if ((double)*(float *)(puVar13 + 0xf) - dVar40 < 0.0) {
        dVar34 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar35 = dVar40;
      if (dVar40 < dVar41) {
        lVar30 = uVar20 - 0x1a0;
        lVar28 = uVar20 - 0x110;
        lVar27 = uVar20 - 0x100;
        lVar29 = 2;
        fVar4 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0xac) = fVar4;
        *(float *)((int)puVar13 + 0xa4) = fVar4;
        *(float *)(puVar13 + 0x15) = fVar4;
        *(float *)(puVar13 + 0x14) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar4;
        *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar30 + 0xa0) = *(float *)((int)lVar30 + 0x90) * fVar4 * fVar4;
          iVar22 = (int)lVar28;
          lVar30 = lVar30 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar30 = lVar1;
        lVar28 = lVar27;
        do {
          fVar4 = *pfVar23;
          fVar5 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar30 + 0xa0) = *(float *)((int)lVar30 + 0xa0) * fVar4;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar5;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar28 = 2;
        lVar30 = lVar1;
        dVar41 = dVar40;
        do {
          iVar22 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar17 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar22 + 0xa0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar35 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar33 = -dVar33;
      dVar41 = (double)FastDiffRots(-dVar35,dVar33);
      dVar41 = (double)FastWrapRot((float)(dVar41 * dVar42),(float)dVar33);
      *(float *)(*(int *)(iVar25 + 0x70) + 0x44) = (float)dVar41;
      dVar41 = (double)FastDiffRots(dVar39,dVar37);
      dVar41 = (double)FastWrapRot((float)(dVar41 * dVar42),(float)dVar37);
      *(float *)(*(int *)(iVar25 + 0x70) + 0x48) = (float)dVar41;
      UpdateMobyTransform(*(MobyInstance **)(iVar25 + 0x70));
      iVar22 = *(int *)(iVar25 + 0x70);
      fVar3 = *(float *)(iVar22 + 0xc4);
      fVar4 = *(float *)(iVar22 + 0xc0);
      fVar5 = *(float *)(iVar22 + 200);
      iVar31 = iVar31 + 1;
      iVar26 = iVar26 + 2;
      iVar25 = iVar25 + 4;
      dVar42 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)DAT_0078d788 / dVar42);
      dVar41 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar41 = (double)(fVar5 * fVar2);
      }
      dVar35 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar35 = (double)(fVar3 * fVar2);
      }
      dVar33 = dVar40;
      if (dVar40 - dVar42 < 0.0) {
        dVar33 = (double)(fVar4 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar41 = (double)(fVar5 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar35 = (double)(fVar3 * fVar2);
      }
      if (dVar42 - dVar40 < 0.0) {
        dVar33 = (double)(fVar4 * fVar2);
      }
      dVar41 = dVar41 + (double)*(float *)(iVar22 + 0x18);
      dVar35 = dVar35 + (double)*(float *)(iVar22 + 0x14);
      dVar33 = dVar33 + (double)*(float *)(iVar22 + 0x10);
    } while (iVar31 < *(int *)(iVar8 + 100));
  }
  return;
}


// 0x0231d40 (0x810 bytes)
// inlined: FastAtan2 @0x231ebc, FastAtan2 @0x23205c, FastAtan2 @0x232200, FastAtan2 @0x232394
void M1264_00231d40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar19;
  longlong lVar18;
  int iVar21;
  longlong lVar20;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x180;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar15;
  puVar14[0x32] = in_LR;
  puVar14[0x26] = in_f22;
  puVar14[0x27] = in_f23;
  puVar14[0x28] = in_f24;
  puVar14[0x29] = in_f25;
  puVar14[0x2a] = in_f26;
  puVar14[0x2b] = in_f27;
  puVar14[0x2c] = in_f28;
  puVar14[0x2d] = in_f29;
  puVar14[0x2e] = in_f30;
  puVar14[0x2f] = in_f31;
  puVar14[0x25] = unaff_r31;
  puVar14[0x24] = unaff_r30;
  iVar11 = *(int *)(param_1 + 0x78);
  piVar12 = *(int **)(iVar11 + 0xf0);
  iVar13 = *(int *)(iVar11 + 0x68);
  iVar19 = *piVar12;
  iVar21 = (iVar13 + 1) - ((iVar13 + 1) / iVar19) * iVar19;
  dVar37 = (double)(float)piVar12[iVar13 * 4 + 4];
  dVar36 = (double)(float)piVar12[iVar13 * 4 + 5];
  iVar19 = (iVar13 + 2) - ((iVar13 + 2) / iVar19) * iVar19;
  dVar34 = (double)(float)piVar12[iVar21 * 4 + 4];
  dVar33 = (double)(float)piVar12[iVar21 * 4 + 5];
  fVar1 = (float)(dVar37 - dVar34);
  fVar2 = (float)(dVar36 - dVar33);
  dVar35 = (double)(float)piVar12[iVar13 * 4 + 6];
  fVar3 = (float)piVar12[iVar21 * 4 + 6];
  dVar32 = (double)(float)piVar12[iVar21 * 4 + 7];
  fVar4 = (float)piVar12[iVar19 * 4 + 4];
  fVar5 = (float)piVar12[iVar19 * 4 + 5];
  fVar6 = (float)piVar12[iVar19 * 4 + 6];
  *(float *)((int)puVar14 + 0x94) = fVar1;
  *(float *)(puVar14 + 0x13) = fVar2;
  *(float *)((int)puVar14 + 0x9c) = ABS(fVar1) - ABS(fVar2);
  dVar25 = 0.0;
  uVar23 = (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1d) & 4;
  fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar10 = ABS(*(float *)((int)puVar14 + 0x94));
  if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
    fVar10 = ABS(fVar2);
  }
  fVar8 = ABS(*(float *)(puVar14 + 0x13));
  if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar1);
  }
  fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar26 = dVar25;
  if (0.0 < fVar10) {
    lVar16 = uVar15 - 0x170;
    lVar18 = uVar15 - 0x80;
    lVar20 = uVar15 - 0x70;
    lVar24 = 2;
    fVar10 = (fVar8 - fVar10) / (fVar8 + fVar10);
    fVar8 = fVar10 * fVar10;
    *(float *)(puVar14 + 0x20) = fVar10;
    *(float *)((int)puVar14 + 0x104) = fVar10;
    *(float *)(puVar14 + 0x21) = fVar10;
    *(float *)((int)puVar14 + 0x10c) = fVar10;
    fVar10 = fVar8 * fVar8;
    *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar8;
    *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar10;
    *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar10 * fVar8;
    do {
      *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar10 * fVar10;
      iVar13 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar10 * fVar10;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0x80;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar10 = *pfVar22;
      fVar8 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar10;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x100)) +
                        *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar9 + fVar7);
  }
  fVar4 = (float)(dVar34 - (double)fVar4);
  fVar5 = (float)(dVar33 - (double)fVar5);
  *(float *)(puVar14 + 0x11) = fVar4;
  *(float *)((int)puVar14 + 0x8c) = fVar5;
  *(float *)(puVar14 + 0x12) = ABS(fVar4) - ABS(fVar5);
  uVar23 = (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1d) & 4;
  fVar9 = ABS(*(float *)(puVar14 + 0x11));
  if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
    fVar9 = ABS(fVar5);
  }
  fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar8 = ABS(*(float *)((int)puVar14 + 0x8c));
  if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
    fVar8 = ABS(fVar4);
  }
  fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar27 = dVar25;
  if (0.0 < fVar9) {
    lVar16 = uVar15 - 0x170;
    lVar18 = uVar15 - 0xa0;
    lVar20 = uVar15 - 0x90;
    lVar24 = 2;
    fVar9 = (fVar8 - fVar9) / (fVar8 + fVar9);
    fVar8 = fVar9 * fVar9;
    *(float *)(puVar14 + 0x1c) = fVar9;
    *(float *)((int)puVar14 + 0xe4) = fVar9;
    *(float *)(puVar14 + 0x1d) = fVar9;
    *(float *)((int)puVar14 + 0xec) = fVar9;
    fVar9 = fVar8 * fVar8;
    *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar8;
    *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar9;
    *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar9 * fVar8;
    do {
      *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xd0) * fVar9 * fVar9;
      iVar13 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xa0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar9 = *pfVar22;
      fVar8 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xe0) * fVar9;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar13 + 0xe0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar10 + fVar7);
  }
  fVar9 = (float)((double)fVar3 - dVar35);
  dVar30 = (double)fVar9;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)(puVar14 + 0x10) = fVar9;
  dVar28 = ABS((double)fVar1);
  *(float *)((int)puVar14 + 0x7c) = fVar1;
  *(float *)((int)puVar14 + 0x84) = (float)(dVar28 - ABS(dVar30));
  uVar23 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar14 + 0x7c));
  if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar30);
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  dVar29 = ABS((double)*(float *)(puVar14 + 0x10));
  if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
    dVar29 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  dVar28 = dVar25;
  if (0.0 < dVar31) {
    lVar16 = uVar15 - 0x170;
    lVar20 = uVar15 - 0xb0;
    lVar18 = uVar15 - 0xc0;
    lVar24 = 2;
    fVar9 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
    fVar10 = fVar9 * fVar9;
    *(float *)(puVar14 + 0x18) = fVar9;
    *(float *)((int)puVar14 + 0xc4) = fVar9;
    *(float *)(puVar14 + 0x19) = fVar9;
    *(float *)((int)puVar14 + 0xcc) = fVar9;
    fVar9 = fVar10 * fVar10;
    *(float *)((int)puVar14 + 0xc4) = *(float *)((int)puVar14 + 0xc4) * fVar10;
    *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar9;
    *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar9 * fVar10;
    do {
      *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xb0) * fVar9 * fVar9;
      iVar13 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar9 * fVar9;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xc0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar9 = *pfVar22;
      fVar10 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xc0) * fVar9;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar10;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    dVar31 = dVar25;
    do {
      iVar13 = (int)lVar16;
      iVar19 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0xc0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar28 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar1 = (float)((double)fVar6 - (double)fVar3);
  fVar2 = ABS(fVar1);
  *(float *)((int)puVar14 + 0x74) = fVar1;
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar3 = ABS(fVar1);
  *(float *)(puVar14 + 0xe) = fVar1;
  *(float *)(puVar14 + 0xf) = fVar3 - fVar2;
  uVar23 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar14 + 0xe));
  if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar4 = ABS(*(float *)((int)puVar14 + 0x74));
  if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar24 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar14 + 0x14) = fVar1;
    *(float *)((int)puVar14 + 0xa4) = fVar1;
    *(float *)(puVar14 + 0x15) = fVar1;
    *(float *)((int)puVar14 + 0xac) = fVar1;
    lVar18 = uVar15 - 0x170;
    fVar1 = fVar4 * fVar4;
    lVar16 = uVar15 - 0xe0;
    lVar20 = uVar15 - 0xd0;
    *(float *)((int)puVar14 + 0xa4) = *(float *)((int)puVar14 + 0xa4) * fVar4;
    *(float *)(puVar14 + 0x15) = *(float *)(puVar14 + 0x15) * fVar1;
    *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0x90) * fVar1 * fVar1;
      iVar13 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar20 = lVar20 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar20 = uVar15 - 0xe0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar20;
    do {
      fVar1 = *pfVar22;
      fVar4 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
      lVar18 = lVar18 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar19 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar13 + 0xa0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar25 = (double)FastDiffRots(dVar25,dVar28);
  dVar25 = (double)FastWrapRot
                             ((float)(dVar25 * (double)*(float *)(iVar11 + 0x6c)),(float)dVar28);
  *(float *)(param_1 + 0x44) = (float)dVar25;
  dVar25 = (double)FastDiffRots(dVar27,dVar26);
  dVar25 = (double)FastWrapRot
                             ((float)(dVar25 * (double)*(float *)(iVar11 + 0x6c)),(float)dVar26);
  *(float *)(param_1 + 0x48) = (float)dVar25;
  dVar25 = (double)*(float *)(iVar11 + 0x6c);
  *(float *)(param_1 + 0x1c) = (float)dVar32;
  *(float *)(param_1 + 0x18) = (float)(dVar25 * dVar30 + dVar35);
  *(float *)(param_1 + 0x10) = (float)(dVar25 * (double)(float)(dVar34 - dVar37) + dVar37);
  *(float *)(param_1 + 0x14) = (float)(dVar25 * (double)(float)(dVar33 - dVar36) + dVar36);
  return;
}


// 0x0232550 (0x148 bytes)
void M1264_00232550(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  Spline *pSVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  MobyInstance *pMVar9;
  longlong lVar10;
  
  lVar8 = 0;
  iVar2 = (int)((longlong)(short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe4) << 2);
  puVar7 = *(ushort **)((int)&g_MobyGroups + iVar2);
  if (puVar7 != (ushort *)0x0) {
    lVar10 = 0;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + (ZERO_MASK((0x527 - (uint)g_MobyInstance[uVar1 & 0x7fff].oClass)) & (short)((short)lVar10 + 1) - lVar10);
    } while (-1 < (short)uVar1);
    pSVar4 = Splines[param_2];
    puVar7 = *(ushort **)((int)&g_MobyGroups + iVar2);
    iVar2 = pSVar4->cnt;
    pMVar9 = g_MobyInstance;
    do {
      uVar5 = *puVar7 & 0x7fff;
      if (pMVar9[uVar5].oClass == BLARG_SHIP_0527) {
        iVar6 = (int)(lVar8 << 4);
        pvVar3 = pMVar9[uVar5].pVar;
        pMVar9[uVar5].pos.x = *(f32 *)((int)&pSVar4->points[0].x + iVar6);
        pMVar9[uVar5].pos.y = *(f32 *)((int)&pSVar4->points[0].y + iVar6);
        pMVar9[uVar5].pos.z = *(f32 *)((int)&pSVar4->points[0].z + iVar6);
        pMVar9[uVar5].pos.w = *(f32 *)((int)&pSVar4->points[0].w + iVar6);
        *(int *)((int)pvVar3 + 0x60) = param_2;
        *(int *)((int)pvVar3 + 100) = (int)lVar8;
        *(undefined4 *)((int)pvVar3 + 0x68) = 0;
        lVar8 = (longlong)(short)((short)lVar8 + (short)(iVar2 / (int)lVar10));
        pMVar9 = g_MobyInstance;
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x02326a8 (0x3d8 bytes)
/* Moby 1264 */

void UpdateMoby_1264(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  Spline *pSVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  double dVar11;
  double dVar12;
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    M1264_00232550(moby,*(undefined4 *)((int)pvVar3 + 0x60));
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      DeleteMoby(moby);
    }
    else {
      moby->updateDistance = -1;
      iVar7 = *(int *)((int)pvVar3 + 0xec);
      iVar8 = 0;
      moby->drawDistance = 0x200;
      pSVar5 = Splines[iVar7];
      *(Spline **)((int)pvVar3 + 0xf0) = pSVar5;
      (moby->pos).x = pSVar5->points[0].x;
      (moby->pos).y = pSVar5->points[0].y;
      (moby->pos).z = pSVar5->points[0].z;
      fVar2 = pSVar5->points[0].w;
      *(undefined4 *)((int)pvVar3 + 100) = 8;
      (moby->pos).w = fVar2;
      *(undefined4 *)((int)pvVar3 + 0xe0) = 0x42a00000;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0;
      *(undefined4 *)((int)pvVar3 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar3 + 0xf4) = 0xffffffff;
      moby->state = '\x01';
      dVar11 = 2.0;
      pvVar10 = pvVar3;
      pvVar9 = pvVar3;
      do {
        pMVar6 = CreateMoby(OIL_TANKER_PART);
        *(MobyInstance **)((int)pvVar10 + 0x70) = pMVar6;
        pMVar6->drawDistance = 0x200;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(*(int *)((int)pvVar10 + 0x70) + 0x30) = 0xff;
        *(undefined1 *)(*(int *)((int)pvVar10 + 0x70) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar10 + 0x70) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x70) + 0x34) =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)(*(int *)((int)pvVar10 + 0x70) + 0x2c) =
             (float)((double)*(float *)(*(int *)(*(int *)((int)pvVar10 + 0x70) + 0x24) + 0x24) *
                    dVar11);
        iVar7 = *(int *)((int)pvVar10 + 0x70);
        *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
        iVar7 = *(int *)((int)pvVar10 + 0x70);
        *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
        uVar4 = **(undefined4 **)((int)pvVar3 + 0xf0);
        *(undefined4 *)((int)pvVar10 + 0xc0) = 0;
        pvVar10 = (void *)((int)pvVar10 + 4);
        *(short *)((int)pvVar9 + 0x90) = (short)uVar4 + -100;
        pvVar9 = (void *)((int)pvVar9 + 2);
      } while (iVar8 < 8);
    }
  }
  else {
    if (bVar1 < 2) {
      if (g_heroState == TURRET_PLANE_UI) {
        iVar7 = 0;
        moby->state = '\x02';
        pSVar5 = Splines[*(int *)((int)pvVar3 + 0x60)];
        *(undefined4 *)((int)pvVar3 + 0x68) = 0;
        *(Spline **)((int)pvVar3 + 0xf0) = pSVar5;
        pvVar10 = pvVar3;
        pvVar9 = pvVar3;
        do {
          iVar7 = iVar7 + 1;
          uVar4 = **(undefined4 **)((int)pvVar3 + 0xf0);
          *(undefined4 *)((int)pvVar10 + 0xc0) = 0;
          pvVar10 = (void *)((int)pvVar10 + 4);
          *(short *)((int)pvVar9 + 0x90) = (short)uVar4 + -100;
          pvVar9 = (void *)((int)pvVar9 + 2);
        } while (iVar7 < 8);
      }
    }
    else if (2 < bVar1) {
      return;
    }
    fVar2 = *(float *)((int)pvVar3 + 0x6c) + DAT_0078d780;
    *(float *)((int)pvVar3 + 0x6c) = fVar2;
    if (1.0 < fVar2) {
      iVar7 = *(int *)((int)pvVar3 + 0x68) + 1;
      *(float *)((int)pvVar3 + 0x6c) = fVar2 - 1.0;
      *(int *)((int)pvVar3 + 0x68) =
           iVar7 - (iVar7 / **(int **)((int)pvVar3 + 0xf0)) * **(int **)((int)pvVar3 + 0xf0);
    }
    iVar7 = 0;
    dVar11 = 0.0;
    dVar12 = 5.0;
    pvVar10 = pvVar3;
    do {
      iVar8 = *(int *)((int)pvVar10 + 0xc0);
      Delt((float)dVar11,(float)((double)g_FrameTime * dVar12),
                     (float *)((int)pvVar10 + 0xc0));
      if (((iVar8 != 0) && (*(int *)((int)pvVar10 + 0xc0) == 0)) &&
         (*(MobyInstance **)((int)pvVar10 + 0x70) != (MobyInstance *)0x0)) {
        PlayMobySound(0,0,*(MobyInstance **)((int)pvVar10 + 0x70));
      }
      iVar7 = iVar7 + 1;
      pvVar10 = (void *)((int)pvVar10 + 4);
    } while (iVar7 < 8);
    M1264_00231d40(moby);
    M1264_00231108(moby);
    if (moby->state == '\x02') {
      M1264_00230bb8(moby);
    }
    iVar7 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0xf4));
    if (iVar7 == 0) {
      iVar7 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0xf4) = iVar7;
    }
  }
  return;
}



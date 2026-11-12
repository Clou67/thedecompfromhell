// game/update/moby303.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x338150-0x339b58
#include "game/update/moby303.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1085.h"
#include "game/update/moby30.h"
#include "idol/fastfunc.h"

// 0x0338150 (0x64 bytes)
void FUN_00338150(longlong param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  pMVar2 = g_MobyInstance;
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      if (pMVar2[*puVar3 & 0x7fff].state == '\x01') {
        *(undefined2 *)((int)pMVar2[*puVar3 & 0x7fff].pVar + 0x88) = 1;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03381c0 (0x278 bytes)
undefined8 FUN_003381c0(longlong param_1)

{
  f32 fVar1;
  ushort uVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  MobyInstance *pMVar11;
  ushort *puVar12;
  ushort *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar24;
  
  puVar7 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x40);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  puVar13 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  puVar12 = puVar13;
  if (puVar13 == (ushort *)0x0) {
    uVar8 = 0;
  }
  else {
    do {
      if ((*(char *)((int)g_MobyInstance[*puVar12 & 0x7fff].pVar + 0x8b) == '\0') &&
         (g_MobyInstance[*puVar12 & 0x7fff].state != '\x01' &&
          g_MobyInstance[*puVar12 & 0x7fff].state != '\x05')) {
        return 0;
      }
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
    } while (-1 < (short)uVar2);
    auVar22 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x40,0x3381b4);
    dVar15 = 0.5;
    dVar16 = 1.0;
    auVar24 = loadVectorLeftIndexed(8,0x3381b4);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    pMVar9 = g_MobyInstance;
    do {
      pMVar11 = pMVar9 + (*puVar13 & 0x7fff);
      if (pMVar11->state == '\x03') {
        pvVar3 = pMVar11->pVar;
        uVar10 = ZEXT48(pvVar3);
        MB_SetAnimationNoBlend(ZEXT48(pMVar11),4,0);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        pMVar11->state = '\x05';
        auVar17 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0xa44,0x810000);
        auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorAddFloatingPoint(auVar24,auVar23);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar18,auVar24,auVar17);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        fVar6 = animationSpeed * (float)((double)(longlong)DAT_00810a44 + dVar15);
        auVar24 = vectorSplatHalfWord(auVar24,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar24,0x74,uVar10);
        *(undefined2 *)((int)pvVar3 + 0x74) = uVar4;
        dVar14 = (double)FastIntToDouble((short)(int)fVar6);
        auVar24 = ZEXT416(0xfffffff0);
        auVar17 = ZEXT416(0xffffffff);
        auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar17 = loadVectorLeftIndexed(0x74,uVar10);
        auVar20 = loadVectorRightIndexed(0x84,uVar10);
        auVar17 = vectorShiftRightAlgebraicWord
                            (auVar17 | auVar20,
                             auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
        auVar24 = ZEXT416(0xffffffff);
        auVar20 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar21 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        *(float *)((int)pvVar3 + 0x78) = (float)(dVar16 / dVar14);
        auVar24 = loadVectorLeftIndexed(0xa48,0x810000);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar17,auVar24,auVar18);
        auVar17 = vectorReciprocalEstimateFloatingPoint(auVar24);
        auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
        auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar20);
        auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar24,auVar22);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar17,auVar24,auVar21);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x58,
                           ZEXT48(pMVar11));
        *(undefined4 *)((uint)&pMVar11->unk58 & 0xfffffffc) = uVar5;
        fVar1 = (pMVar11->rotation).z;
        *(undefined1 *)((int)pvVar3 + 0x8b) = 0;
        *(f32 *)((int)pvVar3 + 0x8c) = fVar1;
        *(undefined2 *)((int)pvVar3 + 0x88) = 0;
        pMVar9 = g_MobyInstance;
      }
      uVar2 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (-1 < (short)uVar2);
    uVar8 = 1;
  }
  return uVar8;
}


// 0x0338438 (0xb8 bytes)
undefined8 FUN_00338438(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  longlong lVar4;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    uVar2 = 1;
  }
  else {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + ((longlong)((ulonglong)g_MobyInstance[*puVar3 & 0x7fff].state - 0x80) >> 0x3f &
                      1U);
      if ((g_MobyInstance[*puVar3 & 0x7fff].state < 0x80) &&
         (*(short *)((int)g_MobyInstance[*puVar3 & 0x7fff].pVar + 0x88) != 0)) {
        return 1;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    if ((int)lVar4 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x03384f0 (0x14 bytes)
void M303_003384f0(void)

{
  DAT_00810abc = 0x10000;
  return;
}


// 0x0338568 (0x940 bytes)
// inlined: FastAtan2 @0x338874, FastAtan2 @0x338a18, FastAtan2 @0x338bf0
void M303_00338568(undefined8 param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  char cVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  MobyInstance *pMoby;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f15;
  double dVar28;
  ulonglong in_f16;
  double dVar29;
  ulonglong in_f17;
  double dVar30;
  double dVar31;
  ulonglong in_f18;
  double dVar32;
  double dVar33;
  ulonglong in_f19;
  double dVar34;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar35;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  undefined8 uVar41;
  double dVar42;
  ulonglong in_f29;
  undefined8 uVar43;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x1b0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar12;
  puVar10[0x38] = in_LR;
  puVar10[0x25] = in_f15;
  puVar10[0x26] = in_f16;
  puVar10[0x27] = in_f17;
  puVar10[0x28] = in_f18;
  puVar10[0x29] = in_f19;
  puVar10[0x2a] = in_f20;
  puVar10[0x2b] = in_f21;
  puVar10[0x2c] = in_f22;
  puVar10[0x2d] = in_f23;
  puVar10[0x2e] = in_f24;
  puVar10[0x2f] = in_f25;
  puVar10[0x30] = in_f26;
  puVar10[0x31] = in_f27;
  puVar10[0x32] = in_f28;
  puVar10[0x33] = in_f29;
  puVar10[0x34] = in_f30;
  puVar10[0x35] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x21] = unaff_r28;
  puVar10[0x23] = unaff_r30;
  puVar10[0x22] = unaff_r29;
  puVar10[0x20] = unaff_r27;
  pMoby = (MobyInstance *)param_1;
  PlayMobySound(0,0,pMoby);
  fVar3 = (pMoby->pos).y;
  *(f32 *)(puVar10 + 0xe) = (pMoby->pos).x;
  fVar4 = (pMoby->pos).w;
  *(f32 *)((int)puVar10 + 0x74) = fVar3;
  *(f32 *)((int)puVar10 + 0x7c) = fVar4;
  dVar28 = 0.30000001192092896;
  *(float *)(puVar10 + 0xf) = (pMoby->pos).z + 0.3;
  uVar47 = 0x3ff028f5c0000000;
  uVar45 = 0x3fa99999a0000000;
  uVar43 = 0x40e86a0000000000;
  SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,uVar12 - 0x140);
  iVar20 = 0;
  uVar41 = 0x3ff11eb860000000;
  do {
    SpawnPart_13(dVar28,uVar47,uVar41,uVar45,uVar43,uVar12 - 0x140);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 5);
  iVar20 = 0;
  do {
    dVar48 = 0.0;
    uVar41 = 0x3fc99999a0000000;
    dVar30 = (double)(pMoby->pos).x;
    dVar32 = (double)(pMoby->pos).y;
    dVar34 = (double)(pMoby->pos).z;
    dVar29 = (double)(pMoby->pos).w;
    dVar22 = (double)MB_randRangeSigned(0,0x3fc99999a0000000);
    dVar31 = (double)(float)(dVar30 + dVar22);
    dVar22 = (double)MB_randRangeSigned(dVar48,uVar41);
    dVar33 = (double)(float)(dVar32 + dVar22);
    dVar22 = (double)MB_randRangeFloat(0.15,0.55);
    dVar34 = (double)(float)(dVar34 + dVar22);
    dVar30 = (double)MB_randRot();
    dVar36 = 2.0;
    dVar32 = (double)MB_randRangeFloat(2.0,4.5);
    dVar37 = 1.570796251296997;
    dVar44 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar46 = -3.141592502593994;
    dVar38 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar40 = -0.0001980741071747616;
    dVar22 = (double)(float)(3.141592502593994 - dVar30);
    if (dVar30 - (double)(float)(3.141592502593994 - dVar30) < 0.0) {
      dVar22 = dVar30;
    }
    fVar7 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar7 = fVar2;
    }
    dVar35 = (double)(float)(-3.141592502593994 - dVar30);
    if ((double)(float)(-3.141592502593994 - dVar30) - dVar22 < 0.0) {
      dVar35 = dVar22;
    }
    dVar22 = (double)g_FrameTime;
    dVar42 = 2.601886990305502e-06;
    dVar30 = (double)(float)(dVar32 * dVar22);
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
      fVar5 = fVar7;
    }
    dVar25 = (double)(float)(dVar35 * dVar35);
    fVar6 = fVar5 * fVar5;
    dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar35));
    fVar2 = fVar6 * fVar6 * fVar5;
    dVar32 = (double)(float)(dVar25 * dVar27);
    fVar7 = fVar6 * fVar2;
    dVar35 = (double)((float)(dVar25 * dVar32) * 2.601887e-06 +
                     (float)(dVar32 * -0.0001980741071747616 +
                            (double)(float)(dVar27 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar25 * dVar35) *
                                                           -0.16666656732559204 + dVar35))));
    dVar32 = (double)(fVar6 * fVar7 * 2.601887e-06 +
                     fVar7 * -0.0001980741 +
                     fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
    dVar22 = (double)MB_randRangeFloat
                               ((float)(dVar22 * 0.699999988079071),(float)(dVar22 * 1.5));
    if (param_2 == 0) {
      fVar2 = (pMoby->pos).x - g_heroPosition.x;
      fVar7 = (pMoby->pos).y - g_heroPosition.y;
      dVar27 = ABS((double)fVar2);
      dVar26 = ABS((double)fVar7);
      *(float *)(puVar10 + 0x10) = fVar2;
      *(float *)((int)puVar10 + 0x84) = fVar7;
      *(float *)(puVar10 + 0x11) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar10 + 0x10));
      if ((double)*(float *)(puVar10 + 0x11) - dVar48 < 0.0) {
        dVar25 = dVar26;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar10 + 0x84));
      if ((double)*(float *)(puVar10 + 0x11) - dVar48 < 0.0) {
        dVar26 = dVar27;
      }
      fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar48 < dVar25) {
        lVar13 = uVar12 - 0x1a0;
        lVar17 = uVar12 - 0x10c;
        lVar16 = uVar12 - 0x11c;
        lVar21 = 2;
        fVar5 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x14) = fVar5;
        *(float *)(puVar10 + 0x13) = fVar5;
        *(float *)((int)puVar10 + 0x9c) = fVar5;
        *(float *)((int)puVar10 + 0x94) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
        *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
        *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0x94) = *(float *)((int)lVar13 + 0x84) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0x11c;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0x94) = *(float *)((int)lVar13 + 0x94) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        do {
          iVar14 = (int)lVar13;
          iVar11 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar14 + 0x94)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar48 = (double)((float)(dVar48 + 0.7853981852531433) * fVar2 + fVar7);
      }
      dVar25 = (double)(float)(dVar48 + dVar37);
      dVar37 = (double)(float)(dVar44 - dVar25);
      if (dVar25 - (double)(float)(dVar44 - dVar25) < 0.0) {
        dVar37 = dVar25;
      }
      dVar27 = (double)(float)(dVar44 - dVar48);
      if (dVar48 - (double)(float)(dVar44 - dVar48) < 0.0) {
        dVar27 = dVar48;
      }
      dVar44 = (double)(float)(dVar46 - dVar25);
      if ((double)(float)(dVar46 - dVar25) - dVar37 < 0.0) {
        dVar44 = dVar37;
      }
      dVar37 = (double)(float)(dVar46 - dVar48);
      if ((double)(float)(dVar46 - dVar48) - dVar27 < 0.0) {
        dVar37 = dVar27;
      }
      dVar46 = (double)(float)(dVar44 * dVar44);
      dVar25 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar44));
      dVar48 = (double)(float)(dVar46 * dVar25);
      dVar25 = (double)(float)(dVar46 * dVar48) * dVar42 +
               (double)(float)(dVar48 * dVar40 +
                              (double)(float)(dVar25 * dVar39 +
                                             (double)(float)((double)(float)(dVar46 * dVar44) *
                                                             dVar38 + dVar44)));
    }
    else {
      uVar8 = *(uint *)(param_2 + 0x10);
      dVar27 = ABS((double)*(float *)(param_2 + 0x10));
      dVar26 = ABS((double)*(float *)(param_2 + 0x14));
      uVar15 = (ulonglong)(*(uint *)(param_2 + 0x14) >> 0x1d) & 4;
      *(float *)(puVar10 + 0x12) = (float)(dVar27 - dVar26);
      uVar18 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 | uVar15;
      dVar25 = dVar27;
      if ((double)*(float *)(puVar10 + 0x12) - dVar48 < 0.0) {
        dVar25 = dVar26;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar24 = dVar26;
      if ((double)*(float *)(puVar10 + 0x12) - dVar48 < 0.0) {
        dVar24 = dVar27;
      }
      dVar23 = dVar48;
      if (dVar48 < dVar25) {
        lVar13 = uVar12 - 0x1a0;
        lVar16 = uVar12 - 0xdc;
        lVar17 = uVar12 - 0xcc;
        lVar21 = 2;
        fVar5 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x1c) = fVar5;
        *(float *)(puVar10 + 0x1b) = fVar5;
        *(float *)((int)puVar10 + 0xdc) = fVar5;
        *(float *)((int)puVar10 + 0xd4) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
        *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
        *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xd4) = *(float *)((int)lVar13 + 0xc4) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0xdc;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0xd4) = *(float *)((int)lVar13 + 0xd4) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        dVar25 = dVar48;
        do {
          iVar14 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xd4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar25 = (double)(float)(dVar23 + dVar37);
      *(float *)((int)puVar10 + 0x8c) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1e) & 2 | uVar15;
      dVar37 = (double)(float)(dVar44 - dVar25);
      if (dVar25 - (double)(float)(dVar44 - dVar25) < 0.0) {
        dVar37 = dVar25;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = dVar26;
      if ((double)*(float *)((int)puVar10 + 0x8c) - dVar48 < 0.0) {
        dVar24 = dVar27;
      }
      dVar23 = (double)(float)(dVar46 - dVar25);
      if ((double)(float)(dVar46 - dVar25) - dVar37 < 0.0) {
        dVar23 = dVar37;
      }
      dVar37 = (double)(float)(dVar23 * dVar23);
      if ((double)*(float *)((int)puVar10 + 0x8c) - dVar48 < 0.0) {
        dVar27 = dVar26;
      }
      fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar26 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar23));
      dVar25 = (double)(float)(dVar37 * dVar26);
      dVar25 = (double)(float)(dVar37 * dVar25) * dVar42 +
               (double)(float)(dVar25 * dVar40 +
                              (double)(float)(dVar26 * dVar39 +
                                             (double)(float)((double)(float)(dVar37 * dVar23) *
                                                             dVar38 + dVar23)));
      if (dVar48 < dVar27) {
        lVar13 = uVar12 - 0x1a0;
        lVar17 = uVar12 - 0xec;
        lVar16 = uVar12 - 0xfc;
        lVar21 = 2;
        fVar5 = (float)(dVar24 - dVar27) / (float)(dVar24 + dVar27);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x18) = fVar5;
        *(float *)(puVar10 + 0x17) = fVar5;
        *(float *)((int)puVar10 + 0xbc) = fVar5;
        *(float *)((int)puVar10 + 0xb4) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
        *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
        *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xa4) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar12 - 0xfc;
        pfVar19 = (float *)&DAT_007358e0;
        lVar13 = lVar1;
        lVar16 = lVar17;
        do {
          fVar5 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xb4) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar13 = lVar1;
        do {
          iVar14 = (int)lVar13;
          iVar11 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar14 + 0xb4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar48 = (double)((float)(dVar48 + 0.7853981852531433) * fVar2 + fVar7);
      }
      dVar27 = (double)(float)(dVar44 - dVar48);
      if (dVar48 - (double)(float)(dVar44 - dVar48) < 0.0) {
        dVar27 = dVar48;
      }
      dVar37 = (double)(float)(dVar46 - dVar48);
      if ((double)(float)(dVar46 - dVar48) - dVar27 < 0.0) {
        dVar37 = dVar27;
      }
    }
    dVar44 = (double)(float)(dVar37 * dVar37);
    dVar48 = (double)(float)(dVar32 * dVar30 + (double)(float)((double)(float)dVar25 * dVar22));
    dVar32 = (double)(float)(dVar44 * (double)(float)(dVar44 * dVar37));
    dVar46 = (double)(float)(dVar44 * dVar32);
    dVar32 = (double)(float)(dVar35 * dVar30 +
                            (double)(float)((double)(float)((double)(float)(dVar44 * dVar46) *
                                                            dVar42 + (double)(float)(dVar46 * dVar40
                                                                                    + (double)(float
                                                  )(dVar32 * dVar39 +
                                                   (double)(float)((double)(float)(dVar44 * dVar37)
                                                                   * dVar38 + dVar37)))) * dVar22));
    dVar22 = (double)MB_randRangeFloat((float)dVar36,7.0);
    *(float *)(puVar10 + 8) = (float)dVar31;
    *(float *)(puVar10 + 9) = (float)dVar34;
    *(float *)(puVar10 + 10) = (float)dVar48;
    dVar30 = (double)g_FrameTime;
    *(float *)((int)puVar10 + 0x44) = (float)dVar33;
    *(float *)((int)puVar10 + 0x4c) = (float)dVar29;
    *(float *)((int)puVar10 + 0x54) = (float)dVar32;
    *(float *)(puVar10 + 0xb) = (float)(dVar22 * dVar30);
    *(float *)((int)puVar10 + 0x5c) = (float)(dVar22 * dVar30);
    iVar14 = M1089_001bb4e0(param_1);
    if (iVar14 != 0) {
      *(float *)(iVar14 + 0x2c) = (float)((double)*(float *)(iVar14 + 0x2c) * dVar28);
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 < 10);
  auVar49 = ZEXT416(0xffffffff);
  auVar50 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  pMoby->state = '\x02';
  pMoby->collision = (ushort *)0x0;
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar49 = loadVectorLeftIndexed(0x5c,0x338508);
  auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xff;
  cVar9 = storeVectorElementByteIndexed
                    (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20 |
                     auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                     auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                     auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar9;
  return;
}


// 0x0338ea8 (0xb4 bytes)
MobyInstance * FUN_00338ea8(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = CreateMoby(GADGEBOT_SPAWN_CONTAINER);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = '`';
    pMVar4->drawDistance = 0x60;
    MVar3 = pMVar4->modeBits;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0338f90 (0x1e0 bytes)
/* Moby 302 */

void M303_00338f90(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  lVar6 = (longlong)(int)moby;
  uVar7 = MB_damage(lVar6,0x10000,0);
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
    if (3.1415927 - fVar2 < 0.0) {
      fVar2 = fVar2 - 6.2831855;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar2 * fVar3;
    uVar8 = FastLerpColor
                      ((double)((fVar2 * fVar5 * 2.601887e-06 +
                                 fVar5 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
    moby->glowRgba = uVar8;
    if ((int)uVar7 != 0) {
      M303_00338568(lVar6,uVar7);
    }
    if (moby->enabled != '\0') {
      RegisterPostDraw(&PTR_M303_00339188_0070c130,moby);
    }
  }
  else if ((bVar1 < 3) && (iVar9 = FastDecTimerS8(lVar6 + 0xbc), iVar9 != 0)) {
    DeleteMoby(moby);
  }
  return;
}


// 0x0339188 (0x770 bytes)
// inlined: FastRSqrt @0x339370, FastRSqrt @0x339484, FastRSqrt @0x3396ec
void M303_00339188(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short sVar10;
  ulonglong *puVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
  float *pfVar17;
  ulonglong uVar16;
  int iVar18;
  float *pfVar19;
  float *pfVar21;
  longlong lVar20;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  undefined4 *puVar25;
  short *psVar26;
  short *psVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f14;
  double dVar38;
  ulonglong in_f15;
  double dVar39;
  ulonglong in_f16;
  double dVar40;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar41;
  ulonglong in_f21;
  double dVar42;
  ulonglong in_f22;
  double dVar43;
  ulonglong in_f23;
  double dVar44;
  ulonglong in_f24;
  double dVar45;
  ulonglong in_f25;
  double dVar46;
  ulonglong in_f26;
  double dVar47;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar15 = ZEXT48(&stack0x00000000);
  puVar11 = (ulonglong *)(uVar15 - 0x1f0);
  *puVar11 = uVar15;
  puVar11[0x40] = in_LR;
  puVar11[0x2c] = in_f14;
  puVar11[0x2d] = in_f15;
  puVar11[0x2e] = in_f16;
  puVar11[0x2f] = in_f17;
  puVar11[0x30] = in_f18;
  puVar11[0x31] = in_f19;
  puVar11[0x32] = in_f20;
  puVar11[0x33] = in_f21;
  puVar11[0x34] = in_f22;
  puVar11[0x35] = in_f23;
  puVar11[0x36] = in_f24;
  puVar11[0x37] = in_f25;
  puVar11[0x38] = in_f26;
  puVar11[0x39] = in_f27;
  puVar11[0x3a] = in_f28;
  puVar11[0x3b] = in_f29;
  puVar11[0x3c] = in_f30;
  puVar11[0x3d] = in_f31;
  puVar11[0x29] = unaff_r29;
  puVar11[0x28] = unaff_r28;
  dVar39 = (double)*(float *)(param_1 + 0x10);
  puVar11[0x2b] = unaff_r31;
  bVar12 = false;
  dVar30 = (double)GameCamera.posX;
  puVar11[0x27] = unaff_r27;
  dVar41 = (double)*(float *)(param_1 + 0xc0);
  dVar42 = (double)*(float *)(param_1 + 0xc4);
  dVar43 = (double)*(float *)(param_1 + 200);
  fVar5 = *(float *)(param_1 + 0xcc);
  dVar44 = (double)*(float *)(param_1 + 0xd0);
  dVar45 = (double)*(float *)(param_1 + 0xd4);
  dVar46 = (double)*(float *)(param_1 + 0xd8);
  fVar6 = *(float *)(param_1 + 0xdc);
  dVar47 = (double)*(float *)(param_1 + 0xe0);
  dVar48 = (double)*(float *)(param_1 + 0xe4);
  dVar49 = (double)*(float *)(param_1 + 0xe8);
  fVar7 = *(float *)(param_1 + 0xec);
  dVar40 = (double)*(float *)(param_1 + 0x14);
  dVar38 = (double)*(float *)(param_1 + 0x18);
  dVar50 = 1.0;
  puVar11[0x22] = (ulonglong)dVar30;
  dVar31 = (double)GameCamera.posY;
  puVar11[0x23] = (ulonglong)(double)GameCamera.posZ;
  puVar11[0x2a] = unaff_r30;
  puVar11[0x26] = unaff_r26;
  puVar11[0x25] = unaff_r25;
  if ((16.0 <= ABS((float)(dVar30 - dVar39))) ||
     (puVar11[0x21] = (ulonglong)dVar31, 16.0 <= ABS((float)(dVar31 - dVar40)))) {
    pfVar17 = (float *)&DAT_010bcc80;
    pfVar19 = (float *)&DAT_00810ae0;
    lVar20 = 0x39;
    do {
      dVar30 = (double)pfVar19[1];
      dVar31 = (double)*pfVar19;
      dVar32 = (double)pfVar19[3];
      dVar33 = (double)pfVar19[2];
      pfVar19 = pfVar19 + 4;
      pfVar17[3] = (float)(dVar30 * (double)fVar6 +
                          (double)(float)(dVar33 * (double)fVar7 +
                                         (double)(float)(dVar31 * (double)fVar5 + dVar32)));
      *pfVar17 = (float)(dVar32 * dVar39 +
                        (double)(float)(dVar33 * dVar47 +
                                       (double)(float)(dVar31 * dVar41 +
                                                      (double)(float)(dVar30 * dVar44))));
      pfVar17[1] = (float)(dVar32 * dVar40 +
                          (double)(float)(dVar33 * dVar48 +
                                         (double)(float)(dVar31 * dVar42 +
                                                        (double)(float)(dVar30 * dVar45))));
      pfVar17[2] = (float)(dVar32 * dVar38 +
                          (double)(float)(dVar33 * dVar49 +
                                         (double)(float)(dVar31 * dVar43 +
                                                        (double)(float)(dVar30 * dVar46))));
      pfVar17 = pfVar17 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  else {
    dVar30 = 0.0;
    pfVar17 = (float *)&DAT_010bcab0;
    bVar12 = true;
    iVar28 = 0;
    pfVar21 = (float *)&DAT_010bcc80;
    puVar11[0x20] = (ulonglong)(double)DAT_00811bc8;
    pfVar22 = (float *)&DAT_00810ae0;
    pfVar23 = (float *)&DAT_00811580;
    pfVar19 = (float *)&DAT_010bcab4;
    do {
      dVar31 = (double)pfVar22[1];
      dVar32 = (double)*pfVar22;
      dVar33 = (double)pfVar22[2];
      dVar35 = (double)pfVar22[3];
      fVar1 = (float)(dVar39 * dVar35 +
                     (double)(float)(dVar47 * dVar33 +
                                    (double)(float)(dVar41 * dVar32 +
                                                   (double)(float)(dVar44 * dVar31))));
      fVar2 = (float)(dVar40 * dVar35 +
                     (double)(float)(dVar48 * dVar33 +
                                    (double)(float)(dVar42 * dVar32 +
                                                   (double)(float)(dVar45 * dVar31))));
      fVar3 = (float)(dVar38 * dVar35 +
                     (double)(float)(dVar49 * dVar33 +
                                    (double)(float)(dVar43 * dVar32 +
                                                   (double)(float)(dVar46 * dVar31))));
      *pfVar21 = fVar1;
      dVar37 = (double)puVar11[0x22];
      fVar4 = (float)((double)fVar2 - (double)puVar11[0x21]);
      pfVar21[1] = fVar2;
      fVar1 = (float)((double)fVar1 - dVar37);
      fVar2 = (float)((double)fVar3 - (double)puVar11[0x23]);
      pfVar21[2] = fVar3;
      pfVar21[3] = (float)((double)fVar6 * dVar31 +
                          (double)(float)((double)fVar7 * dVar33 +
                                         (double)(float)((double)fVar5 * dVar32 + dVar35)));
      fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4;
      dVar31 = dVar30;
      dVar32 = dVar30;
      dVar33 = dVar30;
      if (SQRT(fVar3) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar3);
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        dVar33 = (double)(fVar1 * fVar14);
        dVar32 = (double)(fVar4 * fVar14);
        dVar31 = (double)(fVar2 * fVar14);
      }
      dVar35 = (double)pfVar23[1];
      dVar37 = (double)*pfVar23;
      dVar34 = (double)pfVar23[2];
      dVar36 = (double)pfVar23[3];
      fVar2 = (float)(dVar40 * dVar36 +
                     (double)(float)(dVar48 * dVar34 +
                                    (double)(float)(dVar42 * dVar37 +
                                                   (double)(float)(dVar45 * dVar35))));
      fVar3 = (float)(dVar39 * dVar36 +
                     (double)(float)(dVar47 * dVar34 +
                                    (double)(float)(dVar41 * dVar37 +
                                                   (double)(float)(dVar44 * dVar35))));
      fVar4 = (float)(dVar38 * dVar36 +
                     (double)(float)(dVar49 * dVar34 +
                                    (double)(float)(dVar43 * dVar37 +
                                                   (double)(float)(dVar46 * dVar35))));
      dVar37 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar1 = (float)((double)puVar11[0x20] / dVar37);
      dVar35 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar35 = (double)(fVar2 * fVar1);
      }
      dVar34 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar34 = (double)(fVar3 * fVar1);
      }
      dVar36 = dVar30;
      if (0.0 - dVar37 < 0.0) {
        dVar36 = (double)(fVar4 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar35 = (double)(fVar2 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar34 = (double)(fVar3 * fVar1);
      }
      if (dVar37 - 0.0 < 0.0) {
        dVar36 = (double)(fVar4 * fVar1);
      }
      dVar37 = (double)((float)(dVar36 * dVar31 +
                               (double)(float)(dVar34 * dVar33 + (double)(float)(dVar35 * dVar32)))
                       * 2.0);
      fVar1 = -(float)(dVar35 * dVar37 - dVar32);
      fVar4 = -(float)(dVar34 * dVar37 - dVar33);
      fVar2 = -(float)(dVar36 * dVar37 - dVar31);
      fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1;
      dVar31 = dVar30;
      dVar32 = dVar30;
      dVar33 = dVar30;
      if (SQRT(fVar3) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar3);
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar3 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        dVar33 = (double)(fVar14 * fVar4);
        dVar32 = (double)(fVar14 * fVar1);
        dVar31 = (double)(fVar14 * fVar2);
      }
      iVar28 = iVar28 + 1;
      pfVar21 = pfVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      dVar31 = (double)(SQRT((float)(dVar31 + 1.0) * 2.0) * 2.0);
      *pfVar17 = (float)(dVar33 / dVar31) + 0.5;
      pfVar17 = pfVar17 + 2;
      *pfVar19 = (float)(dVar32 / dVar31) + 0.5;
      pfVar19 = pfVar19 + 2;
    } while (iVar28 < 0x39);
  }
  uVar16 = GetEffectTex(DAT_00811bc0);
  puVar11[0x1d] = uVar16;
  uVar16 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar11[0x1e] = uVar16;
  uVar16 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar11[0x1c] = uVar16;
  uVar16 = idol_draw::PackCmd(DAT_010bd010,DAT_00811bb0,DAT_00811bb4,DAT_00811bb8,DAT_00811bbc);
  puVar11[0x1f] = uVar16;
  uVar8 = DAT_00811bc4;
  iVar29 = 0;
  iVar28 = 0;
  *(undefined4 *)((int)puVar11 + 0xbc) = DAT_00811bc4;
  *(undefined4 *)(puVar11 + 0x17) = uVar8;
  *(undefined4 *)((int)puVar11 + 0xb4) = uVar8;
  *(undefined4 *)(puVar11 + 0x16) = uVar8;
  do {
    dVar30 = (double)*(float *)((int)&DAT_00811914 + iVar28);
    dVar31 = (double)*(float *)((int)&DAT_00811910 + iVar28);
    dVar32 = (double)*(float *)((int)&DAT_00811918 + iVar28);
    dVar33 = (double)*(float *)((int)&DAT_0081191c + iVar28);
    fVar6 = (float)(dVar33 * dVar40 +
                   (double)(float)(dVar32 * dVar48 +
                                  (double)(float)(dVar31 * dVar42 + (double)(float)(dVar30 * dVar45)
                                                 ))) - GameCamera.posY;
    fVar7 = (float)(dVar33 * dVar39 +
                   (double)(float)(dVar32 * dVar47 +
                                  (double)(float)(dVar31 * dVar41 + (double)(float)(dVar30 * dVar44)
                                                 ))) - GameCamera.posX;
    fVar1 = (float)(dVar33 * dVar38 +
                   (double)(float)(dVar32 * dVar49 +
                                  (double)(float)(dVar31 * dVar43 + (double)(float)(dVar30 * dVar46)
                                                 ))) - GameCamera.posZ;
    fVar3 = 0.0;
    dVar30 = (double)(fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar2 = fVar3;
    fVar5 = fVar3;
    if ((float)SQRT(dVar30) != 0.0) {
      dVar31 = 1.0 / SQRT(dVar30);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50)
                               * (double)(float)(dVar31 * 0.5) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50)
                               * (double)(float)(dVar31 * 0.5) + dVar31);
      fVar5 = (float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar50) *
                      (double)(float)(dVar31 * 0.5) + dVar31);
      fVar3 = fVar7 * fVar5;
      fVar2 = fVar6 * fVar5;
      fVar5 = fVar1 * fVar5;
    }
    dVar30 = (double)*(float *)((int)&DAT_008112e4 + iVar28);
    dVar31 = (double)*(float *)((int)&DAT_008112e0 + iVar28);
    dVar32 = (double)*(float *)((int)&DAT_008112e8 + iVar28);
    if (fVar5 * (float)(dVar32 * dVar49 +
                       (double)(float)(dVar31 * dVar43 + (double)(float)(dVar30 * dVar46))) +
        fVar3 * (float)(dVar32 * dVar47 +
                       (double)(float)(dVar31 * dVar41 + (double)(float)(dVar30 * dVar44))) +
        fVar2 * (float)(dVar32 * dVar48 +
                       (double)(float)(dVar31 * dVar42 + (double)(float)(dVar30 * dVar45))) <= 0.0)
    {
      iVar18 = 0;
      lVar24 = uVar15 - 0x180;
      psVar26 = (short *)((int)&DAT_00810e70 + iVar28);
      psVar27 = (short *)(iVar28 + 0x810e72);
      lVar20 = uVar15 - 0x1f0;
      do {
        sVar10 = *psVar26;
        iVar13 = (int)((longlong)sVar10 << 4);
        puVar25 = (undefined4 *)lVar24;
        *puVar25 = *(undefined4 *)((int)&DAT_010bcc80 + iVar13);
        puVar25[1] = *(undefined4 *)((int)&DAT_010bcc84 + iVar13);
        puVar25[2] = *(undefined4 *)((int)&DAT_010bcc88 + iVar13);
        puVar25[3] = *(undefined4 *)((int)&DAT_010bcc8c + iVar13);
        if (bVar12) {
          iVar13 = (int)((longlong)sVar10 << 3);
          uVar9 = *(undefined4 *)((int)&DAT_010bcab0 + iVar13);
          uVar8 = *(undefined4 *)((int)&DAT_010bcab4 + iVar13);
        }
        else {
          iVar13 = (int)((longlong)*psVar27 << 3);
          uVar9 = *(undefined4 *)(&DAT_00811110 + iVar13);
          uVar8 = *(undefined4 *)(&DAT_00811114 + iVar13);
        }
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)lVar20 + 0xc0) = uVar9;
        *(undefined4 *)((int)lVar20 + 0xc4) = uVar8;
        lVar24 = lVar24 + 0x10;
        psVar26 = psVar26 + 2;
        psVar27 = psVar27 + 2;
        lVar20 = lVar20 + 8;
      } while (iVar18 < 4);
      FastDrawQuad(uVar15 - 0x180,0,0,EffectTexHeaders,9);
    }
    iVar29 = iVar29 + 1;
    iVar28 = iVar28 + 0x10;
  } while (iVar29 < 0x2a);
  return;
}


// 0x03398f8 (0x14 bytes)
void M303_003398f8(void)

{
  DAT_00811c18 = 0x10000;
  return;
}


// 0x0339910 (0xac bytes)
MobyInstance * FUN_00339910(MobyInstance *param_1)

{
  f32 fVar1;
  f32 fVar2;
  uint uVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = CreateMoby(GADGEBOT_SPAWN_PAD);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = '\0';
    pMVar5->drawDistance = 0x60;
    pMVar5->enabled = '\x01';
    fVar1 = (param_1->rotation).z;
    (pMVar5->rotation).x = 0.0;
    (pMVar5->rotation).y = 0.0;
    uVar3 = param_1->color;
    uVar4 = param_1->light;
    (pMVar5->rotation).z = fVar1;
    fVar1 = (param_1->pos).x;
    pMVar5->color = uVar3;
    pMVar5->light = uVar4;
    pMVar5->field80_0xb8 = param_1;
    fVar2 = (param_1->pos).y;
    (pMVar5->pos).x = fVar1;
    fVar1 = (param_1->pos).z;
    (pMVar5->pos).y = fVar2;
    fVar2 = (param_1->pos).w;
    (pMVar5->pos).z = fVar1;
    (pMVar5->pos).w = fVar2;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x03399f0 (0x168 bytes)
/* Moby 303 */

void UpdateMoby_303(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if ((moby->field80_0xb8 == (MobyInstance *)0x0) || (1 < moby->field80_0xb8->state)) {
    uVar5 = FastLerpColor(0x3fb99999a0000000,moby->glowRgba,0xffffffff80464646);
  }
  else {
    fVar1 = (float)(longlong)(worldUpdateTime % 0x96) * 0.006666667 * 2.0 * 3.1415927;
    if (3.1415927 - fVar1 < 0.0) {
      fVar1 = fVar1 - 6.2831855;
    }
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    uVar5 = FastLerpColor
                      ((double)((fVar1 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
  }
  moby->glowRgba = uVar5;
  return;
}



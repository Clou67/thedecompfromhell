// game/update/moby344.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3509b0-0x3510a0
// shared update function UpdateMoby_a_lot_13; registered for oClasses 344, 547, 548, 549, 550, 551, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 782, 783, 784, 785, 980, 981
#include "game/update/moby344.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03509b0 (0x134 bytes)
void FUN_003509b0(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  auVar9 = ZEXT416(0xffffffff);
  auVar7 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9.piece<0,4>() = param_5;
  auVar9.piece<4,4>() = param_5;
  auVar9.piece<8,4>() = param_5;
  auVar9.piece<12,4>() = param_5;
  *(undefined1 *)(param_1 + 0x20) = 1;
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  *(undefined4 *)(uVar1 + 0x30) = *param_3;
  *(undefined4 *)(uVar1 + 0x34) = param_3[1];
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  *(undefined4 *)(uVar1 + 0x38) = param_3[2];
  *(undefined4 *)(uVar1 + 0x3c) = param_3[3];
  *(undefined4 *)(uVar1 + 0x10) = *param_4;
  *(undefined4 *)(uVar1 + 0x14) = param_4[1];
  *(undefined4 *)(uVar1 + 0x18) = param_4[2];
  *(undefined4 *)(uVar1 + 0x1c) = param_4[3];
  fVar3 = g_FrameTime;
  auVar9 = loadVectorLeftIndexed(0x70,0x3509a0);
  auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = vectorAddFloatingPoint(auVar8,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar7);
  auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
  auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,(ulonglong)uVar1);
  *(undefined4 *)(uVar1 & 0xfffffffc) = uVar2;
  dVar6 = -4.188790321350098;
  dVar5 = 4.188790321350098;
  dVar4 = (double)MB_randRangeFloat(fVar3 * -4.1887903,fVar3 * 4.1887903);
  *(float *)(uVar1 + 0x20) = (float)dVar4;
  dVar4 = (double)MB_randRangeFloat
                            ((float)((double)g_FrameTime * dVar6),
                             (float)((double)g_FrameTime * dVar5));
  *(float *)(uVar1 + 0x24) = (float)dVar4;
  dVar4 = (double)MB_randRangeFloat
                            ((float)((double)g_FrameTime * dVar6),
                             (float)((double)g_FrameTime * dVar5));
  *(float *)(uVar1 + 0x28) = (float)dVar4;
  return;
}


// shared update function, registered for oClasses 344, 547, 548, 549, 550, 551, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 782, 783, 784, 785, 980, 981
// 0x0350b08 (0x598 bytes)
/* Moby 344
   Moby 547
   Moby 548
   Moby 549
   Moby 550
   Moby 551
   Moby 588
   Moby 589
   Moby 590
   Moby 591
   Moby 592
   Moby 593
   Moby 594
   Moby 595
   Moby 596
   Moby 597
   Moby 598
   Moby 782
   Moby 783
   Moby 784
   Moby 785
   Moby 980
   Moby 981 */

void UpdateMoby_344(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  s8 sVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  Vec4 VStack_90;
  float local_80;
  float local_7c;
  float local_78;
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar5 = (undefined4 *)moby->pVar;
  bVar9 = (bVar1 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)(uint)bVar1) {
      if ((moby->drawDistance & 1U) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 2) {
    if ((int)puVar5[1] < 1) {
      fVar4 = (float)puVar5[5];
      fVar2 = (float)puVar5[4];
      fVar3 = (float)puVar5[6];
      local_b0 = (moby->transform).v2.x * fVar3 +
                 (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar4;
      local_ac = (moby->transform).v2.y * fVar3 +
                 (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar4;
      local_a8 = (moby->transform).v2.z * fVar3 +
                 (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar4;
      dVar10 = (double)FastWrapRot((moby->rotation).x,(float)puVar5[8]);
      (moby->rotation).x = (float)dVar10;
      dVar10 = (double)FastWrapRot((moby->rotation).y,(float)puVar5[9]);
      (moby->rotation).y = (float)dVar10;
      dVar10 = (double)FastWrapRot((moby->rotation).z,(float)puVar5[10]);
      (moby->rotation).z = (float)dVar10;
      FastEulerToMtx1(&VStack_90,lVar7 + 0x40);
      if ((moby->modeBits & MIRROR) != NONE) {
        local_80 = -local_80;
        local_7c = -local_7c;
        local_78 = -local_78;
      }
      FastApplyTransform(&(moby->transform).v0,&VStack_90);
      fVar4 = (float)puVar5[5];
      fVar2 = (float)puVar5[4];
      fVar3 = (float)puVar5[6];
      dVar16 = (double)((moby->transform).v2.x * fVar3 +
                       (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar4);
      dVar14 = (double)((moby->transform).v2.y * fVar3 +
                       (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar4);
      dVar10 = (double)((moby->transform).v2.z * fVar3 +
                       (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar4);
    }
    else {
      GetBonePosition(lVar7,puVar5[1],&local_b0);
      dVar10 = (double)FastWrapRot((moby->rotation).x,(float)puVar5[8]);
      (moby->rotation).x = (float)dVar10;
      dVar10 = (double)FastWrapRot((moby->rotation).y,(float)puVar5[9]);
      (moby->rotation).y = (float)dVar10;
      dVar10 = (double)FastWrapRot((moby->rotation).z,(float)puVar5[10]);
      (moby->rotation).z = (float)dVar10;
      FastEulerToMtx1(&VStack_90,lVar7 + 0x40);
      FastApplyTransform(&(moby->transform).v0,&VStack_90);
      GetBonePosition(lVar7,puVar5[1],&local_a0);
      dVar16 = (double)local_a0;
      dVar14 = (double)local_9c;
      dVar10 = (double)local_98;
    }
    dVar15 = (double)local_b0;
    dVar13 = (double)local_ac;
    dVar12 = (double)local_a8;
    dVar11 = (double)FastIntToDouble(puVar5[3]);
    iVar8 = CollSphere
                      ((double)(float)(dVar11 * 0.0009765625),&local_a0,&DAT_00350ae4,0,lVar7);
    if ((iVar8 != 0) &&
       (((g_CollOutput.pMoby == (MobyInstance *)0x0 || (g_CollOutput.pMoby != (MobyInstance *)puVar5[2])
         ) && (*puVar5 = 0,
              (float)puVar5[0xe] * g_CollOutput.normal.z +
              (float)puVar5[0xc] * g_CollOutput.normal.x + (float)puVar5[0xd] * g_CollOutput.normal.y <
              0.0)))) {
      FastVecReflect(puVar5 + 0xc,puVar5 + 0xc,0xa10980);
      puVar5[0xc] = (float)puVar5[0xc] * 0.5;
      puVar5[0xd] = (float)puVar5[0xd] * 0.5;
      puVar5[0xe] = (float)puVar5[0xe] * 0.5;
    }
    iVar8 = FastDecTimerS32(puVar5);
    if (iVar8 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xc,0x350ae4);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = ZEXT416(0xffffffff);
      auVar26 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = loadVectorLeftIndexed(0x14,0x350ae4);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar21 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar17 = ZEXT416(0xffffffff);
      auVar22 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xffffffff);
      auVar23 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xfffffff8);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar18 = loadVectorLeftIndexed(0x10,0x350ae4);
      auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
      *puVar5 = 0;
      auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
      auVar24 = vectorReciprocalEstimateFloatingPoint(auVar20);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar20,auVar21);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar19);
      auVar25 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar19 = loadVectorLeftIndexed(0x23,lVar7);
      auVar19 = vectorShiftRightWord
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
      auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar19,0);
      auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar20,auVar21);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar17,auVar22);
      auVar17 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar20,auVar21);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar23);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                           auVar25);
      auVar18 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                 auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      if ((bool)(bVar9 >> 1 & 1)) {
        DeleteMoby(moby);
      }
      else {
        auVar17 = vectorConvertToUnsignedFixedPointWordSaturate(auVar20,0);
        auVar17 = vectorSubtractUnsignedWordModulo(auVar19,auVar17);
        auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xff;
        sVar6 = storeVectorElementByteIndexed
                          (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                           auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                           auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                           auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,
                           0x23,lVar7);
        moby->alpha = sVar6;
      }
    }
    puVar5[0xe] = -(g_FrameTimeSq * 10.8 - (float)puVar5[0xe]);
    fVar2 = (moby->pos).x + (float)puVar5[0xc];
    (moby->pos).x = fVar2;
    fVar3 = (moby->pos).y + (float)puVar5[0xd];
    (moby->pos).y = fVar3;
    fVar4 = (float)puVar5[0xe];
    (moby->pos).x = fVar2 + (float)(dVar15 - dVar16);
    (moby->pos).y = fVar3 + (float)(dVar13 - dVar14);
    fVar4 = (moby->pos).z + fVar4 + (float)(dVar12 - dVar10);
    (moby->pos).z = fVar4;
    if (fVar4 < 5.0) {
      DeleteMoby(moby);
    }
  }
  return;
}



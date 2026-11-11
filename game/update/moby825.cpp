// game/update/moby825.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x478e68-0x479528
#include "game/update/moby825.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0478e68 (0x604 bytes)
// inlined: FastRSqrt @0x479020
void M825_00478e68(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong unaff_r19;
  int iVar16;
  ulonglong unaff_r20;
  uint uVar17;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  undefined4 *puVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  longlong lVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
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
  GPiece<16> auVar48;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar49;
  GPiece<16> auVar47;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x330;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar11;
  puVar6[0x68] = in_LR;
  puVar6[100] = in_f30;
  puVar6[0x65] = in_f31;
  lVar9 = uVar11 - 0x90;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  puVar6[0x62] = unaff_r30;
  puVar6[0x61] = unaff_r29;
  puVar6[0x60] = unaff_r28;
  puVar6[99] = unaff_r31;
  puVar6[0x5f] = unaff_r27;
  puVar6[0x5e] = unaff_r26;
  puVar6[0x5d] = unaff_r25;
  puVar6[0x5c] = unaff_r24;
  puVar6[0x5b] = unaff_r23;
  puVar6[0x5a] = unaff_r22;
  puVar6[0x59] = unaff_r21;
  puVar6[0x58] = unaff_r20;
  puVar6[0x57] = unaff_r19;
  iVar16 = *(int *)(param_1 + 0x78);
  GetBonePosition(param_1,0,uVar11 - 0x2b0);
  dVar31 = 0.0;
  *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x74) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  fVar4 = *(float *)(iVar16 + 0x48);
  fVar2 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar2 = fVar4;
  }
  fVar3 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar8 = fVar4 * fVar2;
  *(float *)((int)puVar6 + 0x74) =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
       0.5235988 + 0.5235988;
  FastEulerToMtx1(uVar11 - 0x2a0,uVar11 - 0x2c0);
  fVar4 = GameCamera.posY - *(float *)((int)puVar6 + 0x84);
  fVar2 = GameCamera.posX - *(float *)(puVar6 + 0x10);
  fVar8 = GameCamera.posZ - *(float *)(puVar6 + 0x11);
  *(float *)(puVar6 + 0x14) = fVar2;
  *(float *)((int)puVar6 + 0xa4) = fVar4;
  dVar30 = (double)*(float *)((int)puVar6 + 0xb4);
  dVar29 = (double)*(float *)(puVar6 + 0x17);
  dVar28 = (double)*(float *)(puVar6 + 0x16);
  fVar3 = fVar8 * fVar8 + fVar2 * fVar2 + fVar4 * fVar4;
  dVar25 = dVar31;
  dVar26 = dVar31;
  if ((double)SQRT(fVar3) != dVar31) {
    fVar7 = 1.0 / SQRT(fVar3);
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar31 = (double)(fVar2 * fVar7);
    dVar25 = (double)(fVar4 * fVar7);
    dVar26 = (double)(fVar8 * fVar7);
  }
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0xac) = 0;
  *(float *)(puVar6 + 0x18) = *(float *)(puVar6 + 0x10);
  *(float *)((int)puVar6 + 0xc4) = *(float *)((int)puVar6 + 0x84);
  fVar4 = (float)(dVar30 * dVar26 - (double)(float)(dVar29 * dVar25));
  dVar27 = (double)fVar4;
  fVar2 = (float)(dVar29 * dVar31 - (double)(float)(dVar28 * dVar26));
  dVar26 = (double)fVar2;
  fVar3 = (float)(dVar28 * dVar25 - (double)(float)(dVar30 * dVar31));
  dVar31 = (double)fVar3;
  *(float *)(puVar6 + 0x12) = fVar4;
  *(float *)((int)puVar6 + 0x94) = fVar2;
  *(float *)(puVar6 + 0x13) = fVar3;
  *(float *)(puVar6 + 0x19) = *(float *)(puVar6 + 0x11);
  *(undefined4 *)((int)puVar6 + 0xcc) = *(undefined4 *)((int)puVar6 + 0x8c);
  *(float *)((int)puVar6 + 0xa4) = (float)(dVar31 * dVar28 - (double)(float)(dVar27 * dVar29));
  *(float *)(puVar6 + 0x15) = (float)(dVar27 * dVar30 - (double)(float)(dVar26 * dVar28));
  *(float *)(puVar6 + 0x14) = (float)(dVar26 * dVar29 - (double)(float)(dVar31 * dVar30));
  uVar12 = GetEffectTex(DAT_00877a60);
  puVar6[0x3b] = uVar12;
  puVar6[0x29] = uVar12;
  uVar12 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x3c] = uVar12;
  puVar6[0x2a] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x3a] = uVar12;
  puVar6[0x28] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010d99dc,DAT_00877a30,DAT_010d99e0,DAT_00877a34,0x80);
  puVar6[0x3d] = uVar12;
  puVar6[0x2b] = uVar12;
  puVar14 = &DAT_00877a40;
  auVar48 = ZEXT416(0);
  auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  puVar10 = &DAT_00877a44;
  lVar24 = 4;
  lVar15 = lVar1;
  do {
    uVar13 = *puVar14;
    puVar14 = puVar14 + 2;
    iVar16 = (int)lVar15;
    *(undefined4 *)(iVar16 + 0x120) = uVar13;
    uVar5 = *puVar10;
    puVar10 = puVar10 + 2;
    *(undefined4 *)(iVar16 + 0x124) = uVar5;
    *(undefined4 *)(iVar16 + 0x1b0) = uVar13;
    *(undefined4 *)(iVar16 + 0x1b4) = uVar5;
    lVar15 = lVar15 + 8;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  iVar16 = 0;
  auVar47 = auVar48;
  do {
    dVar31 = 0.10000000149011612;
    auVar41 = vectorConvertFromSignedFixedPointWord(auVar48,0);
    auVar42 = ZEXT416(1);
    auVar49 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = loadVectorLeftIndexed(0x2c,0x478e2c);
    auVar45 = loadVectorLeftIndexed(0x30,0x478e2c);
    auVar40 = loadVectorLeftIndexed(0x34,0x478e2c);
    auVar44 = loadVectorLeftIndexed(0x38,0x478e2c);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    uVar17 = 0;
    auVar42 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    lVar24 = uVar11 - 0x260;
    puVar10 = &DAT_00877a70;
    lVar19 = uVar11 - 0x1d0;
    puVar14 = &DAT_00877ab0;
    lVar20 = uVar11 - 0x260;
    lVar21 = uVar11 - 600;
    lVar22 = uVar11 - 0x1d0;
    lVar23 = uVar11 - 0x1c8;
    lVar15 = lVar1;
    auVar42 = auVar47;
    do {
      puVar18 = (undefined4 *)lVar24;
      *puVar18 = *puVar10;
      auVar32 = vectorLogicalAnd(auVar47,auVar49);
      puVar18[1] = puVar10[1];
      uVar13 = puVar10[2];
      puVar6[0x3e] = (longlong)(int)((uVar17 & 1) + iVar16);
      puVar18[2] = uVar13;
      auVar33 = ZEXT416(2);
      puVar18[3] = puVar10[3];
      auVar34.piece<0,4>() = auVar32.piece<0,4>() + auVar48.piece<0,4>();
      auVar34.piece<8,8>() = auVar32.piece<8,8>();
      auVar34.piece<4,4>() = auVar32.piece<4,4>() + auVar48.piece<4,4>();
      auVar35.piece<0,8>() = auVar34.piece<0,8>();
      auVar35.piece<12,4>() = auVar32.piece<12,4>();
      auVar35.piece<8,4>() = auVar32.piece<8,4>() + auVar48.piece<8,4>();
      auVar32.piece<0,12>() = auVar35.piece<0,12>();
      auVar32.piece<12,4>() = auVar35.piece<12,4>() + auVar48.piece<12,4>();
      puVar18 = (undefined4 *)lVar19;
      *puVar18 = *puVar14;
      auVar34 = vectorCompareGreaterThanSignedWord
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar47);
      auVar33 = ZEXT416(0xffffffff);
      puVar18[1] = puVar14[1];
      auVar39 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      puVar18[2] = puVar14[2];
      auVar33 = vectorConditionalSelect
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar49,
                           auVar34);
      puVar18[3] = puVar14[3];
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar33,0);
      uVar13 = FastLerpColor
                         ((double)(float)((double)(longlong)puVar6[0x3e] * dVar31),DAT_00877a38,
                          PTR_DAT_00877a3c);
      auVar33 = ZEXT416(0xffffffff);
      auVar32 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar33 = ZEXT416(0xffffffff);
      auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      uVar17 = uVar17 + 1;
      auVar35 = loadVectorLeftIndexed(lVar9,lVar20);
      lVar24 = lVar24 + 0x10;
      auVar36 = loadVectorLeftIndexed(lVar9,lVar21);
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar36);
      auVar37 = loadVectorLeftIndexed(lVar9,lVar22);
      *(undefined4 *)((int)lVar15 + 0x1a0) = uVar13;
      auVar33 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar39,auVar44,auVar32);
      auVar39.piece<0,4>() = auVar47.piece<0,4>() + auVar49.piece<0,4>();
      auVar39.piece<8,8>() = auVar47.piece<8,8>();
      auVar39.piece<4,4>() = auVar47.piece<4,4>() + auVar49.piece<4,4>();
      auVar46.piece<0,8>() = auVar39.piece<0,8>();
      auVar46.piece<12,4>() = auVar47.piece<12,4>();
      auVar46.piece<8,4>() = auVar47.piece<8,4>() + auVar49.piece<8,4>();
      auVar47.piece<0,12>() = auVar46.piece<0,12>();
      auVar47.piece<12,4>() = auVar46.piece<12,4>() + auVar49.piece<12,4>();
      auVar34 = loadVectorLeftIndexed(lVar9,lVar23);
      puVar10 = puVar10 + 4;
      *(undefined4 *)((int)lVar15 + 0x110) = uVar13;
      lVar19 = lVar19 + 0x10;
      auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar34);
      puVar14 = puVar14 + 4;
      lVar15 = lVar15 + 4;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar33,auVar38,auVar35);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar37);
      auVar33 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0,lVar20);
      *(undefined4 *)lVar20 = uVar13;
      uVar13 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,lVar21);
      *(undefined4 *)lVar21 = uVar13;
      lVar20 = lVar20 + 0x10;
      uVar13 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,lVar22);
      *(undefined4 *)lVar22 = uVar13;
      lVar21 = lVar21 + 0x10;
      uVar13 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0,lVar23);
      *(undefined4 *)lVar23 = uVar13;
      lVar22 = lVar22 + 0x10;
      lVar23 = lVar23 + 0x10;
    } while ((int)uVar17 < 4);
    FastDrawQuad(uVar11 - 0x260,uVar11 - 0x2a0,0,EffectTexHeaders,9);
    FastDrawQuad(uVar11 - 0x1d0,uVar11 - 0x2a0,0,EffectTexHeaders,9);
    iVar16 = iVar16 + 1;
    auVar40.piece<0,4>() = auVar48.piece<0,4>() + auVar49.piece<0,4>();
    auVar40.piece<8,8>() = auVar48.piece<8,8>();
    auVar40.piece<4,4>() = auVar48.piece<4,4>() + auVar49.piece<4,4>();
    auVar41.piece<0,8>() = auVar40.piece<0,8>();
    auVar41.piece<12,4>() = auVar48.piece<12,4>();
    auVar41.piece<8,4>() = auVar48.piece<8,4>() + auVar49.piece<8,4>();
    auVar48.piece<0,12>() = auVar41.piece<0,12>();
    auVar48.piece<12,4>() = auVar41.piece<12,4>() + auVar49.piece<12,4>();
    auVar47 = auVar42;
  } while (iVar16 < 10);
  return;
}


// 0x0479478 (0xb0 bytes)
/* Moby 825 */

void UpdateMoby_825(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  Vec4 local_30;
  f32 local_20;
  f32 local_1c;
  float local_18;
  f32 local_14;
  
  local_30.x = 0.0;
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_30.w = 0.0;
  local_20 = (moby->rotation).x;
  local_1c = (moby->rotation).y;
  moby->drawDistance = 0xff;
  local_18 = (moby->rotation).z;
  moby->updateDistance = -1;
  local_14 = (moby->rotation).w;
  pvVar1 = moby->pVar;
  dVar2 = (double)FastWrapRot(local_18,g_FrameTime * 0.47996554);
  (moby->rotation).z = (float)dVar2;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar1 + 0x20),&local_30,ZEXT48(&stack0x00000000) - 0x20,
             (longlong)(int)moby + 0x40);
  return;
}



// game/update/moby346.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3510b0-0x3513cc
#include "game/update/moby346.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03510b0 (0x318 bytes)
void M346_003510b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar12;
  longlong lVar11;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong unaff_r24;
  int iVar16;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  longlong lVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  undefined4 in_vr31_32_0;
  int iVar27;
  undefined4 in_vr31_32_1;
  int iVar28;
  undefined4 in_vr31_32_2;
  int iVar29;
  undefined4 in_vr31_32_3;
  int iVar30;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar20 = uVar7 - 0x1c0;
  puVar3 = (ulonglong *)lVar20;
  *puVar3 = uVar7;
  puVar3[0x3a] = in_LR;
  lVar5 = uVar7 - 0x50;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar3[0x36] = unaff_r30;
  puVar6 = *(undefined4 **)(param_1 + 0x78);
  puVar3[0x33] = unaff_r27;
  puVar3[0x37] = unaff_r31;
  puVar3[0x35] = unaff_r29;
  puVar3[0x34] = unaff_r28;
  puVar3[0x32] = unaff_r26;
  puVar3[0x31] = unaff_r25;
  puVar3[0x30] = unaff_r24;
  uVar8 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar3[0x27] = uVar8;
  uVar8 = GetEffectTex(0x29);
  puVar3[0x25] = uVar8;
  pfVar9 = (float *)(uVar7 - 0x150);
  FastMtx4Identity(pfVar9);
  *(undefined4 *)((int)puVar3 + 0xac) = 0x3f800000;
  puVar10 = &DAT_008401c0;
  lVar18 = uVar7 - 0x110;
  *(undefined4 *)(puVar3 + 0x15) = *puVar6;
  puVar13 = &DAT_00840240;
  puVar6 = &DAT_00840244;
  lVar19 = 4;
  lVar11 = lVar18;
  lVar14 = lVar20;
  lVar15 = lVar20;
  do {
    *(undefined4 *)((int)lVar15 + 0xf0) = 0x40808080;
    lVar15 = lVar15 + 4;
    puVar12 = (undefined4 *)lVar11;
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
    puVar12[2] = puVar10[2];
    puVar4 = puVar10 + 3;
    puVar10 = puVar10 + 4;
    puVar12[3] = *puVar4;
    uVar1 = *puVar13;
    lVar11 = lVar11 + 0x10;
    uVar2 = *puVar6;
    puVar13 = puVar13 + 2;
    *(undefined4 *)((int)lVar14 + 0x100) = uVar1;
    puVar6 = puVar6 + 2;
    *(undefined4 *)((int)lVar14 + 0x104) = uVar2;
    lVar14 = lVar14 + 8;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  auVar24 = loadVectorLeftIndexed(lVar5,0x3510a8);
  iVar16 = 0x82;
  iVar30 = 2;
  iVar28 = 2;
  iVar29 = 2;
  iVar27 = 2;
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  do {
    auVar26 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    iVar17 = 0x154;
    auVar22 = loadVectorLeftIndexed(4,0x3510a8);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      uVar1 = DAT_008401c4;
      auVar21 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      *(undefined4 *)(puVar3 + 0x16) = DAT_008401c0;
      uVar2 = DAT_008401c8;
      *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
      uVar1 = DAT_008401cc;
      *(undefined4 *)(puVar3 + 0x17) = uVar2;
      uVar2 = DAT_008401d0;
      *(undefined4 *)((int)puVar3 + 0xbc) = uVar1;
      uVar1 = DAT_008401d4;
      *(undefined4 *)(puVar3 + 0x18) = uVar2;
      uVar2 = DAT_008401d8;
      *(undefined4 *)((int)puVar3 + 0xc4) = uVar1;
      uVar1 = DAT_008401dc;
      *(undefined4 *)(puVar3 + 0x19) = uVar2;
      uVar2 = DAT_008401e0;
      *(undefined4 *)((int)puVar3 + 0xcc) = uVar1;
      uVar1 = DAT_008401e4;
      *(undefined4 *)(puVar3 + 0x1a) = uVar2;
      uVar2 = DAT_008401e8;
      *(undefined4 *)((int)puVar3 + 0xd4) = uVar1;
      uVar1 = DAT_008401ec;
      *(undefined4 *)(puVar3 + 0x1b) = uVar2;
      uVar2 = DAT_008401f0;
      *(undefined4 *)((int)puVar3 + 0xdc) = uVar1;
      uVar1 = DAT_008401f4;
      *(undefined4 *)(puVar3 + 0x1c) = uVar2;
      uVar2 = DAT_008401f8;
      *(undefined4 *)((int)puVar3 + 0xe4) = uVar1;
      uVar1 = DAT_008401fc;
      *(undefined4 *)(puVar3 + 0x1d) = uVar2;
      *(undefined4 *)((int)puVar3 + 0xec) = uVar1;
      uVar1 = storeVectorElementWordIndexed(auVar26,0xa0,lVar20);
      *(undefined4 *)(puVar3 + 0x14) = uVar1;
      uVar2 = EffectTexHeaders;
      uVar1 = storeVectorElementWordIndexed(auVar21,0xa4,lVar20);
      *(undefined4 *)((int)puVar3 + 0xa4) = uVar1;
      FastDrawQuad(uVar7 - 0x110,uVar7 - 0x150,0,uVar2,9);
      iVar17 = iVar17 + 2;
      auVar21.piece<0,4>() = auVar22.piece<0,4>() + iVar27;
      auVar21.piece<8,8>() = auVar22.piece<8,8>();
      auVar21.piece<4,4>() = auVar22.piece<4,4>() + iVar28;
      auVar23.piece<0,8>() = auVar21.piece<0,8>();
      auVar23.piece<12,4>() = auVar22.piece<12,4>();
      auVar23.piece<8,4>() = auVar22.piece<8,4>() + iVar29;
      auVar22.piece<0,12>() = auVar23.piece<0,12>();
      auVar22.piece<12,4>() = auVar23.piece<12,4>() + iVar30;
    } while (iVar17 < 0x18b);
    iVar16 = iVar16 + 2;
    auVar26.piece<0,4>() = auVar24.piece<0,4>() + iVar27;
    auVar26.piece<8,8>() = auVar24.piece<8,8>();
    auVar26.piece<4,4>() = auVar24.piece<4,4>() + iVar28;
    auVar25.piece<0,8>() = auVar26.piece<0,8>();
    auVar25.piece<12,4>() = auVar24.piece<12,4>();
    auVar25.piece<8,4>() = auVar24.piece<8,4>() + iVar29;
    auVar24.piece<0,12>() = auVar25.piece<0,12>();
    auVar24.piece<12,4>() = auVar25.piece<12,4>() + iVar30;
  } while (iVar16 < 0xb9);
  FastMtx4Identity(pfVar9);
  lVar20 = 4;
  puVar6 = &DAT_00840200;
  do {
    puVar13 = (undefined4 *)lVar18;
    *puVar13 = *puVar6;
    puVar13[1] = puVar6[1];
    puVar13[2] = puVar6[2];
    puVar10 = puVar6 + 3;
    puVar6 = puVar6 + 4;
    puVar13[3] = *puVar10;
    lVar18 = lVar18 + 0x10;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return;
}


// 0x03513c8 (0x4 bytes)
/* Moby 346 */

MobyInstance * UpdateMoby_346(MobyInstance *moby)

{
  return moby;
}



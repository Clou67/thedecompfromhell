// game/update/moby1230.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x213920-0x214100
#include "game/update/moby1230.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0213920 (0x4ac bytes)
void M1230_00213920(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 0x200;
  puVar8 = (ulonglong *)lVar24;
  *puVar8 = uVar18;
  puVar8[0x42] = in_LR;
  puVar8[0x39] = in_f25;
  puVar8[0x3a] = in_f26;
  puVar8[0x3b] = in_f27;
  puVar8[0x3c] = in_f28;
  puVar8[0x3d] = in_f29;
  puVar8[0x3e] = in_f30;
  puVar8[0x3f] = in_f31;
  puVar8[0x37] = unaff_r30;
  puVar8[0x36] = unaff_r29;
  puVar8[0x35] = unaff_r28;
  puVar8[0x38] = unaff_r31;
  iVar7 = *(int *)(param_1 + 0x78);
  iVar25 = iVar7 + 0x10;
  FastVecSub(uVar18 - 0x150,iVar25,param_1 + 0x10);
  fVar1 = *(float *)((int)puVar8 + 0xb4);
  fVar2 = *(float *)(puVar8 + 0x16);
  fVar3 = *(float *)(puVar8 + 0x17);
  *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)((int)puVar8 + 0xbc);
  dVar32 = 0.0;
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar8 + 0xa4) = uVar4;
  *(undefined4 *)(puVar8 + 0x15) = uVar5;
  *(undefined4 *)((int)puVar8 + 0xac) = uVar6;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar10 = 0.5 / fVar9;
  dVar28 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar28 = (double)(fVar2 * fVar10);
  }
  dVar29 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar29 = (double)(fVar1 * fVar10);
  }
  dVar31 = dVar32;
  if (0.0 - fVar9 < 0.0) {
    dVar31 = (double)(fVar3 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar28 = (double)(fVar2 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar29 = (double)(fVar1 * fVar10);
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar31 = (double)(fVar3 * fVar10);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar28;
  *(float *)((int)puVar8 + 0x74) = (float)dVar29;
  *(float *)(puVar8 + 0xf) = (float)dVar31;
  FastVecAddSelf(uVar18 - 0x140,uVar18 - 0x160,uVar18 - 400);
  fVar14 = GameCamera.posZ;
  fVar12 = GameCamera.posY;
  fVar9 = GameCamera.posX;
  fVar2 = *(float *)(puVar8 + 0x14) - GameCamera.posX;
  fVar10 = *(float *)((int)puVar8 + 0xa4) - GameCamera.posY;
  fVar1 = *(float *)(iVar7 + 0x18);
  fVar3 = *(float *)(puVar8 + 0x14) - *(float *)(iVar7 + 0x10);
  fVar13 = *(float *)(puVar8 + 0x15) - GameCamera.posZ;
  fVar11 = *(float *)((int)puVar8 + 0xa4) - *(float *)(iVar7 + 0x14);
  *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0xac);
  fVar1 = *(float *)(puVar8 + 0x15) - fVar1;
  *(float *)(puVar8 + 0x10) = fVar2;
  *(float *)((int)puVar8 + 0x84) = fVar10;
  *(float *)(puVar8 + 0x11) = fVar13;
  fVar9 = *(float *)(iVar7 + 0x10) - fVar9;
  fVar17 = fVar1 * fVar2 - fVar3 * fVar13;
  *(float *)(puVar8 + 0x12) = fVar9;
  fVar12 = *(float *)(iVar7 + 0x14) - fVar12;
  fVar15 = fVar3 * fVar10 - fVar11 * fVar2;
  fVar16 = fVar11 * fVar13 - fVar1 * fVar10;
  *(float *)((int)puVar8 + 0x94) = fVar12;
  fVar14 = *(float *)(iVar7 + 0x18) - fVar14;
  fVar13 = fVar3 * fVar12 - fVar11 * fVar9;
  fVar10 = fVar11 * fVar14 - fVar1 * fVar12;
  fVar3 = fVar1 * fVar9 - fVar3 * fVar14;
  *(undefined4 *)((int)puVar8 + 0x9c) = 0;
  *(undefined4 *)((int)puVar8 + 0x8c) = 0;
  dVar29 = (double)SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
  dVar31 = (double)SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar3 * fVar3);
  fVar1 = (float)(0.10000000149011612 / dVar29);
  fVar2 = (float)(0.10000000149011612 / dVar31);
  dVar28 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar28 = (double)(fVar16 * fVar1);
  }
  dVar27 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar27 = (double)(fVar17 * fVar1);
  }
  dVar30 = dVar32;
  if (dVar32 - dVar29 < 0.0) {
    dVar30 = (double)(fVar15 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar28 = (double)(fVar16 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar27 = (double)(fVar17 * fVar1);
  }
  if (dVar29 - dVar32 < 0.0) {
    dVar30 = (double)(fVar15 * fVar1);
  }
  *(float *)(puVar8 + 0x10) = (float)dVar28;
  *(float *)((int)puVar8 + 0x84) = (float)dVar27;
  *(float *)(puVar8 + 0x11) = (float)dVar30;
  dVar28 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar28 = (double)(fVar10 * fVar2);
  }
  dVar29 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar29 = (double)(fVar3 * fVar2);
  }
  dVar27 = dVar32;
  if (dVar32 - dVar31 < 0.0) {
    dVar27 = (double)(fVar13 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar28 = (double)(fVar10 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar29 = (double)(fVar3 * fVar2);
  }
  if (dVar31 - dVar32 < 0.0) {
    dVar27 = (double)(fVar13 * fVar2);
  }
  *(float *)(puVar8 + 0x12) = (float)dVar28;
  *(float *)((int)puVar8 + 0x94) = (float)dVar29;
  *(float *)(puVar8 + 0x13) = (float)dVar27;
  uVar19 = GetEffectTex(0xe);
  puVar8[0x31] = uVar19;
  uVar19 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar8[0x32] = uVar19;
  uVar19 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar8[0x30] = uVar19;
  uVar19 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar8[0x33] = uVar19;
  *(undefined4 *)((int)puVar8 + 0x15c) = 0x80243278;
  lVar21 = uVar18 - 0xa0;
  *(undefined4 *)(puVar8 + 0x2b) = 0x80243278;
  lVar20 = uVar18 - 0x9c;
  *(undefined4 *)((int)puVar8 + 0x154) = 0x80243278;
  puVar23 = &DAT_00654fd0;
  puVar22 = &DAT_00654fd4;
  *(undefined4 *)(puVar8 + 0x2a) = 0x80243278;
  lVar26 = 2;
  do {
    uVar4 = *puVar22;
    *(undefined4 *)((int)lVar24 + 0x160) = *puVar23;
    uVar5 = puVar23[2];
    *(undefined4 *)((int)lVar24 + 0x164) = uVar4;
    uVar4 = puVar22[2];
    puVar23 = puVar23 + 4;
    *(undefined4 *)((int)lVar21 + 8) = uVar5;
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar4;
    lVar21 = lVar21 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  FastVecSub(uVar18 - 0x130,uVar18 - 0x160,uVar18 - 0x180);
  *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(puVar8 + 0x1a);
  *(undefined4 *)((int)puVar8 + 0x114) = *(undefined4 *)((int)puVar8 + 0xd4);
  *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(puVar8 + 0x1b);
  *(undefined4 *)((int)puVar8 + 0x11c) = *(undefined4 *)((int)puVar8 + 0xdc);
  FastVecAdd(uVar18 - 0x120,uVar18 - 0x160,uVar18 - 0x180);
  *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)(puVar8 + 0x1c);
  *(undefined4 *)((int)puVar8 + 0x124) = *(undefined4 *)((int)puVar8 + 0xe4);
  *(undefined4 *)(puVar8 + 0x25) = *(undefined4 *)(puVar8 + 0x1d);
  *(undefined4 *)((int)puVar8 + 300) = *(undefined4 *)((int)puVar8 + 0xec);
  FastVecSub(uVar18 - 0x110,iVar25,uVar18 - 0x170);
  *(undefined4 *)(puVar8 + 0x26) = *(undefined4 *)(puVar8 + 0x1e);
  *(undefined4 *)((int)puVar8 + 0x134) = *(undefined4 *)((int)puVar8 + 0xf4);
  *(undefined4 *)(puVar8 + 0x27) = *(undefined4 *)(puVar8 + 0x1f);
  *(undefined4 *)((int)puVar8 + 0x13c) = *(undefined4 *)((int)puVar8 + 0xfc);
  FastVecAdd(uVar18 - 0x100,iVar25,uVar18 - 0x170);
  *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(puVar8 + 0x20);
  *(undefined4 *)((int)puVar8 + 0x144) = *(undefined4 *)((int)puVar8 + 0x104);
  *(undefined4 *)(puVar8 + 0x29) = *(undefined4 *)(puVar8 + 0x21);
  *(undefined4 *)((int)puVar8 + 0x14c) = *(undefined4 *)((int)puVar8 + 0x10c);
  FastDrawQuad(uVar18 - 0xf0,0,0,EffectTexHeaders,9);
  return;
}


// 0x0213dd8 (0x104 bytes)
void M1230_00213dd8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  u8 uVar5;
  MobyInstance *pMVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  auVar8.piece<0,4>() = param_2;
  auVar8.piece<4,4>() = param_2;
  auVar8.piece<8,4>() = param_2;
  auVar8.piece<12,4>() = param_2;
  uVar5 = (char)(ZERO_MASK(param_2)) + '\x02';
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    *(u8 *)(param_1 + 0x20) = uVar5;
  }
  else {
    puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar4 != (ushort *)0x0) {
      auVar7 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar8 = loadVectorLeftIndexed(0x30,0x213dd0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = vectorAddFloatingPoint
                         (auVar7,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      pMVar6 = g_MobyInstance;
      do {
        uVar3 = *puVar4 & 0x7fff;
        if (pMVar6[uVar3].oClass == 0x4ce) {
          auVar7 = ZEXT416(0xffffffff);
          auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
          pMVar6[uVar3].state = uVar5;
          pMVar6 = g_MobyInstance;
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
          auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar7);
          auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
          auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar2 = storeVectorElementWordIndexed
                            (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,4,
                             ZEXT48(g_MobyInstance[uVar3].pVar));
          *(undefined4 *)((int)g_MobyInstance[uVar3].pVar + 4U & 0xfffffffc) = uVar2;
        }
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x0213f08 (0x1f8 bytes)
/* Moby 1230 */

void UpdateMoby_1230(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  
  bVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = *pfVar3;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2 * fVar5;
    fVar6 = fVar2 * fVar4;
    uVar7 = FastLerpColor
                      ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff8020ff20,0xffffffff80208020);
    moby->glowRgba = uVar7;
    dVar9 = (double)FastWrapRot(*pfVar3,g_FrameTime * 6.2831855);
    *pfVar3 = (float)dVar9;
  }
  else if (bVar1 < 3) {
    fVar2 = *pfVar3;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2 * fVar5;
    fVar6 = fVar2 * fVar4;
    uVar7 = FastLerpColor
                      ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff802020ff,0xffffffff80202080);
    moby->glowRgba = uVar7;
    dVar9 = (double)FastWrapRot(*pfVar3,g_FrameTime * 12.566371);
    *pfVar3 = (float)dVar9;
    iVar8 = FastDecTimerS32(pfVar3 + 1);
    if (iVar8 != 0) {
      M1230_00213dd8(moby,0);
    }
  }
  return;
}



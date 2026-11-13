// game/update/moby1394.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x269d18-0x26a250
#include "game/update/moby1394.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1257.h"
#include "idol/fastfunc.h"

// 0x0269d18 (0x448 bytes)
void M1394_00269d18(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar13;
  ulonglong uVar11;
  undefined4 uVar14;
  longlong lVar12;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar22;
  ulonglong unaff_r29;
  longlong lVar23;
  ulonglong unaff_r30;
  int iVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar23 = uVar9 - 0x370;
  puVar4 = (ulonglong *)lVar23;
  *puVar4 = uVar9;
  puVar4[0x70] = in_LR;
  puVar4[0x6b] = in_f29;
  puVar4[0x6c] = in_f30;
  puVar4[0x6d] = in_f31;
  lVar7 = uVar9 - 0x50;
  puVar8 = (undefined4 *)lVar7;
  puVar8[3] = in_vr31_32_3;
  puVar8[2] = in_vr31_32_2;
  puVar8[1] = in_vr31_32_1;
  *puVar8 = in_vr31_32_0;
  puVar4[0x6a] = unaff_r31;
  puVar4[0x68] = unaff_r29;
  puVar4[0x69] = unaff_r30;
  puVar4[0x67] = unaff_r28;
  puVar4[0x66] = unaff_r27;
  iVar24 = *(int *)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar9 - 0x300,param_1 + 0xc0);
  uVar14 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar4 + 0xa4) = uVar14;
  *(undefined4 *)(puVar4 + 0x15) = uVar2;
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  fVar1 = DAT_0079cae8 * g_FrameTime + *(float *)(iVar24 + 8);
  dVar25 = (double)*(float *)(iVar24 + 0xc);
  *(float *)(iVar24 + 8) = fVar1;
  if (1.0 < fVar1) {
    *(float *)(iVar24 + 8) = fVar1 - 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  dVar27 = 0.25;
  auVar30 = loadVectorLeftIndexed(8,0x269d04);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  dVar26 = (double)((48.0 - SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1)) * 0.25);
  if ((dVar26 <= dVar25) && (dVar25 = dVar26, dVar26 < 0.0)) {
    dVar25 = 0.0;
  }
  iVar22 = 0;
  auVar31 = ZEXT416(0);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  do {
    uVar10 = GetEffectTex(0xe);
    iVar13 = (int)lVar23;
    *(undefined8 *)(iVar13 + 0x128) = uVar10;
    uVar10 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar13 + 0x130) = uVar10;
    uVar10 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    *(undefined8 *)(iVar13 + 0x120) = uVar10;
    uVar10 = idol_draw::PackCmd(DAT_00fa4348,DAT_0079caec,DAT_00fa434c,DAT_0079caf0,0x80);
    *(undefined8 *)(iVar13 + 0x138) = uVar10;
    auVar29 = vectorConvertFromSignedFixedPointWord(auVar31,0);
    puVar4[0x5e] = (longlong)iVar22;
    dVar26 = (double)(float)((double)(longlong)puVar4[0x5e] * dVar27 +
                            (double)*(float *)(iVar24 + 8));
    iVar13 = FastDoubleToInt(dVar26);
    puVar4[0x5e] = (longlong)iVar13;
    dVar26 = (double)(float)(dVar26 - (double)(longlong)puVar4[0x5e]);
    uVar11 = FastLerpColor(dVar26,DAT_0079cad0,DAT_0079cad4);
    uVar14 = FastLerpColor(dVar25,uVar11 & 0xffffff);
    uVar21 = 0;
    lVar20 = 0x79caf4;
    puVar8 = &DAT_0079cb20;
    uVar11 = lVar23 + 0xb0U & 0xffffffff;
    puVar19 = &DAT_0079caf8;
    lVar12 = lVar23 + 0x100;
    lVar15 = lVar23;
    lVar17 = lVar23;
    lVar18 = lVar23;
    do {
      auVar28 = loadVectorLeftIndexed(lVar7,lVar20);
      uVar2 = *puVar19;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar28);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar12);
      *(undefined4 *)lVar12 = uVar3;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar2;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      puVar16 = (undefined4 *)uVar11;
      *puVar16 = *puVar8;
      puVar16[1] = puVar8[1];
      puVar16[2] = puVar8[2];
      puVar16[3] = puVar8[3];
      iVar13 = (int)lVar15;
      if ((uVar21 & 1) == 0) {
        fVar1 = -(float)((double)DAT_0079cadc * dVar26 - (double)*(float *)(iVar13 + 0xb8));
      }
      else {
        fVar1 = (float)((double)DAT_0079cadc * dVar26 + (double)*(float *)(iVar13 + 0xb8));
      }
      uVar21 = uVar21 + 1;
      *(float *)(iVar13 + 0xb8) = fVar1;
      uVar11 = uVar11 + 0x10;
      lVar20 = lVar20 + 8;
      lVar12 = lVar12 + 8;
      lVar18 = lVar18 + 8;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      lVar15 = lVar15 + 0x10;
      puVar8 = puVar8 + 4;
    } while ((int)uVar21 < 4);
    iVar22 = iVar22 + 1;
    lVar23 = lVar23 + 0x90;
    auVar29.piece<0,4>() = auVar31.piece<0,4>() + 1;
    auVar29.piece<8,8>() = auVar31.piece<8,8>();
    auVar29.piece<4,4>() = auVar31.piece<4,4>() + 1;
    auVar28.piece<0,8>() = auVar29.piece<0,8>();
    auVar28.piece<12,4>() = auVar31.piece<12,4>();
    auVar28.piece<8,4>() = auVar31.piece<8,4>() + 1;
    auVar31.piece<0,12>() = auVar28.piece<0,12>();
    auVar31.piece<12,4>() = auVar28.piece<12,4>() + 1;
  } while (iVar22 < 4);
  iVar24 = 0;
  do {
    uVar14 = EffectTexHeaders;
    lVar23 = uVar9 - 0x300;
    *(float *)(puVar4 + 0x15) = *(float *)(puVar4 + 0x15) + DAT_0079cad8;
    FastDrawQuad(uVar9 - 0x2c0,lVar23,0,uVar14,9);
    FastDrawQuad(uVar9 - 0x230,lVar23,0,EffectTexHeaders,9);
    FastDrawQuad(uVar9 - 0x1a0,lVar23,0,EffectTexHeaders,9);
    FastDrawQuad(uVar9 - 0x110,lVar23,0,EffectTexHeaders,9);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 3);
  return;
}


// 0x026a168 (0xe8 bytes)
/* Moby 1394 */

void UpdateMoby_1394(MobyInstance *moby)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  
  puVar1 = (undefined4 *)moby->pVar;
  dVar4 = 60.0;
  if (moby->state == 0) {
    uVar2 = FastDoubleToInt((double)(animationSpeed * (float)puVar1[1] * 60.0));
    *puVar1 = uVar2;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) && (iVar3 = FastDecTimerS32(puVar1), iVar3 != 0)) {
    uVar2 = FastDoubleToInt
                      ((double)(animationSpeed * (float)((double)DAT_0079cb60 * dVar4)));
    *puVar1 = uVar2;
    FUN_00229438((longlong)(int)moby,(longlong)(int)moby + 0x10);
  }
  return;
}



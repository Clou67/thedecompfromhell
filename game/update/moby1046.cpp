// game/update/moby1046.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x19d958-0x19eb88
#include "game/update/moby1046.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1045.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x019d958 (0x450 bytes)
void M1046_0019d958(void)

{
  float fVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar10;
  undefined4 *puVar14;
  longlong lVar13;
  uint uVar15;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x150);
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x23] = unaff_r29;
  puVar3[0x25] = unaff_r31;
  puVar3[0x24] = unaff_r30;
  puVar3[0x22] = unaff_r28;
  puVar3[0x21] = unaff_r27;
  uVar8 = GetEffectTex(0x15);
  puVar3[0x1d] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar3[0x1c] = uVar8;
  uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar3[0x1f] = uVar8;
  fVar1 = DAT_00e5ff60;
  DAT_00e5ff60 = DAT_00e5ff60 + 0.001;
  dVar22 = 7.0;
  if (7.0 < DAT_00e5ff60) {
    DAT_00e5ff60 = DAT_00e5ff60 - 7.0;
  }
  dVar21 = 0.30000001192092896;
  dVar20 = (double)(fVar1 + 0.3);
  uVar9 = idol_draw::Blend(1,5,1,3,0,0,1,2);
  SetGSReg(0x16,uVar9);
  uVar9 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  SetGSReg(0x21,uVar9);
  uVar8 = 1;
  do {
    dVar19 = (double)DAT_00e5ff64;
    DAT_00e5ff64 = (float)(dVar19 + (double)DAT_00740390);
    if (dVar22 < (double)DAT_00e5ff64) {
      DAT_00e5ff64 = (float)((double)DAT_00e5ff64 - dVar22);
    }
    iVar16 = 0;
    iVar17 = 0;
    do {
      iVar16 = iVar16 + 1;
      iVar5 = (int)uVar8;
      iVar4 = iVar5 * 0x140;
      puVar11 = (undefined4 *)((int)&DAT_00e61340 + iVar4 + iVar17);
      *(undefined4 *)(puVar3 + 0xe) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0x74) = puVar11[1];
      *(undefined4 *)(puVar3 + 0xf) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0x7c) = puVar11[3];
      puVar12 = &DAT_00e61340 + (iVar16 % 0x14) * 4 + iVar5 * 0x50;
      puVar14 = (undefined4 *)(iVar17 + 0xe61200 + iVar4);
      puVar11 = (undefined4 *)((iVar16 % 0x14) * 0x10 + 0xe61200 + iVar4);
      *(undefined4 *)(puVar3 + 0x10) = *puVar12;
      *(undefined4 *)((int)puVar3 + 0x84) = puVar12[1];
      iVar4 = (int)((uVar8 & 0xffffffff) << 1);
      *(undefined4 *)(puVar3 + 0x11) = puVar12[2];
      *(undefined4 *)((int)puVar3 + 0x8c) = puVar12[3];
      *(undefined4 *)(puVar3 + 0x12) = *puVar14;
      *(undefined4 *)((int)puVar3 + 0x94) = puVar14[1];
      *(undefined4 *)(puVar3 + 0x13) = puVar14[2];
      *(undefined4 *)((int)puVar3 + 0x9c) = puVar14[3];
      *(undefined4 *)(puVar3 + 0x14) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0xa4) = puVar11[1];
      sVar2 = *(short *)((int)&DAT_00e61328 + iVar4);
      *(undefined4 *)(puVar3 + 0x15) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0xac) = puVar11[3];
      lVar18 = 2;
      lVar10 = uVar7 - 0x150;
      do {
        lVar13 = (longlong)sVar2;
        lVar13 = lVar13 + (lVar13 >> 0x3f & -lVar13);
        sVar2 = *(short *)(iVar4 + 0xe61326);
        uVar15 = (uint)((lVar13 + (0x40 - lVar13 >> 0x3f & 0x40U - lVar13) & 0xffffffff) << 0x18) |
                 0x404040;
        *(uint *)((int)lVar10 + 0xb0) = uVar15;
        *(uint *)((int)lVar10 + 0xb4) = uVar15;
        lVar10 = lVar10 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (iVar5 == 1) {
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x20404040;
        *(undefined4 *)(puVar3 + 0x17) = 0x20404040;
      }
      else if (iVar5 == 9) {
        *(undefined4 *)((int)puVar3 + 0xb4) = 0x404040;
        *(undefined4 *)(puVar3 + 0x16) = 0x404040;
      }
      *(float *)(puVar3 + 0x18) = (float)dVar20;
      *(float *)((int)puVar3 + 0xc4) = (float)dVar19;
      *(float *)(puVar3 + 0x19) = (float)dVar20;
      *(float *)((int)puVar3 + 0xd4) = (float)dVar19;
      fVar1 = (float)(dVar19 + 0.05000000074505806);
      dVar19 = (double)fVar1;
      *(float *)(puVar3 + 0x1a) = (float)(dVar20 - dVar21);
      *(float *)(puVar3 + 0x1b) = (float)(dVar20 - dVar21);
      uVar6 = EffectTexHeaders;
      *(float *)((int)puVar3 + 0xcc) = fVar1;
      *(float *)((int)puVar3 + 0xdc) = fVar1;
      FastDrawQuad(uVar7 - 0xe0,0,0,uVar6,9);
      iVar17 = iVar17 + 0x10;
    } while (iVar16 < 0x14);
    uVar8 = uVar8 + 1;
    dVar20 = (double)(float)(dVar20 + dVar21);
  } while ((int)uVar8 < 10);
  uVar9 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar9);
  uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar9);
  return;
}


// 0x019dda8 (0x14 bytes)
void M1046_0019dda8(void)

{
  DAT_0074052c = 0x10000;
  return;
}


// 0x019ddd0 (0x19c bytes)
MobyInstance *
Spawn_Moby1046
          (double param_1,double param_2,double param_3,double param_4,double param_5,float param_6,
          f32 *param_7)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  MobyInstance *pMoby;
  float in_r9;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  pMoby = CreateMoby(0x416);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pfVar2 = (float *)pMoby->pVar;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar2[5] = param_6;
    *pfVar2 = (float)param_1;
    pfVar2[1] = (float)param_2;
    pfVar2[4] = (float)param_3;
    pfVar2[3] = (float)param_4;
    pfVar2[2] = (float)param_1;
    pfVar2[6] = in_r9;
    pfVar2[7] = (float)param_5;
    fVar1 = (pMoby->pos).x;
    pMoby->modeBits = pMoby->modeBits | DRAW_TRANSPARENT_WEIRD;
    fVar3 = (pMoby->pos).y - GameCamera.posY;
    fVar1 = fVar1 - GameCamera.posX;
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    GameCamera.shake.strength = -(SQRT(fVar1 * fVar1 + fVar3 * fVar3) * 0.01 - 0.3);
    auVar4 = loadVectorLeftIndexed(8,0x19ddc0);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.shake.time =
         storeVectorElementWordIndexed
                   (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x168,0x9513c0);
    UpdateMobyTransform(pMoby);
    PlayMobySound(0,0,pMoby);
  }
  return pMoby;
}


// 0x019e010 (0x824 bytes)
// strings: 0019df78: '?fff_q' (raw)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M1046_0019e010(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar19;
  undefined8 uVar18;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar20;
  ulonglong unaff_r29;
  ulonglong uVar21;
  ulonglong unaff_r30;
  uint uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double extraout_f1;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
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
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x310;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[100] = in_LR;
  puVar10[0x5c] = in_f26;
  puVar10[0x5d] = in_f27;
  puVar10[0x5e] = in_f28;
  puVar10[0x5f] = in_f29;
  puVar10[0x60] = in_f30;
  puVar10[0x61] = in_f31;
  puVar10[0x5b] = unaff_r31;
  puVar10[0x59] = unaff_r29;
  puVar10[0x56] = unaff_r26;
  uVar21 = 0x80;
  puVar10[0x58] = unaff_r28;
  iVar11 = (int)param_1;
  bVar3 = *(byte *)(iVar11 + 0x23);
  uVar6 = *(uint *)(iVar11 + 0x78);
  uVar20 = (ulonglong)uVar6;
  puVar10[0x57] = unaff_r27;
  uVar7 = *(undefined4 *)(uVar6 + 0x18);
  puVar10[0x5a] = unaff_r30;
  puVar10[0x55] = unaff_r25;
  puVar10[0x54] = unaff_r24;
  uVar14 = GetEffectTex(uVar7);
  uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar16 = SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  uVar17 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1d] = uVar14;
  puVar10[0x1e] = uVar15;
  uVar22 = 0;
  puVar10[0x1c] = uVar16;
  puVar10[0x1f] = uVar17;
  dVar28 = 0.0;
  auVar30 = loadVectorLeftIndexed(4,0x19df70);
  auVar33 = ZEXT416(0);
  auVar51 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar33 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  dVar26 = 1.0;
  *(undefined1 (*) [16])(puVar10 + 0x38) = auVar51;
  *(undefined1 (*) [16])(puVar10 + 0x36) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  dVar29 = dVar28;
  do {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    uVar19 = (bVar3 + 1) * 0x330000 & 0x3f000000 | (uint)(uVar21 << 8) | (uint)(uVar21 << 0x10) |
             0x80;
    auVar30 = loadVectorLeftIndexed(8,uVar20);
    *(uint *)((int)puVar10 + 0xbc) = uVar19;
    *(uint *)(puVar10 + 0x17) = uVar19;
    *(uint *)((int)puVar10 + 0xb4) = uVar19;
    *(uint *)(puVar10 + 0x16) = uVar19;
    auVar33 = loadVectorRightIndexed(0x18,uVar20);
    auVar30 = auVar30 | auVar33;
    auVar33 = loadVectorLeftIndexed(8,0x19df70);
    dVar23 = (double)*(float *)(uVar6 + 8);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorMultiplyAddFloatingPoint(auVar30,auVar51,auVar34);
    auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar33,auVar30);
    auVar30 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar30);
    auVar36 = loadVectorLeftIndexed(0x10,uVar20);
    auVar37 = loadVectorRightIndexed(0x20,uVar20);
    dVar27 = (double)*(float *)(uVar6 + 0x10);
    auVar33 = loadVectorLeftIndexed(0xc,0x19df70);
    auVar36 = auVar36 | auVar37;
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = *(undefined1 (*) [16])(puVar10 + 0x36);
    dVar24 = -(double)(float)(dVar29 * 0.5 - dVar26);
    auVar33 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar51,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar37);
    auVar30 = vectorConditionalSelect(auVar53,auVar34,auVar30);
    dVar25 = -(double)(float)(dVar29 * 0.8999999761581421 - dVar23);
    if (dVar23 - 0.8999999761581421 < 0.0) {
      dVar25 = (double)(float)(dVar23 * dVar29);
    }
    uVar18 = FastIntToDouble(worldUpdateTime);
    dVar23 = (double)FastFrac((double)(float)(extraout_f1 /
                                                       (double)(float)(dVar29 * 40.0 + 40.0)),uVar18
                                        ,uVar13 - 0x180);
    uVar19 = uVar22 & 1;
    uVar22 = uVar22 + 1;
    puVar10[0x3a] = (longlong)(int)(((uint)(ZERO_MASK(uVar19)) & 0xfffffffe) + 1);
    *(float *)(puVar10 + 0x18) = (float)(dVar23 * (double)(longlong)puVar10[0x3a]);
    *(float *)(puVar10 + 0x1a) = (float)(dVar23 * (double)(longlong)puVar10[0x3a]);
    dVar23 = (double)FastIntToDouble
                               (((longlong)(int)uVar22 + -5 >> 0x3f & (longlong)(int)uVar22 - 5U) +
                                5);
    fVar2 = (float)((double)*(float *)(puVar10 + 0x18) + dVar23);
    auVar50 = loadVectorLeftIndexed(0x10,param_1);
    auVar41 = vectorSubtractFloatingPoint(auVar50,auVar30);
    *(float *)(puVar10 + 0x19) = fVar2;
    *(float *)(puVar10 + 0x1b) = fVar2;
    *(float *)((int)puVar10 + 0xc4) = (float)dVar28;
    *(float *)((int)puVar10 + 0xcc) = (float)dVar28;
    *(undefined4 *)((int)puVar10 + 0xd4) = 0x3f800000;
    *(undefined4 *)((int)puVar10 + 0xdc) = 0x3f800000;
    auVar34 = loadVectorLeftIndexed(0x14,0x19df70);
    auVar53 = loadVectorLeftIndexed(0x18,0x19df70);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar38);
    auVar52 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar51,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                         auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
    auVar33 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = loadVectorLeftIndexed(0x14,param_1);
    auVar34 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar52,auVar50);
    uVar7 = storeVectorElementWordIndexed
                      (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar10 + 0x11) = uVar7;
    uVar7 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0xa8,lVar1);
    *(undefined4 *)(puVar10 + 0x15) = uVar7;
    auVar33 = _DAT_0019dfc0;
    auVar34 = _DAT_0019dfa0;
    auVar46 = vectorPermute(auVar53,auVar36,_DAT_0019dfb0);
    auVar53 = vectorPermute(auVar39,*(undefined1 (*) [16])(puVar10 + 0x10),_DAT_0019dfb0);
    auVar44 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0xe),auVar39,_DAT_0019df90);
    auVar41 = vectorPermute(auVar41,auVar36,_DAT_0019dfb0);
    auVar39 = vectorPermute(auVar38,*(undefined1 (*) [16])(puVar10 + 0x14),_DAT_0019dfb0);
    auVar53 = vectorPermute(auVar46,auVar53,_DAT_0019dfc0);
    auVar46 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x12),auVar38,_DAT_0019df90);
    *(float *)(puVar10 + 0x34) = fVar2;
    auVar39 = vectorPermute(auVar41,auVar39,auVar33);
    *(undefined1 (*) [16])(puVar10 + 0x20) = auVar44;
    fVar4 = *(float *)(iVar11 + 0x10);
    *(undefined1 (*) [16])(puVar10 + 0x22) = auVar53;
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    *(undefined1 (*) [16])(puVar10 + 0x24) = auVar46;
    *(undefined1 (*) [16])(puVar10 + 0x26) = auVar39;
    uVar7 = *(undefined4 *)(iVar11 + 0x14);
    *(float *)((int)puVar10 + 0x1a4) = fVar2;
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    *(float *)(puVar10 + 0x35) = fVar2;
    *(float *)((int)puVar10 + 0x1ac) = fVar2;
    auVar52 = vectorMultiplyAddFloatingPoint(auVar30,auVar52,auVar33);
    dVar23 = (double)*(float *)(iVar11 + 0x18);
    auVar33 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x34),
                            *(undefined1 (*) [16])(puVar10 + 0x38),_DAT_0019dfd0);
    auVar37 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x34),auVar37,_DAT_0019dfd0);
    fVar5 = -(float)(dVar25 * -(double)(float)(dVar29 * 0.029999999329447746 - 0.9599999785423279) -
                    (double)fVar4);
    fVar2 = (float)(dVar24 * dVar27 + dVar23);
    auVar33 = vectorPermute(auVar33,*(undefined1 (*) [16])(puVar10 + 0x18),auVar34);
    auVar34 = vectorPermute(auVar37,*(undefined1 (*) [16])(puVar10 + 0x1a),auVar34);
    *(undefined4 *)((int)puVar10 + 0x14c) = *(undefined4 *)((int)puVar10 + 0xbc);
    *(undefined4 *)(puVar10 + 0x29) = *(undefined4 *)(puVar10 + 0x17);
    *(undefined4 *)((int)puVar10 + 0x144) = *(undefined4 *)((int)puVar10 + 0xb4);
    *(undefined4 *)(puVar10 + 0x28) = *(undefined4 *)(puVar10 + 0x16);
    *(undefined1 (*) [16])(puVar10 + 0x2a) = auVar33;
    *(undefined1 (*) [16])(puVar10 + 0x2c) = auVar34;
    *(undefined4 *)((int)puVar10 + 0x17c) = *(undefined4 *)((int)puVar10 + 0xec);
    *(undefined4 *)(puVar10 + 0x2f) = *(undefined4 *)(puVar10 + 0x1d);
    *(undefined4 *)((int)puVar10 + 0x174) = *(undefined4 *)((int)puVar10 + 0xe4);
    *(undefined4 *)(puVar10 + 0x2e) = *(undefined4 *)(puVar10 + 0x1c);
    *(undefined4 *)((int)puVar10 + 0x18c) = *(undefined4 *)((int)puVar10 + 0xfc);
    *(undefined4 *)(puVar10 + 0x31) = *(undefined4 *)(puVar10 + 0x1f);
    *(undefined4 *)((int)puVar10 + 0x184) = *(undefined4 *)((int)puVar10 + 0xf4);
    *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(puVar10 + 0x1e);
    auVar33 = loadVectorLeftIndexed(0x70,0x19df70);
    fVar4 = (float)((double)fVar4 - dVar25);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = vectorSubtractFloatingPoint
                        (auVar38,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar8 = storeVectorElementWordIndexed(auVar33,0x118,lVar1);
    *(undefined4 *)(puVar10 + 0x23) = uVar8;
    uVar8 = storeVectorElementWordIndexed(auVar33,0x108,lVar1);
    *(undefined4 *)(puVar10 + 0x21) = uVar8;
    auVar33 = loadVectorLeftIndexed(0x74,0x19df70);
    dVar27 = -2.8274335861206055;
    dVar24 = 3.455751895904541;
    auVar34 = loadVectorLeftIndexed(0x7c,0x19df70);
    auVar53 = loadVectorLeftIndexed(0x80,0x19df70);
    auVar39 = loadVectorLeftIndexed(0x84,0x19df70);
    auVar44 = loadVectorLeftIndexed(0x88,0x19df70);
    auVar46 = loadVectorLeftIndexed(0x8c,0x19df70);
    auVar41 = loadVectorLeftIndexed(0x90,0x19df70);
    auVar38 = loadVectorLeftIndexed(0x94,0x19df70);
    auVar37 = loadVectorLeftIndexed(0x98,0x19df70);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar54 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar53 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar46 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    dVar25 = 0.3141592741012573;
    auVar33 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar8 = uVar7;
    do {
      uVar12 = EffectTexHeaders;
      auVar31 = vectorAddFloatingPoint(auVar54,auVar34);
      auVar37 = ZEXT416(0xffffffff);
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar32 = vectorSubtractFloatingPoint(auVar53,auVar54);
      auVar37 = ZEXT416(0xffffffff);
      auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar35 = vectorSubtractFloatingPoint(auVar39,auVar54);
      auVar37 = ZEXT416(0xffffffff);
      auVar47 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorSubtractFloatingPoint(auVar53,auVar31);
      auVar40 = vectorSubtractFloatingPoint(auVar39,auVar31);
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar54);
      auVar36 = vectorConditionalSelect(auVar32,auVar54,auVar36);
      auVar32 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar50 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar35);
      auVar50 = vectorConditionalSelect(auVar35,auVar36,auVar50);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar35 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar31);
      auVar37 = vectorConditionalSelect(auVar37,auVar31,auVar35);
      auVar42 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = ZEXT416(0xffffffff);
      auVar31 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar40);
      auVar37 = vectorConditionalSelect(auVar40,auVar37,auVar36);
      auVar35 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar36 = ZEXT416(0xffffffff);
      auVar40 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar32);
      auVar36 = ZEXT416(0xffffffff);
      auVar32 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar36 = ZEXT416(0xffffffff);
      auVar43 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar50,auVar50,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar31,auVar37,auVar35);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar32,auVar50,auVar42);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar40);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar44,auVar37);
      auVar35 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar45);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar50);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar31,auVar40,auVar43);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar37);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar32,auVar45,auVar47);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar45,auVar46,auVar50);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar42,auVar35);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar37);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar43,auVar40);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar50);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar31,auVar38,auVar36);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar37);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar52,auVar49);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar49);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar48);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar50,auVar30,auVar48);
      auVar36 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar50 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0xa4,lVar1);
      *(undefined4 *)((int)puVar10 + 0xa4) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x84,lVar1);
      *(undefined4 *)((int)puVar10 + 0x84) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,lVar1);
      *(undefined4 *)(puVar10 + 0x14) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar10 + 0x10) = uVar9;
      *(undefined4 *)((int)puVar10 + 0x9c) = *(undefined4 *)((int)puVar10 + 0xac);
      *(float *)(puVar10 + 0x13) = (float)dVar23;
      *(undefined4 *)((int)puVar10 + 0x94) = uVar8;
      *(float *)(puVar10 + 0x12) = fVar4;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
      *(float *)(puVar10 + 0xf) = fVar2;
      *(undefined4 *)((int)puVar10 + 0x74) = uVar7;
      *(float *)(puVar10 + 0xe) = fVar5;
      FastDrawQuad(uVar13 - 0x2a0,0,1,uVar12,9);
      *(undefined4 *)(puVar10 + 0x20) = *(undefined4 *)(puVar10 + 0x22);
      *(undefined4 *)((int)puVar10 + 0x104) = *(undefined4 *)((int)puVar10 + 0x114);
      *(undefined4 *)(puVar10 + 0x21) = *(undefined4 *)(puVar10 + 0x23);
      *(undefined4 *)((int)puVar10 + 0x10c) = *(undefined4 *)((int)puVar10 + 0x11c);
      *(undefined4 *)(puVar10 + 0x24) = *(undefined4 *)(puVar10 + 0x26);
      *(undefined4 *)((int)puVar10 + 0x124) = *(undefined4 *)((int)puVar10 + 0x134);
      *(undefined4 *)(puVar10 + 0x25) = *(undefined4 *)(puVar10 + 0x27);
      *(undefined4 *)((int)puVar10 + 300) = *(undefined4 *)((int)puVar10 + 0x13c);
      *(undefined4 *)(puVar10 + 0x26) = *(undefined4 *)(puVar10 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x134) = *(undefined4 *)((int)puVar10 + 0xa4);
      *(undefined4 *)(puVar10 + 0x22) = *(undefined4 *)(puVar10 + 0x10);
      uVar7 = EffectTexHeaders;
      *(undefined4 *)((int)puVar10 + 0x114) = *(undefined4 *)((int)puVar10 + 0x84);
      FastDrawQuad(uVar13 - 0x210,0,1,uVar7,9);
      dVar27 = (double)(float)(dVar27 + dVar25);
      fVar5 = *(float *)(puVar10 + 0x10);
      uVar7 = *(undefined4 *)((int)puVar10 + 0x84);
      fVar2 = *(float *)(puVar10 + 0x11);
      auVar54 = vectorAddFloatingPoint(auVar54,auVar33);
      fVar4 = *(float *)(puVar10 + 0x14);
      auVar36 = loadVectorLeftIndexed(0x14,param_1);
      uVar8 = *(undefined4 *)((int)puVar10 + 0xa4);
      dVar23 = (double)*(float *)(puVar10 + 0x15);
      auVar50 = loadVectorLeftIndexed(0x10,param_1);
    } while (dVar27 < dVar24);
    uVar21 = uVar21 - 0xb & 0xff;
    auVar33 = loadVectorLeftIndexed(0x9c,0x19df70);
    dVar29 = (double)(float)(dVar29 + 0.10000000149011612);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar51 = vectorAddFloatingPoint
                        (auVar51,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
  } while (dVar29 < dVar26);
  return;
}


// 0x019e848 (0x1b8 bytes)
// inlined: FastRSqrt @0x19e96c
void M1046_0019e848(MobyInstance *param_1,MobyInstance *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  undefined4 local_28;
  f32 local_24;
  float local_20;
  float local_1c;
  float local_18;
  f32 local_14;
  
  fVar1 = (param_2->pos).z;
  fVar2 = (param_1->pos).z;
  if (fVar2 < *(float *)(param_3 + 0x10) * 0.3 + fVar1) {
    fVar3 = (param_2->pos).y;
    fVar4 = (param_1->pos).y;
    fVar5 = (param_2->pos).x;
    fVar7 = fVar3 - fVar4;
    fVar6 = (param_1->pos).x;
    fVar8 = fVar5 - fVar6;
    if (ABS(SQRT(fVar8 * fVar8 + fVar7 * fVar7) - *(float *)(param_3 + 8)) < 0.3) {
      fVar6 = fVar6 - fVar5;
      fVar2 = fVar2 - fVar1;
      local_24 = (param_1->pos).w;
      fVar4 = fVar4 - fVar3;
      local_2c = 0.0;
      fVar1 = fVar2 * fVar2 + fVar6 * fVar6 + fVar4 * fVar4;
      fVar5 = SQRT(fVar1);
      fVar3 = (*(float *)(param_3 + 8) - 0.05) / fVar5;
      local_20 = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_20 = fVar6 * fVar3;
      }
      local_1c = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_1c = fVar4 * fVar3;
      }
      local_18 = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_18 = fVar2 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_20 = fVar6 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_1c = fVar4 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_18 = fVar2 * fVar3;
      }
      local_30 = local_2c;
      if (fVar5 != 0.0) {
        local_2c = 1.0 / SQRT(fVar1);
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_30 = fVar6 * local_2c;
        local_2c = fVar4 * local_2c;
      }
      local_28 = 0x3f800000;
      local_14 = local_24;
      CollDamageMobyDirect
                (*(float *)(param_3 + 0x1c),param_1,param_2,0x10001,param_3,&local_20,&local_30);
    }
  }
  return;
}


// 0x019ea18 (0x170 bytes)
/* Moby 1046 */

void UpdateMoby_1046(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  s8 sVar4;
  double dVar5;
  
  pfVar2 = (float *)moby->pVar;
  fVar1 = pfVar2[2];
  pfVar2[2] = fVar1 + pfVar2[3];
  moby->scale = fVar1 + pfVar2[3];
  dVar5 = (double)((pfVar2[2] - *pfVar2) / (pfVar2[1] - *pfVar2));
  if (0.20000000298023224 <= dVar5) {
    sVar4 = -0x80;
    if (0.800000011920929 < dVar5) {
      sVar4 = FastDoubleToInt((double)((float)(1.0 - dVar5) * 5.0 * 127.0));
    }
  }
  else {
    sVar4 = FastDoubleToInt((double)((float)(dVar5 * 5.0) * 127.0));
  }
  moby->alpha = sVar4;
  if (dVar5 < 1.0) {
    RegisterFuncForMoby(&PTR_M1046_0019e010_007086b8,moby);
    M1046_0019e848(g_heroMobyPtr,moby,pfVar2);
    for (iVar3 = MobyUpdateChainStart; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x28)) {
      M1046_0019e848(iVar3,moby,pfVar2);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}



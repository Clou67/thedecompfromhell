// game/update/moby1024.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x18cd14-0x18e008
// shared update function UpdateMoby_{1024_1302}; registered for oClasses 1024, 1302
#include "game/update/moby1024.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x018cd14 (0x14 bytes)
void M1302_0018cd14(void)

{
  DAT_0073fa14 = 0x10000;
  return;
}


// 0x018cd58 (0x794 bytes)
// strings: 0073fa58: '@&ff' (raw)

void M1302_0018cd58(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulonglong *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong unaff_r20;
  int *piVar39;
  ulonglong unaff_r21;
  int *piVar40;
  ulonglong unaff_r22;
  int *piVar41;
  ulonglong unaff_r23;
  int *piVar42;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar43;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  double dVar51;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar52;
  ulonglong in_f28;
  double dVar53;
  ulonglong in_f29;
  double dVar54;
  ulonglong in_f30;
  double dVar55;
  double dVar56;
  ulonglong in_f31;
  double dVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  
  uVar37 = ZEXT48(&stack0x00000000);
  lVar1 = uVar37 - 0x250;
  puVar31 = (ulonglong *)lVar1;
  *puVar31 = uVar37;
  puVar31[0x4c] = in_LR;
  puVar31[0x38] = in_f14;
  puVar31[0x39] = in_f15;
  puVar31[0x3a] = in_f16;
  puVar31[0x3b] = in_f17;
  puVar31[0x3c] = in_f18;
  puVar31[0x3d] = in_f19;
  puVar31[0x3e] = in_f20;
  puVar31[0x3f] = in_f21;
  puVar31[0x40] = in_f22;
  puVar31[0x41] = in_f23;
  puVar31[0x42] = in_f24;
  puVar31[0x43] = in_f25;
  puVar31[0x44] = in_f26;
  puVar31[0x45] = in_f27;
  puVar31[0x46] = in_f28;
  puVar31[0x47] = in_f29;
  puVar31[0x48] = in_f30;
  puVar31[0x49] = in_f31;
  puVar31[0x37] = unaff_r31;
  puVar31[0x35] = unaff_r29;
  puVar31[0x36] = unaff_r30;
  *(undefined4 *)(puVar31 + 0xe) = 0;
  uVar28 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  fVar2 = GameCamera.rot.radius;
  puVar31[0x28] = ZEXT48(&GameCamera);
  *(float *)(puVar31 + 0xf) = fVar2;
  puVar31[0x34] = unaff_r28;
  puVar31[0x33] = unaff_r27;
  puVar31[0x32] = unaff_r26;
  puVar31[0x31] = unaff_r25;
  puVar31[0x30] = unaff_r24;
  puVar31[0x2f] = unaff_r23;
  puVar31[0x2e] = unaff_r22;
  puVar31[0x2d] = unaff_r21;
  puVar31[0x2c] = unaff_r20;
  puVar31[0x2b] = 0;
  FastEulerToMtx(uVar37 - 0x1d0,uVar37 - 0x1e0);
  fVar2 = *(float *)(uVar28 + 0x1c) + 0.01;
  dVar44 = (double)fVar2;
  puVar31[0x2a] = 0x3f847ae140000000;
  *(float *)(uVar28 + 0x1c) = fVar2;
  puVar31[0x29] = 0x3ff0000000000000;
  if (1.0 < dVar44) {
    *(float *)(uVar28 + 0x1c) = (float)(dVar44 - (double)puVar31[0x29]);
  }
  uVar38 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar31[0x24] = uVar38;
  uVar38 = SCE_GS_SET_TEX1(1,0,0,0,0,0,0);
  puVar31[0x26] = uVar38;
  uVar38 = idol_draw::PackCmd(0,1,0,1,0x40);
  puVar31[0x27] = uVar38;
  uVar38 = GetEffectTex(0x18);
  puVar31[0x25] = uVar38;
  piVar42 = &DAT_0073fb3c;
  piVar41 = &DAT_0073fb40;
  piVar40 = &DAT_0073fb44;
  piVar39 = &DAT_0073fb48;
  iVar43 = 0;
  do {
    iVar29 = *piVar42;
    fVar2 = *(float *)(puVar31 + 0x12);
    iVar32 = iVar29 * 0x10;
    fVar3 = *(float *)(puVar31 + 0x10);
    fVar4 = *(float *)((int)puVar31 + 0x94);
    fVar5 = *(float *)(iVar32 + 0x73fa44);
    fVar6 = *(float *)(iVar32 + 0x73fa40);
    fVar7 = *(float *)(puVar31 + 0x14);
    fVar8 = *(float *)(iVar32 + 0x73fa48);
    fVar9 = *(float *)(puVar31 + 0x13);
    fVar10 = *(float *)((int)puVar31 + 0x84);
    iVar32 = *piVar41;
    fVar11 = *(float *)(puVar31 + 0x11);
    iVar33 = iVar32 * 0x10;
    fVar12 = *(float *)((int)puVar31 + 0xa4);
    fVar13 = *(float *)(puVar31 + 0x15);
    fVar14 = *(float *)(iVar33 + 0x73fa44);
    fVar15 = *(float *)(iVar33 + 0x73fa40);
    fVar16 = *(float *)(iVar33 + 0x73fa48);
    iVar33 = *piVar40;
    iVar30 = *piVar39;
    iVar34 = iVar33 * 0x10;
    fVar17 = *(float *)(param_1 + 0x10);
    iVar35 = iVar30 * 0x10;
    fVar18 = *(float *)(iVar34 + 0x73fa40);
    fVar19 = *(float *)(iVar34 + 0x73fa44);
    fVar20 = *(float *)(iVar34 + 0x73fa48);
    fVar21 = *(float *)(iVar35 + 0x73fa40);
    fVar22 = *(float *)(iVar35 + 0x73fa44);
    fVar23 = *(float *)(iVar35 + 0x73fa48);
    fVar24 = *(float *)(param_1 + 0x14);
    fVar25 = *(float *)(param_1 + 0x18);
    *(float *)(puVar31 + 0x16) =
         (fVar7 * fVar8 + fVar3 * fVar6 + fVar2 * fVar5) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar26 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x17) = fVar25 + fVar13 * fVar8 + fVar11 * fVar6 + fVar9 * fVar5;
    *(float *)((int)puVar31 + 0xb4) =
         (fVar12 * fVar8 + fVar10 * fVar6 + fVar4 * fVar5) * fVar26 + fVar24;
    *(float *)(puVar31 + 0x18) =
         (fVar7 * fVar16 + fVar3 * fVar15 + fVar2 * fVar14) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar5 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x19) = fVar25 + fVar13 * fVar16 + fVar11 * fVar15 + fVar9 * fVar14;
    *(float *)((int)puVar31 + 0xc4) =
         (fVar12 * fVar16 + fVar10 * fVar15 + fVar4 * fVar14) * fVar5 + fVar24;
    *(float *)(puVar31 + 0x1a) =
         (fVar7 * fVar20 + fVar3 * fVar18 + fVar2 * fVar19) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar5 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x1b) = fVar25 + fVar13 * fVar20 + fVar11 * fVar18 + fVar9 * fVar19;
    *(float *)((int)puVar31 + 0xd4) =
         (fVar12 * fVar20 + fVar10 * fVar18 + fVar4 * fVar19) * fVar5 + fVar24;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar29 * 8);
    fVar5 = *(float *)(&DAT_0073fad4 + iVar29 * 8);
    *(float *)(puVar31 + 0x1c) =
         (fVar7 * fVar23 + fVar3 * fVar21 + fVar2 * fVar22) * *(float *)(uVar28 + 0x24) + fVar17;
    fVar2 = *(float *)(uVar28 + 0x24);
    *(float *)(puVar31 + 0x1d) = fVar25 + fVar13 * fVar23 + fVar11 * fVar21 + fVar9 * fVar22;
    *(undefined4 *)(puVar31 + 0x20) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar32 * 8);
    fVar3 = *(float *)(&DAT_0073fad4 + iVar32 * 8);
    *(float *)((int)puVar31 + 0xe4) =
         (fVar12 * fVar23 + fVar10 * fVar21 + fVar4 * fVar22) * fVar2 + fVar24;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)(puVar31 + 0x21) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fad0 + iVar33 * 8);
    fVar4 = *(float *)(&DAT_0073fad4 + iVar33 * 8);
    *(float *)((int)puVar31 + 0x104) = fVar5 + fVar2;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)(puVar31 + 0x22) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fb18 + iVar32 * 4);
    *(undefined4 *)(puVar31 + 0x1e) = *(undefined4 *)(&DAT_0073fb18 + iVar29 * 4);
    *(undefined4 *)((int)puVar31 + 0xf4) = uVar27;
    uVar27 = *(undefined4 *)(&DAT_0073fb18 + iVar30 * 4);
    *(undefined4 *)(puVar31 + 0x1f) = *(undefined4 *)(&DAT_0073fb18 + iVar33 * 4);
    *(float *)((int)puVar31 + 0x10c) = fVar3 + fVar2;
    fVar2 = *(float *)(uVar28 + 0x1c);
    *(undefined4 *)((int)puVar31 + 0xfc) = uVar27;
    fVar3 = *(float *)(&DAT_0073fad4 + iVar30 * 8);
    *(undefined4 *)(puVar31 + 0x23) = *(undefined4 *)(&DAT_0073fad0 + iVar30 * 8);
    uVar27 = EffectTexHeaders;
    *(float *)((int)puVar31 + 0x114) = fVar4 + fVar2;
    *(float *)((int)puVar31 + 0x11c) = fVar3 + *(float *)(uVar28 + 0x1c);
    FastDrawQuad(uVar37 - 0x1a0,0,1,uVar27,9);
    iVar43 = iVar43 + 1;
    piVar42 = piVar42 + 4;
    piVar41 = piVar41 + 4;
    piVar40 = piVar40 + 4;
    piVar39 = piVar39 + 4;
  } while (iVar43 < 4);
  uVar38 = GetEffectTex(0x1b);
  fVar2 = (float)((double)*(float *)(uVar28 + 0x20) + (double)puVar31[0x2a]);
  dVar51 = (double)fVar2;
  dVar45 = (double)puVar31[0x29];
  puVar31[0x25] = uVar38;
  fVar3 = *(float *)(uVar28 + 0x24);
  *(float *)(uVar28 + 0x20) = fVar2;
  dVar44 = dVar51;
  if (dVar45 < dVar51) {
    *(undefined4 *)(uVar28 + 0x20) = 0;
    dVar51 = (double)puVar31[0x2b];
    dVar44 = (double)*(float *)(uVar28 + 0x20);
  }
  dVar57 = (double)(float)(dVar44 * 1.399999976158142 + 1.100000023841858);
  uVar27 = *(undefined4 *)((int)puVar31[0x28] + 0x158);
  dVar55 = (double)((float)(dVar51 * -1.2000000476837158) * fVar3);
  dVar53 = (double)((float)(dVar44 * -1.2000000476837158) * fVar3);
  *(undefined4 *)(puVar31 + 0xe) = 0;
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  dVar54 = (double)((float)(dVar44 * 1.2000000476837158) * fVar3);
  *(undefined4 *)(puVar31 + 0xf) = uVar27;
  dVar52 = (double)(float)(dVar57 - 0.20000000298023224);
  FastEulerToMtx(uVar37 - 0x1d0,uVar37 - 0x1e0);
  dVar45 = (double)*(float *)(puVar31 + 0x12);
  dVar51 = (double)*(float *)((int)puVar31 + 0x94);
  dVar46 = (double)*(float *)(puVar31 + 0x13);
  dVar47 = (double)*(float *)(puVar31 + 0x10);
  dVar48 = (double)*(float *)((int)puVar31 + 0x84);
  dVar49 = (double)*(float *)(puVar31 + 0x11);
  dVar50 = (double)*(float *)(puVar31 + 0x14);
  dVar44 = (double)*(float *)((int)puVar31 + 0xa4);
  dVar56 = (double)*(float *)(puVar31 + 0x15);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x18);
  *(float *)(puVar31 + 0x16) =
       fVar2 + (float)(dVar50 * dVar57 +
                      (double)(float)(dVar47 * dVar55 + (double)(float)(dVar45 * dVar55)));
  *(float *)((int)puVar31 + 0xb4) =
       fVar3 + (float)(dVar44 * dVar57 +
                      (double)(float)(dVar48 * dVar55 + (double)(float)(dVar51 * dVar55)));
  *(float *)(puVar31 + 0x17) =
       fVar4 + (float)(dVar56 * dVar57 +
                      (double)(float)(dVar49 * dVar55 + (double)(float)(dVar46 * dVar55)));
  *(float *)(puVar31 + 0x18) =
       fVar2 + (float)(dVar50 * dVar52 +
                      (double)(float)(dVar47 * dVar54 + (double)(float)(dVar45 * dVar53)));
  *(float *)((int)puVar31 + 0xc4) =
       fVar3 + (float)(dVar44 * dVar52 +
                      (double)(float)(dVar48 * dVar54 + (double)(float)(dVar51 * dVar53)));
  *(float *)(puVar31 + 0x19) =
       fVar4 + (float)(dVar56 * dVar52 +
                      (double)(float)(dVar49 * dVar54 + (double)(float)(dVar46 * dVar53)));
  *(float *)(puVar31 + 0x1a) =
       fVar2 + (float)(dVar50 * dVar57 +
                      (double)(float)(dVar47 * dVar53 + (double)(float)(dVar45 * dVar54)));
  *(float *)((int)puVar31 + 0xd4) =
       fVar3 + (float)(dVar44 * dVar57 +
                      (double)(float)(dVar48 * dVar53 + (double)(float)(dVar51 * dVar54)));
  *(float *)(puVar31 + 0x1b) =
       fVar4 + (float)(dVar56 * dVar57 +
                      (double)(float)(dVar49 * dVar53 + (double)(float)(dVar46 * dVar54)));
  *(float *)(puVar31 + 0x1c) =
       fVar2 + (float)(dVar50 * dVar52 +
                      (double)(float)(dVar47 * dVar54 + (double)(float)(dVar45 * dVar54)));
  *(float *)((int)puVar31 + 0xe4) =
       fVar3 + (float)(dVar44 * dVar52 +
                      (double)(float)(dVar48 * dVar54 + (double)(float)(dVar51 * dVar54)));
  *(float *)(puVar31 + 0x1d) =
       fVar4 + (float)(dVar56 * dVar52 +
                      (double)(float)(dVar49 * dVar54 + (double)(float)(dVar46 * dVar54)));
  uVar36 = EffectTexHeaders;
  auVar58 = loadVectorLeftIndexed(0x20,(ulonglong)uVar28);
  auVar59 = loadVectorRightIndexed(0x30,(ulonglong)uVar28);
  auVar60 = loadVectorLeftIndexed(8,0x18cd28);
  auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar61 = loadVectorLeftIndexed(0x20,0x18cd28);
  auVar59 = vectorSubtractFloatingPoint
                      (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,
                       auVar58 | auVar59);
  auVar58 = auVar61 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar60 = ZEXT416(0xffffffff);
  auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar62 = loadVectorLeftIndexed(0x24,0x18cd28);
  auVar61 = vectorShiftLeftIntegerWord(auVar60,auVar60);
  auVar60 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar63 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar60 = loadVectorLeftIndexed(0x28,0x18cd28);
  auVar59 = vectorMultiplyAddFloatingPoint
                      (auVar59,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,auVar61
                      );
  auVar58 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar60 = ZEXT416(0xfffffff0);
  auVar61 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  auVar60 = ZEXT416(0);
  auVar62 = vectorRotateLeftIntegerWord(auVar63,auVar61);
  auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
  auVar62 = vectorMultiplySumSignedHalfWordModulo
                      (auVar59,auVar62,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60
                      );
  auVar60 = vectorMultiplyOddUnsignedHalfWord(auVar59,auVar63);
  auVar61 = vectorShiftLeftIntegerWord(auVar62,auVar61);
  auVar59.piece<0,4>() = auVar61.piece<0,4>() + auVar60.piece<0,4>();
  auVar59.piece<8,8>() = auVar60.piece<8,8>();
  auVar59.piece<4,4>() = auVar61.piece<4,4>() + auVar60.piece<4,4>();
  auVar60.piece<0,8>() = 0;
  auVar60.piece<8,8>() = auVar59.piece<0,8>();
  auVar60 = (auVar60 << 0x40 | auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60) >>
            0x60 & (GPiece<16>)0xffffffff;
  auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf0,lVar1);
  *(undefined4 *)(puVar31 + 0x1e) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf4,lVar1);
  *(undefined4 *)((int)puVar31 + 0xf4) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xf8,lVar1);
  *(undefined4 *)(puVar31 + 0x1f) = uVar27;
  uVar27 = storeVectorElementWordIndexed(auVar60,0xfc,lVar1);
  *(undefined4 *)((int)puVar31 + 0xfc) = uVar27;
  *(undefined4 *)(puVar31 + 0x20) = 0;
  *(undefined4 *)((int)puVar31 + 0x104) = 0;
  *(undefined4 *)(puVar31 + 0x21) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x10c) = 0;
  *(undefined4 *)(puVar31 + 0x22) = 0;
  *(undefined4 *)((int)puVar31 + 0x114) = 0x3f800000;
  *(undefined4 *)(puVar31 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x11c) = 0x3f800000;
  FastDrawQuad(uVar37 - 0x1a0,0,1,uVar36,9);
  return;
}


// 0x018d4ec (0xd0 bytes)
uint M1302_0018d4ec(int param_1,MobyInstance *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  MOBY_OCLASSES MVar3;
  uint uVar4;
  
  MVar3 = param_2->oClass;
  bVar1 = param_2->state;
  uVar4 = (uint)bVar1;
  if (MVar3 == GUN_0542) {
    param_2->state = '\x02';
    sound_MobyPlay_oClass(0,0,param_2,0x434);
    uVar2 = *(undefined1 *)(param_1 + 0xb0);
    param_2->updateDistance = -1;
    uVar4 = SetLevelFlag(uVar2);
    return uVar4;
  }
  if (MVar3 != DOOR_0502) {
    if (MVar3 == PLATFORM_0404) {
      if (bVar1 != 1) {
        return uVar4;
      }
      param_2->state = '\x02';
      return 2;
    }
    if (MVar3 != DOOR_03F7) {
      return uVar4;
    }
  }
  if (bVar1 == 2) {
    param_2->state = '\x03';
    uVar4 = PlayMobySound(0,0,param_2);
  }
  return uVar4;
}


// shared update function, registered for oClasses 1024, 1302
// 0x018d608 (0x9ec bytes)
// strings: 0096c074: 'None'

/* Moby 1024
   Moby 1302 */

void UpdateMoby_1024(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_r7;
  int iVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  GPiece<16> auStack_b0;
  GPiece<16> auStack_a0;
  
  piVar12 = (int *)moby->pVar;
  if (*piVar12 != -1) {
    dVar18 = 360.0;
    dVar19 = 0.01745329238474369;
    dVar13 = (double)FastWrapRot
                               ((float)piVar12[10],
                                (360.0 / DAT_0073fb88) * 0.017453292 * g_FrameTime);
    dVar20 = 1.570796251296997;
    dVar21 = 3.141592502593994;
    fVar1 = (float)(dVar13 + 1.570796251296997);
    dVar22 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar24 = 0.008333025500178337;
    dVar25 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar27 = 0.5;
    piVar12[10] = (int)(float)dVar13;
    fVar6 = fVar5 * fVar5;
    fVar1 = fVar6 * fVar6 * fVar5;
    fVar4 = fVar6 * fVar1;
    uVar8 = FastLerpColor
                      ((double)((fVar6 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5 + 1.0) *
                               0.5),0xffffffff80464646,0xffffffff80828282);
    moby->glowRgba = uVar8;
    bVar2 = moby->state;
    if (bVar2 == 0) {
      piVar12[5] = piVar12[4];
      dVar13 = (double)MB_randRot();
      piVar12[6] = (int)(float)dVar13;
      dVar13 = (double)MB_randRot();
      piVar12[10] = (int)(float)dVar13;
      moby->state = '\x01';
      piVar12[9] = (int)DAT_0073fb90;
    }
    else if (bVar2 < 2) {
      local_100 = (moby->pos).x;
      local_fc = (moby->pos).y;
      local_f8 = (moby->pos).z;
      fVar1 = GameCamera.posZ - local_f8;
      local_f4 = (moby->pos).w;
      local_f8 = local_f8 + 2.75;
      fVar1 = SQRT(fVar1 * fVar1 +
                   (GameCamera.posX - local_100) * (GameCamera.posX - local_100) +
                   (GameCamera.posY - local_fc) * (GameCamera.posY - local_fc));
      if (32.0 <= fVar1) {
        fVar4 = (float)piVar12[9];
        if (36.0 < fVar1) {
          fVar4 = -(g_FrameTime * 2.0 - (float)piVar12[9]);
          piVar12[9] = (int)fVar4;
          if (fVar4 < 0.0) {
            piVar12[9] = 0;
            fVar4 = 0.0;
          }
        }
      }
      else {
        fVar4 = g_FrameTime * 2.0 + (float)piVar12[9];
        piVar12[9] = (int)fVar4;
        fVar1 = DAT_0073fb90;
        if (DAT_0073fb90 < fVar4) {
          piVar12[9] = (int)DAT_0073fb90;
          fVar4 = fVar1;
        }
      }
      if (0.0 < fVar4) {
        RegisterPostDraw(&PTR_M1302_0018cd58_00708478,moby);
        dVar13 = (double)FastWrapRot
                                   ((float)piVar12[6],
                                    (float)((double)(float)(dVar18 / (double)DAT_0073fb84) * dVar19)
                                    * g_FrameTime);
        dVar18 = (double)(float)(dVar13 + dVar20);
        piVar12[6] = (int)(float)dVar13;
        dVar13 = (double)(float)(dVar21 - dVar18);
        if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
          dVar13 = dVar18;
        }
        dVar19 = (double)(float)(dVar22 - dVar18);
        if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
          dVar19 = dVar13;
        }
        dVar13 = (double)(float)(dVar19 * dVar19);
        dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar19));
        dVar18 = (double)(float)(dVar13 * dVar16);
        local_f8 = DAT_0073fb80 *
                   (float)((double)(float)(dVar13 * dVar18) * dVar26 +
                          (double)(float)(dVar18 * dVar25 +
                                         (double)(float)(dVar16 * dVar24 +
                                                        (double)(float)((double)(float)(dVar13 * 
                                                  dVar19) * dVar23 + dVar19)))) + local_f8;
        dVar18 = (double)(float)((double)(float)piVar12[10] + dVar20);
        dVar13 = (double)(float)(dVar21 - dVar18);
        if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
          dVar13 = dVar18;
        }
        dVar19 = (double)(float)(dVar22 - dVar18);
        if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
          dVar19 = dVar13;
        }
        dVar13 = (double)(float)(dVar19 * dVar19);
        dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar19));
        dVar18 = (double)(float)(dVar13 * dVar16);
        uVar8 = FastDoubleToInt
                          ((double)(DAT_0073fb8c *
                                   (float)((double)(float)(dVar13 * dVar18) * dVar26 +
                                          (double)(float)(dVar18 * dVar25 +
                                                         (double)(float)(dVar16 * dVar24 +
                                                                        (double)(float)((double)(
                                                  float)(dVar13 * dVar19) * dVar23 + dVar19))))));
        uVar9 = (longlong)(int)uVar8 / 3 + ((longlong)(int)uVar8 >> 0x3f) & 0xffffffff;
        uVar8 = (int)(((longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0)
                      & 0xffffffff) << 8) + 0x7800U | uVar8 + 0x96 |
                (int)((uVar9 - ((longlong)(uVar9 << 0x20) >> 0x3f) & 0xffffffff) << 0x10) + 0xd0000U
                | 0x20000000;
        if (g_heroType == '\x01') {
          if (piVar12[5] < 10) {
            SpawnPart_41
                      ((float)dVar27,&local_100,moby,piVar12[5] + 2,uVar8,in_r7,0x7f,4,0xff);
          }
          else {
            dVar13 = 1.5707963705062866;
            dVar18 = -0.4000000059604645;
            dVar19 = 0.15000000596046448;
            if (Cheats[4] == '\0') {
              dVar16 = (double)FastWrapRot((moby->rotation).z,1.5707964);
              dVar14 = (double)(float)(dVar16 + dVar20);
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar14 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar17 = (double)(float)(dVar16 * dVar14);
              local_c0 = (float)((double)(float)((double)(float)(dVar16 * dVar17) * dVar26 +
                                                (double)(float)(dVar17 * dVar25 +
                                                               (double)(float)(dVar14 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar18);
              dVar14 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              local_b8 = 0;
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar17 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar14 = (double)(float)(dVar16 * dVar17);
              local_bc = (float)((double)(float)((double)(float)(dVar16 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar17 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar18);
              FastVecAddSelf(auStack_b0,&local_c0,&local_100);
              SpawnPart_41
                        ((float)dVar27,&local_c0,moby,piVar12[5] / 10 + 2,uVar8,in_r7,0x7f,4,0xff);
              dVar18 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              dVar20 = (double)(float)(dVar18 + dVar20);
              dVar18 = (double)(float)(dVar21 - dVar20);
              if (dVar20 - (double)(float)(dVar21 - dVar20) < 0.0) {
                dVar18 = dVar20;
              }
              dVar16 = (double)(float)(dVar22 - dVar20);
              if ((double)(float)(dVar22 - dVar20) - dVar18 < 0.0) {
                dVar16 = dVar18;
              }
              dVar18 = (double)(float)(dVar16 * dVar16);
              dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar16));
              dVar14 = (double)(float)(dVar18 * dVar20);
              local_c0 = (float)((double)(float)((double)(float)(dVar18 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar20 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar18 * dVar16) * dVar23 + dVar16)
                                                  ))) * dVar19);
              dVar18 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              local_b8 = 0;
              dVar13 = (double)(float)(dVar21 - dVar18);
              if (dVar18 - (double)(float)(dVar21 - dVar18) < 0.0) {
                dVar13 = dVar18;
              }
              dVar20 = (double)(float)(dVar22 - dVar18);
              if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
                dVar20 = dVar13;
              }
              dVar13 = (double)(float)(dVar20 * dVar20);
              dVar21 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar20));
              dVar18 = (double)(float)(dVar13 * dVar21);
              local_bc = (float)((double)(float)((double)(float)(dVar13 * dVar18) * dVar26 +
                                                (double)(float)(dVar18 * dVar25 +
                                                               (double)(float)(dVar21 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar13 * dVar20) * dVar23 + dVar20)
                                                  ))) * dVar19);
              FastVecAddSelf(auStack_a0,&local_c0,&local_100);
              uVar3 = piVar12[5];
              lVar10 = (longlong)((int)uVar3 / 10 + ((int)uVar3 >> 0x1f)) +
                       (ulonglong)(uVar3 >> 0x1f);
              lVar7 = lVar10 * 9;
              SpawnPart_41
                        ((float)dVar27,&local_c0,moby,(uVar3 - ((int)lVar10 + (int)lVar7)) + 2,uVar8
                         ,lVar7,0x7f,4,0xff);
            }
            else {
              dVar16 = (double)FastWrapRot((moby->rotation).z,1.5707964);
              dVar14 = (double)(float)(dVar16 + dVar20);
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar14 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar17 = (double)(float)(dVar16 * dVar14);
              local_f0 = (float)((double)(float)((double)(float)(dVar16 * dVar17) * dVar26 +
                                                (double)(float)(dVar17 * dVar25 +
                                                               (double)(float)(dVar14 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar19);
              dVar14 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              local_e8 = 0;
              dVar16 = (double)(float)(dVar21 - dVar14);
              if (dVar14 - (double)(float)(dVar21 - dVar14) < 0.0) {
                dVar16 = dVar14;
              }
              dVar15 = (double)(float)(dVar22 - dVar14);
              if ((double)(float)(dVar22 - dVar14) - dVar16 < 0.0) {
                dVar15 = dVar16;
              }
              dVar16 = (double)(float)(dVar15 * dVar15);
              dVar17 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
              dVar14 = (double)(float)(dVar16 * dVar17);
              local_ec = (float)((double)(float)((double)(float)(dVar16 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar17 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar16 * dVar15) * dVar23 + dVar15)
                                                  ))) * dVar19);
              FastVecAddSelf(auStack_e0,&local_f0,&local_100);
              SpawnPart_41
                        ((float)dVar27,&local_f0,moby,piVar12[5] / 10 + 2,uVar8,in_r7,0x7f,4,0xff);
              dVar19 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              dVar20 = (double)(float)(dVar19 + dVar20);
              dVar19 = (double)(float)(dVar21 - dVar20);
              if (dVar20 - (double)(float)(dVar21 - dVar20) < 0.0) {
                dVar19 = dVar20;
              }
              dVar16 = (double)(float)(dVar22 - dVar20);
              if ((double)(float)(dVar22 - dVar20) - dVar19 < 0.0) {
                dVar16 = dVar19;
              }
              dVar19 = (double)(float)(dVar16 * dVar16);
              dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar16));
              dVar14 = (double)(float)(dVar19 * dVar20);
              local_f0 = (float)((double)(float)((double)(float)(dVar19 * dVar14) * dVar26 +
                                                (double)(float)(dVar14 * dVar25 +
                                                               (double)(float)(dVar20 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar19 * dVar16) * dVar23 + dVar16)
                                                  ))) * dVar18);
              dVar19 = (double)FastWrapRot((moby->rotation).z,(float)dVar13);
              local_e8 = 0;
              dVar13 = (double)(float)(dVar21 - dVar19);
              if (dVar19 - (double)(float)(dVar21 - dVar19) < 0.0) {
                dVar13 = dVar19;
              }
              dVar20 = (double)(float)(dVar22 - dVar19);
              if ((double)(float)(dVar22 - dVar19) - dVar13 < 0.0) {
                dVar20 = dVar13;
              }
              dVar13 = (double)(float)(dVar20 * dVar20);
              dVar21 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar20));
              dVar19 = (double)(float)(dVar13 * dVar21);
              local_ec = (float)((double)(float)((double)(float)(dVar13 * dVar19) * dVar26 +
                                                (double)(float)(dVar19 * dVar25 +
                                                               (double)(float)(dVar21 * dVar24 +
                                                                              (double)(float)((
                                                  double)(float)(dVar13 * dVar20) * dVar23 + dVar20)
                                                  ))) * dVar18);
              FastVecAddSelf(auStack_d0,&local_f0,&local_100);
              uVar3 = piVar12[5];
              lVar10 = (longlong)((int)uVar3 / 10 + ((int)uVar3 >> 0x1f)) +
                       (ulonglong)(uVar3 >> 0x1f);
              lVar7 = lVar10 * 9;
              SpawnPart_41
                        ((float)dVar27,&local_f0,moby,(uVar3 - ((int)lVar10 + (int)lVar7)) + 2,uVar8
                         ,lVar7,0x7f,4,0xff);
            }
          }
        }
      }
      if ((piVar12[5] < 1) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        iVar11 = 0;
        do {
          if (*piVar12 != -1) {
            M1302_0018d4ec(moby,g_MobyInstance + *piVar12);
          }
          iVar11 = iVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar11 < 4);
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      fVar1 = -(g_FrameTime * 2.0 - (float)piVar12[9]);
      piVar12[9] = (int)fVar1;
      if (fVar1 < 0.0) {
        piVar12[9] = 0;
        fVar1 = 0.0;
      }
      if (0.0 < fVar1) {
        RegisterPostDraw(&PTR_M1302_0018cd58_00708478,moby);
      }
    }
  }
  return;
}


// 0x018dff4 (0x14 bytes)
void M1302_0018dff4(void)

{
  DAT_0073fbe0 = 0x10000;
  return;
}



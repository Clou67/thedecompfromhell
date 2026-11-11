// game/update/moby1099.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1bc828-0x1bd3e0
#include "game/update/moby1099.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01bc828 (0x40 bytes)
/* Moby 1099 */

void UpdateMoby_1099(MobyInstance *moby)

{
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


// 0x01bc8c8 (0xb18 bytes)
// strings: 00763bf8: '@&ff' (raw)

void M1099_001bc8c8(undefined8 param_1)

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
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  ulonglong *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined4 uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong unaff_r19;
  int *piVar40;
  ulonglong unaff_r20;
  int *piVar41;
  ulonglong unaff_r21;
  int *piVar42;
  ulonglong unaff_r22;
  int *piVar43;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar44;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar45;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  ulonglong in_f16;
  double dVar53;
  ulonglong in_f17;
  ulonglong in_f18;
  undefined8 uVar54;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar55;
  ulonglong in_f27;
  double dVar56;
  ulonglong in_f28;
  double dVar57;
  ulonglong in_f29;
  double dVar58;
  ulonglong in_f30;
  double dVar59;
  ulonglong in_f31;
  double dVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  GPiece<16> auVar66;
  GPiece<16> auVar67;
  GPiece<16> auVar68;
  GPiece<16> auVar69;
  GPiece<16> auVar70;
  GPiece<16> auVar71;
  GPiece<16> auVar72;
  GPiece<16> auVar73;
  GPiece<16> auVar74;
  GPiece<16> auVar75;
  GPiece<16> auVar76;
  GPiece<16> auVar77;
  GPiece<16> auVar78;
  GPiece<16> auVar79;
  GPiece<16> auVar80;
  GPiece<16> auVar81;
  GPiece<16> auVar82;
  GPiece<16> auVar83;
  GPiece<16> auVar84;
  GPiece<16> auVar85;
  
  uVar38 = ZEXT48(&stack0x00000000);
  lVar1 = uVar38 - 0x330;
  puVar31 = (ulonglong *)lVar1;
  *puVar31 = uVar38;
  puVar31[0x68] = in_LR;
  puVar31[0x56] = in_f16;
  puVar31[0x57] = in_f17;
  puVar31[0x58] = in_f18;
  puVar31[0x59] = in_f19;
  puVar31[0x5a] = in_f20;
  puVar31[0x5b] = in_f21;
  puVar31[0x5c] = in_f22;
  puVar31[0x5d] = in_f23;
  puVar31[0x5e] = in_f24;
  puVar31[0x5f] = in_f25;
  puVar31[0x60] = in_f26;
  puVar31[0x61] = in_f27;
  puVar31[0x62] = in_f28;
  puVar31[99] = in_f29;
  puVar31[100] = in_f30;
  puVar31[0x65] = in_f31;
  puVar31[0x55] = unaff_r31;
  puVar31[0x53] = unaff_r29;
  puVar31[0x54] = unaff_r30;
  *(undefined4 *)(puVar31 + 0xe) = 0;
  iVar32 = (int)param_1;
  iVar44 = *(int *)(iVar32 + 0x78);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  fVar2 = GameCamera.rot.radius;
  puVar31[0x2a] = ZEXT48(&GameCamera);
  *(float *)(puVar31 + 0xf) = fVar2;
  puVar31[0x52] = unaff_r28;
  puVar31[0x51] = unaff_r27;
  puVar31[0x50] = unaff_r26;
  puVar31[0x4f] = unaff_r25;
  puVar31[0x4e] = unaff_r24;
  puVar31[0x4d] = unaff_r23;
  puVar31[0x4c] = unaff_r22;
  puVar31[0x4b] = unaff_r21;
  puVar31[0x4a] = unaff_r20;
  puVar31[0x49] = unaff_r19;
  puVar31[0x2d] = 0;
  FastEulerToMtx(uVar38 - 0x2a0,uVar38 - 0x2c0);
  puVar31[0x2c] = 0x3f847ae140000000;
  DAT_00763d8c = DAT_00763d8c + 0.01;
  dVar46 = (double)DAT_00763d8c;
  puVar31[0x2b] = 0x3ff0000000000000;
  if (1.0 < dVar46) {
    DAT_00763d8c = (float)(dVar46 - (double)puVar31[0x2b]);
  }
  uVar39 = FUN_00502f08(0,0,0,0,0,0);
  puVar31[0x26] = uVar39;
  uVar39 = STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  puVar31[0x28] = uVar39;
  uVar39 = idol_draw::PackCmd(0,1,0,1,0x40);
  puVar31[0x29] = uVar39;
  uVar39 = GetEffectTex(0x18);
  puVar31[0x27] = uVar39;
  piVar43 = &DAT_00763cdc;
  piVar42 = &DAT_00763ce0;
  piVar41 = &DAT_00763ce4;
  piVar40 = &DAT_00763ce8;
  iVar45 = 0;
  do {
    iVar27 = *piVar43;
    fVar2 = *(float *)(puVar31 + 0x14);
    iVar33 = iVar27 * 0x10;
    fVar3 = *(float *)(puVar31 + 0x12);
    fVar4 = *(float *)((int)puVar31 + 0xa4);
    fVar5 = *(float *)(iVar33 + 0x763be4);
    fVar6 = *(float *)(iVar33 + 0x763be0);
    fVar7 = *(float *)(puVar31 + 0x16);
    fVar8 = *(float *)(iVar33 + 0x763be8);
    fVar9 = *(float *)(puVar31 + 0x15);
    fVar10 = *(float *)((int)puVar31 + 0x94);
    fVar11 = *(float *)(puVar31 + 0x13);
    iVar33 = *piVar42;
    fVar12 = *(float *)((int)puVar31 + 0xb4);
    iVar34 = iVar33 * 0x10;
    fVar13 = *(float *)(puVar31 + 0x17);
    iVar28 = *piVar41;
    iVar35 = iVar28 * 0x10;
    fVar14 = *(float *)(iVar34 + 0x763be4);
    fVar15 = *(float *)(iVar34 + 0x763be0);
    fVar16 = *(float *)(iVar34 + 0x763be8);
    iVar34 = *piVar40;
    fVar17 = *(float *)(iVar32 + 0x10);
    fVar18 = *(float *)(iVar35 + 0x763be0);
    fVar19 = *(float *)(iVar35 + 0x763be4);
    iVar36 = iVar34 * 0x10;
    fVar20 = *(float *)(iVar35 + 0x763be8);
    fVar21 = *(float *)(iVar36 + 0x763be0);
    fVar22 = *(float *)(iVar36 + 0x763be4);
    fVar23 = *(float *)(iVar36 + 0x763be8);
    fVar24 = *(float *)(iVar32 + 0x14);
    fVar25 = *(float *)(iVar32 + 0x18);
    *(float *)(puVar31 + 0x18) =
         (fVar7 * fVar8 + fVar3 * fVar6 + fVar2 * fVar5) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar26 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x19) = fVar25 + fVar13 * fVar8 + fVar11 * fVar6 + fVar9 * fVar5;
    *(float *)((int)puVar31 + 0xc4) =
         (fVar12 * fVar8 + fVar10 * fVar6 + fVar4 * fVar5) * fVar26 + fVar24;
    *(float *)(puVar31 + 0x1a) =
         (fVar7 * fVar16 + fVar3 * fVar15 + fVar2 * fVar14) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar5 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1b) = fVar25 + fVar13 * fVar16 + fVar11 * fVar15 + fVar9 * fVar14;
    *(float *)((int)puVar31 + 0xd4) =
         (fVar12 * fVar16 + fVar10 * fVar15 + fVar4 * fVar14) * fVar5 + fVar24;
    *(float *)(puVar31 + 0x1c) =
         (fVar7 * fVar20 + fVar3 * fVar18 + fVar2 * fVar19) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar5 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1d) = fVar25 + fVar13 * fVar20 + fVar11 * fVar18 + fVar9 * fVar19;
    *(float *)((int)puVar31 + 0xe4) =
         (fVar12 * fVar20 + fVar10 * fVar18 + fVar4 * fVar19) * fVar5 + fVar24;
    fVar8 = DAT_00763d8c;
    fVar5 = *(float *)(iVar44 + 0x90);
    fVar6 = *(float *)(&DAT_00763c74 + iVar27 * 8);
    *(undefined4 *)(puVar31 + 0x20) = *(undefined4 *)(&DAT_00763cb8 + iVar27 * 4);
    *(undefined4 *)((int)puVar31 + 0x104) = *(undefined4 *)(&DAT_00763cb8 + iVar33 * 4);
    uVar30 = *(undefined4 *)(&DAT_00763cb8 + iVar28 * 4);
    *(float *)(puVar31 + 0x1e) = (fVar7 * fVar23 + fVar3 * fVar21 + fVar2 * fVar22) * fVar5 + fVar17
    ;
    fVar2 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1f) = fVar25 + fVar13 * fVar23 + fVar11 * fVar21 + fVar9 * fVar22;
    fVar3 = *(float *)(&DAT_00763c74 + iVar33 * 8);
    *(undefined4 *)(puVar31 + 0x21) = uVar30;
    *(undefined4 *)((int)puVar31 + 0x10c) = *(undefined4 *)(&DAT_00763cb8 + iVar34 * 4);
    fVar5 = *(float *)(&DAT_00763c74 + iVar28 * 8);
    *(undefined4 *)(puVar31 + 0x22) = *(undefined4 *)(&DAT_00763c70 + iVar27 * 8);
    *(float *)((int)puVar31 + 0x114) = fVar6 + fVar8;
    *(float *)((int)puVar31 + 0xf4) =
         (fVar12 * fVar23 + fVar10 * fVar21 + fVar4 * fVar22) * fVar2 + fVar24;
    fVar2 = *(float *)(&DAT_00763c74 + iVar34 * 8);
    *(undefined4 *)(puVar31 + 0x23) = *(undefined4 *)(&DAT_00763c70 + iVar33 * 8);
    *(float *)((int)puVar31 + 0x11c) = fVar3 + fVar8;
    uVar30 = *(undefined4 *)(&DAT_00763c70 + iVar34 * 8);
    *(undefined4 *)(puVar31 + 0x24) = *(undefined4 *)(&DAT_00763c70 + iVar28 * 8);
    *(undefined4 *)(puVar31 + 0x25) = uVar30;
    *(float *)((int)puVar31 + 0x124) = fVar5 + fVar8;
    uVar30 = EffectTexHeaders;
    *(float *)((int)puVar31 + 300) = fVar2 + fVar8;
    FastDrawQuad(uVar38 - 0x270,0,1,uVar30,9);
    iVar45 = iVar45 + 1;
    piVar43 = piVar43 + 4;
    piVar42 = piVar42 + 4;
    piVar41 = piVar41 + 4;
    piVar40 = piVar40 + 4;
  } while (iVar45 < 4);
  uVar39 = GetEffectTex(0x1b);
  DAT_00763d90 = (float)((double)DAT_00763d90 + (double)puVar31[0x2c]);
  dVar53 = (double)DAT_00763d90;
  puVar31[0x27] = uVar39;
  fVar2 = *(float *)(iVar44 + 0x90);
  dVar46 = dVar53;
  if ((double)puVar31[0x2b] < dVar53) {
    DAT_00763d90 = 0.0;
    dVar46 = (double)puVar31[0x2d];
    dVar53 = 0.0;
  }
  dVar60 = (double)(float)(dVar53 * 1.399999976158142 + 1.100000023841858);
  auVar82 = loadVectorLeftIndexed(0x14,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar83 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  dVar59 = (double)((float)(dVar46 * -1.2000000476837158) * fVar2);
  dVar57 = (double)((float)(dVar53 * -1.2000000476837158) * fVar2);
  uVar30 = *(undefined4 *)((int)puVar31[0x2a] + 0x158);
  *(undefined4 *)(puVar31 + 0xe) = 0;
  dVar58 = (double)((float)(dVar53 * 1.2000000476837158) * fVar2);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  dVar56 = (double)(float)(dVar60 - 0.20000000298023224);
  *(undefined4 *)(puVar31 + 0xf) = uVar30;
  FastEulerToMtx(uVar38 - 0x2a0,uVar38 - 0x2c0);
  dVar53 = (double)*(float *)(puVar31 + 0x14);
  dVar47 = (double)*(float *)((int)puVar31 + 0xa4);
  dVar48 = (double)*(float *)(puVar31 + 0x15);
  dVar49 = (double)*(float *)(puVar31 + 0x12);
  dVar50 = (double)*(float *)((int)puVar31 + 0x94);
  dVar51 = (double)*(float *)(puVar31 + 0x13);
  dVar52 = (double)*(float *)(puVar31 + 0x16);
  dVar46 = (double)*(float *)((int)puVar31 + 0xb4);
  dVar55 = (double)*(float *)(puVar31 + 0x17);
  fVar2 = *(float *)(iVar32 + 0x10);
  fVar3 = *(float *)(iVar32 + 0x14);
  fVar4 = *(float *)(iVar32 + 0x18);
  *(float *)(puVar31 + 0x18) =
       fVar2 + (float)(dVar52 * dVar60 +
                      (double)(float)(dVar49 * dVar59 + (double)(float)(dVar53 * dVar59)));
  *(float *)(puVar31 + 0x1a) =
       fVar2 + (float)(dVar52 * dVar56 +
                      (double)(float)(dVar49 * dVar58 + (double)(float)(dVar53 * dVar57)));
  *(float *)((int)puVar31 + 0xc4) =
       fVar3 + (float)(dVar46 * dVar60 +
                      (double)(float)(dVar50 * dVar59 + (double)(float)(dVar47 * dVar59)));
  *(float *)(puVar31 + 0x19) =
       fVar4 + (float)(dVar55 * dVar60 +
                      (double)(float)(dVar51 * dVar59 + (double)(float)(dVar48 * dVar59)));
  *(float *)((int)puVar31 + 0xd4) =
       fVar3 + (float)(dVar46 * dVar56 +
                      (double)(float)(dVar50 * dVar58 + (double)(float)(dVar47 * dVar57)));
  *(float *)(puVar31 + 0x1b) =
       fVar4 + (float)(dVar55 * dVar56 +
                      (double)(float)(dVar51 * dVar58 + (double)(float)(dVar48 * dVar57)));
  *(float *)(puVar31 + 0x1c) =
       fVar2 + (float)(dVar52 * dVar60 +
                      (double)(float)(dVar49 * dVar57 + (double)(float)(dVar53 * dVar58)));
  *(float *)((int)puVar31 + 0xe4) =
       fVar3 + (float)(dVar46 * dVar60 +
                      (double)(float)(dVar50 * dVar57 + (double)(float)(dVar47 * dVar58)));
  *(float *)(puVar31 + 0x1d) =
       fVar4 + (float)(dVar55 * dVar60 +
                      (double)(float)(dVar51 * dVar57 + (double)(float)(dVar48 * dVar58)));
  *(float *)(puVar31 + 0x1e) =
       fVar2 + (float)(dVar52 * dVar56 +
                      (double)(float)(dVar49 * dVar58 + (double)(float)(dVar53 * dVar58)));
  *(float *)((int)puVar31 + 0xf4) =
       fVar3 + (float)(dVar46 * dVar56 +
                      (double)(float)(dVar50 * dVar58 + (double)(float)(dVar47 * dVar58)));
  *(float *)(puVar31 + 0x1f) =
       fVar4 + (float)(dVar55 * dVar56 +
                      (double)(float)(dVar51 * dVar58 + (double)(float)(dVar48 * dVar58)));
  uVar37 = EffectTexHeaders;
  auVar82 = loadVectorLeftIndexed(8,0x1bc868);
  auVar61 = loadVectorLeftIndexed(0x3d90,0x760000);
  auVar62 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar63 = loadVectorLeftIndexed(0x20,0x1bc868);
  auVar82 = ZEXT416(0);
  auVar84 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar63 = auVar63 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar61 = vectorSubtractFloatingPoint
                      (auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60,auVar61);
  auVar82 = ZEXT416(0xffffffff);
  auVar62 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar82 = loadVectorLeftIndexed(0x24,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar67 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar82 = vectorShiftLeftIntegerWord(auVar62,auVar62);
  auVar62 = loadVectorLeftIndexed(0x28,0x1bc868);
  auVar62 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar63 = vectorMultiplyAddFloatingPoint
                      (auVar61,auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,auVar82
                      );
  auVar82 = ZEXT416(0xfffffff0);
  auVar61 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar64 = vectorRotateLeftIntegerWord(auVar67,auVar61);
  auVar82 = vectorConvertToSignedFixedPointWordSaturate(auVar63,0);
  auVar63 = vectorMultiplySumSignedHalfWordModulo(auVar82,auVar64,auVar84);
  auVar82 = vectorMultiplyOddUnsignedHalfWord(auVar82,auVar67);
  auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar61);
  auVar63.piece<0,4>() = auVar61.piece<0,4>() + auVar82.piece<0,4>();
  auVar63.piece<8,8>() = auVar82.piece<8,8>();
  auVar63.piece<4,4>() = auVar61.piece<4,4>() + auVar82.piece<4,4>();
  auVar82.piece<0,8>() = 0;
  auVar82.piece<8,8>() = auVar63.piece<0,8>();
  auVar82 = (auVar82 << 0x40 | auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60) >>
            0x60 & (GPiece<16>)0xffffffff;
  auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x100,lVar1);
  *(undefined4 *)(puVar31 + 0x20) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x104,lVar1);
  *(undefined4 *)((int)puVar31 + 0x104) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x108,lVar1);
  *(undefined4 *)(puVar31 + 0x21) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x10c,lVar1);
  *(undefined4 *)((int)puVar31 + 0x10c) = uVar30;
  *(undefined4 *)(puVar31 + 0x22) = 0;
  *(undefined4 *)((int)puVar31 + 0x114) = 0;
  *(undefined4 *)(puVar31 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x11c) = 0;
  *(undefined4 *)(puVar31 + 0x24) = 0;
  *(undefined4 *)((int)puVar31 + 0x124) = 0x3f800000;
  *(undefined4 *)(puVar31 + 0x25) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 300) = 0x3f800000;
  FastDrawQuad(uVar38 - 0x270,0,1,uVar37,9);
  auVar62 = loadVectorLeftIndexed(0x2c,0x1bc868);
  auVar61 = loadVectorLeftIndexed(0x30,0x1bc868);
  auVar67 = loadVectorLeftIndexed(0x34,0x1bc868);
  auVar77 = loadVectorLeftIndexed(0x38,0x1bc868);
  auVar81 = loadVectorLeftIndexed(0x3c,0x1bc868);
  auVar80 = loadVectorLeftIndexed(0x40,0x1bc868);
  auVar82 = loadVectorLeftIndexed(0x50,0x1bc868);
  iVar44 = 0;
  auVar79 = loadVectorLeftIndexed(0x44,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar78 = loadVectorLeftIndexed(0x48,0x1bc868);
  uVar54 = 0x3fc10ff980000000;
  auVar85 = loadVectorLeftIndexed(0x54,0x1bc868);
  auVar64 = loadVectorLeftIndexed(0x58,0x1bc868);
  auVar62 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar63 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar61 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar61 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar67 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar67 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar77 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar77 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar81 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar81 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar80 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar80 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar79 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar79 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar78 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar78 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar85 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar85 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar64 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  *(undefined1 (*) [16])(puVar31 + 0x2e) =
       auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  do {
    auVar64 = vectorConvertFromSignedFixedPointWord(auVar84,0);
    auVar82 = ZEXT416(0xffffffff);
    auVar70 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar65 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar76 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar66 = vectorShiftLeftIntegerWord(auVar65,auVar65);
    auVar82 = ZEXT416(0xffffffff);
    auVar75 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar64 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar64,*(undefined1 (*) [16])(puVar31 + 0x2e),auVar63);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar64 = auVar64 ^ auVar62;
    auVar68 = vectorAddFloatingPoint(auVar64,auVar61);
    auVar82 = vectorSubtractFloatingPoint(auVar67,auVar64);
    auVar69 = vectorSubtractFloatingPoint(auVar77,auVar64);
    auVar71 = vectorSubtractFloatingPoint(auVar67,auVar68);
    auVar73 = vectorCompareGreaterThanFloatingPoint(auVar82,auVar64);
    auVar72 = vectorSubtractFloatingPoint(auVar77,auVar68);
    auVar82 = vectorConditionalSelect(auVar82,auVar64,auVar73);
    auVar70 = vectorShiftLeftIntegerWord(auVar70,auVar70);
    auVar64 = vectorCompareGreaterThanFloatingPoint(auVar82,auVar69);
    auVar64 = vectorConditionalSelect(auVar69,auVar82,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar69 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = vectorCompareGreaterThanFloatingPoint(auVar71,auVar68);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar64,auVar64,auVar66);
    auVar68 = vectorConditionalSelect(auVar71,auVar68,auVar82);
    auVar82 = ZEXT416(0xffffffff);
    auVar73 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar74 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar71 = vectorShiftLeftIntegerWord(auVar69,auVar69);
    auVar82 = vectorCompareGreaterThanFloatingPoint(auVar68,auVar72);
    auVar73 = vectorShiftLeftIntegerWord(auVar73,auVar73);
    auVar68 = vectorConditionalSelect(auVar72,auVar68,auVar82);
    auVar82 = ZEXT416(0xffffffff);
    auVar69 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar74 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar82 = ZEXT416(0xffffffff);
    auVar72 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar68,auVar65);
    auVar82 = vectorShiftLeftIntegerWord(auVar69,auVar69);
    auVar72 = vectorShiftLeftIntegerWord(auVar72,auVar72);
    auVar69 = vectorMultiplyAddFloatingPoint(auVar66,auVar64,auVar82);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar65,auVar68,auVar70);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar66,auVar69,auVar73);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar69,auVar81,auVar64);
    auVar69 = vectorMultiplyAddFloatingPoint(auVar65,auVar82,auVar71);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar82,auVar81,auVar68);
    auVar71 = vectorShiftLeftIntegerWord(auVar76,auVar76);
    auVar70 = vectorShiftLeftIntegerWord(auVar75,auVar75);
    auVar82 = ZEXT416(0xffffffff);
    auVar75 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar74 = vectorMultiplyAddFloatingPoint(auVar66,auVar73,auVar74);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar73,auVar80,auVar64);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar65,auVar69,auVar72);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar69,auVar80,auVar68);
    auVar82 = ZEXT416(0xffffffff);
    auVar72 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar69 = vectorShiftLeftIntegerWord(auVar75,auVar75);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar66,auVar74,auVar71);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar74,auVar79,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar71 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar73,auVar70);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar73,auVar79,auVar68);
    auVar70 = vectorShiftLeftIntegerWord(auVar72,auVar72);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar66,auVar78,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar66 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar78,auVar68);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar64 = vectorMultiplyAddFloatingPoint(auVar64,auVar83,auVar70);
    auVar82 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar68 = loadVectorLeftIndexed(0xd0,param_1);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar83,auVar69);
    auVar70 = loadVectorLeftIndexed(0xdc,param_1);
    auVar73 = loadVectorLeftIndexed(0xd4,param_1);
    auVar72 = loadVectorLeftIndexed(0xc0,param_1);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar64,auVar66);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar70,auVar64,auVar82);
    auVar70 = vectorShiftLeftIntegerWord(auVar71,auVar71);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar69 = loadVectorLeftIndexed(0xcc,param_1);
    auVar71 = loadVectorLeftIndexed(0xd8,param_1);
    auVar70 = vectorMultiplyAddFloatingPoint(auVar73,auVar64,auVar70);
    auVar82 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar73 = loadVectorLeftIndexed(0xc4,param_1);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar71,auVar64,auVar82);
    auVar74 = loadVectorLeftIndexed(200,param_1);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar72,auVar65,auVar66);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar69,auVar65,auVar68);
    auVar72 = loadVectorLeftIndexed(0xe0,param_1);
    auVar69 = loadVectorLeftIndexed(0xec,param_1);
    auVar71 = loadVectorLeftIndexed(0xe4,param_1);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar73,auVar65,auVar70);
    auVar70 = loadVectorLeftIndexed(0x8c,lVar1);
    auVar73 = loadVectorLeftIndexed(0xe8,param_1);
    uVar29 = *(uint *)(iVar32 + 0x90);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar74,auVar65,auVar82);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar72,auVar85,auVar64);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar69,auVar85,auVar66);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar71,auVar85,auVar68);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar73,auVar85,auVar82);
    auVar82 = vectorAddFloatingPoint(auVar66,auVar70);
    auVar82 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar30 = storeVectorElementWordIndexed
                       (auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60,0x8c,lVar1);
    *(undefined4 *)((int)puVar31 + 0x8c) = uVar30;
    auVar82 = loadVectorLeftIndexed(0x10,param_1);
    auVar66 = loadVectorLeftIndexed(0x14,param_1);
    auVar82 = vectorAddFloatingPoint(auVar65,auVar82);
    auVar66 = vectorAddFloatingPoint(auVar68,auVar66);
    auVar65 = loadVectorLeftIndexed(0x18,param_1);
    auVar65 = vectorAddFloatingPoint(auVar64,auVar65);
    auVar82 = auVar82 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar64 = auVar66 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar65 = auVar65 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar30 = storeVectorElementWordIndexed
                       (auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60,0x80,lVar1);
    *(undefined4 *)(puVar31 + 0x10) = uVar30;
    uVar30 = storeVectorElementWordIndexed
                       (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60,0x84,lVar1);
    *(undefined4 *)((int)puVar31 + 0x84) = uVar30;
    uVar30 = storeVectorElementWordIndexed
                       (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar31 + 0x11) = uVar30;
    MB_DrawGlowFX(uVar54,puVar31[0x2d],uVar38 - 0x2b0,uVar29 & 0xffff0000);
    iVar44 = iVar44 + 1;
    auVar64.piece<0,4>() = auVar84.piece<0,4>() + 1;
    auVar64.piece<8,8>() = auVar84.piece<8,8>();
    auVar64.piece<4,4>() = auVar84.piece<4,4>() + 1;
    auVar65.piece<0,8>() = auVar64.piece<0,8>();
    auVar65.piece<12,4>() = auVar84.piece<12,4>();
    auVar65.piece<8,4>() = auVar84.piece<8,4>() + 1;
    auVar84.piece<0,12>() = auVar65.piece<0,12>();
    auVar84.piece<12,4>() = auVar65.piece<12,4>() + 1;
  } while (iVar44 < 4);
  return;
}



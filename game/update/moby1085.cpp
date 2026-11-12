// game/update/moby1085.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x1ba794-0x1bb8c0
// shared update function UpdateMoby_a_lot_16; registered for oClasses 1085, 1086, 1087, 1088, 1089
#include "game/update/moby1085.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01ba794 (0x22c bytes)
void M1089_001ba794(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong unaff_r25;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x180);
  *puVar3 = uVar6;
  puVar3[0x32] = in_LR;
  uVar1 = DAT_00763a48;
  puVar3[0x2f] = unaff_r31;
  puVar3[0x2e] = unaff_r30;
  puVar3[0x2d] = unaff_r29;
  puVar3[0x2c] = unaff_r28;
  puVar3[0x2b] = unaff_r27;
  puVar3[0x2a] = unaff_r26;
  puVar3[0x29] = unaff_r25;
  uVar7 = GetEffectTex(uVar1);
  puVar3[0x25] = uVar7;
  uVar7 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar7;
  uVar7 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar3[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar3[0x27] = uVar7;
  FastMtx4Identity((float *)(puVar3 + 0xe));
  *(undefined4 *)(puVar3 + 0x15) = DAT_007580f8;
  uVar1 = DAT_00763a50;
  iVar13 = 0;
  *(undefined4 *)((int)puVar3 + 0xfc) = DAT_00763a50;
  *(undefined4 *)(puVar3 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xf4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e) = uVar1;
  psVar14 = &DAT_00758700;
  psVar15 = &DAT_00758702;
  do {
    lVar10 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar12 = uVar6 - 0x180;
    psVar9 = psVar14;
    psVar8 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar9 << 4);
      psVar9 = psVar9 + 2;
      sVar2 = *psVar8;
      psVar8 = psVar8 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar11 = (float *)lVar10;
      *pfVar11 = *(float *)(iVar5 + 0x758100) * DAT_00763a58;
      pfVar11[1] = *(float *)(iVar5 + 0x758104) * DAT_00763a58;
      pfVar11[2] = *(float *)(iVar5 + 0x758108) * DAT_00763a58;
      pfVar11[3] = *(float *)(iVar5 + 0x75810c);
      lVar10 = lVar10 + 0x10;
      uVar1 = *(undefined4 *)(iVar4 + 0x758b04);
      *(undefined4 *)((int)lVar12 + 0x100) = *(undefined4 *)(iVar4 + 0x758b00);
      *(undefined4 *)((int)lVar12 + 0x104) = uVar1;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FastDrawQuad(uVar6 - 0xd0,uVar6 - 0x110,0,EffectTexHeaders,9);
    iVar13 = iVar13 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar13 < 0x40);
  return;
}


// 0x01ba9c0 (0x22c bytes)
void M1089_001ba9c0(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong unaff_r25;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x180);
  *puVar3 = uVar6;
  puVar3[0x32] = in_LR;
  uVar1 = DAT_00763a48;
  puVar3[0x2f] = unaff_r31;
  puVar3[0x2e] = unaff_r30;
  puVar3[0x2d] = unaff_r29;
  puVar3[0x2c] = unaff_r28;
  puVar3[0x2b] = unaff_r27;
  puVar3[0x2a] = unaff_r26;
  puVar3[0x29] = unaff_r25;
  uVar7 = GetEffectTex(uVar1);
  puVar3[0x25] = uVar7;
  uVar7 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar7;
  uVar7 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar3[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar3[0x27] = uVar7;
  FastMtx4Identity((float *)(puVar3 + 0xe));
  *(undefined4 *)(puVar3 + 0x15) = DAT_007580f8;
  uVar1 = DAT_00763a50;
  iVar13 = 0;
  *(undefined4 *)((int)puVar3 + 0xfc) = DAT_00763a50;
  *(undefined4 *)(puVar3 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xf4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e) = uVar1;
  psVar14 = &DAT_0075ab80;
  psVar15 = &DAT_0075ab82;
  do {
    lVar10 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar12 = uVar6 - 0x180;
    psVar9 = psVar14;
    psVar8 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar9 << 4);
      psVar9 = psVar9 + 2;
      sVar2 = *psVar8;
      psVar8 = psVar8 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar11 = (float *)lVar10;
      *pfVar11 = *(float *)(iVar5 + 0x75a580) * DAT_00763a58;
      pfVar11[1] = *(float *)(iVar5 + 0x75a584) * DAT_00763a58;
      pfVar11[2] = *(float *)(iVar5 + 0x75a588) * DAT_00763a58;
      pfVar11[3] = *(float *)(iVar5 + 0x75a58c);
      lVar10 = lVar10 + 0x10;
      uVar1 = *(undefined4 *)(iVar4 + 0x75af84);
      *(undefined4 *)((int)lVar12 + 0x100) = *(undefined4 *)(iVar4 + 0x75af80);
      *(undefined4 *)((int)lVar12 + 0x104) = uVar1;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FastDrawQuad(uVar6 - 0xd0,uVar6 - 0x110,0,EffectTexHeaders,9);
    iVar13 = iVar13 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar13 < 0x40);
  return;
}


// 0x01babf8 (0x3b8 bytes)
// inlined: FastRSqrt @0x1bade8
void M1089_001babf8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  short *psVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar13 - 0x180);
  *puVar6 = uVar13;
  puVar6[0x32] = in_LR;
  puVar6[0x2a] = in_f26;
  puVar6[0x2b] = in_f27;
  puVar6[0x2c] = in_f28;
  puVar6[0x2d] = in_f29;
  puVar6[0x2e] = in_f30;
  puVar6[0x2f] = in_f31;
  uVar5 = DAT_00763a48;
  puVar6[0x29] = unaff_r31;
  puVar6[0x28] = unaff_r30;
  uVar14 = GetEffectTex(uVar5);
  puVar6[0x25] = uVar14;
  uVar14 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar14;
  uVar14 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar6[0x27] = uVar14;
  FastMtx4Identity((float *)(puVar6 + 0xe));
  uVar5 = DAT_00763a50;
  fVar4 = DAT_007580f8;
  iVar20 = 0;
  iVar21 = 0;
  *(float *)(puVar6 + 0x15) = DAT_007580f8;
  *(undefined4 *)((int)puVar6 + 0xfc) = uVar5;
  *(undefined4 *)(puVar6 + 0x1f) = uVar5;
  *(undefined4 *)((int)puVar6 + 0xf4) = uVar5;
  *(undefined4 *)(puVar6 + 0x1e) = uVar5;
  do {
    fVar7 = *(float *)((int)&DAT_00760244 + iVar21) * DAT_00763a58;
    fVar8 = *(float *)((int)&DAT_00760240 + iVar21) * DAT_00763a58;
    fVar9 = *(float *)((int)&DAT_00760248 + iVar21) * DAT_00763a58;
    fVar1 = *(float *)((int)&DAT_0076024c + iVar21);
    fVar2 = (*(float *)((int)puVar6 + 0xa4) * fVar1 +
            *(float *)((int)puVar6 + 0x94) * fVar9 +
            *(float *)((int)puVar6 + 0x74) * fVar8 + *(float *)((int)puVar6 + 0x84) * fVar7) -
            GameCamera.posY;
    fVar3 = (*(float *)(puVar6 + 0x14) * fVar1 +
            *(float *)(puVar6 + 0x12) * fVar9 +
            *(float *)(puVar6 + 0xe) * fVar8 + *(float *)(puVar6 + 0x10) * fVar7) - GameCamera.posX;
    fVar1 = (fVar4 * fVar1 +
            *(float *)(puVar6 + 0x13) * fVar9 +
            *(float *)(puVar6 + 0xf) * fVar8 + *(float *)(puVar6 + 0x11) * fVar7) - GameCamera.posZ;
    fVar9 = 0.0;
    fVar10 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar7 = fVar9;
    fVar8 = fVar9;
    if (SQRT(fVar10) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar10);
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar8 = fVar3 * fVar9;
      fVar7 = fVar2 * fVar9;
      fVar9 = fVar1 * fVar9;
    }
    fVar1 = *(float *)((int)&DAT_0075f544 + iVar21);
    fVar2 = *(float *)((int)&DAT_0075f540 + iVar21);
    fVar3 = *(float *)((int)&DAT_0075f548 + iVar21);
    if (fVar9 * (*(float *)(puVar6 + 0x13) * fVar3 +
                *(float *)(puVar6 + 0xf) * fVar2 + *(float *)(puVar6 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar6 + 0x12) * fVar3 +
                *(float *)(puVar6 + 0xe) * fVar2 + *(float *)(puVar6 + 0x10) * fVar1) +
        fVar7 * (*(float *)((int)puVar6 + 0x94) * fVar3 +
                *(float *)((int)puVar6 + 0x74) * fVar2 + *(float *)((int)puVar6 + 0x84) * fVar1) <=
        0.0) {
      psVar16 = (short *)((int)&DAT_0075d100 + iVar21);
      psVar15 = (short *)((int)&DAT_0075d102 + iVar21);
      lVar22 = 4;
      lVar17 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x180;
      do {
        iVar12 = (int)((longlong)*psVar16 << 4);
        psVar16 = psVar16 + 2;
        iVar11 = (int)((longlong)*psVar15 << 3);
        psVar15 = psVar15 + 2;
        pfVar18 = (float *)lVar17;
        *pfVar18 = *(float *)(&DAT_0075ca00 + iVar12) * DAT_00763a58;
        pfVar18[1] = *(float *)(iVar12 + 0x75ca04) * DAT_00763a58;
        pfVar18[2] = *(float *)(iVar12 + 0x75ca08) * DAT_00763a58;
        pfVar18[3] = *(float *)(iVar12 + 0x75ca0c);
        uVar5 = *(undefined4 *)(iVar11 + 0x75d704);
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)((int)lVar19 + 0x100) = *(undefined4 *)(iVar11 + 0x75d700);
        *(undefined4 *)((int)lVar19 + 0x104) = uVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      FastDrawQuad(uVar13 - 0xd0,uVar13 - 0x110,0,EffectTexHeaders,9);
      fVar4 = *(float *)(puVar6 + 0x15);
    }
    iVar20 = iVar20 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar20 < 0x60);
  return;
}


// 0x01bafc0 (0x3b8 bytes)
// inlined: FastRSqrt @0x1bb1b0
void M1089_001bafc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  short *psVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar13 - 0x180);
  *puVar6 = uVar13;
  puVar6[0x32] = in_LR;
  puVar6[0x2a] = in_f26;
  puVar6[0x2b] = in_f27;
  puVar6[0x2c] = in_f28;
  puVar6[0x2d] = in_f29;
  puVar6[0x2e] = in_f30;
  puVar6[0x2f] = in_f31;
  uVar5 = DAT_00763a48;
  puVar6[0x29] = unaff_r31;
  puVar6[0x28] = unaff_r30;
  uVar14 = GetEffectTex(uVar5);
  puVar6[0x25] = uVar14;
  uVar14 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar14;
  uVar14 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar6[0x27] = uVar14;
  FastMtx4Identity((float *)(puVar6 + 0xe));
  uVar5 = DAT_00763a50;
  fVar4 = DAT_007580f8;
  iVar20 = 0;
  iVar21 = 0;
  *(float *)(puVar6 + 0x15) = DAT_007580f8;
  *(undefined4 *)((int)puVar6 + 0xfc) = uVar5;
  *(undefined4 *)(puVar6 + 0x1f) = uVar5;
  *(undefined4 *)((int)puVar6 + 0xf4) = uVar5;
  *(undefined4 *)(puVar6 + 0x1e) = uVar5;
  do {
    fVar7 = *(float *)((int)&DAT_00763444 + iVar21) * DAT_00763a58;
    fVar8 = *(float *)((int)&DAT_00763440 + iVar21) * DAT_00763a58;
    fVar9 = *(float *)((int)&DAT_00763448 + iVar21) * DAT_00763a58;
    fVar1 = *(float *)((int)&DAT_0076344c + iVar21);
    fVar2 = (*(float *)((int)puVar6 + 0xa4) * fVar1 +
            *(float *)((int)puVar6 + 0x94) * fVar9 +
            *(float *)((int)puVar6 + 0x74) * fVar8 + *(float *)((int)puVar6 + 0x84) * fVar7) -
            GameCamera.posY;
    fVar3 = (*(float *)(puVar6 + 0x14) * fVar1 +
            *(float *)(puVar6 + 0x12) * fVar9 +
            *(float *)(puVar6 + 0xe) * fVar8 + *(float *)(puVar6 + 0x10) * fVar7) - GameCamera.posX;
    fVar1 = (fVar4 * fVar1 +
            *(float *)(puVar6 + 0x13) * fVar9 +
            *(float *)(puVar6 + 0xf) * fVar8 + *(float *)(puVar6 + 0x11) * fVar7) - GameCamera.posZ;
    fVar9 = 0.0;
    fVar10 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar7 = fVar9;
    fVar8 = fVar9;
    if (SQRT(fVar10) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar10);
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar8 = fVar3 * fVar9;
      fVar7 = fVar2 * fVar9;
      fVar9 = fVar1 * fVar9;
    }
    fVar1 = *(float *)((int)&DAT_00762744 + iVar21);
    fVar2 = *(float *)((int)&DAT_00762740 + iVar21);
    fVar3 = *(float *)((int)&DAT_00762748 + iVar21);
    if (fVar9 * (*(float *)(puVar6 + 0x13) * fVar3 +
                *(float *)(puVar6 + 0xf) * fVar2 + *(float *)(puVar6 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar6 + 0x12) * fVar3 +
                *(float *)(puVar6 + 0xe) * fVar2 + *(float *)(puVar6 + 0x10) * fVar1) +
        fVar7 * (*(float *)((int)puVar6 + 0x94) * fVar3 +
                *(float *)((int)puVar6 + 0x74) * fVar2 + *(float *)((int)puVar6 + 0x84) * fVar1) <=
        0.0) {
      psVar16 = (short *)((int)&DAT_00760f40 + iVar21);
      psVar15 = (short *)((int)&DAT_00760f42 + iVar21);
      lVar22 = 4;
      lVar17 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x180;
      do {
        iVar12 = (int)((longlong)*psVar16 << 4);
        psVar16 = psVar16 + 2;
        iVar11 = (int)((longlong)*psVar15 << 3);
        psVar15 = psVar15 + 2;
        pfVar18 = (float *)lVar17;
        *pfVar18 = *(float *)(&DAT_00760840 + iVar12) * DAT_00763a58;
        pfVar18[1] = *(float *)(iVar12 + 0x760844) * DAT_00763a58;
        pfVar18[2] = *(float *)(iVar12 + 0x760848) * DAT_00763a58;
        pfVar18[3] = *(float *)(iVar12 + 0x76084c);
        uVar5 = *(undefined4 *)(iVar11 + 0x761544);
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)((int)lVar19 + 0x100) = *(undefined4 *)(iVar11 + 0x761540);
        *(undefined4 *)((int)lVar19 + 0x104) = uVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      FastDrawQuad(uVar13 - 0xd0,uVar13 - 0x110,0,EffectTexHeaders,9);
      fVar4 = *(float *)(puVar6 + 0x15);
    }
    iVar20 = iVar20 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar20 < 0x60);
  return;
}


// 0x01bb378 (0x14 bytes)
void M1089_001bb378(void)

{
  DAT_00763ab0 = 0x10000;
  return;
}


// shared update function, registered for oClasses 1085, 1086, 1087, 1088, 1089
// 0x01bb398 (0x128 bytes)
/* Moby 1085
   Moby 1086
   Moby 1087
   Moby 1088
   Moby 1089 */

void UpdateMoby_1085(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  double dVar6;
  
  pfVar4 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_00763ae0;
  pfVar4[2] = -(g_FrameTimeSq * 15.0 - pfVar4[2]);
  fVar1 = (moby->rotation).x;
  fVar2 = (moby->rotation).y;
  (moby->pos).x = (moby->pos).x + *pfVar4;
  fVar3 = (moby->rotation).z;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  fVar1 = fVar1 + pfVar4[4];
  (moby->rotation).x = fVar1;
  (moby->rotation).y = fVar2 + pfVar4[5];
  (moby->rotation).z = fVar3 + pfVar4[6];
  dVar6 = (double)FastWrapRot(fVar1,pfVar4[4]);
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)FastWrapRot((moby->rotation).y,pfVar4[5]);
  (moby->rotation).y = (float)dVar6;
  dVar6 = (double)FastWrapRot((moby->rotation).z,pfVar4[6]);
  cVar5 = moby->setByGroup;
  (moby->rotation).z = (float)dVar6;
  cVar5 = cVar5 + -1;
  moby->setByGroup = cVar5;
  if (cVar5 == '\0') {
    DeleteMoby(moby);
  }
  return;
}


// 0x01bb4e0 (0x1e4 bytes)
MobyInstance *
M1089_001bb4e0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  float fVar2;
  MOBY_OCLASSES oClass;
  MobyInstance *pMVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  MB_randRangeFloat(1085.0,1089.0);
  oClass = FastDoubleToInt();
  pMVar3 = CreateMoby(oClass);
  if (pMVar3 != (MobyInstance *)0x0) {
    fVar2 = pMVar3->pClass->gScale * DAT_00763ae0;
    puVar1 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    fStack00000044 = (f32)param_3;
    pMVar3->drawDistance = 0x7e;
    pMVar3->enabled = '\x01';
    (pMVar3->pos).y = fStack00000044;
    fStack0000004c = (f32)param_4;
    uStack00000054 = (undefined4)param_5;
    (pMVar3->pos).w = fStack0000004c;
    pMVar3->scale = fVar2;
    uStack0000005c = (undefined4)param_6;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    puVar1[1] = uStack00000054;
    *puVar1 = uStack00000050;
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    puVar1[3] = uStack0000005c;
    puVar1[2] = uStack00000058;
    dVar8 = -360.0;
    dVar7 = 360.0;
    dVar5 = (double)MB_randRangeFloat(-360.0,360.0);
    dVar6 = 0.01745329238474369;
    puVar1[4] = (float)(dVar5 * 0.01745329238474369) * g_FrameTime;
    dVar5 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    puVar1[5] = (float)(dVar5 * dVar6) * g_FrameTime;
    dVar5 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    puVar1[6] = (float)(dVar5 * dVar6) * g_FrameTime;
    dVar5 = (double)MB_randRangeFloat(60.0,120.0);
    cVar4 = FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
    pMVar3->setByGroup = cVar4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x01bb6f0 (0xc8 bytes)
void M109_001bb6f0
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
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
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)FastDiffRots(param_2,param_1);
  FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}


// 0x01bb7e0 (0xe0 bytes)
void M109_001bb7e0
               (double param_1,double param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_5[1];
  fVar2 = param_4[1];
  fVar3 = param_5[2];
  fVar4 = param_4[2];
  fVar5 = (float)(param_1 / param_2) * 3.1415925 + 1.5707963;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  fVar5 = (fVar5 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7 + 1.0)
          * 0.5;
  *(float *)(param_3 + 0x10) = (*param_5 - *param_4) * fVar5 + *param_4;
  *(float *)(param_3 + 0x14) = (fVar1 - fVar2) * fVar5 + param_4[1];
  *(float *)(param_3 + 0x18) = (fVar3 - fVar4) * fVar5 + param_4[2];
  *(float *)(param_3 + 0x1c) = param_4[3];
  return;
}



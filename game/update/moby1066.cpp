// game/update/moby1066.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1ad26c-0x1ae034
#include "game/update/moby1066.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby829.h"
#include "idol/fastfunc.h"

// 0x01ad26c (0x2ac bytes)
void M1066_001ad26c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  short *psVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar19;
  ulonglong unaff_r31;
  short *psVar20;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar10 - 0x230);
  *puVar7 = uVar10;
  puVar7[0x48] = in_LR;
  puVar7[0x42] = in_f28;
  puVar7[0x43] = in_f29;
  puVar7[0x44] = in_f30;
  puVar7[0x45] = in_f31;
  uVar1 = DAT_007578cc;
  dVar23 = (double)DAT_007578dc;
  dVar22 = (double)GameCamera.rot.radius;
  dVar24 = (double)GameCamera.rot.elevation;
  puVar7[0x41] = unaff_r31;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  dVar25 = (double)DAT_007578e0;
  uVar11 = GetEffectTex(uVar1);
  puVar7[0x25] = uVar11;
  uVar11 = GetEffectTex(0x2a);
  puVar7[0x37] = uVar11;
  uVar11 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar7[0x38] = uVar11;
  puVar7[0x26] = uVar11;
  uVar11 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar7[0x36] = uVar11;
  puVar7[0x24] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar7[0x39] = uVar11;
  puVar7[0x27] = uVar11;
  FastMtx4Identity((float *)(puVar7 + 0xe));
  uVar2 = DAT_007578d4;
  uVar1 = DAT_007578d0;
  *(undefined4 *)((int)puVar7 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar7 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar1;
  iVar18 = 0;
  *(undefined4 *)(puVar7 + 0x1e) = uVar1;
  *(undefined4 *)((int)puVar7 + 0x18c) = uVar2;
  *(undefined4 *)(puVar7 + 0x31) = uVar2;
  psVar19 = &DAT_00755c50;
  *(undefined4 *)((int)puVar7 + 0x184) = uVar2;
  psVar20 = &DAT_00755c52;
  *(undefined4 *)(puVar7 + 0x30) = uVar2;
  do {
    lVar21 = 4;
    lVar15 = uVar10 - 0x180;
    lVar14 = uVar10 - 0xf0;
    lVar17 = uVar10 - 0x230;
    psVar13 = psVar19;
    psVar12 = psVar20;
    do {
      iVar9 = (int)((longlong)*psVar13 << 4);
      iVar8 = (int)((longlong)*psVar12 << 3);
      psVar13 = psVar13 + 2;
      psVar12 = psVar12 + 2;
      uVar1 = *(undefined4 *)(iVar9 + 0x755330);
      puVar16 = (undefined4 *)lVar15;
      *puVar16 = uVar1;
      uVar2 = *(undefined4 *)(iVar9 + 0x755334);
      puVar16[1] = uVar2;
      uVar3 = *(undefined4 *)(iVar9 + 0x755338);
      puVar16[2] = uVar3;
      uVar4 = *(undefined4 *)(iVar9 + 0x75533c);
      puVar16[3] = uVar4;
      puVar16 = (undefined4 *)lVar14;
      *puVar16 = uVar1;
      puVar16[1] = uVar2;
      lVar15 = lVar15 + 0x10;
      puVar16[2] = uVar3;
      puVar16[3] = uVar4;
      fVar6 = *(float *)(&DAT_00755f70 + iVar8);
      lVar14 = lVar14 + 0x10;
      fVar5 = *(float *)(&DAT_00755f74 + iVar8);
      iVar8 = (int)lVar17;
      *(float *)(iVar8 + 400) = fVar6;
      *(float *)(iVar8 + 0x194) = fVar5;
      *(float *)(iVar8 + 0x100) = (float)(dVar23 * dVar22 + (double)fVar6);
      *(float *)(iVar8 + 0x104) = (float)(dVar25 * dVar24 + (double)fVar5);
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    FastDrawQuad(uVar10 - 0x180,uVar10 - 0x1c0,0,EffectTexHeaders,9);
    FastDrawQuad(uVar10 - 0xf0,uVar10 - 0x1c0,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
    psVar19 = psVar19 + 8;
    psVar20 = psVar20 + 8;
  } while (iVar18 < 0x32);
  return;
}


// 0x01ad528 (0x45c bytes)
// inlined: FastRSqrt @0x1ad764
void M1066_001ad528(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  short *psVar19;
  short *psVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar22;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar13 - 0x240);
  *puVar5 = uVar13;
  puVar5[0x4a] = in_LR;
  puVar5[0x3f] = in_f23;
  puVar5[0x40] = in_f24;
  puVar5[0x41] = in_f25;
  puVar5[0x42] = in_f26;
  puVar5[0x43] = in_f27;
  puVar5[0x44] = in_f28;
  puVar5[0x45] = in_f29;
  puVar5[0x46] = in_f30;
  puVar5[0x47] = in_f31;
  puVar5[0x3d] = unaff_r30;
  uVar11 = DAT_007578cc;
  dVar26 = (double)DAT_007578dc;
  dVar27 = (double)GameCamera.rot.radius;
  dVar25 = (double)GameCamera.rot.elevation;
  puVar5[0x3e] = unaff_r31;
  puVar5[0x3c] = unaff_r29;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3a] = unaff_r27;
  dVar24 = (double)DAT_007578e0;
  uVar14 = GetEffectTex(uVar11);
  puVar5[0x25] = uVar14;
  uVar14 = GetEffectTex(0x2a);
  puVar5[0x37] = uVar14;
  uVar14 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar5[0x38] = uVar14;
  puVar5[0x26] = uVar14;
  uVar14 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar5[0x36] = uVar14;
  puVar5[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar5[0x39] = uVar14;
  puVar5[0x27] = uVar14;
  FastMtx4Identity((float *)(puVar5 + 0xe));
  uVar12 = DAT_007578d4;
  uVar11 = DAT_007578d0;
  iVar22 = 0;
  iVar21 = 0;
  *(undefined4 *)((int)puVar5 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar5 + 0x1f) = uVar11;
  *(undefined4 *)((int)puVar5 + 0xf4) = uVar11;
  *(undefined4 *)(puVar5 + 0x1e) = uVar11;
  *(undefined4 *)((int)puVar5 + 0x18c) = uVar12;
  *(undefined4 *)(puVar5 + 0x31) = uVar12;
  *(undefined4 *)((int)puVar5 + 0x184) = uVar12;
  *(undefined4 *)(puVar5 + 0x30) = uVar12;
  do {
    fVar4 = *(float *)((int)&DAT_00754f94 + iVar21) * DAT_007578d8;
    fVar6 = *(float *)((int)&DAT_00754f90 + iVar21) * DAT_007578d8;
    fVar2 = *(float *)((int)&DAT_00754f98 + iVar21) * DAT_007578d8;
    fVar1 = *(float *)((int)&DAT_00754f9c + iVar21);
    fVar8 = 0.0;
    fVar3 = (*(float *)((int)puVar5 + 0xa4) * fVar1 +
            *(float *)((int)puVar5 + 0x94) * fVar2 +
            *(float *)((int)puVar5 + 0x74) * fVar6 + *(float *)((int)puVar5 + 0x84) * fVar4) -
            GameCamera.posY;
    fVar7 = (*(float *)(puVar5 + 0x14) * fVar1 +
            *(float *)(puVar5 + 0x12) * fVar2 +
            *(float *)(puVar5 + 0xe) * fVar6 + *(float *)(puVar5 + 0x10) * fVar4) - GameCamera.posX;
    fVar1 = (*(float *)(puVar5 + 0x15) * fVar1 +
            *(float *)(puVar5 + 0x13) * fVar2 +
            *(float *)(puVar5 + 0xf) * fVar6 + *(float *)(puVar5 + 0x11) * fVar4) - GameCamera.posZ;
    fVar2 = fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3;
    fVar4 = fVar8;
    fVar6 = fVar8;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar8 = fVar7 * fVar6;
      fVar4 = fVar3 * fVar6;
      fVar6 = fVar1 * fVar6;
    }
    fVar1 = *(float *)((int)&DAT_00754614 + iVar21);
    fVar2 = *(float *)((int)&DAT_00754610 + iVar21);
    fVar3 = *(float *)((int)&DAT_00754618 + iVar21);
    if (fVar6 * (*(float *)(puVar5 + 0x13) * fVar3 +
                *(float *)(puVar5 + 0xf) * fVar2 + *(float *)(puVar5 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar5 + 0x12) * fVar3 +
                *(float *)(puVar5 + 0xe) * fVar2 + *(float *)(puVar5 + 0x10) * fVar1) +
        fVar4 * (*(float *)((int)puVar5 + 0x94) * fVar3 +
                *(float *)((int)puVar5 + 0x74) * fVar2 + *(float *)((int)puVar5 + 0x84) * fVar1) <=
        0.0) {
      lVar16 = uVar13 - 400;
      psVar20 = (short *)((int)&DAT_00753d42 + iVar21);
      lVar18 = uVar13 - 0x100;
      psVar19 = (short *)((int)&DAT_00753d40 + iVar21);
      lVar23 = 4;
      lVar15 = uVar13 - 0x240;
      do {
        iVar10 = (int)((longlong)*psVar19 << 4);
        psVar19 = psVar19 + 2;
        iVar9 = (int)((longlong)*psVar20 << 3);
        fVar4 = *(float *)(iVar10 + 0x753760) * DAT_007578d8;
        psVar20 = psVar20 + 2;
        pfVar17 = (float *)lVar16;
        *pfVar17 = fVar4;
        fVar6 = *(float *)(iVar10 + 0x753764) * DAT_007578d8;
        pfVar17[1] = fVar6;
        fVar2 = *(float *)(iVar10 + 0x753768) * DAT_007578d8;
        pfVar17[2] = fVar2;
        fVar1 = *(float *)(iVar10 + 0x75376c);
        pfVar17[3] = fVar1;
        pfVar17 = (float *)lVar18;
        *pfVar17 = fVar4;
        lVar16 = lVar16 + 0x10;
        pfVar17[1] = fVar6;
        pfVar17[2] = fVar2;
        pfVar17[3] = fVar1;
        fVar4 = *(float *)(&DAT_007540e0 + iVar9);
        fVar1 = *(float *)(&DAT_007540e4 + iVar9);
        lVar18 = lVar18 + 0x10;
        iVar9 = (int)lVar15;
        *(float *)(iVar9 + 400) = fVar4;
        *(float *)(iVar9 + 0x194) = fVar1;
        *(float *)(iVar9 + 0x100) = (float)(dVar26 * dVar27 + (double)fVar4);
        *(float *)(iVar9 + 0x104) = (float)(dVar24 * dVar25 + (double)fVar1);
        lVar15 = lVar15 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      FastDrawQuad(uVar13 - 400,uVar13 - 0x1d0,0,EffectTexHeaders,9);
      FastDrawQuad(uVar13 - 0x100,uVar13 - 0x1d0,0,EffectTexHeaders,9);
    }
    iVar22 = iVar22 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar22 < 0x3a);
  return;
}


// 0x01ad990 (0x45c bytes)
// inlined: FastRSqrt @0x1adbcc
// strings: 00748e84: '?{BW>'

void M1066_001ad990(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  short *psVar19;
  short *psVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar22;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar13 - 0x240);
  *puVar5 = uVar13;
  puVar5[0x4a] = in_LR;
  puVar5[0x3f] = in_f23;
  puVar5[0x40] = in_f24;
  puVar5[0x41] = in_f25;
  puVar5[0x42] = in_f26;
  puVar5[0x43] = in_f27;
  puVar5[0x44] = in_f28;
  puVar5[0x45] = in_f29;
  puVar5[0x46] = in_f30;
  puVar5[0x47] = in_f31;
  puVar5[0x3d] = unaff_r30;
  uVar11 = DAT_007578cc;
  dVar26 = (double)DAT_007578dc;
  dVar27 = (double)GameCamera.rot.radius;
  dVar25 = (double)GameCamera.rot.elevation;
  puVar5[0x3e] = unaff_r31;
  puVar5[0x3c] = unaff_r29;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3a] = unaff_r27;
  dVar24 = (double)DAT_007578e0;
  uVar14 = GetEffectTex(uVar11);
  puVar5[0x25] = uVar14;
  uVar14 = GetEffectTex(0x2a);
  puVar5[0x37] = uVar14;
  uVar14 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar5[0x38] = uVar14;
  puVar5[0x26] = uVar14;
  uVar14 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar5[0x36] = uVar14;
  puVar5[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar5[0x39] = uVar14;
  puVar5[0x27] = uVar14;
  FastMtx4Identity((float *)(puVar5 + 0xe));
  uVar12 = DAT_007578d4;
  uVar11 = DAT_007578d0;
  iVar22 = 0;
  iVar21 = 0;
  *(undefined4 *)((int)puVar5 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar5 + 0x1f) = uVar11;
  *(undefined4 *)((int)puVar5 + 0xf4) = uVar11;
  *(undefined4 *)(puVar5 + 0x1e) = uVar11;
  *(undefined4 *)((int)puVar5 + 0x18c) = uVar12;
  *(undefined4 *)(puVar5 + 0x31) = uVar12;
  *(undefined4 *)((int)puVar5 + 0x184) = uVar12;
  *(undefined4 *)(puVar5 + 0x30) = uVar12;
  do {
    fVar4 = *(float *)((int)&DAT_00750164 + iVar21) * DAT_007578d8;
    fVar6 = *(float *)((int)&DAT_00750160 + iVar21) * DAT_007578d8;
    fVar2 = *(float *)((int)&DAT_00750168 + iVar21) * DAT_007578d8;
    fVar1 = *(float *)((int)&DAT_0075016c + iVar21);
    fVar8 = 0.0;
    fVar3 = (*(float *)((int)puVar5 + 0xa4) * fVar1 +
            *(float *)((int)puVar5 + 0x94) * fVar2 +
            *(float *)((int)puVar5 + 0x74) * fVar6 + *(float *)((int)puVar5 + 0x84) * fVar4) -
            GameCamera.posY;
    fVar7 = (*(float *)(puVar5 + 0x14) * fVar1 +
            *(float *)(puVar5 + 0x12) * fVar2 +
            *(float *)(puVar5 + 0xe) * fVar6 + *(float *)(puVar5 + 0x10) * fVar4) - GameCamera.posX;
    fVar1 = (*(float *)(puVar5 + 0x15) * fVar1 +
            *(float *)(puVar5 + 0x13) * fVar2 +
            *(float *)(puVar5 + 0xf) * fVar6 + *(float *)(puVar5 + 0x11) * fVar4) - GameCamera.posZ;
    fVar2 = fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3;
    fVar4 = fVar8;
    fVar6 = fVar8;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar8 = fVar7 * fVar6;
      fVar4 = fVar3 * fVar6;
      fVar6 = fVar1 * fVar6;
    }
    fVar1 = *(float *)((int)&DAT_00749464 + iVar21);
    fVar2 = *(float *)((int)&DAT_00749460 + iVar21);
    fVar3 = *(float *)((int)&DAT_00749468 + iVar21);
    if (fVar6 * (*(float *)(puVar5 + 0x13) * fVar3 +
                *(float *)(puVar5 + 0xf) * fVar2 + *(float *)(puVar5 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar5 + 0x12) * fVar3 +
                *(float *)(puVar5 + 0xe) * fVar2 + *(float *)(puVar5 + 0x10) * fVar1) +
        fVar4 * (*(float *)((int)puVar5 + 0x94) * fVar3 +
                *(float *)((int)puVar5 + 0x74) * fVar2 + *(float *)((int)puVar5 + 0x84) * fVar1) <=
        0.0) {
      lVar16 = uVar13 - 400;
      psVar20 = (short *)((int)&DAT_00744122 + iVar21);
      lVar18 = uVar13 - 0x100;
      psVar19 = (short *)((int)&DAT_00744120 + iVar21);
      lVar23 = 4;
      lVar15 = uVar13 - 0x240;
      do {
        iVar10 = (int)((longlong)*psVar19 << 4);
        psVar19 = psVar19 + 2;
        iVar9 = (int)((longlong)*psVar20 << 3);
        fVar4 = *(float *)(iVar10 + 0x740a20) * DAT_007578d8;
        psVar20 = psVar20 + 2;
        pfVar17 = (float *)lVar16;
        *pfVar17 = fVar4;
        fVar6 = *(float *)(iVar10 + 0x740a24) * DAT_007578d8;
        pfVar17[1] = fVar6;
        fVar2 = *(float *)(iVar10 + 0x740a28) * DAT_007578d8;
        pfVar17[2] = fVar2;
        fVar1 = *(float *)(iVar10 + 0x740a2c);
        pfVar17[3] = fVar1;
        pfVar17 = (float *)lVar18;
        *pfVar17 = fVar4;
        lVar16 = lVar16 + 0x10;
        pfVar17[1] = fVar6;
        pfVar17[2] = fVar2;
        pfVar17[3] = fVar1;
        fVar4 = *(float *)(iVar9 + 0x747720);
        fVar1 = *(float *)(iVar9 + 0x747724);
        lVar18 = lVar18 + 0x10;
        iVar9 = (int)lVar15;
        *(float *)(iVar9 + 400) = fVar4;
        *(float *)(iVar9 + 0x194) = fVar1;
        *(float *)(iVar9 + 0x100) = (float)(dVar26 * dVar27 + (double)fVar4);
        *(float *)(iVar9 + 0x104) = (float)(dVar24 * dVar25 + (double)fVar1);
        lVar15 = lVar15 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      FastDrawQuad(uVar13 - 400,uVar13 - 0x1d0,0,EffectTexHeaders,9);
      FastDrawQuad(uVar13 - 0x100,uVar13 - 0x1d0,0,EffectTexHeaders,9);
    }
    iVar22 = iVar22 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar22 < 0x360);
  return;
}


// 0x01addec (0x14 bytes)
void M1066_001addec(void)

{
  DAT_00757930 = 0x10000;
  return;
}


// 0x01ade10 (0x224 bytes)
/* Moby 1066 */

void UpdateMoby_1066(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  lVar5 = (longlong)(int)moby;
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((-1 < piVar3[1]) &&
          (iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[1]), iVar6 != 0)) &&
         (moby->state = '\x01', moby->animationId != '\x01')) {
        MB_SetAnimation(lVar5,1,0,5);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) &&
            (moby->state = (char)(-1 - (longlong)*piVar3 >> 0x3f) + '\x03',
            moby->animationId != '\x02')) {
      MB_SetAnimation(lVar5,2,0,5);
    }
  }
  else if ((bVar1 < 3) && (iVar6 = FastDecTimerS32(ZEXT48(piVar3) + 8), iVar6 != 0)) {
    dVar8 = 0.0;
    puVar7 = (ushort *)(&g_MobyGroups)[*piVar3];
    dVar9 = dVar8;
    if (puVar7 != (ushort *)0x0) {
      do {
        iVar6 = FUN_0047ca58(g_MobyInstance + (*puVar7 & 0x7fff),lVar5 + 0x10);
        if (iVar6 != 0) {
          dVar8 = 1.0;
          break;
        }
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
    }
    if (dVar8 == dVar9) {
      moby->state = '\x03';
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(8,0x1ade00);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,
                         ZEXT48(piVar3));
      *(undefined4 *)((uint)(piVar3 + 2) & 0xfffffffc) = uVar4;
    }
  }
  return;
}



// game/update/moby253.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x318b50-0x31cf88
#include "game/update/moby253.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby1118.h"
#include "game/update/moby344.h"
#include "game/update/moby425.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0318b50 (0x988 bytes)
// inlined: FastAtan2 @0x318dd8, FastAtan2 @0x318f50
void M253_00318b50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  int iVar22;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0x220;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar12;
  puVar7[0x46] = in_LR;
  puVar7[0x40] = in_f28;
  puVar7[0x41] = in_f29;
  puVar7[0x42] = in_f30;
  puVar7[0x43] = in_f31;
  puVar7[0x3e] = unaff_r30;
  puVar7[0x3d] = unaff_r29;
  puVar7[0x3f] = unaff_r31;
  puVar7[0x3c] = unaff_r28;
  puVar7[0x3b] = unaff_r27;
  puVar7[0x3a] = unaff_r26;
  puVar7[0x39] = unaff_r25;
  puVar7[0x38] = unaff_r24;
  iVar23 = *(int *)(param_1 + 0x78);
  uVar13 = GetEffectTex(0xe);
  uVar14 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar15 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  uVar11 = DAT_007ffc0c;
  uVar9 = DAT_007ffc04;
  *(undefined4 *)(puVar7 + 0x24) = DAT_007ffc00;
  uVar10 = DAT_007ffc08;
  *(undefined4 *)((int)puVar7 + 0x124) = uVar9;
  *(undefined4 *)(puVar7 + 0x25) = uVar10;
  *(undefined4 *)((int)puVar7 + 300) = uVar11;
  puVar7[0x2b] = uVar13;
  puVar7[0x2c] = uVar14;
  puVar7[0x2a] = uVar15;
  puVar7[0x2d] = uVar16;
  dVar32 = 0.0;
  *(undefined4 *)(puVar7 + 0x26) = 0;
  *(undefined4 *)((int)puVar7 + 0x134) = 0;
  *(undefined4 *)(puVar7 + 0x27) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x13c) = 0;
  *(undefined4 *)(puVar7 + 0x28) = 0;
  *(undefined4 *)((int)puVar7 + 0x144) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x29) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x14c) = 0x3f800000;
  GetBonePosition(param_1,2,uVar12 - 0x1b0);
  iVar22 = *(int *)(iVar23 + 0x218);
  *(float *)(puVar7 + 0x10) = *(float *)(iVar22 + 0x10) - *(float *)(puVar7 + 0xe);
  *(float *)((int)puVar7 + 0x84) = *(float *)(iVar22 + 0x14) - *(float *)((int)puVar7 + 0x74);
  *(float *)(puVar7 + 0x11) = *(float *)(iVar22 + 0x18) - *(float *)(puVar7 + 0xf);
  *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)(iVar22 + 0x1c);
  dVar31 = 3.0;
  ClampVec3Magnitude(0x4008000000000000,(Vec4 *)(puVar7 + 0x10));
  uVar5 = *(uint *)((int)puVar7 + 0x84);
  dVar29 = (double)*(float *)((int)puVar7 + 0x84);
  uVar6 = *(uint *)(puVar7 + 0x10);
  dVar28 = (double)*(float *)(puVar7 + 0x10);
  dVar30 = 0.25;
  dVar25 = (double)(float)(dVar28 * dVar28 + (double)(float)(dVar29 * dVar29));
  fVar2 = *(float *)(*(int *)(iVar23 + 0x218) + 0x18);
  *(undefined4 *)((int)puVar7 + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  fVar1 = (float)SQRT(dVar25);
  fVar2 = (fVar2 + 0.25) - *(float *)(puVar7 + 0xf);
  dVar26 = (double)fVar2;
  *(float *)(puVar7 + 0x2f) = fVar2;
  *(float *)(puVar7 + 0x11) = fVar2;
  dVar33 = (double)SQRT((float)(dVar26 * dVar26 + dVar25));
  *(float *)((int)puVar7 + 0x174) = fVar1;
  dVar27 = ABS((double)fVar1);
  *(float *)((int)puVar7 + 0x17c) = (float)(dVar27 - ABS(dVar26));
  uVar13 = (ulonglong)(*(uint *)((int)puVar7 + 0x174) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x17c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x2f) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar7 + 0x174));
  if ((double)*(float *)((int)puVar7 + 0x17c) - dVar32 < 0.0) {
    dVar25 = ABS(dVar26);
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  dVar26 = ABS((double)*(float *)(puVar7 + 0x2f));
  if ((double)*(float *)((int)puVar7 + 0x17c) - dVar32 < 0.0) {
    dVar26 = dVar27;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  dVar27 = dVar32;
  if (dVar32 < dVar25) {
    lVar17 = uVar12 - 0x210;
    lVar21 = uVar12 - 0x70;
    lVar19 = uVar12 - 0x80;
    lVar24 = 2;
    fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x1ac) = fVar3;
    *(float *)((int)puVar7 + 0x1a4) = fVar3;
    *(float *)(puVar7 + 0x35) = fVar3;
    *(float *)(puVar7 + 0x34) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x1a4) = *(float *)((int)puVar7 + 0x1a4) * fVar4;
    *(float *)(puVar7 + 0x35) = *(float *)(puVar7 + 0x35) * fVar3;
    *(float *)((int)puVar7 + 0x1ac) = *(float *)((int)puVar7 + 0x1ac) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x1a0) = *(float *)((int)lVar17 + 400) * fVar3 * fVar3;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar12 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x1a0) = *(float *)((int)lVar17 + 0x1a0) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar25 = dVar32;
    do {
      iVar22 = (int)lVar17;
      iVar8 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar22 + 0x1a0)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar25 + 0.7853981852531433) * fVar1 + fVar2);
  }
  dVar28 = ABS(dVar28);
  dVar29 = ABS(dVar29);
  *(float *)((int)puVar7 + 0x94) = (float)-dVar27;
  *(float *)(puVar7 + 0x2e) = (float)(dVar28 - dVar29);
  uVar13 = (ulonglong)(uVar6 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x2e) >> 0x1e) & 2 | (ulonglong)(uVar5 >> 0x1d) & 4;
  dVar25 = dVar28;
  if ((double)*(float *)(puVar7 + 0x2e) - dVar32 < 0.0) {
    dVar25 = dVar29;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  if ((double)*(float *)(puVar7 + 0x2e) - dVar32 < 0.0) {
    dVar29 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (dVar32 < dVar25) {
    lVar17 = uVar12 - 0x210;
    lVar21 = uVar12 - 0x90;
    lVar19 = uVar12 - 0xa0;
    lVar24 = 2;
    fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x18c) = fVar3;
    *(float *)((int)puVar7 + 0x184) = fVar3;
    *(float *)(puVar7 + 0x31) = fVar3;
    *(float *)(puVar7 + 0x30) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x184) = *(float *)((int)puVar7 + 0x184) * fVar4;
    *(float *)(puVar7 + 0x31) = *(float *)(puVar7 + 0x31) * fVar3;
    *(float *)((int)puVar7 + 0x18c) = *(float *)((int)puVar7 + 0x18c) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x180) = *(float *)((int)lVar17 + 0x170) * fVar3 * fVar3;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar12 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x180) = *(float *)((int)lVar17 + 0x180) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar22 = (int)lVar17;
      iVar8 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0x180)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar2);
  }
  *(float *)(puVar7 + 0x13) = (float)dVar32;
  FastEulerToMtx1(uVar12 - 0x180,uVar12 - 400);
  *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)(puVar7 + 0xe);
  *(undefined4 *)((int)puVar7 + 0xd4) = *(undefined4 *)((int)puVar7 + 0x74);
  *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(puVar7 + 0xf);
  *(undefined4 *)((int)puVar7 + 0xdc) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0xe4) = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 0x1d) = 0x80000000;
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x1f) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)(iVar23 + 0x1dc);
  *(float *)(puVar7 + 0x1e) = (float)(dVar33 * (double)*(float *)(iVar23 + 0x1dc));
  dVar29 = -0.25;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x104) = 0;
  *(undefined4 *)(puVar7 + 0x20) = 0;
  *(undefined4 *)(puVar7 + 0x21) = 0;
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x1f) = fVar1 + -0.25;
  *(undefined4 *)(puVar7 + 0x22) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0x114) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x23) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x11c) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x23) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x22) = (float)(dVar33 * (double)fVar2);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar22 = 1;
  lVar17 = uVar12 - 0x210;
  do {
    iVar8 = (int)lVar17;
    if (iVar22 < 2) {
      fVar1 = *(float *)(iVar8 + 0xe4);
      fVar2 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar1 = *(float *)(iVar8 + 0xe4);
      fVar2 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar22 = iVar22 + 2;
    *(float *)(iVar8 + 0xe8) = (float)((double)fVar2 + dVar26);
    *(float *)(iVar8 + 0xe4) = (float)((double)fVar1 + dVar25);
    lVar17 = lVar17 + 0x20;
  } while (iVar22 < 4);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(float *)(puVar7 + 0x1d) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1c) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x1f) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(float *)(puVar7 + 0x1f) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1e) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(iVar23 + 0x1d0);
  *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)(iVar23 + 0x1d4);
  fVar1 = *(float *)(iVar23 + 0x1d8);
  *(float *)(puVar7 + 0x21) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)(iVar23 + 0x1dc);
  fVar2 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x21) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x20) = (float)(dVar33 * (double)fVar2);
  *(undefined4 *)(puVar7 + 0x22) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0x114) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x23) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x11c) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x23) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x22) = (float)(dVar33 * (double)fVar2);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar22 = 0;
  lVar17 = lVar18;
  do {
    iVar8 = (int)lVar17;
    if (iVar22 < 2) {
      fVar2 = *(float *)(iVar8 + 0xe4);
      fVar1 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar2 = *(float *)(iVar8 + 0xe4);
      fVar1 = *(float *)(iVar8 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar22 = iVar22 + 1;
    *(float *)(iVar8 + 0xe8) = (float)((double)fVar1 + dVar26);
    *(float *)(iVar8 + 0xe4) = (float)((double)fVar2 + dVar25);
    lVar17 = lVar17 + 0x10;
  } while (iVar22 < 4);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0;
  *(undefined4 *)(puVar7 + 0x1f) = 0;
  *(undefined4 *)((int)puVar7 + 0xf4) = 0;
  *(undefined4 *)(puVar7 + 0x1e) = 0;
  *(float *)(puVar7 + 0x1d) = (float)((double)fVar1 + dVar29);
  *(float *)(puVar7 + 0x1c) = (float)(dVar33 * (double)fVar2);
  fVar1 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  uVar9 = EffectTexHeaders;
  *(float *)(puVar7 + 0x1e) = (float)((double)(float)(dVar33 * (double)fVar1) * dVar31);
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(iVar23 + 0x1e0);
  *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)(iVar23 + 0x1e4);
  fVar1 = *(float *)(iVar23 + 0x1e8);
  *(float *)(puVar7 + 0x21) = fVar1;
  *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)(iVar23 + 0x1ec);
  fVar2 = *(float *)(iVar23 + 0x1ec);
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0;
  *(undefined4 *)(puVar7 + 0x23) = 0;
  *(undefined4 *)((int)puVar7 + 0x114) = 0;
  *(undefined4 *)(puVar7 + 0x22) = 0;
  *(float *)(puVar7 + 0x21) = (float)((double)fVar1 + dVar30);
  *(float *)(puVar7 + 0x20) = (float)(dVar33 * (double)fVar2);
  fVar1 = *(float *)(iVar23 + 0x1dc);
  *(undefined4 *)(puVar7 + 0x23) = 0;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0x3f800000;
  *(float *)(puVar7 + 0x22) = (float)((double)(float)(dVar33 * (double)fVar1) * dVar31);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  uVar9 = EffectTexHeaders;
  iVar23 = 0;
  do {
    iVar22 = (int)lVar18;
    if (iVar23 < 2) {
      fVar1 = *(float *)(iVar22 + 0xe4);
      fVar2 = *(float *)(iVar22 + 0xe8);
      dVar25 = dVar29;
      dVar26 = dVar30;
    }
    else {
      fVar1 = *(float *)(iVar22 + 0xe4);
      fVar2 = *(float *)(iVar22 + 0xe8);
      dVar25 = dVar30;
      dVar26 = dVar29;
    }
    iVar23 = iVar23 + 2;
    *(float *)(iVar22 + 0xe8) = (float)((double)fVar2 + dVar26);
    *(float *)(iVar22 + 0xe4) = (float)((double)fVar1 + dVar25);
    lVar18 = lVar18 + 0x20;
  } while (iVar23 < 4);
  FastDrawQuad(uVar12 - 0x140,uVar12 - 0x180,1,uVar9,9);
  return;
}


// 0x03194d8 (0x58 bytes)
void M253_003194d8(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x05') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\x05';
  }
  return;
}


// 0x0319530 (0x58 bytes)
void M253_00319530(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}


// 0x0319588 (0x58 bytes)
void M253_00319588(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}


// 0x03195e0 (0x90 bytes)
undefined8 M253_003195e0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = M849_0048afe8();
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(iVar1 + 0x200) = 0x40800000;
  *(undefined4 *)(iVar1 + 0x208) = 0x3f000000;
  if (*(char *)(param_1 + 0x53) != '\x02') {
    MB_SetAnimation(param_1,2,0,3);
  }
  *(undefined2 *)(iVar1 + 200) = 0;
  return uVar2;
}


// 0x0319670 (0x40 bytes)
longlong M253_00319670(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03196c0 (0x34c bytes)
// inlined: FastRSqrt @0x319810, FastRSqrt @0x319880
// strings: 007ffc20: '>333' (raw)

void M253_003196c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
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
  char acVar18 [4];
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  float local_e0 [36];
  
  iVar6 = *(int *)(param_1 + 0x78);
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  acVar18 = GameCamera.field8_0x14c;
  fVar7 = 0.0;
  fVar1 = *(float *)(iVar6 + 0x224);
  fVar2 = *(float *)(iVar6 + 0x220);
  fVar16 = GameCamera.posY - fVar1;
  fVar3 = *(float *)(iVar6 + 0x228);
  fVar17 = GameCamera.posX - fVar2;
  fVar15 = GameCamera.posZ - fVar3;
  fVar4 = *(float *)(iVar6 + 0x22c);
  fVar11 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
  fVar10 = fVar7;
  fVar9 = fVar7;
  fVar8 = fVar7;
  if (SQRT(fVar11) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar11);
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar10 = fVar17 * fVar8;
    fVar9 = fVar16 * fVar8;
    fVar8 = fVar15 * fVar8;
  }
  fVar15 = fVar10 * fVar10 + --(fVar9 * fVar9);
  fVar11 = fVar7;
  if (SQRT(fVar15) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar15);
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar15 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar11 = fVar10 * fVar7;
    fVar7 = -(fVar9 * fVar7);
  }
  fVar16 = fVar10 * DAT_007ffc1c;
  pfVar20 = local_e0;
  pfVar19 = (float *)&DAT_007ffc30;
  lVar21 = 4;
  fVar17 = fVar9 * DAT_007ffc1c;
  fVar15 = fVar8 * DAT_007ffc1c;
  do {
    fVar12 = *pfVar19 * DAT_007ffc20;
    *pfVar20 = fVar12;
    fVar13 = pfVar19[1] * DAT_007ffc20;
    pfVar20[1] = fVar13;
    fVar14 = pfVar19[2] * DAT_007ffc20;
    pfVar20[2] = fVar14;
    fVar5 = pfVar19[3];
    pfVar19 = pfVar19 + 4;
    pfVar20[3] = fVar5 * fVar4 + fVar12 * (float)acVar18;
    pfVar20[2] = (fVar15 + fVar3) * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar7) * fVar14 + fVar12 * fVar8 + 0.0;
    *pfVar20 = (fVar16 + fVar2) * fVar5 +
               (fVar9 * 0.0 - fVar8 * fVar11) * fVar14 + fVar12 * fVar10 + fVar13 * fVar7;
    pfVar20[1] = (fVar17 + fVar1) * fVar5 +
                 (fVar8 * fVar7 - 0.0) * fVar14 + fVar12 * fVar9 + fVar13 * fVar11;
    pfVar20 = pfVar20 + 4;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  FastDrawQuad(local_e0,0,0,EffectTexHeaders,9);
  return;
}


// 0x0319a0c (0x14 bytes)
void M253_00319a0c(void)

{
  DAT_007ffcbc = 0x10000;
  return;
}


// 0x0319a58 (0x5d8 bytes)
void M253_00319a58(undefined4 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auStack_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<80> auStack_120;
  
  GetBonePosition(param_1,param_2,auStack_150);
  GetBoneTransformations(param_1,param_2,auStack_120);
  iVar6 = 0;
  if (0 < param_3) {
    dVar8 = -0.05000000074505806;
    dVar9 = 0.05000000074505806;
    dVar10 = 1.2000000476837158;
    dVar11 = 0.0;
    dVar12 = 0.25;
    dVar13 = 1.5;
    do {
      MB_randRot();
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      if (param_3 / 3 < iVar6) {
        MB_randRangeFloat(DAT_007ffdfc,(float)((double)DAT_007ffdfc * dVar10));
        MB_randRangeFloat((float)dVar11,DAT_007ffe04);
        MB_randRangeFloat((float)dVar11,DAT_007ffe04);
      }
      else {
        MB_randRangeFloat((float)dVar11,DAT_007ffdfc);
        MB_randRangeFloat((float)dVar11,(float)((double)DAT_007ffe04 * dVar12));
        MB_randRangeFloat((float)dVar11,(float)((double)DAT_007ffe04 * dVar12));
      }
      uVar2 = DAT_007ffdf8;
      uVar1 = DAT_007ffdf4;
      dVar7 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe08,
                                 (float)((double)(longlong)DAT_007ffe08 * dVar10));
      uVar3 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe0c,
                                 (float)((double)(longlong)DAT_007ffe0c * dVar10));
      uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat
                                ((float)(longlong)DAT_007ffe10,
                                 (float)((double)(longlong)DAT_007ffe10 * dVar13));
      uVar5 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      SpawnPart_2(auStack_150,local_140,local_130,uVar1,uVar2,uVar3,uVar4,uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  return;
}


// 0x031a070 (0x65c bytes)
// inlined: FastAtan2 @0x31a19c
ulonglong M253_0031a070(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar16;
  ulonglong uVar15;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  double dVar29;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 0x110;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar15;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r31;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x1b] = unaff_r30;
  pvVar5 = param_1->pVar;
  piVar8 = *(int **)((int)Splines + (int)(param_2 << 2));
  dVar28 = (double)(float)piVar8[*(int *)((int)pvVar5 + 0x168) * 4 + 4];
  dVar27 = (double)(float)piVar8[*(int *)((int)pvVar5 + 0x168) * 4 + 5];
  fVar1 = (float)(dVar28 - (double)(param_1->pos).x);
  fVar2 = (float)(dVar27 - (double)(param_1->pos).y);
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar9 + 0xe) = fVar1;
  *(float *)((int)puVar9 + 0x74) = fVar2;
  *(float *)(puVar9 + 0xf) = fVar3 - fVar4;
  dVar26 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar29 = dVar26;
  if (0.0 < fVar1) {
    lVar18 = uVar15 - 0x100;
    lVar22 = uVar15 - 0x84;
    lVar20 = uVar15 - 0x94;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = fVar1;
    *(float *)((int)puVar9 + 0x7c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
    *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar1;
    *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar1 * fVar1;
      iVar16 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar15 - 0x94;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar16 = (int)lVar19;
      iVar7 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x7c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
  }
  OrganicDeltAng
            ((float)dVar29,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
             g_FrameTime * 3.1415927,&(param_1->rotation).z,0x320000,
             (float *)((int)pvVar5 + 0x158));
  dVar29 = 2.0;
  Delt(*(float *)((int)pvVar5 + 0x16c),DAT_0071f418 * 2.0,(float *)((int)pvVar5 + 0x180));
  fVar1 = (param_1->rotation).z;
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = *(float *)((int)pvVar5 + 0x180);
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar10 * fVar10;
  fVar3 = fVar4 * fVar4;
  fVar13 = fVar2 * fVar2 * fVar10;
  fVar11 = fVar3 * fVar3 * fVar4;
  fVar14 = fVar2 * fVar13;
  fVar12 = fVar3 * fVar11;
  (param_1->pos).y =
       (fVar2 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1 + (param_1->pos).y;
  (param_1->pos).x =
       (fVar3 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) * fVar1
       + (param_1->pos).x;
  dVar25 = 0.5;
  dVar24 = (double)GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
  fVar1 = (float)((double)(param_1->pos).y - dVar27);
  fVar2 = (float)((double)(param_1->pos).x - dVar28);
  (param_1->pos).z = (float)dVar24;
  fVar4 = g_FrameTime;
  if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) < dVar25) {
    iVar16 = *(int *)((int)pvVar5 + 0x168) + 1;
    *(int *)((int)pvVar5 + 0x168) = iVar16 - (iVar16 / *piVar8) * *piVar8;
  }
  dVar28 = (double)(*(float *)((int)pvVar5 + 0x180) / (DAT_007ffdc0 * fVar4));
  if ((dVar28 <= dVar29) && (dVar29 = dVar28, dVar28 < dVar26)) {
    dVar29 = dVar26;
  }
  if (*(int *)((int)pvVar5 + 0x160) != 0) {
    *(float *)(*(int *)((int)pvVar5 + 0x160) + 0x58) = (float)dVar29;
    iVar16 = *(int *)((int)pvVar5 + 0x160);
    *(f32 *)(iVar16 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (param_1->rotation).w;
    iVar16 = *(int *)((int)pvVar5 + 0x160);
    *(f32 *)(iVar16 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar16 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar16 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (param_1->pos).w;
  }
  if (*(int *)((int)pvVar5 + 0x164) != 0) {
    *(float *)(*(int *)((int)pvVar5 + 0x164) + 0x58) = (float)dVar29;
    iVar16 = *(int *)((int)pvVar5 + 0x164);
    *(f32 *)(iVar16 + 0x40) = (param_1->rotation).x;
    *(f32 *)(iVar16 + 0x44) = (param_1->rotation).y;
    *(f32 *)(iVar16 + 0x48) = (param_1->rotation).z;
    *(f32 *)(iVar16 + 0x4c) = (param_1->rotation).w;
    iVar16 = *(int *)((int)pvVar5 + 0x164);
    *(f32 *)(iVar16 + 0x10) = (param_1->pos).x;
    *(f32 *)(iVar16 + 0x14) = (param_1->pos).y;
    *(f32 *)(iVar16 + 0x18) = (param_1->pos).z;
    *(f32 *)(iVar16 + 0x1c) = (param_1->pos).w;
  }
  if (SQRT(*(float *)((int)pvVar5 + 0x48) * *(float *)((int)pvVar5 + 0x48) +
           *(float *)((int)pvVar5 + 0x40) * *(float *)((int)pvVar5 + 0x40) +
           *(float *)((int)pvVar5 + 0x44) * *(float *)((int)pvVar5 + 0x44)) <=
      g_FrameTime * 0.1) {
    iVar16 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar5 + 0x15c));
    uVar15 = (ulonglong)iVar16;
    if (iVar16 != 0) {
      iVar16 = *(int *)((int)pvVar5 + 0x15c);
      iVar7 = g_SoundChannels[iVar16].vol;
      if (iVar7 < 0x100) {
        sound_Kill(iVar16);
        uVar15 = 0xffffffffffffffff;
        *(undefined4 *)((int)pvVar5 + 0x15c) = 0xffffffff;
      }
      else {
        puVar9[0x14] = (longlong)(int)(animationSpeed * 60.5);
        iVar16 = sound_SetVol(iVar16,iVar7 - 0x400 / *(int *)((int)puVar9 + 0xa4));
        uVar15 = (ulonglong)iVar16;
      }
    }
  }
  else {
    iVar16 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar5 + 0x15c));
    if (iVar16 == 0) {
      iVar16 = PlayMobySound(1,4,param_1);
      *(int *)((int)pvVar5 + 0x15c) = iVar16;
      iVar16 = sound_SetVol(iVar16,1);
      uVar15 = (ulonglong)iVar16;
    }
    else {
      iVar16 = *(int *)((int)pvVar5 + 0x15c);
      uVar6 = g_SoundChannels[iVar16].vol;
      uVar15 = (ulonglong)uVar6;
      if ((int)uVar6 < 0x400) {
        puVar9[0x14] = (longlong)(int)(animationSpeed * 60.5);
        iVar16 = sound_SetVol(iVar16,uVar6 + 0x400 / *(int *)((int)puVar9 + 0xa4));
        uVar15 = (ulonglong)iVar16;
      }
    }
  }
  return uVar15;
}


// 0x031a728 (0xbd0 bytes)
// inlined: FastAtan2 @0x31aea4, FastAtan2 @0x31b050
void M253_0031a728(MobyInstance *param_1)

{
  longlong lVar1;
  byte bVar2;
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
  MOBY_OCLASSES MVar15;
  ushort uVar16;
  void *pvVar17;
  ulonglong *puVar18;
  Cuboid *pCVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  MobyInstance *pMVar25;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar29;
  ulonglong unaff_r28;
  MobyInstance *pMVar30;
  ulonglong unaff_r29;
  ushort *puVar31;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar41;
  ulonglong in_f16;
  double dVar42;
  ulonglong in_f17;
  double dVar43;
  ulonglong in_f18;
  double dVar44;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  double dVar46;
  ulonglong in_f21;
  double dVar47;
  ulonglong in_f22;
  double dVar48;
  ulonglong in_f23;
  double dVar49;
  ulonglong in_f24;
  double dVar50;
  ulonglong in_f25;
  double dVar51;
  ulonglong in_f26;
  double dVar52;
  ulonglong in_f27;
  double dVar53;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  double dVar55;
  ulonglong in_f30;
  double dVar56;
  ulonglong in_f31;
  double dVar57;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar1 = uVar21 - 0x240;
  puVar18 = (ulonglong *)lVar1;
  *puVar18 = uVar21;
  puVar18[0x4a] = in_LR;
  puVar18[0x36] = in_f14;
  puVar18[0x37] = in_f15;
  puVar18[0x38] = in_f16;
  puVar18[0x39] = in_f17;
  puVar18[0x3a] = in_f18;
  puVar18[0x3b] = in_f19;
  puVar18[0x3c] = in_f20;
  puVar18[0x3d] = in_f21;
  puVar18[0x3e] = in_f22;
  puVar18[0x3f] = in_f23;
  puVar18[0x40] = in_f24;
  puVar18[0x41] = in_f25;
  puVar18[0x42] = in_f26;
  puVar18[0x43] = in_f27;
  puVar18[0x44] = in_f28;
  puVar18[0x45] = in_f29;
  puVar18[0x46] = in_f30;
  puVar18[0x47] = in_f31;
  puVar18[0x32] = unaff_r28;
  puVar18[0x34] = unaff_r30;
  puVar18[0x35] = unaff_r31;
  pvVar17 = param_1->pVar;
  puVar18[0x2f] = unaff_r25;
  pMVar30 = g_MobyInstance;
  bVar2 = g_MobyInstance[*(int *)((int)pvVar17 + 0x144)].group;
  puVar18[0x33] = unaff_r29;
  puVar31 = (ushort *)(&g_MobyGroups)[bVar2];
  puVar18[0x31] = unaff_r27;
  puVar18[0x30] = unaff_r26;
  puVar18[0x2e] = unaff_r24;
  if (puVar31 != (ushort *)0x0) {
    iVar29 = 0;
    dVar57 = -1.0;
    dVar56 = 1.0;
    dVar55 = -0.2617993950843811;
    dVar54 = 0.2617993950843811;
    dVar53 = 0.0;
    pMVar30 = pMVar30 + (*puVar31 & 0x7fff);
    dVar52 = 1.570796251296997;
    dVar51 = 3.141592502593994;
    dVar50 = -3.141592502593994;
    dVar49 = -0.16666656732559204;
    dVar48 = 0.008333025500178337;
    dVar47 = -0.0001980741071747616;
    dVar46 = 2.601886990305502e-06;
    dVar45 = 15.0;
    dVar44 = 8.0;
    dVar43 = 12.0;
    dVar42 = 60.0;
    dVar41 = 90.0;
    do {
      if (numSpawnableMobys < 0x32) break;
      uVar22 = MB_randInt(0xff);
      if ((uVar22 & 1) == 0) {
        pMVar25 = CreateMoby(0x311);
      }
      else {
        pMVar25 = CreateMoby(DOOR_LEFT|BOLT_CIRCLENUT);
      }
      if (pMVar25 != (MobyInstance *)0x0) {
        *(float *)(puVar18 + 0x2c) = (float)dVar53;
        pMVar25->drawDistance = 0x40;
        pMVar25->updateDistance = -1;
        pMVar25->enabled = '\x01';
        dVar53 = (double)MB_randRot();
        (pMVar25->rotation).x = (float)dVar53;
        dVar53 = (double)MB_randRot();
        (pMVar25->rotation).y = (float)dVar53;
        dVar53 = (double)MB_randRot();
        (pMVar25->rotation).z = (float)dVar53;
        dVar53 = (double)MB_randRangeFloat((float)dVar57,(float)dVar56);
        dVar33 = (double)MB_randRangeFloat((float)dVar57,(float)dVar56);
        dVar34 = (double)MB_randRangeFloat((float)dVar57,(float)dVar56);
        pCVar19 = Cuboids + *(int *)((int)pvVar17 + 0x148);
        fVar3 = (pCVar19->matrix).v1.y;
        fVar4 = (pCVar19->matrix).v1.z;
        fVar5 = (pCVar19->matrix).v0.y;
        fVar6 = (pCVar19->matrix).v1.w;
        fVar7 = (pCVar19->matrix).v0.z;
        fVar8 = (pCVar19->matrix).v0.w;
        fVar9 = (pCVar19->matrix).v2.y;
        fVar10 = (pCVar19->matrix).v2.z;
        fVar11 = (pCVar19->matrix).v2.w;
        fVar12 = (pCVar19->pos).y;
        fVar13 = (pCVar19->pos).z;
        fVar14 = (pCVar19->pos).w;
        (pMVar25->pos).x =
             (float)((double)(pCVar19->matrix).v2.x * dVar34 +
                    (double)(float)((double)(pCVar19->matrix).v0.x * dVar53 +
                                   (double)(float)((double)(pCVar19->matrix).v1.x * dVar33))) +
             (pCVar19->pos).x;
        (pMVar25->pos).y =
             (float)((double)fVar9 * dVar34 +
                    (double)(float)((double)fVar5 * dVar53 + (double)(float)((double)fVar3 * dVar33)
                                   )) + fVar12;
        (pMVar25->pos).z =
             (float)((double)fVar10 * dVar34 +
                    (double)(float)((double)fVar7 * dVar53 + (double)(float)((double)fVar4 * dVar33)
                                   )) + fVar13;
        (pMVar25->pos).w =
             (float)((double)fVar11 * dVar34 +
                    (double)(float)((double)fVar8 * dVar53 + (double)(float)((double)fVar6 * dVar33)
                                   )) + fVar14;
        dVar33 = (double)MB_randRangeFloat((float)dVar55,(float)dVar54);
        dVar34 = (double)(float)(dVar33 + dVar52);
        dVar53 = (double)(float)(dVar51 - dVar33);
        if (dVar33 - (double)(float)(dVar51 - dVar33) < 0.0) {
          dVar53 = dVar33;
        }
        dVar35 = (double)(float)(dVar51 - dVar34);
        if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
          dVar35 = dVar34;
        }
        dVar38 = (double)(float)(dVar50 - dVar33);
        if ((double)(float)(dVar50 - dVar33) - dVar53 < 0.0) {
          dVar38 = dVar53;
        }
        dVar33 = (double)g_FrameTime;
        *(undefined4 *)((int)puVar18 + 0xcc) = 0;
        *(undefined4 *)(puVar18 + 0x19) = 0;
        *(undefined4 *)((int)puVar18 + 0xc4) = 0;
        *(undefined4 *)(puVar18 + 0x18) = 0;
        dVar53 = (double)(float)(dVar50 - dVar34);
        if ((double)(float)(dVar50 - dVar34) - dVar35 < 0.0) {
          dVar53 = dVar35;
        }
        dVar34 = (double)(float)(dVar38 * dVar38);
        *(undefined4 *)(puVar18 + 0x1b) = 0;
        dVar35 = (double)(float)(dVar53 * dVar53);
        dVar39 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar38));
        dVar36 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar53));
        dVar37 = (double)(float)(dVar34 * dVar39);
        dVar40 = (double)(float)(dVar35 * dVar36);
        *(float *)((int)puVar18 + 0xd4) =
             (float)(dVar33 * dVar45) *
             (float)((double)(float)(dVar34 * dVar37) * dVar46 +
                    (double)(float)(dVar37 * dVar47 +
                                   (double)(float)(dVar39 * dVar48 +
                                                  (double)(float)((double)(float)(dVar34 * dVar38) *
                                                                  dVar49 + dVar38))));
        *(float *)(puVar18 + 0x1a) =
             (float)(dVar33 * dVar45) *
             (float)((double)(float)(dVar35 * dVar40) * dVar46 +
                    (double)(float)(dVar40 * dVar47 +
                                   (double)(float)(dVar36 * dVar48 +
                                                  (double)(float)((double)(float)(dVar35 * dVar53) *
                                                                  dVar49 + dVar53))));
        dVar53 = (double)MB_randRangeFloat
                                   ((float)(dVar33 * dVar44),(float)(dVar33 * dVar43));
        *(float *)(puVar18 + 0x1b) = (float)dVar53;
        MB_randRangeFloat((float)dVar42,(float)dVar41);
        uVar23 = FastDoubleToInt();
        FUN_003509b0(pMVar25,param_1,uVar21 - 0x170,uVar21 - 0x180,uVar23);
        dVar53 = (double)*(float *)(puVar18 + 0x2c);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < 0x28);
    while( true ) {
      if ((pMVar30->state < 0x7f) && (pMVar30 != param_1)) {
        MVar15 = pMVar30->oClass;
        if ((short)MVar15 < 599 && 0x24b < (short)MVar15) {
          dVar42 = (double)MB_randRangeFloat((float)dVar55,(float)dVar54);
          dVar57 = (double)(float)(dVar42 + dVar52);
          dVar41 = (double)(float)(dVar51 - dVar42);
          if (dVar42 - (double)(float)(dVar51 - dVar42) < 0.0) {
            dVar41 = dVar42;
          }
          dVar33 = (double)(float)(dVar51 - dVar57);
          if (dVar57 - (double)(float)(dVar51 - dVar57) < 0.0) {
            dVar33 = dVar57;
          }
          dVar34 = (double)(float)(dVar50 - dVar42);
          if ((double)(float)(dVar50 - dVar42) - dVar41 < 0.0) {
            dVar34 = dVar41;
          }
          dVar42 = (double)g_FrameTime;
          *(undefined4 *)(puVar18 + 0x1d) = 0;
          dVar41 = (double)(float)(dVar50 - dVar57);
          if ((double)(float)(dVar50 - dVar57) - dVar33 < 0.0) {
            dVar41 = dVar33;
          }
          dVar57 = (double)(float)(dVar34 * dVar34);
          dVar33 = (double)(float)(dVar41 * dVar41);
          dVar36 = (double)(float)(dVar57 * (double)(float)(dVar57 * dVar34));
          dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar41));
          dVar38 = (double)(float)(dVar57 * dVar36);
          dVar37 = (double)(float)(dVar33 * dVar35);
          *(float *)((int)puVar18 + 0xe4) =
               (float)(dVar42 * dVar45) *
               (float)((double)(float)(dVar57 * dVar38) * dVar46 +
                      (double)(float)(dVar38 * dVar47 +
                                     (double)(float)(dVar36 * dVar48 +
                                                    (double)(float)((double)(float)(dVar57 * dVar34)
                                                                    * dVar49 + dVar34))));
          *(float *)(puVar18 + 0x1c) =
               (float)(dVar42 * dVar45) *
               (float)((double)(float)(dVar33 * dVar37) * dVar46 +
                      (double)(float)(dVar37 * dVar47 +
                                     (double)(float)(dVar35 * dVar48 +
                                                    (double)(float)((double)(float)(dVar33 * dVar41)
                                                                    * dVar49 + dVar41))));
          dVar41 = (double)MB_randRangeFloat
                                     ((float)(dVar42 * dVar44),(float)(dVar42 * dVar43));
          *(float *)(puVar18 + 0x1d) = (float)dVar41;
          MVar15 = pMVar30->oClass;
          fVar3 = (param_1->pos).x;
          fVar4 = (param_1->pos).y;
          if ((short)MVar15 < 0x251) {
            if ((short)MVar15 < 0x24e) {
              if (0x24b < (short)MVar15) {
                if ((short)MVar15 < 0x24d) {
                  *(undefined4 *)((int)puVar18 + 0xfc) = 0;
                  *(undefined4 *)(puVar18 + 0x1e) = 0x3fd08312;
                  *(undefined4 *)((int)puVar18 + 0xf4) = 0xbfaba5e3;
                  *(undefined4 *)(puVar18 + 0x1f) = 0x4137ae14;
                }
                else {
                  *(undefined4 *)(puVar18 + 0x1e) = 0x3fa645a2;
                  *(undefined4 *)((int)puVar18 + 0xfc) = 0;
                  *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0b1db23;
                  *(undefined4 *)(puVar18 + 0x1f) = 0x4137ae14;
                }
              }
            }
            else if ((short)MVar15 < 0x24f) {
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)(puVar18 + 0x1e) = 0x3f210625;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc021ba5e;
              *(undefined4 *)(puVar18 + 0x1f) = 0x405a2d0e;
            }
            else if ((short)MVar15 < 0x250) {
              *(undefined4 *)(puVar18 + 0x1e) = 0x3c9ba5e3;
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0c6147b;
              *(undefined4 *)(puVar18 + 0x1f) = 0x405a2d0e;
            }
            else {
              *(undefined4 *)((int)puVar18 + 0xfc) = 0;
              *(undefined4 *)(puVar18 + 0x1e) = 0x404c8b44;
              *(undefined4 *)((int)puVar18 + 0xf4) = 0xc006b852;
              *(undefined4 *)(puVar18 + 0x1f) = 0x40f91687;
            }
          }
          else if (MVar15 == 0x256) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x3f628f5c;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0ba5e35;
            *(undefined4 *)(puVar18 + 0x1f) = 0x41039581;
          }
          else if (MVar15 == 0x255) {
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x3fcc49ba;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc020c49c;
            *(undefined4 *)(puVar18 + 0x1f) = 0x4105be77;
          }
          else if (MVar15 == 0x254) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x3fc4fdf4;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xbf891687;
            *(undefined4 *)(puVar18 + 0x1f) = 0x41524dd3;
          }
          else if (MVar15 == 0x253) {
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x40524dd3;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0dd999a;
            *(undefined4 *)(puVar18 + 0x1f) = 0x403d70a4;
          }
          else if (MVar15 == 0x252) {
            *(undefined4 *)(puVar18 + 0x1e) = 0x408a8f5c;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc0ce5e35;
            *(undefined4 *)(puVar18 + 0x1f) = 0x40ecb439;
          }
          else if (MVar15 == 0x251) {
            *(undefined4 *)(puVar18 + 0x1f) = 0x40280000;
            *(undefined4 *)((int)puVar18 + 0xfc) = 0;
            *(undefined4 *)(puVar18 + 0x1e) = 0x40070a3d;
            *(undefined4 *)((int)puVar18 + 0xf4) = 0xc040d4fe;
          }
          dVar57 = ABS((double)*(float *)(puVar18 + 0x1c));
          dVar41 = ABS((double)*(float *)((int)puVar18 + 0xe4));
          *(float *)((int)puVar18 + 0x11c) = (float)(dVar57 - dVar41);
          uVar22 = (ulonglong)(*(uint *)(puVar18 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x11c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0xe4) >> 0x1d) & 4;
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar42 = dVar57;
          if ((double)*(float *)((int)puVar18 + 0x11c) - dVar53 < 0.0) {
            dVar42 = dVar41;
          }
          if ((double)*(float *)((int)puVar18 + 0x11c) - dVar53 < 0.0) {
            dVar41 = dVar57;
          }
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar57 = dVar53;
          if (dVar53 < dVar42) {
            lVar24 = uVar21 - 0x230;
            lVar26 = uVar21 - 0x100;
            lVar27 = uVar21 - 0xf0;
            lVar32 = 2;
            fVar7 = (float)(dVar41 - dVar42) / (float)(dVar41 + dVar42);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x14c) = fVar7;
            *(float *)((int)puVar18 + 0x144) = fVar7;
            *(float *)(puVar18 + 0x29) = fVar7;
            *(float *)(puVar18 + 0x28) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar18 + 0x144) = *(float *)((int)puVar18 + 0x144) * fVar8;
            *(float *)(puVar18 + 0x29) = *(float *)(puVar18 + 0x29) * fVar7;
            *(float *)((int)puVar18 + 0x14c) = *(float *)((int)puVar18 + 0x14c) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x130) * fVar7 * fVar7;
              iVar29 = (int)lVar26;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar29 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar32 = 4;
            lVar27 = uVar21 - 0x100;
            pfVar28 = (float *)&DAT_007358e0;
            lVar24 = lVar1;
            lVar26 = lVar27;
            do {
              fVar7 = *pfVar28;
              fVar8 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x140) * fVar7;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
              lVar26 = lVar26 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar26 = 2;
            lVar24 = lVar1;
            dVar41 = dVar53;
            do {
              iVar29 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar20 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar29 + 0x140)) +
                                *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                               *(float *)(iVar20 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar57 = (double)((float)(dVar41 + 0.7853981852531433) * fVar5 + fVar6);
          }
          fVar3 = GameCamera.posX - fVar3;
          fVar4 = GameCamera.posY - fVar4;
          dVar33 = ABS((double)fVar3);
          dVar42 = ABS((double)fVar4);
          *(float *)(puVar18 + 0x22) = fVar3;
          *(float *)((int)puVar18 + 0x114) = fVar4;
          *(float *)(puVar18 + 0x23) = (float)(dVar33 - dVar42);
          uVar22 = (ulonglong)(*(uint *)(puVar18 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x114) >> 0x1d) & 4;
          dVar41 = ABS((double)*(float *)(puVar18 + 0x22));
          if ((double)*(float *)(puVar18 + 0x23) - dVar53 < 0.0) {
            dVar41 = dVar42;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar42 = ABS((double)*(float *)((int)puVar18 + 0x114));
          if ((double)*(float *)(puVar18 + 0x23) - dVar53 < 0.0) {
            dVar42 = dVar33;
          }
          fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar33 = dVar53;
          if (dVar53 < dVar41) {
            lVar24 = uVar21 - 0x230;
            lVar27 = uVar21 - 0x110;
            lVar26 = uVar21 - 0x120;
            lVar32 = 2;
            fVar5 = (float)(dVar42 - dVar41) / (float)(dVar42 + dVar41);
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar18 + 300) = fVar5;
            *(float *)((int)puVar18 + 0x124) = fVar5;
            *(float *)(puVar18 + 0x25) = fVar5;
            *(float *)(puVar18 + 0x24) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar18 + 0x124) = *(float *)((int)puVar18 + 0x124) * fVar6;
            *(float *)(puVar18 + 0x25) = *(float *)(puVar18 + 0x25) * fVar5;
            *(float *)((int)puVar18 + 300) = *(float *)((int)puVar18 + 300) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x110) * fVar5 * fVar5;
              iVar29 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar29 + 4) * fVar5 * fVar5;
              lVar27 = lVar27 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar32 = 4;
            lVar27 = uVar21 - 0x120;
            pfVar28 = (float *)&DAT_007358e0;
            lVar24 = lVar1;
            lVar26 = lVar27;
            do {
              fVar5 = *pfVar28;
              fVar6 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x120) * fVar5;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
              lVar26 = lVar26 + 8;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar26 = 2;
            lVar24 = lVar1;
            dVar41 = dVar53;
            do {
              iVar29 = (int)lVar24;
              iVar20 = (int)lVar27;
              lVar24 = lVar24 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar29 + 0x120)) +
                                *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                               *(float *)(iVar20 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar33 = (double)((float)(dVar41 + 0.7853981852531433) * fVar3 + fVar4);
          }
          dVar41 = (double)FastSubRots((float)dVar57,(float)dVar33);
          if (dVar54 <= dVar41) {
            MB_randRangeFloat(30.0,45.0);
            uVar23 = FastDoubleToInt();
            FUN_003509b0(pMVar30,param_1,uVar21 - 0x160,uVar21 - 0x150,uVar23);
          }
          else {
            MB_randRangeFloat(10.0,20.0);
            uVar23 = FastDoubleToInt();
            FUN_003509b0(pMVar30,param_1,uVar21 - 0x160,uVar21 - 0x150,uVar23);
          }
        }
        else if (MVar15 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
          *(undefined4 *)((int)puVar18 + 0x10c) = 0;
          *(undefined4 *)(puVar18 + 0x21) = 0;
          *(undefined4 *)((int)puVar18 + 0x104) = 0;
          *(undefined4 *)(puVar18 + 0x20) = 0;
          puVar18[0x12] = 0xffffffffffffffff;
          puVar18[0x14] = 1;
          puVar18[0x15] = 1;
          puVar18[0x16] = 0xffffffffffffffff;
          puVar18[0x17] = 0;
          MB_genericExplosion
                    (dVar53,dVar53,dVar43,dVar44,0x4022000000000000,dVar56,dVar45,pMVar30,
                     uVar21 - 0x140,&pMVar30->pos,0xffffffffffffffff,1,0x32,0x3c,0x3c);
          DeleteMoby(pMVar30);
        }
      }
      uVar16 = *puVar31;
      puVar31 = puVar31 + 1;
      if ((short)uVar16 < -1) break;
      pMVar30 = g_MobyInstance + (*puVar31 & 0x7fff);
    }
  }
  return;
}


// 0x031b2f8 (0xfc bytes)
void M253_0031b2f8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyInstance *moby;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           (&g_MobyGroups)[(byte)g_MobyInstance[*(int *)((int)param_1->pVar + 0x144)].group]
  ;
  if (puVar2 != (ushort *)0x0) {
    moby = g_MobyInstance + (*puVar2 & 0x7fff);
    while( true ) {
      if ((moby->state < 0x7f) && (moby != param_1)) {
        MVar1 = moby->oClass;
        if ((short)MVar1 < 599 && 0x24b < (short)MVar1) {
          DeleteMoby(moby);
        }
        else if (MVar1 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
          DeleteMoby(moby);
        }
      }
      if ((short)*puVar2 < -1) break;
      moby = g_MobyInstance + (puVar2[1] & 0x7fff);
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


// 0x031b438 (0xd84 bytes)
// inlined: FastAtan2 @0x31bd34, FastAtan2 @0x31bed0
void M253_0031b438(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  undefined2 uVar9;
  void *pvVar10;
  int iVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar20;
  longlong lVar19;
  longlong lVar21;
  undefined4 *unused;
  MobyInstance *unused_00;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  ulonglong unaff_r27;
  vec4 *pvVar25;
  ulonglong unaff_r28;
  undefined8 uVar26;
  ulonglong unaff_r29;
  vec4 *pvVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  longlong lVar29;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar29 = uVar16 - 400;
  puVar14 = (ulonglong *)lVar29;
  *puVar14 = uVar16;
  puVar14[0x34] = in_LR;
  puVar14[0x2f] = in_f29;
  puVar14[0x30] = in_f30;
  puVar14[0x31] = in_f31;
  puVar14[0x2e] = unaff_r31;
  puVar14[0x2b] = unaff_r28;
  uVar26 = 0;
  puVar14[0x2d] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar28 = ZEXT48(pvVar10);
  dVar36 = 0.0;
  puVar14[0x2c] = unaff_r29;
  puVar14[0x2a] = unaff_r27;
  *(undefined4 *)((int)puVar14 + 0xf4) = 0;
  uVar17 = MB_damage(param_1,0x330000,0);
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    uVar26 = MB_damage(*(int *)((int)pvVar10 + 0x160),0x210000,0);
  }
  uVar18 = 0;
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    uVar18 = MB_damage(*(int *)((int)pvVar10 + 0x164),0x210000,0);
  }
  iVar20 = ____MB_PickMinAbsField2c_Of4(uVar17,uVar26,uVar18,0);
  if (((iVar20 != 0) && (*(int *)(iVar20 + 0x20) != 0)) &&
     ((sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6), sVar8 == 0x1a9 || (sVar8 == 0x47)))) {
    iVar20 = 0;
  }
  MB_HandleDamage(param_1,iVar20,uVar28 + 0x20,0,puVar14 + 0x1e,(int)puVar14 + 0xf4,0,4);
  if ((*(int *)(puVar14 + 0x1e) != 1) && (param_1->state != '\0')) {
    iVar11 = *(int *)((int)puVar14 + 0xf4);
    fVar1 = *(float *)((int)puVar14 + 0xf4);
    fVar2 = *(float *)((int)pvVar10 + 0x20) - fVar1;
    *(float *)((int)pvVar10 + 0x20) = fVar2;
    if (iVar11 != 0) {
      PlayMobySound(4,0,param_1);
      fVar2 = *(float *)((int)pvVar10 + 0x20);
      fVar1 = *(float *)((int)puVar14 + 0xf4);
    }
    if ((double)fVar2 <= dVar36) {
      if (param_1->state == 'c') {
        if ((((Level == Batalia) &&
             (iVar11 = *(int *)((int)pvVar10 + 0x184), iVar20 != 0 && iVar11 != 0)) &&
            (*(int *)(iVar20 + 0x20) != 0)) && (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) == 0x661)
           ) {
          if (iVar11 == 1) {
            g_Batalia_TankKilledBySandmouse[0] = 1;
          }
          if (iVar11 == 2) {
            g_Batalia_TankKilledBySandmouse[1] = 1;
          }
          if (iVar11 == 3) {
            g_Batalia_TankKilledBySandmouse[2] = 1;
          }
          if (iVar11 == 4) {
            g_Batalia_TankKilledBySandmouse[3] = 1;
          }
          if ((g_Batalia_TankKilledBySandmouse[0] != 0) && (g_Batalia_TankKilledBySandmouse[1] != 0)
             ) {
            MB_UnlockSkillPoint(0xd);
          }
        }
        fVar3 = (param_1->pos).y;
        *(f32 *)(puVar14 + 0x1c) = (param_1->pos).x;
        fVar4 = (param_1->pos).w;
        *(f32 *)((int)puVar14 + 0xe4) = fVar3;
        *(f32 *)((int)puVar14 + 0xec) = fVar4;
        uVar17 = 0x3ff0000000000000;
        *(float *)(puVar14 + 0x1d) = (param_1->pos).z + 1.0;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        PlayMobySound(2,0,param_1);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (dVar36,dVar36,0x4010000000000000,0x4000000000000000,0x4022000000000000,uVar17,
                   0x402e000000000000,param_1,uVar28 + 0x40,uVar16 - 0xb0,1,0xffffffffffffffff,0x14,
                   8,0x14);
        pvVar27 = &param_1->pos;
        pvVar25 = &param_1->rotation;
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(dVar36,param_1,0x6fe,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(dVar36,param_1,0x6fe,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        MB_SpawnDebrisMoby(dVar36,param_1,0x6ff,pvVar27,pvVar25,0,0);
        if (*(MobyInstance **)((int)pvVar10 + 0x160) != (MobyInstance *)0x0) {
          DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x160));
        }
        if (*(MobyInstance **)((int)pvVar10 + 0x164) != (MobyInstance *)0x0) {
          DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x164));
        }
        DeleteMoby(param_1);
        return;
      }
      fVar3 = (param_1->pos).y;
      *(f32 *)(puVar14 + 0x1a) = (param_1->pos).x;
      fVar4 = (param_1->pos).w;
      *(f32 *)((int)puVar14 + 0xd4) = fVar3;
      *(f32 *)((int)puVar14 + 0xdc) = fVar4;
      fVar1 = (param_1->pos).z;
      puVar14[0x14] = 1;
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      *(float *)(puVar14 + 0x1b) = fVar1 + 3.0;
      *(undefined1 *)((int)pvVar10 + 0xa7) = 0xfa;
      *(undefined4 *)((int)pvVar10 + 300) = 0;
      *(undefined4 *)((int)pvVar10 + 0x128) = 0;
      *(undefined4 *)((int)pvVar10 + 0x124) = 0;
      *(undefined4 *)((int)pvVar10 + 0x120) = 0;
      MB_genericExplosion
                (dVar36,dVar36,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,param_1,uVar28 + 0x40,uVar16 - 0xc0,
                 &DAT_0031b3f4,0xfa,0x14,8,0x14);
      pvVar27 = &param_1->pos;
      pvVar25 = &param_1->rotation;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar36,param_1,0x6c0,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar36,param_1,0x6c1,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar36,param_1,0x6c2,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar36,param_1,0x6c3,pvVar27,pvVar25,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(dVar36,param_1,0x6c4,pvVar27,pvVar25,0,0);
      if (param_1->animationId != '\x01') {
        MB_SetAnimation(param_1,1,0,3);
      }
      param_1->state = 'c';
      *(undefined4 *)((int)pvVar10 + 0x20) = 0x40c00000;
      *(ushort *)((int)pvVar10 + 0x3e) = *(ushort *)((int)pvVar10 + 0x3e) & 0xfffd;
    }
    else {
      if (4.0 <= fVar1) {
        if (6.0 <= fVar1) {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(undefined1 *)((int)pvVar10 + 0xa7) = 0xe6;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
          *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
        }
        else {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(undefined1 *)((int)pvVar10 + 0xa7) = 200;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
          *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
        }
      }
      else {
        *(undefined1 *)((int)pvVar10 + 0xa7) = 0x78;
        sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
        if ((sVar8 == 0xb0) || (sVar8 == 0xb1)) {
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(8,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
        else {
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = loadVectorLeftIndexed(0xc,0x31b3f4);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,auVar37,
                             auVar39);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = vectorSplatHalfWord(auVar37,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar37,0x26,uVar28);
        *(undefined2 *)((int)pvVar10 + 0x26) = uVar13;
      }
      if ((param_1->state == '\f') && (param_1->animationId != '\x01')) {
        MB_SetAnimation(param_1,1,0,0);
      }
    }
    MB_UpdateLightsTransition(param_1,uVar28 + 0xa0);
  }
  param_1->damage = -1;
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x160) + 0xa4) = 0xff;
  }
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x164) + 0xa4) = 0xff;
  }
  pSVar12 = Splines[*(int *)((int)pvVar10 + 0x154)];
  MB_getTargetInArea
            (0x4059000000000000,param_1,uVar28 + 0xb0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
  pMVar15 = g_heroMobyPtr;
  unused_00 = *(MobyInstance **)((int)pvVar10 + 0xf0);
  if (*(MobyInstance **)((int)pvVar10 + 0xf0) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar10 + 0xf0) = g_heroMobyPtr;
    unused_00 = pMVar15;
  }
  if (*(int *)((int)pvVar10 + 0xf4) == 2) {
    dVar31 = 12.566370964050293;
    dVar32 = 9.42477798461914;
    OrganicDeltAng
              ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x170),(int)unused_00,
               (float *)((int)pvVar10 + 0x174));
    OrganicDeltAng
              ((float)dVar36,(float)((double)DAT_0071f418 * dVar31),
               (float)((double)DAT_0071f418 * dVar31),
               (float)((double)g_FrameTime * dVar32),(float *)((int)pvVar10 + 0x178),
               (int)unused_00,(float *)((int)pvVar10 + 0x17c));
  }
  else {
    fVar2 = *(float *)((int)pvVar10 + 0xb0) - (param_1->pos).x;
    dVar31 = (double)fVar2;
    fVar5 = *(float *)((int)pvVar10 + 0xb4) - (param_1->pos).y;
    dVar33 = (double)fVar5;
    fVar1 = *(float *)((int)pvVar10 + 0xb8);
    *(float *)((int)puVar14 + 0x104) = fVar2;
    *(float *)(puVar14 + 0x21) = fVar5;
    fVar2 = (fVar1 - (param_1->pos).z) - 3.0;
    *(float *)((int)puVar14 + 0x10c) = (float)(ABS(dVar31) - ABS(dVar33));
    uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar32 = ABS((double)*(float *)((int)puVar14 + 0x104));
    if ((double)*(float *)((int)puVar14 + 0x10c) - dVar36 < 0.0) {
      dVar32 = ABS(dVar33);
    }
    dVar35 = ABS((double)*(float *)(puVar14 + 0x21));
    if ((double)*(float *)((int)puVar14 + 0x10c) - dVar36 < 0.0) {
      dVar35 = ABS(dVar31);
    }
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar34 = dVar36;
    if (dVar36 < dVar32) {
      lVar19 = uVar16 - 0x180;
      lVar22 = uVar16 - 0x50;
      lVar21 = uVar16 - 0x60;
      lVar30 = 2;
      fVar7 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x13c) = fVar7;
      *(float *)((int)puVar14 + 0x134) = fVar7;
      *(float *)(puVar14 + 0x27) = fVar7;
      *(float *)(puVar14 + 0x26) = fVar7;
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar6;
      *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar7;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar7 * fVar6;
      do {
        *(float *)((int)lVar19 + 0x130) = *(float *)((int)lVar19 + 0x120) * fVar7 * fVar7;
        iVar20 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar22 = uVar16 - 0x60;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar29;
      lVar21 = lVar22;
      do {
        fVar7 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x130) = *(float *)((int)lVar19 + 0x130) * fVar7;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      lVar19 = lVar29;
      dVar32 = dVar36;
      do {
        iVar20 = (int)lVar19;
        iVar11 = (int)lVar22;
        lVar19 = lVar19 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0x130)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar34 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar5);
    }
    *(float *)((int)puVar14 + 0xfc) = fVar2;
    dVar35 = ABS((double)fVar2);
    fVar1 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar33 * dVar33)));
    dVar31 = ABS((double)fVar1);
    *(float *)(puVar14 + 0x1f) = fVar1;
    *(float *)(puVar14 + 0x20) = (float)(dVar31 - dVar35);
    uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
    dVar32 = ABS((double)*(float *)(puVar14 + 0x1f));
    if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
      dVar32 = dVar35;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar14 + 0xfc));
    if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
      dVar33 = dVar31;
    }
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar36 < dVar32) {
      lVar19 = uVar16 - 0x180;
      lVar21 = uVar16 - 0x80;
      lVar22 = uVar16 - 0x70;
      lVar30 = 2;
      fVar5 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
      fVar7 = fVar5 * fVar5;
      *(float *)((int)puVar14 + 0x11c) = fVar5;
      *(float *)((int)puVar14 + 0x114) = fVar5;
      *(float *)(puVar14 + 0x23) = fVar5;
      *(float *)(puVar14 + 0x22) = fVar5;
      fVar5 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7;
      *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar5;
      *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar5 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x110) = *(float *)((int)lVar19 + 0x100) * fVar5 * fVar5;
        iVar20 = (int)lVar21;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar22 = uVar16 - 0x80;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar29;
      lVar21 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x110) = *(float *)((int)lVar19 + 0x110) * fVar5;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar19 = 2;
      do {
        iVar20 = (int)lVar29;
        iVar11 = (int)lVar22;
        lVar29 = lVar29 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x110)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar36 = -dVar36;
    dVar32 = 0.3490658402442932;
    if ((dVar36 <= 0.3490658402442932) && (dVar32 = dVar36, dVar36 < -0.7853981852531433)) {
      dVar32 = -0.7853981852531433;
    }
    dVar36 = (double)FastDiffRots(dVar34,(double)(param_1->rotation).z);
    unused = &DAT_0031b3f4;
    dVar33 = 12.566370964050293;
    dVar31 = 9.42477798461914;
    OrganicDeltAng
              ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x170),0x31b3f4,
               (float *)((int)pvVar10 + 0x174));
    OrganicDeltAng
              ((float)dVar32,(float)((double)DAT_0071f418 * dVar33),
               (float)((double)DAT_0071f418 * dVar33),
               (float)((double)g_FrameTime * dVar31),(float *)((int)pvVar10 + 0x178),
               (int)unused,(float *)((int)pvVar10 + 0x17c));
  }
  FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x178),uVar16 - 0xd0,1);
  lVar29 = uVar28 + 0x110;
  FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x170),lVar29,2);
  FastQuaternionMult(lVar29,uVar16 - 0xd0,lVar29);
  lVar29 = uVar28 + 0xa0;
  uVar13 = *(undefined2 *)((int)pvVar10 + 0xa0);
  uVar9 = *(undefined2 *)((int)pvVar10 + 0xa2);
  MB_ColorDyingMoby(param_1,lVar29);
  if (*(int *)((int)pvVar10 + 0x160) != 0) {
    *(undefined2 *)((int)pvVar10 + 0xa0) = uVar13;
    *(undefined2 *)((int)pvVar10 + 0xa2) = uVar9;
    MB_ColorDyingMoby(*(int *)((int)pvVar10 + 0x160),lVar29);
  }
  if (*(int *)((int)pvVar10 + 0x164) != 0) {
    *(undefined2 *)((int)pvVar10 + 0xa0) = uVar13;
    *(undefined2 *)((int)pvVar10 + 0xa2) = uVar9;
    MB_ColorDyingMoby(*(int *)((int)pvVar10 + 0x164),lVar29);
  }
  return;
}


// 0x031c218 (0xd70 bytes)
// strings: 00a1000c: 'None'

/* Moby 253 */

void UpdateMoby_253(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  MobyInstance *pMVar14;
  undefined1 uVar16;
  int iVar15;
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
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  Vec4 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pvVar3 = moby->pVar;
  dVar32 = (double)(moby->pos).x;
  dVar33 = (double)(moby->pos).y;
  dVar34 = (double)(moby->pos).z;
  if (*(char *)((int)pvVar3 + 0x2e) != '\x02') {
    M253_0031b438(lVar13);
    uVar1 = moby->state;
    iVar15 = *(int *)((int)pvVar3 + 0xf0);
    if (uVar1 == 'c') {
      M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
      dVar30 = (double)BlendAnimFrame(moby);
      if (((59.0 <= dVar30) && (dVar30 <= 60.0)) || ((119.0 <= dVar30 && (dVar30 <= 120.0)))) {
        M253_00319a58(lVar13,4,10);
      }
      else if (((29.0 <= dVar30) && (dVar30 <= 30.0)) || ((89.0 <= dVar30 && (dVar30 <= 90.0)))) {
        M253_00319a58(lVar13,5,10);
      }
    }
    else if (uVar1 == '\x0e') {
      if (*(int *)((int)pvVar3 + 0xf4) != 2) {
        M253_0031a728(lVar13);
        if (g_MiscLevelFlags.field46_0x2e != 0) {
          PlayMobySound(6,0,moby);
        }
        g_MiscLevelFlags.field46_0x2e = 1;
        iVar15 = *(int *)((int)pvVar3 + 0x160);
        *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
        iVar15 = *(int *)((int)pvVar3 + 0x164);
        *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
        iVar15 = *(int *)((int)pvVar3 + 0x160);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xffbe;
        *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
             *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) & 0xffbe;
        moby->collision = moby->pClass->collision;
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) =
             *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x160) + 0x24) + 0x10);
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) =
             *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x164) + 0x24) + 0x10);
        iVar15 = *(int *)((int)pvVar3 + 0xf4);
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if ((iVar15 != 2) && (moby->state = '\x06', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (uVar1 != '\f') {
      if (uVar1 == '\v') {
                    /* WARNING: Load size is inaccurate */
        if (*g_MobyInstance[*(int *)((int)pvVar3 + 0x140)].pVar == 0x3f800000) {
          pSVar4 = Splines[*(int *)((int)pvVar3 + 0x14c)];
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          fVar2 = pSVar4->points[0].x;
          (moby->pos).x = fVar2;
          (moby->pos).y = pSVar4->points[0].y;
          (moby->pos).z = pSVar4->points[0].z;
          (moby->pos).w = pSVar4->points[0].w;
          *(float *)(iVar15 + 0x10) = fVar2;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          iVar15 = *(int *)((int)pvVar3 + 0x164);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xffbe;
          *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) & 0xffbe;
          moby->collision = moby->pClass->collision;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x160) + 0x24) + 0x10);
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x164) + 0x24) + 0x10);
          iVar15 = *(int *)((int)pvVar3 + 0xf4);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          if ((iVar15 != 2) && (moby->state = '\x06', moby->animationId != '\x01')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (uVar1 == '\x06') {
        M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
        if ((*(int *)((int)pvVar3 + 0xf4) != 2) &&
           (fVar2 = (moby->pos).y - *(float *)(iVar15 + 0x14),
           fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10),
           SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 20.0)) {
          if ((HelpData.piece<720,2>() == 0) && (UnlockableItems.devastator == '\0')) {
            Help_QueueMessage(STR_THE_DEVASTATOR_IS_A_0x1F44,0x5a);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (uVar1 == '\x03') {
        M253_0031a070(lVar13,*(undefined4 *)((int)pvVar3 + 0x150));
        if (((*(int *)((int)pvVar3 + 0xf4) == 2) ||
            (fVar2 = (moby->pos).y - *(float *)(iVar15 + 0x14),
            fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10),
            22.0 < SQRT(fVar5 * fVar5 + fVar2 * fVar2))) &&
           (moby->state = '\x06', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
        dVar30 = 4.0;
        iVar15 = MB_MayaFrameTrigger(4.0,moby);
        if ((iVar15 != 0) || (iVar15 = MB_MayaFrameTrigger(10.0,moby), iVar15 != 0)) {
          dVar17 = (double)BlendAnimFrame(moby);
          if (dVar17 == dVar30) {
            GetBonePosition(lVar13,1,uVar12 - 0x90);
          }
          else {
            GetBonePosition(lVar13,2,uVar12 - 0x90);
          }
          dVar31 = (double)(DAT_007ffdc8 * g_FrameTime);
          dVar30 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x170),(moby->rotation).z)
          ;
          dVar29 = 1.570796251296997;
          dVar28 = 3.141592502593994;
          fVar2 = (float)(dVar30 + 1.570796251296997);
          dVar27 = -3.141592502593994;
          fVar5 = *(float *)((int)pvVar3 + 0x178) + 1.5707963;
          dVar30 = -0.16666656732559204;
          dVar26 = 0.008333025500178337;
          dVar25 = -0.0001980741071747616;
          dVar17 = 2.601886990305502e-06;
          fVar6 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar6 = fVar2;
          }
          fVar8 = 3.1415925 - fVar5;
          if (fVar5 - (3.1415925 - fVar5) < 0.0) {
            fVar8 = fVar5;
          }
          fVar7 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
            fVar7 = fVar6;
          }
          fVar2 = -3.1415925 - fVar5;
          if ((-3.1415925 - fVar5) - fVar8 < 0.0) {
            fVar2 = fVar8;
          }
          fVar8 = fVar7 * fVar7;
          fVar11 = fVar2 * fVar2;
          fVar5 = fVar8 * fVar8 * fVar7;
          fVar9 = fVar11 * fVar11 * fVar2;
          fVar6 = fVar8 * fVar5;
          fVar10 = fVar11 * fVar9;
          local_a0 = (float)((double)(fVar11 * fVar10 * 2.601887e-06 +
                                     fVar10 * -0.0001980741 +
                                     fVar9 * 0.0083330255 + fVar11 * fVar2 * -0.16666657 + fVar2) *
                            dVar31) *
                     (fVar8 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar5 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7);
          dVar18 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x170),(moby->rotation).z)
          ;
          dVar20 = (double)(float)((double)*(float *)((int)pvVar3 + 0x178) + dVar29);
          dVar29 = (double)(float)(dVar28 - dVar18);
          if (dVar18 - (double)(float)(dVar28 - dVar18) < 0.0) {
            dVar29 = dVar18;
          }
          dVar21 = (double)(float)(dVar28 - dVar20);
          if (dVar20 - (double)(float)(dVar28 - dVar20) < 0.0) {
            dVar21 = dVar20;
          }
          dVar19 = (double)(float)(dVar27 - dVar18);
          if ((double)(float)(dVar27 - dVar18) - dVar29 < 0.0) {
            dVar19 = dVar29;
          }
          dVar18 = (double)(float)(dVar19 * dVar19);
          dVar29 = (double)(float)(dVar27 - dVar20);
          if ((double)(float)(dVar27 - dVar20) - dVar21 < 0.0) {
            dVar29 = dVar21;
          }
          dVar20 = (double)(float)(dVar29 * dVar29);
          dVar23 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar19));
          dVar21 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar29));
          dVar22 = (double)(float)(dVar18 * dVar23);
          dVar24 = (double)(float)(dVar20 * dVar21);
          local_9c = (float)((double)(float)((double)(float)(dVar20 * dVar24) * dVar17 +
                                            (double)(float)(dVar24 * dVar25 +
                                                           (double)(float)(dVar21 * dVar26 +
                                                                          (double)(float)((double)(
                                                  float)(dVar20 * dVar29) * dVar30 + dVar29)))) *
                            dVar31) *
                     (float)((double)(float)(dVar18 * dVar22) * dVar17 +
                            (double)(float)(dVar22 * dVar25 +
                                           (double)(float)(dVar23 * dVar26 +
                                                          (double)(float)((double)(float)(dVar18 * 
                                                  dVar19) * dVar30 + dVar19))));
          dVar18 = (double)*(float *)((int)pvVar3 + 0x178);
          dVar29 = (double)(float)(dVar28 - dVar18);
          if (dVar18 - (double)(float)(dVar28 - dVar18) < 0.0) {
            dVar29 = dVar18;
          }
          dVar28 = (double)(float)(dVar27 - dVar18);
          if ((double)(float)(dVar27 - dVar18) - dVar29 < 0.0) {
            dVar28 = dVar29;
          }
          dVar27 = (double)(float)(dVar28 * dVar28);
          dVar18 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
          dVar29 = (double)(float)(dVar27 * dVar18);
          local_98 = -(float)((double)(float)((double)(float)(dVar27 * dVar29) * dVar17 +
                                             (double)(float)(dVar29 * dVar25 +
                                                            (double)(float)(dVar18 * dVar26 +
                                                                           (double)(float)((double)(
                                                  float)(dVar27 * dVar28) * dVar30 + dVar28)))) *
                             dVar31);
          iVar15 = FUN_0036a1d0(lVar13,uVar12 - 0x90,uVar12 - 0xa0);
          if (iVar15 != 0) {
            *(undefined1 *)(iVar15 + 0x20) = 1;
          }
        }
      }
      else if (uVar1 == '\0') {
        if (*(int *)((int)pvVar3 + 0x160) == 0) {
          pMVar14 = CreateMoby(TRACKDRIVE_LEFT);
          *(MobyInstance **)((int)pvVar3 + 0x160) = pMVar14;
          pMVar14->updateDistance = '@';
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x160) + 0x32) = 0x40;
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x160) + 0x31) = 1;
          *(undefined8 *)(*(int *)((int)pvVar3 + 0x160) + 0x38) =
               *(undefined8 *)&g_heroMobyPtr->color;
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x160) + 0x34) = 0x4000;
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
          MB_SetAnimation(*(undefined4 *)((int)pvVar3 + 0x160),0,0,0);
          UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x160));
        }
        if (*(int *)((int)pvVar3 + 0x164) == 0) {
          pMVar14 = CreateMoby(TRACKDRIVE_LEFT);
          *(MobyInstance **)((int)pvVar3 + 0x164) = pMVar14;
          pMVar14->updateDistance = '@';
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x164) + 0x32) = 0x40;
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x164) + 0x31) = 1;
          *(undefined8 *)(*(int *)((int)pvVar3 + 0x164) + 0x38) =
               *(undefined8 *)&g_heroMobyPtr->color;
          *(undefined2 *)(*(int *)((int)pvVar3 + 0x164) + 0x34) = 0xc000;
          iVar15 = *(int *)((int)pvVar3 + 0x164);
          *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
          MB_SetAnimation(*(undefined4 *)((int)pvVar3 + 0x164),0,0,0);
          UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x164));
        }
        AttachManipulator(moby,0,(int)pvVar3 + 0x100);
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(float *)((int)pvVar3 + 0x16c) = g_FrameTime * 2.0;
        if (*(int *)((int)pvVar3 + 0x140) < 1) {
          if (*(int *)((int)pvVar3 + 0x144) < 1) {
            uVar1 = moby->animationId;
            pSVar4 = Splines[*(int *)((int)pvVar3 + 0x150)];
            (moby->pos).x = pSVar4->points[0].x;
            (moby->pos).y = pSVar4->points[0].y;
            (moby->pos).z = pSVar4->points[0].z;
            fVar2 = pSVar4->points[0].w;
            moby->state = '\x06';
            (moby->pos).w = fVar2;
            if (uVar1 != '\x01') {
              MB_SetAnimation(lVar13,1,0,0);
            }
          }
          else if (g_MiscLevelFlags.field46_0x2e == 0) {
            moby->state = '\x0e';
            iVar15 = *(int *)((int)pvVar3 + 0x160);
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) | 0x41;
            *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
                 *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) | 0x41;
            moby->collision = (ushort *)0x0;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
            if (moby->animationId != '\0') {
              MB_SetAnimation(lVar13,0,0,0);
            }
          }
          else {
            M253_0031b2f8(lVar13);
            uVar1 = moby->animationId;
            pSVar4 = Splines[*(int *)((int)pvVar3 + 0x150)];
            (moby->pos).x = pSVar4->points[0].x;
            (moby->pos).y = pSVar4->points[0].y;
            (moby->pos).z = pSVar4->points[0].z;
            fVar2 = pSVar4->points[0].w;
            moby->state = '\x06';
            (moby->pos).w = fVar2;
            if (uVar1 != '\x01') {
              MB_SetAnimation(lVar13,1,0,0);
            }
          }
        }
        else {
          moby->state = '\v';
          iVar15 = *(int *)((int)pvVar3 + 0x160);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) | 0x41;
          *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar3 + 0x164) + 0x34) | 0x41;
          moby->collision = (ushort *)0x0;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x160) + 0x94) = 0;
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x164) + 0x94) = 0;
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar13,0,0,0);
          }
        }
        *(undefined1 *)((int)pvVar3 + 0x29) = 0;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0x41100000;
        *(undefined1 *)((int)pvVar3 + 0x28) = 3;
        *(undefined4 *)((int)pvVar3 + 0x30) = 0x40400000;
        *(undefined1 *)((int)pvVar3 + 0x2a) = 0xc;
        *(undefined1 *)((int)pvVar3 + 0x2e) = 1;
        *(undefined4 *)((int)pvVar3 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        *(undefined4 *)((int)pvVar3 + 0x44) = 0;
        *(undefined4 *)((int)pvVar3 + 0x40) = 0;
        *(undefined4 *)((int)pvVar3 + 0x178) = 0;
        *(ushort *)((int)pvVar3 + 0x3e) = *(ushort *)((int)pvVar3 + 0x3e) | 2;
        *(f32 *)((int)pvVar3 + 0x170) = (moby->rotation).z;
        uVar16 = FastDoubleToInt((double)DAT_007ffdec);
        *(undefined1 *)((int)pvVar3 + 0x58) = uVar16;
        uVar16 = FastDoubleToInt((double)(DAT_007ffdf0 * 8.0));
        *(undefined1 *)((int)pvVar3 + 0x5a) = uVar16;
      }
    }
    local_b0.x = (float)((double)(moby->pos).x - dVar32);
    local_b0.y = (float)((double)(moby->pos).y - dVar33);
    local_b0.w = (moby->pos).w;
    local_b0.z = (float)((double)(moby->pos).z - dVar34);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_b0,lVar13 + 0x40,uVar12 - 0xc0);
    return;
  }
  if (*(MobyInstance **)((int)pvVar3 + 0x160) != (MobyInstance *)0x0) {
    DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x160));
  }
  if (*(MobyInstance **)((int)pvVar3 + 0x164) != (MobyInstance *)0x0) {
    DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x164));
  }
  DeleteMoby(moby);
  return;
}



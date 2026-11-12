// game/update/moby945.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4c6b80-0x4c70b4
#include "game/update/moby945.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x04c6b80 (0x4dc bytes)
void M945_004c6b80(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  longlong lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar23 = uVar16 - 0x1b0;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar16;
  puVar14[0x38] = in_LR;
  puVar14[0x33] = in_f29;
  puVar14[0x34] = in_f30;
  puVar14[0x35] = in_f31;
  puVar14[0x32] = unaff_r31;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  puVar14[0x31] = unaff_r30;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar14[0x2e] = unaff_r27;
  puVar14[0x2d] = unaff_r26;
  puVar14[0x2c] = unaff_r25;
  iVar13 = *(int *)(iVar12 + 0x160);
  FastMtx4Identity((float *)(puVar14 + 0x10));
  uVar17 = GetEffectTex(0xe);
  puVar14[0x27] = uVar17;
  uVar17 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar14[0x28] = uVar17;
  uVar17 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar14[0x26] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010e47d0,DAT_008f4d90,DAT_010e47d4,DAT_008f4d94,0x80);
  uVar19 = *(undefined4 *)(iVar12 + 0x198);
  puVar14[0x29] = uVar17;
  dVar26 = (double)FastIntToDouble(uVar19);
  dVar26 = (double)(float)(dVar26 / (double)(animationSpeed * 180.0));
  uVar19 = FastLerpColor(dVar26,DAT_008f4d88,DAT_008f4d8c);
  *(undefined4 *)((int)puVar14 + 0x10c) = uVar19;
  *(undefined4 *)(puVar14 + 0x21) = uVar19;
  *(undefined4 *)((int)puVar14 + 0x104) = uVar19;
  *(undefined4 *)(puVar14 + 0x20) = uVar19;
  uVar19 = *(undefined4 *)(param_1 + 0x10);
  puVar22 = &DAT_008f4da0;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar21 = &DAT_008f4da4;
  fVar2 = *(float *)(param_1 + 0x18);
  lVar20 = uVar16 - 0xa0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  lVar18 = uVar16 - 0x9c;
  uVar4 = *(undefined4 *)(iVar13 + 0x10);
  lVar25 = 2;
  uVar5 = *(undefined4 *)(iVar13 + 0x14);
  fVar6 = *(float *)(iVar13 + 0x18);
  uVar7 = *(undefined4 *)(iVar13 + 0x1c);
  do {
    uVar8 = *puVar21;
    *(undefined4 *)((int)lVar23 + 0x110) = *puVar22;
    uVar9 = puVar22[2];
    *(undefined4 *)((int)lVar23 + 0x114) = uVar8;
    uVar8 = puVar21[2];
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar9;
    puVar21 = puVar21 + 4;
    *(undefined4 *)((int)lVar18 + 8) = uVar8;
    lVar20 = lVar20 + 0x10;
    lVar18 = lVar18 + 0x10;
    lVar23 = lVar23 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  *(undefined4 *)(puVar14 + 0x18) = uVar19;
  *(undefined4 *)((int)puVar14 + 0xc4) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xcc) = uVar3;
  *(undefined4 *)(puVar14 + 0x1a) = uVar19;
  *(undefined4 *)((int)puVar14 + 0xd4) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xdc) = uVar3;
  *(float *)(puVar14 + 0x19) = fVar2 + 0.85;
  *(undefined4 *)(puVar14 + 0x1c) = uVar4;
  *(undefined4 *)((int)puVar14 + 0xe4) = uVar5;
  *(undefined4 *)((int)puVar14 + 0xec) = uVar7;
  *(float *)(puVar14 + 0x1b) = fVar2 + 1.1;
  dVar36 = 1.0;
  *(undefined4 *)(puVar14 + 0x1e) = uVar4;
  *(undefined4 *)((int)puVar14 + 0xf4) = uVar5;
  *(undefined4 *)((int)puVar14 + 0xfc) = uVar7;
  uVar19 = EffectTexHeaders;
  *(float *)(puVar14 + 0x1d) = fVar6 + 1.0;
  *(float *)(puVar14 + 0x1f) = fVar6 + 1.25;
  FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,uVar19,9);
  dVar27 = (double)*(float *)(iVar13 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x14);
  dVar32 = (double)*(float *)(iVar13 + 0x10);
  fVar2 = (float)(dVar27 - dVar29);
  dVar33 = (double)*(float *)(param_1 + 0x10);
  fVar6 = (float)(dVar32 - dVar33);
  dVar35 = 0.0;
  fVar10 = *(float *)(iVar13 + 0x18);
  uVar19 = *(undefined4 *)(iVar13 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar14 + 0xcc) = uVar1;
  *(undefined4 *)((int)puVar14 + 0xdc) = uVar1;
  fVar11 = fVar11 + 0.975;
  *(undefined4 *)((int)puVar14 + 0xec) = uVar19;
  uVar1 = EffectTexHeaders;
  *(float *)(puVar14 + 0x19) = fVar11;
  *(float *)(puVar14 + 0x1b) = fVar11;
  fVar11 = SQRT(fVar6 * fVar6 + --(fVar2 * fVar2));
  uVar24 = 9;
  dVar34 = (double)(fVar6 * (0.125 / fVar11));
  dVar30 = -(double)(fVar2 * (0.125 / fVar11));
  dVar28 = dVar35;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = dVar34;
  }
  dVar31 = dVar35;
  if (0.0 - fVar11 < 0.0) {
    dVar31 = dVar30;
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = dVar34;
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar31 = dVar30;
  }
  *(float *)((int)puVar14 + 0xc4) = (float)(dVar29 + dVar28);
  *(float *)((int)puVar14 + 0xd4) = (float)(dVar29 - dVar28);
  *(float *)(puVar14 + 0x18) = (float)(dVar33 + dVar31);
  *(float *)(puVar14 + 0x1a) = (float)(dVar33 - dVar31);
  *(float *)(puVar14 + 0x1c) = (float)(dVar32 + dVar31);
  *(float *)((int)puVar14 + 0xe4) = (float)(dVar27 + dVar28);
  *(undefined4 *)((int)puVar14 + 0xfc) = uVar19;
  *(float *)(puVar14 + 0x1e) = (float)(dVar32 - dVar31);
  *(float *)((int)puVar14 + 0xf4) = (float)(dVar27 - dVar28);
  fVar10 = fVar10 + 1.125;
  *(float *)(puVar14 + 0x1d) = fVar10;
  *(float *)(puVar14 + 0x1f) = fVar10;
  FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,uVar1);
  fVar6 = (float)((double)*(float *)((int)puVar14 + 0xe4) - (double)*(float *)((int)puVar14 + 0xc4))
  ;
  fVar10 = (float)((double)*(float *)(puVar14 + 0x1c) - (double)*(float *)(puVar14 + 0x18));
  fVar11 = (float)((double)*(float *)(puVar14 + 0x1d) - (double)*(float *)(puVar14 + 0x19));
  *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)((int)puVar14 + 0xec);
  fVar15 = animationSpeed;
  iVar12 = *(int *)(iVar12 + 0x198);
  dVar27 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar6 * fVar6);
  fVar2 = (float)(1.5 / dVar27);
  dVar28 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar28 = (double)(fVar11 * fVar2);
  }
  dVar29 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar29 = (double)(fVar6 * fVar2);
  }
  dVar30 = dVar35;
  if (dVar35 - dVar27 < 0.0) {
    dVar30 = (double)(fVar10 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar28 = (double)(fVar11 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar29 = (double)(fVar6 * fVar2);
  }
  if (dVar27 - dVar35 < 0.0) {
    dVar30 = (double)(fVar10 * fVar2);
  }
  *(float *)(puVar14 + 0xf) = (float)(dVar28 + (double)*(float *)(puVar14 + 0x19));
  *(float *)((int)puVar14 + 0x74) = (float)(dVar29 + (double)*(float *)((int)puVar14 + 0xc4));
  *(float *)(puVar14 + 0xe) = (float)(dVar30 + (double)*(float *)(puVar14 + 0x18));
  puVar14[0x2a] = (longlong)(int)(fVar15 * 30.5);
  if (iVar12 < *(int *)((int)puVar14 + 0x154)) {
    dVar28 = (double)FastIntToDouble(iVar12);
    fVar2 = (float)(dVar28 / (double)(animationSpeed * 30.0));
    *(float *)(puVar14 + 0xe) =
         fVar2 * (*(float *)(puVar14 + 0xe) - *(float *)(puVar14 + 0x1e)) +
         *(float *)(puVar14 + 0x1e);
    *(float *)((int)puVar14 + 0x74) =
         fVar2 * (*(float *)((int)puVar14 + 0x74) - *(float *)((int)puVar14 + 0xf4)) +
         *(float *)((int)puVar14 + 0xf4);
    *(float *)(puVar14 + 0xf) =
         fVar2 * (*(float *)(puVar14 + 0xf) - *(float *)(puVar14 + 0x1f)) +
         *(float *)(puVar14 + 0x1f);
  }
  SpawnPart_41
            ((float)(dVar36 - dVar26),puVar14 + 0xe,param_1,0,0x80000080,uVar24,0x7f,2,0xff);
  return;
}


// 0x04c705c (0x4 bytes)
void M945_004c705c(void)

{
  return;
}


// 0x04c7060 (0x3c bytes)
undefined8 M945_004c7060(int param_1)

{
  undefined8 uVar1;
  
  if (**(int **)(*(int *)(param_1 + 0x78) + 0x1a4) == param_1) {
    uVar1 = 1;
  }
  else if (**(int **)(*(int *)(param_1 + 0x78) + 0x1a8) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x04c709c (0x14 bytes)
void M945_004c709c(void)

{
  DAT_008f4e0c = 0x10000;
  return;
}


// 0x04c70b0 (0x4 bytes)
/* Moby 945 */

MobyInstance * UpdateMoby_945(MobyInstance *moby)

{
  return moby;
}



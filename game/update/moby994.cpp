// game/update/moby994.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4ceb48-0x4cf014
#include "game/update/moby994.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x04ceb48 (0x4 bytes)
void M994_004ceb48(void)

{
  return;
}


// 0x04ceb50 (0x3e8 bytes)
void M994_004ceb50(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
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
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  ulonglong in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 0x180;
  puVar5 = (ulonglong *)lVar24;
  *puVar5 = uVar18;
  puVar5[0x32] = in_LR;
  puVar5[0x2f] = in_f31;
  puVar5[0x2e] = unaff_r31;
  fVar15 = GameCamera.posZ;
  fVar14 = GameCamera.posY;
  fVar6 = GameCamera.posX;
  iVar4 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar4 + 0x10) - GameCamera.posX;
  fVar7 = *(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 0x20);
  fVar9 = *(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x24);
  fVar13 = *(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0x28);
  *(float *)(puVar5 + 0xe) = fVar2;
  fVar8 = *(float *)(iVar4 + 0x14) - fVar14;
  *(float *)((int)puVar5 + 0x74) = fVar8;
  fVar11 = fVar7 * fVar8 - fVar9 * fVar2;
  fVar10 = *(float *)(iVar4 + 0x18) - fVar15;
  fVar12 = fVar9 * fVar10 - fVar13 * fVar8;
  *(float *)(puVar5 + 0xf) = fVar10;
  *(undefined4 *)((int)puVar5 + 0x7c) = *(undefined4 *)(iVar4 + 0x1c);
  fVar8 = fVar13 * fVar2 - fVar7 * fVar10;
  fVar6 = *(float *)(iVar4 + 0x20) - fVar6;
  *(float *)(puVar5 + 0x10) = fVar6;
  fVar14 = *(float *)(iVar4 + 0x24) - fVar14;
  *(float *)((int)puVar5 + 0x84) = fVar14;
  fVar15 = *(float *)(iVar4 + 0x28) - fVar15;
  fVar16 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar8 * fVar8);
  *(float *)(puVar5 + 0x11) = fVar15;
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  *(float *)(puVar5 + 0xe) = fVar12;
  *(undefined4 *)((int)puVar5 + 0x8c) = uVar1;
  *(float *)((int)puVar5 + 0x74) = fVar8;
  *(float *)(puVar5 + 0xf) = fVar11;
  fVar17 = 0.0;
  *(undefined4 *)((int)puVar5 + 0x7c) = 0;
  fVar2 = *(float *)(iVar4 + 0x4c);
  fVar10 = fVar7 * fVar14 - fVar9 * fVar6;
  fVar9 = fVar9 * fVar15 - fVar13 * fVar14;
  fVar6 = fVar13 * fVar6 - fVar7 * fVar15;
  *(float *)(puVar5 + 0x10) = fVar9;
  *(float *)((int)puVar5 + 0x84) = fVar6;
  *(float *)(puVar5 + 0x11) = fVar10;
  *(undefined4 *)((int)puVar5 + 0x8c) = 0;
  fVar2 = fVar2 / fVar16;
  fVar7 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6);
  fVar13 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar13 = fVar12 * fVar2;
  }
  fVar14 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar14 = fVar8 * fVar2;
  }
  fVar15 = fVar17;
  if (0.0 - fVar16 < 0.0) {
    fVar15 = fVar11 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar13 = fVar12 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar14 = fVar8 * fVar2;
  }
  if (fVar16 - 0.0 < 0.0) {
    fVar15 = fVar11 * fVar2;
  }
  *(float *)(puVar5 + 0xe) = fVar13;
  *(float *)((int)puVar5 + 0x74) = fVar14;
  *(float *)(puVar5 + 0xf) = fVar15;
  fVar8 = *(float *)(iVar4 + 0x4c) / fVar7;
  fVar2 = fVar17;
  if (0.0 - fVar7 < 0.0) {
    fVar2 = fVar9 * fVar8;
  }
  fVar11 = fVar17;
  if (0.0 - fVar7 < 0.0) {
    fVar11 = fVar6 * fVar8;
  }
  if (0.0 - fVar7 < 0.0) {
    fVar17 = fVar10 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar2 = fVar9 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar11 = fVar6 * fVar8;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar17 = fVar10 * fVar8;
  }
  *(float *)(puVar5 + 0x10) = fVar2;
  *(float *)((int)puVar5 + 0x84) = fVar11;
  puVar5[0x2d] = unaff_r30;
  puVar5[0x2c] = unaff_r29;
  *(float *)(puVar5 + 0x11) = fVar17;
  uVar19 = GetEffectTex(0xe);
  puVar5[0x29] = uVar19;
  uVar19 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar5[0x2a] = uVar19;
  uVar19 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar5[0x28] = uVar19;
  uVar19 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar5[0x2b] = uVar19;
  *(undefined4 *)((int)puVar5 + 0x11c) = 0x80243278;
  lVar21 = uVar18 - 0x60;
  *(undefined4 *)(puVar5 + 0x23) = 0x80243278;
  lVar20 = uVar18 - 0x5c;
  *(undefined4 *)((int)puVar5 + 0x114) = 0x80243278;
  puVar23 = &DAT_00658dd8;
  *(undefined4 *)(puVar5 + 0x22) = 0x80243278;
  lVar25 = 2;
  puVar22 = &DAT_00658ddc;
  do {
    uVar1 = *puVar22;
    *(undefined4 *)((int)lVar24 + 0x120) = *puVar23;
    uVar3 = puVar23[2];
    *(undefined4 *)((int)lVar24 + 0x124) = uVar1;
    uVar1 = puVar22[2];
    puVar23 = puVar23 + 4;
    *(undefined4 *)((int)lVar21 + 8) = uVar3;
    puVar22 = puVar22 + 4;
    *(undefined4 *)((int)lVar20 + 8) = uVar1;
    lVar21 = lVar21 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  FastVecSub(uVar18 - 0xf0,iVar4 + 0x10,uVar18 - 0x110);
  *(undefined4 *)(puVar5 + 0x1a) = *(undefined4 *)(puVar5 + 0x12);
  *(undefined4 *)((int)puVar5 + 0xd4) = *(undefined4 *)((int)puVar5 + 0x94);
  *(undefined4 *)(puVar5 + 0x1b) = *(undefined4 *)(puVar5 + 0x13);
  *(undefined4 *)((int)puVar5 + 0xdc) = *(undefined4 *)((int)puVar5 + 0x9c);
  FastVecAdd(uVar18 - 0xe0,iVar4 + 0x10,uVar18 - 0x110);
  *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(puVar5 + 0x14);
  *(undefined4 *)((int)puVar5 + 0xe4) = *(undefined4 *)((int)puVar5 + 0xa4);
  *(undefined4 *)(puVar5 + 0x1d) = *(undefined4 *)(puVar5 + 0x15);
  *(undefined4 *)((int)puVar5 + 0xec) = *(undefined4 *)((int)puVar5 + 0xac);
  FastVecSub(uVar18 - 0xd0,iVar4 + 0x20,uVar18 - 0x100);
  *(undefined4 *)(puVar5 + 0x1e) = *(undefined4 *)(puVar5 + 0x16);
  *(undefined4 *)((int)puVar5 + 0xf4) = *(undefined4 *)((int)puVar5 + 0xb4);
  *(undefined4 *)(puVar5 + 0x1f) = *(undefined4 *)(puVar5 + 0x17);
  *(undefined4 *)((int)puVar5 + 0xfc) = *(undefined4 *)((int)puVar5 + 0xbc);
  FastVecAdd(uVar18 - 0xc0,iVar4 + 0x20,uVar18 - 0x100);
  *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)(puVar5 + 0x18);
  *(undefined4 *)((int)puVar5 + 0x104) = *(undefined4 *)((int)puVar5 + 0xc4);
  *(undefined4 *)(puVar5 + 0x21) = *(undefined4 *)(puVar5 + 0x19);
  *(undefined4 *)((int)puVar5 + 0x10c) = *(undefined4 *)((int)puVar5 + 0xcc);
  FastDrawQuad(uVar18 - 0xb0,0,0,EffectTexHeaders,9);
  return;
}


// 0x04cef38 (0x14 bytes)
void M994_004cef38(void)

{
  DAT_008f53fc = 0x10000;
  return;
}


// 0x04cef50 (0x2c bytes)
void M994_004cef50(void)

{
  SubmitZone((OceanPlane *)&DAT_008f9040);
  return;
}


// 0x04cef80 (0x94 bytes)
/* Moby 994 */

void UpdateMoby_994(MobyInstance *moby)

{
  if (moby->state == 0) {
    OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_008f9040,ZEXT48(&DAT_00900000),0x20);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M994_004cef50_0070f960,moby);
  }
  return;
}



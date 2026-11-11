// game/update/moby800.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x463ef8-0x46595c
#include "game/update/moby800.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x0463ef8 (0x688 bytes)
// inlined: FastAtan2 @0x464110, FastAtan2 @0x4642b8
void M800_00463ef8(int param_1)

{
  float fVar1;
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
  ushort uVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  int iVar29;
  float *pfVar31;
  longlong lVar30;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar32;
  float *pfVar33;
  ulonglong in_LR;
  longlong lVar34;
  longlong lVar35;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar32 = uVar25 - 0x200;
  puVar19 = (ulonglong *)lVar32;
  *puVar19 = uVar25;
  puVar19[0x42] = in_LR;
  puVar19[0x37] = in_f23;
  puVar19[0x38] = in_f24;
  puVar19[0x39] = in_f25;
  puVar19[0x3a] = in_f26;
  puVar19[0x3b] = in_f27;
  puVar19[0x3c] = in_f28;
  puVar19[0x3d] = in_f29;
  puVar19[0x3e] = in_f30;
  puVar19[0x3f] = in_f31;
  puVar19[0x36] = unaff_r31;
  iVar29 = *(int *)(param_1 + 0x78);
  puVar19[0x35] = unaff_r30;
  fVar7 = DAT_00874b40;
  fVar1 = *(float *)(iVar29 + 0xd0);
  *(float *)(puVar19 + 0x16) = fVar1;
  fVar2 = *(float *)(iVar29 + 0xd4);
  *(float *)((int)puVar19 + 0xb4) = fVar2;
  fVar3 = *(float *)(iVar29 + 0xd8);
  *(undefined4 *)((int)puVar19 + 0xbc) = 0x3f800000;
  *(float *)(puVar19 + 0x17) = fVar3;
  fVar4 = *(float *)(iVar29 + 0xa4);
  fVar5 = *(float *)(iVar29 + 0xa8);
  *(float *)(puVar19 + 0x16) = *(float *)(iVar29 + 0xa0) * fVar7 + fVar1;
  *(float *)((int)puVar19 + 0xb4) = fVar4 * fVar7 + fVar2;
  *(float *)(puVar19 + 0x17) = fVar5 * fVar7 + fVar3;
  uVar26 = GetEffectTex(0xb);
  puVar19[0x27] = uVar26;
  uVar26 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar19[0x28] = uVar26;
  uVar26 = FUN_00502f08(0,0,0,0,0,0);
  puVar19[0x26] = uVar26;
  uVar26 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar19[0x29] = uVar26;
  uVar27 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar27);
  fVar2 = GameCamera.posX - *(float *)(puVar19 + 0x16);
  fVar3 = GameCamera.posY - *(float *)((int)puVar19 + 0xb4);
  *(float *)((int)puVar19 + 0x15c) = fVar2;
  *(float *)(puVar19 + 0x2c) = fVar3;
  fVar7 = GameCamera.posZ;
  fVar1 = *(float *)(puVar19 + 0x17);
  *(float *)((int)puVar19 + 0x164) = ABS(fVar2) - ABS(fVar3);
  fVar5 = 0.0;
  uVar26 = (ulonglong)(*(uint *)((int)puVar19 + 0x15c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x164) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar19 + 0x2c) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar19 + 0x15c));
  if (*(float *)((int)puVar19 + 0x164) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar17 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar8 = ABS(*(float *)(puVar19 + 0x2c));
  if (*(float *)((int)puVar19 + 0x164) - 0.0 < 0.0) {
    fVar8 = ABS(fVar2);
  }
  fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  fVar9 = fVar5;
  if (0.0 < fVar4) {
    lVar35 = uVar25 - 0x1f0;
    lVar28 = uVar25 - 0x78;
    lVar30 = uVar25 - 0x68;
    lVar34 = 2;
    fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
    fVar8 = fVar4 * fVar4;
    *(float *)((int)puVar19 + 0x194) = fVar4;
    *(float *)((int)puVar19 + 0x18c) = fVar4;
    *(float *)(puVar19 + 0x32) = fVar4;
    *(float *)(puVar19 + 0x31) = fVar4;
    fVar4 = fVar8 * fVar8;
    *(float *)((int)puVar19 + 0x18c) = *(float *)((int)puVar19 + 0x18c) * fVar8;
    *(float *)(puVar19 + 0x32) = *(float *)(puVar19 + 0x32) * fVar4;
    *(float *)((int)puVar19 + 0x194) = *(float *)((int)puVar19 + 0x194) * fVar4 * fVar8;
    do {
      *(float *)((int)lVar35 + 0x188) = *(float *)((int)lVar35 + 0x178) * fVar4 * fVar4;
      iVar20 = (int)lVar28;
      lVar35 = lVar35 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x78;
    pfVar31 = (float *)&DAT_007358e0;
    lVar35 = lVar32;
    lVar28 = lVar30;
    do {
      fVar4 = *pfVar31;
      fVar8 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar35 + 0x188) = *(float *)((int)lVar35 + 0x188) * fVar4;
      lVar35 = lVar35 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar8;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar35 = lVar32;
    fVar4 = fVar5;
    do {
      iVar20 = (int)lVar35;
      lVar35 = lVar35 + 0x10;
      iVar21 = (int)lVar30;
      lVar30 = lVar30 + 0x10;
      fVar4 = fVar4 + *(float *)(iVar20 + 0x188) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
              *(float *)(iVar21 + 0xc);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    fVar9 = (fVar4 + 0.7853982) * fVar17 + fVar6;
  }
  *(float *)(puVar19 + 0xf) = fVar9;
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)((int)puVar19 + 0x154) = fVar7 - fVar1;
  fVar4 = ABS(fVar7 - fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar19 + 0x2a) = fVar2;
  *(float *)(puVar19 + 0x2b) = fVar3 - fVar4;
  uVar26 = (ulonglong)(*(uint *)(puVar19 + 0x2a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar19 + 0x2b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar19 + 0x154) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar19 + 0x2a));
  if (*(float *)(puVar19 + 0x2b) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar4 = ABS(*(float *)((int)puVar19 + 0x154));
  if (*(float *)(puVar19 + 0x2b) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar35 = uVar25 - 0x1f0;
    lVar28 = uVar25 - 0x98;
    lVar30 = uVar25 - 0x88;
    lVar34 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar19 + 0x174) = fVar1;
    *(float *)((int)puVar19 + 0x16c) = fVar1;
    *(float *)(puVar19 + 0x2e) = fVar1;
    *(float *)(puVar19 + 0x2d) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar19 + 0x16c) = *(float *)((int)puVar19 + 0x16c) * fVar4;
    *(float *)(puVar19 + 0x2e) = *(float *)(puVar19 + 0x2e) * fVar1;
    *(float *)((int)puVar19 + 0x174) = *(float *)((int)puVar19 + 0x174) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar35 + 0x168) = *(float *)((int)lVar35 + 0x158) * fVar1 * fVar1;
      iVar20 = (int)lVar28;
      lVar35 = lVar35 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x98;
    pfVar31 = (float *)&DAT_007358e0;
    lVar35 = lVar32;
    lVar28 = lVar30;
    do {
      fVar1 = *pfVar31;
      fVar4 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar35 + 0x168) = *(float *)((int)lVar35 + 0x168) * fVar1;
      lVar35 = lVar35 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar35 = 2;
    do {
      iVar20 = (int)lVar32;
      iVar21 = (int)lVar30;
      lVar32 = lVar32 + 0x10;
      lVar30 = lVar30 + 0x10;
      fVar5 = fVar5 + *(float *)(iVar20 + 0x168) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
              *(float *)(iVar21 + 0xc);
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    fVar5 = (fVar5 + 0.7853982) * fVar2 + fVar3;
  }
  *(undefined4 *)(puVar19 + 0xe) = 0;
  *(float *)((int)puVar19 + 0x74) = -fVar5;
  FastEulerToMtx(uVar25 - 0x180,uVar25 - 400);
  uVar18 = *(ushort *)(iVar29 + 0x202);
  *(undefined4 *)(puVar19 + 0x23) = 0;
  *(undefined4 *)((int)puVar19 + 0x124) = 0;
  *(undefined4 *)(puVar19 + 0x22) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0x114) = 0x3f800000;
  *(undefined4 *)((int)puVar19 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x25) = 0;
  *(undefined4 *)((int)puVar19 + 300) = 0;
  fVar1 = *(float *)(puVar19 + 0x10);
  fVar2 = *(float *)(puVar19 + 0x12);
  lVar32 = uVar25 - 0x140;
  fVar3 = *(float *)(puVar19 + 0x14);
  fVar4 = *(float *)(puVar19 + 0x16);
  fVar5 = *(float *)((int)puVar19 + 0x84);
  fVar7 = *(float *)((int)puVar19 + 0x94);
  iVar29 = ((uint)(ZERO_MASK((uint)uVar18)) & 0x3f3f00) + 0x7f40407f;
  fVar17 = *(float *)((int)puVar19 + 0xa4);
  fVar8 = *(float *)((int)puVar19 + 0xb4);
  fVar6 = *(float *)(puVar19 + 0x11);
  pfVar31 = (float *)&DAT_00874a80;
  fVar9 = *(float *)(puVar19 + 0x13);
  lVar35 = 4;
  fVar10 = *(float *)(puVar19 + 0x15);
  fVar11 = *(float *)(puVar19 + 0x17);
  fVar12 = *(float *)((int)puVar19 + 0x8c);
  fVar13 = *(float *)((int)puVar19 + 0x9c);
  fVar14 = *(float *)((int)puVar19 + 0xac);
  fVar15 = *(float *)((int)puVar19 + 0xbc);
  *(int *)((int)puVar19 + 0x10c) = iVar29;
  *(int *)(puVar19 + 0x21) = iVar29;
  *(int *)((int)puVar19 + 0x104) = iVar29;
  *(int *)(puVar19 + 0x20) = iVar29;
  do {
    fVar22 = *pfVar31 * DAT_00874b3c;
    pfVar33 = (float *)lVar32;
    *pfVar33 = fVar22;
    fVar23 = pfVar31[1] * DAT_00874b3c;
    pfVar33[1] = fVar23;
    fVar24 = pfVar31[2] * DAT_00874b3c;
    pfVar33[2] = fVar24;
    fVar16 = pfVar31[3];
    pfVar31 = pfVar31 + 4;
    *pfVar33 = fVar16 * fVar4 + fVar24 * fVar3 + fVar22 * fVar1 + fVar23 * fVar2;
    pfVar33[1] = fVar16 * fVar8 + fVar24 * fVar17 + fVar22 * fVar5 + fVar23 * fVar7;
    pfVar33[2] = fVar16 * fVar11 + fVar24 * fVar10 + fVar22 * fVar6 + fVar23 * fVar9;
    pfVar33[3] = fVar16 * fVar15 + fVar24 * fVar14 + fVar22 * fVar12 + fVar23 * fVar13;
    lVar32 = lVar32 + 0x10;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  FastDrawQuad(uVar25 - 0x140,0,0,EffectTexHeaders,9);
  return;
}


// 0x0464590 (0x4ac bytes)
// inlined: FastRSqrt @0x464668
void M800_00464590(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  float *pfVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar22;
  ulonglong in_f19;
  double dVar23;
  double dVar24;
  ulonglong in_f20;
  double dVar25;
  ulonglong in_f21;
  double dVar26;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x620;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0xc6] = in_LR;
  puVar5[0xb5] = in_f17;
  puVar5[0xb6] = in_f18;
  puVar5[0xb7] = in_f19;
  puVar5[0xb8] = in_f20;
  puVar5[0xb9] = in_f21;
  puVar5[0xba] = in_f22;
  puVar5[0xbb] = in_f23;
  puVar5[0xbc] = in_f24;
  puVar5[0xbd] = in_f25;
  puVar5[0xbe] = in_f26;
  puVar5[0xbf] = in_f27;
  puVar5[0xc0] = in_f28;
  puVar5[0xc1] = in_f29;
  puVar5[0xc2] = in_f30;
  puVar5[0xc3] = in_f31;
  puVar5[0xb4] = unaff_r31;
  puVar5[0xb3] = unaff_r30;
  iVar4 = *(int *)(param_1 + 0x78);
  puVar5[0xb2] = unaff_r29;
  M800_00463ef8();
  dVar27 = (double)*(float *)(iVar4 + 0xd0);
  dVar34 = (double)*(float *)(iVar4 + 0xa8);
  dVar25 = (double)*(float *)(iVar4 + 0xd8);
  dVar36 = (double)*(float *)(iVar4 + 0xa0);
  dVar35 = (double)*(float *)(iVar4 + 0xa4);
  dVar26 = (double)*(float *)(iVar4 + 0xd4);
  dVar23 = 0.0;
  fVar1 = (float)((double)(float)(dVar25 - (double)GameCamera.posZ) * dVar36 -
                 (double)(float)((double)(float)(dVar27 - (double)GameCamera.posX) * dVar34));
  fVar2 = (float)((double)(float)(dVar26 - (double)GameCamera.posY) * dVar34 -
                 (double)(float)((double)(float)(dVar25 - (double)GameCamera.posZ) * dVar35));
  fVar3 = (float)((double)(float)(dVar27 - (double)GameCamera.posX) * dVar35 -
                 (double)(float)((double)(float)(dVar26 - (double)GameCamera.posY) * dVar36));
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar22 = dVar23;
  dVar24 = dVar23;
  if (SQRT(fVar6) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar6);
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar23 = (double)(fVar2 * fVar7);
    dVar22 = (double)(fVar1 * fVar7);
    dVar24 = (double)(fVar3 * fVar7);
  }
  dVar33 = (double)(float)(dVar34 * dVar22);
  dVar31 = (double)(float)(dVar36 * dVar24);
  dVar29 = (double)(float)(dVar35 * dVar23);
  dVar32 = (double)(float)(dVar35 * dVar24 - dVar33);
  dVar30 = (double)(float)(dVar34 * dVar23 - dVar31);
  dVar28 = (double)(float)(dVar36 * dVar22 - dVar29);
  uVar10 = GetEffectTex(0x16);
  SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,2,0,1,0x80);
  SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(1,1,0,0,0,0);
  SetGSReg(6,uVar10);
  uVar10 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar10);
  uVar10 = FUN_00502f98(0,0,0,0,0,0,1,2);
  SetGSReg(0x16,uVar10);
  uVar10 = FUN_00502e50(0);
  SetGSReg(8,uVar10);
  STUB_00071170();
  iVar8 = DAT_00873ecc;
  iVar12 = 0;
  if (0 < DAT_00873ecc) {
    lVar15 = uVar9 - 0x464;
    pfVar18 = (float *)&DAT_00873ed0;
    lVar16 = uVar9 - 0x460;
    puVar17 = &DAT_00874538;
    lVar13 = lVar11;
    lVar14 = lVar11;
    do {
      dVar19 = (double)*pfVar18;
      dVar20 = (double)pfVar18[2];
      dVar21 = (double)pfVar18[1];
      *(float *)((int)lVar13 + 0x1b8) =
           (float)(dVar21 * dVar23 +
                  (double)(float)(dVar20 * dVar32 + (double)(float)(dVar19 * dVar36 + dVar27)));
      *(float *)lVar15 =
           (float)(dVar21 * dVar22 +
                  (double)(float)(dVar20 * dVar30 + (double)(float)(dVar19 * dVar35 + dVar26)));
      *(float *)lVar16 =
           (float)(dVar21 * dVar24 +
                  (double)(float)(dVar20 * dVar28 + (double)(float)(dVar19 * dVar34 + dVar25)));
      if (*(short *)(iVar4 + 0x202) != 0) {
        *(uint *)((int)lVar14 + 0x70) = *puVar17 & 0xff0000ff;
      }
      iVar12 = iVar12 + 1;
      pfVar18 = pfVar18 + 3;
      puVar17 = puVar17 + 1;
      lVar15 = lVar15 + 0xc;
      lVar16 = lVar16 + 0xc;
      lVar13 = lVar13 + 0xc;
      lVar14 = lVar14 + 4;
    } while (iVar12 < iVar8);
  }
  lVar13 = uVar9 - 0x468;
  if (*(short *)(iVar4 + 0x202) == 0) {
    DrawMeshSet(iVar8,lVar13,&DAT_00874538,&DAT_008742a8,9);
  }
  else {
    DrawMeshSet(iVar8,lVar13,uVar9 - 0x5b0,&DAT_008742a8,9);
  }
  iVar8 = DAT_00873ecc;
  if (0 < DAT_00873ecc) {
    pfVar18 = (float *)&DAT_00873ed0;
    lVar14 = uVar9 - 0x464;
    lVar15 = uVar9 - 0x460;
    iVar12 = DAT_00873ecc;
    do {
      dVar28 = (double)pfVar18[1];
      dVar30 = (double)*pfVar18;
      fVar1 = pfVar18[2];
      iVar12 = iVar12 + -1;
      pfVar18 = pfVar18 + 3;
      *(float *)((int)lVar11 + 0x1b8) =
           (float)((double)(fVar1 * -(float)(dVar35 * dVar24 - dVar33) +
                           (float)(dVar30 * dVar36 + -(double)(float)(dVar28 * dVar23))) + dVar27);
      *(float *)lVar14 =
           (float)((double)(fVar1 * -(float)(dVar34 * dVar23 - dVar31) +
                           (float)(dVar30 * dVar35 + -(double)(float)(dVar28 * dVar22))) + dVar26);
      lVar11 = lVar11 + 0xc;
      *(float *)lVar15 =
           (float)((double)(fVar1 * -(float)(dVar36 * dVar22 - dVar29) +
                           (float)(dVar30 * dVar34 + -(double)(float)(dVar28 * dVar24))) + dVar25);
      lVar14 = lVar14 + 0xc;
      lVar15 = lVar15 + 0xc;
    } while (0 < iVar12);
  }
  if (*(short *)(iVar4 + 0x202) == 0) {
    DrawMeshSet(iVar8,lVar13,&DAT_00874538,&DAT_008742a8,9);
  }
  else {
    DrawMeshSet(iVar8,lVar13,uVar9 - 0x5b0,&DAT_008742a8,9);
  }
  return;
}


// 0x0464a70 (0x904 bytes)
// inlined: FastAtan2 @0x464d04, FastAtan2 @0x464ea4
void M800_00464a70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  uint uVar19;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong uVar25;
  ulonglong in_LR;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar37;
  ulonglong in_f16;
  double dVar38;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar39;
  ulonglong in_f19;
  double dVar40;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  ulonglong in_f27;
  double dVar46;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  ulonglong in_f30;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x2b0;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar13;
  puVar7[0x58] = in_LR;
  puVar7[0x44] = in_f14;
  puVar7[0x45] = in_f15;
  puVar7[0x46] = in_f16;
  puVar7[0x47] = in_f17;
  puVar7[0x48] = in_f18;
  puVar7[0x49] = in_f19;
  puVar7[0x4a] = in_f20;
  puVar7[0x4b] = in_f21;
  puVar7[0x4c] = in_f22;
  puVar7[0x4d] = in_f23;
  puVar7[0x4e] = in_f24;
  puVar7[0x4f] = in_f25;
  puVar7[0x50] = in_f26;
  puVar7[0x51] = in_f27;
  puVar7[0x52] = in_f28;
  puVar7[0x53] = in_f29;
  puVar7[0x54] = in_f30;
  puVar7[0x55] = in_f31;
  puVar7[0x42] = unaff_r30;
  puVar7[0x43] = unaff_r31;
  iVar22 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar22 + 0x160);
  fVar1 = fVar2 + 1.5707963;
  fVar6 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar6 = fVar2;
  }
  fVar8 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar8 = fVar1;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
    fVar6 = fVar8;
  }
  fVar1 = fVar3 * fVar3;
  dVar50 = (double)*(float *)(iVar22 + 0x1d4);
  dVar48 = (double)(*(float *)(iVar22 + 0x1dc) + 0.125);
  dVar49 = (double)*(float *)(iVar22 + 0x1d8);
  fVar8 = fVar6 * fVar6;
  fVar9 = fVar1 * fVar1 * fVar3;
  fVar5 = fVar8 * fVar8 * fVar6;
  fVar10 = fVar1 * fVar9;
  fVar4 = fVar8 * fVar5;
  dVar46 = (double)(fVar1 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3);
  puVar7[0x41] = unaff_r29;
  puVar7[0x40] = unaff_r28;
  puVar7[0x3f] = unaff_r27;
  puVar7[0x3e] = unaff_r26;
  puVar7[0x3d] = unaff_r25;
  puVar7[0x3c] = unaff_r24;
  dVar47 = (double)(fVar8 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6);
  dVar29 = (double)FastWrapRot(fVar2,-0.06981317);
  *(float *)(iVar22 + 0x160) = (float)dVar29;
  uVar14 = GetEffectTex(0xb);
  puVar7[0x25] = uVar14;
  uVar14 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(0,2,0,1,0x80);
  fVar2 = (float)((double)GameCamera.posX - dVar50);
  fVar1 = (float)((double)GameCamera.posY - dVar49);
  puVar7[0x27] = uVar14;
  *(float *)((int)puVar7 + 0x14c) = fVar2;
  *(float *)(puVar7 + 0x2a) = fVar1;
  dVar29 = (double)GameCamera.posZ;
  *(float *)((int)puVar7 + 0x154) = ABS(fVar2) - ABS(fVar1);
  fVar8 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar7 + 0x14c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x154) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x2a) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)((int)puVar7 + 0x14c));
  if (*(float *)((int)puVar7 + 0x154) - 0.0 < 0.0) {
    fVar6 = ABS(fVar1);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)(puVar7 + 0x2a));
  if (*(float *)((int)puVar7 + 0x154) - 0.0 < 0.0) {
    fVar4 = ABS(fVar2);
  }
  fVar9 = fVar8;
  if (0.0 < fVar6) {
    lVar20 = uVar13 - 0x2a0;
    lVar27 = uVar13 - 0x138;
    lVar18 = uVar13 - 0x128;
    lVar26 = 2;
    fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
    fVar4 = fVar6 * fVar6;
    *(float *)((int)puVar7 + 0x184) = fVar6;
    *(float *)((int)puVar7 + 0x17c) = fVar6;
    *(float *)(puVar7 + 0x30) = fVar6;
    *(float *)(puVar7 + 0x2f) = fVar6;
    fVar6 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x17c) = *(float *)((int)puVar7 + 0x17c) * fVar4;
    *(float *)(puVar7 + 0x30) = *(float *)(puVar7 + 0x30) * fVar6;
    *(float *)((int)puVar7 + 0x184) = *(float *)((int)puVar7 + 0x184) * fVar6 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x178) = *(float *)((int)lVar20 + 0x168) * fVar6 * fVar6;
      iVar22 = (int)lVar27;
      lVar20 = lVar20 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar18 = uVar13 - 0x138;
    pfVar21 = (float *)&DAT_007358e0;
    lVar20 = lVar16;
    lVar27 = lVar18;
    do {
      fVar6 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar20 + 0x178) = *(float *)((int)lVar20 + 0x178) * fVar6;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
      lVar27 = lVar27 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar27 = 2;
    lVar20 = lVar16;
    fVar6 = fVar8;
    do {
      iVar22 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      fVar6 = fVar6 + *(float *)(iVar22 + 0x178) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    fVar9 = (fVar6 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)((int)puVar7 + 0x144) = (float)(dVar29 - dVar48);
  *(float *)(puVar7 + 0xf) = fVar9;
  fVar6 = ABS((float)(dVar29 - dVar48));
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = ABS(fVar2);
  *(float *)(puVar7 + 0x28) = fVar2;
  *(float *)(puVar7 + 0x29) = fVar1 - fVar6;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x28) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x29) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x144) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x28));
  if (*(float *)(puVar7 + 0x29) - 0.0 < 0.0) {
    fVar2 = fVar6;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x144));
  if (*(float *)(puVar7 + 0x29) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar20 = uVar13 - 0x2a0;
    lVar27 = uVar13 - 0x158;
    lVar18 = uVar13 - 0x148;
    lVar26 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x164) = fVar2;
    *(float *)((int)puVar7 + 0x15c) = fVar2;
    *(float *)(puVar7 + 0x2c) = fVar2;
    *(float *)(puVar7 + 0x2b) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x15c) = *(float *)((int)puVar7 + 0x15c) * fVar3;
    *(float *)(puVar7 + 0x2c) = *(float *)(puVar7 + 0x2c) * fVar2;
    *(float *)((int)puVar7 + 0x164) = *(float *)((int)puVar7 + 0x164) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar20 + 0x158) = *(float *)((int)lVar20 + 0x148) * fVar2 * fVar2;
      iVar22 = (int)lVar27;
      lVar20 = lVar20 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar18 = uVar13 - 0x158;
    pfVar21 = (float *)&DAT_007358e0;
    lVar20 = lVar16;
    lVar27 = lVar18;
    do {
      fVar2 = *pfVar21;
      fVar3 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar20 + 0x158) = *(float *)((int)lVar20 + 0x158) * fVar2;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
      lVar27 = lVar27 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar16;
      iVar11 = (int)lVar18;
      lVar16 = lVar16 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar8 = fVar8 + *(float *)(iVar22 + 0x158) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    fVar8 = (fVar8 + 0.7853982) * fVar6 + fVar1;
  }
  iVar22 = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(float *)((int)puVar7 + 0x74) = -fVar8;
  FastEulerToMtx(uVar13 - 0x230,uVar13 - 0x240);
  puVar7[0x3a] = (ulonglong)(double)*(float *)(puVar7 + 0x10);
  puVar7[0x39] = (ulonglong)(double)*(float *)((int)puVar7 + 0x84);
  puVar7[0x38] = (ulonglong)(double)*(float *)(puVar7 + 0x11);
  puVar7[0x37] = (ulonglong)(double)*(float *)((int)puVar7 + 0x8c);
  puVar7[0x36] = (ulonglong)(double)*(float *)(puVar7 + 0x12);
  dVar45 = (double)*(float *)(puVar7 + 0x14);
  puVar7[0x35] = (ulonglong)(double)*(float *)((int)puVar7 + 0x94);
  dVar44 = (double)*(float *)((int)puVar7 + 0xa4);
  puVar7[0x34] = (ulonglong)(double)*(float *)(puVar7 + 0x13);
  dVar43 = (double)*(float *)(puVar7 + 0x15);
  puVar7[0x33] = (ulonglong)(double)*(float *)((int)puVar7 + 0x9c);
  dVar42 = (double)*(float *)((int)puVar7 + 0xac);
  *(undefined4 *)(puVar7 + 0x20) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x104) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x21) = 0;
  *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x22) = 0x3f800000;
  *(undefined4 *)((int)puVar7 + 0x114) = 0;
  *(undefined4 *)(puVar7 + 0x23) = 0;
  dVar41 = (double)DAT_00874b08;
  *(undefined4 *)((int)puVar7 + 0x11c) = 0;
  dVar29 = (double)DAT_00874b00;
  uVar25 = (ulonglong)DAT_00874b10;
  uVar24 = (ulonglong)DAT_00874b14;
  uVar23 = (ulonglong)DAT_00874b18;
  uVar14 = (ulonglong)DAT_00874b1c;
  uVar15 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar15);
  do {
    dVar34 = (double)puVar7[0x3a];
    dVar35 = (double)puVar7[0x36];
    dVar36 = (double)puVar7[0x39];
    lVar20 = uVar13 - 0x200;
    uVar19 = (uint)((uVar24 & 0xffffffff) << 8) | (uint)uVar25 |
             (uint)((uVar14 & 0xffffffff) << 0x18) | (uint)((uVar23 & 0xffffffff) << 0x10);
    *(uint *)((int)puVar7 + 0xfc) = uVar19;
    pfVar21 = (float *)&DAT_00874a80;
    *(uint *)(puVar7 + 0x1f) = uVar19;
    lVar27 = 4;
    *(uint *)((int)puVar7 + 0xf4) = uVar19;
    *(uint *)(puVar7 + 0x1e) = uVar19;
    dVar28 = (double)puVar7[0x35];
    dVar39 = (double)puVar7[0x34];
    dVar40 = (double)puVar7[0x38];
    dVar38 = (double)puVar7[0x37];
    dVar37 = (double)puVar7[0x33];
    lVar16 = lVar20;
    do {
      dVar30 = (double)*pfVar21;
      pfVar17 = (float *)lVar16;
      *pfVar17 = (float)(dVar30 * dVar41);
      dVar31 = (double)pfVar21[1];
      pfVar17[1] = (float)(dVar31 * dVar41);
      dVar32 = (double)pfVar21[2];
      pfVar17[2] = (float)(dVar32 * dVar41);
      dVar33 = (double)pfVar21[3];
      pfVar21 = pfVar21 + 4;
      pfVar17[2] = (float)(dVar33 * dVar48 +
                          (double)(float)(dVar32 * (double)(float)(dVar41 * dVar43) +
                                         (double)(float)(dVar30 * (double)(float)(dVar41 * dVar40) +
                                                        (double)(float)(dVar31 * (double)(float)(
                                                  dVar41 * dVar39)))));
      *pfVar17 = (float)(dVar29 * dVar47 +
                        (double)(float)(dVar33 * dVar50 +
                                       (double)(float)(dVar32 * (double)(float)(dVar41 * dVar45) +
                                                      (double)(float)(dVar30 * (double)(float)(
                                                  dVar41 * dVar34) +
                                                  (double)(float)(dVar31 * (double)(float)(dVar41 * 
                                                  dVar35))))));
      pfVar17[1] = (float)(dVar29 * dVar46 +
                          (double)(float)(dVar33 * dVar49 +
                                         (double)(float)(dVar32 * (double)(float)(dVar41 * dVar44) +
                                                        (double)(float)(dVar30 * (double)(float)(
                                                  dVar41 * dVar36) +
                                                  (double)(float)(dVar31 * (double)(float)(dVar41 * 
                                                  dVar28))))));
      pfVar17[3] = (float)(dVar31 * (double)(float)(dVar41 * dVar37) +
                          (double)(float)(dVar32 * (double)(float)(dVar41 * dVar42) +
                                         (double)(float)(dVar30 * (double)(float)(dVar41 * dVar38) +
                                                        dVar33)));
      lVar16 = lVar16 + 0x10;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    FastDrawQuad(uVar13 - 0x200,0,0,EffectTexHeaders,9);
    uVar12 = EffectTexHeaders;
    lVar16 = 4;
    do {
      pfVar21 = (float *)lVar20;
      *pfVar21 = (float)((double)(float)(dVar29 * -2.0) * dVar47 + (double)*pfVar21);
      pfVar21[1] = (float)((double)(float)(dVar29 * -2.0) * dVar46 + (double)pfVar21[1]);
      lVar20 = lVar20 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FastDrawQuad(uVar13 - 0x200,0,0,uVar12,9);
    lVar16 = uVar25 - DAT_010ccf34;
    dVar41 = (double)(float)((double)DAT_00874b0c + dVar41);
    dVar29 = (double)(float)((double)DAT_00874b04 + dVar29);
    lVar27 = uVar24 - DAT_00874b20;
    lVar20 = uVar23 - DAT_00874b24;
    uVar25 = lVar16 + ((longlong)(int)lVar16 >> 0x3f & -lVar16);
    lVar16 = uVar14 - DAT_00874b28;
    uVar24 = lVar27 + ((longlong)(int)lVar27 >> 0x3f & -lVar27);
    iVar22 = iVar22 + 1;
    uVar23 = lVar20 + ((longlong)(int)lVar20 >> 0x3f & -lVar20);
    uVar14 = lVar16 + ((longlong)(int)lVar16 >> 0x3f & -lVar16);
  } while (iVar22 < 0x10);
  return;
}


// 0x0465380 (0x2e4 bytes)
void M800_00465380(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_c0 [38];
  
  iVar6 = *(int *)(param_1 + 0x78);
  dVar15 = (double)*(float *)(iVar6 + 0x90);
  dVar16 = (double)*(float *)(iVar6 + 0x94);
  dVar17 = (double)(*(float *)(iVar6 + 0x98) + 0.01);
  GetEffectTex(0xb);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar7 = FUN_00502e50(0);
  SetGSReg(8,uVar7);
  uVar7 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar7);
  fVar2 = (float)((double)GameCamera.posY - dVar16);
  fVar3 = (float)((double)GameCamera.posX - dVar15);
  fVar4 = (float)((double)GameCamera.posZ - dVar17);
  dVar12 = 0.0;
  dVar14 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar14) {
    dVar11 = (double)(float)(dVar14 - (double)DAT_00874b44);
    dVar13 = (double)*(float *)(iVar6 + 0x218);
    if ((dVar11 < (double)*(float *)(iVar6 + 0x218)) && (dVar13 = dVar11, dVar11 < 0.0)) {
      dVar13 = dVar12;
    }
    fVar1 = (float)(dVar13 / dVar14);
    dVar13 = dVar12;
    if (0.0 - dVar14 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar11 = dVar12;
    if (0.0 - dVar14 < 0.0) {
      dVar11 = (double)(fVar2 * fVar1);
    }
    if (0.0 - dVar14 < 0.0) {
      dVar12 = (double)(fVar3 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar11 = (double)(fVar2 * fVar1);
    }
    if (dVar14 - 0.0 < 0.0) {
      dVar12 = (double)(fVar3 * fVar1);
    }
    dVar17 = (double)(float)(dVar17 + dVar13);
    dVar16 = (double)(float)(dVar16 + dVar11);
    dVar15 = (double)(float)(dVar15 + dVar12);
  }
  pfVar8 = (float *)&DAT_00874ac0;
  lVar10 = 4;
  pfVar9 = local_c0;
  do {
    fVar2 = *(float *)(iVar6 + 0x214);
    fVar3 = *pfVar8;
    *pfVar9 = fVar3 * fVar2;
    fVar4 = pfVar8[1];
    pfVar9[1] = fVar4 * fVar2;
    fVar1 = pfVar8[2];
    pfVar9[2] = fVar1 * fVar2;
    fVar5 = pfVar8[3];
    *pfVar9 = (float)((double)(fVar3 * fVar2) + dVar15);
    pfVar9[1] = (float)((double)(fVar4 * fVar2) + dVar16);
    pfVar8 = pfVar8 + 4;
    pfVar9[3] = fVar5;
    pfVar9[2] = (float)((double)(fVar1 * fVar2) + dVar17);
    pfVar9 = pfVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FastDrawQuad(local_c0,0,0,EffectTexHeaders,9);
  return;
}


// 0x0465668 (0xd4 bytes)
MobyInstance * M800_00465668(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  ushort *puVar5;
  MobyInstance *pMVar6;
  int *piVar7;
  int iVar8;
  MobyInstance *pMVar9;
  
  pMVar6 = (MobyInstance *)0x0;
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    fVar1 = 0.0;
    do {
      iVar8 = 0;
      piVar7 = &DAT_010ccee4;
      pMVar9 = g_MobyInstance + (*puVar5 & 0x7fff);
      do {
        if ((int)(short)pMVar9->uid == *piVar7) goto LAB_00465720;
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar8 < 0x14);
      fVar4 = GameCamera.posY - (pMVar9->pos).y;
      fVar3 = GameCamera.posX - (pMVar9->pos).x;
      fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar1 < fVar3) {
        fVar1 = fVar3;
        pMVar6 = pMVar9;
      }
LAB_00465720:
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar6;
}


// 0x046573c (0x110 bytes)
void M800_0046573c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = &DAT_010ccee4;
  iVar1 = *(int *)(param_1 + 0x78);
  lVar8 = 5;
  piVar4 = piVar7;
  do {
    *piVar4 = -1;
    piVar4[1] = -1;
    piVar4[2] = -1;
    piVar4[3] = -1;
    piVar4 = piVar4 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = 0;
  if (0 < *(short *)(iVar1 + 0x20a)) {
    do {
      iVar5 = M800_00465668(*(undefined1 *)(param_1 + 0x21),&DAT_010ccee4);
      *piVar7 = (int)*(short *)(iVar5 + 0xb2);
      iVar2 = *(int *)(iVar5 + 0x78);
      uVar3 = *(uint *)(iVar2 + 0x20c);
      if ((uVar3 & 8) != 0) {
        M800_00464a70(iVar5);
        uVar3 = *(uint *)(iVar2 + 0x20c);
      }
      if ((uVar3 & 2) != 0) {
        M800_00464590(iVar5);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(short *)(iVar1 + 0x20a));
  }
  return;
}


// 0x046584c (0x14 bytes)
void M800_0046584c(void)

{
  DAT_00874b98 = 0x10000;
  return;
}


// 0x0465860 (0xfc bytes)
/* Moby 800 */

void UpdateMoby_800(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x74e,1,0x74e,1,0xb,2);
    DeleteMoby(moby);
  }
  return;
}



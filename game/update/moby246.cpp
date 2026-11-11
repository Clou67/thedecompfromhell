// game/update/moby246.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x312b54-0x31453c
#include "game/update/moby246.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby156.h"
#include "idol/fastfunc.h"

// 0x0312b54 (0x14 bytes)
void M246_00312b54(void)

{
  DAT_007ff91c = 0x10000;
  return;
}


// 0x0312b68 (0x1a8 bytes)
void M246_00312b68(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar13 = uVar6 - 0x150;
  puVar4 = (ulonglong *)lVar13;
  *puVar4 = uVar6;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = unaff_r31;
  iVar3 = *(int *)(param_1 + 0x78);
  uVar7 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar4[0x27] = uVar7;
  uVar7 = GetEffectTex(0xd);
  puVar4[0x25] = uVar7;
  FastMtx4Identity((float *)(puVar4 + 0xe));
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(iVar3 + 0xe0);
  *(undefined4 *)((int)puVar4 + 0xa4) = *(undefined4 *)(iVar3 + 0xe4);
  uVar1 = *(undefined4 *)(iVar3 + 0xe8);
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x15) = uVar1;
  iVar3 = *(int *)(iVar3 + 0xf0);
  lVar15 = 4;
  puVar8 = &DAT_007ff940;
  lVar9 = uVar6 - 0xa0;
  puVar12 = &DAT_007ff980;
  puVar11 = &DAT_007ff984;
  lVar14 = lVar13;
  do {
    *(uint *)((int)lVar14 + 0xf0) =
         ((uint)(ZERO_MASK(iVar3)) & 0x81808000) - 0xffff80;
    lVar14 = lVar14 + 4;
    puVar10 = (undefined4 *)lVar9;
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    puVar10[2] = puVar8[2];
    puVar5 = puVar8 + 3;
    puVar8 = puVar8 + 4;
    puVar10[3] = *puVar5;
    uVar1 = *puVar12;
    lVar9 = lVar9 + 0x10;
    uVar2 = *puVar11;
    puVar12 = puVar12 + 2;
    *(undefined4 *)((int)lVar13 + 0x100) = uVar1;
    puVar11 = puVar11 + 2;
    *(undefined4 *)((int)lVar13 + 0x104) = uVar2;
    lVar13 = lVar13 + 8;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  FastDrawQuad(uVar6 - 0xa0,uVar6 - 0xe0,0,EffectTexHeaders,9);
  return;
}


// 0x0312d38 (0x3dc bytes)
void M246_00312d38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
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
  float afStack_150 [12];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  
  iVar1 = *(int *)(param_1 + 0x78);
  local_90 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  local_a0 = FUN_00502f08(0,0,0,0,0,0);
  local_88 = idol_draw::PackCmd(0,2,0,1,0x80);
  local_98 = GetEffectTex(10);
  FastMtx4Identity(afStack_150);
  local_120 = *(undefined4 *)(iVar1 + 0x100);
  local_11c = *(undefined4 *)(iVar1 + 0x104);
  iVar3 = 0;
  local_118 = *(undefined4 *)(iVar1 + 0x108);
  local_114 = 0x3f800000;
  dVar15 = 1.570796251296997;
  dVar16 = 3.141592502593994;
  dVar17 = -3.141592502593994;
  dVar18 = -0.16666656732559204;
  dVar19 = 0.008333025500178337;
  dVar20 = -0.0001980741071747616;
  dVar21 = 2.601886990305502e-06;
  dVar22 = 0.5;
  dVar23 = 0.5235987901687622;
  do {
    iVar2 = iVar3 % 0xc;
    iVar3 = iVar3 + 1;
    local_80 = (longlong)(iVar3 % 0xc);
    dVar4 = (double)(float)((double)(longlong)iVar2 * dVar23);
    dVar5 = (double)(float)(dVar4 + dVar15);
    dVar6 = (double)(float)(dVar16 - dVar4);
    if (dVar4 - (double)(float)(dVar16 - dVar4) < 0.0) {
      dVar6 = dVar4;
    }
    dVar8 = (double)(float)(dVar16 - dVar5);
    if (dVar5 - (double)(float)(dVar16 - dVar5) < 0.0) {
      dVar8 = dVar5;
    }
    dVar7 = (double)(float)((double)local_80 * dVar23);
    dVar10 = (double)(float)(dVar17 - dVar4);
    if ((double)(float)(dVar17 - dVar4) - dVar6 < 0.0) {
      dVar10 = dVar6;
    }
    dVar6 = (double)(float)(dVar17 - dVar5);
    if ((double)(float)(dVar17 - dVar5) - dVar8 < 0.0) {
      dVar6 = dVar8;
    }
    dVar5 = (double)(float)(dVar10 * dVar10);
    dVar9 = (double)(float)(dVar7 + dVar15);
    dVar8 = (double)(float)(dVar6 * dVar6);
    dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar10));
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
    dVar14 = (double)(float)(dVar5 * dVar12);
    dVar13 = (double)(float)(dVar8 * dVar11);
    dVar4 = (double)(float)(dVar16 - dVar9);
    if (dVar9 - (double)(float)(dVar16 - dVar9) < 0.0) {
      dVar4 = dVar9;
    }
    local_fc = (float)((double)(float)(dVar5 * dVar14) * dVar21 +
                      (double)(float)(dVar14 * dVar20 +
                                     (double)(float)(dVar12 * dVar19 +
                                                    (double)(float)((double)(float)(dVar5 * dVar10)
                                                                    * dVar18 + dVar10))));
    local_100 = (float)((double)(float)(dVar8 * dVar13) * dVar21 +
                       (double)(float)(dVar13 * dVar20 +
                                      (double)(float)(dVar11 * dVar19 +
                                                     (double)(float)((double)(float)(dVar8 * dVar6)
                                                                     * dVar18 + dVar6))));
    dVar6 = (double)(float)(dVar17 - dVar9);
    if ((double)(float)(dVar17 - dVar9) - dVar4 < 0.0) {
      dVar6 = dVar4;
    }
    local_110 = local_100 * *(float *)(iVar1 + 0xf4);
    dVar4 = (double)(float)(dVar16 - dVar7);
    if (dVar7 - (double)(float)(dVar16 - dVar7) < 0.0) {
      dVar4 = dVar7;
    }
    dVar8 = (double)(float)(dVar6 * dVar6);
    local_108 = 0;
    local_10c = local_fc * *(float *)(iVar1 + 0xf4);
    local_104 = 0x3f800000;
    dVar5 = (double)(float)(dVar17 - dVar7);
    if ((double)(float)(dVar17 - dVar7) - dVar4 < 0.0) {
      dVar5 = dVar4;
    }
    dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
    dVar7 = (double)(float)(dVar8 * dVar10);
    local_100 = local_100 * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    dVar4 = (double)(float)(dVar5 * dVar5);
    local_f8 = 0;
    local_f4 = 0x3f800000;
    local_e0 = (float)((double)(float)(dVar8 * dVar7) * dVar21 +
                      (double)(float)(dVar7 * dVar20 +
                                     (double)(float)(dVar10 * dVar19 +
                                                    (double)(float)((double)(float)(dVar8 * dVar6) *
                                                                    dVar18 + dVar6))));
    local_fc = local_fc * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    dVar6 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar5));
    dVar8 = (double)(float)(dVar4 * dVar6);
    local_d0 = 0xff000080;
    local_f0 = local_e0 * *(float *)(iVar1 + 0xf4);
    local_cc = 0xff000000;
    local_c8 = 0xff000080;
    local_c4 = 0xff000000;
    local_e8 = 0;
    local_e4 = 0x3f800000;
    local_dc = (float)((double)(float)(dVar4 * dVar8) * dVar21 +
                      (double)(float)(dVar8 * dVar20 +
                                     (double)(float)(dVar6 * dVar19 +
                                                    (double)(float)((double)(float)(dVar4 * dVar5) *
                                                                    dVar18 + dVar5))));
    local_ec = local_dc * *(float *)(iVar1 + 0xf4);
    local_e0 = local_e0 * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    local_d8 = 0;
    local_d4 = 0x3f800000;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0x3f800000;
    local_b0 = 0x3f800000;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_dc = local_dc * (float)((double)*(float *)(iVar1 + 0xf4) - dVar22);
    FastDrawQuad(&local_110,afStack_150,0,EffectTexHeaders,9);
  } while (iVar3 < 0xc);
  return;
}


// 0x0313188 (0x13b4 bytes)
// inlined: FastAtan2 @0x313324, FastAtan2 @0x313528, FastAtan2 @0x313a28, FastAtan2 @0x313d74
/* Moby 246 */

void UpdateMoby_246(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  KickVars *kv;
  int *piVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *victim;
  ulonglong uVar12;
  int iVar15;
  float fVar16;
  longlong lVar13;
  longlong lVar14;
  int iVar17;
  uint uVar18;
  float *pfVar20;
  longlong lVar19;
  u8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float fVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1c0;
  puVar5 = (ulonglong *)lVar14;
  *puVar5 = uVar12;
  puVar5[0x3a] = in_LR;
  puVar5[0x34] = in_f28;
  puVar5[0x35] = in_f29;
  puVar5[0x36] = in_f30;
  puVar5[0x37] = in_f31;
  puVar5[0x33] = unaff_r31;
  puVar5[0x32] = unaff_r30;
  puVar5[0x31] = unaff_r29;
  puVar5[0x30] = unaff_r28;
  kv = (KickVars *)moby->pVar;
  iVar15 = MB_damage(moby,0x30000,0);
  if ((iVar15 != 0) && (moby->state != '\x05' && moby->state != '\x06')) {
    kv->flag = 1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    dVar28 = 0.0;
    kv->xySpeed = 0.0;
    fVar24 = g_FrameTime;
    kv->type = '\0';
    fVar16 = (float)((int)kv[2].peakFrame + -1);
    kv[2].peakFrame = fVar16;
    kv->zSpeed = fVar24 * 4.0;
    if (fVar16 == 0.0) {
      moby->state = '\x06';
      (moby->pos).z = (moby->pos).z + 0.1;
      fVar24 = (moby->pos).x - g_heroPosition.x;
      fVar16 = (moby->pos).y - g_heroPosition.y;
      fVar1 = ABS(fVar24);
      fVar2 = ABS(fVar16);
      *(float *)((int)puVar5 + 0xf4) = fVar24;
      *(float *)(puVar5 + 0x1f) = fVar16;
      *(float *)((int)puVar5 + 0xfc) = fVar1 - fVar2;
      uVar22 = (ulonglong)(*(uint *)((int)puVar5 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar5 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar5 + 0x1f) >> 0x1d) & 4;
      lVar13 = uVar22 << 2;
      fVar24 = ABS(*(float *)((int)puVar5 + 0xf4));
      if (*(float *)((int)puVar5 + 0xfc) - 0.0 < 0.0) {
        fVar24 = fVar2;
      }
      fVar16 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
      fVar2 = ABS(*(float *)(puVar5 + 0x1f));
      if (*(float *)((int)puVar5 + 0xfc) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar24) {
        lVar13 = uVar12 - 0x1b0;
        lVar19 = uVar12 - 0x60;
        lVar23 = uVar12 - 0x50;
        lVar25 = 2;
        fVar24 = (fVar2 - fVar24) / (fVar2 + fVar24);
        fVar2 = fVar24 * fVar24;
        *(float *)((int)puVar5 + 0x16c) = fVar24;
        *(float *)((int)puVar5 + 0x164) = fVar24;
        *(float *)(puVar5 + 0x2d) = fVar24;
        *(float *)(puVar5 + 0x2c) = fVar24;
        fVar24 = fVar2 * fVar2;
        *(float *)((int)puVar5 + 0x164) = *(float *)((int)puVar5 + 0x164) * fVar2;
        *(float *)(puVar5 + 0x2d) = *(float *)(puVar5 + 0x2d) * fVar24;
        *(float *)((int)puVar5 + 0x16c) = *(float *)((int)puVar5 + 0x16c) * fVar24 * fVar2;
        do {
          *(float *)((int)lVar13 + 0x160) = *(float *)((int)lVar13 + 0x150) * fVar24 * fVar24;
          iVar15 = (int)lVar19;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x60;
        pfVar20 = (float *)&DAT_007358e0;
        lVar19 = lVar14;
        lVar13 = lVar23;
        do {
          fVar24 = *pfVar20;
          fVar2 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar19 + 0x160) = *(float *)((int)lVar19 + 0x160) * fVar24;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
          lVar13 = lVar13 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 2;
        lVar19 = lVar14;
        do {
          iVar15 = (int)lVar19;
          iVar17 = (int)lVar23;
          lVar19 = lVar19 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x160)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar16 + fVar1);
      }
      MB_StartKick(dVar28,moby,kv,lVar13,1,3,0);
    }
    else {
      moby->state = '\x05';
      (moby->pos).z = (moby->pos).z + 0.1;
      fVar24 = (moby->pos).x - g_heroPosition.x;
      fVar16 = (moby->pos).y - g_heroPosition.y;
      fVar1 = ABS(fVar24);
      fVar2 = ABS(fVar16);
      *(float *)(puVar5 + 0x1d) = fVar24;
      *(float *)((int)puVar5 + 0xec) = fVar16;
      *(float *)(puVar5 + 0x1e) = fVar1 - fVar2;
      uVar22 = (ulonglong)(*(uint *)(puVar5 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar5 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar5 + 0xec) >> 0x1d) & 4;
      lVar13 = uVar22 << 2;
      fVar24 = ABS(*(float *)(puVar5 + 0x1d));
      if (*(float *)(puVar5 + 0x1e) - 0.0 < 0.0) {
        fVar24 = fVar2;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
      fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar5 + 0xec));
      if (*(float *)(puVar5 + 0x1e) - 0.0 < 0.0) {
        fVar6 = fVar1;
      }
      if (0.0 < fVar24) {
        lVar13 = uVar12 - 0x1b0;
        lVar23 = uVar12 - 0x70;
        lVar19 = uVar12 - 0x80;
        lVar25 = 2;
        fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
        fVar1 = fVar24 * fVar24;
        *(float *)((int)puVar5 + 0x14c) = fVar24;
        *(float *)((int)puVar5 + 0x144) = fVar24;
        *(float *)(puVar5 + 0x29) = fVar24;
        *(float *)(puVar5 + 0x28) = fVar24;
        fVar24 = fVar1 * fVar1;
        *(float *)((int)puVar5 + 0x144) = *(float *)((int)puVar5 + 0x144) * fVar1;
        *(float *)(puVar5 + 0x29) = *(float *)(puVar5 + 0x29) * fVar24;
        *(float *)((int)puVar5 + 0x14c) = *(float *)((int)puVar5 + 0x14c) * fVar24 * fVar1;
        do {
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar24 * fVar24;
          iVar15 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x80;
        pfVar20 = (float *)&DAT_007358e0;
        lVar19 = lVar14;
        lVar13 = lVar23;
        do {
          fVar24 = *pfVar20;
          fVar1 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x140) * fVar24;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
          lVar13 = lVar13 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 2;
        lVar19 = lVar14;
        do {
          iVar15 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x140)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar16);
      }
      MB_StartKick(dVar28,moby,kv,lVar13,1,3,0);
    }
  }
  uVar21 = moby->state;
  moby->damage = -1;
  if (uVar21 == '\x06') {
    uVar18 = MB_UpdateKick(moby,kv);
    if ((uVar18 & 0x40) != 0) {
      DeleteMoby(moby);
      return;
    }
    goto LAB_00314324;
  }
  if (uVar21 != '\x05') {
    if (uVar21 != '\x04') {
      if (uVar21 == '\x03') {
        fVar24 = (float)kv[2].radius - (moby->pos).x;
        fVar16 = (float)kv[2].flag - (moby->pos).y;
        pfVar20 = (float *)&g_atanQuadrantTable;
        fVar1 = ABS(fVar24);
        fVar2 = ABS(fVar16);
        *(float *)(puVar5 + 0x1a) = fVar24;
        *(float *)((int)puVar5 + 0xd4) = fVar16;
        *(float *)(puVar5 + 0x1b) = fVar1 - fVar2;
        dVar28 = 0.0;
        uVar22 = (ulonglong)(*(uint *)(puVar5 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0xd4) >> 0x1d) & 4;
        fVar24 = ABS(*(float *)(puVar5 + 0x1a));
        if (*(float *)(puVar5 + 0x1b) - 0.0 < 0.0) {
          fVar24 = fVar2;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)((int)puVar5 + 0xd4));
        if (*(float *)(puVar5 + 0x1b) - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        dVar29 = dVar28;
        if (0.0 < fVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xc0;
          lVar23 = uVar12 - 0xb0;
          lVar25 = 2;
          fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
          fVar1 = fVar24 * fVar24;
          *(float *)((int)puVar5 + 0x10c) = fVar24;
          *(float *)((int)puVar5 + 0x104) = fVar24;
          *(float *)(puVar5 + 0x21) = fVar24;
          *(float *)(puVar5 + 0x20) = fVar24;
          fVar24 = fVar1 * fVar1;
          *(float *)((int)puVar5 + 0x104) = *(float *)((int)puVar5 + 0x104) * fVar1;
          *(float *)(puVar5 + 0x21) = *(float *)(puVar5 + 0x21) * fVar24;
          *(float *)((int)puVar5 + 0x10c) = *(float *)((int)puVar5 + 0x10c) * fVar24 * fVar1;
          do {
            *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar24 * fVar24;
            iVar15 = (int)lVar19;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0xc0;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar23;
          do {
            fVar24 = *pfVar20;
            fVar1 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar24;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar1;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar17 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x100)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar16);
        }
        OrganicDeltAngSpeed
                  (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar20,
                   &kv[2].field_0x58);
        dVar31 = (double)(float)((double)g_heroPosition.y - (double)(float)kv[2].flag);
        dVar30 = (double)(float)((double)g_heroPosition.x - (double)(float)kv[2].radius);
        dVar27 = (double)SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
        dVar29 = dVar28;
        if (dVar27 - 2.0 < 0.0) {
          dVar29 = 1.0;
        }
        kv[2].xyBounceDamp = (float)dVar29;
        dVar29 = dVar30;
        dVar26 = dVar31;
        if (((double)(g_FrameTime * 3.0) < dVar27) &&
           (dVar29 = dVar28, dVar26 = dVar28, dVar27 != dVar28)) {
          dVar27 = (double)(float)((double)(g_FrameTime * 3.0) / dVar27);
          dVar29 = (double)(float)(dVar27 * dVar30);
          dVar26 = (double)(float)(dVar27 * dVar31);
        }
        kv[2].radius = (int)(float)((double)(float)kv[2].radius + dVar29);
        kv[2].flag = (int)(float)((double)(float)kv[2].flag + dVar26);
        uVar21 = moby->animationId;
        if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\x05'))
        {
          if (uVar21 != '\x06') {
            MB_SetAnimation(moby,6,0,3);
          }
        }
        else {
          if (moby->updateId == uVar21) {
            dVar29 = (double)BlendAnimFrame(moby);
            uVar21 = moby->animationId;
            if ((dVar29 == 40.0) && (uVar21 == '\x06')) {
              *(undefined4 *)(puVar5 + 0x14) = 0;
              *(undefined4 *)((int)puVar5 + 0xa4) = 0;
              *(undefined4 *)(puVar5 + 0x15) = 0;
              *(undefined4 *)((int)puVar5 + 0xac) = 0x3f800000;
              GetBonePosition(moby,1,uVar12 - 0x130);
              *(float *)(puVar5 + 0x13) = *(float *)(puVar5 + 0x13) + 0.2;
              iVar17 = FUN_00299400(dVar28,uVar12 - 0x120,uVar12 - 0x130);
              iVar15 = *(int *)(iVar17 + 0x78);
              *(float *)(iVar15 + 0x20) = (float)kv[2].radius - *(float *)(puVar5 + 0x12);
              *(float *)(iVar15 + 0x24) = (float)kv[2].flag - *(float *)((int)puVar5 + 0x94);
              *(float *)(iVar15 + 0x28) = kv[2].zOfs - *(float *)(puVar5 + 0x13);
              *(undefined4 *)(iVar15 + 0x2c) = *(undefined4 *)&kv[2].timeout;
              *(float *)(*(int *)(iVar17 + 0x78) + 0x28) =
                   *(float *)(*(int *)(iVar17 + 0x78) + 0x28) + 0.5;
              iVar15 = *(int *)(iVar17 + 0x78);
              fVar24 = *(float *)(iVar15 + 0x24);
              fVar16 = *(float *)(iVar15 + 0x20);
              fVar2 = *(float *)(iVar15 + 0x28);
              dVar29 = (double)SQRT(fVar2 * fVar2 + fVar16 * fVar16 + fVar24 * fVar24);
              if (dVar29 == dVar28) {
                uVar3 = *(undefined4 *)(iVar15 + 0x2c);
                dVar29 = dVar28;
                dVar30 = dVar28;
              }
              else {
                fVar1 = (float)((double)(g_FrameTime * 7.0) / dVar29);
                uVar3 = *(undefined4 *)(iVar15 + 0x2c);
                dVar29 = (double)(fVar16 * fVar1);
                dVar28 = (double)(fVar24 * fVar1);
                dVar30 = (double)(fVar2 * fVar1);
              }
              *(float *)(iVar15 + 0x20) = (float)dVar29;
              *(float *)(iVar15 + 0x24) = (float)dVar28;
              *(float *)(iVar15 + 0x28) = (float)dVar30;
              *(undefined4 *)(iVar15 + 0x2c) = uVar3;
              *(undefined1 *)(iVar17 + 0x20) = 1;
              goto LAB_00314324;
            }
          }
          if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\a'))
          {
            moby->state = '\x02';
            if (uVar21 != '\0') {
              MB_SetAnimation(moby,0,0,3);
            }
          }
          else if (((uVar21 == '\x06') && ((moby->field43_0x70 & 2U) != 0)) &&
                  (kv[2].xyBounceDamp == 0.0)) {
            MB_SetAnimation(moby,7,0,3);
          }
        }
      }
      else if (uVar21 == '\x02') {
        fVar24 = (float)kv[2].radius - (moby->pos).x;
        fVar16 = (float)kv[2].flag - (moby->pos).y;
        pfVar20 = (float *)&g_atanQuadrantTable;
        fVar1 = ABS(fVar24);
        fVar2 = ABS(fVar16);
        *(float *)((int)puVar5 + 0xdc) = fVar24;
        *(float *)(puVar5 + 0x1c) = fVar16;
        *(float *)((int)puVar5 + 0xe4) = fVar1 - fVar2;
        dVar28 = 0.0;
        uVar22 = (ulonglong)(*(uint *)((int)puVar5 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1c) >> 0x1d) & 4;
        fVar24 = ABS(*(float *)((int)puVar5 + 0xdc));
        if (*(float *)((int)puVar5 + 0xe4) - 0.0 < 0.0) {
          fVar24 = fVar2;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar16 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar5 + 0x1c));
        if (*(float *)((int)puVar5 + 0xe4) - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        dVar29 = dVar28;
        if (0.0 < fVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar23 = uVar12 - 0x90;
          lVar19 = uVar12 - 0xa0;
          lVar25 = 2;
          fVar24 = (fVar6 - fVar24) / (fVar6 + fVar24);
          fVar1 = fVar24 * fVar24;
          *(float *)((int)puVar5 + 300) = fVar24;
          *(float *)((int)puVar5 + 0x124) = fVar24;
          *(float *)(puVar5 + 0x25) = fVar24;
          *(float *)(puVar5 + 0x24) = fVar24;
          fVar24 = fVar1 * fVar1;
          *(float *)((int)puVar5 + 0x124) = *(float *)((int)puVar5 + 0x124) * fVar1;
          *(float *)(puVar5 + 0x25) = *(float *)(puVar5 + 0x25) * fVar24;
          *(float *)((int)puVar5 + 300) = *(float *)((int)puVar5 + 300) * fVar24 * fVar1;
          do {
            *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar24 * fVar24;
            iVar15 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar24 * fVar24;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0xa0;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar23;
          do {
            fVar24 = *pfVar20;
            fVar1 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar24;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar1;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar17 = (int)lVar23;
            lVar14 = lVar14 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x120)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar16);
        }
        OrganicDeltAngSpeed
                  (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar20,
                   &kv[2].field_0x58);
        fVar24 = (moby->pos).y - g_heroPosition.y;
        fVar16 = (moby->pos).x - g_heroPosition.x;
        fVar24 = SQRT(fVar16 * fVar16 + fVar24 * fVar24);
        if (fVar24 <= 17.0) {
          if (8.0 <= fVar24) {
            dVar30 = (double)(g_heroPosition.y - (float)kv[2].flag);
            dVar31 = (double)(g_heroPosition.x - (float)kv[2].radius);
            dVar29 = (double)SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar30 * dVar30)));
            if (dVar29 < 2.0) {
              kv[2].xyBounceDamp = 1.0;
              moby->state = '\x03';
              if (moby->animationId != '\x05') {
                MB_SetAnimation(moby,5,0,3);
              }
            }
            dVar27 = dVar30;
            dVar26 = dVar31;
            if (((double)(g_FrameTime * 3.0) < dVar29) &&
               (dVar27 = dVar28, dVar26 = dVar28, dVar29 != dVar28)) {
              dVar28 = (double)(float)((double)(g_FrameTime * 3.0) / dVar29);
              dVar27 = (double)(float)(dVar28 * dVar30);
              dVar26 = (double)(float)(dVar28 * dVar31);
            }
            kv[2].radius = (int)(float)((double)(float)kv[2].radius + dVar26);
            kv[2].flag = (int)(float)((double)(float)kv[2].flag + dVar27);
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\x02') {
              MB_SetAnimation(moby,2,0,3);
            }
          }
        }
        else {
          moby->state = '\x01';
        }
      }
      else if (uVar21 == '\x01') {
        piVar4 = (int *)kv[2].kickVel[0];
        iVar15 = *piVar4;
        iVar17 = (int)kv[1].peakFrame + iVar15 + (int)(char)kv[1].field_0x54;
        fVar24 = (float)(iVar17 - (iVar17 / iVar15) * iVar15);
        *(int *)(puVar5 + 0xe) = piVar4[(int)fVar24 * 4 + 4];
        *(int *)((int)puVar5 + 0x74) = piVar4[(int)fVar24 * 4 + 5];
        *(int *)(puVar5 + 0xf) = piVar4[(int)fVar24 * 4 + 6];
        *(int *)((int)puVar5 + 0x7c) = piVar4[(int)fVar24 * 4 + 7];
        iVar15 = MB_UpdateNavMoveTurning(moby,kv + 1,uVar12 - 0x150,uVar12 - 0x140);
        if (iVar15 != 0) {
          kv[1].peakFrame = fVar24;
        }
        fVar24 = (moby->pos).y;
        fVar16 = (moby->pos).x;
        if (SQRT((fVar16 - g_heroPosition.x) * (fVar16 - g_heroPosition.x) +
                 (fVar24 - g_heroPosition.y) * (fVar24 - g_heroPosition.y)) < 15.0) {
          moby->state = '\x02';
        }
        if (kv[2].xyBounceDamp != 0.0) {
          kv[2].xyBounceDamp = 0.0;
          fVar16 = (moby->pos).x;
          fVar24 = (moby->pos).y;
        }
        fVar2 = (moby->rotation).z;
        fVar1 = fVar2 + 1.5707963;
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        fVar8 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar8 = fVar1;
        }
        fVar7 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar7 = fVar6;
        }
        fVar2 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
          fVar2 = fVar8;
        }
        fVar1 = fVar7 * fVar7;
        fVar6 = fVar2 * fVar2;
        fVar10 = fVar1 * fVar1 * fVar7;
        fVar8 = fVar6 * fVar6 * fVar2;
        fVar11 = fVar1 * fVar10;
        fVar9 = fVar6 * fVar8;
        fVar1 = ((fVar1 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) * 6.0 + fVar24) -
                (float)kv[2].flag;
        fVar16 = ((fVar6 * fVar9 * 2.601887e-06 +
                  fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2
                  ) * 6.0 + fVar16) - (float)kv[2].radius;
        fVar6 = SQRT(fVar16 * fVar16 + fVar1 * fVar1);
        fVar24 = fVar16;
        fVar2 = fVar1;
        if ((g_FrameTime * 3.0 < fVar6) && (fVar24 = 0.0, fVar2 = 0.0, fVar6 != 0.0)) {
          fVar6 = (g_FrameTime * 3.0) / fVar6;
          fVar24 = fVar6 * fVar16;
          fVar2 = fVar6 * fVar1;
        }
        kv[2].radius = (int)((float)kv[2].radius + fVar24);
        kv[2].flag = (int)((float)kv[2].flag + fVar2);
      }
      else if (uVar21 == '\0') {
        InitFollower((PathFollower *)&kv[1].peakFrame);
        MB_InitDefaultParams(kv[1].kickVel);
        kv[1].kickVel[3] = 2.0;
        kv[1].faceSpeed = 0.2;
        kv[1].kickActive = '=';
        kv[1].type = 'L';
        kv[1].stage = -0x3333;
        kv[1].faceAng = 0.3;
        fVar24 = g_FrameTime * 2.0;
        kv[2].zBounceDamp = 0.0;
        kv[1].kickVel[0] = 1.27378e-42;
        kv[1].flag = (int)fVar24;
        kv[2].radius = (int)(moby->pos).x;
        kv[2].flag = (int)(moby->pos).y;
        fVar24 = (moby->pos).z;
        kv[2].zOfs = fVar24;
        *(f32 *)&kv[2].timeout = (moby->pos).w;
        kv[2].zOfs = fVar24 + 0.125;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          MB_SetAnimation(moby,0,0,3);
        }
      }
      goto LAB_00314324;
    }
    uVar21 = moby->animationId;
    if ((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) {
      if (uVar21 == '\x02') {
        if (uVar21 != '\x03') {
          MB_SetAnimation(moby,3,0,3);
        }
      }
      else {
        if (uVar21 != '\x03') goto LAB_003141ec;
        if (uVar21 != '\x04') {
          MB_SetAnimation(moby,4,0,3);
        }
      }
    }
    else {
LAB_003141ec:
      if (((moby->updateId == uVar21) && ((moby->field43_0x70 & 2U) != 0)) && (uVar21 == '\x04')) {
        MB_SetAnimation(moby,0,0,3);
        moby->state = '\x02';
      }
    }
    if (((moby->updateId == moby->animationId) &&
        (dVar28 = (double)BlendAnimFrame(moby), dVar28 == 24.0)) &&
       (moby->animationId == '\x04')) {
      kv[2].zBounceDamp = 2.0;
      kv[2].faceAng = (moby->pos).x;
      kv[2].faceSpeed = (moby->pos).y;
      fVar24 = (moby->pos).z;
      kv[2].faceLimit = fVar24;
      kv[2].minXySpeed = (moby->pos).w;
      kv[2].faceLimit = fVar24 + 0.125;
    }
  }
  uVar18 = MB_UpdateKick(moby,kv);
  if ((uVar18 & 0x40) != 0) {
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,3);
    }
    moby->state = '\x01';
  }
LAB_00314324:
  victim = g_heroMobyPtr;
  fVar24 = kv[2].zBounceDamp;
  if (kv[2].zBounceDamp != 0.0) {
    fVar16 = kv[2].faceSpeed - g_heroPosition.y;
    fVar2 = kv[2].faceAng - g_heroPosition.x;
    if (((ABS((moby->pos).z - g_heroPosition.z) < 0.2) &&
        (ABS(SQRT(fVar2 * fVar2 + fVar16 * fVar16) - fVar24) < 0.2)) &&
       (g_heroState != TAKING_DAMAGE)) {
      fVar24 = (moby->rotation).z;
      fVar16 = fVar24 + 1.5707963;
      fVar2 = 3.1415925 - fVar24;
      if (fVar24 - (3.1415925 - fVar24) < 0.0) {
        fVar2 = fVar24;
      }
      fVar1 = 3.1415925 - fVar16;
      if (fVar16 - (3.1415925 - fVar16) < 0.0) {
        fVar1 = fVar16;
      }
      fVar6 = -3.1415925 - fVar24;
      if ((-3.1415925 - fVar24) - fVar2 < 0.0) {
        fVar6 = fVar2;
      }
      *(undefined4 *)(puVar5 + 0x17) = 0;
      fVar24 = -3.1415925 - fVar16;
      if ((-3.1415925 - fVar16) - fVar1 < 0.0) {
        fVar24 = fVar1;
      }
      fVar16 = fVar6 * fVar6;
      fVar2 = fVar24 * fVar24;
      fVar7 = fVar16 * fVar16 * fVar6;
      fVar1 = fVar2 * fVar2 * fVar24;
      fVar9 = fVar16 * fVar7;
      fVar8 = fVar2 * fVar1;
      *(float *)((int)puVar5 + 0xb4) =
           fVar16 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar16 * fVar6 * -0.16666657 + fVar6;
      *(float *)(puVar5 + 0x16) =
           fVar2 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar1 * 0.0083330255 + fVar2 * fVar24 * -0.16666657 + fVar24;
      *(f32 *)(puVar5 + 0x18) = (victim->pos).x;
      *(f32 *)((int)puVar5 + 0xc4) = (victim->pos).y;
      fVar24 = (victim->pos).z;
      *(float *)(puVar5 + 0x19) = fVar24;
      *(f32 *)((int)puVar5 + 0xcc) = (victim->pos).w;
      *(float *)(puVar5 + 0x19) = fVar24 + 0.75;
      CollDamageMobyDirect
                (1.0,victim,moby,1,0x313114,(float *)(puVar5 + 0x18),(float *)(puVar5 + 0x16));
      fVar24 = kv[2].zBounceDamp;
    }
    fVar24 = g_FrameTime * 12.0 + fVar24;
    if (10.0 < fVar24) {
      kv[2].zBounceDamp = 0.0;
      return;
    }
    kv[2].zBounceDamp = fVar24;
    RegisterFuncForMoby(&PTR_M246_00312d38_0070bc18,moby);
  }
  RegisterFuncForMoby(&PTR_M246_00312b68_0070bc10,moby);
  return;
}



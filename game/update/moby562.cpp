// game/update/moby562.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3b66b4-0x3b81e4
#include "game/update/moby562.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby203.h"
#include "idol/fastfunc.h"

// 0x03b66b4 (0x14 bytes)
void M562_003b66b4(void)

{
  DAT_00845acc = 0x10000;
  return;
}


// 0x03b6708 (0x548 bytes)
// inlined: FastAtan2 @0x3b68c4
void M562_003b6708
               (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xe0;
  puVar8 = (ulonglong *)lVar19;
  *puVar8 = uVar16;
  puVar8[0x1e] = in_LR;
  puVar8[0x19] = in_f29;
  puVar8[0x1a] = in_f30;
  puVar8[0x1b] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  if ((double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= param_3
     ) {
    fVar7 = param_5[3];
  }
  else {
    fVar2 = fVar2 - fVar1;
    fVar10 = fVar4 - fVar3;
    fVar11 = fVar6 - fVar5;
    fVar4 = 0.0;
    fVar7 = param_5[3];
    fVar13 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
    fVar12 = (float)(param_3 - 0.009999999776482582) / fVar13;
    fVar6 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    fVar9 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar9 + fVar1;
    fVar4 = fVar4 + fVar3;
  }
  *(float *)((int)puVar8 + 0x7c) = fVar7;
  fVar7 = ABS(fVar4 - fVar3);
  fVar5 = ABS(fVar2 - fVar1);
  *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
  *(float *)(puVar8 + 0xe) = fVar4;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(float *)((int)puVar8 + 0x84) = fVar2 - fVar1;
  *(float *)(puVar8 + 0x11) = fVar7 - fVar5;
  dVar29 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  dVar24 = dVar29;
  if (0.0 < fVar1) {
    lVar18 = uVar16 - 0xd0;
    lVar20 = uVar16 - 0x54;
    lVar22 = uVar16 - 0x44;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x13) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar1 * fVar1;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x54;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar19;
      iVar15 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar25 = (double)FastSubRots(g_heroRotation.z,(float)dVar24);
  dVar26 = (double)g_heroRotation.z;
  fVar1 = *param_4;
  if ((0.8726646304130554 < dVar25) ||
     (fVar3 = param_4[1] - *(float *)((int)puVar8 + 0x74), fVar2 = fVar1 - *(float *)(puVar8 + 0xe),
     SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.5)) {
    fVar2 = (float)(dVar26 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar24 = dVar26;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar24 < 0.0) {
      dVar25 = dVar24;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = (double)(float)(dVar25 * dVar25);
    fVar5 = fVar4 * fVar4;
    dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
    fVar2 = fVar5 * fVar5 * fVar4;
    dVar27 = (double)(float)(dVar28 * dVar24);
    fVar3 = fVar5 * fVar2;
    *(float *)((int)puVar8 + 0x74) =
         ((float)(dVar28 * dVar27) * 2.601887e-06 +
         (float)(dVar27 * -0.0001980741071747616 +
                (double)(float)(dVar24 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar28 * dVar25) *
                                               -0.16666656732559204 + dVar25)))) * 1.5 + param_4[1];
    *(float *)(puVar8 + 0xe) =
         (fVar5 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 1.5 +
         fVar1;
    dVar24 = dVar26;
  }
  fVar1 = (float)(dVar24 + 1.570796251296997);
  dVar25 = (double)(float)(3.141592502593994 - dVar24);
  if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
    dVar25 = dVar24;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar24);
  if ((double)(float)(-3.141592502593994 - dVar24) - dVar25 < 0.0) {
    dVar26 = dVar25;
  }
  dVar24 = (double)(g_FrameTime * 8.5);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar25 = (double)(float)(dVar26 * dVar26);
  fVar4 = fVar3 * fVar3;
  dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
  param_6[2] = 0.0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar27 = (double)(float)(dVar25 * dVar28);
  fVar2 = fVar4 * fVar1;
  param_6[1] = (float)((double)((float)(dVar25 * dVar27) * 2.601887e-06 +
                               (float)(dVar27 * -0.0001980741071747616 +
                                      (double)(float)(dVar28 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar25 * dVar26
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar26))
                                      )) * dVar24);
  *param_6 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                             fVar2 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar24);
  dVar25 = (double)MB_computeLobVelocity(dVar24,-param_1,param_4,uVar16 - 0x70);
  param_6[2] = (float)dVar25;
  if ((g_Pad.downButtons & (L1|L2)) != 0) {
    dVar29 = 1.0;
  }
  fVar1 = (float)(param_1 * (double)(float)((double)(float)(dVar29 + 2.5) / dVar24)) * 0.5;
  if ((double)fVar1 < dVar25) {
    param_6[2] = fVar1;
  }
  return;
}


// 0x03b6ca8 (0xf88 bytes)
// inlined: FastAtan2 @0x3b6e30, FastAtan2 @0x3b7034, FastAtan2 @0x3b721c, FastAtan2 @0x3b73c8, FastAtan2 @0x3b7568, FastAtan2 @0x3b76f8, FastAtan2 @0x3b7a58
void M562_003b6ca8
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  char acVar17 [4];
  CONTROLLER_INPUT CVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  int iVar22;
  longlong lVar21;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f16;
  double dVar34;
  ulonglong in_f17;
  double dVar35;
  ulonglong in_f18;
  double dVar36;
  ulonglong in_f19;
  double dVar37;
  ulonglong in_f20;
  double dVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  double dVar43;
  ulonglong in_f26;
  double dVar44;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  float fStack00000040;
  float fStack00000044;
  undefined8 uStack00000048;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x2d0;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar20;
  puVar15[0x5c] = in_LR;
  puVar15[0x4a] = in_f16;
  puVar15[0x4b] = in_f17;
  puVar15[0x4c] = in_f18;
  puVar15[0x4d] = in_f19;
  puVar15[0x4e] = in_f20;
  puVar15[0x4f] = in_f21;
  puVar15[0x50] = in_f22;
  puVar15[0x51] = in_f23;
  puVar15[0x52] = in_f24;
  puVar15[0x53] = in_f25;
  puVar15[0x54] = in_f26;
  puVar15[0x55] = in_f27;
  puVar15[0x56] = in_f28;
  puVar15[0x57] = in_f29;
  puVar15[0x58] = in_f30;
  puVar15[0x59] = in_f31;
  puVar15[0x47] = unaff_r29;
  puVar15[0x46] = unaff_r28;
  puVar15[0x48] = unaff_r30;
  puVar15[0x42] = unaff_r24;
  puVar15[0x45] = unaff_r27;
  puVar15[0x49] = unaff_r31;
  puVar15[0x44] = unaff_r26;
  puVar15[0x43] = unaff_r25;
  _fStack00000040 = param_3;
  uStack00000048 = param_4;
  FastApplyTransform((Vec4 *)(uVar20 - 0x230),(Vec4 *)&GameCamera);
  FastNormalizeRMtx4(uVar20 - 0x200,uVar20 - 0x230);
  fVar10 = DAT_0096a350;
  if (*(int *)(param_2 + 0x50) != 0) {
    fVar9 = ABS(DAT_0096a350);
    dVar45 = 1.0;
    fVar3 = ABS(DAT_0096a354);
    uVar12 = *(uint *)(*(int *)(param_2 + 0x50) + 0x78);
    dVar44 = 0.0;
    dVar43 = -0.3619680106639862;
    dVar49 = (double)DAT_0096a320;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)((int)puVar15 + 0x124) = fVar9 - fVar3;
    dVar48 = (double)DAT_0096a324;
    dVar47 = (double)DAT_0096a328;
    dVar46 = (double)DAT_0096a32c;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x124) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar6 = fVar9;
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    dVar29 = dVar44;
    if (0.0 < fVar6) {
      lVar25 = uVar20 - 0x2c0;
      lVar27 = uVar20 - 0xd8;
      lVar26 = uVar20 - 0xe8;
      lVar28 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 500) = fVar6;
      *(float *)((int)puVar15 + 0x1ec) = fVar6;
      *(float *)(puVar15 + 0x3e) = fVar6;
      *(float *)(puVar15 + 0x3d) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar15 + 0x1ec) = *(float *)((int)puVar15 + 0x1ec) * fVar3;
      *(float *)(puVar15 + 0x3e) = *(float *)(puVar15 + 0x3e) * fVar6;
      *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1d8) * fVar6 * fVar6;
        iVar22 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe8;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar6 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1e8) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar3;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      do {
        iVar22 = (int)lVar25;
        iVar16 = (int)lVar27;
        lVar25 = lVar25 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1e8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar10 + fVar2);
    }
    dVar29 = (double)FastWrapRot(-0.361968,(float)dVar29);
    fVar3 = DAT_0096a350;
    dVar42 = 1.570796251296997;
    dVar41 = 3.141592502593994;
    fVar10 = (float)(dVar29 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar31 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar29 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    fVar6 = 3.1415925 - fVar10;
    if (fVar10 - (3.1415925 - fVar10) < 0.0) {
      fVar6 = fVar10;
    }
    *(float *)(puVar15 + 0x24) = (float)(dVar31 - dVar29);
    fVar9 = -3.1415925 - fVar10;
    if ((-3.1415925 - fVar10) - fVar6 < 0.0) {
      fVar9 = fVar6;
    }
    fVar2 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x24) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = fVar2 * fVar2 * fVar9;
    fVar6 = fVar2 * fVar10;
    dVar32 = dVar31;
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar32 = dVar29;
    }
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar29 = dVar31;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar31 = dVar44;
    if (dVar44 < dVar32) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x108;
      lVar27 = uVar20 - 0xf8;
      lVar28 = 2;
      fVar4 = (float)(dVar29 - dVar32) / (float)(dVar29 + dVar32);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = fVar4;
      *(float *)((int)puVar15 + 0x1cc) = fVar4;
      *(float *)(puVar15 + 0x3a) = fVar4;
      *(float *)(puVar15 + 0x39) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar15 + 0x1cc) = *(float *)((int)puVar15 + 0x1cc) * fVar5;
      *(float *)(puVar15 + 0x3a) = *(float *)(puVar15 + 0x3a) * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = *(float *)((int)puVar15 + 0x1d4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1b8) * fVar4 * fVar4;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0x108;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar4 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1c8) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      dVar29 = dVar44;
      do {
        iVar22 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar16 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1c8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar31 = (double)((float)(dVar29 + dVar34) * fVar11 + fVar3);
    }
    fStack00000040 =
         (fVar2 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    dVar31 = (double)FastWrapRot((float)dVar43,(float)dVar31);
    dVar32 = ABS(dVar49);
    dVar29 = ABS(dVar48);
    dVar43 = (double)(float)(dVar41 - dVar31);
    if (dVar31 - (double)(float)(dVar41 - dVar31) < 0.0) {
      dVar43 = dVar31;
    }
    fStack00000040 = fStack00000040 + g_heroPosition.x;
    dVar33 = dVar32;
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar33 = dVar29;
    }
    uVar13 = *(uint *)(puVar15 + 0x1e);
    dVar30 = (double)(float)(dVar40 - dVar31);
    if ((double)(float)(dVar40 - dVar31) - dVar43 < 0.0) {
      dVar30 = dVar43;
    }
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar29 = dVar32;
    }
    dVar43 = (double)(float)(dVar30 * dVar30);
    dVar32 = (double)(float)(dVar43 * (double)(float)(dVar43 * dVar30));
    dVar31 = (double)(float)(dVar43 * dVar32);
    fVar10 = *(float *)(puVar15 + 0x1e);
    uVar14 = *(uint *)((int)puVar15 + 0xf4);
    fVar6 = *(float *)((int)puVar15 + 0xf4);
    uVar7 = *(undefined4 *)(puVar15 + 0x1f);
    uVar8 = *(undefined4 *)((int)puVar15 + 0xfc);
    fStack00000044 =
         (float)((double)(float)((double)(float)(dVar43 * dVar31) * dVar36 +
                                (double)(float)(dVar31 * dVar37 +
                                               (double)(float)(dVar32 * dVar38 +
                                                              (double)(float)((double)(float)(dVar43
                                                                                             * 
                                                  dVar30) * dVar39 + dVar30)))) * dVar35) +
         g_heroPosition.y;
    fVar3 = g_heroPosition.z + 0.39082;
    uStack00000048 = CONCAT44(fVar3,(int)uStack00000048);
    if (dVar44 < dVar33) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x128;
      lVar27 = uVar20 - 0x118;
      lVar28 = 2;
      fVar9 = (float)(dVar29 - dVar33) / (float)(dVar29 + dVar33);
      fVar2 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = fVar9;
      *(float *)((int)puVar15 + 0x1ac) = fVar9;
      *(float *)(puVar15 + 0x36) = fVar9;
      *(float *)(puVar15 + 0x35) = fVar9;
      fVar9 = fVar2 * fVar2;
      *(float *)((int)puVar15 + 0x1ac) = *(float *)((int)puVar15 + 0x1ac) * fVar2;
      *(float *)(puVar15 + 0x36) = *(float *)(puVar15 + 0x36) * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = *(float *)((int)puVar15 + 0x1b4) * fVar9 * fVar2;
      do {
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x198) * fVar9 * fVar9;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      pfVar23 = (float *)&DAT_007358e0;
      lVar26 = uVar20 - 0x128;
      lVar27 = 4;
      lVar25 = lVar21;
      do {
        fVar9 = *pfVar23;
        fVar2 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x1a8) * fVar9;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    bVar1 = (g_Pad.downButtons & (L1|L2)) == 0;
    dVar43 = dVar44;
    if (!bVar1) {
      dVar43 = dVar45;
    }
    dVar29 = 2.5;
    *(float *)((int)puVar15 + 0x7c) = (float)dVar46;
    dVar43 = (double)(float)(dVar43 + 2.5);
    *(float *)(puVar15 + 0xe) = (float)(dVar49 * dVar43 + (double)fStack00000040);
    *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * dVar43 + (double)fStack00000044);
    *(float *)(puVar15 + 0xf) = (float)(dVar47 * dVar43 + (double)fVar3);
    pMVar19 = g_heroMobyPtr;
    if ((bVar1) || (DAT_0096bd8c != '\0')) {
      DAT_0096a730 = 0;
    }
    else {
      dVar47 = ABS((double)fVar10);
      dVar43 = ABS((double)fVar6);
      *(float *)(puVar15 + 0x10) = fVar10;
      *(float *)((int)puVar15 + 0x84) = fVar6;
      *(undefined4 *)(puVar15 + 0x11) = uVar7;
      *(undefined4 *)((int)puVar15 + 0x8c) = uVar8;
      fVar10 = (pMVar19->rotation).z;
      *(float *)((int)puVar15 + 0x11c) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(uVar13 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x11c) >> 0x1e) & 2 |
               (ulonglong)(uVar14 >> 0x1d) & 4;
      dVar46 = dVar47;
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x138;
        lVar26 = uVar20 - 0x148;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x194) = fVar9;
        *(float *)((int)puVar15 + 0x18c) = fVar9;
        *(float *)(puVar15 + 0x32) = fVar9;
        *(float *)(puVar15 + 0x31) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x18c) = *(float *)((int)puVar15 + 0x18c) * fVar2;
        *(float *)(puVar15 + 0x32) = *(float *)(puVar15 + 0x32) * fVar9;
        *(float *)((int)puVar15 + 0x194) = *(float *)((int)puVar15 + 0x194) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x148;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x188)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      FastDiffRots((double)fVar10,dVar47);
      dVar47 = (double)*(float *)(puVar15 + 0x10);
      dVar48 = (double)*(float *)((int)puVar15 + 0x84);
      dVar49 = ABS(dVar47);
      dVar43 = ABS(dVar48);
      uVar13 = *(uint *)(puVar15 + 0x11);
      *(float *)(puVar15 + 0x23) = (float)(dVar49 - dVar43);
      CVar18 = g_Pad.downButtons;
      fVar10 = *(float *)(puVar15 + 0x11);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x23) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x84) >> 0x1d) & 4;
      dVar46 = dVar49;
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar43 = dVar49;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar49 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x158;
        lVar26 = uVar20 - 0x168;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x174) = fVar9;
        *(float *)((int)puVar15 + 0x16c) = fVar9;
        *(float *)(puVar15 + 0x2e) = fVar9;
        *(float *)(puVar15 + 0x2d) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x16c) = *(float *)((int)puVar15 + 0x16c) * fVar2;
        *(float *)(puVar15 + 0x2e) = *(float *)(puVar15 + 0x2e) * fVar9;
        *(float *)((int)puVar15 + 0x174) = *(float *)((int)puVar15 + 0x174) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x158) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x168;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x168) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x168)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar49 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      dVar43 = ABS((double)fVar10);
      fVar10 = SQRT((float)(dVar47 * dVar47 + (double)(float)(dVar48 * dVar48)));
      dVar47 = ABS((double)fVar10);
      *(float *)(puVar15 + 0x22) = fVar10;
      *(float *)((int)puVar15 + 0x114) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x22) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x114) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      dVar46 = ABS((double)*(float *)(puVar15 + 0x22));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x178;
        lVar26 = uVar20 - 0x188;
        lVar28 = 2;
        fVar3 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar9 = fVar3 * fVar3;
        *(float *)((int)puVar15 + 0x154) = fVar3;
        *(float *)((int)puVar15 + 0x14c) = fVar3;
        *(float *)(puVar15 + 0x2a) = fVar3;
        *(float *)(puVar15 + 0x29) = fVar3;
        fVar3 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar9;
        *(float *)(puVar15 + 0x2a) = *(float *)(puVar15 + 0x2a) * fVar3;
        *(float *)((int)puVar15 + 0x154) = *(float *)((int)puVar15 + 0x154) * fVar3 * fVar9;
        do {
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x138) * fVar3 * fVar3;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x188;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar3 = *pfVar23;
          fVar9 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x148) * fVar3;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x148)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar10 + fVar6);
      }
      if (0.593411922454834 - dVar47 < 0.0) {
        dVar47 = 0.593411922454834;
      }
      if (dVar47 - -1.3962633609771729 < 0.0) {
        dVar47 = -1.3962633609771729;
      }
      dVar34 = dVar44;
      if ((CVar18 & (L1|L2)) != 0) {
        dVar34 = dVar45;
      }
      MB_SphericalToVector
                ((float)(dVar34 + dVar29),(float)dVar49,(float)dVar47,(float *)(puVar15 + 0x10));
      dVar43 = (double)SQRT(*(float *)(puVar15 + 0x10) * *(float *)(puVar15 + 0x10) +
                            *(float *)((int)puVar15 + 0x84) * *(float *)((int)puVar15 + 0x84));
      dVar34 = 0.009999999776482582;
      if (dVar44 - dVar43 < 0.0) {
        dVar34 = dVar43;
      }
      if (dVar43 - dVar44 < 0.0) {
        dVar34 = dVar43;
      }
      dVar43 = dVar44;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        dVar43 = dVar45;
      }
      fVar10 = SQRT(g_FrameTimeSq * 9.0 * (float)(dVar43 + dVar29) * 0.5);
      dVar43 = (double)((fVar10 * 2.0 * fVar10 *
                        (float)(dVar45 - (double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34
                                                        ))) / (g_FrameTimeSq * 9.0));
      fVar10 = (float)((double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34) * dVar43);
      dVar34 = (double)fVar10;
      if (dVar44 < dVar43) {
        dVar47 = (double)(float)(dVar49 + dVar42);
        dVar46 = (double)(float)(dVar41 - dVar49);
        if (dVar49 - (double)(float)(dVar41 - dVar49) < 0.0) {
          dVar46 = dVar49;
        }
        dVar48 = (double)(float)(dVar41 - dVar47);
        if (dVar47 - (double)(float)(dVar41 - dVar47) < 0.0) {
          dVar48 = dVar47;
        }
        dVar31 = (double)(float)(dVar40 - dVar49);
        if ((double)(float)(dVar40 - dVar49) - dVar46 < 0.0) {
          dVar31 = dVar46;
        }
        dVar46 = (double)(float)(dVar40 - dVar47);
        if ((double)(float)(dVar40 - dVar47) - dVar48 < 0.0) {
          dVar46 = dVar48;
        }
        dVar48 = (double)(float)(dVar31 * dVar31);
        dVar35 = (double)(float)(dVar46 * dVar46);
        dVar32 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar31));
        dVar40 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar46));
        dVar42 = (double)(float)(dVar48 * dVar32);
        dVar33 = (double)(float)(dVar35 * dVar40);
        dVar47 = (double)GameCamera.posX;
        dVar49 = (double)GameCamera.posY;
        dVar41 = (double)GameCamera.posZ;
        *(float *)(puVar15 + 0x11) = fVar10;
        acVar17 = GameCamera.field8_0x14c;
        fVar10 = (float)((double)(float)((double)(float)(dVar48 * dVar42) * dVar36 +
                                        (double)(float)(dVar42 * dVar37 +
                                                       (double)(float)(dVar32 * dVar38 +
                                                                      (double)(float)((double)(float
                                                  )(dVar48 * dVar31) * dVar39 + dVar31)))) * dVar43)
        ;
        dVar48 = (double)fVar10;
        fVar6 = (float)((double)(float)((double)(float)(dVar35 * dVar33) * dVar36 +
                                       (double)(float)(dVar33 * dVar37 +
                                                      (double)(float)(dVar40 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar35 * dVar46) * dVar39 + dVar46)))) * dVar43);
        dVar43 = (double)fVar6;
        *(float *)((int)puVar15 + 0x84) = fVar10;
        *(float *)(puVar15 + 0x13) = (float)(dVar41 + dVar34);
        *(char (*) [4])((int)puVar15 + 0x9c) = acVar17;
        *(float *)(puVar15 + 0x10) = fVar6;
        *(float *)((int)puVar15 + 0x94) = (float)(dVar49 + dVar48);
        *(float *)(puVar15 + 0x12) = (float)(dVar47 + dVar43);
        iVar22 = CollLine(0x951500,uVar20 - 0x240,2,param_1,0);
        fVar10 = g_CollOutput.ip.y;
        if ((iVar22 == 0) || (g_CollOutput.pMoby == g_heroMobyPtr)) {
          fVar10 = (float)(dVar43 * 5.0) + GameCamera.posX;
          fVar6 = (float)(dVar48 * 5.0) + GameCamera.posY;
          fVar3 = (float)(dVar34 * 5.0) + GameCamera.posZ;
          *(float *)(puVar15 + 0xe) = (float)(dVar43 * 5.0);
          *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * 5.0);
          *(float *)(puVar15 + 0xf) = (float)(dVar34 * 5.0);
          *(float *)(puVar15 + 0xe) = fVar10;
          *(float *)((int)puVar15 + 0x74) = fVar6;
          *(float *)(puVar15 + 0xf) = fVar3;
        }
        else {
          fVar6 = g_CollOutput.ip.x - fStack00000040;
          fVar3 = g_CollOutput.ip.y - fStack00000044;
          *(float *)(puVar15 + 0xe) = g_CollOutput.ip.x;
          fVar9 = g_CollOutput.ip.z;
          *(float *)((int)puVar15 + 0x74) = fVar10;
          fVar10 = g_CollOutput.ip.w;
          *(float *)(puVar15 + 0xf) = fVar9;
          *(float *)((int)puVar15 + 0x7c) = fVar10;
          dVar46 = ABS((double)fVar6);
          dVar34 = ABS((double)fVar3);
          dVar43 = dVar46;
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar43 = dVar34;
          }
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar34 = dVar46;
          }
          if (dVar44 < dVar43) {
            lVar25 = uVar20 - 0x2c0;
            lVar27 = uVar20 - 0x198;
            lVar26 = uVar20 - 0x1a8;
            lVar28 = 2;
            fVar10 = (float)(dVar34 - dVar43) / (float)(dVar34 + dVar43);
            fVar6 = fVar10 * fVar10;
            *(float *)((int)puVar15 + 0x134) = fVar10;
            *(float *)((int)puVar15 + 300) = fVar10;
            *(float *)(puVar15 + 0x26) = fVar10;
            *(float *)(puVar15 + 0x25) = fVar10;
            fVar10 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar6;
            *(float *)(puVar15 + 0x26) = *(float *)(puVar15 + 0x26) * fVar10;
            *(float *)((int)puVar15 + 0x134) = *(float *)((int)puVar15 + 0x134) * fVar10 * fVar6;
            do {
              *(float *)((int)lVar25 + 0x128) = *(float *)((int)lVar25 + 0x118) * fVar10 * fVar10;
              iVar22 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            pfVar23 = (float *)&DAT_007358e0;
            lVar25 = uVar20 - 0x1a8;
            lVar26 = 4;
            do {
              fVar10 = *pfVar23;
              fVar6 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x128) * fVar10;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
      }
    }
    if ((g_Pad.downButtons & (L1|L2)) != 0) {
      dVar44 = dVar45;
    }
    M562_003b6708((double)(g_FrameTimeSq * 9.0),0x3ee4f8b580000000,(double)(float)(dVar44 + dVar29),
                  uVar20 + 0x40 & 0xffffffff,uVar20 - 0x260,(ulonglong)uVar12 + 0x10);
  }
  return;
}


// 0x03b7c48 (0x59c bytes)
// strings: 00a0fdc4: 'None'

/* Moby 562 */

void UpdateMoby_562(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  void *pvVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  GPiece<16> auStack_a0;
  GPiece<16> auStack_90;
  GPiece<16> auStack_80;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  dVar8 = -0.1899999976158142;
  dVar9 = -0.10999999940395355;
  GetBonePosition(moby,0,&local_b0);
  GetBoneTransformations(moby,0,auStack_80);
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  *(float *)((int)pvVar3 + 0x40) =
       (float)((double)local_60 * dVar9 +
              (double)(float)((double)local_70 * dVar8 + (double)local_b0));
  *(float *)((int)pvVar3 + 0x44) =
       (float)((double)local_5c * dVar9 +
              (double)(float)((double)local_6c * dVar8 + (double)local_ac));
  *(float *)((int)pvVar3 + 0x48) =
       (float)((double)local_58 * dVar9 +
              (double)(float)((double)local_68 * dVar8 + (double)local_a8));
  *(undefined4 *)((int)pvVar3 + 0x4c) = local_a4;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x98) = 1;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    if ((g_goldWeaponsArray.decoyGlove != '\0') && (*(short *)(iVar5 + 0xa6) != 0x76c)) {
      MB_DeleteMobyFromDynamicGroup(*(MobyInstance **)((int)pvVar3 + 0x50),&DAT_00a51f68);
      DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x50));
      iVar5 = FUN_002e7140(moby,uVar7 + 0x40,auStack_a0);
      *(int *)((int)pvVar3 + 0x50) = iVar5;
    }
  }
  if (((iVar5 == 0) || (*(char *)(iVar5 + 0x20) == -2)) || (*(char *)(iVar5 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar3 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    TransitionMovement(0x1e,1);
  }
  iVar5 = FastDecTimerS32(uVar7 + 0x54);
  if (((iVar5 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' && (DAT_00969e9c == (int)(animationSpeed * 17.5))) ||
       ((g_heroState == WEAPON_FIRST_PERSON_VIEW && (g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0
        && (iVar5 = Hero_GetWeaponAmmo(-1), iVar5 != 0)))) ||
      ((g_heroState == THROWING_ITEM && (g_heroStateTimer == (int)(animationSpeed * 16.5))))))
     ) {
    Hero_PlaySound(0x1a,0);
    hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  M562_003b6ca8
            (moby,uVar7,*(undefined8 *)((int)pvVar3 + 0x40),*(undefined8 *)((int)pvVar3 + 0x48));
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    return;
  }
  if (uVar1 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (*(int *)((int)pvVar3 + 0x50) == 0) {
      PlayMobySound(0,0,moby);
    }
    else {
      if (CHAR_ARRAY_00a0fdc4.piece<40,2>() != -1) {
        CHAR_ARRAY_00a0fdc4.piece<40,2>() = CHAR_ARRAY_00a0fdc4.piece<40,2>() + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<42,2>() < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a0fdc4.piece<42,2>() =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4.piece<44,4>() = CHAR_ARRAY_00a0fdc4.piece<44,4>() | 1 << (Level & 0x3f) | 0x80000000;
      FUN_002e74a8(uVar7 + 0x40,*(int *)((int)pvVar3 + 0x50),
                   (ulonglong)*(uint *)(*(int *)((int)pvVar3 + 0x50) + 0x78) + 0x10);
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    moby->state = '\x04';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x14,0x3b7c30);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x54,uVar7);
    *(undefined4 *)((int)pvVar3 + 0x54U & 0xfffffffc) = uVar6;
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      bVar2 = moby->field43_0x70;
    }
    else {
      if (uVar1 != '\0') goto LAB_003b8124;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      bVar2 = moby->field43_0x70;
      moby->state = (char)(ZERO_MASK((bVar2 & 2))) + '\x02';
    }
    if ((bVar2 & 2) != 0) {
      moby->state = '\x02';
    }
  }
LAB_003b8124:
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  if (iVar5 == 0) {
    iVar5 = Hero_GetWeaponAmmo(-1);
    if (iVar5 == 0) {
      if (DAT_0096bd88 != '\0') {
        uVar6 = FUN_002e7140(moby,uVar7 + 0x40,auStack_90);
        *(undefined4 *)((int)pvVar3 + 0x50) = uVar6;
      }
    }
    else {
      uVar6 = FUN_002e7140(moby,uVar7 + 0x40,auStack_90);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar6;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x40);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((int)pvVar3 + 0x44);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x48);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)((int)pvVar3 + 0x4c);
  }
  return;
}



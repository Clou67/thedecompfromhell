// game/update/moby1843.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2c1bd0-0x2c4684
#include "game/update/moby1843.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1017.h"
#include "game/update/moby1212.h"
#include "game/update/moby1319.h"
#include "game/update/moby224.h"
#include "idol/fastfunc.h"

// 0x02c1bd0 (0x3e8 bytes)
// strings: 0096c074: 'None'

void M1843_002c1bd0(int param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong lVar14;
  ulonglong unaff_r23;
  longlong lVar15;
  ulonglong unaff_r24;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar17;
  int iVar18;
  ulonglong unaff_r27;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  int iVar22;
  ushort *puVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  float local_9a0 [616];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa10;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x144] = in_LR;
  puVar6[0x13e] = in_f28;
  puVar6[0x13f] = in_f29;
  puVar6[0x140] = in_f30;
  puVar6[0x141] = in_f31;
  puVar6[0x13d] = unaff_r31;
  cVar2 = *(char *)(param_1 + 0x21);
  puVar6[0x13c] = unaff_r30;
  puVar6[0x13b] = unaff_r29;
  puVar6[0x13a] = unaff_r28;
  puVar6[0x139] = unaff_r27;
  puVar6[0x138] = unaff_r26;
  puVar6[0x137] = unaff_r25;
  puVar6[0x136] = unaff_r24;
  puVar6[0x135] = unaff_r23;
  puVar6[0x134] = unaff_r22;
  puVar6[0x133] = unaff_r21;
  if (cVar2 != -1) {
    DAT_007b7fd4 = 5.0;
    if (Cheats[2] != '\0') {
      DAT_007b7fd4 = 16.0;
    }
    iVar22 = 0;
    dVar30 = 4.0;
    dVar29 = 1.0;
    dVar28 = 0.0;
    lVar14 = lVar1;
    do {
      uVar8 = GetEffectTex(0x13);
      iVar21 = (int)lVar14;
      *(undefined8 *)(iVar21 + 0x108) = uVar8;
      uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar21 + 0x110) = uVar8;
      uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
      *(undefined8 *)(iVar21 + 0x100) = uVar8;
      uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
      *(undefined8 *)(iVar21 + 0x118) = uVar8;
      dVar25 = (double)FastIntToDouble(worldUpdateTime + 3U & 3);
      iVar21 = 0;
      puVar19 = &DAT_007b7fd8;
      puVar17 = &DAT_007b7fdc;
      dVar25 = (double)(float)(dVar25 / (double)(float)((double)DAT_007b7fd4 * dVar30));
      lVar15 = lVar14;
      lVar16 = lVar14;
      do {
        uVar9 = *puVar17;
        *(undefined4 *)((int)lVar16 + 0xe0) = *puVar19;
        *(undefined4 *)((int)lVar16 + 0xe4) = uVar9;
        dVar26 = (double)FastIntToDouble((iVar22 - (iVar21 >> 1)) + 1);
        dVar27 = (double)(float)((double)(float)(dVar26 / (double)DAT_007b7fd4) + dVar25);
        dVar26 = dVar29;
        if ((dVar27 <= dVar29) && (dVar26 = dVar27, dVar27 < dVar28)) {
          dVar26 = dVar28;
        }
        uVar9 = FastLerpColor(dVar26,0xffffffff8c28aa28,0x144646);
        iVar21 = iVar21 + 1;
        *(undefined4 *)((int)lVar15 + 0xd0) = uVar9;
        puVar19 = puVar19 + 2;
        lVar16 = lVar16 + 8;
        puVar17 = puVar17 + 2;
        lVar15 = lVar15 + 4;
      } while (iVar21 < 4);
      iVar22 = iVar22 + 1;
      lVar14 = lVar14 + 0x90;
    } while (iVar22 < 0x10);
    bVar3 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)((int)puVar6 + 0x74) = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0x3e800000;
    *(undefined4 *)((int)puVar6 + 0x7c) = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar6 + 0x84) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xbe800000;
    *(undefined4 *)((int)puVar6 + 0x8c) = 0;
    puVar23 = (ushort *)(&g_MobyGroups)[bVar3];
    do {
      uVar20 = *puVar23 & 0x7fff;
      if ((g_MobyInstance[uVar20].enabled != '\0') &&
         (g_MobyInstance[uVar20].oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        pvVar5 = g_MobyInstance[uVar20].pVar;
        iVar22 = 0;
        lVar15 = lVar1;
        lVar14 = lVar1;
        if (0 < *(int *)((int)pvVar5 + 0x2c0)) {
          do {
            iVar18 = 0;
            iVar21 = (int)pvVar5 + 0xc0;
            uVar20 = (*(int *)((int)pvVar5 + 0x2c4) - iVar22) + 0xf;
            do {
              uVar10 = 0;
              lVar16 = lVar15 + 0x90;
              lVar24 = 4;
              do {
                uVar7 = uVar10 & 1;
                uVar12 = ((int)uVar10 >> 1) +
                         uVar20 + (((int)uVar20 >> 4) +
                                  (uint)((int)uVar20 < 0 && (uVar20 & 0xf) != 0)) * -0x10;
                pfVar13 = (float *)((uVar12 + (((int)uVar12 >> 4) +
                                              (uint)((int)uVar12 < 0 && (uVar12 & 0xf) != 0)) *
                                              -0x10) * 0x10 + iVar21);
                uVar10 = uVar10 + 1;
                pfVar11 = (float *)lVar16;
                *pfVar11 = *pfVar13 + local_9a0[uVar7 * 4];
                pfVar11[1] = pfVar13[1] + local_9a0[uVar7 * 4 + 1];
                pfVar11[2] = pfVar13[2] + local_9a0[uVar7 * 4 + 2];
                pfVar11[3] = pfVar13[3];
                lVar16 = lVar16 + 0x10;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              FastDrawQuad(lVar14 + 0x90,0,0,EffectTexHeaders,9);
              iVar18 = iVar18 + 1;
              iVar21 = iVar21 + 0x100;
            } while (iVar18 < 2);
            iVar22 = iVar22 + 1;
            lVar15 = lVar15 + 0x90;
            lVar14 = lVar14 + 0x90;
          } while (iVar22 < *(int *)((int)pvVar5 + 0x2c0));
        }
      }
      uVar4 = *puVar23;
      puVar23 = puVar23 + 1;
    } while (-1 < (short)uVar4);
  }
  return;
}


// 0x02c1fc8 (0x238 bytes)
void M1843_002c1fc8(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte in_cr6;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  uVar14 = worldUpdateTime;
  pvVar11 = param_1->pVar;
  uVar15 = ZEXT48(pvVar11);
  bVar1 = worldUpdateTime != 0;
  uVar16 = (ulonglong)*(uint *)((int)pvVar11 + 0x2c4);
  if ((worldUpdateTime & 3) == 0) {
    uVar16 = uVar16 + 1;
    auVar17 = loadVectorLeftIndexed(0x2c0,uVar15);
    auVar18 = loadVectorRightIndexed(0x2d0,uVar15);
    auVar19 = loadVectorLeftIndexed(0x7fd4,0x7b0000);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
    auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar16 = uVar16 + ((longlong)((int)uVar16 >> 4) +
                      (ulonglong)((int)uVar16 < 0 && (uVar16 & 0xf) != 0)) * -0x10;
    *(int *)((int)pvVar11 + 0x2c4) = (int)uVar16;
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
               auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar19 = ZEXT416(SUB164(auVar17 | auVar18,0xc) + 1) & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x2c0,uVar15
                         );
      *(undefined4 *)((int)pvVar11 + 0x2c0U & 0xfffffffc) = uVar13;
    }
  }
  iVar12 = (int)(uVar16 << 4);
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 + 0xc0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * 0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 + 0xc4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * 0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 + 0xcc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * 0.7;
  *(float *)((int)pvVar11 + iVar12 + 200) = fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * 0.7 + fVar2;
  iVar12 = *(int *)((int)pvVar11 + 0x2c4);
  *(undefined4 *)((int)pvVar11 + iVar12 * 0x10 + 0xcc) = 0x3f800000;
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * -0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * -0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1cc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * -0.7;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c8) =
       fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * -0.7 + fVar2;
  *(undefined4 *)((int)pvVar11 + *(int *)((int)pvVar11 + 0x2c4) * 0x10 + 0x1cc) = 0x3f800000;
  if ((bVar1) && (uVar14 != **(uint **)((int)pvVar11 + 0x2c8))) {
    **(uint **)((int)pvVar11 + 0x2c8) = uVar14;
    RegisterFuncForMoby(&PTR_M1843_002c1bd0_0070b050,param_1);
  }
  return;
}


// 0x02c2230 (0xb40 bytes)
// inlined: FastAtan2 @0x2c23f0, FastAtan2 @0x2c2590, FastAtan2 @0x2c2734, FastAtan2 @0x2c28cc
void M1843_002c2230(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  Spline *pSVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar31;
  ulonglong uVar29;
  longlong lVar30;
  int iVar32;
  float *pfVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f14;
  double dVar40;
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
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar27 = uVar25 - 0x220;
  puVar18 = (ulonglong *)lVar27;
  *puVar18 = uVar25;
  puVar18[0x46] = in_LR;
  puVar18[0x32] = in_f14;
  puVar18[0x33] = in_f15;
  puVar18[0x34] = in_f16;
  puVar18[0x35] = in_f17;
  puVar18[0x36] = in_f18;
  puVar18[0x37] = in_f19;
  puVar18[0x38] = in_f20;
  puVar18[0x39] = in_f21;
  puVar18[0x3a] = in_f22;
  puVar18[0x3b] = in_f23;
  puVar18[0x3c] = in_f24;
  puVar18[0x3d] = in_f25;
  puVar18[0x3e] = in_f26;
  puVar18[0x3f] = in_f27;
  puVar18[0x40] = in_f28;
  puVar18[0x41] = in_f29;
  puVar18[0x42] = in_f30;
  puVar18[0x43] = in_f31;
  puVar18[0x31] = unaff_r31;
  puVar18[0x30] = unaff_r30;
  iVar15 = *(int *)(param_1 + 0x78);
  iVar16 = *(int *)(iVar15 + 100);
  pSVar17 = Splines[*(int *)(iVar15 + 0x60)];
  iVar31 = pSVar17->cnt;
  iVar32 = (iVar16 + 1) - ((iVar16 + 1) / iVar31) * iVar31;
  dVar46 = (double)pSVar17->points[iVar16].x;
  dVar45 = (double)pSVar17->points[iVar16].y;
  dVar43 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 4) * 4);
  dVar42 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 5) * 4);
  iVar31 = (iVar16 + 2) - ((iVar16 + 2) / iVar31) * iVar31;
  fVar1 = (float)(dVar46 - dVar43);
  fVar2 = (float)(dVar45 - dVar42);
  dVar44 = (double)pSVar17->points[iVar16].z;
  dVar35 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 6) * 4);
  dVar41 = 0.0;
  fVar4 = *(float *)((int)pSVar17 + (iVar31 * 4 + 4) * 4);
  fVar5 = *(float *)((int)pSVar17 + (iVar31 * 4 + 5) * 4);
  fVar6 = *(float *)((int)pSVar17 + (iVar31 * 4 + 6) * 4);
  *(float *)(puVar18 + 0x1d) = fVar1;
  *(float *)((int)puVar18 + 0xec) = fVar2;
  *(undefined4 *)((int)puVar18 + 0x7c) = 0;
  *(float *)(puVar18 + 0x1e) = ABS(fVar1) - ABS(fVar2);
  *(undefined4 *)(puVar18 + 0xf) = 0;
  *(undefined4 *)((int)puVar18 + 0x74) = 0;
  *(undefined4 *)(puVar18 + 0xe) = 0;
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xec) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar18 + 0x1d));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar7 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  fVar14 = ABS(*(float *)((int)puVar18 + 0xec));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar14 = ABS(fVar1);
  }
  dVar36 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xbc;
    lVar28 = uVar25 - 0xcc;
    lVar34 = 2;
    fVar3 = (fVar14 - fVar3) / (fVar14 + fVar3);
    fVar14 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x154) = fVar3;
    *(float *)(puVar18 + 0x2b) = fVar3;
    *(float *)((int)puVar18 + 0x15c) = fVar3;
    *(float *)(puVar18 + 0x2c) = fVar3;
    fVar3 = fVar14 * fVar14;
    *(float *)(puVar18 + 0x2b) = *(float *)(puVar18 + 0x2b) * fVar14;
    *(float *)((int)puVar18 + 0x15c) = *(float *)((int)puVar18 + 0x15c) * fVar3;
    *(float *)(puVar18 + 0x2c) = *(float *)(puVar18 + 0x2c) * fVar3 * fVar14;
    do {
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x144) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xcc;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar14 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x154) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar14;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0x154)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar13 + fVar7);
  }
  fVar4 = (float)(dVar43 - (double)fVar4);
  fVar5 = (float)(dVar42 - (double)fVar5);
  *(float *)((int)puVar18 + 0xdc) = fVar4;
  *(float *)(puVar18 + 0x1c) = fVar5;
  *(float *)((int)puVar18 + 0xe4) = ABS(fVar4) - ABS(fVar5);
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x1c) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)((int)puVar18 + 0xdc));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar3 = ABS(fVar5);
  }
  fVar7 = ABS(*(float *)(puVar18 + 0x1c));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar7 = ABS(fVar4);
  }
  fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar13 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar37 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xdc;
    lVar28 = uVar25 - 0xec;
    lVar34 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x134) = fVar3;
    *(float *)(puVar18 + 0x27) = fVar3;
    *(float *)((int)puVar18 + 0x13c) = fVar3;
    *(float *)(puVar18 + 0x28) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x27) = *(float *)(puVar18 + 0x27) * fVar7;
    *(float *)((int)puVar18 + 0x13c) = *(float *)((int)puVar18 + 0x13c) * fVar3;
    *(float *)(puVar18 + 0x28) = *(float *)(puVar18 + 0x28) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x124) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xec;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x134) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar16 + 0x134)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar14 + fVar13);
  }
  fVar3 = (float)(dVar35 - dVar44);
  dVar40 = (double)fVar3;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar18 + 0xd4) = fVar3;
  dVar38 = ABS((double)fVar1);
  *(float *)(puVar18 + 0x1a) = fVar1;
  *(float *)(puVar18 + 0x1b) = (float)(dVar38 - ABS(dVar40));
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xd4) >> 0x1d) & 4;
  dVar47 = ABS((double)*(float *)(puVar18 + 0x1a));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar47 = ABS(dVar40);
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  dVar39 = ABS((double)*(float *)((int)puVar18 + 0xd4));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar39 = dVar38;
  }
  fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar38 = dVar41;
  if (0.0 < dVar47) {
    lVar26 = uVar25 - 0x210;
    lVar28 = uVar25 - 0x10c;
    lVar30 = uVar25 - 0xfc;
    lVar34 = 2;
    fVar3 = (float)(dVar39 - dVar47) / (float)(dVar39 + dVar47);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x114) = fVar3;
    *(float *)(puVar18 + 0x23) = fVar3;
    *(float *)((int)puVar18 + 0x11c) = fVar3;
    *(float *)(puVar18 + 0x24) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x23) = *(float *)(puVar18 + 0x23) * fVar7;
    *(float *)((int)puVar18 + 0x11c) = *(float *)((int)puVar18 + 0x11c) * fVar3;
    *(float *)(puVar18 + 0x24) = *(float *)(puVar18 + 0x24) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x104) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x10c;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x114) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    dVar47 = dVar41;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar16 + 0x114)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar38 = (double)((float)(dVar47 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar1 = (float)((double)fVar6 - dVar35);
  fVar2 = ABS(fVar1);
  *(float *)(puVar18 + 0x19) = fVar1;
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar18 + 0xc4) = fVar1;
  *(float *)((int)puVar18 + 0xcc) = fVar4 - fVar2;
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xc4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xcc) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x19) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar18 + 0xc4));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar5 = ABS(*(float *)(puVar18 + 0x19));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar35 = dVar41;
  if (0.0 < fVar1) {
    lVar34 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)((int)puVar18 + 0xf4) = fVar1;
    *(float *)(puVar18 + 0x1f) = fVar1;
    *(float *)((int)puVar18 + 0xfc) = fVar1;
    *(float *)(puVar18 + 0x20) = fVar1;
    lVar28 = uVar25 - 0x210;
    fVar1 = fVar5 * fVar5;
    lVar26 = uVar25 - 300;
    lVar30 = uVar25 - 0x11c;
    *(float *)(puVar18 + 0x1f) = *(float *)(puVar18 + 0x1f) * fVar5;
    *(float *)((int)puVar18 + 0xfc) = *(float *)((int)puVar18 + 0xfc) * fVar1;
    *(float *)(puVar18 + 0x20) = *(float *)(puVar18 + 0x20) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar28 + 0xf4) = *(float *)((int)lVar28 + 0xe4) * fVar1 * fVar1;
      iVar16 = (int)lVar26;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 300;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar1 = *pfVar33;
      fVar5 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xf4) * fVar1;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar5;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar26 = 2;
    do {
      iVar16 = (int)lVar27;
      iVar31 = (int)lVar30;
      lVar27 = lVar27 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar16 + 0xf4)) + *(float *)(iVar31 + 4)
                        + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar2 + fVar4);
  }
  dVar35 = (double)FastDiffRots(dVar35,dVar38);
  dVar35 = (double)FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar38);
  *(float *)((int)puVar18 + 0x74) = (float)dVar35;
  dVar35 = (double)FastDiffRots(dVar37,dVar36);
  dVar35 = (double)FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar36);
  uVar8 = *(undefined4 *)((int)puVar18 + 0x74);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar18 + 0xe);
  uVar9 = *(undefined4 *)((int)puVar18 + 0x7c);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  *(float *)(puVar18 + 0xf) = (float)dVar35;
  *(float *)(param_1 + 0x48) = (float)dVar35;
  if (0 < *(int *)(iVar15 + 0x6c)) {
    dVar35 = (double)FastWrapRot((float)dVar35,3.14159);
    *(float *)(param_1 + 0x48) = (float)dVar35;
    *(float *)(param_1 + 0x44) = -*(float *)(param_1 + 0x44);
  }
  dVar35 = (double)*(float *)(iVar15 + 0x68);
  dVar44 = (double)(float)(dVar35 * dVar40 + dVar44);
  dVar43 = (double)(float)(dVar35 * (double)(float)(dVar43 - dVar46) + dVar46);
  dVar35 = (double)(float)(dVar35 * (double)(float)(dVar42 - dVar45) + dVar45);
  FastEulerToMtx1(uVar25 - 0x1a0,uVar25 - 0x1b0);
  fVar1 = *(float *)(iVar15 + 0x70);
  fVar2 = *(float *)((int)puVar18 + 0x94);
  fVar13 = fVar1 + 1.5707963;
  fVar4 = *(float *)(puVar18 + 0x12);
  fVar5 = *(float *)((int)puVar18 + 0xa4);
  fVar6 = *(float *)(puVar18 + 0x13);
  fVar3 = *(float *)(puVar18 + 0x14);
  fVar7 = *(float *)(puVar18 + 0x15);
  fVar14 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar14 = fVar1;
  }
  dVar42 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar19 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar14 < 0.0) {
    fVar19 = fVar14;
  }
  fVar1 = 3.1415925 - fVar13;
  if (fVar13 - (3.1415925 - fVar13) < 0.0) {
    fVar1 = fVar13;
  }
  fVar14 = *(float *)(iVar15 + 0x78);
  fVar20 = fVar19 * fVar19;
  fVar21 = -3.1415925 - fVar13;
  if ((-3.1415925 - fVar13) - fVar1 < 0.0) {
    fVar21 = fVar1;
  }
  dVar46 = (double)SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(puVar18 + 0x18) = 0;
  fVar1 = fVar20 * fVar20 * fVar19;
  fVar13 = fVar21 * fVar21;
  fVar24 = fVar20 * fVar1;
  fVar22 = fVar13 * fVar13 * fVar21;
  fVar23 = fVar13 * fVar22;
  fVar1 = (float)((double)(fVar14 * (fVar20 * fVar24 * 2.601887e-06 +
                                    fVar24 * -0.0001980741 +
                                    fVar1 * 0.0083330255 + fVar20 * fVar19 * -0.16666657 + fVar19))
                 / dVar42);
  fVar13 = (float)((double)(fVar14 * (fVar13 * fVar23 * 2.601887e-06 +
                                     fVar23 * -0.0001980741 +
                                     fVar22 * 0.0083330255 + fVar13 * fVar21 * -0.16666657 + fVar21)
                           ) / dVar46);
  dVar45 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  dVar36 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  dVar37 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  dVar42 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  dVar47 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar38 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar45 = (double)(float)(dVar42 + (double)(float)(dVar45 + dVar35));
  dVar35 = (double)(float)(dVar38 + (double)(float)(dVar37 + dVar44));
  dVar42 = (double)(float)(dVar47 + (double)(float)(dVar36 + dVar43));
  fVar1 = (float)((double)fVar10 - dVar45);
  fVar2 = (float)((double)fVar12 - dVar35);
  fVar4 = (float)((double)fVar11 - dVar42);
  OrganicDelt
            (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1),g_FrameTimeSq * 10.0,
             g_FrameTimeSq * 10.0,g_FrameTime * 20.0,(float *)(puVar18 + 0x18),0x720000,
             (float *)(iVar15 + 0x80));
  fVar2 = (float)(dVar45 - (double)*(float *)(param_1 + 0x14));
  fVar4 = (float)(dVar42 - (double)*(float *)(param_1 + 0x10));
  fVar5 = (float)(dVar35 - (double)*(float *)(param_1 + 0x18));
  dVar42 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar15 + 0x80) / dVar42);
  dVar35 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  dVar43 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  dVar44 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  *(float *)(param_1 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) + dVar35);
  *(float *)(param_1 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar43);
  *(float *)(param_1 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar44);
  return;
}


// 0x02c2d80 (0x314 bytes)
void M1843_002c2d80(int param_1)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  PlayerState PVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = MB_damage(param_1,0x330000,0);
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  PVar4 = g_heroState;
  if (g_heroState == TURRET_PLANE_UI) {
    uVar7 = *(ushort *)(param_1 + 0x34) | 0x1000;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x34) & 0xefff;
  }
  *(ushort *)(param_1 + 0x34) = uVar7;
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      if (PVar4 != TURRET_PLANE_UI) {
        *(undefined1 *)(param_1 + 0x20) = 4;
        *(ushort *)(param_1 + 0x34) = uVar7 | 1;
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
      iVar6 = CollSphere(0x3ff0000000000000,param_1 + 0x10,&DAT_002c2d70,0,param_1);
      if ((iVar6 != 0) && (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\x01')
         ) {
        MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else {
    if (DAT_00a257f4 != -1) {
      DAT_00a257f4 = DAT_00a257f4 + 1;
    }
    iVar2 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if ((int)(uint)DAT_00a257f6 < iVar2 / 600) {
      sVar3 = (short)(iVar2 >> 0x1f);
      DAT_00a257f6 = ((short)(iVar2 / 600) + sVar3) -
                     ((short)((short)(iVar2 / 0x2580000) + sVar3) >> 0xf);
    }
    DAT_00a257f8 = DAT_00a257f8 | 1 << (Level & 0x3f) | 0x80000000;
    if (((Level == Pokitaru) && (*(int *)(iVar5 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar5 + 0x20) + 0xa6) == 0xac)) {
      ShipsKilledCounts.Pokitaru = ShipsKilledCounts.Pokitaru + 1;
      if (2 < ShipsKilledCounts.Pokitaru) {
        MB_UnlockSkillPoint(0x12);
      }
    }
    bVar1 = *(int *)(iVar6 + 0x88) == 0;
    if ((bVar1) || (*(char *)(param_1 + 0x20) == '\x06')) {
      if ((bVar1) &&
         ((*(char *)(param_1 + 0x20) != '\x02' &&
          (*(undefined1 *)(param_1 + 0x20) = 2, *(char *)(param_1 + 0x53) != '\x01')))) {
        MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 6;
      if (*(char *)(param_1 + 0x53) != '\x01') {
        MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}


// 0x02c3118 (0x156c bytes)
// inlined: FastAtan2 @0x2c3bbc, FastAtan2 @0x2c3da8, FastAtan2 @0x2c426c, FastAtan2 @0x2c43f4
/* Moby 1843 */

void UpdateMoby_1843(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
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
  void *pvVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char acVar27 [4];
  ulonglong uVar28;
  int iVar29;
  int iVar31;
  longlong lVar30;
  float *pfVar34;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar35;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar36;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar47;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar48;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  double dVar51;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar52;
  
  lVar30 = (longlong)(int)moby;
  uVar28 = ZEXT48(&stack0x00000000);
  lVar36 = uVar28 - 0x280;
  puVar21 = (ulonglong *)lVar36;
  *puVar21 = uVar28;
  puVar21[0x52] = in_LR;
  puVar21[0x3e] = in_f14;
  puVar21[0x3f] = in_f15;
  puVar21[0x40] = in_f16;
  puVar21[0x41] = in_f17;
  puVar21[0x42] = in_f18;
  puVar21[0x43] = in_f19;
  puVar21[0x44] = in_f20;
  puVar21[0x45] = in_f21;
  puVar21[0x46] = in_f22;
  puVar21[0x47] = in_f23;
  puVar21[0x48] = in_f24;
  puVar21[0x49] = in_f25;
  puVar21[0x4a] = in_f26;
  puVar21[0x4b] = in_f27;
  puVar21[0x4c] = in_f28;
  puVar21[0x4d] = in_f29;
  puVar21[0x4e] = in_f30;
  puVar21[0x4f] = in_f31;
  puVar21[0x3d] = unaff_r31;
  puVar21[0x3c] = unaff_r30;
  puVar21[0x3b] = unaff_r29;
  puVar21[0x3a] = unaff_r28;
  puVar21[0x39] = unaff_r27;
  pvVar19 = moby->pVar;
  M1843_002c2d80();
  fVar7 = g_heroPosition.z;
  fVar6 = GameCamera.rot.elevation;
  fVar5 = GameCamera.rot.azimuth;
  bVar3 = moby->state;
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      moby->updateDistance = -1;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      moby->drawDistance = 0xff;
      if (iVar29 == 0) {
        moby->state = '\x01';
        dVar40 = (double)MB_randRangeSigned(0x3fd3333340000000,0x3fe0000000000000);
        *(float *)((int)pvVar19 + 0x6c) = (float)dVar40;
        dVar40 = (double)MB_randRot();
        *(float *)((int)pvVar19 + 0x70) = (float)dVar40;
        dVar40 = (double)MB_randRangeSigned(0x404e000000000000,0x405e000000000000);
        *(float *)((int)pvVar19 + 0x74) =
             (float)(dVar40 * 0.01745329238474369) * g_FrameTime;
        dVar40 = (double)MB_randRangeFloat(8.0,12.0);
        *(float *)((int)pvVar19 + 0x78) = (float)dVar40;
      }
      else {
        moby->state = '\x04';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else if (bVar3 < 3) {
      M1843_002c1fc8(lVar30);
      fVar5 = *(float *)((int)pvVar19 + 0x68) + *(float *)((int)pvVar19 + 0x6c);
      *(float *)((int)pvVar19 + 0x68) = fVar5;
      if (fVar5 <= 1.0) {
        if (fVar5 < 0.0) {
          *(float *)((int)pvVar19 + 0x68) = fVar5 + 1.0;
          iVar29 = Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
          iVar31 = *(int *)((int)pvVar19 + 100) + iVar29 + -1;
          *(int *)((int)pvVar19 + 100) = iVar31 - (iVar31 / iVar29) * iVar29;
        }
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 100) + 1;
        *(float *)((int)pvVar19 + 0x68) = fVar5 - 1.0;
        *(int *)((int)pvVar19 + 100) =
             iVar29 - (iVar29 / Splines[*(int *)((int)pvVar19 + 0x60)]->cnt) *
                      Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
      }
      FastWrapRot(*(float *)((int)pvVar19 + 0x70),*(float *)((int)pvVar19 + 0x74));
      M1843_002c2230(lVar30);
      if (moby->state == '\x02') {
        lVar36 = lVar30 + 0x10;
        MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_002c3094,
                   0xffffffffffffffff);
        iVar29 = MB_randInt(2);
        if (iVar29 == 0) {
          FUN_002f9610(lVar36,0xe4);
        }
        else {
          FUN_002f9610(lVar36,0xe0);
        }
        PlayMobySound(1,0,moby);
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
      else if ((moby->enabled == '\0') &&
              (fVar5 = (moby->pos).y - g_heroPosition.y, fVar6 = (moby->pos).x - g_heroPosition.x,
              fVar7 = (moby->pos).z - g_heroPosition.z,
              SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 32.0)) {
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else {
      iVar29 = FastCheckBsphereInView(0x4080000000000000,lVar30 + 0x10);
      if ((iVar29 != -1) ||
         (fVar5 = (moby->pos).y - g_heroPosition.y, fVar6 = (moby->pos).x - g_heroPosition.x,
         fVar7 = (moby->pos).z - g_heroPosition.z,
         SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <= 32.0)) {
        *(undefined4 *)((int)pvVar19 + 0x84) = 0;
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 0x84) + 1;
        *(int *)((int)pvVar19 + 0x84) = iVar29;
        puVar21[0x37] = (longlong)(int)(animationSpeed * 60.5);
        if (*(int *)((int)puVar21 + 0x1bc) < iVar29) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            puVar21[0x37] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar30,0,0,*(undefined4 *)((int)puVar21 + 0x1bc));
          }
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
        }
      }
    }
  }
  else if (bVar3 < 6) {
    if (4 < bVar3) {
      dVar40 = 0.0;
      uVar20 = (int)GameCamera.rot.elevation >> 0x1f;
      *(undefined4 *)(puVar21 + 0x1c) = 0;
      *(float *)(puVar21 + 0x10) = fVar5;
      fVar5 = GameCamera.rot.radius;
      *(float *)((int)puVar21 + 0x84) = GameCamera.rot.elevation;
      acVar27 = GameCamera.field10_0x15c;
      iVar29 = (uVar20 >> 1 ^ (uint)fVar6) - uVar20;
      *(float *)(puVar21 + 0x11) = fVar5;
      *(char (*) [4])((int)puVar21 + 0x8c) = acVar27;
      *(undefined4 *)(puVar21 + 0x10) = 0;
      if (iVar29 < 0x3e860a93) {
        if (iVar29 < -0x3e860a92) {
          *(undefined4 *)((int)puVar21 + 0x84) = 0xbe860a92;
        }
      }
      else {
        *(undefined4 *)((int)puVar21 + 0x84) = 0x3e860a92;
      }
      FastEulerToMtx(uVar28 - 0x1d0,uVar28 - 0x200);
      fVar7 = g_heroPosition.z;
      fVar5 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
      dVar52 = (double)g_heroPosition.w;
      fVar6 = g_heroPosition.y - *(float *)((int)pvVar19 + 0xb4);
      *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
      fVar7 = fVar7 - *(float *)((int)pvVar19 + 0xb8);
      *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
      *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
      *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      (moby->pos).x = (moby->pos).x + fVar5;
      (moby->pos).y = (moby->pos).y + fVar6;
      (moby->pos).z = (moby->pos).z + fVar7;
      puVar21[0x37] = (longlong)iVar29;
      *(float *)(puVar21 + 0x35) = fVar5;
      *(float *)((int)puVar21 + 0x1a4) = fVar6;
      *(float *)(puVar21 + 0x34) = fVar7;
      *(undefined4 *)((int)puVar21 + 0x1ac) = 0x3f490fdb;
      dVar41 = (double)FastWrapRot(0.7853982,(float)(longlong)puVar21[0x37] * 1.5707964);
      fVar5 = *(float *)((int)puVar21 + 0xc4);
      fVar6 = *(float *)(puVar21 + 0x18);
      fVar7 = *(float *)(puVar21 + 0x19);
      dVar46 = (double)(float)(3.141592502593994 - dVar41);
      if (dVar41 - (double)(float)(3.141592502593994 - dVar41) < 0.0) {
        dVar46 = dVar41;
      }
      dVar44 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      dVar51 = (double)(float)(-3.141592502593994 - dVar41);
      if ((double)(float)(-3.141592502593994 - dVar41) - dVar46 < 0.0) {
        dVar51 = dVar46;
      }
      dVar46 = (double)(float)(dVar51 * dVar51);
      *(undefined4 *)((int)puVar21 + 0x7c) = *(undefined4 *)((int)puVar21 + 0xcc);
      dVar49 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar51));
      dVar50 = (double)(float)(dVar46 * dVar49);
      fVar8 = *(float *)((int)puVar21 + 0xd4);
      fVar9 = *(float *)(puVar21 + 0x1a);
      fVar10 = *(float *)((int)puVar21 + 0xb4);
      fVar11 = *(float *)(puVar21 + 0x1b);
      fVar12 = *(float *)(puVar21 + 0x16);
      fVar13 = *(float *)(puVar21 + 0x17);
      fVar2 = (float)((double)(((float)(dVar46 * dVar50) * 2.601887e-06 +
                               (float)(dVar50 * -0.0001980741071747616 +
                                      (double)(float)(dVar49 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar46 * dVar51
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar51))
                                      )) * 8.0) / dVar44);
      dVar46 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      dVar51 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar51 = (double)(fVar5 * fVar2);
      }
      dVar49 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar51 = (double)(fVar5 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      *(float *)(puVar21 + 0xe) = (float)dVar46;
      *(float *)((int)puVar21 + 0x74) = (float)dVar51;
      *(float *)(puVar21 + 0xf) = (float)dVar49;
      bVar3 = DAT_0096b2ef;
      fVar5 = (float)(dVar41 + 1.570796251296997);
      dVar41 = (double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).x;
      fVar2 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar2 = fVar5;
      }
      dVar44 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10);
      dVar48 = (double)GameCamera.posY;
      fVar14 = (moby->pos).z;
      dVar50 = (double)GameCamera.posX;
      fVar15 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
        fVar15 = fVar2;
      }
      fVar2 = fVar15 * fVar15;
      fVar16 = fVar2 * fVar2 * fVar15;
      fVar17 = fVar2 * fVar16;
      fVar5 = (float)(20.0 / dVar44);
      dVar43 = (double)GameCamera.posZ;
      *(char (*) [4])((int)puVar21 + 0x7c) = GameCamera.field8_0x14c;
      pfVar34 = (float *)((int)pvVar19 + 0x6c);
      puVar21[0x36] = (ulonglong)dVar52;
      fVar2 = (float)((double)((fVar2 * fVar17 * 2.601887e-06 +
                               fVar17 * -0.0001980741 +
                               fVar16 * 0.0083330255 + fVar2 * fVar15 * -0.16666657 + fVar15) * 8.0)
                     / dVar41);
      dVar52 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      dVar42 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar47 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar44 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar44 = (double)(fVar8 * fVar2);
      }
      dVar45 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar45 = (double)(fVar9 * fVar2);
      }
      dVar39 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar39 = (double)(fVar11 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar44 = (double)(fVar8 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar45 = (double)(fVar9 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar39 = (double)(fVar11 * fVar2);
      }
      dVar41 = (double)(float)((double)(float)((double)(float)(dVar48 + dVar51) + dVar44) + dVar52);
      dVar46 = (double)(float)((double)(float)((double)(float)(dVar50 + dVar46) + dVar45) + dVar42);
      dVar52 = (double)(float)((double)(float)((double)(float)(dVar43 + dVar49) + dVar39) + dVar47);
      fVar5 = (float)(dVar41 - (double)fVar6);
      fVar6 = (float)(dVar46 - (double)fVar7);
      fVar7 = (float)(dVar52 - (double)fVar14);
      *(float *)((int)puVar21 + 0x74) = fVar5;
      *(float *)(puVar21 + 0xe) = fVar6;
      *(float *)(puVar21 + 0xf) = fVar7;
      fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      if ((bVar3 & 2) == 0) {
        if (moby->setByGroup == '\0') {
          OrganicDelt
                    (fVar5,g_FrameTimeSq * 2.0,g_FrameTimeSq * 20.0,g_FrameTime * 5.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
        else {
          OrganicDelt
                    (fVar5,g_FrameTimeSq * 2.0,g_FrameTimeSq * 20.0,g_FrameTime * 15.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
      }
      else {
        OrganicDelt
                  (fVar5,g_FrameTimeSq * 2.0,g_FrameTimeSq * 20.0,g_FrameTime,
                   (float *)(puVar21 + 0x1c),0x720000,pfVar34);
      }
      ClampVec3Magnitude((double)*(float *)((int)pvVar19 + 0x6c),(Vec4 *)(puVar21 + 0xe));
      fVar5 = (moby->pos).x + *(float *)(puVar21 + 0xe);
      dVar49 = (double)fVar5;
      fVar6 = (moby->pos).y + *(float *)((int)puVar21 + 0x74);
      dVar44 = (double)fVar6;
      cVar4 = moby->setByGroup;
      fVar7 = (moby->pos).z + *(float *)(puVar21 + 0xf);
      dVar51 = (double)fVar7;
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar6;
      (moby->pos).z = fVar7;
      fVar5 = g_FrameTimeSq;
      if (cVar4 == '\0') {
        dVar46 = (double)g_heroPosition.y;
        dVar41 = (double)(float)((double)g_heroPosition.x - dVar49);
        dVar50 = (double)(float)(dVar46 - dVar44);
        *(float *)(puVar21 + 0x20) = (float)((double)g_heroPosition.x - dVar49);
        *(float *)((int)puVar21 + 0x104) = (float)(dVar46 - dVar44);
        dVar52 = (double)(float)((double)g_heroPosition.z - dVar51);
        *(float *)(puVar21 + 0x21) = (float)(ABS(dVar41) - ABS(dVar50));
        uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x20) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar21 + 0x21) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0x104) >> 0x1d) & 4;
        dVar46 = ABS((double)*(float *)(puVar21 + 0x20));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar46 = ABS(dVar50);
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
        dVar51 = ABS((double)*(float *)((int)puVar21 + 0x104));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar51 = ABS(dVar41);
        }
        fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar44 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar35 = uVar28 - 0x114;
          lVar38 = uVar28 - 0x104;
          lVar37 = 2;
          fVar2 = (float)(dVar51 - dVar46) / (float)(dVar51 + dVar46);
          fVar8 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2f) = fVar2;
          *(float *)(puVar21 + 0x2e) = fVar2;
          *(float *)((int)puVar21 + 0x174) = fVar2;
          *(float *)((int)puVar21 + 0x16c) = fVar2;
          fVar2 = fVar8 * fVar8;
          *(float *)(puVar21 + 0x2e) = *(float *)(puVar21 + 0x2e) * fVar8;
          *(float *)((int)puVar21 + 0x174) = *(float *)((int)puVar21 + 0x174) * fVar2;
          *(float *)(puVar21 + 0x2f) = *(float *)(puVar21 + 0x2f) * fVar2 * fVar8;
          do {
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x15c) * fVar2 * fVar2;
            iVar29 = (int)lVar35;
            lVar33 = lVar33 + 8;
            lVar35 = lVar35 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar2 * fVar2;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x114;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar2 = *pfVar34;
            fVar8 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x16c) * fVar2;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar29 = (int)lVar33;
            lVar33 = lVar33 + 0x10;
            iVar31 = (int)lVar38;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar29 + 0x16c)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar44 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar6 +
                           fVar7);
        }
        dVar49 = 12.566370964050293;
        OrganicDeltAng
                  ((float)dVar44,fVar5 * 12.566371,fVar5 * 12.566371,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x2c3094,
                   (float *)((int)pvVar19 + 0x8c));
        *(float *)(puVar21 + 0x1f) = (float)dVar52;
        dVar51 = (double)g_FrameTime;
        dVar44 = (double)g_FrameTimeSq;
        fVar5 = SQRT((float)(dVar41 * dVar41 + (double)(float)(dVar50 * dVar50)));
        dVar41 = ABS((double)fVar5);
        *(float *)((int)puVar21 + 0xf4) = fVar5;
        *(float *)((int)puVar21 + 0xfc) = (float)(dVar41 - ABS(dVar52));
        uVar32 = (ulonglong)(*(uint *)((int)puVar21 + 0xf4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xfc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1f) >> 0x1d) & 4;
        iVar29 = (int)(uVar32 << 2);
        dVar46 = ABS((double)*(float *)((int)puVar21 + 0xf4));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar46 = ABS(dVar52);
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + iVar29);
        dVar52 = ABS((double)*(float *)(puVar21 + 0x1f));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar52 = dVar41;
        }
        fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar41 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar38 = uVar28 - 0x124;
          lVar35 = uVar28 - 0x134;
          lVar37 = 2;
          fVar7 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
          fVar2 = fVar7 * fVar7;
          *(float *)(puVar21 + 0x2b) = fVar7;
          *(float *)(puVar21 + 0x2a) = fVar7;
          *(float *)((int)puVar21 + 0x154) = fVar7;
          *(float *)((int)puVar21 + 0x14c) = fVar7;
          fVar7 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2a) = *(float *)(puVar21 + 0x2a) * fVar2;
          *(float *)((int)puVar21 + 0x154) = *(float *)((int)puVar21 + 0x154) * fVar7;
          *(float *)(puVar21 + 0x2b) = *(float *)(puVar21 + 0x2b) * fVar7 * fVar2;
          do {
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x13c) * fVar7 * fVar7;
            iVar29 = (int)lVar35;
            lVar35 = lVar35 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar7 * fVar7;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x134;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar7 = *pfVar34;
            fVar2 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x14c) * fVar7;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar2;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar31 = (int)lVar33;
            iVar22 = (int)lVar38;
            lVar33 = lVar33 + 0x10;
            iVar29 = (int)lVar33;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 0x14c)) +
                              *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                             *(float *)(iVar22 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar41 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar5 +
                           fVar6);
        }
        OrganicDeltAng
                  ((float)-dVar41,(float)(dVar44 * dVar49),(float)(dVar44 * dVar49),
                   (float)(dVar51 * dVar49),&(moby->rotation).y,iVar29,
                   (float *)((int)pvVar19 + 0x90));
        if (worldUpdateTime == (worldUpdateTime / 10) * 10) {
          dVar48 = (double)*(float *)(puVar21 + 0x35);
          dVar50 = (double)*(float *)((int)puVar21 + 0x1a4);
          dVar49 = (double)*(float *)(puVar21 + 0x34);
          PlayMobySound(2,0,moby);
          Delt((float)dVar40,0.25,(float *)((int)pvVar19 + 0x94));
          dVar51 = (double)g_heroPosition.x;
          dVar44 = (double)g_heroPosition.z;
          fVar5 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          dVar41 = (double)SQRT((float)(dVar49 * dVar49 +
                                       (double)(float)(dVar48 * dVar48 +
                                                      (double)(float)(dVar50 * dVar50))));
          bVar1 = worldUpdateTime == (worldUpdateTime / 0x14) * 0x14;
          dVar52 = (double)(float)((double)*(float *)((int)pvVar19 + 0x94) / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(float)(dVar50 * dVar52);
          }
          dVar43 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          dVar42 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(float)(dVar50 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          puVar21[0x32] = (ulonglong)(double)(float)(dVar46 + (double)g_heroPosition.y);
          puVar21[0x33] = (ulonglong)(double)(float)(dVar43 + dVar51);
          if (bVar1) {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_007b8000;
            fVar24 = DAT_007b800c;
            fVar25 = DAT_007b8004;
            fVar26 = DAT_007b8008;
          }
          else {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_007b8010;
            fVar24 = DAT_007b801c;
            fVar25 = DAT_007b8014;
            fVar26 = DAT_007b8018;
          }
          fVar10 = fVar11 * fVar25 + fVar12 * fVar26 + fVar10 * fVar23 + fVar6;
          fVar5 = fVar8 * fVar25 + fVar9 * fVar26 + fVar2 * fVar23 + fVar5;
          fVar8 = fVar14 * fVar25 + fVar15 * fVar26 + fVar13 * fVar23 + fVar7;
          fVar6 = (float)((double)puVar21[0x32] - (double)fVar10);
          fVar7 = (float)((double)puVar21[0x33] - (double)fVar5);
          fVar2 = (float)(dVar42 + dVar44) - fVar8;
          *(float *)((int)puVar21 + 0xac) =
               fVar17 * fVar25 + fVar18 * fVar26 + fVar16 * fVar23 + fVar24;
          fVar9 = DAT_007b7fd0 * g_FrameTime;
          *(float *)(puVar21 + 0x14) = fVar5;
          *(float *)((int)puVar21 + 0xa4) = fVar10;
          *(float *)(puVar21 + 0x15) = fVar8;
          *(float *)((int)puVar21 + 0x9c) = (float)(double)puVar21[0x36];
          dVar41 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar5 = (float)((double)fVar9 / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          dVar52 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          dVar51 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar51 = (double)(fVar7 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar51 = (double)(fVar7 * fVar5);
          }
          *(float *)(puVar21 + 0x13) = (float)(dVar46 + (double)*(float *)(puVar21 + 0x34));
          *(float *)((int)puVar21 + 0x94) =
               (float)(dVar52 + (double)*(float *)((int)puVar21 + 0x1a4));
          *(float *)(puVar21 + 0x12) = (float)(dVar51 + (double)*(float *)(puVar21 + 0x35));
          iVar29 = FUN_00187e00(0x4060000000000000,0xbff0000000000000,0x4024000000000000,lVar30,
                                uVar28 - 0x1f0,uVar28 - 0x1e0);
          fVar5 = *(float *)((int)puVar21 + 0x1ac);
          if (iVar29 != 0) {
            fVar6 = *(float *)((int)puVar21 + 0x94) - *(float *)((int)puVar21 + 0x1a4);
            fVar7 = *(float *)(puVar21 + 0x12) - *(float *)(puVar21 + 0x35);
            *(float *)(puVar21 + 0x12) = fVar7;
            *(float *)((int)puVar21 + 0x94) = fVar6;
            fVar2 = *(float *)(puVar21 + 0x13) - *(float *)(puVar21 + 0x34);
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
            *(float *)((int)puVar21 + 0xec) = fVar2;
            *(float *)(puVar21 + 0x13) = fVar2;
            dVar41 = ABS((double)fVar6);
            *(float *)(puVar21 + 0x1d) = fVar6;
            *(float *)(puVar21 + 0x1e) = (float)(dVar41 - ABS((double)fVar2));
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x1d) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar21 + 0x1e) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xec) >> 0x1d) & 4;
            dVar46 = ABS((double)*(float *)(puVar21 + 0x1d));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar46 = ABS((double)fVar2);
            }
            fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
            dVar52 = ABS((double)*(float *)((int)puVar21 + 0xec));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar52 = dVar41;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            dVar41 = dVar40;
            if (dVar40 < dVar46) {
              lVar30 = uVar28 - 0x270;
              lVar33 = uVar28 - 0x154;
              lVar35 = uVar28 - 0x144;
              lVar38 = 2;
              fVar2 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x27) = fVar2;
              *(float *)(puVar21 + 0x26) = fVar2;
              *(float *)((int)puVar21 + 0x134) = fVar2;
              *(float *)((int)puVar21 + 300) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x26) = *(float *)(puVar21 + 0x26) * fVar8;
              *(float *)((int)puVar21 + 0x134) = *(float *)((int)puVar21 + 0x134) * fVar2;
              *(float *)(puVar21 + 0x27) = *(float *)(puVar21 + 0x27) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 0x11c) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar30 = lVar30 + 8;
                lVar33 = lVar33 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x154;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 300) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar33 = 2;
              lVar30 = lVar36;
              dVar46 = dVar40;
              do {
                iVar31 = (int)lVar30;
                lVar30 = lVar30 + 0x10;
                iVar22 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 300)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
              dVar41 = (double)((float)(dVar46 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x44) = (float)-dVar41;
            dVar52 = ABS((double)*(float *)(puVar21 + 0x12));
            dVar46 = ABS((double)*(float *)((int)puVar21 + 0x94));
            *(float *)((int)puVar21 + 0xe4) = (float)(dVar52 - dVar46);
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x12) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xe4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0x94) >> 0x1d) & 4;
            dVar41 = dVar52;
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar41 = dVar46;
            }
            fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar46 = dVar52;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            if (dVar40 < dVar41) {
              lVar30 = uVar28 - 0x270;
              lVar33 = uVar28 - 0x174;
              lVar35 = uVar28 - 0x164;
              lVar38 = 2;
              fVar2 = (float)(dVar46 - dVar41) / (float)(dVar46 + dVar41);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x23) = fVar2;
              *(float *)(puVar21 + 0x22) = fVar2;
              *(float *)((int)puVar21 + 0x114) = fVar2;
              *(float *)((int)puVar21 + 0x10c) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x22) = *(float *)(puVar21 + 0x22) * fVar8;
              *(float *)((int)puVar21 + 0x114) = *(float *)((int)puVar21 + 0x114) * fVar2;
              *(float *)(puVar21 + 0x23) = *(float *)(puVar21 + 0x23) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0xfc) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar30 = lVar30 + 8;
                lVar33 = lVar33 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x174;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0x10c) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar30 = 2;
              do {
                iVar31 = (int)lVar36;
                iVar22 = (int)lVar35;
                lVar36 = lVar36 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x10c)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              dVar40 = (double)((float)(dVar40 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x48) = (float)dVar40;
          }
        }
        if (moby->enabled == '\0') {
          moby->state = '\x04';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
        }
      }
      else {
        if (moby->enabled != '\0') {
          dVar49 = (double)(moby->pos).x;
          dVar44 = (double)(moby->pos).y;
          dVar51 = (double)(moby->pos).z;
          *(int *)((int)pvVar19 + 0x98) = *(int *)((int)pvVar19 + 0x98) + 1;
        }
        if ((SQRT((float)(dVar52 - dVar51) * (float)(dVar52 - dVar51) +
                  (float)(dVar46 - dVar49) * (float)(dVar46 - dVar49) +
                  (float)(dVar41 - dVar44) * (float)(dVar41 - dVar44)) < 2.0) ||
           (iVar29 = *(int *)((int)pvVar19 + 0x98),
           puVar21[0x37] = (longlong)(int)(animationSpeed * 120.5),
           *(int *)((int)puVar21 + 0x1bc) < iVar29)) {
          moby->setByGroup = '\0';
        }
      }
    }
  }
  else if (bVar3 < 7) {
    fVar6 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
    fVar5 = *(float *)((int)pvVar19 + 0xb8);
    fVar2 = g_heroPosition.y - *(float *)((int)pvVar19 + 0xb4);
    *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
    *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
    *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
    *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
    lVar36 = lVar30 + 0x10;
    (moby->pos).x = (moby->pos).x + fVar6;
    (moby->pos).y = (moby->pos).y + fVar2;
    (moby->pos).z = (moby->pos).z + (fVar7 - fVar5);
    MB_SpawnExplosionSparks
              (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_002c3094,0xffffffffffffffff)
    ;
    iVar29 = MB_randInt(2);
    if (iVar29 == 0) {
      FUN_002f9610(lVar36,0xe4);
    }
    else {
      FUN_002f9610(lVar36,0xe0);
    }
    PlayMobySound(1,0,moby);
    moby->state = '\x04';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



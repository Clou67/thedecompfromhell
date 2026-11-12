// game/update/moby1634.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2a5770-0x2a6a00
#include "game/update/moby1634.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02a5770 (0x14 bytes)
void M1634_002a5770(void)

{
  DAT_007ac9cc = 0x10000;
  return;
}


// 0x02a57a0 (0x1c4 bytes)
MobyInstance *
M1634_002a57a0(f32 *param_1,undefined4 *param_2,undefined2 param_3,int param_4)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  s8 sVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pMVar3 = CreateMoby(0x662);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    sVar4 = MB_randRange(0x40,0x80);
    pMVar3->alpha = sVar4;
    SetColorOfMoby(pMVar3,0x20,0x60,0x10);
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    dVar7 = 6.2831854820251465;
    dVar6 = 12.566370964050293;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * 6.2831855,g_FrameTime * 12.566371);
    puVar2[4] = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar7),
                               (float)((double)g_FrameTime * dVar6));
    puVar2[5] = (float)dVar5;
    *(undefined2 *)(puVar2 + 6) = param_3;
    *(undefined2 *)((int)puVar2 + 0x1a) = param_3;
    fVar1 = pMVar3->scale;
    if (param_4 == 0) {
      dVar5 = (double)MB_randRangeFloat(0.5,0.75);
      fVar1 = (float)((double)pMVar3->scale * dVar5);
      pMVar3->scale = fVar1;
    }
    puVar2[7] = fVar1;
    dVar5 = (double)MB_randRangeFloat(2.0,5.0);
    pMVar3->setByGroup = (char)param_4;
    pMVar3->scale = (float)((double)pMVar3->scale * dVar5);
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x02a5988 (0x1c8 bytes)
void M1634_002a5988(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<24> local_50;
  
  MB_randRot();
  dVar4 = 0.0;
  MB_randRangeFloat(0.0,DAT_007aca64);
  uVar2 = MB_randRangeFloat((float)dVar4,DAT_007aca54);
  uVar3 = MB_randRangeFloat(DAT_007aca54,DAT_007aca58);
  uVar1 = MB_randRange(DAT_007aca5c,DAT_007aca60);
  SpawnPart_52(uVar2,uVar3,local_50,DAT_007aca4c,DAT_007aca50,in_r6,in_r7,uVar1);
  return;
}


// 0x02a5ba8 (0xe44 bytes)
// inlined: FastAtan2 @0x2a5dd4, FastAtan2 @0x2a5fdc, FastAtan2 @0x2a63bc, FastAtan2 @0x2a65a8
/* Moby 1634 */

void UpdateMoby_1634(MobyInstance *moby)

{
  longlong lVar1;
  char cVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  longlong lVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar34;
  ulonglong in_f19;
  double dVar35;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar36;
  ulonglong in_f22;
  double dVar37;
  ulonglong in_f23;
  double dVar38;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  double dVar48;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x230;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar18;
  puVar13[0x48] = in_LR;
  puVar13[0x37] = in_f17;
  puVar13[0x38] = in_f18;
  puVar13[0x39] = in_f19;
  puVar13[0x3a] = in_f20;
  puVar13[0x3b] = in_f21;
  puVar13[0x3c] = in_f22;
  puVar13[0x3d] = in_f23;
  puVar13[0x3e] = in_f24;
  puVar13[0x3f] = in_f25;
  puVar13[0x40] = in_f26;
  puVar13[0x41] = in_f27;
  puVar13[0x42] = in_f28;
  puVar13[0x43] = in_f29;
  puVar13[0x44] = in_f30;
  puVar13[0x45] = in_f31;
  fVar3 = (moby->pos).x;
  puVar13[0x36] = unaff_r31;
  fVar4 = (moby->pos).y;
  puVar13[0x32] = unaff_r27;
  fVar5 = (moby->pos).z;
  puVar13[0x35] = unaff_r30;
  fVar6 = (moby->pos).w;
  pfVar10 = (float *)moby->pVar;
  cVar2 = moby->setByGroup;
  *(f32 *)(puVar13 + 0x10) = fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar4;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  puVar13[0x34] = unaff_r29;
  puVar13[0x33] = unaff_r28;
  puVar13[0x31] = unaff_r26;
  puVar13[0x30] = unaff_r25;
  puVar13[0x2f] = unaff_r24;
  puVar13[0x2e] = unaff_r23;
  puVar13[0x2d] = unaff_r22;
  puVar13[0x2c] = unaff_r21;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  uVar16 = DAT_007aca40;
  if (cVar2 == '\x01') {
    iVar24 = 0;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_007aca3c;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar16;
    do {
      *(f32 *)(puVar13 + 0x12) = fVar3;
      *(f32 *)((int)puVar13 + 0x94) = fVar4;
      *(f32 *)(puVar13 + 0x13) = fVar5;
      *(f32 *)((int)puVar13 + 0x9c) = fVar6;
      dVar47 = -0.06499999761581421;
      dVar45 = 0.06499999761581421;
      dVar30 = (double)MB_randRangeFloat(-0.065,0.065);
      *(float *)(puVar13 + 0x12) = (float)((double)*(float *)(puVar13 + 0x12) + dVar30);
      dVar30 = (double)MB_randRangeFloat((float)dVar47,(float)dVar45);
      *(float *)((int)puVar13 + 0x94) = (float)((double)*(float *)((int)puVar13 + 0x94) + dVar30);
      dVar30 = (double)MB_randRangeFloat((float)dVar47,(float)dVar45);
      *(float *)(puVar13 + 0x13) = (float)((double)*(float *)(puVar13 + 0x13) + dVar30);
      *(undefined4 *)((int)puVar13 + 0xac) = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      *(undefined4 *)((int)puVar13 + 0xa4) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      dVar44 = 0.8999999761581421;
      dVar41 = 1.100000023841858;
      dVar30 = (double)MB_randRangeFloat
                                 (DAT_007aca14 * g_FrameTime * 0.9,
                                  DAT_007aca14 * g_FrameTime * 1.1);
      *(float *)(puVar13 + 0x15) = (float)dVar30;
      dVar30 = (double)MB_randRangeFloat(-DAT_007aca30,DAT_007aca30);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      fVar7 = ABS(*pfVar10);
      fVar8 = ABS(pfVar10[1]);
      dVar47 = 0.01745329238474369;
      dVar48 = (double)(float)(dVar30 * 0.01745329238474369);
      *(float *)((int)puVar13 + 0xdc) = fVar7 - fVar8;
      dVar45 = 0.0;
      dVar46 = 0.7853981852531433;
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      fVar11 = fVar7;
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar11 = fVar8;
      }
      fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar36 = dVar45;
      if (0.0 < fVar11) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0xf0;
        lVar28 = uVar18 - 0xe0;
        lVar29 = 2;
        fVar11 = (fVar8 - fVar11) / (fVar8 + fVar11);
        fVar8 = fVar11 * fVar11;
        *(float *)((int)puVar13 + 0x14c) = fVar11;
        *(float *)((int)puVar13 + 0x144) = fVar11;
        *(float *)(puVar13 + 0x29) = fVar11;
        *(float *)(puVar13 + 0x28) = fVar11;
        fVar11 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x144) = *(float *)((int)puVar13 + 0x144) * fVar8;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar11;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar11 * fVar8;
        do {
          *(float *)((int)lVar22 + 0x140) = *(float *)((int)lVar22 + 0x130) * fVar11 * fVar11;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar11 * fVar11;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0xf0;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar11 = *pfVar27;
          fVar8 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x140) = *(float *)((int)lVar22 + 0x140) * fVar11;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar14 + 0x140)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar12 + fVar7);
      }
      dVar30 = (double)FastWrapRot((float)dVar36,(float)(dVar30 * 0.01745329238474369));
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      fVar11 = (float)(dVar30 + 1.570796251296997);
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar30 = -0.0001980741071747616;
      fVar12 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar12 = fVar11;
      }
      fVar8 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar12 < 0.0) {
        fVar8 = fVar12;
      }
      dVar35 = 2.601886990305502e-06;
      fVar7 = fVar8 * fVar8;
      fVar11 = fVar7 * fVar7 * fVar8;
      fVar12 = fVar7 * fVar11;
      *(float *)(puVar13 + 0x16) =
           DAT_007aca08 * g_FrameTime *
           (fVar7 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar32 = ABS((double)*pfVar10);
      dVar31 = ABS((double)pfVar10[1]);
      *(float *)(puVar13 + 0x1b) = (float)(dVar32 - dVar31);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar42 = dVar32;
      if ((double)*(float *)(puVar13 + 0x1b) - dVar45 < 0.0) {
        dVar42 = dVar31;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar13 + 0x1b) - dVar45 < 0.0) {
        dVar31 = dVar32;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar32 = dVar45;
      if (dVar45 < dVar42) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0x110;
        lVar28 = uVar18 - 0x100;
        lVar29 = 2;
        fVar8 = (float)(dVar31 - dVar42) / (float)(dVar31 + dVar42);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 300) = fVar8;
        *(float *)((int)puVar13 + 0x124) = fVar8;
        *(float *)(puVar13 + 0x25) = fVar8;
        *(float *)(puVar13 + 0x24) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x124) = *(float *)((int)puVar13 + 0x124) * fVar7;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar8;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x120) = *(float *)((int)lVar22 + 0x110) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x110;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x120) = *(float *)((int)lVar22 + 0x120) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar31 = dVar45;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar14 + 0x120)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar32 = (double)((float)(dVar31 + dVar46) * fVar11 + fVar12);
      }
      dVar31 = (double)FastWrapRot((float)dVar32,(float)dVar48);
      fVar8 = DAT_007aca0c;
      fVar12 = DAT_007aca08;
      fVar11 = g_FrameTime;
      dVar48 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar48 = dVar31;
      }
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar48 < 0.0) {
        dVar42 = dVar48;
      }
      dVar31 = (double)(float)(dVar42 * dVar42);
      dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar42));
      dVar48 = (double)(fVar8 * fVar11);
      dVar32 = (double)(float)(dVar31 * dVar33);
      *(float *)((int)puVar13 + 0xb4) =
           fVar12 * fVar11 *
           (float)((double)(float)(dVar31 * dVar32) * dVar35 +
                  (double)(float)(dVar32 * dVar30 +
                                 (double)(float)(dVar33 * dVar36 +
                                                (double)(float)((double)(float)(dVar31 * dVar42) *
                                                                dVar37 + dVar42))));
      dVar41 = (double)MB_randRangeFloat
                                 ((float)(dVar48 * dVar44),(float)(dVar48 * dVar41));
      *(float *)(puVar13 + 0x17) = (float)dVar41;
      uVar17 = DAT_007ac9f4;
      uVar16 = DAT_007ac9f0;
      dVar48 = 2.0;
      dVar41 = (double)MB_randRangeFloat(DAT_00fae860,DAT_00fae860 * 2.0);
      uVar19 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar44 = 1.2000000476837158;
      dVar41 = (double)MB_randRangeFloat(DAT_007aca00,DAT_007aca00 * 1.2);
      uVar20 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)MB_randRangeFloat
                                 (DAT_007aca04,(float)((double)DAT_007aca04 * dVar44));
      uVar21 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      SpawnPart_2
                (uVar18 - 0x1a0,uVar18 - 400,uVar18 - 0x180,uVar16,uVar17,uVar19,uVar20,uVar21);
      uVar16 = DAT_007aca48;
      iVar24 = iVar24 + 1;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      fVar6 = (moby->pos).w;
    } while (iVar24 < 2);
    iVar24 = 0;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_007aca44;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar16;
    do {
      *(f32 *)(puVar13 + 0x18) = fVar3;
      *(f32 *)((int)puVar13 + 0xc4) = fVar4;
      *(f32 *)(puVar13 + 0x19) = fVar5;
      *(f32 *)((int)puVar13 + 0xcc) = fVar6;
      dVar42 = -0.10000000149011612;
      dVar31 = 0.10000000149011612;
      dVar41 = (double)MB_randRangeFloat(-0.1,0.1);
      *(float *)(puVar13 + 0x18) = (float)((double)*(float *)(puVar13 + 0x18) + dVar41);
      dVar41 = (double)MB_randRangeFloat((float)dVar42,(float)dVar31);
      *(float *)((int)puVar13 + 0xc4) = (float)((double)*(float *)((int)puVar13 + 0xc4) + dVar41);
      dVar41 = (double)MB_randRangeFloat((float)dVar42,(float)dVar31);
      fVar12 = DAT_007aca38;
      fVar11 = -DAT_007aca38;
      *(float *)(puVar13 + 0x19) = (float)((double)*(float *)(puVar13 + 0x19) + dVar41);
      MB_randRangeFloat(fVar11,fVar12);
      *(undefined4 *)((int)puVar13 + 0xac) = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      *(undefined4 *)((int)puVar13 + 0xa4) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      dVar34 = 0.699999988079071;
      dVar33 = 1.5;
      dVar41 = (double)MB_randRangeFloat
                                 (DAT_007aca24 * g_FrameTime * 0.7,
                                  DAT_007aca24 * g_FrameTime * 1.5);
      *(float *)(puVar13 + 0x15) = (float)dVar41;
      dVar42 = (double)MB_randRangeFloat(-DAT_007aca34,DAT_007aca34);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar32 = ABS((double)*pfVar10);
      dVar41 = ABS((double)pfVar10[1]);
      dVar43 = (double)(float)(dVar42 * dVar47);
      *(float *)((int)puVar13 + 0xd4) = (float)(dVar32 - dVar41);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar31 = dVar32;
      if ((double)*(float *)((int)puVar13 + 0xd4) - dVar45 < 0.0) {
        dVar31 = dVar41;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)((int)puVar13 + 0xd4) - dVar45 < 0.0) {
        dVar41 = dVar32;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar32 = dVar45;
      if (dVar45 < dVar31) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0x130;
        lVar28 = uVar18 - 0x120;
        lVar29 = 2;
        fVar8 = (float)(dVar41 - dVar31) / (float)(dVar41 + dVar31);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x10c) = fVar8;
        *(float *)((int)puVar13 + 0x104) = fVar8;
        *(float *)(puVar13 + 0x21) = fVar8;
        *(float *)(puVar13 + 0x20) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar7;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar8;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x100) = *(float *)((int)lVar22 + 0xf0) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x130;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x100) = *(float *)((int)lVar22 + 0x100) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar41 = dVar45;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0x100)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar32 = (double)((float)(dVar41 + dVar46) * fVar11 + fVar12);
      }
      dVar41 = (double)FastWrapRot((float)dVar32,(float)(dVar42 * dVar47));
      dVar31 = (double)(float)(dVar41 + dVar40);
      dVar41 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar41 = dVar31;
      }
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar41 < 0.0) {
        dVar42 = dVar41;
      }
      dVar41 = (double)(float)(dVar42 * dVar42);
      dVar32 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar42));
      dVar31 = (double)(float)(dVar41 * dVar32);
      *(float *)(puVar13 + 0x16) =
           DAT_007aca28 * g_FrameTime *
           (float)((double)(float)(dVar41 * dVar31) * dVar35 +
                  (double)(float)(dVar31 * dVar30 +
                                 (double)(float)(dVar32 * dVar36 +
                                                (double)(float)((double)(float)(dVar41 * dVar42) *
                                                                dVar37 + dVar42))));
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar42 = ABS((double)*pfVar10);
      dVar41 = ABS((double)pfVar10[1]);
      *(float *)(puVar13 + 0x1a) = (float)(dVar42 - dVar41);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar31 = dVar42;
      if ((double)*(float *)(puVar13 + 0x1a) - dVar45 < 0.0) {
        dVar31 = dVar41;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar13 + 0x1a) - dVar45 < 0.0) {
        dVar41 = dVar42;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar42 = dVar45;
      if (dVar45 < dVar31) {
        lVar22 = uVar18 - 0x220;
        lVar28 = uVar18 - 0x140;
        lVar26 = uVar18 - 0x150;
        lVar29 = 2;
        fVar8 = (float)(dVar41 - dVar31) / (float)(dVar41 + dVar31);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0xec) = fVar8;
        *(float *)((int)puVar13 + 0xe4) = fVar8;
        *(float *)(puVar13 + 0x1d) = fVar8;
        *(float *)(puVar13 + 0x1c) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar7;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar8;
        *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0xe0) = *(float *)((int)lVar22 + 0xd0) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x150;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0xe0) = *(float *)((int)lVar22 + 0xe0) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar41 = dVar45;
        do {
          iVar14 = (int)lVar22;
          iVar15 = (int)lVar28;
          lVar22 = lVar22 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0xe0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar42 = (double)((float)(dVar41 + dVar46) * fVar11 + fVar12);
      }
      dVar31 = (double)FastWrapRot((float)dVar42,(float)dVar43);
      dVar41 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar41 = dVar31;
      }
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar41 < 0.0) {
        dVar42 = dVar41;
      }
      fVar11 = DAT_007aca28 * g_FrameTime;
      fVar12 = DAT_007aca2c * g_FrameTime;
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar41 = (double)(float)(dVar42 * dVar42);
      dVar31 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar42));
      dVar32 = (double)(float)(dVar41 * dVar31);
      *(float *)((int)puVar13 + 0xb4) =
           fVar11 * (float)((double)(float)(dVar41 * dVar32) * dVar35 +
                           (double)(float)(dVar32 * dVar30 +
                                          (double)(float)(dVar31 * dVar36 +
                                                         (double)(float)((double)(float)(dVar41 * 
                                                  dVar42) * dVar37 + dVar42))));
      dVar41 = (double)MB_randRangeFloat
                                 ((float)((double)fVar12 * dVar34),(float)((double)fVar12 * dVar33))
      ;
      *(float *)(puVar13 + 0x17) = (float)dVar41;
      uVar17 = DAT_007ac9fc;
      uVar16 = DAT_007ac9f8;
      dVar41 = (double)MB_randRangeFloat
                                 (DAT_00fae864,(float)((double)DAT_00fae864 * dVar48));
      uVar19 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)MB_randRangeFloat
                                 (DAT_007aca18,(float)((double)DAT_007aca18 * dVar44));
      uVar20 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)MB_randRangeFloat
                                 (DAT_007aca1c,(float)((double)DAT_007aca1c * dVar44));
      uVar21 = FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      SpawnPart_2
                (uVar18 - 0x170,uVar18 - 400,uVar18 - 0x180,uVar16,uVar17,uVar19,uVar20,uVar21);
      iVar24 = iVar24 + 1;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      fVar6 = (moby->pos).w;
    } while (iVar24 < 2);
  }
  dVar30 = (double)FastWrapRot((moby->rotation).x,pfVar10[4]);
  (moby->rotation).x = (float)dVar30;
  dVar30 = (double)FastWrapRot((moby->rotation).y,pfVar10[5]);
  (moby->rotation).y = (float)dVar30;
  (moby->pos).x = (moby->pos).x + *pfVar10;
  (moby->pos).y = (moby->pos).y + pfVar10[1];
  (moby->pos).z = (moby->pos).z + pfVar10[2];
  pfVar10[2] = -(g_FrameTimeSq * 14.6 - pfVar10[2]);
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
    DeleteMoby(moby);
  }
  else {
    uVar9 = *(ushort *)((int)pfVar10 + 0x1a);
    uVar23 = (uint)(short)uVar9;
    if ((int)*(short *)(pfVar10 + 6) <
        (int)(((int)uVar23 >> 2) + (uint)((short)uVar9 < 0 && (uVar9 & 3) != 0))) {
      dVar30 = (double)FastIntToDouble
                                 (((int)uVar23 >> 2) + (uint)((int)uVar23 < 0 && (uVar23 & 3) != 0))
      ;
      dVar45 = (double)FastIntToDouble(*(undefined2 *)(pfVar10 + 6));
      moby->scale = (float)((double)(float)((double)pfVar10[7] * dVar45) / dVar30);
    }
    iVar24 = FastDecTimerS16(pfVar10 + 6);
    if (iVar24 == 0) {
      if ((moby->setByGroup == '\x01') &&
         (iVar24 = CollLine(uVar18 - 0x1b0,(longlong)(int)moby + 0x10,2,g_heroMobyPtr,0),
         iVar24 != 0)) {
        M1634_002a5988((longlong)(int)moby);
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x02a69ec (0x14 bytes)
void M1634_002a69ec(void)

{
  DAT_007acab4 = 0x10000;
  return;
}



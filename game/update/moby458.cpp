// game/update/moby458.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x20050-0x213b8
#include "game/update/moby458.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0020050 (0x14 bytes)
void SECTION_HEADER_MOBY458(void)

{
  DAT_0071d180 = 0x10000;
  return;
}


// 0x00200b0 (0x978 bytes)
// inlined: FastAtan2 @0x20288, FastAtan2 @0x20404
ulonglong M458_SpawnRocket
                    (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulonglong param_5,ulonglong param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  GPiece<16> auVar10;
  ulonglong *puVar11;
  int iVar12;
  undefined4 uVar13;
  MobyInstance *pMVar20;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar21;
  ulonglong uVar19;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar27;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f14;
  double dVar37;
  ulonglong in_f15;
  double dVar38;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar39;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar40;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  double dVar52;
  GPiece<16> auVar53;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar15 = uVar19 - 0x250;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar19;
  puVar11[0x4c] = in_LR;
  puVar11[0x38] = in_f14;
  puVar11[0x39] = in_f15;
  puVar11[0x3a] = in_f16;
  puVar11[0x3b] = in_f17;
  puVar11[0x3c] = in_f18;
  puVar11[0x3d] = in_f19;
  puVar11[0x3e] = in_f20;
  puVar11[0x3f] = in_f21;
  puVar11[0x40] = in_f22;
  puVar11[0x41] = in_f23;
  puVar11[0x42] = in_f24;
  puVar11[0x43] = in_f25;
  puVar11[0x44] = in_f26;
  puVar11[0x45] = in_f27;
  puVar11[0x46] = in_f28;
  puVar11[0x47] = in_f29;
  puVar11[0x48] = in_f30;
  puVar11[0x49] = in_f31;
  puVar11[0x37] = unaff_r31;
  puVar11[0x32] = unaff_r26;
  puVar11[0x35] = unaff_r29;
  puVar11[0x34] = unaff_r28;
  puVar11[0x36] = unaff_r30;
  puVar11[0x33] = unaff_r27;
  puVar11[0x31] = unaff_r25;
  puVar11[0x30] = unaff_r24;
  puVar11[0x2f] = unaff_r23;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar20 = CreateMoby(ROCKET_01CA);
  dVar50 = (double)fStack00000040;
  dVar48 = (double)fStack00000048;
  dVar45 = (double)fStack00000044;
  puVar11[0x27] = (longlong)(int)pMVar20;
  dVar44 = (double)fStack0000004c;
  if (pMVar20 != (MobyInstance *)0x0) {
    uVar26 = puVar11[0x27];
    pMVar20 = (MobyInstance *)uVar26;
    pvVar9 = pMVar20->pVar;
    *(undefined4 *)((int)pvVar9 + 0x14) = param_1;
    *(undefined4 *)((int)pvVar9 + 0x10) = param_7;
    puVar11[0x26] = ZEXT48(pvVar9);
    SetColorOfMoby(pMVar20,0xa0,0xa0,0xa0);
    pMVar20->updateDistance = -1;
    pMVar20->drawDistance = 0xff;
    pMVar20->enabled = '\x01';
    dVar39 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    fVar5 = ABS(fStack00000058);
    (pMVar20->rotation).x = 0.0;
    fStack0000005c = (float)param_6;
    fVar6 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    fVar4 = ABS(fVar6);
    *(float *)((int)puVar11 + 0xe4) = fVar6;
    *(float *)(puVar11 + 0x1d) = fVar4 - fVar5;
    uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar6 = ABS(*(float *)((int)puVar11 + 0xe4));
    if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    dVar40 = dVar39;
    if (0.0 < fVar6) {
      lVar14 = uVar19 - 0x240;
      lVar22 = uVar19 - 0x144;
      lVar24 = uVar19 - 0x134;
      lVar28 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x23) = fVar6;
      *(float *)(puVar11 + 0x22) = fVar6;
      *(float *)((int)puVar11 + 0x114) = fVar6;
      *(float *)((int)puVar11 + 0x10c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar5;
      *(float *)((int)puVar11 + 0x114) = *(float *)((int)puVar11 + 0x114) * fVar6;
      *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0xfc) * fVar6 * fVar6;
        iVar27 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar24 = uVar19 - 0x144;
      pfVar25 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0x10c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar14 = lVar15;
      do {
        iVar27 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar27 + 0x10c)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar8 + fVar3);
    }
    fVar4 = ABS(fStack00000050);
    fVar5 = ABS(fStack00000054);
    (pMVar20->rotation).y = (float)-dVar40;
    *(float *)(puVar11 + 0x1c) = fVar4 - fVar5;
    uVar23 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar11 + 0x1c) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    if (*(float *)(puVar11 + 0x1c) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar40 = dVar39;
    if (0.0 < fVar6) {
      lVar14 = uVar19 - 0x240;
      lVar24 = uVar19 - 0x154;
      lVar22 = uVar19 - 0x164;
      lVar28 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1f) = fVar6;
      *(float *)(puVar11 + 0x1e) = fVar6;
      *(float *)((int)puVar11 + 0xf4) = fVar6;
      *(float *)((int)puVar11 + 0xec) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1e) = *(float *)(puVar11 + 0x1e) * fVar5;
      *(float *)((int)puVar11 + 0xf4) = *(float *)((int)puVar11 + 0xf4) * fVar6;
      *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xdc) * fVar6 * fVar6;
        iVar27 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar24 = uVar19 - 0x164;
      pfVar25 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xec) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar14 = 2;
      do {
        iVar27 = (int)lVar15;
        iVar12 = (int)lVar24;
        lVar15 = lVar15 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar27 + 0xec)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
    }
    uVar23 = puVar11[0x26];
    (pMVar20->rotation).z = (float)dVar40;
    (pMVar20->pos).x = (float)dVar50;
    (pMVar20->pos).y = (float)dVar45;
    (pMVar20->pos).z = (float)dVar48;
    (pMVar20->pos).w = (float)dVar44;
    pfVar25 = (float *)uVar23;
    *pfVar25 = fStack00000050;
    pfVar25[1] = fStack00000054;
    pfVar25[2] = fStack00000058;
    pfVar25[3] = fStack0000005c;
    pfVar25[7] = (float)(((uint)(ZERO_MASK((worldUpdateTime & 1))) & 0xfffffffe) +
                        1);
    FastEulerToMtx1(uVar19 - 0x1b0,uVar26 + 0x40);
    auVar10 = ZEXT416(0);
    auVar53 = loadVectorLeftIndexed(0xffffffffffffd1ac,0x720000);
    auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
               auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      iVar27 = 0;
      dVar45 = 3.141592502593994;
      dVar48 = -3.141592502593994;
      dVar50 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar41 = -0.0001980741071747616;
      dVar42 = 2.601886990305502e-06;
      fVar5 = 10.5;
      fVar6 = 20.5;
      puVar11[0x2a] = 0x4000000000000000;
      puVar11[0x29] = 0x3ff921fb40000000;
      dVar43 = 1.2000000476837158;
      dVar44 = 1.5;
      puVar11[0x28] = 0x40d3880000000000;
      do {
        dVar38 = (double)fVar6;
        dVar37 = (double)fVar5;
        *(float *)(puVar11 + 0x2d) = fVar5;
        dVar29 = (double)MB_randRot();
        dVar30 = (double)MB_randRangeFloat
                                   (DAT_0071d1d0,
                                    (float)((double)DAT_0071d1d0 * (double)puVar11[0x2a]));
        fVar6 = *(float *)((int)puVar11 + 0xc4);
        dVar32 = (double)(float)(dVar29 + (double)puVar11[0x29]);
        fVar5 = *(float *)((int)puVar11 + 0xb4);
        fVar4 = *(float *)(puVar11 + 0x18);
        fVar3 = *(float *)(puVar11 + 0x16);
        fVar8 = *(float *)(puVar11 + 0x19);
        fVar7 = *(float *)(puVar11 + 0x17);
        dVar31 = (double)(float)(dVar45 - dVar29);
        if (dVar29 - (double)(float)(dVar45 - dVar29) < 0.0) {
          dVar31 = dVar29;
        }
        dVar51 = (double)g_FrameTime;
        dVar35 = (double)(float)(dVar45 - dVar32);
        if (dVar32 - (double)(float)(dVar45 - dVar32) < 0.0) {
          dVar35 = dVar32;
        }
        dVar34 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar6 * fVar6);
        dVar33 = (double)(float)(dVar48 - dVar29);
        if ((double)(float)(dVar48 - dVar29) - dVar31 < 0.0) {
          dVar33 = dVar31;
        }
        dVar31 = (double)(float)(dVar48 - dVar32);
        if ((double)(float)(dVar48 - dVar32) - dVar35 < 0.0) {
          dVar31 = dVar35;
        }
        dVar35 = (double)(float)(dVar33 * dVar33);
        dVar32 = (double)SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
        dVar36 = (double)(float)(dVar31 * dVar31);
        dVar46 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar31));
        dVar52 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar33));
        dVar49 = (double)(float)(dVar36 * dVar46);
        dVar47 = (double)(float)(dVar35 * dVar52);
        dVar29 = (double)animationSpeed;
        *(undefined4 *)((int)puVar11 + 0x9c) = *(undefined4 *)((int)puVar11 + 0xcc);
        *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)((int)puVar11 + 0xcc);
        uVar13 = DAT_0071d1c8;
        uVar21 = DAT_0071d1c4;
        fVar1 = (float)((double)((float)(dVar30 * dVar51) *
                                (float)((double)(float)(dVar36 * dVar49) * dVar42 +
                                       (double)(float)(dVar49 * dVar41 +
                                                      (double)(float)(dVar46 * dVar40 +
                                                                     (double)(float)((double)(float)
                                                  (dVar36 * dVar31) * dVar50 + dVar31))))) / dVar34)
        ;
        fVar2 = (float)((double)((float)(dVar30 * dVar51) *
                                (float)((double)(float)(dVar35 * dVar47) * dVar42 +
                                       (double)(float)(dVar47 * dVar41 +
                                                      (double)(float)(dVar52 * dVar40 +
                                                                     (double)(float)((double)(float)
                                                  (dVar35 * dVar33) * dVar50 + dVar33))))) / dVar32)
        ;
        *(float *)((int)puVar11 + 0x16c) = (float)dVar38;
        *(undefined4 *)((int)puVar11 + 0x8c) = DAT_0071d1e0;
        *(undefined4 *)((int)puVar11 + 0x9c) = DAT_0071d1e4;
        puVar11[0x2b] = (longlong)(int)(dVar29 * dVar37);
        puVar11[0x2b] = (longlong)(int)(dVar29 * dVar38);
        dVar31 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar31 = (double)(fVar8 * fVar1);
        }
        dVar29 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar29 = (double)(fVar6 * fVar1);
        }
        dVar30 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar30 = (double)(fVar4 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar31 = (double)(fVar8 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar29 = (double)(fVar6 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar30 = (double)(fVar4 * fVar1);
        }
        dVar37 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar37 = (double)(fVar7 * fVar2);
        }
        dVar38 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar38 = (double)(fVar5 * fVar2);
        }
        dVar35 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar35 = (double)(fVar3 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar37 = (double)(fVar7 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar38 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar35 = (double)(fVar3 * fVar2);
        }
        *(float *)(puVar11 + 0x11) = (float)(dVar31 + dVar37);
        *(float *)((int)puVar11 + 0x84) = (float)(dVar29 + dVar38);
        *(float *)(puVar11 + 0x10) = (float)(dVar30 + dVar35);
        *(float *)(puVar11 + 0x12) = (float)(dVar30 + dVar35);
        *(float *)((int)puVar11 + 0x94) = (float)(dVar29 + dVar38);
        *(float *)(puVar11 + 0x13) = (float)(dVar31 + dVar37);
        MB_randRange
                  (*(undefined4 *)((int)puVar11 + 0x15c),*(undefined4 *)((int)puVar11 + 0x15c));
        SpawnPart_21(puVar11[0x28],uVar26 + 0x10,uVar19 - 0x1d0,uVar21,uVar13);
        puVar11[0x2b] = (longlong)DAT_0071d1d4;
        uVar13 = DAT_0071d1c0;
        uVar21 = DAT_0071d1bc;
        dVar31 = (double)MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar43));
        uVar16 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0x2b] = (longlong)DAT_0071d1d8;
        dVar31 = (double)MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar43));
        uVar17 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0x2b] = (longlong)DAT_0071d1dc;
        dVar31 = (double)MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar44));
        uVar18 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0xe] = 0xffffffffffffffff;
        SpawnPart_2
                  (uVar26 + 0x10,uVar19 - 0x1d0,uVar19 - 0x1c0,uVar21,uVar13,uVar16,uVar17,uVar18);
        iVar27 = iVar27 + 1;
        puVar11[0x2b] = (longlong)iVar27;
        fVar5 = *(float *)(puVar11 + 0x2d);
        fVar6 = *(float *)((int)puVar11 + 0x16c);
      } while ((float)(longlong)puVar11[0x2b] < DAT_0071d1ac);
    }
    if (Level == Hoven) {
      puVar11[0x2b] = (longlong)(int)(animationSpeed * 120.5);
      uVar21 = *(undefined4 *)((int)puVar11 + 0x15c);
    }
    else {
      uVar21 = FastDoubleToInt((double)(DAT_0071d1a4 * animationSpeed));
    }
    uVar19 = puVar11[0x27];
    *(undefined4 *)((int)puVar11[0x26] + 0x18) = uVar21;
    UpdateMobyTransform((MobyInstance *)uVar19);
  }
  return puVar11[0x27];
}


// 0x0020a80 (0x8d4 bytes)
/* Moby 458 */

void UpdateMoby_458(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  GPiece<16> auVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  byte in_cr6;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  Vec4 local_120;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  MobyInstance *local_100;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  longlong local_e0;
  
  lVar15 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  fVar6 = (moby->pos).x + *pfVar5;
  (moby->pos).x = fVar6;
  fVar1 = (moby->pos).y + pfVar5[1];
  (moby->pos).y = fVar1;
  fVar2 = (moby->pos).z + pfVar5[2];
  (moby->pos).z = fVar2;
  if ((((fVar1 < 10.0 || fVar6 < 10.0) || (fVar2 < 10.0)) || (500.0 < fVar1 || 500.0 < fVar6)) ||
     (500.0 < fVar2)) {
    DeleteMoby(moby);
  }
  else {
    auVar10 = ZEXT416(0);
    iVar19 = 0;
    auVar27 = loadVectorLeftIndexed(0xffffffffffffd1a8,0x720000);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
               auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      dVar25 = 0.0;
      dVar24 = 1.2000000476837158;
      dVar23 = 1.5;
      do {
        MB_randRot();
        MB_randRangeFloat((float)dVar25,DAT_0071d1cc);
        uVar14 = DAT_0071d1b8;
        uVar13 = DAT_0071d1b4;
        local_e0 = (longlong)DAT_0071d1d4;
        dVar20 = (double)MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar24));
        uVar16 = FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        local_e0 = (longlong)DAT_0071d1d8;
        dVar20 = (double)MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar24));
        uVar17 = FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        local_e0 = (longlong)DAT_0071d1dc;
        dVar20 = (double)MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar23));
        uVar18 = FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        SpawnPart_2(local_150,local_140,local_130,uVar13,uVar14,uVar16,uVar17,uVar18);
        iVar19 = iVar19 + 1;
        local_e0 = (longlong)iVar19;
      } while ((float)local_e0 < DAT_0071d1a8);
    }
    local_e0 = (longlong)(int)pfVar5[7];
    dVar23 = (double)FastWrapRot
                               ((moby->rotation).x,
                                DAT_0071d1b0 * 0.017453292 * g_FrameTime * (float)local_e0
                               );
    fVar6 = pfVar5[4];
    (moby->rotation).x = (float)dVar23;
    if (fVar6 != 0.0) {
      if ((*(char *)((int)fVar6 + 0x20) == -3 || *(char *)((int)fVar6 + 0x20) == -2) ||
         (*(short *)((int)fVar6 + 0xa6) != 0x1b3)) {
        pfVar5[4] = 0.0;
      }
      else {
        fVar2 = (moby->pos).y;
        fVar1 = fVar2 - *(float *)((int)fVar6 + 0x14);
        fVar3 = (moby->pos).x;
        dVar25 = (double)*pfVar5;
        fVar12 = fVar3 - *(float *)((int)fVar6 + 0x10);
        fVar4 = (moby->pos).z;
        fVar11 = fVar4 - *(float *)((int)fVar6 + 0x18);
        iVar19 = *(int *)((int)fVar6 + 0x78);
        dVar26 = (double)SQRT(pfVar5[2] * pfVar5[2] +
                              (float)(dVar25 * dVar25 + (double)(pfVar5[1] * pfVar5[1])));
        dVar20 = 0.0;
        local_120.w = *(float *)(iVar19 + 0x2c);
        fVar1 = (float)((double)SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar1 * fVar1) / dVar26);
        fVar2 = (*(float *)(iVar19 + 0x24) * fVar1 + *(float *)((int)fVar6 + 0x14)) - fVar2;
        fVar3 = (*(float *)(iVar19 + 0x20) * fVar1 + *(float *)((int)fVar6 + 0x10)) - fVar3;
        fVar4 = (*(float *)(iVar19 + 0x28) * fVar1 + *(float *)((int)fVar6 + 0x18)) - fVar4;
        dVar24 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar6 = (float)(dVar26 / dVar24);
        dVar23 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar23 = (double)(fVar3 * fVar6);
        }
        dVar21 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar21 = (double)(fVar2 * fVar6);
        }
        dVar22 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar22 = (double)(fVar4 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar23 = (double)(fVar3 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar21 = (double)(fVar2 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar22 = (double)(fVar4 * fVar6);
        }
        local_120.x = (float)(dVar23 - dVar25);
        local_120.y = (float)(dVar21 - (double)pfVar5[1]);
        local_120.z = (float)(dVar22 - (double)pfVar5[2]);
        ClampVec3Magnitude((double)(g_FrameTime * 3.7),&local_120);
        fVar1 = *pfVar5 + local_120.x;
        *pfVar5 = fVar1;
        fVar2 = pfVar5[1] + local_120.y;
        pfVar5[1] = fVar2;
        fVar3 = pfVar5[2] + local_120.z;
        dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        fVar6 = (float)(dVar26 / dVar24);
        dVar23 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar23 = (double)(fVar1 * fVar6);
        }
        dVar25 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar25 = (double)(fVar2 * fVar6);
        }
        dVar26 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar26 = (double)(fVar3 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar23 = (double)(fVar1 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar25 = (double)(fVar2 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar26 = (double)(fVar3 * fVar6);
        }
        *pfVar5 = (float)dVar23;
        pfVar5[1] = (float)dVar25;
        pfVar5[2] = (float)dVar26;
      }
    }
    local_fc = 0x50001;
    dVar23 = 2.0;
    local_f4 = 0x40000000;
    local_110 = *pfVar5;
    local_10c = pfVar5[1];
    local_f0 = 1;
    local_108 = pfVar5[2];
    local_104 = pfVar5[3];
    local_100 = moby;
    iVar19 = FastDecTimerS32(pfVar5 + 6);
    if (iVar19 == 0) {
      iVar19 = CollLine(local_160,lVar15 + 0x10,0,lVar15,&local_110);
      fVar6 = g_CollOutput.ip.x;
      if (iVar19 != 0) {
        dVar24 = (double)g_CollOutput.ip.x;
        uVar7 = (int)g_CollOutput.ip.x >> 0x1f;
        (moby->pos).x = g_CollOutput.ip.x;
        fVar1 = g_CollOutput.ip.y;
        dVar25 = (double)g_CollOutput.ip.y;
        uVar8 = (int)g_CollOutput.ip.y >> 0x1f;
        (moby->pos).y = g_CollOutput.ip.y;
        fVar2 = g_CollOutput.ip.z;
        dVar20 = (double)g_CollOutput.ip.z;
        uVar9 = (int)g_CollOutput.ip.z >> 0x1f;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        if ((0x41700000 < (int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) &&
             0x41700000 < (int)((uVar8 >> 1 ^ (uint)fVar1) - uVar8)) &&
           (0x41700000 < (int)((uVar9 >> 1 ^ (uint)fVar2) - uVar9))) {
          dVar26 = 24.0;
          if ((double)(float)(dVar24 - dVar23) - 24.0 < 0.0) {
            dVar26 = (double)(float)(dVar24 - dVar23);
          }
          if ((double)(float)(dVar25 - dVar23) - dVar26 < 0.0) {
            dVar26 = (double)(float)(dVar25 - dVar23);
          }
          if ((double)(float)(dVar20 - dVar23) - dVar26 < 0.0) {
            dVar26 = (double)(float)(dVar20 - dVar23);
          }
          MB_genericExplosion
                    (0x4008000000000000,0x4008000000000000,0x4014000000000000,0x4008000000000000,
                     0x4022000000000000,0x3ff0000000000000,dVar26,lVar15,pfVar5,lVar15 + 0x10,
                     0xffffffffffffffff,1,0,10,0x14);
        }
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x0021358 (0x8 bytes)
undefined8 STUB_00021358(...)

{
  return 0;
}


// 0x0021360 (0x8 bytes)
undefined8 STUB_00021360(...)

{
  return 0;
}


// 0x0021368 (0x8 bytes)
undefined8 STUB_00021368(...)

{
  return 0;
}


// 0x0021370 (0x8 bytes)
undefined8 STUB_00021370(...)

{
  return 0;
}


// 0x0021378 (0x8 bytes)
undefined8 STUB_00021378(...)

{
  return 0;
}


// 0x0021380 (0x8 bytes)
undefined8 STUB_00021380(...)

{
  return 0;
}


// 0x0021388 (0x8 bytes)
undefined8 STUB_00021388(...)

{
  return 0;
}


// 0x0021390 (0x8 bytes)
undefined8 STUB_00021390(...)

{
  return 0;
}


// 0x0021398 (0x8 bytes)
undefined8 STUB_00021398(...)

{
  return 0;
}


// 0x00213a0 (0x8 bytes)
undefined8 STUB_000213a0(...)

{
  return 0;
}


// 0x00213a8 (0x8 bytes)
undefined8 STUB_000213a8(...)

{
  return 0;
}


// 0x00213b0 (0x8 bytes)
undefined8 STUB_000213b0(...)

{
  return 0;
}



// game/update/moby1475.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0xeb4fc-0xec2d0
#include "game/update/moby1475.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1034.h"
#include "game/update/moby121.h"
#include "idol/fastfunc.h"
#include "sdk/mUnk4.h"

// 0x00eb4fc (0x14 bytes)
void SECTION_HEADER_MOBY1475(void)

{
  DAT_00728ee0 = 0x10000;
  return;
}


// 0x00eb520 (0x130 bytes)
void Spawn_Moby1475_KaleboRocket
               (double param_1,double param_2,undefined4 param_3,f32 *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  float fVar3;
  MobyInstance *pMVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  pMVar4 = CreateMoby(ROCKET_05C3);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->rotation).z = (float)param_1;
    (pMVar4->rotation).y = (float)param_2;
    *puVar1 = param_3;
    (pMVar4->pos).x = *param_4;
    (pMVar4->pos).y = param_4[1];
    (pMVar4->pos).z = param_4[2];
    (pMVar4->pos).w = param_4[3];
    puVar1[5] = 0;
    puVar1[6] = 0;
    fVar3 = g_FrameTime * 30.0;
    puVar1[2] = param_5;
    *(undefined2 *)((int)puVar1 + 6) = 0;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    puVar1[4] = fVar3 * 0.7;
    pMVar4->scale = pMVar4->scale * 2.3;
    auVar5 = loadVectorLeftIndexed(0xc,0xeb510);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = vectorSplatHalfWord(auVar5,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,4,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 1) = uVar2;
  }
  return;
}


// 0x00eb6c0 (0xb88 bytes)
// inlined: FastAtan2 @0xeb888, FastAtan2 @0xeba30, FastRSqrt @0xec004
// strings: 000eb65c: '?333' (raw)

/* Moby 1475 */

void UpdateMoby_1475_KaleboRace_Rocket(MobyInstance *moby)

{
  byte bVar1;
  undefined1 uVar2;
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
  f32 fVar13;
  float fVar14;
  short sVar15;
  MOBY_OCLASSES MVar16;
  int *piVar17;
  ulonglong *puVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
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
  ulonglong in_f28;
  undefined8 uVar34;
  ulonglong in_f29;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  double dVar39;
  ulonglong in_f31;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x200;
  puVar18 = (ulonglong *)lVar23;
  *puVar18 = uVar20;
  puVar18[0x42] = in_LR;
  puVar18[0x3c] = in_f28;
  puVar18[0x3d] = in_f29;
  puVar18[0x3e] = in_f30;
  puVar18[0x3f] = in_f31;
  puVar18[0x3b] = unaff_r31;
  bVar1 = moby->state;
  puVar18[0x3a] = unaff_r30;
  piVar17 = (int *)moby->pVar;
  puVar18[0x39] = unaff_r29;
  puVar18[0x38] = unaff_r28;
  puVar18[0x37] = unaff_r27;
  puVar18[0x36] = unaff_r26;
  puVar18[0x35] = unaff_r25;
  fVar3 = g_FrameTimeSq;
  if (bVar1 == 0) {
    *(short *)((int)piVar17 + 6) = *(short *)((int)piVar17 + 6) + 1;
    Delt(g_FrameTime * 30.0,fVar3 * 70.0,(float *)(piVar17 + 4));
    fVar12 = g_FrameTime;
    iVar24 = piVar17[2];
    fVar3 = (moby->pos).z;
    if ((iVar24 != 0) &&
       (sVar15 = *(short *)((int)piVar17 + 6), puVar18[0x33] = (longlong)(int)(animationSpeed * 7.5)
       , *(int *)((int)puVar18 + 0x19c) < (int)sVar15)) {
      fVar4 = *(float *)(iVar24 + 0x10);
      fVar5 = *(float *)(iVar24 + 0x14);
      fVar6 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar14 = fVar4 - fVar6;
      fVar8 = *(float *)(iVar24 + 0x18);
      fVar10 = fVar5 - fVar7;
      fVar9 = ABS(fVar14);
      fVar11 = ABS(fVar10);
      *(float *)((int)puVar18 + 0x14c) = fVar14;
      *(float *)(puVar18 + 0x2a) = fVar10;
      *(float *)((int)puVar18 + 0x154) = fVar9 - fVar11;
      dVar33 = 0.0;
      uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x14c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x154) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar18 + 0x2a) >> 0x1d) & 4;
      fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar10 = ABS(*(float *)((int)puVar18 + 0x14c));
      if (*(float *)((int)puVar18 + 0x154) - 0.0 < 0.0) {
        fVar10 = fVar11;
      }
      fVar11 = ABS(*(float *)(puVar18 + 0x2a));
      if (*(float *)((int)puVar18 + 0x154) - 0.0 < 0.0) {
        fVar11 = fVar9;
      }
      fVar9 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar36 = dVar33;
      if (0.0 < fVar10) {
        lVar22 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0x88;
        lVar27 = uVar20 - 0x78;
        lVar29 = 2;
        fVar10 = (fVar11 - fVar10) / (fVar11 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar18 + 0x184) = fVar10;
        *(float *)((int)puVar18 + 0x17c) = fVar10;
        *(float *)(puVar18 + 0x30) = fVar10;
        *(float *)(puVar18 + 0x2f) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar18 + 0x17c) = *(float *)((int)puVar18 + 0x17c) * fVar11;
        *(float *)(puVar18 + 0x30) = *(float *)(puVar18 + 0x30) * fVar10;
        *(float *)((int)puVar18 + 0x184) = *(float *)((int)puVar18 + 0x184) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x168) * fVar10 * fVar10;
          iVar24 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar10 * fVar10;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0x88;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar26 = lVar27;
        do {
          fVar10 = *pfVar25;
          fVar11 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x178) = *(float *)((int)lVar22 + 0x178) * fVar10;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar11;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar23;
        do {
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar19 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0x178)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar14 + fVar9);
      }
      fVar7 = fVar7 - fVar5;
      fVar6 = fVar6 - fVar4;
      fVar3 = (fVar8 + 0.7) - fVar3;
      fVar4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
      *(float *)((int)puVar18 + 0x144) = fVar3;
      fVar3 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar18 + 0x28) = fVar4;
      *(float *)(puVar18 + 0x29) = fVar5 - fVar3;
      uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar18 + 0x29) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x144) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar18 + 0x28));
      if (*(float *)(puVar18 + 0x29) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar6 = ABS(*(float *)((int)puVar18 + 0x144));
      if (*(float *)(puVar18 + 0x29) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar22 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0xa8;
        lVar27 = uVar20 - 0x98;
        lVar29 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar18 + 0x164) = fVar4;
        *(float *)((int)puVar18 + 0x15c) = fVar4;
        *(float *)(puVar18 + 0x2c) = fVar4;
        *(float *)(puVar18 + 0x2b) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar18 + 0x15c) = *(float *)((int)puVar18 + 0x15c) * fVar6;
        *(float *)(puVar18 + 0x2c) = *(float *)(puVar18 + 0x2c) * fVar4;
        *(float *)((int)puVar18 + 0x164) = *(float *)((int)puVar18 + 0x164) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x148) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xa8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar26 = lVar27;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x158) = *(float *)((int)lVar22 + 0x158) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar22 = 2;
        do {
          iVar24 = (int)lVar23;
          iVar19 = (int)lVar27;
          lVar23 = lVar23 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar24 + 0x158)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar5);
      }
      dVar33 = -dVar33;
      dVar38 = 9.599310874938965;
      uVar35 = 0x3f9eb851e0000000;
      uVar34 = 0x3fd3333340000000;
      AccelDeltAng
                (dVar36,0x3f9eb851e0000000,0x3fd3333340000000,(double)(fVar12 * 9.599311),
                 lVar21 + 0x48,&DAT_000eb650,piVar17 + 5);
      AccelDeltAng
                (dVar33,uVar35,uVar34,(double)(float)((double)g_FrameTime * dVar38),
                 lVar21 + 0x44,&DAT_00720000,piVar17 + 6);
    }
    MB_SphericalToVector
              ((float)piVar17[4],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar18 + 0x18));
    dVar38 = 0.0;
    *(undefined4 *)(puVar18 + 0x1e) = 0;
    *(undefined4 *)((int)puVar18 + 0xf4) = 0;
    *(undefined4 *)(puVar18 + 0x1f) = 0;
    *(undefined4 *)((int)puVar18 + 0xfc) = 0;
    dVar36 = -1.0;
    dVar39 = 1.0;
    dVar33 = (double)MB_randRangeFloat(-1.0,1.0);
    *(float *)(puVar18 + 0x1e) = (float)dVar33;
    dVar33 = (double)MB_randRangeFloat((float)dVar36,(float)dVar39);
    *(float *)((int)puVar18 + 0xf4) = (float)dVar33;
    dVar33 = (double)MB_randRangeFloat((float)dVar36,(float)dVar39);
    *(float *)(puVar18 + 0x1f) = (float)dVar33;
    dVar37 = 0.10000000149011612;
    dVar33 = (double)MB_randRangeFloat(0.1,0.2);
    fVar6 = g_FrameTime;
    fVar12 = *(float *)((int)puVar18 + 0xf4);
    fVar4 = *(float *)(puVar18 + 0x1e);
    fVar5 = *(float *)(puVar18 + 0x1f);
    dVar32 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    dVar36 = (double)g_FrameTime;
    fVar3 = (float)((double)(float)(dVar33 * dVar36) / dVar32);
    dVar33 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar30 = (double)(fVar12 * fVar3);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar32 < 0.0) {
      dVar31 = (double)(fVar5 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar30 = (double)(fVar12 * fVar3);
    }
    if (dVar32 - dVar38 < 0.0) {
      dVar31 = (double)(fVar5 * fVar3);
    }
    *(float *)(puVar18 + 0x1e) = (float)dVar33;
    *(float *)((int)puVar18 + 0xf4) = (float)dVar30;
    *(float *)(puVar18 + 0x1f) = (float)dVar31;
    dVar33 = (double)MB_randRangeFloat((float)(dVar36 * dVar37),fVar6);
    fVar12 = *(float *)((int)puVar18 + 0xc4);
    fVar4 = *(float *)(puVar18 + 0x18);
    fVar5 = *(float *)(puVar18 + 0x19);
    *(undefined4 *)((int)puVar18 + 0xec) = *(undefined4 *)((int)puVar18 + 0xcc);
    dVar36 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    fVar3 = (float)(-dVar33 / dVar36);
    dVar33 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    dVar32 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar33 = (double)(fVar4 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    *(float *)(puVar18 + 0x1c) = (float)dVar33;
    *(float *)((int)puVar18 + 0xe4) = (float)dVar32;
    *(float *)(puVar18 + 0x1d) = (float)dVar37;
    *(float *)(puVar18 + 0x1e) = (float)((double)*(float *)(puVar18 + 0x1e) + dVar33);
    *(float *)((int)puVar18 + 0xf4) = (float)((double)*(float *)((int)puVar18 + 0xf4) + dVar32);
    *(float *)(puVar18 + 0x1f) = (float)((double)*(float *)(puVar18 + 0x1f) + dVar37);
    dVar33 = (double)MB_randRangeFloat((float)dVar38,(float)dVar39);
    fVar12 = *(float *)((int)puVar18 + 0xc4);
    fVar4 = *(float *)(puVar18 + 0x18);
    fVar5 = *(float *)(puVar18 + 0x19);
    fVar3 = (float)piVar17[4];
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar36 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12);
    *(undefined4 *)((int)puVar18 + 0xec) = *(undefined4 *)((int)puVar18 + 0xcc);
    fVar14 = animationSpeed;
    fVar3 = (float)((double)(float)(dVar33 * (double)fVar3) / dVar36);
    dVar33 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar33 = (double)(fVar5 * fVar3);
    }
    dVar32 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar36 < 0.0) {
      dVar37 = (double)(fVar4 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar33 = (double)(fVar5 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar32 = (double)(fVar12 * fVar3);
    }
    if (dVar36 - dVar38 < 0.0) {
      dVar37 = (double)(fVar4 * fVar3);
    }
    *(float *)(puVar18 + 0x1d) = (float)(dVar33 + (double)fVar8);
    *(float *)((int)puVar18 + 0xe4) = (float)(dVar32 + (double)fVar7);
    *(float *)(puVar18 + 0x1c) = (float)(dVar37 + (double)fVar6);
    puVar18[0x33] = (longlong)(int)(fVar14 * 60.5);
    uVar35 = 0x40e3880000000000;
    uVar34 = 0x408f400000000000;
    iVar24 = SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,dVar39,0xbf2a36e2e0000000,dVar38,
                        uVar20 - 0x120,uVar20 - 0x110,*(undefined4 *)((int)puVar18 + 0x19c),0x7f,
                        FUN_00606060,3);
    if (iVar24 != 0) {
      uVar2 = *DAT_00a52860;
      *(undefined1 *)(iVar24 + 3) = 0x44;
      *(undefined1 *)(iVar24 + 2) = uVar2;
    }
    puVar18[0x33] = (longlong)(int)(animationSpeed * 6.5);
    SpawnPart_44
              (uVar35,uVar34,dVar39,0xbf3a36e2e0000000,dVar38,lVar21 + 0x10,uVar20 - 0x110,
               *(undefined4 *)((int)puVar18 + 0x19c),0x7f,&DAT_00b0b0b0,3);
    fVar3 = (moby->transform).v2.y;
    fVar12 = (moby->transform).v2.z;
    fVar4 = (moby->transform).v2.w;
    *(float *)(puVar18 + 0x20) = (moby->transform).v2.x * 0.02;
    *(float *)((int)puVar18 + 0x104) = fVar3 * 0.02;
    *(float *)(puVar18 + 0x21) = fVar12 * 0.02;
    *(float *)((int)puVar18 + 0x10c) = fVar4 * 0.02;
    dVar33 = (double)MB_randRot();
    pfVar25 = (float *)(uVar20 - 0x100);
    MB_RotateQuatAxisAngle((float)dVar33,pfVar25,pfVar25);
    puVar18[0x33] = (longlong)(int)(animationSpeed * 5.5);
    SpawnPart_21(0x40d3880000000000,uVar20 - 0x120,uVar20 - 0x100,0x4f007fff,0x1fffffff);
    fVar3 = (moby->pos).x;
    fVar12 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = *(float *)(puVar18 + 0x18);
    fVar6 = *(float *)((int)puVar18 + 0xc4);
    fVar7 = fVar3 + fVar5;
    fVar8 = fVar12 + fVar6;
    *(float *)(puVar18 + 0x1a) = fVar3;
    fVar3 = fVar4 + *(float *)(puVar18 + 0x19);
    *(float *)((int)puVar18 + 0xd4) = fVar12;
    fVar13 = (moby->pos).w;
    *(float *)(puVar18 + 0x1b) = fVar4;
    *(f32 *)((int)puVar18 + 0xdc) = fVar13;
    MVar16 = moby->oClass;
    (moby->pos).x = fVar7;
    (moby->pos).y = fVar8;
    (moby->pos).z = fVar3;
    if (((fVar7 < 2.0) || (fVar8 < 2.0)) || (fVar3 < 2.0)) {
      DeleteMoby(moby);
    }
    else {
      *(MobyInstance **)(puVar18 + 0x24) = moby;
      *(undefined **)((int)puVar18 + 0x124) = &DAT_00830000;
      *(undefined4 *)((int)puVar18 + 300) = 0x3f800000;
      *(undefined4 *)(puVar18 + 0x26) = 1;
      dVar36 = (double)(fVar5 * fVar5 + fVar6 * fVar6);
      dVar33 = dVar38;
      if ((double)(float)SQRT(dVar36) != dVar38) {
        dVar33 = 1.0 / SQRT(dVar36);
        dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39
                                                 ) * (double)(float)(dVar33 * 0.5) + dVar33);
        dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39
                                                 ) * (double)(float)(dVar33 * 0.5) + dVar33);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar36 * dVar33) * dVar33 - dVar39) *
                        (double)(float)(dVar33 * 0.5) + dVar33);
        dVar38 = (double)(fVar5 * fVar3);
        dVar33 = (double)(fVar6 * fVar3);
      }
      *(float *)(puVar18 + 0x22) = (float)dVar38;
      *(float *)((int)puVar18 + 0x114) = (float)dVar33;
      *(undefined4 *)(puVar18 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar18 + 0x11c) = 0x45afdf66;
      *(undefined1 *)(puVar18 + 0x25) = 3;
      *(undefined1 *)((int)puVar18 + 0x129) = 1;
      *(MOBY_OCLASSES *)((int)puVar18 + 0x12a) = MVar16;
      iVar24 = CollLine(uVar20 - 0x130,lVar21 + 0x10,0,g_heroMobyPtr,uVar20 - 0xf0);
      if (iVar24 == 0) {
        iVar24 = FastDecTimerS16(piVar17 + 1);
        if ((iVar24 != 0) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar12 = (moby->pos).x - g_heroPosition.x,
           60.0 < SQRT(fVar12 * fVar12 + fVar3 * fVar3))) {
          DeleteMoby(moby);
        }
      }
      else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < g_CollOutput.poly) {
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          fVar3 = g_CollOutput.ip.w;
          moby->state = '\x01';
          (moby->pos).w = fVar3;
        }
      }
      else if ((g_CollOutput.pMoby != g_heroMobyPtr) && (g_CollOutput.pMoby != (MobyInstance *)*piVar17)
              ) {
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        fVar3 = g_CollOutput.ip.w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
  }
  else if (bVar1 < 2) {
    puVar18[0x12] = 0;
    puVar18[0x14] = 0;
    puVar18[0x15] = 0;
    puVar18[0x16] = 0xffffffffffffffff;
    puVar18[0x17] = 0;
    MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4010000000000000,0x3fe6666660000000,
               0x401c000000000000,lVar21,&DAT_00a15d30,0,&DAT_000eb650,0,3,3,5);
    DeleteMoby(moby);
  }
  return;
}


// 0x00ec248 (0x14 bytes)
void M1475_000ec248(void)

{
  DAT_00728f50 = 0x10000;
  return;
}


// 0x00ec260 (0x30 bytes)
undefined4 M1475_000ec260(MobyInstance *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar1 = 0;
  }
  else if (param_1->pVar == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1->pVar + 0x24);
  }
  return uVar1;
}


// 0x00ec290 (0x40 bytes)
uint M1475_000ec290(MobyInstance *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar2 = 0;
  }
  else {
    pvVar1 = param_1->pVar;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(uint *)((int)pvVar1 + 0x24) | param_2) & ~param_3;
      *(uint *)((int)pvVar1 + 0x24) = uVar2;
    }
  }
  return uVar2;
}



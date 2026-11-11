// game/update/moby41.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3658b0-0x366180
#include "game/update/moby41.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "sdk/mUnk4.h"

// 0x03658b0 (0x8d0 bytes)
// inlined: FastAtan2 @0x365a8c, FastAtan2 @0x365c2c
/* Moby 41 */

void UpdateMoby_41(MobyInstance *moby)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  short sVar10;
  float *pfVar11;
  float fVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f29;
  undefined8 uVar28;
  ulonglong in_f30;
  undefined8 uVar29;
  ulonglong in_f31;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1e0;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x3e] = in_LR;
  puVar13[0x39] = in_f29;
  puVar13[0x3a] = in_f30;
  puVar13[0x3b] = in_f31;
  puVar13[0x38] = unaff_r31;
  puVar13[0x37] = unaff_r30;
  fVar3 = g_FrameTime;
  pfVar11 = (float *)moby->pVar;
  fVar2 = (moby->rotation).x;
  puVar13[0x36] = unaff_r29;
  puVar13[0x35] = unaff_r28;
  dVar27 = (double)FastWrapRot(fVar2,fVar3 * 6.2831855);
  sVar10 = *(short *)((int)pfVar11 + 0x12);
  (moby->rotation).x = (float)dVar27;
  if (sVar10 != 0) {
    fVar2 = *pfVar11;
    fVar6 = DAT_00969da0 - (moby->pos).x;
    fVar3 = pfVar11[1];
    *pfVar11 = fVar6;
    fVar5 = DAT_00969da4 - (moby->pos).y;
    pfVar11[1] = fVar5;
    fVar12 = DAT_00969da8 - (moby->pos).z;
    fVar2 = SQRT(pfVar11[2] * pfVar11[2] + fVar2 * fVar2 + fVar3 * fVar3);
    pfVar11[2] = fVar12;
    pfVar11[3] = DAT_00969dac;
    fVar3 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar5 * fVar5);
    if (fVar3 <= fVar2) {
      if (fVar3 < 0.1) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      fVar2 = fVar2 / fVar3;
      fVar4 = 0.0;
      fVar9 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar9 = fVar6 * fVar2;
      }
      fVar14 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar14 = fVar5 * fVar2;
      }
      fVar15 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar15 = fVar12 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar9 = fVar6 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar14 = fVar5 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar15 = fVar12 * fVar2;
      }
      *pfVar11 = fVar9;
      pfVar11[1] = fVar14;
      pfVar11[2] = fVar15;
      *(float *)(puVar13 + 0x29) = fVar9;
      *(float *)((int)puVar13 + 0x14c) = fVar14;
      *(float *)(puVar13 + 0x2a) = ABS(fVar9) - ABS(fVar14);
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x29) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x2a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x14c) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 0x29));
      if (*(float *)(puVar13 + 0x2a) - 0.0 < 0.0) {
        fVar2 = ABS(fVar14);
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar6 = ABS(*(float *)((int)puVar13 + 0x14c));
      if (*(float *)(puVar13 + 0x2a) - 0.0 < 0.0) {
        fVar6 = ABS(fVar9);
      }
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar12 = fVar4;
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1d0;
        lVar23 = uVar17 - 0x5c;
        lVar22 = uVar17 - 0x6c;
        lVar26 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar6 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x30) = fVar2;
        *(float *)(puVar13 + 0x2f) = fVar2;
        *(float *)((int)puVar13 + 0x17c) = fVar2;
        *(float *)((int)puVar13 + 0x174) = fVar2;
        fVar2 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x2f) = *(float *)(puVar13 + 0x2f) * fVar6;
        *(float *)((int)puVar13 + 0x17c) = *(float *)((int)puVar13 + 0x17c) * fVar2;
        *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar2 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x164) * fVar2 * fVar2;
          iVar21 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar23 = uVar17 - 0x6c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar23;
        do {
          fVar2 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x174) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar22 = 2;
        lVar19 = lVar20;
        fVar2 = fVar4;
        do {
          iVar21 = (int)lVar19;
          iVar16 = (int)lVar23;
          lVar19 = lVar19 + 0x10;
          lVar23 = lVar23 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar21 + 0x174) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar12 = (fVar2 + 0.7853982) * fVar3 + fVar5;
      }
      (moby->rotation).z = fVar12;
      fVar2 = pfVar11[2];
      fVar3 = ABS(pfVar11[2]);
      fVar5 = SQRT(*pfVar11 * *pfVar11 + pfVar11[1] * pfVar11[1]);
      fVar6 = ABS(fVar5);
      *(float *)(puVar13 + 0x28) = fVar5;
      *(float *)((int)puVar13 + 0x144) = fVar6 - fVar3;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x144) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar2 >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 0x28));
      if (*(float *)((int)puVar13 + 0x144) - 0.0 < 0.0) {
        fVar2 = fVar3;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      if (*(float *)((int)puVar13 + 0x144) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1d0;
        lVar23 = uVar17 - 0x7c;
        lVar22 = uVar17 - 0x8c;
        lVar26 = 2;
        fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x2c) = fVar2;
        *(float *)(puVar13 + 0x2b) = fVar2;
        *(float *)((int)puVar13 + 0x15c) = fVar2;
        *(float *)((int)puVar13 + 0x154) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x2b) = *(float *)(puVar13 + 0x2b) * fVar3;
        *(float *)((int)puVar13 + 0x15c) = *(float *)((int)puVar13 + 0x15c) * fVar2;
        *(float *)(puVar13 + 0x2c) = *(float *)(puVar13 + 0x2c) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar19 + 0x154) = *(float *)((int)lVar19 + 0x144) * fVar2 * fVar2;
          iVar21 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar23 = uVar17 - 0x8c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar23;
        do {
          fVar2 = *pfVar24;
          fVar3 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x154) = *(float *)((int)lVar19 + 0x154) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        do {
          iVar21 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar16 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar21 + 0x154) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar5 + fVar6;
      }
      (moby->rotation).y = -fVar4;
    }
  }
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  fVar7 = (moby->pos).w;
  fVar12 = pfVar11[5];
  *(float *)(puVar13 + 0x18) = fVar2 + *pfVar11;
  *(float *)((int)puVar13 + 0xc4) = fVar3 + pfVar11[1];
  fVar5 = pfVar11[2];
  *(f32 *)((int)puVar13 + 0xcc) = fVar7;
  *(float *)(puVar13 + 0x19) = fVar6 + fVar5;
  if (((fVar12 == 0.0) || (*(short *)((int)fVar12 + 0xa6) != 0x2e)) ||
     (*(char *)((int)fVar12 + 0x20) == -3 || *(char *)((int)fVar12 + 0x20) == -2)) {
    fVar2 = *pfVar11;
    fVar3 = SQRT(pfVar11[2] * pfVar11[2] + fVar2 * fVar2 + pfVar11[1] * pfVar11[1]);
    if (fVar3 == 0.0) {
      *(float *)(puVar13 + 0x1a) = fVar2;
      *(float *)((int)puVar13 + 0xd4) = pfVar11[1];
      *(float *)(puVar13 + 0x1b) = pfVar11[2];
      fVar2 = pfVar11[3];
      *(undefined4 *)(puVar13 + 0x1b) = 0;
      *(undefined4 *)((int)puVar13 + 0xd4) = 0;
      *(undefined4 *)(puVar13 + 0x1a) = 0;
    }
    else {
      fVar3 = 2.0 / fVar3;
      *(float *)(puVar13 + 0x1a) = fVar2 * fVar3;
      *(float *)((int)puVar13 + 0xd4) = pfVar11[1] * fVar3;
      *(float *)(puVar13 + 0x1b) = pfVar11[2] * fVar3;
      fVar2 = pfVar11[3];
    }
  }
  else {
    fVar2 = fVar2 - *(float *)((int)fVar12 + 0x10);
    *(float *)(puVar13 + 0x1a) = fVar2;
    fVar3 = fVar3 - *(float *)((int)fVar12 + 0x14);
    *(undefined4 *)(puVar13 + 0x1b) = 0;
    fVar6 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
    fVar2 = fVar2 * (2.0 / fVar6);
    fVar3 = fVar3 * (2.0 / fVar6);
    fVar5 = 0.0;
    if (0.0 - fVar6 < 0.0) {
      fVar5 = fVar2;
    }
    fVar12 = 0.0;
    if (0.0 - fVar6 < 0.0) {
      fVar12 = fVar3;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar12 = fVar3;
    }
    *(float *)(puVar13 + 0x1a) = fVar5;
    *(float *)((int)puVar13 + 0xd4) = fVar12;
    fVar2 = 5627.925;
  }
  *(float *)((int)puVar13 + 0xdc) = fVar2;
  SetCollDamIn(0x4000000000000000,uVar17 - 0xd0,lVar18,1);
  fVar2 = pfVar11[5];
  *(MOBY_OCLASSES *)((int)puVar13 + 0x12a) = moby->oClass;
  iVar21 = CollLine(lVar18 + 0x10,uVar17 - 0x120,0,fVar2,uVar17 - 0xd0);
  if ((iVar21 == 0) && (iVar21 = FastDecTimerS16(pfVar11 + 4), iVar21 == 0)) {
    fVar7 = *(f32 *)((int)puVar13 + 0xc4);
    (moby->pos).x = *(f32 *)(puVar13 + 0x18);
    fVar8 = *(f32 *)(puVar13 + 0x19);
    (moby->pos).y = fVar7;
    fVar7 = *(f32 *)((int)puVar13 + 0xcc);
    (moby->pos).z = fVar8;
    (moby->pos).w = fVar7;
    MB_randSphere
              ((double)(g_FrameTime * 0.1),(double)(g_FrameTime * 0.2),
               uVar17 - 0x100);
    uVar29 = 0;
    uVar28 = 0x3ff0000000000000;
    dVar27 = (double)MB_randRangeFloat(0.0,1.0);
    fVar2 = *pfVar11;
    fVar3 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar5 = (moby->pos).z;
    *(float *)(puVar13 + 0x1e) = (float)((double)fVar2 * dVar27);
    fVar14 = animationSpeed;
    fVar12 = pfVar11[1];
    *(float *)((int)puVar13 + 0xf4) = (float)((double)fVar12 * dVar27);
    fVar4 = pfVar11[2];
    *(float *)(puVar13 + 0x1f) = (float)((double)fVar4 * dVar27);
    fVar9 = pfVar11[3];
    *(float *)(puVar13 + 0x1e) = (float)((double)fVar2 * dVar27) + fVar3;
    *(float *)((int)puVar13 + 0xfc) = fVar9;
    *(float *)((int)puVar13 + 0xf4) = (float)((double)fVar12 * dVar27) + fVar6;
    *(float *)(puVar13 + 0x1f) = (float)((double)fVar4 * dVar27) + fVar5;
    dVar27 = 10.5;
    puVar13[0x33] = (longlong)(int)(fVar14 * 10.5);
    iVar21 = SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,uVar28,0xbf2a36e2e0000000,uVar29,
                        uVar17 - 0xf0,uVar17 - 0x100,*(undefined4 *)((int)puVar13 + 0x19c),0x7f,
                        FUN_00606060,3);
    fVar2 = (moby->transform).v2.x;
    fVar3 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar5 = (moby->transform).v2.w;
    if (iVar21 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar21 + 3) = 0x44;
      *(undefined1 *)(iVar21 + 2) = uVar1;
    }
    *(float *)(puVar13 + 0x20) = fVar2 * 0.02;
    *(float *)((int)puVar13 + 0x104) = fVar3 * 0.02;
    *(float *)(puVar13 + 0x21) = fVar6 * 0.02;
    *(float *)((int)puVar13 + 0x10c) = fVar5 * 0.02;
    puVar13[0x33] = (longlong)(int)((double)animationSpeed * dVar27);
    SpawnPart_21
              (0x40d3880000000000,uVar17 - 0xf0,uVar17 - 0xe0,0x4f007fff,0x1fffffff,0x4f000000,
               *(undefined4 *)((int)puVar13 + 0x19c),1);
  }
  else {
    puVar13[0x12] = 0;
    puVar13[0x14] = 0;
    puVar13[0x15] = 0;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    MB_genericExplosion
              (0x3ff8000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
               0x4022000000000000,0x3fe0000000000000,0,lVar18,pfVar11,lVar18 + 0x10,0,
               0xffffffffffffffff,10,6,4);
    DeleteMoby(moby);
  }
  return;
}



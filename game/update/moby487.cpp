// game/update/moby487.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x39ed30-0x39fca0
#include "game/update/moby487.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby112.h"
#include "game/update/moby456.h"
#include "idol/fastfunc.h"

// 0x039ed30 (0x14 bytes)
void M487_0039ed30(void)

{
  DAT_0084318c = 0x10000;
  return;
}


// 0x039ed48 (0xe4 bytes)
MobyInstance * FUN_0039ed48(undefined4 *param_1,f32 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(0x1e7);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = 0xff;
    puVar2 = (undefined4 *)pMVar4->pVar;
    uVar3 = g_heroMobyPtr->light;
    pMVar4->color = g_heroMobyPtr->color;
    pMVar4->light = uVar3;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    uVar1 = param_1[3];
    puVar2[4] = param_3;
    puVar2[3] = uVar1;
    pMVar4->state = '\x01';
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x039ee38 (0xc8 bytes)
void M487_0039ee38(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_00969de8;
  fVar5 = DAT_00969de4;
  pfVar1 = *(float **)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  fVar4 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) /
          (SQRT(pfVar1[2] * pfVar1[2] + *pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1]) + 1e-05);
  *param_2 = DAT_00969de0 * fVar2 + g_heroPosition.x;
  param_2[1] = fVar5 * fVar2 + g_heroPosition.y;
  fVar2 = fVar6 * fVar2 + g_heroPosition.z;
  param_2[2] = fVar2;
  param_2[3] = g_heroPosition.w;
  fVar2 = fVar2 + 0.75;
  param_2[2] = fVar2;
  if (fVar2 < DAT_00969f88) {
    param_2[2] = DAT_00969f88;
  }
  return;
}


// 0x039ef28 (0xa6c bytes)
// inlined: FastAtan2 @0x39f1c4, FastAtan2 @0x39f360, FastAtan2 @0x39f560
/* Moby 487 */

void UpdateMoby_487(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *impact;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar18;
  undefined8 uVar17;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  float fVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar24;
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
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar24 = uVar14 - 0x1f0;
  puVar9 = (ulonglong *)lVar24;
  *puVar9 = uVar14;
  puVar9[0x40] = in_LR;
  puVar9[0x3b] = in_f29;
  puVar9[0x3c] = in_f30;
  puVar9[0x3d] = in_f31;
  puVar9[0x3a] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x39] = unaff_r30;
  impact = (float *)moby->pVar;
  puVar9[0x38] = unaff_r29;
  puVar9[0x37] = unaff_r28;
  puVar9[0x36] = unaff_r27;
  puVar9[0x35] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    M487_0039ee38(lVar15,uVar14 - 0x130);
    fVar7 = *(float *)((int)puVar9 + 0xc4) - (moby->pos).y;
    fVar5 = *(float *)(puVar9 + 0x18) - (moby->pos).x;
    fVar3 = *(float *)(puVar9 + 0x19) - (moby->pos).z;
    fVar2 = DAT_0084212c * g_FrameTime;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar7;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar23 = 0.0;
    fVar10 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar4 = DAT_00842130 * g_FrameTimeSq;
    fVar2 = fVar2 / fVar10;
    fVar6 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar6 = fVar5 * fVar2;
    }
    fVar12 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar12 = fVar7 * fVar2;
    }
    fVar11 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar11 = fVar3 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar6 = fVar5 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar12 = fVar7 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar2;
    }
    *(float *)(puVar9 + 0x18) = fVar6;
    *(float *)((int)puVar9 + 0xc4) = fVar12;
    *(float *)(puVar9 + 0x19) = fVar11;
    fVar6 = fVar6 - *impact;
    *(float *)(puVar9 + 0x18) = fVar6;
    fVar12 = fVar12 - impact[1];
    *(float *)((int)puVar9 + 0xc4) = fVar12;
    fVar11 = fVar11 - impact[2];
    *(float *)(puVar9 + 0x19) = fVar11;
    fVar5 = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar12 * fVar12);
    fVar4 = fVar4 / fVar5;
    fVar7 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar7 = fVar12 * fVar4;
    }
    fVar3 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar3 = fVar6 * fVar4;
    }
    fVar2 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar2 = fVar11 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = fVar12 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar3 = fVar6 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar2 = fVar11 * fVar4;
    }
    *(float *)((int)puVar9 + 0xc4) = fVar7;
    *(float *)(puVar9 + 0x18) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar2;
    fVar3 = *impact + fVar3;
    *impact = fVar3;
    fVar4 = impact[1] + *(float *)((int)puVar9 + 0xc4);
    impact[1] = fVar4;
    impact[2] = impact[2] + *(float *)(puVar9 + 0x19);
    fVar7 = g_heroPosition.x - (moby->pos).x;
    fVar6 = g_heroPosition.y - (moby->pos).y;
    fVar5 = ABS(fVar7);
    fVar2 = ABS(fVar6);
    *(float *)(puVar9 + 0x24) = fVar7;
    *(float *)((int)puVar9 + 0x124) = fVar6;
    *(float *)(puVar9 + 0x25) = fVar5 - fVar2;
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x24) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x25) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x124) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar9 + 0x24));
    if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
      fVar7 = fVar2;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x124));
    if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    fVar5 = fVar23;
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x1e0;
      lVar19 = uVar14 - 0x84;
      lVar21 = uVar14 - 0x74;
      lVar25 = 2;
      fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
      fVar5 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x2f) = fVar7;
      *(float *)(puVar9 + 0x2e) = fVar7;
      *(float *)((int)puVar9 + 0x174) = fVar7;
      *(float *)((int)puVar9 + 0x16c) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5;
      *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar7;
      *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x16c) = *(float *)((int)lVar16 + 0x15c) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar21 = uVar14 - 0x84;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x16c) = *(float *)((int)lVar16 + 0x16c) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      fVar7 = fVar23;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        fVar7 = fVar7 + *(float *)(iVar18 + 0x16c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar5 = (fVar7 + 0.7853982) * fVar6 + fVar2;
    }
    *(float *)((int)puVar9 + 0x114) = fVar3;
    *(float *)(puVar9 + 0x23) = fVar4;
    *(float *)((int)puVar9 + 0x11c) = ABS(fVar3) - ABS(fVar4);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x11c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x23) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)((int)puVar9 + 0x114));
    if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
      fVar7 = ABS(fVar4);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x23));
    if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
      fVar4 = ABS(fVar3);
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x1e0;
      lVar21 = uVar14 - 0x94;
      lVar19 = uVar14 - 0xa4;
      lVar25 = 2;
      fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x2b) = fVar7;
      *(float *)(puVar9 + 0x2a) = fVar7;
      *(float *)((int)puVar9 + 0x154) = fVar7;
      *(float *)((int)puVar9 + 0x14c) = fVar7;
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar4;
      *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar7;
      *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar7 * fVar4;
      do {
        *(float *)((int)lVar16 + 0x14c) = *(float *)((int)lVar16 + 0x13c) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar21 = uVar14 - 0xa4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x14c) = *(float *)((int)lVar16 + 0x14c) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar21;
        lVar16 = lVar16 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar23 = fVar23 + *(float *)(iVar18 + 0x14c) + *(float *)(iVar13 + 4) +
                 *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar23 = (fVar23 + 0.7853982) * fVar2 + fVar3;
    }
    dVar26 = (double)FastSubRots(fVar5,fVar23);
    if (1.5707963705062866 < dVar26) {
      moby->state = '\x02';
    }
  }
  else if (2 < bVar1) {
    if (3 < bVar1) {
      return;
    }
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar15,impact,lVar15 + 0x10,1,0xffffffffffffffff,5,2,4);
    DeleteMoby(moby);
    return;
  }
  (moby->pos).x = (moby->pos).x + *impact;
  (moby->pos).y = (moby->pos).y + impact[1];
  (moby->pos).z = (moby->pos).z + impact[2];
  fVar23 = *impact;
  fVar7 = impact[1];
  fVar3 = ABS(*impact);
  fVar5 = ABS(impact[1]);
  *(float *)(puVar9 + 0x22) = fVar3 - fVar5;
  dVar26 = 0.0;
  uVar20 = (ulonglong)((uint)fVar23 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4;
  fVar23 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar7 = fVar3;
  if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar27 = dVar26;
  if (0.0 < fVar7) {
    lVar16 = uVar14 - 0x1e0;
    lVar21 = uVar14 - 0xb4;
    lVar19 = uVar14 - 0xc4;
    lVar25 = 2;
    fVar7 = (fVar5 - fVar7) / (fVar5 + fVar7);
    fVar5 = fVar7 * fVar7;
    *(float *)(puVar9 + 0x27) = fVar7;
    *(float *)(puVar9 + 0x26) = fVar7;
    *(float *)((int)puVar9 + 0x134) = fVar7;
    *(float *)((int)puVar9 + 300) = fVar7;
    fVar7 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar5;
    *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar7;
    *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar7 * fVar5;
    do {
      *(float *)((int)lVar16 + 300) = *(float *)((int)lVar16 + 0x11c) * fVar7 * fVar7;
      iVar18 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar21 = uVar14 - 0xc4;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar24;
    lVar19 = lVar21;
    do {
      fVar7 = *pfVar22;
      fVar5 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 300) = *(float *)((int)lVar16 + 300) * fVar7;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar24;
      iVar13 = (int)lVar21;
      lVar24 = lVar24 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 300)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar23 + fVar3);
  }
  (moby->rotation).z = (float)dVar27;
  dVar27 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 12.566371);
  (moby->rotation).x = (float)dVar27;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0;
  *(undefined4 *)(puVar9 + 0x1b) = 0;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0;
  dVar34 = -1.0;
  dVar35 = 1.0;
  dVar27 = (double)MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar9 + 0x1a) = (float)dVar27;
  dVar27 = (double)MB_randRangeFloat((float)dVar34,(float)dVar35);
  *(float *)((int)puVar9 + 0xd4) = (float)dVar27;
  dVar34 = (double)MB_randRangeFloat((float)dVar34,(float)dVar35);
  dVar29 = (double)*(float *)((int)puVar9 + 0xd4);
  dVar31 = (double)*(float *)(puVar9 + 0x1a);
  *(float *)(puVar9 + 0x1b) = (float)dVar34;
  lVar24 = lVar15 + 0x10;
  dVar32 = (double)SQRT((float)(dVar34 * dVar34 +
                               (double)(float)(dVar31 * dVar31 + (double)(float)(dVar29 * dVar29))))
  ;
  dVar33 = (double)(float)((double)(g_FrameTime * 0.25) / dVar32);
  dVar27 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar27 = (double)(float)(dVar31 * dVar33);
  }
  dVar30 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar30 = (double)(float)(dVar29 * dVar33);
  }
  dVar28 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar28 = (double)(float)(dVar34 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar27 = (double)(float)(dVar31 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar30 = (double)(float)(dVar29 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar28 = (double)(float)(dVar34 * dVar33);
  }
  *(float *)(puVar9 + 0x1a) = (float)dVar27;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar30;
  *(float *)(puVar9 + 0x1b) = (float)dVar28;
  iVar18 = MB_randRange(0x1e,0x2d);
  puVar9[0x32] = (longlong)iVar18;
  dVar27 = 0.5;
  puVar9[0x32] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x32] + 0.5));
  uVar8 = *(undefined4 *)((int)puVar9 + 0x194);
  uVar17 = MB_randRange(0x28,0x46);
  SpawnPart_4(lVar24,uVar14 - 0x120,0x6f00afff,0xff,uVar8,0x28,uVar17,1);
  iVar18 = MB_randRange(0x3c,0x78);
  puVar9[0x32] = (longlong)iVar18;
  puVar9[0x32] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x32] + dVar27));
  uVar8 = *(undefined4 *)((int)puVar9 + 0x194);
  uVar17 = MB_randRange(100,0x96);
  SpawnPart_4(lVar24,uVar14 - 0x120,0x1fffffff,0x4f4f4f,uVar8,0x28,uVar17,0);
  SetCollDamIn(dVar26,uVar14 - 0x110,lVar15,0);
  fVar23 = impact[4];
  iVar18 = STUB_00055ac0_RET_0(lVar24,0x80,0,fVar23,uVar14 - 0x110);
  if (iVar18 != 0) {
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      CollDamageMobyDirect
                ((float)dVar35,g_CollOutput.pMoby,moby,0x10001,(int)fVar23,&g_CollOutput.ip.x,impact);
    }
    moby->state = '\x03';
  }
  return;
}


// 0x039f994 (0x14 bytes)
void M487_0039f994(void)

{
  DAT_0084323c = 0x10000;
  return;
}


// 0x039f9a8 (0x238 bytes)
void M487_0039f9a8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<16> local_50;
  GPiece<16> local_40;
  GPiece<16> local_30;
  
  MB_randSphere
            ((double)(DAT_00843288 * g_FrameTime),
             (double)(DAT_00843288 * g_FrameTime),local_50);
  MB_randSphere
            ((double)(DAT_0084328c * g_FrameTime),
             (double)(DAT_0084328c * g_FrameTime),local_50);
  dVar4 = (double)MB_randRangeFloat(DAT_00843270,DAT_00843274);
  uVar1 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)MB_randRangeFloat(DAT_00843278,DAT_0084327c);
  uVar2 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)MB_randRangeFloat(DAT_00843280,DAT_00843284);
  uVar3 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  SpawnPart_2(param_1 + 0x10,local_40,local_30,DAT_00843260,DAT_00843264,uVar1,uVar2,uVar3)
  ;
  return;
}


// 0x039fbe8 (0xb8 bytes)
void M487_0039fbe8(longlong param_1)

{
  FUN_001d4d88((double)DAT_00843298,param_1,param_1 + 0x10,&DAT_00a15d30,DAT_008432a0 & 0xff,
               (int)(animationSpeed * ((float)(longlong)DAT_0084329c + 0.5)),DAT_008432a4 & 0xff,
               DAT_008432a8 & 0xff,DAT_010c9258 & 0xff);
  return;
}



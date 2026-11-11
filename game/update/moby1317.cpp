// game/update/moby1317.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x245a3c-0x246184
#include "game/update/moby1317.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0245a3c (0x14 bytes)
void M1317_00245a3c(void)

{
  DAT_0078e3ec = 0x10000;
  return;
}


// 0x0245a60 (0x528 bytes)
// inlined: FastAtan2 @0x245bb0, FastAtan2 @0x245d3c
MobyInstance * FUN_00245a60(double param_1,double param_2,float param_3,float *param_4,f32 *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  short sVar15;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xf0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x20] = in_LR;
  puVar5[0x1c] = in_f30;
  puVar5[0x1d] = in_f31;
  puVar5[0x1b] = unaff_r31;
  puVar5[0x19] = unaff_r29;
  puVar5[0x1a] = unaff_r30;
  puVar5[0x18] = unaff_r28;
  pMVar13 = CreateMoby(0x525);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar3 = (float *)pMVar13->pVar;
    pfVar3[7] = param_3;
    pMVar13->updateDistance = -1;
    sVar15 = FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    pMVar13->scale = pMVar13->scale * 5.0;
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_4[2];
    fVar2 = ABS(param_4[2]);
    fVar4 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar1 = ABS(fVar4);
    *(float *)((int)puVar5 + 0x74) = fVar4;
    *(float *)(puVar5 + 0xf) = fVar1 - fVar2;
    uVar17 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar4) {
      lVar11 = uVar10 - 0xe0;
      lVar18 = uVar10 - 0x44;
      lVar16 = uVar10 - 0x54;
      lVar20 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x15) = fVar4;
      *(float *)(puVar5 + 0x14) = fVar4;
      *(float *)((int)puVar5 + 0xa4) = fVar4;
      *(float *)((int)puVar5 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar2;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar4;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar4 * fVar4;
        iVar6 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar6 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x54;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar4 = fVar8;
      do {
        iVar6 = (int)lVar11;
        iVar7 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar6 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar4 + 0.7853982) * fVar14 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_4;
    fVar4 = param_4[1];
    fVar1 = ABS(*param_4);
    fVar2 = ABS(param_4[1]);
    *(float *)(puVar5 + 0xe) = fVar1 - fVar2;
    uVar17 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xe0;
      lVar16 = uVar10 - 0x74;
      lVar18 = uVar10 - 100;
      lVar20 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar5 + 0x11) = fVar14;
      *(float *)(puVar5 + 0x10) = fVar14;
      *(float *)((int)puVar5 + 0x84) = fVar14;
      *(float *)((int)puVar5 + 0x7c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar2;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar14;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar6 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar14 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar11 = 2;
      do {
        iVar6 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar7 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar4 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    pfVar3[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar3 = *param_4;
      pfVar3[1] = param_4[1];
      pfVar3[2] = param_4[2];
      pfVar3[3] = param_4[3];
      param_2 = (double)SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]
                            );
    }
    else {
      fVar14 = *param_4;
      dVar21 = (double)SQRT(param_4[2] * param_4[2] + fVar14 * fVar14 + param_4[1] * param_4[1]);
      if (dVar21 == 0.0) {
        *pfVar3 = *param_4;
        pfVar3[1] = param_4[1];
        pfVar3[2] = param_4[2];
        fVar14 = param_4[3];
        pfVar3[2] = 0.0;
        pfVar3[1] = 0.0;
        *pfVar3 = 0.0;
      }
      else {
        fVar4 = (float)(param_2 / dVar21);
        *pfVar3 = fVar14 * fVar4;
        pfVar3[1] = param_4[1] * fVar4;
        pfVar3[2] = param_4[2] * fVar4;
        fVar14 = param_4[3];
      }
      pfVar3[3] = fVar14;
    }
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar14 = (float)FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar3[5] = fVar14;
    pfVar3[6] = (float)((int)fVar14 + -0xd);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x0245fb0 (0x1d4 bytes)
/* Moby 1317 */

void UpdateMoby_1317(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  GPiece<16> local_60;
  GPiece<48> auStack_50;
  
  lVar3 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar2 = (float *)moby->pVar;
    if (pfVar2 != (float *)0x0) {
      (moby->pos).x = (moby->pos).x + *pfVar2;
      (moby->pos).y = (moby->pos).y + pfVar2[1];
      (moby->pos).z = (moby->pos).z + pfVar2[2];
      SetCollDamIn(0x4024000000000000,auStack_50,lVar3,0x10000,&DAT_00245f88,pfVar2);
      iVar4 = CollLine(local_60,lVar3 + 0x10,0,lVar3,auStack_50);
      if ((iVar4 == 0) &&
         (iVar4 = CollMobySphere
                            (0x4014000000000000,lVar3 + 0x10,&DAT_00245f88,0,lVar3,auStack_50),
         iVar4 == 0)) {
        iVar4 = FastDecTimerS32(pfVar2 + 6);
        if ((iVar4 != 0) && (fVar1 = pfVar2[4], pfVar2[4] = fVar1 * 0.74, fVar1 * 0.74 < 0.02)) {
          DeleteMoby(moby);
        }
      }
      else {
        MB_genericExplosion
                  (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar3,pfVar2,0xa10960,1,0xffffffffffffffff,10,3,0x10);
        DeleteMoby(moby);
      }
    }
  }
  return;
}



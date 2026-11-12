// game/update/moby1017.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x187e00-0x188854
#include "game/update/moby1017.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0187e00 (0x534 bytes)
// inlined: FastAtan2 @0x187f50, FastAtan2 @0x1880dc
MobyInstance *
FUN_00187e00(double param_1,double param_2,double param_3,float param_4,float *param_5,f32 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
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
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x22] = in_LR;
  puVar6[0x1d] = in_f29;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1c] = unaff_r31;
  puVar6[0x1a] = unaff_r29;
  puVar6[0x1b] = unaff_r30;
  puVar6[0x19] = unaff_r28;
  puVar6[0x18] = unaff_r27;
  pMVar13 = CreateMoby(0x3f9);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar13->pVar;
    pMVar13->collision = (ushort *)0x0;
    pfVar4[7] = param_4;
    pMVar13->updateDistance = -1;
    sVar15 = FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_5[2];
    fVar3 = ABS(param_5[2]);
    fVar5 = SQRT(*param_5 * *param_5 + param_5[1] * param_5[1]);
    fVar2 = ABS(fVar5);
    *(float *)((int)puVar6 + 0x74) = fVar5;
    *(float *)(puVar6 + 0xf) = fVar2 - fVar3;
    uVar17 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = fVar9;
    if (0.0 < fVar5) {
      lVar11 = uVar10 - 0xf0;
      lVar18 = uVar10 - 0x54;
      lVar16 = uVar10 - 100;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x15) = fVar5;
      *(float *)(puVar6 + 0x14) = fVar5;
      *(float *)((int)puVar6 + 0xa4) = fVar5;
      *(float *)((int)puVar6 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar5;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar5 * fVar5;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar5 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar5;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar5 = fVar9;
      do {
        iVar7 = (int)lVar11;
        iVar8 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar5 + 0.7853982) * fVar14 + fVar1;
    }
    (pMVar13->rotation).y = -fVar2;
    fVar14 = *param_5;
    fVar5 = param_5[1];
    fVar2 = ABS(*param_5);
    fVar3 = ABS(param_5[1]);
    *(float *)(puVar6 + 0xe) = fVar2 - fVar3;
    uVar17 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar14 = fVar2;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 0x84;
      lVar18 = uVar10 - 0x74;
      lVar20 = 2;
      fVar14 = (fVar3 - fVar14) / (fVar3 + fVar14);
      fVar3 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x11) = fVar14;
      *(float *)(puVar6 + 0x10) = fVar14;
      *(float *)((int)puVar6 + 0x84) = fVar14;
      *(float *)((int)puVar6 + 0x7c) = fVar14;
      fVar14 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar3;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar14;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar14 * fVar3;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar7 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar14 * fVar14;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar10 - 0x84;
      pfVar19 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar16 = lVar18;
      do {
        fVar14 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar11 = 2;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar13->rotation).z = fVar9;
    pfVar4[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar4 = *param_5;
      pfVar4[1] = param_5[1];
      pfVar4[2] = param_5[2];
      pfVar4[3] = param_5[3];
      param_2 = (double)SQRT(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]
                            );
    }
    else {
      fVar14 = *param_5;
      dVar21 = (double)SQRT(param_5[2] * param_5[2] + fVar14 * fVar14 + param_5[1] * param_5[1]);
      if (dVar21 == 0.0) {
        *pfVar4 = *param_5;
        pfVar4[1] = param_5[1];
        pfVar4[2] = param_5[2];
        fVar14 = param_5[3];
        pfVar4[2] = 0.0;
        pfVar4[1] = 0.0;
        *pfVar4 = 0.0;
      }
      else {
        fVar5 = (float)(param_2 / dVar21);
        *pfVar4 = fVar14 * fVar5;
        pfVar4[1] = param_5[1] * fVar5;
        pfVar4[2] = param_5[2] * fVar5;
        fVar14 = param_5[3];
      }
      pfVar4[3] = fVar14;
    }
    (pMVar13->pos).x = *param_6;
    (pMVar13->pos).y = param_6[1];
    (pMVar13->pos).z = param_6[2];
    (pMVar13->pos).w = param_6[3];
    fVar14 = (float)FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar4[5] = fVar14;
    pfVar4[8] = (float)param_3;
    pfVar4[6] = (float)((int)fVar14 + -0xd);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x0188368 (0x4ec bytes)
/* Moby 1017 */

void UpdateMoby_1017(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [4];
  GPiece<64> auStack_c0;
  
  uVar4 = DAT_0073bb58;
  uVar3 = DAT_0073bb54;
  if ((moby != (MobyInstance *)0x0) && (pfVar2 = (float *)moby->pVar, pfVar2 != (float *)0x0)) {
    uVar8 = 0;
    dVar9 = 1.0;
    MB_randRangeFloat(0.0,1.0);
    uVar5 = FastLerpColor(uVar3,uVar4);
    MB_randSphere(uVar8,0x3fb99999a0000000,local_100);
    SpawnPart_27
              ((double)(longlong)DAT_0073bb60,local_100,local_f0,uVar5,
               (int)(animationSpeed * (float)((double)(longlong)DAT_0073bb5c + 0.5)));
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    SetCollDamIn((double)pfVar2[8],auStack_c0,(longlong)(int)moby,0x10000);
    lVar7 = (longlong)(int)moby + 0x10;
    iVar6 = CollLine(local_110,lVar7,0,pfVar2[7],auStack_c0);
    if (iVar6 == 0) {
      iVar6 = FastDecTimerS32(pfVar2 + 6);
      if ((iVar6 != 0) && (fVar1 = pfVar2[4], pfVar2[4] = fVar1 * 0.74, fVar1 * 0.74 < 0.02)) {
        DeleteMoby(moby);
      }
    }
    else {
      iVar6 = 0;
      dVar10 = -1.0;
      dVar11 = 5.0;
      dVar12 = 9.0;
      dVar13 = 10.5;
      dVar14 = 15.5;
      uVar5 = 0x40f5f90000000000;
      do {
        MB_randRangeFloat((float)dVar10,(float)dVar9);
        MB_randRangeFloat((float)dVar10,(float)dVar9);
        MB_randRangeFloat((float)dVar10,(float)dVar9);
        FastVecReflect(local_d0,pfVar2,0xa10980);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar11),
                   (float)((double)g_FrameTime * dVar12));
        uVar8 = MB_randRange
                          ((int)((double)animationSpeed * dVar13),
                           (int)((double)animationSpeed * dVar14));
        SpawnPart_27(uVar5,lVar7,local_e0,0x7f2f4f6f,uVar8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
      DeleteMoby(moby);
    }
  }
  return;
}



// game/update/moby1009.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x184104-0x185654
#include "game/update/moby1009.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0184104 (0x14 bytes)
void M1009_00184104(void)

{
  DAT_0073b8d4 = 0x10000;
  return;
}


// 0x0184130 (0x534 bytes)
// inlined: FastAtan2 @0x1842d8, FastAtan2 @0x184498
int M1009_00184130
              (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  double dVar24;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x150;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar12;
  puVar8[0x2c] = in_LR;
  puVar8[0x1f] = in_f21;
  puVar8[0x20] = in_f22;
  puVar8[0x21] = in_f23;
  puVar8[0x22] = in_f24;
  puVar8[0x23] = in_f25;
  puVar8[0x24] = in_f26;
  puVar8[0x25] = in_f27;
  puVar8[0x26] = in_f28;
  puVar8[0x27] = in_f29;
  puVar8[0x28] = in_f30;
  puVar8[0x29] = in_f31;
  puVar8[0x1c] = unaff_r29;
  iVar18 = 0;
  puVar8[0x1e] = unaff_r31;
  puVar8[0x1b] = unaff_r28;
  puVar8[0x1d] = unaff_r30;
  iVar7 = MobyUpdateChainStart;
  puVar8[0x1a] = unaff_r27;
  dVar29 = 10.0;
  for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x28)) {
    if ((((*(ushort *)(iVar7 + 0x34) & 0x1000) != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
       (*(short *)(*(int *)(iVar7 + 0x24) + 0x46) == 5)) {
      dVar24 = (double)*(float *)(iVar7 + 0x14);
      fVar2 = (float)((double)param_4[1] - dVar24);
      dVar25 = (double)*(float *)(iVar7 + 0x10);
      fVar3 = (float)((double)*param_4 - dVar25);
      dVar28 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (dVar28 < param_3) {
        fVar2 = (float)(dVar25 - (double)*param_4);
        fVar3 = (float)(dVar24 - (double)param_4[1]);
        fVar4 = *(float *)(iVar7 + 0x18);
        fVar5 = ABS(fVar2);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar8 + 0x7c) = fVar2;
        *(float *)(puVar8 + 0x10) = fVar3;
        fVar2 = *(float *)(param_5 + 8);
        dVar27 = (double)(fVar4 + 0.4);
        *(float *)((int)puVar8 + 0x84) = fVar5 - fVar6;
        dVar23 = 0.0;
        uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar8 + 0x7c));
        if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)(puVar8 + 0x10));
        if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
          fVar11 = fVar5;
        }
        dVar26 = 0.7853981852531433;
        dVar20 = dVar23;
        if (0.0 < fVar3) {
          lVar13 = uVar12 - 0x140;
          lVar17 = uVar12 - 0x98;
          lVar14 = uVar12 - 0xa8;
          lVar19 = 2;
          fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar8 + 0xb4) = fVar3;
          *(float *)((int)puVar8 + 0xac) = fVar3;
          *(float *)(puVar8 + 0x16) = fVar3;
          *(float *)(puVar8 + 0x15) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
          *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar3;
          *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar3 * fVar3;
            iVar9 = (int)lVar14;
            lVar14 = lVar14 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar17 = uVar12 - 0xa8;
          pfVar15 = (float *)&DAT_007358e0;
          lVar13 = lVar1;
          lVar14 = lVar17;
          do {
            fVar3 = *pfVar15;
            fVar5 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar3;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar13 = lVar1;
          do {
            iVar9 = (int)lVar13;
            iVar10 = (int)lVar17;
            lVar13 = lVar13 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar9 + 0xa8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar20 = (double)FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = *(float *)(param_5 + 4);
        if (dVar20 < (double)(float)(param_1 * param_1)) {
          fVar3 = param_4[2];
          *(float *)(puVar8 + 0xe) = (float)dVar28;
          dVar21 = ABS((double)(float)(dVar27 - (double)fVar3));
          *(float *)((int)puVar8 + 0x74) = (float)(dVar27 - (double)fVar3);
          *(float *)(puVar8 + 0xf) = (float)(ABS(dVar28) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar8 + 0xe));
          if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
            dVar22 = dVar21;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar8 + 0x74));
          if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
            dVar21 = ABS(dVar28);
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar22) {
            lVar13 = uVar12 - 0x140;
            lVar17 = uVar12 - 0xb8;
            lVar14 = uVar12 - 200;
            lVar19 = 2;
            fVar6 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar8 + 0x94) = fVar6;
            *(float *)((int)puVar8 + 0x8c) = fVar6;
            *(float *)(puVar8 + 0x12) = fVar6;
            *(float *)(puVar8 + 0x11) = fVar6;
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
            *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar6;
            *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar6 * fVar5;
            do {
              *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar6 * fVar6;
              iVar9 = (int)lVar14;
              lVar14 = lVar14 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar17 = uVar12 - 200;
            pfVar15 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar14 = lVar17;
            do {
              fVar6 = *pfVar15;
              fVar5 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar6;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar17;
              lVar13 = lVar13 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar9 + 0x88)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar23 = (double)((float)(dVar23 + dVar26) * fVar3 + fVar4);
          }
          dVar28 = (double)FastSubRots(fVar2,(float)dVar23);
          if (((double)(float)(dVar28 * dVar28) < (double)(float)(param_2 * param_2)) &&
             (dVar24 = (double)((float)(dVar20 * (double)(float)(dVar28 * dVar28)) * 30.0 +
                               SQRT(SQRT((float)((double)param_4[2] - dVar27) *
                                         (float)((double)param_4[2] - dVar27) +
                                         (float)((double)*param_4 - dVar25) *
                                         (float)((double)*param_4 - dVar25) +
                                         (float)((double)param_4[1] - dVar24) *
                                         (float)((double)param_4[1] - dVar24)))), dVar24 < dVar29))
          {
            dVar29 = dVar24;
            iVar18 = iVar7;
          }
        }
      }
    }
  }
  return iVar18;
}


// 0x0184670 (0x570 bytes)
// inlined: FastAtan2 @0x1847b0, FastAtan2 @0x18493c
MobyInstance *
M1009_00184670
          (double param_1,double param_2,float param_3,float *param_4,f32 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  short sVar15;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  s8 sVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x22] = in_LR;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1d] = unaff_r31;
  puVar6[0x1b] = unaff_r29;
  puVar6[0x1c] = unaff_r30;
  puVar6[0x1a] = unaff_r28;
  puVar6[0x19] = unaff_r27;
  pMVar13 = CreateMoby(0x3f1);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar13->pVar;
    pfVar4[7] = param_3;
    pMVar13->updateDistance = -1;
    sVar15 = FastDoubleToInt(param_1);
    pMVar13->drawDistance = sVar15;
    pMVar13->enabled = '\x01';
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_4[2];
    fVar2 = ABS(param_4[2]);
    fVar3 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar17 = uVar10 - 100;
      lVar19 = uVar10 - 0x54;
      lVar21 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x15) = fVar14;
      *(float *)(puVar6 + 0x14) = fVar14;
      *(float *)((int)puVar6 + 0xa4) = fVar14;
      *(float *)((int)puVar6 + 0x9c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar2;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar14;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar14 * fVar14;
        iVar5 = (int)lVar17;
        lVar11 = lVar11 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar14 * fVar14;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar10 - 100;
      pfVar20 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar17 = lVar19;
      do {
        fVar14 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar11 = lVar12;
      fVar14 = fVar8;
      do {
        iVar5 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar14 = fVar14 + *(float *)(iVar5 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                 *(float *)(iVar7 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar9 = (fVar14 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_4;
    fVar3 = param_4[1];
    fVar1 = ABS(*param_4);
    fVar2 = ABS(param_4[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar18 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar19 = uVar10 - 0x74;
      lVar17 = uVar10 - 0x84;
      lVar21 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar6 + 0x11) = fVar14;
      *(float *)(puVar6 + 0x10) = fVar14;
      *(float *)((int)puVar6 + 0x84) = fVar14;
      *(float *)((int)puVar6 + 0x7c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar14;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar5 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar14 * fVar14;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar10 - 0x84;
      pfVar20 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar17 = lVar19;
      do {
        fVar14 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar7 = (int)lVar19;
        lVar12 = lVar12 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar5 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    pfVar4[4] = 1.0;
    if (param_2 <= 0.0) {
      *pfVar4 = *param_4;
      pfVar4[1] = param_4[1];
      pfVar4[2] = param_4[2];
      pfVar4[3] = param_4[3];
      param_2 = (double)SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]
                            );
    }
    else {
      fVar14 = *param_4;
      dVar22 = (double)SQRT(param_4[2] * param_4[2] + fVar14 * fVar14 + param_4[1] * param_4[1]);
      if (dVar22 == 0.0) {
        *pfVar4 = *param_4;
        pfVar4[1] = param_4[1];
        pfVar4[2] = param_4[2];
        fVar14 = param_4[3];
        pfVar4[2] = 0.0;
        pfVar4[1] = 0.0;
        *pfVar4 = 0.0;
      }
      else {
        fVar3 = (float)(param_2 / dVar22);
        *pfVar4 = fVar14 * fVar3;
        pfVar4[1] = param_4[1] * fVar3;
        pfVar4[2] = param_4[2] * fVar3;
        fVar14 = param_4[3];
      }
      pfVar4[3] = fVar14;
    }
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar14 = (float)FastDoubleToInt((double)(float)(param_1 / param_2));
    pfVar4[5] = fVar14;
    pfVar4[6] = fVar14;
    iVar5 = *(int *)((int)param_3 + 0x24);
    fVar14 = *(float *)((int)param_3 + 0x2c);
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD;
    pMVar13->scale = pMVar13->pClass->gScale * (fVar14 / *(float *)(iVar5 + 0x24));
    sVar16 = FastDoubleToInt((double)(pfVar4[4] * 24.0));
    pMVar13->alpha = sVar16;
    SetColorOfMoby(pMVar13,0xff,0xff,0xff);
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x0184c30 (0xa10 bytes)
// inlined: FastAtan2 @0x184ef0, FastAtan2 @0x1850d0
/* Moby 1009 */

void UpdateMoby_1009(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyClass *pMVar7;
  float *out;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  s8 sVar20;
  float fVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  undefined8 uVar17;
  float *pfVar22;
  longlong lVar21;
  uint uVar25;
  int iVar26;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar39;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar44;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x1c0;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar13;
  puVar8[0x3a] = in_LR;
  puVar8[0x2e] = in_f22;
  puVar8[0x2f] = in_f23;
  puVar8[0x30] = in_f24;
  puVar8[0x31] = in_f25;
  puVar8[0x32] = in_f26;
  puVar8[0x33] = in_f27;
  puVar8[0x34] = in_f28;
  puVar8[0x35] = in_f29;
  puVar8[0x36] = in_f30;
  puVar8[0x37] = in_f31;
  pMVar7 = moby->pClass;
  fVar18 = moby->scale;
  puVar8[0x2d] = unaff_r31;
  iVar12 = worldUpdateTime;
  fVar1 = pMVar7->gScale;
  iVar9 = worldUpdateTime / 6 + (worldUpdateTime >> 0x1f);
  uVar25 = (int)moby - (int)g_MobyInstance;
  puVar8[0x2c] = unaff_r30;
  out = (float *)moby->pVar;
  iVar26 = ((int)uVar25 >> 8) + (uint)((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
  iVar19 = iVar26 / 6 + (iVar26 >> 0x1f);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar8 + 0xe) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar8 + 0x74) = fVar2;
  fVar2 = (moby->pos).w;
  *(f32 *)(puVar8 + 0xf) = fVar3;
  *(f32 *)((int)puVar8 + 0x7c) = fVar2;
  moby->scale = (fVar1 - fVar18) * 0.1 + fVar18;
  puVar8[0x2b] = unaff_r29;
  puVar8[0x2a] = unaff_r28;
  puVar8[0x29] = unaff_r27;
  puVar8[0x28] = unaff_r26;
  if (iVar12 + (iVar9 - (iVar9 >> 0x1f)) * -6 == iVar26 + (iVar19 - (iVar19 >> 0x1f)) * -6) {
    out[0xb] = 0.0;
  }
  sVar20 = FastDoubleToInt((double)(out[4] * 24.0));
  moby->alpha = sVar20;
  fVar18 = out[0xb];
  if (((fVar18 == 0.0) ||
      (*(char *)((int)fVar18 + 0x20) == -3 || *(char *)((int)fVar18 + 0x20) == -2)) ||
     (fVar4 = *(float *)((int)fVar18 + 0x14) - out[9],
     fVar1 = *(float *)((int)fVar18 + 0x10) - out[8],
     fVar5 = *(float *)((int)fVar18 + 0x18) - out[10],
     3.0 < SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4))) {
    fVar18 = (float)M1009_00184130
                              (0x3fd0c15240000000,0x3fd0c15240000000,0x404e000000000000,
                               lVar14 + 0x10,lVar14 + 0x40);
    out[0xb] = fVar18;
  }
  if (fVar18 != 0.0) {
    out[8] = *(float *)((int)fVar18 + 0x10);
    out[9] = *(float *)((int)fVar18 + 0x14);
    out[10] = *(float *)((int)fVar18 + 0x18);
    fVar5 = *(float *)((int)fVar18 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)((int)fVar18 + 0x14) - (moby->pos).y;
    fVar18 = *out;
    fVar1 = out[1];
    fVar4 = out[2];
    fVar11 = ABS(fVar5);
    fVar10 = ABS(fVar6);
    *(float *)((int)puVar8 + 0xdc) = fVar5;
    *(float *)(puVar8 + 0x1c) = fVar6;
    *(float *)((int)puVar8 + 0xe4) = fVar11 - fVar10;
    dVar41 = 0.0;
    fVar5 = (moby->rotation).z;
    dVar42 = 0.7853981852531433;
    uVar23 = (ulonglong)(*(uint *)((int)puVar8 + 0xdc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1d) & 4;
    dVar44 = (double)SQRT(fVar4 * fVar4 + fVar18 * fVar18 + fVar1 * fVar1);
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar18 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar8 + 0xdc));
    if (*(float *)((int)puVar8 + 0xe4) - 0.0 < 0.0) {
      fVar4 = fVar10;
    }
    fVar6 = ABS(*(float *)(puVar8 + 0x1c));
    if (*(float *)((int)puVar8 + 0xe4) - 0.0 < 0.0) {
      fVar6 = fVar11;
    }
    dVar28 = dVar41;
    if (0.0 < fVar4) {
      lVar15 = uVar13 - 0x1b0;
      lVar21 = uVar13 - 0xb8;
      lVar24 = uVar13 - 0xa8;
      lVar27 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x114) = fVar4;
      *(float *)((int)puVar8 + 0x10c) = fVar4;
      *(float *)(puVar8 + 0x22) = fVar4;
      *(float *)(puVar8 + 0x21) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar6;
      *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) * fVar4;
      *(float *)((int)puVar8 + 0x114) = *(float *)((int)puVar8 + 0x114) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0xf8) * fVar4 * fVar4;
        iVar19 = (int)lVar21;
        lVar15 = lVar15 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar13 - 0xb8;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar21 = lVar24;
      do {
        fVar4 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x108) = *(float *)((int)lVar15 + 0x108) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar15 = lVar16;
      do {
        iVar19 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar9 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0x108)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar18);
    }
    dVar28 = (double)FastDiffRots(dVar28,(double)fVar5);
    fVar18 = out[0xb];
    fVar1 = (moby->pos).y - *(float *)((int)fVar18 + 0x14);
    fVar4 = (moby->pos).x - *(float *)((int)fVar18 + 0x10);
    dVar43 = ABS(dVar28);
    fVar5 = *(float *)((int)fVar18 + 0x18) - (moby->pos).z;
    fVar18 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    *(float *)((int)puVar8 + 0xd4) = fVar5;
    dVar34 = ABS((double)fVar5);
    dVar32 = ABS((double)fVar18);
    *(float *)(puVar8 + 0x1a) = fVar18;
    *(float *)(puVar8 + 0x1b) = (float)(dVar32 - dVar34);
    uVar23 = (ulonglong)(*(uint *)(puVar8 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xd4) >> 0x1d) & 4;
    dVar40 = ABS((double)*(float *)(puVar8 + 0x1a));
    if ((double)*(float *)(puVar8 + 0x1b) - dVar41 < 0.0) {
      dVar40 = dVar34;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar18 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar34 = ABS((double)*(float *)((int)puVar8 + 0xd4));
    if ((double)*(float *)(puVar8 + 0x1b) - dVar41 < 0.0) {
      dVar34 = dVar32;
    }
    fVar4 = (moby->rotation).y;
    if (dVar41 < dVar40) {
      lVar15 = uVar13 - 0x1b0;
      lVar21 = uVar13 - 0xd8;
      lVar24 = uVar13 - 200;
      lVar27 = 2;
      fVar5 = (float)(dVar34 - dVar40) / (float)(dVar34 + dVar40);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xf4) = fVar5;
      *(float *)((int)puVar8 + 0xec) = fVar5;
      *(float *)(puVar8 + 0x1e) = fVar5;
      *(float *)(puVar8 + 0x1d) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar6;
      *(float *)(puVar8 + 0x1e) = *(float *)(puVar8 + 0x1e) * fVar5;
      *(float *)((int)puVar8 + 0xf4) = *(float *)((int)puVar8 + 0xf4) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xd8) * fVar5 * fVar5;
        iVar19 = (int)lVar21;
        lVar15 = lVar15 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar13 - 0xd8;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0xe8) = *(float *)((int)lVar15 + 0xe8) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar15 = 2;
      do {
        iVar19 = (int)lVar16;
        iVar9 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar19 + 0xe8)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar41 = (double)((float)(dVar41 + dVar42) * fVar1 + fVar18);
    }
    dVar41 = (double)FastDiffRots(-dVar41,(double)fVar4);
    dVar42 = ABS(dVar41);
    if ((0.2617993950843811 <= dVar43) || (0.2617993950843811 <= dVar42)) {
      out[0xb] = 0.0;
    }
    else {
      dVar40 = 0.8726646304130554;
      if ((double)(g_FrameTime * 0.87266463) - dVar43 < 0.0) {
        dVar28 = (double)(float)((double)(g_FrameTime * 0.87266463) *
                                (double)(float)(dVar28 / dVar43));
      }
      dVar28 = (double)FastWrapRot((moby->rotation).z,(float)dVar28);
      (moby->rotation).z = (float)dVar28;
      if ((double)(float)((double)g_FrameTime * dVar40) - dVar42 < 0.0) {
        dVar41 = (double)(float)((double)(float)((double)g_FrameTime * dVar40) *
                                (double)(float)(dVar41 / dVar42));
      }
      dVar41 = (double)FastWrapRot((moby->rotation).y,(float)dVar41);
      (moby->rotation).y = (float)dVar41;
      MB_SphericalToVector((float)dVar44,(moby->rotation).z,(float)-dVar41,out);
      STUB_00065468(lVar14 + 0x10,(ulonglong)(uint)out[0xb] + 0x10);
    }
  }
  fVar18 = (moby->pos).x + *out;
  (moby->pos).x = fVar18;
  fVar1 = (moby->pos).y + out[1];
  (moby->pos).y = fVar1;
  fVar4 = (moby->pos).z + out[2];
  (moby->pos).z = fVar4;
  if (2.0 <= fVar18) {
    if (((fVar18 <= 1021.0) && (2.0 <= fVar1)) &&
       ((fVar1 <= 1021.0 && ((2.0 <= fVar4 && (fVar4 <= 1021.0)))))) {
      dVar41 = 1.0;
      SetCollDamIn(0x3ff0000000000000,uVar13 - 0x120,lVar14,0x10000);
      fVar18 = out[7];
      *(MOBY_OCLASSES *)((int)puVar8 + 0xba) = moby->oClass;
      iVar19 = CollLine(uVar13 - 0x150,lVar14 + 0x10,0,fVar18,uVar13 - 0x120);
      if (iVar19 != 0) {
        iVar19 = 0;
        dVar43 = 0.0;
        dVar34 = -1.0;
        dVar32 = 0.5;
        dVar40 = 5.0;
        dVar28 = 9.0;
        dVar44 = 10.5;
        dVar42 = 15.5;
        uVar39 = 0x40f5f90000000000;
        do {
          *(undefined4 *)(puVar8 + 0x10) = 0;
          *(undefined4 *)((int)puVar8 + 0x84) = 0;
          *(undefined4 *)(puVar8 + 0x11) = 0;
          *(undefined4 *)((int)puVar8 + 0x8c) = 0;
          dVar29 = (double)MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)(puVar8 + 0x10) = (float)dVar29;
          dVar29 = (double)MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)((int)puVar8 + 0x84) = (float)dVar29;
          dVar29 = (double)MB_randRangeFloat((float)dVar34,(float)dVar41);
          *(float *)(puVar8 + 0x11) = (float)dVar29;
          FastVecNormalize(uVar13 - 0x130,out,0xa10980);
          dVar31 = (double)*(float *)((int)puVar8 + 0x94);
          dVar33 = (double)*(float *)(puVar8 + 0x12);
          fVar1 = *(float *)((int)puVar8 + 0x84);
          dVar36 = (double)*(float *)(puVar8 + 0x13);
          fVar4 = *(float *)(puVar8 + 0x10);
          fVar5 = *(float *)(puVar8 + 0x11);
          dVar38 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
          dVar30 = (double)g_FrameTime;
          *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0x9c);
          fVar18 = (float)((double)(float)((double)SQRT((float)(dVar36 * dVar36 +
                                                               (double)(float)(dVar33 * dVar33 +
                                                                              (double)(float)(dVar31
                                                                                             * 
                                                  dVar31)))) * dVar32) / dVar38);
          dVar29 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar29 = (double)(fVar5 * fVar18);
          }
          dVar35 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar35 = (double)(fVar1 * fVar18);
          }
          dVar37 = dVar43;
          if (dVar43 - dVar38 < 0.0) {
            dVar37 = (double)(fVar4 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar29 = (double)(fVar5 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar35 = (double)(fVar1 * fVar18);
          }
          if (dVar38 - dVar43 < 0.0) {
            dVar37 = (double)(fVar4 * fVar18);
          }
          *(float *)(puVar8 + 0x11) = (float)(dVar36 + dVar29);
          *(float *)((int)puVar8 + 0x84) = (float)(dVar31 + dVar35);
          *(float *)(puVar8 + 0x10) = (float)(dVar33 + dVar37);
          dVar29 = (double)MB_randRangeFloat
                                     ((float)(dVar30 * dVar40),(float)(dVar30 * dVar28));
          fVar1 = *(float *)((int)puVar8 + 0x84);
          fVar4 = *(float *)(puVar8 + 0x10);
          fVar5 = *(float *)(puVar8 + 0x11);
          dVar31 = (double)animationSpeed;
          dVar30 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
          puVar8[0x25] = (longlong)(int)(dVar31 * dVar44);
          puVar8[0x25] = (longlong)(int)(dVar31 * dVar42);
          fVar18 = (float)(dVar29 / dVar30);
          dVar29 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar29 = (double)(fVar4 * fVar18);
          }
          dVar31 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar31 = (double)(fVar1 * fVar18);
          }
          dVar33 = dVar43;
          if (dVar43 - dVar30 < 0.0) {
            dVar33 = (double)(fVar5 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar29 = (double)(fVar4 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar31 = (double)(fVar1 * fVar18);
          }
          if (dVar30 - dVar43 < 0.0) {
            dVar33 = (double)(fVar5 * fVar18);
          }
          *(float *)(puVar8 + 0x10) = (float)dVar29;
          *(float *)((int)puVar8 + 0x84) = (float)dVar31;
          *(float *)(puVar8 + 0x11) = (float)dVar33;
          uVar17 = MB_randRange
                             (*(undefined4 *)((int)puVar8 + 300),*(undefined4 *)((int)puVar8 + 300))
          ;
          SpawnPart_27(uVar39,lVar14 + 0x10,uVar13 - 0x140,0x7f2f4f6f,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 5);
        DeleteMoby(moby);
        return;
      }
      iVar19 = FastDecTimerS32(out + 6);
      if (iVar19 == 0) {
        return;
      }
      fVar18 = out[4];
      out[4] = fVar18 * 0.74;
      if (0.02 <= fVar18 * 0.74) {
        return;
      }
      DeleteMoby(moby);
      return;
    }
  }
  DeleteMoby(moby);
  return;
}


// 0x0185640 (0x14 bytes)
void M1009_00185640(void)

{
  DAT_0073b944 = 0x10000;
  return;
}



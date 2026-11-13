// game/update/moby417.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x367688-0x367dc0
#include "game/update/moby417.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0367688 (0x680 bytes)
// inlined: FastAtan2 @0x3677bc, FastAtan2 @0x367b90
MobyInstance *
M417_00367688
          (double param_1,double param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar14;
  float *pfVar16;
  longlong lVar15;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  puVar7[0x24] = in_LR;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1b] = unaff_r30;
  puVar7[0x1c] = unaff_r31;
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x18] = unaff_r27;
  puVar7[0x17] = unaff_r26;
  pMVar13 = CreateMoby(0x1a1);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar17 = (float *)pMVar13->pVar;
    dVar27 = 3.1415927410125732;
    dVar20 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar21 = (double)MB_randRangeFloat((float)param_1,(float)param_2);
    fVar5 = *param_5;
    fVar6 = param_5[1];
    fVar1 = ABS(*param_5);
    fVar2 = ABS(param_5[1]);
    *(float *)((int)puVar7 + 0x74) = fVar1 - fVar2;
    dVar26 = 0.0;
    dVar28 = 0.7853981852531433;
    uVar14 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    fVar5 = fVar1;
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (0.0 < fVar5) {
      lVar11 = uVar10 - 0x100;
      lVar18 = uVar10 - 0x68;
      lVar15 = uVar10 - 0x78;
      lVar19 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0xa4) = fVar5;
      *(float *)((int)puVar7 + 0x9c) = fVar5;
      *(float *)(puVar7 + 0x14) = fVar5;
      *(float *)(puVar7 + 0x13) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar5 * fVar5;
        iVar8 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar18 = uVar10 - 0x78;
      pfVar16 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar15 = lVar18;
      do {
        fVar5 = *pfVar16;
        fVar2 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar5;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar11 = lVar12;
      do {
        iVar8 = (int)lVar11;
        iVar9 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar1);
    }
    dVar22 = (double)FastSubRots((float)dVar24,(float)dVar20);
    fVar5 = (float)(dVar20 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar20);
    if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
      dVar24 = dVar20;
    }
    fVar6 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar6 = fVar5;
    }
    dVar23 = (double)(float)(-3.141592502593994 - dVar20);
    if ((double)(float)(-3.141592502593994 - dVar20) - dVar24 < 0.0) {
      dVar23 = dVar24;
    }
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
      fVar2 = fVar6;
    }
    dVar20 = (double)(float)(dVar23 * dVar23);
    fVar3 = fVar2 * fVar2;
    dVar25 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
    fVar6 = fVar3 * fVar3 * fVar2;
    dVar24 = (double)(float)(dVar20 * dVar25);
    fVar1 = fVar3 * fVar6;
    fVar5 = (float)((double)((float)(dVar20 * dVar24) * 2.601887e-06 +
                            (float)(dVar24 * -0.0001980741071747616 +
                                   (double)(float)(dVar25 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar20 * dVar23) *
                                                                  -0.16666656732559204 + dVar23))))
                   * dVar21);
    fVar6 = (float)((double)(fVar3 * fVar1 * 2.601887e-06 +
                            fVar1 * -0.0001980741 +
                            fVar6 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) * dVar21);
    (pMVar13->pos).y = fVar5;
    (pMVar13->pos).x = fVar6;
    (pMVar13->pos).z = 0.0;
    dVar21 = (double)g_FrameTime;
    dVar20 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar20 == dVar26) {
      *pfVar17 = fVar6;
      pfVar17[1] = (pMVar13->pos).y;
      pfVar17[2] = (pMVar13->pos).z;
      fVar5 = (pMVar13->pos).w;
      pfVar17[2] = 0.0;
      pfVar17[1] = 0.0;
      *pfVar17 = 0.0;
      dVar20 = dVar26;
      dVar24 = dVar26;
    }
    else {
      fVar5 = (float)((double)(float)(dVar21 * dVar22) / dVar20);
      dVar20 = (double)(fVar6 * fVar5);
      *pfVar17 = fVar6 * fVar5;
      fVar6 = (pMVar13->pos).y * fVar5;
      dVar24 = (double)fVar6;
      pfVar17[1] = fVar6;
      pfVar17[2] = (pMVar13->pos).z * fVar5;
      fVar5 = (pMVar13->pos).w;
    }
    pfVar17[3] = fVar5;
    fVar2 = param_5[1];
    fVar1 = *param_5;
    fVar6 = (float)(dVar27 - dVar22);
    fVar5 = param_5[2];
    pfVar17[2] = 0.0;
    dVar27 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar5 = (float)((double)(float)(dVar21 * (double)(fVar6 * fVar6 * 0.25)) / dVar27);
    dVar22 = (double)(fVar2 * fVar5);
    dVar23 = (double)(fVar1 * fVar5);
    dVar21 = dVar26;
    if (dVar26 - dVar27 < 0.0) {
      dVar21 = dVar22;
    }
    dVar25 = dVar26;
    if (dVar26 - dVar27 < 0.0) {
      dVar25 = dVar23;
    }
    if (dVar27 - dVar26 < 0.0) {
      dVar21 = dVar22;
    }
    if (dVar27 - dVar26 < 0.0) {
      dVar25 = dVar23;
    }
    pfVar17[1] = (float)(dVar24 + dVar21);
    *pfVar17 = (float)(dVar20 + dVar25);
    fVar5 = (pMVar13->pos).x + *param_4;
    (pMVar13->pos).x = fVar5;
    fVar2 = (pMVar13->pos).y + param_4[1];
    (pMVar13->pos).y = fVar2;
    fVar1 = (pMVar13->pos).z + param_4[2];
    (pMVar13->pos).z = fVar1;
    (pMVar13->pos).x = fVar5 + *param_5;
    (pMVar13->pos).y = fVar2 + param_5[1];
    (pMVar13->pos).z = fVar1 + param_5[2];
    *pfVar17 = *pfVar17 * 0.35;
    pfVar17[1] = pfVar17[1] * 0.35;
    pfVar17[2] = pfVar17[2] * 0.35;
    pMVar13->unk58 = pMVar13->unk58 * 0.5;
    fVar2 = *pfVar17;
    fVar1 = pfVar17[1];
    dVar27 = ABS((double)*pfVar17);
    dVar20 = ABS((double)pfVar17[1]);
    *(float *)(puVar7 + 0xe) = (float)(dVar27 - dVar20);
    fVar5 = pMVar13->scale;
    uVar14 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar1 >> 0x1d) & 4
    ;
    dVar21 = dVar27;
    if ((double)*(float *)(puVar7 + 0xe) - dVar26 < 0.0) {
      dVar21 = dVar20;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    if ((double)*(float *)(puVar7 + 0xe) - dVar26 < 0.0) {
      dVar20 = dVar27;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (dVar26 < dVar21) {
      lVar11 = uVar10 - 0x100;
      lVar15 = uVar10 - 0x98;
      lVar18 = uVar10 - 0x88;
      lVar19 = 2;
      fVar3 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)((int)puVar7 + 0x7c) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar3;
      *(float *)(puVar7 + 0xf) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x78) = *(float *)((int)lVar11 + 0x68) * fVar3 * fVar3;
        iVar8 = (int)lVar15;
        lVar11 = lVar11 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar18 = uVar10 - 0x98;
      pfVar17 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar15 = lVar18;
      do {
        fVar3 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar11 + 0x78) = *(float *)((int)lVar11 + 0x78) * fVar3;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar11 = 2;
      do {
        iVar8 = (int)lVar12;
        iVar9 = (int)lVar18;
        lVar12 = lVar12 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0x78)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar26 = (double)((float)(dVar26 + dVar28) * fVar2 + fVar1);
    }
    (pMVar13->rotation).z = (float)dVar26;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->scale = fVar5 * (fVar6 * 2.0 + 1.0);
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x0367d10 (0xb0 bytes)
/* Moby 417 */

void UpdateMoby_417(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  fVar2 = DAT_0071f408 * -0.01999998 + 1.0;
  *pfVar1 = *pfVar1 * fVar2;
  pfVar1[1] = pfVar1[1] * fVar2;
  pfVar1[2] = pfVar1[2] * fVar2;
  if ((moby->field43_0x70 & 2U) != 0) {
    DeleteMoby(moby);
  }
  return;
}



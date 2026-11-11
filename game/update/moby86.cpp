// game/update/moby86.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x496420-0x496f44
#include <math.h>
#include "game/update/moby86.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby998.h"
#include "idol/fastfunc.h"

// 0x0496420 (0x388 bytes)
// inlined: FastRSqrt @0x496558, FastRSqrt @0x4966a0
longlong M86_00496420
                   (double param_1,int param_2,int *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar5 = (int)param_4;
  iVar13 = *param_3 + -1;
  iVar4 = iVar5 + (int)param_5;
  lVar12 = (longlong)
           (int)(iVar4 + ((uint)(ZERO_MASK(iVar5)) &
                         (iVar13 + ((uint)(-param_5 >> 0x3f) & (iVar5 + 1) - iVar13)) - iVar4));
  iVar4 = (int)(param_4 << 4);
  lVar12 = lVar12 + (ZERO_MASK((iVar13 - iVar5)) &
                    ((longlong)(iVar5 + -1) + (-param_5 >> 0x3f & -(longlong)(iVar5 + -1))) - lVar12
                    );
  iVar5 = (int)lVar12;
  fVar1 = *(float *)((int)param_3 + iVar4 + 0x14);
  fVar2 = *(float *)((int)param_3 + iVar4 + 0x10);
  fVar6 = (float)param_3[iVar5 * 4 + 5] - fVar1;
  fVar7 = (float)param_3[iVar5 * 4 + 4] - fVar2;
  fVar3 = *(float *)((int)param_3 + iVar4 + 0x18);
  fVar9 = (float)param_3[iVar5 * 4 + 6] - fVar3;
  dVar14 = 0.0;
  iVar4 = param_3[iVar5 * 4 + 7];
  fVar8 = fVar9 * fVar9 + fVar7 * fVar7 + fVar6 * fVar6;
  fVar10 = SQRT(fVar8);
  dVar15 = dVar14;
  dVar18 = dVar14;
  dVar20 = dVar14;
  if (fVar10 != 0.0) {
    fVar11 = 1.0 / SQRT(fVar8);
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar8 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    dVar20 = (double)(fVar7 * fVar11);
    dVar18 = (double)(fVar6 * fVar11);
    dVar15 = (double)(fVar9 * fVar11);
  }
  fVar1 = (float)(dVar18 * (double)(*(float *)(param_2 + 0x14) - fVar1) +
                 (double)(float)(dVar15 * (double)(*(float *)(param_2 + 0x18) - fVar3) +
                                (double)(float)(dVar20 * (double)(*(float *)(param_2 + 0x10) - fVar2
                                                                 ) + param_1)));
  if (fVar10 < fVar1) {
    iVar4 = iVar5 + (int)param_5;
    fVar1 = fVar1 - fVar10;
    iVar4 = iVar4 + ((uint)(ZERO_MASK(iVar5)) &
                    (iVar13 + ((uint)(-param_5 >> 0x3f) & (iVar5 + 1) - iVar13)) - iVar4);
    iVar4 = iVar4 + ((uint)(ZERO_MASK((iVar13 - iVar5))) &
                    (iVar5 + -1 + ((uint)(-param_5 >> 0x3f) & -(iVar5 + -1))) - iVar4);
    fVar2 = (float)param_3[iVar4 * 4 + 5] - (float)param_3[iVar5 * 4 + 5];
    fVar3 = (float)param_3[iVar4 * 4 + 4] - (float)param_3[iVar5 * 4 + 4];
    fVar6 = (float)param_3[iVar4 * 4 + 6] - (float)param_3[iVar5 * 4 + 6];
    iVar4 = param_3[iVar4 * 4 + 7];
    fVar7 = fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2;
    param_4 = lVar12;
    dVar15 = dVar14;
    dVar18 = dVar14;
    dVar20 = dVar14;
    if (SQRT(fVar7) != 0.0) {
      fVar8 = 1.0 / SQRT(fVar7);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar15 = (double)(fVar6 * fVar8);
      dVar18 = (double)(fVar2 * fVar8);
      dVar20 = (double)(fVar3 * fVar8);
    }
  }
  iVar5 = (int)(param_4 << 4);
  fVar2 = SQRT((float)(dVar15 * dVar15 +
                      (double)(float)(dVar20 * dVar20 + (double)(float)(dVar18 * dVar18))));
  dVar16 = (double)(fVar1 / fVar2);
  dVar17 = dVar14;
  if (0.0 - fVar2 < 0.0) {
    dVar17 = (double)(float)(dVar20 * dVar16);
  }
  dVar19 = dVar14;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(float)(dVar18 * dVar16);
  }
  if (0.0 - fVar2 < 0.0) {
    dVar14 = (double)(float)(dVar15 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar17 = (double)(float)(dVar20 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(float)(dVar18 * dVar16);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar14 = (double)(float)(dVar15 * dVar16);
  }
  *(float *)(param_2 + 0x10) = (float)(dVar17 + (double)*(float *)((int)param_3 + iVar5 + 0x10));
  *(float *)(param_2 + 0x14) = (float)(dVar19 + (double)*(float *)((int)param_3 + iVar5 + 0x14));
  fVar1 = *(float *)((int)param_3 + iVar5 + 0x18);
  *(int *)(param_2 + 0x1c) = iVar4;
  *(float *)(param_2 + 0x18) = (float)(dVar14 + (double)fVar1);
  return param_4;
}


// 0x0496800 (0x744 bytes)
/* Moby 86 */

void UpdateMoby_86(MobyInstance *moby)

{
  float *pfVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  int iVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
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
  undefined8 uVar38;
  double dVar39;
  
  pfVar1 = (float *)moby->pVar;
  if (DAT_010e04b0 == '\0') {
    dVar12 = (double)FastIntToDouble(pfVar1[0x2a]);
    DAT_010e04b0 = '\x01';
    DAT_008c7d5c = (float)(dVar12 * 2.072999954223633);
  }
  if (pfVar1[0x25] == 0.0) {
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    fVar7 = (moby->pos).w;
    pfVar1[0x26] = 0.0;
    pfVar1[3] = fVar7;
  }
  else if (pfVar1[0x2a] == 0.0) {
    fVar7 = 0.0;
    for (iVar9 = MobyUpdateChainStart; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
      if ((*(byte *)(iVar9 + 0x20) < 0x80) && (*(short *)(iVar9 + 0xa6) == 0x55)) {
        fVar7 = (float)((int)fVar7 + 1);
        pfVar1[0x2a] = fVar7;
      }
    }
    dVar12 = (double)FastIntToDouble(fVar7);
    DAT_008c7d5c = (float)(dVar12 * 2.072999954223633);
  }
  if (pfVar1[0x28] == -NAN) {
    dVar12 = (double)FastWrapRot(pfVar1[0x26],DAT_0071f408 * 0.0034906587);
    fVar7 = (float)(dVar12 + 1.570796251296997);
    fVar3 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar3 = fVar7;
    }
    fVar5 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    pfVar1[0x26] = (float)dVar12;
    fVar7 = fVar5 * fVar5;
    fVar3 = fVar7 * fVar7 * fVar5;
    fVar6 = fVar7 * fVar3;
    (moby->pos).x =
         pfVar1[0x27] *
         (fVar7 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar3 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) +
         *pfVar1;
    fVar7 = pfVar1[0x26];
    fVar3 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar3 = fVar7;
    }
    fVar5 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar7 = fVar5 * fVar5;
    fVar3 = fVar7 * fVar7 * fVar5;
    fVar6 = fVar7 * fVar3;
    (moby->pos).y =
         pfVar1[0x27] *
         (fVar7 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar3 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) +
         pfVar1[1];
  }
  else if (pfVar1[0x25] != 0.0) {
    fVar7 = pfVar1[0x24];
    pfVar10 = pfVar1;
    fVar3 = 10000.0;
    while (0 < (int)fVar7) {
      fVar5 = (moby->pos).y - *(float *)((int)pfVar10[4] + 0x14);
      fVar6 = (moby->pos).x - *(float *)((int)pfVar10[4] + 0x10);
      fVar7 = (float)((int)fVar7 + -1);
      pfVar10 = pfVar10 + 1;
      fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      if (fVar5 - fVar3 < 0.0) {
        fVar3 = fVar5;
      }
    }
    dVar12 = 0.0;
    if (fVar3 - 3.0 < 0.0) {
      dVar12 = (double)(3.0 - fVar3);
    }
    fVar7 = (float)M86_00496420
                             (dVar12,moby,Splines[(int)pfVar1[0x28]],pfVar1[0x29],1);
    pfVar1[0x29] = fVar7;
  }
  if (pfVar1[0x25] == 0.0) {
    pfVar1[0x25] = 1.4013e-45;
    pfVar1[0x2a] = 0.0;
    if (0 < (int)pfVar1[0x24]) {
      iVar9 = 0;
      dVar12 = 0.699999988079071;
      dVar28 = 1.2999999523162842;
      dVar29 = 0.6000000238418579;
      dVar30 = 1.2000000476837158;
      dVar31 = 0.8999999761581421;
      dVar32 = 1.570796251296997;
      dVar33 = 3.141592502593994;
      dVar34 = -3.141592502593994;
      dVar35 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar39 = 2.601886990305502e-06;
      pfVar10 = pfVar1;
      do {
        pfVar10[4] = 0.0;
        pMVar8 = CreateMoby(BUTTERFLY);
        if (pMVar8 != (MobyInstance *)0x0) {
          pvVar2 = pMVar8->pVar;
          pfVar10[4] = (float)pMVar8;
          pMVar8->updateDistance = '\x7f';
          pMVar8->drawDistance = 0x7f;
          dVar13 = (double)MB_randRangeFloat((float)dVar12,(float)dVar28);
          pMVar8->scale = (float)((double)pMVar8->scale * dVar13);
          dVar13 = (double)MB_randRot();
          (pMVar8->rotation).z = (float)dVar13;
          dVar13 = (double)MB_randRangeFloat((float)dVar29,(float)dVar30);
          pMVar8->unk58 = (float)dVar13;
          *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
          *(undefined4 *)((int)pvVar2 + 0x18) = 0;
          *(undefined4 *)((int)pvVar2 + 0x14) = 0;
          *(undefined4 *)((int)pvVar2 + 0x10) = 0;
          *(undefined2 *)((int)pvVar2 + 0x44) = 0;
          *(undefined4 *)((int)pvVar2 + 0x4c) = 0x41200000;
          (pMVar8->pos).x = (moby->pos).x;
          (pMVar8->pos).y = (moby->pos).y;
          (pMVar8->pos).z = (moby->pos).z;
          (pMVar8->pos).w = (moby->pos).w;
          dVar14 = (double)MB_randRot();
          dVar15 = (double)MB_randRot();
          dVar16 = (double)MB_randRangeFloat((float)dVar29,(float)dVar31);
          dVar17 = (double)(float)(dVar14 + dVar32);
          dVar19 = (double)(float)(dVar15 + dVar32);
          dVar13 = (double)(float)(dVar33 - dVar15);
          if (dVar15 - (double)(float)(dVar33 - dVar15) < 0.0) {
            dVar13 = dVar15;
          }
          dVar11 = (double)(float)(dVar33 - dVar14);
          if (dVar14 - (double)(float)(dVar33 - dVar14) < 0.0) {
            dVar11 = dVar14;
          }
          dVar20 = (double)(float)(dVar33 - dVar17);
          if (dVar17 - (double)(float)(dVar33 - dVar17) < 0.0) {
            dVar20 = dVar17;
          }
          dVar21 = (double)(float)(dVar33 - dVar19);
          if (dVar19 - (double)(float)(dVar33 - dVar19) < 0.0) {
            dVar21 = dVar19;
          }
          dVar18 = (double)(float)(dVar34 - dVar15);
          if ((double)(float)(dVar34 - dVar15) - dVar13 < 0.0) {
            dVar18 = dVar13;
          }
          dVar13 = (double)(float)(dVar34 - dVar14);
          if ((double)(float)(dVar34 - dVar14) - dVar11 < 0.0) {
            dVar13 = dVar11;
          }
          dVar14 = (double)(float)(dVar34 - dVar17);
          if ((double)(float)(dVar34 - dVar17) - dVar20 < 0.0) {
            dVar14 = dVar20;
          }
          dVar17 = (double)(float)(dVar18 * dVar18);
          dVar15 = (double)(float)(dVar34 - dVar19);
          if ((double)(float)(dVar34 - dVar19) - dVar21 < 0.0) {
            dVar15 = dVar21;
          }
          dVar21 = (double)(float)(dVar13 * dVar13);
          dVar20 = (double)(float)(dVar14 * dVar14);
          dVar23 = (double)(float)(dVar15 * dVar15);
          dVar25 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
          dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar13));
          dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar14));
          dVar24 = (double)(float)(dVar17 * dVar25);
          dVar26 = (double)(float)(dVar21 * dVar22);
          dVar27 = (double)(float)(dVar20 * dVar19);
          dVar11 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar15));
          fVar7 = (float)((double)(float)(dVar17 * dVar24) * dVar39 +
                         (double)(float)(dVar24 * dVar37 +
                                        (double)(float)(dVar25 * dVar36 +
                                                       (double)(float)((double)(float)(dVar17 * 
                                                  dVar18) * dVar35 + dVar18))));
          dVar17 = (double)(float)(dVar23 * dVar11);
          (pMVar8->pos).y =
               (float)((double)((float)((double)(float)(dVar21 * dVar26) * dVar39 +
                                       (double)(float)(dVar26 * dVar37 +
                                                      (double)(float)(dVar22 * dVar36 +
                                                                     (double)(float)((double)(float)
                                                  (dVar21 * dVar13) * dVar35 + dVar13)))) * fVar7) *
                       dVar16 + (double)(pMVar8->pos).y);
          (pMVar8->pos).x =
               (float)((double)((float)((double)(float)(dVar20 * dVar27) * dVar39 +
                                       (double)(float)(dVar27 * dVar37 +
                                                      (double)(float)(dVar19 * dVar36 +
                                                                     (double)(float)((double)(float)
                                                  (dVar20 * dVar14) * dVar35 + dVar14)))) * fVar7) *
                       dVar16 + (double)(pMVar8->pos).x);
          (pMVar8->pos).z =
               (float)((double)(float)((double)(float)(dVar23 * dVar17) * dVar39 +
                                      (double)(float)(dVar17 * dVar37 +
                                                     (double)(float)(dVar11 * dVar36 +
                                                                    (double)(float)((double)(float)(
                                                  dVar23 * dVar15) * dVar35 + dVar15)))) * dVar16 +
                      (double)(pMVar8->pos).z);
          *(undefined4 *)((int)pvVar2 + 0x48) = 0x3f872b02;
          *(undefined2 *)((int)pvVar2 + 0x5c) = 0xffff;
          *(undefined4 *)((int)pvVar2 + 0x40) = 0x3b449ba6;
          *(undefined4 *)((int)pvVar2 + 0x50) = 0;
          *(vec4 **)((int)pvVar2 + 0x54) = &moby->pos;
          *(undefined4 *)((int)pvVar2 + 0x58) = 0;
          *(undefined2 *)((int)pvVar2 + 0x5e) = 2;
          *(undefined2 *)((int)pvVar2 + 0x60) = 0x55;
          *(undefined4 *)((int)pvVar2 + 0x70) = 0x3fd8d4fe;
          *(undefined4 *)((int)pvVar2 + 0x90) = 0x3f800000;
          *(undefined2 *)((int)pvVar2 + 0x62) = 0x1ee;
          *(undefined4 *)((int)pvVar2 + 0x74) = 0x3fd8d4fe;
          *(undefined4 *)((int)pvVar2 + 0x94) = 0x40a00000;
          UpdateMobyTransform(pMVar8);
        }
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 < (int)pfVar1[0x24]);
    }
  }
  else {
    iVar9 = 0;
    if (0 < (int)pfVar1[0x24]) {
      dVar12 = 1.0;
      dVar28 = 0.5;
      dVar29 = 0.05000000074505806;
      uVar38 = 0;
      dVar30 = 0.004307222086936235;
      pfVar10 = pfVar1;
      do {
        fVar3 = pfVar10[4];
        uVar4 = *(undefined4 *)((int)fVar3 + 0x78);
        fVar7 = (float)((double)(float)((double)*(float *)((int)fVar3 + 0x58) + dVar12) * dVar28);
        DAT_008c7d70 = (float)((double)((float)((double)pfVar1[0x27] * dVar30) * DAT_0071f408 *
                                       fVar7) * dVar29) * DAT_0071f40c * fVar7;
        DAT_008c7d74 = (float)((double)pfVar1[0x27] * dVar30) * DAT_0071f408 *
                       (float)((double)(float)((double)*(float *)((int)fVar3 + 0x58) + dVar12) *
                              dVar28);
        FUN_004d0fd0(pfVar1 + 4,pfVar1[0x24],fVar3,uVar4,&DAT_008c7d58);
        FUN_004d2438(uVar38,fVar3,uVar4,&DAT_008c7d58);
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 < (int)pfVar1[0x24]);
    }
  }
  return;
}



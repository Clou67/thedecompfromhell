// game/update/moby1156.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e10c8-0x1e29b4
#include "game/update/moby1156.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1118.h"
#include "game/update/moby1180.h"
#include "idol/fastfunc.h"

// 0x01e10c8 (0x14 bytes)
void M1156_001e10c8(void)

{
  DAT_00764df0 = 0x10000;
  return;
}


// 0x01e1120 (0x9bc bytes)
void M1156_001e1120(int param_1)

{
  float fVar1;
  float fVar2;
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
  float fVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
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
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  
  lVar20 = 0;
  lVar19 = 0;
  puVar18 = &DAT_00ef2730;
  dVar41 = 0.5235987901687622;
  dVar40 = 1.0;
  dVar35 = 30.0;
  dVar39 = 0.01745329238474369;
  dVar38 = 1.5707963705062866;
  dVar37 = 0.0;
  dVar36 = 14.0;
  do {
    dVar24 = (double)DAT_00ef2788;
    dVar25 = (double)DAT_00764e20;
    uVar23 = *puVar18;
    *(undefined4 *)(uVar23 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(uVar23 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(uVar23 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(uVar23 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    dVar25 = (double)(float)((double)(longlong)((int)lVar20 % 3) * dVar41 -
                            (double)(float)((double)(float)(dVar25 * (double)(float)(dVar40 - dVar24
                                                                                    ) + dVar35) *
                                           dVar39));
    dVar42 = (double)(longlong)(int)(((uint)(lVar20 + -3 >> 0x3f) & 0xfffffffe) + 1);
    dVar24 = (double)FastWrapRot(*(float *)(*puVar18 + 0x48),(float)(dVar42 * dVar38));
    *(float *)(*puVar18 + 0x48) = (float)dVar24;
    *(float *)(*puVar18 + 0x44) = (float)((double)DAT_00764e24 * dVar39);
    *(float *)(*puVar18 + 0x40) = (float)dVar25;
    FastEulerToMtx((ulonglong)*puVar18 + 0xc0,(ulonglong)*puVar18 + 0x40);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar4 = *(float *)(param_1 + 200);
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x18);
    dVar34 = (double)DAT_00764e14;
    dVar30 = (double)DAT_00764e1c;
    fVar8 = *(float *)(param_1 + 0xd0);
    fVar9 = *(float *)(param_1 + 0xd4);
    fVar10 = *(float *)(param_1 + 0xd8);
    uVar23 = *puVar18;
    fVar11 = *(float *)(uVar23 + 0xe4);
    fVar12 = *(float *)(uVar23 + 0xe0);
    fVar13 = *(float *)(uVar23 + 0xe8);
    dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar27 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
    fVar1 = (float)(dVar36 / dVar25);
    dVar24 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar24 = (double)(fVar4 * fVar1);
    }
    dVar32 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar32 = (double)(fVar2 * fVar1);
    }
    dVar43 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar43 = (double)(fVar3 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar24 = (double)(fVar4 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar32 = (double)(fVar2 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar43 = (double)(fVar3 * fVar1);
    }
    if (dVar27 == dVar37) {
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar25 = dVar37;
      dVar27 = dVar37;
      dVar28 = dVar37;
    }
    else {
      fVar1 = (float)((double)DAT_00764e18 / dVar27);
      dVar27 = (double)(fVar11 * fVar1);
      dVar25 = (double)(fVar12 * fVar1);
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar28 = (double)(fVar13 * fVar1);
    }
    *(undefined4 *)(uVar23 + 0x1c) = uVar14;
    dVar31 = (double)SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar1 = (float)((double)(float)(dVar42 * dVar30) / dVar31);
    dVar30 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar30 = (double)(fVar10 * fVar1);
    }
    dVar42 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar42 = (double)(fVar9 * fVar1);
    }
    dVar33 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar33 = (double)(fVar8 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar30 = (double)(fVar10 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar42 = (double)(fVar9 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar33 = (double)(fVar8 * fVar1);
    }
    *(float *)(uVar23 + 0x18) = (float)(dVar34 + dVar24) + fVar7 + (float)(dVar28 + dVar30);
    *(float *)(uVar23 + 0x14) = (float)(dVar32 + (double)fVar6) + (float)(dVar27 + dVar42);
    *(float *)(uVar23 + 0x10) = (float)(dVar43 + (double)fVar5) + (float)(dVar25 + dVar33);
    UpdateMobyTransform((MobyInstance *)*puVar18);
    lVar20 = lVar20 + 1;
    puVar18 = puVar18 + 1;
  } while ((int)lVar20 < 6);
  puVar16 = &DAT_00ef2758;
  uVar21 = 0;
  dVar25 = 15.0;
  dVar24 = 0.2617993950843811;
  dVar35 = 1.3962633609771729;
  puVar18 = puVar16;
  do {
    uVar22 = (uint)uVar21;
    dVar27 = (double)DAT_00ef2788;
    dVar30 = (double)DAT_00764e20;
    uVar23 = *puVar18;
    *(undefined4 *)(uVar23 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(uVar23 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(uVar23 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(uVar23 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar15 = ((uint)(ZERO_MASK((uVar22 & 1))) & 2) - 1;
    dVar30 = (double)(float)((double)(longlong)
                                     (int)(uVar22 + (((int)uVar22 >> 1) +
                                                    (uint)((int)uVar22 < 0 && (uVar21 & 1) != 0)) *
                                                    -2) * dVar41 -
                            (double)(float)((double)(float)(dVar30 * (double)(float)(dVar40 - dVar27
                                                                                    ) + dVar25) *
                                           dVar39));
    dVar43 = (double)(longlong)(int)(((uint)((longlong)(uVar21 - 2) >> 0x3f) & 0xfffffffe) + 1);
    dVar27 = (double)FastWrapRot(*(float *)(*puVar18 + 0x48),(float)(dVar43 * dVar38));
    *(float *)(*puVar18 + 0x48) = (float)dVar27;
    *(float *)(*puVar18 + 0x44) = (float)((double)DAT_00764e24 * dVar39);
    *(float *)(*puVar18 + 0x40) = (float)dVar30;
    FastEulerToMtx((ulonglong)*puVar18 + 0xc0,(ulonglong)*puVar18 + 0x40);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar4 = *(float *)(param_1 + 200);
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    dVar42 = (double)DAT_00764e14;
    fVar7 = *(float *)(param_1 + 0x18);
    dVar30 = (double)DAT_00764e1c;
    fVar8 = *(float *)(param_1 + 0xd0);
    fVar9 = *(float *)(param_1 + 0xd4);
    uVar23 = *puVar18;
    fVar10 = *(float *)(uVar23 + 0xe4);
    fVar11 = *(float *)(uVar23 + 0xe0);
    fVar12 = *(float *)(uVar23 + 0xe8);
    dVar34 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar32 = (double)SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    fVar1 = (float)(dVar36 / dVar34);
    dVar27 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar27 = (double)(fVar4 * fVar1);
    }
    dVar28 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar28 = (double)(fVar2 * fVar1);
    }
    dVar31 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar27 = (double)(fVar4 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar28 = (double)(fVar2 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    fVar1 = *(float *)(param_1 + 0xd8);
    if (dVar32 == dVar37) {
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar34 = dVar37;
      dVar32 = dVar37;
      dVar33 = dVar37;
    }
    else {
      fVar2 = (float)((double)DAT_00764e18 / dVar32);
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar33 = (double)(fVar11 * fVar2);
      dVar34 = (double)(fVar10 * fVar2);
      dVar32 = (double)(fVar12 * fVar2);
    }
    *(undefined4 *)(uVar23 + 0x1c) = uVar14;
    dVar29 = (double)SQRT(fVar1 * fVar1 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar2 = (float)((double)(float)(dVar43 * dVar30) / dVar29);
    dVar30 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar30 = (double)(fVar1 * fVar2);
    }
    dVar43 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar43 = (double)(fVar9 * fVar2);
    }
    dVar26 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar26 = (double)(fVar8 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar30 = (double)(fVar1 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar43 = (double)(fVar9 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar26 = (double)(fVar8 * fVar2);
    }
    *(float *)(uVar23 + 0x18) = (float)(dVar42 + dVar27) + fVar7 + (float)(dVar32 + dVar30);
    *(float *)(uVar23 + 0x14) = (float)(dVar28 + (double)fVar6) + (float)(dVar34 + dVar43);
    *(float *)(uVar23 + 0x10) = (float)(dVar31 + (double)fVar5) + (float)(dVar33 + dVar26);
    dVar27 = (double)FastDiffRots
                               ((double)(float)((double)(longlong)iVar15 * dVar24),dVar35);
    fVar1 = DAT_00ef2790;
    if (iVar15 == -1) {
      fVar1 = DAT_00ef278c;
    }
    dVar27 = (double)FastWrapRot((float)(dVar27 * (double)fVar1),(float)dVar35);
    dVar27 = (double)FastWrapRot(*(float *)(*puVar18 + 0x40),(float)dVar27);
    *(float *)(*puVar18 + 0x40) = (float)dVar27;
    UpdateMobyTransform((MobyInstance *)*puVar18);
    uVar21 = uVar21 + 1;
    puVar18 = puVar18 + 1;
  } while ((int)uVar21 < 4);
  uVar23 = 0;
  piVar17 = &DAT_00ef2768;
  dVar35 = -0.01745329238474369;
  do {
    uVar22 = *puVar16;
    fVar3 = *(float *)(uVar22 + 0xe4);
    fVar4 = *(float *)(uVar22 + 0xe0);
    fVar5 = *(float *)(uVar22 + 0xd4);
    fVar6 = *(float *)(uVar22 + 0xe8);
    fVar7 = *(float *)(uVar22 + 0xd0);
    fVar8 = *(float *)(uVar22 + 0xd8);
    dVar39 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
    dVar41 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5);
    iVar15 = *piVar17;
    fVar1 = (float)((double)DAT_00764e28 / dVar39);
    fVar2 = (float)((double)DAT_00764e2c / dVar41);
    dVar38 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar38 = (double)(fVar4 * fVar1);
    }
    dVar24 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar24 = (double)(fVar3 * fVar1);
    }
    dVar25 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar25 = (double)(fVar6 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar38 = (double)(fVar4 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar25 = (double)(fVar6 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar24 = (double)(fVar3 * fVar1);
    }
    dVar39 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar39 = (double)(fVar7 * fVar2);
    }
    dVar27 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar27 = (double)(fVar8 * fVar2);
    }
    dVar30 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar30 = (double)(fVar5 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar39 = (double)(fVar7 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar27 = (double)(fVar8 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar30 = (double)(fVar5 * fVar2);
    }
    *(float *)(iVar15 + 0x10) = *(float *)(uVar22 + 0x10) + (float)(dVar38 + dVar39);
    *(float *)(iVar15 + 0x14) = *(float *)(uVar22 + 0x14) + (float)(dVar24 + dVar30);
    *(float *)(iVar15 + 0x18) = *(float *)(uVar22 + 0x18) + (float)(dVar25 + dVar27);
    *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(uVar22 + 0x1c);
    uVar22 = *puVar16;
    iVar15 = *piVar17;
    *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(uVar22 + 0x40);
    *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(uVar22 + 0x44);
    *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(uVar22 + 0x48);
    *(undefined4 *)(iVar15 + 0x4c) = *(undefined4 *)(uVar22 + 0x4c);
    fVar1 = DAT_00ef2798;
    if ((uVar23 & 1) != 0) {
      fVar1 = DAT_00ef2794;
    }
    dVar38 = (double)FastWrapRot
                               (*(float *)(*piVar17 + 0x44),
                                (float)((double)DAT_00764e30 * dVar35) * fVar1);
    *(float *)(*piVar17 + 0x44) = (float)dVar38;
    UpdateMobyTransform((MobyInstance *)*piVar17);
    uVar23 = uVar23 + 1;
    puVar16 = puVar16 + 1;
    piVar17 = piVar17 + 1;
  } while ((int)uVar23 < 4);
  piVar17 = &DAT_00ef2748;
  dVar41 = 7.5;
  dVar39 = 3.75;
  dVar38 = 13.25;
  dVar35 = 20.0;
  do {
    fVar3 = DAT_00764e34;
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    dVar25 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar2 * fVar2 + fVar1 * fVar1);
    dVar24 = (double)(float)((double)(float)(dVar40 - (double)DAT_00ef279c) * dVar38 +
                            (double)(float)((double)(longlong)(int)((uint)lVar19 & 1) * dVar41 +
                                           dVar39));
    if (dVar35 - dVar24 < 0.0) {
      dVar24 = dVar35;
    }
    if (dVar25 == dVar37) {
      uVar14 = *(undefined4 *)(param_1 + 0xcc);
      dVar24 = dVar37;
      dVar25 = dVar37;
    }
    else {
      fVar4 = (float)((double)(float)(dVar24 * (double)(longlong)
                                                       (int)(((uint)(lVar19 + -2 >> 0x3f) &
                                                             0xfffffffe) + 1) + dVar36) / dVar25);
      dVar24 = (double)(fVar2 * fVar4);
      uVar14 = *(undefined4 *)(param_1 + 0xcc);
      dVar25 = (double)(fVar1 * fVar4);
    }
    iVar15 = *piVar17;
    *(float *)(iVar15 + 0x10) = (float)(dVar24 + (double)*(float *)(param_1 + 0x10));
    *(float *)(iVar15 + 0x14) = (float)(dVar25 + (double)*(float *)(param_1 + 0x14));
    fVar1 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(iVar15 + 0x1c) = uVar14;
    *(float *)(iVar15 + 0x18) = fVar3 + fVar1;
    iVar15 = *piVar17;
    *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar15 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    UpdateMobyTransform((MobyInstance *)*piVar17);
    lVar19 = lVar19 + 1;
    piVar17 = piVar17 + 1;
  } while ((int)lVar19 < 4);
  return;
}


// 0x01e1b00 (0xeb4 bytes)
// inlined: FastAtan2 @0x1e2090
// strings: 001e1af4: '?fff@' (raw)

/* Moby 1156 */

ulonglong UpdateMoby_1156(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  Cuboid *pCVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r26;
  int *piVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  float fVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar22 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar22;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x21] = unaff_r31;
  puVar9[0x20] = unaff_r30;
  bVar1 = moby->state;
  uVar13 = (ulonglong)bVar1;
  piVar20 = (int *)moby->pVar;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x1d] = unaff_r27;
  puVar9[0x1c] = unaff_r26;
  if (bVar1 == 4) {
    Delt(0.0,g_FrameTime * 4.0,(float *)(piVar20 + 3));
    uVar13 = (ulonglong)(uint)piVar20[3];
    SceneScreenFade = (float)piVar20[3];
    if (piVar20[3] == 0) {
      uVar13 = 5;
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 3) {
    dVar23 = 1.0;
    if ((int)(FLOAT_ORDER(DAT_00ef2788)) < 0x3f800000) {
      OrganicDelt
                (1.0,DAT_0071f418,DAT_0071f418,g_FrameTime,&DAT_00ef2788,0x720000,
                 (float *)&DAT_00ef27a4);
    }
    dVar24 = (double)DAT_00ef2788;
    dVar25 = 0.8999999761581421;
    if ((0.8999999761581421 < dVar24) && (DAT_00ef278c == 0.0)) {
      PlayMobySound(1,0,moby);
      dVar24 = (double)DAT_00ef2788;
    }
    if ((dVar25 < dVar24) &&
       ((int)(FLOAT_ORDER(DAT_00ef278c)) < 0x3f800000)) {
      OrganicDelt
                ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 2.0,
                 &DAT_00ef278c,0x720000,(float *)&DAT_00ef27a8);
    }
    dVar24 = (double)DAT_00ef278c;
    dVar25 = 0.5;
    if ((0x3f000000 <
         (int)(FLOAT_ORDER(DAT_00ef278c))) && (DAT_00ef2790 == 0)) {
      PlayMobySound(1,0,moby);
      dVar24 = (double)DAT_00ef278c;
    }
    if ((dVar25 < dVar24) &&
       ((int)(FLOAT_ORDER(DAT_00ef2790))
        < 0x3f800000)) {
      OrganicDelt
                ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 2.0,
                 (float *)&DAT_00ef2790,0x720000,(float *)&DAT_00ef27ac);
      dVar24 = (double)DAT_00ef278c;
    }
    if ((dVar23 <= dVar24) &&
       ((int)(FLOAT_ORDER(DAT_00ef2794))
        < 0x3f800000)) {
      fVar26 = OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,
                          g_FrameTime * 2.0,(float *)&DAT_00ef2794,0x720000,
                          (float *)&DAT_00ef27b0);
      dVar24 = (double)fVar26;
    }
    if ((0x3f7fffff <
         (int)(FLOAT_ORDER(DAT_00ef2790)
              )) &&
       ((int)(FLOAT_ORDER(DAT_00ef2798))
        < 0x3f800000)) {
      fVar26 = OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,
                          g_FrameTime * 2.0,(float *)&DAT_00ef2798,0x720000,
                          (float *)&DAT_00ef27b4);
      dVar24 = (double)fVar26;
    }
    if ((0x3f666666 <
         (int)(FLOAT_ORDER(DAT_00ef2798)
              )) &&
       ((int)(FLOAT_ORDER(DAT_00ef279c))
        < 0x3f800000)) {
      fVar26 = OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 4.0,
                          g_FrameTime * 2.0,(float *)&DAT_00ef279c,0x720000,
                          (float *)&DAT_00ef27b8);
      dVar24 = (double)fVar26;
    }
    M1156_001e1120(dVar24,moby);
    if ((g_MiscLevelFlags.field86_0x56 != 0) && (g_Pad.buttonsPressedThisFrame != 0)) {
      moby->setByGroup = '\x01';
    }
    if (((int)(FLOAT_ORDER(DAT_00ef279c)
              ) < 0x3f800000) && (moby->setByGroup == '\0')) {
      Delt(0.0,g_FrameTime * 4.0,(float *)(piVar20 + 3));
    }
    else {
      Delt((float)dVar23,g_FrameTime * 4.0,(float *)(piVar20 + 3));
    }
    SceneScreenFade = (float)piVar20[3];
    OrganicDelt
              ((float)dVar23,DAT_0071f418 * 0.2,DAT_0071f418 * 0.2,g_FrameTime * 0.2,
               &DAT_00ef27a0,0x720000,(float *)&DAT_00ef27bc);
    fVar11 = DAT_00ef27a0;
    pCVar10 = Cuboids;
    iVar16 = piVar20[1];
    iVar7 = piVar20[2];
    fVar26 = Cuboids[iVar16].pos.x;
    fVar2 = Cuboids[iVar7].pos.y;
    fVar6 = Cuboids[iVar16].pos.y;
    fVar3 = Cuboids[iVar7].pos.z;
    fVar4 = Cuboids[iVar16].pos.z;
    fVar5 = Cuboids[iVar7].pos.w;
    *(float *)(puVar9 + 0x12) = DAT_00ef27a0 * (Cuboids[iVar7].pos.x - fVar26) + fVar26;
    *(float *)((int)puVar9 + 0x94) = fVar11 * (fVar2 - fVar6) + pCVar10[iVar16].pos.y;
    fVar26 = pCVar10[iVar16].pos.z;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar11 * (fVar3 - fVar4) + fVar26;
    fVar26 = pCVar10[iVar16].rot.x;
    fVar2 = pCVar10[iVar7].rot.y;
    fVar6 = pCVar10[iVar16].rot.y;
    fVar3 = pCVar10[iVar7].rot.z;
    fVar4 = pCVar10[iVar16].rot.z;
    fVar5 = pCVar10[iVar7].rot.w;
    *(float *)(puVar9 + 0x14) = fVar11 * (pCVar10[iVar7].rot.x - fVar26) + fVar26;
    *(float *)((int)puVar9 + 0xa4) = fVar11 * (fVar2 - fVar6) + pCVar10[iVar16].rot.y;
    fVar26 = pCVar10[iVar16].rot.z;
    *(float *)((int)puVar9 + 0xac) = fVar5;
    *(float *)(puVar9 + 0x15) = fVar11 * (fVar3 - fVar4) + fVar26;
    Camera_SetMobyDrivenTargetPos((float *)(puVar9 + 0x12));
    Camera_SetMobyDrivenTargetRot((float *)(puVar9 + 0x14));
    uVar8 = piVar20[3] >> 0x1f;
    uVar13 = (ulonglong)(uVar8 >> 1 ^ piVar20[3]) - (longlong)(int)uVar8;
    if (0x3f7fffff < (int)uVar13) {
      DAT_00ef2788 = 1.0;
      DAT_00ef2798 = 0x3f800000;
      DAT_00ef279c = 0x3f800000;
      DAT_00ef278c = 1.0;
      DAT_00ef2790 = 0x3f800000;
      DAT_00ef2794 = 0x3f800000;
      M1156_001e1120(moby);
      moby->state = '\x04';
      Camera_DeactivateMobyDrivenCam(3);
      Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,1);
      uVar13 = 1;
      g_MiscLevelFlags.field86_0x56 = 1;
    }
  }
  else if (bVar1 == 2) {
    Delt(1.0,g_FrameTime * 4.0,(float *)(piVar20 + 3));
    SceneScreenFade = (float)piVar20[3];
    uVar8 = piVar20[3] >> 0x1f;
    uVar13 = (ulonglong)(uVar8 >> 1 ^ piVar20[3]) - (longlong)(int)uVar8;
    if (0x3f7fffff < (int)uVar13) {
      moby->state = '\x03';
      pMVar15 = g_MobyInstance;
      iVar16 = *piVar20;
      *(f32 *)(puVar9 + 0xe) = g_MobyInstance[iVar16].pos.x;
      *(f32 *)((int)puVar9 + 0x74) = pMVar15[iVar16].pos.y;
      fVar26 = pMVar15[iVar16].pos.z;
      *(float *)(puVar9 + 0xf) = fVar26;
      *(f32 *)((int)puVar9 + 0x7c) = pMVar15[iVar16].pos.w;
      *(float *)(puVar9 + 0xf) = fVar26 + 5.0;
      dVar23 = (double)GetGroundZ(0x3fe0000000000000,uVar12 - 0xb0,0);
      fVar26 = (moby->pos).y;
      fVar6 = (moby->pos).x - *(float *)(puVar9 + 0xe);
      *(float *)(puVar9 + 0xf) = (float)dVar23;
      fVar26 = fVar26 - *(float *)((int)puVar9 + 0x74);
      fVar2 = 0.0;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar26);
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar26;
      *(float *)(puVar9 + 0x17) = fVar3 - fVar4;
      *(undefined4 *)((int)puVar9 + 0x8c) = 0;
      *(undefined4 *)((int)puVar9 + 0x84) = 0;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      uVar13 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      fVar26 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar26 = fVar4;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar4 = ABS(*(float *)((int)puVar9 + 0xb4));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      if (0.0 < fVar26) {
        lVar14 = uVar12 - 0x110;
        lVar17 = uVar12 - 100;
        lVar19 = uVar12 - 0x54;
        lVar21 = 2;
        fVar26 = (fVar4 - fVar26) / (fVar4 + fVar26);
        fVar4 = fVar26 * fVar26;
        *(float *)(puVar9 + 0x19) = fVar26;
        *(float *)(puVar9 + 0x18) = fVar26;
        *(float *)((int)puVar9 + 0xc4) = fVar26;
        *(float *)((int)puVar9 + 0xbc) = fVar26;
        fVar26 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar26;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar26 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xbc) = *(float *)((int)lVar14 + 0xac) * fVar26 * fVar26;
          iVar16 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar26 * fVar26;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar12 - 100;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar22;
        lVar17 = lVar19;
        do {
          fVar26 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xbc) = *(float *)((int)lVar14 + 0xbc) * fVar26;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar7 = (int)lVar19;
          lVar22 = lVar22 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar16 + 0xbc) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8)
                  + *(float *)(iVar7 + 0xc);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      *(float *)(puVar9 + 0x11) = fVar2;
      Hero_Warp((float *)(puVar9 + 0xe),(float *)(puVar9 + 0x10),0x72,1);
      SetCameraPosition(&Cuboids[piVar20[1]].pos,&Cuboids[piVar20[2]].rot,1,0,0);
      piVar20 = &DAT_00ef2730;
      lVar22 = 6;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      piVar20 = &DAT_00ef2758;
      lVar22 = 4;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      piVar20 = &DAT_00ef2768;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      piVar20 = &DAT_00ef2748;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      iVar16 = PlayMobySound(0,0,moby);
      uVar13 = (ulonglong)iVar16;
    }
  }
  else if (bVar1 == 1) {
    if ((*piVar20 != -1) &&
       (uVar13 = M1180_001eebe4(g_MobyInstance + *piVar20), (int)uVar13 != 0)) {
      uVar13 = 2;
      moby->state = '\x02';
    }
  }
  else if (bVar1 == 0) {
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
    DAT_00ef2788 = 0.0;
    DAT_00ef278c = 0.0;
    DAT_00ef2790 = 0;
    DAT_00ef2794 = 0;
    DAT_00ef2798 = 0;
    DAT_00ef279c = 0;
    iVar16 = 0;
    DAT_00ef27a0 = 0.0;
    piVar20 = &DAT_00ef2730;
    moby->setByGroup = '\0';
    do {
      pMVar15 = CreateMoby(0x480);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 6);
    iVar16 = 0;
    piVar20 = &DAT_00ef2758;
    do {
      pMVar15 = CreateMoby(0x481);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    iVar16 = 0;
    piVar20 = &DAT_00ef2768;
    do {
      pMVar15 = CreateMoby(0x482);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    iVar16 = 0;
    piVar20 = &DAT_00ef2748;
    do {
      pMVar15 = CreateMoby(0x483);
      *piVar20 = (int)pMVar15;
      pMVar15->drawDistance = 0x40;
      iVar16 = iVar16 + 1;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 0x20;
      iVar7 = *(int *)(*piVar20 + 0x78);
      *(int *)(iVar7 + 8) = iVar7 + 0x20;
      *(uint *)(iVar7 + 0x5c) = *(uint *)(iVar7 + 0x5c) | 1;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    uVar13 = M1156_001e1120(moby);
    moby->state = '\x01';
  }
  return uVar13;
}



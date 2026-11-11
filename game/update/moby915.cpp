// game/update/moby915.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4afbec-0x4b01cc
// shared update function UpdateMoby_{915_916_917}; registered for oClasses 915, 916, 917
#include "game/update/moby915.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04afbec (0x14 bytes)
void M917_004afbec(void)

{
  DAT_008f4270 = 0x10000;
  return;
}


// 0x04afc18 (0x390 bytes)
// inlined: FastAtan2 @0x4afd44
void M917_004afc18(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = unaff_r31;
  puVar8[0x16] = unaff_r28;
  puVar8[0x17] = unaff_r29;
  puVar8[0x18] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar20 = ZEXT48(pvVar5);
  iVar13 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,iVar13,uVar20 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  fVar2 = (param_1->pos).x - g_heroPosition.x;
  fVar9 = (param_1->pos).y - g_heroPosition.y;
  fVar1 = ABS(fVar2);
  fVar4 = ABS(fVar9);
  *(float *)(puVar8 + 0x10) = fVar2;
  *(float *)((int)puVar8 + 0x84) = fVar9;
  *(float *)(puVar8 + 0x11) = fVar1 - fVar4;
  fVar9 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  iVar6 = *(int *)(puVar8 + 0xe);
  fVar2 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar18 = uVar12 - 0xc0;
    lVar17 = uVar12 - 0x44;
    lVar16 = uVar12 - 0x34;
    lVar21 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x13) = fVar2;
    *(float *)(puVar8 + 0x12) = fVar2;
    *(float *)((int)puVar8 + 0x94) = fVar2;
    *(float *)((int)puVar8 + 0x8c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar2;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar12 - 0x44;
    pfVar19 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x8c) = *(float *)((int)lVar17 + 0x8c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar10 + 0x8c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  if (iVar6 != 1) {
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    param_1->state = '\x06';
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(8,0x4afc00);
    auVar25 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = ZEXT416(0xffffffff);
    auVar27 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    *(undefined4 *)((int)puVar8 + 0x7c) = 0x3f800000;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar24);
    *(float *)(puVar8 + 0xf) = fVar9;
    auVar23 = ZEXT416(0xffffffff);
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar29 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar28 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar23 = ZEXT416(0xffffffff);
    auVar30 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x178,uVar20);
    *(undefined4 *)((int)pvVar5 + 0x178U & 0xfffffffc) = uVar7;
    auVar23 = loadVectorLeftIndexed(0xc,0x4afc00);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar24);
    auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar23 = loadVectorLeftIndexed(0x10,0x4afc00);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = vectorReciprocalEstimateFloatingPoint(auVar25);
    auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar25,auVar24);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar27,auVar26);
    auVar27 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar25,auVar24);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar28);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar25,auVar24);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar23,auVar27);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar29);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x17c,uVar20);
    *(undefined4 *)((int)pvVar5 + 0x17cU & 0xfffffffc) = uVar7;
    MB_SetAnimationNoBlend(param_1,8,4);
    param_1->unk58 = 2.0;
    uVar7 = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(puVar8 + 7) = uVar7;
    uVar7 = *(undefined4 *)(iVar13 + 0x1c);
    *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)((int)puVar8 + 0x3c) = uVar7;
    MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar12 - 0x58,uVar20 + 0x17c,uVar12 - 0x54);
    dVar22 = (double)FastWrapRot(3.1415927,*(float *)(puVar8 + 0xf));
    (param_1->rotation).z = (float)dVar22;
  }
  param_1->damage = -1;
  return;
}


// shared update function, registered for oClasses 915, 916, 917
// 0x04affb0 (0x21c bytes)
// inlined: FastAtan2 @0x4b0090
/* Moby 915
   Moby 916
   Moby 917 */

void UpdateMoby_915(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xb0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x18] = in_LR;
  fVar1 = (moby->pos).x;
  puVar7[0x15] = unaff_r31;
  fVar1 = g_heroPosition.x - fVar1;
  fVar2 = g_heroPosition.y - (moby->pos).y;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)((int)puVar7 + 0x74) = fVar2;
  *(float *)(puVar7 + 0xf) = fVar4 - fVar3;
  fVar1 = 0.0;
  fVar2 = (moby->rotation).z;
  uVar13 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar8 = fVar4;
  }
  if (0.0 < fVar5) {
    lVar16 = uVar11 - 0xa0;
    lVar15 = uVar11 - 0x34;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar4 = (fVar8 - fVar5) / (fVar8 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x11) = fVar4;
    *(float *)(puVar7 + 0x10) = fVar4;
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)((int)puVar7 + 0x7c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar5;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
      iVar9 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x34;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar14 = lVar16;
    lVar15 = lVar12;
    do {
      fVar4 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar4;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar9 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
  }
  FastSubRots(fVar1,fVar2);
  DeleteMoby(moby);
  return;
}



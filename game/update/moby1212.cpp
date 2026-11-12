// game/update/moby1212.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x204ab4-0x2057cc
#include <stdio.h>
#include "game/update/moby1212.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0204ab4 (0x14 bytes)
void M1212_00204ab4(void)

{
  DAT_007666c0 = 0x10000;
  return;
}


// 0x0204ad0 (0x118 bytes)
void M1212_00204ad0(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3fecccccc0000000;
    uVar5 = 0x3fdcccccc0000000;
    do {
      if (((local_40[0]->enabled != '\0') &&
          (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)))
         && (0x80 < (*(uint *)((int)pvVar1 + 0xb0) & 0xff))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x80,*(undefined4 *)((int)pvVar1 + 0xb0));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 3);
      }
      MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}


// 0x0204be8 (0xe0 bytes)
void M1212_00204be8(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_1->group != -1) {
    pvVar1 = param_1->pVar;
    iVar3 = 0;
    pvVar4 = pvVar1;
    do {
      GetBonePosition(param_1,iVar3 + 3,(int)pvVar4 + 0x80);
      iVar3 = iVar3 + 1;
      pvVar4 = (void *)((int)pvVar4 + 0x10);
    } while (iVar3 < 3);
    uVar2 = param_1->glowRgba;
    *(uint *)((int)pvVar1 + 0xb0) =
         ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | 0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0xb4))) {
      **(int **)((int)pvVar1 + 0xb4) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1212_00204ad0_00709400,param_1);
    }
  }
  return;
}


// 0x0204cd8 (0x388 bytes)
void M1212_00204cd8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<40> auStack_b0;
  
  iVar10 = 0;
  dVar13 = 0.0;
  dVar14 = 1.0;
  uVar15 = 0x4020000000000000;
  do {
    GetBonePosition(param_1,iVar10,auStack_b0);
    MB_randSphere(dVar13,(double)(DAT_00766760 * g_FrameTime),local_c0);
    MB_randRangeFloat(DAT_00766774,DAT_00766778);
    MB_randRangeFloat(DAT_0076677c,DAT_00766780);
    uVar2 = DAT_00766788;
    uVar1 = DAT_00766784;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766790;
    uVar1 = DAT_0076678c;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = FastLerpColor(uVar1,uVar2);
    dVar11 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766764 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_00766768;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766770,DAT_00766770);
    uVar6 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_0076676c;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766770,DAT_00766770);
    uVar7 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  return;
}


// 0x0205098 (0x734 bytes)
// strings: 00654e28: 'Ship with no path. UID: %d\n' | 00654e48: 'Ship with a path that has no points. UID: %d\n'

/* Moby 1212 */

void UpdateMoby_1212(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  f32 fVar5;
  Spline *pSVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  u16 *puVar14;
  uint uVar15;
  undefined8 in_r9;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte in_cr6;
  undefined8 in_LR;
  double dVar20;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  lVar11 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar19 = ZEXT48(pvVar4);
  pSVar6 = Splines[*(int *)((int)pvVar4 + 0x60)];
  uVar18 = ZEXT48(pSVar6);
  iVar12 = MB_damage(lVar11,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    iVar12 = *(int *)((int)pvVar4 + 0x60);
    if (iVar12 == -1) {
      printf("Ship with no path. UID: %d\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    pSVar6 = Splines[iVar12];
    if (pSVar6->cnt == 0) {
      printf("Ship with a path that has no points. UID: %d\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    fVar2 = pSVar6->points[0].y - pSVar6->points[1].y;
    fVar8 = pSVar6->points[0].x - pSVar6->points[1].x;
    fVar9 = pSVar6->points[0].z - pSVar6->points[1].z;
    *(undefined1 *)((int)pvVar4 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar4 + 0x2c) = 0x28;
    pSVar6 = Splines[iVar12];
    *(float *)((int)pvVar4 + 0x70) = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar2 * fVar2);
    (moby->pos).x = pSVar6->points[0].x;
    (moby->pos).y = pSVar6->points[0].y;
    (moby->pos).z = pSVar6->points[0].z;
    (moby->pos).w = pSVar6->points[0].w;
    dVar20 = (double)MB_randRot();
    MVar3 = moby->modeBits;
    *(float *)((int)pvVar4 + 0x68) = (float)dVar20;
    auVar22 = ZEXT416(0xffffffff);
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
    moby->state = '\x01';
    moby->modeBits = MVar3 | HAS_GLOW;
    auVar22 = loadVectorLeftIndexed(in_LR,uVar18);
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar24 = loadVectorLeftIndexed(0x74,uVar19);
    auVar25 = loadVectorRightIndexed(0x84,uVar19);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar24 | auVar25,auVar22,auVar23);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,100,uVar19);
    *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
  }
  else if (bVar1 < 2) {
    iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
    if (iVar13 == 0) {
      iVar13 = PlayMobySound(1,4,moby);
      *(int *)((int)pvVar4 + 0x6c) = iVar13;
    }
    auVar22 = ZEXT416(0xffffffff);
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = ZEXT416(0xffffffff);
    auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x70,uVar19);
    auVar22 = loadVectorRightIndexed(0x80,uVar19);
    auVar23 = auVar23 | auVar22;
    auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = vectorReciprocalEstimateFloatingPoint(auVar23);
    auVar22 = loadVectorLeftIndexed(in_LR,0x205060);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar28 = loadVectorLeftIndexed(0x6740,0x760000);
    auVar22 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar25);
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar26);
    auVar22 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(100,uVar19);
    auVar30 = loadVectorRightIndexed(0x74,uVar19);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar31,auVar22);
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    iVar13 = pSVar6->cnt;
    auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar25);
    auVar28 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = loadVectorLeftIndexed(in_LR,uVar18);
    auVar27 = vectorMultiplyAddFloatingPoint(auVar24,auVar31,auVar27);
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar23,auVar25);
    auVar22 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar27,auVar23,auVar28);
    dVar20 = (double)(*(float *)((int)pvVar4 + 100) +
                     (DAT_00766740 * g_FrameTime) / *(float *)((int)pvVar4 + 0x70));
    auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar29 | auVar30);
    auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    uVar7 = storeVectorElementWordIndexed(auVar23,100,uVar19);
    *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
    if (!(bool)(in_cr6 >> 1 & 1)) {
      auVar22 = vectorSubtractFloatingPoint(auVar25,auVar24);
      dVar20 = (double)(float)(dVar20 - (double)(longlong)iVar13);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar7 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,100,uVar19);
      *(undefined4 *)((int)pvVar4 + 100U & 0xfffffffc) = uVar7;
    }
    if (Level == Gaspar) {
      MB_PathEvalSpline(dVar20,uVar18,&DAT_00720000,1,lVar11 + 0x10,lVar11 + 0x40,0);
    }
    else {
      MB_PathEvalSpline(dVar20,uVar18,&DAT_00720000,0,lVar11 + 0x10,lVar11 + 0x40,0);
    }
    fVar5 = (moby->pos).x;
    uVar15 = (int)fVar5 >> 0x1f;
    if (((int)((uVar15 >> 1 ^ (uint)fVar5) - uVar15) < 0x41000000) ||
       (fVar5 = (moby->pos).y, uVar15 = (int)fVar5 >> 0x1f,
       (int)((uVar15 >> 1 ^ (uint)fVar5) - uVar15) < 0x41000000)) {
      puVar14 = (u16 *)0x0;
    }
    else {
      puVar14 = moby->pClass->collision;
    }
    moby->collision = puVar14;
    if (moby->enabled != '\0') {
      M1212_00204cd8(lVar11,local_80);
    }
    if ((iVar12 != 0) && (0 < *(int *)(iVar12 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((Level == Aridia) &&
       (ShipsKilledCounts.Aridia = ShipsKilledCounts.Aridia + 1, 2 < ShipsKilledCounts.Aridia)) {
      MB_UnlockSkillPoint(2);
    }
    if (((Level == Gaspar) && (g_heroState == TURRET_PLANE_UI)) &&
       (ShipsKilledCounts.Gaspar = ShipsKilledCounts.Gaspar + 1, 4 < ShipsKilledCounts.Gaspar)) {
      MB_UnlockSkillPoint(0xf);
    }
    PlayMobySound(0,0,moby);
    lVar17 = lVar11 + 0x10;
    lVar16 = lVar11 + 0x40;
    dVar21 = 90.5;
    dVar20 = 12.0;
    MB_SpawnDebrisMoby
              ((double)(g_FrameTimeSq * 12.0),lVar11,0x5f2,lVar17,lVar16,(int)(animationSpeed * 90.5)
               ,0,in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)g_FrameTimeSq * dVar20),lVar11,0x5f5,lVar17,lVar16,
               (int)((double)animationSpeed * dVar21),0,in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)g_FrameTimeSq * dVar20),lVar11,0x790,lVar17,lVar16,
               (int)((double)animationSpeed * dVar21),0,in_r9,local_70);
    DeleteMoby(moby);
  }
  if (moby->enabled != '\0') {
    fVar2 = *(float *)((int)pvVar4 + 0x68);
    fVar8 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar8 = fVar2;
    }
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar8 < 0.0) {
      fVar9 = fVar8;
    }
    fVar2 = fVar9 * fVar9;
    fVar8 = fVar2 * fVar2 * fVar9;
    dVar20 = 1.0;
    fVar10 = fVar2 * fVar8;
    dVar21 = (double)((fVar2 * fVar10 * 2.601887e-06 +
                      fVar10 * -0.0001980741 +
                      fVar8 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) * 4.0 - 3.0);
    if ((dVar21 <= 1.0) && (dVar20 = dVar21, dVar21 < 0.0)) {
      dVar20 = 0.0;
    }
    uVar15 = FastLerpColor(dVar20,DAT_00766748,DAT_0076674c);
    moby->glowRgba = uVar15;
    dVar20 = (double)FastWrapRot
                               (*(float *)((int)pvVar4 + 0x68),
                                DAT_00766744 * 0.017453292 * g_FrameTime);
    *(float *)((int)pvVar4 + 0x68) = (float)dVar20;
    M1212_00204be8(lVar11);
  }
  return;
}



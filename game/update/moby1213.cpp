// game/update/moby1213.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x2057cc-0x20695c
// shared update function UpdateMoby_{1213_1973}; registered for oClasses 1213, 1973
#include <stdio.h>
#include "game/update/moby1213.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1212.h"
#include "idol/fastfunc.h"

// 0x02057cc (0x14 bytes)
void M1973_002057cc(void)

{
  DAT_007667e0 = 0x10000;
  return;
}


// 0x02057e8 (0x118 bytes)
void M1973_002057e8(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3ff3333340000000;
    uVar5 = 0x3fe23d70a0000000;
    do {
      if (((local_40[0]->enabled != '\0') &&
          (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)))
         && (0x80 < (*(uint *)((int)pvVar1 + 0xe0) & 0xff))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x80,*(undefined4 *)((int)pvVar1 + 0xe0));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 6);
      }
      MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}


// 0x0205900 (0xe0 bytes)
void M1973_00205900(MobyInstance *param_1)

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
      GetBonePosition(param_1,iVar3 + 2,(int)pvVar4 + 0x80);
      iVar3 = iVar3 + 1;
      pvVar4 = (void *)((int)pvVar4 + 0x10);
    } while (iVar3 < 6);
    uVar2 = param_1->field60_0x90;
    *(uint *)((int)pvVar1 + 0xe0) =
         ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | 0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0xe4))) {
      **(int **)((int)pvVar1 + 0xe4) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1973_002057e8_00709428,param_1);
    }
  }
  return;
}


// 0x02059f0 (0x39c bytes)
// strings: 00766870: ' ``P' (raw)

void M1973_002059f0(undefined4 param_1)

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
  GPiece<32> auStack_b0;
  
  iVar10 = 0;
  dVar13 = 0.0;
  dVar14 = 1.0;
  uVar15 = 0x4020000000000000;
  do {
    GetBonePosition(param_1,iVar10,auStack_b0);
    MB_randSphere(dVar13,(double)(DAT_00766860 * g_FrameTime),local_c0);
    MB_randRangeFloat(DAT_00766838,DAT_0076683c);
    MB_randRangeFloat(DAT_00766840,DAT_00766844);
    uVar2 = DAT_00766868;
    uVar1 = DAT_00766864;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766870;
    uVar1 = DAT_0076686c;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = FastLerpColor(uVar1,uVar2);
    dVar11 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766828 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_0076682c;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar6 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_00766830;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar7 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  return;
}


// 0x0205d98 (0x388 bytes)
void M1973_00205d98(undefined4 param_1)

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
    MB_randSphere(dVar13,(double)(DAT_00766824 * g_FrameTime),local_c0);
    MB_randRangeFloat(DAT_00766838,DAT_0076683c);
    MB_randRangeFloat(DAT_00766840,DAT_00766844);
    uVar2 = DAT_0076684c;
    uVar1 = DAT_00766848;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar3 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_00766854;
    uVar1 = DAT_00766850;
    MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar4 = FastLerpColor(uVar1,uVar2);
    dVar11 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
    uVar5 = FastDoubleToInt
                      ((double)(animationSpeed *
                               (float)((double)(longlong)DAT_00766828 * dVar11 + dVar14)));
    dVar12 = (double)(longlong)DAT_0076682c;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar6 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    dVar12 = (double)(longlong)DAT_00766830;
    dVar11 = (double)MB_randRangeFloat(-DAT_00766834,DAT_00766834);
    uVar7 = FastDoubleToInt
                      ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar14)))
                      );
    iVar8 = SpawnPart_2(auStack_b0,local_e0,local_d0,uVar3,uVar4,uVar5,uVar6,uVar7);
    if (iVar8 != 0) {
      cVar9 = FastDoubleToInt(uVar15);
      *(char *)(iVar8 + 9) = cVar9 + '`';
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  return;
}


// shared update function, registered for oClasses 1213, 1973
// 0x0206160 (0x7e8 bytes)
// strings: 00654e80: 'Ship with no path. UID: %d\n' | 00654ea0: 'Ship with a path that has no points. UID: %d\n'

/* Moby 1213
   Moby 1973 */

void UpdateMoby_1213(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  u16 *puVar16;
  uint uVar17;
  undefined8 in_r9;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte in_cr6;
  undefined8 in_LR;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  lVar13 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar21 = ZEXT48(pvVar6);
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x60)];
  uVar19 = ZEXT48(pSVar8);
  iVar14 = MB_damage(lVar13,0x10000,0);
  bVar3 = moby->state;
  if (bVar3 == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    if (Level == Orxon) {
      moby->scale = moby->scale * 0.5;
    }
    iVar14 = *(int *)((int)pvVar6 + 0x60);
    if (iVar14 == -1) {
      printf("Ship with no path. UID: %d\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    pSVar8 = Splines[iVar14];
    if (pSVar8->cnt == 0) {
      printf("Ship with a path that has no points. UID: %d\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    fVar4 = pSVar8->points[0].y - pSVar8->points[1].y;
    fVar10 = pSVar8->points[0].x - pSVar8->points[1].x;
    fVar11 = pSVar8->points[0].z - pSVar8->points[1].z;
    *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar6 + 0x2c) = 0x28;
    pSVar8 = Splines[iVar14];
    *(float *)((int)pvVar6 + 0x70) = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar4 * fVar4);
    (moby->pos).x = pSVar8->points[0].x;
    (moby->pos).y = pSVar8->points[0].y;
    (moby->pos).z = pSVar8->points[0].z;
    (moby->pos).w = pSVar8->points[0].w;
    dVar22 = (double)MB_randRot();
    MVar5 = moby->modeBits;
    *(float *)((int)pvVar6 + 0x68) = (float)dVar22;
    auVar24 = ZEXT416(0xffffffff);
    auVar25 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
    moby->state = '\x01';
    moby->modeBits = MVar5 | HAS_GLOW;
    auVar24 = loadVectorLeftIndexed(in_LR,uVar19);
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar26 = loadVectorLeftIndexed(0x74,uVar21);
    auVar27 = loadVectorRightIndexed(0x84,uVar21);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar26 | auVar27,auVar24,auVar25);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,100,uVar21);
    *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
  }
  else if (bVar3 < 2) {
    if ((g_heroType == '\x01') && (Level == Orxon)) {
      DeleteMoby(moby);
      return;
    }
    iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar15 == 0) {
      iVar15 = PlayMobySound(1,4,moby);
      *(int *)((int)pvVar6 + 0x6c) = iVar15;
    }
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar25 = loadVectorLeftIndexed(0x6804,0x760000);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    bVar1 = Level == Orxon;
    bVar2 = Level == Gaspar;
    fVar4 = DAT_00766804 * g_FrameTime;
    auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
    if (bVar1) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(4,0x206120);
      fVar4 = fVar4 * 0.25;
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
    }
    auVar25 = ZEXT416(0xffffffff);
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar27 = loadVectorLeftIndexed(0x70,uVar21);
    auVar29 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar26 = loadVectorRightIndexed(0x80,uVar21);
    auVar27 = auVar27 | auVar26;
    auVar33 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = ZEXT416(0xffffffff);
    auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar26 = vectorReciprocalEstimateFloatingPoint(auVar27);
    auVar24 = loadVectorLeftIndexed(8,0x206120);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar27,auVar28);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar26,auVar24,auVar29);
    auVar29 = loadVectorLeftIndexed(100,uVar21);
    auVar31 = loadVectorRightIndexed(0x74,uVar21);
    auVar30 = loadVectorLeftIndexed(in_LR,uVar19);
    lVar18 = (longlong)pSVar8->cnt;
    auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar27,auVar28);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar32);
    auVar26 = vectorConvertFromSignedFixedPointWord(auVar30,0);
    auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar27,auVar28);
    auVar24 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    dVar22 = (double)(*(float *)((int)pvVar6 + 100) + fVar4 / *(float *)((int)pvVar6 + 0x70));
    auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar33);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar29 | auVar31);
    auVar25 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    uVar9 = storeVectorElementWordIndexed(auVar25,100,uVar21);
    *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
    vectorCompareGreaterThanFloatingPoint
              (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    if (!(bool)(in_cr6 >> 1 & 1)) {
      auVar24 = vectorSubtractFloatingPoint(auVar27,auVar26);
      dVar22 = (double)(float)(dVar22 - (double)lVar18);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,100,uVar21);
      *(undefined4 *)((int)pvVar6 + 100U & 0xfffffffc) = uVar9;
    }
    if ((bVar2) || (bVar1)) {
      MB_PathEvalSpline(dVar22,uVar19,lVar18,1,lVar13 + 0x10,lVar13 + 0x40,0);
    }
    else {
      MB_PathEvalSpline(dVar22,uVar19,lVar18,0,lVar13 + 0x10,lVar13 + 0x40,0);
    }
    fVar7 = (moby->pos).x;
    uVar17 = (int)fVar7 >> 0x1f;
    if (((int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x41000000) ||
       (fVar7 = (moby->pos).y, uVar17 = (int)fVar7 >> 0x1f,
       (int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x41000000)) {
      puVar16 = (u16 *)0x0;
    }
    else {
      puVar16 = moby->pClass->collision;
    }
    moby->collision = puVar16;
    if (moby->enabled != '\0') {
      if (Level == Orxon) {
        M1973_002059f0(lVar13,local_80);
      }
      else {
        M1973_00205d98(lVar13,local_80);
      }
    }
    if ((iVar14 != 0) && (0 < *(int *)(iVar14 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar3 < 3) {
    if ((Level == Aridia) &&
       (ShipsKilledCounts.Aridia = ShipsKilledCounts.Aridia + 1, 2 < ShipsKilledCounts.Aridia)) {
      MB_UnlockSkillPoint(2);
    }
    if (((Level == Gaspar) && (g_heroState == TURRET_PLANE_UI)) &&
       (ShipsKilledCounts.Gaspar = ShipsKilledCounts.Gaspar + 1, 4 < ShipsKilledCounts.Gaspar)) {
      MB_UnlockSkillPoint(0xf);
    }
    PlayMobySound(0,0,moby);
    lVar20 = lVar13 + 0x10;
    lVar18 = lVar13 + 0x40;
    dVar23 = 90.5;
    dVar22 = 12.0;
    MB_SpawnDebrisMoby
              ((double)(DAT_0071f418 * 12.0),lVar13,0x5f6,lVar20,lVar18,(int)(animationSpeed * 90.5)
               ,0,in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar22),lVar13,0x5f8,lVar20,lVar18,
               (int)((double)animationSpeed * dVar23),0,in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar22),lVar13,0x5f9,lVar20,lVar18,
               (int)((double)animationSpeed * dVar23),0,in_r9,local_70);
    DeleteMoby(moby);
    return;
  }
  if (moby->enabled != '\0') {
    fVar4 = *(float *)((int)pvVar6 + 0x68);
    fVar10 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar10 = fVar4;
    }
    fVar11 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    fVar4 = fVar11 * fVar11;
    fVar10 = fVar4 * fVar4 * fVar11;
    dVar22 = 1.0;
    fVar12 = fVar4 * fVar10;
    dVar23 = (double)((fVar4 * fVar12 * 2.601887e-06 +
                      fVar12 * -0.0001980741 +
                      fVar10 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11) * 4.0 - 3.0);
    if ((dVar23 <= 1.0) && (dVar22 = dVar23, dVar23 < 0.0)) {
      dVar22 = 0.0;
    }
    uVar17 = FastLerpColor(dVar22,DAT_0076680c,DAT_00766810);
    moby->field60_0x90 = uVar17;
    dVar22 = (double)FastWrapRot
                               (*(float *)((int)pvVar6 + 0x68),
                                DAT_00766808 * 0.017453292 * g_FrameTime);
    *(float *)((int)pvVar6 + 0x68) = (float)dVar22;
    M1973_00205900(lVar13);
  }
  return;
}


// 0x0206948 (0x14 bytes)
void M1973_00206948(void)

{
  DAT_007668c0 = 0x10000;
  return;
}



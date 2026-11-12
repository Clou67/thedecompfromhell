// game/update/moby238.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x305928-0x309070
#include <stdlib.h>
#include "game/update/moby238.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0305928 (0x14 bytes)
void M238_00305928(void)

{
  DAT_007ff44c = 0x10000;
  return;
}


// 0x0305940 (0xb8 bytes)
undefined8 M238_00305940(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->state;
  if ((uVar1 == '\v' || uVar1 == '\t') || (uVar1 == '\r')) {
    uVar2 = 0;
  }
  else {
    uVar2 = M849_MB_Sucking(param_1);
    if ((int)uVar2 == 0) {
      if (param_1->state == '\b') {
        param_1->state = '\x01';
      }
    }
    else {
      if (param_1->group != -1) {
        MB_SetGroupField(param_1->group,1);
      }
      param_1->state = '\b';
    }
  }
  return uVar2;
}


// 0x03059f8 (0x58 bytes)
void M238_003059f8(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}


// 0x0305a50 (0x58 bytes)
void M238_00305a50(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}


// 0x0305aa8 (0x5c bytes)
undefined8 M238_00305aa8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048afe8();
  if ((*(char *)(param_1 + 0x20) == '\t') || (*(char *)(param_1 + 0x20) == '\v')) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return uVar1;
}


// 0x0305b04 (0x40 bytes)
longlong M238_00305b04(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x0305b50 (0x8c bytes)
double M238_00305b50(int param_1)

{
  double dVar1;
  float fVar2;
  GPiece<16> local_20;
  
  dVar1 = (double)GetGroundZ(local_20,0);
  fVar2 = Delt((float)dVar1,g_FrameTimeSq * 27.0,(float *)(param_1 + 0x18));
  return (double)fVar2;
}


// 0x0305be0 (0xfc bytes)
void M238_00305be0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = MB_randInt(2);
  iVar1 = (int)(animationSpeed * 8.5);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      if (*(char *)(param_1 + 0x53) == '\x03') {
        return;
      }
      MB_SetAnimation(param_1,3,0,iVar1);
      return;
    }
  }
  else if (iVar2 < 2) {
    if (*(char *)(param_1 + 0x53) == '\x0f') {
      return;
    }
    MB_SetAnimation(param_1,0xf,0,iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x53) != '\x10') {
    MB_SetAnimation(param_1,0x10,0,iVar1);
  }
  return;
}


// 0x0305d08 (0x408 bytes)
void M238_00305d08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<40> local_d0;
  
  iVar4 = 0;
  dVar5 = -0.25;
  dVar6 = -0.75;
  dVar7 = 0.25;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  do {
    MB_randRot();
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    MB_randRangeFloat((float)dVar5,(float)dVar7);
    MB_randRangeFloat((float)dVar5,(float)dVar7);
    MB_randRangeFloat(DAT_007ff4e8,DAT_007ff4ec);
    MB_randRangeFloat(DAT_007ff4e8,DAT_007ff4ec);
    MB_randRangeFloat(DAT_007ff4d8,DAT_007ff4dc);
    MB_randRangeFloat(DAT_007ff4e0,DAT_007ff4e4);
    MB_randRangeFloat((float)(longlong)DAT_007ff4f8,(float)(longlong)DAT_007ff4fc);
    uVar1 = FastDoubleToInt();
    MB_randRangeFloat((float)(longlong)DAT_007ff500,(float)(longlong)DAT_007ff504);
    uVar2 = FastDoubleToInt();
    MB_randRangeFloat((float)(longlong)DAT_007ff508,(float)(longlong)DAT_007ff50c);
    uVar3 = FastDoubleToInt();
    SpawnPart_2(local_f0,local_e0,local_d0,DAT_007ff510,DAT_007ff514,uVar1,uVar2,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1b);
  return;
}


// 0x0306148 (0x510 bytes)
void M238_00306148(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar11;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  longlong local_b0;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar11 = DAT_007ff48c;
  if (*(char *)(param_1 + 0x20) == '\x0f') {
    local_b0 = (longlong)DAT_007ff48c;
    iVar11 = FastDoubleToInt((double)((float)local_b0 * 1.5));
  }
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      local_e0 = *(float *)(param_1 + 0x10);
      local_dc = *(undefined4 *)(param_1 + 0x14);
      local_d8 = *(float *)(param_1 + 0x18);
      local_d4 = *(undefined4 *)(param_1 + 0x1c);
      MB_RandomizeVector(DAT_007ff494,&local_e0);
      dVar20 = 0.550000011920929;
      local_d8 = local_d8 + 0.55;
      dVar14 = (double)MB_randRot();
      dVar15 = (double)MB_randRangeFloat(DAT_007ff4a0,DAT_007ff4a4);
      dVar16 = (double)MB_randRangeFloat(DAT_007ff4a8,DAT_007ff4ac);
      if (*(char *)(param_1 + 0x20) == '\x0f') {
        dVar15 = (double)(float)(dVar15 * dVar20);
        dVar16 = (double)(float)(dVar16 * dVar20);
        local_d8 = local_d8 - 0.2;
      }
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar20 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar20 = dVar14;
      }
      iVar13 = 0;
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar20 < 0.0) {
        dVar17 = dVar20;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar20 = (double)(float)(dVar17 * dVar17);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar17));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar14 = (double)(float)(dVar20 * dVar19);
      dVar18 = (double)g_FrameTime;
      local_c8 = (float)(dVar18 * dVar16);
      fVar3 = fVar5 * fVar1;
      local_b0 = (longlong)DAT_007ff4d0;
      dVar16 = 0.0;
      dVar21 = 0.5;
      local_d0 = *(float *)(iVar2 + 0x120) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
      ;
      local_cc = *(float *)(iVar2 + 0x124) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 ((float)(dVar20 * dVar14) * 2.601887e-06 +
                 (float)(dVar14 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar20 * dVar17) *
                                                       -0.16666656732559204 + dVar17))));
      local_b4 = local_c4;
      local_b8 = -(DAT_007ff4b0 * g_FrameTimeSq *
                   (float)(longlong)(animationSpeed * (float)((double)local_b0 + 0.5)) - local_c8);
      local_c0 = local_d0;
      local_bc = local_cc;
      if (0 < DAT_007ff490) {
        dVar14 = 1.5;
        dVar15 = 1.0;
        dVar20 = 2.5;
        do {
          dVar17 = (double)MB_randRangeFloat((float)dVar21,(float)dVar14);
          local_c4 = (float)((double)DAT_007ff4b4 * dVar17);
          local_b4 = (float)((double)DAT_007ff4b8 * dVar17);
          MB_RandomizeVector(DAT_007ff498,&local_e0);
          MB_RandomizeVector(DAT_007ff49c * g_FrameTime,&local_c0);
          uVar7 = DAT_007ff4c4;
          uVar6 = DAT_007ff4bc;
          MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar8 = FastLerpColor(uVar6,uVar7);
          uVar7 = DAT_007ff4c8;
          uVar6 = DAT_007ff4c0;
          MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar9 = FastLerpColor(uVar6,uVar7);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_007ff4cc + dVar21);
          local_b0 = (longlong)DAT_007ff4d4;
          fVar3 = animationSpeed * (float)((double)(longlong)DAT_007ff4d0 + dVar21);
          dVar17 = (double)MB_randRangeFloat
                                     ((float)((double)local_b0 * dVar21),
                                      (float)((double)local_b0 * dVar20));
          uVar10 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          SpawnPart_2
                    (&local_e0,&local_d0,&local_c0,uVar8,uVar9,(int)fVar1,(int)fVar3,uVar10);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_007ff490);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  return;
}


// 0x0306680 (0x1c8 bytes)
void M238_00306680(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<24> local_50;
  
  MB_randRot();
  dVar4 = 0.0;
  MB_randRangeFloat(0.0,DAT_007ff488);
  uVar2 = MB_randRangeFloat((float)dVar4,DAT_007ff478);
  uVar3 = MB_randRangeFloat(DAT_007ff478,DAT_007ff47c);
  uVar1 = MB_randRange(DAT_007ff480,DAT_007ff484);
  SpawnPart_52(uVar2,uVar3,local_50,DAT_007ff470,DAT_007ff474,in_r6,in_r7,uVar1);
  return;
}


// 0x0306888 (0x37c bytes)
undefined8 M238_00306888(undefined8 param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  local_80 = (param_2->pos).x;
  dVar17 = (double)local_80;
  local_7c = (param_2->pos).y;
  dVar18 = (double)local_7c;
  local_74 = (param_2->pos).w;
  dVar15 = (double)local_74;
  dVar19 = (double)(param_2->pos).z;
  dVar20 = 0.5;
  pvVar5 = param_2->pVar;
  local_78 = (float)(dVar19 + 0.5);
  dVar12 = (double)GetGroundZ(0x3fe0000000000000,&local_80,0);
  Delt((float)dVar12,g_FrameTimeSq * 27.0,&(param_2->pos).z);
  dVar12 = 0.05000000074505806;
  OrganicDeltAngSpeed
            (param_1,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,param_2);
  fVar4 = (param_2->rotation).z;
  fVar1 = fVar4 + 1.5707963;
  fVar2 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar2 = fVar4;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar6 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
    fVar6 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = fVar6 * fVar6;
  fVar2 = fVar4 * fVar4;
  fVar8 = fVar1 * fVar1 * fVar6;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar9 = fVar1 * fVar8;
  fVar7 = fVar2 * fVar3;
  local_bc = (fVar1 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6) *
             2.0;
  local_c0 = (fVar2 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
             2.0;
  dVar16 = 0.0;
  local_b8 = 0;
  uVar10 = MB_UpdateNavMove
                     (0x3ff0000000000000,param_2,(MobyInstance *)((int)pvVar5 + 0x180),&local_c0,
                      auStack_b0);
  if (*(int *)((int)pvVar5 + 0x2d0) != -1) {
    fVar1 = (float)(dVar18 - (double)(param_2->pos).y);
    fVar2 = (float)(dVar17 - (double)(param_2->pos).x);
    fVar3 = (float)(dVar19 - (double)(param_2->pos).z);
    local_84 = (float)dVar15;
    dVar15 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar4 = (float)(dVar12 / dVar15);
    dVar12 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar12 = (double)(fVar4 * fVar3);
    }
    dVar13 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar14 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar14 = (double)(fVar4 * fVar2);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar12 = (double)(fVar4 * fVar3);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar14 = (double)(fVar4 * fVar2);
    }
    local_88 = (float)(dVar19 + dVar12);
    local_8c = (float)(dVar18 + dVar13);
    local_90 = (float)(dVar17 + dVar14);
    iVar11 = MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar5 + 0x2d0),&param_2->pos,&local_90,&local_a0);
    if (iVar11 != 0) {
      iVar11 = PointInsideComplexPoly
                         ((Vec4 *)&param_2->pos,
                          (Vec4 *)Splines[*(int *)((int)pvVar5 + 0x2d0)]->points,
                          Splines[*(int *)((int)pvVar5 + 0x2d0)]->cnt);
      fVar4 = (param_2->pos).z;
      fVar1 = (param_2->pos).y;
      fVar2 = (param_2->pos).x;
      if (iVar11 == 0) {
        (param_2->pos).x = local_a0;
        (param_2->pos).y = local_9c;
        (param_2->pos).z = local_98;
        (param_2->pos).w = local_94;
        fVar4 = local_98;
        fVar1 = local_9c;
        fVar2 = local_a0;
      }
      fVar3 = animationSpeed;
      if ((float)((double)g_FrameTime * dVar20) <=
          SQRT((float)((double)fVar4 - dVar19) * (float)((double)fVar4 - dVar19) +
               (float)((double)fVar2 - dVar17) * (float)((double)fVar2 - dVar17) +
               (float)((double)fVar1 - dVar18) * (float)((double)fVar1 - dVar18))) {
        *(undefined4 *)((int)pvVar5 + 0x2d4) = 0;
      }
      else {
        iVar11 = *(int *)((int)pvVar5 + 0x2d4) + 1;
        *(int *)((int)pvVar5 + 0x2d4) = iVar11;
        if ((int)(fVar3 * 10.5) < iVar11) {
          uVar10 = 2;
        }
      }
    }
  }
  return uVar10;
}


// 0x0306c48 (0x570 bytes)
void M238_00306c48
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  u8 uVar9;
  short sVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float local_90;
  float local_8c;
  undefined4 local_88;
  GPiece<4> auStack_80;
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  pvVar2 = param_1->pVar;
  uVar11 = ZEXT48(pvVar2);
  if (*(int *)((int)pvVar2 + 0x38) != 0) {
    auVar20 = ZEXT416(0xffffffff);
    auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    auVar20 = loadVectorLeftIndexed(in_LR,0x306c04);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar20 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                         auVar21);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x2c4,uVar11);
    *(undefined4 *)((int)pvVar2 + 0x2c4U & 0xfffffffc) = uVar4;
  }
  uVar9 = param_1->state;
  if ((uVar9 != '\t') && (uVar9 != '\0' && uVar9 != '\v')) {
    iVar8 = FastDecTimerS32(uVar11 + 0x2c4);
    uVar4 = 0x41a00000;
    if (iVar8 != 0) {
      uVar4 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar2 + 0x2ac) = uVar4;
    uVar9 = param_1->state;
  }
  if (uVar9 != '\t' && *(short *)((int)pvVar2 + 0x2e8) != 0) {
    sVar10 = *(short *)((int)pvVar2 + 0x2ea) + 1;
    *(short *)((int)pvVar2 + 0x2ea) = sVar10;
    local_70 = (longlong)(int)(animationSpeed * 60.5);
    if (((((int)(animationSpeed * 60.5) * 0xf < (int)sVar10) && (param_1->enabled == '\0')) &&
        (param_1->group != -1)) &&
       (iVar8 = MB_CountActiveMobysByGroup(param_1->group,0xffffffffffffffff), 3 < iVar8))
    {
      iVar8 = MB_randInt(0x45);
      if (iVar8 == 0) {
        dVar19 = 3.1415927410125732;
        dVar12 = (double)FastWrapRot((param_1->rotation).z,3.1415927);
        dVar18 = 3.141592502593994;
        fVar1 = (float)(dVar12 + 1.570796251296997);
        dVar17 = -3.141592502593994;
        dVar16 = -0.16666656732559204;
        dVar15 = 0.008333025500178337;
        dVar14 = -0.0001980741071747616;
        dVar12 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        fVar6 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar7 = fVar6 * fVar6;
        fVar1 = fVar7 * fVar7 * fVar6;
        fVar5 = fVar7 * fVar1;
        local_90 = fVar7 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6;
        dVar13 = (double)FastWrapRot((param_1->rotation).z,(float)dVar19);
        local_88 = 0;
        dVar19 = (double)(float)(dVar18 - dVar13);
        if (dVar13 - (double)(float)(dVar18 - dVar13) < 0.0) {
          dVar19 = dVar13;
        }
        dVar18 = (double)(float)(dVar17 - dVar13);
        if ((double)(float)(dVar17 - dVar13) - dVar19 < 0.0) {
          dVar18 = dVar19;
        }
        dVar17 = (double)(float)(dVar18 * dVar18);
        dVar13 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
        dVar19 = (double)(float)(dVar17 * dVar13);
        local_8c = (float)((double)(float)(dVar17 * dVar19) * dVar12 +
                          (double)(float)(dVar19 * dVar14 +
                                         (double)(float)(dVar13 * dVar15 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar18) * dVar16 + dVar18))));
        CollDamageMobyDirect
                  (1.0,param_1,g_heroMobyPtr,0x10000,param_4,&(param_1->pos).x,&local_90);
      }
    }
  }
  iVar8 = MB_damage(param_1,0x330000,0);
  dVar12 = 0.0;
  local_7c = 0.0;
  MB_HandleDamage(param_1,iVar8,uVar11 + 0x20,0,auStack_80,&local_7c,0,4);
  if ((iVar8 != 0) && (param_1->state != '\b' && param_1->state != 'c')) {
    if (param_1->group != -1) {
      MB_SetGroupField(param_1->group,7);
    }
    if (local_7c != 0.0) {
      fVar1 = *(float *)((int)pvVar2 + 0x20) - local_7c;
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar2 + 0x20) = fVar1;
      fVar6 = DAT_007ff520;
      fVar5 = g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x144) = 9;
      *(float *)((int)pvVar2 + 0x138) = fVar6 * fVar5;
      fVar6 = DAT_007ff51c;
      *(undefined1 *)((int)pvVar2 + 0x15d) = 0;
      *(undefined4 *)((int)pvVar2 + 0x150) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x154) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x158) = 0x3f800000;
      *(float *)((int)pvVar2 + 0x13c) = fVar6 * fVar5;
      if (dVar12 < (double)fVar1) {
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_74,
                   uVar11 + 0x138,uVar11 + 0x13c);
        MB_StartKick((double)local_74,param_1,uVar11 + 0x120);
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        *(undefined4 *)((int)pvVar2 + 0x170) = 0xbf800000;
        *(undefined4 *)((int)pvVar2 + 0x174) = 0xbf800000;
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar2 + 0x117) = 0xfa;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0xc,0x306c04);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = vectorSplatHalfWord(auVar20,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar20,0x26,uVar11);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar3;
        MB_UpdateLightsTransition(param_1,uVar11 + 0x110);
      }
      else {
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar1 = g_FrameTime;
        *(float *)((int)pvVar2 + 0x138) = g_FrameTime * 8.0;
        *(float *)((int)pvVar2 + 0x13c) = fVar1 * 10.0;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_78,
                   uVar11 + 0x138,uVar11 + 0x13c);
        MB_StartKick((double)local_78,param_1,uVar11 + 0x120);
        *(undefined4 *)((int)pvVar2 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar2 + 0x174) = 0x41900000;
        param_1->state = 'c';
        *(undefined1 *)((int)pvVar2 + 0x117) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar11 + 0x110);
      }
      M238_00306148(param_1);
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar11 + 0x110);
  return;
}


// 0x0307270 (0x1e00 bytes)
/* Moby 238 */

void UpdateMoby_238(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  f32 fVar9;
  u16 *puVar10;
  MobyClass *pMVar11;
  uint uVar12;
  MobyInstance *victim;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined2 uVar26;
  uint uVar22;
  int iVar23;
  ulonglong uVar21;
  undefined4 uVar24;
  int *piVar25;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  GPiece<16> auStack_e0;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  f32 local_b0;
  f32 local_ac;
  float local_a8;
  f32 local_a4;
  uint local_60;
  MobyInstance *local_50;
  GPiece<4> auStack_4c;
  longlong local_48;
  
  lVar18 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  M238_00306c48(lVar18);
  MB_SetScaleCheat(0x40019999a0000000,(int)pvVar8 + 0x200);
  MB_getTarget((double)*(float *)((int)pvVar8 + 0x2ac),lVar18);
  fVar9 = (moby->pos).z;
  bVar1 = moby->state;
  uVar22 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  lVar27 = (ulonglong)local_60 +
           (ZERO_MASK(local_60) & ZEXT48(g_heroMobyPtr) - (ulonglong)local_60);
  if ((int)((uVar22 >> 1 ^ (uint)fVar9) - uVar22) < 0x41d00000) {
    DeleteMoby(moby);
    return;
  }
  victim = (MobyInstance *)lVar27;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      iVar23 = FUN_0048c188(lVar18,(int)pvVar8 + 0x120);
      if (iVar23 != 0) {
        moby->state = '\x06';
        *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
        *(undefined2 *)((int)pvVar8 + 200) = 0;
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 7) {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      uVar22 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar22 & 1) != 0) {
        moby->state = '\n';
        if (moby->animationId == '\r') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar18,0xd,8,(int)(animationSpeed * 8.5));
        return;
      }
      fVar9 = (moby->pos).z;
      uVar22 = (int)fVar9 >> 0x1f;
      if ((int)((uVar22 >> 1 ^ (uint)fVar9) - uVar22) < 0x41d80000) {
        DeleteMoby(moby);
        return;
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 6) {
      FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x280) - fVar3),
                   (double)(*(float *)((int)pvVar8 + 0x284) - fVar4));
      M238_00306888(lVar18);
      fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x284);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x280);
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) &&
         (moby->state = '\x01', moby->animationId != '\0')) {
        local_48 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 7.5));
      }
      fVar3 = (victim->pos).y - *(float *)((int)pvVar8 + 0x284);
      fVar4 = (victim->pos).x - *(float *)((int)pvVar8 + 0x280);
      fVar5 = (victim->pos).z - *(float *)((int)pvVar8 + 0x288);
      *(int *)((int)pvVar8 + 0x2d8) = *(int *)((int)pvVar8 + 0x2d8) + 1;
      dVar28 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if ((*(int *)((int)pvVar8 + 0x2d0) == -1) ||
         (iVar23 = PointInsideComplexPoly
                             (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar8 + 0x2d0)]->points
                              ,Splines[*(int *)((int)pvVar8 + 0x2d0)]->cnt), iVar23 != 0)) {
        if ((double)*(float *)((int)pvVar8 + 0x2ac) <= dVar28) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x04';
            *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
            iVar23 = MB_randInt(2);
            uVar2 = moby->animationId;
            if (iVar23 < 1) {
              if (iVar23 < 0) {
LAB_00308bfc:
                if (uVar2 != '\x10') {
                  local_48 = (longlong)(int)(animationSpeed * 8.5);
                  MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
                }
              }
              else if (uVar2 != '\x03') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
              }
            }
            else {
              if (1 < iVar23) goto LAB_00308bfc;
              if (uVar2 != '\x0f') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
              }
            }
          }
        }
        else {
          local_48 = (longlong)(int)(animationSpeed * 70.5);
          if ((int)(animationSpeed * 70.5) < *(int *)((int)pvVar8 + 0x2d8)) {
            if (moby->group != -1) {
              MB_SetGroupField(moby->group,1);
            }
            moby->state = '\x04';
            *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
            iVar23 = MB_randInt(2);
            uVar2 = moby->animationId;
            if (iVar23 < 1) {
              if (iVar23 < 0) {
LAB_00308ae0:
                if (uVar2 != '\x10') {
                  local_48 = (longlong)(int)(animationSpeed * 8.5);
                  MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
                }
              }
              else if (uVar2 != '\x03') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
              }
            }
            else {
              if (1 < iVar23) goto LAB_00308ae0;
              if (uVar2 != '\x0f') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
              }
            }
          }
        }
      }
      moby->setByGroup = '\0';
      goto LAB_00308f7c;
    }
    if (bVar1 == 5) {
      g_heroMobyPtr->unk58 = 1.3;
      uVar31 = FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                            (double)((victim->pos).y - (moby->pos).y));
      dVar28 = 0.20000000298023224;
      OrganicDeltAngSpeed
                (uVar31,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,
                 &DAT_003071b8,(int)pvVar8 + 0x2a0);
      if (((moby->updateId == moby->animationId) &&
          (iVar23 = MB_MayaFrameTrigger(13.0,moby), iVar23 != 0)) &&
         (ABS((moby->pos).z - (victim->pos).z) < 0.5)) {
        fVar3 = (moby->pos).y;
        fVar4 = (victim->pos).y;
        fVar5 = (moby->pos).x;
        fVar14 = fVar3 - fVar4;
        fVar6 = (victim->pos).x;
        fVar13 = fVar5 - fVar6;
        if (SQRT(fVar13 * fVar13 + fVar14 * fVar14) < 2.0) {
          dVar29 = (double)FUN_005e8338((double)(fVar6 - fVar5),(double)(fVar4 - fVar3));
          dVar29 = (double)FastSubRots((float)dVar29,(moby->rotation).z);
          if (dVar29 < 0.2617993950843811) {
            fVar3 = (moby->rotation).z;
            fVar4 = fVar3 + 1.5707963;
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar6 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar6 = fVar4;
            }
            fVar13 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar13 = fVar5;
            }
            local_b8 = 0;
            fVar3 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
              fVar3 = fVar6;
            }
            fVar4 = fVar13 * fVar13;
            fVar5 = fVar3 * fVar3;
            fVar15 = fVar4 * fVar4 * fVar13;
            fVar6 = fVar5 * fVar5 * fVar3;
            fVar16 = fVar4 * fVar15;
            fVar14 = fVar5 * fVar6;
            local_bc = (float)((double)(fVar4 * fVar16 * 2.601887e-06 +
                                       fVar16 * -0.0001980741 +
                                       fVar15 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13
                                       ) * dVar28);
            local_c0 = (float)((double)(fVar5 * fVar14 * 2.601887e-06 +
                                       fVar14 * -0.0001980741 +
                                       fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                              dVar28);
            local_b0 = (victim->pos).x;
            local_ac = (victim->pos).y;
            local_a4 = (victim->pos).w;
            local_a8 = (victim->pos).z + 0.75;
            CollDamageMobyDirect(1.0,victim,moby,1,0x3071b8,&local_b0,&local_c0);
          }
        }
      }
      if (((moby->field43_0x70 & 2U) != 0) &&
         (fVar3 = (moby->pos).y - (victim->pos).y, fVar4 = (moby->pos).x - (victim->pos).x,
         2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
        iVar23 = MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar23 < 1) {
          if (-1 < iVar23) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_00308f7c;
          }
        }
        else if (iVar23 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 4) {
      dVar29 = (double)FUN_005e8338((double)((victim->pos).x - fVar3),
                                    (double)((victim->pos).y - fVar4));
      dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
      dVar28 = 0.6981316804885864;
      if ((dVar30 <= 0.6981316804885864) && (dVar28 = dVar30, dVar30 < -0.6981316804885864)) {
        dVar28 = -0.6981316804885864;
      }
      *(float *)((int)pvVar8 + 0x268) = (float)dVar28;
      FastWrapRot((float)dVar29,*(float *)((int)pvVar8 + 0x2a4));
      iVar23 = M238_00306888(lVar18);
      if (iVar23 == 2) {
        moby->state = '\x06';
        *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
        moby->setByGroup = '\0';
      }
      else {
        iVar23 = FastDecTimerS32((int)pvVar8 + 0x2c0);
        if (iVar23 != 0) {
          dVar28 = (double)MB_randRangeFloat(30.0,90.0);
          fVar3 = animationSpeed;
          *(float *)((int)pvVar8 + 0x2a4) = -*(float *)((int)pvVar8 + 0x2a4);
          *(int *)((int)pvVar8 + 0x2c0) = (int)(fVar3 * ((float)(longlong)dVar28 + 0.5));
        }
        fVar3 = (victim->pos).y;
        fVar4 = (victim->pos).x;
        fVar6 = (moby->pos).y - fVar3;
        fVar13 = (moby->pos).x - fVar4;
        fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x284);
        fVar5 = (victim->pos).z;
        fVar4 = fVar4 - *(float *)((int)pvVar8 + 0x280);
        fVar14 = fVar5 - *(float *)((int)pvVar8 + 0x288);
        if (1.5 <= SQRT(fVar13 * fVar13 + fVar6 * fVar6)) {
          if ((*(float *)((int)pvVar8 + 0x2ac) + 5.5 <=
               SQRT(fVar14 * fVar14 + fVar4 * fVar4 + fVar3 * fVar3)) ||
             (4.4 <= ABS((moby->pos).z - fVar5))) {
            if ((moby->setByGroup != '\x01') && (iVar23 = MB_randInt(9), iVar23 == 0)) {
              moby->state = '\x06';
              *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
            }
          }
          else if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x04') {
            local_48 = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(lVar18,4,0,(int)(animationSpeed * 5.5));
          }
        }
        moby->setByGroup = '\0';
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 3) {
      uVar31 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
      OrganicDeltAngSpeed
                (uVar31,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar18,&DAT_003071b8,
                 (int)pvVar8 + 0x2a0);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
        iVar23 = MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar23 < 1) {
          if (-1 < iVar23) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_00308f7c;
          }
        }
        else if (iVar23 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_00308f7c;
    }
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar8 + 700) == 0) {
          if (*(int *)((int)pvVar8 + 0x28c) == 0) {
            FUN_005e7e98((int)pvVar8 + 0x280,lVar18 + 0x10);
            moby->state = '\x01';
            if (moby->animationId != '\0') {
              MB_SetAnimation(lVar18,0,0,3);
            }
          }
          else {
            moby->drawDistance = 0;
            moby->state = '\v';
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            moby->collision = (ushort *)0x0;
          }
        }
        else {
          FUN_005e7e98((int)pvVar8 + 0x280,lVar18 + 0x10);
          moby->state = '\t';
          if (moby->animationId != '\f') {
            MB_SetAnimation(lVar18,0xc,0,3);
          }
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        }
        *(undefined4 *)((int)pvVar8 + 0x20) = 0x40000000;
        *(undefined4 *)((int)pvVar8 + 0x2c4) = 0;
        *(undefined4 *)((int)pvVar8 + 0x2b8) = 0;
        *(undefined1 *)((int)pvVar8 + 0x29) = 1;
        *(undefined1 *)((int)pvVar8 + 0x58) = 8;
        *(undefined1 *)((int)pvVar8 + 0x5a) = 5;
        *(undefined4 *)((int)pvVar8 + 0x140) = 0x200;
        uVar31 = 0x3fe0000000000000;
        *(undefined4 *)((int)pvVar8 + 0x148) = 0x3f000000;
        MB_InitDefaultParams((float *)((int)pvVar8 + 0x180));
        *(undefined4 *)((int)pvVar8 + 0x18c) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x188) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x180) = 0x38d;
        fVar3 = g_FrameTime * 5.5;
        *(uint *)((int)pvVar8 + 0x1b8) = *(uint *)((int)pvVar8 + 0x1b8) | 0x10;
        *(float *)((int)pvVar8 + 0x1a4) = fVar3;
        if (*(int *)((int)pvVar8 + 0x2dc) != 0) {
          uVar19 = idol::GetAnimDuration(0x14);
          uVar20 = idol::GetAnimDuration(0xaa);
          uVar26 = MB_randRange(uVar19,uVar20);
          *(undefined2 *)((int)pvVar8 + 0x2c8) = uVar26;
        }
        FUN_005e7e98((int)pvVar8 + 0x1d0,lVar18 + 0x10);
        uVar19 = idol::GetAnimDuration(0x78);
        uVar20 = idol::GetAnimDuration(700);
        uVar26 = MB_randRange(uVar19,uVar20);
        *(undefined2 *)((int)pvVar8 + 0x2cc) = uVar26;
        FUN_005e7e98(auStack_e0,lVar18 + 0x10);
        dVar28 = (double)GetGroundZ(uVar31,auStack_e0,0);
        (moby->pos).z = (float)dVar28;
        uVar22 = rand();
        if ((uVar22 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007ff534;
      }
      goto LAB_00308f7c;
    }
    dVar28 = (double)FUN_005e8548(lVar27 + 0x10,(int)pvVar8 + 0x280);
    dVar30 = (double)(moby->rotation).z;
    dVar29 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                  (double)((victim->pos).y - (moby->pos).y));
    dVar29 = (double)FastSubRots((float)dVar30,(float)dVar29);
    if ((dVar28 < (double)*(float *)((int)pvVar8 + 0x2ac)) &&
       (ABS((moby->pos).z - (victim->pos).z) < 4.0)) {
      moby->state = '\x03';
      if (0.9599310755729675 <= dVar29) {
        if (moby->animationId != '\x11') {
          uVar31 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar18,0x11,0,uVar31);
        }
      }
      else {
        if (moby->animationId != '\x02') {
          uVar31 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar18,2,0,uVar31);
        }
        moby->unk58 = 1.55;
      }
      goto LAB_00308f7c;
    }
    bVar1 = moby->setByGroup;
    if ((bVar1 & 1) == 0) {
LAB_0030776c:
      if (bVar1 != 7) {
        if (moby->animationId != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 14.5);
          MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 14.5));
        }
        local_48 = (longlong)(int)(animationSpeed * 20.5);
        if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar8 + 0x2cc)) {
          Delt(g_FrameTime * 2.5,g_FrameTimeSq * 7.0,
                         (float *)((int)pvVar8 + 0x1e4));
        }
        else {
          Delt(0.0,g_FrameTimeSq * 7.0,(float *)((int)pvVar8 + 0x1e4));
        }
        moby->unk58 = 0.8;
        DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar18,(int)pvVar8 + 0x1d0);
        goto LAB_00308f7c;
      }
    }
    else {
      iVar23 = MB_randInt(0x13);
      if (iVar23 != 0) {
        bVar1 = moby->setByGroup;
        goto LAB_0030776c;
      }
    }
    uVar21 = MB_randInt(0x100);
    fVar3 = *(float *)((int)pvVar8 + 0x2a8);
    if ((uVar21 & 1) != 0) {
      fVar3 = -fVar3;
      *(float *)((int)pvVar8 + 0x2a8) = fVar3;
    }
    *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
    dVar28 = (double)MB_randRangeFloat(30.0,90.0);
    local_48 = (longlong)(int)dVar28;
    uVar24 = idol::GetAnimDuration((int)dVar28);
    *(undefined4 *)((int)pvVar8 + 0x2c0) = uVar24;
    moby->state = '\x03';
    if (moby->animationId != '\x02') {
      local_48 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(lVar18,2,0,(int)(animationSpeed * 7.5));
    }
    moby->setByGroup = '\0';
    goto LAB_00308f7c;
  }
  if (bVar1 == 99) {
    uVar22 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar22 & 0x40) == 0) {
      dVar28 = (double)BlendAnimFrame(moby);
      fVar9 = (moby->pos).z;
      uVar12 = (int)fVar9 >> 0x1f;
      if ((dVar28 <= 37.0) || (moby->updateId != moby->animationId)) {
        if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41200000) {
          MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
        if ((uVar22 & 1) != 0) {
          M238_00306680(lVar18);
        }
        goto LAB_00308f7c;
      }
    }
    moby->unk58 = 0.0;
    MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
    moby->state = '\x0f';
    moby->modeBits = moby->modeBits | TRANSPARENT;
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xf) {
    M238_00306680(lVar18);
    M238_00306148(lVar18);
    M238_00306148(lVar18);
    DeleteMoby(moby);
    return;
  }
  if (bVar1 == 0xe) {
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
      uVar21 = MB_randInt(0x100);
      fVar3 = *(float *)((int)pvVar8 + 0x2a8);
      if ((uVar21 & 1) != 0) {
        fVar3 = -fVar3;
        *(float *)((int)pvVar8 + 0x2a8) = fVar3;
      }
      *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
      dVar28 = (double)MB_randRangeFloat(30.0,90.0);
      *(int *)((int)pvVar8 + 0x2c0) = (int)(animationSpeed * ((float)(longlong)dVar28 + 0.5));
      iVar23 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar23 < 1) {
        if (-1 < iVar23) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
      }
      else if (iVar23 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_00308f7c;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xd) {
    puVar10 = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = puVar10;
    uVar31 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
    OrganicDeltAngSpeed
              (uVar31,0x3f9eb851e0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar18,&DAT_003071b8,(int)pvVar8 + 0x2a0)
    ;
    if ((moby->field43_0x70 & 2U) == 0) goto LAB_00308f7c;
    uVar21 = MB_randInt(0x100);
    fVar3 = *(float *)((int)pvVar8 + 0x2a8);
    if ((uVar21 & 1) != 0) {
      fVar3 = -fVar3;
      *(float *)((int)pvVar8 + 0x2a8) = fVar3;
    }
    *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
    dVar28 = (double)MB_randRangeFloat(30.0,90.0);
    *(int *)((int)pvVar8 + 0x2c0) = (int)(animationSpeed * ((float)(longlong)dVar28 + 0.5));
    moby->state = '\x04';
    *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
    iVar23 = MB_randInt(2);
    uVar2 = moby->animationId;
    if (iVar23 < 1) {
      if (iVar23 < 0) {
LAB_00307d44:
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      else if (uVar2 != '\x03') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
      }
    }
    else {
      if (1 < iVar23) goto LAB_00307d44;
      if (uVar2 != '\x0f') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xc) {
    uVar22 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar22 & 1) != 0) {
      moby->state = '\x0e';
      if (moby->animationId == '\t') {
        return;
      }
      local_48 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(lVar18,9,8,(int)(animationSpeed * 7.5));
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xb) {
    uVar31 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x280) - fVar3),
                          (double)(*(float *)((int)pvVar8 + 0x284) - fVar4));
    OrganicDeltAngSpeed
              (uVar31,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,&DAT_003071b8,
               (int)pvVar8 + 0x2a0);
    fVar4 = (victim->pos).y - *(float *)((int)pvVar8 + 0x284);
    fVar3 = (victim->pos).z;
    fVar5 = (victim->pos).x - *(float *)((int)pvVar8 + 0x280);
    fVar6 = fVar3 - *(float *)((int)pvVar8 + 0x288);
    if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x2ac)) &&
        (ABS(*(float *)((int)pvVar8 + 0x288) - fVar3) < 8.0)) || (moby->setByGroup == '\x02')) {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,2);
      }
      dVar29 = (double)DAT_007ff528;
      dVar28 = (double)g_FrameTimeSq;
      *(undefined4 *)((int)pvVar8 + 0x134) = 0;
      moby->drawDistance = 0x40;
      *(float *)((int)pvVar8 + 0x130) = (float)(dVar29 * dVar28);
      fVar3 = DAT_007ff524 * g_FrameTime;
      *(float *)((int)pvVar8 + 0x138) = fVar3;
      dVar28 = (double)MB_computeLobVelocity
                                 ((double)fVar3,-dVar29,lVar18 + 0x10,(int)pvVar8 + 0x280,0x800000,
                                  &DAT_00720000,auStack_4c);
      *(float *)((int)pvVar8 + 0x13c) = (float)dVar28;
      *(undefined1 *)((int)pvVar8 + 0x15d) = 0;
      fVar3 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar8 + 0x144) = 5;
      MB_StartKick((double)fVar3,lVar18,(int)pvVar8 + 0x120,5,8,1,0);
      MVar7 = moby->modeBits;
      pMVar11 = moby->pClass;
      *(undefined4 *)((int)pvVar8 + 0x170) = 0x40a00000;
      *(undefined4 *)((int)pvVar8 + 0x174) = 0x41200000;
      moby->state = '\f';
      moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
      moby->collision = pMVar11->collision;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 10) {
    dVar28 = (double)BlendAnimFrame(moby);
    if (29.0 < dVar28) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
      iVar23 = MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar23 < 1) {
        if (-1 < iVar23) {
          if (uVar2 == '\x03') {
            return;
          }
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
          return;
        }
      }
      else if (iVar23 < 2) {
        if (uVar2 == '\x0f') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
        return;
      }
      if (uVar2 == '\x10') {
        return;
      }
      local_48 = (longlong)(int)(animationSpeed * 8.5);
      MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
      return;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 != 9) goto LAB_00308f7c;
  if (*(int *)((int)pvVar8 + 0x2dc) != 0) {
    dVar28 = (double)FUN_005e8588(lVar18 + 0x10,lVar27 + 0x10);
    if (dVar28 < 2.0) goto LAB_00308f7c;
    piVar25 = *(int **)((int)pvVar8 + 0x2e0);
    if (*(int *)((int)pvVar8 + 0x2e4) < worldUpdateTime) {
      *(int *)((int)pvVar8 + 0x2e4) = worldUpdateTime;
      MB_GetFirstMobyInGroup(&local_50,(uint)(byte)moby->group,'\0','\0');
      iVar23 = 0;
      while (local_50 != (MobyInstance *)0x0) {
        if (local_50->state < 0x80 && local_50->state != 9) {
          iVar23 = iVar23 + 1;
        }
        MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      }
      piVar25 = *(int **)((int)pvVar8 + 0x2e0);
      *piVar25 = iVar23;
    }
    if (5 < *piVar25) goto LAB_00308f7c;
  }
  FUN_005e81f0(&local_d0,lVar27 + 0x10,lVar18 + 0x10);
  if (((SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
        *(float *)((int)pvVar8 + 0x2ac)) && (ABS((moby->pos).z - (victim->pos).z) < 8.0)) &&
     (iVar23 = MB_randInt(0x13), iVar23 == 0)) {
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    moby->state = '\r';
    if (moby->animationId != '\a') {
      MB_SetAnimation(lVar18,7,0,1);
    }
    uVar20.piece<0,4>() = (moby->pos).x;
    uVar20.piece<4,4>() = (moby->pos).y;
    uVar17.piece<0,4>() = (moby->pos).z;
    uVar17.piece<4,4>() = (moby->pos).w;
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    M238_00305d08(uVar20,uVar17);
    goto LAB_00308f7c;
  }
  bVar1 = moby->setByGroup;
  if ((bVar1 & 1) == 0) {
LAB_00307b24:
    if (bVar1 != 7) goto LAB_00308f7c;
  }
  else {
    iVar23 = FastDecTimerS16((int)pvVar8 + 0x2c8);
    if (iVar23 == 0) {
      bVar1 = moby->setByGroup;
      goto LAB_00307b24;
    }
  }
  moby->state = '\r';
  if (moby->animationId != '\a') {
    MB_SetAnimation(lVar18,7,0,1);
  }
  uVar31.piece<0,4>() = (moby->pos).x;
  uVar31.piece<4,4>() = (moby->pos).y;
  uVar19.piece<0,4>() = (moby->pos).z;
  uVar19.piece<4,4>() = (moby->pos).w;
  moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
  M238_00305d08(uVar31,uVar19);
LAB_00308f7c:
  if (((moby->enabled != '\0') && (moby->state != '\b' && moby->state != '\t')) &&
     ((MB_UpdateManipulatorRot
                 ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar18,
                  (int)pvVar8 + 0x200,0), moby->enabled != '\0' &&
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
      fVar5 = (moby->pos).z - GameCamera.posZ,
      SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 28.0)))) {
    MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x16';
  }
  return;
}



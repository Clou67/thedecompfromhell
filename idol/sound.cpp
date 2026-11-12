// idol/sound.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 45 functions, 0x505f58-0x507f60
#include <string.h>
#include "idol/sound.h"
#include "game/hero.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/libscream/989snd.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"

// 0x0505f58 (0x48 bytes)
void sound_SetMasterVolume(int which,int vol)

{
  snd_SetMasterVolume((double)((float)(longlong)vol * 0.0009765625),which);
  return;
}


// 0x0505fa8 (0x98 bytes)
void FUN_00505fa8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar1 = uVar4 - 0x90;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar4;
  puVar3[0x14] = in_LR;
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(8,param_2);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  uVar2 = ((undefined4 *)param_2)[1];
  *(undefined4 *)(puVar3 + 0xe) = *(undefined4 *)param_2;
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  auVar6 = loadVectorLeftIndexed(0xc,param_2);
  auVar9 = loadVectorLeftIndexed(in_LR,0x505fa0);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar6 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar9,auVar5);
  auVar5 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar8,auVar9,auVar5);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar5,0x7c,lVar1);
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar5,0x80,lVar1);
  *(undefined4 *)(puVar3 + 0x10) = uVar2;
  snd_SetMasterVolumeDucker(param_1,uVar4 - 0x20);
  return;
}


// 0x0506040 (0x4 bytes)
void STUB_00506040(...)

{
  return;
}


// 0x0506044 (0x4 bytes)
void STUB_00506044(...)

{
  return;
}


// 0x0506048 (0x2c bytes)
void FUN_00506048(void)

{
  FUN_0060c118(2,0);
  return;
}


// 0x0506074 (0x4 bytes)
void STUB_00506074(...)

{
  return;
}


// 0x0506090 (0x204 bytes)
void FUN_00506090(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte in_cr6;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  auVar4.piece<0,4>() = param_5;
  auVar4.piece<4,4>() = param_5;
  auVar4.piece<8,4>() = param_5;
  auVar4.piece<12,4>() = param_5;
  uVar2 = 0x70;
  auVar6.piece<0,4>() = param_6;
  auVar6.piece<4,4>() = param_6;
  auVar6.piece<8,4>() = param_6;
  auVar6.piece<12,4>() = param_6;
  memset(param_1,0,0xdc);
  puVar3 = (undefined4 *)param_1;
  *puVar3 = 0xdc;
  if ((param_2 & 4) != 0) {
    puVar3[1] = puVar3[1] | 4;
  }
  if ((param_2 & 8) != 0) {
    puVar3[1] = puVar3[1] | 8;
  }
  if ((param_2 & 1) != 0) {
    puVar3[1] = puVar3[1] | 1;
  }
  if ((param_2 & 2) != 0) {
    puVar3[1] = puVar3[1] | 2;
  }
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  puVar3[7] = param_4;
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  puVar3[5] = (int)param_3 + ((uint)((longlong)param_3 >> 0x3f) & 0x168);
  auVar4 = loadVectorLeftIndexed(uVar2,0x506078);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
  uVar1 = storeVectorElementWordIndexed(auVar5,0x20,param_1);
  *(undefined4 *)((uint)(puVar3 + 8) & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(4,0x506078);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar5,auVar4);
  if (!(bool)(in_cr6 >> 1 & 1)) {
    puVar3[8] = 0x3f800000;
    auVar5 = auVar4;
  }
  auVar4 = loadVectorLeftIndexed(8,0x506078);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar5,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar3[8] = 0xbf800000;
  }
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar4 = loadVectorLeftIndexed(0xc,0x506078);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar6);
  uVar1 = storeVectorElementWordIndexed(auVar6,0x10,param_1);
  *(undefined4 *)((uint)(puVar3 + 4) & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(0x10,0x506078);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar6,auVar4);
  if (!(bool)(in_cr6 >> 1 & 1)) {
    puVar3[4] = 0x40000000;
    auVar6 = auVar4;
  }
  auVar4 = ZEXT416(0);
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar3[4] = 0;
  }
  return;
}


// 0x0506294 (0x60 bytes)
void FUN_00506294(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  GPiece<224> auStack_f0;
  
  FUN_00506090(auStack_f0,param_2,param_4,param_5,param_6,param_3);
  FUN_00607dcc(param_1,auStack_f0);
  return;
}


// 0x05062f4 (0xbc bytes)
void FUN_005062f4(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  GPiece<232> auStack_110;
  
  FUN_00506090(auStack_110,0,param_4,param_5,param_6,param_3);
  uVar1 = FUN_00609814(param_1,param_2,auStack_110,0xffffffffffffffff);
  if (param_7 != (undefined4 *)0x0) {
    (*(code *)*param_7)(uVar1,param_8);
  }
  return;
}


// 0x05063b0 (0x94 bytes)
void FUN_005063b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  GPiece<224> auStack_100;
  
  FUN_00506090(auStack_100,param_2,param_4,param_5,param_6,param_3);
  uVar1 = FUN_00607dcc(param_1,auStack_100);
  (*(code *)*param_7)(uVar1,param_8);
  return;
}


// 0x0506444 (0x194 bytes)
void FUN_00506444(void)

{
  undefined8 uVar1;
  undefined2 in_r7;
  undefined8 in_r8;
  undefined8 in_r10;
  undefined4 in_stack_00000074;
  undefined4 *in_stack_0000007c;
  undefined4 in_stack_00000084;
  GPiece<32> local_220;
  GPiece<212> local_200;
  GPiece<220> auStack_12c;
  
  memset(local_200,0,0x1b0);
  FUN_00506090(auStack_12c,in_stack_00000074,in_r8,0,0,in_r7);
  if ((int)in_r10 == 0) {
    uVar1 = FUN_006363e4(local_220,local_200,0xffffffffffffffff);
    (*(code *)*in_stack_0000007c)(uVar1,in_stack_00000084);
  }
  else {
    uVar1 = FUN_006362a4(in_r10,7,local_220,local_200);
    (*(code *)*in_stack_0000007c)(uVar1,in_stack_00000084);
  }
  return;
}


// 0x05065d8 (0x4 bytes)
void FUN_005065d8(void)

{
  return;
}


// 0x05065dc (0x58 bytes)
void FUN_005065dc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00604da4();
  (*(code *)*param_2)(uVar1,param_3);
  return;
}


// 0x0506634 (0x4 bytes)
void FUN_00506634(void)

{
  return;
}


// 0x0506638 (0x28 bytes)
void FUN_00506638(undefined8 param_1)

{
  FUN_006084f4(param_1,1);
  return;
}


// 0x0506660 (0x4 bytes)
void FUN_00506660(void)

{
  return;
}


// 0x0506664 (0x48 bytes)
void FUN_00506664(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)*param_1)(5);
  }
  return;
}


// 0x05066ac (0x8 bytes)
undefined8 FUN_005066ac(void)

{
  return 4;
}


// 0x05066b4 (0x8 bytes)
undefined8 FUN_005066b4(void)

{
  return 0;
}


// 0x05066bc (0x8 bytes)
undefined8 STUB_005066bc_RET_0(...)

{
  return 0;
}


// 0x05066c4 (0x4 bytes)
void FUN_005066c4(void)

{
  return;
}


// 0x05066c8 (0x8 bytes)
undefined8 FUN_005066c8(void)

{
  return 0;
}


// 0x05066d0 (0x8 bytes)
undefined8 FUN_005066d0(void)

{
  return 0;
}


// 0x05066d8 (0x8 bytes)
undefined8 FUN_005066d8(void)

{
  return 0;
}


// 0x05066e0 (0x24 bytes)
void FUN_005066e0(void)

{
  FUN_0060c448();
  return;
}


// 0x0506704 (0xa4 bytes)
undefined8 FUN_00506704(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<40> local_40;
  undefined4 local_18 [2];
  
  uVar1 = get_default_fs();
  uVar1 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar1,local_40,param_1,1,local_18);
  iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
    *param_2 = local_18[0];
  }
  else {
    uVar1 = 0xfffffffffffffffe;
  }
  return uVar1;
}


// 0x05067a8 (0xac bytes)
undefined8 FUN_005067a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  GPiece<8> local_20;
  
  uVar3 = 1;
  if (param_3 < 1) {
    if (-1 < param_3) {
      uVar3 = 0;
    }
  }
  else if (param_3 == 2) {
    uVar3 = 2;
  }
  uVar1 = get_default_fs();
  iVar2 = FUN_0051cf28(uVar1,0,param_1,param_2,uVar3,local_20);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffffffffffd;
  }
  return uVar3;
}


// 0x0506854 (0xd4 bytes)
undefined8
FUN_00506854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<48> local_50;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = get_default_fs();
  uVar1 = read_req_setup(uVar1,local_50,param_1,param_2,param_3,0xffffffffffffffff);
  iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  if (iVar2 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)param_3;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffc;
  }
  return uVar1;
}


// 0x0506928 (0x88 bytes)
undefined8 FUN_00506928(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<40> local_30;
  
  uVar1 = get_default_fs();
  uVar1 = filehandle_close_setup(uVar1,local_30,param_1);
  iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffb;
  }
  return uVar1;
}


// 0x05069b0 (0x88 bytes)
longlong FUN_005069b0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  do {
    do {
      lVar1 = TBLr;
    } while ((int)lVar1 == 0);
  } while ((int)lVar1 == 0);
  dVar2 = ((double)((ulonglong)(param_1 * 1000000) >> 0x20) * 4294967296.0 +
          (double)(param_1 * 1000000 & 0xffffffff)) * DAT_015af420;
  dVar4 = dVar2 - 9.223372036854776e+18;
  dVar3 = dVar4 - 9.223372036854776e+18;
  if (dVar4 < 0.0) {
    dVar3 = dVar2;
  }
  return lVar1 + (longlong)dVar3;
}


// 0x0506a38 (0x38 bytes)
undefined8 FUN_00506a38(char param_1)

{
  undefined8 uVar1;
  
  if (param_1 < -3) {
    if (param_1 < -7) {
      if (param_1 < -8) goto LAB_00506a68;
    }
    else if (param_1 < -6) goto LAB_00506a68;
    uVar1 = 0x7f;
  }
  else {
LAB_00506a68:
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0506a70 (0x17c bytes)
undefined8 FUN_00506a70(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong in_r8;
  GPiece<40> local_60;
  int local_38 [8];
  
  do {
    do {
      uVar1 = TBLr;
    } while ((int)uVar1 == 0);
  } while ((int)uVar1 == 0);
  uVar1 = get_default_fs();
  iVar2 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar1,local_60,param_1,1,local_38);
  if ((local_38[0] == 0) || (iVar2 == 0)) {
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    uVar1 = 0;
    *(int *)(&DAT_0159bb1c + (int)(in_r8 << 6)) = iVar2;
    *param_2 = local_38[0];
  }
  return uVar1;
}


// 0x0506c10 (0x110 bytes)
undefined8 FUN_00506c10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  GPiece<32> local_40;
  
  iVar2 = (int)(param_3 << 6);
  iVar1 = *(int *)(&DAT_0159bb1c + iVar2);
  dVar6 = DAT_015af420 * 3000000.0 - 9.223372036854776e+18;
  dVar5 = dVar6 - 9.223372036854776e+18;
  if (dVar6 < 0.0) {
    dVar5 = DAT_015af420 * 3000000.0;
  }
  uVar3 = FUN_0051b750((longlong)dVar5);
  iVar4 = _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,local_40,uVar3);
  if (iVar4 < -0x7ffef8fb) {
    if (-0x7ffef8fd < iVar4) {
      return 0;
    }
  }
  else if (iVar4 == 0) {
    *(undefined4 *)(&DAT_0159bb1c + iVar2) = 0;
    if (iVar1 != 0) {
      FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
    }
    return 1;
  }
  return 0xfffffffffffffffe;
}


// 0x0506d20 (0x19c bytes)
undefined8 FUN_00506d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong in_r10;
  int in_stack_00000074;
  GPiece<64> local_70;
  
  do {
    do {
      uVar1 = TBLr;
    } while ((int)uVar1 == 0);
  } while ((int)uVar1 == 0);
  uVar1 = get_default_fs();
  iVar2 = read_req_setup(uVar1,local_70,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    uVar1 = 0xfffffffffffffffc;
  }
  else {
    uVar1 = 0;
    *(int *)(&DAT_0159bb1c + (int)(in_r10 << 6) + in_stack_00000074 * 4) = iVar2;
  }
  return uVar1;
}


// 0x0506ebc (0x88 bytes)
undefined8 FUN_00506ebc(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<40> local_30;
  
  uVar1 = get_default_fs();
  uVar1 = filehandle_close_setup(uVar1,local_30,param_1);
  iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffb;
  }
  return uVar1;
}


// 0x0506f68 (0x11c bytes)
undefined8 FUN_00506f68(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  GPiece<32> local_40;
  
  iVar2 = (int)(param_3 << 6);
  iVar3 = (int)(param_4 << 2);
  dVar7 = DAT_015af420 * 3000000.0 - 9.223372036854776e+18;
  iVar1 = *(int *)(&DAT_0159bb1c + iVar2 + iVar3);
  dVar6 = dVar7 - 9.223372036854776e+18;
  if (dVar7 < 0.0) {
    dVar6 = DAT_015af420 * 3000000.0;
  }
  uVar4 = FUN_0051b750((longlong)dVar6);
  iVar5 = _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,local_40,uVar4);
  if (iVar5 < -0x7ffef8fb) {
    if (-0x7ffef8fd < iVar5) {
      return 0;
    }
  }
  else if (iVar5 == 0) {
    *(undefined4 *)(&DAT_0159bb1c + iVar2 + iVar3) = 0;
    if (iVar1 != 0) {
      FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
    }
    return 1;
  }
  return 0xfffffffffffffffe;
}


// 0x0507084 (0x8 bytes)
undefined8 FUN_00507084(void)

{
  return 0;
}


// 0x050708c (0xa0 bytes)
undefined8 FUN_0050708c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (int)(param_3 << 6);
  iVar3 = 0;
  piVar4 = (int *)(&DAT_0159bb1c + iVar2);
  do {
    if (iVar2 != -0x159bb1c) {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
      }
      *piVar4 = 0;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x10);
  return 0;
}


// 0x050712c (0x14 bytes)
void FUN_0050712c(void)

{
  DAT_0159bb18 = PTR_DAT_008fa624;
  return;
}


// 0x0507148 (0x318 bytes)
void * FUN_00507148(undefined4 *param_1)

{
  byte bVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  void *pvVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  
  iVar18 = param_1[5];
  uVar19 = *(uint *)(iVar18 + 0x38);
  param_1[0x1213] = uVar19;
  if (uVar19 == 0) {
    pvVar28 = (void *)0x0;
    param_1[0x1212] = 0;
  }
  else {
    uVar29 = 0;
    pfVar31 = (float *)(iVar18 + *(int *)(iVar18 + 0x34));
    uVar30 = 0xffffffff;
    param_1[0x1212] = pfVar31;
    if (uVar19 != 0) {
      do {
        bVar1 = *(byte *)((int)param_1 + (int)pfVar31[0x14] + 0x2448);
        *(byte *)(pfVar31 + 0x17) = bVar1;
        pfVar20 = (float *)param_1[bVar1 + 0x1112];
        if (bVar1 != uVar30) {
          pfVar20[8] = (float)pfVar31;
          *(undefined2 *)(pfVar20 + 9) = 0;
          uVar30 = (uint)bVar1;
        }
        fVar2 = pfVar31[1];
        fVar3 = pfVar31[5];
        fVar4 = *pfVar31;
        fVar5 = pfVar31[4];
        fVar6 = pfVar31[9];
        fVar7 = pfVar31[2];
        fVar8 = pfVar31[6];
        fVar9 = pfVar31[8];
        fVar10 = pfVar31[10];
        fVar11 = pfVar20[1];
        fVar12 = *pfVar20;
        fVar13 = pfVar20[2];
        fVar21 = fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2;
        fVar22 = fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3;
        fVar23 = fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6;
        fVar14 = pfVar20[3];
        pfVar31[0x1b] = (float)pfVar20;
        fVar26 = 1.0 / SQRT(fVar21);
        fVar25 = 1.0 / SQRT(fVar22);
        fVar15 = pfVar31[0xc];
        fVar16 = pfVar31[0xd];
        fVar27 = 1.0 / SQRT(fVar23);
        fVar17 = pfVar31[0xe];
        uVar29 = uVar29 + 1;
        fVar26 = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        fVar25 = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        fVar27 = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        *(short *)(pfVar20 + 9) = *(short *)(pfVar20 + 9) + 1;
        fVar24 = SQRT(fVar21);
        if (SQRT(fVar21) - SQRT(fVar22) < 0.0) {
          fVar24 = SQRT(fVar22);
        }
        pfVar31[0x10] = fVar9 * fVar13 + fVar4 * fVar12 + fVar5 * fVar11 + fVar15;
        pfVar31[0x11] = fVar6 * fVar13 + fVar2 * fVar12 + fVar3 * fVar11 + fVar16;
        pfVar31[0x12] = fVar10 * fVar13 + fVar7 * fVar12 + fVar8 * fVar11 + fVar17;
        fVar26 = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        fVar25 = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        fVar27 = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        if (fVar24 - SQRT(fVar23) < 0.0) {
          fVar24 = SQRT(fVar23);
        }
        pfVar31[0x13] = fVar14 * fVar24;
        pfVar31[3] = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        pfVar31[7] = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        pfVar31[0xb] = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        pfVar31 = pfVar31 + 0x1c;
      } while (uVar29 < uVar19);
    }
    pvVar28 = (void *)idol::AllocateMemAlign(*param_1,uVar19 * 0x70,0x10);
    param_1[0x121c] = pvVar28;
    pvVar28 = memcpy(pvVar28,(void *)param_1[0x1212],uVar19 * 0x70);
  }
  return pvVar28;
}


// 0x0507460 (0x188 bytes)
void FUN_00507460(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  memset(param_1 + 0x2448,0,0x2000);
  memset(param_1 + 0x4448,0,0x400);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(iVar7 + 0x30);
  *(int *)(param_1 + 0x2444) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x2440) = 0;
  }
  else {
    uVar8 = 0;
    *(int *)(param_1 + 0x2440) = iVar7 + *(int *)(iVar7 + 0x2c);
    if (iVar6 != 0) {
      iVar6 = 0;
      iVar7 = param_1;
      do {
        iVar3 = *(int *)(param_1 + 0x2440) + iVar6;
        iVar2 = *(int *)(param_1 + 0x14);
        uVar1 = *(ushort *)(iVar3 + 0x30);
        *(int *)(iVar7 + 0x4448) = iVar3;
        *(char *)((uint)uVar1 + param_1 + 0x2448) = (char)uVar8;
        *(short *)(iVar3 + 0x32) = (short)uVar8;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar2;
        cellGcmAddressToOffset(*(int *)(iVar3 + 0x10) + iVar2,iVar3 + 0x10);
        cellGcmAddressToOffset(*(int *)(iVar3 + 0x14) + *(int *)(param_1 + 0x14),iVar3 + 0x14)
        ;
        cellGcmAddressToOffset(*(int *)(iVar3 + 0x18) + *(int *)(param_1 + 0x14),iVar3 + 0x18)
        ;
        piVar5 = *(int **)(iVar3 + 0x1c);
        uVar4 = (uint)*(ushort *)(iVar3 + 0x28);
        if (*(ushort *)(iVar3 + 0x28) != 0) {
          iVar2 = *(int *)(param_1 + 0x1c);
          do {
            uVar4 = uVar4 - 1;
            *piVar5 = *piVar5 * 0x24 + iVar2;
            piVar5 = piVar5 + 4;
          } while (0 < (int)uVar4);
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 0x40;
      } while (uVar8 < *(uint *)(param_1 + 0x2444));
    }
  }
  return;
}


// 0x05075f0 (0x36c bytes)
void * FUN_005075f0(undefined4 *param_1)

{
  byte bVar1;
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
  float fVar14;
  short sVar15;
  uint uVar16;
  float *pfVar17;
  size_t __n;
  float fVar18;
  int iVar19;
  void *pvVar20;
  ulonglong uVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  iVar19 = param_1[5];
  uVar16 = *(uint *)(iVar19 + 0x28);
  uVar21 = (ulonglong)uVar16;
  param_1[0x90f] = uVar16;
  if (uVar16 == 0) {
    pvVar20 = (void *)0x0;
    param_1[0x90e] = 0;
  }
  else {
    uVar25 = 0;
    iVar19 = iVar19 + *(int *)(iVar19 + 0x24);
    uVar24 = 0xffffffff;
    param_1[0x90e] = iVar19;
    if (uVar16 != 0) {
      iVar23 = 0;
      dVar33 = 0.5;
      dVar34 = 1.0;
      do {
        pfVar22 = (float *)(iVar19 + iVar23);
        bVar1 = *(byte *)((int)param_1 + (int)pfVar22[0x14] + 0x38);
        *(byte *)(pfVar22 + 0x17) = bVar1;
        pfVar17 = (float *)param_1[bVar1 + 0x80e];
        if (bVar1 != uVar24) {
          pfVar17[8] = (float)pfVar22;
          *(undefined2 *)(pfVar17 + 9) = 0;
          uVar24 = (uint)bVar1;
        }
        fVar2 = pfVar22[1];
        fVar3 = pfVar22[5];
        fVar4 = *pfVar22;
        fVar5 = pfVar22[4];
        fVar6 = pfVar22[9];
        fVar7 = pfVar22[2];
        fVar8 = pfVar22[6];
        fVar9 = pfVar22[8];
        fVar10 = pfVar22[10];
        fVar11 = pfVar17[1];
        fVar12 = *pfVar17;
        fVar13 = pfVar17[2];
        dVar27 = (double)(fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2);
        dVar28 = (double)(fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3);
        dVar30 = (double)(fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6);
        fVar14 = pfVar17[3];
        dVar26 = 1.0 / SQRT(dVar27);
        dVar32 = 1.0 / SQRT(dVar28);
        dVar31 = 1.0 / SQRT(dVar30);
        sVar15 = *(short *)(pfVar17 + 9);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar34
                                                 ) * (double)(float)(dVar26 * dVar33) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar32) * dVar32 - dVar34
                                                 ) * (double)(float)(dVar32 * dVar33) + dVar32);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar34
                                                 ) * (double)(float)(dVar31 * dVar33) + dVar31);
        fVar18 = (float)SQRT(dVar27);
        if ((float)SQRT(dVar27) - (float)SQRT(dVar28) < 0.0) {
          fVar18 = (float)SQRT(dVar28);
        }
        pfVar22[0x10] = fVar9 * fVar13 + fVar4 * fVar12 + fVar5 * fVar11 + pfVar22[0xc];
        pfVar22[0x11] = fVar6 * fVar13 + fVar2 * fVar12 + fVar3 * fVar11 + pfVar22[0xd];
        pfVar22[0x12] = fVar10 * fVar13 + fVar7 * fVar12 + fVar8 * fVar11 + pfVar22[0xe];
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar29) * dVar29 - dVar34
                                                 ) * (double)(float)(dVar29 * dVar33) + dVar29);
        dVar32 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar26) * dVar26 - dVar34
                                                 ) * (double)(float)(dVar26 * dVar33) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar34
                                                 ) * (double)(float)(dVar31 * dVar33) + dVar31);
        if (fVar18 - (float)SQRT(dVar30) < 0.0) {
          fVar18 = (float)SQRT(dVar30);
        }
        pfVar22[0x13] = fVar14 * fVar18;
        fVar2 = pfVar22[0x18];
        iVar19 = param_1[5];
        pfVar22[0x1b] = (float)pfVar17;
        pfVar22[3] = (float)(-(double)(float)((double)(float)(dVar27 * dVar29) * dVar29 - dVar34) *
                             (double)(float)(dVar29 * dVar33) + dVar29);
        pfVar22[7] = (float)(-(double)(float)((double)(float)(dVar28 * dVar32) * dVar32 - dVar34) *
                             (double)(float)(dVar32 * dVar33) + dVar32);
        *(short *)(pfVar17 + 9) = sVar15 + 1;
        pfVar22[0xb] = (float)(-(double)(float)((double)(float)(dVar30 * dVar26) * dVar26 - dVar34)
                               * (double)(float)(dVar26 * dVar33) + dVar26);
        cellGcmAddressToOffset((int)fVar2 + iVar19,pfVar22 + 0x18);
        uVar25 = uVar25 + 1;
        uVar21 = (ulonglong)(uint)param_1[0x90f];
        iVar23 = iVar23 + 0x70;
        iVar19 = param_1[0x90e];
      } while ((uVar25 & 0xffffffff) < uVar21);
    }
    __n = (int)(uVar21 << 7) - (int)(uVar21 << 4);
    pvVar20 = (void *)idol::AllocateMemAlign(*param_1,__n,0x10);
    param_1[0x121b] = pvVar20;
    pvVar20 = memcpy(pvVar20,(void *)param_1[0x90e],__n);
  }
  return pvVar20;
}


// 0x050795c (0x210 bytes)
void FUN_0050795c(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  memset(param_1 + 0x38,0,0x2000);
  memset(param_1 + 0x2038,0,0x400);
  iVar8 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(iVar8 + 0x20);
  *(int *)(param_1 + 0x34) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar9 = 0;
    *(int *)(param_1 + 0x30) = iVar8 + *(int *)(iVar8 + 0x1c);
    if (iVar7 != 0) {
      iVar7 = 0;
      iVar8 = param_1;
      do {
        iVar6 = *(int *)(param_1 + 0x30) + iVar7;
        iVar3 = *(int *)(param_1 + 0x14);
        uVar2 = *(ushort *)(iVar6 + 0x30);
        *(int *)(iVar8 + 0x2038) = iVar6;
        *(char *)(param_1 + (uint)uVar2 + 0x38) = (char)uVar9;
        *(short *)(iVar6 + 0x32) = (short)uVar9;
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + iVar3;
        cellGcmAddressToOffset(*(int *)(iVar6 + 0x10) + iVar3,iVar6 + 0x10);
        cellGcmAddressToOffset(*(int *)(iVar6 + 0x14) + *(int *)(param_1 + 0x14),iVar6 + 0x14)
        ;
        cellGcmAddressToOffset(*(int *)(iVar6 + 0x18) + *(int *)(param_1 + 0x14),iVar6 + 0x18)
        ;
        piVar5 = *(int **)(iVar6 + 0x1c);
        uVar2 = *(ushort *)(iVar6 + 0x28);
        uVar4 = 0;
        if (uVar2 != 0) {
          iVar3 = *(int *)(param_1 + 0x1c);
          do {
            *piVar5 = iVar3 + *piVar5 * 0x24;
            if (piVar5[1] != -1) {
              piVar5[1] = iVar3 + piVar5[1] * 0x24;
            }
            cVar1 = *(char *)((int)piVar5 + 0x15);
            if (cVar1 == '\0') {
              *(undefined1 *)((int)piVar5 + 0x15) = 0;
              *(undefined1 *)(piVar5 + 5) = 0;
            }
            else if (cVar1 == '\x01') {
              *(undefined1 *)((int)piVar5 + 0x15) = 0;
            }
            else if (cVar1 == '\x02') {
              *(undefined1 *)((int)piVar5 + 0x15) = 2;
            }
            else if (cVar1 == '\x03') {
              if (*(char *)(iVar6 + 0x34) == '\0') {
                return;
              }
              *(undefined1 *)((int)piVar5 + 0x15) = 1;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 6;
          } while (uVar4 < uVar2);
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 0x40;
        iVar8 = iVar8 + 4;
      } while (uVar9 < *(uint *)(param_1 + 0x34));
    }
  }
  return;
}


// 0x0507b6c (0x28c bytes)
void FUN_00507b6c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  iVar3 = param_1[5];
  if (*(int *)(iVar3 + 0x3c) == 0) {
    param_1[10] = 0;
  }
  else {
    piVar6 = (int *)(iVar3 + *(int *)(iVar3 + 0x3c));
    param_1[10] = piVar6;
    uVar10 = 0;
    iVar8 = 0;
    *piVar6 = iVar3 + *piVar6;
    iVar3 = 0;
    puVar9 = param_1;
    do {
      if (*(int *)((int)piVar6 + iVar3 + 0x38) != 0) {
        cellGcmAddressToOffset
                  (*(int *)((int)piVar6 + iVar3 + 0x38) + param_1[5],(int)piVar6 + iVar3 + 0x38);
        piVar6 = (int *)param_1[10];
      }
      iVar7 = *(int *)((int)piVar6 + iVar3 + 0x18);
      if (iVar7 != 0) {
        cellGcmAddressToOffset(iVar7 + param_1[5],(int)piVar6 + iVar3 + 0x18);
        iVar7 = puVar9[0x1217];
        if (iVar7 == 0) {
          uVar2 = FUN_004fe5f4(*param_1,0x10);
          uVar1 = *param_1;
          puVar9[0x1217] = uVar2;
          FUN_004fe6ec(uVar1,0x40000);
          iVar7 = puVar9[0x1217];
        }
        cellGcmAddressToOffset(iVar7,param_1[10] + iVar3 + 0x48);
        piVar6 = (int *)param_1[10];
      }
      if (*(int *)((int)piVar6 + iVar3 + 8) != 0) {
        cellGcmAddressToOffset
                  (*(int *)((int)piVar6 + iVar3 + 8) + param_1[5],(int)piVar6 + iVar3 + 8);
        piVar6 = (int *)param_1[10];
      }
      iVar7 = *(int *)((int)piVar6 + iVar3 + 0x28);
      if (iVar7 != 0) {
        cellGcmAddressToOffset(iVar7 + param_1[5],(int)piVar6 + iVar3 + 0x28);
        piVar6 = (int *)param_1[10];
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar10 < 4);
    uVar10 = 0;
    iVar3 = 0;
    if (*(short *)((int)piVar6 + 6) != 0) {
      do {
        iVar4 = *piVar6 + iVar8;
        iVar7 = *(int *)(iVar4 + 0x14);
        piVar5 = (int *)(*(int *)(iVar4 + 0x10) + param_1[5]);
        iVar3 = iVar3 + iVar7;
        *(int **)(iVar4 + 0x10) = piVar5;
        if (iVar7 != 0) {
          do {
            iVar7 = iVar7 + -1;
            *piVar5 = param_1[7] + *piVar5 * 0x24;
            piVar5 = piVar5 + 4;
          } while (0 < iVar7);
        }
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + 0x30;
      } while (uVar10 < *(ushort *)((int)piVar6 + 6));
    }
    param_1[0xb] = iVar3;
  }
  return;
}


// 0x0507df8 (0x168 bytes)
void FUN_00507df8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  
  iVar1 = param_1[5];
  if (*(int *)(iVar1 + 0x10) != 0) {
    iVar5 = iVar1 + *(int *)(iVar1 + 0x10);
    param_1[0x1214] = iVar5;
    cellGcmAddressToOffset(*(int *)(iVar5 + 0x14) + iVar1,iVar5 + 0x14);
    cellGcmAddressToOffset
              (*(int *)(param_1[0x1214] + 0x18) + param_1[5],param_1[0x1214] + 0x18);
    iVar1 = param_1[0x1214];
    uVar6 = 0;
    if (*(short *)(iVar1 + 6) != 0) {
      iVar5 = param_1[5];
      iVar2 = param_1[7];
      iVar7 = iVar1;
      do {
        uVar9 = 0;
        piVar8 = (int *)(*(int *)(iVar7 + 0x1c) + iVar5);
        *(int **)(iVar7 + 0x1c) = piVar8;
        piVar10 = piVar8;
        if ((short)*piVar8 != 0) {
          do {
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 + 1;
            iVar3 = *piVar8;
            *piVar10 = *piVar10 * 0x24 + iVar2;
          } while (uVar9 < (ushort)iVar3);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar6 < *(ushort *)(iVar1 + 6));
    }
    uVar4 = idol::AllocateMemAlign
                      (*param_1,(((longlong)(0x200 - (ulonglong)*(ushort *)(iVar1 + 8)) >> 0x3f &
                                 (ulonglong)*(ushort *)(iVar1 + 8) - 0x200) + 0x200 & 0x7ffffff) <<
                                5,0x20);
    iVar1 = param_1[0x1214];
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined2 *)(iVar1 + 8) = 0;
  }
  return;
}



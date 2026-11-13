// game/update/moby341.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x34d71c-0x34dce8
#include "game/update/moby341.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x034d71c (0x58 bytes)
void M341_0034d71c(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}


// 0x034d774 (0x58 bytes)
void M341_0034d774(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x034d7cc (0xc8 bytes)
undefined8
M341_0034d7cc
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00486828();
  uVar2 = M849_0048acb8(param_1,param_2,param_3,param_4);
  sVar1 = *(short *)(iVar3 + 0x68);
  if ((int)uVar2 == 0) {
    if (param_2->state == '\t') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\t';
  }
  if (sVar1 == 6) {
    PlayMobySound(1,0,param_2);
  }
  return uVar2;
}


// 0x034d894 (0x38 bytes)
void M341_0034d894(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}


// 0x034d8cc (0x40 bytes)
longlong M341_0034d8cc(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x180;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x034d90c (0x14 bytes)
void M341_0034d90c(void)

{
  DAT_00840064 = 0x10000;
  return;
}


// 0x034d950 (0x1f4 bytes)
double M341_0034d950(int param_1)

{
  int iVar1;
  undefined1 uVar4;
  undefined8 uVar2;
  undefined4 uVar3;
  double dVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (g_standingOnMoby == param_1) {
    fVar9 = Delt(1.0,g_FrameTime * 2.0,(float *)(iVar1 + 0x1c));
    uVar4 = 0;
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_CurrentWeapon == 0x16)) {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0xbc) = uVar4;
  }
  else {
    fVar9 = Delt(0.0,g_FrameTime,(float *)(iVar1 + 0x1c));
  }
  dVar7 = (double)fVar9;
  uVar3 = DAT_00840088;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    dVar5 = (double)FastWrapRot
                              (*(float *)(iVar1 + 0x18),g_FrameTime * 6.2831855);
    *(float *)(iVar1 + 0x18) = (float)dVar5;
    dVar7 = (double)(float)(3.141592502593994 - dVar5);
    if (dVar5 - (double)(float)(3.141592502593994 - dVar5) < 0.0) {
      dVar7 = dVar5;
    }
    dVar6 = (double)(float)(-3.141592502593994 - dVar5);
    if ((double)(float)(-3.141592502593994 - dVar5) - dVar7 < 0.0) {
      dVar6 = dVar7;
    }
    dVar7 = (double)(float)(dVar6 * dVar6);
    dVar5 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
    dVar8 = (double)(float)(dVar7 * dVar5);
    fVar9 = (float)(dVar7 * dVar8) * 2.601887e-06 +
            (float)(dVar8 * -0.0001980741071747616 +
                   (double)(float)(dVar5 * 0.008333025500178337 +
                                  (double)(float)((double)(float)(dVar7 * dVar6) *
                                                  -0.16666656732559204 + dVar6)));
    if (*(char *)(param_1 + 0xbc) == '\x01') {
      uVar2 = FastLerpColor((double)((fVar9 + 1.0) * 0.5),DAT_0084008c,DAT_00840090);
    }
    else {
      uVar2 = FastLerpColor((double)((fVar9 + 1.0) * 0.5),DAT_00840094,DAT_00840098);
    }
    uVar3 = FastLerpColor((double)*(float *)(iVar1 + 0x1c),DAT_00840088,uVar2);
    dVar7 = extraout_f1;
  }
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  return dVar7;
}


// 0x034db44 (0x1a4 bytes)
/* Moby 341 */

void UpdateMoby_341(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  bVar1 = moby->animationId;
  if ((g_standingOnMoby == moby) && (g_heroStateType == 0x13)) {
    bVar3 = true;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar2 = *moby->pVar;
      if ((-1 < iVar2) && (!bVar3 && (g_MobyInstance[iVar2].setByGroup & 1U) != 0)) {
        MB_SetAnimation(moby,1,0,0);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) && (bVar1 != 2)) {
      MB_SetAnimation(moby,2,0,0);
    }
  }
  else if (bVar1 < 3) {
                    /* WARNING: Load size is inaccurate */
    iVar2 = *moby->pVar;
    if (((-1 < iVar2) && (!bVar3 && (g_MobyInstance[iVar2].setByGroup & 2U) != 0)) && (bVar1 != 3)) {
      MB_SetAnimation(moby,3,0,0);
    }
  }
  else if (((bVar1 < 4) && ((moby->field43_0x70 & 2U) != 0)) && (bVar1 != 0)) {
    MB_SetAnimation(moby,0,0,0);
  }
  M341_0034d950(moby);
  return;
}



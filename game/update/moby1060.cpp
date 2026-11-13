// game/update/moby1060.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1abea4-0x1ac250
#include "game/update/moby1060.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x01abea4 (0x14 bytes)
void M1060_001abea4(void)

{
  DAT_00740964 = 0x10000;
  return;
}


// 0x01abec8 (0x104 bytes)
void M1060_001abec8(int param_1)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  MobyInstance *local_20 [2];
  
  fVar1 = 1.2;
  if ((Level == Veldin) || (Level == Veldin2)) {
    fVar1 = 1.0;
  }
  dVar2 = (double)fVar1;
  MB_GetFirstMobyInGroup(local_20,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_20[0] != (MobyInstance *)0x0) {
    uVar3 = 0x3fe0000000000000;
    do {
      if (local_20[0]->enabled != '\0') {
        if (local_20[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) {
          MB_DrawGlowFX
                    (dVar2,uVar3,&local_20[0]->pos,*(undefined4 *)((int)local_20[0]->pVar + 4));
        }
      }
      MB_GetNextMobyInGroup(local_20,local_20[0],'\0','\0');
    } while (local_20[0] != (MobyInstance *)0x0);
  }
  return;
}


// 0x01abfcc (0x68 bytes)
void M1060_001abfcc(MobyInstance *param_1)

{
  int *piVar1;
  
  if (param_1->group != -1) {
    if ((worldUpdateTime != 0) &&
       (piVar1 = *(int **)((int)param_1->pVar + 8), worldUpdateTime != *piVar1)) {
      *piVar1 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1060_001abec8_00708890,param_1);
    }
  }
  return;
}


// 0x01ac058 (0x1f8 bytes)
/* Moby 1060 */

void UpdateMoby_1060(MobyInstance *moby)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == 0) {
    *pfVar1 = *pfVar1 * 0.017453292;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    dVar8 = (double)FastWrapRot
                              (*pfVar1,DAT_00740990 * 0.017453292 * g_FrameTime);
    uVar4 = DAT_0074098c;
    uVar3 = DAT_00740988;
    dVar9 = (double)(float)(3.141592502593994 - dVar8);
    if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
      dVar9 = dVar8;
    }
    dVar10 = (double)(float)(-3.141592502593994 - dVar8);
    if ((double)(float)(-3.141592502593994 - dVar8) - dVar9 < 0.0) {
      dVar10 = dVar9;
    }
    *pfVar1 = (float)dVar8;
    dVar8 = (double)(float)(dVar10 * dVar10);
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
    dVar9 = (double)(float)(dVar8 * dVar11);
    uVar5 = FastLerpColor
                      ((double)(((float)(dVar8 * dVar9) * 2.601887e-06 +
                                (float)(dVar9 * -0.0001980741071747616 +
                                       (double)(float)(dVar11 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar8 * dVar10
                                                                                     ) *
                                                                      -0.16666656732559204 + dVar10)
                                                      ))) * 0.5 + 0.5),uVar3,uVar4);
    lVar6 = 0x38;
    iVar7 = (int)uVar5;
    if ((Level == Veldin) || (Level == Veldin2)) {
      lVar6 = 0x20;
    }
    pfVar1[1] = (float)((uint)(lVar6 << 0x18) | (iVar7 >> 0x10 & 0xffU) << 0x10 |
                       (iVar7 >> 8 & 0xffU) << 8 | (uint)(uVar5 & 0xff));
    if (((moby->group != -1) && (worldUpdateTime != 0)) &&
       (piVar2 = *(int **)((int)moby->pVar + 8), worldUpdateTime != *piVar2)) {
      *piVar2 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1060_001abec8_00708890,moby);
    }
    SetColorOfMoby
              (moby,uVar5 & 0xff,(ulonglong)(uint)(iVar7 >> 0x10) & 0xff,
               (ulonglong)(uint)(iVar7 >> 0x18) & 0xff);
  }
  return;
}



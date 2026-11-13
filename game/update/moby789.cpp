// game/update/moby789.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x45de60-0x45e138
#include "game/update/moby789.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x045de60 (0x14 bytes)
void M789_0045de60(void)

{
  DAT_00873c1c = 0x10000;
  return;
}


// 0x045de78 (0x4 bytes)
/* Moby 789 */

MobyInstance * UpdateMoby_789(MobyInstance *moby)

{
  return moby;
}


// 0x045de88 (0x108 bytes)
void M789_0045de88(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3fdcccccc0000000;
    uVar5 = 0x3fd99999a0000000;
    do {
      if ((local_40[0]->enabled != '\0') &&
         (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x330,*(undefined4 *)((int)pvVar1 + 0x360));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 3);
      }
      MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}


// 0x045dfb0 (0x188 bytes)
void M79_0045dfb0(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_1->group != -1) && (param_1->enabled != '\0')) {
    pvVar1 = param_1->pVar;
    iVar3 = 0;
    do {
      GetBonePosition(param_1,iVar3,(int)pvVar1 + iVar3 * 0x10 + 0x330);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    dVar4 = (double)FastWrapRot
                              (*(float *)((int)pvVar1 + 0x368),g_FrameTime * 1.9198622);
    dVar5 = (double)(float)(3.141592502593994 - dVar4);
    if (dVar4 - (double)(float)(3.141592502593994 - dVar4) < 0.0) {
      dVar5 = dVar4;
    }
    dVar6 = (double)(float)(-3.141592502593994 - dVar4);
    if ((double)(float)(-3.141592502593994 - dVar4) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    *(float *)((int)pvVar1 + 0x368) = (float)dVar4;
    dVar4 = (double)(float)(dVar6 * dVar6);
    dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
    dVar5 = (double)(float)(dVar4 * dVar7);
    uVar2 = FastLerpColor
                      ((double)(((float)(dVar4 * dVar5) * 2.601887e-06 +
                                (float)(dVar5 * -0.0001980741071747616 +
                                       (double)(float)(dVar7 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar4 * dVar6)
                                                                      * -0.16666656732559204 + dVar6
                                                                     )))) * 0.5 + 0.5),0x1e1eb4,
                       0x1eb41e);
    param_1->glowRgba = uVar2;
    *(uint *)((int)pvVar1 + 0x360) =
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0x364))) {
      **(int **)((int)pvVar1 + 0x364) = worldUpdateTime;
      RegisterMobyDraw(&PTR_M789_0045de88_0070ea20,param_1);
    }
  }
  return;
}



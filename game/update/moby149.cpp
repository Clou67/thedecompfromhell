// game/update/moby149.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x28cf20-0x28d1e0
// shared update function UpdateMoby_a_lot_21; registered for oClasses 149, 348, 349, 350, 354, 355, 356, 357, 358, 359, 363, 364, 365, 369, 370, 371
#include "game/update/moby149.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1488.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 149, 348, 349, 350, 354, 355, 356, 357, 358, 359, 363, 364, 365, 369, 370, 371
// 0x028cf20 (0x2c0 bytes)
// strings: 007ab1d0: '?fff' (raw)

/* Moby 149
   Moby 348
   Moby 349
   Moby 350
   Moby 354
   Moby 355
   Moby 356
   Moby 357
   Moby 358
   Moby 359
   Moby 363
   Moby 364
   Moby 365
   Moby 369
   Moby 370
   Moby 371 */

void UpdateMoby_149(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  pvVar5 = moby->pVar;
  *(float *)((int)pvVar5 + 0x18) = -(DAT_0071f418 * 20.0 - *(float *)((int)pvVar5 + 0x18));
  fVar3 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x18);
  dVar7 = (double)FastWrapRot(fVar3,*(float *)((int)pvVar5 + 0x20));
  (moby->rotation).x = (float)dVar7;
  dVar7 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar5 + 0x24));
  (moby->rotation).y = (float)dVar7;
  dVar7 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar5 + 0x28));
  bVar2 = moby->state;
  (moby->rotation).z = (float)dVar7;
  iVar6 = DAT_007ab1d4;
  if (bVar2 == 0) {
    if (*(float *)((int)pvVar5 + 4) - 3.0 <= (moby->pos).z) {
      iVar6 = FastDecTimerS16((int)pvVar5 + 0xe);
      if ((((iVar6 != 0) && (*(short *)((int)pvVar5 + 0xc) != 0)) &&
          (iVar6 = CollSphere
                             ((double)*(float *)((int)pvVar5 + 8),(longlong)(int)moby + 0x10),
          iVar6 != 0)) &&
         (*(float *)((int)pvVar5 + 0x18) * g_CollOutput.normal.z +
          *(float *)((int)pvVar5 + 0x10) * g_CollOutput.normal.x +
          *(float *)((int)pvVar5 + 0x14) * g_CollOutput.normal.y < 0.0)) {
        (moby->pos).x = g_CollOutput.push.x;
        sVar4 = *(short *)((int)pvVar5 + 0xc);
        (moby->pos).y = g_CollOutput.push.y;
        (moby->pos).z = g_CollOutput.push.z;
        fVar3 = g_CollOutput.push.w;
        *(short *)((int)pvVar5 + 0xc) = sVar4 + -1;
        (moby->pos).w = fVar3;
        FastVecReflect((int)pvVar5 + 0x10,(int)pvVar5 + 0x10,0xa10980);
        *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        *(float *)((int)pvVar5 + 0x10) = *(float *)((int)pvVar5 + 0x10) * 0.75;
        *(float *)((int)pvVar5 + 0x14) = *(float *)((int)pvVar5 + 0x14) * 0.75;
        *(float *)((int)pvVar5 + 0x18) = *(float *)((int)pvVar5 + 0x18) * 0.75;
        dVar7 = (double)MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
        dVar8 = 0.01745329238474369;
        *(float *)((int)pvVar5 + 0x24) =
             (float)(dVar7 * 0.01745329238474369) * g_FrameTime;
        dVar7 = (double)MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
        *(float *)((int)pvVar5 + 0x28) = (float)(dVar7 * dVar8) * g_FrameTime;
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar2 < 2) {
    bVar1 = (int)(uint)(byte)moby->alpha < DAT_007ab1d4;
    moby->scale = moby->scale * DAT_007ab1d0;
    if (bVar1) {
      DeleteMoby(moby);
    }
    else {
      moby->alpha = moby->alpha - (char)iVar6;
    }
  }
  return;
}



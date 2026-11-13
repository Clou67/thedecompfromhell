// game/update/moby823.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x478ba0-0x478e2c
#include "game/update/moby823.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0478ba0 (0x14 bytes)
void M823_00478ba0(void)

{
  DAT_00877a0c = 0x10000;
  return;
}


// 0x0478be0 (0x24c bytes)
/* Moby 823 */

void UpdateMoby_823(MobyInstance *moby)

{
  void *manipulator;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  manipulator = moby->pVar;
  dVar11 = 0.5235987901687622;
  if (moby->state == 0) {
    *(f32 *)((int)manipulator + 0x40) = (moby->rotation).z;
    dVar1 = (double)MB_randRot();
    *(float *)((int)manipulator + 0x48) = (float)dVar1;
    dVar1 = (double)MB_randRot();
    *(float *)((int)manipulator + 0x44) = (float)dVar1;
    dVar11 = (double)MB_randRangeSigned
                               ((double)(float)((double)g_FrameTime * 0.4712388813495636),
                                (double)(float)((double)g_FrameTime * dVar11));
    *(float *)((int)manipulator + 0x50) = (float)dVar11;
    dVar11 = (double)MB_randRangeSigned
                               ((double)(g_FrameTime * 0.20943952),
                                (double)(g_FrameTime * 0.2617994));
    *(float *)((int)manipulator + 0x4c) = (float)dVar11;
    SetColorOfMoby(moby,0x80,0x80,0x80);
    AttachManipulator(moby,0,manipulator);
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterMobyDraw(&PTR_M825_00478e68_0070edb0,moby);
    dVar2 = (double)FastWrapRot
                              (*(float *)((int)manipulator + 0x44),
                               *(float *)((int)manipulator + 0x4c));
    dVar10 = 3.141592502593994;
    dVar9 = -3.141592502593994;
    dVar8 = -0.16666656732559204;
    dVar7 = 0.008333025500178337;
    dVar6 = -0.0001980741071747616;
    dVar5 = 2.601886990305502e-06;
    dVar1 = (double)(float)(3.141592502593994 - dVar2);
    if (dVar2 - (double)(float)(3.141592502593994 - dVar2) < 0.0) {
      dVar1 = dVar2;
    }
    dVar3 = (double)(float)(-3.141592502593994 - dVar2);
    if ((double)(float)(-3.141592502593994 - dVar2) - dVar1 < 0.0) {
      dVar3 = dVar1;
    }
    *(float *)((int)manipulator + 0x44) = (float)dVar2;
    dVar2 = (double)(float)(dVar3 * dVar3);
    dVar4 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar3));
    dVar1 = (double)(float)(dVar2 * dVar4);
    dVar1 = (double)FastWrapRot
                              (*(float *)((int)manipulator + 0x40),
                               (float)((double)((float)(dVar2 * dVar1) * 2.601887e-06 +
                                               (float)(dVar1 * -0.0001980741071747616 +
                                                      (double)(float)(dVar4 * 0.008333025500178337 +
                                                                     (double)(float)((double)(float)
                                                  (dVar2 * dVar3) * -0.16666656732559204 + dVar3))))
                                      * dVar11));
    (moby->rotation).z = (float)dVar1;
    dVar2 = (double)FastWrapRot
                              (*(float *)((int)manipulator + 0x48),
                               *(float *)((int)manipulator + 0x50));
    *(float *)((int)manipulator + 0x48) = (float)dVar2;
    dVar1 = (double)(float)(dVar10 - dVar2);
    if (dVar2 - (double)(float)(dVar10 - dVar2) < 0.0) {
      dVar1 = dVar2;
    }
    dVar10 = (double)(float)(dVar9 - dVar2);
    if ((double)(float)(dVar9 - dVar2) - dVar1 < 0.0) {
      dVar10 = dVar1;
    }
    dVar2 = (double)(float)(dVar10 * dVar10);
    dVar1 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar10));
    dVar9 = (double)(float)(dVar2 * dVar1);
    FastQuaternionToEuler
              ((double)(float)((double)(float)((double)(float)(dVar2 * dVar9) * dVar5 +
                                              (double)(float)(dVar9 * dVar6 +
                                                             (double)(float)(dVar1 * dVar7 +
                                                                            (double)(float)((double)
                                                  (float)(dVar2 * dVar10) * dVar8 + dVar10)))) *
                               dVar11 + dVar11),(int)manipulator + 0x10,1);
  }
  return;
}



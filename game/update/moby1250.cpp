// game/update/moby1250.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2283e8-0x2285dc
#include "game/update/moby1250.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02283e8 (0x1f4 bytes)
/* Moby 1250 */

void UpdateMoby_1250(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pvVar2 = moby->pVar;
  if (pvVar2 != (void *)0x0) {
    if (moby->state == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x48) = 0;
      *(undefined4 *)((int)pvVar2 + 0x44) = 0;
      *(undefined4 *)((int)pvVar2 + 0x40) = 0;
      *(uint *)((int)pvVar2 + 0x9c) = *(uint *)((int)pvVar2 + 0x9c) | 4;
      moby->state = '\x03';
    }
    else if (moby->state == '\x03') {
      moby->unk58 = 1.388889;
      dVar15 = 1.5707963705062866;
      dVar6 = (double)FastWrapRot((moby->rotation).z,1.5707964);
      dVar14 = 3.141592502593994;
      fVar1 = (float)(dVar6 + 1.570796251296997);
      dVar13 = -3.141592502593994;
      dVar12 = -0.16666656732559204;
      dVar11 = 0.008333025500178337;
      dVar10 = -0.0001980741071747616;
      dVar9 = 2.601886990305502e-06;
      dVar6 = 2.5;
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = fVar4 * fVar4;
      fVar1 = fVar5 * fVar5 * fVar4;
      fVar3 = fVar5 * fVar1;
      *(float *)((int)pvVar2 + 0x40) =
           g_FrameTime * 2.5 *
           (fVar5 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
      dVar7 = (double)FastWrapRot((moby->rotation).z,(float)dVar15);
      dVar15 = (double)(float)(dVar14 - dVar7);
      if (dVar7 - (double)(float)(dVar14 - dVar7) < 0.0) {
        dVar15 = dVar7;
      }
      dVar8 = (double)g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x48) = 0;
      dVar14 = (double)(float)(dVar13 - dVar7);
      if ((double)(float)(dVar13 - dVar7) - dVar15 < 0.0) {
        dVar14 = dVar15;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      dVar7 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar15 = (double)(float)(dVar13 * dVar7);
      *(float *)((int)pvVar2 + 0x44) =
           (float)(dVar8 * dVar6) *
           (float)((double)(float)(dVar13 * dVar15) * dVar9 +
                  (double)(float)(dVar15 * dVar10 +
                                 (double)(float)(dVar7 * dVar11 +
                                                (double)(float)((double)(float)(dVar13 * dVar14) *
                                                                dVar12 + dVar14))));
    }
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x60),(Vec4 *)((int)pvVar2 + 0x40),
               (longlong)(int)moby + 0x40,(longlong)(int)moby + 0x40);
  }
  return;
}



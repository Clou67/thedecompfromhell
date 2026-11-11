// game/update/moby98.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4c8098-0x4c82d0
#include <stdio.h>
#include "game/update/moby98.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x04c8098 (0x238 bytes)
// strings: 00658d7c: 'Grindrail Blocker Moby (Moby #98) has no cuboid.\n'

/* Moby 98 */

void UpdateMoby_98(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    if (*piVar3 == -1) {
      printf("Grindrail Blocker Moby (Moby #98) has no cuboid.\n");
      DeleteMoby(moby);
    }
    else {
      piVar3[4] = (int)(moby->pos).x;
      piVar3[5] = (int)(moby->pos).y;
      piVar3[6] = (int)(moby->pos).z;
      piVar3[7] = (int)(moby->pos).w;
      piVar3[7] = (int)(moby->rotation).z;
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    fVar1 = 1.0;
    if (moby->setByGroup == '\0') {
      fVar1 = 0.0;
    }
    if ((float)piVar3[1] != fVar1) {
      OrganicDelt
                (fVar1,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 4.0,
                 (float *)(piVar3 + 1),0x720000,(float *)(piVar3 + 2));
      iVar4 = *piVar3;
      fVar1 = (float)piVar3[1];
      dVar11 = 1.25;
      dVar10 = (double)(fVar1 * (Cuboids[iVar4].pos.x - (float)piVar3[4]) + (float)piVar3[4]);
      dVar9 = (double)(fVar1 * (Cuboids[iVar4].pos.y - (float)piVar3[5]) + (float)piVar3[5]);
      dVar8 = (double)(fVar1 * (Cuboids[iVar4].pos.z - (float)piVar3[6]) + (float)piVar3[6] + 1.25);
      dVar5 = (double)FastDiffRots((double)Cuboids[iVar4].rot.z,(double)(float)piVar3[7]);
      dVar5 = (double)FastWrapRot
                                ((float)(dVar5 * (double)(float)piVar3[1]),(float)piVar3[7]);
      (moby->rotation).z = (float)dVar5;
      dVar5 = (double)FastAddRots((float)piVar3[1] * 6.2831855);
      (moby->rotation).x = (float)dVar5;
      FastEulerToMtx((longlong)(int)moby + 0xc0,(longlong)(int)moby + 0x40);
      fVar1 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.z;
      dVar5 = (double)(moby->pos).x;
      dVar6 = (double)(moby->pos).y;
      dVar7 = (double)(moby->pos).z;
      (moby->pos).x =
           (float)(dVar5 + (double)(float)(dVar10 - (double)(float)((double)(moby->transform).v2.x *
                                                                    dVar11 + dVar5)));
      (moby->pos).y =
           (float)(dVar6 + (double)(float)(dVar9 - (double)(float)((double)fVar1 * dVar11 + dVar6)))
      ;
      (moby->pos).z =
           (float)(dVar7 + (double)(float)(dVar8 - (double)(float)((double)fVar2 * dVar11 + dVar7)))
      ;
    }
  }
  return;
}



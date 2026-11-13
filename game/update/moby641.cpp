// game/update/moby641.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3fece0-0x3feddc
#include "game/update/moby641.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03fece0 (0xfc bytes)
/* Moby 641 */

void UpdateMoby_641(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    piVar1[1] = (int)(moby->rotation).x;
    piVar1[2] = (int)((float)piVar1[2] * 0.017453292);
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (iVar2 = *piVar1, iVar2 != -1)) &&
          (g_MobyInstance[iVar2].oClass == BOLT_CRANK)) {
    pfVar3 = (float *)g_MobyInstance[iVar2].pVar;
    g_MobyInstance[iVar2].updateDistance = -1;
    dVar5 = (double)(float)piVar1[1];
    dVar4 = (double)FastWrapRot((float)piVar1[2],(float)-dVar5);
    dVar4 = (double)FastAddRots((float)(dVar4 * (double)*pfVar3));
    dVar4 = (double)FastWrapRot((float)dVar5,(float)dVar4);
    (moby->rotation).x = (float)dVar4;
  }
  return;
}



// game/update/moby937.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4c29c0-0x4c2b00
#include "game/update/moby937.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04c29c0 (0x14 bytes)
void M937_004c29c0(void)

{
  DAT_008f4bc8 = 0x10000;
  return;
}


// 0x04c29e0 (0x120 bytes)
/* Moby 937 */

void UpdateMoby_937(MobyInstance *moby)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *moby->pVar;
  if (iVar1 != -1) {
    if (iVar1 != -1) {
      if (g_MobyInstance[iVar1].state == '\x02') {
        if (*(int *)((int)g_MobyInstance[iVar1].pVar + 0x10) == 0) {
          fVar2 = DAT_008f4bec * 0.017453292 * g_FrameTime;
        }
        else {
          fVar2 = -(DAT_008f4bec * 0.017453292 * g_FrameTime);
        }
        dVar3 = (double)FastWrapRot((moby->rotation).z,fVar2);
        (moby->rotation).z = (float)dVar3;
      }
      else if (g_MobyInstance[iVar1].state == '\x04') {
        if (*(int *)((int)g_MobyInstance[iVar1].pVar + 0x10) == 0) {
          fVar2 = -(DAT_008f4bec * 0.017453292 * g_FrameTime);
        }
        else {
          fVar2 = DAT_008f4bec * 0.017453292 * g_FrameTime;
        }
        dVar3 = (double)FastWrapRot((moby->rotation).z,fVar2);
        (moby->rotation).z = (float)dVar3;
      }
    }
  }
  return;
}



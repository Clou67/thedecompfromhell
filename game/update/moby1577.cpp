// game/update/moby1577.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x29ff4c-0x2a0094
#include "game/update/moby1577.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x029ff4c (0x148 bytes)
/* Moby 1577 */

void UpdateMoby_1577(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pMVar2 = g_MobyInstance;
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    iVar6 = 0;
    moby->state = '\x01';
    pMVar2 = g_MobyInstance;
    piVar4 = piVar1;
    do {
      iVar5 = -1;
      pMVar3 = pMVar2 + piVar4[4];
      if (pMVar3 != (MobyInstance *)0x0) {
        if (pMVar3->state != 0xfd && pMVar3->state != 0xfe) {
          iVar5 = (int)(short)pMVar3->oClass;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4[0xc] = iVar5;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (*piVar1 == 0) {
      moby->state = '\x02';
    }
  }
  else if (moby->state == '\x01') {
    iVar6 = 0;
    iVar5 = 0;
    piVar4 = piVar1;
    do {
      if ((((piVar4[4] == -1) || (piVar4[0xc] == -1)) ||
          (pMVar3 = pMVar2 + piVar4[4], pMVar3 == (MobyInstance *)0x0)) ||
         (((int)(short)pMVar3->oClass != piVar4[0xc] ||
          (pMVar3->state == 0xfd || pMVar3->state == 0xfe)))) {
        piVar4[0xc] = -1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (iVar5 < *piVar1) {
      DeleteMoby(moby);
    }
  }
  return;
}



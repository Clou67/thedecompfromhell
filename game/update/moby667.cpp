// game/update/moby667.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x409e18-0x40a074
#include <stdio.h>
#include "game/update/moby667.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0409e18 (0x14 bytes)
void M667_00409e18(void)

{
  DAT_00854e2c = 0x10000;
  return;
}


// 0x0409e30 (0x244 bytes)
// strings: 00656fac: 'Moby %d(%d) has no check moby! Deleting!\n'

/* Moby 667 */

void UpdateMoby_667(MobyInstance *moby)

{
  char cVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  int *piVar5;
  int iVar6;
  
  pMVar3 = g_MobyInstance;
  pMVar4 = (MobyInstance *)0x0;
  iVar6 = 0;
  piVar2 = (int *)moby->pVar;
  cVar1 = *(char *)(piVar2 + 7);
  if (*piVar2 != -1) {
    pMVar4 = g_MobyInstance + *piVar2;
  }
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (pMVar4 == (MobyInstance *)0x0) {
        printf("Moby %d(%d) has no check moby! Deleting!\n",moby->uid,moby->oClass);
        DeleteMoby(moby);
      }
      else {
        *(byte *)(piVar2 + 7) =
             ((byte)(ZERO_MASK((uint)*(byte *)((int)piVar2 + 0x1d))) & 1) + 1;
      }
    }
  }
  else {
    piVar5 = piVar2;
    if (cVar1 < '\x02') {
      do {
        if ((uint)pMVar4->state == (int)*(char *)((int)piVar5 + 10)) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            if (*(u8 *)((int)piVar2 + 0x15) != 0xff) {
              g_MobyInstance[iVar6].state = *(u8 *)((int)piVar2 + 0x15);
            }
            if (*(char *)((int)piVar2 + 0x17) != -1) {
              pMVar3[iVar6].setByGroup = *(char *)((int)piVar2 + 0x17);
            }
          }
          if (*(u8 *)((int)piVar2 + 0x19) != 0xff) {
            moby->state = *(u8 *)((int)piVar2 + 0x19);
          }
          if (*(char *)((int)piVar2 + 0x1b) != -1) {
            moby->setByGroup = *(char *)((int)piVar2 + 0x1b);
          }
          *(undefined1 *)(piVar2 + 7) = 2;
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar6 < 6);
    }
    else if (cVar1 < '\x03') {
      do {
        if ((uint)pMVar4->state == (int)*(char *)(piVar5 + 1)) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            if (*(u8 *)(piVar2 + 5) != 0xff) {
              g_MobyInstance[iVar6].state = *(u8 *)(piVar2 + 5);
            }
            if (*(char *)((int)piVar2 + 0x16) != -1) {
              pMVar3[iVar6].setByGroup = *(char *)((int)piVar2 + 0x16);
            }
          }
          if (*(u8 *)(piVar2 + 6) != 0xff) {
            moby->state = *(u8 *)(piVar2 + 6);
          }
          if (*(char *)((int)piVar2 + 0x1a) != -1) {
            moby->setByGroup = *(char *)((int)piVar2 + 0x1a);
          }
          *(undefined1 *)(piVar2 + 7) = 1;
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar6 < 6);
    }
  }
  return;
}



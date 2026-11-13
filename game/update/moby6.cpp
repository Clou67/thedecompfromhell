// game/update/moby6.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3d5588-0x3d5a48
#include <stdio.h>
#include "game/update/moby6.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03d5588 (0x4c0 bytes)
// strings: 00656bc4: 'No trigger for moby 6 instance %d. Deleting\n'

/* Moby 6 */

void UpdateMoby_6(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  if (*piVar1 == -1) {
    printf("No trigger for moby 6 instance %d. Deleting\n",moby->uid);
    DeleteMoby(moby);
  }
  else {
    iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
    if (iVar3 == 0) {
      if (*(char *)(piVar1 + 0xe) == '\x01') {
        if (piVar1[1] != -1) {
          pMVar2 = g_MobyInstance + piVar1[1];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)(piVar1 + 10) != 0xff)) {
            pMVar2->state = *(u8 *)(piVar1 + 10);
          }
        }
        if ((piVar1[5] != -1) && (*(char *)(piVar1 + 0xc) != -1)) {
          MB_SetStateByGroup(piVar1[5]);
        }
        if (piVar1[2] != -1) {
          pMVar2 = g_MobyInstance + piVar1[2];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x29) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x29);
          }
        }
        if ((piVar1[6] != -1) && (*(char *)((int)piVar1 + 0x31) != -1)) {
          MB_SetStateByGroup(piVar1[6]);
        }
        if (piVar1[3] != -1) {
          pMVar2 = g_MobyInstance + piVar1[3];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x2a) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x2a);
          }
        }
        if ((piVar1[7] != -1) && (*(char *)((int)piVar1 + 0x32) != -1)) {
          MB_SetStateByGroup(piVar1[7]);
        }
        if (piVar1[4] != -1) {
          pMVar2 = g_MobyInstance + piVar1[4];
          if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe))
             && (*(u8 *)((int)piVar1 + 0x2b) != 0xff)) {
            pMVar2->state = *(u8 *)((int)piVar1 + 0x2b);
          }
        }
        if ((piVar1[8] != -1) && (*(char *)((int)piVar1 + 0x33) != -1)) {
          MB_SetStateByGroup(piVar1[8]);
        }
        if (*(u8 *)((int)piVar1 + 0x35) != 0xff) {
          moby->state = *(u8 *)((int)piVar1 + 0x35);
        }
        if (*(char *)((int)piVar1 + 0x37) != -1) {
          moby->setByGroup = *(char *)((int)piVar1 + 0x37);
        }
        *(undefined1 *)(piVar1 + 0xe) = 0;
      }
    }
    else if (*(char *)(piVar1 + 0xe) == '\0') {
      if (piVar1[1] != -1) {
        pMVar2 = g_MobyInstance + piVar1[1];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)(piVar1 + 9) != 0xff)) {
          pMVar2->state = *(u8 *)(piVar1 + 9);
        }
      }
      if ((piVar1[5] != -1) && (*(char *)(piVar1 + 0xb) != -1)) {
        MB_SetStateByGroup(piVar1[5]);
      }
      if (piVar1[2] != -1) {
        pMVar2 = g_MobyInstance + piVar1[2];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x25) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x25);
        }
      }
      if ((piVar1[6] != -1) && (*(char *)((int)piVar1 + 0x2d) != -1)) {
        MB_SetStateByGroup(piVar1[6]);
      }
      if (piVar1[3] != -1) {
        pMVar2 = g_MobyInstance + piVar1[3];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x26) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x26);
        }
      }
      if ((piVar1[7] != -1) && (*(char *)((int)piVar1 + 0x2e) != -1)) {
        MB_SetStateByGroup(piVar1[7]);
      }
      if (piVar1[4] != -1) {
        pMVar2 = g_MobyInstance + piVar1[4];
        if (((pMVar2 != (MobyInstance *)0x0) && (pMVar2->state != 0xfd && pMVar2->state != 0xfe)) &&
           (*(u8 *)((int)piVar1 + 0x27) != 0xff)) {
          pMVar2->state = *(u8 *)((int)piVar1 + 0x27);
        }
      }
      if ((piVar1[8] != -1) && (*(char *)((int)piVar1 + 0x2f) != -1)) {
        MB_SetStateByGroup(piVar1[8]);
      }
      if (*(u8 *)(piVar1 + 0xd) != 0xff) {
        moby->state = *(u8 *)(piVar1 + 0xd);
      }
      if (*(char *)((int)piVar1 + 0x36) != -1) {
        moby->setByGroup = *(char *)((int)piVar1 + 0x36);
      }
      *(undefined1 *)(piVar1 + 0xe) = 1;
    }
  }
  return;
}



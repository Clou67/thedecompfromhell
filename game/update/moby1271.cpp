// game/update/moby1271.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2373b0-0x237634
#include "game/update/moby1271.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby849.h"

// 0x02373b0 (0x14 bytes)
void M1271_002373b0(void)

{
  DAT_0078daec = 0x10000;
  return;
}


// 0x02373c8 (0xf8 bytes)
int M1271_002373c8(longlong param_1,uint param_2)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 == (ushort *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    pMVar2 = g_MobyInstance;
    do {
      uVar1 = *puVar5;
      if (((pMVar2[uVar1 & 0x7fff].state < 0x80) &&
          ((iVar3 = FUN_00486828(pMVar2 + (uVar1 & 0x7fff)), pMVar2 = g_MobyInstance, iVar3 == 0 ||
           (*(short *)(iVar3 + 0x68) < 4)))) &&
         ((param_2 == 0xffffffff || (g_MobyInstance[uVar1 & 0x7fff].state != param_2)))) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return iVar4;
}


// 0x02374c0 (0x174 bytes)
/* Moby 1271 */

void UpdateMoby_1271(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  
  iVar4 = 0;
  piVar2 = (int *)moby->pVar;
  piVar7 = piVar2;
  do {
    if (*piVar7 != -1) {
      puVar6 = (ushort *)(&g_MobyGroups)[*piVar7];
      if (puVar6 != (ushort *)0x0) {
        iVar5 = 0;
        do {
          if ((g_MobyInstance[*puVar6 & 0x7fff].state < 0x80) &&
             ((iVar3 = FUN_00486828(), iVar3 == 0 || (*(short *)(iVar3 + 0x68) < 4)))) {
            iVar5 = iVar5 + 1;
          }
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (-1 < (short)uVar1);
        if (iVar5 != 0) {
          return;
        }
      }
      piVar7 = piVar7 + 1;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      if (((DAT_0096b2d0 == 0) || (g_heroState != TURRET_PLANE_UI)) &&
         ((piVar2[10] == -1 ||
          (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[10]), iVar4 != 0))))
      {
        if (piVar2[8] != -1) {
          moby->state = (u8)piVar2[8];
        }
        if (piVar2[9] != -1) {
          moby->setByGroup = (char)piVar2[9];
        }
      }
      return;
    }
  } while( true );
}



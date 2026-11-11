// game/update/moby1413.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x271064-0x2712b8
#include "game/update/moby1413.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0271064 (0x14 bytes)
void M1413_00271064(void)

{
  DAT_007a211c = 0x10000;
  return;
}


// 0x0271078 (0x240 bytes)
// strings: 00a1000c: 'None'

/* Moby 1413 */

ulonglong UpdateMoby_1413(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  if (CHAR_ARRAY_00a1000c.piece<24,2>() == 0) {
    Help_QueueMessage(STR_WELCOME_TO_THE_GADGETRON_0x0003,3);
  }
  if ((CHAR_ARRAY_00a1000c.piece<928,2>() == 0) &&
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[4]), iVar4 != 0)) {
    Help_QueueMessage(STR_YOU_CAN_INTERRUPT_HELPDESK_0x4E2A,0x74);
  }
  if (((CHAR_ARRAY_00a1000c.piece<72,2>() == 0) &&
      (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar6), iVar4 != 0)) &&
     (CHAR_ARRAY_00a0feec.piece<8,2>() == 0)) {
    Help_QueueMessage(STR_GADGETRONS_OMNIWRENCH_8000_INCLUDES_0x0005,9);
  }
  if (((CHAR_ARRAY_00a1000c.piece<64,2>() == 0) && (CHAR_ARRAY_00a0feec.piece<0,2>() == 0)) &&
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[1]), iVar4 != 0)) {
    Help_QueueMessage(STR_TO_PERFORM_A_POWERFUL_0x0004,8);
  }
  if ((CHAR_ARRAY_00a1000c.piece<0,2>() == 0) &&
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[2]), iVar4 != 0)) {
    Help_QueueMessage(STR_TO_USE_YOUR_BOMB_0x0000,0);
  }
  uVar3 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c.piece<8,2>();
  if ((CHAR_ARRAY_00a1000c.piece<8,2>() == 0) &&
     (uVar3 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c.piece<16,2>(), CHAR_ARRAY_00a1000c.piece<16,2>() == 0)) {
    iVar4 = 0;
    do {
      uVar2 = piVar6[5];
      uVar3 = (ulonglong)uVar2;
      if (uVar2 != 0xffffffff) {
        if (g_MobyInstance + uVar2 != (MobyInstance *)0x0) {
          bVar1 = g_MobyInstance[uVar2].state;
          uVar3 = (ulonglong)bVar1;
          if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) goto LAB_0027128c;
        }
        if (g_heroHealth < 4) {
          iVar5 = Help_QueueMessage(STR_YOU_JUST_PICKED_UP_0x0001,1);
          uVar3 = (ulonglong)iVar5;
        }
        else {
          iVar5 = Help_QueueMessage(STR_THATS_NANOTECH_WHENEVER_YOU_0x0002,2);
          uVar3 = (ulonglong)iVar5;
        }
      }
LAB_0027128c:
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < 4);
  }
  return uVar3;
}



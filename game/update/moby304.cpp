// game/update/moby304.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x339b58-0x339dc8
// shared update function UpdateMoby_a_lot_15; registered for oClasses 304, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465
#include "game/update/moby304.h"
#include "game/freeze.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/vendor.h"
#include "idol/mUnk.h"

// 0x0339b58 (0x14 bytes)
void M1463_00339b58(void)

{
  DAT_00811c8c = 0x10000;
  return;
}


// shared update function, registered for oClasses 304, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465
// 0x0339b70 (0x244 bytes)
/* Moby 304
   Moby 1456
   Moby 1457
   Moby 1458
   Moby 1459
   Moby 1460
   Moby 1461
   Moby 1462
   Moby 1463
   Moby 1464
   Moby 1465 */

void UpdateMoby_304(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = moby->pVar;
  uVar1 = moby->state;
  if ((((pvVar2 == (void *)0x0) || (*(uint *)((int)pvVar2 + 0x40) == 0xffffffff)) ||
      ((*(uint *)((int)pvVar2 + 0x40) & 1) != 0)) || (g_ChallengeMode != 0)) {
    if (uVar1 == '\x04') {
      if (g_gameMode == GAME_MODE_NORMAL) {
        memcard_Save(0,-1);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x02') {
      if ((&g_goldWeaponsArray.field0_0x0)
          [*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)] != '\0') {
        DeleteMoby(moby);
      }
    }
    else if (uVar1 == '\x01') {
      *(undefined4 *)((int)pvVar2 + 0xc) = 0x3ff33333;
      FUN_004d3870(moby,pvVar2);
      if (*(short *)((int)pvVar2 + 4) == 2) {
        (&g_goldWeaponsArray.field0_0x0)[*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)]
             = '\x01';
        moby->state = '\x04';
        g_boltCount = g_boltCount -
                      (uint)*(ushort *)
                             (&DAT_00737d44 +
                             *(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4) * 0x18);
        StartGadgetPickupCutscene
                  (moby,*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4));
      }
    }
    else if (uVar1 == '\0') {
      if (moby->oClass == GOLD_WEAPON_CASE) {
        if ((&g_goldWeaponsArray.field0_0x0)
            [*(int *)(&DAT_00811cb0 + *(int *)((int)pvVar2 + 0x40) * 4)] == '\0') {
          iVar3 = FUN_004d3720(moby,pvVar2);
          moby->state = ((byte)(ZERO_MASK((-1 - iVar3))) & 2) + 1;
        }
        else {
          moby->state = '\x03';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


// 0x0339db4 (0x14 bytes)
void M1463_00339db4(void)

{
  DAT_00811d24 = 0x10000;
  return;
}



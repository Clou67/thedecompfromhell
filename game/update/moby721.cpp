// game/update/moby721.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x434458-0x434884
#include "game/update/moby721.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x0434458 (0x14 bytes)
void M721_00434458(void)

{
  DAT_00859f88 = 0x10000;
  return;
}


// 0x04344a0 (0x3e4 bytes)
/* Moby 721 */

void UpdateMoby_721(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_c0;
  GPiece<40> local_b0;
  
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (iVar2 = 0, 0 < DAT_00859fdc)) {
    dVar4 = 0.0;
    dVar5 = 1.0;
    dVar6 = 0.5;
    do {
      if (iVar2 != 0) {
        MB_randRangeFloat((float)dVar4,(float)dVar5);
      }
      iVar1 = MB_randInt(2);
      uVar3 = DAT_00859fb8;
      if (iVar1 != 0) {
        uVar3 = DAT_00859fb4;
      }
      MB_randInt(2);
      SpawnPart_2
                (local_b0,local_c0,local_c0,uVar3,uVar3,
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fc8 + dVar6)),
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fcc + dVar6)),
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fd0 + dVar6)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00859fdc);
  }
  return;
}



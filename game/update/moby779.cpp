// game/update/moby779.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x459d68-0x459ff0
#include "game/update/moby779.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"

// 0x0459d68 (0x288 bytes)
/* Moby 779 */

void UpdateMoby_779(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r7;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> local_90;
  GPiece<32> local_80;
  
  piVar1 = (int *)moby->pVar;
  iVar2 = IsMobyPlayingSound(moby,*piVar1);
  if (iVar2 == 0) {
    iVar2 = PlayMobySound(0,4,moby);
    *piVar1 = iVar2;
  }
  iVar2 = 0;
  dVar5 = 1.2000000476837158;
  dVar6 = 0.800000011920929;
  dVar7 = 125000.0;
  dVar8 = 175000.0;
  dVar9 = 0.5;
  do {
    MB_randRangeFloat((float)dVar6,(float)dVar5);
    MB_randRangeFloat((float)dVar6,(float)dVar5);
    uVar4 = MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar3 = MB_randRange(0x2d,0x3c);
    SpawnPart_22
              (uVar4,local_90,local_80,0x207f7f7f,0x272727,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar9)));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



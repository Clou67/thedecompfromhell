// game/update/moby1425.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x27ab68-0x27ac6c
#include "game/update/moby1425.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x027ab68 (0x14 bytes)
void M1425_0027ab68(void)

{
  DAT_007aa190 = 0x10000;
  return;
}


// 0x027ab98 (0xd4 bytes)
/* Moby 1425 */

void UpdateMoby_1425(MobyInstance *moby)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  pfVar1 = (float *)moby->pVar;
  iVar2 = MB_randInt(DAT_007aa1b8 + -1);
  if (iVar2 == 0) {
    local_24 = 0;
    local_28 = 0.0;
    local_2c = 0;
    local_30 = 0;
    dVar3 = (double)MB_randRangeFloat(0.75,1.5);
    local_28 = (float)(dVar3 * (double)DAT_007aa1b4) * g_FrameTime;
    dVar3 = (double)MB_randRangeFloat(0.06,0.12);
    SpawnPart_34
              ((double)(float)(dVar3 * 210000.0),(double)*pfVar1,(Vec4 *)&moby->pos,&local_30);
  }
  return;
}



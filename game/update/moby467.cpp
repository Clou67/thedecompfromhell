// game/update/moby467.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3982d8-0x398524
// shared update function UpdateMoby_{467_472}; registered for oClasses 467, 472
#include "game/update/moby467.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"

// shared update function, registered for oClasses 467, 472
// 0x03982d8 (0x238 bytes)
/* Moby 467
   Moby 472 */

void UpdateMoby_467(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  float *pfVar3;
  float fVar4;
  MobyInstance *moby_00;
  ushort *puVar5;
  
  pfVar3 = (float *)moby->pVar;
  bVar1 = moby->state;
  if ((g_MiscLevelFlags.field46_0x2e == 0) || (-1 < (int)pfVar3[2])) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pfVar3[1] = (moby->pos).z;
        moby->state = '\x01';
      }
      else {
        fVar4 = pfVar3[2];
        if (-1 < (int)fVar4) {
          if ((g_MobyInstance[(int)fVar4].oClass == TRESSPASSER_PAD) ||
             (g_MobyInstance[(int)fVar4].oClass == 0x23f)) {
            if (g_MobyInstance[(int)fVar4].state == '\x04') {
              g_MiscLevelFlags.field53_0x35 = 1;
              PlayMobySound(0,0,moby);
              moby->state = '\x02';
            }
          }
          else {
                    /* WARNING: Load size is inaccurate */
            Delt((*pfVar3 - pfVar3[1]) * *g_MobyInstance[(int)fVar4].pVar + pfVar3[1],
                           g_FrameTime * 10.0,&(moby->pos).z);
          }
        }
      }
    }
    else if (bVar1 < 3) {
      Delt(*pfVar3,g_FrameTime * 10.0,&(moby->pos).z);
    }
  }
  else {
    puVar5 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
    if (puVar5 != (ushort *)0x0) {
      moby_00 = g_MobyInstance + (*puVar5 & 0x7fff);
      while( true ) {
        if ((moby_00->state < 0x7f) && (moby_00 != moby)) {
          MVar2 = moby_00->oClass;
          if ((short)MVar2 < 599 && 0x24b < (short)MVar2) {
            DeleteMoby(moby_00);
          }
          else if (MVar2 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
            DeleteMoby(moby_00);
          }
        }
        if ((short)*puVar5 < -1) break;
        moby_00 = g_MobyInstance + (puVar5[1] & 0x7fff);
        puVar5 = puVar5 + 1;
      }
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x0398510 (0x14 bytes)
void M472_00398510(void)

{
  DAT_00842d34 = 0x10000;
  return;
}



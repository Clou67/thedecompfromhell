// game/update/moby1206.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ff1e4-0x1ff480
#include <math.h>
#include <stdio.h>
#include "game/update/moby1206.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x01ff1e4 (0x14 bytes)
void M1206_001ff1e4(void)

{
  DAT_00766578 = 0x10000;
  return;
}


// 0x01ff200 (0x280 bytes)
// strings: 00654dd4: 'Damage Causer 1206 #%d got moby %d ( %d ) for %f damage!\n'

/* Moby 1206 */

void UpdateMoby_1206_DamageCauser(MobyInstance *moby)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  GPiece<16> local_80;
  GPiece<48> auStack_70;
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    pfVar1[5] = -NAN;
  }
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    fVar3 = pfVar1[5];
    if (fVar3 != -NAN) {
      iVar2 = IsMobyPlayingSound(moby,(int)fVar3);
      if (iVar2 != 0) goto LAB_001ff2b4;
      fVar3 = pfVar1[5];
    }
    if (fVar3 == -NAN) {
      fVar3 = (float)PlayMobySound(0,4,moby);
      pfVar1[5] = fVar3;
    }
  }
LAB_001ff2b4:
  FastIntToDouble(pfVar1[2]);
  SetCollDamIn((double)pfVar1[3],auStack_70,moby,pfVar1[4]);
  iVar2 = 0;
  if (0 < (int)pfVar1[2]) {
    do {
      iVar4 = CollMobySphere((double)*pfVar1,local_80);
      if (iVar4 != 0) {
        printf("Damage Causer 1206 #%d got moby %d ( %d ) for %f damage!\n",moby->uid,
                     (g_CollOutput.pMoby)->oClass,(g_CollOutput.pMoby)->uid,(double)pfVar1[3]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)pfVar1[2]);
  }
  return;
}



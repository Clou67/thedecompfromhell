// game/update/moby188.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2cdd18-0x2cdf50
#include "game/update/moby188.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x02cdd18 (0x1d8 bytes)
double M188_002cdd18(double param_1,MobyInstance *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = param_2->state;
  if (bVar1 == 0) {
    GetGroundZ(0x3fe0000000000000,&param_2->pos,0);
    (param_2->rotation).x = 1.5707964;
    (param_2->rotation).y = 3.1415927;
    fVar2 = g_CollOutput.ip.z;
    fVar3 = DAT_007bd530;
    param_2->state = '\x01';
    param_1 = (double)(fVar2 + fVar3);
    (param_2->pos).z = fVar2 + fVar3;
  }
  else if (bVar1 < 2) {
    param_1 = (double)FastWrapRot((param_2->rotation).z,DAT_010a22c0);
    (param_2->rotation).z = (float)param_1;
    if ((((worldUpdateTime == (worldUpdateTime / 10) * 10) && (g_heroHealth != 0)) &&
        (fVar3 = (param_2->pos).y - g_heroPosition.y, fVar2 = (param_2->pos).x - g_heroPosition.x,
        param_1 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3), param_1 < 1.0)) &&
       (param_1 = ABS((double)((param_2->pos).z - g_heroPosition.z)), param_1 < 2.0)) {
      param_1 = (double)MB_UnlockItem(0x1a,1);
      param_2->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    fVar3 = Delt(0.0,param_2->pClass->gScale * 0.02,&param_2->scale);
    param_1 = (double)fVar3;
    if (param_2->scale == 0.0) {
      param_1 = (double)DeleteMoby(param_2);
    }
  }
  return param_1;
}


// 0x02cdef0 (0x60 bytes)
/* Moby 188 */

void UpdateMoby_188(MobyInstance *moby)

{
  if (*(int *)((int)moby->pVar + 4) == 0) {
    moby->setByGroup =
         (byte)((ulonglong)(LZCOUNT(g_Pad.downButtons & DAT_0096ad80) << 0x20) >> 0x25) ^ 1;
  }
  else {
    M188_002cdd18();
  }
  return;
}



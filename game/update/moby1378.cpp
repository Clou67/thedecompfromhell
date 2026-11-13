// game/update/moby1378.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x25df18-0x25e174
#include "game/update/moby1378.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x025df18 (0x14 bytes)
void M1378_0025df18(void)

{
  DAT_0079c0ec = 0x10000;
  return;
}


// 0x025df48 (0x22c bytes)
/* Moby 1378 */

void UpdateMoby_1378(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  if (moby->state == 0) {
    moby->enabled = '\0';
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (moby->state < 2) {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar4 = fVar1 - g_heroPosition.y;
    fVar5 = fVar2 - g_heroPosition.x;
    fVar3 = (moby->pos).z;
    fVar6 = fVar3 - g_heroPosition.z;
    dVar11 = 8.0;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 8.0) {
      dVar10 = (double)(DAT_00969db4 - fVar1);
      dVar8 = (double)DAT_00969dbc;
      dVar9 = (double)(g_heroCGPos - fVar2);
      dVar7 = (double)(DAT_00969db8 - fVar3);
      FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar1 = (float)((double)local_50 * dVar8 +
                     (double)(float)((double)local_60 * dVar7 +
                                    (double)(float)((double)local_80 * dVar9 +
                                                   (double)(float)((double)local_70 * dVar10))));
      fVar2 = (float)((double)local_4c * dVar8 +
                     (double)(float)((double)local_5c * dVar7 +
                                    (double)(float)((double)local_7c * dVar9 +
                                                   (double)(float)((double)local_6c * dVar10))));
      dVar7 = (double)(float)((double)local_48 * dVar8 +
                             (double)(float)((double)local_58 * dVar7 +
                                            (double)(float)((double)local_78 * dVar9 +
                                                           (double)(float)((double)local_68 * dVar10
                                                                          ))));
      if ((((fVar1 <= -5.0) || (5.0 <= fVar1)) || (dVar7 <= 0.0)) || (dVar11 <= dVar7)) {
        if (0.0 < fVar2) {
          DAT_0096bfab = 0;
        }
      }
      else {
        DAT_0096bfab = fVar2 < 0.5;
      }
    }
    RegisterFuncForMoby(&PTR_M1379_0025e1a8_0070a150,moby);
  }
  return;
}



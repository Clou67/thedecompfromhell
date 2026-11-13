// game/update/moby1629.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2a4070-0x2a43fc
#include "game/update/moby1629.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02a4070 (0x38c bytes)
/* Moby 1629 */

void UpdateMoby_1629(MobyInstance *moby)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  GPiece<16> local_e0;
  float local_d0;
  float local_cc;
  
  fVar2 = GameCamera.posY - (moby->pos).y;
  fVar3 = GameCamera.posX - (moby->pos).x;
  puVar1 = (undefined4 *)moby->pVar;
  if (fVar3 * fVar3 + fVar2 * fVar2 < (float)puVar1[1] * (float)puVar1[1]) {
    dVar5 = (double)((float)puVar1[9] * g_FrameTime);
    dVar6 = (double)(((float)puVar1[10] - 180.0) * 0.0055555557 * 3.1415927);
    dVar7 = (double)(((float)puVar1[0xb] - 180.0) * 0.0055555557 * 3.1415927);
    if (0 < (int)puVar1[5]) {
      dVar8 = -dVar5;
      iVar4 = 0;
      do {
        MB_randRangeFloat((float)dVar6,(float)dVar7);
        MB_randRangeFloat((float)puVar1[3],(float)puVar1[2]);
        FastVecSub(&local_d0,local_e0,0x951500);
        if ((float)puVar1[4] < SQRT(local_d0 * local_d0 + local_cc * local_cc)) {
          MB_randRangeFloat((float)dVar8,(float)dVar5);
          MB_randRangeFloat((float)dVar8,(float)dVar5);
          MB_randRangeFloat((float)puVar1[6],(float)puVar1[7]);
          SpawnPart_0((double)((moby->pos).z - (float)puVar1[8]),local_e0,*puVar1);
          dVar8 = (double)(float)dVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar1[5]);
    }
  }
  return;
}



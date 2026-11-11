// game/update/moby1091.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1bc580-0x1bc824
// shared update function UpdateMoby_a_lot_18; registered for oClasses 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1103
#include "game/update/moby1091.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1103
// 0x01bc580 (0x240 bytes)
/* Moby 1091
   Moby 1092
   Moby 1093
   Moby 1094
   Moby 1095
   Moby 1096
   Moby 1097
   Moby 1098
   Moby 1103 */

void UpdateMoby_1091(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  
  pfVar6 = (float *)moby->pVar;
  if (pfVar6 == (float *)0x0) {
    DeleteMoby(moby);
  }
  else {
    bVar2 = moby->state;
    if (bVar2 == 0) {
      fVar3 = (moby->pos).z;
      moby->updateDistance = -1;
      moby->drawDistance = 0x200;
      pfVar6[3] = fVar3;
      moby->state = '\x01';
    }
    else if (bVar2 < 2) {
      if (g_heroState == MOVEMENT_LOCKED) {
        (moby->pos).z = pfVar6[3];
      }
      else {
        dVar9 = (double)FastIntToDouble(worldUpdateTime % 600);
        fVar3 = (float)(dVar9 * 0.0016666667070239782) * 6.28318;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar8 = fVar3 * fVar4;
        (moby->pos).z =
             DAT_00763b60 *
             (fVar3 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) +
             pfVar6[3];
      }
    }
    else if (bVar2 < 3) {
      fVar3 = *pfVar6;
      uVar7 = (int)pfVar6[3] >> 0x1f;
      if (0x3f800000 < (int)((uVar7 >> 1 ^ (uint)pfVar6[3]) - uVar7)) {
        fVar3 = fVar3 * 0.985;
        *pfVar6 = fVar3;
        pfVar6[1] = pfVar6[1] * 0.985;
        pfVar6[2] = pfVar6[2] * 0.985;
      }
      fVar4 = (moby->rotation).x;
      fVar5 = (moby->rotation).y;
      (moby->pos).x = (moby->pos).x + fVar3;
      fVar3 = (moby->rotation).z;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      bVar1 = g_heroState != MOVEMENT_LOCKED;
      (moby->rotation).x = fVar4 + pfVar6[4];
      (moby->rotation).y = fVar5 + pfVar6[5];
      (moby->rotation).z = fVar3 + pfVar6[6];
      if (bVar1) {
        DeleteMoby(moby);
      }
    }
  }
  return;
}


// 0x01bc7c0 (0x50 bytes)
void M1103_001bc7c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 2;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = *param_3;
  puVar1[5] = param_3[1];
  puVar1[6] = param_3[2];
  puVar1[7] = param_3[3];
  return;
}


// 0x01bc810 (0x14 bytes)
void M1103_001bc810(void)

{
  DAT_00763bb0 = 0x10000;
  return;
}



// game/update/moby1240.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x21b114-0x21b5e4
#include "game/update/moby1240.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1242.h"
#include "idol/fastfunc.h"

// 0x021b114 (0x14 bytes)
void M1240_0021b114(void)

{
  DAT_0076c5ac = 0x10000;
  return;
}


// 0x021b170 (0x474 bytes)
/* Moby 1240 */

void UpdateMoby_1240(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  
  pfVar2 = (float *)moby->pVar;
  iVar12 = 0;
  moby->updateDistance = -0x80;
  if (0 < (int)pfVar2[3]) {
    dVar23 = 1.5707963705062866;
    dVar22 = 0.5;
    dVar21 = 1.5;
    dVar20 = 0.23999999463558197;
    dVar19 = 0.36000001430511475;
    dVar18 = 0.800000011920929;
    dVar17 = 1.2000000476837158;
    dVar16 = 1.0;
    dVar15 = 0.25;
    dVar14 = 60.0;
    do {
      local_d8 = (float)dVar16;
      local_dc = (float)dVar15;
      local_e0 = (float)dVar14;
      lVar7 = MB_randInt(100);
      iVar6 = DAT_0076c5f4;
      lVar11 = (longlong)DAT_0076c5f4;
      FastWrapRot((moby->rotation).z,(float)dVar23);
      MB_randRangeFloat(-pfVar2[4],pfVar2[4]);
      FastWrapRot((moby->rotation).z,(float)dVar23);
      MB_randRangeFloat(-pfVar2[4],pfVar2[4]);
      MB_randRangeFloat(-pfVar2[5],pfVar2[5]);
      dVar14 = (double)MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      dVar15 = (double)MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      dVar16 = (double)MB_randRangeFloat(DAT_0076c5ec,DAT_0076c5e8);
      if (dVar14 - dVar15 < 0.0) {
        dVar14 = dVar15;
      }
      if (dVar14 - dVar16 < 0.0) {
        dVar14 = dVar16;
      }
      MB_SphericalToVector
                ((float)((double)g_FrameTime * dVar14),(moby->rotation).z,
                 -(moby->rotation).y,&local_f0);
      dVar14 = (double)local_e0;
      dVar15 = (double)local_dc;
      dVar16 = (double)local_d8;
      if ((int)lVar7 < iVar6) {
        dVar13 = (double)MB_randRangeFloat((float)dVar22,(float)dVar21);
        local_f0 = (float)((double)local_f0 * dVar13);
        local_ec = (float)((double)local_ec * dVar13);
        local_e8 = (float)((double)local_e8 * dVar13);
        dVar13 = (double)MB_randRangeFloat((float)dVar20,(float)dVar19);
        fVar1 = pfVar2[1];
      }
      else {
        dVar13 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
        fVar1 = pfVar2[1];
      }
      uVar3 = DAT_0076c5e4;
      uVar4 = DAT_0076c5e0;
      dVar13 = (double)(float)((double)fVar1 * dVar13);
      MB_randRangeFloat((float)dVar22,(float)dVar16);
      uVar8 = FastLerpColor(uVar4,uVar3);
      uVar5 = DAT_0076c5e4;
      uVar3 = DAT_0076c5e4 & 0xff000000;
      MB_randRangeFloat((float)dVar15,(float)dVar22);
      uVar9 = FastLerpColor(uVar5,uVar3);
      uVar10 = FastDoubleToInt
                         ((double)(animationSpeed * (float)((double)pfVar2[2] * dVar14)));
      SpawnPart_64
                (dVar13,(double)*pfVar2,(double)(DAT_0076c5f0 * g_FrameTimeSq),local_100,&local_f0,
                 uVar10,&PTR_DAT_00770000,&DAT_00720000,uVar8,uVar9,
                 (ulonglong)(lVar7 - lVar11) >> 0x3f);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)pfVar2[3]);
  }
  return;
}



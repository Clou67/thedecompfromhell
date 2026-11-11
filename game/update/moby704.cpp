// game/update/moby704.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4296b8-0x429d64
#include "game/update/moby704.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby200.h"

// 0x04296b8 (0x6ac bytes)
/* Moby 704 */

void UpdateMoby_704(MobyInstance *moby)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  longlong lVar3;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> local_150;
  GPiece<16> local_140;
  undefined4 local_130 [4];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  longlong local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  iVar4 = MB_damage(moby,0x10000,0);
  moby->damage = -1;
  if ((iVar4 != 0) && (dVar25 = 0.0, 0 < *(int *)(iVar4 + 0x2c))) {
    PlayMobySound(0,0x10,moby);
    iVar4 = 0;
    dVar23 = -1.0;
    dVar24 = 1.0;
    dVar16 = 3.141592502593994;
    dVar17 = -3.141592502593994;
    dVar18 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar21 = 2.601886990305502e-06;
    local_f0 = 1.570796251296997;
    dVar29 = -0.30000001192092896;
    dVar28 = 0.30000001192092896;
    dVar22 = 0.5;
    dVar27 = 1.5;
    dVar26 = 210000.0;
    local_f8 = 2.0;
    do {
      MB_randRangeFloat((float)dVar23,(float)dVar24);
      MB_randRangeFloat((float)dVar23,(float)dVar24);
      MB_randRangeFloat((float)dVar23,(float)dVar24);
      MB_randRangeFloat((float)dVar23,(float)dVar24);
      MB_randRangeFloat((float)dVar29,(float)dVar28);
      MB_randRangeFloat((float)dVar25,(float)local_f8);
      MB_randRangeFloat((float)dVar22,(float)dVar27);
      dVar6 = (double)MB_randRangeFloat((float)dVar22,(float)dVar24);
      dVar6 = (double)(float)(dVar6 * dVar26);
      iVar5 = MB_randRange(0x1e,0x5a);
      local_e8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar5 + dVar22));
      SpawnPart_22(dVar6,local_140,local_150,0x5f787878,0x181818);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 200);
    iVar4 = 0;
    dVar26 = 0.03999999910593033;
    uVar15 = 0x3fe8000000000000;
    local_100 = -1.2000000476837158;
    local_108 = 1.2000000476837158;
    local_110 = -0.4000000059604645;
    local_118 = 0.4000000059604645;
    local_120 = 5.0;
    fVar1 = 0.09;
    do {
      dVar14 = (double)fVar1;
      dVar28 = (double)MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar29 = (double)MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar6 = (double)MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar7 = (double)MB_randRangeFloat((float)local_100,(float)local_108);
      dVar9 = (double)(float)((double)(moby->rotation).z + local_f0);
      dVar27 = (double)(float)(dVar16 - dVar9);
      if (dVar9 - (double)(float)(dVar16 - dVar9) < 0.0) {
        dVar27 = dVar9;
      }
      dVar10 = (double)(float)(dVar17 - dVar9);
      if ((double)(float)(dVar17 - dVar9) - dVar27 < 0.0) {
        dVar10 = dVar27;
      }
      dVar27 = (double)(float)(dVar10 * dVar10);
      dVar13 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar10));
      dVar9 = (double)(float)(dVar27 * dVar13);
      dVar13 = (double)(float)((double)(float)(dVar27 * dVar9) * dVar21 +
                              (double)(float)(dVar9 * dVar20 +
                                             (double)(float)(dVar13 * dVar19 +
                                                            (double)(float)((double)(float)(dVar27 *
                                                                                           dVar10) *
                                                                            dVar18 + dVar10))));
      dVar9 = (double)MB_randRangeFloat((float)local_110,(float)local_118);
      dVar10 = (double)(moby->rotation).z;
      local_d8 = (float)dVar17;
      dVar27 = (double)(float)(dVar16 - dVar10);
      if (dVar10 - (double)(float)(dVar16 - dVar10) < 0.0) {
        dVar27 = dVar10;
      }
      dVar11 = (double)(float)(dVar17 - dVar10);
      if ((double)(float)(dVar17 - dVar10) - dVar27 < 0.0) {
        dVar11 = dVar27;
      }
      local_d4 = (float)dVar22;
      local_c4 = (float)dVar18;
      local_c8 = (float)dVar19;
      local_cc = (float)dVar20;
      local_d0 = (float)dVar21;
      dVar17 = (double)(float)(dVar11 * dVar11);
      dVar10 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar11));
      dVar27 = (double)(float)(dVar17 * dVar10);
      dVar10 = (double)(float)((double)(float)(dVar17 * dVar27) * dVar21 +
                              (double)(float)(dVar27 * dVar20 +
                                             (double)(float)(dVar10 * dVar19 +
                                                            (double)(float)((double)(float)(dVar17 *
                                                                                           dVar11) *
                                                                            dVar18 + dVar11))));
      dVar18 = (double)MB_randRangeFloat((float)dVar22,(float)local_f8);
      dVar27 = (double)(moby->pos).x;
      dVar22 = (double)(moby->pos).y;
      dVar21 = (double)(moby->pos).z;
      dVar17 = (double)MB_randRangeFloat((float)dVar24,(float)local_120);
      dVar20 = (double)SQRT((float)(dVar6 * dVar6 +
                                   (double)(float)(dVar28 * dVar28 +
                                                  (double)(float)(dVar29 * dVar29))));
      dVar19 = (double)(float)((double)(float)(dVar17 * (double)g_FrameTime) / dVar20);
      dVar17 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar17 = (double)(float)(dVar6 * dVar19);
      }
      dVar11 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar11 = (double)(float)(dVar29 * dVar19);
      }
      dVar12 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar12 = (double)(float)(dVar28 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar17 = (double)(float)(dVar6 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar11 = (double)(float)(dVar29 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar12 = (double)(float)(dVar28 * dVar19);
      }
      lVar3 = MB_randInt(3);
      local_130[2] = 0x2ba;
      local_130[1] = 0x2b9;
      local_130[0] = 0x2b8;
      uVar2 = *(undefined4 *)((int)local_130 + (int)(lVar3 << 2));
      local_c0 = (float)dVar14;
      uVar8 = MB_randRangeFloat((float)dVar26,(float)dVar14);
      MB_randRange(0x3c,0xb4);
      FUN_00425540(uVar8,dVar24,dVar24,uVar15,
                   CONCAT44((float)(dVar7 * dVar13 + dVar27),(float)(dVar9 * dVar10 + dVar22)),
                   CONCAT44((float)(dVar18 + dVar21),(float)dVar25),
                   CONCAT44((float)dVar12,(float)dVar11),CONCAT44((float)dVar17,(float)dVar25),uVar2
                  );
      dVar17 = (double)local_d8;
      dVar22 = (double)local_d4;
      iVar4 = iVar4 + 1;
      dVar21 = (double)local_d0;
      dVar20 = (double)local_cc;
      dVar19 = (double)local_c8;
      dVar18 = (double)local_c4;
      fVar1 = local_c0;
    } while (iVar4 < 0x28);
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}



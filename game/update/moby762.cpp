// game/update/moby762.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x450eb4-0x4515fc
#include "game/update/moby762.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby200.h"

// 0x0450eb4 (0x14 bytes)
void M762_00450eb4(void)

{
  DAT_008734ac = 0x10000;
  return;
}


// 0x0450f20 (0x6dc bytes)
// strings: 008734e0: '_$62' (raw)

/* Moby 762 */

void UpdateMoby_762(MobyInstance *moby)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
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
  double dVar30;
  GPiece<16> local_140;
  GPiece<16> local_130;
  undefined4 local_120 [4];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  longlong local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  
  iVar5 = MB_damage(moby,0x800000,0);
  if (moby->state == 0) {
    if (g_MiscLevelFlags.field21_0x15 == 0) {
      moby->state = '\x01';
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if ((moby->state < 2) && (iVar5 != 0)) {
    g_MiscLevelFlags.field21_0x15 = 1;
    PlayMobySound(0,0,moby);
    iVar5 = 0;
    dVar26 = 0.0;
    dVar24 = -1.0;
    dVar25 = 1.0;
    dVar18 = 3.141592502593994;
    dVar19 = -3.141592502593994;
    dVar20 = -0.16666656732559204;
    dVar21 = 0.008333025500178337;
    dVar22 = -0.0001980741071747616;
    dVar23 = 2.601886990305502e-06;
    local_f8 = -2.0;
    local_100 = 2.0;
    local_108 = 1.570796251296997;
    dVar30 = 1.5;
    dVar29 = 3.5;
    dVar28 = 210000.0;
    dVar27 = 0.5;
    local_110 = 4.0;
    do {
      MB_randRangeFloat((float)dVar24,(float)dVar25);
      MB_randRangeFloat((float)dVar24,(float)dVar25);
      MB_randRangeFloat((float)dVar24,(float)dVar25);
      MB_randRangeFloat((float)local_f8,(float)local_100);
      MB_randRangeFloat((float)dVar24,(float)dVar25);
      MB_randRangeFloat((float)dVar26,(float)local_110);
      MB_randRangeFloat((float)dVar30,(float)dVar29);
      uVar3 = DAT_008734e4;
      uVar2 = DAT_008734e0;
      dVar7 = (double)MB_randRangeFloat((float)dVar30,(float)dVar29);
      dVar7 = (double)(float)(dVar7 * dVar28);
      iVar6 = MB_randRange(0x78,0xf0);
      local_f0 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar27));
      SpawnPart_22(dVar7,local_130,local_140,uVar2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 200);
    iVar5 = 0;
    dVar27 = 5.0;
    dVar28 = 0.05000000074505806;
    uVar17 = 0x3fe8000000000000;
    fVar1 = 0.15;
    do {
      dVar16 = (double)fVar1;
      dVar30 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar7 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar8 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar9 = (double)MB_randRangeFloat((float)local_f8,(float)local_100);
      dVar11 = (double)(float)((double)(moby->rotation).z + local_108);
      local_dc = (float)dVar23;
      dVar29 = (double)(float)(dVar18 - dVar11);
      if (dVar11 - (double)(float)(dVar18 - dVar11) < 0.0) {
        dVar29 = dVar11;
      }
      dVar12 = (double)(float)(dVar19 - dVar11);
      if ((double)(float)(dVar19 - dVar11) - dVar29 < 0.0) {
        dVar12 = dVar29;
      }
      dVar29 = (double)(float)(dVar12 * dVar12);
      dVar15 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar12));
      dVar11 = (double)(float)(dVar29 * dVar15);
      dVar15 = (double)(float)((double)(float)(dVar29 * dVar11) * dVar23 +
                              (double)(float)(dVar11 * dVar22 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)((double)(float)(dVar29 *
                                                                                           dVar12) *
                                                                            dVar20 + dVar12))));
      dVar11 = (double)MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar12 = (double)(moby->rotation).z;
      local_cc = (float)dVar18;
      local_e0 = (float)dVar19;
      dVar29 = (double)(float)(dVar18 - dVar12);
      if (dVar12 - (double)(float)(dVar18 - dVar12) < 0.0) {
        dVar29 = dVar12;
      }
      dVar18 = (double)(float)(dVar19 - dVar12);
      if ((double)(float)(dVar19 - dVar12) - dVar29 < 0.0) {
        dVar18 = dVar29;
      }
      local_d0 = (float)dVar20;
      local_d4 = (float)dVar21;
      local_d8 = (float)dVar22;
      dVar19 = (double)(float)(dVar18 * dVar18);
      dVar12 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
      dVar29 = (double)(float)(dVar19 * dVar12);
      dVar12 = (double)(float)((double)(float)(dVar19 * dVar29) * dVar23 +
                              (double)(float)(dVar29 * dVar22 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar18) *
                                                                            dVar20 + dVar18))));
      dVar19 = (double)MB_randRangeFloat((float)dVar25,(float)local_110);
      dVar29 = (double)(moby->pos).x;
      dVar23 = (double)(moby->pos).y;
      dVar22 = (double)(moby->pos).z;
      dVar18 = (double)MB_randRangeFloat((float)dVar25,(float)dVar27);
      dVar21 = (double)SQRT((float)(dVar8 * dVar8 +
                                   (double)(float)(dVar30 * dVar30 + (double)(float)(dVar7 * dVar7))
                                   ));
      dVar20 = (double)(float)((double)(float)(dVar18 * (double)g_FrameTime) / dVar21);
      dVar18 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar18 = (double)(float)(dVar8 * dVar20);
      }
      dVar13 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar13 = (double)(float)(dVar7 * dVar20);
      }
      dVar14 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar18 = (double)(float)(dVar8 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar13 = (double)(float)(dVar7 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar20);
      }
      lVar4 = MB_randInt(3);
      local_120[2] = 0x2ba;
      local_120[1] = 0x2b9;
      local_120[0] = 0x2b8;
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2));
      local_c8 = (float)dVar16;
      uVar10 = MB_randRangeFloat((float)dVar28,(float)dVar16);
      MB_randRange(0x3c,0xb4);
      FUN_00425540(uVar10,dVar25,dVar25,uVar17,
                   CONCAT44((float)(dVar9 * dVar15 + dVar29),(float)(dVar11 * dVar12 + dVar23)),
                   CONCAT44((float)(dVar19 + dVar22),(float)dVar26),
                   CONCAT44((float)dVar14,(float)dVar13),CONCAT44((float)dVar18,(float)dVar26),uVar2
                  );
      dVar19 = (double)local_e0;
      iVar5 = iVar5 + 1;
      dVar23 = (double)local_dc;
      dVar22 = (double)local_d8;
      dVar21 = (double)local_d4;
      dVar20 = (double)local_d0;
      dVar18 = (double)local_cc;
      fVar1 = local_c8;
    } while (iVar5 < 0x32);
    DeleteMoby(moby);
  }
  return;
}



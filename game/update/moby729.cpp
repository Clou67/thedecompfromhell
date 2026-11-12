// game/update/moby729.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x435b88-0x4362d8
#include "game/update/moby729.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby200.h"

// 0x0435b88 (0x750 bytes)
/* Moby 729 */

void UpdateMoby_729(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
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
  double dVar31;
  GPiece<16> local_140;
  GPiece<16> local_130;
  undefined4 local_120 [4];
  ulonglong local_110;
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
  
  uVar2 = moby->uid;
  if (((&g_Checkpoint.objState[0])[(short)uVar2] == '\0') &&
     (local_110 = ZEXT48(&g_LevelObjBits),
     (*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
     1 << (uVar2 & 0x1f)) == 0)) {
    iVar6 = MB_damage(moby,0x800000,0);
    if (iVar6 != 0) {
      PlayMobySound(0,0,moby);
      iVar6 = 0;
      dVar27 = 0.0;
      dVar25 = -1.0;
      dVar26 = 1.0;
      dVar19 = 3.141592502593994;
      dVar20 = -3.141592502593994;
      dVar21 = -0.16666656732559204;
      dVar22 = 0.008333025500178337;
      dVar23 = -0.0001980741071747616;
      dVar24 = 2.601886990305502e-06;
      local_f0 = -4.0;
      local_f8 = 4.0;
      local_100 = 1.570796251296997;
      dVar31 = 1.5;
      dVar30 = 3.5;
      dVar29 = 210000.0;
      dVar28 = 0.5;
      local_108 = 8.0;
      do {
        MB_randRangeFloat((float)dVar25,(float)dVar26);
        MB_randRangeFloat((float)dVar25,(float)dVar26);
        MB_randRangeFloat((float)dVar25,(float)dVar26);
        MB_randRangeFloat((float)local_f0,(float)local_f8);
        MB_randRangeFloat((float)dVar25,(float)dVar26);
        MB_randRangeFloat((float)dVar27,(float)local_108);
        MB_randRangeFloat((float)dVar31,(float)dVar30);
        dVar8 = (double)MB_randRangeFloat((float)dVar31,(float)dVar30);
        dVar8 = (double)(float)(dVar8 * dVar29);
        iVar7 = MB_randRange(0x78,0xf0);
        local_e8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar7 + dVar28));
        SpawnPart_22(dVar8,local_130,local_140,0x5f787878,0x181818);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 500);
      iVar6 = 0;
      dVar28 = 5.0;
      dVar29 = 0.05000000074505806;
      uVar18 = 0x3fe8000000000000;
      fVar1 = 0.15;
      do {
        dVar17 = (double)fVar1;
        dVar31 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar8 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar9 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar10 = (double)MB_randRangeFloat((float)local_f0,(float)local_f8);
        dVar12 = (double)(float)((double)(moby->rotation).z + local_100);
        local_d4 = (float)dVar24;
        dVar30 = (double)(float)(dVar19 - dVar12);
        if (dVar12 - (double)(float)(dVar19 - dVar12) < 0.0) {
          dVar30 = dVar12;
        }
        dVar13 = (double)(float)(dVar20 - dVar12);
        if ((double)(float)(dVar20 - dVar12) - dVar30 < 0.0) {
          dVar13 = dVar30;
        }
        dVar30 = (double)(float)(dVar13 * dVar13);
        dVar16 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar13));
        dVar12 = (double)(float)(dVar30 * dVar16);
        dVar16 = (double)(float)((double)(float)(dVar30 * dVar12) * dVar24 +
                                (double)(float)(dVar12 * dVar23 +
                                               (double)(float)(dVar16 * dVar22 +
                                                              (double)(float)((double)(float)(dVar30
                                                                                             * 
                                                  dVar13) * dVar21 + dVar13))));
        dVar12 = (double)MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar13 = (double)(moby->rotation).z;
        local_c4 = (float)dVar19;
        local_d8 = (float)dVar20;
        dVar30 = (double)(float)(dVar19 - dVar13);
        if (dVar13 - (double)(float)(dVar19 - dVar13) < 0.0) {
          dVar30 = dVar13;
        }
        dVar19 = (double)(float)(dVar20 - dVar13);
        if ((double)(float)(dVar20 - dVar13) - dVar30 < 0.0) {
          dVar19 = dVar30;
        }
        local_c8 = (float)dVar21;
        local_cc = (float)dVar22;
        local_d0 = (float)dVar23;
        dVar20 = (double)(float)(dVar19 * dVar19);
        dVar13 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
        dVar30 = (double)(float)(dVar20 * dVar13);
        dVar13 = (double)(float)((double)(float)(dVar20 * dVar30) * dVar24 +
                                (double)(float)(dVar30 * dVar23 +
                                               (double)(float)(dVar13 * dVar22 +
                                                              (double)(float)((double)(float)(dVar20
                                                                                             * 
                                                  dVar19) * dVar21 + dVar19))));
        dVar20 = (double)MB_randRangeFloat((float)dVar26,(float)local_108);
        dVar30 = (double)(moby->pos).x;
        dVar24 = (double)(moby->pos).y;
        dVar23 = (double)(moby->pos).z;
        dVar19 = (double)MB_randRangeFloat((float)dVar26,(float)dVar28);
        dVar22 = (double)SQRT((float)(dVar9 * dVar9 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar8 * dVar8))));
        dVar21 = (double)(float)((double)(float)(dVar19 * (double)g_FrameTime) / dVar22);
        dVar19 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar19 = (double)(float)(dVar9 * dVar21);
        }
        dVar14 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar14 = (double)(float)(dVar8 * dVar21);
        }
        dVar15 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar15 = (double)(float)(dVar31 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar19 = (double)(float)(dVar9 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar14 = (double)(float)(dVar8 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar15 = (double)(float)(dVar31 * dVar21);
        }
        lVar5 = MB_randInt(3);
        local_120[2] = 0x2ba;
        local_120[1] = 0x2b9;
        local_120[0] = 0x2b8;
        uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar5 << 2));
        local_c0 = (float)dVar17;
        uVar11 = MB_randRangeFloat((float)dVar29,(float)dVar17);
        MB_randRange(0x3c,0xb4);
        FUN_00425540(uVar11,dVar26,dVar26,uVar18,
                     CONCAT44((float)(dVar10 * dVar16 + dVar30),(float)(dVar12 * dVar13 + dVar24)),
                     CONCAT44((float)(dVar20 + dVar23),(float)dVar27),
                     CONCAT44((float)dVar15,(float)dVar14),CONCAT44((float)dVar19,(float)dVar27),
                     uVar3);
        dVar20 = (double)local_d8;
        iVar6 = iVar6 + 1;
        dVar24 = (double)local_d4;
        dVar23 = (double)local_d0;
        dVar22 = (double)local_cc;
        dVar21 = (double)local_c8;
        dVar19 = (double)local_c4;
        fVar1 = local_c0;
      } while (iVar6 < 100);
      uVar2 = moby->uid;
      iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2) + (int)local_110;
      iVar7 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar4 = *(uint *)(&g_CheckpointBits + iVar7);
      *(uint *)(iVar6 + Level * 0x100) = *(uint *)(iVar6 + Level * 0x100) | 1 << (uVar2 & 0x1f);
      g_MiscLevelFlags.field14_0xe = 1;
      *(uint *)(&g_CheckpointBits + iVar7) = uVar4 | 1 << (uVar2 & 0x1f);
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}



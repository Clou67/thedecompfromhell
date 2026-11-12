// game/update/moby1546.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x297798-0x298154
#include "game/update/moby1546.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update/moby775.h"
#include "idol/fastfunc.h"

// 0x0297798 (0x9bc bytes)
// strings: 0029775c: '?fffHCP' (raw)

/* Moby 1546 */

void UpdateMoby_1546(MobyInstance *moby)

{
  undefined2 uVar1;
  MobyInstance *pMVar2;
  longlong lVar3;
  int iVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar5;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auStack_150;
  Vec4 VStack_140;
  float local_130;
  float local_12c;
  float local_128;
  GPiece<16> auStack_120;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  longlong local_c0;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if (((g_SceneId == 1) ||
        (((g_SceneId == 2 &&
          (local_c0 = (longlong)(int)(animationSpeed * 148.5),
          g_SpaceSceneFrame <= (int)(animationSpeed * 148.5))) || (g_SceneId == 3))))
       || (g_SceneId == 4)) {
      lVar3 = 3;
      if (((g_SceneId != 1) && (g_SceneId != 3)) &&
         ((g_SceneId != 4 && (g_SceneId == 2)))) {
        lVar3 = 2;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar3 << 2) | 0x95cd50) + 0x178));
    }
    if (((g_SceneId == 1) &&
        (local_c0 = (longlong)(int)(animationSpeed * 472.5),
        (int)(animationSpeed * 472.5) <= g_SpaceSceneFrame)) &&
       ((local_c0 = (longlong)(int)(animationSpeed * 537.5),
        g_SpaceSceneFrame <= (int)(animationSpeed * 537.5) && (g_SpaceSceneMobys[0] != 0)))) {
      GetBonePosition(g_SpaceSceneMobys[0],1,auStack_150);
      uVar30 = 0x4000000000000000;
      uVar12 = MB_randRangeFloat(0.5,2.0);
      iVar6 = MB_randInt(2);
      uVar4 = 0xc000000000000000;
      if (iVar6 != 0) {
        uVar4 = uVar30;
      }
      uVar4 = SpawnPart_46(uVar12,uVar4,auStack_150,&DAT_00a15d30);
      if ((int)uVar4 != 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x18,0x297708);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar1 = storeVectorElementHalfWordIndexed(auVar35,10,uVar4);
        *(undefined2 *)((int)uVar4 + 10) = uVar1;
      }
    }
    if (((g_SceneId == 1) &&
        (local_c0 = (longlong)(int)(animationSpeed * 472.5),
        g_SpaceSceneFrame == (int)(animationSpeed * 472.5))) && (g_SpaceSceneMobys[0] != 0)) {
      GetBonePosition(g_SpaceSceneMobys[0],1,&VStack_140);
      dVar33 = 3.0;
      iVar6 = FUN_00456478(0x4008000000000000,&VStack_140);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x23) = 0x70;
      }
      iVar6 = 0;
      dVar31 = 0.0;
      dVar29 = 1.570796251296997;
      dVar28 = 3.141592502593994;
      dVar27 = -3.141592502593994;
      dVar26 = -0.16666656732559204;
      dVar25 = 0.008333025500178337;
      dVar24 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      dVar22 = 6.5;
      do {
        dVar13 = (double)MB_randRot();
        dVar14 = (double)MB_randRangeFloat
                                   ((float)dVar31,(float)((double)g_FrameTime * dVar33));
        dVar16 = (double)(float)(dVar13 + dVar29);
        dVar15 = (double)(float)(dVar28 - dVar13);
        if (dVar13 - (double)(float)(dVar28 - dVar13) < 0.0) {
          dVar15 = dVar13;
        }
        dVar18 = (double)(float)(dVar28 - dVar16);
        if (dVar16 - (double)(float)(dVar28 - dVar16) < 0.0) {
          dVar18 = dVar16;
        }
        dVar17 = (double)(float)(dVar27 - dVar13);
        if ((double)(float)(dVar27 - dVar13) - dVar15 < 0.0) {
          dVar17 = dVar15;
        }
        dVar15 = (double)(float)(dVar27 - dVar16);
        if ((double)(float)(dVar27 - dVar16) - dVar18 < 0.0) {
          dVar15 = dVar18;
        }
        dVar13 = (double)(float)(dVar17 * dVar17);
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar20 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar17));
        dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar19 = (double)(float)(dVar13 * dVar20);
        dVar21 = (double)(float)(dVar16 * dVar18);
        local_12c = (float)((double)(float)((double)(float)(dVar13 * dVar19) * dVar23 +
                                           (double)(float)(dVar19 * dVar24 +
                                                          (double)(float)(dVar20 * dVar25 +
                                                                         (double)(float)((double)(
                                                  float)(dVar13 * dVar17) * dVar26 + dVar17)))) *
                           dVar14);
        local_130 = (float)((double)(float)((double)(float)(dVar16 * dVar21) * dVar23 +
                                           (double)(float)(dVar21 * dVar24 +
                                                          (double)(float)(dVar18 * dVar25 +
                                                                         (double)(float)((double)(
                                                  float)(dVar16 * dVar15) * dVar26 + dVar15)))) *
                           dVar14);
        dVar15 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar33),
                                    (float)((double)g_FrameTime * dVar22));
        local_128 = (float)dVar15;
        uVar7 = MB_randRange(0x5a,0x78);
        uVar8 = MB_randInt(2);
        SpawnPart_35(&VStack_140,&local_130,uVar8,uVar7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
    }
    pMVar2 = g_SpaceSceneMobys[4];
    if (((g_SceneId == 4) && (g_SpaceSceneMobys[4] != (MobyInstance *)0x0)) &&
       ((g_SpaceSceneMobys[4]->oClass == GREEN_SHIP_0213 &&
        ((RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,g_SpaceSceneMobys[4]),
         (int)(animationSpeed * 850.5) <= g_SpaceSceneFrame &&
         (local_c0 = (longlong)(int)(animationSpeed * 1160.5),
         g_SpaceSceneFrame <= (int)(animationSpeed * 1160.5))))))) {
      iVar6 = 1;
      uVar34 = 0x3fb99999a0000000;
      uVar32 = 0x3ff0000000000000;
      uVar30 = 0x3fecccccc0000000;
      uVar12 = 0x41086a0000000000;
      dVar33 = 1100.5;
      uVar4 = 0x4010000000000000;
      auVar35 = loadVectorLeftIndexed(0x60,0x297708);
      auVar36 = loadVectorLeftIndexed(0x40,0x297708);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      do {
        GetBonePosition(pMVar2,iVar6,auStack_120);
        iVar11 = 0;
        do {
          MB_randInt(0x10);
          MB_randInt(2);
          uVar5 = SpawnPart_23(uVar34,uVar32,uVar30,uVar12,auStack_120);
          iVar10 = (int)uVar5;
          if (iVar10 != 0) {
            auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            local_c0 = (longlong)(int)((double)animationSpeed * dVar33);
            auVar36 = auVar35;
            if ((int)((double)animationSpeed * dVar33) <= g_SpaceSceneFrame) {
              auVar36 = auVar38;
            }
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar39);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar1 = storeVectorElementHalfWordIndexed(auVar36,10,uVar5);
            *(undefined2 *)(iVar10 + 10) = uVar1;
            cVar9 = FastDoubleToInt(uVar4);
            *(char *)(iVar10 + 9) = cVar9 + '@';
            *(undefined4 *)(iVar10 + 0x24) = 2;
            *(undefined1 *)(iVar10 + 0x2a) = 0x7f;
            *(char *)(iVar10 + 0x2b) = (char)*(undefined2 *)(iVar10 + 10);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 7);
    }
    pMVar2 = g_SpaceSceneMobys[2];
    if (((g_SceneId == 5) &&
        (local_c0 = (longlong)(int)(animationSpeed * 120.5),
        g_SpaceSceneFrame < (int)(animationSpeed * 120.5))) &&
       (g_SpaceSceneMobys[2] != (MobyInstance *)0x0)) {
      dVar24 = 0.0;
      dVar33 = dVar24;
      dVar22 = dVar24;
      dVar23 = dVar24;
      GetBonePosition(g_SpaceSceneMobys[2],5,&local_110);
      if (1 < g_SpaceSceneFrame) {
        dVar23 = (double)(local_110 - DAT_00fadb70);
        dVar22 = (double)(local_10c - DAT_00fadb74);
        dVar33 = (double)(local_108 - DAT_00fadb78);
      }
      DAT_00fadb78 = local_108;
      DAT_00fadb74 = local_10c;
      DAT_00fadb70 = local_110;
      DAT_00fadb7c = local_104;
      local_c0 = (longlong)(int)(animationSpeed * 118.5);
      if (g_SpaceSceneFrame == (int)(animationSpeed * 118.5)) {
        local_d4 = (float)dVar24;
        local_d8 = (float)dVar24;
        local_dc = (float)dVar24;
        local_e0 = (float)dVar24;
        uVar12 = 0x4022000000000000;
        dVar25 = 1.0;
        uVar4 = 0x404e000000000000;
        MB_genericExplosion
                  (dVar24,dVar24,0x4014000000000000,0x4004000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x404e000000000000,pMVar2,&local_e0,&local_110);
        local_c8 = (float)((double)local_108 - dVar25);
        local_d0 = local_110;
        local_cc = local_10c;
        local_c4 = local_104;
        MB_genericExplosion
                  (dVar24,dVar24,dVar25,0x3fe0000000000000,uVar12,dVar25,uVar4,pMVar2,&local_e0,
                   &local_d0);
      }
      RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,pMVar2);
      GetBonePosition(pMVar2,1,&local_100);
      GetBonePosition(pMVar2,2,&local_f0);
      dVar24 = (double)local_100 - dVar23;
      dVar25 = (double)local_fc - dVar22;
      dVar26 = (double)local_f8 - dVar33;
      dVar27 = (double)local_f0 - dVar23;
      dVar28 = (double)local_ec - dVar22;
      dVar29 = (double)local_e8 - dVar33;
      iVar6 = 0;
      dVar31 = 0.25;
      uVar12 = 0x41024f8000000000;
      uVar4 = 0x40ed4c0000000000;
      do {
        local_e8 = (float)dVar29;
        local_ec = (float)dVar28;
        local_f0 = (float)dVar27;
        local_f8 = (float)dVar26;
        local_fc = (float)dVar25;
        local_100 = (float)dVar24;
        MB_SpawnSparksPair(uVar12,uVar4,&local_100,&local_100,&DAT_00a15d30);
        MB_SpawnSparksPair(uVar12,uVar4,&local_f0,&local_f0,&DAT_00a15d30);
        iVar6 = iVar6 + 1;
        dVar24 = dVar23 * dVar31 + (double)local_100;
        dVar25 = dVar22 * dVar31 + (double)local_fc;
        dVar26 = dVar33 * dVar31 + (double)local_f8;
        dVar27 = dVar23 * dVar31 + (double)local_f0;
        dVar28 = dVar22 * dVar31 + (double)local_ec;
        dVar29 = dVar33 * dVar31 + (double)local_e8;
      } while (iVar6 < 4);
    }
  }
  return;
}



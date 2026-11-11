// game/update/moby1309.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x244840-0x245824
#include "game/update/moby1309.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1307.h"
#include "game/update/moby1317.h"
#include "game/update/moby320.h"
#include "idol/fastfunc.h"

// 0x0244840 (0xfe4 bytes)
/* Moby 1309 */

void UpdateMoby_1309(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  f32 fVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  longlong lVar19;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_r5;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auStack_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  float local_140;
  float local_13c;
  float local_138;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  undefined4 local_e0 [2];
  longlong local_d8;
  
  lVar19 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  uVar26 = ZEXT48(pvVar3);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      moby->drawDistance = 0xff;
      GetBonePosition(lVar19,0,auStack_170);
      lVar25 = 0;
      iVar24 = 0x51b;
      *(undefined4 *)((int)pvVar3 + 0x8c) = 0;
      do {
        if (iVar24 != 0x51d) {
          iVar22 = FUN_00243810(lVar19,auStack_170,iVar24);
          lVar5 = lVar25 << 4;
          lVar25 = (longlong)((int)lVar25 + 1);
          uVar23 = iVar22 - (int)g_MobyInstance;
          *(uint *)((int)pvVar3 + (int)lVar5 * 3 + 0xc0) =
               ((int)uVar23 >> 8) + (uint)((int)uVar23 < 0 && (uVar23 & 0xff) != 0);
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < 0x523);
      MB_StoreChildOffsets(lVar19,uVar26 + 0xa0,lVar25);
      moby->state = '\x01';
    }
    else {
      dVar27 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 0.5235988);
      (moby->rotation).z = (float)dVar27;
      iVar24 = FastDecTimerS32(uVar26 + 0x1f0);
      if ((((iVar24 != 0) && (DAT_0096b2d0 != 0)) && (g_heroState == TURRET_PLANE_UI)) &&
         (moby->enabled != '\0')) {
        FUN_00245a60(0x406fe00000000000,(double)(g_FrameTime * 50.0),lVar19,local_160,
                     local_150);
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar41 = loadVectorLeftIndexed(0x14,0x244790);
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1f0,
                           uVar26);
        *(undefined4 *)((int)pvVar3 + 0x1f0U & 0xfffffffc) = uVar6;
        iVar24 = FastDecTimerS32(uVar26 + 500);
        if (iVar24 != 0) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x18,0x244790);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar6 = storeVectorElementWordIndexed
                            (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1f0,
                             uVar26);
          *(undefined4 *)((int)pvVar3 + 0x1f0U & 0xfffffffc) = uVar6;
          *(undefined4 *)((int)pvVar3 + 500) = 10;
        }
      }
      if (moby->setByGroup == '\x01') {
        moby->state = '\x03';
      }
      MB_UpdateChildMobys(lVar19,uVar26 + 0xa0,7);
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,in_r5,0xffffffffffffffff
                );
      GetBonePosition(lVar19,0,&local_140);
      fVar7 = (moby->pos).x - local_140;
      *(float *)((int)pvVar3 + 0x70) = fVar7;
      fVar8 = (moby->pos).y - local_13c;
      *(float *)((int)pvVar3 + 0x74) = fVar8;
      fVar9 = (moby->pos).z - local_138;
      *(float *)((int)pvVar3 + 0x78) = fVar9;
      *(f32 *)((int)pvVar3 + 0x7c) = (moby->pos).w;
      fVar17 = g_FrameTime;
      fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      fVar2 = 0.0;
      fVar11 = (g_FrameTime * 10.0) / fVar10;
      fVar12 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar12 = fVar7 * fVar11;
      }
      fVar14 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar14 = fVar8 * fVar11;
      }
      fVar15 = fVar2;
      if (0.0 - fVar10 < 0.0) {
        fVar15 = fVar9 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar12 = fVar7 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar14 = fVar8 * fVar11;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar15 = fVar9 * fVar11;
      }
      *(float *)((int)pvVar3 + 0x70) = fVar12;
      *(float *)((int)pvVar3 + 0x74) = fVar14;
      *(float *)((int)pvVar3 + 0x78) = fVar15;
      fVar9 = local_13c - g_heroPosition.y;
      fVar10 = local_140 - g_heroPosition.x;
      fVar11 = local_138 - g_heroPosition.z;
      fVar16 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
      fVar8 = (fVar17 * 15.0) / fVar16;
      fVar7 = fVar2;
      if (0.0 - fVar16 < 0.0) {
        fVar7 = fVar11 * fVar8;
      }
      fVar13 = fVar2;
      if (0.0 - fVar16 < 0.0) {
        fVar13 = fVar9 * fVar8;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar2 = fVar10 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar7 = fVar11 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar13 = fVar9 * fVar8;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar2 = fVar10 * fVar8;
      }
      *(float *)((int)pvVar3 + 0x78) = fVar15 + fVar7;
      *(float *)((int)pvVar3 + 0x74) = fVar14 + fVar13;
      *(float *)((int)pvVar3 + 0x70) = fVar12 + fVar2;
      dVar28 = -1.5707963705062866;
      dVar30 = 1.5707963705062866;
      dVar27 = (double)MB_randRangeFloat(fVar17 * -1.5707964,fVar17 * 1.5707964);
      *(float *)((int)pvVar3 + 0x80) = (float)dVar27;
      dVar27 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar28),
                                  (float)((double)g_FrameTime * dVar30));
      *(float *)((int)pvVar3 + 0x84) = (float)dVar27;
      dVar27 = (double)MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      *(int *)((int)pvVar3 + 0x88) = (int)dVar27;
      moby->state = '\x04';
    }
    else {
      *(float *)((int)pvVar3 + 0x78) = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar3 + 0x78));
      fVar2 = (moby->rotation).x;
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x70);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x74);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x78);
      dVar27 = (double)FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
      (moby->rotation).x = (float)dVar27;
      dVar27 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x84));
      fVar4 = (moby->pos).x;
      (moby->rotation).y = (float)dVar27;
      uVar23 = (int)fVar4 >> 0x1f;
      iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23;
      if (((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
         ((fVar4 = (moby->pos).y, uVar23 = (int)fVar4 >> 0x1f,
          iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, 0x447cc000 < iVar24 || iVar24 < 0x41400000
          || ((fVar4 = (moby->pos).z, uVar23 = (int)fVar4 >> 0x1f,
              iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, iVar24 < 0x41400000 ||
              (0x447cc000 < iVar24)))))) {
        DeleteMoby(moby);
      }
      else {
        iVar24 = MB_randInt(3);
        if (iVar24 == 0) {
          local_e0[0] = 0x2f000000;
          local_e0[1] = 0x3f000000;
          lVar25 = MB_randInt(2);
          dVar27 = (double)animationSpeed;
          uVar29 = 0x41186a0000000000;
          uVar6 = *(undefined4 *)((int)local_e0 + (int)(lVar25 << 2));
          local_d8 = (longlong)(int)(dVar27 * 20.5);
          MB_randRange
                    (local_d8,dVar27,0x41186a0000000000,(int)(dVar27 * 15.5),(int)(dVar27 * 20.5));
          local_d8 = (longlong)(int)(animationSpeed * 30.5);
          MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
          dVar27 = (double)MB_randRangeFloat(8.0,16.0);
          SpawnPart_11
                    (uVar29,(double)(float)(dVar27 * (double)g_FrameTime),lVar19 + 0x10,
                     local_130,0x2f3f3f7f,uVar6);
        }
        fVar4 = (moby->pos).z;
        uVar23 = (int)fVar4 >> 0x1f;
        if ((int)((uVar23 >> 1 ^ (uint)fVar4) - uVar23) < 0x41c80000) {
          iVar24 = 0;
          if (0 < DAT_0078e300) {
            dVar27 = -3.0;
            dVar30 = 3.0;
            do {
              MB_randRot();
              MB_randRangeFloat((float)dVar27,(float)dVar30);
              MB_randRangeFloat((float)dVar27,(float)dVar30);
              uVar18 = DAT_0078e308;
              uVar6 = DAT_0078e304;
              local_d8 = (longlong)(DAT_0078e31c << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e31c,(float)local_d8);
              uVar29 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_d8 = (longlong)(DAT_0078e320 << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e320,(float)local_d8);
              uVar20 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_d8 = (longlong)(DAT_0078e324 << 1);
              dVar28 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_0078e324,(float)local_d8);
              uVar21 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              SpawnPart_2(local_100,local_120,local_110,uVar6,uVar18,uVar29,uVar20,uVar21);
              iVar24 = iVar24 + 1;
            } while (iVar24 < DAT_0078e300);
          }
          *(float *)((int)pvVar3 + 0x70) = *(float *)((int)pvVar3 + 0x70) * 0.45;
          *(float *)((int)pvVar3 + 0x74) = *(float *)((int)pvVar3 + 0x74) * 0.45;
          *(float *)((int)pvVar3 + 0x78) = *(float *)((int)pvVar3 + 0x78) * 0.45;
          *(float *)((int)pvVar3 + 0x80) = *(float *)((int)pvVar3 + 0x80) * 0.9;
          *(float *)((int)pvVar3 + 0x84) = *(float *)((int)pvVar3 + 0x84) * 0.9;
          moby->state = '\x05';
        }
        else {
          iVar24 = CollSphere(0x4008000000000000,lVar19 + 0x10,&DAT_00244790,2,lVar19);
          if ((iVar24 != 0) && (iVar24 = CollHotspot(), iVar24 == -1)) {
            MB_SpawnExplosionSparks
                      (0x4010000000000000,0x402a000000000000,lVar19,lVar19 + 0x10);
            uVar29 = 0;
            iVar24 = 0;
            dVar27 = -1.399999976158142;
            dVar30 = 1.399999976158142;
            dVar28 = -1.600000023841858;
            dVar31 = 1.600000023841858;
            dVar32 = 5.0;
            dVar33 = 9.0;
            dVar34 = 0.5;
            dVar35 = 1.0;
            dVar36 = 2.5;
            dVar37 = 0.30000001192092896;
            dVar38 = 0.6000000238418579;
            do {
              MB_randRangeFloat((float)dVar27,(float)dVar30);
              MB_randRangeFloat((float)dVar28,(float)dVar31);
              MB_randRangeFloat((float)dVar27,(float)dVar30);
              MB_randRangeFloat((float)dVar32,(float)dVar33);
              *(float *)((int)pvVar3 + 0x70) =
                   (float)((double)*(float *)((int)pvVar3 + 0x70) * dVar34);
              *(float *)((int)pvVar3 + 0x78) =
                   (float)((double)*(float *)((int)pvVar3 + 0x78) * dVar34);
              *(float *)((int)pvVar3 + 0x74) =
                   (float)((double)*(float *)((int)pvVar3 + 0x74) * dVar34);
              MB_randRangeFloat((float)dVar35,(float)dVar36);
              FUN_00341590(lVar19);
              if (iVar24 % 3 == 0) {
                uVar20 = MB_randRangeFloat((float)dVar37,(float)dVar38);
                MB_SpawnExplosionSparks(uVar20,uVar29,lVar19,local_f0);
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < 0x14);
            DeleteMoby(moby);
          }
        }
      }
    }
  }
  else if (bVar1 < 6) {
    *(float *)((int)pvVar3 + 0x78) = -(DAT_0071f418 * 10.8 * 0.5 - *(float *)((int)pvVar3 + 0x78));
    fVar2 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x70);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x74);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x78);
    dVar27 = (double)FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x84));
    fVar4 = (moby->pos).x;
    (moby->rotation).y = (float)dVar27;
    uVar23 = (int)fVar4 >> 0x1f;
    iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23;
    if ((((iVar24 < 0x41400000) || (0x447cc000 < iVar24)) ||
        (fVar4 = (moby->pos).y, uVar23 = (int)fVar4 >> 0x1f,
        iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, 0x447cc000 < iVar24 || iVar24 < 0x41400000))
       || ((fVar4 = (moby->pos).z, uVar23 = (int)fVar4 >> 0x1f,
           iVar24 = (uVar23 >> 1 ^ (uint)fVar4) - uVar23, iVar24 < 0x41400000 ||
           (0x447cc000 < iVar24)))) {
      DeleteMoby(moby);
    }
  }
  return;
}



// game/update/moby243.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x30f5a0-0x3108cc
#include "game/update/moby243.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby122.h"
#include "idol/fastfunc.h"

// 0x030f5a0 (0x14 bytes)
void M243_0030f5a0(void)

{
  DAT_007ff7cc = 0x10000;
  return;
}


// 0x030f5c8 (0x1c8 bytes)
MobyInstance * FUN_0030f5c8(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  pMVar3 = CreateMoby(0xf3);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar4 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar5 = (double)MB_randRangeFloat((float)dVar7,(float)dVar6);
    dVar7 = (double)MB_randRangeFloat((float)dVar7,(float)dVar6);
    auVar8 = ZEXT416(0xffffffff);
    auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\x01';
    puVar1[4] = param_1;
    auVar8 = loadVectorLeftIndexed(8,0x30f5b8);
    auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x14,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 5) & 0xfffffffc) = uVar2;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    (pMVar3->rotation).x = (float)dVar4;
    (pMVar3->rotation).y = (float)dVar5;
    (pMVar3->rotation).z = (float)dVar7;
    (pMVar3->rotation).w = 0.0;
    dVar5 = 1.0471975803375244;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * 1.0471975803375244),
                               (float)((double)g_FrameTime * dVar6));
    puVar1[6] = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar5),
                               (float)((double)g_FrameTime * dVar6));
    puVar1[7] = (float)dVar4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x030f810 (0x10bc bytes)
// inlined: FastRSqrt @0x30fb50, FastRSqrt @0x30fc94, FastRSqrt @0x30fdc4
/* Moby 243 */

void UpdateMoby_243(MobyInstance *moby)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar14;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> local_1e0;
  GPiece<16> local_1d0;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<48> local_190;
  GPiece<48> local_160;
  undefined4 local_130 [12];
  longlong local_100;
  
  lVar11 = (longlong)(int)moby;
  dVar26 = 0.0;
  pfVar4 = (float *)moby->pVar;
  bVar1 = moby->state != '\0';
  dVar27 = 1.0;
  if ((((pfVar4[4] != 0.0) && (cVar3 = *(char *)((int)pfVar4[4] + 0x20), cVar3 != -2)) &&
      (cVar3 != -3)) || (bVar1)) {
    if (bVar1) {
      (moby->pos).x = (moby->pos).x + *pfVar4;
      (moby->pos).y = (moby->pos).y + pfVar4[1];
      (moby->pos).z = (moby->pos).z + pfVar4[2];
      pfVar4[2] = -(g_FrameTimeSq * 9.8 - pfVar4[2]);
      dVar29 = 290.5;
      local_100 = (longlong)(int)(animationSpeed * 290.5);
      lVar15 = lVar11 + 0x10;
      iVar14 = CollLine(local_1e0,lVar15,0,pfVar4[4],local_190);
      if (iVar14 == 0) {
        iVar14 = FastDecTimerS32(pfVar4 + 5);
        if (iVar14 != 0) {
          moby->setByGroup = '\x01';
        }
      }
      else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < g_CollOutput.poly) {
          moby->setByGroup = '\x01';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          FastVecReflect(local_1d0,pfVar4,0xa10980);
        }
      }
      else if (((g_CollOutput.pMoby != g_heroMobyPtr) &&
               (g_CollOutput.pMoby != (MobyInstance *)pfVar4[4])) ||
              (local_100 = (longlong)(int)((double)animationSpeed * dVar29),
              (int)pfVar4[5] < (int)((double)animationSpeed * dVar29))) {
        moby->setByGroup = '\x01';
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FastVecReflect(local_1d0,pfVar4,0xa10980);
      }
      if (moby->setByGroup != '\0') {
        uVar25 = 0x4008000000000000;
        CollMobySphere(0x4008000000000000,lVar15,0x310000,0x10,lVar11,local_160);
        dVar24 = -1.0;
        iVar14 = 0;
        dVar22 = 3.5;
        dVar21 = 6.5;
        dVar20 = 60.5;
        dVar29 = 120.5;
        do {
          MB_randRangeFloat((float)dVar24,(float)dVar27);
          MB_randRangeFloat((float)dVar24,(float)dVar27);
          MB_randRangeFloat((float)dVar26,(float)dVar27);
          MB_randRangeFloat((float)dVar22,(float)dVar21);
          iVar16 = (int)((double)animationSpeed * dVar29);
          local_100 = (longlong)iVar16;
          uVar12 = MB_randRange((int)((double)animationSpeed * dVar20),iVar16);
          FUN_0020bb70(lVar15,local_1b0,uVar12,0,0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        iVar14 = 0;
        dVar19 = 10.0;
        dVar29 = 90.5;
        do {
          MB_randRangeFloat((float)dVar24,(float)dVar27);
          MB_randRangeFloat((float)dVar24,(float)dVar27);
          MB_randRangeFloat((float)dVar26,(float)dVar27);
          MB_randRangeFloat((float)dVar21,(float)dVar19);
          iVar16 = (int)((double)animationSpeed * dVar29);
          local_100 = (longlong)iVar16;
          uVar12 = MB_randRange((int)((double)animationSpeed * dVar20),iVar16);
          FUN_0020bb70(lVar15,local_1a0,uVar12,1,0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 4);
        MB_randRangeFloat((float)dVar24,(float)dVar27);
        MB_randRangeFloat((float)dVar24,(float)dVar27);
        MB_randRangeFloat((float)dVar24,(float)dVar27);
        fVar8 = GameCamera.posY - (moby->pos).y;
        fVar9 = GameCamera.posX - (moby->pos).x;
        fVar10 = GameCamera.posZ - (moby->pos).z;
        dVar21 = (double)SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
        iVar14 = (int)((double)animationSpeed * dVar29);
        local_100 = (longlong)iVar14;
        uVar12 = MB_randRange((int)((double)animationSpeed * dVar20),iVar14);
        FUN_0020bb70(lVar15,local_1c0,uVar12,1,0);
        iVar14 = 10;
        dVar27 = 8.0;
        if (dVar21 < 8.0) {
          iVar14 = FastDoubleToInt(dVar21);
          iVar14 = iVar14 + 2;
        }
        if (dVar21 - 7.0 < 0.0) {
          dVar26 = (double)(float)(7.0 - dVar21);
        }
        if (0 < iVar14) {
          iVar16 = 0;
          uVar12 = 0x41186a0000000000;
          dVar28 = 15.5;
          dVar24 = 20.5;
          dVar20 = 25.5;
          dVar29 = 30.5;
          do {
            dVar17 = (double)MB_randRangeFloat((float)dVar27,(float)dVar19);
            dVar18 = (double)g_FrameTime;
            local_130[0] = 0x4f008fff;
            local_130[1] = 0x4f008fff;
            local_130[2] = 0x4f007fff;
            local_130[3] = 0x4f006fff;
            local_130[4] = 0x2fffffff;
            local_130[5] = 0x2fffffff;
            local_130[6] = 0x2f005f7f;
            local_130[7] = 0x2f004f7f;
            local_130[8] = 0x2f003f7f;
            local_130[9] = 0x2f00004f;
            dVar23 = (double)(float)(dVar17 * dVar18 - (double)(float)(dVar18 * dVar26));
            local_130[10] = 0x2f000000;
            local_130[0xb] = 0x3f000000;
            lVar13 = MB_randInt(dVar17,dVar18,(double)(float)(dVar18 * dVar26),6);
            uVar5 = *(undefined4 *)((int)local_130 + (int)(lVar13 << 2));
            lVar13 = MB_randInt(6);
            uVar6 = *(undefined4 *)((int)local_130 + (int)(lVar13 << 2) + 0x18);
            iVar2 = (int)((double)animationSpeed * dVar24);
            local_100 = (longlong)iVar2;
            MB_randRange((int)((double)animationSpeed * dVar28),iVar2);
            iVar2 = (int)((double)animationSpeed * dVar29);
            local_100 = (longlong)iVar2;
            MB_randRange((int)((double)animationSpeed * dVar20),iVar2);
            SpawnPart_11(uVar12,dVar23,lVar15,local_1d0,uVar5,uVar6);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar14);
        }
        uVar7 = (int)g_FrameLoad >> 0x1f;
        uVar12 = 0x4010000000000000;
        if (((int)((uVar7 >> 1 ^ g_FrameLoad) - uVar7) < 0x3f733333) && (9.0 < dVar21)) {
          local_100 = (longlong)(int)(animationSpeed * 15.5);
          FUN_001d4d88(0x4010000000000000,lVar11,lVar15,local_1d0,uVar7,(int)(animationSpeed * 15.5)
                       ,0x7f,0x7f,0x7f);
          local_100 = (longlong)(int)(animationSpeed * 24.5);
          FUN_001d4d88(uVar12,lVar11,lVar15,local_1d0);
        }
        local_100 = (longlong)(int)(animationSpeed * 20.5);
        FUN_001d4d88(uVar12,lVar11,lVar15,local_1d0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
        local_100 = (longlong)(int)(animationSpeed * 27.5);
        FUN_001d4d88(dVar22,lVar11,lVar15,local_1d0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
        local_100 = (longlong)(int)(animationSpeed * 29.5);
        FUN_001d4d88(uVar25,lVar11,lVar15,local_1d0,0x20,(int)(animationSpeed * 29.5),0x20,0,0);
        *pfVar4 = 0.0;
        moby->setByGroup = '\0';
        PlayMobySound(0,0,moby);
        auVar30 = ZEXT416(0xffffffff);
        auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        fVar8 = 0.35;
        if (dVar21 - 20.0 < 0.0) {
          fVar8 = (float)(dVar21 * 0.017500000074505806);
        }
        GameCamera.offset0.amp = 0.4 - fVar8;
        auVar32 = loadVectorLeftIndexed(0x50,0x30f790);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar30,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0
                       );
        DeleteMoby(moby);
      }
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}



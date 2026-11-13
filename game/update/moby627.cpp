// game/update/moby627.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3eac28-0x3eba40
#include "game/update/moby627.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby639.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x03eac28 (0x14 bytes)
void M627_003eac28(void)

{
  DAT_0085408c = 0x10000;
  return;
}


// 0x03eac40 (0x74 bytes)
void M627_003eac40(int param_1)

{
  int iVar1;
  
  iVar1 = MB_damage(param_1,0x130000,0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar1 + 0x20) + 0xa6) != *(short *)(param_1 + 0xa6))) {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  return;
}


// 0x03ead68 (0xcd8 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 627 */

void UpdateMoby_627(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  char cVar3;
  float fVar4;
  KickVars *kv;
  float fVar5;
  f32 fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar18;
  int iVar19;
  undefined8 uVar20;
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
  double dVar32;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  float local_1c0 [4];
  GPiece<16> local_1b0;
  GPiece<80> auStack_1a0;
  float local_150 [4];
  double local_140;
  double local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  float local_f8;
  longlong local_f0;
  float local_e0;
  
  lVar11 = (longlong)(int)moby;
  kv = (KickVars *)moby->pVar;
  iVar15 = MB_damage(lVar11,0x130000,0);
  if (((iVar15 != 0) && (*(int *)(iVar15 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar15 + 0x20) + 0xa6) != moby->oClass)) {
    moby->state = '\x04';
  }
  iVar15 = 0;
  moby->damage = -1;
  fVar5 = kv[1].kickVel[3];
  dVar27 = 0.0;
  kv[1].kickVel[0] = 0.0;
  kv[1].kickVel[3] = (float)((int)fVar5 + 1);
  uVar2 = moby->state;
  if (uVar2 == '\x05') {
    fVar5 = moby->scale * (DAT_0071f408 * -0.074 + 1.0);
    moby->scale = fVar5;
    if (fVar5 < moby->pClass->gScale * 0.01) {
      MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
      DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x04') {
    fVar5 = (moby->pos).y - GameCamera.posY;
    fVar1 = (moby->pos).x - GameCamera.posX;
    dVar23 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
    uVar12 = CollMobySphere(0x4000000000000000,lVar11 + 0x10,&DAT_003eacb4,0x10,lVar11,0);
    dVar22 = 0.25;
    uVar20.piece<0,4>() = (moby->pos).x;
    uVar20.piece<4,4>() = (moby->pos).y;
    uVar14.piece<0,4>() = (moby->pos).z;
    uVar14.piece<4,4>() = (moby->pos).w;
    MB_DamageMobyList
              (0x4008000000000000,0x3fd0000000000000,0x3ff8000000000000,lVar11,4,uVar20,uVar14,
               &g_CollMobyHits,uVar12,0,&DAT_00810001);
    iVar15 = 0x96;
    local_f8 = (float)dVar23;
    if (dVar23 < 10.0 != 0xffffffce) {
      local_f8 = (float)dVar23;
      iVar15 = FastDoubleToInt((double)(float)(dVar23 * 15.0));
    }
    iVar17 = 0;
    if (0 < iVar15) {
      dVar24 = -0.5;
      dVar33 = 0.5;
      local_100 = 14.0;
      local_108 = 22.0;
      local_110 = 12.0;
      local_118 = 4.0;
      local_11c = 0x3fc90fda;
      dVar28 = 180.5;
      dVar29 = 200000.0;
      dVar30 = 300000.0;
      dVar31 = 240.5;
      local_120 = 0x41000000;
      local_124 = 50000.0;
      dVar32 = 1.0;
      local_128 = 100000.0;
      dVar23 = 300.5;
      dVar25 = 0.7071068286895752;
      local_130 = 0x41024f8000000000;
      local_138 = 30.5;
      local_140 = 45.5;
      do {
        lVar13 = MB_randInt(4);
        dVar21 = (double)g_FrameTime;
        local_150[3] = 0.0;
        local_150[0] = (float)(dVar21 * local_100);
        local_150[1] = (float)(dVar21 * local_108);
        local_150[2] = (float)(dVar21 * local_110);
        MB_randRangeFloat((float)(dVar21 * dVar24),(float)(dVar21 * dVar33));
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar24),
                   (float)((double)g_FrameTime * dVar33));
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * local_118),
                   *(float *)((int)local_150 + (int)(lVar13 << 2)));
        iVar19 = (int)lVar13;
        dVar21 = dVar22;
        if (iVar19 == 1) {
          dVar21 = dVar33;
        }
        local_e0 = (float)dVar23;
        MB_randRangeFloat((float)dVar27,(float)dVar21);
        dVar21 = (double)MB_randRot();
        dVar23 = (double)local_e0;
        if (iVar19 < 2) {
          if (-1 < iVar19) {
            if (iVar19 < 1) {
              uVar20 = MB_randRangeFloat((float)dVar29,(float)dVar30);
              iVar19 = (int)((double)animationSpeed * dVar31);
              local_f0 = (longlong)iVar19;
              MB_randRange((int)((double)animationSpeed * dVar28),iVar19);
              SpawnPart_16(uVar20,local_1b0,local_1c0,0x1f101820,&DAT_00101010);
            }
            else {
              MB_randRangeFloat(local_124,local_128);
              local_f0 = (longlong)(int)((double)animationSpeed * dVar28);
              SpawnPart_16(local_1b0,local_1c0,0x3f081020,0xf081020);
            }
          }
        }
        else if (iVar19 < 3) {
          lVar13 = MB_randInt(100);
          iVar19 = (int)((double)animationSpeed * local_140);
          local_f0 = (longlong)iVar19;
          MB_randRange((int)((double)animationSpeed * local_138),iVar19);
          SpawnPart_16
                    (local_130,local_1b0,local_1c0,
                     (lVar13 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,0xf000020);
        }
        else if (iVar19 < 4) {
          local_e0 = (float)dVar25;
          dVar25 = (double)MB_randRangeFloat((float)dVar22,(float)dVar32);
          uVar20 = 0x7f000000;
          TweenColor((float)dVar25,0x7f000000,0x7f182030);
          dVar25 = (double)MB_randRangeFloat((float)dVar33,(float)dVar32);
          uVar14 = 0;
          TweenColor((float)dVar25,0,0x5f5f5f);
          dVar25 = (double)MB_randRangeFloat((float)dVar27,(float)dVar32);
          dVar26 = (double)(float)(dVar25 * (double)g_FrameTime);
          dVar25 = (double)MB_randRot();
          MB_SphericalToVector((float)dVar26,(float)dVar21,(float)dVar25,local_1c0);
          uVar12 = MB_randRangeFloat((float)dVar29,(float)dVar30);
          iVar19 = (int)((double)animationSpeed * dVar23);
          local_f0 = (longlong)iVar19;
          MB_randRange((int)((double)animationSpeed * dVar31),iVar19);
          SpawnPart_16(uVar12,local_1b0,local_1c0,uVar20,uVar14);
          dVar25 = (double)local_e0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar15);
    }
    dVar27 = (double)local_f8;
    PlayMobySound(0,0,moby);
    auVar34 = ZEXT416(0xffffffff);
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar5 = 0.35;
    if (dVar27 - 20.0 < 0.0) {
      fVar5 = (float)(dVar27 * 0.017500000074505806);
    }
    GameCamera.offset0.amp = 0.4 - fVar5;
    auVar36 = loadVectorLeftIndexed(0xa4,0x3eacb4);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar34);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x168,0x9513c0);
    FUN_003fda38(auStack_1a0,lVar11 + 0x10,0,0);
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    DeleteMoby(moby);
  }
  else if (uVar2 == '\x03') {
    FastDecTimerS32(ZEXT48(kv) + 100);
    fVar5 = kv[1].kickVel[2];
    if (((fVar5 != 0.0) &&
        (*(char *)((int)fVar5 + 0x20) != -3 && *(char *)((int)fVar5 + 0x20) != -2)) &&
       ((fVar1 = (moby->pos).y - *(float *)((int)fVar5 + 0x14),
        fVar5 = (moby->pos).x - *(float *)((int)fVar5 + 0x10),
        SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 3.0 && (kv[1].kickVel[1] == 0.0)))) {
      moby->state = '\x02';
      PlayMobySound(2,0,moby);
    }
    local_f0 = (longlong)(int)(animationSpeed * 3600.5);
    if (((int)(animationSpeed * 3600.5) < (int)kv[1].kickVel[3]) &&
       (((kv[1].kickVel[2] == 0.0 ||
         (cVar3 = *(char *)((int)kv[1].kickVel[2] + 0x20), cVar3 == -3 || cVar3 == -2)) ||
        (local_f0 = (longlong)(int)(animationSpeed * 5400.5),
        (int)(animationSpeed * 5400.5) < (int)kv[1].kickVel[3])))) {
      moby->state = '\x05';
    }
    fVar5 = (g_heroMobyPtr->pos).y - (moby->pos).y;
    fVar1 = (g_heroMobyPtr->pos).x - (moby->pos).x;
    if ((0.5 <= SQRT(fVar1 * fVar1 + fVar5 * fVar5)) ||
       (0.25 <= ABS((moby->pos).z - g_heroPosition.z))) {
      iVar17 = CollMobySphere
                         (0x3ff0000000000000,lVar11 + 0x10,&DAT_003eacb4,0x10,lVar11,0);
      if (0 < iVar17) {
        pfVar18 = (float *)&g_CollMobyHits;
        do {
          if (((*(ushort *)((int)*pfVar18 + 0x34) & 0x1000) != 0) &&
             ((*pfVar18 != kv[1].kickVel[2] || (kv[1].kickVel[1] == 0.0)))) {
            moby->state = '\x04';
            return;
          }
          iVar15 = iVar15 + 1;
          pfVar18 = pfVar18 + 1;
        } while (iVar15 < iVar17);
      }
    }
    else {
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\x02') {
    fVar7 = kv[1].kickVel[2];
    dVar23 = (double)(moby->pos).y;
    dVar22 = (double)(moby->pos).x;
    fVar5 = (float)((double)*(float *)((int)fVar7 + 0x14) - dVar23);
    fVar1 = (float)((double)*(float *)((int)fVar7 + 0x10) - dVar22);
    fVar4 = (moby->pos).z;
    fVar7 = *(float *)((int)fVar7 + 0x18) - fVar4;
    fVar9 = SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar5 * fVar5);
    if (0.25 <= fVar9) {
      dVar24 = (double)g_FrameTime;
      fVar10 = (float)(dVar24 * 14.0) / fVar9;
      dVar25 = dVar27;
      if (0.0 - fVar9 < 0.0) {
        dVar25 = (double)(fVar7 * fVar10);
      }
      dVar28 = dVar27;
      if (0.0 - fVar9 < 0.0) {
        dVar28 = (double)(fVar5 * fVar10);
      }
      if (0.0 - fVar9 < 0.0) {
        dVar27 = (double)(fVar1 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar25 = (double)(fVar7 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar28 = (double)(fVar5 * fVar10);
      }
      if (fVar9 - 0.0 < 0.0) {
        dVar27 = (double)(fVar1 * fVar10);
      }
      (moby->pos).y = (float)(dVar23 + dVar28);
      (moby->pos).x = (float)(dVar22 + dVar27);
      (moby->pos).z = fVar4 + (float)(dVar24 * 4.0 + dVar25);
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x01') {
    uVar16 = MB_UpdateKick(moby,kv);
    if ((uVar16 & 1) == 0) {
      fVar6 = (moby->pos).z;
      uVar16 = (int)fVar6 >> 0x1f;
      if ((int)((uVar16 >> 1 ^ (uint)fVar6) - uVar16) < 0x40a00000) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x01') {
        local_f0 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
      }
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(8,0x3eacb4);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,100,
                         ZEXT48(kv));
      *(undefined4 *)((uint)(kv[1].kickVel + 1) & 0xfffffffc) = uVar8;
    }
  }
  return;
}



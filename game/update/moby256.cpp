// game/update/moby256.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0xed3ac-0xef6b8
#include "game/update/moby256.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1034.h"
#include "game/update/moby112.h"
#include "game/update/moby121.h"
#include "game/update/moby122.h"
#include "game/update/moby31.h"
#include "game/update/moby639.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "sdk/mUnk4.h"

// 0x00ed3ac (0x14 bytes)
void SECTION_HEADER_MOBY256(void)

{
  DAT_00728fc4 = 0x10000;
  return;
}


// 0x00ed3e0 (0x444 bytes)
MobyInstance *
Spawn_Moby256_Rocket
          (double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6,
          f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10)

{
  float fVar1;
  f32 *pfVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  MobyInstance *pMoby;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> local_70;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  
  local_50 = (float)param_1;
  local_4c = (float)param_2;
  local_48[0] = (float)param_3;
  pMoby = CreateMoby(ROCKET_0100);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_4;
    (pMoby->rotation).y = (float)param_5;
    pfVar2 = (f32 *)pMoby->pVar;
    uVar8 = ZEXT48(pfVar2);
    fVar5 = pMoby->scale * DAT_00728ff0;
    pMoby->drawDistance = 0xff;
    pMoby->scale = fVar5;
    if (param_10 == (MobyInstance *)0x0) {
      MB_SphericalToVector
                (g_FrameTime * 20.0,(float)param_4,(float)param_5,&local_60);
      param_10 = (MobyInstance *)
                 MB_ComputeRocketAim
                           (0x3fd6571840000000,param_6,local_48,*(undefined8 *)param_7,
                            *(undefined8 *)(param_7 + 2),CONCAT44(local_60,local_5c),
                            CONCAT44(local_58,local_54),&local_50,&local_4c);
    }
    pfVar2[4] = param_6;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar2[9] = 0.0;
    pfVar2[10] = 0.0;
    pfVar2[8] = 0.0;
    pfVar2[6] = (f32)param_10;
    pfVar2[0xe] = 1.4013e-45;
    fVar5 = g_FrameTime;
    pfVar2[0xd] = g_FrameTime * 100.0;
    if (param_10 != (MobyInstance *)0x0) {
      uVar6 = MB_GetPvarsIfMobyHasThem(param_10);
      iVar7 = (int)uVar6;
      fVar5 = g_FrameTime;
      if (iVar7 != 0) {
        *(ushort *)(iVar7 + 0x1e) = *(ushort *)(iVar7 + 0x1e) | 0x80;
        fVar5 = g_FrameTime;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        if (*(char *)(iVar7 + 0xb) != '\0') {
          pfVar2[0xe] = 0.0;
        }
        auVar10 = ZEXT416(0xfffffff8);
        auVar11 = loadVectorLeftIndexed(0xc,uVar6);
        auVar10 = vectorShiftRightWord
                            (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
        if (*(char *)(iVar7 + 0xc) != '\0') {
          auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar10,0);
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar9 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar10);
          auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
          *(undefined4 *)((uint)(pfVar2 + 0xd) & 0xfffffffc) = uVar4;
        }
      }
    }
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    pfVar2[0xb] = local_50;
    pfVar2[0xc] = local_4c;
    auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(0xc,0xed3c0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x14,uVar8);
    *(undefined4 *)((uint)(pfVar2 + 5) & 0xfffffffc) = uVar4;
    if (param_10 != (MobyInstance *)0x0) {
      *pfVar2 = (param_10->pos).x;
      pfVar2[1] = (param_10->pos).y;
      fVar1 = (param_10->pos).z;
      pfVar2[2] = fVar1;
      pfVar2[3] = (param_10->pos).w;
      pfVar2[7] = local_48[0];
      pfVar2[2] = fVar1 + local_48[0];
    }
    if (SQRT(DAT_00969e28 * DAT_00969e28 + DAT_00969e20 * DAT_00969e20 + DAT_00969e24 * DAT_00969e24
            ) <= fVar5 * 0.1) {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x18,0xed3c0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar10 = vectorSplatHalfWord(auVar9,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar10,0x3e,uVar8);
      *(undefined2 *)((int)pfVar2 + 0x3e) = uVar3;
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x14,0xed3c0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar10 = vectorSplatHalfWord(auVar9,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar10,0x3e,uVar8);
      *(undefined2 *)((int)pfVar2 + 0x3e) = uVar3;
    }
    auVar9 = vectorSplatHalfWord(auVar9,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar9,0x3c,uVar8);
    *(undefined2 *)(pfVar2 + 0xf) = uVar3;
    iVar7 = CollLine(local_70,param_7,0,g_heroMobyPtr,0);
    if (iVar7 != 0) {
      pMoby->setByGroup = '\x01';
      (pMoby->pos).x = g_CollOutput.ip.x;
      (pMoby->pos).y = g_CollOutput.ip.y;
      (pMoby->pos).z = g_CollOutput.ip.z;
      (pMoby->pos).w = g_CollOutput.ip.w;
    }
    UpdateMobyTransform(pMoby);
    MB_AddMobyToDynamicGroup(pMoby,&g_mobyIdListCount,0x1f);
    pMoby->scale = pMoby->scale * 2.0;
  }
  return pMoby;
}


// 0x00ed830 (0x5c bytes)
double M256_000ed830(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (0 < param_1) {
    dVar2 = dVar1;
    do {
      param_1 = param_1 + -1;
      dVar2 = (double)(float)((double)(float)((double)g_FrameTime * 100.0 - dVar2) *
                              (double)(DAT_0071f40c * 0.1) + dVar2);
      dVar1 = (double)(float)(dVar1 + dVar2);
    } while (0 < param_1);
  }
  return dVar1;
}


// 0x00ed970 (0x1d48 bytes)
// inlined: FastRSqrt @0xee438, FastRSqrt @0xee5a8, FastRSqrt @0xee6c4, FastRSqrt @0xee7b0, FastRSqrt @0xee8d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 256 */

void UpdateMoby_256_GC_Rocket(MobyInstance *moby)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar14;
  int iVar15;
  undefined8 uVar12;
  uint uVar16;
  longlong lVar13;
  longlong lVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> local_430;
  float local_420;
  float local_41c;
  float local_418;
  GPiece<16> local_410;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  undefined4 local_3d4;
  float local_3d0;
  undefined4 local_3cc;
  float local_3c8;
  undefined4 local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  GPiece<16> auStack_3b0;
  float local_3a0;
  float local_39c;
  float local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  GPiece<16> auStack_380;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  undefined4 local_338;
  undefined4 local_334;
  MobyInstance *local_330;
  undefined *local_32c;
  undefined1 local_328;
  undefined1 local_327;
  MOBY_OCLASSES local_326;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_310;
  float local_30c;
  float local_308;
  undefined4 local_304;
  float local_300;
  undefined4 local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  float local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  GPiece<64> auStack_2d0;
  GPiece<64> auStack_290;
  GPiece<64> auStack_250;
  float afStack_210 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180 [26];
  double local_118;
  longlong local_110;
  float local_100;
  float local_fc;
  
  lVar11 = (longlong)(int)moby;
  uStack_1c4 = uRam0072907c;
  uStack_1c8 = uRam00729078;
  uStack_1cc = uRam00729074;
  uStack_1d0 = _DAT_00729070;
  uStack_1b4 = uRam0072908c;
  uStack_1b8 = uRam00729088;
  uStack_1bc = uRam00729084;
  uStack_1c0 = _DAT_00729080;
  uStack_1a4 = uRam0072909c;
  uStack_1a8 = uRam00729098;
  uStack_1ac = uRam00729094;
  uStack_1b0 = _DAT_00729090;
  uStack_194 = uRam007290ac;
  uStack_198 = uRam007290a8;
  uStack_19c = uRam007290a4;
  uStack_1a0 = _DAT_007290a0;
  uStack_184 = uRam007290bc;
  uStack_188 = uRam007290b8;
  uStack_18c = uRam007290b4;
  uStack_190 = _DAT_007290b0;
  dVar29 = 0.0;
  local_420 = 0.0;
  local_41c = 0.0;
  pfVar4 = (float *)moby->pVar;
  local_418 = g_FrameTime * 8.0;
  local_180[0x19] = 8.0;
  fVar5 = pfVar4[6];
  dVar26 = 0.10000000149011612;
  dVar38 = 1.0;
  pfVar4[8] = (pfVar4[0xd] - pfVar4[8]) * 0.1 * DAT_0071f40c + pfVar4[8];
  dVar28 = dVar38;
  FastDecTimerS16(pfVar4 + 0xf);
  dVar19 = (double)FastIntToDouble(*(undefined2 *)(pfVar4 + 0xf));
  dVar20 = (double)FastIntToDouble(*(undefined2 *)((int)pfVar4 + 0x3e));
  local_3d8 = (float)(dVar19 / dVar20);
  local_3d4 = DAT_00969e2c;
  local_3e0 = DAT_00969e20 * local_3d8;
  local_3dc = DAT_00969e24 * local_3d8;
  local_3d8 = DAT_00969e28 * local_3d8;
  if (ScreenColorEffectEnabled == '\0') {
LAB_000edbf0:
    if (fVar5 != 0.0) {
      dVar19 = 150.5;
      local_110 = (longlong)(int)(animationSpeed * 0.5);
      if (((int)pfVar4[5] < (int)(animationSpeed * 150.5) - (int)(animationSpeed * 0.5)) &&
         (*(byte *)((int)fVar5 + 0x20) < 0x80)) {
        dVar40 = (double)*(float *)((int)fVar5 + 0x10);
        dVar33 = (double)(*(float *)((int)fVar5 + 0x18) + pfVar4[7]);
        dVar36 = (double)*(float *)((int)fVar5 + 0x14);
        dVar34 = (double)*(float *)((int)fVar5 + 0x1c);
        dVar32 = (double)(float)(dVar40 - (double)(moby->pos).x);
        dVar31 = (double)(float)(dVar36 - (double)(moby->pos).y);
        dVar30 = (double)(float)(dVar33 - (double)(moby->pos).z);
        dVar20 = dVar29;
        if (pfVar4[0xe] != 0.0) {
          local_3c0 = (float)(dVar40 - (double)*pfVar4);
          local_3bc = (float)(dVar36 - (double)pfVar4[1]);
          local_3b8 = (float)(dVar33 - (double)pfVar4[2]);
          local_3b4 = *(float *)((int)fVar5 + 0x1c);
          FastVecSubSelf(auStack_3b0,&local_3c0,&local_3e0);
          *pfVar4 = (float)dVar40;
          pfVar4[1] = (float)dVar36;
          pfVar4[2] = (float)dVar33;
          pfVar4[3] = (float)dVar34;
          dVar20 = (double)local_3bc;
          dVar33 = (double)local_3c0;
          dVar34 = (double)local_3b8;
          fVar8 = pfVar4[8] * pfVar4[8] -
                  (float)(dVar34 * dVar34 +
                         (double)(float)(dVar33 * dVar33 + (double)(float)(dVar20 * dVar20)));
          fVar2 = (float)(dVar34 * dVar30 +
                         (double)(float)(dVar33 * dVar32 + (double)(float)(dVar20 * dVar31))) * -2.0
          ;
          fVar9 = fVar8 * 2.0;
          fVar8 = SQRT(fVar2 * fVar2 -
                       -((float)(dVar30 * dVar30 +
                                (double)(float)(dVar32 * dVar32 + (double)(float)(dVar31 * dVar31)))
                        * fVar8 * 4.0));
          dVar34 = (double)((fVar8 - fVar2) / fVar9);
          dVar33 = (double)((-fVar2 - fVar8) / fVar9);
          if ((dVar34 <= dVar29) || (dVar33 <= dVar29)) {
            dVar20 = -1.0;
            if (dVar29 - dVar33 < 0.0) {
              dVar20 = dVar33;
            }
            if (dVar29 - dVar34 < 0.0) {
              dVar20 = dVar34;
            }
          }
          else {
            dVar20 = dVar33;
            if (dVar33 - dVar34 < 0.0) {
              dVar20 = dVar34;
            }
          }
        }
        if ((dVar20 <= dVar29) || ((double)(longlong)((double)animationSpeed * dVar19) <= dVar20)) {
          dVar19 = (double)FUN_005e8338(dVar32,dVar31);
          dVar20 = (double)FUN_005e8338((double)SQRT((float)(dVar32 * dVar32 +
                                                            (double)(float)(dVar31 * dVar31))),
                                        dVar30);
          dVar20 = -dVar20;
        }
        else {
          dVar32 = (double)(float)((double)local_3c0 * dVar20 + dVar32);
          dVar31 = (double)(float)((double)local_3bc * dVar20 + dVar31);
          dVar20 = (double)(float)((double)local_3b8 * dVar20 + dVar30);
          dVar19 = (double)FUN_005e8338(dVar32,dVar31);
          dVar20 = (double)FUN_005e8338((double)SQRT((float)(dVar32 * dVar32 +
                                                            (double)(float)(dVar31 * dVar31))),
                                        dVar20);
          dVar20 = -dVar20;
        }
        goto LAB_000edea4;
      }
    }
  }
  else if (fVar5 != 0.0) {
    fVar8 = GameCamera.posY - *(float *)((int)fVar5 + 0x14);
    local_3d0 = *(float *)((int)fVar5 + 0x10);
    fVar9 = GameCamera.posZ - *(float *)((int)fVar5 + 0x18);
    local_3cc = *(undefined4 *)((int)fVar5 + 0x14);
    local_3c4 = *(undefined4 *)((int)fVar5 + 0x1c);
    local_3c8 = *(float *)((int)fVar5 + 0x18) + pfVar4[7];
    DrawTargetCrosshair
              (ABS(-(SQRT(fVar9 * fVar9 +
                          (GameCamera.posX - local_3d0) * (GameCamera.posX - local_3d0) +
                          fVar8 * fVar8) * 0.02 * 0.35 - 0.5)),moby,0xff0fffff,0xed88c);
    goto LAB_000edbf0;
  }
  local_110 = (longlong)(int)(animationSpeed * 0.5);
  if ((int)pfVar4[5] < (int)(animationSpeed * 150.5) - (int)(animationSpeed * 0.5)) {
    dVar19 = (double)pfVar4[0xb];
    dVar20 = (double)pfVar4[0xc];
  }
  else {
    dVar19 = (double)(moby->rotation).z;
    dVar20 = (double)(moby->rotation).y;
  }
LAB_000edea4:
  pfVar14 = pfVar4 + 9;
  dVar30 = 3.1415927410125732;
  dVar31 = 6.2831854820251465;
  if (fVar5 == 0.0) {
    dVar32 = 4.71238899230957;
    dVar19 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar19,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 4.712389),pfVar14,&DAT_000ed88c,
                                pfVar14);
    (moby->rotation).z = (float)dVar19;
    dVar19 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar20,
                                (double)(float)((double)DAT_0071f418 * dVar31),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(float)((double)g_FrameTime * dVar32));
  }
  else {
    dVar19 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar19,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 6.2831855),pfVar14,&DAT_000ed88c,
                                pfVar14);
    (moby->rotation).z = (float)dVar19;
    dVar19 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar20,
                                (double)(float)((double)DAT_0071f418 * dVar31),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(float)((double)g_FrameTime * dVar31));
  }
  (moby->rotation).y = (float)dVar19;
  MB_SphericalToVector(pfVar4[8],(moby->rotation).z,(float)-dVar19,&local_400);
  local_3a0 = 0.0;
  local_39c = 0.0;
  local_398 = 0.0;
  local_394 = 0;
  dVar30 = -1.0;
  dVar19 = (double)MB_randRangeFloat(-1.0,(float)dVar28);
  local_3a0 = (float)dVar19;
  dVar19 = (double)MB_randRangeFloat((float)dVar30,(float)dVar28);
  local_39c = (float)dVar19;
  dVar19 = (double)MB_randRangeFloat((float)dVar30,(float)dVar28);
  local_398 = (float)dVar19;
  local_118 = 0.20000000298023224;
  dVar19 = (double)MB_randRangeFloat((float)dVar26,0.2);
  dVar20 = (double)SQRT(local_398 * local_398 + local_3a0 * local_3a0 + local_39c * local_39c);
  fVar5 = (float)((double)(float)(dVar19 * (double)g_FrameTime) / dVar20);
  dVar19 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar19 = (double)(local_3a0 * fVar5);
  }
  dVar31 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar31 = (double)(local_39c * fVar5);
  }
  dVar32 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar32 = (double)(local_398 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar19 = (double)(local_3a0 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar31 = (double)(local_39c * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar32 = (double)(local_398 * fVar5);
  }
  local_3a0 = (float)dVar19;
  local_39c = (float)dVar31;
  local_398 = (float)dVar32;
  dVar19 = (double)MB_randRangeFloat
                             ((float)((double)g_FrameTime * dVar26),g_FrameTime)
  ;
  dVar20 = (double)SQRT(local_3f8 * local_3f8 + local_400 * local_400 + local_3fc * local_3fc);
  fVar5 = (float)(-dVar19 / dVar20);
  dVar19 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar19 = (double)(local_400 * fVar5);
  }
  dVar26 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar26 = (double)(local_3fc * fVar5);
  }
  dVar31 = dVar29;
  if (dVar29 - dVar20 < 0.0) {
    dVar31 = (double)(local_3f8 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar19 = (double)(local_400 * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar26 = (double)(local_3fc * fVar5);
  }
  if (dVar20 - dVar29 < 0.0) {
    dVar31 = (double)(local_3f8 * fVar5);
  }
  local_3a0 = (float)((double)local_3a0 + dVar19);
  local_39c = (float)((double)local_39c + dVar26);
  local_398 = (float)((double)local_398 + dVar31);
  MB_randRangeFloat((float)dVar29,(float)dVar28);
  dVar19 = 60.5;
  local_110 = (longlong)(int)(animationSpeed * 60.5);
  uVar27 = 0x40e3880000000000;
  uVar41 = 0x408f400000000000;
  iVar15 = SpawnPart_44
                     (0x40e3880000000000,0x408f400000000000,dVar28,0xbf2a36e2e0000000,dVar29,
                      local_410,&local_3a0,(int)(animationSpeed * 60.5),0x7f,FUN_00606060,3);
  if (iVar15 != 0) {
    uVar3 = *DAT_00a52860;
    *(undefined1 *)(iVar15 + 3) = 0x44;
    *(undefined1 *)(iVar15 + 2) = uVar3;
  }
  lVar17 = lVar11 + 0x10;
  local_110 = (longlong)(int)(animationSpeed * 6.5);
  SpawnPart_44
            (uVar27,uVar41,dVar28,0xbf3a36e2e0000000,dVar29,lVar17,&local_3a0,
             (int)(animationSpeed * 6.5),0x7f,&DAT_00b0b0b0,3);
  local_390 = (moby->transform).v2.x * 0.02;
  local_38c = (moby->transform).v2.y * 0.02;
  local_388 = (moby->transform).v2.z * 0.02;
  local_384 = (moby->transform).v2.w * 0.02;
  dVar20 = (double)MB_randRot();
  MB_RotateQuatAxisAngle((float)dVar20,&local_390,&local_390);
  dVar20 = 5.5;
  local_110 = (longlong)(int)(animationSpeed * 5.5);
  SpawnPart_21(0x40d3880000000000,local_410,&local_390,0x4f007fff,0x1fffffff);
  FastVecAddSelf(auStack_380,&local_400,&local_3e0);
  fVar5 = (moby->pos).x + local_400;
  fVar8 = (moby->pos).y + local_3fc;
  local_3f8 = (moby->pos).z + local_3f8;
  local_326 = moby->oClass;
  (moby->pos).x = fVar5;
  (moby->pos).y = fVar8;
  (moby->pos).z = local_3f8;
  if ((((double)fVar5 < dVar29) || ((double)fVar8 < dVar29)) || ((double)local_3f8 < dVar29)) {
    MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
    DeleteMoby(moby);
  }
  else {
    local_32c = &DAT_00830000;
    dVar32 = (double)(local_400 * local_400 + local_3fc * local_3fc);
    dVar33 = 3.0;
    local_324 = 0x40400000;
    local_320 = 1;
    dVar26 = dVar29;
    dVar31 = dVar29;
    if ((double)(float)SQRT(dVar32) != dVar29) {
      dVar26 = 1.0 / SQRT(dVar32);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28)
                               * (double)(float)(dVar26 * 0.5) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28)
                               * (double)(float)(dVar26 * 0.5) + dVar26);
      fVar5 = (float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28) *
                      (double)(float)(dVar26 * 0.5) + dVar26);
      dVar31 = (double)(local_400 * fVar5);
      dVar26 = (double)(local_3fc * fVar5);
    }
    local_340 = (float)dVar31;
    local_33c = (float)dVar26;
    local_338 = 0x3f800000;
    local_334 = 0x45afdf66;
    local_328 = 3;
    local_327 = 1;
    local_330 = moby;
    iVar15 = CollLine(local_430,lVar17,0,g_heroMobyPtr,&local_340);
    if (iVar15 == 0) {
      iVar15 = FastDecTimerS32(pfVar4 + 5);
      if ((iVar15 != 0) ||
         (fVar5 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
         lVar13 = 0, dVar26 = dVar29, dVar31 = dVar28, dVar32 = dVar29,
         260.0 < SQRT(fVar8 * fVar8 + fVar5 * fVar5))) {
        MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      dVar26 = dVar29;
      dVar31 = dVar28;
      dVar32 = dVar29;
      if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        lVar13 = 0;
        if (0 < g_CollOutput.poly) {
          moby->setByGroup = '\x01';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          fVar5 = g_CollOutput.v0.y - g_CollOutput.v1.y;
          fVar8 = g_CollOutput.v0.x - g_CollOutput.v1.x;
          fVar9 = g_CollOutput.v0.z - g_CollOutput.v1.z;
          local_3e4 = g_CollOutput.v0.w;
          dVar34 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
          dVar31 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar2 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar31 = (double)(fVar8 * fVar2);
            dVar26 = (double)(fVar5 * fVar2);
            dVar32 = (double)(fVar9 * fVar2);
          }
          local_3f0 = (float)dVar31;
          local_3ec = (float)dVar26;
          local_3e8 = (float)dVar32;
          FastVecNormalize(&local_420,&local_400,0xa10980);
          dVar31 = (double)SQRT(local_418 * local_418 + 0.0);
          dVar32 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                           g_CollOutput.normal.x * g_CollOutput.normal.x +
                           g_CollOutput.normal.y * g_CollOutput.normal.y);
          fVar5 = (float)((double)(g_FrameTime * 2.0) / dVar31);
          dVar26 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          dVar34 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar34 = (double)(fVar5 * 0.0);
          }
          dVar36 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar34 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          local_420 = (float)dVar26;
          local_41c = (float)dVar34;
          local_418 = (float)dVar36;
          if ((double)(float)SQRT(dVar32) == dVar29) {
            lVar13 = 0;
            dVar26 = dVar29;
            dVar31 = dVar29;
            dVar32 = dVar29;
          }
          else {
            dVar26 = 1.0 / SQRT(dVar32);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar5 = (float)(-(double)(float)((double)(float)(dVar32 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            lVar13 = 0;
            dVar26 = (double)(g_CollOutput.normal.y * fVar5);
            dVar31 = (double)(g_CollOutput.normal.z * fVar5);
            dVar32 = (double)(g_CollOutput.normal.x * fVar5);
          }
        }
      }
      else {
        lVar13 = 0;
        if ((g_CollOutput.pMoby != g_heroMobyPtr) &&
           (lVar13 = 0, g_CollOutput.pMoby != (MobyInstance *)pfVar4[4])) {
          moby->setByGroup = '\x02';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          fVar5 = g_CollOutput.v0.y - g_CollOutput.v1.y;
          fVar8 = g_CollOutput.v0.x - g_CollOutput.v1.x;
          fVar9 = g_CollOutput.v0.z - g_CollOutput.v1.z;
          local_3e4 = g_CollOutput.v0.w;
          dVar34 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
          dVar31 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar2 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar31 = (double)(fVar8 * fVar2);
            dVar26 = (double)(fVar5 * fVar2);
            dVar32 = (double)(fVar9 * fVar2);
          }
          local_3f0 = (float)dVar31;
          local_3ec = (float)dVar26;
          local_3e8 = (float)dVar32;
          FastVecNormalize(&local_420,&local_400,0xa10980);
          dVar31 = (double)SQRT(local_418 * local_418 + 0.0);
          dVar34 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                           g_CollOutput.normal.x * g_CollOutput.normal.x +
                           g_CollOutput.normal.y * g_CollOutput.normal.y);
          fVar5 = (float)((double)(g_FrameTime * 2.0) / dVar31);
          dVar26 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          dVar32 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar32 = (double)(fVar5 * 0.0);
          }
          dVar36 = dVar29;
          if (dVar29 - dVar31 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar26 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar32 = (double)(fVar5 * 0.0);
          }
          if (dVar31 - dVar29 < 0.0) {
            dVar36 = (double)(local_418 * fVar5);
          }
          local_420 = (float)dVar26;
          local_41c = (float)dVar32;
          local_418 = (float)dVar36;
          lVar13 = lVar11;
          dVar26 = dVar29;
          dVar31 = dVar29;
          dVar32 = dVar29;
          if ((double)(float)SQRT(dVar34) != dVar29) {
            dVar26 = 1.0 / SQRT(dVar34);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 -
                                                     dVar28) * (double)(float)(dVar26 * 0.5) +
                                    dVar26);
            fVar5 = (float)(-(double)(float)((double)(float)(dVar34 * dVar26) * dVar26 - dVar28) *
                            (double)(float)(dVar26 * 0.5) + dVar26);
            dVar26 = (double)(g_CollOutput.normal.y * fVar5);
            dVar31 = (double)(g_CollOutput.normal.z * fVar5);
            dVar32 = (double)(g_CollOutput.normal.x * fVar5);
          }
        }
      }
    }
    if (moby->setByGroup != '\0') {
      local_180[0x18] = 2.0;
      uVar12 = CollMobySphere(0x4000000000000000,lVar17);
      uVar41.piece<0,4>() = (moby->pos).x;
      uVar41.piece<4,4>() = (moby->pos).y;
      uVar10.piece<0,4>() = (moby->pos).z;
      uVar10.piece<4,4>() = (moby->pos).w;
      MB_DamageMobyList
                (dVar33,dVar38,dVar38,lVar11,3,uVar41,uVar10,&DAT_00a14a00,uVar12,lVar13,
                 &DAT_00810000);
      local_310 = 0;
      local_2f0 = (float)dVar26;
      local_2e0 = 0;
      local_30c = (float)dVar31;
      local_2fc = 0;
      local_2dc = 0;
      local_2f8 = (float)dVar32;
      local_2e8 = 0;
      local_2d8 = 0;
      local_300 = (float)-dVar31;
      local_2ec = (float)-dVar32;
      local_308 = (float)-dVar26;
      local_304 = 0;
      local_2f4 = 0;
      local_2e4 = 0;
      local_2d4 = 0;
      FastVecMtx4Mul(auStack_2d0,&local_310,&local_310);
      dVar28 = 1.570796251296997;
      dVar32 = 3.141592502593994;
      iVar15 = 0;
      dVar34 = -3.141592502593994;
      dVar36 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar37 = 2.601886990305502e-06;
      dVar39 = 8.5;
      dVar42 = 16.5;
      dVar26 = 5.0;
      dVar31 = 120.5;
      do {
        if (moby->setByGroup == '\x01') {
          local_100 = (float)dVar31;
          dVar21 = (double)MB_randRot();
          dVar22 = (double)(float)(dVar21 + dVar28);
          dVar31 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar31 = dVar22;
          }
          dVar24 = (double)(float)(dVar34 - dVar22);
          if ((double)(float)(dVar34 - dVar22) - dVar31 < 0.0) {
            dVar24 = dVar31;
          }
          dVar31 = (double)(float)(dVar24 * dVar24);
          dVar23 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar24));
          dVar22 = (double)(float)(dVar31 * dVar23);
          FastMtxScale
                    ((double)(float)(dVar38 - (double)(float)((double)(float)(dVar31 * dVar22) *
                                                              dVar37 + (double)(float)(dVar22 * 
                                                  dVar35 + (double)(float)(dVar23 * dVar40 +
                                                                          (double)(float)((double)(
                                                  float)(dVar31 * dVar24) * dVar36 + dVar24))))),
                     afStack_210,auStack_2d0);
          dVar31 = (double)(float)(dVar32 - dVar21);
          if (dVar21 - (double)(float)(dVar32 - dVar21) < 0.0) {
            dVar31 = dVar21;
          }
          dVar22 = (double)(float)(dVar34 - dVar21);
          if ((double)(float)(dVar34 - dVar21) - dVar31 < 0.0) {
            dVar22 = dVar31;
          }
          dVar31 = (double)(float)(dVar22 * dVar22);
          dVar24 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar22));
          dVar21 = (double)(float)(dVar31 * dVar24);
          FastMtxScale
                    ((double)(float)((double)(float)(dVar31 * dVar21) * dVar37 +
                                    (double)(float)(dVar21 * dVar35 +
                                                   (double)(float)(dVar24 * dVar40 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar22) * dVar36 + dVar22)))),auStack_250
                     ,&local_310);
          FastVecAdd(auStack_250,auStack_250,afStack_210);
          FastMtx4Identity(afStack_210);
          FastVecAdd(auStack_290,auStack_250,afStack_210);
          FUN_005e825c(&local_360,&local_3f0,auStack_290);
          dVar31 = (double)MB_randRangeFloat((float)dVar39,(float)dVar42);
          dVar23 = (double)SQRT(local_358 * local_358 +
                                local_360 * local_360 + local_35c * local_35c);
          fVar5 = (float)((double)(float)(dVar31 * (double)g_FrameTime) / dVar23);
          dVar22 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar22 = (double)(local_360 * fVar5);
          }
          dVar24 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar24 = (double)(local_35c * fVar5);
          }
          dVar21 = dVar29;
          if (dVar29 - dVar23 < 0.0) {
            dVar21 = (double)(local_358 * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar22 = (double)(local_360 * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar24 = (double)(local_35c * fVar5);
          }
          if (dVar23 - dVar29 < 0.0) {
            dVar21 = (double)(local_358 * fVar5);
          }
        }
        else {
          local_fc = (float)dVar26;
          local_100 = (float)dVar31;
          dVar26 = (double)MB_randRangeFloat((float)dVar39,(float)dVar42);
          dVar21 = (double)(float)(dVar26 * (double)g_FrameTime);
          dVar26 = (double)MB_randRot();
          dVar31 = (double)MB_randRot();
          MB_SphericalToVector((float)dVar21,(float)dVar26,(float)dVar31,&local_360);
          dVar22 = (double)local_360;
          dVar24 = (double)local_35c;
          dVar26 = (double)local_fc;
          dVar21 = (double)local_358;
        }
        dVar31 = (double)local_100;
        local_360 = (float)(dVar22 + (double)local_420);
        local_35c = (float)(dVar24 + (double)local_41c);
        local_358 = (float)((double)g_FrameTime * dVar26 + dVar21) + local_418;
        iVar18 = (int)((double)animationSpeed * dVar31);
        local_110 = (longlong)iVar18;
        uVar41 = MB_randRange((int)((double)animationSpeed * dVar19),iVar18);
        SpawnPart_15
                  (uVar27,lVar17,&local_360,0x4f007fff,0x1f00007f,0x1f000000,uVar41,1,
                   0xffffffffffffffff);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      local_370 = 0.0;
      local_36c = 0.0;
      local_368 = 0.0;
      local_364 = 0;
      dVar28 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
      local_370 = (float)dVar28;
      dVar28 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
      local_36c = (float)dVar28;
      dVar26 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
      dVar31 = (double)(GameCamera.posY - (moby->pos).y);
      dVar32 = (double)(GameCamera.posX - (moby->pos).x);
      dVar28 = (double)(GameCamera.posZ - (moby->pos).z);
      dVar40 = (double)local_36c;
      dVar35 = (double)local_370;
      dVar22 = 0.5;
      dVar36 = (double)(float)(dVar32 * dVar32 + (double)(float)(dVar31 * dVar31));
      dVar21 = (double)local_180[0x18];
      dVar39 = (double)SQRT((float)(dVar26 * dVar26 +
                                   (double)(float)(dVar35 * dVar35 +
                                                  (double)(float)(dVar40 * dVar40))));
      dVar24 = (double)SQRT((float)(dVar28 * dVar28 + dVar36));
      dVar34 = (double)(float)(dVar24 * 0.5 + dVar28);
      dVar36 = (double)SQRT((float)(dVar34 * dVar34 + dVar36));
      dVar37 = (double)(float)((double)((float)(dVar24 * local_118) * g_FrameTime) /
                              dVar39);
      dVar42 = (double)(float)((double)((float)(dVar24 * dVar21) * g_FrameTime) / dVar36);
      dVar28 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar28 = (double)(float)(dVar40 * dVar37);
      }
      dVar23 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar23 = (double)(float)(dVar35 * dVar37);
      }
      dVar25 = dVar29;
      if (dVar29 - dVar39 < 0.0) {
        dVar25 = (double)(float)(dVar26 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar28 = (double)(float)(dVar40 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar23 = (double)(float)(dVar35 * dVar37);
      }
      if (dVar39 - dVar29 < 0.0) {
        dVar25 = (double)(float)(dVar26 * dVar37);
      }
      dVar26 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar26 = (double)(float)(dVar31 * dVar42);
      }
      dVar40 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar40 = (double)(float)(dVar32 * dVar42);
      }
      dVar35 = dVar29;
      if (dVar29 - dVar36 < 0.0) {
        dVar35 = (double)(float)(dVar34 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar26 = (double)(float)(dVar31 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar40 = (double)(float)(dVar32 * dVar42);
      }
      if (dVar36 - dVar29 < 0.0) {
        dVar35 = (double)(float)(dVar34 * dVar42);
      }
      local_36c = (float)(dVar28 + dVar26);
      local_370 = (float)(dVar23 + dVar40);
      local_368 = (float)(dVar25 + dVar35);
      dVar28 = 10.0;
      fVar5 = SQRT(local_368 * local_368 + local_370 * local_370 + local_36c * local_36c);
      if (g_FrameTime * 10.0 < fVar5) {
        fVar5 = (g_FrameTime * 10.0) / fVar5;
        local_370 = local_370 * fVar5;
        local_36c = local_36c * fVar5;
        local_368 = local_368 * fVar5;
      }
      iVar15 = (int)((double)animationSpeed * 90.5);
      local_110 = (longlong)iVar15;
      uVar27 = MB_randRange((int)((double)animationSpeed * dVar19),iVar15);
      FUN_0020bb70(lVar17,&local_370,uVar27,0,0);
      iVar15 = 3;
      if (dVar24 < 6.0) {
        uVar16 = FastDoubleToInt(dVar24);
        iVar15 = ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0);
      }
      iVar18 = 0;
      dVar19 = dVar29;
      if (dVar24 - 7.0 < 0.0) {
        dVar19 = (double)(float)(7.0 - dVar24);
      }
      if (0 < iVar15) {
        dVar26 = (double)local_180[0x19];
        uVar27 = 0x41186a0000000000;
        dVar40 = 15.5;
        dVar36 = 20.5;
        dVar34 = 25.5;
        dVar32 = 30.5;
        dVar31 = 10.5;
        do {
          dVar35 = (double)MB_randRangeFloat((float)dVar26,(float)dVar28);
          dVar37 = (double)g_FrameTime;
          local_180[0] = 2.1569206e+09;
          local_180[1] = 2.1569206e+09;
          local_180[2] = 2.155872e+09;
          local_180[3] = 2.1548234e+09;
          local_180[4] = 4.6566126e-10;
          local_180[5] = 4.6566126e-10;
          local_180[6] = 1.1675459e-10;
          dVar39 = (double)(float)(dVar35 * dVar37 - (double)(float)(dVar37 * dVar19));
          local_180[7] = 1.1669775e-10;
          local_180[8] = 1.166409e-10;
          local_180[9] = 1.1641642e-10;
          local_180[10] = 1.1641532e-10;
          local_180[0xb] = 0.5;
          lVar13 = MB_randInt(dVar35,dVar37,(double)(float)(dVar37 * dVar19),6);
          uVar6 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2));
          lVar13 = MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar36);
          local_110 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar40),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar32);
          local_110 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar34),iVar1);
          SpawnPart_11(uVar27,dVar39,lVar17,&local_420,uVar6,uVar7);
          iVar1 = (int)((double)animationSpeed * dVar31);
          local_110 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar36);
          local_110 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar40),iVar1);
          SpawnPart_11
                    (uVar27,(double)(float)(dVar39 * dVar22),lVar17,&local_420,0x7fffffff,0xffffff);
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar15);
      }
      iVar15 = 0;
      uVar27 = 0x41086a0000000000;
      dVar19 = 20.5;
      dVar28 = 35.5;
      do {
        local_180[0xc] = 2.1569206e+09;
        local_180[0xd] = 2.1569206e+09;
        local_180[0xe] = 2.155872e+09;
        local_180[0xf] = 2.1548234e+09;
        local_180[0x10] = 4.6566126e-10;
        local_180[0x11] = 4.6566126e-10;
        local_180[0x12] = 1.1675459e-10;
        local_180[0x13] = 1.1669775e-10;
        local_180[0x14] = 1.166409e-10;
        local_180[0x15] = 1.1641642e-10;
        local_180[0x16] = 1.1641532e-10;
        local_180[0x17] = 0.5;
        local_350 = 0.0;
        local_34c = 0.0;
        local_348 = 0.0;
        local_344 = 0;
        dVar20 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_350 = (float)dVar20;
        dVar20 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_34c = (float)dVar20;
        dVar20 = (double)MB_randRangeFloat((float)dVar30,(float)dVar38);
        local_348 = (float)dVar20;
        dVar20 = (double)MB_randRangeFloat((float)dVar29,(float)dVar33);
        dVar26 = (double)SQRT(local_348 * local_348 + local_350 * local_350 + local_34c * local_34c)
        ;
        fVar5 = (float)((double)(float)(dVar20 * (double)g_FrameTime) / dVar26);
        dVar20 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar20 = (double)(local_350 * fVar5);
        }
        dVar31 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar31 = (double)(local_34c * fVar5);
        }
        dVar32 = dVar29;
        if (dVar29 - dVar26 < 0.0) {
          dVar32 = (double)(local_348 * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar20 = (double)(local_350 * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar31 = (double)(local_34c * fVar5);
        }
        if (dVar26 - dVar29 < 0.0) {
          dVar32 = (double)(local_348 * fVar5);
        }
        local_350 = (float)dVar20;
        local_34c = (float)dVar31;
        local_348 = (float)dVar32;
        lVar13 = MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x30);
        lVar13 = MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_180 + (int)(lVar13 << 2) + 0x48);
        iVar18 = (int)((double)animationSpeed * dVar28);
        local_110 = (longlong)iVar18;
        MB_randRange((int)((double)animationSpeed * dVar19),iVar18);
        SpawnPart_8(uVar27,lVar17,&local_350,uVar6,uVar7);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      uVar16 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
      if (((int)((uVar16 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar24)) {
        uVar27 = 0x4010000000000000;
        local_110 = (longlong)(int)(animationSpeed * 15.5);
        FUN_001d4d88(0x4010000000000000,lVar11,lVar17,&local_420,uVar16,(int)(animationSpeed * 15.5)
                     ,0x7f,0x7f,0x7f);
        local_110 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(uVar27,lVar11,lVar17,&local_420);
      }
      local_110 = (longlong)(int)((double)animationSpeed * dVar19);
      FUN_001d4d88(0x4010000000000000,lVar11,lVar17,&local_420,0x30,
                   (int)((double)animationSpeed * dVar19),0x7f,0x7f,0);
      local_110 = (longlong)(int)(animationSpeed * 19.5);
      FUN_001d4d88(dVar21,lVar11,lVar17,&local_420,0x20,(int)(animationSpeed * 19.5),0xff,0xff,0xff)
      ;
      local_400 = 0.0;
      moby->setByGroup = '\0';
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      fVar5 = 0.35;
      if (dVar24 - 20.0 < 0.0) {
        fVar5 = (float)(dVar24 * 0.017500000074505806);
      }
      GameCamera.offset0.amp = 0.4 - fVar5;
      auVar45 = loadVectorLeftIndexed(0xb4,0xed88c);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar44);
      auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x168,0x9513c0);
      PlayMobySound(0,0,moby);
      FUN_003fda38(&uStack_1d0,lVar17,0,0);
      MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
      DeleteMoby(moby);
    }
  }
  return;
}



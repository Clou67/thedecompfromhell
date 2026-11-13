// game/update/moby849.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 33 functions, 0x486008-0x48d86c
#include <stdio.h>
#include "game/update/moby849.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby122.h"
#include "game/update/moby13.h"
#include "game/update/moby157.h"
#include "game/update/moby58.h"
#include "game/update/moby639.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/sce.h"
#include "sdk/xUnk5.h"

// 0x0486008 (0xd8 bytes)
void FUN_00486008(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(DOOR_LEFT|TRESPASSER_0050);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\x01';
    puVar3 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_3;
    (pMVar4->pos).y = param_3[1];
    fVar1 = param_3[2];
    pMVar4->drawDistance = 0x7e;
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_3[3];
    *puVar3 = *param_2;
    uVar2 = param_2[1];
    puVar3[5] = param_5;
    puVar3[1] = uVar2;
    uVar2 = param_2[2];
    puVar3[3] = (float)param_1;
    puVar3[2] = uVar2;
    puVar3[4] = param_4;
    puVar3[6] = 0;
  }
  return;
}


// 0x04860e0 (0x14 bytes)
void M849_004860e0(void)

{
  DAT_008ad10c = 0x10000;
  return;
}


// 0x04860f8 (0x74 bytes)
undefined8 M849_004860f8(void)

{
  if (g_heroStateType < 5) {
    if (1 < g_heroStateType) {
      if (g_heroStateType == 3) {
        return 1;
      }
      if (g_heroState == TAKING_DAMAGE_LAVA) {
        return 1;
      }
      return 0;
    }
    if (g_heroStateType < 0) {
      return 1;
    }
  }
  else if (g_heroStateType < 0xc) {
    if (5 < g_heroStateType) {
      return 1;
    }
  }
  else if (0xc < g_heroStateType) {
    return 1;
  }
  return 0;
}


// 0x048616c (0xac bytes)
void M849_0048616c(longlong param_1,MobyInstance *param_2,undefined8 param_3)

{
  GPiece<64> auStack_e0;
  GPiece<64> auStack_a0;
  Vec4 aVStack_60 [4];
  
  FastEulerToMtx1(auStack_e0,param_3);
  FastMtxCopyNoTranslate(auStack_a0,param_1 + 0xc0);
  FastVecMtx4Mul(aVStack_60,auStack_a0,auStack_e0);
  FastApplyTransform(&(param_2->transform).v0,aVStack_60);
  param_2->modeBits = param_2->modeBits | NO_POST_UPDATE;
  PostUpdateMobyLockTransform(param_2);
  return;
}


// 0x0486220 (0x214 bytes)
undefined8
M849_00486220
          (undefined8 param_1,undefined8 param_2,int param_3,int param_4,float *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar7 = 0;
  puVar2 = (undefined4 *)**(int **)(*(int *)(param_3 + 0x24) + 0x2c);
  if ((((puVar2 != (undefined4 *)0x0) &&
       (uVar6 = (*(code *)*puVar2)(param_3,param_5,param_1), (int)uVar6 == 2)) &&
      (*(short *)(param_4 + 0x68) != 3)) &&
     (DAT_0096bd58 + DAT_0096bd5c <
      (int)(((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) & 0xfffffffb) +
           10))) {
    cVar1 = *(char *)(*(int *)(param_4 + 0x70) + 3);
    if (*(char *)(param_3 + 0x53) != cVar1) {
      MB_SetAnimation(param_3,cVar1,0,(int)(animationSpeed * 10.5));
    }
    *(undefined4 *)(param_4 + 0x6c) = 0;
    *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
    fVar3 = *(float *)(param_3 + 0x14) - param_5[1];
    fVar4 = *(float *)(param_3 + 0x10) - *param_5;
    *(undefined2 *)(param_4 + 0x68) = 3;
    piVar5 = &DAT_0096bd30;
    *(float *)(param_4 + 100) = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    iVar8 = ((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) & 0xfffffffb) +
            10;
    if (0 < iVar8) {
      do {
        if (*piVar5 == 0) {
          *(short *)(param_4 + 0x6a) = (short)iVar7;
          (&DAT_0096bd30)[iVar7] = param_3;
          DAT_0096bd5c = DAT_0096bd5c + 1;
          return uVar6;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar7 < iVar8);
    }
  }
  return uVar6;
}


// 0x0486434 (0x50 bytes)
undefined8 M849_00486434(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)*puVar1)();
  }
  return uVar2;
}


// 0x0486484 (0x68 bytes)
undefined8 M849_00486484(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)*puVar1)(param_1,param_2);
  }
  return uVar2;
}


// 0x04864f0 (0x104 bytes)
void M849_004864f0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  GetBonePosition(param_1,0,param_4);
  if ((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) {
    *param_2 = GameCamera.rot.radius;
    *param_3 = -GameCamera.rot.elevation;
    fVar2 = GameCamera.orientMtx.forward.y;
    fVar1 = GameCamera.orientMtx.forward.x;
    param_4[2] = GameCamera.orientMtx.forward.z * 1.2 + *(float *)(param_1 + 0x18);
    *param_4 = fVar1 * 1.2 + g_heroPosition.x;
    param_4[1] = fVar2 * 1.2 + g_heroPosition.y;
  }
  else if (DAT_0096bfa8 == 1) {
    *param_2 = DAT_0096a368;
    *param_3 = *(float *)(param_1 + 0x44);
  }
  else {
    *param_2 = DAT_0096a368;
    *param_3 = DAT_0096a364;
  }
  return;
}


// 0x0486608 (0x220 bytes)
void M849_00486608(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  short *psVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  
  if (((((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfd && param_1->state != 0xfe)) &&
       (iVar4 = MB_randInt(10), iVar4 == 0)) &&
      ((((param_1 != (MobyInstance *)0x0 && (param_1->pClass != (MobyClass *)0x0)) &&
        ((short)param_1->pClass->mode_bits == 0x13)) ||
       (bVar5 = MB_isAmmo(param_1), bVar5)))) &&
     (fVar1 = (param_1->pos).y - g_heroPosition.y, fVar2 = (param_1->pos).x - g_heroPosition.x,
     fVar3 = (param_1->pos).z - g_heroPosition.z,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 30.0)) {
    iVar4 = 0;
    psVar6 = &DAT_010db6d8;
    pfVar7 = (float *)&DAT_010db610;
    dVar9 = 0.30000001192092896;
    dVar10 = 0.10000000149011612;
    dVar11 = 2.0;
    uVar12 = 0;
    do {
      if (*psVar6 < 8) {
        return;
      }
      fVar1 = (param_1->pos).y - pfVar7[1];
      fVar2 = (param_1->pos).x - *pfVar7;
      fVar3 = (param_1->pos).z - pfVar7[2];
      dVar8 = (double)(float)((double)(longlong)iVar4 * dVar9 + dVar10);
      if (dVar8 - dVar11 < 0.0) {
        dVar8 = dVar11;
      }
      if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8) {
        if (((param_1 == (MobyInstance *)0x0) || (param_1->pClass == (MobyClass *)0x0)) ||
           ((short)param_1->pClass->mode_bits != 0x13)) {
          M1449_CollectAmmo(param_1);
        }
        else {
          M16_00240f38(uVar12,uVar12,param_1,g_heroMobyPtr);
        }
      }
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar4 < 10);
  }
  return;
}


// 0x0486828 (0xa8 bytes)
undefined8 FUN_00486828(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 0x20) == -2)) || (*(char *)(param_1 + 0x20) == -3)) {
    uVar2 = 0;
  }
  else if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x24) == 0)) {
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0x10);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)*puVar1)();
      if ((int)uVar2 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


// 0x04868d8 (0x2a4 bytes)
void M849_004868d8(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  longlong lVar14;
  double dVar15;
  float local_30 [8];
  
  if (DAT_008ad150 != 0) {
    DAT_008ad150 = 0;
    DAT_010da348 = 0x3fd9999a;
    if ((((g_heroState != WEAPON_FIRST_PERSON_VIEW) && (g_heroState != FIRST_PERSON_VIEW)) ||
        (fVar1 = GameCamera.orientMtx.forward.x, fVar2 = GameCamera.orientMtx.forward.y,
        fVar3 = GameCamera.orientMtx.forward.z, (g_heroMobyPtr->modeBits & DISABLED) == NONE)) &&
       (fVar1 = DAT_0096a320, fVar2 = DAT_0096a324, fVar3 = DAT_0096a328, DAT_0096bfa8 == 1)) {
      fVar1 = -*(float *)(param_1 + 0xd0);
      fVar2 = -*(float *)(param_1 + 0xd4);
      fVar3 = -*(float *)(param_1 + 0xd8);
    }
    fVar7 = 0.0;
    DAT_010db610 = *param_2;
    pfVar10 = (float *)&DAT_010db610;
    DAT_010db614 = param_2[1];
    DAT_010db618 = param_2[2];
    puVar13 = &DAT_010db6da;
    pfVar12 = (float *)&DAT_010db620;
    DAT_010db61c = param_2[3];
    lVar14 = 9;
    DAT_010db6d8 = 0;
    fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar6 = 1.7 / fVar4;
    fVar8 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar9 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar9 = fVar2 * fVar6;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    do {
      *pfVar12 = *pfVar10 + fVar7;
      pfVar12[1] = pfVar10[1] + fVar9;
      pfVar12[2] = pfVar10[2] + fVar8;
      pfVar5 = pfVar10 + 3;
      pfVar10 = pfVar10 + 4;
      pfVar12[3] = *pfVar5;
      *puVar13 = 0;
      pfVar12 = pfVar12 + 4;
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    DAT_010da320 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_010da32c = 0;
    DAT_010da328 = 0;
    DAT_010da324 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)MB_randRot();
    MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_010da330,local_30);
    DAT_010da340 = (float)dVar15;
    DAT_010da318 = 0;
    DAT_010da344 = 0;
    DAT_008ad158 = 0x3bc49ba6;
    if (DAT_008ad154 != 0) {
      puVar11 = &DAT_010da360;
      lVar14 = 0x19;
      DAT_008ad154 = 0;
      do {
        *puVar11 = 0;
        puVar11[6] = 0;
        puVar11[0xc] = 0;
        puVar11[0x12] = 0;
        puVar11[0x18] = 0;
        puVar11[0x1e] = 0;
        puVar11[0x24] = 0;
        puVar11[0x2a] = 0;
        puVar11 = puVar11 + 0x30;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}


// 0x0486bf8 (0x1638 bytes)
// inlined: FastRSqrt @0x487290, FastRSqrt @0x487674, FastRSqrt @0x48770c
void M849_00486bf8(void *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  longlong lVar6;
  short *psVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined2 uVar13;
  longlong lVar14;
  longlong lVar15;
  short sVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
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
  double dVar43;
  double dVar44;
  double dVar45;
  GPiece<16> local_270;
  float local_260;
  float local_25c;
  float local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_240 [9];
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  longlong local_100;
  
  M849_004868d8();
  if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) || (g_heroState == FIRST_PERSON_VIEW)) &&
     ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
    local_190 = GameCamera.orientMtx.forward.x;
    local_18c = GameCamera.orientMtx.forward.y;
    dVar37 = (double)GameCamera.orientMtx.forward.w;
    local_188 = GameCamera.orientMtx.forward.z;
    local_184 = GameCamera.orientMtx.forward.w;
    local_180 = GameCamera.orientMtx.right.x;
    local_17c = GameCamera.orientMtx.right.y;
    local_178 = GameCamera.orientMtx.right.z;
    local_174 = GameCamera.orientMtx.right.w;
    local_170 = GameCamera.orientMtx.up.x;
    local_16c = GameCamera.orientMtx.up.y;
    local_168 = GameCamera.orientMtx.up.z;
    local_164 = GameCamera.orientMtx.up.w;
  }
  else if (DAT_0096bfa8 == 1) {
    local_190 = -*(float *)((int)param_1 + 0xd0);
    local_18c = -*(float *)((int)param_1 + 0xd4);
    local_184 = *(float *)((int)param_1 + 0xdc);
    dVar37 = (double)local_184;
    local_188 = -*(float *)((int)param_1 + 0xd8);
    local_180 = *(float *)((int)param_1 + 0xc0);
    local_17c = *(float *)((int)param_1 + 0xc4);
    local_178 = *(float *)((int)param_1 + 200);
    local_174 = *(float *)((int)param_1 + 0xcc);
    local_170 = *(float *)((int)param_1 + 0xe0);
    local_16c = *(float *)((int)param_1 + 0xe4);
    local_168 = *(float *)((int)param_1 + 0xe8);
    local_164 = *(float *)((int)param_1 + 0xec);
  }
  else {
    local_190 = DAT_0096a320;
    local_18c = DAT_0096a324;
    dVar37 = (double)DAT_0096a32c;
    local_188 = DAT_0096a328;
    local_184 = DAT_0096a32c;
    local_180 = DAT_0096a330;
    local_17c = DAT_0096a334;
    local_178 = DAT_0096a338;
    local_174 = DAT_0096a33c;
    local_170 = DAT_0096a340;
    local_16c = DAT_0096a344;
    local_168 = DAT_0096a348;
    local_164 = DAT_0096a34c;
  }
  dVar42 = 0.0;
  DAT_010db610 = *param_2;
  DAT_010db614 = param_2[1];
  DAT_010db618 = param_2[2];
  DAT_010db61c = param_2[3];
  fVar1 = SQRT(local_188 * local_188 + local_190 * local_190 + local_18c * local_18c);
  fVar2 = DAT_010da348 / fVar1;
  dVar38 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar38 = (double)(local_188 * fVar2);
  }
  dVar39 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar39 = (double)(local_18c * fVar2);
  }
  dVar40 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar40 = (double)(local_190 * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar38 = (double)(local_188 * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar39 = (double)(local_18c * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar40 = (double)(local_190 * fVar2);
  }
  iVar7 = CollLine(param_2,local_270,0x14,g_heroMobyPtr,0);
  if (iVar7 == 0) {
    psVar8 = &DAT_010db6d8;
    lVar6 = 9;
    DAT_010db6d8 = DAT_010db6d8 + 4;
    psVar9 = psVar8;
    do {
      psVar8 = psVar8 + 1;
      sVar16 = *psVar9;
      psVar9 = psVar9 + 1;
      *psVar8 = sVar16 + -0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    lVar6 = FastDoubleToInt
                      ((double)(SQRT((g_CollOutput.ip.x - *param_2) * (g_CollOutput.ip.x - *param_2) +
                                     (g_CollOutput.ip.y - param_2[1]) * (g_CollOutput.ip.y - param_2[1])
                                    ) / DAT_010da348));
    if ((int)lVar6 < 10) {
      lVar15 = lVar6 << 1;
      lVar14 = lVar6;
      do {
        iVar7 = (int)lVar15;
        sVar16 = *(short *)((int)&DAT_010db6d8 + iVar7);
        sVar16 = sVar16 + ((ushort)(0x40 - (longlong)sVar16 >> 0x3f) & 0x40U - sVar16) + -4;
        *(short *)((int)&DAT_010db6d8 + iVar7) = sVar16;
        if (sVar16 < 0) {
          *(undefined2 *)((int)&DAT_010db6d8 + iVar7) = 0;
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 2;
      } while ((int)lVar14 < 10);
    }
    lVar6 = lVar6 + -1;
    if (-1 < (int)lVar6) {
      lVar15 = lVar6 * 2;
      do {
        iVar7 = (int)lVar15;
        lVar6 = lVar6 + -1;
        lVar15 = lVar15 + -2;
        *(short *)((int)&DAT_010db6d8 + iVar7) = *(short *)((int)&DAT_010db6da + iVar7) + 0x20;
      } while (-1 < (int)lVar6);
    }
  }
  FUN_005e7d64(&local_260,&DAT_010da320,&local_190);
  dVar25 = (double)local_260 + dVar40;
  dVar34 = (double)local_25c + dVar39;
  dVar35 = (double)local_258 + dVar38;
  FUN_005e7d64(&local_250,&DAT_010da330,&local_190);
  dVar44 = 60.5;
  local_100 = (longlong)(int)(animationSpeed * 60.5);
  dVar24 = (double)FastIntToDouble((int)(animationSpeed * 60.5));
  lVar6 = (longlong)DAT_010da318;
  DAT_010da318 = DAT_010da318 + 1;
  local_100 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar1 = (float)((double)lVar6 / dVar24);
  dVar40 = (double)(((float)((double)local_250 + dVar40) - (float)dVar25) * fVar1 + (float)dVar25);
  dVar39 = (double)(((float)((double)local_24c + dVar39) - (float)dVar34) * fVar1 + (float)dVar34);
  dVar38 = (double)(((float)((double)local_248 + dVar38) - (float)dVar35) * fVar1 + (float)dVar35);
  if ((int)((double)animationSpeed * dVar44) <= DAT_010da318) {
    DAT_010da320 = DAT_010da330;
    DAT_010da324 = DAT_010da334;
    DAT_010da328 = DAT_010da338;
    DAT_010da32c = DAT_010da33c;
    local_240[0] = 0.0;
    local_240[1] = 0.0;
    local_240[2] = 0.1;
    local_240[3] = 1.0;
    local_240[4] = 1.0;
    local_240[5] = 0.0;
    local_240[6] = 0.0;
    local_240[7] = 1.0;
    dVar25 = (double)MB_randRangeFloat(45.0,315.0);
    dVar25 = (double)FastWrapRot(DAT_010da340,(float)(dVar25 * 0.01745329238474369));
    MB_RotateQuatAxisAngle((float)dVar25,(float *)&DAT_010da330,local_240);
    DAT_010da340 = (float)dVar25;
    DAT_010da318 = 0;
  }
  dVar24 = 0.10000000149011612;
  dVar25 = (double)FastWrapRot(DAT_010da344,0.1);
  dVar45 = (double)local_170;
  dVar44 = (double)local_168;
  dVar43 = (double)local_16c;
  DAT_010da344 = (float)dVar25;
  local_140 = local_170;
  fVar1 = (float)(dVar44 * dVar40 - (double)(float)(dVar45 * dVar38));
  fVar2 = (float)(dVar43 * dVar38 - (double)(float)(dVar44 * dVar39));
  fVar3 = (float)(dVar45 * dVar39 - (double)(float)(dVar43 * dVar40));
  local_13c = local_16c;
  local_138 = local_168;
  local_134 = local_164;
  local_144 = 0;
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar25 = dVar42;
  dVar34 = dVar42;
  dVar35 = dVar42;
  if ((double)SQRT(fVar4) != dVar42) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar35 = (double)(fVar2 * fVar5);
    dVar34 = (double)(fVar1 * fVar5);
    dVar25 = (double)(fVar3 * fVar5);
  }
  local_150 = (float)dVar35;
  local_14c = (float)dVar34;
  local_148 = (float)dVar25;
  local_154 = 0;
  pfVar11 = (float *)&DAT_010db6f0;
  iVar7 = 0;
  local_160 = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar43));
  local_15c = (float)(dVar25 * dVar45 - (double)(float)(dVar35 * dVar44));
  local_158 = (float)(dVar35 * dVar43 - (double)(float)(dVar34 * dVar45));
  pfVar20 = (float *)&DAT_008ad160;
  pfVar19 = pfVar11;
  do {
    local_240[8] = (float)((double)*pfVar20 * dVar24);
    local_21c = (float)((double)pfVar20[1] * dVar24);
    local_218 = (float)((double)pfVar20[2] * dVar24);
    local_214 = pfVar20[3];
    FUN_005e7d64(local_240 + 8,local_240 + 8,&local_160);
    iVar7 = iVar7 + 1;
    pfVar20 = pfVar20 + 4;
    *pfVar19 = DAT_010db610 + local_240[8];
    pfVar19[1] = DAT_010db614 + local_21c;
    pfVar19[2] = DAT_010db618 + local_218;
    pfVar19[3] = DAT_010db61c;
    pfVar19 = pfVar19 + 4;
  } while (iVar7 < 0x14);
  iVar7 = 1;
  pfVar20 = &DAT_010db610;
  do {
    pfVar19 = pfVar20 + 4;
    pfVar11 = pfVar11 + 0x50;
    local_210 = *pfVar19 - *pfVar20;
    dVar25 = (double)local_210;
    local_20c = pfVar20[5] - pfVar20[1];
    dVar34 = (double)local_20c;
    local_208 = pfVar20[6] - pfVar20[2];
    dVar35 = (double)local_208;
    local_1fc = (float)(dVar35 * dVar40 - (double)(float)(dVar25 * dVar38));
    local_1f8 = (float)(dVar25 * dVar39 - (double)(float)(dVar34 * dVar40));
    local_204 = pfVar20[7];
    local_1f4 = 0;
    local_200 = (float)(dVar34 * dVar38 - (double)(float)(dVar35 * dVar39));
    dVar25 = (double)FUN_005e8e08((double)((float)(dVar35 * dVar38 +
                                                  (double)(float)(dVar25 * dVar40 +
                                                                 (double)(float)(dVar34 * dVar39)))
                                          / (DAT_010da348 *
                                            SQRT((float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar25 * dVar25 +
                                                                       (double)(float)(dVar34 * 
                                                  dVar34)))))));
    dVar35 = 0.20000000298023224;
    dVar34 = (double)(float)(1.5707963705062866 - dVar25);
    dVar25 = (double)Cam_InterpAngles
                               (dVar42,dVar34,0x3faeb851e0000000,0x3fc99999a0000000,dVar42);
    dVar34 = (double)FastDiffRots(dVar34,dVar25);
    if (0.3141592741012573 < ABS(dVar34)) {
      dVar34 = (double)FastDiffRots();
      dVar25 = (double)FastWrapRot((float)dVar25,(float)dVar34);
    }
    MB_RotateQuatAxisAngle((float)dVar25,&local_1f0,&local_210);
    dVar34 = (double)local_1ec;
    dVar36 = (double)local_1f0;
    dVar31 = (double)local_1e8;
    dVar29 = (double)SQRT((float)(dVar31 * dVar31 +
                                 (double)(float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34))
                                 ));
    dVar32 = (double)(float)((double)DAT_010da348 / dVar29);
    dVar25 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar25 = (double)(float)(dVar34 * dVar32);
    }
    dVar26 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar26 = (double)(float)(dVar36 * dVar32);
    }
    dVar27 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar27 = (double)(float)(dVar31 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar25 = (double)(float)(dVar34 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar26 = (double)(float)(dVar36 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar27 = (double)(float)(dVar31 * dVar32);
    }
    local_1ec = (float)((double)(float)(dVar25 - dVar34) + dVar34);
    local_1f0 = (float)((double)(float)(dVar26 - dVar36) + dVar36);
    local_1e8 = (float)((double)(float)(dVar27 - dVar31) + dVar31);
    fVar1 = SQRT(local_1e8 * local_1e8 + local_1f0 * local_1f0 + local_1ec * local_1ec);
    if (2.0 < fVar1) {
      fVar1 = 2.0 / fVar1;
      local_1f0 = local_1f0 * fVar1;
      local_1ec = local_1ec * fVar1;
      local_1e8 = local_1e8 * fVar1;
    }
    if (5 < iVar7) {
      dVar25 = (double)FastIntToDouble(10);
      fVar1 = (float)((double)(longlong)iVar7 / dVar25);
      local_1e4 = local_204;
      local_1f0 = fVar1 * (local_210 - local_1f0) + local_1f0;
      local_1ec = fVar1 * (local_20c - local_1ec) + local_1ec;
      local_1e8 = fVar1 * (local_208 - local_1e8) + local_1e8;
    }
    *pfVar19 = *pfVar20 + local_1f0;
    fVar1 = (float)(dVar38 * dVar38 +
                   (double)(float)(dVar40 * dVar40 + (double)(float)(dVar39 * dVar39)));
    pfVar20[5] = pfVar20[1] + local_1ec;
    pfVar20[7] = pfVar20[3];
    pfVar20[6] = pfVar20[2] + local_1e8;
    dVar25 = dVar42;
    dVar34 = dVar42;
    dVar29 = dVar42;
    if ((double)SQRT(fVar1) != dVar42) {
      fVar2 = 1.0 / SQRT(fVar1);
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar25 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
      dVar29 = (double)(float)(dVar40 * dVar25);
      dVar34 = (double)(float)(dVar39 * dVar25);
      dVar25 = (double)(float)(dVar38 * dVar25);
    }
    local_124 = (float)dVar37;
    local_130 = (float)dVar29;
    local_12c = (float)dVar34;
    local_128 = (float)dVar25;
    fVar1 = (float)(dVar44 * dVar29 - (double)(float)(dVar45 * dVar25));
    fVar2 = (float)(dVar43 * dVar25 - (double)(float)(dVar44 * dVar34));
    fVar3 = (float)(dVar45 * dVar34 - (double)(float)(dVar43 * dVar29));
    local_114 = 0;
    fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    dVar37 = dVar42;
    dVar38 = dVar42;
    dVar39 = dVar42;
    if ((double)SQRT(fVar4) != dVar42) {
      fVar5 = 1.0 / SQRT(fVar4);
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar38 = (double)(fVar2 * fVar5);
      dVar37 = (double)(fVar1 * fVar5);
      dVar39 = (double)(fVar3 * fVar5);
    }
    local_100 = (longlong)iVar7;
    iVar21 = 0;
    local_120 = (float)dVar38;
    local_11c = (float)dVar37;
    local_118 = (float)dVar39;
    local_104 = 0;
    local_110 = (float)(dVar34 * dVar39 - (double)(float)(dVar25 * dVar37));
    dVar45 = (double)local_110;
    local_10c = (float)(dVar25 * dVar38 - (double)(float)(dVar29 * dVar39));
    dVar43 = (double)local_10c;
    local_108 = (float)(dVar29 * dVar37 - (double)(float)(dVar34 * dVar38));
    dVar44 = (double)local_108;
    dVar29 = 0.699999988079071;
    dVar34 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar40 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar37 = 2.601886990305502e-06;
    dVar32 = (double)local_100;
    dVar31 = (double)(float)(dVar32 * 0.30000001192092896 + dVar24);
    pfVar18 = (float *)&DAT_008ad160;
    pfVar17 = pfVar11;
    do {
      dVar26 = (double)FastWrapRot
                                 ((float)(dVar32 * dVar29 + (double)DAT_010da344),(float)dVar42);
      dVar36 = (double)(float)(dVar34 - dVar26);
      if (dVar26 - (double)(float)(dVar34 - dVar26) < 0.0) {
        dVar36 = dVar26;
      }
      dVar27 = (double)(float)(dVar25 - dVar26);
      if ((double)(float)(dVar25 - dVar26) - dVar36 < 0.0) {
        dVar27 = dVar36;
      }
      dVar36 = (double)(float)(dVar27 * dVar27);
      dVar33 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar27));
      dVar26 = (double)(float)(dVar36 * dVar33);
      local_1d8 = (float)((double)(float)((double)(float)(dVar36 * dVar26) * dVar37 +
                                         (double)(float)(dVar26 * dVar38 +
                                                        (double)(float)(dVar33 * dVar39 +
                                                                       (double)(float)((double)(
                                                  float)(dVar36 * dVar27) * dVar40 + dVar27)))) *
                          dVar24 + dVar31);
      local_1e0 = *pfVar18 * local_1d8;
      local_1dc = pfVar18[1] * local_1d8;
      local_1d8 = pfVar18[2] * local_1d8;
      local_1d4 = pfVar18[3];
      FUN_005e7d64(&local_1e0,&local_1e0,&local_130);
      iVar21 = iVar21 + 1;
      pfVar18 = pfVar18 + 4;
      *pfVar17 = *pfVar19 + local_1e0;
      pfVar17[1] = pfVar20[5] + local_1dc;
      pfVar17[2] = pfVar20[6] + local_1d8;
      pfVar17[3] = pfVar20[7];
      pfVar17 = pfVar17 + 4;
    } while (iVar21 < 0x14);
    iVar7 = iVar7 + 1;
    dVar37 = (double)local_1e4;
    dVar25 = (double)SQRT(local_1e8 * local_1e8 + local_1f0 * local_1f0 + local_1ec * local_1ec);
    fVar1 = (float)((double)DAT_010da348 / dVar25);
    dVar40 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar40 = (double)(local_1f0 * fVar1);
    }
    dVar39 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar39 = (double)(local_1ec * fVar1);
    }
    dVar38 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar38 = (double)(local_1e8 * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar40 = (double)(local_1f0 * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar39 = (double)(local_1ec * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar38 = (double)(local_1e8 * fVar1);
    }
    pfVar20 = pfVar19;
  } while (iVar7 < 10);
  RegisterPostDraw(&PTR_M849_0048d430_0070f0c0,param_1);
  iVar22 = 0;
  iVar21 = 0;
  iVar23 = 0;
  iVar7 = 0;
  do {
    iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
    if (iVar23 < 5 && iVar12 == 0) {
      lVar6 = 9;
      iVar10 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_010db6d8 + iVar10)) break;
        lVar6 = lVar6 + -1;
        iVar10 = iVar10 + -2;
      } while (-1 < (int)lVar6);
      if (0 < (int)lVar6) {
        if (iVar22 < 2 && 1 < (int)lVar6) {
          iVar10 = MB_randInt(0x14);
          uVar41 = 0x3ff0000000000000;
          dVar37 = (double)MB_randRangeFloat((float)dVar35,1.0);
          pfVar11 = (float *)((int)(&DAT_010db6f0 + iVar10 * 4) +
                             (int)(lVar6 << 8) + (int)(lVar6 << 6));
          dVar38 = (double)(float)(&DAT_010db6f0)[iVar10 * 4];
          local_1c4 = pfVar11[3];
          local_1d0 = (float)(dVar37 * (double)(float)((double)*pfVar11 - dVar38) + dVar38);
          iVar12 = (int)(lVar6 << 4);
          local_1cc = (float)(dVar37 * (double)(pfVar11[1] - (float)(&DAT_010db6f4)[iVar10 * 4]) +
                             (double)(float)(&DAT_010db6f4)[iVar10 * 4]);
          local_1c8 = (float)(dVar37 * (double)(pfVar11[2] - (float)(&DAT_010db6f8)[iVar10 * 4]) +
                             (double)(float)(&DAT_010db6f8)[iVar10 * 4]);
          dVar39 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db610 +
                                                                              iVar12) -
                                                           (double)DAT_010db610) +
                                  (double)DAT_010db610);
          dVar38 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db614 +
                                                                              iVar12) -
                                                           (double)DAT_010db614) +
                                  (double)DAT_010db614);
          dVar37 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db618 +
                                                                              iVar12) -
                                                           (double)DAT_010db618) +
                                  (double)DAT_010db618);
          uVar28 = MB_randRangeFloat(60000.0,180000.0);
          uVar30 = 0x3ff07ae140000000;
          MB_randInt(uVar28,0x3ff07ae140000000,5);
          iVar12 = SpawnPart_23(dVar42,uVar41,uVar30,uVar28,&local_1d0);
          if (iVar12 != 0) {
            fVar2 = (float)((double)local_1cc - dVar38);
            fVar3 = (float)((double)local_1d0 - dVar39);
            fVar4 = (float)((double)local_1c8 - dVar37);
            *(float *)(iVar12 + 0x3c) = local_1c4;
            iVar22 = iVar22 + 1;
            dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar1 = (float)(0.009999999776482582 / dVar38);
            dVar37 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar37 = (double)(fVar3 * fVar1);
            }
            dVar39 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar39 = (double)(fVar2 * fVar1);
            }
            dVar40 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar40 = (double)(fVar4 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar37 = (double)(fVar3 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar39 = (double)(fVar2 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar40 = (double)(fVar4 * fVar1);
            }
            *(float *)(iVar12 + 0x30) = (float)dVar37;
            *(float *)(iVar12 + 0x34) = (float)dVar39;
            *(float *)(iVar12 + 0x38) = (float)(dVar40 + 0.019999999552965164);
          }
        }
        iVar12 = (int)(lVar6 << 4);
        local_1d0 = *(float *)((int)&DAT_010db610 + iVar12);
        local_1cc = *(float *)((int)&DAT_010db614 + iVar12);
        local_1c8 = *(float *)((int)&DAT_010db618 + iVar12);
        local_1c4 = *(float *)((int)&DAT_010db61c + iVar12);
        local_1b4 = 0;
        local_1b8 = 0;
        local_1bc = 0;
        local_1c0 = 0;
        uVar28 = MB_randRangeFloat(60000.0,180000.0);
        iVar12 = SpawnPart_23
                           (dVar42,0x3ff0000000000000,0x3ff0000000000000,uVar28,&local_1d0);
        *(int *)((int)&DAT_010da360 + iVar7) = iVar12;
        if (iVar12 != 0) {
          iVar23 = iVar23 + 1;
          *(undefined2 *)(iVar12 + 10) = 200;
          *(undefined4 *)(iVar12 + 0x24) = 2;
          *(undefined1 *)(iVar12 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar12 + 0x2b) = 200;
        }
        *(short *)((int)&DAT_010da34c + iVar7) = (short)lVar6;
        *(undefined4 *)((int)&DAT_010da350 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_010da354 + iVar7) = 0;
        uVar13 = MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_010da34e + iVar7) = uVar13;
        dVar37 = (double)MB_randRangeFloat((float)dVar24,0.8);
        *(float *)((int)&DAT_010da358 + iVar7) = (float)dVar37;
        dVar37 = (double)MB_randRangeFloat((float)dVar24,0.4);
        iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
        *(float *)((int)&DAT_010da35c + iVar7) = (float)dVar37;
      }
    }
    if (iVar12 != 0) {
      iVar10 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
      dVar39 = (double)(*(float *)(iVar10 + 0x10db604) - *(float *)((int)&DAT_010db614 + iVar10));
      dVar40 = (double)(*(float *)(iVar10 + 0x10db600) - *(float *)((int)&DAT_010db610 + iVar10));
      dVar38 = (double)(*(float *)(iVar10 + 0x10db608) - *(float *)((int)&DAT_010db618 + iVar10));
      *(float *)((int)&DAT_010da350 + iVar7) =
           *(float *)((int)&DAT_010da350 + iVar7) + *(float *)((int)&DAT_010da35c + iVar7);
      *(undefined2 *)(iVar12 + 10) = 200;
      dVar37 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar40 * dVar40 +
                                                  (double)(float)(dVar39 * dVar39))));
      if (dVar37 < (double)*(float *)((int)&DAT_010da350 + iVar7)) {
        sVar16 = *(short *)((int)&DAT_010da34c + iVar7) + -1;
        *(short *)((int)&DAT_010da34c + iVar7) = sVar16;
        if (sVar16 < 1) {
          DeletePart(*(undefined4 *)((int)&DAT_010da360 + iVar7));
          *(undefined4 *)((int)&DAT_010da360 + iVar7) = 0;
        }
        else {
          iVar12 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
          *(float *)((int)&DAT_010da350 + iVar7) =
               (float)((double)*(float *)((int)&DAT_010da350 + iVar7) - dVar37);
          dVar39 = (double)(*(float *)(iVar12 + 0x10db604) - *(float *)((int)&DAT_010db614 + iVar12)
                           );
          dVar40 = (double)(*(float *)(iVar12 + 0x10db600) - *(float *)((int)&DAT_010db610 + iVar12)
                           );
          dVar38 = (double)(*(float *)(iVar12 + 0x10db608) - *(float *)((int)&DAT_010db618 + iVar12)
                           );
          dVar37 = (double)SQRT((float)(dVar38 * dVar38 +
                                       (double)(float)(dVar40 * dVar40 +
                                                      (double)(float)(dVar39 * dVar39))));
        }
      }
      if (*(int *)((int)&DAT_010da360 + iVar7) != 0) {
        dVar37 = (double)(float)((double)*(float *)((int)&DAT_010da350 + iVar7) / dVar37);
        if (*(short *)((int)&DAT_010da34c + iVar7) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_010da34c + iVar7) < 2) {
          uVar13 = FastDoubleToInt((double)((float)(1.0 - dVar37) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = uVar13;
          if (*(short *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_010da34c + iVar7) == 1) {
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          fVar2 = (float)((double)param_2[1] - (double)*(float *)(iVar12 + 0x14));
          fVar3 = (float)((double)*param_2 - (double)*(float *)(iVar12 + 0x10));
          fVar4 = (float)((double)param_2[2] - (double)*(float *)(iVar12 + 0x18));
          dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          fVar1 = (float)((double)*(float *)((int)&DAT_010da35c + iVar7) / dVar38);
          dVar37 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar37 = (double)(fVar1 * fVar4);
          }
          dVar39 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar39 = (double)(fVar1 * fVar2);
          }
          dVar40 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar40 = (double)(fVar1 * fVar3);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar37 = (double)(fVar1 * fVar4);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar39 = (double)(fVar1 * fVar2);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar40 = (double)(fVar1 * fVar3);
          }
          *(float *)(iVar12 + 0x18) = (float)((double)*(float *)(iVar12 + 0x18) + dVar37);
          *(float *)(iVar12 + 0x14) = (float)((double)*(float *)(iVar12 + 0x14) + dVar39);
          *(float *)(iVar12 + 0x10) = (float)((double)*(float *)(iVar12 + 0x10) + dVar40);
          *(float *)(*(int *)((int)&DAT_010da360 + iVar7) + 0xc) =
               *(float *)(*(int *)((int)&DAT_010da360 + iVar7) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          iVar10 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
          *(float *)(iVar12 + 0x10) =
               (float)(dVar40 * dVar37 + (double)*(float *)((int)&DAT_010db610 + iVar10));
          *(float *)(iVar12 + 0x14) =
               (float)(dVar39 * dVar37 + (double)*(float *)((int)&DAT_010db614 + iVar10));
          *(float *)(iVar12 + 0x18) =
               (float)(dVar38 * dVar37 + (double)*(float *)((int)&DAT_010db618 + iVar10));
          *(undefined4 *)(iVar12 + 0x1c) = *(undefined4 *)((int)&DAT_010db61c + iVar10);
          sVar16 = *(short *)((int)&DAT_010da34e + iVar7);
          Lerp_vec4((float)dVar37,&local_1b0);
          iVar10 = sVar16 + 0x13;
          Lerp_vec4((float)dVar37,local_1a0);
          Lerp_vec4(*(float *)((int)&DAT_010da354 + iVar7),&local_1b0);
          fVar1 = *(float *)((int)&DAT_010da354 + iVar7) + *(float *)((int)&DAT_010da358 + iVar7);
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          *(float *)((int)&DAT_010da354 + iVar7) = fVar1;
          if (1.0 <= fVar1) {
            *(short *)((int)&DAT_010da34e + iVar7) = (short)iVar10 + (short)(iVar10 / 0x14) * -0x14;
            *(float *)((int)&DAT_010da354 + iVar7) = fVar1 - 1.0;
          }
          *(float *)(iVar12 + 0x10) = *(float *)(iVar12 + 0x10) + local_1b0;
          *(float *)(iVar12 + 0x14) = *(float *)(iVar12 + 0x14) + local_1ac;
          *(float *)(iVar12 + 0x18) = *(float *)(iVar12 + 0x18) + local_1a8;
        }
      }
    }
    iVar21 = iVar21 + 1;
    iVar7 = iVar7 + 0x18;
    if (199 < iVar21) {
      return;
    }
  } while( true );
}


// 0x0488250 (0x750 bytes)
// inlined: FastAtan2 @0x488510, FastAtan2 @0x4886c8
void M849_00488250(int param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  int iVar18;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar14 = ZEXT48(&stack0x00000000);
  uVar15 = ZEXT48(&TOC_BASE);
  lVar1 = uVar14 - 0x140;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x2a] = in_LR;
  puVar11[0x24] = in_f28;
  puVar11[0x25] = in_f29;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x23] = unaff_r31;
  puVar11[0x21] = unaff_r29;
  puVar11[0x22] = unaff_r30;
  puVar11[0x20] = unaff_r28;
  puVar11[0x1f] = unaff_r27;
  M849_004864f0(param_1,uVar14 - 0xb0,uVar14 - 0xac,uVar14 - 0xd0);
  M849_00486bf8(param_1,uVar14 - 0xd0);
  iVar10 = MobyUpdateChainStart;
  do {
    if (iVar10 == 0) {
      return;
    }
    if ((*(short *)(iVar10 + 0xa6) == 0) || ((*(ushort *)(iVar10 + 0x34) & 0x1000) == 0)) {
LAB_00488958:
      M849_00486608(iVar10);
    }
    else {
      piVar7 = *(int **)(*(int *)(iVar10 + 0x24) + 0x2c);
      if ((undefined **)*piVar7 == &PTR_M849_0048a6c8_0070f040) goto LAB_00488958;
      if ((((*(char *)(iVar10 + 0x20) != -2) && (*(char *)(iVar10 + 0x20) != -3)) &&
          (*(int *)(iVar10 + 0x78) != 0)) &&
         ((*(int *)(iVar10 + 0x24) != 0 &&
          (puVar8 = (undefined4 *)piVar7[4], puVar8 != (undefined4 *)0x0)))) {
        pcVar9 = (code *)*puVar8;
        puVar11[5] = uVar15;
        iVar17 = (*pcVar9)(iVar10);
        uVar15 = puVar11[5];
        if ((iVar17 != 0) && (*(short *)(iVar17 + 0x68) < 6)) {
          fVar2 = *(float *)(param_1 + 0x14) - *(float *)(iVar10 + 0x14);
          fVar3 = *(float *)(param_1 + 0x10) - *(float *)(iVar10 + 0x10);
          dVar29 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
          if (dVar29 < 15.0) {
            iVar18 = M849_004860f8();
            fVar2 = *(float *)(param_1 + 0x10);
            fVar3 = *(float *)(param_1 + 0x14);
            if ((iVar18 == 0) &&
               (DAT_0096bd58 <
                (int)(((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) &
                      0xfffffffb) + 10))) {
              if (*(short *)(iVar17 + 0x68) < 3) {
                *(undefined2 *)(iVar17 + 0x6a) = 0xffff;
                fVar4 = *(float *)(iVar10 + 0x10);
                *(float *)(puVar11 + 0x10) = fVar4;
                fVar4 = fVar4 - fVar2;
                fVar3 = *(float *)(iVar10 + 0x14) - fVar3;
                *(float *)((int)puVar11 + 0x84) = *(float *)(iVar10 + 0x14);
                fVar2 = *(float *)(iVar10 + 0x18);
                *(float *)(puVar11 + 0x11) = fVar2;
                *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)(iVar10 + 0x1c);
                fVar5 = ABS(fVar4);
                fVar6 = ABS(fVar3);
                *(float *)((int)puVar11 + 0xa4) = fVar4;
                *(float *)(puVar11 + 0x15) = fVar3;
                *(float *)(puVar11 + 0x11) = fVar2 + 0.4;
                *(float *)((int)puVar11 + 0xac) = fVar5 - fVar6;
                dVar27 = 0.0;
                fVar2 = 0.04386491;
                if (dVar29 - 3.0 < 0.0) {
                  fVar2 = 3.6858706;
                }
                dVar26 = (double)fVar2;
                fVar2 = *(float *)(puVar11 + 0x12);
                uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1d) & 4;
                fVar3 = ABS(*(float *)((int)puVar11 + 0xa4));
                if (*(float *)((int)puVar11 + 0xac) - 0.0 < 0.0) {
                  fVar3 = fVar6;
                }
                fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
                fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
                fVar13 = ABS(*(float *)(puVar11 + 0x15));
                if (*(float *)((int)puVar11 + 0xac) - 0.0 < 0.0) {
                  fVar13 = fVar5;
                }
                dVar28 = 0.7853981852531433;
                dVar24 = dVar27;
                if (0.0 < fVar3) {
                  lVar16 = uVar14 - 0x130;
                  lVar22 = uVar14 - 0x60;
                  lVar19 = uVar14 - 0x70;
                  lVar23 = 2;
                  fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
                  fVar5 = fVar3 * fVar3;
                  *(float *)((int)puVar11 + 0xdc) = fVar3;
                  *(float *)((int)puVar11 + 0xd4) = fVar3;
                  *(float *)(puVar11 + 0x1b) = fVar3;
                  *(float *)(puVar11 + 0x1a) = fVar3;
                  fVar3 = fVar5 * fVar5;
                  *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar5;
                  *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar3;
                  *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar3 * fVar5;
                  do {
                    *(float *)((int)lVar16 + 0xd0) = *(float *)((int)lVar16 + 0xc0) * fVar3 * fVar3;
                    iVar18 = (int)lVar19;
                    lVar19 = lVar19 + 8;
                    lVar16 = lVar16 + 8;
                    *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
                    lVar22 = lVar22 + 8;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  lVar23 = 4;
                  lVar22 = uVar14 - 0x70;
                  pfVar20 = (float *)&DAT_007358e0;
                  lVar16 = lVar1;
                  lVar19 = lVar22;
                  do {
                    fVar3 = *pfVar20;
                    fVar5 = pfVar20[1];
                    pfVar20 = pfVar20 + 2;
                    *(float *)((int)lVar16 + 0xd0) = *(float *)((int)lVar16 + 0xd0) * fVar3;
                    lVar16 = lVar16 + 8;
                    *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
                    lVar19 = lVar19 + 8;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  lVar19 = 2;
                  lVar16 = lVar1;
                  do {
                    iVar18 = (int)lVar16;
                    iVar12 = (int)lVar22;
                    lVar16 = lVar16 + 0x10;
                    lVar22 = lVar22 + 0x10;
                    dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xd0)) +
                                      *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                     *(float *)(iVar12 + 0xc));
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                  dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar4);
                }
                dVar24 = (double)FastSubRots(fVar2,(float)dVar24);
                fVar2 = *(float *)((int)puVar11 + 0x94);
                if (dVar26 <= (double)(float)(dVar24 * dVar24)) {
                  if ((0 < *(short *)(iVar17 + 0x68)) &&
                     (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                     puVar8 != (undefined4 *)0x0)) {
                    pcVar9 = (code *)*puVar8;
                    puVar11[5] = uVar15;
                    (*pcVar9)(iVar10);
                    uVar15 = puVar11[5];
                  }
                }
                else {
                  fVar3 = *(float *)(param_1 + 0x18);
                  *(float *)(puVar11 + 0x13) = (float)dVar29;
                  fVar3 = *(float *)(puVar11 + 0x11) - fVar3;
                  dVar25 = ABS((double)fVar3);
                  *(float *)((int)puVar11 + 0x9c) = fVar3;
                  *(float *)(puVar11 + 0x14) = (float)(ABS(dVar29) - dVar25);
                  uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1d) & 4;
                  dVar24 = ABS((double)*(float *)(puVar11 + 0x13));
                  if ((double)*(float *)(puVar11 + 0x14) - dVar27 < 0.0) {
                    dVar24 = dVar25;
                  }
                  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
                  dVar25 = ABS((double)*(float *)((int)puVar11 + 0x9c));
                  if ((double)*(float *)(puVar11 + 0x14) - dVar27 < 0.0) {
                    dVar25 = ABS(dVar29);
                  }
                  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
                  if (dVar27 < dVar24) {
                    lVar16 = uVar14 - 0x130;
                    lVar22 = uVar14 - 0x80;
                    lVar19 = uVar14 - 0x90;
                    lVar23 = 2;
                    fVar6 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
                    fVar5 = fVar6 * fVar6;
                    *(float *)((int)puVar11 + 0xbc) = fVar6;
                    *(float *)((int)puVar11 + 0xb4) = fVar6;
                    *(float *)(puVar11 + 0x17) = fVar6;
                    *(float *)(puVar11 + 0x16) = fVar6;
                    fVar6 = fVar5 * fVar5;
                    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5;
                    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
                    *(float *)((int)puVar11 + 0xbc) =
                         *(float *)((int)puVar11 + 0xbc) * fVar6 * fVar5;
                    do {
                      *(float *)((int)lVar16 + 0xb0) =
                           *(float *)((int)lVar16 + 0xa0) * fVar6 * fVar6;
                      iVar18 = (int)lVar19;
                      lVar19 = lVar19 + 8;
                      lVar16 = lVar16 + 8;
                      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
                      lVar22 = lVar22 + 8;
                      lVar23 = lVar23 + -1;
                    } while (lVar23 != 0);
                    lVar23 = 4;
                    lVar22 = uVar14 - 0x90;
                    pfVar20 = (float *)&DAT_007358e0;
                    lVar16 = lVar1;
                    lVar19 = lVar22;
                    do {
                      fVar6 = *pfVar20;
                      fVar5 = pfVar20[1];
                      pfVar20 = pfVar20 + 2;
                      *(float *)((int)lVar16 + 0xb0) = *(float *)((int)lVar16 + 0xb0) * fVar6;
                      lVar16 = lVar16 + 8;
                      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
                      lVar19 = lVar19 + 8;
                      lVar23 = lVar23 + -1;
                    } while (lVar23 != 0);
                    lVar19 = 2;
                    lVar16 = lVar1;
                    do {
                      iVar18 = (int)lVar16;
                      iVar12 = (int)lVar22;
                      lVar16 = lVar16 + 0x10;
                      lVar22 = lVar22 + 0x10;
                      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xb0)) +
                                        *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                       *(float *)(iVar12 + 0xc));
                      lVar19 = lVar19 + -1;
                    } while (lVar19 != 0);
                    dVar27 = (double)((float)(dVar27 + dVar28) * fVar3 + fVar4);
                  }
                  dVar29 = (double)FastSubRots(fVar2,(float)dVar27);
                  if (dVar26 <= (double)(float)(dVar29 * dVar29)) {
                    if ((0 < *(short *)(iVar17 + 0x68)) &&
                       (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                       puVar8 != (undefined4 *)0x0)) {
                      pcVar9 = (code *)*puVar8;
                      puVar11[5] = uVar15;
                      (*pcVar9)(iVar10);
                      uVar15 = puVar11[5];
                    }
                  }
                  else {
                    iVar18 = CollLine(uVar14 - 0xd0,uVar14 - 0xc0,2,iVar10,0);
                    if (iVar18 == 0) {
                      M849_00486220(param_1,param_2,iVar10,iVar17,uVar14 - 0xd0);
                    }
                    else if ((0 < *(short *)(iVar17 + 0x68)) &&
                            (puVar8 = *(undefined4 **)
                                       (*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                            puVar8 != (undefined4 *)0x0)) {
                      pcVar9 = (code *)*puVar8;
                      puVar11[5] = uVar15;
                      (*pcVar9)(iVar10);
                      uVar15 = puVar11[5];
                    }
                  }
                }
              }
              else if (*(short *)(iVar17 + 0x68) < 4) {
                M849_00486220(param_1,param_2,iVar10,iVar17,uVar14 - 0xd0);
              }
              goto LAB_00488960;
            }
          }
          if ((*(short *)(iVar17 + 0x68) != 0) &&
             (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
             puVar8 != (undefined4 *)0x0)) {
            pcVar9 = (code *)*puVar8;
            puVar11[5] = uVar15;
            (*pcVar9)(iVar10);
            uVar15 = puVar11[5];
          }
        }
      }
    }
LAB_00488960:
    iVar10 = *(int *)(iVar10 + 0x28);
  } while( true );
}


// 0x04889a0 (0x1bc bytes)
// strings: 006586a8: 'cleaned up moby:%d (oclass:%d)\n'

void M849_004889a0(void)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar4 = 0;
  puVar5 = &g_heroMtx;
  DAT_0096bd5c = 0;
  piVar6 = &DAT_0096bd30;
  DAT_0096bd58 = 0;
  do {
    if ((int)(((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) & 0xfffffffb)
             + 10) <= iVar4) {
      return;
    }
    if (*piVar6 != 0) {
      iVar3 = puVar5[0x814];
      if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x20) != -2)) && (*(char *)(iVar3 + 0x20) != -3)) &&
         ((*(int *)(iVar3 + 0x78) != 0 && (*(int *)(iVar3 + 0x24) != 0)))) {
        puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 0x24) + 0x2c) + 0x10);
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = (*(code *)*puVar2)(iVar3);
          if (iVar3 != 0) {
            sVar1 = *(short *)(iVar3 + 0x68);
            if ((sVar1 < 5 && 2 < sVar1) && (*(short *)(iVar3 + 0x6a) != -1)) {
              if (sVar1 == 3) {
                DAT_0096bd5c = DAT_0096bd5c + 1;
              }
              else if (sVar1 == 4) {
                DAT_0096bd58 = DAT_0096bd58 + 1;
              }
              goto LAB_00488b24;
            }
          }
        }
      }
      printf("cleaned up moby:%d (oclass:%d)\n",*(undefined2 *)(*piVar6 + 0xb2),
                   *(undefined2 *)(*piVar6 + 0xa6));
      *piVar6 = 0;
    }
LAB_00488b24:
    puVar5 = puVar5 + 1;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


// 0x0488b5c (0x88 bytes)
void M849_00488b5c(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_010db6d8) {
    psVar2 = &DAT_010db6d8;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterMobyDraw(&PTR_M849_0048d430_0070f0c0,param_1);
  }
  return;
}


// 0x0488bf8 (0x23c bytes)
void M849_00488bf8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  short *psVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  
  iVar21 = 0;
  DAT_008ad150 = 1;
  DAT_008ad158 = DAT_008ad158 * 0.5;
  DAT_008ad154 = 1;
  psVar19 = &DAT_010da34c;
  piVar20 = &DAT_010da360;
  pfVar18 = (float *)&DAT_010da350;
  fVar1 = 0.0;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_010db614 + iVar17);
      fVar13 = *(float *)(iVar17 + 0x10db604) - fVar2;
      fVar3 = *(float *)((int)&DAT_010db610 + iVar17);
      fVar15 = *(float *)(iVar17 + 0x10db600) - fVar3;
      fVar4 = *(float *)((int)&DAT_010db618 + iVar17);
      fVar14 = *(float *)(iVar17 + 0x10db608) - fVar4;
      fVar5 = *pfVar18;
      fVar6 = *(float *)(iVar10 + 0x14);
      fVar7 = *(float *)(iVar10 + 0x10);
      fVar8 = *(float *)(iVar10 + 0x18);
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
      *piVar20 = 0;
      *(undefined2 *)(iVar10 + 10) = 0x46;
      *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar10 + 0x1c);
      fVar5 = fVar5 / fVar16;
      fVar16 = 0.1 / fVar16;
      fVar6 = fVar6 - (fVar2 + fVar13 * fVar5);
      fVar7 = fVar7 - (fVar3 + fVar15 * fVar5);
      fVar8 = fVar8 - (fVar4 + fVar14 * fVar5);
      fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar3 = 0.03 / fVar4;
      fVar2 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      fVar12 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      fVar11 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      *(float *)(iVar10 + 0x38) = fVar14 * fVar5 * fVar16 + fVar2;
      *(float *)(iVar10 + 0x34) = fVar13 * fVar5 * fVar16 + fVar12;
      *(float *)(iVar10 + 0x30) = fVar15 * fVar5 * fVar16 + fVar11;
    }
    iVar21 = iVar21 + 1;
    piVar20 = piVar20 + 6;
    psVar19 = psVar19 + 0xc;
    pfVar18 = pfVar18 + 6;
  } while (iVar21 < 200);
  if (0 < DAT_010db6d8) {
    psVar19 = &DAT_010db6d8;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterMobyDraw(&PTR_M849_0048d430_0070f0c0,param_1);
  }
  return;
}


// 0x0488e34 (0x24 bytes)
void M849_00488e34(void)

{
  DAT_008ad150 = 1;
  DAT_008ad154 = 1;
  DAT_010db6d8 = 0;
  return;
}


// 0x0488eb0 (0x1814 bytes)
/* Moby 849 */

void UpdateMoby_849(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  MobyInstance *moby_00;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  MobyInstance *pMVar17;
  MobyInstance *pMVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
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
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> local_320;
  GPiece<16> local_310;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  f32 local_2e4;
  GPiece<16> local_2e0;
  GPiece<16> local_2d0;
  GPiece<16> local_2c0;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  Vec4 aVStack_2a0 [3];
  Vec4 aVStack_270 [3];
  GPiece<64> auStack_240;
  GPiece<64> auStack_200;
  GPiece<64> auStack_1c0;
  GPiece<64> auStack_180;
  Vec4 aVStack_140 [4];
  float local_100;
  longlong local_f8;
  float local_e8;
  
  lVar12 = (longlong)(int)moby;
  RegisterHUDCallback
            (4,0x753f,&PTR_Moby849Hud_Init_00705798,&PTR_Moby849Hud_Update_007057a0,
             &PTR_Draw_Moby849Meter_007057b0,&DAT_0096bd58,5);
  iVar10 = DAT_0096ad94;
  pvVar8 = moby->pVar;
  uVar20 = ZEXT48(pvVar8);
  if (((moby->state != '\x03') && (moby->state != '\0')) && (0 < DAT_010db6d8)) {
    psVar13 = &DAT_010db6d8;
    lVar21 = 10;
    do {
      sVar7 = *psVar13;
      *psVar13 = sVar7 + ((ushort)(0x40 - (longlong)sVar7 >> 0x3f) & 0x40U - sVar7) + -4;
      psVar13 = psVar13 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    RegisterMobyDraw(&PTR_M849_0048d430_0070f0c0,moby);
  }
  M849_004889a0();
  uVar2 = moby->state;
  if (uVar2 == '\x05') {
    dVar22 = (double)BlendAnimFrame(moby);
    pMVar19 = (MobyInstance *)0x0;
    dVar43 = 0.0;
    if (0.0 <= dVar22) {
      iVar14 = 0;
      piVar16 = &DAT_0096bd30;
      iVar15 = ((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) & 0xfffffffb
               ) + 10;
      if (0 < iVar15) {
        do {
          if (*piVar16 != 0) {
            pMVar19 = (MobyInstance *)(&DAT_0096bd30)[iVar14];
            (&DAT_0096bd30)[iVar14] = 0;
            break;
          }
          iVar14 = iVar14 + 1;
          piVar16 = piVar16 + 1;
        } while (iVar14 < iVar15);
        if (pMVar19 != (MobyInstance *)0x0) {
          local_300 = 0.0;
          local_2fc = 0.0;
          local_2f8 = 0.0;
          FastApplyTransform(aVStack_270,(Vec4 *)&GameCamera);
          FastNormalizeRMtx4(auStack_200,aVStack_270);
          if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
             ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
            FUN_005e825c(&local_300,local_2e0,auStack_200);
            FUN_005e825c(&local_2f0,local_2d0,auStack_200);
            local_2f0 = local_2f0 + GameCamera.posX;
            local_2ec = local_2ec + GameCamera.posY;
            local_2e8 = local_2e8 + GameCamera.posZ;
          }
          else {
            local_2f8 = DAT_0071f408 * 0.4462;
            local_300 = DAT_0096a320 * local_2f8;
            local_2fc = DAT_0096a324 * local_2f8;
            local_2f8 = DAT_0096a328 * local_2f8;
            GetBonePosition(lVar12,0,&local_2f0);
          }
          (pMVar19->pos).x = local_2f0;
          (pMVar19->pos).y = local_2ec;
          (pMVar19->pos).z = local_2e8;
          (pMVar19->pos).w = local_2e4;
          PostUpdateMobyLockTransform(pMVar19);
          local_300 = local_300 + DAT_00969de0;
          local_2fc = local_2fc + DAT_00969de4;
          local_2f8 = local_2f8 + DAT_00969de8;
          dVar22 = (double)DAT_0096af9c;
          if ((g_heroState != WEAPON_FIRST_PERSON_VIEW) ||
             ((g_heroMobyPtr->modeBits & DISABLED) == NONE)) {
            dVar38 = 10000.0;
            if (DAT_0096af90 == 0) {
              dVar22 = (double)FUN_005e8338();
            }
            dVar23 = (double)FUN_005e8338((double)SQRT(local_300 * local_300 + local_2fc * local_2fc
                                                      ),(double)local_2f8);
            pMVar17 = (MobyInstance *)0x0;
            dVar23 = -dVar23;
            if (MobyUpdateChainStart != (MobyInstance *)0x0) {
              dVar32 = 2.5;
              dVar33 = 1.0471975803375244;
              dVar34 = 0.7853981852531433;
              dVar35 = 2.0;
              dVar44 = 1.0;
              dVar42 = 1.5707963705062866;
              dVar39 = 0.45378559827804565;
              dVar36 = 0.0009765625;
              dVar37 = 0.1745329201221466;
              local_100 = 0.5;
              dVar40 = -1.0;
              moby_00 = MobyUpdateChainStart;
              do {
                if (moby_00->state < 0x80 && moby_00 != pMVar19) {
                  fVar3 = (moby_00->pos).x;
                  fVar4 = (moby_00->pos).y;
                  fVar5 = (moby_00->pos).z;
                  iVar14 = MB_GetPvarsIfMobyHasThem(moby_00);
                  fVar6 = local_100;
                  if (iVar14 != 0) {
                    fVar6 = *(float *)(iVar14 + 0x10);
                  }
                  fVar5 = fVar5 + fVar6;
                  if ((((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE) &&
                      (moby_00->pClass != (MobyClass *)0x0)) &&
                     ((short)moby_00->pClass->mode_bits == 5)) {
                    dVar24 = (double)FUN_005e8338((double)(fVar3 - local_2f0),
                                                  (double)(fVar4 - local_2ec));
                    dVar25 = (double)FUN_005e8338((double)SQRT((local_2f0 - fVar3) *
                                                               (local_2f0 - fVar3) +
                                                               (local_2ec - fVar4) *
                                                               (local_2ec - fVar4)),
                                                  (double)(fVar5 - local_2e8));
                    dVar26 = (double)FastSubRots((float)dVar22,(float)dVar24);
                    dVar45 = (double)SQRT((local_2e8 - fVar5) * (local_2e8 - fVar5) +
                                          (local_2f0 - fVar3) * (local_2f0 - fVar3) +
                                          (local_2ec - fVar4) * (local_2ec - fVar4));
                    if (dVar45 < dVar32) {
                      local_e8 = (float)dVar40;
                      dVar41 = (double)DAT_0096a368;
                      dVar40 = (double)FUN_005e8338((double)((moby_00->pos).x - g_heroPosition.x),
                                                    (double)((moby_00->pos).y - g_heroPosition.y));
                      dVar41 = (double)FastSubRots((float)dVar41,(float)dVar40);
                      dVar40 = (double)local_e8;
                      if ((dVar41 < dVar33) && (pMVar18 = moby_00, ABS(dVar25) < dVar34)) break;
                    }
                    if (dVar45 <= dVar38) {
                      MB_SphericalToVector
                                ((float)dVar45,(float)dVar22,(float)dVar23,&local_2b0);
                      local_2ac = local_2ac + local_2ec;
                      local_2b0 = local_2b0 + local_2f0;
                      local_2a8 = local_2a8 + local_2e8;
                      fVar3 = SQRT((local_2a8 - fVar5) * (local_2a8 - fVar5) +
                                   (local_2b0 - fVar3) * (local_2b0 - fVar3) +
                                   (local_2ac - fVar4) * (local_2ac - fVar4));
                      dVar27 = (double)(float)(dVar44 - (double)((fVar3 * fVar3) /
                                                                (float)((double)(float)(dVar45 * 
                                                  dVar35) * dVar45)));
                      dVar41 = dVar27;
                      if (dVar27 - dVar43 < 0.0) {
                        dVar41 = ABS(dVar27);
                      }
                      dVar30 = dVar44;
                      if (dVar27 - dVar43 < 0.0) {
                        dVar30 = dVar40;
                      }
                      dVar27 = (double)(float)(dVar44 - dVar41);
                      if ((double)(float)(dVar44 - dVar41) - dVar43 < 0.0) {
                        dVar27 = dVar43;
                      }
                      dVar41 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar41 * dVar41) * dVar41) * DAT_007358cc +
                                                  (float)((double)(float)(dVar41 * dVar41) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar41 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar27) - dVar42) * dVar30 -
                                               dVar42);
                      if (dVar39 < dVar41) {
                        dVar30 = (double)(float)((double)(moby_00->bSphere).rad * dVar36);
                        dVar31 = (double)(float)(dVar45 / (double)SQRT((float)(dVar45 * dVar45 +
                                                                              (double)(float)(dVar30
                                                                                             * 
                                                  dVar30))));
                        dVar27 = dVar31;
                        if (dVar31 - dVar43 < 0.0) {
                          dVar27 = ABS(dVar31);
                        }
                        dVar28 = (double)(float)(dVar44 - dVar27);
                        if ((double)(float)(dVar44 - dVar27) - dVar43 < 0.0) {
                          dVar28 = dVar43;
                        }
                        dVar29 = dVar44;
                        if (dVar31 - dVar43 < 0.0) {
                          dVar29 = dVar40;
                        }
                        if (dVar30 < dVar45) {
                          dVar41 = (double)(float)(dVar41 - -(double)(float)(-(double)(float)((
                                                  double)((float)((double)(float)(dVar27 * dVar27) *
                                                                 dVar27) * DAT_007358cc +
                                                         (float)((double)(float)(dVar27 * dVar27) *
                                                                 (double)DAT_007358c8 +
                                                                (double)(float)(dVar27 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar28) - dVar42) * dVar29 -
                                                  dVar42));
                        }
                      }
                      if (dVar41 < dVar39) {
                        dVar38 = dVar45;
                        iVar14 = CollLine(0x951500,local_2c0,6,lVar12,0);
                        pMVar18 = pMVar17;
                        if (iVar14 != 0) break;
                        dVar23 = -dVar25;
                        if (dVar26 < dVar37) {
                          dVar22 = dVar24;
                          pMVar17 = moby_00;
                        }
                      }
                    }
                  }
                }
                moby_00 = (MobyInstance *)moby_00->pChain;
                pMVar18 = pMVar17;
              } while (moby_00 != (MobyInstance *)0x0);
              if (pMVar18 != (MobyInstance *)0x0) {
                *(MobyInstance **)((int)pvVar8 + 0x10) = pMVar18;
              }
            }
          }
          FastEulerToMtx1(auStack_1c0,&DAT_008ad140);
          FastMtxCopyNoTranslate(auStack_180,lVar12 + 0xc0);
          FastVecMtx4Mul(aVStack_140,auStack_180,auStack_1c0);
          FastApplyTransform(&(pMVar19->transform).v0,aVStack_140);
          pMVar19->modeBits = pMVar19->modeBits | NO_POST_UPDATE;
          PostUpdateMobyLockTransform(pMVar19);
          puVar9 = *(undefined4 **)(*(int *)&pMVar19->pClass->bangles + 8);
          if (puVar9 != (undefined4 *)0x0) {
            (*(code *)*puVar9)((double)*(float *)((int)pvVar8 + 0x18),pMVar19,&local_300,
                               *(undefined4 *)((int)pvVar8 + 0x10));
          }
          DAT_0096bd58 = DAT_0096bd58 + -1;
          if (DAT_0096bd58 < 1) {
            auVar46 = ZEXT416(0xffffffff);
            auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
            auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
            auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar46 = vectorMultiplyAddFloatingPoint
                                (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 |
                                         auVar46 << 0x60,auVar47);
            auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
            auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,
                                uVar20);
            *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
            DAT_0096ad8c = 0;
            moby->state = '\x01';
          }
          else {
            DAT_0096ad8c = 0;
            moby->state = '\x04';
          }
        }
      }
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 == '\x04') {
    FastDecTimerS32(uVar20 + 8);
    if (*(int *)((int)pvVar8 + 8) == 0) {
      Hero_EndFiringAnim();
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      local_f8 = (longlong)(int)(animationSpeed * 0.5);
      MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 0.5));
      Hero_EndFiringAnim();
    }
    if ((g_Pad.downButtons & DAT_0096ad80) == 0) {
      *(undefined4 *)((int)pvVar8 + 0xc) = 0;
    }
    iVar14 = FastDecTimerS32(uVar20 + 0x14);
    if ((iVar14 != 0) ||
       ((*(int *)((int)pvVar8 + 0x10) != 0 &&
        ((*(byte *)(*(int *)((int)pvVar8 + 0x10) + 0x20) & 0x80) != 0)))) {
      *(undefined4 *)((int)pvVar8 + 0x10) = 0;
    }
    if (g_heroState == FIRST_PERSON_VIEW) {
      TransitionMovement(0x1e,1);
    }
    if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)
        ) && (DAT_0096bd8c == '\0')) {
      FastApplyTransform(aVStack_2a0,(Vec4 *)&GameCamera);
      FastNormalizeRMtx4(auStack_240,aVStack_2a0);
      FUN_005e825c(local_320,local_320,auStack_240);
      iVar14 = CollLine(0x951500,local_310,0,lVar12,0);
      pMVar19 = g_CollOutput.pMoby;
      if (((iVar14 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
         (((g_CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        *(MobyInstance **)((int)pvVar8 + 0x10) = g_CollOutput.pMoby;
        auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar47);
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x14,
                            uVar20);
        *(undefined4 *)((int)pvVar8 + 0x14U & 0xfffffffc) = uVar11;
        *(float *)((int)pvVar8 + 0x18) = g_CollOutput.ip.z - (pMVar19->pos).z;
      }
      if ((*(int *)((int)pvVar8 + 0x10) == 0) || (*(int *)((int)pvVar8 + 8) != 0)) {
        DrawTargetCrosshair(1.0,moby,0xff0f0fff,0x488e58);
      }
      else {
        DrawTargetCrosshair(1.0,moby,0xff0fff0f,0x488e58);
      }
    }
    iVar14 = DAT_0096af98;
    if (DAT_0096af90 != 0) {
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      *(int *)((int)pvVar8 + 0x10) = DAT_0096af98;
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x14,uVar20)
      ;
      *(undefined4 *)((int)pvVar8 + 0x14U & 0xfffffffc) = uVar11;
      *(float *)((int)pvVar8 + 0x18) = g_CollOutput.ip.z - *(float *)(iVar14 + 0x18);
    }
    if ((((((*(int *)((int)pvVar8 + 0xc) == 0) && (0 < DAT_0096bd58)) &&
          (*(int *)((int)pvVar8 + 8) == 0)) &&
         (((g_Pad.downButtons & DAT_0096ad80) != 0 &&
          (g_heroStateType != 3 && g_heroStateType != 7)))) &&
        (g_heroStateType != 0x12)) &&
       (((g_heroStateType != 0x11 && (DAT_0096bd8c == '\0')) &&
        ((DAT_0096bd87 == '\0' &&
         (local_f8 = (longlong)(int)(animationSpeed * 22.5),
         (int)(animationSpeed * 22.5) < DAT_0096ad90)))))) {
      Hero_PlayFiringAnim();
      local_f8 = (longlong)(int)(animationSpeed * 2.5);
      MB_SetAnimation(lVar12,5,0,(int)(animationSpeed * 2.5));
      fVar3 = animationSpeed;
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      DAT_0096ad8c = 2;
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = loadVectorLeftIndexed(0x2c,0x488e58);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,uVar20);
      *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
      if (DAT_00a0fd6c != -1) {
        DAT_00a0fd6c = DAT_00a0fd6c + 1;
      }
      iVar14 = (int)(fVar3 * ((float)(longlong)g_GameFrameCount + 0.5));
      local_f8 = (longlong)iVar14;
      if ((int)(uint)DAT_00a0fd6e < iVar14 / 600) {
        sVar7 = (short)(iVar14 >> 0x1f);
        DAT_00a0fd6e = ((short)(iVar14 / 600) + sVar7) -
                       ((short)((short)(iVar14 / 0x2580000) + sVar7) >> 0xf);
      }
      DAT_00a0fd70 = DAT_00a0fd70 | 1 << (Level & 0x3f) | 0x80000000;
      moby->state = '\x05';
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 == '\x03') {
    if ((moby->animationId != '\x03') &&
       ((moby->animationId != '\0' || ((moby->field43_0x70 & 2U) != 0)))) {
      local_f8 = (longlong)(int)(animationSpeed * 5.5);
      MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 5.5));
    }
    FastDecTimerS32(uVar20 + 8);
    if (DAT_0096bd5c == 0) {
      if ((int)(((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) &
                0xfffffffb) + 10) <= DAT_0096bd58) goto LAB_00489754;
      if (g_heroStateType < 5) {
        if (g_heroStateType < 2) {
          if (-1 < g_heroStateType) {
LAB_00489720:
            if (((((g_Pad.downButtons & DAT_0096ad80) != 0) || (*(int *)((int)pvVar8 + 8) != 0)) &&
                (DAT_0096bd8c == '\0')) && (DAT_0096bd87 == '\0')) goto LAB_00489874;
          }
        }
        else if ((g_heroStateType != 3) && (g_heroState != TAKING_DAMAGE_LAVA))
        goto LAB_00489720;
      }
      else if (g_heroStateType < 0xc) {
        if (g_heroStateType < 6) goto LAB_00489720;
      }
      else if (g_heroStateType < 0xd) goto LAB_00489720;
LAB_00489754:
      Hero_EndFiringAnim();
      iVar14 = *(int *)((int)pvVar8 + 4);
      if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
         (g_SoundChannels[iVar14].state != '\0')) {
        sound_Kill(iVar14);
      }
      *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
      M849_00488bf8(lVar12);
      DAT_0096ad8c = 0;
      if (DAT_0096bd58 < 1) {
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 4.5));
        moby->state = '\x01';
      }
      else {
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        *(undefined4 *)((int)pvVar8 + 0xc) = 1;
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        moby->state = '\x04';
      }
    }
    else {
LAB_00489874:
      if ((moby->field43_0x70 & 2U) != 0) {
        local_f8 = (longlong)(int)(animationSpeed * 2.5);
        MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 2.5));
      }
      M849_00488250(lVar12,uVar20);
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 != '\x02') {
    if (uVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        local_f8 = (longlong)(int)(animationSpeed * 0.5);
        MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 0.5));
      }
      FastDecTimerS32(uVar20 + 8);
      if (*(int *)((int)pvVar8 + 8) == 0) {
        Hero_EndFiringAnim();
      }
      if (DAT_0096bd58 < 1) {
        if ((((g_Pad.downButtons & DAT_0096ad80) != 0) && (*(int *)((int)pvVar8 + 8) == 0)) &&
           ((DAT_0096bd87 == '\0' &&
            ((DAT_0096bd8c == '\0' &&
             (local_f8 = (longlong)(int)(animationSpeed * 15.5),
             (int)(animationSpeed * 15.5) < DAT_0096ad90)))))) {
          if (g_heroStateType < 5) {
            if (g_heroStateType < 2) {
              if (g_heroStateType < 0) goto LAB_0048a5c0;
            }
            else if ((g_heroStateType == 3) || (g_heroState == TAKING_DAMAGE_LAVA))
            goto LAB_0048a5c0;
          }
          else if (g_heroStateType < 0xc) {
            if (5 < g_heroStateType) goto LAB_0048a5c0;
          }
          else if (0xc < g_heroStateType) goto LAB_0048a5c0;
          Hero_PlayFiringAnim();
          iVar14 = PlayMobySound(2,4,moby);
          *(int *)((int)pvVar8 + 4) = iVar14;
          fVar3 = animationSpeed;
          auVar46 = ZEXT416(0xffffffff);
          auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
          auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar46 = loadVectorLeftIndexed(0xc,0x488e58);
          auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar46 = vectorMultiplyAddFloatingPoint
                              (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60
                               ,auVar47);
          auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
          auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,uVar20
                             );
          *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
          if (DAT_00a0fd6c != -1) {
            DAT_00a0fd6c = DAT_00a0fd6c + 1;
          }
          iVar14 = (int)(fVar3 * ((float)(longlong)g_GameFrameCount + 0.5));
          local_f8 = (longlong)iVar14;
          if ((int)(uint)DAT_00a0fd6e < iVar14 / 600) {
            sVar7 = (short)(iVar14 >> 0x1f);
            DAT_00a0fd6e = ((short)(iVar14 / 600) + sVar7) -
                           ((short)((short)(iVar14 / 0x2580000) + sVar7) >> 0xf);
          }
          DAT_00a0fd70 = DAT_00a0fd70 | 1 << (Level & 0x3f) | 0x80000000;
          moby->state = '\x02';
        }
      }
      else {
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        moby->state = '\x04';
      }
    }
    else if (uVar2 == '\0') {
      piVar16 = &DAT_0096bd30;
      bVar1 = DAT_0096bd58 < 1;
      for (iVar14 = 0;
          iVar14 < (int)(((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) &
                         0xfffffffb) + 10); iVar14 = iVar14 + 1) {
        iVar15 = *piVar16;
        if (iVar15 != 0) {
          *(undefined4 *)(iVar15 + 0x94) = 0;
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xefff;
        }
        piVar16 = piVar16 + 1;
      }
      DAT_0096ad8c = 0;
      if (bVar1) {
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        moby->state = '\x01';
      }
      else {
        *(undefined4 *)((int)pvVar8 + 0xc) = 1;
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        moby->state = '\x04';
      }
      DAT_008ad150 = 1;
      DAT_008ad154 = 1;
      DAT_010db6d8 = 0;
    }
    goto LAB_0048a5c0;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    local_f8 = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 5.5));
  }
  if (g_heroStateType < 5) {
    if (g_heroStateType < 2) {
      if (-1 < g_heroStateType) {
LAB_00489488:
        if ((DAT_0096bd8c == '\0') && (DAT_0096bd87 == '\0')) {
          iVar14 = FastDecTimerS32(uVar20 + 8);
          if (iVar14 != 0) {
            auVar46 = ZEXT416(0xffffffff);
            auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
            auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
            auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar46 = vectorMultiplyAddFloatingPoint
                                (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 |
                                         auVar46 << 0x60,auVar47);
            auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
            auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,
                                uVar20);
            *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
            moby->state = '\x03';
          }
          goto LAB_0048a5c0;
        }
      }
    }
    else if ((g_heroStateType != 3) && (g_heroState != TAKING_DAMAGE_LAVA)) goto LAB_00489488;
  }
  else if (g_heroStateType < 0xc) {
    if (g_heroStateType < 6) goto LAB_00489488;
  }
  else if (g_heroStateType < 0xd) goto LAB_00489488;
  iVar14 = *(int *)((int)pvVar8 + 4);
  if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
     (g_SoundChannels[iVar14].state != '\0')) {
    sound_Kill(iVar14);
  }
  *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
  Hero_EndFiringAnim();
  DAT_0096ad8c = 0;
  if (DAT_0096bd58 < 1) {
    *(undefined4 *)((int)pvVar8 + 8) = 0;
    local_f8 = (longlong)(int)(animationSpeed * 4.5);
    MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 4.5));
    moby->state = '\x01';
  }
  else {
    local_f8 = (longlong)(int)(animationSpeed * 4.5);
    MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
    moby->state = '\x04';
  }
LAB_0048a5c0:
  if (iVar10 == 3) {
    iVar10 = *(int *)((int)pvVar8 + 4);
    if (((iVar10 != -1) && (g_SoundChannels[iVar10].pMoby == moby)) &&
       (g_SoundChannels[iVar10].state != '\0')) {
      sound_Kill(iVar10);
    }
    *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
    if ((g_Pad.downButtons & (L1|L2)) != 0) {
      g_Pad.unk0a8 = g_Pad.unk0a8 | 5;
    }
  }
  return;
}


// 0x048a6c8 (0x8 bytes)
undefined8 M849_0048a6c8(void)

{
  return 0;
}


// 0x048a6d0 (0x8 bytes)
undefined8 M849_0048a6d0(void)

{
  return 0;
}


// 0x048a6d8 (0x8 bytes)
undefined8 M849_0048a6d8(void)

{
  return 0;
}


// 0x048a6e0 (0x8 bytes)
undefined8 M849_0048a6e0(void)

{
  return 0;
}


// 0x048a6e8 (0x24 bytes)
void M849_0048a6e8(MobyInstance *param_1)

{
  DeleteMoby(param_1);
  return;
}


// 0x048a70c (0x8 bytes)
undefined8 M849_0048a70c(void)

{
  return 0;
}


// 0x048a718 (0x354 bytes)
// strings: 006586c8: 'MB_Sucking: Tried to suck a NULL pointer!\n'

undefined8 M849_MB_Sucking(MobyInstance *moby)

{
  u8 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *in_r4;
  int in_r5;
  
  if (((((moby != (MobyInstance *)0x0) && (moby->state != 0xfe)) && (moby->state != 0xfd)) &&
      ((moby->pVar != (void *)0x0 && (moby->pClass != (MobyClass *)0x0)))) &&
     (puVar7 = *(undefined4 **)(*(int *)&moby->pClass->bangles + 0x10), puVar7 != (undefined4 *)0x0)
     ) {
    puVar7 = (undefined4 *)(*(code *)*puVar7)(moby);
    uVar1 = moby->animationId;
    if (puVar7 != (undefined4 *)0x0) {
      iVar3 = puVar7[0x1c];
      if (iVar3 == 0) {
        return 0;
      }
      if (((moby == (MobyInstance *)0x0) || (moby->state == 0xfd || moby->state == 0xfe)) ||
         (sVar2 = *(short *)(puVar7 + 0x1a), sVar2 == 8)) {
        return 0;
      }
      *puVar7 = *in_r4;
      puVar7[1] = in_r4[1];
      puVar7[2] = in_r4[2];
      puVar7[3] = 0x3f800000;
      puVar7[0x18] = in_r5;
      if (sVar2 < 3) {
        if (0 < sVar2) {
          if (1 < sVar2) {
            uVar4 = (int)puVar7[0x1b] >> 0x1f;
            if ((int)((uVar4 >> 1 ^ puVar7[0x1b]) - uVar4) < 0x3f800000) {
              return 1;
            }
            return 2;
          }
          uVar4 = (int)puVar7[0x1b] >> 0x1f;
          if (0x3f7fffff < (int)((uVar4 >> 1 ^ puVar7[0x1b]) - uVar4)) {
            if (uVar1 != *(u8 *)(iVar3 + 2)) {
              MB_SetAnimation(moby,*(u8 *)(iVar3 + 2),0,(int)(animationSpeed * 10.5));
            }
            *(undefined2 *)(puVar7 + 0x1a) = 2;
            puVar7[0x1b] = 0;
            return 1;
          }
          if (uVar1 == *(u8 *)(iVar3 + 1)) {
            return 1;
          }
          MB_SetAnimation(moby,*(u8 *)(iVar3 + 1),0,(int)(animationSpeed * 10.5));
          return 1;
        }
      }
      else {
        if (sVar2 < 5) {
          if (sVar2 < 4) {
            return 2;
          }
          return 3;
        }
        if (sVar2 < 8) {
          if (uVar1 != *(u8 *)(iVar3 + 3)) {
            MB_SetAnimation(moby,*(u8 *)(iVar3 + 3),0,(int)(animationSpeed * 10.5));
          }
          puVar7[0x1b] = 0;
          *(undefined2 *)(puVar7 + 0x1a) = 3;
          fVar5 = (moby->pos).y - *(float *)(in_r5 + 0x14);
          fVar6 = (moby->pos).x - *(float *)(in_r5 + 0x10);
          moby->unk58 = 1.0;
          puVar7[0x19] = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
          return 2;
        }
      }
      if (uVar1 != *(u8 *)(iVar3 + 1)) {
        MB_SetAnimation(moby,*(u8 *)(iVar3 + 1),0,(int)(animationSpeed * 10.5));
      }
      *(undefined2 *)(puVar7 + 0x1a) = 1;
      puVar7[0x1b] = 0;
      return 1;
    }
  }
  printf("MB_Sucking: Tried to suck a NULL pointer!\n");
  return 0;
}


// 0x048aa70 (0x238 bytes)
undefined8 M849_0048aa70(MobyInstance *param_1,f32 *param_2)

{
  u8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  GPiece<64> auStack_100;
  GPiece<64> auStack_c0;
  Vec4 aVStack_80 [5];
  
  if (((((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfe)) && (param_1->state != 0xfd))
      && ((param_1->pVar != (void *)0x0 && (param_1->pClass != (MobyClass *)0x0)))) &&
     ((puVar2 = *(undefined4 **)(*(int *)&param_1->pClass->bangles + 0x10),
      puVar2 != (undefined4 *)0x0 && (iVar4 = (*(code *)*puVar2)(param_1), iVar4 != 0)))) {
    if (((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfd && param_1->state != 0xfe)) &&
       (*(short *)(iVar4 + 0x68) != 8)) {
      (param_1->pos).x = *param_2;
      (param_1->pos).y = param_2[1];
      (param_1->pos).z = param_2[2];
      (param_1->pos).w = param_2[3];
      uVar3 = *(uint *)(iVar4 + 0x60);
      FastEulerToMtx1(auStack_100,&DAT_008ad130);
      FastMtxCopyNoTranslate(auStack_c0,(ulonglong)uVar3 + 0xc0);
      FastVecMtx4Mul(aVStack_80,auStack_c0,auStack_100);
      FastApplyTransform(&(param_1->transform).v0,aVStack_80);
      param_1->modeBits = param_1->modeBits | NO_POST_UPDATE;
      PostUpdateMobyLockTransform(param_1);
      PostUpdateMobyLockTransform(param_1);
      if ((g_currentWeaponMoby != (MobyInstance *)0x0) &&
         (g_currentWeaponMoby->oClass == SUCKCANNON_0351)) {
        PlayMobySound(5,0,g_currentWeaponMoby);
      }
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      *(undefined2 *)(iVar4 + 0x68) = 4;
      uVar1 = *(u8 *)(*(int *)(iVar4 + 0x70) + 4);
      if (param_1->animationId != uVar1) {
        MB_SetAnimation(param_1,uVar1,0,(int)(animationSpeed * 10.5));
      }
      param_1->scale = 0.0;
      return 1;
    }
    return 0;
  }
  return 0;
}


// 0x048acb8 (0x328 bytes)
undefined8
M849_0048acb8
          (double param_1,MobyInstance *param_2,undefined4 *param_3,MobyInstance *param_4)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  if (((((param_2 != (MobyInstance *)0x0) && (param_2->state != 0xfe)) && (param_2->state != 0xfd))
      && ((param_2->pVar != (void *)0x0 && (param_2->pClass != (MobyClass *)0x0)))) &&
     (puVar7 = *(undefined4 **)(*(int *)&param_2->pClass->bangles + 0x10),
     puVar7 != (undefined4 *)0x0)) {
    uVar11 = (*(code *)*puVar7)(param_2);
    iVar13 = (int)uVar11;
    if (iVar13 != 0) {
      if (((param_2 != (MobyInstance *)0x0) && (param_2->state != 0xfd && param_2->state != 0xfe))
         && (*(short *)(iVar13 + 0x68) != 8)) {
        param_2->enabled = '\x01';
        iVar12 = param_3[3];
        param_2->modeBits =
             param_2->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE);
        if (iVar12 == 0x3f9e0610) {
          uVar1 = *(u8 *)(*(int *)(iVar13 + 0x70) + 6);
          if (param_2->animationId != uVar1) {
            MB_SetAnimation(param_2,uVar1,0,(int)(animationSpeed * 20.5));
          }
          param_2->collisionMesh = *(float **)(iVar13 + 0x88);
          *(undefined2 *)(iVar13 + 0x68) = 6;
        }
        else {
          uVar1 = *(u8 *)(*(int *)(iVar13 + 0x70) + 5);
          if (param_2->animationId != uVar1) {
            MB_SetAnimation(param_2,uVar1,0,(int)(animationSpeed * 0.5));
          }
          *(undefined2 *)(iVar13 + 0x68) = 5;
        }
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        *(undefined4 *)(iVar13 + 0x10) = *param_3;
        *(undefined4 *)(iVar13 + 0x14) = param_3[1];
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        *(undefined4 *)(iVar13 + 0x18) = param_3[2];
        *(undefined4 *)(iVar13 + 0x1c) = param_3[3];
        auVar14 = loadVectorLeftIndexed(8,0x48aca8);
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                             auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x94,uVar11
                          );
        *(undefined4 *)(iVar13 + 0x94U & 0xfffffffc) = uVar8;
        *(MobyInstance **)(iVar13 + 0x74) = param_4;
        if (param_4 != (MobyInstance *)0x0) {
          iVar12 = MB_GetPvarsIfMobyHasThem(param_4);
          fVar2 = (param_4->pos).x;
          fVar3 = (param_4->pos).y;
          fVar4 = (param_4->pos).z;
          fVar5 = (param_4->pos).w;
          if (iVar12 != 0) {
            *(ushort *)(iVar12 + 0x1e) = *(ushort *)(iVar12 + 0x1e) | 0x80;
          }
          *(f32 *)(iVar13 + 0x40) = fVar2;
          *(f32 *)(iVar13 + 0x44) = fVar3;
          *(f32 *)(iVar13 + 0x4c) = fVar5;
          *(float *)(iVar13 + 0x90) = (float)param_1;
          *(float *)(iVar13 + 0x48) = (float)((double)fVar4 + param_1);
        }
        fVar4 = (param_2->pos).y;
        fVar6 = (param_2->pos).x;
        fVar9 = fVar4 - g_heroPosition.y;
        fVar10 = fVar6 - g_heroPosition.x;
        if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) < 1.0) {
          (param_2->pos).x = fVar6 + *(float *)(iVar13 + 0x10);
          (param_2->pos).y = fVar4 + *(float *)(iVar13 + 0x14);
          (param_2->pos).z = (param_2->pos).z + *(float *)(iVar13 + 0x18);
        }
        if (-1 < *(short *)(iVar13 + 0x9c)) {
          PlayMobySound((int)*(short *)(iVar13 + 0x9c),0,param_2);
        }
        return 2;
      }
      return 0;
    }
  }
  return 0;
}


// 0x048afe8 (0x228 bytes)
undefined8 M849_0048afe8(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (((((param_1 != 0) && (*(char *)(param_1 + 0x20) != -2)) && (*(char *)(param_1 + 0x20) != -3))
      && ((*(int *)(param_1 + 0x78) != 0 && (*(int *)(param_1 + 0x24) != 0)))) &&
     (puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0x10),
     puVar5 != (undefined4 *)0x0)) {
    iVar7 = (*(code *)*puVar5)(param_1);
    iVar6 = DAT_0096bd5c;
    cVar2 = *(char *)(param_1 + 0x53);
    if (iVar7 != 0) {
      if (((param_1 == 0) || (*(char *)(param_1 + 0x20) == -3 || *(char *)(param_1 + 0x20) == -2))
         || (sVar4 = *(short *)(iVar7 + 0x68), sVar4 == 8)) {
        return 0;
      }
      if (sVar4 < 4) {
        if (0 < sVar4) {
          if (sVar4 < 3) {
            cVar3 = *(char *)(*(int *)(iVar7 + 0x70) + 7);
            if (cVar2 != cVar3) {
              MB_SetAnimation(param_1,cVar3,0,(int)(animationSpeed * 10.5));
            }
            *(undefined2 *)(iVar7 + 0x68) = 7;
            return 0;
          }
          if ((*(short *)(iVar7 + 0x6a) != -1) &&
             (bVar1 = 0 < DAT_0096bd5c,
             *(undefined4 *)((int)&DAT_0096bd30 + (int)((longlong)*(short *)(iVar7 + 0x6a) << 2)) =
                  0, bVar1)) {
            DAT_0096bd5c = iVar6 + -1;
          }
          cVar3 = *(char *)(*(int *)(iVar7 + 0x70) + 7);
          if (cVar2 != cVar3) {
            MB_SetAnimation(param_1,cVar3,0,(int)(animationSpeed * 10.5));
          }
          *(undefined2 *)(iVar7 + 0x68) = 7;
          return 0;
        }
        if (sVar4 < 0) {
          return 0;
        }
      }
      else if (sVar4 < 7) {
        if (sVar4 < 5) {
          return 1;
        }
      }
      else if (sVar4 != 9) {
        return 0;
      }
      return 0;
    }
  }
  return 0;
}


// 0x048b288 (0xd80 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M849_0048b288(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar7;
  longlong lVar6;
  int iVar8;
  int iVar9;
  int *r;
  int *g;
  int *b;
  uint uVar10;
  int iVar11;
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
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> local_1d0;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<80> auStack_190;
  int local_140 [18];
  longlong local_f8;
  
  dVar24 = 0.0;
  uVar23 = 0x4000000000000000;
  dVar13 = (double)FastIntToDouble(g_goldWeaponsArray.suckCannon);
  dVar22 = 1.0;
  dVar27 = (double)(float)(dVar13 + 1.0);
  fVar2 = GameCamera.posY - *(float *)(param_1 + 0x14);
  fVar3 = GameCamera.posX - *(float *)(param_1 + 0x10);
  uVar10 = ((uint)(ZERO_MASK((uint)g_goldWeaponsArray.suckCannon)) & 1) + 1;
  fVar4 = GameCamera.posZ - *(float *)(param_1 + 0x18);
  dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (10 / uVar10 != 0) {
    iVar7 = 0;
    dVar21 = -1.0;
    dVar20 = 3.5;
    dVar18 = 6.5;
    dVar17 = 60.5;
    dVar16 = 120.5;
    do {
      MB_randRangeFloat((float)dVar21,(float)dVar22);
      MB_randRangeFloat((float)dVar21,(float)dVar22);
      MB_randRangeFloat((float)dVar24,(float)dVar22);
      MB_randRangeFloat((float)dVar20,(float)dVar18);
      iVar11 = (int)((double)animationSpeed * dVar16);
      local_f8 = (longlong)iVar11;
      uVar5 = MB_randRange((int)((double)animationSpeed * dVar17),iVar11);
      FUN_0020bb70(param_1 + 0x10,local_1c0,uVar5,0,g_goldWeaponsArray.suckCannon);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(10 / uVar10));
  }
  iVar7 = 4;
  iVar11 = 0;
  if (4 / uVar10 != 0) {
    dVar21 = -1.0;
    dVar20 = 6.5;
    dVar18 = 10.0;
    dVar17 = 60.5;
    dVar16 = 90.5;
    do {
      MB_randRangeFloat((float)dVar21,(float)dVar22);
      MB_randRangeFloat((float)dVar21,(float)dVar22);
      MB_randRangeFloat((float)dVar24,(float)dVar22);
      MB_randRangeFloat((float)dVar20,(float)dVar18);
      iVar12 = (int)((double)animationSpeed * dVar16);
      local_f8 = (longlong)iVar12;
      uVar5 = MB_randRange((int)((double)animationSpeed * dVar17),iVar12);
      FUN_0020bb70(param_1 + 0x10,local_1a0,uVar5,1,g_goldWeaponsArray.suckCannon);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(4 / uVar10));
  }
  dVar16 = -1.0;
  MB_randRangeFloat(-1.0,(float)dVar22);
  MB_randRangeFloat((float)dVar16,(float)dVar22);
  MB_randRangeFloat((float)dVar16,(float)dVar22);
  dVar16 = 10.0;
  iVar11 = param_1 + 0x10;
  local_f8 = (longlong)(int)(animationSpeed * 90.5);
  uVar5 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
  FUN_0020bb70(iVar11,local_1b0,uVar5,1,g_goldWeaponsArray.suckCannon);
  if (dVar13 < 6.0) {
    iVar7 = FastDoubleToInt(dVar13);
    iVar7 = iVar7 + 1;
  }
  iVar12 = 0;
  if (dVar13 - 7.0 < 0.0) {
    dVar24 = (double)(float)(7.0 - dVar13);
  }
  if (0 < iVar7) {
    dVar26 = 8.0;
    dVar21 = 15.5;
    dVar25 = (double)(float)(dVar27 * 400000.0);
    dVar20 = 20.5;
    dVar18 = 25.5;
    dVar17 = 30.5;
    do {
      dVar14 = (double)MB_randRangeFloat((float)dVar26,(float)dVar16);
      dVar15 = (double)g_FrameTime;
      local_140[6] = 0x4f008fff;
      local_140[7] = 0x4f008fff;
      local_140[8] = 0x4f007fff;
      local_140[9] = 0x4f006fff;
      local_140[10] = 0x2fffffff;
      local_140[0xb] = 0x2fffffff;
      local_140[0xc] = 0x2f005f7f;
      local_140[0xd] = 0x2f004f7f;
      local_140[0xe] = 0x2f003f7f;
      local_140[0xf] = 0x2f00004f;
      dVar19 = (double)(float)((double)(float)(dVar14 * dVar27) * dVar15 -
                              (double)(float)(dVar15 * dVar24));
      local_140[0x10] = 0x2f000000;
      local_140[0x11] = 0x3f000000;
      lVar6 = MB_randInt
                        ((double)(float)(dVar14 * dVar27),dVar15,(double)(float)(dVar15 * dVar24),6)
      ;
      iVar8 = ReorderRGB
                        (*(int *)((int)local_140 + (int)(lVar6 << 2) + 0x18),
                         (uint)g_goldWeaponsArray.suckCannon);
      lVar6 = MB_randInt(6);
      iVar9 = ReorderRGB
                        (*(int *)((int)local_140 + (int)(lVar6 << 2) + 0x30),
                         (uint)g_goldWeaponsArray.suckCannon);
      iVar1 = (int)((double)animationSpeed * dVar20);
      local_f8 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar17);
      local_f8 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
      SpawnPart_11(dVar25,dVar19,iVar11,local_1d0,iVar8,iVar9);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar7);
  }
  if (9.0 < dVar13) {
    dVar24 = (double)(float)(dVar27 * 4.0);
    local_f8 = (longlong)(int)(animationSpeed * 15.5);
    FUN_004d4138(dVar24,param_1,iVar11,local_1d0);
    local_140[1] = 0x20;
    local_140[2] = 0;
    local_140[0] = 0x7f;
    ReorderRGB(local_140,local_140 + 1,local_140 + 2,(uint)g_goldWeaponsArray.suckCannon);
    local_f8 = (longlong)(int)(animationSpeed * 24.5);
    FUN_004d4138(dVar24,param_1,iVar11,local_1d0);
  }
  r = local_140 + 3;
  g = local_140 + 4;
  local_140[3] = 0x7f;
  local_140[4] = 0x3f;
  b = local_140 + 5;
  local_140[5] = 0;
  ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  local_f8 = (longlong)(int)(animationSpeed * 20.5);
  FUN_004d4138((double)(float)(dVar27 * 4.0),param_1,iVar11,local_1d0);
  local_140[5] = 0;
  local_140[3] = 0x60;
  local_140[4] = 0x10;
  ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  local_f8 = (longlong)(int)(animationSpeed * 27.5);
  FUN_004d4138((double)(float)(dVar27 * 3.5),param_1,iVar11,local_1d0);
  local_140[4] = 0;
  local_140[5] = 0;
  local_140[3] = 0x20;
  ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  uVar5 = 0x4008000000000000;
  local_f8 = (longlong)(int)(animationSpeed * 29.5);
  FUN_004d4138((double)(float)(dVar27 * 3.0),param_1,iVar11,local_1d0);
  auVar28 = ZEXT416(0xffffffff);
  auVar29 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
  auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
  fVar2 = 0.35;
  if (dVar13 - 20.0 < 0.0) {
    fVar2 = (float)(dVar13 * 0.017500000074505806);
  }
  GameCamera.shake.strength = 0.4 - fVar2;
  auVar30 = loadVectorLeftIndexed(0x48,0x48b210);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar29
                      );
  auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
  auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  GameCamera.shake.time =
       storeVectorElementWordIndexed
                 (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x168,0x9513c0);
  FUN_003fda38(auStack_190,iVar11,0,0);
  if (g_goldWeaponsArray.suckCannon != '\0') {
    uVar5 = CollMobySphere(uVar5,iVar11);
    MB_DamageMobyList
              (uVar23,dVar22,dVar22,param_1,2,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18),&g_CollMobyHits,uVar5,0,&DAT_00830000);
  }
  return;
}


// 0x048c008 (0xfc bytes)
void M849_0048c008(MobyInstance *param_1,int param_2,char param_3)

{
  float fVar1;
  MobyClass *pMVar2;
  undefined4 *puVar3;
  Vec4 aVStack_60 [4];
  
  if (param_3 != '\0') {
    M849_0048b288(param_1,param_2);
  }
  param_1->collisionMesh = *(float **)(param_2 + 0x84);
  puVar3 = (undefined4 *)((uint)&param_1->rotation & 0xfffffff0);
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  FastEulerToMtx1(aVStack_60,&param_1->rotation);
  FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  PostUpdateMobyLockTransform(param_1);
  pMVar2 = param_1->pClass;
  param_1->collisionMesh = *(float **)(param_2 + 0x84);
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_UPDATE|DISABLED);
  fVar1 = pMVar2->gScale;
  *(undefined2 *)(param_2 + 0x68) = 0;
  param_1->scale = fVar1;
  puVar3 = *(undefined4 **)(*(int *)&pMVar2->bangles + 0x14);
  if (puVar3 == (undefined4 *)0x0) {
    DeleteMoby(param_1);
  }
  else {
    (*(code *)*puVar3)(param_1);
  }
  return;
}


// 0x048c188 (0x1290 bytes)
// strings: 006586f4: 'SUCKSTATE_DEATH: should not be called any more!\n'

undefined8 FUN_0048c188(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  f32 fVar9;
  MobyClass *pMVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  vec4 *pvVar21;
  float *pfVar22;
  short sVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  GPiece<16> local_300;
  float afStack_2f0 [4];
  GPiece<16> auStack_2e0;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  GPiece<16> local_2c0;
  GPiece<16> local_2b0;
  GPiece<16> local_2a0;
  GPiece<16> local_290;
  GPiece<16> local_280;
  GPiece<16> local_270;
  GPiece<16> auStack_260;
  float afStack_250 [4];
  float afStack_240 [4];
  GPiece<16> auStack_230;
  GPiece<16> auStack_220;
  GPiece<16> auStack_210;
  GPiece<48> auStack_200;
  Vec4 aVStack_1d0 [4];
  float afStack_190 [16];
  GPiece<64> auStack_150;
  GPiece<64> auStack_110;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  GPiece<56> auStack_b0;
  
  if (((param_1 == (MobyInstance *)0x0) || (param_1->state == 0xfe)) || (param_1->state == 0xfd)) {
    return 0;
  }
  pfVar16 = (float *)FUN_00486828(param_1);
  if (pfVar16 != (float *)0x0) {
    fVar1 = (param_1->pos).x;
    pfVar16[0xc] = fVar1;
    fVar2 = (param_1->pos).y;
    pfVar16[0xd] = fVar2;
    fVar9 = (param_1->pos).z;
    fVar3 = (param_1->pos).z;
    uVar17 = (int)fVar9 >> 0x1f;
    pfVar16[0xe] = fVar3;
    sVar23 = *(short *)(pfVar16 + 0x1a);
    pfVar16[0xf] = (param_1->pos).w;
    iVar19 = (uVar17 >> 1 ^ (uint)fVar9) - uVar17;
    if (sVar23 < 4) {
      if (sVar23 < 2) {
        if (0 < sVar23) {
          dVar24 = (double)FUN_005e8338((double)(*pfVar16 - fVar1),(double)(pfVar16[1] - fVar2));
          dVar24 = (double)FastWrapRot((float)dVar24,3.1415927);
          OrganicDeltAngSpeed
                    (dVar24,(double)(DAT_0071f40c * 0.19634955),(double)(DAT_0071f40c * 0.19634955),
                     (double)(DAT_0071f408 * 0.3927),param_1,&DAT_00720000,param_2 + 0x44);
          dVar28 = 0.009999999776482582;
          dVar27 = (double)(param_1->rotation).z;
          dVar25 = (double)FastDiffRots(dVar24,0x3f847ae140000000);
          if (dVar25 < dVar27) {
            dVar25 = (double)(param_1->rotation).z;
            dVar24 = (double)FastWrapRot((float)dVar24,(float)dVar28);
            if (dVar25 < dVar24) {
              *(undefined2 *)(pfVar16 + 0x1a) = 2;
              pfVar16[0x1b] = 0.0;
            }
          }
          pfVar16[7] = 0.0;
          pfVar16[6] = 0.0;
          pfVar16[5] = 0.0;
          pfVar16[4] = 0.0;
        }
      }
      else if (sVar23 < 3) {
        dVar25 = (double)pfVar16[0x1b];
        dVar27 = 1.0;
        param_1->unk58 = (float)(dVar25 + 1.0);
        dVar24 = (double)FastIntToDouble((int)(animationSpeed * 1.5));
        fVar1 = (float)(dVar25 + (double)(float)(dVar27 / dVar24));
        dVar24 = (double)fVar1;
        pfVar16[0x1b] = fVar1;
        fVar1 = (param_1->pos).z;
        if (dVar27 < dVar24) {
          pfVar16[0x1b] = 1.0;
          dVar24 = dVar27;
        }
        (param_1->pos).z = (float)(dVar24 * 0.009999999776482582) * DAT_0071f408 + fVar1;
        MB_TransformToQuat(pfVar16 + 8,&param_1->transform);
        pfVar16[7] = 0.0;
        pfVar16[6] = 0.0;
        pfVar16[5] = 0.0;
        pfVar16[4] = 0.0;
      }
      else {
        param_1->enabled = '\x01';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        dVar25 = (double)pfVar16[0x1b];
        uVar17 = (int)pfVar16[0x1b] >> 0x1f;
        dVar24 = 1.0;
        if ((int)((uVar17 >> 1 ^ (uint)pfVar16[0x1b]) - uVar17) < 0x3f800000) {
          dVar27 = (double)FastIntToDouble((int)(animationSpeed * 30.5));
          pfVar16[0x1b] = (float)(dVar25 + (double)(float)(dVar24 / dVar27));
          FastEulerToMtx1(auStack_150,local_300);
          FastMtxCopyNoTranslate(aVStack_1d0,(ulonglong)(uint)pfVar16[0x18] + 0xc0);
          FastVecMtx4Mul(afStack_190,aVStack_1d0,auStack_150);
          MB_MtxToQuat(afStack_2f0,afStack_190);
          FastSlerp((double)pfVar16[0x1b],auStack_2e0,pfVar16 + 8,afStack_2f0);
          FastQuaternionToMtx4Identity(auStack_2e0,aVStack_1d0);
          FastApplyTransform(&(param_1->transform).v0,aVStack_1d0);
          param_1->modeBits =
               param_1->modeBits &
               (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | NO_POST_UPDATE;
        }
        else {
          pfVar16[0x1b] = 1.0;
        }
        GetBonePosition(pfVar16[0x18],0,&local_2d0);
        fVar1 = (param_1->pos).y - local_2cc;
        fVar2 = (param_1->pos).x - local_2d0;
        dVar24 = 2.0;
        dVar25 = 0.5;
        pMVar10 = param_1->pClass;
        dVar27 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
        param_1->scale = pMVar10->gScale * ((float)(dVar27 / (double)(pfVar16[0x19] * 2.0)) + 0.5);
        fVar1 = DAT_0071f40c * 0.11 + pfVar16[0x26];
        pfVar16[0x26] = fVar1;
        fVar2 = DAT_0071f408 * 0.75;
        if (fVar2 < fVar1) {
          pfVar16[0x26] = fVar2;
          fVar1 = fVar2;
        }
        if (dVar27 < (double)(fVar1 * 70.0)) {
          MB_SetAnimation(pfVar16[0x18],4,0,(int)(animationSpeed * 2.5));
          pMVar10 = param_1->pClass;
        }
        if (dVar27 < 3.0) {
          DAT_0096ad8c = 2;
          param_1->collision = (ushort *)0x0;
        }
        if ((double)pfVar16[0x26] <= dVar27) {
          FastNormalizeRMtx4(auStack_110,&DAT_0096a320);
          fVar1 = (param_1->pos).x - local_2d0;
          fVar2 = (param_1->pos).y - local_2cc;
          FUN_005e825c(local_2b0,local_2b0,auStack_110);
          dVar27 = (double)fVar1;
          if ((int)fVar1 < 0) {
            dVar28 = dVar24;
            if (-dVar27 - dVar24 < 0.0) {
              dVar28 = -dVar27;
            }
            dVar25 = -2.0;
            if (-2.0 - dVar27 < 0.0) {
              dVar25 = dVar27;
            }
            dVar24 = (double)(float)(dVar27 * -0.5);
            if (0.0 - fVar2 < 0.0) {
              dVar25 = dVar28;
            }
          }
          else {
            dVar27 = (double)fVar2;
            dVar28 = ABS(dVar27);
            dVar25 = (double)(float)(dVar27 * dVar25);
            if (dVar28 - dVar24 < 0.0) {
              dVar24 = dVar28;
            }
          }
          FUN_005e7d64(local_2a0,local_2a0,&DAT_0096a320);
          STUB_00065468(local_290,&local_2d0);
          fVar1 = (param_1->pos).x;
          fVar2 = (param_1->pos).y;
          fVar3 = (param_1->pos).z;
          FUN_005e7f98((double)pfVar16[0x26],local_2c0,local_2c0);
          (param_1->pos).x = (param_1->pos).x + ((local_2d0 + (float)dVar24) - fVar1);
          (param_1->pos).y = (param_1->pos).y + ((local_2cc + (float)dVar25) - fVar2);
          (param_1->pos).z = (param_1->pos).z + (local_2c8 - fVar3);
          PostUpdateMobyLockTransform(param_1);
        }
        else {
          DAT_0096bd5c = DAT_0096bd5c + -1;
          DAT_0096bd58 = DAT_0096bd58 + 1;
          puVar11 = *(undefined4 **)(*(int *)&pMVar10->bangles + 4);
          if (puVar11 != (undefined4 *)0x0) {
            (*(code *)*puVar11)(param_1,&local_2d0);
          }
          iVar19 = *(int *)((int)&DAT_0096bd30 +
                           (int)((longlong)*(short *)((int)pfVar16 + 0x6a) << 2));
          *(ushort *)(iVar19 + 0x34) = *(ushort *)(iVar19 + 0x34) & 0xefff;
        }
      }
    }
    else if (sVar23 < 7) {
      if (sVar23 < 5) {
        param_1->enabled = '\0';
        param_1->collision = (ushort *)0x0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_UPDATE|DISABLED) | (NO_UPDATE|DISABLED);
        if ((param_1->field43_0x70 & 2U) != 0) {
          if (param_1->animationId != *(u8 *)((int)pfVar16[0x1c] + 4)) {
            MB_SetAnimation
                      (param_1,*(u8 *)((int)pfVar16[0x1c] + 4),0,(int)(animationSpeed * 3.5));
          }
          param_1->scale = param_1->pClass->gScale * 0.3;
          puVar11 = (undefined4 *)((uint)&param_1->rotation & 0xfffffff0);
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
        }
      }
      else {
        param_1->enabled = '\x01';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        uVar26 = 0x4000000000000000;
        if (iVar19 < 0x40000000) {
          M849_0048c008(param_1,pfVar16,0);
          return 0;
        }
        dVar27 = (double)pfVar16[4];
        fVar4 = param_1->pClass->gScale;
        dVar25 = (double)pfVar16[5];
        dVar24 = (double)pfVar16[6];
        fVar5 = pfVar16[0x1f] * DAT_0071f408 * fVar4 + param_1->scale;
        param_1->scale = fVar5;
        if (fVar4 < fVar5) {
          param_1->scale = fVar4;
        }
        fVar4 = pfVar16[0x1d];
        if (((fVar4 != 0.0) &&
            (*(char *)((int)fVar4 + 0x20) != -3 && *(char *)((int)fVar4 + 0x20) != -2)) &&
           ((int)pfVar16[0x25] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5))) {
          fVar5 = *(float *)((int)fVar4 + 0x10);
          fVar12 = *(float *)((int)fVar4 + 0x18) + pfVar16[0x24];
          fVar6 = *(float *)((int)fVar4 + 0x14);
          fVar4 = *(float *)((int)fVar4 + 0x1c);
          fVar2 = fVar6 - fVar2;
          fVar7 = pfVar16[0x10];
          fVar1 = fVar5 - fVar1;
          fVar3 = fVar12 - fVar3;
          fVar13 = fVar6 - pfVar16[0x11];
          pfVar16[0x10] = fVar5;
          fVar5 = fVar5 - fVar7;
          pfVar16[0x11] = fVar6;
          fVar6 = fVar12 - pfVar16[0x12];
          pfVar16[0x12] = fVar12;
          pfVar16[0x13] = fVar4;
          dVar28 = (double)SQRT(pfVar16[6] * pfVar16[6] +
                                pfVar16[4] * pfVar16[4] + pfVar16[5] * pfVar16[5]);
          fVar7 = (fVar6 * fVar3 + fVar5 * fVar1 + fVar13 * fVar2) * -2.0;
          fVar4 = (float)(dVar28 * dVar28 -
                         (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar13 * fVar13));
          fVar14 = fVar7 * fVar7 - -((fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) * fVar4 * 4.0);
          fVar15 = SQRT(fVar14);
          fVar12 = (fVar15 - fVar7) / (fVar4 * 2.0);
          fVar7 = (-fVar7 - fVar15) / (fVar4 * 2.0);
          if ((fVar4 == 0.0) || (fVar14 < 0.0)) {
            fVar4 = -1.0;
          }
          else if ((fVar12 <= 0.0) || (fVar7 <= 0.0)) {
            fVar4 = -1.0;
            if (0.0 - fVar7 < 0.0) {
              fVar4 = fVar7;
            }
            if (0.0 - fVar12 < 0.0) {
              fVar4 = fVar12;
            }
          }
          else {
            fVar4 = fVar7;
            if (fVar7 - fVar12 < 0.0) {
              fVar4 = fVar12;
            }
          }
          if (fVar4 <= 0.0) {
            FUN_005e7f98((double)(g_FrameTimeSq * 90.0),local_280,local_280);
            pfVar16[4] = pfVar16[4] + fVar1;
            pfVar16[5] = pfVar16[5] + fVar2;
            pfVar16[6] = pfVar16[6] + fVar3;
            FUN_005e7f98(dVar28,pfVar16 + 4,pfVar16 + 4);
          }
          else {
            FUN_005e7f98((double)(g_FrameTimeSq * 90.0),local_270,local_270);
            pfVar16[4] = pfVar16[4] + fVar4 * fVar5 + fVar1;
            pfVar16[5] = pfVar16[5] + fVar4 * fVar13 + fVar2;
            pfVar16[6] = pfVar16[6] + fVar4 * fVar6 + fVar3;
            FUN_005e7f98(dVar28,pfVar16 + 4,pfVar16 + 4);
          }
        }
        pfVar22 = pfVar16 + 4;
        (param_1->pos).x = (param_1->pos).x + pfVar16[4];
        (param_1->pos).y = (param_1->pos).y + pfVar16[5];
        (param_1->pos).z = (param_1->pos).z + pfVar16[6];
        SetCollDamIn(uVar26,auStack_200,param_1,0x430000);
        uVar26 = 0x3ff0000000000000;
        FUN_005e84c0(0x3ff0000000000000,auStack_200,auStack_200);
        pvVar21 = &param_1->pos;
        uVar17 = CollMobySphere((double)pfVar16[0x20],pvVar21,1,1,param_1,auStack_200);
        uVar18 = CollSphere((double)pfVar16[0x20],pvVar21);
        fVar1 = g_CollOutput.push.x;
        uVar17 = uVar17 | uVar18;
        sVar23 = *(short *)(pfVar16 + 0x1a);
        MVar8 = param_1->modeBits;
        pMVar10 = param_1->pClass;
        if (uVar17 != 0) {
          (param_1->pos).x = g_CollOutput.push.x;
          fVar2 = g_CollOutput.push.y;
          (param_1->pos).y = g_CollOutput.push.y;
          fVar3 = g_CollOutput.push.z;
          (param_1->pos).z = g_CollOutput.push.z;
          (param_1->pos).w = g_CollOutput.push.w;
          pfVar16[0x14] = g_CollOutput.ip.x - fVar1;
          pfVar16[0x15] = g_CollOutput.ip.y - fVar2;
          pfVar16[0x16] = g_CollOutput.ip.z - fVar3;
          pfVar16[0x17] = g_CollOutput.ip.w;
        }
        if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && ((g_CollOutput.pMoby)->oClass == RATCHET)) {
          uVar17 = 0;
        }
        if (sVar23 == 6) {
          param_1->collision = pMVar10->collision;
          param_1->modeBits =
               MVar8 & (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) |
               NO_POST_UPDATE;
          pfVar16[0x14] = 0.0;
          pfVar16[0x16] = 1.0;
          pfVar16[0x15] = 0.0;
          pfVar16[0x17] = 0.01;
          dVar24 = (double)(SQRT((float)(dVar24 * dVar24 +
                                        (double)(float)(dVar27 * dVar27 +
                                                       (double)(float)(dVar25 * dVar25)))) /
                           pfVar16[0x20]);
          MB_TransformToQuat(auStack_260,&param_1->transform);
          pfVar20 = pfVar16 + 0x14;
          FUN_005e7f98(uVar26,pfVar20,pfVar20);
          MB_WrapRot((float)dVar24);
          FUN_005e7f98(0xbff0000000000000,auStack_230,pfVar22);
          FUN_005e8f4c(afStack_240,auStack_230,pfVar20);
          FUN_005e7f98(uVar26,afStack_240,afStack_240);
          MB_AxisAngleToQuat((float)dVar24,afStack_250,afStack_240);
          FastQuaternionMult(auStack_220,auStack_260,afStack_250);
          FastQuaternionToMtx4Identity(auStack_220,auStack_d0);
          FUN_005e7f98(uVar26,&param_1->transform,auStack_d0);
          FUN_005e7f98(uVar26,&(param_1->transform).v1,auStack_c0);
          FUN_005e7f98(uVar26,&(param_1->transform).v2,auStack_b0);
        }
        if (uVar17 != 0) {
          sVar23 = 0;
          if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
             ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) {
            sVar23 = (short)(g_CollOutput.pMoby)->pClass->mode_bits;
          }
          FUN_005e7f98(uVar26,0xa10980,0xa10980);
          if (param_1->animationId != *(u8 *)((int)pfVar16[0x1c] + 6)) {
            MB_SetAnimation
                      (param_1,*(u8 *)((int)pfVar16[0x1c] + 6),0,(int)(animationSpeed * 20.5));
          }
          param_1->collisionMesh = (float *)pfVar16[0x22];
          *(undefined2 *)(pfVar16 + 0x1a) = 6;
          dVar24 = (double)FUN_005e8338((double)g_CollOutput.normal.z,
                                        (double)SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                                                     g_CollOutput.normal.y * g_CollOutput.normal.y));
          if (0.8726646304130554 < dVar24) {
            if (-1 < *(short *)((int)pfVar16 + 0x9e)) {
              PlayMobySound((int)*(short *)((int)pfVar16 + 0x9e),0,param_1);
            }
            M849_0048c008(param_1,pfVar16,1);
            return 0;
          }
          if (g_goldWeaponsArray.suckCannon != '\0' && 4 < sVar23) {
            if (-1 < *(short *)((int)pfVar16 + 0x9e)) {
              PlayMobySound((int)*(short *)((int)pfVar16 + 0x9e),0,param_1);
            }
            M849_0048c008(param_1,pfVar16,1);
          }
          FastVecReflect(pfVar22,pfVar22,auStack_210);
        }
        iVar19 = FastDecTimerS32(pfVar16 + 0x25);
        if (iVar19 != 0) {
          M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        fVar2 = (param_1->pos).x - g_heroPosition.x;
        if (60.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
          M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        fVar1 = pfVar16[6];
        if (SQRT(fVar1 * fVar1 + pfVar16[4] * pfVar16[4] + pfVar16[5] * pfVar16[5]) <
            DAT_0071f408 * 0.01) {
          M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        pfVar16[6] = -(DAT_0071f40c * 0.00925 - fVar1);
        SpawnPart_18(pvVar21,&param_1->transform);
      }
    }
    else if (sVar23 < 8) {
      param_1->enabled = '\x01';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      pfVar16[6] = -(DAT_0071f40c * 0.013 - pfVar16[6]);
      if (iVar19 < 0x40000000) {
        M849_0048c008(param_1,pfVar16,1);
        return 0;
      }
      uVar26 = 0x3fe99999a0000000;
      FastDoubleToInt((double)(pfVar16[0x23] * 1024.0));
      iVar19 = MB_MoveAndCollide2(uVar26,0,param_1,pfVar16 + 4);
      (param_1->rotation).x = (param_1->rotation).x * 0.6666667;
      (param_1->rotation).y = (param_1->rotation).y * 0.6666667;
      if (iVar19 != 0) {
        (param_1->rotation).x = 0.0;
        (param_1->rotation).y = 0.0;
        param_1->unk58 = 1.0;
        return 1;
      }
      if ((param_1->field43_0x70 & 2U) != 0) {
        param_1->unk58 = pfVar16[0x1e];
      }
    }
    else if (sVar23 < 9) {
      printf("SUCKSTATE_DEATH: should not be called any more!\n");
    }
  }
  if ((param_1->modeBits & NO_POST_UPDATE) != NONE) {
    PostUpdateMobyLockTransform(param_1);
  }
  if (*(short *)(pfVar16 + 0x1a) < 4) {
    fVar1 = pfVar16[3];
    if (((int)pfVar16[3] < 1) &&
       (puVar11 = *(undefined4 **)(*(int *)&param_1->pClass->bangles + 0xc),
       puVar11 != (undefined4 *)0x0)) {
      (*(code *)*puVar11)(param_1);
      fVar1 = pfVar16[3];
    }
    pfVar16[3] = fVar1 - 1.0;
  }
  return 0;
}


// 0x048d430 (0x428 bytes)
void M849_0048d430(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar19;
  undefined8 uVar18;
  float *pfVar21;
  longlong lVar20;
  float *pfVar23;
  longlong lVar22;
  uint uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  puVar10 = (ulonglong *)(uVar16 - 0x140);
  *puVar10 = uVar16;
  puVar10[0x2a] = in_LR;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x22] = unaff_r30;
  puVar10[0x23] = unaff_r31;
  puVar10[0x21] = unaff_r29;
  puVar10[0x20] = unaff_r28;
  uVar17 = GetEffectTex(0x15);
  puVar10[0x1d] = uVar17;
  uVar17 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar10[0x1e] = uVar17;
  uVar17 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar10[0x1c] = uVar17;
  uVar17 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1f] = uVar17;
  dVar29 = (double)DAT_010da310;
  DAT_010da310 = (float)(dVar29 + 0.0010000000474974513);
  dVar31 = 7.0;
  if (7.0 < DAT_010da310) {
    DAT_010da310 = DAT_010da310 - 7.0;
  }
  dVar30 = 0.30000001192092896;
  uVar17 = 1;
  dVar29 = dVar29 + 0.30000001192092896;
  do {
    dVar29 = (double)(float)dVar29;
    dVar28 = (double)DAT_010da314;
    DAT_010da314 = (float)(dVar28 + (double)DAT_008ad158);
    if (dVar31 < (double)DAT_010da314) {
      DAT_010da314 = (float)((double)DAT_010da314 - dVar31);
    }
    iVar25 = 0;
    iVar26 = 0;
    do {
      iVar25 = iVar25 + 1;
      iVar13 = (int)uVar17;
      iVar12 = iVar13 * 0x140;
      pfVar21 = (float *)((int)&DAT_010db6f0 + iVar12 + iVar26);
      fVar1 = *pfVar21;
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = pfVar21[1];
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = pfVar21[2];
      *(float *)(puVar10 + 0xf) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = pfVar21[3];
      pfVar21 = (float *)(&DAT_010db6f0 + (iVar25 % 0x14) * 4 + iVar13 * 0x50);
      pfVar23 = (float *)(iVar26 + 0x10db5b0 + iVar12);
      fVar4 = *pfVar21;
      *(float *)(puVar10 + 0x10) = fVar4;
      fVar1 = fVar1 - fVar4;
      fVar5 = pfVar21[1];
      *(float *)((int)puVar10 + 0x84) = fVar5;
      fVar6 = pfVar21[2];
      *(float *)(puVar10 + 0x11) = fVar6;
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      *(float *)((int)puVar10 + 0x8c) = pfVar21[3];
      fVar7 = *pfVar23;
      puVar19 = (undefined4 *)((iVar25 % 0x14) * 0x10 + 0x10db5b0 + iVar12);
      *(float *)(puVar10 + 0x12) = fVar7;
      fVar8 = pfVar23[1];
      fVar7 = fVar7 - fVar4;
      *(float *)((int)puVar10 + 0x94) = fVar8;
      fVar8 = fVar8 - fVar5;
      fVar11 = pfVar23[2] - fVar6;
      *(float *)(puVar10 + 0x13) = pfVar23[2];
      *(float *)((int)puVar10 + 0x9c) = pfVar23[3];
      fVar14 = GameCamera.posX;
      fVar5 = fVar5 - GameCamera.posY;
      *(undefined4 *)(puVar10 + 0x14) = *puVar19;
      *(undefined4 *)((int)puVar10 + 0xa4) = puVar19[1];
      *(undefined4 *)(puVar10 + 0x15) = puVar19[2];
      *(undefined4 *)((int)puVar10 + 0xac) = puVar19[3];
      if ((fVar1 * fVar8 - fVar2 * fVar7) * (fVar6 - GameCamera.posZ) +
          (fVar2 * fVar11 - fVar3 * fVar8) * (fVar4 - fVar14) +
          (fVar3 * fVar7 - fVar1 * fVar11) * fVar5 < 0.0) {
        iVar12 = (int)((uVar17 & 0xffffffff) << 1);
        sVar9 = *(short *)((int)&DAT_010db6d8 + iVar12);
        lVar27 = 2;
        lVar20 = uVar16 - 0x140;
        do {
          lVar22 = (longlong)sVar9;
          lVar22 = lVar22 + (lVar22 >> 0x3f & -lVar22);
          sVar9 = *(short *)(iVar12 + 0x10db6d6);
          uVar24 = (uint)((lVar22 + (0x40 - lVar22 >> 0x3f & 0x40U - lVar22) & 0xffffffff) << 0x18)
                   | 0x404040;
          *(uint *)((int)lVar20 + 0xb0) = uVar24;
          *(uint *)((int)lVar20 + 0xb4) = uVar24;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        if (iVar13 == 1) {
          *(undefined4 *)((int)puVar10 + 0xbc) = 0x20404040;
          *(undefined4 *)(puVar10 + 0x17) = 0x20404040;
        }
        else if (iVar13 == 9) {
          *(undefined4 *)((int)puVar10 + 0xb4) = 0x404040;
          *(undefined4 *)(puVar10 + 0x16) = 0x404040;
        }
        *(float *)(puVar10 + 0x18) = (float)dVar29;
        *(float *)((int)puVar10 + 0xc4) = (float)dVar28;
        *(float *)(puVar10 + 0x19) = (float)dVar29;
        *(float *)((int)puVar10 + 0xd4) = (float)dVar28;
        fVar1 = (float)(dVar28 + 0.05000000074505806);
        dVar28 = (double)fVar1;
        *(float *)(puVar10 + 0x1a) = (float)(dVar29 - dVar30);
        *(float *)(puVar10 + 0x1b) = (float)(dVar29 - dVar30);
        uVar15 = EffectTexHeaders;
        *(float *)((int)puVar10 + 0xcc) = fVar1;
        *(float *)((int)puVar10 + 0xdc) = fVar1;
        FastDrawQuad(uVar16 - 0xd0,0,0,uVar15,9);
      }
      else {
        dVar28 = (double)(float)(dVar28 + 0.05000000074505806);
      }
      iVar26 = iVar26 + 0x10;
    } while (iVar25 < 0x14);
    uVar17 = uVar17 + 1;
    dVar29 = dVar29 + dVar30;
  } while ((int)uVar17 < 10);
  uVar18 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar18);
  return;
}


// 0x048d858 (0x14 bytes)
void M849_0048d858(void)

{
  DAT_008ad2ec = 0x10000;
  return;
}



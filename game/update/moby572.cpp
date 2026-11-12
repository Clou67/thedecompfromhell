// game/update/moby572.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x3bd678-0x3c0508
// shared update function UpdateMoby_{572_865_866}; registered for oClasses 572, 865, 866
#include "game/update/moby572.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03bd678 (0x14 bytes)
void M866_003bd678(void)

{
  DAT_00845e00 = 0x10000;
  return;
}


// 0x03bd6c0 (0x4ec bytes)
void M866_003bd6c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  longlong local_b0;
  
  iVar12 = 0;
  iVar3 = *(int *)(param_1 + 0x78);
  if (0 < DAT_00845e78) {
    do {
      local_e0 = *(float *)(param_1 + 0x10);
      local_dc = *(undefined4 *)(param_1 + 0x14);
      local_d8 = *(float *)(param_1 + 0x18);
      local_d4 = *(undefined4 *)(param_1 + 0x1c);
      MB_RandomizeVector(DAT_00845e80 * *(float *)(iVar3 + 0x250),&local_e0);
      dVar20 = 1.0;
      local_d8 = local_d8 + 1.0;
      dVar14 = (double)MB_randRot();
      dVar15 = (double)MB_randRangeFloat(DAT_00845e8c,DAT_00845e90);
      dVar16 = (double)MB_randRangeFloat(DAT_00845e94,DAT_00845e98);
      dVar21 = 0.0;
      dVar17 = (double)MB_randRangeFloat(0.0,DAT_010c9f54);
      dVar18 = (double)g_FrameTime;
      fVar2 = (float)(dVar17 * dVar18);
      local_c4 = param_2[3];
      fVar1 = (float)(dVar14 + 1.570796251296997);
      local_c8 = (float)(dVar18 * dVar16 + (double)(param_2[2] * fVar2));
      dVar16 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar16 = dVar14;
      }
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar16 < 0.0) {
        dVar17 = dVar16;
      }
      local_b0 = (longlong)DAT_00845ebc;
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar16 = (double)(float)(dVar17 * dVar17);
      fVar6 = fVar5 * fVar5;
      dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
      fVar1 = fVar6 * fVar6 * fVar5;
      dVar14 = (double)(float)(dVar16 * dVar19);
      fVar4 = fVar6 * fVar1;
      local_cc = (float)(dVar18 * dVar15) *
                 ((float)(dVar16 * dVar14) * 2.601887e-06 +
                 (float)(dVar14 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar16 * dVar17) *
                                                       -0.16666656732559204 + dVar17)))) +
                 param_2[1] * fVar2;
      local_d0 = (float)(dVar18 * dVar15) *
                 (fVar6 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5)
                 + *param_2 * fVar2;
      dVar16 = 0.5;
      iVar13 = 0;
      local_b8 = -(DAT_00845e9c * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_b0 + 0.5)) - local_c8);
      local_c0 = local_d0;
      local_bc = local_cc;
      local_b4 = local_c4;
      if (0 < DAT_00845e7c) {
        dVar14 = 1.5;
        dVar15 = 2.5;
        do {
          dVar17 = (double)MB_randRangeFloat((float)dVar16,(float)dVar14);
          local_c4 = (float)((double)DAT_00845ea0 * dVar17);
          local_b4 = (float)((double)DAT_00845ea4 * dVar17);
          MB_RandomizeVector(DAT_00845e84,&local_e0);
          MB_RandomizeVector(DAT_00845e88 * g_FrameTime,&local_c0);
          uVar8 = DAT_00845eb0;
          uVar7 = DAT_00845ea8;
          MB_randRangeFloat((float)dVar21,(float)dVar20);
          uVar9 = FastLerpColor(uVar7,uVar8);
          uVar8 = DAT_00845eb4;
          uVar7 = DAT_00845eac;
          MB_randRangeFloat((float)dVar21,(float)dVar20);
          uVar10 = FastLerpColor(uVar7,uVar8);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00845eb8 + dVar16);
          local_b0 = (longlong)DAT_00845ec0;
          fVar2 = animationSpeed * (float)((double)(longlong)DAT_00845ebc + dVar16);
          dVar17 = (double)MB_randRangeFloat
                                     ((float)((double)local_b0 * dVar16),
                                      (float)((double)local_b0 * dVar15));
          uVar11 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          SpawnPart_2
                    (&local_e0,&local_d0,&local_c0,uVar9,uVar10,(int)fVar1,(int)fVar2,uVar11);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_00845e7c);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < DAT_00845e78);
  }
  return;
}


// 0x03bdbd0 (0x46c bytes)
void M866_003bdbd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_r7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_b0;
  GPiece<32> local_a0;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar1 = MB_randInt(DAT_00845e6c + -1);
    dVar5 = 0.5;
    dVar6 = 0.0;
    if (iVar1 == 0) {
      MB_randRot();
      MB_randRangeFloat((float)dVar6,DAT_00845e74);
      dVar3 = (double)MB_randRangeFloat((float)dVar6,DAT_00845e44);
      dVar4 = (double)(float)(dVar3 * (double)*(float *)(iVar2 + 0x250));
      dVar3 = (double)MB_randRangeFloat(DAT_00845e44,DAT_00845e48);
      dVar3 = (double)(float)(dVar3 * (double)*(float *)(iVar2 + 0x250));
      MB_randRangeFloat((float)(longlong)DAT_00845e4c,(float)(longlong)DAT_00845e50);
      iVar1 = FastDoubleToInt();
      SpawnPart_52
                (dVar4,dVar3,local_b0,DAT_00845e3c,DAT_00845e40,local_b0,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
    iVar1 = MB_randInt(DAT_00845e70 + -1);
    if (iVar1 == 0) {
      MB_randRot();
      MB_randRangeFloat((float)dVar6,DAT_00845e74);
      dVar6 = (double)MB_randRangeFloat((float)dVar6,DAT_00845e5c);
      dVar3 = (double)(float)(dVar6 * (double)*(float *)(iVar2 + 0x250));
      dVar6 = (double)MB_randRangeFloat(DAT_00845e5c,DAT_00845e60);
      dVar6 = (double)(float)(dVar6 * (double)*(float *)(iVar2 + 0x250));
      MB_randRangeFloat((float)(longlong)DAT_00845e64,(float)(longlong)DAT_00845e68);
      iVar2 = FastDoubleToInt();
      SpawnPart_52
                (dVar3,dVar6,local_a0,DAT_00845e54,DAT_00845e58,local_a0,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar2 + dVar5)));
    }
  }
  return;
}


// 0x03be040 (0xd8 bytes)
MobyInstance * M866_003be040(int param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 120.0;
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if (((((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pMVar7->oClass == EXTERMIBOT))
          && (pMVar7->state < 0x7f)) &&
         (fVar3 = (pMVar7->pos).y - *(float *)(param_1 + 0x14),
         fVar4 = (pMVar7->pos).x - *(float *)(param_1 + 0x10),
         fVar5 = (pMVar7->pos).z - *(float *)(param_1 + 0x18),
         fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), fVar3 < fVar1)) {
        fVar1 = fVar3;
        pMVar8 = pMVar7;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}


// 0x03be118 (0x15c bytes)
MobyInstance * M866_003be118(int param_1)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  MOBY_OCLASSES MVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  MVar5 = ~RATCHET;
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(short *)(param_1 + 0xa6) == 0x23c) {
    MVar5 = MEDIUM_SLIME;
  }
  else if (*(short *)(param_1 + 0xa6) == 0x361) {
    MVar5 = SMALL_SLIME;
  }
  puVar6 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if ((pMVar7->state == '\f') && (pMVar7->oClass == MVar5)) {
        pMVar7->updateDistance = *(char *)(param_1 + 0x30);
        pMVar7->drawDistance = *(short *)(param_1 + 0x32);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        pMVar7->enabled = '\x01';
        pMVar7->color = (int)((ulonglong)uVar4 >> 0x20);
        pMVar7->light = (int)uVar4;
        pMVar7->collision = pMVar7->pClass->collision;
        pMVar7->modeBits = *(MobyModeBit *)(param_1 + 0x34);
        (pMVar7->pos).x = *(f32 *)(param_1 + 0x10);
        pvVar3 = pMVar7->pVar;
        (pMVar7->pos).y = *(f32 *)(param_1 + 0x14);
        (pMVar7->pos).z = *(f32 *)(param_1 + 0x18);
        (pMVar7->pos).w = *(f32 *)(param_1 + 0x1c);
        (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
        (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
        (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
        (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
        *(undefined4 *)((int)pvVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)((int)pvVar3 + 0x224) = *(undefined4 *)(iVar2 + 0x224);
        UpdateMobyTransform(pMVar7);
        return pMVar7;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}


// 0x03be2b8 (0x8dc bytes)
void M866_003be2b8(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  f32 fVar6;
  int iVar7;
  uint uVar8;
  Spline *pSVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> local_60;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  
  pvVar4 = param_1->pVar;
  uVar20 = ZEXT48(pvVar4);
  local_4c = 0;
  pfVar16 = (float *)MB_damage(param_1,0x330000,0);
  if (pfVar16 != (float *)0x0) {
    fVar2 = (param_1->pos).x;
    fVar3 = (param_1->pos).y;
    fVar11 = (param_1->pos).z + 0.5;
    fVar5 = pfVar16[8];
    if (fVar5 == 0.0) {
      fVar12 = *pfVar16;
      fVar13 = pfVar16[1];
      fVar14 = pfVar16[2];
    }
    else {
      fVar12 = g_heroCGPos;
      fVar13 = DAT_00969db4;
      fVar14 = DAT_00969db8;
      if ((*(short *)((int)fVar5 + 0xa6) != 0x47) &&
         (((fVar12 = fVar2, fVar13 = fVar3, fVar14 = fVar11, *(int *)((int)fVar5 + 0x24) == 0 ||
           (*(short *)(*(int *)((int)fVar5 + 0x24) + 0x46) != 5)) &&
          (*(short *)((int)fVar5 + 0xa6) != 0xba)))) {
        fVar12 = *(float *)((int)fVar5 + 0x10);
        fVar13 = *(float *)((int)fVar5 + 0x14);
        fVar14 = *(float *)((int)fVar5 + 0x18);
      }
    }
    if ((SQRT((fVar11 - fVar14) * (fVar11 - fVar14) +
              (fVar2 - fVar12) * (fVar2 - fVar12) + (fVar3 - fVar13) * (fVar3 - fVar13)) < 24.0) &&
       (iVar17 = CollLine(local_80,local_70,2,param_1,0), iVar17 != 0)) {
      pfVar16 = (float *)0x0;
    }
  }
  MB_HandleDamage(param_1,pfVar16,uVar20 + 0x20,0,&local_50,&local_4c,0,4);
  fVar6 = (param_1->pos).z;
  uVar19 = (int)fVar6 >> 0x1f;
  if ((local_50 != 1) && (local_4c != 0)) {
    uVar1 = param_1->state;
    if ((uVar1 != '\n' && uVar1 != '\v') && (uVar1 != '\b')) {
      PlayMobySound(0,0,param_1);
      *(undefined4 *)((int)pvVar4 + 0x70) = 0x3c03126f;
      *(undefined1 *)((int)pvVar4 + 0x9d) = 0;
      *(undefined4 *)((int)pvVar4 + 0x84) = 8;
      *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - 1.0;
      dVar23 = 0.800000011920929;
      dVar24 = 1024.0;
      uVar18 = FastDoubleToInt((double)(*(float *)((int)pvVar4 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)((int)pvVar4 + 0x80) = uVar18;
      *(float *)((int)pvVar4 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
      M866_003bd6c0(param_1,pfVar16 + 4);
      if (0 < *(int *)((int)pvVar4 + 0x20)) {
        iVar17 = M866_003be118(param_1);
        if (iVar17 != 0) {
          iVar7 = *(int *)(iVar17 + 0x78);
          *(undefined4 *)(iVar7 + 0x70) = 0x3c03126f;
          *(undefined1 *)(iVar7 + 0x9d) = 3;
          *(undefined4 *)(iVar7 + 0x84) = 8;
          uVar18 = FastDoubleToInt
                             ((double)(float)((double)(float)((double)*(float *)((int)pvVar4 + 0x250
                                                                                ) * dVar23) * dVar24
                                             ));
          *(undefined4 *)(iVar7 + 0x80) = uVar18;
          *(float *)(iVar7 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
          fVar2 = g_FrameTime;
          *(float *)(iVar7 + 0x78) = DAT_00845e2c * g_FrameTime;
          fVar3 = DAT_00845e30;
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          *(undefined4 *)(iVar7 + 0xb0) = 0x40e00000;
          *(undefined4 *)(iVar7 + 0xb4) = 0x41500000;
          *(float *)(iVar7 + 0x7c) = fVar3 * fVar2;
          MB_VecAtan2Angles
                    (*(undefined8 *)(pfVar16 + 4),*(undefined8 *)(pfVar16 + 6),&local_48,
                     iVar7 + 0x78,iVar7 + 0x7c);
          dVar21 = (double)FastDiffRots((double)local_48,0x3fe921fb60000000);
          local_48 = (float)dVar21;
          MB_StartKick(iVar17,iVar7 + 0x60);
          *(undefined1 *)(iVar17 + 0x20) = 8;
          *(undefined4 *)(iVar17 + 0x58) = 0x3f800000;
        }
        iVar17 = M866_003be118(param_1);
        if (iVar17 != 0) {
          iVar7 = *(int *)(iVar17 + 0x78);
          *(undefined4 *)(iVar7 + 0x70) = 0x3c03126f;
          *(undefined1 *)(iVar7 + 0x9d) = 3;
          *(undefined4 *)(iVar7 + 0x84) = 8;
          uVar18 = FastDoubleToInt
                             ((double)(float)((double)(float)((double)*(float *)((int)pvVar4 + 0x250
                                                                                ) * dVar23) * dVar24
                                             ));
          *(undefined4 *)(iVar7 + 0x80) = uVar18;
          *(float *)(iVar7 + 0x88) = (float)((double)*(float *)((int)pvVar4 + 0x250) * dVar23);
          fVar2 = g_FrameTime;
          *(float *)(iVar7 + 0x78) = DAT_00845e2c * g_FrameTime;
          fVar3 = DAT_00845e30;
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          *(undefined4 *)(iVar7 + 0xb0) = 0x40e00000;
          *(undefined4 *)(iVar7 + 0xb4) = 0x41500000;
          *(float *)(iVar7 + 0x7c) = fVar3 * fVar2;
          MB_VecAtan2Angles
                    (*(undefined8 *)(pfVar16 + 4),*(undefined8 *)(pfVar16 + 6),&local_44,
                     iVar7 + 0x78,iVar7 + 0x7c);
          dVar23 = (double)FastWrapRot(local_44,0.7853982);
          local_44 = (float)dVar23;
          MB_StartKick(iVar17,iVar7 + 0x60);
          *(undefined1 *)(iVar17 + 0x20) = 8;
          *(undefined4 *)(iVar17 + 0x58) = 0x3f800000;
        }
        if (((pfVar16[8] == 0.0) || (iVar17 = *(int *)((int)pfVar16[8] + 0x24), iVar17 == 0)) ||
           (*(short *)(iVar17 + 0x46) != 5)) {
          MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          MB_SpawnBoltsFromCrate(param_1,0x800,0xffffffffffffffff);
        }
        DeleteMoby(param_1);
        return;
      }
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      DeleteMoby(param_1);
      return;
    }
  }
  param_1->damage = -1;
  if (((*(int *)((int)pvVar4 + 600) == 0) || (param_1->state == '\0')) ||
     (uVar8 = *(uint *)((int)WaterTiles + *(int *)((int)pvVar4 + 600) * 0x11a0 + 8),
     uVar10 = (int)uVar8 >> 0x1f,
     (int)((uVar10 >> 1 ^ uVar8) - uVar10) <= (int)((uVar19 >> 1 ^ (uint)fVar6) - uVar19))) {
    if (*(int *)((int)pvVar4 + 0x38) != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(0x18,0x3be274);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x22c,uVar20
                         );
      *(undefined4 *)((int)pvVar4 + 0x22cU & 0xfffffffc) = uVar18;
      *(undefined4 *)((int)pvVar4 + 0x38) = 0;
    }
    iVar17 = FastDecTimerS32(uVar20 + 0x22c);
    if (iVar17 == 0) {
      fVar2 = *(float *)((int)pvVar4 + 0x224) + 20.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x224);
    }
    *(float *)((int)pvVar4 + 0x228) = fVar2;
    if ((*(int *)((int)pvVar4 + 0x260) < 1) ||
       (g_MobyInstance[*(int *)((int)pvVar4 + 0x260)].setByGroup != '\0')) {
      pSVar9 = Splines[*(int *)((int)pvVar4 + 0x24c)];
      iVar17 = MB_getTargetInArea
                         (param_1,uVar20 + 0x1c0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
      if ((iVar17 != 2) &&
         ((fVar2 = *(float *)((int)pvVar4 + 0x214) - *(float *)((int)pvVar4 + 0x1c4),
          fVar3 = *(float *)((int)pvVar4 + 0x210) - *(float *)((int)pvVar4 + 0x1c0),
          *(float *)((int)pvVar4 + 0x228) < SQRT(fVar3 * fVar3 + fVar2 * fVar2) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x1c8)))))) {
        *(undefined4 *)((int)pvVar4 + 0x204) = 2;
      }
    }
    if ((-1 < *(int *)((int)pvVar4 + 0x248)) &&
       (iVar17 = M866_003be040(param_1,*(int *)((int)pvVar4 + 0x248)), iVar17 != 0)) {
      fVar2 = (param_1->pos).y;
      fVar3 = (param_1->pos).x;
      fVar5 = fVar2 - *(float *)(iVar17 + 0x14);
      fVar11 = fVar3 - *(float *)(iVar17 + 0x10);
      fVar5 = SQRT(fVar11 * fVar11 + fVar5 * fVar5);
      if ((fVar5 < *(float *)((int)pvVar4 + 0x228)) &&
         ((*(int *)((int)pvVar4 + 0x204) == 2 ||
          (fVar2 = fVar2 - *(float *)(*(int *)((int)pvVar4 + 0x200) + 0x14),
          fVar3 = fVar3 - *(float *)(*(int *)((int)pvVar4 + 0x200) + 0x10),
          fVar5 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))))) {
        *(int *)((int)pvVar4 + 0x200) = iVar17;
        *(undefined4 *)((int)pvVar4 + 0x204) = 1;
      }
    }
    if (*(int *)((int)pvVar4 + 0x200) == 0) {
      *(MobyInstance **)((int)pvVar4 + 0x200) = g_heroMobyPtr;
    }
    dVar24 = (double)FastWrapRot
                               (*(float *)((int)pvVar4 + 0x254),g_FrameTime * 9.424778);
    uVar15 = DAT_00845e28;
    uVar18 = DAT_00845e24;
    dVar23 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar23 = dVar24;
    }
    dVar21 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar23 < 0.0) {
      dVar21 = dVar23;
    }
    *(float *)((int)pvVar4 + 0x254) = (float)dVar24;
    dVar23 = (double)(float)(dVar21 * dVar21);
    dVar22 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar21));
    dVar24 = (double)(float)(dVar23 * dVar22);
    uVar19 = FastLerpColor
                       ((double)(((float)(dVar23 * dVar24) * 2.601887e-06 +
                                  (float)(dVar24 * -0.0001980741071747616 +
                                         (double)(float)(dVar22 * 0.008333025500178337 +
                                                        (double)(float)((double)(float)(dVar23 * 
                                                  dVar21) * -0.16666656732559204 + dVar21))) + 1.0)
                                * 0.5),uVar18,uVar15);
    param_1->glowRgba = uVar19;
  }
  else {
    M866_003bd6c0(param_1,local_60);
    DeleteMoby(param_1);
  }
  return;
}


// shared update function, registered for oClasses 572, 865, 866
// 0x03bec28 (0x16ec bytes)
/* Moby 572
   Moby 865
   Moby 866 */

void UpdateMoby_572(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  MOBY_OCLASSES MVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  MobyInstance *victim;
  MobyClass *pMVar7;
  u16 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  undefined1 uVar20;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  double dVar24;
  undefined8 uVar25;
  GPiece<16> auStack_110;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  GPiece<16> auStack_f0;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  f32 local_80;
  f32 local_7c;
  float local_78;
  f32 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  GPiece<16> auStack_50;
  longlong local_40;
  
  lVar16 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  if (moby->state == '\f') {
    moby->modeBits = moby->modeBits | DISABLED;
    return;
  }
  uVar21 = ZEXT48(&DAT_003beb98);
  DoManipulator(0x4007333340000000,moby,0,(Manipulator *)((int)pvVar6 + 0x270));
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar9 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
    MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x16';
  }
  M866_003be2b8(lVar16);
  bVar1 = moby->state;
  victim = *(MobyInstance **)((int)pvVar6 + 0x200);
  if (6 < bVar1) {
    if (bVar1 == 0x10) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (*(int *)((int)pvVar6 + 0x22c) != 0) {
        return;
      }
      moby->state = '\x05';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 20.5));
      return;
    }
    if (bVar1 == 0xf) {
      dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 1.0471976,DAT_0071f418 * 1.0471976,
                 g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x220));
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_d8 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_dc = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_e0 = fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_e0,
                 (int)pvVar6 + 0x40);
      iVar18 = MB_SplineIntersect
                         (*(undefined4 *)((int)pvVar6 + 0x240),lVar16 + 0x10,&victim->pos,&local_d0)
      ;
      bVar15 = false;
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((iVar18 != 0) &&
         (local_cc = fVar3 - local_cc, local_d0 = fVar2 - local_d0,
         local_c8 = (moby->pos).z - local_c8,
         SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) < 1.5)) {
        bVar15 = true;
      }
      if (*(int *)((int)pvVar6 + 0x22c) == 0) {
        moby->state = '\x05';
        return;
      }
      if (bVar15) {
        moby->state = '\x10';
        if (moby->animationId == '\0') {
          return;
        }
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        return;
      }
      fVar3 = fVar3 - (victim->pos).y;
      fVar2 = fVar2 - (victim->pos).x;
      if (2.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
        return;
      }
      moby->state = '\x06';
      if (moby->animationId == '\x02') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar16,2,5,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar1 == 0xe) {
      iVar18 = FUN_0048c188(lVar16,ZEXT48(pvVar6) + 0x60);
      if (iVar18 == 0) {
        return;
      }
      moby->state = '\x01';
      *(undefined2 *)((int)pvVar6 + 0x128) = 0;
      return;
    }
    if (bVar1 == 0xd) {
      iVar18 = *(int *)((int)pvVar6 + 0x25c);
      moby->modeBits = moby->modeBits | DISABLED;
      iVar18 = MB_IsPntInCuboid((Vec4 *)&g_heroCGPos,(longlong)iVar18);
      if (iVar18 == 0) {
        return;
      }
      moby->state = '\x01';
      moby->unk58 = 1.0;
      MVar5 = moby->modeBits;
      pMVar7 = moby->pClass;
      (moby->pos).z = (moby->pos).z + 20.0;
      puVar8 = pMVar7->collision;
      moby->modeBits =
           MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      moby->collision = puVar8;
      moby->enabled = '\x01';
      return;
    }
    if (bVar1 == 9) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x48) = 0;
      *(undefined4 *)((int)pvVar6 + 0x44) = 0;
      *(undefined4 *)((int)pvVar6 + 0x40) = 0;
      dVar24 = (double)MB_randRangeFloat(-0.34906584,0.34906584);
      *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * g_FrameTime;
      return;
    }
    if (bVar1 != 8) {
      if (bVar1 != 7) {
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      return;
    }
    uVar19 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x60));
    if ((uVar19 & 1) == 0) {
      if ((uVar19 & 0x120) == 0) {
        return;
      }
      DeleteMoby(moby);
      return;
    }
    iVar18 = MB_SplineFindRouteNode
                       (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                        (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,
                        (int)pvVar6 + 0x210,auStack_50);
    if (iVar18 != 0) {
      PlayMobySound(4,0,moby);
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * g_FrameTime;
      moby->state = '\t';
      if (moby->animationId != '\x05') {
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar16,5,4,(int)(animationSpeed * 10.5));
      }
      *(f32 *)((int)pvVar6 + 0x210) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x214) = (moby->pos).y;
      *(f32 *)((int)pvVar6 + 0x218) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x21c) = (moby->pos).w;
      return;
    }
    M866_003bd6c0(lVar16,&DAT_00a15d30);
    MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    DeleteMoby(moby);
    return;
  }
  if (bVar1 == 6) {
    dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                  (double)((victim->pos).y - (moby->pos).y));
    OrganicDeltAng
              ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x220));
    dVar24 = (double)BlendAnimFrame(moby);
    if (((moby->updateId == moby->animationId) && (10.0 <= dVar24)) && (dVar24 <= 16.0)) {
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_98 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_9c = (fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
      local_a0 = (fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * 2.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_a0,
                 (int)pvVar6 + 0x40);
    }
    iVar18 = MB_MayaFrameTrigger(15.5,moby);
    if (((iVar18 != 0) &&
        (fVar2 = (moby->pos).y - (victim->pos).y, fVar3 = (moby->pos).x - (victim->pos).x,
        SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) &&
       (ABS((victim->pos).z - (moby->pos).z) < *(float *)((int)pvVar6 + 0x250) * 2.0)) {
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      local_88 = 0;
      local_84 = 0x45afdf66;
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_8c = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_90 = fVar9 * fVar12 * 2.601887e-06 +
                 fVar12 * -0.0001980741 +
                 fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      local_80 = (victim->pos).x;
      local_7c = (victim->pos).y;
      local_74 = (victim->pos).w;
      local_78 = (victim->pos).z + 0.75;
      CollDamageMobyDirect(1.0,victim,moby,0x10001,0x3beb98,&local_80,&local_90);
      return;
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    moby->state = '\a';
    if (moby->animationId != '\x03') {
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 10.5));
    }
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * g_FrameTime;
    return;
  }
  if (bVar1 == 5) {
    fVar2 = (moby->pos).y - *(float *)((int)pvVar6 + 0x214);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x210);
    uVar25 = 0x3ff0000000000000;
    if (1.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      iVar23 = (int)pvVar6 + 0x210;
      iVar18 = MB_SplineFindRouteNode
                         (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240U,1,
                          (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,iVar23,&local_60
                         );
      if ((iVar18 != 0) ||
         (iVar18 = MB_SplineFindRouteNode
                             (0.0,(int)pvVar6 + 0x240U,1,(longlong)*(int *)((int)pvVar6 + 0x244),
                              uVar21,iVar23,iVar23,&local_60), iVar18 != 0)) {
        dVar24 = (double)FUN_005e8338((double)(local_60 - (moby->pos).x),
                                      (double)(local_5c - (moby->pos).y));
        dVar24 = (double)FastWrapRot((float)dVar24,*(float *)((int)pvVar6 + 0x234));
        OrganicDeltAng
                  ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x220));
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar9 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar9 = fVar2;
        }
        fVar11 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar11 = fVar3;
        }
        fVar10 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
          fVar10 = fVar9;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
          fVar2 = fVar11;
        }
        fVar3 = fVar10 * fVar10;
        fVar9 = fVar2 * fVar2;
        fVar13 = fVar3 * fVar3 * fVar10;
        local_68 = 0;
        fVar11 = fVar9 * fVar9 * fVar2;
        fVar14 = fVar3 * fVar13;
        fVar12 = fVar9 * fVar11;
        local_6c = (fVar3 * fVar14 * 2.601887e-06 +
                   fVar14 * -0.0001980741 +
                   fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
        local_70 = (fVar9 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * 2.0;
        MB_UpdateNavMove
                  (uVar25,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_70,(int)pvVar6 + 0x40);
      }
    }
    else {
      moby->state = '\x01';
    }
    if ((*(int *)((int)pvVar6 + 0x204) != 2) && (moby->state = '\x04', moby->animationId != '\x01'))
    {
      local_40 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 3.5));
    }
    M866_003bdbd0(lVar16);
    return;
  }
  if (bVar1 != 4) {
    if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\x04';
      if (moby->animationId == '\x01') {
        return;
      }
      local_40 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar1 == 2) {
      dVar24 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x210) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x214) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 1.0471976,DAT_0071f418 * 1.0471976,
                 g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x220));
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      lVar22 = ZEXT48(pvVar6) + 0x40;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar11 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar11 = fVar3;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar2 * fVar2;
      fVar13 = fVar3 * fVar3 * fVar10;
      local_f8 = 0;
      fVar11 = fVar9 * fVar9 * fVar2;
      fVar14 = fVar3 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_fc = fVar3 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
      local_100 = fVar9 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_100,
                 (int)lVar22);
      if ((*(int *)((int)pvVar6 + 0x204) != 2) && (iVar18 = MB_randInt(4), iVar18 == 0)) {
        iVar18 = MB_SplineFindRouteNode
                           (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                            (longlong)*(int *)((int)pvVar6 + 0x244),lVar22,&moby->pos,&victim->pos,
                            auStack_f0);
        if (iVar18 == 0) {
          *(undefined4 *)((int)pvVar6 + 0x204) = 2;
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_40 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
          }
          *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
          *(undefined4 *)((int)pvVar6 + 0x48) = 0;
          *(undefined4 *)((int)pvVar6 + 0x44) = 0;
          *(undefined4 *)((int)pvVar6 + 0x40) = 0;
          dVar24 = (double)MB_randRangeFloat(-0.34906584,0.34906584);
          *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
          *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * g_FrameTime;
        }
      }
      if (((*(int *)((int)pvVar6 + 0x22c) != 0) && (*(int *)((int)pvVar6 + 0x204) == 2)) &&
         (moby->state = '\x0f', moby->animationId != '\x01')) {
        MB_SetAnimation(lVar16,1,0,5);
      }
      M866_003bdbd0(lVar16);
      return;
    }
    if (bVar1 != 1) {
      if (bVar1 != 0) {
        return;
      }
      *(f32 *)((int)pvVar6 + 0x210) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x214) = (moby->pos).y;
      MVar4 = moby->oClass;
      *(f32 *)((int)pvVar6 + 0x218) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x21c) = (moby->pos).w;
      if ((short)MVar4 < 0x361) {
        if (MVar4 == SLIME_PARENT) {
          uVar20 = FastDoubleToInt(0x402c000000000000);
          *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
          uVar20 = FastDoubleToInt(0x4024ccccc0000000);
          *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
          *(undefined4 *)((int)pvVar6 + 0x250) = 0x3f800000;
        }
      }
      else if ((short)MVar4 < 0x362) {
        uVar20 = FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
        uVar20 = FastDoubleToInt(0x4016666660000000);
        *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
        *(undefined4 *)((int)pvVar6 + 0x250) = 0x3f333333;
      }
      else if ((short)MVar4 < 0x363) {
        uVar20 = FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar6 + 0x58) = uVar20;
        uVar20 = FastDoubleToInt(0x4010000000000000);
        *(undefined1 *)((int)pvVar6 + 0x5a) = uVar20;
        *(undefined4 *)((int)pvVar6 + 0x250) = 0x3efae148;
      }
      *(undefined4 *)((int)pvVar6 + 0x30) = *(undefined4 *)((int)pvVar6 + 0x250);
      dVar24 = (double)MB_randRot();
      MVar4 = moby->oClass;
      *(float *)((int)pvVar6 + 0x254) = (float)dVar24;
      *(undefined1 *)((int)pvVar6 + 0x29) = 1;
      *(uint *)((int)pvVar6 + 0x130) =
           (int)&PTR_DAT_00845ec4 + ((uint)(ZERO_MASK((0x362 - (uint)MVar4))) & 0xc);
      uVar17 = 0x40400000;
      if (*(int *)((int)pvVar6 + 600) != 0) {
        uVar17 = 0x3f800000;
        *(undefined4 *)((int)pvVar6 + 0x230) = 1;
      }
      *(undefined4 *)((int)pvVar6 + 0x20) = uVar17;
      if (*(int *)((int)pvVar6 + 0x224) == 0) {
        *(undefined4 *)((int)pvVar6 + 0x224) = 0x41700000;
      }
      MB_InitDefaultParams((float *)((int)pvVar6 + 0x170));
      *(undefined4 *)((int)pvVar6 + 0x17c) = 0x40000000;
      *(undefined4 *)((int)pvVar6 + 0x178) = 0x40000000;
      uVar17 = FastDoubleToInt((double)(*(float *)((int)pvVar6 + 0x250) * 0.8 * 1024.0));
      *(undefined4 *)((int)pvVar6 + 0x170) = uVar17;
      MVar5 = moby->modeBits;
      *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * g_FrameTime;
      fVar2 = (moby->pos).z;
      if (*(int *)((int)pvVar6 + 0x230) != 0) {
        moby->state = '\x01';
        moby->modeBits = MVar5 | CAN_BE_AUTO_TARGETED;
        return;
      }
      moby->state = (char)(ZERO_MASK((-1 - *(int *)((int)pvVar6 + 0x25c)))) + '\r';
      moby->unk58 = 0.0;
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      (moby->pos).z = fVar2 - 20.0;
      return;
    }
    if ((*(int *)((int)pvVar6 + 0x204) != 2) && (iVar18 = MB_randInt(4), iVar18 == 0)) {
      iVar18 = MB_SplineFindRouteNode
                         (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240,1,
                          (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,&victim->pos,
                          auStack_110);
      if (iVar18 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x204) = 2;
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x01') {
          local_40 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
        }
        *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar6 + 0x48) = 0;
        *(undefined4 *)((int)pvVar6 + 0x44) = 0;
        *(undefined4 *)((int)pvVar6 + 0x40) = 0;
        dVar24 = (double)MB_randRangeFloat(-0.34906584,0.34906584);
        *(float *)((int)pvVar6 + 0x234) = (float)dVar24;
      }
    }
    if ((*(int *)((int)pvVar6 + 0x22c) != 0) && (*(int *)((int)pvVar6 + 0x204) == 2)) {
      moby->state = '\x0f';
      if (moby->animationId == '\x01') {
        return;
      }
      MB_SetAnimation(lVar16,1,0,5);
      return;
    }
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * 0.5 * g_FrameTime;
    if (moby->animationId != '\x01') {
      MB_SetAnimation(lVar16,1,0,5);
    }
    moby->state = '\x02';
    return;
  }
  fVar2 = (moby->pos).y - (victim->pos).y;
  fVar3 = (moby->pos).x - (victim->pos).x;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < DAT_00845e38) {
    moby->state = '\x06';
    *(float *)((int)pvVar6 + 0x194) = *(float *)((int)pvVar6 + 0x23c) * 2.0 * g_FrameTime;
    if (moby->animationId == '\x02') {
      return;
    }
    local_40 = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(lVar16,2,0,(int)(animationSpeed * 10.5));
    return;
  }
  iVar18 = MB_SplineFindRouteNode
                     (*(float *)((int)pvVar6 + 0x250) * 0.8,(int)pvVar6 + 0x240U,1,
                      (longlong)*(int *)((int)pvVar6 + 0x244),uVar21,&moby->pos,&victim->pos,
                      &local_b0);
  if ((iVar18 == 0) &&
     (iVar18 = MB_SplineFindRouteNode
                         (0.0,(int)pvVar6 + 0x240U,1,(longlong)*(int *)((int)pvVar6 + 0x244),uVar21,
                          &moby->pos,&victim->pos,&local_b0), iVar18 == 0)) {
    *(undefined4 *)((int)pvVar6 + 0x204) = 2;
  }
  else {
    dVar24 = (double)FUN_005e8338((double)(local_b0 - (moby->pos).x),
                                  (double)(local_ac - (moby->pos).y));
    dVar24 = (double)FastWrapRot((float)dVar24,*(float *)((int)pvVar6 + 0x234));
    OrganicDeltAng
              ((float)dVar24,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x220));
    fVar2 = (moby->rotation).z;
    fVar3 = fVar2 + 1.5707963;
    fVar9 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar9 = fVar2;
    }
    fVar11 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar11 = fVar3;
    }
    fVar10 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
      fVar10 = fVar9;
    }
    fVar2 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar11 < 0.0) {
      fVar2 = fVar11;
    }
    fVar3 = fVar10 * fVar10;
    fVar9 = fVar2 * fVar2;
    fVar13 = fVar3 * fVar3 * fVar10;
    local_b8 = 0;
    fVar11 = fVar9 * fVar9 * fVar2;
    fVar14 = fVar3 * fVar13;
    fVar12 = fVar9 * fVar11;
    local_bc = (fVar3 * fVar14 * 2.601887e-06 +
               fVar14 * -0.0001980741 +
               fVar13 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_c0 = (fVar9 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2)
               * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x170),&local_c0,
               (int)pvVar6 + 0x40);
    if (*(int *)((int)pvVar6 + 0x204) != 2) goto LAB_003bf9f0;
  }
  moby->state = '\x05';
LAB_003bf9f0:
  M866_003bdbd0(lVar16);
  return;
}


// 0x03c0314 (0x78 bytes)
undefined8 M866_003c0314(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x0e') {
      param_1->state = '\x01';
    }
  }
  else if ((param_1->oClass == SMALL_SLIME) && (param_1->state != '\b')) {
    param_1->state = '\x0e';
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x03c038c (0x58 bytes)
void M866_003c038c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x0e') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xe;
  }
  return;
}


// 0x03c03e4 (0x58 bytes)
void M866_003c03e4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x0e') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xe;
  }
  return;
}


// 0x03c043c (0x38 bytes)
void M866_003c043c(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}


// 0x03c0474 (0x40 bytes)
longlong M866_003c0474(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xc0;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03c04b4 (0x14 bytes)
void M866_003c04b4(void)

{
  DAT_00845f28 = 0x10000;
  return;
}


// 0x03c04c8 (0x40 bytes)
undefined8 M866_003c04c8(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    if (((cVar1 != -3 && cVar1 != -2) && (*(short *)(param_1 + 0xa6) == 0x23d)) && (cVar1 == '\x05')
       ) {
      return 1;
    }
  }
  return 0;
}



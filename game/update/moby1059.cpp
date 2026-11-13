// game/update/moby1059.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 16 functions, 0x1a87d8-0x1abea4
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1059.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x01a87d8 (0xc bytes)
void FUN_001a87d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 3;
  return;
}


// 0x01a87e4 (0x14 bytes)
void M1059_001a87e4(void)

{
  DAT_007408e0 = 0x10000;
  return;
}


// 0x01a8808 (0x14c bytes)
void M1059_001a8808(undefined8 param_1,int param_2,undefined8 *param_3)

{
  float fVar1;
  float local_20 [2];
  
  fVar1 = g_FrameTimeSq * 29.400002;
  *(undefined4 *)(param_2 + 0x14) = 0x3a03126f;
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x18) = g_FrameTime * 9.0;
  fVar1 = g_FrameTime;
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x30) = 0x3e75c28f;
  *(undefined4 *)(param_2 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
  *(undefined4 *)(param_2 + 0x48) = 0x3e4ccccd;
  *(undefined4 *)(param_2 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_2 + 0x50) = 0x40400000;
  *(undefined4 *)(param_2 + 0x54) = 0x41100000;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x400;
  *(undefined4 *)(param_2 + 0x24) = 0xd;
  *(float *)(param_2 + 0x1c) = fVar1 * 7.0;
  MB_VecAtan2Angles(*param_3,param_3[1],local_20,param_2 + 0x18,param_2 + 0x1c);
  MB_StartKick((double)local_20[0],param_1,param_2);
  return;
}


// 0x01a8960 (0x15c bytes)
void M1059_001a8960(undefined8 param_1,int param_2,undefined8 *param_3)

{
  float fVar1;
  float local_30 [4];
  
  fVar1 = g_FrameTimeSq * 29.400002;
  *(undefined4 *)(param_2 + 0x14) = 0x3a03126f;
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x18) = g_FrameTime * 9.0;
  fVar1 = g_FrameTime;
  *(undefined4 *)(param_2 + 0x28) = 0x3fb33333;
  *(undefined4 *)(param_2 + 0x30) = 0x3e75c28f;
  *(undefined4 *)(param_2 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
  *(undefined4 *)(param_2 + 0x48) = 0x3e4ccccd;
  *(undefined4 *)(param_2 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_2 + 0x50) = 0x41000000;
  *(undefined4 *)(param_2 + 0x54) = 0x41980000;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x599;
  *(undefined4 *)(param_2 + 0x24) = 0xd;
  *(float *)(param_2 + 0x1c) = fVar1 * 7.0;
  MB_VecAtan2Angles(*param_3,param_3[1],local_30,param_2 + 0x18,param_2 + 0x1c);
  MB_StartKick((double)local_30[0],param_1,param_2);
  return;
}


// 0x01a8ac0 (0x230 bytes)
void M1059_001a8ac0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  int local_30 [2];
  
  if (param_1->state != '\x0e') {
    iVar5 = MB_damage(param_1,0x330000,0);
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    if (param_1->setByGroup != '\0') {
      pfVar7 = (float *)param_3;
      if (iVar6 < 3) {
        if ((-1 < iVar6) && (0 < iVar6)) {
          *pfVar7 = 0.0;
        }
      }
      else if (iVar6 < 0xb) {
        if (iVar6 < 9) {
          M1059_001a8960(param_1,param_2 + 0x70,iVar5 + 0x10);
          param_1->state = '\f';
        }
        else {
          if (param_1->animationId != '\x04') {
            MB_SetAnimation(param_1,4,4,4);
          }
          param_1->state = '\r';
        }
      }
      if (1 < local_30[0]) {
        uVar2 = (int)*pfVar7 >> 0x1f;
        uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
        iVar6 = (int)param_2;
        if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
            (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
          *(undefined1 *)(iVar6 + 0x67) = 0xfa;
          auVar8 = loadVectorLeftIndexed(in_LR,0x1a8abc);
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = vectorSplatHalfWord(auVar8,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
          *(undefined2 *)(iVar6 + 0x26) = uVar4;
          MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        }
        else {
          MVar1 = param_1->modeBits;
          *pfVar7 = 0.0;
          param_1->modeBits =
               MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          M1059_001a8808(param_1,param_2 + 0x70,iVar5 + 0x10);
          MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
          *(undefined1 *)(iVar6 + 0x67) = 0x78;
          MB_UpdateLightsTransition(param_1,param_2 + 0x60);
          param_1->state = '\x0e';
        }
      }
    }
    param_1->damage = -1;
  }
  return;
}


// 0x01a8cf0 (0x88 bytes)
void M1059_001a8cf0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar4 = 0;
    piVar3 = param_1;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        pfVar2 = (float *)(param_1 + (iVar4 - (iVar4 / iVar1) * iVar1) * 4 + 4);
        iVar1 = *param_1;
        piVar3[7] = (int)SQRT(((float)piVar3[6] - pfVar2[2]) * ((float)piVar3[6] - pfVar2[2]) +
                              ((float)piVar3[4] - *pfVar2) * ((float)piVar3[4] - *pfVar2) +
                              ((float)piVar3[5] - pfVar2[1]) * ((float)piVar3[5] - pfVar2[1]));
        piVar3 = piVar3 + 4;
      } while (iVar4 < iVar1);
    }
  }
  return;
}


// 0x01a8d88 (0x98 bytes)
undefined8 M1059_001a8d88(longlong param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)GetGroundZNoWater(param_1 + 0x10);
  *(float *)(param_2 + 0x130) = (float)dVar2;
  dVar3 = (double)(float)((double)**(float **)(param_2 + 300) - dVar2);
  *(float *)(param_2 + 0x138) = (float)(dVar3 * 0.5 + dVar2);
  if (0.4099999964237213 <= dVar3) {
    uVar1 = 0;
    if (dVar3 <= 0.6800000071525574) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


// 0x01a8e20 (0xe0 bytes)
void M1059_001a8e20(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xbc);
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 0x53) != '\0') {
      MB_SetAnimation(param_1,0,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else if (bVar1 < 2) {
    if (*(char *)(param_1 + 0x53) != '\x03') {
      MB_SetAnimation(param_1,3,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  else if (bVar1 < 3) {
    if (*(char *)(param_1 + 0x53) != '\t') {
      MB_SetAnimation(param_1,9,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 0xf;
  }
  return;
}


// 0x01a8f18 (0x2d0 bytes)
// strings: 006543d0: 'Illegal Bounding path for moby 1059 instance #%d.\n' | 00654408: 'Illegal Hero Detect path for moby 1059 instance #%d.\n' | 00654440: 'Illegal water moby for moby 1059 instance #%d.\n' | 00654470: 'Illegal guard point cuboid for moby 1059 instance #%d.\n'

undefined8 M1059_001a8f18(int param_1,Spline *param_2)

{
  float fVar1;
  float *pfVar2;
  Spline *pSVar3;
  Cuboid *pCVar4;
  undefined8 uVar5;
  undefined1 uVar7;
  int iVar6;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = param_2->points[0x10].x;
  if (fVar1 == -NAN) {
    uVar8 = param_1 - (int)g_MobyInstance;
    printf("Illegal Bounding path for moby 1059 instance #%d.\n",
                 ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
    uVar5 = 1;
  }
  else {
    pSVar3 = Splines[(int)fVar1];
    param_2->points[0x11].z = (float)pSVar3;
    M1059_001a8cf0(pSVar3);
    fVar1 = param_2->points[0x13].y;
    if (fVar1 == -NAN) {
      uVar8 = param_1 - (int)g_MobyInstance;
      printf("Illegal Hero Detect path for moby 1059 instance #%d.\n",
                   ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
      uVar5 = 1;
    }
    else {
      pSVar3 = Splines[(int)fVar1];
      param_2->points[0x13].z = (float)pSVar3;
      M1059_001a8cf0(pSVar3);
      fVar1 = param_2->points[0x10].z;
      if (fVar1 == -NAN) {
        uVar8 = param_1 - (int)g_MobyInstance;
        printf("Illegal water moby for moby 1059 instance #%d.\n",
                     ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
        uVar5 = 1;
      }
      else {
        param_2->points[0x11].w = (float)&g_MobyInstance[(int)fVar1].pos.z;
        dVar9 = (double)GetGroundZNoWater((longlong)param_1 + 0x10);
        pfVar2 = (float *)param_2->points[0x11].w;
        param_2->points[0x12].x = (float)dVar9;
        dVar10 = (double)(float)((double)*pfVar2 - dVar9);
        param_2->points[0x12].z = (float)(dVar10 * 0.5 + dVar9);
        if (0.4099999964237213 <= dVar10) {
          uVar7 = 0;
          if (dVar10 <= 0.6800000071525574) {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 2;
        }
        *(undefined1 *)(param_1 + 0xbc) = uVar7;
        pCVar4 = Cuboids;
        fVar1 = param_2->points[0x10].y;
        if (fVar1 == -NAN) {
          uVar8 = param_1 - (int)g_MobyInstance;
          printf("Illegal guard point cuboid for moby 1059 instance #%d.\n",
                       ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
          uVar5 = 1;
        }
        else {
          param_2->points[0xe].x = Cuboids[(int)fVar1].pos.x;
          param_2->points[0xe].y = pCVar4[(int)fVar1].pos.y;
          param_2->points[0xe].z = pCVar4[(int)fVar1].pos.z;
          param_2->points[0xe].w = pCVar4[(int)fVar1].pos.w;
          param_2->points[0xd].x = *(float *)(param_1 + 0x10);
          param_2->points[0xd].y = *(float *)(param_1 + 0x14);
          param_2->points[0xd].z = *(float *)(param_1 + 0x18);
          param_2->points[0xd].w = *(float *)(param_1 + 0x1c);
          M1059_001a8e20((longlong)param_1,param_2);
          iVar6 = rand();
          param_2->points[0x12].y = (float)(iVar6 % 0x78);
          uVar8 = rand();
          fVar1 = -0.34906584;
          if ((uVar8 & 1) != 0) {
            fVar1 = 0.34906584;
          }
          uVar5 = 0;
          param_2->points[0x13].x = fVar1;
          param_2->points[0x13].w = 0.0;
          *(undefined1 *)((int)&param_2->points[1].z + 1) = 1;
        }
      }
    }
  }
  return uVar5;
}


// 0x01a9218 (0x6dc bytes)
// inlined: FastAtan2 @0x1a9344, FastAtan2 @0x1a9794
void M1059_001a9218(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f18;
  undefined8 uVar31;
  ulonglong in_f19;
  double dVar32;
  ulonglong in_f20;
  double dVar33;
  ulonglong in_f21;
  double dVar34;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar14;
  puVar7[0x30] = in_LR;
  puVar7[0x20] = in_f18;
  puVar7[0x21] = in_f19;
  puVar7[0x22] = in_f20;
  puVar7[0x23] = in_f21;
  puVar7[0x24] = in_f22;
  puVar7[0x25] = in_f23;
  puVar7[0x26] = in_f24;
  puVar7[0x27] = in_f25;
  puVar7[0x28] = in_f26;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  puVar7[0x1f] = unaff_r31;
  iVar18 = *(int *)(param_2 + 0x134);
  puVar7[0x1e] = unaff_r30;
  puVar7[0x1d] = unaff_r29;
  puVar7[0x1c] = unaff_r28;
  puVar6 = *(undefined4 **)(param_2 + 0x128);
  if (iVar18 == 0) {
    fVar1 = *(float *)(param_2 + 0xf0) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(param_2 + 0xf4) - *(float *)(param_1 + 0x14);
    fVar4 = ABS(fVar1);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x8c) = fVar1;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar4 - fVar2;
    fVar1 = 0.0;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar7 + 0x8c));
    if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar7 + 0x12));
    if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar16 = uVar14 - 0x160;
      lVar19 = uVar14 - 0xb8;
      lVar21 = uVar14 - 0xa8;
      lVar22 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xc4) = fVar3;
      *(float *)((int)puVar7 + 0xbc) = fVar3;
      *(float *)(puVar7 + 0x18) = fVar3;
      *(float *)(puVar7 + 0x17) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
      *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
      *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar3 * fVar3;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar14 - 0xb8;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar21;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar9 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar18 + 0xb8) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    *(float *)(param_2 + 0x13c) = fVar1;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x48);
    dVar41 = 1.570796251296997;
    dVar40 = 3.141592502593994;
    fVar4 = fVar1 + 1.5707963;
    dVar39 = -3.141592502593994;
    dVar38 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar36 = -0.0001980741071747616;
    dVar35 = 2.601886990305502e-06;
    dVar34 = 5.199999809265137;
    lVar16 = uVar14 - 0x100;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar2 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar2 = fVar4;
    }
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar1 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
      fVar1 = fVar2;
    }
    fVar10 = fVar5 * fVar5;
    fVar13 = fVar1 * fVar1;
    fVar2 = fVar10 * fVar10 * fVar5;
    fVar11 = fVar13 * fVar13 * fVar1;
    fVar8 = fVar10 * fVar2;
    fVar12 = fVar13 * fVar11;
    fVar3 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    dVar33 = 0.0;
    *(undefined4 *)(puVar7 + 0xf) = *(undefined4 *)(param_1 + 0x18);
    *(float *)((int)puVar7 + 0x74) =
         (fVar10 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) * 5.2
         + fVar4;
    *(float *)(puVar7 + 0xe) =
         (fVar13 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar13 * fVar1 * -0.16666657 + fVar1) *
         5.2 + fVar3;
    iVar18 = PointInsideComplexPoly((Vec4 *)lVar16,(Vec4 *)(puVar6 + 4),*puVar6);
    if (((iVar18 == 0) ||
        (iVar18 = CollLine(param_1 + 0x10,lVar16,0x24,param_1,0), iVar18 != 0)) ||
       (iVar18 = CollSphere(0x3ff8000000000000,lVar16,&DAT_001a91e8,0x24,param_1),
       iVar18 != 0)) {
      dVar43 = (double)*(float *)(param_1 + 0x48);
      dVar44 = ABS((double)*(float *)(param_2 + 0x140));
      dVar32 = 6.2831854820251465;
      uVar31 = 0x3ff8000000000000;
      dVar42 = dVar33;
      do {
        dVar43 = (double)FastWrapRot((float)dVar43,*(float *)(param_2 + 0x140));
        dVar23 = (double)(float)(dVar43 + dVar41);
        dVar24 = (double)(float)(dVar40 - dVar43);
        if (dVar43 - (double)(float)(dVar40 - dVar43) < 0.0) {
          dVar24 = dVar43;
        }
        dVar26 = (double)(float)(dVar40 - dVar23);
        if (dVar23 - (double)(float)(dVar40 - dVar23) < 0.0) {
          dVar26 = dVar23;
        }
        dVar25 = (double)(float)(dVar39 - dVar43);
        if ((double)(float)(dVar39 - dVar43) - dVar24 < 0.0) {
          dVar25 = dVar24;
        }
        fVar1 = *(float *)(param_1 + 0x10);
        fVar3 = *(float *)(param_1 + 0x14);
        puVar6 = *(undefined4 **)(param_2 + 0x128);
        dVar24 = (double)(float)(dVar39 - dVar23);
        if ((double)(float)(dVar39 - dVar23) - dVar26 < 0.0) {
          dVar24 = dVar26;
        }
        dVar23 = (double)(float)(dVar25 * dVar25);
        dVar26 = (double)(float)(dVar24 * dVar24);
        dVar28 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
        *(undefined4 *)(puVar7 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar24));
        dVar27 = (double)(float)(dVar23 * dVar28);
        dVar29 = (double)(float)(dVar26 * dVar30);
        *(float *)((int)puVar7 + 0x74) =
             (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar35 +
                                    (double)(float)(dVar27 * dVar36 +
                                                   (double)(float)(dVar28 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar23 * dVar25) * dVar38 + dVar25)))) * dVar34 +
                    (double)fVar3);
        *(float *)(puVar7 + 0xe) =
             (float)((double)(float)((double)(float)(dVar26 * dVar29) * dVar35 +
                                    (double)(float)(dVar29 * dVar36 +
                                                   (double)(float)(dVar30 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar26 * dVar24) * dVar38 + dVar24)))) * dVar34 +
                    (double)fVar1);
        iVar18 = PointInsideComplexPoly((Vec4 *)lVar16,(Vec4 *)(puVar6 + 4),*puVar6);
        if (((iVar18 != 0) &&
            (iVar18 = CollLine(param_1 + 0x10,lVar16,0x24,param_1,0), iVar18 == 0)) &&
           (iVar18 = CollSphere(uVar31,lVar16), iVar18 == 0)) {
          *(float *)(param_2 + 0x13c) = (float)dVar43;
          return;
        }
        dVar42 = (double)(float)(dVar44 + dVar42);
      } while (dVar42 < dVar32);
      fVar1 = *(float *)(param_2 + 0xf0) - *(float *)(param_1 + 0x10);
      fVar3 = *(float *)(param_2 + 0xf4) - *(float *)(param_1 + 0x14);
      dVar35 = ABS((double)fVar1);
      dVar36 = ABS((double)fVar3);
      *(float *)(puVar7 + 0x10) = fVar1;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)(puVar7 + 0x11) = (float)(dVar35 - dVar36);
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar7 + 0x10));
      if ((double)*(float *)(puVar7 + 0x11) - dVar33 < 0.0) {
        dVar34 = dVar36;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar36 = ABS((double)*(float *)((int)puVar7 + 0x84));
      if ((double)*(float *)(puVar7 + 0x11) - dVar33 < 0.0) {
        dVar36 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar33 < dVar34) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0xd8;
        lVar21 = uVar14 - 200;
        lVar22 = 2;
        fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xa4) = fVar4;
        *(float *)((int)puVar7 + 0x9c) = fVar4;
        *(float *)(puVar7 + 0x14) = fVar4;
        *(float *)(puVar7 + 0x13) = fVar4;
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar2;
        *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
        *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar2;
        do {
          *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xd8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar2 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x98)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar3);
      }
      *(float *)(param_2 + 0x13c) = (float)dVar33;
    }
  }
  return;
}


// 0x01a9908 (0x130 bytes)
void M1059_001a9908
               (double param_1,double param_2,double param_3,int param_4,undefined *param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *unused;
  float local_18;
  undefined4 local_14;
  
  local_18 = *(float *)(param_4 + 0x18);
  local_14 = *(undefined4 *)(param_4 + 0x1c);
  unused = param_5;
  if (**(float **)(param_5 + 300) - 0.3 < local_18) {
    unused = &DAT_00720000;
    *(float *)(param_5 + 0xd8) = -(g_FrameTime * 9.8 - *(float *)(param_5 + 0xd8));
  }
  OrganicDelt
            (*(float *)(param_5 + 0x138),(float)param_1,(float)param_2,(float)param_3,&local_18,
             (int)unused,(float *)(param_5 + 0xd8));
  iVar1 = MB_MoveAndCollide2
                    (0x3ff0000000000000,0,param_4,param_5 + 0xd0,&DAT_001a98f4,0x400,param_8,0x10);
  if (iVar1 != 0) {
    *(float *)(param_5 + 0xd0) = *(float *)(param_5 + 0xd0) * 0.5;
    *(float *)(param_5 + 0xd4) = *(float *)(param_5 + 0xd4) * 0.5;
    *(float *)(param_5 + 0xd8) = *(float *)(param_5 + 0xd8) * 0.5;
  }
  return;
}


// 0x01a9a58 (0x1bc bytes)
undefined8
M1059_001a9a58
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  uVar9 = 0;
  dVar11 = (double)SQRT(*(float *)(param_9 + 0xd0) * *(float *)(param_9 + 0xd0) +
                        *(float *)(param_9 + 0xd4) * *(float *)(param_9 + 0xd4));
  dVar10 = (double)FastSubRots(*(float *)(param_8 + 0x48),(float)param_1);
  fVar1 = *(float *)(param_8 + 0x48);
  if (param_2 <= dVar10) {
    if (param_4 < dVar10) {
      dVar11 = (double)(float)(dVar11 - param_5);
    }
  }
  else {
    uVar9 = 1;
    dVar11 = (double)(float)(param_3 + dVar11);
  }
  if ((dVar11 <= param_6) && (param_6 = dVar11, dVar11 < param_7)) {
    param_6 = param_7;
  }
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar8 = fVar2 * fVar7;
  fVar6 = fVar3 * fVar5;
  *(float *)(param_9 + 0xd4) =
       (float)((double)(fVar2 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * param_6);
  *(float *)(param_9 + 0xd0) =
       (float)((double)(fVar3 * fVar6 * 2.601887e-06 +
                       fVar6 * -0.0001980741 +
                       fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * param_6);
  return uVar9;
}


// 0x01a9c20 (0x238 bytes)
void M1059_001a9c20
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,MobyInstance *param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  double dVar2;
  uint in_stack_0000007c;
  undefined4 in_stack_00000084;
  u8 in_stack_0000008f;
  MobyInstance *in_stack_00000094;
  GPiece<16> local_c0;
  GPiece<16> auStack_b0;
  GPiece<56> auStack_a0;
  
  dVar2 = (double)BlendAnimFrame(param_6);
  if ((((param_6->state == param_8) && (param_6->updateId == param_9)) && (param_1 < dVar2)) &&
     (dVar2 < param_2)) {
    SetCollDamIn(param_4,auStack_a0,param_6,1,0x3f800000,local_c0);
    GetBonePosition(param_6,0,auStack_b0);
    iVar1 = CollMobySphere(param_5,auStack_b0);
    if ((iVar1 != 0) && (g_CollOutput.pMoby == in_stack_00000094)) {
      *(float *)(param_7 + 0xd0) = -*(float *)(param_7 + 0xd0);
      *(float *)(param_7 + 0xd4) = -*(float *)(param_7 + 0xd4);
      *(float *)(param_7 + 0xd8) = -*(float *)(param_7 + 0xd8);
      *(float *)(param_7 + 0xd8) = DAT_0071f408 * -0.05;
      if (param_6->animationId != in_stack_0000007c) {
        MB_SetAnimation(param_6,in_stack_0000007c,in_stack_00000084,5);
      }
      param_6->state = in_stack_0000008f;
    }
  }
  return;
}


// 0x01a9e58 (0x9c bytes)
undefined8
M1059_001a9e58
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,MobyInstance *param_4)

{
  int iVar2;
  undefined8 uVar1;
  GPiece<16> auStack_30;
  
  GetBonePosition(param_2,0,auStack_30);
  iVar2 = CollSphere(param_1,auStack_30);
  if ((iVar2 == 0) || (g_CollOutput.pMoby != param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x01a9ef4 (0xcc bytes)
undefined8 M1059_001a9ef4(MobyInstance *param_1,int param_2,int param_3)

{
  int iVar1;
  MobyInstance *local_20 [2];
  
  local_20[0] = (MobyInstance *)0x0;
  iVar1 = MB_GetFirstMobyInGroup(local_20,(uint)(byte)param_1->group,'\0','\0');
  while( true ) {
    if ((iVar1 != 0) || (local_20[0] == (MobyInstance *)0x0)) {
      return 0;
    }
    if ((local_20[0] != param_1) &&
       ((int)(uint)local_20[0]->state <= param_3 && param_2 <= (int)(uint)local_20[0]->state))
    break;
    iVar1 = MB_GetNextMobyInGroup(local_20,local_20[0],'\0','\0');
  }
  return 1;
}


// 0x01aa078 (0x1e2c bytes)
// strings: 006544a8: 'Initialization failed for moby 1059 instance #%d. Deleting.\n' | 006544e8: "hey, shouldn't be in init!\n"

/* Moby 1059 */

void UpdateMoby_1059(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Spline *pSVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  bool bVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong lVar21;
  u8 uVar22;
  u8 uVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  GPiece<8> local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  GPiece<16> local_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  Vec4 local_d0;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  MobyInstance *local_90;
  undefined4 local_8c;
  MobyInstance *local_80;
  MobyInstance *local_7c [3];
  
  lVar14 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pSVar7 = (Spline *)moby->pVar;
  if (pSVar7 == (Spline *)0x0) {
    return;
  }
  DoManipulator(0x40019999a0000000,moby,0,(Manipulator *)(pSVar7->points + 0x14));
  if (moby->state == '\0') {
    iVar15 = M1059_001a8f18(moby,pSVar7);
    if (iVar15 != 0) {
      uVar20 = (int)moby - (int)g_MobyInstance;
      printf("Initialization failed for moby 1059 instance #%d. Deleting.\n",
                   ((int)uVar20 >> 8) + (uint)((int)uVar20 < 0 && (uVar20 & 0xff) != 0));
      DeleteMoby(moby);
      return;
    }
    goto LAB_001abdc0;
  }
  dVar32 = 30.0;
  MB_getTarget(0x403e000000000000,lVar14,&DAT_001a9fc0,&local_d0);
  M1059_001a8ac0(lVar14,pSVar7,pSVar7->points + 1);
  MB_ColorDyingMoby(lVar14,pSVar7->points + 5);
  iVar15 = FastDecTimerS32(&pSVar7->points[0x12].y);
  if ((pSVar7->points[0x10].x == 0.0) || (moby->state < 7)) {
    puVar8 = (undefined4 *)pSVar7->points[0x13].z;
    uVar16 = PointInsideComplexPoly(&g_heroPosition,(Vec4 *)(puVar8 + 4),*puVar8);
    fVar10 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    uVar20 = (uVar16 != 0);
    if (dVar32 <= (double)SQRT(fVar3 * fVar3 + fVar10 * fVar10)) {
      local_90 = (MobyInstance *)0x0;
      local_d0.w = 0.0;
      local_d0.z = 0.0;
      local_d0.y = 0.0;
      local_d0.x = 0.0;
      local_b4 = 0.0;
      local_b8 = 0.0;
      local_bc = 0.0;
      local_c0 = 0.0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_8c = 2;
    }
    else {
      local_90 = g_heroMobyPtr;
      local_d0.x = g_heroPosition.x;
      local_d0.y = g_heroPosition.y;
      local_d0.z = g_heroPosition.z;
      local_d0.w = g_heroPosition.w;
      local_c0 = g_heroRotation.x;
      local_bc = g_heroRotation.y;
      local_b8 = g_heroRotation.z;
      local_b4 = g_heroRotation.w;
      local_b0 = DAT_00969da0;
      local_ac = DAT_00969da4;
      local_a8 = DAT_00969da8;
      local_a4 = DAT_00969dac;
      local_a0 = g_heroCGPos;
      local_9c = DAT_00969db4;
      local_98 = DAT_00969db8;
      local_94 = DAT_00969dbc;
      local_8c = 0;
    }
  }
  else {
    puVar8 = (undefined4 *)pSVar7->points[0x13].z;
    uVar16 = PointInsideComplexPoly(&local_d0,(Vec4 *)(puVar8 + 4),*puVar8);
    uVar20 = (uVar16 != 0);
  }
  if (pSVar7->points[0x10].x != 0.0) {
    puVar8 = (undefined4 *)pSVar7->points[0x11].z;
    PointInsideComplexPoly((Vec4 *)&moby->pos,(Vec4 *)(puVar8 + 4),*puVar8);
  }
  uVar23 = 0xff;
  lVar21 = lVar14 + 0x10;
  bVar1 = moby->setByGroup;
  uVar22 = 0xff;
  dVar32 = (double)GetGroundZNoWater(lVar21);
  pfVar9 = (float *)pSVar7->points[0x11].w;
  pSVar7->points[0x12].x = (float)dVar32;
  dVar29 = 0.5;
  dVar24 = (double)(float)((double)*pfVar9 - dVar32);
  pSVar7->points[0x12].z = (float)(dVar24 * 0.5 + dVar32);
  if (0.4099999964237213 <= dVar24) {
    uVar18 = 0;
    if (dVar24 <= 0.6800000071525574) {
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 2;
  }
  moby->setByGroup = (char)uVar18;
  if (bVar1 != uVar18) {
    iVar17 = (uint)bVar1 * 3;
    uVar23 = (&DAT_00740904)[iVar17 + uVar18];
    uVar22 = (&DAT_0074090d)[iVar17 + uVar18];
  }
  GetBonePosition(lVar14,0,local_120);
  iVar17 = CollSphere(0x3fe99999a0000000,local_120,&DAT_001a9fc0,1,lVar14);
  if (iVar17 != 0) {
    iVar17 = CollHotspot();
    if (iVar17 == 0) {
      dVar27 = 0.0;
      dVar32 = ABS((double)((moby->pos).z - local_118));
      dVar24 = (double)(float)((double)(*(float *)pSVar7->points[0x11].w - pSVar7->points[0x12].x) *
                              dVar29);
      if (dVar24 - dVar32 < 0.0) {
        dVar32 = dVar24;
      }
      if (pSVar7->points[0xc].z - 0.0 < 0.0) {
        dVar32 = -dVar32;
      }
      if ((moby->state == '\x0e') || (moby->state == '\f')) {
        dVar32 = (double)(float)(dVar32 * 2.0);
      }
      fVar10 = (moby->pos).y - g_CollOutput.ip.y;
      fVar3 = (moby->pos).x - g_CollOutput.ip.x;
      dVar25 = (double)SQRT(fVar3 * fVar3 + fVar10 * fVar10);
      dVar24 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar24 = dVar25;
      }
      dVar24 = (double)(float)(dVar24 * 2.0);
      if ((worldUpdateTime % 0x2d == (int)(short)moby->uid) &&
         (iVar17 = MB_randInt(2), iVar17 == 0)) {
        WaterTile_PutDrop
                  ((moby->pos).x,(moby->pos).y,(float)dVar24,(float)dVar32,WaterTiles,WaterTileCnt,
                   (float)dVar27);
      }
      uVar18 = rand();
      iVar17 = worldUpdateTime / (int)((uVar18 & 7) + 0x14);
      if (worldUpdateTime ==
          iVar17 * (uVar18 & 7) + (int)((longlong)iVar17 << 4) + (int)((longlong)iVar17 << 2)) {
        uVar26 = MB_randRangeFloat(1.5,2.4);
        dVar24 = -0.15000000596046448;
        dVar32 = 0.15000000596046448;
        MB_randRangeFloat(-0.15,0.15);
        MB_randRangeFloat((float)dVar24,(float)dVar32);
        CollWaterHeight(&g_CollOutput.ip.x,(float *)0x0);
        SpawnPart_45(uVar26,0x40b4820000000000,local_120);
      }
    }
  }
  fVar10 = pSVar7->points[0x13].w;
  uVar18 = (int)fVar10 >> 0x1f;
  dVar32 = 1.0;
  if (0x3f7fffff < (int)((uVar18 >> 1 ^ (uint)fVar10) - uVar18)) {
    g_heroPosition.x = (moby->pos).x;
    g_heroPosition.y = (moby->pos).y;
    g_heroPosition.z = (moby->pos).z;
    g_heroPosition.w = (moby->pos).w;
  }
  bVar1 = moby->state;
  if (7 < bVar1) {
    if (bVar1 < 0xe) {
      if (bVar1 < 0xb) {
        if (bVar1 < 9) {
          if (uVar20 == 0) {
            dVar27 = 0.7853981852531433;
            dVar24 = 1.5707963705062866;
            OrganicDeltAngSpeed
                      ((double)pSVar7->points[0x12].w,(double)(g_FrameTimeSq * 0.7853982),
                       (double)(g_FrameTimeSq * 1.5707964),
                       (double)(g_FrameTime * 0.7853982),lVar14,0x3f800000,
                       pSVar7->points + 0x11);
            dVar24 = (double)MB_DeltAngSpeed
                                       ((double)(moby->rotation).y,0,
                                        (double)(float)((double)g_FrameTimeSq * dVar27),
                                        (double)(float)((double)g_FrameTimeSq * dVar24),
                                        (double)(float)((double)g_FrameTime * dVar27));
            (moby->rotation).y = (float)dVar24;
            if ((iVar15 != 0) &&
               (iVar17 = MB_IsPntInCuboid
                                   ((Vec4 *)lVar21,(longlong)(int)pSVar7->points[0x10].y),
               iVar17 != 0)) {
              if (moby->animationId != '\x03') {
                MB_SetAnimation(lVar14,3,0,10);
              }
              iVar17 = rand();
              pSVar7->points[0x12].y = (float)(iVar17 % 0x78 + 0x3c);
              moby->state = '\a';
            }
          }
          else {
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar14,4,0,10);
            }
            moby->state = '\t';
          }
          M1059_001a9218(lVar14,pSVar7);
          iVar17 = M1059_001a9a58
                             ((double)pSVar7->points[0x12].w,0x3fd6571840000000,
                              (double)(g_FrameTimeSq * 3.0),0x3ff0c15240000000,
                              (double)(g_FrameTimeSq * 9.0),(double)g_FrameTime,lVar14,
                              pSVar7);
          if ((iVar17 != 0) && (iVar15 != 0)) {
            if (moby->animationId != '\x03') {
              MB_SetAnimation(lVar14,3,0,10);
            }
            iVar15 = rand();
            pSVar7->points[0x12].y = (float)(iVar15 % 0x78 + 0x3c);
            moby->state = '\a';
          }
          pSVar7->points[0xc].z = -(g_FrameTime * 9.8 - pSVar7->points[0xc].z);
          iVar15 = MB_MoveAndCollide2
                             (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400);
          if (iVar15 != 0) {
            fVar10 = pSVar7->points[0xc].y;
            fVar3 = pSVar7->points[0xc].z;
            pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
            pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
            pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
          }
          if (uVar23 != 0xff) {
            if (moby->animationId != uVar22) {
              MB_SetAnimation(lVar14,uVar22,0,6);
            }
            moby->state = uVar23;
          }
        }
        else {
          uVar26 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),
                                (double)(local_d0.y - (moby->pos).y));
          uVar30 = 0x3ff921fb60000000;
          OrganicDeltAngSpeed
                    (uVar26,(double)(g_FrameTimeSq * 0.7853982),(double)(g_FrameTimeSq * 1.5707964),
                     (double)(g_FrameTime * 0.7853982),lVar14);
          iVar15 = M1059_001a9a58
                             (uVar26,0x3fe0c15240000000,(double)(g_FrameTimeSq * 4.0),uVar30,
                              (double)(g_FrameTimeSq * 9.0),
                              (double)(float)((double)g_FrameTime * 1.5),
                              (double)g_FrameTime,lVar14,pSVar7);
          if (((iVar15 != 0) &&
              (fVar10 = (moby->pos).y - local_d0.y, fVar3 = (moby->pos).x - local_d0.x,
              SQRT(fVar3 * fVar3 + fVar10 * fVar10) < 1.9)) && (moby->state != '\n')) {
            if (moby->animationId != '\x05') {
              MB_SetAnimation(lVar14,5,0,2);
            }
            moby->state = '\n';
          }
          pSVar7->points[0xc].z = -(g_FrameTime * 9.8 - pSVar7->points[0xc].z);
          iVar15 = MB_MoveAndCollide2
                             (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400);
          if (iVar15 != 0) {
            fVar10 = pSVar7->points[0xc].y;
            fVar3 = pSVar7->points[0xc].z;
            pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
            pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
            pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
          }
          uVar19 = FastDoubleToInt(0x4020000000000000);
          *(undefined1 *)&pSVar7->points[4].z = uVar19;
          uVar19 = FastDoubleToInt(0x4023333340000000);
          *(undefined1 *)((int)&pSVar7->points[4].z + 2) = uVar19;
          if (uVar20 == 0) {
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar14,4,0,10);
            }
            moby->state = '\b';
          }
          M1059_001a9c20
                    (0x4031000000000000,0x4034000000000000,dVar32,dVar32,dVar32,lVar14,pSVar7,10,5);
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar14,4,0,10);
            }
            iVar15 = rand();
            pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
            moby->state = '\b';
          }
          if (uVar23 != 0xff) {
            if (moby->animationId != uVar22) {
              MB_SetAnimation(lVar14,uVar22,0,6);
            }
            moby->state = uVar23;
          }
        }
      }
      else if (bVar1 < 0xc) {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\a';
        }
      }
      else if (bVar1 < 0xd) {
        uVar20 = MB_UpdateKick(moby,(KickVars *)(pSVar7->points + 6));
        if ((uVar20 & 1) != 0) {
          M1059_001a8e20(lVar14,pSVar7);
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        M1059_001a8e20(lVar14,pSVar7);
      }
    }
    else if (bVar1 < 0x10) {
      if (bVar1 < 0xf) {
        uVar20 = MB_UpdateKick(moby,(KickVars *)(pSVar7->points + 6));
        if (((byte)moby->field43_0x70 & 2 & uVar20) != 0) {
          MB_genericExplosion
                    (0,0,0x4000000000000000,dVar32,0x4010000000000000,dVar32,0x401c000000000000,
                     lVar14,pSVar7->points + 0xc,0,0,1,3,3,5);
          DeleteMoby(moby);
          return;
        }
      }
      else {
        fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
        fVar10 = pSVar7->points[0xc].y;
        fVar3 = pSVar7->points[0xc].z;
        pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
        pSVar7->points[0xc].y = fVar10 * fVar4;
        pSVar7->points[0xc].z = fVar3 * fVar4 - g_FrameTime * 9.8;
        MB_MoveAndCollide2
                  (0x3ff0000000000000,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,
                   &DAT_00720000,0x10);
        if (uVar23 != 0xff) {
          if (moby->animationId != uVar22) {
            MB_SetAnimation(lVar14,uVar22,0,6);
          }
          moby->state = uVar23;
        }
      }
    }
    else if (bVar1 < 0x11) {
      fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
      pSVar7->points[0xc].y = fVar10 * fVar4;
      pSVar7->points[0xc].z = fVar3 * fVar4 - g_FrameTime * 9.8;
      MB_MoveAndCollide2
                (0x3ff0000000000000,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,&DAT_00720000,
                 0x10);
      if ((moby->field43_0x70 & 2U) != 0) {
        M1059_001a8e20(lVar14,pSVar7);
      }
    }
    else if (bVar1 < 0x12) {
      fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
      pSVar7->points[0xc].y = fVar10 * fVar4;
      pSVar7->points[0xc].z = fVar3 * fVar4;
      if ((moby->field43_0x70 & 2U) != 0) {
        M1059_001a8e20(lVar14,pSVar7);
      }
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 7) {
    if (uVar20 == 0) {
      if (iVar15 != 0) {
        if (moby->animationId != '\x04') {
          MB_SetAnimation(lVar14,4,0,10);
        }
        iVar15 = rand();
        pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
        dVar24 = (double)MB_randRot();
        pSVar7->points[0x12].w = (float)dVar24;
        moby->state = '\b';
      }
    }
    else {
      if (moby->animationId != '\x04') {
        MB_SetAnimation(lVar14,4,0,10);
      }
      moby->state = '\t';
    }
    fVar10 = (float)((double)DAT_0071f408 * -0.050000011920928955 + dVar32);
    fVar3 = pSVar7->points[0xc].y;
    fVar4 = pSVar7->points[0xc].z;
    pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
    pSVar7->points[0xc].y = fVar3 * fVar10;
    pSVar7->points[0xc].z = fVar4 * fVar10 - g_FrameTime * 9.8;
    iVar15 = MB_MoveAndCollide2
                       (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,&DAT_00720000,0x10)
    ;
    if (iVar15 != 0) {
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
      pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
      pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
    }
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 6) {
    M1059_001a9218(lVar14,pSVar7);
    dVar32 = 7.0;
    M1059_001a9a58
              ((double)pSVar7->points[0x12].w,0x3fcaceea00000000,(double)(g_FrameTimeSq * 6.0),
               0x3fe0c15240000000,(double)(g_FrameTimeSq * 4.0),(double)(g_FrameTime * 7.0)
               ,(double)(g_FrameTime * 3.0),lVar14,pSVar7);
    M1059_001a9908
              ((double)(g_FrameTimeSq * 12.0),(double)(g_FrameTimeSq * 50.0),
               (double)(float)((double)g_FrameTime * dVar32),lVar14,pSVar7);
    dVar24 = 1.5707963705062866;
    dVar32 = 3.1415927410125732;
    OrganicDeltAngSpeed
              ((double)pSVar7->points[0x12].w,(double)(g_FrameTimeSq * 1.5707964),
               (double)(g_FrameTimeSq * 3.1415927),(double)(g_FrameTime * 3.1415927),lVar14
              );
    dVar32 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,0,
                                (double)(float)((double)g_FrameTimeSq * dVar24),
                                (double)(float)((double)g_FrameTimeSq * dVar32),
                                (double)(float)((double)g_FrameTime * dVar32));
    bVar1 = moby->field43_0x70;
    (moby->rotation).y = (float)dVar32;
    if (((bVar1 & 2) != 0) && (moby->animationId != '\x01')) {
      MB_SetAnimation(lVar14,1,0,10);
    }
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 5) {
    GetBonePosition(lVar14,0,&local_110);
    dVar31 = (double)(local_110 - (moby->pos).x);
    dVar28 = (double)(local_10c - (moby->pos).y);
    dVar25 = (double)(local_108 - (moby->pos).z);
    dVar24 = (double)FUN_005e8338((double)(local_d0.x - local_110),(double)(local_d0.y - local_10c))
    ;
    OrganicDeltAngSpeed
              (dVar24,(double)(g_FrameTimeSq * 12.566371),0,
               (double)(g_FrameTime * 12.566371),lVar14,&DAT_00720000,
               pSVar7->points + 0x11);
    (moby->rotation).y = DAT_0071f408 * 0.7 * (moby->rotation).y;
    pSVar7->points[0x13].w = pSVar7->points[0x13].w + 0.028;
    fVar10 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    dVar29 = (double)pSVar7->points[0xf].x;
    fVar6 = pSVar7->points[0xf].y;
    dVar27 = (double)pSVar7->points[0x13].w;
    fVar5 = pSVar7->points[0xf].z;
    if (dVar27 - dVar32 < 0.0) {
      dVar32 = dVar27;
    }
    (moby->pos).x =
         (float)((double)(float)((double)(float)((double)local_d0.x - dVar31) - dVar29) * dVar32 +
                dVar29);
    (moby->pos).y =
         (float)((double)((float)((double)local_d0.y - dVar28) - fVar6) * dVar32 +
                (double)pSVar7->points[0xf].y);
    fVar6 = pSVar7->points[0xf].z;
    (moby->pos).w = local_d0.w;
    (moby->pos).z =
         (float)((double)((float)((double)local_d0.z - dVar25) - fVar5) * dVar32 + (double)fVar6);
    STUB_00065468(local_100,lVar21);
    STUB_00065468(pSVar7->points + 0xf,lVar21);
    fVar6 = pSVar7->points[0x13].w;
    uVar18 = (int)fVar6 >> 0x1f;
    pSVar7->points[0xc].x = (moby->pos).x - fVar10;
    pSVar7->points[0xc].y = (moby->pos).y - fVar3;
    pSVar7->points[0xc].z = (moby->pos).z - fVar4;
    pSVar7->points[0xc].w = (moby->pos).w;
    if ((int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18) < 0x3f800000) {
      pSVar7->points[0x12].w = (float)dVar24;
    }
    else {
      g_heroHealth = 0;
      TransitionMovement(0x3d,1);
      g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
      g_heroInvisible = 1;
      moby->state = '\x06';
    }
    if ((uVar20 == 0) && (DAT_00969fec == 0)) {
      pSVar7->points[0x13].w = 0.0;
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar14,1,0,10);
      }
      moby->state = '\x02';
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 4) {
    uVar26 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),(double)(local_d0.y - (moby->pos).y))
    ;
    dVar27 = 12.566370964050293;
    uVar30 = 0;
    OrganicDeltAngSpeed
              (uVar26,(double)(g_FrameTimeSq * 12.566371),0,
               (double)(g_FrameTime * 12.566371),lVar14);
    fVar10 = (moby->pos).y - local_d0.y;
    fVar3 = (moby->pos).x - local_d0.x;
    dVar29 = (double)(moby->rotation).y;
    dVar24 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar10 * fVar10),
                                  (double)(local_d0.z - (moby->pos).z));
    dVar24 = (double)MB_DeltAngSpeed
                               (dVar29,-dVar24,(double)(float)((double)g_FrameTimeSq * dVar27),uVar30
                                ,(double)(float)((double)g_FrameTime * dVar27));
    (moby->rotation).y = (float)dVar24;
    fVar6 = g_FrameTimeSq;
    fVar4 = g_FrameTime;
    fVar10 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    bVar12 = SQRT(fVar3 * fVar3 + fVar10 * fVar10) < 3.0;
    if (bVar12) {
      fVar10 = (float)((double)DAT_0071f408 * -0.10000002384185791 + dVar32);
      fVar3 = pSVar7->points[0xc].y;
      fVar5 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
      pSVar7->points[0xc].y = fVar3 * fVar10;
      pSVar7->points[0xc].z = fVar5 * fVar10;
    }
    iVar15 = M1059_001a9a58
                       (uVar26,0x3fcaceea00000000,(double)(fVar6 * 20.0),0x3fe0c15240000000,
                        (double)(fVar6 * 3.0),(double)(fVar4 * 20.0),(double)(fVar4 * 5.0),lVar14,
                        pSVar7);
    if ((iVar15 != 0) && (bVar12)) {
      if (moby->animationId != '\x02') {
        MB_SetAnimation(lVar14,2,4,2);
      }
      moby->state = '\x05';
      moby->collision = (ushort *)0x0;
      pSVar7->points[0x13].w = 0.0;
      pSVar7->points[0xf].x = (moby->pos).x;
      pSVar7->points[0xf].y = (moby->pos).y;
      pSVar7->points[0xf].z = (moby->pos).z;
      pSVar7->points[0xf].w = (moby->pos).w;
    }
    pSVar7->points[0x12].z = local_d0.z - 0.25;
    M1059_001a9908
              ((double)(g_FrameTimeSq * 38.0),uVar30,(double)(g_FrameTime * 38.0),lVar14,
               pSVar7);
    uVar2 = moby->animationId;
    if ((uVar20 == 0) || (DAT_00969fec == 0)) {
      if (uVar2 != '\x01') {
        MB_SetAnimation(lVar14,1,0,10);
        uVar2 = moby->animationId;
      }
      moby->state = '\x02';
    }
    if (uVar23 != 0xff) {
      if (uVar2 != uVar22) {
        MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 2) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      MB_SetAnimation(lVar14,1,0,10);
    }
    if (((uVar20 == 0) || (local_90 == (MobyInstance *)0x0)) || (local_90 != g_heroMobyPtr)) {
      dVar24 = 1.7453292608261108;
      dVar32 = 4.537856101989746;
      OrganicDeltAngSpeed
                ((double)pSVar7->points[0x12].w,(double)(g_FrameTimeSq * 1.7453293),
                 (double)(g_FrameTimeSq * 4.537856),(double)(g_FrameTime * 1.7453293),
                 lVar14);
      dVar32 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,0,
                                  (double)(float)((double)g_FrameTimeSq * dVar24),
                                  (double)(float)((double)g_FrameTimeSq * dVar32),
                                  (double)(float)((double)g_FrameTime * dVar24));
      (moby->rotation).y = (float)dVar32;
      if ((iVar15 != 0) &&
         (iVar17 = MB_IsPntInCuboid((Vec4 *)lVar21,(longlong)(int)pSVar7->points[0x10].y),
         iVar17 != 0)) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar14,0,0,10);
        }
        iVar17 = rand();
        pSVar7->points[0x12].y = (float)(iVar17 % 0x78 + 0x3c);
        moby->state = '\x01';
      }
    }
    else {
      local_80 = (MobyInstance *)0x0;
      iVar17 = MB_GetFirstMobyInGroup(&local_80,(uint)(byte)moby->group,'\0','\0');
      while ((iVar17 == 0 && (local_80 != (MobyInstance *)0x0))) {
        if ((local_80 != moby) && (local_80->state < 7 && 3 < local_80->state)) goto LAB_001aac1c;
        iVar17 = MB_GetNextMobyInGroup(&local_80,local_80,'\0','\0');
      }
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar14,1,0,10);
      }
      moby->state = '\x04';
    }
LAB_001aac1c:
    M1059_001a9218(lVar14,pSVar7);
    iVar17 = M1059_001a9a58
                       ((double)pSVar7->points[0x12].w,0x3fcaceea00000000,
                        (double)(g_FrameTimeSq * 6.0),0x3fe0c15240000000,(double)(g_FrameTimeSq * 4.0)
                        ,(double)(g_FrameTime * 7.0),(double)(g_FrameTime * 3.0)
                        ,lVar14,pSVar7);
    if ((iVar17 != 0) && (iVar15 != 0)) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar14,0,0,10);
      }
      iVar15 = rand();
      pSVar7->points[0x12].y = (float)(iVar15 % 0x78 + 0x3c);
      moby->state = '\x01';
    }
    pMVar13 = local_90;
    if ((local_90 != (MobyInstance *)0x0) && (local_90 == g_heroMobyPtr)) {
      GetBonePosition(lVar14,0,auStack_f0);
      iVar15 = CollSphere(0x3ff8000000000000,auStack_f0,&DAT_001a9fc0,0x21,lVar14);
      if ((iVar15 != 0) && (g_CollOutput.pMoby == pMVar13)) {
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar14,2,0,2);
        }
        moby->state = '\x05';
      }
    }
    M1059_001a9908
              ((double)(g_FrameTimeSq * 15.0),(double)(g_FrameTimeSq * 50.0),
               (double)(g_FrameTime * 8.0),lVar14,pSVar7);
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 != 1) {
    if (bVar1 == 0) {
      printf("hey, shouldn\'t be in init!\n");
    }
    goto LAB_001abdc0;
  }
  if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\0')) {
    MB_SetAnimation(lVar14,0,0,10);
  }
  if (((uVar20 != 0) && (local_90 != (MobyInstance *)0x0)) && (local_90 == g_heroMobyPtr)) {
    local_7c[0] = (MobyInstance *)0x0;
    iVar17 = MB_GetFirstMobyInGroup(local_7c,(uint)(byte)moby->group,'\0','\0');
    while ((iVar17 == 0 && (local_7c[0] != (MobyInstance *)0x0))) {
      if ((local_7c[0] != moby) && (local_7c[0]->state < 7 && 3 < local_7c[0]->state))
      goto LAB_001aa850;
      iVar17 = MB_GetNextMobyInGroup(local_7c,local_7c[0],'\0','\0');
    }
    if (moby->animationId != '\x01') {
      MB_SetAnimation(lVar14,1,0,10);
    }
    moby->state = '\x04';
  }
LAB_001aa850:
  pMVar13 = local_90;
  if ((local_90 == (MobyInstance *)0x0) || (local_90 != g_heroMobyPtr)) {
LAB_001aa8f4:
    if (iVar15 != 0) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(lVar14,1,0,10);
      }
      iVar15 = rand();
      pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
      dVar24 = (double)MB_randRot();
      pSVar7->points[0x12].w = (float)dVar24;
      moby->state = '\x02';
    }
  }
  else {
    GetBonePosition(lVar14,0,auStack_e0);
    iVar17 = CollSphere(0x3ff8000000000000,auStack_e0,&DAT_001a9fc0,0x21,lVar14);
    if ((iVar17 == 0) || (g_CollOutput.pMoby != pMVar13)) goto LAB_001aa8f4;
    if (moby->animationId != '\x02') {
      MB_SetAnimation(lVar14,2,0,2);
    }
    moby->state = '\x05';
  }
  fVar10 = (float)((double)DAT_0071f408 * -0.050000011920928955 + dVar32);
  fVar3 = pSVar7->points[0xc].y;
  fVar4 = pSVar7->points[0xc].z;
  pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
  pSVar7->points[0xc].y = fVar3 * fVar10;
  pSVar7->points[0xc].z = fVar4 * fVar10;
  M1059_001a9908
            ((double)(g_FrameTimeSq * 15.0),(double)(g_FrameTimeSq * 50.0),
             (double)(g_FrameTime * 8.0),lVar14,pSVar7);
  if (uVar23 != 0xff) {
    if (moby->animationId != uVar22) {
      MB_SetAnimation(lVar14,uVar22,0,6);
    }
    moby->state = uVar23;
  }
LAB_001abdc0:
  fVar11 = (moby->pos).x;
  uVar20 = (int)fVar11 >> 0x1f;
  iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20;
  if ((((iVar15 < 0x40000000) || (0x447f4000 < iVar15)) ||
      (fVar11 = (moby->pos).y, uVar20 = (int)fVar11 >> 0x1f,
      iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20, 0x447f4000 < iVar15 || iVar15 < 0x40000000))
     || ((fVar11 = (moby->pos).z, uVar20 = (int)fVar11 >> 0x1f,
         iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20, iVar15 < 0x40000000 ||
         (0x447f4000 < iVar15)))) {
    DeleteMoby(moby);
  }
  return;
}



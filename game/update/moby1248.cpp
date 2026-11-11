// game/update/moby1248.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x227994-0x2283a0
#include "game/update/moby1248.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby849.h"

// 0x0227994 (0x34 bytes)
undefined8 MB_isSpecificState(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->state;
  if (((uVar1 == '\v' || uVar1 == '\x14') || (uVar1 == '\x12')) || (uVar1 == '\f')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// 0x02279c8 (0xb0 bytes)
undefined8 M1248_002279c8(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar2 = M849_MB_Sucking(param_1);
  if ((int)uVar2 == 0) {
    if (param_1->state == '\x14') {
      param_1->state = param_1->setByGroup;
    }
  }
  else {
    uVar1 = param_1->state;
    if ((((uVar1 == '\x04' || uVar1 == '\x02') || (uVar1 == '\x05')) || (uVar1 == '\x06')) ||
       (((uVar1 == '\x0e' || (uVar1 == '\x0f')) || ((uVar1 == '\x10' || (uVar1 == '\x14')))))) {
      if (uVar1 != '\x14') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x14';
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x0227a78 (0x68 bytes)
void M1248_00227a78(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x14') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x14') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x14;
  }
  return;
}


// 0x0227ae0 (0x68 bytes)
void M1248_00227ae0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x14') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x14') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x14;
  }
  return;
}


// 0x0227b48 (0x24 bytes)
void M1248_00227b48(void)

{
  M849_0048afe8();
  return;
}


// 0x0227b6c (0x40 bytes)
longlong M1248_00227b6c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x0227bac (0x14 bytes)
void M1248_00227bac(void)

{
  DAT_0076d34c = 0x10000;
  return;
}


// 0x0227c00 (0x7a0 bytes)
/* Moby 1248 */

undefined4 * UpdateMoby_1248(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  bVar2 = moby->state;
  puVar13 = (undefined4 *)(uint)bVar2;
  piVar6 = (int *)moby->pVar;
  dVar15 = (double)(moby->pos).x;
  if (bVar2 == 6) {
    fVar1 = (moby->transform).v0.y;
    fVar3 = (moby->transform).v0.x;
    fVar4 = (moby->transform).v0.z;
    dVar16 = 0.0;
    iVar7 = *piVar6;
    fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    fVar9 = 0.5 / fVar5;
    dVar18 = dVar16;
    if (0.0 - fVar5 < 0.0) {
      dVar18 = (double)(fVar3 * fVar9);
    }
    dVar17 = dVar16;
    if (0.0 - fVar5 < 0.0) {
      dVar17 = (double)(fVar1 * fVar9);
    }
    if (0.0 - fVar5 < 0.0) {
      dVar16 = (double)(fVar4 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar18 = (double)(fVar3 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar17 = (double)(fVar1 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar16 = (double)(fVar4 * fVar9);
    }
    *(float *)(iVar7 + 0x10) = (float)(dVar15 + dVar18);
    *(float *)(iVar7 + 0x14) = (float)((double)(moby->pos).y + dVar17);
    *(float *)(iVar7 + 0x18) = (float)((double)(moby->pos).z + dVar16);
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(*piVar6 + 0x18) = (moby->pos).z + DAT_0076d370;
    *(float *)(*piVar6 + 0x40) = DAT_00f0d2f4 * -0.017453292;
    dVar15 = 0.01745329238474369;
    *(float *)(*piVar6 + 0x44) = DAT_0076d374 * 0.017453292;
    UpdateMobyTransform((MobyInstance *)*piVar6);
    iVar7 = piVar6[1];
    *(float *)(iVar7 + 0x10) = (float)((double)(moby->pos).x + dVar18);
    *(float *)(iVar7 + 0x14) = (float)((double)(moby->pos).y + dVar17);
    *(float *)(iVar7 + 0x18) = (float)((double)(moby->pos).z + dVar16);
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = (moby->pos).z + DAT_0076d370;
    *(float *)(piVar6[1] + 0x40) = (float)((double)DAT_00f0d2f4 * dVar15);
    *(float *)(piVar6[1] + 0x44) = (float)((double)DAT_0076d374 * dVar15);
    puVar13 = (undefined4 *)UpdateMobyTransform((MobyInstance *)piVar6[1]);
  }
  else if (bVar2 == 4) {
    OrganicDelt
              (1.0,DAT_0071f418 * 12.0,DAT_0071f418 * 24.0,g_FrameTime * 12.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    *(float *)(*piVar6 + 0x18) = (float)piVar6[2] * 0.25 + (moby->pos).z;
    *(float *)(piVar6[1] + 0x18) = (float)piVar6[2] * 0.25 + (moby->pos).z;
    fVar1 = (float)piVar6[2];
    *(float *)(*piVar6 + 0x40) = -(fVar1 * 1.5707964);
    *(float *)(piVar6[1] + 0x40) = fVar1 * 1.5707964;
    UpdateMobyTransform((MobyInstance *)*piVar6);
    UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x05';
    }
  }
  else if (bVar2 == 3) {
    dVar15 = 1.0;
    OrganicDelt
              (1.0,DAT_0071f418 * 10.0,DAT_0071f418 * 20.0,g_FrameTime * 10.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    fVar1 = DAT_0076d374 * 0.017453292 * (float)(dVar15 - (double)(float)piVar6[2]);
    *(float *)(*piVar6 + 0x44) = fVar1;
    *(float *)(piVar6[1] + 0x44) = fVar1;
    UpdateMobyTransform((MobyInstance *)*piVar6);
    UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x04';
    }
  }
  else if (bVar2 == 2) {
    OrganicDelt
              (1.0,DAT_0071f418 * 8.0,DAT_0071f418 * 16.0,g_FrameTime * 8.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    fVar1 = (moby->transform).v0.y;
    fVar3 = (moby->transform).v0.x;
    fVar4 = (moby->transform).v0.z;
    fVar5 = 0.0;
    iVar7 = *piVar6;
    fVar12 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    fVar9 = 0.5 / fVar12;
    fVar11 = fVar5;
    if (0.0 - fVar12 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    fVar10 = fVar5;
    if (0.0 - fVar12 < 0.0) {
      fVar10 = fVar1 * fVar9;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar5 = fVar4 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar10 = fVar1 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar9;
    }
    *(float *)(iVar7 + 0x10) = (moby->pos).x + fVar11;
    *(float *)(iVar7 + 0x14) = (moby->pos).y + fVar10;
    *(float *)(iVar7 + 0x18) = (moby->pos).z + fVar5;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(*piVar6 + 0x18) = ((float)piVar6[2] * 4.0 + (moby->pos).z) - 4.0;
    iVar7 = piVar6[1];
    *(float *)(iVar7 + 0x10) = (moby->pos).x + fVar11;
    *(float *)(iVar7 + 0x14) = (moby->pos).y + fVar10;
    *(float *)(iVar7 + 0x18) = (moby->pos).z + fVar5;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = ((float)piVar6[2] * 4.0 + (moby->pos).z) - 4.0;
    UpdateMobyTransform((MobyInstance *)*piVar6);
    UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x03';
    }
  }
  else if (bVar2 == 1) {
    puVar13 = &g_heroMtx;
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar1 = (float)(dVar15 - (double)g_heroPosition.x);
    if (SQRT(fVar1 * fVar1 + fVar3 * fVar3) < 12.0) {
      puVar13 = (undefined4 *)MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[4]);
      if (puVar13 != (undefined4 *)0x0) {
        piVar6[2] = 0;
        moby->state = '\x02';
        puVar13 = (undefined4 *)PlayMobySound(0,4,(MobyInstance *)*piVar6);
      }
    }
  }
  else if (bVar2 == 0) {
    moby->scale = moby->scale * 2.0;
    pMVar14 = CreateMoby(0x4df);
    *piVar6 = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(*piVar6 + 0x31) = 1;
    *(undefined8 *)(*piVar6 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    *(MobyModeBit *)(*piVar6 + 0x34) = moby->modeBits | HAS_SPECIAL_VARS;
    iVar7 = *piVar6;
    *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    dVar18 = 4.0;
    *(float *)(*piVar6 + 0x18) = *(float *)(*piVar6 + 0x18) - 4.0;
    iVar7 = *piVar6;
    *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
    *(float *)(*piVar6 + 0x40) = DAT_00f0d2f4 * -0.017453292;
    dVar15 = 0.01745329238474369;
    *(float *)(*piVar6 + 0x44) = DAT_0076d374 * 0.017453292;
    iVar7 = *(int *)(*piVar6 + 0x78);
    *(int *)(iVar7 + 8) = iVar7 + 0x20;
    *(uint *)(iVar7 + 0x5c) = *(uint *)(iVar7 + 0x5c) | 1;
    pMVar14 = CreateMoby(0x4df);
    piVar6[1] = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(piVar6[1] + 0x31) = 1;
    *(undefined8 *)(piVar6[1] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    *(MobyModeBit *)(piVar6[1] + 0x34) = moby->modeBits | (MIRROR|HAS_SPECIAL_VARS);
    iVar7 = piVar6[1];
    *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = (float)((double)*(float *)(piVar6[1] + 0x18) - dVar18);
    iVar7 = piVar6[1];
    *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
    *(float *)(piVar6[1] + 0x40) = (float)((double)DAT_00f0d2f4 * dVar15);
    *(float *)(piVar6[1] + 0x44) = (float)((double)DAT_0076d374 * dVar15);
    puVar13 = *(undefined4 **)(piVar6[1] + 0x78);
    puVar13[2] = puVar13 + 8;
    puVar13[0x17] = puVar13[0x17] | 1;
    moby->state = '\x01';
  }
  return puVar13;
}



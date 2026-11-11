// game/update/moby1167.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e8fb4-0x1e99b4
#include <stdio.h>
#include "game/update/moby1167.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby880.h"
#include "idol/fastfunc.h"

// 0x01e8fb4 (0x14 bytes)
void M1167_001e8fb4(void)

{
  DAT_00765aec = 0x10000;
  return;
}


// 0x01e8fd0 (0x198 bytes)
void M1167_001e8fd0(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x04')) goto LAB_001e9134;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_001e90f0:
    param_1->state = '\x04';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_001e90f0;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar3 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar3 + 0x67) = 100;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_001e9134:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}


// 0x01e91a0 (0x814 bytes)
// inlined: FastAtan2 @0x1e9450
// strings: 00654960: 'Turret with no aiming cuboid. UID: %d\n'

/* Moby 1167 */

void UpdateMoby_1167(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  MobyInstance *pMVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f31;
  double dVar31;
  float fVar32;
  
  lVar12 = (longlong)(int)moby;
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar11;
  puVar9[0x28] = in_LR;
  puVar9[0x25] = in_f31;
  puVar9[0x24] = unaff_r31;
  puVar9[0x23] = unaff_r30;
  puVar9[0x22] = unaff_r29;
  pvVar8 = moby->pVar;
  M1167_001e8fd0();
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar12,(int)pvVar8 + 0x40,lVar12 + 0x10,1,0xffffffffffffffff,5,2,4
              );
    DeleteMoby(moby);
    return;
  }
  if (uVar2 != '\x03') {
    if (uVar2 == '\x02') {
      fVar32 = Delt(*(float *)((int)pvVar8 + 0x84),g_FrameTime * 4.0,
                              &(moby->pos).z);
      if (fVar32 != 0.0) {
        return;
      }
      moby->state = '\x03';
      return;
    }
    if (uVar2 == '\x01') {
      (moby->pos).z = *(float *)((int)pvVar8 + 0x84) + DAT_00765b10;
      if (DAT_00f08e08 == 0) {
        return;
      }
      moby->state = '\x02';
      return;
    }
    if (uVar2 != '\0') {
      return;
    }
    if (*(int *)((int)pvVar8 + 0x74) == -1) {
      printf("Turret with no aiming cuboid. UID: %d\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    *(f32 *)((int)pvVar8 + 0x84) = (moby->pos).z;
    moby->state = ((byte)(ZERO_MASK(*(int *)((int)pvVar8 + 0x70))) & 0xfe) + 3;
    return;
  }
  dVar31 = 0.01745329238474369;
  dVar22 = (double)FastWrapRot
                             (*(float *)((int)pvVar8 + 0x78),
                              DAT_00765b14 * 0.017453292 * g_FrameTime);
  *(float *)((int)pvVar8 + 0x78) = (float)dVar22;
  dVar31 = (double)FastWrapRot
                             ((float)dVar22,(float)((double)*(float *)((int)pvVar8 + 0x80) * dVar31)
                             );
  dVar22 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar22 = dVar31;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar22 < 0.0) {
    dVar26 = dVar22;
  }
  iVar15 = *(int *)((int)pvVar8 + 0x74);
  dVar22 = (double)(float)(dVar26 * dVar26);
  dVar31 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar26));
  dVar30 = (double)(float)(dVar22 * dVar31);
  fVar32 = (float)(dVar22 * dVar30) * 2.601887e-06 +
           (float)(dVar30 * -0.0001980741071747616 +
                  (double)(float)(dVar31 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar22 * dVar26) *
                                                 -0.16666656732559204 + dVar26)));
  fVar7 = (Cuboids[iVar15].matrix.v1.x * fVar32 + Cuboids[iVar15].pos.x) - (moby->pos).x;
  fVar32 = (Cuboids[iVar15].matrix.v1.y * fVar32 + Cuboids[iVar15].pos.y) - (moby->pos).y;
  fVar3 = ABS(fVar7);
  fVar4 = ABS(fVar32);
  *(float *)(puVar9 + 0x1c) = fVar7;
  *(float *)((int)puVar9 + 0xe4) = fVar32;
  *(float *)(puVar9 + 0x1d) = fVar3 - fVar4;
  dVar22 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
  fVar32 = ABS(*(float *)(puVar9 + 0x1c));
  if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
    fVar32 = fVar4;
  }
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0xe4));
  if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar31 = dVar22;
  if (0.0 < fVar32) {
    lVar13 = uVar11 - 0x120;
    lVar17 = uVar11 - 0x44;
    lVar20 = uVar11 - 0x34;
    lVar21 = 2;
    fVar32 = (fVar4 - fVar32) / (fVar4 + fVar32);
    fVar4 = fVar32 * fVar32;
    *(float *)(puVar9 + 0x1f) = fVar32;
    *(float *)(puVar9 + 0x1e) = fVar32;
    *(float *)((int)puVar9 + 0xf4) = fVar32;
    *(float *)((int)puVar9 + 0xec) = fVar32;
    fVar32 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar4;
    *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar32;
    *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar32 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xec) = *(float *)((int)lVar13 + 0xdc) * fVar32 * fVar32;
      iVar15 = (int)lVar17;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar32 * fVar32;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar11 - 0x44;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar20;
    do {
      fVar32 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0xec) = *(float *)((int)lVar13 + 0xec) * fVar32;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar13 = 2;
    do {
      iVar15 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar10 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar15 + 0xec)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar3);
  }
  iVar10 = worldUpdateTime;
  iVar15 = (worldUpdateTime / DAT_00765b2c) * DAT_00765b2c;
  (moby->rotation).z = (float)dVar31;
  if (iVar10 != iVar15) {
    return;
  }
  iVar15 = MB_randInt(3);
  if (iVar15 < 1) {
    if (-1 < iVar15) {
      fVar32 = (moby->transform).v2.y;
      fVar7 = (moby->transform).v2.x;
      fVar4 = (moby->transform).v2.z;
      dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
      if (dVar31 == dVar22) {
        fVar5 = (moby->transform).v2.w;
        dVar23 = dVar22;
        dVar24 = dVar22;
        dVar25 = dVar22;
      }
      else {
        fVar3 = (float)((double)DAT_00765b20 / dVar31);
        fVar5 = (moby->transform).v2.w;
        dVar25 = (double)(fVar7 * fVar3);
        dVar24 = (double)(fVar32 * fVar3);
        dVar23 = (double)(fVar4 * fVar3);
      }
      *(float *)(puVar9 + 0x18) = (float)dVar25;
      *(float *)((int)puVar9 + 0xc4) = (float)dVar24;
      *(float *)((int)puVar9 + 0xcc) = fVar5;
      *(float *)(puVar9 + 0x19) = (float)dVar23;
      goto LAB_001e97ec;
    }
  }
  else if (iVar15 < 2) {
    fVar32 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.x;
    fVar4 = (moby->transform).v2.z;
    dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
    if (dVar31 == dVar22) {
      fVar5 = (moby->transform).v2.w;
      dVar31 = dVar22;
      dVar26 = dVar22;
      dVar30 = dVar22;
    }
    else {
      fVar3 = (float)((double)DAT_00765b24 / dVar31);
      fVar5 = (moby->transform).v2.w;
      dVar31 = (double)(fVar7 * fVar3);
      dVar26 = (double)(fVar32 * fVar3);
      dVar30 = (double)(fVar4 * fVar3);
    }
    fVar7 = (moby->transform).v1.y;
    fVar4 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    dVar29 = (double)DAT_00765b1c;
    *(float *)((int)puVar9 + 0xc4) = (float)dVar26;
    *(float *)(puVar9 + 0x19) = (float)dVar30;
    *(float *)((int)puVar9 + 0xcc) = fVar5;
    *(float *)(puVar9 + 0x18) = (float)dVar31;
    dVar23 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
    fVar32 = (float)(dVar29 / dVar23);
    dVar29 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar29 = (double)(fVar3 * fVar32);
    }
    dVar28 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar28 = (double)(fVar7 * fVar32);
    }
    dVar27 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar27 = (double)(fVar4 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar29 = (double)(fVar3 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar28 = (double)(fVar7 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar27 = (double)(fVar4 * fVar32);
    }
    dVar23 = (double)(float)(dVar30 + dVar29);
    dVar24 = (double)(float)(dVar26 + dVar28);
    dVar25 = (double)(float)(dVar31 + dVar27);
    *(float *)(puVar9 + 0x19) = (float)(dVar30 + dVar29);
    *(float *)((int)puVar9 + 0xc4) = (float)(dVar26 + dVar28);
    *(float *)(puVar9 + 0x18) = (float)(dVar31 + dVar27);
    goto LAB_001e97ec;
  }
  fVar32 = (moby->transform).v2.y;
  fVar7 = (moby->transform).v2.x;
  fVar4 = (moby->transform).v2.z;
  dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
  if (dVar31 == dVar22) {
    fVar5 = (moby->transform).v2.w;
    dVar31 = dVar22;
    dVar26 = dVar22;
    dVar30 = dVar22;
  }
  else {
    fVar3 = (float)((double)DAT_00765b24 / dVar31);
    fVar5 = (moby->transform).v2.w;
    dVar31 = (double)(fVar7 * fVar3);
    dVar26 = (double)(fVar32 * fVar3);
    dVar30 = (double)(fVar4 * fVar3);
  }
  fVar7 = (moby->transform).v1.y;
  fVar4 = (moby->transform).v1.x;
  fVar3 = (moby->transform).v1.z;
  dVar29 = (double)DAT_00765b1c;
  *(float *)((int)puVar9 + 0xc4) = (float)dVar26;
  *(float *)(puVar9 + 0x19) = (float)dVar30;
  *(float *)((int)puVar9 + 0xcc) = fVar5;
  *(float *)(puVar9 + 0x18) = (float)dVar31;
  dVar23 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
  fVar32 = (float)(-dVar29 / dVar23);
  dVar29 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar29 = (double)(fVar3 * fVar32);
  }
  dVar28 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar28 = (double)(fVar7 * fVar32);
  }
  dVar27 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar27 = (double)(fVar4 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar29 = (double)(fVar3 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar28 = (double)(fVar7 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar27 = (double)(fVar4 * fVar32);
  }
  dVar23 = (double)(float)(dVar30 + dVar29);
  dVar24 = (double)(float)(dVar26 + dVar28);
  dVar25 = (double)(float)(dVar31 + dVar27);
  *(float *)(puVar9 + 0x19) = (float)(dVar30 + dVar29);
  *(float *)((int)puVar9 + 0xc4) = (float)(dVar26 + dVar28);
  *(float *)(puVar9 + 0x18) = (float)(dVar31 + dVar27);
LAB_001e97ec:
  fVar5 = DAT_00765b28;
  fVar3 = g_FrameTime;
  fVar32 = (moby->transform).v0.y;
  fVar7 = (moby->transform).v0.x;
  fVar4 = (moby->transform).v0.z;
  dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
  if (dVar31 == dVar22) {
    fVar6 = (moby->transform).v0.w;
    dVar31 = dVar22;
    dVar26 = dVar22;
    dVar30 = dVar22;
  }
  else {
    fVar1 = (float)((double)DAT_00765b18 / dVar31);
    fVar6 = (moby->transform).v0.w;
    dVar30 = (double)(fVar7 * fVar1);
    dVar26 = (double)(fVar32 * fVar1);
    dVar31 = (double)(fVar4 * fVar1);
  }
  fVar32 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  *(float *)(puVar9 + 0x1a) = (float)dVar30;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar26;
  *(float *)(puVar9 + 0x1b) = (float)dVar31;
  *(float *)((int)puVar9 + 0xdc) = fVar6;
  dVar28 = (double)SQRT((float)(dVar31 * dVar31 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar26 * dVar26))))
  ;
  *(float *)(puVar9 + 0x18) = (float)(dVar25 + dVar30) + fVar32;
  *(float *)((int)puVar9 + 0xc4) = (float)(dVar24 + dVar26) + fVar7;
  *(float *)(puVar9 + 0x19) = (float)(dVar23 + dVar31) + fVar4;
  dVar23 = (double)(float)((double)(fVar5 * fVar3) / dVar28);
  dVar29 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar29 = (double)(float)(dVar30 * dVar23);
  }
  dVar27 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar27 = (double)(float)(dVar26 * dVar23);
  }
  dVar24 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar24 = (double)(float)(dVar31 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar29 = (double)(float)(dVar30 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar27 = (double)(float)(dVar26 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar24 = (double)(float)(dVar31 * dVar23);
  }
  *(float *)(puVar9 + 0x1a) = (float)dVar29;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar27;
  *(float *)(puVar9 + 0x1b) = (float)dVar24;
  pMVar16 = (MobyInstance *)FUN_0049fba0(uVar11 - 0x70,uVar11 - 0x60,lVar12,1);
  SetColorOfMoby(pMVar16,0xe0,0xe0,0xe0);
  return;
}



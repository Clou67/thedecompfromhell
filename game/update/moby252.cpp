// game/update/moby252.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x316de0-0x318b3c
#include "game/update/moby252.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0316de0 (0x2fc bytes)
void M252_00316de0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_30;
  
  iVar9 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(iVar9 + 0x44);
  fVar3 = *(float *)(iVar9 + 0x40);
  fVar4 = *(float *)(iVar9 + 0x48);
  dVar14 = 3.0;
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = g_FrameTime * 3.0;
  fVar5 = -(g_FrameTimeSq * 6.0 - fVar1);
  if ((fVar5 <= fVar6) && (fVar6 = fVar5, fVar5 < 0.0)) {
    fVar6 = 0.0;
  }
  fVar6 = fVar6 / fVar1;
  fVar5 = 0.0;
  fVar8 = fVar5;
  if (0.0 - fVar1 < 0.0) {
    fVar8 = fVar2 * fVar6;
  }
  fVar7 = fVar5;
  if (0.0 - fVar1 < 0.0) {
    fVar7 = fVar3 * fVar6;
  }
  if (0.0 - fVar1 < 0.0) {
    fVar5 = fVar4 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar8 = fVar2 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar7 = fVar3 * fVar6;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar6;
  }
  *(float *)(iVar9 + 0x44) = fVar8;
  *(float *)(iVar9 + 0x40) = fVar7;
  *(float *)(iVar9 + 0x48) = fVar5;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar7;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar9 + 0x44);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar9 + 0x48);
  dVar10 = (double)FastWrapRot(*(float *)(iVar9 + 0x204),*(float *)(iVar9 + 0x20c));
  *(float *)(iVar9 + 0x204) = (float)dVar10;
  dVar12 = (double)(float)(3.141592502593994 - dVar10);
  if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
    dVar12 = dVar10;
  }
  dVar11 = (double)(float)(-3.141592502593994 - dVar10);
  if ((double)(float)(-3.141592502593994 - dVar10) - dVar12 < 0.0) {
    dVar11 = dVar12;
  }
  dVar10 = (double)(float)(dVar11 * dVar11);
  dVar13 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar11));
  dVar12 = (double)(float)(dVar10 * dVar13);
  fVar2 = *(float *)(iVar9 + 0x208) *
          ((float)(dVar10 * dVar12) * 2.601887e-06 +
          (float)(dVar12 * -0.0001980741071747616 +
                 (double)(float)(dVar13 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar10 * dVar11) *
                                                -0.16666656732559204 + dVar11)))) +
          *(float *)(iVar9 + 0x1c8);
  if (*(short *)(iVar9 + 0x216) != 0) {
    fVar2 = fVar2 + *(float *)(iVar9 + 0x200);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x18);
  fVar3 = (float)((double)g_FrameTime * dVar14);
  if ((fVar2 <= fVar3) &&
     (fVar4 = (float)((double)g_FrameTime * -3.0), fVar3 = fVar2, fVar2 < fVar4)) {
    fVar3 = fVar4;
  }
  *(float *)(iVar9 + 0x48) = fVar3;
  iVar9 = STUB_00055ac0_RET_0(local_30,400,0,param_1,0);
  if (iVar9 != 0) {
    fVar3 = g_CollOutput.push.z - *(float *)(param_1 + 0x18);
    fVar2 = (float)((double)g_FrameTime * dVar14);
    fVar4 = g_CollOutput.push.y - *(float *)(param_1 + 0x14);
    if ((fVar3 <= fVar2) &&
       (fVar1 = (float)((double)g_FrameTime * -3.0), fVar2 = fVar3, fVar3 < fVar1)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + (g_CollOutput.push.x - *(float *)(param_1 + 0x10));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar4;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar2;
  }
  return;
}


// 0x03170e8 (0x1d0 bytes)
void M252_003170e8(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar5 = MB_damage(param_1,0x330000,0);
  iVar6 = MB_HandleDamage(param_1,uVar5,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != 'c')) {
    fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
    *(float *)((int)pvVar1 + 0x20) = fVar3;
    if (((double)fVar3 <= dVar7) || ((-1 < iVar6 && (iVar6 < 0xc)))) {
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      param_1->state = 'c';
    }
  }
  param_1->damage = -1;
  if (param_1->state != '\x04' && param_1->state != '\0') {
    dVar7 = 14.0;
    pSVar2 = Splines[*(int *)((int)pvVar1 + 0x21c)];
    iVar6 = MB_getTargetInArea
                      (0x402c000000000000,param_1,ZEXT48(pvVar1) + 0x170,pSVar2,0,0,pSVar2->points,
                       pSVar2->cnt);
    if ((iVar6 != 2) &&
       ((fVar3 = *(float *)((int)pvVar1 + 0x1c4) - *(float *)((int)pvVar1 + 0x174),
        fVar4 = *(float *)((int)pvVar1 + 0x1c0) - *(float *)((int)pvVar1 + 0x170),
        dVar7 < (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
        (3.0 < ABS(*(float *)((int)pvVar1 + 0x1c8) - *(float *)((int)pvVar1 + 0x178)))))) {
      *(undefined4 *)((int)pvVar1 + 0x1b4) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0x1b0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x1b0) = g_heroMobyPtr;
  }
  return;
}


// 0x0317338 (0x1804 bytes)
// inlined: FastAtan2 @0x317844, FastAtan2 @0x317b8c, FastAtan2 @0x317f8c, FastAtan2 @0x318304, FastAtan2 @0x318804
/* Moby 252 */

void UpdateMoby_252(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *victim;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 uVar23;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar21;
  undefined8 uVar20;
  uint uVar22;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 0x210;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar15;
  puVar9[0x44] = in_LR;
  puVar9[0x3d] = in_f27;
  puVar9[0x3e] = in_f28;
  puVar9[0x3f] = in_f29;
  puVar9[0x40] = in_f30;
  puVar9[0x41] = in_f31;
  puVar9[0x3c] = unaff_r31;
  puVar9[0x3b] = unaff_r30;
  pvVar8 = moby->pVar;
  puVar9[0x3a] = unaff_r29;
  DoManipulator(0x400cccccc0000000,moby,2,(Manipulator *)((int)pvVar8 + 0x230));
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1) < 28.0)) {
    MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x16';
  }
  M252_003170e8(lVar16);
  dVar36 = (double)*(float *)((int)pvVar8 + 0x170);
  *(undefined4 *)((int)pvVar8 + 0x218) = *(undefined4 *)((int)pvVar8 + 0x1b0);
  bVar3 = moby->state;
  dVar35 = (double)*(float *)((int)pvVar8 + 0x174);
  dVar34 = (double)*(float *)((int)pvVar8 + 0x178);
  dVar33 = (double)*(float *)((int)pvVar8 + 0x17c);
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (*(int *)((int)pvVar8 + 0x21c) == -1) {
          DeleteMoby(moby);
          return;
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        dVar33 = (double)MB_randRot();
        (moby->rotation).z = (float)dVar33;
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        dVar33 = (double)MB_randRot();
        *(float *)((int)pvVar8 + 0x204) = (float)dVar33;
        uVar20 = 0x3fe0000000000000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar8 + 0x48) = 0;
        *(undefined4 *)((int)pvVar8 + 0x44) = 0;
        *(undefined4 *)((int)pvVar8 + 0x40) = 0;
        *(float *)((int)pvVar8 + 0x20c) = g_FrameTime * 2.0943952;
        uVar23 = FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar8 + 0x58) = uVar23;
        uVar23 = FastDoubleToInt(0x4023333340000000);
        *(undefined1 *)((int)pvVar8 + 0x5a) = uVar23;
        *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007ffc10;
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,0);
        }
        fVar4 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar8 + 0x1c0) = fVar4;
        *(f32 *)((int)pvVar8 + 0x1c4) = (moby->pos).y;
        *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
        *(f32 *)((int)pvVar8 + 0x1cc) = (moby->pos).w;
        dVar33 = (double)GetGroundZ(uVar20,lVar16 + 0x10,0);
        dVar34 = (double)(moby->pos).z;
        if (dVar33 <= (double)(float)(dVar34 - 10.0)) {
          *(undefined2 *)((int)pvVar8 + 0x216) = 0;
        }
        else {
          dVar34 = (double)GetGroundZ(uVar20,lVar16 + 0x10,0);
          *(undefined2 *)((int)pvVar8 + 0x216) = 1;
        }
        *(float *)((int)pvVar8 + 0x1c8) = (float)dVar34;
        *(undefined4 *)((int)pvVar8 + 0x1f0) = *(undefined4 *)((int)pvVar8 + 0x1c0);
        *(undefined4 *)((int)pvVar8 + 500) = *(undefined4 *)((int)pvVar8 + 0x1c4);
        *(float *)((int)pvVar8 + 0x1f8) = (float)dVar34;
        *(undefined4 *)((int)pvVar8 + 0x1fc) = *(undefined4 *)((int)pvVar8 + 0x1cc);
        *(undefined1 *)((int)pvVar8 + 0x29) = 0;
      }
      else if (*(int *)((int)pvVar8 + 0x1b4) == 2) {
        if ((moby->field43_0x70 & 2U) != 0) {
          dVar34 = (double)MB_randRot();
          dVar35 = (double)MB_randRangeFloat(0.0,3.0);
          fVar1 = (float)(dVar34 + 1.570796251296997);
          dVar33 = (double)(float)(3.141592502593994 - dVar34);
          if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
            dVar33 = dVar34;
          }
          fVar2 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar2 = fVar1;
          }
          dVar36 = (double)(float)(-3.141592502593994 - dVar34);
          if ((double)(float)(-3.141592502593994 - dVar34) - dVar33 < 0.0) {
            dVar36 = dVar33;
          }
          fVar7 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
            fVar7 = fVar2;
          }
          dVar34 = (double)(float)(dVar36 * dVar36);
          fVar5 = fVar7 * fVar7;
          dVar30 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar36));
          fVar1 = fVar5 * fVar5 * fVar7;
          dVar33 = (double)(float)(dVar34 * dVar30);
          *(undefined4 *)((int)pvVar8 + 0x1f8) = *(undefined4 *)((int)pvVar8 + 0x1c8);
          *(undefined4 *)((int)pvVar8 + 0x1fc) = *(undefined4 *)((int)pvVar8 + 0x1cc);
          fVar2 = fVar5 * fVar1;
          *(float *)((int)pvVar8 + 500) =
               (float)((double)((float)(dVar34 * dVar33) * 2.601887e-06 +
                               (float)(dVar33 * -0.0001980741071747616 +
                                      (double)(float)(dVar30 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar34 * dVar36
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar36))
                                      )) * dVar35 + (double)*(float *)((int)pvVar8 + 0x1c4));
          *(float *)((int)pvVar8 + 0x1f0) =
               (float)((double)(fVar5 * fVar2 * 2.601887e-06 +
                               fVar2 * -0.0001980741 +
                               fVar1 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * dVar35
                      + (double)*(float *)((int)pvVar8 + 0x1c0));
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar16,2,0,6);
          }
          moby->state = '\a';
        }
      }
      else {
        *(undefined4 *)((int)pvVar8 + 0x200) = 0;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3dcccccd;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar16,2,0,6);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar3 < 3) {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      pfVar25 = (float *)&g_atanQuadrantTable;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar9 + 0x114) = fVar1;
      *(float *)(puVar9 + 0x23) = fVar2;
      *(float *)((int)puVar9 + 0x11c) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x11c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x23) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0x114));
      if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x23));
      if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0x84;
        lVar26 = uVar15 - 0x74;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x33) = fVar1;
        *(float *)(puVar9 + 0x32) = fVar1;
        *(float *)((int)puVar9 + 0x194) = fVar1;
        *(float *)((int)puVar9 + 0x18c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x32) = *(float *)(puVar9 + 0x32) * fVar5;
        *(float *)((int)puVar9 + 0x194) = *(float *)((int)puVar9 + 0x194) * fVar1;
        *(float *)(puVar9 + 0x33) = *(float *)(puVar9 + 0x33) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x18c) = *(float *)((int)lVar18 + 0x17c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x84;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x18c) = *(float *)((int)lVar18 + 0x18c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x18c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,pfVar25,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)FastSubRots((moby->rotation).z,(float)dVar33);
      iVar21 = *(int *)((int)pvVar8 + 0x218);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = g_FrameTimeSq * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)(iVar21 + 0x14);
      fVar2 = (moby->pos).x - *(float *)(iVar21 + 0x10);
      if ((3.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1)) ||
         (2.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z))) {
        fVar1 = (float)(dVar35 - (double)*(float *)((int)pvVar8 + 0x1c4));
        fVar2 = (float)(dVar36 - (double)*(float *)((int)pvVar8 + 0x1c0));
        if ((15.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) ||
           (4.0 < ABS((float)((double)*(float *)((int)pvVar8 + 0x1c8) - dVar34)))) {
          *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
          *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar16,2,0,6);
          }
          moby->state = '\x03';
        }
      }
      else {
        iVar21 = PlayMobySound(0,0,moby);
        *(short *)((int)pvVar8 + 0x214) = (short)iVar21;
        moby->state = '\x06';
      }
    }
    else if (bVar3 < 4) {
      fVar1 = *(float *)((int)pvVar8 + 0x1c0) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar8 + 0x1c4) - (moby->pos).y;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x21) = fVar1;
      *(float *)((int)puVar9 + 0x10c) = fVar2;
      *(float *)(puVar9 + 0x22) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x21));
      if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x10c));
      if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xa4;
        lVar26 = uVar15 - 0x94;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x2f) = fVar1;
        *(float *)(puVar9 + 0x2e) = fVar1;
        *(float *)((int)puVar9 + 0x174) = fVar1;
        *(float *)((int)puVar9 + 0x16c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5;
        *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar1;
        *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x16c) = *(float *)((int)lVar18 + 0x15c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xa4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x16c) = *(float *)((int)lVar18 + 0x16c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x16c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
      *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,0x3f000000,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)FastSubRots((moby->rotation).z,(float)dVar33);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = g_FrameTimeSq * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1c4);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1c0);
      if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
         (3.9 <= ABS(*(float *)((int)pvVar8 + 0x1c8) - (moby->pos).z))) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,3);
        }
        moby->state = '\x01';
      }
    }
    else {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar9 + 0xfc) = fVar1;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar5 - fVar7;
      dVar30 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0xfc));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xc4;
        lVar26 = uVar15 - 0xb4;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x2b) = fVar1;
        *(float *)(puVar9 + 0x2a) = fVar1;
        *(float *)((int)puVar9 + 0x154) = fVar1;
        *(float *)((int)puVar9 + 0x14c) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar5;
        *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar1;
        *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x13c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xc4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x14c) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar21 + 0x14c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar30,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,
                 &DAT_003172b8,(int)pvVar8 + 0x210);
      dVar30 = (double)BlendAnimFrame(moby);
      if (((moby->updateId == moby->animationId) && (9.0 <= dVar30)) && (dVar30 <= 14.0)) {
        dVar32 = (double)((float)(dVar30 - 9.0) * 0.2);
        *(float *)((int)pvVar8 + 0x1dc) = (float)(dVar32 * 0.3333333432674408);
        *(float *)((int)pvVar8 + 0x1ec) = (float)(dVar32 * 2.0) * 0.33333334;
        dVar28 = (double)MB_randRot();
        fVar1 = (float)(dVar28 + 1.570796251296997);
        dVar30 = (double)(float)(3.141592502593994 - dVar28);
        if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
          dVar30 = dVar28;
        }
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        dVar29 = (double)(float)(-3.141592502593994 - dVar28);
        if ((double)(float)(-3.141592502593994 - dVar28) - dVar30 < 0.0) {
          dVar29 = dVar30;
        }
        dVar30 = (double)(float)(dVar29 * dVar29);
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = fVar7 * fVar7;
        dVar28 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
        dVar31 = (double)(float)(dVar30 * dVar28);
        fVar5 = fVar11 * fVar11 * fVar7;
        fVar2 = fVar11 * fVar5;
        fVar1 = (float)((double)(((float)(dVar30 * dVar31) * 2.601887e-06 +
                                 (float)(dVar31 * -0.0001980741071747616 +
                                        (double)(float)(dVar28 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar30 * 
                                                  dVar29) * -0.16666656732559204 + dVar29)))) * 0.25
                                ) * dVar32);
        *(float *)((int)pvVar8 + 0x1e4) = fVar1;
        fVar2 = (float)((double)((fVar11 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar11 * fVar7 * -0.16666657 + fVar7) * 0.25
                                ) * dVar32);
        *(float *)((int)pvVar8 + 0x1d4) = fVar1;
        *(float *)((int)pvVar8 + 0x1e8) = fVar2;
        *(float *)((int)pvVar8 + 0x1d8) = fVar2;
        RegisterMobyDraw(&PTR_M253_00318b50_0070bcc8,moby);
      }
      iVar21 = MB_MayaFrameTrigger(14.0,moby);
      if (iVar21 != 0) {
        fVar1 = *(float *)(*(int *)((int)pvVar8 + 0x1b0) + 0x14) - (moby->pos).y;
        fVar2 = *(float *)(*(int *)((int)pvVar8 + 0x1b0) + 0x10) - (moby->pos).x;
        if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 3.0) &&
           (ABS(*(float *)(*(int *)((int)pvVar8 + 0x218) + 0x18) - (moby->pos).z) < 1.0)) {
          fVar1 = (moby->rotation).z;
          fVar2 = fVar1 + 1.5707963;
          fVar7 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar7 = fVar1;
          }
          fVar5 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar5 = fVar2;
          }
          fVar11 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
            fVar11 = fVar7;
          }
          fVar1 = fVar11 * fVar11;
          fVar7 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
            fVar7 = fVar5;
          }
          *(undefined4 *)(puVar9 + 0x19) = 0;
          *(float *)(puVar9 + 0x1a) = (float)dVar36;
          *(float *)((int)puVar9 + 0xd4) = (float)dVar35;
          *(float *)((int)puVar9 + 0xdc) = (float)dVar33;
          victim = *(MobyInstance **)((int)pvVar8 + 0x218);
          fVar2 = fVar7 * fVar7;
          fVar13 = fVar1 * fVar1 * fVar11;
          fVar14 = fVar1 * fVar13;
          fVar5 = fVar2 * fVar2 * fVar7;
          fVar12 = fVar2 * fVar5;
          *(float *)((int)puVar9 + 0xc4) =
               (fVar1 * fVar14 * 2.601887e-06 +
               fVar14 * -0.0001980741 +
               fVar13 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11) * 0.2;
          *(float *)(puVar9 + 0x18) =
               (fVar2 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7)
               * 0.2;
          *(float *)(puVar9 + 0x1b) = (float)(dVar34 + 0.75);
          CollDamageMobyDirect
                    (1.0,victim,moby,1,0x3172b8,(float *)(puVar9 + 0x1a),(float *)(puVar9 + 0x18));
        }
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar16,2,0,3);
        }
        moby->state = '\x03';
      }
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 < 6) {
      iVar21 = FUN_0048c188(lVar16,(int)pvVar8 + 0x110);
      if (iVar21 != 0) {
        *(undefined4 *)((int)pvVar8 + 0x200) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0x208) = 0x3f000000;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar16,2,0,3);
        }
        *(undefined2 *)((int)pvVar8 + 200) = 0;
      }
    }
    else if (bVar3 < 7) {
      fVar1 = (float)(dVar36 - (double)(moby->pos).x);
      fVar2 = (float)(dVar35 - (double)(moby->pos).y);
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x1e) = fVar1;
      *(float *)((int)puVar9 + 0xf4) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0xf4));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 0xe4;
        lVar26 = uVar15 - 0xd4;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x27) = fVar1;
        *(float *)(puVar9 + 0x26) = fVar1;
        *(float *)((int)puVar9 + 0x134) = fVar1;
        *(float *)((int)puVar9 + 300) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar5;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar1;
        *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 300) = *(float *)((int)lVar18 + 0x11c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0xe4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 300) = *(float *)((int)lVar18 + 300) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 300)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,
                 &DAT_003172b8,(int)pvVar8 + 0x210);
      iVar21 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar8 + 0x214));
      if (iVar21 == 0) {
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar16,3,0,3);
        }
        moby->state = '\x04';
      }
    }
    else {
      fVar1 = *(float *)((int)pvVar8 + 0x1f0) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar8 + 500) - (moby->pos).y;
      pfVar25 = (float *)&g_atanQuadrantTable;
      fVar5 = ABS(fVar1);
      fVar7 = ABS(fVar2);
      *(float *)(puVar9 + 0x24) = fVar1;
      *(float *)((int)puVar9 + 0x124) = fVar2;
      *(float *)(puVar9 + 0x25) = fVar5 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x24) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x25) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x124) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x24));
      if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
        fVar1 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x124));
      if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar1) {
        lVar18 = uVar15 - 0x200;
        lVar24 = uVar15 - 100;
        lVar26 = uVar15 - 0x54;
        lVar27 = 2;
        fVar1 = (fVar11 - fVar1) / (fVar11 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar9 + 0x37) = fVar1;
        *(float *)(puVar9 + 0x36) = fVar1;
        *(float *)((int)puVar9 + 0x1b4) = fVar1;
        *(float *)((int)puVar9 + 0x1ac) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x36) = *(float *)(puVar9 + 0x36) * fVar5;
        *(float *)((int)puVar9 + 0x1b4) = *(float *)((int)puVar9 + 0x1b4) * fVar1;
        *(float *)(puVar9 + 0x37) = *(float *)(puVar9 + 0x37) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x1ac) = *(float *)((int)lVar18 + 0x19c) * fVar1 * fVar1;
          iVar21 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 100;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar1 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x1ac) = *(float *)((int)lVar18 + 0x1ac) * fVar1;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar21 + 0x1ac)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fa99999a0000000,lVar16,pfVar25,
                 (int)pvVar8 + 0x210);
      dVar33 = (double)FastSubRots((moby->rotation).z,(float)dVar33);
      if (dVar33 < 0.7853981852531433) {
        fVar1 = (moby->rotation).z + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar11 = g_FrameTimeSq * 12.0;
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x40) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x40);
        fVar1 = (moby->rotation).z;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar7 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar7 = fVar2;
        }
        fVar1 = fVar7 * fVar7;
        fVar2 = fVar1 * fVar1 * fVar7;
        fVar5 = fVar1 * fVar2;
        *(float *)((int)pvVar8 + 0x44) =
             fVar11 * (fVar1 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) +
             *(float *)((int)pvVar8 + 0x44);
      }
      fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 500);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1f0);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,3);
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar3 == 99) {
    fVar4 = (moby->pos).y;
    *(f32 *)(puVar9 + 0x1c) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar9 + 0xe4) = fVar4;
    *(f32 *)((int)puVar9 + 0xec) = fVar6;
    uVar20 = 0x3ff0000000000000;
    *(float *)(puVar9 + 0x1d) = (moby->pos).z + 1.0;
    PlayMobySound(1,0,moby);
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 0;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,uVar20,0x4022000000000000,uVar20,0,lVar16,(int)pvVar8 + 0x40,
               uVar15 - 0x130,0,1,5,2,4);
    DeleteMoby(moby);
    return;
  }
  M252_00316de0(lVar16);
  bVar3 = moby->state;
  if ((bVar3 != 5) && (bVar3 < 0x80)) {
    uVar20 = 0x7f20ff20;
    if ((bVar3 == 4) || (bVar3 == 6)) {
      uVar20 = 0x7f2828a0;
    }
    uVar22 = FastLerpColor(0x3fb99999a0000000,moby->glowRgba,uVar20);
    moby->glowRgba = uVar22;
    GetBonePosition(lVar16,3,(int)pvVar8 + 0x220);
    RegisterPostDraw(&PTR_M253_003196c0_0070bcf8,moby);
  }
  return;
}



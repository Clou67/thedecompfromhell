// game/update/moby1157.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e29b4-0x1e348c
#include "game/update/moby1157.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x01e29b4 (0x14 bytes)
void M1157_001e29b4(void)

{
  DAT_00764e84 = 0x10000;
  return;
}


// 0x01e29f8 (0x488 bytes)
void M1157_001e29f8(int param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
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
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float local_e0;
  
  fVar3 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 0xd0);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar10 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  dVar36 = 0.0;
  dVar31 = -90.0;
  fVar11 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4);
  puVar14 = *(uint **)(param_1 + 0x78);
  fVar12 = DAT_00764ea8 / fVar10;
  dVar30 = -(double)((float)puVar14[0x1b] * 180.0 - 90.0);
  fVar13 = DAT_00764eac / fVar11;
  local_e0 = -(((float)puVar14[0x1b] - 0.5) * 180.0 - 90.0);
  dVar26 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar26 = (double)(fVar3 * fVar12);
  }
  dVar18 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar18 = (double)(fVar5 * fVar12);
  }
  dVar25 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar25 = (double)(fVar7 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar18 = (double)(fVar5 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar12);
  }
  dVar21 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar21 = (double)(fVar8 * fVar13);
  }
  dVar23 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar4 * fVar13);
  }
  dVar24 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar24 = (double)(fVar6 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar21 = (double)(fVar8 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar4 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar24 = (double)(fVar6 * fVar13);
  }
  if (local_e0 <= 90.0) {
    if (local_e0 < 0.0) {
      local_e0 = 0.0;
    }
  }
  else {
    local_e0 = 90.0;
  }
  uVar17 = 0;
  do {
    iVar16 = 0;
    dVar27 = 2.5;
    dVar28 = 0.2617993950843811;
    dVar32 = 1.5707963705062866;
    dVar33 = 0.01745329238474369;
    dVar34 = -0.7853981852531433;
    dVar29 = 3.1415927410125732;
    dVar35 = 0.7853981852531433;
    puVar15 = puVar14;
    do {
      dVar20 = (double)local_e0;
      if ((1 >= (int)uVar17) && (dVar20 = dVar30, dVar30 - dVar31 < 0.0)) {
        dVar20 = dVar31;
      }
      if (1 < (int)uVar17) {
        uVar9 = *puVar15;
        *(float *)(uVar9 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) - dVar18);
        *(float *)(uVar9 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) - dVar26);
        *(float *)(uVar9 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) - dVar25);
        *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        uVar9 = *puVar15;
        *(float *)(uVar9 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar18);
        *(float *)(uVar9 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar26);
        *(float *)(uVar9 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) + dVar25);
        *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      }
      dVar37 = (double)(float)((double)(float)((double)(longlong)iVar16 - dVar27) * dVar28);
      if ((uVar17 & 1) == 0) {
        dVar19 = (double)FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar29);
        *(float *)(*puVar15 + 0x48) = (float)dVar19;
        dVar20 = (double)FastDiffRots(dVar37,(double)(float)(dVar20 * dVar33));
        if (dVar35 < dVar20) {
          dVar20 = (double)(float)(dVar20 - dVar32);
        }
      }
      else {
        dVar19 = (double)FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar36);
        *(float *)(*puVar15 + 0x48) = (float)dVar19;
        dVar20 = (double)FastWrapRot((float)dVar37,(float)(dVar20 * dVar33));
        if (dVar20 < dVar34) {
          dVar20 = (double)(float)(dVar20 + dVar32);
        }
      }
      dVar37 = dVar35;
      if ((dVar20 <= dVar35) && (dVar37 = dVar20, dVar20 < dVar34)) {
        dVar37 = dVar34;
      }
      dVar20 = (double)FastWrapRot(*(float *)(*puVar15 + 0x48),(float)dVar37);
      *(float *)(*puVar15 + 0x48) = (float)dVar20;
      FastEulerToMtx((ulonglong)*puVar15 + 0xc0,(ulonglong)*puVar15 + 0x40);
      uVar9 = *puVar15;
      fVar4 = *(float *)(uVar9 + 0xd4);
      fVar5 = *(float *)(uVar9 + 0xd0);
      fVar6 = *(float *)(uVar9 + 0xd8);
      dVar37 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar3 = (float)(-(double)DAT_00764eb0 / dVar37);
      dVar20 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar20 = (double)(fVar6 * fVar3);
      }
      dVar19 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar19 = (double)(fVar4 * fVar3);
      }
      dVar22 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar22 = (double)(fVar5 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar20 = (double)(fVar6 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar19 = (double)(fVar4 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar22 = (double)(fVar5 * fVar3);
      }
      dVar1 = dVar20 - dVar21;
      dVar2 = dVar19 - dVar23;
      dVar37 = dVar22 - dVar24;
      if ((uVar17 & 1) != 0) {
        dVar37 = dVar22 + dVar24;
        dVar2 = dVar19 + dVar23;
        dVar1 = dVar20 + dVar21;
      }
      *(float *)(uVar9 + 0x10) = *(float *)(uVar9 + 0x10) + (float)dVar37;
      *(float *)(uVar9 + 0x14) = *(float *)(uVar9 + 0x14) + (float)dVar2;
      *(float *)(uVar9 + 0x18) = *(float *)(uVar9 + 0x18) + (float)dVar1;
      UpdateMobyTransform((MobyInstance *)*puVar15);
      iVar16 = iVar16 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar16 < 6);
    uVar17 = uVar17 + 1;
    puVar14 = puVar14 + 6;
  } while ((int)uVar17 < 4);
  return;
}


// 0x01e2e88 (0x604 bytes)
/* Moby 1157 */

void UpdateMoby_1157(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  double dVar11;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  uVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (uVar1 != '\x05') {
    if (uVar1 == '\x04') {
      dVar11 = 1.0;
      iVar7 = piVar3[0x1e];
      Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)(piVar3 + 0x1e));
      uVar5 = piVar3[0x1e];
      SceneScreenFade = (float)(dVar11 - ABS((double)(float)piVar3[0x1e]));
      if ((iVar7 < 0) && (-1 < (int)uVar5)) {
        Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,1);
        Camera_DeactivateMobyDrivenCam(3);
      }
      else if (0x3f7fffff < (int)(FLOAT_ORDER(uVar5)))
      {
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      piVar3[0x1d] = piVar3[0x1b];
      OrganicDelt
                (1.0,DAT_00764eb8 * DAT_0071f418,DAT_00764ebc * DAT_0071f418,
                 DAT_00764ec0 * g_FrameTime,(float *)(piVar3 + 0x1b),0x720000,
                 (float *)(piVar3 + 0x1c));
      iVar7 = piVar3[0x19];
      iVar8 = piVar3[0x1a];
      fVar2 = (float)piVar3[0x1b];
      local_70 = Cuboids[iVar7].pos.x;
      local_64 = Cuboids[iVar8].pos.w;
      local_70 = fVar2 * (Cuboids[iVar8].pos.x - local_70) + local_70;
      local_6c = fVar2 * (Cuboids[iVar8].pos.y - Cuboids[iVar7].pos.y) + Cuboids[iVar7].pos.y;
      local_68 = fVar2 * (Cuboids[iVar8].pos.z - Cuboids[iVar7].pos.z) + Cuboids[iVar7].pos.z;
      local_54 = 0;
      local_58 = 0.0;
      local_5c = 0.0;
      local_60 = 0.0;
      dVar11 = (double)FastDiffRots
                                 ((double)Cuboids[iVar8].rot.x,(double)Cuboids[iVar7].rot.x);
      local_60 = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)FastWrapRot(Cuboids[piVar3[0x19]].rot.x,local_60);
      local_60 = (float)dVar11;
      dVar11 = (double)FastDiffRots
                                 ((double)Cuboids[piVar3[0x1a]].rot.y,
                                  (double)Cuboids[piVar3[0x19]].rot.y);
      local_5c = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)FastWrapRot(Cuboids[piVar3[0x19]].rot.y,local_5c);
      local_5c = (float)dVar11;
      dVar11 = (double)FastDiffRots
                                 ((double)Cuboids[piVar3[0x1a]].rot.z,
                                  (double)Cuboids[piVar3[0x19]].rot.z);
      local_58 = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)FastWrapRot(Cuboids[piVar3[0x19]].rot.z,local_58);
      local_58 = (float)dVar11;
      Camera_SetMobyDrivenTargetPos(&local_70);
      Camera_SetMobyDrivenTargetRot(&local_60);
      uVar5 = piVar3[0x1b] >> 0x1f;
      if (0x3f7fffff < (int)((uVar5 >> 1 ^ piVar3[0x1b]) - uVar5)) {
        moby->state = '\x04';
        piVar3[0x1e] = -0x40800000;
      }
    }
    else if (uVar1 == '\x02') {
      dVar11 = 1.0;
      iVar7 = piVar3[0x1e];
      Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)(piVar3 + 0x1e));
      uVar5 = piVar3[0x1e];
      SceneScreenFade = (float)(dVar11 - ABS((double)(float)piVar3[0x1e]));
      if ((iVar7 < 0) && (-1 < (int)uVar5)) {
        Hero_Warp(&g_MobyInstance[piVar3[0x18]].pos.x,&g_MobyInstance[piVar3[0x18]].rotation.x,
                        0x72,1);
        SetCameraPosition(&Cuboids[piVar3[0x19]].pos,&Cuboids[piVar3[0x19]].rot,1,0,0);
      }
      else if (0x3f7fffff < (int)(FLOAT_ORDER(uVar5)))
      {
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if (g_MobyInstance[piVar3[0x18]].setByGroup == '\x01') {
        moby->state = '\x02';
        piVar3[0x1e] = -0x40800000;
        DAT_00ef27c4 = 0;
        PlayMobySound(0,0,moby);
      }
      else if (g_MobyInstance[piVar3[0x18]].setByGroup == '\x02') {
        piVar3[0x1b] = 0x3f800000;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\0') {
      iVar7 = 0;
      piVar10 = piVar3;
      do {
        iVar8 = 0;
        piVar9 = piVar10;
        do {
          pMVar6 = CreateMoby(0x4b7);
          *piVar9 = (int)pMVar6;
          iVar8 = iVar8 + 1;
          pMVar6->drawDistance = 0x40;
          *(undefined1 *)(*piVar9 + 0x31) = 1;
          *(undefined8 *)(*piVar9 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
          *(MobyModeBit *)(*piVar9 + 0x34) = moby->modeBits;
          iVar4 = *piVar9;
          *(f32 *)(iVar4 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar4 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar4 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar4 + 0x1c) = (moby->pos).w;
          iVar4 = *piVar9;
          piVar9 = piVar9 + 1;
          *(f32 *)(iVar4 + 0x40) = (moby->rotation).x;
          *(f32 *)(iVar4 + 0x44) = (moby->rotation).y;
          *(f32 *)(iVar4 + 0x48) = (moby->rotation).z;
          *(f32 *)(iVar4 + 0x4c) = (moby->rotation).w;
        } while (iVar8 < 6);
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 6;
      } while (iVar7 < 4);
      piVar3[0x1b] = 0;
      moby->state = '\x01';
    }
  }
  M1157_001e29f8(moby);
  return;
}



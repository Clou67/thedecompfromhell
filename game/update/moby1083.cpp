// game/update/moby1083.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1b971c-0x1ba794
#include "game/update/moby1083.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1085.h"
#include "idol/fastfunc.h"

// 0x01b971c (0x4 bytes)
void M1083_001b971c(void)

{
  return;
}


// 0x01b9730 (0x2a4 bytes)
double M1083_001b9730
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 float *param_6,int param_7,float *param_8)

{
  float *unused2;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_70 [4];
  
  dVar5 = (double)*param_6;
  if (dVar5 <= param_4) {
    dVar1 = -param_4;
    if (dVar5 < dVar1) {
      *param_6 = (float)dVar1;
      dVar5 = dVar1;
    }
  }
  else {
    *param_6 = (float)param_4;
    dVar5 = param_4;
  }
  unused2 = param_8;
  dVar1 = (double)FastDiffRots(param_1,dVar5);
  dVar6 = 0.0;
  dVar5 = -param_4;
  if (0.0 - *param_8 < 0.0) {
    dVar5 = param_4;
  }
  dVar2 = (double)FastDiffRots(dVar5,(double)*param_6);
  dVar3 = (double)*param_8;
  dVar4 = ABS(dVar2);
  if ((double)((float)((double)(float)(dVar3 * dVar3) / param_2) * 0.5) <= dVar4) {
    local_70[0] = (float)(dVar3 + param_5);
    dVar5 = (double)local_70[0];
    if (((double)(float)(dVar5 * dVar1) < dVar6) || (dVar1 == dVar6)) {
      Delt((float)dVar6,(float)param_2,local_70);
      *param_8 = (float)((double)local_70[0] - param_5);
      dVar2 = dVar1;
    }
    else if ((double)((float)((double)(float)(dVar5 * dVar5) / param_2) * 0.5) <= ABS(dVar1)) {
      dVar5 = (double)(float)((double)SQRT((float)((double)(float)(param_2 * 2.0) * dVar1)) -
                             param_5);
      if (param_3 - dVar5 < 0.0) {
        dVar5 = param_3;
      }
      if (dVar6 <= dVar1) {
        DeltAng((float)dVar5,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar2 = dVar1;
      }
      else {
        DeltAng((float)-dVar5,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar2 = dVar1;
      }
    }
    else {
      Delt((float)dVar6,(float)param_2,local_70);
      *param_8 = (float)((double)local_70[0] - param_5);
      dVar2 = dVar1;
    }
    if (ABS(dVar2) <= ABS((double)*param_8)) {
      *param_6 = (float)param_1;
    }
    else {
      dVar5 = (double)FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar5;
      dVar2 = (double)*param_8;
    }
  }
  else {
    Delt((float)dVar6,(float)param_2,param_8);
    if (dVar4 <= ABS((double)*param_8)) {
      *param_6 = (float)dVar5;
    }
    else {
      dVar5 = (double)FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar5;
      dVar2 = (double)*param_8;
    }
  }
  return dVar2;
}


// 0x01b99d4 (0x14 bytes)
void M1083_001b99d4(void)

{
  DAT_007580c4 = 0x10000;
  return;
}


// 0x01b9a20 (0x30c bytes)
void M1083_001b9a20(int param_1,int param_2)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 4) = 0;
  pMVar5 = CreateMoby(ALIEN_SNAPPER_CAGE_DAMAGED);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
  pMVar5->light = (int)uVar6;
  pMVar5->drawDistance = 0x40;
  pMVar5->enabled = '\x01';
  fVar1 = *(f32 *)(param_1 + 0x10);
  pMVar5->modeBits = *(MobyModeBit *)(param_1 + 0x34);
  fVar2 = *(f32 *)(param_1 + 0x14);
  (pMVar5->pos).x = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x18);
  (pMVar5->pos).y = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x1c);
  (pMVar5->pos).z = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x40);
  (pMVar5->pos).w = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x44);
  (pMVar5->rotation).x = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x48);
  (pMVar5->rotation).y = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x4c);
  (pMVar5->rotation).z = fVar1;
  fVar3 = *(float *)(param_1 + 0x2c);
  (pMVar5->rotation).w = fVar2;
  pMVar5->scale = fVar3;
  UpdateMobyTransform(pMVar5);
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  if (param_2 != 0) {
    iVar7 = 0;
    dVar8 = 1.0;
    dVar9 = 6.0;
    fVar3 = 0.5;
    fVar4 = 4.5;
    do {
      dVar11 = (double)fVar4;
      dVar10 = (double)fVar3;
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      MB_randRot();
      fVar3 = (float)dVar10;
      fVar4 = (float)dVar11;
      MB_randRangeFloat
                ((float)((double)DAT_007580f8 + dVar10),(float)((double)DAT_007580f8 + dVar11));
      M1089_001bb4e0(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x32);
  }
  return;
}


// 0x01b9d68 (0xa2c bytes)
// inlined: FastAtan2 @0x1ba0f4
/* Moby 1083 */

void UpdateMoby_1083(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyClass *pMVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  Cuboid *pCVar30;
  ulonglong uVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  
  uVar31 = ZEXT48(&stack0x00000000);
  lVar34 = uVar31 - 400;
  puVar13 = (ulonglong *)lVar34;
  *puVar13 = uVar31;
  puVar13[0x34] = in_LR;
  puVar13[0x25] = in_f19;
  puVar13[0x26] = in_f20;
  puVar13[0x27] = in_f21;
  puVar13[0x28] = in_f22;
  puVar13[0x29] = in_f23;
  puVar13[0x2a] = in_f24;
  puVar13[0x2b] = in_f25;
  puVar13[0x2c] = in_f26;
  puVar13[0x2d] = in_f27;
  puVar13[0x2e] = in_f28;
  puVar13[0x2f] = in_f29;
  puVar13[0x30] = in_f30;
  puVar13[0x31] = in_f31;
  puVar13[0x24] = unaff_r31;
  pMVar9 = moby->pClass;
  puVar13[0x23] = unaff_r30;
  piVar10 = (int *)moby->pVar;
  uVar1 = moby->state;
  fVar2 = pMVar9->gScale * DAT_007580f4;
  puVar13[0x22] = unaff_r29;
  puVar13[0x21] = unaff_r28;
  puVar13[0x20] = unaff_r27;
  puVar13[0x1f] = unaff_r26;
  moby->scale = fVar2;
  pCVar30 = Cuboids;
  if (uVar1 == '\x04') {
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar4 * fVar4 + fVar2 * fVar2) < 16.0) {
      iVar32 = piVar10[3];
      Cuboids[iVar32].pos.x = g_heroPosition.x;
      pCVar30[iVar32].pos.y = g_heroPosition.y;
      pCVar30[iVar32].pos.z = g_heroPosition.z;
      pCVar30[iVar32].pos.w = g_heroPosition.w;
      pCVar30[piVar10[3]].pos.z = pCVar30[piVar10[3]].pos.z - 0.5;
      piVar10[3] = -1;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar10[9] < DAT_007580f0) {
      iVar32 = piVar10[9] + 1;
      piVar10[9] = iVar32;
      dVar40 = (double)FastIntToDouble(iVar32);
      puVar13[0x1c] = (longlong)DAT_007580f0;
      SceneScreenFade = 1.0 - (float)(dVar40 / (double)(longlong)puVar13[0x1c]);
    }
    pCVar30 = Cuboids;
    uVar11 = piVar10[6] >> 0x1f;
    iVar32 = (uVar11 >> 1 ^ piVar10[6]) - uVar11;
    if (iVar32 < 0x3f7fff58) {
      if ((0x3d4ccccc < iVar32) && (iVar32 = piVar10[3], -1 < iVar32)) {
        Cuboids[iVar32].pos.x = g_heroPosition.x;
        pCVar30[iVar32].pos.y = g_heroPosition.y;
        pCVar30[iVar32].pos.z = g_heroPosition.z;
        pCVar30[iVar32].pos.w = g_heroPosition.w;
        pCVar30[piVar10[3]].pos.z = pCVar30[piVar10[3]].pos.z - 0.5;
        piVar10[3] = -1;
      }
      if ((piVar10[1] == 1) &&
         (fVar2 = (moby->pos).y - g_MobyInstance[piVar10[8]].pos.y,
         fVar4 = (moby->pos).x - g_MobyInstance[piVar10[8]].pos.x,
         0.1 < SQRT(fVar4 * fVar4 + fVar2 * fVar2))) {
        PlayMobySound(0,0,moby);
        M1083_001b9a20(moby,1);
      }
      OrganicDelt
                (1.0,DAT_0071f418,DAT_0071f418,g_FrameTime * 1.5,(float *)(piVar10 + 6),
                 0x720000,(float *)(piVar10 + 7));
      pCVar30 = Cuboids;
      fVar23 = DAT_00969ce8;
      fVar22 = DAT_00969ce4;
      fVar21 = g_heroMtx;
      iVar32 = piVar10[5];
      fVar6 = DAT_00969ce4 * DAT_00969ce4;
      fVar5 = g_heroMtx * g_heroMtx;
      fVar2 = Cuboids[iVar32].pos.x;
      *(float *)(puVar13 + 0x12) = fVar2;
      fVar4 = pCVar30[iVar32].pos.y;
      *(float *)((int)puVar13 + 0x94) = fVar4;
      fVar3 = pCVar30[iVar32].pos.z;
      *(float *)(puVar13 + 0x13) = fVar3;
      *(float *)((int)puVar13 + 0x9c) = pCVar30[iVar32].pos.w;
      *(float *)(puVar13 + 0x14) = pCVar30[iVar32].rot.x;
      fVar8 = pCVar30[iVar32].rot.y;
      fVar16 = SQRT(fVar23 * fVar23 + fVar5 + fVar6);
      *(float *)((int)puVar13 + 0xa4) = fVar8;
      fVar5 = pCVar30[iVar32].rot.z;
      *(float *)(puVar13 + 0x15) = fVar5;
      *(float *)((int)puVar13 + 0xac) = pCVar30[iVar32].rot.w;
      fVar26 = g_heroPosition.z;
      fVar24 = g_heroPosition.x;
      fVar20 = DAT_007580fc * 0.017453292;
      *(float *)(puVar13 + 0x14) = fVar20;
      fVar29 = g_heroRotation.w;
      fVar28 = g_heroRotation.z;
      fVar27 = g_heroRotation.x;
      fVar25 = g_heroPosition.y;
      fVar6 = 0.0;
      fVar7 = (float)piVar10[6];
      *(float *)((int)puVar13 + 0x9c) = g_heroPosition.w;
      fVar17 = -2.0 / fVar16;
      fVar19 = fVar6;
      if (0.0 - fVar16 < 0.0) {
        fVar19 = fVar23 * fVar17;
      }
      fVar18 = fVar6;
      if (0.0 - fVar16 < 0.0) {
        fVar18 = fVar22 * fVar17;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar6 = fVar21 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar19 = fVar23 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar18 = fVar22 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar6 = fVar21 * fVar17;
      }
      *(float *)((int)puVar13 + 0x94) = fVar7 * ((fVar25 + fVar18) - fVar4) + fVar4;
      *(float *)(puVar13 + 0x12) = fVar7 * ((fVar24 + fVar6) - fVar2) + fVar2;
      *(float *)(puVar13 + 0x13) = fVar7 * ((fVar26 + fVar19 + 0.85) - fVar3) + fVar3;
      fVar2 = (float)piVar10[6];
      *(float *)((int)puVar13 + 0xac) = fVar29;
      *(float *)(puVar13 + 0x14) = fVar2 * (fVar27 - fVar20) + fVar20;
      *(float *)((int)puVar13 + 0xa4) = fVar2 * (fVar8 - fVar8) + fVar8;
      *(float *)(puVar13 + 0x15) = fVar2 * (fVar28 - fVar5) + fVar5;
      Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0x12));
      Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x14));
    }
    else {
      moby->state = '\x05';
      TransitionMovement(0,0);
      Camera_DeactivateMobyDrivenCam(2);
      LetterBoxOn = 0;
    }
  }
  else if (uVar1 == '\x02') {
    iVar32 = FastDecTimerS32(ZEXT48(piVar10) + 0x24);
    if (iVar32 != 0) {
      moby->state = '\x03';
      pCVar30 = Cuboids;
      LetterBoxOn = 1;
      LetterBoxPixels = 0x12;
      iVar32 = piVar10[5];
      *(float *)(puVar13 + 0xe) = Cuboids[iVar32].pos.x;
      *(float *)((int)puVar13 + 0x74) = pCVar30[iVar32].pos.y;
      *(float *)(puVar13 + 0xf) = pCVar30[iVar32].pos.z;
      *(float *)((int)puVar13 + 0x7c) = pCVar30[iVar32].pos.w;
      *(float *)(puVar13 + 0x10) = pCVar30[iVar32].rot.x;
      *(float *)((int)puVar13 + 0x84) = pCVar30[iVar32].rot.y;
      *(float *)(puVar13 + 0x11) = pCVar30[iVar32].rot.z;
      *(float *)((int)puVar13 + 0x8c) = pCVar30[iVar32].rot.w;
      puVar13[0x1c] = (longlong)(int)(animationSpeed * 300.5);
      SetCameraPosition
                (uVar31 - 0x120,uVar31 - 0x110,1,*(undefined4 *)((int)puVar13 + 0xe4),0);
      Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
      Camera_SetMobyDrivenTargetPos((float *)(uVar31 - 0x120));
      Camera_SetMobyDrivenTargetRot((float *)(uVar31 - 0x110));
      fVar2 = 0.0;
      iVar32 = piVar10[4];
      piVar10[6] = 0;
      pCVar30 = Cuboids;
      fVar4 = (moby->pos).x - Cuboids[iVar32].pos.x;
      fVar5 = (moby->pos).y - Cuboids[iVar32].pos.y;
      fVar3 = ABS(fVar4);
      fVar8 = ABS(fVar5);
      *(float *)(puVar13 + 0x16) = fVar4;
      *(float *)((int)puVar13 + 0xb4) = fVar5;
      *(float *)(puVar13 + 0x17) = fVar3 - fVar8;
      uVar37 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar4 = fVar8;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar33 = uVar31 - 0x180;
        lVar35 = uVar31 - 0xd4;
        lVar38 = uVar31 - 0xc4;
        lVar39 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x19) = fVar4;
        *(float *)(puVar13 + 0x18) = fVar4;
        *(float *)((int)puVar13 + 0xc4) = fVar4;
        *(float *)((int)puVar13 + 0xbc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar5;
        *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar4;
        *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar33 + 0xbc) = *(float *)((int)lVar33 + 0xac) * fVar4 * fVar4;
          iVar14 = (int)lVar35;
          lVar33 = lVar33 + 8;
          lVar35 = lVar35 + 8;
          *(float *)((int)lVar38 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
          lVar38 = lVar38 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar39 = 4;
        lVar38 = uVar31 - 0xd4;
        pfVar36 = (float *)&DAT_007358e0;
        lVar33 = lVar34;
        lVar35 = lVar38;
        do {
          fVar4 = *pfVar36;
          fVar5 = pfVar36[1];
          pfVar36 = pfVar36 + 2;
          *(float *)((int)lVar33 + 0xbc) = *(float *)((int)lVar33 + 0xbc) * fVar4;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar5;
          lVar35 = lVar35 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar33 = 2;
        do {
          iVar14 = (int)lVar34;
          iVar15 = (int)lVar38;
          lVar34 = lVar34 + 0x10;
          lVar38 = lVar38 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar14 + 0xbc) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
      pCVar30[iVar32].rot.z = fVar2;
      Hero_Warp(&pCVar30[piVar10[4]].pos.x,&pCVar30[piVar10[4]].rot.x,0x72,0);
    }
    if (piVar10[9] < DAT_007580f0) {
      dVar40 = (double)FastIntToDouble(piVar10[9]);
      puVar13[0x1c] = (longlong)DAT_007580f0;
      SceneScreenFade = 1.0 - (float)(dVar40 / (double)(longlong)puVar13[0x1c]);
    }
  }
  else if (uVar1 == '\x01') {
    if (((-1 < piVar10[2]) && (g_MobyInstance[piVar10[2]].setByGroup != '\0')) || (piVar10[8] == -1))
    {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if (32.0 <= SQRT(fVar4 * fVar4 + fVar2 * fVar2)) {
        M1083_001b9a20
                  (moby,(ulonglong)(LZCOUNT(piVar10[8] + 1) << 0x20) >> 0x25 ^ 1);
        moby->state = '\x04';
      }
      else {
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        moby->state = '\x02';
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(4,0x1b9d2c);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar12 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x24,
                            ZEXT48(piVar10));
        *(undefined4 *)((uint)(piVar10 + 9) & 0xfffffffc) = uVar12;
      }
    }
  }
  else if (uVar1 == '\0') {
    piVar10[1] = 1;
    moby->state = '\x01';
  }
  if (piVar10[1] == 0) {
    if (*piVar10 == 0) {
      RegisterFuncForMoby(&PTR_M1089_001ba9c0_00708a90,moby);
    }
    else {
      RegisterFuncForMoby(&PTR_M1089_001ba794_00708a88,moby);
    }
  }
  else if (*piVar10 == 0) {
    RegisterFuncForMoby(&PTR_M1089_001bafc0_00708aa0,moby);
  }
  else {
    RegisterFuncForMoby(&PTR_M1089_001babf8_00708a98,moby);
  }
  return;
}



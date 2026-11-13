// game/update/moby1032.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x190b38-0x1920dc
#include "game/update/moby1032.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1246.h"
#include "game/update/moby129.h"

// 0x0190b38 (0x14 bytes)
void M1032_00190b38(void)

{
  DAT_0073fdbc = 0x10000;
  return;
}


// 0x0190b58 (0x74 bytes)
bool M1032_00190b58(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  Delt(0.0,g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  SceneScreenFade = *(float *)(iVar1 + 0x104);
  return *(int *)(iVar1 + 0x104) < 1;
}


// 0x0190bd8 (0x90 bytes)
bool M1032_00190bd8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  Delt(1.0,g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  SceneScreenFade = *(float *)(iVar1 + 0x104);
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2);
}


// 0x0190c70 (0xb0 bytes)
void M1032_00190c70(int param_1)

{
  float fVar1;
  int iVar2;
  Spline *pSVar3;
  float fVar4;
  
  fVar4 = DAT_0073fde0;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(float *)(param_1 + 0x2c) = fVar1 * fVar4;
  *(undefined4 *)(iVar2 + 0xf8) = 0x437f0000;
  pSVar3 = Splines[*(int *)(iVar2 + 0xc0)];
  MB_getTargetInArea
            (0x406fe00000000000,param_1,iVar2 + 0x70,pSVar3,0,0,pSVar3->points,pSVar3->cnt);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    *(MobyInstance **)(iVar2 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0190d60 (0x137c bytes)
// inlined: FastAtan2 @0x190fc0, FastAtan2 @0x191ad8
/* Moby 1032 */

MobyInstance * UpdateMoby_1032(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyClass *pMVar10;
  void *pvVar11;
  int32_t iVar12;
  void *pvVar13;
  int iVar14;
  Spline *pSVar15;
  ulonglong *puVar16;
  float fVar17;
  MobyInstance *pMVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  MobyInstance *pMVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar26 = uVar20 - 0x1f0;
  puVar16 = (ulonglong *)lVar26;
  *puVar16 = uVar20;
  puVar16[0x40] = in_LR;
  puVar16[0x3c] = in_f30;
  puVar16[0x3d] = in_f31;
  puVar16[0x3b] = unaff_r31;
  puVar16[0x3a] = unaff_r30;
  pMVar10 = moby->pClass;
  puVar16[0x39] = unaff_r29;
  pvVar11 = moby->pVar;
  pSVar15 = Splines[*(int *)((int)pvVar11 + 0xc0)];
  moby->scale = pMVar10->gScale * DAT_0073fde0;
  dVar38 = 1.0;
  moby->unk58 = 1.0;
  *(undefined4 *)((int)pvVar11 + 0xf8) = 0x437f0000;
  iVar12 = pSVar15->cnt;
  puVar16[0x38] = unaff_r28;
  puVar16[0x37] = unaff_r27;
  MB_getTargetInArea
            (0x406fe00000000000,moby,(int)pvVar11 + 0x70,pSVar15,0,0,pSVar15->points,iVar12);
  pMVar18 = g_heroMobyPtr;
  pMVar21 = *(MobyInstance **)((int)pvVar11 + 0xb0);
  if (*(MobyInstance **)((int)pvVar11 + 0xb0) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar11 + 0xb0) = g_heroMobyPtr;
    pMVar21 = pMVar18;
  }
  uVar1 = moby->state;
  if (uVar1 == '\b') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\a') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)0x8;
      moby->state = '\b';
      if (moby->animationId != '\x06') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x06') {
    fVar3 = (pMVar21->pos).x - (moby->pos).x;
    fVar5 = (pMVar21->pos).y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)(puVar16 + 0x2a) = fVar3;
    *(float *)((int)puVar16 + 0x154) = fVar5;
    *(float *)(puVar16 + 0x2b) = fVar4 - fVar6;
    dVar37 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar16 + 0x2a));
    if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar16 + 0x154));
    if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    dVar31 = dVar37;
    if (0.0 < fVar3) {
      lVar25 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0x88;
      lVar29 = uVar20 - 0x78;
      lVar30 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar16 + 0x174) = fVar3;
      *(float *)((int)puVar16 + 0x16c) = fVar3;
      *(float *)(puVar16 + 0x2e) = fVar3;
      *(float *)(puVar16 + 0x2d) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar4;
      *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar3;
      *(float *)((int)puVar16 + 0x174) = *(float *)((int)puVar16 + 0x174) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x158) * fVar3 * fVar3;
        iVar22 = (int)lVar27;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar20 - 0x88;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar27 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x168) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar22 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0x168)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar5);
    }
    OrganicDeltAng
              ((float)dVar31,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar11 + 0xf0));
    iVar22 = MB_MayaFrameTrigger(16.0,moby);
    if (iVar22 == 0) {
      if ((moby->field43_0x70 & 2U) == 0) {
        if (DAT_00e5efec != 0.0) {
          DAT_00e5efec = DAT_00e5efec + -1.0;
          moby->state = '\x01';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,0);
          }
        }
      }
      else {
        bVar2 = moby->animationId;
        iVar22 = MB_randInt(2);
        iVar22 = iVar22 + (uint)bVar2;
        uVar23 = iVar22 + ((iVar22 + -6) / 3) * -3 + 1;
        if (moby->animationId != uVar23) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(moby,uVar23,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      bVar2 = moby->updateId;
      if (bVar2 < 8) {
        if (6 < bVar2) {
          GetBonePosition(moby,0,uVar20 - 0xd0);
          GetBonePosition(moby,1,uVar20 - 0xc0);
        }
      }
      else if (bVar2 < 9) {
        GetBonePosition(moby,2,uVar20 - 0xd0);
        GetBonePosition(moby,3,uVar20 - 0xc0);
      }
      else if (bVar2 < 10) {
        GetBonePosition(moby,4,uVar20 - 0xd0);
        GetBonePosition(moby,5,uVar20 - 0xc0);
      }
      *(undefined4 *)((int)puVar16 + 0x11c) = *(undefined4 *)((int)puVar16 + 0x13c);
      fVar17 = DAT_00969da8;
      fVar8 = DAT_00969da4;
      fVar7 = DAT_00969da0;
      fVar9 = DAT_0073fde4;
      fVar3 = (*(float *)(puVar16 + 0x26) - *(float *)(puVar16 + 0x24)) * 0.5 +
              *(float *)(puVar16 + 0x24);
      fVar6 = (*(float *)((int)puVar16 + 0x134) - *(float *)((int)puVar16 + 0x124)) * 0.5 +
              *(float *)((int)puVar16 + 0x124);
      fVar5 = (*(float *)(puVar16 + 0x27) - *(float *)(puVar16 + 0x25)) * 0.5 +
              *(float *)(puVar16 + 0x25);
      *(undefined4 *)((int)puVar16 + 0x14c) = DAT_00969dac;
      fVar4 = g_FrameTime;
      *(float *)(puVar16 + 0x22) = fVar3;
      *(float *)((int)puVar16 + 0x114) = fVar6;
      *(float *)(puVar16 + 0x23) = fVar5;
      *(float *)(puVar16 + 0x28) = fVar7 - fVar3;
      *(float *)((int)puVar16 + 0x144) = fVar8 - fVar6;
      *(float *)(puVar16 + 0x29) = fVar17 - fVar5;
      ClampVec3Magnitude((double)(fVar9 * fVar4),(Vec4 *)(uVar20 - 0xb0));
      FUN_001b7028(moby,uVar20 - 0xe0,uVar20 - 0xb0);
    }
    pMVar21 = g_MobyInstance;
    iVar22 = *(int *)((int)pvVar11 + 0xec);
    fVar3 = (moby->pos).y - g_MobyInstance[iVar22].pos.y;
    fVar5 = (moby->pos).x - g_MobyInstance[iVar22].pos.x;
    fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    if (fVar3 <= (float)((double)*(float *)((int)pvVar11 + 0x100) + dVar38)) {
      if (fVar3 < (float)((double)*(float *)((int)pvVar11 + 0x100) - dVar38)) {
        Delt(g_FrameTime * 5.5,g_FrameTimeSq * 6.0,(float *)((int)pvVar11 + 0xf4)
                      );
      }
    }
    else {
      Delt(g_FrameTime * 10.0,g_FrameTimeSq * 6.0,(float *)((int)pvVar11 + 0xf4))
      ;
    }
    dVar32 = (double)(moby->pos).y;
    fVar5 = (float)((double)pMVar21[iVar22].pos.y - dVar32);
    dVar35 = (double)(moby->pos).x;
    fVar6 = (float)((double)pMVar21[iVar22].pos.x - dVar35);
    iVar22 = *(int *)((int)pvVar11 + 0xcc);
    dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    fVar3 = (float)((double)*(float *)((int)pvVar11 + 0xf4) / dVar36);
    dVar31 = (double)(fVar3 * fVar5);
    dVar33 = (double)(fVar3 * fVar6);
    dVar38 = dVar37;
    if (dVar37 - dVar36 < 0.0) {
      dVar38 = dVar31;
    }
    dVar34 = dVar37;
    if (dVar37 - dVar36 < 0.0) {
      dVar34 = dVar33;
    }
    if (dVar36 - dVar37 < 0.0) {
      dVar38 = dVar31;
    }
    if (dVar36 - dVar37 < 0.0) {
      dVar34 = dVar33;
    }
    (moby->pos).y = (float)(dVar32 + dVar38);
    (moby->pos).x = (float)(dVar35 + dVar34);
    pMVar21 = (MobyInstance *)MB_IsPntInCuboid((Vec4 *)&moby->pos,(longlong)iVar22);
    if (pMVar21 != (MobyInstance *)0x0) {
      pMVar21 = (MobyInstance *)0x7;
      moby->state = '\a';
      if (moby->animationId != '\x05') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x04') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)0x6;
      moby->state = '\x06';
      if (moby->animationId != '\a') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
        pMVar21 = (MobyInstance *)
                  MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x03') {
    OrganicDelt
              ((float)dVar38,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.25,
               (float *)((int)pvVar11 + 0x108),0x720000,(float *)((int)pvVar11 + 0x10c));
    pCVar19 = Cuboids;
    iVar22 = *(int *)((int)pvVar11 + 0xd8);
    iVar14 = *(int *)((int)pvVar11 + 0xdc);
    fVar3 = Cuboids[iVar22].pos.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = Cuboids[iVar14].pos.y;
    fVar4 = Cuboids[iVar22].pos.y;
    fVar9 = Cuboids[iVar14].pos.z;
    fVar7 = Cuboids[iVar22].pos.z;
    fVar8 = Cuboids[iVar14].pos.w;
    *(float *)(puVar16 + 0x16) = fVar5 * (Cuboids[iVar14].pos.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].pos.y;
    fVar3 = pCVar19[iVar22].pos.z;
    *(float *)((int)puVar16 + 0xbc) = fVar8;
    *(float *)(puVar16 + 0x17) = fVar5 * (fVar9 - fVar7) + fVar3;
    fVar3 = pCVar19[iVar22].rot.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].rot.y;
    fVar4 = pCVar19[iVar22].rot.y;
    fVar9 = pCVar19[iVar14].rot.z;
    fVar7 = pCVar19[iVar22].rot.z;
    fVar8 = pCVar19[iVar14].rot.w;
    *(float *)(puVar16 + 0x18) = fVar5 * (pCVar19[iVar14].rot.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xc4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].rot.y;
    fVar3 = pCVar19[iVar22].rot.z;
    *(float *)((int)puVar16 + 0xcc) = fVar8;
    *(float *)(puVar16 + 0x19) = fVar5 * (fVar9 - fVar7) + fVar3;
    Camera_SetMobyDrivenTargetPos((float *)(puVar16 + 0x16));
    Camera_SetMobyDrivenTargetRot((float *)(puVar16 + 0x18));
    uVar23 = (int)*(uint *)((int)pvVar11 + 0x108) >> 0x1f;
    if ((int)((uVar23 >> 1 ^ *(uint *)((int)pvVar11 + 0x108)) - uVar23) < 0x3f800000) {
      if (((moby->updateId == '\b') && (moby->animationBlend == 0.0)) &&
         (iVar22 = MB_MayaFrameTrigger(16.0,moby), iVar22 != 0)) {
        GetBonePosition(moby,2,uVar20 - 0x110);
        GetBonePosition(moby,3,uVar20 - 0x100);
        *(undefined4 *)((int)puVar16 + 0xdc) = *(undefined4 *)((int)puVar16 + 0xfc);
        fVar8 = DAT_00969f88;
        fVar7 = DAT_00969f84;
        fVar9 = g_heroGroundPoint;
        fVar4 = DAT_0073fde4;
        fVar3 = (*(float *)(puVar16 + 0x1e) - *(float *)(puVar16 + 0x1c)) * 0.5 +
                *(float *)(puVar16 + 0x1c);
        fVar6 = (*(float *)((int)puVar16 + 0xf4) - *(float *)((int)puVar16 + 0xe4)) * 0.5 +
                *(float *)((int)puVar16 + 0xe4);
        fVar5 = (*(float *)(puVar16 + 0x1f) - *(float *)(puVar16 + 0x1d)) * 0.5 +
                *(float *)(puVar16 + 0x1d);
        *(undefined4 *)((int)puVar16 + 0x10c) = DAT_00969f8c;
        *(float *)(puVar16 + 0x1a) = fVar3;
        *(float *)((int)puVar16 + 0xd4) = fVar6;
        *(float *)(puVar16 + 0x1b) = fVar5;
        fVar4 = fVar4 * g_FrameTime;
        *(float *)(puVar16 + 0x20) = fVar9 - fVar3;
        *(float *)((int)puVar16 + 0x104) = fVar7 - fVar6;
        *(float *)(puVar16 + 0x21) = fVar8 - fVar5;
        ClampVec3Magnitude((double)fVar4,(Vec4 *)(uVar20 - 0xf0));
        pMVar21 = (MobyInstance *)FUN_001b7028(moby,uVar20 - 0x120,uVar20 - 0xf0);
      }
      else {
        pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
        if (((moby->field43_0x70 & 2U) != 0) &&
           (pMVar21 = (MobyInstance *)(uint)moby->animationId, moby->animationId == 8)) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          pMVar21 = (MobyInstance *)
                    MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      moby->state = '\x06';
      if (moby->animationId != '\a') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
      LetterBoxOn = 0;
      Camera_DeactivateMobyDrivenCam(1);
      FUN_002247e4(g_MobyInstance + *(int *)((int)pvVar11 + 0xc4),
                   &Cuboids[*(int *)((int)pvVar11 + 0xe4)].pos,
                   &Cuboids[*(int *)((int)pvVar11 + 0xe4)].rot,1,1);
      g_heroPadStick = 0;
      DAT_0096ba04 = 0x3f800000;
      pMVar21 = (MobyInstance *)TransitionMovement(0xb,1);
    }
  }
  else if (uVar1 == '\x02') {
    dVar37 = 0.5;
    moby->unk58 = 0.5;
    pvVar13 = moby->pVar;
    Delt(0.0,g_FrameTime * 6.0,(float *)((int)pvVar13 + 0x104));
    SceneScreenFade = *(float *)((int)pvVar13 + 0x104);
    OrganicDelt
              ((float)dVar38,(float)((double)g_FrameTimeSq * dVar37),
               (float)((double)g_FrameTimeSq * dVar37),g_FrameTime * 0.25,
               (float *)((int)pvVar11 + 0x108),0x960000,(float *)((int)pvVar11 + 0x10c));
    pCVar19 = Cuboids;
    iVar22 = *(int *)((int)pvVar11 + 0xd0);
    iVar14 = *(int *)((int)pvVar11 + 0xd4);
    (moby->pos).z =
         -((float)(dVar38 - (double)*(float *)((int)pvVar11 + 0x108)) * 10.0 -
          *(float *)((int)pvVar11 + 0x110));
    fVar3 = pCVar19[iVar22].pos.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].pos.y;
    fVar4 = pCVar19[iVar22].pos.y;
    fVar9 = pCVar19[iVar14].pos.z;
    fVar7 = pCVar19[iVar22].pos.z;
    fVar8 = pCVar19[iVar14].pos.w;
    *(float *)(puVar16 + 0x12) = fVar5 * (pCVar19[iVar14].pos.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0x94) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].pos.y;
    fVar3 = pCVar19[iVar22].pos.z;
    *(float *)((int)puVar16 + 0x9c) = fVar8;
    *(float *)(puVar16 + 0x13) = fVar5 * (fVar9 - fVar7) + fVar3;
    fVar3 = pCVar19[iVar22].rot.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].rot.y;
    fVar4 = pCVar19[iVar22].rot.y;
    fVar9 = pCVar19[iVar14].rot.z;
    fVar7 = pCVar19[iVar22].rot.z;
    fVar8 = pCVar19[iVar14].rot.w;
    *(float *)(puVar16 + 0x14) = fVar5 * (pCVar19[iVar14].rot.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xa4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].rot.y;
    fVar3 = pCVar19[iVar22].rot.z;
    *(float *)((int)puVar16 + 0xac) = fVar8;
    *(float *)(puVar16 + 0x15) = fVar5 * (fVar9 - fVar7) + fVar3;
    Camera_SetMobyDrivenTargetPos((float *)(puVar16 + 0x12));
    Camera_SetMobyDrivenTargetRot((float *)(puVar16 + 0x14));
    uVar23 = (int)*(uint *)((int)pvVar11 + 0x108) >> 0x1f;
    if ((int)((uVar23 >> 1 ^ *(uint *)((int)pvVar11 + 0x108)) - uVar23) < 0x3f800000) {
      uVar1 = moby->animationId;
      pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar1 == '\x02') &&
           (pMVar21 = (MobyInstance *)moby->animationBlend, pMVar21 == (MobyInstance *)0x0)) {
          if (uVar1 != '\x05') {
            puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
            pMVar21 = (MobyInstance *)
                      MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar16 + 0x1ac));
          }
        }
        else if ((uVar1 == '\x05') &&
                ((pMVar21 = (MobyInstance *)moby->animationBlend, pMVar21 == (MobyInstance *)0x0 &&
                 (uVar1 != '\x03')))) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          pMVar21 = (MobyInstance *)
                    MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar11 + 0x108) = 0;
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0;
      pMVar21 = (MobyInstance *)(uint)moby->animationId;
      if (moby->animationId != 8) {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = (pMVar21->pos).x - (moby->pos).x;
    fVar5 = (pMVar21->pos).y - (moby->pos).y;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)((int)puVar16 + 0x15c) = fVar3;
    *(float *)(puVar16 + 0x2c) = fVar5;
    *(float *)((int)puVar16 + 0x164) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar24 = (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x164) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar16 + 0x15c));
    if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar4 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar16 + 0x2c));
    if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar25 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0x68;
      lVar29 = uVar20 - 0x58;
      lVar30 = 2;
      fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar16 + 0x194) = fVar5;
      *(float *)((int)puVar16 + 0x18c) = fVar5;
      *(float *)(puVar16 + 0x32) = fVar5;
      *(float *)(puVar16 + 0x31) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar6;
      *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar5;
      *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar5 * fVar5;
        iVar22 = (int)lVar27;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar20 - 0x68;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar27 = lVar29;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar22 = (int)lVar26;
        iVar14 = (int)lVar29;
        lVar26 = lVar26 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar22 + 0x188) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8)
                + *(float *)(iVar14 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar4;
    }
    OrganicDeltAng
              (fVar3,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x190d20,
               (float *)((int)pvVar11 + 0xf0));
    pMVar21 = (MobyInstance *)
              PointInsideComplexPoly
                        (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar11 + 0xc0)]->points,
                         Splines[*(int *)((int)pvVar11 + 0xc0)]->cnt);
    if ((pMVar21 != (MobyInstance *)0x0) &&
       (pMVar21 = (MobyInstance *)
                  MB_CountActiveMobysByGroup
                            (*(undefined4 *)((int)pvVar11 + 200),0xffffffffffffffff),
       pMVar21 == (MobyInstance *)0x0)) {
      pvVar13 = moby->pVar;
      Delt((float)dVar38,g_FrameTime * 6.0,(float *)((int)pvVar13 + 0x104));
      SceneScreenFade = *(float *)((int)pvVar13 + 0x104);
      uVar23 = (int)*(uint *)((int)pvVar13 + 0x104) >> 0x1f;
      pMVar21 = (MobyInstance *)((uVar23 >> 1 ^ *(uint *)((int)pvVar13 + 0x104)) - uVar23);
      if (0x3f7fffff < (int)pMVar21) {
        Hero_Warp(&Cuboids[*(int *)((int)pvVar11 + 0xe0)].pos.x,
                        &Cuboids[*(int *)((int)pvVar11 + 0xe0)].rot.x,0x72,1);
        FUN_002247e4(g_MobyInstance + *(int *)((int)pvVar11 + 0xc4),
                     &Cuboids[*(int *)((int)pvVar11 + 0xe4)].pos,
                     &Cuboids[*(int *)((int)pvVar11 + 0xe4)].rot,0,1);
        pCVar19 = Cuboids;
        iVar22 = *(int *)((int)pvVar11 + 0xd0);
        *(float *)(puVar16 + 0xe) = Cuboids[iVar22].pos.x;
        *(float *)((int)puVar16 + 0x74) = pCVar19[iVar22].pos.y;
        *(float *)(puVar16 + 0xf) = pCVar19[iVar22].pos.z;
        *(float *)((int)puVar16 + 0x7c) = pCVar19[iVar22].pos.w;
        *(float *)(puVar16 + 0x10) = pCVar19[iVar22].rot.x;
        *(float *)((int)puVar16 + 0x84) = pCVar19[iVar22].rot.y;
        *(float *)(puVar16 + 0x11) = pCVar19[iVar22].rot.z;
        *(float *)((int)puVar16 + 0x8c) = pCVar19[iVar22].rot.w;
        SetCameraPosition(uVar20 - 0x180,uVar20 - 0x170,1,0,0);
        Camera_SetMobyDrivenTargetPos((float *)(uVar20 - 0x180));
        Camera_SetMobyDrivenTargetRot((float *)(uVar20 - 0x170));
        *(undefined4 *)((int)pvVar11 + 0x108) = 0;
        *(undefined4 *)((int)pvVar11 + 0x10c) = 0;
        LetterBoxOn = 1;
        pMVar21 = (MobyInstance *)(uint)moby->animationId;
        moby->state = '\x02';
        if (moby->animationId != 2) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
          pMVar21 = (MobyInstance *)
                    MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    fVar3 = (moby->pos).y - g_MobyInstance[*(int *)((int)pvVar11 + 0xec)].pos.y;
    fVar5 = (moby->pos).x - g_MobyInstance[*(int *)((int)pvVar11 + 0xec)].pos.x;
    *(float *)((int)pvVar11 + 0x100) = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    *(f32 *)((int)pvVar11 + 0x110) = (moby->pos).z;
    fVar3 = (moby->pos).z;
    moby->drawDistance = 0xff;
    bVar2 = moby->animationId;
    pMVar21 = (MobyInstance *)(uint)bVar2;
    moby->state = '\x01';
    (moby->pos).z = fVar3 - 10.0;
    if (bVar2 != 1) {
      pMVar21 = (MobyInstance *)MB_SetAnimation(moby,1,0,0);
    }
  }
  return pMVar21;
}



// game/update/moby1357.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x259954-0x25ad8c
#include "game/update/moby1357.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/update/camera0.h"
#include "game/update/moby688.h"
#include "idol/fastfunc.h"

// 0x0259954 (0x14 bytes)
void M1357_00259954(void)

{
  DAT_0079bde4 = 0x10000;
  return;
}


// 0x0259970 (0x1e8 bytes)
void M1357_00259970(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  uVar6 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar7 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
  fVar1 = 10.0;
  uVar8 = (int)*(uint *)(param_1 + 0x18) >> 0x1f;
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x18);
  g_heroPosition.w = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x10);
  if ((int)((uVar6 >> 1 ^ *(uint *)(param_1 + 0x10)) - uVar6) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
    fVar9 = fVar1;
  }
  fVar5 = 1013.0;
  if (1013.0 < fVar9) {
    *(undefined4 *)(param_1 + 0x10) = 0x447d4000;
    fVar9 = fVar5;
  }
  fVar11 = *(float *)(param_1 + 0x14);
  if ((int)((uVar7 >> 1 ^ *(uint *)(param_1 + 0x14)) - uVar7) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x14) = 0x41200000;
    fVar11 = fVar1;
  }
  if (1013.0 < fVar11) {
    *(undefined4 *)(param_1 + 0x14) = 0x447d4000;
    fVar11 = fVar5;
  }
  fVar10 = *(float *)(param_1 + 0x18);
  if ((int)((uVar8 >> 1 ^ *(uint *)(param_1 + 0x18)) - uVar8) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x18) = 0x41200000;
    fVar10 = fVar1;
  }
  if (1013.0 < fVar10) {
    *(undefined4 *)(param_1 + 0x18) = 0x447d4000;
    fVar10 = fVar5;
  }
  pMVar12 = g_heroMobyPtr;
  g_heroPosition.x =
       fVar9 - (*(float *)(param_1 + 0xe0) * fVar4 +
               *(float *)(param_1 + 0xc0) * fVar2 + *(float *)(param_1 + 0xd0) * fVar3);
  g_heroPosition.y =
       fVar11 - (*(float *)(param_1 + 0xe4) * fVar4 +
                *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0xd4) * fVar3);
  g_heroPosition.z =
       fVar10 - (*(float *)(param_1 + 0xe8) * fVar4 +
                *(float *)(param_1 + 200) * fVar2 + *(float *)(param_1 + 0xd8) * fVar3);
  (g_heroMobyPtr->rotation).x = *(f32 *)(param_1 + 0x40);
  (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
  (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
  (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
  g_heroRotation.x = *(float *)(param_1 + 0x40);
  g_heroRotation.y = *(float *)(param_1 + 0x44);
  g_heroRotation.z = *(float *)(param_1 + 0x48);
  g_heroRotation.w = *(float *)(param_1 + 0x4c);
  return;
}


// 0x0259b58 (0x88 bytes)
void M1357_00259b58(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar1 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
  uVar11 = puVar1[3];
  uVar10 = puVar1[2];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  puVar1 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
  uVar14 = puVar1[2];
  uVar13 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar14;
  puVar2[1] = uVar13;
  *puVar2 = uVar12;
  puVar1 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  pMVar3 = g_heroMobyPtr;
  *(f32 *)(param_1 + 0x40) = (g_heroMobyPtr->rotation).x;
  *(f32 *)(param_1 + 0x44) = (pMVar3->rotation).y;
  *(f32 *)(param_1 + 0x48) = (pMVar3->rotation).z;
  *(f32 *)(param_1 + 0x4c) = (pMVar3->rotation).w;
  GetBonePosition(pMVar3,5,param_1 + 0x10);
  return;
}


// 0x0259bf0 (0x784 bytes)
// inlined: FastAtan2 @0x259ef4
bool M1357_00259bf0(undefined8 param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *n;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar24;
  float fVar25;
  float fVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xd0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x1c] = in_LR;
  puVar6[0x18] = in_f30;
  puVar6[0x19] = in_f31;
  puVar6[0x16] = unaff_r30;
  puVar6[0x17] = unaff_r31;
  fVar25 = g_heroPadStick;
  bVar1 = g_heroPadStick == 0.0;
  bVar2 = DAT_0096ba04 == 0.0;
  dVar24 = 0.0;
  puVar6[0x15] = unaff_r29;
  if (bVar1 && bVar2) {
    if ((g_Pad.downButtons & R1) != 0) {
      Cam0_SetCamPull(0);
      g_heroIdealRotZ = GameCamera.rot.radius;
      dVar18 = (double)AccelDeltAng
                                 ((double)GameCamera.rot.radius,
                                  (double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * g_FrameTime),
                                  0x969d78,&DAT_00720000,&DAT_00969e64);
      DAT_00969e68 = (float)dVar18;
    }
  }
  else {
    if ((g_Pad.downButtons & R1) == 0) {
      fVar4 = ABS(-DAT_0096ba04);
      fVar3 = ABS(-fVar25);
      *(float *)(puVar6 + 0xe) = -DAT_0096ba04;
      *(float *)((int)puVar6 + 0x74) = -fVar25;
      *(float *)(puVar6 + 0xf) = fVar4 - fVar3;
      uVar15 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
      fVar25 = ABS(*(float *)(puVar6 + 0xe));
      if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
        fVar25 = fVar3;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
      if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar18 = dVar24;
      if (0.0 < fVar25) {
        lVar11 = uVar10 - 0xc0;
        lVar16 = uVar10 - 0x44;
        lVar13 = uVar10 - 0x54;
        lVar17 = 2;
        fVar25 = (fVar5 - fVar25) / (fVar5 + fVar25);
        fVar5 = fVar25 * fVar25;
        *(float *)(puVar6 + 0x11) = fVar25;
        *(float *)(puVar6 + 0x10) = fVar25;
        *(float *)((int)puVar6 + 0x84) = fVar25;
        *(float *)((int)puVar6 + 0x7c) = fVar25;
        fVar25 = fVar5 * fVar5;
        *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
        *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar25;
        *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar25 * fVar5;
        do {
          *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar25 * fVar25;
          iVar7 = (int)lVar13;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar25 * fVar25;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 4;
        lVar16 = uVar10 - 0x54;
        pfVar14 = (float *)&DAT_007358e0;
        lVar11 = lVar12;
        lVar13 = lVar16;
        do {
          fVar25 = *pfVar14;
          fVar5 = pfVar14[1];
          pfVar14 = pfVar14 + 2;
          *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar25;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar11 = 2;
        do {
          iVar7 = (int)lVar12;
          iVar8 = (int)lVar16;
          lVar12 = lVar12 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar7 + 0x7c)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar4);
      }
      g_heroIdealRotZ = (float)dVar18;
      dVar18 = (double)FastWrapRot((float)dVar18,GameCamera.rot.radius);
      g_heroIdealRotZ = (float)dVar18;
      dVar18 = (double)AccelDeltAng
                                 (dVar18,(double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * g_FrameTime),
                                  0x969d78,&DAT_00720000,&DAT_00969e64);
      DAT_00969e68 = (float)dVar18;
      fVar3 = (g_heroMobyPtr->transform).v0.y;
      fVar4 = (g_heroMobyPtr->transform).v0.x;
      fVar25 = (g_heroMobyPtr->transform).v0.z;
      dVar21 = (double)*param_2;
      dVar23 = (double)param_2[1];
      dVar20 = (double)SQRT(fVar25 * fVar25 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar25 = param_2[2];
      dVar18 = dVar24;
      dVar19 = dVar24;
      if (dVar20 != dVar24) {
        fVar5 = (float)((double)(DAT_0079be8c * DAT_0071f418 * g_heroPadMagnitude) / dVar20);
        dVar18 = (double)(fVar4 * fVar5);
        dVar19 = (double)(fVar3 * fVar5);
      }
    }
    else {
      Cam0_SetCamPull(0);
      g_heroIdealRotZ = GameCamera.rot.radius;
      dVar18 = (double)AccelDeltAng
                                 ((double)GameCamera.rot.radius,
                                  (double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * g_FrameTime),
                                  0x969d78,&DAT_007a0000,&DAT_00969e64);
      pMVar9 = g_heroMobyPtr;
      DAT_00969e68 = (float)dVar18;
      fVar4 = (g_heroMobyPtr->transform).v1.y;
      fVar5 = (g_heroMobyPtr->transform).v1.x;
      fVar25 = (g_heroMobyPtr->transform).v1.z;
      dVar21 = (double)SQRT(fVar25 * fVar25 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar25 = param_2[2];
      fVar3 = (float)(-(double)(DAT_0079be8c * DAT_0071f418 * g_heroPadStick) / dVar21);
      dVar19 = (double)(fVar4 * fVar3);
      dVar20 = (double)(fVar5 * fVar3);
      dVar18 = dVar24;
      if (dVar24 - dVar21 < 0.0) {
        dVar18 = dVar19;
      }
      dVar22 = dVar24;
      if (dVar24 - dVar21 < 0.0) {
        dVar22 = dVar20;
      }
      if (dVar21 - dVar24 < 0.0) {
        dVar18 = dVar19;
      }
      if (dVar21 - dVar24 < 0.0) {
        dVar22 = dVar20;
      }
      dVar23 = (double)(float)((double)param_2[1] + dVar18);
      dVar21 = (double)(float)((double)*param_2 + dVar22);
      param_2[1] = (float)((double)param_2[1] + dVar18);
      *param_2 = (float)((double)*param_2 + dVar22);
      fVar3 = (pMVar9->transform).v0.y;
      fVar4 = (pMVar9->transform).v0.x;
      fVar5 = (pMVar9->transform).v0.z;
      dVar20 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      dVar18 = dVar24;
      dVar19 = dVar24;
      if (dVar20 != dVar24) {
        fVar5 = (float)(-(double)(DAT_0079be8c * DAT_0071f418 * DAT_0096ba04) / dVar20);
        dVar18 = (double)(fVar4 * fVar5);
        dVar19 = (double)(fVar3 * fVar5);
      }
    }
    param_2[2] = fVar25;
    *param_2 = (float)(dVar21 + dVar18);
    param_2[1] = (float)(dVar23 + dVar19);
  }
  if ((g_Pad.buttonsPressedThisFrame & CROSS) == 0) {
    if ((g_Pad.downButtons & CROSS) == 0) {
      n = (undefined *)0x0;
      param_2[0xf] = 0.0;
    }
    else {
      n = (undefined *)param_2[0xf];
      if (0 < (int)n) {
        n = &DAT_007a0000;
        dVar18 = -(double)(DAT_0079beb8 * DAT_0071f418 - param_2[0xf]);
        param_2[0xf] = (float)dVar18;
        if (dVar18 < dVar24) {
          n = (undefined *)0x0;
          param_2[0xf] = 0.0;
        }
      }
    }
  }
  else {
    n = &DAT_007a0000;
    param_2[0xf] = DAT_0079beb4 * DAT_0071f418;
  }
  fVar25 = MB_EaseOutPow(g_Pad.unk028,(int)n);
  dVar18 = (double)fVar25;
  fVar26 = MB_EaseOutPow(g_Pad.unk02c,(int)n);
  fVar25 = DAT_0079be9c * DAT_0071f418 * (float)(dVar18 - (double)fVar26) + param_2[0xf] +
           param_2[2];
  param_2[2] = fVar25;
  fVar5 = (DAT_0079bea4 - 1.0) * DAT_0071f408 + 1.0;
  fVar3 = param_2[1] * fVar5;
  fVar4 = *param_2 * fVar5;
  fVar25 = fVar25 * fVar5;
  *param_2 = fVar4;
  param_2[1] = fVar3;
  param_2[2] = fVar25;
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (DAT_0079be88 * g_FrameTime < fVar5) {
    fVar5 = (DAT_0079be88 * g_FrameTime) / fVar5;
    fVar4 = fVar4 * fVar5;
    fVar3 = fVar3 * fVar5;
    *param_2 = fVar4;
    param_2[1] = fVar3;
  }
  if (DAT_0079be94 * g_FrameTime < fVar25) {
    fVar25 = fVar25 * ((DAT_0079beac * DAT_0071f408 *
                       (DAT_0079be94 * g_FrameTime - fVar25)) / fVar25 + 1.0);
    param_2[2] = fVar25;
  }
  pMVar9 = g_heroMobyPtr;
  g_heroPosition.x = (g_heroMobyPtr->pos).x + fVar4;
  g_heroPosition.y = (g_heroMobyPtr->pos).y + fVar3;
  g_heroPosition.z = (g_heroMobyPtr->pos).z + fVar25;
  g_heroPosition.w = (g_heroMobyPtr->pos).w;
  (g_heroMobyPtr->pos).x = g_heroPosition.x;
  (pMVar9->pos).y = g_heroPosition.y;
  (pMVar9->pos).z = g_heroPosition.z;
  param_2[2] = -(DAT_0079beb0 * DAT_0071f418 - param_2[2]);
  fVar25 = param_2[0xd] - DAT_0079be54;
  param_2[0xd] = fVar25;
  fVar25 = fVar25 - (DAT_0079be58 * (float)(dVar18 - (double)fVar26) +
                    DAT_0079be5c * g_heroPadMagnitude);
  param_2[0xd] = fVar25;
  bVar1 = (double)fVar25 < dVar24;
  if (bVar1) {
    param_2[0xd] = 0.0;
  }
  return bVar1;
}


// 0x025a374 (0xd8 bytes)
void M1357_0025a374(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar2 = (double)FastIntToDouble((longlong)g_FrameBufHeight + -0x40);
  dVar2 = (double)(float)(dVar2 * (double)(*(float *)(iVar1 + 0x34) / DAT_0079be50));
  DrawRectOverlay
            (0x1e,g_FrameBufHeight + -0x1e,g_FrameBufWidth + -0x32,
             g_FrameBufWidth + -0x1e,0x60800000);
  iVar1 = FastDoubleToInt(dVar2);
  DrawRectOverlay
            ((g_FrameBufHeight - iVar1) + -0x20,g_FrameBufHeight + -0x20,
             g_FrameBufWidth + -0x30,g_FrameBufWidth + -0x20,0x40000080);
  return;
}


// 0x025a470 (0x864 bytes)
/* Moby 1357 */

void UpdateMoby_1357(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  undefined1 *puVar3;
  f32 fVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  MobyInstance *pMVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  pMVar9 = g_heroMobyPtr;
  lVar11 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar3 = (undefined1 *)moby->pVar;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      (moby->pos).z = (moby->pos).z + DAT_0079be60;
      GetBonePosition(pMVar9,5,puVar3 + 0x10);
      *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0x10) - g_heroPosition.x;
      *(float *)(puVar3 + 0x14) = *(float *)(puVar3 + 0x14) - g_heroPosition.y;
      *(float *)(puVar3 + 0x18) = *(float *)(puVar3 + 0x18) - g_heroPosition.z;
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar11,0,0,10);
      }
      moby->state = '\x01';
    }
    else if (bVar1 < 2) {
      dVar14 = (double)FastWrapRot
                                 ((moby->rotation).z,
                                  DAT_0079be64 * 0.017453292 * g_FrameTime);
      (moby->rotation).z = (float)dVar14;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar8 * fVar8 + fVar2 * fVar2) < DAT_0079be68) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar11,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else {
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar18 = puVar6[3];
      uVar17 = puVar6[2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar22 = puVar6[3];
      uVar21 = puVar6[2];
      uVar20 = puVar6[1];
      uVar19 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar25 = puVar6[2];
      uVar24 = puVar6[1];
      uVar23 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar25;
      puVar7[1] = uVar24;
      *puVar7 = uVar23;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar18;
      puVar6[2] = uVar17;
      puVar6[1] = uVar16;
      *puVar6 = uVar15;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar22;
      puVar6[2] = uVar21;
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
      pMVar9 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar9->rotation).y;
      (moby->rotation).z = (pMVar9->rotation).z;
      (moby->rotation).w = (pMVar9->rotation).w;
      GetBonePosition(pMVar9,5,lVar11 + 0x10);
      if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x54e)) {
        if (moby->animationId != '\x01') {
          MB_SetAnimation(lVar11,1,0,10);
        }
        moby->state = '\x04';
      }
      if (((0 < *(int *)(puVar3 + 0x34)) && ((g_Pad.buttonsPressedThisFrame & CROSS) != 0)) &&
         (g_framesNotGrounded != 0)) {
        TransitionMovement(0x32,0);
        Hero_TransAnim(20.0,0x13,0);
        g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        *(float *)(puVar3 + 8) = DAT_0079be78 * g_FrameTime;
        *(float *)(puVar3 + 0x3c) = DAT_0079beb4 * DAT_0071f418;
        Cam0_SetCamOfsZ(0x3fc99999a0000000,0x3f747ae140000000,&DAT_007a0000,0);
        DAT_00fa3f24 = DAT_0071d508;
        DAT_00fa3f28 = DAT_0071d50c;
        DAT_0071d508 = DAT_0079be70;
        DAT_0071d50c = DAT_0079be74;
        *(undefined4 *)(puVar3 + 0x30) = DAT_0079be7c;
        moby->state = '\x06';
      }
    }
  }
  else if (bVar1 < 5) {
    if (3 < bVar1) {
      fVar2 = *(float *)(puVar3 + 0x34) + DAT_0079be4c;
      *(float *)(puVar3 + 0x34) = fVar2;
      if (DAT_0079be50 < fVar2) {
        *(float *)(puVar3 + 0x34) = DAT_0079be50;
      }
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar18 = puVar6[3];
      uVar17 = puVar6[2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar22 = puVar6[3];
      uVar21 = puVar6[2];
      uVar20 = puVar6[1];
      uVar19 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar25 = puVar6[2];
      uVar24 = puVar6[1];
      uVar23 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar25;
      puVar7[1] = uVar24;
      *puVar7 = uVar23;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar18;
      puVar6[2] = uVar17;
      puVar6[1] = uVar16;
      *puVar6 = uVar15;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar22;
      puVar6[2] = uVar21;
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
      pMVar9 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar9->rotation).y;
      (moby->rotation).z = (pMVar9->rotation).z;
      (moby->rotation).w = (pMVar9->rotation).w;
      GetBonePosition(pMVar9,5,lVar11 + 0x10);
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x54e)) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar11,0,0,10);
        }
        moby->state = '\x02';
      }
      if ((0 < *(int *)(puVar3 + 0x34)) && ((g_Pad.buttonsPressedThisFrame & CROSS) != 0)) {
        TransitionMovement(0x32,0);
        Hero_TransAnim(20.0,0x13,0);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar11,0,0,10);
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        uVar15 = DAT_0079be84;
        *(float *)(puVar3 + 0x3c) = DAT_0079beb4 * DAT_0071f418;
        fVar8 = DAT_0079be80;
        fVar2 = g_FrameTime;
        *(undefined4 *)(puVar3 + 0x30) = uVar15;
        *(float *)(puVar3 + 8) = fVar8 * fVar2;
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 < 7) {
    iVar12 = M1357_00259bf0(0x3ff0000000000000,lVar11,puVar3);
    puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
    uVar18 = puVar6[3];
    uVar17 = puVar6[2];
    uVar16 = puVar6[1];
    uVar15 = *puVar6;
    puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
    uVar22 = puVar6[3];
    uVar21 = puVar6[2];
    uVar20 = puVar6[1];
    uVar19 = *puVar6;
    puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
    uVar25 = puVar6[2];
    uVar24 = puVar6[1];
    uVar23 = *puVar6;
    puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    puVar7[3] = puVar6[3];
    puVar7[2] = uVar25;
    puVar7[1] = uVar24;
    *puVar7 = uVar23;
    puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    puVar6[3] = uVar18;
    puVar6[2] = uVar17;
    puVar6[1] = uVar16;
    *puVar6 = uVar15;
    puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    puVar6[3] = uVar22;
    puVar6[2] = uVar21;
    puVar6[1] = uVar20;
    *puVar6 = uVar19;
    pMVar9 = g_heroMobyPtr;
    (moby->rotation).x = (g_heroMobyPtr->rotation).x;
    (moby->rotation).y = (pMVar9->rotation).y;
    (moby->rotation).z = (pMVar9->rotation).z;
    (moby->rotation).w = (pMVar9->rotation).w;
    GetBonePosition(pMVar9,5,lVar11 + 0x10);
    iVar13 = FastDecTimerS32(puVar3 + 0x30);
    if (((iVar13 != 0) || (iVar12 != 0)) &&
       ((dVar14 = (double)GetGroundZ(0x3fe0000000000000,&g_heroPosition,0),
        (double)g_heroPosition.z <= dVar14 || (iVar12 != 0)))) {
      *(undefined4 *)(puVar3 + 0x30) = 0;
      TransitionMovement(0,1);
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar11,0,0,10);
      }
      moby->state = '\x02';
    }
    iVar12 = CollSphere((double)DAT_0079bea8,lVar11 + 0x10,&DAT_007a0000,2,g_heroMobyPtr);
    if (iVar12 != 0) {
      *(float *)(puVar3 + 0x10) = g_heroPosition.x - (moby->pos).x;
      *(float *)(puVar3 + 0x14) = g_heroPosition.y - (moby->pos).y;
      *(float *)(puVar3 + 0x18) = g_heroPosition.z - (moby->pos).z;
      *(float *)(puVar3 + 0x1c) = g_heroPosition.w;
      fVar2 = g_CollOutput.push.x;
      (moby->pos).x = g_CollOutput.push.x;
      fVar8 = g_CollOutput.push.y;
      (moby->pos).y = g_CollOutput.push.y;
      fVar10 = g_CollOutput.push.z;
      (moby->pos).z = g_CollOutput.push.z;
      g_heroPosition.w = g_CollOutput.push.w;
      (moby->pos).w = g_CollOutput.push.w;
      g_heroPosition.x = fVar2 + *(float *)(puVar3 + 0x10);
      g_heroPosition.y = fVar8 + *(float *)(puVar3 + 0x14);
      g_heroPosition.z = fVar10 + *(float *)(puVar3 + 0x18);
    }
  }
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar2 = 10.0;
  fVar8 = (moby->pos).x;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).x = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).x = 1013.0;
  }
  fVar4 = (moby->pos).y;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).y;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).y = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).y = 1013.0;
  }
  fVar4 = (moby->pos).z;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).z;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).z = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).z = 1013.0;
  }
  if (2 < moby->state) {
    RegisterFuncForMoby(&PTR_M1357_0025a374_0070a0b0,moby);
  }
  return;
}


// 0x025acd4 (0x14 bytes)
void M1357_0025acd4(void)

{
  DAT_0079bf08 = 0x10000;
  return;
}


// 0x025ace8 (0x58 bytes)
void M1357_0025ace8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar7 + 0xe8);
  fVar2 = *(float *)(iVar7 + 0xd4);
  fVar3 = *(float *)(iVar7 + 0xc4);
  fVar4 = *(float *)(iVar7 + 0xd8);
  fVar5 = *(float *)(iVar7 + 200);
  uVar6 = *(undefined4 *)(iVar7 + 0xdc);
  *(float *)(param_1 + 0x10) =
       fVar1 * (*(float *)(iVar7 + 0xd0) - *(float *)(iVar7 + 0xc0)) + *(float *)(iVar7 + 0xc0);
  *(float *)(param_1 + 0x14) = fVar1 * (fVar2 - fVar3) + *(float *)(iVar7 + 0xc4);
  fVar2 = *(float *)(iVar7 + 200);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar4 - fVar5) + fVar2;
  return;
}


// 0x025ad40 (0x4c bytes)
void M1357_0025ad40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = MB_damage(param_1,0x330000,0);
  if (iVar1 != 0) {
    DeleteMoby((MobyInstance *)param_1);
  }
  return;
}



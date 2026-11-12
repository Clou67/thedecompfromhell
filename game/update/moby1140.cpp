// game/update/moby1140.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 13 functions, 0x1dc0b8-0x1def54
#include "game/update/moby1140.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1077.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "game/update/moby1158.h"
#include "game/update/moby1248.h"
#include "game/update/moby650.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x01dc0b8 (0x14 bytes)
void M1140_001dc0b8(void)

{
  DAT_00764b40 = 0x10000;
  return;
}


// 0x01dc0d0 (0xf4 bytes)
// strings: 0096c074: 'None'

void M1140_001dc0d0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x01dc1f0 (0x53c bytes)
// inlined: FastAtan2 @0x1dc348, FastAtan2 @0x1dc4f4
// strings: 0096c074: 'None'

void M1140_001dc1f0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x24] = in_LR;
  puVar8[0x1c] = in_f26;
  puVar8[0x1d] = in_f27;
  puVar8[0x1e] = in_f28;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x1a] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x48);
  puVar8[0x19] = unaff_r29;
  if (bVar1 < 0xb) {
    if (5 < bVar1) goto LAB_001dc68c;
  }
  else if (bVar1 < 0xf) {
    if (bVar1 == 0xd) goto LAB_001dc68c;
  }
  else if (bVar1 != 0x10) goto LAB_001dc68c;
  fVar2 = g_heroPosition.x - fVar2;
  dVar23 = (double)fVar2;
  fVar3 = g_heroPosition.y - fVar3;
  dVar22 = (double)fVar3;
  dVar24 = (double)(fVar4 + 1.0);
  *(float *)((int)puVar8 + 0x7c) = fVar2;
  *(float *)(puVar8 + 0x10) = fVar3;
  dVar26 = (double)g_heroPosition.z;
  *(float *)((int)puVar8 + 0x84) = (float)(ABS(dVar23) - ABS(dVar22));
  dVar27 = 0.0;
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar8 + 0x7c));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar25 = ABS(dVar22);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar19 = ABS((double)*(float *)(puVar8 + 0x10));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar23);
  }
  dVar21 = 0.7853981852531433;
  dVar20 = dVar27;
  if (0.0 < dVar25) {
    lVar12 = uVar11 - 0x100;
    lVar14 = uVar11 - 0x68;
    lVar17 = uVar11 - 0x58;
    lVar18 = 2;
    fVar4 = (float)(dVar19 - dVar25) / (float)(dVar19 + dVar25);
    fVar6 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0xb4) = fVar4;
    *(float *)((int)puVar8 + 0xac) = fVar4;
    *(float *)(puVar8 + 0x16) = fVar4;
    *(float *)(puVar8 + 0x15) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar6;
    *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
    *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x68;
    pfVar15 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    lVar12 = lVar13;
    dVar25 = dVar27;
    do {
      iVar9 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar10 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar9 + 0xa8)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar20 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar19 = (double)FastDiffRots(dVar20,(double)fVar5);
  dVar20 = ABS((double)(float)(dVar26 - dVar24));
  *(float *)((int)puVar8 + 0x74) = (float)(dVar26 - dVar24);
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  dVar22 = ABS((double)fVar2);
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)(puVar8 + 0xf) = (float)(dVar22 - dVar20);
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar8 + 0xe));
  if ((double)*(float *)(puVar8 + 0xf) - dVar27 < 0.0) {
    dVar25 = dVar20;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar8 + 0x74));
  if ((double)*(float *)(puVar8 + 0xf) - dVar27 < 0.0) {
    dVar23 = dVar22;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar27 < dVar25) {
    lVar12 = uVar11 - 0x100;
    lVar17 = uVar11 - 0x78;
    lVar14 = uVar11 - 0x88;
    lVar18 = 2;
    fVar4 = (float)(dVar23 - dVar25) / (float)(dVar23 + dVar25);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)((int)puVar8 + 0x8c) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    *(float *)(puVar8 + 0x11) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar11 - 0x88;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar9 + 0x88)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar27 = (double)((float)(dVar27 + dVar21) * fVar2 + fVar3);
  }
  dVar27 = -dVar27;
  dVar25 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar25 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar25 = -1.2217304706573486;
  }
  dVar22 = 0.2617993950843811;
  if ((dVar27 <= 0.2617993950843811) && (dVar22 = dVar27, dVar27 < -0.5235987901687622)) {
    dVar22 = -0.5235987901687622;
  }
  *(float *)(iVar7 + 0x1c8) = (float)(dVar25 * 0.699999988079071);
  *(float *)(iVar7 + 0x1c4) = (float)dVar22;
  *(float *)(iVar7 + 0x248) = (float)(dVar25 * 0.30000001192092896);
LAB_001dc68c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)(iVar7 + 0x1d0) = 0x40300000;
  }
  dVar27 = 0.019999999552965164;
  dVar25 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar7 + 0x160,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * dVar25),param_1,iVar7 + 0x1e0,1);
  return;
}


// 0x01dc730 (0x53c bytes)
// strings: 00764b88: '?s33' (raw)

void M1140_TransitionAnim(int param_1,byte param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(byte *)(param_1 + 0x20) = param_2;
  cVar1 = *(char *)(param_1 + 0x53);
  if (param_2 < 9) {
    if (3 < param_2) {
      if (6 < param_2) {
        if (7 < param_2) {
          if (cVar1 != '\x03') {
            MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
          }
          pMVar13 = g_MobyInstance;
          iVar6 = *(int *)(iVar5 + (int)(((ulonglong)
                                          (LZCOUNT(*(undefined4 *)(iVar5 + 0x158)) << 0x20) >> 0x25
                                         ^ 1) << 2) + 0xf0);
          fVar2 = g_MobyInstance[iVar6].pos.x;
          *(float *)(iVar5 + 0x120) = fVar2;
          fVar3 = pMVar13[iVar6].pos.y;
          *(float *)(iVar5 + 0x124) = fVar3;
          fVar4 = pMVar13[iVar6].pos.z;
          *(float *)(iVar5 + 0x128) = fVar4;
          *(f32 *)(iVar5 + 300) = pMVar13[iVar6].pos.w;
          fVar7 = pMVar13[iVar6].transform.v0.y * DAT_00764b80;
          fVar8 = pMVar13[iVar6].transform.v0.z * DAT_00764b80;
          fVar9 = pMVar13[iVar6].transform.v2.y * DAT_00764b88;
          fVar10 = pMVar13[iVar6].transform.v2.z * DAT_00764b88;
          fVar11 = pMVar13[iVar6].transform.v1.y * DAT_00764b84;
          fVar12 = pMVar13[iVar6].transform.v1.z * DAT_00764b84;
          *(float *)(iVar5 + 0x120) =
               pMVar13[iVar6].transform.v1.x * DAT_00764b84 +
               pMVar13[iVar6].transform.v2.x * DAT_00764b88 +
               pMVar13[iVar6].transform.v0.x * DAT_00764b80 + fVar2;
          *(float *)(iVar5 + 0x124) = fVar11 + fVar9 + fVar7 + fVar3;
          *(float *)(iVar5 + 0x128) = fVar12 + fVar10 + fVar8 + fVar4;
          return;
        }
        if (cVar1 != '\x04') {
          MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 20.5));
        }
        *(undefined4 *)(iVar5 + 0x13c) = 0;
        *(undefined4 *)(iVar5 + 0x138) = 0;
        *(undefined4 *)(iVar5 + 0x134) = 0;
        *(undefined4 *)(iVar5 + 0x130) = 0;
        return;
      }
      if (4 < param_2) {
        if (cVar1 != '\x03') {
          MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
        }
        *(float *)(iVar5 + 0x154) = DAT_00764b74 * g_FrameTime;
        return;
      }
      if (cVar1 != '\x02') {
        MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 20.5));
      }
      *(float *)(iVar5 + 0x154) = DAT_00764b70 * g_FrameTime;
      return;
    }
    if (param_2 < 2) {
      if (param_2 == 0) {
        return;
      }
    }
    else if (param_2 < 3) {
      return;
    }
  }
  else if (param_2 < 0xe) {
    if (param_2 < 0xb) {
      if (9 < param_2) {
        if (cVar1 != '\x03') {
          MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
        }
        pMVar13 = g_MobyInstance;
        iVar6 = *(int *)(iVar5 + (int)(((ulonglong)(LZCOUNT(*(undefined4 *)(iVar5 + 0x158)) << 0x20)
                                        >> 0x25 ^ 1) << 2) + 0xf0);
        fVar2 = g_MobyInstance[iVar6].pos.x;
        *(float *)(iVar5 + 0x120) = fVar2;
        fVar3 = pMVar13[iVar6].pos.y;
        *(float *)(iVar5 + 0x124) = fVar3;
        fVar4 = pMVar13[iVar6].pos.z;
        *(float *)(iVar5 + 0x128) = fVar4;
        *(f32 *)(iVar5 + 300) = pMVar13[iVar6].pos.w;
        fVar7 = pMVar13[iVar6].transform.v0.y * DAT_00764b90;
        fVar8 = pMVar13[iVar6].transform.v0.z * DAT_00764b90;
        fVar9 = pMVar13[iVar6].transform.v2.y * DAT_00764b98;
        fVar10 = pMVar13[iVar6].transform.v2.z * DAT_00764b98;
        fVar11 = pMVar13[iVar6].transform.v1.y * DAT_00764b94;
        fVar12 = pMVar13[iVar6].transform.v1.z * DAT_00764b94;
        *(float *)(iVar5 + 0x120) =
             pMVar13[iVar6].transform.v1.x * DAT_00764b94 +
             pMVar13[iVar6].transform.v2.x * DAT_00764b98 +
             pMVar13[iVar6].transform.v0.x * DAT_00764b90 + fVar2;
        *(float *)(iVar5 + 0x124) = fVar11 + fVar9 + fVar7 + fVar3;
        *(float *)(iVar5 + 0x128) = fVar12 + fVar10 + fVar8 + fVar4;
        return;
      }
      if (cVar1 != '\0') {
        MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
      }
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(undefined4 *)(iVar5 + 0x138) = 0;
      *(undefined4 *)(iVar5 + 0x134) = 0;
      *(undefined4 *)(iVar5 + 0x130) = 0;
      return;
    }
    if (0xc < param_2) {
      return;
    }
  }
  else {
    if (0xf < param_2) {
      if (0x10 < param_2) {
        return;
      }
      if (cVar1 != '\0') {
        MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
      }
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(undefined4 *)(iVar5 + 0x138) = 0;
      *(undefined4 *)(iVar5 + 0x134) = 0;
      *(undefined4 *)(iVar5 + 0x130) = 0;
      return;
    }
    if (0xe < param_2) {
      return;
    }
  }
  if (cVar1 != '\0') {
    MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    param_2 = *(byte *)(param_1 + 0x20);
  }
  if (param_2 == 0xe) {
    *(undefined4 *)(iVar5 + 0x2c) = 0x41200000;
  }
  *(undefined4 *)(iVar5 + 0x13c) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  *(undefined4 *)(iVar5 + 0x130) = 0;
  if (*(char *)(param_1 + 0x20) == '\x0e') {
    *(undefined2 *)(iVar5 + 0x56) = 2;
  }
  return;
}


// 0x01dcc70 (0x164 bytes)
undefined8
M1140_001dcc70(MobyInstance *moby,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  longlong lVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  astruct_2 *pvVar1;
  astruct_1 *pVars;
  
  pvVar1 = (astruct_2 *)moby->pVar;
  iVar3 = PointInsideComplexPoly
                    (param_2.piece<4,4>(),
                     (Vec4 *)Splines[*(int *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4)]->
                             points,
                     Splines[*(int *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4)]->cnt);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    local_40 = *(undefined4 *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4);
    uVar1 = pvVar1->field335_0x158;
    if ((int)uVar1 < 3) {
      if (1 < (int)uVar1) {
        local_3c = pvVar1->field128_0x80;
        uVar2 = 4;
        local_38 = pvVar1->field129_0x84;
        local_34 = pvVar1->field130_0x88;
      }
    }
    else if ((int)uVar1 < 4) {
      local_3c = pvVar1->field128_0x80;
      uVar2 = 3;
      local_38 = pvVar1->field129_0x84;
    }
    lVar4 = ZEXT48(pvVar1) + ((ulonglong)pvVar1->field335_0x158 & 0x3fffffff) * 4;
    iVar3 = MB_SplineFindRouteNode
                      (0.2,&local_40,uVar2,(longlong)*(int *)((int)lVar4 + 0x70),lVar4,&moby->pos,
                       param_2.piece<4,4>(),&pvVar1->field_0x120);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// 0x01dcde8 (0x254 bytes)
undefined8 M1140_001dcde8(MobyInstance *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  double dVar12;
  double dVar13;
  Vec4 local_60;
  f32 local_50;
  f32 local_4c;
  float local_48;
  f32 local_44;
  
  iVar10 = 0;
  pvVar4 = param_1->pVar;
  pvVar11 = pvVar4;
  while (iVar9 = MB_IsPntInCuboid
                           ((Vec4 *)&param_1->pos,(longlong)*(int *)((int)pvVar11 + 0xf8)),
        iVar9 == 0) {
    iVar10 = iVar10 + 1;
    pvVar11 = (void *)((int)pvVar11 + 4);
    if (1 < iVar10) {
      return 0;
    }
  }
  fVar1 = (param_1->pos).y;
  fVar5 = param_2[1] - fVar1;
  fVar2 = (param_1->pos).x;
  fVar6 = *param_2 - fVar2;
  fVar3 = (param_1->pos).z;
  fVar7 = param_2[2] - fVar3;
  local_60.w = param_2[3];
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  local_60.y = fVar5;
  local_60.x = fVar6;
  local_60.z = fVar7;
  if ((4.0 < fVar8) &&
     (local_60.y = 0.0, local_60.x = local_60.y, local_60.z = local_60.y, fVar8 != 0.0)) {
    fVar8 = 4.0 / fVar8;
    local_60.y = fVar5 * fVar8;
    local_60.x = fVar6 * fVar8;
    local_60.z = fVar7 * fVar8;
  }
  local_60.x = local_60.x + fVar2;
  local_60.y = local_60.y + fVar1;
  local_60.z = local_60.z + fVar3;
  iVar10 = PointInsideComplexPoly
                     (&local_60,
                      (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                              *(int *)((int)pvVar4 + 0x158) * 4 + 0x60)]->points,
                      Splines[*(int *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x158) * 4 + 0x60)]->cnt
                     );
  if (iVar10 == 0) {
    return 0;
  }
  local_60.z = local_60.z + 5.0;
  dVar12 = (double)GetGroundZNoWater(&local_60);
  dVar13 = (double)(param_1->pos).z;
  if (ABS((float)(dVar12 - dVar13)) <= 0.5) {
    return 0;
  }
  local_50 = (param_1->pos).x;
  local_4c = (param_1->pos).y;
  local_44 = (param_1->pos).w;
  local_48 = (float)(dVar13 + 0.15000000596046448);
  local_60.z = (float)(dVar12 + 0.15000000596046448);
  iVar10 = CollLine(&local_50,&local_60,2,param_1,0);
  if (iVar10 == 0) {
    return 0;
  }
  *param_2 = local_60.x;
  param_2[2] = (float)dVar12;
  param_2[1] = local_60.y;
  param_2[3] = local_60.w;
  return 1;
}


// 0x01dd040 (0x1a0 bytes)
ulonglong M1140_CloseToPuffoid(MobyInstance *moby)

{
  ushort uVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  MobyInstance *pMVar8;
  undefined4 uVar9;
  int iVar10;
  short sVar12;
  ushort *puVar11;
  int iVar13;
  double dVar14;
  
  iVar10 = 0;
  pvVar2 = moby->pVar;
  uVar9 = 0;
  iVar13 = 0;
  dVar14 = 10.0;
  do {
    sVar12 = (short)*(undefined4 *)
                     ((int)pvVar2 + iVar13 + *(int *)((int)pvVar2 + 0x158) * 0x10 + 0x90);
    if ((sVar12 < 0) || (g_NumMobyGroups < sVar12)) break;
    puVar11 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)sVar12 << 2));
    if (puVar11 != (ushort *)0x0) {
      do {
        uVar6 = *puVar11 & 0x7fff;
        pMVar8 = g_MobyInstance + uVar6;
        if ((pMVar8->state < 0x80) &&
           (((pMVar8->oClass != PUFFOID || (iVar7 = MB_isSpecificState(pMVar8), iVar7 == 0)) &&
            (fVar3 = (moby->pos).y - g_MobyInstance[uVar6].pos.y,
            fVar4 = (moby->pos).x - g_MobyInstance[uVar6].pos.x,
            fVar5 = (moby->pos).z - g_MobyInstance[uVar6].pos.z, uVar9 = 1,
            (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < dVar14)))) {
          return 2;
        }
        uVar1 = *puVar11;
        puVar11 = puVar11 + 1;
      } while (-1 < (short)uVar1);
    }
    iVar10 = iVar10 + 1;
    iVar13 = iVar13 + 4;
  } while (iVar10 < 4);
  return (ulonglong)(LZCOUNT(uVar9) << 0x20) >> 0x25 ^ 1;
}


// 0x01dd210 (0x123c bytes)
// strings: 0096c165: 'None'

void M1140_001dd210(MobyInstance *moby,undefined8 param_2,undefined8 param_3)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Cuboid *pCVar16;
  Cuboid *pCVar17;
  int iVar19;
  int iVar20;
  MobyInstance *pMVar21;
  undefined8 uVar18;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  pvVar9 = moby->pVar;
  iVar19 = M1140_CloseToPuffoid(moby);
  uVar1 = moby->state;
  if ((((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) && (iVar19 == 0)) {
    M1140_TransitionAnim(moby,6);
  }
  else {
    if (((uVar1 == '\x04') || (uVar1 == '\x05')) || (uVar1 == '\x06')) {
      local_5c = (moby->transform).v0.y;
      local_60 = (moby->transform).v0.x;
      fVar3 = (moby->transform).v0.z;
      local_58 = 0.0;
      fVar4 = SQRT(fVar3 * fVar3 + local_60 * local_60 + local_5c * local_5c);
      if (fVar4 == 0.0) {
        local_54 = (moby->transform).v0.w;
        local_5c = local_58;
        local_60 = local_58;
      }
      else {
        fVar4 = 3.0 / fVar4;
        local_58 = fVar3 * fVar4;
        local_54 = (moby->transform).v0.w;
        local_60 = local_60 * fVar4;
        local_5c = local_5c * fVar4;
      }
      local_60 = local_60 + (moby->pos).x;
      local_5c = local_5c + (moby->pos).y;
      local_58 = local_58 + (moby->pos).z;
      iVar20 = M1140_001dcde8(moby,&local_60);
      if (iVar20 != 0) {
        *(float *)((int)pvVar9 + 0x120) = local_60;
        *(float *)((int)pvVar9 + 0x124) = local_5c;
        *(float *)((int)pvVar9 + 0x128) = local_58;
        *(float *)((int)pvVar9 + 300) = local_54;
        dVar22 = (double)GetGroundZNoWater((int)pvVar9 + 0x120);
        param_3 = 3;
        *(float *)((int)pvVar9 + 0x128) = (float)dVar22;
        *(undefined4 *)((int)pvVar9 + 0x15c) = 3;
        M1140_TransitionAnim(moby,7);
      }
    }
    pCVar16 = Cuboids;
    bVar2 = moby->state;
    if (bVar2 < 8) {
      if (bVar2 == 7) {
        if ((moby->field43_0x70 & 2U) != 0) {
          M1140_TransitionAnim(moby,*(undefined4 *)((int)pvVar9 + 0x15c));
        }
      }
      else if (bVar2 == 6) {
        M1140_001dcc70(moby,ZEXT48(Cuboids) +
                            ((ulonglong)
                             *(uint *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0) &
                            0x1ffffff) * 0x80 + 0x30 & 0xffffffff,ZEXT48(Cuboids));
        pCVar16 = Cuboids;
        pMVar21 = g_MobyInstance;
        fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 1.0) {
          iVar19 = *(int *)((int)pvVar9 + 0x158);
          if (iVar19 < 2) {
            if (-1 < iVar19) {
              if (iVar19 < 1) {
                iVar19 = *(int *)((int)pvVar9 + 0xf0);
                fVar3 = g_MobyInstance[iVar19].pos.x;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar4 = pMVar21[iVar19].pos.y;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                fVar5 = pMVar21[iVar19].pos.z;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(f32 *)((int)pvVar9 + 300) = pMVar21[iVar19].pos.w;
                fVar6 = pMVar21[iVar19].transform.v0.y;
                fVar7 = pMVar21[iVar19].transform.v0.x;
                fVar8 = pMVar21[iVar19].transform.v0.z;
                fVar12 = 0.0;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00ef2710 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v1.y;
                fVar7 = pMVar21[iVar19].transform.v1.x;
                fVar8 = pMVar21[iVar19].transform.v1.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00764ba4 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar15 = DAT_00764ba0;
                fVar6 = pMVar21[iVar19].transform.v2.y;
                fVar7 = pMVar21[iVar19].transform.v2.x;
                fVar8 = pMVar21[iVar19].transform.v2.z;
                *(undefined4 *)((int)pvVar9 + 0x15c) = 8;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = fVar15 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (0.0 - fVar10 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                *(float *)((int)pvVar9 + 0x128) = fVar5 + fVar13;
                *(float *)((int)pvVar9 + 0x124) = fVar4 + fVar14;
                *(float *)((int)pvVar9 + 0x120) = fVar3 + fVar12;
                M1140_TransitionAnim(moby,7);
              }
              else {
                iVar19 = *(int *)((int)pvVar9 + 0xf4);
                fVar3 = g_MobyInstance[iVar19].pos.x;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar4 = pMVar21[iVar19].pos.y;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                fVar5 = pMVar21[iVar19].pos.z;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(f32 *)((int)pvVar9 + 300) = pMVar21[iVar19].pos.w;
                fVar6 = pMVar21[iVar19].transform.v0.y;
                fVar7 = pMVar21[iVar19].transform.v0.x;
                fVar8 = pMVar21[iVar19].transform.v0.z;
                fVar12 = 0.0;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00ef2710 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v1.y;
                fVar7 = pMVar21[iVar19].transform.v1.x;
                fVar8 = pMVar21[iVar19].transform.v1.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = -DAT_00764ba4 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v2.y;
                fVar7 = pMVar21[iVar19].transform.v2.x;
                fVar8 = pMVar21[iVar19].transform.v2.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00764ba0 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (0.0 - fVar10 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                *(float *)((int)pvVar9 + 0x128) = fVar5 + fVar13;
                *(float *)((int)pvVar9 + 0x124) = fVar4 + fVar14;
                *(float *)((int)pvVar9 + 0x120) = fVar3 + fVar12;
                pCVar16[*(int *)((int)pvVar9 + 0x110)].pos.z =
                     pCVar16[*(int *)((int)pvVar9 + 0x110)].pos.z + 500.0;
                *(undefined4 *)((int)pvVar9 + 0x15c) = 8;
                M1140_TransitionAnim(moby,7);
              }
            }
          }
          else if (iVar19 < 3) {
            M1140_TransitionAnim(moby,0xb);
          }
          else if (iVar19 < 4) {
            Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z + 500.0;
            M1140_TransitionAnim(moby,0xc);
          }
        }
      }
      else if (bVar2 == 5) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) ||
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 == 0)) ||
           (iVar19 == 2)) {
          M1140_TransitionAnim(moby,3);
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 4.0) {
            M1140_TransitionAnim(moby,4);
          }
        }
      }
      else if (bVar2 == 4) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) ||
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 == 0)) ||
           (iVar19 == 2)) {
          M1140_TransitionAnim(moby,3);
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (8.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
            M1140_TransitionAnim(moby,5);
          }
        }
      }
      else if (bVar2 == 3) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((6.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) &&
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 != 0)) &&
           (iVar19 == 1)) {
          M1140_TransitionAnim(moby,4);
        }
      }
      else if (bVar2 == 2) {
        if (g_gameMode != GAME_MODE_SCENE) {
          M1140_TransitionAnim(moby,3);
        }
      }
      else if (bVar2 == 1) {
        if (*(short *)((int)pvVar9 + 0x56) == 0) {
          if ((g_framesNotGrounded == 0) &&
             (iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20), iVar19 != 0)) {
            MB_SetPointAheadOfMoby(0x4004000000000000,moby);
            M1140_TransitionAnim(moby,2);
          }
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 6.0) {
            M1140_TransitionAnim(moby,3);
          }
        }
      }
      else if (bVar2 == 0) {
        FUN_004d3720(moby,(int)pvVar9 + 0x20);
        moby->updateDistance = -1;
        MB_SplineMarkCrossings((int)pvVar9 + 0x60,1,*(undefined4 *)((int)pvVar9 + 0x70));
        MB_SplineMarkCrossings((int)pvVar9 + 100,1,*(undefined4 *)((int)pvVar9 + 0x74));
        MB_SplineMarkCrossings((int)pvVar9 + 0x68,1,*(undefined4 *)((int)pvVar9 + 0x78));
        *(undefined4 *)((int)pvVar9 + 0x13c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x138) = 0;
        *(undefined4 *)((int)pvVar9 + 0x134) = 0;
        *(undefined4 *)((int)pvVar9 + 0x130) = 0;
        *(undefined4 *)((int)pvVar9 + 0x14c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x148) = 0;
        *(undefined4 *)((int)pvVar9 + 0x144) = 0;
        *(undefined4 *)((int)pvVar9 + 0x140) = 0;
        pCVar16 = Cuboids;
        if ((CHAR_ARRAY_0096c165[6] == '\0') ||
           (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x10c)] != -1)) {
          if (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x10c)] == -1) {
            *(undefined4 *)((int)pvVar9 + 0x158) = 3;
            pCVar16 = Cuboids;
            iVar19 = *(int *)((int)pvVar9 + 0xec);
            (moby->pos).x = Cuboids[iVar19].pos.x;
            (moby->pos).y = pCVar16[iVar19].pos.y;
            iVar20 = *(int *)((int)pvVar9 + 0x158);
            (moby->pos).z = pCVar16[iVar19].pos.z;
            (moby->pos).w = pCVar16[iVar19].pos.w;
            iVar19 = *(int *)((int)pvVar9 + iVar20 * 4 + 0xe0);
            pMVar21 = g_MobyInstance + *(int *)((int)pvVar9 + 0x104);
            (moby->rotation).x = pCVar16[iVar19].rot.x;
            (moby->rotation).y = pCVar16[iVar19].rot.y;
            (moby->rotation).z = pCVar16[iVar19].rot.z;
            (moby->rotation).w = pCVar16[iVar19].rot.w;
            M650_00401de4(pMVar21);
            M1140_TransitionAnim(moby,0xe);
            pMVar21 = g_MobyInstance + *(int *)((int)pvVar9 + 0xf0);
            *(undefined4 *)((int)pvVar9 + 0x2c) = 0x41200000;
            M1077_001b688c(pMVar21);
            M1077_001b688c(g_MobyInstance + *(int *)((int)pvVar9 + 0xf4));
          }
          else if ((g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x108)] != -1) ||
                  (iVar19 = *(int *)((int)pvVar9 + 0xe4),
                  fVar3 = g_heroPosition.y - Cuboids[iVar19].pos.y,
                  fVar4 = g_heroPosition.x - Cuboids[iVar19].pos.x,
                  fVar5 = g_heroPosition.z - Cuboids[iVar19].pos.z,
                  12.0 <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
            Cuboids[*(int *)((int)pvVar9 + 0x110)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x110)].pos.z - 500.0;
            pCVar16[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 pCVar16[*(int *)((int)pvVar9 + 0x114)].pos.z - 500.0;
            *(undefined4 *)((int)pvVar9 + 0x158) = 0;
            *(undefined4 *)((int)pvVar9 + 0x2c) = 0x40a00000;
            M1140_TransitionAnim(moby,1);
          }
          else {
            *(undefined4 *)((int)pvVar9 + 0x158) = 1;
            pCVar17 = Cuboids;
            (moby->pos).x = pCVar16[iVar19].pos.x;
            (moby->pos).y = pCVar16[iVar19].pos.y;
            (moby->pos).z = pCVar16[iVar19].pos.z;
            (moby->pos).w = pCVar16[iVar19].pos.w;
            iVar19 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
            (moby->rotation).x = pCVar17[iVar19].rot.x;
            (moby->rotation).y = pCVar17[iVar19].rot.y;
            (moby->rotation).z = pCVar17[iVar19].rot.z;
            (moby->rotation).w = pCVar17[iVar19].rot.w;
            M1140_TransitionAnim(moby,6);
            Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z - 500.0;
            M1077_001b688c(g_MobyInstance + *(int *)((int)pvVar9 + 0xf0));
          }
        }
        else {
          M1077_001b688c(g_MobyInstance + *(int *)((int)pvVar9 + 0xf0));
          M1077_001b688c(g_MobyInstance + *(int *)((int)pvVar9 + 0xf4));
          M650_00401de4(g_MobyInstance + *(int *)((int)pvVar9 + 0x104));
          DeleteMoby(moby);
        }
      }
    }
    else if (bVar2 == 0xf) {
      if (g_gameMode != GAME_MODE_SCENE) {
        MB_UnlockItem(6,1);
        memcard_Save(0,-1);
        Help_QueueMessage(STR_THE_O2_MASK_ALLOWS_0x2AF8,0x3a);
        DeleteMoby(moby);
      }
    }
    else if (bVar2 == 0xe) {
      if (((g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x118)] == -1) &&
          (g_heroState != TURRET_PLANE_UI)) &&
         (iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20), iVar19 != 0)) {
        MB_SetPointAheadOfMoby(0x4004000000000000,moby);
        M1140_TransitionAnim(moby,0xf);
      }
    }
    else if (bVar2 == 0xd) {
      if (g_gameMode != GAME_MODE_SCENE) {
        M650_00401de4(g_MobyInstance + *(int *)((int)pvVar9 + 0x104));
        M1140_TransitionAnim(moby,0xe);
      }
    }
    else if (bVar2 == 0xc) {
      *(undefined4 *)((int)pvVar9 + 0x2c) = 0x437f0000;
      iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20);
      if (iVar19 != 0) {
        SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x10c));
        g_MiscLevelFlags.field84_0x54 = 1;
        FUN_004d407c(moby,2);
        pCVar16 = Cuboids;
        iVar19 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
        iVar20 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
        (moby->pos).x = Cuboids[iVar19].pos.x;
        (moby->pos).y = pCVar16[iVar19].pos.y;
        (moby->pos).z = pCVar16[iVar19].pos.z;
        (moby->pos).w = pCVar16[iVar19].pos.w;
        (moby->rotation).x = pCVar16[iVar20].rot.x;
        (moby->rotation).y = pCVar16[iVar20].rot.y;
        (moby->rotation).z = pCVar16[iVar20].rot.z;
        (moby->rotation).w = pCVar16[iVar20].rot.w;
        FastEulerToMtx(&moby->transform,&moby->rotation);
        fVar3 = (moby->transform).v0.y;
        fVar4 = (moby->transform).v0.x;
        fVar5 = (moby->transform).v0.z;
        fVar6 = 0.0;
        dVar22 = (double)(moby->rotation).x;
        dVar28 = (double)(moby->rotation).y;
        dVar29 = (double)(moby->rotation).w;
        fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        if (fVar7 == 0.0) {
          fVar5 = (moby->transform).v0.w;
          fVar4 = fVar6;
          fVar3 = fVar6;
        }
        else {
          fVar7 = 2.0 / fVar7;
          fVar6 = fVar5 * fVar7;
          fVar5 = (moby->transform).v0.w;
          fVar4 = fVar4 * fVar7;
          fVar3 = fVar3 * fVar7;
        }
        dVar27 = (double)fVar5;
        dVar26 = (double)(fVar4 + (moby->pos).x);
        dVar25 = (double)(fVar3 + (moby->pos).y);
        dVar24 = (double)(fVar6 + (moby->pos).z);
        dVar23 = (double)FastWrapRot((moby->rotation).z,3.14159);
        g_SceneHeroWarpPos.x = (float)dVar26;
        g_SceneHeroWarpPos.y = (float)dVar25;
        g_SceneHeroWarpPos.z = (float)dVar24;
        g_SceneHeroWarpPos.w = (float)dVar27;
        g_SceneHeroWarpRot.x = (float)dVar22;
        g_SceneHeroWarpRot.y = (float)dVar28;
        g_SceneHeroWarpRot.z = (float)dVar23;
        g_SceneHeroWarpRot.w = (float)dVar29;
        g_SceneHeroWarpPending = 1;
        MB_SetPointAheadOfMoby(0x4004000000000000,moby);
        M1140_TransitionAnim(moby,0xd);
      }
    }
    else if (bVar2 == 0xb) {
      iVar19 = FUN_001e348c(g_MobyInstance + *(int *)((int)pvVar9 + 0x100));
      if (iVar19 != 0) {
        *(int *)((int)pvVar9 + 0x158) = *(int *)((int)pvVar9 + 0x158) + 1;
        M1140_TransitionAnim(moby,3);
      }
    }
    else if (bVar2 == 10) {
      fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        iVar19 = *(int *)((int)pvVar9 + 0x158) + 1;
        *(int *)((int)pvVar9 + 0x158) = iVar19;
        iVar19 = *(int *)((int)pvVar9 + iVar19 * 4 + 0xd0);
        *(float *)((int)pvVar9 + 0x120) = pCVar16[iVar19].pos.x;
        *(float *)((int)pvVar9 + 0x124) = pCVar16[iVar19].pos.y;
        *(float *)((int)pvVar9 + 0x128) = pCVar16[iVar19].pos.z;
        fVar3 = pCVar16[iVar19].pos.w;
        *(undefined4 *)((int)pvVar9 + 0x15c) = 4;
        *(float *)((int)pvVar9 + 300) = fVar3;
        M1140_TransitionAnim(moby,7);
      }
    }
    else if (bVar2 == 9) {
      iVar19 = FUN_001b6870(g_MobyInstance +
                            *(int *)((int)pvVar9 +
                                    (int)(((ulonglong)
                                           (LZCOUNT(*(undefined4 *)((int)pvVar9 + 0x158)) << 0x20)
                                           >> 0x25 ^ 1) << 2) + 0xf0));
      if (iVar19 != 0) {
        M1140_TransitionAnim(moby,10);
      }
    }
    else if ((bVar2 == 8) &&
            (fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124),
            fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120),
            SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 0.5)) {
      M1140_TransitionAnim(moby,9);
    }
  }
  return;
}


// 0x01de458 (0x1f4 bytes)
void M1140_001de458(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  GPiece<24> local_50;
  
  iVar2 = *(int *)(param_1 + 0x78);
  dVar4 = (double)*(float *)(param_1 + 0x10);
  uVar7 = 0x3fd3333340000000;
  dVar5 = (double)*(float *)(param_1 + 0x14);
  dVar6 = (double)*(float *)(param_1 + 0x18);
  MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,param_1,local_50);
  cVar1 = *(char *)(param_1 + 0x20);
  if ((((cVar1 == '\x04') || (cVar1 == '\x05')) || (cVar1 == '\x06')) ||
     ((cVar1 == '\a' && (*(int *)(iVar2 + 0x15c) == 3)))) {
    MB_PushOutOfSplineWalls
              (uVar7,*(undefined4 *)(iVar2 + *(int *)(iVar2 + 0x158) * 4 + 0x60));
    iVar3 = *(int *)(iVar2 + 0x158);
    if (iVar3 < 3) {
      if (1 < iVar3) {
        MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x80));
        MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x84));
        MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x88));
      }
    }
    else if (iVar3 < 4) {
      MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x80));
      MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x84));
    }
  }
  *(float *)(iVar2 + 0x140) = (float)((double)*(float *)(param_1 + 0x10) - dVar4);
  *(float *)(iVar2 + 0x144) = (float)((double)*(float *)(param_1 + 0x14) - dVar5);
  *(float *)(iVar2 + 0x148) = (float)((double)*(float *)(param_1 + 0x18) - dVar6);
  *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// 0x01de6a0 (0x708 bytes)
// inlined: FastAtan2 @0x1de7d0
void M1140_001de6a0(longlong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  MobyInstance *pMoby;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  f32 *val;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  MobyInstance *pMVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xe0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar12;
  puVar9[0x1e] = in_LR;
  puVar9[0x1b] = in_f31;
  puVar9[0x19] = unaff_r30;
  puVar9[0x1a] = unaff_r31;
  pMoby = (MobyInstance *)param_1;
  bVar1 = pMoby->state;
  pvVar6 = pMoby->pVar;
  uVar20 = ZEXT48(pvVar6);
  fVar2 = (pMoby->pos).x;
  fVar3 = (pMoby->pos).y;
  puVar9[0x18] = unaff_r29;
  puVar9[0x17] = unaff_r28;
  iVar14 = g_SpaceSceneFrame;
  if (3 < bVar1) {
    if (bVar1 < 0xb) {
      if (bVar1 < 8) {
        if (6 < bVar1) {
          iVar14 = MB_MayaFrameTrigger(9.0,pMoby);
          if (iVar14 != 0) {
            auVar24 = ZEXT416(0xffffffff);
            auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = loadVectorLeftIndexed(0x120,uVar20);
            auVar25 = loadVectorRightIndexed(0x130,uVar20);
            auVar27 = loadVectorLeftIndexed(0x10,param_1);
            fVar2 = (pMoby->pos).x;
            auVar26 = loadVectorLeftIndexed(0x124,uVar20);
            auVar25 = vectorSubtractFloatingPoint(auVar24 | auVar25,auVar27);
            auVar27 = loadVectorRightIndexed(0x134,uVar20);
            auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
            auVar24 = ZEXT416(0xffffffff);
            auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = ZEXT416(0xffffffff);
            auVar33 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = ZEXT416(0xffffffff);
            auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            uVar7 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x130,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar7;
            auVar24 = loadVectorLeftIndexed(0x14,param_1);
            fVar3 = (pMoby->pos).y;
            auVar26 = vectorSubtractFloatingPoint(auVar26 | auVar27,auVar24);
            uVar7 = *(undefined4 *)((int)pvVar6 + 300);
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar24 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x134,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar8;
            auVar27 = loadVectorLeftIndexed(0x18,param_1);
            *(undefined4 *)((int)pvVar6 + 0x13c) = uVar7;
            auVar24 = loadVectorLeftIndexed(0x34,0x1de64c);
            auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar28 = vectorMultiplyAddFloatingPoint
                                (auVar30,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 |
                                         auVar24 << 0x60,auVar28);
            auVar30 = loadVectorLeftIndexed(0x3c,0x1de64c);
            auVar24 = ZEXT416(0xffffffff);
            auVar33 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
            auVar29 = loadVectorLeftIndexed(0x128,uVar20);
            auVar28 = vectorConvertFromSignedFixedPointWord(auVar24,0);
            auVar24 = vectorReciprocalEstimateFloatingPoint(auVar28);
            fVar5 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
            auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar28,auVar30);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar24,auVar32,auVar33);
            auVar32 = loadVectorRightIndexed(0x138,uVar20);
            auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar24 = ZEXT416(0xffffffff);
            auVar36 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar27 = vectorSubtractFloatingPoint(auVar29 | auVar32,auVar27);
            auVar24 = ZEXT416(0xffffffff);
            auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar30);
            auVar32 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar29,auVar31);
            auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar30);
            fVar3 = (*(float *)((int)pvVar6 + 0x124) - fVar3) * fVar5;
            fVar5 = (*(float *)((int)pvVar6 + 0x120) - fVar2) * fVar5;
            auVar28 = vectorMultiplyAddFloatingPoint(auVar33,auVar24,auVar34);
            auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar28,auVar35);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar28,auVar36);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar28,auVar32);
            auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x130,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar7;
            uVar7 = storeVectorElementWordIndexed
                              (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x134,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar7;
            uVar7 = storeVectorElementWordIndexed
                              (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x138,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x138U & 0xfffffffc) = uVar7;
            dVar23 = (double)MB_computeLobVelocity
                                       ((double)SQRT(fVar5 * fVar5 + fVar3 * fVar3),
                                        (double)(g_FrameTimeSq * -10.8),param_1 + 0x10,uVar20 + 0x120
                                        ,0x130,0x138,0);
            *(float *)((int)pvVar6 + 0x138) = (float)dVar23;
            pMoby->unk58 = 0.6666667;
          }
          fVar2 = *(float *)((int)pvVar6 + 0x138);
          if (0.0 < SQRT(fVar2 * fVar2 +
                         *(float *)((int)pvVar6 + 0x130) * *(float *)((int)pvVar6 + 0x130) +
                         *(float *)((int)pvVar6 + 0x134) * *(float *)((int)pvVar6 + 0x134))) {
            *(float *)((int)pvVar6 + 0x138) = -(g_FrameTimeSq * 10.8 - fVar2);
          }
          iVar14 = MB_MayaFrameTrigger(29.0,pMoby);
          if (iVar14 == 0) {
            return;
          }
          *(undefined4 *)((int)pvVar6 + 0x13c) = 0;
          *(undefined4 *)((int)pvVar6 + 0x138) = 0;
          *(undefined4 *)((int)pvVar6 + 0x134) = 0;
          *(undefined4 *)((int)pvVar6 + 0x130) = 0;
          pMoby->unk58 = 1.0;
          return;
        }
      }
      else if (bVar1 == 9) {
        pMVar19 = g_MobyInstance +
                  *(int *)((int)pvVar6 +
                          (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar6 + 0x158)) << 0x20)
                                 >> 0x25 ^ 1) << 2) + 0xf0);
        MB_PlatformGetDelta
                  (param_1,pMVar19,&DAT_00764b80,&DAT_00ef2700,param_1 + 0x10,param_1 + 0x40);
        iVar14 = FUN_001b67d0(pMVar19);
        if (iVar14 == 0) {
          return;
        }
        if (pMoby->animationId == '\x05') {
          return;
        }
        puVar9[0x14] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar9 + 0xa4));
        return;
      }
      fVar2 = *(float *)((int)pvVar6 + 0x120) - fVar2;
      fVar3 = *(float *)((int)pvVar6 + 0x124) - fVar3;
      val = &(pMoby->rotation).z;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0xe) = fVar2;
      *(float *)((int)puVar9 + 0x74) = fVar3;
      *(float *)(puVar9 + 0xf) = fVar4 - fVar5;
      dVar23 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      dVar22 = dVar23;
      if (0.0 < fVar2) {
        lVar17 = uVar12 - 0xd0;
        lVar16 = uVar12 - 100;
        lVar15 = uVar12 - 0x54;
        lVar21 = 2;
        fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar9 + 0x11) = fVar2;
        *(float *)(puVar9 + 0x10) = fVar2;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)((int)puVar9 + 0x7c) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
          iVar14 = (int)lVar16;
          lVar17 = lVar17 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar17 = uVar12 - 100;
        pfVar18 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar15 = lVar17;
        lVar16 = lVar13;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar2;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar15 = 2;
        do {
          iVar14 = (int)lVar13;
          iVar10 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar14 + 0x7c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar3);
      }
      OrganicDeltAng
                ((float)dVar22,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 25.132742,
                 g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar6 + 0x150));
      fVar5 = g_FrameTimeSq;
      fVar2 = (pMoby->rotation).z + 1.5707963;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = fVar4 * fVar4;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar2 * fVar3;
      *(float *)((int)pvVar6 + 0x130) =
           (fVar2 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
           *(float *)((int)pvVar6 + 0x154);
      fVar2 = (pMoby->rotation).z;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = fVar4 * fVar4;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar2 * fVar3;
      *(float *)((int)pvVar6 + 0x134) =
           (fVar2 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
           *(float *)((int)pvVar6 + 0x154);
      dVar22 = -(double)(fVar5 * 20.0 - *(float *)((int)pvVar6 + 0x148));
      *(float *)((int)pvVar6 + 0x138) = (float)dVar22;
      if (dVar23 < dVar22) {
        *(undefined4 *)((int)pvVar6 + 0x138) = 0;
      }
    }
    else if (((bVar1 == 0xd) && (g_SceneId == 1)) &&
            (puVar9[0x14] = (longlong)(int)(animationSpeed * 2000.5),
            iVar14 == *(int *)((int)puVar9 + 0xa4))) {
      M650_00401de4(g_MobyInstance + *(int *)((int)pvVar6 + 0x104));
    }
  }
  return;
}


// 0x01dedb0 (0x188 bytes)
// strings: 0096c074: 'None'

/* Moby 114 */

void M1140_001dedb0(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar5 = 0;
    puVar6 = &DAT_0095cd50;
    sVar4 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar6[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar6[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar4 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < sVar4);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 38.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x1e';
  }
  M1140_001de6a0(moby);
  M1140_001de458(moby);
  M1140_001dd210(moby);
  M1140_001dc1f0(moby);
  return;
}


// 0x01def38 (0x14 bytes)
void M1140_001def38(void)

{
  DAT_00764c10 = 0x10000;
  return;
}


// 0x01def50 (0x4 bytes)
/* Moby 1140 */

MobyInstance * UpdateMoby_1140(MobyInstance *moby)

{
  return moby;
}



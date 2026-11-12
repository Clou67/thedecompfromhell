// game/update/moby230.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x2fda40-0x30012c
#include <stdlib.h>
#include "game/update/moby230.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby186.h"
#include "idol/fastfunc.h"

// 0x02fda40 (0x40 bytes)
void M230_002fda40(int param_1)

{
  float fVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x17) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    *(undefined1 *)(param_1 + 0x20) = 2;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(float *)(param_1 + 0x2c) = fVar1 * 1.5;
  }
  return;
}


// 0x02fda80 (0x14 bytes)
void M230_002fda80(void)

{
  DAT_007ff218 = 0x10000;
  return;
}


// 0x02fdab8 (0x61c bytes)
// inlined: FastAtan2 @0x2fdbbc, FastAtan2 @0x2fdd58
void M230_002fdab8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x240;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x4a] = in_LR;
  puVar10[0x46] = in_f30;
  puVar10[0x47] = in_f31;
  puVar10[0x45] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x44] = unaff_r30;
  puVar10[0x43] = unaff_r29;
  puVar10[0x42] = unaff_r28;
  puVar10[0x41] = unaff_r27;
  puVar10[0x40] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x1a4) = fVar3;
      *(float *)(puVar10 + 0x35) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x35) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x1a4));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x230;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x3b) = fVar3;
        *(float *)(puVar10 + 0x3a) = fVar3;
        *(float *)((int)puVar10 + 0x1d4) = fVar3;
        *(float *)((int)puVar10 + 0x1cc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x3a) = *(float *)(puVar10 + 0x3a) * fVar6;
        *(float *)((int)puVar10 + 0x1d4) = *(float *)((int)puVar10 + 0x1d4) * fVar3;
        *(float *)(puVar10 + 0x3b) = *(float *)(puVar10 + 0x3b) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1cc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
      *(float *)(puVar10 + 0x34) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x34) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x230;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x37) = fVar2;
        *(float *)(puVar10 + 0x36) = fVar2;
        *(float *)((int)puVar10 + 0x1b4) = fVar2;
        *(float *)((int)puVar10 + 0x1ac) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x36) = *(float *)(puVar10 + 0x36) * fVar5;
        *(float *)((int)puVar10 + 0x1b4) = *(float *)((int)puVar10 + 0x1b4) * fVar2;
        *(float *)(puVar10 + 0x37) = *(float *)(puVar10 + 0x37) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x19c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x1ac) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x1ac)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      iVar11 = worldUpdateTime;
      puVar10[0x3e] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 500)) *
                                           *(int *)((int)puVar10 + 500));
      dVar26 = (double)FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0;
      *(float *)((int)puVar10 + 0x84) = (float)(dVar26 * dVar25);
      FastEulerToMtx1(uVar14 - 0x170,uVar14 - 0x1c0);
      lVar19 = uVar14 - 0x1b0;
      FastEulerToMtx1(lVar19,uVar14 - 0x1d0);
      FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x2a) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xcc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x154) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x2b) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x15c) = 0x80808080;
      uVar15 = GetEffectTex((ZERO_MASK((uVar20 & 1))) + 0x12);
      puVar10[0x31] = uVar15;
      uVar15 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar10[0x32] = uVar15;
      uVar15 = FUN_00502f08(0,0,0,0,0,0);
      puVar10[0x30] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x33] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(undefined4 *)(puVar10 + 0x22) = 0xbf800000;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(float *)(puVar10 + 0x24) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(float *)(puVar10 + 0x25) = (float)dVar22;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x26) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(float *)(puVar10 + 0x28) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x144) = 0;
      *(undefined4 *)(puVar10 + 0x29) = 0xbf800000;
      *(float *)((int)puVar10 + 0x14c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(float *)((int)puVar10 + 0x164) = (float)dVar22;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(float *)((int)puVar10 + 0x16c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2e) = 0;
      *(undefined4 *)((int)puVar10 + 0x174) = 0;
      *(float *)(puVar10 + 0x2f) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x17c) = 0;
      FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}


// 0x02fe0f0 (0x244 bytes)
void M230_002fe0f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_r7;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  GPiece<32> local_80;
  
  iVar1 = CollHotspot();
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 < 0) {
        return;
      }
    }
    else if (iVar1 < 3) {
      return;
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 != 8) {
      return;
    }
  }
  else if (0xd < iVar1) {
    return;
  }
  iVar1 = 0;
  dVar7 = -0.30000001192092896;
  dVar8 = 0.30000001192092896;
  dVar9 = 100000.0;
  dVar10 = 800000.0;
  dVar11 = 0.5;
  uVar12 = 0;
  do {
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar2 = rand();
    iVar3 = rand();
    uVar4 = rand();
    uVar6 = MB_randRangeFloat((float)dVar9,(float)dVar10);
    iVar5 = rand();
    SpawnPart_5
              (uVar6,uVar12,local_80,(longlong)iVar2 + 0x30U & 0x3f,(longlong)iVar3 + 0x20U & 0x3f,
               uVar4 & 0x2f,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)(iVar5 % 0x28 + 10) + dVar11)));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  *(undefined1 *)(param_1 + 0x20) = 4;
  return;
}


// 0x02fe338 (0x19c bytes)
void FUN_002fe338(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  MobyInstance *pMVar5;
  ulonglong uVar6;
  
  pMVar5 = CreateMoby(BOMB_00E6);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    puVar3 = (undefined4 *)pMVar5->pVar;
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar5->drawDistance = 0xff;
    (pMVar5->pos).w = fVar1;
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    uVar2 = param_3[2];
    puVar3[0xc] = param_1;
    puVar3[2] = uVar2;
    uVar2 = param_3[3];
    puVar3[0xd] = 0;
    puVar3[3] = uVar2;
    *(undefined2 *)(puVar3 + 0xe) = 0;
    pMVar5->scale = pMVar5->pClass->gScale * 0.01;
    if ((g_heroInvisible != '\0') || (DAT_0096bd8f != '\0')) {
      pMVar5->modeBits = pMVar5->modeBits | (UNK_40|DISABLED);
    }
    uVar6 = (ulonglong)DAT_010bb478;
    iVar4 = (&DAT_007ff23c)[DAT_010bb478];
    if (((iVar4 != 0) && (*(short *)(iVar4 + 0xa6) == 0xe6)) &&
       (*(char *)(iVar4 + 0x20) != -3 && *(char *)(iVar4 + 0x20) != -2)) {
      *(undefined1 *)(iVar4 + 0x20) = 4;
      uVar6 = (ulonglong)DAT_010bb478;
    }
    *(MobyInstance **)((int)&DAT_007ff23c + (int)(uVar6 << 2)) = pMVar5;
    DAT_010bb478 = ((int)uVar6 + 1) % 0x14;
  }
  return;
}


// 0x02fe4e8 (0x22c bytes)
void FUN_002fe4e8(undefined4 *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  GPiece<16> local_30;
  
  iVar11 = g_standingOnMoby;
  pfVar1 = *(float **)(param_2 + 0x78);
  *pfVar1 = *param_3;
  pfVar1[1] = param_3[1];
  pfVar1[2] = param_3[2];
  pfVar1[3] = param_3[3];
  if ((iVar11 != 0) && (iVar11 = MB_GetPlatformParent(), iVar11 != 0)) {
    *pfVar1 = *pfVar1 + DAT_00969de0;
    pfVar1[1] = pfVar1[1] + DAT_00969de4;
    pfVar1[2] = pfVar1[2] + DAT_00969de8;
  }
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  pMVar7 = g_heroMobyPtr;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar11 = CollLine(local_30,param_1,0,pMVar7,0);
  fVar8 = g_CollOutput.ip.x;
  if (iVar11 != 0) {
    *(float *)(param_2 + 0x10) = g_CollOutput.ip.x;
    fVar9 = g_CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = g_CollOutput.ip.y;
    fVar10 = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = g_CollOutput.ip.w;
    fVar3 = 0.0;
    fVar2 = SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                 g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar6 = (DAT_0071f418 * 9.0 - DAT_0071f418 * 0.1) / fVar2;
    fVar4 = fVar3;
    if (0.0 - fVar2 < 0.0) {
      fVar4 = g_CollOutput.normal.z * fVar6;
    }
    fVar5 = fVar3;
    if (0.0 - fVar2 < 0.0) {
      fVar5 = g_CollOutput.normal.y * fVar6;
    }
    if (0.0 - fVar2 < 0.0) {
      fVar3 = g_CollOutput.normal.x * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar4 = g_CollOutput.normal.z * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar5 = g_CollOutput.normal.y * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar3 = g_CollOutput.normal.x * fVar6;
    }
    *(float *)(param_2 + 0x18) = fVar10 + fVar4;
    *(float *)(param_2 + 0x14) = fVar9 + fVar5;
    *(float *)(param_2 + 0x10) = fVar8 + fVar3;
    FastVecReflect(pfVar1,pfVar1,0xa10980);
    *pfVar1 = *pfVar1 * 0.6;
    pfVar1[1] = pfVar1[1] * 0.6;
    pfVar1[2] = pfVar1[2] * 0.6;
  }
  *(undefined1 *)(param_2 + 0x20) = 2;
  return;
}


// 0x02fe758 (0xa84 bytes)
// inlined: FastAtan2 @0x2fe8bc, FastAtan2 @0x2feab4
undefined8 M230_002fe758(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  PlayerState PVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar23;
  undefined8 uVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar29 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar29;
  *puVar13 = uVar20;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x25] = unaff_r25;
  puVar13[0x2b] = unaff_r31;
  puVar13[0x26] = unaff_r26;
  puVar13[0x28] = unaff_r28;
  bVar17 = false;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x24] = unaff_r24;
  PVar19 = g_heroState;
  puVar13[0x29] = unaff_r29;
  puVar13[0x27] = unaff_r27;
  if ((PVar19 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar4 = (param_2->pos).x;
  fVar5 = (param_2->pos).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  fVar6 = (param_2->pos).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar7 = (param_2->pos).w;
  uVar3 = param_2->state;
  *(f32 *)(puVar13 + 0x11) = fVar6;
  *(f32 *)((int)puVar13 + 0x8c) = fVar7;
  fVar2 = DAT_0096a350;
  if (uVar3 == '\x01') {
    fVar8 = ABS(DAT_0096a350);
    fVar10 = ABS(DAT_0096a354);
    dVar42 = -0.3619680106639862;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar13 + 0x19) = fVar8 - fVar10;
    dVar33 = 0.0;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar8;
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar10;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar30 = dVar33;
    if (0.0 < fVar2) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xb4;
      lVar25 = uVar20 - 0xc4;
      lVar28 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar10 = fVar2 * fVar2;
      *(float *)(puVar13 + 0x1f) = fVar2;
      *(float *)(puVar13 + 0x1e) = fVar2;
      *(float *)((int)puVar13 + 0xf4) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar2;
      fVar2 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar2;
      *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar2 * fVar10;
      do {
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xc4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar2 = *pfVar26;
        fVar10 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xec) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xec)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar8);
    }
    dVar30 = (double)FastWrapRot(-0.361968,(float)dVar30);
    fVar8 = DAT_0096a350;
    dVar41 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar32 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar30 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    *(float *)((int)puVar13 + 0xc4) = (float)(dVar32 - dVar30);
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar9 = fVar10;
    }
    fVar16 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar16 * fVar16 * fVar9;
    fVar10 = fVar16 * fVar2;
    dVar31 = dVar32;
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar30 = dVar32;
    }
    *(float *)(puVar13 + 0xe) =
         (fVar16 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar33 < dVar31) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xd4;
      lVar25 = uVar20 - 0xe4;
      lVar28 = 2;
      fVar8 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x1b) = fVar8;
      *(float *)(puVar13 + 0x1a) = fVar8;
      *(float *)((int)puVar13 + 0xd4) = fVar8;
      *(float *)((int)puVar13 + 0xcc) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar9;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar8;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar8 * fVar8;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar8 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0xcc)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + dVar34) * fVar10 + fVar2);
    }
    dVar34 = (double)FastWrapRot((float)dVar42,(float)dVar33);
    fVar2 = g_heroPosition.y;
    dVar33 = (double)(float)(dVar41 - dVar34);
    if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
      dVar33 = dVar34;
    }
    dVar30 = (double)(float)(dVar40 - dVar34);
    if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
      dVar30 = dVar33;
    }
    fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar13 + 0xf) = 0;
    dVar32 = (double)(float)(dVar30 * dVar30);
    *(float *)(puVar13 + 0xe) = fVar10;
    fVar8 = g_heroPosition.z;
    dVar33 = (double)*param_1;
    dVar42 = (double)param_1[1];
    dVar34 = (double)param_1[2];
    dVar41 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar40 = (double)(float)(dVar32 * dVar41);
    bVar1 = g_heroStateType == 0xf;
    fVar10 = (float)((double)(float)((double)(float)(dVar32 * dVar40) * dVar36 +
                                    (double)(float)(dVar40 * dVar37 +
                                                   (double)(float)(dVar41 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar32 * dVar30) * dVar39 + dVar30)))) * dVar35);
    *(float *)((int)puVar13 + 0x74) = fVar10;
    iVar23 = g_standingOnMoby;
    *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
    *(float *)(puVar13 + 0xf) = fVar8 + 0.39082;
    if (bVar1) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    if (((iVar23 != 0) && (iVar23 = MB_GetPlatformParent(), iVar23 != 0)) &&
       (param_3 != 0)) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x30,0x2fe714);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xc0,lVar29);
    *(undefined4 *)(puVar13 + 0x18) = uVar12;
  }
  else {
    sVar11 = *(short *)(param_1 + 0xe);
    dVar33 = (double)*param_1;
    iVar23 = *(int *)((int)param_1[0xc] + 0x78);
    *(f32 *)(puVar13 + 0xe) = fVar4;
    *(f32 *)((int)puVar13 + 0x74) = fVar5;
    *(f32 *)(puVar13 + 0xf) = fVar6;
    *(f32 *)((int)puVar13 + 0x7c) = fVar7;
    dVar42 = (double)param_1[1];
    dVar34 = (double)param_1[2];
    *(int *)(puVar13 + 0x18) = (int)sVar11;
    if (*(int *)(iVar23 + 0x50) != 0) {
      *(undefined2 *)((int)param_1 + 0x3a) = 1;
    }
  }
  pMVar18 = g_heroMobyPtr;
  dVar30 = 0.5;
  dVar34 = -(double)(float)((double)g_FrameTime * 0.5 - dVar34);
  *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar13 + 0x94) = (pMVar18->pos).y;
  *(f32 *)(puVar13 + 0x13) = (pMVar18->pos).z;
  fVar4 = (pMVar18->pos).w;
  *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
  *(f32 *)((int)puVar13 + 0x9c) = fVar4;
  iVar23 = CollLine(uVar20 - 0x120,uVar20 - 0x140,0x10,pMVar18,0);
  if (iVar23 != 0) {
    iVar23 = CollHotspot();
    fVar2 = animationSpeed;
    if ((iVar23 != 0) || (0.0 < dVar34)) {
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) {
        if (0 < g_CollOutput.poly) {
          bVar17 = true;
          param_1[4] = g_CollOutput.ip.x;
          param_1[5] = g_CollOutput.ip.y;
          param_1[6] = g_CollOutput.ip.z;
          param_1[7] = g_CollOutput.ip.w;
        }
      }
      else {
        if ((g_CollOutput.pMoby == g_heroMobyPtr) ||
           (g_CollOutput.pMoby == (MobyInstance *)param_1[0xc])) {
          puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
          puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
          if (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
              *(int *)(puVar13 + 0x18)) goto LAB_002feeac;
        }
        pMVar18 = g_CollOutput.pMoby;
        *(undefined4 *)(puVar13 + 0x14) = 0;
        *(undefined4 *)((int)puVar13 + 0xa4) = 0;
        *(undefined4 *)(puVar13 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar13 + 0xac) = 0;
        fVar2 = (pMVar18->pos).x;
        param_1[4] = fVar2;
        fVar10 = (pMVar18->pos).y;
        param_1[5] = fVar10;
        fVar8 = (pMVar18->pos).z;
        param_1[6] = fVar8;
        fVar9 = (pMVar18->pos).w;
        *(float *)(puVar13 + 0x14) = fVar2;
        param_1[7] = fVar9;
        *(float *)((int)puVar13 + 0xa4) = fVar10;
        *(float *)(puVar13 + 0x15) = (float)(dVar30 + (double)fVar8);
        GetGroundZ(dVar30,uVar20 - 0x110,0);
        bVar17 = true;
      }
    }
  }
LAB_002feeac:
  do {
    while( true ) {
      do {
        do {
          iVar23 = FastDecTimerS32(uVar20 - 0xf0);
          if (iVar23 != 0 || bVar17) goto LAB_002ff060;
          fVar2 = *(float *)(puVar13 + 0xe);
          fVar10 = *(float *)((int)puVar13 + 0x74);
          fVar8 = *(float *)(puVar13 + 0xf);
          lVar29 = 10;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
          *(float *)(puVar13 + 0x10) = fVar2;
          *(float *)((int)puVar13 + 0x84) = fVar10;
          *(float *)(puVar13 + 0x11) = fVar8;
          do {
            fVar2 = (float)((double)fVar2 + dVar33);
            fVar10 = (float)((double)fVar10 + dVar42);
            fVar8 = (float)((double)fVar8 + dVar34);
            dVar34 = -(double)(float)((double)DAT_0071f418 * 9.0 - dVar34);
            *(float *)(puVar13 + 0xe) = fVar2;
            *(float *)((int)puVar13 + 0x74) = fVar10;
            *(float *)(puVar13 + 0xf) = fVar8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          iVar23 = CollLine(uVar20 - 0x130,uVar20 - 0x140,0x10,param_2,0);
        } while (iVar23 == 0);
        iVar23 = CollHotspot();
        fVar2 = animationSpeed;
      } while ((iVar23 == 0) && (0.0 < dVar34));
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && (g_CollOutput.poly < 1)) break;
      if (0 < g_CollOutput.poly) {
        param_1[4] = g_CollOutput.ip.x;
        param_1[5] = g_CollOutput.ip.y;
        param_1[6] = g_CollOutput.ip.z;
        param_1[7] = g_CollOutput.ip.w;
        goto LAB_002ff060;
      }
    }
    if ((g_CollOutput.pMoby != g_heroMobyPtr) && (g_CollOutput.pMoby != (MobyInstance *)param_1[0xc]))
    break;
    puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
    puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
  } while (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
           *(int *)(puVar13 + 0x18));
  pMVar18 = g_CollOutput.pMoby;
  *(undefined4 *)(puVar13 + 0x16) = 0;
  *(undefined4 *)((int)puVar13 + 0xb4) = 0;
  *(undefined4 *)(puVar13 + 0x17) = 0x3f000000;
  *(undefined4 *)((int)puVar13 + 0xbc) = 0;
  fVar2 = (pMVar18->pos).x;
  param_1[4] = fVar2;
  fVar10 = (pMVar18->pos).y;
  param_1[5] = fVar10;
  fVar8 = (pMVar18->pos).z;
  param_1[6] = fVar8;
  fVar9 = (pMVar18->pos).w;
  *(float *)(puVar13 + 0x16) = fVar2;
  param_1[7] = fVar9;
  *(float *)((int)puVar13 + 0xb4) = fVar10;
  *(float *)(puVar13 + 0x17) = (float)(dVar30 + (double)fVar8);
  GetGroundZ(dVar30,uVar20 - 0x100,0);
LAB_002ff060:
  if ((*(int *)(puVar13 + 0x18) == 0) ||
     ((param_3 == 0 &&
      ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar23 = MB_GetPlatformParent(), iVar23 == 0)))))) {
    uVar22 = 0;
  }
  else {
    if (((param_3 != 2) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar23 = MB_GetPlatformParent(), iVar23 == 0)) {
      RegisterFuncForMoby(&PTR_M230_002fdab8_0070b940,param_2);
    }
    param_1[8] = g_CollOutput.normal.x;
    param_1[9] = g_CollOutput.normal.y;
    param_1[10] = g_CollOutput.normal.z;
    param_1[0xb] = g_CollOutput.normal.w;
    fVar9 = GameCamera.posX;
    fVar2 = param_1[4] - GameCamera.posX;
    fVar10 = param_1[5] - GameCamera.posY;
    *(float *)((int)puVar13 + 0x8c) = param_1[7];
    uVar22 = 1;
    fVar8 = param_1[6] - GameCamera.posZ;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    fVar2 = fVar2 * 0.95;
    fVar10 = fVar10 * 0.95;
    fVar8 = fVar8 * 0.95;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    *(float *)(puVar13 + 0x11) = fVar8;
    param_1[4] = fVar2 + fVar9;
    param_1[5] = fVar10 + GameCamera.posY;
    param_1[6] = fVar8 + GameCamera.posZ;
  }
  return uVar22;
}


// 0x02ff240 (0xeec bytes)
/* Moby 230 */

void UpdateMoby_230(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  f32 fVar8;
  MobyClass *pMVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  MobyModeBit MVar22;
  int iVar21;
  int iVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar24;
  ulonglong unaff_r30;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar26 = uVar18 - 0x150;
  puVar14 = (ulonglong *)lVar26;
  *puVar14 = uVar18;
  puVar14[0x2c] = in_LR;
  puVar14[0x22] = in_f24;
  puVar14[0x23] = in_f25;
  puVar14[0x24] = in_f26;
  puVar14[0x25] = in_f27;
  puVar14[0x26] = in_f28;
  puVar14[0x27] = in_f29;
  puVar14[0x28] = in_f30;
  puVar14[0x29] = in_f31;
  puVar14[0x21] = unaff_r31;
  puVar14[0x20] = unaff_r30;
  puVar14[0x1f] = unaff_r29;
  puVar14[0x1e] = unaff_r28;
  puVar14[0x1d] = unaff_r27;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar7 = (float *)moby->pVar;
  uVar25 = ZEXT48(pfVar7);
  if (pfVar7 == (float *)0x0) {
    return;
  }
  fVar8 = (moby->pos).x;
  uVar11 = (int)fVar8 >> 0x1f;
  iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11;
  if ((((iVar20 < 0x40000000) || (0x447f4000 < iVar20)) ||
      (fVar8 = (moby->pos).y, uVar11 = (int)fVar8 >> 0x1f,
      iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11, 0x447f4000 < iVar20 || iVar20 < 0x40000000)) ||
     ((fVar8 = (moby->pos).z, uVar11 = (int)fVar8 >> 0x1f,
      iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11, iVar20 < 0x40000000 || (0x447f4000 < iVar20))))
  {
    DeleteMoby(moby);
    return;
  }
  if ((g_heroInvisible == '\0') || (1 < moby->state)) {
    MVar22 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar22 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar22;
  if (((*(short *)((int)pfVar7[0xc] + 0xa6) == 0xe5) && (*(short *)((int)pfVar7 + 0x3a) == 0)) &&
     (0.0 < SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]))) {
    if ((g_standingOnMoby == 0) || (iVar20 = MB_GetPlatformParent(), iVar20 == 0)) {
      M230_002fe758(uVar25,lVar19,1);
    }
    else {
      iVar20 = M230_002fe758(uVar25,lVar19,0);
      if (iVar20 == 0) {
        M230_002fe758(uVar25,lVar19,2);
      }
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    lVar26 = lVar19 + 0x10;
    moby->alpha = moby->alpha + -4;
    moby->scale = moby->scale * 0.92;
    dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar26,0);
    if ((dVar27 != 0.0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
      MB_PlatformLocalToWorld
                (lVar19,g_CollOutput.pMoby,lVar26,lVar19 + 0x40,lVar26,lVar19 + 0x40);
    }
    if (moby->alpha != '\0') {
      return;
    }
    DeleteMoby(moby);
    return;
  }
  if (uVar2 != '\x03') {
    if (uVar2 == '\x02') {
      dVar27 = (double)FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
      dVar34 = 0.5;
      fVar3 = moby->pClass->gScale;
      dVar27 = (double)(float)(dVar27 + 1.0);
      if ((double)moby->scale < (double)(float)((double)(fVar3 * 0.5) * dVar27)) {
        moby->scale = (float)((double)(DAT_0071f408 * 0.05 * fVar3) * dVar27 + (double)moby->scale);
      }
      iVar20 = FastDecTimerS32(uVar25 + 0x34);
      if (iVar20 != 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,
                            uVar25);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
        SpawnPart_32(lVar19);
      }
      fVar3 = -(DAT_0071f418 * 9.0 - pfVar7[2]);
      pfVar7[2] = fVar3;
      dVar33 = (double)((moby->pos).x + *pfVar7);
      dVar32 = (double)((moby->pos).y + pfVar7[1]);
      dVar30 = (double)(moby->pos).w;
      dVar31 = (double)((moby->pos).z + fVar3);
      FastVecAddSelf(uVar18 - 0xb0,lVar19 + 0x10,&DAT_00969e20);
      fVar8 = (moby->pos).y;
      *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
      fVar3 = (moby->pos).z;
      *(f32 *)((int)puVar14 + 0x74) = fVar8;
      fVar8 = (moby->pos).w;
      *(float *)(puVar14 + 0xf) = fVar3;
      *(f32 *)((int)puVar14 + 0x7c) = fVar8;
      dVar29 = 0.15000000596046448;
      fVar4 = moby->scale;
      fVar16 = DAT_0071f408 * 0.15;
      pMVar9 = moby->pClass;
      fVar15 = DAT_0071f408 * 0.15;
      fVar5 = pMVar9->gScale;
      *(float *)(puVar14 + 0x10) = (float)dVar33;
      *(float *)((int)puVar14 + 0x84) = (float)dVar32;
      *(float *)(puVar14 + 0x11) = (float)dVar31;
      *(float *)((int)puVar14 + 0x8c) = (float)dVar30;
      pMVar17 = g_heroMobyPtr;
      *(float *)(puVar14 + 0xf) = fVar3 - (fVar16 * fVar4) / fVar5;
      fVar3 = pMVar9->gScale;
      *(float *)(puVar14 + 0x12) = (float)dVar33;
      *(float *)((int)puVar14 + 0x94) = (float)dVar32;
      *(float *)((int)puVar14 + 0x9c) = (float)dVar30;
      *(float *)(puVar14 + 0x11) = (float)(dVar31 - (double)((fVar15 * fVar4) / fVar3));
      dVar28 = 0.20000000298023224;
      *(float *)(puVar14 + 0x13) = (float)(dVar27 * 0.20000000298023224 + dVar31);
      iVar20 = CollSphere
                         ((double)(float)(dVar27 * 0.30000001192092896),uVar18 - 0xc0,pMVar9,4,
                          pMVar17);
      if (iVar20 != 0) {
        (moby->pos).x = g_CollOutput.push.x;
        (moby->pos).y = g_CollOutput.push.y;
        dVar29 = (double)g_CollOutput.push.z;
        (moby->pos).w = g_CollOutput.push.w;
        (moby->pos).z = -(float)(dVar27 * dVar28 - dVar29);
        FastVecReflect(uVar25,uVar25,0xa10980);
        fVar3 = (float)((double)pfVar7[1] * dVar34);
        fVar4 = (float)((double)*pfVar7 * dVar34);
        fVar5 = (float)((double)pfVar7[2] * dVar34);
        *pfVar7 = fVar4;
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar5;
        dVar27 = 0.009999999776482582;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_0071f408 * 0.01) ||
           (((g_standingOnMoby != 0 && (iVar20 = MB_GetPlatformParent(), iVar20 != 0)) &&
            (SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]) <
             (float)((double)DAT_0071f408 * dVar27 +
                    (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))))) {
          sVar6 = *(short *)(pfVar7 + 0xe);
          *(short *)(pfVar7 + 0xe) = sVar6 + 1;
          if (((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) ||
             (puVar14[0x1a] = (longlong)(int)(animationSpeed * 240.5),
             *(int *)((int)puVar14 + 0xd4) < (int)(short)(sVar6 + 1))) {
            moby->state = '\x03';
            *(undefined2 *)(pfVar7 + 0xe) = 0;
          }
        }
        if ((g_standingOnMoby != 0) && (iVar20 = MB_GetPlatformParent(), iVar20 != 0)) {
          *pfVar7 = *pfVar7 + DAT_00969de0;
          pfVar7[1] = pfVar7[1] + DAT_00969de4;
          pfVar7[2] = pfVar7[2] + DAT_00969de8;
        }
        (moby->pos).x = (moby->pos).x + *pfVar7;
        (moby->pos).y = (moby->pos).y + pfVar7[1];
        (moby->pos).z = (moby->pos).z + pfVar7[2];
        M230_002fe0f0(lVar19);
        return;
      }
      iVar20 = CollLine(uVar18 - 0xe0,uVar18 - 0xd0,0,g_heroMobyPtr,0);
      if (iVar20 != 0) {
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        fVar3 = g_CollOutput.ip.z;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        (moby->pos).z =
             fVar3 + ((float)((double)DAT_0071f408 * dVar29) * moby->scale) / moby->pClass->gScale;
        FastVecReflect(uVar25,uVar25,0xa10980);
        fVar3 = (float)((double)pfVar7[1] * dVar34);
        fVar4 = (float)((double)*pfVar7 * dVar34);
        fVar5 = (float)((double)pfVar7[2] * dVar34);
        *pfVar7 = fVar4;
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar5;
        dVar27 = 0.009999999776482582;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_0071f408 * 0.01) ||
           (((g_standingOnMoby != 0 && (iVar20 = MB_GetPlatformParent(), iVar20 != 0)) &&
            (SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]) <
             (float)((double)DAT_0071f408 * dVar27 +
                    (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))))) {
          sVar6 = *(short *)(pfVar7 + 0xe);
          *(short *)(pfVar7 + 0xe) = sVar6 + 1;
          if (((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) ||
             (puVar14[0x1a] = (longlong)(int)(animationSpeed * 240.5),
             *(int *)((int)puVar14 + 0xd4) < (int)(short)(sVar6 + 1))) {
            moby->state = '\x03';
            *(undefined2 *)(pfVar7 + 0xe) = 0;
          }
        }
        if ((g_standingOnMoby != 0) && (iVar20 = MB_GetPlatformParent(), iVar20 != 0)) {
          *pfVar7 = *pfVar7 + DAT_00969de0;
          pfVar7[1] = pfVar7[1] + DAT_00969de4;
          pfVar7[2] = pfVar7[2] + DAT_00969de8;
        }
        (moby->pos).x = (moby->pos).x + *pfVar7;
        (moby->pos).y = (moby->pos).y + pfVar7[1];
        (moby->pos).z = (moby->pos).z + pfVar7[2];
        M230_002fe0f0(lVar19);
        return;
      }
      (moby->pos).x = (float)dVar33;
      (moby->pos).y = (float)dVar32;
      (moby->pos).z = (float)dVar31;
      (moby->pos).w = (float)dVar30;
      return;
    }
    if (uVar2 != '\x01') {
      if (uVar2 == '\0') {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        moby->state = '\x01';
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,
                            uVar25);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
        *(undefined2 *)(pfVar7 + 0xe) = 0;
        pfVar7[0xf] = 0.0;
        return;
      }
      moby->state = '\0';
      return;
    }
    *(undefined2 *)(pfVar7 + 0xe) = 0;
    fVar3 = moby->pClass->gScale;
    if (moby->scale < fVar3 * 0.25) {
      moby->scale = DAT_0071f408 * 0.05 * fVar3 + moby->scale;
    }
    iVar20 = FastDecTimerS32(uVar25 + 0x34);
    if (iVar20 != 0) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,uVar25)
      ;
      *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
      if (g_heroInvisible == '\0') {
        SpawnPart_32(lVar19);
      }
    }
    if ((((g_heroType == '\0') && (pfVar7[0xc] != 0.0)) &&
        ((*(byte *)((int)pfVar7[0xc] + 0x20) & 0xf0) != 0xf0)) &&
       ((g_currentWeaponMoby != (MobyInstance *)0x0 &&
        (g_currentWeaponMoby->oClass == GLOVE_OF_DOOM)))) {
      return;
    }
    DeleteMoby(moby);
    return;
  }
  lVar24 = lVar19 + 0x10;
  dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar24,0);
  if ((dVar27 != 0.0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
    MB_PlatformLocalToWorld
              (lVar19,g_CollOutput.pMoby,lVar24,lVar19 + 0x40,lVar24,lVar19 + 0x40);
  }
  iVar20 = FastDecTimerS16(uVar25 + 0x38);
  if (iVar20 != 0) {
    iVar23 = 0;
    iVar21 = 0;
    iVar20 = MobyUpdateChainStart;
    if (MobyUpdateChainStart != 0) {
      do {
        if ((*(short *)(iVar20 + 0xa6) == 0xba) && ((*(byte *)(iVar20 + 0x20) & 0xf0) != 0xf0)) {
          iVar23 = iVar23 + 1;
          iVar10 = *(int *)(*(int *)(iVar20 + 0x78) + 0x34);
          if (iVar21 < iVar10) {
            iVar21 = iVar10;
          }
        }
        iVar20 = *(int *)(iVar20 + 0x28);
      } while (iVar20 != 0);
      if (7 < iVar23) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x30,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x38,uVar25);
        *(undefined2 *)(pfVar7 + 0xe) = uVar12;
        goto LAB_002fffdc;
      }
    }
    auVar36 = loadVectorLeftIndexed(0x3c,uVar25);
    auVar38 = loadVectorRightIndexed(0x4c,uVar25);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar36 | auVar38,0);
    auVar36 = loadVectorLeftIndexed(0x34,0x2ff1dc);
    auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = loadVectorLeftIndexed(8,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = loadVectorLeftIndexed(0x38,0x2ff1dc);
    auVar36 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar37);
    auVar35 = loadVectorLeftIndexed(0x3c,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = loadVectorLeftIndexed(0x40,0x2ff1dc);
    auVar35 = ZEXT416(0xffffffff);
    auVar45 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar37 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar40,
                         auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
    auVar45 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar47 = loadVectorLeftIndexed(0x44,0x2ff1dc);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar51 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar49 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar38 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar35 = vectorSubtractFloatingPoint(auVar42,auVar37);
    auVar44 = vectorSubtractFloatingPoint(auVar43,auVar37);
    auVar36 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
    auVar37 = vectorConditionalSelect(auVar35,auVar37,auVar36);
    auVar35 = loadVectorLeftIndexed(0x48,0x2ff1dc);
    auVar36 = loadVectorLeftIndexed(0x4c,0x2ff1dc);
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar44);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = vectorConditionalSelect(auVar44,auVar37,auVar41);
    auVar35 = ZEXT416(0xffffffff);
    auVar41 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar47 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar45);
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar35 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar45,auVar37,auVar46);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar35,auVar41);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar37);
    auVar35 = loadVectorLeftIndexed(0x50,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar46 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar47 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar47);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar37);
    auVar35 = loadVectorLeftIndexed(0xc,0x2ff1dc);
    auVar50 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar49);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar37);
    auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar41,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar51 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar46,auVar37);
    auVar37 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar49);
    auVar47 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc0,lVar26);
    *(undefined4 *)(puVar14 + 0x18) = uVar13;
    fVar3 = DAT_0071f408;
    auVar49 = loadVectorLeftIndexed(0x3c,uVar25);
    auVar38 = loadVectorRightIndexed(0x4c,uVar25);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar49 = vectorConvertFromSignedFixedPointWord(auVar49 | auVar38,0);
    auVar38 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    bVar1 = g_standingOnMoby != 0;
    auVar37 = vectorMultiplyAddFloatingPoint(auVar49,auVar39,auVar37);
    auVar39 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar40,auVar47);
    auVar40 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = ZEXT416(0xffffffff);
    auVar47 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar49 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorSubtractFloatingPoint(auVar42,auVar37);
    auVar42 = vectorSubtractFloatingPoint(auVar43,auVar37);
    auVar43 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
    auVar35 = vectorConditionalSelect(auVar35,auVar37,auVar43);
    auVar37 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar42);
    auVar37 = vectorConditionalSelect(auVar42,auVar35,auVar37);
    auVar43 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    auVar47 = vectorShiftLeftIntegerWord(auVar49,auVar49);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar50,auVar41,auVar38);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar42,auVar37,auVar39);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar38,auVar40);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar44,auVar37);
    auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar43);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar38);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar42,auVar40,auVar47);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar35);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar46,auVar35);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar37);
    auVar35 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc4,lVar26);
    *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
    fVar3 = fVar3 * 0.02;
    *(float *)(puVar14 + 0x19) = fVar3;
    if (bVar1) {
      iVar20 = MB_GetPlatformParent();
      fVar3 = *(float *)(puVar14 + 0x19);
      auVar45 = loadVectorLeftIndexed(0xc0,lVar26);
      auVar36 = loadVectorLeftIndexed(0xc4,lVar26);
      if (iVar20 != 0) {
        auVar35 = loadVectorLeftIndexed(0x100,0x969ce0);
        auVar38 = loadVectorLeftIndexed(0x104,0x969ce0);
        auVar45 = vectorAddFloatingPoint(auVar45,auVar35);
        auVar36 = vectorAddFloatingPoint(auVar36,auVar38);
        fVar3 = fVar3 + DAT_00969de8;
        auVar35 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc0,
                            lVar26);
        *(undefined4 *)(puVar14 + 0x18) = uVar13;
        uVar13 = storeVectorElementWordIndexed
                           (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xc4,
                            lVar26);
        *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
        *(float *)(puVar14 + 0x19) = fVar3;
      }
    }
    auVar35 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x10,lVar19);
    auVar37 = loadVectorLeftIndexed(0x14,lVar19);
    auVar35 = vectorAddFloatingPoint
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar38);
    fVar4 = (moby->pos).z;
    auVar36 = vectorAddFloatingPoint
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar37);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xb0,lVar26);
    *(undefined4 *)(puVar14 + 0x16) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xb4,lVar26);
    *(undefined4 *)((int)puVar14 + 0xb4) = uVar13;
    *(float *)(puVar14 + 0x17) = fVar3 + fVar4;
    *(undefined4 *)((int)puVar14 + 0xbc) = *(undefined4 *)((int)puVar14 + 0xcc);
    FUN_002cb828(pfVar7[0xc],uVar18 - 0xa0,uVar18 - 0x90);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(0x58,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = vectorSplatHalfWord(auVar35,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x38,uVar25);
    *(undefined2 *)(pfVar7 + 0xe) = uVar12;
    fVar3 = pfVar7[0xf];
    pfVar7[0xf] = (float)((int)fVar3 + 1);
    if (3 < (int)fVar3 + 1) {
      moby->state = '\x04';
    }
  }
LAB_002fffdc:
  if (1 < (int)pfVar7[0xf]) {
    return;
  }
  iVar20 = FastDecTimerS32(uVar25 + 0x34);
  if (iVar20 == 0) {
    return;
  }
  auVar35 = ZEXT416(0xffffffff);
  auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar36
                      );
  auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar13 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,uVar25);
  *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
  SpawnPart_32(lVar19);
  return;
}



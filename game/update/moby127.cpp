// game/update/moby127.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2a0dec-0x2a1a08
// shared update function UpdateMoby_{127_128_159_169}; registered for oClasses 127, 128, 159, 169
#include <math.h>
#include "game/update/moby127.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x02a0dec (0x58 bytes)
void FUN_002a0dec(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  if (param_1->oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
    moby = *(MobyInstance **)((int)param_1->pVar + 0x84);
    if (moby != (MobyInstance *)0x0) {
      DeleteMoby(moby);
    }
    DeleteMoby(param_1);
  }
  return;
}


// shared update function, registered for oClasses 127, 128, 159, 169
// 0x02a0e58 (0x500 bytes)
/* Moby 127
   Moby 128
   Moby 159
   Moby 169 */

MobyInstance * UpdateMoby_127(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pfVar2 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar2[4] = -NAN;
  }
  bVar1 = moby->state;
  pMVar4 = (MobyInstance *)(uint)bVar1;
  if (bVar1 == 4) {
    if ((((pfVar2[4] != -NAN) && (g_MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) &&
        (bVar1 = g_MobyInstance[(int)pfVar2[4]].state, bVar1 != 0xfd && bVar1 != 0xfe)) &&
       ((float)(uint)bVar1 != pfVar2[5])) {
      dVar7 = (double)(1.0 / (pfVar2[0xb] * 60.0));
      pfVar2[3] = (float)((double)pfVar2[3] - dVar7);
      dVar6 = 0.01745329238474369;
      dVar5 = (double)FastDiffRots
                                ((double)(moby->rotation).x,
                                 (double)(float)((double)(pfVar2[7] * 0.017453292) * dVar7));
      (moby->rotation).x = (float)dVar5;
      dVar5 = (double)FastDiffRots
                                ((double)(moby->rotation).y,
                                 (double)(float)((double)(float)((double)pfVar2[8] * dVar6) * dVar7)
                                );
      (moby->rotation).y = (float)dVar5;
      dVar5 = (double)FastDiffRots
                                ((double)(moby->rotation).z,
                                 (double)(float)((double)(float)((double)pfVar2[9] * dVar6) * dVar7)
                                );
      (moby->rotation).z = (float)dVar5;
      if (0 < (int)pfVar2[3]) {
        return (MobyInstance *)pfVar2[3];
      }
      (moby->rotation).x = *pfVar2;
      (moby->rotation).y = pfVar2[1];
      (moby->rotation).z = pfVar2[2];
      pfVar2[3] = 0.0;
      if (pfVar2[0xd] != -NAN) {
        PlayMobySound((int)pfVar2[0xd],0,moby);
      }
      moby->state = '\x01';
      return (MobyInstance *)0x1;
    }
    if (pfVar2[0xc] != -NAN) {
      PlayMobySound((int)pfVar2[0xc],0,moby);
    }
    pMVar4 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 3) {
    pMVar4 = (MobyInstance *)pfVar2[4];
    if ((pMVar4 != (MobyInstance *)0xffffffff) &&
       (pMVar4 = g_MobyInstance + (int)pMVar4, pMVar4 != (MobyInstance *)0x0)) {
      bVar1 = pMVar4->state;
      pMVar4 = (MobyInstance *)(uint)bVar1;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 == pfVar2[6])) {
        pfVar2[3] = 1.0;
        if (pfVar2[0xc] != -NAN) {
          PlayMobySound((int)pfVar2[0xc],0,moby);
        }
        pMVar4 = (MobyInstance *)0x4;
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 == 2) {
    if (((pfVar2[4] != -NAN) && (g_MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) &&
       ((bVar1 = g_MobyInstance[(int)pfVar2[4]].state, bVar1 != 0xfd && bVar1 != 0xfe &&
        ((float)(uint)bVar1 == pfVar2[6])))) {
      if (pfVar2[0xc] != -NAN) {
        PlayMobySound((int)pfVar2[0xc],0,moby);
      }
      moby->state = '\x04';
      return (MobyInstance *)0x4;
    }
    dVar6 = (double)(1.0 / (pfVar2[0xb] * 60.0));
    pfVar2[3] = (float)((double)pfVar2[3] + dVar6);
    dVar7 = 0.01745329238474369;
    dVar5 = (double)FastWrapRot
                              ((moby->rotation).x,(float)((double)(pfVar2[7] * 0.017453292) * dVar6)
                              );
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)FastWrapRot
                              ((moby->rotation).y,
                               (float)((double)(float)((double)pfVar2[8] * dVar7) * dVar6));
    (moby->rotation).y = (float)dVar5;
    dVar5 = (double)FastWrapRot
                              ((moby->rotation).z,
                               (float)((double)(float)((double)pfVar2[9] * dVar7) * dVar6));
    (moby->rotation).z = (float)dVar5;
    uVar3 = (int)pfVar2[3] >> 0x1f;
    pMVar4 = (MobyInstance *)((uVar3 >> 1 ^ (uint)pfVar2[3]) - uVar3);
    if (0x3f7fffff < (int)pMVar4) {
      dVar5 = (double)FastWrapRot(*pfVar2,(float)((double)pfVar2[7] * dVar7));
      (moby->rotation).x = (float)dVar5;
      dVar5 = (double)FastWrapRot(pfVar2[1],(float)((double)pfVar2[8] * dVar7));
      (moby->rotation).y = (float)dVar5;
      dVar5 = (double)FastWrapRot(pfVar2[2],(float)((double)pfVar2[9] * dVar7));
      pMVar4 = (MobyInstance *)0x3f800000;
      (moby->rotation).z = (float)dVar5;
      pfVar2[3] = 1.0;
      moby->state = '\x03';
      if (pfVar2[0xc] != -NAN) {
        pMVar4 = (MobyInstance *)PlayMobySound((int)pfVar2[0xc],0,moby);
      }
    }
  }
  else if (bVar1 == 1) {
    if ((pfVar2[4] != -NAN) && (g_MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) {
      bVar1 = g_MobyInstance[(int)pfVar2[4]].state;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 != pfVar2[5])) {
        return (MobyInstance *)(uint)bVar1;
      }
    }
    if (pfVar2[0xc] != -NAN) {
      PlayMobySound((int)pfVar2[0xc],0,moby);
    }
    pMVar4 = (MobyInstance *)0x0;
    pfVar2[3] = 0.0;
    moby->state = '\x02';
  }
  else if (bVar1 == 0) {
    *pfVar2 = (moby->rotation).x;
    pfVar2[1] = (moby->rotation).y;
    pfVar2[2] = (moby->rotation).z;
    pfVar2[3] = (moby->rotation).w;
    moby->state = (char)(ZERO_MASK((int)pfVar2[0xf])) + '\x02';
    pMVar4 = (MobyInstance *)pfVar2[0xe];
    pfVar2[3] = 0.0;
    if (0 < (int)pMVar4) {
      pMVar4 = (MobyInstance *)moby->pClass;
      moby->scale = (float)pMVar4->pClass * pfVar2[0xe];
    }
  }
  return pMVar4;
}


// 0x02a1358 (0x14 bytes)
void M169_002a1358(void)

{
  DAT_007ac82c = 0x10000;
  return;
}


// 0x02a1370 (0x1c0 bytes)
void M169_002a1370(void)

{
  GPiece<16> local_100;
  GPiece<64> auStack_f0;
  GPiece<152> local_b0;
  
  if (g_gameMode != GAME_MODE_SCENE) {
    FastEulerToMtx1(auStack_f0,local_100);
    GetEffectTex(0xd);
    SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    idol_draw::PackCmd(0,2,0,1,0x80);
    FastDrawQuad(local_b0,auStack_f0,1,EffectTexHeaders,9);
  }
  return;
}


// 0x02a1540 (0x134 bytes)
MobyInstance * M169_002a1540(undefined4 param_1,f32 *param_2)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pMVar2 = CreateMoby(0xa0);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0x7f;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    puVar1 = (undefined4 *)pMVar2->pVar;
    pMVar2->scale = pMVar2->scale * 0.65;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    puVar1[0xc] = param_1;
    (pMVar2->pos).x = *param_2;
    (pMVar2->pos).y = param_2[1];
    (pMVar2->pos).z = param_2[2];
    (pMVar2->pos).w = param_2[3];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    dVar5 = 1.0471975803375244;
    dVar4 = 3.1415927410125732;
    dVar3 = (double)MB_randRangeFloat
                              (g_FrameTime * 1.0471976,g_FrameTime * 3.1415927);
    puVar1[0xe] = (float)dVar3;
    dVar3 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar5),
                               (float)((double)g_FrameTime * dVar4));
    puVar1[0xf] = (float)dVar3;
    UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}


// 0x02a1698 (0x370 bytes)
void M169_002a1698(undefined4 *param_1,int param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> local_60;
  
  dVar15 = -1.0;
  dVar14 = 1.0;
  dVar16 = 0.0;
  pfVar3 = *(float **)(param_2 + 0x78);
  uVar7 = ZEXT48(pfVar3);
  dVar8 = (double)MB_randRangeFloat(-1.0,1.0);
  dVar9 = (double)MB_randRangeFloat((float)dVar15,(float)dVar14);
  dVar15 = (double)MB_randRangeFloat((float)dVar15,(float)dVar14);
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) * 1.5384616;
  dVar14 = (double)MB_randRangeFloat
                             (g_FrameTime * 0.01,g_FrameTime * 0.1);
  bVar1 = g_standingOnMoby != 0;
  dVar12 = (double)SQRT((float)(dVar15 * dVar15 +
                               (double)(float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9))));
  dVar10 = (double)(float)(dVar14 / dVar12);
  dVar14 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar14 = (double)(float)(dVar8 * dVar10);
  }
  dVar13 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar13 = (double)(float)(dVar9 * dVar10);
  }
  dVar11 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar11 = (double)(float)(dVar15 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar14 = (double)(float)(dVar8 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar13 = (double)(float)(dVar9 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar11 = (double)(float)(dVar15 * dVar10);
  }
  *pfVar3 = (float)(dVar14 + (double)*param_3);
  pfVar3[1] = (float)(dVar13 + (double)param_3[1]);
  fVar2 = param_3[2];
  pfVar3[3] = 0.0;
  pfVar3[2] = (float)(dVar11 + (double)fVar2);
  if ((bVar1) && (iVar6 = MB_GetPlatformParent(), iVar6 != 0)) {
    *pfVar3 = *pfVar3 + DAT_00969de0;
    pfVar3[1] = pfVar3[1] + DAT_00969de4;
    pfVar3[2] = pfVar3[2] + DAT_00969de8;
  }
  pMVar5 = g_heroMobyPtr;
  auVar17 = ZEXT416(0xffffffff);
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar17 = loadVectorLeftIndexed(0x18,0x2a1674);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar18
                      );
  auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
  auVar17 = vectorSplatHalfWord(auVar17,1);
  uVar4 = storeVectorElementHalfWordIndexed(auVar17,0x34,uVar7);
  *(undefined2 *)(pfVar3 + 0xd) = uVar4;
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar6 = CollLine(local_60,param_1,0,pMVar5,0);
  if (iVar6 != 0) {
    dVar8 = (double)g_CollOutput.ip.x;
    *(float *)(param_2 + 0x10) = g_CollOutput.ip.x;
    dVar9 = (double)g_CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = g_CollOutput.ip.y;
    dVar15 = (double)g_CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = g_CollOutput.ip.w;
    dVar10 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                          g_CollOutput.normal.x * g_CollOutput.normal.x +
                          g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar2 = (float)((double)(DAT_0071f418 * 9.7) / dVar10);
    dVar14 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar14 = (double)(g_CollOutput.normal.z * fVar2);
    }
    dVar12 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar12 = (double)(g_CollOutput.normal.y * fVar2);
    }
    dVar13 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar13 = (double)(g_CollOutput.normal.x * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar14 = (double)(g_CollOutput.normal.z * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar12 = (double)(g_CollOutput.normal.y * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar13 = (double)(g_CollOutput.normal.x * fVar2);
    }
    *(float *)(param_2 + 0x18) = (float)(dVar15 + dVar14);
    *(float *)(param_2 + 0x14) = (float)(dVar9 + dVar12);
    *(float *)(param_2 + 0x10) = (float)(dVar8 + dVar13);
    FastVecReflect(uVar7,uVar7,0xa10980);
    *pfVar3 = *pfVar3 * 0.6;
    pfVar3[1] = pfVar3[1] * 0.6;
    pfVar3[2] = pfVar3[2] * 0.6;
  }
  return;
}



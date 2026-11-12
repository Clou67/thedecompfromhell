// game/update/moby340.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x34a598-0x34d71c
#include <math.h>
#include "game/update/moby340.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby426.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x034a598 (0x14 bytes)
void M340_0034a598(void)

{
  DAT_0083ffdc = 0x10000;
  return;
}


// 0x034a5d0 (0x2f0 bytes)
int M340_0034a5d0(MobyInstance *param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pvVar2 = param_1->pVar;
  if (param_1->state == '\t') {
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == param_1)) &&
       (g_SoundChannels[iVar3].state != '\0')) {
      sound_Kill(iVar3);
    }
    iVar3 = -1;
    *(undefined4 *)((int)pvVar2 + 0x238) = 0xffffffff;
  }
  else {
    iVar3 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar2 + 0x238));
    if ((iVar3 == 0) && (param_1->animationId < 8)) {
      iVar3 = PlayMobySound(0,4,param_1);
      *(int *)((int)pvVar2 + 0x238) = iVar3;
      dVar5 = (double)FastIntToDouble(0x400);
      *(float *)((int)pvVar2 + 0x230) = (float)dVar5;
      *(undefined4 *)((int)pvVar2 + 0x234) = 0;
    }
    bVar1 = param_1->animationId;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        dVar5 = (double)FastIntToDouble(0x400);
        dVar7 = 0.0;
        dVar5 = (double)(float)(dVar5 * 0.6000000238418579);
      }
      else {
        dVar5 = (double)FastIntToDouble(0x400);
        dVar7 = 3.0;
      }
    }
    else if (bVar1 < 5) {
      if (bVar1 < 3) {
        dVar5 = (double)FastIntToDouble(0x400);
        dVar7 = -2.0;
      }
      else {
        dVar5 = (double)FastIntToDouble(0x400);
        dVar7 = 4.0;
      }
    }
    else {
      if (7 < bVar1) {
        iVar3 = *(int *)((int)pvVar2 + 0x238);
        if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == param_1)) &&
           (g_SoundChannels[iVar3].state != '\0')) {
          sound_Kill(iVar3);
        }
        *(undefined4 *)((int)pvVar2 + 0x238) = 0xffffffff;
        return -1;
      }
      dVar5 = (double)FastIntToDouble(0x400);
      dVar7 = 0.0;
      dVar5 = (double)(float)(dVar5 * 0.800000011920929);
    }
    dVar6 = (double)FastIntToDouble(0x400);
    Delt((float)dVar5,(float)(dVar6 * (double)g_FrameTime) * 2.0,
                   (float *)((int)pvVar2 + 0x230));
    Delt((float)dVar7,g_FrameTime * 8.0,(float *)((int)pvVar2 + 0x234));
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    iVar4 = FastDoubleToInt((double)*(float *)((int)pvVar2 + 0x230));
    sound_SetVol(iVar3,iVar4);
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    iVar4 = FastDoubleToInt((double)*(float *)((int)pvVar2 + 0x234));
    iVar3 = sound_SetPitch(iVar3,iVar4);
  }
  return iVar3;
}


// 0x034a8d8 (0x15c bytes)
int M340_0034a8d8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  GPiece<16> auStack_40;
  GPiece<16> local_30;
  
  pvVar1 = param_1->pVar;
  uVar3 = 0;
  iVar2 = *(int *)((int)pvVar1 + 0x238);
  if (((iVar2 != -1) && (g_SoundChannels[iVar2].pMoby == param_1)) &&
     (g_SoundChannels[iVar2].state != '\0')) {
    sound_Kill(iVar2);
  }
  *(undefined4 *)((int)pvVar1 + 0x238) = 0xffffffff;
  MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  GetBonePosition(param_1,5,auStack_40);
  MB_genericExplosion
            (uVar3,uVar3,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff0000000000000
             ,0x402e000000000000,param_1,local_30,auStack_40,1,0,10,3,4);
  iVar2 = PlayMobySound(1,0,param_1);
  return iVar2;
}


// 0x034aa40 (0x130 bytes)
undefined8 M340_0034aa40(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float local_60;
  float local_5c;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar2 + 0x38) == 0) &&
     (puVar6 = (undefined4 *)(uint)*(ushort *)(iVar2 + 0x136), *(ushort *)(iVar2 + 0x136) == 0)) {
    fVar1 = *(float *)(iVar2 + 0x140);
  }
  else {
    puVar6 = &DAT_0034aa34;
    fVar1 = *(float *)(iVar2 + 0x140) * 2.0;
  }
  MB_getTarget((double)fVar1,param_1,puVar6,&local_60);
  fVar1 = *(float *)(param_1 + 0x14) - local_5c;
  fVar4 = *(float *)(param_1 + 0x10) - local_60;
  iVar2 = MobyUpdateChainStart;
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if ((iVar2 != param_1) && (*(short *)(iVar2 + 0xa6) == 0x154)) {
      fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar2 + 0x14);
      fVar5 = *(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x10);
      if ((SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 3.0) ||
         (fVar3 = *(float *)(iVar2 + 0x14) - local_5c, fVar5 = *(float *)(iVar2 + 0x10) - local_60,
         SQRT(fVar5 * fVar5 + fVar3 * fVar3) < SQRT(fVar4 * fVar4 + fVar1 * fVar1))) {
        return 0;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}


// 0x034ab98 (0x690 bytes)
// inlined: FastAtan2 @0x34af64, FastAtan2 @0x34b108
double M340_0034ab98(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
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
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  puVar9[0x24] = unaff_r29;
  iVar8 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar8 + 0x38) == 0) &&
     (puVar17 = (undefined4 *)(uint)*(ushort *)(iVar8 + 0x136), *(ushort *)(iVar8 + 0x136) == 0)) {
    fVar2 = *(float *)(iVar8 + 0x140);
  }
  else {
    puVar17 = &DAT_0034ab70;
    fVar2 = *(float *)(iVar8 + 0x140) * 2.0;
  }
  MB_getTarget((double)fVar2,param_1,puVar17,uVar13 - 0xe0);
  iVar8 = MobyUpdateChainStart;
  fVar2 = *(float *)((int)puVar9 + 0x74);
  fVar7 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(puVar9 + 0xe);
  fVar5 = *(float *)(param_1 + 0x10) - fVar3;
  dVar25 = 0.0;
  fVar4 = *(float *)(puVar9 + 0xf);
  bVar12 = true;
  fVar7 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
  if (MobyUpdateChainStart != 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    dVar22 = (double)DAT_0084000c;
    dVar24 = dVar25;
    dVar26 = dVar25;
    dVar27 = dVar25;
    dVar28 = dVar25;
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar5 = *(float *)(iVar8 + 0x14);
        fVar6 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar5 - *(float *)(param_1 + 0x14);
        fVar10 = fVar6 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          fVar6 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x10) - fVar6) + dVar26);
          dVar26 = (double)fVar6;
          fVar5 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x14) - fVar5) + dVar27);
          dVar27 = (double)fVar5;
          fVar1 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) +
                         dVar28);
          dVar28 = (double)fVar1;
          *param_2 = fVar6;
          param_2[1] = fVar5;
          param_2[2] = fVar1;
          dVar22 = (double)DAT_0084000c;
          fVar6 = *(float *)(iVar8 + 0x10);
          fVar5 = *(float *)(iVar8 + 0x14);
          dVar24 = (double)(float)(dVar22 + dVar24);
        }
        if (SQRT((fVar6 - fVar3) * (fVar6 - fVar3) + (fVar5 - fVar2) * (fVar5 - fVar2)) < fVar7) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar5 = *(float *)(param_1 + 0x14) - fVar2;
      fVar6 = *(float *)(param_1 + 0x10) - fVar3;
      fVar4 = *(float *)(param_1 + 0x18) - fVar4;
      dVar22 = dVar25;
      if (5.5 - fVar7 < 0.0) {
        dVar22 = -5.0;
      }
      if (fVar7 - 4.5 < 0.0) {
        dVar22 = 5.0;
      }
      param_2[3] = 0.0;
      fVar1 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar7 = 1.0 / (float)(dVar24 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar24 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar24 = (double)(fVar10 * fVar4);
      }
      dVar22 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar5);
      }
      dVar23 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar23 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar24 = (double)(fVar10 * fVar4);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar23 = (double)(fVar10 * fVar6);
      }
      fVar4 = (float)(dVar28 + dVar24) * fVar7;
      fVar5 = (float)(dVar27 + dVar22) * fVar7;
      fVar7 = (float)(dVar26 + dVar23) * fVar7;
      param_2[2] = fVar4;
      param_2[1] = fVar5;
      *param_2 = fVar7;
      fVar7 = fVar7 + *(float *)(param_1 + 0x10);
      *param_2 = fVar7;
      fVar5 = fVar5 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar5;
      fVar4 = fVar4 + *(float *)(param_1 + 0x18);
      goto LAB_0034ae5c;
    }
  }
  *param_2 = fVar3;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar5 = fVar2;
  fVar7 = fVar3;
LAB_0034ae5c:
  param_2[2] = fVar4;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14) - fVar5;
  if (1.0 <= SQRT((fVar4 - fVar7) * (fVar4 - fVar7) + fVar6 * fVar6)) {
    fVar5 = fVar5 - *(float *)(param_1 + 0x14);
    fVar6 = ABS(fVar7 - fVar4);
    fVar3 = ABS(fVar5);
    *(float *)(puVar9 + 0x18) = fVar7 - fVar4;
    *(float *)((int)puVar9 + 0xc4) = fVar5;
    *(float *)(puVar9 + 0x19) = fVar6 - fVar3;
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar20 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar21 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar20 = uVar13 - 0x78;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar20;
      do {
        fVar2 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
  }
  else {
    *param_2 = fVar4;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar3 = fVar3 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar7 - fVar4;
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar20 = uVar13 - 0x48;
      lVar21 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar20 = uVar13 - 0x58;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar20;
      do {
        fVar2 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
  }
  return dVar25;
}


// 0x034b2e8 (0x2434 bytes)
/* Moby 340 */

void UpdateMoby_340(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  MobyInstance *pMVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  bool bVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined2 uVar22;
  int iVar19;
  int iVar20;
  undefined1 uVar24;
  short sVar23;
  byte bVar25;
  uint uVar21;
  ulonglong unaff_r19;
  longlong lVar26;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  ulonglong unaff_r26;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong uVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar27 = uVar16 - 0x2a0;
  puVar13 = (ulonglong *)lVar27;
  *puVar13 = uVar16;
  puVar13[0x56] = in_LR;
  puVar13[0x4f] = in_f27;
  puVar13[0x50] = in_f28;
  puVar13[0x51] = in_f29;
  puVar13[0x52] = in_f30;
  puVar13[0x53] = in_f31;
  puVar13[0x4d] = unaff_r30;
  puVar13[0x4e] = unaff_r31;
  pvVar9 = moby->pVar;
  uVar30 = ZEXT48(pvVar9);
  puVar13[0x4c] = unaff_r29;
  dVar35 = (double)(moby->rotation).z;
  puVar13[0x47] = unaff_r24;
  bVar14 = false;
  iVar19 = *(int *)((int)pvVar9 + 0x38);
  puVar13[0x4b] = unaff_r28;
  puVar13[0x4a] = unaff_r27;
  puVar13[0x49] = unaff_r26;
  puVar13[0x48] = unaff_r25;
  puVar13[0x46] = unaff_r23;
  puVar13[0x45] = unaff_r22;
  puVar13[0x44] = unaff_r21;
  puVar13[0x43] = unaff_r20;
  puVar13[0x42] = unaff_r19;
  if ((iVar19 != 0) || (*(short *)((int)pvVar9 + 0x136) != 0)) {
    bVar14 = true;
  }
  DoManipulator(0x4007333340000000,moby,7,(Manipulator *)((int)pvVar9 + 0x270));
  if ((moby->enabled != '\0') &&
     (dVar31 = (double)FUN_005e8548(lVar17 + 0x10,0x951500), dVar31 < 27.0)) {
    MB_SetZBoundsFromGround(lVar17);
    moby->shadow = '\x15';
  }
  if (bVar14) {
    fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar9 + 0x140);
  }
  MB_getTarget((double)fVar2,lVar17);
  pMVar10 = *(MobyInstance **)(puVar13 + 0x38);
  dVar31 = (double)BlendAnimFrame(moby);
  lVar28 = lVar17 + 0x10;
  dVar32 = (double)FUN_005e8588(lVar28,uVar16 - 0x120);
  FUN_005e7e98(uVar16 - 0x230,lVar28);
  FUN_005e7e98(uVar16 - 0x220,lVar28);
  moby->updateDistance = ' ';
  M340_0034a5d0(lVar17);
  if (((moby->state == '\x01') || (moby->state == '\x03')) &&
     ((DAT_00969f20 == moby || (dVar33 = (double)FUN_005e8548(lVar28,&g_heroPosition), dVar33 < 1.5)
      ))) {
    uVar18 = idol::GetAnimDuration(10);
    MB_SetAnimation(lVar17,7,0,uVar18);
    uVar22 = idol::GetAnimDuration(0x3c);
    *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
    moby->state = '\a';
  }
  FastDecTimerU8(uVar30 + 0x14d);
  if ((moby->state != '\b') && (moby->state != '\0')) {
    dVar33 = 0.0;
    *(undefined4 *)((int)puVar13 + 0x1d4) = 0;
    iVar19 = MB_damage(lVar17,0x210000,0);
    iVar20 = MB_HandleDamage
                       (moby,iVar19,uVar30 + 0x20,0,puVar13 + 0x3a,(int)puVar13 + 0x1d4,0,4);
    if ((iVar19 != 0) && ((moby->state != '\0' && (*(char *)((int)pvVar9 + 0x14d) == '\0')))) {
      pMVar11 = *(MobyInstance **)(iVar19 + 0x20);
      if (pMVar11 == (MobyInstance *)0x0) {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else if (pMVar11 == g_currentWeaponMoby) {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar11->pos).x),
                                      (double)((moby->pos).y - (pMVar11->pos).y));
      }
      *(undefined4 *)((int)pvVar9 + 0xd0) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0xd4) = 0x3a03126f;
      fVar2 = g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xfd) = 0;
      *(undefined4 *)((int)pvVar9 + 0xe4) = 9;
      *(float *)((int)pvVar9 + 0xd8) = fVar2 * 4.0;
      sVar8 = *(short *)(*(int *)(iVar19 + 0x20) + 0xa6);
      if ((sVar8 == 0xb0) || (sVar8 == 0xb1)) {
        *(undefined4 *)(iVar19 + 0x2c) = 0x3f800000;
        *(undefined4 *)((int)puVar13 + 0x1d4) = 0x3f800000;
      }
      fVar2 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar13 + 0x1d4);
      *(float *)((int)pvVar9 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar33) {
        iVar20 = 1;
      }
      uVar22 = idol::GetAnimDuration(0xf0);
      *(undefined2 *)((int)pvVar9 + 0x136) = uVar22;
      if (iVar20 < 3) {
        if ((-1 < iVar20) && (0 < iVar20)) {
          M340_0034a8d8(lVar17);
          DeleteMoby(moby);
          return;
        }
      }
      else if ((iVar20 < 0xb) && (iVar20 < 7)) {
        uVar18 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar17,8,0,uVar18);
        sVar8 = *(short *)(*(int *)(iVar19 + 0x20) + 0xa6);
        if ((sVar8 == 0x131) || (sVar8 == 0xb0)) {
          fVar2 = (10.0 / (animationSpeed * 15.0)) * 0.5;
        }
        else {
          fVar2 = 10.0 / (animationSpeed * 15.0);
        }
        *(float *)((int)pvVar9 + 0x13c) = fVar2;
        moby->state = '\x06';
        dVar33 = (double)FastWrapRot(3.1415927,(float)dVar34);
        (moby->rotation).z = (float)dVar33;
        *(undefined1 *)((int)pvVar9 + 0xb7) = 0x78;
        MB_UpdateLightsTransition(lVar17,uVar30 + 0xb0);
        uVar24 = idol::GetAnimDuration(0x14);
        *(undefined1 *)((int)pvVar9 + 0x14d) = uVar24;
        *(undefined1 *)((int)pvVar9 + 0xb7) = 0x78;
        MB_UpdateLightsTransition(lVar17,uVar30 + 0xb0);
        uVar24 = idol::GetAnimDuration(0x14);
        *(undefined1 *)((int)pvVar9 + 0x14d) = uVar24;
      }
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    uVar22 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar9 + 0x136) = uVar22;
  }
  *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  FastDecTimerS16(uVar30 + 0x136);
  if ((((moby->state == '\a') && (moby->updateId == '\a')) && (15.0 < dVar31)) && (dVar31 < 44.0)) {
    iVar19 = 0;
    dVar33 = 10.0;
    uVar18 = 0x3fe0000000000000;
    do {
      *(undefined4 *)(puVar13 + 0x3b) = 1;
      *(undefined4 *)((int)puVar13 + 0x1dc) = 2;
      *(undefined4 *)(puVar13 + 0x3c) = 3;
      *(undefined4 *)((int)puVar13 + 0x1e4) = 4;
      GetBonePosition(lVar17,*(undefined4 *)((int)lVar27 + 0x1d8),uVar16 - 0x210);
      *(MobyInstance **)(puVar13 + 0x2c) = moby;
      lVar26 = uVar16 - 0x150;
      *(undefined4 *)((int)puVar13 + 0x16c) = 0x3f800000;
      *(undefined4 *)((int)puVar13 + 0x164) = 0x10001;
      FUN_005e81f0(lVar26,&g_heroPosition,lVar28);
      FUN_005e7f98((double)(float)((double)g_FrameTime * dVar33),lVar26,lVar26);
      *(undefined4 *)(puVar13 + 0x2e) = 1;
      CollMobySphere(uVar18,uVar16 - 0x210);
      if (g_CollOutput.pMoby == pMVar10) {
        sVar8 = *(short *)((int)pvVar9 + 0x146);
        sVar23 = idol::GetAnimDuration(0x3c);
        if (sVar8 < sVar23) {
          uVar22 = *(undefined2 *)((int)pvVar9 + 0x146);
        }
        else {
          uVar22 = idol::GetAnimDuration(0x3c);
        }
        *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      }
      iVar19 = iVar19 + 1;
      lVar27 = lVar27 + 4;
    } while (iVar19 < 4);
  }
  if ((moby->state != '\0') && (*(char *)((int)pvVar9 + 0x2e) != '\x01')) {
    iVar19 = *(int *)((int)pvVar9 + 0x238);
    if ((iVar19 != -1) &&
       ((g_SoundChannels[iVar19].pMoby == moby &&
        (g_SoundChannels[iVar19].state != '\0')))) {
      sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0x238) = 0xffffffff;
    DeleteMoby(moby);
    return;
  }
  FastDecTimerS16(uVar30 + 0x146);
  bVar25 = moby->state;
  if (4 < bVar25) {
    if (bVar25 < 8) {
      if (bVar25 < 6) {
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x150)];
        if (bVar14) {
          fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar9 + 0x140);
        }
        if ((dVar32 < (double)fVar2) &&
           (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
            (iVar19 = PointInsideComplexPoly
                                ((Vec4 *)(puVar13 + 0x30),
                                 (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                                 Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
          if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
            *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar17,6,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x4c,0x34b228);
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          }
          FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                       (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
          dVar35 = 2.0;
          if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
             (iVar19 = M340_0034aa40(lVar17), iVar19 == 0)) {
            if (bVar14) {
              fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
            }
            else {
              fVar2 = *(float *)((int)pvVar9 + 0x140);
            }
            if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
              *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
              moby->state = '\x03';
            }
          }
          else {
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar38 = loadVectorLeftIndexed(0x4c,0x34b228);
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
            moby->state = '\a';
            *(undefined4 *)((int)pvVar9 + 0x130) = 0;
          }
        }
        pCVar15 = Cuboids;
        sVar8 = *(short *)((int)pvVar9 + 0x15a);
        if (sVar8 < 1) {
          if (-1 < sVar8) {
            sVar8 = *(short *)((int)pvVar9 + 0x158);
            iVar19 = (int)((longlong)sVar8 << 7);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar19);
            *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar19);
            *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar19);
            *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar19);
            OrganicDeltAngSpeed
                      ((double)*(float *)((int)&(pCVar15->rot).z + (int)((longlong)sVar8 << 7)),
                       (double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
                       (double)(g_FrameTime * 3.1415927),lVar17,&DAT_00720000,
                       uVar30 + 0x130);
            if (moby->animationId != '\x01') {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            }
            dVar35 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
            if ((dVar35 < 1.0) &&
               (dVar35 = (double)FastSubRots
                                           ((moby->rotation).z,
                                            *(float *)((int)&(Cuboids->rot).z +
                                                      (int)((longlong)
                                                            *(short *)((int)pvVar9 + 0x158) << 7))),
               dVar35 < 0.1745329201221466)) {
              *(undefined2 *)((int)pvVar9 + 0x15a) = 1;
            }
          }
        }
        else if (sVar8 < 2) {
          iVar19 = (int)((longlong)*(short *)((int)pvVar9 + 0x158) << 7);
          uVar1 = moby->animationId;
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar19);
          *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar19);
          *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar19);
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar19);
          if (uVar1 == '\a') {
            if ((moby->field43_0x70 & 2U) != 0) {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
              *(undefined4 *)((int)pvVar9 + 0x130) = 0;
              *(undefined2 *)((int)pvVar9 + 0x15a) = 2;
            }
          }
          else {
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          }
        }
        else if (sVar8 < 3) {
          iVar20 = (int)((longlong)*(short *)((int)pvVar9 + 0x158) << 7);
          iVar19 = *(int *)((int)pvVar9 + 0x154);
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar20);
          *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar20);
          *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar20);
          fVar2 = (moby->pos).x;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar20);
          uVar18 = FUN_005e8338((double)(pSVar12->points[iVar19].x - fVar2),
                                (double)(pSVar12->points[iVar19].y - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar18,(double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
                     (double)(g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130
                    );
          dVar32 = (double)(moby->rotation).z;
          dVar35 = (double)FUN_005e8338((double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].x -
                                                (moby->pos).x),
                                        (double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].y -
                                                (moby->pos).y));
          dVar35 = (double)FastSubRots((float)dVar32,(float)dVar35);
          if (dVar35 < 0.1745329201221466) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            moby->state = '\x04';
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x58,0x34b228);
            auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          }
        }
      }
      else if (bVar25 < 7) {
        if (((moby->updateId == '\b') &&
            (dVar35 = (double)BlendAnimFrame(moby), 30.0 < dVar35)) ||
           ((moby->field43_0x70 & 2U) != 0)) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          moby->state = '\x01';
          *(undefined2 *)((int)pvVar9 + 0x146) = 0;
        }
      }
      else {
        if (bVar14) {
          fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar9 + 0x140);
        }
        uVar18 = M340_0034ab98((double)fVar2,lVar17,uVar16 - 0x220);
        if ((*(short *)((int)pvVar9 + 0x146) == 0) &&
           ((44.0 < dVar31 || ((moby->field43_0x70 & 2U) != 0)))) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x60,0x34b228);
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          moby->state = '\x01';
          *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 2;
        }
        OrganicDeltAngSpeed
                  (uVar18,(double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
                   (double)(g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130);
      }
    }
    else if (bVar25 < 9) {
      if ((moby->field43_0x70 & 2U) != 0) {
        M340_0034a8d8(lVar17);
        DeleteMoby(moby);
        return;
      }
    }
    else if ((bVar25 < 10) && (iVar19 = FUN_0048c188(lVar17,uVar30 + 0xc0), iVar19 != 0)) {
      moby->state = '\0';
      *(undefined2 *)((int)pvVar9 + 0x1e8) = 0;
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 2) {
    if (bVar25 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x3f800000;
      *(undefined2 *)((int)pvVar9 + 0x24) = 1;
      *(undefined1 *)((int)pvVar9 + 0x28) = 0;
      *(undefined4 *)((int)pvVar9 + 0x30) = 0x3f400000;
      *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      *(undefined1 *)((int)pvVar9 + 0x58) = 8;
      *(undefined1 *)((int)pvVar9 + 0x5a) = 6;
      MB_InitDefaultParams((float *)((int)pvVar9 + 0x60));
      *(undefined4 *)((int)pvVar9 + 100) = 0x3f800000;
      *(undefined4 *)((int)pvVar9 + 0x68) = 0x3e800000;
      *(undefined4 *)((int)pvVar9 + 0x6c) = 0x3e19999a;
      *(undefined4 *)((int)pvVar9 + 0x60) = 0x200;
      fVar2 = g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0x98) = 4;
      *(float *)((int)pvVar9 + 0x84) = fVar2 * 3.0;
      FUN_005e7e98(uVar30 + 0x240,lVar28);
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0x40000000;
      fVar2 = g_FrameTime * 2.9670596;
      *(float *)((int)pvVar9 + 0x254) = g_FrameTime * 2.0;
      *(float *)((int)pvVar9 + 600) = fVar2;
      FUN_005e7e98(uVar30 + 0x120,lVar28);
      uVar22 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      *(undefined2 *)((int)pvVar9 + 0x136) = 0;
      *(undefined2 *)((int)pvVar9 + 0x144) = 0;
      *(undefined ***)((int)pvVar9 + 0x1f0) = &PTR_DAT_00840000;
      moby->state = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar9 + 0x150)))) & 0xfd) +
                    4;
    }
    else {
      FUN_005e7e98(uVar16 - 0x200,lVar28);
      DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar17,uVar30 + 0x240);
      if ((*(int *)((int)pvVar9 + 0x138) != -1) &&
         (iVar19 = PointInsideComplexPoly
                             ((Vec4 *)lVar28,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 == 0)) {
        FUN_005e7e98(lVar28,uVar16 - 0x200);
      }
      if ((moby->updateId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
        uVar18 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar17,0,0,uVar18);
      }
      if (bVar14) {
        fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      if ((dVar32 < (double)fVar2) &&
         (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
          (iVar19 = PointInsideComplexPoly
                              ((Vec4 *)(puVar13 + 0x30),
                               (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                               Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
        if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
          *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
          uVar18 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar17,6,0,uVar18);
          uVar22 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
        }
        FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                     (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
        dVar35 = 2.0;
        if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
           (iVar19 = M340_0034aa40(lVar17), iVar19 == 0)) {
          if (bVar14) {
            fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
          }
          else {
            fVar2 = *(float *)((int)pvVar9 + 0x140);
          }
          if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
            uVar18 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar17,1,0,uVar18);
            *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
            moby->state = '\x03';
          }
        }
        else {
          uVar18 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar17,7,0,uVar18);
          uVar22 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          moby->state = '\a';
        }
      }
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 3) {
    if (moby->animationId == '\x05') {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar18 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar17,0,0,uVar18);
        moby->state = '\x01';
      }
    }
    else {
      uVar18 = idol::GetAnimDuration(5);
      MB_SetAnimation(lVar17,5,0,uVar18);
      *(float *)((int)pvVar9 + 0x78) = g_FrameTime * -7.668;
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 4) {
    if (!bVar14) {
      fVar2 = *(float *)((int)pvVar9 + 0x140);
    }
    else {
      fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
    }
    if (((double)fVar2 <= dVar32) ||
       (((!bVar14 && (*(int *)((int)pvVar9 + 0x138) != -1)) &&
        (iVar19 = PointInsideComplexPoly
                            ((Vec4 *)(puVar13 + 0x30),
                             (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                             Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 == 0)))) {
      if (!bVar14) {
        FUN_005e7e98(uVar16 - 0x220,uVar30 + 0x120);
        dVar32 = (double)FUN_005e8588(lVar28,uVar30 + 0x120);
        if (dVar32 < 1.0) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          moby->state = '\x01';
        }
      }
    }
    else {
      if (bVar14) {
        fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      dVar35 = (double)M340_0034ab98((double)fVar2,lVar17,uVar16 - 0x220);
      if (((dVar32 < 2.0) && (*(short *)((int)pvVar9 + 0x146) == 0)) &&
         (iVar19 = M340_0034aa40(lVar17), iVar19 != 0)) {
        uVar18 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar17,7,0,uVar18);
        uVar22 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
        moby->state = '\a';
      }
    }
    OrganicDeltAngSpeed
              (dVar35,(double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
               (double)(g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130);
    goto LAB_0034ccb4;
  }
  pSVar12 = Splines[*(int *)((int)pvVar9 + 0x150)];
  if (!bVar14) {
    fVar2 = *(float *)((int)pvVar9 + 0x140);
  }
  else {
    fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
  }
  if ((dVar32 < (double)fVar2) &&
     (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
      (iVar19 = PointInsideComplexPoly
                          ((Vec4 *)(puVar13 + 0x30),
                           (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                           Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
    if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
      *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
      puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar17,6,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x4c,0x34b228);
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
    }
    FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                 (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
    dVar35 = 2.0;
    if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
       (iVar19 = M340_0034aa40(lVar17), iVar19 == 0)) {
      if (bVar14) {
        fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
        *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
        moby->state = '\x03';
      }
    }
    else {
      puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0x4c,0x34b228);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      moby->state = '\a';
    }
  }
  dVar35 = (double)FUN_005e8588(pSVar12->points + *(int *)((int)pvVar9 + 0x154),lVar28);
  if (dVar35 < 1.0) {
LAB_0034c3a0:
    iVar19 = *(int *)((int)pvVar9 + 0x154) + 1;
    *(int *)((int)pvVar9 + 0x154) = iVar19;
    if (iVar19 == pSVar12->cnt) {
      *(undefined4 *)((int)pvVar9 + 0x154) = 0;
    }
  }
  else {
    dVar32 = (double)(moby->rotation).z;
    dVar35 = (double)FUN_005e8338((double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].x -
                                          (moby->pos).x),
                                  (double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].y -
                                          (moby->pos).y));
    dVar35 = (double)FastSubRots((float)dVar32,(float)dVar35);
    if (2.356194496154785 < dVar35) goto LAB_0034c3a0;
  }
  iVar19 = 0;
  uVar29 = uVar30;
  do {
    if (((*(short *)((int)pvVar9 + 0x146) == 0) &&
        (iVar20 = *(int *)((int)uVar29 + 0x160), iVar20 != -1)) &&
       (iVar20 = MB_IsPntInCuboid((Vec4 *)lVar28,(longlong)iVar20), iVar20 != 0)) {
      *(short *)((int)pvVar9 + 0x158) = (short)*(undefined4 *)((int)pvVar9 + iVar19 * 4 + 0x160);
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar9 + 0x15a) = 0;
      break;
    }
    iVar19 = iVar19 + 1;
    uVar29 = uVar29 + 4;
  } while (iVar19 < 4);
  iVar19 = *(int *)((int)pvVar9 + 0x154);
  fVar2 = (moby->pos).x;
  *(float *)(puVar13 + 0x10) = pSVar12->points[iVar19].x;
  *(float *)((int)puVar13 + 0x84) = pSVar12->points[iVar19].y;
  *(float *)(puVar13 + 0x11) = pSVar12->points[iVar19].z;
  fVar7 = (moby->pos).y;
  *(float *)((int)puVar13 + 0x8c) = pSVar12->points[iVar19].w;
  uVar18 = FUN_005e8338((double)(pSVar12->points[iVar19].x - fVar2),
                        (double)(pSVar12->points[iVar19].y - fVar7));
  OrganicDeltAngSpeed
            (uVar18,(double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
             (double)(g_FrameTime * 3.1415927),lVar17,&DAT_0034b228,uVar30 + 0x130);
LAB_0034ccb4:
  dVar35 = 0.0;
  if (0 < *(int *)((int)pvVar9 + 0x13c)) {
    dVar33 = 3.1415927410125732;
    dVar32 = (double)FastWrapRot((moby->rotation).z,3.1415927);
    dVar32 = (double)cosf((float)dVar32);
    fVar2 = (moby->rotation).z;
    *(float *)(puVar13 + 0x16) = (float)(dVar32 * (double)*(float *)((int)pvVar9 + 0x13c));
    FastWrapRot(fVar2,(float)dVar33);
    dVar32 = (double)FUN_005e8128();
    fVar2 = *(float *)((int)pvVar9 + 0x13c);
    lVar27 = uVar16 - 0x1f0;
    *(undefined4 *)(puVar13 + 0x17) = 0;
    *(float *)((int)puVar13 + 0xb4) = (float)(dVar32 * (double)fVar2);
    FUN_005e7f54(lVar27,lVar27,lVar28);
    *(float *)((int)pvVar9 + 0x13c) =
         *(float *)((int)pvVar9 + 0x13c) + -10.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
    CollMovingSphere
              (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
               lVar28,lVar27);
  }
  uVar1 = moby->state;
  if (uVar1 != '\t') {
    if (uVar1 == '\x04') {
      if (moby->animationId != '\x01') {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      }
      dVar35 = (double)cosf((moby->rotation).z);
      dVar32 = 2.0;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar13 + 0x18) = (float)((double)(g_FrameTime * 2.0) * dVar35);
      dVar35 = (double)FUN_005e8128((double)fVar2);
      dVar31 = (double)g_FrameTime;
      lVar27 = uVar16 - 0x1e0;
      *(undefined4 *)(puVar13 + 0x19) = 0;
      *(float *)((int)puVar13 + 0xc4) = (float)((double)(float)(dVar31 * dVar32) * dVar35);
      FUN_005e7f54(lVar27,lVar27,lVar28);
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar13 + 0x1a) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar13 + 0xd4) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar13 + 0x1b) = fVar4;
      *(f32 *)((int)puVar13 + 0xdc) = fVar3;
      CollMovingSphere
                (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
                 uVar16 - 0x1d0,lVar27);
      if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
         (iVar19 = PointInsideComplexPoly
                             ((Vec4 *)(puVar13 + 0x1a),
                              (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)) {
        fVar3 = *(f32 *)((int)puVar13 + 0xd4);
        (moby->pos).x = *(f32 *)(puVar13 + 0x1a);
        fVar4 = *(f32 *)(puVar13 + 0x1b);
        (moby->pos).y = fVar3;
        fVar3 = *(f32 *)((int)puVar13 + 0xdc);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar3;
      }
    }
    else if (uVar1 == '\x03') {
      uVar18 = FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - (moby->pos).x),
                            (double)(*(float *)((int)puVar13 + 0x84) - (moby->pos).y));
      uVar21 = (uint)moby->animationId;
      dVar31 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
      dVar32 = 3.0;
      if (dVar31 < (double)(g_FrameTime * 3.0 * 2.0)) {
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        uVar21 = 0;
        fVar5 = (moby->pos).z;
        fVar6 = (moby->pos).w;
        *(f32 *)(puVar13 + 0x1c) = fVar3;
        *(f32 *)((int)puVar13 + 0xe4) = fVar4;
        *(f32 *)(puVar13 + 0x1d) = fVar5;
        *(f32 *)((int)puVar13 + 0xec) = fVar6;
      }
      else {
        dVar33 = (double)FastDiffRots(uVar18,(double)(moby->rotation).z);
        dVar34 = (double)FastWrapRot((float)dVar33,0.3926991);
        dVar31 = dVar34;
        if (dVar34 - dVar35 < 0.0) {
          dVar31 = (double)(float)(dVar34 + 6.2831854820251465);
        }
        dVar35 = (double)FastIntToDouble
                                   (dVar34,(double)(float)(dVar34 + 6.2831854820251465),
                                    *(undefined1 *)((int)pvVar9 + 0x14c));
        dVar34 = 1.5707963705062866;
        dVar35 = (double)FastAddRots((float)(dVar35 * 1.5707963705062866));
        dVar35 = (double)FastAddRots((float)dVar35);
        dVar35 = (double)FastSubRots((float)dVar35,(float)dVar33);
        bVar25 = *(byte *)((int)pvVar9 + 0x14c);
        if (1.7453292608261108 < dVar35) {
          bVar25 = FastDoubleToInt
                             ((double)((float)(dVar31 * 1.9989999532699585) * 0.31830987));
          *(byte *)((int)pvVar9 + 0x14c) = bVar25;
          *(undefined4 *)((int)puVar13 + 500) = 3;
          *(undefined4 *)(puVar13 + 0x3e) = 2;
          *(undefined4 *)((int)puVar13 + 0x1ec) = 4;
          *(undefined4 *)(puVar13 + 0x3d) = 1;
          uVar21 = *(uint *)((int)puVar13 + (uint)bVar25 * 4 + 0x1e8);
        }
        dVar35 = (double)FastIntToDouble(bVar25);
        dVar35 = (double)FastAddRots((float)(dVar35 * dVar34));
        dVar31 = (double)FastWrapRot((moby->rotation).z,(float)dVar35);
        dVar31 = (double)cosf((float)dVar31);
        fVar2 = (moby->rotation).z;
        *(float *)(puVar13 + 0x1c) =
             (float)((double)(float)((double)g_FrameTime * dVar32) * dVar31);
        FastWrapRot(fVar2,(float)dVar35);
        dVar35 = (double)FUN_005e8128();
        dVar31 = (double)g_FrameTime;
        *(undefined4 *)(puVar13 + 0x1d) = 0;
        *(float *)((int)puVar13 + 0xe4) = (float)((double)(float)(dVar31 * dVar32) * dVar35);
        FUN_005e7f54(uVar16 - 0x1c0,uVar16 - 0x1c0,lVar28);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
        fVar6 = (moby->pos).w;
      }
      *(f32 *)(puVar13 + 0x1e) = fVar3;
      *(f32 *)((int)puVar13 + 0xf4) = fVar4;
      *(f32 *)(puVar13 + 0x1f) = fVar5;
      *(f32 *)((int)puVar13 + 0xfc) = fVar6;
      iVar19 = CollMovingSphere
                         (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,
                          0x3fe0c15240000000,lVar17,uVar16 - 0x1b0,uVar16 - 0x1c0);
      if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
         (iVar20 = PointInsideComplexPoly
                             ((Vec4 *)(puVar13 + 0x1e),
                              (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar20 != 0)) {
        fVar3 = *(f32 *)((int)puVar13 + 0xf4);
        (moby->pos).x = *(f32 *)(puVar13 + 0x1e);
        fVar4 = *(f32 *)(puVar13 + 0x1f);
        (moby->pos).y = fVar3;
        fVar3 = *(f32 *)((int)puVar13 + 0xfc);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar3;
        if (iVar19 == 0) {
          uVar21 = 0;
        }
      }
      else {
        uVar21 = 0;
      }
      iVar19 = FastDecTimerS16(uVar30 + 0x144);
      if ((iVar19 != 0) && (uVar21 != moby->animationId)) {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar17,uVar21,0,*(undefined4 *)((int)puVar13 + 0x1fc));
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x8c,0x34b228);
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x144,uVar30);
        *(undefined2 *)((int)pvVar9 + 0x144) = uVar22;
      }
    }
    else if ((uVar1 == '\x05') || (((uVar1 == '\a' && (moby->updateId == '\a')) && (15.0 < dVar31)))
            ) {
      dVar35 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
      dVar31 = 2.0;
      if ((double)(g_FrameTime * 2.0) < dVar35) {
        dVar35 = (double)FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)((int)puVar13 + 0x84) - (moby->pos).y));
        dVar35 = (double)cosf((float)dVar35);
        fVar2 = (moby->pos).x;
        fVar7 = (moby->pos).y;
        *(float *)(puVar13 + 0x20) =
             (float)((double)(float)((double)g_FrameTime * dVar31) * dVar35);
        FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - fVar2),
                     (double)(*(float *)((int)puVar13 + 0x84) - fVar7));
        dVar35 = (double)FUN_005e8128();
        dVar32 = (double)g_FrameTime;
        *(undefined4 *)(puVar13 + 0x21) = 0;
        lVar27 = uVar16 - 0x1a0;
        *(float *)((int)puVar13 + 0x104) = (float)((double)(float)(dVar32 * dVar31) * dVar35);
        FUN_005e7f54(lVar27,lVar27,lVar28);
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar13 + 0x22) = (moby->pos).x;
        fVar4 = (moby->pos).z;
        *(f32 *)((int)puVar13 + 0x114) = fVar3;
        fVar3 = (moby->pos).w;
        *(f32 *)(puVar13 + 0x23) = fVar4;
        *(f32 *)((int)puVar13 + 0x11c) = fVar3;
        CollMovingSphere
                  (0x3fd0000000000000,0x3ff4000000000000,0x3fe0000000000000,0x3fe0c15240000000,
                   lVar17,uVar16 - 400,lVar27);
        if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
           (iVar19 = PointInsideComplexPoly
                               ((Vec4 *)(puVar13 + 0x22),
                                (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                                Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)) {
          fVar3 = *(f32 *)((int)puVar13 + 0x114);
          (moby->pos).x = *(f32 *)(puVar13 + 0x22);
          fVar4 = *(f32 *)(puVar13 + 0x23);
          (moby->pos).y = fVar3;
          fVar3 = *(f32 *)((int)puVar13 + 0x11c);
          (moby->pos).z = fVar4;
          (moby->pos).w = fVar3;
        }
      }
    }
    else if ((uVar1 != '\x06') && (uVar1 != '\b')) {
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar13 + 0x24) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar13 + 0x124) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar13 + 0x25) = fVar4;
      *(f32 *)((int)puVar13 + 300) = fVar3;
      CollMovingSphere
                (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
                 lVar28,uVar16 - 0x180);
    }
    fVar2 = g_FrameTimeSq * 9.8 + *(float *)((int)pvVar9 + 0x78);
    *(float *)((int)pvVar9 + 0x78) = fVar2;
    dVar31 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
    dVar32 = 0.5;
    dVar35 = (double)GetGroundZ(0x3fe0000000000000,lVar28,0);
    fVar2 = (float)((double)(moby->pos).z - dVar31);
    dVar31 = (double)fVar2;
    (moby->pos).z = fVar2;
    if (dVar31 < dVar35) {
      (moby->pos).z = (float)dVar35;
      *(undefined4 *)((int)pvVar9 + 0x78) = 0;
      dVar31 = (double)(moby->pos).z;
    }
    if ((double)(*(float *)((int)pvVar9 + 0x128) - 5.0) <= dVar31) {
      dVar35 = (double)FUN_005e8588(lVar28,0x951500);
      if (dVar35 < 20.0) {
        *(undefined4 *)(puVar13 + 0x26) = 0;
        *(undefined4 *)((int)puVar13 + 0x134) = 0;
        *(undefined4 *)(puVar13 + 0x27) = 0;
        *(undefined4 *)((int)puVar13 + 0x13c) = 0;
        dVar34 = 1.0;
        dVar33 = -1.0;
        dVar35 = (double)MB_randRangeFloat(1.0,-1.0);
        dVar31 = 0.10000000149011612;
        *(float *)(puVar13 + 0x26) = (float)((double)(g_FrameTime * 0.1) * dVar35);
        dVar35 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        *(float *)((int)puVar13 + 0x134) =
             (float)((double)(float)((double)g_FrameTime * dVar31) * dVar35);
        dVar35 = (double)MB_randRangeFloat(0.8,1.2);
        *(float *)(puVar13 + 0x27) = (float)((double)(g_FrameTime * -2.5) * dVar35);
        uVar21 = MB_randInt(100);
        GetBonePosition(lVar17,0,uVar16 - 0x160);
        FUN_005e7d64(uVar16 - 0x170,uVar16 - 0x170,lVar17 + 0xc0);
        uVar18 = MB_randRangeFloat(75000.0,100000.0);
        if ((uVar21 & 1) == 0) {
          iVar19 = MB_randRange(0x14,0x1e);
        }
        else {
          iVar19 = MB_randRange(10,0xf);
        }
        puVar13[0x3f] = (longlong)iVar19;
        puVar13[0x3f] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x3f] + dVar32));
        SpawnPart_22
                  (uVar18,uVar16 - 0x160,uVar16 - 0x170,
                   (ZERO_MASK((uVar21 & 1)) & 0x707000U) + 0x400f0f7f,0x272727);
      }
      MB_ColorDyingMoby(lVar17,uVar30 + 0xb0);
    }
    else {
      M340_0034a8d8(lVar17);
      DeleteMoby(moby);
    }
  }
  return;
}



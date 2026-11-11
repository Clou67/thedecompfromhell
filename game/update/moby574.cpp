// game/update/moby574.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x3c1f3c-0x3c656c
#include <math.h>
#include "game/update/moby574.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby572.h"
#include "game/update/moby833.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03c1f3c (0x58 bytes)
void M574_003c1f3c(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}


// 0x03c1f94 (0x58 bytes)
void M574_003c1f94(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x03c1fec (0x58 bytes)
void M574_003c1fec(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x03c2044 (0x38 bytes)
void M574_003c2044(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}


// 0x03c207c (0x40 bytes)
longlong M574_003c207c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03c20bc (0x14 bytes)
void M574_003c20bc(void)

{
  DAT_00845fb4 = 0x10000;
  return;
}


// 0x03c20d0 (0x28 bytes)
undefined8 FUN_003c20d0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x23e) && (*(char *)(param_1 + 0x20) == '\x0e')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x03c20f8 (0xc bytes)
void FUN_003c20f8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}


// 0x03c2108 (0xc4 bytes)
undefined8 M573_003c2108(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  double dVar3;
  
  pvVar2 = param_1->pVar;
  if (((param_1 == (MobyInstance *)0x0) || (uVar1 = param_1->state, uVar1 == 0xfd || uVar1 == 0xfe))
     || (param_1->oClass != BLARG_COMMANDER_023E)) {
    return 0;
  }
  if (param_1->updateId == '\n') {
    dVar3 = (double)BlendAnimFrame(param_1);
    uVar1 = param_1->state;
    if (10.0 <= dVar3) {
      return 1;
    }
  }
  if ((uVar1 != '\r' && uVar1 != '\n') && (*(int *)((int)pvVar2 + 0x284) != -1)) {
    return 0;
  }
  return 1;
}


// 0x03c21cc (0x40 bytes)
undefined8 M574_003c21cc(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    if (((cVar1 != -3 && cVar1 != -2) && (*(short *)(param_1 + 0xa6) == 0x23e)) && (cVar1 == '\t'))
    {
      return 1;
    }
  }
  return 0;
}


// 0x03c220c (0xc4 bytes)
undefined8 M574_003c220c(int param_1)

{
  u8 uVar1;
  int iVar2;
  MobyInstance *local_10 [4];
  
  if (param_1 != 0xff) {
    MB_GetFirstMobyInGroup(local_10,param_1,'\0','\0');
    while (local_10[0] != (MobyInstance *)0x0) {
      if (local_10[0] != (MobyInstance *)0x0) {
        uVar1 = local_10[0]->state;
        if (((uVar1 != 0xfd && uVar1 != 0xfe) && (local_10[0]->oClass == BLARG_COMMANDER_023E)) &&
           (uVar1 == '\t')) {
          return 1;
        }
      }
      iVar2 = M866_003c04c8();
      if (iVar2 != 0) {
        return 1;
      }
      MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
    }
  }
  return 0;
}


// 0x03c22e8 (0x1e4 bytes)
undefined8 M574_003c22e8(double param_1,int param_2,float *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  iVar2 = *(int *)(param_2 + 0x78);
  if (param_3[0x10] != 0.0) {
    iVar3 = *(int *)(iVar2 + 0x264);
    if (((iVar3 != -1) && (g_MobyInstance[iVar3].oClass == TRAIN_LOCOMOTIVE)) &&
       (g_MobyInstance[iVar3].setByGroup != '\x04')) {
      return 0;
    }
    dVar6 = (double)FastDiffRots(param_1,(double)*(float *)(param_2 + 0x48));
    dVar6 = ABS(dVar6);
    if (((((0.7853981852531433 <= dVar6) && (*(char *)(iVar2 + 0x263) == '\0')) &&
         (*(char *)(param_2 + 0x53) != '\x01')) || (1.5707963705062866 < dVar6)) &&
       (fVar4 = *(float *)(param_2 + 0x14) - param_3[1],
       fVar5 = *(float *)(param_2 + 0x10) - *param_3, SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 20.0)) {
      if (dVar6 <= 1.1780972480773926) {
        MB_SetAnimation(param_2,9,0,(int)(animationSpeed * 10.5));
      }
      else {
        MB_SetAnimation(param_2,1,0,(int)(animationSpeed * 10.5));
        *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
      }
      *(float *)(iVar2 + 0x28c) = (float)param_1;
      uVar1 = *(undefined1 *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x20) = 0xc;
      *(undefined1 *)(param_2 + 0xbc) = uVar1;
      return 1;
    }
  }
  return 0;
}


// 0x03c24e8 (0x538 bytes)
// inlined: FastAtan2 @0x3c266c, FastAtan2 @0x3c2810
void M574_003c24e8(int param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r29;
  undefined4 uVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x2c] = in_f26;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2b] = unaff_r31;
  puVar10[0x29] = unaff_r29;
  puVar10[0x2a] = unaff_r30;
  iVar8 = *(int *)(param_1 + 0x78);
  MB_getTarget((double)*(float *)(iVar8 + 0x270),param_1,param_2,uVar13 - 0x100);
  *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(iVar8 + 0x120);
  dVar29 = 0.0;
  dVar28 = dVar29;
  dVar30 = dVar29;
  MB_PathFollowToPos
            (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)(iVar8 + 0x130),param_1 + 0x10,
             uVar13 - 0x110,uVar13 - 0xb0,uVar13 - 0xac);
  uVar19 = 0;
  uVar14 = 0;
  *(undefined4 *)(iVar8 + 0x120) = 0;
  do {
    if ((int)uVar14 != *(int *)(puVar10 + 0x1c)) {
      fVar4 = *(float *)(param_1 + 0x10);
      iVar11 = *(int *)(iVar8 + 0x130) + (int)((uVar14 & 0xffffffff) << 4);
      fVar5 = *(float *)(param_1 + 0x14);
      dVar27 = (double)*(float *)(iVar11 + 0x10);
      dVar26 = (double)*(float *)(iVar11 + 0x14);
      fVar2 = (float)(dVar27 - (double)fVar4);
      fVar3 = (float)(dVar26 - (double)fVar5);
      dVar25 = (double)*(float *)(iVar11 + 0x18);
      dVar22 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)((int)puVar10 + 0xf4) = fVar2;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)((int)puVar10 + 0xfc) = (float)(dVar22 - dVar23);
      uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x1f) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)((int)puVar10 + 0xf4));
      if ((double)*(float *)((int)puVar10 + 0xfc) - dVar29 < 0.0) {
        dVar21 = dVar23;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar23 = ABS((double)*(float *)(puVar10 + 0x1f));
      if ((double)*(float *)((int)puVar10 + 0xfc) - dVar29 < 0.0) {
        dVar23 = dVar22;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar22 = dVar29;
      if (dVar29 < dVar21) {
        lVar16 = uVar13 - 0x180;
        lVar17 = uVar13 - 0x60;
        lVar15 = uVar13 - 0x70;
        lVar20 = 2;
        fVar6 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 300) = fVar6;
        *(float *)((int)puVar10 + 0x124) = fVar6;
        *(float *)(puVar10 + 0x25) = fVar6;
        *(float *)(puVar10 + 0x24) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar7;
        *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar6;
        *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar6 * fVar6;
          iVar11 = (int)lVar15;
          lVar15 = lVar15 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar17 = uVar13 - 0x70;
        pfVar18 = (float *)&DAT_007358e0;
        lVar16 = lVar1;
        lVar15 = lVar17;
        do {
          fVar6 = *pfVar18;
          fVar7 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
          lVar15 = lVar15 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar15 = 2;
        lVar16 = lVar1;
        dVar21 = dVar29;
        do {
          iVar11 = (int)lVar16;
          iVar12 = (int)lVar17;
          lVar16 = lVar16 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar11 + 0x120)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar22 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
      }
      fVar2 = (float)((double)*(float *)(puVar10 + 0x12) - (double)fVar4);
      fVar3 = (float)((double)*(float *)((int)puVar10 + 0x94) - (double)fVar5);
      dVar24 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)(puVar10 + 0x1d) = fVar2;
      *(float *)((int)puVar10 + 0xec) = fVar3;
      *(float *)(puVar10 + 0x1e) = (float)(dVar24 - dVar23);
      uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)(puVar10 + 0x1d));
      if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
        dVar21 = dVar23;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar10 + 0xec));
      if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
        dVar23 = dVar24;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar24 = dVar29;
      if (dVar29 < dVar21) {
        lVar16 = uVar13 - 0x180;
        lVar15 = uVar13 - 0x90;
        lVar17 = uVar13 - 0x80;
        lVar20 = 2;
        fVar4 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar10 + 0x10c) = fVar4;
        *(float *)((int)puVar10 + 0x104) = fVar4;
        *(float *)(puVar10 + 0x21) = fVar4;
        *(float *)(puVar10 + 0x20) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5;
        *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar4;
        *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar4 * fVar4;
          iVar11 = (int)lVar15;
          lVar16 = lVar16 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar17 = uVar13 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar16 = lVar1;
        lVar15 = lVar17;
        do {
          fVar4 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
          lVar15 = lVar15 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar15 = 2;
        lVar16 = lVar1;
        dVar21 = dVar29;
        do {
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar12 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar11 + 0x100)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar24 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar21 = (double)FastSubRots((float)dVar22,(float)dVar24);
      fVar2 = (float)((double)*(float *)((int)puVar10 + 0x94) - dVar26);
      fVar2 = SQRT((float)((double)*(float *)(puVar10 + 0x13) - dVar25) *
                   (float)((double)*(float *)(puVar10 + 0x13) - dVar25) +
                   (float)((double)*(float *)(puVar10 + 0x12) - dVar27) *
                   (float)((double)*(float *)(puVar10 + 0x12) - dVar27) + fVar2 * fVar2);
      dVar22 = (double)fVar2;
      *(float *)((int)puVar10 + 0xe4) = fVar2;
      if (1.5707963705062866 <= dVar21) {
        if (((16.0 <= dVar22) && ((dVar22 < dVar30 || (dVar30 < 16.0)))) ||
           ((16.0 > dVar22 && (dVar30 < dVar22)))) {
          uVar19 = *(undefined4 *)(iVar8 + 0x120);
          dVar28 = dVar21;
          dVar30 = dVar22;
        }
      }
      else if (dVar28 < dVar21) {
        uVar19 = *(undefined4 *)(iVar8 + 0x120);
        dVar28 = dVar21;
        dVar30 = dVar22;
      }
    }
    uVar9 = **(uint **)(iVar8 + 0x130);
    lVar16 = (ulonglong)*(uint *)(iVar8 + 0x120) + (ulonglong)uVar9 +
             (longlong)*(char *)(iVar8 + 0x124);
    uVar14 = lVar16 - (longlong)((int)lVar16 / (int)uVar9) * (longlong)(int)uVar9;
    *(int *)(iVar8 + 0x120) = (int)uVar14;
  } while ((int)uVar14 != 0);
  *(undefined4 *)(iVar8 + 0x120) = uVar19;
  return;
}


// 0x03c2a58 (0xc2c bytes)
// inlined: FastAtan2 @0x3c2c5c, FastAtan2 @0x3c2e18, FastAtan2 @0x3c2fd8
void M574_003c2a58(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  void *pvVar6;
  MobyInstance *pMVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x140;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x2a] = in_LR;
  puVar9[0x27] = in_f31;
  puVar9[0x25] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar9[0x26] = unaff_r31;
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = *(int *)((int)pvVar6 + 0x38);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  if (iVar14 != 0) {
    auVar29 = ZEXT416(0xffffffff);
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(4,0x3c2a20);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = vectorMultiplyAddFloatingPoint
                        (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                         auVar30);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = vectorSplatHalfWord(auVar29,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar29,0x252,uVar22);
    *(undefined2 *)((int)pvVar6 + 0x252) = uVar8;
  }
  iVar14 = FastDecTimerS16(uVar22 + 0x252);
  if (iVar14 == 0) {
    fVar1 = *(float *)((int)pvVar6 + 0x26c) + 5.0;
  }
  else {
    fVar1 = *(float *)((int)pvVar6 + 0x26c);
  }
  *(float *)((int)pvVar6 + 0x270) = fVar1;
  iVar14 = MB_damage(param_1,0x330000,0);
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar22 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if (((iVar14 == 0) || (*(int *)(puVar9 + 0xe) == 1)) || (param_1->state == '\r'))
  goto LAB_003c3648;
  pMVar7 = *(MobyInstance **)(iVar14 + 0x20);
  dVar28 = dVar27;
  if (pMVar7 == (MobyInstance *)0x0) {
    fVar1 = (param_1->pos).x - g_heroPosition.x;
    fVar2 = (param_1->pos).y - g_heroPosition.y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)((int)puVar9 + 0x7c) = fVar1;
    *(float *)(puVar9 + 0x10) = fVar2;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0x7c));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x90;
      lVar18 = uVar13 - 0xa0;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xac) = fVar3;
      *(float *)((int)puVar9 + 0xa4) = fVar3;
      *(float *)(puVar9 + 0x15) = fVar3;
      *(float *)(puVar9 + 0x14) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4;
      *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar3;
      *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0x90) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0xa0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  else if (pMVar7 == g_currentWeaponMoby) {
    fVar1 = (param_1->pos).x - g_heroPosition.x;
    fVar2 = (param_1->pos).y - g_heroPosition.y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    *(float *)(puVar9 + 0x12) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar9 + 0x11));
    if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar18 = uVar13 - 0x80;
      lVar21 = uVar13 - 0x70;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar3;
      *(float *)(puVar9 + 0x18) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4;
      *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar3;
      *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xb0) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x80;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xc0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  else {
    fVar1 = (param_1->pos).x - (pMVar7->pos).x;
    fVar2 = (param_1->pos).y - (pMVar7->pos).y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)((int)puVar9 + 0x94) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)((int)puVar9 + 0x9c) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar9 + 0x13));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x50;
      lVar18 = uVar13 - 0x60;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xec) = fVar3;
      *(float *)((int)puVar9 + 0xe4) = fVar3;
      *(float *)(puVar9 + 0x1d) = fVar3;
      *(float *)(puVar9 + 0x1c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar4;
      *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar3;
      *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xd0) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x60;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xe0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xe0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  *(float *)(puVar9 + 0xf) = (float)dVar28;
  fVar1 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
  *(float *)((int)pvVar6 + 0x20) = fVar1;
  fVar2 = DAT_0071f418;
  if ((double)fVar1 <= dVar27) {
LAB_003c34cc:
    fVar1 = DAT_0071f418 * 40.0;
    *(float *)((int)pvVar6 + 0x80) = fVar1;
    fVar2 = fVar2 * DAT_00845fe0;
    *(float *)((int)pvVar6 + 0x84) = fVar2;
    dVar28 = 2.0;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x8c) = SQRT(fVar1 * 4.0);
    fVar1 = (SQRT(fVar1 * 4.0) * 2.0) / fVar1;
    *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + 3.0 / fVar1;
    uVar5 = *(undefined4 *)(iVar14 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar5;
    uVar5 = *(undefined4 *)(iVar14 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
    MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
    MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
    *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41200000;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41a00000;
    dVar27 = (double)g_FrameTime;
    *(undefined1 *)((int)pvVar6 + 0x255) = 0;
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
    *(float *)((int)pvVar6 + 0xbc) = (float)(dVar27 * dVar28);
    param_1->state = '\r';
    PlayMobySound(3,0,param_1);
    if (param_1->animationId != '\a') {
      puVar9[0x20] = (longlong)(int)(animationSpeed * 6.5);
      MB_SetAnimation(param_1,7,0,*(undefined4 *)((int)puVar9 + 0x104));
    }
  }
  else if (iVar15 < 6) {
    if (iVar15 < 3) {
      if (iVar15 == 1) goto LAB_003c34cc;
    }
    else if (iVar15 < 4) {
LAB_003c32ac:
      *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      fVar2 = DAT_0071f418;
      fVar1 = DAT_0071f418 * 80.0;
      *(float *)((int)pvVar6 + 0x80) = fVar1;
      fVar2 = fVar2 * DAT_00845fe0;
      *(float *)((int)pvVar6 + 0x84) = fVar2;
      fVar4 = DAT_00845fdc;
      fVar3 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar3;
      fVar1 = (fVar3 * 2.0) / fVar1;
      *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + fVar4 / fVar1;
      uVar5 = *(undefined4 *)(iVar14 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar5;
      uVar5 = *(undefined4 *)(iVar14 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
      MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
      MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41500000;
      param_1->state = '\n';
      PlayMobySound(1,0,param_1);
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      fVar2 = DAT_0071f418;
      fVar1 = DAT_0071f418 * 80.0;
      *(float *)((int)pvVar6 + 0x80) = fVar1;
      fVar2 = fVar2 * DAT_00845fe0;
      *(float *)((int)pvVar6 + 0x84) = fVar2;
      fVar4 = DAT_00845fdc;
      fVar3 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar3;
      fVar1 = (fVar3 * 2.0) / fVar1;
      *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + fVar4 / fVar1;
      uVar5 = *(undefined4 *)(iVar14 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar5;
      uVar5 = *(undefined4 *)(iVar14 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
      MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
      MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41200000;
      param_1->state = '\n';
      PlayMobySound(1,0,param_1);
    }
  }
  else if (iVar15 < 9) {
    if (6 < iVar15) goto LAB_003c32ac;
    *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
    fVar3 = DAT_0071f418;
    fVar1 = DAT_0071f418 * 80.0;
    *(float *)((int)pvVar6 + 0x80) = fVar1;
    fVar12 = DAT_00845fe0;
    fVar4 = DAT_00845fdc;
    fVar2 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x8c) = fVar2;
    fVar1 = (fVar2 * 2.0) / fVar1;
    *(float *)((int)pvVar6 + 0x88) = (fVar3 * fVar12 * 0.5 * fVar1 + fVar4 / fVar1) * 0.5;
    uVar5 = *(undefined4 *)(iVar14 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar5;
    uVar5 = *(undefined4 *)(iVar14 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
    MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
    dVar27 = (double)FastSubRots((param_1->rotation).z,*(float *)(puVar9 + 0xf));
    if (dVar27 < 1.0471975803375244) {
      dVar27 = (double)FastWrapRot(*(float *)(puVar9 + 0xf),3.1415927);
      (param_1->rotation).z = (float)dVar27;
    }
    MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
    MB_SetAnimationNoBlend(param_1,5,5);
    *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
    param_1->state = '\n';
    PlayMobySound(1,0,param_1);
  }
  else if ((0xb < iVar15) && (iVar15 < 0xe)) {
    *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
  }
  MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
LAB_003c3648:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar22 + 0x60);
  return;
}


// 0x03c3730 (0x2e3c bytes)
/* Moby 574 */

void UpdateMoby_574(MobyInstance *moby)

{
  s8 sVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  int *piVar9;
  void *pvVar10;
  Spline *pSVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  int iVar16;
  byte bVar20;
  undefined2 uVar19;
  undefined4 uVar17;
  undefined1 uVar21;
  uint uVar18;
  int iVar22;
  int iVar23;
  u8 uVar24;
  int *piVar26;
  longlong lVar25;
  longlong lVar27;
  MobyInstance *pMVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  GPiece<16> auStack_210;
  float local_200;
  float local_1fc;
  GPiece<16> local_1f0;
  GPiece<16> auStack_1e0;
  GPiece<16> auStack_1d0;
  GPiece<16> auStack_1c0;
  GPiece<16> auStack_1b0;
  GPiece<16> auStack_1a0;
  GPiece<8> auStack_190;
  float local_188;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<16> auStack_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<8> auStack_130;
  float local_128;
  GPiece<16> auStack_120;
  GPiece<24> local_110;
  undefined4 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  Vec4 local_e0 [2];
  GPiece<32> auStack_c0;
  int local_a0;
  uint local_90;
  GPiece<4> auStack_8c;
  uint local_88;
  GPiece<4> auStack_84;
  float local_80;
  GPiece<4> auStack_7c;
  GPiece<8> auStack_78;
  longlong local_70;
  
  lVar15 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  MB_getTarget((double)*(float *)((int)pvVar5 + 0x270),lVar15,0x3c0000,local_e0);
  lVar27 = lVar15 + 0x10;
  dVar29 = (double)FUN_005e8588(lVar27,local_e0);
  MB_SetScaleCheat(0x4004000000000000,(int)pvVar5 + 0x150);
  fVar6 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  uVar18 = (int)fVar6 >> 0x1f;
  uVar12 = (int)fVar7 >> 0x1f;
  fVar8 = (moby->pos).z;
  uVar13 = (int)fVar8 >> 0x1f;
  iVar23 = (uVar18 >> 1 ^ (uint)fVar6) - uVar18;
  iVar22 = (uVar12 >> 1 ^ (uint)fVar7) - uVar12;
  iVar16 = (uVar13 >> 1 ^ (uint)fVar8) - uVar13;
  if (*(char *)((int)pvVar5 + 0x262) == '\x01') {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
      return;
    }
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    uVar24 = moby->state;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else {
    uVar24 = moby->state;
    if (uVar24 != '\x0e') {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
    }
  }
  dVar32 = 2.0;
  if (0x3fffffff < iVar23) {
    if ((((iVar23 < 0x447f4001) && (0x3fffffff < iVar22)) && (iVar22 < 0x447f4001)) &&
       ((0x3fffffff < iVar16 && (iVar16 < 0x447f4001)))) {
      if (*(int *)((int)pvVar5 + 0x134) == -1 && uVar24 != '\r') {
        DeleteMoby(moby);
        return;
      }
      M574_003c2a58(lVar15);
      FastDecTimerU8((int)pvVar5 + 0x263);
      bVar20 = moby->state;
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((moby->enabled != '\0') || (dVar29 < 24.0)) {
        if (bVar20 == 0xc) {
          dVar30 = (double)FastDiffRots
                                     ((double)*(float *)((int)pvVar5 + 0x28c),
                                      (double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x1b8) = (float)(dVar30 * 0.25);
          dVar30 = (double)FastDiffRots
                                     ((double)*(float *)((int)pvVar5 + 0x28c),
                                      (double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x238) = (float)(dVar30 * 0.75);
        }
        else if ((bVar20 < 7) && (dVar29 < (double)*(float *)((int)pvVar5 + 0x270))) {
          uVar34 = FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
          dVar30 = (double)FastDiffRots(uVar34,(double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x238) = (float)dVar30;
        }
        uVar18 = (int)*(uint *)((int)pvVar5 + 0x1b8) >> 0x1f;
        iVar16 = (uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x1b8)) - uVar18;
        if (iVar16 < 0x3f490fdc) {
          if (iVar16 < -0x3f490fdb) {
            *(undefined4 *)((int)pvVar5 + 0x1b8) = 0xbf490fdb;
          }
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x1b8) = 0x3f490fdb;
        }
        uVar18 = (int)*(uint *)((int)pvVar5 + 0x238) >> 0x1f;
        iVar16 = (uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x238)) - uVar18;
        if (iVar16 < 0x3f490fdc) {
          if (iVar16 < -0x3f490fdb) {
            *(undefined4 *)((int)pvVar5 + 0x238) = 0xbf490fdb;
          }
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x238) = 0x3f490fdb;
        }
        dVar33 = 0.029999999329447746;
        dVar30 = 0.30000001192092896;
        MB_UpdateManipulatorRot
                  ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar15,
                   (int)pvVar5 + 0x150,2);
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar33),
                   (double)(float)((double)DAT_0071f40c * dVar30),lVar15,(int)pvVar5 + 0x1d0,3);
        bVar20 = moby->state;
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
      }
      if (bVar20 < 8) {
        if (bVar20 == 7) {
          if (*(short *)((int)pvVar5 + 0x256) == 0) {
            iVar16 = *(int *)((int)pvVar5 + 0x130) + *(int *)((int)pvVar5 + 0x120) * 0x10;
            FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - fVar2),
                         (double)(*(float *)(iVar16 + 0x14) - fVar3));
            iVar16 = M574_003c22e8(lVar15,local_e0);
            if (iVar16 == 0) {
              uVar18 = MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  *(int *)((int)pvVar5 + 0x130) +
                                  *(int *)((int)pvVar5 + 0x120) * 0x10 + 0x10,(int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (((double)*(float *)((int)pvVar5 + 0x278) <= dVar29) ||
                   (10.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  M574_003c22e8(lVar15,local_e0);
                }
                else if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                  else {
                    moby->state = '\x01';
                    if (moby->animationId != '\0') {
                      uVar34 = idol::GetAnimDuration(10);
                      MB_SetAnimation(lVar15,0,0,uVar34);
                    }
                    FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                 (double)(local_e0[0].y - (moby->pos).y));
                    M574_003c22e8(lVar15,local_e0);
                  }
                }
              }
            }
          }
          else {
            moby->state = '\b';
          }
        }
        else if (bVar20 == 6) {
          dVar29 = (double)BlendAnimFrame(moby);
          uVar34 = FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                (double)(local_e0[0].y - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar34,0x3f9eb851e0000000,0x3fd3333340000000,0x3fd3333340000000,lVar15);
          GetBonePosition(lVar15,0,auStack_1d0);
          if ((((25.0 <= dVar29) && (dVar29 <= 31.0)) &&
              (ABS((double)((moby->pos).z - local_e0[0].z)) < dVar32)) &&
             (dVar29 = (double)FUN_005e8588(lVar27,local_e0), dVar29 < 3.5)) {
            dVar29 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                          (double)(local_e0[0].y - (moby->pos).y));
            dVar29 = (double)FastSubRots((float)dVar29,(moby->rotation).z);
            if (dVar29 < 0.2617993950843811) {
              uVar34 = 0x3ff0000000000000;
              dVar29 = (double)cosf((moby->rotation).z);
              dVar33 = 0.20000000298023224;
              dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
              FUN_005e84c0(uVar34,local_110,local_110);
              local_f8 = CONCAT22(1,moby->oClass);
              if (local_a0 != 0) {
                CollDamageMobyDirect
                          (local_a0,0x60,
                           CONCAT44((float)(dVar29 * 0.20000000298023224),(float)(dVar30 * dVar33)),
                           0x3f80000045afdf66,CONCAT44(moby,0x10001),CONCAT44(local_f8,0x3f800000),
                           CONCAT44(uStack_f0,uStack_ec),CONCAT44(uStack_e8,uStack_e4));
              }
              goto LAB_003c5f48;
            }
          }
          if ((moby->field43_0x70 & 2U) != 0) {
            if (*(int *)((int)pvVar5 + 0x274) == 0) {
              M574_003c24e8(lVar15);
              moby->state = '\a';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            else {
              pvVar10 = moby->pVar;
              if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                moby->state = '\a';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              else {
                moby->state = '\x01';
                if (moby->animationId != '\0') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,0,0,uVar34);
                }
                FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                             (double)(local_e0[0].y - (moby->pos).y));
                M574_003c22e8(lVar15,local_e0);
              }
            }
          }
        }
        else if (bVar20 == 5) {
          iVar16 = MB_MayaFrameTrigger(8.0,moby);
          if (iVar16 != 0) {
            *(char *)((int)pvVar5 + 0x254) = *(char *)((int)pvVar5 + 0x254) + '\x01';
            GetBonePosition(lVar15,0,auStack_210);
            FUN_005e81f0(&local_200,auStack_c0,auStack_210);
            dVar31 = 6.0;
            FUN_005e7f98((double)(g_FrameTime * 6.0),&local_200,&local_200);
            dVar33 = (double)FUN_005e8338((double)local_200,(double)local_1fc);
            dVar30 = (double)FastDiffRots(dVar33,(double)(moby->rotation).z);
            if (dVar30 <= 0.5235987901687622) {
              if (dVar30 < -0.5235987901687622) {
                dVar33 = (double)FastWrapRot((moby->rotation).z,-0.5235988);
                cosf((float)dVar33);
                FUN_005e8128(dVar33);
              }
            }
            else {
              dVar33 = (double)FastWrapRot((moby->rotation).z,0.5235988);
              cosf((float)dVar33);
              FUN_005e8128(dVar33);
            }
            FUN_005e822c((double)(animationSpeed * 10.0),local_1f0,&local_200);
            FastVecAddSelf(auStack_1e0,local_1f0,auStack_210);
            ____MB_SpawnRingPartFx(lVar15);
            uVar34 = idol::GetAnimDuration(0x82);
            FUN_004804e0(dVar33,(double)(float)((double)g_FrameTime * dVar31),
                         0x3fe8000000000000,&local_200,auStack_210,lVar15,uVar34);
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x278)) &&
                 (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) {
                if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                }
              }
            }
            else {
              FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                           (double)(local_e0[0].y - (moby->pos).y));
              iVar16 = M574_003c22e8(lVar15,local_e0);
              if ((iVar16 == 0) && (moby->state = '\x06', moby->animationId != '\x02')) {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
          else if (*(char *)((int)pvVar5 + 0x254) != '\0') {
            if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x27c)) &&
               (ABS(local_e0[0].z - (moby->pos).z) < 4.0)) {
              *(undefined4 *)((int)pvVar5 + 0x27c) = 0;
              moby->state = '\b';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                         (double)(local_e0[0].y - (moby->pos).y));
            iVar16 = M574_003c22e8(lVar15,local_e0);
            if (iVar16 == 0) {
              if (((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) &&
                  (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) &&
                 (iVar16 = FastDecTimerS16((int)pvVar5 + 0x250), iVar16 != 0)) {
                dVar33 = (double)(moby->rotation).z;
                dVar30 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                              (double)(local_e0[0].y - (moby->pos).y));
                dVar30 = (double)FastSubRots((float)dVar33,(float)dVar30);
                if ((dVar30 < 0.0872664600610733) && (moby->enabled != '\0')) goto LAB_003c5f48;
              }
              if ((dVar29 < 3.5) &&
                 ((ABS(local_e0[0].z - (moby->pos).z) < 3.0 &&
                  (moby->state = '\x06', moby->animationId != '\x02')))) {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
        }
        else if (bVar20 == 4) {
          if ((moby->field43_0x70 & 2U) == 0) {
            if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x278)) &&
                 (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) {
                if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                }
              }
            }
            else {
              moby->state = '\x06';
              if (moby->animationId != '\x02') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
          else {
            moby->state = '\x05';
            *(undefined1 *)((int)pvVar5 + 0x254) = 0;
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar15,4,0,0);
            }
          }
        }
        else if (bVar20 == 2) {
          if ((((double)*(float *)((int)pvVar5 + 0x270) <= dVar29) ||
              (4.0 <= ABS(local_e0[0].z - (moby->pos).z))) || (moby->animationId == '\n')) {
            if (((g_MobyInstance + *(int *)((int)pvVar5 + 0x284) == (MobyInstance *)0x0) ||
                (uVar24 = g_MobyInstance[*(int *)((int)pvVar5 + 0x284)].state,
                uVar24 == 0xfd || uVar24 == 0xfe)) ||
               ((moby->updateId == '\n' && ((moby->field43_0x70 & 2U) != 0)))) {
              moby->state = '\x01';
              uVar34 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar15,0,0,uVar34);
              uVar19 = idol::GetAnimDuration(0x3c);
              *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
              *(undefined4 *)((int)pvVar5 + 0x284) = 0xffffffff;
            }
            else {
              FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
              M574_003c22e8(lVar15,local_e0);
            }
          }
          else {
            uVar34 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar15,10,0,uVar34);
          }
        }
        else if (bVar20 == 1) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\0')) {
            uVar34 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar15,0,0,uVar34);
            fVar2 = (moby->pos).x;
            fVar3 = (moby->pos).y;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x290);
          if (iVar16 == -1) {
            if ((*(int *)((int)pvVar5 + 0x284) == -1) || (iVar16 != -1)) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) ||
                 (dVar30 = (double)*(float *)((int)pvVar5 + 0x27c), dVar29 < dVar30)) {
                FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
                iVar16 = M574_003c22e8(lVar15,local_e0);
                if (iVar16 != 0) goto LAB_003c5f48;
                dVar30 = (double)*(float *)((int)pvVar5 + 0x27c);
              }
              if ((dVar29 < dVar30) && (ABS(local_e0[0].z - (moby->pos).z) < 4.0)) {
                *(undefined2 *)((int)pvVar5 + 0x256) = 1;
                *(undefined4 *)((int)pvVar5 + 0x27c) = 0;
                moby->state = '\b';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
                if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) &&
                   ((ABS(local_e0[0].z - (moby->pos).z) < 10.0 &&
                    (iVar16 = FastDecTimerS16((int)pvVar5 + 0x250), iVar16 != 0)))) {
                  dVar30 = (double)(moby->rotation).z;
                  dVar29 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                                (double)(local_e0[0].y - (moby->pos).y));
                  dVar29 = (double)FastSubRots((float)dVar30,(float)dVar29);
                  if ((dVar29 < 0.7853981852531433) &&
                     ((moby->enabled != '\0' && (moby->state = '\x04', moby->animationId != '\x03'))
                     )) {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,3,0,uVar34);
                  }
                }
              }
              else {
                moby->state = '\x06';
                if (moby->animationId != '\x02') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,2,0,uVar34);
                }
              }
            }
            else {
              uVar34 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar15,0,0,uVar34);
              moby->state = '\x02';
            }
          }
          else {
            pSVar11 = Splines[iVar16];
            fVar2 = pSVar11->points[0].x;
            (moby->pos).x = fVar2;
            fVar3 = pSVar11->points[0].y;
            (moby->pos).y = fVar3;
            (moby->pos).z = pSVar11->points[0].z;
            (moby->pos).w = pSVar11->points[0].w;
            dVar30 = (double)FUN_005e8338((double)(pSVar11->points[1].x - fVar2),
                                          (double)(pSVar11->points[1].y - fVar3));
            sVar1 = moby->group;
            (moby->rotation).z = (float)dVar30;
            iVar16 = M574_003c220c(sVar1);
            if ((((iVar16 != 0) ||
                 (iVar16 = MB_IsPntInCuboid
                                     (local_e0,(longlong)*(int *)((int)pvVar5 + 0x29c)), iVar16 != 0
                 )) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) ||
               ((dVar29 < (double)*(float *)((int)pvVar5 + 0x294) &&
                (ABS(local_e0[0].z - (moby->pos).z) < 4.0)))) {
              *(undefined4 *)((int)pvVar5 + 0x298) = 0;
              moby->state = '\t';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
          }
        }
        else if (bVar20 == 0) {
          uVar18 = g_heroMobyPtr->color;
          uVar12 = g_heroMobyPtr->light;
          moby->shadow = '\x1c';
          moby->color = uVar18;
          moby->light = uVar12;
          MB_InitDefaultParams((float *)((int)pvVar5 + 0xd0));
          fVar2 = DAT_0071f418;
          *(float *)((int)pvVar5 + 0x10c) = DAT_0071f418 * 6.2831855;
          *(float *)((int)pvVar5 + 0x110) = fVar2 * 12.566371;
          fVar3 = g_FrameTime;
          *(float *)((int)pvVar5 + 0x114) = g_FrameTime * 3.1415927;
          *(float *)((int)pvVar5 + 0xf4) = fVar3 * 6.0;
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0x40400000;
          *(undefined4 *)((int)pvVar5 + 0xd8) = 0x40000000;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          *(undefined4 *)((int)pvVar5 + 0xf8) = 0x40490fdb;
          fVar2 = animationSpeed;
          *(undefined4 *)((int)pvVar5 + 0x108) = 9;
          *(undefined4 *)((int)pvVar5 + 0x20) = 0x40400000;
          *(float *)((int)pvVar5 + 0xfc) = fVar2 * 15.0 * fVar3 * 6.0;
          uVar19 = FastDoubleToInt(0x4008000000000000);
          *(undefined2 *)((int)pvVar5 + 0x24) = uVar19;
          *(undefined1 *)((int)pvVar5 + 0x28) = 2;
          *(undefined4 *)((int)pvVar5 + 0x30) = 0x3fe00000;
          *(undefined1 *)((int)pvVar5 + 0x29) = 1;
          *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f333333;
          uVar17 = FastDoubleToInt(0x4086666660000000);
          *(undefined4 *)((int)pvVar5 + 0x90) = uVar17;
          *(undefined4 *)((int)pvVar5 + 0xbc) = 0;
          *(undefined1 *)((int)pvVar5 + 0x58) = 10;
          *(undefined1 *)((int)pvVar5 + 0x5a) = 0xc;
          FUN_005e7e70((int)pvVar5 + 0x40);
          iVar16 = *(int *)((int)pvVar5 + 0x134);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(undefined2 *)((int)pvVar5 + 0x250) = 0;
          *(undefined4 *)((int)pvVar5 + 0x120) = 0;
          pSVar11 = Splines[iVar16];
          *(Spline **)((int)pvVar5 + 0x130) = pSVar11;
          FUN_005e7e98(lVar27,ZEXT48(pSVar11) + 0x10);
          moby->state = '\x01';
          piVar9 = *(int **)((int)pvVar5 + 0x130);
          *(short *)((int)pvVar5 + 0x288) = moby->drawDistance;
          uVar14 = (ushort)DAT_010c9f58;
          DAT_010c9f58 = DAT_010c9f58 + 1;
          *(ushort *)((int)pvVar5 + 0x28a) = uVar14 & 7;
          *(undefined1 *)((int)pvVar5 + 0x263) = 0;
          if ((piVar9 != (int *)0x0) && (0 < *piVar9 + -2)) {
            iVar16 = 0;
            piVar26 = piVar9;
            do {
              dVar29 = (double)FUN_005e8548(piVar26 + 4,piVar26 + 8);
              piVar26[7] = (int)(float)dVar29;
              iVar16 = iVar16 + 1;
              piVar26 = piVar26 + 4;
            } while (iVar16 < *piVar9 + -2);
          }
          if ((*(int *)((int)pvVar5 + 0x284) != -1) && (*(int *)((int)pvVar5 + 0x290) == -1)) {
            uVar34 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar15,0,0,uVar34);
            moby->state = '\x02';
          }
        }
      }
      else if (bVar20 == 0xf) {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          DeleteMoby(moby);
          return;
        }
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        dVar29 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x24));
        *(float *)((int)pvVar5 + 0x20) = (float)dVar29;
        FUN_005e7e98(lVar27,(ulonglong)*(uint *)((int)pvVar5 + 0x130) + 0x10);
        moby->state = '\x01';
      }
      else if (bVar20 == 0xe) {
        if (moby->animationId != '\0') {
          uVar34 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar15,0,0,uVar34);
        }
        MVar4 = moby->modeBits &
                (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                 DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        moby->modeBits = MVar4;
        iVar16 = *(int *)((int)pvVar5 + 0x130);
        (moby->pos).x = *(f32 *)(iVar16 + 0x10);
        (moby->pos).y = *(f32 *)(iVar16 + 0x14);
        (moby->pos).z = *(f32 *)(iVar16 + 0x18);
        fVar6 = *(f32 *)(iVar16 + 0x1c);
        moby->collision = (ushort *)0x0;
        (moby->pos).w = fVar6;
        moby->modeBits = MVar4 | (UNK_40|DISABLED);
      }
      else if (bVar20 == 0xd) {
        uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
        *(char *)((int)pvVar5 + 0x255) = *(char *)((int)pvVar5 + 0x255) + '\x01';
        dVar29 = (double)GetGroundZNoWater(lVar27);
        if ((((uVar18 & 0x60) != 0) && ((float)(dVar29 + 5.0) < (moby->pos).z)) &&
           (moby->setByGroup != '\v')) {
          PlayMobySound(10,0,moby);
          moby->setByGroup = '\v';
        }
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if ((uVar18 & 1) != 0) {
          *(undefined1 *)((int)pvVar5 + 0x255) = 0;
        }
        if ((uVar18 & 0x60) != 0) {
          FUN_005e7e98(auStack_160,lVar27);
          uVar34 = 0;
          MB_genericExplosion
                    (0,0,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                     0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_160,&DAT_003c3684,6,5,2,4)
          ;
          lVar25 = lVar15 + 0x40;
          MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
          MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
          MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
          MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
          if (*(int *)((int)pvVar5 + 0x264) == -1) {
            DeleteMoby(moby);
            return;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x130);
          (moby->pos).x = *(f32 *)(iVar16 + 0x10);
          (moby->pos).y = *(f32 *)(iVar16 + 0x14);
          (moby->pos).z = *(f32 *)(iVar16 + 0x18);
          (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
          FUN_005e7e70((int)pvVar5 + 0x40);
          MVar4 = moby->modeBits;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          moby->collision = (ushort *)0x0;
          moby->modeBits = MVar4 | (UNK_40|DISABLED);
          moby->state = '\x0e';
          return;
        }
        fVar6 = (moby->pos).z;
        uVar18 = (int)fVar6 >> 0x1f;
        if ((int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18) < 0x40a00000) {
          MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
          if (*(int *)((int)pvVar5 + 0x264) == -1) {
            DeleteMoby(moby);
            return;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x130);
          (moby->pos).x = *(f32 *)(iVar16 + 0x10);
          (moby->pos).y = *(f32 *)(iVar16 + 0x14);
          (moby->pos).z = *(f32 *)(iVar16 + 0x18);
          (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
          FUN_005e7e70((int)pvVar5 + 0x40);
          MVar4 = moby->modeBits;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          moby->collision = (ushort *)0x0;
          moby->state = '\x0e';
          moby->modeBits = MVar4 | (UNK_40|DISABLED);
          return;
        }
      }
      else {
        if (bVar20 != 0xc) {
          if (bVar20 != 0xb) {
            if (bVar20 == 10) {
              uVar18 = 0;
              if (*(short *)((int)pvVar5 + 0xae) == 2) {
                moby->unk58 = 1.0;
                if ((moby->field43_0x70 & 2U) != 0) {
                  uVar18 = 0x40;
                }
              }
              else {
                uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
              }
              *(undefined4 *)((int)pvVar5 + 0x290) = 0xffffffff;
              if ((uVar18 & 0x40) == 0) {
                fVar6 = (moby->pos).z;
                uVar12 = (int)fVar6 >> 0x1f;
                if (((int)((uVar12 >> 1 ^ (uint)fVar6) - uVar12) < 0x40a00000) ||
                   ((uVar18 & 0x20) != 0)) {
                  FUN_005e7e98(auStack_1a0,lVar27);
                  uVar34 = 0;
                  MB_genericExplosion
                            (0,0,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                             0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_1a0,&DAT_003c3684,
                             6,5,2,4);
                  lVar25 = lVar15 + 0x40;
                  MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
                  MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
                  MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
                  MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
                  if (*(int *)((int)pvVar5 + 0x264) == -1) {
                    DeleteMoby(moby);
                    return;
                  }
                  iVar16 = *(int *)((int)pvVar5 + 0x130);
                  (moby->pos).x = *(f32 *)(iVar16 + 0x10);
                  (moby->pos).y = *(f32 *)(iVar16 + 0x14);
                  (moby->pos).z = *(f32 *)(iVar16 + 0x18);
                  (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
                  FUN_005e7e70((int)pvVar5 + 0x40);
                  MVar4 = moby->modeBits;
                  *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
                  moby->collision = (ushort *)0x0;
                  moby->state = '\x0e';
                  moby->modeBits = MVar4 | (UNK_40|DISABLED);
                  return;
                }
              }
              else if (*(int *)((int)pvVar5 + 0x274) == 0) {
                M574_003c24e8(lVar15);
                moby->state = '\a';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              else {
                pvVar10 = moby->pVar;
                if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                  *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  M574_003c22e8(lVar15,local_e0);
                }
              }
              (moby->pos).z = (float)((double)(moby->pos).z + dVar32);
              dVar29 = (double)GetGroundZNoWater(lVar27);
              fVar2 = (float)((double)(moby->pos).z - dVar32);
              (moby->pos).z = fVar2;
              if ((float)(dVar29 + 5.0) < fVar2) {
                PlayMobySound(10,0x21,moby);
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,0xb,0,uVar34);
                moby->state = '\v';
              }
            }
            else if (bVar20 == 9) {
              pSVar11 = Splines[*(int *)((int)pvVar5 + 0x290)];
              MB_PathFollowToPos
                        (0x408f380000000000,0x4014000000000000,0,ZEXT48(pSVar11),lVar27,auStack_1b0,
                         &local_88,auStack_84,&DAT_003c3684,0);
              uVar18 = *(uint *)((int)pvVar5 + 0x298);
              lVar25 = (ulonglong)uVar18 +
                       ((longlong)(int)uVar18 - (longlong)(int)local_88 >> 0x3f &
                       (ulonglong)local_88 - (ulonglong)uVar18);
              *(int *)((int)pvVar5 + 0x298) = (int)lVar25;
              uVar18 = MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  ZEXT48(pSVar11) + lVar25 * 0x10 + 0x10 & 0xffffffff,
                                  (int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (*(int *)((int)pvVar5 + 0x298) < pSVar11->cnt + -1) {
                  *(int *)((int)pvVar5 + 0x298) = *(int *)((int)pvVar5 + 0x298) + 1;
                }
                else {
                  *(undefined4 *)((int)pvVar5 + 0x290) = 0xffffffff;
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  if (*(int *)((int)pvVar5 + 0x284) == -1) {
                    FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                 (double)(local_e0[0].y - (moby->pos).y));
                    M574_003c22e8(lVar15,local_e0);
                  }
                  else {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,0,0,uVar34);
                    moby->state = '\x02';
                  }
                }
              }
            }
            else if (bVar20 == 8) {
              MB_PathFollowToPos
                        (0x408f380000000000,0x4014000000000000,0,
                         *(undefined4 *)((int)pvVar5 + 0x130),lVar27,auStack_1c0,&local_90,
                         auStack_8c,&DAT_003c3684,0);
              uVar18 = *(uint *)((int)pvVar5 + 0x120);
              lVar25 = (ulonglong)uVar18 +
                       ((longlong)(int)uVar18 - (longlong)(int)local_90 >> 0x3f &
                       (ulonglong)local_90 - (ulonglong)uVar18);
              *(int *)((int)pvVar5 + 0x120) = (int)lVar25;
              uVar18 = MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  (ulonglong)*(uint *)((int)pvVar5 + 0x130) + lVar25 * 0x10 + 0x10 &
                                  0xffffffff,(int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (*(int *)((int)pvVar5 + 0x120) < **(int **)((int)pvVar5 + 0x130) + -1) {
                  *(int *)((int)pvVar5 + 0x120) = *(int *)((int)pvVar5 + 0x120) + 1;
                }
                else {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  M574_003c22e8(lVar15,local_e0);
                }
              }
            }
            goto LAB_003c5f48;
          }
          iVar16 = (int)pvVar5 + 0x70;
          *(float *)((int)pvVar5 + 0x78) =
               *(float *)((int)pvVar5 + 0x78) - *(float *)((int)pvVar5 + 0x80);
          dVar29 = (double)FUN_005e7ebc(iVar16);
          local_80 = (float)dVar29;
          dVar30 = 0.0;
          dVar29 = dVar30;
          if (*(short *)((int)pvVar5 + 0xae) != 2) {
            dVar29 = (double)*(float *)((int)pvVar5 + 0xbc);
          }
          Delt((float)dVar29,*(float *)((int)pvVar5 + 0x84),&local_80);
          FUN_005e84c0((double)local_80,iVar16,iVar16);
          FUN_005e7e98(auStack_190,lVar27);
          fVar2 = *(float *)((int)pvVar5 + 0x98);
          FUN_005e7f54(lVar27,lVar27,iVar16);
          FUN_005e7e98(auStack_180,lVar27);
          dVar29 = (double)FUN_005e8030(iVar16);
          iVar16 = *(int *)((int)pvVar5 + 0x90);
          local_70 = (longlong)iVar16;
          if ((double)local_70 < dVar29) {
            CollLine(auStack_190,auStack_180,0x24,lVar15,0);
            FUN_005e7e98(auStack_180,0xa10960);
            iVar16 = *(int *)((int)pvVar5 + 0x90);
          }
          dVar29 = (double)FastIntToDouble(iVar16);
          iVar16 = CollSphere
                             ((double)(float)(dVar29 * 0.0009765625),auStack_180,&DAT_003c3684,0x24,
                              lVar15);
          fVar3 = (moby->pos).z;
          if (iVar16 != 0) {
            FUN_005e7e98(lVar27,0xa10970);
            fVar3 = (local_188 + fVar2 + *(float *)((int)pvVar5 + 0x78)) -
                    *(float *)((int)pvVar5 + 0x98);
            (moby->pos).z = fVar3;
          }
          if (fVar3 < 5.0) {
            FUN_005e7e98(auStack_170,lVar27);
            MB_genericExplosion
                      (dVar30,dVar30,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000
                       ,0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_170,&DAT_003c3684,0,5,2
                       ,4);
            lVar25 = lVar15 + 0x40;
            MB_SpawnDebrisMoby(dVar30,lVar15,0x6d0,lVar27,lVar25,0,0);
            MB_SpawnDebrisMoby(dVar30,lVar15,0x6d1,lVar27,lVar25,0,0);
            MB_SpawnDebrisMoby(dVar30,lVar15,0x6d2,lVar27,lVar25,0,0);
            MB_SpawnBoltsFromCrate(lVar15,0x200,0xffffffffffffffff);
            if (*(int *)((int)pvVar5 + 0x264) == -1) {
              DeleteMoby(moby);
              return;
            }
            iVar16 = *(int *)((int)pvVar5 + 0x130);
            (moby->pos).x = *(f32 *)(iVar16 + 0x10);
            (moby->pos).y = *(f32 *)(iVar16 + 0x14);
            (moby->pos).z = *(f32 *)(iVar16 + 0x18);
            (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
            FUN_005e7e70((int)pvVar5 + 0x40);
            MVar4 = moby->modeBits;
            *(float *)((int)pvVar5 + 0xe8) = (float)dVar30;
            moby->collision = (ushort *)0x0;
            moby->state = '\x0e';
            moby->modeBits = MVar4 | (UNK_40|DISABLED);
            return;
          }
        }
        bVar20 = moby->animationId;
        if (bVar20 < 2) {
          if (bVar20 != 0) {
            OrganicDeltAngSpeed
                      ((double)*(float *)((int)pvVar5 + 0x28c),0x3fb70a3d80000000,0x3fd147ae20000000
                       ,0x3fc3333340000000,lVar15);
            dVar29 = (double)FastSubRots
                                       ((moby->rotation).z,*(float *)((int)pvVar5 + 0x28c));
            if (dVar29 < 0.03490658476948738) {
              uVar21 = idol::GetAnimDuration(0x3c);
              *(undefined1 *)((int)pvVar5 + 0x263) = uVar21;
              uVar24 = moby->setByGroup;
              if ((uVar24 == '\a') || (uVar24 == '\b')) {
                if (uVar24 == '\a') {
                  M574_003c24e8(lVar15);
                  uVar24 = moby->setByGroup;
                }
                moby->state = uVar24;
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,1,0,uVar34);
                }
                moby->unk58 = 1.0;
              }
              else {
                moby->state = '\x01';
                if (moby->animationId != '\0') {
                  uVar34 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar15,0,0,uVar34);
                }
                uVar19 = idol::GetAnimDuration(10);
                *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
              }
            }
          }
        }
        else if (bVar20 == 9) {
          OrganicDeltAngSpeed
                    ((double)*(float *)((int)pvVar5 + 0x28c),0x3f847ae140000000,0x3fd3333340000000,
                     0x3fc99999a0000000,lVar15);
          dVar29 = (double)FastSubRots((moby->rotation).z,*(float *)((int)pvVar5 + 0x28c))
          ;
          if (dVar29 < 0.03490658476948738) {
            uVar21 = idol::GetAnimDuration(0x3c);
            *(undefined1 *)((int)pvVar5 + 0x263) = uVar21;
            uVar24 = moby->setByGroup;
            if ((uVar24 == '\a') || (uVar24 == '\b')) {
              if (uVar24 == '\a') {
                M574_003c24e8(lVar15);
                uVar24 = moby->setByGroup;
              }
              moby->state = uVar24;
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            else {
              moby->state = '\x01';
              if (moby->animationId != '\0') {
                uVar34 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar15,0,0,uVar34);
              }
              uVar19 = idol::GetAnimDuration(10);
              *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
            }
          }
        }
      }
LAB_003c5f48:
      if ((moby->enabled != '\0') && (dVar29 = (double)FUN_005e8548(lVar27,0x951500), dVar29 < 36.0)
         ) {
        MB_SetZBoundsFromGround(lVar15);
      }
      iVar16 = *(int *)((int)pvVar5 + 0x280);
      if ((((iVar16 == -1) || (g_MobyInstance + iVar16 == (MobyInstance *)0x0)) ||
          (uVar24 = g_MobyInstance[iVar16].state, uVar24 == 0xfe)) || (uVar24 == 0xfd)) {
        *(undefined4 *)((int)pvVar5 + 0x280) = 0xffffffff;
      }
      else if (iVar16 != -1) {
        pMVar28 = g_MobyInstance + *(int *)((int)pvVar5 + 0x280);
        if (((pMVar28->oClass == 0x335) || (pMVar28->oClass == TRAIN_CARRIAGE_04BA)) &&
           (0 < **(int **)((int)pvVar5 + 0x130))) {
          iVar16 = 0;
          iVar22 = 0;
          do {
            iVar23 = *(int *)((int)pvVar5 + 0x130) + iVar16 + 0x10;
            MB_PlatformLocalToWorld(lVar15,pMVar28,iVar23,local_140,iVar23,local_140);
            iVar22 = iVar22 + 1;
            iVar16 = iVar16 + 0x10;
          } while (iVar22 < **(int **)((int)pvVar5 + 0x130));
        }
        MB_PlatformLocalToWorld(lVar15,pMVar28,lVar27,lVar15 + 0x40,lVar27,local_150);
        (moby->rotation).z = 0.0;
      }
      uVar24 = moby->state;
      if (((uVar24 != '\r' && uVar24 != '\f') && (uVar24 != '\x0e')) && (uVar24 != '\v')) {
        dVar30 = 0.0;
        dVar29 = dVar30;
        if (uVar24 != '\n') {
          dVar29 = (double)(DAT_0071f418 * 9.8 + *(float *)((int)pvVar5 + 0xe8));
        }
        *(float *)((int)pvVar5 + 0xe8) = (float)dVar29;
        (moby->pos).z = (moby->pos).z - (float)(dVar29 - dVar32);
        dVar29 = (double)GetGroundZ(0x3fe0000000000000,lVar27,0);
        fVar2 = (float)((double)(moby->pos).z - dVar32);
        dVar33 = (double)fVar2;
        (moby->pos).z = fVar2;
        if (dVar29 <= dVar33) {
          if ((double)(float)(dVar29 + 5.0) < dVar33) {
            uVar34 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar15,0xb,0,uVar34);
            moby->state = '\v';
            FUN_005e7e70((int)pvVar5 + 0x70);
            *(float *)((int)pvVar5 + 0x78) = -*(float *)((int)pvVar5 + 0xe8);
            *(float *)((int)pvVar5 + 0x80) = DAT_0071f418 * 19.6;
          }
        }
        else {
          if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
             (iVar16 = MB_GetPlatformParent(), iVar16 == 0)) {
            if ((*(int *)((int)pvVar5 + 0x280) != -1) &&
               (g_MobyInstance[*(int *)((int)pvVar5 + 0x280)].oClass != TRAIN_CARRIAGE_04BA &&
                g_MobyInstance[*(int *)((int)pvVar5 + 0x280)].oClass != 0x335)) {
              *(undefined4 *)((int)pvVar5 + 0x280) = 0xffffffff;
            }
          }
          else {
            uVar18 = (int)g_CollOutput.pMoby - (int)g_MobyInstance;
            *(uint *)((int)pvVar5 + 0x280) =
                 ((int)uVar18 >> 8) + (uint)((int)uVar18 < 0 && (uVar18 & 0xff) != 0);
          }
          iVar16 = *(int *)((int)pvVar5 + 0x280);
          (moby->pos).z = (float)dVar29;
          *(float *)((int)pvVar5 + 0xe8) = (float)dVar30;
          if (iVar16 != -1) {
            ____MB_BuildScaledRotMtx
                      (CONCAT44(g_CollOutput.normal.x,g_CollOutput.normal.y),
                       CONCAT44(g_CollOutput.normal.z,g_CollOutput.normal.w));
          }
        }
      }
      if (*(char *)((int)pvVar5 + 0x262) != '\0') {
        return;
      }
      dVar29 = (double)FUN_005e8588(lVar27,0x951500);
      if (70.0 <= dVar29) {
        return;
      }
      if ((worldUpdateTime & 7) != (int)*(short *)((int)pvVar5 + 0x28a)) {
        return;
      }
      uVar34 = 0;
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)((int)pvVar5 + 0x130),lVar27
                 ,auStack_130,auStack_7c,auStack_78);
      fVar6 = (moby->pos).z;
      uVar18 = (int)fVar6 >> 0x1f;
      if ((0x409fffff < (int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18)) &&
         (local_128 - 10.0 <= (moby->pos).z)) {
        return;
      }
      FUN_005e7e98(auStack_120,lVar27);
      MB_genericExplosion
                (uVar34,uVar34,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_120,&DAT_003c3684,0,5,2,4);
      lVar25 = lVar15 + 0x40;
      MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
      MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
      MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
      MB_SpawnBoltsFromCrate(lVar15,0x200,0xffffffffffffffff);
      if (*(int *)((int)pvVar5 + 0x264) == -1) {
        DeleteMoby(moby);
        return;
      }
      iVar16 = *(int *)((int)pvVar5 + 0x130);
      (moby->pos).x = *(f32 *)(iVar16 + 0x10);
      (moby->pos).y = *(f32 *)(iVar16 + 0x14);
      (moby->pos).z = *(f32 *)(iVar16 + 0x18);
      (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
      FUN_005e7e70((int)pvVar5 + 0x40);
      MVar4 = moby->modeBits;
      *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
      moby->collision = (ushort *)0x0;
      moby->modeBits = MVar4 | (UNK_40|DISABLED);
      moby->state = '\x0e';
      return;
    }
  }
  DeleteMoby(moby);
  return;
}



// game/update/moby570.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x3bcd40-0x3bd520
#include "game/update/moby570.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby568.h"
#include "game/update/moby849.h"

// 0x03bcd40 (0x4ac bytes)
// inlined: FastAtan2 @0x3bd094
MobyInstance *
FUN_003bcd40(double param_1,undefined4 param_2,longlong param_3,float *param_4,float *param_5,
            undefined8 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ushort uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  ulonglong uVar17;
  ushort *puVar20;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  MobyInstance *pMVar25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMoby;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar17;
  puVar12[0x1e] = in_LR;
  puVar12[0x1b] = in_f31;
  puVar12[0x16] = unaff_r27;
  puVar12[0x1a] = unaff_r31;
  puVar12[0x19] = unaff_r30;
  puVar12[0x18] = unaff_r29;
  puVar12[0x17] = unaff_r28;
  puVar20 = *(ushort **)((int)&g_MobyGroups + (int)(param_3 << 2));
  puVar12[0x15] = unaff_r26;
  if (puVar20 == (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
  }
  else {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar25 = g_MobyInstance + (*puVar20 & 0x7fff);
      if ((pMVar25->oClass == MINE_0238) && (pMVar25->state == '\x05')) {
        pMoby = pMVar25;
      }
      uVar8 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar8);
    if (pMoby != (MobyInstance *)0x0) {
      pMoby->updateDistance = -1;
      pMoby->drawDistance = 0xff;
      pMoby->enabled = '\x01';
      pMoby->state = '\x01';
      pMoby->setByGroup = '\0';
      pMoby->modeBits =
           pMoby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      pMoby->collision = pMoby->pClass->collision;
      if (pMoby->animationId != '\0') {
        MB_SetAnimation(pMoby,0,0,1);
      }
      (pMoby->pos).x = *param_4;
      (pMoby->pos).y = param_4[1];
      (pMoby->pos).z = param_4[2];
      (pMoby->pos).w = param_4[3];
      dVar27 = 0.0;
      (pMoby->rotation).x = 0.0;
      (pMoby->rotation).y = -DAT_00845d40;
      fVar3 = param_4[1];
      fVar1 = (float)((double)param_5[1] - (double)fVar3);
      fVar4 = *param_4;
      fVar2 = (float)((double)*param_5 - (double)fVar4);
      fVar5 = param_5[2];
      param_5[2] = fVar5 + 0.75;
      fVar16 = DAT_00845d40;
      fVar6 = param_4[2];
      *(float *)((int)puVar12 + 0x74) = fVar1;
      *(float *)(puVar12 + 0xe) = fVar2;
      fVar13 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      *(float *)((int)puVar12 + 0x7c) = param_5[3];
      fVar5 = (fVar5 + 0.75) - fVar6;
      *(float *)(puVar12 + 0xf) = fVar5;
      *(float *)(puVar12 + 0xf) = fVar5 + fVar6;
      fVar5 = (fVar13 - fVar16) / fVar13;
      dVar32 = (double)(fVar1 * fVar5);
      dVar28 = (double)(fVar2 * fVar5);
      dVar30 = dVar27;
      if (0.0 - fVar13 < 0.0) {
        dVar30 = dVar32;
      }
      dVar31 = dVar27;
      if (0.0 - fVar13 < 0.0) {
        dVar31 = dVar28;
      }
      if (fVar13 - 0.0 < 0.0) {
        dVar30 = dVar32;
      }
      if (fVar13 - 0.0 < 0.0) {
        dVar31 = dVar28;
      }
      fVar1 = (float)(dVar31 + (double)fVar4);
      *(float *)((int)puVar12 + 0x74) = (float)(dVar30 + (double)fVar3);
      *(float *)(puVar12 + 0xe) = fVar1;
      pvVar9 = pMoby->pVar;
      *(float *)((int)pvVar9 + 0x170) = fVar1;
      *(undefined4 *)((int)pvVar9 + 0x174) = *(undefined4 *)((int)puVar12 + 0x74);
      *(undefined4 *)((int)pvVar9 + 0x178) = *(undefined4 *)(puVar12 + 0xf);
      *(undefined4 *)((int)pvVar9 + 0x17c) = *(undefined4 *)((int)puVar12 + 0x7c);
      fVar1 = *(float *)(puVar12 + 0xe) - *param_4;
      *(float *)((int)pvVar9 + 0x180) = fVar1;
      fVar2 = *(float *)((int)puVar12 + 0x74) - param_4[1];
      *(float *)((int)pvVar9 + 0x184) = fVar2;
      dVar31 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      *(float *)((int)pvVar9 + 0x188) = *(float *)(puVar12 + 0xf) - param_4[2];
      uVar7 = *(undefined4 *)((int)puVar12 + 0x7c);
      *(undefined4 *)((int)pvVar9 + 0x188) = 0;
      *(undefined2 *)((int)pvVar9 + 200) = 0;
      dVar28 = (double)(fVar1 * (float)(param_1 / dVar31));
      dVar32 = (double)(fVar2 * (float)(param_1 / dVar31));
      dVar30 = dVar27;
      if (0.0 - dVar31 < 0.0) {
        dVar30 = dVar28;
      }
      dVar29 = dVar27;
      if (0.0 - dVar31 < 0.0) {
        dVar29 = dVar32;
      }
      if (dVar31 - 0.0 < 0.0) {
        dVar30 = dVar28;
      }
      if (dVar31 - 0.0 < 0.0) {
        dVar29 = dVar32;
      }
      *(float *)((int)pvVar9 + 0x180) = (float)dVar30;
      *(float *)((int)pvVar9 + 0x184) = (float)dVar29;
      fVar1 = DAT_0071f418;
      *(undefined4 *)((int)pvVar9 + 0x18c) = uVar7;
      dVar28 = (double)MB_computeLobVelocity
                                 (param_1,(double)(fVar1 * -10.0),param_4,uVar17 - 0x70,
                                  &DAT_003bcd2c,&DAT_00720000,0);
      uVar10 = *(uint *)((int)pvVar9 + 0x180);
      uVar11 = *(uint *)((int)pvVar9 + 0x184);
      dVar32 = ABS((double)*(float *)((int)pvVar9 + 0x180));
      dVar30 = ABS((double)*(float *)((int)pvVar9 + 0x184));
      *(float *)((int)pvVar9 + 0x188) = (float)dVar28;
      *(float *)(puVar12 + 0x10) = (float)(dVar32 - dVar30);
      uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      dVar28 = dVar32;
      if ((double)*(float *)(puVar12 + 0x10) - dVar27 < 0.0) {
        dVar28 = dVar30;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      if ((double)*(float *)(puVar12 + 0x10) - dVar27 < 0.0) {
        dVar30 = dVar32;
      }
      fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      if (dVar27 < dVar28) {
        lVar18 = uVar17 - 0xd0;
        lVar22 = uVar17 - 0x5c;
        lVar24 = uVar17 - 0x4c;
        lVar26 = 2;
        fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x12) = fVar3;
        *(float *)(puVar12 + 0x11) = fVar3;
        *(float *)((int)puVar12 + 0x8c) = fVar3;
        *(float *)((int)puVar12 + 0x84) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar4;
        *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3;
        *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x12) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar3 * fVar3;
          iVar14 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar24 = uVar17 - 0x5c;
        pfVar23 = (float *)&DAT_007358e0;
        lVar26 = 4;
        lVar18 = lVar19;
        lVar22 = lVar24;
        do {
          fVar3 = *pfVar23;
          fVar4 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar3;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar18 = 2;
        do {
          iVar14 = (int)lVar19;
          iVar15 = (int)lVar24;
          lVar19 = lVar19 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar14 + 0x84)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
      }
      (pMoby->rotation).z = (float)dVar27;
      *(undefined4 *)((int)pvVar9 + 0x194) = param_7;
      *(undefined4 *)((int)pvVar9 + 0x198) = param_2;
      *(undefined4 *)((int)pvVar9 + 0x19c) = 0;
      PlayMobySound(0,0,pMoby);
    }
  }
  return pMoby;
}


// 0x03bd1ec (0x90 bytes)
undefined8 M570_003bd1ec(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = param_1->pVar;
  uVar3 = M849_MB_Sucking(param_1);
  if ((int)uVar3 == 0) {
    if (param_1->state == '\x04') {
      param_1->state = param_1->setByGroup;
    }
  }
  else {
    uVar1 = param_1->state;
    if ((uVar1 == '\x03') || (uVar1 == '\x04')) {
      if (uVar1 != '\x04') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x04';
      }
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      *(undefined2 *)((int)pvVar2 + 200) = 0;
    }
  }
  return uVar3;
}


// 0x03bd27c (0x58 bytes)
void M570_003bd27c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x04') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return;
}


// 0x03bd2d4 (0x58 bytes)
void M570_003bd2d4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x04') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return;
}


// 0x03bd32c (0x24 bytes)
void M570_003bd32c(void)

{
  M849_0048afe8();
  return;
}


// 0x03bd350 (0x40 bytes)
longlong M570_003bd350(int param_1)

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


// 0x03bd398 (0x94 bytes)
void M570_003bd398(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 5;
  if (*(char *)(param_1 + 0x53) != '\0') {
    MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}


// 0x03bd42c (0x14 bytes)
void M570_003bd42c(void)

{
  DAT_00845d90 = 0x10000;
  return;
}


// 0x03bd440 (0xdc bytes)
MobyInstance * FUN_003bd440(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  short sVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = CreateMoby(AXE);
  if (pMVar3 != (MobyInstance *)0x0) {
    sVar2 = *(short *)(param_1 + 0x32);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = sVar2;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x03bd51c (0x4 bytes)
/* Moby 570 */

MobyInstance * UpdateMoby_570(MobyInstance *moby)

{
  return moby;
}



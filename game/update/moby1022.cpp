// game/update/moby1022.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x188fb4-0x18a80c
#include "game/update/moby1022.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby248.h"
#include "idol/fastfunc.h"

// 0x0188fb4 (0x8c bytes)
void FUN_00188fb4(MobyInstance *param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x02') {
    PlayMobySound(0,0,param_1);
    param_1->state = '\x04';
    lVar3 = 7;
    *(undefined4 *)((int)pvVar2 + 0x18) = 0;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    do {
      piVar1 = (int *)((int)pvVar2 + 0x24);
      pvVar2 = (void *)((int)pvVar2 + 4);
      *(undefined1 *)(*piVar1 + 0x20) = 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


// 0x0189040 (0xb8 bytes)
void FUN_00189040(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  
  pvVar3 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x06') {
    PlayMobySound(0,0,param_1);
    MVar1 = param_1->modeBits;
    param_1->enabled = '\x01';
    param_1->state = '\b';
    *(undefined4 *)((int)pvVar3 + 0x18) = 0;
    lVar4 = 7;
    param_1->modeBits =
         MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    do {
      *(undefined1 *)(*(int *)((int)pvVar3 + 0x24) + 0x20) = 9;
      *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) & 0xfffe;
      piVar2 = (int *)((int)pvVar3 + 0x24);
      pvVar3 = (void *)((int)pvVar3 + 4);
      *(undefined1 *)(*piVar2 + 0x31) = 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// 0x0189100 (0x118 bytes)
void FUN_00189100(MobyInstance *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  double dVar4;
  undefined8 uVar5;
  
  pvVar3 = param_1->pVar;
  param_1->setByGroup = '\x01';
  if (param_1->state == '\x06') {
    param_1->state = '\x02';
    param_1->enabled = '\x01';
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    uVar5 = 0;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    dVar4 = (double)FastDiffRots((double)*(float *)((int)pvVar3 + 0x10),0);
    (param_1->rotation).x = (float)dVar4;
    UpdateMobyTransform(param_1);
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)pvVar3 + 0x24);
      *(undefined1 *)(iVar1 + 0x20) = 3;
      iVar1 = *(int *)(iVar1 + 0x78);
      *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar3 + 0x24) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar3 + 0x24) + 0x31) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      dVar4 = (double)FastDiffRots((double)*(float *)(iVar1 + 0x10),uVar5);
      *(float *)(*(int *)((int)pvVar3 + 0x24) + 0x40) = (float)dVar4;
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x24));
      iVar2 = iVar2 + 1;
      pvVar3 = (void *)((int)pvVar3 + 4);
    } while (iVar2 < 7);
  }
  return;
}


// 0x0189218 (0x14 bytes)
void M1022_00189218(void)

{
  DAT_0073f8c0 = 0x10000;
  return;
}


// 0x0189230 (0x24 bytes)
void M1022_00189230(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x18c);
  if (*piVar1 == param_1) {
    *piVar1 = 0;
  }
  return;
}


// 0x0189254 (0x10 bytes)
void M1022_00189254(int param_1)

{
  **(int **)(*(int *)(param_1 + 0x78) + 0x18c) = param_1;
  return;
}


// 0x0189264 (0x24 bytes)
bool M1022_00189264(int param_1)

{
  return **(int **)(*(int *)(param_1 + 0x78) + 0x18c) == 0;
}


// 0x01892a8 (0x8f0 bytes)
// inlined: FastAtan2 @0x1895f0, FastAtan2 @0x18988c
void M1022_001892a8(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar14;
  longlong lVar15;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r28;
  ulonglong uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x26] = in_LR;
  puVar11[0x23] = in_f31;
  puVar11[0x22] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar11[0x1f] = unaff_r28;
  pvVar7 = param_1->pVar;
  uVar23 = ZEXT48(pvVar7);
  cVar1 = param_1->enabled;
  fVar5 = pMVar6->gScale * DAT_0073f8e4;
  puVar11[0x21] = unaff_r30;
  puVar11[0x20] = unaff_r29;
  param_1->scale = fVar5;
  if (cVar1 != '\0') {
    MB_RegisterLameShadow(0.4,param_1);
  }
  if (*(int *)((int)pvVar7 + 0x194) != 0) {
    if (*(byte *)(*(int *)((int)pvVar7 + 0x194) + 0x20) < 0x80) {
      GetBonePosition(param_1,0,uVar13 - 0xb0);
      GetBonePosition(param_1,1,uVar13 - 0xa0);
      fVar5 = *(float *)(puVar11 + 0xe);
      iVar16 = *(int *)((int)pvVar7 + 0x194);
      *(float *)(puVar11 + 0xe) = fVar5 + *(float *)(puVar11 + 0x10);
      *(float *)((int)puVar11 + 0x74) =
           *(float *)((int)puVar11 + 0x74) + *(float *)((int)puVar11 + 0x84);
      *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + *(float *)(puVar11 + 0x11);
      *(float *)(iVar16 + 0x10) = (fVar5 + *(float *)(puVar11 + 0x10)) * 0.5;
      *(float *)(iVar16 + 0x14) = *(float *)((int)puVar11 + 0x74) * 0.5;
      *(float *)(iVar16 + 0x18) = *(float *)(puVar11 + 0xf) * 0.5;
      *(undefined4 *)(iVar16 + 0x1c) = *(undefined4 *)((int)puVar11 + 0x7c);
    }
    else {
      *(undefined4 *)((int)pvVar7 + 0x194) = 0;
    }
  }
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x94) = 0;
  iVar16 = MB_damage(param_1,0x330000,0);
  if ((iVar16 == 0) && (*(int *)((int)pvVar7 + 0x194) != 0)) {
    iVar16 = MB_damage(*(int *)((int)pvVar7 + 0x194),0x330000,0);
  }
  iVar17 = MB_HandleDamage
                     (param_1,iVar16,uVar23 + 0x20,0,puVar11 + 0x12,(int)puVar11 + 0x94,0,4);
  if ((*(int *)(puVar11 + 0x12) != 1) && (param_1->state != '\b')) {
    fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar11 + 0x94);
    *(float *)((int)pvVar7 + 0x20) = fVar5;
    if ((double)fVar5 <= dVar28) {
      iVar17 = 1;
    }
    uVar18 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    fVar2 = DAT_0073f8e8;
    fVar5 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar18;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    *(float *)((int)pvVar7 + 0x80) = fVar2 * fVar5;
    fVar5 = g_FrameTime;
    if (iVar17 < 3) {
      if ((-1 < iVar17) && (0 < iVar17)) {
        fVar5 = DAT_0073f8e8 * g_FrameTimeSq;
        uVar8 = *(uint *)((int)pvVar7 + 0x94);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = fVar5;
        fVar2 = DAT_0073f8f8;
        fVar5 = g_FrameTime;
        *(uint *)((int)pvVar7 + 0x94) = uVar8 | 0x20;
        *(float *)((int)pvVar7 + 0x88) = fVar2 * fVar5;
        fVar2 = DAT_0073f8f4;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x14) = fVar5;
        *(float *)((int)puVar11 + 0xa4) = fVar2;
        *(float *)(puVar11 + 0x15) = (float)(dVar25 - dVar26);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
        if ((double)*(float *)(puVar11 + 0x15) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar11 + 0xa4));
        if ((double)*(float *)(puVar11 + 0x15) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar28 < dVar27) {
          lVar14 = uVar13 - 0x110;
          lVar22 = uVar13 - 0x58;
          lVar19 = uVar13 - 0x68;
          lVar24 = 2;
          fVar3 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0xc4) = fVar3;
          *(float *)((int)puVar11 + 0xbc) = fVar3;
          *(float *)(puVar11 + 0x18) = fVar3;
          *(float *)(puVar11 + 0x17) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar4;
          *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3;
          *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x68;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar14 = 2;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar22;
            lVar15 = lVar15 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xb8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)((int)puVar11 + 0x9c) = (float)dVar28;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0x84,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        MB_StartKick((double)*(float *)((int)puVar11 + 0x9c),param_1,uVar23 + 0x70);
        param_1->collision = (ushort *)0x0;
        iVar16 = *(int *)((int)pvVar7 + 0x194);
        if (iVar16 != 0) {
          iVar17 = *(int *)(iVar16 + 0x78);
          *(undefined1 *)(iVar16 + 0x20) = 1;
          *(undefined4 *)(iVar17 + 0x10) = *(undefined4 *)((int)pvVar7 + 0x70);
          *(undefined4 *)(iVar17 + 0x14) = *(undefined4 *)((int)pvVar7 + 0x74);
          *(undefined4 *)(iVar17 + 0x18) = *(undefined4 *)((int)pvVar7 + 0x78);
          uVar18 = *(undefined4 *)((int)pvVar7 + 0x7c);
          *(undefined4 *)(iVar17 + 0x18) = 0;
          *(undefined4 *)(iVar17 + 0x1c) = uVar18;
          *(MobyInstance **)(iVar17 + 0x30) = g_heroMobyPtr;
          *(undefined4 *)((int)pvVar7 + 0x194) = 0;
        }
        param_1->state = '\b';
        piVar9 = *(int **)((int)param_1->pVar + 0x18c);
        if ((MobyInstance *)*piVar9 == param_1) {
          *piVar9 = 0;
        }
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
      }
    }
    else if (iVar17 < 0xb) {
      if (iVar17 < 9) {
        *(float *)((int)pvVar7 + 0x88) = DAT_0073f8f0 * g_FrameTime;
        fVar2 = DAT_0073f8ec;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar2);
        *(float *)((int)puVar11 + 0xac) = fVar5;
        *(float *)(puVar11 + 0x16) = fVar2;
        *(float *)((int)puVar11 + 0xb4) = (float)(dVar25 - dVar26);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1d) & 4;
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0xac));
        if ((double)*(float *)((int)puVar11 + 0xb4) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar26 = ABS((double)*(float *)(puVar11 + 0x16));
        if ((double)*(float *)((int)puVar11 + 0xb4) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar28 < dVar27) {
          lVar14 = uVar13 - 0x110;
          lVar19 = uVar13 - 0x48;
          lVar22 = uVar13 - 0x38;
          lVar24 = 2;
          fVar3 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0xe4) = fVar3;
          *(float *)((int)puVar11 + 0xdc) = fVar3;
          *(float *)(puVar11 + 0x1c) = fVar3;
          *(float *)(puVar11 + 0x1b) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
          *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar3;
          *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x48;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar14 = 2;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar22;
            lVar15 = lVar15 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xd8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)(puVar11 + 0x13) = (float)dVar28;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0x88,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        MB_StartKick((double)*(float *)(puVar11 + 0x13),param_1,uVar23 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar23 + 0x60);
  *(undefined4 *)((int)pvVar7 + 0x184) = 0x41400000;
  pSVar10 = Splines[*(int *)((int)pvVar7 + 0x180)];
  iVar16 = MB_getTargetInArea
                     (0x4028000000000000,param_1,uVar23 + 0x120,pSVar10,0,0,pSVar10->points,
                      pSVar10->cnt);
  if ((iVar16 != 2) &&
     ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124),
      fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120),
      *(float *)((int)pvVar7 + 0x184) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar7 + 0x128)))))) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x0189bd8 (0xc34 bytes)
// inlined: FastAtan2 @0x189e2c, FastAtan2 @0x18a270
/* Moby 1022 */

void UpdateMoby_1022(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar20 = uVar14 - 400;
  puVar9 = (ulonglong *)lVar20;
  *puVar9 = uVar14;
  puVar9[0x34] = in_LR;
  puVar9[0x31] = in_f31;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2e] = unaff_r29;
  puVar9[0x2f] = unaff_r30;
  puVar9[0x2d] = unaff_r28;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  M1022_001892a8();
  bVar2 = moby->state;
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 1;
        *(undefined1 *)((int)pvVar6 + 0x28) = 0;
        *(undefined4 *)((int)pvVar6 + 0x30) = 0x3e000000;
        MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar16 = FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
        *(float *)((int)pvVar6 + 0xf4) = g_FrameTime * 4.0;
        (moby->pos).z = (moby->pos).z + 2.0;
        *(f32 *)((int)pvVar6 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar6 + 0x174) = (moby->pos).y;
        *(f32 *)((int)pvVar6 + 0x178) = (moby->pos).z;
        *(f32 *)((int)pvVar6 + 0x17c) = (moby->pos).w;
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
      }
      else {
        FastDecTimerS32(uVar25 + 400);
        fVar4 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar1 = ABS(fVar4);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar9 + 0x10c) = fVar4;
        *(float *)(puVar9 + 0x22) = fVar3;
        *(float *)((int)puVar9 + 0x114) = fVar1 - fVar5;
        dVar32 = 0.0;
        uVar25 = (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar9 + 0x10c));
        if (*(float *)((int)puVar9 + 0x114) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)(puVar9 + 0x22));
        if (*(float *)((int)puVar9 + 0x114) - 0.0 < 0.0) {
          fVar11 = fVar1;
        }
        dVar28 = dVar32;
        if (0.0 < fVar4) {
          lVar19 = uVar14 - 0x180;
          lVar22 = uVar14 - 0x58;
          lVar24 = uVar14 - 0x48;
          lVar26 = 2;
          fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
          fVar1 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x144) = fVar4;
          *(float *)((int)puVar9 + 0x13c) = fVar4;
          *(float *)(puVar9 + 0x28) = fVar4;
          *(float *)(puVar9 + 0x27) = fVar4;
          fVar4 = fVar1 * fVar1;
          *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar1;
          *(float *)(puVar9 + 0x28) = *(float *)(puVar9 + 0x28) * fVar4;
          *(float *)((int)puVar9 + 0x144) = *(float *)((int)puVar9 + 0x144) * fVar4 * fVar1;
          do {
            *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar4 * fVar4;
            iVar17 = (int)lVar22;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar14 - 0x58;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar4 = *pfVar23;
            fVar1 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * fVar4;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar10 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0x138)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
        }
        OrganicDeltAng
                  ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x188));
        fVar4 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar1 = fVar4 - *(float *)((int)pvVar6 + 0x174);
        fVar5 = (moby->pos).z;
        fVar13 = fVar3 - *(float *)((int)pvVar6 + 0x170);
        fVar11 = fVar5 - *(float *)((int)pvVar6 + 0x178);
        if (0.5 < SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar1 * fVar1)) {
          fVar3 = *(float *)((int)pvVar6 + 0x170) - fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          fVar4 = *(float *)((int)pvVar6 + 0x174) - fVar4;
          *(float *)((int)puVar9 + 0xc4) = fVar4;
          fVar5 = *(float *)((int)pvVar6 + 0x178) - fVar5;
          *(float *)(puVar9 + 0x19) = fVar5;
          *(undefined4 *)((int)puVar9 + 0xcc) = *(undefined4 *)((int)pvVar6 + 0x17c);
          uVar16 = DAT_0073f900;
          dVar31 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
          dVar27 = (double)DAT_0073f8fc;
          fVar1 = (float)((double)(g_FrameTime * 4.0) / dVar31);
          dVar28 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar28 = (double)(fVar3 * fVar1);
          }
          dVar29 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          dVar30 = dVar32;
          if (dVar32 - dVar31 < 0.0) {
            dVar30 = (double)(fVar5 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar28 = (double)(fVar3 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          if (dVar31 - dVar32 < 0.0) {
            dVar30 = (double)(fVar5 * fVar1);
          }
          *(float *)(puVar9 + 0x18) = (float)dVar28;
          *(float *)((int)puVar9 + 0xc4) = (float)dVar29;
          *(float *)(puVar9 + 0x19) = (float)dVar30;
          MB_MoveAndCollide2(dVar27,dVar32,lVar15,uVar14 - 0xd0,0x740000,uVar16);
        }
        if (((*(int *)((int)pvVar6 + 0x164) != 2) &&
            (pvVar7 = moby->pVar, **(int **)((int)pvVar7 + 0x18c) == 0)) &&
           (*(int *)((int)pvVar6 + 400) == 0)) {
          if (*(int *)((int)pvVar6 + 0x194) == 0) {
            *(undefined4 *)((int)puVar9 + 0xdc) = 0;
            *(undefined4 *)(puVar9 + 0x1b) = 0;
            *(undefined4 *)((int)puVar9 + 0xd4) = 0;
            *(undefined4 *)(puVar9 + 0x1a) = 0;
            iVar17 = FUN_00315198(lVar15,lVar15 + 0x10,uVar14 - 0xc0);
            *(int *)((int)pvVar6 + 0x194) = iVar17;
            *(undefined1 *)(iVar17 + 0x20) = 0x37;
            pvVar7 = moby->pVar;
          }
          **(undefined4 **)((int)pvVar7 + 0x18c) = moby;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar9 + 0x15c));
          }
        }
      }
    }
    else if (bVar2 < 3) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x02')) {
        puVar9[0x2b] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar15,2,0,*(undefined4 *)((int)puVar9 + 0x15c));
      }
    }
    else if (bVar2 < 4) {
      fVar4 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
      fVar1 = ABS(fVar4);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0x20) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar3;
      *(float *)(puVar9 + 0x21) = fVar1 - fVar5;
      dVar32 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)(puVar9 + 0x21) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x104));
      if (*(float *)(puVar9 + 0x21) - 0.0 < 0.0) {
        fVar11 = fVar1;
      }
      dVar28 = dVar32;
      if (0.0 < fVar4) {
        lVar19 = uVar14 - 0x180;
        lVar24 = uVar14 - 0x68;
        lVar22 = uVar14 - 0x78;
        lVar26 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x124) = fVar4;
        *(float *)((int)puVar9 + 0x11c) = fVar4;
        *(float *)(puVar9 + 0x24) = fVar4;
        *(float *)(puVar9 + 0x23) = fVar4;
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar1;
        *(float *)(puVar9 + 0x24) = *(float *)(puVar9 + 0x24) * fVar4;
        *(float *)((int)puVar9 + 0x124) = *(float *)((int)puVar9 + 0x124) * fVar4 * fVar1;
        do {
          *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar4 * fVar4;
          iVar10 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar24 = uVar14 - 0x78;
        pfVar23 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar24;
        do {
          fVar4 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        do {
          iVar10 = (int)lVar20;
          iVar12 = (int)lVar24;
          lVar20 = lVar20 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0x118)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
      }
      OrganicDeltAng
                ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x189b98,
                 (float *)((int)pvVar6 + 0x188));
      if (*(int *)((int)pvVar6 + 0x164) != 2) {
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar5 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar1 = *(float *)((int)pvVar6 + 0x178) - (moby->pos).z;
        uVar16 = *(undefined4 *)(iVar17 + 0x1c);
        *(float *)(puVar9 + 0x1c) = fVar5;
        *(float *)((int)puVar9 + 0xe4) = fVar3;
        *(float *)(puVar9 + 0x1d) = fVar1;
        *(undefined4 *)((int)puVar9 + 0xec) = uVar16;
        uVar16 = DAT_0073f900;
        dVar31 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3);
        dVar27 = (double)DAT_0073f8fc;
        fVar4 = (float)((double)(g_FrameTime * 4.0) / dVar31);
        dVar28 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar28 = (double)(fVar5 * fVar4);
        }
        dVar29 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar29 = (double)(fVar3 * fVar4);
        }
        dVar30 = dVar32;
        if (dVar32 - dVar31 < 0.0) {
          dVar30 = (double)(fVar1 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar28 = (double)(fVar5 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar29 = (double)(fVar3 * fVar4);
        }
        if (dVar31 - dVar32 < 0.0) {
          dVar30 = (double)(fVar1 * fVar4);
        }
        *(float *)(puVar9 + 0x1c) = (float)dVar28;
        *(float *)((int)puVar9 + 0xe4) = (float)dVar29;
        *(float *)(puVar9 + 0x1d) = (float)dVar30;
        MB_MoveAndCollide2(dVar27,dVar32,lVar15,uVar14 - 0xb0,0x740000,uVar16);
      }
      fVar4 = (moby->pos).y - *(float *)(iVar17 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar17 + 0x10);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 0.5) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x04';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x189b98);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,400,uVar25
                           );
        *(undefined4 *)((int)pvVar6 + 400U & 0xfffffffc) = uVar16;
      }
    }
    else {
      iVar17 = FastDecTimerS32(uVar25 + 400);
      if ((iVar17 != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar15,3,0,*(undefined4 *)((int)puVar9 + 0x15c));
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 6) {
      if ((moby->field43_0x70 & 2U) == 0) {
        iVar17 = MB_MayaFrameTrigger(16.0,moby);
        if ((iVar17 != 0) && (*(int *)((int)pvVar6 + 0x194) != 0)) {
          *(undefined1 *)(*(int *)((int)pvVar6 + 0x194) + 0x20) = 1;
          *(undefined4 *)((int)pvVar6 + 0x194) = 0;
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
        piVar8 = *(int **)((int)moby->pVar + 0x18c);
        if ((MobyInstance *)*piVar8 == moby) {
          *piVar8 = 0;
        }
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x189b98);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,400,uVar25
                           );
        *(undefined4 *)((int)pvVar6 + 400U & 0xfffffffc) = uVar16;
      }
    }
    else if (6 < bVar2) {
      uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
      if ((uVar18 & 0x41) == 0) {
        if ((uVar18 & 0x120) != 0) {
          DeleteMoby(moby);
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar9[0x2b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar9 + 0x15c));
        }
      }
    }
  }
  else if (bVar2 < 9) {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar18 & 0x160) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_00189b98,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (bVar2 < 10) {
    *(undefined4 *)((int)puVar9 + 0xfc) = 0;
    *(undefined4 *)(puVar9 + 0x1f) = 0;
    *(undefined4 *)((int)puVar9 + 0xf4) = 0;
    *(undefined4 *)(puVar9 + 0x1e) = 0;
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar15,uVar14 - 0xa0,
               lVar15 + 0x10,0,1,10,3,0x10);
    DeleteMoby(moby);
  }
  return;
}



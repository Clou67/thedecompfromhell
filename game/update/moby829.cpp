// game/update/moby829.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x47ca58-0x47e0b8
#include "game/update/moby829.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby1826.h"
#include "game/update/moby832.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x047ca58 (0x14c bytes)
bool FUN_0047ca58(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = *(char *)(param_1 + 0x20) == '\x0f';
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = param_2[3];
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x20) = 6;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    dVar5 = (double)MB_randRot();
    *(float *)(param_1 + 0x48) = (float)dVar5;
    FastEulerToMtx(param_1 + 0xc0,param_1 + 0x40);
    fVar4 = g_FrameTimeSq;
    *(undefined4 *)(iVar2 + 0x134) = 0;
    *(float *)(iVar2 + 0x130) = fVar4 * 20.0;
    fVar4 = g_FrameTime;
    *(undefined1 *)(iVar2 + 0x15d) = 3;
    *(undefined4 *)(iVar2 + 0x144) = 5;
    *(float *)(iVar2 + 0x138) = fVar4 * 2.0;
    *(float *)(iVar2 + 0x13c) = fVar4 * 2.0;
    MB_randRot();
    MB_StartKick(param_1,iVar2 + 0x120);
    *(float *)(iVar2 + 0x128) = -*(float *)(iVar2 + 0x128);
  }
  return bVar1;
}


// 0x047cba4 (0x24 bytes)
bool FUN_0047cba4(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x03';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return bVar1;
}


// 0x047cbc8 (0x70 bytes)
void FUN_0047cbc8(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar4 = g_MobyInstance;
    uVar3 = *puVar5 & 0x7fff;
    if (g_MobyInstance[uVar3].state < 0x7f) {
      MVar1 = g_MobyInstance[uVar3].modeBits;
      g_MobyInstance[uVar3].state = '\x0f';
      pMVar4[uVar3].collision = (ushort *)0x0;
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
  } while (-1 < (short)uVar2);
  return;
}


// 0x047cc38 (0x90 bytes)
undefined8 FUN_0047cc38(longlong param_1)

{
  u8 uVar1;
  ushort uVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar4 = g_MobyInstance + (*puVar3 & 0x7fff);
      if ((pMVar4 != (MobyInstance *)0x0) && (pMVar4->oClass == FROG)) {
        uVar1 = pMVar4->state;
        if ((uVar1 != 0xfd && uVar1 != 0xfe) && (uVar1 != '\x10')) {
          return 0;
        }
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar2);
  }
  return 1;
}


// 0x047ccd0 (0xf0 bytes)
undefined8 M829_0047ccd0(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar2 = M849_MB_Sucking(param_1);
  if ((int)uVar2 == 0) {
    if ((param_1->state == '\x10') && (param_1->state = '\b', param_1->animationId != '\0')) {
      MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    uVar1 = param_1->state;
    if ((((uVar1 == '\t' || uVar1 == '\b') || (uVar1 == '\f')) || (uVar1 == '\r')) ||
       (uVar1 == '\x10')) {
      if (uVar1 != '\x10') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x10';
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x047cdc8 (0xc0 bytes)
undefined8 M829_0047cdc8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048aa70();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\x10') &&
       (*(undefined1 *)(param_1 + 0x20) = 8, *(char *)(param_1 + 0x53) != '\0')) {
      MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}


// 0x047ce90 (0xc0 bytes)
undefined8 M829_0047ce90(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048acb8();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\x10') &&
       (*(undefined1 *)(param_1 + 0x20) = 8, *(char *)(param_1 + 0x53) != '\0')) {
      MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}


// 0x047cf50 (0x50 bytes)
undefined8 M829_0047cf50(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048afe8();
  if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}


// 0x047cfa0 (0x40 bytes)
longlong M829_0047cfa0(int param_1)

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


// 0x047cfe0 (0x14 bytes)
void M829_0047cfe0(void)

{
  DAT_00877bb4 = 0x10000;
  return;
}


// 0x047d068 (0xed0 bytes)
// inlined: FastAtan2 @0x47d2c8, FastAtan2 @0x47d84c, FastAtan2 @0x47da24, FastAtan2 @0x47dc28
/* Moby 829 */

void UpdateMoby_829(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  Cylinder *pCVar17;
  ulonglong uVar18;
  float fVar22;
  int iVar23;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar24;
  float *pfVar25;
  code *pcVar26;
  int iVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x160;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar18;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = in_f31;
  puVar14[0x2a] = unaff_r31;
  puVar14[0x29] = unaff_r30;
  uVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  fVar2 = (moby->pos).z;
  puVar14[0x28] = unaff_r29;
  puVar14[0x27] = unaff_r28;
  puVar14[0x26] = unaff_r27;
  if (uVar1 == '\x05') {
    fVar22 = pfVar9[8] - (moby->pos).x;
    fVar10 = pfVar9[9] - (moby->pos).y;
    fVar4 = ABS(fVar22);
    fVar3 = ABS(fVar10);
    *(float *)((int)puVar14 + 0x84) = fVar22;
    *(float *)(puVar14 + 0x11) = fVar10;
    *(float *)((int)puVar14 + 0x8c) = fVar4 - fVar3;
    dVar30 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1d) & 4;
    fVar22 = ABS(*(float *)((int)puVar14 + 0x84));
    if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
      fVar22 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar10 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)(puVar14 + 0x11));
    if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    dVar33 = dVar30;
    if (0.0 < fVar22) {
      lVar20 = uVar18 - 0x150;
      lVar28 = uVar18 - 0x88;
      lVar24 = uVar18 - 0x98;
      lVar29 = 2;
      fVar22 = (fVar6 - fVar22) / (fVar6 + fVar22);
      fVar4 = fVar22 * fVar22;
      *(float *)((int)puVar14 + 0xd4) = fVar22;
      *(float *)((int)puVar14 + 0xcc) = fVar22;
      *(float *)(puVar14 + 0x1a) = fVar22;
      *(float *)(puVar14 + 0x19) = fVar22;
      fVar22 = fVar4 * fVar4;
      *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4;
      *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar22;
      *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar22 * fVar4;
      do {
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 0xb8) * fVar22 * fVar22;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar22 * fVar22;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0x98;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar22 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 200) * fVar22;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar20 = lVar21;
      do {
        iVar23 = (int)lVar20;
        iVar27 = (int)lVar28;
        lVar20 = lVar20 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 200)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar10);
    }
    *(f32 *)((int)puVar14 + 0x74) = fVar2;
    OrganicDeltAng
              ((float)dVar33,g_FrameTimeSq * 3.1415927,g_FrameTimeSq * 3.1415927,
               g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,pfVar9 + 4);
    (moby->rotation).x = pfVar9[4] * DAT_00877bd8;
    fVar22 = (moby->pos).x;
    fVar10 = (moby->pos).y;
    fVar3 = pfVar9[2];
    dVar33 = ABS((double)pfVar9[2]);
    fVar4 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    dVar31 = ABS((double)fVar4);
    *(float *)((int)puVar14 + 0x7c) = fVar4;
    *(float *)(puVar14 + 0x10) = (float)(dVar31 - dVar33);
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar3 >> 0x1d) & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    dVar32 = ABS((double)*(float *)((int)puVar14 + 0x7c));
    if ((double)*(float *)(puVar14 + 0x10) - dVar30 < 0.0) {
      dVar32 = dVar33;
    }
    if ((double)*(float *)(puVar14 + 0x10) - dVar30 < 0.0) {
      dVar33 = dVar31;
    }
    fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (dVar30 < dVar32) {
      lVar20 = uVar18 - 0x150;
      lVar24 = uVar18 - 0xb8;
      lVar28 = uVar18 - 0xa8;
      lVar29 = 2;
      fVar6 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
      fVar8 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0xb4) = fVar6;
      *(float *)((int)puVar14 + 0xac) = fVar6;
      *(float *)(puVar14 + 0x16) = fVar6;
      *(float *)(puVar14 + 0x15) = fVar6;
      fVar6 = fVar8 * fVar8;
      *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar8;
      *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
      *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar8;
      do {
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0x98) * fVar6 * fVar6;
        iVar23 = (int)lVar24;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0xb8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar6 = *pfVar25;
        fVar8 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar20 = 2;
      do {
        iVar23 = (int)lVar21;
        iVar27 = (int)lVar28;
        lVar21 = lVar21 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xa8)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar3 + fVar4);
    }
    pcVar26 = M832_00480000;
    *(undefined4 *)(puVar14 + 0xf) = 0;
    (moby->rotation).y = (float)-dVar30;
    fVar10 = fVar10 - pfVar9[9];
    dVar30 = 5.0;
    fVar22 = fVar22 - pfVar9[8];
    OrganicDelt
              (SQRT(fVar22 * fVar22 + fVar10 * fVar10),g_FrameTimeSq * 5.0,g_FrameTimeSq * 5.0,
               g_FrameTime * 50.0,(float *)(puVar14 + 0xf),0x480000,pfVar9 + 5);
    fVar22 = (moby->rotation).z + 1.5707963;
    fVar10 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar10 = fVar22;
    }
    fVar3 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
      fVar3 = fVar10;
    }
    fVar22 = fVar3 * fVar3;
    fVar10 = fVar22 * fVar22 * fVar3;
    fVar4 = fVar22 * fVar10;
    fVar3 = (fVar22 * fVar4 * 2.601887e-06 +
            fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar3 * -0.16666657 + fVar3) *
            pfVar9[5];
    *pfVar9 = fVar3;
    fVar22 = (moby->rotation).z;
    fVar10 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar10 = fVar22;
    }
    fVar4 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
      fVar4 = fVar10;
    }
    fVar22 = fVar4 * fVar4;
    fVar10 = fVar22 * fVar22 * fVar4;
    fVar6 = fVar22 * fVar10;
    pfVar9[1] = (fVar22 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar4 * -0.16666657 + fVar4
                ) * pfVar9[5];
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    OrganicDelt
              (pfVar9[10],(float)((double)g_FrameTimeSq * dVar30),
               (float)((double)g_FrameTimeSq * 100.0),g_FrameTime * 150.0,
               (float *)((int)puVar14 + 0x74),(int)pcVar26,pfVar9 + 2);
    fVar22 = (moby->pos).y - pfVar9[9];
    fVar10 = (moby->pos).x - pfVar9[8];
    if (SQRT(fVar10 * fVar10 + fVar22 * fVar22) < 0.5) {
      moby->state = '\x01';
      dVar30 = (double)MB_randRangeFloat(90.0,360.0);
      fVar22 = (float)FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
      pfVar9[0xc] = fVar22;
    }
  }
  else if (uVar1 == '\x04') {
    iVar23 = FastDecTimerS32(pfVar9 + 0xc);
    if (iVar23 != 0) {
      moby->state = '\x05';
      pCVar17 = Cylinders;
      fVar22 = pfVar9[6];
      pfVar9[8] = Cylinders[(int)fVar22].pos.x;
      pfVar9[9] = pCVar17[(int)fVar22].pos.y;
      pfVar9[10] = pCVar17[(int)fVar22].pos.z;
      fVar22 = pCVar17[(int)fVar22].pos.w;
      moby->drawDistance = 0xff;
      pfVar9[0xb] = fVar22;
      fVar22 = 0.0;
      (moby->rotation).w = 0.0;
      (moby->rotation).z = 0.0;
      (moby->rotation).y = 0.0;
      (moby->rotation).x = 0.0;
      pfVar9[3] = 0.0;
      pfVar9[1] = 0.0;
      *pfVar9 = 0.0;
      pfVar9[2] = g_FrameTime * -75.0;
      fVar10 = pfVar9[8] - (moby->pos).x;
      fVar6 = pfVar9[9] - (moby->pos).y;
      fVar3 = ABS(fVar10);
      fVar4 = ABS(fVar6);
      *(float *)(puVar14 + 0x12) = fVar10;
      *(float *)((int)puVar14 + 0x94) = fVar6;
      *(float *)(puVar14 + 0x13) = fVar3 - fVar4;
      uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)(puVar14 + 0x12));
      if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
      if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
        fVar6 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (0.0 < fVar10) {
        lVar20 = uVar18 - 0x150;
        lVar28 = uVar18 - 0x68;
        lVar24 = uVar18 - 0x78;
        lVar29 = 2;
        fVar10 = (fVar6 - fVar10) / (fVar6 + fVar10);
        fVar6 = fVar10 * fVar10;
        *(float *)((int)puVar14 + 0xf4) = fVar10;
        *(float *)((int)puVar14 + 0xec) = fVar10;
        *(float *)(puVar14 + 0x1e) = fVar10;
        *(float *)(puVar14 + 0x1d) = fVar10;
        fVar10 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar6;
        *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar10;
        *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar10 * fVar6;
        do {
          *(float *)((int)lVar20 + 0xe8) = *(float *)((int)lVar20 + 0xd8) * fVar10 * fVar10;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar10 * fVar10;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x78;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar28;
        do {
          fVar10 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0xe8) = *(float *)((int)lVar20 + 0xe8) * fVar10;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar20 = 2;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar27 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar22 = fVar22 + *(float *)(iVar23 + 0xe8) + *(float *)(iVar27 + 4) +
                   *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar22 = (fVar22 + 0.7853982) * fVar4 + fVar3;
      }
      (moby->rotation).z = fVar22;
      pfVar9[5] = 0.0;
    }
  }
  else if (uVar1 == '\x03') {
    dVar30 = -1.5707963705062866;
    OrganicDeltAng
              (-1.5707964,g_FrameTimeSq * 1.5707964,g_FrameTimeSq * 1.5707964,
               g_FrameTime * 25.132742,&(moby->rotation).y,0x720000,pfVar9 + 4);
    dVar30 = (double)FastSubRots((moby->rotation).y,(float)dVar30);
    if (dVar30 < 0.01745329238474369) {
      OrganicDelt
                (501.0,g_FrameTimeSq * 50.0,g_FrameTimeSq * 400.0,g_FrameTime * 200.0,
                 &(moby->pos).z,0x720000,pfVar9 + 5);
    }
    fVar2 = (moby->pos).z;
    uVar12 = (int)fVar2 >> 0x1f;
    if (0x43f9ffff < (int)((uVar12 >> 1 ^ (uint)fVar2) - uVar12)) {
      moby->state = '\x04';
      moby->drawDistance = 0;
      dVar30 = (double)MB_randRangeFloat(90.0,360.0);
      fVar22 = (float)FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
      pfVar9[0xc] = fVar22;
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = (moby->pos).x;
    fVar22 = pfVar9[8];
    fVar10 = (moby->pos).x;
    fVar11 = (moby->pos).y;
    fVar3 = pfVar9[9];
    fVar4 = (moby->pos).y;
    fVar6 = fVar22 - fVar10;
    fVar8 = fVar3 - fVar4;
    uVar12 = (int)fVar2 >> 0x1f;
    uVar13 = (int)fVar11 >> 0x1f;
    fVar5 = ABS(fVar6);
    iVar27 = (uVar12 >> 1 ^ (uint)fVar2) - uVar12;
    fVar7 = ABS(fVar8);
    *(float *)((int)puVar14 + 0x9c) = fVar6;
    *(float *)(puVar14 + 0x14) = fVar8;
    *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
    dVar30 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
    iVar23 = (uVar13 >> 1 ^ (uint)fVar11) - uVar13;
    fVar6 = ABS(*(float *)((int)puVar14 + 0x9c));
    if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar7 = ABS(*(float *)(puVar14 + 0x14));
    if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar33 = dVar30;
    if (0.0 < fVar6) {
      lVar20 = uVar18 - 0x150;
      lVar28 = uVar18 - 0x48;
      lVar24 = uVar18 - 0x58;
      lVar29 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x114) = fVar6;
      *(float *)((int)puVar14 + 0x10c) = fVar6;
      *(float *)(puVar14 + 0x22) = fVar6;
      *(float *)(puVar14 + 0x21) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar7;
      *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6;
      *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar20 + 0x108) = *(float *)((int)lVar20 + 0xf8) * fVar6 * fVar6;
        iVar15 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar15 + 4) * fVar6 * fVar6;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0x58;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar6 = *pfVar25;
        fVar7 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 0x108) = *(float *)((int)lVar20 + 0x108) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        iVar16 = (int)lVar28;
        lVar21 = lVar21 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar15 + 0x108)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar8 + fVar5);
    }
    fVar4 = fVar4 - fVar3;
    fVar22 = fVar10 - fVar22;
    pcVar26 = M832_00480000;
    *(undefined4 *)(puVar14 + 0xe) = 0;
    dVar32 = (double)SQRT(fVar22 * fVar22 + fVar4 * fVar4);
    if (((((0.5 <= dVar32) && (iVar27 < 0x43fa0001)) && (0x411fffff < iVar27)) &&
        ((iVar23 < 0x43fa0001 && (0x411fffff < iVar23)))) ||
       (uVar12 = (int)pfVar9[5] >> 0x1f,
       pcVar26 = (code *)((uVar12 >> 1 ^ (uint)pfVar9[5]) - uVar12), dVar32 = dVar30,
       0x3dcccccc < (int)pcVar26)) {
      OrganicDeltAng
                ((float)dVar33,g_FrameTimeSq * 3.1415927,g_FrameTimeSq * 3.1415927,
                 g_FrameTime * 25.132742,&(moby->rotation).z,(int)pcVar26,pfVar9 + 4);
      (moby->rotation).x = pfVar9[4] * DAT_00877bd8;
      OrganicDelt
                ((float)dVar32,g_FrameTimeSq * 5.0,g_FrameTimeSq * 50.0,g_FrameTime * 50.0,
                 (float *)(puVar14 + 0xe),0x870000,pfVar9 + 5);
      fVar22 = (moby->rotation).z + 1.5707963;
      fVar10 = 3.1415925 - fVar22;
      if (fVar22 - (3.1415925 - fVar22) < 0.0) {
        fVar10 = fVar22;
      }
      fVar3 = -3.1415925 - fVar22;
      if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar22 = fVar3 * fVar3;
      fVar10 = fVar22 * fVar22 * fVar3;
      fVar4 = fVar22 * fVar10;
      fVar3 = (fVar22 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar3 * -0.16666657 + fVar3)
              * pfVar9[5];
      *pfVar9 = fVar3;
      fVar22 = (moby->rotation).z;
      pfVar9[2] = 0.0;
      fVar10 = 3.1415925 - fVar22;
      if (fVar22 - (3.1415925 - fVar22) < 0.0) {
        fVar10 = fVar22;
      }
      fVar4 = -3.1415925 - fVar22;
      if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
        fVar4 = fVar10;
      }
      fVar22 = fVar4 * fVar4;
      fVar10 = fVar22 * fVar22 * fVar4;
      fVar6 = fVar22 * fVar10;
      pfVar9[1] = (fVar22 * fVar6 * 2.601887e-06 +
                  fVar6 * -0.0001980741 +
                  fVar10 * 0.0083330255 + fVar22 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
      (moby->pos).x = (moby->pos).x + fVar3;
      (moby->pos).y = (moby->pos).y + pfVar9[1];
      (moby->pos).z = (moby->pos).z + pfVar9[2];
    }
    else {
      moby->state = '\x03';
      pfVar9[8] = fVar10;
      pfVar9[9] = (moby->pos).y;
      pfVar9[10] = (moby->pos).z;
      fVar22 = (moby->pos).w;
      pfVar9[10] = 500.0;
      pfVar9[0xb] = fVar22;
    }
  }
  else if (uVar1 == '\x01') {
    iVar23 = FastDecTimerS32(pfVar9 + 0xc);
    if (iVar23 != 0) {
      moby->state = '\x02';
      pCVar17 = Cylinders;
      fVar22 = pfVar9[7];
      fVar10 = pfVar9[6];
      fVar3 = Cylinders[(int)fVar10].pos.x - Cylinders[(int)fVar22].pos.x;
      pfVar9[8] = fVar3;
      fVar4 = pCVar17[(int)fVar10].pos.y - pCVar17[(int)fVar22].pos.y;
      pfVar9[9] = fVar4;
      fVar6 = pCVar17[(int)fVar10].pos.z - pCVar17[(int)fVar22].pos.z;
      pfVar9[10] = fVar6;
      pfVar9[0xb] = pCVar17[(int)fVar10].pos.w;
      fVar3 = fVar3 * 10.0;
      fVar4 = fVar4 * 10.0;
      fVar6 = fVar6 * 10.0;
      pfVar9[8] = fVar3;
      pfVar9[9] = fVar4;
      pfVar9[10] = fVar6;
      pfVar9[8] = fVar3 + pCVar17[(int)fVar22].pos.x;
      pfVar9[9] = fVar4 + pCVar17[(int)fVar22].pos.y;
      pfVar9[10] = fVar6 + pCVar17[(int)fVar22].pos.z;
    }
  }
  else if (uVar1 == '\0') {
    dVar30 = (double)MB_randRangeFloat(360.0,720.0);
    fVar22 = (float)FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    pfVar9[0xc] = fVar22;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
  }
  return;
}


// 0x047df40 (0x178 bytes)
MobyInstance *
M829_0047df40(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  pMVar4 = CreateMoby(MINE_0053);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    fVar1 = pMVar4->pClass->gScale;
    *(undefined4 *)((int)pvVar3 + 0x74) = param_1;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    pMVar4->scale = fVar1 * 0.1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar3 + 0x60) = *param_3;
    *(undefined4 *)((int)pvVar3 + 100) = param_3[1];
    *(undefined4 *)((int)pvVar3 + 0x68) = param_3[2];
    uVar2 = param_3[3];
    *(undefined4 *)((int)pvVar3 + 0x20) = 0x41a00000;
    *(undefined4 *)((int)pvVar3 + 0x6c) = uVar2;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0x14;
    *(undefined4 *)((int)pvVar3 + 0x30) = 0x3f000000;
    *(undefined1 *)((int)pvVar3 + 0x28) = 0;
    *(undefined1 *)((int)pvVar3 + 0x29) = 1;
    auVar5 = loadVectorLeftIndexed(4,0x47df38);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x70,ZEXT48(pvVar3)
                      );
    *(undefined4 *)((int)pvVar3 + 0x70U & 0xfffffffc) = uVar2;
    if (pMVar4->animationId != '\x01') {
      MB_SetAnimation(pMVar4,1,0,10);
    }
    UpdateMobyTransform(pMVar4);
    MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}



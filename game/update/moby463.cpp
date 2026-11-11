// game/update/moby463.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x394bf8-0x396850
#include "game/update/moby463.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby436.h"
#include "game/update/moby441.h"
#include "idol/fastfunc.h"

// 0x0394bf8 (0x14 bytes)
void M463_00394bf8(void)

{
  DAT_00842bd8 = 0x10000;
  return;
}


// 0x0394c18 (0x238 bytes)
void M463_00394c18(int param_1)

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(iVar1 + 0x60) = param_1;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  uVar3 = M465_003849b8(param_1,0x1c0,0,0);
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(int *)(iVar1 + 0x94) = param_1;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  iVar4 = M465_003849b8(param_1,0x1bd,0,2);
  *(int *)(iVar1 + 0x70) = iVar4;
  *(int *)(iVar1 + 0x74) = param_1;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  *(float *)(iVar4 + 0x2c) = *(float *)(*(int *)(iVar4 + 0x24) + 0x24) * 0.75;
  uVar2 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1ba,1,1);
  *(int *)(iVar1 + 0x80) = (int)uVar2;
  *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  uVar3 = M465_003849b8(uVar2,0x1b9,0,0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  uVar3 = M465_003849b8(param_1,0x1d0,0,1);
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  *(int *)(iVar1 + 0xb4) = param_1;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 1;
  iVar4 = M465_003849b8(param_1,0x1d0,0,1);
  *(int *)(iVar1 + 0xc0) = iVar4;
  *(int *)(iVar1 + 0xc4) = param_1;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 1;
  *(ushort *)(iVar4 + 0x34) = *(ushort *)(iVar4 + 0x34) | 0x8000;
  uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x80),0x1d1,0,0);
  *(undefined4 *)(iVar1 + 0xd0) = uVar3;
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  iVar4 = M465_003849b8(*(undefined4 *)(iVar1 + 0x80),0x1d1,0,0);
  *(int *)(iVar1 + 0xe0) = iVar4;
  *(undefined4 *)(iVar1 + 0xe4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(ushort *)(iVar4 + 0x34) = *(ushort *)(iVar4 + 0x34) | 0x8000;
  iVar4 = iVar1;
  do {
    iVar5 = iVar6 + 2;
    uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1bb,0,iVar5);
    *(undefined4 *)(iVar4 + 0xf0) = uVar3;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(int *)(iVar4 + 0xfc) = iVar5;
    iVar4 = iVar4 + 0x10;
  } while (iVar6 < 8);
  return;
}


// 0x0394e68 (0x3cc bytes)
longlong M463_00394e68(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  short sVar16;
  uint uVar14;
  int iVar15;
  void *pvVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar19 = 0;
  pvVar2 = param_1->pVar;
  iVar15 = -1;
  lVar20 = 0;
  lVar18 = 0;
  pvVar17 = pvVar2;
  do {
    if ((*(int *)((int)pvVar17 + 0x60) != 0) &&
       (iVar13 = MB_damage(*(int *)((int)pvVar17 + 0x60),0x10000,0), iVar13 != 0)) {
      iVar13 = (int)lVar19;
      if ((int)lVar20 < 3) {
        if (iVar13 < 1) {
          lVar19 = 1;
          iVar15 = 1;
        }
      }
      else if ((int)lVar20 < 9) {
        if (iVar13 < 2) {
          iVar15 = 1;
          lVar19 = 2;
        }
      }
      else if (iVar13 < 4) {
        lVar19 = lVar19 + 4;
        iVar15 = 2;
        lVar18 = lVar20;
      }
      *(undefined1 *)(*(int *)((int)pvVar17 + 0x60) + 0xa4) = 0xff;
    }
    lVar20 = lVar20 + 1;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
  } while ((int)lVar20 < 0x11);
  lVar19 = (ulonglong)*(ushort *)((int)pvVar2 + 0x17c) + lVar19;
  sVar16 = (short)lVar19;
  *(short *)((int)pvVar2 + 0x17c) = sVar16;
  if (0xb < sVar16) {
    *(short *)((int)pvVar2 + 0x17c) = sVar16 % 0xc;
    if ((int)lVar18 != 0) {
      iVar4 = (int)(lVar18 << 4);
      iVar15 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      pfVar3 = *(float **)(iVar15 + 0x78);
      MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar15 + 0x10,iVar15,
                 0xffffffffffffffff);
      iVar15 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      iVar13 = *(int *)((int)pvVar2 + iVar4 + 100);
      fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar13 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar13 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar13 + 0x18);
      pfVar3[2] = fVar7;
      pfVar3[3] = *(float *)(iVar15 + 0x1c);
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar1 = 0.0;
      fVar9 = (g_FrameTime * 10.0) / fVar8;
      fVar11 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      fVar10 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (0.0 - fVar8 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      *pfVar3 = fVar11;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar1;
      *(undefined1 *)(*(int *)((int)pvVar2 + iVar4 + 0x60) + 0x20) = 1;
      *(undefined4 *)((int)pvVar2 + iVar4 + 0x60) = 0;
      return 1;
    }
    dVar25 = 0.0;
    MB_randRangeFloat(0.0,23.0);
    uVar14 = FastDoubleToInt();
    iVar13 = 0;
    do {
      iVar12 = uVar14 + (((int)uVar14 >> 3) + (uint)((int)uVar14 < 0 && (uVar14 & 7) != 0)) * -8 + 9
      ;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar15 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar13 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar13 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar13 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar13 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar15 + 0x1c);
        dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar1 = (float)((double)(g_FrameTime * 10.0) / dVar23);
        dVar21 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar21 = (double)(fVar5 * fVar1);
        }
        dVar22 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar22 = (double)(fVar6 * fVar1);
        }
        dVar24 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar24 = (double)(fVar7 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar21 = (double)(fVar5 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar22 = (double)(fVar6 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar24 = (double)(fVar7 * fVar1);
        }
        *pfVar3 = (float)dVar21;
        pfVar3[1] = (float)dVar22;
        pfVar3[2] = (float)dVar24;
        *(undefined1 *)(*(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60) + 0x20) = 1;
        *(undefined4 *)((int)pvVar2 + iVar12 * 0x10 + 0x60) = 0;
        return 1;
      }
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 + 1;
    } while (iVar13 < 8);
    lVar19 = 99;
    param_1->state = 'c';
  }
  if (-1 < iVar15) {
    iVar15 = PlayMobySound(iVar15,0,param_1);
    lVar19 = (longlong)iVar15;
  }
  return lVar19;
}


// 0x0395238 (0x1ac bytes)
void M463_00395238(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar4 = 1;
  iVar2 = iVar5 + 0x10;
  iVar3 = iVar2;
  do {
    iVar1 = *(int *)(iVar3 + 0x60);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      GetBonePosition(iVar1,*(undefined4 *)(iVar3 + 0x68),&local_60);
      GetBonePosition
                (*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x6c),&local_50);
      *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + (local_50 - local_60);
      *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + (local_4c - local_5c);
      *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + (local_48 - local_58);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x11);
  if (*(int *)(iVar5 + 0x90) != 0) {
    dVar6 = (double)FastWrapRot
                              (*(float *)(*(int *)(iVar5 + 0x90) + 0x40),
                               DAT_00842c00 * 0.017453292 * g_FrameTime);
    *(float *)(*(int *)(iVar5 + 0x90) + 0x40) = (float)dVar6;
  }
  iVar5 = 1;
  do {
    if (*(MobyInstance **)(iVar2 + 0x60) != (MobyInstance *)0x0) {
      UpdateMobyTransform(*(MobyInstance **)(iVar2 + 0x60));
      iVar3 = *(int *)(iVar2 + 0x60);
      if ((*(ushort *)(iVar3 + 0x34) & 0x8000) != 0) {
        *(float *)(iVar3 + 0xd0) = -*(float *)(iVar3 + 0xd0);
        *(float *)(iVar3 + 0xd4) = -*(float *)(iVar3 + 0xd4);
        *(float *)(iVar3 + 0xd8) = -*(float *)(iVar3 + 0xd8);
      }
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar5 < 0x11);
  return;
}


// 0x0395438 (0x1418 bytes)
// inlined: FastAtan2 @0x395690, FastAtan2 @0x3958b0, FastAtan2 @0x395bc4, FastAtan2 @0x395f50, FastAtan2 @0x39610c, FastAtan2 @0x3965c0
/* Moby 463 */

void UpdateMoby_463(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  void *pvVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar25;
  int iVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x230;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x48] = in_LR;
  puVar11[0x3f] = in_f25;
  puVar11[0x40] = in_f26;
  puVar11[0x41] = in_f27;
  puVar11[0x42] = in_f28;
  puVar11[0x43] = in_f29;
  puVar11[0x44] = in_f30;
  puVar11[0x45] = in_f31;
  puVar11[0x3e] = unaff_r31;
  puVar11[0x3d] = unaff_r30;
  iVar17 = DAT_010c9244;
  piVar9 = (int *)moby->pVar;
  puVar11[0x3c] = unaff_r29;
  puVar11[0x3b] = unaff_r28;
  puVar11[0x3a] = unaff_r27;
  puVar11[0x39] = unaff_r26;
  puVar11[0x38] = unaff_r25;
  if (iVar17 == 0) {
    iVar17 = IsMobyPlayingSound(moby,(int)*(short *)((int)piVar9 + 0x17e));
    if (iVar17 == 0) {
      iVar17 = PlayMobySound(3,4,moby);
      *(short *)((int)piVar9 + 0x17e) = (short)iVar17;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar17 = 1;
      uVar33 = 0x4008000000000000;
      uVar32 = 0x402a000000000000;
      dVar34 = 5.0;
      dVar29 = 0.0;
      do {
        iVar21 = piVar9[0x1c];
        if (iVar21 != 0) {
          pfVar20 = *(float **)(iVar21 + 0x78);
          MB_SpawnExplosionSparks(uVar33,uVar32,lVar15,iVar21 + 0x10);
          fVar3 = *(float *)(iVar21 + 0x10) - (moby->pos).x;
          *pfVar20 = fVar3;
          fVar4 = *(float *)(iVar21 + 0x14) - (moby->pos).y;
          pfVar20[1] = fVar4;
          fVar8 = *(float *)(iVar21 + 0x18) - (moby->pos).z;
          pfVar20[2] = fVar8;
          pfVar20[3] = *(float *)(iVar21 + 0x1c);
          dVar37 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar4 * fVar4);
          fVar2 = (float)((double)(float)((double)g_FrameTime * dVar34) / dVar37);
          dVar36 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar36 = (double)(fVar3 * fVar2);
          }
          dVar42 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar42 = (double)(fVar4 * fVar2);
          }
          dVar35 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar35 = (double)(fVar8 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar36 = (double)(fVar3 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar42 = (double)(fVar4 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar35 = (double)(fVar8 * fVar2);
          }
          *pfVar20 = (float)dVar36;
          pfVar20[1] = (float)dVar42;
          pfVar20[2] = (float)dVar35;
          *(undefined1 *)(iVar21 + 0x20) = 1;
          piVar9[0x1c] = 0;
        }
        iVar17 = iVar17 + 1;
        piVar9 = piVar9 + 4;
      } while (iVar17 < 0x11);
      MB_SpawnExplosionSparks(dVar34,uVar32,lVar15,lVar15 + 0x10);
      DeleteMoby(moby);
    }
    else if (uVar1 == '\x03') {
      moby->state = '\x01';
      iVar17 = piVar9[4];
      fVar2 = *(float *)(iVar17 + 0x10);
      (moby->pos).x = fVar2;
      fVar3 = *(float *)(iVar17 + 0x14);
      (moby->pos).y = fVar3;
      (moby->pos).z = *(f32 *)(iVar17 + 0x18);
      (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
      fVar2 = *(float *)(iVar17 + 0x20) - fVar2;
      fVar3 = *(float *)(iVar17 + 0x24) - fVar3;
      fVar4 = ABS(fVar2);
      fVar8 = ABS(fVar3);
      *(float *)(puVar11 + 0x16) = fVar2;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar4 - fVar8;
      fVar3 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar11 + 0x16));
      if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
        fVar2 = fVar8;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar11 + 0xb4));
      if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar27 = uVar14 - 0x128;
        lVar23 = uVar14 - 0x138;
        lVar28 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x104) = fVar2;
        *(float *)((int)puVar11 + 0xfc) = fVar2;
        *(float *)(puVar11 + 0x20) = fVar2;
        *(float *)(puVar11 + 0x1f) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar4;
        *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar2;
        *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0xf8) = *(float *)((int)lVar18 + 0xe8) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0x138;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar2 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0xf8) = *(float *)((int)lVar18 + 0xf8) * fVar2;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar21 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar17 + 0xf8) + *(float *)(iVar21 + 4) +
                  *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar8;
      }
      (moby->rotation).z = fVar3;
      M463_00395238(lVar15);
    }
    else if (uVar1 == '\x02') {
      piVar10 = (int *)piVar9[0x10];
      iVar17 = piVar9[0xc];
      iVar21 = *piVar10;
      iVar26 = (iVar17 + 1) - ((iVar17 + 1) / iVar21) * iVar21;
      fVar2 = (float)piVar10[iVar26 * 4 + 4];
      fVar3 = (float)piVar10[iVar26 * 4 + 5];
      fVar4 = fVar2 - (float)piVar10[iVar17 * 4 + 4];
      fVar8 = fVar3 - (float)piVar10[iVar17 * 4 + 5];
      fVar6 = ABS(fVar4);
      fVar5 = ABS(fVar8);
      *(float *)(puVar11 + 0x19) = fVar4;
      *(float *)((int)puVar11 + 0xcc) = fVar8;
      iVar17 = (iVar17 + 2) - ((iVar17 + 2) / iVar21) * iVar21;
      *(float *)(puVar11 + 0x1a) = fVar6 - fVar5;
      dVar29 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar11 + 0x19));
      if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)((int)puVar11 + 0xcc));
      if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
        fVar13 = fVar6;
      }
      dVar34 = dVar29;
      if (0.0 < fVar4) {
        lVar18 = uVar14 - 0x220;
        lVar23 = uVar14 - 0xf8;
        lVar27 = uVar14 - 0xe8;
        lVar28 = 2;
        fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x144) = fVar4;
        *(float *)((int)puVar11 + 0x13c) = fVar4;
        *(float *)(puVar11 + 0x28) = fVar4;
        *(float *)(puVar11 + 0x27) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar6;
        *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar4;
        *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x138) = *(float *)((int)lVar18 + 0x128) * fVar4 * fVar4;
          iVar21 = (int)lVar23;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0xf8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar4 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x138) = *(float *)((int)lVar18 + 0x138) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar18 = lVar16;
        do {
          iVar21 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar21 + 0x138)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar5 + fVar8);
      }
      fVar2 = (float)piVar10[iVar17 * 4 + 4] - fVar2;
      fVar3 = (float)piVar10[iVar17 * 4 + 5] - fVar3;
      fVar8 = ABS(fVar2);
      fVar4 = ABS(fVar3);
      *(float *)((int)puVar11 + 0xbc) = fVar2;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)((int)puVar11 + 0xc4) = fVar8 - fVar4;
      uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar11 + 0xbc));
      if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)(puVar11 + 0x18));
      if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
        fVar4 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar36 = dVar29;
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar27 = uVar14 - 0x108;
        lVar23 = uVar14 - 0x118;
        lVar28 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x124) = fVar2;
        *(float *)((int)puVar11 + 0x11c) = fVar2;
        *(float *)(puVar11 + 0x24) = fVar2;
        *(float *)(puVar11 + 0x23) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar4;
        *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar2;
        *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x118) = *(float *)((int)lVar18 + 0x108) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0x118;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar2 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x118) = *(float *)((int)lVar18 + 0x118) * fVar2;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar17 = (int)lVar16;
          iVar21 = (int)lVar27;
          lVar16 = lVar16 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x118)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar3 + fVar8);
      }
      dVar34 = (double)FastDiffRots(dVar34,dVar36);
      iVar17 = piVar9[0x10] + iVar26 * 0x10;
      iVar21 = piVar9[0x10] + piVar9[0xc] * 0x10;
      fVar2 = (moby->pos).y - *(float *)(iVar17 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10);
      fVar3 = *(float *)(iVar21 + 0x14) - *(float *)(iVar17 + 0x14);
      fVar8 = *(float *)(iVar21 + 0x10) - *(float *)(iVar17 + 0x10);
      fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18);
      fVar6 = *(float *)(iVar21 + 0x18) - *(float *)(iVar17 + 0x18);
      dVar34 = (double)FastWrapRot
                                 ((float)(dVar34 * (double)(SQRT(fVar5 * fVar5 +
                                                                 fVar4 * fVar4 + fVar2 * fVar2) /
                                                           SQRT(fVar6 * fVar6 +
                                                                fVar8 * fVar8 + fVar3 * fVar3))),
                                  (float)dVar36);
      (moby->rotation).z = (float)dVar34;
      dVar36 = (double)(moby->pos).y;
      iVar17 = piVar9[0x10] + iVar26 * 0x10;
      dVar34 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).z;
      fVar8 = *(float *)(iVar17 + 0x14);
      fVar5 = *(float *)(iVar17 + 0x10);
      fVar2 = (float)(dVar36 - (double)fVar8);
      fVar6 = *(float *)(iVar17 + 0x18);
      fVar3 = (float)(dVar34 - (double)fVar5);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar42 = (double)*(float *)(iVar17 + 0x1c);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 0.5) {
        piVar9[0xc] = iVar26;
        dVar34 = (double)(moby->pos).x;
        dVar36 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).z;
      }
      dVar39 = (double)(float)((double)fVar8 - dVar36);
      dVar41 = (double)(float)((double)fVar5 - dVar34);
      dVar38 = (double)(float)((double)fVar6 - dVar37);
      dVar30 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar39 * dVar39))));
      dVar35 = dVar38;
      dVar40 = dVar39;
      dVar31 = dVar41;
      if (((double)(DAT_00842bfc * g_FrameTime) < dVar30) &&
         (dVar35 = dVar29, dVar40 = dVar29, dVar31 = dVar29, dVar30 != dVar29)) {
        dVar31 = (double)(float)((double)(DAT_00842bfc * g_FrameTime) / dVar30);
        dVar35 = (double)(float)(dVar38 * dVar31);
        dVar40 = (double)(float)(dVar39 * dVar31);
        dVar31 = (double)(float)(dVar41 * dVar31);
      }
      (moby->pos).x = (float)(dVar34 + dVar31);
      (moby->pos).y = (float)(dVar36 + dVar40);
      (moby->pos).z = (float)(dVar37 + dVar35);
      M463_00395238(lVar15);
      iVar17 = FastDecTimerS32(piVar9 + 0x5e);
      if (iVar17 != 0) {
        dVar34 = (double)MB_randRangeFloat(300.0,600.0);
        iVar17 = FastDoubleToInt((double)(float)(dVar34 * (double)animationSpeed));
        piVar9[0x5e] = iVar17;
        GetBonePosition(piVar9[0x28],1,uVar14 - 0x1a0);
        uVar32 = MB_randRangeFloat(-0.5235988,-0.2617994);
        uVar33 = MB_randRot();
        fVar3 = g_FrameTime;
        fVar2 = DAT_00842bfc * 2.0;
        dVar37 = (double)SQRT((float)(dVar35 * dVar35 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar40 * dVar40))));
        *(float *)((int)puVar11 + 0xac) = (float)dVar42;
        dVar36 = (double)(float)((double)(fVar2 * fVar3) / dVar37);
        dVar34 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar36);
        }
        dVar42 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar36);
        }
        dVar30 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar30 = (double)(float)(dVar35 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar30 = (double)(float)(dVar35 * dVar36);
        }
        *(float *)(puVar11 + 0x14) = (float)dVar34;
        *(float *)((int)puVar11 + 0xa4) = (float)dVar42;
        *(float *)(puVar11 + 0x15) = (float)dVar30;
        iVar17 = FUN_00375430(uVar32,uVar33,uVar14 - 0x1a0,0);
        if (iVar17 != 0) {
          uVar7 = *(undefined4 *)(piVar9[0x28] + 0x48);
          *(undefined4 *)(iVar17 + 0x44) = 0;
          *(undefined4 *)(iVar17 + 0x48) = uVar7;
          *(undefined1 *)(iVar17 + 0x20) = 5;
        }
      }
    }
    else if (uVar1 == '\x01') {
      piVar10 = (int *)piVar9[4];
      iVar17 = *piVar10;
      iVar21 = *piVar9 + iVar17 + (int)*(char *)(piVar9 + 1);
      iVar21 = iVar21 - (iVar21 / iVar17) * iVar17;
      iVar17 = piVar9[0x5c];
      fVar2 = (float)piVar10[iVar21 * 4 + 4] - (moby->pos).x;
      fVar3 = (float)piVar10[iVar21 * 4 + 5] - (moby->pos).y;
      fVar8 = ABS(fVar2);
      fVar4 = ABS(fVar3);
      *(float *)(puVar11 + 0x1c) = fVar2;
      *(float *)((int)puVar11 + 0xe4) = fVar3;
      pMVar25 = g_MobyInstance + iVar17;
      *(float *)(puVar11 + 0x1d) = fVar8 - fVar4;
      dVar29 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1d) & 4;
      uVar19 = uVar22 << 2 | 0x735900;
      fVar2 = ABS(*(float *)(puVar11 + 0x1c));
      if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar3 = *(float *)((int)uVar19 + 4);
      fVar5 = ABS(*(float *)((int)puVar11 + 0xe4));
      if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
        fVar5 = fVar8;
      }
      dVar34 = dVar29;
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar23 = uVar14 - 0xb8;
        lVar27 = uVar14 - 0xa8;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar8 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x184) = fVar2;
        *(float *)((int)puVar11 + 0x17c) = fVar2;
        *(float *)(puVar11 + 0x30) = fVar2;
        *(float *)(puVar11 + 0x2f) = fVar2;
        fVar2 = fVar8 * fVar8;
        *(float *)((int)puVar11 + 0x17c) = *(float *)((int)puVar11 + 0x17c) * fVar8;
        *(float *)(puVar11 + 0x30) = *(float *)(puVar11 + 0x30) * fVar2;
        *(float *)((int)puVar11 + 0x184) = *(float *)((int)puVar11 + 0x184) * fVar2 * fVar8;
        do {
          *(float *)((int)lVar18 + 0x178) = *(float *)((int)lVar18 + 0x168) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0xb8;
        uVar19 = ZEXT48(&DAT_007358e0);
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          pfVar20 = (float *)uVar19;
          fVar2 = pfVar20[1];
          uVar19 = uVar19 + 8;
          *(float *)((int)lVar18 + 0x178) = *(float *)((int)lVar18 + 0x178) * *pfVar20;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar2;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar18 = lVar16;
        do {
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar26 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0x178)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar34,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar15,uVar19,
                 piVar9 + 0x5d);
      dVar36 = (double)(moby->pos).y;
      iVar17 = piVar9[4] + iVar21 * 0x10;
      dVar34 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).z;
      fVar8 = *(float *)(iVar17 + 0x14);
      fVar5 = *(float *)(iVar17 + 0x10);
      fVar2 = (float)(dVar36 - (double)fVar8);
      fVar3 = (float)(dVar34 - (double)fVar5);
      fVar6 = *(float *)(iVar17 + 0x18);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar42 = (double)*(float *)(iVar17 + 0x1c);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 0.5) {
        *piVar9 = iVar21;
        dVar34 = (double)(moby->pos).x;
        dVar36 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).z;
      }
      dVar39 = (double)(float)((double)fVar8 - dVar36);
      dVar41 = (double)(float)((double)fVar5 - dVar34);
      dVar38 = (double)(float)((double)fVar6 - dVar37);
      dVar30 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar39 * dVar39))));
      dVar35 = dVar38;
      dVar40 = dVar39;
      dVar31 = dVar41;
      if (((double)(DAT_00842bfc * g_FrameTime) < dVar30) &&
         (dVar35 = dVar29, dVar40 = dVar29, dVar31 = dVar29, dVar30 != dVar29)) {
        dVar31 = (double)(float)((double)(DAT_00842bfc * g_FrameTime) / dVar30);
        dVar35 = (double)(float)(dVar38 * dVar31);
        dVar40 = (double)(float)(dVar39 * dVar31);
        dVar31 = (double)(float)(dVar41 * dVar31);
      }
      (moby->pos).x = (float)(dVar34 + dVar31);
      (moby->pos).y = (float)(dVar36 + dVar40);
      (moby->pos).z = (float)(dVar37 + dVar35);
      M463_00394e68(lVar15);
      M463_00395238(lVar15);
      if (moby->setByGroup != '\0') {
        moby->setByGroup = '\0';
        GetBonePosition(piVar9[0x28],1,uVar14 - 0x1c0);
        uVar32 = MB_randRangeFloat(0.17453292,0.5235988);
        fVar2 = (pMVar25->pos).x - (moby->pos).x;
        fVar3 = (pMVar25->pos).y - (moby->pos).y;
        dVar37 = ABS((double)fVar2);
        dVar36 = ABS((double)fVar3);
        *(float *)((int)puVar11 + 0xd4) = fVar2;
        *(float *)(puVar11 + 0x1b) = fVar3;
        *(float *)((int)puVar11 + 0xdc) = (float)(dVar37 - dVar36);
        uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)((int)puVar11 + 0xd4));
        if ((double)*(float *)((int)puVar11 + 0xdc) - dVar29 < 0.0) {
          dVar34 = dVar36;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar36 = ABS((double)*(float *)(puVar11 + 0x1b));
        if ((double)*(float *)((int)puVar11 + 0xdc) - dVar29 < 0.0) {
          dVar36 = dVar37;
        }
        fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar37 = dVar29;
        if (dVar29 < dVar34) {
          lVar15 = uVar14 - 0x220;
          lVar23 = uVar14 - 200;
          lVar18 = uVar14 - 0xd8;
          lVar27 = 2;
          fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar8 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x164) = fVar4;
          *(float *)((int)puVar11 + 0x15c) = fVar4;
          *(float *)(puVar11 + 0x2c) = fVar4;
          *(float *)(puVar11 + 0x2b) = fVar4;
          fVar4 = fVar8 * fVar8;
          *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar8;
          *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar4;
          *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar4 * fVar8;
          do {
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x148) * fVar4 * fVar4;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar14 - 0xd8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar18 = lVar23;
          do {
            fVar4 = *pfVar20;
            fVar8 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x158) * fVar4;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
            lVar18 = lVar18 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar15 = 2;
          dVar34 = dVar29;
          do {
            iVar17 = (int)lVar16;
            iVar21 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0x158)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar37 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar34 = (double)FastWrapRot((float)dVar37,3.1415927);
        dVar36 = (double)MB_randRangeFloat(-0.2617994,0.7853982);
        dVar34 = (double)FastWrapRot((float)dVar34,(float)dVar36);
        fVar2 = g_FrameTime;
        if ((((dVar34 <= dVar29) || (dVar36 = 0.3400000035762787, 0.3400000035762787 <= dVar34)) &&
            (dVar36 = dVar34, dVar34 <= dVar29)) && (-0.3400000035762787 < dVar34)) {
          dVar36 = -0.3400000035762787;
        }
        fVar3 = DAT_00842bfc * 2.0;
        dVar30 = (double)SQRT((float)(dVar35 * dVar35 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar40 * dVar40))));
        *(float *)((int)puVar11 + 0x8c) = (float)dVar42;
        dVar37 = (double)(float)((double)(fVar3 * fVar2) / dVar30);
        dVar34 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar37);
        }
        dVar42 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar37);
        }
        dVar38 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar38 = (double)(float)(dVar35 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar38 = (double)(float)(dVar35 * dVar37);
        }
        *(float *)(puVar11 + 0x10) = (float)dVar34;
        *(float *)((int)puVar11 + 0x84) = (float)dVar42;
        *(float *)(puVar11 + 0x11) = (float)dVar38;
        iVar17 = FUN_00375430(uVar32,dVar36,uVar14 - 0x1c0,pMVar25);
        iVar21 = 0;
        *(float *)(iVar17 + 0x2c) = *(float *)(*(int *)(iVar17 + 0x24) + 0x24) * 0.2;
        pvVar24 = pMVar25->pVar;
        do {
          if (*(int *)((int)pvVar24 + 0x60) == 0) {
            *(int *)((int)pMVar25->pVar + iVar21 * 4 + 0x60) = iVar17;
            return;
          }
          iVar21 = iVar21 + 1;
          pvVar24 = (void *)((int)pvVar24 + 4);
        } while (iVar21 < 8);
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        DeleteMoby(moby);
      }
      else {
        piVar9[4] = (int)Splines[piVar9[5]];
        piVar9[0x10] = (int)Splines[piVar9[0x11]];
        dVar29 = (double)MB_randRangeFloat(300.0,600.0);
        iVar17 = FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        piVar9[0x5e] = iVar17;
        iVar17 = piVar9[0x10];
        moby->modeBits = moby->modeBits | CAN_BE_DAMAGED;
        (moby->pos).x = *(f32 *)(iVar17 + 0x10);
        (moby->pos).y = *(f32 *)(iVar17 + 0x14);
        (moby->pos).z = *(f32 *)(iVar17 + 0x18);
        (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
        M463_00394c18(lVar15);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        moby->state = '\x02';
        fVar2 = *(float *)(piVar9[0x10] + 0x20) - fVar2;
        fVar3 = *(float *)(piVar9[0x10] + 0x24) - fVar3;
        fVar4 = ABS(fVar2);
        fVar8 = ABS(fVar3);
        *(float *)((int)puVar11 + 0xec) = fVar2;
        *(float *)(puVar11 + 0x1e) = fVar3;
        *(float *)((int)puVar11 + 0xf4) = fVar4 - fVar8;
        fVar2 = 0.0;
        uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar11 + 0xec));
        if (*(float *)((int)puVar11 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar8;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar5 = ABS(*(float *)(puVar11 + 0x1e));
        if (*(float *)((int)puVar11 + 0xf4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar15 = uVar14 - 0x220;
          lVar18 = uVar14 - 0x98;
          lVar23 = uVar14 - 0x88;
          lVar27 = 2;
          fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x1a4) = fVar3;
          *(float *)((int)puVar11 + 0x19c) = fVar3;
          *(float *)(puVar11 + 0x34) = fVar3;
          *(float *)(puVar11 + 0x33) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x19c) = *(float *)((int)puVar11 + 0x19c) * fVar5;
          *(float *)(puVar11 + 0x34) = *(float *)(puVar11 + 0x34) * fVar3;
          *(float *)((int)puVar11 + 0x1a4) = *(float *)((int)puVar11 + 0x1a4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar15 + 0x198) = *(float *)((int)lVar15 + 0x188) * fVar3 * fVar3;
            iVar17 = (int)lVar18;
            lVar15 = lVar15 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar14 - 0x98;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar18 = lVar23;
          do {
            fVar3 = *pfVar20;
            fVar5 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x198) = *(float *)((int)lVar15 + 0x198) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
            lVar18 = lVar18 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar21 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar17 + 0x198) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar4;
        }
        (moby->rotation).z = fVar2;
      }
    }
  }
  return;
}



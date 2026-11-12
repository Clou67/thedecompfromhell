// game/update/moby462.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x392ee8-0x394bf8
#include "game/update/moby462.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby436.h"
#include "game/update/moby441.h"
#include "idol/fastfunc.h"

// 0x0392ee8 (0x16c bytes)
void M462_00392ee8(int param_1)

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
  uVar3 = M465_003849b8(param_1,0x1c0,1,0);
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(int *)(iVar1 + 0x94) = param_1;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 1;
  iVar4 = M465_003849b8(param_1,0x1bd,0,2);
  *(int *)(iVar1 + 0x70) = iVar4;
  *(int *)(iVar1 + 0x74) = param_1;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  *(float *)(iVar4 + 0x2c) = *(float *)(*(int *)(iVar4 + 0x24) + 0x24) * 0.75;
  uVar2 = M465_003849b8(param_1,0x1ba,1,1);
  *(int *)(iVar1 + 0x80) = (int)uVar2;
  *(int *)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  uVar3 = M465_003849b8(uVar2,0x1b9,0,0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar4 = iVar1;
  do {
    iVar5 = iVar6 + 2;
    uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1bb,0,iVar5);
    *(undefined4 *)(iVar4 + 0xb0) = uVar3;
    uVar3 = *(undefined4 *)(iVar1 + 0x90);
    iVar6 = iVar6 + 1;
    *(int *)(iVar4 + 0xbc) = iVar5;
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    iVar4 = iVar4 + 0x10;
  } while (iVar6 < 8);
  return;
}


// 0x0393068 (0x3b4 bytes)
ulonglong M462_00393068(MobyInstance *param_1)

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
  int iVar14;
  ulonglong uVar13;
  short sVar17;
  uint uVar15;
  int iVar16;
  void *pvVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar20 = 0;
  pvVar2 = param_1->pVar;
  iVar16 = -1;
  lVar21 = 0;
  lVar19 = 0;
  pvVar18 = pvVar2;
  do {
    if ((*(int *)((int)pvVar18 + 0x60) != 0) &&
       (iVar14 = MB_damage(*(int *)((int)pvVar18 + 0x60),0x10000,0), iVar14 != 0)) {
      iVar14 = (int)lVar20;
      if ((int)lVar21 < 3) {
        if (iVar14 < 1) {
          lVar20 = 1;
          iVar16 = 1;
        }
      }
      else if ((int)lVar21 < 5) {
        if (iVar14 < 2) {
          iVar16 = 1;
          lVar20 = 2;
        }
      }
      else if (iVar14 < 4) {
        lVar20 = lVar20 + 4;
        iVar16 = 2;
        lVar19 = lVar21;
      }
      *(undefined1 *)(*(int *)((int)pvVar18 + 0x60) + 0xa4) = 0xff;
    }
    lVar21 = lVar21 + 1;
    pvVar18 = (void *)((int)pvVar18 + 0x10);
  } while ((int)lVar21 < 0xd);
  uVar13 = (ulonglong)*(ushort *)((int)pvVar2 + 0x13c) + lVar20;
  sVar17 = (short)uVar13;
  *(short *)((int)pvVar2 + 0x13c) = sVar17;
  if (7 < sVar17) {
    *(ushort *)((int)pvVar2 + 0x13c) =
         sVar17 + ((sVar17 >> 3) + (ushort)(sVar17 < 0 && (uVar13 & 7) != 0)) * -8;
    if ((int)lVar19 != 0) {
      iVar4 = (int)(lVar19 << 4);
      iVar16 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      pfVar3 = *(float **)(iVar16 + 0x78);
      MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar16 + 0x10,iVar16,
                 0xffffffffffffffff);
      iVar16 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      iVar14 = *(int *)((int)pvVar2 + iVar4 + 100);
      fVar5 = *(float *)(iVar16 + 0x10) - *(float *)(iVar14 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar16 + 0x14) - *(float *)(iVar14 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar16 + 0x18) - *(float *)(iVar14 + 0x18);
      pfVar3[2] = fVar7;
      pfVar3[3] = *(float *)(iVar16 + 0x1c);
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
    dVar26 = 0.0;
    MB_randRangeFloat(0.0,23.0);
    uVar15 = FastDoubleToInt();
    iVar14 = 0;
    do {
      iVar12 = uVar15 + (((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0)) * -8 + 5
      ;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar16 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar14 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar16 + 0x10) - *(float *)(iVar14 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar16 + 0x14) - *(float *)(iVar14 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar16 + 0x18) - *(float *)(iVar14 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar16 + 0x1c);
        dVar24 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar1 = (float)((double)(g_FrameTime * 10.0) / dVar24);
        dVar22 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        dVar23 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        dVar25 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        *pfVar3 = (float)dVar22;
        pfVar3[1] = (float)dVar23;
        pfVar3[2] = (float)dVar25;
        *(undefined1 *)(*(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60) + 0x20) = 1;
        *(undefined4 *)((int)pvVar2 + iVar12 * 0x10 + 0x60) = 0;
        return 1;
      }
      iVar14 = iVar14 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar14 < 8);
    uVar13 = 99;
    param_1->state = 'c';
  }
  if (-1 < iVar16) {
    iVar16 = PlayMobySound(iVar16,0,param_1);
    uVar13 = (ulonglong)iVar16;
  }
  return uVar13;
}


// 0x0393420 (0x174 bytes)
void M462_00393420(int param_1)

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
  } while (iVar4 < 0xd);
  if (*(int *)(iVar5 + 0x90) != 0) {
    dVar6 = (double)FastWrapRot
                              (*(float *)(*(int *)(iVar5 + 0x90) + 0x40),
                               DAT_00842b84 * 0.017453292 * g_FrameTime);
    *(float *)(*(int *)(iVar5 + 0x90) + 0x40) = (float)dVar6;
  }
  iVar5 = 1;
  do {
    if (*(MobyInstance **)(iVar2 + 0x60) != (MobyInstance *)0x0) {
      UpdateMobyTransform(*(MobyInstance **)(iVar2 + 0x60));
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar5 < 0xd);
  return;
}


// 0x03935e8 (0x1610 bytes)
// inlined: FastAtan2 @0x393850, FastAtan2 @0x393a64, FastAtan2 @0x393d6c, FastAtan2 @0x394114, FastAtan2 @0x394318, FastAtan2 @0x3944c8, FastAtan2 @0x394970
/* Moby 462 */

void UpdateMoby_462(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  undefined2 uVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar26;
  int iVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar39;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x260;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x4e] = in_LR;
  puVar12[0x44] = in_f24;
  puVar12[0x45] = in_f25;
  puVar12[0x46] = in_f26;
  puVar12[0x47] = in_f27;
  puVar12[0x48] = in_f28;
  puVar12[0x49] = in_f29;
  puVar12[0x4a] = in_f30;
  puVar12[0x4b] = in_f31;
  puVar12[0x43] = unaff_r31;
  puVar12[0x42] = unaff_r30;
  iVar17 = DAT_010c9240;
  piVar10 = (int *)moby->pVar;
  puVar12[0x41] = unaff_r29;
  puVar12[0x40] = unaff_r28;
  puVar12[0x3f] = unaff_r27;
  puVar12[0x3e] = unaff_r26;
  puVar12[0x3d] = unaff_r25;
  if (iVar17 == 0) {
    iVar17 = IsMobyPlayingSound(moby,(int)*(short *)((int)piVar10 + 0x13e));
    if (iVar17 == 0) {
      iVar17 = PlayMobySound(3,4,moby);
      *(short *)((int)piVar10 + 0x13e) = (short)iVar17;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar17 = 1;
      uVar35 = 0x4008000000000000;
      uVar33 = 0x402a000000000000;
      dVar30 = 5.0;
      dVar44 = 0.0;
      do {
        iVar22 = piVar10[0x1c];
        if (iVar22 != 0) {
          pfVar21 = *(float **)(iVar22 + 0x78);
          MB_SpawnExplosionSparks(uVar35,uVar33,lVar15,iVar22 + 0x10);
          fVar4 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
          *pfVar21 = fVar4;
          fVar9 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
          pfVar21[1] = fVar9;
          fVar5 = *(float *)(iVar22 + 0x18) - (moby->pos).z;
          pfVar21[2] = fVar5;
          pfVar21[3] = *(float *)(iVar22 + 0x1c);
          dVar37 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)((double)(float)((double)g_FrameTime * dVar30) / dVar37);
          dVar36 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar36 = (double)(fVar4 * fVar3);
          }
          dVar38 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          dVar43 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar43 = (double)(fVar5 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar36 = (double)(fVar4 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar43 = (double)(fVar5 * fVar3);
          }
          *pfVar21 = (float)dVar36;
          pfVar21[1] = (float)dVar38;
          pfVar21[2] = (float)dVar43;
          *(undefined1 *)(iVar22 + 0x20) = 1;
          piVar10[0x1c] = 0;
        }
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar17 < 0xd);
      MB_SpawnExplosionSparks(dVar30,uVar33,lVar15,lVar15 + 0x10);
      DeleteMoby(moby);
    }
    else {
      dVar44 = 0.7853981852531433;
      if (uVar1 == '\x03') {
        moby->state = '\x01';
        iVar17 = piVar10[4];
        fVar3 = *(float *)(iVar17 + 0x10);
        (moby->pos).x = fVar3;
        fVar4 = *(float *)(iVar17 + 0x14);
        (moby->pos).y = fVar4;
        (moby->pos).z = *(f32 *)(iVar17 + 0x18);
        (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
        fVar3 = *(float *)(iVar17 + 0x20) - fVar3;
        fVar4 = *(float *)(iVar17 + 0x24) - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)(puVar12 + 0x16) = fVar3;
        *(float *)((int)puVar12 + 0xb4) = fVar4;
        *(float *)(puVar12 + 0x17) = fVar5 - fVar9;
        fVar3 = 0.0;
        uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar12 + 0x16));
        if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar12 + 0xb4));
        if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar19 = uVar14 - 0x250;
          lVar24 = uVar14 - 0x15c;
          lVar28 = uVar14 - 0x14c;
          lVar29 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x22) = fVar4;
          *(float *)(puVar12 + 0x21) = fVar4;
          *(float *)((int)puVar12 + 0x10c) = fVar4;
          *(float *)((int)puVar12 + 0x104) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar5;
          *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar4;
          *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0xf4) * fVar4 * fVar4;
            iVar17 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x15c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar4 = *pfVar21;
            fVar5 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0x104) * fVar4;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar22 = (int)lVar28;
            lVar16 = lVar16 + 0x10;
            lVar28 = lVar28 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar17 + 0x104) + *(float *)(iVar22 + 4) +
                    *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar9;
        }
        (moby->rotation).z = fVar3;
        M462_00393420(lVar15);
      }
      else if (uVar1 == '\x02') {
        if ((((g_gameMode == GAME_MODE_SCENE) && (*(short *)(piVar10 + 0x4e) != 0)) &&
            (g_SceneId == 0)) && (g_SpaceSceneFrame == 2)) {
          iVar17 = piVar10[0x10];
          (moby->pos).x = *(f32 *)(iVar17 + 0x100);
          (moby->pos).y = *(f32 *)(iVar17 + 0x104);
          (moby->pos).z = *(f32 *)(iVar17 + 0x108);
          (moby->pos).w = *(f32 *)(iVar17 + 0x10c);
          piVar10[0xc] = 0xf;
          fVar3 = *(float *)(piVar10[0x10] + 0xc0) - (moby->pos).x;
          fVar4 = *(float *)(piVar10[0x10] + 0xc4) - (moby->pos).y;
          fVar5 = ABS(fVar3);
          *(float *)((int)puVar12 + 0xd4) = fVar3;
          fVar9 = ABS(fVar4);
          *(float *)(puVar12 + 0x1b) = fVar4;
          *(float *)((int)puVar12 + 0xdc) = fVar5 - fVar9;
          fVar3 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar12 + 0xd4));
          if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
            fVar4 = fVar9;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar7 = ABS(*(float *)(puVar12 + 0x1b));
          if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar19 = uVar14 - 0x250;
            lVar24 = uVar14 - 0xfc;
            lVar28 = uVar14 - 0xec;
            lVar29 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x2e) = fVar4;
            *(float *)(puVar12 + 0x2d) = fVar4;
            *(float *)((int)puVar12 + 0x16c) = fVar4;
            *(float *)((int)puVar12 + 0x164) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar5;
            *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar4;
            *(float *)(puVar12 + 0x2e) = *(float *)(puVar12 + 0x2e) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar19 + 0x164) = *(float *)((int)lVar19 + 0x154) * fVar4 * fVar4;
              iVar17 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar28 = uVar14 - 0xfc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar19 = lVar16;
            lVar24 = lVar28;
            do {
              fVar4 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar19 + 0x164) = *(float *)((int)lVar19 + 0x164) * fVar4;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar16;
            do {
              iVar17 = (int)lVar19;
              iVar22 = (int)lVar28;
              lVar19 = lVar19 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar3 = fVar3 + *(float *)(iVar17 + 0x164) + *(float *)(iVar22 + 4) +
                      *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar9;
          }
          (moby->rotation).z = fVar3;
        }
        piVar11 = (int *)piVar10[0x10];
        iVar17 = piVar10[0xc];
        iVar22 = *piVar11;
        iVar27 = (iVar17 + 1) - ((iVar17 + 1) / iVar22) * iVar22;
        fVar3 = (float)piVar11[iVar27 * 4 + 4];
        fVar4 = (float)piVar11[iVar27 * 4 + 5];
        fVar9 = fVar3 - (float)piVar11[iVar17 * 4 + 4];
        fVar5 = fVar4 - (float)piVar11[iVar17 * 4 + 5];
        fVar7 = ABS(fVar9);
        *(float *)(puVar12 + 0x19) = fVar9;
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar12 + 0xcc) = fVar5;
        iVar17 = (iVar17 + 2) - ((iVar17 + 2) / iVar22) * iVar22;
        *(float *)(puVar12 + 0x1a) = fVar7 - fVar6;
        dVar44 = 0.0;
        uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar12 + 0x19));
        if (*(float *)(puVar12 + 0x1a) - 0.0 < 0.0) {
          fVar9 = fVar6;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar6 = ABS(*(float *)((int)puVar12 + 0xcc));
        if (*(float *)(puVar12 + 0x1a) - 0.0 < 0.0) {
          fVar6 = fVar7;
        }
        fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar30 = dVar44;
        if (0.0 < fVar9) {
          lVar19 = uVar14 - 0x250;
          lVar28 = uVar14 - 0x10c;
          lVar24 = uVar14 - 0x11c;
          lVar29 = 2;
          fVar9 = (fVar6 - fVar9) / (fVar6 + fVar9);
          fVar6 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x2a) = fVar9;
          *(float *)(puVar12 + 0x29) = fVar9;
          *(float *)((int)puVar12 + 0x14c) = fVar9;
          *(float *)((int)puVar12 + 0x144) = fVar9;
          fVar9 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar6;
          *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar9;
          *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar9 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x134) * fVar9 * fVar9;
            iVar22 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x11c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar9 = *pfVar21;
            fVar6 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x144) * fVar9;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar24 = 2;
          lVar19 = lVar16;
          do {
            iVar22 = (int)lVar19;
            iVar13 = (int)lVar28;
            lVar19 = lVar19 + 0x10;
            lVar28 = lVar28 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x144)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar7);
        }
        fVar3 = (float)piVar11[iVar17 * 4 + 4] - fVar3;
        fVar4 = (float)piVar11[iVar17 * 4 + 5] - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)((int)puVar12 + 0xbc) = fVar3;
        *(float *)(puVar12 + 0x18) = fVar4;
        *(float *)((int)puVar12 + 0xc4) = fVar5 - fVar9;
        uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar12 + 0xbc));
        if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar9 = ABS(*(float *)(puVar12 + 0x18));
        if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
          fVar9 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar36 = dVar44;
        if (0.0 < fVar3) {
          lVar19 = uVar14 - 0x250;
          lVar28 = uVar14 - 300;
          lVar24 = uVar14 - 0x13c;
          lVar29 = 2;
          fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
          fVar9 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x26) = fVar3;
          *(float *)(puVar12 + 0x25) = fVar3;
          *(float *)((int)puVar12 + 300) = fVar3;
          *(float *)((int)puVar12 + 0x124) = fVar3;
          fVar3 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar9;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar3;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar3 * fVar9;
          do {
            *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x114) * fVar3 * fVar3;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x13c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar3 = *pfVar21;
            fVar9 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x124) * fVar3;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar9;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar22 = (int)lVar28;
            lVar16 = lVar16 + 0x10;
            lVar28 = lVar28 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x124)) +
                              *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                             *(float *)(iVar22 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar4 + fVar5);
        }
        dVar30 = (double)FastDiffRots(dVar30,dVar36);
        iVar17 = piVar10[0x10] + iVar27 * 0x10;
        iVar22 = piVar10[0x10] + piVar10[0xc] * 0x10;
        fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14);
        fVar9 = (moby->pos).x - *(float *)(iVar17 + 0x10);
        fVar4 = *(float *)(iVar22 + 0x14) - *(float *)(iVar17 + 0x14);
        fVar5 = *(float *)(iVar22 + 0x10) - *(float *)(iVar17 + 0x10);
        fVar6 = (moby->pos).z - *(float *)(iVar17 + 0x18);
        fVar7 = *(float *)(iVar22 + 0x18) - *(float *)(iVar17 + 0x18);
        dVar30 = (double)FastWrapRot
                                   ((float)(dVar30 * (double)(SQRT(fVar6 * fVar6 +
                                                                   fVar9 * fVar9 + fVar3 * fVar3) /
                                                             SQRT(fVar7 * fVar7 +
                                                                  fVar5 * fVar5 + fVar4 * fVar4))),
                                    (float)dVar36);
        (moby->rotation).z = (float)dVar30;
        dVar36 = (double)(moby->pos).y;
        iVar17 = piVar10[0x10] + iVar27 * 0x10;
        dVar30 = (double)(moby->pos).x;
        fVar5 = *(float *)(iVar17 + 0x14);
        fVar6 = *(float *)(iVar17 + 0x10);
        fVar3 = (float)(dVar36 - (double)fVar5);
        dVar37 = (double)(moby->pos).z;
        fVar4 = (float)(dVar30 - (double)fVar6);
        fVar7 = *(float *)(iVar17 + 0x18);
        fVar9 = (float)(dVar37 - (double)fVar7);
        dVar38 = (double)*(float *)(iVar17 + 0x1c);
        if (SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
          piVar10[0xc] = iVar27;
          dVar30 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar37 = (double)(moby->pos).z;
        }
        dVar39 = (double)(float)((double)fVar5 - dVar36);
        dVar41 = (double)(float)((double)fVar6 - dVar30);
        dVar31 = (double)(float)((double)fVar7 - dVar37);
        dVar32 = (double)SQRT((float)(dVar31 * dVar31 +
                                     (double)(float)(dVar41 * dVar41 +
                                                    (double)(float)(dVar39 * dVar39))));
        dVar43 = dVar31;
        dVar40 = dVar39;
        dVar34 = dVar41;
        if (((double)(DAT_00842b80 * g_FrameTime) < dVar32) &&
           (dVar43 = dVar44, dVar40 = dVar44, dVar34 = dVar44, dVar32 != dVar44)) {
          dVar34 = (double)(float)((double)(DAT_00842b80 * g_FrameTime) / dVar32);
          dVar43 = (double)(float)(dVar31 * dVar34);
          dVar40 = (double)(float)(dVar39 * dVar34);
          dVar34 = (double)(float)(dVar41 * dVar34);
        }
        (moby->pos).x = (float)(dVar30 + dVar34);
        (moby->pos).y = (float)(dVar36 + dVar40);
        (moby->pos).z = (float)(dVar37 + dVar43);
        M462_00393420(lVar15);
        iVar17 = FastDecTimerS16((int)piVar10 + 0x13a);
        if (iVar17 != 0) {
          dVar30 = (double)MB_randRangeFloat(300.0,600.0);
          uVar18 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined2 *)((int)piVar10 + 0x13a) = uVar18;
          GetBonePosition(piVar10[0x28],1,uVar14 - 0x1d0);
          uVar33 = MB_randRangeFloat(-0.5235988,-0.2617994);
          uVar35 = MB_randRot();
          fVar4 = g_FrameTime;
          fVar3 = DAT_00842b80 * 2.0;
          dVar37 = (double)SQRT((float)(dVar43 * dVar43 +
                                       (double)(float)(dVar34 * dVar34 +
                                                      (double)(float)(dVar40 * dVar40))));
          *(float *)((int)puVar12 + 0xac) = (float)dVar38;
          dVar36 = (double)(float)((double)(fVar3 * fVar4) / dVar37);
          dVar30 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar30 = (double)(float)(dVar34 * dVar36);
          }
          dVar38 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar38 = (double)(float)(dVar40 * dVar36);
          }
          dVar32 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar32 = (double)(float)(dVar43 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar30 = (double)(float)(dVar34 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar38 = (double)(float)(dVar40 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar32 = (double)(float)(dVar43 * dVar36);
          }
          *(float *)(puVar12 + 0x14) = (float)dVar30;
          *(float *)((int)puVar12 + 0xa4) = (float)dVar38;
          *(float *)(puVar12 + 0x15) = (float)dVar32;
          iVar17 = FUN_00375430(uVar33,uVar35,uVar14 - 0x1d0,0);
          if (iVar17 != 0) {
            uVar8 = *(undefined4 *)(piVar10[0x28] + 0x48);
            *(undefined4 *)(iVar17 + 0x44) = 0;
            *(undefined4 *)(iVar17 + 0x48) = uVar8;
            *(undefined1 *)(iVar17 + 0x20) = 5;
          }
        }
      }
      else if (uVar1 == '\x01') {
        piVar11 = (int *)piVar10[4];
        iVar17 = *piVar11;
        iVar22 = *piVar10 + iVar17 + (int)*(char *)(piVar10 + 1);
        iVar22 = iVar22 - (iVar22 / iVar17) * iVar17;
        iVar17 = piVar10[0x4c];
        fVar3 = (float)piVar11[iVar22 * 4 + 4] - (moby->pos).x;
        fVar4 = (float)piVar11[iVar22 * 4 + 5] - (moby->pos).y;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)((int)puVar12 + 0xec) = fVar3;
        *(float *)(puVar12 + 0x1e) = fVar4;
        pMVar26 = g_MobyInstance + iVar17;
        *(float *)((int)puVar12 + 0xf4) = fVar5 - fVar9;
        dVar30 = 0.0;
        uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1d) & 4;
        uVar20 = uVar23 << 2 | 0x735900;
        fVar3 = ABS(*(float *)((int)puVar12 + 0xec));
        if (*(float *)((int)puVar12 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar4 = *(float *)((int)uVar20 + 4);
        fVar6 = ABS(*(float *)(puVar12 + 0x1e));
        if (*(float *)((int)puVar12 + 0xf4) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        dVar36 = dVar30;
        if (0.0 < fVar3) {
          lVar19 = uVar14 - 0x250;
          lVar24 = uVar14 - 0xbc;
          lVar28 = uVar14 - 0xac;
          lVar29 = 2;
          fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x36) = fVar3;
          *(float *)(puVar12 + 0x35) = fVar3;
          *(float *)((int)puVar12 + 0x1ac) = fVar3;
          *(float *)((int)puVar12 + 0x1a4) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar5;
          *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar3;
          *(float *)(puVar12 + 0x36) = *(float *)(puVar12 + 0x36) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x1a4) = *(float *)((int)lVar19 + 0x194) * fVar3 * fVar3;
            iVar17 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0xbc;
          uVar20 = ZEXT48(&DAT_007358e0);
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            pfVar21 = (float *)uVar20;
            fVar3 = pfVar21[1];
            uVar20 = uVar20 + 8;
            *(float *)((int)lVar19 + 0x1a4) = *(float *)((int)lVar19 + 0x1a4) * *pfVar21;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar24 = 2;
          lVar19 = lVar16;
          do {
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar27 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x1a4)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar9 + fVar4);
        }
        OrganicDeltAngSpeed
                  (dVar36,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar15,uVar20,
                   piVar10 + 0x4d);
        M462_00393068(lVar15);
        M462_00393420(lVar15);
        dVar37 = (double)(moby->pos).y;
        iVar17 = piVar10[4] + iVar22 * 0x10;
        dVar36 = (double)(moby->pos).x;
        fVar5 = *(float *)(iVar17 + 0x14);
        fVar6 = *(float *)(iVar17 + 0x10);
        fVar3 = (float)(dVar37 - (double)fVar5);
        fVar4 = (float)(dVar36 - (double)fVar6);
        dVar38 = (double)(moby->pos).z;
        fVar7 = *(float *)(iVar17 + 0x18);
        fVar9 = (float)(dVar38 - (double)fVar7);
        dVar43 = (double)*(float *)(iVar17 + 0x1c);
        if (SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
          *piVar10 = iVar22;
          dVar36 = (double)(moby->pos).x;
          dVar37 = (double)(moby->pos).y;
          dVar38 = (double)(moby->pos).z;
        }
        dVar41 = (double)(float)((double)fVar5 - dVar37);
        dVar42 = (double)(float)((double)fVar6 - dVar36);
        dVar39 = (double)(float)((double)fVar7 - dVar38);
        dVar31 = (double)SQRT((float)(dVar39 * dVar39 +
                                     (double)(float)(dVar42 * dVar42 +
                                                    (double)(float)(dVar41 * dVar41))));
        dVar40 = dVar39;
        dVar34 = dVar41;
        dVar32 = dVar42;
        if (((double)(DAT_00842b80 * g_FrameTime) < dVar31) &&
           (dVar40 = dVar30, dVar34 = dVar30, dVar32 = dVar30, dVar31 != dVar30)) {
          dVar32 = (double)(float)((double)(DAT_00842b80 * g_FrameTime) / dVar31);
          dVar40 = (double)(float)(dVar39 * dVar32);
          dVar34 = (double)(float)(dVar41 * dVar32);
          dVar32 = (double)(float)(dVar42 * dVar32);
        }
        cVar2 = moby->setByGroup;
        (moby->pos).x = (float)(dVar36 + dVar32);
        (moby->pos).y = (float)(dVar37 + dVar34);
        (moby->pos).z = (float)(dVar38 + dVar40);
        if (cVar2 != '\0') {
          moby->setByGroup = '\0';
          GetBonePosition(piVar10[0x28],1,uVar14 - 0x1f0);
          uVar33 = MB_randRangeFloat(0.17453292,0.5235988);
          fVar3 = (pMVar26->pos).x - (moby->pos).x;
          fVar4 = (pMVar26->pos).y - (moby->pos).y;
          dVar38 = ABS((double)fVar3);
          dVar37 = ABS((double)fVar4);
          *(float *)(puVar12 + 0x1c) = fVar3;
          *(float *)((int)puVar12 + 0xe4) = fVar4;
          *(float *)(puVar12 + 0x1d) = (float)(dVar38 - dVar37);
          uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar12 + 0x1c));
          if ((double)*(float *)(puVar12 + 0x1d) - dVar30 < 0.0) {
            dVar36 = dVar37;
          }
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar37 = ABS((double)*(float *)((int)puVar12 + 0xe4));
          if ((double)*(float *)(puVar12 + 0x1d) - dVar30 < 0.0) {
            dVar37 = dVar38;
          }
          dVar38 = dVar30;
          if (dVar30 < dVar36) {
            lVar15 = uVar14 - 0x250;
            lVar19 = uVar14 - 0xdc;
            lVar24 = uVar14 - 0xcc;
            lVar28 = 2;
            fVar9 = (float)(dVar37 - dVar36) / (float)(dVar37 + dVar36);
            fVar5 = fVar9 * fVar9;
            *(float *)(puVar12 + 0x32) = fVar9;
            *(float *)(puVar12 + 0x31) = fVar9;
            *(float *)((int)puVar12 + 0x18c) = fVar9;
            *(float *)((int)puVar12 + 0x184) = fVar9;
            fVar9 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar5;
            *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar9;
            *(float *)(puVar12 + 0x32) = *(float *)(puVar12 + 0x32) * fVar9 * fVar5;
            do {
              *(float *)((int)lVar15 + 0x184) = *(float *)((int)lVar15 + 0x174) * fVar9 * fVar9;
              iVar17 = (int)lVar19;
              lVar15 = lVar15 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar9 * fVar9;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar24 = uVar14 - 0xdc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar19 = lVar24;
            do {
              fVar9 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar15 + 0x184) = *(float *)((int)lVar15 + 0x184) * fVar9;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
              lVar19 = lVar19 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar15 = 2;
            dVar36 = dVar30;
            do {
              iVar17 = (int)lVar16;
              lVar16 = lVar16 + 0x10;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x184)) +
                                *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                               *(float *)(iVar22 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar38 = (double)((float)(dVar36 + dVar44) * fVar4 + fVar3);
          }
          dVar36 = (double)FastWrapRot((float)dVar38,3.1415927);
          dVar44 = (double)MB_randRangeFloat(-0.2617994,(float)dVar44);
          dVar44 = (double)FastWrapRot((float)dVar36,(float)dVar44);
          fVar4 = DAT_00842b80;
          fVar3 = g_FrameTime;
          if ((((dVar44 <= dVar30) || (dVar36 = 0.3400000035762787, 0.3400000035762787 <= dVar44))
              && (dVar36 = dVar44, dVar44 <= dVar30)) && (-0.3400000035762787 < dVar44)) {
            dVar36 = -0.3400000035762787;
          }
          *(float *)((int)puVar12 + 0x8c) = (float)dVar43;
          dVar38 = (double)SQRT((float)(dVar40 * dVar40 +
                                       (double)(float)(dVar32 * dVar32 +
                                                      (double)(float)(dVar34 * dVar34))));
          dVar37 = (double)(float)((double)(fVar4 * 2.0 * fVar3) / dVar38);
          dVar44 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar44 = (double)(float)(dVar32 * dVar37);
          }
          dVar43 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar43 = (double)(float)(dVar34 * dVar37);
          }
          dVar31 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar31 = (double)(float)(dVar40 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar44 = (double)(float)(dVar32 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar43 = (double)(float)(dVar34 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar31 = (double)(float)(dVar40 * dVar37);
          }
          *(float *)(puVar12 + 0x10) = (float)dVar44;
          *(float *)((int)puVar12 + 0x84) = (float)dVar43;
          *(float *)(puVar12 + 0x11) = (float)dVar31;
          iVar17 = FUN_00375430(uVar33,dVar36,uVar14 - 0x1f0,pMVar26);
          iVar22 = 0;
          *(float *)(iVar17 + 0x2c) = *(float *)(*(int *)(iVar17 + 0x24) + 0x24) * 0.2;
          pvVar25 = pMVar26->pVar;
          do {
            if (*(int *)((int)pvVar25 + 0x60) == 0) {
              *(int *)((int)pMVar26->pVar + iVar22 * 4 + 0x60) = iVar17;
              return;
            }
            iVar22 = iVar22 + 1;
            pvVar25 = (void *)((int)pvVar25 + 4);
          } while (iVar22 < 8);
        }
      }
      else if (uVar1 == '\0') {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          DeleteMoby(moby);
        }
        else {
          piVar10[4] = (int)Splines[piVar10[5]];
          piVar10[0x10] = (int)Splines[piVar10[0x11]];
          dVar30 = (double)MB_randRangeFloat(300.0,600.0);
          uVar18 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined2 *)((int)piVar10 + 0x13a) = uVar18;
          iVar17 = piVar10[0x10];
          moby->modeBits = moby->modeBits | CAN_BE_DAMAGED;
          (moby->pos).x = *(f32 *)(iVar17 + 0x10);
          (moby->pos).y = *(f32 *)(iVar17 + 0x14);
          (moby->pos).z = *(f32 *)(iVar17 + 0x18);
          (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
          M462_00392ee8(lVar15);
          fVar3 = (moby->pos).x;
          fVar4 = (moby->pos).y;
          moby->state = '\x02';
          fVar3 = *(float *)(piVar10[0x10] + 0x20) - fVar3;
          fVar4 = *(float *)(piVar10[0x10] + 0x24) - fVar4;
          fVar5 = ABS(fVar3);
          fVar9 = ABS(fVar4);
          *(float *)(puVar12 + 0x1f) = fVar3;
          *(float *)((int)puVar12 + 0xfc) = fVar4;
          *(float *)(puVar12 + 0x20) = fVar5 - fVar9;
          dVar30 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar12 + 0x1f));
          if (*(float *)(puVar12 + 0x20) - 0.0 < 0.0) {
            fVar3 = fVar9;
          }
          fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar6 = ABS(*(float *)((int)puVar12 + 0xfc));
          if (*(float *)(puVar12 + 0x20) - 0.0 < 0.0) {
            fVar6 = fVar5;
          }
          if (0.0 < fVar3) {
            lVar15 = uVar14 - 0x250;
            lVar24 = uVar14 - 0x8c;
            lVar19 = uVar14 - 0x9c;
            lVar28 = 2;
            fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x3a) = fVar3;
            *(float *)(puVar12 + 0x39) = fVar3;
            *(float *)((int)puVar12 + 0x1cc) = fVar3;
            *(float *)((int)puVar12 + 0x1c4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x39) = *(float *)(puVar12 + 0x39) * fVar5;
            *(float *)((int)puVar12 + 0x1cc) = *(float *)((int)puVar12 + 0x1cc) * fVar3;
            *(float *)(puVar12 + 0x3a) = *(float *)(puVar12 + 0x3a) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar15 + 0x1c4) = *(float *)((int)lVar15 + 0x1b4) * fVar3 * fVar3;
              iVar17 = (int)lVar19;
              lVar19 = lVar19 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar24 = uVar14 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar19 = lVar24;
            do {
              fVar3 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar15 + 0x1c4) = *(float *)((int)lVar15 + 0x1c4) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
              lVar19 = lVar19 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar15 = 2;
            do {
              iVar17 = (int)lVar16;
              iVar22 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0x1c4)) +
                                *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                               *(float *)(iVar22 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar30 = (double)((float)(dVar30 + dVar44) * fVar9 + fVar4);
          }
          (moby->rotation).z = (float)dVar30;
        }
      }
    }
  }
  return;
}



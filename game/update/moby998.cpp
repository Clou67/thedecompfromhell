// game/update/moby998.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 22 functions, 0x4cf144-0x4d27a4
#include "game/update/moby998.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04cf144 (0x14 bytes)
void M998_004cf144(void)

{
  DAT_008f914c = 0x10000;
  return;
}


// 0x04cf158 (0x148 bytes)
void M998_004cf158(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  Spline *pSVar22;
  float *pfVar23;
  longlong lVar24;
  
  iVar20 = *(int *)(param_1 + 0x78);
  iVar21 = *(int *)(iVar20 + 0xdc);
  if (iVar21 != -1) {
    pSVar22 = Splines[iVar21];
    if (pSVar22->cnt == 7) {
      pfVar23 = (float *)&DAT_008f9190;
      fVar1 = *(float *)(param_1 + 0xc0);
      fVar2 = *(float *)(param_1 + 0xd0);
      lVar24 = 7;
      fVar3 = *(float *)(param_1 + 0xe0);
      fVar4 = *(float *)(param_1 + 0xc4);
      fVar5 = *(float *)(param_1 + 0xd4);
      fVar6 = *(float *)(param_1 + 0xe4);
      fVar7 = *(float *)(param_1 + 200);
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar10 = *(float *)(param_1 + 0xcc);
      fVar11 = *(float *)(param_1 + 0xdc);
      fVar12 = *(float *)(param_1 + 0xec);
      fVar13 = *(float *)(param_1 + 0x10);
      fVar14 = *(float *)(param_1 + 0x14);
      fVar15 = *(float *)(param_1 + 0x18);
      do {
        fVar16 = pfVar23[1];
        fVar17 = *pfVar23;
        fVar18 = pfVar23[2];
        fVar19 = pfVar23[3];
        pfVar23 = pfVar23 + 4;
        pSVar22->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
        pSVar22->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
        pSVar22->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
        pSVar22->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
        pSVar22 = (Spline *)pSVar22->points;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      DAT_0096bfba = (undefined2)*(undefined4 *)(iVar20 + 0xdc);
    }
  }
  return;
}


// 0x04cf2d8 (0x2b8 bytes)
void M998_004cf2d8(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x7c);
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 200),g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 200) = (float)dVar3;
  dVar13 = 3.141592502593994;
  dVar12 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar10 = 0.008333025500178337;
  dVar9 = -0.0001980741071747616;
  dVar8 = 2.601886990305502e-06;
  dVar5 = (double)(float)(3.141592502593994 - dVar3);
  if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(-3.141592502593994 - dVar3);
  if ((double)(float)(-3.141592502593994 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar6 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar3 = (double)(float)(dVar5 * dVar6);
  *(float *)(param_1 + 0x18) =
       ((float)(dVar5 * dVar3) * 2.601887e-06 +
       (float)(dVar3 * -0.0001980741071747616 +
              (double)(float)(dVar6 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204 +
                                            dVar4)))) * 0.25 + *(float *)(param_1 + 0x18);
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xcc),g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xcc) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar7 = 0.0872664600610733;
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar3 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar6 = (double)(float)(dVar5 * dVar3);
  dVar5 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x44),
                             (float)((double)(float)(dVar5 * dVar6) * dVar8 +
                                    (double)(float)(dVar6 * dVar9 +
                                                   (double)(float)(dVar3 * dVar10 +
                                                                  (double)(float)((double)(float)(
                                                  dVar5 * dVar4) * dVar11 + dVar4)))) * 0.08726646);
  *(float *)(param_1 + 0x44) = (float)dVar5;
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xd0),g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xd0) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar13 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar13 = dVar5;
  }
  dVar5 = (double)(float)(dVar13 * dVar13);
  dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar13));
  dVar3 = (double)(float)(dVar5 * dVar12);
  dVar5 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x40),
                             (float)((double)(float)((double)(float)(dVar5 * dVar3) * dVar8 +
                                                    (double)(float)(dVar3 * dVar9 +
                                                                   (double)(float)(dVar12 * dVar10 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar5 * dVar13) * dVar11 + dVar13))
                                                  )) * dVar7));
  *(float *)(param_1 + 0x40) = (float)dVar5;
  uVar1 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x44)) - uVar1;
  if (dVar5 <= 0.1745329201221466) {
    if (dVar5 < -0.1745329201221466) {
      *(undefined4 *)(param_1 + 0x40) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3e32b8c2;
  }
  if (iVar2 < 0x3e32b8c3) {
    if (iVar2 < -0x3e32b8c2) {
      *(undefined4 *)(param_1 + 0x44) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3e32b8c2;
  }
  return;
}


// 0x04cf598 (0x1ec bytes)
void M998_004cf598(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  pCVar7 = Cuboids;
  iVar1 = *(int *)(param_1 + 0x78);
  iVar8 = -1;
  iVar11 = 0;
  *(undefined2 *)(iVar1 + 0xb4) = 0xffff;
  iVar10 = iVar1;
  do {
    iVar2 = *(int *)(iVar10 + 0x80);
    fVar4 = *(float *)(param_1 + 0x14) - pCVar7[iVar2].pos.y;
    fVar5 = *(float *)(param_1 + 0x10) - pCVar7[iVar2].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar2].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 1.0) {
      *(short *)(iVar1 + 0xb4) = (short)iVar11;
      iVar8 = iVar11;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar11 < 5);
  sVar9 = (short)iVar8;
  if (-1 < sVar9) {
    if (sVar9 < 3) {
      if (1 < sVar9) {
        if ((g_LevelFlags[Level][*(int *)(iVar1 + 0xb8)] == -1) ||
           (g_LevelFlags[Level][*(int *)(iVar1 + 0xbc)] == -1)) {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
          *(undefined1 *)(param_1 + 0x31) = 1;
          *(undefined4 *)(param_1 + 0x94) = uVar3;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined1 *)(param_1 + 0x31) = 0;
          *(undefined1 *)(param_1 + 0x20) = 6;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
        }
        goto LAB_004cf708;
      }
    }
    else if (4 < sVar9) goto LAB_004cf708;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
LAB_004cf708:
  pCVar7 = Cuboids;
  iVar8 = *(int *)(iVar1 + (int)((longlong)*(short *)(iVar1 + 0xb4) << 2) + 0x80);
  *(float *)(iVar1 + 0x60) = Cuboids[iVar8].pos.x;
  *(float *)(iVar1 + 100) = pCVar7[iVar8].pos.y;
  *(float *)(iVar1 + 0x68) = pCVar7[iVar8].pos.z;
  *(float *)(iVar1 + 0x6c) = pCVar7[iVar8].pos.w;
  *(float *)(iVar1 + 0x70) = pCVar7[iVar8].rot.x;
  *(float *)(iVar1 + 0x74) = pCVar7[iVar8].rot.y;
  *(float *)(iVar1 + 0x78) = pCVar7[iVar8].rot.z;
  *(float *)(iVar1 + 0x7c) = pCVar7[iVar8].rot.w;
  return;
}


// 0x04cf784 (0x74 bytes)
MobyInstance * M998_004cf784(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if (*(short *)((int)g_MobyInstance[*puVar2 & 0x7fff].pVar + 0xb4) == param_2) {
        return g_MobyInstance + (*puVar2 & 0x7fff);
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}


// 0x04cf7f8 (0x140 bytes)
void M998_004cf7f8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Cuboid *pCVar4;
  short sVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pCVar4 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar5 = *(short *)(iVar2 + 0xb6);
  puVar6 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if (*(short *)((int)pMVar7->pVar + 0xb4) == sVar5) {
        if (pMVar7 != (MobyInstance *)0x0) {
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->pos).x = Cuboids[iVar3].pos.x;
          (pMVar7->pos).y = pCVar4[iVar3].pos.y;
          (pMVar7->pos).z = pCVar4[iVar3].pos.z;
          (pMVar7->pos).w = pCVar4[iVar3].pos.w;
          pCVar4 = Cuboids;
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->rotation).x = Cuboids[iVar3].rot.x;
          (pMVar7->rotation).y = pCVar4[iVar3].rot.y;
          (pMVar7->rotation).z = pCVar4[iVar3].rot.z;
          (pMVar7->rotation).w = pCVar4[iVar3].rot.w;
          M998_004cf598(pMVar7);
          sVar5 = *(short *)(iVar2 + 0xb6);
        }
        break;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  *(short *)(iVar2 + 0xb4) = sVar5;
  return;
}


// 0x04cf940 (0xc4 bytes)
bool M998_004cf940(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  OrganicDelt
            (1.0,*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd4),
             (float *)(iVar1 + 0xc0),0x4cf938,(float *)(iVar1 + 0xc4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xac) + -1);
  MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xc0) * (float)lVar3),*(int **)(iVar1 + 0xac),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xc0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xc0)) - uVar2);
}


// 0x04cfa04 (0xc4 bytes)
void M998_004cfa04(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb6);
  if (sVar1 == 4) {
    MB_ShowPersistentMessage(8,0x1399);
  }
  else if (sVar1 == 3) {
    MB_ShowPersistentMessage(8,0x139c);
  }
  else if (sVar1 == 2) {
    MB_ShowPersistentMessage(8,0x139a);
  }
  else if (sVar1 == 1) {
    MB_ShowPersistentMessage(8,0x1398);
  }
  else if (sVar1 == 0) {
    MB_ShowPersistentMessage(8,0x13a5);
  }
  else {
    MB_ShowPersistentMessage(8,0x139b);
  }
  return;
}


// 0x04cfad8 (0x1d8 bytes)
void M998_004cfad8(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Spline *pSVar6;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xb4);
  if (sVar1 == 4) {
    *(undefined2 *)(iVar2 + 0xb6) = 2;
    pSVar6 = Splines[*(int *)(iVar2 + 0xa8)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else if (sVar1 == 3) {
    *(undefined2 *)(iVar2 + 0xb6) = 2;
    pSVar6 = Splines[*(int *)(iVar2 + 0xa0)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else if (sVar1 == 2) {
    if (g_LevelFlags[Level][*(int *)(iVar2 + 0xb8)] == -1) {
      *(undefined2 *)(iVar2 + 0xb6) = 4;
      pSVar6 = Splines[*(int *)(iVar2 + 0xa4)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
    else {
      *(undefined2 *)(iVar2 + 0xb6) = 3;
      pSVar6 = Splines[*(int *)(iVar2 + 0x9c)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
  }
  else if (sVar1 == 1) {
    *(undefined2 *)(iVar2 + 0xb6) = 0;
    pSVar6 = Splines[*(int *)(iVar2 + 0x98)];
    *(Spline **)(iVar2 + 0xac) = pSVar6;
  }
  else {
    pSVar6 = *(Spline **)(iVar2 + 0xac);
    if (sVar1 == 0) {
      *(undefined2 *)(iVar2 + 0xb6) = 1;
      pSVar6 = Splines[*(int *)(iVar2 + 0x94)];
      *(Spline **)(iVar2 + 0xac) = pSVar6;
    }
  }
  fVar3 = pSVar6->points[0].y - pSVar6->points[1].y;
  fVar4 = pSVar6->points[0].x - pSVar6->points[1].x;
  fVar5 = pSVar6->points[0].z - pSVar6->points[1].z;
  fVar3 = 1.0 / (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float)(longlong)pSVar6->cnt)
  ;
  *(float *)(iVar2 + 0xd4) = g_FrameTime * 20.0 * fVar3;
  fVar4 = g_FrameTimeSq;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(float *)(iVar2 + 0xd8) = fVar4 * 5.0 * fVar3;
  return;
}


// 0x04cfcc8 (0x7e4 bytes)
/* Moby 998 */

void UpdateMoby_998(MobyInstance *moby)

{
  u8 uVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  Cuboid *pCVar14;
  int iVar15;
  MobyInstance *pMVar16;
  ushort *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  Vec4 local_110;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pvVar4 = moby->pVar;
  dVar25 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar27 = (double)(moby->pos).z;
  FUN_004d407c(lVar13,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if ((g_LevelFlags[Level][*(int *)((int)pvVar4 + 0xb8)] == -1) ||
       (g_LevelFlags[Level][*(int *)((int)pvVar4 + 0xbc)] == -1)) {
      puVar6 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar6;
      moby->enabled = '\x01';
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xc0),0x4cfcb0,(float *)((int)pvVar4 + 0xc4));
    local_80 = (longlong)**(int **)((int)pvVar4 + 0xac);
    pCVar14 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xb6) << 2) + 0x80);
    dVar24 = (double)(pCVar14->pos).x;
    dVar23 = (double)(pCVar14->pos).y;
    dVar22 = (double)(pCVar14->pos).z;
    dVar21 = (double)(pCVar14->pos).w;
    dVar20 = (double)(pCVar14->rot).y;
    dVar19 = (double)(pCVar14->rot).z;
    MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar4 + 0xac),pCVar14,0,uVar12 - 0xe0,uVar12 - 0xd0,
               0);
    dVar18 = (double)*(float *)((int)pvVar4 + 0xc0);
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar18 * (double)(float)(dVar24 - (double)local_e0) + (double)local_e0);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar18 * (double)(float)(dVar23 - (double)local_dc) + (double)local_dc);
    *(float *)((int)pvVar4 + 0x6c) = (float)dVar21;
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar18 * (double)(float)(dVar22 - (double)local_d8) + (double)local_d8);
    dVar18 = (double)FastDiffRots(dVar20,(double)local_cc);
    dVar18 = (double)FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),local_cc);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar18;
    dVar18 = (double)FastDiffRots(dVar19,(double)local_c8);
    dVar18 = (double)FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),local_c8);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar18;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x01';
      M998_004cf7f8(lVar13);
    }
  }
  else if (uVar1 == '\x04') {
    pvVar5 = moby->pVar;
    OrganicDelt
              (1.0,*(float *)((int)pvVar5 + 0xd8),*(float *)((int)pvVar5 + 0xd8),
               *(float *)((int)pvVar5 + 0xd4),(float *)((int)pvVar5 + 0xc0),(int)moby->pClass,
               (float *)((int)pvVar5 + 0xc4));
    local_80 = (longlong)(**(int **)((int)pvVar5 + 0xac) + -1);
    MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar5 + 0xc0) * (float)local_80),
               *(int **)((int)pvVar5 + 0xac),local_80,0,(int)pvVar5 + 0x60,(int)pvVar5 + 0x70,0);
    uVar7 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xc0),0x720000,(float *)((int)pvVar4 + 0xc4));
    pCVar14 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xb4) << 2) + 0x80);
    dVar23 = (double)(pCVar14->pos).x;
    dVar22 = (double)(pCVar14->pos).y;
    dVar21 = (double)(pCVar14->pos).z;
    dVar20 = (double)(pCVar14->rot).y;
    dVar19 = (double)(pCVar14->rot).z;
    MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar4 + 0xac),pCVar14,0,uVar12 - 0x100,uVar12 - 0xf0,0);
    dVar18 = (double)*(float *)((int)pvVar4 + 0xc0);
    *(undefined4 *)((int)pvVar4 + 0x6c) = local_f4;
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar18 * (double)(float)((double)local_100 - dVar23) + dVar23);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar18 * (double)(float)((double)local_fc - dVar22) + dVar22);
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar18 * (double)(float)((double)local_f8 - dVar21) + dVar21);
    dVar18 = (double)FastDiffRots((double)local_ec,dVar20);
    dVar18 = (double)FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),
                                (float)dVar20);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar18;
    dVar18 = (double)FastDiffRots((double)local_e8,dVar19);
    dVar18 = (double)FastWrapRot
                               ((float)(dVar18 * (double)*(float *)((int)pvVar4 + 0xc0)),
                                (float)dVar19);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar18;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xc0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        FastNormalizeRMtx4(uVar12 - 0xc0,lVar13 + 0xc0);
        fVar8 = g_heroPosition.y - (moby->pos).y;
        fVar9 = g_heroPosition.x - (moby->pos).x;
        fVar10 = g_heroPosition.z - (moby->pos).z;
        fVar11 = local_a0 * fVar10 + local_c0 * fVar9 + local_b0 * fVar8;
        if ((ABS(local_9c * fVar10 + local_bc * fVar9 + local_ac * fVar8) < 1.2) &&
           ((fVar11 < 1.0 && (-0.75 < fVar11)))) {
          M998_004cfad8(lVar13);
          M998_004cfa04(lVar13);
          if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) {
            moby->state = '\x03';
            puVar17 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
            if (puVar17 != (ushort *)0x0) {
              do {
                pMVar16 = g_MobyInstance + (*puVar17 & 0x7fff);
                if (*(short *)((int)pMVar16->pVar + 0xb4) == *(short *)((int)pvVar4 + 0xb6)) {
                  if (pMVar16 != (MobyInstance *)0x0) {
                    pMVar16->collision = (ushort *)0x0;
                    pMVar16->enabled = '\0';
                    pMVar16->state = '\x02';
                    pMVar16->modeBits = pMVar16->modeBits | DISABLED;
                  }
                  break;
                }
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
              } while (-1 < (short)uVar2);
            }
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar4 + 0xb0) = 0xffff;
      *(undefined2 *)((int)pvVar4 + 0xb2) = 0xffff;
      M998_004cf598(lVar13);
    }
  }
  M998_004cf2d8(lVar13);
  uVar1 = moby->state;
  if (((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) {
    DAT_00969ed2 = 2;
    DAT_00969ed4 = 2;
    M998_004cf158(lVar13);
    iVar15 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xb2));
    if (iVar15 == 0) {
      iVar15 = PlayMobySound(0,4,moby);
      *(short *)((int)pvVar4 + 0xb2) = (short)iVar15;
    }
  }
  else {
    iVar15 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xb2));
    if (iVar15 != 0) {
      sVar3 = *(short *)((int)pvVar4 + 0xb2);
      if (((sVar3 != -1) &&
          (iVar15 = (int)((longlong)sVar3 << 7) - (int)((longlong)sVar3 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar15 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar15 + 4) != '\0')) {
        sound_Kill((int)sVar3);
      }
      *(undefined2 *)((int)pvVar4 + 0xb2) = 0xffff;
    }
  }
  local_110.x = (float)((double)(moby->pos).x - dVar25);
  local_110.y = (float)((double)(moby->pos).y - dVar26);
  local_110.w = (moby->pos).w;
  local_110.z = (float)((double)(moby->pos).z - dVar27);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_110,uVar12 - 0x120,lVar13 + 0x40);
  return;
}


// 0x04d04ac (0x14 bytes)
void M998_004d04ac(void)

{
  DAT_008f924c = 0x10000;
  return;
}


// 0x04d04c0 (0x8 bytes)
undefined8 STUB_004d04c0(...)

{
  return 0;
}


// 0x04d04c8 (0x8 bytes)
undefined8 STUB_004d04c8(...)

{
  return 0;
}


// 0x04d04d0 (0x8 bytes)
undefined8 STUB_004d04d0(...)

{
  return 0;
}


// 0x04d04e0 (0x9c bytes)
void FUN_004d04e0(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FastDiffRots(param_2,param_1);
  dVar2 = ABS(dVar1);
  dVar3 = -param_3;
  if (0.0 - dVar1 < 0.0) {
    dVar3 = param_3;
  }
  if ((dVar3 <= dVar2) && (dVar1 = -dVar2, dVar2 = dVar3, dVar3 < dVar1)) {
    dVar2 = dVar1;
  }
  FastWrapRot((float)param_1,(float)dVar2);
  return;
}


// 0x04d05b8 (0x958 bytes)
// inlined: FastAtan2 @0x4d0848, FastAtan2 @0x4d0b38, FastAtan2 @0x4d0d28
ulonglong FUN_004d05b8(double param_1,undefined8 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  int iVar21;
  longlong lVar18;
  longlong lVar19;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x1b0;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
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
  dVar37 = (double)*(float *)(param_3 + 0x10);
  puVar13[0x28] = unaff_r28;
  iVar21 = 0;
  dVar36 = (double)*(float *)(param_3 + 0x14);
  fVar1 = (float)(dVar37 + (double)*param_4);
  puVar13[0x26] = unaff_r26;
  dVar35 = (double)*(float *)(param_3 + 0x18);
  puVar13[0x25] = unaff_r25;
  fVar3 = *(float *)(param_3 + 0x1c);
  puVar13[0x29] = unaff_r29;
  puVar13[0x2b] = unaff_r31;
  uVar26 = 0;
  puVar13[0x2a] = unaff_r30;
  *(float *)(param_3 + 0x10) = fVar1;
  fVar2 = (float)(dVar36 + (double)param_4[1]);
  *(float *)(param_3 + 0x14) = fVar2;
  fVar4 = param_4[2];
  puVar13[0x27] = unaff_r27;
  fVar4 = (float)(dVar35 + (double)fVar4);
  *(float *)(param_3 + 0x18) = fVar4;
  do {
    *(float *)(puVar13 + 0xe) = fVar1;
    *(float *)((int)puVar13 + 0x74) = fVar2;
    *(float *)((int)puVar13 + 0x7c) = fVar3;
    *(float *)(puVar13 + 0xf) = (float)((double)fVar4 + param_1);
    iVar20 = CollSphere(param_2,uVar17 - 0x140);
    fVar1 = g_CollOutput.push.x;
    if (iVar20 == 0) break;
    iVar21 = iVar21 + 1;
    *(float *)(param_3 + 0x10) = g_CollOutput.push.x;
    fVar2 = g_CollOutput.push.y;
    uVar26 = 1;
    *(float *)(param_3 + 0x14) = g_CollOutput.push.y;
    fVar3 = g_CollOutput.push.w;
    fVar4 = (float)((double)g_CollOutput.push.z - param_1);
    *(float *)(param_3 + 0x1c) = g_CollOutput.push.w;
    *(float *)(param_3 + 0x18) = fVar4;
  } while (iVar21 < 6);
  uVar5 = *(undefined4 *)(param_3 + 0x10);
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(puVar13 + 0x10) = uVar5;
  uVar7 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((int)puVar13 + 0x84) = uVar6;
  *(undefined4 *)((int)puVar13 + 0x8c) = uVar7;
  *(undefined4 *)(puVar13 + 0x12) = uVar5;
  *(undefined4 *)((int)puVar13 + 0x94) = uVar6;
  *(undefined4 *)((int)puVar13 + 0x9c) = uVar7;
  uVar11 = *(uint *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 0x18);
  uVar12 = (int)uVar11 >> 0x1f;
  *(undefined4 *)(puVar13 + 0x13) = 0x3c23d70a;
  *(float *)(puVar13 + 0x11) = (float)(param_1 + 1.0) + fVar1;
  iVar21 = CollLine(uVar17 - 0x130,uVar17 - 0x120,2,param_3,0);
  fVar3 = g_CollOutput.normal.z;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar4 = param_4[2];
  uVar27 = uVar26;
  if (((iVar21 != 0) && (0 < g_CollOutput.poly)) &&
     ((int)((uVar12 >> 1 ^ uVar11) - uVar12) <
      (int)(((uint)((int)g_CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)g_CollOutput.ip.z) -
           ((int)g_CollOutput.ip.z >> 0x1f)))) {
    fVar8 = ABS(g_CollOutput.normal.z);
    uVar27 = uVar26 | 2;
    fVar9 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar10 = ABS(fVar9);
    *(float *)((int)puVar13 + 0xb4) = fVar9;
    *(float *)(puVar13 + 0x17) = fVar8 - fVar10;
    dVar34 = 0.0;
    dVar41 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar9 = fVar8;
    if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    fVar10 = ABS(*(float *)((int)puVar13 + 0xb4));
    if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (0.0 < fVar9) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xb4;
      lVar25 = uVar17 - 0xa4;
      lVar28 = 2;
      fVar9 = (fVar10 - fVar9) / (fVar10 + fVar9);
      fVar10 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x21) = fVar9;
      *(float *)(puVar13 + 0x20) = fVar9;
      *(float *)((int)puVar13 + 0x104) = fVar9;
      *(float *)((int)puVar13 + 0xfc) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar10;
      *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar9;
      *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xec) * fVar9 * fVar9;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar9 * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xb4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar9 = *pfVar23;
        fVar10 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xfc) * fVar9;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar10;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar21 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar21 + 0xfc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar8);
    }
    if (dVar40 <= 0.5) {
      if (0.20000000298023224 < dVar40) {
        *param_4 = fVar1 * 0.8;
        param_4[1] = fVar2 * 0.8;
        param_4[2] = fVar4 * 0.8;
      }
    }
    else {
      uVar27 = uVar26 | 6;
      *param_4 = fVar1 * 0.2;
      param_4[1] = fVar2 * 0.2;
      param_4[2] = fVar4 * 0.2;
    }
    fVar9 = g_CollOutput.normal.z;
    fVar3 = g_CollOutput.ip.z;
    fVar1 = *(float *)(param_3 + 0x48);
    fVar2 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar8 = fVar4;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar1 = fVar10;
    }
    fVar2 = fVar8 * fVar8;
    dVar40 = (double)g_CollOutput.normal.z;
    fVar4 = fVar1 * fVar1;
    fVar15 = fVar2 * fVar2 * fVar8;
    fVar10 = fVar4 * fVar4 * fVar1;
    fVar16 = fVar2 * fVar15;
    fVar14 = fVar4 * fVar10;
    fVar2 = fVar2 * fVar16 * 2.601887e-06 +
            fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
    fVar1 = fVar4 * fVar14 * 2.601887e-06 +
            fVar14 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1;
    dVar39 = (double)(g_CollOutput.normal.x * fVar1 + g_CollOutput.normal.y * fVar2);
    fVar2 = g_CollOutput.normal.y * fVar1 - g_CollOutput.normal.x * fVar2;
    fVar4 = ABS(fVar2);
    fVar1 = SQRT((float)(dVar39 * dVar39 + (double)(float)(dVar40 * dVar40)));
    *(float *)((int)puVar13 + 0xac) = fVar2;
    dVar38 = (double)*(float *)(param_3 + 0x40);
    *(float *)(param_3 + 0x18) = fVar3;
    fVar2 = ABS(fVar1);
    *(float *)(puVar13 + 0x15) = fVar1;
    *(float *)(puVar13 + 0x16) = fVar2 - fVar4;
    uVar26 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar13 + 0x15));
    if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar3 = ABS(*(float *)((int)puVar13 + 0xac));
    if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar31 = dVar34;
    if (0.0 < fVar1) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xd4;
      lVar25 = uVar17 - 0xc4;
      lVar28 = 2;
      fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar13 + 0x1d) = fVar1;
      *(float *)(puVar13 + 0x1c) = fVar1;
      *(float *)((int)puVar13 + 0xe4) = fVar1;
      *(float *)((int)puVar13 + 0xdc) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar3;
      *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar1;
      *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar18 + 0xdc) = *(float *)((int)lVar18 + 0xcc) * fVar1 * fVar1;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar1 * fVar1;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xd4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar1 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xdc) = *(float *)((int)lVar18 + 0xdc) * fVar1;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar21 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0xdc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
    }
    dVar29 = (double)FastDiffRots(-dVar31,dVar38);
    dVar31 = ABS(dVar29);
    dVar33 = 0.01745329238474369;
    dVar32 = -0.01745329238474369;
    dVar30 = dVar32;
    if (dVar34 - dVar29 < 0.0) {
      dVar30 = dVar33;
    }
    if ((dVar30 <= dVar31) && (dVar29 = -dVar31, dVar31 = dVar30, dVar30 < dVar29)) {
      dVar31 = dVar29;
    }
    dVar38 = (double)FastWrapRot((float)dVar38,(float)dVar31);
    dVar40 = ABS(dVar40);
    *(float *)(puVar13 + 0x14) = (float)dVar39;
    *(float *)(param_3 + 0x40) = (float)dVar38;
    dVar31 = (double)*(float *)(param_3 + 0x44);
    *(float *)((int)puVar13 + 0xa4) = (float)(dVar40 - ABS(dVar39));
    uVar26 = (ulonglong)((uint)fVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
    dVar38 = dVar40;
    if ((double)*(float *)((int)puVar13 + 0xa4) - dVar34 < 0.0) {
      dVar38 = ABS(dVar39);
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar39 = ABS((double)*(float *)(puVar13 + 0x14));
    if ((double)*(float *)((int)puVar13 + 0xa4) - dVar34 < 0.0) {
      dVar39 = dVar40;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (dVar34 < dVar38) {
      lVar18 = uVar17 - 0x1a0;
      lVar22 = uVar17 - 0xf4;
      lVar25 = uVar17 - 0xe4;
      lVar28 = 2;
      fVar4 = (float)(dVar39 - dVar38) / (float)(dVar39 + dVar38);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar13 + 0x19) = fVar4;
      *(float *)(puVar13 + 0x18) = fVar4;
      *(float *)((int)puVar13 + 0xc4) = fVar4;
      *(float *)((int)puVar13 + 0xbc) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar3;
      *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar4;
      *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar18 + 0xbc) = *(float *)((int)lVar18 + 0xac) * fVar4 * fVar4;
        iVar21 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar17 - 0xf4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar4 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xbc) = *(float *)((int)lVar18 + 0xbc) * fVar4;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar18 = 2;
      do {
        iVar21 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar21 + 0xbc)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar40 = (double)((float)(dVar40 + dVar41) * fVar1 + fVar2);
    }
    dVar40 = (double)FastDiffRots(dVar40,dVar31);
    dVar41 = ABS(dVar40);
    if (dVar34 - dVar40 < 0.0) {
      dVar32 = dVar33;
    }
    if ((dVar32 <= dVar41) && (dVar34 = -dVar41, dVar41 = dVar32, dVar32 < dVar34)) {
      dVar41 = dVar34;
    }
    dVar34 = (double)FastWrapRot((float)dVar31,(float)dVar41);
    *(float *)(param_3 + 0x44) = (float)dVar34;
  }
  *param_4 = (float)((double)*(float *)(param_3 + 0x10) - dVar37);
  param_4[1] = (float)((double)*(float *)(param_3 + 0x14) - dVar36);
  param_4[2] = (float)((double)*(float *)(param_3 + 0x18) - dVar35);
  param_4[3] = *(float *)(param_3 + 0x1c);
  if ((uVar27 & 2) != 0) {
    param_4[2] = 0.0;
  }
  return uVar27;
}


// 0x04d0f18 (0x78 bytes)
ulonglong FUN_004d0f18(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar7 = 0xffffffffffffffff;
  fVar1 = 32767.0;
  if (0 < param_3) {
    do {
      pfVar4 = (float *)((int)((uVar5 & 0xffffffff) << 4) + param_2);
      fVar3 = *(float *)(param_1 + 0x14) - pfVar4[1];
      fVar2 = *(float *)(param_1 + 0x10) - *pfVar4;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar2 < fVar1) {
        uVar7 = uVar5;
        fVar1 = fVar2;
      }
      iVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)iVar6;
    } while (iVar6 < param_3);
  }
  return uVar7;
}


// 0x04d0fd0 (0x1040 bytes)
// inlined: FastAtan2 @0x4d1aa4, FastRSqrt @0x4d1bb8
void FUN_004d0fd0(float *param_1,longlong param_2,MobyInstance *param_3,float *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  MobyInstance *pMVar14;
  ulonglong *puVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  undefined2 uVar23;
  longlong lVar24;
  float *pfVar25;
  uint *puVar27;
  longlong lVar26;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint *puVar31;
  ulonglong unaff_r25;
  MobyInstance *pMVar32;
  MobyInstance *pMVar33;
  ulonglong unaff_r26;
  ulonglong uVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  double dVar45;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  double in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 400;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x34] = in_LR;
  puVar15[0x24] = in_f18;
  puVar15[0x25] = in_f19;
  puVar15[0x26] = in_f20;
  puVar15[0x27] = in_f21;
  puVar15[0x28] = in_f22;
  puVar15[0x29] = in_f23;
  puVar15[0x2a] = in_f24;
  puVar15[0x2b] = in_f25;
  puVar15[0x2c] = in_f26;
  puVar15[0x2d] = in_f27;
  puVar15[0x2e] = in_f28;
  puVar15[0x2f] = in_f29;
  puVar15[0x30] = in_f30;
  puVar15[0x31] = (ulonglong)in_f31;
  puVar15[0x1b] = unaff_r23;
  puVar15[0x22] = unaff_r30;
  puVar15[0x23] = unaff_r31;
  puVar15[0x21] = unaff_r29;
  puVar15[0x20] = unaff_r28;
  puVar15[0x1f] = unaff_r27;
  puVar15[0x1e] = unaff_r26;
  puVar15[0x1d] = unaff_r25;
  puVar15[0x1c] = unaff_r24;
  puVar15[0x1a] = unaff_r22;
  uVar34 = 0;
  dVar46 = 0.0;
  iVar22 = 0;
  pMVar32 = (MobyInstance *)0x0;
  puVar31 = (uint *)0x0;
  param_4[3] = 0.0;
  param_4[2] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  dVar44 = (double)(param_3->pos).y;
  dVar45 = (double)(param_3->pos).x;
  dVar43 = (double)(param_3->pos).z;
  dVar47 = (double)SQRT((float)(dVar43 - in_f31) * (float)(dVar43 - in_f31) +
                        (float)(dVar45 - in_f31) * (float)(dVar45 - in_f31) +
                        (float)(dVar44 - in_f31) * (float)(dVar44 - in_f31));
  dVar40 = dVar46;
  dVar41 = dVar46;
  dVar38 = dVar46;
  if (*(short *)(param_4 + 0x17) != -1) {
    fVar5 = 32767.0;
    uVar19 = 0;
    uVar34 = 0xffffffffffffffff;
    puVar31 = *(uint **)((int)Splines + (int)((longlong)*(short *)(param_4 + 0x17) << 2));
    uVar13 = *puVar31;
    puVar27 = puVar31;
    if (0 < (int)uVar13) {
      do {
        fVar2 = SQRT((float)(dVar45 - (double)(float)puVar27[4]) *
                     (float)(dVar45 - (double)(float)puVar27[4]) +
                     (float)(dVar44 - (double)(float)puVar27[5]) *
                     (float)(dVar44 - (double)(float)puVar27[5]));
        if (fVar2 < fVar5) {
          uVar34 = uVar19;
          fVar5 = fVar2;
        }
        uVar19 = uVar19 + 1;
        puVar27 = puVar27 + 4;
      } while ((int)uVar19 < (int)uVar13);
    }
    iVar22 = ClosestPointOnConvexPolyEdge
                       ((float *)(puVar15 + 0xe),&(param_3->pos).x,(float *)(puVar31 + 4),uVar13);
    if (iVar22 == 0) {
      dVar44 = (double)(param_3->pos).y;
      dVar45 = (double)(param_3->pos).x;
      fVar5 = (float)((double)*(float *)((int)puVar15 + 0x74) - dVar44);
      fVar2 = (float)((double)*(float *)(puVar15 + 0xe) - dVar45);
      dVar43 = (double)(param_3->pos).z;
      fVar3 = (float)((double)*(float *)(puVar15 + 0xf) - dVar43);
      fVar6 = -1000.0;
      dVar40 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar40 != dVar38) {
        fVar6 = -param_5[2] / (float)(dVar40 * dVar40);
      }
      dVar40 = (double)fVar6;
    }
    else {
      dVar44 = (double)(param_3->pos).y;
      dVar45 = (double)(param_3->pos).x;
      fVar5 = (float)((double)*(float *)((int)puVar15 + 0x74) - dVar44);
      dVar43 = (double)(param_3->pos).z;
      fVar2 = (float)((double)*(float *)(puVar15 + 0xe) - dVar45);
      fVar3 = (float)((double)*(float *)(puVar15 + 0xf) - dVar43);
      dVar40 = 10000.0;
      dVar41 = (double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5) + 3.0);
      if (dVar47 < dVar41) {
        dVar40 = (double)(float)((double)(float)((double)param_5[2] * dVar41) * dVar41);
      }
    }
    dVar41 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar6 = (float)(dVar40 / dVar41);
    dVar39 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar39 = (double)(fVar6 * fVar3);
    }
    dVar42 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar42 = (double)(fVar6 * fVar5);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar41 < 0.0) {
      dVar37 = (double)(fVar6 * fVar2);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar39 = (double)(fVar6 * fVar3);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar42 = (double)(fVar6 * fVar5);
    }
    if (dVar41 - dVar38 < 0.0) {
      dVar37 = (double)(fVar6 * fVar2);
    }
    dVar41 = (double)(float)((double)param_4[2] + dVar39);
    dVar40 = (double)(float)((double)param_4[1] + dVar42);
    dVar46 = (double)(float)((double)*param_4 + dVar37);
    param_4[2] = (float)((double)param_4[2] + dVar39);
    param_4[1] = (float)((double)param_4[1] + dVar42);
    *param_4 = (float)((double)*param_4 + dVar37);
  }
  uVar19 = (ulonglong)(uint)*param_5;
  if (*param_5 != 0.0) {
    fVar2 = param_4[9];
    fVar3 = param_4[8];
    fVar6 = param_4[10];
    dVar42 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar5 = (float)((double)*param_5 / dVar42);
    dVar39 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar39 = (double)(fVar6 * fVar5);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar37 = (double)(fVar2 * fVar5);
    }
    dVar36 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar36 = (double)(fVar3 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar39 = (double)(fVar6 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar37 = (double)(fVar2 * fVar5);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar36 = (double)(fVar3 * fVar5);
    }
    dVar39 = dVar41 + dVar39;
    dVar41 = (double)(float)dVar39;
    dVar37 = dVar40 + dVar37;
    dVar40 = (double)(float)dVar37;
    dVar36 = dVar46 + dVar36;
    dVar46 = (double)(float)dVar36;
    param_4[2] = (float)dVar39;
    param_4[1] = (float)dVar37;
    *param_4 = (float)dVar36;
  }
  pMVar14 = (MobyInstance *)param_4[0x14];
  pMVar33 = pMVar32;
  if (pMVar14 == param_3) {
    fVar2 = param_4[5];
    fVar3 = param_4[4];
    fVar6 = param_4[6];
    dVar39 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar5 = (float)((double)param_5[1] / dVar39);
    dVar47 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar47 = (double)(fVar5 * fVar6);
    }
    dVar42 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar42 = (double)(fVar5 * fVar2);
    }
    dVar37 = dVar38;
    if (dVar38 - dVar39 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar47 = (double)(fVar5 * fVar6);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar42 = (double)(fVar5 * fVar2);
    }
    if (dVar39 - dVar38 < 0.0) {
      dVar37 = (double)(fVar5 * fVar3);
    }
    param_4[2] = (float)(dVar41 + dVar47);
    param_4[1] = (float)(dVar40 + dVar42);
    *param_4 = (float)(dVar46 + dVar37);
  }
  else {
    if (*(short *)(param_4 + 0x17) != -1) {
      uVar13 = *puVar31;
      iVar29 = (int)(uVar34 << 4);
      uVar30 = (longlong)(int)(uVar34 + 1) - (longlong)(int)uVar13 >> 0x3f & uVar34 + 1;
      fVar5 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x14) - in_f31);
      iVar17 = (int)(uVar30 << 4);
      fVar2 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x10) - in_f31);
      fVar3 = (float)((double)*(float *)((int)puVar31 + iVar29 + 0x18) - in_f31);
      fVar6 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x14) - in_f31);
      fVar1 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x10) - in_f31);
      fVar4 = (float)((double)*(float *)((int)puVar31 + iVar17 + 0x18) - in_f31);
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar6 * fVar6);
      uVar19 = uVar34;
      if (fVar5 < fVar2) {
        uVar19 = uVar30;
        fVar5 = fVar2;
      }
      lVar20 = uVar34 - 1;
      uVar34 = lVar20 + ((longlong)(int)lVar20 >> 0x3f & ((ulonglong)uVar13 - 1) - lVar20);
      iVar29 = (int)uVar34;
      if (fVar5 < SQRT((float)((double)(float)puVar31[iVar29 * 4 + 6] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 6] - in_f31) +
                       (float)((double)(float)puVar31[iVar29 * 4 + 4] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 4] - in_f31) +
                       (float)((double)(float)puVar31[iVar29 * 4 + 5] - in_f31) *
                       (float)((double)(float)puVar31[iVar29 * 4 + 5] - in_f31))) {
        uVar19 = uVar34;
      }
      iVar28 = (int)uVar19 + -1;
      iVar29 = (int)(((longlong)(int)(uVar19 + 1) - (longlong)(int)uVar13 >> 0x3f & uVar19 + 1) << 4
                    );
      iVar28 = iVar28 + (iVar28 >> 0x1f & (int)((ulonglong)uVar13 - 1) - iVar28);
      iVar17 = (int)(uVar19 << 4);
      if (iVar22 == 0) {
        fVar2 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x14) +
                                 (float)puVar31[iVar28 * 4 + 5] +
                                *(float *)((int)puVar31 + iVar17 + 0x14)) * 0.3333333432674408 -
                       dVar44);
        fVar3 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x10) +
                                 (float)puVar31[iVar28 * 4 + 4] +
                                *(float *)((int)puVar31 + iVar17 + 0x10)) * 0.3333333432674408 -
                       dVar45);
        fVar6 = (float)((double)(*(float *)((int)puVar31 + iVar29 + 0x18) +
                                 (float)puVar31[iVar28 * 4 + 6] +
                                *(float *)((int)puVar31 + iVar17 + 0x18)) * 0.3333333432674408 -
                       dVar43);
        dVar42 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)((double)(float)((double)((float)(dVar42 * dVar42) * param_5[2]) * dVar42) /
                       dVar42);
        dVar39 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar39 = (double)(fVar5 * fVar6);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar37 = (double)(fVar5 * fVar2);
        }
        dVar36 = dVar38;
        if (dVar38 - dVar42 < 0.0) {
          dVar36 = (double)(fVar5 * fVar3);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar39 = (double)(fVar5 * fVar6);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar37 = (double)(fVar5 * fVar2);
        }
        if (dVar42 - dVar38 < 0.0) {
          dVar36 = (double)(fVar5 * fVar3);
        }
        dVar39 = dVar41 + dVar39;
        dVar41 = (double)(float)dVar39;
        dVar37 = dVar40 + dVar37;
        dVar40 = (double)(float)dVar37;
        dVar36 = dVar46 + dVar36;
        dVar46 = (double)(float)dVar36;
        param_4[2] = (float)dVar39;
        param_4[1] = (float)dVar37;
        *param_4 = (float)dVar36;
      }
    }
    if (pMVar14 != (MobyInstance *)0x0) {
      fVar5 = (float)((double)(pMVar14->pos).y - dVar44);
      fVar2 = (float)((double)(pMVar14->pos).x - dVar45);
      fVar3 = (float)((double)(pMVar14->pos).z - dVar43);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar39 < dVar47) {
        fVar6 = (float)((double)(float)((double)((float)(dVar39 * dVar39) * param_5[1]) * dVar39) /
                       dVar39);
        dVar42 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar42 = (double)(fVar6 * fVar3);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar37 = (double)(fVar6 * fVar5);
        }
        dVar36 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar36 = (double)(fVar6 * fVar2);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar42 = (double)(fVar6 * fVar3);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar37 = (double)(fVar6 * fVar5);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar36 = (double)(fVar6 * fVar2);
        }
        dVar42 = dVar41 + dVar42;
        dVar41 = (double)(float)dVar42;
        dVar37 = dVar40 + dVar37;
        dVar40 = (double)(float)dVar37;
        dVar36 = dVar46 + dVar36;
        dVar46 = (double)(float)dVar36;
        param_4[2] = (float)dVar42;
        param_4[1] = (float)dVar37;
        *param_4 = (float)dVar36;
      }
    }
    pfVar25 = (float *)param_4[0x15];
    if (pfVar25 != (float *)0x0) {
      fVar5 = (float)((double)pfVar25[1] - dVar44);
      fVar2 = (float)((double)*pfVar25 - dVar45);
      fVar3 = (float)((double)pfVar25[2] - dVar43);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
      if (dVar39 < dVar47) {
        fVar6 = (float)((double)(float)((double)((float)(dVar39 * dVar39) * param_5[1]) * dVar39) /
                       dVar39);
        dVar47 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar47 = (double)(fVar6 * fVar3);
        }
        dVar42 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar42 = (double)(fVar6 * fVar5);
        }
        dVar37 = dVar38;
        if (dVar38 - dVar39 < 0.0) {
          dVar37 = (double)(fVar6 * fVar2);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar47 = (double)(fVar6 * fVar3);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar42 = (double)(fVar6 * fVar5);
        }
        if (dVar39 - dVar38 < 0.0) {
          dVar37 = (double)(fVar6 * fVar2);
        }
        dVar47 = dVar41 + dVar47;
        dVar41 = (double)(float)dVar47;
        dVar42 = dVar40 + dVar42;
        dVar40 = (double)(float)dVar42;
        dVar37 = dVar46 + dVar37;
        dVar46 = (double)(float)dVar37;
        param_4[2] = (float)dVar47;
        param_4[1] = (float)dVar42;
        *param_4 = (float)dVar37;
      }
    }
    uVar19 = param_2 + 1;
    iVar22 = 0;
    if (0 < (int)uVar19) {
      do {
        pMVar33 = g_heroMobyPtr;
        if (iVar22 < (int)param_2) {
          pMVar33 = (MobyInstance *)*param_1;
        }
        iVar29 = 0;
        if ((pMVar33->state < 0x80) && (param_3 != pMVar33)) {
          fVar5 = (float)(dVar44 - (double)(pMVar33->pos).y);
          fVar2 = (float)(dVar45 - (double)(pMVar33->pos).x);
          fVar3 = (float)(dVar43 - (double)(pMVar33->pos).z);
          dVar47 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
          pfVar25 = param_4;
          if (dVar47 <= (double)param_4[0x13]) {
            do {
              if (pMVar33->oClass == *(MOBY_OCLASSES *)(pfVar25 + 0x18)) break;
              iVar29 = iVar29 + 1;
              pfVar25 = (float *)((int)pfVar25 + 2);
            } while (iVar29 < *(short *)((int)param_4 + 0x5e));
            if (iVar29 < *(short *)((int)param_4 + 0x5e)) {
              if (dVar47 < (double)param_5[4]) break;
              dVar39 = (double)(float)(dVar47 / (double)param_4[iVar29 + 0x24]);
              fVar6 = 1000.0;
              if (dVar39 != dVar38) {
                fVar6 = param_4[iVar29 + 0x1c] / (float)(dVar39 * dVar39);
              }
              fVar6 = (float)((double)fVar6 / dVar47);
              dVar39 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar39 = (double)(fVar6 * fVar3);
              }
              dVar42 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar42 = (double)(fVar6 * fVar5);
              }
              dVar37 = dVar38;
              if (dVar38 - dVar47 < 0.0) {
                dVar37 = (double)(fVar6 * fVar2);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar39 = (double)(fVar6 * fVar3);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar42 = (double)(fVar6 * fVar5);
              }
              if (dVar47 - dVar38 < 0.0) {
                dVar37 = (double)(fVar6 * fVar2);
              }
              dVar39 = dVar41 + dVar39;
              dVar41 = (double)(float)dVar39;
              dVar42 = dVar40 + dVar42;
              dVar40 = (double)(float)dVar42;
              dVar37 = dVar46 + dVar37;
              dVar46 = (double)(float)dVar37;
              param_4[2] = (float)dVar39;
              param_4[1] = (float)dVar42;
              *param_4 = (float)dVar37;
            }
          }
        }
        iVar22 = iVar22 + 1;
        param_1 = param_1 + 1;
        pMVar33 = pMVar32;
      } while (iVar22 < (int)uVar19);
    }
  }
  if (param_4[0x12] == 0.0) {
    fVar5 = param_4[4];
    fVar2 = param_4[5];
    fVar7 = (param_3->pos).w;
    fVar3 = param_4[6];
    *(f32 *)((int)puVar15 + 0x8c) = fVar7;
    *(f32 *)((int)puVar15 + 0x9c) = fVar7;
    *(float *)(puVar15 + 0x10) = (float)(dVar45 + (double)fVar5);
    *(float *)((int)puVar15 + 0x84) = (float)(dVar44 + (double)fVar2);
    *(float *)(puVar15 + 0x12) = (float)(dVar45 + (double)fVar5);
    *(float *)((int)puVar15 + 0x94) = (float)(dVar44 + (double)fVar2);
    *(undefined4 *)(puVar15 + 0x13) = 0x3c23d70a;
    *(float *)(puVar15 + 0x11) = (float)(dVar43 + (double)fVar3) + 1.5;
    iVar22 = CollLine(uVar18 - 0x110,uVar18 - 0x100,2,param_3,0);
    fVar12 = g_CollOutput.normal.z;
    fVar4 = g_CollOutput.normal.y;
    fVar1 = g_CollOutput.normal.x;
    fVar6 = g_CollOutput.ip.z;
    dVar40 = (double)*param_4;
    dVar41 = (double)param_4[1];
    dVar46 = (double)param_4[2];
    fVar5 = param_4[6];
    fVar2 = param_4[4];
    fVar3 = param_4[5];
    if (((iVar22 != 0) && (0 < g_CollOutput.poly)) &&
       (fVar7 = (param_3->pos).z, uVar13 = (int)fVar7 >> 0x1f, fVar8 = (param_3->pos).z,
       (int)((uVar13 >> 1 ^ (uint)fVar7) - uVar13) <
       (int)(((uint)((int)g_CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)g_CollOutput.ip.z) -
            ((int)g_CollOutput.ip.z >> 0x1f)))) {
      dVar44 = (double)g_CollOutput.normal.z;
      dVar47 = ABS(dVar44);
      fVar16 = g_CollOutput.normal.x * g_CollOutput.normal.x + g_CollOutput.normal.y * g_CollOutput.normal.y
      ;
      dVar45 = (double)SQRT(fVar16);
      dVar39 = ABS(dVar45);
      *(float *)(puVar15 + 0x14) = SQRT(fVar16);
      *(float *)((int)puVar15 + 0xa4) = (float)(dVar47 - dVar39);
      uVar34 = (ulonglong)((uint)fVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1d) & 4;
      dVar43 = dVar47;
      if ((double)*(float *)((int)puVar15 + 0xa4) - dVar38 < 0.0) {
        dVar43 = dVar39;
      }
      fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
      dVar39 = ABS((double)*(float *)(puVar15 + 0x14));
      if ((double)*(float *)((int)puVar15 + 0xa4) - dVar38 < 0.0) {
        dVar39 = dVar47;
      }
      fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
      dVar47 = dVar38;
      if (dVar38 < dVar43) {
        lVar20 = uVar18 - 0x180;
        lVar24 = uVar18 - 0xe8;
        lVar26 = uVar18 - 0xd8;
        lVar35 = 2;
        fVar10 = (float)(dVar39 - dVar43) / (float)(dVar39 + dVar43);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar15 + 0xb4) = fVar10;
        *(float *)((int)puVar15 + 0xac) = fVar10;
        *(float *)(puVar15 + 0x16) = fVar10;
        *(float *)(puVar15 + 0x15) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar15 + 0xac) = *(float *)((int)puVar15 + 0xac) * fVar11;
        *(float *)(puVar15 + 0x16) = *(float *)(puVar15 + 0x16) * fVar10;
        *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0x98) * fVar10 * fVar10;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
          lVar26 = lVar26 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 4;
        lVar26 = uVar18 - 0xe8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar26;
        do {
          fVar10 = *pfVar25;
          fVar11 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar10;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
          lVar24 = lVar24 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar20 = 2;
        dVar43 = dVar38;
        do {
          iVar22 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar29 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0xa8)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar47 = (double)((float)(dVar43 + 0.7853981852531433) * fVar12 + fVar9);
      }
      dVar43 = dVar38;
      dVar39 = dVar38;
      if (dVar45 != dVar38) {
        fVar12 = 1.0 / SQRT(fVar16);
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        fVar12 = -(fVar16 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
        dVar43 = (double)(fVar1 * fVar12);
        dVar39 = (double)(fVar4 * fVar12);
      }
      dVar45 = (double)param_5[3];
      dVar44 = (double)(float)(dVar45 * dVar44);
      dVar42 = (double)(float)((double)(float)(dVar47 * 10000.0) * dVar45);
      dVar46 = (double)(float)(dVar46 + dVar44);
      dVar41 = (double)(float)(dVar41 + (double)(float)(dVar45 * dVar39));
      dVar40 = (double)(float)(dVar40 + (double)(float)(dVar45 * dVar43));
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar46 = (double)(float)(dVar42 * dVar44 + dVar46);
      }
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar41 = (double)(float)(dVar42 * (double)(float)(dVar45 * dVar39) + dVar41);
      }
      if (0.4000000059604645 - dVar47 < 0.0) {
        dVar40 = (double)(float)(dVar42 * (double)(float)(dVar45 * dVar43) + dVar40);
      }
      if (0.2 < fVar8 - fVar6) {
        dVar46 = (double)(float)(dVar46 + (double)fVar5);
        dVar47 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
        fVar5 = (float)((double)(float)(dVar45 * -1000.0) / dVar47);
        dVar45 = (double)(fVar3 * fVar5);
        dVar44 = (double)(fVar2 * fVar5);
        dVar43 = dVar38;
        if (dVar38 - dVar47 < 0.0) {
          dVar43 = dVar45;
        }
        dVar39 = dVar38;
        if (dVar38 - dVar47 < 0.0) {
          dVar39 = dVar44;
        }
        if (dVar47 - dVar38 < 0.0) {
          dVar43 = dVar45;
        }
        if (dVar47 - dVar38 < 0.0) {
          dVar39 = dVar44;
        }
        dVar41 = (double)(float)(dVar41 + dVar43);
        dVar40 = (double)(float)(dVar40 + dVar39);
      }
    }
  }
  else {
    iVar22 = CollSphere((double)param_5[4],&param_3->pos,uVar19,4,param_3);
    dVar40 = (double)*param_4;
    dVar41 = (double)param_4[1];
    dVar46 = (double)param_4[2];
    if (iVar22 != 0) {
      fVar3 = g_CollOutput.push.y - (param_3->pos).y;
      fVar6 = g_CollOutput.push.x - (param_3->pos).x;
      fVar5 = (float)((double)(g_CollOutput.push.z - (param_3->pos).z) + (double)param_5[3]);
      dVar44 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
      fVar2 = (float)((double)param_5[3] / dVar44);
      dVar43 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar43 = (double)(fVar2 * fVar5);
      }
      dVar45 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar45 = (double)(fVar2 * fVar3);
      }
      dVar47 = dVar38;
      if (dVar38 - dVar44 < 0.0) {
        dVar47 = (double)(fVar2 * fVar6);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar43 = (double)(fVar2 * fVar5);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar45 = (double)(fVar2 * fVar3);
      }
      if (dVar44 - dVar38 < 0.0) {
        dVar47 = (double)(fVar2 * fVar6);
      }
      dVar46 = (double)(float)(dVar46 + dVar43);
      dVar41 = (double)(float)(dVar41 + dVar45);
      dVar40 = (double)(float)(dVar40 + dVar47);
    }
  }
  dVar43 = (double)(float)(dVar40 * dVar40 + (double)(float)(dVar41 * dVar41));
  if (param_4[0x12] == 0.0) {
    dVar44 = (double)(float)SQRT(dVar43);
    dVar45 = (double)(float)((double)param_5[6] / dVar44);
    dVar46 = dVar38;
  }
  else {
    dVar44 = (double)SQRT((float)(dVar46 * dVar46 + dVar43));
    dVar45 = (double)(float)((double)param_5[6] / dVar44);
    dVar43 = dVar38;
    if (dVar38 - dVar44 < 0.0) {
      dVar43 = (double)(float)(dVar46 * dVar45);
    }
    if (dVar44 - dVar38 < 0.0) {
      dVar43 = (double)(float)(dVar46 * dVar45);
    }
    dVar46 = (double)(float)(dVar43 / (double)param_4[0x12]);
  }
  param_4[2] = (float)dVar46;
  dVar46 = dVar38;
  if (dVar38 - dVar44 < 0.0) {
    dVar46 = (double)(float)(dVar41 * dVar45);
  }
  dVar43 = dVar38;
  if (dVar38 - dVar44 < 0.0) {
    dVar43 = (double)(float)(dVar40 * dVar45);
  }
  if (dVar44 - dVar38 < 0.0) {
    dVar46 = (double)(float)(dVar41 * dVar45);
  }
  if (dVar44 - dVar38 < 0.0) {
    dVar43 = (double)(float)(dVar40 * dVar45);
  }
  param_4[1] = (float)dVar46;
  *param_4 = (float)dVar43;
  iVar22 = FastDecTimerS16(param_4 + 0x11);
  dVar40 = (double)param_4[0xe];
  if (iVar22 != 0) {
    MB_randRangeFloat(45.0,90.0);
    uVar23 = FastDoubleToInt();
    *(undefined2 *)(param_4 + 0x11) = uVar23;
    dVar40 = (double)MB_randRangeFloat((float)dVar38,param_4[0x10]);
    dVar46 = 0.5;
    param_4[0xc] = -(float)((double)param_4[0x10] * 0.5 - dVar40);
    dVar40 = dVar38;
    dVar41 = (double)MB_randRangeFloat((float)dVar38,param_4[0x10]);
    param_4[0xd] = -(float)((double)param_4[0x10] * dVar46 - dVar41);
    dVar38 = dVar40;
    if (param_4[0x12] != 0.0) {
      dVar40 = (double)MB_randRangeFloat((float)dVar40,param_4[0x10]);
      dVar40 = -(double)(float)((double)param_4[0x10] * dVar46 - dVar40);
    }
    param_4[0xe] = (float)dVar40;
  }
  *param_4 = *param_4 + param_4[0xc];
  param_4[1] = param_4[1] + param_4[0xd];
  param_4[2] = (float)((double)param_4[2] + dVar40);
  if (pMVar33 != (MobyInstance *)0x0) {
    fVar2 = (param_3->pos).x - (pMVar33->pos).x;
    fVar5 = (param_3->pos).w;
    fVar3 = (param_3->pos).y - (pMVar33->pos).y;
    fVar6 = (param_3->pos).z - (pMVar33->pos).z;
    if (param_4[0x12] == 0.0) {
      dVar40 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      if (dVar40 == dVar38) {
        *param_4 = fVar2;
        param_4[1] = fVar3;
        param_4[3] = fVar5;
        param_4[2] = fVar6;
        dVar40 = dVar38;
      }
      else {
        fVar1 = (float)((double)param_5[6] / dVar40);
        param_4[2] = fVar6;
        param_4[3] = fVar5;
        dVar38 = (double)(fVar1 * fVar2);
        dVar40 = (double)(fVar1 * fVar3);
      }
      *param_4 = (float)dVar38;
      param_4[1] = (float)dVar40;
    }
    else {
      dVar40 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3);
      if (dVar40 == dVar38) {
        param_4[3] = fVar5;
        *param_4 = fVar2;
        param_4[1] = fVar3;
        param_4[2] = fVar6;
        dVar40 = dVar38;
        dVar41 = dVar38;
      }
      else {
        fVar1 = (float)((double)param_5[6] / dVar40);
        param_4[3] = fVar5;
        dVar40 = (double)(fVar1 * fVar2);
        dVar38 = (double)(fVar1 * fVar3);
        dVar41 = (double)(fVar1 * fVar6);
      }
      *param_4 = (float)dVar40;
      param_4[1] = (float)dVar38;
      param_4[2] = (float)dVar41;
    }
  }
  return;
}


// 0x04d2040 (0x3e8 bytes)
// inlined: FastAtan2 @0x4d21b4
void FUN_004d2040(undefined8 param_1,double param_2,double param_3,int param_4,float *param_5,
                 int *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xe0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar13;
  puVar7[0x1e] = in_LR;
  puVar7[0x18] = in_f28;
  puVar7[0x19] = in_f29;
  puVar7[0x1a] = in_f30;
  puVar7[0x1b] = in_f31;
  fVar1 = param_5[5];
  fVar2 = param_5[1];
  fVar3 = param_5[4];
  dVar22 = (double)(fVar1 + fVar2);
  fVar4 = *param_5;
  dVar23 = (double)(fVar3 + fVar4);
  puVar7[0x15] = unaff_r29;
  puVar7[0x16] = unaff_r30;
  dVar21 = 0.0;
  param_5[2] = 0.0;
  puVar7[0x17] = unaff_r31;
  param_5[4] = fVar3 + fVar4;
  param_5[5] = fVar1 + fVar2;
  dVar26 = (double)param_5[6];
  fVar1 = (float)param_6[5];
  iVar6 = *param_6;
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  if ((float)param_6[7] < fVar2) {
    dVar25 = (double)((float)param_6[7] / fVar2);
    dVar24 = (double)(float)(dVar23 * dVar25);
    dVar25 = (double)(float)(dVar22 * dVar25);
    dVar23 = dVar21;
    if (0.0 - fVar2 < 0.0) {
      dVar23 = dVar24;
    }
    dVar22 = dVar21;
    if (0.0 - fVar2 < 0.0) {
      dVar22 = dVar25;
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar23 = dVar24;
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar22 = dVar25;
    }
    param_5[4] = (float)dVar23;
    param_5[5] = (float)dVar22;
  }
  if (iVar6 != 0) {
    *(float *)(puVar7 + 0xe) = (float)dVar23;
    *(float *)((int)puVar7 + 0x74) = (float)dVar22;
    *(float *)(puVar7 + 0xf) = (float)(ABS(dVar23) - ABS(dVar22));
    uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      dVar25 = ABS(dVar22);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      dVar22 = ABS(dVar23);
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < dVar25) {
      lVar18 = uVar13 - 0xd0;
      lVar15 = uVar13 - 0x54;
      lVar17 = uVar13 - 100;
      lVar20 = 2;
      fVar4 = (float)(dVar22 - dVar25) / (float)(dVar22 + dVar25);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar5;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar4 * fVar4;
        iVar6 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar13 - 100;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar15 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
        lVar15 = lVar15 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar15 = 2;
      do {
        iVar6 = (int)lVar14;
        iVar8 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
    }
    OrganicDeltAngSpeed
              (dVar21,(double)((float)((double)fVar1 * 0.20000000298023224) * DAT_0071f40c),
               0x3fb99999a0000000,(double)fVar1,param_4,&DAT_00720000,param_5 + 0x16);
    dVar23 = (double)param_5[4];
    dVar22 = (double)param_5[5];
  }
  fVar1 = *(float *)(param_4 + 0x48);
  fVar3 = fVar1 + 1.5707963;
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar5 = fVar3;
  }
  fVar9 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = fVar9 * fVar9;
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar9;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar10 = fVar4 * fVar5;
  dVar22 = -param_2;
  if (-param_2 - dVar26 < 0.0) {
    dVar22 = (double)(float)(dVar26 - param_3);
  }
  param_5[6] = (float)dVar22;
  param_5[5] = (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9)
               * fVar2;
  fVar3 = (float)param_6[4];
  param_5[4] = (fVar4 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1)
               * fVar2;
  FUN_004d05b8(param_1,(double)(fVar3 * 0.25),param_4,param_5 + 4);
  return;
}


// 0x04d2438 (0x354 bytes)
// inlined: FastAtan2 @0x4d2638
void FUN_004d2438(double param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  int iVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  fVar8 = param_3[5] + param_3[1];
  fVar9 = param_3[4] + *param_3;
  fVar10 = param_3[6] + param_3[2];
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar25 = 0.0;
  fVar2 = param_3[0x12];
  fVar3 = *(float *)(param_2 + 0x10);
  puVar7[0x17] = unaff_r28;
  fVar4 = *(float *)(param_2 + 0x14);
  fVar11 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  puVar7[0x16] = unaff_r27;
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x1c);
  puVar7[0x1a] = unaff_r31;
  iVar20 = 0;
  puVar7[0x18] = unaff_r29;
  puVar7[0x19] = unaff_r30;
  fVar1 = fVar1 / fVar11;
  dVar24 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar24 = (double)(fVar10 * fVar1);
  }
  dVar22 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar22 = (double)(fVar9 * fVar1);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar24 = (double)(fVar10 * fVar1);
  }
  dVar23 = dVar25;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar8 * fVar1);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar22 = (double)(fVar9 * fVar1);
  }
  param_3[4] = (float)dVar22;
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar8 * fVar1);
  }
  fVar1 = (float)((double)fVar3 + dVar22);
  fVar3 = (float)((double)fVar4 + dVar23);
  param_3[5] = (float)dVar23;
  fVar5 = fVar5 + (float)(dVar24 / (double)fVar2);
  param_3[6] = (float)(dVar24 / (double)fVar2);
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x14) = fVar3;
  *(float *)(param_2 + 0x18) = fVar5;
  dVar24 = 0.25;
  do {
    *(float *)(puVar7 + 0xe) = fVar1;
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar6;
    fVar1 = *(float *)(param_4 + 0x10);
    *(float *)(puVar7 + 0xf) = (float)((double)fVar5 + param_1);
    iVar14 = CollSphere((double)(float)((double)fVar1 * dVar24),uVar12 - 0x80);
    fVar1 = g_CollOutput.push.x;
    if (iVar14 == 0) break;
    iVar20 = iVar20 + 1;
    *(float *)(param_2 + 0x10) = g_CollOutput.push.x;
    fVar3 = g_CollOutput.push.y;
    *(float *)(param_2 + 0x14) = g_CollOutput.push.y;
    fVar6 = g_CollOutput.push.w;
    fVar5 = (float)((double)g_CollOutput.push.z - param_1);
    *(float *)(param_2 + 0x1c) = g_CollOutput.push.w;
    *(float *)(param_2 + 0x18) = fVar5;
  } while (iVar20 < 6);
  fVar5 = param_3[4];
  fVar1 = param_3[5];
  dVar23 = ABS((double)param_3[4]);
  dVar22 = ABS((double)param_3[5]);
  *(float *)(puVar7 + 0x10) = (float)(dVar23 - dVar22);
  uVar15 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1e) & 2 | (ulonglong)((uint)fVar1 >> 0x1d) & 4;
  dVar24 = dVar23;
  if ((double)*(float *)(puVar7 + 0x10) - dVar25 < 0.0) {
    dVar24 = dVar22;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  if ((double)*(float *)(puVar7 + 0x10) - dVar25 < 0.0) {
    dVar22 = dVar23;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar25 < dVar24) {
    lVar18 = uVar12 - 0xe0;
    lVar16 = uVar12 - 0x5c;
    lVar17 = uVar12 - 0x6c;
    lVar21 = 2;
    fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x12) = fVar2;
    *(float *)(puVar7 + 0x11) = fVar2;
    *(float *)((int)puVar7 + 0x8c) = fVar2;
    *(float *)((int)puVar7 + 0x84) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar2;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar2 * fVar2;
      iVar20 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar12 - 0x6c;
    lVar21 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar13;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar20 = (int)lVar13;
      iVar14 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0x84)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar1);
  }
  dVar24 = (double)FastWrapRot((float)dVar25,3.1415927);
  *(float *)(param_2 + 0x48) = (float)dVar24;
  return;
}


// 0x04d278c (0x14 bytes)
void FUN_004d278c(void)

{
  DAT_008f92bc = 0x10000;
  return;
}


// 0x04d27a0 (0x4 bytes)
void FUN_004d27a0(void)

{
  return;
}



// game/update/moby1410.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x26fe98-0x271064
#include "game/update/moby1410.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x026fe98 (0x148 bytes)
void M1410_0026fe98(int param_1)

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
  iVar21 = *(int *)(iVar20 + 0xa0);
  if (iVar21 != -1) {
    pSVar22 = Splines[iVar21];
    if (pSVar22->cnt == 7) {
      pfVar23 = (float *)&DAT_007a2060;
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
      DAT_0096bfba = (undefined2)*(undefined4 *)(iVar20 + 0xa0);
    }
  }
  return;
}


// 0x0270018 (0x2b8 bytes)
void M1410_00270018(int param_1)

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
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xb8),g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 0xb8) = (float)dVar3;
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
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xbc),g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xbc) = (float)dVar3;
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
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xc0),g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xc0) = (float)dVar3;
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


// 0x02702d8 (0x170 bytes)
void M1410_002702d8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  pCVar7 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  uVar9 = 0xffffffff;
  uVar11 = 0;
  *(undefined2 *)(iVar2 + 0xac) = 0xffff;
  uVar8 = 0;
  iVar10 = iVar2;
  do {
    iVar3 = *(int *)(iVar10 + 0x80);
    fVar4 = *(float *)(param_1 + 0x14) - pCVar7[iVar3].pos.y;
    fVar5 = *(float *)(param_1 + 0x10) - pCVar7[iVar3].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar3].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 1.0) {
      *(short *)(iVar2 + 0xac) = (short)uVar11;
      uVar9 = uVar11;
    }
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + 4;
  } while ((int)uVar11 < 3);
  if ((UnlockableItems.mapOMatic == '\0') && ((uVar9 & 0xffff) != 2)) {
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x20) = 6;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  }
  else {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  sVar1 = *(short *)(iVar2 + 0xac);
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  pCVar7 = Cuboids;
  iVar10 = *(int *)(iVar2 + (int)((longlong)sVar1 << 2) + 0x80);
  *(float *)(iVar2 + 0x60) = Cuboids[iVar10].pos.x;
  *(float *)(iVar2 + 100) = pCVar7[iVar10].pos.y;
  *(float *)(iVar2 + 0x68) = pCVar7[iVar10].pos.z;
  *(float *)(iVar2 + 0x6c) = pCVar7[iVar10].pos.w;
  *(float *)(iVar2 + 0x70) = pCVar7[iVar10].rot.x;
  *(float *)(iVar2 + 0x74) = pCVar7[iVar10].rot.y;
  *(float *)(iVar2 + 0x78) = pCVar7[iVar10].rot.z;
  *(float *)(iVar2 + 0x7c) = pCVar7[iVar10].rot.w;
  return;
}


// 0x0270448 (0x74 bytes)
MobyInstance * M1410_00270448(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if (*(short *)((int)g_MobyInstance[*puVar2 & 0x7fff].pVar + 0xac) == param_2) {
        return g_MobyInstance + (*puVar2 & 0x7fff);
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}


// 0x02704bc (0x140 bytes)
void M1410_002704bc(int param_1)

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
  sVar5 = *(short *)(iVar2 + 0xae);
  puVar6 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if (*(short *)((int)pMVar7->pVar + 0xac) == sVar5) {
        if (pMVar7 != (MobyInstance *)0x0) {
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xac) << 2) + 0x80);
          (pMVar7->pos).x = Cuboids[iVar3].pos.x;
          (pMVar7->pos).y = pCVar4[iVar3].pos.y;
          (pMVar7->pos).z = pCVar4[iVar3].pos.z;
          (pMVar7->pos).w = pCVar4[iVar3].pos.w;
          pCVar4 = Cuboids;
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xac) << 2) + 0x80);
          (pMVar7->rotation).x = Cuboids[iVar3].rot.x;
          (pMVar7->rotation).y = pCVar4[iVar3].rot.y;
          (pMVar7->rotation).z = pCVar4[iVar3].rot.z;
          (pMVar7->rotation).w = pCVar4[iVar3].rot.w;
          M1410_002702d8(pMVar7);
          sVar5 = *(short *)(iVar2 + 0xae);
        }
        break;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  *(short *)(iVar2 + 0xac) = sVar5;
  return;
}


// 0x0270600 (0xc4 bytes)
bool M1410_00270600(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  OrganicDelt
            (1.0,*(float *)(iVar1 + 200),*(float *)(iVar1 + 200),*(float *)(iVar1 + 0xc4),
             (float *)(iVar1 + 0xb0),0x2705fc,(float *)(iVar1 + 0xb4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xa4) + -1);
  MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xb0) * (float)lVar3),*(int **)(iVar1 + 0xa4),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xb0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xb0)) - uVar2);
}


// 0x02706c4 (0xc4 bytes)
void M1410_002706c4(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xae);
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
    MB_ShowPersistentMessage(8,0x3e8a);
  }
  else if (sVar1 == 0) {
    MB_ShowPersistentMessage(8,0x3e89);
  }
  else {
    MB_ShowPersistentMessage(8,0x139b);
  }
  return;
}


// 0x0270798 (0x148 bytes)
void M1410_00270798(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xac);
  if (sVar1 < 1) {
    if (-1 < sVar1) {
      *(undefined2 *)(iVar2 + 0xae) = 1;
      *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x90)];
    }
  }
  else if (sVar1 < 2) {
    *(undefined2 *)(iVar2 + 0xae) = 0;
    *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x94)];
  }
  else if (sVar1 < 3) {
    *(undefined2 *)(iVar2 + 0xae) = 1;
    *(Spline **)(iVar2 + 0xa4) = Splines[*(int *)(iVar2 + 0x9c)];
  }
  piVar3 = *(int **)(iVar2 + 0xa4);
  fVar4 = 1.0 / (SQRT(((float)piVar3[6] - (float)piVar3[10]) *
                      ((float)piVar3[6] - (float)piVar3[10]) +
                      ((float)piVar3[4] - (float)piVar3[8]) * ((float)piVar3[4] - (float)piVar3[8])
                      + ((float)piVar3[5] - (float)piVar3[9]) *
                        ((float)piVar3[5] - (float)piVar3[9])) * (float)(longlong)*piVar3);
  *(float *)(iVar2 + 0xc4) = g_FrameTime * 20.0 * fVar4;
  fVar5 = DAT_0071f418;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xb4) = 0;
  *(float *)(iVar2 + 200) = fVar5 * 5.0 * fVar4;
  return;
}


// 0x02708f0 (0x774 bytes)
/* Moby 1410 */

void UpdateMoby_1410(MobyInstance *moby)

{
  u8 uVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  MobyInstance *pMVar11;
  Cuboid *pCVar12;
  ushort *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
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
  float local_bc;
  float local_ac;
  float local_9c;
  longlong local_80;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  pvVar4 = moby->pVar;
  dVar21 = (double)(moby->pos).x;
  dVar22 = (double)(moby->pos).y;
  dVar23 = (double)(moby->pos).z;
  FUN_004d407c(lVar9,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if (UnlockableItems.mapOMatic != '\0') {
      puVar6 = moby->pClass->collision;
      moby->enabled = '\x01';
      moby->collision = puVar6;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xb0),0x720000,(float *)((int)pvVar4 + 0xb4));
    local_80 = (longlong)**(int **)((int)pvVar4 + 0xa4);
    pCVar12 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xae) << 2) + 0x80);
    dVar20 = (double)(pCVar12->pos).x;
    dVar19 = (double)(pCVar12->pos).y;
    dVar18 = (double)(pCVar12->pos).z;
    dVar17 = (double)(pCVar12->pos).w;
    dVar16 = (double)(pCVar12->rot).y;
    dVar15 = (double)(pCVar12->rot).z;
    MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar4 + 0xa4),pCVar12,0,uVar8 - 0xe0,uVar8 - 0xd0,0)
    ;
    dVar14 = (double)*(float *)((int)pvVar4 + 0xb0);
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar14 * (double)(float)(dVar20 - (double)local_e0) + (double)local_e0);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar14 * (double)(float)(dVar19 - (double)local_dc) + (double)local_dc);
    *(float *)((int)pvVar4 + 0x6c) = (float)dVar17;
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar14 * (double)(float)(dVar18 - (double)local_d8) + (double)local_d8);
    dVar14 = (double)FastDiffRots(dVar16,(double)local_cc);
    dVar14 = (double)FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),local_cc);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar14;
    dVar14 = (double)FastDiffRots(dVar15,(double)local_c8);
    dVar14 = (double)FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),local_c8);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar14;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x01';
      M1410_002704bc(lVar9);
    }
  }
  else if (uVar1 == '\x04') {
    pvVar5 = moby->pVar;
    OrganicDelt
              (1.0,*(float *)((int)pvVar5 + 200),*(float *)((int)pvVar5 + 200),
               *(float *)((int)pvVar5 + 0xc4),(float *)((int)pvVar5 + 0xb0),0x2708e0,
               (float *)((int)pvVar5 + 0xb4));
    local_80 = (longlong)(**(int **)((int)pvVar5 + 0xa4) + -1);
    MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar5 + 0xb0) * (float)local_80),
               *(int **)((int)pvVar5 + 0xa4),local_80,0,(int)pvVar5 + 0x60,(int)pvVar5 + 0x70,0);
    uVar7 = (int)*(uint *)((int)pvVar5 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,g_FrameTime * 0.5,
               (float *)((int)pvVar4 + 0xb0),0x720000,(float *)((int)pvVar4 + 0xb4));
    pCVar12 = Cuboids + *(int *)((int)pvVar4 +
                                (int)((longlong)*(short *)((int)pvVar4 + 0xac) << 2) + 0x80);
    dVar19 = (double)(pCVar12->pos).x;
    dVar18 = (double)(pCVar12->pos).y;
    dVar17 = (double)(pCVar12->pos).z;
    dVar16 = (double)(pCVar12->rot).y;
    dVar15 = (double)(pCVar12->rot).z;
    MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar4 + 0xa4),pCVar12,0,uVar8 - 0x100,uVar8 - 0xf0,0);
    dVar14 = (double)*(float *)((int)pvVar4 + 0xb0);
    *(undefined4 *)((int)pvVar4 + 0x6c) = local_f4;
    *(float *)((int)pvVar4 + 0x60) =
         (float)(dVar14 * (double)(float)((double)local_100 - dVar19) + dVar19);
    *(float *)((int)pvVar4 + 100) =
         (float)(dVar14 * (double)(float)((double)local_fc - dVar18) + dVar18);
    *(float *)((int)pvVar4 + 0x68) =
         (float)(dVar14 * (double)(float)((double)local_f8 - dVar17) + dVar17);
    dVar14 = (double)FastDiffRots((double)local_ec,dVar16);
    dVar14 = (double)FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),
                                (float)dVar16);
    *(float *)((int)pvVar4 + 0x74) = (float)dVar14;
    dVar14 = (double)FastDiffRots((double)local_e8,dVar15);
    dVar14 = (double)FastWrapRot
                               ((float)(dVar14 * (double)*(float *)((int)pvVar4 + 0xb0)),
                                (float)dVar15);
    *(float *)((int)pvVar4 + 0x78) = (float)dVar14;
    uVar7 = (int)*(uint *)((int)pvVar4 + 0xb0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar4 + 0xb0)) - uVar7)) {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         (FastNormalizeRMtx4(uVar8 - 0xc0,lVar9 + 0xc0),
         ABS(local_9c * (g_heroPosition.z - (moby->pos).z) +
             local_bc * (g_heroPosition.x - (moby->pos).x) +
             local_ac * (g_heroPosition.y - (moby->pos).y)) < 1.2)) {
        M1410_00270798(lVar9);
        M1410_002706c4(lVar9);
        if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_HelpMsgOwner == 8)) {
          moby->state = '\x03';
          puVar13 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
          if (puVar13 != (ushort *)0x0) {
            do {
              pMVar11 = g_MobyInstance + (*puVar13 & 0x7fff);
              if (*(short *)((int)pMVar11->pVar + 0xac) == *(short *)((int)pvVar4 + 0xae)) {
                if (pMVar11 != (MobyInstance *)0x0) {
                  pMVar11->collision = (ushort *)0x0;
                  pMVar11->enabled = '\0';
                  pMVar11->state = '\x02';
                  pMVar11->modeBits = pMVar11->modeBits | DISABLED;
                }
                break;
              }
              uVar2 = *puVar13;
              puVar13 = puVar13 + 1;
            } while (-1 < (short)uVar2);
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar4 + 0xaa) = 0xffff;
      M1410_002702d8(lVar9);
    }
  }
  M1410_00270018(lVar9);
  uVar1 = moby->state;
  if (((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) {
    DAT_00969ed2 = 2;
    DAT_00969ed4 = 2;
    M1410_0026fe98(lVar9);
    iVar10 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xaa));
    if (iVar10 == 0) {
      iVar10 = PlayMobySound(0,4,moby);
      *(short *)((int)pvVar4 + 0xaa) = (short)iVar10;
    }
  }
  else {
    iVar10 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar4 + 0xaa));
    if (iVar10 != 0) {
      sVar3 = *(short *)((int)pvVar4 + 0xaa);
      if (((sVar3 != -1) &&
          (iVar10 = (int)((longlong)sVar3 << 7) - (int)((longlong)sVar3 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar10 + 4) != '\0')) {
        sound_Kill((int)sVar3);
      }
      *(undefined2 *)((int)pvVar4 + 0xaa) = 0xffff;
    }
  }
  local_110.x = (float)((double)(moby->pos).x - dVar21);
  local_110.y = (float)((double)(moby->pos).y - dVar22);
  local_110.w = (moby->pos).w;
  local_110.z = (float)((double)(moby->pos).z - dVar23);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_110,uVar8 - 0x120,lVar9 + 0x40);
  return;
}



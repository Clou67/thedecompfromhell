// game/update/moby712.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x42de7c-0x42f948
#include "game/update/moby712.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x042de7c (0x14 bytes)
void M712_0042de7c(void)

{
  DAT_00859cbc = 0x10000;
  return;
}


// 0x042de90 (0x148 bytes)
void M712_0042de90(int param_1)

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
      pfVar23 = (float *)&DAT_00859ce0;
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


// 0x042e010 (0x2b8 bytes)
void M712_0042e010(int param_1)

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


// 0x042e2c8 (0x8c bytes)
MobyInstance * M712_0042e2c8(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (((int)(uint)*(byte *)(param_1 + 0x21) < g_NumMobyGroups) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
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


// 0x042e360 (0x164 bytes)
void M712_0042e360(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xb4);
  if (sVar1 != 4) {
    if (sVar1 == 3) {
      *(undefined2 *)(iVar2 + 0xb6) = 0;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0xa0)];
    }
    else if (sVar1 == 2) {
      *(undefined2 *)(iVar2 + 0xb6) = 3;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x9c)];
    }
    else if (sVar1 == 1) {
      *(undefined2 *)(iVar2 + 0xb6) = 0;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x98)];
    }
    else if (sVar1 == 0) {
      *(undefined2 *)(iVar2 + 0xb6) = 1;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x94)];
    }
  }
  piVar3 = *(int **)(iVar2 + 0xac);
  fVar4 = 1.0 / (SQRT(((float)piVar3[6] - (float)piVar3[10]) *
                      ((float)piVar3[6] - (float)piVar3[10]) +
                      ((float)piVar3[4] - (float)piVar3[8]) * ((float)piVar3[4] - (float)piVar3[8])
                      + ((float)piVar3[5] - (float)piVar3[9]) *
                        ((float)piVar3[5] - (float)piVar3[9])) * (float)(longlong)*piVar3);
  *(float *)(iVar2 + 0xd4) = g_FrameTime * 5.0 * fVar4;
  fVar5 = g_FrameTimeSq;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(float *)(iVar2 + 0xd8) = fVar5 * 2.5 * fVar4;
  return;
}


// 0x042e4c8 (0x114 bytes)
void M712_0042e4c8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  int iVar8;
  int iVar9;
  
  pCVar7 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x10);
  iVar9 = 0;
  *(undefined2 *)(iVar2 + 0xb4) = 0xffff;
  iVar8 = iVar2;
  do {
    iVar3 = *(int *)(iVar8 + 0x80);
    fVar5 = *(float *)(param_1 + 0x14) - pCVar7[iVar3].pos.y;
    fVar4 = fVar1 - pCVar7[iVar3].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar3].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 1.0) {
      *(short *)(iVar2 + 0xb4) = (short)iVar9;
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar9 < 5);
  *(undefined1 *)(param_1 + 0x20) = 1;
  pCVar7 = Cuboids;
  iVar8 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
  *(float *)(iVar2 + 0x60) = Cuboids[iVar8].pos.x;
  *(float *)(iVar2 + 100) = pCVar7[iVar8].pos.y;
  *(float *)(iVar2 + 0x68) = pCVar7[iVar8].pos.z;
  *(float *)(iVar2 + 0x6c) = pCVar7[iVar8].pos.w;
  *(float *)(iVar2 + 0x70) = pCVar7[iVar8].rot.x;
  *(float *)(iVar2 + 0x74) = pCVar7[iVar8].rot.y;
  *(float *)(iVar2 + 0x78) = pCVar7[iVar8].rot.z;
  *(float *)(iVar2 + 0x7c) = pCVar7[iVar8].rot.w;
  return;
}


// 0x042e5dc (0xd4 bytes)
void M712_0042e5dc(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb4);
  if (*(char *)(param_1 + 0x20) == '\x05') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb6);
  }
  if (sVar1 == 4) {
    MB_ShowPersistentMessage(4,0x1399);
  }
  else if (sVar1 == 3) {
    MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 2) {
    MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 1) {
    MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 0) {
    MB_ShowPersistentMessage(4,0x53ed);
  }
  else {
    MB_ShowPersistentMessage(4,0x139b);
  }
  return;
}


// 0x042e6b0 (0x150 bytes)
void M712_0042e6b0(int param_1)

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
  if (((int)(uint)*(byte *)(param_1 + 0x21) < g_NumMobyGroups) &&
     (puVar6 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar6 != (ushort *)0x0)) {
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
          M712_0042e4c8(pMVar7);
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


// 0x042e808 (0xc4 bytes)
bool M712_0042e808(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  OrganicDelt
            (1.0,*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd4),
             (float *)(iVar1 + 0xc0),0x42e800,(float *)(iVar1 + 0xc4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xac) + -1);
  MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xc0) * (float)lVar3),*(int **)(iVar1 + 0xac),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xc0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xc0)) - uVar2);
}


// 0x042e8f0 (0x1058 bytes)
/* Moby 712 */

void UpdateMoby_712(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  u16 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  Vec4 local_170;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_10c;
  float local_108;
  float local_fc;
  float local_ec;
  float local_dc;
  float local_bc;
  float local_ac;
  float local_9c;
  longlong local_80;
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  pvVar5 = moby->pVar;
  dVar26 = (double)(moby->pos).x;
  dVar25 = (double)(moby->pos).y;
  dVar24 = (double)(moby->pos).z;
  FUN_004d407c(lVar10,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    uVar22 = 0x3ff0000000000000;
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.5,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    uVar19 = 0;
    dVar21 = (double)*(float *)((int)pvVar5 + 0xe0);
    dVar20 = (double)*(float *)((int)pvVar5 + 0xe4);
    dVar16 = (double)*(float *)((int)pvVar5 + 0xe8);
    dVar18 = (double)*(float *)((int)pvVar5 + 0xf4);
    dVar17 = (double)*(float *)((int)pvVar5 + 0xf8);
    MB_PathEvalSpline(0,*(undefined4 *)((int)pvVar5 + 0xac));
    dVar15 = (double)MB_catmullRom
                               (uVar22,uVar19,uVar22,uVar19,(double)*(float *)((int)pvVar5 + 0xc0));
    *(undefined4 *)((int)pvVar5 + 0x6c) = local_134;
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)((double)local_140 - dVar21) + dVar21);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)((double)local_13c - dVar20) + dVar20);
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)((double)local_138 - dVar16) + dVar16);
    dVar16 = (double)FastDiffRots((double)local_12c,dVar18);
    dVar16 = (double)FastWrapRot((float)(dVar16 * dVar15),(float)dVar18);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar16;
    dVar16 = (double)FastDiffRots((double)local_128,dVar17);
    dVar15 = (double)FastWrapRot((float)(dVar16 * dVar15),(float)dVar17);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x06') {
    if ((g_LevelFlags[Level][*(int *)((int)pvVar5 + 0xb8)] == -1) ||
       (g_LevelFlags[Level][*(int *)((int)pvVar5 + 0xbc)] == -1)) {
      puVar7 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar7;
      moby->enabled = '\x01';
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.25,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    local_80 = (longlong)**(int **)((int)pvVar5 + 0xac);
    pCVar13 = Cuboids + *(int *)((int)pvVar5 +
                                (int)((longlong)*(short *)((int)pvVar5 + 0xb6) << 2) + 0x80);
    dVar23 = (double)(pCVar13->pos).x;
    dVar21 = (double)(pCVar13->pos).y;
    dVar20 = (double)(pCVar13->pos).z;
    dVar18 = (double)(pCVar13->pos).w;
    dVar17 = (double)(pCVar13->rot).y;
    dVar16 = (double)(pCVar13->rot).z;
    MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar5 + 0xac),pCVar13,0,uVar9 - 0x120,uVar9 - 0x110,
               0);
    dVar15 = (double)*(float *)((int)pvVar5 + 0xc0);
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)(dVar23 - (double)local_120) + (double)local_120);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)(dVar21 - (double)local_11c) + (double)local_11c);
    *(float *)((int)pvVar5 + 0x6c) = (float)dVar18;
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)(dVar20 - (double)local_118) + (double)local_118);
    dVar15 = (double)FastDiffRots(dVar17,(double)local_10c);
    dVar15 = (double)FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),local_10c);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar15;
    dVar15 = (double)FastDiffRots(dVar16,(double)local_108);
    dVar15 = (double)FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),local_108);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x01';
      M712_0042e6b0(lVar10);
    }
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (FastNormalizeRMtx4(uVar9 - 0xc0,lVar10 + 0xc0),
        ABS(local_9c * (g_heroPosition.z - (moby->pos).z) +
            local_bc * (g_heroPosition.x - (moby->pos).x) +
            local_ac * (g_heroPosition.y - (moby->pos).y)) < 1.2)) &&
       (M712_0042e5dc(lVar10), (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) {
      *(undefined4 *)((int)pvVar5 + 0xe0) = *(undefined4 *)((int)pvVar5 + 0x60);
      *(undefined4 *)((int)pvVar5 + 0xe4) = *(undefined4 *)((int)pvVar5 + 100);
      *(undefined4 *)((int)pvVar5 + 0xe8) = *(undefined4 *)((int)pvVar5 + 0x68);
      *(undefined4 *)((int)pvVar5 + 0xec) = *(undefined4 *)((int)pvVar5 + 0x6c);
      *(undefined4 *)((int)pvVar5 + 0xf0) = *(undefined4 *)((int)pvVar5 + 0x70);
      *(undefined4 *)((int)pvVar5 + 0xf4) = *(undefined4 *)((int)pvVar5 + 0x74);
      *(undefined4 *)((int)pvVar5 + 0xf8) = *(undefined4 *)((int)pvVar5 + 0x78);
      *(undefined4 *)((int)pvVar5 + 0xfc) = *(undefined4 *)((int)pvVar5 + 0x7c);
      M712_0042e4c8(lVar10);
      *(undefined2 *)((int)pvVar5 + 0xb4) = *(undefined2 *)((int)pvVar5 + 0xb6);
      M712_0042e360(lVar10);
      moby->state = '\a';
      *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)((int)pvVar5 + 0xe0);
      *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)((int)pvVar5 + 0xe4);
      *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)((int)pvVar5 + 0xe8);
      *(undefined4 *)((int)pvVar5 + 0x6c) = *(undefined4 *)((int)pvVar5 + 0xec);
      *(undefined4 *)((int)pvVar5 + 0x70) = *(undefined4 *)((int)pvVar5 + 0xf0);
      *(undefined4 *)((int)pvVar5 + 0x74) = *(undefined4 *)((int)pvVar5 + 0xf4);
      *(undefined4 *)((int)pvVar5 + 0x78) = *(undefined4 *)((int)pvVar5 + 0xf8);
      *(undefined4 *)((int)pvVar5 + 0x7c) = *(undefined4 *)((int)pvVar5 + 0xfc);
      if (((int)(uint)(byte)moby->group < g_NumMobyGroups) &&
         (puVar11 = (ushort *)(&g_MobyGroups)[(byte)moby->group], puVar11 != (ushort *)0x0
         )) {
        do {
          pMVar14 = g_MobyInstance + (*puVar11 & 0x7fff);
          if (*(short *)((int)pMVar14->pVar + 0xb4) == *(short *)((int)pvVar5 + 0xb6)) {
            if (pMVar14 != (MobyInstance *)0x0) {
              pMVar14->collision = (ushort *)0x0;
              pMVar14->enabled = '\0';
              pMVar14->state = '\x02';
              pMVar14->modeBits = pMVar14->modeBits | DISABLED;
            }
            break;
          }
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
        } while (-1 < (short)uVar3);
      }
    }
  }
  else if (uVar1 == '\x04') {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      Cam0_SetCamDist(0x401c000000000000,0x3f689374c0000000,&DAT_0042e8cc,0);
    }
    pvVar6 = moby->pVar;
    OrganicDelt
              (1.0,*(float *)((int)pvVar6 + 0xd8),*(float *)((int)pvVar6 + 0xd8),
               *(float *)((int)pvVar6 + 0xd4),(float *)((int)pvVar6 + 0xc0),0x42e8cc,
               (float *)((int)pvVar6 + 0xc4));
    local_80 = (longlong)(**(int **)((int)pvVar6 + 0xac) + -1);
    MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar6 + 0xc0) * (float)local_80),
               *(int **)((int)pvVar6 + 0xac),local_80,0,(int)pvVar6 + 0x60,(int)pvVar6 + 0x70,0);
    uVar8 = (int)*(uint *)((int)pvVar6 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      Cam0_SetCamDist(0x401c000000000000,0x3f60624de0000000,&DAT_0042e8cc,0);
    }
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.5,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    pCVar13 = Cuboids + *(int *)((int)pvVar5 +
                                (int)((longlong)*(short *)((int)pvVar5 + 0xb4) << 2) + 0x80);
    dVar21 = (double)(pCVar13->pos).x;
    dVar20 = (double)(pCVar13->pos).y;
    dVar18 = (double)(pCVar13->pos).z;
    dVar17 = (double)(pCVar13->rot).y;
    dVar16 = (double)(pCVar13->rot).z;
    MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar5 + 0xac),pCVar13,0,uVar9 - 0x160,uVar9 - 0x150,0);
    dVar15 = (double)*(float *)((int)pvVar5 + 0xc0);
    *(undefined4 *)((int)pvVar5 + 0x6c) = local_154;
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)((double)local_160 - dVar21) + dVar21);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)((double)local_15c - dVar20) + dVar20);
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)((double)local_158 - dVar18) + dVar18);
    dVar15 = (double)FastDiffRots((double)local_14c,dVar17);
    dVar15 = (double)FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),
                                (float)dVar17);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar15;
    dVar15 = (double)FastDiffRots((double)local_148,dVar16);
    dVar15 = (double)FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),
                                (float)dVar16);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        FastNormalizeRMtx4(uVar9 - 0x100,lVar10 + 0xc0);
        if (ABS(local_dc * (g_heroPosition.z - (moby->pos).z) +
                local_fc * (g_heroPosition.x - (moby->pos).x) +
                local_ec * (g_heroPosition.y - (moby->pos).y)) < 1.2) {
          M712_0042e360(lVar10);
          M712_0042e5dc(lVar10);
          if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_HelpMsgOwner == 4)) {
            moby->state = '\x03';
            if (((int)(uint)(byte)moby->group < g_NumMobyGroups) &&
               (puVar11 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
               puVar11 != (ushort *)0x0)) {
              do {
                pMVar14 = g_MobyInstance + (*puVar11 & 0x7fff);
                if (*(short *)((int)pMVar14->pVar + 0xb4) == *(short *)((int)pvVar5 + 0xb6)) {
                  if (pMVar14 != (MobyInstance *)0x0) {
                    pMVar14->collision = (ushort *)0x0;
                    pMVar14->enabled = '\0';
                    pMVar14->state = '\x02';
                    pMVar14->modeBits = pMVar14->modeBits | DISABLED;
                  }
                  break;
                }
                uVar3 = *puVar11;
                puVar11 = puVar11 + 1;
              } while (-1 < (short)uVar3);
            }
            *(undefined2 *)((int)pvVar5 + 0xb0) = 0xffff;
          }
        }
      }
      else {
        if ((-1 < *(int *)((int)pvVar5 + 0x100)) &&
           ((*(short *)((int)pvVar5 + 0xb4) != 0 &&
            (iVar12 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x100)),
            iVar12 != 0)))) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 0;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x80);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 0;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(ushort *)((int)pvVar5 + 0xb4) =
                 ((ushort)(ZERO_MASK((2 - (uint)*(ushort *)((int)pvVar5 + 0xb4)))) & 2
                 ) + 1;
            M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
        if (((-1 < *(int *)((int)pvVar5 + 0x104)) && (*(short *)((int)pvVar5 + 0xb4) != 1)) &&
           (iVar12 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x104)),
           iVar12 != 0)) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 1;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x84);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 1;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 0;
            M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
        if (((-1 < *(int *)((int)pvVar5 + 0x108)) && (*(short *)((int)pvVar5 + 0xb4) < 2)) &&
           (iVar12 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x108)),
           iVar12 != 0)) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 2;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x88);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 2;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 2;
            M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar5 + 0xb0) = 0xffff;
      *(undefined2 *)((int)pvVar5 + 0xb2) = 0xffff;
      M712_0042e4c8(lVar10);
    }
  }
  M712_0042e010(lVar10);
  if ((moby->state == '\x03') || (moby->state == '\x04')) {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      DAT_00969ed2 = 2;
      DAT_00969ed4 = 2;
      M712_0042de90(lVar10);
    }
    iVar12 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar5 + 0xb2));
    if (iVar12 == 0) {
      iVar12 = PlayMobySound(0,4,moby);
      *(short *)((int)pvVar5 + 0xb2) = (short)iVar12;
    }
  }
  else {
    iVar12 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar5 + 0xb2));
    if (iVar12 != 0) {
      sVar4 = *(short *)((int)pvVar5 + 0xb2);
      if (((sVar4 != -1) &&
          (iVar12 = (int)((longlong)sVar4 << 7) - (int)((longlong)sVar4 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar12 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar12 + 4) != '\0')) {
        sound_Kill((int)sVar4);
      }
      *(undefined2 *)((int)pvVar5 + 0xb2) = 0xffff;
    }
  }
  local_170.x = (float)((double)(moby->pos).x - dVar26);
  local_170.y = (float)((double)(moby->pos).y - dVar25);
  local_170.w = (moby->pos).w;
  local_170.z = (float)((double)(moby->pos).z - dVar24);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x20),&local_170,uVar9 - 0x180,lVar10 + 0x40);
  return;
}



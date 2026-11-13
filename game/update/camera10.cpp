// game/update/camera10.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x35384-0x37810
#include "game/update/camera10.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x0035384 (0x14 bytes)
void SECTION_HEADER_CAMERA10(void)

{
  DAT_0071d648 = 0x10000;
  return;
}


// 0x0035398 (0x84 bytes)
int Cam10_IsHeroInVolume(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < 0) {
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(param_1 + 0xc));
    }
  }
  else {
    iVar1 = PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)(param_1 + 0x14)]->points,
                       Splines[*(int *)(param_1 + 0x14)]->cnt);
  }
  return iVar1;
}


// 0x0035420 (0x124 bytes)
MobyInstance * Cam10_GetClosestMobyInGroup(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  ushort *puVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  
  fVar1 = 10000.0;
  pMVar8 = (MobyInstance *)0x0;
  puVar7 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  puVar6 = puVar7;
  do {
    pMVar9 = g_MobyInstance + (*puVar6 & 0x7fff);
    if ((pMVar9->state < 0x80) &&
       (fVar4 = g_heroPosition.y - (pMVar9->pos).y, fVar3 = g_heroPosition.x - (pMVar9->pos).x,
       fVar5 = g_heroPosition.z - (pMVar9->pos).z,
       fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4), fVar3 < fVar1)) {
      fVar1 = fVar3;
      pMVar8 = pMVar9;
    }
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (-1 < (short)uVar2);
  if (pMVar8 == (MobyInstance *)0x0) {
    do {
      pMVar9 = g_MobyInstance + (*puVar7 & 0x7fff);
      fVar4 = g_heroPosition.y - (pMVar9->pos).y;
      fVar3 = g_heroPosition.x - (pMVar9->pos).x;
      fVar5 = g_heroPosition.z - (pMVar9->pos).z;
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar3 < fVar1) {
        fVar1 = fVar3;
        pMVar8 = pMVar9;
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}


// 0x0035560 (0x74c bytes)
// inlined: FastRSqrt @0x35690, FastRSqrt @0x357b4, FastRSqrt @0x35a1c
void Cam10_00035560(int param_1,float *param_2)

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
  int iVar11;
  ushort uVar13;
  int iVar12;
  double dVar14;
  double dVar15;
  GPiece<16> local_d0;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  iVar12 = *(int *)(param_1 + 0x70);
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  if ((*(short *)(param_2 + 0x1b) == 0) || (*(short *)(param_2 + 0x1b) == 3)) {
    dVar15 = 0.0;
    iVar11 = STUB_0002ed78(0,0x3fd0000000000000,param_1,param_2);
    if (iVar11 != 0) {
      fVar2 = *(float *)(param_1 + 0x34) - fVar2;
      fVar1 = *(float *)(param_1 + 0x30) - fVar1;
      fVar3 = *(float *)(param_1 + 0x3c);
      fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
      dVar14 = (double)SQRT(fVar4);
      param_2[0x1a] = SQRT(fVar4);
      if (2.0 < dVar14) {
        *(undefined2 *)(param_2 + 0x1b) = 1;
        if (dVar14 == dVar15) {
          param_2[3] = fVar3;
          *param_2 = fVar1;
          param_2[1] = fVar2;
          param_2[2] = 0.0;
          dVar14 = dVar15;
        }
        else {
          fVar5 = 1.0 / SQRT(fVar4);
          param_2[3] = fVar3;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          dVar14 = (double)(fVar1 * fVar5);
          dVar15 = (double)(fVar2 * fVar5);
        }
        *param_2 = (float)dVar14;
        param_2[1] = (float)dVar15;
        param_2[2] = 0.0;
        param_2[0x10] = *(float *)(param_1 + 0x30);
        param_2[0x11] = *(float *)(param_1 + 0x34);
        param_2[0x12] = *(float *)(param_1 + 0x38);
        fVar1 = *(float *)(param_1 + 0x3c);
        *(undefined2 *)((int)param_2 + 0x6e) = 0;
        param_2[0x13] = fVar1;
        param_2[0x14] = *(float *)(param_1 + 0x30);
        param_2[0x15] = *(float *)(param_1 + 0x34);
        param_2[0x16] = *(float *)(param_1 + 0x38);
        fVar1 = *(float *)(param_1 + 0x3c);
        param_2[0x18] = 0.17453292;
        param_2[0x17] = fVar1;
      }
    }
  }
  if (*(short *)(param_2 + 0x1b) == 1) {
    uVar13 = *(ushort *)((int)param_2 + 0x6e);
    if ((uVar13 & 1) == 0) {
      MB_RotateQuatAxisAngle(param_2[0x18],&local_c0,(float *)(iVar12 + 0xe0));
      local_b0 = 0.0;
      fVar4 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
      fVar2 = local_b0;
      fVar1 = local_b0;
      fVar3 = local_b0;
      if (SQRT(fVar4) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar4);
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar2 = local_c0 * fVar3;
        fVar1 = local_bc * fVar3;
        fVar3 = local_b8 * fVar3;
      }
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      local_a4 = g_heroPosition.w;
      fVar5 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                   g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
      fVar10 = -param_2[0x1a] / fVar4;
      fVar9 = -*(float *)(iVar12 + 0x60) / fVar5;
      fVar6 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar6 = g_heroGravityDir.z * fVar9;
      }
      fVar7 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar7 = g_heroGravityDir.y * fVar9;
      }
      fVar8 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar8 = g_heroGravityDir.x * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar6 = g_heroGravityDir.z * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar7 = g_heroGravityDir.y * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar8 = g_heroGravityDir.x * fVar9;
      }
      local_a8 = local_b0;
      if (0.0 - fVar4 < 0.0) {
        local_a8 = fVar3 * fVar10;
      }
      local_ac = local_b0;
      if (0.0 - fVar4 < 0.0) {
        local_ac = fVar1 * fVar10;
      }
      if (0.0 - fVar4 < 0.0) {
        local_b0 = fVar2 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_a8 = fVar3 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_ac = fVar1 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_b0 = fVar2 * fVar10;
      }
      local_a8 = g_heroPosition.z + fVar6 + local_a8;
      local_ac = g_heroPosition.y + fVar7 + local_ac;
      local_b0 = g_heroPosition.x + fVar8 + local_b0;
      local_c0 = fVar2;
      local_bc = fVar1;
      local_b8 = fVar3;
      iVar11 = CollLine(param_2 + 0x10,&local_b0,CAMERA_COLL_FLAGS,0,0);
      if (iVar11 == 0) {
        param_2[0x10] = local_b0;
        param_2[0x11] = local_ac;
        param_2[0x12] = local_a8;
        param_2[0x13] = local_a4;
        iVar11 = CollLine(&local_b0,local_d0,CAMERA_COLL_FLAGS,0,0);
        uVar13 = *(ushort *)((int)param_2 + 0x6e);
        if (iVar11 == 0) {
          param_2[0x19] = 0.0;
          *(undefined2 *)(param_2 + 0x1b) = 2;
          return;
        }
      }
      else {
        uVar13 = *(ushort *)((int)param_2 + 0x6e) | 1;
        *(ushort *)((int)param_2 + 0x6e) = uVar13;
      }
    }
    if ((uVar13 & 2) == 0) {
      MB_RotateQuatAxisAngle(-param_2[0x18],&local_a0,(float *)(iVar12 + 0xe0));
      fVar5 = 0.0;
      fVar4 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
      fVar2 = fVar5;
      fVar1 = fVar5;
      fVar3 = fVar5;
      if (SQRT(fVar4) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar4);
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar2 = local_a0 * fVar3;
        fVar1 = local_9c * fVar3;
        fVar3 = local_98 * fVar3;
      }
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      local_84 = g_heroPosition.w;
      fVar6 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                   g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
      fVar10 = -param_2[0x1a] / fVar4;
      fVar9 = -*(float *)(iVar12 + 0x60) / fVar6;
      local_88 = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_88 = fVar3 * fVar10;
      }
      local_8c = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_8c = fVar1 * fVar10;
      }
      local_90 = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_90 = fVar2 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_88 = fVar3 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_8c = fVar1 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_90 = fVar2 * fVar10;
      }
      fVar4 = fVar5;
      if (0.0 - fVar6 < 0.0) {
        fVar4 = g_heroGravityDir.z * fVar9;
      }
      fVar10 = fVar5;
      if (0.0 - fVar6 < 0.0) {
        fVar10 = g_heroGravityDir.y * fVar9;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar5 = g_heroGravityDir.x * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar4 = g_heroGravityDir.z * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar10 = g_heroGravityDir.y * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar5 = g_heroGravityDir.x * fVar9;
      }
      local_88 = g_heroPosition.z + fVar4 + local_88;
      local_8c = g_heroPosition.y + fVar10 + local_8c;
      local_90 = g_heroPosition.x + fVar5 + local_90;
      local_a0 = fVar2;
      local_9c = fVar1;
      local_98 = fVar3;
      iVar12 = CollLine(param_2 + 0x14,&local_90,CAMERA_COLL_FLAGS,0,0);
      if (iVar12 == 0) {
        param_2[0x14] = local_90;
        param_2[0x15] = local_8c;
        param_2[0x16] = local_88;
        param_2[0x17] = local_84;
        iVar12 = CollLine(&local_90,local_d0,CAMERA_COLL_FLAGS,0,0);
        uVar13 = *(ushort *)((int)param_2 + 0x6e);
        if (iVar12 == 0) {
          param_2[0x19] = 0.0;
          *(undefined2 *)(param_2 + 0x1b) = 2;
          param_2[0x18] = -param_2[0x18];
          return;
        }
      }
      else {
        uVar13 = *(ushort *)((int)param_2 + 0x6e) | 2;
        *(ushort *)((int)param_2 + 0x6e) = uVar13;
      }
    }
    fVar1 = param_2[0x18];
    param_2[0x18] = fVar1 + 0.17453292;
    if ((2.7925267 < fVar1 + 0.17453292) || (uVar13 == 3)) {
      *(undefined2 *)(param_2 + 0x1b) = 0;
    }
  }
  return;
}


// 0x0035cac (0x9c bytes)
void ____Cam10_CheckLineBlocked(longlong param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x6c) == 2) {
    fVar1 = DAT_0071d66c;
    if (*(int *)(param_2 + 0x60) < 1) {
      fVar1 = -DAT_0071d66c;
    }
    *param_3 = fVar1;
    iVar2 = CollLine(param_1 + 0x30,param_2 + 0x30,CAMERA_COLL_FLAGS,0,0);
    if (iVar2 == 0) {
      *(undefined2 *)(param_2 + 0x6c) = 0;
    }
  }
  return;
}


// 0x0035d68 (0x4ac bytes)
// inlined: FastRSqrt @0x35f14, FastRSqrt @0x36140
void Cam10_00035d68(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *speed;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  
  iVar3 = *(int *)(param_1 + 0x70);
  dVar23 = (double)g_Pad.sticks.x;
  dVar28 = (double)*(float *)(iVar3 + 0xe0);
  dVar27 = (double)*(float *)(iVar3 + 0xe4);
  dVar26 = (double)*(float *)(iVar3 + 0xe8);
  dVar25 = (double)*(float *)(iVar3 + 0xec);
  if (*(short *)(iVar3 + 0xdc) == 2) {
    if (*(int *)(iVar3 + 0xd0) < 1) {
      dVar23 = -(double)DAT_0071d66c;
    }
    else {
      dVar23 = (double)DAT_0071d66c;
    }
    iVar7 = CollLine(param_1 + 0x30,iVar3 + 0xa0,CAMERA_COLL_FLAGS,0,0);
    if (iVar7 == 0) {
      *(undefined2 *)(iVar3 + 0xdc) = 0;
    }
  }
  uVar24 = 0x3fd0000000000000;
  speed = (float *)STUB_0002ed78((double)*(float *)(iVar3 + 0x108),0x3fd0000000000000,param_1,
                                       iVar3 + 0x70);
  dVar22 = 0.0;
  fVar29 = Cam_InterpValues(*(float *)(iVar3 + 0x108),(float)dVar23,0.01,0.2,0.0,speed);
  *(float *)(iVar3 + 0x108) = fVar29;
  MB_RotateQuatAxisAngle
            (fVar29 * 0.034906585,(float *)(iVar3 + 0xe0),(float *)(iVar3 + 0xe0));
  fVar29 = *(float *)(iVar3 + 0xe4);
  fVar1 = *(float *)(iVar3 + 0xe0);
  fVar2 = *(float *)(iVar3 + 0xe8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar29 * fVar29;
  dVar23 = dVar22;
  dVar10 = dVar22;
  dVar12 = dVar22;
  if ((double)SQRT(fVar4) != dVar22) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar12 = (double)(fVar1 * fVar5);
    dVar10 = (double)(fVar29 * fVar5);
    dVar23 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xe0) = (float)dVar12;
  *(float *)(iVar3 + 0xe4) = (float)dVar10;
  *(float *)(iVar3 + 0xe8) = (float)dVar23;
  fVar29 = g_heroPosition.w;
  dVar21 = (double)*(float *)(param_1 + 0x30);
  dVar20 = (double)*(float *)(param_1 + 0x34);
  dVar19 = (double)*(float *)(param_1 + 0x38);
  dVar18 = (double)*(float *)(param_1 + 0x3c);
  if (*(int *)(iVar3 + 0x108) != 0) {
    dVar17 = (double)g_heroPosition.y;
    dVar8 = (double)g_heroPosition.z;
    dVar15 = (double)SQRT((float)(dVar23 * dVar23 +
                                 (double)(float)(dVar12 * dVar12 + (double)(float)(dVar10 * dVar10))
                                 ));
    dVar13 = (double)SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                          g_heroGravityDir.x * g_heroGravityDir.x +
                          g_heroGravityDir.y * g_heroGravityDir.y);
    dVar16 = (double)(float)(-(double)*(float *)(iVar3 + 0x50) / dVar15);
    fVar1 = (float)(-(double)*(float *)(iVar3 + 0x60) / dVar13);
    dVar9 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar9 = (double)(float)(dVar23 * dVar16);
    }
    dVar11 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar16);
    }
    dVar14 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar14 = (double)(float)(dVar12 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar9 = (double)(float)(dVar23 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar14 = (double)(float)(dVar12 * dVar16);
    }
    dVar23 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar23 = (double)(g_heroGravityDir.z * fVar1);
    }
    dVar10 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar10 = (double)(g_heroGravityDir.y * fVar1);
    }
    dVar12 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar12 = (double)(g_heroGravityDir.x * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar23 = (double)(g_heroGravityDir.z * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar10 = (double)(g_heroGravityDir.y * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar12 = (double)(g_heroGravityDir.x * fVar1);
    }
    if (speed == (float *)0x0) {
      *(float *)(param_1 + 0x30) =
           (float)(dVar14 + (double)(float)((double)g_heroPosition.x + dVar12));
      *(float *)(param_1 + 0x34) = (float)(dVar11 + (double)(float)(dVar17 + dVar10));
      *(float *)(param_1 + 0x38) = (float)(dVar9 + (double)(float)(dVar8 + dVar23));
      *(float *)(param_1 + 0x3c) = fVar29;
      iVar7 = STUB_0002ed78((double)*(float *)(iVar3 + 0x108),uVar24,param_1,iVar3 + 0x70);
      *(float *)(param_1 + 0x30) = (float)dVar21;
      *(float *)(param_1 + 0x34) = (float)dVar20;
      *(float *)(param_1 + 0x38) = (float)dVar19;
      *(float *)(param_1 + 0x3c) = (float)dVar18;
      if (iVar7 == 1) {
        *(float *)(iVar3 + 0xe0) = (float)dVar28;
        *(float *)(iVar3 + 0xe4) = (float)dVar27;
        *(float *)(iVar3 + 0xe8) = (float)dVar26;
        *(float *)(iVar3 + 0xec) = (float)dVar25;
      }
    }
  }
  fVar4 = g_heroPosition.w;
  fVar29 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if (DAT_00969fec == 0) {
    *(float *)(iVar3 + 0x10c) = g_heroPosition.z;
  }
  else {
    fVar29 = *(float *)(iVar3 + 0x10c);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x34);
  fVar1 = fVar1 - *(float *)(param_1 + 0x30);
  fVar5 = (fVar29 + *(float *)(iVar3 + 0x44)) - *(float *)(param_1 + 0x38);
  fVar29 = fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar23 = dVar22;
  dVar25 = dVar22;
  if ((double)SQRT(fVar29) != dVar22) {
    fVar6 = 1.0 / SQRT(fVar29);
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar23 = (double)(fVar6 * fVar1);
    dVar22 = (double)(fVar6 * fVar2);
    dVar25 = (double)(fVar6 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar23;
  *(float *)(iVar3 + 0xf4) = (float)dVar22;
  *(float *)(iVar3 + 0xf8) = (float)dVar25;
  *(float *)(iVar3 + 0xfc) = fVar4;
  return;
}


// 0x0036230 (0x5cc bytes)
// inlined: FastRSqrt @0x36458, FastRSqrt @0x36548, FastRSqrt @0x365f4, FastRSqrt @0x3669c, FastRSqrt @0x36740
void Cam10_00036230(float *param_1)

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
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  
  fVar26 = g_heroPosition.w;
  uVar25 = GameCamera.camStatics.heroUp.z;
  uVar24 = GameCamera.camStatics.heroUp.y;
  fVar23 = GameCamera.camStatics.heroUp.x;
  fVar10 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar10 + 0xe4);
  fVar2 = *(float *)((int)fVar10 + 0xe0);
  fVar3 = *(float *)((int)fVar10 + 0xe8);
  fVar4 = 0.0;
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = *(float *)((int)fVar10 + 0x58);
  fVar6 = *(float *)((int)fVar10 + 0x60);
  iVar11 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  iVar12 = *(int *)(iVar11 + 0xc);
  fVar7 = -1.0 / fVar8;
  fVar13 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar13 = fVar3 * fVar7;
  }
  fVar18 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar18 = fVar1 * fVar7;
  }
  fVar17 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar17 = fVar2 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar13 = fVar3 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar18 = fVar1 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar17 = fVar2 * fVar7;
  }
  fVar1 = g_heroPosition.x;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  if (*(short *)(iVar11 + 0x28) == 0) {
    iVar11 = *(int *)(iVar11 + 0x20);
    fVar1 = g_MobyInstance[iVar11].pos.x;
    fVar2 = g_MobyInstance[iVar11].pos.y;
    fVar3 = g_MobyInstance[iVar11].pos.z;
    if (fVar13 * (param_1[0xe] - g_heroPosition.z) +
        fVar17 * (param_1[0xc] - g_heroPosition.x) + fVar18 * (param_1[0xd] - g_heroPosition.y) <
        (param_1[0xe] - fVar3) * fVar13 +
        (param_1[0xc] - fVar1) * fVar17 + (param_1[0xd] - fVar2) * fVar18) {
      fVar1 = g_heroPosition.x;
      fVar3 = g_heroPosition.z;
      fVar2 = g_heroPosition.y;
    }
  }
  fVar21 = g_heroPosition.y + fVar2;
  fVar7 = Cuboids[iVar12].matrix.v1.y;
  fVar8 = Cuboids[iVar12].matrix.v1.x;
  fVar9 = Cuboids[iVar12].matrix.v1.z;
  fVar20 = g_heroPosition.z + fVar3;
  fVar19 = g_heroPosition.x + fVar1;
  fVar22 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  fVar14 = fVar4;
  fVar15 = fVar4;
  fVar16 = fVar4;
  if (SQRT(fVar22) != 0.0) {
    fVar16 = 1.0 / SQRT(fVar22);
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar14 = fVar8 * fVar16;
    fVar15 = fVar7 * fVar16;
    fVar16 = fVar9 * fVar16;
  }
  fVar7 = ABS(-(fVar20 * 0.5 - g_heroPosition.z) * fVar16 +
              -(fVar19 * 0.5 - g_heroPosition.x) * fVar14 +
              -(fVar21 * 0.5 - g_heroPosition.y) * fVar15) * 0.9063078 * 2.3662016;
  *(float *)((int)fVar10 + 0x50) = fVar7;
  if (fVar7 < fVar5) {
    *(float *)((int)fVar10 + 0x50) = fVar5;
    fVar7 = fVar5;
  }
  fVar7 = fVar7 + fVar13 * -(fVar20 * 0.5 - fVar3) +
                  fVar17 * -(fVar19 * 0.5 - fVar1) + fVar18 * -(fVar21 * 0.5 - fVar2);
  fVar3 = (float)uVar24 * fVar6 + fVar21 * 0.5 + fVar7 * fVar18;
  fVar2 = fVar23 * fVar6 + fVar19 * 0.5 + fVar7 * fVar17;
  fVar1 = (float)uVar25 * fVar6 + fVar20 * 0.5 + fVar7 * fVar13;
  fVar7 = fVar21 * 0.5 - fVar3;
  fVar6 = fVar19 * 0.5 - fVar2;
  fVar5 = fVar20 * 0.5 - fVar1;
  param_1[0xc] = fVar2;
  param_1[0xd] = fVar3;
  param_1[0xe] = fVar1;
  param_1[0xf] = fVar26;
  fVar13 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar2 = fVar4;
  fVar3 = fVar4;
  fVar1 = fVar4;
  if (SQRT(fVar13) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar13);
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar1 = fVar6 * fVar2;
    fVar3 = fVar7 * fVar2;
    fVar2 = fVar5 * fVar2;
  }
  *(float *)((int)fVar10 + 0xfc) = fVar26;
  *(float *)((int)fVar10 + 0xf0) = fVar1;
  *(float *)((int)fVar10 + 0xf4) = fVar3;
  *(float *)((int)fVar10 + 0xf8) = fVar2;
  fVar2 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar2) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar10 + 0xf4);
    param_1[2] = *(float *)((int)fVar10 + 0xf8);
    param_1[3] = *(float *)((int)fVar10 + 0xfc);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar2 = param_1[3];
    fVar5 = fVar4;
    fVar3 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar1 = fVar1 * fVar5;
    *param_1 = fVar1;
    fVar3 = *(float *)((int)fVar10 + 0xf4) * fVar5;
    param_1[1] = fVar3;
    fVar5 = *(float *)((int)fVar10 + 0xf8) * fVar5;
    param_1[2] = fVar5;
    fVar2 = *(float *)((int)fVar10 + 0xfc);
    param_1[3] = fVar2;
  }
  fVar6 = fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar6) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar2 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar3 = fVar4;
    fVar5 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar10 = 1.0 / SQRT(fVar6);
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar1 = fVar1 * fVar10;
    fVar3 = fVar3 * fVar10;
    fVar5 = fVar5 * fVar10;
  }
  param_1[0x13] = fVar2;
  param_1[3] = fVar2;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar5;
  fVar10 = (float)uVar25 * fVar1 - fVar23 * fVar5;
  fVar7 = (float)uVar24 * fVar5 - (float)uVar25 * fVar3;
  fVar13 = fVar23 * fVar3 - (float)uVar24 * fVar1;
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar5;
  param_1[7] = 0.0;
  fVar8 = fVar13 * fVar13 + fVar7 * fVar7 + fVar10 * fVar10;
  fVar2 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar8) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar8);
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar2 = fVar7 * fVar4;
    fVar6 = fVar10 * fVar4;
    fVar4 = fVar13 * fVar4;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar6;
  param_1[6] = fVar4;
  param_1[0xb] = 0.0;
  param_1[8] = fVar3 * fVar4 - fVar5 * fVar6;
  param_1[9] = fVar5 * fVar2 - fVar1 * fVar4;
  param_1[10] = fVar1 * fVar6 - fVar3 * fVar2;
  return;
}


// 0x0036810 (0x214 bytes)
// inlined: FastRSqrt @0x36954
void InitCamera_10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  Cuboid *pCVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  
  auVar15 = ZEXT416(0xffffffff);
  auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
  iVar6 = *(int *)(param_1 + 0x70);
  auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  *(MobyInstance **)(iVar6 + 0x40) = g_heroMobyPtr;
  *(undefined4 *)(iVar6 + 0x44) = 0x3fc00000;
  puVar7 = *(undefined4 **)(param_1 + 0x70);
  puVar7[0x16] = DAT_0071d674;
  puVar7[0x14] = DAT_0071d674;
  uVar8 = DAT_0071d670;
  puVar7[4] = 0x3ca3d70a;
  puVar7[0x18] = uVar8;
  puVar7[5] = 0x3e333333;
  fVar9 = 0.0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  pCVar11 = Cuboids;
  fVar1 = g_heroPosition.z;
  iVar14 = ImportCameras;
  auVar15 = loadVectorLeftIndexed(4,0x367fc);
  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  iVar6 = *(int *)(param_1 + 0x70);
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar16
                      );
  auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
  auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x20,
                     ZEXT48(puVar7));
  *(undefined4 *)((uint)(puVar7 + 8) & 0xfffffffc) = uVar8;
  *(undefined2 *)(puVar7 + 0x37) = 0;
  sVar5 = *(short *)(param_1 + 0x84);
  *(float *)(iVar6 + 0x10c) = fVar1;
  fVar13 = GameCamera.orientMtx.forward.z;
  fVar12 = GameCamera.orientMtx.forward.x;
  pCVar11 = pCVar11 + *(int *)(*(int *)(iVar14 + (int)((longlong)sVar5 << 5) + 0x1c) + 0xc);
  fVar1 = (pCVar11->matrix).v0.y;
  fVar2 = (pCVar11->matrix).v0.x;
  fVar3 = (pCVar11->matrix).v0.z;
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar10) == 0.0) {
    fVar4 = (pCVar11->matrix).v0.w;
    fVar1 = fVar9;
    fVar2 = fVar9;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar10);
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar4 = (pCVar11->matrix).v0.w;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar2 = fVar2 * fVar9;
    fVar1 = fVar1 * fVar9;
    fVar9 = fVar3 * fVar9;
  }
  fVar3 = GameCamera.orientMtx.forward.y * fVar1;
  *(float *)(iVar6 + 0xec) = fVar4;
  fVar10 = fVar13 * fVar9 + fVar12 * fVar2 + fVar3;
  fVar3 = -fVar2;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = -fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = -fVar9;
  if (0.0 - fVar10 < 0.0) {
    fVar1 = fVar9;
  }
  *(float *)(iVar6 + 0xe0) = fVar3;
  *(float *)(iVar6 + 0xe4) = fVar2;
  *(float *)(iVar6 + 0xe8) = fVar1;
  Cam10_00036230(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}


// 0x0036a40 (0x3cc bytes)
// inlined: FastRSqrt @0x36c7c
void Cam10_00036a40(int param_1)

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
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float *speed;
  double dVar25;
  double dVar26;
  float fVar27;
  
  uVar24 = GameCamera.camStatics.heroUp.z;
  uVar23 = GameCamera.camStatics.heroUp.y;
  fVar22 = GameCamera.camStatics.heroUp.x;
  iVar12 = *(int *)(param_1 + 0x70);
  fVar27 = *(float *)(iVar12 + 0xe4);
  fVar1 = *(float *)(iVar12 + 0xe0);
  fVar2 = *(float *)(iVar12 + 0xe8);
  fVar3 = *(float *)(iVar12 + 0x58);
  fVar4 = 0.0;
  fVar5 = *(float *)(iVar12 + 0x60);
  iVar13 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  fVar20 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar27 * fVar27);
  iVar14 = *(int *)(iVar13 + 0x20);
  fVar6 = g_MobyInstance[iVar14].pos.x;
  fVar7 = g_MobyInstance[iVar14].pos.y;
  fVar8 = g_MobyInstance[iVar14].pos.z;
  iVar13 = *(int *)(iVar13 + 0xc);
  fVar16 = g_heroPosition.y + fVar7;
  fVar15 = g_heroPosition.x + fVar6;
  fVar9 = Cuboids[iVar13].matrix.v1.y;
  fVar19 = -1.0 / fVar20;
  fVar10 = Cuboids[iVar13].matrix.v1.x;
  fVar11 = Cuboids[iVar13].matrix.v1.z;
  fVar21 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar9 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar9 = fVar27 * fVar19;
  }
  fVar18 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar18 = fVar1 * fVar19;
  }
  fVar17 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar17 = fVar2 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar9 = fVar27 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar17 = fVar2 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar18 = fVar1 * fVar19;
  }
  fVar27 = g_heroPosition.z + fVar8;
  fVar2 = fVar17 * (*(float *)(param_1 + 0x38) - g_heroPosition.z) +
          fVar18 * (*(float *)(param_1 + 0x30) - g_heroPosition.x) +
          fVar9 * (*(float *)(param_1 + 0x34) - g_heroPosition.y);
  fVar1 = (*(float *)(param_1 + 0x38) - fVar8) * fVar17 +
          (*(float *)(param_1 + 0x30) - fVar6) * fVar18 +
          (*(float *)(param_1 + 0x34) - fVar7) * fVar9;
  if (fVar2 - fVar1 < 0.0) {
    fVar7 = g_heroPosition.y;
  }
  if (fVar2 - fVar1 < 0.0) {
    fVar6 = g_heroPosition.x;
  }
  if (fVar2 - fVar1 < 0.0) {
    fVar8 = g_heroPosition.z;
  }
  fVar2 = fVar4;
  fVar1 = fVar4;
  if (SQRT(fVar21) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar21);
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar4 = fVar10 * fVar1;
    fVar2 = Cuboids[iVar13].matrix.v1.y * fVar1;
    fVar1 = fVar11 * fVar1;
  }
  speed = (float *)&DAT_00036a24;
  fVar1 = ABS(-(fVar27 * 0.5 - g_heroPosition.z) * fVar1 +
              -(fVar15 * 0.5 - g_heroPosition.x) * fVar4 +
              -(fVar16 * 0.5 - g_heroPosition.y) * fVar2) * 0.9063078 * 2.3662016;
  *(float *)(iVar12 + 0x50) = fVar1;
  if (fVar1 < fVar3) {
    *(float *)(iVar12 + 0x50) = fVar3;
    fVar1 = fVar3;
  }
  fVar1 = fVar1 + fVar17 * -(fVar27 * 0.5 - fVar8) +
                  fVar18 * -(fVar15 * 0.5 - fVar6) + fVar9 * -(fVar16 * 0.5 - fVar7);
  dVar26 = (double)((float)uVar23 * fVar5 + fVar16 * 0.5 + fVar1 * fVar9);
  dVar25 = (double)((float)uVar24 * fVar5 + fVar27 * 0.5 + fVar1 * fVar17);
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x30),
                            fVar22 * fVar5 + fVar15 * 0.5 + fVar1 * fVar18,*(float *)(iVar12 + 0x10)
                            ,*(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),
                            (float *)&DAT_00036a24);
  *(float *)(param_1 + 0x30) = fVar27;
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x34),(float)dVar26,*(float *)(iVar12 + 0x10),
                            *(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),speed);
  *(float *)(param_1 + 0x34) = fVar27;
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x38),(float)dVar25,*(float *)(iVar12 + 0x10),
                            *(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),speed);
  *(float *)(param_1 + 0x38) = fVar27;
  return;
}


// 0x0036e18 (0x3b4 bytes)
void Cam10_00036e18(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  CollOutput *speed;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  GPiece<4> local_b0;
  float local_ac;
  float local_a8;
  GPiece<24> local_a0;
  
  iVar4 = *(int *)(param_1 + 0x70);
  fVar17 = *(float *)(iVar4 + 0xe4);
  fVar2 = *(float *)(iVar4 + 0xe0);
  fVar3 = *(float *)(iVar4 + 0xe8);
  fVar1 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
               g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
  fVar8 = 0.0;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar17 * fVar17);
  fVar7 = -*(float *)(iVar4 + 0x60) / fVar1;
  fVar6 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
               g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
  fVar12 = -*(float *)(iVar4 + 0x50) / fVar5;
  fVar9 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar9 = g_heroGravityDir.z * fVar7;
  }
  fVar10 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar10 = g_heroGravityDir.y * fVar7;
  }
  fVar11 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar11 = g_heroGravityDir.x * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar11 = g_heroGravityDir.x * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar9 = g_heroGravityDir.z * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = g_heroGravityDir.y * fVar7;
  }
  local_a8 = fVar8;
  if (0.0 - fVar5 < 0.0) {
    local_a8 = fVar3 * fVar12;
  }
  local_ac = fVar8;
  if (0.0 - fVar5 < 0.0) {
    local_ac = fVar17 * fVar12;
  }
  fVar1 = fVar8;
  if (0.0 - fVar5 < 0.0) {
    fVar1 = fVar2 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_a8 = fVar3 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_ac = fVar17 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar1 = fVar2 * fVar12;
  }
  local_a8 = *(float *)(iVar4 + 0x10c) + fVar9 + local_a8;
  local_ac = g_heroPosition.y + fVar10 + local_ac;
  fVar1 = g_heroPosition.x + fVar11 + fVar1;
  fVar2 = -*(float *)(iVar4 + 0x44) / fVar6;
  fVar17 = fVar8;
  if (0.0 - fVar6 < 0.0) {
    fVar17 = g_heroGravityDir.z * fVar2;
  }
  fVar3 = fVar8;
  if (0.0 - fVar6 < 0.0) {
    fVar3 = g_heroGravityDir.y * fVar2;
  }
  if (0.0 - fVar6 < 0.0) {
    fVar8 = g_heroGravityDir.x * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar17 = g_heroGravityDir.z * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar3 = g_heroGravityDir.y * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar8 = g_heroGravityDir.x * fVar2;
  }
  dVar16 = (double)(*(float *)(iVar4 + 0x10c) + fVar17);
  dVar15 = (double)(g_heroPosition.y + fVar3);
  dVar14 = (double)(g_heroPosition.x + fVar8);
  if (((*(short *)(iVar4 + 0xdc) == 0) || (*(short *)(iVar4 + 0xdc) == 3)) &&
     (iVar13 = CollLine(iVar4 + 0xa0,local_b0,CAMERA_COLL_FLAGS,0,0), iVar13 != 0)) {
    fVar1 = (float)((double)(float)((double)g_CollOutput.ip.x - dVar14) * 0.9900000095367432 + dVar14)
    ;
    local_ac = (float)((double)(float)((double)g_CollOutput.ip.y - dVar15) * 0.9900000095367432 +
                      dVar15);
    local_a8 = (float)((double)(float)((double)g_CollOutput.ip.z - dVar16) * 0.9900000095367432 +
                      dVar16);
  }
  iVar13 = CollSphere
                     ((double)DAT_0071d678,local_a0,&DAT_00720000,CAMERA_COLL_SPHERE_FLAGS,
                      g_heroMobyPtr);
  if (iVar13 == 0) {
    speed = (CollOutput *)0x0;
  }
  else {
    speed = &g_CollOutput;
    local_ac = g_CollOutput.push.y;
    local_a8 = g_CollOutput.push.z;
    fVar1 = g_CollOutput.push.x;
  }
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x30),fVar1,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x30) = fVar17;
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_ac,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x34) = fVar17;
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_a8,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x38) = fVar17;
  return;
}


// 0x00371e0 (0x340 bytes)
// inlined: FastRSqrt @0x37270, FastRSqrt @0x373c4, FastRSqrt @0x37478
void Cam10_000371e0
               (float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<40> local_50;
  
  fVar5 = param_1[0x1c];
  dVar13 = 0.0;
  FastDecTimerS32((int)fVar5 + 0x20);
  dVar12 = 1.0;
  MB_CosineInterpolate
            (dVar13,0x3ff0000000000000,
             (double)((float)(longlong)((int)(animationSpeed * 120.5) - *(int *)((int)fVar5 + 0x20))
                     * (float)(1.0 / (double)(longlong)(animationSpeed * 120.5))));
  MB_QuatBetweenVecs(param_1,param_1 + 0x10,local_50,param_4,1);
  fVar5 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  dVar6 = (double)(float)GameCamera.camStatics.heroUp.y;
  dVar7 = (double)(float)GameCamera.camStatics.heroUp.z;
  dVar8 = (double)GameCamera.camStatics.heroUp.x;
  dVar9 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar9) == dVar13) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar9 = dVar13;
    dVar10 = dVar13;
    dVar11 = dVar13;
  }
  else {
    dVar10 = 1.0 / SQRT(dVar9);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar4 = param_1[3];
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                    (double)(float)(dVar10 * 0.5) + dVar10);
    dVar11 = (double)(fVar2 * fVar1);
    dVar10 = (double)(fVar5 * fVar1);
    dVar9 = (double)(fVar3 * fVar1);
  }
  param_1[0x13] = fVar4;
  param_1[3] = fVar4;
  param_1[0x10] = (float)dVar11;
  param_1[0x11] = (float)dVar10;
  param_1[0x12] = (float)dVar9;
  fVar5 = (float)(dVar8 * dVar10 - (double)(float)(dVar6 * dVar11));
  fVar2 = (float)(dVar7 * dVar11 - (double)(float)(dVar8 * dVar9));
  fVar3 = (float)(dVar6 * dVar9 - (double)(float)(dVar7 * dVar10));
  *param_1 = (float)dVar11;
  param_1[1] = (float)dVar10;
  param_1[2] = (float)dVar9;
  param_1[7] = 0.0;
  dVar8 = (double)(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar6 = dVar13;
  dVar7 = dVar13;
  if ((double)(float)SQRT(dVar8) != dVar13) {
    dVar6 = 1.0 / SQRT(dVar8);
    dVar6 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                            (double)(float)(dVar6 * 0.5) + dVar6);
    dVar6 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                            (double)(float)(dVar6 * 0.5) + dVar6);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                    (double)(float)(dVar6 * 0.5) + dVar6);
    dVar6 = (double)(fVar3 * fVar1);
    dVar13 = (double)(fVar2 * fVar1);
    dVar7 = (double)(fVar5 * fVar1);
  }
  param_1[4] = (float)dVar6;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar7;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar10 * dVar7 - (double)(float)(dVar9 * dVar13));
  param_1[9] = (float)(dVar9 * dVar6 - (double)(float)(dVar11 * dVar7));
  param_1[10] = (float)(dVar11 * dVar13 - (double)(float)(dVar10 * dVar6));
  return;
}


// 0x0037520 (0x118 bytes)
undefined8 ActivateCamera_10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if ((*(short *)(iVar1 + 0x28) == 0) && (0x7f < g_MobyInstance[*(int *)(iVar1 + 0x20)].state)) {
    return 0;
  }
  if (((param_2 == 0) || (*(short *)(param_2 + 0x7e) != 0)) ||
     (*(byte *)(param_2 + 0x7c) < *(byte *)(param_1 + 0x7c))) {
    if (*(int *)(iVar1 + 0x14) < 0) {
      if (*(int *)(iVar1 + 0xc) < 0) {
        return 0;
      }
      iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
    }
    else {
      iVar1 = PointInsideComplexPoly
                        (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar1 + 0x14)]->points,
                         Splines[*(int *)(iVar1 + 0x14)]->cnt);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// 0x0037638 (0xa8 bytes)
void UpdateCamera_10(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x70) + 0x70;
  iVar1 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  STUB_0002bcf8(param_1,lVar2);
  Cam10_00035560(param_1,lVar2);
  if (*(short *)(iVar1 + 0x28) == 0) {
    Cam10_00036a40(param_1);
  }
  else {
    Cam10_00035d68(param_1);
    Cam10_00036e18(param_1);
  }
  Cam10_000371e0(param_1);
  return;
}


// 0x00376e0 (0x130 bytes)
void ExitCamera_10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (*(int *)(iVar2 + 0x14) < 0) {
    iVar1 = 0;
    if (-1 < *(int *)(iVar2 + 0xc)) {
      iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc));
    }
  }
  else {
    iVar1 = PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                       Splines[*(int *)(iVar2 + 0x14)]->cnt);
  }
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  else if (*(short *)(iVar2 + 0x28) == 0) {
    if (g_MobyInstance[*(int *)(iVar2 + 0x20)].state < 0x80) {
      if ((-1 < *(int *)(iVar2 + 0xc)) &&
         (iVar2 = MB_IsPntInCuboid
                            ((Vec4 *)&g_MobyInstance[*(int *)(iVar2 + 0x20)].pos,
                             (longlong)*(int *)(iVar2 + 0xc)), iVar2 == 0)) {
        *(undefined2 *)(param_1 + 0x7e) = 3;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x7e) = 3;
    }
  }
  return;
}



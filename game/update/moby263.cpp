// game/update/moby263.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x31de18-0x320584
// shared update function UpdateMoby_a_lot_17; registered for oClasses 263, 264, 265, 266, 267
#include <math.h>
#include "game/update/moby263.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update/moby417.h"
#include "idol/fastfunc.h"

// 0x031de18 (0x344 bytes)
MobyInstance * M267_0031de18(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  short sVar8;
  MobyInstance *pMVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  sVar8 = MB_randInt(4);
  pMVar7 = CreateMoby(sVar8 + ASTEROID_0107);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    dVar15 = -2.0;
    dVar14 = 2.0;
    pfVar6 = *(float **)(param_1 + 0x78);
    dVar9 = (double)MB_randRangeFloat(-2.0,2.0);
    *pfVar5 = (float)dVar9;
    dVar9 = (double)MB_randRangeFloat((float)dVar15,(float)dVar14);
    pfVar5[1] = (float)dVar9;
    dVar14 = (double)MB_randRangeFloat((float)dVar15,(float)dVar14);
    dVar15 = (double)pfVar5[1];
    dVar12 = (double)*pfVar5;
    pfVar5[2] = (float)dVar14;
    pfVar5[8] = (float)(dVar12 + (double)*pfVar6);
    fVar3 = SQRT((float)(dVar14 * dVar14 +
                        (double)(float)(dVar12 * dVar12 + (double)(float)(dVar15 * dVar15))));
    pfVar5[9] = (float)(dVar15 + (double)pfVar6[1]);
    fVar2 = pfVar6[2];
    pfVar5[0xb] = pfVar5[3];
    pfVar5[10] = (float)(dVar14 + (double)fVar2);
    dVar16 = 0.0;
    dVar13 = (double)((g_FrameTime * 50.0) / fVar3);
    dVar9 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar9 = (double)(float)(dVar12 * dVar13);
    }
    dVar11 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar10 = dVar16;
    if (0.0 - fVar3 < 0.0) {
      dVar10 = (double)(float)(dVar14 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar9 = (double)(float)(dVar12 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar10 = (double)(float)(dVar14 * dVar13);
    }
    *pfVar5 = (float)dVar9;
    pfVar5[1] = (float)dVar11;
    pfVar5[2] = (float)dVar10;
    fVar2 = *param_2;
    *pfVar5 = (float)(dVar9 + (double)fVar2);
    fVar3 = param_2[1];
    pfVar5[1] = (float)(dVar11 + (double)fVar3);
    fVar4 = param_2[2];
    fVar1 = DAT_0071f408 * -0.7 + 1.0;
    *pfVar5 = (float)(dVar9 + (double)fVar2) * fVar1;
    pfVar5[1] = (float)(dVar11 + (double)fVar3) * fVar1;
    pfVar5[2] = (float)(dVar10 + (double)fVar4) * fVar1;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pfVar5[0x13] = 2.8026e-45;
    pMVar7->alpha = '\x7f';
    dVar9 = (double)MB_randRangeFloat(0.125,0.25);
    fVar2 = (float)((double)*(float *)(param_1 + 0x2c) * dVar9);
    pMVar7->scale = fVar2;
    pfVar5[0x14] = fVar2;
    dVar15 = -0.05235987901687622;
    dVar14 = 0.05235987901687622;
    dVar9 = (double)MB_randRangeFloat(-0.05235988,0.05235988);
    pfVar5[0x10] = (float)dVar9;
    dVar9 = (double)MB_randRangeFloat((float)dVar15,(float)dVar14);
    pfVar5[0x11] = (float)dVar9;
    dVar15 = (double)GameCamera.posX;
    fVar2 = (float)((double)pfVar5[8] - dVar15);
    (pMVar7->pos).x = fVar2;
    dVar14 = (double)GameCamera.posY;
    fVar3 = (float)((double)pfVar5[9] - dVar14);
    (pMVar7->pos).y = fVar3;
    dVar9 = (double)GameCamera.posZ;
    fVar4 = (float)((double)pfVar5[10] - dVar9);
    (pMVar7->pos).z = fVar4;
    (pMVar7->pos).w = pfVar5[0xb];
    dVar12 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    if (dVar12 <= 100.0) {
      (pMVar7->pos).x = pfVar5[8];
      (pMVar7->pos).y = pfVar5[9];
      (pMVar7->pos).z = pfVar5[10];
      (pMVar7->pos).w = pfVar5[0xb];
      pMVar7->scale = pfVar5[0x14];
    }
    else {
      fVar1 = (float)(100.0 / dVar12);
      dVar13 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar13 = (double)(fVar4 * fVar1);
      }
      dVar11 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar11 = (double)(fVar3 * fVar1);
      }
      dVar10 = dVar16;
      if (dVar16 - dVar12 < 0.0) {
        dVar10 = (double)(fVar2 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar13 = (double)(fVar4 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar11 = (double)(fVar3 * fVar1);
      }
      if (dVar12 - dVar16 < 0.0) {
        dVar10 = (double)(fVar2 * fVar1);
      }
      (pMVar7->pos).z = (float)(dVar13 + dVar9);
      (pMVar7->pos).y = (float)(dVar11 + dVar14);
      (pMVar7->pos).x = (float)(dVar10 + dVar15);
      pMVar7->scale = pfVar5[0x14] * fVar1;
    }
  }
  return pMVar7;
}


// 0x031e1b8 (0x408 bytes)
MobyInstance * Spawn_Moby267_GasparAsteroid(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  short sVar8;
  MobyInstance *pMVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  GPiece<8> local_50;
  float local_48;
  float local_44;
  
  sVar8 = MB_randInt(4);
  pMVar7 = CreateMoby(sVar8 + ASTEROID_0107);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    dVar16 = 0.0;
    dVar14 = 250.0;
    dVar9 = (double)MB_randRangeFloat(0.0,250.0);
    dVar10 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    fVar1 = (float)(dVar10 + 1.570796251296997);
    dVar17 = (double)(float)(3.141592502593994 - dVar10);
    if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
      dVar17 = dVar10;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    dVar11 = (double)(float)(-3.141592502593994 - dVar10);
    if ((double)(float)(-3.141592502593994 - dVar10) - dVar17 < 0.0) {
      dVar11 = dVar17;
    }
    dVar17 = 100.0;
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar10 = (double)(float)(dVar11 * dVar11);
    fVar6 = fVar4 * fVar4;
    dVar13 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar11));
    fVar3 = fVar6 * fVar6 * fVar4;
    dVar12 = (double)(float)(dVar10 * dVar13);
    fVar2 = fVar6 * fVar3;
    fVar1 = (float)((double)((float)(dVar10 * dVar12) * 2.601887e-06 +
                            (float)(dVar12 * -0.0001980741071747616 +
                                   (double)(float)(dVar13 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar10 * dVar11) *
                                                                  -0.16666656732559204 + dVar11))))
                    * dVar9 + 256.0);
    fVar3 = (float)((double)(fVar6 * fVar2 * 2.601887e-06 +
                            fVar2 * -0.0001980741 +
                            fVar3 * 0.0083330255 + fVar6 * fVar4 * -0.16666657 + fVar4) * dVar9 +
                   256.0);
    (pMVar7->pos).x = 1000.0;
    (pMVar7->pos).y = 500.0;
    dVar9 = (double)MB_randRangeFloat(200.0,(float)dVar14);
    (pMVar7->pos).z = (float)dVar9;
    fVar4 = (pMVar7->pos).x + fVar3;
    (pMVar7->pos).x = fVar4;
    (pMVar7->pos).y = (pMVar7->pos).y + fVar1;
    (pMVar7->pos).z = (float)(dVar9 + 100.0);
    *pfVar5 = fVar4;
    pfVar5[1] = (pMVar7->pos).y;
    pfVar5[2] = (pMVar7->pos).z;
    pfVar5[3] = (pMVar7->pos).w;
    uVar15 = 0x3fe0000000000000;
    dVar9 = (double)MB_randRangeFloat(0.5,1.0);
    pMVar7->scale = (float)((double)pMVar7->scale * dVar9);
    dVar14 = -0.015707964077591896;
    dVar10 = 0.015707964077591896;
    dVar9 = (double)MB_randRangeFloat(-0.015707964,0.015707964);
    pfVar5[0x10] = (float)dVar9;
    dVar9 = (double)MB_randRangeFloat((float)dVar14,(float)dVar10);
    pfVar5[0x11] = (float)dVar9;
    dVar9 = (double)GetGroundZ(uVar15,local_50,0);
    local_48 = (float)dVar9;
    if (dVar9 < 25.0) {
      local_48 = 25.0;
    }
    pfVar5[8] = fVar3;
    pfVar5[9] = fVar1;
    pfVar5[10] = local_48;
    pfVar5[0xb] = local_44;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pfVar5[0x13] = 1.4013e-45;
    dVar9 = (double)MB_randRangeFloat(110.0,130.0);
    pfVar5[0x15] = (float)(dVar9 * (double)g_FrameTime);
    pfVar5[0x14] = pMVar7->scale;
    dVar10 = -100.0;
    dVar9 = (double)MB_randRangeFloat(-100.0,(float)dVar17);
    *pfVar5 = (float)((double)*pfVar5 + dVar9);
    dVar9 = (double)MB_randRangeFloat((float)dVar10,(float)dVar17);
    pfVar5[1] = (float)((double)pfVar5[1] + dVar9);
    dVar14 = (double)GameCamera.posX;
    fVar1 = (float)((double)*pfVar5 - dVar14);
    (pMVar7->pos).x = fVar1;
    dVar10 = (double)GameCamera.posY;
    fVar3 = (float)((double)pfVar5[1] - dVar10);
    (pMVar7->pos).y = fVar3;
    dVar9 = (double)GameCamera.posZ;
    fVar4 = (float)((double)pfVar5[2] - dVar9);
    (pMVar7->pos).z = fVar4;
    (pMVar7->pos).w = pfVar5[3];
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
    if (dVar11 <= dVar17) {
      (pMVar7->pos).x = *pfVar5;
      (pMVar7->pos).y = pfVar5[1];
      (pMVar7->pos).z = pfVar5[2];
      (pMVar7->pos).w = pfVar5[3];
      fVar2 = pfVar5[0x14];
    }
    else {
      fVar2 = (float)(dVar17 / dVar11);
      dVar17 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar17 = (double)(fVar4 * fVar2);
      }
      dVar12 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar12 = (double)(fVar3 * fVar2);
      }
      dVar13 = dVar16;
      if (dVar16 - dVar11 < 0.0) {
        dVar13 = (double)(fVar1 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar17 = (double)(fVar4 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar12 = (double)(fVar3 * fVar2);
      }
      if (dVar11 - dVar16 < 0.0) {
        dVar13 = (double)(fVar1 * fVar2);
      }
      (pMVar7->pos).z = (float)(dVar17 + dVar9);
      (pMVar7->pos).y = (float)(dVar12 + dVar10);
      (pMVar7->pos).x = (float)(dVar13 + dVar14);
      fVar2 = pfVar5[0x14] * fVar2;
    }
    pMVar7->scale = fVar2;
    pfVar5[0x16] = -NAN;
    UpdateMobyTransform(pMVar7);
  }
  return pMVar7;
}


// 0x031e5f0 (0x444 bytes)
MobyInstance * M267_0031e5f0(float param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  short sVar12;
  MobyInstance *pMVar10;
  Vec4 *pVVar11;
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
  
  sVar12 = MB_randInt(4);
  pMVar10 = CreateMoby(sVar12 + ASTEROID_0107);
  if (pMVar10 != (MobyInstance *)0x0) {
    iVar4 = *(int *)((int)param_1 + 0x78);
    fVar1 = *(f32 *)((int)param_1 + 0x14);
    (pMVar10->pos).x = *(f32 *)((int)param_1 + 0x10);
    fVar2 = *(f32 *)((int)param_1 + 0x18);
    (pMVar10->pos).y = fVar1;
    fVar1 = *(f32 *)((int)param_1 + 0x1c);
    pfVar5 = (float *)pMVar10->pVar;
    (pMVar10->pos).z = fVar2;
    (pMVar10->pos).w = fVar1;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
    pfVar5[0x14] = param_1;
    fVar6 = *(float *)(iVar4 + 0x10);
    pfVar5[5] = 0.0;
    pfVar5[4] = fVar6;
    pfVar5[0x12] = 1.4013e-45;
    pMVar10->setByGroup = '\x01';
    pMVar10->updateDistance = -1;
    pMVar10->drawDistance = 0xff;
    pMVar10->enabled = '\x01';
    SetColorOfMoby(pMVar10,0x80,0x80,0x80);
    pMVar10->alpha = '\0';
    dVar13 = (double)MB_randRangeFloat(0.4,0.85);
    pMVar10->scale = (float)((double)pMVar10->scale * dVar13);
    dVar22 = -0.005235987715423107;
    dVar20 = 0.005235987715423107;
    dVar13 = (double)MB_randRangeFloat(-0.0052359877,0.0052359877);
    pfVar5[0x10] = (float)dVar13;
    dVar13 = (double)MB_randRangeFloat((float)dVar22,(float)dVar20);
    pfVar5[0x11] = (float)dVar13;
    if (-1 < (int)pfVar5[4]) {
      pSVar7 = Splines[(int)pfVar5[4]];
      dVar20 = (double)MB_randRangeFloat(-30.0,30.0);
      pVVar11 = pSVar7->points + pSVar7->cnt + -1;
      fVar6 = pSVar7->points[1].z - pSVar7->points[0].z;
      fVar3 = pVVar11->z - (float)((Spline *)(pVVar11 + -1))->cursor;
      fVar8 = fVar3 * (pSVar7->points[1].x - pSVar7->points[0].x) -
              (pVVar11->x - (float)((Spline *)(pVVar11 + -1))->cnt) * fVar6;
      dVar21 = 0.0;
      fVar6 = (pVVar11->y - (float)((Spline *)(pVVar11 + -1))->cap) * fVar6 -
              fVar3 * (pSVar7->points[1].y - pSVar7->points[0].y);
      pfVar5[2] = 0.0;
      pfVar5[3] = 0.0;
      dVar22 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8);
      dVar17 = (double)(fVar6 * (float)(dVar20 / dVar22));
      dVar16 = (double)(fVar8 * (float)(dVar20 / dVar22));
      dVar13 = dVar21;
      if (0.0 - dVar22 < 0.0) {
        dVar13 = dVar17;
      }
      dVar18 = dVar21;
      if (0.0 - dVar22 < 0.0) {
        dVar18 = dVar16;
      }
      if (dVar22 - 0.0 < 0.0) {
        dVar13 = dVar17;
      }
      if (dVar22 - 0.0 < 0.0) {
        dVar18 = dVar16;
      }
      *pfVar5 = (float)dVar13;
      pfVar5[1] = (float)dVar18;
      pVVar11 = pSVar7->points + pSVar7->cnt + -1;
      fVar3 = pVVar11->z - pSVar7->points[0].z;
      dVar19 = (double)(fVar3 * fVar8);
      dVar18 = (double)(fVar3 * fVar6);
      dVar17 = (double)((pVVar11->x - pSVar7->points[0].x) * fVar8 -
                       (pVVar11->y - pSVar7->points[0].y) * fVar6);
      dVar13 = (double)MB_randRangeFloat(0.0,5.0);
      fVar6 = *pfVar5;
      dVar16 = (double)SQRT((float)(dVar17 * dVar17 +
                                   (double)(float)(dVar18 * dVar18 +
                                                  --(double)(float)(dVar19 * dVar19))));
      dVar22 = (double)(float)(dVar13 / dVar16);
      dVar13 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar13 = (double)(float)(dVar17 * dVar22);
      }
      dVar14 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar14 = (double)(float)(dVar18 * dVar22);
      }
      dVar15 = dVar21;
      if (dVar21 - dVar16 < 0.0) {
        dVar15 = -(double)(float)(dVar19 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar13 = (double)(float)(dVar17 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar14 = (double)(float)(dVar18 * dVar22);
      }
      if (dVar16 - dVar21 < 0.0) {
        dVar15 = -(double)(float)(dVar19 * dVar22);
      }
      pfVar5[2] = (float)((double)pfVar5[2] + dVar13);
      pfVar5[1] = (float)((double)pfVar5[1] + dVar14);
      *pfVar5 = (float)((double)fVar6 + dVar15);
      pfVar5[8] = pSVar7->points[0].x;
      pfVar5[9] = pSVar7->points[0].y;
      pfVar5[10] = pSVar7->points[0].z;
      pfVar5[0xb] = pSVar7->points[0].w;
      pfVar5[0xc] = *(float *)(iVar4 + 0x30);
      pfVar5[0xd] = *(float *)(iVar4 + 0x34);
      pfVar5[0xe] = *(float *)(iVar4 + 0x38);
      pfVar5[0xf] = *(float *)(iVar4 + 0x3c);
      fVar8 = pSVar7->points[0].x + (float)((double)fVar6 + dVar15);
      (pMVar10->pos).x = fVar8;
      fVar9 = pSVar7->points[0].y + pfVar5[1];
      (pMVar10->pos).y = fVar9;
      fVar6 = pSVar7->points[0].z;
      fVar3 = pfVar5[2];
      (pMVar10->pos).w = pSVar7->points[0].w;
      fVar8 = fVar8 + GameCamera.posX;
      (pMVar10->pos).x = fVar8;
      fVar9 = fVar9 + GameCamera.posY;
      (pMVar10->pos).y = fVar9;
      fVar6 = fVar6 + fVar3 + GameCamera.posZ;
      (pMVar10->pos).z = fVar6;
      (pMVar10->pos).x = fVar8 - pfVar5[0xc];
      (pMVar10->pos).y = fVar9 - pfVar5[0xd];
      (pMVar10->pos).z = fVar6 - pfVar5[0xe];
      pfVar5[3] = (float)(dVar20 * 0.05000000074505806 + 10.0);
      pMVar10->scale = pMVar10->scale * (float)(dVar20 * 0.009999999776482582 + 1.0);
      pfVar5[3] = pfVar5[3] * g_FrameTime;
    }
    UpdateMobyTransform(pMVar10);
  }
  return pMVar10;
}


// 0x031ea48 (0x1ec bytes)
void M267_0031ea48(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  
  if ((byte)param_1->alpha < 3) {
    DeleteMoby(param_1);
  }
  else {
    param_1->alpha = param_1->alpha - 2;
    pfVar5 = (float *)param_1->pVar;
    fVar1 = *pfVar5;
    fVar6 = DAT_0071f408 * -0.01999998 + 1.0;
    fVar2 = pfVar5[1];
    *pfVar5 = fVar1 * fVar6;
    pfVar5[1] = fVar2 * fVar6;
    fVar7 = pfVar5[8] + fVar1 * fVar6;
    fVar1 = g_FrameTimeSq * 20.0;
    pfVar5[9] = pfVar5[9] + fVar2 * fVar6;
    pfVar5[8] = fVar7;
    fVar1 = pfVar5[2] * fVar6 - fVar1;
    pfVar5[2] = fVar1;
    pfVar5[10] = pfVar5[10] + fVar1;
    fVar11 = GameCamera.posX;
    fVar7 = fVar7 - GameCamera.posX;
    (param_1->pos).x = fVar7;
    fVar12 = GameCamera.posY;
    fVar2 = pfVar5[9] - GameCamera.posY;
    (param_1->pos).y = fVar2;
    fVar13 = GameCamera.posZ;
    fVar6 = pfVar5[10] - GameCamera.posZ;
    (param_1->pos).z = fVar6;
    (param_1->pos).w = pfVar5[0xb];
    fVar1 = (param_1->rotation).x;
    fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2);
    if (fVar10 <= 100.0) {
      (param_1->pos).x = pfVar5[8];
      (param_1->pos).y = pfVar5[9];
      (param_1->pos).z = pfVar5[10];
      (param_1->pos).w = pfVar5[0xb];
      fVar4 = pfVar5[0x14];
    }
    else {
      fVar4 = 100.0 / fVar10;
      fVar3 = 0.0;
      fVar9 = fVar3;
      if (0.0 - fVar10 < 0.0) {
        fVar9 = fVar6 * fVar4;
      }
      fVar8 = fVar3;
      if (0.0 - fVar10 < 0.0) {
        fVar8 = fVar2 * fVar4;
      }
      if (0.0 - fVar10 < 0.0) {
        fVar3 = fVar7 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar9 = fVar6 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar8 = fVar2 * fVar4;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar3 = fVar7 * fVar4;
      }
      (param_1->pos).z = fVar9 + fVar13;
      (param_1->pos).y = fVar8 + fVar12;
      (param_1->pos).x = fVar3 + fVar11;
      fVar4 = pfVar5[0x14] * fVar4;
    }
    param_1->scale = fVar4;
    dVar14 = (double)FastWrapRot(fVar1,pfVar5[0x10]);
    (param_1->rotation).x = (float)dVar14;
    dVar14 = (double)FastWrapRot((float)dVar14,pfVar5[0x11]);
    (param_1->rotation).y = (float)dVar14;
  }
  return;
}


// 0x031eca8 (0xf10 bytes)
void M267_0031eca8(MobyInstance *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  int iVar13;
  longlong lVar12;
  float fVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> local_1e0;
  GPiece<16> local_1d0;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  undefined4 local_140 [36];
  longlong local_b0;
  
  pfVar6 = (float *)param_1->pVar;
  fVar14 = pfVar6[8] - *pfVar6;
  fVar3 = pfVar6[9] - pfVar6[1];
  fVar4 = pfVar6[10] - pfVar6[2];
  fVar2 = SQRT(fVar4 * fVar4 + fVar14 * fVar14 + fVar3 * fVar3);
  dVar23 = 0.0;
  fVar11 = pfVar6[0x15] / fVar2;
  dVar18 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar18 = (double)(fVar3 * fVar11);
  }
  dVar19 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(fVar14 * fVar11);
  }
  dVar20 = dVar23;
  if (0.0 - fVar2 < 0.0) {
    dVar20 = (double)(fVar4 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(fVar14 * fVar11);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar20 = (double)(fVar4 * fVar11);
  }
  fVar14 = *pfVar6;
  *pfVar6 = (float)((double)fVar14 + dVar19);
  pfVar6[1] = pfVar6[1] + (float)dVar18;
  pfVar6[2] = pfVar6[2] + (float)dVar20;
  dVar18 = (double)GameCamera.posX;
  fVar14 = (float)((double)(float)((double)fVar14 + dVar19) - dVar18);
  (param_1->pos).x = fVar14;
  dVar19 = (double)GameCamera.posY;
  fVar3 = (float)((double)pfVar6[1] - dVar19);
  (param_1->pos).y = fVar3;
  dVar20 = (double)GameCamera.posZ;
  fVar4 = (float)((double)pfVar6[2] - dVar20);
  (param_1->pos).z = fVar4;
  dVar25 = (double)SQRT(fVar4 * fVar4 + fVar14 * fVar14 + fVar3 * fVar3);
  (param_1->pos).w = pfVar6[3];
  if ((dVar25 <= 100.0) ||
     (uVar9 = (int)pfVar6[2] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x41d80001)) {
    (param_1->pos).x = *pfVar6;
    (param_1->pos).y = pfVar6[1];
    (param_1->pos).z = pfVar6[2];
    (param_1->pos).w = pfVar6[3];
    fVar2 = pfVar6[0x14];
  }
  else {
    fVar2 = (float)(100.0 / dVar25);
    dVar24 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar24 = (double)(fVar4 * fVar2);
    }
    dVar26 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar26 = (double)(fVar3 * fVar2);
    }
    dVar16 = dVar23;
    if (0.0 - dVar25 < 0.0) {
      dVar16 = (double)(fVar14 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar24 = (double)(fVar4 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar26 = (double)(fVar3 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar16 = (double)(fVar14 * fVar2);
    }
    (param_1->pos).z = (float)(dVar24 + dVar20);
    (param_1->pos).y = (float)(dVar26 + dVar19);
    (param_1->pos).x = (float)(dVar16 + dVar18);
    fVar2 = pfVar6[0x14] * fVar2;
  }
  param_1->scale = fVar2;
  dVar18 = (double)FastWrapRot((param_1->rotation).x,pfVar6[0x10]);
  (param_1->rotation).x = (float)dVar18;
  dVar18 = (double)FastWrapRot((float)dVar18,pfVar6[0x11]);
  uVar5 = param_1->state;
  (param_1->rotation).y = (float)dVar18;
  if (uVar5 == '\0') {
    uVar9 = (int)pfVar6[2] >> 0x1f;
    if ((((int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x42c80000) &&
        (uVar9 = (int)*pfVar6 >> 0x1f, (int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9) < 0x43fa0000)) &&
       (uVar9 = (int)pfVar6[1] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[1]) - uVar9) < 0x43fa0000))
    {
      dVar19 = -5.0;
      dVar18 = 5.0;
      MB_randRangeFloat(-5.0,5.0);
      MB_randRangeFloat((float)dVar19,(float)dVar18);
      MB_randRangeFloat((float)dVar19,(float)dVar18);
      iVar13 = CollLine(local_1d0,local_1c0,4,param_1,0);
      if ((iVar13 != 0) &&
         (0x41d40000 <
          (int)(((uint)((int)g_CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)g_CollOutput.ip.z) -
               ((int)g_CollOutput.ip.z >> 0x1f)))) {
        iVar13 = 0;
        iVar15 = 0;
        if (dVar25 - 7.0 < 0.0) {
          dVar23 = (double)(float)(7.0 - dVar25);
        }
        dVar26 = 8.0;
        dVar24 = 10.0;
        uVar22 = 0x41186a0000000000;
        dVar25 = 15.5;
        dVar20 = 20.5;
        dVar19 = 25.5;
        dVar18 = 30.5;
        do {
          dVar16 = (double)MB_randRangeFloat((float)dVar26,(float)dVar24);
          dVar17 = (double)g_FrameTime;
          local_140[0] = 0x4f008fff;
          local_140[1] = 0x4f008fff;
          local_140[2] = 0x4f007fff;
          local_140[3] = 0x4f006fff;
          local_140[4] = 0x2fffffff;
          local_140[5] = 0x2fffffff;
          dVar21 = (double)(float)(dVar16 * dVar17 - (double)(float)(dVar17 * dVar23));
          local_140[6] = 0x2f005f7f;
          local_140[7] = 0x2f004f7f;
          local_140[8] = 0x2f003f7f;
          local_140[9] = 0x2f00004f;
          local_140[10] = 0x2f000000;
          local_140[0xb] = 0x3f000000;
          lVar12 = MB_randInt(dVar16,dVar17,(double)(float)(dVar17 * dVar23),6);
          uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2));
          lVar12 = MB_randInt(6);
          uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar25),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar18);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
          SpawnPart_11(uVar22,dVar21,pfVar6,local_1b0,uVar7,uVar8);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
        do {
          M267_0031de18(param_1,local_1e0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 10);
        fVar14 = (float)sound_MobyPlay_oClass(6,0,param_1,0xc1);
        pfVar6[0x16] = fVar14;
        if (fVar14 != 0.0) {
          sound_SetVol((int)fVar14,0x800);
        }
        if ((g_heroState != TURRET_PLANE_UI) &&
           (fVar14 = SQRT((pfVar6[2] - GameCamera.posZ) * (pfVar6[2] - GameCamera.posZ) +
                          (*pfVar6 - GameCamera.posX) * (*pfVar6 - GameCamera.posX) +
                          (pfVar6[1] - GameCamera.posY) * (pfVar6[1] - GameCamera.posY)),
           fVar14 < 15.0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          GameCamera.shake.strength = (64.0 - fVar14) * 0.01;
          auVar27 = loadVectorLeftIndexed(0x44,0x31ec34);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.shake.time =
               storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x168,
                          0x9513c0);
        }
        param_1->state = param_1->state + '\x01';
        return;
      }
    }
    if ((pfVar6[10] == 25.0) &&
       (uVar9 = (int)pfVar6[2] >> 0x1f, (int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < 0x41d80000))
    {
      iVar13 = 0;
      dVar19 = 4.0;
      dVar18 = 12.0;
      do {
        M417_00367688((double)(float)((double)pfVar6[0x14] * dVar19),
                      (double)(float)((double)pfVar6[0x14] * dVar18),param_1,local_1a0,local_1e0);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 5);
      pfVar6[0x15] = pfVar6[0x15] * (DAT_0071f408 * -0.100000024 + 1.0);
      if ((int)pfVar6[0x16] < 1) {
        fVar14 = (float)sound_MobyPlay_oClass(0,0,param_1,0x107);
        pfVar6[0x16] = fVar14;
      }
    }
    uVar9 = (int)pfVar6[2] >> 0x1f;
    uVar10 = (int)pfVar6[10] >> 0x1f;
    iVar13 = (uVar10 >> 1 ^ (uint)pfVar6[10]) - uVar10;
    if ((int)((uVar9 >> 1 ^ (uint)pfVar6[2]) - uVar9) < iVar13) {
      if (0x41d40000 < iVar13) {
        iVar13 = 0;
        iVar15 = 0;
        if (dVar25 - 7.0 < 0.0) {
          dVar23 = (double)(float)(7.0 - dVar25);
        }
        dVar17 = 8.0;
        dVar16 = 10.0;
        dVar26 = -3.0;
        dVar24 = 3.0;
        uVar22 = 0x41324f8000000000;
        dVar25 = 15.5;
        dVar20 = 20.5;
        dVar19 = 25.5;
        dVar18 = 30.5;
        do {
          dVar21 = (double)MB_randRangeFloat((float)dVar17,(float)dVar16);
          local_140[0xc] = 0x4f008fff;
          local_140[0xd] = 0x4f008fff;
          local_140[0xf] = 0x4f006fff;
          local_140[0x10] = 0x2fffffff;
          local_140[0xe] = 0x4f007fff;
          local_140[0x11] = 0x2fffffff;
          dVar21 = (double)(float)(dVar21 * (double)g_FrameTime -
                                  (double)(float)((double)g_FrameTime * dVar23));
          local_140[0x12] = 0x2f005f7f;
          local_140[0x13] = 0x2f004f7f;
          local_140[0x14] = 0x2f003f7f;
          local_140[0x15] = 0x2f00004f;
          local_140[0x16] = 0x2f000000;
          local_140[0x17] = 0x3f000000;
          MB_randRangeFloat((float)dVar26,(float)dVar24);
          MB_randRangeFloat((float)dVar26,(float)dVar24);
          MB_randRangeFloat((float)dVar26,(float)dVar24);
          lVar12 = MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x30);
          lVar12 = MB_randInt(6);
          uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x48);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar25),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar18);
          local_b0 = (longlong)iVar1;
          MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
          SpawnPart_11(uVar22,dVar21,local_180,local_190,uVar7,uVar8);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
        do {
          M267_0031de18(param_1,local_1e0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 10);
        fVar14 = (float)sound_MobyPlay_oClass(6,0,param_1,0xc1);
        pfVar6[0x16] = fVar14;
        if (fVar14 != 0.0) {
          sound_SetVol((int)fVar14,0x800);
        }
        if ((g_heroState != TURRET_PLANE_UI) &&
           (fVar14 = SQRT((pfVar6[2] - GameCamera.posZ) * (pfVar6[2] - GameCamera.posZ) +
                          (*pfVar6 - GameCamera.posX) * (*pfVar6 - GameCamera.posX) +
                          (pfVar6[1] - GameCamera.posY) * (pfVar6[1] - GameCamera.posY)),
           fVar14 < 15.0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          GameCamera.shake.strength = (64.0 - fVar14) * 0.01;
          auVar27 = loadVectorLeftIndexed(0x44,0x31ec34);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.shake.time =
               storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x168,
                          0x9513c0);
        }
      }
      param_1->state = param_1->state + '\x01';
    }
  }
  else {
    param_1->state = uVar5 + '\x01';
    if (pfVar6[10] == 25.0) {
      iVar13 = 0;
      param_1->enabled = '\0';
      param_1->drawDistance = 0;
      dVar23 = 4.0;
      dVar18 = 12.0;
      do {
        M417_00367688((double)(float)((double)pfVar6[0x14] * dVar23),
                      (double)(float)((double)pfVar6[0x14] * dVar18),param_1,local_170,local_1e0);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 2);
      local_b0 = (longlong)(int)(animationSpeed * 10.5);
      if ((int)(animationSpeed * 10.5) < (int)(uint)param_1->state) {
        DeleteMoby(param_1);
      }
    }
    else {
      iVar13 = 0;
      if (dVar25 - 7.0 < 0.0) {
        dVar23 = (double)(float)(7.0 - dVar25);
      }
      dVar17 = 8.0;
      dVar16 = 10.0;
      dVar26 = -1.0;
      dVar24 = 1.0;
      uVar22 = 0x41324f8000000000;
      dVar25 = 15.5;
      dVar20 = 20.5;
      dVar19 = 25.5;
      dVar18 = 30.5;
      do {
        dVar21 = (double)MB_randRangeFloat((float)dVar17,(float)dVar16);
        local_140[0x18] = 0x4f008fff;
        local_140[0x19] = 0x4f008fff;
        local_140[0x1b] = 0x4f006fff;
        local_140[0x1c] = 0x2fffffff;
        local_140[0x1a] = 0x4f007fff;
        local_140[0x1d] = 0x2fffffff;
        dVar21 = (double)(float)(dVar21 * (double)g_FrameTime -
                                (double)(float)((double)g_FrameTime * dVar23));
        local_140[0x1e] = 0x2f005f7f;
        local_140[0x1f] = 0x2f004f7f;
        local_140[0x20] = 0x2f003f7f;
        local_140[0x21] = 0x2f00004f;
        local_140[0x22] = 0x2f000000;
        local_140[0x23] = 0x3f000000;
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        lVar12 = MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x60);
        lVar12 = MB_randInt(6);
        uVar8 = *(undefined4 *)((int)local_140 + (int)(lVar12 << 2) + 0x78);
        iVar15 = (int)((double)animationSpeed * dVar20);
        local_b0 = (longlong)iVar15;
        MB_randRange((int)((double)animationSpeed * dVar25),iVar15);
        iVar15 = (int)((double)animationSpeed * dVar18);
        local_b0 = (longlong)iVar15;
        MB_randRange((int)((double)animationSpeed * dVar19),iVar15);
        SpawnPart_11(uVar22,dVar21,local_150,local_160,uVar7,uVar8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 3);
      if (2 < param_1->state) {
        DeleteMoby(param_1);
      }
    }
  }
  return;
}


// shared update function, registered for oClasses 263, 264, 265, 266, 267
// 0x031fbe0 (0x990 bytes)
// inlined: FastRSqrt @0x320294, FastRSqrt @0x3203c0
/* Moby 263
   Moby 264
   Moby 265
   Moby 266
   Moby 267 */

void UpdateMoby_263(MobyInstance *moby)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Vec4 *pVVar16;
  int iVar17;
  int iVar19;
  longlong lVar18;
  float *pfVar20;
  char cVar23;
  int iVar21;
  float fVar22;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 in_LR;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  pfVar7 = (float *)moby->pVar;
  uVar28 = ZEXT48(pfVar7);
  if (pfVar7[0x13] == 2.8026e-45) {
    M267_0031ea48(moby);
  }
  else if (pfVar7[0x13] == 1.4013e-45) {
    M267_0031eca8(moby);
  }
  else {
    cVar23 = moby->setByGroup;
    if ((cVar23 == '\0') && (pfVar7[0x12] == 0.0)) {
      dVar39 = 0.0;
      pfVar7[0xe] = 0.0;
      pfVar7[0xd] = 0.0;
      pfVar7[0xc] = 0.0;
      pfVar7[3] = g_FrameTime * 10.0;
      if (-1 < (int)pfVar7[4]) {
        auVar43 = ZEXT416(0);
        auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        pSVar9 = Splines[(int)pfVar7[4]];
        uVar27 = ZEXT48(pSVar9);
        auVar41 = loadVectorLeftIndexed(in_LR,uVar27);
        auVar43 = auVar40;
        auVar45 = auVar40;
        if (0 < pSVar9->cnt) {
          auVar43 = ZEXT416(0);
          auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          iVar21 = 0;
          lVar18 = uVar27 + 0x14;
          lVar26 = uVar27 + 0x18;
          auVar43 = auVar40;
          auVar45 = auVar40;
          uVar25 = uVar27;
          do {
            uVar25 = uVar25 + 0x10;
            auVar42 = loadVectorLeftIndexed(in_LR,uVar25);
            auVar41 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar46 = vectorAddFloatingPoint(auVar45,auVar42);
            auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar44 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
            iVar21 = iVar21 + 1;
            auVar45 = vectorAddFloatingPoint
                                (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                 auVar42);
            auVar42 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x30,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xc) & 0xfffffffc) = uVar10;
            auVar46 = loadVectorLeftIndexed(in_LR,lVar18);
            auVar42 = vectorAddFloatingPoint(auVar43,auVar46);
            auVar43 = vectorAddFloatingPoint
                                (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                                 auVar46);
            auVar41 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x34,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar10;
            auVar42 = loadVectorLeftIndexed(in_LR,lVar26);
            auVar41 = vectorAddFloatingPoint(auVar40,auVar42);
            auVar40 = vectorAddFloatingPoint
                                (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                                 auVar42);
            auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x38,
                                uVar28);
            *(undefined4 *)((uint)(pfVar7 + 0xe) & 0xfffffffc) = uVar10;
            auVar41 = loadVectorLeftIndexed(in_LR,uVar27);
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
          } while (iVar21 < pSVar9->cnt);
        }
        auVar44 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = ZEXT416(0xffffffff);
        auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar44 = vectorConvertFromSignedFixedPointWord
                            (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0);
        auVar41 = ZEXT416(0xffffffff);
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar41 = ZEXT416(0xffffffff);
        auVar49 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = loadVectorLeftIndexed(0xc,0x31fbb8);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        auVar41 = ZEXT416(0xffffffff);
        auVar51 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar41 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        iVar21 = 0;
        dVar38 = 1.0;
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar44,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar47,auVar43,auVar42);
        auVar47 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar49 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar50 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar44,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar48);
        auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar44,auVar46);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar47);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar43,
                             auVar49);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar43,
                             auVar50);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar43,
                             auVar48);
        uVar10 = storeVectorElementWordIndexed(auVar44,0x30,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xc) & 0xfffffffc) = uVar10;
        uVar10 = storeVectorElementWordIndexed(auVar45,0x34,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar10;
        uVar10 = storeVectorElementWordIndexed(auVar43,0x38,uVar28);
        *(undefined4 *)((uint)(pfVar7 + 0xe) & 0xfffffffc) = uVar10;
        pfVar7[0xe] = pSVar9->points[0].z - 10.0;
        dVar37 = 32.0;
        do {
          iVar19 = Spawn_Moby267_GasparAsteroid();
          if (iVar19 != 0) {
            pfVar8 = *(float **)(iVar19 + 0x78);
            dVar36 = (double)(pfVar8[9] - pfVar8[1]);
            dVar35 = (double)(pfVar8[8] - *pfVar8);
            dVar34 = (double)(pfVar8[10] - pfVar8[2]);
            dVar33 = (double)SQRT((float)(dVar34 * dVar34 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar36 * dVar36))));
            dVar29 = (double)MB_randRangeFloat((float)dVar39,(float)(dVar33 - dVar37));
            dVar30 = (double)(float)(dVar29 / dVar33);
            dVar29 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar29 = (double)(float)(dVar34 * dVar30);
            }
            dVar32 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar32 = (double)(float)(dVar36 * dVar30);
            }
            dVar31 = dVar39;
            if (dVar39 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar35 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar29 = (double)(float)(dVar34 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar32 = (double)(float)(dVar36 * dVar30);
            }
            if (dVar33 - dVar39 < 0.0) {
              dVar31 = (double)(float)(dVar35 * dVar30);
            }
            pfVar8[2] = (float)((double)pfVar8[2] + dVar29);
            pfVar8[1] = (float)((double)pfVar8[1] + dVar32);
            *pfVar8 = (float)((double)*pfVar8 + dVar31);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x17);
        iVar21 = 0;
        do {
          iVar19 = M267_0031e5f0(moby);
          if (iVar19 != 0) {
            pfVar8 = *(float **)(iVar19 + 0x78);
            lVar18 = MB_randInt(pSVar9->cnt + -2);
            dVar37 = (double)MB_randRangeFloat((float)dVar39,(float)dVar38);
            pfVar8[5] = (float)lVar18;
            iVar17 = (int)(lVar18 << 4);
            pfVar24 = (float *)((int)&pSVar9->points[1].x + iVar17);
            pfVar20 = (float *)((int)&pSVar9->points[0].x + iVar17);
            fVar2 = pfVar24[1];
            fVar3 = pfVar20[1];
            fVar4 = pfVar24[2];
            fVar5 = pfVar20[2];
            fVar6 = pfVar24[3];
            fVar22 = (float)((double)(float)((double)*pfVar24 - (double)*pfVar20) * dVar37 +
                            (double)*pfVar20);
            pfVar8[8] = fVar22;
            pfVar8[9] = (float)((double)(fVar2 - fVar3) * dVar37 + (double)pfVar20[1]);
            fVar2 = pfVar20[2];
            pfVar8[0xb] = fVar6;
            pfVar8[10] = (float)((double)(fVar4 - fVar5) * dVar37 + (double)fVar2);
            *(float *)(iVar19 + 0x10) = fVar22;
            *(float *)(iVar19 + 0x14) = pfVar8[9];
            *(float *)(iVar19 + 0x18) = pfVar8[10];
            *(float *)(iVar19 + 0x1c) = pfVar8[0xb];
            fVar3 = pSVar9->points[0].x + *pfVar8;
            *(float *)(iVar19 + 0x10) = fVar3;
            fVar4 = pSVar9->points[0].y + pfVar8[1];
            *(float *)(iVar19 + 0x14) = fVar4;
            fVar22 = pSVar9->points[0].z;
            fVar2 = pfVar8[2];
            *(float *)(iVar19 + 0x1c) = pSVar9->points[0].w;
            fVar3 = fVar3 + GameCamera.posX;
            *(float *)(iVar19 + 0x10) = fVar3;
            fVar4 = fVar4 + GameCamera.posY;
            *(float *)(iVar19 + 0x14) = fVar4;
            fVar22 = fVar22 + fVar2 + GameCamera.posZ;
            *(float *)(iVar19 + 0x18) = fVar22;
            *(float *)(iVar19 + 0x10) = fVar3 - pfVar8[0xc];
            *(float *)(iVar19 + 0x14) = fVar4 - pfVar8[0xd];
            *(float *)(iVar19 + 0x18) = fVar22 - pfVar8[0xe];
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x32);
      }
      pfVar7[0x12] = 1.4013e-45;
      cVar23 = moby->setByGroup;
    }
    if (cVar23 == '\0') {
      iVar21 = MB_randInt((int)(animationSpeed * 40.5));
      if (iVar21 == 0) {
        Spawn_Moby267_GasparAsteroid();
      }
    }
    moby->updateDistance = -1;
    fVar22 = pfVar7[4];
    moby->drawDistance = 0xff;
    if (-1 < (int)fVar22) {
      fVar22 = pfVar7[4];
      (moby->pos).x = pfVar7[8];
      (moby->pos).y = pfVar7[9];
      cVar23 = moby->setByGroup;
      (moby->pos).z = pfVar7[10];
      pSVar9 = Splines[(int)fVar22];
      (moby->pos).w = pfVar7[0xb];
      if (((cVar23 == '\0') && ((int)pfVar7[6] < 0x32)) &&
         (iVar21 = FastDecTimerS32(uVar28 + 0x1c), iVar21 != 0)) {
        fVar22 = animationSpeed * 15.5;
        iVar21 = MB_randInt((int)(animationSpeed * 30.5));
        pfVar7[7] = (float)((int)fVar22 + iVar21);
        M267_0031e5f0(moby);
      }
      dVar39 = (double)FastWrapRot((moby->rotation).x,pfVar7[0x10]);
      (moby->rotation).x = (float)dVar39;
      dVar39 = (double)FastWrapRot((moby->rotation).y,pfVar7[0x11]);
      (moby->rotation).y = (float)dVar39;
      fVar22 = (float)GetPathPnt(pfVar7[3],moby,pSVar9,(Vec4 *)&moby->pos,(int)pfVar7[5],1);
      pfVar7[5] = fVar22;
      if (fVar22 == (float)(pSVar9->cnt + -1)) {
        if (moby->setByGroup == '\0') {
          pfVar7[5] = 0.0;
          (moby->pos).x = pSVar9->points[0].x;
          (moby->pos).y = pSVar9->points[0].y;
          (moby->pos).z = pSVar9->points[0].z;
          (moby->pos).w = pSVar9->points[0].w;
        }
        else {
          iVar21 = *(int *)(*(int *)((int)moby->pVar + 0x50) + 0x78);
          *(int *)(iVar21 + 0x18) = *(int *)(iVar21 + 0x18) + -1;
          DeleteMoby(moby);
        }
      }
      if (pfVar7[5] == 0.0) {
        fVar22 = pSVar9->points[0].y;
        fVar5 = pSVar9->points[1].y - fVar22;
        fVar2 = pSVar9->points[0].x;
        fVar6 = pSVar9->points[1].x - fVar2;
        fVar3 = pSVar9->points[0].z;
        fVar15 = pSVar9->points[1].z - fVar3;
        fVar4 = 0.0;
        fVar14 = fVar15 * fVar15 + fVar6 * fVar6 + fVar5 * fVar5;
        fVar12 = fVar4;
        fVar11 = fVar4;
        fVar13 = fVar4;
        if (SQRT(fVar14) != 0.0) {
          fVar13 = 1.0 / SQRT(fVar14);
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
          fVar12 = fVar6 * fVar13;
          fVar11 = fVar5 * fVar13;
          fVar13 = fVar15 * fVar13;
        }
        fVar22 = fVar13 * ((moby->pos).z - fVar3) +
                 fVar12 * ((moby->pos).x - fVar2) + fVar11 * ((moby->pos).y - fVar22);
        if (fVar22 - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        uVar1 = (uint)((fVar22 * 128.0) / SQRT(fVar14));
        moby->alpha = (s8)uVar1;
        if (0x80 < (uVar1 & 0xff)) {
          moby->alpha = -0x80;
        }
      }
      else if (pfVar7[5] == (float)(pSVar9->cnt + -2)) {
        pVVar16 = pSVar9->points + pSVar9->cnt + -1;
        fVar2 = (float)((Spline *)(pVVar16 + -1))->cap - pVVar16->y;
        fVar3 = (float)((Spline *)(pVVar16 + -1))->cnt - pVVar16->x;
        fVar12 = (float)((Spline *)(pVVar16 + -1))->cursor - pVVar16->z;
        fVar22 = 0.0;
        fVar11 = fVar12 * fVar12 + fVar3 * fVar3 + fVar2 * fVar2;
        fVar5 = fVar22;
        fVar4 = fVar22;
        fVar6 = fVar22;
        if (SQRT(fVar11) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar11);
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar11 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar5 = fVar3 * fVar6;
          fVar4 = fVar2 * fVar6;
          fVar6 = fVar12 * fVar6;
        }
        fVar2 = fVar6 * ((moby->pos).z - pVVar16->z) +
                fVar5 * ((moby->pos).x - pVVar16->x) + fVar4 * ((moby->pos).y - pVVar16->y);
        if (fVar2 - 0.0 < 0.0) {
          fVar2 = fVar22;
        }
        uVar1 = (uint)((fVar2 * 128.0) / SQRT(fVar11));
        moby->alpha = (s8)uVar1;
        if (0x80 < (uVar1 & 0xff)) {
          moby->alpha = -0x80;
        }
      }
      else {
        moby->alpha = -0x80;
      }
      pfVar7[8] = (moby->pos).x;
      pfVar7[9] = (moby->pos).y;
      pfVar7[10] = (moby->pos).z;
      pfVar7[0xb] = (moby->pos).w;
      fVar2 = (moby->pos).x + *pfVar7;
      (moby->pos).x = fVar2;
      fVar3 = (moby->pos).y + pfVar7[1];
      (moby->pos).y = fVar3;
      fVar2 = fVar2 + GameCamera.posX;
      fVar22 = pfVar7[2];
      (moby->pos).x = fVar2;
      fVar3 = fVar3 + GameCamera.posY;
      (moby->pos).y = fVar3;
      fVar22 = (moby->pos).z + fVar22 + GameCamera.posZ;
      (moby->pos).z = fVar22;
      (moby->pos).x = fVar2 - pfVar7[0xc];
      (moby->pos).y = fVar3 - pfVar7[0xd];
      (moby->pos).z = fVar22 - pfVar7[0xe];
    }
  }
  return;
}


// 0x0320570 (0x14 bytes)
void M267_00320570(void)

{
  DAT_0080009c = 0x10000;
  return;
}



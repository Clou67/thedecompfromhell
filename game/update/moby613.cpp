// game/update/moby613.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3dd32c-0x3dd9ac
#include <math.h>
#include "game/update/moby613.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x03dd32c (0x14 bytes)
void M613_003dd32c(void)

{
  DAT_00853a68 = 0x10000;
  return;
}


// 0x03dd370 (0x63c bytes)
/* Moby 613 */

void UpdateMoby_613(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  Spline *pSVar6;
  short sVar7;
  int iVar8;
  Spline *pSVar9;
  undefined8 in_r8;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  GPiece<4> auStack_50;
  GPiece<20> auStack_4c;
  
  pfVar5 = (float *)moby->pVar;
  if ((pfVar5 != (float *)0x0) && (pfVar5[8] != -NAN)) {
    pSVar6 = Splines[(int)pfVar5[8]];
    if (*(short *)((int)pfVar5 + 0x2e) == 0) {
      iVar8 = 0;
      *(undefined2 *)((int)pfVar5 + 0x2e) = 1;
      pSVar9 = pSVar6;
      if (0 < pSVar6->cnt + -1) {
        do {
          fVar1 = pSVar9->points[0].y - pSVar9->points[1].y;
          fVar2 = pSVar9->points[0].x - pSVar9->points[1].x;
          fVar3 = pSVar9->points[0].z - pSVar9->points[1].z;
          iVar8 = iVar8 + 1;
          pSVar9->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar8 < pSVar6->cnt + -1);
      }
      fVar1 = pSVar6->points[iVar8].y - pSVar6->points[0].y;
      fVar2 = pSVar6->points[iVar8].x - pSVar6->points[0].x;
      fVar3 = pSVar6->points[iVar8].z - pSVar6->points[0].z;
      pSVar6->points[iVar8].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      moby->updateDistance = -1;
    }
    if ((((g_heroStateType == 0x12 || g_heroStateType == 0x11) ||
         (DAT_0096bd74 == 0x12 || DAT_0096bd74 == 0x11)) || (g_heroState == WATER_JUMP)) ||
       (DAT_0096bd70 == 0x12)) {
      dVar16 = 0.0;
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar6,&g_heroPosition,&local_70,auStack_50
                 ,auStack_4c,in_r8,0);
      iVar8 = MB_PathMoveDist(0x4000000000000000,pSVar6,&local_60,auStack_50,auStack_4c);
      sVar7 = DAT_00969eb8;
      fVar1 = SQRT((g_heroPosition.x - local_70) * (g_heroPosition.x - local_70) +
                   (g_heroPosition.y - local_6c) * (g_heroPosition.y - local_6c));
      if (fVar1 <= pfVar5[10]) {
        if ((g_heroStateType == 0x11) || (g_heroStateType == 0x12)) {
          if (fVar1 <= DAT_0096bf98) {
            DAT_0096bf98 = fVar1;
            if (iVar8 == 0) {
              fVar2 = local_5c - local_6c;
              fVar3 = local_60 - local_70;
              dVar11 = (double)SQRT((local_58 - local_68) * (local_58 - local_68) +
                                    fVar3 * fVar3 + fVar2 * fVar2);
              fVar1 = (float)((double)(g_FrameTimeSq * 7.0) / dVar11);
              pfVar5[2] = 0.0;
              dVar10 = (double)(fVar2 * fVar1);
              dVar13 = (double)(fVar3 * fVar1);
              dVar14 = dVar16;
              if (dVar16 - dVar11 < 0.0) {
                dVar14 = dVar10;
              }
              dVar12 = dVar16;
              if (dVar16 - dVar11 < 0.0) {
                dVar12 = dVar13;
              }
              if (dVar11 - dVar16 < 0.0) {
                dVar14 = dVar10;
              }
              if (dVar11 - dVar16 < 0.0) {
                dVar12 = dVar13;
              }
              dVar11 = (double)(float)((double)pfVar5[1] + dVar14);
              dVar10 = (double)(float)((double)*pfVar5 + dVar12);
              *pfVar5 = (float)((double)*pfVar5 + dVar12);
              pfVar5[1] = (float)((double)pfVar5[1] + dVar14);
              dVar14 = (double)SQRT((float)(dVar10 * dVar10 + (double)(float)(dVar11 * dVar11)));
              if ((double)pfVar5[9] < dVar14) {
                dVar12 = (double)(float)((double)pfVar5[9] / dVar14);
                pfVar5[2] = 0.0;
                dVar13 = (double)(float)(dVar10 * dVar12);
                dVar11 = (double)(float)(dVar11 * dVar12);
                dVar10 = dVar16;
                if (dVar16 - dVar14 < 0.0) {
                  dVar10 = dVar13;
                }
                dVar12 = dVar16;
                if (dVar16 - dVar14 < 0.0) {
                  dVar12 = dVar11;
                }
                if (dVar14 - dVar16 < 0.0) {
                  dVar10 = dVar13;
                }
                if (dVar14 - dVar16 < 0.0) {
                  dVar12 = dVar11;
                }
                *pfVar5 = (float)dVar10;
                pfVar5[1] = (float)dVar12;
              }
              DAT_00969dd0 = (float)dVar10;
              DAT_00969dd4 = pfVar5[1];
              DAT_00969dd8 = pfVar5[2];
              DAT_00969ddc = pfVar5[3];
              if (*(short *)(pfVar5 + 0xb) != 0) {
                dVar12 = (double)(local_6c - g_heroPosition.y);
                dVar15 = (double)(local_70 - g_heroPosition.x);
                dVar13 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar12 * dVar12)));
                dVar14 = dVar12;
                dVar11 = dVar15;
                if (((double)(pfVar5[9] * 0.4) < dVar13) &&
                   (dVar14 = dVar16, dVar11 = dVar16, dVar13 != dVar16)) {
                  dVar16 = (double)(float)((double)(pfVar5[9] * 0.4) / dVar13);
                  dVar14 = (double)(float)(dVar16 * dVar12);
                  dVar11 = (double)(float)(dVar16 * dVar15);
                }
                DAT_00969dd0 = (float)(dVar10 + dVar11);
                DAT_00969dd4 = (float)((double)DAT_00969dd4 + dVar14);
              }
            }
            else {
              fVar2 = pfVar5[1];
              fVar3 = *pfVar5;
              fVar4 = pfVar5[2];
              dVar10 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
              fVar1 = (float)((double)(float)(dVar10 * (double)(DAT_0071f408 * -0.004999995 + 1.0))
                             / dVar10);
              dVar14 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar14 = (double)(fVar2 * fVar1);
              }
              dVar11 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar11 = (double)(fVar4 * fVar1);
              }
              dVar13 = dVar16;
              if (dVar16 - dVar10 < 0.0) {
                dVar13 = (double)(fVar3 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar14 = (double)(fVar2 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar11 = (double)(fVar4 * fVar1);
              }
              if (dVar10 - dVar16 < 0.0) {
                dVar13 = (double)(fVar3 * fVar1);
              }
              pfVar5[1] = (float)dVar14;
              pfVar5[2] = (float)dVar11;
              *pfVar5 = (float)dVar13;
              DAT_00969dd0 = (float)dVar13;
              DAT_00969dd4 = pfVar5[1];
              DAT_00969dd8 = pfVar5[2];
              DAT_00969ddc = pfVar5[3];
            }
            if (((g_heroStateType == 0x12) && (DAT_0096bd70 == 0x12)) &&
               (g_heroStateTimer < (int)(animationSpeed * 3.5))) {
              if (g_FrameTime * 1.5 < g_storedNeutralSpeed) {
                g_storedNeutralSpeed = g_FrameTime * 1.5;
              }
              DAT_00969e3c = 0;
              DAT_00969e38 = 0;
              DAT_00969e34 = 0;
              g_heroExternalMomentum = 0;
            }
          }
        }
        else if (((DAT_0096bd74 == 0x12) || (DAT_0096bd80 == 0x12)) &&
                ((g_heroStateType == 4 || (g_heroStateType == 5)))) {
          fVar2 = pfVar5[1];
          fVar3 = *pfVar5;
          fVar4 = pfVar5[2];
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          dVar10 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          fVar1 = (float)((double)(float)(dVar10 * (double)(DAT_0071f408 * -0.014999986 + 1.0)) /
                         dVar10);
          dVar14 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar14 = (double)(fVar2 * fVar1);
          }
          dVar11 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar11 = (double)(fVar4 * fVar1);
          }
          dVar13 = dVar16;
          if (dVar16 - dVar10 < 0.0) {
            dVar13 = (double)(fVar3 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar14 = (double)(fVar2 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar11 = (double)(fVar4 * fVar1);
          }
          if (dVar10 - dVar16 < 0.0) {
            dVar13 = (double)(fVar3 * fVar1);
          }
          pfVar5[1] = (float)dVar14;
          pfVar5[2] = (float)dVar11;
          *pfVar5 = (float)dVar13;
          DAT_00969dd0 = (float)dVar13;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          DAT_00969dd4 = pfVar5[1];
          DAT_00969dd8 = pfVar5[2];
          DAT_00969ddc = pfVar5[3];
          auVar19 = loadVectorLeftIndexed(0x2c,0x3dd340);
          auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60
                               ,auVar17);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          if ((int)sVar7 < (int)(animationSpeed * 35.5)) {
            auVar17 = vectorSplatHalfWord(auVar17,1);
            DAT_00969eb8 = storeVectorElementHalfWordIndexed(auVar17,0x1d8,0x969ce0);
          }
        }
      }
    }
  }
  return;
}



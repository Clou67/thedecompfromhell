// game/update/moby679.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x40fabc-0x410504
#include "game/update/moby679.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x040fabc (0x14 bytes)
void M679_0040fabc(void)

{
  DAT_0085712c = 0x10000;
  return;
}


// 0x040fb18 (0x9ec bytes)
// inlined: FastAtan2 @0x40ffb8, FastAtan2 @0x410150
/* Moby 679 */

void UpdateMoby_679(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  ulonglong *puVar9;
  short sVar10;
  ulonglong uVar11;
  int iVar14;
  longlong lVar12;
  longlong lVar13;
  longlong lVar15;
  int iVar18;
  ulonglong uVar16;
  float *pfVar19;
  longlong lVar17;
  int iVar20;
  Spline *pSVar21;
  int *piVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  Spline *pSVar23;
  Vec4 *pVVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  undefined8 uVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  double dVar38;
  ulonglong in_f30;
  double in_f31;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x1b0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x38] = in_LR;
  puVar9[0x2d] = in_f23;
  puVar9[0x2e] = in_f24;
  puVar9[0x2f] = in_f25;
  puVar9[0x30] = in_f26;
  puVar9[0x31] = in_f27;
  puVar9[0x32] = in_f28;
  puVar9[0x33] = in_f29;
  puVar9[0x34] = in_f30;
  puVar9[0x35] = (ulonglong)in_f31;
  puVar9[0x2c] = unaff_r31;
  piVar7 = (int *)moby->pVar;
  puVar9[0x2b] = unaff_r30;
  puVar9[0x2a] = unaff_r29;
  puVar9[0x29] = unaff_r28;
  puVar9[0x28] = unaff_r27;
  puVar9[0x27] = unaff_r26;
  puVar9[0x26] = unaff_r25;
  puVar9[0x25] = unaff_r24;
  puVar9[0x24] = unaff_r23;
  if (((piVar7 != (int *)0x0) && (*piVar7 != -1)) && (piVar7[0x1c] != 0)) {
    if (piVar7[0x1a] == 0) {
      iVar14 = 0;
      piVar7[0x1a] = 1;
      piVar22 = piVar7;
      if (0 < piVar7[0x1c]) {
        do {
          iVar20 = 0;
          pSVar23 = Splines[*piVar22];
          pSVar21 = pSVar23;
          if (0 < pSVar23->cnt + -1) {
            do {
              fVar1 = pSVar21->points[0].y - pSVar21->points[1].y;
              fVar2 = pSVar21->points[0].x - pSVar21->points[1].x;
              fVar3 = pSVar21->points[0].z - pSVar21->points[1].z;
              iVar20 = iVar20 + 1;
              pSVar21->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
              pSVar21 = (Spline *)pSVar21->points;
            } while (iVar20 < pSVar23->cnt + -1);
          }
          iVar14 = iVar14 + 1;
          fVar1 = pSVar23->points[iVar20].y - pSVar23->points[0].y;
          fVar2 = pSVar23->points[iVar20].x - pSVar23->points[0].x;
          fVar3 = pSVar23->points[iVar20].z - pSVar23->points[0].z;
          pSVar23->points[iVar20].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          piVar22 = piVar22 + 1;
        } while (iVar14 < piVar7[0x1c]);
      }
      moby->updateDistance = -1;
    }
    if (g_heroStateType == 0x10) {
      pSVar23 = (Spline *)0x0;
      iVar14 = 0;
      dVar35 = 9999.0;
      if (0 < piVar7[0x1c]) {
        uVar33 = 0x408f380000000000;
        dVar31 = 5.0;
        dVar30 = 0.0;
        dVar28 = in_f31;
        dVar38 = in_f31;
        piVar22 = piVar7;
        do {
          pSVar21 = Splines[*piVar22];
          MB_PathFollowToPos
                    (uVar33,dVar31,dVar30,pSVar21,&g_heroPosition,uVar11 - 0x120,uVar11 - 0x108,
                     uVar11 - 0x104);
          fVar1 = (float)((double)g_heroPosition.y - (double)*(float *)((int)puVar9 + 0x94));
          fVar2 = (float)((double)g_heroPosition.x - (double)*(float *)(puVar9 + 0x12));
          iVar20 = piVar7[0x1c];
          dVar26 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
          if (dVar26 < dVar35) {
            in_f31 = (double)*(float *)(puVar9 + 0x13);
            *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar9 + 0x15);
            *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)((int)puVar9 + 0xac);
            dVar35 = dVar26;
            dVar28 = (double)*(float *)((int)puVar9 + 0x94);
            dVar38 = (double)*(float *)(puVar9 + 0x12);
            pSVar23 = pSVar21;
          }
          iVar14 = iVar14 + 1;
          piVar22 = piVar22 + 1;
        } while (iVar14 < iVar20);
        if (pSVar23 != (Spline *)0x0) {
          dVar26 = 0.30000001192092896;
          iVar14 = MB_PathMoveDist
                             (0x3fd3333340000000,pSVar23,uVar11 - 0x130,uVar11 - 0x110,
                              uVar11 - 0x10c);
          if (dVar35 <= (double)(float)piVar7[0x19]) {
            if (Level == Novalis) {
              iVar20 = *(int *)(puVar9 + 0x14);
              iVar18 = pSVar23->cnt + -1;
              dVar35 = dVar30;
              if (iVar20 < iVar18) {
                iVar18 = iVar18 - iVar20;
                pVVar24 = pSVar23->points + iVar20 + -1;
                do {
                  iVar18 = iVar18 + -1;
                  dVar35 = (double)(float)(dVar35 + (double)pVVar24[1].w);
                  pVVar24 = pVVar24 + 1;
                } while (0 < iVar18);
              }
              if (8.0 <= dVar35) {
                if (15.0 <= dVar35) {
                  dVar29 = dVar31;
                  if (30.0 <= dVar35) {
                    dVar29 = 9.0;
                  }
                }
                else {
                  dVar29 = 4.0;
                }
              }
              else {
                dVar29 = 3.0;
              }
              piVar7[0x18] = (int)(float)((double)g_FrameTime * dVar29);
            }
            if (iVar14 == 0) {
              fVar1 = (float)((double)*(float *)((int)puVar9 + 0x84) - dVar28);
              dVar36 = (double)fVar1;
              fVar2 = *(float *)(puVar9 + 0x10);
              dVar37 = (double)(float)((double)fVar2 - dVar38);
              dVar34 = (double)*(float *)((int)puVar9 + 0x8c);
              fVar3 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar36 * dVar36)));
              dVar32 = (double)fVar3;
              *(float *)((int)puVar9 + 0xc4) = (float)((double)*(float *)(puVar9 + 0x11) - in_f31);
              dVar29 = ABS((double)(float)((double)*(float *)(puVar9 + 0x11) - in_f31));
              *(float *)(puVar9 + 0x18) = fVar3;
              *(float *)(puVar9 + 0x19) = (float)(ABS(dVar32) - dVar29);
              uVar16 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
              dVar35 = ABS((double)*(float *)(puVar9 + 0x18));
              if ((double)*(float *)(puVar9 + 0x19) - dVar30 < 0.0) {
                dVar35 = dVar29;
              }
              fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
              fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              dVar29 = ABS((double)*(float *)((int)puVar9 + 0xc4));
              if ((double)*(float *)(puVar9 + 0x19) - dVar30 < 0.0) {
                dVar29 = ABS(dVar32);
              }
              dVar27 = dVar30;
              if (dVar30 < dVar35) {
                lVar12 = uVar11 - 0x1a0;
                lVar15 = uVar11 - 0xc4;
                lVar17 = uVar11 - 0xb4;
                lVar25 = 2;
                fVar4 = (float)(dVar29 - dVar35) / (float)(dVar29 + dVar35);
                fVar5 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x1f) = fVar4;
                *(float *)(puVar9 + 0x1e) = fVar4;
                *(float *)((int)puVar9 + 0xf4) = fVar4;
                *(float *)((int)puVar9 + 0xec) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar5;
                *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar4;
                *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar12 + 0xec) = *(float *)((int)lVar12 + 0xdc) * fVar4 * fVar4;
                  iVar14 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
                  lVar17 = lVar17 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar17 = uVar11 - 0xc4;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar13;
                lVar15 = lVar17;
                do {
                  fVar4 = *pfVar19;
                  fVar5 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0xec) = *(float *)((int)lVar12 + 0xec) * fVar4;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
                  lVar15 = lVar15 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar15 = 2;
                lVar12 = lVar13;
                dVar35 = dVar30;
                do {
                  iVar14 = (int)lVar12;
                  lVar12 = lVar12 + 0x10;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar14 + 0xec)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar27 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar3);
              }
              *(float *)((int)puVar9 + 0xb4) = (float)((double)fVar2 - dVar38);
              *(float *)(puVar9 + 0x17) = fVar1;
              DAT_0096a6b4 = (float)dVar27;
              *(float *)((int)puVar9 + 0xbc) = (float)(ABS(dVar37) - ABS(dVar36));
              uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1d) & 4;
              dVar35 = ABS((double)*(float *)((int)puVar9 + 0xb4));
              if ((double)*(float *)((int)puVar9 + 0xbc) - dVar30 < 0.0) {
                dVar35 = ABS(dVar36);
              }
              fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
              dVar29 = ABS((double)*(float *)(puVar9 + 0x17));
              if ((double)*(float *)((int)puVar9 + 0xbc) - dVar30 < 0.0) {
                dVar29 = ABS(dVar37);
              }
              fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              dVar27 = dVar30;
              if (dVar30 < dVar35) {
                lVar12 = uVar11 - 0x1a0;
                lVar15 = uVar11 - 0xe4;
                lVar17 = uVar11 - 0xd4;
                lVar25 = 2;
                fVar3 = (float)(dVar29 - dVar35) / (float)(dVar29 + dVar35);
                fVar6 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x1b) = fVar3;
                *(float *)(puVar9 + 0x1a) = fVar3;
                *(float *)((int)puVar9 + 0xd4) = fVar3;
                *(float *)((int)puVar9 + 0xcc) = fVar3;
                fVar3 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6;
                *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3;
                *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar3 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0xcc) = *(float *)((int)lVar12 + 0xbc) * fVar3 * fVar3;
                  iVar14 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                  lVar17 = lVar17 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar17 = uVar11 - 0xe4;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar13;
                lVar15 = lVar17;
                do {
                  fVar3 = *pfVar19;
                  fVar6 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0xcc) = *(float *)((int)lVar12 + 0xcc) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar12 = 2;
                dVar35 = dVar30;
                do {
                  iVar14 = (int)lVar13;
                  lVar13 = lVar13 + 0x10;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar14 + 0xcc)) +
                                    *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                   *(float *)(iVar20 + 0xc));
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                dVar27 = (double)((float)(dVar35 + 0.7853981852531433) * fVar1 + fVar2);
              }
              DAT_0096a6b0 = (float)dVar27;
              uVar8 = piVar7[0x18] >> 0x1f;
              if ((int)(FLOAT_ORDER(DAT_0096a6bc)) < (int)((uVar8 >> 1 ^ piVar7[0x18]) - uVar8)) {
                Delt((float)piVar7[0x18],DAT_0071f418 * 6.0,&DAT_0096a6bc);
              }
              else {
                Delt((float)piVar7[0x18],DAT_0071f418 * 6.0,&DAT_0096a6bc);
              }
              if (0.0010000000474974513 < dVar32) {
                DAT_00969dd8 = 0.0;
                DAT_00969ddc = (float)dVar34;
                dVar34 = (double)(float)(dVar37 * (double)(float)((double)DAT_0096a6bc / dVar32));
                dVar29 = (double)(float)(dVar36 * (double)(float)((double)DAT_0096a6bc / dVar32));
                dVar35 = dVar30;
                if (dVar30 - dVar32 < 0.0) {
                  dVar35 = dVar34;
                }
                dVar36 = dVar30;
                if (dVar30 - dVar32 < 0.0) {
                  dVar36 = dVar29;
                }
                if (dVar32 - dVar30 < 0.0) {
                  dVar35 = dVar34;
                }
                if (dVar32 - dVar30 < 0.0) {
                  dVar36 = dVar29;
                }
                DAT_00969dd0 = (float)dVar35;
                DAT_00969dd4 = (float)dVar36;
              }
              dVar29 = (double)(float)(dVar28 - (double)g_heroPosition.y);
              dVar32 = (double)(float)(dVar38 - (double)g_heroPosition.x);
              dVar28 = (double)g_FrameTime;
              dVar35 = (double)DAT_0071f40c;
              dVar38 = (double)SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar29 * dVar29)));
              *(float *)(puVar9 + 0x16) = (float)-dVar38;
              AccelDelt((float)dVar30,(float)(dVar35 * 0.00800000037997961),
                                  (float)(dVar35 * dVar26),(float)(dVar28 * dVar31),
                                  (float *)(puVar9 + 0x16),0x720000,&DAT_0096a6c0);
              sVar10 = DAT_00969ec0;
              dVar35 = (double)DAT_0096a6c0;
              if (dVar38 < (double)DAT_0096a6c0) {
                DAT_0096a6c0 = (float)dVar38;
                dVar35 = dVar38;
              }
              dVar28 = dVar29;
              dVar31 = dVar32;
              if ((dVar35 < dVar38) && (dVar28 = dVar30, dVar31 = dVar30, dVar38 != dVar30)) {
                dVar28 = (double)(float)((double)(float)(dVar35 / dVar38) * dVar29);
                dVar31 = (double)(float)((double)(float)(dVar35 / dVar38) * dVar32);
              }
              DAT_00969dd0 = (float)((double)DAT_00969dd0 + dVar31);
              DAT_00969dd4 = (float)((double)DAT_00969dd4 + dVar28);
              DAT_00969ddc = 0.0;
              DAT_00969e38 = DAT_00969dd8;
              DAT_00969e3c = 0;
              auVar39 = ZEXT416(0xffffffff);
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
              auVar39 = loadVectorLeftIndexed(0x3c,0x40fad0);
              auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = vectorMultiplyAddFloatingPoint
                                  (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                           auVar39 << 0x60,auVar40);
              auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
              g_heroExternalMomentum = DAT_00969dd0;
              DAT_00969e34 = DAT_00969dd4;
              puVar9[0x22] = (longlong)(int)(animationSpeed * 30.5);
              if ((int)sVar10 < *(int *)((int)puVar9 + 0x114)) {
                auVar39 = vectorSplatHalfWord(auVar39,1);
                DAT_00969ec0 = storeVectorElementHalfWordIndexed(auVar39,0x1e0,0x969ce0);
              }
            }
            else {
              fVar1 = DAT_0071f408 * -0.00999999 + 1.0;
              DAT_00969ddc = 0.0;
              DAT_00969dd0 = g_heroExternalMomentum * fVar1;
              DAT_00969dd4 = DAT_00969e34 * fVar1;
              DAT_00969dd8 = DAT_00969e38 * fVar1;
              g_heroExternalMomentum = DAT_00969dd0;
              DAT_00969e34 = DAT_00969dd4;
              DAT_00969e38 = DAT_00969dd8;
            }
          }
        }
      }
    }
  }
  return;
}



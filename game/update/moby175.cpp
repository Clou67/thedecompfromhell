// game/update/moby175.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2b06bc-0x2b1940
#include "game/update/moby175.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1750.h"
#include "idol/fastfunc.h"

// 0x02b06bc (0x14 bytes)
void M175_002b06bc(void)

{
  DAT_007b74ac = 0x10000;
  return;
}


// 0x02b06f0 (0x980 bytes)
// inlined: FastAtan2 @0x2b08cc, FastAtan2 @0x2b0bf0, FastAtan2 @0x2b0ed4
int M175_002b06f0(double param_1,undefined8 param_2,MobyInstance *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  MobyInstance *moby;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  ulonglong uVar14;
  int iVar17;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  uint unused;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x2b] = unaff_r30;
  iVar23 = 0;
  pvVar9 = param_3->pVar;
  dVar32 = (double)(param_3->pos).x;
  dVar31 = (double)(param_3->pos).y;
  lVar20 = (longlong)*(int *)((int)pvVar9 + 0x14);
  puVar10[0x29] = unaff_r28;
  puVar10[0x28] = unaff_r27;
  puVar10[0x27] = unaff_r26;
  puVar10[0x26] = unaff_r25;
  puVar10[0x25] = unaff_r24;
  puVar10[0x24] = unaff_r23;
  iVar15 = MB_randInt(lVar20 + (lVar20 + -1 >> 0x3f & 1U - lVar20));
  *(undefined4 *)((int)pvVar9 + 0x14) = 0;
  if (DAT_00a49344 != (MobyInstance *)0x0) {
    iVar22 = 0;
    moby = DAT_00a49344;
    do {
      iVar16 = MB_GetPvarsIfMobyHasThem(moby);
      if (iVar16 != 0) {
        dVar26 = (double)(moby->pos).y;
        dVar25 = (double)(moby->pos).x;
        fVar2 = (float)(dVar31 - dVar26);
        fVar3 = (float)(dVar32 - dVar25);
        dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        if (dVar30 < 12.0) {
          MVar8 = moby->oClass;
          if (((MVar8 == NANOTECH_CRATE || MVar8 == BOLT_CRATE) || (MVar8 == EXPLOSIVE_CRATE)) ||
             (MVar8 == AMMO_CRATE)) {
            fVar2 = (float)(dVar25 - (double)g_heroPosition.x);
            fVar3 = (float)(dVar26 - (double)g_heroPosition.y);
            fVar5 = ABS(fVar2);
            fVar4 = ABS(fVar3);
            *(float *)(puVar10 + 0x13) = fVar2;
            *(float *)((int)puVar10 + 0x9c) = fVar3;
            fVar3 = g_heroRotation.z;
            *(float *)(puVar10 + 0x14) = fVar5 - fVar4;
            dVar25 = 0.0;
            unused = *(uint *)(puVar10 + 0x14);
            uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
                     (ulonglong)(unused >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
            fVar2 = ABS(*(float *)(puVar10 + 0x13));
            if (*(float *)(puVar10 + 0x14) - 0.0 < 0.0) {
              fVar2 = fVar4;
            }
            fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
            fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
            fVar7 = ABS(*(float *)((int)puVar10 + 0x9c));
            if (*(float *)(puVar10 + 0x14) - 0.0 < 0.0) {
              fVar7 = fVar5;
            }
            dVar26 = dVar25;
            if (0.0 < fVar2) {
              lVar20 = uVar13 - 0x180;
              unused = 2;
              lVar18 = uVar13 - 0xac;
              lVar21 = uVar13 - 0x9c;
              lVar24 = 2;
              fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
              fVar5 = fVar2 * fVar2;
              *(float *)(puVar10 + 0x1e) = fVar2;
              *(float *)(puVar10 + 0x1d) = fVar2;
              *(float *)((int)puVar10 + 0xec) = fVar2;
              *(float *)((int)puVar10 + 0xe4) = fVar2;
              fVar2 = fVar5 * fVar5;
              *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar5;
              *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar2;
              *(float *)(puVar10 + 0x1e) = *(float *)(puVar10 + 0x1e) * fVar2 * fVar5;
              do {
                *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xd4) * fVar2 * fVar2;
                iVar17 = (int)lVar18;
                lVar20 = lVar20 + 8;
                lVar18 = lVar18 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
                lVar21 = lVar21 + 8;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              lVar24 = 4;
              lVar21 = uVar13 - 0xac;
              pfVar19 = (float *)&DAT_007358e0;
              lVar20 = lVar1;
              lVar18 = lVar21;
              do {
                fVar2 = *pfVar19;
                fVar5 = pfVar19[1];
                pfVar19 = pfVar19 + 2;
                *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xe4) * fVar2;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
                lVar18 = lVar18 + 8;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              lVar18 = 2;
              lVar20 = lVar1;
              do {
                iVar17 = (int)lVar20;
                lVar20 = lVar20 + 0x10;
                iVar11 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xe4)) +
                                  *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                                 *(float *)(iVar11 + 0xc));
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar4);
            }
            dVar26 = (double)FastSubRots(fVar3,(float)dVar26);
            if (dVar26 < 0.9599310755729675) {
              iVar17 = *(int *)((int)pvVar9 + 0x14);
              if (iVar17 == iVar15) {
                fVar5 = (moby->pos).x - (param_3->pos).x;
                fVar3 = (param_3->pos).y;
                fVar4 = (param_3->pos).z;
                *(float *)(puVar10 + 0xe) = fVar5;
                fVar3 = (moby->pos).y - fVar3;
                *(float *)((int)puVar10 + 0x74) = fVar3;
                fVar4 = (moby->pos).z - fVar4;
                *(float *)(puVar10 + 0xf) = fVar4;
                *(f32 *)((int)puVar10 + 0x7c) = (moby->pos).w;
                dVar29 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
                fVar2 = (float)(1.5 / dVar29);
                dVar26 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar26 = (double)(fVar5 * fVar2);
                }
                dVar27 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar27 = (double)(fVar3 * fVar2);
                }
                dVar28 = dVar25;
                if (dVar25 - dVar29 < 0.0) {
                  dVar28 = (double)(fVar4 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar26 = (double)(fVar5 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar27 = (double)(fVar3 * fVar2);
                }
                if (dVar29 - dVar25 < 0.0) {
                  dVar28 = (double)(fVar4 * fVar2);
                }
                *(float *)(puVar10 + 0xe) = (float)dVar26;
                *(float *)((int)puVar10 + 0x74) = (float)dVar27;
                *(float *)(puVar10 + 0xf) = (float)dVar28;
                CollDamageMobyDirect
                          (1.0,moby,param_3,0x10000,unused,&g_heroPosition.x,
                           (float *)(puVar10 + 0xe));
                iVar17 = MB_randRange(5,0x2d);
                puVar10[0x21] = (longlong)iVar17;
                iVar17 = *(int *)((int)pvVar9 + 0x14);
                *(int *)((int)pvVar9 + 0x10) =
                     (int)(animationSpeed * ((float)(longlong)puVar10[0x21] + 0.5));
              }
              *(int *)((int)pvVar9 + 0x14) = iVar17 + 1;
            }
          }
        }
        if (dVar30 < param_1) {
          fVar2 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = ABS(fVar2);
          fVar5 = ABS(fVar3);
          *(float *)((int)puVar10 + 0x8c) = fVar2;
          *(float *)(puVar10 + 0x12) = fVar3;
          fVar6 = g_heroRotation.z;
          *(float *)((int)puVar10 + 0x94) = fVar4 - fVar5;
          fVar2 = 0.0;
          uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar10 + 0x8c));
          if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
          fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)(puVar10 + 0x12));
          if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
            fVar12 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar20 = uVar13 - 0x180;
            lVar21 = uVar13 - 0xbc;
            lVar18 = uVar13 - 0xcc;
            lVar24 = 2;
            fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x1a) = fVar3;
            *(float *)(puVar10 + 0x19) = fVar3;
            *(float *)((int)puVar10 + 0xcc) = fVar3;
            *(float *)((int)puVar10 + 0xc4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar4;
            *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar3;
            *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xb4) * fVar3 * fVar3;
              iVar17 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0xcc;
            pfVar19 = (float *)&DAT_007358e0;
            lVar20 = lVar1;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xc4) * fVar3;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar20 = lVar1;
            do {
              iVar17 = (int)lVar20;
              lVar20 = lVar20 + 0x10;
              iVar11 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar17 + 0xc4) + *(float *)(iVar11 + 4) +
                      *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
          }
          dVar25 = (double)FastSubRots(fVar6,fVar2);
          if (dVar25 < 0.9599310755729675) {
            iVar17 = *(int *)(iVar16 + 0x18);
            if (iVar17 == 0) {
              *(MobyInstance **)(iVar16 + 0x18) = param_3;
              iVar23 = iVar23 + 1;
            }
            else {
              fVar2 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
              fVar3 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
              if (dVar30 < (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
                *(MobyInstance **)(iVar16 + 0x18) = param_3;
                iVar23 = iVar23 + 1;
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar22);
      iVar22 = iVar22 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  iVar15 = 1;
  if (0 < DAT_00a51ee8) {
    iVar22 = 2;
    do {
      iVar16 = (int)&(g_MobyInstance->bSphere).x +
               (int)((longlong)*(short *)((int)&DAT_00a51ee8 + iVar22) << 8);
      if ((iVar16 != 0) && (*(byte *)(iVar16 + 0x20) < 0x80)) {
        fVar2 = (float)(dVar31 - (double)*(float *)(iVar16 + 0x14));
        fVar3 = (float)(dVar32 - (double)*(float *)(iVar16 + 0x10));
        iVar17 = *(int *)(iVar16 + 0x78);
        if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2) < param_1) {
          fVar2 = (float)((double)*(float *)(iVar16 + 0x10) - (double)g_heroPosition.x);
          fVar3 = (float)((double)*(float *)(iVar16 + 0x14) - (double)g_heroPosition.y);
          fVar4 = ABS(fVar2);
          fVar5 = ABS(fVar3);
          *(float *)(puVar10 + 0x10) = fVar2;
          *(float *)((int)puVar10 + 0x84) = fVar3;
          fVar6 = g_heroRotation.z;
          *(float *)(puVar10 + 0x11) = fVar4 - fVar5;
          fVar2 = 0.0;
          uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar10 + 0x10));
          if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
          fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar10 + 0x84));
          if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
            fVar12 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar20 = uVar13 - 0x180;
            lVar24 = 2;
            lVar18 = uVar13 - 0xec;
            lVar21 = uVar13 - 0xdc;
            fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x16) = fVar3;
            *(float *)(puVar10 + 0x15) = fVar3;
            *(float *)((int)puVar10 + 0xac) = fVar3;
            *(float *)((int)puVar10 + 0xa4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar4;
            *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar3;
            *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xa4) = *(float *)((int)lVar20 + 0x94) * fVar3 * fVar3;
              iVar16 = (int)lVar18;
              lVar20 = lVar20 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0xec;
            pfVar19 = (float *)&DAT_007358e0;
            lVar20 = lVar1;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar20 + 0xa4) = *(float *)((int)lVar20 + 0xa4) * fVar3;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar20 = lVar1;
            do {
              iVar16 = (int)lVar20;
              iVar11 = (int)lVar21;
              lVar20 = lVar20 + 0x10;
              lVar21 = lVar21 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar16 + 0xa4) + *(float *)(iVar11 + 4) +
                      *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
          }
          dVar25 = (double)FastSubRots(fVar6,fVar2);
          if (dVar25 < 0.9599310755729675) {
            iVar23 = iVar23 + 1;
            *(MobyInstance **)(iVar17 + 0x78) = param_3;
          }
        }
      }
      iVar15 = iVar15 + 1;
      iVar22 = iVar22 + 2;
    } while (iVar15 <= DAT_00a51ee8);
  }
  return iVar23;
}


// 0x02b1078 (0x270 bytes)
void M175_002b1078(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  
  if (DAT_00fb0190 != 0) {
    puVar3 = &DAT_00fb019c;
    lVar8 = 5;
    do {
      *puVar3 = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 0xc;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    DAT_00fb0190 = 0;
    DAT_00fb020c = 0;
    DAT_00fb0214 = FastDoubleToInt
                             ((double)(DAT_007b74d4 / (g_FrameTime * DAT_007b74d8)));
    dVar9 = (double)FastIntToDouble();
    DAT_00fb0218 = (float)(1.0 / dVar9);
  }
  if ((DAT_00fb0210 == 0) &&
     (iVar4 = FastDecTimerS32(&DAT_00fb020c), uVar2 = DAT_00fb0214, uVar1 = DAT_007b74dc,
     iVar4 != 0)) {
    iVar4 = 0;
    psVar6 = &DAT_00fb019c;
    do {
      if (*psVar6 == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(0x74d0,0x7b0000);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar11,0);
        auVar11 = loadVectorLeftIndexed(4,0x2b1070);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        DAT_00fb020c = storeVectorElementWordIndexed
                                 (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                  0x20c,0xfb0000);
        (&DAT_00fb019c)[iVar4 * 6] = 1;
        (&DAT_00fb0198)[iVar4 * 6] = (short)uVar2;
        (&DAT_00fb0194)[iVar4 * 3] = 0;
        *(short *)(&DAT_00fb019a + iVar4 * 0xc) = (short)uVar1;
        break;
      }
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 6;
    } while (iVar4 < 10);
  }
  iVar4 = 0;
  pfVar7 = (float *)&DAT_00fb0194;
  psVar6 = &DAT_00fb019c;
  puVar3 = &DAT_00fb0198;
  do {
    if (*psVar6 != 0) {
      iVar5 = FastDecTimerS16(puVar3);
      if (iVar5 == 0) {
        *pfVar7 = g_FrameTime * DAT_007b74d8 + *pfVar7;
      }
      else {
        *psVar6 = 0;
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 6;
    psVar6 = psVar6 + 6;
    pfVar7 = pfVar7 + 3;
  } while (iVar4 < 10);
  GetBonePosition(param_1,0,&DAT_00fb0220);
  RegisterFuncForMoby(&PTR_M1750_002b1950_0070ae30,(MobyInstance *)param_1);
  return;
}


// 0x02b1300 (0x640 bytes)
/* Moby 175 */

void UpdateMoby_175(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  uint *puVar3;
  short sVar4;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar5;
  longlong lVar6;
  int iVar10;
  double dVar11;
  
  if ((moby != (MobyInstance *)0x0) && (puVar3 = (uint *)moby->pVar, puVar3 != (uint *)0x0)) {
    if (puVar3[2] == 0) {
      puVar3[2] = 0x41f00000;
    }
    if (moby->animationId == '\x02') {
      moby->state = '\x03';
    }
    DAT_00fb0210 = 1;
    uVar2 = moby->state;
    if (uVar2 == '\0') {
      puVar3[1] = 0xffffffff;
      moby->state = moby->state + '\x01';
      DAT_00fb0190 = 1;
      uVar2 = moby->state;
    }
    if (uVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
        puVar3[3] = 0;
      }
    }
    else if (uVar2 == '\x02') {
      if ((moby->animationId == '\x03') && (DAT_0096bd8c == '\0')) {
        DAT_00fb0210 = 0;
        uVar7 = puVar3[6] + 1;
      }
      else {
        uVar7 = 0;
      }
      puVar3[6] = uVar7;
      iVar8 = IsMobyPlayingSound(moby,puVar3[1]);
      if (iVar8 == 0) {
        bVar1 = (g_Pad.buttonsPressedThisFrame & DAT_0096ad80) == 0;
        if (((bVar1) && (((g_Pad.downButtons & DAT_0096ad80) == 0 || ((int)puVar3[3] < 0x11)))) ||
           (DAT_0096bd8c != '\0')) {
          uVar7 = puVar3[1];
          if ((int)uVar7 < 0) {
            uVar7 = 0;
            if (((g_Pad.downButtons & DAT_0096ad80) != 0) && (uVar7 = 0, DAT_0096bd8c == '\0')) {
              uVar7 = puVar3[3] + 1;
            }
            puVar3[3] = uVar7;
            if (moby->animationId != '\x01') {
              MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
            }
          }
          else {
            if (moby->animationId != '\x01') {
              MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
              uVar7 = puVar3[1];
            }
            if (((uVar7 != 0xffffffff) && (g_SoundChannels[uVar7].pMoby == moby)) &&
               (g_SoundChannels[uVar7].state != '\0')) {
              sound_Kill(uVar7);
            }
            puVar3[1] = 0xffffffff;
            puVar3[3] = 0;
          }
        }
        else {
          if (!bVar1) {
            iVar8 = MB_randRange(0xf,0x2d);
            puVar3[4] = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
          }
          if (DAT_00a0fd94 != -1) {
            DAT_00a0fd94 = DAT_00a0fd94 + 1;
          }
          iVar8 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)DAT_00a0fd96 < iVar8 / 600) {
            sVar4 = (short)(iVar8 >> 0x1f);
            DAT_00a0fd96 = ((short)(iVar8 / 600) + sVar4) -
                           ((short)((short)(iVar8 / 0x2580000) + sVar4) >> 0xf);
          }
          DAT_00a0fd98 = DAT_00a0fd98 | 1 << (Level & 0x3f) | 0x80000000;
          if (moby->animationId != '\x03') {
            MB_SetAnimation(moby,3,0,(int)(animationSpeed * 3.5));
          }
          uVar9 = PlayMobySound(*puVar3,1,moby);
          uVar7 = *puVar3;
          puVar3[1] = uVar9;
          *puVar3 = uVar7 + 1;
          iVar10 = (int)(((ulonglong)(uVar7 + 1) & 0x7ffffff) << 5);
          dVar11 = 10.0;
          iVar8 = FastDoubleToInt
                            ((double)(*(float *)((int)moby->pClass->SoundDefs + iVar10) * 10.0));
          uVar5 = FastDoubleToInt
                            ((double)(float)((double)*(float *)((int)moby->pClass->SoundDefs +
                                                               iVar10 + 4) * dVar11));
          if ((((int)(uint)moby->pClass->sound_cnt <= (int)*puVar3) || (iVar8 != 0x1e)) ||
             ((int)uVar5 != 0x1e)) {
            uVar5 = 0;
            *puVar3 = 0;
          }
          M175_002b06f0((double)(float)puVar3[2],uVar5,moby);
          puVar3[3] = 0;
        }
      }
      else {
        puVar3[3] = puVar3[3] + 1;
        if ((((g_Pad.downButtons & DAT_0096ad80) == 0) &&
            ((int)(animationSpeed * 30.5) < (int)puVar3[6])) || (DAT_0096bd8c != '\0')) {
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,(int)(animationSpeed * 5.5));
          }
          uVar7 = puVar3[1];
          if (((uVar7 != 0xffffffff) && (g_SoundChannels[uVar7].pMoby == moby)) &&
             (g_SoundChannels[uVar7].state != '\0')) {
            sound_Kill(uVar7);
          }
          puVar3[1] = 0xffffffff;
          puVar3[3] = 0;
        }
        else {
          lVar6 = (ulonglong)worldUpdateTime +
                  ((longlong)((int)worldUpdateTime >> 2) +
                  (ulonglong)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * -4;
          if ((int)lVar6 == 0) {
            M175_002b06f0((double)(float)puVar3[2],lVar6,moby);
          }
        }
      }
    }
    if (DAT_0096ad94 != 3) {
      M175_002b1078(moby);
    }
  }
  return;
}



// game/update/moby1849.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2c5230-0x2c5db8
#include "game/update/moby1849.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby804.h"
#include "idol/fastfunc.h"

// 0x02c5230 (0xf8 bytes)
/* Moby 1849 */

void UpdateMoby_1849(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x73b,1,0x73b,1,7,2);
    MB_SpawnReplacementMoby(moby,0x73a);
    DeleteMoby(moby);
  }
  return;
}


// 0x02c5358 (0xa60 bytes)
// inlined: FastAtan2 @0x2c55ac, FastAtan2 @0x2c5758, FastAtan2 @0x2c596c
MobyInstance *
M185_002c5358
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          float *param_5,float *param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *moby;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  longlong lVar14;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f21;
  double dVar30;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar37;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x1e0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x3e] = in_LR;
  puVar9[0x31] = in_f21;
  puVar9[0x32] = in_f22;
  puVar9[0x33] = in_f23;
  puVar9[0x34] = in_f24;
  puVar9[0x35] = in_f25;
  puVar9[0x36] = in_f26;
  puVar9[0x37] = in_f27;
  puVar9[0x38] = in_f28;
  puVar9[0x39] = in_f29;
  puVar9[0x3a] = in_f30;
  puVar9[0x3b] = in_f31;
  puVar9[0x28] = unaff_r23;
  puVar9[0x27] = unaff_r22;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2b] = unaff_r26;
  puVar9[0x2f] = unaff_r30;
  uVar11 = uVar13 + 0x40 & 0xffffffff;
  puVar9[0x2e] = unaff_r29;
  pMVar21 = g_heroMobyPtr;
  dVar37 = (double)DAT_007bd344;
  *(f32 *)(puVar9 + 0xe) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar9 + 0x74) = (pMVar21->pos).y;
  *(f32 *)(puVar9 + 0xf) = (pMVar21->pos).z;
  *(f32 *)((int)puVar9 + 0x7c) = (pMVar21->pos).w;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  puVar9[0x2d] = unaff_r28;
  puVar9[0x2c] = unaff_r27;
  puVar9[0x2a] = unaff_r25;
  puVar9[0x29] = unaff_r24;
  puVar9[0x26] = unaff_r21;
  *(float *)(puVar9 + 0xf) = fStack00000048;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  iVar15 = CollLine(uVar13 - 0x170,uVar11,6,pMVar21,0);
  if (iVar15 == 0) {
    pMVar21 = (MobyInstance *)0x0;
    if (DAT_00a49344 != (MobyInstance *)0x0) {
      iVar15 = 0;
      moby = DAT_00a49344;
      do {
        if ((moby->state < 0x80) &&
           (moby->oClass != BLARGIAN_SNAGGLEBEAST && moby->oClass != DREK_FINAL_BOSS_ROBOT)) {
          *(f32 *)(puVar9 + 0x10) = (moby->pos).x;
          *(f32 *)((int)puVar9 + 0x84) = (moby->pos).y;
          *(f32 *)(puVar9 + 0x11) = (moby->pos).z;
          *(f32 *)((int)puVar9 + 0x8c) = (moby->pos).w;
          iVar16 = MB_GetPvarsIfMobyHasThem(moby);
          fVar2 = *(float *)(puVar9 + 0x10);
          fVar3 = *(float *)((int)puVar9 + 0x84);
          if (iVar16 != 0) {
            fVar8 = *(float *)(puVar9 + 0x11) + *(float *)(iVar16 + 0x10);
            *(float *)(puVar9 + 0x11) = fVar8;
            if ((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) {
              fVar6 = fVar2 - fStack00000040;
              fVar4 = fVar3 - fStack00000044;
              fVar5 = ABS(fVar6);
              fVar7 = ABS(fVar4);
              *(float *)(puVar9 + 0x17) = fVar6;
              *(float *)((int)puVar9 + 0xbc) = fVar4;
              *(float *)(puVar9 + 0x18) = fVar5 - fVar7;
              dVar32 = 0.0;
              uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
              fVar6 = ABS(*(float *)(puVar9 + 0x17));
              if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
                fVar6 = fVar7;
              }
              fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              fVar12 = ABS(*(float *)((int)puVar9 + 0xbc));
              if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
                fVar12 = fVar5;
              }
              dVar33 = 0.7853981852531433;
              dVar29 = dVar32;
              if (0.0 < fVar6) {
                lVar14 = uVar13 - 0x1d0;
                lVar17 = uVar13 - 0xdc;
                lVar20 = uVar13 - 0xcc;
                lVar22 = 2;
                fVar6 = (fVar12 - fVar6) / (fVar12 + fVar6);
                fVar5 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x22) = fVar6;
                *(float *)(puVar9 + 0x21) = fVar6;
                *(float *)((int)puVar9 + 0x10c) = fVar6;
                *(float *)((int)puVar9 + 0x104) = fVar6;
                fVar6 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar5;
                *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar6;
                *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar6 * fVar5;
                do {
                  *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0xf4) * fVar6 * fVar6;
                  iVar16 = (int)lVar17;
                  lVar14 = lVar14 + 8;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
                  lVar20 = lVar20 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar22 = 4;
                lVar20 = uVar13 - 0xdc;
                pfVar18 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar17 = lVar20;
                do {
                  fVar6 = *pfVar18;
                  fVar5 = pfVar18[1];
                  pfVar18 = pfVar18 + 2;
                  *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0x104) * fVar6;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
                  lVar17 = lVar17 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar17 = 2;
                lVar14 = lVar1;
                do {
                  iVar16 = (int)lVar14;
                  lVar14 = lVar14 + 0x10;
                  iVar10 = (int)lVar20;
                  lVar20 = lVar20 + 0x10;
                  dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x104)) +
                                    *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                   *(float *)(iVar10 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar4);
              }
              fVar3 = fStack00000044 - fVar3;
              fVar2 = fStack00000040 - fVar2;
              fVar8 = fVar8 - fStack00000048;
              fVar6 = ABS(fVar8);
              *(float *)(puVar9 + 0x16) = fVar8;
              fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
              fVar3 = ABS(fVar2);
              *(float *)((int)puVar9 + 0xac) = fVar2;
              *(float *)((int)puVar9 + 0xb4) = fVar3 - fVar6;
              uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
              fVar2 = ABS(*(float *)((int)puVar9 + 0xac));
              if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
                fVar2 = fVar6;
              }
              fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar6 = ABS(*(float *)(puVar9 + 0x16));
              if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
                fVar6 = fVar3;
              }
              fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              dVar36 = dVar32;
              if (0.0 < fVar2) {
                lVar14 = uVar13 - 0x1d0;
                lVar20 = uVar13 - 0xec;
                lVar17 = uVar13 - 0xfc;
                lVar22 = 2;
                fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
                fVar6 = fVar2 * fVar2;
                *(float *)(puVar9 + 0x1e) = fVar2;
                *(float *)(puVar9 + 0x1d) = fVar2;
                *(float *)((int)puVar9 + 0xec) = fVar2;
                *(float *)((int)puVar9 + 0xe4) = fVar2;
                fVar2 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar6;
                *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar2;
                *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2 * fVar6;
                do {
                  *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xd4) * fVar2 * fVar2;
                  iVar16 = (int)lVar17;
                  lVar17 = lVar17 + 8;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
                  lVar20 = lVar20 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar22 = 4;
                lVar20 = uVar13 - 0xfc;
                pfVar18 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar17 = lVar20;
                do {
                  fVar2 = *pfVar18;
                  fVar6 = pfVar18[1];
                  pfVar18 = pfVar18 + 2;
                  *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xe4) * fVar2;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
                  lVar17 = lVar17 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar17 = 2;
                lVar14 = lVar1;
                do {
                  iVar16 = (int)lVar14;
                  iVar10 = (int)lVar20;
                  lVar14 = lVar14 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0xe4)) +
                                    *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                   *(float *)(iVar10 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar8 + fVar3);
              }
              dVar23 = (double)FastSubRots(*param_5,(float)dVar29);
              fVar2 = fStack00000044 - *(float *)((int)puVar9 + 0x84);
              dVar35 = (double)SQRT((fStack00000048 - *(float *)(puVar9 + 0x11)) *
                                    (fStack00000048 - *(float *)(puVar9 + 0x11)) +
                                    (fStack00000040 - *(float *)(puVar9 + 0x10)) *
                                    (fStack00000040 - *(float *)(puVar9 + 0x10)) + fVar2 * fVar2);
              if (dVar35 < 2.5) {
                fVar3 = (moby->pos).x - g_heroPosition.x;
                fVar8 = (moby->pos).y - g_heroPosition.y;
                fVar2 = (g_heroMobyPtr->rotation).z;
                dVar27 = ABS((double)fVar3);
                dVar28 = ABS((double)fVar8);
                *(float *)(puVar9 + 0x14) = fVar3;
                *(float *)((int)puVar9 + 0xa4) = fVar8;
                *(float *)(puVar9 + 0x15) = (float)(dVar27 - dVar28);
                uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
                dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
                if ((double)*(float *)(puVar9 + 0x15) - dVar32 < 0.0) {
                  dVar24 = dVar28;
                }
                fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
                dVar28 = ABS((double)*(float *)((int)puVar9 + 0xa4));
                if ((double)*(float *)(puVar9 + 0x15) - dVar32 < 0.0) {
                  dVar28 = dVar27;
                }
                fVar8 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
                dVar27 = dVar32;
                if (dVar32 < dVar24) {
                  lVar14 = uVar13 - 0x1d0;
                  lVar17 = uVar13 - 0x11c;
                  lVar20 = uVar13 - 0x10c;
                  lVar22 = 2;
                  fVar6 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
                  fVar4 = fVar6 * fVar6;
                  *(float *)(puVar9 + 0x1a) = fVar6;
                  *(float *)(puVar9 + 0x19) = fVar6;
                  *(float *)((int)puVar9 + 0xcc) = fVar6;
                  *(float *)((int)puVar9 + 0xc4) = fVar6;
                  fVar6 = fVar4 * fVar4;
                  *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
                  *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar6;
                  *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6 * fVar4;
                  do {
                    *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar6 * fVar6;
                    iVar16 = (int)lVar17;
                    lVar14 = lVar14 + 8;
                    lVar17 = lVar17 + 8;
                    *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
                    lVar20 = lVar20 + 8;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  lVar22 = 4;
                  lVar20 = uVar13 - 0x11c;
                  pfVar18 = (float *)&DAT_007358e0;
                  lVar14 = lVar1;
                  lVar17 = lVar20;
                  do {
                    fVar6 = *pfVar18;
                    fVar4 = pfVar18[1];
                    pfVar18 = pfVar18 + 2;
                    *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar6;
                    lVar14 = lVar14 + 8;
                    *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
                    lVar17 = lVar17 + 8;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  lVar17 = 2;
                  lVar14 = lVar1;
                  dVar24 = dVar32;
                  do {
                    iVar16 = (int)lVar14;
                    lVar14 = lVar14 + 0x10;
                    iVar10 = (int)lVar20;
                    lVar20 = lVar20 + 0x10;
                    dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar16 + 0xc4)) +
                                      *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                     *(float *)(iVar10 + 0xc));
                    lVar17 = lVar17 + -1;
                  } while (lVar17 != 0);
                  dVar27 = (double)((float)(dVar24 + dVar33) * fVar3 + fVar8);
                }
                dVar33 = (double)FastSubRots(fVar2,(float)dVar27);
                if (((dVar33 < 1.0471975803375244) &&
                    (ABS(fStack00000048 - *(float *)(puVar9 + 0x11)) < 2.0)) &&
                   (iVar16 = CollLine(uVar11,uVar13 - 0x160,6,g_heroMobyPtr,0),
                   iVar16 == 0)) {
                  *param_6 = (float)-dVar36;
                  *param_5 = (float)dVar29;
                  return moby;
                }
              }
              if (dVar35 <= dVar37) {
                MB_SphericalToVector
                          ((float)dVar35,*param_5,DAT_00969fc4 * 0.5 + *param_6,
                           (float *)(puVar9 + 0x12));
                fVar2 = *(float *)((int)puVar9 + 0x94) + fStack00000044;
                fVar3 = fVar2 - *(float *)((int)puVar9 + 0x84);
                fVar8 = (*(float *)(puVar9 + 0x12) + fStack00000040) - *(float *)(puVar9 + 0x10);
                *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) + fStack00000040;
                *(float *)((int)puVar9 + 0x94) = fVar2;
                fVar2 = (*(float *)(puVar9 + 0x13) + fStack00000048) - *(float *)(puVar9 + 0x11);
                *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) + fStack00000048;
                dVar34 = 1.0;
                dVar27 = -1.0;
                dVar24 = (double)(SQRT(fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3) /
                                 (float)(dVar35 * 2.0));
                dVar31 = 1.5707963705062866;
                dVar28 = 0.01745329238474369;
                dVar33 = dVar24;
                if (dVar24 - dVar32 < 0.0) {
                  dVar33 = ABS(dVar24);
                }
                dVar25 = dVar34;
                if (dVar24 - dVar32 < 0.0) {
                  dVar25 = dVar27;
                }
                dVar24 = (double)(float)(1.0 - dVar33);
                if ((double)(float)(1.0 - dVar33) - dVar32 < 0.0) {
                  dVar24 = dVar32;
                }
                dVar33 = (double)((float)(-(double)(((float)((double)(float)(dVar33 * dVar33) *
                                                            dVar33) * DAT_007358cc +
                                                    (float)((double)(float)(dVar33 * dVar33) *
                                                            (double)DAT_007358c8 +
                                                           (double)(float)(dVar33 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar24) - 1.5707964) * dVar25) * 2.0);
                if (((double)(DAT_007bd340 * 0.017453292) < dVar33) &&
                   (iVar16 = MB_GetPvarsIfMobyHasThem(moby), iVar16 != 0)) {
                  dVar25 = (double)FastIntToDouble(*(undefined1 *)(iVar16 + 10));
                  dVar26 = (double)(float)((double)(float)(dVar25 * 0.125) / dVar35);
                  dVar24 = dVar26;
                  if (dVar26 - dVar32 < 0.0) {
                    dVar24 = ABS(dVar26);
                  }
                  dVar30 = dVar34;
                  if (dVar26 - dVar32 < 0.0) {
                    dVar30 = dVar27;
                  }
                  dVar27 = (double)(float)(dVar34 - dVar24);
                  if ((double)(float)(dVar34 - dVar24) - dVar32 < 0.0) {
                    dVar27 = dVar32;
                  }
                  if (((double)(float)(dVar25 * 0.125) < dVar35) &&
                     (dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar24 * dVar24) * dVar24) * DAT_007358cc +
                                                  (float)((double)(float)(dVar24 * dVar24) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar24 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar27) - dVar31) * dVar30 -
                                               dVar33), dVar33 < dVar32)) {
                    dVar33 = dVar32;
                  }
                }
                if ((dVar33 < (double)(float)((double)DAT_007bd340 * dVar28)) &&
                   (((iVar16 = CollLine(uVar11,uVar13 - 0x160,6,param_1,0), iVar16 == 0 ||
                     ((g_CollOutput.pMoby != (MobyInstance *)0x0 && (g_CollOutput.pMoby == moby)))) &&
                    (*param_6 = (float)-dVar36, dVar37 = dVar35, pMVar21 = moby,
                    dVar23 < 0.1745329201221466)))) {
                  *param_5 = (float)dVar29;
                }
              }
            }
          }
        }
        moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar15);
        iVar15 = iVar15 + 4;
      } while (moby != (MobyInstance *)0x0);
    }
  }
  else {
    pMVar21 = (MobyInstance *)0x0;
  }
  return pMVar21;
}



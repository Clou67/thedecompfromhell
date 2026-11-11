// game/update/moby500.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3a4858-0x3a8060
// shared update function UpdateMoby_500_Crate; registered for oClasses 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
#include "game/update/moby500.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby112.h"
#include "game/update/moby1488.h"
#include "game/update/moby58.h"
#include "game/update/moby806.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x03a4858 (0x4f0 bytes)
// inlined: FastAtan2 @0x3a4a5c, FastAtan2 @0x3a4bfc
MobyInstance * FUN_003a4858(int param_1,float *param_2,f32 *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  MobyInstance *pMVar11;
  undefined8 uVar10;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar13 = uVar9 - 0x110;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar9;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1a] = unaff_r26;
  puVar6[0x19] = unaff_r25;
  puVar6[0x18] = unaff_r24;
  pMVar11 = CreateMoby(ROCKET_0032);
  if (pMVar11 != (MobyInstance *)0x0) {
    pMVar11->updateDistance = -1;
    pMVar11->drawDistance = 0xff;
    pMVar11->enabled = '\x01';
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    pMVar11->state = '\0';
    pMVar11->color = (int)((ulonglong)uVar10 >> 0x20);
    pMVar11->light = (int)uVar10;
    pfVar16 = (float *)pMVar11->pVar;
    pMVar11->scale = pMVar11->scale * 3.0;
    (pMVar11->pos).x = *param_3;
    (pMVar11->pos).y = param_3[1];
    (pMVar11->pos).z = param_3[2];
    (pMVar11->pos).w = param_3[3];
    *pfVar16 = *param_2;
    pfVar16[1] = param_2[1];
    pfVar16[2] = param_2[2];
    pfVar16[3] = param_2[3];
    pfVar16[4] = *param_4;
    pfVar16[5] = param_4[1];
    pfVar16[6] = param_4[2];
    fVar1 = param_4[3];
    pfVar16[0xc] = param_5;
    pfVar16[7] = fVar1;
    pfVar16[8] = param_5;
    pfVar16[9] = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
    dVar19 = (double)MB_randRangeFloat(-DAT_0084343c,DAT_0084343c);
    dVar21 = 0.01745329238474369;
    pfVar16[10] = (float)(dVar19 * 0.01745329238474369);
    dVar22 = 0.0;
    dVar19 = (double)MB_randRangeFloat(0.0,DAT_00843440);
    pfVar16[0xd] = 0.0;
    pfVar16[0xb] = (float)(dVar19 * dVar21);
    fVar1 = *param_2;
    fVar5 = param_2[1];
    dVar20 = ABS((double)*param_2);
    dVar19 = ABS((double)param_2[1]);
    *(float *)(puVar6 + 0xf) = (float)(dVar20 - dVar19);
    MVar4 = pMVar11->modeBits;
    uVar14 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    dVar21 = dVar20;
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar21 = dVar19;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar19 = dVar20;
    }
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar20 = dVar22;
    if (dVar22 < dVar21) {
      lVar12 = uVar9 - 0x100;
      lVar15 = uVar9 - 0x74;
      lVar17 = uVar9 - 100;
      lVar18 = 2;
      fVar2 = (float)(dVar19 - dVar21) / (float)(dVar19 + dVar21);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x15) = fVar2;
      *(float *)(puVar6 + 0x14) = fVar2;
      *(float *)((int)puVar6 + 0xa4) = fVar2;
      *(float *)((int)puVar6 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar2;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar12 = lVar12 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x74;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar12 = lVar13;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar15 = 2;
      lVar12 = lVar13;
      dVar19 = dVar22;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x9c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar5);
    }
    (pMVar11->rotation).z = (float)dVar20;
    fVar1 = param_2[2];
    dVar19 = ABS((double)param_2[2]);
    fVar5 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    dVar20 = ABS((double)fVar5);
    *(float *)(puVar6 + 0xe) = fVar5;
    *(float *)((int)puVar6 + 0x74) = (float)(dVar20 - dVar19);
    uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar21 = ABS((double)*(float *)(puVar6 + 0xe));
    if ((double)*(float *)((int)puVar6 + 0x74) - dVar22 < 0.0) {
      dVar21 = dVar19;
    }
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar6 + 0x74) - dVar22 < 0.0) {
      dVar19 = dVar20;
    }
    if (dVar22 < dVar21) {
      lVar12 = uVar9 - 0x100;
      lVar15 = uVar9 - 0x94;
      lVar17 = uVar9 - 0x84;
      lVar18 = 2;
      fVar2 = (float)(dVar19 - dVar21) / (float)(dVar19 + dVar21);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x11) = fVar2;
      *(float *)(puVar6 + 0x10) = fVar2;
      *(float *)((int)puVar6 + 0x84) = fVar2;
      *(float *)((int)puVar6 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar3;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar2;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar12 = lVar12 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x94;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar12 = lVar13;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar1 + fVar5);
    }
    pMVar11->modeBits = MVar4 | DISABLED;
    pMVar11->enabled = '\0';
    (pMVar11->rotation).y = (float)-dVar22;
  }
  return pMVar11;
}


// 0x03a4d48 (0x14 bytes)
void M511_003a4d48(void)

{
  DAT_008434c8 = 0x10000;
  return;
}


// 0x03a4da0 (0x63c bytes)
void M511_003a4da0(int param_1)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  GPiece<16> auStack_120;
  GPiece<16> auStack_110;
  GPiece<16> local_100;
  float local_f0;
  float local_ec;
  undefined4 local_e0;
  float local_dc;
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar3 = *(float *)(param_1 + 0x10);
  bVar1 = *(short *)(param_1 + 0xa6) != 0x1f5;
  fVar4 = *(float *)(param_1 + 0x14);
  if ((bVar1) && (*(short *)(iVar5 + 0xc6) == 0)) {
    iVar8 = *(int *)(iVar5 + 0xf0);
    if (iVar8 != 0) {
      if (param_1 != 0) {
        *(undefined2 *)(param_1 + 0x36) = 0x7f80;
        iVar8 = *(int *)(iVar5 + 0xf0);
      }
      MB_PlatformLocalToWorld
                (param_1,iVar8,param_1 + 0x10,param_1 + 0x40,auStack_120,auStack_110);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
    }
    uVar7 = g_boltMiningActive;
    if (((Level == Quartu) && (ABS(fVar3 - 166.0) < 6.0)) && (ABS(fVar4 - 193.0) < 6.0)) {
      g_boltMiningActive = 0;
      MB_SpawnBoltsFromCrate(param_1,0x100,0xffffffffffffffff);
      g_boltMiningActive = uVar7;
      return;
    }
    MB_SpawnBoltsFromCrate(param_1,0x100,*(undefined4 *)(iVar5 + 0xc0));
    return;
  }
  if (!bVar1) goto LAB_003a5344;
  bVar2 = *(byte *)(iVar5 + 0xcb);
  if (bVar2 < 6) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
LAB_003a5020:
        local_e0 = 0xffffffff;
      }
      else if (bVar2 < 2) {
        local_e0 = 10;
      }
      else {
        local_e0 = 0x10;
      }
    }
    else if (bVar2 < 4) {
      local_e0 = 0xf;
    }
    else if (bVar2 < 5) {
      local_e0 = 0x14;
    }
    else {
      local_e0 = 0x11;
    }
  }
  else if (bVar2 == 0xb) {
    local_e0 = 0x17;
  }
  else if (bVar2 == 10) {
    local_e0 = 0x13;
  }
  else if (bVar2 == 9) {
    local_e0 = 0x19;
  }
  else if (bVar2 == 8) {
    local_e0 = 0xd;
  }
  else if (bVar2 == 7) {
    local_e0 = 0x18;
  }
  else {
    if (bVar2 != 6) goto LAB_003a5020;
    local_e0 = 0xb;
  }
  iVar8 = MB_DropAmmo(param_1,&local_e0);
  iVar11 = 0;
  if (0 < iVar8) {
    dVar22 = 0.0;
    dVar23 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar26 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    dVar30 = 10.800000190734863;
    dVar31 = -0.5;
    dVar32 = 1.0;
    dVar33 = 0.25;
    do {
      iVar9 = FUN_002ea758(param_1 + 0x10,local_e0,0xffffffffffffffff,0);
      if (iVar9 == 0) break;
      iVar6 = *(int *)(iVar9 + 0x78);
      *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar5 + 0xc4);
      dVar12 = (double)MB_randRot();
      dVar13 = (double)MB_randRangeFloat((float)dVar22,DAT_008434f0);
      fVar4 = DAT_008434f8;
      fVar3 = DAT_008434f4;
      dVar15 = (double)(float)(dVar12 + dVar23);
      dVar14 = (double)(float)(dVar24 - dVar12);
      if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
        dVar14 = dVar12;
      }
      dVar16 = (double)(float)(dVar24 - dVar15);
      if (dVar15 - (double)(float)(dVar24 - dVar15) < 0.0) {
        dVar16 = dVar15;
      }
      dVar20 = (double)(float)(dVar25 - dVar12);
      if ((double)(float)(dVar25 - dVar12) - dVar14 < 0.0) {
        dVar20 = dVar14;
      }
      dVar12 = (double)g_FrameTime;
      dVar14 = (double)(float)(dVar25 - dVar15);
      if ((double)(float)(dVar25 - dVar15) - dVar16 < 0.0) {
        dVar14 = dVar16;
      }
      dVar16 = (double)(float)(dVar20 * dVar20);
      dVar15 = (double)(float)(dVar14 * dVar14);
      dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
      dVar19 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
      dVar17 = (double)(float)(dVar16 * dVar18);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      dVar21 = (double)(float)(dVar15 * dVar19);
      *(float *)(iVar6 + 0x14) =
           (float)((double)(float)(dVar16 * dVar17) * dVar29 +
                  (double)(float)(dVar17 * dVar28 +
                                 (double)(float)(dVar18 * dVar27 +
                                                (double)(float)((double)(float)(dVar16 * dVar20) *
                                                                dVar26 + dVar20)))) *
           (float)(dVar13 * dVar12);
      *(float *)(iVar6 + 0x10) =
           (float)((double)(float)(dVar15 * dVar21) * dVar29 +
                  (double)(float)(dVar21 * dVar28 +
                                 (double)(float)(dVar19 * dVar27 +
                                                (double)(float)((double)(float)(dVar15 * dVar14) *
                                                                dVar26 + dVar14)))) *
           (float)(dVar13 * dVar12);
      dVar14 = (double)MB_randRangeFloat(fVar3,fVar4);
      dVar12 = (double)g_FrameTime;
      *(float *)(iVar6 + 0x18) = (float)(dVar14 * dVar12);
      if (-1 < *(int *)(iVar5 + 0xc0)) {
        dVar13 = (double)(float)((double)(float)((double)DAT_0071f418 * dVar30) * dVar31);
        iVar10 = MB_SolveQuad
                           (dVar13,(double)(float)((double)(float)(dVar14 * dVar12) - dVar13),
                            (double)(*(float *)(iVar9 + 0x18) -
                                    Splines[*(int *)(iVar5 + 0xc0)]->points[0].z));
        if (((double)(longlong)iVar10 < dVar32) ||
           (fVar3 = local_dc,
           (int)local_dc < 1 ||
           0x42efffff <
           (int)(FLOAT_ORDER(local_dc))))
        {
          fVar3 = 120.0;
        }
        dVar17 = (double)fVar3;
        MB_SplineIntersect
                  (*(undefined4 *)(iVar5 + 0xc0),param_1 + 0x10,local_100,&local_f0);
        dVar12 = (double)(local_f0 - *(float *)(iVar9 + 0x10));
        dVar13 = (double)(local_ec - *(float *)(iVar9 + 0x14));
        dVar15 = (double)SQRT((float)(dVar12 * dVar12 + (double)(float)(dVar13 * dVar13)));
        dVar20 = (double)(float)(dVar13 * (double)(float)(dVar33 / dVar15));
        dVar16 = (double)(float)(dVar12 * (double)(float)(dVar33 / dVar15));
        dVar14 = dVar22;
        if (dVar22 - dVar15 < 0.0) {
          dVar14 = dVar20;
        }
        dVar18 = dVar22;
        if (dVar22 - dVar15 < 0.0) {
          dVar18 = dVar16;
        }
        if (dVar15 - dVar22 < 0.0) {
          dVar14 = dVar20;
        }
        if (dVar15 - dVar22 < 0.0) {
          dVar18 = dVar16;
        }
        *(float *)(iVar6 + 0x10) = (float)(dVar12 - dVar18) * (float)(dVar32 / dVar17);
        *(float *)(iVar6 + 0x14) = (float)(dVar13 - dVar14) * (float)(dVar32 / dVar17);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar8);
  }
LAB_003a5344:
  if (*(short *)(param_1 + 0xb4) != 0) {
    *(undefined2 *)(param_1 + 0xb4) = 0;
  }
  MB_SpawnBoltsFromCrate(param_1,0x100,0xffffffffffffffff);
  return;
}


// 0x03a5468 (0xf14 bytes)
// inlined: FastAtan2 @0x3a58a4
void M511_003a5468(undefined8 param_1,char param_2)

{
  bool bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined1 uVar14;
  ulonglong *puVar15;
  MobyInstance *pMoby;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar25;
  ulonglong uVar19;
  longlong lVar20;
  int iVar22;
  MobyInstance *pMVar23;
  int iVar24;
  longlong lVar21;
  longlong lVar26;
  int iVar28;
  longlong lVar27;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  f32 *pfVar29;
  ulonglong unaff_r21;
  float *pfVar30;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f22;
  double dVar39;
  ulonglong in_f23;
  double dVar40;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar41;
  ulonglong in_f28;
  undefined8 uVar42;
  ulonglong in_f29;
  undefined8 uVar43;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x280;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x52] = in_LR;
  puVar15[0x46] = in_f22;
  puVar15[0x47] = in_f23;
  puVar15[0x48] = in_f24;
  puVar15[0x49] = in_f25;
  puVar15[0x4a] = in_f26;
  puVar15[0x4b] = in_f27;
  puVar15[0x4c] = in_f28;
  puVar15[0x4d] = in_f29;
  puVar15[0x4e] = in_f30;
  puVar15[0x4f] = in_f31;
  puVar15[0x45] = unaff_r31;
  puVar15[0x44] = unaff_r30;
  puVar15[0x42] = unaff_r28;
  iVar24 = worldUpdateTime;
  puVar15[0x43] = unaff_r29;
  iVar28 = DAT_010c9264;
  pMoby = (MobyInstance *)param_1;
  pvVar10 = pMoby->pVar;
  puVar15[0x3c] = unaff_r22;
  iVar28 = iVar24 - iVar28;
  puVar15[0x41] = unaff_r27;
  puVar15[0x40] = unaff_r26;
  puVar15[0x3f] = unaff_r25;
  puVar15[0x3e] = unaff_r24;
  puVar15[0x3d] = unaff_r23;
  puVar15[0x3b] = unaff_r21;
  puVar15[0x3a] = unaff_r20;
  puVar15[0x39] = unaff_r19;
  if (1 < iVar28 + (iVar28 >> 0x1f & iVar28 * -2)) {
    if (pMoby->oClass == (GRAB_HELICOPTER|BOLT_CIRCLENUT|CLANK_000A)) {
      sound_MobyPlay_oClass(0,0,pMoby,500);
    }
    else {
      PlayMobySound(0,0,pMoby);
    }
    DAT_010c9264 = worldUpdateTime;
    iVar24 = worldUpdateTime;
  }
  iVar28 = iVar24 - DAT_010c9268;
  bVar1 = iVar28 + (iVar28 >> 0x1f & iVar28 * -2) < 2;
  if (!bVar1) {
    DAT_010c9268 = iVar24;
  }
  if (*(int *)((int)pvVar10 + 0xa0) != 0) {
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa0) + 0x78) + 0xa4) =
         *(undefined4 *)((int)pvVar10 + 0xa4);
    iVar24 = *(int *)(*(int *)((int)pvVar10 + 0xa0) + 0x78);
    *(uint *)(iVar24 + 0xac) = *(uint *)(iVar24 + 0xac) | 4;
  }
  if (*(int *)((int)pvVar10 + 0xa4) != 0) {
    bVar25 = MB_isCrate
                       (*(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78) + 0xa0));
    trapWord(4,(longlong)bVar25,0);
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78) + 0xa0) =
         *(undefined4 *)((int)pvVar10 + 0xa0);
    iVar24 = *(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78);
    *(uint *)(iVar24 + 0xac) = *(uint *)(iVar24 + 0xac) | 4;
  }
  fVar2 = (pMoby->pos).y;
  *(f32 *)(puVar15 + 0x10) = (pMoby->pos).x;
  fVar3 = (pMoby->pos).w;
  *(f32 *)((int)puVar15 + 0x84) = fVar2;
  *(f32 *)((int)puVar15 + 0x8c) = fVar3;
  uVar47 = 0x3fd3333340000000;
  *(float *)(puVar15 + 0x11) = (pMoby->pos).z + 0.3;
  uVar45 = 0x3ff028f5c0000000;
  uVar43 = 0x3fa99999a0000000;
  uVar42 = 0x40e86a0000000000;
  SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,uVar18 - 0x200);
  iVar24 = 0;
  uVar41 = 0x3ff11eb860000000;
  do {
    SpawnPart_13(uVar47,uVar45,uVar41,uVar43,uVar42,uVar18 - 0x200);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 5);
  MVar9 = pMoby->oClass;
  if ((short)MVar9 < 0x1f8) {
    if (500 < (short)MVar9) {
      if ((short)MVar9 < 0x1f6) {
        lVar31 = 0x15c;
      }
      else if ((short)MVar9 < 0x1f7) {
        lVar31 = 0x162;
      }
      else {
        lVar31 = 0x15f;
      }
      goto LAB_003a5778;
    }
    if ((short)MVar9 < 500) {
LAB_003a5774:
      lVar31 = 0x95;
      goto LAB_003a5778;
    }
  }
  else {
    if ((short)MVar9 < 0x1fb) {
      if ((short)MVar9 < 0x1f9) {
        lVar31 = 0x168;
      }
      else if ((short)MVar9 < 0x1fa) {
        lVar31 = 0x16b;
      }
      else {
        lVar31 = 0x16e;
      }
      goto LAB_003a5778;
    }
    if ((short)MVar9 < 0x1ff) {
      lVar31 = 0x171;
      goto LAB_003a5778;
    }
    if (0x1ff < (short)MVar9) goto LAB_003a5774;
  }
  lVar31 = 0x165;
LAB_003a5778:
  if (numSpawnableMobys < 0xc9) {
    if (numSpawnableMobys < 0x97) {
      if (numSpawnableMobys < 0x65) {
        if (numSpawnableMobys < 0x33) {
          iVar28 = 1;
          iVar24 = 0;
        }
        else {
          iVar28 = 1;
          iVar24 = 0;
        }
      }
      else {
        iVar28 = 2;
        iVar24 = 1;
      }
    }
    else {
      iVar28 = 2;
      iVar24 = 2;
    }
  }
  else {
    iVar28 = 4;
    iVar24 = 4;
  }
  fVar5 = GameCamera.posX - (pMoby->pos).x;
  fVar4 = GameCamera.posY - (pMoby->pos).y;
  fVar6 = ABS(fVar5);
  fVar8 = ABS(fVar4);
  *(float *)(puVar15 + 0x2a) = fVar5;
  *(float *)((int)puVar15 + 0x154) = fVar4;
  *(float *)(puVar15 + 0x2b) = fVar6 - fVar8;
  dVar40 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar15 + 0x2a));
  if (*(float *)(puVar15 + 0x2b) - 0.0 < 0.0) {
    fVar5 = fVar8;
  }
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar7 = ABS(*(float *)((int)puVar15 + 0x154));
  if (*(float *)(puVar15 + 0x2b) - 0.0 < 0.0) {
    fVar7 = fVar6;
  }
  dVar33 = dVar40;
  if (0.0 < fVar5) {
    lVar20 = uVar18 - 0x270;
    lVar27 = uVar18 - 0xe4;
    lVar26 = uVar18 - 0xf4;
    lVar32 = 2;
    fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x33) = fVar5;
    *(float *)(puVar15 + 0x32) = fVar5;
    *(float *)((int)puVar15 + 0x194) = fVar5;
    *(float *)((int)puVar15 + 0x18c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar15 + 0x32) = *(float *)(puVar15 + 0x32) * fVar6;
    *(float *)((int)puVar15 + 0x194) = *(float *)((int)puVar15 + 0x194) * fVar5;
    *(float *)(puVar15 + 0x33) = *(float *)(puVar15 + 0x33) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar5 * fVar5;
      iVar22 = (int)lVar26;
      lVar26 = lVar26 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
      lVar27 = lVar27 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar32 = 4;
    lVar27 = uVar18 - 0xf4;
    pfVar30 = (float *)&DAT_007358e0;
    lVar20 = lVar21;
    lVar26 = lVar27;
    do {
      fVar5 = *pfVar30;
      fVar6 = pfVar30[1];
      pfVar30 = pfVar30 + 2;
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar5;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
      lVar26 = lVar26 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar21;
      iVar16 = (int)lVar27;
      lVar21 = lVar21 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar22 + 0x18c)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar8 + fVar4);
  }
  dVar33 = (double)FastDiffRots(dVar33,(double)(pMoby->rotation).z);
  iVar22 = FastDoubleToInt((double)((float)(dVar33 + 3.141592502593994) * 0.6369426));
  puVar15[0x36] = (longlong)iVar22;
  dVar33 = (double)FastAddRots((float)(longlong)puVar15[0x36] * 1.57);
  *(undefined4 *)((int)puVar15 + 0x9c) = 0;
  *(undefined4 *)((int)puVar15 + 0x94) = 0;
  *(undefined4 *)(puVar15 + 0x12) = 0;
  *(float *)(puVar15 + 0x13) = (float)dVar33;
  FastEulerToMtx(uVar18 - 0x160,uVar18 - 0x1f0);
  iVar22 = 0;
  if (iVar28 != 0) {
    pfVar30 = (float *)&DAT_00843500;
    pfVar29 = (f32 *)&DAT_00843560;
    dVar48 = 1.0;
    dVar46 = 5.0;
    dVar44 = 4.0;
    dVar33 = 9.0;
    do {
      fVar5 = pfVar30[1];
      fVar4 = *pfVar30;
      fVar8 = pfVar30[2];
      *(float *)((int)puVar15 + 0xbc) =
           *(float *)((int)puVar15 + 0x14c) * fVar8 +
           *(float *)((int)puVar15 + 300) * fVar4 + *(float *)((int)puVar15 + 0x13c) * fVar5 +
           pfVar30[3];
      fVar6 = (pMoby->pos).y;
      fVar7 = (pMoby->pos).z;
      *(float *)(puVar15 + 0x16) =
           *(float *)(puVar15 + 0x28) * fVar8 +
           *(float *)(puVar15 + 0x24) * fVar4 + *(float *)(puVar15 + 0x26) * fVar5 + (pMoby->pos).x;
      *(float *)((int)puVar15 + 0xb4) =
           *(float *)((int)puVar15 + 0x144) * fVar8 +
           *(float *)((int)puVar15 + 0x124) * fVar4 + *(float *)((int)puVar15 + 0x134) * fVar5 +
           fVar6;
      *(float *)(puVar15 + 0x17) =
           *(float *)(puVar15 + 0x29) * fVar8 +
           *(float *)(puVar15 + 0x25) * fVar4 + *(float *)(puVar15 + 0x27) * fVar5 + fVar7;
      *(f32 *)(puVar15 + 0x18) = *pfVar29;
      *(f32 *)((int)puVar15 + 0xc4) = pfVar29[1];
      fVar5 = pfVar29[2];
      *(float *)(puVar15 + 0x19) = fVar5;
      *(f32 *)((int)puVar15 + 0xcc) = pfVar29[3];
      dVar34 = (double)FastWrapRot(fVar5,*(float *)(puVar15 + 0x13));
      fVar5 = (pMoby->pos).x;
      fVar4 = (pMoby->pos).y;
      *(float *)(puVar15 + 0x19) = (float)dVar34;
      *(undefined4 *)(puVar15 + 0x15) = 0;
      *(undefined4 *)((int)puVar15 + 0xac) = *(undefined4 *)((int)puVar15 + 0xbc);
      *(float *)(puVar15 + 0x14) = *(float *)(puVar15 + 0x16) - fVar5;
      *(float *)((int)puVar15 + 0xa4) = *(float *)((int)puVar15 + 0xb4) - fVar4;
      dVar34 = (double)MB_randRangeFloat((float)dVar48,(float)dVar46);
      fVar4 = *(float *)((int)puVar15 + 0xa4);
      fVar8 = *(float *)(puVar15 + 0x14);
      fVar6 = *(float *)(puVar15 + 0x15);
      dVar38 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
      fVar5 = (float)((double)(float)(dVar34 * (double)g_FrameTime) / dVar38);
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar8 * fVar5);
      }
      dVar35 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar35 = (double)(fVar4 * fVar5);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar6 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar8 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar35 = (double)(fVar4 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar15 + 0x14) = (float)dVar34;
      *(float *)((int)puVar15 + 0xa4) = (float)dVar35;
      *(float *)(puVar15 + 0x15) = (float)dVar36;
      dVar34 = (double)MB_randRangeFloat((float)dVar44,(float)dVar33);
      *(float *)(puVar15 + 0x15) = (float)(dVar34 * (double)g_FrameTime);
      MB_randInt(2);
      pMVar23 = (MobyInstance *)
                M1488_0028cce0(dVar48,dVar48,param_1,uVar18 - 0x1e0,uVar18 - 0x1d0,uVar18 - 0x1c0,
                               lVar31);
      if (pMVar23 != (MobyInstance *)0x0) {
        (pMVar23->rotation).x = *pfVar29;
        (pMVar23->rotation).y = pfVar29[1];
        fVar5 = pfVar29[2];
        (pMVar23->rotation).z = fVar5;
        (pMVar23->rotation).w = pfVar29[3];
        dVar34 = (double)FastWrapRot(fVar5,*(float *)(puVar15 + 0x13));
        (pMVar23->rotation).z = (float)dVar34;
        UpdateMobyTransform(pMVar23);
      }
      iVar22 = iVar22 + 1;
      pfVar30 = pfVar30 + 4;
      pfVar29 = pfVar29 + 4;
    } while (iVar22 < iVar28);
  }
  iVar28 = 0;
  if (iVar24 != 0) {
    dVar38 = -0.5;
    dVar34 = 0.5;
    dVar48 = 1.0;
    dVar46 = 6.0;
    dVar44 = 12.0;
    dVar33 = 3.0;
    uVar41 = 0x3fd0000000000000;
    do {
      dVar35 = (double)MB_randRangeFloat((float)dVar38,(float)dVar34);
      *(float *)(puVar15 + 0x1c) = (float)dVar35;
      dVar35 = (double)MB_randRangeFloat((float)dVar38,(float)dVar34);
      *(float *)((int)puVar15 + 0xe4) = (float)dVar35;
      dVar35 = (double)MB_randRangeFloat((float)dVar40,(float)dVar48);
      fVar5 = (pMoby->pos).y;
      fVar4 = (pMoby->pos).z;
      *(float *)(puVar15 + 0x1c) = *(float *)(puVar15 + 0x1c) + (pMoby->pos).x;
      *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) + fVar5;
      *(float *)(puVar15 + 0x1d) = (float)(dVar35 + (double)fVar4);
      dVar35 = (double)MB_randRangeFloat((float)dVar46,(float)dVar44);
      MB_randSphere
                ((double)(float)(dVar35 * (double)g_FrameTime),
                 (double)(float)(dVar35 * (double)g_FrameTime),uVar18 - 0x1b0);
      if (*(int *)(puVar15 + 0x1b) < 0) {
        *(float *)(puVar15 + 0x1b) = -*(float *)(puVar15 + 0x1b);
      }
      dVar35 = (double)MB_randRot();
      *(float *)(puVar15 + 0x1e) = (float)dVar35;
      *(undefined4 *)((int)puVar15 + 0xf4) = 0;
      dVar35 = (double)MB_randRot();
      *(float *)(puVar15 + 0x1f) = (float)dVar35;
      iVar22 = MB_randInt(6);
      if (iVar22 == 0) {
        MB_randRangeFloat((float)dVar33,(float)dVar46);
        FastDoubleToInt();
      }
      M1488_0028cce0(uVar41,dVar34,param_1,uVar18 - 0x1b0,uVar18 - 0x1a0,uVar18 - 400,lVar31 + 1);
      iVar28 = iVar28 + 1;
    } while (iVar28 < iVar24);
  }
  auVar49 = ZEXT416(0xffffffff);
  auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  pMoby->state = '\x03';
  pMoby->collision = (ushort *)0x0;
  auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar49 = loadVectorLeftIndexed(0x54,0x3a53dc);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  dVar33 = 15.5;
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xff;
  cVar13 = storeVectorElementByteIndexed
                     (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20 |
                      auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                      auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                      auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar13;
  if (param_2 != '\0') {
    auVar49 = ZEXT416(1);
    auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
    if (g_heroStateType == 0x16) {
      auVar49 = ZEXT416(0xffffffff);
      auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar49 = loadVectorLeftIndexed(0x58,0x3a53dc);
      auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                           auVar50);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
    }
    auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xff;
    uVar14 = storeVectorElementByteIndexed
                       (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20
                        | auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                        auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                        auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xca,ZEXT48(pvVar10));
    *(undefined1 *)((int)pvVar10 + 0xca) = uVar14;
    fVar5 = (pMoby->transform).v2.y;
    fVar4 = (pMoby->transform).v2.x;
    fVar8 = (pMoby->transform).v2.z;
    dVar44 = (double)(pMoby->pos).x;
    dVar46 = (double)(pMoby->pos).y;
    dVar48 = (double)(pMoby->pos).z;
    dVar34 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
    if (dVar34 == dVar40) {
      fVar7 = (pMoby->transform).v2.w;
      dVar34 = dVar40;
      dVar38 = dVar40;
      dVar35 = dVar40;
    }
    else {
      fVar6 = (float)(0.5 / dVar34);
      fVar7 = (pMoby->transform).v2.w;
      dVar35 = (double)(fVar4 * fVar6);
      dVar34 = (double)(fVar5 * fVar6);
      dVar38 = (double)(fVar8 * fVar6);
    }
    fVar5 = (float)((double)GameCamera.posY - dVar46);
    fVar4 = (float)((double)GameCamera.posX - dVar44);
    fVar8 = (float)((double)GameCamera.posZ - dVar48);
    *(float *)((int)puVar15 + 0x10c) = fVar7;
    iVar24 = 10;
    *(float *)(puVar15 + 0x20) = (float)(dVar35 + dVar44);
    *(float *)((int)puVar15 + 0x104) = (float)(dVar34 + dVar46);
    *(float *)(puVar15 + 0x21) = (float)(dVar38 + dVar48);
    *(undefined4 *)((int)puVar15 + 0x11c) = 0;
    *(undefined4 *)(puVar15 + 0x23) = 0;
    *(undefined4 *)((int)puVar15 + 0x114) = 0;
    *(undefined4 *)(puVar15 + 0x22) = 0;
    dVar44 = 8.0;
    dVar46 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
    if (dVar46 < 8.0) {
      iVar24 = FastDoubleToInt(dVar46);
      iVar24 = iVar24 + 2;
    }
    if (dVar46 - 7.0 < 0.0) {
      dVar40 = (double)(float)(7.0 - dVar46);
    }
    if ((bVar1) && (6 < iVar24)) {
      iVar24 = 6;
    }
    iVar28 = 0;
    if (0 < iVar24) {
      dVar35 = 10.0;
      uVar41 = 0x41186a0000000000;
      dVar38 = 20.5;
      dVar34 = 25.5;
      dVar48 = 30.5;
      do {
        dVar36 = (double)MB_randRangeFloat((float)dVar44,(float)dVar35);
        dVar37 = (double)g_FrameTime;
        *(undefined4 *)((int)puVar15 + 0x15c) = 0x4f008fff;
        *(undefined4 *)(puVar15 + 0x2c) = 0x4f008fff;
        *(undefined4 *)((int)puVar15 + 0x164) = 0x4f007fff;
        *(undefined4 *)(puVar15 + 0x2d) = 0x4f006fff;
        *(undefined4 *)((int)puVar15 + 0x16c) = 0x2fffffff;
        *(undefined4 *)(puVar15 + 0x2e) = 0x2fffffff;
        dVar39 = (double)(float)(dVar36 * dVar37 - (double)(float)(dVar37 * dVar40));
        *(undefined4 *)((int)puVar15 + 0x174) = 0x2f005f7f;
        *(undefined4 *)(puVar15 + 0x2f) = 0x2f004f7f;
        *(undefined4 *)((int)puVar15 + 0x17c) = 0x2f003f7f;
        *(undefined4 *)(puVar15 + 0x30) = 0x2f00004f;
        *(undefined4 *)((int)puVar15 + 0x184) = 0x2f000000;
        *(undefined4 *)(puVar15 + 0x31) = 0x3f000000;
        lVar21 = MB_randInt(dVar36,dVar37,(double)(float)(dVar37 * dVar40),6);
        uVar11 = *(undefined4 *)((int)puVar15 + (int)(lVar21 << 2) + 0x15c);
        lVar21 = MB_randInt(6);
        dVar36 = (double)animationSpeed;
        uVar12 = *(undefined4 *)((int)puVar15 + (int)(lVar21 << 2) + 0x174);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar33);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar38);
        MB_randRange
                  (*(undefined4 *)((int)puVar15 + 0x1b4),*(undefined4 *)((int)puVar15 + 0x1b4));
        dVar36 = (double)animationSpeed;
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar34);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar48);
        MB_randRange
                  (*(undefined4 *)((int)puVar15 + 0x1b4),*(undefined4 *)((int)puVar15 + 0x1b4));
        puVar15[0xe] = 0;
        puVar15[0xf] = 0;
        SpawnPart_11(uVar41,dVar39,uVar18 - 0x180,uVar18 - 0x170,uVar11,uVar12);
        iVar28 = iVar28 + 1;
      } while (iVar28 < iVar24);
    }
    uVar17 = (uint)((int)g_FrameLoad >> 0x1f) >> 1;
    if (((int)((uVar17 ^ g_FrameLoad) - ((int)g_FrameLoad >> 0x1f)) < 0x3f733333) &&
       (!bVar1 && 9.0 < dVar46)) {
      dVar40 = (double)animationSpeed;
      lVar31 = uVar18 - 0x180;
      lVar21 = uVar18 - 0x170;
      uVar41 = 0x4010000000000000;
      puVar15[0xe] = 0x20;
      puVar15[0x36] = (longlong)(int)(dVar40 * dVar33);
      FUN_001d4d88(0x4010000000000000,param_1,lVar31,lVar21,uVar17,
                   *(undefined4 *)((int)puVar15 + 0x1b4),0x7f,0x7f,0x7f);
      fVar5 = animationSpeed;
      puVar15[0xe] = 0x20;
      puVar15[0x36] = (longlong)(int)(fVar5 * 24.5);
      FUN_001d4d88(uVar41,param_1,lVar31,lVar21);
      fVar5 = animationSpeed * 20.5;
      puVar15[0xe] = 0x30;
      puVar15[0x36] = (longlong)(int)fVar5;
      FUN_001d4d88(uVar41,param_1,lVar31,lVar21,0x30,*(undefined4 *)((int)puVar15 + 0x1b4),0x7f,0x40
                   ,0);
    }
    fVar5 = animationSpeed * 27.5;
    puVar15[0xe] = 0x40;
    puVar15[0x36] = (longlong)(int)fVar5;
    FUN_001d4d88(0x400c000000000000,param_1,uVar18 - 0x180,uVar18 - 0x170);
    fVar5 = animationSpeed * 29.5;
    puVar15[0xe] = 0x20;
    puVar15[0x36] = (longlong)(int)fVar5;
    FUN_001d4d88(0x4008000000000000,param_1,uVar18 - 0x180,uVar18 - 0x170,0x20,
                 *(undefined4 *)((int)puVar15 + 0x1b4),0x20,0,0);
  }
  return;
}


// 0x03a6388 (0x994 bytes)
MobyInstance * M511_003a6388(MobyInstance *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  Spline *pSVar7;
  MobyInstance *pMVar8;
  int iVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  int iVar12;
  undefined8 in_LR;
  double dVar13;
  double dVar14;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> local_60;
  MobyInstance *local_50;
  MobyInstance *local_4c;
  MobyInstance *local_48 [2];
  
  pvVar4 = param_1->pVar;
  bVar1 = param_1->group;
  *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 4;
  local_50 = param_1;
  if (bVar1 == 0xff) {
    if ((((param_1->oClass == BOLT_CRATE) && (iVar9 = MB_randInt(2), iVar9 != 0)) &&
        ((local_50->rotation).x == 0.0)) && ((local_50->rotation).y == 0.0)) {
      dVar13 = (double)FastWrapRot((local_50->rotation).z,1.5707964);
      (local_50->rotation).z = (float)dVar13;
    }
    if (((local_50->oClass == NANOTECH_CRATE) && (local_50->levelFlagIdx != 0xff)) &&
       ((int)(&DAT_00a0fcd4)[(byte)local_50->levelFlagIdx] < *(int *)((int)pvVar4 + 0xf8))) {
      pMVar10 = (MobyInstance *)DeleteMoby(local_50);
    }
    else {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0x3f800000;
      *(short *)((int)pvVar4 + 0xc4) = (short)local_50->field71_0xa8;
      *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 1;
      iVar9 = CollLine(local_90,local_80,2,0,0);
      fVar3 = g_CollOutput.ip.z;
      if (iVar9 == 0) {
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        pMVar10 = (MobyInstance *)0x0;
      }
      else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        (local_50->pos).z = fVar3;
        pMVar10 = (MobyInstance *)0x0;
      }
      else {
        bVar11 = MB_isCrate(g_CollOutput.pMoby);
        pMVar10 = (MobyInstance *)(int)bVar11;
        if (!bVar11) {
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          pMVar10 = g_CollOutput.pMoby;
          *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
          iVar9 = MB_GetPlatformParent(pMVar10);
          pMVar10 = g_CollOutput.pMoby;
          if (iVar9 != 0) {
            if (local_50 != (MobyInstance *)0x0) {
              local_50->occlIndex = 0x7f80;
            }
            MB_PlatformWorldToLocal
                      (local_4c,pMVar10,&local_50->pos,&local_50->rotation,(int)pvVar4 + 0xd0,
                       (int)pvVar4 + 0xe0);
            pMVar10 = (MobyInstance *)0x0;
            *(MobyInstance **)((int)pvVar4 + 0xf0) = g_CollOutput.pMoby;
            *(undefined4 *)((int)pvVar4 + 0xf4) = 0;
          }
        }
      }
    }
  }
  else {
    MB_GetFirstMobyInGroup(&local_50,(uint)bVar1,'\0','\0');
    if (local_50 != (MobyInstance *)0x0) {
      dVar13 = 1.5707963705062866;
      do {
        pvVar4 = local_50->pVar;
        bVar11 = MB_isCrate(local_50);
        if (bVar11) {
          if ((((local_50->oClass == BOLT_CRATE) && (iVar9 = MB_randInt(2), iVar9 != 0))
              && ((local_50->rotation).x == 0.0)) && ((local_50->rotation).y == 0.0)) {
            dVar14 = (double)FastWrapRot((local_50->rotation).z,(float)dVar13);
            (local_50->rotation).z = (float)dVar14;
          }
          if (((local_50->oClass == NANOTECH_CRATE) && (local_50->levelFlagIdx != 0xff)) &&
             ((int)(&DAT_00a0fcd4)[(byte)local_50->levelFlagIdx] < *(int *)((int)pvVar4 + 0xf8))) {
            DeleteMoby(local_50);
          }
          else {
            *(undefined4 *)((int)pvVar4 + 0xb0) = 0x3f800000;
            *(short *)((int)pvVar4 + 0xc4) = (short)local_50->field71_0xa8;
            *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 1;
            iVar9 = CollLine(local_90,local_80,2,0,0);
            fVar3 = g_CollOutput.ip.z;
            if (iVar9 == 0) {
              *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
            }
            else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
              *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
              (local_50->pos).z = fVar3;
            }
            else {
              bVar11 = MB_isCrate(g_CollOutput.pMoby);
              if ((bVar11) ||
                 ((g_CollOutput.pMoby)->oClass == 0x129 ||
                  (g_CollOutput.pMoby)->oClass == CONVEYOR_BELT_0128)) {
                if ((g_CollOutput.pMoby)->pVar == (void *)0x0) {
                  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                }
                else if ((g_CollOutput.pMoby)->group == local_50->group) {
                  bVar11 = MB_isCrate(g_CollOutput.pMoby);
                  if (bVar11) {
                    *(MobyInstance **)((int)pvVar4 + 0xa4) = g_CollOutput.pMoby;
                    pMVar10 = g_CollOutput.pMoby;
                    (local_50->pos).x = ((g_CollOutput.pMoby)->pos).x;
                    (local_50->pos).y = (pMVar10->pos).y;
                    (local_50->pos).z = (pMVar10->pos).z;
                    (local_50->pos).w = (pMVar10->pos).w;
                    pvVar4 = pMVar10->pVar;
                    (local_50->pos).x = (local_50->pos).x + (pMVar10->transform).v2.x;
                    (local_50->pos).y = (local_50->pos).y + (pMVar10->transform).v2.y;
                    (local_50->pos).z = (local_50->pos).z + (pMVar10->transform).v2.z;
                    bVar11 = MB_isCrate(local_50);
                    if (bVar11) {
                      *(MobyInstance **)((int)pvVar4 + 0xa0) = local_50;
                    }
                    else {
                      trapWord(0x1f,in_LR,in_LR);
                      *(undefined4 *)((int)pvVar4 + 0xa0) = 0;
                    }
                  }
                  else {
                    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                    *(undefined4 *)((int)pvVar4 + 0xcc) = 0;
                    (local_50->pos).z = g_CollOutput.ip.z;
                  }
                }
                else {
                  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                }
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                local_50->updateDistance = -1;
                *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
              }
            }
          }
        }
        MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      } while (local_50 != (MobyInstance *)0x0);
    }
    MB_GetFirstMobyInGroup(&local_4c,(uint)bVar1,'\0','\0');
    while (local_4c != (MobyInstance *)0x0) {
      pvVar4 = local_4c->pVar;
      bVar11 = MB_isCrate(local_4c);
      if ((bVar11) && (*(int *)((int)pvVar4 + 0xa4) == 0)) {
        iVar9 = CollLine(local_70,local_60,2,0,0);
        pMVar10 = local_4c;
        if ((iVar9 != 0) &&
           ((pMVar10 = local_4c, g_CollOutput.pMoby != (MobyInstance *)0x0 &&
            (iVar9 = MB_GetPlatformParent(), pMVar8 = g_CollOutput.pMoby, pMVar10 = local_4c
            , iVar9 != 0)))) {
          if (local_50 != (MobyInstance *)0x0) {
            local_50->occlIndex = 0x7f80;
          }
          MB_PlatformWorldToLocal
                    (local_4c,pMVar8,&local_4c->pos,&local_4c->rotation,(int)pvVar4 + 0xd0,
                     (int)pvVar4 + 0xe0);
          *(MobyInstance **)((int)pvVar4 + 0xf0) = g_CollOutput.pMoby;
          *(undefined4 *)((int)pvVar4 + 0xf4) = 0;
          *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
          pMVar10 = local_4c;
        }
        while (local_50 = pMVar10, local_50 != (MobyInstance *)0x0) {
          pvVar4 = local_50->pVar;
          if (((*(int *)((int)pvVar4 + 0xa4) != 0) &&
              (iVar9 = *(int *)(*(int *)((int)pvVar4 + 0xa4) + 0x78), iVar9 != 0)) &&
             (*(undefined4 *)((int)pvVar4 + 0xcc) = *(undefined4 *)(iVar9 + 0xcc),
             *(int *)(iVar9 + 0xf0) != 0)) {
            local_50->updateDistance = -1;
            *(undefined4 *)((int)pvVar4 + 0xd0) = *(undefined4 *)(iVar9 + 0xd0);
            *(undefined4 *)((int)pvVar4 + 0xd4) = *(undefined4 *)(iVar9 + 0xd4);
            *(undefined4 *)((int)pvVar4 + 0xd8) = *(undefined4 *)(iVar9 + 0xd8);
            *(undefined4 *)((int)pvVar4 + 0xdc) = *(undefined4 *)(iVar9 + 0xdc);
            *(undefined4 *)((int)pvVar4 + 0xe0) = *(undefined4 *)(iVar9 + 0xe0);
            *(undefined4 *)((int)pvVar4 + 0xe4) = *(undefined4 *)(iVar9 + 0xe4);
            *(undefined4 *)((int)pvVar4 + 0xe8) = *(undefined4 *)(iVar9 + 0xe8);
            uVar2 = *(undefined4 *)(iVar9 + 0xec);
            *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
            *(undefined4 *)((int)pvVar4 + 0xec) = uVar2;
            fVar3 = *(float *)(iVar9 + 0xf4);
            *(undefined4 *)((int)pvVar4 + 0xf0) = *(undefined4 *)(iVar9 + 0xf0);
            *(float *)((int)pvVar4 + 0xf4) = fVar3 + 1.0;
          }
          if (((*(short *)((int)pvVar4 + 0xc6) != 0) || (local_50->oClass == NANOTECH_CRATE)) &&
             ((*(int *)((int)pvVar4 + 0xa0) != 0 && (*(int *)((int)pvVar4 + 0xc0) != -1)))) {
            pSVar7 = Splines[*(int *)((int)pvVar4 + 0xc0)];
            if (pSVar7->cnt == 0) {
              *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
            }
            else {
              fVar3 = pSVar7->points[0].w;
              if ((fVar3 == 1.4013e-45) || (fVar3 == 4.2039e-45)) {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
              else if (fVar3 == 3.82554e-43) {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
              else if (((int)fVar3 < 0x11) || (0x110 < (int)fVar3)) {
                pSVar7->points[0].w = 2.38221e-44;
                iVar9 = 0;
                if (0 < Splines[*(int *)((int)pvVar4 + 0xc0)]->cnt) {
                  iVar5 = *(int *)((int)pvVar4 + 0xc0);
                  iVar12 = 0;
                  do {
                    iVar9 = iVar9 + 1;
                    iVar6 = *(int *)((int)pvVar4 + 0xc0);
                    pSVar7 = Splines[iVar6];
                    *(undefined4 *)((int)&Splines[iVar5]->points[0].w + iVar12) = 0;
                    iVar5 = iVar6;
                    iVar12 = iVar12 + 0x10;
                  } while (iVar9 < pSVar7->cnt);
                }
              }
              else if ((int)fVar3 + -0x10 < pSVar7->cnt) {
                pSVar7->points[0].w = (float)((int)fVar3 + 1);
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
            }
          }
          pMVar10 = *(MobyInstance **)((int)pvVar4 + 0xa0);
        }
      }
      MB_GetNextMobyInGroup(&local_4c,local_4c,'\0','\0');
    }
    pMVar10 = (MobyInstance *)MB_GetFirstMobyInGroup(&local_50,(uint)bVar1,'\0','\0');
    if (local_50 != (MobyInstance *)0x0) {
      do {
        bVar11 = MB_isCrate(local_50);
        if (bVar11) {
          MB_GetNextMobyInGroup(local_48,local_50,'\0','\0');
          while (local_48[0] != (MobyInstance *)0x0) {
            MB_isCrate(local_48[0]);
            MB_GetNextMobyInGroup(local_48,local_48[0],'\0','\0');
          }
        }
        pMVar10 = (MobyInstance *)MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      } while (local_50 != (MobyInstance *)0x0);
    }
  }
  return pMVar10;
}


// 0x03a6d40 (0x5e0 bytes)
void M511_003a6d40(ulonglong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int moby;
  float fVar9;
  ulonglong uVar10;
  bool bVar12;
  int iVar11;
  ulonglong uVar13;
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
  double dVar24;
  float fVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  if (*(int *)(*(int *)((int)param_1 + 0x78) + 0xb4) != worldUpdateTime) {
    do {
      uVar13 = param_1;
      uVar6 = *(uint *)(*(int *)((int)uVar13 + 0x78) + 0xa4);
      param_1 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    dVar24 = 0.550000011920929;
    dVar23 = 0.0;
    dVar22 = 9.800000190734863;
    dVar21 = -0.30000001192092896;
    dVar20 = 0.30000001192092896;
    dVar19 = 10.0;
    dVar18 = 1.0;
    dVar17 = 0.5;
    do {
      moby = (int)uVar13;
      iVar7 = *(int *)(moby + 0x78);
      uVar6 = *(uint *)(iVar7 + 0xac);
      uVar8 = *(uint *)(iVar7 + 0xa0);
      *(uint *)(iVar7 + 0xac) =
           uVar6 + ((uint)(ZERO_MASK((uVar6 & 4))) & (uVar6 & 0xffffffef) - uVar6)
           & 0xfffffffb;
      bVar12 = MB_isCrate(moby);
      if (!bVar12) {
        return;
      }
      if ((*(uint *)(iVar7 + 0xac) & 2) != 0) {
        return;
      }
      *(int *)(iVar7 + 0xb4) = worldUpdateTime;
      cVar1 = *(char *)(moby + 0x20);
      if (cVar1 != '\0') {
        fVar25 = g_heroPosition.y - *(float *)(moby + 0x14);
        fVar5 = g_heroPosition.x - *(float *)(moby + 0x10);
        fVar9 = g_heroPosition.z - *(float *)(moby + 0x18);
        dVar15 = (double)(*(float *)(moby + 0xe8) * fVar9 +
                         *(float *)(moby + 200) * fVar5 + *(float *)(moby + 0xd8) * fVar25);
        if (((((ABS((double)(*(float *)(moby + 0xe0) * fVar9 +
                            *(float *)(moby + 0xc0) * fVar5 + *(float *)(moby + 0xd0) * fVar25)) <
                dVar24) &&
              (ABS((double)(*(float *)(moby + 0xe4) * fVar9 +
                           *(float *)(moby + 0xc4) * fVar5 + *(float *)(moby + 0xd4) * fVar25)) <
               dVar24)) && (dVar15 < dVar23)) &&
            (-(double)(g_heroCollTop + g_heroCollRadius) < dVar15)) &&
           ((cVar1 == '\x01' || (cVar1 == '\x05')))) {
          M511_003a5468(uVar13,(ulonglong)(LZCOUNT(*(ushort *)(moby + 0xa6) - 0x1f9) << 0x20) >>
                               0x25,0);
          M511_003a4da0(uVar13);
        }
        dVar14 = (double)DAT_0071f418;
        dVar15 = -(double)(float)(dVar14 * dVar22 - (double)*(float *)(iVar7 + 0x48));
        if (dVar15 - dVar21 < 0.0) {
          dVar15 = dVar21;
        }
        if (dVar20 - dVar15 < 0.0) {
          dVar15 = dVar20;
        }
        *(float *)(iVar7 + 0x48) = (float)dVar15;
        if (*(int *)(iVar7 + 0xf0) == 0) {
          if (*(int *)(iVar7 + 0xa4) == 0) {
            iVar11 = CollLine(uVar10 - 0xd0,uVar10 - 0xc0,2,0,0);
            fVar25 = g_CollOutput.ip.z;
          }
          else {
            iVar11 = 0;
            fVar25 = (float)((double)*(float *)(*(int *)(iVar7 + 0xa4) + 0x18) + dVar18);
            if ((float)((double)*(float *)(moby + 0x18) + dVar15) < fVar25) {
              iVar11 = 1;
            }
          }
          if (iVar11 == 0) {
            *(uint *)(iVar7 + 0xac) = *(uint *)(iVar7 + 0xac) | 4;
            *(float *)(moby + 0x10) = *(float *)(moby + 0x10) + *(float *)(iVar7 + 0x40);
            *(float *)(moby + 0x14) = *(float *)(moby + 0x14) + *(float *)(iVar7 + 0x44);
            *(float *)(moby + 0x18) = *(float *)(moby + 0x18) + *(float *)(iVar7 + 0x48);
          }
          else {
            if ((float)((double)g_FrameTime * dVar17) <
                SQRT(*(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x48) +
                     *(float *)(iVar7 + 0x40) * *(float *)(iVar7 + 0x40) +
                     *(float *)(iVar7 + 0x44) * *(float *)(iVar7 + 0x44))) {
              if ((*(short *)(moby + 0xa6) == 0x1f9) && (*(char *)(moby + 0x20) == '\x01')) {
                *(undefined1 *)(moby + 0x20) = 5;
                *(undefined1 *)(moby + 0xbc) = 0;
              }
              else {
                iVar11 = *(int *)(iVar7 + 0xa4);
                if ((iVar11 != 0) &&
                   ((*(short *)(iVar11 + 0xa6) == 0x1f9 && (*(char *)(iVar11 + 0x20) == '\x01')))) {
                  *(undefined1 *)(iVar11 + 0x20) = 5;
                  *(undefined1 *)(*(int *)(iVar7 + 0xa4) + 0xbc) = 0;
                }
              }
            }
            *(float *)(moby + 0x18) = fVar25;
            *(undefined4 *)(iVar7 + 0x48) = 0;
          }
        }
        else {
          if (*(int *)(iVar7 + 0xa4) == 0) {
            fVar25 = -(float)(dVar14 * dVar19 - (double)*(float *)(iVar7 + 0x4c));
            *(float *)(iVar7 + 0x4c) = fVar25;
            fVar25 = Delt((float)dVar23,ABS(fVar25),(float *)(iVar7 + 0xf4));
            if ((double)fVar25 == dVar23) {
              *(undefined4 *)(iVar7 + 0x4c) = 0;
            }
          }
          else {
            fVar25 = -(float)(dVar14 * dVar19 - (double)*(float *)(iVar7 + 0x4c));
            *(float *)(iVar7 + 0x4c) = fVar25;
            fVar25 = Delt((float)((double)*(float *)(*(int *)(*(int *)(iVar7 + 0xa4) +
                                                                       0x78) + 0xf4) + dVar18),
                                    ABS(fVar25),(float *)(iVar7 + 0xf4));
            if ((double)fVar25 == dVar23) {
              *(undefined4 *)(iVar7 + 0x4c) = 0;
            }
          }
          uVar2 = *(undefined4 *)(iVar7 + 0xd0);
          uVar3 = *(undefined4 *)(iVar7 + 0xd4);
          uVar4 = *(undefined4 *)(iVar7 + 0xdc);
          fVar25 = *(float *)(iVar7 + 0xd8) + *(float *)(iVar7 + 0xf4);
          dVar16 = (double)*(float *)(moby + 0x10);
          dVar14 = (double)*(float *)(moby + 0x14);
          dVar15 = (double)*(float *)(moby + 0x18);
          if (moby != 0) {
            *(undefined2 *)(moby + 0x36) = 0x7f80;
          }
          MB_PlatformGetDelta
                    (uVar13,*(undefined4 *)(iVar7 + 0xf0),uVar10 - 0xb0,iVar7 + 0xe0,uVar13 + 0x10,
                     uVar13 + 0x40);
          iVar11 = MB_GetPlatformParent(*(undefined4 *)(iVar7 + 0xf0));
          if ((*(uint *)(iVar11 + 0x3c) & 4) != 0) {
            *(undefined4 *)(iVar7 + 0xd0) = uVar2;
            *(undefined4 *)(iVar7 + 0xd4) = uVar3;
            *(float *)(iVar7 + 0xd8) = fVar25;
            *(undefined4 *)(iVar7 + 0xdc) = uVar4;
            *(float *)(iVar7 + 0xd8) = fVar25 - *(float *)(iVar7 + 0xf4);
          }
          fVar25 = *(float *)(moby + 0x14);
          fVar5 = *(float *)(moby + 0x18);
          *(float *)(iVar7 + 0x40) = (float)((double)*(float *)(moby + 0x10) - dVar16);
          *(float *)(iVar7 + 0x44) = (float)((double)fVar25 - dVar14);
          *(float *)(iVar7 + 0x48) = (float)((double)fVar5 - dVar15);
          MB_GetOrientation
                    ((MobyInstance *)(iVar7 + 0x60),(Vec4 *)(iVar7 + 0x40),uVar10 - 0xa0,
                     uVar13 + 0x40);
        }
      }
      uVar13 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  return;
}


// shared update function, registered for oClasses 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
// 0x03a7360 (0xd00 bytes)
/* Moby 500
   Moby 501
   Moby 502
   Moby 503
   Moby 504
   Moby 505
   Moby 506
   Moby 507
   Moby 508
   Moby 509
   Moby 510
   Moby 511 */

void UpdateMoby_500(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  void *pvVar6;
  u16 *puVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  LevelId LVar11;
  longlong lVar12;
  bool bVar16;
  ushort uVar14;
  int iVar13;
  char cVar17;
  MOBY_OCLASSES MVar15;
  undefined1 uVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<48> local_a0;
  int local_70;
  int local_6c;
  GPiece<4> auStack_68;
  MobyInstance *local_64;
  longlong local_60;
  
  lVar12 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  if ((*(int *)((int)pvVar5 + 0xa0) != 0) &&
     (bVar16 = MB_isCrate(*(int *)((int)pvVar5 + 0xa0)), !bVar16)) {
    *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
  }
  if ((*(int *)((int)pvVar5 + 0xa4) != 0) &&
     (bVar16 = MB_isCrate(*(int *)((int)pvVar5 + 0xa4)), !bVar16)) {
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
  }
  iVar13 = worldUpdateTime;
  *(int *)((int)pvVar5 + 0xfc) = worldUpdateTime;
  if (*(int *)((int)pvVar5 + 0xa0) == 0) {
    uVar14 = *(ushort *)((int)pvVar5 + 0x3e) | 1;
  }
  else {
    uVar14 = *(ushort *)((int)pvVar5 + 0x3e) & 0xfffe;
  }
  *(ushort *)((int)pvVar5 + 0x3e) = uVar14;
  if (((*(int *)((int)pvVar5 + 0xb4) != iVar13) && (moby->state != '\0')) &&
     ((*(uint *)((int)pvVar5 + 0xac) & 0xc) != 0)) {
    M511_003a6d40(lVar12);
  }
  bVar16 = false;
  iVar13 = MB_damage(lVar12,0x1830000,0);
  if ((iVar13 != 0) && (*(int *)(iVar13 + 0x24) == 0x1000000)) {
    iVar13 = 0;
    bVar16 = true;
  }
  if ((short)moby->oClass < 0x1fe && 0x1fa < (short)moby->oClass) {
    MB_HandleDamage(moby,iVar13,ZEXT48(pvVar5) + 0x20,0,&local_70,auStack_68,&local_6c,4);
  }
  uVar1 = moby->state;
  bVar19 = (uVar1 == '\x04') << 1;
  if (uVar1 == '\x06') {
    uVar25 = 0x3fe0000000000000;
    local_60 = (longlong)(int)moby->drawDistance;
    dVar27 = 1.0;
    iVar13 = FastCheckBsphereInView((double)local_60,local_b0);
    if ((iVar13 == -1) && (iVar13 = FastDecTimerU8(ZEXT48(pvVar5) + 0xc9), iVar13 != 0)) {
      if (moby->group == 0xff) {
        moby->state = '\x01';
        moby->enabled = '\x01';
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      }
      else {
        if (Level == Veldin2) {
          auVar29 = ZEXT416(0xfffffff0);
          iVar20 = 0;
          uVar22 = 0;
          auVar30 = loadVectorLeftIndexed(0x28,0x3a7320);
          iVar13 = 0;
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          do {
            if ((&UnlockableItems.field0_0x0)[(int)uVar22] != '\0') {
              iVar20 = iVar20 + 1;
              iVar23 = (int)(uVar22 << 3) * 3;
              auVar32 = loadVectorLeftIndexed((longlong)iVar23,0x737d3e);
              auVar31 = loadVectorRightIndexed((longlong)iVar23 + 0x10,0x737d3e);
              auVar32 = vectorShiftRightWord
                                  (auVar32 | auVar31,
                                   auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
              if (*(short *)((int)&DAT_00737d3e + iVar23) != 0) {
                auVar31 = vectorConvertFromUnsignedFixedPointWord(auVar32,0);
                auVar32 = ZEXT416(0xffffffff);
                auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
                lVar24 = (longlong)(int)((uVar22 & 0xffffffff) << 2);
                auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
                auVar33 = loadVectorLeftIndexed(lVar24,0x96c0ac);
                auVar34 = loadVectorRightIndexed(lVar24 + 0x10,0x96c0ac);
                auVar32 = vectorMultiplyAddFloatingPoint
                                    (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                             auVar30 << 0x60,auVar32);
                auVar31 = vectorConvertFromSignedFixedPointWord(auVar33 | auVar34,0);
                auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
                vectorCompareGreaterThanOrEqualToFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
                if ((bool)(bVar19 >> 1 & 1)) {
                  iVar13 = iVar13 + 1;
                }
              }
            }
            iVar23 = (int)uVar22 + 1;
            uVar22 = (ulonglong)iVar23;
          } while (iVar23 < 0x25);
          if (((iVar13 < 3) && (2 < iVar20)) || ((iVar20 < 3 && (iVar13 != iVar20))))
          goto LAB_003a8024;
        }
        MB_GetFirstMobyInGroup(&local_64,(uint)(byte)moby->group,'\0','\0');
        if (local_64 != (MobyInstance *)0x0) {
          dVar28 = 0.10000000149011612;
          do {
            if ((((moby != local_64) &&
                 (fVar8 = (moby->pos).y - (local_64->pos).y, fVar2 = (local_64->pos).x,
                 fVar9 = (moby->pos).x - fVar2,
                 (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8) <= dVar28)) &&
                (local_64->state == '\x01')) &&
               (pvVar6 = local_64->pVar, *(int *)((int)pvVar6 + 0xa0) == 0)) {
              (moby->pos).x = fVar2;
              (moby->pos).y = (local_64->pos).y;
              fVar2 = (local_64->pos).z;
              (moby->pos).z = fVar2;
              (moby->pos).w = (local_64->pos).w;
              (moby->pos).z = (float)((double)fVar2 + dVar27);
              *(MobyInstance **)((int)pvVar6 + 0xa0) = moby;
              *(MobyInstance **)((int)pvVar5 + 0xa4) = local_64;
              *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
              moby->state = '\x01';
              moby->enabled = '\x01';
              uVar26 = *(uint *)((int)pvVar5 + 0xac);
              puVar7 = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              moby->collision = puVar7;
              *(uint *)((int)pvVar5 + 0xac) = uVar26 | 4;
              break;
            }
            MB_GetNextMobyInGroup(&local_64,local_64,'\0','\0');
          } while (local_64 != (MobyInstance *)0x0);
        }
        if (moby->state != '\x01') {
          dVar27 = (double)GetGroundZ(uVar25,lVar12 + 0x10,0);
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
          *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
          MVar4 = moby->modeBits;
          (moby->pos).z = (float)dVar27;
          moby->enabled = '\x01';
          puVar7 = moby->pClass->collision;
          moby->modeBits =
               MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          moby->collision = puVar7;
        }
      }
    }
  }
  else if (uVar1 == '\x05') {
    bVar19 = moby->setByGroup;
    if (bVar19 == 0) {
      auVar29 = ZEXT416(0xffffffff);
      auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = ZEXT416(0);
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x30,0x3a7320);
      auVar32 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = ZEXT416(1);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar31);
      auVar32 = ZEXT416(3);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xfffffff0);
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar35 = vectorRotateLeftIntegerWord(auVar33,auVar34);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorMultiplySumSignedHalfWordModulo
                          (auVar32,auVar35,
                           auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar29 = vectorMultiplyOddUnsignedHalfWord(auVar32,auVar33);
      auVar33 = vectorShiftLeftIntegerWord(auVar31,auVar34);
      auVar31.piece<0,4>() = auVar33.piece<0,4>() + auVar29.piece<0,4>();
      auVar31.piece<8,8>() = auVar29.piece<8,8>();
      auVar31.piece<4,4>() = auVar33.piece<4,4>() + auVar29.piece<4,4>();
      auVar32.piece<0,8>() = auVar31.piece<0,8>();
      auVar32.piece<12,4>() = auVar29.piece<12,4>();
      auVar32.piece<8,4>() = auVar33.piece<8,4>() + auVar29.piece<8,4>();
      auVar29.piece<0,12>() = auVar32.piece<0,12>();
      auVar29.piece<12,4>() = auVar33.piece<12,4>() + auVar32.piece<12,4>();
      auVar29 = vectorSubtractUnsignedWordModulo
                          (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xff;
      cVar17 = storeVectorElementByteIndexed
                         (auVar29 | auVar29 << 8 | auVar29 << 0x10 | auVar29 << 0x18 |
                          auVar29 << 0x20 | auVar29 << 0x28 | auVar29 << 0x30 | auVar29 << 0x38 |
                          auVar29 << 0x40 | auVar29 << 0x48 | auVar29 << 0x50 | auVar29 << 0x58 |
                          auVar29 << 0x60 | auVar29 << 0x68 | auVar29 << 0x70 | auVar29 << 0x78,0xbc
                          ,lVar12);
      moby->setByGroup = cVar17;
      *(undefined8 *)((int)pvVar5 + 0xb8) = *(undefined8 *)&moby->color;
      bVar19 = moby->setByGroup;
    }
    else {
      local_60 = (longlong)(int)(animationSpeed * 15.5);
      if ((int)(animationSpeed * 15.5) < (int)(uint)bVar19 && iVar13 != 0) {
        dVar27 = (double)MB_randRangeFloat(5.0,15.0);
        bVar19 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        moby->setByGroup = bVar19;
      }
    }
    dVar27 = (double)animationSpeed;
    dVar28 = 60.5;
    uVar21 = (uint)bVar19;
    uVar26 = (uint)(dVar27 * 60.5);
    if ((uVar21 - ((int)uVar21 / (int)uVar26) * uVar26 == uVar26 - 3) ||
       (uVar26 = (uint)(dVar27 * 13.5), uVar21 == uVar26)) {
      local_60 = (longlong)(int)uVar26;
      PlayMobySound(1,0x20,moby);
      bVar19 = moby->setByGroup;
      dVar27 = (double)animationSpeed;
    }
    uVar26 = (uint)bVar19;
    local_60 = (longlong)(int)(dVar27 * 40.5);
    if (((int)(dVar27 * 40.5) <
         (int)(uVar26 - ((int)uVar26 / (int)(dVar27 * dVar28)) * (int)(dVar27 * dVar28))) ||
       (local_60 = (longlong)(int)(dVar27 * 15.5), (int)uVar26 < (int)(dVar27 * 15.5))) {
      SetColorOfMoby(moby,200,0x40,0x40);
      uVar26 = (uint)(byte)moby->setByGroup;
    }
    else {
      uVar25 = *(undefined8 *)((int)pvVar5 + 0xb8);
      moby->color = (int)((ulonglong)uVar25 >> 0x20);
      moby->light = (int)uVar25;
    }
    cVar17 = (char)uVar26;
    if ((uVar26 == 1) || (g_heroStateType == 0x16)) {
      uVar25 = *(undefined8 *)((int)pvVar5 + 0xb8);
      moby->color = (int)((ulonglong)uVar25 >> 0x20);
      moby->light = (int)uVar25;
      M511_003a5468(lVar12,1,0);
      M511_003a4da0(lVar12);
      cVar17 = moby->setByGroup;
    }
    moby->setByGroup = cVar17 + -1;
  }
  else if (uVar1 == '\x04') {
    iVar13 = FastDecTimerS8(lVar12 + 0xbc);
    if (iVar13 != 0) {
      moby->state = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
  }
  else if (uVar1 == '\x03') {
    if ((moby->oClass == EXPLOSIVE_CRATE) &&
       (local_60 = (longlong)(int)(animationSpeed * 20.5),
       (int)(uint)*(byte *)((int)pvVar5 + 0xca) <= (int)(animationSpeed * 20.5))) {
      dVar28 = 2.0;
      dVar27 = (double)FastIntToDouble(*(undefined1 *)((int)pvVar5 + 0xca));
      dVar27 = (double)(float)(dVar27 / (double)(animationSpeed * 20.0));
      CollMobySphere((double)(float)(dVar27 * dVar28),local_c0);
      CollMobySphere
                ((double)(float)(dVar27 * 3.0),local_c0,&g_heroMtx,0x10,g_heroMobyPtr,local_a0
                );
      *(char *)((int)pvVar5 + 0xca) = *(char *)((int)pvVar5 + 0xca) + '\x01';
    }
    else {
      if (*(char *)((int)pvVar5 + 200) == '\0') {
        DeleteMoby(moby);
        return;
      }
      sVar3.piece<0,1>() = moby->field76_0xb4;
      sVar3.piece<1,1>() = moby->field77_0xb5;
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
      if (1 < sVar3) {
        moby->field76_0xb4 = '\0';
        moby->field77_0xb5 = '\x01';
      }
      moby->state = '\x06';
      if (Level == Veldin2) {
        uVar18 = MB_randRange(300,0x2d0);
      }
      else {
        uVar18 = MB_randRange(0x1e,0x3c);
      }
      *(undefined1 *)((int)pvVar5 + 0xc9) = uVar18;
    }
  }
  else if (uVar1 == '\x02') {
    cVar17 = moby->setByGroup;
    moby->setByGroup = cVar17 + -1;
    if (cVar17 == '\0') {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x01') {
    MVar15 = moby->oClass;
    if ((MVar15 == EXPLOSIVE_CRATE) &&
       ((((DAT_00969f20 == moby || (DAT_00969f1c == moby)) ||
         ((g_standingOnMoby == moby && (g_framesNotGrounded == 0)))) ||
        ((DAT_0096a1d8 == moby || (bVar16)))))) {
      moby->state = '\x05';
      moby->setByGroup = '\0';
    }
    else if ((iVar13 != 0) && (0 < *(int *)(iVar13 + 0x2c))) {
      bVar16 = true;
      if ((MVar15 == METAL_CRATE) && ((*(uint *)(iVar13 + 0x24) & 0x20000) == 0)) {
        bVar16 = false;
      }
      if (MVar15 == EXPLOSIVE_CRATE) {
        cVar17 = '\x01';
        moby->state = '\x05';
        if ((*(uint *)(iVar13 + 0x24) & 0x20000) == 0) {
          dVar27 = (double)MB_randRangeFloat(5.0,15.0);
          cVar17 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        }
        moby->setByGroup = cVar17;
        bVar16 = false;
        *(undefined8 *)((int)pvVar5 + 0xb8) = *(undefined8 *)&moby->color;
        MVar15 = moby->oClass;
      }
      uVar22 = (ulonglong)MVar15;
      uVar26 = (uint)MVar15;
      if ((short)MVar15 < 0x1fe && 0x1fa < (short)MVar15) {
        uVar21 = *(uint *)(iVar13 + 0x24);
        if ((uVar21 & 0x20000) != 0) {
          uVar22 = 0x1fe;
          moby->oClass = GRAB_HELICOPTER|MACHINEGUN_TURRET_001E;
        }
        if (local_70 == 3) {
          uVar22 = 0x1fe;
          moby->oClass = GRAB_HELICOPTER|MACHINEGUN_TURRET_001E;
        }
        uVar26 = (uint)uVar22;
        if ((((uVar21 & 0x100000) != 0) || ((uVar21 & 0x400000) != 0)) || (local_6c == 0xb4)) {
          lVar24 = uVar22 + 1 +
                   (0x1fe - ((longlong)(short)uVar22 + 1) >> 0x3f & 0x1fe - (uVar22 + 1));
          uVar26 = (uint)lVar24;
          moby->oClass = (MOBY_OCLASSES)lVar24;
        }
        if ((uVar26 & 0xffff) != 0x1fe) {
          MVar15 = (short)uVar26 + 1;
          moby->oClass = MVar15;
          bVar19 = (&MobyClassLookup)[(short)MVar15];
          moby->mClass = bVar19;
          moby->pClass = MobyClasses[bVar19];
          UpdateMobyFrameData(moby);
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          moby->state = '\x02';
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(8,0x3a7320);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xff;
          cVar17 = storeVectorElementByteIndexed
                             (auVar29 | auVar29 << 8 | auVar29 << 0x10 | auVar29 << 0x18 |
                              auVar29 << 0x20 | auVar29 << 0x28 | auVar29 << 0x30 | auVar29 << 0x38
                              | auVar29 << 0x40 | auVar29 << 0x48 | auVar29 << 0x50 |
                              auVar29 << 0x58 | auVar29 << 0x60 | auVar29 << 0x68 | auVar29 << 0x70
                              | auVar29 << 0x78,0xbc,lVar12);
          moby->setByGroup = cVar17;
          goto LAB_003a8024;
        }
      }
      if (bVar16) {
        M511_003a5468
                  (lVar12,(ulonglong)(LZCOUNT((uVar26 & 0xffff) - 0x1f9) << 0x20) >> 0x25,iVar13);
        if (*(char *)((int)pvVar5 + 200) == '\0') {
          M511_003a4da0(lVar12);
        }
        else if ((*(int *)(iVar13 + 0x20) == 0) ||
                ((sVar3 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6), sVar3 != 0x2cd &&
                 (sVar3 != 0x22c)))) {
          M511_003a4da0(lVar12);
        }
        else {
          cVar17 = moby->field76_0xb4;
          cVar10 = moby->field77_0xb5;
          moby->field76_0xb4 = '\0';
          moby->field77_0xb5 = '\0';
          M511_003a4da0(lVar12);
          moby->field76_0xb4 = cVar17;
          moby->field77_0xb5 = cVar10;
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0;
    LVar11 = Level;
    *(undefined4 *)((int)pvVar5 + 0x48) = 0;
    *(undefined4 *)((int)pvVar5 + 0x44) = 0;
    *(undefined4 *)((int)pvVar5 + 0x40) = 0;
    if (((LVar11 == Veldin2) && (moby->oClass == AMMO_CRATE)) &&
       (*(char *)((int)pvVar5 + 200) != '\0')) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x06';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
    else {
      moby->state = '\x01';
    }
    uVar26 = *(uint *)((int)pvVar5 + 0xac);
    *(undefined4 *)((int)pvVar5 + 0xa8) = 0;
    if ((uVar26 & 1) == 0) {
      M511_003a6388(lVar12);
      uVar26 = *(uint *)((int)pvVar5 + 0xac);
    }
    MVar15 = moby->oClass;
    *(uint *)((int)pvVar5 + 0xac) = uVar26 | 0x14;
    if (MVar15 == AMMO_CRATE) {
      *(undefined2 *)((int)pvVar5 + 0xc6) = 100;
    }
    else if (MVar15 == NANOTECH_CRATE) {
      Spawn_Moby806_NanotechBall(lVar12);
    }
  }
LAB_003a8024:
  moby->damage = -1;
  return;
}



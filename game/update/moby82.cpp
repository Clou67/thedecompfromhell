// game/update/moby82.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x471bd0-0x472fb8
#include "game/update/moby82.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1034.h"
#include "idol/fastfunc.h"
#include "sdk/mUnk4.h"

// 0x0471bd0 (0x13e8 bytes)
// inlined: FastAtan2 @0x472330, FastAtan2 @0x4724dc, FastAtan2 @0x47268c, FastAtan2 @0x47283c
/* Moby 82 */

void UpdateMoby_82(MobyInstance *moby)

{
  undefined1 uVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
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
  MOBY_OCLASSES MVar15;
  MobyClass *pMVar16;
  float *out;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar22;
  longlong lVar21;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  uint unused;
  longlong lVar26;
  ulonglong unaff_r25;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar34;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  undefined8 uVar39;
  ulonglong in_f29;
  undefined8 uVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  double dVar43;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x280;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x52] = in_LR;
  puVar17[0x45] = in_f21;
  puVar17[0x46] = in_f22;
  puVar17[0x47] = in_f23;
  puVar17[0x48] = in_f24;
  puVar17[0x49] = in_f25;
  puVar17[0x4a] = in_f26;
  puVar17[0x4b] = in_f27;
  puVar17[0x4c] = in_f28;
  puVar17[0x4d] = in_f29;
  puVar17[0x4e] = in_f30;
  puVar17[0x4f] = in_f31;
  puVar17[0x44] = unaff_r31;
  fVar3 = (moby->pos).y;
  *(f32 *)(puVar17 + 0x18) = (moby->pos).x;
  fVar4 = (moby->pos).z;
  *(f32 *)((int)puVar17 + 0xc4) = fVar3;
  fVar3 = (moby->pos).w;
  pMVar16 = moby->pClass;
  *(f32 *)(puVar17 + 0x19) = fVar4;
  *(f32 *)((int)puVar17 + 0xcc) = fVar3;
  fVar5 = moby->scale;
  dVar42 = 0.10000000149011612;
  fVar6 = pMVar16->gScale;
  puVar17[0x43] = unaff_r30;
  out = (float *)moby->pVar;
  puVar17[0x42] = unaff_r29;
  puVar17[0x41] = unaff_r28;
  puVar17[0x40] = unaff_r27;
  puVar17[0x3f] = unaff_r26;
  puVar17[0x3e] = unaff_r25;
  moby->scale = (fVar6 - fVar5) * 0.1 + fVar5;
  iVar22 = MB_damage(lVar20,0xa30000,0);
  if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar22 + 0x20) + 0xa6) != 0x52)) {
    puVar17[0x12] = 1;
    puVar17[0x14] = 0;
    puVar17[0x15] = 1;
    puVar17[0x16] = 0xffffffffffffffff;
    puVar17[0x17] = 0;
    MB_genericExplosion(0,0,0,0,0,0x3ff0000000000000,0,lVar20,out,0,0,1,5,2,7);
    DeleteMoby(moby);
    return;
  }
  dVar43 = 0.0;
  *(undefined4 *)(puVar17 + 0x1e) = 0;
  *(undefined4 *)((int)puVar17 + 0xf4) = 0;
  *(undefined4 *)(puVar17 + 0x1f) = 0;
  *(undefined4 *)((int)puVar17 + 0xfc) = 0;
  dVar38 = -1.0;
  dVar41 = 1.0;
  dVar29 = (double)MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar17 + 0x1e) = (float)dVar29;
  dVar29 = (double)MB_randRangeFloat((float)dVar38,(float)dVar41);
  *(float *)((int)puVar17 + 0xf4) = (float)dVar29;
  dVar29 = (double)MB_randRangeFloat((float)dVar38,(float)dVar41);
  *(float *)(puVar17 + 0x1f) = (float)dVar29;
  dVar29 = (double)MB_randRangeFloat((float)dVar42,0.2);
  fVar12 = g_FrameTime;
  fVar6 = *(float *)((int)puVar17 + 0xf4);
  fVar7 = *(float *)(puVar17 + 0x1e);
  fVar8 = *(float *)(puVar17 + 0x1f);
  dVar33 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar38 = (double)g_FrameTime;
  fVar5 = (float)((double)(float)(dVar29 * dVar38) / dVar33);
  dVar29 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar29 = (double)(fVar7 * fVar5);
  }
  dVar36 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar36 = (double)(fVar6 * fVar5);
  }
  dVar30 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar30 = (double)(fVar8 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar29 = (double)(fVar7 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar36 = (double)(fVar6 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar30 = (double)(fVar8 * fVar5);
  }
  *(float *)(puVar17 + 0x1e) = (float)dVar29;
  *(float *)((int)puVar17 + 0xf4) = (float)dVar36;
  *(float *)(puVar17 + 0x1f) = (float)dVar30;
  dVar42 = (double)MB_randRangeFloat((float)(dVar38 * dVar42),fVar12);
  fVar5 = *out;
  dVar29 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
  if (dVar29 == dVar43) {
    *(float *)(puVar17 + 0x1c) = fVar5;
    *(float *)((int)puVar17 + 0xe4) = out[1];
    *(float *)(puVar17 + 0x1d) = out[2];
    fVar5 = out[3];
    *(undefined4 *)(puVar17 + 0x1d) = 0;
    *(undefined4 *)((int)puVar17 + 0xe4) = 0;
    *(undefined4 *)(puVar17 + 0x1c) = 0;
    dVar42 = dVar43;
    dVar29 = dVar43;
    dVar38 = dVar43;
  }
  else {
    fVar6 = (float)(-dVar42 / dVar29);
    dVar38 = (double)(fVar5 * fVar6);
    *(float *)(puVar17 + 0x1c) = fVar5 * fVar6;
    dVar42 = (double)(out[1] * fVar6);
    *(float *)((int)puVar17 + 0xe4) = out[1] * fVar6;
    dVar29 = (double)(out[2] * fVar6);
    *(float *)(puVar17 + 0x1d) = out[2] * fVar6;
    fVar5 = out[3];
  }
  *(float *)((int)puVar17 + 0xec) = fVar5;
  *(float *)(puVar17 + 0x1e) = (float)((double)*(float *)(puVar17 + 0x1e) + dVar38);
  *(float *)((int)puVar17 + 0xf4) = (float)((double)*(float *)((int)puVar17 + 0xf4) + dVar42);
  *(float *)(puVar17 + 0x1f) = (float)((double)*(float *)(puVar17 + 0x1f) + dVar29);
  puVar17[0x3c] = (longlong)(int)(animationSpeed * 6.5);
  uVar40 = 0x40f3880000000000;
  uVar39 = 0x408f400000000000;
  SpawnPart_44
            (0x40f3880000000000,0x408f400000000000,dVar41,0xbf3a36e2e0000000,dVar43,lVar20 + 0x10,
             uVar19 - 400,*(undefined4 *)((int)puVar17 + 0x1e4),0x7f,&DAT_00b0b0b0,3);
  dVar36 = 0.3333333432674408;
  dVar33 = 60.5;
  uVar35 = 0xbf2a36e2e0000000;
  dVar38 = 0.019999999552965164;
  uVar34 = 0x40e3880000000000;
  dVar29 = 5.5;
  dVar42 = dVar43;
  do {
    dVar37 = (double)(float)(dVar42 + dVar36);
    dVar42 = (double)MB_randRangeFloat((float)dVar42,(float)(dVar42 + dVar36));
    fVar5 = *out;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar30 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
    if (dVar30 == dVar43) {
      *(float *)(puVar17 + 0x1c) = fVar5;
      *(float *)((int)puVar17 + 0xe4) = out[1];
      *(float *)(puVar17 + 0x1d) = out[2];
      fVar5 = out[3];
      dVar42 = dVar43;
      dVar30 = dVar43;
      dVar32 = dVar43;
    }
    else {
      fVar12 = (float)((double)(float)(dVar42 * (double)out[0xb]) / dVar30);
      dVar42 = (double)(fVar5 * fVar12);
      *(float *)(puVar17 + 0x1c) = fVar5 * fVar12;
      dVar30 = (double)(out[1] * fVar12);
      *(float *)((int)puVar17 + 0xe4) = out[1] * fVar12;
      dVar32 = (double)(out[2] * fVar12);
      *(float *)(puVar17 + 0x1d) = out[2] * fVar12;
      fVar5 = out[3];
    }
    dVar31 = (double)animationSpeed;
    *(float *)((int)puVar17 + 0xec) = fVar5;
    *(float *)(puVar17 + 0x1c) = (float)(dVar42 + (double)fVar6);
    *(float *)((int)puVar17 + 0xe4) = (float)(dVar30 + (double)fVar7);
    *(float *)(puVar17 + 0x1d) = (float)(dVar32 + (double)fVar8);
    puVar17[0x3c] = (longlong)(int)(dVar31 * dVar33);
    iVar22 = SpawnPart_44
                       (uVar40,uVar39,dVar41,uVar35,dVar43,uVar19 - 0x1a0,uVar19 - 400,
                        *(undefined4 *)((int)puVar17 + 0x1e4),0x7f,FUN_00606060,3);
    fVar5 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.z;
    fVar8 = (moby->transform).v2.w;
    if (iVar22 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar22 + 3) = 0x44;
      *(undefined1 *)(iVar22 + 2) = uVar1;
    }
    *(float *)(puVar17 + 0x20) = (float)((double)fVar5 * dVar38);
    *(float *)((int)puVar17 + 0x104) = (float)((double)fVar6 * dVar38);
    *(float *)(puVar17 + 0x21) = (float)((double)fVar7 * dVar38);
    *(float *)((int)puVar17 + 0x10c) = (float)((double)fVar8 * dVar38);
    dVar42 = (double)MB_randRot();
    lVar27 = uVar19 - 0x180;
    MB_RotateQuatAxisAngle((float)dVar42,(float *)lVar27,(float *)lVar27);
    puVar17[0x3c] = (longlong)(int)((double)animationSpeed * dVar29);
    SpawnPart_21(uVar34,uVar19 - 0x1a0,lVar27,0x4f007fff,0x1fffffff);
    unused = (uint)lVar27;
    dVar42 = dVar37;
  } while (dVar37 < dVar41);
  fVar5 = out[9];
  if (fVar5 != 0.0) {
    bVar2 = *(byte *)((int)fVar5 + 0x20);
    unused = (uint)bVar2;
    if (bVar2 != 0xfd && bVar2 != 0xfe) {
      fVar6 = *(float *)((int)fVar5 + 0x14);
      fVar7 = *(float *)((int)fVar5 + 0x10);
      fVar5 = *(float *)((int)fVar5 + 0x18);
      fVar8 = out[6] - fVar5;
      if (SQRT(fVar8 * fVar8 +
               (out[4] - fVar7) * (out[4] - fVar7) + (out[5] - fVar6) * (out[5] - fVar6)) < 3.0) {
        dVar42 = 0.7853981852531433;
        if (((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) ||
           (*(char *)((int)out[8] + 0x20) == '\x05')) {
          fVar8 = (moby->pos).x;
          fVar12 = (moby->pos).y;
          fVar9 = fVar7 - fVar8;
          fVar14 = fVar6 - fVar12;
          dVar38 = ABS((double)fVar9);
          dVar29 = ABS((double)fVar14);
          *(float *)((int)puVar17 + 0x13c) = fVar9;
          *(float *)(puVar17 + 0x28) = fVar14;
          *(float *)((int)puVar17 + 0x144) = (float)(dVar38 - dVar29);
          uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0x13c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x144) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x28) >> 0x1d) & 4;
          dVar42 = ABS((double)*(float *)((int)puVar17 + 0x13c));
          if ((double)*(float *)((int)puVar17 + 0x144) - dVar43 < 0.0) {
            dVar42 = dVar29;
          }
          fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar29 = ABS((double)*(float *)(puVar17 + 0x28));
          if ((double)*(float *)((int)puVar17 + 0x144) - dVar43 < 0.0) {
            dVar29 = dVar38;
          }
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar38 = dVar43;
          if (dVar43 < dVar42) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0xf0;
            lVar24 = uVar19 - 0x100;
            lVar28 = 2;
            fVar13 = (float)(dVar29 - dVar42) / (float)(dVar29 + dVar42);
            fVar10 = fVar13 * fVar13;
            *(float *)((int)puVar17 + 0x18c) = fVar13;
            *(float *)((int)puVar17 + 0x184) = fVar13;
            *(float *)(puVar17 + 0x31) = fVar13;
            *(float *)(puVar17 + 0x30) = fVar13;
            fVar13 = fVar10 * fVar10;
            *(float *)((int)puVar17 + 0x184) = *(float *)((int)puVar17 + 0x184) * fVar10;
            *(float *)(puVar17 + 0x31) = *(float *)(puVar17 + 0x31) * fVar13;
            *(float *)((int)puVar17 + 0x18c) = *(float *)((int)puVar17 + 0x18c) * fVar13 * fVar10;
            do {
              *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x170) * fVar13 * fVar13;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar13 * fVar13;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0x100;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar13 = *pfVar25;
              fVar10 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x180) * fVar13;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar27 = lVar21;
            dVar42 = dVar43;
            do {
              iVar22 = (int)lVar27;
              iVar18 = (int)lVar26;
              lVar27 = lVar27 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar22 + 0x180)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar42 + 0.7853981852531433) * fVar14 + fVar9);
          }
          fVar12 = fVar12 - fVar6;
          fVar8 = fVar8 - fVar7;
          fVar5 = fVar5 - (moby->pos).z;
          fVar6 = SQRT(fVar8 * fVar8 + fVar12 * fVar12);
          *(float *)((int)puVar17 + 0x134) = fVar5;
          dVar33 = ABS((double)fVar5);
          dVar29 = ABS((double)fVar6);
          *(float *)(puVar17 + 0x26) = fVar6;
          *(float *)(puVar17 + 0x27) = (float)(dVar29 - dVar33);
          uVar23 = (ulonglong)(*(uint *)(puVar17 + 0x26) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x27) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x134) >> 0x1d) & 4;
          dVar42 = ABS((double)*(float *)(puVar17 + 0x26));
          if ((double)*(float *)(puVar17 + 0x27) - dVar43 < 0.0) {
            dVar42 = dVar33;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar33 = ABS((double)*(float *)((int)puVar17 + 0x134));
          if ((double)*(float *)(puVar17 + 0x27) - dVar43 < 0.0) {
            dVar33 = dVar29;
          }
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = dVar43;
          if (dVar43 < dVar42) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0x110;
            lVar24 = uVar19 - 0x120;
            lVar28 = 2;
            fVar7 = (float)(dVar33 - dVar42) / (float)(dVar33 + dVar42);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x16c) = fVar7;
            *(float *)((int)puVar17 + 0x164) = fVar7;
            *(float *)(puVar17 + 0x2d) = fVar7;
            *(float *)(puVar17 + 0x2c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0x164) = *(float *)((int)puVar17 + 0x164) * fVar8;
            *(float *)(puVar17 + 0x2d) = *(float *)(puVar17 + 0x2d) * fVar7;
            *(float *)((int)puVar17 + 0x16c) = *(float *)((int)puVar17 + 0x16c) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x150) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0x120;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar25;
              fVar8 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x160) * fVar7;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar27 = 2;
            dVar42 = dVar43;
            do {
              iVar22 = (int)lVar21;
              iVar18 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar22 + 0x160)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar29 = (double)((float)(dVar42 + 0.7853981852531433) * fVar5 + fVar6);
          }
        }
        else {
          iVar22 = *(int *)(DAT_0096b2d0 + 0x78);
          dVar29 = (double)FastWrapRot
                                     (*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar22 + 0x90));
          dVar38 = (double)FastWrapRot
                                     (*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar22 + 0x94));
          fVar5 = (moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14);
          fVar6 = (moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10);
          fVar7 = (moby->pos).z - *(float *)(DAT_0096b2d0 + 0x18);
          MB_SphericalToVector
                    ((SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) / (out[0xb] + 24.0)) *
                     *(float *)(iVar22 + 100),(float)dVar29,(float)-dVar38,(float *)(puVar17 + 0x22)
                    );
          iVar22 = DAT_0096b2d0;
          fVar5 = (moby->pos).x;
          fVar12 = *(float *)(puVar17 + 0x22) + *(float *)(DAT_0096b2d0 + 0x10);
          fVar6 = (moby->pos).y;
          *(float *)(puVar17 + 0x22) = fVar12;
          fVar14 = *(float *)((int)puVar17 + 0x114) + *(float *)(iVar22 + 0x14);
          fVar8 = fVar12 - fVar5;
          fVar9 = fVar14 - fVar6;
          dVar38 = ABS((double)fVar8);
          *(float *)((int)puVar17 + 0x114) = fVar14;
          fVar7 = *(float *)(iVar22 + 0x18);
          *(float *)((int)puVar17 + 0x154) = fVar8;
          dVar33 = ABS((double)fVar9);
          *(float *)(puVar17 + 0x2b) = fVar9;
          fVar7 = *(float *)(puVar17 + 0x23) + fVar7;
          *(float *)((int)puVar17 + 0x15c) = (float)(dVar38 - dVar33);
          *(float *)(puVar17 + 0x23) = fVar7;
          fVar8 = (moby->pos).z;
          uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0x154) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x15c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x2b) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)((int)puVar17 + 0x154));
          if ((double)*(float *)((int)puVar17 + 0x15c) - dVar43 < 0.0) {
            dVar29 = dVar33;
          }
          fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar33 = ABS((double)*(float *)(puVar17 + 0x2b));
          if ((double)*(float *)((int)puVar17 + 0x15c) - dVar43 < 0.0) {
            dVar33 = dVar38;
          }
          dVar38 = dVar43;
          if (dVar43 < dVar29) {
            lVar27 = uVar19 - 0x270;
            lVar24 = uVar19 - 0xc0;
            lVar26 = uVar19 - 0xb0;
            lVar28 = 2;
            fVar10 = (float)(dVar33 - dVar29) / (float)(dVar33 + dVar29);
            fVar11 = fVar10 * fVar10;
            *(float *)((int)puVar17 + 0x1cc) = fVar10;
            *(float *)((int)puVar17 + 0x1c4) = fVar10;
            *(float *)(puVar17 + 0x39) = fVar10;
            *(float *)(puVar17 + 0x38) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)((int)puVar17 + 0x1c4) = *(float *)((int)puVar17 + 0x1c4) * fVar11;
            *(float *)(puVar17 + 0x39) = *(float *)(puVar17 + 0x39) * fVar10;
            *(float *)((int)puVar17 + 0x1cc) = *(float *)((int)puVar17 + 0x1cc) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1b0) * fVar10 * fVar10;
              iVar22 = (int)lVar24;
              lVar27 = lVar27 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0xc0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar10 = *pfVar25;
              fVar11 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1c0) * fVar10;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar27 = lVar21;
            dVar29 = dVar43;
            do {
              iVar22 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              iVar18 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1c0)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar29 + dVar42) * fVar13 + fVar9);
          }
          fVar6 = fVar6 - fVar14;
          fVar5 = fVar5 - fVar12;
          fVar7 = fVar7 - fVar8;
          fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          *(float *)((int)puVar17 + 0x14c) = fVar7;
          dVar36 = ABS((double)fVar7);
          dVar29 = ABS((double)fVar5);
          *(float *)(puVar17 + 0x29) = fVar5;
          *(float *)(puVar17 + 0x2a) = (float)(dVar29 - dVar36);
          uVar23 = (ulonglong)(*(uint *)(puVar17 + 0x29) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x2a) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x14c) >> 0x1d) & 4;
          dVar33 = ABS((double)*(float *)(puVar17 + 0x29));
          if ((double)*(float *)(puVar17 + 0x2a) - dVar43 < 0.0) {
            dVar33 = dVar36;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar36 = ABS((double)*(float *)((int)puVar17 + 0x14c));
          if ((double)*(float *)(puVar17 + 0x2a) - dVar43 < 0.0) {
            dVar36 = dVar29;
          }
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = dVar43;
          if (dVar43 < dVar33) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0xd0;
            lVar24 = uVar19 - 0xe0;
            lVar28 = 2;
            fVar7 = (float)(dVar36 - dVar33) / (float)(dVar36 + dVar33);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x1ac) = fVar7;
            *(float *)((int)puVar17 + 0x1a4) = fVar7;
            *(float *)(puVar17 + 0x35) = fVar7;
            *(float *)(puVar17 + 0x34) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0x1a4) = *(float *)((int)puVar17 + 0x1a4) * fVar8;
            *(float *)(puVar17 + 0x35) = *(float *)(puVar17 + 0x35) * fVar7;
            *(float *)((int)puVar17 + 0x1ac) = *(float *)((int)puVar17 + 0x1ac) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 400) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0xe0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar25;
              fVar8 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 0x1a0) * fVar7;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar27 = 2;
            do {
              iVar22 = (int)lVar21;
              iVar18 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1a0)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar29 = (double)((float)(dVar29 + dVar42) * fVar5 + fVar6);
          }
        }
        dVar42 = (double)FastSubRots((float)dVar38,(moby->rotation).z);
        fVar5 = g_FrameTime;
        if (dVar42 < 1.0471975803375244) {
          out[0xb] = (out[0xe] - out[0xb]) * 0.05 + out[0xb];
        }
        dVar33 = 12.566370964050293;
        dVar42 = 25.132741928100586;
        OrganicDeltAng
                  ((float)dVar38,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,fVar5 * 25.132742
                   ,&(moby->rotation).z,0x471b54,out + 0xc);
        OrganicDeltAng
                  ((float)-dVar29,(float)((double)g_FrameTimeSq * dVar33),
                   (float)((double)g_FrameTimeSq * dVar33),
                   (float)((double)g_FrameTime * dVar42),&(moby->rotation).y,0x720000,
                   out + 0xd);
        fVar5 = out[9];
        out[4] = *(float *)((int)fVar5 + 0x10);
        out[5] = *(float *)((int)fVar5 + 0x14);
        out[6] = *(float *)((int)fVar5 + 0x18);
        out[7] = *(float *)((int)fVar5 + 0x1c);
        goto LAB_00472a8c;
      }
    }
  }
  dVar29 = 12.566370964050293;
  dVar42 = 25.132741928100586;
  OrganicDeltAng
            ((moby->rotation).z,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
             g_FrameTime * 25.132742,&(moby->rotation).z,unused,out + 0xc);
  OrganicDeltAng
            ((moby->rotation).y,(float)((double)g_FrameTimeSq * dVar29),
             (float)((double)g_FrameTimeSq * dVar29),(float)((double)g_FrameTime * dVar42),
             &(moby->rotation).y,unused,out + 0xd);
  out[9] = 0.0;
LAB_00472a8c:
  dVar42 = 120.5;
  fVar5 = out[10];
  puVar17[0x3c] = (longlong)(int)(animationSpeed * 120.5);
  if (*(int *)((int)puVar17 + 0x1e4) < (int)fVar5) {
    MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
    fVar6 = *out;
  }
  else {
    dVar29 = (double)FastIntToDouble(fVar5);
    puVar17[0x3c] = (longlong)(int)((double)animationSpeed * dVar42);
    dVar42 = (double)FastIntToDouble(*(undefined4 *)((int)puVar17 + 0x1e4));
    dVar29 = (double)(float)(dVar29 / dVar42);
    dVar42 = dVar41;
    if ((dVar29 <= dVar41) && (dVar42 = dVar29, dVar29 < dVar43)) {
      dVar42 = dVar43;
    }
    dVar42 = (double)(float)(dVar42 * dVar42);
    MB_SphericalToVector
              ((float)((double)out[0xb] * dVar42),(moby->rotation).z,-(moby->rotation).y,
               (float *)(puVar17 + 0x24));
    fVar5 = (float)(dVar41 - dVar42);
    fVar6 = *out;
    fVar7 = out[1];
    fVar8 = out[2];
    *out = fVar6 * fVar5;
    out[1] = fVar7 * fVar5;
    out[2] = fVar8 * fVar5;
    fVar6 = fVar6 * fVar5 + *(float *)(puVar17 + 0x24);
    *out = fVar6;
    out[1] = fVar7 * fVar5 + *(float *)((int)puVar17 + 0x124);
    out[2] = fVar8 * fVar5 + *(float *)(puVar17 + 0x25);
  }
  fVar6 = (moby->pos).x + fVar6;
  (moby->pos).x = fVar6;
  fVar5 = (moby->pos).y + out[1];
  (moby->pos).y = fVar5;
  fVar7 = (moby->pos).z + out[2];
  (moby->pos).z = fVar7;
  if (2.0 <= fVar6) {
    if ((((fVar6 <= 1021.0) && (2.0 <= fVar5)) && (fVar5 <= 1021.0)) &&
       ((2.0 <= fVar7 && (fVar7 <= 1021.0)))) {
      GetBonePosition(lVar20,1,uVar19 - 0x1b0);
      iVar22 = CollLine(uVar19 - 0x1c0,uVar19 - 0x1b0,0,lVar20,0);
      if (iVar22 == 0) {
        iVar22 = CollSphere(0x3ff8000000000000,lVar20 + 0x10,&DAT_00471b54,0,lVar20);
        if ((iVar22 != 0) &&
           ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
            (((((g_CollOutput.pMoby != (MobyInstance *)out[8] &&
                (MVar15 = (g_CollOutput.pMoby)->oClass,
                MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar15 != 0x504)) &&
               ((MVar15 != 0x535 &&
                ((((MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
                   (MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))) &&
                  (MVar15 != 0x538)) && ((MVar15 != 0x539 && (MVar15 != 0x53a)))))))) &&
              ((MVar15 != ROCKET_0052 && ((MVar15 != MINE_0053 && (MVar15 != 0x191)))))) &&
             ((((MVar15 != QWARKS_STARFIGHTER_PART_0184 &&
                (((MVar15 != QWARKS_STARFIGHTER_PART_0185 &&
                  (MVar15 != QWARKS_STARFIGHTER_PART_0186)) &&
                 (MVar15 != QWARKS_STARFIGHTER_PART_0187)))) &&
               (((MVar15 != QWARKS_STARFIGHTER_PART_0188 && (MVar15 != QWARKS_STARFIGHTER_PART_0189)
                 ) && (MVar15 != QWARKS_STARFIGHTER_PART_018A)))) &&
              (((MVar15 != QWARKS_STARFIGHTER_PART_018B && (MVar15 != QWARKS_STARFIGHTER_PART_018C))
               && ((MVar15 != QWARKS_STARFIGHTER_PART_018F &&
                   (MVar15 != QWARKS_STARFIGHTER_PART_0190)))))))))))) {
          puVar17[0x12] = 0;
          puVar17[0x14] = 1;
          puVar17[0x15] = 1;
          puVar17[0x16] = 0xffffffffffffffff;
          puVar17[0x17] = 0;
          MB_genericExplosion
                    (0x4014000000000000,0x4024000000000000,0x401c000000000000,0x4010000000000000,
                     dVar41,dVar41,0x402e000000000000,lVar20,out,0,1,&DAT_00471b54,0x14,5,0x10);
          DeleteMoby(moby);
          return;
        }
      }
      else if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
              (((((g_CollOutput.pMoby != (MobyInstance *)out[8] &&
                  (MVar15 = (g_CollOutput.pMoby)->oClass,
                  MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar15 != 0x504)) &&
                 (MVar15 != 0x535)) &&
                ((MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
                 (MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))))) &&
               (((((MVar15 != 0x538 && ((MVar15 != 0x539 && (MVar15 != 0x53a)))) &&
                  (MVar15 != ROCKET_0052)) &&
                 (((((MVar15 != MINE_0053 && (MVar15 != 0x191)) &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_0184)) &&
                   ((MVar15 != QWARKS_STARFIGHTER_PART_0185 &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_0186)))) &&
                  (MVar15 != QWARKS_STARFIGHTER_PART_0187)))) &&
                ((((MVar15 != QWARKS_STARFIGHTER_PART_0188 &&
                   (MVar15 != QWARKS_STARFIGHTER_PART_0189)) &&
                  ((MVar15 != QWARKS_STARFIGHTER_PART_018A &&
                   (((MVar15 != QWARKS_STARFIGHTER_PART_018B &&
                     (MVar15 != QWARKS_STARFIGHTER_PART_018C)) &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_018F)))))) &&
                 (MVar15 != QWARKS_STARFIGHTER_PART_0190)))))))) {
        puVar17[0x12] = 0;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        MB_genericExplosion
                  (0x4014000000000000,0x4024000000000000,0x401c000000000000,0x4010000000000000,
                   dVar41,dVar41,0x402e000000000000,lVar20,out,0,1,0xffffffffffffffff,0x14,5,0x10);
        DeleteMoby(moby);
        return;
      }
      iVar22 = FastDecTimerS32(out + 10);
      if (iVar22 == 0) {
        if (moby->enabled != '\0') {
          return;
        }
        if (out[8] == 0.0) {
          return;
        }
        if (*(char *)((int)out[8] + 0x31) == '\0') {
          return;
        }
      }
      DeleteMoby(moby);
      return;
    }
  }
  DeleteMoby(moby);
  return;
}



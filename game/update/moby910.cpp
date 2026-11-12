// game/update/moby910.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4a9d64-0x4abfb0
#include "game/update/moby910.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x04a9d64 (0x14 bytes)
void M910_004a9d64(void)

{
  DAT_008f3f90 = 0x10000;
  return;
}


// 0x04a9d90 (0x6f8 bytes)
// inlined: FastAtan2 @0x4a9ea4, FastAtan2 @0x4aa088, FastAtan2 @0x4aa2c8
double M910_004a9d90(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  longlong lVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x150;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar19;
  puVar13[0x2c] = in_LR;
  puVar13[0x24] = in_f26;
  puVar13[0x25] = in_f27;
  puVar13[0x26] = in_f28;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar13[0x22] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x21);
  dVar36 = 0.7853981852531433;
  fVar2 = *(float *)(param_1 + 0x18);
  puVar13[0x21] = unaff_r29;
  iVar12 = *(int *)(iVar12 + 0x160);
  if (bVar1 == 0xff) {
    fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar4 = ABS(fVar2);
    fVar9 = ABS(fVar3);
    *(float *)(puVar13 + 0x11) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar3;
    *(float *)(puVar13 + 0x12) = fVar4 - fVar9;
    dVar36 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar27 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)(puVar13 + 0x1b) = fVar2;
      *(float *)((int)puVar13 + 0xdc) = fVar2;
      *(float *)(puVar13 + 0x1c) = fVar2;
      lVar25 = uVar19 - 0x140;
      fVar2 = fVar4 * fVar4;
      lVar21 = uVar19 - 0x7c;
      lVar23 = uVar19 - 0x6c;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar2;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar25 + 0xd4) = *(float *)((int)lVar25 + 0xc4) * fVar2 * fVar2;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar2 = *pfVar24;
        fVar4 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xd4) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar12 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar14 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar9 + fVar3);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(iVar12 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar10 = fVar3 - fVar9;
    fVar15 = fVar4 - fVar5;
    fVar8 = ABS(fVar10);
    fVar6 = ABS(fVar15);
    *(float *)((int)puVar13 + 0x7c) = fVar10;
    *(float *)(puVar13 + 0x10) = fVar15;
    *(float *)((int)puVar13 + 0x84) = fVar8 - fVar6;
    dVar32 = 0.0;
    dVar35 = (double)(DAT_008f3fe0 * -0.017453292);
    fVar15 = DAT_008f3fe0 * 0.017453292;
    uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar7 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar18 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar18 = fVar8;
    }
    dVar31 = dVar32;
    if (0.0 < fVar7) {
      lVar21 = uVar19 - 0x140;
      lVar25 = uVar19 - 0x8c;
      lVar23 = uVar19 - 0x9c;
      lVar27 = 2;
      fVar7 = (fVar18 - fVar7) / (fVar18 + fVar7);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 0xb4) = fVar7;
      *(float *)(puVar13 + 0x17) = fVar7;
      *(float *)((int)puVar13 + 0xbc) = fVar7;
      *(float *)(puVar13 + 0x18) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar7;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xa4) * fVar7 * fVar7;
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x9c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar7 = *pfVar24;
        fVar8 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xb4) * fVar7;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar23 = 2;
      lVar21 = lVar22;
      do {
        iVar14 = (int)lVar21;
        iVar16 = (int)lVar25;
        lVar21 = lVar21 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar26 = (ushort *)(&g_MobyGroups)[bVar1];
    dVar33 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar34 = (double)fVar15;
    do {
      uVar17 = *puVar26 & 0x7fff;
      if ((g_MobyInstance[uVar17].state == '\x05') ||
         (fVar2 = g_MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14),
         fVar3 = g_MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10),
         fVar9 = g_MobyInstance[uVar17].pos.z - *(float *)(iVar12 + 0x18), dVar29 = dVar34,
         (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar33)) {
        fVar2 = g_MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10);
        fVar3 = g_MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14);
        dVar28 = ABS((double)fVar2);
        dVar30 = ABS((double)fVar3);
        *(float *)(puVar13 + 0xe) = fVar2;
        *(float *)((int)puVar13 + 0x74) = fVar3;
        *(float *)(puVar13 + 0xf) = (float)(dVar28 - dVar30);
        uVar20 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar13 + 0xe));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar29 = dVar30;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar30 = ABS((double)*(float *)((int)puVar13 + 0x74));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar30 = dVar28;
        }
        fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar28 = dVar32;
        if (dVar32 < dVar29) {
          lVar21 = uVar19 - 0x140;
          lVar25 = uVar19 - 0xac;
          lVar23 = uVar19 - 0xbc;
          lVar27 = 2;
          fVar9 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar4 = fVar9 * fVar9;
          *(float *)((int)puVar13 + 0x94) = fVar9;
          *(float *)(puVar13 + 0x13) = fVar9;
          *(float *)((int)puVar13 + 0x9c) = fVar9;
          *(float *)(puVar13 + 0x14) = fVar9;
          fVar9 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
          *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar9;
          *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar9 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x84) * fVar9 * fVar9;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar9 * fVar9;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar19 - 0xbc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar23 = lVar25;
          do {
            fVar9 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x94) * fVar9;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          lVar21 = lVar22;
          dVar29 = dVar32;
          do {
            iVar14 = (int)lVar21;
            iVar16 = (int)lVar25;
            lVar21 = lVar21 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x94)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar28 = (double)((float)(dVar29 + dVar36) * fVar2 + fVar3);
        }
        dVar28 = (double)FastDiffRots(dVar28,dVar31);
        if (((dVar28 <= dVar32) || (dVar29 = dVar28, dVar34 <= dVar28)) &&
           (dVar29 = dVar34, dVar35 < dVar28 && dVar28 < dVar32)) {
          dVar35 = dVar28;
        }
      }
      uVar11 = *puVar26;
      puVar26 = puVar26 + 1;
      dVar34 = dVar29;
    } while (-1 < (short)uVar11);
    dVar36 = (double)FastSubRots((float)dVar29,(float)dVar35);
    dVar36 = (double)FastWrapRot((float)dVar35,(float)(dVar36 * 0.5));
    dVar36 = (double)FastWrapRot((float)dVar36,(float)dVar31);
  }
  return dVar36;
}


// 0x04aa488 (0x60 bytes)
void M910_004aa488(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x04aa510 (0x7c0 bytes)
// inlined: FastAtan2 @0x4aa800, FastAtan2 @0x4aaa08
void M910_004aa510(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  Spline *pSVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar22;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f31;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0xf0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar12;
  puVar10[0x20] = in_LR;
  puVar10[0x1d] = in_f31;
  puVar10[0x1b] = unaff_r30;
  puVar10[0x1c] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar24 = ZEXT48(pvVar5);
  iVar14 = *(int *)((int)pvVar5 + 0x38);
  puVar10[0x1a] = unaff_r29;
  puVar10[0x19] = unaff_r28;
  puVar10[0x18] = unaff_r27;
  if (iVar14 != 0) {
    dVar26 = (double)MB_randRangeFloat(180.0,240.0);
    uVar13 = FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x1ac) = uVar13;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  FastDecTimerS32(uVar24 + 0x1ac);
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  iVar14 = MB_damage(param_1,0x330000,0);
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar24 + 0x20,0,puVar10 + 0xe,(int)puVar10 + 0x74,0,4);
  if ((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar10 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar26) {
      iVar15 = 1;
    }
    if (param_1->group != 0xff) {
      puVar16 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
      do {
        if (g_MobyInstance[*puVar16 & 0x7fff].state == '\x01') {
          g_MobyInstance[*puVar16 & 0x7fff].state = '\x02';
        }
        uVar4 = *puVar16;
        puVar16 = puVar16 + 1;
      } while (-1 < (short)uVar4);
    }
    uVar13 = FastDoubleToInt(0x4088000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f400000;
    fVar1 = DAT_008f3fb8;
    fVar3 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar13;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar3;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        param_1->state = '\v';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = g_FrameTime * 8.0;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41d80000;
        *(float *)((int)pvVar5 + 0x8c) = fVar3 * 10.0;
        uVar6 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0x14);
        dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
        dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
        *(float *)(puVar10 + 0xf) = (float)(dVar27 - dVar29);
        uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
        uVar21 = uVar19 << 2;
        dVar28 = dVar27;
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar28 = dVar29;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)uVar21);
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar29 = dVar27;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar27 = dVar26;
        if (dVar26 < dVar28) {
          lVar17 = uVar12 - 0xe0;
          lVar23 = uVar12 - 0x60;
          lVar20 = uVar12 - 0x70;
          lVar25 = 2;
          fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
          fVar11 = fVar2 * fVar2;
          *(float *)((int)puVar10 + 0x8c) = fVar2;
          *(float *)((int)puVar10 + 0x84) = fVar2;
          *(float *)(puVar10 + 0x11) = fVar2;
          *(float *)(puVar10 + 0x10) = fVar2;
          fVar2 = fVar11 * fVar11;
          *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar11;
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar2;
          *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar2 * fVar11;
          do {
            *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x70) * fVar2 * fVar2;
            iVar14 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0x70;
          uVar21 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar20 = lVar23;
          do {
            pfVar22 = (float *)uVar21;
            fVar2 = pfVar22[1];
            uVar21 = uVar21 + 8;
            *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x80) * *pfVar22;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          dVar29 = dVar26;
          do {
            iVar14 = (int)lVar18;
            iVar15 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
        }
        MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0xf,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      param_1->state = '\n';
      fVar1 = g_FrameTime;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x14,0x4aa4e8);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      fVar3 = DAT_008f3fbc * g_FrameTime;
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
      *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
      *(float *)((int)pvVar5 + 0x88) = fVar3;
      fVar3 = DAT_008f3fc0;
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41700000;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e80000;
      *(float *)((int)pvVar5 + 0x8c) = fVar3 * fVar1;
      uVar6 = *(uint *)(iVar14 + 0x10);
      uVar7 = *(uint *)(iVar14 + 0x14);
      dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
      dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
      *(float *)((int)puVar10 + 0x7c) = (float)(dVar27 - dVar29);
      uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1e) & 2 |
               (ulonglong)(uVar7 >> 0x1d) & 4;
      uVar21 = uVar19 << 2;
      dVar28 = dVar27;
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar28 = dVar29;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)uVar21);
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar29 = dVar27;
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar27 = dVar26;
      if (dVar26 < dVar28) {
        lVar17 = uVar12 - 0xe0;
        lVar23 = uVar12 - 0x40;
        lVar20 = uVar12 - 0x50;
        lVar25 = 2;
        fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
        fVar11 = fVar2 * fVar2;
        *(float *)((int)puVar10 + 0xac) = fVar2;
        *(float *)((int)puVar10 + 0xa4) = fVar2;
        *(float *)(puVar10 + 0x15) = fVar2;
        *(float *)(puVar10 + 0x14) = fVar2;
        fVar2 = fVar11 * fVar11;
        *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar11;
        *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar2;
        *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar2 * fVar11;
        do {
          *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar2 * fVar2;
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x50;
        uVar21 = ZEXT48(&DAT_007358e0);
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          pfVar22 = (float *)uVar21;
          fVar2 = pfVar22[1];
          uVar21 = uVar21 + 8;
          *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * *pfVar22;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        dVar29 = dVar26;
        do {
          iVar14 = (int)lVar18;
          iVar15 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
      }
      MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0xf,1,0);
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
    }
    MB_UpdateLightsTransition(param_1,uVar24 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar24 + 0x60);
  if (*(int *)((int)pvVar5 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar26 = 6.0;
      }
    }
    else {
      dVar26 = (double)DAT_008f3fd8;
    }
  }
  else {
    dVar26 = (double)(DAT_008f3fd8 + 6.0);
  }
  *(float *)((int)pvVar5 + 0x1a0) = (float)dVar26;
  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x1b0)];
  iVar14 = MB_getTargetInArea
                     (dVar26,param_1,uVar24 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar14 != 2) &&
     ((fVar3 = *(float *)((int)pvVar5 + 0x174) - *(float *)((int)pvVar5 + 0x124),
      fVar1 = *(float *)((int)pvVar5 + 0x170) - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x1a0) < SQRT(fVar1 * fVar1 + fVar3 * fVar3) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04aad50 (0x1260 bytes)
/* Moby 910 */

void UpdateMoby_910(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  ushort uVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
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
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  float local_120;
  float local_11c;
  undefined4 local_118;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  GPiece<16> auStack_e0;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  GPiece<16> auStack_c0;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  MobyInstance *local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  
  pvVar8 = moby->pVar;
  uVar19 = ZEXT48(pvVar8);
  M910_004aa510();
  iVar15 = *(int *)((int)pvVar8 + 0x160);
  bVar2 = moby->state;
  fVar1 = moby->pClass->gScale * DAT_008f3fb4;
  moby->unk58 = 0.8;
  moby->scale = fVar1;
  if (bVar2 < 6) {
    if (bVar2 == 5) {
      fVar1 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) <= DAT_008f3fc8) {
        Delt(0.0,g_FrameTimeSq * 20.0,(float *)((int)pvVar8 + 0xf4));
      }
      else {
        Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                       (float *)((int)pvVar8 + 0xf4));
      }
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),moby,&DAT_00720000,uVar19 + 400);
      dVar22 = (double)M910_004a9d90(moby);
      dVar34 = 1.570796251296997;
      dVar33 = 3.141592502593994;
      fVar1 = (float)(dVar22 + 1.570796251296997);
      dVar32 = -3.141592502593994;
      dVar31 = -0.16666656732559204;
      dVar30 = 0.008333025500178337;
      dVar29 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      dVar20 = (double)(float)(3.141592502593994 - dVar22);
      if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
        dVar20 = dVar22;
      }
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      dVar23 = (double)(float)(-3.141592502593994 - dVar22);
      if ((double)(float)(-3.141592502593994 - dVar22) - dVar20 < 0.0) {
        dVar23 = dVar20;
      }
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar20 = (double)(float)(dVar23 * dVar23);
      fVar9 = fVar5 * fVar5;
      dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
      fVar1 = fVar9 * fVar9 * fVar5;
      dVar24 = (double)(float)(dVar20 * dVar22);
      dVar27 = (double)(moby->rotation).z;
      fVar4 = fVar9 * fVar1;
      dVar22 = (double)FUN_005e8338((double)(((fVar9 * fVar4 * 2.601887e-06 +
                                              fVar4 * -0.0001980741 +
                                              fVar1 * 0.0083330255 +
                                              fVar9 * fVar5 * -0.16666657 + fVar5) * DAT_008f3fc8 +
                                             *(float *)(iVar15 + 0x10)) - (moby->pos).x),
                                    (double)((((float)(dVar20 * dVar24) * 2.601887e-06 +
                                              (float)(dVar24 * -0.0001980741071747616 +
                                                     (double)(float)(dVar22 * 0.008333025500178337 +
                                                                    (double)(float)((double)(float)(
                                                  dVar20 * dVar23) * -0.16666656732559204 + dVar23))
                                                  )) * DAT_008f3fc8 + *(float *)(iVar15 + 0x14)) -
                                            (moby->pos).y));
      dVar34 = (double)(float)(dVar22 + dVar34);
      dVar20 = (double)(float)(dVar33 - dVar22);
      if (dVar22 - (double)(float)(dVar33 - dVar22) < 0.0) {
        dVar20 = dVar22;
      }
      dVar23 = (double)(float)(dVar33 - dVar34);
      if (dVar34 - (double)(float)(dVar33 - dVar34) < 0.0) {
        dVar23 = dVar34;
      }
      dVar33 = (double)(float)(dVar32 - dVar22);
      if ((double)(float)(dVar32 - dVar22) - dVar20 < 0.0) {
        dVar33 = dVar20;
      }
      local_118 = 0;
      dVar20 = (double)(float)(dVar32 - dVar34);
      if ((double)(float)(dVar32 - dVar34) - dVar23 < 0.0) {
        dVar20 = dVar23;
      }
      dVar32 = (double)(float)(dVar33 * dVar33);
      dVar34 = (double)(float)(dVar20 * dVar20);
      dVar25 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
      dVar23 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar20));
      dVar24 = (double)(float)(dVar32 * dVar25);
      dVar26 = (double)(float)(dVar34 * dVar23);
      local_11c = (float)((double)(float)(dVar32 * dVar24) * dVar28 +
                         (double)(float)(dVar24 * dVar29 +
                                        (double)(float)(dVar25 * dVar30 +
                                                       (double)(float)((double)(float)(dVar32 * 
                                                  dVar33) * dVar31 + dVar33)))) * 2.0;
      local_120 = (float)((double)(float)(dVar34 * dVar26) * dVar28 +
                         (double)(float)(dVar26 * dVar29 +
                                        (double)(float)(dVar23 * dVar30 +
                                                       (double)(float)((double)(float)(dVar34 * 
                                                  dVar20) * dVar31 + dVar20)))) * 2.0;
      dVar20 = 1.0;
      (moby->rotation).z = (float)dVar22;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_120,auStack_110
                );
      (moby->rotation).z = (float)dVar27;
      fVar1 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar10 = fVar1 - *(float *)((int)pvVar8 + 0x174);
      fVar11 = fVar4 - *(float *)((int)pvVar8 + 0x170);
      fVar5 = (moby->pos).z;
      fVar9 = fVar5 - *(float *)((int)pvVar8 + 0x178);
      if ((DAT_008f3fcc < SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) ||
         (*(int *)((int)pvVar8 + 0x164) == 2)) {
        moby->state = '\b';
      }
      else {
        fVar1 = fVar1 - *(float *)(iVar15 + 0x14);
        fVar4 = fVar4 - *(float *)(iVar15 + 0x10);
        if ((((SQRT(fVar4 * fVar4 + fVar1 * fVar1) < DAT_008f3fc8) &&
             (ABS((double)(*(float *)(iVar15 + 0x18) - fVar5)) < dVar20)) &&
            (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
           (moby->state = '\a', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 == 4) {
      iVar15 = FastDecTimerS32(uVar19 + 0x1a8);
      if (iVar15 != 0) {
        moby->state = '\x05';
        dVar20 = (double)MB_randRangeFloat
                                   (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar8 + 0x198) * -0.017453292);
        *(float *)((int)pvVar8 + 0x194) = (float)dVar20;
        if (moby->animationId != '\x15') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 == 3) {
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),moby,&DAT_004aacd0,uVar19 + 400);
      if (*(int *)((int)pvVar8 + 0x164) != 2) {
        moby->state = '\x04';
        local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
        MB_randRangeFloat(0.0,(float)local_80);
        uVar14 = FastDoubleToInt();
        *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar14;
      }
    }
    else if (bVar2 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
          dVar20 = (double)MB_randRangeFloat(0.0,20.0);
          uVar14 = FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar14;
        }
        else {
          iVar15 = FastDecTimerS32(uVar19 + 0x1a8);
          if ((iVar15 != 0) && (moby->animationId != '\x14')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0x14,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        fVar1 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (DAT_008f3fd8 <= SQRT(fVar4 * fVar4 + fVar1 * fVar1)) {
          moby->state = '\x03';
          if (moby->animationId != '\x13') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0x13,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          moby->state = '\x05';
          dVar20 = (double)MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar20;
          if (moby->animationId != '\x15') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar2 == 1) {
      iVar15 = *(int *)((int)pvVar8 + 0x164);
      moby->unk58 = 0.25;
      if ((iVar15 != 2) || (*(int *)((int)pvVar8 + 0x1b4) != 0)) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        moby->state = '\x02';
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x4aacd0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1a8,
                            uVar19);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar14;
        bVar2 = moby->group;
        if ((bVar2 != 0xff) && (bVar2 != 0xff)) {
          puVar18 = (ushort *)(&g_MobyGroups)[bVar2];
          do {
            if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
              g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
            }
            uVar7 = *puVar18;
            puVar18 = puVar18 + 1;
          } while (-1 < (short)uVar7);
        }
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40800000;
      *(undefined1 *)((int)pvVar8 + 0x28) = 3;
      *(undefined2 *)((int)pvVar8 + 0x24) = 4;
      MVar6 = moby->modeBits;
      *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
      fVar3 = (moby->pos).z;
      moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      *(f32 *)((int)pvVar8 + 0x178) = fVar3;
      *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
      MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
      uVar14 = FastDoubleToInt((double)(DAT_008f3fb4 * 1024.0));
      *(float *)((int)pvVar8 + 0xd4) = DAT_008f3fb4;
      fVar1 = g_FrameTime;
      *(undefined4 *)((int)pvVar8 + 0xd0) = uVar14;
      *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar1;
      moby->state = '\x01';
      if (moby->animationId != '\x06') {
        MB_SetAnimation(moby,6,0,0);
      }
      *(float *)((int)pvVar8 + 0x1a0) = DAT_008f3fd8;
    }
  }
  else if (bVar2 == 0xb) {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x40) == 0) {
      fVar3 = (moby->pos).z;
      uVar17 = (int)fVar3 >> 0x1f;
      if ((int)((uVar17 >> 1 ^ (uint)fVar3) - uVar17) < 0x40000000) {
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (bVar2 == 10) {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\t';
      if (moby->animationId != '\x15') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x74,0x4aacd0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1a8,uVar19
                         );
      *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar14;
    }
  }
  else if (bVar2 == 9) {
    Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * g_FrameTime,g_FrameTimeSq * 20.0
                   ,(float *)((int)pvVar8 + 0xf4));
    uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),moby);
    dVar28 = (double)(moby->rotation).z;
    dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    dVar22 = (double)FastWrapRot((float)dVar20,3.14159);
    fVar1 = (float)(dVar22 + 1.570796251296997);
    dVar20 = (double)(float)(3.141592502593994 - dVar22);
    if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
      dVar20 = dVar22;
    }
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    dVar29 = (double)(float)(-3.141592502593994 - dVar22);
    if ((double)(float)(-3.141592502593994 - dVar22) - dVar20 < 0.0) {
      dVar29 = dVar20;
    }
    local_e8 = 0;
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar20 = (double)(float)(dVar29 * dVar29);
    fVar9 = fVar5 * fVar5;
    dVar31 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar29));
    fVar1 = fVar9 * fVar9 * fVar5;
    dVar30 = (double)(float)(dVar20 * dVar31);
    fVar4 = fVar9 * fVar1;
    local_ec = ((float)(dVar20 * dVar30) * 2.601887e-06 +
               (float)(dVar30 * -0.0001980741071747616 +
                      (double)(float)(dVar31 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar20 * dVar29) *
                                                     -0.16666656732559204 + dVar29)))) * 2.0;
    local_f0 = (fVar9 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
               2.0;
    (moby->rotation).z = (float)dVar22;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_f0,auStack_e0);
    (moby->rotation).z = (float)dVar28;
    iVar16 = FastDecTimerS32(uVar19 + 0x1a8);
    if ((iVar16 != 0) ||
       (fVar1 = (moby->pos).y - *(float *)(iVar15 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10),
       fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18),
       DAT_008f3fdc < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1))) {
      moby->state = '\a';
      *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 5.0;
      if (DAT_008f3fe4 == 0) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,1,10,(int)(animationSpeed * 10.5));
        }
      }
      else if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(moby,1,DAT_008f3fe8,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar2 == 8) {
    Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                   (float *)((int)pvVar8 + 0xf4));
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),moby);
    fVar1 = (moby->rotation).z;
    fVar5 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar9 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar9 = fVar5;
    }
    fVar10 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar10 = fVar4;
    }
    local_c8 = 0;
    fVar1 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar9 < 0.0) {
      fVar1 = fVar9;
    }
    fVar5 = fVar10 * fVar10;
    fVar4 = fVar1 * fVar1;
    fVar9 = fVar5 * fVar5 * fVar10;
    fVar11 = fVar5 * fVar9;
    fVar12 = fVar4 * fVar4 * fVar1;
    fVar13 = fVar4 * fVar12;
    local_cc = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10
               ) * 2.0;
    local_d0 = (fVar4 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1)
               * 2.0;
    dVar20 = 1.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_d0,auStack_c0);
    fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 0x174);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x178);
    if (dVar20 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1)) {
      if ((*(int *)((int)pvVar8 + 0x164) != 2) &&
         (moby->state = '\x05', moby->animationId != '\x15')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x13') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0x13,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar2 == 7) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),moby,&DAT_00720000,uVar19 + 400);
    dVar20 = (double)BlendAnimFrame(moby);
    if ((dVar20 <= 18.0) || (dVar20 = (double)BlendAnimFrame(moby), 24.0 <= dVar20)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x15')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      fVar1 = (moby->rotation).z;
      fVar4 = fVar1 + 1.5707963;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar10 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar10 = fVar5;
      }
      local_a8 = 0;
      local_94 = 0x3f800000;
      local_90 = 1;
      local_9c = 1;
      fVar1 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar1 = fVar9;
      }
      fVar4 = fVar10 * fVar10;
      fVar5 = fVar1 * fVar1;
      fVar12 = fVar4 * fVar4 * fVar10;
      fVar9 = fVar5 * fVar5 * fVar1;
      fVar13 = fVar4 * fVar12;
      fVar11 = fVar5 * fVar9;
      local_ac = fVar4 * fVar13 * 2.601887e-06 +
                 fVar13 * -0.0001980741 +
                 fVar12 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10;
      local_b0 = fVar5 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar1 * -0.16666657 + fVar1
      ;
      local_a0 = moby;
      GetBonePosition(moby,0,auStack_100);
      uVar21 = 0x3fe0000000000000;
      CollMobySphere(0x3fe0000000000000,auStack_100);
      GetBonePosition(moby,1,auStack_100);
      CollMobySphere(uVar21,auStack_100);
      GetBonePosition(moby,2,auStack_100);
      uVar21 = 0x3fd0000000000000;
      CollMobySphere(0x3fd0000000000000,auStack_100);
      GetBonePosition(moby,3,auStack_100);
      CollMobySphere(uVar21,auStack_100);
    }
  }
  return;
}



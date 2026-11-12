// game/update/moby870.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x49b854-0x49dc78
#include "game/update/moby870.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x049b854 (0x14 bytes)
void M870_0049b854(void)

{
  DAT_008c7f14 = 0x10000;
  return;
}


// 0x049b880 (0x6f8 bytes)
// inlined: FastAtan2 @0x49b994, FastAtan2 @0x49bb78, FastAtan2 @0x49bdb8
double M870_0049b880(int param_1)

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
    dVar35 = (double)(DAT_008c7f64 * -0.017453292);
    fVar15 = DAT_008c7f64 * 0.017453292;
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
      if ((g_MobyInstance[uVar17].state == '\a') ||
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


// 0x049bf78 (0x5c bytes)
void M870_0049bf78(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  do {
    if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
      g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x049bff8 (0x760 bytes)
// inlined: FastAtan2 @0x49c290, FastAtan2 @0x49c498
void M870_0049bff8(MobyInstance *param_1)

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
  ushort *puVar18;
  longlong lVar16;
  longlong lVar17;
  float *pfVar22;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar23;
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
  lVar17 = uVar12 - 0xe0;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar12;
  puVar10[0x1e] = in_LR;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r30;
  puVar10[0x1a] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar24 = ZEXT48(pvVar5);
  iVar14 = *(int *)((int)pvVar5 + 0x38);
  puVar10[0x18] = unaff_r29;
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
  if ((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\r')) {
    fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar10 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar26) {
      iVar15 = 1;
    }
    if (param_1->group != 0xff) {
      puVar18 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
      do {
        if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar4 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar4);
    }
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        param_1->state = '\r';
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
          lVar16 = uVar12 - 0xd0;
          lVar23 = uVar12 - 0x50;
          lVar20 = uVar12 - 0x60;
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
            *(float *)((int)lVar16 + 0x80) = *(float *)((int)lVar16 + 0x70) * fVar2 * fVar2;
            iVar14 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0x60;
          uVar21 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar23;
          do {
            pfVar22 = (float *)uVar21;
            fVar2 = pfVar22[1];
            uVar21 = uVar21 + 8;
            *(float *)((int)lVar16 + 0x80) = *(float *)((int)lVar16 + 0x80) * *pfVar22;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar16 = 2;
          dVar29 = dVar26;
          do {
            iVar14 = (int)lVar17;
            iVar15 = (int)lVar23;
            lVar17 = lVar17 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
        }
        MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0x12,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      param_1->state = '\f';
      fVar1 = g_FrameTime;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x10,0x49bfd4);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      fVar3 = DAT_008c7f40 * g_FrameTime;
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
      *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
      *(float *)((int)pvVar5 + 0x88) = fVar3;
      fVar3 = DAT_008c7f44;
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
        lVar16 = uVar12 - 0xd0;
        lVar23 = uVar12 - 0x30;
        lVar20 = uVar12 - 0x40;
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
          *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0x90) * fVar2 * fVar2;
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x40;
        uVar21 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar20 = lVar23;
        do {
          pfVar22 = (float *)uVar21;
          fVar2 = pfVar22[1];
          uVar21 = uVar21 + 8;
          *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * *pfVar22;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        dVar29 = dVar26;
        do {
          iVar14 = (int)lVar17;
          iVar15 = (int)lVar23;
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
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
      dVar26 = (double)DAT_008c7f5c;
    }
  }
  else {
    dVar26 = (double)(DAT_008c7f5c + 6.0);
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


// 0x049c7d8 (0x14a0 bytes)
/* Moby 870 */

void UpdateMoby_870(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
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
  Cuboid *pCVar14;
  longlong lVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ushort *puVar21;
  double dVar22;
  undefined8 uVar23;
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
  double dVar35;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
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
  
  lVar15 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar20 = ZEXT48(pvVar8);
  M870_0049bff8();
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  bVar1 = moby->state;
  fVar3 = moby->pClass->gScale * DAT_008c7f38;
  moby->unk58 = 0.8;
  moby->scale = fVar3;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      iVar17 = FastDecTimerS32(uVar20 + 0x1a8);
      if (iVar17 != 0) {
        moby->state = '\a';
        dVar22 = (double)MB_randRangeFloat
                                   (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar8 + 0x198) * -0.017453292);
        *(float *)((int)pvVar8 + 0x194) = (float)dVar22;
        if (moby->animationId != '\x16') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 5) {
      uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar15,&DAT_0049c758,uVar20 + 400);
      if (*(int *)((int)pvVar8 + 0x164) != 2) {
        moby->state = '\x06';
        local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
        MB_randRangeFloat(0.0,(float)local_80);
        uVar16 = FastDoubleToInt();
        *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
      }
    }
    else if (bVar1 == 4) {
      uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if (((uVar18 & 1) != 0) && (moby->state = '\x05', moby->animationId != '\x14')) {
        MB_SetAnimation(lVar15,0x14,0,5);
      }
    }
    else if (bVar1 == 3) {
      if ((-1 < *(int *)((int)pvVar8 + 0x1c0)) &&
         (iVar17 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x1c0)), iVar17 != 0)
         ) {
        moby->state = '\x04';
        pCVar14 = Cuboids;
        iVar17 = *(int *)((int)pvVar8 + 0x1bc);
        fVar3 = Cuboids[iVar17].pos.x;
        *(float *)((int)pvVar8 + 0x170) = fVar3;
        fVar4 = pCVar14[iVar17].pos.y;
        *(float *)((int)pvVar8 + 0x174) = fVar4;
        *(float *)((int)pvVar8 + 0x178) = pCVar14[iVar17].pos.z;
        *(float *)((int)pvVar8 + 0x17c) = pCVar14[iVar17].pos.w;
        fVar4 = (moby->pos).y - fVar4;
        fVar3 = (moby->pos).x - fVar3;
        fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 60.5);
        *(float *)((int)pvVar8 + 0x88) = fVar3;
        dVar22 = (double)MB_computeLobVelocity
                                   ((double)fVar3,-(double)*(float *)((int)pvVar8 + 0x80),
                                    lVar15 + 0x10,uVar20 + 0x170);
        *(float *)((int)pvVar8 + 0x8c) = (float)dVar22;
        *(undefined1 *)((int)pvVar8 + 0xad) = 3;
        *(undefined4 *)((int)pvVar8 + 0x94) = 5;
        FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                     (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
        MB_StartKick(lVar15,uVar20 + 0x70);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar15,0,0,5);
        }
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
          dVar22 = (double)MB_randRangeFloat(0.0,20.0);
          uVar16 = FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
        }
        else {
          iVar17 = FastDecTimerS32(uVar20 + 0x1a8);
          if ((iVar17 != 0) && (moby->animationId != '\x15')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,0x15,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (DAT_008c7f5c <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          moby->state = '\x05';
          if (moby->animationId != '\x14') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,0x14,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          moby->state = '\a';
          dVar22 = (double)MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar22;
          if (moby->animationId != '\x16') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 1) {
      iVar17 = *(int *)((int)pvVar8 + 0x164);
      moby->unk58 = 0.25;
      if (iVar17 != 2) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        moby->state = '\x02';
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(8,0x49c758);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,
                            uVar20);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
        if (moby->group != 0xff) {
          puVar21 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
          do {
            if (g_MobyInstance[*puVar21 & 0x7fff].state == '\x01') {
              g_MobyInstance[*puVar21 & 0x7fff].state = '\x02';
            }
            uVar7 = *puVar21;
            puVar21 = puVar21 + 1;
          } while (-1 < (short)uVar7);
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40800000;
      *(undefined1 *)((int)pvVar8 + 0x28) = 3;
      *(undefined2 *)((int)pvVar8 + 0x24) = 4;
      MVar6 = moby->modeBits;
      *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
      fVar2 = (moby->pos).z;
      moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      *(f32 *)((int)pvVar8 + 0x178) = fVar2;
      *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
      MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
      uVar16 = FastDoubleToInt((double)(DAT_008c7f38 * 1024.0));
      *(float *)((int)pvVar8 + 0xd4) = DAT_008c7f38;
      fVar3 = g_FrameTime;
      *(undefined4 *)((int)pvVar8 + 0xd0) = uVar16;
      *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar3;
      uVar16 = FastDoubleToInt(0x4088000000000000);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f400000;
      fVar4 = DAT_008c7f3c;
      fVar3 = g_FrameTimeSq;
      *(undefined4 *)((int)pvVar8 + 0x90) = uVar16;
      *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(undefined4 *)((int)pvVar8 + 0x94) = 9;
      *(float *)((int)pvVar8 + 0x80) = fVar4 * fVar3;
      if (*(int *)((int)pvVar8 + 0x1c0) < 0) {
        if (*(int *)((int)pvVar8 + 0x1b4) == 0) {
          moby->state = '\x01';
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar15,6,0,0);
          }
          *(float *)((int)pvVar8 + 0x1a0) = DAT_008c7f5c;
        }
        else {
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          moby->state = '\x02';
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(8,0x49c758);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,
                              uVar20);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar15,6,0,0);
          }
          if (moby->group != 0xff) {
            puVar21 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
            do {
              if (g_MobyInstance[*puVar21 & 0x7fff].state == '\x01') {
                g_MobyInstance[*puVar21 & 0x7fff].state = '\x02';
              }
              uVar7 = *puVar21;
              puVar21 = puVar21 + 1;
            } while (-1 < (short)uVar7);
          }
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar18 & 0x40) == 0) {
      fVar2 = (moby->pos).z;
      uVar18 = (int)fVar2 >> 0x1f;
      if ((int)((uVar18 >> 1 ^ (uint)fVar2) - uVar18) < 0x40000000) {
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xc) {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar18 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\v';
      if (moby->animationId != '\x16') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0x78,0x49c758);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x1a8,uVar20
                         );
      *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
    }
  }
  else if (bVar1 == 0xb) {
    Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * g_FrameTime,g_FrameTimeSq * 20.0
                   ,(float *)((int)pvVar8 + 0xf4));
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar15);
    dVar30 = (double)(moby->rotation).z;
    dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar24 = (double)FastWrapRot((float)dVar22,3.14159);
    fVar3 = (float)(dVar24 + 1.570796251296997);
    dVar22 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar31 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar22 < 0.0) {
      dVar31 = dVar22;
    }
    local_e8 = 0;
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar22 = (double)(float)(dVar31 * dVar31);
    fVar9 = fVar5 * fVar5;
    dVar33 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar31));
    fVar3 = fVar9 * fVar9 * fVar5;
    dVar32 = (double)(float)(dVar22 * dVar33);
    fVar4 = fVar9 * fVar3;
    local_ec = ((float)(dVar22 * dVar32) * 2.601887e-06 +
               (float)(dVar32 * -0.0001980741071747616 +
                      (double)(float)(dVar33 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar22 * dVar31) *
                                                     -0.16666656732559204 + dVar31)))) * 2.0;
    local_f0 = (fVar9 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
               2.0;
    (moby->rotation).z = (float)dVar24;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_f0,auStack_e0);
    (moby->rotation).z = (float)dVar30;
    iVar19 = FastDecTimerS32(uVar20 + 0x1a8);
    if ((iVar19 != 0) ||
       (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
       fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18),
       DAT_008c7f60 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
      moby->state = '\t';
      *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 5.0;
      if (DAT_008c7f68 == 0) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,1,10,(int)(animationSpeed * 10.5));
        }
      }
      else if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar15,1,DAT_008c7f6c,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar1 == 10) {
    Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                   (float *)((int)pvVar8 + 0xf4));
    uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar15);
    fVar3 = (moby->rotation).z;
    fVar5 = fVar3 + 1.5707963;
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    fVar9 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar9 = fVar5;
    }
    fVar10 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar10 = fVar4;
    }
    local_c8 = 0;
    fVar3 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar9 < 0.0) {
      fVar3 = fVar9;
    }
    fVar5 = fVar10 * fVar10;
    fVar4 = fVar3 * fVar3;
    fVar9 = fVar5 * fVar5 * fVar10;
    fVar11 = fVar5 * fVar9;
    fVar12 = fVar4 * fVar4 * fVar3;
    fVar13 = fVar4 * fVar12;
    local_cc = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10
               ) * 2.0;
    local_d0 = (fVar4 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    dVar22 = 1.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_d0,auStack_c0);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x174);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x178);
    if (dVar22 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
      if ((*(int *)((int)pvVar8 + 0x164) != 2) && (moby->state = '\a', moby->animationId != '\x16'))
      {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x14') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,0x14,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar1 == 9) {
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar15,&DAT_00720000,uVar20 + 400);
    dVar22 = (double)BlendAnimFrame(moby);
    if ((dVar22 <= 18.0) || (dVar22 = (double)BlendAnimFrame(moby), 24.0 <= dVar22)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\a', moby->animationId != '\x16')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,0x16,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar22 = 1.570796251296997;
      dVar36 = 3.141592502593994;
      dVar35 = -3.141592502593994;
      dVar34 = -0.16666656732559204;
      dVar33 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      dVar24 = 2.601886990305502e-06;
      GetBonePosition(lVar15,0,auStack_100);
      dVar30 = (double)(moby->rotation).z;
      dVar32 = (double)(float)(dVar30 + dVar22);
      local_a8 = 0;
      dVar22 = (double)(float)(dVar36 - dVar30);
      if (dVar30 - (double)(float)(dVar36 - dVar30) < 0.0) {
        dVar22 = dVar30;
      }
      dVar25 = (double)(float)(dVar36 - dVar32);
      if (dVar32 - (double)(float)(dVar36 - dVar32) < 0.0) {
        dVar25 = dVar32;
      }
      dVar36 = (double)(float)(dVar35 - dVar30);
      if ((double)(float)(dVar35 - dVar30) - dVar22 < 0.0) {
        dVar36 = dVar22;
      }
      dVar22 = (double)(float)(dVar35 - dVar32);
      if ((double)(float)(dVar35 - dVar32) - dVar25 < 0.0) {
        dVar22 = dVar25;
      }
      dVar30 = (double)(float)(dVar36 * dVar36);
      dVar32 = (double)(float)(dVar22 * dVar22);
      dVar26 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar36));
      dVar35 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar22));
      dVar25 = (double)(float)(dVar30 * dVar26);
      dVar29 = (double)(float)(dVar32 * dVar35);
      local_ac = (float)((double)(float)(dVar30 * dVar25) * dVar24 +
                        (double)(float)(dVar25 * dVar31 +
                                       (double)(float)(dVar26 * dVar33 +
                                                      (double)(float)((double)(float)(dVar30 * 
                                                  dVar36) * dVar34 + dVar36))));
      local_b0 = (float)((double)(float)(dVar32 * dVar29) * dVar24 +
                        (double)(float)(dVar29 * dVar31 +
                                       (double)(float)(dVar35 * dVar33 +
                                                      (double)(float)((double)(float)(dVar32 * 
                                                  dVar22) * dVar34 + dVar22))));
      local_94 = 0x3f800000;
      local_90 = 1;
      local_9c = 1;
      local_a0 = moby;
      CollMobySphere(0x3fe0000000000000,auStack_100,1,0,lVar15,&local_b0);
    }
  }
  else if (bVar1 == 7) {
    fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14);
    fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10);
    fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18);
    if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008c7f4c) {
      Delt(0.0,g_FrameTimeSq * 20.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
      Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                     (float *)((int)pvVar8 + 0xf4));
    }
    uVar23 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar23,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar15,&DAT_00720000,uVar20 + 400);
    dVar24 = (double)M870_0049b880(lVar15);
    dVar36 = 1.570796251296997;
    dVar35 = 3.141592502593994;
    fVar3 = (float)(dVar24 + 1.570796251296997);
    dVar34 = -3.141592502593994;
    dVar33 = -0.16666656732559204;
    dVar32 = 0.008333025500178337;
    dVar31 = -0.0001980741071747616;
    dVar30 = 2.601886990305502e-06;
    dVar22 = (double)(float)(3.141592502593994 - dVar24);
    if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar24);
    if ((double)(float)(-3.141592502593994 - dVar24) - dVar22 < 0.0) {
      dVar25 = dVar22;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar22 = (double)(float)(dVar25 * dVar25);
    fVar9 = fVar5 * fVar5;
    dVar24 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar25));
    fVar3 = fVar9 * fVar9 * fVar5;
    dVar26 = (double)(float)(dVar22 * dVar24);
    dVar29 = (double)(moby->rotation).z;
    fVar4 = fVar9 * fVar3;
    dVar24 = (double)FUN_005e8338((double)(((fVar9 * fVar4 * 2.601887e-06 +
                                            fVar4 * -0.0001980741 +
                                            fVar3 * 0.0083330255 +
                                            fVar9 * fVar5 * -0.16666657 + fVar5) * DAT_008c7f4c +
                                           *(float *)(iVar17 + 0x10)) - (moby->pos).x),
                                  (double)((((float)(dVar22 * dVar26) * 2.601887e-06 +
                                            (float)(dVar26 * -0.0001980741071747616 +
                                                   (double)(float)(dVar24 * 0.008333025500178337 +
                                                                  (double)(float)((double)(float)(
                                                  dVar22 * dVar25) * -0.16666656732559204 + dVar25))
                                                  )) * DAT_008c7f4c + *(float *)(iVar17 + 0x14)) -
                                          (moby->pos).y));
    dVar36 = (double)(float)(dVar24 + dVar36);
    dVar22 = (double)(float)(dVar35 - dVar24);
    if (dVar24 - (double)(float)(dVar35 - dVar24) < 0.0) {
      dVar22 = dVar24;
    }
    dVar25 = (double)(float)(dVar35 - dVar36);
    if (dVar36 - (double)(float)(dVar35 - dVar36) < 0.0) {
      dVar25 = dVar36;
    }
    dVar35 = (double)(float)(dVar34 - dVar24);
    if ((double)(float)(dVar34 - dVar24) - dVar22 < 0.0) {
      dVar35 = dVar22;
    }
    local_118 = 0;
    dVar22 = (double)(float)(dVar34 - dVar36);
    if ((double)(float)(dVar34 - dVar36) - dVar25 < 0.0) {
      dVar22 = dVar25;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar22 * dVar22);
    dVar27 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar25 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar22));
    dVar26 = (double)(float)(dVar34 * dVar27);
    dVar28 = (double)(float)(dVar36 * dVar25);
    local_11c = (float)((double)(float)(dVar34 * dVar26) * dVar30 +
                       (double)(float)(dVar26 * dVar31 +
                                      (double)(float)(dVar27 * dVar32 +
                                                     (double)(float)((double)(float)(dVar34 * dVar35
                                                                                    ) * dVar33 +
                                                                    dVar35)))) * 2.0;
    local_120 = (float)((double)(float)(dVar36 * dVar28) * dVar30 +
                       (double)(float)(dVar28 * dVar31 +
                                      (double)(float)(dVar25 * dVar32 +
                                                     (double)(float)((double)(float)(dVar36 * dVar22
                                                                                    ) * dVar33 +
                                                                    dVar22)))) * 2.0;
    dVar22 = 1.0;
    (moby->rotation).z = (float)dVar24;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_120,auStack_110);
    (moby->rotation).z = (float)dVar29;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar10 = fVar3 - *(float *)((int)pvVar8 + 0x174);
    fVar11 = fVar4 - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z;
    fVar9 = fVar5 - *(float *)((int)pvVar8 + 0x178);
    if ((DAT_008c7f50 < SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) ||
       (*(int *)((int)pvVar8 + 0x164) == 2)) {
      moby->state = '\n';
    }
    else {
      fVar3 = fVar3 - *(float *)(iVar17 + 0x14);
      fVar4 = fVar4 - *(float *)(iVar17 + 0x10);
      if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_008c7f4c) &&
           (ABS((double)(*(float *)(iVar17 + 0x18) - fVar5)) < dVar22)) &&
          (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
         (moby->state = '\t', moby->animationId != '\x01')) {
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



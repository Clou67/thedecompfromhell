// game/update/moby1048.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x19f1bc-0x1a1e24
#include <math.h>
#include "game/update/moby1048.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x019f1bc (0x14 bytes)
void M1048_0019f1bc(void)

{
  DAT_0074060c = 0x10000;
  return;
}


// 0x019f1e8 (0x708 bytes)
// inlined: FastAtan2 @0x19f2fc, FastAtan2 @0x19f4e0, FastAtan2 @0x19f730
double M1048_0019f1e8(int param_1)

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
  double dVar32;
  ulonglong in_f26;
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
    dVar30 = 0.0;
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
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar3);
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
    dVar30 = 0.0;
    dVar35 = (double)(DAT_00740658 * -0.017453292);
    fVar15 = DAT_00740658 * 0.017453292;
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
    dVar32 = dVar30;
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
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar26 = (ushort *)(&g_MobyGroups)[bVar1];
    dVar33 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar34 = (double)fVar15;
    if (puVar26 != (ushort *)0x0) {
      do {
        uVar17 = *puVar26 & 0x7fff;
        if ((g_MobyInstance[uVar17].state == '\b') ||
           (fVar2 = g_MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14),
           fVar3 = g_MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10),
           fVar9 = g_MobyInstance[uVar17].pos.z - *(float *)(iVar12 + 0x18), dVar29 = dVar34,
           (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar33)) {
          fVar2 = g_MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10);
          fVar3 = g_MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14);
          dVar28 = ABS((double)fVar2);
          dVar31 = ABS((double)fVar3);
          *(float *)(puVar13 + 0xe) = fVar2;
          *(float *)((int)puVar13 + 0x74) = fVar3;
          *(float *)(puVar13 + 0xf) = (float)(dVar28 - dVar31);
          uVar20 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar13 + 0xe));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar29 = dVar31;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar31 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar31 = dVar28;
          }
          fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = dVar30;
          if (dVar30 < dVar29) {
            lVar21 = uVar19 - 0x140;
            lVar23 = uVar19 - 0xbc;
            lVar25 = uVar19 - 0xac;
            lVar27 = 2;
            fVar9 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
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
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + 8;
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
            dVar29 = dVar30;
            do {
              iVar14 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x94)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar28 = (double)((float)(dVar29 + dVar36) * fVar2 + fVar3);
          }
          dVar28 = (double)FastDiffRots(dVar28,dVar32);
          if (((dVar28 <= dVar30) || (dVar29 = dVar28, dVar34 <= dVar28)) &&
             (dVar29 = dVar34, dVar35 < dVar28 && dVar28 < dVar30)) {
            dVar35 = dVar28;
          }
        }
        uVar11 = *puVar26;
        puVar26 = puVar26 + 1;
        dVar34 = dVar29;
      } while (-1 < (short)uVar11);
      dVar36 = (double)FastSubRots((float)dVar29,(float)dVar35);
      dVar36 = (double)FastWrapRot((float)dVar35,(float)(dVar36 * 0.5));
      dVar30 = (double)FastWrapRot((float)dVar36,(float)dVar32);
    }
  }
  return dVar30;
}


// 0x019f8f0 (0x6c bytes)
void M1048_0019f8f0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((&g_MobyGroups)[*(byte *)(param_1 + 0x21)] != 0) {
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


// 0x019f9b0 (0x8b4 bytes)
// inlined: FastAtan2 @0x19fc4c, FastAtan2 @0x19fe60
void M1048_0019f9b0(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  void *pvVar6;
  uint uVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar19;
  longlong lVar17;
  longlong lVar18;
  float *pfVar23;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0xf0;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar12;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  puVar9[0x1b] = unaff_r30;
  puVar9[0x1c] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar25 = ZEXT48(pvVar6);
  iVar14 = *(int *)((int)pvVar6 + 0x38);
  puVar9[0x1a] = unaff_r29;
  if (iVar14 != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,240.0);
    uVar13 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x1ac) = uVar13;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar25 + 0x1ac);
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x84) = 0;
  iVar14 = MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0x418)) {
    iVar14 = 0;
  }
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar25 + 0x20,0,puVar9 + 0x10,(int)puVar9 + 0x84,0,4);
  if ((*(int *)(puVar9 + 0x10) != 1) && (param_1->state != '\x03' && param_1->state != '\x11')) {
    *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x84)
    ;
    bVar1 = param_1->group;
    if ((bVar1 != 0xff) && ((&g_MobyGroups)[bVar1] != 0)) {
      puVar19 = (ushort *)(&g_MobyGroups)[bVar1];
      do {
        if (g_MobyInstance[*puVar19 & 0x7fff].state == '\x01') {
          g_MobyInstance[*puVar19 & 0x7fff].state = '\x02';
        }
        uVar5 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (-1 < (short)uVar5);
    }
    if (*(int *)((int)pvVar6 + 0x20) < 1) {
LAB_0019fd7c:
      param_1->state = '\x11';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      fVar4 = g_FrameTime;
      *(float *)((int)pvVar6 + 0x88) = g_FrameTime * 8.0;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41680000;
      *(float *)((int)pvVar6 + 0x8c) = fVar4 * 5.0;
      uVar16 = *(uint *)(iVar14 + 0x10);
      uVar7 = *(uint *)(iVar14 + 0x14);
      dVar29 = ABS((double)*(float *)(iVar14 + 0x10));
      dVar30 = ABS((double)*(float *)(iVar14 + 0x14));
      *(float *)(puVar9 + 0x11) = (float)(dVar29 - dVar30);
      uVar20 = (ulonglong)(uVar16 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
      uVar22 = uVar20 << 2;
      dVar28 = dVar29;
      if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
        dVar28 = dVar30;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar22);
      if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
        dVar30 = dVar29;
      }
      fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar29 = dVar27;
      if (dVar27 < dVar28) {
        lVar17 = uVar12 - 0xe0;
        lVar24 = uVar12 - 0x50;
        lVar21 = uVar12 - 0x60;
        lVar26 = 2;
        fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
        fVar10 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0x9c) = fVar3;
        *(float *)((int)puVar9 + 0x94) = fVar3;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)(puVar9 + 0x12) = fVar3;
        fVar3 = fVar10 * fVar10;
        *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar10;
        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar3;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3 * fVar10;
        do {
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar3 * fVar3;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar24 = uVar12 - 0x60;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar17 = lVar18;
        lVar21 = lVar24;
        do {
          pfVar23 = (float *)uVar22;
          fVar3 = pfVar23[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * *pfVar23;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar17 = 2;
        dVar30 = dVar27;
        do {
          iVar14 = (int)lVar18;
          iVar15 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar14 + 0x90)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar2);
      }
      MB_StartKick(dVar29,param_1,uVar25 + 0x70,uVar22,10,1,0);
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    else if (*(int *)((int)pvVar6 + 0x1cc) == 0) {
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) goto LAB_0019fd7c;
      }
      else if (iVar15 < 0xb) {
        param_1->state = '\x0e';
        fVar4 = g_FrameTime * 2.0;
        *(float *)((int)pvVar6 + 0x8c) = g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41080000;
        *(float *)((int)pvVar6 + 0x88) = fVar4;
        uVar16 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0x14);
        dVar29 = ABS((double)*(float *)(iVar14 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar14 + 0x14));
        *(float *)((int)puVar9 + 0x8c) = (float)(dVar29 - dVar30);
        uVar20 = (ulonglong)(uVar16 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1e) & 2 |
                 (ulonglong)(uVar7 >> 0x1d) & 4;
        uVar22 = uVar20 << 2;
        dVar28 = dVar29;
        if ((double)*(float *)((int)puVar9 + 0x8c) - dVar27 < 0.0) {
          dVar28 = dVar30;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar22);
        fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar9 + 0x8c) - dVar27 < 0.0) {
          dVar30 = dVar29;
        }
        dVar29 = dVar27;
        if (dVar27 < dVar28) {
          lVar17 = uVar12 - 0xe0;
          lVar21 = uVar12 - 0x40;
          lVar24 = uVar12 - 0x30;
          lVar26 = 2;
          fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar10 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)((int)puVar9 + 0xb4) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          *(float *)(puVar9 + 0x16) = fVar3;
          fVar3 = fVar10 * fVar10;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar10;
          *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3 * fVar10;
          do {
            *(float *)((int)lVar17 + 0xb0) = *(float *)((int)lVar17 + 0xa0) * fVar3 * fVar3;
            iVar14 = (int)lVar21;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar12 - 0x40;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar3 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 0xb0) = *(float *)((int)lVar17 + 0xb0) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
            lVar21 = lVar21 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar17 = 2;
          dVar30 = dVar27;
          do {
            iVar14 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar14 + 0xb0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar4);
        }
        MB_StartKick(dVar29,param_1,uVar25 + 0x70,uVar22,9,1,0);
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
    }
    MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  bVar1 = param_1->state;
  if (bVar1 < 10) {
    if (bVar1 < 8) goto LAB_001a0050;
  }
  else if ((bVar1 < 0xc) || (0xd < bVar1)) goto LAB_001a0050;
  if (worldUpdateTime +
      (((int)worldUpdateTime >> 2) + (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0))
      * -4 == ((int)param_1 >> 8 & 3U)) {
    puVar9[0xe] = 0;
    DamageSphereAtPos
              (0x3fe6666660000000,0x3fecccccc0000000,0x3ff0000000000000,param_1,&param_1->pos,
               &DAT_0019f95c,0x10000);
  }
LAB_001a0050:
  dVar28 = (double)FastWrapRot
                             (*(float *)((int)pvVar6 + 0x1c8),
                              DAT_00740660 * 0.017453292 * g_FrameTime);
  uVar11 = DAT_00740668;
  uVar13 = DAT_00740664;
  dVar30 = (double)(float)(3.141592502593994 - dVar28);
  if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
    dVar30 = dVar28;
  }
  dVar29 = (double)(float)(-3.141592502593994 - dVar28);
  if ((double)(float)(-3.141592502593994 - dVar28) - dVar30 < 0.0) {
    dVar29 = dVar30;
  }
  dVar30 = (double)(float)(dVar29 * dVar29);
  dVar32 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
  dVar31 = (double)(float)(dVar30 * dVar32);
  *(float *)((int)pvVar6 + 0x1c8) = (float)dVar28;
  uVar16 = FastLerpColor
                     ((double)(((float)(dVar30 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar32 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar30 * 
                                                  dVar29) * -0.16666656732559204 + dVar29))) + 1.0)
                              * 0.5),uVar13,uVar11);
  param_1->glowRgba = uVar16;
  if (*(int *)((int)pvVar6 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar27 = 6.0;
      }
    }
    else {
      dVar27 = (double)DAT_00740650;
    }
  }
  else {
    dVar27 = (double)(DAT_00740650 + 6.0);
  }
  *(float *)((int)pvVar6 + 0x1a0) = (float)dVar27;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x1b0)];
  iVar14 = MB_getTargetInArea
                     (dVar27,param_1,uVar25 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar14 != 2) &&
     ((fVar4 = *(float *)((int)pvVar6 + 0x174) - *(float *)((int)pvVar6 + 0x124),
      fVar2 = *(float *)((int)pvVar6 + 0x170) - *(float *)((int)pvVar6 + 0x120),
      *(float *)((int)pvVar6 + 0x1a0) < SQRT(fVar2 * fVar2 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x01a02d8 (0x1b4c bytes)
/* Moby 1048 */

void UpdateMoby_1048(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  Cuboid *pCVar12;
  longlong lVar13;
  undefined1 uVar18;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  float local_180;
  float local_17c;
  undefined4 local_178;
  GPiece<16> auStack_170;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  undefined4 local_148;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  undefined4 local_118;
  GPiece<16> auStack_110;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  f32 local_d0;
  f32 local_cc;
  f32 local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  MobyInstance *local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_90;
  float local_8c;
  undefined4 local_88;
  MobyInstance *local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  longlong local_60;
  
  lVar13 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  uVar19 = ZEXT48(pvVar7);
  M1048_0019f9b0();
  DoManipulator(0x4002666660000000,moby,1,(Manipulator *)((int)pvVar7 + 0x1e0));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x15';
  }
  iVar15 = *(int *)((int)pvVar7 + 0x160);
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00740630;
  if (bVar1 < 9) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar7 + 0x20) = 0x40800000;
        *(undefined2 *)((int)pvVar7 + 0x24) = 4;
        *(undefined1 *)((int)pvVar7 + 0x28) = 3;
        *(undefined1 *)((int)pvVar7 + 0x29) = 1;
        uVar18 = FastDoubleToInt(0x4024000000000000);
        *(undefined1 *)((int)pvVar7 + 0x58) = uVar18;
        uVar18 = FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar7 + 0x5a) = uVar18;
        MVar6 = moby->modeBits;
        *(f32 *)((int)pvVar7 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar7 + 0x174) = (moby->pos).y;
        fVar2 = (moby->pos).z;
        moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
        *(f32 *)((int)pvVar7 + 0x178) = fVar2;
        *(f32 *)((int)pvVar7 + 0x17c) = (moby->pos).w;
        dVar20 = (double)MB_randRangeFloat(0.0,1.0);
        *(float *)((int)pvVar7 + 0x1c4) = (float)dVar20;
        MB_InitDefaultParams((float *)((int)pvVar7 + 0xd0));
        *(undefined4 *)((int)pvVar7 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar7 + 0xd8) = 0x40000000;
        uVar14 = FastDoubleToInt((double)(DAT_00740630 * 1024.0));
        *(float *)((int)pvVar7 + 0xd4) = DAT_00740630;
        fVar3 = g_FrameTime;
        *(undefined4 *)((int)pvVar7 + 0xd0) = uVar14;
        *(float *)((int)pvVar7 + 0xf4) = *(float *)((int)pvVar7 + 0x1a4) * fVar3;
        uVar14 = FastDoubleToInt(0x4088000000000000);
        *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f400000;
        fVar4 = DAT_00740634;
        fVar3 = g_FrameTimeSq;
        *(undefined4 *)((int)pvVar7 + 0x90) = uVar14;
        *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        *(float *)((int)pvVar7 + 0x80) = fVar4 * fVar3;
        dVar20 = (double)MB_randRot();
        *(float *)((int)pvVar7 + 0x1c8) = (float)dVar20;
        if (*(int *)((int)pvVar7 + 0x1cc) == 0) {
          if (*(int *)((int)pvVar7 + 0x1c0) < 0) {
            if (*(int *)((int)pvVar7 + 0x1b4) == 0) {
              moby->state = '\x01';
              if (moby->animationId != '\0') {
                MB_SetAnimation(lVar13,0,0,0);
              }
              *(float *)((int)pvVar7 + 0x1a0) = DAT_00740650;
            }
            else {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              moby->state = '\x02';
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = loadVectorLeftIndexed(0x20,0x1a0264);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar25 = vectorMultiplyAddFloatingPoint
                                  (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60,auVar26);
              auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar14 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                                  0x1a8,uVar19);
              *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
              if (moby->animationId != '\0') {
                MB_SetAnimation(lVar13,0,0,0);
              }
              if (moby->group != -1) {
                M1048_0019f8f0(lVar13);
              }
            }
          }
          else {
            moby->state = '\x03';
          }
        }
        else {
          moby->state = '\x0f';
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar13,2,0,0);
          }
        }
      }
      else if (bVar1 < 2) {
        if (*(int *)((int)pvVar7 + 0x164) != 2) {
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          moby->state = '\x02';
          auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar25 = loadVectorLeftIndexed(0x20,0x1a0264);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorMultiplyAddFloatingPoint
                              (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                               ,auVar26);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1a8,
                              uVar19);
          *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
          if (moby->group != -1) {
            M1048_0019f8f0(lVar13);
          }
        }
      }
      else if (bVar1 < 3) {
        if (moby->animationId == '\0') {
          if (*(int *)((int)pvVar7 + 0x1a8) == 0) {
            dVar20 = (double)MB_randRangeFloat(0.0,20.0);
            uVar14 = FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
            *(undefined4 *)((int)pvVar7 + 0x1a8) = uVar14;
          }
          else {
            iVar15 = FastDecTimerS32(uVar19 + 0x1a8);
            if ((iVar15 != 0) && (moby->animationId != '\x03')) {
              local_60 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (DAT_00740650 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
            bVar1 = *(byte *)((int)moby->pClass[1].packets + 0x10);
            moby->state = '\x06';
            if (moby->animationId != '\x02') {
              local_60 = (longlong)(int)(uint)bVar1;
              dVar20 = (double)MB_randRangeFloat(0.0,(float)local_60 - 1.0);
              local_60 = (longlong)(int)(animationSpeed * 30.5);
              MB_SetAnimation(lVar13,2,(int)dVar20,(int)(animationSpeed * 30.5));
            }
          }
          else {
            moby->state = '\b';
            dVar20 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar7 + 0x198) * 0.017453292,
                                        *(float *)((int)pvVar7 + 0x198) * -0.017453292);
            *(float *)((int)pvVar7 + 0x194) = (float)dVar20;
            if (moby->animationId != '\x01') {
              local_60 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
      else if (((-1 < *(int *)((int)pvVar7 + 0x1c0)) &&
               (iVar15 = MB_IsPntInCuboid
                                   (&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x1c0)),
               iVar15 != 0)) && (moby->state = '\x04', moby->animationId != '\x03')) {
        local_60 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        if ((moby->field43_0x70 & 2U) != 0) {
          bVar1 = moby->animationId;
          if (bVar1 < 4) {
            if ((2 < bVar1) && (bVar1 != 6)) {
              local_60 = (longlong)(int)(animationSpeed * 5.5);
              MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 5.5));
            }
          }
          else if (bVar1 == 6) {
            moby->state = '\x05';
            pCVar12 = Cuboids;
            iVar15 = *(int *)((int)pvVar7 + 0x1bc);
            fVar3 = Cuboids[iVar15].pos.x;
            *(float *)((int)pvVar7 + 0x170) = fVar3;
            fVar4 = pCVar12[iVar15].pos.y;
            *(float *)((int)pvVar7 + 0x174) = fVar4;
            *(float *)((int)pvVar7 + 0x178) = pCVar12[iVar15].pos.z;
            *(float *)((int)pvVar7 + 0x17c) = pCVar12[iVar15].pos.w;
            fVar4 = (moby->pos).y - fVar4;
            fVar3 = (moby->pos).x - fVar3;
            fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 60.5);
            *(float *)((int)pvVar7 + 0x88) = fVar3;
            dVar20 = (double)MB_computeLobVelocity
                                       ((double)fVar3,-(double)*(float *)((int)pvVar7 + 0x80),
                                        lVar13 + 0x10,uVar19 + 0x170);
            *(float *)((int)pvVar7 + 0x8c) = (float)dVar20;
            *(undefined4 *)((int)pvVar7 + 0x94) = 5;
            *(undefined1 *)((int)pvVar7 + 0xad) = 3;
            FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x170) - (moby->pos).x),
                         (double)(*(float *)((int)pvVar7 + 0x174) - (moby->pos).y));
            MB_StartKick(lVar13,uVar19 + 0x70);
            if (moby->animationId != '\a') {
              MB_SetAnimation(lVar13,7,0,5);
            }
          }
        }
      }
      else {
        uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
        if (((uVar16 & 1) != 0) && (moby->state = '\x06', moby->animationId != '\x02')) {
          MB_SetAnimation(lVar13,2,0,5);
        }
      }
    }
    else if (bVar1 < 7) {
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar7 + 0x124) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13,&DAT_001a0264,uVar19 + 400);
      if (*(int *)((int)pvVar7 + 0x164) == 2) {
        if ((*(int *)((int)pvVar7 + 0x1ac) != 0) &&
           (moby->state = '\t', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        moby->state = '\a';
        local_60 = (longlong)*(int *)((int)pvVar7 + 0x1b8);
        MB_randRangeFloat(0.0,(float)local_60);
        uVar14 = FastDoubleToInt();
        *(undefined4 *)((int)pvVar7 + 0x1a8) = uVar14;
      }
    }
    else if (bVar1 < 8) {
      iVar15 = FastDecTimerS32(uVar19 + 0x1a8);
      if (iVar15 != 0) {
        moby->state = '\b';
        dVar20 = (double)MB_randRangeFloat
                                   (*(float *)((int)pvVar7 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar7 + 0x198) * -0.017453292);
        *(float *)((int)pvVar7 + 0x194) = (float)dVar20;
        if (moby->animationId != '\x01') {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else {
      fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_00740644) {
        Delt(0.0,g_FrameTimeSq * 20.0,(float *)((int)pvVar7 + 0xf4));
      }
      else {
        Delt(*(float *)((int)pvVar7 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                       (float *)((int)pvVar7 + 0xf4));
      }
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 400);
      fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      dVar20 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      if ((double)DAT_00740644 - dVar20 < 0.0) {
        dVar20 = (double)DAT_00740644;
      }
      dVar22 = (double)M1048_0019f1e8(lVar13);
      dVar23 = (double)cosf((float)dVar22);
      dVar22 = (double)FUN_005e8128(dVar22);
      dVar24 = (double)(moby->rotation).z;
      dVar20 = (double)FUN_005e8338((double)((float)(dVar23 * dVar20 +
                                                    (double)*(float *)(iVar15 + 0x10)) -
                                            (moby->pos).x),
                                    (double)((float)(dVar22 * dVar20 +
                                                    (double)*(float *)(iVar15 + 0x14)) -
                                            (moby->pos).y));
      (moby->rotation).z = (float)dVar20;
      dVar20 = (double)cosf((float)dVar20);
      dVar22 = 2.0;
      local_150 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_14c = (float)(dVar20 * dVar22);
      local_148 = 0;
      dVar20 = 1.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_150,auStack_140
                );
      (moby->rotation).z = (float)dVar24;
      MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar10 = fVar3 - *(float *)((int)pvVar7 + 0x174);
      fVar11 = fVar4 - *(float *)((int)pvVar7 + 0x170);
      fVar5 = (moby->pos).z;
      fVar8 = fVar5 - *(float *)((int)pvVar7 + 0x178);
      if ((DAT_00740648 < SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10)) ||
         (*(int *)((int)pvVar7 + 0x164) == 2)) {
        moby->state = '\f';
      }
      else {
        fVar3 = fVar3 - *(float *)(iVar15 + 0x14);
        fVar4 = fVar4 - *(float *)(iVar15 + 0x10);
        if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_00740644) &&
             (ABS((double)(*(float *)(iVar15 + 0x18) - fVar5)) < dVar20)) &&
            (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
           (moby->state = '\v', moby->animationId != '\x04')) {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 < 0xe) {
    if (bVar1 < 0xb) {
      if (bVar1 < 10) {
        Delt(*(float *)((int)pvVar7 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                       (float *)((int)pvVar7 + 0xf4));
        uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13);
        fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
        dVar20 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if ((double)DAT_00740644 - dVar20 < 0.0) {
          dVar20 = (double)DAT_00740644;
        }
        dVar22 = (double)M1048_0019f1e8(lVar13);
        dVar23 = (double)cosf((float)dVar22);
        dVar22 = (double)FUN_005e8128(dVar22);
        dVar24 = (double)(moby->rotation).z;
        dVar20 = (double)FUN_005e8338((double)((float)(dVar23 * dVar20 +
                                                      (double)*(float *)(iVar15 + 0x10)) -
                                              (moby->pos).x),
                                      (double)((float)(dVar22 * dVar20 +
                                                      (double)*(float *)(iVar15 + 0x14)) -
                                              (moby->pos).y));
        (moby->rotation).z = (float)dVar20;
        dVar20 = (double)cosf((float)dVar20);
        dVar22 = 2.0;
        local_180 = (float)(dVar20 * 2.0);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_17c = (float)(dVar20 * dVar22);
        local_178 = 0;
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_180,
                   auStack_170);
        (moby->rotation).z = (float)dVar24;
        MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
        iVar17 = MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar7 + 0x1b0),lVar13 + 0x10,iVar15 + 0x10,
                            &local_160);
        bVar9 = false;
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        if ((iVar17 != 0) &&
           (local_15c = fVar4 - local_15c, local_160 = fVar3 - local_160,
           local_158 = (moby->pos).z - local_158,
           SQRT(local_158 * local_158 + local_160 * local_160 + local_15c * local_15c) <
           *(float *)((int)pvVar7 + 0x1c4))) {
          bVar9 = true;
        }
        if (*(int *)((int)pvVar7 + 0x1ac) == 0) {
          moby->state = '\f';
        }
        else if (bVar9) {
          moby->state = '\n';
          if (moby->animationId != '\x05') {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          fVar4 = fVar4 - *(float *)(iVar15 + 0x14);
          fVar3 = fVar3 - *(float *)(iVar15 + 0x10);
          if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < DAT_00740644) &&
             (moby->state = '\v', moby->animationId != '\x04')) {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\t', moby->animationId != '\x01')
              ) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 < 0xc) {
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 400);
      dVar20 = (double)BlendAnimFrame(moby);
      if ((dVar20 <= 1.0) || (dVar20 = (double)BlendAnimFrame(moby), 8.0 <= dVar20)) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        GetBonePosition(lVar13,0,auStack_130);
        local_ac = 1;
        local_a0 = 1;
        local_a4 = 0x3f800000;
        local_b0 = moby;
        dVar20 = (double)cosf((moby->rotation).z);
        local_c0 = (float)dVar20;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_bc = (float)dVar20;
        local_b8 = 0;
        CollMobySphere(0x3fe0000000000000,auStack_130,0,0,lVar13,&local_c0);
      }
    }
    else if (bVar1 < 0xd) {
      Delt(*(float *)((int)pvVar7 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 6.0,
                     (float *)((int)pvVar7 + 0xf4));
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x170) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar7 + 0x174) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13);
      dVar20 = (double)cosf((moby->rotation).z);
      dVar22 = 2.0;
      local_100 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_fc = (float)(dVar20 * dVar22);
      local_f8 = 0;
      dVar20 = 1.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_100,auStack_f0)
      ;
      MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      fVar3 = (moby->pos).y - *(float *)((int)pvVar7 + 0x174);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar7 + 0x170);
      fVar5 = (moby->pos).z - *(float *)((int)pvVar7 + 0x178);
      if (dVar20 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
        if ((*(int *)((int)pvVar7 + 0x164) != 2) &&
           (moby->state = '\b', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else {
      Delt(*(float *)((int)pvVar7 + 0x1a4) * 3.0 * g_FrameTime,
                     g_FrameTimeSq * 20.0,(float *)((int)pvVar7 + 0xf4));
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13);
      dVar23 = (double)(moby->rotation).z;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      dVar20 = (double)FastWrapRot((float)dVar20,3.14159);
      (moby->rotation).z = (float)dVar20;
      dVar20 = (double)cosf((float)dVar20);
      dVar22 = 2.0;
      local_120 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_11c = (float)(dVar20 * dVar22);
      local_118 = 0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_120,auStack_110
                );
      (moby->rotation).z = (float)dVar23;
      MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      iVar17 = FastDecTimerS32(uVar19 + 0x1a8);
      if ((iVar17 != 0) ||
         (fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14),
         fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10),
         fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18),
         DAT_00740654 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
        moby->state = '\v';
        *(float *)((int)pvVar7 + 0xf4) = g_FrameTime * 5.0;
        if (DAT_0074065c == 0) {
          if (moby->animationId != '\x04') {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,4,10,(int)(animationSpeed * 10.5));
          }
        }
        else if (moby->animationId != '\x04') {
          local_60 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar13,4,DAT_00e61fc0,(int)(animationSpeed * 5.5));
        }
      }
    }
  }
  else if (bVar1 < 0x10) {
    if (bVar1 < 0xf) {
      uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
      if ((uVar16 & 0x41) != 0) {
        iVar15 = PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,
                            (Vec4 *)Splines[*(int *)((int)pvVar7 + 0x1b0)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x1b0)]->cnt);
        if (iVar15 == 0) {
          DeleteMoby(moby);
          return;
        }
        moby->state = '\r';
        moby->unk58 = 1.0;
        if (moby->animationId != '\x01') {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = loadVectorLeftIndexed(0x34,0x1a0264);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1a8,
                            uVar19);
        *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
      }
      MB_PushOutOfSplineWalls
                (0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0),
                 *(undefined4 *)((int)pvVar7 + 0x1b0),lVar13 + 0x10,lVar13 + 0x10);
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar20,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 400));
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 4.0) &&
         (moby->state = '\x10', moby->animationId != '\x04')) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar1 < 0x11) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAng
              ((float)dVar20,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 400));
    dVar20 = (double)BlendAnimFrame(moby);
    if ((dVar20 <= 1.0) || (dVar20 = (double)BlendAnimFrame(moby), 8.0 <= dVar20)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x0f', moby->animationId != '\x02')) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      GetBonePosition(lVar13,0,auStack_e0);
      local_7c = 1;
      local_70 = 1;
      local_74 = 0x3f800000;
      local_80 = moby;
      dVar20 = (double)cosf((moby->rotation).z);
      local_90 = (float)dVar20;
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_8c = (float)dVar20;
      local_88 = 0;
      CollMobySphere(0x3fe0000000000000,auStack_e0,0,0,lVar13,&local_90);
      CollLine(auStack_e0,lVar13 + 0x10,0,lVar13,&local_90);
    }
  }
  else if (bVar1 < 0x12) {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x40) == 0) {
      fVar2 = (moby->pos).z;
      uVar16 = (int)fVar2 >> 0x1f;
      if ((int)((uVar16 >> 1 ^ (uint)fVar2) - uVar16) < 0x40000000) {
        DeleteMoby(moby);
      }
    }
    else {
      local_d0 = (moby->pos).x;
      local_cc = (moby->pos).y;
      local_c8 = (moby->pos).z;
      local_c4 = (moby->pos).w;
      MB_SpawnExplosionSparks2
                (0x3ff8000000000000,0x4024000000000000,lVar13,&local_d0,&DAT_001a0264,
                 0xffffffffffffffff);
      MB_SpawnDebris(lVar13,0x6a0,2,0x69f,1,5,2);
      DeleteMoby(moby);
    }
  }
  return;
}



// game/update/moby931.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4bbde4-0x4be8c0
#include <math.h>
#include <stdlib.h>
#include "game/update/moby931.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby819.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x04bbde4 (0x14 bytes)
void M931_004bbde4(void)

{
  DAT_008f497c = 0x10000;
  return;
}


// 0x04bbe20 (0x648 bytes)
// inlined: FastAtan2 @0x4bc1a4, FastAtan2 @0x4bc348
double M931_004bbe20(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x24] = unaff_r29;
  puVar9[0x25] = unaff_r30;
  MB_getTarget(param_1,param_2,uVar13 - 0xe0);
  fVar2 = *(float *)((int)puVar9 + 0x74);
  dVar23 = 0.0;
  fVar6 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(puVar9 + 0xe);
  bVar12 = true;
  param_2[3] = 0.0;
  iVar8 = MobyUpdateChainStart;
  fVar3 = fVar3 - fVar4;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  fVar5 = *(float *)(puVar9 + 0xf);
  fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
  dVar24 = dVar23;
  dVar25 = dVar23;
  dVar26 = dVar23;
  dVar27 = dVar23;
  if (iVar8 != 0) {
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar6 = *(float *)(iVar8 + 0x14);
        fVar7 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar6 - *(float *)(param_1 + 0x14);
        fVar10 = fVar7 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          dVar27 = (double)(float)(dVar27 + 6.0);
          fVar7 = (float)((double)(*(float *)(param_1 + 0x10) - fVar7) * 6.0 + dVar24);
          dVar24 = (double)fVar7;
          fVar6 = (float)((double)(*(float *)(param_1 + 0x14) - fVar6) * 6.0 + dVar25);
          dVar25 = (double)fVar6;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) * 6.0 +
                         dVar26);
          dVar26 = (double)fVar1;
          *param_2 = fVar7;
          param_2[1] = fVar6;
          param_2[2] = fVar1;
          fVar7 = *(float *)(iVar8 + 0x10);
          fVar6 = *(float *)(iVar8 + 0x14);
        }
        if (SQRT((fVar7 - fVar4) * (fVar7 - fVar4) + (fVar6 - fVar2) * (fVar6 - fVar2)) < fVar3) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar6 = *(float *)(param_1 + 0x14) - fVar2;
      fVar7 = *(float *)(param_1 + 0x10) - fVar4;
      fVar5 = *(float *)(param_1 + 0x18) - fVar5;
      dVar22 = dVar23;
      if (10.5 - fVar3 < 0.0) {
        dVar22 = -10.0;
      }
      if (fVar3 - 9.5 < 0.0) {
        dVar22 = 10.0;
      }
      fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      param_2[3] = 0.0;
      fVar3 = 1.0 / (float)(dVar27 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar27 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      dVar22 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      dVar21 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      fVar5 = (float)(dVar26 + dVar27) * fVar3;
      fVar6 = (float)(dVar25 + dVar22) * fVar3;
      fVar3 = (float)(dVar24 + dVar21) * fVar3;
      param_2[2] = fVar5;
      param_2[1] = fVar6;
      *param_2 = fVar3;
      fVar3 = fVar3 + *(float *)(param_1 + 0x10);
      *param_2 = fVar3;
      fVar6 = fVar6 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar6;
      fVar5 = fVar5 + *(float *)(param_1 + 0x18);
      goto LAB_004bc09c;
    }
  }
  *param_2 = fVar4;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar6 = fVar2;
  fVar3 = fVar4;
LAB_004bc09c:
  param_2[2] = fVar5;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14) - fVar6;
  if (1.0 <= SQRT((fVar5 - fVar3) * (fVar5 - fVar3) + fVar7 * fVar7)) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3 - fVar5);
    fVar4 = ABS(fVar6);
    *(float *)(puVar9 + 0x18) = fVar3 - fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar6;
    *(float *)(puVar9 + 0x19) = fVar7 - fVar4;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x78;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  else {
    *param_2 = fVar5;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar4 = fVar4 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar5 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar4;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar5 - fVar3;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar19 = uVar13 - 0x48;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x58;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  return dVar23;
}


// 0x04bc480 (0x824 bytes)
// inlined: FastAtan2 @0x4bc724, FastAtan2 @0x4bc9b4
void M931_004bc480(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  pMVar5 = param_1->pClass;
  puVar7[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  param_1->scale = DAT_008f49cc * pMVar5->gScale;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1b] = unaff_r28;
  *(undefined4 *)((int)pvVar6 + 0x1c8) = 0;
  iVar12 = MB_damage(param_1,0x330000,0);
  iVar13 = MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\n')) {
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar7 + 0x74);
    iVar13 = iVar13 + ((uint)(ZERO_MASK((0x100 - (uint)*(ushort *)(iVar12 + 0x2a)))) &
                      9U - iVar13);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = FastDoubleToInt(0x40a4000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x40200000;
    fVar1 = DAT_008f49a0;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f49a0 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f49b0 * g_FrameTime;
        fVar1 = DAT_008f49ac;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)(puVar7 + 0x10) = fVar4;
        *(float *)((int)puVar7 + 0x84) = fVar1;
        *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x58;
          lVar15 = uVar9 - 0x68;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xa4) = fVar2;
          *(float *)((int)puVar7 + 0x9c) = fVar2;
          *(float *)(puVar7 + 0x14) = fVar2;
          *(float *)(puVar7 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
          *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
          *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x68;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x84,uVar19 + 0x88,uVar19 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
        param_1->state = '\n';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        fVar1 = DAT_008f49a8 * g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0x1c8) = 1;
        *(float *)((int)pvVar6 + 0x88) = fVar1;
        *(float *)((int)pvVar6 + 0x8c) = DAT_008f49a4 * fVar4;
        MB_SetupJumpArc
                  (0x4010000000000000,0x3ff0000000000000,&DAT_004bc468,0x4c0000,uVar19 + 0x70);
        iVar13 = *(int *)(iVar12 + 0x20);
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x40c00000;
        fVar4 = (param_1->pos).x - *(float *)(iVar13 + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(iVar13 + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)((int)puVar7 + 0x8c) = fVar4;
        *(float *)(puVar7 + 0x12) = fVar1;
        *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x38;
          lVar15 = uVar9 - 0x48;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xc4) = fVar2;
          *(float *)((int)puVar7 + 0xbc) = fVar2;
          *(float *)(puVar7 + 0x18) = fVar2;
          *(float *)(puVar7 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x48;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar7 + 0xf) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x88,uVar19 + 0x88,uVar19 + 0x8c);
        MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x1c8) = 1;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  fVar1 = DAT_008f49d0;
  iVar12 = 0x8f0000;
  fVar4 = param_1->pClass->gScale;
  *(undefined4 *)((int)pvVar6 + 0x164) = 0;
  param_1->scale = fVar4 * fVar1;
  if ((param_1->state == '\x01') || (iVar12 = *(int *)((int)pvVar6 + 0x1d0), iVar12 == -1)) {
    if (param_1->state == '\x01') {
      uVar14 = *(undefined4 *)((int)pvVar6 + 0x174);
    }
    else {
      uVar14 = *(undefined4 *)((int)pvVar6 + 0x178);
    }
    *(undefined4 *)((int)pvVar6 + 0x1b8) = uVar14;
    MB_getTarget(param_1,iVar12,uVar19 + 0x120);
  }
  else {
    *(undefined4 *)((int)pvVar6 + 0x1b8) = *(undefined4 *)((int)pvVar6 + 0x178);
    MB_getTargetInArea
              (param_1,uVar19 + 0x120,uVar19 + 0x120,0,0,Splines[iVar12]->points,
               Splines[iVar12]->cnt);
  }
  fVar4 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124);
  fVar1 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120);
  fVar2 = (param_1->pos).z - *(float *)((int)pvVar6 + 0x128);
  if (*(float *)((int)pvVar6 + 0x1b8) < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4)) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04bcd20 (0x1ba0 bytes)
/* WARNING: Type propagation algorithm not settling */
/* Moby 931 */

void UpdateMoby_931(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  uint uVar12;
  MobyModeBit MVar16;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar11;
  Spline *pSVar17;
  Vec4 *pVVar18;
  ulonglong uVar19;
  byte in_cr6;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  float fVar27;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  Vec4 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  GPiece<16> auStack_e0;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  GPiece<48> auStack_90;
  float local_60;
  int local_5c;
  longlong local_58;
  
  lVar10 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  M931_004bc480();
  bVar1 = moby->state;
  iVar13 = *(int *)((int)pvVar5 + 0x160);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x41400000;
        *(undefined2 *)((int)pvVar5 + 0x24) = 0xc;
        *(undefined1 *)((int)pvVar5 + 0x28) = 3;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x42b40000;
        *(ushort *)((int)pvVar5 + 0x3e) = *(ushort *)((int)pvVar5 + 0x3e) | 2;
        uVar12 = rand();
        MVar16 = moby->modeBits;
        if ((uVar12 & 1) != 0) {
          MVar16 = MVar16 | MIRROR;
          moby->modeBits = MVar16;
        }
        if (*(int *)((int)pvVar5 + 0x1cc) != -1) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = MVar16 | (UNK_40|DISABLED);
        }
        if ((*(int *)((int)pvVar5 + 0x180) == -1) || (*(int *)((int)pvVar5 + 0x184) == -1)) {
          *(undefined4 *)((int)pvVar5 + 0x1d4) = 1;
        }
        if (*(int *)((int)pvVar5 + 0x170) != -1) {
          pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
          (moby->pos).x = pSVar6->points[0].x;
          (moby->pos).y = pSVar6->points[0].y;
          (moby->pos).z = pSVar6->points[0].z;
          (moby->pos).w = pSVar6->points[0].w;
        }
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar10,0,0,5);
        }
      }
      else {
        if (*(int *)((int)pvVar5 + 0x1cc) != -1) {
          iVar13 = MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x1cc),10);
          if (iVar13 != 0) {
            return;
          }
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        if ((*(int *)((int)pvVar5 + 0x164) != 2) && (*(int *)((int)pvVar5 + 0x170) != -1)) {
          moby->state = '\x02';
          if (moby->animationId != '\x04') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          }
          iVar14 = 0;
          pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
          iVar13 = pSVar6->cnt;
          pSVar17 = pSVar6;
          if (0 < iVar13 + -2) {
            do {
              fVar27 = pSVar17->points[0].y - pSVar17->points[1].y;
              fVar3 = pSVar17->points[0].x - pSVar17->points[1].x;
              fVar4 = pSVar17->points[0].z - pSVar17->points[1].z;
              iVar14 = iVar14 + 1;
              pSVar17->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar27 * fVar27);
              iVar13 = pSVar6->cnt;
              pSVar17 = (Spline *)pSVar17->points;
            } while (iVar14 < iVar13 + -2);
          }
          fVar27 = pSVar6->points[0].x;
          (moby->pos).x = fVar27;
          pVVar18 = pSVar6->points + iVar13 + -1;
          (moby->pos).y = pSVar6->points[0].y;
          (moby->pos).z = pSVar6->points[0].z;
          (moby->pos).w = pSVar6->points[0].w;
          *(float *)((int)pvVar5 + 0x40) = pVVar18->x - fVar27;
          *(float *)((int)pvVar5 + 0x44) = pVVar18->y - (moby->pos).y;
          *(float *)((int)pvVar5 + 0x48) = pVVar18->z - (moby->pos).z;
          *(float *)((int)pvVar5 + 0x4c) = pVVar18->w;
          FUN_005e84c0((double)(DAT_008f49b4 * g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
          dVar20 = (double)MB_computeLobVelocity
                                     ((double)(DAT_008f49b4 * g_FrameTime),
                                      -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                      pSVar6->points + pSVar6->cnt + -1);
          *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
        }
      }
    }
    else if (bVar1 < 3) {
      dVar24 = (double)(g_FrameTime * 12.0);
      pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar6,lVar10 + 0x10,local_150,&local_5c,
                 &local_60);
      dVar20 = (double)FastIntToDouble(local_5c);
      dVar22 = (double)pSVar6->points[0].w;
      dVar23 = (double)((float)(dVar20 * dVar22 + (double)local_60) + 2.0);
      local_5c = FastDoubleToInt((double)(float)(dVar23 / dVar22));
      dVar20 = (double)FastIntToDouble();
      dVar22 = (double)pSVar6->points[0].w;
      local_60 = (float)(-(double)(float)(dVar20 * dVar22 - dVar23) / dVar22);
      if (local_5c < pSVar6->cnt + -1) {
        fVar7 = (pSVar6->points[local_5c + 1].x - pSVar6->points[local_5c].x) * local_60;
        fVar8 = (pSVar6->points[local_5c + 1].y - pSVar6->points[local_5c].y) * local_60;
        fVar9 = (pSVar6->points[local_5c + 1].z - pSVar6->points[local_5c].z) * local_60;
        fVar27 = pSVar6->points[local_5c].x;
        fVar3 = pSVar6->points[local_5c].y;
        fVar4 = pSVar6->points[local_5c].z;
        if (local_5c + 1 < pSVar6->cnt + -8) {
          dVar20 = (double)(moby->rotation).z;
          uVar21 = FUN_005e8338((double)(pSVar6->points[local_5c + 1].x - (moby->pos).x),
                                (double)(pSVar6->points[local_5c + 1].y - (moby->pos).y));
          dVar20 = (double)MB_DeltAngSpeed
                                     (dVar20,uVar21,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
          (moby->rotation).z = (float)dVar20;
        }
        fVar3 = (fVar8 + fVar3) - (moby->pos).y;
        fVar7 = (fVar7 + fVar27) - (moby->pos).x;
        fVar27 = (fVar9 + fVar4) - (moby->pos).z;
        dVar20 = (double)SQRT(fVar27 * fVar27 + fVar7 * fVar7 + fVar3 * fVar3);
        if (dVar24 - dVar20 < 0.0) {
          dVar20 = dVar24;
        }
        FUN_005e7f98(dVar20,local_160,local_160);
        (moby->pos).x = (moby->pos).x + fVar7;
        (moby->pos).y = (moby->pos).y + fVar3;
        (moby->pos).z = (moby->pos).z + fVar27;
      }
      else {
        dVar20 = (double)GetGroundZ(0x3fe0000000000000,lVar10 + 0x10,0);
        uVar2 = moby->animationId;
        if ((double)(moby->pos).z < dVar20) {
          (moby->pos).z = (float)dVar20;
        }
        moby->state = '\x04';
        if (uVar2 != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (bVar1 < 4) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
      fVar27 = -(DAT_008f49b8 * DAT_0071f418 - *(float *)((int)pvVar5 + 0x48));
      *(float *)((int)pvVar5 + 0x48) = fVar27;
      if ((fVar27 < 0.0) &&
         (dVar20 = (double)GetGroundZ(0x3fe0000000000000,local_140,0),
         (double)(moby->pos).z < dVar20)) {
        uVar2 = moby->animationId;
        (moby->pos).z = (float)dVar20;
        moby->state = '\x04';
        if (uVar2 != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (*(int *)((int)pvVar5 + 0x164) != 2) {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar27 = OrganicDeltAng
                         ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      iVar14 = FastDecTimerS32((double)fVar27,uVar19 + 0x1c0);
      uVar2 = moby->animationId;
      if (iVar14 != 0) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
          fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
          fVar27 = SQRT(fVar3 * fVar3 + fVar27 * fVar27);
          if (fVar27 < DAT_008f49c4) {
            moby->state = '\a';
            if (uVar2 == '\x01') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar10,1,0,(int)(animationSpeed * 10.5));
            return;
          }
          if (fVar27 < DAT_008f49c8) {
            moby->state = '\b';
            if (uVar2 == '\x13') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
            return;
          }
        }
        moby->state = '\x05';
        if (uVar2 != '\x06') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,6,0,(int)(animationSpeed * 20.5));
        }
        fVar27 = DAT_008f49d4;
        *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
        moby->unk58 = fVar27;
      }
    }
  }
  else if (bVar1 == 10) {
    uVar12 = 0;
    if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
      uVar12 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
    }
    else {
      moby->unk58 = 1.0;
    }
    if (((uVar12 & 0x40) != 0) ||
       ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 9) {
    uVar12 = 0;
    if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
      uVar12 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
    }
    else {
      moby->unk58 = 1.0;
    }
    if (((uVar12 & 0x40) != 0) ||
       ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
      if (*(int *)((int)pvVar5 + 0x1d4) == 0) {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        uVar12 = *(int *)((int)pvVar5 + 0x1b0) + 1;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        iVar14 = *(int *)((int)pvVar5 + (uVar12 * 4 & 4) + 0x180);
        *(uint *)((int)pvVar5 + 0x1b0) = uVar12 & 1;
        pSVar6 = Splines[iVar14];
        local_a0 = pSVar6->points[iVar13].x;
        local_9c = pSVar6->points[iVar13].y;
        local_98 = pSVar6->points[iVar13].z;
        local_94 = pSVar6->points[iVar13].w;
        dVar20 = (double)GetGroundZ(0x3fe0000000000000,&local_a0,0);
        local_98 = (float)dVar20;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
        }
        *(float *)((int)pvVar5 + 0x40) = local_a0 - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = local_9c - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = local_98 - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = local_94;
        FUN_005e84c0((double)(DAT_008f49b4 * g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        dVar20 = (double)MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,&local_a0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
  }
  else if (bVar1 == 8) {
    dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
    OrganicDeltAng
              ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar5 + 0x1bc));
    if ((moby->field43_0x70 & 2U) == 0) {
      dVar20 = (double)BlendAnimFrame(moby);
      GetBonePosition(lVar10,0,&local_b0);
      if ((20.0 <= dVar20) && (dVar20 <= 30.0)) {
        local_c0 = (moby->pos).x;
        local_bc = (moby->pos).y;
        local_b4 = (moby->pos).w;
        local_b8 = (moby->pos).z + 0.5;
        dVar20 = (double)cosf((moby->rotation).z);
        local_d0 = (float)dVar20;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_cc = (float)dVar20;
        local_c8 = 0;
        SetCollDamIn(0x4010000000000000,auStack_90,lVar10,0x10001);
        CollLine(&local_c0,&local_b0,0,lVar10,auStack_90);
        MB_CollLineMulti(&local_c0,&local_b0,&local_c0,uVar19 + 0x1a0,lVar10,auStack_90,5)
        ;
        STUB_00065468(&local_c0,&local_b0);
        *(undefined4 *)((int)pvVar5 + 0x1a0) = local_b0;
        *(undefined4 *)((int)pvVar5 + 0x1a4) = local_ac;
        *(undefined4 *)((int)pvVar5 + 0x1a8) = local_a8;
        *(undefined4 *)((int)pvVar5 + 0x1ac) = local_a4;
      }
    }
    else {
      fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      fVar27 = SQRT(fVar3 * fVar3 + fVar27 * fVar27);
      if (((DAT_008f49c8 <= fVar27) || (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
         (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1 <=
          *(int *)((int)pvVar5 + 0x1b4))) {
        if ((DAT_008f49c8 < fVar27) && (moby->state = '\x04', moby->animationId != '\0')) {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4) + 1;
        *(int *)((int)pvVar5 + 0x1b4) = iVar13;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        }
        pSVar6 = Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)];
        *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
        FUN_005e84c0((double)(DAT_008f49b4 * g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
        dVar20 = (double)MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                    Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13,
                                    *(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
    }
  }
  else if (bVar1 == 7) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      uVar21 = M931_004bbe20
                         ((double)*(float *)((int)pvVar5 + 0x1b8),lVar10,&local_100);
      fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      if ((SQRT(fVar3 * fVar3 + fVar27 * fVar27) < DAT_008f49c8) &&
         (moby->state = '\b', moby->animationId != '\x13')) {
        local_58 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
      }
    }
    OrganicDeltAngSpeed
              (uVar21,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
               (double)(g_FrameTime * 3.1415927),lVar10);
    local_110.x = (moby->pos).x;
    local_110.y = (moby->pos).y;
    local_110.z = (moby->pos).z;
    local_110.w = (moby->pos).w;
    FastVecSub(&local_f0,&local_100,lVar10 + 0x10);
    local_100 = local_f0;
    local_fc = local_ec;
    local_f8 = local_e8;
    local_f4 = local_e4;
    FUN_005e7f98((double)(g_FrameTime * 6.5),&local_100,&local_100);
    FastVecAddSelf(auStack_e0,&local_100,lVar10 + 0x10);
    iVar13 = CollMovingSphere
                       (0x4002000000000000,0x3fe8000000000000,0x3fe0000000000000,0x3fe0c15240000000,
                        lVar10,&local_110,&local_100);
    if ((iVar13 == 0) ||
       (iVar13 = PointInsideComplexPoly
                           (&local_110,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1b0)]->points,
                            Splines[*(int *)((int)pvVar5 + 0x1b0)]->cnt), iVar13 != 0)) {
      (moby->pos).x = local_110.x;
      (moby->pos).y = local_110.y;
      (moby->pos).z = local_110.z;
      uVar2 = moby->animationId;
      (moby->pos).w = local_110.w;
      moby->state = '\x04';
      if (uVar2 != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 12.5);
        MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 12.5));
      }
    }
    else {
      (moby->pos).x = local_110.x;
      (moby->pos).y = local_110.y;
      (moby->pos).z = local_110.z;
      (moby->pos).w = local_110.w;
    }
  }
  else if (bVar1 == 6) {
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar27 = OrganicDeltAng
                         ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      dVar20 = (double)fVar27;
      if ((((*(int *)((int)pvVar5 + 0x1d8) != 0) ||
           (fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14),
           fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10),
           dVar20 = (double)SQRT(fVar3 * fVar3 + fVar27 * fVar27), 8.0 <= dVar20)) ||
          (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
         (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1 <=
          *(int *)((int)pvVar5 + 0x1b4))) {
        iVar13 = FastDecTimerS32(dVar20,uVar19 + 0x1c0);
        if (iVar13 != 0) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar10,6,0,(int)(animationSpeed * 20.5));
          }
          fVar27 = DAT_008f49d4;
          *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
          moby->unk58 = fVar27;
        }
      }
      else {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4) + 1;
        *(int *)((int)pvVar5 + 0x1b4) = iVar13;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        }
        pSVar6 = Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)];
        *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
        FUN_005e84c0((double)(DAT_008f49b4 * g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
        dVar20 = (double)MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                    Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13,
                                    *(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
    }
  }
  else if (bVar1 == 5) {
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x1bc));
      dVar20 = 10.0;
      iVar14 = MB_MayaFrameTrigger(10.0,moby);
      if (iVar14 == 0) {
        iVar14 = MB_MayaFrameTrigger(40.0,moby);
        fVar27 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        uVar2 = moby->animationId;
        if (iVar14 == 0) {
          auVar25 = loadVectorLeftIndexed(0x1c4,uVar19);
          auVar26 = loadVectorRightIndexed(0x1d4,uVar19);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x44,0x4bcca4);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                     auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
          if ((!(bool)(in_cr6 >> 1 & 1)) && ((moby->field43_0x70 & 2U) != 0)) {
            moby->state = '\x06';
            if (uVar2 != '\b') {
              local_58 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar10,8,0,(int)(animationSpeed * 10.5));
            }
            uVar15 = FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar5 + 0x188) * 60.0));
            *(undefined4 *)((int)pvVar5 + 0x1c0) = uVar15;
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1d8) != 0) {
            return;
          }
          fVar7 = fVar3 - *(float *)(iVar13 + 0x14);
          fVar4 = fVar27 - *(float *)(iVar13 + 0x10);
          fVar4 = SQRT(fVar4 * fVar4 + fVar7 * fVar7);
          if (fVar4 < DAT_008f49c4) {
            moby->state = '\a';
            if (uVar2 == '\x01') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar10,1,0,(int)(animationSpeed * 10.5));
            return;
          }
          if (fVar4 < DAT_008f49c8) {
            moby->state = '\b';
            if (uVar2 == '\x13') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
            return;
          }
          fVar3 = fVar3 - *(float *)(iVar13 + 0x14);
          fVar27 = fVar27 - *(float *)(iVar13 + 0x10);
          if ((double)SQRT(fVar27 * fVar27 + fVar3 * fVar3) <= dVar20) {
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1c8) == 0) {
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1d4) != 0) {
            return;
          }
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
          uVar11 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0) + 1 & 1;
          *(int *)((int)pvVar5 + 0x1b0) = (int)uVar11;
          if (moby->animationId != '\x04') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
            uVar11 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0);
          }
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
          pSVar6 = Splines[*(int *)((int)pvVar5 + (int)(uVar11 << 2) + 0x180)];
          *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
          *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
          *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
          *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
          FUN_005e84c0((double)(DAT_008f49b4 * g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
          iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
          dVar20 = (double)MB_computeLobVelocity
                                     ((double)(DAT_008f49b4 * g_FrameTime),
                                      -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                      Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13
                                      ,*(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
          *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
          return;
        }
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      GetBonePosition(lVar10,uVar21,local_130);
      dVar20 = 0.5;
      FUN_005e7f98((double)(DAT_008f49c0 * g_FrameTime),local_120,local_120);
      iVar14 = (int)(animationSpeed * (float)((double)(longlong)DAT_008f49bc + dVar20));
      local_58 = (longlong)iVar14;
      FUN_00470690(0x4008000000000000,local_120,local_130,lVar10,iVar13,iVar14);
      *(int *)((int)pvVar5 + 0x1c4) = *(int *)((int)pvVar5 + 0x1c4) + 1;
    }
  }
  return;
}



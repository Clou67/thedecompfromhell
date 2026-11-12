// game/update/moby342.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x34dce8-0x350984
#include <math.h>
#include "game/update/moby342.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera0.h"
#include "game/update/moby156.h"
#include "game/update/moby567.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x034dce8 (0x14 bytes)
void M342_0034dce8(void)

{
  DAT_008400e8 = 0x10000;
  return;
}


// 0x034dd10 (0x4fc bytes)
// inlined: FastAtan2 @0x34de50, FastAtan2 @0x34dff8
void M342_0034dd10(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x120;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x26] = in_LR;
  puVar11[0x1e] = in_f26;
  puVar11[0x1f] = in_f27;
  puVar11[0x20] = in_f28;
  puVar11[0x21] = in_f29;
  puVar11[0x22] = in_f30;
  puVar11[0x23] = in_f31;
  puVar11[0x1d] = unaff_r31;
  puVar11[0x1b] = unaff_r29;
  uVar20 = 0;
  uVar15 = 0;
  puVar11[0x1c] = unaff_r30;
  dVar30 = 0.0;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar11[0x1a] = unaff_r28;
  iVar9 = *(int *)(iVar8 + 0x130);
  *(undefined4 *)(iVar8 + 0x130) = 0;
  dVar29 = dVar30;
  dVar31 = dVar30;
  do {
    if ((int)uVar15 != iVar9) {
      fVar4 = *(float *)(param_1 + 0x10);
      iVar12 = *(int *)(iVar8 + 0x140) + (int)((uVar15 & 0xffffffff) << 4);
      fVar5 = *(float *)(param_1 + 0x14);
      dVar28 = (double)*(float *)(iVar12 + 0x10);
      dVar27 = (double)*(float *)(iVar12 + 0x14);
      fVar2 = (float)(dVar28 - (double)fVar4);
      fVar3 = (float)(dVar27 - (double)fVar5);
      dVar26 = (double)*(float *)(iVar12 + 0x18);
      dVar23 = ABS((double)fVar2);
      dVar24 = ABS((double)fVar3);
      *(float *)((int)puVar11 + 0x7c) = fVar2;
      *(float *)(puVar11 + 0x10) = fVar3;
      *(float *)((int)puVar11 + 0x84) = (float)(dVar23 - dVar24);
      uVar15 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar11 + 0x7c));
      if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
        dVar22 = dVar24;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = ABS((double)*(float *)(puVar11 + 0x10));
      if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
        dVar24 = dVar23;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar23 = dVar30;
      if (dVar30 < dVar22) {
        lVar17 = uVar14 - 0x110;
        lVar18 = uVar14 - 0x68;
        lVar16 = uVar14 - 0x78;
        lVar21 = 2;
        fVar6 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0xb4) = fVar6;
        *(float *)((int)puVar11 + 0xac) = fVar6;
        *(float *)(puVar11 + 0x16) = fVar6;
        *(float *)(puVar11 + 0x15) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar7;
        *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
        *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar6 * fVar6;
          iVar12 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x78;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar16 = lVar18;
        do {
          fVar6 = *pfVar19;
          fVar7 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar17 = lVar1;
        dVar22 = dVar30;
        do {
          iVar12 = (int)lVar17;
          iVar13 = (int)lVar18;
          lVar17 = lVar17 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xa8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
      }
      fVar2 = (float)((double)*(float *)(*(int *)(iVar8 + 0x1d8) + 0x10) - (double)fVar4);
      fVar3 = (float)((double)*(float *)(*(int *)(iVar8 + 0x1d8) + 0x14) - (double)fVar5);
      dVar25 = ABS((double)fVar2);
      dVar24 = ABS((double)fVar3);
      *(float *)(puVar11 + 0xe) = fVar2;
      *(float *)((int)puVar11 + 0x74) = fVar3;
      *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar24);
      uVar15 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)(puVar11 + 0xe));
      if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
        dVar22 = dVar24;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = ABS((double)*(float *)((int)puVar11 + 0x74));
      if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
        dVar24 = dVar25;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar25 = dVar30;
      if (dVar30 < dVar22) {
        lVar17 = uVar14 - 0x110;
        lVar18 = uVar14 - 0x88;
        lVar16 = uVar14 - 0x98;
        lVar21 = 2;
        fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        *(float *)((int)puVar11 + 0x8c) = fVar4;
        *(float *)(puVar11 + 0x12) = fVar4;
        *(float *)(puVar11 + 0x11) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
        *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar4;
        *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar4 * fVar4;
          iVar12 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x98;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar16 = lVar18;
        do {
          fVar4 = *pfVar19;
          fVar5 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar4;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar17 = lVar1;
        dVar22 = dVar30;
        do {
          iVar12 = (int)lVar17;
          iVar13 = (int)lVar18;
          lVar17 = lVar17 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0x88)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar22 = (double)FastSubRots((float)dVar23,(float)dVar25);
      iVar12 = *(int *)(iVar8 + 0x1d8);
      fVar2 = (float)((double)*(float *)(iVar12 + 0x14) - dVar27);
      fVar3 = (float)((double)*(float *)(iVar12 + 0x10) - dVar28);
      fVar4 = (float)((double)*(float *)(iVar12 + 0x18) - dVar26);
      dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      if (1.5707963705062866 <= dVar22) {
        if (((16.0 <= dVar23) && ((dVar23 < dVar31 || (dVar31 < 16.0)))) ||
           ((16.0 > dVar23 && (dVar31 < dVar23)))) {
          uVar20 = *(undefined4 *)(iVar8 + 0x130);
          dVar29 = dVar22;
          dVar31 = dVar23;
        }
      }
      else if (dVar29 < dVar22) {
        uVar20 = *(undefined4 *)(iVar8 + 0x130);
        dVar29 = dVar22;
        dVar31 = dVar23;
      }
    }
    uVar10 = **(uint **)(iVar8 + 0x140);
    lVar17 = (ulonglong)*(uint *)(iVar8 + 0x130) + (ulonglong)uVar10 +
             (longlong)*(char *)(iVar8 + 0x134);
    uVar15 = lVar17 - (longlong)((int)lVar17 / (int)uVar10) * (longlong)(int)uVar10;
    *(int *)(iVar8 + 0x130) = (int)uVar15;
  } while ((int)uVar15 != 0);
  *(undefined4 *)(iVar8 + 0x130) = uVar20;
  return;
}


// 0x034e230 (0x9a0 bytes)
// inlined: FastAtan2 @0x34e53c, FastAtan2 @0x34e78c
void M342_0034e230(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x240;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x4a] = in_LR;
  puVar11[0x46] = in_f30;
  puVar11[0x47] = in_f31;
  puVar11[0x45] = unaff_r31;
  puVar11[0x44] = unaff_r30;
  pfVar5 = (float *)param_1->pVar;
  uVar23 = ZEXT48(pfVar5);
  dVar28 = 0.0;
  puVar11[0x43] = unaff_r29;
  puVar11[0x42] = unaff_r28;
  puVar11[0x41] = unaff_r27;
  puVar11[0x40] = unaff_r26;
  *(undefined4 *)((int)puVar11 + 0x1a4) = 0;
  iVar15 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,iVar15,uVar23,0,puVar11 + 0x34,(int)puVar11 + 0x1a4,0,4);
  if ((*(int *)(puVar11 + 0x34) != 1) && (param_1->state != '\x10' && param_1->state != 'c')) {
    uVar6 = *(uint *)((int)puVar11 + 0x1a4);
    uVar8 = (int)uVar6 >> 0x1f;
    fVar7 = *pfVar5 - *(float *)((int)puVar11 + 0x1a4);
    *pfVar5 = fVar7;
    if (*(char *)(pfVar5 + 0x75) == '\0') {
      if ((double)fVar7 <= dVar28) {
        pfVar5[0x18] = 0.008;
        pfVar5[0x19] = 0.0005;
        fVar7 = g_FrameTime;
        pfVar5[0x1a] = DAT_00840118 * g_FrameTime;
        fVar2 = DAT_0084011c;
        *(undefined1 *)((int)pfVar5 + 0x8d) = 0;
        pfVar5[0x1d] = 1.26117e-44;
        pfVar5[0x1b] = fVar2 * fVar7;
        fVar7 = (param_1->pos).x - g_heroPosition.x;
        fVar2 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar7);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x35) = fVar7;
        *(float *)((int)puVar11 + 0x1ac) = fVar2;
        *(float *)(puVar11 + 0x36) = (float)(dVar25 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1d) & 4;
        uVar18 = uVar21 << 2 | 0x735900;
        dVar26 = ABS((double)*(float *)(puVar11 + 0x35));
        if ((double)*(float *)(puVar11 + 0x36) - dVar28 < 0.0) {
          dVar26 = dVar27;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0x1ac));
        if ((double)*(float *)(puVar11 + 0x36) - dVar28 < 0.0) {
          dVar27 = dVar25;
        }
        fVar2 = *(float *)((int)uVar18 + 4);
        if (dVar28 < dVar26) {
          lVar16 = uVar14 - 0x230;
          lVar19 = uVar14 - 0x80;
          lVar22 = uVar14 - 0x70;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
          fVar12 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x1cc) = fVar3;
          *(float *)((int)puVar11 + 0x1c4) = fVar3;
          *(float *)(puVar11 + 0x39) = fVar3;
          *(float *)(puVar11 + 0x38) = fVar3;
          fVar3 = fVar12 * fVar12;
          *(float *)((int)puVar11 + 0x1c4) = *(float *)((int)puVar11 + 0x1c4) * fVar12;
          *(float *)(puVar11 + 0x39) = *(float *)(puVar11 + 0x39) * fVar3;
          *(float *)((int)puVar11 + 0x1cc) = *(float *)((int)puVar11 + 0x1cc) * fVar3 * fVar12;
          do {
            *(float *)((int)lVar16 + 0x1c0) = *(float *)((int)lVar16 + 0x1b0) * fVar3 * fVar3;
            iVar15 = (int)lVar19;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar14 - 0x80;
          uVar18 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar19 = lVar22;
          do {
            pfVar20 = (float *)uVar18;
            fVar3 = pfVar20[1];
            uVar18 = uVar18 + 8;
            *(float *)((int)lVar16 + 0x1c0) = *(float *)((int)lVar16 + 0x1c0) * *pfVar20;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar16 = 2;
          do {
            iVar15 = (int)lVar17;
            iVar13 = (int)lVar22;
            lVar17 = lVar17 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x1c0)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
        }
        MB_StartKick(dVar28,param_1,uVar23 + 0x50,uVar18,0x10,1,0);
        fVar7 = pfVar5[0x73];
        pfVar5[0x28] = 8.0;
        pfVar5[0x29] = 15.0;
        if (fVar7 != 0.0) {
          *(undefined1 *)((int)fVar7 + 0x20) = 1;
          uVar6 = *(uint *)((int)fVar7 + 0x78);
          *(ushort *)((int)pfVar5[0x73] + 0x34) = *(ushort *)((int)pfVar5[0x73] + 0x34) & 0xfeff;
          FastMtxCopyNoTranslate(uVar14 - 0x1c0,(ulonglong)(uint)pfVar5[0x73] + 0xc0);
          MB_MtxToEuler((int)(uVar14 - 0x1c0),(MobyInstance *)((int)pfVar5[0x73] + 0x40));
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x10,0x34e20c);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0,
                              (ulonglong)uVar6);
          *(undefined4 *)(uVar6 & 0xfffffffc) = uVar10;
          *(undefined4 *)(uVar6 + 4) = 1;
          *(undefined4 *)(uVar6 + 0x3c) = 0;
          *(undefined4 *)(uVar6 + 0x34) = 0;
          *(undefined4 *)(uVar6 + 0x30) = 0;
          fVar7 = g_FrameTime;
          *(undefined4 *)(uVar6 + 0x2c) = 0;
          *(undefined4 *)(uVar6 + 0x28) = 0;
          *(undefined4 *)(uVar6 + 0x24) = 0;
          *(undefined4 *)(uVar6 + 0x20) = 0;
          *(float *)(uVar6 + 0x38) = fVar7 * 2.0;
          dVar25 = -2.094395160675049;
          dVar26 = 2.094395160675049;
          dVar28 = (double)MB_randRangeFloat(fVar7 * -2.0943952,fVar7 * 2.0943952);
          *(float *)(uVar6 + 0x20) = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar25),
                                      (float)((double)g_FrameTime * dVar26));
          *(float *)(uVar6 + 0x24) = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar25),
                                      (float)((double)g_FrameTime * dVar26));
          *(float *)(uVar6 + 0x28) = (float)dVar28;
          *(MobyInstance **)(uVar6 + 8) = param_1;
          *(undefined4 *)(uVar6 + 0xc) = 0x100;
        }
        if ((MobyInstance *)pfVar5[0x74] != (MobyInstance *)0x0) {
          DeleteMoby((MobyInstance *)pfVar5[0x74]);
          pfVar5[0x74] = 0.0;
        }
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pfVar5 + 0x47) = 0xfa;
        param_1->state = 'c';
        if (param_1->animationId != '\x10') {
          MB_SetAnimation(param_1,0x10,0,6);
        }
      }
      else if ((int)((uVar8 >> 1 ^ uVar6) - uVar8) < 0x3f800000) {
        *(undefined1 *)((int)pfVar5 + 0x47) = 100;
      }
      else {
        *(undefined1 *)((int)pfVar5 + 0x47) = 0x78;
        sVar4 = *(short *)(*(int *)(iVar15 + 0x20) + 0xa6);
        if ((sVar4 == 0xb0) || (sVar4 == 0xb1)) {
          auVar29 = loadVectorLeftIndexed(4,0x34e20c);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        else {
          auVar29 = loadVectorLeftIndexed(8,0x34e20c);
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        }
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar29,
                             auVar31);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = vectorSplatHalfWord(auVar29,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar29,6,uVar23);
        *(undefined2 *)((int)pfVar5 + 6) = uVar9;
        uVar1 = param_1->state;
        if ((uVar1 != '\x01' && uVar1 != '\x02') && (uVar1 != '\t')) {
          fVar7 = DAT_00840140 * g_FrameTimeSq;
          pfVar5[0x19] = 0.0005;
          pfVar5[0x18] = fVar7;
          fVar7 = g_FrameTime;
          pfVar5[0x1a] = DAT_00840120 * g_FrameTime;
          fVar2 = DAT_00840124;
          *(undefined1 *)((int)pfVar5 + 0x8d) = 0;
          pfVar5[0x1d] = 1.26117e-44;
          pfVar5[0x1b] = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - g_heroPosition.x;
          fVar2 = (param_1->pos).y - g_heroPosition.y;
          dVar25 = ABS((double)fVar7);
          dVar27 = ABS((double)fVar2);
          *(float *)((int)puVar11 + 0x1b4) = fVar7;
          *(float *)(puVar11 + 0x37) = fVar2;
          *(float *)((int)puVar11 + 0x1bc) = (float)(dVar25 - dVar27);
          uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1b4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1bc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x37) >> 0x1d) & 4;
          uVar18 = uVar21 << 2 | 0x735900;
          dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1b4));
          if ((double)*(float *)((int)puVar11 + 0x1bc) - dVar28 < 0.0) {
            dVar26 = dVar27;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
          dVar27 = ABS((double)*(float *)(puVar11 + 0x37));
          if ((double)*(float *)((int)puVar11 + 0x1bc) - dVar28 < 0.0) {
            dVar27 = dVar25;
          }
          fVar2 = *(float *)((int)uVar18 + 4);
          if (dVar28 < dVar26) {
            lVar16 = uVar14 - 0x230;
            lVar19 = uVar14 - 0x60;
            lVar22 = uVar14 - 0x50;
            lVar24 = 2;
            fVar3 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
            fVar12 = fVar3 * fVar3;
            *(float *)((int)puVar11 + 0x1ec) = fVar3;
            *(float *)((int)puVar11 + 0x1e4) = fVar3;
            *(float *)(puVar11 + 0x3d) = fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            fVar3 = fVar12 * fVar12;
            *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar12;
            *(float *)(puVar11 + 0x3d) = *(float *)(puVar11 + 0x3d) * fVar3;
            *(float *)((int)puVar11 + 0x1ec) = *(float *)((int)puVar11 + 0x1ec) * fVar3 * fVar12;
            do {
              *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1d0) * fVar3 * fVar3;
              iVar15 = (int)lVar19;
              lVar16 = lVar16 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar14 - 0x60;
            uVar18 = ZEXT48(&DAT_007358e0);
            lVar16 = lVar17;
            lVar19 = lVar22;
            do {
              pfVar20 = (float *)uVar18;
              fVar3 = pfVar20[1];
              uVar18 = uVar18 + 8;
              *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1e0) * *pfVar20;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar16 = 2;
            do {
              iVar15 = (int)lVar17;
              iVar13 = (int)lVar22;
              lVar17 = lVar17 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x1e0)) +
                                *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                               *(float *)(iVar13 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          MB_StartKick(dVar28,param_1,uVar23 + 0x50,uVar18,8,1,0);
          pfVar5[0x28] = 5.0;
          pfVar5[0x29] = 10.0;
          param_1->state = '\r';
        }
      }
    }
    else {
      param_1->state = '\x10';
      if (param_1->animationId != '\x0e') {
        MB_SetAnimation(param_1,0xe,0,6);
      }
      MB_SetAnimation(pfVar5[0x74],2,0,0);
      pfVar5[0xb] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[8] = 0.0;
    }
    MB_UpdateLightsTransition(param_1,uVar23 + 0x40);
  }
  param_1->damage = -1;
  fVar7 = pfVar5[0x76];
  if (fVar7 == 0.0) {
    MB_getTarget(0x402c000000000000,param_1,&DAT_0034e20c,uVar14 - 0xf0);
    pfVar5[0x76] = *(float *)(puVar11 + 0x32);
  }
  else if ((0x7f < *(byte *)((int)fVar7 + 0x20)) ||
          ((sVar4 = *(short *)((int)fVar7 + 0xa6), sVar4 != 0xcb && sVar4 != 0x10e && (sVar4 != 0)))
          ) {
    MB_getTarget(0x402c000000000000,param_1,&DAT_0034e20c,uVar14 - 0x140);
    pfVar5[0x76] = *(float *)(puVar11 + 0x28);
    if ((param_1->state == '\a') || (param_1->state == '\b')) {
      param_1->state = '\x12';
    }
  }
  if ((pfVar5[0x73] != 0.0) && (param_1->state != 'c')) {
    GetBonePosition(param_1,4,uVar14 - 0x1d0);
    GetBoneTransformations(param_1,4,uVar14 - 0x180);
    FastApplyTransform((Vec4 *)((int)pfVar5[0x73] + 0xc0),(Vec4 *)(uVar14 - 0x180));
    fVar7 = pfVar5[0x73];
    *(undefined4 *)((int)fVar7 + 0x10) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((int)fVar7 + 0x14) = *(undefined4 *)((int)puVar11 + 0x74);
    *(undefined4 *)((int)fVar7 + 0x18) = *(undefined4 *)(puVar11 + 0xf);
    *(undefined4 *)((int)fVar7 + 0x1c) = *(undefined4 *)((int)puVar11 + 0x7c);
    UpdateMobyTransform((MobyInstance *)pfVar5[0x73]);
  }
  MB_ColorDyingMoby(param_1,uVar23 + 0x40);
  return;
}


// 0x034ec58 (0x1d2c bytes)
/* Moby 342 */

void UpdateMoby_342(MobyInstance *moby)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  u8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int *piVar11;
  f32 fVar12;
  Spline *pSVar13;
  Spline *pSVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  MobyInstance *pMVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  MobyInstance *pMVar24;
  int iVar25;
  ulonglong uVar26;
  byte in_cr6;
  undefined8 in_LR;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  GPiece<16> local_210;
  GPiece<16> auStack_200;
  GPiece<16> auStack_1f0;
  GPiece<16> local_1e0;
  GPiece<16> auStack_1d0;
  GPiece<16> auStack_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<16> local_190;
  GPiece<16> auStack_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<80> local_150;
  MobyInstance *local_100;
  GPiece<64> auStack_f0;
  MobyInstance *local_b0;
  GPiece<64> auStack_a0;
  MobyInstance *local_60;
  
  lVar18 = (longlong)(int)moby;
  puVar10 = (undefined4 *)moby->pVar;
  uVar26 = ZEXT48(puVar10);
  M342_0034e230();
  bVar4 = moby->state;
  if (bVar4 < 0xb) {
    if (bVar4 < 4) {
      if (bVar4 == 0) {
        *(undefined1 *)((int)puVar10 + 9) = 0;
        uVar23 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar23;
        MB_InitDefaultParams((float *)(puVar10 + 0x2c));
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        puVar10[0x3d] = 0x3e800000;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        puVar10[0x3b] = 0x3cf5c28f;
        puVar10[0x3c] = 0x3e99999a;
        fVar8 = DAT_0084010c;
        fVar7 = g_FrameTime;
        puVar10[0xb] = 0;
        puVar10[0x2f] = 0x40000000;
        puVar10[0x2e] = 0x40000000;
        *puVar10 = 0x40400000;
        *(undefined1 *)(puVar10 + 2) = 2;
        puVar10[10] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0x35] = fVar8 * fVar7;
        auVar33 = loadVectorLeftIndexed(in_LR,0x34ebd0);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        cVar5 = *(char *)(puVar10 + 0x75);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                            uVar26);
        *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
        puVar10[0x71] = 0;
        if (cVar5 == '\0') {
          iVar21 = puVar10[0x51];
          pSVar13 = Splines[puVar10[0x45]];
          puVar10[0x44] = pSVar13;
          (moby->pos).x = pSVar13->points[0].x;
          (moby->pos).y = pSVar13->points[0].y;
          pSVar14 = Splines[iVar21];
          (moby->pos).z = pSVar13->points[0].z;
          fVar7 = pSVar13->points[0].w;
          puVar10[0x40] = 1;
          (moby->pos).w = fVar7;
          puVar10[0x50] = pSVar14;
          puVar10[0x4c] = 1;
          moby->drawDistance = 0;
          moby->state = '\x01';
          return;
        }
        pMVar19 = CreateMoby(BLARG_GUN_0158);
        puVar10[0x73] = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x30) = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x31) = 1;
        *(ushort *)(puVar10[0x73] + 0x34) = *(ushort *)(puVar10[0x73] + 0x34) | 0x100;
        GetBonePosition(lVar18,4,&local_230);
        iVar21 = puVar10[0x73];
        *(undefined4 *)(iVar21 + 0x10) = local_230;
        *(undefined4 *)(iVar21 + 0x14) = local_22c;
        *(undefined4 *)(iVar21 + 0x18) = local_228;
        *(undefined4 *)(iVar21 + 0x1c) = local_224;
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        pMVar19 = CreateMoby(0x159);
        puVar10[0x74] = pMVar19;
        (pMVar19->pos).x = (moby->pos).x;
        (pMVar19->pos).y = (moby->pos).y;
        (pMVar19->pos).z = (moby->pos).z;
        (pMVar19->pos).w = (moby->pos).w;
        iVar21 = puVar10[0x74];
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        *(undefined2 *)(puVar10[0x74] + 0x32) = 0x40;
        *(undefined1 *)(puVar10[0x74] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x74] + 0x31) = 1;
        MB_SetAnimation(puVar10[0x74],3,0,0);
        moby->state = '\x0e';
        if (moby->animationId == '\f') {
          return;
        }
        MB_SetAnimation(lVar18,0xc,0,0);
        return;
      }
      if (bVar4 < 2) {
        piVar11 = (int *)puVar10[0x44];
        iVar21 = *piVar11 + -1;
        if ((float)puVar10[0x79] <=
            SQRT((g_heroPosition.z - (float)piVar11[iVar21 * 4 + 6]) *
                 (g_heroPosition.z - (float)piVar11[iVar21 * 4 + 6]) +
                 (g_heroPosition.x - (float)piVar11[iVar21 * 4 + 4]) *
                 (g_heroPosition.x - (float)piVar11[iVar21 * 4 + 4]) +
                 (g_heroPosition.y - (float)piVar11[iVar21 * 4 + 5]) *
                 (g_heroPosition.y - (float)piVar11[iVar21 * 4 + 5]))) {
          return;
        }
        moby->drawDistance = 0x40;
        moby->state = '\x02';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar18,3,0,0);
        }
        pMVar19 = CreateMoby(0x159);
        puVar10[0x74] = pMVar19;
        (pMVar19->pos).x = (moby->pos).x;
        (pMVar19->pos).y = (moby->pos).y;
        (pMVar19->pos).z = (moby->pos).z;
        (pMVar19->pos).w = (moby->pos).w;
        *(float *)(puVar10[0x74] + 0x18) = *(float *)(puVar10[0x74] + 0x18) + 2.0;
        *(undefined2 *)(puVar10[0x74] + 0x32) = 0x40;
        *(undefined1 *)(puVar10[0x74] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x74] + 0x31) = 1;
        MB_SetAnimation(puVar10[0x74],1,0,0);
        pMVar19 = CreateMoby(BLARG_GUN_0158);
        puVar10[0x73] = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x73] + 0x31) = 1;
        *(ushort *)(puVar10[0x73] + 0x34) = *(ushort *)(puVar10[0x73] + 0x34) | 0x100;
        GetBonePosition(lVar18,4,&local_220);
        iVar21 = puVar10[0x73];
        *(undefined4 *)(iVar21 + 0x10) = local_220;
        *(undefined4 *)(iVar21 + 0x14) = local_21c;
        *(undefined4 *)(iVar21 + 0x18) = local_218;
        *(undefined4 *)(iVar21 + 0x1c) = local_214;
        return;
      }
      if (bVar4 < 3) {
        piVar11 = (int *)puVar10[0x44];
        iVar21 = *piVar11;
        iVar25 = puVar10[0x40] + iVar21 + (int)*(char *)(puVar10 + 0x41);
        iVar25 = iVar25 - (iVar25 / iVar21) * iVar21;
        uVar28 = FUN_005e8338((double)((float)piVar11[iVar25 * 4 + 4] - (moby->pos).x),
                              (double)((float)piVar11[iVar25 * 4 + 5] - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar18,
                   &DAT_0034ebd0,uVar26 + 0x1b4);
        iVar21 = puVar10[0x74];
        iVar20 = puVar10[0x44] + iVar25 * 0x10;
        dVar30 = (double)*(float *)(iVar20 + 0x10);
        dVar32 = (double)*(float *)(iVar20 + 0x14);
        dVar31 = (double)*(float *)(iVar20 + 0x18);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = puVar10[0x74];
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        if (iVar25 == *(int *)puVar10[0x44] + -1) {
          dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
          dVar29 = -(double)(DAT_00840110 * g_FrameTime - (moby->pos).z);
          if (dVar29 <= dVar27) {
            uVar6 = moby->animationId;
            (moby->pos).z = (float)dVar27;
            moby->state = '\t';
            if (uVar6 != '\x04') {
              MB_SetAnimation(lVar18,4,0,3);
            }
            MB_SetAnimation(puVar10[0x74],2,0,0);
          }
          else {
            (moby->pos).z = (float)dVar29;
          }
          iVar21 = puVar10[0x74];
          *(float *)(iVar21 + 0x2c) =
               -(*(float *)(*(int *)(iVar21 + 0x24) + 0x24) * 0.033333335 -
                *(float *)(iVar21 + 0x2c));
          if (*(int *)(puVar10[0x74] + 0x2c) < 0) {
            *(undefined4 *)(puVar10[0x74] + 0x2c) = 0;
          }
        }
        else {
          dVar27 = dVar30 - (double)(moby->pos).x;
          dVar29 = dVar32 - (double)(moby->pos).y;
          dVar2 = dVar31 - (double)(moby->pos).z;
          FUN_005e7f98((double)(DAT_00840110 * g_FrameTime),local_210,local_210);
          (moby->pos).x = (moby->pos).x + (float)dVar27;
          (moby->pos).y = (moby->pos).y + (float)dVar29;
          (moby->pos).z = (moby->pos).z + (float)dVar2;
        }
        fVar7 = (float)((double)(moby->pos).y - dVar32);
        fVar8 = (float)((double)(moby->pos).x - dVar30);
        fVar3 = (float)((double)(moby->pos).z - dVar31);
        if (0.5 <= SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7)) {
          return;
        }
        if (iVar25 == *(int *)puVar10[0x44] + -1) {
          return;
        }
        puVar10[0x40] = iVar25;
        return;
      }
      MB_getTarget((double)(float)puVar10[0x7a],lVar18);
      pMVar19 = g_heroMobyPtr;
      pMVar24 = (MobyInstance *)puVar10[0x76];
      if (local_100 != (MobyInstance *)0x0) {
        fVar7 = (moby->pos).y;
        fVar3 = fVar7 - (local_100->pos).y;
        fVar8 = (moby->pos).x;
        fVar7 = fVar7 - g_heroPosition.y;
        fVar9 = fVar8 - (local_100->pos).x;
        fVar8 = fVar8 - g_heroPosition.x;
        if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
          puVar10[0x76] = g_heroMobyPtr;
          pMVar24 = pMVar19;
        }
        else {
          puVar10[0x76] = local_100;
          pMVar24 = local_100;
        }
      }
      dVar31 = (double)(moby->rotation).z;
      uVar28 = FUN_005e8338((double)((pMVar24->pos).x - (moby->pos).x),
                            (double)((pMVar24->pos).y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fd3333340000000,lVar18);
      dVar31 = (double)FastSubRots((moby->rotation).z,(float)dVar31);
      dVar32 = 0.0872664600610733;
      if (dVar31 <= (double)(g_FrameTime * 0.08726646)) {
        if ((moby->animationId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
          MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 6.5));
        }
      }
      else {
        bVar1 = moby->animationId != '\x13';
        if ((bVar1) && (bVar1)) {
          MB_SetAnimation(lVar18,0x13,0,(int)(animationSpeed * 6.5));
        }
      }
      iVar21 = MB_FindMobyByVarId(lVar18);
      if (iVar21 != 0) {
        M342_0034dd10(lVar18);
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar18,2,0,6);
        }
        moby->state = '\f';
        return;
      }
      iVar21 = puVar10[0x76];
      fVar7 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
      fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
      if ((float)puVar10[0x7a] <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
        return;
      }
      if (4.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z)) {
        return;
      }
      dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                    (double)(*(float *)(iVar21 + 0x14) - fVar7));
      dVar31 = (double)FastSubRots((float)dVar31,(moby->rotation).z);
      if (dVar32 <= dVar31) {
        return;
      }
      if ((moby->enabled == '\0') && ((MobyInstance *)puVar10[0x76] == g_heroMobyPtr)) {
        return;
      }
      puVar10[0x72] = 0xc0800000;
      uVar26 = MB_randInt(0xff);
      dVar31 = -0.0872664600610733;
      if ((uVar26 & 1) != 0) {
        dVar31 = dVar32;
      }
      puVar10[0x6f] = (float)dVar31;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      uVar22 = FastDoubleToInt((double)(DAT_00840128 * animationSpeed));
      puVar10[0x6c] = uVar22;
      *(undefined1 *)((int)puVar10 + 0x1d5) = 0;
      if (puVar10[0x77] != 0) {
        PlayMobySound(puVar10[0x77],0,moby);
        puVar10[0x77] = 0;
        if (moby->animationId != '\x15') {
          MB_SetAnimation(lVar18,0x15,0,4);
        }
        moby->state = '\x13';
        return;
      }
      if (moby->animationId != '\x0f') {
        MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 4.5));
      }
      moby->state = '\n';
      return;
    }
    if (7 < bVar4) {
      if (bVar4 < 9) {
        STUB_0002ed9c();
        dVar31 = (double)FUN_005e8338((double)(*(float *)(puVar10[0x76] + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(puVar10[0x76] + 0x14) - (moby->pos).y));
        dVar31 = (double)FastWrapRot((float)dVar31,(float)puVar10[0x6f]);
        OrganicDeltAngSpeed
                  (dVar31,0x3f60624de0000000,0x3faeb851e0000000,0x3f6cac0840000000,lVar18);
        dVar31 = (double)FastSubRots((float)dVar31,(moby->rotation).z);
        if (dVar31 < 0.0872664600610733) {
          puVar10[0x6f] = -(float)puVar10[0x6f];
        }
        Delt(-0.95,g_FrameTime * 2.0,(float *)(puVar10 + 0x72));
        dVar31 = (double)BlendAnimFrame(moby);
        if (dVar31 <= 1.0) {
          GetBonePosition(puVar10[0x73],0,auStack_200);
          dVar32 = 0.0;
          dVar31 = (double)FastWrapRot((moby->rotation).z,0.0);
          cosf((float)dVar31);
          FastWrapRot((moby->rotation).z,(float)dVar32);
          FUN_005e8128();
          FUN_005e7f98((double)(DAT_00840114 * g_FrameTime),auStack_1f0,local_1e0);
          FUN_003bbc08(0x3fd0000000000000,auStack_1f0,auStack_200,lVar18,
                       (int)(animationSpeed * 180.5));
          *(char *)((int)puVar10 + 0x1d5) = *(char *)((int)puVar10 + 0x1d5) + '\x01';
        }
        pMVar19 = (MobyInstance *)puVar10[0x76];
        fVar7 = (moby->pos).y - (pMVar19->pos).y;
        fVar8 = (moby->pos).x - (pMVar19->pos).x;
        pMVar24 = (MobyInstance *)&DAT_0034ebd0;
        if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) < 8.0) {
          auVar33 = ZEXT416(0xffffffff);
          auVar37 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar33 = loadVectorLeftIndexed(0x54,0x34ebd0);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar34 = loadVectorLeftIndexed(0x128,0x840000);
          auVar35 = loadVectorLeftIndexed(0x1b0,uVar26);
          auVar33 = vectorSubtractFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar36 = loadVectorRightIndexed(0x1c0,uVar26);
          auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar34);
          auVar33 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                     auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
          pMVar24 = (MobyInstance *)0xfffff410;
          if ((((bool)(in_cr6 >> 1 & 1)) &&
              (pMVar24 = (MobyInstance *)puVar10[0x78],
              (MobyInstance *)puVar10[0x78] == (MobyInstance *)0x0)) &&
             (pMVar24 = g_heroMobyPtr, pMVar19 == g_heroMobyPtr)) {
            if (moby->animationId != '\x02') {
              MB_SetAnimation(lVar18,2,0,6,0x128,0x1b0);
            }
            M342_0034dd10(lVar18);
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x48,0x34ebd0);
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar22 = storeVectorElementWordIndexed
                               (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                                uVar26);
            *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
            moby->state = '\f';
            return;
          }
        }
        iVar21 = FastDecTimerS32(uVar26 + 0x1b0,pMVar24);
        if (iVar21 != 0) {
          if (puVar10[0x78] != 0) {
            if (moby->animationId != '\x0f') {
              MB_SetAnimation(lVar18,0xf,0,6);
            }
            moby->state = '\n';
            return;
          }
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar18,2,0,6);
          }
          M342_0034dd10(lVar18);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x48,0x34ebd0);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar22 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                              uVar26);
          *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
          moby->state = '\f';
          return;
        }
        if (g_heroStateType != 7) {
          return;
        }
        if ((MobyInstance *)puVar10[0x76] != g_heroMobyPtr) {
          return;
        }
        if (moby->animationId != '\x12') {
          MB_SetAnimation(lVar18,0x12,0,6);
        }
        moby->state = '\x12';
        return;
      }
      if (bVar4 < 10) {
        iVar21 = puVar10[0x74];
        if (iVar21 != 0) {
          *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
          iVar21 = puVar10[0x74];
          *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
          *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
          *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
          *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
          if ((((MobyInstance *)puVar10[0x74])->field43_0x70 & 2U) != 0) {
            DeleteMoby((MobyInstance *)puVar10[0x74]);
            puVar10[0x74] = 0;
          }
        }
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        M342_0034dd10(lVar18);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar18,0,0,6);
        }
        moby->state = '\x03';
        puVar10[0x74] = 0;
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\b';
      if (moby->animationId == '\x06') {
        return;
      }
      MB_SetAnimation(lVar18,6,7,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar4 < 5) {
      return;
    }
    if (6 < bVar4) {
      STUB_0002ed9c();
      uVar28 = FUN_005e8338((double)(*(float *)(puVar10[0x76] + 0x10) - (moby->pos).x),
                            (double)(*(float *)(puVar10[0x76] + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar18);
      Delt(-0.75,g_FrameTime * 2.0,(float *)(puVar10 + 0x72));
      dVar31 = (double)BlendAnimFrame(moby);
      if (dVar31 <= 1.0) {
        GetBonePosition(puVar10[0x73],0,auStack_1d0);
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        uVar28 = 0;
        FUN_005e7f98((double)(DAT_00840114 * g_FrameTime),auStack_1c0,local_1b0);
        iVar21 = FUN_00299400(uVar28,auStack_1c0,auStack_1d0);
        *(undefined1 *)(iVar21 + 0x20) = 1;
      }
      iVar21 = FastDecTimerS32(uVar26 + 0x1b0);
      if (iVar21 == 0) {
        return;
      }
      moby->state = '\x03';
      if (moby->animationId == '\0') {
        return;
      }
      MB_SetAnimation(lVar18,0,0,6);
      return;
    }
LAB_0034fee0:
    iVar21 = MB_UpdateNavMoveTurning
                       (lVar18,uVar26 + 0xb0,puVar10[0x50] + puVar10[0x4c] * 0x10 + 0x10,
                        uVar26 + 0x20);
    if (iVar21 != 4) {
      return;
    }
    uVar6 = moby->state;
    if (uVar6 == '\f') {
      moby->state = '\x03';
      if (moby->animationId == '\0') {
        return;
      }
      MB_SetAnimation(lVar18,0,0,6);
      return;
    }
    if (uVar6 == '\v') {
      MB_getTarget(0x402c000000000000,lVar18,&DAT_0034ebd0,auStack_a0);
      fVar7 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar3 = fVar7 - (local_60->pos).y;
      fVar9 = fVar8 - (local_60->pos).x;
      fVar7 = fVar7 - g_heroPosition.y;
      fVar8 = fVar8 - g_heroPosition.x;
      if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
        local_60 = g_heroMobyPtr;
      }
      puVar10[0x76] = local_60;
      moby->state = '\n';
      if (moby->animationId == '\x0f') {
        return;
      }
      MB_SetAnimation(lVar18,0xf,0,6);
      return;
    }
    if (uVar6 == '\x06') {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      moby->state = '\a';
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x68,0x34ebd0);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,uVar26
                         );
      *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
      if (moby->animationId == '\x06') {
        return;
      }
      MB_SetAnimation(lVar18,6,7,4);
      return;
    }
    if (uVar6 != '\x05') {
      return;
    }
    MB_getTarget(0x402c000000000000,lVar18,&DAT_0034ebd0,auStack_f0);
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).x;
    fVar3 = fVar7 - (local_b0->pos).y;
    fVar7 = fVar7 - g_heroPosition.y;
    fVar9 = fVar8 - (local_b0->pos).x;
    fVar8 = fVar8 - g_heroPosition.x;
    if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
      local_b0 = g_heroMobyPtr;
    }
    puVar10[0x76] = local_b0;
    fVar7 = (moby->pos).y;
    fVar8 = (local_b0->pos).y;
    fVar3 = (moby->pos).x;
    fVar16 = fVar7 - fVar8;
    fVar9 = (local_b0->pos).x;
    fVar17 = fVar3 - fVar9;
    if (SQRT(fVar17 * fVar17 + fVar16 * fVar16) < 4.0) {
      dVar32 = (double)(moby->rotation).z;
      dVar31 = (double)FUN_005e8338((double)(fVar9 - fVar3),(double)(fVar8 - fVar7));
      dVar31 = (double)FastSubRots((float)dVar32,(float)dVar31);
      if (1.5707963705062866 < dVar31) {
        M342_0034dd10(lVar18);
        return;
      }
    }
    uVar22 = FastDoubleToInt((double)(DAT_00840128 * animationSpeed));
    puVar10[0x6c] = uVar22;
    *(undefined1 *)((int)puVar10 + 0x1d5) = 0;
    if (moby->animationId != '\x15') {
      MB_SetAnimation(lVar18,0x15,0,4);
    }
    moby->state = '\x13';
    return;
  }
  if (0x10 < bVar4) {
    if (0x13 < bVar4) {
      if (bVar4 != 99) {
        return;
      }
      uVar23 = MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x14));
      if ((uVar23 & 0x40) != 0) {
        if ((MobyInstance *)puVar10[0x74] != (MobyInstance *)0x0) {
          DeleteMoby((MobyInstance *)puVar10[0x74]);
        }
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,0
                   ,lVar18,uVar26 + 0x20,local_150,&DAT_0034ebd0,0,5,2,4);
        DeleteMoby(moby);
        return;
      }
      fVar12 = (moby->pos).z;
      uVar15 = (int)fVar12 >> 0x1f;
      if ((0x409fffff < (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) && ((uVar23 & 0x20) == 0)) {
        return;
      }
      if ((MobyInstance *)puVar10[0x74] != (MobyInstance *)0x0) {
        DeleteMoby((MobyInstance *)puVar10[0x74]);
      }
      DeleteMoby(moby);
      return;
    }
    if (bVar4 < 0x12) {
      return;
    }
    if (0x12 < bVar4) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (moby->animationId != '\x06') {
        MB_SetAnimation(lVar18,6,7,4);
      }
      moby->state = '\b';
      return;
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    moby->state = '\x03';
    if (moby->animationId == '\0') {
      return;
    }
    MB_SetAnimation(lVar18,0,0,6);
    return;
  }
  if (bVar4 < 0xe) {
    if (0xc < bVar4) {
      uVar23 = MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x14));
      if ((uVar23 & 0x40) != 0) {
        if (puVar10[0x78] != 0) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 6.5));
          }
          moby->state = '\x03';
          return;
        }
        M342_0034dd10(lVar18);
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar18,2,0,(int)(animationSpeed * 6.5));
        }
        moby->state = '\f';
        return;
      }
      fVar12 = (moby->pos).z;
      uVar15 = (int)fVar12 >> 0x1f;
      if ((0x409fffff < (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) && ((uVar23 & 0x20) == 0)) {
        return;
      }
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar18,uVar26 + 0x20,local_160,&DAT_0034ebd0,1,5,2,4);
      if ((MobyInstance *)puVar10[0x73] != (MobyInstance *)0x0) {
        DeleteMoby((MobyInstance *)puVar10[0x73]);
      }
      DeleteMoby(moby);
      return;
    }
    goto LAB_0034fee0;
  }
  if (bVar4 < 0xf) {
    iVar21 = puVar10[0x76];
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).x;
    fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
    fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
    if (14.0 <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
      return;
    }
    if (4.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z)) {
      return;
    }
    dVar32 = (double)(moby->rotation).z;
    dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                  (double)(*(float *)(iVar21 + 0x14) - fVar7));
    dVar31 = (double)FastSubRots((float)dVar32,(float)dVar31);
    if (1.0471975803375244 <= dVar31) {
      return;
    }
    moby->state = '\x0f';
    if (moby->animationId != '\r') {
      MB_SetAnimation(lVar18,0xd,0,6);
    }
    iVar21 = puVar10[0x76];
    puVar10[0x68] = *(undefined4 *)(iVar21 + 0x10);
    puVar10[0x69] = *(undefined4 *)(iVar21 + 0x14);
    puVar10[0x6a] = *(undefined4 *)(iVar21 + 0x18);
    puVar10[0x6b] = *(undefined4 *)(iVar21 + 0x1c);
    return;
  }
  if (0xf < bVar4) {
    (moby->pos).x = (moby->pos).x + (float)puVar10[8];
    (moby->pos).y = (moby->pos).y + (float)puVar10[9];
    (moby->pos).z = (moby->pos).z + (float)puVar10[10];
    Delt(g_FrameTime * -10.0,g_FrameTimeSq * 10.8,(float *)(puVar10 + 10));
    iVar21 = puVar10[0x74];
    if (iVar21 != 0) {
      *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
      iVar21 = puVar10[0x74];
      *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
      if ((((MobyInstance *)puVar10[0x74])->field43_0x70 & 2U) != 0) {
        DeleteMoby((MobyInstance *)puVar10[0x74]);
        puVar10[0x74] = 0;
      }
    }
    fVar12 = (moby->pos).z;
    uVar23 = (int)fVar12 >> 0x1f;
    if (0x411fffff < (int)((uVar23 >> 1 ^ (uint)fVar12) - uVar23)) {
      return;
    }
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar18,uVar26 + 0x20,local_170,&DAT_0034ebd0,1,5,2,4);
    DeleteMoby((MobyInstance *)puVar10[0x73]);
    DeleteMoby(moby);
    return;
  }
  iVar21 = puVar10[0x76];
  fVar7 = (moby->pos).y;
  fVar8 = (moby->pos).x;
  fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
  fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
  if ((SQRT(fVar9 * fVar9 + fVar3 * fVar3) <= 14.0) &&
     (ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z) <= 4.0)) {
    dVar32 = (double)(moby->rotation).z;
    dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                  (double)(*(float *)(iVar21 + 0x14) - fVar7));
    dVar31 = (double)FastSubRots((float)dVar32,(float)dVar31);
    if (dVar31 <= 1.0471975803375244) goto LAB_00350390;
  }
  moby->state = '\x0e';
  if (moby->animationId != '\f') {
    MB_SetAnimation(lVar18,0xc,0,6);
  }
LAB_00350390:
  dVar31 = (double)BlendAnimFrame(moby);
  if (dVar31 <= 1.0) {
    GetBonePosition(puVar10[0x73],0,local_190);
    iVar21 = puVar10[0x76];
    puVar10[0x68] = *(undefined4 *)(iVar21 + 0x10);
    puVar10[0x69] = *(undefined4 *)(iVar21 + 0x14);
    puVar10[0x6a] = *(undefined4 *)(iVar21 + 0x18);
    puVar10[0x6b] = *(undefined4 *)(iVar21 + 0x1c);
    uVar28 = 0x3fd0000000000000;
    FUN_005e84c0((double)(DAT_00840114 * g_FrameTime),auStack_180,local_1a0);
    FUN_003bbc08(uVar28,auStack_180,local_190,lVar18,(int)(animationSpeed * 180.5));
  }
  return;
}



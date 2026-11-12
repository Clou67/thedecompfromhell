// game/update/moby1215.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x207ff4-0x20ab50
#include <stdlib.h>
#include "game/update/moby1215.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1017.h"
#include "game/update/moby1218.h"
#include "game/update/moby1241.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0207ff4 (0x14 bytes)
void M1215_00207ff4(void)

{
  DAT_00766930 = 0x10000;
  return;
}


// 0x0208018 (0x2a8 bytes)
void M1215_00208018(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (param_1->state != '\x05') {
    iVar5 = MB_damage(param_1,0x330000,0);
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    pfVar7 = (float *)param_3;
    if ((0 < iVar6) && (iVar6 < 3)) {
      *pfVar7 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar2 = (int)*pfVar7 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
      iVar6 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x208008);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
        *(undefined2 *)(iVar6 + 0x26) = uVar4;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        local_40 = *(float *)(iVar5 + 0x10);
        local_38 = SQRT(*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar5 + 0x14) * local_38;
          local_38 = *(float *)(iVar5 + 0x18) * local_38;
        }
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
        MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar7 = 0.0;
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x05';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x02082e8 (0x58c bytes)
// inlined: FastAtan2 @0x208410, FastAtan2 @0x2085f8
bool M1215_002082e8
               (double param_1,int param_2,float *param_3,float *param_4,undefined8 param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f25;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x140;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x2a] = in_LR;
  puVar7[0x21] = in_f25;
  puVar7[0x22] = in_f26;
  puVar7[0x23] = in_f27;
  puVar7[0x24] = in_f28;
  puVar7[0x25] = in_f29;
  puVar7[0x26] = in_f30;
  puVar7[0x27] = in_f31;
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  dVar28 = (double)fVar1;
  fVar5 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar27 = (double)fVar5;
  puVar7[0x1c] = unaff_r27;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar5;
  puVar7[0x1e] = unaff_r29;
  dVar26 = (double)param_4[2];
  puVar7[0x1d] = unaff_r28;
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar28) - ABS(dVar27));
  dVar23 = 0.0;
  dVar24 = (double)*(float *)(param_2 + 0x18);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar21 = ABS(dVar27);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar22 = ABS(dVar28);
  }
  dVar25 = 0.7853981852531433;
  puVar7[0x1b] = unaff_r26;
  puVar7[0x1a] = unaff_r25;
  dVar20 = dVar23;
  pfVar16 = param_3;
  if (0.0 < dVar21) {
    lVar12 = uVar11 - 0x130;
    lVar17 = uVar11 - 0x88;
    lVar15 = uVar11 - 0x98;
    lVar19 = 2;
    fVar2 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0xb4) = fVar2;
    *(float *)((int)puVar7 + 0xac) = fVar2;
    *(float *)(puVar7 + 0x16) = fVar2;
    *(float *)(puVar7 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar3;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar2;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar2 * fVar2;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar11 - 0x98;
    pfVar16 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar15 = lVar17;
    do {
      fVar2 = *pfVar16;
      fVar3 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar12 = lVar13;
    dVar21 = dVar23;
    do {
      iVar8 = (int)lVar12;
      iVar9 = (int)lVar17;
      lVar12 = lVar12 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0xa8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar20 = (double)((float)(dVar21 + 0.7853981852531433) * fVar5 + fVar1);
  }
  OrganicDeltAngSpeed
            (dVar20,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
             (double)(g_FrameTime * 2.0943952),param_2,pfVar16,param_3 + 0x22);
  fVar3 = g_FrameTimeSq;
  fVar2 = g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x44);
  dVar22 = ABS((double)(float)(dVar26 - dVar24));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar26 - dVar24);
  fVar5 = SQRT((float)(dVar28 * dVar28 + (double)(float)(dVar27 * dVar27)));
  dVar24 = ABS((double)fVar5);
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)(puVar7 + 0xf) = (float)(dVar24 - dVar22);
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  uVar14 = uVar18 << 2 | 0x735900;
  dVar21 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar23 < 0.0) {
    dVar21 = dVar22;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar5 = *(float *)((int)uVar14 + 4);
  dVar26 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar23 < 0.0) {
    dVar26 = dVar24;
  }
  if (dVar23 < dVar21) {
    lVar12 = uVar11 - 0x130;
    lVar17 = uVar11 - 0xa8;
    lVar15 = uVar11 - 0xb8;
    lVar19 = 2;
    fVar4 = (float)(dVar26 - dVar21) / (float)(dVar26 + dVar21);
    fVar10 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x94) = fVar4;
    *(float *)((int)puVar7 + 0x8c) = fVar4;
    *(float *)(puVar7 + 0x12) = fVar4;
    *(float *)(puVar7 + 0x11) = fVar4;
    fVar4 = fVar10 * fVar10;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar10;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar4;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar4 * fVar10;
    do {
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar11 - 0xb8;
    uVar14 = ZEXT48(&DAT_007358e0);
    lVar12 = lVar13;
    lVar15 = lVar17;
    do {
      pfVar16 = (float *)uVar14;
      fVar4 = pfVar16[1];
      uVar14 = uVar14 + 8;
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * *pfVar16;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar12 = 2;
    do {
      iVar8 = (int)lVar13;
      iVar9 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar23 = (double)((float)(dVar23 + dVar25) * fVar6 + fVar5);
  }
  dVar21 = (double)MB_DeltAngSpeed
                             ((double)fVar1,-dVar23,(double)(fVar3 * 3.1415927),
                              (double)(fVar3 * 0.87266463),(double)(fVar2 * 3.1415927),0x210000,
                              uVar14,param_3 + 0x21);
  *(float *)(param_2 + 0x44) = (float)dVar21;
  fVar1 = *(float *)(param_2 + 0x40) +
          -(param_3[0x22] * (1.5707964 - ABS(*(float *)(param_2 + 0x40))) * 0.63661975);
  if (1.5707964 - fVar1 < 0.0) {
    fVar1 = 1.5707964;
  }
  if (fVar1 - -1.5707964 < 0.0) {
    fVar1 = -1.5707964;
  }
  *(float *)(param_2 + 0x40) = fVar1 * 0.98;
  MB_WrapRot(fVar1 * 0.98);
  MB_SphericalToVector
            (param_3[0x28],*(float *)(param_2 + 0x48),-*(float *)(param_2 + 0x44),param_3 + 0x1c);
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_3[0x1c];
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + param_3[0x1d];
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + param_3[0x1e];
  STUB_00065468(param_2 + 0x10,param_4);
  STUB_00065468(param_2 + 0x10,param_6);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar5 = *(float *)(param_2 + 0x10) - *param_4;
  return (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1) < param_1;
}


// 0x02088c0 (0xa30 bytes)
// inlined: FastAtan2 @0x208a90, FastAtan2 @0x208c68, FastRSqrt @0x208ed4, FastAtan2 @0x209040
// strings: 00208880: '=VwP' (raw)

bool M1215_002088c0(double param_1,int param_2,int param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar19;
  longlong lVar18;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x180;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x32] = in_LR;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  puVar12[0x21] = unaff_r24;
  fVar3 = param_4[2];
  puVar12[0x20] = unaff_r23;
  puVar12[0x28] = unaff_r31;
  puVar12[0x27] = unaff_r30;
  puVar12[0x26] = unaff_r29;
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_3 + 0xa0);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar8 = *(float *)(param_3 + 0x74);
  puVar12[0x25] = unaff_r28;
  puVar12[0x24] = unaff_r27;
  puVar12[0x23] = unaff_r26;
  puVar12[0x22] = unaff_r25;
  if (fVar4 < fVar3 - 30.0) {
    fVar5 = fVar5 * 0.5;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar3 = g_FrameTimeSq;
  *(float *)(puVar12 + 0xe) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8);
  dVar29 = 45.0;
  Delt(fVar6,fVar3 * 45.0,(float *)(puVar12 + 0xe));
  dVar25 = (double)FastWrapRot
                             (*(float *)(param_3 + 0xa4),g_FrameTime * 0.05235988);
  *(float *)(param_3 + 0xa4) = (float)dVar25;
  fVar3 = *param_4 - *(float *)(param_2 + 0x10);
  fVar4 = param_4[1] - *(float *)(param_2 + 0x14);
  *(float *)((int)puVar12 + 0x8c) = fVar3;
  *(float *)(puVar12 + 0x12) = fVar4;
  dVar31 = (double)(param_4[2] - *(float *)(param_2 + 0x18));
  dVar28 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)((int)puVar12 + 0x94) = ABS(fVar3) - ABS(fVar4);
  fVar7 = g_FrameTimeSq;
  fVar6 = g_FrameTime;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
  uVar17 = uVar20 << 2;
  fVar5 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar5 = ABS(fVar4);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar17);
  fVar8 = ABS(*(float *)(puVar12 + 0x12));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar30 = 0.7853981852531433;
  dVar26 = dVar25;
  if (0.0 < fVar5) {
    lVar18 = uVar16 - 0x170;
    lVar23 = uVar16 - 0x98;
    lVar21 = uVar16 - 0xa8;
    lVar24 = 2;
    fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
    fVar8 = fVar5 * fVar5;
    *(float *)(puVar12 + 0x1b) = fVar5;
    *(float *)((int)puVar12 + 0xdc) = fVar5;
    *(float *)(puVar12 + 0x1c) = fVar5;
    *(float *)((int)puVar12 + 0xe4) = fVar5;
    fVar5 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar8;
    *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar5;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar5 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 200) * fVar5 * fVar5;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 0xa8;
    uVar17 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar17;
      fVar5 = pfVar22[1];
      uVar17 = uVar17 + 8;
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 0xd8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0xd8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar32 = 1.5707963705062866;
  OrganicDeltAngSpeed
            (dVar26,(double)(fVar7 * 1.5707964),(double)(fVar7 * 0.34906584),
             (double)(fVar6 * 1.5707964),param_2,uVar17,param_3 + 0x88);
  *(float *)((int)puVar12 + 0x84) = (float)dVar31;
  fVar4 = g_FrameTime;
  fVar3 = *(float *)(param_2 + 0x44);
  dVar26 = (double)g_FrameTimeSq;
  dVar27 = ABS((double)(float)SQRT(dVar28));
  *(float *)(puVar12 + 0x10) = (float)SQRT(dVar28);
  *(float *)(puVar12 + 0x11) = (float)(dVar27 - ABS(dVar31));
  uVar17 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  uVar20 = uVar17 << 2 | 0x735900;
  lVar18 = uVar17 << 2;
  dVar28 = ABS((double)*(float *)(puVar12 + 0x10));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar18);
  dVar31 = ABS((double)*(float *)((int)puVar12 + 0x84));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar31 = dVar27;
  }
  fVar6 = *(float *)((int)uVar20 + 4);
  dVar27 = dVar25;
  if (dVar25 < dVar28) {
    lVar18 = uVar16 - 0x170;
    lVar23 = uVar16 - 0xb8;
    lVar21 = uVar16 - 200;
    lVar24 = 2;
    fVar7 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar12 + 0x17) = fVar7;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)(puVar12 + 0x18) = fVar7;
    *(float *)((int)puVar12 + 0xc4) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar8;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar7;
    *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xa8) * fVar7 * fVar7;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar7 * fVar7;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 200;
    uVar20 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar20;
      fVar7 = pfVar22[1];
      uVar20 = uVar20 + 8;
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xb8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    dVar31 = dVar25;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar9 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar27 = (double)((float)(dVar31 + dVar30) * fVar5 + fVar6);
  }
  dVar31 = (double)MB_DeltAngSpeed
                             ((double)fVar3,-dVar27,(double)(float)(dVar26 * dVar32),
                              (double)(float)(dVar26 * 0.5235987901687622),
                              (double)(fVar4 * 1.9198622),lVar18,uVar20,param_3 + 0x84);
  *(float *)(param_2 + 0x44) = (float)dVar31;
  dVar31 = (double)(float)((double)*(float *)(param_2 + 0x40) +
                          -(double)(*(float *)(param_3 + 0x88) *
                                   (float)(dVar32 - ABS((double)*(float *)(param_2 + 0x40))) *
                                   0.63661975));
  if (dVar32 - dVar31 < 0.0) {
    dVar31 = dVar32;
  }
  if (dVar31 - -1.5707963705062866 < 0.0) {
    dVar31 = -1.5707963705062866;
  }
  *(float *)(param_2 + 0x40) = (float)(dVar31 * 0.9800000190734863);
  MB_WrapRot((float)(dVar31 * 0.9800000190734863));
  MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),*(float *)(param_2 + 0x48),-*(float *)(param_2 + 0x44),
             (float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_2 + 0x48);
  for (iVar9 = MobyUpdateChainStart; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
    uVar19 = 0;
    if (*(int *)(iVar9 + 0x24) != 0) {
      uVar19 = *(ushort *)(*(int *)(iVar9 + 0x24) + 0x46);
    }
    if (((iVar9 != param_2) && (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) &&
       (((uVar19 & 0xff) == 5 || ((uVar19 & 0xff) == 0xd)))) {
      fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
      fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
      fVar7 = *(float *)(iVar9 + 0x18) - *(float *)(param_2 + 0x18);
      uVar10 = (int)*(uint *)(iVar9 + 0x18) >> 0x1f;
      uVar11 = (int)*(uint *)(param_2 + 0x18) >> 0x1f;
      bVar2 = (int)((uVar11 >> 1 ^ *(uint *)(param_2 + 0x18)) - uVar11) <=
              (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x18)) - uVar10);
      fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
      dVar27 = (double)SQRT(fVar6);
      dVar31 = dVar25;
      dVar28 = dVar25;
      dVar26 = dVar25;
      if (dVar27 != dVar25) {
        fVar8 = 1.0 / SQRT(fVar6);
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        dVar26 = (double)(fVar5 * fVar8);
        dVar31 = (double)(fVar4 * fVar8);
        dVar28 = (double)(fVar7 * fVar8);
      }
      fVar4 = *(float *)(param_3 + 0x74);
      fVar5 = *(float *)(param_3 + 0x70);
      fVar6 = *(float *)(param_3 + 0x78);
      dVar32 = 2.094395160675049;
      dVar31 = (double)(float)(dVar27 / (double)(float)((double)fVar6 * dVar28 +
                                                       (double)(float)((double)fVar5 * dVar26 +
                                                                      (double)(float)((double)fVar4
                                                                                     * dVar31))));
      if ((dVar31 <= dVar25) || (100.0 <= dVar31)) {
        if (dVar27 < 15.0) {
          if (bVar2) {
            fVar7 = g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
          }
          else {
            fVar7 = -(g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
          }
          *(float *)(param_2 + 0x44) = fVar7;
          *(float *)(param_3 + 0x70) = (float)((double)fVar5 * 1.2000000476837158);
          *(float *)(param_3 + 0x74) = (float)((double)fVar4 * 1.2000000476837158);
          *(float *)(param_3 + 0x78) = (float)((double)fVar6 * 1.2000000476837158);
        }
      }
      else if (ABS(*(float *)(param_2 + 0x18) - *(float *)(iVar9 + 0x18)) < 10.0) {
        if (bVar2) {
          fVar4 = g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
        }
        else {
          fVar4 = -(g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
        }
        *(float *)(param_2 + 0x44) = fVar4;
        fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
        fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
        dVar28 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar4);
        *(float *)((int)puVar12 + 0x74) = fVar5;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = (float)(dVar28 - dVar26);
        uVar17 = (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1d) & 4;
        dVar31 = ABS((double)*(float *)((int)puVar12 + 0x74));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar31 = dVar26;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar26 = ABS((double)*(float *)(puVar12 + 0xf));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar26 = dVar28;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar28 = dVar25;
        if (dVar25 < dVar31) {
          lVar18 = uVar16 - 0x170;
          lVar23 = uVar16 - 0xd8;
          lVar21 = uVar16 - 0xe8;
          lVar24 = 2;
          fVar6 = (float)(dVar26 - dVar31) / (float)(dVar26 + dVar31);
          fVar7 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x13) = fVar6;
          *(float *)((int)puVar12 + 0x9c) = fVar6;
          *(float *)(puVar12 + 0x14) = fVar6;
          *(float *)((int)puVar12 + 0xa4) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar7;
          *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar6;
          *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x88) * fVar6 * fVar6;
            iVar13 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar23 = uVar16 - 0xe8;
          pfVar22 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar21 = lVar23;
          do {
            fVar6 = *pfVar22;
            fVar7 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x98) * fVar6;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
            lVar21 = lVar21 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = 2;
          lVar18 = lVar1;
          dVar31 = dVar25;
          do {
            iVar13 = (int)lVar18;
            iVar14 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar31 + dVar30) * fVar4 + fVar5);
        }
        dVar31 = (double)FastSubRots(fVar3,(float)dVar28);
        if (dVar25 <= dVar31) {
          fVar3 = -(float)((double)g_FrameTime * dVar32 -
                          (double)*(float *)(param_2 + 0x48));
        }
        else {
          fVar3 = (float)((double)g_FrameTime * dVar32 +
                         (double)*(float *)(param_2 + 0x48));
        }
        *(float *)(param_2 + 0x48) = fVar3;
      }
    }
  }
  MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),fVar3,-*(float *)(param_2 + 0x44),(float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_3 + 0x74);
  fVar4 = *(float *)(param_3 + 0x70);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_2 + 0x14);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar15 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((float)((double)g_FrameTime * dVar29) < fVar15) {
    fVar15 = (float)((double)g_FrameTime * dVar29) / fVar15;
    fVar4 = fVar4 * fVar15;
    fVar3 = fVar3 * fVar15;
    fVar5 = fVar5 * fVar15;
    *(float *)(param_3 + 0x70) = fVar4;
    *(float *)(param_3 + 0x74) = fVar3;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar6 = fVar6 + fVar4;
  fVar7 = fVar7 + fVar3;
  *(float *)(param_2 + 0x10) = fVar6;
  *(float *)(param_2 + 0x14) = fVar7;
  *(float *)(param_2 + 0x18) = fVar8 + fVar5;
  fVar7 = fVar7 - param_4[1];
  fVar6 = fVar6 - *param_4;
  return (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7) < param_1;
}


// 0x0209300 (0x140 bytes)
void M1215_00209300
               (int param_1,int param_2,int param_3,float *param_4,int param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = -0.5;
  FastWrapRot(*(float *)(param_5 + 0x48),*(float *)(param_3 + 0x6c) * -0.5);
  FastWrapRot
            (*(float *)(param_5 + 0x44),(float)((double)*(float *)(param_3 + 0x70) * dVar3));
  *param_6 = *param_4;
  param_6[1] = param_4[1];
  param_6[2] = param_4[2];
  param_6[3] = param_4[3];
  MB_AddVectorSphere(param_6,param_6);
  fVar1 = *(float *)(param_1 + 0x14) - param_6[1];
  fVar2 = *(float *)(param_1 + 0x10) - *param_6;
  if ((20.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) && (*(char *)(param_1 + 0x31) != '\0')) {
    *(float *)(param_2 + 0xa0) = g_FrameTime * 20.0;
  }
  return;
}


// 0x0209508 (0x1634 bytes)
/* Moby 1215 */

void UpdateMoby_1215(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  f32 fVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
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
  GPiece<16> local_150;
  GPiece<32> local_140;
  float local_120 [4];
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<32> local_f0;
  
  if (moby != (MobyInstance *)0x0) {
    pvVar12 = moby->pVar;
    uVar21 = ZEXT48(pvVar12);
    if (pvVar12 != (void *)0x0) {
      SetColorOfMoby(moby,0x80,0x80,0x80);
      M1215_00208018(moby,uVar21,uVar21 + 0x20);
      iVar17 = DAT_0096b2d0;
      pMVar20 = (MobyInstance *)0x0;
      pfVar19 = (float *)0x0;
      if (((*(int *)((int)pvVar12 + 0x90) == -1) ||
          (pMVar20 = g_MobyInstance + *(int *)((int)pvVar12 + 0x90), pMVar20 == (MobyInstance *)0x0))
         || (pMVar20->state == 0xfd || pMVar20->state == 0xfe)) {
        fVar4 = *(float *)((int)pvVar12 + 0xbc);
        fVar5 = (g_heroPosition.x + 256.0) * 0.5;
        fVar6 = (g_heroPosition.y + 256.0) * 0.5;
        fVar7 = g_heroPosition.w;
      }
      else {
        fVar4 = (pMVar20->pos).z;
        fVar5 = (pMVar20->pos).x;
        fVar6 = (pMVar20->pos).y;
        fVar7 = (pMVar20->pos).w;
        *(float *)((int)pvVar12 + 0xbc) = fVar4;
      }
      fVar10 = g_heroPosition.z;
      fVar9 = g_heroPosition.y;
      fVar8 = g_heroPosition.x;
      dVar34 = (double)fVar5;
      dVar33 = (double)fVar6;
      dVar32 = (double)fVar4;
      dVar31 = (double)fVar7;
      if (iVar17 == 0) {
        uVar18 = (int)moby - (int)g_MobyInstance;
        dVar27 = (double)FastIntToDouble
                                   (((int)uVar18 >> 8) +
                                    (uint)((int)uVar18 < 0 && (uVar18 & 0xff) != 0) +
                                    worldUpdateTime / (int)(animationSpeed * 600.5));
        MB_WrapRot((float)(dVar27 * 0.800000011920929));
      }
      else {
        fVar8 = *(float *)(DAT_0096b2d0 + 0x10);
        fVar9 = *(float *)(DAT_0096b2d0 + 0x14);
        fVar10 = *(float *)(DAT_0096b2d0 + 0x18);
      }
      dVar27 = 50.0;
      bVar15 = false;
      fVar7 = (float)((double)(moby->pos).y - (double)fVar9);
      fVar1 = (float)((double)(moby->pos).x - (double)fVar8);
      if (((g_heroState == TURRET_PLANE_UI) && (iVar17 != 0)) &&
         ((*(char *)(iVar17 + 0x20) != -3 && *(char *)(iVar17 + 0x20) != -2 &&
          ((*(short *)(iVar17 + 0xa6) == 0x4da &&
           (SQRT(fVar1 * fVar1 + fVar7 * fVar7) < *(float *)((int)pvVar12 + 0x98))))))) {
        bVar15 = true;
      }
      fVar7 = (float)((double)fVar9 - dVar33);
      fVar1 = (float)((double)fVar8 - dVar34);
      fVar11 = *(float *)((int)pvVar12 + 0x94);
      if (iVar17 != 0) {
        pfVar19 = *(float **)(iVar17 + 0x78);
      }
      SetColorOfMoby(moby,0,0xff,0);
      iVar16 = 0;
      if (moby->enabled == '\0') {
        iVar16 = *(int *)((int)pvVar12 + 0xa8) + 1;
      }
      *(int *)((int)pvVar12 + 0xa8) = iVar16;
      uVar2 = moby->state;
      if (uVar2 == '\x06') {
        if ((pfVar19 != (float *)0x0) &&
           (iVar17 = FastDecTimerS32(uVar21 + 0xb8), iVar17 != 0)) {
          fVar5 = pfVar19[4];
          fVar6 = 0.0;
          fVar7 = SQRT(pfVar19[6] * pfVar19[6] + fVar5 * fVar5 + pfVar19[5] * pfVar19[5]);
          if (fVar7 == 0.0) {
            (moby->pos).x = fVar5;
            (moby->pos).y = pfVar19[5];
            (moby->pos).z = pfVar19[6];
            fVar5 = pfVar19[7];
            fVar7 = fVar6;
            fVar4 = fVar6;
          }
          else {
            fVar7 = -30.0 / fVar7;
            fVar6 = fVar5 * fVar7;
            (moby->pos).x = fVar6;
            fVar4 = pfVar19[5] * fVar7;
            (moby->pos).y = fVar4;
            fVar7 = pfVar19[6] * fVar7;
            (moby->pos).z = fVar7;
            fVar5 = pfVar19[7];
          }
          (moby->pos).w = fVar5;
          auVar35 = ZEXT416(0xfffffff0);
          (moby->pos).x = fVar6 + fVar8;
          (moby->pos).y = fVar4 + fVar9;
          (moby->pos).z = fVar7 + fVar10;
          auVar36 = loadVectorLeftIndexed(0x24,uVar21);
          auVar37 = loadVectorRightIndexed(0x34,uVar21);
          auVar35 = vectorShiftRightAlgebraicWord
                              (auVar36 | auVar37,
                               auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                              uVar21);
          *(undefined4 *)((int)pvVar12 + 0x20U & 0xfffffffc) = uVar14;
          moby->state = '\0';
        }
      }
      else if (uVar2 == '\x05') {
        MB_genericExplosion
                  (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
                   0x4034000000000000,moby,local_100,0,1,0xffffffffffffffff,5,3,10);
        iVar17 = rand();
        iVar17 = iVar17 % 10;
        if (iVar17 < 1) {
          if (-1 < iVar17) {
            M1215_0020ab50(local_f0,local_100,0x4c4);
          }
        }
        else if (iVar17 < 7) {
          M1215_0020ab50(local_f0,local_100,0x4c2);
        }
        else if (iVar17 < 10) {
          FUN_0021b5e8(local_f0,local_100,0x4d9);
        }
        if ((pMVar20 == (MobyInstance *)0x0) || (pMVar20->state == 0xfd || pMVar20->state == 0xfe))
        {
          DeleteMoby(moby);
          return;
        }
        moby->collision = (ushort *)0x0;
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        auVar35 = loadVectorLeftIndexed(4,0x209440);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xb8,
                            uVar21);
        *(undefined4 *)((int)pvVar12 + 0xb8U & 0xfffffffc) = uVar14;
        moby->state = '\x06';
      }
      else if (uVar2 == '\x04') {
        iVar17 = M1215_002088c0
                           (0x403e000000000000,moby,uVar21,local_140,&DAT_00209440,local_150);
        if (iVar17 != 0) {
          moby->state = '\x03';
        }
        if ((int)(animationSpeed * 100.5) < *(int *)((int)pvVar12 + 0xa8)) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          moby->state = '\x01';
        }
      }
      else if (uVar2 == '\x03') {
        iVar17 = M1215_002088c0
                           ((double)*(float *)((int)pvVar12 + 0x94),moby,uVar21,local_140);
        if (iVar17 != 0) {
          if ((int)(animationSpeed * 70.5) < *(int *)((int)pvVar12 + 0xa8)) {
            moby->collision = (ushort *)0x0;
            moby->state = '\x01';
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          }
          else {
            moby->state = '\x04';
          }
        }
      }
      else if (uVar2 == '\x02') {
        iVar16 = M1215_002088c0
                           (0x403e000000000000,moby,uVar21,local_140,&DAT_00209440,local_150);
        if ((iVar16 == 0) && (pfVar19 != (float *)0x0)) {
          fVar9 = (moby->pos).y - fVar9;
          fVar8 = (moby->pos).x - fVar8;
          dVar31 = (double)SQRT(fVar8 * fVar8 + fVar9 * fVar9);
          if ((dVar31 <= 20.0) || (moby->enabled == '\0')) {
            auVar35 = ZEXT416(0xffffffff);
            auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = loadVectorLeftIndexed(100,0x209440);
            auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                         auVar35 << 0x60,auVar36);
            auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
            auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar14 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                                uVar21);
            *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
            dVar31 = (double)MB_randRangeFloat(-0.7853982,3.926991);
            *(float *)((int)pvVar12 + 0xb0) = (float)dVar31;
            *(undefined4 *)((int)pvVar12 + 0xac) = 0x3f800000;
          }
          else {
            bVar3 = moby->setByGroup;
            if (bVar3 == 0) {
              if (*(char *)(iVar17 + 0x20) == '\x04' && bVar15) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x6c,0x209440);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                *(undefined4 *)((int)pvVar12 + 0xa8) = 0;
                moby->setByGroup = '\x01';
              }
            }
            else if (bVar3 < 2) {
              if ((!bVar15 || moby->enabled == '\0') ||
                 ((int)(animationSpeed * 15.5) <= *(int *)((int)pvVar12 + 0xa8))) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(100,0x209440);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                moby->setByGroup = '\x02';
              }
              iVar17 = FastDecTimerS32(uVar21 + 0xb4);
              if (iVar17 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x74,0x209440);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0xb4,uVar21);
                *(undefined4 *)((int)pvVar12 + 0xb4U & 0xfffffffc) = uVar14;
                moby->setByGroup = '\x02';
              }
              iVar17 = FastDecTimerS32(uVar21 + 0x9c);
              if (iVar17 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                auVar35 = loadVectorLeftIndexed(0x78,0x209440);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint
                                    (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                             auVar35 << 0x60,auVar36);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar14 = storeVectorElementWordIndexed
                                   (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                                    0x9c,uVar21);
                *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
                dVar32 = 1.0;
                MB_RandomizeVector(0.6,local_120);
                FUN_00187e00(0x4059000000000000,
                             (double)(float)((double)g_FrameTime * dVar27),
                             0x4024000000000000,moby,local_120,local_110);
                uVar18 = (int)*(uint *)((int)pvVar12 + 0xb0) >> 0x1f;
                *(float *)((int)pvVar12 + 0xac) =
                     *(float *)((int)pvVar12 + 0xac) *
                     (float)((double)DAT_0071f408 * -0.06999999284744263 + dVar32);
                if ((int)((uVar18 >> 1 ^ *(uint *)((int)pvVar12 + 0xb0)) - uVar18) < 0x3fc90fdc) {
                  fVar5 = g_FrameTime * 0.5235988 + *(float *)((int)pvVar12 + 0xb0);
                }
                else {
                  fVar5 = -(g_FrameTime * 0.5235988 - *(float *)((int)pvVar12 + 0xb0));
                }
                *(float *)((int)pvVar12 + 0xb0) = fVar5;
              }
            }
            else if ((bVar3 < 3) && (iVar17 = FastDecTimerS32(uVar21 + 0xb4), iVar17 != 0)
                    ) {
              moby->setByGroup = '\0';
            }
            *(float *)((int)pvVar12 + 0xa0) =
                 SQRT(pfVar19[2] * pfVar19[2] + *pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]);
            if (dVar31 <= 22.0) {
              fVar5 = pfVar19[0x19] * 1.1;
            }
            else {
              fVar5 = pfVar19[0x19];
            }
            *(float *)((int)pvVar12 + 0xa0) = fVar5;
          }
        }
        else {
          moby->state = '\x04';
        }
      }
      else if (uVar2 == '\x01') {
        iVar16 = FastDecTimerS32(uVar21 + 0xb8);
        if ((((iVar16 != 0) && (pfVar19 != (float *)0x0)) &&
            (*(char *)(iVar17 + 0x20) == '\x04' && bVar15)) &&
           (fVar11 <= SQRT(fVar1 * fVar1 + fVar7 * fVar7) && pMVar20->enabled != '\0')) {
          fVar7 = pfVar19[4];
          dVar27 = 0.0;
          fVar1 = SQRT(pfVar19[6] * pfVar19[6] + fVar7 * fVar7 + pfVar19[5] * pfVar19[5]);
          if (fVar1 == 0.0) {
            (moby->pos).x = fVar7;
            (moby->pos).y = pfVar19[5];
            (moby->pos).z = pfVar19[6];
            fVar7 = pfVar19[7];
            dVar22 = dVar27;
            dVar24 = dVar27;
            dVar28 = dVar27;
          }
          else {
            fVar1 = -7.0 / fVar1;
            dVar24 = (double)(fVar7 * fVar1);
            (moby->pos).x = fVar7 * fVar1;
            dVar22 = (double)(pfVar19[5] * fVar1);
            (moby->pos).y = pfVar19[5] * fVar1;
            dVar28 = (double)(pfVar19[6] * fVar1);
            (moby->pos).z = pfVar19[6] * fVar1;
            fVar7 = pfVar19[7];
          }
          (moby->pos).w = fVar7;
          (moby->pos).x = (float)(dVar24 + (double)fVar8);
          (moby->pos).y = (float)(dVar22 + (double)fVar9);
          (moby->pos).z = (float)(dVar28 + (double)fVar10);
          dVar30 = (double)pfVar19[4];
          dVar29 = (double)pfVar19[5];
          fVar8 = (float)((double)pfVar19[6] * dVar30);
          fVar9 = (float)(dVar29 * (double)pfVar19[6]);
          fVar10 = -fVar9;
          dVar28 = -(double)(float)(dVar29 * dVar29);
          fVar7 = (float)(dVar30 * dVar30 - dVar28);
          fVar10 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + --(fVar8 * fVar8));
          fVar1 = 20.0 / fVar10;
          dVar24 = -(double)(fVar9 * fVar1);
          dVar22 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar22 = (double)(fVar7 * fVar1);
          }
          dVar25 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar25 = dVar24;
          }
          dVar26 = dVar27;
          if (0.0 - fVar10 < 0.0) {
            dVar26 = -(double)(fVar8 * fVar1);
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar22 = (double)(fVar7 * fVar1);
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar25 = dVar24;
          }
          if (fVar10 - 0.0 < 0.0) {
            dVar26 = -(double)(fVar8 * fVar1);
          }
          dVar24 = (double)MB_randRangeFloat(-14.0,14.0);
          fVar7 = (moby->pos).x;
          fVar8 = (moby->pos).y;
          fVar9 = (moby->pos).z;
          dVar23 = (double)SQRT((float)(dVar30 * dVar30 + -dVar28));
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          (moby->pos).z = (float)((double)fVar9 + dVar22);
          dVar28 = (double)(float)(dVar30 * (double)(float)(dVar24 / dVar23));
          dVar24 = -(double)(float)(dVar29 * (double)(float)(dVar24 / dVar23));
          dVar22 = dVar27;
          if (dVar27 - dVar23 < 0.0) {
            dVar22 = dVar28;
          }
          dVar29 = dVar27;
          if (dVar27 - dVar23 < 0.0) {
            dVar29 = dVar24;
          }
          if (dVar23 - dVar27 < 0.0) {
            dVar22 = dVar28;
          }
          if (dVar23 - dVar27 < 0.0) {
            dVar29 = dVar24;
          }
          (moby->pos).y = (float)((double)(float)((double)fVar8 + dVar25) + dVar22);
          (moby->pos).x = (float)((double)(float)((double)fVar7 + dVar26) + dVar29);
          *(float *)((int)pvVar12 + 0xa0) = g_FrameTime * 40.0;
          dVar29 = (double)(fVar5 - (moby->pos).x);
          dVar28 = (double)(fVar6 - (moby->pos).y);
          dVar24 = (double)(fVar4 - (moby->pos).z);
          dVar22 = (double)FUN_005e8338(dVar29,dVar28);
          (moby->rotation).z = (float)dVar22;
          dVar22 = (double)FUN_005e8338((double)SQRT((float)(dVar29 * dVar29 +
                                                            (double)(float)(dVar28 * dVar28))),
                                        dVar24);
          (moby->rotation).y = (float)-dVar22;
          dVar22 = (double)MB_randRangeFloat(-1.0471976,1.0471976);
          (moby->rotation).x = (float)dVar22;
          fVar6 = (float)(dVar34 - (double)(moby->pos).x);
          *(float *)((int)pvVar12 + 0x70) = fVar6;
          fVar7 = (float)dVar33 - (moby->pos).y;
          *(float *)((int)pvVar12 + 0x74) = fVar7;
          fVar4 = (float)dVar32 - (moby->pos).z;
          *(float *)((int)pvVar12 + 0x78) = fVar4;
          dVar32 = (double)SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
          *(float *)((int)pvVar12 + 0x7c) = (float)dVar31;
          fVar5 = (float)((double)*(float *)((int)pvVar12 + 0xa0) / dVar32);
          dVar31 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar31 = (double)(fVar6 * fVar5);
          }
          dVar33 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          dVar34 = dVar27;
          if (dVar27 - dVar32 < 0.0) {
            dVar34 = (double)(fVar4 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar31 = (double)(fVar6 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          if (dVar32 - dVar27 < 0.0) {
            dVar34 = (double)(fVar4 * fVar5);
          }
          *(float *)((int)pvVar12 + 0x70) = (float)dVar31;
          *(float *)((int)pvVar12 + 0x74) = (float)dVar33;
          *(float *)((int)pvVar12 + 0x78) = (float)dVar34;
          M1215_002088c0
                    ((double)*(float *)((int)pvVar12 + 0x94),moby,uVar21,local_140);
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(100,0x209440);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                              uVar21);
          *(undefined4 *)((int)pvVar12 + 0x9cU & 0xfffffffc) = uVar14;
          *(undefined4 *)((int)pvVar12 + 0xac) = 0x3f800000;
          moby->state = '\x02';
        }
      }
      else if (uVar2 == '\0') {
        dVar31 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
        *(float *)((int)pvVar12 + 0xa4) = (float)dVar31;
        moby->collision = (ushort *)0x0;
        moby->state = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      fVar13 = (moby->pos).x;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar5 = 20.0;
      fVar6 = (moby->pos).x;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).x = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).x = 1003.0;
      }
      fVar13 = (moby->pos).y;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar6 = (moby->pos).y;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).y = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).y = 1003.0;
      }
      fVar13 = (moby->pos).z;
      uVar18 = (int)fVar13 >> 0x1f;
      fVar6 = (moby->pos).z;
      if ((int)((uVar18 >> 1 ^ (uint)fVar13) - uVar18) < 0x41a00000) {
        (moby->pos).z = 20.0;
        fVar6 = fVar5;
      }
      if (1003.0 < fVar6) {
        (moby->pos).z = 1003.0;
      }
      MB_RegisterLameShadow(3.0,moby);
    }
  }
  return;
}


// 0x020ab3c (0x14 bytes)
void M1220_0020ab3c(void)

{
  DAT_007669a0 = 0x10000;
  return;
}



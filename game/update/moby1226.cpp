// game/update/moby1226.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x20ea6c-0x210c3c
#include "game/update/moby1226.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1230.h"
#include "game/update/moby1231.h"
#include "game/update/moby491.h"
#include "game/update/moby78.h"
#include "idol/fastfunc.h"

// 0x020ea6c (0x14 bytes)
void M1226_0020ea6c(void)

{
  DAT_007683ec = 0x10000;
  return;
}


// 0x020ea80 (0x150 bytes)
undefined8 M1226_0020ea80(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  ushort *puVar11;
  MobyInstance *pMVar12;
  
  iVar10 = *(int *)(*(int *)(param_1 + 0x78) + 0x128);
  if (iVar10 == -1) {
    uVar9 = 0;
  }
  else {
    pMVar12 = g_MobyInstance + iVar10;
    iVar10 = FUN_0021416c(pMVar12);
    if (iVar10 == 0) {
      if (*(byte *)(param_1 + 0x21) == 0xff) {
        uVar9 = 1;
      }
      else {
        fVar1 = (pMVar12->pos).y;
        fVar4 = *(float *)(param_1 + 0x14) - fVar1;
        fVar2 = (pMVar12->pos).x;
        fVar6 = *(float *)(param_1 + 0x10) - fVar2;
        puVar11 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
        if (puVar11 == (ushort *)0x0) {
          uVar9 = 1;
        }
        else {
          do {
            uVar8 = *puVar11 & 0x7fff;
            if (g_MobyInstance[uVar8].state == '\x06') {
              return 0;
            }
            if ((g_MobyInstance[uVar8].setByGroup == '\x01') &&
               (fVar5 = g_MobyInstance[uVar8].pos.y - fVar1, fVar7 = g_MobyInstance[uVar8].pos.x - fVar2
               , SQRT(fVar7 * fVar7 + fVar5 * fVar5) < SQRT(fVar6 * fVar6 + fVar4 * fVar4))) {
              return 0;
            }
            uVar3 = *puVar11;
            puVar11 = puVar11 + 1;
          } while (-1 < (short)uVar3);
          uVar9 = 1;
        }
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}


// 0x020ebd8 (0x15c bytes)
void M1226_0020ebd8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined8 in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if (*(int *)(uVar2 + 0x128) != -1) {
    iVar4 = FUN_0021416c(g_MobyInstance + *(int *)(uVar2 + 0x128));
    if (iVar4 != 0) {
      M1230_00213dd8(g_MobyInstance + *(int *)(uVar2 + 0x128),600);
    }
  }
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar6 = loadVectorLeftIndexed(in_LR,0x20ebd0);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x158,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x158 & 0xfffffffc) = uVar3;
  }
  else {
    puVar5 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar5 != (ushort *)0x0) {
      auVar6 = loadVectorLeftIndexed(in_LR,0x20ebd0);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      do {
        if (g_MobyInstance[*puVar5 & 0x7fff].state < 0x80) {
          auVar7 = ZEXT416(0xffffffff);
          auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
          auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
          auVar7 = vectorMultiplyAddFloatingPoint
                             (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,
                              auVar7);
          auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
          auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar3 = storeVectorElementWordIndexed
                            (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x158,
                             ZEXT48(g_MobyInstance[*puVar5 & 0x7fff].pVar));
          *(undefined4 *)((int)g_MobyInstance[*puVar5 & 0x7fff].pVar + 0x158U & 0xfffffffc) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x020ed70 (0x59c bytes)
// inlined: FastAtan2 @0x20ee74, FastAtan2 @0x20f05c
bool M1226_0020ed70
               (double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x110;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar13;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1e] = unaff_r31;
  fVar1 = *param_4;
  puVar7[0x1d] = unaff_r30;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_2 + 0x14);
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  puVar7[0x1b] = unaff_r28;
  fVar2 = fVar2 - fVar3;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar7 + 0x8c) = fVar1;
  puVar7[0x1c] = unaff_r29;
  *(float *)(puVar7 + 0x12) = fVar2;
  iVar6 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar7 + 0x94) = fVar4 - fVar3;
  dVar24 = 0.0;
  uVar19 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x8c));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar5 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  dVar25 = 0.7853981852531433;
  dVar21 = dVar24;
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x100;
    lVar17 = uVar13 - 0x48;
    lVar16 = uVar13 - 0x58;
    lVar20 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar1;
    *(float *)((int)puVar7 + 0xbc) = fVar1;
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)(puVar7 + 0x17) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar1;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar1 * fVar1;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar17 = uVar13 - 0x58;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar1 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    do {
      iVar8 = (int)lVar14;
      iVar9 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0xb8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar2);
  }
  OrganicDeltAng
            ((float)dVar21,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
             g_FrameTime * 6.2831855,(float *)(param_2 + 0x48),0x20ed34,
             (float *)(iVar6 + 0x138));
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar22 = ABS((double)fVar1);
  dVar23 = ABS((double)fVar2);
  *(float *)(puVar7 + 0x10) = fVar1;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  fVar1 = *(float *)(param_2 + 0x48);
  *(float *)(puVar7 + 0x11) = (float)(dVar22 - dVar23);
  uVar19 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)(puVar7 + 0x10));
  if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
    dVar21 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0x84));
  if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
    dVar23 = dVar22;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar22 = dVar24;
  if (dVar24 < dVar21) {
    lVar14 = uVar13 - 0x100;
    lVar17 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar4 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar4 * fVar4;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar17 = uVar13 - 0x78;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar4 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar4;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    dVar21 = dVar24;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar17;
      lVar15 = lVar15 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar22 = (double)((float)(dVar21 + dVar25) * fVar2 + fVar3);
  }
  dVar21 = (double)FastSubRots(fVar1,(float)dVar22);
  if (dVar25 <= dVar21) {
    Delt((float)dVar24,g_FrameTimeSq * 4.0,(float *)(iVar6 + 0x134));
  }
  else {
    Delt((float)param_1,g_FrameTimeSq * 4.0,(float *)(iVar6 + 0x134));
  }
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar1 * fVar1;
  fVar11 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar12 = fVar2 * fVar11;
  fVar10 = fVar3 * fVar4;
  *(float *)(puVar7 + 0xe) =
       (fVar3 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x134);
  fVar1 = *(float *)(iVar6 + 0x134);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) * fVar1
  ;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar24,param_2,uVar13 - 0xa0);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}


// 0x020f330 (0xa38 bytes)
// inlined: FastAtan2 @0x20f5b0, FastAtan2 @0x20f850, FastAtan2 @0x20fb64
void M1226_0020f330(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar14;
  longlong lVar15;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
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
  ulonglong in_f31;
  double dVar28;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x2c] = in_LR;
  puVar11[0x29] = in_f31;
  puVar11[0x28] = unaff_r31;
  uVar1 = param_1->state;
  puVar11[0x27] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar23 = ZEXT48(pvVar9);
  puVar11[0x26] = unaff_r29;
  puVar11[0x25] = unaff_r28;
  if (uVar1 == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768420;
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  iVar16 = MB_damage(param_1,0x330000,0);
  iVar17 = MB_HandleDamage
                     (param_1,iVar16,uVar23 + 0x20,0,puVar11 + 0x10,(int)puVar11 + 0x84,0,4);
  if ((*(int *)(puVar11 + 0x10) != 1) && (param_1->state != '\n')) {
    M1226_0020ebd8(param_1);
    fVar8 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar11 + 0x84);
    *(float *)((int)pvVar9 + 0x20) = fVar8;
    iVar17 = iVar17 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(*(int *)(iVar16 + 0x20) + 0xa6)))) & 3U - iVar17);
    if ((double)fVar8 <= dVar28) {
      iVar17 = 1;
    }
    uVar18 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
    fVar2 = DAT_00768424;
    fVar8 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar9 + 0x90) = uVar18;
    *(undefined1 *)((int)pvVar9 + 0xad) = 0;
    *(undefined4 *)((int)pvVar9 + 0x94) = 9;
    *(float *)((int)pvVar9 + 0x80) = fVar2 * fVar8;
    fVar8 = g_FrameTime;
    if (iVar17 < 3) {
      if ((-1 < iVar17) && (0 < iVar17)) {
        fVar8 = DAT_00768424 * g_FrameTimeSq;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar9 + 0x80) = fVar8;
        fVar8 = g_FrameTime;
        *(float *)((int)pvVar9 + 0x88) = DAT_00768434 * g_FrameTime;
        fVar2 = DAT_00768430;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41000000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41800000;
        *(float *)((int)pvVar9 + 0x8c) = fVar2 * fVar8;
        fVar8 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar8);
        dVar27 = ABS((double)fVar2);
        *(float *)((int)puVar11 + 0x9c) = fVar8;
        *(float *)(puVar11 + 0x14) = fVar2;
        *(float *)((int)puVar11 + 0xa4) = (float)(dVar26 - dVar27);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)((int)puVar11 + 0x9c));
        if ((double)*(float *)((int)puVar11 + 0xa4) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
        if ((double)*(float *)((int)puVar11 + 0xa4) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar26 = dVar28;
        if (dVar28 < dVar25) {
          lVar14 = uVar13 - 0x140;
          lVar22 = uVar13 - 0x6c;
          lVar19 = uVar13 - 0x7c;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x1c) = fVar3;
          *(float *)(puVar11 + 0x1b) = fVar3;
          *(float *)((int)puVar11 + 0xdc) = fVar3;
          *(float *)((int)puVar11 + 0xd4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar4;
          *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar3;
          *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xc4) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x7c;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xd4) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar19 = 2;
          lVar14 = lVar15;
          dVar25 = dVar28;
          do {
            iVar17 = (int)lVar14;
            iVar12 = (int)lVar22;
            lVar14 = lVar14 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xd4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar2);
        }
        *(float *)((int)puVar11 + 0x8c) = (float)dVar26;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 0xc4,uVar23 + 0x88,uVar23 + 0x8c)
        ;
        MB_StartKick((double)*(float *)((int)puVar11 + 0x8c),param_1,uVar23 + 0x70);
        param_1->state = '\n';
        param_1->setByGroup = '\x02';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xf0;
      }
    }
    else if (iVar17 < 0xb) {
      if (iVar17 < 9) {
        *(float *)((int)pvVar9 + 0x88) = DAT_0076842c * g_FrameTime;
        fVar2 = DAT_00768428;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar9 + 0x8c) = fVar2 * fVar8;
        fVar8 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar8);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x15) = fVar8;
        *(float *)((int)puVar11 + 0xac) = fVar2;
        *(float *)(puVar11 + 0x16) = (float)(dVar26 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)(puVar11 + 0x15));
        if ((double)*(float *)(puVar11 + 0x16) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0xac));
        if ((double)*(float *)(puVar11 + 0x16) - dVar28 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar26 = dVar28;
        if (dVar28 < dVar25) {
          lVar14 = uVar13 - 0x140;
          lVar22 = uVar13 - 0x4c;
          lVar19 = uVar13 - 0x5c;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x20) = fVar3;
          *(float *)(puVar11 + 0x1f) = fVar3;
          *(float *)((int)puVar11 + 0xfc) = fVar3;
          *(float *)((int)puVar11 + 0xf4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar4;
          *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar3;
          *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xe4) * fVar3 * fVar3;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar13 - 0x5c;
          pfVar20 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar19 = lVar22;
          do {
            fVar3 = *pfVar20;
            fVar4 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xf4) * fVar3;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar19 = 2;
          lVar14 = lVar15;
          dVar25 = dVar28;
          do {
            iVar17 = (int)lVar14;
            iVar12 = (int)lVar22;
            lVar14 = lVar14 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xf4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar2);
        }
        *(float *)(puVar11 + 0x11) = (float)dVar26;
        uVar18 = *(undefined4 *)(iVar16 + 0x18);
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(iVar16 + 0x10);
        *(undefined4 *)(puVar11 + 7) = uVar18;
        uVar18 = *(undefined4 *)(iVar16 + 0x1c);
        *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
        *(undefined4 *)((int)puVar11 + 0x3c) = uVar18;
        MB_VecAtan2Angles(puVar11[6],puVar11[7],uVar13 - 200,uVar23 + 0x88,uVar23 + 0x8c);
        MB_StartKick((double)*(float *)(puVar11 + 0x11),param_1,uVar23 + 0x70);
        param_1->state = '\b';
        param_1->setByGroup = '\x02';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar23 + 0x60);
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    dVar25 = (double)MB_randRangeFloat(180.0,240.0);
    iVar16 = FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    puVar11[0x23] = (longlong)iVar16;
    uVar21 = puVar11[0x23];
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
    *(float *)((int)pvVar9 + 0x130) = (float)(longlong)uVar21;
  }
  FastDecTimerF32(uVar23 + 0x130);
  pSVar10 = Splines[*(int *)((int)pvVar9 + 0x120)];
  iVar16 = MB_getTargetInArea
                     (0x4060000000000000,param_1,uVar23 + 0xd0,pSVar10,0,0,pSVar10->points,
                      pSVar10->cnt);
  if (iVar16 != 2) {
    fVar8 = *(float *)((int)pvVar9 + 0xd0) - (param_1->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0xd4) - (param_1->pos).y;
    dVar26 = ABS((double)fVar8);
    dVar27 = ABS((double)fVar2);
    *(float *)(puVar11 + 0x12) = fVar8;
    *(float *)((int)puVar11 + 0x94) = fVar2;
    fVar8 = (param_1->rotation).z;
    *(float *)(puVar11 + 0x13) = (float)(dVar26 - dVar27);
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar11 + 0x12));
    if ((double)*(float *)(puVar11 + 0x13) - dVar28 < 0.0) {
      dVar25 = dVar27;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar11 + 0x94));
    if ((double)*(float *)(puVar11 + 0x13) - dVar28 < 0.0) {
      dVar27 = dVar26;
    }
    fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (dVar28 < dVar25) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x9c;
      lVar22 = uVar13 - 0x8c;
      lVar24 = 2;
      fVar4 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x18) = fVar4;
      *(float *)(puVar11 + 0x17) = fVar4;
      *(float *)((int)puVar11 + 0xbc) = fVar4;
      *(float *)((int)puVar11 + 0xb4) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar5;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar4;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar4 * fVar4;
        iVar16 = (int)lVar19;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar13 - 0x9c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar22;
      do {
        fVar4 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xb4) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar22;
        lVar15 = lVar15 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0xb4)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
    }
    dVar28 = (double)FastSubRots(fVar8,(float)dVar28);
    if (dVar28 < 1.5707963705062866) {
      fVar6 = (param_1->pos).y;
      *(f32 *)(puVar11 + 0xe) = (param_1->pos).x;
      fVar7 = (param_1->pos).w;
      *(f32 *)((int)puVar11 + 0x74) = fVar6;
      *(f32 *)((int)puVar11 + 0x7c) = fVar7;
      *(float *)(puVar11 + 0xf) = (param_1->pos).z + 1.0;
      iVar16 = CollLine(uVar13 - 0xe0,&g_heroCGPos,2,0,0);
      if (iVar16 == 0) {
        if ((*(int *)((int)pvVar9 + 0x158) == 0) &&
           (*(short *)(*(int *)((int)pvVar9 + 0x110) + 0xa6) == 0x27a)) {
          *(undefined4 *)((int)pvVar9 + 0x114) = 2;
          *(undefined4 *)((int)pvVar9 + 0x15c) = 1;
        }
        goto LAB_0020fd28;
      }
    }
    *(undefined4 *)((int)pvVar9 + 0x15c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x114) = 2;
  }
LAB_0020fd28:
  if (*(int *)((int)pvVar9 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar9 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x020fda8 (0xe94 bytes)
// inlined: FastAtan2 @0x2104f8
/* Moby 1226 */

void UpdateMoby_1226(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  MobyModeBit MVar18;
  void *pvVar19;
  undefined4 uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  char cVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  longlong lVar37;
  ulonglong in_r7;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar38;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  float fVar49;
  
  lVar29 = (longlong)(int)moby;
  uVar28 = ZEXT48(&stack0x00000000);
  lVar33 = uVar28 - 0x120;
  puVar21 = (ulonglong *)lVar33;
  *puVar21 = uVar28;
  puVar21[0x26] = in_LR;
  puVar21[0x20] = in_f28;
  puVar21[0x21] = in_f29;
  puVar21[0x22] = in_f30;
  puVar21[0x23] = in_f31;
  puVar21[0x1f] = unaff_r31;
  puVar21[0x1e] = unaff_r30;
  puVar21[0x1d] = unaff_r29;
  pvVar19 = moby->pVar;
  uVar38 = ZEXT48(pvVar19);
  M1226_0020f330();
  bVar5 = moby->state;
  if (bVar5 < 6) {
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        if ((*(int *)((int)pvVar19 + 0x120) == -1) ||
           (Splines[*(int *)((int)pvVar19 + 0x120)]->cnt == 0)) {
          DeleteMoby(moby);
          return;
        }
        if ((*(int *)((int)pvVar19 + 0x124) != -1) &&
           (Splines[*(int *)((int)pvVar19 + 0x124)]->cnt == 0)) {
          DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar19 + 0x20) = 0x40400000;
        *(undefined1 *)((int)pvVar19 + 0x28) = 2;
        fVar6 = (moby->pos).x;
        *(undefined2 *)((int)pvVar19 + 0x24) = 3;
        *(f32 *)((int)pvVar19 + 0x160) = fVar6;
        iVar31 = *(int *)((int)pvVar19 + 0x148);
        *(f32 *)((int)pvVar19 + 0x164) = (moby->pos).y;
        *(f32 *)((int)pvVar19 + 0x168) = (moby->pos).z;
        *(f32 *)((int)pvVar19 + 0x16c) = (moby->pos).w;
        MVar18 = moby->modeBits;
        *(f32 *)((int)pvVar19 + 0x16c) = (moby->rotation).z;
        *(undefined4 *)((int)pvVar19 + 0x144) = 1;
        *(uint *)((int)pvVar19 + 0x148) =
             iVar31 + ((uint)((longlong)iVar31 + -5 >> 0x3f) & 5U - iVar31);
        moby->state = '\x01';
        moby->modeBits = MVar18 | CAN_BE_AUTO_TARGETED;
        moby->setByGroup = '\0';
      }
      else if ((*(int *)((int)pvVar19 + 0x114) == 2) && (*(int *)((int)pvVar19 + 0x158) == 0)) {
        if (bVar5 == 1) {
          if (*(int *)((int)pvVar19 + 0x124) == -1) {
            if (((*(int *)((int)pvVar19 + 0x15c) != 0) && (g_heroState == HOLOGUISE_WAVE)) &&
               (*(int *)((int)pvVar19 + 0x150) != -1)) {
              M78_00459ff0(g_MobyInstance + *(int *)((int)pvVar19 + 0x150));
              *(undefined4 *)((int)pvVar19 + 0x150) = 0xffffffff;
            }
          }
          else {
            iVar31 = *(int *)((int)pvVar19 + 0x13c) + 1;
            auVar47 = ZEXT416(0xffffffff);
            auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
            auVar47 = loadVectorLeftIndexed(0x148,uVar38);
            auVar45 = loadVectorRightIndexed(0x158,uVar38);
            *(int *)((int)pvVar19 + 0x13c) =
                 iVar31 - (iVar31 / Splines[*(int *)((int)pvVar19 + 0x124)]->cnt) *
                          Splines[*(int *)((int)pvVar19 + 0x124)]->cnt;
            auVar46 = loadVectorLeftIndexed(4,0x20fd68);
            auVar45 = vectorConvertFromSignedFixedPointWord(auVar47 | auVar45,0);
            auVar47 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar47 = vectorAddFloatingPoint
                                (auVar45,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                         auVar47 << 0x60);
            auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar48);
            auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
            auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar20 = storeVectorElementWordIndexed
                               (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x14c,
                                uVar38);
            *(undefined4 *)((int)pvVar19 + 0x14cU & 0xfffffffc) = uVar20;
            moby->state = '\x02';
          }
        }
        else if ((bVar5 == 2) && (iVar31 = FastDecTimerS32(uVar38 + 0x14c), iVar31 != 0))
        {
          *(undefined4 *)((int)pvVar19 + 0x144) = 0;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
      else {
        moby->state = '\a';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 4) {
      lVar33 = ZEXT48(Splines[*(int *)((int)pvVar19 + 0x124)]) +
               ((ulonglong)*(uint *)((int)pvVar19 + 0x13c) & 0xfffffff) * 0x10;
      iVar31 = M1226_0020ed70
                         ((double)(g_FrameTime * 2.0),lVar29,lVar33,
                          lVar33 + 0x10U & 0xffffffff);
      if (iVar31 == 0) {
        if ((*(int *)((int)pvVar19 + 0x114) != 2) || (*(int *)((int)pvVar19 + 0x158) != 0)) {
          moby->state = '\a';
          moby->setByGroup = '\x01';
          if (moby->animationId != '\x04') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
      else {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar19 + 0x144) = 1;
        if (moby->animationId != '\0') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 5) {
      fVar49 = (moby->pos).y - *(float *)((int)pvVar19 + 0x164);
      fVar7 = (moby->pos).x - *(float *)((int)pvVar19 + 0x160);
      fVar17 = (moby->pos).z - *(float *)((int)pvVar19 + 0x168);
      if (SQRT(fVar17 * fVar17 + fVar7 * fVar7 + fVar49 * fVar49) <= 0.2) {
        OrganicDeltAng
                  (*(float *)((int)pvVar19 + 0x16c),g_FrameTimeSq * 12.566371,
                   g_FrameTimeSq * 12.566371,g_FrameTime * 6.2831855,&(moby->rotation).z,
                   0x720000,(float *)((int)pvVar19 + 0x138));
        dVar40 = (double)FastSubRots((moby->rotation).z,*(float *)((int)pvVar19 + 0x16c));
        if ((dVar40 < 0.009999999776482582) && (moby->state = '\x01', moby->animationId != '\0')) {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
      else {
        M1226_0020ed70
                  ((double)(g_FrameTime * 2.0),lVar29,&DAT_0020fd68,uVar38 + 0x160);
      }
    }
    else {
      FastDecTimerS32(uVar38 + 0x158);
      if (*(int *)((int)pvVar19 + 0x114) == 2) {
        if (*(int *)((int)pvVar19 + 0x158) == 0) {
          moby->state = '\x04';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
          if (*(int *)((int)pvVar19 + 0x128) != -1) {
            M1230_00213dd8(g_MobyInstance + *(int *)((int)pvVar19 + 0x128),0x3c);
          }
        }
      }
      else {
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
  }
  else if (bVar5 < 9) {
    if (bVar5 < 7) {
      lVar33 = ZEXT48(g_MobyInstance) +
               ((ulonglong)*(uint *)((int)pvVar19 + 0x128) & 0xffffff) * 0x100;
      iVar31 = M1226_0020ed70
                         ((double)(g_FrameTime * 4.0),lVar29,lVar33,
                          lVar33 + 0x10U & 0xffffffff);
      if (iVar31 != 0) {
        M1230_00213dd8(g_MobyInstance + *(int *)((int)pvVar19 + 0x128),600);
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,4,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
    }
    else if (bVar5 < 8) {
      fVar49 = *(float *)(*(int *)((int)pvVar19 + 0x110) + 0x10) - (moby->pos).x;
      fVar7 = *(float *)(*(int *)((int)pvVar19 + 0x110) + 0x14) - (moby->pos).y;
      fVar8 = ABS(fVar49);
      fVar17 = ABS(fVar7);
      *(float *)(puVar21 + 0x14) = fVar49;
      *(float *)((int)puVar21 + 0xa4) = fVar7;
      *(float *)(puVar21 + 0x15) = fVar8 - fVar17;
      dVar40 = 0.0;
      in_r7 = (ulonglong)*(uint *)(puVar21 + 0x15);
      uVar38 = (ulonglong)(*(uint *)(puVar21 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar21 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar21 + 0xa4) >> 0x1d) & 4;
      fVar49 = ABS(*(float *)(puVar21 + 0x14));
      if (*(float *)(puVar21 + 0x15) - 0.0 < 0.0) {
        fVar49 = fVar17;
      }
      fVar17 = *(float *)(&g_atanQuadrantTable + (int)(uVar38 << 2));
      fVar7 = *(float *)(((uint)(uVar38 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)((int)puVar21 + 0xa4));
      if (*(float *)(puVar21 + 0x15) - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      dVar42 = dVar40;
      if (0.0 < fVar49) {
        lVar34 = uVar28 - 0x110;
        in_r7 = 2;
        lVar35 = uVar28 - 0x74;
        lVar37 = uVar28 - 100;
        lVar39 = 2;
        fVar49 = (fVar9 - fVar49) / (fVar9 + fVar49);
        fVar8 = fVar49 * fVar49;
        *(float *)(puVar21 + 0x17) = fVar49;
        *(float *)(puVar21 + 0x16) = fVar49;
        *(float *)((int)puVar21 + 0xb4) = fVar49;
        *(float *)((int)puVar21 + 0xac) = fVar49;
        fVar49 = fVar8 * fVar8;
        *(float *)(puVar21 + 0x16) = *(float *)(puVar21 + 0x16) * fVar8;
        *(float *)((int)puVar21 + 0xb4) = *(float *)((int)puVar21 + 0xb4) * fVar49;
        *(float *)(puVar21 + 0x17) = *(float *)(puVar21 + 0x17) * fVar49 * fVar8;
        do {
          *(float *)((int)lVar34 + 0xac) = *(float *)((int)lVar34 + 0x9c) * fVar49 * fVar49;
          iVar31 = (int)lVar35;
          lVar34 = lVar34 + 8;
          lVar35 = lVar35 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)(iVar31 + 4) * fVar49 * fVar49;
          lVar37 = lVar37 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar39 = 4;
        lVar37 = uVar28 - 0x74;
        pfVar36 = (float *)&DAT_007358e0;
        lVar34 = lVar33;
        lVar35 = lVar37;
        do {
          fVar49 = *pfVar36;
          fVar8 = pfVar36[1];
          pfVar36 = pfVar36 + 2;
          *(float *)((int)lVar34 + 0xac) = *(float *)((int)lVar34 + 0xac) * fVar49;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
          lVar35 = lVar35 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar34 = 2;
        do {
          iVar31 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          iVar22 = (int)lVar37;
          lVar37 = lVar37 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar31 + 0xac)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar17 + fVar7);
      }
      fVar49 = OrganicDeltAng
                         ((float)dVar42,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x20fd68,
                          (float *)((int)pvVar19 + 0x138));
      if (*(int *)((int)pvVar19 + 0x114) == 2) {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,0,0,*(undefined4 *)((int)puVar21 + 0xd4));
        }
      }
      else {
        M1226_0020ebd8((double)fVar49,lVar29);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (((*(int *)((int)pvVar19 + 0x128) == -1) ||
            (iVar31 = FUN_0021416c(g_MobyInstance + *(int *)((int)pvVar19 + 0x128)), iVar31 != 0)) ||
           (iVar31 = M1226_0020ea80(lVar29), iVar31 == 0)) {
          fVar27 = DAT_0076844c;
          fVar26 = DAT_00768448;
          fVar25 = DAT_00768444;
          fVar24 = DAT_00768440;
          fVar7 = (moby->transform).v0.y;
          fVar17 = (moby->transform).v0.x;
          fVar8 = (moby->transform).v0.z;
          fVar49 = (moby->transform).v0.w;
          fVar23 = (moby->transform).v1.w * DAT_00768444;
          fVar9 = (moby->transform).v2.w;
          fVar10 = (moby->transform).v1.x;
          fVar11 = (moby->transform).v2.x;
          fVar12 = (moby->transform).v1.y;
          fVar13 = (moby->transform).v2.y;
          fVar14 = (moby->transform).v1.z;
          fVar16 = fVar49 * DAT_00768440;
          fVar15 = (moby->transform).v2.z;
          *(float *)((int)puVar21 + 0x7c) = fVar49;
          dVar44 = (double)SQRT(fVar8 * fVar8 + fVar17 * fVar17 + fVar7 * fVar7);
          *(float *)((int)puVar21 + 0x8c) = fVar9 * fVar26 + fVar16 + fVar23 + fVar27;
          fVar9 = (moby->pos).y;
          fVar16 = (moby->pos).z;
          fVar49 = (float)((double)(DAT_00768438 * g_FrameTime) / dVar44);
          *(float *)(puVar21 + 0x10) =
               fVar11 * fVar26 + fVar17 * fVar24 + fVar10 * fVar25 + (moby->pos).x;
          *(float *)((int)puVar21 + 0x84) =
               fVar13 * fVar26 + fVar7 * fVar24 + fVar12 * fVar25 + fVar9;
          *(float *)(puVar21 + 0x11) = fVar15 * fVar26 + fVar8 * fVar24 + fVar14 * fVar25 + fVar16;
          dVar42 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar42 = (double)(fVar17 * fVar49);
          }
          dVar41 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar41 = (double)(fVar7 * fVar49);
          }
          dVar43 = dVar40;
          if (dVar40 - dVar44 < 0.0) {
            dVar43 = (double)(fVar8 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar42 = (double)(fVar17 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar41 = (double)(fVar7 * fVar49);
          }
          if (dVar44 - dVar40 < 0.0) {
            dVar43 = (double)(fVar8 * fVar49);
          }
          *(float *)(puVar21 + 0xe) = (float)dVar42;
          *(float *)((int)puVar21 + 0x74) = (float)dVar41;
          *(float *)(puVar21 + 0xf) = (float)dVar43;
          FUN_003a01e0(lVar29,uVar28 - 0xb0,uVar28 - 0xa0);
        }
        else {
          moby->state = '\x06';
          if (moby->animationId != '\x02') {
            puVar21[0x1a] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          }
        }
      }
    }
    else {
      uVar30 = MB_UpdateKick(moby,(KickVars *)((int)pvVar19 + 0x70));
      if ((uVar30 & 0x40) != 0) {
        moby->state = '\a';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x02') {
          puVar21[0x1a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar29,2,0,*(undefined4 *)((int)puVar21 + 0xd4));
          return;
        }
        return;
      }
      if ((uVar30 & 0x120) != 0) {
        DeleteMoby(moby);
        return;
      }
    }
  }
  else if ((bVar5 == 10) &&
          (uVar30 = MB_UpdateKick(moby,(KickVars *)((int)pvVar19 + 0x70)),
          (uVar30 & 0x160) != 0)) {
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar29,lVar29 + 0x10,&DAT_0020fd68,
               0xffffffffffffffff);
    DeleteMoby(moby);
    return;
  }
  fVar49 = g_heroPosition.y;
  if (g_heroType == '\0') {
    return;
  }
  bVar4 = *(int *)((int)pvVar19 + 0x158) == 0;
  if ((bVar4) || (*(int *)((int)pvVar19 + 0x114) == 2)) {
    if ((DAT_00f08e60 != 2) && ((*(int *)((int)pvVar19 + 0x15c) != 0 || (!bVar4)))) {
      DAT_00f08e60 = 1;
    }
  }
  else {
    DAT_00f08e60 = 2;
  }
  if (DAT_00f08e64 != worldUpdateTime) {
    DAT_00f08e64 = worldUpdateTime;
    *(float *)(puVar21 + 0x12) = g_heroPosition.x;
    fVar7 = g_heroPosition.z;
    *(float *)((int)puVar21 + 0x94) = fVar49;
    fVar49 = g_heroPosition.w;
    *(float *)(puVar21 + 0x13) = fVar7;
    *(float *)((int)puVar21 + 0x9c) = fVar49;
    bVar4 = DAT_00f08e60 < 1;
    bVar1 = DAT_00f08e60 < 0;
    bVar2 = DAT_00f08e60 < 2;
    bVar3 = 2 < DAT_00f08e60;
    *(float *)(puVar21 + 0x13) = fVar7 + 1.5;
    if (bVar4) {
      if (bVar1) {
        DAT_00f08e60 = 0;
        return;
      }
      iVar31 = SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x8000ff00,in_r7,0x7f,2,0x44);
    }
    else if (bVar2) {
      iVar31 = SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x8000ffff,in_r7,0x7f,2,0x44);
    }
    else {
      if (bVar3) {
        DAT_00f08e60 = 0;
        return;
      }
      iVar31 = SpawnPart_41(0.333,puVar21 + 0x12,moby,0,0x800000ff,in_r7,0x7f,2,0x44);
    }
    if (iVar31 != 0) {
      cVar32 = FastDoubleToInt(0x3fd99999a0000000);
      *(char *)(iVar31 + 9) = cVar32 + '@';
    }
    DAT_00f08e60 = 0;
    return;
  }
  return;
}



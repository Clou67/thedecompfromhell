// game/update/moby1371.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x25c7f8-0x25d260
#include "game/update/moby1371.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x025c7f8 (0x50c bytes)
// inlined: FastAtan2 @0x25ca24, FastAtan2 @0x25cbe0
void FUN_0025c7f8(double param_1,float param_2,undefined8 param_3,f32 *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  MobyInstance *pMVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f31;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0xf0;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x1c] = unaff_r31;
  puVar9[0x1b] = unaff_r30;
  pMVar15 = CreateMoby(DOOR_0550|BLARG_HEAVY_INTERCEPTOR_0008);
  if (pMVar15 != (MobyInstance *)0x0) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    uVar16 = *(undefined8 *)((int)param_2 + 0x38);
    pMVar15->state = '\0';
    pMVar15->color = (int)((ulonglong)uVar16 >> 0x20);
    pMVar15->light = (int)uVar16;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    (pMVar15->pos).x = *param_4;
    pfVar22 = (float *)pMVar15->pVar;
    (pMVar15->pos).y = param_4[1];
    (pMVar15->pos).z = param_4[2];
    (pMVar15->pos).w = param_4[3];
    pfVar22[0x10] = (float)param_1;
    fVar1 = *param_5;
    pfVar22[4] = fVar1;
    fVar2 = param_5[1];
    pfVar22[5] = fVar2;
    fVar3 = param_5[2];
    pfVar22[6] = fVar3;
    fVar4 = param_5[3];
    pfVar22[7] = fVar4;
    auVar25 = loadVectorLeftIndexed(in_LR,0x25c7ec);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x38,
                       ZEXT48(pfVar22));
    *(undefined4 *)((uint)(pfVar22 + 0xe) & 0xfffffffc) = uVar8;
    pfVar22[0xf] = param_2;
    fVar2 = fVar2 - (pMVar15->pos).y;
    fVar1 = fVar1 - (pMVar15->pos).x;
    fVar3 = fVar3 - (pMVar15->pos).z;
    fVar12 = 0.0;
    pfVar22[3] = fVar4;
    dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar4 = (float)(param_1 / dVar24);
    fVar6 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar6 = fVar1 * fVar4;
    }
    fVar5 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar5 = fVar2 * fVar4;
    }
    fVar7 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar6 = fVar1 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar5 = fVar2 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    *pfVar22 = fVar6;
    pfVar22[1] = fVar5;
    pfVar22[2] = fVar7;
    fVar4 = (pMVar15->pos).x;
    fVar1 = (pMVar15->pos).y;
    fVar2 = *param_5 - fVar4;
    fVar3 = param_5[1] - fVar1;
    fVar5 = ABS(fVar2);
    fVar7 = ABS(fVar3);
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar5 - fVar7;
    fVar2 = (pMVar15->pos).z;
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar6 = ABS(*(float *)((int)puVar9 + 0x7c));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar13 = fVar12;
    if (0.0 < fVar6) {
      lVar21 = uVar14 - 0xe0;
      lVar20 = uVar14 - 0x48;
      lVar18 = uVar14 - 0x38;
      lVar23 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar6;
      *(float *)((int)puVar9 + 0xac) = fVar6;
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)(puVar9 + 0x15) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar7;
      *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar6;
      *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar21 + 0xa8) = *(float *)((int)lVar21 + 0x98) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x48;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar21;
      lVar20 = lVar17;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar17;
      fVar6 = fVar12;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar13 = (fVar6 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar15->rotation).z = fVar13;
    fVar1 = fVar1 - param_5[1];
    fVar4 = fVar4 - *param_5;
    fVar2 = param_5[2] - fVar2;
    fVar4 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    *(float *)((int)puVar9 + 0x74) = fVar2;
    fVar2 = ABS(fVar2);
    fVar1 = ABS(fVar4);
    *(float *)(puVar9 + 0xe) = fVar4;
    *(float *)(puVar9 + 0xf) = fVar1 - fVar2;
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar3 = ABS(*(float *)((int)puVar9 + 0x74));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar21 = uVar14 - 0xe0;
      lVar18 = uVar14 - 0x58;
      lVar20 = uVar14 - 0x68;
      lVar23 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x94) = fVar4;
      *(float *)((int)puVar9 + 0x8c) = fVar4;
      *(float *)(puVar9 + 0x12) = fVar4;
      *(float *)(puVar9 + 0x11) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar3;
      *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4;
      *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x88) = *(float *)((int)lVar21 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x68;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar21;
      lVar20 = lVar17;
      do {
        fVar4 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0x88) = *(float *)((int)lVar20 + 0x88) * fVar4;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar12 = fVar12 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) +
                 *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar12 = (fVar12 + 0.7853982) * fVar2 + fVar1;
    }
    (pMVar15->rotation).y = -fVar12;
  }
  return;
}


// 0x025cd04 (0x14 bytes)
void M1371_0025cd04(void)

{
  DAT_0079c058 = 0x10000;
  return;
}


// 0x025cd18 (0xe0 bytes)
MobyInstance * FUN_0025cd18(MobyInstance *param_1)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(BLARG_COMMANDER_055B);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    (pMVar3->pos).x = (param_1->pos).x;
    (pMVar3->pos).y = (param_1->pos).y;
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).z = (param_1->pos).z;
    fVar1 = (param_1->pos).w;
    pMVar3->drawDistance = 0x7f;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = (param_1->rotation).x;
    (pMVar3->rotation).y = (param_1->rotation).y;
    fVar1 = (param_1->rotation).z;
    pMVar3->field80_0xb8 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = (param_1->rotation).w;
    FastMemSetZero(pvVar2,0x20);
    *(int *)((int)pvVar2 + 0x10) = (int)pvVar2 + 0x20;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x025ce40 (0x278 bytes)
void FUN_0025ce40(undefined8 param_1,MobyInstance *param_2)

{
  float fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<8> local_50;
  
  pvVar3 = param_2->pVar;
  iVar9 = MB_randInt(3);
  if (iVar9 == 0) {
    PlayMobySound(1,0x20,param_2);
  }
  *(undefined4 *)((int)pvVar3 + 0x48) = 0x3f333333;
  uVar10 = FastDoubleToInt(0x4086666660000000);
  MVar2 = param_2->modeBits;
  *(undefined4 *)((int)pvVar3 + 0x40) = uVar10;
  *(undefined4 *)((int)pvVar3 + 0x6c) = 0;
  param_2->updateDistance = -1;
  param_2->modeBits =
       MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|DISABLED);
  dVar11 = (double)FastWrapRot((param_2->rotation).z,3.1415927);
  fVar8 = DAT_0071f418;
  fVar4 = DAT_0071f418 * 40.0;
  fVar1 = (float)(dVar11 + 1.570796251296997);
  *(float *)((int)pvVar3 + 0x30) = fVar4;
  *(float *)((int)pvVar3 + 0x34) = fVar8 * 100.0;
  dVar16 = 2.0;
  dVar13 = (double)(float)(3.141592502593994 - dVar11);
  if (dVar11 - (double)(float)(3.141592502593994 - dVar11) < 0.0) {
    dVar13 = dVar11;
  }
  *(undefined1 *)((int)pvVar3 + 0x5d) = 0;
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  dVar12 = (double)(float)(-3.141592502593994 - dVar11);
  if ((double)(float)(-3.141592502593994 - dVar11) - dVar13 < 0.0) {
    dVar12 = dVar13;
  }
  *(float *)((int)pvVar3 + 0x3c) = SQRT(fVar4 * 4.0);
  *(undefined4 *)((int)pvVar3 + 0x44) = 1;
  fVar4 = (SQRT(fVar4 * 4.0) * 2.0) / fVar4;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  dVar13 = (double)(float)(dVar12 * dVar12);
  fVar7 = fVar6 * fVar6;
  fVar1 = fVar7 * fVar7 * fVar6;
  dVar15 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar12));
  fVar5 = fVar7 * fVar1;
  dVar14 = (double)(float)(dVar13 * dVar15);
  *(float *)((int)pvVar3 + 0x38) = fVar8 * 100.0 * 0.5 * fVar4 + 3.0 / fVar4;
  MB_VecAtan2Angles
            (CONCAT44(fVar7 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6,
                      (float)(dVar13 * dVar14) * 2.601887e-06 +
                      (float)(dVar14 * -0.0001980741071747616 +
                             (double)(float)(dVar15 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar13 * dVar12) *
                                                            -0.16666656732559204 + dVar12)))),
             0x3f80000045afdf66,local_50,(int)pvVar3 + 0x38,(int)pvVar3 + 0x3c);
  MB_StartKick((double)(float)dVar11,param_2,(int)pvVar3 + 0x20);
  MVar2 = param_2->modeBits;
  *(undefined4 *)((int)pvVar3 + 0x70) = 0xbf800000;
  *(undefined4 *)((int)pvVar3 + 0x74) = 0xbf800000;
  dVar13 = (double)g_FrameTime;
  param_2->modeBits =
       MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  *(float *)((int)pvVar3 + 0x6c) = (float)(dVar13 * dVar16);
  MB_SetAnimation(param_2,1,0,0);
  return;
}


// 0x025d0d0 (0x190 bytes)
/* Moby 1371 */

void UpdateMoby_1371(MobyInstance *moby)

{
  MobyModeBit MVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  GPiece<24> local_40;
  
  pvVar2 = moby->pVar;
  if (moby->animationId == '\x01') {
    uVar4 = MB_UpdateKick(moby,(KickVars *)((int)pvVar2 + 0x20));
    dVar6 = 4.363323211669922;
    dVar5 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 4.363323);
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)FastWrapRot
                              ((moby->rotation).y,(float)((double)g_FrameTime * dVar6));
    MVar1 = moby->modeBits;
    (moby->rotation).y = (float)dVar5;
    moby->modeBits =
         MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    if ((uVar4 & 0x61) == 0) {
      fVar3 = (moby->pos).z;
      uVar4 = (int)fVar3 >> 0x1f;
      if ((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < 0x40a00000) {
        DeleteMoby(moby);
      }
    }
    else {
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,moby,ZEXT48(pvVar2) + 0x20,local_40,&DAT_0025d0b8,0,5,2,4);
      DeleteMoby(moby);
    }
  }
  return;
}



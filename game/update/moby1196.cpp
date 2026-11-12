// game/update/moby1196.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1f29e8-0x1f4cac
#include "game/update/moby1196.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby1193.h"
#include "idol/fastfunc.h"

// 0x01f29e8 (0x2bc bytes)
// inlined: FastAtan2 @0x1f2b50
MobyInstance *
FUN_001f29e8(double param_1,undefined4 param_2,f32 *param_3,float *param_4,undefined8 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar13;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x14] = unaff_r27;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  puVar8[0x18] = unaff_r31;
  pMVar15 = CreateMoby(0x4a9);
  if (pMVar15 != (MobyInstance *)0x0) {
    pvVar5 = pMVar15->pVar;
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\0';
    *(undefined4 *)((int)pvVar5 + 0x24) = param_2;
    (pMVar15->pos).x = *param_3;
    (pMVar15->pos).y = param_3[1];
    (pMVar15->pos).z = param_3[2];
    (pMVar15->pos).w = param_3[3];
    *(float *)((int)pvVar5 + 0x10) = *param_4;
    *(float *)((int)pvVar5 + 0x14) = param_4[1];
    fVar1 = param_4[2];
    *(float *)((int)pvVar5 + 0x1c) = (float)param_1;
    *(float *)((int)pvVar5 + 0x18) = fVar1;
    *(undefined4 *)((int)pvVar5 + 0x20) = param_6;
    uVar12 = DAT_007660d0;
    *(undefined2 *)((int)pvVar5 + 0x2a) = 0;
    *(short *)((int)pvVar5 + 0x28) = (short)uVar12;
    fVar1 = 0.0;
    (pMVar15->rotation).x = 0.0;
    (pMVar15->rotation).y = 0.0;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar9 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
    *(float *)(puVar8 + 0xe) = fVar9 - fVar3;
    fVar2 = pMVar15->scale;
    uVar16 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4
    ;
    fVar6 = fVar9;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    if (0.0 < fVar6) {
      lVar19 = uVar13 - 0xc0;
      lVar17 = uVar13 - 0x4c;
      lVar18 = uVar13 - 0x5c;
      lVar21 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)(puVar8 + 0xf) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)((int)puVar8 + 0x74) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar3;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar6;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar19 + 0x74) = *(float *)((int)lVar19 + 100) * fVar6 * fVar6;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar13 - 0x5c;
      lVar21 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar14;
      do {
        fVar6 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x74) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar7;
    }
    (pMVar15->rotation).z = fVar1;
    pMVar15->scale = fVar2 * DAT_007660dc;
    UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}


// 0x01f2ca4 (0x14 bytes)
void M1196_001f2ca4(void)

{
  DAT_00766138 = 0x10000;
  return;
}


// 0x01f2cb8 (0x68 bytes)
void M1196_001f2cb8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
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


// 0x01f2d58 (0x8a4 bytes)
// inlined: FastAtan2 @0x1f2fdc, FastAtan2 @0x1f318c
void M1196_001f2d58(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  float fVar14;
  undefined4 uVar17;
  float *pfVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar16 = uVar25 - 0x100;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar25;
  puVar13[0x22] = in_LR;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r30;
  puVar13[0x1e] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar26 = ZEXT48(pvVar6);
  iVar19 = *(int *)((int)pvVar6 + 0x38);
  puVar13[0x1c] = unaff_r29;
  if (iVar19 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,240.0);
    uVar17 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x184) = uVar17;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar26 + 0x184);
  if (param_1->state != '\v') {
    pfVar18 = (float *)MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,pfVar18,uVar26 + 0x20,5,puVar13 + 0xe,0,0,4);
    if (pfVar18 != (float *)0x0) {
      uVar10 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar18[0xb] >> 0x1f;
      fVar2 = pfVar18[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar18[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar10)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        auVar32 = loadVectorLeftIndexed(0x20,0x1f2d20);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x26,uVar26);
        *(undefined2 *)((int)pvVar6 + 0x26) = uVar12;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
      }
      else {
        if (DAT_00fa3840 != 0) {
          MB_UnlockSkillPoint(0x10);
        }
        MVar5 = param_1->modeBits;
        dVar28 = 0.0;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\x05') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\v';
        fVar2 = g_FrameTimeSq * 26.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        if (((uint)pfVar18[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar18;
          fVar7 = (param_1->pos).y - pfVar18[1];
          dVar30 = ABS((double)fVar2);
          dVar29 = ABS((double)fVar7);
          *(float *)((int)puVar13 + 0x74) = fVar2;
          *(float *)(puVar13 + 0xf) = fVar7;
          *(float *)((int)puVar13 + 0x7c) = (float)(dVar30 - dVar29);
          uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1d) & 4;
          uVar23 = uVar20 << 2;
          dVar31 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar23);
          dVar29 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar15 = uVar25 - 0xf0;
            lVar21 = uVar25 - 0x7c;
            lVar24 = uVar25 - 0x6c;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x12) = fVar3;
            *(float *)(puVar13 + 0x11) = fVar3;
            *(float *)((int)puVar13 + 0x8c) = fVar3;
            *(float *)((int)puVar13 + 0x84) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x11) = *(float *)(puVar13 + 0x11) * fVar4;
            *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar3;
            *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x74) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x7c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x84) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0x84)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        else {
          fVar2 = pfVar18[4];
          fVar7 = pfVar18[5];
          dVar29 = ABS((double)pfVar18[4]);
          dVar31 = ABS((double)pfVar18[5]);
          uVar23 = ZEXT48(&g_atanQuadrantTable);
          *(float *)(puVar13 + 0x10) = (float)(dVar29 - dVar31);
          uVar20 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar30 = dVar29;
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar30) {
            lVar15 = uVar25 - 0xf0;
            lVar21 = uVar25 - 0x5c;
            lVar24 = uVar25 - 0x4c;
            lVar27 = 2;
            fVar3 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x16) = fVar3;
            *(float *)(puVar13 + 0x15) = fVar3;
            *(float *)((int)puVar13 + 0xac) = fVar3;
            *(float *)((int)puVar13 + 0xa4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar4;
            *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar3;
            *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0x94) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x5c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0xa4) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xa4)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        MB_StartKick(dVar28,param_1,uVar26 + 0x60,uVar23,5,1,0);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
      param_1->damage = -1;
    }
  }
  MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar22 = &DAT_001f2d20;
    fVar2 = 42.0;
  }
  else if (*(int *)((int)pvVar6 + 0x184) == 0) {
    puVar22 = (undefined4 *)(uint)param_1->state;
    if (param_1->state == 1) {
      fVar2 = *(float *)((int)pvVar6 + 0x188);
    }
    else {
      fVar2 = *(float *)((int)pvVar6 + 0x178);
    }
  }
  else {
    puVar22 = &DAT_001f2d20;
    fVar2 = *(float *)((int)pvVar6 + 0x178) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x180) = fVar2;
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    iVar19 = MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    if (iVar19 != 2) {
      iVar8 = *(int *)((int)pvVar6 + 0x194);
      fVar2 = g_heroPosition.y - Cuboids[iVar8].pos.y;
      fVar7 = g_heroPosition.x - Cuboids[iVar8].pos.x;
      fVar3 = g_heroPosition.z - Cuboids[iVar8].pos.z;
      fVar14 = Cuboids[iVar8].imatrix.v2.x * fVar3 +
               Cuboids[iVar8].imatrix.v0.x * fVar7 + Cuboids[iVar8].imatrix.v1.x * fVar2;
      fVar4 = Cuboids[iVar8].imatrix.v2.y * fVar3 +
              Cuboids[iVar8].imatrix.v0.y * fVar7 + Cuboids[iVar8].imatrix.v1.y * fVar2;
      fVar2 = Cuboids[iVar8].imatrix.v2.z * fVar3 +
              Cuboids[iVar8].imatrix.v0.z * fVar7 + Cuboids[iVar8].imatrix.v1.z * fVar2;
      if (((((fVar14 <= -1.0) || (0.0 <= fVar14)) || (fVar4 <= -1.0)) ||
          ((1.0 <= fVar4 || (fVar2 <= -1.0)))) || (1.0 <= fVar2)) {
        *(undefined4 *)((int)pvVar6 + 0x104) = 2;
      }
    }
  }
  else {
    bVar1 = param_1->state == '\x01';
    if ((bVar1) && (-1 < *(int *)((int)pvVar6 + 0x18c))) {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x18c)];
      iVar19 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
    else if ((bVar1) || (*(int *)((int)pvVar6 + 0x17c) < 0)) {
      iVar19 = MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    }
    else {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x17c)];
      iVar19 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
  }
  if ((iVar19 != 2) &&
     ((fVar2 = *(float *)((int)pvVar6 + 0x134) - *(float *)((int)pvVar6 + 0xc4),
      fVar7 = *(float *)((int)pvVar6 + 0x130) - *(float *)((int)pvVar6 + 0xc0),
      *(float *)((int)pvVar6 + 0x180) < SQRT(fVar7 * fVar7 + fVar2 * fVar2) ||
      (param_1->enabled == '\0')))) {
    *(undefined4 *)((int)pvVar6 + 0x104) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x100) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x100) = g_heroMobyPtr;
  }
  return;
}


// 0x01f3688 (0x1624 bytes)
// inlined: FastAtan2 @0x1f3af0, FastAtan2 @0x1f3cdc, FastAtan2 @0x1f40d4, FastAtan2 @0x1f4500, FastAtan2 @0x1f49c4
/* Moby 1196 */

void UpdateMoby_1196(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  ushort uVar11;
  void *pvVar12;
  Spline *pSVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ushort *puVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  MobyInstance *pMVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  undefined8 uVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  float fVar47;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1d0;
  puVar15 = (ulonglong *)lVar20;
  *puVar15 = uVar17;
  puVar15[0x3c] = in_LR;
  puVar15[0x33] = in_f25;
  puVar15[0x34] = in_f26;
  puVar15[0x35] = in_f27;
  puVar15[0x36] = in_f28;
  puVar15[0x37] = in_f29;
  puVar15[0x38] = in_f30;
  puVar15[0x39] = in_f31;
  puVar15[0x32] = unaff_r31;
  puVar15[0x30] = unaff_r29;
  puVar15[0x31] = unaff_r30;
  puVar15[0x2f] = unaff_r28;
  pvVar12 = moby->pVar;
  uVar31 = ZEXT48(pvVar12);
  M1196_001f2d58(lVar18);
  iVar23 = *(int *)((int)pvVar12 + 0x100);
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar12 + 0x270));
  if ((moby->enabled != '\0') &&
     (fVar47 = (moby->pos).y - GameCamera.posY, fVar1 = (moby->pos).x - GameCamera.posX,
     fVar2 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar47 * fVar47) < 29.0)) {
    MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x17';
  }
  bVar3 = moby->state;
  dVar37 = 1.0;
  moby->unk58 = 1.0;
  if (bVar3 < 6) {
    if (bVar3 == 5) {
      moby->unk58 = 4.0;
      iVar23 = *(int *)((int)pvVar12 + 0x158);
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x150)];
      dVar42 = (double)pSVar13->points[iVar23].x;
      dVar41 = (double)pSVar13->points[iVar23].y;
      fVar47 = (float)(dVar42 - (double)(moby->pos).x);
      dVar40 = (double)pSVar13->points[iVar23].z;
      fVar1 = (float)(dVar41 - (double)(moby->pos).y);
      dVar39 = (double)pSVar13->points[iVar23].w;
      fVar2 = (float)(dVar40 - (double)(moby->pos).z);
      dVar38 = (double)SQRT(fVar2 * fVar2 + fVar47 * fVar47 + fVar1 * fVar1);
      *(float *)(puVar15 + 0x10) =
           SQRT(*(float *)((int)pvVar12 + 0x128) * *(float *)((int)pvVar12 + 0x128) +
                *(float *)((int)pvVar12 + 0x120) * *(float *)((int)pvVar12 + 0x120) +
                *(float *)((int)pvVar12 + 0x124) * *(float *)((int)pvVar12 + 0x124));
      dVar36 = 0.0;
      *(float *)(puVar15 + 0x17) = fVar47;
      *(float *)(puVar15 + 0x18) = ABS(fVar47) - ABS(fVar1);
      *(float *)((int)puVar15 + 0xbc) = fVar1;
      *(undefined4 *)((int)puVar15 + 0x84) = 0;
      uVar29 = (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar15 + 0x17));
      if (*(float *)(puVar15 + 0x18) - 0.0 < 0.0) {
        fVar2 = ABS(fVar1);
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar1 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar15 + 0xbc));
      if (*(float *)(puVar15 + 0x18) - 0.0 < 0.0) {
        fVar8 = ABS(fVar47);
      }
      dVar33 = dVar36;
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1c0;
        lVar25 = uVar17 - 0x8c;
        lVar27 = uVar17 - 0x7c;
        lVar32 = 2;
        fVar47 = (fVar8 - fVar2) / (fVar8 + fVar2);
        fVar2 = fVar47 * fVar47;
        *(float *)(puVar15 + 0x2a) = fVar47;
        *(float *)(puVar15 + 0x29) = fVar47;
        *(float *)((int)puVar15 + 0x14c) = fVar47;
        *(float *)((int)puVar15 + 0x144) = fVar47;
        fVar47 = fVar2 * fVar2;
        *(float *)(puVar15 + 0x29) = *(float *)(puVar15 + 0x29) * fVar2;
        *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar47;
        *(float *)(puVar15 + 0x2a) = *(float *)(puVar15 + 0x2a) * fVar47 * fVar2;
        do {
          *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x134) * fVar47 * fVar47;
          iVar23 = (int)lVar25;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar47 * fVar47;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar27 = uVar17 - 0x8c;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar27;
        do {
          fVar47 = *pfVar26;
          fVar2 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x144) * fVar47;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar2;
          lVar25 = lVar25 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar21 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x144)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar9 + fVar1);
      }
      OrganicDeltAng
                ((float)dVar33,g_FrameTimeSq * 25.132742,g_FrameTimeSq * 25.132742,
                 g_FrameTime * 50.265484,&(moby->rotation).z,0x1f35fc,
                 (float *)((int)pvVar12 + 0x170));
      fVar47 = (float)(dVar42 - (double)(moby->pos).x);
      fVar1 = (float)(dVar41 - (double)(moby->pos).y);
      dVar34 = ABS((double)fVar47);
      dVar35 = ABS((double)fVar1);
      *(float *)((int)puVar15 + 0xac) = fVar47;
      *(float *)(puVar15 + 0x16) = fVar1;
      fVar47 = (moby->rotation).z;
      *(float *)((int)puVar15 + 0xb4) = (float)(dVar34 - dVar35);
      uVar29 = (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)((int)puVar15 + 0xac));
      if ((double)*(float *)((int)puVar15 + 0xb4) - dVar36 < 0.0) {
        dVar33 = dVar35;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar35 = ABS((double)*(float *)(puVar15 + 0x16));
      if ((double)*(float *)((int)puVar15 + 0xb4) - dVar36 < 0.0) {
        dVar35 = dVar34;
      }
      fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar34 = dVar36;
      if (dVar36 < dVar33) {
        lVar19 = uVar17 - 0x1c0;
        lVar27 = uVar17 - 0x9c;
        lVar25 = uVar17 - 0xac;
        lVar32 = 2;
        fVar9 = (float)(dVar35 - dVar33) / (float)(dVar35 + dVar33);
        fVar8 = fVar9 * fVar9;
        *(float *)(puVar15 + 0x26) = fVar9;
        *(float *)(puVar15 + 0x25) = fVar9;
        *(float *)((int)puVar15 + 300) = fVar9;
        *(float *)((int)puVar15 + 0x124) = fVar9;
        fVar9 = fVar8 * fVar8;
        *(float *)(puVar15 + 0x25) = *(float *)(puVar15 + 0x25) * fVar8;
        *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar9;
        *(float *)(puVar15 + 0x26) = *(float *)(puVar15 + 0x26) * fVar9 * fVar8;
        do {
          *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x114) * fVar9 * fVar9;
          iVar23 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar27 = uVar17 - 0xac;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar27;
        do {
          fVar9 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x124) * fVar9;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
          lVar25 = lVar25 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar19 = 2;
        dVar33 = dVar36;
        do {
          iVar23 = (int)lVar20;
          iVar21 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x124)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar34 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar33 = (double)FastSubRots((float)dVar34,fVar47);
      if (0.7853981852531433 <= dVar33) {
        *(undefined4 *)((int)pvVar12 + 300) = 0;
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(undefined4 *)((int)pvVar12 + 0x124) = 0;
        *(undefined4 *)((int)pvVar12 + 0x120) = 0;
      }
      else {
        OrganicDelt
                  ((float)dVar38,g_FrameTimeSq * 20.0,g_FrameTimeSq * 20.0,
                   g_FrameTime * 20.0,(float *)((int)puVar15 + 0x84),0x720000,
                   (float *)(puVar15 + 0x10));
        *(float *)((int)pvVar12 + 0x120) = (float)(dVar42 - (double)(moby->pos).x);
        *(float *)((int)pvVar12 + 0x124) = (float)(dVar41 - (double)(moby->pos).y);
        fVar47 = (moby->pos).z;
        *(float *)((int)pvVar12 + 300) = (float)dVar39;
        *(float *)((int)pvVar12 + 0x128) = (float)(dVar40 - (double)fVar47);
        ClampVec3Magnitude
                  ((double)*(float *)(puVar15 + 0x10),(Vec4 *)((int)pvVar12 + 0x120));
      }
      uVar43 = 0x3fe0000000000000;
      MB_MoveAndCollide2(0x3fe0000000000000,dVar36,lVar18,uVar31 + 0x120);
      if (dVar38 < dVar37) {
        iVar23 = *(int *)((int)pvVar12 + 0x158);
        iVar21 = iVar23 + 1;
        *(int *)((int)pvVar12 + 0x158) = iVar21;
        if ((int)Splines[*(int *)((int)pvVar12 + 0x150)]->points[iVar23].w < 1) {
          if (iVar21 == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
            moby->state = '\n';
            if (moby->animationId != '\x04') {
              puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
            }
            GetGroundZ(uVar43,lVar18 + 0x10,0);
            *(float *)((int)pvVar12 + 0x130) = g_CollOutput.ip.x;
            *(float *)((int)pvVar12 + 0x134) = g_CollOutput.ip.y;
            *(float *)((int)pvVar12 + 0x138) = g_CollOutput.ip.z;
            *(float *)((int)pvVar12 + 0x13c) = g_CollOutput.ip.w;
            *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
            *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
            *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
            *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
          }
        }
        else {
          moby->state = '\x06';
          if (moby->animationId != '\x03') {
            puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar15 + 0x16c));
          }
        }
      }
    }
    else if (bVar3 == 4) {
      moby->unk58 = 4.0;
      fVar47 = OrganicDelt
                         (*(float *)((int)pvVar12 + 0x138) + 2.0,g_FrameTimeSq * 18.0,
                          g_FrameTimeSq * 18.0,g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar12 + 0x128));
      if (fVar47 == 0.0) {
        moby->state = '\x05';
      }
    }
    else if (bVar3 == 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar12 + 300) = 0;
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(undefined4 *)((int)pvVar12 + 0x124) = 0;
        *(undefined4 *)((int)pvVar12 + 0x120) = 0;
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
      }
    }
    else if (bVar3 == 1) {
      if (((*(int *)((int)pvVar12 + 0x104) != 2) || (*(int *)((int)pvVar12 + 0x174) == 0)) &&
         (moby->state = '\x02', moby->animationId != '\x01')) {
        puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar15 + 0x16c));
      }
    }
    else if (bVar3 == 0) {
      *(undefined4 *)((int)pvVar12 + 0x30) = 0x3f000000;
      *(undefined4 *)((int)pvVar12 + 0x20) = 0x3f800000;
      *(undefined1 *)((int)pvVar12 + 0x28) = 0;
      *(undefined1 *)((int)pvVar12 + 0x29) = 1;
      *(undefined2 *)((int)pvVar12 + 0x24) = 1;
      fVar4 = (moby->pos).x;
      MVar10 = moby->modeBits;
      *(f32 *)((int)pvVar12 + 0x130) = fVar4;
      fVar5 = (moby->pos).y;
      *(f32 *)((int)pvVar12 + 0x134) = fVar5;
      fVar6 = (moby->pos).z;
      moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar12 + 0x138) = fVar6;
      fVar7 = (moby->pos).w;
      *(f32 *)((int)pvVar12 + 0x13c) = fVar7;
      *(f32 *)((int)pvVar12 + 0x140) = fVar4;
      *(f32 *)((int)pvVar12 + 0x144) = fVar5;
      *(f32 *)((int)pvVar12 + 0x148) = fVar6;
      *(f32 *)((int)pvVar12 + 0x14c) = fVar7;
      if (*(int *)((int)pvVar12 + 0x174) == 1) {
        moby->state = '\x01';
      }
      else {
        DeleteMoby(moby);
      }
    }
  }
  else if (bVar3 == 0xb) {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar24 & 1) != 0) {
      MB_SpawnBoltsFromCrate(lVar18,0x200,0xffffffffffffffff);
      MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar18,lVar18 + 0x10,&DAT_001f35fc,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (bVar3 == 10) {
    fVar47 = *(float *)((int)pvVar12 + 0x140) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar12 + 0x144) - (moby->pos).y;
    pfVar26 = (float *)&g_atanQuadrantTable;
    fVar9 = ABS(fVar47);
    fVar2 = ABS(fVar1);
    *(float *)(puVar15 + 0x11) = fVar47;
    *(float *)((int)puVar15 + 0x8c) = fVar1;
    *(float *)(puVar15 + 0x12) = fVar9 - fVar2;
    dVar37 = 0.0;
    uVar29 = (ulonglong)(*(uint *)(puVar15 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x8c) >> 0x1d) & 4;
    fVar47 = ABS(*(float *)(puVar15 + 0x11));
    if (*(float *)(puVar15 + 0x12) - 0.0 < 0.0) {
      fVar47 = fVar2;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar1 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar15 + 0x8c));
    if (*(float *)(puVar15 + 0x12) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    dVar36 = dVar37;
    if (0.0 < fVar47) {
      lVar19 = uVar17 - 0x1c0;
      lVar25 = uVar17 - 0x10c;
      lVar27 = uVar17 - 0xfc;
      lVar32 = 2;
      fVar47 = (fVar8 - fVar47) / (fVar8 + fVar47);
      fVar9 = fVar47 * fVar47;
      *(float *)(puVar15 + 0x1a) = fVar47;
      *(float *)(puVar15 + 0x19) = fVar47;
      *(float *)((int)puVar15 + 0xcc) = fVar47;
      *(float *)((int)puVar15 + 0xc4) = fVar47;
      fVar47 = fVar9 * fVar9;
      *(float *)(puVar15 + 0x19) = *(float *)(puVar15 + 0x19) * fVar9;
      *(float *)((int)puVar15 + 0xcc) = *(float *)((int)puVar15 + 0xcc) * fVar47;
      *(float *)(puVar15 + 0x1a) = *(float *)(puVar15 + 0x1a) * fVar47 * fVar9;
      do {
        *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xb4) * fVar47 * fVar47;
        iVar23 = (int)lVar25;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar47 * fVar47;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0x10c;
      pfVar26 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        fVar47 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar47;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0xc4)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar2 + fVar1);
    }
    OrganicDeltAngSpeed
              (dVar36,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,pfVar26,
               uVar31 + 0x170);
    *(float *)((int)pvVar12 + 0x40) = *(float *)((int)pvVar12 + 0x140) - (moby->pos).x;
    *(float *)((int)pvVar12 + 0x44) = *(float *)((int)pvVar12 + 0x144) - (moby->pos).y;
    fVar47 = (moby->pos).z;
    *(undefined4 *)((int)pvVar12 + 0x4c) = *(undefined4 *)((int)pvVar12 + 0x14c);
    *(float *)((int)pvVar12 + 0x48) = *(float *)((int)pvVar12 + 0x148) - fVar47;
    ClampVec3Magnitude
              ((double)(g_FrameTime * 4.0),(Vec4 *)((int)pvVar12 + 0x40));
    fVar47 = (moby->pos).y;
    fVar1 = (moby->pos).z;
    *(float *)(puVar15 + 0xe) = *(float *)((int)pvVar12 + 0x40) + (moby->pos).x;
    *(float *)((int)puVar15 + 0x74) = *(float *)((int)pvVar12 + 0x44) + fVar47;
    *(float *)(puVar15 + 0xf) = *(float *)((int)pvVar12 + 0x48) + fVar1;
    *(undefined4 *)((int)puVar15 + 0x7c) = *(undefined4 *)((int)pvVar12 + 0x4c);
    iVar23 = CollSphere(0x3fd99999a0000000,uVar17 - 0x160);
    if (iVar23 == 0) {
      fVar4 = *(f32 *)((int)puVar15 + 0x74);
      (moby->pos).x = *(f32 *)(puVar15 + 0xe);
      fVar5 = *(f32 *)(puVar15 + 0xf);
      (moby->pos).y = fVar4;
      fVar4 = *(f32 *)((int)puVar15 + 0x7c);
      (moby->pos).z = fVar5;
      (moby->pos).w = fVar4;
    }
    else {
      *(undefined4 *)((int)pvVar12 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar12 + 0x48) = 0;
      *(undefined4 *)((int)pvVar12 + 0x44) = 0;
      *(undefined4 *)((int)pvVar12 + 0x40) = 0;
      moby->state = '\t';
    }
    if ((double)SQRT(*(float *)((int)pvVar12 + 0x48) * *(float *)((int)pvVar12 + 0x48) +
                     *(float *)((int)pvVar12 + 0x40) * *(float *)((int)pvVar12 + 0x40) +
                     *(float *)((int)pvVar12 + 0x44) * *(float *)((int)pvVar12 + 0x44)) == dVar37) {
      moby->state = '\t';
    }
  }
  else if (bVar3 == 9) {
    iVar23 = FastDecTimerS32(uVar31 + 0x19c);
    if (iVar23 != 0) {
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar44 = loadVectorLeftIndexed(100,0x1f35fc);
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                           auVar45);
      auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x19c,uVar31
                         );
      *(undefined4 *)((int)pvVar12 + 0x19cU & 0xfffffffc) = uVar14;
      dVar36 = (double)MB_randRangeFloat(0.0,3.0);
      dVar38 = (double)MB_randRot();
      fVar47 = (float)(dVar38 + 1.570796251296997);
      dVar37 = (double)(float)(3.141592502593994 - dVar38);
      if (dVar38 - (double)(float)(3.141592502593994 - dVar38) < 0.0) {
        dVar37 = dVar38;
      }
      fVar1 = 3.1415925 - fVar47;
      if (fVar47 - (3.1415925 - fVar47) < 0.0) {
        fVar1 = fVar47;
      }
      dVar39 = (double)(float)(-3.141592502593994 - dVar38);
      if ((double)(float)(-3.141592502593994 - dVar38) - dVar37 < 0.0) {
        dVar39 = dVar37;
      }
      fVar2 = -3.1415925 - fVar47;
      if ((-3.1415925 - fVar47) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      dVar37 = (double)(float)(dVar39 * dVar39);
      fVar9 = fVar2 * fVar2;
      dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar39));
      fVar47 = fVar9 * fVar9 * fVar2;
      dVar38 = (double)(float)(dVar37 * dVar40);
      fVar1 = fVar9 * fVar47;
      dVar39 = (double)((float)(dVar37 * dVar38) * 2.601887e-06 +
                       (float)(dVar38 * -0.0001980741071747616 +
                              (double)(float)(dVar40 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar37 * dVar39) *
                                                             -0.16666656732559204 + dVar39))));
      dVar38 = (double)(fVar9 * fVar1 * 2.601887e-06 +
                       fVar1 * -0.0001980741 +
                       fVar47 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2);
      dVar37 = (double)MB_randRangeFloat(5.0,7.0);
      fVar47 = (float)(dVar37 + (double)*(float *)((int)pvVar12 + 0x138));
      *(float *)((int)pvVar12 + 0x140) =
           (float)(dVar38 * dVar36 + (double)*(float *)((int)pvVar12 + 0x130));
      *(float *)((int)pvVar12 + 0x144) =
           (float)(dVar39 * dVar36 + (double)*(float *)((int)pvVar12 + 0x134));
      *(float *)((int)pvVar12 + 0x148) = fVar47;
      *(float *)((int)pvVar12 + 0x14c) = fVar47;
      moby->state = '\n';
    }
  }
  else if (bVar3 == 8) {
    dVar39 = 0.0;
    DeltAng(0.0,g_FrameTime * 12.566371,&(moby->rotation).y,0x1f35fc,0x1f35fc,0)
    ;
    fVar47 = *(float *)((int)pvVar12 + 0x130) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar12 + 0x134) - (moby->pos).y;
    dVar36 = ABS((double)fVar47);
    dVar38 = ABS((double)fVar1);
    *(float *)((int)puVar15 + 0x94) = fVar47;
    *(float *)(puVar15 + 0x13) = fVar1;
    *(float *)((int)puVar15 + 0x9c) = (float)(dVar36 - dVar38);
    fVar47 = g_FrameTime;
    uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x13) >> 0x1d) & 4;
    uVar29 = uVar28 << 2 | 0x735900;
    dVar37 = ABS((double)*(float *)((int)puVar15 + 0x94));
    if ((double)*(float *)((int)puVar15 + 0x9c) - dVar39 < 0.0) {
      dVar37 = dVar38;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar38 = ABS((double)*(float *)(puVar15 + 0x13));
    if ((double)*(float *)((int)puVar15 + 0x9c) - dVar39 < 0.0) {
      dVar38 = dVar36;
    }
    fVar2 = *(float *)((int)uVar29 + 4);
    dVar36 = dVar39;
    if (dVar39 < dVar37) {
      lVar19 = uVar17 - 0x1c0;
      lVar25 = uVar17 - 0xec;
      lVar27 = uVar17 - 0xdc;
      lVar32 = 2;
      fVar9 = (float)(dVar38 - dVar37) / (float)(dVar38 + dVar37);
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar15 + 0x1e) = fVar9;
      *(float *)(puVar15 + 0x1d) = fVar9;
      *(float *)((int)puVar15 + 0xec) = fVar9;
      *(float *)((int)puVar15 + 0xe4) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar8;
      *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar9;
      *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar19 + 0xe4) = *(float *)((int)lVar19 + 0xd4) * fVar9 * fVar9;
        iVar23 = (int)lVar25;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar9 * fVar9;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0xec;
      uVar29 = ZEXT48(&DAT_007358e0);
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        pfVar26 = (float *)uVar29;
        fVar9 = pfVar26[1];
        uVar29 = uVar29 + 8;
        *(float *)((int)lVar19 + 0xe4) = *(float *)((int)lVar19 + 0xe4) * *pfVar26;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      dVar37 = dVar39;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar23 + 0xe4)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar37 + 0.7853981852531433) * fVar1 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar36,0x3f947ae140000000,0x3fd3333340000000,(double)(fVar47 * 6.2831855),lVar18,
               uVar29,uVar31 + 0x170);
    fVar2 = g_FrameTime;
    fVar47 = (moby->rotation).z + 1.5707963;
    fVar1 = 3.1415925 - fVar47;
    if (fVar47 - (3.1415925 - fVar47) < 0.0) {
      fVar1 = fVar47;
    }
    fVar9 = -3.1415925 - fVar47;
    if ((-3.1415925 - fVar47) - fVar1 < 0.0) {
      fVar9 = fVar1;
    }
    fVar1 = g_FrameTime * 6.0;
    fVar47 = fVar9 * fVar9;
    fVar8 = fVar47 * fVar47 * fVar9;
    fVar16 = fVar47 * fVar8;
    *(float *)((int)pvVar12 + 0x120) =
         fVar1 * (fVar47 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar8 * 0.0083330255 + fVar47 * fVar9 * -0.16666657 + fVar9);
    fVar47 = (moby->rotation).z;
    fVar9 = 3.1415925 - fVar47;
    if (fVar47 - (3.1415925 - fVar47) < 0.0) {
      fVar9 = fVar47;
    }
    fVar8 = -3.1415925 - fVar47;
    if ((-3.1415925 - fVar47) - fVar9 < 0.0) {
      fVar8 = fVar9;
    }
    *(undefined4 *)((int)pvVar12 + 0x128) = 0;
    fVar47 = fVar8 * fVar8;
    fVar9 = fVar47 * fVar47 * fVar8;
    fVar16 = fVar47 * fVar9;
    *(float *)((int)pvVar12 + 0x124) =
         fVar1 * (fVar47 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar9 * 0.0083330255 + fVar47 * fVar8 * -0.16666657 + fVar8);
    dVar37 = 2.0;
    fVar47 = (*(float *)((int)pvVar12 + 0x138) + 2.0) - (moby->pos).z;
    if ((fVar47 <= fVar1) && (fVar1 = fVar47, fVar47 < fVar2 * -6.0)) {
      fVar1 = fVar2 * -6.0;
    }
    *(float *)((int)pvVar12 + 0x128) = fVar1;
    MB_MoveAndCollide2
              (0x3fe0000000000000,dVar39,lVar18,uVar31 + 0x120,&DAT_001f35fc,0x200);
    fVar47 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
    fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
    if ((double)SQRT(fVar1 * fVar1 + fVar47 * fVar47) < dVar37) {
      moby->state = '\a';
    }
  }
  else if (bVar3 == 6) {
    fVar47 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
    fVar1 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar47);
    fVar9 = ABS(fVar1);
    *(float *)(puVar15 + 0x14) = fVar47;
    *(float *)((int)puVar15 + 0xa4) = fVar1;
    *(float *)(puVar15 + 0x15) = fVar2 - fVar9;
    fVar47 = 0.0;
    uVar31 = (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar15 + 0x14));
    if (*(float *)(puVar15 + 0x15) - 0.0 < 0.0) {
      fVar1 = fVar9;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
    fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
    fVar16 = ABS(*(float *)((int)puVar15 + 0xa4));
    if (*(float *)(puVar15 + 0x15) - 0.0 < 0.0) {
      fVar16 = fVar2;
    }
    if (0.0 < fVar1) {
      lVar19 = uVar17 - 0x1c0;
      lVar27 = uVar17 - 0xbc;
      lVar25 = uVar17 - 0xcc;
      lVar32 = 2;
      fVar1 = (fVar16 - fVar1) / (fVar16 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x22) = fVar1;
      *(float *)(puVar15 + 0x21) = fVar1;
      *(float *)((int)puVar15 + 0x10c) = fVar1;
      *(float *)((int)puVar15 + 0x104) = fVar1;
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar2;
      *(float *)((int)puVar15 + 0x10c) = *(float *)((int)puVar15 + 0x10c) * fVar1;
      *(float *)(puVar15 + 0x22) = *(float *)(puVar15 + 0x22) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0xf4) * fVar1 * fVar1;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar1 * fVar1;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0xcc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        fVar1 = *pfVar26;
        fVar2 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0x104) * fVar1;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar2;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar47 = fVar47 + *(float *)(iVar23 + 0x104) + *(float *)(iVar21 + 4) +
                 *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar47 = (fVar47 + 0.7853982) * fVar8 + fVar9;
    }
    OrganicDeltAng
              (fVar47,g_FrameTimeSq * 25.132742,g_FrameTimeSq * 25.132742,
               g_FrameTime * 50.265484,&(moby->rotation).z,0x1f35fc,
               (float *)((int)pvVar12 + 0x170));
    if ((moby->field43_0x70 & 2U) != 0) {
      lVar20 = FastDoubleToInt
                         ((double)Splines[*(int *)((int)pvVar12 + 0x150)]->points
                                  [*(int *)((int)pvVar12 + 0x158) + -1].w);
      if (((g_MobyInstance + *(int *)((int)pvVar12 + (int)(lVar20 << 2) + 0x15c) !=
            (MobyInstance *)0x0) &&
          (bVar3 = g_MobyInstance[*(int *)((int)pvVar12 + (int)(lVar20 << 2) + 0x15c)].group,
          bVar3 != 0xff)) &&
         (puVar22 = (ushort *)(&g_MobyGroups)[bVar3], pMVar30 = g_MobyInstance,
         puVar22 != (ushort *)0x0)) {
        do {
          if (pMVar30[*puVar22 & 0x7fff].state == '\x01') {
            pMVar30[*puVar22 & 0x7fff].state = '\x02';
            pMVar30 = g_MobyInstance;
          }
          uVar11 = *puVar22;
          puVar22 = puVar22 + 1;
        } while (-1 < (short)uVar11);
      }
      if (*(int *)((int)pvVar12 + 0x158) == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
        moby->state = '\n';
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
        GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
        *(float *)((int)pvVar12 + 0x130) = g_CollOutput.ip.x;
        *(float *)((int)pvVar12 + 0x134) = g_CollOutput.ip.y;
        *(float *)((int)pvVar12 + 0x138) = g_CollOutput.ip.z;
        *(float *)((int)pvVar12 + 0x13c) = g_CollOutput.ip.w;
        *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
        *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
        *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
        *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
      }
    }
  }
  return;
}



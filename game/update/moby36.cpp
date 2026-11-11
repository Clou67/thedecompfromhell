// game/update/moby36.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x354638-0x354e58
#include "game/update/moby36.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0354638 (0x11c bytes)
MobyInstance * FUN_00354638(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  MobyClass *pMVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  
  pMVar9 = CreateMoby(BLARG_GUNNER);
  if (pMVar9 != (MobyInstance *)0x0) {
    piVar5 = (int *)pMVar9->pVar;
    piVar5[0x1c] = param_1;
    *piVar5 = (int)(piVar5 + 8);
    piVar5[3] = (int)(piVar5 + 0x18);
    pMVar9->updateDistance = *(char *)(param_1 + 0x30);
    pMVar6 = pMVar9->pClass;
    sVar4 = *(short *)(piVar5[0x1c] + 0x32);
    pMVar9->enabled = '\x01';
    pMVar9->state = '\0';
    pMVar9->setByGroup = '\0';
    iVar7 = piVar5[0x1c];
    iVar8 = *(int *)(param_1 + 0x24);
    (pMVar9->pos).x = *(f32 *)(iVar7 + 0x10);
    (pMVar9->pos).y = *(f32 *)(iVar7 + 0x14);
    (pMVar9->pos).z = *(f32 *)(iVar7 + 0x18);
    (pMVar9->pos).w = *(f32 *)(iVar7 + 0x1c);
    fVar1 = pMVar6->gScale;
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(iVar8 + 0x24);
    pMVar9->drawDistance = sVar4;
    pMVar9->modeBits = pMVar9->modeBits | HAS_SPECIAL_VARS;
    *(undefined2 *)(piVar5 + 9) = 1;
    pMVar9->scale = (fVar1 * fVar2) / fVar3;
    piVar5[8] = 0x3f800000;
    *(undefined1 *)(piVar5 + 10) = 0;
    *(undefined1 *)((int)piVar5 + 0x29) = 1;
    *(undefined1 *)((int)piVar5 + 0x2a) = 3;
    piVar5[0xc] = 0x3f333333;
    UpdateMobyTransform(pMVar9);
    MB_CopyHeroLights(pMVar9);
  }
  return pMVar9;
}


// 0x0354768 (0x448 bytes)
// inlined: FastAtan2 @0x3548c4
void M36_00354768(MobyInstance *param_1,longlong param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar19;
  int iVar20;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xc0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x1a] = in_LR;
  puVar12[0x16] = unaff_r30;
  puVar12[0x15] = unaff_r29;
  uVar1 = param_1->state;
  puVar12[0x17] = unaff_r31;
  puVar12[0x14] = unaff_r28;
  if (uVar1 != '\x02') {
    iVar19 = MB_damage(param_1,0x330000,0);
    iVar20 = MB_HandleDamage(param_1,iVar19,param_2 + 0x20,0,puVar12 + 0xe,0,0,4);
    iVar15 = (int)param_2;
    if ((iVar19 != 0) && ((*(uint *)(iVar19 + 0x24) & 0x800000) != 0)) {
      iVar8 = *(int *)(iVar19 + 0x20);
      if (iVar8 == 0) {
        *(undefined4 *)(iVar19 + 0x2c) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 1;
      }
      else {
        fVar2 = *(float *)(iVar8 + 0x10) - (param_1->pos).x;
        fVar4 = *(float *)(iVar8 + 0x14) - (param_1->pos).y;
        fVar5 = ABS(fVar2);
        fVar3 = ABS(fVar4);
        *(float *)((int)puVar12 + 0x74) = fVar2;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = fVar5 - fVar3;
        fVar2 = 0.0;
        uVar17 = (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar12 + 0x74));
        if (*(float *)((int)puVar12 + 0x7c) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)(puVar12 + 0xf));
        if (*(float *)((int)puVar12 + 0x7c) - 0.0 < 0.0) {
          fVar13 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar23 = uVar16 - 0xb0;
          lVar22 = uVar16 - 0x40;
          lVar21 = uVar16 - 0x30;
          lVar25 = 2;
          fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar12 + 0x8c) = fVar4;
          *(float *)((int)puVar12 + 0x84) = fVar4;
          *(float *)(puVar12 + 0x11) = fVar4;
          *(float *)(puVar12 + 0x10) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar5;
          *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar4;
          *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar23 + 0x80) = *(float *)((int)lVar23 + 0x70) * fVar4 * fVar4;
            iVar8 = (int)lVar22;
            lVar23 = lVar23 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar23 = uVar16 - 0x40;
          pfVar24 = (float *)&DAT_007358e0;
          lVar25 = 4;
          lVar21 = lVar23;
          lVar22 = lVar18;
          do {
            fVar4 = *pfVar24;
            fVar5 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar22 + 0x80) = *(float *)((int)lVar22 + 0x80) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar21 = 2;
          do {
            iVar8 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar8 + 0x80) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
        }
        dVar26 = (double)FastSubRots
                                   (fVar2,*(float *)(*(int *)(*(int *)(iVar15 + 0x70) + 0x78) + 0x54
                                                    ));
        if (dVar26 < 1.6580628156661987) {
          *(undefined4 *)(iVar19 + 0x2c) = 0;
          *(undefined4 *)(puVar12 + 0xe) = 1;
        }
      }
    }
    if ((0 < iVar20) && (iVar20 < 3)) {
      *(undefined4 *)(iVar15 + 0x20) = 0;
    }
    if (1 < *(int *)(puVar12 + 0xe)) {
      uVar9 = (int)*(uint *)(iVar15 + 0x20) >> 0x1f;
      uVar10 = (int)*(uint *)(iVar19 + 0x2c) >> 0x1f;
      fVar2 = *(float *)(iVar19 + 0x2c);
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar19 + 0x2c)) - uVar10) <
          (int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x20)) - uVar9)) {
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        *(undefined1 *)(iVar15 + 0x67) = 0xfa;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) - fVar2;
        auVar27 = loadVectorLeftIndexed(0xc,0x354754);
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = vectorSplatHalfWord(auVar27,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar27,0x26,param_2);
        *(undefined2 *)(iVar15 + 0x26) = uVar11;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        MVar7 = param_1->modeBits;
        iVar19 = *(int *)(iVar15 + 0x70);
        *(undefined4 *)(iVar15 + 0x20) = 0;
        param_1->modeBits =
             MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (((iVar19 != 0) && (*(short *)(iVar19 + 0xa6) == 0x1d)) &&
           (*(char *)(iVar19 + 0x20) != -3 && *(char *)(iVar19 + 0x20) != -2)) {
          *(undefined1 *)(iVar19 + 0x20) = 4;
        }
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar15 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x03') {
          MB_SetAnimation(param_1,3,1,0);
        }
        param_1->state = '\x02';
      }
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x0354bd0 (0x288 bytes)
/* Moby 36 */

void UpdateMoby_36(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  GPiece<16> local_40;
  GPiece<24> auStack_30;
  
  bVar2 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar2 == 0) {
    *(undefined1 *)((int)pvVar3 + 0x29) = 1;
    moby->state = '\x01';
    *(undefined1 *)((int)pvVar3 + 0x5a) = 6;
    *(undefined1 *)((int)pvVar3 + 0x58) = 8;
  }
  else if (bVar2 < 2) {
    if (*(char *)(*(int *)((int)pvVar3 + 0x70) + 0x20) == '\x03') {
      bVar1 = moby->animationId != '\x02';
      if ((bVar1) && (bVar1)) {
        uVar4 = MB_randRange(0,3);
        uVar5 = MB_randRange(7,0xc);
        MB_SetAnimation(moby,2,uVar4,uVar5);
      }
    }
    else if ((1 < moby->animationId) || ((moby->field43_0x70 & 2U) != 0)) {
      iVar6 = MB_randInt(7);
      if (iVar6 == 0) {
        if (moby->animationId != '\x01') {
          uVar4 = MB_randRange(7,0xd);
          MB_SetAnimation(moby,1,0,uVar4);
        }
      }
      else if (moby->animationId != '\0') {
        uVar4 = MB_randRange(7,0xd);
        MB_SetAnimation(moby,0,0,uVar4);
      }
      dVar7 = (double)MB_randRangeFloat(0.8,1.2);
      moby->unk58 = (float)dVar7;
    }
    M36_00354768(moby,pvVar3);
  }
  else if ((bVar2 < 3) && ((moby->field43_0x70 & 2U) != 0)) {
    GetBonePosition(moby,0,auStack_30);
    MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_40,auStack_30,0,1,0x14,9,0x20);
    DeleteMoby(moby);
  }
  return;
}



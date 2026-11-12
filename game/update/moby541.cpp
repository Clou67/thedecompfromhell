// game/update/moby541.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3ac678-0x3aef30
#include "game/update/moby541.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby282.h"
#include "game/update/moby651.h"
#include "idol/fastfunc.h"

// 0x03ac678 (0x1e0 bytes)
undefined8
M541_003ac678
          (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  int unused;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float local_60 [2];
  
  unused = 0xd0;
  iVar1 = *(int *)(param_2 + 0x78);
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  OrganicDeltAng
            ((float)param_1,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
             g_FrameTime * 25.132742,(float *)(param_2 + 0x48),0xd0,
             (float *)(iVar1 + 0x100));
  dVar12 = (double)(fStack00000044 - *(float *)(param_2 + 0x14));
  dVar11 = (double)(fStack00000040 - *(float *)(param_2 + 0x10));
  dVar10 = (double)(fStack00000048 - *(float *)(param_2 + 0x18));
  dVar8 = 0.0;
  local_60[0] = 0.0;
  target = SQRT((float)(dVar10 * dVar10 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar12 * dVar12))));
  dVar9 = (double)target;
  OrganicDelt
            (target,g_FrameTimeSq * 12.0,g_FrameTimeSq * 12.0,g_FrameTime * 6.0,local_60,
             unused,(float *)(iVar1 + 0xfc));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0xfc) / dVar9);
  dVar6 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar6 = (double)(float)(dVar10 * dVar4);
  }
  dVar7 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar7 = (double)(float)(dVar12 * dVar4);
  }
  dVar5 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar5 = (double)(float)(dVar11 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar6 = (double)(float)(dVar10 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar7 = (double)(float)(dVar12 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar5 = (double)(float)(dVar11 * dVar4);
  }
  *(float *)(param_2 + 0x18) = (float)((double)*(float *)(param_2 + 0x18) + dVar6);
  *(float *)(param_2 + 0x14) = (float)((double)*(float *)(param_2 + 0x14) + dVar7);
  *(float *)(param_2 + 0x10) = (float)((double)*(float *)(param_2 + 0x10) + dVar5);
  if ((0.05000000074505806 <= dVar9) ||
     (uVar2 = (int)*(uint *)(iVar1 + 0xfc) >> 0x1f,
     0x3ba3d709 < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xfc)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// 0x03ac860 (0xf0 bytes)
void M541_003ac860(MobyInstance *param_1)

{
  ushort uVar1;
  void *pvVar2;
  ushort *puVar3;
  double dVar4;
  double dVar5;
  
  if (param_1->group != 0xff) {
    puVar3 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
    dVar5 = (double)(DAT_008455a0 * 0.017453292 * g_FrameTime);
    do {
      do {
      } while (g_MobyInstance[*puVar3 & 0x7fff].oClass != TEST_DUMMY);
      pvVar2 = g_MobyInstance[*puVar3 & 0x7fff].pVar;
      *(undefined4 *)((int)pvVar2 + 0x118) = worldUpdateTime;
      dVar4 = (double)FastWrapRot(*(float *)((int)pvVar2 + 0x11c),(float)dVar5);
      *(float *)((int)pvVar2 + 0x11c) = (float)dVar4;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    RegisterFuncForMoby(&PTR_M542_003aefd0_0070d110,param_1);
  }
  return;
}


// 0x03ac968 (0x780 bytes)
// inlined: FastAtan2 @0x3acce4, FastRSqrt @0x3acee4, FastRSqrt @0x3acf8c, FastRSqrt @0x3ad030
void M541_003ac968(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar16;
  undefined4 uVar17;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ushort *puVar22;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x130;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x28] = in_LR;
  puVar9[0x25] = in_f31;
  puVar9[0x24] = unaff_r31;
  puVar12 = (undefined4 *)(uVar13 - 0x40);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  uVar1 = param_1->state;
  puVar9[0x23] = unaff_r30;
  puVar9[0x22] = unaff_r29;
  puVar9[0x21] = unaff_r28;
  puVar9[0x20] = unaff_r27;
  if (uVar1 != '\x01') {
    pvVar7 = param_1->pVar;
    uVar23 = ZEXT48(pvVar7);
    if (*(char *)((int)pvVar7 + 0x2e) == '\x02') {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      *(undefined1 *)((int)pvVar7 + 0x2e) = 1;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x40000000;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(uVar13 - 0x40,0x3ac950);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xf0,uVar23)
      ;
      *(undefined4 *)((int)pvVar7 + 0xf0U & 0xfffffffc) = uVar17;
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      iVar16 = *(int *)((int)pvVar7 + 200);
      *(int *)((int)pvVar7 + 200) = iVar16 + -1;
      if (iVar16 == 0) {
        if (*(MobyInstance **)((int)pvVar7 + 0x104) != (MobyInstance *)0x0) {
          DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x104));
        }
        DeleteMoby(param_1);
      }
      else {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        param_1->state = '\v';
        auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        (param_1->pos).x = *(f32 *)((int)pvVar7 + 0xe0);
        (param_1->pos).y = *(f32 *)((int)pvVar7 + 0xe4);
        (param_1->pos).z = *(f32 *)((int)pvVar7 + 0xe8);
        (param_1->pos).w = *(f32 *)((int)pvVar7 + 0xec);
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar29);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar17 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xf0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xf0U & 0xfffffffc) = uVar17;
      }
    }
    else {
      if ((*(int *)((int)pvVar7 + 0x118) != worldUpdateTime) && (param_1->group != 0xff)) {
        puVar22 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
        dVar27 = (double)(DAT_008455a0 * 0.017453292 * g_FrameTime);
        iVar16 = worldUpdateTime;
        do {
          do {
          } while (g_MobyInstance[*puVar22 & 0x7fff].oClass != TEST_DUMMY);
          pvVar8 = g_MobyInstance[*puVar22 & 0x7fff].pVar;
          *(int *)((int)pvVar8 + 0x118) = iVar16;
          dVar25 = (double)FastWrapRot(*(float *)((int)pvVar8 + 0x11c),(float)dVar27);
          *(float *)((int)pvVar8 + 0x11c) = (float)dVar25;
          uVar6 = *puVar22;
          puVar22 = puVar22 + 1;
          iVar16 = worldUpdateTime;
        } while (-1 < (short)uVar6);
        RegisterFuncForMoby(&PTR_M542_003aefd0_0070d110,param_1);
      }
      dVar27 = 0.0;
      *(undefined4 *)((int)puVar9 + 0xb4) = 0;
      uVar17 = MB_damage(param_1,0x330000,0);
      MB_HandleDamage(param_1,uVar17,uVar23 + 0x20,0,puVar9 + 0x16,(int)puVar9 + 0xb4,0,4)
      ;
      if ((*(int *)(puVar9 + 0x16) != 1) && (param_1->state != '\v' && param_1->state != '\n')) {
        fVar3 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0xb4);
        *(float *)((int)pvVar7 + 0x20) = fVar3;
        if (dVar27 < (double)fVar3) {
          if (param_1->state != 9) {
            *(uint *)((int)pvVar7 + 0x110) = (uint)param_1->state;
            *(uint *)((int)pvVar7 + 0x114) = (uint)param_1->animationId;
          }
          fVar3 = g_heroPosition.x - (param_1->pos).x;
          fVar4 = g_heroPosition.y - (param_1->pos).y;
          dVar28 = ABS((double)fVar3);
          dVar26 = ABS((double)fVar4);
          *(float *)(puVar9 + 0x17) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar4;
          *(float *)(puVar9 + 0x18) = (float)(dVar28 - dVar26);
          uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar9 + 0x17));
          if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
            dVar25 = dVar26;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
          if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
            dVar26 = dVar28;
          }
          fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = dVar27;
          if (dVar27 < dVar25) {
            lVar14 = uVar13 - 0x120;
            lVar21 = uVar13 - 0x5c;
            lVar18 = uVar13 - 0x6c;
            lVar24 = 2;
            fVar5 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
            fVar2 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x1a) = fVar5;
            *(float *)(puVar9 + 0x19) = fVar5;
            *(float *)((int)puVar9 + 0xcc) = fVar5;
            *(float *)((int)puVar9 + 0xc4) = fVar5;
            fVar5 = fVar2 * fVar2;
            *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar2;
            *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar5;
            *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5 * fVar2;
            do {
              *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar5 * fVar5;
              iVar16 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0x6c;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar18 = lVar21;
            do {
              fVar5 = *pfVar19;
              fVar2 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar5;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar14 = 2;
            dVar25 = dVar27;
            do {
              iVar16 = (int)lVar15;
              iVar10 = (int)lVar21;
              lVar15 = lVar15 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xc4)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar28 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar4);
          }
          *(float *)((int)pvVar7 + 0x10c) = (float)dVar28;
          param_1->state = '\t';
          if (param_1->animationId != '\b') {
            MB_SetAnimation(param_1,8,2,1);
          }
          *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
          MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
        }
        else {
          param_1->state = '\n';
        }
      }
      param_1->damage = -1;
      MB_ColorDyingMoby(param_1,uVar23 + 0x60);
      if (*(uint *)((int)pvVar7 + 0x104) != 0) {
        GetBonePosition
                  (param_1,DAT_010c9f40,(ulonglong)*(uint *)((int)pvVar7 + 0x104) + 0x10);
        GetBoneTransformations(param_1,DAT_010c9f40,uVar13 - 0xc0);
        FastApplyTransform
                  ((Vec4 *)(*(int *)((int)pvVar7 + 0x104) + 0xc0),(Vec4 *)(uVar13 - 0xc0));
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xc4);
        fVar4 = *(float *)(iVar16 + 0xc0);
        fVar5 = *(float *)(iVar16 + 200);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xcc);
          dVar25 = dVar27;
          dVar28 = dVar27;
          dVar26 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xcc);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar26 = (double)(fVar4 * fVar11);
          dVar28 = (double)(fVar3 * fVar11);
          dVar25 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xc0) = (float)dVar26;
        *(float *)(iVar16 + 0xc4) = (float)dVar28;
        *(float *)(iVar16 + 200) = (float)dVar25;
        *(undefined4 *)(iVar16 + 0xcc) = uVar17;
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xd4);
        fVar4 = *(float *)(iVar16 + 0xd0);
        fVar5 = *(float *)(iVar16 + 0xd8);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xdc);
          dVar25 = dVar27;
          dVar28 = dVar27;
          dVar26 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xdc);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar26 = (double)(fVar4 * fVar11);
          dVar28 = (double)(fVar3 * fVar11);
          dVar25 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xd0) = (float)dVar26;
        *(float *)(iVar16 + 0xd4) = (float)dVar28;
        *(float *)(iVar16 + 0xd8) = (float)dVar25;
        *(undefined4 *)(iVar16 + 0xdc) = uVar17;
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xe4);
        fVar4 = *(float *)(iVar16 + 0xe0);
        fVar5 = *(float *)(iVar16 + 0xe8);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xec);
          dVar25 = dVar27;
          dVar28 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xec);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar25 = (double)(fVar4 * fVar11);
          dVar27 = (double)(fVar3 * fVar11);
          dVar28 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xe0) = (float)dVar25;
        *(float *)(iVar16 + 0xe4) = (float)dVar27;
        *(float *)(iVar16 + 0xe8) = (float)dVar28;
        *(undefined4 *)(iVar16 + 0xec) = uVar17;
        UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x104));
      }
      MB_ColorDyingMoby(param_1,uVar23 + 0x60);
    }
  }
  return;
}


// 0x03ad150 (0x1de0 bytes)
// inlined: FastAtan2 @0x3ad58c, FastAtan2 @0x3adad4, FastAtan2 @0x3adcd8, FastAtan2 @0x3ae148, FastAtan2 @0x3ae508, FastAtan2 @0x3ae710, FastAtan2 @0x3ae91c
/* Moby 541 */

void UpdateMoby_541(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  MOBY_OCLASSES MVar13;
  MobyModeBit MVar14;
  void *pvVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  Cuboid *pCVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined2 uVar32;
  int iVar28;
  undefined4 uVar29;
  MobyInstance *pMVar30;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar31;
  longlong lVar33;
  longlong lVar34;
  float *pfVar35;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar36;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  float fVar48;
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar27 = uVar23 - 0x2e0;
  puVar17 = (ulonglong *)lVar27;
  *puVar17 = uVar23;
  puVar17[0x5e] = in_LR;
  puVar17[0x59] = in_f29;
  puVar17[0x5a] = in_f30;
  puVar17[0x5b] = in_f31;
  puVar17[0x58] = unaff_r31;
  puVar17[0x56] = unaff_r29;
  puVar17[0x57] = unaff_r30;
  puVar17[0x55] = unaff_r28;
  puVar17[0x54] = unaff_r27;
  puVar17[0x53] = unaff_r26;
  pvVar15 = moby->pVar;
  uVar36 = ZEXT48(pvVar15);
  M541_003ac968();
  pSVar16 = Splines[*(int *)((int)pvVar15 + 0xc4)];
  DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar15 + 0x140));
  pCVar22 = Cuboids;
  fVar4 = DAT_00845594;
  bVar1 = moby->state;
  fVar48 = (moby->pos).z;
  fVar2 = (moby->pos).w;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (moby->animationId == '\n') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\v')) {
          MB_SetAnimation(lVar24,0xb,0,1);
        }
      }
      else {
        iVar28 = *(int *)((int)pvVar15 + 0xdc);
        fVar3 = (moby->pos).y;
        *(float *)(puVar17 + 0x16) = pSVar16->points[iVar28].x - (moby->pos).x;
        fVar4 = fVar4 * g_FrameTime;
        *(float *)((int)puVar17 + 0xb4) = pSVar16->points[iVar28].y - fVar3;
        *(float *)(puVar17 + 0x17) = pSVar16->points[iVar28].z - fVar48;
        *(float *)((int)puVar17 + 0xbc) = pSVar16->points[iVar28].w;
        ClampVec3Magnitude((double)fVar4,(Vec4 *)(puVar17 + 0x16));
        uVar29 = DAT_010c9f40;
        fVar48 = *(float *)((int)puVar17 + 0xb4);
        fVar4 = *(float *)(puVar17 + 0x17);
        (moby->pos).x = (moby->pos).x + *(float *)(puVar17 + 0x16);
        (moby->pos).y = (moby->pos).y + fVar48;
        (moby->pos).z = (moby->pos).z + fVar4;
        GetBonePosition(lVar24,uVar29,uVar23 - 0x220);
        puVar17[0xe] = 0;
        DamageSphereAtPos
                  (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar24,uVar23 - 0x220,
                   &DAT_003ad0e8,1);
        if ((g_CollOutput.pMoby == g_heroMobyPtr) && (DAT_00969ea0 == 0)) {
          PlayMobySound(6,0,moby);
        }
        if (SQRT(*(float *)(puVar17 + 0x17) * *(float *)(puVar17 + 0x17) +
                 *(float *)(puVar17 + 0x16) * *(float *)(puVar17 + 0x16) +
                 *(float *)((int)puVar17 + 0xb4) * *(float *)((int)puVar17 + 0xb4)) < 0.0001) {
          if (moby->animationId != '\t') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar24,9,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          moby->state = '\x06';
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x34,0x3ad0e8);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar28 = *(int *)((int)pvVar15 + 0xdc);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar29 = storeVectorElementWordIndexed
                             (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                              uVar36);
          *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
          if (iVar28 == 0) {
            *(undefined4 *)((int)pvVar15 + 0x108) = 1;
          }
          else if (iVar28 == pSVar16->cnt + -1) {
            *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
          }
        }
      }
    }
    else if (bVar1 == 4) {
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        iVar28 = *(int *)((int)pvVar15 + *(int *)((int)pvVar15 + 0xdc) * 4 + 0xd0);
        *(float *)(puVar17 + 0x10) = Cuboids[iVar28].pos.x;
        *(float *)((int)puVar17 + 0x84) = pCVar22[iVar28].pos.y;
        *(float *)(puVar17 + 0x11) = pCVar22[iVar28].pos.z;
        fVar48 = pCVar22[iVar28].pos.w;
      }
      else {
        *(undefined4 *)(puVar17 + 0x10) = *(undefined4 *)((int)pvVar15 + 0x70);
        *(undefined4 *)((int)puVar17 + 0x84) = *(undefined4 *)((int)pvVar15 + 0x74);
        *(undefined4 *)(puVar17 + 0x11) = *(undefined4 *)((int)pvVar15 + 0x78);
        fVar48 = *(float *)((int)pvVar15 + 0x7c);
      }
      *(float *)((int)puVar17 + 0x8c) = fVar48;
      dVar38 = 15.0;
      iVar28 = MB_MayaFrameTrigger(15.0,moby);
      if ((iVar28 == 0) || (*(int *)((int)pvVar15 + 0x104) == 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          *(uint *)((int)pvVar15 + 0xdc) = *(int *)((int)pvVar15 + 0xdc) + 1U & 1;
          moby->state = '\x03';
          if (moby->animationId != '\x17') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
            MB_SetAnimation(lVar24,0x17,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
        }
      }
      else {
        dVar41 = (double)(float)((double)DAT_00845590 * (double)g_FrameTime);
        dVar40 = (double)(float)((double)g_FrameTimeSq * 10.0);
        dVar39 = (double)GetGroundZ
                                   (0x3fe0000000000000,0x4024000000000000,
                                    (double)g_FrameTime,(double)g_FrameTimeSq,
                                    uVar23 - 0x260,0);
        uVar29 = *(undefined4 *)((int)pvVar15 + 0x104);
        lVar26 = uVar23 - 0x250;
        *(float *)(puVar17 + 0x11) = (float)dVar39;
        GetBonePosition(uVar29,0,lVar26);
        fVar48 = *(float *)((int)puVar17 + 0x84) - *(float *)((int)puVar17 + 0x94);
        fVar4 = *(float *)(puVar17 + 0x10) - *(float *)(puVar17 + 0x12);
        dVar39 = (double)SQRT(fVar4 * fVar4 + fVar48 * fVar48);
        *(undefined4 *)((int)puVar17 + 0xac) = *(undefined4 *)((int)puVar17 + 0x8c);
        *(undefined4 *)(puVar17 + 0x15) = 0;
        fVar4 = fVar4 * (float)(dVar41 / dVar39);
        fVar48 = fVar48 * (float)(dVar41 / dVar39);
        fVar3 = 0.0;
        if (0.0 - dVar39 < 0.0) {
          fVar3 = fVar4;
        }
        fVar11 = 0.0;
        if (0.0 - dVar39 < 0.0) {
          fVar11 = fVar48;
        }
        if (dVar39 - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        if (dVar39 - 0.0 < 0.0) {
          fVar11 = fVar48;
        }
        *(float *)(puVar17 + 0x14) = fVar3;
        *(float *)((int)puVar17 + 0xa4) = fVar11;
        dVar39 = (double)MB_computeLobVelocity(dVar41,-dVar40,lVar26,uVar23 - 0x260);
        *(float *)(puVar17 + 0x15) = (float)dVar39;
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 300.5);
        FUN_0032ca80(dVar40,lVar24,lVar26,uVar23 - 0x240);
      }
      dVar39 = (double)BlendAnimFrame(moby);
      fVar2 = (moby->pos).z;
      fVar6 = (moby->pos).w;
      if (dVar38 <= dVar39) {
        fVar48 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        uVar20 = (uint)(((ulonglong)*(uint *)((int)pvVar15 + 0xdc) + 1 & 0xffffffff) << 4) & 0x10;
        fVar3 = *(float *)((int)&pSVar16->points[0].x + uVar20) - fVar48;
        fVar11 = *(float *)((int)&pSVar16->points[0].y + uVar20) - fVar4;
        pfVar35 = (float *)&g_atanQuadrantTable;
        fVar7 = ABS(fVar3);
        fVar5 = ABS(fVar11);
        *(float *)(puVar17 + 0x2c) = fVar3;
        *(float *)((int)puVar17 + 0x164) = fVar11;
        *(float *)(puVar17 + 0x2d) = fVar7 - fVar5;
        dVar38 = 0.0;
        uVar36 = (ulonglong)(*(uint *)(puVar17 + 0x2c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x2d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x164) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar17 + 0x2c));
        if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar11 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)((int)puVar17 + 0x164));
        if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
          fVar8 = fVar7;
        }
        if (0.0 < fVar3) {
          lVar26 = uVar23 - 0x2d0;
          lVar33 = uVar23 - 0xdc;
          lVar34 = uVar23 - 0xcc;
          lVar37 = 2;
          fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x42) = fVar3;
          *(float *)(puVar17 + 0x41) = fVar3;
          *(float *)((int)puVar17 + 0x20c) = fVar3;
          *(float *)((int)puVar17 + 0x204) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar17 + 0x41) = *(float *)(puVar17 + 0x41) * fVar7;
          *(float *)((int)puVar17 + 0x20c) = *(float *)((int)puVar17 + 0x20c) * fVar3;
          *(float *)(puVar17 + 0x42) = *(float *)(puVar17 + 0x42) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar26 + 0x204) = *(float *)((int)lVar26 + 500) * fVar3 * fVar3;
            iVar28 = (int)lVar33;
            lVar26 = lVar26 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0xdc;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar3 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x204) = *(float *)((int)lVar26 + 0x204) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar7;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar28 = (int)lVar27;
            iVar31 = (int)lVar34;
            lVar27 = lVar27 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x204)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar11);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(f32 *)(puVar17 + 9) = fVar2;
        *(float *)((int)puVar17 + 0x44) = fVar4;
        *(f32 *)((int)puVar17 + 0x4c) = fVar6;
        M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
      }
      else {
        fVar48 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar3 = *(float *)(puVar17 + 0x10) - fVar48;
        fVar11 = *(float *)((int)puVar17 + 0x84) - fVar4;
        pfVar35 = (float *)&g_atanQuadrantTable;
        fVar7 = ABS(fVar3);
        fVar5 = ABS(fVar11);
        *(float *)((int)puVar17 + 0x16c) = fVar3;
        *(float *)(puVar17 + 0x2e) = fVar11;
        *(float *)((int)puVar17 + 0x174) = fVar7 - fVar5;
        dVar38 = 0.0;
        uVar36 = (ulonglong)(*(uint *)((int)puVar17 + 0x16c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x174) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x2e) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar17 + 0x16c));
        if (*(float *)((int)puVar17 + 0x174) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar11 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)(puVar17 + 0x2e));
        if (*(float *)((int)puVar17 + 0x174) - 0.0 < 0.0) {
          fVar8 = fVar7;
        }
        if (0.0 < fVar3) {
          lVar26 = uVar23 - 0x2d0;
          lVar33 = uVar23 - 0xbc;
          lVar34 = uVar23 - 0xac;
          lVar37 = 2;
          fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x46) = fVar3;
          *(float *)(puVar17 + 0x45) = fVar3;
          *(float *)((int)puVar17 + 0x22c) = fVar3;
          *(float *)((int)puVar17 + 0x224) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar17 + 0x45) = *(float *)(puVar17 + 0x45) * fVar7;
          *(float *)((int)puVar17 + 0x22c) = *(float *)((int)puVar17 + 0x22c) * fVar3;
          *(float *)(puVar17 + 0x46) = *(float *)(puVar17 + 0x46) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar26 + 0x224) = *(float *)((int)lVar26 + 0x214) * fVar3 * fVar3;
            iVar28 = (int)lVar33;
            lVar26 = lVar26 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0xbc;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar3 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x224) = *(float *)((int)lVar26 + 0x224) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar7;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar28 = (int)lVar27;
            iVar31 = (int)lVar34;
            lVar27 = lVar27 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x224)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar11);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(f32 *)(puVar17 + 9) = fVar2;
        *(float *)((int)puVar17 + 0x44) = fVar4;
        *(f32 *)((int)puVar17 + 0x4c) = fVar6;
        M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
      }
    }
    else if (bVar1 == 3) {
      iVar28 = FastDecTimerS32(uVar36 + 0xf0);
      if (iVar28 != 0) {
        iVar28 = *(int *)((int)pvVar15 + 0xdc);
        fVar48 = pSVar16->points[iVar28].x;
        fVar4 = fVar48 - (moby->pos).x;
        fVar3 = pSVar16->points[iVar28].y - (moby->pos).y;
        pfVar35 = (float *)&g_atanQuadrantTable;
        fVar5 = ABS(fVar4);
        fVar11 = ABS(fVar3);
        *(float *)(puVar17 + 0x2f) = fVar4;
        *(float *)((int)puVar17 + 0x17c) = fVar3;
        *(float *)(puVar17 + 0x30) = fVar5 - fVar11;
        dVar38 = 0.0;
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x2f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x30) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x17c) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar17 + 0x2f));
        if (*(float *)(puVar17 + 0x30) - 0.0 < 0.0) {
          fVar4 = fVar11;
        }
        fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar17 + 0x17c));
        if (*(float *)(puVar17 + 0x30) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar23 - 0x2d0;
          lVar34 = uVar23 - 0x8c;
          lVar33 = uVar23 - 0x9c;
          lVar37 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar17 + 0x4a) = fVar4;
          *(float *)(puVar17 + 0x49) = fVar4;
          *(float *)((int)puVar17 + 0x24c) = fVar4;
          *(float *)((int)puVar17 + 0x244) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar17 + 0x49) = *(float *)(puVar17 + 0x49) * fVar5;
          *(float *)((int)puVar17 + 0x24c) = *(float *)((int)puVar17 + 0x24c) * fVar4;
          *(float *)(puVar17 + 0x4a) = *(float *)(puVar17 + 0x4a) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0x244) = *(float *)((int)lVar26 + 0x234) * fVar4 * fVar4;
            iVar31 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0x9c;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar4 = *pfVar35;
            fVar5 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x244) = *(float *)((int)lVar26 + 0x244) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar5;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar31 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar19 = (int)lVar34;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar31 + 0x244)) +
                              *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                             *(float *)(iVar19 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar11 + fVar3);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(float *)(puVar17 + 9) = pSVar16->points[iVar28].z;
        fVar48 = pSVar16->points[iVar28].w;
        *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
        *(float *)((int)puVar17 + 0x4c) = fVar48;
        iVar28 = M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
        if (iVar28 != 0) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar29 = storeVectorElementWordIndexed
                             (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                              uVar36);
          *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
          moby->state = '\x04';
          if (moby->animationId != '\x15') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
            MB_SetAnimation(lVar24,0x15,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
          iVar28 = MB_randInt(2);
          if (iVar28 == 0) {
            *(undefined4 *)((int)pvVar15 + 0xb4) = 2;
          }
          else {
            pSVar16 = Splines[*(int *)((int)pvVar15 + 0xd8)];
            MB_getTargetInArea
                      (0x4028000000000000,lVar24,uVar36 + 0x70,pSVar16,0,0,pSVar16->points,
                       pSVar16->cnt);
          }
        }
      }
    }
    else if (bVar1 == 2) {
      FUN_00402050(*(undefined4 *)((int)pvVar15 + 0xf8));
      fVar48 = pSVar16->points[0].z;
      *(float *)(puVar17 + 8) = pSVar16->points[0].x;
      *(float *)(puVar17 + 9) = fVar48;
      fVar48 = (moby->rotation).z;
      *(float *)((int)puVar17 + 0x44) = pSVar16->points[0].y;
      *(float *)((int)puVar17 + 0x4c) = pSVar16->points[0].w;
      iVar28 = M541_003ac678((double)fVar48,lVar24);
      if (iVar28 != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar28 = *(int *)((int)pvVar15 + 0xc0);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        cVar18 = ((byte)(ZERO_MASK((1 - iVar28))) & 0xfe) + 7;
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar29 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                            uVar36);
        *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
        *(undefined4 *)((int)pvVar15 + 0xdc) = 1;
        *(undefined4 *)((int)pvVar15 + 0x108) = 1;
        moby->state = cVar18 + ((byte)(ZERO_MASK(iVar28)) & 3U - cVar18);
      }
    }
    else if ((bVar1 != 1) && (bVar1 == 0)) {
      *(undefined1 *)((int)pvVar15 + 0x2e) = 1;
      if (0 < *(int *)((int)pvVar15 + 200)) {
        sVar12.piece<0,1>() = moby->field76_0xb4;
        sVar12.piece<1,1>() = moby->field77_0xb5;
        uVar32 = (undefined2)((int)sVar12 / *(int *)((int)pvVar15 + 200));
        moby->field76_0xb4 = (char)((ushort)uVar32 >> 8);
        moby->field77_0xb5 = (char)uVar32;
      }
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | DISABLED;
      moby->enabled = '\0';
      iVar28 = MB_randInt(2);
      if (iVar28 != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar15 + 0x24) = 2;
      *(undefined1 *)((int)pvVar15 + 0x28) = 1;
      dVar38 = (double)MB_randRot();
      *(float *)((int)pvVar15 + 0x11c) = (float)dVar38;
      uVar29 = FUN_00401f88(*(undefined4 *)((int)pvVar15 + 0xcc),lVar24 + 0x10);
      *(f32 *)((int)pvVar15 + 0xe0) = (moby->pos).x;
      fVar2 = (moby->pos).y;
      *(undefined4 *)((int)pvVar15 + 0xf8) = uVar29;
      *(f32 *)((int)pvVar15 + 0xe4) = fVar2;
      *(f32 *)((int)pvVar15 + 0xe8) = (moby->pos).z;
      iVar28 = *(int *)((int)pvVar15 + 0xc0);
      *(f32 *)((int)pvVar15 + 0xec) = (moby->pos).w;
      if (iVar28 < 1) {
        if (-1 < iVar28) {
          pMVar30 = CreateMoby(TEST_DUMMY_BOMB_GLOVE);
          *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
        }
      }
      else if (iVar28 < 2) {
        pMVar30 = CreateMoby(TEST_DUMMY_WALLOPER);
        *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
      }
      else if (iVar28 < 3) {
        pMVar30 = CreateMoby(TEST_DUMMY_PYROCITOR);
        *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
        MB_InitDebrisList(uVar36 + 0x120);
      }
      iVar28 = *(int *)((int)pvVar15 + 0x104);
      if (iVar28 != 0) {
        *(ushort *)(iVar28 + 0x34) = *(ushort *)(iVar28 + 0x34) | 0x100;
        *(undefined2 *)(*(int *)((int)pvVar15 + 0x104) + 0x32) = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar15 + 0x104) + 0x30) = 0;
        *(undefined1 *)(*(int *)((int)pvVar15 + 0x104) + 0x31) = 1;
      }
    }
  }
  else if (bVar1 == 0xb) {
    iVar28 = FastDecTimerS32(uVar36 + 0xf0);
    if (iVar28 != 0) {
      *(undefined4 *)((int)pvVar15 + 0xfc) = 0;
      moby->state = '\x02';
      if (moby->animationId != '\t') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar24,9,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
      MVar14 = moby->modeBits;
      *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
      moby->modeBits = MVar14 | CAN_BE_AUTO_TARGETED;
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(100,0x3ad0e8);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar45 = loadVectorLeftIndexed(0xf0,uVar36);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar46 = loadVectorRightIndexed(0x100,uVar36);
    auVar47 = loadVectorLeftIndexed(0xe8,uVar36);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar44);
    auVar44 = loadVectorRightIndexed(0xf8,uVar36);
    auVar43 = vectorConvertFromSignedFixedPointWord(auVar45 | auVar46,0);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar47 | auVar44);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar29 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x18,lVar24);
    *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar29;
  }
  else if (bVar1 == 10) {
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x34,0x3ad0e8);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar43);
    lVar26 = lVar24 + 0x10;
    lVar27 = lVar24 + 0x40;
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar29 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,uVar36);
    *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
    fVar48 = g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    dVar38 = (double)(fVar48 * 12.0);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(dVar38,lVar24,0x655,lVar26,lVar27,0,0,0xf0,&DAT_00a15d30);
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(dVar38,lVar24,0x656,lVar26,lVar27,0,0);
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(dVar38,lVar24,0x657,lVar26,lVar27,0,0);
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar17 + 0x1e) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar17 + 0xf4) = fVar2;
    *(f32 *)((int)puVar17 + 0xfc) = fVar6;
    *(float *)(puVar17 + 0x1f) = (moby->pos).z + 1.2;
    MB_SpawnExplosionSparks(0x3fe0000000000000,0x4024000000000000,lVar24,uVar23 - 0x1f0);
    MB_SpawnBoltsFromCrate(lVar24,0,0xffffffffffffffff);
    PlayMobySound(7,0,moby);
    iVar28 = *(int *)((int)pvVar15 + 200);
    *(int *)((int)pvVar15 + 200) = iVar28 + -1;
    if (iVar28 == 0) {
      if (*(MobyInstance **)((int)pvVar15 + 0x104) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar15 + 0x104));
      }
      DeleteMoby(moby);
    }
    else {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      moby->state = '\v';
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      (moby->pos).x = *(f32 *)((int)pvVar15 + 0xe0);
      (moby->pos).y = *(f32 *)((int)pvVar15 + 0xe4);
      (moby->pos).z = *(f32 *)((int)pvVar15 + 0xe8);
      (moby->pos).w = *(f32 *)((int)pvVar15 + 0xec);
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar29 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,uVar36)
      ;
      *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
    }
  }
  else if (bVar1 == 9) {
    iVar28 = *(int *)((int)pvVar15 + 0xdc);
    fVar48 = *(float *)((int)pvVar15 + 0x10c);
    fVar4 = pSVar16->points[iVar28].z;
    *(float *)(puVar17 + 8) = pSVar16->points[iVar28].x;
    *(float *)(puVar17 + 9) = fVar4;
    fVar4 = pSVar16->points[iVar28].w;
    *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
    *(float *)((int)puVar17 + 0x4c) = fVar4;
    M541_003ac678((double)fVar48,lVar24);
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = (u8)*(undefined4 *)((int)pvVar15 + 0x110);
      uVar20 = *(uint *)((int)pvVar15 + 0x114);
      if (moby->animationId != uVar20) {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar24,uVar20,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
    }
  }
  else if (bVar1 == 8) {
    if (*(int *)((int)pvVar15 + 0xb4) != 2) {
      fVar4 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar11 = *(float *)((int)pvVar15 + 0x70) - fVar4;
      fVar5 = *(float *)((int)pvVar15 + 0x74) - fVar3;
      pfVar35 = (float *)&g_atanQuadrantTable;
      fVar8 = ABS(fVar11);
      fVar7 = ABS(fVar5);
      *(float *)(puVar17 + 0x29) = fVar11;
      *(float *)((int)puVar17 + 0x14c) = fVar5;
      *(float *)(puVar17 + 0x2a) = fVar8 - fVar7;
      dVar38 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x29) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x2a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x14c) >> 0x1d) & 4;
      fVar11 = ABS(*(float *)(puVar17 + 0x29));
      if (*(float *)(puVar17 + 0x2a) - 0.0 < 0.0) {
        fVar11 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)((int)puVar17 + 0x14c));
      if (*(float *)(puVar17 + 0x2a) - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      if (0.0 < fVar11) {
        lVar26 = uVar23 - 0x2d0;
        lVar33 = uVar23 - 0x11c;
        lVar34 = uVar23 - 0x10c;
        lVar37 = 2;
        fVar11 = (fVar9 - fVar11) / (fVar9 + fVar11);
        fVar8 = fVar11 * fVar11;
        *(float *)(puVar17 + 0x3a) = fVar11;
        *(float *)(puVar17 + 0x39) = fVar11;
        *(float *)((int)puVar17 + 0x1cc) = fVar11;
        *(float *)((int)puVar17 + 0x1c4) = fVar11;
        fVar11 = fVar8 * fVar8;
        *(float *)(puVar17 + 0x39) = *(float *)(puVar17 + 0x39) * fVar8;
        *(float *)((int)puVar17 + 0x1cc) = *(float *)((int)puVar17 + 0x1cc) * fVar11;
        *(float *)(puVar17 + 0x3a) = *(float *)(puVar17 + 0x3a) * fVar11 * fVar8;
        do {
          *(float *)((int)lVar26 + 0x1c4) = *(float *)((int)lVar26 + 0x1b4) * fVar11 * fVar11;
          iVar28 = (int)lVar33;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar11 * fVar11;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x11c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar11 = *pfVar35;
          fVar8 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x1c4) = *(float *)((int)lVar26 + 0x1c4) * fVar11;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar33 = 2;
        lVar26 = lVar27;
        do {
          iVar28 = (int)lVar26;
          iVar31 = (int)lVar34;
          lVar26 = lVar26 + 0x10;
          lVar34 = lVar34 + 0x10;
          dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x1c4)) +
                            *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                           *(float *)(iVar31 + 0xc));
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar7 + fVar5);
      }
      *(float *)(puVar17 + 8) = fVar4;
      *(float *)(puVar17 + 9) = fVar48;
      *(float *)((int)puVar17 + 0x44) = fVar3;
      *(f32 *)((int)puVar17 + 0x4c) = fVar2;
      M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
    }
    if (*(int *)((int)pvVar15 + 0x104) != 0) {
      GetBonePosition(*(int *)((int)pvVar15 + 0x104),0,uVar23 - 0x210);
      fVar4 = *(float *)(puVar17 + 0x1a) - (moby->pos).x;
      fVar3 = *(float *)((int)puVar17 + 0xd4) - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar8 = ABS(fVar3);
      *(float *)((int)puVar17 + 0x13c) = fVar4;
      *(float *)(puVar17 + 0x28) = fVar3;
      *(float *)((int)puVar17 + 0x144) = fVar5 - fVar8;
      fVar11 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x28) >> 0x1d) & 4;
      fVar48 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar7 = ABS(*(float *)((int)puVar17 + 0x13c));
      if (*(float *)((int)puVar17 + 0x144) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)(puVar17 + 0x28));
      if (*(float *)((int)puVar17 + 0x144) - 0.0 < 0.0) {
        fVar10 = fVar5;
      }
      fVar21 = fVar11;
      if (0.0 < fVar7) {
        lVar26 = uVar23 - 0x2d0;
        lVar34 = uVar23 - 300;
        lVar33 = uVar23 - 0x13c;
        lVar37 = 2;
        fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
        fVar10 = fVar7 * fVar7;
        *(float *)(puVar17 + 0x36) = fVar7;
        *(float *)(puVar17 + 0x35) = fVar7;
        *(float *)((int)puVar17 + 0x1ac) = fVar7;
        *(float *)((int)puVar17 + 0x1a4) = fVar7;
        fVar7 = fVar10 * fVar10;
        *(float *)(puVar17 + 0x35) = *(float *)(puVar17 + 0x35) * fVar10;
        *(float *)((int)puVar17 + 0x1ac) = *(float *)((int)puVar17 + 0x1ac) * fVar7;
        *(float *)(puVar17 + 0x36) = *(float *)(puVar17 + 0x36) * fVar7 * fVar10;
        do {
          *(float *)((int)lVar26 + 0x1a4) = *(float *)((int)lVar26 + 0x194) * fVar7 * fVar7;
          iVar28 = (int)lVar33;
          lVar33 = lVar33 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar7 * fVar7;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x13c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar7 = *pfVar35;
          fVar10 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x1a4) = *(float *)((int)lVar26 + 0x1a4) * fVar7;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar10;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar33 = 2;
        lVar26 = lVar27;
        fVar7 = fVar11;
        do {
          iVar28 = (int)lVar26;
          iVar31 = (int)lVar34;
          lVar26 = lVar26 + 0x10;
          lVar34 = lVar34 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar28 + 0x1a4) + *(float *)(iVar31 + 4) +
                  *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        fVar21 = (fVar7 + 0.7853982) * fVar48 + fVar9;
      }
      fVar21 = fVar21 + 1.5707963;
      fVar48 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar48 = fVar21;
      }
      *(float *)(puVar17 + 0x26) = fVar4;
      *(float *)(puVar17 + 0x27) = fVar5 - fVar8;
      *(float *)((int)puVar17 + 0x134) = fVar3;
      fVar4 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar48 < 0.0) {
        fVar4 = fVar48;
      }
      fVar3 = fVar4 * fVar4;
      fVar48 = ABS(*(float *)(puVar17 + 0x26));
      if (*(float *)(puVar17 + 0x27) - 0.0 < 0.0) {
        fVar48 = fVar8;
      }
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x134) >> 0x1d) & 4;
      fVar8 = fVar3 * fVar3 * fVar4;
      fVar9 = fVar3 * fVar8;
      fVar7 = ABS(*(float *)((int)puVar17 + 0x134));
      if (*(float *)(puVar17 + 0x27) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      *(float *)(puVar17 + 0x1c) =
           fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4;
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (0.0 < fVar48) {
        lVar26 = uVar23 - 0x2d0;
        lVar33 = uVar23 - 0x15c;
        lVar34 = uVar23 - 0x14c;
        lVar37 = 2;
        fVar48 = (fVar7 - fVar48) / (fVar7 + fVar48);
        fVar5 = fVar48 * fVar48;
        *(float *)(puVar17 + 0x32) = fVar48;
        *(float *)(puVar17 + 0x31) = fVar48;
        *(float *)((int)puVar17 + 0x18c) = fVar48;
        *(float *)((int)puVar17 + 0x184) = fVar48;
        fVar48 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x31) = *(float *)(puVar17 + 0x31) * fVar5;
        *(float *)((int)puVar17 + 0x18c) = *(float *)((int)puVar17 + 0x18c) * fVar48;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar48 * fVar5;
        do {
          *(float *)((int)lVar26 + 0x184) = *(float *)((int)lVar26 + 0x174) * fVar48 * fVar48;
          iVar28 = (int)lVar33;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar48 * fVar48;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x15c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar48 = *pfVar35;
          fVar5 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x184) = *(float *)((int)lVar26 + 0x184) * fVar48;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar5;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar26 = 2;
        do {
          iVar28 = (int)lVar27;
          iVar31 = (int)lVar34;
          lVar27 = lVar27 + 0x10;
          lVar34 = lVar34 + 0x10;
          fVar11 = fVar11 + *(float *)(iVar28 + 0x184) + *(float *)(iVar31 + 4) +
                   *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar11 = (fVar11 + 0.7853982) * fVar3 + fVar4;
      }
      *(undefined4 *)(puVar17 + 0x1d) = 0;
      dVar38 = (double)DAT_00845598;
      fVar48 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar48 = fVar11;
      }
      fVar4 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar48 < 0.0) {
        fVar4 = fVar48;
      }
      fVar48 = fVar4 * fVar4;
      fVar3 = fVar48 * fVar48 * fVar4;
      fVar11 = fVar48 * fVar3;
      *(float *)((int)puVar17 + 0xe4) =
           fVar48 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar48 * fVar4 * -0.16666657 + fVar4;
      MB_UpdateDebris(dVar38,uVar36 + 0x120,uVar23 - 0x210,uVar23 - 0x200);
      *(undefined4 *)(puVar17 + 0x1d) = 0x3f800000;
      *(undefined4 *)((int)puVar17 + 0xec) = 0x45afdf66;
      SetCollDamIn
                (0x3ff0000000000000,uVar23 - 0x1e0,lVar24,0x10001,0x10000,uVar23 - 0x200);
      MVar13 = moby->oClass;
      *(undefined1 *)(puVar17 + 0x23) = 5;
      *(undefined1 *)((int)puVar17 + 0x119) = 1;
      *(MOBY_OCLASSES *)((int)puVar17 + 0x11a) = MVar13;
      MB_DebrisCollide(uVar36 + 0x120,lVar24,uVar23 - 0x1e0);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      *(uint *)((int)pvVar15 + 0xdc) = *(int *)((int)pvVar15 + 0xdc) + 1U & 1;
      moby->state = '\a';
      if (moby->animationId != '\x03') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
        MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar28 = FastDecTimerS32(uVar36 + 0xf0);
    if (iVar28 != 0) {
      iVar28 = *(int *)((int)pvVar15 + 0xdc);
      fVar48 = (moby->rotation).z;
      fVar4 = pSVar16->points[iVar28].z;
      *(float *)(puVar17 + 8) = pSVar16->points[iVar28].x;
      *(float *)(puVar17 + 9) = fVar4;
      fVar4 = pSVar16->points[iVar28].w;
      *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
      *(float *)((int)puVar17 + 0x4c) = fVar4;
      iVar28 = M541_003ac678((double)fVar48,lVar24);
      if (iVar28 != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar29 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                            uVar36);
        *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
        moby->state = '\b';
        if (moby->animationId != '\x01') {
          puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
          MB_SetAnimation(lVar24,1,0,*(undefined4 *)((int)puVar17 + 0x26c));
        }
        iVar28 = MB_randInt(2);
        if (iVar28 == 0) {
          *(undefined4 *)((int)pvVar15 + 0xb4) = 2;
        }
        else {
          pSVar16 = Splines[*(int *)((int)pvVar15 + 0xd8)];
          MB_getTargetInArea
                    (0x4028000000000000,lVar24,uVar36 + 0x70,pSVar16,0,0,pSVar16->points,
                     pSVar16->cnt);
        }
      }
    }
  }
  else if (bVar1 == 6) {
    iVar28 = *(int *)((int)pvVar15 + 0xdc) + *(int *)((int)pvVar15 + 0x108);
    fVar48 = pSVar16->points[iVar28].x - (moby->pos).x;
    fVar4 = pSVar16->points[iVar28].y - (moby->pos).y;
    fVar3 = ABS(fVar48);
    fVar11 = ABS(fVar4);
    *(float *)((int)puVar17 + 0x154) = fVar48;
    *(float *)(puVar17 + 0x2b) = fVar4;
    *(float *)((int)puVar17 + 0x15c) = fVar3 - fVar11;
    fVar48 = 0.0;
    uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x154) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar17 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar17 + 0x2b) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar17 + 0x154));
    if (*(float *)((int)puVar17 + 0x15c) - 0.0 < 0.0) {
      fVar4 = fVar11;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar11 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar17 + 0x2b));
    if (*(float *)((int)puVar17 + 0x15c) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar4) {
      lVar26 = uVar23 - 0x2d0;
      lVar34 = uVar23 - 0xec;
      lVar33 = uVar23 - 0xfc;
      lVar37 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar17 + 0x3e) = fVar4;
      *(float *)(puVar17 + 0x3d) = fVar4;
      *(float *)((int)puVar17 + 0x1ec) = fVar4;
      *(float *)((int)puVar17 + 0x1e4) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar17 + 0x3d) = *(float *)(puVar17 + 0x3d) * fVar3;
      *(float *)((int)puVar17 + 0x1ec) = *(float *)((int)puVar17 + 0x1ec) * fVar4;
      *(float *)(puVar17 + 0x3e) = *(float *)(puVar17 + 0x3e) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar26 + 0x1e4) = *(float *)((int)lVar26 + 0x1d4) * fVar4 * fVar4;
        iVar31 = (int)lVar33;
        lVar33 = lVar33 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
        lVar34 = lVar34 + 8;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      lVar37 = 4;
      lVar34 = uVar23 - 0xfc;
      pfVar35 = (float *)&DAT_007358e0;
      lVar26 = lVar27;
      lVar33 = lVar34;
      do {
        fVar4 = *pfVar35;
        fVar3 = pfVar35[1];
        pfVar35 = pfVar35 + 2;
        *(float *)((int)lVar26 + 0x1e4) = *(float *)((int)lVar26 + 0x1e4) * fVar4;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar3;
        lVar33 = lVar33 + 8;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      lVar26 = 2;
      do {
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        iVar19 = (int)lVar34;
        lVar34 = lVar34 + 0x10;
        fVar48 = fVar48 + *(float *)(iVar31 + 0x1e4) + *(float *)(iVar19 + 4) +
                 *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      fVar48 = (fVar48 + 0.7853982) * fVar5 + fVar11;
    }
    fVar48 = OrganicDeltAng
                       (fVar48,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                        g_FrameTime * 25.132742,&(moby->rotation).z,0x3ad0e8,
                        (float *)((int)pvVar15 + 0xfc));
    iVar31 = FastDecTimerS32((double)fVar48,uVar36 + 0xf0);
    if (iVar31 != 0) {
      *(int *)((int)pvVar15 + 0xdc) = iVar28;
      if (moby->animationId != '\n') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar24,10,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
      moby->state = '\x05';
    }
  }
  return;
}



// game/update/moby107.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1b32c0-0x1b3df4
#include "game/update/moby107.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby1069.h"
#include "game/update/moby282.h"
#include "idol/fastfunc.h"

// 0x01b32c0 (0xd0 bytes)
void M1069_001b32c0(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\t' && param_1->state != '\b')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\b';
  }
  param_1->damage = -1;
  return;
}


// 0x01b33e0 (0xa14 bytes)
// inlined: FastAtan2 @0x1b38d8
/* Moby 107 */

void UpdateMoby_107(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  void *pvVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  ulonglong *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  ulonglong uVar15;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float fVar36;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar19 = uVar14 - 0x170;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar14;
  puVar11[0x30] = in_LR;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x2b] = unaff_r31;
  puVar11[0x2a] = unaff_r30;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  dVar30 = 0.0;
  puVar11[0x29] = unaff_r29;
  puVar11[0x28] = unaff_r28;
  puVar11[0x27] = unaff_r27;
  *(undefined4 *)(puVar11 + 0x20) = 0;
  uVar16 = MB_damage(moby,0x330000,0);
  MB_HandleDamage(moby,uVar16,uVar24 + 0x20,0,(int)puVar11 + 0xfc,puVar11 + 0x20,0,4);
  if (((*(int *)((int)puVar11 + 0xfc) != 1) && (moby->state != '\t' && moby->state != '\b')) &&
     (fVar36 = *(float *)((int)pvVar8 + 0x20) - *(float *)(puVar11 + 0x20),
     *(float *)((int)pvVar8 + 0x20) = fVar36, (double)fVar36 <= dVar30)) {
    moby->state = '\b';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  uVar15 = ZEXT48(Splines[*(int *)((int)pvVar8 + 0x70)]);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar8 + 0x90) = fVar2;
        *(f32 *)((int)pvVar8 + 0x94) = (moby->pos).y;
        *(f32 *)((int)pvVar8 + 0x98) = (moby->pos).z;
        *(f32 *)((int)pvVar8 + 0x9c) = (moby->pos).w;
        *(f32 *)((int)pvVar8 + 0x9c) = (moby->rotation).z;
      }
      else {
        iVar17 = MB_IsPntInCuboid
                           ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar8 + 0x88));
        if (iVar17 != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          moby->state = '\x02';
          auVar32 = loadVectorLeftIndexed(0x78,uVar24);
          auVar33 = loadVectorRightIndexed(0x88,uVar24);
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar32 | auVar33,0);
          auVar32 = loadVectorLeftIndexed(4,0x1b3390);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorAddFloatingPoint
                              (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                              );
          auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                              uVar24);
          *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar17 = FastDecTimerS32(uVar24 + 0xa4);
      if (iVar17 != 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        moby->state = '\x03';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
      }
    }
    else if (bVar1 < 4) {
      iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
      *(int *)((int)pvVar8 + 0xa4) = iVar17;
      puVar11[0x25] = (longlong)iVar17;
      M107_001b31d8
                ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 30.5),moby,
                 uVar24 + 0x90,uVar15 + 0x10);
      if (*(int *)((int)pvVar8 + 0xa4) == 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(f32 *)((int)pvVar8 + 0xa8) = (moby->rotation).z;
        moby->state = '\x06';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
      }
    }
    else {
      iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
      puVar11[0x25] = (longlong)iVar17;
      *(int *)((int)pvVar8 + 0xa4) = iVar17;
      if (*(int *)((int)pvVar8 + 0xa0) == 0) {
        M107_001b31d8
                  ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 120.5),moby,
                   uVar15 + 0x10,uVar15 + 0x20);
      }
      else {
        M107_001b31d8
                  ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 120.5),moby,
                   uVar15 + 0x20,uVar15 + 0x10);
      }
      if (*(int *)((int)pvVar8 + 0xa4) == 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(uint *)((int)pvVar8 + 0xa0) = *(int *)((int)pvVar8 + 0xa0) + 1U & 1;
        moby->state = '\x06';
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
        *(f32 *)((int)pvVar8 + 0xa8) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 == 10) {
    fVar36 = Delt(*(float *)((int)pvVar8 + 0x98),g_FrameTime * 2.0,
                            &(moby->pos).z);
    if ((double)fVar36 == dVar30) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 9) {
    if (*(int *)((int)pvVar8 + 0x74) != 0) {
      *(int *)((int)pvVar8 + 0x74) = *(int *)((int)pvVar8 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0x90);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0x94);
      fVar36 = *(float *)((int)pvVar8 + 0x98);
      (moby->pos).z = fVar36;
      (moby->pos).w = *(f32 *)((int)pvVar8 + 0x9c);
      (moby->rotation).z = *(f32 *)((int)pvVar8 + 0x9c);
      pMVar9 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar36 - 3.0;
      *(undefined4 *)((int)pvVar8 + 0xa0) = 0;
      moby->enabled = '\x01';
      puVar10 = pMVar9->collision;
      moby->state = '\n';
      moby->collision = puVar10;
    }
  }
  else if (bVar1 == 8) {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar11 + 0x1c) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar11 + 0xe4) = fVar2;
    *(f32 *)((int)puVar11 + 0xec) = fVar6;
    fVar36 = (moby->pos).z;
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 0;
    puVar11[0x15] = 7;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    *(float *)(puVar11 + 0x1d) = fVar36 + 0.75;
    MB_genericExplosion
              (dVar30,dVar30,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
               0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,uVar14 - 0x90,&DAT_001b3390,
               7,7,10,0x14);
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->state = '\t';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else if (bVar1 == 7) {
    iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
    *(int *)((int)pvVar8 + 0xa4) = iVar17;
    if (iVar17 == 0) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      moby->state = '\x04';
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0xc,0x1b3390);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
    }
  }
  else if (bVar1 == 6) {
    iVar18 = *(int *)((int)pvVar8 + 0xa4) + -1;
    *(int *)((int)pvVar8 + 0xa4) = iVar18;
    iVar17 = *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0xa0) * 4 + 0x80);
    fVar36 = Cuboids[iVar17].pos.x - (moby->pos).x;
    fVar3 = Cuboids[iVar17].pos.y - (moby->pos).y;
    dVar28 = ABS((double)fVar36);
    dVar27 = ABS((double)fVar3);
    *(float *)(puVar11 + 0x1e) = fVar36;
    *(float *)((int)puVar11 + 0xf4) = fVar3;
    *(float *)(puVar11 + 0x1f) = (float)(dVar28 - dVar27);
    uVar15 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar11 + 0x1e));
    if ((double)*(float *)(puVar11 + 0x1f) - dVar30 < 0.0) {
      dVar26 = dVar27;
    }
    fVar36 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar11 + 0xf4));
    if ((double)*(float *)(puVar11 + 0x1f) - dVar30 < 0.0) {
      dVar27 = dVar28;
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (dVar30 < dVar26) {
      lVar22 = uVar14 - 0x160;
      lVar20 = uVar14 - 0x5c;
      lVar21 = uVar14 - 0x6c;
      lVar25 = 2;
      fVar4 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x22) = fVar4;
      *(float *)(puVar11 + 0x21) = fVar4;
      *(float *)((int)puVar11 + 0x10c) = fVar4;
      *(float *)((int)puVar11 + 0x104) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar5;
      *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar4;
      *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar4 * fVar4;
        iVar17 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar22 = uVar14 - 0x6c;
      lVar25 = 4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar22;
      lVar21 = lVar19;
      do {
        fVar4 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar21 + 0x104) = *(float *)((int)lVar21 + 0x104) * fVar4;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar17 = (int)lVar19;
        iVar12 = (int)lVar22;
        lVar19 = lVar19 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0x104)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar36 + fVar3);
    }
    puVar11[0x25] = (longlong)iVar18;
    dVar26 = (double)M107_001b30e8
                               ((double)*(float *)((int)pvVar8 + 0xa8),dVar30,
                                (double)(longlong)puVar11[0x25],
                                (double)(longlong)(animationSpeed * 30.5),moby);
    (moby->rotation).z = (float)dVar26;
    pCVar13 = Cuboids;
    if (*(int *)((int)pvVar8 + 0xa4) == 0) {
      fVar36 = (float)(dVar30 + 1.570796251296997);
      dVar26 = (double)(float)(3.141592502593994 - dVar30);
      if (dVar30 - (double)(float)(3.141592502593994 - dVar30) < 0.0) {
        dVar26 = dVar30;
      }
      fVar3 = 3.1415925 - fVar36;
      if (fVar36 - (3.1415925 - fVar36) < 0.0) {
        fVar3 = fVar36;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar30);
      if ((double)(float)(-3.141592502593994 - dVar30) - dVar26 < 0.0) {
        dVar27 = dVar26;
      }
      fVar4 = -3.1415925 - fVar36;
      if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar30 = (double)(g_FrameTime * 6.0);
      fVar36 = (moby->pos).z;
      dVar29 = (double)(DAT_0071f418 * 10.0);
      fVar5 = fVar4 * fVar4;
      dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      fVar2 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      fVar3 = fVar5 * fVar5 * fVar4;
      dVar26 = (double)(float)(dVar28 * dVar31);
      fVar7 = (moby->pos).w;
      iVar17 = *(int *)((int)pvVar8 + 0xa0);
      *(undefined4 *)(puVar11 + 0x1b) = 0;
      *(float *)(puVar11 + 0x19) = fVar36 + 1.0;
      fVar36 = fVar5 * fVar3;
      *(f32 *)((int)puVar11 + 0xcc) = fVar7;
      iVar17 = *(int *)((int)pvVar8 + iVar17 * 4 + 0x80);
      *(f32 *)((int)puVar11 + 0xc4) = fVar6;
      *(f32 *)(puVar11 + 0x18) = fVar2;
      *(float *)((int)puVar11 + 0xd4) =
           (float)((double)((float)(dVar28 * dVar26) * 2.601887e-06 +
                           (float)(dVar26 * -0.0001980741071747616 +
                                  (double)(float)(dVar31 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar28 * dVar27) *
                                                                 -0.16666656732559204 + dVar27)))) *
                  dVar30);
      *(float *)(puVar11 + 0x1a) =
           (float)((double)(fVar5 * fVar36 * 2.601887e-06 +
                           fVar36 * -0.0001980741 +
                           fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * dVar30);
      dVar30 = (double)MB_computeLobVelocity
                                 (dVar30,-dVar29,uVar14 - 0xb0,&pCVar13[iVar17].pos);
      *(float *)(puVar11 + 0x1b) = (float)dVar30;
      puVar11[0x25] = (longlong)(int)(animationSpeed * 300.5);
      FUN_0032ca80(dVar29,moby,uVar14 - 0xb0,uVar14 - 0xa0);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      moby->state = '\a';
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0xc,0x1b3390);
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
    }
  }
  return;
}



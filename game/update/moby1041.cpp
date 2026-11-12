// game/update/moby1041.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x195e08-0x196a84
#include "game/update/moby1041.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby882.h"
#include "idol/fastfunc.h"

// 0x0195e08 (0xc7c bytes)
// inlined: FastAtan2 @0x196434, FastAtan2 @0x196648
/* Moby 1041 */

void UpdateMoby_1041(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar19;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  ulonglong in_f26;
  double in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x290;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar17;
  puVar13[0x54] = in_LR;
  puVar13[0x4a] = in_f24;
  puVar13[0x4b] = in_f25;
  puVar13[0x4c] = in_f26;
  puVar13[0x4d] = (ulonglong)in_f27;
  puVar13[0x4e] = in_f28;
  puVar13[0x4f] = in_f29;
  puVar13[0x50] = in_f30;
  puVar13[0x51] = in_f31;
  puVar13[0x46] = unaff_r28;
  puVar13[0x45] = unaff_r27;
  puVar13[0x49] = unaff_r31;
  puVar13[0x48] = unaff_r30;
  puVar13[0x47] = unaff_r29;
  puVar13[0x44] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    pvVar8 = moby->pVar;
    uVar27 = ZEXT48(pvVar8);
    if ((moby->enabled != '\0') &&
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
       fVar5 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
      MB_SetZBoundsFromGround(lVar18);
      moby->shadow = '\x15';
    }
    if (pvVar8 != (void *)0x0) {
      iVar20 = MB_damage(lVar18,0x230000,0);
      iVar21 = MB_HandleDamage(moby,iVar20,uVar27 + 0x20,0,puVar13 + 0x36,0,0,4);
      iVar22 = *(int *)(puVar13 + 0x36);
      if (((iVar21 < 3) && (-1 < iVar21)) && (0 < iVar21)) {
        *(undefined4 *)((int)pvVar8 + 0x20) = 0;
      }
      if ((1 < iVar22) &&
         (((iVar20 == 0 || (*(int *)(iVar20 + 0x20) == 0)) ||
          (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) != 0x372)))) {
        uVar9 = (int)*(uint *)((int)pvVar8 + 0x20) >> 0x1f;
        uVar10 = (int)*(uint *)(iVar20 + 0x2c) >> 0x1f;
        fVar3 = *(float *)(iVar20 + 0x2c);
        if ((int)((uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x20)) - uVar9) <=
            (int)((uVar10 >> 1 ^ *(uint *)(iVar20 + 0x2c)) - uVar10)) {
          MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
          uVar38 = 0;
          *(undefined4 *)((int)pvVar8 + 0x20) = 0;
          *(undefined4 *)((int)puVar13 + 0xcc) = 0;
          *(undefined4 *)(puVar13 + 0x19) = 0;
          *(undefined4 *)((int)puVar13 + 0xc4) = 0;
          *(undefined4 *)(puVar13 + 0x18) = 0;
          puVar13[0x12] = 1;
          puVar13[0x14] = 1;
          puVar13[0x15] = 1;
          puVar13[0x16] = 0xffffffffffffffff;
          puVar13[0x17] = 0;
          MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar18,uVar17 - 0x1d0,0,0,1,10,3,0x10);
          puVar13[0xe] = ZEXT48(&DAT_00a15d30);
          puVar13[0xf] = ZEXT48(&DAT_00a15d30);
          MB_SpawnDebrisMoby(uVar38,lVar18,0x621,lVar18 + 0x10,lVar18 + 0x40,0,0);
          puVar13[0xe] = ZEXT48(&DAT_00a15d30);
          puVar13[0xf] = ZEXT48(&DAT_00a15d30);
          MB_SpawnDebrisMoby(uVar38,lVar18,0x622,lVar18 + 0x10,lVar18 + 0x40,0,0);
          DeleteMoby(moby);
          return;
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        *(float *)((int)pvVar8 + 0x20) = *(float *)((int)pvVar8 + 0x20) - fVar3;
        auVar41 = loadVectorLeftIndexed(0x1c,0x195da8);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar27);
        *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
        MB_UpdateLightsTransition(lVar18,uVar27 + 0x60);
      }
      moby->damage = -1;
      MB_ColorDyingMoby(lVar18,uVar27 + 0x60);
      dVar39 = 20.0;
      MB_getTarget(0x4034000000000000,lVar18);
      bVar2 = moby->state;
      if (bVar2 == 0) {
        iVar22 = MB_randRange(0,10);
        puVar13[0x42] = (longlong)iVar22;
        fVar3 = animationSpeed;
        iVar22 = *(int *)((int)pvVar8 + 0xb0);
        puVar13[0x42] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x42] + 0.5));
        puVar13[0x42] = (longlong)iVar22;
        iVar22 = worldUpdateTime;
        puVar13[0x42] = (longlong)(int)(fVar3 * ((float)(longlong)puVar13[0x42] + 0.5));
        *(int *)((int)pvVar8 + 0xb4) =
             iVar22 + *(int *)((int)puVar13 + 0x214) + *(int *)((int)puVar13 + 0x214);
        AttachManipulator(moby,0,(int)pvVar8 + 0x70);
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0;
        PlayMobySound(0,4,moby);
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0;
      }
      else if (bVar2 < 2) {
        auVar41 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar8 + 0xb4) <= worldUpdateTime) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x28,0x195da8);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar41 = ZEXT416((uint)(auVar41.piece<0,4>() + auVar42.piece<0,4>())) & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xb4,
                              uVar27);
          *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar12;
          *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
          dVar39 = (double)MB_randRot();
          *(float *)((int)pvVar8 + 0xbc) = (float)dVar39;
          *(undefined2 *)((int)pvVar8 + 0xba) = 0;
          moby->state = '\x02';
        }
      }
      else if (bVar2 < 3) {
        iVar22 = FastDecTimerS16(uVar27 + 0xb8);
        if (iVar22 != 0) {
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar41 = loadVectorLeftIndexed(0x2c,0x195da8);
          auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar41 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60
                               ,auVar42);
          auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
          auVar41 = vectorSplatHalfWord(auVar41,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar41,0xb8,uVar27);
          *(undefined2 *)((int)pvVar8 + 0xb8) = uVar11;
          if (((moby->enabled != '\0') ||
              ((fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
               fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), fVar3 < 90.0 &&
               ((*(uint *)((int)pvVar8 + 0xc4) & 1) != 0)))) || (fVar3 < 40.0)) {
            *(uint *)((int)pvVar8 + 0xc4) = *(uint *)((int)pvVar8 + 0xc4) ^ 1;
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar5 = fVar3 - *(float *)((int)puVar13 + 0x164);
            fVar6 = fVar4 - *(float *)(puVar13 + 0x2c);
            dVar40 = 0.7853981852531433;
            if ((double)SQRT(fVar6 * fVar6 + fVar5 * fVar5) < dVar39) {
              fVar4 = *(float *)(puVar13 + 0x2c) - fVar4;
              fVar3 = *(float *)((int)puVar13 + 0x164) - fVar3;
              fVar6 = ABS(fVar4);
              fVar5 = ABS(fVar3);
              *(float *)(puVar13 + 0x38) = fVar4;
              *(float *)((int)puVar13 + 0x1c4) = fVar3;
              *(float *)(puVar13 + 0x39) = fVar6 - fVar5;
              fVar3 = 0.0;
              uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x38) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x39) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x1c4) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x38));
              if (*(float *)(puVar13 + 0x39) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
              fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
              fVar14 = ABS(*(float *)((int)puVar13 + 0x1c4));
              if (*(float *)(puVar13 + 0x39) - 0.0 < 0.0) {
                fVar14 = fVar6;
              }
              if (0.0 < fVar4) {
                lVar19 = uVar17 - 0x280;
                lVar26 = uVar17 - 0x94;
                lVar23 = uVar17 - 0xa4;
                lVar28 = 2;
                fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0x1ec) = fVar4;
                *(float *)(puVar13 + 0x3e) = fVar4;
                *(float *)((int)puVar13 + 500) = fVar4;
                *(float *)(puVar13 + 0x3f) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)(puVar13 + 0x3e) = *(float *)(puVar13 + 0x3e) * fVar6;
                *(float *)((int)puVar13 + 500) = *(float *)((int)puVar13 + 500) * fVar4;
                *(float *)(puVar13 + 0x3f) = *(float *)(puVar13 + 0x3f) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar19 + 0x1ec) = *(float *)((int)lVar19 + 0x1dc) * fVar4 * fVar4;
                  iVar22 = (int)lVar23;
                  lVar23 = lVar23 + 8;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                  lVar26 = lVar26 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar28 = 4;
                lVar26 = uVar17 - 0xa4;
                pfVar24 = (float *)&DAT_007358e0;
                lVar19 = lVar1;
                lVar23 = lVar26;
                do {
                  fVar4 = *pfVar24;
                  fVar6 = pfVar24[1];
                  pfVar24 = pfVar24 + 2;
                  *(float *)((int)lVar19 + 0x1ec) = *(float *)((int)lVar19 + 0x1ec) * fVar4;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
                  lVar23 = lVar23 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar23 = 2;
                lVar19 = lVar1;
                do {
                  iVar22 = (int)lVar19;
                  lVar19 = lVar19 + 0x10;
                  iVar20 = (int)lVar26;
                  lVar26 = lVar26 + 0x10;
                  fVar3 = fVar3 + *(float *)(iVar22 + 0x1ec) + *(float *)(iVar20 + 4) +
                          *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar5;
              }
              *(float *)((int)pvVar8 + 0xbc) = fVar3;
            }
            dVar39 = in_f27;
            dVar31 = in_f27;
            dVar29 = (double)MB_randRangeFloat(3.0,11.0);
            *(float *)(puVar13 + 0x1a) = (float)dVar29;
            dVar29 = (double)MB_randRangeFloat(-2.0,2.0);
            *(float *)((int)puVar13 + 0xd4) = (float)dVar29;
            iVar22 = 1;
            dVar36 = 0.0;
            *(undefined4 *)(puVar13 + 0x1b) = 0;
            dVar29 = -1.0;
            dVar37 = 3.1415927410125732;
            do {
              GetBonePosition(lVar18,iVar22,uVar17 - 0x180);
              fVar3 = *(float *)(puVar13 + 0x22) - (moby->pos).x;
              fVar4 = *(float *)((int)puVar13 + 0x114) - (moby->pos).y;
              dVar32 = ABS((double)fVar3);
              dVar33 = ABS((double)fVar4);
              *(float *)((int)puVar13 + 0x1b4) = fVar3;
              *(float *)(puVar13 + 0x37) = fVar4;
              *(float *)((int)puVar13 + 0x1bc) = (float)(dVar32 - dVar33);
              fVar3 = *(float *)((int)pvVar8 + 0xbc);
              uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0x1b4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x1bc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar13 + 0x37) >> 0x1d) & 4;
              dVar30 = ABS((double)*(float *)((int)puVar13 + 0x1b4));
              if ((double)*(float *)((int)puVar13 + 0x1bc) - dVar36 < 0.0) {
                dVar30 = dVar33;
              }
              fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
              dVar33 = ABS((double)*(float *)(puVar13 + 0x37));
              if ((double)*(float *)((int)puVar13 + 0x1bc) - dVar36 < 0.0) {
                dVar33 = dVar32;
              }
              fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
              dVar32 = dVar36;
              if (dVar36 < dVar30) {
                lVar19 = uVar17 - 0x280;
                lVar26 = uVar17 - 0xb4;
                lVar23 = uVar17 - 0xc4;
                lVar28 = 2;
                fVar6 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar13 + 0x1cc) = fVar6;
                *(float *)(puVar13 + 0x3a) = fVar6;
                *(float *)((int)puVar13 + 0x1d4) = fVar6;
                *(float *)(puVar13 + 0x3b) = fVar6;
                fVar6 = fVar7 * fVar7;
                *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar7;
                *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar6;
                *(float *)(puVar13 + 0x3b) = *(float *)(puVar13 + 0x3b) * fVar6 * fVar7;
                do {
                  *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar6 * fVar6;
                  iVar20 = (int)lVar23;
                  lVar23 = lVar23 + 8;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
                  lVar26 = lVar26 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar28 = 4;
                lVar26 = uVar17 - 0xc4;
                pfVar24 = (float *)&DAT_007358e0;
                lVar19 = lVar1;
                lVar23 = lVar26;
                do {
                  fVar6 = *pfVar24;
                  fVar7 = pfVar24[1];
                  pfVar24 = pfVar24 + 2;
                  *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar6;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
                  lVar23 = lVar23 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar23 = 2;
                lVar19 = lVar1;
                dVar30 = dVar36;
                do {
                  iVar20 = (int)lVar19;
                  iVar21 = (int)lVar26;
                  lVar19 = lVar19 + 0x10;
                  lVar26 = lVar26 + 0x10;
                  dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x1cc)) +
                                    *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                                   *(float *)(iVar21 + 0xc));
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                dVar32 = (double)((float)(dVar30 + dVar40) * fVar4 + fVar5);
              }
              dVar30 = (double)FastDiffRots
                                         ((double)fVar3,(double)(g_FrameTime * 17.802359))
              ;
              dVar30 = (double)FastSubRots((float)dVar32,(float)dVar30);
              dVar32 = dVar30 - dVar37;
              iVar22 = iVar22 + 1;
              dVar33 = dVar30 - dVar37;
              dVar34 = dVar30 - dVar37;
              dVar35 = dVar30 - dVar37;
              if (dVar30 - dVar37 < 0.0) {
                dVar37 = dVar30;
              }
              if (dVar32 < 0.0) {
                dVar31 = (double)*(float *)(puVar13 + 0x22);
              }
              if (dVar33 < 0.0) {
                dVar39 = (double)*(float *)((int)puVar13 + 0x114);
              }
              if (dVar34 < 0.0) {
                in_f27 = (double)*(float *)(puVar13 + 0x23);
              }
              if (dVar35 < 0.0) {
                dVar29 = (double)*(float *)((int)puVar13 + 0x11c);
              }
            } while (iVar22 < 4);
            *(float *)(puVar13 + 0x20) = (float)dVar31;
            *(float *)((int)puVar13 + 0x104) = (float)dVar39;
            *(float *)(puVar13 + 0x21) = (float)in_f27;
            *(float *)((int)puVar13 + 0x10c) = (float)dVar29;
            *(undefined4 *)((int)puVar13 + 0xec) = 0;
            *(undefined4 *)(puVar13 + 0x1d) = 0;
            *(undefined4 *)((int)puVar13 + 0xe4) = 0;
            *(undefined4 *)(puVar13 + 0x1c) = 0;
            *(undefined4 *)(puVar13 + 0x1d) = *(undefined4 *)((int)pvVar8 + 0xbc);
            FastEulerToMtx1(uVar17 - 0x170,uVar17 - 0x1b0);
            fVar3 = *(float *)((int)puVar13 + 0xd4);
            fVar4 = *(float *)(puVar13 + 0x1a);
            fVar5 = *(float *)(puVar13 + 0x1b);
            fVar6 = *(float *)((int)puVar13 + 0xdc);
            fVar15 = *(float *)((int)puVar13 + 0x154) * fVar6 +
                     *(float *)((int)puVar13 + 0x144) * fVar5 +
                     *(float *)((int)puVar13 + 0x124) * fVar4 +
                     *(float *)((int)puVar13 + 0x134) * fVar3;
            fVar14 = *(float *)(puVar13 + 0x2a) * fVar6 +
                     *(float *)(puVar13 + 0x28) * fVar5 +
                     *(float *)(puVar13 + 0x24) * fVar4 + *(float *)(puVar13 + 0x26) * fVar3;
            fVar7 = *(float *)(puVar13 + 0x2b) * fVar6 +
                    *(float *)(puVar13 + 0x29) * fVar5 +
                    *(float *)(puVar13 + 0x25) * fVar4 + *(float *)(puVar13 + 0x27) * fVar3;
            *(float *)(puVar13 + 0x1a) = fVar14;
            *(float *)((int)puVar13 + 0xd4) = fVar15;
            *(float *)(puVar13 + 0x1b) = fVar7;
            fVar6 = *(float *)((int)puVar13 + 0x15c) * fVar6 +
                    *(float *)((int)puVar13 + 0x14c) * fVar5 +
                    *(float *)((int)puVar13 + 300) * fVar4 +
                    *(float *)((int)puVar13 + 0x13c) * fVar3;
            dVar40 = (double)SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar15 * fVar15);
            *(float *)((int)puVar13 + 0xdc) = fVar6;
            fVar16 = g_FrameTime;
            fVar3 = (moby->pos).x;
            fVar4 = (moby->pos).y;
            fVar5 = (moby->pos).z;
            *(float *)((int)puVar13 + 0xfc) = fVar6;
            fVar6 = g_FrameTimeSq;
            *(float *)(puVar13 + 0x1a) = fVar14 + fVar3;
            *(float *)((int)puVar13 + 0xd4) = fVar15 + fVar4;
            *(float *)(puVar13 + 0x1b) = fVar7 + fVar5;
            fVar3 = (float)((double)(fVar16 * 7.0) / dVar40);
            dVar39 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar39 = (double)(fVar14 * fVar3);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar31 = (double)(fVar15 * fVar3);
            }
            dVar29 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar29 = (double)(fVar7 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar39 = (double)(fVar14 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar31 = (double)(fVar15 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar29 = (double)(fVar7 * fVar3);
            }
            *(float *)(puVar13 + 0x1e) = (float)dVar39;
            *(float *)((int)puVar13 + 0xf4) = (float)dVar31;
            *(float *)(puVar13 + 0x1f) = (float)dVar29;
            dVar39 = (double)MB_computeLobVelocity
                                       ((double)(fVar16 * 7.0),(double)(fVar6 * -9.8),uVar17 - 400,
                                        uVar17 - 0x1c0);
            *(float *)(puVar13 + 0x1f) = (float)dVar39;
            *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) + *(float *)(puVar13 + 0x1e);
            *(float *)((int)puVar13 + 0x104) =
                 *(float *)((int)puVar13 + 0x104) + *(float *)((int)puVar13 + 0xf4);
            *(float *)(puVar13 + 0x21) = (float)((double)*(float *)(puVar13 + 0x21) + dVar39);
            M881_004a1030
                      (uVar17 - 400,uVar17 - 0x1a0,lVar18,*(undefined2 *)((int)pvVar8 + 0xba));
            *(short *)((int)pvVar8 + 0xba) = *(short *)((int)pvVar8 + 0xba) + 1;
          }
        }
        auVar41 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar8 + 0xb4) <= worldUpdateTime) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x5c,0x195da8);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar41 = ZEXT416((uint)(auVar41.piece<0,4>() + auVar42.piece<0,4>())) & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xb4,
                              uVar27);
          *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar12;
          moby->state = '\x01';
        }
      }
      if (moby->state != '\0') {
        dVar39 = (double)FastWrapRot
                                   (*(float *)((int)pvVar8 + 0xc0),g_FrameTime * 17.802359
                                   );
        *(float *)((int)pvVar8 + 0xc0) = (float)dVar39;
        FastQuaternionToEuler(uVar27 + 0x80,2);
      }
    }
  }
  return;
}



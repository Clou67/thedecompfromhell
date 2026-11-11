// game/update/moby602.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3d6c80-0x3d8af0
#include <stdlib.h>
#include "game/update/moby602.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03d6c80 (0x14 bytes)
void M602_003d6c80(void)

{
  DAT_0085363c = 0x10000;
  return;
}


// 0x03d6c98 (0xc8 bytes)
MobyInstance * M602_003d6c98(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = (MobyInstance *)0x0;
    puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      uVar1 = *puVar4;
      if ((g_MobyInstance[uVar1 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
         ((pMVar3 == (MobyInstance *)0x0 || (uVar2 = MB_randInt(0xff), (uVar2 & 1) != 0)))
         ) {
        pMVar3 = g_MobyInstance + (uVar1 & 0x7fff);
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar3;
}


// 0x03d6d70 (0x46c bytes)
// inlined: FastAtan2 @0x3d6fa4
void M602_003d6d70(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  float *pfVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  undefined4 uVar14;
  longlong lVar12;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x1b0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x38] = in_LR;
  puVar9[0x35] = in_f31;
  puVar9[0x33] = unaff_r30;
  pfVar7 = (float *)param_1->pVar;
  uVar21 = ZEXT48(pfVar7);
  puVar9[0x34] = unaff_r31;
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x164) = 0;
  if (pfVar7[6] != 0.0) {
    auVar27 = ZEXT416(0xffffffff);
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    pfVar7[6] = 0.0;
    auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar27 = loadVectorLeftIndexed(4,0x3d6d60);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                         auVar28);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
    auVar27 = vectorSplatHalfWord(auVar27,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar27,500,uVar21);
    *(undefined2 *)(pfVar7 + 0x7d) = uVar8;
  }
  iVar13 = FastDecTimerS16(uVar21 + 500);
  if (iVar13 == 0) {
    fVar2 = pfVar7[0x77] + 6.0;
  }
  else {
    fVar2 = pfVar7[0x77];
  }
  pfVar7[0x78] = fVar2;
  uVar14 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar14,uVar21,0,puVar9 + 0x2c,(int)puVar9 + 0x164,0,4);
  if ((*(int *)(puVar9 + 0x2c) != 1) && (param_1->state != '\n')) {
    fVar2 = *pfVar7 - *(float *)((int)puVar9 + 0x164);
    *pfVar7 = fVar2;
    if ((double)fVar2 <= dVar26) {
      pfVar7[0x44] = 0.008;
      pfVar7[0x45] = 0.0005;
      fVar2 = g_FrameTime;
      pfVar7[0x46] = DAT_00853664 * g_FrameTime;
      fVar3 = DAT_00853660;
      *(undefined1 *)((int)pfVar7 + 0x13d) = 0;
      pfVar7[0x49] = 1.26117e-44;
      pfVar7[0x47] = fVar3 * fVar2;
      fVar2 = (param_1->pos).x - g_heroPosition.x;
      fVar3 = (param_1->pos).y - g_heroPosition.y;
      dVar25 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)(puVar9 + 0x2d) = fVar2;
      *(float *)((int)puVar9 + 0x16c) = fVar3;
      *(float *)(puVar9 + 0x2e) = (float)(dVar25 - dVar23);
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x2d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x2e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x16c) >> 0x1d) & 4;
      uVar15 = uVar17 << 2 | 0x735900;
      dVar24 = ABS((double)*(float *)(puVar9 + 0x2d));
      if ((double)*(float *)(puVar9 + 0x2e) - dVar26 < 0.0) {
        dVar24 = dVar23;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0x16c));
      if ((double)*(float *)(puVar9 + 0x2e) - dVar26 < 0.0) {
        dVar23 = dVar25;
      }
      fVar3 = *(float *)((int)uVar15 + 4);
      if (dVar26 < dVar24) {
        lVar19 = uVar11 - 0x1a0;
        lVar16 = uVar11 - 0x2c;
        lVar18 = uVar11 - 0x3c;
        lVar22 = 2;
        fVar4 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x30) = fVar4;
        *(float *)(puVar9 + 0x2f) = fVar4;
        *(float *)((int)puVar9 + 0x17c) = fVar4;
        *(float *)((int)puVar9 + 0x174) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar5;
        *(float *)((int)puVar9 + 0x17c) = *(float *)((int)puVar9 + 0x17c) * fVar4;
        *(float *)(puVar9 + 0x30) = *(float *)(puVar9 + 0x30) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x164) * fVar4 * fVar4;
          iVar13 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
          lVar16 = lVar16 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        uVar15 = uVar11 - 0x3c;
        lVar18 = 4;
        pfVar20 = (float *)&DAT_007358e0;
        uVar17 = uVar15;
        lVar16 = lVar12;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x174) = *(float *)((int)lVar16 + 0x174) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)uVar17 + 4) = *(float *)((int)uVar17 + 4) * fVar5;
          uVar17 = uVar17 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar16 = 2;
        do {
          iVar13 = (int)lVar12;
          iVar10 = (int)uVar15;
          lVar12 = lVar12 + 0x10;
          uVar15 = uVar15 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x174)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      MB_StartKick(dVar26,param_1,uVar21 + 0x100,uVar15,8,1,0);
      MVar6 = param_1->modeBits;
      pfVar7[0x54] = 8.0;
      pfVar7[0x55] = 15.0;
      param_1->modeBits =
           MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pfVar7 + 0xf7) = 0xfa;
      param_1->state = '\n';
      if (param_1->animationId != '\b') {
        MB_SetAnimation(param_1,8,0,6);
      }
    }
    MB_UpdateLightsTransition(param_1,uVar21 + 0xf0);
  }
  uVar1 = param_1->state;
  param_1->damage = -1;
  if (uVar1 == '\n' || uVar1 == '\r') {
    MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0xa0);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x2a);
  }
  else if (pfVar7[0x7e] == 0.0) {
    MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0xf0);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x20);
  }
  else {
    MB_getTarget((double)pfVar7[0x78],param_1,uVar1,uVar11 - 0x140);
    pfVar7[0x7e] = *(float *)(puVar9 + 0x16);
  }
  MB_ColorDyingMoby(param_1,uVar21 + 0xf0);
  return;
}


// 0x03d7240 (0x18b0 bytes)
// inlined: FastAtan2 @0x3d79d4, FastAtan2 @0x3d7c10, FastAtan2 @0x3d8104, FastAtan2 @0x3d8974
/* Moby 602 */

void UpdateMoby_602(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  undefined4 *puVar10;
  f32 fVar11;
  uint uVar12;
  undefined1 uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar23;
  int iVar24;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar28;
  ulonglong unaff_r29;
  MobyInstance *pMVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar21 = uVar22 - 0x1d0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar22;
  puVar14[0x3c] = in_LR;
  puVar14[0x32] = in_f24;
  puVar14[0x33] = in_f25;
  puVar14[0x34] = in_f26;
  puVar14[0x35] = in_f27;
  puVar14[0x36] = in_f28;
  puVar14[0x37] = in_f29;
  puVar14[0x38] = in_f30;
  puVar14[0x39] = in_f31;
  puVar14[0x31] = unaff_r31;
  puVar14[0x30] = unaff_r30;
  puVar14[0x2f] = unaff_r29;
  puVar14[0x2e] = unaff_r28;
  puVar14[0x2d] = unaff_r27;
  puVar10 = (undefined4 *)moby->pVar;
  M602_003d6d70();
  bVar2 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00853674;
  if (bVar2 < 8) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        puVar10[0x6c] = (moby->pos).x;
        puVar10[0x6d] = (moby->pos).y;
        puVar10[0x6e] = (moby->pos).z;
        puVar10[0x6f] = (moby->pos).w;
        puVar10[0x70] = (moby->pos).x;
        puVar10[0x71] = (moby->pos).y;
        puVar10[0x72] = (moby->pos).z;
        puVar10[0x73] = (moby->pos).w;
        moby->state = '\x01';
        *puVar10 = 0x3f800000;
        *(undefined2 *)(puVar10 + 1) = 1;
        *(undefined2 *)(puVar10 + 0x7d) = 0;
        MB_InitDefaultParams((float *)(puVar10 + 0x58));
        puVar10[0x67] = 0x3cf5c28f;
        puVar10[0x68] = 0x3e99999a;
        puVar10[0x69] = 0x3e800000;
        puVar10[0x5b] = 0x40000000;
        puVar10[0x5a] = 0x40000000;
        fVar1 = g_FrameTime;
        puVar10[0x58] = 0x38d;
        puVar10[0x61] = (float)puVar10[0x79] * fVar1;
        uVar23 = rand();
        if ((uVar23 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        puVar10[0x2c] = &DAT_0085367c;
        if (moby->animationId != '\x03') {
          MB_SetAnimation(moby,3,0,0);
        }
      }
      else if ((moby->field43_0x70 & 2U) == 0) {
        if ((int)puVar10[0x7a] < 0) {
          iVar24 = puVar10[0x7e];
          fVar1 = *(float *)(iVar24 + 0x14) - (float)puVar10[0x6d];
          fVar5 = *(float *)(iVar24 + 0x10) - (float)puVar10[0x6c];
          fVar8 = *(float *)(iVar24 + 0x18) - (float)puVar10[0x6e];
          if ((SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1) < (float)puVar10[0x78]) &&
             (ABS(*(float *)(iVar24 + 0x18) - (moby->pos).z) < 4.0)) {
            if (bVar2 == 1) {
              moby->state = '\x05';
              dVar31 = (double)MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              if (moby->animationId != '\x06') {
                puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
              }
            }
            else if (bVar2 == 2) {
              moby->state = '\x05';
              dVar31 = (double)MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              moby->state = '\x06';
            }
          }
        }
        else {
          iVar24 = MB_IsPntInCylinder
                             ((Vec4 *)(puVar10[0x7e] + 0x10),(longlong)(int)puVar10[0x7a]);
          if (iVar24 != 0) {
            if (moby->state == '\x01') {
              moby->state = '\x05';
              dVar31 = (double)MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              if (moby->animationId != '\x06') {
                puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
              }
            }
            else if (moby->state == '\x02') {
              moby->state = '\x05';
              dVar31 = (double)MB_randRangeFloat
                                         ((float)puVar10[0x76] * -0.017453292,
                                          (float)puVar10[0x76] * 0.017453292);
              puVar10[0x75] = (float)dVar31;
              moby->state = '\x06';
            }
          }
        }
      }
      else if (bVar2 == 1) {
        moby->setByGroup = '\x02';
        moby->state = '\x04';
        if (moby->animationId != '\x04') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
      else {
        dVar32 = (double)MB_randRot();
        dVar33 = (double)MB_randRangeFloat(0.0,2.0);
        fVar1 = (float)(dVar32 + 1.570796251296997);
        dVar31 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar31 = dVar32;
        }
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        dVar38 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar31 < 0.0) {
          dVar38 = dVar31;
        }
        fVar8 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        dVar37 = (double)(float)(dVar38 * dVar38);
        fVar6 = fVar8 * fVar8;
        dVar31 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar38));
        fVar1 = fVar6 * fVar6 * fVar8;
        dVar32 = (double)(float)(dVar37 * dVar31);
        puVar10[0x73] = puVar10[0x6f];
        puVar10[0x72] = puVar10[0x6e];
        fVar5 = fVar6 * fVar1;
        puVar10[0x71] =
             (float)((double)((float)(dVar37 * dVar32) * 2.601887e-06 +
                             (float)(dVar32 * -0.0001980741071747616 +
                                    (double)(float)(dVar31 * 0.008333025500178337 +
                                                   (double)(float)((double)(float)(dVar37 * dVar38)
                                                                   * -0.16666656732559204 + dVar38))
                                    )) * dVar33 + (double)(float)puVar10[0x6d]);
        puVar10[0x70] =
             (float)((double)(fVar6 * fVar5 * 2.601887e-06 +
                             fVar5 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * dVar33 +
                    (double)(float)puVar10[0x6c]);
        moby->state = '\a';
      }
    }
    else if (bVar2 < 5) {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar3 = moby->setByGroup;
        moby->state = uVar3;
        if (uVar3 == '\b') {
          if (moby->animationId != '\x01') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if (uVar3 == '\x05') {
          if (moby->animationId != '\x06') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if (uVar3 == '\x02') {
          if (moby->animationId != '\x01') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
        else if ((uVar3 == '\x01') && (moby->animationId != '\x03')) {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else if (bVar2 < 7) {
      fVar1 = *(float *)(puVar10[0x7e] + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(puVar10[0x7e] + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar1);
      fVar8 = ABS(fVar5);
      *(float *)((int)puVar14 + 0xc4) = fVar1;
      *(float *)(puVar14 + 0x19) = fVar5;
      *(float *)((int)puVar14 + 0xcc) = fVar6 - fVar8;
      dVar31 = 0.0;
      uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar14 + 0xc4));
      if (*(float *)((int)puVar14 + 0xcc) - 0.0 < 0.0) {
        fVar1 = fVar8;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)(puVar14 + 0x19));
      if (*(float *)((int)puVar14 + 0xcc) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar32 = dVar31;
      if (0.0 < fVar1) {
        lVar20 = uVar22 - 0x1c0;
        lVar25 = uVar22 - 0xa0;
        lVar27 = uVar22 - 0x90;
        lVar30 = 2;
        fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x13c) = fVar1;
        *(float *)((int)puVar14 + 0x134) = fVar1;
        *(float *)(puVar14 + 0x27) = fVar1;
        *(float *)(puVar14 + 0x26) = fVar1;
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar6;
        *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar1;
        *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar1 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x120) * fVar1 * fVar1;
          iVar24 = (int)lVar25;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar27 = uVar22 - 0xa0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar25 = lVar27;
        do {
          fVar1 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x130) * fVar1;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar25 = 2;
        lVar20 = lVar21;
        do {
          iVar24 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x130)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar32 = (double)FastWrapRot((float)dVar32,(float)puVar10[0x75]);
      dVar41 = 3.141592502593994;
      fVar1 = (float)(dVar32 + 1.570796251296997);
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar37 = 0.008333025500178337;
      dVar38 = -0.0001980741071747616;
      dVar33 = 2.601886990305502e-06;
      dVar32 = 2.0;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar8 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      iVar24 = puVar10[0x7e];
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      fVar16 = fVar7 * fVar7;
      fVar1 = fVar16 * fVar16 * fVar7;
      fVar5 = fVar16 * fVar1;
      *(float *)(puVar14 + 0xe) =
           (fVar16 * fVar5 * 2.601887e-06 +
           fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar16 * fVar7 * -0.16666657 + fVar7) *
           2.0;
      fVar8 = *(float *)(iVar24 + 0x10) - fVar8;
      fVar6 = *(float *)(iVar24 + 0x14) - fVar6;
      dVar35 = ABS((double)fVar8);
      dVar36 = ABS((double)fVar6);
      *(float *)(puVar14 + 0x17) = fVar8;
      *(float *)((int)puVar14 + 0xbc) = fVar6;
      *(float *)(puVar14 + 0x18) = (float)(dVar35 - dVar36);
      fVar1 = (float)puVar10[0x75];
      uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar14 + 0x17));
      if ((double)*(float *)(puVar14 + 0x18) - dVar31 < 0.0) {
        dVar34 = dVar36;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar36 = ABS((double)*(float *)((int)puVar14 + 0xbc));
      if ((double)*(float *)(puVar14 + 0x18) - dVar31 < 0.0) {
        dVar36 = dVar35;
      }
      if (dVar31 < dVar34) {
        lVar20 = uVar22 - 0x1c0;
        lVar27 = uVar22 - 0xb0;
        lVar25 = uVar22 - 0xc0;
        lVar30 = 2;
        fVar6 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar6;
        *(float *)((int)puVar14 + 0x114) = fVar6;
        *(float *)(puVar14 + 0x23) = fVar6;
        *(float *)(puVar14 + 0x22) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7;
        *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar6;
        *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x100) * fVar6 * fVar6;
          iVar24 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar27 = uVar22 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar25 = lVar27;
        do {
          fVar6 = *pfVar26;
          fVar7 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x110) * fVar6;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar20 = 2;
        do {
          iVar24 = (int)lVar21;
          iVar15 = (int)lVar27;
          lVar21 = lVar21 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x110)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar34 = (double)FastWrapRot((float)dVar31,fVar1);
      dVar31 = (double)(float)(dVar41 - dVar34);
      if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
        dVar31 = dVar34;
      }
      dVar41 = (double)(float)(dVar40 - dVar34);
      if ((double)(float)(dVar40 - dVar34) - dVar31 < 0.0) {
        dVar41 = dVar31;
      }
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      *(f32 *)(puVar14 + 0xf) = (moby->pos).z;
      dVar40 = (double)(float)(dVar41 * dVar41);
      *(float *)(puVar14 + 0xe) = *(float *)(puVar14 + 0xe) + fVar1;
      dVar34 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar41));
      dVar31 = (double)(float)(dVar40 * dVar34);
      *(float *)((int)puVar14 + 0x74) =
           (float)((double)(float)((double)(float)(dVar40 * dVar31) * dVar33 +
                                  (double)(float)(dVar31 * dVar38 +
                                                 (double)(float)(dVar34 * dVar37 +
                                                                (double)(float)((double)(float)(
                                                  dVar40 * dVar41) * dVar39 + dVar41)))) * dVar32 +
                  (double)fVar5);
      MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,uVar22 - 0x160,puVar10 + 8);
      uVar3 = moby->state;
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar8 = (moby->pos).z;
      uVar4 = moby->animationId;
      if ((uVar3 != '\x05') ||
         (iVar24 = puVar10[0x7e], fVar7 = fVar5 - *(float *)(iVar24 + 0x14),
         fVar6 = fVar1 - *(float *)(iVar24 + 0x10), fVar16 = fVar8 - *(float *)(iVar24 + 0x18),
         DAT_00853678 <= SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar7 * fVar7))) {
        if ((uVar3 != '\x06') ||
           (iVar24 = puVar10[0x7e], fVar5 = fVar5 - *(float *)(iVar24 + 0x14),
           fVar1 = fVar1 - *(float *)(iVar24 + 0x10), fVar8 = fVar8 - *(float *)(iVar24 + 0x18),
           8.0 <= SQRT(fVar8 * fVar8 + fVar1 * fVar1 + fVar5 * fVar5))) {
          if ((int)puVar10[0x7a] < 0) {
            iVar24 = puVar10[0x7e];
            fVar1 = (float)puVar10[0x6d] - *(float *)(iVar24 + 0x14);
            fVar5 = (float)puVar10[0x6c] - *(float *)(iVar24 + 0x10);
            fVar8 = (float)puVar10[0x6e] - *(float *)(iVar24 + 0x18);
            if ((float)puVar10[0x78] < SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1)) {
              if (uVar3 == '\x05') {
                moby->state = '\x04';
                moby->setByGroup = '\b';
                if (uVar4 != '\x04') {
                  puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
                  MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
                }
              }
              else {
                moby->state = '\b';
              }
            }
          }
          else {
            iVar24 = MB_IsPntInCylinder
                               ((Vec4 *)(puVar10[0x7e] + 0x10),(longlong)(int)puVar10[0x7a]);
            if (iVar24 == 0) {
              if (moby->state == '\x05') {
                moby->state = '\x04';
                moby->setByGroup = '\b';
                if (moby->animationId != '\x04') {
                  puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
                  MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
                }
              }
              else {
                moby->state = '\b';
              }
            }
          }
        }
        else {
          moby->state = '\x03';
          moby->setByGroup = '\x05';
          if (uVar4 != '\x02') {
            puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x154));
          }
        }
      }
      else {
        moby->state = '\t';
        if (uVar4 != '\a') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      uVar22 = MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,puVar10 + 0x70,puVar10 + 8);
      if ((uVar22 & 6) != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 == 0xd) {
    uVar23 = puVar10[0x7e];
    if (*(byte *)(uVar23 + 0x20) < 0x80) {
      if (*(char *)(uVar23 + 0xbc) == '\0') {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x60,0x3d71dc);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xff;
        uVar13 = storeVectorElementByteIndexed
                           (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 |
                            auVar42 << 0x20 | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 |
                            auVar42 << 0x40 | auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 |
                            auVar42 << 0x60 | auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,
                            0xbc,(ulonglong)uVar23);
        *(undefined1 *)(uVar23 + 0xbc) = uVar13;
        iVar24 = puVar10[0x7e];
        (moby->pos).x = *(f32 *)(iVar24 + 0x10);
        (moby->pos).y = *(f32 *)(iVar24 + 0x14);
        fVar1 = *(float *)(iVar24 + 0x18);
        (moby->pos).z = fVar1;
        (moby->pos).w = *(f32 *)(iVar24 + 0x1c);
        pfVar26 = (float *)&g_atanQuadrantTable;
        (moby->pos).z = fVar1 + 2.0;
        fVar1 = g_FrameTime;
        puVar10[0x46] = DAT_00853668 * g_FrameTime;
        puVar10[0x47] = DAT_0085366c * fVar1;
        fVar1 = (float)puVar10[0x6c] - (moby->pos).x;
        fVar5 = (float)puVar10[0x6d] - (moby->pos).y;
        fVar6 = ABS(fVar1);
        fVar8 = ABS(fVar5);
        *(float *)(puVar14 + 0x14) = fVar1;
        *(float *)((int)puVar14 + 0xa4) = fVar5;
        *(float *)(puVar14 + 0x15) = fVar6 - fVar8;
        dVar31 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x14));
        if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
          fVar1 = fVar8;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar8 = ABS(*(float *)((int)puVar14 + 0xa4));
        if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
          fVar8 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (0.0 < fVar1) {
          lVar20 = uVar22 - 0x1c0;
          lVar27 = uVar22 - 0xf0;
          lVar25 = uVar22 - 0x100;
          lVar30 = 2;
          fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
          fVar8 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xdc) = fVar1;
          *(float *)((int)puVar14 + 0xd4) = fVar1;
          *(float *)(puVar14 + 0x1b) = fVar1;
          *(float *)(puVar14 + 0x1a) = fVar1;
          fVar1 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar8;
          *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar1;
          *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar1 * fVar8;
          do {
            *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xc0) * fVar1 * fVar1;
            iVar24 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
            lVar27 = lVar27 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar27 = uVar22 - 0x100;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar1 = *pfVar26;
            fVar8 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xd0) * fVar1;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
            lVar25 = lVar25 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar20 = 2;
          do {
            iVar24 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar15 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0xd0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar6);
        }
        MB_StartKick(dVar31,moby,puVar10 + 0x40,pfVar26,4,1,0);
        moby->state = '\f';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (bVar2 == 0xc) {
    uVar23 = MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x40));
    uVar3 = moby->animationId;
    if ((uVar23 & 0x40) == 0) {
      fVar11 = (moby->pos).z;
      uVar12 = (int)fVar11 >> 0x1f;
      if (((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x40a00000) || ((uVar23 & 0x20) != 0)) {
        (moby->pos).x = (f32)puVar10[0x6c];
        (moby->pos).y = (f32)puVar10[0x6d];
        (moby->pos).z = (f32)puVar10[0x6e];
        fVar11 = (f32)puVar10[0x6f];
        moby->state = '\x02';
        (moby->pos).w = fVar11;
        if (uVar3 != '\x01') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      moby->state = '\x02';
      if (uVar3 != '\x01') {
        puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
        MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
      }
    }
  }
  else if (bVar2 == 10) {
    uVar23 = MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x40));
    bVar2 = moby->group;
    if ((uVar23 & 0x40) == 0) {
      fVar11 = (moby->pos).z;
      uVar12 = (int)fVar11 >> 0x1f;
      if (((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x40a00000) || ((uVar23 & 0x20) != 0)) {
        if (bVar2 == 0xff) {
          pMVar29 = (MobyInstance *)0x0;
        }
        else {
          pMVar29 = (MobyInstance *)0x0;
          puVar28 = (ushort *)(&g_MobyGroups)[bVar2];
          do {
            uVar9 = *puVar28;
            if ((g_MobyInstance[uVar9 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
               ((pMVar29 == (MobyInstance *)0x0 ||
                (uVar22 = MB_randInt(0xff), (uVar22 & 1) != 0)))) {
              pMVar29 = g_MobyInstance + (uVar9 & 0x7fff);
            }
            uVar9 = *puVar28;
            puVar28 = puVar28 + 1;
          } while (-1 < (short)uVar9);
        }
        puVar10[0x7e] = pMVar29;
        if (pMVar29 == (MobyInstance *)0x0) {
          DeleteMoby(moby);
        }
        else {
          moby->state = '\r';
          (moby->pos).z = (moby->pos).z - 10.0;
        }
      }
    }
    else {
      if (bVar2 == 0xff) {
        pMVar29 = (MobyInstance *)0x0;
      }
      else {
        pMVar29 = (MobyInstance *)0x0;
        puVar28 = (ushort *)(&g_MobyGroups)[bVar2];
        do {
          uVar9 = *puVar28;
          if ((g_MobyInstance[uVar9 & 0x7fff].oClass == SANDSHARK_SPAWNER) &&
             ((pMVar29 == (MobyInstance *)0x0 ||
              (uVar22 = MB_randInt(0xff), (uVar22 & 1) != 0)))) {
            pMVar29 = g_MobyInstance + (uVar9 & 0x7fff);
          }
          uVar9 = *puVar28;
          puVar28 = puVar28 + 1;
        } while (-1 < (short)uVar9);
      }
      puVar10[0x7e] = pMVar29;
      if (pMVar29 == (MobyInstance *)0x0) {
        DeleteMoby(moby);
      }
      else {
        moby->state = '\r';
        (moby->pos).z = (moby->pos).z - 10.0;
      }
    }
  }
  else if (bVar2 == 9) {
    fVar1 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    pfVar26 = (float *)&g_atanQuadrantTable;
    fVar6 = ABS(fVar1);
    fVar8 = ABS(fVar5);
    *(float *)((int)puVar14 + 0xac) = fVar1;
    *(float *)(puVar14 + 0x16) = fVar5;
    *(float *)((int)puVar14 + 0xb4) = fVar6 - fVar8;
    dVar31 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar14 + 0xac));
    if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
      fVar1 = fVar8;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar14 + 0x16));
    if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar20 = uVar22 - 0x1c0;
      lVar25 = uVar22 - 0xe0;
      lVar27 = uVar22 - 0xd0;
      lVar30 = 2;
      fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
      fVar6 = fVar1 * fVar1;
      *(float *)((int)puVar14 + 0xfc) = fVar1;
      *(float *)((int)puVar14 + 0xf4) = fVar1;
      *(float *)(puVar14 + 0x1f) = fVar1;
      *(float *)(puVar14 + 0x1e) = fVar1;
      fVar1 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar6;
      *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar1;
      *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar1 * fVar6;
      do {
        *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xe0) * fVar1 * fVar1;
        iVar24 = (int)lVar25;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar27 = uVar22 - 0xe0;
      pfVar26 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar25 = lVar27;
      do {
        fVar1 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xf0) * fVar1;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar20 = 2;
      do {
        iVar24 = (int)lVar21;
        iVar15 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0xf0)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar5);
    }
    dVar32 = 0.20000000298023224;
    OrganicDeltAngSpeed
              (dVar31,0x3f9eb851e0000000,0x3fd3333340000000,0x3fc99999a0000000,moby,pfVar26,
               puVar10 + 0x74);
    dVar31 = (double)BlendAnimFrame(moby);
    pMVar29 = g_heroMobyPtr;
    if (((dVar31 != 13.0) ||
        (fVar1 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        DAT_00853678 <= SQRT(fVar5 * fVar5 + fVar1 * fVar1))) ||
       (2.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        moby->setByGroup = '\b';
        if (moby->animationId != '\x04') {
          puVar14[0x2a] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar14 + 0x154));
        }
      }
    }
    else {
      fVar1 = (moby->rotation).z;
      fVar5 = fVar1 + 1.5707963;
      fVar8 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar8 = fVar1;
      }
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
        fVar7 = fVar8;
      }
      *(undefined4 *)(puVar14 + 0x11) = 0;
      fVar1 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar1 = fVar6;
      }
      fVar5 = fVar7 * fVar7;
      fVar8 = fVar1 * fVar1;
      fVar17 = fVar5 * fVar5 * fVar7;
      fVar6 = fVar8 * fVar8 * fVar1;
      fVar18 = fVar5 * fVar17;
      fVar16 = fVar8 * fVar6;
      *(float *)((int)puVar14 + 0x84) =
           (float)((double)(fVar5 * fVar18 * 2.601887e-06 +
                           fVar18 * -0.0001980741 +
                           fVar17 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * dVar32);
      *(float *)(puVar14 + 0x10) =
           (float)((double)(fVar8 * fVar16 * 2.601887e-06 +
                           fVar16 * -0.0001980741 +
                           fVar6 * 0.0083330255 + fVar8 * fVar1 * -0.16666657 + fVar1) * dVar32);
      *(f32 *)(puVar14 + 0x12) = (pMVar29->pos).x;
      *(f32 *)((int)puVar14 + 0x94) = (pMVar29->pos).y;
      fVar1 = (pMVar29->pos).z;
      *(float *)(puVar14 + 0x13) = fVar1;
      *(f32 *)((int)puVar14 + 0x9c) = (pMVar29->pos).w;
      *(float *)(puVar14 + 0x13) = fVar1 + 0.75;
      CollDamageMobyDirect
                (1.0,pMVar29,moby,1,0x3d71dc,(float *)(puVar14 + 0x12),(float *)(puVar14 + 0x10));
    }
  }
  else if (((bVar2 == 8) &&
           (MB_UpdateNavMoveTurning(moby,puVar10 + 0x58,puVar10 + 0x6c,puVar10 + 8),
           fVar1 = (moby->pos).y - (float)puVar10[0x6d],
           fVar5 = (moby->pos).x - (float)puVar10[0x6c],
           fVar8 = (moby->pos).z - (float)puVar10[0x6e],
           SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1 * fVar1) < 0.5)) &&
          (moby->state = '\x02', moby->animationId != '\x01')) {
    puVar14[0x2a] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x154));
  }
  return;
}



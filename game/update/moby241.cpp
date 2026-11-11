// game/update/moby241.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x30d034-0x30e964
#include <math.h>
#include "game/update/moby241.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera0.h"
#include "game/update/moby413.h"
#include "idol/fastfunc.h"

// 0x030d034 (0x14 bytes)
void M241_0030d034(void)

{
  DAT_007ff6bc = 0x10000;
  return;
}


// 0x030d0a0 (0x18c4 bytes)
// inlined: FastAtan2 @0x30d354, FastAtan2 @0x30d54c, FastAtan2 @0x30d744, FastAtan2 @0x30def4, FastAtan2 @0x30e57c
// strings: 007ff6f8: '?333' (raw)

/* Moby 241 */

void UpdateMoby_241(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  f32 fVar10;
  float fVar11;
  short sVar12;
  float *pfVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  float *pfVar34;
  longlong lVar33;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong unaff_r29;
  longlong lVar38;
  ulonglong unaff_r30;
  ulonglong uVar39;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar51;
  undefined8 uVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar38 = uVar29 - 0x310;
  puVar15 = (ulonglong *)lVar38;
  *puVar15 = uVar29;
  puVar15[100] = in_LR;
  puVar15[0x58] = in_f22;
  puVar15[0x59] = in_f23;
  puVar15[0x5a] = in_f24;
  puVar15[0x5b] = in_f25;
  puVar15[0x5c] = in_f26;
  puVar15[0x5d] = in_f27;
  puVar15[0x5e] = in_f28;
  puVar15[0x5f] = in_f29;
  puVar15[0x60] = in_f30;
  puVar15[0x61] = in_f31;
  puVar15[0x57] = unaff_r31;
  puVar15[0x56] = unaff_r30;
  puVar15[0x55] = unaff_r29;
  pfVar13 = (float *)moby->pVar;
  uVar39 = ZEXT48(pfVar13);
  iVar30 = MB_damage(moby,0x210000,0);
  FastDecTimerS32(uVar39 + 0x164);
  if (((iVar30 != 0) && (moby->state != '\x04' && moby->state != '\b')) && (pfVar13[0x59] == 0.0)) {
    pfVar13[0x18] = 0.008;
    pfVar13[0x19] = 0.0005;
    fVar4 = g_FrameTime;
    pfVar13[0x1a] = g_FrameTime * 10.0;
    *(undefined1 *)((int)pfVar13 + 0x8d) = 0;
    pfVar13[0x1d] = 4.2039e-45;
    pfVar13[0x1b] = fVar4 * 4.0;
    fVar4 = *pfVar13 - *(float *)(iVar30 + 0x2c);
    *pfVar13 = fVar4;
    dVar45 = 0.0;
    if (fVar4 <= 0.0) {
      *(undefined1 *)((int)pfVar13 + 0x47) = 0xfa;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar8 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)(puVar15 + 0x39) = fVar4;
      *(float *)((int)puVar15 + 0x1cc) = fVar5;
      *(float *)(puVar15 + 0x3a) = fVar8 - fVar6;
      uVar35 = (ulonglong)(*(uint *)(puVar15 + 0x39) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x3a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x1cc) >> 0x1d) & 4;
      uVar36 = uVar35 << 2 | 0x735900;
      fVar4 = ABS(*(float *)(puVar15 + 0x39));
      if (*(float *)(puVar15 + 0x3a) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
      fVar6 = ABS(*(float *)((int)puVar15 + 0x1cc));
      if (*(float *)(puVar15 + 0x3a) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      fVar8 = *(float *)((int)uVar36 + 4);
      if (0.0 < fVar4) {
        lVar32 = uVar29 - 0x300;
        lVar37 = uVar29 - 0xd4;
        lVar33 = uVar29 - 0xe4;
        lVar40 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)(puVar15 + 0x47) = fVar4;
        *(float *)(puVar15 + 0x46) = fVar4;
        *(float *)((int)puVar15 + 0x234) = fVar4;
        *(float *)((int)puVar15 + 0x22c) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x46) = *(float *)(puVar15 + 0x46) * fVar6;
        *(float *)((int)puVar15 + 0x234) = *(float *)((int)puVar15 + 0x234) * fVar4;
        *(float *)(puVar15 + 0x47) = *(float *)(puVar15 + 0x47) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar32 + 0x22c) = *(float *)((int)lVar32 + 0x21c) * fVar4 * fVar4;
          iVar30 = (int)lVar33;
          lVar33 = lVar33 + 8;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
          lVar37 = lVar37 + 8;
          lVar40 = lVar40 + -1;
        } while (lVar40 != 0);
        lVar40 = 4;
        lVar37 = uVar29 - 0xe4;
        uVar36 = ZEXT48(&DAT_007358e0);
        lVar32 = lVar38;
        lVar33 = lVar37;
        do {
          pfVar34 = (float *)uVar36;
          fVar4 = pfVar34[1];
          uVar36 = uVar36 + 8;
          *(float *)((int)lVar32 + 0x22c) = *(float *)((int)lVar32 + 0x22c) * *pfVar34;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
          lVar33 = lVar33 + 8;
          lVar40 = lVar40 + -1;
        } while (lVar40 != 0);
        lVar33 = 2;
        lVar32 = lVar38;
        do {
          iVar30 = (int)lVar32;
          lVar32 = lVar32 + 0x10;
          iVar16 = (int)lVar37;
          lVar37 = lVar37 + 0x10;
          dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x22c)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
      }
      MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,9,5,0);
      moby->state = '\b';
    }
    else {
      sVar12 = *(short *)(*(int *)(iVar30 + 0x20) + 0xa6);
      if ((sVar12 == 0xb0) || (sVar12 == 0xb1)) {
        auVar53 = loadVectorLeftIndexed(0xc,0x30d048);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      }
      else {
        auVar53 = loadVectorLeftIndexed(0x10,0x30d048);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      }
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar53 = vectorMultiplyAddFloatingPoint
                          (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,auVar53,
                           auVar55);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      uVar14 = storeVectorElementWordIndexed(auVar53,0x164,uVar39);
      *(undefined4 *)((uint)(pfVar13 + 0x59) & 0xfffffffc) = uVar14;
      uVar31 = (int)*(uint *)(iVar30 + 0x2c) >> 0x1f;
      iVar30 = (uVar31 >> 1 ^ *(uint *)(iVar30 + 0x2c)) - uVar31;
      if (iVar30 < 0x40800000) {
        if (0x3fffffff < iVar30) {
          pfVar13[0x5b] = DAT_007ff708 * 0.017453292;
        }
        PlayMobySound(5,0,moby);
        *(undefined1 *)((int)pfVar13 + 0x47) = 0x78;
      }
      else if (iVar30 < 0x40c00000) {
        *(undefined1 *)((int)pfVar13 + 0x47) = 200;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar8 = ABS(fVar4);
        fVar6 = ABS(fVar5);
        *(float *)(puVar15 + 0x3c) = fVar4;
        *(float *)((int)puVar15 + 0x1e4) = fVar5;
        *(float *)(puVar15 + 0x3d) = fVar8 - fVar6;
        uVar35 = (ulonglong)(*(uint *)(puVar15 + 0x3c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x3d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1e4) >> 0x1d) & 4;
        uVar36 = uVar35 << 2 | 0x735900;
        fVar4 = ABS(*(float *)(puVar15 + 0x3c));
        if (*(float *)(puVar15 + 0x3d) - 0.0 < 0.0) {
          fVar4 = fVar6;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
        fVar6 = ABS(*(float *)((int)puVar15 + 0x1e4));
        if (*(float *)(puVar15 + 0x3d) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)((int)uVar36 + 4);
        if (0.0 < fVar4) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0x94;
          lVar33 = uVar29 - 0xa4;
          lVar40 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x4f) = fVar4;
          *(float *)(puVar15 + 0x4e) = fVar4;
          *(float *)((int)puVar15 + 0x274) = fVar4;
          *(float *)((int)puVar15 + 0x26c) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar15 + 0x4e) = *(float *)(puVar15 + 0x4e) * fVar6;
          *(float *)((int)puVar15 + 0x274) = *(float *)((int)puVar15 + 0x274) * fVar4;
          *(float *)(puVar15 + 0x4f) = *(float *)(puVar15 + 0x4f) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x26c) = *(float *)((int)lVar32 + 0x25c) * fVar4 * fVar4;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0xa4;
          uVar36 = ZEXT48(&DAT_007358e0);
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            pfVar34 = (float *)uVar36;
            fVar4 = pfVar34[1];
            uVar36 = uVar36 + 8;
            *(float *)((int)lVar32 + 0x26c) = *(float *)((int)lVar32 + 0x26c) * *pfVar34;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar33 = 2;
          lVar32 = lVar38;
          do {
            iVar30 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x26c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
        }
        MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,8,5,0);
        moby->state = '\x04';
      }
      else {
        *(undefined1 *)((int)pfVar13 + 0x47) = 0xe6;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar8 = ABS(fVar4);
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar15 + 0x1d4) = fVar4;
        *(float *)(puVar15 + 0x3b) = fVar5;
        *(float *)((int)puVar15 + 0x1dc) = fVar8 - fVar6;
        uVar35 = (ulonglong)(*(uint *)((int)puVar15 + 0x1d4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1dc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar15 + 0x3b) >> 0x1d) & 4;
        uVar36 = uVar35 << 2 | 0x735900;
        fVar4 = ABS(*(float *)((int)puVar15 + 0x1d4));
        if (*(float *)((int)puVar15 + 0x1dc) - 0.0 < 0.0) {
          fVar4 = fVar6;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar35 << 2));
        fVar6 = ABS(*(float *)(puVar15 + 0x3b));
        if (*(float *)((int)puVar15 + 0x1dc) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)((int)uVar36 + 4);
        if (0.0 < fVar4) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0xb4;
          lVar33 = uVar29 - 0xc4;
          lVar40 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x4b) = fVar4;
          *(float *)(puVar15 + 0x4a) = fVar4;
          *(float *)((int)puVar15 + 0x254) = fVar4;
          *(float *)((int)puVar15 + 0x24c) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar15 + 0x4a) = *(float *)(puVar15 + 0x4a) * fVar6;
          *(float *)((int)puVar15 + 0x254) = *(float *)((int)puVar15 + 0x254) * fVar4;
          *(float *)(puVar15 + 0x4b) = *(float *)(puVar15 + 0x4b) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x24c) = *(float *)((int)lVar32 + 0x23c) * fVar4 * fVar4;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0xc4;
          uVar36 = ZEXT48(&DAT_007358e0);
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            pfVar34 = (float *)uVar36;
            fVar4 = pfVar34[1];
            uVar36 = uVar36 + 8;
            *(float *)((int)lVar32 + 0x24c) = *(float *)((int)lVar32 + 0x24c) * *pfVar34;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar33 = 2;
          lVar32 = lVar38;
          do {
            iVar30 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x24c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
        }
        MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,8,5,0);
        moby->state = '\x05';
      }
    }
    MB_UpdateLightsTransition(moby,uVar39 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *pfVar13 = 9.0;
      *(undefined1 *)(pfVar13 + 2) = 3;
      pfVar13[0x59] = 0.0;
      pfVar13[0x5b] = 0.0;
      AttachManipulator(moby,6,pfVar13 + 0x40);
      pfVar13[0x57] = (moby->rotation).z;
      pfVar13[0x50] = (moby->pos).x;
      pfVar13[0x51] = (moby->pos).y;
      pfVar13[0x52] = (moby->pos).z;
      pfVar13[0x53] = (moby->pos).w;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        MB_SetAnimation(moby,2,0,0);
      }
    }
    else if (bVar1 < 2) {
      dVar51 = 0.0;
      AccelDeltAng
                (0,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,uVar39 + 0x15c,0xff,
                 uVar39 + 0x150);
      dVar49 = (double)(moby->pos).y;
      dVar42 = (double)(float)((double)pfVar13[0x51] - dVar49);
      dVar48 = (double)(moby->pos).x;
      dVar41 = (double)(float)((double)pfVar13[0x50] - dVar48);
      dVar50 = (double)(moby->pos).z;
      dVar44 = (double)(float)((double)pfVar13[0x52] - dVar50);
      uVar2 = moby->animationId;
      bVar1 = moby->field43_0x70;
      uVar3 = moby->updateId;
      dVar46 = (double)SQRT((float)(dVar44 * dVar44 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar45 = dVar41;
      dVar43 = dVar42;
      dVar47 = dVar44;
      if (((double)(g_FrameTime * 2.0) < dVar46) &&
         (dVar45 = dVar51, dVar43 = dVar51, dVar47 = dVar51, dVar46 != dVar51)) {
        dVar47 = (double)(float)((double)(g_FrameTime * 2.0) / dVar46);
        dVar45 = (double)(float)(dVar41 * dVar47);
        dVar43 = (double)(float)(dVar42 * dVar47);
        dVar47 = (double)(float)(dVar44 * dVar47);
      }
      fVar4 = (float)(dVar48 + dVar45);
      fVar5 = (float)(dVar49 + dVar43);
      fVar6 = (float)(dVar50 + dVar47);
      (moby->pos).x = fVar4;
      (moby->pos).y = fVar5;
      (moby->pos).z = fVar6;
      fVar5 = fVar5 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      if ((pfVar13[0x58] <= SQRT(fVar4 * fVar4 + fVar5 * fVar5)) ||
         (5.0 <= ABS(fVar6 - g_heroPosition.z))) {
        if ((bVar1 & 2) != 0) {
          if (uVar3 == '\x01') {
            if (uVar2 != '\x02') {
              MB_SetAnimation(moby,2,0,3);
            }
          }
          else if (uVar2 != '\x01') {
            MB_SetAnimation(moby,1,0,3);
          }
        }
      }
      else {
        if (-1 < (int)pfVar13[0x5d]) {
          iVar30 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar13[0x5d]);
          if (iVar30 == 0) goto LAB_0030e8bc;
          uVar2 = moby->animationId;
        }
        moby->state = '\x02';
        if (uVar2 != '\x03') {
          MB_SetAnimation(moby,3,0,3);
        }
      }
    }
    else if (bVar1 < 3) {
      AccelDeltAng
                (0,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,uVar39 + 0x15c,
                 &DAT_0030d048,uVar39 + 0x150);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          MB_SetAnimation(moby,4,0,3);
        }
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x30,0x30d048);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
    }
    else {
      if ((((pfVar13[0x5c] == -NAN) &&
           (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
           SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 15.0)) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 5.0)) && (g_onMagnerail == 0)) {
        STUB_0002ed9c();
      }
      fVar4 = (moby->pos).y;
      fVar9 = pfVar13[0x51] - fVar4;
      fVar5 = (moby->pos).x;
      fVar20 = pfVar13[0x50] - fVar5;
      fVar6 = (moby->pos).z;
      fVar19 = pfVar13[0x52] - fVar6;
      fVar8 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar9 * fVar9);
      fVar11 = fVar9;
      fVar17 = fVar20;
      fVar18 = fVar19;
      if ((g_FrameTime * 2.0 < fVar8) &&
         (fVar11 = 0.0, fVar17 = fVar11, fVar18 = fVar11, fVar8 != 0.0)) {
        fVar8 = (g_FrameTime * 2.0) / fVar8;
        fVar11 = fVar9 * fVar8;
        fVar17 = fVar20 * fVar8;
        fVar18 = fVar19 * fVar8;
      }
      fVar5 = fVar5 + fVar17;
      fVar4 = fVar4 + fVar11;
      fVar6 = fVar6 + fVar18;
      *(MobyInstance **)(puVar15 + 0x24) = moby;
      fVar7 = (moby->pos).w;
      *(undefined4 *)((int)puVar15 + 0x124) = 0;
      *(undefined4 *)(puVar15 + 0x26) = 0;
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar4;
      (moby->pos).z = fVar6;
      fVar8 = g_heroPosition.y;
      *(float *)(puVar15 + 0x10) = g_heroPosition.x;
      fVar9 = g_heroPosition.z;
      *(float *)((int)puVar15 + 0x84) = fVar8;
      fVar8 = g_heroPosition.w;
      *(float *)(puVar15 + 0x11) = fVar9;
      *(float *)((int)puVar15 + 0x8c) = fVar8;
      *(float *)(puVar15 + 0x12) = fVar5;
      *(float *)((int)puVar15 + 0x94) = fVar4;
      *(f32 *)((int)puVar15 + 0x9c) = fVar7;
      *(float *)(puVar15 + 0x11) = fVar9 + 1.15;
      *(float *)(puVar15 + 0x13) = fVar6 + 1.15;
      iVar30 = STUB_00055ab8_RET_0(uVar29 - 0x280,uVar29 - 0x290,0,moby,uVar29 - 0x200);
      if (iVar30 != 0) {
        fVar4 = (moby->pos).y - g_heroPosition.y;
        fVar5 = (moby->pos).x - g_heroPosition.x;
        dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar45 - (double)DAT_007ff700 < 0.0) {
          dVar45 = (double)DAT_007ff700;
        }
        if (g_CollOutput.pMoby == g_heroMobyPtr) {
          GetBonePosition(moby,4,uVar29 - 0x270);
          fVar5 = g_heroPosition.x - *(float *)(puVar15 + 0x14);
          fVar6 = g_heroPosition.y - *(float *)((int)puVar15 + 0xa4);
          fVar4 = g_heroPosition.z - *(float *)(puVar15 + 0x15);
          *(float *)((int)puVar15 + 0x1bc) = fVar5;
          *(float *)(puVar15 + 0x14) = fVar5;
          *(float *)((int)puVar15 + 0xa4) = fVar6;
          fVar8 = g_heroPosition.w;
          *(float *)(puVar15 + 0x38) = fVar6;
          *(float *)((int)puVar15 + 0xac) = fVar8;
          *(float *)(puVar15 + 0x15) = fVar4;
          *(float *)((int)puVar15 + 0x1c4) = ABS(fVar5) - ABS(fVar6);
          fVar8 = 0.0;
          uVar36 = (ulonglong)(*(uint *)((int)puVar15 + 0x1bc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x1c4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x38) >> 0x1d) & 4;
          fVar4 = (moby->rotation).z;
          fVar9 = ABS(*(float *)((int)puVar15 + 0x1bc));
          if (*(float *)((int)puVar15 + 0x1c4) - 0.0 < 0.0) {
            fVar9 = ABS(fVar6);
          }
          fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
          fVar6 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)(puVar15 + 0x38));
          if (*(float *)((int)puVar15 + 0x1c4) - 0.0 < 0.0) {
            fVar17 = ABS(fVar5);
          }
          if (0.0 < fVar9) {
            lVar32 = uVar29 - 0x300;
            lVar37 = uVar29 - 0xf4;
            lVar33 = uVar29 - 0x104;
            lVar40 = 2;
            fVar5 = (fVar17 - fVar9) / (fVar17 + fVar9);
            fVar9 = fVar5 * fVar5;
            *(float *)(puVar15 + 0x43) = fVar5;
            *(float *)(puVar15 + 0x42) = fVar5;
            *(float *)((int)puVar15 + 0x214) = fVar5;
            *(float *)((int)puVar15 + 0x20c) = fVar5;
            fVar5 = fVar9 * fVar9;
            *(float *)(puVar15 + 0x42) = *(float *)(puVar15 + 0x42) * fVar9;
            *(float *)((int)puVar15 + 0x214) = *(float *)((int)puVar15 + 0x214) * fVar5;
            *(float *)(puVar15 + 0x43) = *(float *)(puVar15 + 0x43) * fVar5 * fVar9;
            do {
              *(float *)((int)lVar32 + 0x20c) = *(float *)((int)lVar32 + 0x1fc) * fVar5 * fVar5;
              iVar30 = (int)lVar33;
              lVar33 = lVar33 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar5 * fVar5;
              lVar37 = lVar37 + 8;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
            lVar40 = 4;
            lVar37 = uVar29 - 0x104;
            pfVar34 = (float *)&DAT_007358e0;
            lVar32 = lVar38;
            lVar33 = lVar37;
            do {
              fVar5 = *pfVar34;
              fVar9 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar32 + 0x20c) = *(float *)((int)lVar32 + 0x20c) * fVar5;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar9;
              lVar33 = lVar33 + 8;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
            lVar32 = 2;
            do {
              iVar30 = (int)lVar38;
              lVar38 = lVar38 + 0x10;
              iVar16 = (int)lVar37;
              lVar37 = lVar37 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar30 + 0x20c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar6;
          }
          AccelDeltAng
                    ((double)(fVar8 - fVar4),0x3f947ae140000000,0x3fd3333340000000,
                     (double)(float)(0.05000000074505806 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                     uVar39 + 0x150);
        }
        else {
          AccelDeltAng
                    (0,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(float)(0.10000000149011612 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                     uVar39 + 0x150);
        }
      }
      fVar4 = pfVar13[0x5a];
      puVar15[0x52] = (longlong)(int)(animationSpeed * 20.5);
      if ((*(int *)((int)puVar15 + 0x294) < (int)fVar4) &&
         (fVar4 == (float)((((int)fVar4 >> 3) + (uint)((int)fVar4 < 0 && ((uint)fVar4 & 7) != 0)) *
                          8))) {
        uVar52 = 0;
        *(undefined4 *)(puVar15 + 0x1a) = 0;
        *(undefined4 *)((int)puVar15 + 0xd4) = 0;
        *(undefined4 *)(puVar15 + 0x1b) = 0;
        *(undefined4 *)((int)puVar15 + 0xdc) = 0;
        fVar5 = g_FrameTime;
        *(undefined4 *)((int)puVar15 + 0xcc) = 0;
        *(undefined4 *)(puVar15 + 0x19) = 0;
        *(undefined4 *)((int)puVar15 + 0xc4) = 0;
        *(undefined4 *)(puVar15 + 0x18) = 0;
        fVar4 = (moby->rotation).z;
        *(float *)(puVar15 + 0x1a) = fVar5 * 8.0;
        *(float *)(puVar15 + 0x19) = pfVar13[0x57] + fVar4;
        FastEulerToMtx1(uVar29 - 0x1a0,uVar29 - 0x250);
        fVar17 = *(float *)(puVar15 + 0x30) * DAT_007ff6f4;
        fVar18 = *(float *)((int)puVar15 + 0x184) * DAT_007ff6f4;
        fVar19 = *(float *)(puVar15 + 0x31) * DAT_007ff6f4;
        fVar23 = *(float *)(puVar15 + 0x2e) * DAT_007ff6f0;
        fVar24 = *(float *)((int)puVar15 + 0x174) * DAT_007ff6f0;
        fVar25 = *(float *)(puVar15 + 0x2f) * DAT_007ff6f0;
        fVar4 = *(float *)((int)puVar15 + 0xd4);
        fVar20 = *(float *)(puVar15 + 0x32) * DAT_007ff6f8;
        fVar21 = *(float *)((int)puVar15 + 0x194) * DAT_007ff6f8;
        fVar22 = *(float *)(puVar15 + 0x33) * DAT_007ff6f8;
        fVar5 = *(float *)(puVar15 + 0x1a);
        fVar26 = *(float *)(puVar15 + 0x34) * DAT_007ff6fc;
        fVar27 = *(float *)((int)puVar15 + 0x1a4) * DAT_007ff6fc;
        fVar6 = *(float *)(puVar15 + 0x1b);
        fVar28 = *(float *)(puVar15 + 0x35) * DAT_007ff6fc;
        fVar8 = *(float *)((int)puVar15 + 0xdc);
        *(float *)((int)puVar15 + 0xbc) =
             *(float *)((int)puVar15 + 0x1ac) * DAT_007ff6fc +
             *(float *)((int)puVar15 + 0x19c) * DAT_007ff6f8 +
             *(float *)((int)puVar15 + 0x17c) * DAT_007ff6f0 +
             *(float *)((int)puVar15 + 0x18c) * DAT_007ff6f4;
        fVar9 = (moby->pos).y;
        fVar11 = (moby->pos).z;
        *(float *)(puVar15 + 0x16) = fVar26 + fVar20 + fVar23 + fVar17 + (moby->pos).x;
        *(float *)((int)puVar15 + 0xb4) = fVar27 + fVar21 + fVar24 + fVar18 + fVar9;
        *(float *)(puVar15 + 0x17) = fVar28 + fVar22 + fVar25 + fVar19 + fVar11;
        *(float *)(puVar15 + 0x1a) =
             *(float *)(puVar15 + 0x34) * fVar8 +
             *(float *)(puVar15 + 0x32) * fVar6 +
             *(float *)(puVar15 + 0x2e) * fVar5 + *(float *)(puVar15 + 0x30) * fVar4;
        *(float *)((int)puVar15 + 0xd4) =
             *(float *)((int)puVar15 + 0x1a4) * fVar8 +
             *(float *)((int)puVar15 + 0x194) * fVar6 +
             *(float *)((int)puVar15 + 0x174) * fVar5 + *(float *)((int)puVar15 + 0x184) * fVar4;
        *(float *)(puVar15 + 0x1b) =
             *(float *)(puVar15 + 0x35) * fVar8 +
             *(float *)(puVar15 + 0x33) * fVar6 +
             *(float *)(puVar15 + 0x2f) * fVar5 + *(float *)(puVar15 + 0x31) * fVar4;
        *(float *)((int)puVar15 + 0xdc) =
             *(float *)((int)puVar15 + 0x1ac) * fVar8 +
             *(float *)((int)puVar15 + 0x19c) * fVar6 +
             *(float *)((int)puVar15 + 0x17c) * fVar5 + *(float *)((int)puVar15 + 0x18c) * fVar4;
        iVar30 = FUN_00366d48(uVar52,uVar29 - 0x240,uVar29 - 0x260);
        if (iVar30 != 0) {
          auVar53 = ZEXT416(0xffffffff);
          auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
          *(undefined4 *)(iVar30 + 0x48) = *(undefined4 *)(puVar15 + 0x19);
          auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar53 = loadVectorLeftIndexed(0x48,0x30d048);
          auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar53 = vectorMultiplyAddFloatingPoint
                              (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60
                               ,auVar54);
          auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
          auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0,
                              (ulonglong)*(uint *)(iVar30 + 0x78));
          *(undefined4 *)(*(uint *)(iVar30 + 0x78) & 0xfffffffc) = uVar14;
          *(undefined1 *)(iVar30 + 0x20) = 1;
        }
      }
      fVar4 = pfVar13[0x5a];
      pfVar13[0x5a] = (float)((int)fVar4 + -1);
      if (fVar4 == 0.0) {
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x4c,0x30d048);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if ((((pfVar13[0x58] < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) ||
           (5.0 < ABS((moby->pos).z - g_heroPosition.z))) ||
          ((-1 < (int)pfVar13[0x5d] &&
           (iVar30 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar13[0x5d]),
           iVar30 == 0)))) && (moby->state = '\x01', moby->animationId != '\x01')) {
        MB_SetAnimation(moby,1,0,3);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      uVar31 = MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14));
      if ((uVar31 & 0x40) != 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          MB_SetAnimation(moby,4,0,3);
        }
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x10,0x30d048);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar54 = loadVectorLeftIndexed(0x168,uVar39);
        auVar55 = loadVectorRightIndexed(0x178,uVar39);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = ZEXT416((auVar54.piece<0,4>() | auVar55.piece<0,4>()) + auVar53.piece<0,4>()) &
                  (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
    }
    else if (bVar1 < 6) {
      uVar31 = MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14));
      if (((uVar31 & 0x40) != 0) && (moby->state = '\x06', moby->animationId != '\a')) {
        MB_SetAnimation(moby,7,0,3);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\x03')
            ) {
      MB_SetAnimation(moby,3,0,3);
    }
  }
  else if (bVar1 < 8) {
    *(MobyInstance **)(puVar15 + 0x2a) = moby;
    *(undefined4 *)((int)puVar15 + 0x154) = 0;
    *(undefined4 *)(puVar15 + 0x2c) = 0;
    fVar4 = g_heroPosition.y;
    *(float *)(puVar15 + 0x1c) = g_heroPosition.x;
    fVar5 = g_heroPosition.z;
    *(float *)((int)puVar15 + 0xe4) = fVar4;
    fVar4 = g_heroPosition.w;
    *(float *)(puVar15 + 0x1d) = fVar5;
    fVar7 = (moby->pos).x;
    *(float *)((int)puVar15 + 0xec) = fVar4;
    fVar10 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x1e) = fVar7;
    fVar7 = (moby->pos).w;
    *(f32 *)((int)puVar15 + 0xf4) = fVar10;
    *(f32 *)((int)puVar15 + 0xfc) = fVar7;
    fVar4 = (moby->pos).z;
    *(float *)(puVar15 + 0x1d) = fVar5 + 0.75;
    *(float *)(puVar15 + 0x1f) = fVar4 + 0.75;
    iVar30 = STUB_00055ab8_RET_0(uVar29 - 0x220,uVar29 - 0x230,0,moby,uVar29 - 0x1d0);
    if (iVar30 != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
      if (dVar45 - (double)DAT_007ff700 < 0.0) {
        dVar45 = (double)DAT_007ff700;
      }
      if (g_CollOutput.pMoby == g_heroMobyPtr) {
        GetBonePosition(moby,4,uVar29 - 0x210);
        fVar5 = g_heroPosition.x - *(float *)(puVar15 + 0x20);
        fVar6 = g_heroPosition.y - *(float *)((int)puVar15 + 0x104);
        fVar4 = g_heroPosition.z - *(float *)(puVar15 + 0x21);
        *(float *)(puVar15 + 0x36) = fVar5;
        *(float *)(puVar15 + 0x20) = fVar5;
        *(float *)((int)puVar15 + 0x104) = fVar6;
        fVar8 = g_heroPosition.w;
        *(float *)((int)puVar15 + 0x1b4) = fVar6;
        *(float *)((int)puVar15 + 0x10c) = fVar8;
        *(float *)(puVar15 + 0x21) = fVar4;
        *(float *)(puVar15 + 0x37) = ABS(fVar5) - ABS(fVar6);
        fVar8 = 0.0;
        fVar4 = (moby->rotation).z;
        uVar36 = (ulonglong)(*(uint *)(puVar15 + 0x36) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x37) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1b4) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar15 + 0x36));
        if (*(float *)(puVar15 + 0x37) - 0.0 < 0.0) {
          fVar9 = ABS(fVar6);
        }
        fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar6 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)((int)puVar15 + 0x1b4));
        if (*(float *)(puVar15 + 0x37) - 0.0 < 0.0) {
          fVar17 = ABS(fVar5);
        }
        if (0.0 < fVar9) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0x114;
          lVar33 = uVar29 - 0x124;
          lVar40 = 2;
          fVar5 = (fVar17 - fVar9) / (fVar17 + fVar9);
          fVar9 = fVar5 * fVar5;
          *(float *)(puVar15 + 0x3f) = fVar5;
          *(float *)(puVar15 + 0x3e) = fVar5;
          *(float *)((int)puVar15 + 500) = fVar5;
          *(float *)((int)puVar15 + 0x1ec) = fVar5;
          fVar5 = fVar9 * fVar9;
          *(float *)(puVar15 + 0x3e) = *(float *)(puVar15 + 0x3e) * fVar9;
          *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar5;
          *(float *)(puVar15 + 0x3f) = *(float *)(puVar15 + 0x3f) * fVar5 * fVar9;
          do {
            *(float *)((int)lVar32 + 0x1ec) = *(float *)((int)lVar32 + 0x1dc) * fVar5 * fVar5;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar5 * fVar5;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0x124;
          pfVar34 = (float *)&DAT_007358e0;
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            fVar5 = *pfVar34;
            fVar9 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar32 + 0x1ec) = *(float *)((int)lVar32 + 0x1ec) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar9;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar32 = 2;
          do {
            iVar30 = (int)lVar38;
            lVar38 = lVar38 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            fVar8 = fVar8 + *(float *)(iVar30 + 0x1ec) + *(float *)(iVar16 + 4) +
                    *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar6;
        }
        AccelDeltAng
                  ((double)(fVar8 - fVar4),0x3f947ae140000000,0x3fd3333340000000,
                   (double)(float)(0.05000000074505806 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                   uVar39 + 0x150);
      }
      else {
        AccelDeltAng
                  (0,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(float)(0.10000000149011612 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                   uVar39 + 0x150);
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar53 = ZEXT416(0xffffffff);
      auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      moby->state = '\x03';
      auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
      auVar53 = loadVectorLeftIndexed(0x30,0x30d048);
      auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar53 = vectorMultiplyAddFloatingPoint
                          (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                           auVar54);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,uVar39
                         );
      *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      if (moby->animationId != '\x04') {
        MB_SetAnimation(moby,4,0,0);
      }
    }
  }
  else if ((bVar1 < 9) &&
          (uVar31 = MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14)), (uVar31 & 0x40) != 0
          )) {
    DeleteMoby(moby);
    return;
  }
LAB_0030e8bc:
  MB_ColorDyingMoby(moby,uVar39 + 0x40);
  pfVar13[0x5b] = pfVar13[0x5b] * DAT_007ff704;
  FastQuaternionToEuler(uVar29 - 0x2a0,1);
  lVar38 = uVar39 + 0x110;
  FastQuaternionToEuler((double)pfVar13[0x57],lVar38,2);
  FastQuaternionMult(lVar38,lVar38,uVar29 - 0x2a0);
  return;
}



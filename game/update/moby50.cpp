// game/update/moby50.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3a3c08-0x3a4848
#include "game/update/moby50.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby499.h"
#include "idol/fastfunc.h"

// 0x03a3c08 (0xc40 bytes)
// inlined: FastAtan2 @0x3a3fac, FastAtan2 @0x3a414c, FastAtan2 @0x3a43f0, FastAtan2 @0x3a4590
/* Moby 50 */

void UpdateMoby_50(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  ulonglong *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar23;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x220;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar16;
  puVar12[0x46] = in_LR;
  puVar12[0x3e] = in_f26;
  puVar12[0x3f] = in_f27;
  puVar12[0x40] = in_f28;
  puVar12[0x41] = in_f29;
  puVar12[0x42] = in_f30;
  puVar12[0x43] = in_f31;
  puVar12[0x3c] = unaff_r30;
  puVar12[0x3d] = unaff_r31;
  pfVar10 = (float *)moby->pVar;
  puVar12[0x3b] = unaff_r29;
  fVar11 = pfVar10[0xd];
  puVar12[0x3a] = unaff_r28;
  puVar12[0x39] = unaff_r27;
  pfVar28 = pfVar10;
  if ((fVar11 == 0.0) &&
     (fVar11 = (moby->pos).y - GameCamera.posY, fVar1 = (moby->pos).x - GameCamera.posX,
     fVar4 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar11 * fVar11) < 15.0)) {
    pfVar10[0xd] = 1.4013e-45;
    sound_MobyPlay_oClass(5,0,moby,0x54c);
    pfVar28 = (float *)moby->pVar;
  }
  fVar11 = DAT_010c925c;
  if (moby->state == '\0') {
    fVar1 = DAT_0084346c * g_FrameTime;
    *(float *)(puVar12 + 0x1e) = *pfVar28 * DAT_010c925c;
    *(float *)((int)puVar12 + 0xf4) = pfVar28[1] * fVar11;
    *(float *)(puVar12 + 0x1f) = pfVar28[2] * fVar11;
    *(float *)((int)puVar12 + 0xfc) = pfVar28[3];
    MB_randSphere((double)fVar1,(double)fVar1,uVar16 - 0x140);
    fVar1 = DAT_010c9260;
    *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) + *(float *)(puVar12 + 0x1c);
    *(float *)((int)puVar12 + 0xf4) =
         *(float *)((int)puVar12 + 0xf4) + *(float *)((int)puVar12 + 0xe4);
    *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) + *(float *)(puVar12 + 0x1d);
    fVar11 = DAT_00843470 * g_FrameTime;
    *(float *)(puVar12 + 0x20) = *pfVar28 * fVar1;
    *(float *)((int)puVar12 + 0x104) = pfVar28[1] * fVar1;
    *(float *)(puVar12 + 0x21) = pfVar28[2] * fVar1;
    *(float *)((int)puVar12 + 0x10c) = pfVar28[3];
    MB_randSphere((double)fVar11,(double)fVar11,uVar16 - 0x140);
    uVar14 = DAT_00843450;
    *(undefined4 *)((int)puVar12 + 0xfc) = DAT_0084344c;
    *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) + *(float *)(puVar12 + 0x1c);
    fVar11 = DAT_00843454;
    *(float *)((int)puVar12 + 0x104) =
         *(float *)((int)puVar12 + 0x104) + *(float *)((int)puVar12 + 0xe4);
    *(undefined4 *)((int)puVar12 + 0x10c) = uVar14;
    fVar1 = DAT_00843458;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) + *(float *)(puVar12 + 0x1d);
    dVar30 = (double)MB_randRangeFloat(fVar11,fVar1);
    uVar18 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    dVar30 = (double)MB_randRangeFloat(DAT_0084345c,DAT_00843460);
    uVar19 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    dVar30 = (double)MB_randRangeFloat(DAT_00843464,DAT_00843468);
    uVar20 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    uVar15 = DAT_00843448;
    uVar14 = DAT_00843444;
    lVar27 = lVar17 + 0x10;
    puVar12[0xe] = (longlong)DAT_00843478;
    SpawnPart_2(lVar27,uVar16 - 0x130,uVar16 - 0x120,uVar14,uVar15,uVar18,uVar19,uVar20);
    fVar4 = pfVar10[4] - (moby->pos).x;
    fVar11 = pfVar10[6];
    fVar5 = pfVar10[5] - (moby->pos).y;
    *(float *)((int)puVar12 + 0x134) = fVar4;
    *(float *)(puVar12 + 0x27) = fVar5;
    fVar11 = fVar11 - (moby->pos).z;
    dVar39 = (double)fVar11;
    *(float *)((int)puVar12 + 0x13c) = ABS(fVar4) - ABS(fVar5);
    dVar30 = 0.0;
    uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x13c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1d) & 4;
    fVar1 = pfVar10[10];
    fVar6 = ABS(*(float *)((int)puVar12 + 0x134));
    if (*(float *)((int)puVar12 + 0x13c) - 0.0 < 0.0) {
      fVar6 = ABS(fVar5);
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar3 = ABS(*(float *)(puVar12 + 0x27));
    if (*(float *)((int)puVar12 + 0x13c) - 0.0 < 0.0) {
      fVar3 = ABS(fVar4);
    }
    dVar38 = 0.7853981852531433;
    dVar32 = dVar30;
    if (0.0 < fVar6) {
      lVar21 = uVar16 - 0x210;
      lVar26 = uVar16 - 0x70;
      lVar24 = uVar16 - 0x80;
      lVar29 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x1ac) = fVar6;
      *(float *)((int)puVar12 + 0x1a4) = fVar6;
      *(float *)(puVar12 + 0x35) = fVar6;
      *(float *)(puVar12 + 0x34) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x1a4) = *(float *)((int)puVar12 + 0x1a4) * fVar3;
      *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar6;
      *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 400) * fVar6 * fVar6;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar16 - 0x80;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 0x1a0) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar21 = lVar22;
      do {
        iVar23 = (int)lVar21;
        iVar13 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar23 + 0x1a0)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar2);
    }
    *(float *)((int)puVar12 + 300) = fVar11;
    dVar37 = (double)(fVar4 * fVar4 + fVar5 * fVar5);
    dVar35 = ABS((double)(float)SQRT(dVar37));
    *(float *)(puVar12 + 0x25) = (float)SQRT(dVar37);
    *(float *)(puVar12 + 0x26) = (float)(dVar35 - ABS(dVar39));
    uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)(puVar12 + 0x25));
    if (*(float *)(puVar12 + 0x26) - 0.0 < 0.0) {
      dVar31 = ABS(dVar39);
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar12 + 300));
    if (*(float *)(puVar12 + 0x26) - 0.0 < 0.0) {
      dVar33 = dVar35;
    }
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    dVar35 = dVar30;
    if (0.0 < dVar31) {
      lVar21 = uVar16 - 0x210;
      lVar26 = uVar16 - 0x90;
      lVar24 = uVar16 - 0xa0;
      lVar29 = 2;
      fVar5 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0x18c) = fVar5;
      *(float *)((int)puVar12 + 0x184) = fVar5;
      *(float *)(puVar12 + 0x31) = fVar5;
      *(float *)(puVar12 + 0x30) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x184) = *(float *)((int)puVar12 + 0x184) * fVar6;
      *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar5;
      *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x180) = *(float *)((int)lVar21 + 0x170) * fVar5 * fVar5;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar16 - 0xa0;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar24 = lVar26;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x180) = *(float *)((int)lVar21 + 0x180) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar21 = lVar22;
      dVar31 = dVar30;
      do {
        iVar23 = (int)lVar21;
        iVar13 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x180)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar31 + 0.7853981852531433) * fVar11 + fVar4);
    }
    dVar31 = (double)FastWrapRot((float)dVar32,fVar1);
    dVar35 = (double)FastWrapRot((float)dVar35,pfVar10[0xb]);
    dVar32 = 1.2217304706573486;
    if ((dVar35 <= 1.2217304706573486) && (dVar32 = dVar35, dVar35 < -1.2217304706573486)) {
      dVar32 = -1.2217304706573486;
    }
    MB_SphericalToVector(pfVar10[9],(float)dVar31,(float)dVar32,(float *)(puVar12 + 0x18))
    ;
    iVar23 = FastDecTimerS32(pfVar10 + 8);
    if (iVar23 == 0) {
      dVar32 = (double)FastIntToDouble(pfVar10[8]);
      dVar31 = (double)FastIntToDouble(pfVar10[0xc]);
      fVar11 = (float)(dVar32 / dVar31);
      fVar1 = *pfVar10;
      fVar4 = pfVar10[1];
      fVar5 = pfVar10[2];
      fVar6 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar9 = (moby->pos).z;
      *(f32 *)((int)puVar12 + 0xdc) = (moby->pos).w;
      fVar3 = fVar11 * (fVar1 - *(float *)(puVar12 + 0x18)) + *(float *)(puVar12 + 0x18);
      dVar31 = (double)fVar3;
      fVar1 = fVar11 * (fVar4 - *(float *)((int)puVar12 + 0xc4)) + *(float *)((int)puVar12 + 0xc4);
      dVar35 = (double)fVar1;
      fVar11 = fVar11 * (fVar5 - *(float *)(puVar12 + 0x19)) + *(float *)(puVar12 + 0x19);
      dVar33 = (double)fVar11;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = fVar1;
      *(float *)(puVar12 + 0x1a) = (float)((double)fVar6 + dVar31);
      *(float *)((int)puVar12 + 0x124) = (float)(ABS(dVar31) - ABS(dVar35));
      *(float *)((int)puVar12 + 0xd4) = (float)((double)fVar2 + dVar35);
      *(float *)(puVar12 + 0x1b) = (float)((double)fVar9 + dVar33);
      uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x11c));
      if ((double)*(float *)((int)puVar12 + 0x124) - dVar30 < 0.0) {
        dVar32 = ABS(dVar35);
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar36 = ABS((double)*(float *)(puVar12 + 0x24));
      if ((double)*(float *)((int)puVar12 + 0x124) - dVar30 < 0.0) {
        dVar36 = ABS(dVar31);
      }
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar34 = dVar30;
      if (dVar30 < dVar32) {
        lVar21 = uVar16 - 0x210;
        lVar24 = uVar16 - 0xc0;
        lVar26 = uVar16 - 0xb0;
        lVar29 = 2;
        fVar5 = (float)(dVar36 - dVar32) / (float)(dVar36 + dVar32);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x16c) = fVar5;
        *(float *)((int)puVar12 + 0x164) = fVar5;
        *(float *)(puVar12 + 0x2d) = fVar5;
        *(float *)(puVar12 + 0x2c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar6;
        *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar5;
        *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar21 + 0x160) = *(float *)((int)lVar21 + 0x150) * fVar5 * fVar5;
          iVar23 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar16 - 0xc0;
        pfVar28 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar5 = *pfVar28;
          fVar6 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar21 + 0x160) = *(float *)((int)lVar21 + 0x160) * fVar5;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar24 = 2;
        lVar21 = lVar22;
        dVar32 = dVar30;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar13 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar23 + 0x160)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar32 + dVar38) * fVar1 + fVar4);
      }
      *(float *)((int)puVar12 + 0x114) = fVar11;
      (moby->rotation).z = (float)dVar34;
      dVar33 = ABS(dVar33);
      fVar11 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar35 * dVar35)));
      dVar31 = ABS((double)fVar11);
      *(float *)(puVar12 + 0x22) = fVar11;
      *(float *)(puVar12 + 0x23) = (float)(dVar31 - dVar33);
      uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)(puVar12 + 0x22));
      if ((double)*(float *)(puVar12 + 0x23) - dVar30 < 0.0) {
        dVar32 = dVar33;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar12 + 0x114));
      if ((double)*(float *)(puVar12 + 0x23) - dVar30 < 0.0) {
        dVar35 = dVar31;
      }
      fVar1 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (dVar30 < dVar32) {
        lVar21 = uVar16 - 0x210;
        lVar24 = uVar16 - 0xe0;
        lVar26 = uVar16 - 0xd0;
        lVar29 = 2;
        fVar4 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x14c) = fVar4;
        *(float *)((int)puVar12 + 0x144) = fVar4;
        *(float *)(puVar12 + 0x29) = fVar4;
        *(float *)(puVar12 + 0x28) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x144) = *(float *)((int)puVar12 + 0x144) * fVar5;
        *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar4;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x130) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar16 - 0xe0;
        pfVar28 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar28;
          fVar5 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x140) * fVar4;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar21 = 2;
        do {
          iVar23 = (int)lVar22;
          iVar13 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x140)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar30 = (double)((float)(dVar30 + dVar38) * fVar11 + fVar1);
      }
      dVar32 = -dVar30;
    }
    else {
      fVar11 = (moby->pos).x;
      fVar1 = *(float *)(puVar12 + 0x18);
      fVar4 = (moby->pos).y;
      fVar5 = *(float *)((int)puVar12 + 0xc4);
      fVar6 = (moby->pos).z;
      fVar2 = *(float *)(puVar12 + 0x19);
      fVar7 = (moby->pos).w;
      (moby->rotation).z = (float)dVar31;
      *(f32 *)((int)puVar12 + 0xdc) = fVar7;
      *(float *)(puVar12 + 0x1a) = fVar11 + fVar1;
      *(float *)((int)puVar12 + 0xd4) = fVar4 + fVar5;
      *(float *)(puVar12 + 0x1b) = fVar6 + fVar2;
    }
    (moby->rotation).y = (float)dVar32;
    iVar23 = CollLine(lVar27,uVar16 - 0x150,0,lVar17,0);
    if ((iVar23 != 0) || (SQRT((float)(dVar39 * dVar39 + dVar37)) < pfVar10[9])) {
      uVar18 = 0x3ff0000000000000;
      uVar19 = 0x4000000000000000;
      if (g_heroType == '\x02') {
        puVar12[0xe] = 0;
        DamageSphereAtPos
                  (0x4000000000000000,0x4000000000000000,0x3ff0000000000000,lVar17,lVar27,0,3);
      }
      sound_MobyPlay_oClass(4,0,moby,0x54c);
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      MB_genericExplosion
                (0x4010000000000000,0x4010000000000000,0x4010000000000000,uVar19,0x4022000000000000,
                 uVar18,0x402e000000000000,lVar17,pfVar10,lVar27,1,0xffffffffffffffff,10,3,0x10);
      DeleteMoby(moby);
    }
    else {
      fVar7 = *(f32 *)((int)puVar12 + 0xd4);
      (moby->pos).x = *(f32 *)(puVar12 + 0x1a);
      fVar8 = *(f32 *)(puVar12 + 0x1b);
      (moby->pos).y = fVar7;
      fVar7 = *(f32 *)((int)puVar12 + 0xdc);
      (moby->pos).z = fVar8;
      (moby->pos).w = fVar7;
    }
  }
  return;
}



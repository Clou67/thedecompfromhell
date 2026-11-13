// game/update/moby69.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x41bf10-0x41f74c
#include <math.h>
#include <stdio.h>
#include "game/update/moby69.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby291.h"
#include "game/update/moby335.h"
#include "game/update/moby688.h"
#include "idol/fastfunc.h"

// 0x041bf10 (0x1b70 bytes)
// inlined: FastAtan2 @0x41c550, FastAtan2 @0x41c77c, FastAtan2 @0x41c9b8, FastAtan2 @0x41cbe0, FastRSqrt @0x41cdbc, FastAtan2 @0x41d42c, FastAtan2 @0x41d608
// strings: 006571b0: 'correcting camera mode!\n'

void M69_0041bf10(MobyInstance *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  short sVar14;
  MOBY_OCLASSES MVar15;
  f32 fVar16;
  uint uVar17;
  uint uVar18;
  undefined2 uVar19;
  ulonglong *puVar20;
  int iVar21;
  Cuboid *pCVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  int iVar27;
  longlong lVar26;
  undefined *unused;
  int iVar31;
  ulonglong uVar28;
  float *pfVar32;
  undefined4 *unused_00;
  longlong lVar29;
  longlong lVar30;
  longlong lVar33;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  ulonglong in_f26;
  undefined8 uVar43;
  ulonglong in_f27;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  float fVar55;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar26 = uVar25 - 0x2f0;
  puVar20 = (ulonglong *)lVar26;
  *puVar20 = uVar25;
  puVar20[0x60] = in_LR;
  puVar20[0x52] = in_f20;
  puVar20[0x53] = in_f21;
  puVar20[0x54] = in_f22;
  puVar20[0x55] = in_f23;
  puVar20[0x56] = in_f24;
  puVar20[0x57] = in_f25;
  puVar20[0x58] = in_f26;
  puVar20[0x59] = in_f27;
  puVar20[0x5a] = in_f28;
  puVar20[0x5b] = in_f29;
  puVar20[0x5c] = in_f30;
  puVar20[0x5d] = in_f31;
  puVar20[0x51] = unaff_r31;
  puVar20[0x50] = unaff_r30;
  dVar44 = 0.0;
  *(undefined4 *)(puVar20 + 0x18) = 0;
  *(undefined4 *)((int)puVar20 + 0xc4) = 0;
  *(undefined4 *)(puVar20 + 0x19) = 0;
  *(undefined4 *)((int)puVar20 + 0xcc) = 0;
  uVar43 = 0x4020000000000000;
  fVar55 = g_FrameTime * 8.0;
  cVar2 = param_1->setByGroup;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  puVar20[0x4f] = unaff_r29;
  puVar20[0x4e] = unaff_r28;
  puVar20[0x4d] = unaff_r27;
  *(float *)(puVar20 + 0x19) = fVar55;
  iVar21 = (int)param_2;
  if (cVar2 == '\0') {
    sVar14 = *(short *)(iVar21 + 0x68);
    puVar20[0x4a] = (longlong)(int)(animationSpeed * 120.5);
    if (*(int *)((int)puVar20 + 0x254) < (int)sVar14) {
      if ((g_Pad.repeat & 0x40) == 0) {
        if ((g_Pad.unk0b8 & 0x40) != 0) {
          iVar27 = *(int *)(iVar21 + 0x10c);
          if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == param_1)) &&
             (g_SoundChannels[iVar27].state != '\0')) {
            sound_Kill(iVar27);
          }
          *(undefined4 *)(iVar21 + 0x10c) = 0xffffffff;
        }
      }
      else {
        iVar27 = *(int *)(iVar21 + 0x10c);
        if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == param_1)) &&
           (g_SoundChannels[iVar27].state != '\0')) {
          sound_Kill(iVar27);
        }
        *(undefined4 *)(iVar21 + 0x10c) = 0xffffffff;
        iVar27 = PlayMobySound(1,4,param_1);
        *(int *)(iVar21 + 0x10c) = iVar27;
      }
      if ((g_Pad.padDownButtons & 0x40) == 0) {
        fVar55 = *(float *)(iVar21 + 100);
        fVar5 = g_FrameTime * 24.0;
        if (g_FrameTime * 24.0 - fVar55 < 0.0) {
          fVar5 = DAT_0071f408 * 0.1 * (g_FrameTime * 24.0 - fVar55) + fVar55;
        }
        if (fVar55 - (g_FrameTime * 24.0 - DAT_0071f408 * 0.025) < 0.0) {
          fVar5 = DAT_0071f408 * 0.025 + fVar55;
        }
        *(float *)(iVar21 + 100) = fVar5;
      }
      else {
        fVar55 = DAT_0071f408 * 0.035 + *(float *)(iVar21 + 100);
        *(float *)(iVar21 + 100) = fVar55;
        if (g_FrameTime * 30.0 < fVar55) {
          *(float *)(iVar21 + 100) = g_FrameTime * 30.0;
        }
      }
    }
    else {
      *(short *)(iVar21 + 0x68) = sVar14 + 1;
      *(float *)(iVar21 + 100) = DAT_0071f408 * 0.003 + *(float *)(iVar21 + 100);
    }
  }
  else {
    *(undefined4 *)(iVar21 + 100) = 0x38d1b717;
  }
  sVar14 = *(short *)(iVar21 + 0x68);
  puVar20[0x4a] = (longlong)(int)(animationSpeed * 5.5);
  if (*(int *)((int)puVar20 + 0x254) < (int)sVar14) {
    unused = &DAT_00720000;
    fVar55 = 0.1;
    dVar35 = (double)g_heroPadStick;
    dVar50 = (double)DAT_0096ba04;
    fVar5 = 0.25;
    if ((g_Pad.downButtons & L3) != 0) {
      fVar55 = 0.08;
      dVar35 = (double)(DAT_0071f408 * 0.015707964 *
                       (float)(dVar35 / (double)(DAT_0071f408 * 0.012271847)));
      dVar50 = (double)(DAT_0071f408 * 0.015707964 *
                       (float)(dVar50 / (double)(DAT_0071f408 * 0.012271847)));
      fVar5 = fVar55;
    }
    dVar48 = (double)(DAT_0071f408 * fVar5);
    dVar46 = 0.029999999329447746;
    AccelDelt((float)dVar35,DAT_0071f40c * 0.03,DAT_0071f40c,DAT_0071f408 * fVar55,
                        (float *)(iVar21 + 0x6c),0x720000,(float *)(iVar21 + 0x90));
    AccelDelt((float)dVar50,(float)((double)DAT_0071f40c * dVar46),DAT_0071f40c,
                        (float)dVar48,(float *)(iVar21 + 0x70),(int)unused,(float *)(iVar21 + 0x94))
    ;
    AccelDeltAng
              ((double)*(float *)(iVar21 + 0x6c),
               (double)(float)((double)DAT_0071f40c * 0.05000000074505806),(double)DAT_0071f40c,
               (double)DAT_0071f408,param_2 + 0x30);
    dVar50 = 0.012271846644580364;
    dVar35 = (double)FastDiffRots
                               ((double)*(float *)(iVar21 + 0x34),
                                (double)(DAT_0071f408 * 0.012271847 * *(float *)(iVar21 + 0x70)));
    *(float *)(iVar21 + 0x34) = (float)dVar35;
    dVar35 = (double)FastDiffRots
                               ((double)*(float *)(iVar21 + 0x38),
                                (double)((float)((double)DAT_0071f408 * dVar50) *
                                        *(float *)(iVar21 + 0x6c)));
    *(float *)(iVar21 + 0x38) = (float)dVar35;
    uVar17 = (int)*(uint *)(iVar21 + 0x34) >> 0x1f;
    fVar16 = (param_1->rotation).y;
    uVar18 = (int)fVar16 >> 0x1f;
    iVar31 = (uVar17 >> 1 ^ *(uint *)(iVar21 + 0x34)) - uVar17;
    iVar27 = (uVar18 >> 1 ^ (uint)fVar16) - uVar18;
    if (iVar31 < 0x3fb2b8c3) {
      if (iVar31 < -0x3fb2b8c2) {
        *(undefined4 *)(iVar21 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(iVar21 + 0x34) = 0x3fb2b8c2;
    }
    if (iVar27 < 0x3fb2b8c3) {
      if (iVar27 < -0x3fb2b8c2) {
        (param_1->rotation).y = -1.3962634;
      }
    }
    else {
      (param_1->rotation).y = 1.3962634;
    }
  }
  fVar55 = 310.0;
  fVar5 = 500.0;
  fVar8 = DAT_00857828;
  fVar7 = DAT_00857824;
  fVar6 = DAT_00857820;
  if (*(int *)(iVar21 + 0x110) != -1) {
    pCVar22 = Cuboids + *(int *)(iVar21 + 0x110);
    fVar55 = (pCVar22->matrix).v2.y;
    fVar7 = (pCVar22->matrix).v0.y + (pCVar22->matrix).v1.y;
    fVar5 = (pCVar22->matrix).v2.x;
    fVar8 = (pCVar22->matrix).v0.x + (pCVar22->matrix).v1.x;
    fVar6 = (pCVar22->matrix).v2.z;
    fVar9 = (pCVar22->matrix).v0.z + (pCVar22->matrix).v1.z;
    fVar55 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar55 * fVar55);
    fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar8 = (pCVar22->pos).z;
    fVar7 = (pCVar22->pos).y;
    fVar6 = (pCVar22->pos).x;
  }
  dVar49 = (double)fVar55;
  dVar47 = (double)fVar5;
  dVar45 = (double)fVar6;
  dVar42 = (double)fVar7;
  dVar41 = (double)fVar8;
  dVar46 = (double)(param_1->pos).x;
  dVar48 = (double)(param_1->pos).y;
  dVar37 = (double)DAT_00857820;
  dVar39 = ABS((double)(float)(dVar45 - dVar46));
  dVar38 = ABS((double)(float)(dVar42 - dVar48));
  *(float *)(puVar20 + 0x30) = (float)(dVar45 - dVar46);
  dVar35 = (double)DAT_00857824;
  *(float *)((int)puVar20 + 0x184) = (float)(dVar42 - dVar48);
  *(float *)(puVar20 + 0x31) = (float)(dVar39 - dVar38);
  dVar50 = (double)*(float *)(iVar21 + 0x38);
  dVar51 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x30) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar20 + 0x31) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x184) >> 0x1d) & 4;
  dVar37 = (double)SQRT((float)(dVar46 - dVar37) * (float)(dVar46 - dVar37) +
                        (float)(dVar48 - dVar35) * (float)(dVar48 - dVar35));
  dVar35 = ABS((double)*(float *)(puVar20 + 0x30));
  if ((double)*(float *)(puVar20 + 0x31) - dVar44 < 0.0) {
    dVar35 = dVar38;
  }
  fVar55 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar38 = ABS((double)*(float *)((int)puVar20 + 0x184));
  if ((double)*(float *)(puVar20 + 0x31) - dVar44 < 0.0) {
    dVar38 = dVar39;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar44;
  if (dVar44 < dVar35) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0xc4;
    lVar33 = uVar25 - 0xb4;
    lVar34 = 2;
    fVar6 = (float)(dVar38 - dVar35) / (float)(dVar38 + dVar35);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x47) = fVar6;
    *(float *)(puVar20 + 0x46) = fVar6;
    *(float *)((int)puVar20 + 0x234) = fVar6;
    *(float *)((int)puVar20 + 0x22c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x46) = *(float *)(puVar20 + 0x46) * fVar7;
    *(float *)((int)puVar20 + 0x234) = *(float *)((int)puVar20 + 0x234) * fVar6;
    *(float *)(puVar20 + 0x47) = *(float *)(puVar20 + 0x47) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x22c) = *(float *)((int)lVar29 + 0x21c) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0xc4;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x22c) = *(float *)((int)lVar29 + 0x22c) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar35 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0x22c)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar39 = (double)((float)(dVar35 + 0.7853981852531433) * fVar55 + fVar5);
  }
  dVar35 = 50.0;
  if (50.0 < dVar37) {
    dVar46 = (double)((float)(dVar37 - 50.0) / (float)(dVar47 - 50.0));
    if (dVar46 - dVar44 < 0.0) {
      dVar46 = dVar44;
    }
    if (1.0 - dVar46 < 0.0) {
      dVar46 = 1.0;
    }
    fVar55 = (float)(dVar46 * dVar46) * (float)(dVar46 * dVar46);
    fVar55 = fVar55 * fVar55;
    dVar48 = (double)(fVar55 * fVar55);
    dVar46 = (double)FastDiffRots(dVar39,dVar50);
    dVar50 = (double)FastWrapRot((float)dVar50,(float)(dVar48 * dVar46));
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  *(float *)(iVar21 + 0x38) = (float)dVar50;
  dVar40 = ABS((double)(float)(dVar42 - dVar48));
  dVar39 = ABS((double)(float)(dVar45 - dVar46));
  *(float *)((int)puVar20 + 0x174) = (float)(dVar45 - dVar46);
  *(float *)(puVar20 + 0x2f) = (float)(dVar42 - dVar48);
  dVar38 = (double)(param_1->rotation).z;
  *(float *)((int)puVar20 + 0x17c) = (float)(dVar39 - dVar40);
  uVar28 = (ulonglong)(*(uint *)((int)puVar20 + 0x174) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x17c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar20 + 0x2f) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar20 + 0x174));
  if ((double)*(float *)((int)puVar20 + 0x17c) - dVar44 < 0.0) {
    dVar50 = dVar40;
  }
  fVar55 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar40 = ABS((double)*(float *)(puVar20 + 0x2f));
  if ((double)*(float *)((int)puVar20 + 0x17c) - dVar44 < 0.0) {
    dVar40 = dVar39;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar33 = uVar25 - 0xd4;
    lVar30 = uVar25 - 0xe4;
    lVar34 = 2;
    fVar6 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x43) = fVar6;
    *(float *)(puVar20 + 0x42) = fVar6;
    *(float *)((int)puVar20 + 0x214) = fVar6;
    *(float *)((int)puVar20 + 0x20c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x42) = *(float *)(puVar20 + 0x42) * fVar7;
    *(float *)((int)puVar20 + 0x214) = *(float *)((int)puVar20 + 0x214) * fVar6;
    *(float *)(puVar20 + 0x43) = *(float *)(puVar20 + 0x43) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x20c) = *(float *)((int)lVar29 + 0x1fc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar30 = lVar30 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0xe4;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x20c) = *(float *)((int)lVar29 + 0x20c) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      iVar31 = (int)lVar33;
      lVar29 = lVar29 + 0x10;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x20c)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar39 = (double)((float)(dVar50 + dVar51) * fVar55 + fVar5);
  }
  if (dVar35 < dVar37) {
    dVar50 = (double)((float)(dVar37 - dVar35) / (float)(dVar47 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)FastDiffRots(dVar39,dVar38);
    dVar38 = (double)FastWrapRot((float)dVar38,(float)(dVar46 * dVar50));
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  dVar39 = (double)(param_1->pos).z;
  (param_1->rotation).z = (float)dVar38;
  dVar37 = (double)*(float *)(iVar21 + 0x34);
  *(float *)((int)puVar20 + 0x16c) = (float)(dVar41 - dVar39);
  fVar55 = SQRT((float)(dVar46 - dVar45) * (float)(dVar46 - dVar45) +
                (float)(dVar48 - dVar42) * (float)(dVar48 - dVar42));
  dVar38 = ABS((double)(float)(dVar41 - dVar39));
  dVar47 = ABS((double)fVar55);
  *(float *)(puVar20 + 0x2d) = fVar55;
  *(float *)(puVar20 + 0x2e) = (float)(dVar47 - dVar38);
  uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x2d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar20 + 0x2e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x16c) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)(puVar20 + 0x2d));
  if ((double)*(float *)(puVar20 + 0x2e) - dVar44 < 0.0) {
    dVar50 = dVar38;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar55 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = ABS((double)*(float *)((int)puVar20 + 0x16c));
  if ((double)*(float *)(puVar20 + 0x2e) - dVar44 < 0.0) {
    dVar40 = dVar47;
  }
  dVar47 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0x104;
    lVar33 = uVar25 - 0xf4;
    lVar34 = 2;
    fVar6 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x3f) = fVar6;
    *(float *)(puVar20 + 0x3e) = fVar6;
    *(float *)((int)puVar20 + 500) = fVar6;
    *(float *)((int)puVar20 + 0x1ec) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x3e) = *(float *)(puVar20 + 0x3e) * fVar7;
    *(float *)((int)puVar20 + 500) = *(float *)((int)puVar20 + 500) * fVar6;
    *(float *)(puVar20 + 0x3f) = *(float *)(puVar20 + 0x3f) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x1ec) = *(float *)((int)lVar29 + 0x1dc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0x104;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x1ec) = *(float *)((int)lVar29 + 0x1ec) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1ec)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar47 = (double)((float)(dVar50 + dVar51) * fVar5 + fVar55);
  }
  if (dVar35 < dVar38) {
    dVar50 = (double)((float)(dVar38 - dVar35) / (float)(dVar49 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)FastDiffRots(-dVar47,dVar37);
    dVar37 = (double)FastWrapRot((float)dVar37,(float)(dVar46 * dVar50));
    dVar39 = (double)(param_1->pos).z;
    dVar46 = (double)(param_1->pos).x;
    dVar48 = (double)(param_1->pos).y;
  }
  fVar55 = SQRT((float)(dVar46 - dVar45) * (float)(dVar46 - dVar45) +
                (float)(dVar48 - dVar42) * (float)(dVar48 - dVar42));
  *(float *)(puVar20 + 0x2c) = (float)(dVar41 - dVar39);
  *(float *)(iVar21 + 0x34) = (float)dVar37;
  dVar48 = (double)(param_1->rotation).y;
  dVar46 = ABS((double)(float)(dVar41 - dVar39));
  dVar38 = ABS((double)fVar55);
  *(float *)((int)puVar20 + 0x15c) = fVar55;
  *(float *)((int)puVar20 + 0x164) = (float)(dVar38 - dVar46);
  uVar28 = (ulonglong)(*(uint *)((int)puVar20 + 0x15c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar20 + 0x164) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar20 + 0x2c) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar20 + 0x15c));
  if ((double)*(float *)((int)puVar20 + 0x164) - dVar44 < 0.0) {
    dVar50 = dVar46;
  }
  fVar55 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar39 = ABS((double)*(float *)(puVar20 + 0x2c));
  if ((double)*(float *)((int)puVar20 + 0x164) - dVar44 < 0.0) {
    dVar39 = dVar38;
  }
  fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar38 = dVar44;
  if (dVar44 < dVar50) {
    lVar29 = uVar25 - 0x2e0;
    lVar30 = uVar25 - 0x124;
    lVar33 = uVar25 - 0x114;
    lVar34 = 2;
    fVar6 = (float)(dVar39 - dVar50) / (float)(dVar39 + dVar50);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar20 + 0x3b) = fVar6;
    *(float *)(puVar20 + 0x3a) = fVar6;
    *(float *)((int)puVar20 + 0x1d4) = fVar6;
    *(float *)((int)puVar20 + 0x1cc) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar20 + 0x3a) = *(float *)(puVar20 + 0x3a) * fVar7;
    *(float *)((int)puVar20 + 0x1d4) = *(float *)((int)puVar20 + 0x1d4) * fVar6;
    *(float *)(puVar20 + 0x3b) = *(float *)(puVar20 + 0x3b) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar29 + 0x1cc) = *(float *)((int)lVar29 + 0x1bc) * fVar6 * fVar6;
      iVar27 = (int)lVar30;
      lVar29 = lVar29 + 8;
      lVar30 = lVar30 + 8;
      *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
      lVar33 = lVar33 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar33 = uVar25 - 0x124;
    pfVar32 = (float *)&DAT_007358e0;
    lVar29 = lVar26;
    lVar30 = lVar33;
    do {
      fVar6 = *pfVar32;
      fVar7 = pfVar32[1];
      pfVar32 = pfVar32 + 2;
      *(float *)((int)lVar29 + 0x1cc) = *(float *)((int)lVar29 + 0x1cc) * fVar6;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar30 = 2;
    lVar29 = lVar26;
    dVar50 = dVar44;
    do {
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 0x10;
      iVar31 = (int)lVar33;
      lVar33 = lVar33 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1cc)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    dVar38 = (double)((float)(dVar50 + dVar51) * fVar55 + fVar5);
  }
  if (dVar35 < dVar46) {
    dVar50 = (double)((float)(dVar46 - dVar35) / (float)(dVar49 - dVar35));
    if (dVar50 - dVar44 < 0.0) {
      dVar50 = dVar44;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar55 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar55 = fVar55 * fVar55;
    dVar46 = (double)(fVar55 * fVar55);
    dVar50 = (double)FastDiffRots(-dVar38,dVar48);
    dVar48 = (double)FastWrapRot((float)dVar48,(float)(dVar46 * dVar50));
    dVar37 = (double)*(float *)(iVar21 + 0x34);
  }
  (param_1->rotation).y = (float)dVar48;
  MB_SphericalToVector
            (*(float *)(iVar21 + 100),*(float *)(iVar21 + 0x38),(float)-dVar37,
             (float *)(puVar20 + 0x1a));
  fVar55 = *(float *)((int)puVar20 + 0xd4);
  fVar5 = *(float *)(puVar20 + 0x1a);
  fVar6 = *(float *)(puVar20 + 0x1b);
  fVar7 = *(float *)(iVar21 + 100);
  fVar8 = *(float *)(iVar21 + 0x70);
  fVar9 = *(float *)(iVar21 + 0x6c);
  fVar10 = (param_1->pos).x;
  fVar11 = (param_1->pos).y;
  fVar12 = (param_1->pos).z;
  cVar2 = param_1->setByGroup;
  fVar23 = fVar6 * fVar6 + fVar5 * fVar5 + fVar55 * fVar55;
  uVar3 = param_1->state;
  bVar4 = *(byte *)(iVar21 + 0x60);
  if ((double)SQRT(fVar23) == dVar44) {
    uVar13 = *(undefined4 *)((int)puVar20 + 0xdc);
    dVar50 = dVar44;
    dVar46 = dVar44;
    dVar48 = dVar44;
  }
  else {
    fVar24 = 1.0 / SQRT(fVar23);
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    uVar13 = *(undefined4 *)((int)puVar20 + 0xdc);
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    fVar24 = -(fVar23 * fVar24 * fVar24 - 1.0) * fVar24 * 0.5 + fVar24;
    dVar48 = (double)(fVar5 * fVar24);
    dVar46 = (double)(fVar55 * fVar24);
    dVar50 = (double)(fVar6 * fVar24);
  }
  *(float *)(iVar21 + 0x10) = (float)dVar48;
  *(float *)(iVar21 + 0x14) = (float)dVar46;
  *(float *)(iVar21 + 0x18) = (float)dVar50;
  *(undefined4 *)(iVar21 + 0x1c) = uVar13;
  if (cVar2 == '\0') {
    (param_1->pos).x = fVar10 + fVar5;
    (param_1->pos).y = fVar11 + fVar55;
    (param_1->pos).z = fVar12 + fVar6;
  }
  fVar5 = g_FrameTime;
  dVar50 = -(double)(g_FrameTime * 24.0 - fVar7);
  fVar55 = g_FrameTime * 24.0;
  *(undefined4 *)((int)puVar20 + 0x10c) = 0;
  *(undefined4 *)(puVar20 + 0x22) = 0xbfa33333;
  *(undefined4 *)((int)puVar20 + 0x114) = 0;
  *(undefined4 *)((int)puVar20 + 0x11c) = 0;
  *(undefined4 *)(puVar20 + 0x23) = 0x3f266666;
  if (dVar50 - dVar44 < 0.0) {
    dVar50 = dVar44;
  }
  fVar55 = (float)(dVar50 / (double)(fVar5 * 30.0 - fVar55));
  dVar46 = (double)fVar55;
  *(float *)(iVar21 + 0xc4) = fVar55;
  *(float *)(puVar20 + 0x20) = -(float)(dVar46 * 4.0 - (double)(-15.0 - fVar8)) * 0.25;
  *(float *)((int)puVar20 + 0x104) = fVar9 * -3.0 * 0.25;
  dVar50 = 2.0;
  fVar55 = (fVar8 * 2.0 + 4.0) * 0.25;
  *(float *)(puVar20 + 0x21) = fVar55;
  if (uVar3 == '\x02') {
    fVar5 = *(float *)(puVar20 + (uint)bVar4 * 2 + 0x20);
    fVar6 = *(float *)((int)puVar20 + (uint)bVar4 * 0x10 + 0x104);
    *(float *)(iVar21 + 0xb4) = fVar5;
    fVar7 = *(float *)(puVar20 + (uint)bVar4 * 2 + 0x21);
    *(float *)(iVar21 + 0xb8) = fVar6;
    *(float *)(iVar21 + 0xbc) = fVar7;
  }
  else {
    dVar37 = 0.15000000596046448;
    dVar48 = 0.800000011920929;
    AccelDelt(*(float *)(puVar20 + (uint)bVar4 * 2 + 0x20),DAT_0071f40c * 0.15,
                        DAT_0071f40c * 0.8,DAT_0071f408,(float *)(iVar21 + 0xb4),0x41be44,
                        (float *)(iVar21 + 200));
    AccelDelt(*(float *)((int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2) + 0x104),
                        (float)((double)DAT_0071f40c * dVar37),
                        (float)((double)DAT_0071f40c * dVar48),DAT_0071f408,(float *)(iVar21 + 0xb8)
                        ,(int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2),
                        (float *)(iVar21 + 0xcc));
    fVar55 = AccelDelt(*(float *)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2 + 0x21),
                                 (float)((double)DAT_0071f40c * dVar37),
                                 (float)((double)DAT_0071f40c * dVar48),DAT_0071f408,
                                 (float *)(iVar21 + 0xbc),
                                 (int)(puVar20 + (uint)*(byte *)(iVar21 + 0x60) * 2),
                                 (float *)(iVar21 + 0xd0));
    fVar5 = *(float *)(iVar21 + 0xb4);
    fVar6 = *(float *)(iVar21 + 0xb8);
    fVar7 = *(float *)(iVar21 + 0xbc);
  }
  dVar38 = (double)fVar5;
  dVar37 = (double)fVar6;
  dVar48 = (double)fVar7;
  unused_00 = (undefined4 *)(iVar21 + 0x30);
  FastEulerToMtx((double)fVar55,uVar25 - 0x1d0);
  fVar55 = (param_1->pos).x;
  fVar5 = (param_1->pos).y;
  fVar6 = (param_1->pos).z;
  *(f32 *)((int)puVar20 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar20 + 0x1e) =
       fVar55 + (float)((double)*(float *)(puVar20 + 0x28) * dVar48 +
                       (double)(float)((double)*(float *)(puVar20 + 0x24) * dVar38 +
                                      (double)(float)((double)*(float *)(puVar20 + 0x26) * dVar37)))
  ;
  *(float *)((int)puVar20 + 0xf4) =
       fVar5 + (float)((double)*(float *)((int)puVar20 + 0x144) * dVar48 +
                      (double)(float)((double)*(float *)((int)puVar20 + 0x124) * dVar38 +
                                     (double)(float)((double)*(float *)((int)puVar20 + 0x134) *
                                                    dVar37)));
  *(float *)(puVar20 + 0x1f) =
       fVar6 + (float)((double)*(float *)(puVar20 + 0x29) * dVar48 +
                      (double)(float)((double)*(float *)(puVar20 + 0x25) * dVar38 +
                                     (double)(float)((double)*(float *)(puVar20 + 0x27) * dVar37)));
  Camera_SetMobyDrivenTargetPos((float *)(puVar20 + 0x1e));
  dVar39 = 0.5;
  dVar48 = (double)FastWrapRot
                             (*(float *)(iVar21 + 0x30) * 0.5,*(float *)(iVar21 + 0x6c) * 0.03125);
  uVar36 = FastWrapRot(*(float *)(iVar21 + 0x34),0.09817477);
  dVar37 = (double)FastDiffRots
                             (uVar36,(double)(DAT_0071f408 * 0.012271847 * *(float *)(iVar21 + 0x70)
                                             ));
  dVar38 = (double)*(float *)(iVar21 + 0x38);
  if (param_1->state == '\x02') {
    *(float *)(iVar21 + 0x20) = (float)dVar48;
    *(float *)(iVar21 + 0x24) = (float)dVar37;
    *(float *)(iVar21 + 0x28) = *(float *)(iVar21 + 0x38);
    *(float *)(iVar21 + 0x2c) = (float)dVar37;
  }
  else {
    unused_00 = &DAT_0041be44;
    dVar42 = 0.15000000596046448;
    dVar41 = 0.800000011920929;
    AccelDeltAng
              (dVar48,(double)(DAT_0071f40c * 0.15),(double)(DAT_0071f40c * 0.8),
               (double)DAT_0071f408,param_2 + 0x20,&DAT_0041be44,param_2 + 0xa0);
    AccelDeltAng
              (dVar37,(double)(float)((double)DAT_0071f40c * dVar42),
               (double)(float)((double)DAT_0071f40c * dVar41),(double)DAT_0071f408,param_2 + 0x24);
    AccelDeltAng
              (dVar38,(double)(float)((double)DAT_0071f40c * dVar42),
               (double)(float)((double)DAT_0071f40c * dVar41),(double)DAT_0071f408,param_2 + 0x28);
    dVar48 = (double)*(float *)(iVar21 + 0x20);
    dVar38 = (double)*(float *)(iVar21 + 0x28);
    dVar37 = (double)*(float *)(iVar21 + 0x24);
  }
  *(float *)(puVar20 + 0x1c) = (float)dVar48;
  *(float *)(puVar20 + 0x1d) = (float)dVar38;
  *(float *)((int)puVar20 + 0xe4) = (float)dVar37;
  Camera_SetMobyDrivenTargetRot((float *)(puVar20 + 0x1c));
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5) {
    printf("correcting camera mode!\n");
    lVar29 = uVar25 - 0x210;
    SetCameraPosition(uVar25 - 0x200,lVar29,0,0,0);
    unused_00 = (undefined4 *)lVar29;
  }
  uVar36 = 0x3ff0000000000000;
  AccelDelt((float)(dVar46 * 0.34906578063964844 + 1.1344640254974365),0.05,1.0,1.0,
                      (float *)(iVar21 + 0xb0),(int)unused_00,(float *)(iVar21 + 0xc0));
  fVar55 = (float)((double)*(float *)(iVar21 + 0xb0) * dVar39);
  fVar6 = fVar55 + 1.5707963;
  fVar5 = 3.1415925 - fVar55;
  if (fVar55 - (3.1415925 - fVar55) < 0.0) {
    fVar5 = fVar55;
  }
  fVar7 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar7 = fVar6;
  }
  fVar8 = -3.1415925 - fVar55;
  if ((-3.1415925 - fVar55) - fVar5 < 0.0) {
    fVar8 = fVar5;
  }
  fVar5 = fVar8 * fVar8;
  fVar55 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
    fVar55 = fVar7;
  }
  fVar6 = fVar55 * fVar55;
  fVar7 = fVar5 * fVar5 * fVar8;
  fVar9 = fVar5 * fVar7;
  fVar10 = fVar6 * fVar6 * fVar55;
  fVar11 = fVar6 * fVar10;
  g_ViewContext.xratio =
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) /
       (fVar6 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar6 * fVar55 * -0.16666657 + fVar55);
  UpdateViewContext();
  dVar46 = (double)FastWrapRot
                             (*(float *)(iVar21 + 0x30),
                              (float)((double)*(float *)(iVar21 + 0x6c) * dVar39));
  (param_1->rotation).x = (float)dVar46;
  dVar46 = (double)FastWrapRot(*(float *)(iVar21 + 0x34),*(float *)(iVar21 + 0x70) * -0.5)
  ;
  (param_1->rotation).y = (float)dVar46;
  dVar46 = (double)FastWrapRot(*(float *)(iVar21 + 0x38),(float)dVar44);
  (param_1->rotation).z = (float)dVar46;
  iVar27 = CollSphere(0x3ff3333340000000,&param_1->pos);
  if ((iVar27 != 0) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((MVar15 = (g_CollOutput.pMoby)->oClass, MVar15 != 0x192 && MVar15 != RATCHET &&
        (MVar15 != AMMOCRATE_04C2)) &&
       ((MVar15 != 0x4c3 && ((MVar15 != ROCKET_0052 && (MVar15 != MINE_0053)))))))))) {
    (param_1->pos).x = g_CollOutput.push.x;
    (param_1->pos).y = g_CollOutput.push.y;
    (param_1->pos).z = g_CollOutput.push.z;
    (param_1->pos).w = g_CollOutput.push.w;
    FastVecReflect(uVar25 - 0x220,uVar25 - 0x220,0xa10980);
    dVar37 = ABS((double)*(float *)(puVar20 + 0x1a));
    dVar38 = (double)*(float *)(iVar21 + 0x38);
    dVar46 = ABS((double)*(float *)((int)puVar20 + 0xd4));
    *(float *)(puVar20 + 0x2b) = (float)(dVar37 - dVar46);
    uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar20 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar20 + 0xd4) >> 0x1d) & 4;
    dVar48 = dVar37;
    if ((double)*(float *)(puVar20 + 0x2b) - dVar44 < 0.0) {
      dVar48 = dVar46;
    }
    fVar55 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    if ((double)*(float *)(puVar20 + 0x2b) - dVar44 < 0.0) {
      dVar46 = dVar37;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = dVar44;
    if (dVar44 < dVar48) {
      lVar29 = uVar25 - 0x2e0;
      lVar30 = uVar25 - 0x144;
      lVar33 = uVar25 - 0x134;
      lVar34 = 2;
      fVar6 = (float)(dVar46 - dVar48) / (float)(dVar46 + dVar48);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar20 + 0x37) = fVar6;
      *(float *)(puVar20 + 0x36) = fVar6;
      *(float *)((int)puVar20 + 0x1b4) = fVar6;
      *(float *)((int)puVar20 + 0x1ac) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar20 + 0x36) = *(float *)(puVar20 + 0x36) * fVar7;
      *(float *)((int)puVar20 + 0x1b4) = *(float *)((int)puVar20 + 0x1b4) * fVar6;
      *(float *)(puVar20 + 0x37) = *(float *)(puVar20 + 0x37) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar29 + 0x1ac) = *(float *)((int)lVar29 + 0x19c) * fVar6 * fVar6;
        iVar27 = (int)lVar30;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar25 - 0x144;
      pfVar32 = (float *)&DAT_007358e0;
      lVar29 = lVar26;
      lVar30 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar7 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar29 + 0x1ac) = *(float *)((int)lVar29 + 0x1ac) * fVar6;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
        lVar30 = lVar30 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar30 = 2;
      lVar29 = lVar26;
      dVar46 = dVar44;
      do {
        iVar27 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        iVar31 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x1ac)) +
                          *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar37 = (double)((float)(dVar46 + dVar51) * fVar55 + fVar5);
    }
    dVar46 = (double)FastDiffRots(dVar37,dVar38);
    dVar39 = 0.10000000149011612;
    dVar46 = (double)FastWrapRot
                               ((float)dVar38,(float)((double)(DAT_0071f408 * 0.1) * dVar46));
    fVar55 = *(float *)((int)puVar20 + 0xd4);
    fVar5 = *(float *)(puVar20 + 0x1a);
    *(float *)(iVar21 + 0x38) = (float)dVar46;
    dVar38 = (double)*(float *)(iVar21 + 0x34);
    dVar46 = ABS((double)*(float *)(puVar20 + 0x1b));
    fVar55 = SQRT(fVar5 * fVar5 + fVar55 * fVar55);
    dVar37 = ABS((double)fVar55);
    *(float *)(puVar20 + 0x2a) = fVar55;
    *(float *)((int)puVar20 + 0x154) = (float)(dVar37 - dVar46);
    uVar28 = (ulonglong)(*(uint *)(puVar20 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar20 + 0x154) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar20 + 0x1b) >> 0x1d) & 4;
    fVar55 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar48 = ABS((double)*(float *)(puVar20 + 0x2a));
    if ((double)*(float *)((int)puVar20 + 0x154) - dVar44 < 0.0) {
      dVar48 = dVar46;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar20 + 0x154) - dVar44 < 0.0) {
      dVar46 = dVar37;
    }
    dVar37 = dVar44;
    if (dVar44 < dVar48) {
      lVar29 = uVar25 - 0x2e0;
      lVar33 = uVar25 - 0x154;
      lVar30 = uVar25 - 0x164;
      lVar34 = 2;
      fVar6 = (float)(dVar46 - dVar48) / (float)(dVar46 + dVar48);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar20 + 0x33) = fVar6;
      *(float *)(puVar20 + 0x32) = fVar6;
      *(float *)((int)puVar20 + 0x194) = fVar6;
      *(float *)((int)puVar20 + 0x18c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar20 + 0x32) = *(float *)(puVar20 + 0x32) * fVar7;
      *(float *)((int)puVar20 + 0x194) = *(float *)((int)puVar20 + 0x194) * fVar6;
      *(float *)(puVar20 + 0x33) = *(float *)(puVar20 + 0x33) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar29 + 0x18c) = *(float *)((int)lVar29 + 0x17c) * fVar6 * fVar6;
        iVar27 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar25 - 0x164;
      pfVar32 = (float *)&DAT_007358e0;
      lVar29 = lVar26;
      lVar30 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar7 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar29 + 0x18c) = *(float *)((int)lVar29 + 0x18c) * fVar6;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar7;
        lVar30 = lVar30 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      dVar46 = dVar44;
      do {
        iVar27 = (int)lVar26;
        iVar31 = (int)lVar33;
        lVar26 = lVar26 + 0x10;
        lVar33 = lVar33 + 0x10;
        dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x18c)) +
                          *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar37 = (double)((float)(dVar46 + dVar51) * fVar55 + fVar5);
    }
    dVar46 = (double)FastDiffRots(-dVar37,dVar38);
    dVar46 = (double)FastWrapRot
                               ((float)dVar38,
                                (float)((double)(float)((double)DAT_0071f408 * dVar39) * dVar46));
    *(float *)(iVar21 + 0x34) = (float)dVar46;
    bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
    *(float *)(iVar21 + 100) = *(float *)(iVar21 + 100) * 0.7;
    if (bVar1) {
      DAT_0096b2dc = 0.0;
      puVar20[0x12] = 6;
      puVar20[0x14] = 1;
      puVar20[0x15] = 1;
      puVar20[0x16] = 0xffffffffffffffff;
      puVar20[0x17] = 0;
      MB_genericExplosion
                (uVar43,0x4059000000000000,0x4030000000000000,uVar43,0x4022000000000000,uVar36,
                 dVar35,param_1,uVar25 - 0x230,0,0,0xffffffffffffffff,0x1e,10,0x18);
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      auVar52 = loadVectorLeftIndexed(0xb8,0x41be44);
      auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = vectorSplatHalfWord(auVar52,1);
      uVar19 = storeVectorElementHalfWordIndexed(auVar52,0x62,param_2);
      *(undefined2 *)(iVar21 + 0x62) = uVar19;
      param_1->state = '\x06';
    }
    else if (*(int *)(iVar21 + 0xdc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - 5.0;
      if ((double)DAT_0096b2dc < dVar44) {
        FastVecReflect(uVar25 - 0x230,uVar25 - 0x220,0xa10980);
        fVar5 = *(float *)((int)puVar20 + 0xc4);
        fVar6 = *(float *)(puVar20 + 0x18);
        fVar7 = *(float *)(puVar20 + 0x19);
        dVar46 = (double)g_FrameTime;
        puVar20[0x12] = 6;
        puVar20[0x14] = 1;
        puVar20[0x15] = 1;
        puVar20[0x16] = 0xffffffffffffffff;
        puVar20[0x17] = 0;
        dVar48 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar55 = (float)((double)(float)(dVar46 * dVar50) / dVar48);
        dVar50 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar50 = (double)(fVar6 * fVar55);
        }
        dVar46 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar46 = (double)(fVar5 * fVar55);
        }
        dVar37 = dVar44;
        if (dVar44 - dVar48 < 0.0) {
          dVar37 = (double)(fVar7 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar50 = (double)(fVar6 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar46 = (double)(fVar5 * fVar55);
        }
        if (dVar48 - dVar44 < 0.0) {
          dVar37 = (double)(fVar7 * fVar55);
        }
        *(float *)(puVar20 + 0x18) = (float)dVar50;
        *(float *)((int)puVar20 + 0xc4) = (float)dVar46;
        *(float *)(puVar20 + 0x19) = (float)dVar37;
        MB_genericExplosion
                  (uVar43,0x4059000000000000,0x4030000000000000,uVar43,0x4022000000000000,uVar36,
                   dVar35,param_1,uVar25 - 0x230,0,1,0xffffffffffffffff,0x1e,10,0x18);
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar54 = loadVectorLeftIndexed(0xb8,0x41be44);
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar19 = storeVectorElementHalfWordIndexed(auVar52,0x62,param_2);
        *(undefined2 *)(iVar21 + 0x62) = uVar19;
        param_1->state = '\x06';
      }
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar52 = loadVectorLeftIndexed(0xbc,0x41be44);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xdc,param_2
                         );
      *(undefined4 *)(iVar21 + 0xdcU & 0xfffffffc) = uVar13;
    }
  }
  RegisterMobyDraw(&PTR_M688_0041b008_0070e148,param_1);
  M688_0041bb00(param_1,param_2);
  uVar43 = FastWrapRot
                     (*(float *)(iVar21 + 0x28),-(*(float *)(iVar21 + 0x6c) * 0.14285715));
  dVar44 = (double)FastWrapRot
                             (*(float *)(iVar21 + 0x24),
                              *(float *)(iVar21 + 0x70) * -0.14285715 - 0.1);
  M688_0041b7c0(uVar43,-dVar44,param_1,param_2);
  return;
}


// 0x041dad8 (0x1c74 bytes)
// inlined: FastAtan2 @0x41ddb0, FastAtan2 @0x41df9c, FastAtan2 @0x41e3b4, FastAtan2 @0x41e838
// strings: 006571cc: 'no final place for jet during victory, so use init pos\n' | 00657204: 'no final place for hero during victory, so just fall\n'

/* Moby 69 */

void UpdateMoby_69(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *out;
  MobyClass *pMVar9;
  f32 fVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  PlayerState PVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  float fVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x1f0;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar20;
  puVar14[0x40] = in_LR;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  puVar14[0x36] = unaff_r28;
  puVar14[0x39] = unaff_r31;
  PVar18 = g_heroState;
  puVar14[0x38] = unaff_r30;
  puVar14[0x37] = unaff_r29;
  puVar14[0x35] = unaff_r27;
  puVar14[0x34] = unaff_r26;
  puVar14[0x33] = unaff_r25;
  puVar14[0x32] = unaff_r24;
  puVar14[0x31] = unaff_r23;
  if (PVar18 == MOVEMENT_LOCKED) {
    return;
  }
  out = (float *)moby->pVar;
  uVar30 = ZEXT48(out);
  out[0x48] = 0.0;
  FastDecTimerS32(uVar30 + 0xdc);
  uVar1 = moby->state;
  if (((((uVar1 != '\x06') && (uVar1 != '\a')) && (uVar1 != '\x01')) &&
      ((uVar1 != '\x02' && (iVar24 = MB_damage(lVar21,0x30001,0), iVar24 != 0)))) &&
     (moby->state == '\x04')) {
    uVar11 = (int)*(uint *)(iVar24 + 0x2c) >> 0x1f;
    if ((int)((uVar11 >> 1 ^ *(uint *)(iVar24 + 0x2c)) - uVar11) <
        (int)(FLOAT_ORDER(DAT_0096b2dc))) {
      DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar24 + 0x2c);
      if (*(int *)(iVar24 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6);
        if ((sVar8 == 0x52) || (sVar8 == 0x53)) {
          out[0x48] = (float)(int)sVar8;
        }
      }
      if ((*(uint *)(iVar24 + 0x30) & 1) != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        GameCamera.shake.strength = 1.0;
        auVar39 = loadVectorLeftIndexed(in_LR,0x41da80);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.shake.time =
             storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x168,0x9513c0
                       );
        dVar38 = (double)(*(float *)(iVar24 + 0x2c) * 0.05);
        MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar14 + 0x18));
        fVar25 = *(float *)(iVar24 + 0x14);
        fVar3 = *(float *)(iVar24 + 0x10);
        fVar4 = *(float *)(iVar24 + 0x18);
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = (moby->pos).z;
        fVar15 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25);
        if (g_FrameTime * 3.0 < fVar15) {
          fVar15 = (g_FrameTime * 3.0) / fVar15;
          fVar3 = fVar3 * fVar15;
          fVar25 = fVar25 * fVar15;
          fVar4 = fVar4 * fVar15;
          *(float *)(iVar24 + 0x10) = fVar3;
          *(float *)(iVar24 + 0x14) = fVar25;
          *(float *)(iVar24 + 0x18) = fVar4;
        }
        (moby->pos).x = fVar5 + fVar3;
        (moby->pos).y = fVar6 + fVar25;
        (moby->pos).z = fVar7 + fVar4;
        FastVecReflect(uVar20 - 0x130,uVar20 - 0x130,iVar24 + 0x10);
        fVar4 = ABS(*(float *)(puVar14 + 0x18));
        fVar3 = ABS(*(float *)((int)puVar14 + 0xc4));
        dVar36 = (double)out[0xe];
        *(float *)(puVar14 + 0x1f) = fVar4 - fVar3;
        dVar35 = 0.0;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar25 = fVar4;
        if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
          fVar25 = fVar3;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        dVar32 = dVar35;
        if (0.0 < fVar25) {
          lVar22 = uVar20 - 0x1e0;
          lVar27 = uVar20 - 0x94;
          lVar29 = uVar20 - 0x84;
          lVar31 = 2;
          fVar25 = (fVar3 - fVar25) / (fVar3 + fVar25);
          fVar3 = fVar25 * fVar25;
          *(float *)(puVar14 + 0x2d) = fVar25;
          *(float *)(puVar14 + 0x2c) = fVar25;
          *(float *)((int)puVar14 + 0x164) = fVar25;
          *(float *)((int)puVar14 + 0x15c) = fVar25;
          fVar25 = fVar3 * fVar3;
          *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar3;
          *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar25;
          *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar25 * fVar3;
          do {
            *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x14c) * fVar25 * fVar25;
            iVar24 = (int)lVar27;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar25 * fVar25;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar20 - 0x94;
          pfVar28 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar27 = lVar29;
          do {
            fVar25 = *pfVar28;
            fVar3 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x15c) * fVar25;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar22 = lVar23;
          do {
            iVar24 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar16 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x15c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar32 = (double)FastDiffRots(dVar32,dVar36);
        dVar37 = 0.10000000149011612;
        dVar36 = (double)FastWrapRot
                                   ((float)dVar36,
                                    (float)((double)(float)((double)(DAT_0071f408 * 0.1) * dVar32) *
                                           dVar38));
        out[0xe] = (float)dVar36;
        dVar34 = (double)out[0xd];
        dVar36 = ABS((double)*(float *)(puVar14 + 0x19));
        fVar25 = SQRT(*(float *)(puVar14 + 0x18) * *(float *)(puVar14 + 0x18) +
                      *(float *)((int)puVar14 + 0xc4) * *(float *)((int)puVar14 + 0xc4));
        dVar33 = ABS((double)fVar25);
        *(float *)(puVar14 + 0x1e) = fVar25;
        *(float *)((int)puVar14 + 0xf4) = (float)(dVar33 - dVar36);
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
        dVar32 = ABS((double)*(float *)(puVar14 + 0x1e));
        if ((double)*(float *)((int)puVar14 + 0xf4) - dVar35 < 0.0) {
          dVar32 = dVar36;
        }
        fVar25 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        if ((double)*(float *)((int)puVar14 + 0xf4) - dVar35 < 0.0) {
          dVar36 = dVar33;
        }
        fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (dVar35 < dVar32) {
          lVar22 = uVar20 - 0x1e0;
          lVar29 = uVar20 - 0xa4;
          lVar27 = uVar20 - 0xb4;
          lVar31 = 2;
          fVar4 = (float)(dVar36 - dVar32) / (float)(dVar36 + dVar32);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar14 + 0x29) = fVar4;
          *(float *)(puVar14 + 0x28) = fVar4;
          *(float *)((int)puVar14 + 0x144) = fVar4;
          *(float *)((int)puVar14 + 0x13c) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5;
          *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar4;
          *(float *)(puVar14 + 0x29) = *(float *)(puVar14 + 0x29) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar22 + 0x13c) = *(float *)((int)lVar22 + 300) * fVar4 * fVar4;
            iVar24 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar20 - 0xb4;
          pfVar28 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar27 = lVar29;
          do {
            fVar4 = *pfVar28;
            fVar5 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar22 + 0x13c) = *(float *)((int)lVar22 + 0x13c) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar22 = lVar23;
          do {
            iVar24 = (int)lVar22;
            iVar16 = (int)lVar29;
            lVar22 = lVar22 + 0x10;
            lVar29 = lVar29 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x13c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar25 + fVar3);
        }
        dVar36 = (double)FastDiffRots(dVar35,dVar34);
        dVar38 = (double)FastWrapRot
                                   ((float)dVar34,
                                    (float)((double)(float)((double)(float)((double)DAT_0071f408 *
                                                                           dVar37) * dVar36) *
                                           dVar38));
        out[0xd] = (float)dVar38;
      }
    }
    else {
      MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar14 + 0x1a));
      if (*(int *)(iVar24 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar24 + 0x20) + 0xa6);
        if ((sVar8 == 0x52) || (sVar8 == 0x53)) {
          out[0x48] = (float)(sVar8 + 10000);
        }
      }
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      GameCamera.shake.strength = 0.2;
      auVar39 = loadVectorLeftIndexed(0x18,0x41da80);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.shake.time =
           storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x168,0x9513c0);
      DAT_0096b2dc = 0.0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      puVar14[0x12] = 6;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar21,uVar20 - 0x120,0,&GameCamera,0x168,10,3,0x10);
      moby->collision = (ushort *)0x0;
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = loadVectorLeftIndexed(0x30,0x41da80);
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x62,uVar30);
      *(undefined2 *)((int)out + 0x62) = uVar12;
      moby->state = '\x06';
    }
  }
  moby->damage = -1;
  if (DAT_0096b2d0 == moby) {
    auVar39 = ZEXT416(0xffffffff);
    auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = ZEXT416(0xffffffff);
    auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
    auVar39 = loadVectorLeftIndexed(0x34,0x41da80);
    auVar41 = loadVectorLeftIndexed(0x15fc,0x969ce0);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = loadVectorLeftIndexed(0x38,0x41da80);
    auVar40 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar40);
    auVar39 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar39 = vectorMultiplyAddFloatingPoint
                        (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar41);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0096b2e8 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1608,
                              0x969ce0);
  }
  bVar2 = moby->state;
  if (4 < bVar2) {
    if (bVar2 < 8) {
      if (bVar2 < 6) {
        g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        Camera_DeactivateMobyDrivenCam(0);
        Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        pMVar9 = moby->pClass;
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        (moby->rotation).w = out[0x17];
        moby->scale = pMVar9->gScale;
        PostUpdateMobyLockTransform(moby);
        if (0 < (int)out[0x47]) {
          MB_SetGroupActive((int)out[0x47],0,0,0);
        }
        if (0 < (int)out[0x4f]) {
          MB_SetGroupActive((int)out[0x4f],0,0,0);
        }
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
        MB_SetStateForClass(0x102,0);
        fVar25 = out[0x4b];
        if (fVar25 == -NAN) {
          Hero_Warp(out + 0x10,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        }
        else {
          Hero_Warp(&Cuboids[(int)fVar25].pos.x,&Cuboids[(int)fVar25].rot.x,0,1);
        }
        fVar25 = out[0x42];
        if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar25].state != '\0')) {
          sound_Kill((int)fVar25);
        }
        fVar25 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar25].state != '\0')) {
          sound_Kill((int)fVar25);
        }
        out[0x43] = -NAN;
        music_SetTransition(0,5);
        out[0x1f] = 0.99;
        SceneScreenFade = 0.99;
        moby->state = '\x01';
      }
      else if (bVar2 < 7) {
        OcclMode = 2;
        fVar25 = out[0x42];
        if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar25].state != '\0')) {
          sound_Kill((int)fVar25);
        }
        fVar25 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar25].state != '\0')) {
          sound_Kill((int)fVar25);
        }
        out[0x43] = -NAN;
        moby->state = '\a';
      }
      else {
        OcclMode = 2;
        iVar24 = FastDecTimerS16(uVar30 + 0x62);
        if (((iVar24 != 0) && (g_SpeechPlaying.handle == 0)) &&
           (g_PendingSpeech == -1)) {
          HandleHeroDeath();
          Camera_DeactivateMobyDrivenCam(0);
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          (moby->rotation).w = out[0x17];
          PostUpdateMobyLockTransform(moby);
          fVar25 = out[0x42];
          if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar25].state != '\0')) {
            sound_Kill((int)fVar25);
          }
          fVar25 = out[0x43];
          out[0x42] = -NAN;
          if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar25].state != '\0')) {
            sound_Kill((int)fVar25);
          }
          out[0x43] = -NAN;
          moby->state = '\0';
        }
      }
    }
    else if (bVar2 < 9) {
      g_heroInvisible = 0;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      TransitionMovement(0,1);
      Camera_DeactivateMobyDrivenCam(0);
      pCVar19 = Cuboids;
      fVar25 = out[0x40];
      if (fVar25 == -NAN) {
        printf("no final place for jet during victory, so use init pos\n");
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        fVar25 = out[0x17];
      }
      else {
        (moby->pos).x = Cuboids[(int)fVar25].pos.x;
        (moby->pos).y = pCVar19[(int)fVar25].pos.y;
        fVar3 = pCVar19[(int)fVar25].pos.z;
        (moby->pos).z = fVar3;
        (moby->pos).w = pCVar19[(int)fVar25].pos.w;
        fVar25 = out[0x40];
        (moby->rotation).x = pCVar19[(int)fVar25].rot.x;
        (moby->rotation).y = pCVar19[(int)fVar25].rot.y;
        (moby->rotation).z = pCVar19[(int)fVar25].rot.z;
        fVar25 = pCVar19[(int)fVar25].rot.w;
        (moby->pos).z = fVar3 + 0.57318;
      }
      pMVar9 = moby->pClass;
      (moby->rotation).w = fVar25;
      moby->scale = pMVar9->gScale;
      PostUpdateMobyLockTransform(moby);
      if (out[0x3f] == -NAN) {
        printf("no final place for hero during victory, so just fall\n");
      }
      else {
        if (0 < (int)out[0x47]) {
          MB_SetGroupActive((int)out[0x47],0,0,0);
        }
        if (0 < (int)out[0x4f]) {
          MB_SetGroupActive((int)out[0x4f],0,0,0);
        }
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
        MB_SetStateForClass(0x102,0);
        Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
      }
      if (moby->levelFlagIdx != -1) {
        SetLevelFlag();
      }
      fVar25 = out[0x42];
      if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
         (g_SoundChannels[(int)fVar25].state != '\0')) {
        sound_Kill((int)fVar25);
      }
      fVar25 = out[0x43];
      out[0x42] = -NAN;
      if (((fVar25 != -NAN) && (g_SoundChannels[(int)fVar25].pMoby == moby)) &&
         (g_SoundChannels[(int)fVar25].state != '\0')) {
        sound_Kill((int)fVar25);
      }
      out[0x43] = -NAN;
      SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
      moby->state = '\t';
    }
    else if (bVar2 < 10) {
      DeleteMoby(moby);
      return;
    }
    goto LAB_0041f5c4;
  }
  if (1 < bVar2) {
    if (bVar2 < 3) {
      Delt(1.0,g_FrameTime * 4.0,out + 0x1f);
      SceneScreenFade = out[0x1f];
      if (out[0x1f] == 1.0) {
        fVar25 = out[0x4c];
        if (fVar25 != -NAN) {
          Hero_Warp(&Cuboids[(int)fVar25].pos.x,&Cuboids[(int)fVar25].rot.x,0x32,1);
          pCVar19 = Cuboids;
          fVar25 = out[0x4c];
          (moby->pos).x = Cuboids[(int)fVar25].pos.x;
          (moby->pos).y = pCVar19[(int)fVar25].pos.y;
          (moby->pos).z = pCVar19[(int)fVar25].pos.z;
          (moby->pos).w = pCVar19[(int)fVar25].pos.w;
          fVar25 = out[0x4c];
          (moby->rotation).x = pCVar19[(int)fVar25].rot.x;
          (moby->rotation).y = pCVar19[(int)fVar25].rot.y;
          (moby->rotation).z = pCVar19[(int)fVar25].rot.z;
          (moby->rotation).w = pCVar19[(int)fVar25].rot.w;
        }
        SetCameraPosition(lVar21 + 0x10,lVar21 + 0x40,0,0,0);
        fVar25 = DAT_0071f408;
        *(undefined2 *)(out + 0x1a) = 0;
        out[0x1b] = 0.0;
        out[0x1c] = 0.0;
        out[0x21] = 0.0;
        out[0x20] = 0.0;
        out[0x19] = fVar25 * 0.1;
        moby->updateDistance = -1;
        pMVar17 = g_heroMobyPtr;
        moby->drawDistance = 0xff;
        pMVar17->collisionMesh = (float *)0xffffffff;
        out[8] = (moby->rotation).x;
        out[9] = (moby->rotation).y;
        out[10] = (moby->rotation).z;
        fVar25 = (moby->rotation).w;
        out[0x28] = 0.0;
        out[0xb] = fVar25;
        out[0x29] = 0.0;
        out[0x2a] = 0.0;
        out[0x32] = 0.0;
        out[0x33] = 0.0;
        out[0x34] = 0.0;
        DAT_0096b2d4 = moby->oClass;
        DAT_0096b2ee = 1;
        DAT_0096b2d6 = 10;
        DAT_0096b2d7 = 0x14;
        DAT_0096b2d8 = 0x14;
        DAT_0096b2dc = 255.0;
        DAT_0096b2d0 = moby;
        out[0x3c] = 0.0;
        out[0x3d] = 3.57331e-43;
        DAT_0096b2e0 = 0x43800000;
        DAT_0096b2e4 = 0x42c80000;
        DAT_0096b2d9 = 3;
        DAT_0096b2da = 3;
        DAT_0096b2db = 3;
        DAT_0096b2ef = 0;
        MB_SphericalToVector(DAT_0071f408 * 0.1,out[0xe],-out[0xd],out);
        if (0 < (int)out[0x47]) {
          MB_SetGroupActive((int)out[0x47],1,1,1);
        }
        if (0 < (int)out[0x4f]) {
          MB_SetGroupActive((int)out[0x4f],1,1,1);
        }
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,0,0,-1);
        MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,0,-1,-1);
        MB_SetStateForClass(0x102,0);
        pMVar9 = moby->pClass;
        (moby->pos).z = (moby->pos).z + 3.0;
        moby->scale = pMVar9->gScale * 0.25;
        g_heroInvisible = 1;
        if (out[0x42] == -NAN) {
          fVar25 = (float)PlayMobySound(0,4,moby);
          out[0x42] = fVar25;
        }
        OcclMode = 2;
        M69_0041bf10(lVar21,uVar30);
        Help_Suspend();
        music_SetTransition(2,4);
        moby->state = '\x04';
      }
    }
    else if (3 < bVar2) {
      if (out[0x1f] != 0.0) {
        Delt(0.0,g_FrameTime * 4.0,out + 0x1f);
        SceneScreenFade = out[0x1f];
      }
      MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
      OcclMode = 2;
      if ((g_SoundChannels[(int)out[0x42]].pMoby != moby) ||
         (g_SoundChannels[(int)out[0x42]].state == '\0')) {
        out[0x42] = -NAN;
        fVar25 = (float)PlayMobySound(0,4,moby);
        out[0x42] = fVar25;
      }
      M69_0041bf10(lVar21,uVar30);
      if ((DAT_0096b2ef & 1) != 0) {
        moby->state = '\x05';
      }
      if ((int)out[0x3a] < 1) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x48,0x41da80);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xf8,
                            uVar30);
        *(undefined4 *)((uint)(out + 0x3e) & 0xfffffffc) = uVar13;
        moby->state = '\b';
      }
    }
    goto LAB_0041f5c4;
  }
  if (bVar2 == 0) {
    moby->state = '\x01';
    *(undefined1 *)(out + 0x18) = 0;
    moby->scale = moby->pClass->gScale;
    out[8] = out[0xc];
    out[9] = out[0xd];
    fVar4 = ABS(g_ViewContext.xratio);
    uVar11 = (uint)g_ViewContext.xratio >> 0x1d;
    *(undefined4 *)(puVar14 + 0x1d) = 0x3f800000;
    *(float *)((int)puVar14 + 0xec) = 1.0 - fVar4;
    fVar25 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar5 = ABS(*(float *)(puVar14 + 0x1d));
    if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
      fVar4 = 1.0;
    }
    fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar22 = uVar20 - 0x1e0;
      lVar29 = uVar20 - 0xc4;
      lVar27 = uVar20 - 0xd4;
      lVar31 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x25) = fVar4;
      *(float *)(puVar14 + 0x24) = fVar4;
      *(float *)((int)puVar14 + 0x124) = fVar4;
      *(float *)((int)puVar14 + 0x11c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar5;
      *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar4;
      *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x11c) = *(float *)((int)lVar22 + 0x10c) * fVar4 * fVar4;
        iVar24 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xd4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar4 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x11c) = *(float *)((int)lVar22 + 0x11c) * fVar4;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        fVar25 = fVar25 + *(float *)(iVar24 + 0x11c) + *(float *)(iVar16 + 4) +
                 *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar25 = (fVar25 + 0.7853982) * fVar3 + fVar6;
    }
    out[0x30] = 0.0;
    out[0x48] = 0.0;
    out[0x2b] = fVar25 * 2.0;
    out[0x2c] = fVar25 * 2.0;
    out[0xc] = (moby->rotation).x;
    out[0xd] = (moby->rotation).y;
    out[0xe] = (moby->rotation).z;
    out[0xf] = (moby->rotation).w;
    out[0x14] = (moby->rotation).x;
    out[0x15] = (moby->rotation).y;
    out[0x16] = (moby->rotation).z;
    out[0x17] = (moby->rotation).w;
    out[0x10] = (moby->pos).x;
    out[0x11] = (moby->pos).y;
    out[0x12] = (moby->pos).z;
    fVar25 = (moby->pos).w;
    out[0x1f] = 0.0;
    out[0x13] = fVar25;
    DAT_010cccdc = 1;
    out[0x3e] = 1.4013e-45;
    out[0x3a] = 1.4013e-45;
    if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      moby->state = '\t';
    }
    if (0 < (int)out[0x47]) {
      MB_SetGroupActive((int)out[0x47],0,0,0);
    }
    if (0 < (int)out[0x4f]) {
      MB_SetGroupActive((int)out[0x4f],0,0,0);
    }
    MB_SetClassListActive((MOBY_OCLASSES *)&DAT_00857830,1,1,-1);
    MB_SetClassListActive((MOBY_OCLASSES *)&DAT_008578b4,1,-1,-1);
    MB_SetStateForClass(0x102,0);
    auVar39 = ZEXT416(0xffffffff);
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    out[0x4a] = -NAN;
    auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar39 = loadVectorLeftIndexed(0x3c,0x41da80);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar39 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar40);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x138,uVar30);
    *(undefined4 *)((uint)(out + 0x4e) & 0xfffffffc) = uVar13;
    goto LAB_0041f5c4;
  }
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    if ((out[0x4d] == -NAN) ||
       (iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)out[0x4d]), iVar24 == 0))
    {
      dVar38 = (double)MB_BSphereGap(lVar21,g_heroMobyPtr);
      if ((((2.0 <= dVar38) || (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI))
          || (g_heroType != '\0')) ||
         ((iVar24 = MB_ShowPersistentMessage(7,0x53e4),
          (g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0 || (iVar24 == 0)))) goto LAB_0041e9a0;
    }
    else {
      out[0x1f] = 0.99;
      SceneScreenFade = 0.99;
    }
    TransitionMovement(0x32,1);
    moby->scale = moby->pClass->gScale;
    out[8] = out[0xc];
    out[9] = out[0xd];
    fVar4 = ABS(g_ViewContext.xratio);
    uVar11 = (uint)g_ViewContext.xratio >> 0x1d;
    *(undefined4 *)(puVar14 + 0x1c) = 0x3f800000;
    *(float *)((int)puVar14 + 0xe4) = 1.0 - fVar4;
    fVar25 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar5 = ABS(*(float *)(puVar14 + 0x1c));
    if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
      fVar4 = 1.0;
    }
    if (0.0 < fVar5) {
      lVar22 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0xf4;
      lVar29 = uVar20 - 0xe4;
      lVar31 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x21) = fVar4;
      *(float *)(puVar14 + 0x20) = fVar4;
      *(float *)((int)puVar14 + 0x104) = fVar4;
      *(float *)((int)puVar14 + 0xfc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar5;
      *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar4;
      *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xec) * fVar4 * fVar4;
        iVar24 = (int)lVar27;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xf4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar4 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xfc) * fVar4;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      do {
        iVar24 = (int)lVar23;
        iVar16 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar25 = fVar25 + *(float *)(iVar24 + 0xfc) + *(float *)(iVar16 + 4) +
                 *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar25 = (fVar25 + 0.7853982) * fVar3 + fVar6;
    }
    out[0x30] = 0.0;
    out[0x48] = 0.0;
    out[0x2b] = fVar25 * 2.0;
    out[0x2c] = fVar25 * 2.0;
    out[0xc] = (moby->rotation).x;
    out[0xd] = (moby->rotation).y;
    out[0xe] = (moby->rotation).z;
    fVar25 = (moby->rotation).w;
    out[0x3e] = 1.4013e-45;
    out[0xf] = fVar25;
    out[0x3a] = 1.4013e-45;
    moby->state = '\x02';
    out[0x4a] = -NAN;
  }
  else {
    moby->state = '\t';
LAB_0041e9a0:
    if (out[0x1f] != 0.0) {
      Delt(0.0,g_FrameTime * 4.0,out + 0x1f);
      SceneScreenFade = out[0x1f];
    }
  }
  MB_RegisterLameShadow(1.5,moby);
LAB_0041f5c4:
  fVar10 = (moby->pos).x;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar3 = 15.0;
  fVar25 = (moby->pos).x;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).x = 15.0;
    fVar25 = fVar3;
  }
  fVar4 = 1008.0;
  if (1008.0 < fVar25) {
    (moby->pos).x = 1008.0;
    fVar25 = fVar4;
  }
  fVar10 = (moby->pos).y;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar5 = (moby->pos).y;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).y = 15.0;
    fVar5 = fVar3;
  }
  if (1008.0 < fVar5) {
    (moby->pos).y = 1008.0;
    fVar5 = fVar4;
  }
  fVar10 = (moby->pos).z;
  uVar11 = (int)fVar10 >> 0x1f;
  fVar6 = (moby->pos).z;
  if ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) < 0x41700000) {
    (moby->pos).z = 15.0;
    fVar6 = fVar3;
  }
  if (1008.0 < fVar6) {
    (moby->pos).z = 1008.0;
    fVar6 = fVar4;
  }
  bVar2 = moby->state;
  if (bVar2 == 4) {
    g_heroPosition.w = (moby->pos).w;
    g_heroRotation.x = out[0xc];
    g_heroRotation.y = out[0xd];
    g_heroRotation.z = out[0xe];
    g_heroRotation.w = out[0xf];
    g_heroPosition.x = fVar25;
    g_heroPosition.y = fVar5;
    g_heroPosition.z = fVar6;
  }
  if (((2 < bVar2) && (bVar2 < 5)) || (bVar2 == 8)) {
    M69_00419368(lVar21,uVar30);
  }
  return;
}



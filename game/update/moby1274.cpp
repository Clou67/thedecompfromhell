// game/update/moby1274.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x17b40-0x1b0c8
#include "game/update/moby1274.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby184.h"
#include "idol/fastfunc.h"

// 0x0017b40 (0x14 bytes)
void SECTION_HEADER_MOBY1274(void)

{
  DAT_0071cf18 = 0x10000;
  return;
}


// 0x0017b78 (0x424 bytes)
void M1274_00017b78(MobyInstance *param_1)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  f32 fVar4;
  uint uVar5;
  int iVar6;
  MobyInstance *moby;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  
  pvVar8 = param_1->pVar;
  dVar11 = 0.3490658402442932;
  uVar12 = 0x3ff921fb60000000;
  iVar6 = 0;
  uVar13 = 0x3f60624de0000000;
  uVar14 = 0x3fd3333340000000;
  piVar7 = &DAT_0092713c;
  uVar15 = 0;
  uVar16 = 0xbff921fb60000000;
  dVar17 = -4.0;
  dVar18 = -0.8726646304130554;
  pvVar9 = pvVar8;
  do {
    iVar3 = *piVar7;
    if (iVar3 != 0) {
      moby = param_1;
      if (iVar6 != 0x11) {
        if (iVar3 == -1) goto LAB_00017f28;
        moby = g_MobyInstance + iVar3;
      }
      if (iVar6 == 0x11) {
        if (DAT_00927190 == -1.0) {
          DAT_00927190 = (moby->pos).x;
          DAT_00927194 = (moby->pos).y;
          DAT_00927198 = (moby->pos).z;
          DAT_0092719c = (moby->pos).w;
          DAT_009271a0 = (moby->rotation).x;
          DAT_009271a4 = (moby->rotation).y;
          DAT_009271a8 = (moby->rotation).z;
          DAT_009271ac = (moby->rotation).w;
        }
        DAT_009271b0 = (moby->pos).x;
        DAT_009271b4 = (moby->pos).y;
        DAT_009271b8 = (moby->pos).z;
        DAT_009271bc = (moby->pos).w;
        DAT_009271c0 = (moby->rotation).x;
        DAT_009271c4 = (moby->rotation).y;
        DAT_009271c8 = (moby->rotation).z;
        DAT_009271cc = (moby->rotation).w;
        (moby->pos).x = DAT_00927190;
        (moby->pos).y = DAT_00927194;
        (moby->pos).z = DAT_00927198;
        (moby->pos).w = DAT_0092719c;
        (moby->rotation).x = DAT_009271a0;
        (moby->rotation).y = DAT_009271a4;
        (moby->rotation).z = DAT_009271a8;
        (moby->rotation).w = DAT_009271ac;
      }
      fVar4 = (moby->pos).z;
      uVar5 = (int)fVar4 >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41a00000) {
        if (iVar6 == 0x11) {
          return;
        }
        DeleteMoby(moby);
        *piVar7 = -1;
      }
      fVar1 = *(float *)((int)pvVar9 + 0x338) - *(float *)((int)pvVar8 + 0x570);
      *(float *)((int)pvVar9 + 0x338) = fVar1;
      MVar2 = moby->oClass;
      (moby->pos).z = (moby->pos).z + fVar1;
      if (MVar2 == PLANETBUSTER_MAXIMUS_PART_0500) {
        dVar10 = (double)FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)g_FrameTime * dVar11));
        (moby->rotation).x = (float)dVar10;
        AccelDeltAng(uVar12,uVar13,uVar14,uVar15,&(moby->rotation).y);
      }
      else if (MVar2 == PLANETBUSTER_MAXIMUS_PART_04FD) {
        dVar10 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar9 + 0x450));
        (moby->rotation).x = (float)dVar10;
        AccelDeltAng
                  (uVar16,(double)*(float *)((int)pvVar9 + 0x45c),uVar14,uVar15,&(moby->rotation).y)
        ;
      }
      else if (MVar2 == PLANETBUSTER_MAXIMUS_PART_04FA) {
        dVar10 = (double)FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)g_FrameTime * dVar18));
        (moby->rotation).x = (float)dVar10;
        dVar10 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar9 + 0x454));
        (moby->rotation).y = (float)dVar10;
        (moby->pos).y = (float)((double)g_FrameTime * dVar17 + (double)(moby->pos).y);
      }
      else {
        fVar1 = (moby->rotation).x;
        (moby->pos).y = (float)((double)g_FrameTime * dVar17 + (double)(moby->pos).y);
        dVar10 = (double)FastWrapRot(fVar1,*(float *)((int)pvVar9 + 0x450));
        (moby->rotation).x = (float)dVar10;
        dVar10 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar9 + 0x454));
        (moby->rotation).y = (float)dVar10;
      }
      if (iVar6 == 0x11) {
        DAT_00927190 = (moby->pos).x;
        DAT_00927194 = (moby->pos).y;
        DAT_00927198 = (moby->pos).z;
        DAT_0092719c = (moby->pos).w;
        DAT_009271a0 = (moby->rotation).x;
        DAT_009271a4 = (moby->rotation).y;
        DAT_009271a8 = (moby->rotation).z;
        DAT_009271ac = (moby->rotation).w;
      }
      UpdateMobyTransform(moby);
    }
LAB_00017f28:
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
    pvVar8 = (void *)((int)pvVar8 + 4);
    pvVar9 = (void *)((int)pvVar9 + 0x10);
    if (0x11 < iVar6) {
      return;
    }
  } while( true );
}


// 0x0017fc8 (0x18c bytes)
void M1274_00017fc8(MobyInstance *param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  pvVar1 = param_1->pVar;
  if ((int)param_2 != 0x11) {
    param_1 = g_MobyInstance + *(int *)((int)&DAT_0092713c + (int)(param_2 << 2));
  }
  dVar4 = (double)MB_randRangeFloat(DAT_0071f418 * 3.7,DAT_0071f418 * 5.0);
  iVar3 = (int)(param_2 << 2);
  *(float *)((int)pvVar1 + iVar3 + 0x570) = (float)dVar4;
  dVar5 = 0.05235987901687622;
  dVar4 = (double)MB_randRangeSigned
                            ((double)(g_FrameTime * 0.05235988),
                             (double)(g_FrameTime * 0.13962634));
  iVar2 = (int)(param_2 << 4);
  *(float *)((int)pvVar1 + iVar2 + 0x450) = (float)dVar4;
  dVar4 = (double)MB_randRangeSigned
                            ((double)(float)((double)g_FrameTime * dVar5),
                             (double)(float)((double)g_FrameTime * 0.1745329201221466));
  *(float *)((int)pvVar1 + iVar2 + 0x454) = (float)dVar4;
  if (param_1->oClass == PLANETBUSTER_MAXIMUS_PART_04FD) {
    dVar4 = (double)MB_randRangeFloat(0.001,0.0045);
    *(float *)((int)pvVar1 + iVar2 + 0x45c) = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat(DAT_0071f418 * 5.5,DAT_0071f418 * 9.0);
    *(float *)((int)pvVar1 + iVar3 + 0x570) = (float)dVar4;
  }
  else if (param_1->oClass == PLANETBUSTER_MAXIMUS_PART_0500) {
    *(float *)((int)pvVar1 + iVar3 + 0x570) = DAT_0071f418 * 13.0;
  }
  return;
}


// 0x0018238 (0x1788 bytes)
// inlined: FastAtan2 @0x1841c, FastAtan2 @0x18608, FastAtan2 @0x18c98
void M1274_00018238(MobyInstance *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  bool bVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  uint uVar16;
  int iVar17;
  short sVar19;
  int *piVar18;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  undefined4 *puVar24;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  void *pvVar25;
  ulonglong unaff_r20;
  int iVar26;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  MobyInstance *pMVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar28;
  int iVar29;
  ulonglong unaff_r28;
  MobyInstance *pMoby;
  ulonglong unaff_r29;
  uint uVar30;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar46;
  double dVar47;
  ulonglong in_f25;
  double dVar48;
  double dVar49;
  ulonglong in_f26;
  double dVar50;
  double dVar51;
  ulonglong in_f27;
  double dVar52;
  double dVar53;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  double dVar55;
  double dVar56;
  ulonglong in_f30;
  double dVar57;
  ulonglong in_f31;
  double dVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  float fVar64;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x2b0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x58] = in_LR;
  puVar10[0x44] = in_f14;
  puVar10[0x45] = in_f15;
  puVar10[0x46] = in_f16;
  puVar10[0x47] = in_f17;
  puVar10[0x48] = in_f18;
  puVar10[0x49] = in_f19;
  puVar10[0x4a] = in_f20;
  puVar10[0x4b] = in_f21;
  puVar10[0x4c] = in_f22;
  puVar10[0x4d] = in_f23;
  puVar10[0x4e] = in_f24;
  puVar10[0x4f] = in_f25;
  puVar10[0x50] = in_f26;
  puVar10[0x51] = in_f27;
  puVar10[0x52] = in_f28;
  puVar10[0x53] = in_f29;
  puVar10[0x54] = in_f30;
  puVar10[0x55] = in_f31;
  puVar10[0x41] = unaff_r29;
  puVar10[0x42] = unaff_r30;
  uVar30 = 0;
  puVar10[0x43] = unaff_r31;
  pvVar5 = param_1->pVar;
  puVar10[0x37] = unaff_r19;
  puVar10[0x34] = unaff_r16;
  puVar10[0x40] = unaff_r28;
  puVar10[0x3f] = unaff_r27;
  puVar10[0x3e] = unaff_r26;
  puVar10[0x3d] = unaff_r25;
  puVar10[0x3c] = unaff_r24;
  puVar10[0x3b] = unaff_r23;
  puVar10[0x3a] = unaff_r22;
  puVar10[0x39] = unaff_r21;
  puVar10[0x38] = unaff_r20;
  puVar10[0x36] = unaff_r18;
  puVar10[0x35] = unaff_r17;
  iVar26 = 0;
  pvVar25 = pvVar5;
  do {
    if (*(int *)((int)pvVar25 + 0x5d0) != -1) {
      iVar15 = *(int *)((int)pvVar25 + 0x5d0) * 0x30;
      pMoby = g_MobyInstance + *(int *)((int)pvVar5 + iVar15 + 0x20);
      fVar64 = (pMoby->pos).y - GameCamera.posY;
      fVar3 = (pMoby->pos).x - GameCamera.posX;
      dVar58 = 0.699999988079071;
      dVar57 = 1.5;
      pvVar6 = pMoby->pVar;
      uVar28 = ZEXT48(pvVar6);
      fVar3 = SQRT(fVar3 * fVar3 + fVar64 * fVar64);
      fVar64 = (GameCamera.posZ - 0.7) - ((pMoby->pos).z + 1.5);
      fVar2 = ABS(fVar64);
      *(float *)((int)puVar10 + 0x11c) = fVar64;
      fVar4 = ABS(fVar3);
      *(float *)(puVar10 + 0x23) = fVar3;
      *(float *)(puVar10 + 0x24) = fVar4 - fVar2;
      dVar48 = 0.0;
      dVar55 = 0.7853981852531433;
      uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x11c) >> 0x1d) & 4;
      fVar64 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = ABS(*(float *)(puVar10 + 0x23));
      if (*(float *)(puVar10 + 0x24) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar10 + 0x11c));
      if (*(float *)(puVar10 + 0x24) - 0.0 < 0.0) {
        fVar12 = fVar4;
      }
      dVar33 = dVar48;
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x2a0;
        lVar21 = uVar13 - 0x14c;
        lVar23 = uVar13 - 0x13c;
        lVar31 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x2e) = fVar3;
        *(float *)(puVar10 + 0x2d) = fVar3;
        *(float *)((int)puVar10 + 0x16c) = fVar3;
        *(float *)((int)puVar10 + 0x164) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x2d) = *(float *)(puVar10 + 0x2d) * fVar4;
        *(float *)((int)puVar10 + 0x16c) = *(float *)((int)puVar10 + 0x16c) * fVar3;
        *(float *)(puVar10 + 0x2e) = *(float *)(puVar10 + 0x2e) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x164) = *(float *)((int)lVar14 + 0x154) * fVar3 * fVar3;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar23 = uVar13 - 0x14c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar1;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x164) = *(float *)((int)lVar14 + 0x164) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        lVar14 = lVar1;
        do {
          iVar17 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar29 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x164)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar64 + fVar2);
      }
      *(float *)((int)pvVar6 + 0x60) = (float)dVar33;
      dVar46 = 0.30000001192092896;
      MB_UpdateManipulatorRot
                ((double)(DAT_0071f40c * 0.008),(double)(DAT_0071f40c * 0.3),pMoby,uVar28,0);
      fVar64 = g_heroPosition.x - (pMoby->pos).x;
      fVar3 = g_heroPosition.y - (pMoby->pos).y;
      dVar37 = ABS((double)fVar64);
      dVar38 = ABS((double)fVar3);
      *(float *)((int)puVar10 + 0x10c) = fVar64;
      *(float *)(puVar10 + 0x22) = fVar3;
      *(float *)((int)puVar10 + 0x114) = (float)(dVar37 - dVar38);
      uVar16 = *(uint *)((int)puVar10 + 0x114);
      uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x10c) >> 0x1c) & 8 |
               (ulonglong)(uVar16 >> 0x1e) & 2 | (ulonglong)(*(uint *)(puVar10 + 0x22) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)((int)puVar10 + 0x10c));
      if ((double)*(float *)((int)puVar10 + 0x114) - dVar48 < 0.0) {
        dVar33 = dVar38;
      }
      fVar64 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar38 = ABS((double)*(float *)(puVar10 + 0x22));
      if ((double)*(float *)((int)puVar10 + 0x114) - dVar48 < 0.0) {
        dVar38 = dVar37;
      }
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar37 = dVar48;
      if (dVar48 < dVar33) {
        lVar14 = uVar13 - 0x2a0;
        lVar23 = uVar13 - 0x15c;
        lVar21 = uVar13 - 0x16c;
        lVar31 = 2;
        fVar2 = (float)(dVar38 - dVar33) / (float)(dVar38 + dVar33);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x2a) = fVar2;
        *(float *)(puVar10 + 0x29) = fVar2;
        *(float *)((int)puVar10 + 0x14c) = fVar2;
        *(float *)((int)puVar10 + 0x144) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x29) = *(float *)(puVar10 + 0x29) * fVar4;
        *(float *)((int)puVar10 + 0x14c) = *(float *)((int)puVar10 + 0x14c) * fVar2;
        *(float *)(puVar10 + 0x2a) = *(float *)(puVar10 + 0x2a) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x144) = *(float *)((int)lVar14 + 0x134) * fVar2 * fVar2;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar23 = uVar13 - 0x16c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar1;
        lVar21 = lVar23;
        do {
          fVar2 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x144) = *(float *)((int)lVar14 + 0x144) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          uVar16 = (uint)lVar21;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        lVar14 = lVar1;
        dVar33 = dVar48;
        do {
          iVar17 = (int)lVar14;
          iVar29 = (int)lVar23;
          lVar14 = lVar14 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x144)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar37 = (double)((float)(dVar33 + dVar55) * fVar64 + fVar3);
      }
      uVar32 = FastWrapRot((float)dVar37,-1.5707964);
      dVar33 = (double)FastDiffRots(uVar32,(double)(param_1->rotation).z);
      if (*(short *)((int)pvVar6 + 0x90) == 0) {
        puVar10[0x31] = (longlong)(int)uVar30;
        fVar64 = DeltAng((float)dVar33,
                                   g_FrameTime * 0.5235988 +
                                   g_FrameTime * 0.17453292 *
                                   (float)(longlong)puVar10[0x31],
                                   (float *)((int)pvVar5 + iVar15 + 0x18),0x20000,uVar16,0);
        if (fVar64 < 0.08726646) {
          *(undefined2 *)((int)pvVar6 + 0x90) = 1;
          *(undefined4 *)((int)pvVar6 + 0x8c) = 0x3f800000;
          if (uVar30 != (((int)uVar30 >> 1) + (uint)((int)uVar30 < 0 && (uVar30 & 1) != 0)) * 2) {
            *(undefined4 *)((int)pvVar6 + 0x8c) = 0xbf800000;
          }
        }
      }
      else {
        uVar32 = FastWrapRot((float)dVar33,*(float *)((int)pvVar6 + 0x8c) * 0.55850536);
        puVar10[0x31] = (longlong)(int)uVar30;
        iVar17 = (int)pvVar5 + iVar15 + 0x18;
        dVar37 = (double)AccelDeltAng
                                   (uVar32,(double)(float)((double)DAT_0071f40c *
                                                          0.02199999988079071),
                                    (double)(float)((double)DAT_0071f40c * dVar46),
                                    (double)(g_FrameTime * 0.2617994 +
                                            g_FrameTime * 0.05235988 *
                                            (float)(longlong)puVar10[0x31]),iVar17,iVar17,
                                    uVar28 + 0x94);
        if (ABS(dVar37) < 0.01745329238474369) {
          *(float *)((int)pvVar6 + 0x8c) = -*(float *)((int)pvVar6 + 0x8c);
        }
      }
      iVar17 = DAT_00927138;
      fVar64 = (param_1->pos).y - g_heroPosition.y;
      bVar11 = false;
      fVar3 = (param_1->pos).x - g_heroPosition.x;
      fVar2 = ABS(g_heroPosition.z - (param_1->pos).z);
      fVar64 = SQRT(fVar3 * fVar3 + fVar64 * fVar64);
      puVar10[0x31] = (longlong)(int)(animationSpeed * 1200.5);
      if (((*(int *)((int)puVar10 + 0x18c) < iVar17) && (fVar64 < 80.0)) && (fVar2 < 4.0)) {
        bVar11 = true;
      }
      if ((90.0 < fVar64) || (7.0 < fVar2)) {
        DAT_00927138 = 0;
      }
      if ((DAT_00927118 != 0 || bVar11) && (0 < *(int *)((int)pvVar6 + 0x80))) {
        FastDecTimerS16(uVar28 + 0x98);
        FastDecTimerS16(uVar28 + 0x9c);
        if (*(short *)((int)pvVar6 + 0x98) == 0) {
          dVar33 = (double)FastSubRots
                                     (*(float *)((int)pvVar5 + iVar15 + 0x18),(float)dVar33);
          if (dVar33 < 0.06981316953897476) {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x54,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = vectorSplatHalfWord(auVar59,1);
            uVar9 = storeVectorElementHalfWordIndexed(auVar59,0x9e,uVar28);
            *(undefined2 *)((int)pvVar6 + 0x9e) = uVar9;
          }
          iVar15 = FastDecTimerS16(uVar28 + 0x9e);
          if (iVar15 == 0) {
            iVar15 = FastDecTimerU8(uVar28 + 0x92);
            if ((iVar15 == 0) && (iVar15 = FastDecTimerU8(uVar28 + 0x93), iVar15 != 0)) {
              PlayMobySound(0,0,pMoby);
              auVar59 = ZEXT416(0xffffffff);
              auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
              auVar59 = loadVectorLeftIndexed(0x58,0x18154);
              auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar59 = vectorMultiplyAddFloatingPoint
                                  (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar60);
              auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
              auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xff;
              uVar8 = storeVectorElementByteIndexed
                                (auVar59 | auVar59 << 8 | auVar59 << 0x10 | auVar59 << 0x18 |
                                 auVar59 << 0x20 | auVar59 << 0x28 | auVar59 << 0x30 |
                                 auVar59 << 0x38 | auVar59 << 0x40 | auVar59 << 0x48 |
                                 auVar59 << 0x50 | auVar59 << 0x58 | auVar59 << 0x60 |
                                 auVar59 << 0x68 | auVar59 << 0x70 | auVar59 << 0x78,0x93,uVar28);
              *(undefined1 *)((int)pvVar6 + 0x93) = uVar8;
            }
            iVar15 = FastDecTimerS16(uVar28 + 0x9c);
            if (iVar15 != 0) {
              GetBonePosition
                        (pMoby,(longlong)*(short *)((int)pvVar6 + 0x9a) + 1,uVar13 - 0x240);
              *(short *)((int)pvVar6 + 0x9a) =
                   (short)((ulonglong)(LZCOUNT((uint)*(ushort *)((int)pvVar6 + 0x9a)) << 0x20) >>
                          0x25);
              dVar33 = (double)FastWrapRot((pMoby->rotation).z,1.5707964);
              if (DAT_00927118 == 0) {
                dVar52 = (double)g_heroCGPos;
                dVar50 = (double)DAT_00969db4;
                dVar38 = (double)DAT_00969db8;
                dVar37 = (double)MB_randRangeSigned(dVar48,0x3fe0000000000000);
              }
              else {
                dVar52 = (double)GameCamera.posX;
                dVar50 = (double)GameCamera.posY;
                dVar38 = (double)GameCamera.posZ;
                dVar37 = (double)MB_randRangeFloat(-1.5,(float)dVar46);
              }
              dVar38 = (double)(float)(dVar38 + dVar37);
              iVar15 = DAT_00927130 + -3;
              puVar10[0x31] = (longlong)(int)(animationSpeed * 5.5);
              iVar15 = iVar15 + ((uint)((longlong)*(int *)((int)puVar10 + 0x18c) - (longlong)iVar15
                                       >> 0x3f) & *(int *)((int)puVar10 + 0x18c) - iVar15);
              puVar10[0x31] = (longlong)(iVar15 + (iVar15 >> 0x1f & -iVar15));
              dVar37 = (double)MB_randRangeFloat
                                         ((float)((double)(longlong)puVar10[0x31] *
                                                 -0.30000001192092896),
                                          (float)((double)(longlong)puVar10[0x31] * dVar46));
              fVar64 = (float)((double)*(float *)((int)puVar10 + 0x74) - dVar50);
              fVar3 = (float)(dVar38 + dVar37) - *(float *)(puVar10 + 0xf);
              fVar64 = SQRT((float)((double)*(float *)(puVar10 + 0xe) - dVar52) *
                            (float)((double)*(float *)(puVar10 + 0xe) - dVar52) + fVar64 * fVar64);
              *(float *)((int)puVar10 + 0x104) = fVar3;
              dVar38 = ABS((double)fVar3);
              dVar46 = ABS((double)fVar64);
              *(float *)(puVar10 + 0x20) = fVar64;
              *(float *)(puVar10 + 0x21) = (float)(dVar46 - dVar38);
              uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x20) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar10 + 0x21) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar10 + 0x104) >> 0x1d) & 4;
              dVar37 = ABS((double)*(float *)(puVar10 + 0x20));
              if ((double)*(float *)(puVar10 + 0x21) - dVar48 < 0.0) {
                dVar37 = dVar38;
              }
              fVar64 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
              dVar38 = ABS((double)*(float *)((int)puVar10 + 0x104));
              if ((double)*(float *)(puVar10 + 0x21) - dVar48 < 0.0) {
                dVar38 = dVar46;
              }
              fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
              dVar46 = dVar48;
              if (dVar48 < dVar37) {
                lVar14 = uVar13 - 0x2a0;
                lVar23 = uVar13 - 0x17c;
                lVar21 = uVar13 - 0x18c;
                lVar31 = 2;
                fVar2 = (float)(dVar38 - dVar37) / (float)(dVar38 + dVar37);
                fVar4 = fVar2 * fVar2;
                *(float *)(puVar10 + 0x26) = fVar2;
                *(float *)(puVar10 + 0x25) = fVar2;
                *(float *)((int)puVar10 + 300) = fVar2;
                *(float *)((int)puVar10 + 0x124) = fVar2;
                fVar2 = fVar4 * fVar4;
                *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar4;
                *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar2;
                *(float *)(puVar10 + 0x26) = *(float *)(puVar10 + 0x26) * fVar2 * fVar4;
                do {
                  *(float *)((int)lVar14 + 0x124) = *(float *)((int)lVar14 + 0x114) * fVar2 * fVar2;
                  iVar15 = (int)lVar21;
                  lVar21 = lVar21 + 8;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
                  lVar23 = lVar23 + 8;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                lVar31 = 4;
                lVar23 = uVar13 - 0x18c;
                pfVar22 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar21 = lVar23;
                do {
                  fVar2 = *pfVar22;
                  fVar4 = pfVar22[1];
                  pfVar22 = pfVar22 + 2;
                  *(float *)((int)lVar14 + 0x124) = *(float *)((int)lVar14 + 0x124) * fVar2;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
                  lVar21 = lVar21 + 8;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                lVar21 = 2;
                lVar14 = lVar1;
                dVar37 = dVar48;
                do {
                  iVar15 = (int)lVar14;
                  iVar17 = (int)lVar23;
                  lVar14 = lVar14 + 0x10;
                  lVar23 = lVar23 + 0x10;
                  dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar15 + 0x124)) +
                                    *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                                   *(float *)(iVar17 + 0xc));
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                dVar46 = (double)((float)(dVar37 + dVar55) * fVar64 + fVar3);
              }
              MB_SphericalToVector
                        (g_FrameTime * 80.0,(float)dVar33,(float)dVar46,
                         (float *)(puVar10 + 0x10));
              fVar64 = animationSpeed * 150.5;
              *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0xe);
              *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0xf);
              *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x10);
              *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x11);
              *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x74);
              *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x7c);
              *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x84);
              *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x8c);
              puVar10[0x31] = (longlong)(int)fVar64;
              iVar15 = M184_0001b100(pMoby);
              if (iVar15 != 0) {
                auVar59 = ZEXT416(0xffffffff);
                auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
                auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                iVar15 = 0;
                auVar59 = loadVectorLeftIndexed(0x54,0x18154);
                auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar59 = vectorMultiplyAddFloatingPoint
                                    (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60,auVar60);
                auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
                auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xff;
                uVar8 = storeVectorElementByteIndexed
                                  (auVar59 | auVar59 << 8 | auVar59 << 0x10 | auVar59 << 0x18 |
                                   auVar59 << 0x20 | auVar59 << 0x28 | auVar59 << 0x30 |
                                   auVar59 << 0x38 | auVar59 << 0x40 | auVar59 << 0x48 |
                                   auVar59 << 0x50 | auVar59 << 0x58 | auVar59 << 0x60 |
                                   auVar59 << 0x68 | auVar59 << 0x70 | auVar59 << 0x78,0x92,uVar28);
                *(undefined1 *)((int)pvVar6 + 0x92) = uVar8;
                dVar33 = 1.7000000476837158;
                dVar55 = 0.5;
                do {
                  dVar37 = (double)MB_randRangeSigned
                                             (dVar48,(double)(float)((double)g_FrameTime *
                                                                    dVar33));
                  dVar38 = (double)g_FrameTime;
                  *(float *)(puVar10 + 0x12) = (float)dVar37;
                  dVar37 = (double)MB_randRangeSigned
                                             (dVar48,(double)(float)(dVar38 * dVar33));
                  dVar38 = (double)g_FrameTime;
                  *(float *)((int)puVar10 + 0x94) = (float)dVar37;
                  dVar37 = (double)MB_randRangeSigned
                                             (dVar48,(double)(float)(dVar38 * dVar33));
                  *(float *)(puVar10 + 0x13) = (float)dVar37;
                  uVar16 = MB_randRange(0xaa,0xf0);
                  uVar20 = MB_randRange(0x6e,200);
                  iVar17 = MB_randRange(0xf,0x1e);
                  puVar10[0x31] = (longlong)iVar17;
                  puVar10[0x31] =
                       (longlong)
                       (int)(animationSpeed * (float)((double)(longlong)puVar10[0x31] + dVar55));
                  uVar7 = *(undefined4 *)((int)puVar10 + 0x18c);
                  uVar32 = MB_randRange(0xb4,0x10e);
                  SpawnPart_4
                            (uVar13 - 0x240,uVar13 - 0x220,
                             (uint)((uVar20 & 0xffffffff) << 8) | 0x7f000000 | uVar16,0xff,uVar7,
                             0x37,uVar32,1);
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 9);
              }
              auVar59 = ZEXT416(0xffffffff);
              auVar60 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar59 = ZEXT416(0xffffffff);
              auVar63 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar61 = vectorShiftLeftIntegerWord(auVar60,auVar60);
              auVar59 = loadVectorLeftIndexed(0x78,0x18154);
              auVar62 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar60 = loadVectorLeftIndexed(0x7c,0x18154);
              auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar60 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar61);
              auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar63);
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar61);
              auVar63 = loadVectorLeftIndexed(0x7130,0x920000);
              auVar59 = ZEXT416(0);
              auVar60 = vectorConvertToSignedFixedPointWordSaturate(auVar60,0);
              auVar62 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
              auVar61 = vectorCompareGreaterThanSignedWord(auVar63,auVar60);
              auVar60 = vectorConditionalSelect(auVar63,auVar60,auVar61);
              auVar59 = vectorCompareGreaterThanSignedWord
                                  (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,
                                   auVar60);
              auVar59 = vectorLogicalAndWithComplement(auVar60,auVar59);
              auVar60.piece<0,4>() = auVar62.piece<0,4>() + auVar59.piece<0,4>();
              auVar60.piece<8,8>() = auVar59.piece<8,8>();
              auVar60.piece<4,4>() = auVar62.piece<4,4>() + auVar59.piece<4,4>();
              auVar61.piece<0,8>() = auVar60.piece<0,8>();
              auVar61.piece<12,4>() = auVar59.piece<12,4>();
              auVar61.piece<8,4>() = auVar62.piece<8,4>() + auVar59.piece<8,4>();
              auVar59.piece<0,12>() = auVar61.piece<0,12>();
              auVar59.piece<12,4>() = auVar62.piece<12,4>() + auVar61.piece<12,4>();
              auVar59 = vectorSplatHalfWord(auVar59,1);
              uVar9 = storeVectorElementHalfWordIndexed(auVar59,0x9c,uVar28);
              *(undefined2 *)((int)pvVar6 + 0x9c) = uVar9;
            }
          }
        }
      }
      if (((DAT_0092711c == 0) && (0 < *(int *)((int)pvVar6 + 0x80))) &&
         (iVar15 = FastDecTimerS32(uVar28 + 0x84), iVar15 != 0)) {
        iVar15 = MB_damage(pMoby,Camera_AddPostUpdFunc,0);
        dVar55 = 1.0;
        if (iVar15 == 0) {
          pMVar27 = param_1;
          if (*(int *)((int)&DAT_0071cf4c + iVar26) != 0x11) {
            iVar17 = *(int *)((int)pvVar5 + *(int *)((int)&DAT_0071cf4c + iVar26) * 0x30 + 0x20);
            if (iVar17 == -1) goto LAB_000190d4;
            pMVar27 = g_MobyInstance + iVar17;
          }
          if (pMVar27 != (MobyInstance *)0x0) {
            dVar55 = 0.20000000298023224;
            iVar15 = MB_damage(pMVar27,Camera_AddPostUpdFunc,0);
            pMVar27->damage = -1;
          }
        }
LAB_000190d4:
        if (iVar15 != 0) {
          if (DAT_00927118 == 0) {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x88,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
            DAT_00927138 = storeVectorElementWordIndexed
                                     (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,
                                      0x7138,0x920000);
          }
          else {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x54,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,0x84,
                               uVar28);
            *(undefined4 *)((int)pvVar6 + 0x84U & 0xfffffffc) = uVar7;
            fVar64 = (float)((double)*(float *)((int)pvVar6 + 0x80) - dVar55);
            *(float *)((int)pvVar6 + 0x80) = fVar64;
            if ((double)fVar64 <= dVar48) {
              sVar19 = *(short *)((int)pvVar5 + 0x5fc) + -0x14;
              *(short *)((int)pvVar5 + 0x5fc) = sVar19;
              if (sVar19 < 0) {
                *(undefined2 *)((int)pvVar5 + 0x5fc) = 0;
              }
              PlayMobySound(1,0,pMoby);
              if (0 < *(short *)((int)pvVar5 + 0x5fc)) {
                iVar15 = *(int *)((int)&DAT_0071cf4c + iVar26);
                if (iVar15 == 0x11) {
                  DAT_00927180 = 1;
                }
                else {
                  puVar24 = (undefined4 *)((int)pvVar5 + (int)((longlong)iVar15 << 4) * 3 + 0x20);
                  (&DAT_0092713c)[iVar15] = *puVar24;
                  *puVar24 = 0xffffffff;
                }
                M1274_00017fc8(param_1,(longlong)iVar15);
                if (uVar30 == 4) {
                  uVar20 = 0;
                  do {
                    piVar18 = (int *)((int)pvVar5 + (int)(uVar20 << 4) * 3 + 0x20);
                    iVar15 = *piVar18;
                    if ((iVar15 != -1) &&
                       (g_MobyInstance[iVar15].oClass == PLANETBUSTER_MAXIMUS_PART_04FD)) {
                      *(int *)((int)&DAT_0092713c + (int)((uVar20 & 0xffffffff) << 2)) = iVar15;
                      *piVar18 = -1;
                      M1274_00017fc8(param_1,uVar20);
                    }
                    iVar15 = (int)uVar20 + 1;
                    uVar20 = (ulonglong)iVar15;
                  } while (iVar15 < 0x11);
                }
              }
              iVar15 = 0;
              dVar54 = 0.10000000149011612;
              dVar53 = 0.5;
              dVar51 = 0.800000011920929;
              dVar49 = 1.570796251296997;
              dVar47 = 3.141592502593994;
              dVar52 = -3.141592502593994;
              dVar50 = -0.16666656732559204;
              dVar46 = 0.008333025500178337;
              dVar38 = -0.0001980741071747616;
              dVar37 = 2.601886990305502e-06;
              dVar33 = 90.5;
              dVar55 = 180.5;
              dVar48 = 5.5;
              uVar32 = 0x4119a28000000000;
              do {
                *(f32 *)(puVar10 + 0x14) = (pMoby->pos).x;
                *(f32 *)((int)puVar10 + 0xa4) = (pMoby->pos).y;
                *(f32 *)(puVar10 + 0x15) = (pMoby->pos).z;
                *(f32 *)((int)puVar10 + 0xac) = (pMoby->pos).w;
                dVar56 = (double)MB_randRangeFloat((float)dVar54,(float)dVar53);
                *(float *)(puVar10 + 0x15) = (float)((double)*(float *)(puVar10 + 0x15) + dVar56);
                dVar34 = (double)MB_randRot();
                dVar35 = (double)MB_randRangeFloat((float)dVar54,(float)dVar51);
                dVar36 = (double)(float)(dVar34 + dVar49);
                dVar56 = (double)(float)(dVar47 - dVar34);
                if (dVar34 - (double)(float)(dVar47 - dVar34) < 0.0) {
                  dVar56 = dVar34;
                }
                dVar45 = (double)(float)(dVar47 - dVar36);
                if (dVar36 - (double)(float)(dVar47 - dVar36) < 0.0) {
                  dVar45 = dVar36;
                }
                dVar39 = (double)(float)(dVar52 - dVar34);
                if ((double)(float)(dVar52 - dVar34) - dVar56 < 0.0) {
                  dVar39 = dVar56;
                }
                dVar34 = (double)animationSpeed;
                dVar56 = (double)(float)(dVar52 - dVar36);
                if ((double)(float)(dVar52 - dVar36) - dVar45 < 0.0) {
                  dVar56 = dVar45;
                }
                dVar36 = (double)(float)(dVar39 * dVar39);
                dVar45 = (double)(float)(dVar56 * dVar56);
                dVar40 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar39));
                dVar42 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar56));
                dVar44 = (double)(float)(dVar36 * dVar40);
                dVar41 = (double)(float)(dVar45 * dVar42);
                puVar10[0x31] = (longlong)(int)(dVar34 * dVar33);
                dVar39 = (double)(float)((double)(float)(dVar36 * dVar44) * dVar37 +
                                        (double)(float)(dVar44 * dVar38 +
                                                       (double)(float)(dVar40 * dVar46 +
                                                                      (double)(float)((double)(float
                                                  )(dVar36 * dVar39) * dVar50 + dVar39))));
                dVar36 = (double)(float)((double)(float)(dVar45 * dVar41) * dVar37 +
                                        (double)(float)(dVar41 * dVar38 +
                                                       (double)(float)(dVar42 * dVar46 +
                                                                      (double)(float)((double)(float
                                                  )(dVar45 * dVar56) * dVar50 + dVar56))));
                puVar10[0x31] = (longlong)(int)(dVar34 * dVar55);
                *(float *)((int)puVar10 + 0xa4) =
                     (float)(dVar39 * dVar35 + (double)*(float *)((int)puVar10 + 0xa4));
                *(float *)(puVar10 + 0x14) =
                     (float)(dVar36 * dVar35 + (double)*(float *)(puVar10 + 0x14));
                MB_randRange
                          (*(undefined4 *)((int)puVar10 + 0x18c),
                           *(undefined4 *)((int)puVar10 + 0x18c));
                dVar56 = (double)MB_randRangeFloat
                                           ((float)((double)g_FrameTime * dVar58),
                                            (float)((double)g_FrameTime * dVar57));
                fVar64 = g_FrameTime;
                dVar34 = (double)g_FrameTime;
                *(undefined4 *)(puVar10 + 0x17) = 0;
                *(float *)(puVar10 + 0x16) = (float)(dVar36 * dVar56);
                *(float *)((int)puVar10 + 0xb4) = (float)(dVar39 * dVar56);
                dVar56 = (double)MB_randRangeFloat(fVar64,(float)(dVar34 * dVar48));
                *(float *)(puVar10 + 0x17) = (float)dVar56;
                SpawnPart_22(uVar32,uVar13 - 0x210,uVar13 - 0x200,0x500a1414,0xa0a0a);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 0x82);
              pMoby->collision = (ushort *)0x0;
              pMoby->modeBits = pMoby->modeBits | (UNK_40|DISABLED);
            }
          }
        }
      }
      pMoby->damage = -1;
      uVar16 = *(uint *)((int)pvVar6 + 0x80);
      if ((0 < (int)uVar16) &&
         ((int)(FLOAT_ORDER(uVar16)) < 0x41200000))
      {
        iVar15 = FastDoubleToInt((double)*(float *)((int)pvVar6 + 0x80));
        uVar16 = 9 - iVar15;
        iVar15 = 0;
        iVar29 = ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0);
        iVar17 = iVar29 + 3;
        if (0 < iVar17) {
          dVar56 = 0.10000000149011612;
          dVar54 = 0.4000000059604645;
          dVar53 = 1.570796251296997;
          dVar51 = 3.141592502593994;
          dVar49 = -3.141592502593994;
          dVar47 = -0.16666656732559204;
          dVar52 = 0.008333025500178337;
          dVar50 = -0.0001980741071747616;
          dVar46 = 2.601886990305502e-06;
          dVar38 = 25.5;
          fVar64 = 55.5;
          dVar37 = 0.5;
          dVar33 = 3.0;
          dVar55 = 7.0;
          dVar48 = 17.0;
          uVar32 = 0x4119a28000000000;
          do {
            dVar45 = (double)fVar64;
            *(f32 *)(puVar10 + 0x18) = (pMoby->pos).x;
            *(f32 *)((int)puVar10 + 0xc4) = (pMoby->pos).y;
            fVar64 = (pMoby->pos).z;
            *(float *)(puVar10 + 0x33) = (float)dVar58;
            *(float *)(puVar10 + 0x19) = fVar64;
            *(f32 *)((int)puVar10 + 0xcc) = (pMoby->pos).w;
            *(float *)(puVar10 + 0x19) = (float)((double)fVar64 + dVar58);
            dVar34 = (double)MB_randRot();
            dVar35 = (double)MB_randRangeFloat((float)dVar56,(float)dVar54);
            dVar36 = (double)(float)(dVar34 + dVar53);
            dVar58 = (double)(float)(dVar51 - dVar34);
            if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
              dVar58 = dVar34;
            }
            dVar39 = (double)(float)(dVar51 - dVar36);
            if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
              dVar39 = dVar36;
            }
            dVar44 = (double)(float)(dVar49 - dVar34);
            if ((double)(float)(dVar49 - dVar34) - dVar58 < 0.0) {
              dVar44 = dVar58;
            }
            dVar34 = (double)animationSpeed;
            *(float *)((int)puVar10 + 0x19c) = (float)dVar45;
            dVar58 = (double)(float)(dVar49 - dVar36);
            if ((double)(float)(dVar49 - dVar36) - dVar39 < 0.0) {
              dVar58 = dVar39;
            }
            dVar36 = (double)(float)(dVar44 * dVar44);
            dVar39 = (double)(float)(dVar58 * dVar58);
            dVar42 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar44));
            dVar40 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar58));
            dVar43 = (double)(float)(dVar36 * dVar42);
            dVar41 = (double)(float)(dVar39 * dVar40);
            puVar10[0x31] = (longlong)(int)(dVar34 * dVar38);
            puVar10[0x31] = (longlong)(int)(dVar34 * dVar45);
            dVar36 = (double)(float)((double)(float)(dVar36 * dVar43) * dVar46 +
                                    (double)(float)(dVar43 * dVar50 +
                                                   (double)(float)(dVar42 * dVar52 +
                                                                  (double)(float)((double)(float)(
                                                  dVar36 * dVar44) * dVar47 + dVar44))));
            dVar34 = (double)(float)((double)(float)(dVar39 * dVar41) * dVar46 +
                                    (double)(float)(dVar41 * dVar50 +
                                                   (double)(float)(dVar40 * dVar52 +
                                                                  (double)(float)((double)(float)(
                                                  dVar39 * dVar58) * dVar47 + dVar58))));
            *(float *)((int)puVar10 + 0xc4) =
                 (float)(dVar36 * dVar35 + (double)*(float *)((int)puVar10 + 0xc4));
            *(float *)(puVar10 + 0x18) =
                 (float)(dVar34 * dVar35 + (double)*(float *)(puVar10 + 0x18));
            MB_randRange
                      (*(undefined4 *)((int)puVar10 + 0x18c),*(undefined4 *)((int)puVar10 + 0x18c));
            dVar58 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar37),
                                        (float)((double)g_FrameTime * dVar33));
            *(undefined4 *)(puVar10 + 0x1b) = 0;
            *(float *)(puVar10 + 0x1a) = (float)(dVar34 * dVar58);
            *(float *)((int)puVar10 + 0xd4) = (float)(dVar36 * dVar58);
            dVar58 = (double)FastIntToDouble(5);
            dVar34 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar55),
                                        (float)((double)g_FrameTime * dVar48));
            dVar35 = (double)FastIntToDouble(iVar29);
            *(float *)(puVar10 + 0x1b) =
                 (float)((double)(float)((double)(float)(dVar34 * dVar35) * dVar57) / dVar58);
            uVar20 = MB_randRange(0x46,0xcd);
            SpawnPart_22
                      (uVar32,uVar13 - 0x1f0,uVar13 - 0x1e0,
                       (uint)((uVar20 & 0xffffffff) << 8) | 0x460a00aa,0xa0a46);
            iVar15 = iVar15 + 1;
            dVar58 = (double)*(float *)(puVar10 + 0x33);
            fVar64 = *(float *)((int)puVar10 + 0x19c);
          } while (iVar15 < iVar17);
        }
        iVar15 = 0;
        dVar53 = 0.10000000149011612;
        dVar51 = 0.800000011920929;
        dVar49 = 1.570796251296997;
        dVar47 = 3.141592502593994;
        dVar52 = -3.141592502593994;
        dVar50 = -0.16666656732559204;
        dVar46 = 0.008333025500178337;
        dVar38 = -0.0001980741071747616;
        dVar37 = 2.601886990305502e-06;
        dVar33 = 40.5;
        dVar58 = 70.5;
        dVar57 = 0.4000000059604645;
        dVar55 = 2.4000000953674316;
        dVar48 = 5.5;
        uVar32 = 0x411ec30020000000;
        do {
          *(f32 *)(puVar10 + 0x1c) = (pMoby->pos).x;
          *(f32 *)((int)puVar10 + 0xe4) = (pMoby->pos).y;
          *(f32 *)(puVar10 + 0x1d) = (pMoby->pos).z;
          *(f32 *)((int)puVar10 + 0xec) = (pMoby->pos).w;
          dVar56 = (double)MB_randRot();
          dVar34 = (double)MB_randRangeFloat((float)dVar53,(float)dVar51);
          dVar35 = (double)(float)(dVar56 + dVar49);
          dVar54 = (double)(float)(dVar47 - dVar56);
          if (dVar56 - (double)(float)(dVar47 - dVar56) < 0.0) {
            dVar54 = dVar56;
          }
          dVar36 = (double)(float)(dVar47 - dVar35);
          if (dVar35 - (double)(float)(dVar47 - dVar35) < 0.0) {
            dVar36 = dVar35;
          }
          dVar45 = (double)(float)(dVar52 - dVar56);
          if ((double)(float)(dVar52 - dVar56) - dVar54 < 0.0) {
            dVar45 = dVar54;
          }
          dVar56 = (double)animationSpeed;
          dVar54 = (double)(float)(dVar52 - dVar35);
          if ((double)(float)(dVar52 - dVar35) - dVar36 < 0.0) {
            dVar54 = dVar36;
          }
          dVar35 = (double)(float)(dVar45 * dVar45);
          dVar36 = (double)(float)(dVar54 * dVar54);
          dVar44 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar45));
          dVar41 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar54));
          dVar39 = (double)(float)(dVar35 * dVar44);
          dVar40 = (double)(float)(dVar36 * dVar41);
          puVar10[0x31] = (longlong)(int)(dVar56 * dVar33);
          dVar45 = (double)(float)((double)(float)(dVar35 * dVar39) * dVar37 +
                                  (double)(float)(dVar39 * dVar38 +
                                                 (double)(float)(dVar44 * dVar46 +
                                                                (double)(float)((double)(float)(
                                                  dVar35 * dVar45) * dVar50 + dVar45))));
          dVar35 = (double)(float)((double)(float)(dVar36 * dVar40) * dVar37 +
                                  (double)(float)(dVar40 * dVar38 +
                                                 (double)(float)(dVar41 * dVar46 +
                                                                (double)(float)((double)(float)(
                                                  dVar36 * dVar54) * dVar50 + dVar54))));
          puVar10[0x31] = (longlong)(int)(dVar56 * dVar58);
          *(float *)((int)puVar10 + 0xe4) =
               (float)(dVar45 * dVar34 + (double)*(float *)((int)puVar10 + 0xe4));
          *(float *)(puVar10 + 0x1c) = (float)(dVar35 * dVar34 + (double)*(float *)(puVar10 + 0x1c))
          ;
          MB_randRange
                    (*(undefined4 *)((int)puVar10 + 0x18c),*(undefined4 *)((int)puVar10 + 0x18c));
          dVar54 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar53),
                                      (float)((double)g_FrameTime * dVar57));
          dVar56 = (double)g_FrameTime;
          *(undefined4 *)(puVar10 + 0x1f) = 0;
          *(float *)(puVar10 + 0x1e) = (float)(dVar35 * dVar54);
          *(float *)((int)puVar10 + 0xf4) = (float)(dVar45 * dVar54);
          dVar54 = (double)MB_randRangeFloat
                                     ((float)(dVar56 * dVar55),(float)(dVar56 * dVar48));
          *(float *)(puVar10 + 0x1f) = (float)dVar54;
          SpawnPart_22(uVar32,uVar13 - 0x1d0,uVar13 - 0x1c0,0x460a1414,0xa0a0a);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
      }
    }
    uVar30 = uVar30 + 1;
    iVar26 = iVar26 + 4;
    pvVar25 = (void *)((int)pvVar25 + 4);
    if (4 < (int)uVar30) {
      M1274_00017b78(param_1);
      if ((*(short *)((int)pvVar5 + 0x5fc) < 1) && (DAT_0092711c == 0)) {
        DAT_00927134 = 1;
        param_1->state = '\x04';
        param_1->setByGroup = '\0';
      }
      return;
    }
  } while( true );
}


// 0x00199f0 (0x26c bytes)
void M1274_000199f0(MobyInstance *param_1)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  int iVar4;
  MobyInstance *pMVar5;
  void *pvVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  pvVar6 = param_1->pVar;
  iVar4 = 0;
  dVar11 = 170.5;
  dVar12 = -3.1415927410125732;
  dVar13 = 3.141592502593994;
  dVar14 = -3.141592502593994;
  dVar15 = -0.16666656732559204;
  dVar16 = 0.008333025500178337;
  dVar17 = -0.0001980741071747616;
  dVar18 = 2.601886990305502e-06;
  dVar19 = 70.0;
  dVar20 = 10.0;
  dVar21 = 6.2831854820251465;
  do {
    pMVar5 = param_1;
    if (iVar4 != 0x11) {
      pMVar5 = g_MobyInstance + *(int *)((int)pvVar6 + 0x20);
    }
    if (pMVar5->oClass != PLANETBUSTER_MAXIMUS_PART_04FE) {
      iVar2 = (int)((double)animationSpeed * dVar11);
      dVar7 = (double)FastIntToDouble(iVar2);
      dVar8 = (double)(float)((double)(float)((double)(longlong)
                                                      (worldUpdateTime -
                                                      (worldUpdateTime / iVar2) * iVar2) / dVar7) *
                              dVar21 + dVar12);
      dVar7 = (double)(float)(dVar13 - dVar8);
      if (dVar8 - (double)(float)(dVar13 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar8);
      if ((double)(float)(dVar14 - dVar8) - dVar7 < 0.0) {
        dVar9 = dVar7;
      }
      dVar7 = (double)(float)(dVar9 * dVar9);
      dVar10 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar9));
      dVar8 = (double)(float)(dVar7 * dVar10);
      dVar8 = (double)(float)((double)(float)(dVar7 * dVar8) * dVar18 +
                             (double)(float)(dVar8 * dVar17 +
                                            (double)(float)(dVar10 * dVar16 +
                                                           (double)(float)((double)(float)(dVar7 * 
                                                  dVar9) * dVar15 + dVar9))));
      dVar7 = (double)(float)(dVar8 * dVar19);
      iVar2 = FastDoubleToInt(dVar7);
      lVar1 = FastDoubleToInt(dVar7);
      iVar3 = FastDoubleToInt((double)(float)(dVar8 * dVar20));
      iVar2 = iVar2 + 0xb4;
      lVar1 = lVar1 + 0xb4;
      pMVar5->modeBits = pMVar5->modeBits | HAS_GLOW;
      pMVar5->glowRgba =
           (uint)((lVar1 + (0xff - (longlong)(int)lVar1 >> 0x3f & 0xffU - lVar1) & 0xffffffff) << 8)
           | iVar2 + ((uint)(0xff - (longlong)iVar2 >> 0x3f) & 0xffU - iVar2) |
           (iVar3 + 0x46) * 0x10000 | 0x80000000;
    }
    iVar4 = iVar4 + 1;
    pvVar6 = (void *)((int)pvVar6 + 0x30);
  } while (iVar4 < 0x12);
  return;
}


// 0x0019cb8 (0x1410 bytes)
// inlined: FastAtan2 @0x19f2c, FastAtan2 @0x1a720, FastAtan2 @0x1a960
/* Moby 1274 */

void UpdateMoby_1274(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  Cuboid *pCVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  short sVar21;
  int iVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong unaff_r27;
  int *piVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar16 = (longlong)(int)moby;
  uVar26 = ZEXT48(&stack0x00000000);
  lVar31 = uVar26 - 0x150;
  puVar14 = (ulonglong *)lVar31;
  *puVar14 = uVar26;
  puVar14[0x2c] = in_LR;
  puVar14[0x28] = in_f30;
  puVar14[0x29] = in_f31;
  puVar14[0x27] = unaff_r31;
  puVar14[0x26] = unaff_r30;
  uVar1 = moby->state;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  puVar14[0x25] = unaff_r29;
  puVar14[0x24] = unaff_r28;
  puVar14[0x23] = unaff_r27;
  if ((uVar1 != '\0') && (DAT_00927180 != 0)) {
    (moby->pos).x = DAT_009271b0;
    (moby->pos).y = DAT_009271b4;
    (moby->pos).z = DAT_009271b8;
    (moby->pos).w = DAT_009271bc;
    (moby->rotation).x = DAT_009271c0;
    (moby->rotation).y = DAT_009271c4;
    (moby->rotation).z = DAT_009271c8;
    (moby->rotation).w = DAT_009271cc;
  }
  if (uVar1 == '\x04') {
    if ((*(int *)((int)pvVar10 + 0x608) != -1) && (*(int *)((int)pvVar10 + 0x60c) != -1)) {
      bVar2 = moby->setByGroup;
      if (bVar2 == 0) {
        moby->setByGroup = '\x01';
        Camera_SetMobyDrivenTargetPos
                  (&Cuboids[*(int *)((int)pvVar10 + 0x608)].pos.x);
        Camera_SetMobyDrivenTargetRot
                  (&Cuboids[*(int *)((int)pvVar10 + 0x608)].rot.x);
        LetterBoxOn = 1;
        DAT_009271d0 = 1;
      }
      else if (bVar2 < 2) {
        uVar12 = (int)*(uint *)((int)pvVar10 + 0x610) >> 0x1f;
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0x610)) - uVar12) < 0x3f800000) {
          OrganicDelt
                    (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,g_FrameTime * 0.4,
                     (float *)((int)pvVar10 + 0x610),0x720000,(float *)((int)pvVar10 + 0x614));
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          iVar28 = *(int *)((int)pvVar10 + 0x60c);
          fVar3 = *(float *)((int)pvVar10 + 0x610);
          fVar4 = Cuboids[iVar20].pos.x;
          fVar6 = Cuboids[iVar28].pos.y;
          fVar7 = Cuboids[iVar20].pos.y;
          fVar5 = Cuboids[iVar28].pos.z;
          fVar9 = Cuboids[iVar20].pos.z;
          fVar8 = Cuboids[iVar28].pos.w;
          *(float *)(puVar14 + 0xe) = fVar3 * (Cuboids[iVar28].pos.x - fVar4) + fVar4;
          *(float *)((int)puVar14 + 0x74) = fVar3 * (fVar6 - fVar7) + pCVar15[iVar20].pos.y;
          fVar4 = pCVar15[iVar20].pos.z;
          *(float *)((int)puVar14 + 0x7c) = fVar8;
          *(undefined4 *)((int)puVar14 + 0x8c) = 0;
          *(undefined4 *)(puVar14 + 0x11) = 0;
          *(undefined4 *)((int)puVar14 + 0x84) = 0;
          *(undefined4 *)(puVar14 + 0x10) = 0;
          *(float *)(puVar14 + 0xf) = fVar3 * (fVar5 - fVar9) + fVar4;
          dVar34 = (double)FastDiffRots
                                     ((double)pCVar15[iVar28].rot.x,(double)pCVar15[iVar20].rot.x);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          *(float *)(puVar14 + 0x10) = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          dVar34 = (double)FastWrapRot
                                     (pCVar15[iVar20].rot.x,*(float *)((int)puVar14 + 0x84));
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x60c);
          iVar28 = *(int *)((int)pvVar10 + 0x608);
          *(float *)(puVar14 + 0x10) = (float)dVar34;
          dVar34 = (double)FastDiffRots
                                     ((double)pCVar15[iVar20].rot.y,(double)pCVar15[iVar28].rot.y);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          fVar3 = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          *(float *)((int)puVar14 + 0x84) = fVar3;
          dVar34 = (double)FastWrapRot(pCVar15[iVar20].rot.y,fVar3);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x60c);
          iVar28 = *(int *)((int)pvVar10 + 0x608);
          *(float *)((int)puVar14 + 0x84) = (float)dVar34;
          dVar34 = (double)FastDiffRots
                                     ((double)pCVar15[iVar20].rot.z,(double)pCVar15[iVar28].rot.z);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          fVar3 = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          *(float *)(puVar14 + 0x11) = fVar3;
          dVar34 = (double)FastWrapRot(pCVar15[iVar20].rot.z,fVar3);
          *(float *)(puVar14 + 0x11) = (float)dVar34;
          Camera_SetMobyDrivenTargetPos((float *)(puVar14 + 0xe));
          Camera_SetMobyDrivenTargetRot((float *)(puVar14 + 0x10));
        }
        else {
          moby->setByGroup = '\x02';
          LetterBoxOn = 0;
          Camera_DeactivateMobyDrivenCam(3);
        }
      }
      else if (bVar2 < 3) {
        iVar20 = 0;
        piVar27 = &DAT_0092713c;
        do {
          iVar28 = *(int *)((int)uVar29 + 0x20);
          if (iVar28 == -1) {
            if ((0 < *piVar27) && (g_MobyInstance[*piVar27].state < 0x80)) {
              DeleteMoby(g_MobyInstance + *piVar27);
            }
          }
          else {
            if (g_MobyInstance[iVar28].state < 0x80) {
              DeleteMoby(g_MobyInstance + iVar28);
            }
            *(undefined4 *)((int)uVar29 + 0x20) = 0xffffffff;
          }
          iVar20 = iVar20 + 1;
          piVar27 = piVar27 + 1;
          uVar29 = uVar29 + 0x30;
        } while (iVar20 < 0x11);
        DAT_009271d4 = 0;
        mode_sceneInit(7);
        DeleteMoby(moby);
        return;
      }
    }
    sVar21 = *(short *)((int)pvVar10 + 0x5fa);
    if (sVar21 == 0) {
      iVar20 = 0;
      piVar27 = &DAT_0092713c;
      iVar28 = 0;
      do {
        if (*piVar27 == 0) {
          *piVar27 = *(int *)((int)uVar29 + 0x20);
        }
        iVar20 = iVar20 + 1;
        *(undefined4 *)((int)uVar29 + 0x20) = 0xffffffff;
        piVar27 = piVar27 + 1;
        uVar29 = uVar29 + 0x30;
      } while (iVar20 < 0x11);
      DAT_00927180 = 1;
      do {
        M1274_00017fc8(lVar16,iVar28);
        iVar28 = iVar28 + 1;
      } while (iVar28 < 0x12);
      sVar21 = *(short *)((int)pvVar10 + 0x5fa);
    }
    *(short *)((int)pvVar10 + 0x5fa) = sVar21 + 1;
    M1274_00017b78(lVar16);
    goto LAB_0001aff8;
  }
  if (uVar1 == '\x03') {
    uVar26 = (ulonglong)DAT_00927138;
    DAT_00927138 = (uint)(uVar26 + 1);
    AccelDeltAng
              (0x40086f4280000000,(double)(DAT_0071f40c * 0.0015),(double)(DAT_0071f40c * 0.3),
               (double)(g_FrameTime * 0.17453292),lVar16 + 0x48,uVar26 + 1,uVar29 + 0x5f4)
    ;
    MB_BobMotion
              (0.7,g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
               (float *)((int)pvVar10 + 0x5c8));
    MB_SwingMotion
              ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * g_FrameTime),
               (double)(DAT_0071cf44 * 0.017453292 * g_FrameTime),lVar16,uVar29 + 0x5e4,
               uVar29 + 0x5e8);
    MB_UpdateChildMobys(lVar16,uVar29,0x11);
    M1274_00018238(lVar16);
    goto LAB_0001aff8;
  }
  if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      iVar20 = MB_IsPntInCuboid
                         ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar10 + 0x624));
      if (iVar20 == 0) {
        iVar20 = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        uVar26 = uVar29;
        do {
          iVar28 = *(int *)((int)uVar26 + 0x20);
          if (iVar28 != -1) {
            g_MobyInstance[iVar28].modeBits =
                 g_MobyInstance[iVar28].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          iVar20 = iVar20 + 1;
          uVar26 = uVar26 + 0x30;
        } while (iVar20 < 0x11);
      }
      else {
        iVar20 = 0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        uVar26 = uVar29;
        do {
          iVar28 = *(int *)((int)uVar26 + 0x20);
          if (iVar28 != -1) {
            g_MobyInstance[iVar28].modeBits = g_MobyInstance[iVar28].modeBits | (UNK_40|DISABLED);
          }
          iVar20 = iVar20 + 1;
          uVar26 = uVar26 + 0x30;
        } while (iVar20 < 0x11);
      }
      iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x628));
      if (((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                ((int)g_heroPosition.z >> 0x1f)) < 0x42500001) || (iVar20 != 0)) {
        fVar3 = 3.0;
        if (iVar20 != 0) {
          fVar3 = 10.0;
        }
        dVar34 = (double)fVar3;
        iVar20 = MB_IsPntInCuboid
                           (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x61c));
        if (iVar20 != 0) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x14,0x19c5c);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x620,
                              uVar29);
          *(undefined4 *)((int)pvVar10 + 0x620U & 0xfffffffc) = uVar13;
        }
        iVar20 = FastDecTimerS32(uVar29 + 0x620);
        if (iVar20 == 0) {
          dVar34 = 19.0;
        }
        AccelDelt((float)((double)*(float *)((int)pvVar10 + 0x618) + dVar34),
                            DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,g_FrameTime * 2.7,
                            &(moby->pos).z,0x19c5c,(float *)((int)pvVar10 + 0x62c));
      }
      else {
        Delt(*(float *)((int)pvVar10 + 0x618),g_FrameTime * 2.0,&(moby->pos).z);
      }
      MB_BobMotion
                (0.7,g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
                 (float *)((int)pvVar10 + 0x5c8));
      MB_SwingMotion
                ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * g_FrameTime),
                 (double)(DAT_0071cf44 * 0.017453292 * g_FrameTime),lVar16,uVar29 + 0x5e4,
                 uVar29 + 0x5e8);
      MB_UpdateChildMobys(lVar16,uVar29,0x11);
      iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x5ec));
      if (iVar20 != 0 || DAT_00927118 != 0) {
        DAT_009271d4 = 1;
        lVar31 = 5;
        do {
          iVar20 = (int)uVar29;
          uVar29 = uVar29 + 4;
          g_MobyInstance[*(int *)((int)pvVar10 + *(int *)(iVar20 + 0x5d0) * 0x30 + 0x20)].damage = -1;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      DAT_009271d4 = 0;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        iVar20 = 0;
        do {
          iVar28 = *(int *)((int)uVar29 + 0x20);
          if (iVar28 != -1) {
            DeleteMoby(g_MobyInstance + iVar28);
          }
          iVar20 = iVar20 + 1;
          uVar29 = uVar29 + 0x30;
        } while (iVar20 < 0x11);
        DeleteMoby(moby);
        return;
      }
      DAT_00927134 = 0;
      MB_StoreChildOffsets(lVar16,uVar29,0x11);
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x5c0)];
      (moby->pos).x = pSVar11->points[0].x;
      (moby->pos).y = pSVar11->points[0].y;
      fVar3 = pSVar11->points[0].z;
      (moby->pos).z = fVar3;
      (moby->pos).w = pSVar11->points[0].w;
      *(float *)((int)pvVar10 + 0x618) = fVar3;
      fVar3 = pSVar11->points[1].x - pSVar11->points[0].x;
      fVar4 = pSVar11->points[1].y - pSVar11->points[0].y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar14 + 0x15) = fVar3;
      *(float *)((int)puVar14 + 0xac) = fVar4;
      *(float *)(puVar14 + 0x16) = fVar6 - fVar5;
      fVar3 = 0.0;
      fVar4 = (moby->pos).z;
      uVar17 = (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar14 + 0x15));
      if (*(float *)(puVar14 + 0x16) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar14 + 0xac));
      if (*(float *)(puVar14 + 0x16) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      if (0.0 < fVar7) {
        lVar18 = uVar26 - 0x140;
        lVar22 = uVar26 - 0x5c;
        lVar24 = uVar26 - 0x4c;
        lVar30 = 2;
        fVar6 = (fVar8 - fVar7) / (fVar8 + fVar7);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x20) = fVar6;
        *(float *)(puVar14 + 0x1f) = fVar6;
        *(float *)((int)puVar14 + 0xfc) = fVar6;
        *(float *)((int)puVar14 + 0xf4) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar7;
        *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar6;
        *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar6 * fVar6;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar24 = uVar26 - 0x5c;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar31;
        lVar22 = lVar24;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar6;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar31;
          iVar28 = (int)lVar24;
          lVar31 = lVar31 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar28 + 4) +
                  *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar5;
      }
      (moby->rotation).z = fVar3;
      if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
               ((int)g_heroPosition.z >> 0x1f)) < 0x42500000) {
        (moby->pos).z = fVar4 + 3.0;
      }
      lVar31 = 5;
      do {
        iVar20 = (int)uVar29;
        uVar29 = uVar29 + 4;
        *(undefined4 *)
         ((int)g_MobyInstance[*(int *)((int)pvVar10 + *(int *)(iVar20 + 0x5d0) * 0x30 + 0x20)].pVar +
         0x80) = 0x41200000;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      puVar19 = &DAT_0092713c;
      DAT_00927190 = 0xbf800000;
      lVar31 = 3;
      do {
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19 = puVar19 + 6;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      *(undefined4 *)((int)pvVar10 + 0x604) = 0xffffffff;
      *(undefined2 *)((int)pvVar10 + 0x5fc) = 100;
      moby->state = '\x01';
    }
    goto LAB_0001aff8;
  }
  MB_BobMotion
            (0.7,g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
             (float *)((int)pvVar10 + 0x5c8));
  MB_SwingMotion
            ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * g_FrameTime),
             (double)(DAT_0071cf44 * 0.017453292 * g_FrameTime),lVar16,uVar29 + 0x5e4,
             uVar29 + 0x5e8);
  pSVar11 = Splines[*(int *)((int)pvVar10 + 0x5c0)];
  if ((int)*(short *)((int)pvVar10 + 0x5f8) < pSVar11->cnt + -0xb) {
    Delt(g_FrameTime * 8.0,DAT_0071f418 * 10.0,(float *)((int)pvVar10 + 0x5f0));
    fVar3 = *(float *)((int)pvVar10 + 0x5f0);
  }
  else {
    Delt(0.0,DAT_0071f418 * 8.0,(float *)((int)pvVar10 + 0x5f0));
    fVar3 = *(float *)((int)pvVar10 + 0x5f0);
    if (*(int *)((int)pvVar10 + 0x5f0) == 0) {
      moby->state = '\x03';
      goto LAB_0001aff8;
    }
  }
  iVar20 = pSVar11->cnt;
  iVar25 = *(short *)((int)pvVar10 + 0x5f8) + 1;
  iVar28 = (int)((longlong)*(short *)((int)pvVar10 + 0x5f8) << 4);
  iVar25 = iVar25 - (iVar25 / iVar20) * iVar20;
  fVar4 = *(float *)((int)pSVar11 + (iVar25 * 4 + 5) * 4);
  fVar6 = *(float *)((int)pSVar11 + (iVar25 * 4 + 4) * 4);
  fVar7 = fVar4 - *(float *)((int)&pSVar11->points[0].y + iVar28);
  fVar5 = fVar6 - *(float *)((int)&pSVar11->points[0].x + iVar28);
  fVar9 = *(float *)((int)pSVar11 + (iVar25 * 4 + 6) * 4) -
          *(float *)((int)&pSVar11->points[0].z + iVar28);
  dVar35 = 0.0;
  fVar8 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7);
  fVar3 = fVar3 / fVar8;
  dVar34 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar34 = (double)(fVar3 * fVar9);
  }
  dVar32 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  dVar33 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar33 = (double)(fVar3 * fVar5);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar34 = (double)(fVar3 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar5);
  }
  (moby->pos).z = (float)((double)(moby->pos).z + dVar34);
  sVar21 = *(short *)((int)pvVar10 + 0x5f8);
  (moby->pos).x = (float)((double)(moby->pos).x + dVar33);
  (moby->pos).y = (float)((double)(moby->pos).y + dVar32);
  iVar28 = (int)((longlong)sVar21 << 4);
  fVar6 = fVar6 - *(float *)((int)&pSVar11->points[0].x + iVar28);
  fVar4 = fVar4 - *(float *)((int)&pSVar11->points[0].y + iVar28);
  fVar5 = ABS(fVar6);
  fVar7 = ABS(fVar4);
  *(float *)((int)puVar14 + 0x9c) = fVar6;
  *(float *)(puVar14 + 0x14) = fVar4;
  fVar4 = g_FrameTime;
  *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
  uVar17 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)((int)puVar14 + 0x9c));
  if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
    fVar3 = fVar7;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar7 = ABS(*(float *)(puVar14 + 0x14));
  if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar34 = dVar35;
  if (0.0 < fVar3) {
    lVar18 = uVar26 - 0x140;
    lVar24 = uVar26 - 0x6c;
    lVar22 = uVar26 - 0x7c;
    lVar30 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)(puVar14 + 0x1c) = fVar3;
    *(float *)(puVar14 + 0x1b) = fVar3;
    *(float *)((int)puVar14 + 0xdc) = fVar3;
    *(float *)((int)puVar14 + 0xd4) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar7;
    *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar3;
    *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar3 * fVar3;
      iVar28 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar26 - 0x7c;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar31;
    lVar22 = lVar24;
    do {
      fVar3 = *pfVar23;
      fVar7 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xd4) * fVar3;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar22 = 2;
    lVar18 = lVar31;
    do {
      iVar28 = (int)lVar18;
      iVar25 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar28 + 0xd4)) + *(float *)(iVar25 + 4)
                        + *(float *)(iVar25 + 8) + *(float *)(iVar25 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar5);
  }
  if (iVar20 + -0x14 < (int)sVar21) {
    dVar34 = 3.054326057434082;
  }
  OrganicDeltAngSpeed
            (dVar34,(double)(DAT_0071f40c * 0.0015),(double)(DAT_0071f40c * 0.3),
             (double)(fVar4 * 0.17453292),lVar16,(longlong)sVar21,uVar29 + 0x5f4);
  sVar21 = *(short *)((int)pvVar10 + 0x5f8);
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  iVar20 = (int)((longlong)sVar21 << 4);
  fVar6 = *(float *)((int)&pSVar11->points[0].y + iVar20);
  fVar7 = *(float *)((int)&pSVar11->points[0].x + iVar20);
  fVar5 = fVar3 - fVar6;
  fVar9 = fVar4 - fVar7;
  if (SQRT(fVar9 * fVar9 + fVar5 * fVar5) < 5.0) {
LAB_0001aa8c:
    *(short *)((int)pvVar10 + 0x5f8) =
         (short)(sVar21 + 1) - (short)((sVar21 + 1) / pSVar11->cnt) * (short)pSVar11->cnt;
  }
  else {
    fVar6 = fVar6 - fVar3;
    fVar7 = fVar7 - fVar4;
    dVar33 = ABS((double)fVar6);
    dVar32 = ABS((double)fVar7);
    *(float *)(puVar14 + 0x12) = fVar7;
    *(float *)((int)puVar14 + 0x94) = fVar6;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar14 + 0x13) = (float)(dVar32 - dVar33);
    uVar17 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar14 + 0x12));
    if ((double)*(float *)(puVar14 + 0x13) - dVar35 < 0.0) {
      dVar34 = dVar33;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar33 = ABS((double)*(float *)((int)puVar14 + 0x94));
    if ((double)*(float *)(puVar14 + 0x13) - dVar35 < 0.0) {
      dVar33 = dVar32;
    }
    if (dVar35 < dVar34) {
      lVar18 = uVar26 - 0x140;
      lVar24 = uVar26 - 0x8c;
      lVar22 = uVar26 - 0x9c;
      lVar30 = 2;
      fVar7 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
      fVar5 = fVar7 * fVar7;
      *(float *)(puVar14 + 0x18) = fVar7;
      *(float *)(puVar14 + 0x17) = fVar7;
      *(float *)((int)puVar14 + 0xbc) = fVar7;
      *(float *)((int)puVar14 + 0xb4) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x17) = *(float *)(puVar14 + 0x17) * fVar5;
      *(float *)((int)puVar14 + 0xbc) = *(float *)((int)puVar14 + 0xbc) * fVar7;
      *(float *)(puVar14 + 0x18) = *(float *)(puVar14 + 0x18) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar7 * fVar7;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar24 = uVar26 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar31;
      lVar22 = lVar24;
      do {
        fVar7 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xb4) * fVar7;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar18 = 2;
      do {
        iVar20 = (int)lVar31;
        iVar28 = (int)lVar24;
        lVar31 = lVar31 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0xb4)) +
                          *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
    }
    dVar34 = (double)FastSubRots(fVar3,(float)dVar35);
    if (1.5707963705062866 < dVar34) {
      sVar21 = *(short *)((int)pvVar10 + 0x5f8);
      goto LAB_0001aa8c;
    }
  }
  MB_UpdateChildMobys(lVar16,uVar29,0x11);
  M1274_00018238(lVar16);
LAB_0001aff8:
  M1274_000199f0(lVar16);
  uVar1 = moby->state;
  if (((uVar1 == '\x02') || (uVar1 == '\x01')) || (uVar1 == '\x03')) {
    if (*(int *)((int)pvVar10 + 0x604) == -1) {
      iVar20 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0x604) = iVar20;
    }
  }
  else {
    iVar20 = *(int *)((int)pvVar10 + 0x604);
    if (((iVar20 != -1) && (g_SoundChannels[iVar20].pMoby == moby)) &&
       (g_SoundChannels[iVar20].state != '\0')) {
      sound_Kill(iVar20);
    }
    *(undefined4 *)((int)pvVar10 + 0x604) = 0xffffffff;
  }
  return;
}



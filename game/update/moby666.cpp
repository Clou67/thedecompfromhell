// game/update/moby666.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4091a0-0x409e18
#include "game/update/moby666.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby42.h"
#include "idol/fastfunc.h"

// 0x04091a0 (0xc78 bytes)
// inlined: FastAtan2 @0x409494, FastAtan2 @0x409b8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 666 */

void UpdateMoby_666(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  MobyModeBit MVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int32_t *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  MobyInstance *pMVar34;
  Cuboid *pCVar35;
  ulonglong uVar36;
  int iVar38;
  int iVar39;
  longlong lVar37;
  undefined2 uVar40;
  Spline *pSVar41;
  float *pfVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  void *pvVar46;
  ulonglong unaff_r27;
  longlong lVar47;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar48;
  double dVar49;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar47 = uVar36 - 0x1a0;
  puVar12 = (ulonglong *)lVar47;
  *puVar12 = uVar36;
  puVar12[0x36] = in_LR;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x31] = unaff_r31;
  puVar12[0x30] = unaff_r30;
  pvVar11 = moby->pVar;
  iVar38 = *(int *)((int)pvVar11 + 0x170);
  puVar12[0x2f] = unaff_r29;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x2d] = unaff_r27;
  puVar12[0x2c] = unaff_r26;
  puVar12[0x2b] = unaff_r25;
  if (iVar38 == -1) {
    bVar1 = moby->animationId != '\x05';
    if ((bVar1) && (bVar1)) {
      MB_SetAnimation(moby,5,0,0);
    }
  }
  else {
    sVar8 = *(short *)((int)pvVar11 + 0x174);
    if (sVar8 < 1) {
      if (-1 < sVar8) {
        *(undefined2 *)((int)pvVar11 + 0x174) = 1;
        MVar9 = moby->modeBits;
        *(undefined4 *)((int)pvVar11 + 0x184) = 0;
        *(undefined4 *)((int)pvVar11 + 0x178) = 0;
        *(undefined4 *)((int)pvVar11 + 0x194) = 0xffffffff;
        moby->updateDistance = -1;
        moby->modeBits = MVar9 | (UNK_40|DISABLED);
        return;
      }
    }
    else if (sVar8 < 2) {
      iVar38 = MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar38);
      if (iVar38 != 0) {
        *(undefined2 *)((int)pvVar11 + 0x174) = 2;
        iVar38 = *(int *)((int)pvVar11 + 0x180);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (iVar38 != -1) {
          pvVar46 = g_MobyInstance[iVar38].pVar;
          iVar38 = FastDoubleToInt((double)(*(float *)((int)pvVar11 + 0x188) * 60.0));
          puVar12[0x29] = (longlong)iVar38;
          *(int *)((int)pvVar46 + 0x2c) =
               (int)(animationSpeed * ((float)(longlong)puVar12[0x29] + 0.5));
          g_MobyInstance[*(int *)((int)pvVar11 + 0x180)].setByGroup = '\x01';
        }
        if (*(int *)((int)pvVar11 + 0x74) != -1) {
          iVar38 = 0;
          pSVar41 = Splines[*(int *)((int)pvVar11 + 0x74)];
          piVar18 = &pSVar41->cnt;
          if (0 < *piVar18) {
            do {
              if (pSVar41->points[0].w == 1.0) {
                *(int *)((int)pvVar11 + 0x17c) = iVar38;
                break;
              }
              iVar38 = iVar38 + 1;
              pSVar41 = (Spline *)pSVar41->points;
            } while (iVar38 < *piVar18);
          }
        }
      }
    }
    else if (sVar8 < 3) {
      UpdateMoby_42(moby);
      if (*(int *)((int)pvVar11 + 0x180) != -1) {
        fVar2 = (moby->pos).x - GameCamera.posX;
        fVar3 = (moby->pos).y - GameCamera.posY;
        fVar5 = ABS(fVar2);
        fVar4 = ABS(fVar3);
        pvVar46 = g_MobyInstance[*(int *)((int)pvVar11 + 0x180)].pVar;
        *(float *)((int)puVar12 + 0xfc) = fVar2;
        *(float *)(puVar12 + 0x20) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar5 - fVar4;
        dVar51 = 0.0;
        uVar44 = (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar12 + 0xfc));
        if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar44 << 2));
        fVar3 = *(float *)(((uint)(uVar44 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar12 + 0x20));
        if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        dVar50 = dVar51;
        if (0.0 < fVar2) {
          lVar37 = uVar36 - 400;
          lVar43 = uVar36 - 0x78;
          lVar45 = uVar36 - 0x68;
          lVar48 = 2;
          fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)((int)puVar12 + 0x134) = fVar2;
          *(float *)((int)puVar12 + 300) = fVar2;
          *(float *)(puVar12 + 0x26) = fVar2;
          *(float *)(puVar12 + 0x25) = fVar2;
          fVar2 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar5;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar2;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar37 + 0x128) = *(float *)((int)lVar37 + 0x118) * fVar2 * fVar2;
            iVar38 = (int)lVar43;
            lVar37 = lVar37 + 8;
            lVar43 = lVar43 + 8;
            *(float *)((int)lVar45 + 4) = *(float *)(iVar38 + 4) * fVar2 * fVar2;
            lVar45 = lVar45 + 8;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
          lVar48 = 4;
          lVar45 = uVar36 - 0x78;
          pfVar42 = (float *)&DAT_007358e0;
          lVar37 = lVar47;
          lVar43 = lVar45;
          do {
            fVar2 = *pfVar42;
            fVar5 = pfVar42[1];
            pfVar42 = pfVar42 + 2;
            *(float *)((int)lVar37 + 0x128) = *(float *)((int)lVar37 + 0x128) * fVar2;
            lVar37 = lVar37 + 8;
            *(float *)((int)lVar43 + 4) = *(float *)((int)lVar43 + 4) * fVar5;
            lVar43 = lVar43 + 8;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
          lVar43 = 2;
          lVar37 = lVar47;
          do {
            iVar38 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            iVar39 = (int)lVar45;
            lVar45 = lVar45 + 0x10;
            dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar38 + 0x128)) +
                              *(float *)(iVar39 + 4) + *(float *)(iVar39 + 8) +
                             *(float *)(iVar39 + 0xc));
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          dVar50 = (double)((float)(dVar50 + 0.7853981852531433) * fVar4 + fVar3);
        }
        dVar49 = (double)FastDiffRots
                                   ((double)Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z,dVar50);
        if (dVar51 <= dVar49) {
          if ((double)(*(float *)((int)pvVar11 + 400) * 0.017453292) < dVar49) {
            dVar50 = (double)FastWrapRot
                                       (Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z,
                                        *(float *)((int)pvVar11 + 400) * -0.017453292);
          }
        }
        else {
          dVar50 = (double)Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.z;
        }
        pCVar35 = Cuboids;
        *(float *)((int)pvVar46 + 0x10) = Cuboids[*(int *)((int)pvVar46 + 0x24)].rot.x;
        *(float *)((int)pvVar46 + 0x14) = pCVar35[*(int *)((int)pvVar46 + 0x24)].rot.y;
        dVar51 = (double)MB_DeltAngSpeed
                                   ((double)GameCamera.rot.radius,dVar50,
                                    (double)(g_FrameTimeSq * 12.566371),
                                    (double)(g_FrameTimeSq * 125.663704),
                                    (double)(g_FrameTime * 3.1415927),&DAT_00720000,
                                    &DAT_00409170,(int)pvVar11 + 0x18c);
        *(float *)((int)pvVar46 + 0x18) = (float)dVar51;
      }
      if (*(int *)((int)pvVar11 + 0x74) != -1) {
        if ((*(int *)((int)pvVar11 + 0x60) == *(int *)((int)pvVar11 + 0x17c)) &&
           (*(int *)((int)pvVar11 + 0x178) == 0)) {
          if (moby->animationId != '\x02') {
            puVar12[0x29] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar12 + 0x14c));
          }
          *(undefined4 *)((int)pvVar11 + 0x178) = 1;
          *(undefined2 *)((int)pvVar11 + 0x176) = 0;
        }
        else if ((*(int *)((int)pvVar11 + 0x60) == Splines[*(int *)((int)pvVar11 + 0x74)]->cnt + -2)
                && (*(int *)((int)pvVar11 + 0x184) == 0)) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    FastDecTimerS16((int)pvVar11 + 0x176);
    if (((*(int *)((int)pvVar11 + 0x178) == 0) || (*(short *)((int)pvVar11 + 0x176) != 0)) ||
       (bVar1 = moby->updateId != '\x02', bVar1)) {
      lVar47 = uVar36 - 0x130;
      iVar38 = 0;
      dVar51 = 3.1415927410125732;
      pvVar46 = pvVar11;
      do {
        uVar33 = uRam00854e8c;
        uVar32 = uRam00854e88;
        uVar31 = uRam00854e84;
        uVar30 = _DAT_00854e80;
        uVar29 = uRam00854e7c;
        uVar28 = uRam00854e78;
        uVar27 = uRam00854e74;
        uVar26 = _DAT_00854e70;
        uVar25 = uRam00854e6c;
        uVar24 = uRam00854e68;
        uVar23 = uRam00854e64;
        uVar22 = _DAT_00854e60;
        uVar21 = uRam00854e58;
        uVar20 = uRam00854e54;
        uVar19 = _DAT_00854e50;
        *(undefined4 *)((int)puVar12 + 0x7c) = uRam00854e5c;
        *(undefined4 *)(puVar12 + 0xf) = uVar21;
        *(undefined4 *)((int)puVar12 + 0x74) = uVar20;
        *(undefined4 *)(puVar12 + 0xe) = uVar19;
        *(undefined4 *)((int)puVar12 + 0x8c) = uVar25;
        *(undefined4 *)(puVar12 + 0x11) = uVar24;
        *(undefined4 *)((int)puVar12 + 0x84) = uVar23;
        *(undefined4 *)(puVar12 + 0x10) = uVar22;
        *(undefined4 *)((int)puVar12 + 0x9c) = uVar29;
        *(undefined4 *)(puVar12 + 0x13) = uVar28;
        *(undefined4 *)((int)puVar12 + 0x94) = uVar27;
        *(undefined4 *)(puVar12 + 0x12) = uVar26;
        *(undefined4 *)((int)puVar12 + 0xac) = uVar33;
        *(undefined4 *)(puVar12 + 0x15) = uVar32;
        *(undefined4 *)((int)puVar12 + 0xa4) = uVar31;
        *(undefined4 *)(puVar12 + 0x14) = uVar30;
        uVar33 = uRam00854ecc;
        uVar32 = uRam00854ec8;
        uVar31 = uRam00854ec4;
        uVar30 = _DAT_00854ec0;
        uVar29 = uRam00854ebc;
        uVar28 = uRam00854eb8;
        uVar27 = uRam00854eb4;
        uVar26 = _DAT_00854eb0;
        uVar25 = uRam00854eac;
        uVar24 = uRam00854ea8;
        uVar23 = uRam00854ea4;
        uVar22 = _DAT_00854ea0;
        uVar21 = uRam00854e98;
        uVar20 = uRam00854e94;
        uVar19 = _DAT_00854e90;
        *(undefined4 *)((int)puVar12 + 0xbc) = uRam00854e9c;
        *(undefined4 *)(puVar12 + 0x17) = uVar21;
        *(undefined4 *)((int)puVar12 + 0xb4) = uVar20;
        *(undefined4 *)(puVar12 + 0x16) = uVar19;
        *(undefined4 *)((int)puVar12 + 0xcc) = uVar25;
        *(undefined4 *)(puVar12 + 0x19) = uVar24;
        *(undefined4 *)((int)puVar12 + 0xc4) = uVar23;
        *(undefined4 *)(puVar12 + 0x18) = uVar22;
        *(undefined4 *)((int)puVar12 + 0xdc) = uVar29;
        *(undefined4 *)(puVar12 + 0x1b) = uVar28;
        *(undefined4 *)((int)puVar12 + 0xd4) = uVar27;
        *(undefined4 *)(puVar12 + 0x1a) = uVar26;
        *(undefined4 *)((int)puVar12 + 0xec) = uVar33;
        *(undefined4 *)(puVar12 + 0x1d) = uVar32;
        *(undefined4 *)((int)puVar12 + 0xe4) = uVar31;
        *(undefined4 *)(puVar12 + 0x1c) = uVar30;
        iVar39 = *(int *)((int)pvVar46 + 0x150);
        if (iVar39 != -1) {
          if (*(short *)((int)pvVar11 + 0x174) != 1) {
            g_MobyInstance[iVar39].modeBits =
                 g_MobyInstance[iVar39].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            iVar39 = *(int *)((int)pvVar46 + 0x150);
          }
          pfVar42 = (float *)lVar47;
          fVar2 = pfVar42[1];
          fVar3 = *pfVar42;
          fVar4 = (moby->transform).v1.w;
          fVar5 = (moby->transform).v0.w;
          fVar6 = pfVar42[2];
          fVar7 = (moby->transform).v2.w;
          fVar15 = (moby->transform).v2.x * fVar6 +
                   (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar2;
          fVar14 = (moby->transform).v2.y * fVar6 +
                   (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar2;
          fVar13 = (moby->transform).v2.z * fVar6 +
                   (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar2;
          *pfVar42 = fVar15;
          pfVar42[1] = fVar14;
          pfVar42[2] = fVar13;
          pfVar42[3] = fVar7 * fVar6 + fVar5 * fVar3 + fVar4 * fVar2 + pfVar42[3];
          pMVar34 = g_MobyInstance;
          g_MobyInstance[iVar39].pos.x = (moby->pos).x + fVar15;
          pMVar34[iVar39].pos.y = (moby->pos).y + fVar14;
          pMVar34[iVar39].pos.z = (moby->pos).z + fVar13;
          pMVar34[iVar39].pos.w = (moby->pos).w;
          pMVar34 = g_MobyInstance;
          iVar39 = *(int *)((int)pvVar46 + 0x150);
          g_MobyInstance[iVar39].rotation.x = (moby->rotation).x;
          pMVar34[iVar39].rotation.y = (moby->rotation).y;
          pMVar34[iVar39].rotation.z = (moby->rotation).z;
          pMVar34[iVar39].rotation.w = (moby->rotation).w;
          dVar50 = (double)FastWrapRot
                                     (g_MobyInstance[*(int *)((int)pvVar46 + 0x150)].rotation.z,
                                      (float)dVar51);
          g_MobyInstance[*(int *)((int)pvVar46 + 0x150)].rotation.z = (float)dVar50;
          UpdateMobyAnimFrame(g_MobyInstance + *(int *)((int)pvVar46 + 0x150));
          UpdateMobyTransform(g_MobyInstance + *(int *)((int)pvVar46 + 0x150));
          g_MobyInstance[*(int *)((int)pvVar46 + 0x150)].modeBits =
               g_MobyInstance[*(int *)((int)pvVar46 + 0x150)].modeBits | (NO_POST_UPDATE|NO_UPDATE);
        }
        iVar38 = iVar38 + 1;
        lVar47 = lVar47 + 0x10;
        pvVar46 = (void *)((int)pvVar46 + 4);
      } while (iVar38 < 8);
    }
    else if (!bVar1) {
      iVar38 = 0;
      pvVar46 = pvVar11;
      do {
        if (*(int *)((int)pvVar46 + 0x150) != -1) {
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          g_MobyInstance[iVar39].modeBits =
               g_MobyInstance[iVar39].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|DISABLED);
          pMVar34 = g_MobyInstance;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          fVar4 = 0.0;
          g_MobyInstance[iVar39].rotation.w = 0.0;
          pMVar34[iVar39].rotation.z = 0.0;
          pMVar34[iVar39].rotation.y = 0.0;
          pMVar34[iVar39].rotation.x = 0.0;
          fVar2 = g_heroPosition.x - (moby->pos).x;
          fVar3 = g_heroPosition.y - (moby->pos).y;
          fVar5 = ABS(fVar2);
          fVar6 = ABS(fVar3);
          *(float *)(puVar12 + 0x1e) = fVar2;
          *(float *)((int)puVar12 + 0xf4) = fVar3;
          *(float *)(puVar12 + 0x1f) = fVar5 - fVar6;
          pMVar34 = g_MobyInstance;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          uVar44 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar12 + 0x1e));
          if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
            fVar2 = fVar6;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar44 << 2));
          fVar3 = *(float *)(((uint)(uVar44 << 2) | 0x735900) + 4);
          fVar7 = ABS(*(float *)((int)puVar12 + 0xf4));
          if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          if (0.0 < fVar2) {
            lVar37 = uVar36 - 400;
            lVar45 = uVar36 - 0x88;
            lVar43 = uVar36 - 0x98;
            lVar48 = 2;
            fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
            fVar5 = fVar2 * fVar2;
            *(float *)((int)puVar12 + 0x114) = fVar2;
            *(float *)((int)puVar12 + 0x10c) = fVar2;
            *(float *)(puVar12 + 0x22) = fVar2;
            *(float *)(puVar12 + 0x21) = fVar2;
            fVar2 = fVar5 * fVar5;
            *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar5;
            *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar2;
            *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar2 * fVar5;
            do {
              *(float *)((int)lVar37 + 0x108) = *(float *)((int)lVar37 + 0xf8) * fVar2 * fVar2;
              iVar16 = (int)lVar43;
              lVar43 = lVar43 + 8;
              lVar37 = lVar37 + 8;
              *(float *)((int)lVar45 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
              lVar45 = lVar45 + 8;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            lVar48 = 4;
            lVar45 = uVar36 - 0x98;
            pfVar42 = (float *)&DAT_007358e0;
            lVar37 = lVar47;
            lVar43 = lVar45;
            do {
              fVar2 = *pfVar42;
              fVar5 = pfVar42[1];
              pfVar42 = pfVar42 + 2;
              *(float *)((int)lVar37 + 0x108) = *(float *)((int)lVar37 + 0x108) * fVar2;
              lVar37 = lVar37 + 8;
              *(float *)((int)lVar43 + 4) = *(float *)((int)lVar43 + 4) * fVar5;
              lVar43 = lVar43 + 8;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            lVar37 = 2;
            do {
              iVar16 = (int)lVar47;
              lVar47 = lVar47 + 0x10;
              iVar17 = (int)lVar45;
              lVar45 = lVar45 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x108) + *(float *)(iVar17 + 4) +
                      *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar6 + fVar3;
          }
          pMVar34[iVar39].rotation.z = fVar4;
          iVar39 = *(int *)((int)pvVar11 + iVar38 * 4 + 0x150);
          MVar10 = g_MobyInstance[iVar39].oClass;
          if (MVar10 == BIRDBOT) {
            pvVar46 = g_MobyInstance[iVar39].pVar;
            auVar52 = ZEXT416(0xffffffff);
            auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
            *(undefined4 *)((int)pvVar46 + 0x1e8) = 1;
            auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
            auVar52 = loadVectorLeftIndexed(0x28,0x409170);
            auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                         auVar52 << 0x60,auVar53);
            auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
            auVar52 = vectorSplatHalfWord(auVar52,1);
            uVar40 = storeVectorElementHalfWordIndexed(auVar52,0x1ec,ZEXT48(pvVar46));
            *(undefined2 *)((int)pvVar46 + 0x1ec) = uVar40;
            *(float *)((int)pvVar46 + 0x1d0) = *(float *)((int)pvVar11 + 0xd0) - (moby->pos).x;
            *(float *)((int)pvVar46 + 0x1d4) = *(float *)((int)pvVar11 + 0xd4) - (moby->pos).y;
            *(float *)((int)pvVar46 + 0x1d8) = *(float *)((int)pvVar11 + 0xd8) - (moby->pos).z;
            *(undefined4 *)((int)pvVar46 + 0x1dc) = *(undefined4 *)((int)pvVar11 + 0xdc);
          }
          else if (MVar10 == BLARG_TROOPER_01AB) {
            g_MobyInstance[iVar39].state = '\x04';
          }
          else if (MVar10 == CIRCULAR_SAW_ENEMY) {
            g_MobyInstance[iVar39].state = '\x02';
          }
          *(undefined4 *)((int)pvVar11 + iVar38 * 4 + 0x150) = 0xffffffff;
          uVar40 = MB_randRange(0x14,0x1e);
          *(undefined2 *)((int)pvVar11 + 0x176) = uVar40;
          return;
        }
        iVar38 = iVar38 + 1;
        pvVar46 = (void *)((int)pvVar46 + 4);
      } while (iVar38 < 8);
      if (moby->animationId != '\0') {
        puVar12[0x29] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x14c));
      }
    }
  }
  return;
}



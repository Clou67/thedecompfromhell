// game/update/moby347.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3513cc-0x352e3c
#include "game/update/moby347.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1371.h"
#include "game/update/moby1844.h"
#include "idol/fastfunc.h"

// 0x03513cc (0x14 bytes)
void M347_003513cc(void)

{
  DAT_008402ac = 0x10000;
  return;
}


// 0x03513e0 (0x160 bytes)
void M347_003513e0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  Spline *pSVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  short sVar11;
  ushort *puVar10;
  MobyInstance *pMVar12;
  longlong lVar13;
  
  lVar9 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar11 = (short)*(undefined4 *)(iVar2 + 0x80);
  if (sVar11 != -1) {
    iVar3 = (int)((longlong)sVar11 << 2);
    puVar10 = *(ushort **)((int)&g_MobyGroups + iVar3);
    if (puVar10 != (ushort *)0x0) {
      lVar13 = 0;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + (ZERO_MASK((0x733 - (uint)g_MobyInstance[uVar1 & 0x7fff].oClass)) & (short)((short)lVar13 + 1) - lVar13);
      } while (-1 < (short)uVar1);
      pSVar6 = Splines[*(int *)(iVar2 + 0x84)];
      puVar10 = *(ushort **)((int)&g_MobyGroups + iVar3);
      iVar3 = pSVar6->cnt;
      pMVar12 = g_MobyInstance;
      do {
        uVar7 = *puVar10 & 0x7fff;
        if (pMVar12[uVar7].oClass == BLARG_SHIP_0733) {
          iVar8 = (int)(lVar9 << 4);
          pvVar4 = pMVar12[uVar7].pVar;
          pMVar12[uVar7].pos.x = *(f32 *)((int)&pSVar6->points[0].x + iVar8);
          pMVar12[uVar7].pos.y = *(f32 *)((int)&pSVar6->points[0].y + iVar8);
          pMVar12[uVar7].pos.z = *(f32 *)((int)&pSVar6->points[0].z + iVar8);
          pMVar12[uVar7].pos.w = *(f32 *)((int)&pSVar6->points[0].w + iVar8);
          uVar5 = *(undefined4 *)(iVar2 + 0x84);
          *(int *)((int)pvVar4 + 100) = (int)lVar9;
          *(undefined4 *)((int)pvVar4 + 0x60) = uVar5;
          lVar9 = (longlong)(short)((short)lVar9 + (short)(iVar3 / (int)lVar13));
          *(undefined4 *)((int)pvVar4 + 0x68) = 0;
          pMVar12 = g_MobyInstance;
        }
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x0351548 (0x13c bytes)
void M347_00351548(MobyInstance *param_1)

{
  short sVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state != '\0') {
    dVar7 = 0.0;
    local_1c = 0.0;
    iVar5 = MB_damage(param_1,0x330000,0);
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
       (sVar1 = *(short *)(*(int *)(iVar5 + 0x20) + 0xa6), sVar1 != 0x127 && sVar1 != 0x3f1)) {
      iVar5 = 0;
    }
    MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
    if ((local_20 != 1) && (param_1->state != '\x04')) {
      MVar2 = param_1->modeBits;
      fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
      *(float *)((int)pvVar3 + 0x20) = fVar4;
      if ((double)fVar4 <= dVar7) {
        param_1->state = '\x04';
        param_1->modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
      MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  }
  return;
}


// 0x03516d0 (0x1758 bytes)
// inlined: FastAtan2 @0x351ae4, FastAtan2 @0x351ccc, FastAtan2 @0x351ea0, FastAtan2 @0x3520ec, FastAtan2 @0x3524b4, FastAtan2 @0x352698, FastAtan2 @0x35286c, FastAtan2 @0x352a68
// strings: 00351688: '?fff_q' (raw)

/* Moby 347 */

void UpdateMoby_347(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  char cVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar23;
  longlong lVar22;
  undefined8 in_r9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  Cuboid *pCVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  undefined8 uVar39;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x370;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x70] = in_LR;
  puVar11[100] = in_f22;
  puVar11[0x65] = in_f23;
  puVar11[0x66] = in_f24;
  puVar11[0x67] = in_f25;
  puVar11[0x68] = in_f26;
  puVar11[0x69] = in_f27;
  puVar11[0x6a] = in_f28;
  puVar11[0x6b] = in_f29;
  puVar11[0x6c] = in_f30;
  puVar11[0x6d] = in_f31;
  puVar11[99] = unaff_r31;
  puVar11[0x62] = unaff_r30;
  puVar11[0x61] = unaff_r29;
  puVar11[0x60] = unaff_r28;
  puVar11[0x5f] = unaff_r27;
  pvVar8 = moby->pVar;
  M347_00351548();
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    lVar17 = lVar15 + 0x10;
    uVar39 = 0;
    puVar11[0xe] = ZEXT48(&DAT_00a15d30);
    puVar11[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(0,lVar15,0x63a,lVar17,lVar15 + 0x40,0,0,in_r9,&DAT_00a15d30);
    puVar11[0xe] = ZEXT48(&DAT_00a15d30);
    puVar11[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar39,lVar15,0x63b,lVar17,lVar15 + 0x40,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnExplosionSparks(0x4024000000000000,0x402a000000000000,lVar15,lVar17);
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    if (((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
       (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) {
      GetMobyJointsWorldPos(lVar15,2,&DAT_00840340,uVar14 - 0x260);
      MB_getTarget(0x4080000000000000,lVar15,0x350000,uVar14 - 0x240);
      dVar36 = (double)(*(float *)(puVar11 + 0x26) - *(float *)(puVar11 + 0x22));
      fVar2 = *(float *)((int)puVar11 + 0x134) - *(float *)((int)puVar11 + 0x114);
      dVar35 = (double)fVar2;
      *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(puVar11 + 0x24);
      *(float *)((int)puVar11 + 0x1a4) = *(float *)(puVar11 + 0x26) - *(float *)(puVar11 + 0x22);
      *(undefined4 *)((int)puVar11 + 0xc4) = *(undefined4 *)((int)puVar11 + 0x124);
      *(undefined4 *)(puVar11 + 0x19) = *(undefined4 *)(puVar11 + 0x25);
      *(undefined4 *)((int)puVar11 + 0xcc) = *(undefined4 *)((int)puVar11 + 300);
      *(float *)(puVar11 + 0x35) = fVar2;
      dVar33 = (double)(*(float *)(puVar11 + 0x27) - *(float *)(puVar11 + 0x23));
      *(float *)((int)puVar11 + 0x1ac) = (float)(ABS(dVar36) - ABS(dVar35));
      dVar30 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1a4));
      if (*(float *)((int)puVar11 + 0x1ac) - 0.0 < 0.0) {
        dVar26 = ABS(dVar35);
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar37 = ABS((double)*(float *)(puVar11 + 0x35));
      if (*(float *)((int)puVar11 + 0x1ac) - 0.0 < 0.0) {
        dVar37 = ABS(dVar36);
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar38 = dVar30;
      if (0.0 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x120;
        lVar20 = uVar14 - 0x130;
        lVar25 = 2;
        fVar5 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x24c) = fVar5;
        *(float *)((int)puVar11 + 0x244) = fVar5;
        *(float *)(puVar11 + 0x49) = fVar5;
        *(float *)(puVar11 + 0x48) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x244) = *(float *)((int)puVar11 + 0x244) * fVar6;
        *(float *)(puVar11 + 0x49) = *(float *)(puVar11 + 0x49) * fVar5;
        *(float *)((int)puVar11 + 0x24c) = *(float *)((int)puVar11 + 0x24c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x240) = *(float *)((int)lVar16 + 0x230) * fVar5 * fVar5;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x130;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x240) = *(float *)((int)lVar16 + 0x240) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x240)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar38 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      OrganicDeltAng
                ((float)dVar38,DAT_0071f418 * 0.5235988,DAT_0071f418 * 0.5235988,
                 g_FrameTime * 1.0471976,&(moby->rotation).z,0x351684,
                 (float *)((int)pvVar8 + 0x78));
      *(float *)((int)puVar11 + 0x19c) = (float)dVar33;
      dVar37 = ABS(dVar33);
      fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35)));
      dVar38 = (double)fVar2;
      dVar36 = ABS(dVar38);
      *(float *)(puVar11 + 0x33) = fVar2;
      dVar35 = (double)(float)(dVar36 - dVar37);
      *(float *)(puVar11 + 0x34) = (float)(dVar36 - dVar37);
      uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x33) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x34) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x19c) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)(puVar11 + 0x33));
      if ((double)*(float *)(puVar11 + 0x34) - dVar30 < 0.0) {
        dVar26 = dVar37;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar29 = ABS((double)*(float *)((int)puVar11 + 0x19c));
      if ((double)*(float *)(puVar11 + 0x34) - dVar30 < 0.0) {
        dVar29 = dVar36;
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar20 = uVar14 - 0x150;
        lVar22 = uVar14 - 0x140;
        lVar25 = 2;
        fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x22c) = fVar5;
        *(float *)((int)puVar11 + 0x224) = fVar5;
        *(float *)(puVar11 + 0x45) = fVar5;
        *(float *)(puVar11 + 0x44) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x224) = *(float *)((int)puVar11 + 0x224) * fVar6;
        *(float *)(puVar11 + 0x45) = *(float *)(puVar11 + 0x45) * fVar5;
        *(float *)((int)puVar11 + 0x22c) = *(float *)((int)puVar11 + 0x22c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x220) = *(float *)((int)lVar16 + 0x210) * fVar5 * fVar5;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x150;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x220) = *(float *)((int)lVar16 + 0x220) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar9 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x220)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)((int)pvVar8 + 0xf4) = (float)-dVar31;
      MB_UpdateManipulatorRot
                ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),lVar15,
                 (int)pvVar8 + 0x90,0);
      fVar2 = *(float *)((int)pvVar8 + 0xd4);
      *(float *)((int)puVar11 + 0x18c) = (float)dVar38;
      *(float *)((int)puVar11 + 0x194) = (float)dVar35;
      *(float *)(puVar11 + 0x32) = (float)dVar33;
      uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x18c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x194) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x32) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar11 + 0x18c));
      if ((double)*(float *)((int)puVar11 + 0x194) - dVar30 < 0.0) {
        dVar26 = dVar37;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)(puVar11 + 0x32));
      if ((double)*(float *)((int)puVar11 + 0x194) - dVar30 < 0.0) {
        dVar33 = dVar36;
      }
      dVar35 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x160;
        lVar20 = uVar14 - 0x170;
        lVar25 = 2;
        fVar6 = (float)(dVar33 - dVar26) / (float)(dVar33 + dVar26);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x20c) = fVar6;
        *(float *)((int)puVar11 + 0x204) = fVar6;
        *(float *)(puVar11 + 0x41) = fVar6;
        *(float *)(puVar11 + 0x40) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x204) = *(float *)((int)puVar11 + 0x204) * fVar7;
        *(float *)(puVar11 + 0x41) = *(float *)(puVar11 + 0x41) * fVar6;
        *(float *)((int)puVar11 + 0x20c) = *(float *)((int)puVar11 + 0x20c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x200) = *(float *)((int)lVar16 + 0x1f0) * fVar6 * fVar6;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x170;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x200) = *(float *)((int)lVar16 + 0x200) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x200)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar35 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar3);
      }
      dVar26 = (double)FastSubRots(fVar2,(float)-dVar35);
      iVar18 = FastDecTimerS32((int)pvVar8 + 0x74);
      if ((iVar18 != 0) && (dVar33 = 0.03490658476948738, dVar26 < 0.03490658476948738)) {
        fVar2 = *(float *)(puVar11 + 0x26) - (moby->pos).x;
        fVar3 = *(float *)((int)puVar11 + 0x134) - (moby->pos).y;
        dVar35 = ABS((double)fVar2);
        dVar36 = ABS((double)fVar3);
        *(float *)(puVar11 + 0x30) = fVar2;
        *(float *)((int)puVar11 + 0x184) = fVar3;
        fVar2 = (moby->rotation).z;
        *(float *)(puVar11 + 0x31) = (float)(dVar35 - dVar36);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x30) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x31) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x184) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar11 + 0x30));
        if ((double)*(float *)(puVar11 + 0x31) - dVar30 < 0.0) {
          dVar26 = dVar36;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar36 = ABS((double)*(float *)((int)puVar11 + 0x184));
        if ((double)*(float *)(puVar11 + 0x31) - dVar30 < 0.0) {
          dVar36 = dVar35;
        }
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar35 = dVar30;
        if (dVar30 < dVar26) {
          lVar16 = uVar14 - 0x360;
          lVar20 = uVar14 - 400;
          lVar22 = uVar14 - 0x180;
          lVar25 = 2;
          fVar6 = (float)(dVar36 - dVar26) / (float)(dVar36 + dVar26);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x1ec) = fVar6;
          *(float *)((int)puVar11 + 0x1e4) = fVar6;
          *(float *)(puVar11 + 0x3d) = fVar6;
          *(float *)(puVar11 + 0x3c) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar7;
          *(float *)(puVar11 + 0x3d) = *(float *)(puVar11 + 0x3d) * fVar6;
          *(float *)((int)puVar11 + 0x1ec) = *(float *)((int)puVar11 + 0x1ec) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1d0) * fVar6 * fVar6;
            iVar18 = (int)lVar20;
            lVar16 = lVar16 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar22 = uVar14 - 400;
          pfVar23 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            fVar6 = *pfVar23;
            fVar7 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1e0) * fVar6;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar16 = 2;
          dVar26 = dVar30;
          do {
            iVar18 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar9 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x1e0)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar35 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
        }
        dVar26 = (double)FastSubRots(fVar2,(float)dVar35);
        if ((dVar26 < dVar33) &&
           (iVar18 = CollLine(uVar14 - 0x2b0,uVar14 - 0x240,2,DAT_0096b2d0,0), iVar18 == 0
           )) {
          *(undefined4 *)((int)puVar11 + 0xdc) = 0;
          *(undefined4 *)(puVar11 + 0x1b) = 0;
          *(undefined4 *)((int)puVar11 + 0xd4) = 0;
          *(undefined4 *)(puVar11 + 0x1a) = 0;
          fVar3 = (float)((double)*(float *)((int)puVar11 + 0x124) -
                         (double)*(float *)((int)puVar11 + 0x114));
          fVar5 = (float)((double)*(float *)(puVar11 + 0x24) - (double)*(float *)(puVar11 + 0x22));
          fVar6 = (float)((double)*(float *)(puVar11 + 0x25) - (double)*(float *)(puVar11 + 0x23));
          *(undefined4 *)((int)puVar11 + 0xec) = *(undefined4 *)((int)puVar11 + 300);
          dVar33 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(250.0 / dVar33);
          dVar26 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar26 = (double)(fVar6 * fVar2);
          }
          dVar35 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar35 = (double)(fVar3 * fVar2);
          }
          dVar36 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar36 = (double)(fVar5 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar26 = (double)(fVar6 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar35 = (double)(fVar3 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar36 = (double)(fVar5 * fVar2);
          }
          *(float *)(puVar11 + 0x1d) = (float)(dVar26 + (double)*(float *)(puVar11 + 0x25));
          *(float *)((int)puVar11 + 0xe4) =
               (float)(dVar35 + (double)*(float *)((int)puVar11 + 0x124));
          *(float *)(puVar11 + 0x1c) = (float)(dVar36 + (double)*(float *)(puVar11 + 0x24));
          iVar18 = SpawnPart_27
                             (0x413339e000000000,uVar14 - 0x250,uVar14 - 0x2a0,0xffffffff80ff8f6f,3)
          ;
          if (iVar18 != 0) {
            cVar19 = FastDoubleToInt(0x4010000000000000);
            *(char *)(iVar18 + 9) = cVar19 + 'p';
          }
          puVar11[0x5c] = (longlong)(int)(animationSpeed * 90.5);
          uVar10 = *(uint *)((int)puVar11 + 0x2e4);
          *(uint *)((int)pvVar8 + 0x74) =
               ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
          PlayMobySound(0,0,moby);
          FUN_0025c7f8((double)(g_FrameTime * 60.0),lVar15,&DAT_00720000,uVar14 - 0x2b0,
                       uVar14 - 0x290);
        }
      }
      if ((*(int *)((int)pvVar8 + 0x7c) != 0) && (iVar18 = MB_randInt(500), iVar18 == 0))
      {
        FUN_002c4728(*(undefined4 *)((int)pvVar8 + 0x7c));
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    if (g_onMagnerail == 0) {
      moby->state = '\x01';
    }
    GetMobyJointsWorldPos(lVar15,2,&DAT_00840340,uVar14 - 0x280);
    dVar30 = 0.0;
    dVar37 = 1.0;
    pCVar24 = Cuboids + *(int *)((int)pvVar8 + 0x70);
    dVar26 = (double)MB_randRangeFloat(0.0,1.0);
    pCVar13 = Cuboids;
    iVar18 = *(int *)((int)pvVar8 + 0x70);
    dVar38 = (double)(pCVar24->matrix).v0.w;
    dVar36 = (double)(float)((double)(pCVar24->matrix).v0.x * dVar26 + (double)Cuboids[iVar18].pos.x
                            );
    dVar35 = (double)(float)((double)(pCVar24->matrix).v0.y * dVar26 + (double)Cuboids[iVar18].pos.y
                            );
    dVar33 = (double)(float)((double)(pCVar24->matrix).v0.z * dVar26 + (double)Cuboids[iVar18].pos.z
                            );
    dVar26 = (double)MB_randRangeFloat((float)dVar30,(float)dVar37);
    pCVar24 = Cuboids;
    dVar36 = (double)(float)((double)pCVar13[iVar18].matrix.v1.x * dVar26 + dVar36);
    iVar9 = *(int *)((int)pvVar8 + 0x70);
    dVar35 = (double)(float)((double)pCVar13[iVar18].matrix.v1.y * dVar26 + dVar35);
    dVar33 = (double)(float)((double)pCVar13[iVar18].matrix.v1.z * dVar26 + dVar33);
    dVar26 = (double)MB_randRangeFloat((float)dVar30,(float)dVar37);
    fVar2 = pCVar24[iVar9].matrix.v2.z;
    fVar3 = (float)((double)pCVar24[iVar9].matrix.v2.x * dVar26 + dVar36) -
            *(float *)(puVar11 + 0x1e);
    dVar36 = (double)fVar3;
    fVar5 = (float)((double)pCVar24[iVar9].matrix.v2.y * dVar26 + dVar35) -
            *(float *)((int)puVar11 + 0xf4);
    dVar35 = (double)fVar5;
    *(float *)((int)puVar11 + 0x1d4) = fVar3;
    *(float *)(puVar11 + 0x3b) = fVar5;
    dVar33 = (double)((float)((double)fVar2 * dVar26 + dVar33) - *(float *)(puVar11 + 0x1f));
    *(float *)((int)puVar11 + 0x1dc) = (float)(ABS(dVar36) - ABS(dVar35));
    *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar11 + 0x20);
    *(undefined4 *)((int)puVar11 + 0xa4) = *(undefined4 *)((int)puVar11 + 0x104);
    *(undefined4 *)(puVar11 + 0x15) = *(undefined4 *)(puVar11 + 0x21);
    *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x10c);
    uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1d4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1dc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x3b) >> 0x1d) & 4;
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1d4));
    if ((double)*(float *)((int)puVar11 + 0x1dc) - dVar30 < 0.0) {
      dVar26 = ABS(dVar35);
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar11 + 0x3b));
    if ((double)*(float *)((int)puVar11 + 0x1dc) - dVar30 < 0.0) {
      dVar37 = ABS(dVar36);
    }
    dVar29 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar22 = uVar14 - 0xa0;
      lVar20 = uVar14 - 0xb0;
      lVar25 = 2;
      fVar5 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x2cc) = fVar5;
      *(float *)((int)puVar11 + 0x2c4) = fVar5;
      *(float *)(puVar11 + 0x59) = fVar5;
      *(float *)(puVar11 + 0x58) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x2c4) = *(float *)((int)puVar11 + 0x2c4) * fVar6;
      *(float *)(puVar11 + 0x59) = *(float *)(puVar11 + 0x59) * fVar5;
      *(float *)((int)puVar11 + 0x2cc) = *(float *)((int)puVar11 + 0x2cc) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x2c0) = *(float *)((int)lVar16 + 0x2b0) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xb0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x2c0) = *(float *)((int)lVar16 + 0x2c0) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        iVar9 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x2c0)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar29 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
    }
    OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 0.5235988,DAT_0071f418 * 0.5235988,
               g_FrameTime * 1.0471976,&(moby->rotation).z,0x351684,
               (float *)((int)pvVar8 + 0x78));
    *(float *)((int)puVar11 + 0x1cc) = (float)dVar33;
    dVar31 = ABS(dVar33);
    dVar29 = (double)(float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35));
    dVar34 = (double)(float)SQRT(dVar29);
    dVar32 = ABS(dVar34);
    *(float *)(puVar11 + 0x39) = (float)SQRT(dVar29);
    dVar37 = (double)(float)(dVar32 - dVar31);
    *(float *)(puVar11 + 0x3a) = (float)(dVar32 - dVar31);
    uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x39) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x3a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1cc) >> 0x1d) & 4;
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)(puVar11 + 0x39));
    if ((double)*(float *)(puVar11 + 0x3a) - dVar30 < 0.0) {
      dVar26 = dVar31;
    }
    dVar28 = ABS((double)*(float *)((int)puVar11 + 0x1cc));
    if ((double)*(float *)(puVar11 + 0x3a) - dVar30 < 0.0) {
      dVar28 = dVar32;
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar27 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar22 = uVar14 - 0xc0;
      lVar20 = uVar14 - 0xd0;
      lVar25 = 2;
      fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x2ac) = fVar5;
      *(float *)((int)puVar11 + 0x2a4) = fVar5;
      *(float *)(puVar11 + 0x55) = fVar5;
      *(float *)(puVar11 + 0x54) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x2a4) = *(float *)((int)puVar11 + 0x2a4) * fVar6;
      *(float *)(puVar11 + 0x55) = *(float *)(puVar11 + 0x55) * fVar5;
      *(float *)((int)puVar11 + 0x2ac) = *(float *)((int)puVar11 + 0x2ac) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x2a0) = *(float *)((int)lVar16 + 0x290) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xd0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x2a0) = *(float *)((int)lVar16 + 0x2a0) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        iVar9 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x2a0)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
    }
    *(float *)((int)pvVar8 + 0xf4) = (float)-dVar27;
    MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),lVar15,(int)pvVar8 + 0x90,
               0);
    fVar2 = *(float *)((int)pvVar8 + 0xd4);
    *(float *)((int)puVar11 + 0x1bc) = (float)dVar34;
    *(float *)((int)puVar11 + 0x1c4) = (float)dVar37;
    *(float *)(puVar11 + 0x38) = (float)dVar33;
    uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1bc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1c4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x38) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1bc));
    if ((double)*(float *)((int)puVar11 + 0x1c4) - dVar30 < 0.0) {
      dVar26 = dVar31;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar37 = ABS((double)*(float *)(puVar11 + 0x38));
    if ((double)*(float *)((int)puVar11 + 0x1c4) - dVar30 < 0.0) {
      dVar37 = dVar32;
    }
    fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar31 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar20 = uVar14 - 0xf0;
      lVar22 = uVar14 - 0xe0;
      lVar25 = 2;
      fVar6 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x28c) = fVar6;
      *(float *)((int)puVar11 + 0x284) = fVar6;
      *(float *)(puVar11 + 0x51) = fVar6;
      *(float *)(puVar11 + 0x50) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar11 + 0x284) = *(float *)((int)puVar11 + 0x284) * fVar7;
      *(float *)(puVar11 + 0x51) = *(float *)(puVar11 + 0x51) * fVar6;
      *(float *)((int)puVar11 + 0x28c) = *(float *)((int)puVar11 + 0x28c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar16 + 0x280) = *(float *)((int)lVar16 + 0x270) * fVar6 * fVar6;
        iVar18 = (int)lVar20;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xf0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar6 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x280) = *(float *)((int)lVar16 + 0x280) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar9 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x280)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
    }
    dVar26 = (double)FastSubRots(fVar2,(float)-dVar31);
    iVar9 = worldUpdateTime;
    iVar18 = *(int *)((int)pvVar8 + 0x74);
    puVar11[0x5c] = (longlong)(int)(animationSpeed * 90.5);
    if ((iVar9 - (iVar9 / *(int *)((int)puVar11 + 0x2e4)) * *(int *)((int)puVar11 + 0x2e4) == iVar18
        ) && (dVar37 = 0.03490658476948738, dVar26 < 0.03490658476948738)) {
      fVar2 = Cuboids[*(int *)((int)pvVar8 + 0x70)].pos.x - (moby->pos).x;
      fVar3 = Cuboids[*(int *)((int)pvVar8 + 0x70)].pos.y - (moby->pos).y;
      dVar31 = ABS((double)fVar2);
      dVar32 = ABS((double)fVar3);
      *(float *)(puVar11 + 0x36) = fVar2;
      *(float *)((int)puVar11 + 0x1b4) = fVar3;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar11 + 0x37) = (float)(dVar31 - dVar32);
      uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x37) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1b4) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)(puVar11 + 0x36));
      if ((double)*(float *)(puVar11 + 0x37) - dVar30 < 0.0) {
        dVar26 = dVar32;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar32 = ABS((double)*(float *)((int)puVar11 + 0x1b4));
      if ((double)*(float *)(puVar11 + 0x37) - dVar30 < 0.0) {
        dVar32 = dVar31;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x100;
        lVar20 = uVar14 - 0x110;
        lVar25 = 2;
        fVar6 = (float)(dVar32 - dVar26) / (float)(dVar32 + dVar26);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x26c) = fVar6;
        *(float *)((int)puVar11 + 0x264) = fVar6;
        *(float *)(puVar11 + 0x4d) = fVar6;
        *(float *)(puVar11 + 0x4c) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x264) = *(float *)((int)puVar11 + 0x264) * fVar7;
        *(float *)(puVar11 + 0x4d) = *(float *)(puVar11 + 0x4d) * fVar6;
        *(float *)((int)puVar11 + 0x26c) = *(float *)((int)puVar11 + 0x26c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x260) = *(float *)((int)lVar16 + 0x250) * fVar6 * fVar6;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x260) = *(float *)((int)lVar16 + 0x260) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x260)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
      }
      dVar26 = (double)FastSubRots(fVar2,(float)dVar31);
      fVar2 = g_FrameTime;
      if (dVar26 < dVar37) {
        dVar31 = 60.0;
        dVar37 = (double)SQRT((float)(dVar33 * dVar33 + dVar29));
        *(float *)((int)puVar11 + 0xfc) = (float)dVar38;
        *(float *)((int)puVar11 + 0x10c) = (float)dVar38;
        dVar38 = (double)(float)((double)(fVar2 * 60.0) / dVar37);
        dVar26 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar26 = (double)(float)(dVar38 * dVar36);
        }
        dVar29 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar29 = (double)(float)(dVar38 * dVar35);
        }
        dVar32 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar32 = (double)(float)(dVar38 * dVar33);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar26 = (double)(float)(dVar38 * dVar36);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar29 = (double)(float)(dVar38 * dVar35);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar32 = (double)(float)(dVar38 * dVar33);
        }
        *(float *)(puVar11 + 0x1e) = (float)dVar26;
        *(float *)((int)puVar11 + 0xf4) = (float)dVar29;
        *(float *)(puVar11 + 0x1f) = (float)dVar32;
        *(float *)(puVar11 + 0x20) = (float)(dVar26 + (double)*(float *)(puVar11 + 0x20));
        *(float *)((int)puVar11 + 0x104) =
             (float)(dVar29 + (double)*(float *)((int)puVar11 + 0x104));
        *(float *)(puVar11 + 0x21) = (float)(dVar32 + (double)*(float *)(puVar11 + 0x21));
        *(undefined4 *)((int)puVar11 + 0xbc) = 0;
        *(undefined4 *)(puVar11 + 0x17) = 0;
        *(undefined4 *)((int)puVar11 + 0xb4) = 0;
        *(undefined4 *)(puVar11 + 0x16) = 0;
        iVar18 = SpawnPart_27
                           (0x413339e000000000,uVar14 - 0x270,uVar14 - 0x2c0,0xffffffff80ff8f6f,3);
        if (iVar18 != 0) {
          cVar19 = FastDoubleToInt(0x4010000000000000);
          *(char *)(iVar18 + 9) = cVar19 + 'p';
        }
        PlayMobySound(0,0,moby);
        FUN_0025c7f8((double)(float)((double)g_FrameTime * dVar31),lVar15,
                     Cuboids + *(int *)((int)pvVar8 + 0x70),uVar14 - 0x2d0,
                     &Cuboids[*(int *)((int)pvVar8 + 0x70)].pos);
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (g_onMagnerail == 0) {
      if ((((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
          (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) &&
         (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 254.0)) {
        moby->state = '\x03';
      }
    }
    else {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      *(float *)(puVar11 + 0x10) = fVar2;
      fVar4 = (moby->pos).w;
      *(float *)((int)puVar11 + 0x84) = fVar3;
      *(f32 *)((int)puVar11 + 0x8c) = fVar4;
      pCVar13 = Cuboids;
      iVar18 = *(int *)((int)pvVar8 + 0x70);
      fVar5 = (moby->pos).z + 10.0;
      *(float *)(puVar11 + 0x11) = fVar5;
      fVar6 = pCVar13[iVar18].pos.x - fVar2;
      *(float *)(puVar11 + 0x12) = fVar6;
      fVar12 = pCVar13[iVar18].pos.y - fVar3;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      fVar7 = pCVar13[iVar18].pos.z - fVar5;
      *(float *)(puVar11 + 0x13) = fVar7;
      *(float *)((int)puVar11 + 0x9c) = pCVar13[iVar18].pos.w;
      *(float *)(puVar11 + 0x12) = fVar6 * 0.9 + fVar2;
      *(float *)((int)puVar11 + 0x94) = fVar12 * 0.9 + fVar3;
      *(float *)(puVar11 + 0x13) = fVar7 * 0.9 + fVar5 + 0.5;
      iVar18 = CollLine(uVar14 - 0x2f0,uVar14 - 0x2e0,2,lVar15,0);
      if (iVar18 == 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar8 + 0x20) = 0x41700000;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0xf;
    M347_003513e0(lVar15);
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x0352e28 (0x14 bytes)
void M347_00352e28(void)

{
  DAT_0084031c = 0x10000;
  return;
}



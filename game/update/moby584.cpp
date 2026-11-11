// game/update/moby584.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3d1d10-0x3d2488
#include "game/update/moby584.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03d1d10 (0x460 bytes)
// inlined: FastAtan2 @0x3d1e60, FastAtan2 @0x3d2004
MobyInstance * FUN_003d1d10(float *param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar20;
  ulonglong unaff_r29;
  MobyInstance *pMVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x100;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar14;
  puVar9[0x22] = in_LR;
  puVar9[0x1e] = in_f30;
  puVar9[0x1f] = in_f31;
  puVar9[0x1d] = unaff_r31;
  puVar9[0x1c] = unaff_r30;
  puVar9[0x1a] = unaff_r28;
  dVar27 = 0.0;
  puVar20 = *(ushort **)((int)&g_MobyGroups + (int)(param_3 << 2));
  puVar9[0x1b] = unaff_r29;
  puVar9[0x19] = unaff_r27;
  if (puVar20 == (ushort *)0x0) {
    pMVar21 = (MobyInstance *)0x0;
  }
  else {
    pMVar21 = (MobyInstance *)0x0;
    dVar28 = dVar27;
    do {
      pMVar13 = g_MobyInstance;
      uVar12 = *puVar20 & 0x7fff;
      if (g_MobyInstance[uVar12].oClass == THRUSTER_PACK_LOCK_GREEN) {
        fVar2 = *param_1;
        fVar3 = param_1[1];
        fVar7 = fVar2 - *param_2;
        fVar4 = fVar3 - param_2[1];
        dVar24 = ABS((double)fVar7);
        dVar25 = ABS((double)fVar4);
        *(float *)((int)puVar9 + 0x7c) = fVar7;
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar24 = dVar27;
        if (dVar27 < dVar23) {
          lVar15 = uVar14 - 0xf0;
          lVar17 = uVar14 - 0x48;
          lVar16 = uVar14 - 0x58;
          lVar22 = 2;
          fVar5 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0xb4) = fVar5;
          *(float *)((int)puVar9 + 0xac) = fVar5;
          *(float *)(puVar9 + 0x16) = fVar5;
          *(float *)(puVar9 + 0x15) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar6;
          *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar5;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar5 * fVar5;
            iVar10 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar17 = uVar14 - 0x58;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar1;
          lVar16 = lVar17;
          do {
            fVar5 = *pfVar18;
            fVar6 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar5;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
            lVar16 = lVar16 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar16 = 2;
          lVar15 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar15;
            iVar11 = (int)lVar17;
            lVar15 = lVar15 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar7 + fVar4);
        }
        fVar2 = fVar2 - pMVar13[uVar12].pos.x;
        fVar3 = fVar3 - pMVar13[uVar12].pos.y;
        dVar26 = ABS((double)fVar2);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xe) = fVar2;
        *(float *)((int)puVar9 + 0x74) = fVar3;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar26 = dVar27;
        if (dVar27 < dVar23) {
          lVar15 = uVar14 - 0xf0;
          lVar16 = uVar14 - 0x78;
          lVar17 = uVar14 - 0x68;
          lVar22 = 2;
          fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x94) = fVar7;
          *(float *)((int)puVar9 + 0x8c) = fVar7;
          *(float *)(puVar9 + 0x12) = fVar7;
          *(float *)(puVar9 + 0x11) = fVar7;
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar7;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar7 * fVar4;
          do {
            *(float *)((int)lVar15 + 0x88) = *(float *)((int)lVar15 + 0x78) * fVar7 * fVar7;
            iVar10 = (int)lVar16;
            lVar15 = lVar15 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar7 * fVar7;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = uVar14 - 0x78;
          pfVar18 = (float *)&DAT_007358e0;
          lVar22 = 4;
          lVar15 = lVar1;
          lVar16 = lVar17;
          do {
            fVar7 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x88) = *(float *)((int)lVar15 + 0x88) * fVar7;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
            lVar16 = lVar16 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar16 = 2;
          lVar15 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar15;
            lVar15 = lVar15 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x88)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar26 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar23 = (double)FastSubRots((float)dVar24,(float)dVar26);
        if (dVar28 < dVar23) {
          pMVar21 = g_MobyInstance + uVar12;
          dVar28 = dVar23;
        }
      }
      uVar8 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar8);
  }
  return pMVar21;
}


// 0x03d2178 (0xbc bytes)
MobyInstance * FUN_003d2178(float *param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 255.0;
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if ((pMVar7->oClass == THRUSTER_PACK_LOCK_GREEN) &&
         (fVar3 = param_1[1] - (pMVar7->pos).y, fVar4 = *param_1 - (pMVar7->pos).x,
         fVar5 = param_1[2] - (pMVar7->pos).z,
         fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), fVar3 < fVar1)) {
        fVar1 = fVar3;
        pMVar8 = pMVar7;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}


// 0x03d2234 (0x6c bytes)
void FUN_003d2234(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  pMVar3 = g_MobyInstance;
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      if (pMVar3[*puVar4 & 0x7fff].oClass == THRUSTER_PACK_LOCK_GREEN) {
        pvVar2 = pMVar3[*puVar4 & 0x7fff].pVar;
        *(undefined4 *)((int)pvVar2 + 0x30) = 1;
        *(undefined4 *)((int)pvVar2 + 0x24) = 0x3fc00000;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03d22a0 (0x18 bytes)
void FUN_003d22a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x2c) = 5;
  *(undefined4 *)(iVar1 + 0x24) = 0x3fc00000;
  return;
}


// 0x03d22b8 (0x14 bytes)
void M584_003d22b8(void)

{
  DAT_00846588 = 0x10000;
  return;
}


// 0x03d22d0 (0xd8 bytes)
MobyInstance *
M584_003d22d0
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  MobyInstance *pMVar3;
  undefined8 uVar2;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = CreateMoby(YELLOW_PLATFORM);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x03d23a8 (0xe0 bytes)
/* Moby 584 */

void UpdateMoby_584(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  Vec4 local_20;
  
  lVar2 = (longlong)(int)moby + 0x40;
  pvVar1 = moby->pVar;
  local_20.x = (moby->pos).x - *(float *)((int)pvVar1 + 0xa0);
  local_20.y = (moby->pos).y - *(float *)((int)pvVar1 + 0xa4);
  local_20.z = (moby->pos).z - *(float *)((int)pvVar1 + 0xa8);
  local_20.w = (moby->pos).w;
  MB_GetOrientation((MobyInstance *)((int)pvVar1 + 0x60),&local_20,lVar2,lVar2);
  *(f32 *)((int)pvVar1 + 0xa0) = (moby->pos).x;
  *(f32 *)((int)pvVar1 + 0xa4) = (moby->pos).y;
  *(f32 *)((int)pvVar1 + 0xa8) = (moby->pos).z;
  *(f32 *)((int)pvVar1 + 0xac) = (moby->pos).w;
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined2 *)((int)pvVar1 + 0x24) = 0;
    *(undefined1 *)((int)pvVar1 + 0x28) = 4;
    *(undefined2 *)((int)pvVar1 + 0x3e) = 0xd;
    MB_CopyHeroLights((longlong)(int)moby);
    moby->state = '\x01';
  }
  return;
}



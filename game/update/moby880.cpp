// game/update/moby880.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x49fb70-0x4a0760
#include "game/update/moby880.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x049fb70 (0x14 bytes)
void M880_0049fb70(void)

{
  DAT_008cbd8c = 0x10000;
  return;
}


// 0x049fba0 (0x56c bytes)
// inlined: FastAtan2 @0x49fccc, FastAtan2 @0x49fe58, FastRSqrt @0x49fffc
MobyInstance * FUN_0049fba0(f32 *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  MobyInstance *pMVar14;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x24] = in_LR;
  puVar6[0x21] = unaff_r31;
  puVar6[0x1f] = unaff_r29;
  puVar6[0x1e] = unaff_r28;
  puVar6[0x20] = unaff_r30;
  puVar6[0x1d] = unaff_r27;
  puVar6[0x1c] = unaff_r26;
  pMVar14 = CreateMoby(DOOR_LEFT|EXPLOSION_0070);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_2[2];
    pvVar5 = pMVar14->pVar;
    fVar2 = ABS(param_2[2]);
    fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x84) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x84));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 100;
      lVar17 = uVar11 - 0x54;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x17) = fVar4;
      *(float *)(puVar6 + 0x16) = fVar4;
      *(float *)((int)puVar6 + 0xb4) = fVar4;
      *(float *)((int)puVar6 + 0xac) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2;
      *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar4;
      *(float *)(puVar6 + 0x17) = *(float *)(puVar6 + 0x17) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0xac) = *(float *)((int)lVar12 + 0x9c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0xac) = *(float *)((int)lVar12 + 0xac) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar12 = lVar13;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0xac) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).y = -fVar10;
    fVar4 = *param_2;
    fVar3 = param_2[1];
    fVar1 = ABS(*param_2);
    fVar2 = ABS(param_2[1]);
    *(float *)(puVar6 + 0x10) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar3 >> 0x1d) & 4;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x100;
      lVar17 = uVar11 - 0x74;
      lVar16 = uVar11 - 0x84;
      lVar19 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x13) = fVar4;
      *(float *)(puVar6 + 0x12) = fVar4;
      *(float *)((int)puVar6 + 0x94) = fVar4;
      *(float *)((int)puVar6 + 0x8c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar2;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar4;
      *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar4 * fVar4;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar11 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar12 = 2;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x8c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar10;
    (pMVar14->pos).x = *param_1;
    (pMVar14->pos).y = param_1[1];
    (pMVar14->pos).z = param_1[2];
    (pMVar14->pos).w = param_1[3];
    *(f32 *)((int)pvVar5 + 0x40) = *param_1;
    *(f32 *)((int)pvVar5 + 0x44) = param_1[1];
    *(f32 *)((int)pvVar5 + 0x48) = param_1[2];
    *(f32 *)((int)pvVar5 + 0x4c) = param_1[3];
    fVar4 = *param_2;
    *(float *)((int)pvVar5 + 0x30) = fVar4;
    *(float *)((int)pvVar5 + 0x34) = param_2[1];
    *(float *)((int)pvVar5 + 0x38) = param_2[2];
    *(float *)((int)pvVar5 + 0x3c) = param_2[3];
    *(float *)(puVar6 + 0xe) = fVar4;
    fVar3 = *(float *)((int)pvVar5 + 0x34);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)((int)pvVar5 + 0x38);
    fVar1 = fVar4 * fVar4 + fVar3 * fVar3;
    *(undefined4 *)((int)puVar6 + 0x7c) = *(undefined4 *)((int)pvVar5 + 0x3c);
    fVar2 = fVar9;
    if (SQRT(fVar1) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar1);
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar1 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar2 = fVar4 * fVar9;
      fVar9 = fVar3 * fVar9;
    }
    *(float *)(puVar6 + 0xe) = fVar2;
    *(float *)((int)puVar6 + 0x74) = fVar9;
    *(undefined4 *)(puVar6 + 0xf) = 0x3f800000;
    SetCollDamIn(0x3ff0000000000000,pvVar5,pMVar14,0x10001,0x3f800000,uVar11 - 0xa0);
    *(undefined1 *)((int)pvVar5 + 0x18) = 1;
    *(undefined1 *)((int)pvVar5 + 0x19) = 1;
    puVar6[0x1a] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xd4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    *(undefined4 *)((int)pvVar5 + 0x50) = param_3;
    *(undefined4 *)((int)pvVar5 + 0x54) = param_4;
    pMVar14->alpha = '\x10';
    UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}


// 0x04a0148 (0x618 bytes)
/* Moby 880 */

void UpdateMoby_880(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  undefined8 uVar8;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  undefined4 local_a0 [8];
  
  pvVar5 = moby->pVar;
  fVar2 = (moby->pos).x + *(float *)((int)pvVar5 + 0x30);
  (moby->pos).x = fVar2;
  fVar3 = (moby->pos).y + *(float *)((int)pvVar5 + 0x34);
  (moby->pos).y = fVar3;
  fVar4 = (moby->pos).z + *(float *)((int)pvVar5 + 0x38);
  (moby->pos).z = fVar4;
  fVar7 = fVar3 - *(float *)((int)pvVar5 + 0x44);
  fVar6 = fVar2 - *(float *)((int)pvVar5 + 0x40);
  if (SQRT(fVar6 * fVar6 + fVar7 * fVar7) <= 30.0) {
    if ((moby->enabled != '\0') ||
       (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) < 30.0)) {
      lVar10 = (longlong)(int)moby + 0x10;
      iVar9 = CollLine(local_d0,lVar10,
                                 (ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar5 + 0x54)) << 0x20)
                                 >> 0x25,*(undefined4 *)((int)pvVar5 + 0x50),pvVar5);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      if (iVar9 != 0) {
        (moby->pos).x = g_CollOutput.ip.x;
        cVar1 = moby->enabled;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        if (cVar1 != '\0') {
          iVar9 = 0;
          dVar11 = -1.0;
          dVar12 = 1.0;
          dVar14 = 3.0;
          dVar16 = 6.0;
          dVar13 = 10.5;
          dVar15 = 15.5;
          uVar17 = 0x40dd4c0000000000;
          do {
            MB_randRangeFloat((float)dVar11,(float)dVar12);
            MB_randRangeFloat((float)dVar11,(float)dVar12);
            MB_randRangeFloat((float)dVar11,(float)dVar12);
            FastVecNormalize(local_a0,(int)pvVar5 + 0x30,0xa10980);
            MB_randRangeFloat
                      ((float)((double)g_FrameTime * dVar14),
                       (float)((double)g_FrameTime * dVar16));
            uVar8 = MB_randRange
                              ((int)((double)animationSpeed * dVar13),
                               (int)((double)animationSpeed * dVar15));
            SpawnPart_27(uVar17,lVar10,local_b0,0x7f2f4f6f,uVar8);
            iVar9 = iVar9 + 1;
          } while (iVar9 < 5);
        }
        PlayMobySound(0,0,moby);
        DeleteMoby(moby);
        return;
      }
    }
    if ((((fVar2 < 2.0) || (1021.0 < fVar2)) || (fVar3 < 2.0)) ||
       (((1021.0 < fVar3 || (fVar4 < 2.0)) || (1021.0 < fVar4)))) {
      DeleteMoby(moby);
    }
  }
  else {
    if (moby->enabled != '\0') {
      iVar9 = 0;
      dVar11 = -1.0;
      dVar12 = 1.0;
      dVar14 = 2.0;
      dVar16 = 4.0;
      do {
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar14),
                   (float)((double)g_FrameTime * dVar16));
        SpawnPart_51((longlong)(int)moby + 0x10,local_c0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
    }
    DeleteMoby(moby);
  }
  return;
}



// game/update/moby826.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x479538-0x479878
#include "game/update/moby826.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0479538 (0x340 bytes)
// inlined: FastAtan2 @0x4796b4
/* Moby 826 */

void UpdateMoby_826(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  KickVars *kv;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar11;
  longlong lVar10;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xc0;
  puVar7 = (ulonglong *)lVar10;
  *puVar7 = uVar9;
  puVar7[0x1a] = in_LR;
  puVar7[0x17] = unaff_r31;
  bVar1 = moby->state;
  puVar7[0x16] = unaff_r30;
  kv = (KickVars *)moby->pVar;
  if (bVar1 == 0) {
    iVar11 = MB_damage(moby,0x330000,0);
    if (iVar11 != 0) {
      kv->zOfs = 0.5;
      fVar3 = DAT_00877af0 * g_FrameTimeSq;
      kv->drag = 0.0005;
      kv->radius = 0x200;
      kv->grav = fVar3;
      fVar3 = g_FrameTime;
      kv->xySpeed = DAT_00877af4 * g_FrameTime;
      fVar4 = DAT_00877af8;
      kv->type = '\0';
      uVar12 = DAT_010d99e4;
      kv->peakFrame = 3.0;
      *(undefined4 *)&kv->field_0x54 = 0x41100000;
      kv->flag = uVar12 & 0x10 | 9;
      kv->zSpeed = fVar4 * fVar3;
      uVar12 = *(uint *)(iVar11 + 0x10);
      uVar6 = *(uint *)(iVar11 + 0x14);
      fVar2 = ABS(*(float *)(iVar11 + 0x10));
      fVar4 = ABS(*(float *)(iVar11 + 0x14));
      *(float *)(puVar7 + 0xe) = fVar2 - fVar4;
      dVar19 = 0.0;
      uVar14 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)(uVar6 >> 0x1d) & 4;
      lVar13 = uVar14 << 2;
      fVar3 = fVar2;
      if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
      if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
        fVar4 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      if (0.0 < fVar3) {
        lVar16 = uVar9 - 0xb0;
        lVar15 = uVar9 - 0x4c;
        lVar13 = uVar9 - 0x3c;
        lVar18 = 2;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x10) = fVar3;
        *(float *)(puVar7 + 0xf) = fVar3;
        *(float *)((int)puVar7 + 0x7c) = fVar3;
        *(float *)((int)puVar7 + 0x74) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar4;
        *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar3;
        *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar3 * fVar3;
          iVar11 = (int)lVar15;
          lVar16 = lVar16 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar13 = lVar13 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar16 = uVar9 - 0x4c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar18 = 4;
        lVar13 = lVar16;
        lVar15 = lVar10;
        do {
          fVar3 = *pfVar17;
          fVar4 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar3;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar13 = 2;
        lVar15 = 2;
        do {
          iVar11 = (int)lVar10;
          lVar10 = lVar10 + 0x10;
          iVar8 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar11 + 0x74)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar2);
      }
      MB_StartKick(dVar19,moby,kv,lVar13,1,1,0);
      moby->state = '\x01';
      moby->damage = -1;
    }
  }
  else if (bVar1 < 2) {
    uVar12 = MB_UpdateKick(moby,kv);
    if (((uVar12 & 0x40) != 0) && (moby->state = '\0', moby->animationId != '\0')) {
      puVar7[0x13] = (longlong)(int)(animationSpeed * 5.5);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar7 + 0x9c));
    }
    moby->damage = -1;
  }
  return;
}



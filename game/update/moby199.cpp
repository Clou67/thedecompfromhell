// game/update/moby199.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2e5628-0x2e6760
#include "game/update/moby199.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02e5628 (0x14 bytes)
void M199_002e5628(void)

{
  DAT_007fe93c = 0x10000;
  return;
}


// 0x02e5698 (0x10b4 bytes)
// inlined: FastAtan2 @0x2e57e8, FastAtan2 @0x2e5b34, FastAtan2 @0x2e5e9c, FastAtan2 @0x2e6120, FastAtan2 @0x2e6458
/* Moby 199 */

void UpdateMoby_199(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  KickVars *kv;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyInstance *victim;
  int iVar15;
  ulonglong uVar11;
  u8 uVar17;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar16;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1e0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x3e] = in_LR;
  puVar6[0x3a] = in_f30;
  puVar6[0x3b] = in_f31;
  puVar6[0x39] = unaff_r31;
  puVar6[0x38] = unaff_r30;
  puVar6[0x37] = unaff_r29;
  puVar6[0x36] = unaff_r28;
  kv = (KickVars *)moby->pVar;
  iVar15 = MB_damage(moby,0x10000,0);
  uVar17 = moby->state;
  if ((iVar15 != 0) && (uVar17 != 'c')) {
    kv->grav = 0.008;
    kv->zSpeed = 0.2;
    kv->drag = 0.0005;
    kv->xySpeed = 0.125;
    kv->type = '\0';
    fVar2 = (moby->pos).x - g_heroPosition.x;
    fVar1 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x20) = fVar2;
    *(float *)((int)puVar6 + 0x104) = fVar1;
    *(float *)(puVar6 + 0x21) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar6 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x104) >> 0x1d) & 4;
    uVar20 = uVar11 << 2 | 0x735900;
    fVar2 = ABS(*(float *)(puVar6 + 0x20));
    if (*(float *)(puVar6 + 0x21) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar1 = *(float *)((int)uVar20 + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0x104));
    if (*(float *)(puVar6 + 0x21) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar21 = uVar12 - 0x44;
      lVar18 = uVar12 - 0x54;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x33) = fVar2;
      *(float *)(puVar6 + 0x32) = fVar2;
      *(float *)((int)puVar6 + 0x194) = fVar2;
      *(float *)((int)puVar6 + 0x18c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x32) = *(float *)(puVar6 + 0x32) * fVar3;
      *(float *)((int)puVar6 + 0x194) = *(float *)((int)puVar6 + 0x194) * fVar2;
      *(float *)(puVar6 + 0x33) = *(float *)(puVar6 + 0x33) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x18c) = *(float *)((int)lVar13 + 0x17c) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 4;
      uVar11 = uVar12 - 0x54;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      uVar20 = uVar11;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x18c) = *(float *)((int)lVar13 + 0x18c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)uVar20 + 4) = *(float *)((int)uVar20 + 4) * fVar3;
        uVar20 = uVar20 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 2;
      lVar13 = lVar14;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar7 = (int)uVar11;
        uVar11 = uVar11 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 0x18c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    MB_StartKick(dVar24,moby,kv,uVar20,3,5,0);
    uVar17 = 'c';
    moby->state = 'c';
  }
  moby->damage = -1;
  if (uVar17 == 'c') {
    uVar16 = MB_UpdateKick(moby,kv);
    if ((uVar16 & 0x40) != 0) {
      moby->state = 0xfd;
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar17 == '\x04') {
    fVar2 = kv[1].peakFrame - (moby->pos).x;
    fVar1 = *(float *)&kv[1].field_0x54 - (moby->pos).y;
    pfVar19 = (float *)&g_atanQuadrantTable;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x1a) = fVar2;
    *(float *)((int)puVar6 + 0xd4) = fVar1;
    *(float *)(puVar6 + 0x1b) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar6 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xd4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x1a));
    if (*(float *)(puVar6 + 0x1b) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0xd4));
    if (*(float *)(puVar6 + 0x1b) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar21 = uVar12 - 0xc4;
      lVar18 = uVar12 - 0xd4;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x23) = fVar2;
      *(float *)(puVar6 + 0x22) = fVar2;
      *(float *)((int)puVar6 + 0x114) = fVar2;
      *(float *)((int)puVar6 + 0x10c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x22) = *(float *)(puVar6 + 0x22) * fVar3;
      *(float *)((int)puVar6 + 0x114) = *(float *)((int)puVar6 + 0x114) * fVar2;
      *(float *)(puVar6 + 0x23) = *(float *)(puVar6 + 0x23) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x10c) = *(float *)((int)lVar13 + 0xfc) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0xd4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x10c) = *(float *)((int)lVar13 + 0x10c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar7 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 0x10c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    OrganicDeltAngSpeed
              (dVar24,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar19,kv + 2);
    fVar2 = (moby->rotation).z;
    fVar1 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    dVar24 = 2.0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    fVar3 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar3;
    *(float *)((int)puVar6 + 0xb4) =
         (fVar1 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 2.0;
    *(float *)(puVar6 + 0x16) =
         (fVar4 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(kv + 1),puVar6 + 0x16,puVar6 + 0x18);
    fVar2 = (moby->pos).y - *(float *)&kv[1].field_0x54;
    fVar1 = (moby->pos).x - kv[1].peakFrame;
    if (((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2) < dVar24) &&
       (moby->state = '\x01', moby->animationId != '\x01')) {
      MB_SetAnimation(moby,1,0,3);
    }
    if ((moby->setByGroup == '\x01') && (moby->state = '\x02', moby->animationId != '\0')) {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\x03') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar1 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x1d) = fVar2;
    *(float *)((int)puVar6 + 0xec) = fVar1;
    *(float *)(puVar6 + 0x1e) = fVar3 - fVar4;
    dVar24 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar6 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xec) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x1d));
    if (*(float *)(puVar6 + 0x1e) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar6 + 0xec));
    if (*(float *)(puVar6 + 0x1e) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar27 = dVar24;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar18 = uVar12 - 0x94;
      lVar21 = uVar12 - 0x84;
      lVar22 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x2b) = fVar2;
      *(float *)(puVar6 + 0x2a) = fVar2;
      *(float *)((int)puVar6 + 0x154) = fVar2;
      *(float *)((int)puVar6 + 0x14c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar3;
      *(float *)((int)puVar6 + 0x154) = *(float *)((int)puVar6 + 0x154) * fVar2;
      *(float *)(puVar6 + 0x2b) = *(float *)(puVar6 + 0x2b) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x14c) = *(float *)((int)lVar13 + 0x13c) * fVar2 * fVar2;
        iVar15 = (int)lVar18;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x14c) = *(float *)((int)lVar13 + 0x14c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar13 = lVar14;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar7 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x14c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
    }
    OrganicDeltAngSpeed
              (dVar27,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_002e5640,
               kv + 2);
    if ((moby->updateId == moby->animationId) &&
       (dVar27 = (double)BlendAnimFrame(moby), 16.0 <= dVar27)) {
      dVar27 = (double)BlendAnimFrame(moby);
      fVar2 = (moby->rotation).z;
      if ((dVar27 < 21.0) &&
         (dVar27 = 0.20000000298023224, ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
        fVar1 = (moby->pos).y;
        fVar4 = (moby->pos).x;
        fVar3 = fVar1 - g_heroPosition.y;
        fVar5 = fVar4 - g_heroPosition.x;
        if (SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 2.0) {
          fVar4 = g_heroPosition.x - fVar4;
          fVar1 = g_heroPosition.y - fVar1;
          dVar23 = ABS((double)fVar4);
          dVar25 = ABS((double)fVar1);
          *(float *)((int)puVar6 + 0xdc) = fVar4;
          *(float *)(puVar6 + 0x1c) = fVar1;
          *(float *)((int)puVar6 + 0xe4) = (float)(dVar23 - dVar25);
          uVar20 = (ulonglong)(*(uint *)((int)puVar6 + 0xdc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar6 + 0xe4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar6 + 0x1c) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar6 + 0xdc));
          if ((double)*(float *)((int)puVar6 + 0xe4) - dVar24 < 0.0) {
            dVar26 = dVar25;
          }
          fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)(puVar6 + 0x1c));
          if ((double)*(float *)((int)puVar6 + 0xe4) - dVar24 < 0.0) {
            dVar25 = dVar23;
          }
          fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar24 < dVar26) {
            lVar13 = uVar12 - 0x1d0;
            lVar21 = uVar12 - 0xa4;
            lVar18 = uVar12 - 0xb4;
            lVar22 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar6 + 0x27) = fVar3;
            *(float *)(puVar6 + 0x26) = fVar3;
            *(float *)((int)puVar6 + 0x134) = fVar3;
            *(float *)((int)puVar6 + 300) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar6 + 0x26) = *(float *)(puVar6 + 0x26) * fVar5;
            *(float *)((int)puVar6 + 0x134) = *(float *)((int)puVar6 + 0x134) * fVar3;
            *(float *)(puVar6 + 0x27) = *(float *)(puVar6 + 0x27) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar13 + 300) = *(float *)((int)lVar13 + 0x11c) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar21 = uVar12 - 0xb4;
            pfVar19 = (float *)&DAT_007358e0;
            lVar13 = lVar14;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar5 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar13 + 300) = *(float *)((int)lVar13 + 300) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
              lVar18 = lVar18 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar13 = 2;
            do {
              iVar15 = (int)lVar14;
              iVar7 = (int)lVar21;
              lVar14 = lVar14 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar15 + 300)) +
                                *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                               *(float *)(iVar7 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar1 + fVar4);
          }
          dVar24 = (double)FastSubRots((float)dVar24,fVar2);
          victim = g_heroMobyPtr;
          if (dVar24 < 0.2617993950843811) {
            fVar2 = (moby->rotation).z;
            fVar1 = fVar2 + 1.5707963;
            fVar4 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar4 = fVar2;
            }
            fVar3 = 3.1415925 - fVar1;
            if (fVar1 - (3.1415925 - fVar1) < 0.0) {
              fVar3 = fVar1;
            }
            fVar5 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
              fVar5 = fVar4;
            }
            *(undefined4 *)(puVar6 + 0x13) = 0;
            fVar2 = -3.1415925 - fVar1;
            if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
              fVar2 = fVar3;
            }
            fVar1 = fVar5 * fVar5;
            fVar4 = fVar2 * fVar2;
            fVar9 = fVar1 * fVar1 * fVar5;
            fVar3 = fVar4 * fVar4 * fVar2;
            fVar10 = fVar1 * fVar9;
            fVar8 = fVar4 * fVar3;
            *(float *)((int)puVar6 + 0x94) =
                 (float)((double)(fVar1 * fVar10 * 2.601887e-06 +
                                 fVar10 * -0.0001980741 +
                                 fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) *
                        dVar27);
            *(float *)(puVar6 + 0x12) =
                 (float)((double)(fVar4 * fVar8 * 2.601887e-06 +
                                 fVar8 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
                        dVar27);
            *(f32 *)(puVar6 + 0x14) = (victim->pos).x;
            *(f32 *)((int)puVar6 + 0xa4) = (victim->pos).y;
            fVar2 = (victim->pos).z;
            *(float *)(puVar6 + 0x15) = fVar2;
            *(f32 *)((int)puVar6 + 0xac) = (victim->pos).w;
            *(float *)(puVar6 + 0x15) = fVar2 + 0.75;
            CollDamageMobyDirect
                      (1.0,victim,moby,1,0x2e5640,(float *)(puVar6 + 0x14),(float *)(puVar6 + 0x12))
            ;
          }
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0')) {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\x02') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar1 = g_heroPosition.y - (moby->pos).y;
    pfVar19 = (float *)&g_atanQuadrantTable;
    fVar4 = ABS(fVar2);
    fVar3 = ABS(fVar1);
    *(float *)((int)puVar6 + 0xf4) = fVar2;
    *(float *)(puVar6 + 0x1f) = fVar1;
    *(float *)((int)puVar6 + 0xfc) = fVar4 - fVar3;
    fVar2 = 0.0;
    uVar20 = (ulonglong)(*(uint *)((int)puVar6 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 0x1f) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar6 + 0xf4));
    if (*(float *)((int)puVar6 + 0xfc) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar6 + 0x1f));
    if (*(float *)((int)puVar6 + 0xfc) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar1) {
      lVar13 = uVar12 - 0x1d0;
      lVar18 = uVar12 - 0x74;
      lVar21 = uVar12 - 100;
      lVar22 = 2;
      fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar6 + 0x2f) = fVar1;
      *(float *)(puVar6 + 0x2e) = fVar1;
      *(float *)((int)puVar6 + 0x174) = fVar1;
      *(float *)((int)puVar6 + 0x16c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar4;
      *(float *)((int)puVar6 + 0x174) = *(float *)((int)puVar6 + 0x174) * fVar1;
      *(float *)(puVar6 + 0x2f) = *(float *)(puVar6 + 0x2f) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x16c) = *(float *)((int)lVar13 + 0x15c) * fVar1 * fVar1;
        iVar15 = (int)lVar18;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar1 * fVar1;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar18 = lVar21;
      do {
        fVar1 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x16c) = *(float *)((int)lVar13 + 0x16c) * fVar1;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar7 = (int)lVar21;
        lVar14 = lVar14 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x16c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar3;
    }
    dVar24 = 0.10000000149011612;
    OrganicDeltAngSpeed
              ((double)(fVar2 + kv[2].kickVel[1]),0x3f947ae140000000,0x3fd3333340000000,
               0x3fb99999a0000000,moby,pfVar19,kv + 2);
    fVar2 = (moby->rotation).z;
    fVar1 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    dVar27 = 2.0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    fVar3 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar3;
    *(float *)((int)puVar6 + 0x74) =
         (fVar1 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 2.0;
    *(float *)(puVar6 + 0xe) =
         (fVar4 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(kv + 1),puVar6 + 0xe,puVar6 + 0x10);
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar1 = (moby->pos).x - g_heroPosition.x;
    if (((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2) < dVar27) &&
       (moby->state = '\x03', moby->animationId != '\x02')) {
      MB_SetAnimation(moby,2,0,3);
    }
    if (dVar24 < (double)((moby->pos).z - *(float *)&kv[1].field_0x58)) {
      moby->state = '\x01';
    }
    if (moby->setByGroup == '\x02') {
      moby->state = '\x04';
    }
  }
  else if (uVar17 == '\x01') {
    if ((moby->setByGroup == '\x01') && (moby->state = '\x02', moby->animationId != '\0')) {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar17 == '\0') {
    fVar2 = moby->pClass->gScale;
    moby->state = '\x01';
    moby->scale = fVar2 * 0.5;
    uVar12 = MB_randInt(0xff);
    if ((uVar12 & 1) != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    MB_InitDefaultParams(kv[1].kickVel);
    kv[1].kickVel[3] = 2.0;
    kv[1].kickVel[0] = 1.27378e-42;
    kv[1].flag = (int)(DAT_0071f408 * 0.15);
    dVar24 = (double)MB_randRangeFloat(-0.7853982,0.7853982);
    kv[2].kickVel[1] = (float)dVar24;
    kv[1].peakFrame = (moby->pos).x;
    *(f32 *)&kv[1].field_0x54 = (moby->pos).y;
    *(f32 *)&kv[1].field_0x58 = (moby->pos).z;
    *(f32 *)&kv[1].field_0x5c = (moby->pos).w;
    if (moby->animationId != '\x01') {
      MB_SetAnimation(moby,1,0,3);
    }
  }
  return;
}


// 0x02e674c (0x14 bytes)
void M199_002e674c(void)

{
  DAT_007fe9ac = 0x10000;
  return;
}



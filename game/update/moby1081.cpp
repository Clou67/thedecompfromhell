// game/update/moby1081.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1b83a8-0x1b971c
#include "game/update/moby1081.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01b83a8 (0x14 bytes)
void M1081_001b83a8(void)

{
  DAT_00758028 = 0x10000;
  return;
}


// 0x01b8400 (0x131c bytes)
// inlined: FastAtan2 @0x1b863c, FastAtan2 @0x1b8a0c, FastAtan2 @0x1b8c54, FastAtan2 @0x1b8e60, FastAtan2 @0x1b9114, FastAtan2 @0x1b9360, FastAtan2 @0x1b956c
/* Moby 1081 */

void UpdateMoby_1081(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1f0;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar16;
  puVar9[0x40] = in_LR;
  puVar9[0x3c] = in_f30;
  puVar9[0x3d] = in_f31;
  puVar9[0x3b] = unaff_r31;
  puVar9[0x38] = unaff_r28;
  puVar9[0x3a] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  *pfVar8 = g_heroPosition.x;
  pfVar8[1] = g_heroPosition.y;
  pfVar8[2] = g_heroPosition.z;
  pfVar8[3] = g_heroPosition.w;
  uVar1 = moby->state;
  puVar9[0x39] = unaff_r29;
  if (uVar1 == '\x05') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = pfVar8[(int)pfVar8[0x4d] * 4 + 0x44] - (moby->pos).x;
    fVar3 = pfVar8[(int)pfVar8[0x4d] * 4 + 0x45] - (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar6 = ABS(fVar3);
    *(float *)(puVar9 + 0x17) = fVar2;
    *(float *)((int)puVar9 + 0xbc) = fVar3;
    *(float *)(puVar9 + 0x18) = fVar5 - fVar6;
    fVar2 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar9 + 0x17));
    if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar9 + 0xbc));
    if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    if (0.0 < fVar3) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 0x6c;
      lVar21 = uVar16 - 0x5c;
      lVar23 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x32) = fVar3;
      *(float *)(puVar9 + 0x31) = fVar3;
      *(float *)((int)puVar9 + 0x18c) = fVar3;
      *(float *)((int)puVar9 + 0x184) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x31) = *(float *)(puVar9 + 0x31) * fVar5;
      *(float *)((int)puVar9 + 0x18c) = *(float *)((int)puVar9 + 0x18c) * fVar3;
      *(float *)(puVar9 + 0x32) = *(float *)(puVar9 + 0x32) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x184) = *(float *)((int)lVar18 + 0x174) * fVar3 * fVar3;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0x6c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar3 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x184) = *(float *)((int)lVar18 + 0x184) * fVar3;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x184) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar6;
    }
    fVar3 = DAT_00758070 * 0.017453292 * g_FrameTimeSq;
    OrganicDeltAng
              (fVar2,fVar3,fVar3,DAT_00758074 * 0.017453292 * g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    fVar2 = (moby->rotation).z;
    fVar3 = fVar2 + 1.5707963;
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar4 = fVar5;
    }
    fVar2 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar2 = fVar6;
    }
    fVar5 = fVar4 * fVar4;
    fVar15 = g_FrameTime * 4.0;
    fVar6 = fVar2 * fVar2;
    fVar13 = fVar5 * fVar5 * fVar4;
    fVar3 = pfVar8[0x4d];
    fVar7 = fVar6 * fVar6 * fVar2;
    fVar14 = fVar5 * fVar13;
    fVar12 = fVar6 * fVar7;
    (moby->pos).y =
         fVar15 * (fVar5 * fVar14 * 2.601887e-06 +
                  fVar14 * -0.0001980741 +
                  fVar13 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) + (moby->pos).y;
    (moby->pos).x =
         fVar15 * (fVar6 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar7 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2) + (moby->pos).x;
    *pfVar8 = pfVar8[(int)fVar3 * 4 + 0x44];
    pfVar8[1] = pfVar8[(int)fVar3 * 4 + 0x45];
    pfVar8[2] = pfVar8[(int)fVar3 * 4 + 0x46];
    pfVar8[3] = pfVar8[(int)fVar3 * 4 + 0x47];
    fVar2 = (moby->pos).y - pfVar8[(int)fVar3 * 4 + 0x45];
    fVar6 = (moby->pos).z - pfVar8[(int)fVar3 * 4 + 0x46];
    fVar5 = (moby->pos).x - pfVar8[(int)fVar3 * 4 + 0x44];
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2) < 1.0) {
      pfVar8[0x4d] = (float)((int)fVar3 + 1U & 1);
    }
  }
  else if (uVar1 == '\x04') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar6 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar6 - fVar5;
    dVar24 = 0.0;
    uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0x7c));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    dVar25 = dVar24;
    if (0.0 < fVar2) {
      lVar18 = uVar16 - 0x1e0;
      lVar21 = uVar16 - 0xfc;
      lVar20 = uVar16 - 0x10c;
      lVar23 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar9 + 0x1e) = fVar2;
      *(float *)(puVar9 + 0x1d) = fVar2;
      *(float *)((int)puVar9 + 0xec) = fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar6;
      *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar2;
      *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar18 + 0xe4) = *(float *)((int)lVar18 + 0xd4) * fVar2 * fVar2;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0x10c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar2 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0xe4) = *(float *)((int)lVar18 + 0xe4) * fVar2;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar19;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0xe4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar28 = 0.01745329238474369;
    fVar2 = DAT_00758070 * 0.017453292 * g_FrameTimeSq;
    OrganicDeltAng
              ((float)dVar25,fVar2,fVar2,DAT_00758074 * 0.017453292 * g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    *(undefined1 *)((int)pfVar8 + 0x1f) = 2;
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    dVar26 = ABS((double)fVar2);
    dVar27 = ABS((double)fVar3);
    *(float *)(puVar9 + 0xe) = fVar2;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar27);
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0xe));
    if ((double)*(float *)(puVar9 + 0xf) - dVar24 < 0.0) {
      dVar25 = dVar27;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar9 + 0x74));
    if ((double)*(float *)(puVar9 + 0xf) - dVar24 < 0.0) {
      dVar27 = dVar26;
    }
    fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (dVar24 < dVar25) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 300;
      lVar21 = uVar16 - 0x11c;
      lVar23 = 2;
      fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1a) = fVar6;
      *(float *)(puVar9 + 0x19) = fVar6;
      *(float *)((int)puVar9 + 0xcc) = fVar6;
      *(float *)((int)puVar9 + 0xc4) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
      *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar6;
      *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar18 + 0xc4) = *(float *)((int)lVar18 + 0xb4) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 300;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar6 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0xc4) = *(float *)((int)lVar18 + 0xc4) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0xc4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar5);
    }
    dVar24 = (double)FastSubRots(fVar2,(float)dVar24);
    if (dVar24 < dVar28) {
      pfVar8[0x4c] = 0.0;
      moby->state = '\x03';
      if (moby->animationId != '\x02') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 2;
    fVar2 = (moby->rotation).z;
    if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass != WRENCH_0047)
       ) {
      fVar3 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar4 = ABS(fVar6);
      *(float *)(puVar9 + 0x11) = fVar3;
      *(float *)((int)puVar9 + 0x8c) = fVar6;
      *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
      fVar3 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar9 + 0x11));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar9 + 0x8c));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        fVar12 = fVar5;
      }
      if (0.0 < fVar6) {
        lVar18 = uVar16 - 0x1e0;
        lVar20 = uVar16 - 0xec;
        lVar21 = uVar16 - 0xdc;
        lVar23 = 2;
        fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x22) = fVar5;
        *(float *)(puVar9 + 0x21) = fVar5;
        *(float *)((int)puVar9 + 0x10c) = fVar5;
        *(float *)((int)puVar9 + 0x104) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar6;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar5;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x104) = *(float *)((int)lVar18 + 0xf4) * fVar5 * fVar5;
          iVar10 = (int)lVar20;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar21 = uVar16 - 0xec;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x104) = *(float *)((int)lVar18 + 0x104) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar18 = 2;
        do {
          iVar10 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar11 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar10 + 0x104) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar24 = (double)FastSubRots(fVar2,fVar3);
      if ((1.7453292608261108 < dVar24) && (moby->state = '\x04', moby->animationId != '\x04')) {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar6 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)(puVar9 + 0x14) = fVar2;
    *(float *)((int)puVar9 + 0xa4) = fVar3;
    *(float *)(puVar9 + 0x15) = fVar6 - fVar5;
    dVar24 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x14));
    if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar9 + 0xa4));
    if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    dVar25 = dVar24;
    if (0.0 < fVar2) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 0xac;
      lVar21 = uVar16 - 0x9c;
      lVar23 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar9 + 0x2a) = fVar2;
      *(float *)(puVar9 + 0x29) = fVar2;
      *(float *)((int)puVar9 + 0x14c) = fVar2;
      *(float *)((int)puVar9 + 0x144) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar6;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar2;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar18 + 0x144) = *(float *)((int)lVar18 + 0x134) * fVar2 * fVar2;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0xac;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar2 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x144) = *(float *)((int)lVar18 + 0x144) * fVar2;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar19;
      do {
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x144)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar28 = 0.01745329238474369;
    fVar2 = DAT_00758070 * 0.017453292 * g_FrameTimeSq;
    OrganicDeltAng
              ((float)dVar25,fVar2,fVar2,DAT_00758074 * 0.017453292 * g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    dVar26 = ABS((double)fVar2);
    dVar27 = ABS((double)fVar3);
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)(puVar9 + 0x13) = fVar3;
    fVar2 = (moby->rotation).z;
    *(float *)((int)puVar9 + 0x9c) = (float)(dVar26 - dVar27);
    uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar24 < 0.0) {
      dVar25 = dVar27;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar27 = ABS((double)*(float *)(puVar9 + 0x13));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar24 < 0.0) {
      dVar27 = dVar26;
    }
    if (dVar24 < dVar25) {
      lVar18 = uVar16 - 0x1e0;
      lVar21 = uVar16 - 0xbc;
      lVar20 = uVar16 - 0xcc;
      lVar23 = 2;
      fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x26) = fVar6;
      *(float *)(puVar9 + 0x25) = fVar6;
      *(float *)((int)puVar9 + 300) = fVar6;
      *(float *)((int)puVar9 + 0x124) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar4;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar6;
      *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x124) = *(float *)((int)lVar18 + 0x114) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar6 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x124) = *(float *)((int)lVar18 + 0x124) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x124)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar24 = (double)FastSubRots(fVar2,(float)dVar24);
    if (dVar24 < dVar28) {
      pfVar8[0x4c] = 0.0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x01') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = (moby->rotation).z;
    if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass == WRENCH_0047)
       ) {
      fVar3 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar4 = ABS(fVar6);
      *(float *)((int)puVar9 + 0xac) = fVar3;
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar4;
      fVar3 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar9 + 0xac));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar12 = fVar5;
      }
      if (0.0 < fVar6) {
        lVar18 = uVar16 - 0x1e0;
        lVar20 = uVar16 - 0x8c;
        lVar21 = uVar16 - 0x7c;
        lVar23 = 2;
        fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2e) = fVar5;
        *(float *)(puVar9 + 0x2d) = fVar5;
        *(float *)((int)puVar9 + 0x16c) = fVar5;
        *(float *)((int)puVar9 + 0x164) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x2d) = *(float *)(puVar9 + 0x2d) * fVar6;
        *(float *)((int)puVar9 + 0x16c) = *(float *)((int)puVar9 + 0x16c) * fVar5;
        *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x164) = *(float *)((int)lVar18 + 0x154) * fVar5 * fVar5;
          iVar10 = (int)lVar20;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar21 = uVar16 - 0x8c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x164) = *(float *)((int)lVar18 + 0x164) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar18 = 2;
        do {
          iVar10 = (int)lVar19;
          iVar11 = (int)lVar21;
          lVar19 = lVar19 + 0x10;
          lVar21 = lVar21 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar10 + 0x164) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar24 = (double)FastSubRots(fVar2,fVar3);
      if ((1.7453292608261108 < dVar24) && (moby->state = '\x02', moby->animationId != '\x03')) {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x02') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    *(char *)(pfVar8 + 7) = (char)DAT_0075804c;
    *(char *)((int)pfVar8 + 0x1e) = (char)DAT_00758054;
    *(char *)((int)pfVar8 + 0x1d) = (char)DAT_00758050;
    pfVar8[0x44] = (moby->pos).x;
    pfVar8[0x45] = (moby->pos).y;
    pfVar8[0x46] = (moby->pos).z;
    pfVar8[0x47] = (moby->pos).w;
    pfVar8[0x48] = (moby->pos).x;
    fVar2 = (moby->pos).y;
    pfVar8[0x49] = fVar2;
    pfVar8[0x4a] = (moby->pos).z;
    pfVar8[0x4b] = (moby->pos).w;
    pfVar8[0x4d] = 1.4013e-45;
    pfVar8[0x49] = fVar2 + 7.0;
    moby->state = '\x05';
    if (moby->animationId != '\x05') {
      puVar9[0x35] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar9 + 0x1ac));
    }
  }
  MB_TurnHeads(moby,pfVar8);
  return;
}



// game/update/moby237.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x304d30-0x305928
#include "game/update/moby237.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby849.h"

// 0x0304d30 (0x58 bytes)
void M237_00304d30(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == 'E') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = 'E';
  }
  return;
}


// 0x0304d88 (0x58 bytes)
void M237_00304d88(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == 'E') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0x45;
  }
  return;
}


// 0x0304de0 (0x58 bytes)
void M237_00304de0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == 'E') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0x45;
  }
  return;
}


// 0x0304e38 (0x38 bytes)
void M237_00304e38(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0x45;
  return;
}


// 0x0304e70 (0x40 bytes)
longlong M237_00304e70(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x0304ef8 (0xa30 bytes)
// inlined: FastAtan2 @0x30513c, FastAtan2 @0x305684
/* Moby 237 */

void UpdateMoby_237(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *victim;
  PlayerState PVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  u8 uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  int in_r6;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar25;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x120;
  puVar6 = (ulonglong *)lVar17;
  *puVar6 = uVar14;
  puVar6[0x26] = in_LR;
  puVar6[0x21] = in_f29;
  puVar6[0x22] = in_f30;
  puVar6[0x23] = in_f31;
  puVar6[0x20] = unaff_r31;
  puVar6[0x1f] = unaff_r30;
  puVar6[0x1e] = unaff_r29;
  puVar6[0x1d] = unaff_r28;
  pvVar5 = moby->pVar;
  iVar18 = MB_damage(moby,0x10000,0);
  if (iVar18 == 0) {
    uVar25 = 0x3fd3333340000000;
    MB_RegisterLameShadow(0.3,moby);
    victim = g_heroMobyPtr;
    uVar19 = moby->state;
    if (uVar19 == 'E') {
      iVar18 = FUN_0048c188(moby,(int)pvVar5 + 0xf0);
      if (iVar18 != 0) {
        moby->state = '\x01';
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,1);
        }
        *(undefined2 *)((int)pvVar5 + 0xa8) = 0;
      }
    }
    else {
      if (uVar19 != '\x04') {
        if (uVar19 != '\x03') {
          if (uVar19 == '\x02') {
            fVar3 = g_heroPosition.x - (moby->pos).x;
            fVar1 = g_heroPosition.y - (moby->pos).y;
            fVar2 = ABS(fVar3);
            fVar4 = ABS(fVar1);
            *(float *)((int)puVar6 + 0x9c) = fVar3;
            *(float *)(puVar6 + 0x14) = fVar1;
            *(float *)((int)puVar6 + 0xa4) = fVar2 - fVar4;
            dVar24 = 0.0;
            uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar6 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar6 + 0x14) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar6 + 0x9c));
            if (*(float *)((int)puVar6 + 0xa4) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
            fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
            fVar8 = ABS(*(float *)(puVar6 + 0x14));
            if (*(float *)((int)puVar6 + 0xa4) - 0.0 < 0.0) {
              fVar8 = fVar2;
            }
            if (0.0 < fVar3) {
              lVar16 = uVar14 - 0x110;
              lVar20 = uVar14 - 0x58;
              lVar22 = uVar14 - 0x48;
              lVar23 = 2;
              fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
              fVar2 = fVar3 * fVar3;
              *(float *)((int)puVar6 + 0xd4) = fVar3;
              *(float *)((int)puVar6 + 0xcc) = fVar3;
              *(float *)(puVar6 + 0x1a) = fVar3;
              *(float *)(puVar6 + 0x19) = fVar3;
              fVar3 = fVar2 * fVar2;
              *(float *)((int)puVar6 + 0xcc) = *(float *)((int)puVar6 + 0xcc) * fVar2;
              *(float *)(puVar6 + 0x1a) = *(float *)(puVar6 + 0x1a) * fVar3;
              *(float *)((int)puVar6 + 0xd4) = *(float *)((int)puVar6 + 0xd4) * fVar3 * fVar2;
              do {
                *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar3 * fVar3;
                iVar18 = (int)lVar20;
                lVar16 = lVar16 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
                lVar22 = lVar22 + 8;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              lVar23 = 4;
              lVar22 = uVar14 - 0x58;
              pfVar21 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar20 = lVar22;
              do {
                fVar3 = *pfVar21;
                fVar2 = pfVar21[1];
                pfVar21 = pfVar21 + 2;
                *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar3;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
                lVar20 = lVar20 + 8;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              lVar16 = 2;
              do {
                iVar18 = (int)lVar17;
                iVar7 = (int)lVar22;
                lVar17 = lVar17 + 0x10;
                lVar22 = lVar22 + 0x10;
                dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 200)) +
                                  *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                                 *(float *)(iVar7 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
            }
            OrganicDeltAngSpeed
                      (dVar24,0x3f947ae140000000,uVar25,0x3fc0000000000000,moby,0x300000,
                       (int)pvVar5 + 0x1b0);
            PVar13 = g_heroState;
            fVar2 = g_heroPosition.z;
            fVar3 = (moby->rotation).z;
            fVar1 = fVar3 + 1.5707963;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar8 = 3.1415925 - fVar1;
            if (fVar1 - (3.1415925 - fVar1) < 0.0) {
              fVar8 = fVar1;
            }
            fVar9 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar9 = fVar4;
            }
            fVar3 = -3.1415925 - fVar1;
            if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
              fVar3 = fVar8;
            }
            fVar1 = fVar9 * fVar9;
            fVar4 = fVar3 * fVar3;
            fVar11 = fVar1 * fVar1 * fVar9;
            fVar8 = fVar4 * fVar4 * fVar3;
            fVar12 = fVar1 * fVar11;
            fVar10 = fVar4 * fVar8;
            fVar1 = g_FrameTime * 2.0 *
                    (fVar1 * fVar12 * 2.601887e-06 +
                    fVar12 * -0.0001980741 +
                    fVar11 * 0.0083330255 + fVar1 * fVar9 * -0.16666657 + fVar9) + (moby->pos).y;
            fVar3 = g_FrameTime * 2.0 *
                    (fVar4 * fVar10 * 2.601887e-06 +
                    fVar10 * -0.0001980741 +
                    fVar8 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) + (moby->pos).x;
            fVar4 = fVar1 - g_heroPosition.y;
            fVar8 = fVar3 - g_heroPosition.x;
            uVar19 = moby->animationId;
            (moby->pos).x = fVar3;
            (moby->pos).y = fVar1;
            if ((((SQRT(fVar8 * fVar8 + fVar4 * fVar4) < 1.0) && (ABS((moby->pos).z - fVar2) < 2.0))
                && (PVar13 != TAKING_DAMAGE)) && (moby->state = '\x03', uVar19 != '\x03')) {
              MB_SetAnimation(moby,3,0,3);
              fVar3 = (moby->pos).x;
              fVar1 = (moby->pos).y;
              uVar19 = moby->animationId;
            }
            fVar1 = fVar1 - *(float *)((int)pvVar5 + 0x1a4);
            fVar3 = fVar3 - *(float *)((int)pvVar5 + 0x1a0);
            if (SQRT(fVar3 * fVar3 + fVar1 * fVar1) <= 14.0) {
              return;
            }
            moby->state = '\x04';
            if (uVar19 == '\x01') {
              return;
            }
            MB_SetAnimation(moby,1,0,0x3c);
            return;
          }
          if (uVar19 != '\x01') {
            if (uVar19 != '\0') {
              return;
            }
            *(f32 *)((int)pvVar5 + 0x1a0) = (moby->pos).x;
            *(f32 *)((int)pvVar5 + 0x1a4) = (moby->pos).y;
            *(f32 *)((int)pvVar5 + 0x1a8) = (moby->pos).z;
            *(f32 *)((int)pvVar5 + 0x1ac) = (moby->pos).w;
            moby->state = '\x01';
            *(undefined **)((int)pvVar5 + 0xb0) = &DAT_007ff3f4;
            if (moby->animationId == '\x01') {
              return;
            }
            MB_SetAnimation(moby,1,0,1);
            return;
          }
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar1 = (moby->pos).x - g_heroPosition.x;
          if (10.0 <= SQRT(fVar1 * fVar1 + fVar3 * fVar3)) {
            return;
          }
          moby->state = '\x02';
          if (moby->animationId == '\0') {
            return;
          }
          MB_SetAnimation(moby,0,0,0x3c);
          return;
        }
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar1 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar1 * fVar1 + fVar3 * fVar3) < 1.0) &&
            (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroState != TAKING_DAMAGE)) {
          fVar3 = (moby->rotation).z;
          fVar1 = fVar3 + 1.5707963;
          fVar4 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar4 = fVar3;
          }
          fVar2 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar2 = fVar1;
          }
          fVar8 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
            fVar8 = fVar4;
          }
          *(undefined4 *)(puVar6 + 0xf) = 0;
          fVar3 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
            fVar3 = fVar2;
          }
          fVar1 = fVar8 * fVar8;
          fVar4 = fVar3 * fVar3;
          fVar10 = fVar1 * fVar1 * fVar8;
          fVar2 = fVar4 * fVar4 * fVar3;
          fVar11 = fVar1 * fVar10;
          fVar9 = fVar4 * fVar2;
          *(float *)((int)puVar6 + 0x74) =
               fVar1 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8;
          *(float *)(puVar6 + 0xe) =
               fVar4 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3;
          *(f32 *)(puVar6 + 0x10) = (victim->pos).x;
          *(f32 *)((int)puVar6 + 0x84) = (victim->pos).y;
          fVar3 = (victim->pos).z;
          *(float *)(puVar6 + 0x11) = fVar3;
          *(f32 *)((int)puVar6 + 0x8c) = (victim->pos).w;
          *(float *)(puVar6 + 0x11) = fVar3 + 0.75;
          CollDamageMobyDirect
                    (1.0,victim,moby,1,in_r6,(float *)(puVar6 + 0x10),(float *)(puVar6 + 0xe));
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0')) {
          MB_SetAnimation(moby,0,0,3);
        }
      }
      fVar3 = *(float *)((int)pvVar5 + 0x1a0) - (moby->pos).x;
      fVar1 = *(float *)((int)pvVar5 + 0x1a4) - (moby->pos).y;
      pfVar21 = (float *)&g_atanQuadrantTable;
      fVar2 = ABS(fVar3);
      fVar4 = ABS(fVar1);
      *(float *)(puVar6 + 0x12) = fVar3;
      *(float *)((int)puVar6 + 0x94) = fVar1;
      *(float *)(puVar6 + 0x13) = fVar2 - fVar4;
      dVar24 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar6 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x94) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar6 + 0x12));
      if (*(float *)(puVar6 + 0x13) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar6 + 0x94));
      if (*(float *)(puVar6 + 0x13) - 0.0 < 0.0) {
        fVar8 = fVar2;
      }
      if (0.0 < fVar3) {
        lVar16 = uVar14 - 0x110;
        lVar20 = uVar14 - 0x78;
        lVar22 = uVar14 - 0x68;
        lVar23 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar6 + 0xb4) = fVar3;
        *(float *)((int)puVar6 + 0xac) = fVar3;
        *(float *)(puVar6 + 0x16) = fVar3;
        *(float *)(puVar6 + 0x15) = fVar3;
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar2;
        *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar3;
        *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar3 * fVar2;
        do {
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar3 * fVar3;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar22 = uVar14 - 0x78;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar3 = *pfVar21;
          fVar2 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar7 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xa8)) +
                            *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
      }
      OrganicDeltAngSpeed
                (dVar24,0x3f947ae140000000,uVar25,0x3fc0000000000000,moby,pfVar21,
                 (int)pvVar5 + 0x1b0);
      fVar3 = (moby->rotation).z;
      fVar1 = fVar3 + 1.5707963;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar8 = fVar4;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = fVar8 * fVar8;
      fVar4 = fVar3 * fVar3;
      fVar10 = fVar1 * fVar1 * fVar8;
      fVar2 = fVar4 * fVar4 * fVar3;
      fVar11 = fVar1 * fVar10;
      fVar9 = fVar4 * fVar2;
      fVar1 = g_FrameTime * 2.0 *
              (fVar1 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8)
              + (moby->pos).y;
      fVar3 = g_FrameTime * 2.0 *
              (fVar4 * fVar9 * 2.601887e-06 +
              fVar9 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) +
              (moby->pos).x;
      (moby->pos).y = fVar1;
      (moby->pos).x = fVar3;
      fVar1 = fVar1 - *(float *)((int)pvVar5 + 0x1a4);
      fVar3 = fVar3 - *(float *)((int)pvVar5 + 0x1a0);
      if (SQRT(fVar3 * fVar3 + fVar1 * fVar1) < 1.0) {
        moby->state = '\x01';
      }
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}



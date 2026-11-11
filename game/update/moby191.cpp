// game/update/moby191.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2d8058-0x2d8600
// shared update function UpdateMoby_{191_758_803_1429}; registered for oClasses 191, 758, 803, 1429
#include "game/update/moby191.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/camera7.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 191, 758, 803, 1429
// 0x02d8058 (0x5a8 bytes)
// inlined: FastAtan2 @0x2d8220
/* Moby 191
   Moby 758
   Moby 803
   Moby 1429 */

void UpdateMoby_191(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  f32 *val;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x100;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x22] = in_LR;
  puVar13[0x1e] = in_f30;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r31;
  bVar2 = moby->state;
  pvVar12 = moby->pVar;
  MVar11 = moby->modeBits;
  puVar13[0x1c] = unaff_r30;
  puVar13[0x1b] = unaff_r29;
  if (bVar2 == 0) {
    if ((*(int *)((int)pvVar12 + 0x30) == -1) &&
       (((*(int *)((int)pvVar12 + 0x3c) == -1 ||
         (g_MobyInstance + *(int *)((int)pvVar12 + 0x3c) == (MobyInstance *)0x0)) ||
        ((uVar3 = g_MobyInstance[*(int *)((int)pvVar12 + 0x3c)].state, uVar3 == 0xfe ||
         (uVar3 == 0xfd)))))) {
      SetColorOfMoby(moby,0xc0,0xc0,0xc0);
      CamZoomOfs_Reset(moby);
      moby->state = '\x01';
    }
    else {
      moby->updateDistance = -1;
      moby->modeBits = MVar11 | (UNK_40|DISABLED);
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 2) {
    if (moby->oClass == SWINGSHOT_SWING) {
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar4 = g_heroPosition.y - (moby->pos).y;
      val = &(moby->rotation).z;
      fVar6 = ABS(fVar5);
      fVar10 = ABS(fVar4);
      *(float *)(puVar13 + 0x12) = fVar5;
      *(float *)((int)puVar13 + 0x94) = fVar4;
      *(float *)(puVar13 + 0x13) = fVar6 - fVar10;
      dVar34 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar13 + 0x12));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar5 = fVar10;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0x94));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar25 = dVar34;
      if (0.0 < fVar5) {
        lVar19 = uVar17 - 0xf0;
        lVar21 = uVar17 - 100;
        lVar23 = uVar17 - 0x54;
        lVar24 = 2;
        fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x15) = fVar5;
        *(float *)(puVar13 + 0x14) = fVar5;
        *(float *)((int)puVar13 + 0xa4) = fVar5;
        *(float *)((int)puVar13 + 0x9c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar6;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x8c) * fVar5 * fVar5;
          iVar14 = (int)lVar21;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar23 = uVar17 - 100;
        pfVar22 = (float *)&DAT_007358e0;
        lVar24 = 4;
        lVar19 = lVar20;
        lVar21 = lVar23;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x9c) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar19 = 2;
        do {
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar15 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x9c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar10 + fVar4);
      }
      OrganicDeltAng
                ((float)dVar25,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar12 + 0x38));
      fVar5 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar10 = (moby->pos).z;
      if (((worldUpdateTime & 1) != 0) && (moby->enabled != '\0')) {
        fVar6 = (moby->transform).v1.y;
        fVar7 = (moby->transform).v1.x;
        fVar8 = (moby->transform).v1.z;
        puVar13[0x18] =
             (longlong)(int)(((uint)(ZERO_MASK((worldUpdateTime & 4))) & 2) - 1);
        dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        if (dVar25 == dVar34) {
          fVar9 = (moby->transform).v1.w;
          dVar25 = dVar34;
          dVar27 = dVar34;
          dVar29 = dVar34;
        }
        else {
          fVar1 = (float)((double)(DAT_007d9abc * (float)(longlong)puVar13[0x18]) / dVar25);
          fVar9 = (moby->transform).v1.w;
          dVar29 = (double)(fVar7 * fVar1);
          dVar27 = (double)(fVar6 * fVar1);
          dVar25 = (double)(fVar8 * fVar1);
        }
        *(float *)(puVar13 + 0xe) = (float)dVar29;
        *(float *)((int)puVar13 + 0x74) = (float)dVar27;
        *(float *)(puVar13 + 0xf) = (float)dVar25;
        *(float *)((int)puVar13 + 0x7c) = fVar9;
        fVar8 = DAT_007d9ab0;
        fVar7 = animationSpeed;
        fVar6 = DAT_007d9ab0 * animationSpeed;
        *(float *)((int)puVar13 + 0x8c) = fVar9;
        uVar16 = DAT_007d9ab4;
        dVar33 = (double)DAT_007d9ab8;
        *(float *)(puVar13 + 0xe) = (float)(dVar29 + (double)fVar5);
        *(float *)((int)puVar13 + 0x74) = (float)(dVar27 + (double)fVar4);
        *(float *)(puVar13 + 0xf) = (float)(dVar25 + (double)fVar10);
        dVar31 = (double)SQRT((float)(dVar25 * dVar25 +
                                     (double)(float)(dVar29 * dVar29 +
                                                    (double)(float)(dVar27 * dVar27))));
        dVar32 = (double)(float)((double)(-2.0 / fVar6) / dVar31);
        dVar30 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar30 = (double)(float)(dVar29 * dVar32);
        }
        dVar28 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar28 = (double)(float)(dVar27 * dVar32);
        }
        dVar26 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar26 = (double)(float)(dVar25 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar30 = (double)(float)(dVar29 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar28 = (double)(float)(dVar27 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar26 = (double)(float)(dVar25 * dVar32);
        }
        *(float *)(puVar13 + 0x10) = (float)dVar30;
        *(float *)((int)puVar13 + 0x84) = (float)dVar28;
        *(float *)(puVar13 + 0x11) = (float)dVar26;
        FastDoubleToInt((double)(fVar8 * fVar7));
        MB_randInt(0xff);
        SpawnPart_60(dVar33,uVar17 - 0x90,uVar17 - 0x80,uVar16);
      }
    }
    if (g_heroState != SWINGING_YELLOW_SWINGSHOT) {
      ____Cam_NudgeTowardMoby(moby);
    }
  }
  else if ((bVar2 < 3) &&
          ((g_LevelFlags[Level][*(int *)((int)pvVar12 + 0x30)] != '\0' ||
           ((*(int *)((int)pvVar12 + 0x3c) != -1 &&
            (((g_MobyInstance + *(int *)((int)pvVar12 + 0x3c) == (MobyInstance *)0x0 ||
              (uVar3 = g_MobyInstance[*(int *)((int)pvVar12 + 0x3c)].state, uVar3 == 0xfe)) ||
             (uVar3 == 0xfd)))))))) {
    *(undefined4 *)((int)pvVar12 + 0x30) = 0xffffffff;
    moby->modeBits =
         MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->state = '\0';
  }
  return;
}



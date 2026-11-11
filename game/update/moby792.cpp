// game/update/moby792.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x45f698-0x4603ac
#include "game/update/moby792.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x045f698 (0x438 bytes)
// strings: 0096c074: 'None'

void M792_0045f698(int param_1)

{
  longlong lVar1;
  byte bVar2;
  f32 fVar3;
  ushort uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  longlong lVar19;
  void *pvVar20;
  ulonglong unaff_r24;
  undefined4 *puVar21;
  ulonglong unaff_r25;
  undefined4 *puVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ushort *puVar24;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  float local_990 [612];
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0xa10;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar10;
  puVar6[0x144] = in_LR;
  puVar6[0x13f] = in_f29;
  puVar6[0x140] = in_f30;
  puVar6[0x141] = in_f31;
  puVar6[0x13e] = unaff_r31;
  puVar6[0x13a] = unaff_r27;
  iVar13 = DAT_010cced0;
  puVar6[0x13d] = unaff_r30;
  puVar6[0x13c] = unaff_r29;
  puVar6[0x13b] = unaff_r28;
  puVar6[0x139] = unaff_r26;
  puVar6[0x138] = unaff_r25;
  puVar6[0x137] = unaff_r24;
  puVar6[0x136] = unaff_r23;
  puVar6[0x135] = unaff_r22;
  puVar6[0x134] = unaff_r21;
  if (iVar13 == 0) {
    DAT_00873c50 = 5.0;
    if (Cheats[2] != '\0') {
      DAT_00873c50 = 16.0;
    }
    iVar13 = 0;
    lVar17 = lVar1;
    do {
      uVar11 = GetEffectTex(0x13);
      iVar23 = (int)lVar17;
      *(undefined8 *)(iVar23 + 0x118) = uVar11;
      uVar11 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar23 + 0x120) = uVar11;
      uVar11 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar23 + 0x110) = uVar11;
      uVar11 = idol_draw::PackCmd(DAT_010cced8,DAT_00873c60,DAT_010ccedc,DAT_00873c64,0x80);
      *(undefined8 *)(iVar23 + 0x128) = uVar11;
      dVar26 = (double)FastIntToDouble(worldUpdateTime + 3U & 3);
      dVar30 = 1.0;
      dVar29 = 0.0;
      iVar23 = 0;
      puVar22 = &DAT_00873c70;
      puVar21 = &DAT_00873c74;
      dVar26 = (double)(float)(dVar26 / (double)(DAT_00873c50 * 4.0));
      lVar18 = lVar17;
      lVar19 = lVar17;
      do {
        uVar12 = *puVar21;
        *(undefined4 *)((int)lVar19 + 0xf0) = *puVar22;
        *(undefined4 *)((int)lVar19 + 0xf4) = uVar12;
        dVar27 = (double)FastIntToDouble((iVar13 - (iVar23 >> 1)) + 1);
        dVar28 = (double)(float)(dVar27 / (double)(float)((double)DAT_00873c50 + dVar26));
        dVar27 = dVar30;
        if ((dVar28 <= dVar30) && (dVar27 = dVar28, dVar28 < dVar29)) {
          dVar27 = dVar29;
        }
        uVar12 = FastLerpColor(dVar27,DAT_00873c68,PTR_DAT_00873c6c);
        iVar23 = iVar23 + 1;
        *(undefined4 *)((int)lVar18 + 0xe0) = uVar12;
        puVar22 = puVar22 + 2;
        lVar19 = lVar19 + 8;
        puVar21 = puVar21 + 2;
        lVar18 = lVar18 + 4;
      } while (iVar23 < 4);
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 0x90;
    } while (iVar13 < 0x10);
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar6 + 0x84) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0x3e19999a;
    *(undefined4 *)((int)puVar6 + 0x8c) = 0;
    bVar2 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)(puVar6 + 0x12) = 0;
    *(undefined4 *)((int)puVar6 + 0x94) = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0xbe19999a;
    *(undefined4 *)((int)puVar6 + 0x9c) = 0;
    uVar11 = 0x4080000000000000;
    puVar24 = (ushort *)(&g_MobyGroups)[bVar2];
    do {
      pMVar9 = g_MobyInstance;
      uVar14 = *puVar24 & 0x7fff;
      if ((g_MobyInstance[uVar14].oClass == SCENERY_SHIP) && (g_MobyInstance[uVar14].state == '\x01')) {
        pvVar5 = g_MobyInstance[uVar14].pVar;
        *(f32 *)(puVar6 + 0xe) = g_MobyInstance[uVar14].pos.x;
        *(f32 *)((int)puVar6 + 0x74) = pMVar9[uVar14].pos.y;
        fVar3 = pMVar9[uVar14].pos.z;
        *(undefined4 *)((int)puVar6 + 0x7c) = 0x41a00000;
        *(f32 *)(puVar6 + 0xf) = fVar3;
        iVar13 = FastCheckBsphereInView(uVar11,uVar10 - 0x9a0);
        if ((iVar13 != -1) && (lVar17 = 0, 0 < *(short *)((int)pvVar5 + 800))) {
          lVar19 = uVar10 - 0x970;
          lVar18 = lVar1;
          do {
            uVar4 = *(ushort *)((int)pvVar5 + 0x322);
            iVar13 = 0;
            pvVar20 = pvVar5;
            do {
              if (DAT_010cced4 == 0) {
                uVar14 = 0;
                lVar15 = lVar18 + 0xa0;
                lVar25 = 4;
                do {
                  uVar8 = uVar14 & 1;
                  uVar7 = (uint)(((longlong)((int)uVar14 >> 1) +
                                  (((ulonglong)uVar4 - lVar17) + 0xf & 0xf) & 0xffffffff) << 4) &
                          0xf0;
                  uVar14 = uVar14 + 1;
                  pfVar16 = (float *)lVar15;
                  *pfVar16 = *(float *)((int)pvVar20 + uVar7 + 0x20) + local_990[uVar8 * 4];
                  pfVar16[1] = *(float *)((int)pvVar20 + uVar7 + 0x24) + local_990[uVar8 * 4 + 1];
                  pfVar16[2] = *(float *)((int)pvVar20 + uVar7 + 0x28) + local_990[uVar8 * 4 + 2];
                  pfVar16[3] = *(float *)((int)pvVar20 + uVar7 + 0x2c);
                  lVar15 = lVar15 + 0x10;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                FastDrawQuad(lVar19,0,0,EffectTexHeaders,9);
              }
              iVar13 = iVar13 + 1;
              pvVar20 = (void *)((int)pvVar20 + 0x100);
            } while (iVar13 < 3);
            lVar17 = lVar17 + 1;
            lVar19 = lVar19 + 0x90;
            lVar18 = lVar18 + 0x90;
          } while ((int)lVar17 < (int)*(short *)((int)pvVar5 + 800));
        }
      }
      uVar4 = *puVar24;
      puVar24 = puVar24 + 1;
    } while (-1 < (short)uVar4);
  }
  return;
}


// 0x045fad0 (0x14 bytes)
void M792_0045fad0(void)

{
  DAT_00873cdc = 0x10000;
  return;
}


// 0x045fb08 (0x8a4 bytes)
// inlined: FastAtan2 @0x45fcac, FastAtan2 @0x460000
/* Moby 792 */

void UpdateMoby_792(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x150;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x2c] = in_LR;
  puVar13[0x29] = unaff_r31;
  puVar13[0x28] = unaff_r30;
  pMVar24 = g_MobyInstance;
  pvVar12 = moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  iVar19 = *(int *)((int)pvVar12 + 0xa0);
  fVar5 = (moby->rotation).x;
  *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
  puVar13[0x27] = unaff_r29;
  fVar6 = (moby->rotation).y;
  pMVar24 = pMVar24 + iVar19;
  *(float *)(puVar13 + 0xe) = -fVar2;
  *(f32 *)(puVar13 + 0x10) = fVar5;
  fVar5 = (moby->rotation).z;
  *(float *)((int)puVar13 + 0x74) = -fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar6;
  *(float *)(puVar13 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).w;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  puVar13[0x26] = unaff_r28;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  GetBonePosition(pMVar24,0,uVar16 - 0xc0);
  fVar2 = *(float *)(puVar13 + 0x12);
  fVar3 = *(float *)((int)puVar13 + 0x94);
  (moby->pos).x = fVar2;
  fVar4 = *(float *)(puVar13 + 0x13);
  (moby->pos).y = fVar3;
  fVar5 = *(f32 *)((int)puVar13 + 0x9c);
  uVar1 = moby->state;
  (moby->pos).z = fVar4;
  (moby->pos).w = fVar5;
  if (uVar1 == '\x06') goto LAB_00460344;
  if (uVar1 == '\x05') {
LAB_0045fe14:
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) && (moby->setByGroup == '\0'))
       || ((fVar3 = fVar3 - g_heroPosition.y, fVar2 = fVar2 - g_heroPosition.x,
           SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 16.0 &&
           (((uVar1 == '\x05' && (g_heroPosition.z < fVar4 - 5.0)) ||
            ((uVar1 == '\x03' && (fVar4 + 5.0 < g_heroPosition.z)))))))) {
      if ((uVar1 == '\x05') || (uVar1 == '\x01')) {
        moby->state = '\x02';
        MB_SetAnimationNoBlend(pMVar24,0,0);
        iVar19 = PlayMobySound(2,4,pMVar24);
        *(int *)((int)pvVar12 + 0xa4) = iVar19;
      }
      else {
        moby->state = '\x04';
        MB_SetAnimationNoBlend(pMVar24,2,0);
        iVar19 = PlayMobySound(0,4,pMVar24);
        *(int *)((int)pvVar12 + 0xa4) = iVar19;
      }
    }
    else if (g_standingOnMoby != moby) {
      moby->setByGroup = '\0';
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') goto LAB_0045fe14;
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
            moby->state = '\x05';
          }
        }
        else if (uVar1 == '\0') {
          GetBoneTransformations(pMVar24,0,uVar16 - 0xb0);
          fVar2 = ABS(*(float *)(puVar13 + 0x14));
          fVar4 = ABS(*(float *)((int)puVar13 + 0xa4));
          *(float *)((int)puVar13 + 0xe4) = fVar2 - fVar4;
          fVar7 = 0.0;
          uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
          fVar3 = fVar2;
          if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
            fVar3 = fVar4;
          }
          fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (0.0 < fVar3) {
            lVar17 = uVar16 - 0x140;
            lVar21 = uVar16 - 0x48;
            lVar23 = uVar16 - 0x38;
            lVar25 = 2;
            fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x114) = fVar3;
            *(float *)((int)puVar13 + 0x10c) = fVar3;
            *(float *)(puVar13 + 0x22) = fVar3;
            *(float *)(puVar13 + 0x21) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar4;
            *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar3;
            *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0xf8) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar17 = lVar17 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar23 = lVar23 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar23 = uVar16 - 0x48;
            pfVar22 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar21 = lVar23;
            do {
              fVar3 = *pfVar22;
              fVar4 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0x108) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar14 = (int)lVar23;
              lVar18 = lVar18 + 0x10;
              lVar23 = lVar23 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar19 + 0x108) + *(float *)(iVar14 + 4) +
                      *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            fVar7 = (fVar7 + 0.7853982) * fVar10 + fVar2;
          }
          (moby->rotation).z = fVar7;
          moby->state = '\x01';
          MB_SetAnimation(pMVar24,3,0,0);
        }
        goto LAB_00460344;
      }
    }
    GetBoneTransformations(pMVar24,0,uVar16 - 0xb0);
    fVar10 = ABS(*(float *)(puVar13 + 0x14));
    fVar9 = ABS(*(float *)((int)puVar13 + 0xa4));
    *(float *)(puVar13 + 0x1c) = fVar10 - fVar9;
    fVar2 = 0.0;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
    fVar15 = fVar10;
    if (*(float *)(puVar13 + 0x1c) - 0.0 < 0.0) {
      fVar15 = fVar9;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (*(float *)(puVar13 + 0x1c) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    if (0.0 < fVar15) {
      lVar17 = uVar16 - 0x140;
      lVar23 = uVar16 - 0x58;
      lVar21 = uVar16 - 0x68;
      lVar25 = 2;
      fVar10 = (fVar9 - fVar15) / (fVar9 + fVar15);
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar13 + 0xf4) = fVar10;
      *(float *)((int)puVar13 + 0xec) = fVar10;
      *(float *)(puVar13 + 0x1e) = fVar10;
      *(float *)(puVar13 + 0x1d) = fVar10;
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar9;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar10 * fVar9;
      do {
        *(float *)((int)lVar17 + 0xe8) = *(float *)((int)lVar17 + 0xd8) * fVar10 * fVar10;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar10 * fVar10;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar16 - 0x68;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar10 = *pfVar22;
        fVar9 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xe8) = *(float *)((int)lVar17 + 0xe8) * fVar10;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar9;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar19 + 0xe8) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8)
                + *(float *)(iVar14 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar11 + fVar8;
    }
    (moby->rotation).z = fVar2;
    if ((SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
              (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) < 1.5) &&
       (g_heroPosition.z < fVar7 - 1.5)) {
      iVar19 = *(int *)((int)pvVar12 + 0xa4);
      pMVar24->unk58 = 0.0;
      if ((iVar19 != -1) &&
         ((g_SoundChannels[iVar19].pMoby == pMVar24 &&
          (g_SoundChannels[iVar19].state != '\0')))) {
        sound_Kill(iVar19);
      }
      *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar7 = (moby->pos).z;
    }
    if ((pMVar24->unk58 == 0.0) &&
       ((2.0 < SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
                    (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) ||
        (fVar7 - 1.25 < g_heroPosition.z)))) {
      pMVar24->unk58 = 1.0;
      if (moby->state == '\x02') {
        iVar19 = PlayMobySound(2,4,pMVar24);
      }
      else {
        iVar19 = PlayMobySound(0,4,pMVar24);
      }
      *(int *)((int)pvVar12 + 0xa4) = iVar19;
    }
    if ((pMVar24->field43_0x70 & 2U) != 0) {
      iVar19 = *(int *)((int)pvVar12 + 0xa4);
      if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == pMVar24)) &&
         (g_SoundChannels[iVar19].state != '\0')) {
        sound_Kill(iVar19);
      }
      *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
      if (moby->state == '\x02') {
        moby->state = '\x03';
        MB_SetAnimation(pMVar24,1,0,0);
        PlayMobySound(3,0,pMVar24);
      }
      else {
        moby->state = '\x05';
        MB_SetAnimation(pMVar24,3,0,0);
        PlayMobySound(1,0,pMVar24);
      }
      moby->setByGroup = '\x01';
    }
  }
LAB_00460344:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar13 + 0xe) = *(float *)(puVar13 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar13 + 0x74) = *(float *)((int)puVar13 + 0x74) + fVar2;
  *(float *)(puVar13 + 0xf) = *(float *)(puVar13 + 0xf) + fVar3;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar12 + 0x60),(Vec4 *)(puVar13 + 0xe),uVar16 - 0xd0,
             (longlong)(int)moby + 0x40);
  return;
}



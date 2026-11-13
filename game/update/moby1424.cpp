// game/update/moby1424.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x27a098-0x27ab68
#include "game/update/moby1424.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera19.h"
#include "idol/fastfunc.h"

// 0x027a098 (0x3b0 bytes)
// strings: 0027a090: '?333`'

void M1424_0027a098(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> auStack_b0;
  GPiece<32> auStack_a0;
  
  dVar18 = 0.5;
  iVar1 = *(int *)(param_1 + 0x78);
  iVar7 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0c0 + 0.5));
  dVar8 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar7) * iVar7);
  dVar9 = (double)FastIntToDouble(iVar7);
  dVar10 = 6.18317985534668;
  dVar11 = 3.141590118408203;
  dVar12 = 3.141592502593994;
  dVar13 = -3.141592502593994;
  dVar14 = -0.16666656732559204;
  dVar15 = 0.008333025500178337;
  dVar16 = -0.0001980741071747616;
  dVar17 = 2.601886990305502e-06;
  fVar2 = (float)(dVar8 / dVar9) * 6.18318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar2;
  uVar6 = FastLerpColor
                    ((double)(float)((double)(fVar5 * fVar3 * 2.601887e-06 +
                                             fVar3 * -0.0001980741 +
                                             fVar2 * 0.0083330255 +
                                             fVar5 * fVar4 * -0.16666657 + fVar4) * dVar18 + dVar18)
                     ,DAT_007aa0b8,DAT_007aa0bc);
  GetBonePosition(*(undefined4 *)(iVar1 + 0x3a0),1,auStack_b0);
  MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,auStack_b0,uVar6);
  GetBonePosition(*(undefined4 *)(iVar1 + 0x3a0),2,auStack_b0);
  MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,auStack_b0,uVar6);
  if ((10 < *(byte *)(param_1 + 0x53)) && (*(byte *)(param_1 + 0x53) < 0xe)) {
    iVar7 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0d0 + dVar18));
    dVar8 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar7) * iVar7);
    dVar9 = (double)FastIntToDouble(iVar7);
    dVar9 = (double)(float)((double)(float)(dVar8 / dVar9) * dVar10 - dVar11);
    dVar8 = (double)(float)(dVar12 - dVar9);
    if (dVar9 - (double)(float)(dVar12 - dVar9) < 0.0) {
      dVar8 = dVar9;
    }
    dVar10 = (double)(float)(dVar13 - dVar9);
    if ((double)(float)(dVar13 - dVar9) - dVar8 < 0.0) {
      dVar10 = dVar8;
    }
    dVar8 = (double)(float)(dVar10 * dVar10);
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
    dVar9 = (double)(float)(dVar8 * dVar11);
    uVar6 = FastLerpColor
                      ((double)(float)((double)(float)((double)(float)(dVar8 * dVar9) * dVar17 +
                                                      (double)(float)(dVar9 * dVar16 +
                                                                     (double)(float)(dVar11 * dVar15
                                                                                    + (double)(float
                                                  )((double)(float)(dVar8 * dVar10) * dVar14 +
                                                   dVar10)))) * dVar18 + dVar18),DAT_007aa0c8,
                       DAT_007aa0cc);
    GetBonePosition(param_1,5,auStack_a0);
    MB_DrawGlowFX((double)DAT_007aa0c4,(double)DAT_00facc8c,auStack_a0,uVar6);
    GetBonePosition(param_1,6,auStack_a0);
    MB_DrawGlowFX((double)DAT_007aa0c4,(double)DAT_00facc8c,auStack_a0,uVar6);
  }
  iVar7 = 0;
  uVar6 = 0x3fe6666660000000;
  do {
    GetBonePosition(param_1,iVar7 + 0xb,auStack_b0);
    MB_DrawGlowFX(uVar6,dVar18,auStack_b0,*(undefined4 *)(iVar1 + 0x3b8));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}


// 0x027a448 (0x14 bytes)
void M1424_0027a448(void)

{
  DAT_007aa120 = 0x10000;
  return;
}


// 0x027a488 (0x6e0 bytes)
/* Moby 1424 */

void UpdateMoby_1424(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  f32 *pfVar4;
  uint uVar5;
  int iVar6;
  f32 fVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  f32 local_80;
  f32 local_7c;
  f32 local_78;
  f32 local_74;
  
  bVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      fVar7 = (moby->pos).x;
      moby->updateDistance = -1;
      *pfVar4 = fVar7;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      if (((g_heroType == '\0') && (uVar2 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar2] == '\0')) &&
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2))
          & 1 << (uVar2 & 0x1f)) == 0)) {
        fVar7 = pfVar4[7];
        if (0 < (int)fVar7) {
          g_MobyInstance[(int)fVar7].modeBits = g_MobyInstance[(int)fVar7].modeBits | NO_UPDATE;
        }
        moby->state = '\x01';
      }
      else {
        dVar9 = 3.1415927410125732;
        FastWrapRot((moby->rotation).z,3.1415927);
        FastWrapRot((moby->rotation).z,(float)dVar9);
        FastVecAdd(&local_90,pfVar4,local_a0);
        (moby->pos).x = local_90;
        (moby->pos).y = local_8c;
        moby->state = '\x03';
        (moby->pos).z = local_88;
        (moby->pos).w = local_84;
      }
    }
    else if (((g_heroType == '\0') && (uVar2 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar2] == '\0')) &&
            ((*(uint *)(&g_LevelObjBits +
                       Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
             1 << (uVar2 & 0x1f)) == 0)) {
      if (g_SeenPlanets.Hoven != 0) {
        fVar7 = pfVar4[7];
        if (0 < (int)fVar7) {
          g_MobyInstance[(int)fVar7].modeBits =
               g_MobyInstance[(int)fVar7].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          uVar2 = moby->uid;
        }
        iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
        uVar3 = moby->uid;
        iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&g_CheckpointBits + iVar8);
        *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) =
             *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) | 1 << (uVar2 & 0x1f);
        *(uint *)(&g_CheckpointBits + iVar8) = uVar5 | 1 << (uVar3 & 0x1f);
        if (0 < (int)pfVar4[4]) {
          Cam19_Enable((int)pfVar4[4]);
        }
        fVar7 = (f32)FastDoubleToInt((double)(animationSpeed * 90.0));
        pfVar4[5] = fVar7;
        moby->state = '\x02';
      }
    }
    else {
      (moby->pos).x = *pfVar4;
      (moby->pos).y = pfVar4[1];
      (moby->pos).z = pfVar4[2];
      fVar7 = pfVar4[3];
      moby->state = '\x03';
      (moby->pos).w = fVar7;
      fVar7 = pfVar4[7];
      if (0 < (int)fVar7) {
        g_MobyInstance[(int)fVar7].modeBits =
             g_MobyInstance[(int)fVar7].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|DISABLED);
      }
    }
  }
  else if (bVar1 < 3) {
    dVar10 = 90.0;
    iVar8 = FastDoubleToInt((double)(animationSpeed * 90.0));
    FastIntToDouble(iVar8 - (int)pfVar4[5]);
    dVar9 = 3.1415927410125732;
    FastWrapRot((moby->rotation).z,3.1415927);
    iVar8 = FastDoubleToInt((double)(float)((double)animationSpeed * dVar10));
    FastIntToDouble(iVar8 - (int)pfVar4[5]);
    FastWrapRot((moby->rotation).z,(float)dVar9);
    FastVecAdd(&local_80,pfVar4,local_a0);
    (moby->pos).x = local_80;
    (moby->pos).y = local_7c;
    (moby->pos).z = local_78;
    (moby->pos).w = local_74;
    iVar8 = FastDecTimerS32(pfVar4 + 5);
    if (iVar8 != 0) {
      moby->state = '\x03';
    }
  }
  else if ((((bVar1 < 4) && (g_heroType == '\0')) &&
           (uVar2 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar2] == '\0')) &&
          ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0)) {
    (moby->pos).x = *pfVar4;
    (moby->pos).y = pfVar4[1];
    (moby->pos).z = pfVar4[2];
    fVar7 = pfVar4[3];
    moby->state = '\0';
    (moby->pos).w = fVar7;
  }
  return;
}



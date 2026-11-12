// game/update/moby1805.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2bab98-0x2bbc14
#include "game/update/moby1805.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby180.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02bab98 (0x3a0 bytes)
// inlined: FastRSqrt @0x2bad5c
void M1805_002bab98(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float local_d0 [36];
  
  dVar23 = (double)*(float *)(param_1 + 0xdc);
  dVar18 = (double)(*(float *)(param_1 + 0xd0) * DAT_007b7c4c + *(float *)(param_1 + 0x10));
  dVar17 = (double)(*(float *)(param_1 + 0xd4) * DAT_007b7c4c + *(float *)(param_1 + 0x14));
  dVar16 = (double)(*(float *)(param_1 + 0xd8) * DAT_007b7c4c + *(float *)(param_1 + 0x18));
  GetEffectTex(DAT_007b7c58);
  idol_draw::PackCmd(0,2,0,1,0x80);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar21 = 0.0;
  dVar19 = 1.0;
  iVar5 = MB_randInt(4);
  iVar8 = DAT_007b7c50;
  if (iVar5 == 0) {
    iVar8 = DAT_007b7c54;
  }
  dVar10 = (double)FastIntToDouble(iVar8 >> 0x18);
  FastDoubleToInt((double)(float)(dVar10 * (double)DAT_010a0bc8));
  fVar2 = (float)((double)GameCamera.posY - dVar17);
  fVar3 = (float)((double)GameCamera.posX - dVar18);
  fVar4 = (float)((double)GameCamera.posZ - dVar16);
  dVar11 = (double)(float)GameCamera.field8_0x14c;
  dVar14 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar10 = dVar21;
  dVar12 = dVar21;
  dVar13 = dVar21;
  if ((double)(float)SQRT(dVar14) != dVar21) {
    dVar10 = 1.0 / SQRT(dVar14);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar14 * dVar10) * dVar10 - dVar19) *
                    (double)(float)(dVar10 * 0.5) + dVar10);
    dVar13 = (double)(fVar1 * fVar3);
    dVar12 = (double)(fVar1 * fVar2);
    dVar10 = (double)(fVar1 * fVar4);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar13 -
                 (double)(float)((double)g_heroGravityDir * dVar10));
  fVar4 = (float)((double)DAT_00969f74 * dVar10 - (double)(float)((double)DAT_00969f78 * dVar12));
  fVar1 = (float)((double)g_heroGravityDir * dVar12 -
                 (double)(float)((double)DAT_00969f74 * dVar13));
  lVar9 = 4;
  pfVar6 = (float *)&DAT_007b7c60;
  pfVar7 = local_d0;
  dVar14 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (float)(-1.0 / dVar14);
  dVar19 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  dVar15 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar15 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar21;
  if (dVar21 - dVar14 < 0.0) {
    dVar22 = (double)(fVar1 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar15 = (double)(fVar3 * fVar2);
  }
  if (dVar14 - dVar21 < 0.0) {
    dVar22 = (double)(fVar1 * fVar2);
  }
  do {
    dVar21 = (double)(pfVar6[1] * DAT_007b7c48);
    dVar20 = (double)(*pfVar6 * DAT_007b7c48);
    fVar2 = pfVar6[2] * DAT_007b7c48;
    dVar14 = (double)pfVar6[3];
    pfVar6 = pfVar6 + 4;
    pfVar7[3] = (float)(dVar14 * dVar23 + (double)(float)(dVar20 * dVar11));
    *pfVar7 = (float)((double)(float)(dVar13 * 0.20000000298023224 + dVar18) * dVar14 +
                     (double)((float)(dVar12 * dVar22 - (double)(float)(dVar10 * dVar15)) * fVar2 +
                             (float)(dVar20 * dVar13 + (double)(float)(dVar21 * dVar19))));
    pfVar7[1] = (float)((double)(float)(dVar12 * 0.20000000298023224 + dVar17) * dVar14 +
                       (double)((float)(dVar10 * dVar19 - (double)(float)(dVar13 * dVar22)) * fVar2
                               + (float)(dVar20 * dVar12 + (double)(float)(dVar21 * dVar15))));
    pfVar7[2] = (float)((double)(float)(dVar10 * 0.20000000298023224 + dVar16) * dVar14 +
                       (double)((float)(dVar13 * dVar15 - (double)(float)(dVar12 * dVar19)) * fVar2
                               + (float)(dVar20 * dVar10 + (double)(float)(dVar21 * dVar22))));
    pfVar7 = pfVar7 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FastDrawQuad(local_d0,0,0,EffectTexHeaders,9);
  return;
}


// 0x02baf48 (0x7c8 bytes)
// inlined: FastRSqrt @0x2bb198, FastRSqrt @0x2bb2a8, FastRSqrt @0x2bb548
void M1805_002baf48(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  GPiece<144> local_1d0;
  GPiece<152> local_140;
  
  GetEffectTex(DAT_007b7c40);
  idol_draw::PackCmd(0,2,0,1,0x80);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  GetEffectTex(DAT_007b7c44);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  return;
}


// 0x02bb718 (0xf0 bytes)
void M1805_002bb718(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  undefined8 uVar7;
  
  psVar3 = &DAT_010a0b70;
  iVar2 = 0;
  puVar4 = &DAT_010a0b84;
  uVar7 = 0x3fc99999a0000000;
  puVar5 = &DAT_010a0850;
  do {
    if (*psVar3 != 0) {
      dVar6 = (double)FastIntToDouble(*puVar4);
      uVar1 = FastDoubleToInt((double)(float)(dVar6 * (double)DAT_010a0bc8));
      M1805_002baf48((double)DAT_007b7c20,(double)DAT_007b7c24,uVar7,puVar5,uVar1,uVar1);
    }
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x14;
  } while (iVar2 < 10);
  M1805_002bab98(param_1);
  return;
}


// 0x02bb808 (0x14 bytes)
void M1805_002bb808(void)

{
  DAT_007b7cec = 0x10000;
  return;
}


// 0x02bb840 (0x3c0 bytes)
/* Moby 1805 */

void UpdateMoby_1805(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined8 uVar13;
  float local_70 [4];
  GPiece<16> auStack_60;
  
  lVar8 = (longlong)(int)moby;
  if ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2))
      & 1 << (moby->uid & 0x1f)) == 0) {
    pvVar4 = moby->pVar;
    uVar11 = ZEXT48(pvVar4);
    iVar9 = MB_damage(lVar8,0x10000,0);
    MB_HandleDamage(moby,iVar9,uVar11 + 0x20,0,auStack_60,0,0,4);
    bVar1 = moby->state;
    if (bVar1 == 0) {
      moby->state = '\x01';
    }
    else if (bVar1 < 2) {
      if (iVar9 != 0) {
        uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar9 + 0x2c);
        uVar6 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
        if ((int)((uVar6 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar6) <
            (int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5)) {
          moby->state = '\x02';
        }
        else {
          *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
          *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - fVar2;
          MB_UpdateLightsTransition(lVar8,uVar11 + 0x60);
        }
        moby->damage = -1;
      }
      MB_ColorDyingMoby(lVar8,uVar11 + 0x60);
    }
    else if (bVar1 < 3) {
      if ((moby->group != -1) &&
         (iVar9 = MB_CountActiveMobysByGroup(moby->group,0xffffffffffffffff), iVar9 == 1))
      {
        MB_UnlockSkillPoint(0x16);
      }
      PlayMobySound(0,0,moby);
      MB_DistributeBoltsNearHero(lVar8);
      uVar3 = moby->uid;
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      iVar9 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar5 = *(uint *)(&g_CheckpointBits + iVar9);
      iVar10 = 0;
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar7) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar7) | 1 << (uVar3 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar9) = uVar5 | 1 << (uVar3 & 0x1f);
      dVar12 = 1.5;
      uVar13 = 0;
      do {
        iVar9 = 0x709;
        do {
          MB_RandomizeVector((float)dVar12,local_70);
          MB_SpawnDebrisMoby(uVar13,lVar8,iVar9,local_70,lVar8 + 0x40,0,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x70d);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 2);
      MB_genericExplosion
                (uVar13,uVar13,0x4018000000000000,0x4008000000000000,0x4022000000000000,
                 0x3ff19999a0000000,0x402e000000000000,lVar8,lVar8 + 0x10,0,&DAT_002bb820,3,10,3,
                 0x10);
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


// 0x02bbc00 (0x14 bytes)
void M1805_002bbc00(void)

{
  DAT_007b7d5c = 0x10000;
  return;
}



// game/update/moby1218.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x20ab50-0x20b7a0
// shared update function UpdateMoby_{1218_1220}; registered for oClasses 1218, 1220
#include "game/update/moby1218.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "idol/fastfunc.h"

// 0x020ab50 (0xf8 bytes)
MobyInstance *
M1215_0020ab50(f32 *param_1,undefined4 *param_2,MOBY_OCLASSES param_3)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  double dVar4;
  
  pMVar3 = CreateMoby(param_3);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    *(undefined4 *)((int)pvVar2 + 0x10) = *param_2;
    *(undefined4 *)((int)pvVar2 + 0x14) = param_2[1];
    *(undefined4 *)((int)pvVar2 + 0x18) = param_2[2];
    *(undefined4 *)((int)pvVar2 + 0x1c) = param_2[3];
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.7853982;
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x020ac48 (0x140 bytes)
undefined8 M1220_0020ac48(int param_1,float *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = (MobyInstance *)param_2[0xd];
  if (pMVar4 == (MobyInstance *)0x0) {
    pMVar4 = (MobyInstance *)M1220_0020b6b0(param_1);
    param_2[0xd] = (float)pMVar4;
  }
  if ((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfd || pMVar4->state == 0xfe)) {
    *param_2 = *(float *)(param_1 + 0x10);
    uVar3 = 0;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    puVar2 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  else {
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar4->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    UpdateMobyTransform(pMVar4);
    GetBonePosition(param_2[0xd],0,param_2);
    fVar1 = param_2[0xd];
    uVar3 = 1;
    param_2[8] = *(float *)((int)fVar1 + 0x10) - *param_2;
    param_2[9] = *(float *)((int)fVar1 + 0x14) - param_2[1];
    param_2[10] = *(float *)((int)fVar1 + 0x18) - param_2[2];
    param_2[0xb] = *(float *)((int)fVar1 + 0x1c);
  }
  return uVar3;
}


// shared update function, registered for oClasses 1218, 1220
// 0x020ade8 (0x8b0 bytes)
/* Moby 1218
   Moby 1220 */

void UpdateMoby_1218(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  float *pfVar8;
  f32 fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  GPiece<16> auStack_70;
  
  pMVar19 = DAT_0096b2d0;
  bVar1 = false;
  dVar21 = 100000.0;
  pfVar8 = (float *)moby->pVar;
  dVar22 = dVar21;
  GetBonePosition(moby,0,auStack_70);
  iVar20 = CollSphere(0x3fe19999a0000000,auStack_70);
  if (iVar20 != 0) {
    if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
      MB_genericExplosion
                (0,0,0,0,0x4022000000000000,0x3ff0000000000000,0,moby,pfVar8 + 4,auStack_70,
                 &DAT_0020ad88,1,3,2,5);
      moby->state = '\x05';
    }
    else {
      MVar7 = (g_CollOutput.pMoby)->oClass;
      if ((MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER) || (MVar7 == FIGHTER_JET_0563)) {
        bVar1 = true;
      }
      else {
        MB_genericExplosion
                  (0,0,0,0,0x4022000000000000,0x3ff0000000000000,0,moby,pfVar8 + 4,auStack_70,1,
                   0xffffffffffffffff,3,2,5);
        moby->state = '\x05';
      }
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 4) {
    if ((((g_heroState == TURRET_PLANE_UI) && (pMVar19 != (MobyInstance *)0x0)) &&
        (pMVar19->state != 0xfd && pMVar19->state != 0xfe)) &&
       ((MVar7 = pMVar19->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      fVar3 = (pMVar19->pos).y;
      fVar4 = (moby->pos).y;
      fVar5 = (pMVar19->pos).x;
      fVar11 = fVar3 - fVar4;
      fVar6 = (moby->pos).x;
      fVar12 = fVar5 - fVar6;
      fVar4 = -((fVar4 + pfVar8[1]) * 0.5 - fVar3);
      fVar3 = (pMVar19->pos).z - (moby->pos).z;
      fVar5 = -((fVar6 + *pfVar8) * 0.5 - fVar5);
      dVar22 = (double)SQRT(fVar3 * fVar3 + fVar12 * fVar12 + fVar11 * fVar11);
      dVar21 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    }
    if (((!bVar1) && (4.0 <= dVar22)) && (4.0 <= dVar21)) goto LAB_0020b16c;
    moby->collision = (ushort *)0x0;
    if (pfVar8[0xd] != 0.0) {
      *(undefined4 *)((int)pfVar8[0xd] + 0x94) = 0;
    }
    MVar7 = moby->oClass;
    if ((short)MVar7 < 0x4c3) {
      if (0x4c1 < (short)MVar7) {
        DAT_0096b2d6 = DAT_0096b2d6 + 5;
        if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
           (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
          PlayMobySound(4,0,DAT_0096b2d0);
        }
        if (DAT_0096b2d7 < DAT_0096b2d6) {
          DAT_0096b2d6 = DAT_0096b2d7;
        }
      }
    }
    else if (MVar7 == JET_FIGHTER_HEALTH_CRATE_04C4) {
      DAT_0096b2dc = DAT_0096b2e0 * 0.25 + DAT_0096b2dc;
      if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
         (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
        PlayMobySound(5,0,DAT_0096b2d0);
      }
      if (DAT_0096b2e0 < DAT_0096b2dc) {
        DAT_0096b2dc = DAT_0096b2e0;
      }
    }
  }
  else {
LAB_0020b16c:
    if (bVar2 == 5) {
      DeleteMoby(moby);
      return;
    }
    if (bVar2 != 4) {
      if (bVar2 == 3) {
        pfVar8[6] = -(g_FrameTimeSq * 9.8 - pfVar8[6]);
        (moby->pos).x = (moby->pos).x + pfVar8[4];
        (moby->pos).y = (moby->pos).y + pfVar8[5];
        (moby->pos).z = (moby->pos).z + pfVar8[6];
      }
      else if (bVar2 == 2) {
        dVar21 = (double)FastWrapRot
                                   ((moby->rotation).z,g_FrameTime * 0.034906585);
        (moby->rotation).z = (float)dVar21;
        dVar21 = (double)FastWrapRot(pfVar8[0xc],g_FrameTime * 1.5707964);
        fVar3 = (float)(dVar21 + 1.570796251296997);
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        pfVar8[0xc] = (float)dVar21;
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar6 = fVar3 * fVar4;
        (moby->rotation).y =
             (fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) *
             0.7853982;
        fVar4 = pfVar8[4] * 0.8;
        fVar5 = pfVar8[5] * 0.8;
        pfVar8[4] = fVar4;
        pfVar8[5] = fVar5;
        fVar3 = *pfVar8;
        fVar6 = pfVar8[6] * 0.8 - g_FrameTimeSq * 9.8;
        pfVar8[6] = fVar6;
        if ((dVar22 < 40.0) && (moby->enabled != '\0')) {
          fVar11 = (pMVar19->pos).y - (moby->pos).y;
          fVar12 = (pMVar19->pos).x - (moby->pos).x;
          fVar13 = (pMVar19->pos).z - (moby->pos).z;
          fVar14 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
          fVar15 = 0.0;
          fVar18 = (0.8 / (float)SQRT(dVar22)) / fVar14;
          fVar16 = fVar15;
          if (0.0 - fVar14 < 0.0) {
            fVar16 = fVar18 * fVar13;
          }
          fVar17 = fVar15;
          if (0.0 - fVar14 < 0.0) {
            fVar17 = fVar18 * fVar11;
          }
          if (0.0 - fVar14 < 0.0) {
            fVar15 = fVar18 * fVar12;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar16 = fVar18 * fVar13;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar17 = fVar18 * fVar11;
          }
          if (fVar14 - 0.0 < 0.0) {
            fVar15 = fVar18 * fVar12;
          }
          fVar6 = fVar6 + fVar16;
          fVar5 = fVar5 + fVar17;
          fVar4 = fVar4 + fVar15;
          pfVar8[6] = fVar6;
          pfVar8[5] = fVar5;
          pfVar8[4] = fVar4;
        }
        pfVar8[1] = pfVar8[1] + fVar5;
        *pfVar8 = fVar3 + fVar4;
        pfVar8[2] = pfVar8[2] + fVar6;
        (moby->pos).x = fVar3 + fVar4 + pfVar8[8];
        (moby->pos).y = pfVar8[1] + pfVar8[9];
        (moby->pos).z = pfVar8[2] + pfVar8[10];
        (moby->pos).w = pfVar8[3];
        iVar20 = M1220_0020ac48(moby,pfVar8);
        if ((iVar20 != 0) && (*(char *)((int)pfVar8[0xd] + 0x20) == '\x02')) {
          moby->state = '\x02';
        }
      }
      else if (bVar2 == 1) {
        fVar3 = pfVar8[4];
        fVar4 = pfVar8[5];
        pfVar8[4] = fVar3 * 0.9;
        pfVar8[5] = fVar4 * 0.9;
        fVar5 = *pfVar8 + fVar3 * 0.9;
        fVar3 = g_FrameTimeSq * 9.8;
        pfVar8[1] = pfVar8[1] + fVar4 * 0.9;
        *pfVar8 = fVar5;
        fVar3 = pfVar8[6] * 0.9 - fVar3;
        pfVar8[6] = fVar3;
        pfVar8[2] = pfVar8[2] + fVar3;
        (moby->pos).x = fVar5 + pfVar8[8];
        (moby->pos).y = pfVar8[1] + pfVar8[9];
        (moby->pos).z = pfVar8[2] + pfVar8[10];
        (moby->pos).w = pfVar8[3];
        iVar20 = M1220_0020ac48(moby,pfVar8);
        if ((iVar20 != 0) && (*(char *)((int)pfVar8[0xd] + 0x52) == '\x01')) {
          pfVar8[4] = pfVar8[4] * 0.8;
          pfVar8[5] = pfVar8[5] * 0.8;
          pfVar8[6] = pfVar8[6] * 0.8;
          moby->state = '\x02';
        }
      }
      else if (bVar2 == 0) {
        pfVar8[0xd] = 0.0;
        M1220_0020ac48(moby,pfVar8);
        pfVar8[0xc] = 0.0;
        moby->state = '\x01';
      }
      goto LAB_0020b54c;
    }
  }
  moby->state = '\x05';
LAB_0020b54c:
  fVar9 = (moby->pos).z;
  uVar10 = (int)fVar9 >> 0x1f;
  fVar3 = 20.0;
  bVar1 = (int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000;
  if (bVar1) {
    DeleteMoby(moby);
  }
  else {
    fVar9 = (moby->pos).x;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar4 = (moby->pos).x;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).x = 1003.0;
    }
    fVar9 = (moby->pos).y;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar4 = (moby->pos).y;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).y = 1003.0;
    }
    fVar4 = (moby->pos).z;
    if (bVar1) {
      (moby->pos).z = 20.0;
      fVar4 = fVar3;
    }
    if (1003.0 < fVar4) {
      (moby->pos).z = 1003.0;
    }
    MB_RegisterLameShadow(0.5,moby);
  }
  return;
}


// 0x020b698 (0x14 bytes)
void M1220_0020b698(void)

{
  DAT_00766a10 = 0x10000;
  return;
}


// 0x020b6b0 (0xf0 bytes)
MobyInstance * M1220_0020b6b0(int param_1)

{
  u8 uVar1;
  f32 fVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(0x4c3);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar2 = *(f32 *)(param_1 + 0x1c);
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar2;
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar2 = *(f32 *)(param_1 + 0x44);
    *(int *)((int)pvVar3 + 0x70) = param_1;
    (pMVar4->rotation).y = fVar2;
    uVar1 = pMVar4->animationId;
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    if (uVar1 != '\x02') {
      MB_SetAnimation(pMVar4,2,0xd,0);
    }
    UpdateMobyTransform(pMVar4);
    MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}



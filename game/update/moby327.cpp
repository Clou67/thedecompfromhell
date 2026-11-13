// game/update/moby327.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3426d8-0x3431c8
#include "game/update/moby327.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby775.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x03426d8 (0x264 bytes)
MobyInstance * FUN_003426d8(float param_1,float *param_2)

{
  float fVar1;
  f32 fVar2;
  float *outQuat;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  float local_40;
  float local_3c;
  float local_38;
  f32 local_34;
  
  pMVar4 = CreateMoby(ROCKET_0100|FIGHTER_JET_0045);
  if (pMVar4 != (MobyInstance *)0x0) {
    outQuat = (float *)pMVar4->pVar;
    outQuat[9] = param_1;
    local_40 = *param_2;
    (pMVar4->pos).x = local_40;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    fVar2 = *(f32 *)((int)param_1 + 0x48);
    pMVar4->updateDistance = -1;
    (pMVar4->rotation).z = fVar2;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    local_3c = g_heroPosition.y;
    local_40 = local_40 - g_heroPosition.x;
    pMVar4->drawDistance = 0xff;
    local_3c = (pMVar4->pos).y - local_3c;
    local_34 = (pMVar4->pos).w;
    dVar8 = 0.0;
    local_38 = 0.0;
    dVar5 = (double)MB_randRangeFloat
                              (DAT_0071f408 * DAT_0083bd10,DAT_0071f408 * DAT_0083bd14);
    dVar9 = (double)SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
    fVar1 = (float)(dVar5 / dVar9);
    dVar5 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar5 = (double)(local_40 * fVar1);
    }
    dVar7 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar7 = (double)(local_3c * fVar1);
    }
    dVar6 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar6 = (double)(local_38 * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar5 = (double)(local_40 * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar7 = (double)(local_3c * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar6 = (double)(local_38 * fVar1);
    }
    local_40 = (float)dVar5;
    local_3c = (float)dVar7;
    local_38 = (float)dVar6;
    dVar5 = (double)MB_randRangeSigned(0x3fd6571840000000,0x3ff0c15240000000);
    MB_RotateQuatAxisAngle((float)dVar5,outQuat,&local_40);
    dVar5 = (double)MB_randRangeFloat
                              (DAT_0071f408 * DAT_0083bd18,DAT_0071f408 * DAT_0083bd1c);
    outQuat[2] = (float)dVar5;
    dVar5 = (double)MB_randRangeSigned(dVar8,0x3f81df46a0000000);
    outQuat[4] = (float)dVar5;
    dVar5 = (double)MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
    outQuat[5] = (float)dVar5;
    dVar5 = (double)MB_randRangeSigned(dVar8,0x3f91df46a0000000);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    outQuat[6] = (float)dVar5;
    auVar12 = loadVectorLeftIndexed(0x1c,0x3426b8);
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x20,
                       ZEXT48(outQuat));
    *(undefined4 *)((uint)(outQuat + 8) & 0xfffffffc) = uVar3;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0342950 (0x3d4 bytes)
// inlined: FastRSqrt @0x342b30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M327_00342950(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float local_130 [16];
  float local_f0 [38];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  fVar5 = *(float *)(param_1 + 0xc4) * DAT_0083bd2c + *(float *)(param_1 + 0xe4) * DAT_0083bd30 +
          *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0xc0) * DAT_0083bd2c + *(float *)(param_1 + 0xe0) * DAT_0083bd30 +
          *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 200) * DAT_0083bd2c + *(float *)(param_1 + 0xe8) * DAT_0083bd30 +
          *(float *)(param_1 + 0x18);
  fVar13 = 0.0;
  fVar11 = GameCamera.posY - fVar5;
  fVar3 = GameCamera.posX - fVar6;
  fVar12 = GameCamera.posZ - fVar7;
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = fVar12 * fVar12 + fVar3 * fVar3 + fVar11 * fVar11;
  fVar9 = fVar13;
  fVar8 = fVar13;
  fVar10 = fVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar3 * fVar10;
    fVar8 = fVar11 * fVar10;
    fVar10 = fVar12 * fVar10;
  }
  fVar15 = g_heroGravityDir.z * fVar9 - g_heroGravityDir.x * fVar10;
  fVar3 = g_heroGravityDir.y * fVar10 - g_heroGravityDir.z * fVar8;
  fVar4 = g_heroGravityDir.x * fVar8 - g_heroGravityDir.y * fVar9;
  pfVar18 = local_f0;
  lVar19 = 4;
  pfVar17 = local_130;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar15 * fVar15);
  fVar12 = (float)GameCamera.posW * 0.4;
  fVar16 = -1.0 / fVar2;
  fVar11 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  fVar14 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (0.0 - fVar2 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  do {
    fVar2 = *pfVar17;
    fVar3 = pfVar17[1];
    fVar15 = fVar2 * 0.4;
    fVar4 = pfVar17[3];
    fVar16 = pfVar17[2] * 0.4;
    pfVar17 = pfVar17 + 4;
    pfVar18[3] = fVar4 * fVar1 + fVar2 * fVar12;
    *pfVar18 = fVar4 * fVar6 +
               (fVar8 * fVar13 - fVar10 * fVar14) * fVar16 + fVar15 * fVar9 + fVar3 * fVar11 * 0.4;
    pfVar18[1] = fVar4 * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar13) * fVar16 + fVar15 * fVar8 + fVar3 * fVar14 * 0.4
    ;
    pfVar18[2] = fVar4 * fVar7 +
                 (fVar9 * fVar14 - fVar8 * fVar11) * fVar16 + fVar15 * fVar10 + fVar3 * fVar13 * 0.4
    ;
    pfVar18 = pfVar18 + 4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
  return;
}


// 0x0342d24 (0x14 bytes)
void M327_00342d24(void)

{
  DAT_0083bd80 = 0x10000;
  return;
}


// 0x0342d38 (0x8 bytes)
double FUN_00342d38(int param_1)

{
  return (double)*(float *)(param_1 + 8);
}


// 0x0342d40 (0x4 bytes)
void FUN_00342d40(void)

{
  return;
}


// 0x0342d44 (0x2c bytes)
void M327_Batalia_SubmitOcean(void)

{
  SubmitZone(&OCEAN_BATALIA);
  return;
}


// 0x0342db8 (0x410 bytes)
/* Moby 327 */

void UpdateMoby_327_BataliaOcean(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
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
  double dVar24;
  double dVar25;
  double dVar26;
  Vec4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  if (DAT_010c50e0 == 0) {
    DAT_010c50e0 = 1;
    OceanPlane_SetDefaultDepth(0x3fe5555560000000,&OCEAN_BATALIA);
  }
  RegisterFuncForMoby(&PTR_M327_Batalia_SubmitOcean_0070c2e8,moby);
  if (Level == Batalia) {
    if (((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
              ((int)g_heroPosition.z >> 0x1f)) <
         (int)(((uint)((int)OCEAN_BATALIA.z >> 0x1f) >> 1 ^ (uint)OCEAN_BATALIA.z) -
              ((int)OCEAN_BATALIA.z >> 0x1f))) &&
       (OCEAN_BATALIA.z <= g_heroPosition.z - DAT_00969de8)) {
      iVar2 = IsMobyPlayingSound(g_heroMobyPtr,(int)DAT_0096bf92);
      if (iVar2 != 0) {
        sound_Kill((int)DAT_0096bf92);
        DAT_0096bf92 = -1;
      }
      local_c0.x = g_heroPosition.x;
      local_c0.y = g_heroPosition.y;
      local_c0.w = g_heroPosition.w;
      local_c0.z = OCEAN_BATALIA.z;
      dVar17 = 3.0;
      iVar2 = FUN_00456478(0x4008000000000000,&local_c0);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x23) = 0x70;
      }
      dVar18 = 0.0;
      iVar2 = 0;
      dVar19 = 1.570796251296997;
      dVar20 = 3.141592502593994;
      dVar21 = -3.141592502593994;
      dVar22 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar24 = -0.0001980741071747616;
      dVar25 = 2.601886990305502e-06;
      dVar26 = 6.5;
      do {
        dVar7 = (double)MB_randRot();
        dVar8 = (double)MB_randRangeFloat
                                  ((float)dVar18,(float)((double)g_FrameTime * dVar17));
        dVar11 = (double)(float)(dVar7 + dVar19);
        dVar9 = (double)(float)(dVar20 - dVar7);
        if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
          dVar9 = dVar7;
        }
        dVar13 = (double)(float)(dVar20 - dVar11);
        if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
          dVar13 = dVar11;
        }
        dVar12 = (double)(float)(dVar21 - dVar7);
        if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
          dVar12 = dVar9;
        }
        dVar9 = (double)(float)(dVar21 - dVar11);
        if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
          dVar9 = dVar13;
        }
        dVar7 = (double)(float)(dVar12 * dVar12);
        dVar11 = (double)(float)(dVar9 * dVar9);
        dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
        dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
        dVar14 = (double)(float)(dVar7 * dVar15);
        dVar16 = (double)(float)(dVar11 * dVar13);
        local_ac = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar25 +
                                          (double)(float)(dVar14 * dVar24 +
                                                         (double)(float)(dVar15 * dVar23 +
                                                                        (double)(float)((double)(
                                                  float)(dVar7 * dVar12) * dVar22 + dVar12)))) *
                          dVar8);
        local_b0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar25 +
                                          (double)(float)(dVar16 * dVar24 +
                                                         (double)(float)(dVar13 * dVar23 +
                                                                        (double)(float)((double)(
                                                  float)(dVar11 * dVar9) * dVar22 + dVar9)))) *
                          dVar8);
        dVar9 = (double)MB_randRangeFloat
                                  ((float)((double)g_FrameTime * dVar17),
                                   (float)((double)g_FrameTime * dVar26));
        local_a8 = (float)dVar9;
        uVar3 = MB_randRange(0x5a,0x78);
        uVar4 = MB_randInt(2);
        SpawnPart_35(&local_c0,&local_b0,uVar4,uVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      dVar17 = 1.0;
      iVar2 = 0;
      dVar18 = 0.05000000074505806;
      dVar19 = 0.699999988079071;
      dVar20 = 30.0;
      dVar21 = 60.0;
      do {
        MB_randSphere(dVar17,dVar17,&local_a0);
        local_a0 = local_a0 + local_c0.x;
        local_9c = local_9c + local_c0.y;
        local_98 = (float)((double)OCEAN_BATALIA.z + dVar18);
        uVar10 = MB_randRangeFloat((float)dVar19,(float)dVar17);
        fVar1 = -2.0;
        if (iVar2 == 0) {
          fVar1 = 2.0;
        }
        iVar5 = SpawnPart_46(uVar10,(double)fVar1,&local_a0,&DAT_00a15d30);
        if (iVar5 != 0) {
          dVar22 = (double)MB_randRangeFloat((float)dVar20,(float)dVar21);
          uVar6 = FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
          *(undefined2 *)(iVar5 + 10) = uVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
    }
  }
  return;
}



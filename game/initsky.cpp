// game/initsky.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0xd93a8-0xda2e0
#include "game/initsky.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x00d93a8 (0x14 bytes)
void SECTION_HEADER_INITSKY(void)

{
  DAT_00724684 = 0x10000;
  return;
}


// 0x00d93c0 (0x28c bytes)
// strings: 00652204: 'Sky'

void InitSky(void)

{
  undefined8 uVar1;
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Sky");
  SetupGifPaging();
  if ((int)Level < 10) {
    if (3 < (int)Level) {
      if ((int)Level < 7) {
        if ((int)Level < 5) {
          SkyLevel_04();
        }
        else if ((int)Level < 6) {
          SkyLevel_05();
        }
        else {
          SkyLevel_06();
        }
      }
      else if ((int)Level < 8) {
        SkyLevel_07();
      }
      else if ((int)Level < 9) {
        SkyLevel_08();
      }
      else {
        SkyLevel_09();
      }
      goto LAB_000d95bc;
    }
    if (0 < (int)Level) {
      if ((int)Level < 2) {
        SkyLevel_01();
      }
      else if ((int)Level < 3) {
        SkyLevel_02();
      }
      else {
        SkyLevel_03();
      }
      goto LAB_000d95bc;
    }
    if (-1 < (int)Level) {
      SkyLevel_00();
      goto LAB_000d95bc;
    }
  }
  else {
    if ((int)Level < 0xf) {
      if ((int)Level < 0xc) {
        if ((int)Level < 0xb) {
          SkyLevel_10();
        }
        else {
          SkyLevel_11();
        }
      }
      else if ((int)Level < 0xd) {
        SkyLevel_12();
      }
      else if ((int)Level < 0xe) {
        SkyLevel_13();
      }
      else {
        SkyLevel_14();
      }
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x12) {
      if ((int)Level < 0x10) {
        SkyLevel_15();
      }
      else if ((int)Level < 0x11) {
        SkyLevel_16();
      }
      else {
        SkyLevel_17();
      }
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x13) {
      SkyLevel_18();
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x14) {
      SkyLevel_19();
      goto LAB_000d95bc;
    }
  }
  SkyLevelNone();
LAB_000d95bc:
  DoSkyGifPaging();
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  uVar1 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar1);
  idol_draw::RsxCmd_WritePass(ForwardPass);
  return;
}


// 0x00d9668 (0x558 bytes)
// inlined: FastRSqrt @0xd9820
void DrawSceneShipEffect(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *outQuat;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar15 = uVar9 - 0x1b0;
  puVar6 = (ulonglong *)lVar15;
  *puVar6 = uVar9;
  puVar6[0x38] = in_LR;
  puVar6[0x2e] = in_f24;
  puVar6[0x2f] = in_f25;
  puVar6[0x30] = in_f26;
  puVar6[0x31] = in_f27;
  puVar6[0x32] = in_f28;
  puVar6[0x33] = in_f29;
  puVar6[0x34] = in_f30;
  puVar6[0x35] = in_f31;
  puVar6[0x2d] = unaff_r31;
  puVar6[0x2c] = unaff_r30;
  puVar6[0x2b] = unaff_r29;
  puVar6[0x2a] = unaff_r28;
  puVar6[0x29] = unaff_r27;
  puVar6[0x28] = unaff_r26;
  uVar10 = GetEffectTex(0xe);
  uVar11 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar12 = FUN_00502f08(1,1,0,0,0,0);
  uVar13 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar6[0x25] = uVar10;
  *(undefined4 *)(puVar6 + 0x1e) = 0x3ff08080;
  *(undefined4 *)((int)puVar6 + 0xf4) = 0x3ff08080;
  *(undefined4 *)(puVar6 + 0x1f) = 0x3ff08030;
  *(undefined4 *)((int)puVar6 + 0xfc) = 0x3ff08030;
  puVar6[0x26] = uVar11;
  puVar6[0x24] = uVar12;
  puVar6[0x27] = uVar13;
  dVar17 = 0.0;
  *(undefined4 *)(puVar6 + 0x20) = 0;
  *(undefined4 *)((int)puVar6 + 0x104) = 0;
  dVar25 = 1.0;
  *(undefined4 *)(puVar6 + 0x21) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0x10c) = 0;
  *(undefined4 *)(puVar6 + 0x22) = 0;
  *(undefined4 *)((int)puVar6 + 0x114) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0x11c) = 0x3f800000;
  GetBoneTransformations(param_1,0,uVar9 - 0x140);
  outQuat = (float *)(uVar9 - 0x140);
  MB_RotateQuatAxisAngle(-0.34906584,outQuat,outQuat);
  dVar22 = (double)*(float *)(puVar6 + 0xf);
  fVar5 = *(float *)((int)puVar6 + 0x74);
  dVar23 = (double)fVar5;
  dVar18 = (double)*(float *)(puVar6 + 0xe);
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  fVar2 = (float)((double)*(float *)(puVar6 + 0x13) * dVar18 -
                 (double)(float)((double)*(float *)(puVar6 + 0x12) * dVar22));
  fVar3 = (float)((double)*(float *)((int)puVar6 + 0x94) * dVar22 -
                 (double)(float)((double)*(float *)(puVar6 + 0x13) * dVar23));
  fVar4 = (float)((double)*(float *)(puVar6 + 0x12) * dVar23 -
                 (double)(float)((double)*(float *)((int)puVar6 + 0x94) * dVar18));
  dVar21 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar19 = dVar17;
  dVar20 = dVar17;
  if ((double)(float)SQRT(dVar21) != dVar17) {
    dVar19 = 1.0 / SQRT(dVar21);
    dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                             (double)(float)(dVar19 * 0.5) + dVar19);
    dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                             (double)(float)(dVar19 * 0.5) + dVar19);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                    (double)(float)(dVar19 * 0.5) + dVar19);
    dVar20 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar17 = (double)(fVar4 * fVar1);
  }
  *(float *)(puVar6 + 0x10) = (float)dVar20;
  *(float *)((int)puVar6 + 0x84) = (float)dVar19;
  *(float *)(puVar6 + 0x11) = (float)dVar17;
  dVar21 = (double)(float)(dVar22 + dVar22);
  dVar25 = (double)(float)(dVar23 + dVar23);
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  *(float *)(puVar6 + 0x12) = (float)(dVar23 * dVar17 - (double)(float)(dVar22 * dVar19));
  *(float *)((int)puVar6 + 0x94) = (float)(dVar22 * dVar20 - (double)(float)(dVar18 * dVar17));
  *(float *)(puVar6 + 0x13) = (float)(dVar18 * dVar19 - (double)(float)(dVar23 * dVar20));
  dVar18 = 0.25;
  *(undefined4 *)((int)puVar6 + 0xb4) = 0;
  *(undefined4 *)(puVar6 + 0x16) = 0;
  *(undefined4 *)(puVar6 + 0x17) = 0;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(float *)((int)puVar6 + 0xc4) = fVar5;
  *(undefined4 *)(puVar6 + 0x18) = 0x3f800000;
  dVar17 = -0.25;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  dVar20 = (double)(float)(dVar22 + -0.25);
  *(undefined4 *)(puVar6 + 0x1a) = 0;
  dVar19 = (double)(float)(dVar22 + 0.25);
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xd4) = 0;
  *(undefined4 *)(puVar6 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1b) = 0;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(float *)((int)puVar6 + 0xe4) = fVar5;
  uVar8 = EffectTexHeaders;
  *(float *)(puVar6 + 0x19) = (float)(dVar22 + -0.25);
  *(float *)(puVar6 + 0x1d) = (float)(dVar22 + 0.25);
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 1;
  lVar14 = uVar9 - 0x1a0;
  do {
    iVar7 = (int)lVar14;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar22 = dVar17;
      dVar24 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar22 = dVar18;
      dVar24 = dVar17;
    }
    iVar16 = iVar16 + 2;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar24);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar22);
    lVar14 = lVar14 + 0x20;
  } while (iVar16 < 4);
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  dVar24 = (double)(float)(dVar21 + dVar17);
  *(float *)((int)puVar6 + 0xb4) = (float)dVar23;
  *(float *)((int)puVar6 + 0xd4) = (float)dVar23;
  dVar22 = (double)(float)(dVar21 + dVar18);
  *(undefined4 *)(puVar6 + 0x16) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x18) = 0x40000000;
  *(float *)(puVar6 + 0x17) = (float)dVar20;
  *(float *)((int)puVar6 + 0xc4) = (float)dVar25;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1a) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1c) = 0x40000000;
  *(float *)(puVar6 + 0x19) = (float)(dVar21 + dVar17);
  *(float *)(puVar6 + 0x1b) = (float)dVar19;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(float *)((int)puVar6 + 0xe4) = (float)dVar25;
  uVar8 = EffectTexHeaders;
  *(float *)(puVar6 + 0x1d) = (float)(dVar21 + dVar18);
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 0;
  lVar14 = lVar15;
  do {
    iVar7 = (int)lVar14;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar17;
      dVar20 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar18;
      dVar20 = dVar17;
    }
    iVar16 = iVar16 + 1;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar20);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar19);
    lVar14 = lVar14 + 0x10;
  } while (iVar16 < 4);
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  *(undefined4 *)(puVar6 + 0x16) = 0x40000000;
  *(float *)((int)puVar6 + 0xb4) = (float)dVar25;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(float *)(puVar6 + 0x17) = (float)dVar24;
  *(undefined4 *)(puVar6 + 0x18) = 0x40400000;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x19) = 0;
  *(undefined4 *)((int)puVar6 + 0xc4) = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0x40000000;
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(float *)((int)puVar6 + 0xd4) = (float)dVar25;
  *(undefined4 *)(puVar6 + 0x1c) = 0x40400000;
  *(float *)(puVar6 + 0x1b) = (float)dVar22;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xe4) = 0;
  uVar8 = EffectTexHeaders;
  *(undefined4 *)(puVar6 + 0x1d) = 0;
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 0;
  do {
    iVar7 = (int)lVar15;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar17;
      dVar20 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar18;
      dVar20 = dVar17;
    }
    iVar16 = iVar16 + 2;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar20);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar19);
    lVar15 = lVar15 + 0x20;
  } while (iVar16 < 4);
  FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  return;
}


// 0x00d9bf8 (0x2d0 bytes)
// strings: 000d9bf0: '?333`'

void SpawnSceneShipParticles(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  float afStack_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  longlong local_b0;
  
  GetBonePosition(param_1,0,&local_c0);
  dVar8 = 0.15000000596046448;
  dVar9 = 0.5;
  iVar3 = 0;
  dVar10 = 0.3490658402442932;
  dVar11 = 1.535889744758606;
  dVar12 = 0.05000000074505806;
  dVar13 = 0.20000000298023224;
  uVar14 = 0;
  dVar15 = 60.5;
  dVar16 = 0.10000000149011612;
  uVar17 = 0x3f826e9780000000;
  uVar18 = 0x4010000000000000;
  dVar19 = 0.07000000029802322;
  dVar20 = 0.699999988079071;
  do {
    dVar4 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9);
    MB_randInt(2);
    dVar5 = (double)MB_randRot();
    dVar6 = (double)MB_randRangeFloat((float)dVar10,(float)dVar11);
    dVar7 = (double)MB_randRangeFloat((float)dVar12,(float)dVar13);
    MB_SphericalToVector
              ((float)(dVar7 * (double)DAT_0071f408),(float)dVar5,(float)dVar6,afStack_d0);
    dVar5 = (double)MB_randRangeSigned(uVar14,dVar8);
    local_c0 = (float)((double)local_c0 + dVar5);
    dVar5 = (double)MB_randRangeSigned(uVar14,dVar8);
    local_bc = (float)((double)local_bc + dVar5);
    dVar5 = (double)MB_randRangeSigned(uVar14,dVar8);
    local_b8 = (float)((double)local_b8 + dVar5);
    local_b0 = (longlong)(int)((double)animationSpeed * dVar15);
    iVar1 = SpawnPart_53
                      ((double)(float)(dVar4 * dVar16),dVar4,uVar17,&local_c0,
                       (int)((double)animationSpeed * dVar15));
    if (iVar1 != 0) {
      cVar2 = FastDoubleToInt(uVar18);
      *(char *)(iVar1 + 9) = cVar2 + 'p';
    }
    local_b0 = (longlong)(int)((double)animationSpeed * dVar15);
    iVar1 = SpawnPart_53
                      ((double)(float)(dVar4 * dVar19),(double)(float)(dVar4 * dVar20),uVar17,
                       &local_c0,(int)((double)animationSpeed * dVar15));
    if (iVar1 != 0) {
      cVar2 = FastDoubleToInt(uVar18);
      *(char *)(iVar1 + 9) = cVar2 + 'p';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}


// 0x00d9ee8 (0x3f8 bytes)
void UpdateSpaceSceneEffects(void)

{
  int iVar1;
  MobyInstance *moby;
  short sVar3;
  LevelId LVar2;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auStack_90;
  float local_80 [8];
  
  if (Level == Veldin) {
    iVar4 = 0;
    puVar6 = &DAT_0095cd50;
    sVar3 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if (((MobyInstance *)puVar6[0x5e])->oClass == VELDIN_SHIP) {
          RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,(MobyInstance *)puVar6[0x5e]);
          sVar3 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < sVar3);
    }
  }
  LVar2 = Level;
  if (Level == Aridia) {
    iVar4 = 0;
    puVar6 = &DAT_0095cd50;
    sVar3 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        iVar1 = puVar6[0x5e];
        if (*(short *)(iVar1 + 0xa6) == 0x1b1) {
          *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 0x800;
          sVar3 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < sVar3);
    }
  }
  iVar4 = DAT_0095ced4;
  if ((((LVar2 == Kerwan) && (g_SceneId == 5)) &&
      ((int)(animationSpeed * 900.5) < g_SpaceSceneFrame)) &&
     ((g_SpaceSceneFrame < (int)(animationSpeed * 1100.5) && (DAT_0095ced4 != 0)))) {
    uVar5 = 0;
    dVar10 = 0.699999988079071;
    dVar11 = 2.200000047683716;
    uVar12 = 0x4101f1c000000000;
    dVar13 = 12.5;
    dVar14 = 35.5;
    do {
      GetBonePosition
                (iVar4,uVar5 + (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0)) * -2
                 ,auStack_90);
      dVar7 = (double)MB_randRot();
      dVar8 = (double)MB_randRot();
      dVar9 = (double)MB_randRangeFloat
                                ((float)((double)g_FrameTime * dVar10),
                                 (float)((double)g_FrameTime * dVar11));
      MB_SphericalToVector((float)dVar9,(float)dVar7,(float)dVar8,local_80);
      MB_randRange
                ((int)((double)animationSpeed * dVar13),(int)((double)animationSpeed * dVar14));
      SpawnPart_22(uVar12,auStack_90,local_80,0xffffffff80808080,&DAT_00808080);
      uVar5 = uVar5 + 1;
      LVar2 = Level;
    } while ((int)uVar5 < 4);
  }
  if (((LVar2 == Umbris) && (g_SceneId == 4)) &&
     ((DAT_0095ced8 != (MobyInstance *)0x0 && (DAT_0095ced8->oClass == RED_SHIP)))) {
    RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,DAT_0095ced8);
    LVar2 = Level;
  }
  moby = DAT_0095cecc;
  if ((((LVar2 == Oltanis) && (g_SceneId == 0)) && (DAT_0095cecc != (MobyInstance *)0x0)) &&
     (g_SpaceSceneFrame < 0x22 && 0x1b < g_SpaceSceneFrame)) {
    SpawnSceneShipParticles(DAT_0095cecc);
    RegisterFuncForMoby(&PTR_DrawSceneShipEffect_007059a8,moby);
    LVar2 = Level;
  }
  if (LVar2 == Quartu) {
    puVar6 = &DAT_0095cd50;
    if (((g_SceneId == 3) || (g_SceneId == 4)) &&
       (iVar4 = 0, 0 < g_SpaceSceneMobyCnt.piece<0,2>())) {
      do {
        SetMobyLightFromBlender((MobyInstance *)puVar6[0x5e]);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < g_SpaceSceneMobyCnt.piece<0,2>());
    }
  }
  return;
}



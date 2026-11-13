// game/update/moby1422.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x2736bc-0x27a06c
#include <math.h>
#include "game/update/moby1422.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "game/update/camera18.h"
#include "game/update/camera5.h"
#include "game/update/moby1130.h"
#include "game/update/moby1356.h"
#include "game/update/moby1387.h"
#include "game/update/moby1907.h"
#include "game/update/moby388.h"
#include "game/update/moby566.h"
#include "game/update/moby570.h"
#include "game/update/moby584.h"
#include "game/update/moby587.h"
#include "game/update/moby625.h"
#include "game/update/moby629.h"
#include "game/update/moby646.h"
#include "game/update/moby984.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02736bc (0x14 bytes)
void M1422_002736bc(void)

{
  DAT_007a9f4c = 0x10000;
  return;
}


// 0x02736d0 (0xe0 bytes)
// strings: 0096c074: 'None'

void M1422_002736d0(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == DREK) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_007aa014;
          DAT_00a1bfa4 = DAT_007aa014;
          DAT_00a1bfa8 = DAT_007aa014;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x02737b8 (0x440 bytes)
// strings: 00953fe0: 'None'

double M1422_002737b8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  UpdateCam *pUVar6;
  UpdateCam *unused;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(ImportCameras + *(int *)(iVar2 + 0x224) * 0x20 + 0x1c);
  FastDecTimerS32(iVar2 + 0x360);
  fVar12 = g_heroPosition.y - *(float *)(iVar2 + 0x3c4);
  fVar5 = g_heroPosition.x - *(float *)(iVar2 + 0x3c0);
  cVar1 = *(char *)(param_1 + 0x20);
  fVar5 = SQRT(fVar5 * fVar5 + fVar12 * fVar12);
  fVar12 = DAT_007aa024;
  if ((fVar5 <= DAT_007aa024) && (fVar12 = fVar5, fVar5 < DAT_007aa020)) {
    fVar12 = DAT_007aa020;
  }
  fVar12 = (fVar12 - DAT_007aa020) / (DAT_007aa024 - DAT_007aa020);
  dVar10 = (double)((DAT_007aa028 - DAT_007aa030) * fVar12 + DAT_007aa030);
  dVar11 = (double)((DAT_007aa02c - DAT_007aa034) * fVar12 + DAT_007aa034);
  if (cVar1 == '\x13') {
    if (((g_heroStateType == 0xf) || (g_heroState == GRINDRAIL_DAMAGE)) &&
       ((*(int *)(iVar2 + 0x364) == 0 &&
        ((uVar4 = (int)*(uint *)(iVar2 + 0x390) >> 0x1f,
         (int)((uVar4 >> 1 ^ *(uint *)(iVar2 + 0x390)) - uVar4) < 0x41c80001 &&
         (*(int *)(iVar2 + 0x360) == 0)))))) {
      dVar10 = (double)DAT_007aa038;
      dVar11 = (double)DAT_007aa03c;
      unused = (UpdateCam *)&DAT_007b0000;
    }
    else {
      unused = (UpdateCam *)(((ulonglong)*(uint *)(iVar2 + 0x344) & 0x1ffffff) << 7);
      fVar12 = g_heroPosition.y - *(float *)((int)unused->mtx + (int)&(Cuboids->pos).y);
      fVar5 = g_heroPosition.x - *(float *)((int)unused->mtx + (int)&(Cuboids->pos).x);
      if (SQRT(fVar5 * fVar5 + fVar12 * fVar12) < 28.0) {
        dVar10 = (double)DAT_007aa040;
        dVar11 = (double)DAT_007aa044;
        unused = (UpdateCam *)&DAT_007b0000;
      }
    }
  }
  else if ((cVar1 == '\t') || (cVar1 == '\x06')) {
    dVar10 = (double)DAT_007aa048;
    dVar11 = (double)DAT_007aa04c;
    unused = (UpdateCam *)&DAT_007b0000;
  }
  else if ((((cVar1 == '\0') || (cVar1 == '\n')) || (cVar1 == '\v')) ||
          ((cVar1 == '\x01' || (cVar1 == '\x1b')))) {
    lVar7 = 0;
    pUVar6 = UpdateCams;
    do {
      if (((*(int *)(iVar2 + 0x3ec) == 0) && (g_standingOnMoby != 0)) &&
         (*(short *)(g_standingOnMoby + 0xa6) == 0x24b)) {
        *(undefined4 *)(iVar2 + 0x3ec) = 1;
      }
      if ((UpdateCamsUsed[(int)lVar7] != '\0') &&
         (iVar8 = (int)(lVar7 << 7) + (int)(lVar7 << 5),
         *(short *)((int)UpdateCams[0].lPos + iVar8 + 0x22) == 0x12)) {
        Cam18_SetTriggered((UpdateCam *)((int)UpdateCams[0].mtx + iVar8));
        if (*(int *)(iVar2 + 0x368) != -1) {
          pUVar6 = (UpdateCam *)0x0;
          Hud_SetEntryValueById(*(int *)(iVar2 + 0x368),0);
          *(undefined4 *)(iVar2 + 0x368) = 0xffffffff;
        }
        unused = pUVar6;
        if ((((1 < *(byte *)(param_1 + 0x20)) &&
             (unused = *(UpdateCam **)(iVar2 + 0x3ec),
             unused != (UpdateCam *)0x0 || g_deplanetizerUp != 0)) &&
            (GameCamera.pCurrentUpdCam != (void *)0x0)) &&
           (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0)) {
          unused = (UpdateCam *)0x0;
          uVar9 = 0x3f689374c0000000;
          Cam0_SetCamDist((double)DAT_007aa048,0x3f689374c0000000);
          Cam0_SetCamHeight((double)DAT_007aa04c,uVar9);
        }
        break;
      }
      iVar8 = (int)lVar7 + 1;
      lVar7 = (longlong)iVar8;
      unused = UpdateCams;
    } while (iVar8 < 0x30);
  }
  else {
    unused = (UpdateCam *)g_heroState;
    if (0 < *(int *)(iVar2 + 0x38c)) {
      unused = (UpdateCam *)0xffff;
      iVar8 = RegisterHUDCallback
                        (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                         &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                         (int *)(iVar2 + 0x36c),0x15e);
      *(int *)(iVar2 + 0x368) = iVar8;
    }
  }
  OrganicDelt
            ((float)dVar10,DAT_007aa01c * g_FrameTimeSq,DAT_007aa01c * g_FrameTimeSq,
             DAT_007aa018 * g_FrameTime,(float *)(iVar3 + 0x34),(int)unused,
             (float *)(iVar2 + 0x378));
  fVar12 = OrganicDelt
                     ((float)dVar11,DAT_007aa01c * g_FrameTimeSq,DAT_007aa01c * g_FrameTimeSq,
                      DAT_007aa018 * g_FrameTime,(float *)(iVar3 + 0x38),(int)unused,
                      (float *)(iVar2 + 0x37c));
  return (double)fVar12;
}


// 0x0273c08 (0x13c bytes)
undefined8 M1422_00273c08(double param_1,int param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_40 [4];
  
  iVar1 = *(int *)(param_2 + 0x78);
  dVar6 = 0.0;
  local_40[0] = 0.0;
  dVar9 = (double)(param_3[1] - *(float *)(iVar1 + 0x3c4));
  dVar8 = (double)(*param_3 - *(float *)(iVar1 + 0x3c0));
  target = SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  dVar7 = (double)target;
  OrganicDelt
            (target,g_FrameTimeSq * 10.0,g_FrameTimeSq * 10.0,(float)param_1,local_40,0x720000,
             (float *)(iVar1 + 0x374));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0x374) / dVar7);
  uVar2 = (int)*(uint *)(iVar1 + 0x374) >> 0x1f;
  dVar9 = (double)(float)(dVar9 * dVar4);
  dVar8 = (double)(float)(dVar8 * dVar4);
  dVar4 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar4 = dVar9;
  }
  dVar5 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar5 = dVar8;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar4 = dVar9;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar5 = dVar8;
  }
  *(float *)(iVar1 + 0x3c4) = (float)((double)*(float *)(iVar1 + 0x3c4) + dVar4);
  *(float *)(iVar1 + 0x3c0) = (float)((double)*(float *)(iVar1 + 0x3c0) + dVar5);
  if ((0.10000000149011612 <= dVar7) ||
     (0x3dcccccc < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x374)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// 0x0273da0 (0x74c bytes)
// inlined: FastAtan2 @0x273ebc, FastAtan2 @0x274058
double M1422_00273da0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  Cuboid *pCVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  float fVar28;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x110;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x24] = in_LR;
  puVar11[0x1f] = in_f29;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x1e] = unaff_r31;
  puVar11[0x1c] = unaff_r29;
  puVar11[0x1d] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  fVar28 = Cuboids[*(int *)(iVar9 + 0x344)].pos.x;
  fVar2 = Cuboids[*(int *)(iVar9 + 0x344)].pos.y;
  fVar3 = g_heroPosition.x - fVar28;
  fVar6 = g_heroPosition.y - fVar2;
  fVar7 = ABS(fVar3);
  fVar4 = ABS(fVar6);
  *(float *)((int)puVar11 + 0x8c) = fVar3;
  *(float *)(puVar11 + 0x12) = fVar6;
  *(float *)((int)puVar11 + 0x94) = fVar7 - fVar4;
  dVar27 = 0.0;
  uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1d) & 4;
  fVar3 = *(float *)(iVar9 + 0x3c0);
  fVar6 = ABS(*(float *)((int)puVar11 + 0x8c));
  if (*(float *)((int)puVar11 + 0x94) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar5 = *(float *)(iVar9 + 0x3c4);
  fVar13 = ABS(*(float *)(puVar11 + 0x12));
  if (*(float *)((int)puVar11 + 0x94) - 0.0 < 0.0) {
    fVar13 = fVar7;
  }
  dVar25 = dVar27;
  if (0.0 < fVar6) {
    lVar16 = uVar15 - 0x100;
    lVar18 = uVar15 - 0x58;
    lVar19 = uVar15 - 0x48;
    lVar22 = 2;
    fVar6 = (fVar13 - fVar6) / (fVar13 + fVar6);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xc4) = fVar6;
    *(float *)((int)puVar11 + 0xbc) = fVar6;
    *(float *)(puVar11 + 0x18) = fVar6;
    *(float *)(puVar11 + 0x17) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar7;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar6;
    *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar6 * fVar6;
      iVar10 = (int)lVar18;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar15 - 0x58;
    pfVar20 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar19;
    do {
      fVar6 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar18 = 2;
    lVar16 = lVar17;
    do {
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar12 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0xb8)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar4);
  }
  fVar3 = fVar3 - fVar28;
  fVar5 = fVar5 - fVar2;
  fVar6 = ABS(fVar3);
  fVar2 = ABS(fVar5);
  *(float *)(puVar11 + 0x10) = fVar3;
  *(float *)((int)puVar11 + 0x84) = fVar5;
  *(float *)(puVar11 + 0x11) = fVar6 - fVar2;
  uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1d) & 4;
  fVar28 = ABS(*(float *)(puVar11 + 0x10));
  if (*(float *)(puVar11 + 0x11) - 0.0 < 0.0) {
    fVar28 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar3 = ABS(*(float *)((int)puVar11 + 0x84));
  if (*(float *)(puVar11 + 0x11) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar26 = dVar27;
  if (0.0 < fVar28) {
    lVar16 = uVar15 - 0x100;
    lVar19 = uVar15 - 0x68;
    lVar18 = uVar15 - 0x78;
    lVar22 = 2;
    fVar28 = (fVar3 - fVar28) / (fVar3 + fVar28);
    fVar3 = fVar28 * fVar28;
    *(float *)((int)puVar11 + 0xa4) = fVar28;
    *(float *)((int)puVar11 + 0x9c) = fVar28;
    *(float *)(puVar11 + 0x14) = fVar28;
    *(float *)(puVar11 + 0x13) = fVar28;
    fVar28 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar3;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar28;
    *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar28 * fVar3;
    do {
      *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar28 * fVar28;
      iVar10 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar28 * fVar28;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar15 - 0x78;
    pfVar20 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar19;
    do {
      fVar28 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar28;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar17;
      iVar12 = (int)lVar19;
      lVar17 = lVar17 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar10 + 0x98)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar6);
  }
  dVar23 = (double)FastDiffRots(dVar26,dVar25);
  if (dVar27 <= dVar23) {
    uVar24 = FastWrapRot((float)dVar25,2.3561945);
  }
  else {
    uVar24 = FastWrapRot((float)dVar25,-2.3561945);
  }
  dVar25 = (double)FastDiffRots(uVar24,dVar26);
  dVar27 = 0.1745329201221466;
  if ((dVar25 <= 0.1745329201221466) && (dVar27 = dVar25, dVar25 < -0.1745329201221466)) {
    dVar27 = -0.1745329201221466;
  }
  dVar25 = (double)FastWrapRot((float)dVar27,(float)dVar26);
  pCVar14 = Cuboids;
  fVar2 = DAT_007a9ff0;
  fVar3 = DAT_007a9fec;
  fVar28 = (float)(dVar25 + 1.570796251296997);
  dVar27 = (double)(float)(3.141592502593994 - dVar25);
  if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
    dVar27 = dVar25;
  }
  fVar6 = 3.1415925 - fVar28;
  if (fVar28 - (3.1415925 - fVar28) < 0.0) {
    fVar6 = fVar28;
  }
  fVar4 = *(float *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x20);
  dVar26 = (double)(float)(-3.141592502593994 - dVar25);
  if ((double)(float)(-3.141592502593994 - dVar25) - dVar27 < 0.0) {
    dVar26 = dVar27;
  }
  fVar7 = *(float *)(param_1 + 0x14);
  fVar5 = -3.1415925 - fVar28;
  if ((-3.1415925 - fVar28) - fVar6 < 0.0) {
    fVar5 = fVar6;
  }
  dVar27 = (double)(float)(dVar26 * dVar26);
  fVar8 = fVar5 * fVar5;
  fVar28 = fVar8 * fVar8 * fVar5;
  fVar6 = fVar8 * fVar28;
  fVar28 = fVar8 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar28 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5;
  if (cVar1 == '\x02') {
    fVar28 = fVar28 * DAT_007a9fec;
    *(float *)(puVar11 + 0xe) = fVar28;
    fVar2 = fVar3;
  }
  else {
    fVar28 = fVar28 * DAT_007a9ff0;
    *(float *)(puVar11 + 0xe) = fVar28;
  }
  iVar10 = *(int *)(iVar9 + 0x344);
  *(undefined4 *)(puVar11 + 0xf) = 0;
  dVar23 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar26));
  dVar25 = (double)(float)(dVar27 * dVar23);
  fVar2 = ((float)(dVar27 * dVar25) * 2.601887e-06 +
          (float)(dVar25 * -0.0001980741071747616 +
                 (double)(float)(dVar23 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar27 * dVar26) *
                                                -0.16666656732559204 + dVar26)))) * fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar2;
  *(float *)(puVar11 + 0xe) = fVar28 + pCVar14[iVar10].pos.x;
  *(float *)((int)puVar11 + 0x74) = fVar2 + pCVar14[iVar10].pos.y;
  *(float *)(puVar11 + 0xf) = pCVar14[iVar10].pos.z;
  fVar28 = *(float *)(iVar9 + 0x3c4) - pCVar14[iVar10].pos.y;
  fVar2 = *(float *)(iVar9 + 0x3c0) - pCVar14[iVar10].pos.x;
  if (SQRT(fVar2 * fVar2 + fVar28 * fVar28) <= DAT_007a9ff0 + 1.0) {
    if (g_heroStateType == 0xf) {
      fVar28 = 20.0;
    }
    else {
      if (cVar1 == '\r') {
        fVar2 = DAT_007a9fe4 * 0.5;
        fVar3 = DAT_007a9fe0 * 0.5;
        fVar6 = 5.5;
        fVar28 = 2.0;
      }
      else {
        fVar2 = DAT_007a9fe4;
        fVar3 = DAT_007a9fe0;
        fVar6 = DAT_007a9fd8;
        fVar28 = DAT_007a9fdc;
        if (cVar1 == '\x0f') {
          fVar28 = 6.0;
          fVar6 = 10.0;
          fVar2 = DAT_007a9fe4 * 1.5;
          fVar3 = DAT_007a9fe0 * 1.5;
        }
      }
      fVar7 = fVar7 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      fVar4 = SQRT(fVar4 * fVar4 + fVar7 * fVar7);
      fVar7 = fVar3;
      if ((fVar4 <= fVar3) && (fVar7 = fVar4, fVar4 < fVar2)) {
        fVar7 = fVar2;
      }
      fVar28 = (fVar6 - fVar28) * (1.0 - (fVar7 - fVar2) / (fVar3 - fVar2)) + fVar28;
    }
  }
  else {
    fVar28 = 10.0;
  }
  M1422_00273c08((double)(g_FrameTime * fVar28),param_1,uVar15 - 0xa0);
  fVar28 = Delt(Cuboids[*(int *)(iVar9 + 0x344)].pos.z,g_FrameTime * 4.0,
                          (float *)(iVar9 + 0x3c8));
  return (double)fVar28;
}


// 0x02744f8 (0x1a0 bytes)
void M1422_002744f8(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  Vec4 local_30;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x344);
  local_30.x = g_heroPosition.x - Cuboids[iVar2].pos.x;
  local_30.y = g_heroPosition.y - Cuboids[iVar2].pos.y;
  local_30.w = g_heroPosition.w;
  local_30.z = 0.0;
  if (g_heroStateType == 0xf) {
    ClampVec3Magnitude((double)DAT_007a9ff8,&local_30);
  }
  else {
    ClampVec3Magnitude((double)DAT_007a9ff4,&local_30);
  }
  iVar1 = *(int *)(iVar1 + 0x344);
  local_30.x = local_30.x + Cuboids[iVar1].pos.x;
  fVar3 = *(float *)(param_1 + 0x10) - local_30.x;
  local_30.y = local_30.y + Cuboids[iVar1].pos.y;
  fVar4 = *(float *)(param_1 + 0x14) - local_30.y;
  local_30.z = local_30.z + Cuboids[iVar1].pos.z;
  dVar6 = (double)(g_FrameTime * 4.75);
  dVar5 = (double)(g_FrameTime * 20.0);
  dVar7 = (double)(float)(dVar6 * (double)((SQRT(fVar3 * fVar3 + fVar4 * fVar4) - DAT_007a9fd4) /
                                          DAT_007a9fd4) + (double)DAT_00969e40);
  if ((dVar7 <= dVar5) && (dVar5 = dVar7, dVar7 < dVar6)) {
    dVar5 = dVar6;
  }
  M1422_00273c08(dVar5,param_1,&local_30);
  return;
}


// 0x02746a8 (0x420 bytes)
// inlined: FastRSqrt @0x274760, FastRSqrt @0x274934
void M1422_002746a8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  GPiece<32> local_a0;
  
  FastDecTimerS8(param_1 + 0xbc);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < DAT_007aa070) {
    dVar5 = 0.5;
    uVar6 = 0x3feb333340000000;
    do {
      MB_randRangeFloat(DAT_007aa074,DAT_007aa078);
      MB_randRangeSigned((double)(longlong)DAT_00facc88,(double)(longlong)DAT_007aa084);
      uVar1 = FastDoubleToInt();
      iVar2 = MB_randRange(DAT_007aa088,DAT_007aa08c);
      SpawnPart_44
                ((double)DAT_007aa07c,(double)DAT_007aa080,(double)DAT_007aa090,(double)DAT_00facc84
                 ,uVar6,param_2,local_a0,
                 (int)(animationSpeed * (float)((double)(longlong)iVar2 + dVar5)),0x7f,0xffffff,
                 uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_007aa070);
  }
  if (0 < DAT_007aa098) {
    do {
      MB_randRangeFloat(DAT_007aa09c,DAT_007aa0a0);
      MB_randRange(DAT_007aa0a4,DAT_007aa0a8);
      SpawnPart_21((double)DAT_007aa0ac,param_2,local_a0,DAT_007aa054,DAT_007aa058);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_007aa098);
  }
  return;
}


// 0x0274ad0 (0x21c bytes)
// inlined: FastAtan2 @0x274bb8
void M1422_00274ad0
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  float fStack00000040;
  float fStack00000044;
  float fStack00000050;
  float fStack00000054;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xb0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar10;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  fStack00000054 = (float)param_5;
  fStack00000044 = (float)param_3;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fVar2 = ABS(fStack00000054 - fStack00000044);
  *(float *)((int)puVar6 + 0x74) = fStack00000054 - fStack00000044;
  fVar4 = ABS(fStack00000050 - fStack00000040);
  *(float *)(puVar6 + 0xe) = fStack00000050 - fStack00000040;
  *(float *)(puVar6 + 0xf) = fVar4 - fVar2;
  dVar18 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar16 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar6 + 0xe));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar6 + 0x74));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar3) {
    lVar14 = uVar10 - 0xa0;
    lVar12 = uVar10 - 0x24;
    lVar13 = uVar10 - 0x34;
    lVar17 = 2;
    fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    *(float *)(puVar6 + 0x10) = fVar3;
    *(float *)((int)puVar6 + 0x84) = fVar3;
    *(float *)((int)puVar6 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
    *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar3 * fVar3;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar14 = uVar10 - 0x34;
    lVar17 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar14;
    lVar13 = lVar11;
    do {
      fVar3 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    do {
      iVar7 = (int)lVar11;
      iVar8 = (int)lVar14;
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar5 + fVar2);
  }
  _fStack00000040 = param_3;
  _fStack00000050 = param_5;
  dVar18 = (double)FastDiffRots(dVar18,(double)fVar1);
  *(float *)(param_2 + 0x68) = (float)dVar18;
  return;
}


// 0x0274cf0 (0x1c8 bytes)
int M1422_00274cf0(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar7 = 0;
  dVar9 = 2.0;
  iVar8 = *(int *)(iVar2 + 0x350);
  do {
    if (99 < iVar7) {
      return iVar8;
    }
    lVar5 = MB_randInt(6);
    iVar6 = (int)lVar5;
    if (iVar6 == 5) {
      iVar8 = 0x13;
    }
    else if (iVar6 == 4) {
      iVar8 = 0x11;
    }
    else if (iVar6 == 3) {
      iVar8 = 0x10;
    }
    else if (iVar6 == 2) {
      iVar8 = 0xf;
    }
    else if (iVar6 == 1) {
      iVar8 = 0xe;
    }
    else if (iVar6 == 0) {
      iVar8 = 0xd;
    }
    sVar1 = *(short *)((int)(lVar5 << 1) + 0x7a9f70 + *(int *)(iVar2 + 0x34c) * 0xc);
    iVar6 = (int)sVar1 +
            ((uint)(ZERO_MASK((*(int *)(iVar2 + 0x350) - iVar8))) & -(int)sVar1);
    if ((iVar8 == 0x13) &&
       ((*(int *)(iVar2 + 0x364) != 0 ||
        (fVar4 = g_heroPosition.y - Cuboids[*(int *)(iVar2 + 0x25c)].pos.y,
        fVar3 = g_heroPosition.x - Cuboids[*(int *)(iVar2 + 0x25c)].pos.x,
        (float)((double)DAT_007a9ff4 + dVar9) < SQRT(fVar3 * fVar3 + fVar4 * fVar4))))) {
      iVar6 = 0;
    }
    if ((iVar8 == 0x11) && (*(int *)(iVar2 + 0x350) == 0xe)) {
      iVar6 = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 == 0);
  return iVar8;
}


// 0x0274eb8 (0x80 bytes)
void M1422_00274eb8(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  MobyInstance *pMVar3;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      pMVar3 = g_MobyInstance + (*puVar2 & 0x7fff);
      if ((pMVar3 != (MobyInstance *)0x0) && (pMVar3->state != 0xfd && pMVar3->state != 0xfe)) {
        pMVar3->enabled = '\0';
        pMVar3->collision = (ushort *)0x0;
        pMVar3->modeBits = pMVar3->modeBits | DISABLED;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0274f38 (0x88 bytes)
void M1422_00274f38(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  MobyInstance *pMVar3;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      pMVar3 = g_MobyInstance + (*puVar2 & 0x7fff);
      if ((pMVar3 != (MobyInstance *)0x0) && (pMVar3->state != 0xfd && pMVar3->state != 0xfe)) {
        pMVar3->enabled = '\x01';
        pMVar3->modeBits =
             pMVar3->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        pMVar3->collision = pMVar3->pClass->collision;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0274fd0 (0x210 bytes)
MobyInstance * M1422_00274fd0(int param_1)

{
  ushort uVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  MobyInstance *pMVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 0x78);
  dVar7 = 1024.0;
  puVar4 = (ushort *)(&g_MobyGroups)[*(int *)(iVar2 + 0x398)];
  if (puVar4 == (ushort *)0x0) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = (MobyInstance *)0x0;
    dVar11 = 60.5;
    dVar12 = 0.5;
    dVar13 = 0.3330000042915344;
    do {
      uVar1 = *puVar4;
      if (g_MobyInstance[uVar1 & 0x7fff].oClass == FLOATING_PLATFORM_024B) {
        M587_003d5518();
        pMVar5 = g_MobyInstance + (uVar1 & 0x7fff);
        dVar9 = (double)((pMVar5->pos).y - *(float *)(iVar2 + 0x3c4));
        dVar6 = (double)((pMVar5->pos).x - *(float *)(iVar2 + 0x3c0));
        dVar8 = (double)(float)(dVar6 * dVar6 + (double)(float)(dVar9 * dVar9));
        if ((float)SQRT(dVar8) < DAT_007a9fc0) {
          dVar10 = (double)((pMVar5->pos).z - *(float *)(iVar2 + 0x3c8));
          M587_003d5544(pMVar5,(int)((double)animationSpeed * dVar11),
                        (int)((double)animationSpeed *
                             (double)(float)((double)(longlong)DAT_007a9fc4 + dVar12)));
          if ((dVar13 < (double)(float)(dVar10 * (double)*(float *)(param_1 + 200) +
                                       (double)(float)(dVar6 * (double)*(float *)(param_1 + 0xc0) +
                                                      (double)(float)(dVar9 * (double)*(float *)(
                                                  param_1 + 0xc4))))) &&
             (dVar9 = (double)SQRT((float)(dVar10 * dVar10 + dVar8)), dVar9 < dVar7)) {
            dVar7 = dVar9;
            pMVar3 = pMVar5;
          }
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar3;
}


// 0x0275240 (0x1364 bytes)
// inlined: FastAtan2 @0x275c18, FastAtan2 @0x275fb8, FastAtan2 @0x276170, FastAtan2 @0x276334
void M1422_00275240(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  MobyClass *pMVar9;
  void *pvVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Cuboid *pCVar17;
  ulonglong uVar18;
  int iVar21;
  undefined4 uVar22;
  MobyInstance *pMVar23;
  int iVar24;
  longlong lVar19;
  longlong lVar20;
  longlong lVar25;
  float *pfVar27;
  longlong lVar26;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  byte bVar30;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  undefined8 uVar42;
  ulonglong in_f31;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x240;
  puVar12 = (ulonglong *)lVar20;
  *puVar12 = uVar18;
  puVar12[0x4a] = in_LR;
  puVar12[0x45] = in_f29;
  puVar12[0x46] = in_f30;
  puVar12[0x47] = in_f31;
  puVar12[0x44] = unaff_r31;
  puVar12[0x41] = unaff_r28;
  fVar2 = DAT_007a9fb8;
  pMVar9 = param_1->pClass;
  puVar12[0x43] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar29 = ZEXT48(pvVar10);
  param_1->scale = pMVar9->gScale * fVar2;
  uVar42 = 0x3fe0000000000000;
  puVar12[0x42] = unaff_r29;
  puVar12[0x40] = unaff_r27;
  puVar12[0x3f] = unaff_r26;
  puVar12[0x3e] = unaff_r25;
  ____MB_SetFadeByDistToHero(0x3fe0000000000000,param_1);
  auVar46 = ZEXT416(0xffffffff);
  auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
  bVar14 = false;
  auVar43 = loadVectorLeftIndexed(0x34c,uVar29);
  auVar45 = loadVectorRightIndexed(0x35c,uVar29);
  auVar46 = loadVectorLeftIndexed(4,0x2751e0);
  auVar47 = loadVectorLeftIndexed(8,0x2751e0);
  auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar45,0);
  auVar43 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = loadVectorLeftIndexed(0xc,0x2751e0);
  dVar41 = 0.0;
  auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = loadVectorLeftIndexed(0x10,0x2751e0);
  *(undefined4 *)((int)puVar12 + 0x114) = 0;
  auVar44 = vectorSubtractFloatingPoint
                      (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
  auVar47 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar46 = ZEXT416(0xffffffff);
  auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
  auVar48 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  auVar46 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = vectorSubtractFloatingPoint
                      (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
  auVar43 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar47
                      );
  auVar46 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar48
                      );
  iVar21 = MB_damage(param_1,0x330000,0);
  if (((iVar21 != 0) && (iVar24 = *(int *)(iVar21 + 0x20), iVar24 != 0)) &&
     ((sVar8 = *(short *)(iVar24 + 0xa6), sVar8 == 0x234 || sVar8 == 0x270 ||
      ((sVar8 == 0x238 && (*(char *)(iVar24 + 0xbc) == '\0')))))) {
    iVar21 = 0;
  }
  MB_HandleDamage(param_1,iVar21,uVar29 + 0x20,0,puVar12 + 0x22,(int)puVar12 + 0x114,0,4);
  if (*(int *)(puVar12 + 0x22) != 1) {
    bVar1 = param_1->state;
    bVar30 = (bVar1 == 2) << 1;
    if (((0xb < bVar1) && (bVar1 < 0x14)) || (bVar1 == 2)) {
      if (*(int *)(iVar21 + 0x20) != 0) {
        sVar8 = *(short *)(*(int *)(iVar21 + 0x20) + 0xa6);
        bVar30 = (sVar8 == 0x131) << 1;
        if (sVar8 < 0xb2) {
          if (0xb0 < sVar8) {
            *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * 3.0;
          }
        }
        else if (sVar8 == 0x131) {
          *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * 0.666;
        }
      }
      if (g_heroStateType == 0xf) {
        auVar43 = loadVectorLeftIndexed(0x390,uVar29);
        auVar45 = loadVectorRightIndexed(0x3a0,uVar29);
        auVar44 = loadVectorLeftIndexed(0x114,lVar20);
        auVar43 = vectorAddFloatingPoint(auVar43 | auVar45,auVar44);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x390,
                            uVar29);
        *(undefined4 *)((int)pvVar10 + 0x390U & 0xfffffffc) = uVar22;
      }
      else {
        auVar43 = loadVectorLeftIndexed(0x394,uVar29);
        auVar45 = loadVectorRightIndexed(0x3a4,uVar29);
        auVar44 = loadVectorLeftIndexed(0x114,lVar20);
        auVar43 = vectorAddFloatingPoint(auVar43 | auVar45,auVar44);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x394,
                            uVar29);
        *(undefined4 *)((int)pvVar10 + 0x394U & 0xfffffffc) = uVar22;
      }
      auVar43 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = ZEXT416(0);
      vectorCompareEqualToFloatingPoint
                (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      if ((bool)(bVar30 >> 1)) {
        if (((param_1->state == '\x02') && (iVar21 != 0)) &&
           (((*(uint *)(iVar21 + 0x24) & 0x80000) != 0 && (param_1->animationId != '\x0e')))) {
          MB_SetAnimation(param_1,0xe,5,1);
          auVar45 = loadVectorLeftIndexed(0x114,lVar20);
        }
        auVar43 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar43 = loadVectorLeftIndexed(0x38c,uVar29);
        auVar46 = loadVectorRightIndexed(0x39c,uVar29);
        auVar43 = auVar43 | auVar46;
        auVar46 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
        bVar14 = false;
        if (!(bool)(bVar30 >> 1 & 1)) {
          auVar46 = vectorSubtractFloatingPoint(auVar43,auVar45);
          auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,auVar44);
          if ((bool)(bVar30 >> 1 & 1)) {
            bVar14 = true;
          }
        }
        auVar46 = vectorSubtractFloatingPoint(auVar43,auVar45);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar46,auVar44);
        uVar22 = storeVectorElementWordIndexed(auVar46,0x38c,uVar29);
        *(undefined4 *)((int)pvVar10 + 0x38cU & 0xfffffffc) = uVar22;
        if ((bool)(bVar30 >> 1 & 1)) {
          uVar22 = storeVectorElementWordIndexed(auVar44,0x38c,uVar29);
          *(undefined4 *)((int)pvVar10 + 0x38cU & 0xfffffffc) = uVar22;
        }
        *(undefined1 *)((int)pvVar10 + 0x67) = 0xf0;
        MB_UpdateLightsTransition(param_1,uVar29 + 0x60);
        if (*(int *)((int)pvVar10 + 0x38c) == 0) {
          if (*(int *)((int)pvVar10 + 0x368) != -1) {
            Hud_SetEntryValueById(*(int *)((int)pvVar10 + 0x368),0);
            *(undefined4 *)((int)pvVar10 + 0x368) = 0xffffffff;
          }
          param_1->state = '\x1a';
          if (param_1->animationId != '\0') {
            puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0x1cc));
          }
          iVar21 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar10 + 0x3b0));
          if (iVar21 != 0) {
            iVar21 = *(int *)((int)pvVar10 + 0x3b0);
            if (((iVar21 != -1) && (g_SoundChannels[iVar21].pMoby == param_1)) &&
               (g_SoundChannels[iVar21].state != '\0')) {
              sound_Kill(iVar21);
            }
            *(undefined4 *)((int)pvVar10 + 0x3b0) = 0xffffffff;
          }
          bVar14 = false;
          *(undefined4 *)((int)pvVar10 + 0x358) = 0;
        }
      }
    }
  }
  param_1->damage = -1;
  uVar22 = FastDoubleToInt((double)*(float *)((int)pvVar10 + 0x38c));
  *(undefined4 *)((int)pvVar10 + 0x36c) = uVar22;
  MB_ColorDyingMoby(param_1,uVar29 + 0x60);
  iVar21 = *(int *)((int)pvVar10 + 0x3a0);
  if (iVar21 == 0) {
    pMVar23 = CreateMoby(0x58f);
    *(MobyInstance **)((int)pvVar10 + 0x3a0) = pMVar23;
    pMVar23->updateDistance = -1;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x3a0) + 0x31) = 1;
    MB_SetAnimation(*(undefined4 *)((int)pvVar10 + 0x3a0),1,0,0);
    iVar21 = *(int *)((int)pvVar10 + 0x3a0);
  }
  *(short *)(iVar21 + 0x32) = param_1->drawDistance;
  *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x3a0) + 0x34) = param_1->modeBits | LOCK_ROTATION;
  GetBoneTransformations(param_1,4,uVar18 - 0x170);
  FastApplyTransform
            ((Vec4 *)(*(int *)((int)pvVar10 + 0x3a0) + 0xc0),(Vec4 *)(uVar18 - 0x170));
  GetBonePosition(param_1,4,(ulonglong)*(uint *)((int)pvVar10 + 0x3a0) + 0x10);
  UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x3a0));
  iVar21 = *(int *)((int)pvVar10 + 0x3a4);
  if (iVar21 == 0) {
    pMVar23 = CreateMoby(DREK);
    *(MobyInstance **)((int)pvVar10 + 0x3a4) = pMVar23;
    pMVar23->updateDistance = -1;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x3a4) + 0x31) = 1;
    MB_SetAnimation(*(undefined4 *)((int)pvVar10 + 0x3a4),1,0,0);
    iVar21 = *(int *)((int)pvVar10 + 0x3a4);
  }
  *(short *)(iVar21 + 0x32) = param_1->drawDistance;
  *(MobyModeBit *)(*(int *)((int)pvVar10 + 0x3a4) + 0x34) = param_1->modeBits | LOCK_ROTATION;
  GetBoneTransformations(*(undefined4 *)((int)pvVar10 + 0x3a0),0,uVar18 - 0x170);
  FastApplyTransform
            ((Vec4 *)(*(int *)((int)pvVar10 + 0x3a4) + 0xc0),(Vec4 *)(uVar18 - 0x170));
  GetBonePosition
            (*(undefined4 *)((int)pvVar10 + 0x3a0),0,
             (ulonglong)*(uint *)((int)pvVar10 + 0x3a4) + 0x10);
  UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x3a4));
  pSVar11 = Splines[*(int *)((int)pvVar10 + 0x218)];
  MB_getTargetInArea
            (0x4080000000000000,param_1,uVar29 + 0x70,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
  if (*(int *)((int)pvVar10 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar10 + 0xb0) = g_heroMobyPtr;
  }
  if (param_1->state < 0x14 && 0xb < param_1->state) {
    iVar21 = M587_003d4340(g_MobyInstance + *(int *)((int)pvVar10 + 0x21c));
    if (iVar21 == 1) {
      param_1->state = '\x13';
      if (param_1->animationId != '\x01') {
        puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar12 + 0x1cc));
      }
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x28,0x2751e0);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar43);
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x358,uVar29
                         );
      *(undefined4 *)((int)pvVar10 + 0x358U & 0xfffffffc) = uVar22;
      auVar46 = loadVectorLeftIndexed(0x20,0x2751e0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar45);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x354,uVar29
                         );
      *(undefined4 *)((int)pvVar10 + 0x354U & 0xfffffffc) = uVar22;
      *(undefined4 *)((int)pvVar10 + 0x364) = 0;
      uVar22 = FUN_003ebfcc(0x4017333340000000,param_1,uVar29 + 0x3c0);
      *(undefined4 *)((int)pvVar10 + 0x338) = uVar22;
    }
    else if (iVar21 == -1) {
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      mode_sceneInit(7);
      *(undefined4 *)((int)pvVar10 + 0x39c) = 0x19;
    }
  }
  if ((DAT_00facc70 != 0 || bVar14) && (g_heroHealth != 0)) {
    if (DAT_00facc70 != 0) {
      iVar21 = 0;
      *(undefined4 *)((int)pvVar10 + 0x34c) = 0;
      uVar28 = uVar29;
      do {
        M1387_00267100(g_MobyInstance + *(int *)((int)uVar28 + 0x230));
        iVar21 = iVar21 + 1;
        uVar28 = uVar28 + 4;
      } while (iVar21 < 4);
      DAT_00facc70 = 0;
    }
    if (*(int *)((int)pvVar10 + 0x34c) < 2) {
      param_1->state = '\x03';
      iVar24 = *(int *)((int)pvVar10 + 0x34c) + 1;
      *(int *)((int)pvVar10 + 0x34c) = iVar24;
      *(undefined4 *)((int)pvVar10 + 0x374) = 0;
      iVar21 = *(int *)((int)pvVar10 + iVar24 * 4 + 0x260);
      *(undefined4 *)((int)pvVar10 + 0x398) = *(undefined4 *)((int)pvVar10 + iVar24 * 4 + 0x204);
      *(undefined4 *)((int)pvVar10 + 0x348) = 1;
      pSVar11 = Splines[iVar21];
      *(Spline **)((int)pvVar10 + 0x340) = pSVar11;
      pCVar17 = Cuboids;
      iVar21 = *(int *)((int)pvVar10 + iVar24 * 4 + 0x24c);
      fVar2 = pSVar11->points[0].x;
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = pSVar11->points[0].y;
      *(float *)((int)pvVar10 + 0x304) = fVar3;
      *(float *)((int)pvVar10 + 0x308) = pSVar11->points[0].z;
      *(float *)((int)pvVar10 + 0x30c) = pSVar11->points[0].w;
      fVar2 = fVar2 - pCVar17[iVar21].pos.x;
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = fVar3 - pCVar17[iVar21].pos.y;
      *(undefined4 *)((int)pvVar10 + 0x308) = 0;
      dVar35 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      dVar32 = (double)(fVar2 * (float)(25.0 / dVar35));
      dVar33 = (double)(fVar3 * (float)(25.0 / dVar35));
      dVar37 = dVar41;
      if (dVar41 - dVar35 < 0.0) {
        dVar37 = dVar32;
      }
      dVar34 = dVar41;
      if (dVar41 - dVar35 < 0.0) {
        dVar34 = dVar33;
      }
      if (dVar35 - dVar41 < 0.0) {
        dVar37 = dVar32;
      }
      if (dVar35 - dVar41 < 0.0) {
        dVar34 = dVar33;
      }
      *(float *)((int)pvVar10 + 0x300) = (float)dVar37;
      *(float *)((int)pvVar10 + 0x304) = (float)dVar34;
      fVar2 = (float)(dVar37 + (double)pCVar17[iVar21].pos.x);
      *(float *)((int)pvVar10 + 0x300) = fVar2;
      fVar3 = (float)(dVar34 + (double)pCVar17[iVar21].pos.y);
      *(float *)((int)pvVar10 + 0x304) = fVar3;
      fVar4 = pCVar17[iVar21].pos.z;
      *(undefined4 *)((int)pvVar10 + 0x31c) = 0;
      *(float *)((int)pvVar10 + 0x308) = fVar4;
      *(undefined4 *)((int)pvVar10 + 0x318) = 0;
      *(undefined4 *)((int)pvVar10 + 0x314) = 0;
      *(undefined4 *)((int)pvVar10 + 0x310) = 0;
      fVar4 = pCVar17[iVar21].pos.x - fVar2;
      fVar3 = pCVar17[iVar21].pos.y - fVar3;
      dVar32 = ABS((double)fVar4);
      dVar33 = ABS((double)fVar3);
      *(float *)((int)puVar12 + 0x13c) = fVar4;
      *(float *)(puVar12 + 0x28) = fVar3;
      *(float *)((int)puVar12 + 0x144) = (float)(dVar32 - dVar33);
      dVar35 = 0.7853981852531433;
      uVar29 = (ulonglong)(*(uint *)((int)puVar12 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x28) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar12 + 0x13c));
      if ((double)*(float *)((int)puVar12 + 0x144) - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar33 = ABS((double)*(float *)(puVar12 + 0x28));
      if ((double)*(float *)((int)puVar12 + 0x144) - dVar41 < 0.0) {
        dVar33 = dVar32;
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 0x88;
        lVar25 = uVar18 - 0x98;
        lVar31 = 2;
        fVar5 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x1b4) = fVar5;
        *(float *)((int)puVar12 + 0x1ac) = fVar5;
        *(float *)(puVar12 + 0x36) = fVar5;
        *(float *)(puVar12 + 0x35) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar6;
        *(float *)(puVar12 + 0x36) = *(float *)(puVar12 + 0x36) * fVar5;
        *(float *)((int)puVar12 + 0x1b4) = *(float *)((int)puVar12 + 0x1b4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1a8) = *(float *)((int)lVar19 + 0x198) * fVar5 * fVar5;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0x98;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x1a8) = *(float *)((int)lVar19 + 0x1a8) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x1a8)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar4);
      }
      *(float *)((int)pvVar10 + 0x318) = (float)dVar32;
      *(float *)(puVar12 + 0x10) = fVar2;
      fVar3 = *(float *)((int)pvVar10 + 0x304);
      *(float *)((int)puVar12 + 0x84) = fVar3;
      fVar4 = *(float *)((int)pvVar10 + 0x308);
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)pvVar10 + 0x30c);
      fVar5 = *(float *)((int)pvVar10 + 0x318) + 1.5707963;
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar5 = fVar7 * fVar7;
      fVar6 = fVar5 * fVar5 * fVar7;
      fVar13 = fVar5 * fVar6;
      *(float *)(puVar12 + 0x10) =
           (fVar5 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) *
           20.0 + fVar2;
      fVar2 = *(float *)((int)pvVar10 + 0x318);
      iVar21 = *(int *)((int)pvVar10 + *(int *)((int)pvVar10 + 0x34c) * 4 + 0x224);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar2 = fVar6 * fVar6;
      fVar5 = fVar2 * fVar2 * fVar6;
      fVar7 = fVar2 * fVar5;
      *(float *)((int)puVar12 + 0x84) =
           (fVar2 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
           20.0 + fVar3;
      *(float *)(puVar12 + 0x11) = fVar4 + 3.0;
      *(float *)(puVar12 + 0x18) = pCVar17[iVar21].pos.x;
      *(float *)((int)puVar12 + 0xc4) = pCVar17[iVar21].pos.y;
      fVar2 = pCVar17[iVar21].pos.z;
      *(float *)(puVar12 + 0x19) = fVar2;
      *(float *)((int)puVar12 + 0xcc) = pCVar17[iVar21].pos.w;
      *(float *)(puVar12 + 0x19) = fVar2 + 20.0;
      dVar32 = (double)GetGroundZ(uVar42,uVar18 - 0x180,0);
      iVar21 = *(int *)((int)pvVar10 + 0x34c);
      dVar36 = (double)*(float *)(puVar12 + 0x18);
      dVar38 = (double)*(float *)((int)puVar12 + 0xc4);
      *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x18);
      pCVar17 = Cuboids;
      *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0xc4);
      *(undefined4 *)((int)puVar12 + 0x9c) = *(undefined4 *)((int)puVar12 + 0xcc);
      iVar21 = *(int *)((int)pvVar10 + iVar21 * 4 + 0x24c);
      *(float *)(puVar12 + 0x19) = (float)dVar32;
      *(float *)(puVar12 + 0x13) = (float)dVar32;
      fVar2 = (float)((double)pCVar17[iVar21].pos.y - dVar38);
      fVar3 = (float)((double)pCVar17[iVar21].pos.x - dVar36);
      dVar39 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      fVar4 = *(float *)(puVar12 + 0x10);
      fVar5 = *(float *)((int)puVar12 + 0x84);
      dVar33 = (double)((float)(-15.0 / dVar39) * fVar2);
      dVar34 = (double)((float)(-15.0 / dVar39) * fVar3);
      dVar37 = dVar41;
      if (dVar41 - dVar39 < 0.0) {
        dVar37 = dVar33;
      }
      dVar40 = dVar41;
      if (dVar41 - dVar39 < 0.0) {
        dVar40 = dVar34;
      }
      if (dVar39 - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      if (dVar39 - dVar41 < 0.0) {
        dVar40 = dVar34;
      }
      dVar34 = (double)(float)(dVar38 + dVar37);
      dVar33 = (double)(float)(dVar36 + dVar40);
      fVar2 = (float)(dVar38 - dVar34);
      fVar3 = (float)(dVar36 - dVar33);
      *(float *)((int)puVar12 + 0x94) = (float)(dVar38 + dVar37);
      *(float *)(puVar12 + 0x12) = (float)(dVar36 + dVar40);
      dVar36 = ABS((double)fVar2);
      dVar38 = ABS((double)fVar3);
      *(float *)(puVar12 + 0x26) = fVar3;
      *(float *)((int)puVar12 + 0x134) = fVar2;
      *(float *)(puVar12 + 0x27) = (float)(dVar38 - dVar36);
      *(float *)(puVar12 + 0x13) = (float)(dVar32 + 15.0);
      uVar29 = (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1d) & 4;
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar37 = ABS((double)*(float *)(puVar12 + 0x26));
      if ((double)*(float *)(puVar12 + 0x27) - dVar41 < 0.0) {
        dVar37 = dVar36;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x134));
      if ((double)*(float *)(puVar12 + 0x27) - dVar41 < 0.0) {
        dVar32 = dVar38;
      }
      dVar36 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 0xa8;
        lVar25 = uVar18 - 0xb8;
        lVar31 = 2;
        fVar6 = (float)(dVar32 - dVar37) / (float)(dVar32 + dVar37);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x194) = fVar6;
        *(float *)((int)puVar12 + 0x18c) = fVar6;
        *(float *)(puVar12 + 0x32) = fVar6;
        *(float *)(puVar12 + 0x31) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar7;
        *(float *)(puVar12 + 0x32) = *(float *)(puVar12 + 0x32) * fVar6;
        *(float *)((int)puVar12 + 0x194) = *(float *)((int)puVar12 + 0x194) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar19 + 0x188) = *(float *)((int)lVar19 + 0x178) * fVar6 * fVar6;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xb8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar6 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x188) = *(float *)((int)lVar19 + 0x188) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x188)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar36 = (double)((float)(dVar37 + dVar35) * fVar2 + fVar3);
      }
      *(float *)((int)puVar12 + 0xcc) = (float)dVar36;
      *(undefined4 *)((int)puVar12 + 0xac) = 0;
      *(undefined4 *)(puVar12 + 0x15) = 0;
      *(undefined4 *)((int)puVar12 + 0xa4) = 0;
      *(undefined4 *)(puVar12 + 0x14) = 0;
      fVar4 = *(float *)((int)pvVar10 + 0x300) - fVar4;
      fVar5 = *(float *)((int)pvVar10 + 0x304) - fVar5;
      dVar32 = ABS((double)fVar4);
      dVar36 = ABS((double)fVar5);
      *(float *)((int)puVar12 + 0x124) = fVar4;
      *(float *)(puVar12 + 0x25) = fVar5;
      *(float *)((int)puVar12 + 300) = (float)(dVar32 - dVar36);
      uVar29 = (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar12 + 0x124));
      if ((double)*(float *)((int)puVar12 + 300) - dVar41 < 0.0) {
        dVar37 = dVar36;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar36 = ABS((double)*(float *)(puVar12 + 0x25));
      if ((double)*(float *)((int)puVar12 + 300) - dVar41 < 0.0) {
        dVar36 = dVar32;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar32 = dVar41;
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar26 = uVar18 - 200;
        lVar25 = uVar18 - 0xd8;
        lVar31 = 2;
        fVar4 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x174) = fVar4;
        *(float *)((int)puVar12 + 0x16c) = fVar4;
        *(float *)(puVar12 + 0x2e) = fVar4;
        *(float *)(puVar12 + 0x2d) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar5;
        *(float *)(puVar12 + 0x2e) = *(float *)(puVar12 + 0x2e) * fVar4;
        *(float *)((int)puVar12 + 0x174) = *(float *)((int)puVar12 + 0x174) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x168) = *(float *)((int)lVar19 + 0x158) * fVar4 * fVar4;
          iVar21 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xd8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x168) = *(float *)((int)lVar19 + 0x168) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        dVar37 = dVar41;
        do {
          iVar21 = (int)lVar19;
          iVar24 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar21 + 0x168)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar32 = (double)((float)(dVar37 + dVar35) * fVar2 + fVar3);
      }
      *(float *)(puVar12 + 0x15) = (float)dVar32;
      iVar21 = *(int *)((int)pvVar10 + 0x340);
      *(undefined4 *)((int)puVar12 + 0xa4) = 0xbe32b8c2;
      *(undefined4 *)((int)puVar12 + 0xbc) = 0;
      *(undefined4 *)(puVar12 + 0x17) = 0;
      *(undefined4 *)((int)puVar12 + 0xb4) = 0;
      *(undefined4 *)(puVar12 + 0x16) = 0;
      fVar2 = (float)((double)*(float *)(iVar21 + 0x10) - dVar33);
      fVar3 = (float)((double)*(float *)(iVar21 + 0x14) - dVar34);
      dVar32 = ABS((double)fVar2);
      dVar33 = ABS((double)fVar3);
      *(float *)(puVar12 + 0x23) = fVar2;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = (float)(dVar32 - dVar33);
      uVar29 = (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)(puVar12 + 0x23));
      if ((double)*(float *)(puVar12 + 0x24) - dVar41 < 0.0) {
        dVar37 = dVar33;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0x11c));
      if ((double)*(float *)(puVar12 + 0x24) - dVar41 < 0.0) {
        dVar33 = dVar32;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      if (dVar41 < dVar37) {
        lVar19 = uVar18 - 0x230;
        lVar25 = uVar18 - 0xf8;
        lVar26 = uVar18 - 0xe8;
        lVar31 = 2;
        fVar4 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x154) = fVar4;
        *(float *)((int)puVar12 + 0x14c) = fVar4;
        *(float *)(puVar12 + 0x2a) = fVar4;
        *(float *)(puVar12 + 0x29) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar5;
        *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar4;
        *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x148) = *(float *)((int)lVar19 + 0x138) * fVar4 * fVar4;
          iVar21 = (int)lVar25;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar18 - 0xf8;
        pfVar27 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar19 + 0x148) = *(float *)((int)lVar19 + 0x148) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar19 = 2;
        do {
          iVar21 = (int)lVar20;
          iVar24 = (int)lVar26;
          lVar20 = lVar20 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar21 + 0x148)) +
                            *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
                           *(float *)(iVar24 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar41 = (double)((float)(dVar41 + dVar35) * fVar2 + fVar3);
      }
      *(float *)(puVar12 + 0x17) = (float)dVar41;
      uVar22 = *(undefined4 *)((int)pvVar10 + 0x334);
      *(undefined4 *)((int)puVar12 + 0xb4) = 0x3eb2b8c2;
      uVar16 = DAT_007aa004;
      uVar15 = DAT_007aa000;
      puVar12[0xe] = 0;
      FUN_00400670(uVar22,uVar18 - 0x1c0,uVar18 - 0x1b0,uVar18 - 0x1a0,uVar18 - 400,uVar18 - 0x180,
                   uVar15,uVar16);
    }
    else {
      param_1->state = '\x15';
      iVar21 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar10 + 0x3b0));
      if (iVar21 != 0) {
        iVar21 = *(int *)((int)pvVar10 + 0x3b0);
        if (((iVar21 != -1) && (g_SoundChannels[iVar21].pMoby == param_1)) &&
           (g_SoundChannels[iVar21].state != '\0')) {
          sound_Kill(iVar21);
        }
        *(undefined4 *)((int)pvVar10 + 0x3b0) = 0xffffffff;
      }
      if (param_1->animationId != '\0') {
        puVar12[0x39] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0x1cc));
      }
      uVar22 = FUN_003d1d10(uVar29 + 0x3c0,&g_heroPosition,*(undefined4 *)((int)pvVar10 + 0x200));
      *(undefined4 *)((int)pvVar10 + 0x330) = uVar22;
      *(undefined4 *)((int)pvVar10 + 0x390) = 0;
      *(undefined4 *)((int)pvVar10 + 0x394) = 0;
    }
  }
  return;
}


// 0x02765a4 (0x6c bytes)
void M1422_002765a4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x3e4) == 0) {
    if (g_framesGroundedCnt != 0) {
      *(undefined4 *)(iVar1 + 1000) = g_standingOnMoby;
    }
    if (g_heroState == DEATH_FALLING) {
      *(undefined4 *)(iVar1 + 0x3e4) = 1;
      if ((*(int *)(iVar1 + 1000) != 0) && (*(short *)(*(int *)(iVar1 + 1000) + 0xa6) == 0x24b)) {
        DAT_00facc7c = DAT_00facc7c + 1;
      }
    }
  }
  return;
}


// 0x02766e0 (0x398c bytes)
// strings: 00276658: '?333A ' (raw)

/* Moby 1422 */

void UpdateMoby_1422(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  u16 *puVar4;
  Spline *pSVar5;
  MobyModeBit *pMVar6;
  float fVar7;
  bool bVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar10;
  uint uVar15;
  uint in_r4;
  MobyInstance *pMVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  float fVar26;
  GPiece<8> auStack_350;
  float local_348;
  GPiece<16> auStack_340;
  GPiece<16> auStack_330;
  GPiece<16> auStack_320;
  GPiece<16> auStack_310;
  GPiece<16> auStack_300;
  GPiece<16> auStack_2f0;
  GPiece<16> auStack_2e0;
  GPiece<16> auStack_2d0;
  GPiece<16> auStack_2c0;
  GPiece<16> auStack_2b0;
  GPiece<16> auStack_2a0;
  GPiece<16> auStack_290;
  GPiece<16> local_280;
  GPiece<16> local_270;
  GPiece<16> auStack_260;
  GPiece<16> auStack_250;
  GPiece<16> auStack_240;
  GPiece<16> auStack_230;
  GPiece<16> auStack_220;
  float local_210;
  float local_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  GPiece<16> auStack_1d0;
  GPiece<16> auStack_1c0;
  GPiece<16> local_1b0;
  GPiece<16> auStack_1a0;
  GPiece<16> auStack_190;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<16> auStack_160;
  GPiece<16> auStack_150;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  GPiece<16> auStack_120;
  GPiece<16> local_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> auStack_a0;
  GPiece<16> auStack_90;
  GPiece<32> auStack_80;
  
  lVar9 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar19 = ZEXT48(pvVar3);
  M1422_002765a4();
  M1422_00275240(lVar9);
  iVar13 = *(int *)((int)pvVar3 + 0xb0);
  M1422_002736d0(lVar9);
  pMVar16 = *(MobyInstance **)((int)pvVar3 + 0x3a4);
  if ((pMVar16 != (MobyInstance *)0x0) && (in_r4 = (uint)pMVar16->state, pMVar16->state < 0x80)) {
    in_r4 = 0;
    DoManipulator((double)DAT_007aa014,pMVar16,0,(Manipulator *)((int)pvVar3 + 0x1c0));
  }
  if (moby->enabled != '\0') {
    in_r4 = 0x951500;
    dVar21 = (double)FUN_005e8548(lVar9 + 0x10);
    if (dVar21 < 32.0) {
      MB_SetZBoundsFromGround(lVar9);
      moby->shadow = '\x1a';
    }
  }
  iVar12 = g_SpaceSceneFrame;
  bVar1 = moby->state;
  bVar20 = (bVar1 == 1) << 1;
  if (bVar1 < 0xc) {
    if (bVar1 < 5) {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          FUN_005e7e98(uVar19 + 0x3c0,lVar9 + 0x10);
          moby->state = '\x01';
          iVar12 = 0;
          moby->updateDistance = -1;
          moby->drawDistance = 0x200;
          iVar13 = *(int *)((int)pvVar3 + 0x26c);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          moby->collision = (ushort *)0x0;
          *(undefined1 *)((int)pvVar3 + 0x28) = 3;
          *(undefined4 *)((int)pvVar3 + 0x20) = 0x43fa0000;
          pSVar5 = Splines[iVar13];
          *(undefined2 *)((int)pvVar3 + 0x24) = 500;
          *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
          *(undefined4 *)((int)pvVar3 + 0x30) = 0x40800000;
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          pMVar16 = g_MobyInstance;
          *(undefined4 *)((int)pvVar3 + 0x398) = *(undefined4 *)((int)pvVar3 + 0x204);
          *(undefined4 *)((int)pvVar3 + 0x348) = 1;
          *(undefined4 *)((int)pvVar3 + 0x368) = 0xffffffff;
          *(undefined4 *)((int)pvVar3 + 0x38c) = 0x43af0000;
          *(MobyInstance **)((int)pvVar3 + 0x334) = pMVar16 + *(int *)((int)pvVar3 + 0x220);
          *(undefined4 *)((int)pvVar3 + 0x3d0) = 0x3f400000;
          uVar18 = uVar19;
          do {
            M1422_00274eb8(lVar9,*(undefined4 *)((int)uVar18 + 0x204));
            iVar12 = iVar12 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar12 < 3);
        }
        else {
          iVar13 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x274));
          if ((iVar13 == 0) || (g_heroType != '\x02')) {
            iVar13 = PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar3 + 0x270)]->points,
                                Splines[*(int *)((int)pvVar3 + 0x270)]->cnt);
            if (iVar13 == 0) {
              dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar3 + 0x250)].pos);
              dVar23 = 50.0;
              if (50.0 <= dVar21) {
                dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                              &Cuboids[*(int *)((int)pvVar3 + 0x254)].pos);
                if (dVar23 <= dVar21) {
                  dVar21 = (double)FUN_005e8548(&g_heroPosition,
                                                &Cuboids[*(int *)((int)pvVar3 + 600)].pos);
                  if (dVar21 < dVar23) {
                    if (g_deplanetizerUp == 0) {
                      fVar26 = *(float *)((int)pvVar3 + 0x38c);
                      moby->modeBits =
                           moby->modeBits &
                           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|
                            DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW
                            |HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                      puVar4 = moby->pClass->collision;
                      *(undefined4 *)((int)pvVar3 + 0x34c) = 2;
                      moby->collision = puVar4;
                      *(float *)((int)pvVar3 + 0x38c) = fVar26 * 0.5714286;
                      moby->state = '\f';
                      pSVar5 = Splines[*(int *)((int)pvVar3 + 0x268)];
                      *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                      FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                      *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 600);
                      uVar14 = idol::GetAnimDuration(0x168);
                      *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
                    }
                    else {
                      FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
                      iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x3b0));
                      if (iVar13 != 0) {
                        iVar13 = *(int *)((int)pvVar3 + 0x3b0);
                        if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
                           (g_SoundChannels[iVar13].state != '\0')) {
                          sound_Kill(iVar13);
                        }
                        *(undefined4 *)((int)pvVar3 + 0x3b0) = 0xffffffff;
                      }
                      MVar2 = moby->modeBits;
                      moby->collision = (ushort *)0x0;
                      moby->state = '\x1b';
                      *(undefined4 *)((int)pvVar3 + 0x34c) = 7;
                      moby->modeBits = MVar2 | (UNK_40|DISABLED);
                    }
                  }
                }
                else {
                  fVar26 = *(float *)((int)pvVar3 + 0x38c);
                  moby->modeBits =
                       moby->modeBits &
                       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                  puVar4 = moby->pClass->collision;
                  *(undefined4 *)((int)pvVar3 + 0x34c) = 1;
                  moby->collision = puVar4;
                  *(float *)((int)pvVar3 + 0x38c) = fVar26 * 0.71428573;
                  moby->state = '\f';
                  pSVar5 = Splines[*(int *)((int)pvVar3 + 0x264)];
                  *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                  FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                  *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x254);
                }
              }
              else {
                moby->modeBits =
                     moby->modeBits &
                     (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                      HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
                puVar4 = moby->pClass->collision;
                moby->state = '\f';
                iVar13 = *(int *)((int)pvVar3 + 0x260);
                moby->collision = puVar4;
                pSVar5 = Splines[iVar13];
                *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
                FUN_005e7e98(uVar19 + 0x3c0,pSVar5->points + pSVar5->cnt + -1);
                *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x250);
                *(float *)((int)pvVar3 + 0x38c) = *(float *)((int)pvVar3 + 0x38c) * 0.85714287;
              }
            }
            else {
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
              puVar4 = moby->pClass->collision;
              moby->state = '\n';
              iVar13 = *(int *)((int)pvVar3 + 0x260);
              moby->collision = puVar4;
              pSVar5 = Splines[iVar13];
              *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
              FUN_005e7e98(uVar19 + 0x3c0,ZEXT48(pSVar5) + 0x10);
              dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x -
                                                    *(float *)((int)pvVar3 + 0x3c0)),
                                            (double)(g_heroPosition.y -
                                                    *(float *)((int)pvVar3 + 0x3c4)));
              (moby->rotation).z = (float)dVar21;
              M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x204));
              *(float *)((int)pvVar3 + 0x38c) = *(float *)((int)pvVar3 + 0x38c) * 0.85714287;
            }
          }
          else {
            moby->state = '\a';
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            mode_sceneInit(0);
            *(undefined4 *)((int)pvVar3 + 0x39c) = 2;
            uVar14 = idol::GetAnimDuration(600);
            *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
            *(undefined4 *)((int)pvVar3 + 0x344) = *(undefined4 *)((int)pvVar3 + 0x25c);
            if (moby->animationId != '\n') {
              uVar10 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar9,10,0,uVar10);
            }
          }
        }
      }
      else if (bVar1 < 3) {
        dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        fVar26 = OrganicDeltAng
                           ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                            g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar3 + 0x370));
        M1422_00273da0((double)fVar26,lVar9);
        pMVar16 = g_heroMobyPtr;
        uVar15 = (int)*(uint *)((int)pvVar3 + 0x38c) >> 0x1f;
        if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar3 + 0x38c)) - uVar15) < 0x43968001) {
          if (g_heroType != '\0') {
            pMVar6 = &g_heroMobyPtr->modeBits;
            g_heroMobyPtr->collision = (ushort *)0x0;
            pMVar16->modeBits = *pMVar6 | (UNK_40|DISABLED);
          }
          Hero_RevertToRatchet();
          Hero_Warp(&Cuboids[*(int *)((int)pvVar3 + 0x2a0)].pos.x,
                          &Cuboids[*(int *)((int)pvVar3 + 0x2a0)].rot.x,0,1);
          SetLevelFlag(*(undefined4 *)((int)pvVar3 + 0x2b0));
          SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
          M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x204));
          mode_sceneInit(1);
          moby->state = '\a';
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (moby->animationId != '\n') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,10,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          *(undefined4 *)((int)pvVar3 + 0x39c) = 10;
          *(undefined4 *)((int)pvVar3 + 0x348) = 0;
          pSVar5 = Splines[*(int *)((int)pvVar3 + 0x260)];
          *(Spline **)((int)pvVar3 + 0x340) = pSVar5;
          FUN_005e7e98(uVar19 + 0x3c0,ZEXT48(pSVar5) + 0x10);
          dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - *(float *)((int)pvVar3 + 0x3c0))
                                        ,(double)(g_heroPosition.y - *(float *)((int)pvVar3 + 0x3c4)
                                                 ));
          (moby->rotation).z = (float)dVar21;
          *(undefined4 *)((int)pvVar3 + 0x368) = 0xffffffff;
        }
        else {
          if ((moby->animationId == '\n') &&
             (((iVar13 = MB_MayaFrameTrigger(1.0,moby), iVar13 != 0 ||
               (iVar13 = MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)) &&
              (FUN_005e7e98(auStack_350,&DAT_00969da0),
              ABS(local_348 - *(float *)((int)pvVar3 + 0x3c8)) < 5.0)))) {
            auVar24 = ZEXT416(0xfffffff8);
            auVar25 = loadVectorLeftIndexed(0x50,lVar9);
            auVar24 = vectorShiftRightWord
                                (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 |
                                         auVar24 << 0x60);
            auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
            auVar24 = loadVectorLeftIndexed(0x24,0x276610);
            auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
            if ((bool)(bVar20 >> 1 & 1)) {
              GetBonePosition(lVar9,2,auStack_340);
            }
            else {
              GetBonePosition(lVar9,3,auStack_340);
            }
            FUN_005e7f98((double)(g_FrameTime * 20.0),auStack_330,lVar9 + 0xc0);
            dVar21 = 0.0872664600610733;
            uVar10 = MB_randRangeSigned(0x3fb6571840000000,0x3fe0c15240000000);
            dVar21 = (double)MB_randRangeFloat((float)dVar21,0.17453292);
            dVar21 = -dVar21;
            dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
            fVar7 = 120.0;
            fVar26 = (float)(dVar23 * 3.0);
            if ((fVar26 <= 120.0) && (fVar7 = fVar26, fVar26 < 60.0)) {
              fVar7 = 60.0;
            }
            FastDoubleToInt((double)(animationSpeed * fVar7));
            FUN_003bb4a8(uVar10,dVar21,auStack_340,auStack_330,auStack_350);
          }
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\n')) {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,10,0,uVar10);
          }
        }
      }
      else if (bVar1 < 4) {
        iVar13 = FUN_00400854(*(undefined4 *)((int)pvVar3 + 0x334));
        if (iVar13 == 2) {
          FUN_005e7e98(uVar19 + 0x3c0,uVar19 + 0x300);
          FUN_005e7e98(lVar9 + 0x40,uVar19 + 0x310);
          moby->state = '\t';
          if (moby->animationId != '\a') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,7,0,uVar10);
          }
          M1422_00274f38(lVar9,*(undefined4 *)((int)pvVar3 + 0x398));
          M1422_00274eb8
                    (lVar9,*(undefined4 *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x34c) * 4 + 0x200))
          ;
          GetBonePosition(lVar9,1,auStack_230);
          uVar14 = FUN_004caa88(lVar9,auStack_230,300);
          *(undefined4 *)((int)pvVar3 + 0x33c) = uVar14;
        }
      }
      else if ((g_framesNotGrounded == 0) &&
              ((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x24b)))) {
        DAT_00facc64 = 1;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar3 + 0x39c) = 5;
        uVar14 = FUN_003d2178(&g_heroPosition,*(undefined4 *)((int)pvVar3 + 0x200));
        MVar2 = moby->modeBits;
        *(undefined4 *)((int)pvVar3 + 0x330) = uVar14;
        moby->modeBits = MVar2 | (UNK_40|DISABLED);
        mode_sceneInit(2);
        iVar13 = 0;
        uVar18 = uVar19;
        do {
          M1422_00274eb8(lVar9,*(undefined4 *)((int)uVar18 + 0x204));
          iVar13 = iVar13 + 1;
          uVar18 = uVar18 + 4;
        } while (iVar13 < 3);
      }
    }
    else if (bVar1 == 0xb) {
      if (*(int *)((int)pvVar3 + 0x348) == **(int **)((int)pvVar3 + 0x340)) {
        dVar21 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
        if (((dVar21 < 50.0) && (g_framesNotGrounded == 0)) &&
           ((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x24b)))) {
          *(undefined4 *)((int)pvVar3 + 0x374) = 0;
          FUN_005e7e98(uVar19 + 0x3c0,
                       *(int **)((int)pvVar3 + 0x340) + **(int **)((int)pvVar3 + 0x340) * 4);
          *(undefined4 *)((int)pvVar3 + 0x344) =
               *(undefined4 *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x34c) * 4 + 0x250);
          if (*(int *)((int)pvVar3 + 0x34c) == 2) {
            if (DAT_00facc64 == 0) {
              moby->state = '\x04';
            }
            else {
              moby->state = '\x15';
              uVar14 = FUN_003d1d10(uVar19 + 0x3c0,&g_heroPosition,
                                    *(undefined4 *)((int)pvVar3 + 0x200));
              *(undefined4 *)((int)pvVar3 + 0x330) = uVar14;
            }
          }
          else {
            moby->state = '\f';
          }
        }
      }
      else {
        fVar26 = Delt(g_FrameTime * 10.0,g_FrameTimeSq * 20.0,
                                (float *)((int)pvVar3 + 0x374));
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0((double)fVar26,auStack_290,
                     *(int *)((int)pvVar3 + 0x340) + *(int *)((int)pvVar3 + 0x348) * 0x10 + 0x10,
                     lVar17);
        dVar21 = (double)FUN_005e8030(auStack_290);
        if ((double)*(float *)((int)pvVar3 + 0x374) < dVar21) {
          FUN_005e7f98(auStack_290,auStack_290);
        }
        else {
          *(int *)((int)pvVar3 + 0x348) = *(int *)((int)pvVar3 + 0x348) + 1;
        }
        FUN_005e7f54(lVar17,lVar17,auStack_290);
      }
    }
    else if (bVar1 == 10) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                 (float *)((int)pvVar3 + 0x370));
      fVar26 = Delt(g_FrameTime * 12.0,g_FrameTimeSq * 20.0,
                              (float *)((int)pvVar3 + 0x374));
      if (*(int *)((int)pvVar3 + 0x374) != 0) {
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0((double)fVar26,auStack_2d0,
                     *(int *)((int)pvVar3 + 0x340) + *(int *)((int)pvVar3 + 0x348) * 0x10 + 0x10,
                     lVar17);
        dVar21 = (double)FUN_005e8030(auStack_2d0);
        if ((double)*(float *)((int)pvVar3 + 0x374) < dVar21) {
          FUN_005e7f98(auStack_2d0,auStack_2d0);
        }
        else {
          *(int *)((int)pvVar3 + 0x348) = *(int *)((int)pvVar3 + 0x348) + 1;
        }
        FUN_005e7f54(lVar17,lVar17,auStack_2d0);
      }
      lVar17 = M1422_00274fd0(lVar9);
      if (((int)lVar17 != 0) &&
         ((iVar13 = MB_MayaFrameTrigger(1.0,moby), iVar13 != 0 ||
          (iVar13 = MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)))) {
        FUN_005e7e98(auStack_2a0,lVar17 + 0x10);
        FUN_005e7e98(auStack_2c0,uVar19 + 0x3c0);
        FUN_005e7f54(auStack_2c0,auStack_2c0,lVar9 + 0xc0);
        FUN_005e7f98((double)(g_FrameTime * 10.0),auStack_2b0,lVar9 + 0xc0);
        dVar21 = 0.5235987901687622;
        uVar10 = MB_randRangeSigned(0x3fe0c15240000000,0x3fe921fb60000000);
        dVar21 = (double)MB_randRangeFloat(0.34906584,(float)dVar21);
        dVar21 = -dVar21;
        idol::GetAnimDuration(0x3c);
        FUN_003bb4a8(uVar10,dVar21,auStack_2c0,auStack_2b0,auStack_2a0);
      }
      if (*(int *)((int)pvVar3 + 0x348) == **(int **)((int)pvVar3 + 0x340) + -2) {
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,0,0,uVar10);
        }
        moby->state = '\v';
      }
    }
    else if (bVar1 == 9) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      FUN_005e7e98((double)fVar26,auStack_320,(ulonglong)*(uint *)((int)pvVar3 + 0x340) + 0x10);
      iVar13 = M1422_00273c08(0x4034000000000000,lVar9,auStack_320);
      dVar21 = (double)FUN_00400848(*(undefined4 *)((int)pvVar3 + 0x334));
      if (moby->animationId == '\a') {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar10 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar9,8,0,uVar10);
        }
      }
      else {
        lVar17 = uVar19 + 0x3c0;
        FUN_005e81f0(auStack_310,(ulonglong)*(uint *)((int)pvVar3 + 0x340) + 0x10,lVar17);
        FUN_005e7f98((double)(g_FrameTime * 5.0),auStack_310,auStack_310);
        FUN_005e7f54(lVar17,lVar17,auStack_310);
      }
      uVar10 = 0x3fe0000000000000;
      if ((dVar21 <= 0.5) || (0.699999988079071 <= dVar21)) {
        if (0.7289999723434448 <= dVar21) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,0,0,uVar10);
          }
          if (iVar13 != 0) {
            moby->state = '\n';
          }
          iVar13 = 0;
          uVar18 = uVar19;
          do {
            if (*(int *)((int)pvVar3 + 0x34c) == 1) {
              iVar12 = *(int *)((int)uVar18 + 0x230);
            }
            else {
              iVar12 = *(int *)((int)uVar18 + 0x240);
            }
            FUN_00267060(g_MobyInstance + iVar12);
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar13 < 4);
        }
      }
      else {
        if (moby->animationId != '\t') {
          MB_SetAnimation(lVar9,9,0,0);
        }
        if (*(int *)((int)pvVar3 + 0x33c) != 0) {
          GetBonePosition(lVar9,1,auStack_300);
          FUN_005e7e98(auStack_2f0,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          GetGroundZ(uVar10,auStack_2f0,0);
          FUN_004cab28(0x3ff0000000000000,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_300,
                       &Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          *(undefined4 *)((int)pvVar3 + 0x33c) = 0;
        }
      }
      if (*(int *)((int)pvVar3 + 0x33c) != 0) {
        GetBonePosition(lVar9,1,auStack_2e0);
        dVar23 = (double)(float)(dVar21 * 2.0);
        if (1.0 - (double)(float)(dVar21 * 2.0) < 0.0) {
          dVar23 = 1.0;
        }
        FUN_004cab28(dVar23,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_2e0,&DAT_00a15d30);
      }
    }
    else if (bVar1 == 8) {
      uVar14 = *(undefined4 *)((int)pvVar3 + 0x334);
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      dVar21 = (double)FUN_00400848(uVar14);
      if (1.0 <= dVar21) {
        moby->state = '\f';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar9,0,0,uVar10);
        }
      }
    }
    else if (bVar1 == 7) {
      if (g_gameMode == GAME_MODE_SCENE) {
        if (g_SceneId == 2) {
          iVar11 = idol::GetAnimDuration(0xa28);
          iVar13 = g_SpaceSceneFrame;
          if ((iVar11 <= iVar12) && (iVar12 = idol::GetAnimDuration(0xb36), iVar13 <= iVar12)) {
            FUN_003d22a0(*(undefined4 *)((int)pvVar3 + 0x330));
          }
        }
        else if (g_SceneId == 3) {
          iVar11 = idol::GetAnimDuration(0x3b6);
          iVar13 = g_SpaceSceneFrame;
          if ((iVar11 < iVar12) && (iVar12 = idol::GetAnimDuration(0x3c0), iVar13 < iVar12)) {
            FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
          }
          if (g_deplanetizerUp == 0) {
            SetSpawnPoint
                      ((Vec4 *)&Cuboids[*(int *)((int)pvVar3 + 0x294)].pos,
                       (Vec4 *)&Cuboids[*(int *)((int)pvVar3 + 0x294)].rot);
            g_deplanetizerUp = 1;
          }
        }
      }
      else {
        uVar15 = *(uint *)((int)pvVar3 + 0x39c);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        moby->state = (u8)uVar15;
        if ((uVar15 & 0xff) == 5) {
          SceneScreenFade = 1.0;
          uVar15 = (uint)moby->state;
        }
        if ((uVar15 & 0xff) == 0x19) {
          HandleHeroDeath();
        }
      }
    }
    else if (bVar1 == 5) {
      g_playDrekButtonCutscene = 0;
      uVar15 = *(uint *)((int)pvVar3 + 0x21c);
      uVar18 = ZEXT48(g_MobyInstance);
      uVar10 = 0;
      cosf(0.0);
      FUN_005e8128(uVar10);
      uVar10 = 0x3fe921fb60000000;
      cosf(0.7853982);
      FUN_005e8128(uVar10);
      lVar17 = (uVar18 + ((ulonglong)uVar15 & 0xffffff) * 0x100 & 0xffffffff) + 0x10;
      FUN_005e7f54(local_280,local_280,lVar17);
      FUN_005e7f54(local_270,local_270,lVar17);
      FUN_005e7e70(auStack_260);
      FUN_005e7e70(auStack_250);
      FUN_005e7e98(auStack_240,&Cuboids[*(int *)((int)pvVar3 + 0x298)].pos);
      FUN_00400670(*(undefined4 *)((int)pvVar3 + 0x334),local_280,local_270,auStack_260,auStack_250,
                   auStack_240,DAT_007aa008,DAT_007aa00c);
      pMVar16 = g_MobyInstance;
      DAT_0096bda4 = 3;
      moby->state = '\b';
      iVar13 = *(int *)((int)pvVar3 + 0x21c);
      uVar10 = idol::GetAnimDuration(0x708);
      FUN_003d4228(pMVar16 + iVar13,uVar10);
    }
  }
  else if (bVar1 < 0x13) {
    if (bVar1 == 0x12) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x70) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar3 + 0x74) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                 (float *)((int)pvVar3 + 0x370));
      iVar12 = M1422_00273c08
                         ((double)(g_FrameTime * 12.0),lVar9,
                          &Cuboids[*(int *)((int)pvVar3 + 0x3a8)].pos);
      if (iVar12 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\a') {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,7,0,uVar10);
        }
        FUN_005e7e98(uVar19 + 800,iVar13 + 0x10);
      }
    }
    else if (bVar1 == 0x11) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      M1422_00273da0((double)fVar26,lVar9);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\f')) {
        uVar10 = idol::GetAnimDuration(0x14);
        MB_SetAnimation(lVar9,0xc,0,uVar10);
      }
      if (((moby->animationId == '\f') &&
          (iVar13 = FastDecTimerS32(uVar19 + 0x354), iVar13 != 0)) ||
         (iVar13 = *(int *)((int)pvVar3 + 0x354), iVar12 = idol::GetAnimDuration(0x1e),
         iVar13 == iVar12)) {
        fVar26 = -4.3;
        if (*(int *)((int)pvVar3 + 0x354) != 0) {
          fVar26 = 4.3;
        }
        FUN_005e7f98((double)fVar26,auStack_100,lVar9 + 0xd0);
        FUN_005e7f54(auStack_100,auStack_100,uVar19 + 0x3c0);
        dVar21 = (double)GetGroundZ(0x3fe0000000000000,auStack_100,0);
        if (ABS((float)(dVar21 - (double)*(float *)((int)pvVar3 + 0x3c8))) < 1.0) {
          dVar21 = (double)FUN_005e8588(auStack_100,auStack_f0);
          iVar13 = idol::GetAnimDuration(0x3c);
          iVar13 = FUN_002d6f28((double)(float)(dVar21 / (double)(longlong)iVar13),
                                *(undefined4 *)((int)pvVar3 + 0x210),auStack_100,auStack_100);
          if ((iVar13 != 0) && (*(int *)((int)pvVar3 + 0x354) == 0)) {
            uVar14 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          }
        }
      }
      iVar13 = FUN_002d70fc(*(undefined4 *)((int)pvVar3 + 0x210));
      if ((iVar13 < 0xb) ||
         (iVar12 = *(int *)((int)pvVar3 + 0x354), iVar11 = idol::GetAnimDuration(0x3c),
         iVar11 <= iVar12)) {
        if ((iVar13 < 3) &&
           (iVar13 = *(int *)((int)pvVar3 + 0x354), iVar12 = idol::GetAnimDuration(0x3c),
           iVar12 < iVar13)) {
          *(undefined4 *)((int)pvVar3 + 0x358) = 0;
        }
      }
      else {
        uVar14 = idol::GetAnimDuration(1000);
        *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      }
      iVar13 = FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0x11;
        moby->state = '\f';
        if (moby->animationId != '\r') {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,0xd,0,uVar10);
        }
      }
    }
    else if (bVar1 == 0x10) {
      dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      M1422_00273da0((double)fVar26,lVar9);
      iVar13 = FastDecTimerS32(uVar19 + 0x354);
      if (iVar13 != 0) {
        FUN_005e7e98(auStack_130,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
        dVar23 = 3.0;
        FUN_005e7f98(0x4008000000000000,auStack_120,lVar9 + 0xc0);
        FUN_005e7f54(auStack_120,auStack_120,lVar9 + 0x10);
        dVar21 = (double)MB_randRot();
        MB_randRangeFloat((float)dVar23,29.0);
        cosf((float)dVar21);
        FUN_005e8128(dVar21);
        FUN_005e7f54(local_110,local_110,auStack_130);
        dVar23 = 5.0;
        dVar21 = (double)GetGroundZ(0x3fe0000000000000,local_110,0);
        if (ABS((double)(float)(dVar21 - (double)*(float *)((int)pvVar3 + 0x3c8))) < dVar23) {
          dVar21 = (double)FUN_005e8588(local_110,auStack_120);
          iVar13 = idol::GetAnimDuration(0x3c);
          uVar14 = *(undefined4 *)((int)pvVar3 + 0x29c);
          dVar23 = (double)(float)(dVar21 / (double)(longlong)iVar13);
          dVar21 = (double)MB_randRangeFloat(18.0,20.0);
          FastDoubleToInt((double)(animationSpeed * (float)(dVar21 * 60.0)));
          FUN_003bcd40(dVar23,lVar9,uVar14,auStack_120,local_110);
        }
        uVar14 = idol::GetAnimDuration(0xf);
        *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      }
      iVar13 = FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 != 0) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0x10;
        moby->state = '\f';
      }
    }
    else if (bVar1 == 0xf) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      M1422_00273da0((double)fVar26,lVar9);
      dVar21 = 1.0;
      iVar13 = MB_MayaFrameTrigger(1.0,moby);
      if ((iVar13 != 0) || (iVar13 = MB_MayaFrameTrigger(16.0,moby), iVar13 != 0)) {
        iVar13 = MB_randInt(5);
        if ((iVar13 == 0) && (*(int *)((int)pvVar3 + 0xb4) != 2)) {
          FUN_005e7e98(local_1b0,uVar19 + 0x70);
        }
        else {
          if (*(int *)((int)pvVar3 + 0xb4) == 2) {
            FUN_005e7e98(auStack_1a0,&g_heroPosition);
          }
          else {
            FUN_005e7e98(auStack_1a0,uVar19 + 0x70);
          }
          dVar23 = (double)MB_randRot();
          MB_randRangeFloat((float)dVar21,10.0);
          cosf((float)dVar23);
          FUN_005e8128(dVar23);
          FUN_005e7f54(local_1b0,local_1b0,auStack_1a0);
        }
        if (g_heroStateType == 0xf) {
          FUN_005e7e98(auStack_190,&Cuboids[*(int *)((int)pvVar3 + 0x344)].pos);
          FUN_005e81f0(local_1b0,local_1b0,auStack_190);
          dVar23 = (double)FUN_005e7ebc(local_1b0);
          if (29.0 < dVar23) {
            FUN_005e84c0(local_1b0,local_1b0);
          }
          FUN_005e7f54(local_1b0,local_1b0,auStack_190);
        }
        dVar23 = (double)GetGroundZ(0x3fe0000000000000,local_1b0,0);
        if (ABS((float)(dVar23 - (double)*(float *)((int)pvVar3 + 0x3c8))) < 5.0) {
          iVar13 = MB_MayaFrameTrigger((float)dVar21,moby);
          if (iVar13 == 0) {
            GetBonePosition(lVar9,3,auStack_180);
          }
          else {
            GetBonePosition(lVar9,2,auStack_180);
          }
          FUN_005e7f98((double)(g_FrameTime * 20.0),auStack_170,lVar9 + 0xc0);
          dVar21 = 0.0872664600610733;
          uVar10 = MB_randRangeSigned(0x3fb6571840000000,0x3fe0c15240000000);
          dVar21 = (double)MB_randRangeFloat((float)dVar21,0.17453292);
          dVar21 = -dVar21;
          dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
          fVar7 = 120.0;
          fVar26 = (float)(dVar23 * 3.0);
          if ((fVar26 <= 120.0) && (fVar7 = fVar26, fVar26 < 60.0)) {
            fVar7 = 60.0;
          }
          FastDoubleToInt((double)(animationSpeed * fVar7));
          FUN_003bb4a8(uVar10,dVar21,auStack_180,auStack_170,local_1b0);
          M1422_002746a8(lVar9,auStack_180);
        }
      }
      iVar13 = FastDecTimerS32(uVar19 + 0x358);
      if (iVar13 == 0) {
        uVar15 = (int)*(uint *)((int)pvVar3 + 0x390) >> 0x1f;
        if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar3 + 0x390)) - uVar15) < 0x41c80001)
        goto LAB_00279dec;
        auVar24 = loadVectorLeftIndexed(0x34c,uVar19);
        auVar25 = loadVectorRightIndexed(0x35c,uVar19);
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar25,0);
        auVar24 = loadVectorLeftIndexed(0x70,0x276610);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                   auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
        if (!(bool)(bVar20 >> 1 & 1)) goto LAB_00279dec;
      }
      *(undefined4 *)((int)pvVar3 + 0x350) = 0xf;
      moby->state = '\f';
    }
    else if (bVar1 == 0xe) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 800) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar3 + 0x324) - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      GetBonePosition((double)fVar26,lVar9,0x13,&local_200);
      M1422_00274ad0
                (lVar9,uVar19 + 0x140,CONCAT44(local_200,local_1fc),CONCAT44(local_1f8,local_1f4),
                 *(undefined8 *)((int)pvVar3 + 800),*(undefined8 *)((int)pvVar3 + 0x328));
      *(undefined4 *)((int)pvVar3 + 0x3d8) = 0xc0400000;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\b')) {
        uVar10 = idol::GetAnimDuration(0x14);
        MB_SetAnimation(lVar9,8,0,uVar10);
      }
      if (*(int *)((int)pvVar3 + 0x354) != 0) {
        if (*(int *)((int)pvVar3 + 0x33c) == 0) {
          GetBonePosition(lVar9,1,auStack_1f0);
          uVar10 = idol::GetAnimDuration(DAT_007aa010);
          uVar14 = FUN_004caa88(lVar9,auStack_1f0,uVar10);
          *(undefined4 *)((int)pvVar3 + 0x33c) = uVar14;
        }
        else {
          iVar12 = FastDecTimerS32(uVar19 + 0x354);
          if (iVar12 == 0) {
            dVar23 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar3 + 0x354));
            dVar21 = 1.0;
            dVar23 = (double)(1.0 - (float)(dVar23 / (double)(animationSpeed * 90.0)));
            if ((dVar23 <= 1.0) && (dVar21 = dVar23, dVar23 < 0.0)) {
              dVar21 = 0.0;
            }
            GetBonePosition(lVar9,1,auStack_1c0);
            FUN_004cab28(dVar21,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_1c0,uVar19 + 800);
            iVar12 = *(int *)((int)pvVar3 + 0x354);
            iVar11 = idol::GetAnimDuration(0xf);
            if (iVar11 < iVar12) {
              FUN_005e7e98(uVar19 + 800,iVar13 + 0x10);
            }
          }
          else {
            if (moby->animationId != '\t') {
              MB_SetAnimation(lVar9,9,0,0);
            }
            uVar14 = idol::GetAnimDuration(0x78);
            *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
            GetBonePosition(lVar9,1,auStack_1e0);
            FUN_005e81f0(auStack_1d0,uVar19 + 800,auStack_1e0);
            FUN_005e84c0(0x4066800000000000,auStack_1d0,auStack_1d0);
            FUN_005e7f54(auStack_1d0,auStack_1d0,auStack_1e0);
            FUN_004cab28(0x3ff0000000000000,*(undefined4 *)((int)pvVar3 + 0x33c),auStack_1e0,
                         auStack_1d0);
            *(undefined4 *)((int)pvVar3 + 0x33c) = 0;
            if (*(int *)((int)pvVar3 + 0x358) == 0) {
              *(undefined4 *)((int)pvVar3 + 0x350) = 0xe;
              moby->state = '\f';
            }
          }
        }
      }
      FastDecTimerS32(uVar19 + 0x358);
    }
    else if (bVar1 == 0xd) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      M1422_00273da0((double)fVar26,lVar9);
      if (*(int *)((int)pvVar3 + 0x354) <
          *(int *)((int)pvVar3 + 0x358) + *(int *)((int)pvVar3 + 0x35c)) {
        dVar21 = (double)FUN_005e8338(0x3ff0000000000000,(double)*(float *)((int)pvVar3 + 0x3bc));
        *(float *)((int)pvVar3 + 0x128) = (float)dVar21;
      }
      if (moby->animationId == '\x02') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,4,0,uVar10);
        }
      }
      else {
        iVar12 = FastDecTimerS32(uVar19 + 0x354);
        if (((iVar12 != 0) && (*(int *)((int)pvVar3 + 0x358) != 0)) && (moby->animationId != '\x04')
           ) {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,4,0,uVar10);
        }
      }
      if (moby->animationId == '\x04') {
        iVar12 = MB_MayaFrameTrigger(1.0,moby);
        if (iVar12 == 0) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,3,0,uVar10);
          }
        }
        else {
          uVar14 = idol::GetAnimDuration(0x5a);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(300);
          *(undefined4 *)((int)pvVar3 + 0x360) = uVar14;
          GetBonePosition(lVar9,0,auStack_160);
          FUN_005e7e98(auStack_150,lVar9 + 0xc0);
          FUN_005e7f98((double)*(float *)((int)pvVar3 + 0x3bc),auStack_140,lVar9 + 0xd0);
          FUN_005e7f54(auStack_150,auStack_150,auStack_140);
          dVar21 = (double)FUN_005e8588(auStack_160,iVar13 + 0x10);
          fVar7 = 30.0;
          fVar26 = (float)(dVar21 * 0.5);
          if ((fVar26 <= 30.0) && (fVar7 = fVar26, fVar26 < 0.0)) {
            fVar7 = 0.0;
          }
          FUN_005e7f98((double)(g_FrameTime * fVar7),auStack_150,auStack_150);
          FUN_003e7fc8(0x4050000000000000,(double)(g_FrameTime * 18.0),auStack_160,
                       auStack_150);
          M1422_002746a8(lVar9,auStack_160);
          dVar21 = (double)MB_randRangeSigned(0x3fc10624e0000000,0x3fd54fdf40000000);
          *(float *)((int)pvVar3 + 0x3bc) = (float)dVar21;
        }
      }
      iVar13 = FastDecTimerS32(uVar19 + 0x358);
      if ((iVar13 != 0) && (iVar13 = FastDecTimerS32(uVar19 + 0x35c), iVar13 != 0)) {
        *(undefined4 *)((int)pvVar3 + 0x350) = 0xd;
        moby->state = '\f';
        if (moby->animationId != '\x05') {
          uVar10 = idol::GetAnimDuration(0x14);
          MB_SetAnimation(lVar9,5,0,uVar10);
        }
      }
    }
    else if (bVar1 == 0xc) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar26 = OrganicDeltAng
                         ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar3 + 0x370));
      M1422_00273da0((double)fVar26,lVar9);
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar13 = M1422_00274cf0(lVar9);
        if (iVar13 == 0x13) {
          moby->state = '\x13';
          if (moby->animationId != '\x01') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,1,0,uVar10);
          }
          uVar14 = 0;
          dVar21 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition);
          if (dVar21 < 16.0) {
            uVar14 = idol::GetAnimDuration(0x5a);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
          uVar14 = FUN_003ebfcc(0x4017333340000000,lVar9,uVar19 + 0x3c0);
          *(undefined4 *)((int)pvVar3 + 0x338) = uVar14;
        }
        else if (iVar13 == 0x11) {
          moby->state = '\x11';
          if (moby->animationId != '\v') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,0xb,0,uVar10);
          }
          uVar14 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
        }
        else if (iVar13 == 0xf) {
          moby->state = '\x0f';
          if (moby->animationId != '\n') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,10,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = 0;
          uVar14 = idol::GetAnimDuration(600);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
        }
        else if (iVar13 == 0xe) {
          moby->state = '\x12';
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,0,0,uVar10);
          }
          iVar13 = 0;
          dVar21 = 0.0;
          uVar18 = uVar19;
          do {
            FUN_005e7e98(&local_210,&Cuboids[*(int *)((int)uVar18 + 0x280)].pos);
            dVar23 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x3c0) -
                                                  g_heroPosition.x),
                                          (double)(*(float *)((int)pvVar3 + 0x3c4) -
                                                  g_heroPosition.y));
            dVar22 = (double)FUN_005e8338((double)(*(float *)((int)pvVar3 + 0x3c0) - local_210),
                                          (double)(*(float *)((int)pvVar3 + 0x3c4) - local_20c));
            dVar23 = (double)FastSubRots((float)dVar23,(float)dVar22);
            if (dVar21 < dVar23) {
              *(undefined4 *)((int)pvVar3 + 0x3a8) = *(undefined4 *)((int)uVar18 + 0x280);
              dVar21 = dVar23;
            }
            iVar13 = iVar13 + 1;
            uVar18 = uVar18 + 4;
          } while (iVar13 < 3);
          uVar14 = idol::GetAnimDuration(900);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration(0xb4);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
        }
        else if (iVar13 == 0xd) {
          moby->state = '\r';
          if (moby->animationId != '\x02') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,2,0,uVar10);
          }
          *(undefined4 *)((int)pvVar3 + 0x354) = 0;
          iVar13 = MB_randInt(3);
          uVar14 = idol::GetAnimDuration(iVar13 * 0x5a + 0x14a);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
          uVar14 = idol::GetAnimDuration((6 - *(int *)((int)pvVar3 + 0x34c)) * 0x1e);
          *(undefined4 *)((int)pvVar3 + 0x35c) = uVar14;
          dVar21 = (double)MB_randRangeFloat(-0.333,0.333);
          *(float *)((int)pvVar3 + 0x3bc) = (float)dVar21;
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\x06') {
            uVar10 = idol::GetAnimDuration(0x14);
            MB_SetAnimation(lVar9,6,0,uVar10);
          }
          uVar14 = idol::GetAnimDuration(0xf);
          *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar3 + 0x358) = uVar14;
        }
      }
    }
  }
  else if (bVar1 == 0x1b) {
    iVar13 = *(int *)((int)pvVar3 + 0x34c);
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    if (iVar13 < 7) {
      mode_sceneInit(3);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 7;
      g_SceneHeroWarpPending = 1;
      FUN_005e7e98(&g_SceneHeroWarpPos.x,&Cuboids[*(int *)((int)pvVar3 + 0x294)].pos);
      FUN_005e7e98(&g_SceneHeroWarpRot.x,&Cuboids[*(int *)((int)pvVar3 + 0x294)].rot);
      moby->state = '\a';
      *(undefined4 *)((int)pvVar3 + 0x39c) = 0x1b;
    }
    else if (iVar13 == 7) {
      if ((((g_standingOnMoby == 0) || (g_framesNotGrounded != 0)) ||
          (*(short *)(g_standingOnMoby + 0xa6) != 0x247)) ||
         ((g_heroState != THRUSTER_PACK_BONK_JUMP || (*(int *)((int)pvVar3 + 0x3ac) != 0)))) {
        iVar13 = *(int *)((int)pvVar3 + 0x3ac);
        if (iVar13 == 0) {
          FUN_003d2234(*(undefined4 *)((int)pvVar3 + 0x200));
          iVar13 = *(int *)((int)pvVar3 + 0x3ac);
        }
        if (iVar13 == 0) goto LAB_00279dec;
      }
      else {
        iVar13 = 1;
      }
      *(int *)((int)pvVar3 + 0x3ac) = iVar13 + 1;
      iVar12 = idol::GetAnimDuration(0x28);
      if (iVar12 < iVar13) {
        mode_sceneInit(4);
        *(undefined4 *)((int)pvVar3 + 0x34c) = 8;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar3 + 0x39c) = 0x1b;
      }
    }
    else if (iVar13 == 8) {
      SetCameraPosition(local_c0,local_b0,1,0,0);
      mode_sceneInit(5);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 9;
    }
    else if ((iVar13 == 9) && (g_gameMode == GAME_MODE_NORMAL)) {
      mode_creditsInit();
      *(undefined4 *)((int)pvVar3 + 0x34c) = 10;
    }
    else if ((iVar13 == 10) && (g_gameMode == GAME_MODE_NORMAL)) {
      PlayStoryMovie(0xb);
      *(undefined4 *)((int)pvVar3 + 0x34c) = 0xb;
    }
    else if ((iVar13 == 0xb) && (g_gameMode == GAME_MODE_NORMAL)) {
      DAT_00facc64 = 0;
      g_deplanetizerUp = 0;
      BeginMenu(0x21);
      DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x3a0));
      if (*(MobyInstance **)((int)pvVar3 + 0x3a4) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x3a4));
      }
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0x1a) {
    dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    fVar26 = OrganicDeltAng
                       ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar3 + 0x370));
    M1422_00273da0((double)fVar26,lVar9);
    *(int *)((int)pvVar3 + 0x358) = *(int *)((int)pvVar3 + 0x358) + 1;
    iVar12 = idol::GetAnimDuration(0x14);
    iVar13 = *(int *)((int)pvVar3 + 0x358);
    if (iVar13 == (iVar13 / iVar12) * iVar12) {
      dVar23 = (double)(moby->rotation).z;
      dVar21 = (double)MB_randRangeFloat(-30.0,30.0);
      dVar21 = (double)FastWrapRot((float)dVar23,(float)(dVar21 * 0.01745329238474369));
      cosf((float)dVar21);
      FUN_005e8128(dVar21);
      uVar10 = 0;
      MB_randRangeFloat(3.0,8.0);
      FUN_005e7f54(local_e0,local_e0,uVar19 + 0x3c0);
      MB_genericExplosion
                (uVar10,uVar10,0x3ff0000000000000,0x4004000000000000,0x4022000000000000,
                 0x3ff0000000000000,uVar10,lVar9,&DAT_00a15d30,local_e0);
      iVar13 = *(int *)((int)pvVar3 + 0x358);
    }
    iVar12 = idol::GetAnimDuration(0x78);
    if (iVar13 == iVar12) {
      if (moby->animationId != '\x0e') {
        MB_SetAnimation(lVar9,0xe,5,1);
      }
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      uVar10 = 0;
      FUN_005e7f54(0,local_d0,local_d0,uVar19 + 0x3c0);
      MB_genericExplosion
                (uVar10,uVar10,0x4004000000000000,0x4014000000000000,0x4022000000000000,
                 0x4000000000000000,0x4024000000000000,lVar9,&DAT_00a15d30,local_d0,0,
                 0xffffffffffffffff,0x28,10,0x20);
    }
    if ((moby->updateId == moby->animationId && moby->animationId == '\x0e') &&
       (iVar13 = MB_MayaFrameTrigger(30.0,moby), iVar13 != 0)) {
      moby->state = '\x1b';
      FUN_003d42a8(g_MobyInstance + *(int *)((int)pvVar3 + 0x21c));
    }
  }
  else if (bVar1 == 0x15) {
    dVar21 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar3 + 0x330) + 0x10) -
                                          (moby->pos).x),
                                  (double)(*(float *)(*(int *)((int)pvVar3 + 0x330) + 0x14) -
                                          (moby->pos).y));
    fVar26 = OrganicDeltAng
                       ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,in_r4,
                        (float *)((int)pvVar3 + 0x370));
    FUN_003d22a0((double)fVar26,*(undefined4 *)((int)pvVar3 + 0x330));
    iVar13 = M1422_00273c08
                       ((double)(g_FrameTime * 12.0),lVar9,
                        (ulonglong)*(uint *)((int)pvVar3 + 0x330) + 0x10);
    if (iVar13 != 0) {
      iVar13 = *(int *)((int)pvVar3 + 0x34c);
      if (iVar13 == 4) {
        idol::GetAnimDuration(900);
      }
      else if (iVar13 == 3) {
        idol::GetAnimDuration(0x4b0);
      }
      else if (iVar13 == 2) {
        idol::GetAnimDuration(0x708);
      }
      else if (iVar13 == 1) {
        idol::GetAnimDuration(0xa8c);
      }
      else if (iVar13 == 0) {
        idol::GetAnimDuration(0xe10);
      }
      else {
        idol::GetAnimDuration(600);
      }
      pMVar16 = g_MobyInstance + *(int *)((int)pvVar3 + 0x21c);
      uVar10 = idol::GetAnimDuration();
      FUN_003d4228(pMVar16,uVar10);
      *(undefined4 *)((int)pvVar3 + 0x354) = 0;
      moby->state = ((byte)(ZERO_MASK((4 - *(int *)((int)pvVar3 + 0x34c)))) & 8) + 0xc
      ;
      *(undefined4 *)((int)pvVar3 + 0x364) = 1;
      *(int *)((int)pvVar3 + 0x34c) = *(int *)((int)pvVar3 + 0x34c) + 1;
    }
    if (g_playDrekButtonCutscene != 0) {
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 0x14) {
    iVar13 = FastDecTimerS32(uVar19 + 0x354);
    if (iVar13 != 0) {
      uVar14 = idol::GetAnimDuration(0x14);
      *(undefined4 *)((int)pvVar3 + 0x354) = uVar14;
      FUN_005e7e98(auStack_220,uVar19 + 0x3c0);
      iVar13 = FUN_00257bf0(lVar9,*(undefined4 *)((int)pvVar3 + 0x214),auStack_220);
      if (iVar13 != 0) {
        moby->state = '\f';
      }
    }
  }
  else if (bVar1 == 0x13) {
    dVar21 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    fVar26 = OrganicDeltAng
                       ((float)dVar21,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar3 + 0x370));
    iVar13 = FastDecTimerS32((double)fVar26,uVar19 + 0x354);
    if (iVar13 != 0) {
      M1422_002744f8(lVar9);
    }
    dVar21 = 5.800000190734863;
    FUN_003ec060(0x4017333340000000,*(undefined4 *)((int)pvVar3 + 0x338),uVar19 + 0x3c0);
    iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x3b0));
    if (iVar13 == 0) {
      iVar13 = PlayMobySound(0xe,4,moby);
      *(int *)((int)pvVar3 + 0x3b0) = iVar13;
    }
    bVar8 = false;
    iVar13 = FastDecTimerS32(uVar19 + 0x358);
    if ((iVar13 != 0) &&
       ((g_heroStateType != 0xf ||
        (iVar13 = FastDecTimerS32(uVar19 + 0x35c), iVar13 != 0)))) {
      bVar8 = true;
    }
    if ((g_heroStateType == 0xf) &&
       (dVar23 = (double)FUN_005e8588(&g_heroPosition,g_heroGrindPath + *g_heroGrindPath * 4),
       dVar23 < 3.0)) {
      bVar8 = true;
    }
    if ((g_heroState == TAKING_DAMAGE) &&
       (dVar23 = (double)FUN_005e8588(lVar9 + 0x10,&g_heroPosition), dVar23 < 12.0)) {
      bVar8 = true;
    }
    dVar23 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[*(int *)((int)pvVar3 + 600)].pos);
    if (((double)(float)((double)DAT_007a9ff4 + dVar21) < dVar23) || (bVar8)) {
      iVar13 = *(int *)((int)pvVar3 + 0x3b0);
      if ((iVar13 != -1) &&
         ((g_SoundChannels[iVar13].pMoby == moby &&
          (g_SoundChannels[iVar13].state != '\0')))) {
        sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x3b0) = 0xffffffff;
      moby->state = '\f';
      if (moby->animationId != '\0') {
        uVar10 = idol::GetAnimDuration(0x14);
        MB_SetAnimation(lVar9,0,0,uVar10);
      }
      *(undefined4 *)((int)pvVar3 + 0x350) = 0x13;
    }
  }
LAB_00279dec:
  M1422_002737b8(lVar9);
  if (moby->enabled != '\0') {
    GetBonePosition(lVar9,8,auStack_a0);
    GetBonePosition(lVar9,9,auStack_90);
    FUN_005e81f0(auStack_80,auStack_a0,auStack_90);
    FUN_005e7f98(0x3fb99999a0000000,auStack_80,auStack_80);
    MB_SpawnSparksPair(0x41224f8000000000,0,auStack_a0,auStack_a0,auStack_80);
  }
  if (1 < *(int *)((int)pvVar3 + 0x34c)) {
    DAT_0096a2b8 = moby;
  }
  FUN_005e7e98(lVar9 + 0x10,uVar19 + 0x3c0);
  dVar21 = (double)FastWrapRot
                             (*(float *)((int)pvVar3 + 0x3d4),g_FrameTime * 3.1415927);
  *(float *)((int)pvVar3 + 0x3d4) = (float)dVar21;
  dVar21 = (double)FUN_005e8128();
  OrganicDelt
            ((float)((double)*(float *)((int)pvVar3 + 0x3d0) * dVar21 +
                    (double)*(float *)((int)pvVar3 + 0x3d8)),g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,
             g_FrameTime * 4.0,(float *)((int)pvVar3 + 0x3dc),0x720000,
             (float *)((int)pvVar3 + 0x3e0));
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x3dc);
  *(undefined4 *)((int)pvVar3 + 0x3d8) = 0;
  dVar23 = 0.029999999329447746;
  dVar21 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar9,uVar19 + 0xc0,7);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar23),
             (double)(float)((double)DAT_0071f40c * dVar21),lVar9,uVar19 + 0x140,0x13);
  dVar21 = (double)FastWrapRot
                             (*(float *)((int)pvVar3 + 0x3b4),g_FrameTime * 3.4906585);
  *(float *)((int)pvVar3 + 0x3b4) = (float)dVar21;
  dVar21 = (double)FUN_005e8128();
  uVar15 = FastLerpColor((double)(float)(dVar21 * 0.5 + 0.5),0x30c8c8c8,0x1c393939);
  moby->glowRgba = uVar15;
  *(uint *)((int)pvVar3 + 0x3b8) =
       (((int)uVar15 >> 0x10 & 0xffU) + 1) * 0x5500 & 0x7f0000 | uVar15 & 0xff000000 |
       ((int)uVar15 >> 8 & 0xffU) << 8 | ((uVar15 & 0xff) + 1) * 0x55 >> 8;
  if (moby->enabled != '\0') {
    RegisterFuncForMoby(&PTR_M1424_0027a098_0070a5b0,moby);
  }
  return;
}



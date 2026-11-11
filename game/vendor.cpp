// game/vendor.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 33 functions, 0x16a0d8-0x174b0c
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/vendor.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initsky.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/mUnk.h"
#include "sdk/libc/abort.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"

// 0x016a0d8 (0x14 bytes)
void SECTION_HEADER_VENDOR(void)

{
  DAT_007387cc = 0x10000;
  return;
}


// 0x016a108 (0x288 bytes)
void ProjectBoxToScreenInt
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  dVar6 = 1.0;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar1 = *(float *)(g_viewMtxPtr + 0x11c) * 1.0;
  fVar2 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000030 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000034 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000038 + fVar1);
  fVar1 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000040 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000044 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000048 + fVar1);
  dVar8 = (double)g_ViewContext.fontClipScale.x;
  fVar3 = *(float *)(g_viewMtxPtr + 0x110) * 1.0;
  fVar4 = *(float *)(g_viewMtxPtr + 0x114) * 1.0;
  dVar12 = (double)((*(float *)(g_viewMtxPtr + 0xe0) * fStack00000040 +
                     *(float *)(g_viewMtxPtr + 0xf0) * fStack00000044 +
                     *(float *)(g_viewMtxPtr + 0x100) * fStack00000048 + fVar3) * fVar1);
  dVar9 = (double)((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000040 +
                    *(float *)(g_viewMtxPtr + 0xf4) * fStack00000044 +
                    *(float *)(g_viewMtxPtr + 0x104) * fStack00000048 + fVar4) * fVar1);
  dVar13 = dVar6;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    dVar13 = 1.2999999523162842;
  }
  dVar7 = (double)g_ViewContext.fontClipScale.y;
  dVar13 = (double)((float)(dVar8 * dVar13) *
                   (*(float *)(g_viewMtxPtr + 0xe0) * fStack00000030 +
                    *(float *)(g_viewMtxPtr + 0xf0) * fStack00000034 +
                    *(float *)(g_viewMtxPtr + 0x100) * fStack00000038 + fVar3) * fVar2);
  dVar14 = (double)(float)(-(double)((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000030 +
                                      *(float *)(g_viewMtxPtr + 0xf4) * fStack00000034 +
                                      *(float *)(g_viewMtxPtr + 0x104) * fStack00000038 + fVar4) *
                                    fVar2) * dVar7);
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    dVar6 = 1.2999999523162842;
  }
  dVar11 = (double)(float)(dVar8 * dVar6);
  dVar10 = -dVar9;
  dVar6 = 0.25;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  uVar5 = FastDoubleToInt
                    ((double)(float)((double)(float)(dVar13 * 0.25) + 256.0),
                     (double)(float)(dVar13 * 0.25),dVar8,dVar9);
  *param_7 = uVar5;
  uVar5 = FastDoubleToInt((double)((float)(dVar14 * dVar6) + 208.0));
  *param_8 = uVar5;
  uVar5 = FastDoubleToInt
                    ((double)(float)((double)(float)((double)(float)(dVar11 * dVar12) - dVar13) *
                                    dVar6));
  *param_5 = uVar5;
  uVar5 = FastDoubleToInt
                    ((double)(float)((double)(float)((double)(float)(dVar10 * dVar7) - dVar14) *
                                    dVar6));
  *param_6 = uVar5;
  return;
}


// 0x016a3a8 (0x1fc bytes)
void ProjectBoxToScreen
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float *param_5,float *param_6,float *param_7,float *param_8)

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
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  fVar1 = 1.0;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar5 = *(float *)(g_viewMtxPtr + 0x11c) * 1.0;
  fVar2 = *(float *)(g_viewMtxPtr + 0xe0);
  fVar3 = *(float *)(g_viewMtxPtr + 0xf0);
  fVar4 = *(float *)(g_viewMtxPtr + 0x100);
  fVar6 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000030 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000034 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000038 + fVar5);
  fVar5 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000040 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000044 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000048 + fVar5);
  fVar7 = *(float *)(g_viewMtxPtr + 0x110) * 1.0;
  fVar8 = *(float *)(g_viewMtxPtr + 0x114) * 1.0;
  fVar9 = fVar1;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    fVar9 = 1.3;
  }
  fVar9 = g_ViewContext.fontClipScale.x * fVar9 *
          (fVar2 * fStack00000030 + fVar3 * fStack00000034 + fVar4 * fStack00000038 + fVar7) * fVar6
  ;
  fVar6 = -((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000030 +
             *(float *)(g_viewMtxPtr + 0xf4) * fStack00000034 +
             *(float *)(g_viewMtxPtr + 0x104) * fStack00000038 + fVar8) * fVar6) *
          g_ViewContext.fontClipScale.y;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    fVar1 = 1.3;
  }
  fVar1 = g_ViewContext.fontClipScale.x * fVar1;
  fVar8 = -((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000040 +
             *(float *)(g_viewMtxPtr + 0xf4) * fStack00000044 +
             *(float *)(g_viewMtxPtr + 0x104) * fStack00000048 + fVar8) * fVar5) *
          g_ViewContext.fontClipScale.y;
  *param_7 = fVar9 * 0.25 + 256.0;
  *param_8 = fVar6 * 0.25 + 208.0;
  *param_5 = (fVar1 * (fVar2 * fStack00000040 + fVar3 * fStack00000044 + fVar4 * fStack00000048 +
                      fVar7) * fVar5 - fVar9) * 0.25;
  *param_6 = (fVar8 - fVar6) * 0.25;
  return;
}


// 0x016a5a4 (0xb4 bytes)
void Vendor_ParseMobySeqs(void)

{
  MobyClass *pClass;
  int *piVar1;
  int seq;
  
  seq = 0;
  pClass = MobyClasses[DAT_00a354cc];
  piVar1 = DAT_00e5a668;
  do {
    if (*piVar1 != 0) {
      *(int *)(&pClass->type + seq * 4) = (int)DAT_00e5a668 + *piVar1;
      ParseMobySeq(pClass,seq);
    }
    seq = seq + 1;
    piVar1 = piVar1 + 1;
  } while (seq < 0x10);
  return;
}


// 0x016a658 (0x28c bytes)
// strings: 0071fb2c: '������������'

void LoadVendorItems(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  for (iVar9 = 0; (iVar9 < 0xc && (g_purchasableVendorItems[iVar9] != -1)); iVar9 = iVar9 + 1) {
  }
  iVar8 = 0;
  g_VendorItemsCnt = 0;
  if (0 < iVar9) {
    do {
      if (g_purchasableVendorItems[iVar8] != -1) {
        uVar6 = (ulonglong)(byte)g_purchasableVendorItems[iVar8] & 0x3f;
        iVar5 = (int)uVar6;
        if ((g_purchasableVendorItems[iVar8] & 0x40U) == 0) {
          if (param_1 == '\0') {
            iVar2 = g_VendorItemsCnt * 0x10;
            iVar3 = g_VendorItemsCnt * 0x10;
            iVar4 = g_VendorItemsCnt * 0x10;
            *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar5;
            g_VendorItemsCnt = g_VendorItemsCnt + 1;
            (&DAT_00e5a724)[iVar2] = 0;
            uVar1 = (&DAT_00735580)[iVar5 * 5];
            (&DAT_00e5a725)[iVar3] = 0;
            *(undefined4 *)(&DAT_00e5a72c + iVar4) = uVar1;
          }
        }
        else if (*(short *)((int)&DAT_00737d38 + (int)(uVar6 << 3) * 3) != 0) {
          iVar2 = g_VendorItemsCnt * 0x10;
          iVar3 = g_VendorItemsCnt * 0x10;
          *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar5;
          (&DAT_00e5a724)[g_VendorItemsCnt * 0x10] = 1;
          g_VendorItemsCnt = g_VendorItemsCnt + 1;
          uVar1 = (&DAT_00735580)[iVar5 * 5];
          (&DAT_00e5a725)[iVar2] = 0;
          *(undefined4 *)(&DAT_00e5a72c + iVar3) = uVar1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  lVar7 = 0;
  do {
    iVar9 = (int)lVar7;
    if (((&UnlockableItems.field0_0x0)[iVar9] != '\0') &&
       (*(short *)((int)&DAT_00737d38 + (int)(lVar7 << 3) * 3) != 0)) {
      iVar8 = 0;
      while( true ) {
        if ((g_VendorItemsCnt <= iVar8) || (*(int *)(&g_VendorItems + iVar8 * 0x10) == iVar9))
        break;
        iVar8 = iVar8 + 1;
      }
      if (g_VendorItemsCnt <= iVar8) {
        iVar8 = g_VendorItemsCnt * 0x10;
        iVar5 = g_VendorItemsCnt * 0x10;
        *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar9;
        (&DAT_00e5a724)[g_VendorItemsCnt * 0x10] = 1;
        g_VendorItemsCnt = g_VendorItemsCnt + 1;
        uVar1 = *(undefined4 *)((int)&DAT_00735580 + (int)(lVar7 << 4) + (int)(lVar7 << 2));
        (&DAT_00e5a725)[iVar8] = 0;
        *(undefined4 *)(&DAT_00e5a72c + iVar5) = uVar1;
      }
    }
    lVar7 = (longlong)(iVar9 + 1);
  } while (iVar9 + 1 < 0x25);
  return;
}


// 0x016a8f0 (0x740 bytes)
// strings: 00738840: '@s33' (raw)

void Spawn_Moby11_Vendor(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if (DAT_00e5aa38 == '\0') {
    DAT_00e5a9d2 = *(int *)(g_viewMtxPtr + 0xc) == 0;
    DAT_00e5aa38 = '\x01';
    DAT_00e5aa40 = DAT_00e5a9d2;
  }
  DAT_00e5a830 = *(undefined4 *)(g_viewMtxPtr + 0x1a78);
  dVar7 = 0.0;
  *(undefined4 *)(g_viewMtxPtr + 0x1a78) = 0;
  FastMemSet(&g_OpenVendorState,0,0x1e0);
  FastMemSet(&DAT_00e5a990,0,0x40);
  if (moby == (MobyInstance *)0x0) {
    moby = CreateMoby(VENDOR);
    fVar3 = GameCamera.posX;
    fVar2 = DAT_00738840;
    moby->drawDistance = 0x40;
    (moby->pos).x = fVar3 + fVar2;
    (moby->pos).y = GameCamera.posY;
    fVar3 = GameCamera.posZ;
    fVar2 = DAT_00738848;
    (moby->rotation).w = (float)dVar7;
    (moby->rotation).y = (float)dVar7;
    (moby->rotation).x = (float)dVar7;
    (moby->rotation).z = 3.1415927;
    (moby->pos).z = fVar3 - fVar2;
    UpdateMobyTransform(moby);
    moby->state = '\x03';
    g_lastVendorWasPda = 1;
  }
  DAT_00e5a688 = 0;
  if (-1 < g_Language + -1) {
    DAT_00e5a688 = g_Language + -1;
  }
  DAT_00e5a694 = 0;
  DAT_00e5a6a8 = 0;
  DAT_00e5a6a0 = -1;
  DAT_00e5a6a4 = 0xffffffff;
  DAT_00e5a698 = 0xffffffff;
  DAT_00e5a944 = 0;
  DAT_00e5a94c = 0;
  g_VendorMenuState = 0;
  DAT_00e5a95c = 0;
  DAT_00e5a950 = (float)dVar7;
  FUN_0060bc8c(0x1d);
  music_Pause(0);
  STUB_00505d20();
  LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
  iVar4 = ((int)g_VendorItemsCnt >> 1) +
          (uint)((int)g_VendorItemsCnt < 0 && (g_VendorItemsCnt & 1) != 0);
  if ((int)g_VendorItemsCnt < 3) {
    iVar4 = 1;
  }
  DAT_00e5a6a8 = ((int)g_VendorItemsCnt >> 1) +
                 (uint)((int)g_VendorItemsCnt < 0 && (g_VendorItemsCnt & 1) != 0);
  g_VendorCursor = (iVar4 - DAT_00e5a6a8) * 0x28;
  Hud_ResetAllEntriesHidden();
  DAT_00e5a6a4 = RegisterHUDCallback
                           (0x12,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                            &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
  iVar4 = DAT_00e5a6a8 * 0x10;
  if ((&DAT_00e5a724)[iVar4] == '\x01') {
    DAT_00e5a6a0 = RegisterHUDCallback
                             (0x30,*(int *)(&g_VendorItems + iVar4) + 60000,
                              &PTR_AmmoHud_Init_00705808,&PTR_HudEntry_UpdateCounter_007056c8,
                              &PTR_Draw_AmmoCounter_00705888,
                              (int *)(&currentAmmoArray.field0_0x0 +
                                     *(int *)(&g_VendorItems + iVar4)),
                              (uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar4) * 0xc])
    ;
  }
  g_CutscenePlaying = 1;
  DAT_00e5a664 = g_NpcBuffer + 0x100000;
  g_OpenVendorState = 0;
  DAT_00e5a658 = 0;
  DAT_00e5a660 = g_NpcBuffer;
  DAT_00e5a66c = moby;
  PlayMobySound(3,0,moby);
  if (g_lastVendorWasPda == 0) {
    FadeToBlack(4);
  }
  Help_Kill();
  SceneScreenFade = 1.0;
  DAT_0095cf14 = (float)dVar7;
  g_gameMode = GAME_MODE_VENDOR;
  TransitionMovement(100,1);
  DAT_0096bd8c = 1;
  g_heroInvisible = 1;
  Hero_MakeInvisible();
  if (g_lastVendorWasPda == 0) {
    MB_SetAnimationNoBlend(moby,2,0);
  }
  else {
    MB_SetAnimationNoBlend(moby,3,0);
  }
  bVar1 = g_lastVendorWasPda == 0;
  moby->unk58 = DAT_0071f408 * 0.5;
  if (bVar1) {
    DAT_00e5a6bc = (DAT_00e5a66c->transform).v0.w * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.w * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.w * DAT_00738848 + DAT_0073884c;
    DAT_00e5a6b0 = (DAT_00e5a66c->transform).v0.x * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.x * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.x * DAT_00738848 + (DAT_00e5a66c->pos).x;
    DAT_00e5a6b4 = (DAT_00e5a66c->transform).v0.y * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.y * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.y * DAT_00738848 + (DAT_00e5a66c->pos).y;
    DAT_00e5a6b8 = (DAT_00e5a66c->transform).v0.z * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.z * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.z * DAT_00738848 + (DAT_00e5a66c->pos).z;
    dVar6 = (double)FastWrapRot((DAT_00e5a66c->rotation).z,3.1415927);
    DAT_00e5a6c8 = (float)dVar6;
    SetCameraPosition(&DAT_00e5a6b0,&DAT_00e5a6c0,1,0,0);
    Camera_SetMobyDrivenTargetPos(&DAT_00e5a6b0);
    Camera_SetMobyDrivenTargetRot((float *)&DAT_00e5a6c0);
  }
  iVar4 = 0;
  DAT_00a1de90 = (DAT_00e5a66c->transform).v0.x * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.x * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.x * DAT_007388b8;
  DAT_00a1de94 = (DAT_00e5a66c->transform).v0.y * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.y * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.y * DAT_007388b8;
  DAT_00a1de98 = (DAT_00e5a66c->transform).v0.z * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.z * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.z * DAT_007388b8;
  DAT_00a1de9c = (DAT_00e5a66c->transform).v0.w * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.w * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.w * DAT_007388b8 + DAT_007388bc;
  DAT_00a1de80 = DAT_007388c0;
  DAT_00a1de84 = DAT_007388c4;
  DAT_00a1de88 = DAT_007388c8;
  DAT_00a1de8c = DAT_007388cc;
  memset(&DAT_00a1deb0,0,0x10);
  memset(&DAT_00a1dea0,0,0x10);
  iVar5 = 0;
  do {
    if ((&DAT_00e5a841)[iVar5] == '\0') {
      AttachManipulator(DAT_00e5a66c,iVar4 + 0x14,&DAT_00e5a840 + iVar5);
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x40;
  } while (iVar4 < 4);
  if ((int)g_VendorItemsCnt < 8) {
    DAT_00e5a8f4 = (float)(longlong)(int)((7 - g_VendorItemsCnt) * 0x681);
    DAT_00e5a934 = (float)(longlong)(int)((7 - g_VendorItemsCnt) * -0x681);
  }
  else {
    DAT_00e5a8f4 = (float)dVar7;
    DAT_00e5a934 = (float)dVar7;
  }
  DAT_00e5a9d0 = 0;
  DAT_00e5a9d1 = 0;
  DAT_00e5a874 = DAT_00e5a8f4;
  DAT_00e5a8b4 = DAT_00e5a934;
  return;
}


// 0x016b038 (0x2ac bytes)
void Vendor_EndWeaponCutscene(int param_1)

{
  bool bVar1;
  MobyInstance *moby;
  int id;
  double dVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [6];
  
  id = DAT_00e5a6a4;
  bVar1 = DAT_00e5a6a4 != -1;
  *(undefined4 *)(g_viewMtxPtr + 0x1a78) = DAT_00e5a830;
  if (bVar1) {
    Hud_SetEntryValueById(id,0);
  }
  if (DAT_00e5a6a0 != -1) {
    Hud_SetEntryValueById(DAT_00e5a6a0,0);
  }
  DAT_00e5a6a4 = 0xffffffff;
  DAT_00e5a6a0 = 0xffffffff;
  Hud_DecHideCounter();
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  TransitionMovement(0,1);
  g_heroInvisible = 0;
  Hero_MakeVisible();
  if (g_lastVendorWasPda == 0) {
    local_50 = (DAT_00e5a66c->transform).v0.x * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.x * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.x * DAT_00738858;
    local_44 = (DAT_00e5a66c->transform).v0.w * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.w * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.w * DAT_00738858 + DAT_0073885c;
    local_4c = (DAT_00e5a66c->transform).v0.y * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.y * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.y * DAT_00738858 + (DAT_00e5a66c->pos).y;
    local_40[0] = 0.0;
    local_48 = (DAT_00e5a66c->transform).v0.z * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.z * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.z * DAT_00738858 + (DAT_00e5a66c->pos).z;
    local_40[1] = 0.0;
    dVar2 = (double)FastWrapRot((DAT_00e5a66c->rotation).z,3.1415927);
    local_40[2] = (float)dVar2;
    if (param_1 == 0) {
      Hero_Warp(&local_50,local_40,0,0);
      Camera_DeactivateMobyDrivenCam(2);
    }
    else {
      Hero_Warp(&local_50,local_40,0,1);
    }
  }
  moby = DAT_00e5a66c;
  DAT_00e5a66c->state = '\x01';
  if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
    g_SpeechPlaying.status = 5;
  }
  if (g_lastVendorWasPda != 0) {
    DeleteMoby(moby);
  }
  FUN_0060bb90(0x1d);
  music_Unpause();
  STUB_00505d20();
  return;
}


// 0x016b2f8 (0x34c bytes)
int Vendor_StartWeaponCutscene(void)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  
  Camera_DeactivateMobyDrivenCam(2);
  iVar1 = DAT_00e5a66c;
  if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
    g_SpeechPlaying.status = 5;
  }
  g_CutscenePlaying = 1;
  pfVar2 = (float *)(DAT_00e5a66c + 0xc0);
  *(undefined1 *)(DAT_00e5a66c + 0x20) = 1;
  g_OpenVendorState = 3;
  DAT_00e5a654 = 0;
  DAT_00e5a71c = *(float *)(iVar1 + 0xcc) * DAT_0073a2e0 + *(float *)(iVar1 + 0xdc) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xec) * DAT_0073a2e8 + DAT_0073a2ec;
  DAT_00e5a710 = *pfVar2 * DAT_0073a2e0 + *(float *)(iVar1 + 0xd0) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe0) * DAT_0073a2e8 + *(float *)(iVar1 + 0x10);
  DAT_00e5a714 = *(float *)(iVar1 + 0xc4) * DAT_0073a2e0 + *(float *)(iVar1 + 0xd4) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe4) * DAT_0073a2e8 + *(float *)(iVar1 + 0x14);
  DAT_00e5a718 = *(float *)(iVar1 + 200) * DAT_0073a2e0 + *(float *)(iVar1 + 0xd8) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe8) * DAT_0073a2e8 + *(float *)(iVar1 + 0x18) + 2.0;
  dVar3 = (double)GetGroundZ(0x3fe0000000000000,&DAT_00e5a710,0);
  DAT_00e5a718 = (float)dVar3;
  dVar4 = 0.0;
  DAT_00e5a70c = 0;
  DAT_00e5a708 = 0.0;
  DAT_00e5a704 = 0;
  DAT_00e5a700 = 0;
  dVar3 = (double)FastWrapRot(*(float *)(DAT_00e5a66c + 0x48),3.1415927);
  DAT_00e5a708 = (float)dVar3;
  FastEulerToMtx(&DAT_00e5a6d0,&DAT_00e5a700);
  FastMemSet(&DAT_0095cd50,0,0x1c0);
  FastMemSet(&DAT_00a1be80,0,0x40);
  STUB_00174cf4(1);
  VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x40000;
  DAT_0095cda8 = g_NpcBuffer;
  g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
  DAT_0095cf14 = (float)dVar4;
  SceneScreenFade = (float)dVar4;
  iVar1 = *(int *)(&DAT_0073a240 + DAT_00e5a698 * 4);
  if ((g_CurrentWeapon != 0) && (DAT_00e5a698 != g_CurrentWeapon)) {
    Hero_KillGadget(0,0);
  }
  DAT_0096bd98 = DAT_00e5a698;
  if (DAT_00e5a698 == 0x18) {
    DAT_0096bd98 = 0;
  }
  LoadGadgetModel((&DAT_00721010)[DAT_00e5a698 * 0x13],-1);
  LoadWeaponCutscene(iVar1);
  g_PendingSpeech = 0x2734;
  ParseWeaponSceneChunk(0);
  while (g_SpeechPlaying.status != 3) {
    sound_Update();
    STUB_00503078(0);
  }
  iVar1 = music_PlayPreseekedSpeech();
  return iVar1;
}


// 0x016b650 (0x3e0 bytes)
int StartGadgetPickupCutscene(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  piVar1 = g_viewMtxPtr;
  if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
  }
  (*(code *)**(undefined4 **)(*piVar1 + 0x18))(piVar1);
  piVar1[0x6a3] = piVar1[0x6a3] + 2;
  FUN_0060bc8c(0x1d);
  music_Pause(0);
  STUB_00505d20();
  g_CutscenePlaying = 1;
  FastMemSet(&g_OpenVendorState,0,0x1e0);
  DAT_00e5a654 = 0;
  g_OpenVendorState = 3;
  g_gameMode = GAME_MODE_VENDOR;
  DAT_00e5a678 = param_1;
  Hud_ResetAllEntriesHidden();
  Help_Kill();
  iVar2 = TransitionMovement(100,1);
  DAT_0096bd8c = 1;
  g_heroInvisible = 1;
  Hero_MakeInvisible(iVar2);
  DAT_00e5a71c = *(float *)(param_1 + 0xcc) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xdc) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xec) * DAT_0073a2f8 + DAT_0073a2fc;
  DAT_00e5a710 = *(float *)(param_1 + 0xc0) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd0) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe0) * DAT_0073a2f8 + *(float *)(param_1 + 0x10);
  DAT_00e5a714 = *(float *)(param_1 + 0xc4) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd4) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe4) * DAT_0073a2f8 + *(float *)(param_1 + 0x14);
  DAT_00e5a718 = *(float *)(param_1 + 200) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd8) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe8) * DAT_0073a2f8 + *(float *)(param_1 + 0x18);
  dVar3 = (double)GetGroundZ(0x3fe0000000000000,&DAT_00e5a710,0);
  DAT_00e5a718 = (float)dVar3;
  dVar4 = 0.0;
  DAT_00e5a70c = 0;
  DAT_00e5a708 = 0.0;
  DAT_00e5a704 = 0;
  DAT_00e5a700 = 0;
  dVar3 = (double)FastWrapRot(*(float *)(param_1 + 0x48),-1.5707964);
  DAT_00e5a708 = (float)dVar3;
  FastEulerToMtx(&DAT_00e5a6d0,&DAT_00e5a700);
  FastMemSet(&DAT_0095cd50,0,0x1c0);
  FastMemSet(&DAT_00a1be80,0,0x40);
  VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x40000;
  DAT_0095cda8 = g_NpcBuffer;
  g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
  SceneScreenFade = 1.0;
  DAT_0095cf14 = (float)dVar4;
  iVar2 = *(int *)(&DAT_0073a240 + (int)(param_2 << 2));
  Hero_KillGadget(0,0);
  DAT_0096bd98 = (int)param_2;
  LoadGadgetModel((&DAT_00721010)[DAT_0096bd98 * 4 - (int)(param_2 * -0xf)],-1);
  LoadWeaponCutscene(iVar2);
  g_PendingSpeech = 0x2734;
  ParseWeaponSceneChunk(0);
  while (g_SpeechPlaying.status != 3) {
    sound_Update();
    STUB_00503078(0);
  }
  Hero_SetLightsFromMoby(DAT_0095cecc,g_heroMobyPtr);
  iVar2 = music_PlayPreseekedSpeech();
  return iVar2;
}


// 0x016ba38 (0x1e8 bytes)
void Vendor_RestoreHero(void)

{
  double dVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  TransitionMovement(0,1);
  g_heroInvisible = 0;
  Hero_MakeVisible();
  local_40 = *(float *)(DAT_00e5a678 + 0xc0) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd0) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe0) * DAT_0073a2f8;
  local_34 = *(float *)(DAT_00e5a678 + 0xcc) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xdc) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xec) * DAT_0073a2f8 + DAT_0073a2fc;
  local_3c = *(float *)(DAT_00e5a678 + 0xc4) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd4) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe4) * DAT_0073a2f8 + *(float *)(DAT_00e5a678 + 0x14);
  local_30[0] = 0.0;
  local_38 = *(float *)(DAT_00e5a678 + 200) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd8) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe8) * DAT_0073a2f8 + *(float *)(DAT_00e5a678 + 0x18);
  local_30[1] = 0.0;
  dVar1 = (double)FastWrapRot(*(float *)(DAT_00e5a678 + 0x48),-1.5707964);
  local_30[2] = (float)dVar1;
  Hero_Warp(&local_40,local_30,0,1);
  Hud_DecHideCounter();
  if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
    g_SpeechPlaying.status = 5;
  }
  FUN_0060bb90(0x1d);
  music_Unpause();
  STUB_00505d20();
  return;
}


// 0x016bc20 (0x128 bytes)
// strings: 00653f54: '                  %s'


void Vendor_SetScrollText(char *text)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (g_JapaneseMode) {
    FastMemSet(DAT_00e5a67c,0x20202020,0x24);
    iVar4 = 0;
    cVar1 = *text;
    pcVar3 = DAT_00e5a67c + 0x24;
    while (cVar1 != '\0') {
      bVar2 = text[iVar4];
      if (bVar2 == 0x62) {
        iVar4 = iVar4 + 1;
        *pcVar3 = '\x0f';
        pcVar3[1] = text[iVar4];
        pcVar3[2] = '\b';
        pcVar5 = pcVar3 + 3;
      }
      else if ((bVar2 < 8) || (pcVar5 = pcVar3, 0xf < bVar2)) {
        pcVar5 = pcVar3 + 1;
        *pcVar3 = text[iVar4];
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar5;
      cVar1 = text[iVar4];
    }
    *pcVar3 = '\0';
  }
  else {
    snprintf(DAT_00e5a67c,"                  %s",text);
  }
  DAT_00e5a694 = 0;
  return;
}


// 0x016bd58 (0x788 bytes)
// strings: 0096c074: 'None'

void Vendor_UpdateDude(MobyInstance *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if (Cheats[0] == '\0') {
    if (DAT_00e5a991 != '\0') {
      DetachManipulator(param_1,&DAT_00e5a990);
    }
  }
  else {
    if (DAT_00e5a991 == '\0') {
      AttachManipulator(param_1,0,&DAT_00e5a990);
    }
    DAT_00e5a9b0 = 0x4017ae14;
    DAT_00e5a9b4 = 0x4017ae14;
    DAT_00e5a9b8 = 0x4017ae14;
  }
  bVar1 = param_1->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((int)(animationSpeed * 600.5) < DAT_00e5a684) {
          lVar2 = MB_randInt(2);
          DAT_00e5a68c = (int)lVar2;
          g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 0x2716;
          DAT_00e5a9d4 = '\x01';
          DAT_00e5a9d5 = '\0';
          if (param_1->animationId != '\x02') {
            MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
          }
          param_1->state = '\f';
          DAT_00e5a684 = 0;
        }
        DAT_00e5a684 = DAT_00e5a684 + 1;
      }
    }
    else if (bVar1 < 3) {
      if ((int)(animationSpeed * 600.5) < DAT_00e5a684) {
        if (param_1->animationId != '\x03') {
          MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\x03';
        DAT_00e5a684 = 0;
      }
      DAT_00e5a684 = DAT_00e5a684 + 1;
    }
    else if (bVar1 < 4) {
      if ((param_1->field43_0x70 & 2U) != 0) {
        if (param_1->animationId != '\0') {
          MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\0';
      }
    }
    else {
      iVar3 = MB_MayaFrameTrigger
                        ((float)(longlong)*(int *)(&DAT_0073a300 + DAT_00e5a68c * 4),param_1);
      if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
        DAT_00e5a9d5 = '\0';
        music_PlayPreseekedSpeech();
      }
      if ((param_1->field43_0x70 & 2U) != 0) {
        if (param_1->animationId != '\x02') {
          MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\x02';
        DAT_00e5a684 = 0;
      }
    }
  }
  else if (bVar1 == 0xc) {
    if ((g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
      uVar4 = DAT_00e5a68c * 3 + 5;
      if (param_1->animationId != uVar4) {
        MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x05';
    }
  }
  else if (bVar1 == 0xb) {
    if ((g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
      uVar4 = DAT_00e5a68c * 3 + 6;
      if (param_1->animationId != uVar4) {
        MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x06';
    }
  }
  else if (bVar1 == 10) {
    if ((g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      uVar4 = DAT_00e5a68c * 3 + 4;
      if (param_1->animationId != uVar4) {
        MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 12.5));
      }
      param_1->state = '\x04';
    }
  }
  else if (bVar1 == 6) {
    iVar3 = MB_MayaFrameTrigger
                      ((float)(longlong)*(int *)(&DAT_0073a310 + DAT_00e5a68c * 4),param_1);
    if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
      DAT_00e5a9d5 = '\0';
      music_PlayPreseekedSpeech();
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      if (param_1->animationId != '\x02') {
        MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x02';
      DAT_00e5a684 = 0;
    }
  }
  else if (bVar1 == 5) {
    iVar3 = MB_MayaFrameTrigger
                      ((float)(longlong)*(int *)(&DAT_0073a308 + DAT_00e5a68c * 4),param_1);
    if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
      DAT_00e5a9d5 = '\0';
      music_PlayPreseekedSpeech();
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      if (param_1->animationId != '\x02') {
        MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x02';
      DAT_00e5a684 = 0;
    }
  }
  return;
}


// 0x016c4e8 (0x1d0 bytes)
void Vendor_PlayDudeSpeech(int event)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  
  iVar1 = DAT_00e5a674;
  if (DAT_00e5a9d0 != '\0') {
    if (event < 1) {
      if (((-1 < event) &&
          (((*(char *)(DAT_00e5a674 + 0x20) == '\x02' || (*(char *)(DAT_00e5a674 + 0x20) == '\0'))
           && (iVar3 = MB_randInt(4), iVar3 == 0)))) &&
         (DAT_00e5a680 + (int)(animationSpeed * 360.5) < g_MainLoopFrames)) {
        DAT_00e5a680 = g_MainLoopFrames;
        lVar2 = MB_randInt(2);
        DAT_00e5a68c = (int)lVar2;
        g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 0x271c;
        DAT_00e5a9d4 = 1;
        DAT_00e5a9d5 = 0;
        *(undefined1 *)(iVar1 + 0x20) = 0xb;
      }
    }
    else if (event < 2) {
      lVar2 = MB_randInt(2);
      DAT_00e5a68c = (int)lVar2;
      g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 10000;
      DAT_00e5a9d4 = 1;
      DAT_00e5a9d5 = 0;
      if (*(char *)(iVar1 + 0x53) != '\x01') {
        MB_SetAnimation(iVar1,1,0,10);
      }
      *(undefined1 *)(iVar1 + 0x20) = 10;
    }
    else if ((event < 4) &&
            ((*(char *)(DAT_00e5a674 + 0x20) == '\x02' || (*(char *)(DAT_00e5a674 + 0x20) == '\0')))
            ) {
      DAT_00e5a684 = 0;
    }
  }
  return;
}


// 0x016c6b8 (0x590 bytes)
void Vendor_SpawnPreviewMoby(void)

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
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 oClass;
  
  piVar16 = g_viewMtxPtr;
  iVar20 = g_viewMtxPtr[3];
  if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
  }
  (*(code *)**(undefined4 **)(*piVar16 + 0x18))(piVar16);
  piVar16[0x6a3] = piVar16[0x6a3] + 2;
  oClass = (&DAT_00721010)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x13];
  if (*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) == 0x18) {
    oClass = 0x1df;
  }
  else {
    LoadGadgetModel
              ((&DAT_00721010)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x13],-1);
  }
  InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x100),oClass);
  iVar11 = DAT_00e5a670;
  *(undefined2 *)(DAT_00e5a670 + 0x132) = 0x40;
  *(undefined4 *)(iVar11 + 0x194) = 0;
  iVar18 = DAT_00e5a670;
  iVar17 = DAT_00e5a66c;
  fVar15 = DAT_0073887c;
  iVar11 = DAT_00e5a6a8 * 0x10;
  iVar14 = *(int *)(&g_VendorItems + iVar11) * 0x30;
  fVar10 = DAT_00738870 + *(float *)(iVar14 + 0x738b40);
  fVar12 = DAT_00738874 + *(float *)(iVar14 + 0x738b44);
  fVar13 = DAT_00738878 + *(float *)(iVar14 + 0x738b48);
  if (iVar20 == 0) {
    iVar20 = *(int *)(&g_VendorItems + iVar11) * 0x10;
    fVar10 = fVar10 + *(float *)(iVar20 + 0x7388d0);
    fVar12 = fVar12 + *(float *)(iVar20 + 0x7388d4);
    fVar13 = fVar13 + *(float *)(iVar20 + 0x7388d8);
  }
  if ((&DAT_00e5a724)[iVar11] == '\0') {
    fVar13 = fVar13 + *(float *)(&DAT_00738b4c + iVar14);
    if (UnlockableItems.persuader != '\0') {
      fVar13 = fVar13 + *(float *)(&DAT_00738b4c + iVar14);
    }
  }
  pfVar22 = (float *)(DAT_00e5a66c + 0x10);
  fVar1 = *(float *)(DAT_00e5a66c + 0xc4);
  fVar2 = *(float *)(DAT_00e5a66c + 0xd4);
  fVar3 = *(float *)(DAT_00e5a66c + 0xcc);
  fVar4 = *(float *)(DAT_00e5a66c + 0xdc);
  fVar5 = *(float *)(DAT_00e5a66c + 200);
  fVar6 = *(float *)(DAT_00e5a66c + 0xd8);
  fVar7 = *(float *)(DAT_00e5a66c + 0xe4);
  fVar8 = *(float *)(DAT_00e5a66c + 0xec);
  fVar9 = *(float *)(DAT_00e5a66c + 0xe8);
  pfVar21 = (float *)(DAT_00e5a670 + 0x110);
  *pfVar21 = *(float *)(DAT_00e5a66c + 0xc0) * fVar10 + *(float *)(DAT_00e5a66c + 0xd0) * fVar12 +
             *(float *)(DAT_00e5a66c + 0xe0) * fVar13;
  *(float *)(iVar18 + 0x114) = fVar1 * fVar10 + fVar2 * fVar12 + fVar7 * fVar13;
  *(float *)(iVar18 + 0x118) = fVar5 * fVar10 + fVar6 * fVar12 + fVar9 * fVar13;
  *(float *)(iVar18 + 0x11c) = fVar3 * fVar10 + fVar4 * fVar12 + fVar8 * fVar13 + fVar15;
  *pfVar21 = *pfVar21 + *pfVar22;
  *(float *)(iVar18 + 0x114) = *(float *)(iVar18 + 0x114) + *(float *)(iVar17 + 0x14);
  fVar10 = *(float *)(iVar17 + 0x18);
  *(undefined4 *)(iVar18 + 0x11c) = *(undefined4 *)(iVar18 + 0x11c);
  *(float *)(iVar18 + 0x118) = *(float *)(iVar18 + 0x118) + fVar10;
  *(undefined4 *)(iVar18 + 0x140) =
       *(undefined4 *)(&DAT_00738b30 + *(int *)(&g_VendorItems + iVar11) * 0x30);
  *(undefined4 *)(iVar18 + 0x144) =
       *(undefined4 *)(&DAT_00738b34 + *(int *)(&g_VendorItems + iVar11) * 0x30);
  *(float *)(iVar18 + 0x148) =
       *(float *)(&DAT_00738b38 + *(int *)(&g_VendorItems + iVar11) * 0x30) +
       *(float *)(iVar17 + 0x48);
  UpdateMobyTransform((MobyInstance *)(iVar18 + 0x100));
  MB_SetAnimationNoBlend(DAT_00e5a670 + 0x100,0,0);
  if (1 < *(byte *)(*(int *)(DAT_00e5a670 + 0x124) + 0xc)) {
    MB_SetAnimationNoBlend(DAT_00e5a670 + 0x100,1,0);
  }
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x100);
  *(undefined4 *)(DAT_00e5a670 + 0x158) = 0;
  *(undefined1 *)(iVar20 + 0x151) = 0;
  UpdateMobyFrameData(pMVar19);
  MB_SetLights(DAT_00e5a670 + 0x100,0x202020,0xe,0xe,0);
  if (*(int *)(&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40) != 0) {
    InitMobyInstance
              ((MobyInstance *)(DAT_00e5a670 + 0x200),
               *(undefined4 *)
                (&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40));
    pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x200);
    *(undefined2 *)(DAT_00e5a670 + 0x232) = 0x40;
    UpdateMobyTransform(pMVar19);
    MB_SetLights(DAT_00e5a670 + 0x200,0x202020,0xe,0xe,0);
  }
  InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x300),oClass);
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x300);
  *(undefined2 *)(DAT_00e5a670 + 0x332) = 0x40;
  *(undefined4 *)(iVar20 + 0x394) = 0;
  UpdateMobyTransform(pMVar19);
  MB_SetAnimationNoBlend(DAT_00e5a670 + 0x300,0,0);
  if (1 < *(byte *)(*(int *)(DAT_00e5a670 + 0x324) + 0xc)) {
    MB_SetAnimationNoBlend(DAT_00e5a670 + 0x300,1,0);
  }
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x300);
  *(undefined4 *)(DAT_00e5a670 + 0x358) = 0;
  *(undefined1 *)(iVar20 + 0x351) = 0;
  UpdateMobyFrameData(pMVar19);
  iVar20 = DAT_00e5a670 + 0x300;
  *(ushort *)(DAT_00e5a670 + 0x334) = *(ushort *)(DAT_00e5a670 + 0x334) | 0x100;
  MB_SetLights(iVar20,0x202020,0xe,0xe,0);
  DAT_00e5a9d3 = 0;
  return;
}


// 0x016cc50 (0xde8 bytes)
void PurchaseHandler(void)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  MobyInstance *pMVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  
  if (g_VendorMenuState != 0) {
    if (g_VendorMenuState == 1) {
      DAT_00e5aa41 = '\0';
      DAT_00e5a95c = 1;
      InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x400),0x471);
      iVar10 = DAT_00e5a670;
      pMVar5 = DAT_00e5a66c;
      *(undefined2 *)(DAT_00e5a670 + 0x432) = 0x40;
      dVar11 = 0.0;
      *(float *)(iVar10 + 0x410) = (pMVar5->pos).x + 0.0;
      *(float *)(iVar10 + 0x414) = (pMVar5->pos).y + 0.0;
      fVar1 = (pMVar5->pos).z;
      *(undefined4 *)(iVar10 + 0x41c) = 0;
      *(float *)(iVar10 + 0x418) = fVar1 + 0.0;
      *(f32 *)(iVar10 + 0x440) = (pMVar5->rotation).x;
      *(f32 *)(iVar10 + 0x444) = (pMVar5->rotation).y;
      *(f32 *)(iVar10 + 0x448) = (pMVar5->rotation).z;
      *(f32 *)(iVar10 + 0x44c) = (pMVar5->rotation).w;
      MB_SetAnimationNoBlend(iVar10 + 0x400,0,0);
      iVar10 = DAT_00e5a670;
      if (*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) < 2) {
        pMVar5 = (MobyInstance *)(DAT_00e5a670 + 0x400);
        *(float *)(DAT_00e5a670 + 0x458) = (float)dVar11;
        *(undefined1 *)(iVar10 + 0x451) = 0;
        UpdateMobyFrameData(pMVar5);
      }
      UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
      MB_SetLights(DAT_00e5a670 + 0x400,&DAT_00101010,0xe,0xe,0);
      iVar10 = DAT_00e5a6a8 * 0x10;
      DAT_00e5aa42 = '\0';
      if (((&DAT_00e5a724)[iVar10] == '\x01') &&
         ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar10) * 0xc] <=
          (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar10)])) {
        PlayMobySound(2,0,DAT_00e5a66c);
      }
      else if ((&DAT_00e5a724)[iVar10] == '\x01') {
        if (g_lastVendorWasPda == 0) {
          uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar10) * 0xc];
        }
        else {
          uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        if (g_boltCount < (int)(uint)uVar2) {
          PlayMobySound(2,0,DAT_00e5a66c);
        }
        else {
          DAT_00e5aa42 = '\x01';
        }
      }
      else {
        if (UnlockableItems.persuader == '\0') {
          iVar10 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        else {
          iVar10 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        if (g_boltCount < iVar10) {
          PlayMobySound(2,0,DAT_00e5a66c);
        }
      }
      g_VendorMenuState = 2;
    }
    else if (g_VendorMenuState == 2) {
      if (DAT_00e5aa42 == '\x01') {
        uVar9 = 0;
        if ((g_Pad.unk0c0 & 0x8000) != 0) {
          uVar9 = DAT_00e5a954 + 1;
        }
        uVar6 = 0;
        if ((g_Pad.unk0c0 & 0x2000) != 0) {
          uVar6 = DAT_00e5a958 + 1;
        }
        DAT_00e5a954 = uVar9;
        DAT_00e5a958 = uVar6;
        if ((((g_Pad.pressedButton & 0x8000) != 0) ||
            (((0xf < (int)uVar9 && ((uVar9 & 7) == 0)) || (0x2f < (int)uVar9)))) &&
           (1 < DAT_00e5a95c)) {
          DAT_00e5a95c = DAT_00e5a95c + -1;
          if (((uVar9 & 3) == 0) || ((int)uVar9 < 0x10)) {
            PlayMobySound(1,0,DAT_00e5a66c);
          }
        }
        if ((((g_Pad.pressedButton & 0x2000) != 0) ||
            ((0xf < (int)DAT_00e5a958 && ((DAT_00e5a958 & 7) == 0)))) || (0x2f < (int)DAT_00e5a958))
        {
          if (g_lastVendorWasPda == 0) {
            sVar3 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
          }
          else {
            sVar3 = *(short *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18
                              );
          }
          if (sVar3 != 0) {
            if (g_lastVendorWasPda == 0) {
              uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
            }
            else {
              uVar2 = *(ushort *)
                       (&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
            }
            iVar7 = (uint)(ushort)(&DAT_00737d3e)
                                  [*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc] -
                    (&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10)];
            iVar10 = g_boltCount / (int)(uint)uVar2;
            if (iVar7 < g_boltCount / (int)(uint)uVar2) {
              iVar10 = iVar7;
            }
            if (DAT_00e5a95c < iVar10) {
              DAT_00e5a95c = DAT_00e5a95c + 1;
              if (((DAT_00e5a958 & 3) == 0) || ((int)DAT_00e5a958 < 0x10)) {
                PlayMobySound(1,0,DAT_00e5a66c);
              }
            }
          }
        }
      }
      if ((g_Pad.pressedButton & 0x10) == 0) {
        if ((g_Pad.pressedButton & pad_ConfirmButtonMask) == 0) {
          UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
          if ((*(char *)(DAT_00e5a670 + 0x453) == '\0') &&
             ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0)) {
            MB_SetAnimation(DAT_00e5a670 + 0x400,1,0,1);
          }
          UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
        }
        else {
          g_VendorMenuState = 3;
          DAT_00e5aa41 = '\x01';
          MB_SetAnimation
                    (DAT_00e5a670 + 0x400,0,
                     (ulonglong)*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) -
                     1,8);
          UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
        }
      }
      else {
        g_VendorMenuState = 3;
        DAT_00e5aa41 = '\0';
        MB_SetAnimation
                  (DAT_00e5a670 + 0x400,0,
                   (ulonglong)*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) - 1,
                   1);
        UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
      }
    }
    else if (g_VendorMenuState == 3) {
      UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
      if ((*(char *)(DAT_00e5a670 + 0x453) == '\0') && ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0))
      {
        *(undefined4 *)(DAT_00e5a670 + 0x458) = 0xbf800000;
        g_VendorMenuState = 4;
      }
      UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
    }
    else if (g_VendorMenuState == 4) {
      UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
      iVar10 = DAT_00e5a95c;
      if ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0) {
        if (DAT_00e5aa41 == '\x01') {
          iVar7 = DAT_00e5a6a8 * 0x10;
          if ((&DAT_00e5a724)[iVar7] == '\x01') {
            if (g_lastVendorWasPda == 0) {
              uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar7) * 0xc];
            }
            else {
              uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar7) * 0x18);
            }
            iVar7 = (uint)uVar2 * DAT_00e5a95c;
          }
          else if (UnlockableItems.persuader == '\0') {
            iVar7 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar7) * 0x18);
          }
          else {
            iVar7 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar7) * 0x18);
          }
          if ((g_boltCount < iVar7) &&
             ((int)(uint)(ushort)(&DAT_00737d3e)
                                 [*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc] <=
              (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10)]))
          {
            PlayMobySound(0,0,DAT_00e5a66c);
          }
          else {
            iVar7 = DAT_00e5a6a8 * 0x10;
            if ((&DAT_00e5a724)[iVar7] == '\x01') {
              iVar4 = *(int *)(&g_VendorItems + iVar7);
              if ((int)(&currentAmmoArray.field0_0x0)[iVar4] <
                  (int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc]) {
                if (g_lastVendorWasPda == 0) {
                  uVar2 = (&DAT_00737d38)[iVar4 * 0xc];
                }
                else {
                  uVar2 = *(ushort *)(&DAT_00737d3a + iVar4 * 0x18);
                }
                if (g_boltCount < (int)((uint)uVar2 * DAT_00e5a95c)) {
                  pcVar8 = (char *)help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT);
                  Vendor_SetScrollText(pcVar8);
                  PlayMobySound(0,0,DAT_00e5a66c);
                }
                else {
                  if ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc] <
                      (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar7)]) {
                    uVar9 = (uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc];
                  }
                  else {
                    uVar9 = (&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar7)];
                  }
                  iVar7 = *(int *)(&g_VendorItems + iVar7);
                  (&currentAmmoArray.field0_0x0)[iVar7] = uVar9;
                  iVar7 = hero_GiveAmmo(iVar7,iVar10);
                  iVar10 = iVar10 - iVar7;
                  if (g_lastVendorWasPda == 0) {
                    uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
                  }
                  else {
                    uVar2 = *(ushort *)
                             (&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18)
                    ;
                  }
                  *(int *)(&DAT_00a0f51c + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 4) =
                       *(int *)(&DAT_00a0f51c + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 4)
                       + iVar10;
                  Vendor_PlayDudeSpeech(3);
                  g_boltCount = g_boltCount - (uint)uVar2 * iVar10;
                  LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
                  pcVar8 = (char *)help_msg_string_by_index(STR_THANK_YOU);
                  Vendor_SetScrollText(pcVar8);
                  PlayMobySound(7,0,DAT_00e5a66c);
                }
              }
              else {
                PlayMobySound(0,0,DAT_00e5a66c);
              }
            }
            else {
              if (UnlockableItems.persuader == '\0') {
                iVar10 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar7) * 0x18);
              }
              else {
                iVar10 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar7) * 0x18);
              }
              if (g_boltCount < iVar10) {
                pcVar8 = (char *)help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT);
                Vendor_SetScrollText(pcVar8);
                PlayMobySound(0,0,DAT_00e5a66c);
              }
              else {
                Vendor_PlayDudeSpeech(2);
                MB_UnlockItem(*(undefined4 *)(&g_VendorItems + DAT_00e5a6a8 * 0x10),1);
                DAT_00e5a698 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
                if (DAT_00e5a698 == 0x18) {
                  DAT_0096bcd5 = 1;
                }
                g_boltCount = g_boltCount - iVar10;
                LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
                if (DAT_00e5a6a0 != -1) {
                  Hud_SetEntryValueById(DAT_00e5a6a0,0);
                }
                DAT_00e5a6a0 = -1;
                if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
                  iVar10 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
                  DAT_00e5a6a0 = RegisterHUDCallback
                                           (0x30,iVar10 + 60000,&PTR_AmmoHud_Init_00705808,
                                            &PTR_HudEntry_UpdateCounter_007056c8,
                                            &PTR_Draw_AmmoCounter_00705888,
                                            (int *)(&currentAmmoArray.field0_0x0 + iVar10),
                                            (uint)(ushort)(&DAT_00737d3e)[iVar10 * 0xc]);
                }
                else {
                  if (g_VendorItemsCnt + -1 < DAT_00e5a6a8) {
                    DAT_00e5a6a8 = g_VendorItemsCnt + -1;
                  }
                  Vendor_SpawnPreviewMoby();
                }
                pcVar8 = (char *)help_msg_string_by_index(STR_THANK_YOU);
                Vendor_SetScrollText(pcVar8);
                PlayMobySound(7,0,DAT_00e5a66c);
              }
            }
          }
        }
        else {
          PlayMobySound(0,0,DAT_00e5a66c);
        }
        g_VendorMenuState = 0;
      }
      UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
    }
  }
  return;
}


// 0x016da88 (0x1f14 bytes)
// strings: 00653f6c: 'moby update' | 00653f7c: 'hero update' | 00653f8c: 'part update'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Vendor_PreUpdate(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyClass *pClass;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  f32 fVar19;
  vec4 *pvVar22;
  MobyInstance *pMVar23;
  ulonglong uVar20;
  char *pcVar24;
  int iVar25;
  void *pvVar26;
  undefined8 uVar21;
  float *pfVar27;
  float *pfVar28;
  vec4 *pvVar29;
  int iVar30;
  int *piVar31;
  undefined4 *puVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  longlong local_a0;
  
  if (g_OpenVendorState < 3) {
    if (g_OpenVendorState < 1) {
      if (g_OpenVendorState < 0) goto LAB_0016f940;
    }
    else if (g_OpenVendorState < 2) {
      if (((DAT_00e5a9d0 == '\0') && (Music == 0)) && (DAT_00e5a9d1 != 0)) {
        iVar25 = 0;
        pClass = MobyClasses[DAT_00a354cc];
        piVar31 = DAT_00e5a668;
        do {
          if (*piVar31 != 0) {
            *(int *)(&pClass->type + iVar25 * 4) = (int)DAT_00e5a668 + *piVar31;
            ParseMobySeq(pClass,iVar25);
          }
          iVar25 = iVar25 + 1;
          piVar31 = piVar31 + 1;
        } while (iVar25 < 0x10);
        DAT_00e5a674 = DAT_00e5a664;
        InitMobyInstance(DAT_00e5a664,0xc);
        pMVar23 = DAT_00e5a674;
        DAT_00e5a674->drawDistance = 0x40;
        (pMVar23->rotation).z = (DAT_00e5a66c->rotation).z;
        UpdateMobyTransform(pMVar23);
        MB_SetLights(DAT_00e5a674,0x202020,0xe,0xe,0);
        DAT_00e5a9d0 = '\x01';
        DAT_00e5a9d1 = 0;
        Vendor_PlayDudeSpeech(1);
      }
      UpdateMobyAnimFrame(DAT_00e5a66c);
      UpdateMobyTransform(DAT_00e5a66c);
      pMVar18 = DAT_00e5a674;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073886c;
      if (DAT_00e5a9d0 == '\x01') {
        if (DAT_00e5a9d2 != '\0') {
          DAT_00738860 = -1.8;
          DAT_00738868 = -0.6;
        }
        fVar2 = (DAT_00e5a66c->transform).v0.y * DAT_00738860;
        fVar6 = (DAT_00e5a66c->transform).v1.y * DAT_00738864;
        pvVar29 = &DAT_00e5a674->pos;
        fVar3 = (DAT_00e5a66c->transform).v0.w * DAT_00738860;
        fVar7 = (DAT_00e5a66c->transform).v1.w * DAT_00738864;
        fVar5 = (DAT_00e5a66c->transform).v0.z * DAT_00738860;
        fVar9 = (DAT_00e5a66c->transform).v1.z * DAT_00738864;
        fVar10 = (DAT_00e5a66c->transform).v2.y * DAT_00738868;
        fVar11 = (DAT_00e5a66c->transform).v2.w * DAT_00738868;
        fVar12 = (DAT_00e5a66c->transform).v2.z * DAT_00738868;
        pvVar22 = &DAT_00e5a66c->pos;
        pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_00738860 +
                     (DAT_00e5a66c->transform).v1.x * DAT_00738864 +
                     (DAT_00e5a66c->transform).v2.x * DAT_00738868;
        (pMVar18->pos).y = fVar2 + fVar6 + fVar10;
        (pMVar18->pos).z = fVar5 + fVar9 + fVar12;
        (pMVar18->pos).w = fVar3 + fVar7 + fVar11 + fVar4;
        pvVar29->x = pvVar29->x + pvVar22->x;
        (pMVar18->pos).y = (pMVar18->pos).y + (pMVar23->pos).y;
        (pMVar18->pos).z = (pMVar18->pos).z + (pMVar23->pos).z;
        (pMVar18->pos).w = (pMVar18->pos).w;
        UpdateMobyAnimFrame(pMVar18);
        UpdateMobyTransform(DAT_00e5a674);
        Vendor_UpdateDude(DAT_00e5a674);
      }
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073889c;
      if (((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05'))
         && (*(int *)(g_viewMtxPtr + 0xc) == 0)) {
        DAT_00738894 = -3.1;
      }
      else {
        DAT_00738894 = -4.15;
      }
      pvVar29 = &DAT_00e5a670->pos;
      fVar6 = (DAT_00e5a66c->transform).v0.w * DAT_00738890;
      fVar7 = (DAT_00e5a66c->transform).v0.y * DAT_00738890;
      fVar2 = (DAT_00e5a66c->transform).v1.y * DAT_00738894;
      fVar3 = (DAT_00e5a66c->transform).v1.w * DAT_00738894;
      fVar9 = (DAT_00e5a66c->transform).v0.z * DAT_00738890;
      fVar5 = (DAT_00e5a66c->transform).v1.z * DAT_00738894;
      fVar10 = (DAT_00e5a66c->transform).v2.y * DAT_00738898;
      pvVar22 = &DAT_00e5a66c->pos;
      fVar11 = (DAT_00e5a66c->transform).v2.w * DAT_00738898;
      fVar12 = (DAT_00e5a66c->transform).v2.z * DAT_00738898;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_00738890 +
                   (DAT_00e5a66c->transform).v1.x * DAT_00738894 +
                   (DAT_00e5a66c->transform).v2.x * DAT_00738898;
      (pMVar18->pos).y = fVar7 + fVar2 + fVar10;
      (pMVar18->pos).z = fVar9 + fVar5 + fVar12;
      (pMVar18->pos).w = fVar6 + fVar3 + fVar11 + fVar4;
      pvVar29->x = pvVar29->x + pvVar22->x;
      (pMVar18->pos).y = (pMVar18->pos).y + (pMVar23->pos).y;
      (pMVar18->pos).z = (pMVar18->pos).z + (pMVar23->pos).z;
      (pMVar18->pos).w = (pMVar18->pos).w;
      dVar42 = -0.05000000074505806;
      dVar33 = (double)FastWrapRot((pMVar18->rotation).x,animationSpeed * -0.05);
      pMVar23 = DAT_00e5a670;
      (DAT_00e5a670->rotation).x = (float)dVar33;
      dVar41 = -0.36000001430511475;
      (pMVar23->rotation).y = -0.36;
      dVar37 = 0.05000000074505806;
      dVar33 = (double)FastWrapRot((pMVar23->rotation).z,animationSpeed * 0.05);
      pMVar23 = DAT_00e5a670;
      (DAT_00e5a670->rotation).z = (float)dVar33;
      UpdateMobyTransform(pMVar23);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar12 = DAT_007388ac;
      fVar4 = (DAT_00e5a66c->transform).v0.y * DAT_007388a0;
      fVar5 = (DAT_00e5a66c->transform).v1.y * DAT_007388a4;
      pvVar29 = &DAT_00e5a670[5].pos;
      fVar2 = (DAT_00e5a66c->transform).v0.w * DAT_007388a0;
      fVar6 = (DAT_00e5a66c->transform).v1.w * DAT_007388a4;
      fVar3 = (DAT_00e5a66c->transform).v0.z * DAT_007388a0;
      fVar7 = (DAT_00e5a66c->transform).v1.z * DAT_007388a4;
      fVar9 = (DAT_00e5a66c->transform).v2.y * DAT_007388a8;
      fVar10 = (DAT_00e5a66c->transform).v2.w * DAT_007388a8;
      pvVar22 = &DAT_00e5a66c->pos;
      fVar11 = (DAT_00e5a66c->transform).v2.z * DAT_007388a8;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_007388a0 +
                   (DAT_00e5a66c->transform).v1.x * DAT_007388a4 +
                   (DAT_00e5a66c->transform).v2.x * DAT_007388a8;
      pMVar18[5].pos.y = fVar4 + fVar5 + fVar9;
      pMVar18[5].pos.z = fVar3 + fVar7 + fVar11;
      pMVar18[5].pos.w = fVar2 + fVar6 + fVar10 + fVar12;
      pvVar29->x = pvVar29->x + pvVar22->x;
      pMVar18[5].pos.y = pMVar18[5].pos.y + (pMVar23->pos).y;
      pMVar18[5].pos.z = pMVar18[5].pos.z + (pMVar23->pos).z;
      pMVar18[5].pos.w = pMVar18[5].pos.w;
      dVar33 = (double)FastWrapRot
                                 (pMVar18[5].rotation.x,(float)((double)animationSpeed * dVar42));
      pMVar23 = DAT_00e5a670;
      DAT_00e5a670[5].rotation.x = (float)dVar33;
      pMVar23[5].rotation.y = (float)dVar41;
      dVar33 = (double)FastWrapRot
                                 (pMVar23[5].rotation.z,(float)((double)animationSpeed * dVar37));
      pMVar23 = DAT_00e5a670 + 5;
      DAT_00e5a670[5].rotation.z = (float)dVar33;
      UpdateMobyTransform(pMVar23);
      dVar33 = (double)FastWrapRot(DAT_00e5a950,(float)((double)animationSpeed * dVar37));
      DAT_00e5a950 = (float)dVar33;
      UpdateMobyAnimFrame(DAT_00e5a670 + 1);
      if ((DAT_00e5a670[1].animationId == '\0') && ((DAT_00e5a670[1].field43_0x70 & 2U) != 0)) {
        MB_SetAnimation(DAT_00e5a670 + 1,1,0,8);
      }
      UpdateMobyTransform(DAT_00e5a670 + 1);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      dVar33 = 3.141592502593994;
      dVar41 = 0.0;
      fVar4 = DAT_00e5a950;
      if (3.1415925 - DAT_00e5a950 <= DAT_00e5a950) {
        fVar4 = 3.1415925 - DAT_00e5a950;
      }
      dVar42 = -3.141592502593994;
      if (fVar4 <= -3.1415925 - DAT_00e5a950) {
        fVar4 = -3.1415925 - DAT_00e5a950;
      }
      fVar7 = fVar4 * fVar4;
      dVar43 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar39 = -0.0001980741071747616;
      dVar38 = 2.601886990305502e-06;
      fVar5 = fVar7 * fVar7 * fVar4;
      fVar6 = fVar7 * fVar5;
      iVar25 = DAT_00e5a6a8 * 0x10;
      iVar30 = *(int *)(&g_VendorItems + iVar25) * 0x40;
      fVar9 = DAT_00738880 + 0.0 + *(float *)(iVar30 + 0x739230);
      fVar10 = DAT_00738884 + 0.0 + *(float *)(iVar30 + 0x739234);
      pvVar22 = &DAT_00e5a66c->pos;
      fVar2 = (DAT_00e5a66c->transform).v0.y;
      fVar3 = (DAT_00e5a66c->transform).v1.y;
      fVar11 = DAT_00738888 +
               (float)((double)(fVar4 + fVar7 * fVar4 * -0.16666657 + fVar5 * 0.0083330255 +
                                fVar6 * -0.0001980741 + fVar7 * fVar6 * 2.601887e-06) * dVar37) +
               *(float *)(iVar30 + 0x739238);
      fVar4 = (DAT_00e5a66c->transform).v0.z;
      fVar5 = (DAT_00e5a66c->transform).v1.z;
      pvVar29 = &DAT_00e5a670[2].pos;
      fVar6 = (DAT_00e5a66c->transform).v2.y;
      fVar7 = (DAT_00e5a66c->transform).v2.z;
      fVar12 = (DAT_00e5a66c->transform).v0.w * fVar9 + (DAT_00e5a66c->transform).v1.w * fVar10 +
               (DAT_00e5a66c->transform).v2.w * fVar11 + DAT_0073888c;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * fVar9 + (DAT_00e5a66c->transform).v1.x * fVar10
                   + (DAT_00e5a66c->transform).v2.x * fVar11;
      pMVar18[2].pos.y = fVar2 * fVar9 + fVar3 * fVar10 + fVar6 * fVar11;
      pMVar18[2].pos.z = fVar4 * fVar9 + fVar5 * fVar10 + fVar7 * fVar11;
      pMVar18[2].pos.w = fVar12;
      fVar19 = DAT_00e5a950;
      pvVar29->x = pvVar29->x + pvVar22->x;
      pMVar18[2].pos.y = pMVar18[2].pos.y + (pMVar23->pos).y;
      pMVar18[2].pos.z = pMVar18[2].pos.z + (pMVar23->pos).z;
      pMVar18[2].pos.w = pMVar18[2].pos.w;
      pMVar18[2].rotation.x = *(f32 *)(&DAT_00739220 + *(int *)(&g_VendorItems + iVar25) * 0x40);
      fVar8 = *(f32 *)(&DAT_00739224 + *(int *)(&g_VendorItems + iVar25) * 0x40);
      pMVar18[2].rotation.z = fVar19;
      pMVar18[2].rotation.y = fVar8;
      UpdateMobyTransform(pMVar18 + 2);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073888c;
      dVar34 = (double)DAT_00e5a950;
      dVar36 = dVar34;
      if ((double)(float)(dVar33 - dVar34) <= dVar34) {
        dVar36 = (double)(float)(dVar33 - dVar34);
      }
      if (dVar36 <= (double)(float)(dVar42 - dVar34)) {
        dVar36 = (double)(float)(dVar42 - dVar34);
      }
      dVar33 = (double)(float)(dVar36 * dVar36);
      iVar25 = DAT_00e5a6a8 * 0x10;
      dVar42 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar36));
      dVar34 = (double)(float)(dVar33 * dVar42);
      iVar30 = *(int *)(&g_VendorItems + iVar25) * 0x30;
      fVar14 = (float)((double)DAT_00738880 + dVar41) + *(float *)(iVar30 + 0x739b70);
      fVar13 = (float)((double)DAT_00738884 + dVar41) + *(float *)(iVar30 + 0x739b74);
      pvVar22 = &DAT_00e5a66c->pos;
      fVar2 = (DAT_00e5a66c->transform).v0.y;
      fVar3 = (DAT_00e5a66c->transform).v1.y;
      fVar15 = DAT_00738888 +
               (float)((double)((float)(dVar36 + (double)(float)((double)(float)(dVar33 * dVar36) *
                                                                dVar43)) + (float)(dVar42 * dVar40)
                                + (float)(dVar34 * dVar39) +
                               (float)((double)(float)(dVar33 * dVar34) * dVar38)) * dVar37) +
               *(float *)(iVar30 + 0x739b78);
      fVar5 = (DAT_00e5a66c->transform).v0.w;
      fVar6 = (DAT_00e5a66c->transform).v1.w;
      fVar7 = (DAT_00e5a66c->transform).v0.z;
      fVar9 = (DAT_00e5a66c->transform).v1.z;
      pvVar29 = &DAT_00e5a670[3].pos;
      fVar10 = (DAT_00e5a66c->transform).v2.y;
      fVar11 = (DAT_00e5a66c->transform).v2.w;
      fVar12 = (DAT_00e5a66c->transform).v2.z;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * fVar14 + (DAT_00e5a66c->transform).v1.x * fVar13
                   + (DAT_00e5a66c->transform).v2.x * fVar15;
      pMVar18[3].pos.y = fVar2 * fVar14 + fVar3 * fVar13 + fVar10 * fVar15;
      pMVar18[3].pos.z = fVar7 * fVar14 + fVar9 * fVar13 + fVar12 * fVar15;
      pMVar18[3].pos.w = fVar5 * fVar14 + fVar6 * fVar13 + fVar11 * fVar15 + fVar4;
      pvVar29->x = pvVar29->x + pvVar22->x;
      fVar19 = DAT_00e5a950;
      pMVar18[3].pos.y = pMVar18[3].pos.y + (pMVar23->pos).y;
      pMVar18[3].pos.z = pMVar18[3].pos.z + (pMVar23->pos).z;
      pMVar18[3].pos.w = pMVar18[3].pos.w;
      pMVar18[3].rotation.x = *(f32 *)(&DAT_00739b60 + *(int *)(&g_VendorItems + iVar25) * 0x30);
      fVar8 = *(f32 *)(&DAT_00739b64 + *(int *)(&g_VendorItems + iVar25) * 0x30);
      pMVar18[3].rotation.z = fVar19;
      pMVar18[3].rotation.y = fVar8;
      UpdateMobyAnimFrame(pMVar18 + 3);
      if ((DAT_00e5a670[3].animationId == '\0') && ((DAT_00e5a670[3].field43_0x70 & 2U) != 0)) {
        MB_SetAnimation(DAT_00e5a670 + 3,1,0,8);
      }
      UpdateMobyTransform(DAT_00e5a670 + 3);
      iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
      dVar41 = (double)*(float *)(&DAT_00739b50 + iVar25 * 0x30);
      dVar37 = (double)*(float *)(&DAT_00739b54 + iVar25 * 0x30);
      dVar33 = (double)*(float *)(&DAT_00739b58 + iVar25 * 0x30);
      FastEulerToMtx(&DAT_00e5a670[3].transform,&DAT_00e5a670[3].rotation);
      pMVar23 = DAT_00e5a670;
      fVar4 = DAT_00e5a670[3].transform.v0.y;
      fVar2 = DAT_00e5a670[3].transform.v1.y;
      fVar3 = DAT_00e5a670[3].transform.v2.y;
      fVar5 = DAT_00e5a670[3].transform.v0.z;
      fVar6 = DAT_00e5a670[3].transform.v1.z;
      fVar7 = DAT_00e5a670[3].transform.v2.z;
      DAT_00e5a670[3].pos.x =
           DAT_00e5a670[3].pos.x +
           (float)((double)DAT_00e5a670[3].transform.v0.x * dVar41) +
           (float)((double)DAT_00e5a670[3].transform.v1.x * dVar37) +
           (float)((double)DAT_00e5a670[3].transform.v2.x * dVar33);
      pMVar23[3].pos.y =
           pMVar23[3].pos.y +
           (float)((double)fVar4 * dVar41) + (float)((double)fVar2 * dVar37) +
           (float)((double)fVar3 * dVar33);
      pMVar23[3].pos.z =
           pMVar23[3].pos.z +
           (float)((double)fVar5 * dVar41) + (float)((double)fVar6 * dVar37) +
           (float)((double)fVar7 * dVar33);
      pMVar23[3].pos.w = pMVar23[3].pos.w;
      uVar20 = (ulonglong)DAT_00e5a654 + 1;
      DAT_00e5a654 = (uint)uVar20;
      if ((g_VendorMenuState == 0) && (uVar20 = (ulonglong)DAT_00e5a944, DAT_00e5a944 == 0)) {
        if (g_VendorItemsCnt < 8) {
          if (((g_Pad.pressedButton & 0x2000) != 0) && (DAT_00e5a6a8 < g_VendorItemsCnt + -1)) {
            DAT_00e5a9d3 = '\x01';
            Vendor_PlayDudeSpeech(0);
            DAT_00e5a6a8 = DAT_00e5a6a8 + 1;
            PlayMobySound(1,0,DAT_00e5a66c);
            pcVar24 = (char *)help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
          if (((g_Pad.pressedButton & 0x8000) != 0) && (0 < DAT_00e5a6a8)) {
            DAT_00e5a9d3 = '\x01';
            Vendor_PlayDudeSpeech(0);
            DAT_00e5a6a8 = DAT_00e5a6a8 + -1;
            PlayMobySound(1,0,DAT_00e5a66c);
            pcVar24 = (char *)help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
        }
        else {
          if (((g_Pad.pressedButton & 0x2000) != 0) && (g_VendorCursor < 0x39)) {
            g_VendorCursor = g_VendorCursor + 0x38;
            DAT_00e5a9d3 = '\x01';
            PlayMobySound(1,0,DAT_00e5a66c);
            Vendor_PlayDudeSpeech(0);
            iVar25 = 0;
            if (DAT_00e5a6a8 < g_VendorItemsCnt + -1) {
              iVar25 = DAT_00e5a6a8 + 1;
            }
            DAT_00e5a6a8 = iVar25;
            pcVar24 = (char *)help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + iVar25 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
          if (((g_Pad.pressedButton & 0x8000) != 0) && (-0x39 < g_VendorCursor)) {
            g_VendorCursor = g_VendorCursor + -0x38;
            DAT_00e5a9d3 = '\x01';
            PlayMobySound(1,0,DAT_00e5a66c);
            Vendor_PlayDudeSpeech(0);
            iVar25 = g_VendorItemsCnt;
            if (0 < DAT_00e5a6a8) {
              iVar25 = DAT_00e5a6a8;
            }
            DAT_00e5a6a8 = iVar25 + -1;
            pcVar24 = (char *)help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
        }
        if (((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) &&
           ((&DAT_00e5a725)[DAT_00e5a6a8 * 0x10] == '\0')) {
          g_VendorMenuState = 1;
          PlayMobySound(0,0,DAT_00e5a66c);
        }
        uVar20 = (ulonglong)g_Pad.pressedButton & 0x10;
        if (((int)uVar20 != 0) && (uVar20 = (ulonglong)DAT_00e5a9d1, DAT_00e5a9d1 == 0)) {
          DAT_00e5a940 = 8;
          DAT_00e5a944 = 1;
          iVar25 = PlayMobySound(5,0,DAT_00e5a66c);
          uVar20 = (ulonglong)iVar25;
        }
      }
      PurchaseHandler(uVar20);
      if (DAT_00e5a94c == '\x01') {
        if (DAT_00e5a948 == 0) {
          DAT_00e5a94c = '\0';
        }
        else {
          DAT_00e5a948 = DAT_00e5a948 + -1;
        }
      }
      if (DAT_00e5a944 == 1) {
        DAT_00e5a940 = DAT_00e5a940 + -1;
        if (DAT_00e5a940 == 0) {
          g_CutscenePlaying = 1;
          VU1_setBufSizeByLevel();
          MB_SetAnimation(DAT_00e5a66c,4,9,8);
          DAT_00e5a66c->unk58 = DAT_0071f408 * -0.5;
          if (g_lastVendorWasPda != 0) {
            GameCamera.rot.azimuth = DAT_00e5a6c0;
            GameCamera.rot.elevation = DAT_00e5a6c4;
            GameCamera.rot.radius = DAT_00e5a6c8;
            GameCamera.field10_0x15c[0] = DAT_00e5a6cc[0];
            GameCamera.field10_0x15c[1] = DAT_00e5a6cc[1];
            GameCamera.field10_0x15c[2] = DAT_00e5a6cc[2];
            GameCamera.field10_0x15c[3] = DAT_00e5a6cc[3];
          }
          DAT_00e5a658 = 0;
          DAT_00e5a654 = 0;
          GameCamera.orientMtx.forward.w = fRam00e5a96c;
          GameCamera.orientMtx.forward.z = fRam00e5a968;
          GameCamera.orientMtx.forward.y = fRam00e5a964;
          GameCamera.orientMtx.forward.x = _DAT_00e5a960;
          GameCamera.orientMtx.right.w = fRam00e5a97c;
          GameCamera.orientMtx.right.z = fRam00e5a978;
          GameCamera.orientMtx.right.y = fRam00e5a974;
          GameCamera.orientMtx.right.x = _DAT_00e5a970;
          GameCamera.orientMtx.up.w = fRam00e5a98c;
          GameCamera.orientMtx.up.z = fRam00e5a988;
          GameCamera.orientMtx.up.y = fRam00e5a984;
          GameCamera.orientMtx.up.x = _DAT_00e5a980;
          g_OpenVendorState = 2;
          if (g_currentWeaponMoby != (MobyInstance *)0x0) {
            LoadGadgetModel((int)(short)g_currentWeaponMoby->oClass,-1);
            pMVar23 = g_currentWeaponMoby;
            g_currentWeaponMoby->pClass = MobyClasses[g_currentWeaponMoby->mClass];
            UpdateMobyFrameData(pMVar23);
          }
        }
      }
      else if (DAT_00e5a9d3 != '\0') {
        Vendor_SpawnPreviewMoby();
      }
      UpdateAllGameplayHUD(1);
      goto LAB_0016f940;
    }
    if ((g_lastVendorWasPda == 0) || (g_OpenVendorState == 2)) {
      if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
        ResetGameCounters();
      }
      if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
        UpdateMobys();
        sound_UpdateAmbient();
      }
      STUB_0006562c("moby update",3);
      if (((DebugUpdate & UPDATE_HERO) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
        HeroUpdate();
      }
      STUB_0006562c("hero update",7);
      if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
        UpdateParts();
      }
      STUB_0006562c("part update",5);
    }
    if (g_OpenVendorState == 0) {
      SceneScreenFade = SceneScreenFade - 0.34;
      if (SceneScreenFade < 0.0) {
        SceneScreenFade = 0.0;
      }
      DAT_00e5a654 = DAT_00e5a654 + 1;
      local_a0 = (longlong)(int)(animationSpeed * 40.5);
      if (((int)(animationSpeed * 40.5) <= (int)DAT_00e5a654) || (g_lastVendorWasPda != 0)) {
        SceneScreenFade = 0.0;
        DAT_00e5a65c = 1;
        g_OpenVendorState = 1;
        DAT_00e5a654 = 0;
        MB_SetAnimation(DAT_00e5a66c,3,0,8);
        pMVar23 = DAT_00e5a66c;
        DAT_00e5a66c->unk58 = 1.0;
        DAT_00e5a94c = '\x01';
        DAT_00e5a948 = 8;
        PlayMobySound(4,0,pMVar23);
      }
    }
    else if (g_OpenVendorState == 2) {
      bVar17 = false;
      if (((g_lastVendorWasPda == 0) && (-1 < DAT_00e5a698)) &&
         (-1 < *(int *)(&DAT_0073a240 + DAT_00e5a698 * 4))) {
        bVar17 = true;
      }
      DAT_00e5a654 = DAT_00e5a654 + 1;
      local_a0 = (longlong)(int)(animationSpeed * 40.5);
      if (((int)(animationSpeed * 40.5) <= (int)DAT_00e5a654) || (g_lastVendorWasPda != 0)) {
        iVar30 = 0;
        MB_SetAnimation(DAT_00e5a66c,1,0,8);
        iVar25 = 0;
        do {
          if ((&DAT_00e5a841)[iVar25] == '\x01') {
            DetachManipulator(DAT_00e5a66c,&DAT_00e5a840 + iVar25);
          }
          iVar30 = iVar30 + 1;
          iVar25 = iVar25 + 0x40;
        } while (iVar30 < 4);
        if (bVar17) {
          Vendor_StartWeaponCutscene();
        }
        else {
          Vendor_EndWeaponCutscene(0);
          PlayMobySound(6,0,DAT_00e5a66c);
        }
      }
      UpdateAllGameplayHUD(1);
    }
    local_a0 = (longlong)(int)(animationSpeed * 36.5);
    if ((int)DAT_00e5a654 <= (int)(animationSpeed * 36.5)) {
      RegisterPostDraw(&PTR_Vendor_DrawMobyHighlight_00707f60,DAT_00e5a66c);
    }
    if (g_lastVendorWasPda == 0) {
      Camera_SetMobyDrivenTargetPos((float *)&DAT_00e5a6b0);
      Camera_SetMobyDrivenTargetRot(&DAT_00e5a6c0);
    }
    UpdatePointLights();
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      UpdateGameCounters();
    }
  }
  else if (g_OpenVendorState < 4) {
    ResetGameCounters();
    UpdateMobys();
    sound_UpdateAmbient();
    HeroUpdate();
    UpdateParts();
    puVar32 = &DAT_0095cd50;
    g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
    g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
    if (g_SpaceSceneNumFrames.piece<0,2>() + -0xc < g_SpaceSceneFrame) {
      SceneScreenFade = SceneScreenFade + 0.1;
      if (1.0 < SceneScreenFade) {
        SceneScreenFade = 1.0;
      }
    }
    else {
      SceneScreenFade = SceneScreenFade - 0.125;
      if (SceneScreenFade < 0.0) {
        SceneScreenFade = 0.0;
      }
    }
    if (g_SpaceSceneFrame < g_SpaceSceneNumFrames.piece<0,2>()) {
      iVar25 = 0x60;
      if (g_IsPal != 0) {
        iVar25 = 0x50;
      }
      if (iVar25 <= (int)g_cutsceneCameraFrame) {
        g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
        ParseWeaponSceneChunk(g_SpaceSceneChunk);
      }
      pfVar27 = (float *)((int)g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
      cVar1 = *(char *)(pfVar27 + 3);
      g_ViewContext.xratio = pfVar27[7];
      UpdateViewContext();
      fVar4 = *pfVar27;
      fVar2 = pfVar27[1];
      fVar3 = pfVar27[2];
      GameCamera.field8_0x14c =
           (char  [4])
           (DAT_00e5a6dc * fVar4 + DAT_00e5a6ec * fVar2 + DAT_00e5a6fc * fVar3 + pfVar27[3]);
      GameCamera.posX =
           DAT_00e5a6d0 * fVar4 + DAT_00e5a6e0 * fVar2 + DAT_00e5a6f0 * fVar3 + DAT_00e5a710;
      GameCamera.posY =
           DAT_00e5a6d4 * fVar4 + DAT_00e5a6e4 * fVar2 + DAT_00e5a6f4 * fVar3 + DAT_00e5a714;
      GameCamera.posZ =
           DAT_00e5a6d8 * fVar4 + DAT_00e5a6e8 * fVar2 + DAT_00e5a6f8 * fVar3 + DAT_00e5a718;
      uVar35 = FastWrapRot(pfVar27[6],DAT_00e5a708);
      dVar37 = (double)pfVar27[4];
      dVar33 = (double)pfVar27[5];
      pvVar26 = memcpy(&local_120,&DAT_00653f08,0x40);
      iVar25 = 0;
      uVar21 = _FSin(dVar37,pvVar26,0);
      dVar41 = extraout_f1;
      uVar21 = _FSin(dVar37,uVar21,1);
      dVar36 = extraout_f1_00;
      uVar21 = _FSin(dVar33,uVar21,0);
      dVar37 = extraout_f1_01;
      uVar21 = _FSin(dVar33,uVar21,1);
      dVar42 = extraout_f1_02;
      uVar21 = _FSin(uVar35,uVar21,0);
      dVar33 = extraout_f1_03;
      dVar34 = (double)_FSin(uVar35,uVar21,1);
      dVar39 = (double)(float)(dVar37 * dVar33);
      dVar38 = (double)(float)(dVar34 * dVar37);
      memcpy(&local_e0,&DAT_0073a78c,0x40);
      local_e0 = (float)(dVar42 * dVar34);
      local_dc = (float)(dVar42 * dVar33);
      local_d0 = (float)(dVar41 * dVar38) - (float)(dVar36 * dVar33);
      local_c8 = (float)(dVar42 * dVar41);
      local_cc = (float)(dVar41 * dVar39) + (float)(dVar36 * dVar34);
      local_b8 = (float)(dVar36 * dVar42);
      local_c0 = (float)(dVar36 * dVar38) + (float)(dVar41 * dVar33);
      local_bc = (float)(dVar36 * dVar39) - (float)(dVar34 * dVar41);
      local_d8 = (float)-dVar37;
      memcpy(&local_120,&local_e0,0x40);
      GameCamera.orientMtx.forward.x = -local_100;
      GameCamera.orientMtx.right.x = -local_120;
      GameCamera.orientMtx.forward.y = -local_fc;
      GameCamera.orientMtx.right.y = -local_11c;
      GameCamera.orientMtx.forward.z = -local_f8;
      GameCamera.orientMtx.up.x = local_110;
      GameCamera.orientMtx.right.z = -local_118;
      GameCamera.orientMtx.up.y = local_10c;
      GameCamera.orientMtx.up.z = local_108;
      if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
        do {
          pMVar23 = (MobyInstance *)puVar32[0x5e];
          cVar16 = (char)((int)g_cutsceneCameraFrame >> 1);
          pMVar23->previousAnimationFrame = cVar16;
          pMVar23->animationFrame = cVar16 + '\x01';
          UpdateMobyFrameData(pMVar23);
          dVar33 = (double)FastIntToDouble(g_cutsceneCameraFrame & 1);
          pMVar23->animationBlend = (float)(dVar33 * 0.5);
          if ((cVar1 != '\0') && ((g_cutsceneCameraFrame & 1) != 0)) {
            pMVar23->animationBlend = 1.0;
          }
          fVar4 = pMVar23->animationBlend;
          pfVar27 = (float *)((int)pMVar23->pVar +
                             (uint)(byte)pMVar23->previousAnimationFrame * 0x10);
          fVar11 = 1.0 - fVar4;
          pfVar28 = (float *)((int)pMVar23->pVar + (uint)(byte)pMVar23->animationFrame * 0x10);
          fVar2 = *pfVar27;
          fVar3 = pfVar27[1];
          fVar5 = pfVar27[2];
          fVar6 = *pfVar28;
          fVar7 = pfVar28[1];
          fVar9 = pfVar28[2];
          fVar10 = pfVar27[3];
          (pMVar23->pos).w = fVar10;
          fVar2 = fVar2 * fVar11 + fVar6 * fVar4;
          fVar3 = fVar3 * fVar11 + fVar7 * fVar4;
          fVar4 = fVar5 * fVar11 + fVar9 * fVar4;
          (pMVar23->pos).x = fVar2;
          (pMVar23->pos).y = fVar3;
          (pMVar23->pos).z = fVar4;
          fVar5 = DAT_00e5a6dc * fVar2;
          fVar6 = DAT_00e5a6ec * fVar3;
          fVar7 = DAT_00e5a6fc * fVar4;
          fVar9 = DAT_00e5a6d4 * fVar2 + DAT_00e5a6e4 * fVar3 + DAT_00e5a6f4 * fVar4;
          fVar11 = DAT_00e5a6d8 * fVar2 + DAT_00e5a6e8 * fVar3 + DAT_00e5a6f8 * fVar4;
          (pMVar23->pos).x = DAT_00e5a6d0 * fVar2 + DAT_00e5a6e0 * fVar3 + DAT_00e5a6f0 * fVar4;
          (pMVar23->pos).y = fVar9;
          (pMVar23->pos).z = fVar11;
          (pMVar23->pos).w = fVar5 + fVar6 + fVar7 + fVar10;
          (pMVar23->pos).x = (pMVar23->pos).x + DAT_00e5a710;
          (pMVar23->pos).y = fVar9 + DAT_00e5a714;
          (pMVar23->pos).z = fVar11 + DAT_00e5a718;
          fVar8 = DAT_00e5a708;
          pMVar23->field44_0x71 = -1;
          (pMVar23->rotation).z = fVar8;
          UpdateMobyTransform(pMVar23);
          if (pMVar23->shadow != '\0') {
            MB_SetZBoundsFromFloorCeil(pMVar23);
          }
          if (pMVar23->oClass == RATCHET) {
            Hero_UpdateInScene(pMVar23);
          }
          iVar25 = iVar25 + 1;
          puVar32 = puVar32 + 1;
        } while (iVar25 < g_SpaceSceneMobyCnt.piece<0,2>());
      }
      UpdatePointLights();
      UpdateGameCounters();
    }
    else {
      iVar25 = 0;
      SceneScreenFade = 0.0;
      VU1_setBufSizeByLevel();
      g_ViewContext.xratio = 0.63;
      UpdateViewContext();
      if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
        do {
          pMVar23 = (MobyInstance *)puVar32[0x5e];
          if (pMVar23 != (MobyInstance *)0x0) {
            pMVar23->pClass->seq_cnt = pMVar23->pClass->seq_cnt + 0xff;
            *(undefined4 *)(&pMVar23->pClass->type + (uint)pMVar23->pClass->seq_cnt * 4) = 0;
            DeleteMoby(pMVar23);
          }
          iVar25 = iVar25 + 1;
          puVar32 = puVar32 + 1;
        } while (iVar25 < g_SpaceSceneMobyCnt.piece<0,2>());
      }
      if (DAT_00e5a678 == 0) {
        Vendor_EndWeaponCutscene(1);
      }
      else {
        Vendor_RestoreHero();
      }
    }
  }
LAB_0016f940:
  sound_Update();
  return;
}


// 0x016f9a8 (0x25c bytes)
void DrawVendorHintFrame(double param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  bool bVar9;
  int iVar10;
  double dVar11;
  
  bVar4 = false;
  iVar7 = GetIconFrameTex(0xe935,0);
  Hud_GetTexIndex(iVar7);
  iVar7 = param_3;
  while (*param_2 != 0) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar8 = bVar1 - 0x20;
    if (iVar8 == 0x42) {
      bVar4 = true;
    }
    if (iVar8 == 0xea) {
      param_4 = param_4 + 9;
      iVar7 = param_3;
    }
    if ((iVar8 < 0x3b) &&
       ((iVar3 = iVar8 * 4, *(int *)(&DAT_0073a378 + iVar3) != -1 || (iVar8 == 0)))) {
      bVar9 = false;
      if (bVar4) {
        bVar4 = false;
        bVar9 = false;
        iVar10 = (int)(animationSpeed * 30.5) + (int)(animationSpeed * 10.5);
        if (g_MainLoopFrames - (g_MainLoopFrames / iVar10) * iVar10 < (int)(animationSpeed * 10.5)) {
          bVar9 = true;
          bVar4 = false;
        }
      }
      if (!bVar9 && iVar8 != 0) {
        uVar2 = *(uint *)(&DAT_0073a378 + iVar3);
        dVar11 = (double)FastIntToDouble(9);
        uVar5 = FastDoubleToInt((double)(float)(dVar11 * param_1));
        dVar11 = (double)FastIntToDouble(9);
        uVar6 = FastDoubleToInt((double)(float)(dVar11 * param_1));
        Sprite_DrawShapeWrapper
                  (iVar7,param_4,uVar5,uVar6,uVar2 >> 4 & 0xfff,uVar2 >> 0x14,9,9);
      }
      dVar11 = (double)FastIntToDouble(*(undefined4 *)(&DAT_0073a478 + iVar3));
      iVar8 = FastDoubleToInt((double)(float)(dVar11 * param_1));
      iVar7 = iVar7 + iVar8;
    }
  }
  return;
}


// 0x016fc10 (0x208 bytes)
void Vendor_DrawScrollText(void)

{
  size_t sVar2;
  longlong lVar1;
  char *text;
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if ((g_JapaneseMode != false) && (DAT_0071efb4 = DAT_0073a578, (g_MainLoopFrames & 0x1f) < 0x10)) {
    DAT_0071efb4 = DAT_0073a578 & 0xffffff;
  }
  sVar2 = strlen(DAT_00e5a67c);
  if ((int)(sVar2 - DAT_00e5a694 / 0x14) < 1) {
    lVar1 = MB_randInt(0x18);
    text = (char *)help_msg_string_by_index(*(StringId *)(&DAT_0073a318 + (int)(lVar1 << 2)));
    Vendor_SetScrollText(text);
  }
  else {
    DAT_00e5a694 = DAT_00e5a694 + 2;
  }
  if (g_JapaneseMode == false) {
    DrawVendorHintFrame(0x4000000000000000,DAT_00e5a67c,-DAT_00e5a694,8);
  }
  else {
    FontPrint_unk((double)(longlong)-DAT_00e5a694,0x401c000000000000,0x3ff4000000000000,
                        &DAT_0016fc04,0x740000,DAT_0073a578,DAT_00e5a67c,0xffffffffffffffff);
  }
  STUB_0007813c(0,0,4,0x40,0x200,0x80,0);
  STUB_0007813c(0xe2,0,0xe6,0x40,0x200,0x80,0);
  return;
}


// 0x016fe20 (0x1c0 bytes)
void DrawVendorDude(void)

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
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
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
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  iVar11 = DAT_00e5a674;
  if (DAT_00e5a9d0 == '\x01') {
    pfVar13 = (float *)(DAT_00e5a674 + 0xd0);
    pfVar14 = (float *)(DAT_00e5a674 + 0xe0);
    fVar1 = *(float *)(DAT_00e5a674 + 0xc0);
    dVar15 = (double)fVar1;
    pfVar12 = (float *)(DAT_00e5a674 + 0xc4);
    dVar16 = (double)*pfVar12;
    fVar2 = *(float *)(DAT_00e5a674 + 200);
    dVar17 = (double)fVar2;
    fVar3 = *(float *)(DAT_00e5a674 + 0xcc);
    dVar18 = (double)fVar3;
    fVar4 = *pfVar13;
    dVar19 = (double)fVar4;
    fVar5 = *(float *)(DAT_00e5a674 + 0xd4);
    dVar20 = (double)fVar5;
    fVar6 = *(float *)(DAT_00e5a674 + 0xd8);
    dVar21 = (double)fVar6;
    fVar7 = *(float *)(DAT_00e5a674 + 0xdc);
    dVar22 = (double)fVar7;
    fVar8 = *pfVar14;
    dVar23 = (double)fVar8;
    fVar9 = *(float *)(DAT_00e5a674 + 0xe4);
    dVar24 = (double)fVar9;
    dVar25 = (double)*(float *)(DAT_00e5a674 + 0xe8);
    fVar10 = *(float *)(DAT_00e5a674 + 0xec);
    dVar26 = (double)fVar10;
    if (DAT_00e5a9d2 != '\0') {
      *(float *)(DAT_00e5a674 + 0xc0) = fVar1;
      *(float *)(iVar11 + 0xc4) = *pfVar12;
      *(float *)(iVar11 + 200) = fVar2;
      *(float *)(iVar11 + 0xcc) = fVar3;
      *pfVar13 = fVar4;
      *(float *)(iVar11 + 0xd4) = fVar5;
      *(float *)(iVar11 + 0xd8) = fVar6;
      *(float *)(iVar11 + 0xdc) = fVar7;
      *pfVar14 = fVar8;
      *(float *)(iVar11 + 0xe4) = fVar9;
      *(float *)(iVar11 + 0xec) = fVar10;
      *(float *)(iVar11 + 0xe8) = (float)(dVar25 * 2.0);
    }
    MB_AddToDrawList(iVar11,1);
    iVar11 = DAT_00e5a674;
    if (DAT_00e5a9d2 != '\0') {
      pfVar14 = (float *)(DAT_00e5a674 + 0xd0);
      pfVar12 = (float *)(DAT_00e5a674 + 0xe0);
      *(float *)(DAT_00e5a674 + 0xc0) = (float)dVar15;
      *(float *)(iVar11 + 0xc4) = (float)dVar16;
      *(float *)(iVar11 + 200) = (float)dVar17;
      *(float *)(iVar11 + 0xcc) = (float)dVar18;
      *pfVar14 = (float)dVar19;
      *(float *)(iVar11 + 0xd4) = (float)dVar20;
      *(float *)(iVar11 + 0xd8) = (float)dVar21;
      *(float *)(iVar11 + 0xdc) = (float)dVar22;
      *pfVar12 = (float)dVar23;
      *(float *)(iVar11 + 0xe4) = (float)dVar24;
      *(float *)(iVar11 + 0xe8) = (float)dVar25;
      *(float *)(iVar11 + 0xec) = (float)dVar26;
    }
  }
  return;
}


// 0x016ffe0 (0x9c bytes)
// strings: 00653f98: '%d,%03d'


int Vendor_FormatBolts(char *buf,int value)

{
  int iVar1;
  
  if (value < 1000) {
    iVar1 = snprintf(buf,"%d",value);
  }
  else {
    iVar1 = snprintf(buf,"%d,%03d",value / 1000,value % 1000);
  }
  return iVar1;
}


// 0x017007c (0x400 bytes)
void DrawWeaponIcons(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorItemsCnt < 8) {
    iVar3 = DAT_00e5a6a8 * 0x38;
    FUN_005c4988(((ulonglong)DAT_00e5a654 & 0xf) * 4 + -0x20);
    GetEffectTex(0x16);
    Sprite_DrawShapeWrapper(iVar3 + 8,2,0x38,0x38,0,0,0x10,0x10);
    GetEffectTex(0x16);
    Sprite_DrawShapeWrapper(iVar3 + 10,4,0x34,0x34,0,0,0x10,0x10);
    iVar4 = 0;
    iVar3 = 0xc;
    if (0 < g_VendorItemsCnt) {
      do {
        if ((&DAT_00e5a724)[iVar4 * 0x10] == '\x01') {
          uVar1 = GetIconFrameTex
                            (*(undefined2 *)
                              (&DAT_00721038 + *(int *)(&g_VendorItems + iVar4 * 0x10) * 0x4c),2);
        }
        else {
          uVar1 = GetIconFrameTex
                            (*(undefined2 *)
                              (&DAT_00721038 + *(int *)(&g_VendorItems + iVar4 * 0x10) * 0x4c),0);
        }
        DrawSprite(uVar1,iVar3,6,0x30,0x30,0x80);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x38;
      } while (iVar4 < g_VendorItemsCnt);
    }
  }
  else {
    if (g_VendorCursor < 0) {
      g_VendorCursor = g_VendorCursor + 4;
    }
    else if (g_VendorCursor < 1) {
      FUN_005c4988(((ulonglong)DAT_00e5a654 & 0xf) * 4 + -0x20);
      GetEffectTex(0x16);
      Sprite_DrawShapeWrapper(0xb0,2,0x38,0x38,0,0,0x10,0x10);
      GetEffectTex(0x16);
      Sprite_DrawShapeWrapper(0xb2,4,0x34,0x34,0,0,0x10,0x10);
    }
    else {
      g_VendorCursor = g_VendorCursor + -4;
    }
    iVar4 = -2;
    iVar3 = g_VendorCursor + -100;
    do {
      iVar2 = g_VendorItemsCnt * 2 + iVar4 + DAT_00e5a6a8 + -3;
      iVar2 = (iVar2 - (iVar2 / g_VendorItemsCnt) * g_VendorItemsCnt) * 0x10;
      if ((&DAT_00e5a724)[iVar2] == '\x01') {
        uVar1 = GetIconFrameTex
                          (*(undefined2 *)(&DAT_00721038 + *(int *)(&g_VendorItems + iVar2) * 0x4c),
                           2);
      }
      else {
        uVar1 = GetIconFrameTex
                          (*(undefined2 *)(&DAT_00721038 + *(int *)(&g_VendorItems + iVar2) * 0x4c),
                           0);
      }
      DrawSprite(uVar1,iVar3,6,0x30,0x30,0xffffffff80808080);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar4 < 9);
  }
  return;
}


// 0x0170490 (0x858 bytes)
// strings: 00653f98: '%d,%03d'

void DrawWeaponStrings(void)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  char acStack_170 [256];
  
  fVar1 = 1.0;
  if (g_Language == 3) {
    fVar1 = 0.85;
  }
  dVar8 = (double)fVar1;
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  MB_AddToDrawList((ulonglong)DAT_00e5a670 + 0x100,1);
  MB_AddToDrawList(DAT_00e5a670,1);
  iVar3 = DAT_00e5a6a8 * 0x10;
  if ((&DAT_00e5a724)[iVar3] == '\x01') {
    uVar6 = 0x4018000000000000;
    uVar7 = 0x4020000000000000;
    help_msg_string_by_index
              (*(StringId *)(&DAT_00721000 + *(int *)(&g_VendorItems + iVar3) * 0x4c));
    FontPrintScaled(uVar6,uVar7,dVar8);
    uVar6 = help_msg_string_by_index(STR_AMMO);
    FontPrintSmallLeft(0x18,0x18,0x80f0f0f0,uVar6,0xffffffffffffffff);
    uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
    if (uVar2 < 1000) {
      snprintf(acStack_170,"%d",(ulonglong)uVar2);
    }
    else {
      snprintf(acStack_170,"%d,%03d",uVar2 / 1000,(uint)uVar2 + (uVar2 / 1000) * -1000);
    }
    FontPrintSmallRight(0x76,0x65,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    if (g_lastVendorWasPda != 0) {
      iVar3 = FontLen(acStack_170,-1);
      DrawFlatOverlay(0x75 - iVar3,0x6d,0x7b,0x70,0x20959544,0);
      DrawFlatOverlay(0x76 - iVar3,0x6d,0x7a,0x70,0x30959544,0);
      DrawFlatOverlay(0x77 - iVar3,0x6d,0x79,0x70,0x40959544,0);
      DrawFlatOverlay(0x78 - iVar3,0x6d,0x78,0x70,0x50959544,0);
      DrawFlatOverlay(0x79 - iVar3,0x6d,0x77,0x70,0x60959544,0);
      DrawFlatOverlay(0x7a - iVar3,0x6d,0x76,0x70,0x70959544,0);
      DrawFlatOverlay(0x7b - iVar3,0x6d,0x75,0x70,0x80959544,0);
      if (g_lastVendorWasPda == 0) {
        uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
      }
      else {
        uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      uVar5 = (uint)uVar2;
      if (uVar5 < 1000) {
        snprintf(acStack_170,"%d",(ulonglong)uVar2);
      }
      else {
        snprintf(acStack_170,"%d,%03d",uVar5 / 1000,(uint)uVar2 + (uVar5 / 1000) * -1000);
      }
      FontPrintSmallRight(0x76,0x55,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    }
  }
  else {
    uVar6 = 0x4018000000000000;
    uVar7 = 0x4020000000000000;
    help_msg_string_by_index
              (*(StringId *)(&DAT_00721000 + *(int *)(&g_VendorItems + iVar3) * 0x4c));
    FontPrintScaled(uVar6,uVar7,dVar8);
    iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
    if (iVar3 < 1000) {
      snprintf(acStack_170,"%d",iVar3);
    }
    else {
      snprintf(acStack_170,"%d,%03d",iVar3 / 1000,iVar3 % 1000);
    }
    uVar4 = 0x80f0f0f0;
    if (UnlockableItems.persuader != '\0') {
      uVar4 = 0x80808080;
    }
    FontPrintSmallRight(0x76,0x65,uVar4,acStack_170,0xffffffffffffffff);
    if (UnlockableItems.persuader != '\0') {
      iVar3 = FontLen(acStack_170,-1);
      DrawFlatOverlay(0x75 - iVar3,0x6d,0x7b,0x70,0x20959544,0);
      DrawFlatOverlay(0x76 - iVar3,0x6d,0x7a,0x70,0x30959544,0);
      DrawFlatOverlay(0x77 - iVar3,0x6d,0x79,0x70,0x40959544,0);
      DrawFlatOverlay(0x78 - iVar3,0x6d,0x78,0x70,0x50959544,0);
      DrawFlatOverlay(0x79 - iVar3,0x6d,0x77,0x70,0x60959544,0);
      DrawFlatOverlay(0x7a - iVar3,0x6d,0x76,0x70,0x70959544,0);
      DrawFlatOverlay(0x7b - iVar3,0x6d,0x75,0x70,0x80959544,0);
      if (UnlockableItems.persuader == '\0') {
        iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      else {
        iVar3 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      if (iVar3 < 1000) {
        snprintf(acStack_170,"%d",iVar3);
      }
      else {
        snprintf(acStack_170,"%d,%03d",iVar3 / 1000,iVar3 % 1000);
      }
      FontPrintSmallRight(0x76,0x55,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    }
  }
  return;
}


// 0x0170cf0 (0x2e0 bytes)
void DrawBuyButton(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  StringId helpmsg;
  undefined8 uVar4;
  GPiece<32> local_50;
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorMenuState == 0) {
    helpmsg = STR_BUY;
  }
  else {
    iVar2 = DAT_00e5a6a8 * 0x10;
    if (((&DAT_00e5a724)[iVar2] == '\x01') &&
       ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar2) * 0xc] <=
        (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar2)])) {
      helpmsg = STR_BACK;
    }
    else if ((&DAT_00e5a724)[iVar2] == '\x01') {
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar2) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      helpmsg = STR_BACK;
      if ((int)(uint)uVar1 <= g_boltCount) {
        helpmsg = STR_BUY;
      }
    }
    else {
      if (UnlockableItems.persuader == '\0') {
        iVar2 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      else {
        iVar2 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      helpmsg = STR_BACK;
      if (iVar2 <= g_boltCount) {
        helpmsg = STR_TO_USE_YOUR_BOMB_0x0000;
      }
    }
  }
  if (helpmsg != STR_TO_USE_YOUR_BOMB_0x0000) {
    uVar3 = help_msg_string_by_index(helpmsg);
    uVar4 = 0x3ff0000000000000;
    FontPrintOpt(0x3ff0000000000000,local_50,0x80f0f0f0,uVar3,0xffffffffffffffff);
    uVar3 = help_msg_string_by_index(helpmsg);
    FontPrintOpt(uVar4,local_50,0x80f0f0f0,uVar3,0xffffffffffffffff);
  }
  return;
}


// 0x0170fd0 (0x1bc bytes)
void DrawExitButton(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorMenuState == 0) {
    uVar3 = help_msg_string_by_index(STR_EXIT);
    FontPrintSmallCenter(0x28,0x14,0x80f0f0f0,uVar3,0xffffffffffffffff);
  }
  else {
    iVar2 = DAT_00e5a6a8 * 0x10;
    if ((((&DAT_00e5a724)[iVar2] != '\x01') ||
        ((int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar2)] <
         (int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar2) * 0xc])) &&
       ((&DAT_00e5a724)[iVar2] == '\x01')) {
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar2) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      if ((int)(uint)uVar1 <= g_boltCount) {
        uVar3 = help_msg_string_by_index(STR_EXIT);
        FontPrintSmallCenter(0x28,0x14,0x80f0f0f0,uVar3,0xffffffffffffffff);
      }
    }
  }
  return;
}


// 0x01711a8 (0x5ec bytes)
void Vendor_DrawItemInfo(void)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  GPiece<24> local_170;
  char acStack_158 [264];
  
  STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  iVar3 = DAT_00e5a6a8 * 0x10;
  if (((&DAT_00e5a724)[iVar3] == '\x01') &&
     ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar3) * 0xc] <=
      (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar3)])) {
    uVar2 = help_msg_string_by_index(STR_YOURE_MAXED_OUT);
    FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
    return;
  }
  if ((&DAT_00e5a724)[iVar3] == '\x01') {
    if (g_lastVendorWasPda == 0) {
      uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar3) * 0xc];
    }
    else {
      uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    if (g_boltCount < (int)(uint)uVar1) {
      uVar2 = help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT);
      FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
    }
    else {
      MB_AddToDrawList((ulonglong)DAT_00e5a670 + 0x500,1);
      uVar2 = help_msg_string_by_index(STR_HOW_MANY);
      FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
      snprintf(acStack_158,"%d",DAT_00e5a95c);
      if (DAT_00e5a95c < 100) {
        if (DAT_00e5a95c < 10) {
          FontPrintSmallLeft(0x25,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
        }
        else {
          FontPrintSmallLeft(0x1e,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
        }
      }
      else {
        FontPrintSmallLeft(0x17,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
      }
      FontPrintSmallLeft(0xc,0x32,0x80f0f0f0,&DAT_00653fa4,0xffffffffffffffff);
      FontPrintSmallLeft(0x40,0x32,0x80f0f0f0,&DAT_00653fac,0xffffffffffffffff);
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      snprintf(acStack_158,"%d",DAT_00e5a95c * (uint)uVar1);
      FontPrintSmallRight(0x40,0x4c,0x80f0f0f0,acStack_158,0xffffffffffffffff);
    }
  }
  else {
    if (UnlockableItems.persuader == '\0') {
      iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    else {
      iVar3 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    uVar2 = 0x3ff0000000000000;
    if (((g_Language == 4) || (g_Language == 2)) || (uVar5 = uVar2, g_Language == 5)) {
      uVar5 = 0x3feb333340000000;
    }
    if (g_boltCount < iVar3) {
      uVar5 = help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT);
      FontPrintOpt(uVar2,local_170,0x80f0f0f0,uVar5,0xffffffffffffffff);
    }
    else {
      uVar2 = 0x4018000000000000;
      help_msg_string_by_index(STR_PURCHASE);
      FontPrintScaled(uVar2,uVar2,uVar5);
      uVar2 = 0x4000000000000000;
      uVar4 = 0x4040000000000000;
      help_msg_string_by_index(STR_BUY);
      FontPrintScaled(uVar2,uVar4,uVar5);
      uVar4 = 0x404f000000000000;
      help_msg_string_by_index(STR_NO);
      FontPrintScaled(uVar2,uVar4,uVar5);
    }
  }
  return;
}


// 0x01717a8 (0x52c bytes)
void Vendor_DrawFlickerText(undefined8 param_1,double param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = idol_draw::Blend(1,1,0,2,0,0,1,1);
  SetGSReg(0x16,uVar2);
  iVar1 = EffectTexHeaders + 8;
  lVar3 = GetEffectTex(0x1c);
  iVar6 = EffectTexHeaders + 8;
  *(undefined4 *)(iVar1 + (int)(lVar3 << 5) + (int)(lVar3 << 2)) = 0x10101;
  lVar3 = GetEffectTex(0x1a);
  iVar1 = (int)(param_3 << 2);
  *(undefined4 *)(iVar6 + (int)(lVar3 << 5) + (int)(lVar3 << 2)) = 0x10101;
  iVar6 = (int)param_3;
  if ((*(int *)(&DAT_00e5a9dc + iVar1) != 0) || (iVar6 == 0)) {
    if (*(int *)(&DAT_00e5a9dc + iVar1) != 0) {
      *(int *)(&DAT_00e5a9dc + iVar1) = *(int *)(&DAT_00e5a9dc + iVar1) + 2;
    }
    iVar4 = *(int *)(&DAT_00e5a9dc + iVar1);
    if ((iVar6 == 0) && (iVar4 < 0x18)) {
      iVar4 = 0x18;
    }
    MB_randInt(200);
    MB_randInt(200);
    iVar4 = FUN_005c4988(iVar4 + -0x80);
    uVar2 = FUN_00502f08(0,0,0,0,0,0);
    SetGSReg(6,uVar2);
    iVar4 = (0x80 - iVar4) * 2;
    iVar5 = 0xff;
    if (iVar4 < 0x100) {
      iVar5 = iVar4;
    }
    uVar2 = idol_draw::PackCmd(0,2,2,1,iVar5);
    SetGSReg(3,uVar2);
    uVar2 = 0;
    GetEffectTex(0x1a);
    DrawSpriteFont(uVar2,uVar2,param_1,param_2);
    if (0xff < *(int *)(&DAT_00e5a9dc + iVar1)) {
      *(undefined4 *)(&DAT_00e5a9dc + iVar1) = 0;
    }
  }
  if ((*(int *)(&DAT_00e5a9dc + iVar1) == 0) && (iVar4 = MB_randInt(700), iVar4 == 0)) {
    *(undefined4 *)(&DAT_00e5a9dc + iVar1) = 2;
  }
  uVar2 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar2);
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar2);
  if (0 < iVar6) {
    if (*(int *)(&DAT_00e5a9f8 + iVar1) == 0) {
      iVar4 = MB_randInt(0x168);
      if (iVar4 == 0) {
        *(undefined4 *)(&DAT_00e5a9f8 + iVar1) = 2;
      }
    }
    else {
      iVar4 = *(int *)(&DAT_00e5a9f8 + iVar1);
      *(int *)(&DAT_00e5a9f8 + iVar1) = iVar4 + 2;
      FUN_005c4988(iVar4 + -0x7e);
      dVar7 = (double)FastIntToDouble(0x200 - *(int *)(&DAT_00e5a9f8 + iVar1));
      uVar2 = 0;
      dVar8 = (double)(float)(param_2 + 16.0);
      dVar7 = -(double)(float)(dVar7 * 0.03125);
      GetEffectTex((int)(dVar8 * 3.0),0x4030000000000000,0x3fa0000000000000,0,0x1c);
      DrawSpriteFont(uVar2,dVar7,param_1,dVar8);
      if (0x1ff < *(int *)(&DAT_00e5a9f8 + iVar1)) {
        *(undefined4 *)(&DAT_00e5a9f8 + iVar1) = 0;
      }
    }
  }
  if (iVar6 == 6) {
    uVar2 = 0;
    GetEffectTex(0,0x19);
    DrawSpriteFont(uVar2,uVar2,param_1,param_2);
  }
  return;
}


// 0x0171d00 (0xefc bytes)
// inlined: FastAtan2 @0x171e10
void Vendor_SetupScreenRender(double param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  RsxCmd RVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RsxCmd RVar13;
  uint width;
  RsxCmd height;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  RsxCmd RVar19;
  RenderingStep *pRVar20;
  RenderingStep *pRVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  int iVar32;
  RsxCmd *pRVar33;
  longlong lVar30;
  longlong lVar31;
  int iVar34;
  int iVar35;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong uVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  byte local_b4;
  RsxCmd local_b0;
  RsxCmd local_a0;
  
  uVar27 = ZEXT48(&stack0x00000000);
  lVar31 = uVar27 - 0x2f0;
  puVar15 = (ulonglong *)lVar31;
  *puVar15 = uVar27;
  puVar15[0x60] = in_LR;
  puVar15[0x5c] = in_f30;
  puVar15[0x5d] = in_f31;
  puVar15[0x5a] = unaff_r30;
  puVar15[0x57] = unaff_r27;
  dVar40 = 1.0;
  puVar15[0x55] = unaff_r25;
  FLOAT_0095d1c8 = 1.0;
  width = 1 << (param_2 & 0x3f);
  puVar15[0x56] = unaff_r26;
  dVar41 = 0.0;
  height = 1 << (param_3 & 0x3f);
  puVar15[0x5b] = unaff_r31;
  puVar15[0x59] = unaff_r29;
  puVar15[0x58] = unaff_r28;
  puVar15[0x54] = unaff_r24;
  SetUserViewContext(width,height,(float)param_1,0.0,524288.0,255.0,0.0);
  fVar1 = g_ViewContext.yratio;
  dVar37 = (double)g_ViewContext.yratio;
  *(float *)(puVar15 + 0x3c) = (float)dVar40;
  piVar22 = g_viewMtxPtr;
  dVar37 = ABS(dVar37);
  *(float *)((int)puVar15 + 0x1e4) = (float)(ABS(dVar40) - dVar37);
  iVar32 = (int)(((ulonglong)(*(uint *)(puVar15 + 0x3c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1e4) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar1 >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&g_atanQuadrantTable + iVar32);
  fVar1 = *(float *)(&DAT_00735904 + iVar32);
  dVar36 = ABS(dVar40);
  dVar38 = dVar37;
  if (dVar41 <= (double)*(float *)((int)puVar15 + 0x1e4)) {
    dVar38 = ABS((double)*(float *)(puVar15 + 0x3c));
    dVar36 = dVar37;
  }
  dVar37 = dVar41;
  if (dVar41 < dVar38) {
    iVar32 = 4;
    fVar16 = (float)(dVar36 - dVar38) / (float)(dVar36 + dVar38);
    lVar30 = lVar31;
    do {
      iVar32 = iVar32 + -1;
      *(float *)((int)lVar30 + 0x218) = fVar16;
      lVar30 = lVar30 + 4;
    } while (iVar32 != 0);
    fVar16 = fVar16 * fVar16;
    lVar30 = uVar27 - 0x2e0;
    iVar32 = 4;
    fVar17 = fVar16 * fVar16;
    *(float *)((int)puVar15 + 0x21c) = *(float *)((int)puVar15 + 0x21c) * fVar16;
    *(float *)(puVar15 + 0x44) = *(float *)(puVar15 + 0x44) * fVar17;
    *(float *)((int)puVar15 + 0x224) = *(float *)((int)puVar15 + 0x224) * fVar17 * fVar16;
    do {
      iVar32 = iVar32 + -1;
      *(float *)((int)lVar30 + 0x218) = *(float *)((int)lVar30 + 0x208) * fVar17 * fVar17;
      lVar30 = lVar30 + 4;
    } while (iVar32 != 0);
    iVar32 = 0;
    iVar34 = 8;
    lVar30 = lVar31;
    do {
      pfVar18 = (float *)((int)&DAT_007358e0 + iVar32);
      iVar34 = iVar34 + -1;
      iVar32 = iVar32 + 4;
      *(float *)((int)lVar30 + 0x218) = *(float *)((int)lVar30 + 0x218) * *pfVar18;
      lVar30 = lVar30 + 4;
    } while (iVar34 != 0);
    iVar32 = 8;
    lVar30 = lVar31;
    dVar36 = dVar41;
    do {
      iVar32 = iVar32 + -1;
      iVar34 = (int)lVar30;
      lVar30 = lVar30 + 4;
      dVar36 = (double)(float)(dVar36 + (double)*(float *)(iVar34 + 0x218));
    } while (iVar32 != 0);
    dVar37 = (double)((float)(dVar36 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = FLOAT_0095d1c8;
  puVar5 = *(undefined4 **)(*piVar22 + 0x20);
  puVar15[5] = ZEXT48(&TOC_BASE);
  (*(code *)*puVar5)((double)((float)(dVar37 * 57.2957763671875) * fVar1),0x3fb99999a0000000,
                     0x4079000000000000,piVar22);
  fVar1 = GameCamera.mtx0.v2.x;
  *(float *)((int)puVar15 + 0x74) = GameCamera.mtx0.v1.x;
  *(float *)(puVar15 + 0xf) = fVar1;
  *(float *)((int)puVar15 + 0x7c) = (float)dVar41;
  fVar23 = GameCamera.mtx0.v2.y;
  fVar16 = GameCamera.mtx0.v1.y;
  fVar1 = GameCamera.mtx0.v0.y;
  *(float *)((int)puVar15 + 0x84) = GameCamera.mtx0.v1.y;
  *(float *)(puVar15 + 0x11) = fVar23;
  *(float *)((int)puVar15 + 0x8c) = (float)dVar41;
  fVar24 = GameCamera.mtx0.v2.z;
  fVar17 = GameCamera.mtx0.v1.z;
  fVar2 = GameCamera.mtx0.v0.z;
  *(float *)((int)puVar15 + 0x94) = GameCamera.mtx0.v1.z;
  *(float *)(puVar15 + 0x13) = fVar24;
  *(float *)((int)puVar15 + 0x9c) = (float)dVar41;
  fVar26 = GameCamera.posZ;
  fVar25 = GameCamera.posY;
  *(float *)((int)puVar15 + 0xa4) = GameCamera.posY;
  *(float *)(puVar15 + 0x15) = fVar26;
  *(float *)((int)puVar15 + 0xac) = (float)dVar40;
  *(float *)((int)puVar15 + 0xb4) = fVar1;
  *(float *)(puVar15 + 0x17) = fVar2;
  *(float *)((int)puVar15 + 0xc4) = fVar16;
  *(float *)(puVar15 + 0x19) = fVar17;
  *(float *)((int)puVar15 + 0xd4) = fVar23;
  *(float *)(puVar15 + 0x1b) = fVar24;
  *(float *)((int)puVar15 + 0xe4) = fVar25;
  *(float *)(puVar15 + 0x1d) = fVar26;
  iVar32 = *piVar22;
  puVar15[5] = puVar15[5];
  (*(code *)**(undefined4 **)(iVar32 + 0x24))(piVar22);
  pRVar20 = HUD_Pass;
  auVar42 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x38) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x40) & 0xfffffff0));
  lVar28 = uVar27 - 0x150;
  auVar44 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x3c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x44) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x3c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x44) & 0xfffffff0));
  vectorMergeHighWord(auVar42,auVar43);
  vectorMergeLowWord(auVar42,auVar43);
  iVar32 = 0x10;
  auVar42 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x38) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x40) & 0xfffffff0));
  auVar43 = vectorMergeHighWord(auVar42,auVar44);
  vectorMergeLowWord(auVar42,auVar44);
  *(undefined1 (*) [16])lVar28 = auVar43;
  *pRVar20->command = 0x441efc;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  lVar30 = lVar28;
  do {
    iVar32 = iVar32 + -1;
    pRVar33 = (RsxCmd *)lVar30;
    lVar30 = lVar30 + 4;
    *pRVar20->command = *pRVar33;
    pRVar20->command = pRVar20->command + 1;
    pRVar21 = HUD_Pass;
  } while (iVar32 != 0);
  auVar42 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x28) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x30) & 0xfffffff0));
  auVar44 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x2c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x34) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x2c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x34) & 0xfffffff0));
  vectorMergeHighWord(auVar42,auVar43);
  vectorMergeLowWord(auVar42,auVar43);
  auVar43 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x28) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x30) & 0xfffffff0));
  iVar32 = 0x10;
  auVar42 = vectorMergeHighWord(auVar43,auVar44);
  vectorMergeLowWord(auVar43,auVar44);
  *(undefined1 (*) [16])lVar28 = auVar42;
  *pRVar21->command = 0x441efc;
  pRVar21->command[1] = 8;
  pRVar21->command = pRVar21->command + 2;
  do {
    pRVar33 = (RsxCmd *)lVar28;
    iVar32 = iVar32 + -1;
    lVar28 = lVar28 + 4;
    *pRVar21->command = *pRVar33;
    pRVar21->command = pRVar21->command + 1;
  } while (iVar32 != 0);
  DAT_00966b8c = (short)width;
  DAT_00966b8e = (short)height;
  piVar22[0x8b6] = piVar22[0x8b6] + 1;
  memset(uVar27 - 0xb8,0,0x3c);
  *(undefined1 *)((int)puVar15 + 0x23a) = 8;
  *(undefined1 *)((int)puVar15 + 0x23b) = 1;
  uVar29 = width << 2;
  *(undefined1 *)((int)puVar15 + 0x23c) = 0;
  iVar32 = piVar22[0x8a2];
  iVar34 = piVar22[299];
  *(uint *)(puVar15 + 0x4a) = uVar29;
  iVar35 = 3;
  *(int *)(puVar15 + 0x48) = iVar32 - iVar34;
  lVar30 = lVar31;
  do {
    iVar35 = iVar35 + -1;
    *(undefined1 *)((int)lVar31 + 0x23d) = 0;
    *(undefined4 *)((int)lVar30 + 0x244) = 0;
    *(undefined4 *)((int)lVar30 + 0x254) = 0x40;
    lVar31 = lVar31 + 1;
    lVar30 = lVar30 + 4;
  } while (iVar35 != 0);
  *(undefined1 *)(puVar15 + 0x4c) = 2;
  iVar32 = piVar22[0x8a2];
  iVar34 = piVar22[299];
  *(uint *)(puVar15 + 0x4d) = uVar29;
  *(undefined1 *)((int)puVar15 + 0x261) = 0;
  *(undefined1 *)(puVar15 + 0x47) = 1;
  *(undefined1 *)((int)puVar15 + 0x239) = 0;
  RVar19 = width << 0x10;
  *(RsxCmd *)((int)puVar15 + 0x264) = (iVar32 + height * width * 4) - iVar34;
  *(short *)((int)puVar15 + 0x26c) = (short)width;
  *(short *)((int)puVar15 + 0x26e) = (short)height;
  DAT_00e5aa14 = *(undefined4 *)(puVar15 + 0x48);
  *(undefined2 *)(puVar15 + 0x4e) = 0;
  *(undefined2 *)((int)puVar15 + 0x272) = 0;
  pRVar20 = HUD_Pass;
  DAT_00e5aa18 = 0x1a529;
  DAT_00e5aa2c = RVar19 | height;
  DAT_00e5aa1c = 0x30303;
  DAT_00e5aa20 = 0x80010000;
  DAT_00e5aa24 = 0xaae4;
  DAT_00e5aa30 = uVar29 | 0x100000;
  DAT_00e5aa28 = 0x2062000;
  DAT_00e5aa34 = 0;
  DAT_00e5aa35 = 0xff;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar20->command[1] = local_b4 + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x23d) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x23e) + 0xfeed0000;
  pRVar20->command[2] = *(byte *)((int)puVar15 + 0x23f) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x261) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  uVar3 = *(ushort *)((int)puVar15 + 0x26c);
  uVar4 = *(ushort *)((int)puVar15 + 0x26e);
  pRVar33[2] = (RsxCmd)&DAT_00180208;
  pRVar20->command[1] =
       (uint)*(byte *)((int)puVar15 + 0x23a) | (uint)*(byte *)(puVar15 + 0x4c) << 5 |
       (uint)*(byte *)(puVar15 + 0x47) << 8 | (uint)*(byte *)((int)puVar15 + 0x239) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar3) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar4) & 0xffffffff) << 0x18);
  pRVar20->command[2] = local_a0;
  pRVar20->command[3] = local_b0;
  pRVar20->command[4] = *(RsxCmd *)((int)puVar15 + 0x264);
  pRVar20->command[5] = *(RsxCmd *)((int)puVar15 + 0x244);
  pRVar20->command[6] = *(RsxCmd *)((int)puVar15 + 0x254);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 7;
  pRVar33[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar20->command[1] = *(RsxCmd *)(puVar15 + 0x4d);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar20->command[1] = *(RsxCmd *)(puVar15 + 0x4b);
  pRVar20->command[2] = *(RsxCmd *)((int)puVar15 + 0x25c);
  pRVar20->command[3] = *(RsxCmd *)(puVar15 + 0x49);
  pRVar20->command[4] = *(RsxCmd *)((int)puVar15 + 0x24c);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 5;
  pRVar33[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar20->command[1] = (uint)*(byte *)((int)puVar15 + 0x23b);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar20->command[1] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x272),*(undefined2 *)(puVar15 + 0x4e));
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar20->command[1] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x26c),*(undefined2 *)(puVar15 + 0x4e));
  pRVar20->command[2] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x26e),*(undefined2 *)((int)puVar15 + 0x272));
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar20->command[1] =
       (uint)*(ushort *)((int)puVar15 + 0x26e) - (*(ushort *)((int)puVar15 + 0x26e) >> 0xc & 1) |
       0x1000;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar20->command[1] = 0xffffff00;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar33 = pRVar20->command;
  puVar15[0x52] = (ulonglong)width;
  pRVar33[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_INVALIDATE_L2_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  lVar31 = uVar27 - 0x108;
  fVar1 = (float)(longlong)puVar15[0x52] * 0.5;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  auVar42 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,lVar31);
  *(undefined4 *)lVar31 = uVar14;
  puVar15[0x52] = (ulonglong)height;
  uVar39 = puVar15[0x52];
  fVar1 = (float)(longlong)uVar39 * 0.5;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  auVar42 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar44,0,uVar27 - 0x104);
  *(undefined4 *)(uVar27 - 0x104) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0x100);
  *(undefined4 *)(uVar27 - 0x100) = uVar14;
  fVar1 = (float)(longlong)uVar39 * -0.5;
  iVar32 = 4;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  pRVar20 = HUD_Pass;
  auVar42 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar42,0,uVar27 - 0xfc);
  *(undefined4 *)(uVar27 - 0xfc) = uVar14;
  *pRVar20->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar20->command[1] = 0x12;
  pRVar20->command = pRVar20->command + 2;
  do {
    pRVar33 = (RsxCmd *)lVar31;
    iVar32 = iVar32 + -1;
    lVar31 = lVar31 + 4;
    *pRVar20->command = *pRVar33;
    pRVar20->command = pRVar20->command + 1;
    pRVar21 = HUD_Pass;
  } while (iVar32 != 0);
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0xf8);
  *(undefined4 *)(uVar27 - 0xf8) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar44,0,uVar27 - 0xf4);
  *(undefined4 *)(uVar27 - 0xf4) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0xe8);
  *(undefined4 *)(uVar27 - 0xe8) = uVar14;
  pRVar33 = pRVar21->command;
  uVar14 = storeVectorElementWordIndexed(auVar42,0,uVar27 - 0xe4);
  *(undefined4 *)(uVar27 - 0xe4) = uVar14;
  *pRVar33 = (RsxCmd)&DAT_00080a00;
  pRVar21->command[1] = RVar19;
  pRVar21->command[2] = height << 0x10;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_CLIP_MIN_x2;
  pRVar21->command[1] = (RsxCmd)(float)dVar41;
  pRVar21->command[2] = (RsxCmd)(float)dVar40;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  *(undefined4 *)(puVar15 + 0x40) = 0x3f000000;
  *(float *)((int)puVar15 + 0x204) = (float)dVar41;
  *(undefined4 *)(puVar15 + 0x42) = 0x3f000000;
  RVar6 = *(RsxCmd *)(puVar15 + 0x3f);
  *(float *)((int)puVar15 + 0x214) = (float)dVar41;
  RVar7 = *(RsxCmd *)((int)puVar15 + 0x1fc);
  uVar14 = storeVectorElementWordIndexed(auVar43,4,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 1) & 0xfffffffc) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar44,8,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 2) & 0xfffffffc) = uVar14;
  pRVar21->command[3] = 0x3f000000;
  pRVar21->command[4] = (RsxCmd)(float)dVar41;
  uVar14 = storeVectorElementWordIndexed(auVar43,0x14,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 5) & 0xfffffffc) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar42,0x18,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 6) & 0xfffffffc) = uVar14;
  pRVar21->command[7] = 0x3f000000;
  pRVar21->command[8] = (RsxCmd)(float)dVar41;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 9;
  pRVar33[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  RVar8 = *(RsxCmd *)(puVar15 + 0x40);
  RVar9 = *(RsxCmd *)((int)puVar15 + 0x204);
  RVar10 = *(RsxCmd *)(puVar15 + 0x41);
  RVar11 = *(RsxCmd *)((int)puVar15 + 0x20c);
  RVar12 = *(RsxCmd *)(puVar15 + 0x42);
  RVar13 = *(RsxCmd *)((int)puVar15 + 0x214);
  pRVar21->command[1] = RVar6;
  pRVar21->command[2] = RVar7;
  pRVar21->command[3] = RVar8;
  pRVar21->command[4] = RVar9;
  pRVar21->command[5] = RVar10;
  pRVar21->command[6] = RVar11;
  pRVar21->command[7] = RVar12;
  pRVar21->command[8] = RVar13;
  pRVar21->command = pRVar21->command + 9;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar20->command[1] = RVar19;
  pRVar20->command[2] = height << 0x10;
  pRVar20->command = pRVar20->command + 3;
  idol_draw::BindVertexProgram(piVar22,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(piVar22,HUD_Pass,0xc);
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar20->command[1] = 0xf3;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_NO_OPERATION_x1;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  return;
}


// 0x0172bfc (0x24 bytes)
void Vendor_ResetHUDPass(void)

{
  ResetHUDPass();
  return;
}


// 0x0172c40 (0xa3c bytes)
void Vendor_HudUpdate(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  size_t sVar10;
  longlong lVar9;
  char *text;
  ulonglong uVar11;
  int iVar12;
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
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  GPiece<4> auStack_e8;
  GPiece<4> auStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  GPiece<32> local_d0;
  
  uVar11 = 0;
  do {
    GetMobyJointsWorldPos(moby,3,local_d0,&local_120);
    fVar1 = local_110 - local_120;
    fVar3 = local_10c - local_11c;
    fVar6 = local_108 - local_118;
    iVar12 = (int)((uVar11 & 0xffffffff) << 4);
    dVar24 = 0.0;
    fVar2 = local_100 - local_120;
    fVar5 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar6 * fVar6);
    fVar4 = local_fc - local_11c;
    fVar7 = local_f8 - local_118;
    if (fVar5 == 0.0) {
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    else {
      local_128 = *(float *)(&DAT_0073a57c + iVar12) / fVar5;
      local_130 = local_128 * fVar1;
      local_12c = local_128 * fVar3;
      local_128 = local_128 * fVar6;
    }
    uVar25 = 0x4000000000000000;
    local_140 = local_120 + local_130;
    local_13c = local_11c + local_12c;
    local_138 = local_118 + local_128;
    dVar15 = dVar24;
    dVar32 = dVar24;
    dVar18 = dVar24;
    if (fVar5 != 0.0) {
      fVar5 = (fVar5 - *(float *)(&DAT_0073a584 + iVar12) * 2.0) / fVar5;
      dVar15 = (double)(fVar5 * fVar6);
      dVar32 = (double)(fVar5 * fVar3);
      dVar18 = (double)(fVar5 * fVar1);
    }
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar7 * fVar7);
    if (fVar1 != 0.0) {
      local_128 = *(float *)(&DAT_0073a580 + iVar12) / fVar1;
      local_130 = local_128 * fVar2;
      local_12c = local_128 * fVar4;
      local_128 = local_128 * fVar7;
    }
    else {
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    local_140 = local_140 + local_130;
    dVar28 = (double)local_140;
    local_13c = local_13c + local_12c;
    dVar27 = (double)local_13c;
    local_138 = local_138 + local_128;
    dVar26 = (double)local_138;
    dVar29 = dVar24;
    dVar21 = dVar24;
    dVar16 = dVar24;
    if (fVar1 != 0.0) {
      fVar1 = (fVar1 - *(float *)(&DAT_0073a588 + iVar12) * 2.0) / fVar1;
      dVar29 = (double)(fVar1 * fVar7);
      dVar21 = (double)(fVar1 * fVar4);
      dVar16 = (double)(fVar1 * fVar2);
    }
    ProjectBoxToScreen(CONCAT44(local_140,local_13c),CONCAT44(local_138,local_114),
                       CONCAT44((float)((double)(float)(dVar28 + dVar18) + dVar16),
                                (float)((double)(float)(dVar27 + dVar32) + dVar21)),
                       CONCAT44((float)((double)(float)(dVar26 + dVar15) + dVar29),local_114),
                       &local_f0,&local_ec,auStack_e8,auStack_e4);
    if ((DAT_00e5a944 != '\0') || (DAT_00e5a94c != '\0')) {
      dVar13 = 1.0;
      dVar20 = dVar13;
      dVar14 = dVar21;
      dVar30 = dVar16;
      dVar31 = dVar15;
      dVar17 = dVar32;
      dVar19 = dVar18;
      if (DAT_00e5a94c != '\0') {
        dVar14 = (double)FastIntToDouble(8 - DAT_00e5a948);
        dVar13 = (double)(float)(dVar14 * 0.125);
        dVar14 = dVar21;
        dVar30 = dVar16;
        dVar31 = dVar15;
        dVar17 = dVar32;
        dVar19 = dVar18;
      }
      if (DAT_00e5a944 != '\0') {
        dVar15 = (double)FastIntToDouble(DAT_00e5a940);
        dVar13 = (double)(float)(dVar15 * 0.125);
      }
      dVar21 = (double)SQRT((float)(dVar19 * dVar19) + (float)(dVar17 * dVar17) +
                            (float)(dVar31 * dVar31));
      dVar15 = dVar24;
      dVar32 = dVar24;
      dVar18 = dVar24;
      if (dVar21 != dVar24) {
        dVar18 = (double)(float)((double)((float)(dVar21 * (double)(float)(dVar20 - dVar13)) * 0.5)
                                / dVar21);
        dVar15 = dVar18 * dVar19;
        dVar32 = dVar18 * dVar17;
        dVar18 = dVar18 * dVar31;
      }
      local_128 = (float)dVar18;
      local_12c = (float)dVar32;
      local_130 = (float)dVar15;
      dVar15 = dVar24;
      dVar32 = dVar24;
      dVar18 = dVar24;
      if (dVar21 != dVar24) {
        dVar18 = (double)(float)((double)(float)(dVar13 * dVar21) / dVar21);
        dVar15 = (double)(float)(dVar18 * dVar31);
        dVar32 = (double)(float)(dVar18 * dVar17);
        dVar18 = (double)(float)(dVar18 * dVar19);
      }
      dVar19 = (double)local_130;
      dVar22 = (double)local_12c;
      dVar23 = (double)local_128;
      dVar17 = (double)SQRT((float)(dVar30 * dVar30) + (float)(dVar14 * dVar14) +
                            (float)(dVar29 * dVar29));
      dVar21 = dVar24;
      dVar16 = dVar24;
      dVar31 = dVar24;
      if (dVar17 != dVar24) {
        dVar20 = (double)(float)((double)((float)(dVar17 * (double)(float)(dVar20 - dVar13)) * 0.5)
                                / dVar17);
        dVar21 = dVar20 * dVar30;
        dVar16 = dVar20 * dVar14;
        dVar31 = dVar20 * dVar29;
      }
      local_128 = (float)dVar31;
      local_12c = (float)dVar16;
      local_130 = (float)dVar21;
      dVar21 = dVar24;
      dVar16 = dVar24;
      if (dVar17 != dVar24) {
        dVar16 = (double)(float)((double)(float)(dVar13 * dVar17) / dVar17);
        dVar24 = (double)(float)(dVar16 * dVar29);
        dVar21 = (double)(float)(dVar16 * dVar14);
        dVar16 = (double)(float)(dVar16 * dVar30);
      }
      local_140 = (float)(dVar28 + dVar19) + local_130;
      local_13c = (float)(dVar27 + dVar22) + local_12c;
      local_138 = (float)(dVar26 + dVar23) + local_128;
      dVar29 = dVar24;
    }
    ProjectBoxToScreen(CONCAT44(local_140,local_13c),CONCAT44(local_138,local_114),
                       CONCAT44((float)((double)(float)((double)local_140 + dVar16) + dVar18),
                                (float)((double)(float)((double)local_13c + dVar21) + dVar32)),
                       CONCAT44((float)((double)(float)((double)local_138 + dVar29) + dVar15),
                                local_114),&local_e0,&local_dc,&local_d8,&local_d4);
    Vendor_SetupScreenRender(0x3ff0000000000000,9,7);
    STUB_00078138(0x200,0x200);
    uVar8 = idol_draw::PackCmd(0,1,2,1,0xff);
    SetGSReg(3,uVar8);
    iVar12 = (int)uVar11;
    if (iVar12 == 5) {
      DrawWeaponIcons(moby);
    }
    else if (iVar12 == 4) {
      DrawExitButton(moby);
    }
    else if (iVar12 == 3) {
      DrawBuyButton(moby,(int)local_e0,(int)local_dc);
    }
    else if (iVar12 == 2) {
      DrawVendorDude(moby);
    }
    else if (iVar12 == 1) {
      DrawWeaponStrings(moby);
    }
    else if (iVar12 == 0) {
      STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
      if ((g_JapaneseMode != false) && (DAT_0071efb4 = DAT_0073a578, (g_MainLoopFrames & 0x1f) < 0x10))
      {
        DAT_0071efb4 = DAT_0073a578 & 0xffffff;
      }
      sVar10 = strlen(DAT_00e5a67c);
      if ((int)(sVar10 - DAT_00e5a694 / 0x14) < 1) {
        lVar9 = MB_randInt(0x18);
        text = (char *)help_msg_string_by_index
                                 (*(StringId *)(&DAT_0073a318 + (int)(lVar9 << 2)));
        Vendor_SetScrollText(text);
      }
      else {
        DAT_00e5a694 = DAT_00e5a694 + 2;
      }
      if (g_JapaneseMode == false) {
        DrawVendorHintFrame(uVar25,DAT_00e5a67c,-DAT_00e5a694,8);
      }
      else {
        FontPrint_unk((double)(longlong)-DAT_00e5a694,0x401c000000000000,0x3ff4000000000000,
                            &DAT_00172c20,0x740000,DAT_0073a578,DAT_00e5a67c,0xffffffffffffffff);
      }
      STUB_0007813c(0,0,4,0x40,0x200,0x80,0);
      STUB_0007813c(0xe2,0,0xe6,0x40,0x200,0x80,0);
    }
    Vendor_DrawFlickerText((double)local_e0,(double)local_dc,uVar11);
    ResetHUDPass();
    uVar25 = idol_draw::PackCmd(0,1,2,1,0xff);
    SetGSReg(3,uVar25);
    uVar25 = FUN_00502f08(1,1,0,0,0,0);
    SetGSReg(6,uVar25);
    STUB_001754c0();
    if (Cutscene == 0) {
      Sprite_DrawShape
                ((int)local_d8,(int)local_d4,(int)local_e0,(int)local_dc,0,0,(int)(local_f0 * 0.5),
                 (int)(local_ec * 0.5));
    }
    else {
      uVar25 = FastDoubleToInt((double)(local_ec * 0.92857146 * 0.5));
      Sprite_DrawShape
                ((int)local_d8,(int)local_d4,(int)local_e0,(int)local_dc,0,0,(int)(local_f0 * 0.5),
                 uVar25);
    }
    uVar11 = (ulonglong)(iVar12 + 1);
  } while (iVar12 + 1 < 6);
  return;
}


// 0x0173690 (0x4bc bytes)
void Vendor_DrawMobyHighlight(undefined8 param_1)

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
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  GPiece<144> local_160;
  GPiece<4> auStack_d0;
  GPiece<4> auStack_cc;
  GPiece<4> auStack_c8;
  GPiece<4> auStack_c4;
  GPiece<24> local_c0;
  
  iVar17 = 1;
  iVar16 = 0x10;
  do {
    GetMobyJointsWorldPos(param_1,3,local_c0,&local_190);
    fVar1 = local_180 - local_190;
    fVar3 = local_17c - local_18c;
    fVar5 = local_178 - local_188;
    fVar8 = 0.0;
    fVar2 = local_170 - local_190;
    fVar4 = local_16c - local_18c;
    fVar6 = local_168 - local_188;
    fVar7 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5);
    if (fVar7 == 0.0) {
      local_198 = 0.0;
      local_19c = 0.0;
      local_1a0 = 0.0;
    }
    else {
      local_198 = *(float *)(&DAT_0073a57c + iVar16) / fVar7;
      local_1a0 = local_198 * fVar1;
      local_19c = local_198 * fVar3;
      local_198 = local_198 * fVar5;
    }
    fVar14 = local_198;
    fVar13 = local_19c;
    fVar12 = local_1a0;
    fVar9 = fVar8;
    fVar10 = fVar8;
    fVar11 = fVar8;
    if (fVar7 != 0.0) {
      fVar7 = (fVar7 - *(float *)(&DAT_0073a584 + iVar16) * 2.0) / fVar7;
      fVar9 = fVar7 * fVar1;
      fVar10 = fVar7 * fVar5;
      fVar11 = fVar7 * fVar3;
    }
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
    if (fVar1 != 0.0) {
      local_198 = *(float *)(&DAT_0073a580 + iVar16) / fVar1;
      local_1a0 = local_198 * fVar2;
      local_19c = local_198 * fVar4;
      local_198 = local_198 * fVar6;
    }
    else {
      local_198 = 0.0;
      local_19c = 0.0;
      local_1a0 = 0.0;
    }
    fVar3 = fVar8;
    fVar5 = fVar8;
    if (fVar1 != 0.0) {
      fVar1 = (fVar1 - *(float *)(&DAT_0073a588 + iVar16) * 2.0) / fVar1;
      fVar8 = fVar1 * fVar6;
      fVar3 = fVar1 * fVar4;
      fVar5 = fVar1 * fVar2;
    }
    local_1a0 = local_190 + fVar12 + local_1a0;
    local_198 = local_188 + fVar14 + local_198;
    local_19c = local_18c + fVar13 + local_19c;
    ProjectBoxToScreen(CONCAT44(local_1a0,local_19c),CONCAT44(local_198,local_184),
                       CONCAT44(local_1a0 + fVar9 + fVar5,local_19c + fVar11 + fVar3),
                       CONCAT44(local_198 + fVar10 + fVar8,local_184),auStack_d0,auStack_cc,
                       auStack_c8,auStack_c4);
    FUN_00502f08(1,1,0,0,0,0);
    STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
    idol_draw::PackCmd(0,1,0,1,0x80);
    GetEffectTex(0x19);
    uVar15 = idol_draw::Blend(1,1,0,2,0,0,1,1);
    SetGSReg(0x16,uVar15);
    FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
    iVar17 = iVar17 + 1;
    iVar16 = iVar16 + 0x10;
  } while (iVar17 < 6);
  return;
}


// 0x0173b60 (0x40c bytes)
void Vendor_DrawScreen(undefined8 param_1)

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
  RenderingStep *pRVar15;
  undefined8 uVar16;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  GPiece<40> local_70;
  
  GetMobyJointsWorldPos(param_1,3,local_70,&local_b0);
  fVar3 = local_a0 - local_b0;
  fVar11 = local_9c - local_ac;
  fVar12 = local_98 - local_a8;
  fVar2 = 0.0;
  fVar4 = local_90 - local_b0;
  fVar13 = local_8c - local_ac;
  fVar1 = SQRT(fVar3 * fVar3 + fVar11 * fVar11 + fVar12 * fVar12);
  fVar14 = local_88 - local_a8;
  fVar5 = fVar2;
  fVar6 = fVar2;
  fVar7 = fVar2;
  if (fVar1 != 0.0) {
    fVar7 = 0.03 / fVar1;
    fVar5 = fVar7 * fVar3;
    fVar6 = fVar7 * fVar12;
    fVar7 = fVar7 * fVar11;
  }
  fVar8 = fVar2;
  fVar9 = fVar2;
  fVar10 = fVar2;
  if (fVar1 != 0.0) {
    fVar1 = (fVar1 - 0.06) / fVar1;
    fVar8 = fVar1 * fVar12;
    fVar9 = fVar1 * fVar11;
    fVar10 = fVar1 * fVar3;
  }
  fVar1 = SQRT(fVar4 * fVar4 + fVar13 * fVar13 + fVar14 * fVar14);
  fVar3 = fVar2;
  fVar11 = fVar2;
  fVar12 = fVar2;
  if (fVar1 != 0.0) {
    fVar12 = 0.04 / fVar1;
    fVar3 = fVar12 * fVar14;
    fVar11 = fVar12 * fVar13;
    fVar12 = fVar12 * fVar4;
  }
  fVar12 = local_b0 + fVar5 + fVar12;
  fVar11 = local_ac + fVar7 + fVar11;
  fVar3 = local_a8 + fVar6 + fVar3;
  fVar5 = fVar2;
  fVar6 = fVar2;
  if (fVar1 != 0.0) {
    fVar1 = (fVar1 - 0.04) / fVar1;
    fVar2 = fVar1 * fVar14;
    fVar5 = fVar1 * fVar13;
    fVar6 = fVar1 * fVar4;
  }
  ProjectBoxToScreenInt
            (CONCAT44(fVar12,fVar11),CONCAT44(fVar3,local_a4),
             CONCAT44(fVar12 + fVar6 + fVar10,fVar11 + fVar5 + fVar9),
             CONCAT44(fVar3 + fVar2 + fVar8,local_a4),&local_80,&local_7c,&local_78,&local_74);
  Vendor_SetupScreenRender(0x3ff0000000000000,9,9);
  STUB_00078138(0x200,0x200);
  pRVar15 = HUD_Pass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  Vendor_DrawItemInfo(param_1,local_80,local_7c);
  Vendor_DrawFlickerText((double)(longlong)(int)local_80,(double)(longlong)(int)local_7c,6);
  ResetHUDPass();
  STUB_00078138(0x200,0x200);
  pRVar15 = HUD_Pass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  pRVar15 = MobyPass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  MB_AddToDrawList(param_1,1);
  Sprite_DrawShape
            (local_78,local_74,local_80,local_7c,0,0,
             ((int)local_80 >> 1) + (uint)((int)local_80 < 0 && (local_80 & 1) != 0),
             ((int)local_7c >> 1) + (uint)((int)local_7c < 0 && (local_7c & 1) != 0));
  return;
}


// 0x0173f78 (0x574 bytes)
// strings: 0073a618: '?fff' (raw)

void Vendor_DrawScrollingOverlay(void)

{
  int iVar1;
  GPiece<144> local_130;
  
  DAT_0073a7dc = DAT_0073a7dc + 0.01;
  if (1.0 < DAT_0073a7dc) {
    DAT_0073a7dc = DAT_0073a7dc - 1.0;
  }
  iVar1 = 0;
  FUN_00502f08(0,0,0,0,0,0);
  STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  idol_draw::PackCmd(0,1,0,1,0x40);
  GetEffectTex(0x18);
  do {
    FastDrawQuad(local_130,0,1,EffectTexHeaders,9);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


// 0x01744f0 (0x61c bytes)
// strings: 00653fb0: 'rc1/ps3data/global/vendor.ps3' | 00653fd0: 'rc1/ps3data/global/vendor_pal.ps3'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Vendor_PostUpdate(void)

{
  RsxCmd *pRVar1;
  RsxCmd *pRVar2;
  MobyModeBit *pMVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  int iVar6;
  MobyInstance *pMVar9;
  longlong lVar7;
  undefined8 uVar8;
  char acStack_70 [64];
  
  if (g_CutscenePlaying != 0) {
    return;
  }
  STUB_00078100();
  iVar6 = DAT_00e5a65c;
  if (DAT_00e5a658 < 1) {
    if (DAT_00e5a658 < 0) {
      return;
    }
    if (DAT_00e5a65c != 0) {
      DAT_00e5a66c->modeBits = DAT_00e5a66c->modeBits | DISABLED;
    }
    g_RenderFlags = 0x100ff;
    if ((iVar6 != 0) || (g_OpenVendorState == 3)) {
      g_RenderFlags = 0x7f;
    }
    DefaultDraw();
    if (DAT_00e5a65c == 0) {
      return;
    }
    DAT_00e5a65c = 0;
    DAT_00e5a658 = 1;
    g_MainLoopFrames = g_MainLoopFrames + 1;
    DAT_00e5aa64 = 0x60000;
    Draw_FlushAndPresent();
    iVar6 = g_lastVendorWasPda;
    pMVar9 = DAT_00e5a66c;
    pMVar3 = &DAT_00e5a66c->modeBits;
    DAT_00e5a66c->scale = 0.141908;
    pMVar9->modeBits =
         *pMVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    if (iVar6 == 0) {
      fRam00e5a96c = GameCamera.orientMtx.forward.w;
      fRam00e5a968 = GameCamera.orientMtx.forward.z;
      fRam00e5a964 = GameCamera.orientMtx.forward.y;
      _DAT_00e5a960 = GameCamera.orientMtx.forward.x;
      fRam00e5a97c = GameCamera.orientMtx.right.w;
      fRam00e5a978 = GameCamera.orientMtx.right.z;
      fRam00e5a974 = GameCamera.orientMtx.right.y;
      _DAT_00e5a970 = GameCamera.orientMtx.right.x;
      GameCamera.orientMtx.right.x =
           GameCamera.orientMtx.up.y * GameCamera.orientMtx.forward.z -
           GameCamera.orientMtx.up.z * GameCamera.orientMtx.forward.y;
      fRam00e5a98c = GameCamera.orientMtx.up.w;
      fRam00e5a988 = GameCamera.orientMtx.up.z;
      fRam00e5a984 = GameCamera.orientMtx.up.y;
      _DAT_00e5a980 = GameCamera.orientMtx.up.x;
      GameCamera.orientMtx.right.y =
           GameCamera.orientMtx.up.z * GameCamera.orientMtx.forward.x -
           GameCamera.orientMtx.up.x * GameCamera.orientMtx.forward.z;
      GameCamera.orientMtx.right.z =
           GameCamera.orientMtx.up.x * GameCamera.orientMtx.forward.y -
           GameCamera.orientMtx.up.y * GameCamera.orientMtx.forward.x;
      GameCamera.orientMtx.right.w = 0.0;
    }
    else {
      DAT_00e5a6c0 = GameCamera.rot.azimuth;
      DAT_00e5a6c4 = GameCamera.rot.elevation;
      DAT_00e5a6c8 = GameCamera.rot.radius;
      DAT_00e5a6cc[0] = GameCamera.field10_0x15c[0];
      DAT_00e5a6cc[1] = GameCamera.field10_0x15c[1];
      DAT_00e5a6cc[2] = GameCamera.field10_0x15c[2];
      DAT_00e5a6cc[3] = GameCamera.field10_0x15c[3];
      fRam00e5a96c = GameCamera.orientMtx.forward.w;
      fRam00e5a968 = GameCamera.orientMtx.forward.z;
      fRam00e5a964 = GameCamera.orientMtx.forward.y;
      _DAT_00e5a960 = GameCamera.orientMtx.forward.x;
      fRam00e5a97c = GameCamera.orientMtx.right.w;
      fRam00e5a978 = GameCamera.orientMtx.right.z;
      fRam00e5a974 = GameCamera.orientMtx.right.y;
      _DAT_00e5a970 = GameCamera.orientMtx.right.x;
      fRam00e5a98c = GameCamera.orientMtx.up.w;
      fRam00e5a988 = GameCamera.orientMtx.up.z;
      fRam00e5a984 = GameCamera.orientMtx.up.y;
      _DAT_00e5a980 = GameCamera.orientMtx.up.x;
      memset(0x951710,0,0x10);
      memset(0x951720,0,0x10);
      memset(0x951730,0,0x10);
      GameCamera.orientMtx.forward.x = 1.0;
      GameCamera.orientMtx.right.y = 1.0;
      GameCamera.orientMtx.up.z = 1.0;
      GameCamera.orientMtx.up.w = 1.0;
      ComposeCameraMatrix();
    }
    DAT_00e5a670 = (MobyInstance *)(DAT_00e5a664 + 0x100);
    InitMobyInstance(DAT_00e5a670,0xd);
    pMVar9 = DAT_00e5a670;
    DAT_00e5a670->drawDistance = 0x40;
    UpdateMobyTransform(pMVar9);
    MB_SetLights(DAT_00e5a670,0x202020,0xe,0xe,0);
    InitMobyInstance(DAT_00e5a670 + 5,0xd);
    pMVar9 = DAT_00e5a670 + 5;
    DAT_00e5a670[5].drawDistance = 0x40;
    UpdateMobyTransform(pMVar9);
    MB_SetLights(DAT_00e5a670 + 5,0x202020,0xe,0xe,0);
    piVar5 = g_viewMtxPtr;
    if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
      (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
    }
    piVar5[0x6a3] = piVar5[0x6a3] + 2;
    Vendor_SpawnPreviewMoby();
    DAT_00e5a67c = DAT_00e5a664 + 0x1400;
    FastMemSetZero(DAT_00e5a67c,0x400);
    DAT_00e5a668 = DAT_00e5a67c + 0x400;
    if (Music == 0) {
      if (g_IsPal == 0) {
        snprintf(acStack_70,"rc1/ps3data/global/vendor_pal.ps3");
      }
      else {
        snprintf(acStack_70,"rc1/ps3data/global/vendor.ps3");
      }
      lVar7 = LoadAssetFromFile(acStack_70,DAT_00e5a668,0xffffffffffffffff);
      DAT_00e5a9d1 = lVar7 != 0;
    }
    else {
      DAT_00e5a9d1 = 0;
    }
  }
  else if (1 < DAT_00e5a658) {
    return;
  }
  DrawRenderTargetToScreen(DAT_00e5a660);
  pRVar1 = DepthPass->command;
  DepthPass->command = pRVar1 + 2;
  pRVar4 = DepthPass;
  pRVar2 = DepthPass->command;
  *pRVar1 = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar4->command = pRVar2 + 2;
  pRVar1[1] = 0xffffff00;
  *pRVar2 = NV4097_CLEAR_SURFACE_x1;
  pRVar2[1] = 1;
  pRVar2[2] = NV4097_NO_OPERATION_x1;
  pRVar1 = pRVar4->command;
  pRVar1[1] = 0;
  pRVar4->command = pRVar1 + 2;
  STUB_0006d704();
  ComposeCameraMatrix();
  STUB_0006849c();
  DrawMobyDepth();
  STUB_000f1844();
  STUB_000f1848();
  if (DAT_00e5a9d3 == '\0' && g_lastVendorWasPda == 0) {
    if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
      if (*(int *)(&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40) != 0) {
        MB_AddToDrawList(DAT_00e5a670 + 2,1);
      }
    }
    else {
      MB_AddToDrawList(DAT_00e5a670 + 3,1);
    }
  }
  MB_AddToDrawList(DAT_00e5a66c,1);
  if (g_lastVendorWasPda == 0) {
    Vendor_DrawScrollingOverlay();
  }
  Vendor_HudUpdate(DAT_00e5a66c);
  if (g_VendorMenuState != 0) {
    Vendor_DrawScreen(DAT_00e5a670 + 4);
  }
  Vendor_DrawMobyHighlight(DAT_00e5a66c);
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar8);
  DrawGameplayHud();
  STUB_0006d708();
  STUB_000f184c();
  DrawMobyList();
  STUB_00174cf4(0x10);
  STUB_000f1448();
  return;
}



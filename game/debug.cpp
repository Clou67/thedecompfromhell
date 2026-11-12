// game/debug.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 77 functions, 0x609f0-0x6565c
#include <stdio.h>
#include <string.h>
#include "game/debug.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x00609f0 (0xa0 bytes)
void SECTION_HEADER_DEBUG(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  DAT_0071eb14 = 0x10000;
  do {
    iVar2 = 0;
    iVar1 = 0x100;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 4) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 8) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0xc) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0x10) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0x14) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0x18) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0x1c) = 0;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar3 + 0x20) = 0;
    do {
      iVar1 = iVar1 + -1;
      puVar5 = (undefined4 *)(iVar3 + 0x9540e8 + iVar2);
      iVar2 = iVar2 + 0xc;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    } while (iVar1 != 0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0xc28;
  } while (iVar4 < 8);
  return;
}


// 0x0060a90 (0x30 bytes)
void ResetDebugEnables(void)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = g_DebugEnables;
  lVar2 = 5;
  do {
    *piVar1 = 1;
    piVar1[1] = 1;
    piVar1[2] = 1;
    piVar1[3] = 1;
    piVar1 = piVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x0060ac0 (0x8c bytes)
// strings: 0095a5bc: 'None'

void DebugFontPrintLeft(int x,int y,uint color,char *str)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  
  iVar2 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  g_DebugFontStrings[g_DebugFontNumStrings].x = x;
  pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar1->y = y;
  g_DebugFontStrings[iVar2].color = color;
  g_DebugFontStrings[iVar2].str = __s;
  iVar2 = snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar2 + 1;
  return;
}


// 0x0060b4c (0xf4 bytes)
// strings: 0095a5bc: 'None'


void DebugFontPrintfLeft(int x,int y,int color,char *fmt,...)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  GPiece<512> auStack_230;
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(auStack_230,fmt,&stack0x00000050);
  iVar2 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar1->x = x;
  g_DebugFontStrings[iVar2].y = y;
  g_DebugFontStrings[iVar2].color = color;
  g_DebugFontStrings[iVar2].str = __s;
  iVar2 = snprintf(__s,"%s",auStack_230);
  g_pDebugFontBufPos = __s + iVar2 + 1;
  return;
}


// 0x0060c40 (0x4 bytes)
void STUB_00060c40(...)

{
  return;
}


// 0x0060c44 (0x20 bytes)
// strings: 0095a5bc: 'None'


void ResetDebugFontStrings(void)

{
  g_DebugFontNumStrings = 0;
  g_pDebugFontBufPos = g_DebugFontStringBuf;
  return;
}


// 0x0060c64 (0x124 bytes)
// strings: 0095a5bc: 'None'

int DebugFontPrintCenter(int x,int y,int color,char *str)

{
  byte bVar1;
  ulonglong uVar2;
  DebugFontString *pDVar3;
  byte *pbVar4;
  undefined *__s;
  int iVar5;
  int iVar6;
  
  __s = g_pDebugFontBufPos;
  iVar5 = 0;
  bVar1 = *str;
  pbVar4 = (byte *)str;
  while (bVar1 != 0) {
    uVar2 = (ulonglong)*pbVar4 - 0x20 & 0xff;
    iVar5 = iVar5 + *(int *)((int)g_DebugFontCharWidths +
                            (int)((((longlong)(uVar2 - 0x60) >> 0x3f & uVar2 - 0x20) + 0x20 &
                                  0xffffffff) << 2));
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  iVar5 = x - (iVar5 >> 1);
  g_DebugFontStrings[g_DebugFontNumStrings].x = iVar5;
  g_DebugFontStrings[g_DebugFontNumStrings].y = y;
  g_DebugFontStrings[g_DebugFontNumStrings].color = color;
  pDVar3 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar3->str = __s;
  iVar6 = snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar6 + 1;
  return iVar5;
}


// 0x0060d88 (0x168 bytes)
// strings: 0095a5bc: 'None'


int DebugFontPrintfCenter(int x,int y,int color,char *fmt,...)

{
  byte *pbVar1;
  ulonglong uVar2;
  DebugFontString *pDVar3;
  undefined *__s;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  byte local_230 [512];
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(local_230,fmt,&stack0x00000050);
  __s = g_pDebugFontBufPos;
  iVar4 = 0;
  pbVar6 = local_230;
  if (local_230[0] != 0) {
    do {
      pbVar1 = pbVar6 + 1;
      uVar2 = (ulonglong)*pbVar6 - 0x20 & 0xff;
      iVar4 = iVar4 + *(int *)((int)g_DebugFontCharWidths +
                              (int)((((longlong)(uVar2 - 0x60) >> 0x3f & uVar2 - 0x20) + 0x20 &
                                    0xffffffff) << 2));
      pbVar6 = pbVar6 + 1;
    } while (*pbVar1 != 0);
  }
  iVar4 = x - (iVar4 >> 1);
  g_DebugFontStrings[g_DebugFontNumStrings].x = iVar4;
  g_DebugFontStrings[g_DebugFontNumStrings].y = y;
  g_DebugFontStrings[g_DebugFontNumStrings].color = color;
  pDVar3 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar3->str = __s;
  iVar5 = snprintf(__s,"%s",local_230);
  g_pDebugFontBufPos = __s + iVar5 + 1;
  return iVar4;
}


// 0x0060ef0 (0x110 bytes)
// strings: 0095a5bc: 'None'


void DebugFontPrintRight(int x,int y,int color,char *str)

{
  byte bVar1;
  DebugFontString *pDVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined *__s;
  int iVar5;
  int iVar6;
  
  iVar5 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  iVar6 = 0;
  bVar1 = *str;
  pbVar4 = (byte *)str;
  while (bVar1 != 0) {
    uVar3 = (ulonglong)*pbVar4 - 0x20 & 0xff;
    iVar6 = iVar6 + *(int *)((int)g_DebugFontCharWidths +
                            (int)((((longlong)(uVar3 - 0x60) >> 0x3f & uVar3 - 0x20) + 0x20 &
                                  0xffffffff) << 2));
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  pDVar2 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar2->x = x - iVar6;
  g_DebugFontStrings[iVar5].y = y;
  g_DebugFontStrings[iVar5].color = color;
  g_DebugFontStrings[iVar5].str = __s;
  iVar6 = snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar6 + 1;
  return;
}


// 0x0061000 (0x154 bytes)
// strings: 0095a5bc: 'None'


void DebugFontPrintfRight(int x,int y,int color,char *fmt,...)

{
  byte *pbVar1;
  DebugFontString *pDVar2;
  ulonglong uVar3;
  undefined *__s;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  byte local_230 [520];
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(local_230,fmt,&stack0x00000050);
  iVar4 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  iVar5 = 0;
  pbVar6 = local_230;
  if (local_230[0] != 0) {
    do {
      pbVar1 = pbVar6 + 1;
      uVar3 = (ulonglong)*pbVar6 - 0x20 & 0xff;
      iVar5 = iVar5 + *(int *)((int)g_DebugFontCharWidths +
                              (int)((((longlong)(uVar3 - 0x60) >> 0x3f & uVar3 - 0x20) + 0x20 &
                                    0xffffffff) << 2));
      pbVar6 = pbVar6 + 1;
    } while (*pbVar1 != 0);
  }
  pDVar2 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar2->x = x - iVar5;
  g_DebugFontStrings[iVar4].y = y;
  g_DebugFontStrings[iVar4].color = color;
  g_DebugFontStrings[iVar4].str = __s;
  iVar4 = snprintf(__s,"%s",local_230);
  g_pDebugFontBufPos = __s + iVar4 + 1;
  return;
}


// 0x0061154 (0x4c bytes)
int DebugFontStringWidth(char *str)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = *str;
  while (bVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)g_DebugFontCharWidths + (((byte)*str - 0x20) * 4 & 0x3fc));
    bVar1 = ((byte *)str)[1];
    str = (char *)((byte *)str + 1);
  }
  return iVar2;
}


// 0x00611a0 (0xf0 bytes)
// strings: 0095a5bc: 'None'


void DebugFontPrintN(int x,int y,int color,char *str,int len)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  GPiece<128> auStack_b0;
  
  if (0 < len) {
    memcpy(auStack_b0,str,len);
    iVar2 = g_DebugFontNumStrings;
    auStack_b0[len] = 0;
    __s = g_pDebugFontBufPos;
    g_DebugFontStrings[g_DebugFontNumStrings].x = x;
    pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
    g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
    pDVar1->y = y;
    g_DebugFontStrings[iVar2].color = color;
    g_DebugFontStrings[iVar2].str = __s;
    iVar2 = snprintf(__s,"%s",auStack_b0);
    g_pDebugFontBufPos = __s + iVar2 + 1;
  }
  return;
}


// 0x0061290 (0x40 bytes)
// strings: 00651be4: 'assertion "%s" failed: file "%s", line %d\n'


void AssertFailed(char *file,int line,char *expr)

{
  undefined8 in_LR;
  
  printf("assertion \"%s\" failed: file \"%s\", line %d\n",expr,file,line);
  trapWord(0x1f,in_LR,in_LR);
  return;
}


// 0x00612d0 (0x4 bytes)
void STUB_000612d0(...)

{
  return;
}


// 0x00612d4 (0x4 bytes)
void STUB_000612d4(...)

{
  return;
}


// 0x00612d8 (0x4 bytes)
void STUB_000612d8(...)

{
  return;
}


// 0x00612dc (0x4 bytes)
void STUB_000612dc(...)

{
  return;
}


// 0x00612e0 (0x4 bytes)
void STUB_000612e0(...)

{
  return;
}


// 0x00612e4 (0x4 bytes)
void STUB_000612e4(...)

{
  return;
}


// 0x00612e8 (0x4 bytes)
void STUB_000612e8(...)

{
  return;
}


// 0x00612ec (0x4 bytes)
void STUB_000612ec(...)

{
  return;
}


// 0x00612f0 (0x4 bytes)
void STUB_000612f0(...)

{
  return;
}


// 0x00612f4 (0x4 bytes)
void STUB_000612f4(...)

{
  return;
}


// 0x00612f8 (0x4 bytes)
void STUB_000612f8(...)

{
  return;
}


// 0x00612fc (0x4 bytes)
void STUB_000612fc(...)

{
  return;
}


// 0x0061300 (0x4 bytes)
void STUB_00061300(...)

{
  return;
}


// 0x0061304 (0x4 bytes)
void STUB_00061304(...)

{
  return;
}


// 0x0061308 (0x4 bytes)
void STUB_00061308(...)

{
  return;
}


// 0x006130c (0x4 bytes)
void STUB_0006130c(...)

{
  return;
}


// 0x0061310 (0x4 bytes)
void STUB_00061310(...)

{
  return;
}


// 0x0061314 (0x4 bytes)
void STUB_00061314(...)

{
  return;
}


// 0x0061318 (0x4 bytes)
void STUB_00061318(...)

{
  return;
}


// 0x006131c (0x4 bytes)
void STUB_0006131c(...)

{
  return;
}


// 0x0061320 (0x4 bytes)
void STUB_00061320(...)

{
  return;
}


// 0x0061324 (0x4 bytes)
void STUB_00061324(...)

{
  return;
}


// 0x0061328 (0x4 bytes)
void STUB_00061328(...)

{
  return;
}


// 0x006132c (0x4 bytes)
void STUB_0006132c(...)

{
  return;
}


// 0x0061330 (0x4 bytes)
void STUB_00061330(...)

{
  return;
}


// 0x0061334 (0x4 bytes)
void STUB_00061334(...)

{
  return;
}


// 0x0061338 (0x4 bytes)
void STUB_00061338(...)

{
  return;
}


// 0x006133c (0x4 bytes)
void STUB_0006133c(...)

{
  return;
}


// 0x0061340 (0x4 bytes)
void STUB_00061340(...)

{
  return;
}


// 0x0061344 (0x4 bytes)
void STUB_00061344(...)

{
  return;
}


// 0x0061348 (0x4 bytes)
void STUB_00061348(...)

{
  return;
}


// 0x006134c (0x4 bytes)
void STUB_0006134c(...)

{
  return;
}


// 0x0061350 (0x4 bytes)
void STUB_00061350(...)

{
  return;
}


// 0x0061354 (0x4 bytes)
void STUB_00061354(...)

{
  return;
}


// 0x00613a0 (0x11d4 bytes)
// inlined: FastRSqrt @0x622fc, FastRSqrt @0x6237c, FastRSqrt @0x623f8
void DebugCamera(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
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
  void *pvVar14;
  short sVar15;
  double dVar16;
  float local_270 [16];
  Vec4 aVStack_230 [4];
  float local_1f0 [16];
  Vec4 aVStack_1b0 [4];
  float afStack_170 [16];
  GPiece<64> auStack_130;
  Vec4 aVStack_f0 [4];
  Vec4 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  
  bVar3 = false;
  if ((g_Pad.downButtons & START) != 0) {
    return;
  }
  if ((DebugUpdate & UPDATE_CAMERA) != NONE) {
    UpdateAllCameras();
  }
  sVar15 = g_onMagnerail;
  if (g_Pad.unk0d8 != 0) {
    return;
  }
  bVar1 = (g_Pad.downButtons & L2) == 0;
  bVar2 = g_onMagnerail != 2;
  if ((bVar1) || ((g_Pad.downButtons & R2) == 0)) {
    if ((g_Pad.downButtons & UP) != 0) {
      if (bVar2) {
        fVar4 = GameCamera.rot.radius + 1.5707963;
        fVar5 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar5 = GameCamera.rot.radius;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar4 = fVar7 * fVar7;
        fVar8 = fVar5 * fVar5;
        fVar6 = fVar4 * fVar4 * fVar7;
        fVar9 = fVar8 * fVar8 * fVar5;
        fVar11 = fVar4 * fVar6;
        fVar10 = fVar8 * fVar9;
        fVar6 = (fVar4 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7)
                * DebugCameraSpeed.horizontal;
        fVar4 = (fVar8 * fVar10 * 2.601887e-06 +
                fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5)
                * DebugCameraSpeed.horizontal;
      }
      else {
        fVar4 = 0.0;
        fVar8 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        fVar5 = DebugCameraSpeed.horizontal / fVar8;
        fVar7 = fVar4;
        if (0.0 - fVar8 < 0.0) {
          fVar7 = GameCamera.orientMtx.forward.z * fVar5;
        }
        fVar6 = fVar4;
        if (0.0 - fVar8 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (0.0 - fVar8 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar7 = GameCamera.orientMtx.forward.z * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        GameCamera.posZ = GameCamera.posZ + fVar7;
      }
      GameCamera.posY = GameCamera.posY + fVar6;
      GameCamera.posX = GameCamera.posX + fVar4;
      bVar3 = true;
    }
    if ((g_Pad.downButtons & DOWN) != 0) {
      if (bVar2) {
        fVar4 = GameCamera.rot.radius + 1.5707963;
        fVar5 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar5 = GameCamera.rot.radius;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar4 = fVar7 * fVar7;
        fVar6 = fVar5 * fVar5;
        fVar10 = fVar4 * fVar4 * fVar7;
        fVar8 = fVar6 * fVar6 * fVar5;
        fVar11 = fVar4 * fVar10;
        fVar9 = fVar6 * fVar8;
        GameCamera.posY =
             -((fVar4 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7)
               * DebugCameraSpeed.horizontal - GameCamera.posY);
        GameCamera.posX =
             -((fVar6 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
               DebugCameraSpeed.horizontal - GameCamera.posX);
      }
      else {
        fVar4 = 0.0;
        fVar7 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        fVar5 = DebugCameraSpeed.horizontal / fVar7;
        fVar6 = fVar4;
        if (0.0 - fVar7 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.z * fVar5;
        }
        fVar8 = fVar4;
        if (0.0 - fVar7 < 0.0) {
          fVar8 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (0.0 - fVar7 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.z * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar8 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        GameCamera.posZ = GameCamera.posZ - fVar6;
        GameCamera.posY = GameCamera.posY - fVar8;
        GameCamera.posX = GameCamera.posX - fVar4;
      }
      bVar3 = true;
    }
    if (!bVar1) {
      if (bVar2) {
        fVar4 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar4 = GameCamera.rot.radius;
        }
        fVar5 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = fVar5 * fVar5;
        fVar6 = fVar4 * fVar4 * fVar5;
        fVar7 = fVar4 * fVar6;
        GameCamera.posX =
             -((fVar4 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
               DebugCameraSpeed.horizontal - GameCamera.posX);
        fVar5 = GameCamera.rot.radius + 1.5707963;
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar6 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar6 = fVar4;
        }
        fVar4 = fVar6 * fVar6;
        fVar5 = fVar4 * fVar4 * fVar6;
        fVar7 = fVar4 * fVar5;
        fVar4 = (fVar4 * fVar7 * 2.601887e-06 +
                fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6)
                * DebugCameraSpeed.horizontal;
      }
      else {
        fVar5 = 0.0;
        fVar8 = SQRT(GameCamera.orientMtx.right.z * GameCamera.orientMtx.right.z +
                     GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
                     GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y);
        fVar6 = DebugCameraSpeed.horizontal / fVar8;
        fVar7 = fVar5;
        if (0.0 - fVar8 < 0.0) {
          fVar7 = GameCamera.orientMtx.right.z * fVar6;
        }
        fVar4 = fVar5;
        if (0.0 - fVar8 < 0.0) {
          fVar4 = GameCamera.orientMtx.right.y * fVar6;
        }
        if (0.0 - fVar8 < 0.0) {
          fVar5 = GameCamera.orientMtx.right.x * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar7 = GameCamera.orientMtx.right.z * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.right.y * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar5 = GameCamera.orientMtx.right.x * fVar6;
        }
        GameCamera.posZ = GameCamera.posZ + fVar7;
        GameCamera.posX = GameCamera.posX + fVar5;
      }
      GameCamera.posY = GameCamera.posY + fVar4;
      bVar3 = true;
    }
    if ((g_Pad.downButtons & R2) == 0) {
      if (!bVar3) goto LAB_00061a78;
    }
    else if (g_onMagnerail == 2) {
      fVar4 = 0.0;
      fVar7 = SQRT(GameCamera.orientMtx.right.z * GameCamera.orientMtx.right.z +
                   GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
                   GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y);
      fVar5 = DebugCameraSpeed.horizontal / fVar7;
      fVar6 = fVar4;
      if (0.0 - fVar7 < 0.0) {
        fVar6 = GameCamera.orientMtx.right.z * fVar5;
      }
      fVar8 = fVar4;
      if (0.0 - fVar7 < 0.0) {
        fVar8 = GameCamera.orientMtx.right.y * fVar5;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar4 = GameCamera.orientMtx.right.x * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar6 = GameCamera.orientMtx.right.z * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar8 = GameCamera.orientMtx.right.y * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar4 = GameCamera.orientMtx.right.x * fVar5;
      }
      GameCamera.posZ = GameCamera.posZ - fVar6;
      GameCamera.posY = GameCamera.posY - fVar8;
      GameCamera.posX = GameCamera.posX - fVar4;
    }
    else {
      fVar4 = 3.1415925 - GameCamera.rot.radius;
      if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
        fVar4 = GameCamera.rot.radius;
      }
      fVar5 = -3.1415925 - GameCamera.rot.radius;
      if ((-3.1415925 - GameCamera.rot.radius) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = fVar5 * fVar5;
      fVar6 = fVar4 * fVar4 * fVar5;
      fVar7 = fVar4 * fVar6;
      GameCamera.posX =
           (fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
           DebugCameraSpeed.horizontal + GameCamera.posX;
      fVar5 = GameCamera.rot.radius + 1.5707963;
      fVar4 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar4 = fVar5;
      }
      fVar6 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      fVar4 = fVar6 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar6;
      fVar7 = fVar4 * fVar5;
      GameCamera.posY =
           -((fVar4 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) *
             DebugCameraSpeed.horizontal - GameCamera.posY);
    }
    DebugCameraSpeed.horizontal = DebugCameraSpeed.horizontal + 0.004;
    if (0.3 < DebugCameraSpeed.horizontal) {
      DebugCameraSpeed.horizontal = 0.3;
    }
  }
  else {
LAB_00061a78:
    DebugCameraSpeed.horizontal = DebugCameraSpeed.horizontal * 0.5;
    if (DebugCameraSpeed.horizontal < 0.004) {
      DebugCameraSpeed.horizontal = 0.0;
    }
  }
  if ((((g_onMagnerail == 2) && (!bVar1)) && ((g_Pad.downButtons & R2) != 0)) ||
     ((g_Pad.downButtons & (LEFT|RIGHT)) == 0)) {
    DebugCameraSpeed.yaw = DebugCameraSpeed.yaw * 0.6666667;
    if (ABS(DebugCameraSpeed.yaw) < 0.002) {
      DebugCameraSpeed.yaw = 0.0;
    }
  }
  else {
    if ((g_Pad.downButtons & LEFT) == 0) {
      DebugCameraSpeed.yaw = DebugCameraSpeed.yaw + 0.002;
    }
    else {
      DebugCameraSpeed.yaw = DebugCameraSpeed.yaw - 0.002;
    }
    if (DebugCameraSpeed.yaw <= 0.04) {
      if (DebugCameraSpeed.yaw < -0.04) {
        DebugCameraSpeed.yaw = -0.04;
      }
    }
    else {
      DebugCameraSpeed.yaw = 0.04;
    }
    if (g_onMagnerail == 2) {
      FastMtx4Identity(local_270);
      FastMtxCopyNoTranslate(aVStack_230,0x951710);
      FastVecMtx4Mul(aVStack_230,aVStack_230,local_270);
      FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_230);
    }
    else {
      dVar16 = (double)FastDiffRots((double)GameCamera.rot.radius);
      GameCamera.rot.radius = (float)dVar16;
    }
  }
  if ((((g_Pad.downButtons & L2) == 0) || ((g_Pad.downButtons & R2) == 0)) ||
     ((bVar3 = (g_Pad.downButtons & UP) == 0, bVar3 && ((g_Pad.downButtons & DOWN) == 0)))) {
    DebugCameraSpeed.pitch = DebugCameraSpeed.pitch * 0.6666667;
    if (ABS(DebugCameraSpeed.pitch) < 0.002) {
      DebugCameraSpeed.pitch = 0.0;
    }
  }
  else {
    if (bVar3) {
      DebugCameraSpeed.pitch = DebugCameraSpeed.pitch + 0.002;
    }
    else {
      DebugCameraSpeed.pitch = DebugCameraSpeed.pitch - 0.002;
    }
    if (DebugCameraSpeed.pitch <= 0.04) {
      if (DebugCameraSpeed.pitch < -0.04) {
        DebugCameraSpeed.pitch = -0.04;
      }
    }
    else {
      DebugCameraSpeed.pitch = 0.04;
    }
    if (sVar15 == 2) {
      FastMtx4Identity(local_1f0);
      FastMtxCopyNoTranslate(aVStack_1b0,0x951710);
      FastVecMtx4Mul(aVStack_1b0,aVStack_1b0,local_1f0);
      FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_1b0);
    }
    else {
      dVar16 = (double)FastDiffRots((double)GameCamera.rot.elevation);
      GameCamera.rot.elevation = (float)dVar16;
    }
  }
  if (((sVar15 != 2) || ((g_Pad.downButtons & L2) == 0)) ||
     (((g_Pad.downButtons & R2) == 0 ||
      ((bVar3 = (g_Pad.downButtons & LEFT) == 0, bVar3 && ((g_Pad.downButtons & RIGHT) == 0)))))) {
    DebugCameraSpeed.roll = DebugCameraSpeed.roll * 0.6666667;
    if (ABS(DebugCameraSpeed.roll) < 0.002) {
      DebugCameraSpeed.roll = 0.0;
    }
  }
  else {
    if (bVar3) {
      DebugCameraSpeed.roll = DebugCameraSpeed.roll + 0.002;
    }
    else {
      DebugCameraSpeed.roll = DebugCameraSpeed.roll - 0.002;
    }
    if (DebugCameraSpeed.roll <= 0.04) {
      if (DebugCameraSpeed.roll < -0.04) {
        DebugCameraSpeed.roll = -0.04;
      }
    }
    else {
      DebugCameraSpeed.roll = 0.04;
    }
    FastMtx4Identity(afStack_170);
    FastMtxCopyNoTranslate(auStack_130,0x951710);
    FastVecMtx4Mul(aVStack_f0,auStack_130,afStack_170);
    FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_f0);
  }
  bVar3 = (g_Pad.downButtons & R1) == 0;
  if ((bVar3) && ((g_Pad.downButtons & L1) == 0)) {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical * 0.5;
    if (DebugCameraSpeed.vertical < 0.004) {
      DebugCameraSpeed.vertical = 0.0;
    }
  }
  else if (bVar3) {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical - 0.004;
    if (DebugCameraSpeed.vertical < -0.3) {
      DebugCameraSpeed.vertical = -0.3;
    }
  }
  else {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical + 0.004;
    if (0.3 < DebugCameraSpeed.vertical) {
      DebugCameraSpeed.vertical = 0.3;
    }
  }
  fVar4 = DebugCameraSpeed.vertical;
  if (sVar15 == 2) {
    fVar7 = 0.0;
    fVar5 = SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                 GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                 GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
    fVar6 = DebugCameraSpeed.vertical / fVar5;
    fVar4 = fVar7;
    if (0.0 - fVar5 < 0.0) {
      fVar4 = GameCamera.orientMtx.up.z * fVar6;
    }
    fVar8 = fVar7;
    if (0.0 - fVar5 < 0.0) {
      fVar8 = GameCamera.orientMtx.up.y * fVar6;
    }
    if (0.0 - fVar5 < 0.0) {
      fVar7 = GameCamera.orientMtx.up.x * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar4 = GameCamera.orientMtx.up.z * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar8 = GameCamera.orientMtx.up.y * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = GameCamera.orientMtx.up.x * fVar6;
    }
    GameCamera.posY = GameCamera.posY + fVar8;
    GameCamera.posX = GameCamera.posX + fVar7;
  }
  GameCamera.posZ = GameCamera.posZ + fVar4;
  if (sVar15 != 2) {
    FastEulerToMtx1(&local_b0,0x951510);
    fVar4 = 0.0;
    fVar8 = local_b0.z * local_b0.z + local_b0.x * local_b0.x + local_b0.y * local_b0.y;
    fVar7 = fVar4;
    fVar5 = fVar4;
    fVar6 = fVar4;
    if (SQRT(fVar8) != 0.0) {
      fVar7 = 1.0 / SQRT(fVar8);
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar6 = local_b0.x * fVar7;
      fVar5 = local_b0.y * fVar7;
      fVar7 = local_b0.z * fVar7;
    }
    fVar11 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
    fVar8 = fVar4;
    fVar9 = fVar4;
    fVar10 = fVar4;
    if (SQRT(fVar11) != 0.0) {
      fVar8 = 1.0 / SQRT(fVar11);
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar10 = local_a0 * fVar8;
      fVar9 = local_9c * fVar8;
      fVar8 = local_98 * fVar8;
    }
    fVar13 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
    fVar11 = fVar4;
    fVar12 = fVar4;
    if (SQRT(fVar13) != 0.0) {
      fVar11 = 1.0 / SQRT(fVar13);
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar4 = local_90 * fVar11;
      fVar12 = local_8c * fVar11;
      fVar11 = local_88 * fVar11;
    }
    local_b0.x = fVar6;
    local_b0.y = fVar5;
    local_b0.z = fVar7;
    local_a0 = fVar10;
    local_9c = fVar9;
    local_98 = fVar8;
    local_90 = fVar4;
    local_8c = fVar12;
    local_88 = fVar11;
    FastApplyTransform((Vec4 *)&GameCamera.orientMtx,&local_b0);
  }
  pvVar14 = GameCamera.pCurrentUpdCam;
  fVar4 = GameCamera.posX;
  if ((ControlMode == 2) && (GameCamera.pCurrentUpdCam != (void *)0x0)) {
    *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) = GameCamera.posX;
    fVar5 = GameCamera.posY;
    *(float *)((int)pvVar14 + 0x34) = GameCamera.posY;
    fVar6 = GameCamera.posZ;
    *(float *)((int)pvVar14 + 0x38) = GameCamera.posZ;
    *(char (*) [4])((int)pvVar14 + 0x3c) = GameCamera.field8_0x14c;
    fVar7 = GameCamera.orientMtx.forward.x;
    *(float *)pvVar14 = GameCamera.orientMtx.forward.x;
    fVar8 = GameCamera.orientMtx.forward.y;
    *(float *)((int)pvVar14 + 4) = GameCamera.orientMtx.forward.y;
    fVar9 = GameCamera.orientMtx.forward.z;
    *(float *)((int)pvVar14 + 8) = GameCamera.orientMtx.forward.z;
    fVar10 = GameCamera.orientMtx.forward.w;
    *(float *)((int)pvVar14 + 0xc) = GameCamera.orientMtx.forward.w;
    *(float *)((int)pvVar14 + 0x10) = GameCamera.orientMtx.right.x;
    *(float *)((int)pvVar14 + 0x14) = GameCamera.orientMtx.right.y;
    *(float *)((int)pvVar14 + 0x18) = GameCamera.orientMtx.right.z;
    *(float *)((int)pvVar14 + 0x1c) = GameCamera.orientMtx.right.w;
    *(float *)((int)pvVar14 + 0x20) = GameCamera.orientMtx.up.x;
    *(float *)((int)pvVar14 + 0x24) = GameCamera.orientMtx.up.y;
    *(float *)((int)pvVar14 + 0x28) = GameCamera.orientMtx.up.z;
    fVar11 = GameCamera.orientMtx.up.w;
    *(float *)((int)pvVar14 + 0x40) = fVar7;
    *(float *)((int)pvVar14 + 0x2c) = fVar11;
    *(float *)((int)pvVar14 + 0x44) = fVar8;
    *(float *)((int)pvVar14 + 0x48) = fVar9;
    *(float *)((int)pvVar14 + 0x4c) = fVar10;
    *(float *)((int)pvVar14 + 100) = fVar4;
    *(float *)((int)pvVar14 + 0x68) = fVar5;
    *(float *)((int)pvVar14 + 0x6c) = fVar6;
    ResetCamOfsVectors_0(pvVar14);
  }
  return;
}


// 0x0062590 (0x1d0 bytes)
void UpdateDebugCamera(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  Mtx4 *pMVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = (double)FastWrapRot(GameCamera.rot.radius,DAT_0095c648);
  fVar1 = (float)(dVar8 + 1.570796251296997);
  dVar7 = (double)(float)(3.141592502593994 - dVar8);
  if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
    dVar7 = dVar8;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar9 = (double)(float)(-3.141592502593994 - dVar8);
  if ((double)(float)(-3.141592502593994 - dVar8) - dVar7 < 0.0) {
    dVar9 = dVar7;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar10 = (double)(float)(dVar9 * dVar9);
  fVar4 = fVar3 * fVar3;
  dVar7 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar9));
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar8 = (double)(float)(dVar10 * dVar7);
  fVar2 = fVar4 * fVar1;
  g_heroPosition.z = GameCamera.posZ + DAT_0095c650;
  g_heroPosition.y =
       ((float)(dVar10 * dVar8) * 2.601887e-06 +
       (float)(dVar8 * -0.0001980741071747616 +
              (double)(float)(dVar7 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar10 * dVar9) * -0.16666656732559204
                                            + dVar9)))) * DAT_0095c64c + GameCamera.posY;
  g_heroPosition.x =
       (fVar4 * fVar2 * 2.601887e-06 +
       fVar2 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
       DAT_0095c64c + GameCamera.posX;
  dVar7 = (double)FastWrapRot(GameCamera.rot.radius,DAT_0095c644);
  g_heroRotation.z = (float)dVar7;
  FastEulerToMtx1(&g_heroMtx,&g_heroRotation);
  pMVar5 = g_heroMobyPtr;
  pMVar6 = &g_heroMobyPtr->transform;
  (g_heroMobyPtr->pos).x = g_heroPosition.x;
  (pMVar5->pos).y = g_heroPosition.y;
  (pMVar5->pos).z = g_heroPosition.z;
  (pMVar5->pos).w = g_heroPosition.w;
  (pMVar5->rotation).x = g_heroRotation.x;
  (pMVar5->rotation).y = g_heroRotation.y;
  (pMVar5->rotation).z = g_heroRotation.z;
  (pMVar5->rotation).w = g_heroRotation.w;
  FastMemCopy32(pMVar6,&g_heroMtx,0x30);
  UpdateMobyTransform(g_heroMobyPtr);
  return;
}


// 0x0062760 (0x4 bytes)
void STUB_00062760(...)

{
  return;
}


// 0x0062764 (0x4c bytes)
void SetDebugGameMode(void)

{
  g_debugLastGameMode = g_gameMode;
  g_gameMode = GAME_MODE_DEBUG;
  STUB_000780f4(0,0,0);
  return;
}


// 0x00627d0 (0x168c bytes)
// inlined: FastAtan2 @0x62d48
// strings: 000627c8: '@#33`' | 00651c40: '%s%d\\%s%s' | 00651c70: 'occ_sample_deltas.dat' | 00651c50: 'host0:z:/i5/levels/level' | 00651c90: 'add_sample: %.2f %.2f %.2f\n' | 00651cb0: 'occ_samp.dat' | 00651cc0: 'start_pt: %.2f %.2f %.2f\n'

void UpdateDebugSelections(void)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  DEBUG_OPTION DVar8;
  ulonglong *puVar9;
  char cVar10;
  CONTROLLER_INPUT CVar11;
  float fVar12;
  uint uVar13;
  CONTROLLER_INPUT CVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  int iVar20;
  undefined8 uVar17;
  size_t sVar21;
  undefined8 uVar18;
  int iVar24;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar16 = uVar23 - 0x1e0;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar23;
  puVar9[0x3e] = in_LR;
  puVar9[0x3b] = in_f31;
  puVar9[0x3a] = unaff_r31;
  puVar9[0x39] = unaff_r30;
  puVar9[0x38] = unaff_r29;
  puVar9[0x37] = unaff_r28;
  puVar9[0x36] = unaff_r27;
  puVar9[0x35] = unaff_r26;
  puVar9[0x34] = unaff_r25;
  puVar9[0x33] = unaff_r24;
  puVar9[0x32] = unaff_r23;
  sound_Update();
  CVar11 = g_Pad.buttonsPressedThisFrame;
  CVar14 = g_Pad.downButtons;
  if ((g_Pad.buttonsPressedThisFrame & (R3|SELECT)) == 0) {
    *(undefined4 *)((int)puVar9 + 0x7c) = 5;
    *(undefined4 *)(puVar9 + 0x10) = 0xb;
    *(undefined4 *)((int)puVar9 + 0x84) = 9;
    *(undefined4 *)(puVar9 + 0x11) = 0xe;
    *(undefined4 *)((int)puVar9 + 0x8c) = 7;
    *(undefined4 *)(puVar9 + 0x12) = 5;
    iVar19 = Segment;
    if ((CVar11 & RIGHT) == 0) {
      if ((CVar11 & LEFT) != 0) {
        DebugSelectedCol = DebugSelectedCol - 1;
        if ((int)DebugSelectedCol < 0) {
          DebugSelectedCol = 2;
        }
        else if (DebugSelectedCol == 2) {
          DebugSelectedCol = 5;
        }
      }
    }
    else {
      DebugSelectedCol = DebugSelectedCol + 1;
      if (DebugSelectedCol == 3) {
        DebugSelectedCol = 0;
      }
      else if (DebugSelectedCol == 6) {
        DebugSelectedCol = 3;
      }
    }
    if (((CVar11 & UP) == 0) ||
       (DebugSelectedRow = DebugSelectedRow - 1, -1 < (int)DebugSelectedRow)) {
      if ((CVar11 & DOWN) != 0) {
        DebugSelectedRow = DebugSelectedRow + 1;
        if (*(int *)((int)puVar9 + DebugSelectedCol * 4 + 0x7c) <= (int)DebugSelectedRow) {
          if ((int)DebugSelectedCol < 3) {
            iVar24 = DebugSelectedCol + 9;
            iVar20 = iVar24 / 6 + (iVar24 >> 0x1f);
            DebugSelectedCol = iVar24 + (iVar20 - (iVar20 >> 0x1f)) * -6;
          }
          DebugSelectedRow = 0;
        }
      }
    }
    else {
      uVar26 = (ulonglong)DebugSelectedCol;
      if (2 < (int)DebugSelectedCol) {
        lVar15 = (longlong)(int)(uVar26 + 3);
        uVar29 = lVar15 / 6 + (lVar15 >> 0x3f) & 0xffffffff;
        uVar26 = uVar26 + 3 + (uVar29 - ((longlong)(uVar29 << 0x20) >> 0x3f)) * -6;
        DebugSelectedCol = (uint)uVar26;
      }
      DebugSelectedRow = *(int *)((int)puVar9 + (int)((uVar26 & 0xffffffff) << 2) + 0x7c) - 1;
    }
    iVar20 = *(int *)((int)puVar9 + DebugSelectedCol * 4 + 0x7c);
    if (iVar20 <= (int)DebugSelectedRow) {
      DebugSelectedRow = iVar20 - 1;
    }
    uVar13 = DebugSelectedRow;
    if (DebugSelectedCol == 5) {
      if ((DebugSelectedRow == 0) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        BattleCam = (BattleCam == 0);
      }
      if ((DebugSelectedRow == 1) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        Actuator = (Actuator == 0);
      }
      if ((DebugSelectedRow == 2) && ((CVar11 & (SQUARE|CROSS|CIRCLE|TRIANGLE)) != 0)) {
        iVar20 = 0;
        iVar19 = 0;
        if (0 < DAT_00a108d4) {
          iVar24 = 0;
          do {
            pfVar25 = (float *)(DAT_00a1090c + iVar24);
            if ((((*pfVar25 < GameCamera.posX + 0.5) && (GameCamera.posX - 0.5 < *pfVar25)) &&
                (pfVar25[1] < GameCamera.posY + 0.5)) &&
               (((GameCamera.posY - 0.5 < pfVar25[1] && (pfVar25[2] < GameCamera.posZ + 0.5)) &&
                (GameCamera.posZ - 0.5 < pfVar25[2])))) {
              return;
            }
            iVar20 = iVar20 + 1;
            iVar24 = iVar24 + 4;
          } while (iVar20 < DAT_00a108d4);
        }
        snprintf((char *)(uVar23 - 0xd8),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_sample_deltas.dat",&DAT_00651c88);
        dVar32 = (double)GameCamera.posY;
        dVar31 = (double)GameCamera.posZ;
        puVar9[8] = (ulonglong)(double)GameCamera.posX;
        puVar9[9] = (ulonglong)dVar32;
        puVar9[10] = (ulonglong)dVar31;
        snprintf((char *)(puVar9 + 0x17),"add_sample: %.2f %.2f %.2f\n",puVar9[8],puVar9[9],
                       puVar9[10]);
        uVar17 = FUN_00502dcc(uVar23 - 0xd8,7);
        if (-1 < (int)uVar17) {
          STUB_00502de0_RET_0(uVar17,0,5);
          sVar21 = strlen((char *)(uVar23 - 0x128));
          STUB_00502de8(uVar17,uVar23 - 0x128,sVar21);
          STUB_00502ddc(uVar17);
          AddSample = 0x79;
        }
        iVar20 = DAT_00a1090c;
        snprintf((char *)(uVar23 - 0xd8),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_samp.dat",&DAT_00651c88);
        uVar17 = FUN_00502dcc(uVar23 - 0xd8,7);
        if (-1 < (int)uVar17) {
          STUB_00502de0_RET_0(uVar17,0,5);
          STUB_00502de8(uVar17,0x951500,4);
          STUB_00502de8(uVar17,0x951504,4);
          STUB_00502de8(uVar17,0x951508,4);
          STUB_00502de0_RET_0(uVar17,0,6);
          uVar18 = STUB_00502de0_RET_0(uVar17,0,5);
          if ((int)uVar18 < 0x100001) {
            STUB_00502de0_RET_0(uVar17,0,6);
            STUB_00502dd4(uVar17,iVar20,uVar18);
            iVar19 = (int)uVar18 / 0xc;
          }
          DAT_00a108d4 = iVar19;
          STUB_00502ddc(uVar17);
        }
      }
      if ((DebugSelectedRow == 3) &&
         ((g_Pad.buttonsPressedThisFrame & (SQUARE|CROSS|CIRCLE|TRIANGLE)) != 0)) {
        snprintf((char *)(uVar23 - 0x98),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_sample_deltas.dat",&DAT_00651c88);
        dVar32 = (double)GameCamera.posY;
        dVar31 = (double)GameCamera.posZ;
        puVar9[8] = (ulonglong)(double)GameCamera.posX;
        puVar9[9] = (ulonglong)dVar32;
        puVar9[10] = (ulonglong)dVar31;
        snprintf((char *)(puVar9 + 0x1c),"start_pt: %.2f %.2f %.2f\n",puVar9[8],puVar9[9],
                       puVar9[10]);
        uVar17 = FUN_00502dcc(uVar23 - 0x98,7);
        if (-1 < (int)uVar17) {
          STUB_00502de0_RET_0(uVar17,0,5);
          sVar21 = strlen((char *)(uVar23 - 0x100));
          STUB_00502de8(uVar17,uVar23 - 0x100,sVar21);
          STUB_00502ddc(uVar17);
          AddStart = 0x79;
        }
      }
    }
    else if (DebugSelectedCol == 4) {
      if (DebugSelectedRow == 0) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogNearDist = LevelFogNearDist + 1024.0;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogNearDist = LevelFogNearDist - 1024.0;
        }
        if ((int)(FLOAT_ORDER(LevelFogFarDist)) <
            (int)(FLOAT_ORDER(LevelFogNearDist))) {
          LevelFogNearDist = LevelFogFarDist;
        }
        else if ((int)LevelFogNearDist < 0) {
          LevelFogNearDist = 0.0;
        }
      }
      if (DebugSelectedRow == 2) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogFarDist = LevelFogFarDist + 1024.0;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogFarDist = LevelFogFarDist - 1024.0;
        }
        iVar19 = FLOAT_ORDER(LevelFogFarDist);
        if (iVar19 < 0x49000001) {
          if (iVar19 < (int)(FLOAT_ORDER(LevelFogNearDist))) {
            LevelFogFarDist = LevelFogNearDist;
          }
        }
        else {
          LevelFogFarDist = 524288.0;
        }
      }
      if (DebugSelectedRow == 1) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogNearIntensity = LevelFogNearIntensity - (float)0x40233333;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogNearIntensity = LevelFogNearIntensity + (float)0x40233333;
        }
        if ((int)(FLOAT_ORDER(LevelFogNearIntensity)) < 0x437f0001) {
          if ((int)LevelFogNearIntensity < 0) {
            LevelFogNearIntensity = 0.0;
          }
        }
        else {
          LevelFogNearIntensity = 255.0;
        }
      }
      if (DebugSelectedRow == 3) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogFarIntensity = LevelFogFarIntensity - (float)0x40233333;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogFarIntensity = LevelFogFarIntensity + (float)0x40233333;
        }
        if ((int)(FLOAT_ORDER(LevelFogFarIntensity)) < 0x437f0001) {
          if ((int)LevelFogFarIntensity < 0) {
            LevelFogFarIntensity = 0.0;
          }
        }
        else {
          LevelFogFarIntensity = 255.0;
        }
      }
      if (DebugSelectedRow == 4) {
        if ((levelFog.r != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.r = levelFog.r + '\x01';
        }
        if ((levelFog.r != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.r = levelFog.r + 0xff;
        }
      }
      if (DebugSelectedRow == 5) {
        if ((levelFog.g != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.g = levelFog.g + '\x01';
        }
        if ((levelFog.g != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.g = levelFog.g + 0xff;
        }
      }
      if (DebugSelectedRow == 6) {
        if ((levelFog.b != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.b = levelFog.b + '\x01';
        }
        if ((levelFog.b != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.b = levelFog.b + 0xff;
        }
      }
      UpdateFog();
    }
    else if (DebugSelectedCol == 3) {
      uVar23 = 999999;
      if ((int)DebugSelectedRow < 0xd) {
        puVar28 = &currentAmmoArray.field0_0x0 + (byte)(&DAT_0071ee3c)[DebugSelectedRow];
        uVar23 = (ulonglong)
                 (ushort)(&DAT_00737d3e)[(uint)(byte)(&DAT_0071ee3c)[DebugSelectedRow] * 0xc];
      }
      else {
        puVar28 = &g_boltCount;
      }
      if ((CVar14 & R1) == 0) {
        if ((CVar14 & R2) == 0) {
          if ((CVar11 & CROSS) != 0) {
            *puVar28 = *puVar28 + 1;
          }
          if (((CVar11 & CIRCLE) != 0) && (0 < (int)*puVar28)) {
            *puVar28 = *puVar28 - 1;
          }
        }
        else {
          if ((CVar11 & CROSS) != 0) {
            *puVar28 = *puVar28 + 600;
          }
          if ((CVar11 & CIRCLE) != 0) {
            *puVar28 = (uint)(600 - (longlong)(int)*puVar28 >> 0x3f) & *puVar28 - 600;
          }
        }
      }
      else {
        if ((CVar11 & CROSS) != 0) {
          *puVar28 = *puVar28 + 0x3c;
        }
        if ((CVar11 & CIRCLE) != 0) {
          *puVar28 = (uint)(0x3c - (longlong)(int)*puVar28 >> 0x3f) & *puVar28 - 0x3c;
        }
      }
      uVar7 = *puVar28;
      *puVar28 = uVar7 + ((uint)((longlong)(uVar23 - (longlong)(int)uVar7) >> 0x3f) &
                         (int)uVar23 - uVar7);
      if ((CVar11 & TRIANGLE) != 0) {
        (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] =
             (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] + '\x01';
      }
      if ((CVar11 & SQUARE) != 0) {
        (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] =
             (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] + 0xff;
      }
      bVar2 = (&DAT_0071ee3c)[uVar13];
      iVar19 = (uint)bVar2 * 0x10 + (uint)bVar2 * 0x3c;
      if (*(short *)(&DAT_0072103e + iVar19) <
          (short)(ushort)(&g_goldWeaponsArray.field0_0x0)[bVar2]) {
        (&g_goldWeaponsArray.field0_0x0)[bVar2] = (undefined)*(undefined2 *)(&DAT_0072103e + iVar19)
        ;
      }
    }
    else if (DebugSelectedCol == 2) {
      if ((CVar11 & CROSS) != 0) {
        DrawMode = DrawMode ^ 1 << (DebugSelectedRow & 0x3f);
      }
    }
    else if (DebugSelectedCol == 1) {
      if ((int)DebugSelectedRow < 5) {
        if ((int)DebugSelectedRow < 2) {
          if (-1 < (int)DebugSelectedRow) {
            if ((int)DebugSelectedRow < 1) {
              if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
                if (((CVar11 & CROSS) != 0) && (ControlMode = ControlMode + 1, 3 < ControlMode)) {
                  ControlMode = 0;
                }
                if (((CVar11 & TRIANGLE) != 0) && (ControlMode = ControlMode + -1, ControlMode < 0))
                {
                  ControlMode = 3;
                }
                if (ControlMode < 2) {
                  if (-1 < ControlMode) {
                    if (ControlMode < 1) {
                      DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
                    }
                    else {
                      DebugUpdate = NONE;
                    }
                  }
                }
                else if (ControlMode < 3) {
                  fVar4 = g_heroPosition.y - GameCamera.posY;
                  fVar5 = g_heroPosition.x - GameCamera.posX;
                  *(float *)(puVar9 + 0xe) = fVar5;
                  DebugUpdate = NONE;
                  *(float *)((int)puVar9 + 0x74) = fVar4;
                  DAT_0095c64c = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
                  *(float *)(puVar9 + 0xf) = ABS(fVar5) - ABS(fVar4);
                  uVar26 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
                  dVar32 = 0.0;
                  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
                  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
                  fVar12 = ABS(*(float *)(puVar9 + 0xe));
                  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
                    fVar12 = ABS(fVar4);
                  }
                  fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
                  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
                    fVar4 = ABS(fVar5);
                  }
                  if (0.0 < fVar12) {
                    lVar15 = uVar23 - 0x1d0;
                    lVar22 = uVar23 - 0x14c;
                    lVar27 = uVar23 - 0x13c;
                    lVar30 = 2;
                    fVar4 = (fVar4 - fVar12) / (fVar4 + fVar12);
                    fVar5 = fVar4 * fVar4;
                    *(float *)(puVar9 + 0x14) = fVar4;
                    *(float *)(puVar9 + 0x13) = fVar4;
                    *(float *)((int)puVar9 + 0x9c) = fVar4;
                    *(float *)((int)puVar9 + 0x94) = fVar4;
                    fVar4 = fVar5 * fVar5;
                    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar5;
                    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar4;
                    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4 * fVar5;
                    do {
                      *(float *)((int)lVar15 + 0x94) =
                           *(float *)((int)lVar15 + 0x84) * fVar4 * fVar4;
                      iVar19 = (int)lVar22;
                      lVar15 = lVar15 + 8;
                      lVar22 = lVar22 + 8;
                      *(float *)((int)lVar27 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
                      lVar27 = lVar27 + 8;
                      lVar30 = lVar30 + -1;
                    } while (lVar30 != 0);
                    lVar30 = 4;
                    lVar27 = uVar23 - 0x14c;
                    pfVar25 = (float *)&DAT_007358e0;
                    lVar15 = lVar16;
                    lVar22 = lVar27;
                    do {
                      fVar4 = *pfVar25;
                      fVar5 = pfVar25[1];
                      pfVar25 = pfVar25 + 2;
                      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar4;
                      lVar15 = lVar15 + 8;
                      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
                      lVar22 = lVar22 + 8;
                      lVar30 = lVar30 + -1;
                    } while (lVar30 != 0);
                    lVar15 = 2;
                    do {
                      iVar19 = (int)lVar16;
                      iVar20 = (int)lVar27;
                      lVar16 = lVar16 + 0x10;
                      lVar27 = lVar27 + 0x10;
                      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x94)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar15 = lVar15 + -1;
                    } while (lVar15 != 0);
                    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar3);
                  }
                  dVar32 = (double)FastDiffRots(dVar32,(double)GameCamera.rot.radius);
                  DAT_0095c648 = (float)dVar32;
                  DAT_0095c650 = g_heroPosition.z - GameCamera.posZ;
                  dVar32 = (double)FastDiffRots
                                             ((double)g_heroRotation.z,(double)GameCamera.rot.radius
                                             );
                  DAT_0095c644 = (float)dVar32;
                }
                else if (ControlMode < 4) {
                  DebugUpdate = UPDATE_PARTICLES|UPDATE_MOBYS;
                }
              }
            }
            else {
              if (((CVar11 & CROSS) != 0) && (Profile = Profile + 1, 7 < Profile)) {
                Profile = 0;
              }
              if (((CVar11 & TRIANGLE) != 0) && (Profile = Profile + -1, Profile < 0)) {
                Profile = 7;
              }
            }
          }
        }
        else if ((int)DebugSelectedRow < 3) {
          if (OcclGrid == (void *)0x0) {
            OcclUpdate = 0;
          }
          else {
            if (((CVar11 & CROSS) != 0) && (OcclUpdate = OcclUpdate + 1, 2 < OcclUpdate)) {
              OcclUpdate = 0;
            }
            if (((CVar11 & TRIANGLE) != 0) && (OcclUpdate = OcclUpdate + -1, OcclUpdate < 0)) {
              OcclUpdate = 2;
            }
          }
        }
        else if ((int)DebugSelectedRow < 4) {
          if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
            Bookmark = (Bookmark == 0);
          }
        }
        else if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          Invincibility = (Invincibility == 0);
        }
      }
      else if (DebugSelectedRow == 10) {
        if ((CVar11 & (CROSS|TRIANGLE)) == 0) {
          if ((CVar11 & CIRCLE) != 0) {
            cVar10 = (char)(ZERO_MASK((uint)(byte)g_LevelFlags[Level][Segment]));
            g_LevelFlags[Level][Segment] = cVar10;
            (&DAT_00a202c0)[iVar19] = cVar10;
          }
        }
        else if ((CVar11 & CROSS) == 0) {
          Segment = Segment + -1;
          if (Segment < 0) {
            Segment = 0xf;
          }
        }
        else {
          Segment = Segment + 1;
          if (Segment == 0x10) {
            Segment = 0;
          }
        }
      }
      else if (DebugSelectedRow == 9) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          do {
            if ((CVar11 & CROSS) == 0) {
              Scene = Scene + -1;
              if (-2 < Scene) goto LAB_0006321c;
              Scene = 0x23;
            }
            else {
              Scene = Scene + 1;
              if (Scene == 0x24) {
                Scene = -1;
              }
LAB_0006321c:
              if (Scene < 0) break;
            }
            iVar19 = LoadNpcMobys(Level,Scene);
            CVar11 = g_Pad.buttonsPressedThisFrame;
          } while (iVar19 == 0);
        }
        g_debugLastGameMode = (Scene >> 0x1f & 0xfffffffeU) + GAME_MODE_SCENE;
      }
      else if (DebugSelectedRow == 8) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          bVar1 = ScreenMode == 0;
          ScreenMode = (ScreenMode == 0);
          if (bVar1) {
            dVar32 = (double)FastIntToDouble(g_FrameBufWidth);
            dVar31 = 0.125;
            g_ViewContext.xpix = (float)(dVar32 * 0.125);
            dVar32 = (double)FastIntToDouble(g_FrameBufHeight);
            dVar32 = dVar32 * dVar31;
          }
          else {
            dVar32 = (double)FastIntToDouble(g_FrameBufWidth);
            dVar31 = 0.5;
            g_ViewContext.xpix = (float)(dVar32 * 0.5);
            dVar32 = (double)FastIntToDouble(g_FrameBufHeight);
            dVar32 = dVar32 * dVar31;
          }
          g_ViewContext.ypix = (float)dVar32;
          g_ViewContext.xclip = g_ViewContext.xpix * 4.0;
          g_ViewContext.yclip = g_ViewContext.ypix * 4.0;
          UpdateViewContext();
        }
      }
      else if (DebugSelectedRow == 7) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          TvMode = (TvMode == 0);
        }
      }
      else if (DebugSelectedRow == 6) {
        if (((CVar11 & CROSS) != 0) && (CollMode = CollMode + 1, 2 < CollMode)) {
          CollMode = 0;
        }
        if (((CVar11 & TRIANGLE) != 0) && (CollMode = CollMode + -1, CollMode < 0)) {
          CollMode = 2;
        }
      }
      else if ((DebugSelectedRow == 5) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        bVar1 = DrawDistMode == 0;
        DrawDistMode = (DrawDistMode == 0);
        if (bVar1) {
          TfragDrawDist = 65536.0;
          DAT_00a390b8 = 0x40;
          TieDrawDist = 64.0;
          ShrubDrawDist = 40.0;
          PartClipDist = 0x40000;
        }
        else {
          TfragDrawDist = 512000.0;
          TieDrawDist = 720.0;
          ShrubDrawDist = 500.0;
          DAT_00a390b8 = 500;
          PartClipDist = 0x1f4000;
        }
      }
    }
    else if (((DebugSelectedCol == 0) && ((CVar11 & CROSS) != 0)) &&
            (DVar8 = 1 << (DebugSelectedRow & 0x3f), DebugUpdate = DebugUpdate ^ DVar8,
            DVar8 == ENABLE_STEPPING)) {
      DebugUpdate = (int)(ZERO_MASK((DebugUpdate & ENABLE_STEPPING))) +
                    ENABLE_STEPPING;
    }
  }
  else {
    g_gameMode = g_debugLastGameMode;
    STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
    auVar33 = ZEXT416(2);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = loadVectorLeftIndexed(0x144,0x9513c0);
    auVar35 = loadVectorLeftIndexed(0x140,0x9513c0);
    auVar36 = loadVectorLeftIndexed(0x148,0x9513c0);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar36 = vectorShiftRightAlgebraicWord(auVar35,auVar33);
    auVar34 = vectorShiftRightAlgebraicWord(auVar34,auVar33);
    auVar35 = vectorShiftRightAlgebraicWord(auVar37,auVar33);
    auVar33 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0095c654 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x94,
                              0x95c5c0);
    DAT_0095c658 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x98,
                              0x95c5c0);
    DAT_0095c65c = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                              0x95c5c0);
    AddStart = 0x6e;
    AddSample = 0x6e;
  }
  return;
}


// 0x0063e68 (0x15d0 bytes)
// strings: 00651cdc: 'I-5' | 00651ce4: '-------------' | 00651cf4: 'UPDATE' | 00651cfc: '------' | 00651d04: 'Ratchett' | 00651d14: 'Mobys' | 00651d1c: 'Parts' | 00651d24: 'Camera' | 00651d2c: 'Step' | 00651d34: ',' | 00651d3c: 'MODE' | 00651d44: '----' | 00651d4c: 'Control' | 00651d54: 'Profile' | 00651d5c: 'Occl' | 00651d64: 'Bookmark' | 00651d74: 'Invinc' | 00651d7c: 'Drawdist' | 00651d8c: 'Coll' | 00651d94: 'Tv Mode' | 00651d9c: 'Screen' | 00651da4: 'Scene' | 00651dac: '%d' | 00651db4: 'none' | 00651dbc: 'Segment' | 00651dc4: '%d = %d' | 00651dcc: 'DRAW' | 00651dd4: 'Darken' | 00651ddc: 'Env Coll' | 00651dec: 'Moby Coll'

void DrawDebugMenu(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char local_a0 [8];
  char acStack_98 [16];
  char acStack_88 [16];
  char acStack_78 [16];
  char acStack_68 [24];
  
  STUB_00078100();
  if (g_CutscenePlaying == 0) {
    DebugFontPrintCenter(0x100,0x10,-0x7f3f4000,"I-5");
    DebugFontPrintCenter(0x100,0x18,-0x7f3f4000,"-------------");
    DebugFontPrintLeft(0xc,0x2c,0x8000c000,"UPDATE");
    DebugFontPrintLeft(0xc,0x32,0x8000c000,"------");
    DebugFontPrintLeft(0x14,0x40,0x8000c0c0,"Ratchett");
    DebugFontPrintLeft(0x6c,0x40,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_HERO) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x4f,0x8000c0c0,"Mobys");
    DebugFontPrintLeft(0x6c,0x4f,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_MOBYS) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x5e,0x8000c0c0,"Parts");
    DebugFontPrintLeft(0x6c,0x5e,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_PARTICLES) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x6d,0x8000c0c0,"Camera");
    DebugFontPrintLeft(0x6c,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_CAMERA) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x7c,0x8000c0c0,"Step");
    DebugFontPrintLeft(0x6c,0x7c,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & ENABLE_STEPPING) >> 0x1d & 4)));
    if (DebugSelectedCol == 0) {
      DebugFontPrintLeft(9,DebugSelectedRow * 0xf + 0x40,0x800000c0,",");
    }
    DebugFontPrintLeft(0xa8,0x2c,0x8000c000,"MODE");
    DebugFontPrintLeft(0xa8,0x32,0x8000c000,"----");
    DebugFontPrintLeft(0xb0,0x40,0x8000c0c0,"Control");
    DebugFontPrintLeft(0x108,0x40,0x80f0f0f0,(&PTR_s_normal_00737b10)[ControlMode]);
    DebugFontPrintLeft(0xb0,0x4f,0x8000c0c0,"Profile");
    DebugFontPrintLeft(0x108,0x4f,0x80f0f0f0,(&PTR_s_off_00737b20)[Profile]);
    DebugFontPrintLeft(0xb0,0x5e,0x8000c0c0,"Occl");
    DebugFontPrintLeft(0x108,0x5e,0x80f0f0f0,(&PTR_s_off_00737b70)[OcclUpdate]);
    DebugFontPrintLeft(0xb0,0x6d,0x8000c0c0,"Bookmark");
    DebugFontPrintLeft(0x108,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + ((uint)LZCOUNT(Bookmark) >> 3 & 4)));
    DebugFontPrintLeft(0xb0,0x7c,0x8000c0c0,"Invinc");
    DebugFontPrintLeft(0x108,0x7c,0x80f0f0f0,(&PTR_s_off_00737b08)[Invincibility]);
    DebugFontPrintLeft(0xb0,0x8b,0x8000c0c0,"Drawdist");
    DebugFontPrintLeft(0x108,0x8b,0x80f0f0f0,(&PTR_s_normal_00737b4c)[DrawDistMode]);
    DebugFontPrintLeft(0xb0,0x9a,0x8000c0c0,"Coll");
    DebugFontPrintLeft(0x108,0x9a,0x80f0f0f0,(&PTR_s_hotspt_00737b54)[CollMode]);
    DebugFontPrintLeft(0xb0,0xa9,0x8000c0c0,"Tv Mode");
    DebugFontPrintLeft(0x108,0xa9,0x80f0f0f0,(&PTR_DAT_00737b60)[TvMode]);
    DebugFontPrintLeft(0xb0,0xb8,0x8000c0c0,"Screen");
    DebugFontPrintLeft(0x108,0xb8,0x80f0f0f0,(&PTR_s_normal_00737b68)[ScreenMode]);
    DebugFontPrintLeft(0xb0,199,0x8000c0c0,"Scene");
    if (Scene < 0) {
      DebugFontPrintLeft(0x108,199,0x80f0f0f0,"none");
    }
    else {
      snprintf(acStack_78,"%d",Scene);
      DebugFontPrintLeft(0x108,199,0x80f0f0f0,acStack_78);
    }
    DebugFontPrintLeft(0xb0,0xd6,0x8000c0c0,"Segment");
    snprintf(acStack_68,"%d = %d",Segment,(ulonglong)(byte)g_LevelFlags[Level][Segment]);
    DebugFontPrintLeft(0x108,0xd6,0x80f0f0f0,acStack_68);
    if (DebugSelectedCol == 1) {
      DebugFontPrintLeft(0xa5,DebugSelectedRow * 0xf + 0x40,0x800000c0,",");
    }
    DebugFontPrintLeft(0x158,0x2c,0x8000c000,"DRAW");
    DebugFontPrintLeft(0x158,0x32,0x8000c000,"----");
    DebugFontPrintLeft(0x160,0x40,0x8000c0c0,"Darken");
    DebugFontPrintLeft(0x1cc,0x40,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Darken) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x4f,0x8000c0c0,"Env Coll");
    DebugFontPrintLeft(0x1cc,0x4f,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & EnvColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x5e,0x8000c0c0,"Moby Coll");
    DebugFontPrintLeft(0x1cc,0x5e,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & MobyColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x6d,0x8000c0c0,"Hero Coll");
    DebugFontPrintLeft(0x1cc,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & HeroColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x7c,0x8000c0c0,"Bspheres");
    DebugFontPrintLeft(0x1cc,0x7c,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Bspheres) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x8b,0x8000c0c0,"Cameras");
    DebugFontPrintLeft(0x1cc,0x8b,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Cameras) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x9a,0x8000c0c0,"Cuboids");
    DebugFontPrintLeft(0x1cc,0x9a,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Cuboids) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0xa9,0x8000c0c0,"Samples");
    DebugFontPrintLeft(0x1cc,0xa9,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Samples) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0xb8,0x8000c0c0,"Text");
    DebugFontPrintLeft(0x1cc,0xb8,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Text) >> 0x1d & 4)));
    if (DebugSelectedCol == 2) {
      DebugFontPrintLeft(0x155,DebugSelectedRow * 0xf + 0x3e,0x800000c0,",");
    }
    DebugFontPrintLeft(0xc,0xa6,0x8000c000,"AMMO");
    DebugFontPrintLeft(0xc,0xac,0x8000c000,"----");
    if (DebugSelectedCol == 3) {
      DebugFontPrintLeft(9,DebugSelectedRow * 0xf + 0xb8,0x800000c0,",");
    }
    DebugFontPrintLeft(0x14,0xba,0x8000c0c0,"SuckCannon");
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.suckCannon);
    DebugFontPrintLeft(0x7a,0xba,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xc9,0x8000c0c0,"Morpha-Ray");
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.morphORay);
    DebugFontPrintLeft(0x7a,0xc9,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xd8,0x8000c0c0,"Inflato R");
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.decoyGlove);
    DebugFontPrintLeft(0x7a,0xd8,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xe7,0x8000c0c0,"R.Y.N.O.");
    snprintf(acStack_98,"%d",currentAmmoArray.ryno);
    DebugFontPrintLeft(0x8c,0xe7,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0xf6,0x8000c0c0,"D. Droids");
    snprintf(acStack_98,"%d",currentAmmoArray.droneDevice);
    DebugFontPrintLeft(0x8c,0xf6,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0x105,0x8000c0c0,"Bomb");
    snprintf(acStack_98,"%d",currentAmmoArray.bombGlove);
    DebugFontPrintLeft(0x8c,0x105,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.bombGlove);
    DebugFontPrintLeft(0x7a,0x105,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x114,0x8000c0c0,"Devastator");
    snprintf(acStack_98,"%d",currentAmmoArray.devastator);
    DebugFontPrintLeft(0x8c,0x114,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.devastator);
    DebugFontPrintLeft(0x7a,0x114,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x123,0x8000c0c0,"Visibomb");
    snprintf(acStack_98,"%d",currentAmmoArray.visibombGun);
    DebugFontPrintLeft(0x8c,0x123,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0x132,0x8000c0c0,"Agents");
    snprintf(acStack_98,"%d",currentAmmoArray.gloveOfDoom);
    DebugFontPrintLeft(0x8c,0x132,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.gloveOfDoom);
    DebugFontPrintLeft(0x7a,0x132,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x141,0x8000c0c0,"Pyrocitor");
    snprintf(acStack_98,"%d",currentAmmoArray.pyrocitor);
    DebugFontPrintLeft(0x8c,0x141,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.pyrocitor);
    DebugFontPrintLeft(0x7a,0x141,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x150,0x8000c0c0,"Tesla Claw");
    snprintf(acStack_98,"%d",currentAmmoArray.teslaClaw);
    DebugFontPrintLeft(0x8c,0x150,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.teslaClaw);
    DebugFontPrintLeft(0x7a,0x150,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x15f,0x8000c0c0,"Mine Glove");
    snprintf(acStack_98,"%d",currentAmmoArray.mineGlove);
    DebugFontPrintLeft(0x8c,0x15f,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.mineGlove);
    DebugFontPrintLeft(0x7a,0x15f,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x16e,0x8000c0c0,"Blaster");
    snprintf(acStack_98,"%d",currentAmmoArray.blaster);
    DebugFontPrintLeft(0x8c,0x16e,0x80f0f0f0,acStack_98);
    snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.blaster);
    DebugFontPrintLeft(0x7a,0x16e,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x17d,0x8000c0c0,"Bolts");
    snprintf(acStack_98,"%d",g_boltCount);
    DebugFontPrintLeft(0x8c,0x17d,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0xbc,0x100,0x8000c000,"FOG");
    DebugFontPrintLeft(0xbc,0x106,0x8000c000,"---");
    if (DebugSelectedCol == 4) {
      DebugFontPrintLeft(0xb9,DebugSelectedRow * 0xf + 0x112,0x800000c0,",");
    }
    DebugFontPrintLeft(0xc4,0x114,0x8000c0c0,"NearDst");
    dVar3 = 0.0009765625;
    snprintf(acStack_88,"%.02f",(double)(LevelFogNearDist * 0.0009765625));
    DebugFontPrintLeft(0x11c,0x114,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x123,0x8000c0c0,"NearInt");
    dVar2 = 0.3921568691730499;
    dVar1 = 100.0;
    snprintf(acStack_88,"%.02f",-(double)(LevelFogNearIntensity * 0.39215687 - 100.0));
    DebugFontPrintLeft(0x11c,0x123,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x132,0x8000c0c0,"FarDst");
    snprintf(acStack_88,"%.02f",(double)(float)((double)LevelFogFarDist * dVar3));
    DebugFontPrintLeft(0x11c,0x132,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x141,0x8000c0c0,"FarInt");
    snprintf(acStack_88,"%.02f",-(double)(float)((double)LevelFogFarIntensity * dVar2 - dVar1)
                  );
    DebugFontPrintLeft(0x11c,0x141,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x150,0x8000c0c0,"Color_R");
    snprintf(acStack_88,"%d",(ulonglong)levelFog.r);
    DebugFontPrintLeft(0x11c,0x150,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x15f,0x8000c0c0,"Color_G");
    snprintf(acStack_88,"%d",(ulonglong)levelFog.g);
    DebugFontPrintLeft(0x11c,0x15f,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x16e,0x8000c0c0,"Color_B");
    snprintf(acStack_88,"%d",(ulonglong)levelFog.b);
    DebugFontPrintLeft(0x11c,0x16e,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0x160,0x100,0x8000c000,"MISC");
    DebugFontPrintLeft(0x160,0x106,0x8000c000,"----");
    if (DebugSelectedCol == 5) {
      DebugFontPrintLeft(0x15d,DebugSelectedRow * 0xf + 0x112,0x800000c0,",");
    }
    DebugFontPrintLeft(0x168,0x114,0x8000c0c0,"BattleCam");
    DebugFontPrintLeft(0x1ca,0x114,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + ((uint)LZCOUNT(BattleCam) >> 3 & 4)));
    DebugFontPrintLeft(0x168,0x123,0x8000c0c0,"Actuator");
    DebugFontPrintLeft(0x1ca,0x123,0x80f0f0f0,(&PTR_s_off_00737b08)[Actuator]);
    DebugFontPrintLeft(0x168,0x132,0x8000c0c0,"AddSample");
    local_a0[0] = AddSample;
    local_a0[1] = 0;
    DebugFontPrintLeft(0x1ca,0x132,0x80f0f0f0,local_a0);
    DebugFontPrintLeft(0x168,0x141,0x8000c0c0,"AddStart");
    local_a0[1] = 0;
    local_a0[0] = AddStart;
    DebugFontPrintLeft(0x1ca,0x141,0x80f0f0f0,local_a0);
    ResetDebugFontStrings();
    do {
    } while ((DAT_00e5aa70 & 1) != 0);
  }
  return;
}


// 0x0065438 (0x4 bytes)
void STUB_00065438(...)

{
  return;
}


// 0x006543c (0x4 bytes)
void STUB_0006543c(...)

{
  return;
}


// 0x0065440 (0x4 bytes)
void STUB_00065440(...)

{
  return;
}


// 0x0065444 (0x4 bytes)
void STUB_00065444(...)

{
  return;
}


// 0x0065448 (0x4 bytes)
void STUB_00065448(...)

{
  return;
}


// 0x006544c (0x4 bytes)
void STUB_0006544c(...)

{
  return;
}


// 0x0065450 (0x4 bytes)
void STUB_00065450(...)

{
  return;
}


// 0x0065454 (0x4 bytes)
void STUB_00065454(...)

{
  return;
}


// 0x0065458 (0x4 bytes)
void STUB_00065458(...)

{
  return;
}


// 0x006545c (0x4 bytes)
void STUB_0006545c(...)

{
  return;
}


// 0x0065460 (0x4 bytes)
void STUB_00065460(...)

{
  return;
}


// 0x0065464 (0x4 bytes)
void STUB_00065464(...)

{
  return;
}


// 0x0065468 (0x4 bytes)
void STUB_00065468(...)

{
  return;
}


// 0x006546c (0x4 bytes)
void STUB_0006546c(...)

{
  return;
}


// 0x0065470 (0x4 bytes)
void STUB_00065470(...)

{
  return;
}


// 0x0065474 (0x4 bytes)
void STUB_00065474(...)

{
  return;
}


// 0x0065490 (0x178 bytes)
void ScreenPosFromWorldSpace(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float afStack_a0 [16];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  FastMtx4Identity(afStack_a0);
  FastVecMtx4Mul(&local_60,0x951400,afStack_a0);
  fVar1 = param_2[1] * 1024.0;
  fVar2 = *param_2 * 1024.0;
  fVar3 = param_2[2] * 1024.0;
  fVar4 = g_ViewContext.perspScale /
          (local_34 * fVar3 + local_54 * fVar2 + local_44 * fVar1 + local_24);
  *param_1 = ((local_40 * fVar3 + local_60 * fVar2 + local_50 * fVar1 + local_30) * fVar4 + 2048.0)
             * 16.0;
  param_1[1] = ((local_3c * fVar3 + local_5c * fVar2 + local_4c * fVar1 + local_2c) * fVar4 + 2048.0
               ) * 16.0;
  param_1[2] = (local_38 * fVar3 + local_58 * fVar2 + local_48 * fVar1 + local_28) * 0.0009765625;
  return;
}


// 0x0065608 (0x20 bytes)
void Debug_ResetLevelCounters(void)

{
  DAT_0095a3b0 = 0;
  DAT_0095a568 = DAT_0095a564;
  DAT_0095a564 = 0;
  return;
}


// 0x0065628 (0x4 bytes)
void STUB_00065628(...)

{
  return;
}


// 0x006562c (0x4 bytes)
void STUB_0006562c(...)

{
  return;
}


// 0x0065630 (0x4 bytes)
void STUB_00065630(...)

{
  return;
}


// 0x0065634 (0x8 bytes)
undefined8 STUB_00065634_RET_NEG1(...)

{
  return 0xffffffffffffffff;
}


// 0x006563c (0x8 bytes)
undefined8 STUB_0006563c_RET_NEG1(...)

{
  return 0xffffffffffffffff;
}


// 0x0065644 (0x18 bytes)
void STUB_00065644(...)

{
  return;
}



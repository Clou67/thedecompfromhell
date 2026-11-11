// game/update/moby257.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x31cfd0-0x31d370
#include "game/update/moby257.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x031cfd0 (0x14 bytes)
void M257_0031cfd0(void)

{
  DAT_007ffedc = 0x10000;
  return;
}


// 0x031cff8 (0x378 bytes)
/* Moby 257 */

u16 * UpdateMoby_257(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  float fVar7;
  longlong lVar8;
  u16 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> local_30;
  
  lVar8 = (longlong)(int)moby;
  piVar4 = (int *)moby->pVar;
  uVar12 = ZEXT48(piVar4);
  bVar1 = moby->state;
  puVar9 = (u16 *)piVar4[1];
  pSVar5 = Splines[(int)puVar9];
  uVar11 = ZEXT48(pSVar5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((*piVar4 == -1) || (puVar9 == (u16 *)0xffffffff)) {
        puVar9 = (u16 *)DeleteMoby(moby);
      }
      else {
        fVar2 = pSVar5->points[0].y - pSVar5->points[1].y;
        fVar3 = pSVar5->points[0].x - pSVar5->points[1].x;
        fVar7 = pSVar5->points[0].z - pSVar5->points[1].z;
        piVar4[3] = (int)(((float)piVar4[2] * g_FrameTime) /
                         SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2));
        moby->updateDistance = 'd';
        moby->setByGroup = '\0';
        moby->state = '\x01';
        puVar9 = (u16 *)0x64;
      }
    }
    else {
      puVar9 = (u16 *)&g_heroMtx;
      if (g_heroStateType == (u16 *)0xf) {
        puVar9 = (u16 *)MB_IsPntInCuboid((Vec4 *)&g_heroCGPos,(longlong)*piVar4);
        if (puVar9 != (u16 *)0x0) {
          moby->state = '\x02';
          *(undefined2 *)((int)piVar4 + 0x16) = 0;
          puVar9 = (u16 *)0x2;
        }
      }
    }
  }
  else if (bVar1 < 3) {
    auVar13 = ZEXT416(1);
    auVar14 = loadVectorLeftIndexed(0x10,uVar12);
    auVar15 = loadVectorLeftIndexed(0xc,uVar12);
    auVar16 = loadVectorRightIndexed(0x20,uVar12);
    auVar18 = loadVectorRightIndexed(0x1c,uVar12);
    auVar17 = loadVectorLeftIndexed(in_LR,uVar11);
    auVar13 = vectorSubtractUnsignedWordModulo
                        (auVar17,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    fVar2 = (float)piVar4[4];
    auVar15 = vectorAddFloatingPoint(auVar14 | auVar16,auVar15 | auVar18);
    auVar14 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    fVar3 = (float)piVar4[3];
    auVar13 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar13 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    uVar6 = storeVectorElementWordIndexed(auVar15,0x10,uVar12);
    *(undefined4 *)((uint)(piVar4 + 4) & 0xfffffffc) = uVar6;
    if (bVar1 == 0) {
      MB_PathEvalSpline((double)(fVar2 + fVar3),uVar11,0xc,0,lVar8 + 0x10,lVar8 + 0x40,0);
    }
    else {
      moby->updateDistance = -1;
      moby->state = '\x03';
    }
    if (moby->setByGroup != '\0') {
      moby->collision = (ushort *)0x0;
    }
    iVar10 = IsMobyPlayingSound(moby,(int)*(short *)(piVar4 + 5));
    if (iVar10 == 0) {
      iVar10 = PlayMobySound(0,4,moby);
      *(short *)(piVar4 + 5) = (short)iVar10;
    }
    puVar9 = (u16 *)(uint)*(ushort *)((int)piVar4 + 0x16);
    if ((*(ushort *)((int)piVar4 + 0x16) == 0) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       puVar9 = (u16 *)&DAT_0031cfe8, SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 7.0)) {
      *(undefined2 *)((int)piVar4 + 0x16) = 1;
      puVar9 = (u16 *)PlayMobySound(1,0,moby);
    }
  }
  else if (bVar1 < 4) {
    if (moby->enabled == '\0') {
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
    }
    puVar9 = g_heroStateType;
    if ((g_heroStateType != (u16 *)0xf) &&
       (puVar9 = (u16 *)FastCheckBsphereInView(0x4050000000000000,local_30),
       puVar9 == (u16 *)0xffffffff)) {
      moby->setByGroup = '\0';
      piVar4[4] = 0;
      MB_PathEvalSpline(0,uVar11,&DAT_0031cfe8,0,lVar8 + 0x10,lVar8 + 0x40,0);
      moby->enabled = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      *(undefined2 *)((int)piVar4 + 0x16) = 0;
      moby->collision = puVar9;
      moby->state = '\x01';
    }
  }
  return puVar9;
}



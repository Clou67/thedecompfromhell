// game/update/moby871.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x49dc78-0x49e520
#include <stdio.h>
#include "game/update/moby871.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "idol/fastfunc.h"

// 0x049dc78 (0x14 bytes)
void M871_0049dc78(void)

{
  DAT_008c7fbc = 0x10000;
  return;
}


// 0x049dc90 (0xec bytes)
void M871_0049dc90(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  param_1->state = '\0';
  param_1->setByGroup = '\0';
  fVar1 = param_1->pClass->gScale;
  param_1->modeBits = *(MobyModeBit *)&param_1->pClass->mode_bits;
  param_1->scale = fVar1;
  param_1->updateDistance = -1;
  param_1->drawDistance = 0xff;
  param_1->enabled = '\x01';
  UpdateMobyGrids(param_1,0x80807f7f);
  param_1->unk72 = -1;
  param_1->damage = -1;
  param_1->unk71 = -1;
  param_1->occlIndex = 0x7f80;
  param_1->collision = param_1->pClass->collision;
  MB_CopyHeroLights(param_1);
  UpdateMobyTransform(param_1);
  uVar3 = MB_GetPvarsIfMobyHasThem(param_1);
  if ((uint)uVar3 != 0) {
    auVar4 = ZEXT416(0xfffffff0);
    auVar5 = loadVectorLeftIndexed(4,uVar3);
    auVar6 = loadVectorRightIndexed(0x14,uVar3);
    auVar4 = vectorShiftRightAlgebraicWord
                       (auVar5 | auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,uVar3);
    *(undefined4 *)((uint)uVar3 & 0xfffffffc) = uVar2;
  }
  return;
}


// 0x049dda0 (0x780 bytes)
// strings: 00658790: 'Moby 871 could not find mines for group %d\n' | 006587c0: 'Moby 871 short on mines at %d in group %d compared to mine count in pVar %d\n' | 00658810: 'Moby 871 mas extra mines in group %d compared to mine count in pVar %d\n'

/* Moby 871 */

void UpdateMoby_871(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  Spline *spline;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *moby_00;
  int iVar14;
  int iVar15;
  Spline *pSVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> local_80;
  GPiece<16> local_70;
  int local_60;
  MobyInstance *local_5c;
  undefined4 local_58;
  int local_54;
  MobyInstance *local_50;
  float local_4c [3];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar5 = moby->pVar;
    uVar18 = ZEXT48(pvVar5);
    if (pvVar5 != (void *)0x0) {
      if (*(char *)((int)pvVar5 + 0x94) != '\0') {
        iVar14 = MB_damage(moby,0x230000,0);
        iVar15 = MB_HandleDamage(moby,iVar14,uVar18 + 0x20,0,&local_60,0,0,4);
        if (((iVar15 < 3) && (-1 < iVar15)) && (0 < iVar15)) {
          *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        }
        if (1 < local_60) {
          uVar7 = (int)*(uint *)((int)pvVar5 + 0x20) >> 0x1f;
          uVar8 = (int)*(uint *)(iVar14 + 0x2c) >> 0x1f;
          fVar1 = *(float *)(iVar14 + 0x2c);
          if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x20)) - uVar7) <=
              (int)((uVar8 >> 1 ^ *(uint *)(iVar14 + 0x2c)) - uVar8)) {
            uVar19 = 0;
            *(undefined4 *)((int)pvVar5 + 0x20) = 0;
            MB_SetStateByGroup(0,*(undefined4 *)((int)pvVar5 + 0x74),3);
            MB_genericExplosion
                      (uVar19,uVar19,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,moby,local_80,0,1,0xffffffffffffffff,10
                       ,3,0x10);
            DeleteMoby(moby);
            return;
          }
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          *(float *)((int)pvVar5 + 0x20) = *(float *)((int)pvVar5 + 0x20) - fVar1;
          auVar21 = loadVectorLeftIndexed(0x18,0x49dd7c);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar9 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar18);
          *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
          MB_UpdateLightsTransition(moby,uVar18 + 0x60);
        }
        moby->damage = -1;
      }
      MB_ColorDyingMoby(moby,uVar18 + 0x60);
      if (*(int *)((int)pvVar5 + 0x70) != -1) {
        spline = Splines[*(int *)((int)pvVar5 + 0x70)];
        if (moby->state == 0) {
          local_5c = (MobyInstance *)0x0;
          dVar20 = 0.0;
          local_58 = 0;
          fVar1 = spline->points[0].x;
          fVar2 = spline->points[0].y;
          fVar3 = spline->points[0].z;
          fVar4 = spline->points[0].w;
          iVar14 = spline->cnt;
          if (0 < iVar14) {
            iVar15 = 0;
            pSVar16 = spline;
            do {
              iVar15 = iVar15 + 1;
              pfVar17 = (float *)((int)spline + (iVar15 - (iVar15 / iVar14) * iVar14) * 0x10 + 0x10)
              ;
              fVar11 = pSVar16->points[0].y - pfVar17[1];
              fVar12 = pSVar16->points[0].x - *pfVar17;
              fVar13 = pSVar16->points[0].z - pfVar17[2];
              pSVar16->points[0].w = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
              iVar14 = spline->cnt;
              pSVar16 = (Spline *)pSVar16->points;
            } while (iVar15 < iVar14);
          }
          iVar14 = MB_GetFirstMobyInGroup
                             (&local_5c,*(int *)((int)pvVar5 + 0x74),'\x01','\0');
          if (iVar14 != 0) {
            printf("Moby 871 could not find mines for group %d\n",
                         *(undefined4 *)((int)pvVar5 + 0x74));
            return;
          }
          local_54 = PathFindClosestPnt((float)dVar20,(Vec4 *)&moby->pos,spline);
          *(int *)((int)pvVar5 + 0x90) = local_54;
          if (0 < *(int *)((int)pvVar5 + 0x78)) {
            iVar14 = 0;
            do {
              pvVar6 = local_5c->pVar;
              *(MobyInstance **)((int)pvVar6 + 0xa0) = moby;
              (local_5c->pos).x = fVar1;
              (local_5c->pos).y = fVar2;
              (local_5c->pos).z = fVar3;
              (local_5c->pos).w = fVar4;
              *(float *)((int)pvVar6 + 0x80) = fVar1;
              *(float *)((int)pvVar6 + 0x84) = fVar2;
              *(float *)((int)pvVar6 + 0x88) = fVar3;
              *(float *)((int)pvVar6 + 0x8c) = fVar4;
              *(float *)((int)pvVar6 + 0x70) = fVar1;
              *(float *)((int)pvVar6 + 0x74) = fVar2;
              *(float *)((int)pvVar6 + 0x78) = fVar3;
              *(float *)((int)pvVar6 + 0x7c) = fVar4;
              *(int *)((int)pvVar6 + 0x90) = local_54;
              *(int *)((int)pvVar6 + 0x94) = local_54 + 1;
              iVar15 = MB_GetNextMobyInGroup(&local_5c,local_5c,'\x01','\0');
              if (iVar15 != 0) {
                iVar15 = *(int *)((int)pvVar5 + 0x78);
                if (iVar14 < iVar15 + -1) {
                  printf("Moby 871 short on mines at %d in group %d compared to mine count in pVar %d\n"
                               ,iVar14 + 1,*(undefined4 *)((int)pvVar5 + 0x74),iVar15);
                }
                else if (iVar14 == iVar15 + -1) {
                  printf("Moby 871 mas extra mines in group %d compared to mine count in pVar %d\n"
                               ,*(undefined4 *)((int)pvVar5 + 0x74),iVar15);
                }
                *(int *)((int)pvVar5 + 0x78) = iVar14 + 1;
                break;
              }
              MB_PathMoveDist
                        ((double)*(float *)((int)pvVar5 + 0x80),spline,local_70,&local_54,&local_58)
              ;
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)pvVar5 + 0x78));
          }
          if (*(char *)((int)pvVar5 + 0x94) == '\0') {
            moby->collision = (ushort *)0x0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          }
          if (*(char *)((int)pvVar5 + 0x95) == '\0') {
            moby->modeBits = moby->modeBits | DISABLED;
          }
          moby->state = '\x01';
        }
        else if (moby->state < 2) {
          local_50 = (MobyInstance *)0x0;
          MB_GetFirstMobyInGroup(&local_50,*(int *)((int)pvVar5 + 0x74),'\x01','\0');
          if (0 < *(int *)((int)pvVar5 + 0x78)) {
            iVar14 = 0;
            do {
              pvVar6 = local_50->pVar;
              iVar15 = *(int *)((int)pvVar6 + 0x90);
              fVar1 = *(float *)((int)pvVar6 + 0x84) - spline->points[iVar15].y;
              fVar2 = *(float *)((int)pvVar6 + 0x80) - spline->points[iVar15].x;
              fVar3 = *(float *)((int)pvVar6 + 0x88) - spline->points[iVar15].z;
              local_4c[0] = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
              MB_PathMoveDist
                        ((double)(*(float *)((int)pvVar5 + 0x7c) * g_FrameTime),spline,
                         (int)pvVar6 + 0x80,(int)pvVar6 + 0x90,local_4c,&DAT_00720000,1);
              *(int *)((int)pvVar6 + 0x94) = *(int *)((int)pvVar6 + 0x90) + 1;
              if ((((local_50 == (MobyInstance *)0x0) || (local_50->state == 0xfe)) ||
                  (local_50->state == 0xfd)) && (*(int *)((int)pvVar5 + 0x84) != -1)) {
                *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x80) - (local_50->pos).x;
                *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 0x84) - (local_50->pos).y;
                fVar1 = (local_50->pos).z;
                *(undefined4 *)((int)pvVar6 + 0x6c) = *(undefined4 *)((int)pvVar6 + 0x8c);
                *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x88) - fVar1;
                (local_50->pos).x = *(float *)((int)pvVar6 + 0x80);
                (local_50->pos).y = *(f32 *)((int)pvVar6 + 0x84);
                (local_50->pos).z = *(f32 *)((int)pvVar6 + 0x88);
                (local_50->pos).w = *(f32 *)((int)pvVar6 + 0x8c);
                iVar15 = FastDecTimerS32((int)pvVar6 + 0x98);
                moby_00 = local_50;
                if ((iVar15 != 0) && (*(int *)((int)pvVar6 + 0x90) == *(int *)((int)pvVar5 + 0x90)))
                {
                  local_50->state = '\0';
                  local_50->setByGroup = '\0';
                  local_50->modeBits = *(MobyModeBit *)&local_50->pClass->mode_bits;
                  fVar1 = local_50->pClass->gScale;
                  local_50->updateDistance = -1;
                  local_50->scale = fVar1;
                  local_50->drawDistance = 0xff;
                  local_50->enabled = '\x01';
                  UpdateMobyGrids(local_50,0x80807f7f);
                  moby_00->unk72 = -1;
                  moby_00->damage = -1;
                  moby_00->occlIndex = 0x7f80;
                  moby_00->unk71 = -1;
                  moby_00->collision = moby_00->pClass->collision;
                  MB_CopyHeroLights(moby_00);
                  UpdateMobyTransform(moby_00);
                  uVar19 = MB_GetPvarsIfMobyHasThem(moby_00);
                  if ((uint)uVar19 != 0) {
                    auVar21 = ZEXT416(0xfffffff0);
                    auVar22 = loadVectorLeftIndexed(4,uVar19);
                    auVar23 = loadVectorRightIndexed(0x14,uVar19);
                    auVar21 = vectorShiftRightAlgebraicWord
                                        (auVar22 | auVar23,
                                         auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                         auVar21 << 0x60);
                    auVar21 = vectorConvertFromSignedFixedPointWord(auVar21,0);
                    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                        auVar21 << 0x60,0,uVar19);
                    *(undefined4 *)((uint)uVar19 & 0xfffffffc) = uVar10;
                  }
                }
              }
              MB_GetNextMobyInGroup(&local_50,local_50,'\x01','\0');
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)pvVar5 + 0x78));
          }
        }
        MB_RegisterLameShadow(1.5,moby);
      }
    }
  }
  return;
}



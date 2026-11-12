// game/update/moby553.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x396850-0x3982d0
#include <stdio.h>
#include "game/update/moby553.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby1212.h"
#include "game/update/moby31.h"
#include "game/update/moby42.h"
#include "idol/fastfunc.h"
#include "idol/xUnk.h"

// 0x0396850 (0x14 bytes)
void M553_00396850(void)

{
  DAT_00842c54 = 0x10000;
  return;
}


// shared update function, registered for oClasses 466, 480, 485, 486, 488, 490, 493, 494, 495, 498, 555
// 0x03968d8 (0x19e4 bytes)
// inlined: FastAtan2 @0x3980a0
// strings: 00656928: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 466
   Moby 480
   Moby 485
   Moby 486
   Moby 488
   Moby 490
   Moby 493
   Moby 494
   Moby 495
   Moby 498
   Moby 555 */

void UpdateMoby_466(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 uVar5;
  byte bVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  u16 *puVar12;
  Spline *pSVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  Vec4 *pVVar18;
  ulonglong uVar19;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar20;
  longlong lVar21;
  MobyModeBit MVar25;
  float *pfVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong uVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMoby;
  longlong lVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f28;
  undefined8 uVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  undefined8 uVar41;
  ulonglong in_f31;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x220;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x46] = in_LR;
  puVar17[0x40] = in_f28;
  puVar17[0x41] = in_f29;
  puVar17[0x42] = in_f30;
  puVar17[0x43] = in_f31;
  puVar17[0x3f] = unaff_r31;
  puVar17[0x3a] = unaff_r26;
  lVar27 = lVar20 + 0x10;
  puVar17[0x3e] = unaff_r30;
  puVar17[0x3c] = unaff_r28;
  pvVar11 = moby->pVar;
  uVar30 = ZEXT48(pvVar11);
  puVar17[0x3d] = unaff_r29;
  puVar17[0x3b] = unaff_r27;
  puVar17[0x39] = unaff_r25;
  puVar17[0x38] = unaff_r24;
  uVar5 = moby->state;
  FUN_005e7e98(uVar19 - 0x160,lVar27);
  if (pvVar11 == (void *)0x0) {
    return;
  }
  if (moby->state == '\0') {
    if (*(int *)((int)pvVar11 + 0x74) == -1) {
      uVar22 = (int)moby - (int)g_MobyInstance;
      puVar17[0x36] =
           (longlong)(int)(((int)uVar22 >> 8) + (uint)((int)uVar22 < 0 && (uVar22 & 0xff) != 0));
      MVar10 = moby->oClass;
      uVar39 = FastDoubleToInt((double)(longlong)puVar17[0x36]);
      printf("WARNING moby class %d instance %d has no path!\n",MVar10,uVar39);
    }
    else {
      pSVar13 = Splines[*(int *)((int)pvVar11 + 0x74)];
      pVVar18 = pSVar13->points + pSVar13->cnt + -1;
      fVar1 = pSVar13->points[0].y - pVVar18->y;
      fVar2 = pSVar13->points[0].x - pVVar18->x;
      fVar3 = pSVar13->points[0].z - pVVar18->z;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        pSVar13->cnt = pSVar13->cnt + -1;
      }
    }
    moby->drawDistance = 0x7f;
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar11 + 0x138) = *(undefined4 *)((int)pvVar11 + 0xfc);
    *(int *)((int)pvVar11 + 0x178) = (int)moby->drawDistance;
  }
  UpdateMoby_42(moby);
  dVar40 = 0.0;
  if (moby->oClass != TRANSPORT_SHIP) {
    FastDecTimerS16(uVar30 + 0x14a);
    bVar6 = *(byte *)((int)pvVar11 + 0x149);
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        uVar22 = (int)*(uint *)((int)pvVar11 + 0xfc) >> 0x1f;
        uVar14 = (int)*(uint *)((int)pvVar11 + 0x138) >> 0x1f;
        if (((int)((uVar22 >> 1 ^ *(uint *)((int)pvVar11 + 0xfc)) - uVar22) <
             (int)((uVar14 >> 1 ^ *(uint *)((int)pvVar11 + 0x138)) - uVar14)) &&
           (fVar1 = g_FrameTimeSq * 20.0 + *(float *)((int)pvVar11 + 0xfc),
           *(float *)((int)pvVar11 + 0xfc) = fVar1, *(float *)((int)pvVar11 + 0x138) < fVar1)) {
          *(float *)((int)pvVar11 + 0xfc) = *(float *)((int)pvVar11 + 0x138);
        }
        iVar24 = 0;
        uVar28 = uVar30;
        do {
          if (((*(short *)((int)pvVar11 + 0x14a) == 0) &&
              (iVar23 = *(int *)((int)uVar28 + 0x150), iVar23 != -1)) &&
             (iVar23 = MB_IsPntInCuboid((Vec4 *)lVar27,(longlong)iVar23), iVar23 != 0)) {
            auVar42 = ZEXT416(0xffffffff);
            auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
            *(f32 *)((int)pvVar11 + 0x160) = (moby->pos).x;
            *(f32 *)((int)pvVar11 + 0x164) = (moby->pos).y;
            auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            uVar16 = *(undefined4 *)((int)pvVar11 + iVar24 * 4 + 0x150);
            *(f32 *)((int)pvVar11 + 0x168) = (moby->pos).z;
            fVar7 = (moby->pos).w;
            *(char *)((int)pvVar11 + 0x148) = (char)uVar16;
            *(f32 *)((int)pvVar11 + 0x16c) = fVar7;
            *(undefined1 *)((int)pvVar11 + 0x149) = 1;
            fVar7 = (moby->rotation).z;
            *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
            *(f32 *)((int)pvVar11 + 0x14c) = fVar7;
            moby->state = '\x03';
            auVar42 = loadVectorLeftIndexed(0xc,0x396868);
            auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar42 = vectorMultiplyAddFloatingPoint
                                (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                         auVar42 << 0x60,auVar43);
            auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
            auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x11c,
                                uVar30);
            *(undefined4 *)((int)pvVar11 + 0x11cU & 0xfffffffc) = uVar16;
            break;
          }
          iVar24 = iVar24 + 1;
          uVar28 = uVar28 + 4;
        } while (iVar24 < 4);
      }
      else {
        OrganicDeltAngSpeed
                  ((double)Cuboids[*(byte *)((int)pvVar11 + 0x148)].rot.z,
                   (double)(g_FrameTimeSq * 1.0471976),(double)(g_FrameTimeSq * 3.1415927),
                   (double)(g_FrameTime * 3.1415927),lVar20,&DAT_00720000,uVar30 + 0x7c);
        bVar6 = *(byte *)((int)pvVar11 + 0x148);
        fVar1 = (moby->pos).y - Cuboids[bVar6].pos.y;
        fVar2 = (moby->pos).x - Cuboids[bVar6].pos.x;
        if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
           (dVar32 = (double)FastSubRots((moby->rotation).z,Cuboids[bVar6].rot.z),
           dVar32 < 0.1745329201221466)) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          *(undefined1 *)((int)pvVar11 + 0x149) = 2;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x20,0x396868);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x14a,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x14a) = uVar15;
        }
        bVar6 = *(byte *)((int)pvVar11 + 0x148);
        dVar33 = (double)(moby->pos).y;
        dVar35 = (double)(moby->pos).x;
        fVar2 = (float)((double)Cuboids[bVar6].pos.y - dVar33);
        fVar3 = (float)((double)Cuboids[bVar6].pos.x - dVar35);
        dVar37 = (double)(moby->pos).z;
        fVar4 = (float)((double)Cuboids[bVar6].pos.z - dVar37);
        dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(g_FrameTime * 3.0) / dVar38);
        dVar32 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar32 = (double)(fVar4 * fVar1);
        }
        dVar34 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar34 = (double)(fVar2 * fVar1);
        }
        dVar36 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar32 = (double)(fVar4 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar34 = (double)(fVar2 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar36 = (double)(fVar3 * fVar1);
        }
        (moby->pos).z = (float)(dVar37 + dVar32);
        (moby->pos).y = (float)(dVar33 + dVar34);
        (moby->pos).x = (float)(dVar35 + dVar36);
      }
    }
    else if (bVar6 < 3) {
      if (*(short *)((int)pvVar11 + 0x14a) == 0) {
        *(undefined1 *)((int)pvVar11 + 0x149) = 3;
        *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
      }
    }
    else if (bVar6 < 4) {
      OrganicDeltAngSpeed
                ((double)*(float *)((int)pvVar11 + 0x14c),(double)(g_FrameTimeSq * 1.0471976),
                 (double)(g_FrameTimeSq * 3.1415927),(double)(g_FrameTime * 3.1415927),
                 lVar20,&DAT_00720000,uVar30 + 0x7c);
      fVar1 = (moby->pos).y - *(float *)((int)pvVar11 + 0x164);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar11 + 0x160);
      if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
         (dVar32 = (double)FastSubRots
                                     ((moby->rotation).z,*(float *)((int)pvVar11 + 0x14c)),
         dVar32 < 0.03490658476948738)) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        *(undefined1 *)((int)pvVar11 + 0x149) = 0;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x14a,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x14a) = uVar15;
        *(undefined4 *)((int)pvVar11 + 0xfc) = 0;
        *(undefined4 *)((int)pvVar11 + 0x11c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
      }
      dVar33 = (double)(moby->pos).y;
      fVar1 = (float)((double)*(float *)((int)pvVar11 + 0x164) - dVar33);
      dVar35 = (double)(moby->pos).x;
      fVar2 = (float)((double)*(float *)((int)pvVar11 + 0x160) - dVar35);
      dVar37 = (double)(moby->pos).z;
      fVar3 = (float)((double)*(float *)((int)pvVar11 + 0x168) - dVar37);
      dVar38 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      dVar32 = (double)(g_FrameTime * 3.0);
      if (dVar38 - (double)(g_FrameTime * 3.0) < 0.0) {
        dVar32 = dVar38;
      }
      fVar4 = (float)(dVar32 / dVar38);
      dVar32 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar32 = (double)(fVar3 * fVar4);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar1 * fVar4);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar2 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar32 = (double)(fVar3 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar1 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar2 * fVar4);
      }
      (moby->pos).z = (float)(dVar37 + dVar32);
      (moby->pos).y = (float)(dVar33 + dVar34);
      (moby->pos).x = (float)(dVar35 + dVar36);
    }
  }
  if (uVar5 == '\0') {
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e5) {
      if ((short)MVar10 < 0x1d3) {
        if (0x1d1 < (short)MVar10) {
LAB_00397000:
          AttachManipulator(moby,0,(int)pvVar11 + 0x180);
          *(undefined4 *)((int)pvVar11 + 0x140) = 0;
        }
      }
      else if (MVar10 == GRAB_HELICOPTER) goto LAB_00397000;
    }
    else if ((short)MVar10 < 0x1ee) {
      if ((short)MVar10 < 0x1e7) goto LAB_00397000;
      if ((short)MVar10 < 0x1e9) {
        if (0x1e7 < (short)MVar10) {
LAB_00397020:
          AttachManipulator(moby,0,(int)pvVar11 + 0x180);
          *(undefined4 *)((int)pvVar11 + 0x140) = 0;
          AttachManipulator(moby,1,(int)pvVar11 + 0x1c0);
          *(undefined4 *)((int)pvVar11 + 0x144) = 0;
        }
      }
      else if (0x1ec < (short)MVar10) goto LAB_00397020;
    }
    else if ((short)MVar10 < 499) {
      if (((short)MVar10 < 0x1f0) || (0x1f1 < (short)MVar10)) goto LAB_00397000;
    }
    else if (MVar10 == LOG_SHIP_END) goto LAB_00397000;
  }
  else {
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e5) {
      if ((short)MVar10 < 0x1d3) {
        if (0x1d1 < (short)MVar10) {
LAB_003970e0:
          dVar32 = (double)FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x140),
                                      g_FrameTime * 12.566371);
          *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
          FastQuaternionToEuler(uVar30 + 400,0);
        }
      }
      else if (MVar10 == GRAB_HELICOPTER) goto LAB_003970e0;
    }
    else if ((short)MVar10 < 0x1ee) {
      if ((short)MVar10 < 0x1e7) goto LAB_0039711c;
      if ((short)MVar10 < 0x1e9) {
        if (0x1e7 < (short)MVar10) {
LAB_00397158:
          dVar33 = 12.566370964050293;
          dVar32 = (double)FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x140),
                                      g_FrameTime * 12.566371);
          *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
          FastQuaternionToEuler(uVar30 + 400,2);
          dVar32 = (double)FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x144),
                                      (float)((double)g_FrameTime * dVar33));
          *(float *)((int)pvVar11 + 0x144) = (float)dVar32;
          FastQuaternionToEuler(uVar30 + 0x1d0,2);
        }
      }
      else if (0x1ec < (short)MVar10) goto LAB_00397158;
    }
    else if ((short)MVar10 < 499) {
      if (((short)MVar10 < 0x1f0) || (0x1f1 < (short)MVar10)) {
LAB_0039711c:
        dVar32 = (double)FastWrapRot
                                   (*(float *)((int)pvVar11 + 0x140),
                                    g_FrameTime * 12.566371);
        *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
        FastQuaternionToEuler(uVar30 + 400,2);
      }
    }
    else if (MVar10 == LOG_SHIP_END) goto LAB_0039711c;
  }
  if (*(int *)((int)pvVar11 + 0x17c) != -1) {
    pMoby = g_MobyInstance + *(int *)((int)pvVar11 + 0x17c);
    pMoby->drawDistance = 0x7f;
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e1) {
      if (0x1df < (short)MVar10) {
        fVar1 = (moby->transform).v0.y;
        fVar2 = (moby->transform).v2.y;
        fVar3 = (moby->transform).v0.z;
        fVar4 = (moby->transform).v2.z;
        (pMoby->pos).x =
             (moby->pos).x + (moby->transform).v2.x * -5.0 + (moby->transform).v0.x * 0.5;
        (pMoby->pos).y = (moby->pos).y + fVar2 * -5.0 + fVar1 * 0.5;
        (pMoby->pos).z = (moby->pos).z + fVar4 * -5.0 + fVar3 * 0.5;
        (pMoby->pos).w = (moby->pos).w;
        (pMoby->rotation).x = (moby->rotation).x;
        fVar1 = (moby->rotation).y;
        (pMoby->rotation).y = fVar1;
        (pMoby->rotation).z = (moby->rotation).z;
        (pMoby->rotation).w = (moby->rotation).w;
        dVar32 = (double)FastWrapRot(fVar1,1.5707964);
        (pMoby->rotation).y = (float)dVar32;
        UpdateMobyAnimFrame(pMoby);
        UpdateMobyTransform(pMoby);
        PostUpdateMobyLockTransform(pMoby);
        pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      }
    }
    else if (MVar10 == LOG_SHIP_1) {
      fVar1 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.z;
      (pMoby->pos).x = (moby->transform).v2.x * -2.0 + (moby->pos).x;
      (pMoby->pos).y = fVar1 * -2.0 + (moby->pos).y;
      (pMoby->pos).z = fVar2 * -2.0 + (moby->pos).z;
      (pMoby->pos).w = (moby->pos).w;
      (pMoby->rotation).x = (moby->rotation).x;
      (pMoby->rotation).y = (moby->rotation).y;
      (pMoby->rotation).z = (moby->rotation).z;
      (pMoby->rotation).w = (moby->rotation).w;
      UpdateMobyAnimFrame(pMoby);
      UpdateMobyTransform(pMoby);
      PostUpdateMobyLockTransform(pMoby);
      pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
    }
  }
  iVar24 = MB_damage(lVar20,0x210000,0);
  if (iVar24 == 0) goto LAB_00397fb8;
  ShipsKilledCounts.Eudora = ShipsKilledCounts.Eudora + 1;
  if (9 < ShipsKilledCounts.Eudora) {
    MB_UnlockSkillPoint(6);
  }
  MVar10 = moby->oClass;
  if (0x1ec < (short)MVar10) {
    if ((short)MVar10 < 0x1f2) {
      if ((short)MVar10 < 0x1ee) {
        lVar29 = uVar19 - 0x120;
        dVar32 = 0.75;
        *(undefined4 *)((int)puVar17 + 0x11c) = 0;
        *(undefined4 *)(puVar17 + 0x23) = 0;
        *(undefined4 *)((int)puVar17 + 0x114) = 0;
        *(undefined4 *)(puVar17 + 0x22) = 0;
        GetBonePosition(lVar20,0,lVar29);
        *(float *)(puVar17 + 0x21) = (float)((double)*(float *)(puVar17 + 0x21) + dVar32);
        uVar41 = 0x3ff0000000000000;
        uVar39 = 0x402a000000000000;
        MB_SpawnExplosionSparks(0x3ff0000000000000,0x402a000000000000,lVar20,lVar29);
        GetBonePosition(lVar20,1,lVar29);
        *(float *)(puVar17 + 0x21) = (float)((double)*(float *)(puVar17 + 0x21) + dVar32);
        MB_SpawnExplosionSparks(uVar41,uVar39,lVar20,lVar29);
        fVar1 = (moby->pos).z;
        fVar7 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar17 + 0x104) = fVar7;
        *(undefined4 *)((int)puVar17 + 0x10c) = 0;
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        *(float *)(puVar17 + 0x21) = (float)(dVar32 + (double)fVar1);
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        MB_genericExplosion
                  (dVar40,dVar40,0x4000000000000000,uVar41,0x40f86a0000000000,0x4008000000000000,
                   0x402e000000000000,lVar20,uVar19 - 0x110,lVar29);
        PlayMobySound(1,0,moby);
        *(MobyInstance **)(puVar17 + 0x2c) = moby;
        *(undefined4 *)((int)puVar17 + 0x15c) = 0;
        *(undefined4 *)(puVar17 + 0x2b) = 0;
        *(undefined **)((int)puVar17 + 0x164) = &DAT_00810000;
        *(undefined4 *)((int)puVar17 + 0x16c) = 0x40000000;
        *(undefined4 *)((int)puVar17 + 0x154) = 0;
        *(undefined4 *)(puVar17 + 0x2a) = 0;
        *(undefined4 *)(puVar17 + 0x2e) = 0;
        CollMobySphere(0x4018000000000000,lVar27,0x40000000,0x10,lVar20,uVar19 - 0xd0);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x170,
                            uVar30);
        *(undefined4 *)((int)pvVar11 + 0x170U & 0xfffffffc) = uVar16;
        *(undefined4 *)((int)pvVar11 + 0x174) = 1;
      }
      else if ((short)MVar10 < 0x1f0) goto LAB_00397498;
    }
    else if ((short)MVar10 < 0x22b) {
      if ((short)MVar10 < 499) goto LAB_00397498;
    }
    else if ((short)MVar10 < 0x22c) goto LAB_00397498;
    goto LAB_00397770;
  }
  if ((short)MVar10 < 0x1e5) {
    if ((short)MVar10 < 0x1d3) {
      if (0x1d1 < (short)MVar10) goto LAB_00397498;
    }
    else if (MVar10 == GRAB_HELICOPTER) goto LAB_00397498;
  }
  else {
    if ((short)MVar10 < 0x1e9) {
      if ((short)MVar10 < 0x1e7) {
        *(MobyInstance **)(puVar17 + 0x26) = moby;
        *(undefined **)((int)puVar17 + 0x134) = &DAT_00810000;
        *(undefined4 *)((int)puVar17 + 0x13c) = 0x3f800000;
        *(undefined4 *)((int)puVar17 + 300) = 0;
        *(undefined4 *)(puVar17 + 0x25) = 0;
        *(undefined4 *)((int)puVar17 + 0x124) = 0;
        *(undefined4 *)(puVar17 + 0x24) = 0;
        *(undefined4 *)(puVar17 + 0x28) = 0;
        CollMobySphere(0x4010000000000000,lVar27,&DAT_00396868,0x10,lVar20,uVar19 - 0x100)
        ;
      }
      else if ((short)MVar10 < 0x1e8) goto LAB_00397770;
    }
    else if (MVar10 != CHAINSAW_SHIP) goto LAB_00397770;
LAB_00397498:
    fVar1 = (moby->pos).z;
    *(undefined4 *)((int)puVar17 + 0xec) = 0;
    *(undefined4 *)((int)puVar17 + 0xfc) = 0;
    *(undefined4 *)(puVar17 + 0x1f) = 0;
    fVar7 = (moby->pos).x;
    *(undefined4 *)((int)puVar17 + 0xf4) = 0;
    *(undefined4 *)(puVar17 + 0x1e) = 0;
    fVar8 = (moby->pos).y;
    *(f32 *)(puVar17 + 0x1c) = fVar7;
    *(f32 *)((int)puVar17 + 0xe4) = fVar8;
    puVar17[0x12] = 0xffffffffffffffff;
    puVar17[0x14] = 1;
    puVar17[0x15] = 1;
    *(float *)(puVar17 + 0x1d) = fVar1 + 0.75;
    puVar17[0x16] = 0xffffffffffffffff;
    puVar17[0x17] = 0;
    MB_genericExplosion
              (dVar40,dVar40,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,lVar20,uVar19 - 0x130,uVar19 - 0x140,
               &DAT_00396868,0,10,3,4);
    MVar10 = moby->oClass;
    if ((MVar10 == LOG_SHIP_CARRIER) || (MVar10 == LOG_SHIP_END)) {
      PlayMobySound(0,0,moby);
    }
    else if (MVar10 != BALL_SHIP_2) {
      PlayMobySound(1,0,moby);
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x170,uVar30);
    *(undefined4 *)((int)pvVar11 + 0x170U & 0xfffffffc) = uVar16;
    *(undefined4 *)((int)pvVar11 + 0x174) = 1;
  }
LAB_00397770:
  fVar9 = DAT_0071f408;
  lVar29 = lVar20 + 0x40;
  fVar1 = (moby->transform).v0.x;
  fVar4 = DAT_0071f408 * 0.075;
  fVar2 = (moby->transform).v0.y;
  fVar3 = (moby->transform).v0.z;
  *(float *)((int)puVar17 + 0xdc) = (moby->transform).v0.w;
  MVar10 = moby->oClass;
  fVar3 = fVar3 * fVar4;
  *(float *)(puVar17 + 0x1a) = fVar1 * fVar4;
  *(float *)((int)puVar17 + 0xd4) = fVar2 * fVar4;
  *(float *)(puVar17 + 0x1b) = fVar3;
  *(float *)(puVar17 + 0x1b) = fVar9 * 0.08 + fVar3;
  fVar1 = g_FrameTimeSq;
  dVar33 = 90.5;
  dVar32 = 12.0;
  if (MVar10 == SNOW_PLOW) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x63f,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x641,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x642,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == GRAB_HELICOPTER) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x642,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x643,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x644,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == BALL_SHIP_2) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x645,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    iVar24 = 0;
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)g_FrameTimeSq;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x646,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 6);
  }
  else if (MVar10 == CHAINSAW_SHIP) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x647,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x648,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x649,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_1) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x64d,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x64e,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_2) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x64f,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x650,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x651,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x658,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_CARRIER) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x652,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x653,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x654,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == TANK_SHIP) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x793,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)g_FrameTimeSq;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x794,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    iVar23 = 0;
    iVar24 = 0;
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)g_FrameTimeSq;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x795,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar23 = iVar23 + 1;
    } while (iVar23 < 3);
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)g_FrameTimeSq;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x796,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 3);
  }
LAB_00397fb8:
  moby->damage = -1;
  if (*(int *)((int)pvVar11 + 0x174) != 0) {
    iVar24 = FastDecTimerS32(uVar30 + 0x170);
    if (iVar24 != 0) {
      fVar1 = (moby->pos).x - GameCamera.posX;
      fVar2 = (moby->pos).y - GameCamera.posY;
      dVar33 = ABS((double)fVar1);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar17 + 0x30) = fVar1;
      *(float *)((int)puVar17 + 0x184) = fVar2;
      fVar1 = GameCamera.rot.radius;
      *(float *)(puVar17 + 0x31) = (float)(dVar33 - dVar35);
      uVar30 = (ulonglong)(*(uint *)(puVar17 + 0x30) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x31) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x184) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)(puVar17 + 0x30));
      if ((double)*(float *)(puVar17 + 0x31) - dVar40 < 0.0) {
        dVar32 = dVar35;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar17 + 0x184));
      if ((double)*(float *)(puVar17 + 0x31) - dVar40 < 0.0) {
        dVar35 = dVar33;
      }
      fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar40 < dVar32) {
        lVar20 = uVar19 - 0x210;
        lVar27 = uVar19 - 0x94;
        lVar29 = uVar19 - 0x84;
        lVar31 = 2;
        fVar4 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
        fVar9 = fVar4 * fVar4;
        *(float *)(puVar17 + 0x33) = fVar4;
        *(float *)(puVar17 + 0x32) = fVar4;
        *(float *)((int)puVar17 + 0x194) = fVar4;
        *(float *)((int)puVar17 + 0x18c) = fVar4;
        fVar4 = fVar9 * fVar9;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar9;
        *(float *)((int)puVar17 + 0x194) = *(float *)((int)puVar17 + 0x194) * fVar4;
        *(float *)(puVar17 + 0x33) = *(float *)(puVar17 + 0x33) * fVar4 * fVar9;
        do {
          *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar4 * fVar4;
          iVar24 = (int)lVar27;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0x94;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar27 = lVar29;
        do {
          fVar4 = *pfVar26;
          fVar9 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar4;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar20 = 2;
        do {
          iVar24 = (int)lVar21;
          iVar23 = (int)lVar29;
          lVar21 = lVar21 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar24 + 0x18c)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar40 = (double)FastSubRots(fVar1,(float)dVar40);
      if (1.5707963705062866 < dVar40) {
        MVar25 = moby->modeBits;
        puVar12 = moby->pClass->collision;
        *(undefined4 *)((int)pvVar11 + 0x174) = 0;
        moby->collision = puVar12;
        iVar24 = *(int *)((int)pvVar11 + 0x17c);
        moby->modeBits =
             MVar25 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                       HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        if (iVar24 != -1) {
          g_MobyInstance[iVar24].modeBits =
               g_MobyInstance[iVar24].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        return;
      }
    }
    iVar24 = *(int *)((int)pvVar11 + 0x17c);
    moby->collision = (ushort *)0x0;
    MVar25 = moby->modeBits | (UNK_40|DISABLED);
    moby->modeBits = MVar25;
    if (iVar24 != -1) {
      g_MobyInstance[iVar24].modeBits = g_MobyInstance[iVar24].modeBits | (UNK_40|DISABLED);
      MVar25 = moby->modeBits;
    }
    moby->modeBits =
         MVar25 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  }
  return;
}


// 0x03982bc (0x14 bytes)
void M553_003982bc(void)

{
  DAT_00842cc4 = 0x10000;
  return;
}



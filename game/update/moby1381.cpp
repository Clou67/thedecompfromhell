// game/update/moby1381.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2666e8-0x266f1c
#include "game/update/moby1381.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby127.h"
#include "game/update/moby200.h"
#include "idol/fastfunc.h"

// 0x02666e8 (0x14 bytes)
void M1381_002666e8(void)

{
  DAT_0079c7ec = 0x10000;
  return;
}


// 0x0266758 (0x7c4 bytes)
/* Moby 1381 */

void UpdateMoby_1381(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  f32 fVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  MobyInstance *pMVar13;
  Cuboid *pCVar14;
  int iVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 in_LR;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  float fVar27;
  
  pvVar7 = moby->pVar;
  uVar18 = ZEXT48(pvVar7);
  if (pvVar7 != (void *)0x0) {
    dVar19 = (double)(DAT_0079c814 * g_FrameTimeSq);
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar7 + 0x340);
      *(float *)((int)pvVar7 + 0x340) = -(g_FrameTimeSq * 5.0 - *(float *)((int)pvVar7 + 0x340));
      fVar8 = (moby->pos).z;
      uVar9 = (int)fVar8 >> 0x1f;
      if ((int)((uVar9 >> 1 ^ (uint)fVar8) - uVar9) < 0x41a00000) {
        iVar15 = 0;
        if (0 < *(int *)((int)pvVar7 + 0x338)) {
          do {
            FUN_002a0dec(g_MobyInstance + *(int *)((int)uVar18 + 0x50));
            iVar15 = iVar15 + 1;
            uVar18 = uVar18 + 0x30;
          } while (iVar15 < *(int *)((int)pvVar7 + 0x338));
        }
        DeleteMoby(moby);
        return;
      }
    }
    else if (uVar1 == '\x02') {
      if (DAT_0079c810 != 0) {
        uVar9 = (int)*(uint *)((int)pvVar7 + 0x330) >> 0x1f;
        iVar15 = (int)pvVar7 + 0x334;
        if ((int)((uVar9 >> 1 ^ *(uint *)((int)pvVar7 + 0x330)) - uVar9) < 0x3fc00000) {
          fVar27 = OrganicDelt
                             (1.5,DAT_0079c814 * g_FrameTimeSq,DAT_0079c818 * g_FrameTimeSq,
                              DAT_0079c81c * g_FrameTime,(float *)((int)pvVar7 + 0x330U),
                              iVar15,(float *)iVar15);
          dVar19 = (double)fVar27;
        }
        else {
          fVar27 = OrganicDelt
                             (2.0,DAT_0079c820 * g_FrameTimeSq,DAT_0079c824 * g_FrameTimeSq,
                              DAT_0079c828 * g_FrameTime,(float *)((int)pvVar7 + 0x330U),
                              iVar15,(float *)iVar15);
          dVar19 = (double)fVar27;
        }
      }
      uVar9 = (int)*(uint *)((int)pvVar7 + 0x330) >> 0x1f;
      iVar15 = (uVar9 >> 1 ^ *(uint *)((int)pvVar7 + 0x330)) - uVar9;
      if (((int)(FLOAT_ORDER(DAT_0079c83c)) < iVar15) && (*(int *)((int)pvVar7 + 0x344) == 0)) {
        auVar24 = loadVectorLeftIndexed(0xffffffffffffc840,0x7a0000);
        auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x344,
                            uVar18);
        *(undefined4 *)((int)pvVar7 + 0x344U & 0xfffffffc) = uVar10;
      }
      if (((int)(FLOAT_ORDER(DAT_0079c838)) < iVar15) && (*(int *)((int)pvVar7 + 8) != 0)) {
        moby->state = '\x04';
      }
      fVar27 = animationSpeed;
      iVar15 = 0;
      bVar12 = false;
      uVar17 = uVar18;
      if (0 < *(int *)((int)pvVar7 + 0x338)) {
        do {
          if (g_standingOnMoby == g_MobyInstance + *(int *)((int)uVar17 + 0x50)) {
            iVar15 = *(int *)((int)pvVar7 + 0x350) + 1;
            *(int *)((int)pvVar7 + 0x350) = iVar15;
            dVar19 = (double)(longlong)(int)(fVar27 * 30.5);
            if ((int)(fVar27 * 30.5) < iVar15) {
              *(undefined4 *)((int)pvVar7 + 0x348) = 1;
            }
            bVar12 = true;
            break;
          }
          iVar15 = iVar15 + 1;
          uVar17 = uVar17 + 0x30;
        } while (iVar15 < *(int *)((int)pvVar7 + 0x338));
      }
      if (g_standingOnMoby != (MobyInstance *)0x0) {
        if (g_standingOnMoby->oClass == 0x764) {
          bVar12 = true;
        }
        if ((g_standingOnMoby->oClass == moby->oClass) && (g_standingOnMoby->state == '\x04')) {
          bVar12 = true;
        }
      }
      if (((!bVar12 && *(int *)((int)pvVar7 + 0x348) != 0) && (g_framesNotGrounded == 0)) &&
         (iVar15 = FastDecTimerS32(dVar19,uVar18 + 0x34c), iVar15 != 0)) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\0') {
      *(f32 *)((int)pvVar7 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar7 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar7 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar7 + 0x1c) = (moby->pos).w;
      *(f32 *)((int)pvVar7 + 0x20) = (moby->rotation).x;
      *(f32 *)((int)pvVar7 + 0x24) = (moby->rotation).y;
      *(f32 *)((int)pvVar7 + 0x28) = (moby->rotation).z;
      *(f32 *)((int)pvVar7 + 0x2c) = (moby->rotation).w;
      pMVar13 = g_MobyInstance;
      puVar16 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      if (puVar16 == (ushort *)0x0) {
        return;
      }
      iVar15 = 0;
      uVar17 = uVar18;
      do {
        if (pMVar13[*puVar16 & 0x7fff].oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
          *(uint *)((int)uVar17 + 0x50) = *puVar16 & 0x7fff;
          iVar15 = iVar15 + 1;
          uVar17 = uVar17 + 0x30;
        }
        uVar6 = *puVar16;
        puVar16 = puVar16 + 1;
      } while (iVar15 < 0x10 && -1 < (short)uVar6);
      *(undefined4 *)((int)pvVar7 + 0x348) = 0;
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      *(undefined4 *)((int)pvVar7 + 0x350) = 0;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(in_LR,0x266700);
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x34c,uVar18
                         );
      *(undefined4 *)((int)pvVar7 + 0x34cU & 0xfffffffc) = uVar10;
      *(int *)((int)pvVar7 + 0x338) = iVar15;
      MB_StoreChildOffsets(moby,uVar18 + 0x30,iVar15);
      moby->state = '\x01';
    }
    pCVar14 = Cuboids;
    if ((moby->state == '\x02') || (moby->state == '\x01')) {
      iVar15 = *(int *)((int)pvVar7 + 4);
      fVar27 = *(float *)((int)pvVar7 + 0x14);
      fVar11 = *(float *)((int)pvVar7 + 0x330) * 0.5;
      fVar2 = Cuboids[iVar15].pos.y;
      fVar3 = Cuboids[iVar15].pos.z;
      fVar4 = *(float *)((int)pvVar7 + 0x18);
      fVar5 = Cuboids[iVar15].pos.w;
      (moby->pos).x =
           fVar11 * (Cuboids[iVar15].pos.x - *(float *)((int)pvVar7 + 0x10)) +
           *(float *)((int)pvVar7 + 0x10);
      (moby->pos).y = fVar11 * (fVar2 - fVar27) + *(float *)((int)pvVar7 + 0x14);
      fVar27 = *(float *)((int)pvVar7 + 0x18);
      (moby->pos).w = fVar5;
      (moby->pos).z = fVar11 * (fVar3 - fVar4) + fVar27;
      fVar11 = *(float *)((int)pvVar7 + 0x330) * 0.5;
      fVar27 = pCVar14[iVar15].rot.y;
      fVar2 = *(float *)((int)pvVar7 + 0x24);
      fVar3 = pCVar14[iVar15].rot.z;
      fVar4 = *(float *)((int)pvVar7 + 0x28);
      fVar5 = pCVar14[iVar15].rot.w;
      (moby->rotation).x =
           fVar11 * (pCVar14[iVar15].rot.x - *(float *)((int)pvVar7 + 0x20)) +
           *(float *)((int)pvVar7 + 0x20);
      (moby->rotation).y = fVar11 * (fVar27 - fVar2) + *(float *)((int)pvVar7 + 0x24);
      fVar27 = *(float *)((int)pvVar7 + 0x28);
      (moby->rotation).w = fVar5;
      (moby->rotation).z = fVar11 * (fVar3 - fVar4) + fVar27;
    }
    MB_UpdateChildMobys(moby,uVar18 + 0x30,*(undefined4 *)((int)pvVar7 + 0x338));
    dVar19 = 0.0;
    if ((*(int *)((int)pvVar7 + 0x344) != 0) && (moby->state != '\x04')) {
      *(float *)((int)pvVar7 + 0x344) = *(float *)((int)pvVar7 + 0x344) + 0.25;
      FastDoubleToInt();
      iVar15 = MB_randInt();
      if (iVar15 == 0) {
        dVar20 = (double)MB_randRangeFloat(-1.0471976,1.0471976);
        dVar20 = (double)FastWrapRot((float)dVar20,GameCamera.rot.radius);
        dVar21 = (double)MB_randRangeFloat((float)dVar19,20.0);
        fVar27 = (float)(dVar20 + 1.570796251296997);
        dVar19 = (double)(float)(3.141592502593994 - dVar20);
        if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
          dVar19 = dVar20;
        }
        fVar2 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar2 = fVar27;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar20);
        if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
          dVar22 = dVar19;
        }
        fVar3 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar2 < 0.0) {
          fVar3 = fVar2;
        }
        dVar19 = (double)(float)(dVar22 * dVar22);
        fVar4 = fVar3 * fVar3;
        dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar22));
        fVar27 = fVar4 * fVar4 * fVar3;
        dVar20 = (double)(float)(dVar19 * dVar23);
        fVar2 = fVar4 * fVar27;
        fVar27 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar27 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
                         dVar21 + (double)g_heroPosition.x);
        FUN_00425540((double)DAT_0079c844,0x4000000000000000,0x3ff0000000000000,0x3fe8000000000000,
                     CONCAT44(fVar27,(float)((double)((float)(dVar19 * dVar20) * 2.601887e-06 +
                                                     (float)(dVar20 * -0.0001980741071747616 +
                                                            (double)(float)(dVar23 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar19 * dVar22) *
                                                                  -0.16666656732559204 + dVar22))))
                                             * dVar21 + (double)g_heroPosition.y)),
                     CONCAT44(g_heroPosition.z + 15.0,fVar27),CONCAT44(DAT_00a15d30,DAT_00a15d34),
                     CONCAT44(DAT_00a15d38,DAT_00a15d3c),0x2b8);
      }
    }
  }
  return;
}



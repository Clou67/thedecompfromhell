// game/update/moby455.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x38a0c4-0x38b800
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby455.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby545.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x038a0c4 (0x14 bytes)
void M455_0038a0c4(void)

{
  DAT_00842090 = 0x10000;
  return;
}


// 0x038a0e0 (0x164 bytes)
bool M455_0038a0e0(longlong param_1,float *param_2)

{
  bool bVar1;
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
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  bVar1 = (int)param_1 == -1;
  if (!bVar1) {
    dVar16 = -1.0;
    dVar15 = 1.0;
    pfVar13 = (float *)((int)&(Cuboids->matrix).v0.x + (int)(param_1 << 7));
    dVar14 = (double)MB_randRangeFloat(-1.0,1.0);
    *param_2 = (float)dVar14;
    dVar14 = (double)MB_randRangeFloat((float)dVar16,(float)dVar15);
    param_2[1] = (float)dVar14;
    dVar14 = (double)MB_randRangeFloat((float)dVar16,(float)dVar15);
    param_2[2] = (float)dVar14;
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar4 = pfVar13[5];
    fVar5 = pfVar13[7];
    fVar6 = pfVar13[6];
    fVar7 = pfVar13[1];
    fVar8 = pfVar13[3];
    fVar9 = pfVar13[2];
    fVar10 = pfVar13[9];
    fVar11 = pfVar13[10];
    fVar12 = pfVar13[0xb];
    *param_2 = (float)((double)pfVar13[8] * dVar14 + (double)(*pfVar13 * fVar3 + pfVar13[4] * fVar2)
                      );
    param_2[1] = (float)((double)fVar10 * dVar14 + (double)(fVar7 * fVar3 + fVar4 * fVar2));
    param_2[2] = (float)((double)fVar11 * dVar14 + (double)(fVar9 * fVar3 + fVar6 * fVar2));
    param_2[3] = (float)((double)fVar12 * dVar14 + (double)(fVar8 * fVar3 + fVar5 * fVar2)) +
                 param_2[3];
    *param_2 = *param_2 + pfVar13[0xc];
    param_2[1] = param_2[1] + pfVar13[0xd];
    param_2[2] = param_2[2] + pfVar13[0xe];
  }
  return bVar1;
}


// 0x038a248 (0x38c bytes)
// strings: 00656870: 'time:%d generator %d (oClass:%d) could not spawn a moby!\n'

MobyInstance *
FUN_0038a248(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            MOBY_OCLASSES param_5)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  MobyClass *pMVar5;
  undefined4 uVar6;
  bool bVar7;
  MobyModeBit MVar10;
  int iVar9;
  short sVar11;
  undefined8 uVar8;
  int iVar12;
  MobyInstance *moby;
  uint uVar13;
  int iVar14;
  MobyInstance *pMVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  if (param_1 == 0) {
    pMVar15 = (MobyInstance *)0x0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 == 0) {
      pMVar15 = (MobyInstance *)0x0;
    }
    else {
      pMVar15 = (MobyInstance *)0x0;
      iVar14 = 0;
      *(undefined1 *)(iVar4 + 0x86) = 0;
      bVar7 = false;
      dVar19 = 0.10000000149011612;
      fStack00000044 = (float)param_3;
      dVar17 = (double)fStack00000044;
      fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
      dVar18 = (double)fStack00000040;
      fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
      dVar16 = (double)fStack00000048;
      iVar12 = iVar4;
      _fStack00000040 = param_3;
      _fStack00000048 = param_4;
      do {
        if (*(int *)(iVar12 + 0xe8) != -1) {
          moby = g_MobyInstance + *(int *)(iVar12 + 0xe8);
          if ((moby == (MobyInstance *)0x0) || (moby->state == 0xfd || moby->state == 0xfe)) {
            if (((param_5 == ~RATCHET) || (param_5 == moby->oClass)) && (!bVar7)) {
              bVar7 = true;
              *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
              (moby->pos).x = (float)dVar18;
              pMVar5 = moby->pClass;
              (moby->pos).y = (float)dVar17;
              (moby->pos).z = (float)dVar16;
              (moby->pos).w = 0.0;
              moby->state = '\0';
              moby->setByGroup = '\0';
              MVar10 = *(MobyModeBit *)&pMVar5->mode_bits;
              moby->modeBits = MVar10;
              fVar2 = pMVar5->gScale;
              moby->scale = fVar2;
              moby->updateDistance = *(char *)(param_1 + 0x30);
              sVar3 = *(short *)(param_1 + 0x32);
              moby->enabled = '\x01';
              moby->drawDistance = sVar3;
              uVar1 = pMVar5->shadow;
              if (pMVar5->glow_rgba != 0) {
                MVar10 = MVar10 | HAS_GLOW;
                moby->modeBits = MVar10;
              }
              if (uVar1 != '\0') {
                moby->modeBits = MVar10 | DRAW_SHADOW;
              }
              moby->occlIndex = 0x7f80;
              moby->unk71 = -1;
              moby->unk72 = -1;
              moby->damage = -1;
              if ((*(byte *)(iVar4 + 0x83) & 2) != 0) {
                moby->scale = (float)((double)fVar2 * dVar19);
              }
              MB_SetAnimationNoBlend(moby,0,0);
              iVar9 = FUN_00486828(moby);
              sVar3 = *(short *)(param_1 + 0xb4);
              sVar11.piece<0,1>() = moby->field76_0xb4;
              sVar11.piece<1,1>() = moby->field77_0xb5;
              if (iVar9 != 0) {
                *(undefined4 *)(iVar9 + 0x94) = 0;
                *(undefined2 *)(iVar9 + 0x68) = 0;
                *(undefined4 *)(iVar9 + 0x6c) = 0;
              }
              if (sVar3 < sVar11) {
                moby->field76_0xb4 = (char)((ushort)sVar3 >> 8);
                moby->field77_0xb5 = (char)sVar3;
                sVar11 = sVar3;
              }
              if (sVar11 < 1) {
                sVar11 = 1;
                moby->field76_0xb4 = '\0';
                moby->field77_0xb5 = '\x01';
              }
              sVar11 = *(short *)(param_1 + 0xb4) - sVar11;
              *(short *)(param_1 + 0xb4) = sVar11;
              if (sVar11 < 0) {
                *(undefined2 *)(param_1 + 0xb4) = 1;
              }
              moby->collision = moby->pClass->collision;
              MB_CopyHeroLights(moby);
              UpdateMobyTransform(moby);
              uVar8 = MB_GetPvarsIfMobyHasThem(moby);
              uVar13 = (uint)uVar8;
              pMVar15 = moby;
              if (uVar13 != 0) {
                auVar20 = ZEXT416(0xfffffff0);
                auVar21 = loadVectorLeftIndexed(4,uVar8);
                auVar22 = loadVectorRightIndexed(0x14,uVar8);
                auVar20 = vectorShiftRightAlgebraicWord
                                    (auVar21 | auVar22,
                                     auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
                auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
                auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar6 = storeVectorElementWordIndexed
                                  (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0,
                                   uVar8);
                *(undefined4 *)(uVar13 & 0xfffffffc) = uVar6;
                *(undefined4 *)(uVar13 + 0x30) = 0;
                *(undefined4 *)(uVar13 + 0x34) = 0;
              }
            }
          }
          else {
            *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
          }
        }
        iVar14 = iVar14 + 1;
        iVar12 = iVar12 + 4;
        iVar9 = MobyUpdateChainStart;
      } while (iVar14 < 0x12);
      for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
        if ((*(short *)(iVar9 + 0xa6) == 0x221) &&
           (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) {
          *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
        }
      }
      if (pMVar15 == (MobyInstance *)0x0) {
        printf("time:%d generator %d (oClass:%d) could not spawn a moby!\n",worldUpdateTime,
                     *(undefined2 *)(param_1 + 0xb2),*(undefined2 *)(param_1 + 0xa6));
      }
    }
  }
  return pMVar15;
}


// 0x038a628 (0x11d8 bytes)
/* Moby 455 */

void UpdateMoby_455(MobyInstance *moby)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  u8 uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  MobyInstance *moby_00;
  char cVar22;
  ulonglong uVar23;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r29;
  uint uVar29;
  longlong lVar27;
  int iVar30;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f26;
  undefined8 uVar41;
  double in_f27;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  float fVar51;
  
  lVar18 = (longlong)(int)moby;
  uVar25 = ZEXT48(&stack0x00000000);
  puVar14 = (ulonglong *)(uVar25 - 0x1e0);
  *puVar14 = uVar25;
  puVar14[0x3e] = in_LR;
  puVar14[0x36] = in_f26;
  puVar14[0x37] = (ulonglong)in_f27;
  puVar14[0x38] = in_f28;
  puVar14[0x39] = in_f29;
  puVar14[0x3a] = in_f30;
  puVar14[0x3b] = in_f31;
  puVar14[0x2d] = unaff_r23;
  puVar14[0x35] = unaff_r31;
  puVar14[0x34] = unaff_r30;
  puVar14[0x33] = unaff_r29;
  puVar14[0x32] = unaff_r28;
  puVar14[0x31] = unaff_r27;
  puVar14[0x30] = unaff_r26;
  puVar14[0x2f] = unaff_r25;
  puVar14[0x2e] = unaff_r24;
  puVar14[0x2c] = unaff_r22;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar12 = moby->pVar;
  uVar31 = ZEXT48(pvVar12);
  if ((moby->enabled != '\0') &&
     (fVar51 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar51 * fVar51) < 28.0)) {
    MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x16';
  }
  if (pvVar12 == (void *)0x0) {
    return;
  }
  cVar22 = '\0';
  iVar19 = 0;
  *(undefined1 *)((int)pvVar12 + 0x86) = 0;
  uVar23 = uVar31;
  do {
    iVar20 = *(int *)((int)uVar23 + 0xe8);
    if (((iVar20 != -1) && (g_MobyInstance + iVar20 != (MobyInstance *)0x0)) &&
       (uVar4 = g_MobyInstance[iVar20].state, uVar4 != 0xfd && uVar4 != 0xfe)) {
      cVar22 = cVar22 + '\x01';
      *(char *)((int)pvVar12 + 0x86) = cVar22;
    }
    iVar19 = iVar19 + 1;
    uVar23 = uVar23 + 4;
    iVar20 = MobyUpdateChainStart;
  } while (iVar19 < 0x12);
  for (; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x28)) {
    if ((*(short *)(iVar20 + 0xa6) == 0x221) &&
       (*(char *)(iVar20 + 0x20) != -3 && *(char *)(iVar20 + 0x20) != -2)) {
      cVar22 = cVar22 + '\x01';
      *(char *)((int)pvVar12 + 0x86) = cVar22;
    }
  }
  fVar51 = (moby->pos).y - g_heroPosition.y;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar3 = SQRT(fVar3 * fVar3 + fVar51 * fVar51);
  bVar1 = fVar3 < *(float *)((int)pvVar12 + 0x9c);
  uVar29 = (uint)bVar1;
  fVar51 = *(float *)((int)pvVar12 + 0x90);
  iVar19 = FastDecTimerS16(uVar31 + 0x88);
  uVar21 = 0;
  uVar24 = (uint)((ulonglong)*(byte *)((int)pvVar12 + 0x86) -
                  (ulonglong)*(byte *)((int)pvVar12 + 0x87) >> 0x3f);
  if (*(int *)((int)pvVar12 + 0xd0) != -1) {
    iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar12 + 0xd0));
    uVar21 = (iVar20 != 0);
  }
  if ((*(byte *)((int)pvVar12 + 0x82) != 0) && (uVar29 = uVar21, 1 < *(byte *)((int)pvVar12 + 0x82))
     ) {
    uVar29 = ((uVar21 | fVar3 < fVar51) != 0);
  }
  if ((*(short *)((int)pvVar12 + 0x8a) == 0) && (*(char *)((int)pvVar12 + 0x86) != '\0')) {
    uVar24 = 0;
  }
  iVar20 = MB_damage(lVar18,0xc30000,0);
  MB_HandleDamage(moby,iVar20,uVar31 + 0x20,0,puVar14 + 0x28,0,0,4);
  if (1 < *(int *)(puVar14 + 0x28)) {
    fVar51 = *(float *)((int)pvVar12 + 0x20) - *(float *)(iVar20 + 0x2c);
    *(float *)((int)pvVar12 + 0x20) = fVar51;
    if (fVar51 <= 0.0) {
      MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
      moby->state = '\b';
      *(undefined1 *)((int)pvVar12 + 0x67) = 0x78;
      MB_UpdateLightsTransition(lVar18,uVar31 + 0x60);
    }
    else {
      *(undefined1 *)((int)pvVar12 + 0x67) = 0x5a;
      MB_UpdateLightsTransition(lVar18,uVar31 + 0x60);
    }
  }
  bVar5 = moby->state;
  moby->damage = -1;
  if (bVar5 < 4) {
    if (bVar5 == 0) {
      iVar19 = 0;
      uVar25 = uVar31;
      do {
        iVar20 = *(int *)((int)uVar25 + 0xe8);
        if (((iVar20 != -1) && (moby_00 = g_MobyInstance + iVar20, moby_00 != (MobyInstance *)0x0)) &&
           (moby_00->state != 0xfd && moby_00->state != 0xfe)) {
          DeleteMoby(moby_00);
        }
        iVar19 = iVar19 + 1;
        uVar25 = uVar25 + 4;
      } while (iVar19 < 0x12);
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar12 + 0x29) = 0;
      *(undefined1 *)((int)pvVar12 + 0x5a) = 3;
      *(undefined1 *)((int)pvVar12 + 0x58) = 8;
      moby->state = '\x01';
      goto LAB_0038b7a0;
    }
    if (bVar5 < 2) {
      if (bVar1) {
        cVar22 = *(char *)((int)pvVar12 + 0x84);
        if (cVar22 == '\x05') {
          moby->state = '\x05';
        }
        else if (cVar22 == '\x04') {
          moby->state = '\x05';
        }
        else if (cVar22 == '\x03') {
          moby->state = '\x02';
        }
        else if (cVar22 == '\x02') {
          moby->state = '\a';
        }
        else if (cVar22 == '\x01') {
          moby->state = '\x03';
        }
        else if (cVar22 == '\0') {
          moby->state = '\x02';
        }
        else {
          moby->state = '\x01';
        }
      }
      goto LAB_0038b7a0;
    }
  }
  else if ((6 < bVar5) && (7 < bVar5)) {
    if (bVar5 < 9) {
      uVar41 = 0;
      puVar14[0x12] = 1;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4020000000000000,0x4010000000000000,0x4032000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar18,uVar31 + 0x70,0,1,0xffffffffffffffff,0x1e,8,0x14);
      lVar27 = lVar18 + 0x10;
      lVar28 = lVar18 + 0x40;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar41,lVar18,0x6c5,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar41,lVar18,0x6c6,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar41,lVar18,0x6c7,lVar27,lVar28,0,0);
      DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
    goto LAB_0038b7a0;
  }
  if ((uVar29 != 0) && (uVar24 != 0 && iVar19 != 0)) {
    *(undefined4 *)((int)puVar14 + 0x144) = 0;
    *(undefined4 *)(puVar14 + 0x29) = 0;
    *(undefined4 *)((int)puVar14 + 0x14c) = 0;
    *(undefined4 *)(puVar14 + 0x2a) = 0;
    dVar42 = in_f27;
    dVar43 = in_f27;
    dVar44 = in_f27;
    while (((bVar1 = *(short *)((int)pvVar12 + 0x8a) == 0, bVar1 &&
            (*(byte *)((int)pvVar12 + 0x86) < *(byte *)((int)pvVar12 + 0x87))) ||
           ((!bVar1 && (*(short *)((int)pvVar12 + 0x88) == 0))))) {
      GetBonePosition(lVar18,0,uVar25 - 0x120);
      cVar22 = *(char *)((int)pvVar12 + 0x85);
      if (cVar22 == '\x04') {
        iVar20 = (int)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa0))));
        iVar19 = iVar20 + 2;
        iVar19 = iVar19 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa4)))) &
                          (iVar20 + 1) - iVar19);
        iVar20 = iVar19 + 1;
        iVar20 = iVar20 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa8)))) &
                          iVar19 - iVar20);
        iVar19 = iVar20 + 1;
        iVar19 = iVar19 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xac)))) &
                          iVar20 - iVar19);
        iVar20 = 0;
        lVar28 = ((ulonglong)*(byte *)((int)pvVar12 + 0x86) -
                 (longlong)((int)(uint)*(byte *)((int)pvVar12 + 0x86) / iVar19) * (longlong)iVar19)
                 + 1;
        uVar23 = uVar31;
        do {
          iVar19 = *(int *)((int)uVar23 + 0xa0);
          lVar28 = lVar28 + -1 + (ZERO_MASK((-1 - iVar19)) & lVar28 - (lVar28 + -1));
          if (((int)lVar28 == 0) &&
             (iVar19 = M455_0038a0e0(iVar19,uVar25 - 0xd0), iVar19 == 0)) break;
          iVar20 = iVar20 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar20 < 4);
        fVar51 = *(float *)((int)puVar14 + 0x114);
        fVar3 = *(float *)(puVar14 + 0x22);
        fVar7 = fVar51 - *(float *)((int)puVar14 + 0xc4);
        fVar6 = *(float *)(puVar14 + 0x23);
        fVar9 = fVar3 - *(float *)(puVar14 + 0x18);
        uVar8 = *(undefined4 *)((int)puVar14 + 0x11c);
        fVar10 = fVar6 - *(float *)(puVar14 + 0x19);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar9;
        *(undefined4 *)((int)puVar14 + 0xdc) = uVar8;
        *(float *)(puVar14 + 0x1b) = fVar10;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)MB_randRangeFloat
                                     (SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7),3.0);
          fVar9 = *(float *)((int)puVar14 + 0xd4);
          fVar10 = *(float *)(puVar14 + 0x1a);
          fVar11 = *(float *)(puVar14 + 0x1b);
          fVar16 = 0.0;
          dVar33 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar3 = *(float *)(puVar14 + 0x22);
          fVar51 = *(float *)((int)puVar14 + 0x114);
          fVar6 = *(float *)(puVar14 + 0x23);
          uVar8 = *(undefined4 *)((int)puVar14 + 0x11c);
          fVar7 = (float)(dVar32 / dVar33);
          fVar15 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          fVar17 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar17;
          *(float *)(puVar14 + 0x1b) = fVar16;
        }
        *(float *)(puVar14 + 0x1c) = fVar3;
        *(float *)((int)puVar14 + 0xe4) = fVar51;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(undefined4 *)((int)puVar14 + 0xec) = uVar8;
      }
      else if (cVar22 == '\x03') {
        iVar20 = (int)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa0))));
        iVar19 = iVar20 + 2;
        iVar19 = iVar19 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa4)))) &
                          (iVar20 + 1) - iVar19);
        iVar20 = iVar19 + 1;
        iVar20 = iVar20 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xa8)))) &
                          iVar19 - iVar20);
        iVar19 = iVar20 + 1;
        iVar19 = iVar19 + ((uint)(ZERO_MASK((-1 - *(int *)((int)pvVar12 + 0xac)))) &
                          iVar20 - iVar19);
        iVar20 = rand();
        iVar30 = 0;
        lVar28 = ((longlong)iVar20 - (longlong)(iVar20 / iVar19) * (longlong)iVar19) + 1;
        uVar23 = uVar31;
        do {
          iVar19 = *(int *)((int)uVar23 + 0xa0);
          lVar28 = lVar28 + -1 + (ZERO_MASK((-1 - iVar19)) & lVar28 - (lVar28 + -1));
          if (((int)lVar28 == 0) &&
             (iVar19 = M455_0038a0e0(iVar19,uVar25 - 0xe0), iVar19 == 0)) break;
          iVar30 = iVar30 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar30 < 4);
        fVar51 = *(float *)((int)puVar14 + 0x104);
        fVar3 = *(float *)(puVar14 + 0x20);
        fVar7 = fVar51 - *(float *)((int)puVar14 + 0xc4);
        fVar9 = fVar3 - *(float *)(puVar14 + 0x18);
        fVar6 = *(float *)(puVar14 + 0x21);
        uVar8 = *(undefined4 *)((int)puVar14 + 0x10c);
        fVar10 = fVar6 - *(float *)(puVar14 + 0x19);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar9;
        *(undefined4 *)((int)puVar14 + 0xdc) = uVar8;
        *(float *)(puVar14 + 0x1b) = fVar10;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)MB_randRangeFloat
                                     (SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7),3.0);
          fVar9 = *(float *)((int)puVar14 + 0xd4);
          fVar10 = *(float *)(puVar14 + 0x1a);
          fVar11 = *(float *)(puVar14 + 0x1b);
          fVar16 = 0.0;
          dVar33 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar3 = *(float *)(puVar14 + 0x20);
          fVar51 = *(float *)((int)puVar14 + 0x104);
          fVar6 = *(float *)(puVar14 + 0x21);
          uVar8 = *(undefined4 *)((int)puVar14 + 0x10c);
          fVar7 = (float)(dVar32 / dVar33);
          fVar15 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          fVar17 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar17;
          *(float *)(puVar14 + 0x1b) = fVar16;
        }
        *(float *)(puVar14 + 0x1c) = fVar3;
        *(float *)((int)puVar14 + 0xe4) = fVar51;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(undefined4 *)((int)puVar14 + 0xec) = uVar8;
      }
      else if (cVar22 == '\x02') {
        lVar27 = -1;
        dVar32 = 100000.0;
        lVar26 = 0;
        uVar23 = uVar31;
        lVar28 = uVar25 - 0x1e0;
        do {
          if (((*(int *)((int)lVar28 + 0x144) != 1) &&
              (iVar19 = M455_0038a0e0
                                  (*(undefined4 *)((int)uVar23 + 0xa0),uVar25 - 0xf0), iVar19 == 0))
             && (fVar51 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x
                , dVar33 = (double)SQRT(fVar3 * fVar3 + fVar51 * fVar51), dVar33 < dVar32)) {
            dVar44 = (double)*(float *)(puVar14 + 0x1e);
            dVar43 = (double)*(float *)((int)puVar14 + 0xf4);
            dVar42 = (double)*(float *)(puVar14 + 0x1f);
            in_f27 = (double)*(float *)((int)puVar14 + 0xfc);
            lVar27 = lVar26;
            dVar32 = dVar33;
          }
          lVar26 = lVar26 + 1;
          uVar23 = uVar23 + 4;
          lVar28 = lVar28 + 4;
        } while ((int)lVar26 < 4);
        if ((int)lVar27 != -1) {
          *(undefined4 *)((int)puVar14 + (int)(lVar27 << 2) + 0x144) = 1;
        }
        fVar51 = (float)(dVar43 - (double)*(float *)((int)puVar14 + 0xc4));
        fVar3 = (float)(dVar44 - (double)*(float *)(puVar14 + 0x18));
        *(float *)((int)puVar14 + 0xdc) = (float)in_f27;
        fVar6 = (float)(dVar42 - (double)*(float *)(puVar14 + 0x19));
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        *(float *)(puVar14 + 0x1a) = fVar3;
        *(float *)(puVar14 + 0x1b) = fVar6;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)MB_randRangeFloat
                                     (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar51 * fVar51),3.0);
          fVar3 = *(float *)((int)puVar14 + 0xd4);
          fVar6 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          fVar10 = 0.0;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
          fVar51 = (float)(dVar32 / dVar33);
          fVar9 = fVar10;
          if (0.0 - dVar33 < 0.0) {
            fVar9 = fVar6 * fVar51;
          }
          fVar11 = fVar10;
          if (0.0 - dVar33 < 0.0) {
            fVar11 = fVar3 * fVar51;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar10 = fVar7 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar9 = fVar6 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar11 = fVar3 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar10 = fVar7 * fVar51;
          }
          *(float *)(puVar14 + 0x1a) = fVar9;
          *(float *)((int)puVar14 + 0xd4) = fVar11;
          *(float *)(puVar14 + 0x1b) = fVar10;
        }
        *(float *)(puVar14 + 0x1c) = (float)dVar44;
        *(float *)((int)puVar14 + 0xe4) = (float)dVar43;
        *(float *)(puVar14 + 0x1d) = (float)dVar42;
        *(float *)((int)puVar14 + 0xec) = (float)in_f27;
      }
      else if (cVar22 == '\x01') {
        dVar40 = (double)*(float *)(puVar14 + 0x18);
        dVar45 = (double)*(float *)((int)puVar14 + 0xc4);
        dVar37 = (double)*(float *)(puVar14 + 0x19);
        dVar32 = (double)g_heroPosition.x;
        dVar33 = (double)g_heroPosition.y;
        dVar36 = (double)g_heroPosition.z;
        *(float *)((int)puVar14 + 0xdc) = g_heroPosition.w;
        *(float *)(puVar14 + 0x1a) = (float)(dVar32 - dVar40);
        *(float *)((int)puVar14 + 0xd4) = (float)(dVar33 - dVar45);
        *(float *)(puVar14 + 0x1b) = (float)(dVar36 - dVar37);
        uVar41 = 0x3fe0000000000000;
        dVar36 = 0.0;
        fVar51 = (float)(dVar33 - dVar45) * 0.5;
        dVar33 = (double)fVar51;
        fVar3 = (float)(dVar32 - dVar40) * 0.5;
        dVar32 = (double)fVar3;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        *(float *)(puVar14 + 0x1a) = fVar3;
        dVar35 = dVar36;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)MB_randRangeFloat
                                     (SQRT((float)(dVar32 * dVar32 +
                                                  (double)(float)(dVar33 * dVar33))),3.0);
          fVar3 = *(float *)((int)puVar14 + 0xd4);
          fVar6 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          dVar38 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
          dVar40 = (double)*(float *)(puVar14 + 0x18);
          dVar45 = (double)*(float *)((int)puVar14 + 0xc4);
          dVar37 = (double)*(float *)(puVar14 + 0x19);
          fVar51 = (float)(dVar32 / dVar38);
          dVar32 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar32 = (double)(fVar6 * fVar51);
          }
          dVar33 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar33 = (double)(fVar3 * fVar51);
          }
          dVar36 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar36 = (double)(fVar7 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar32 = (double)(fVar6 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar33 = (double)(fVar3 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar36 = (double)(fVar7 * fVar51);
          }
          *(float *)(puVar14 + 0x1a) = (float)dVar32;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          *(float *)(puVar14 + 0x1b) = (float)dVar36;
        }
        dVar38 = (double)SQRT((float)(dVar36 * dVar36 +
                                     (double)(float)(dVar32 * dVar32 +
                                                    (double)(float)(dVar33 * dVar33))));
        if (dVar38 < 3.0) {
          dVar34 = (double)(float)(3.0 / dVar38);
          dVar2 = dVar32 * dVar34;
          dVar39 = dVar33 * dVar34;
          dVar34 = dVar36 * dVar34;
          dVar32 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar32 = (double)(float)dVar2;
          }
          dVar33 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar33 = (double)(float)dVar39;
          }
          dVar36 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar36 = (double)(float)dVar34;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar32 = (double)(float)dVar2;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar33 = (double)(float)dVar39;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar36 = (double)(float)dVar34;
          }
          *(float *)(puVar14 + 0x1a) = (float)dVar32;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          *(float *)(puVar14 + 0x1b) = (float)dVar36;
        }
        fVar51 = SQRT((float)(dVar36 * dVar36 +
                             (double)(float)(dVar32 * dVar32 + (double)(float)(dVar33 * dVar33))));
        if (*(float *)((int)pvVar12 + 0x90) < fVar51) {
          dVar39 = (double)(*(float *)((int)pvVar12 + 0x90) / fVar51);
          dVar38 = dVar32 * dVar39;
          dVar32 = (double)(float)dVar38;
          dVar2 = dVar33 * dVar39;
          dVar33 = (double)(float)dVar2;
          dVar39 = dVar36 * dVar39;
          dVar36 = (double)(float)dVar39;
          *(float *)(puVar14 + 0x1a) = (float)dVar38;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar2;
          *(float *)(puVar14 + 0x1b) = (float)dVar39;
        }
        *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)puVar14 + 0xcc);
        *(float *)(puVar14 + 0x1c) = (float)(dVar40 + dVar32);
        *(float *)((int)puVar14 + 0xe4) = (float)(dVar45 + dVar33);
        *(float *)(puVar14 + 0x1d) = (float)(dVar37 + dVar36);
        dVar32 = (double)GetGroundZ(uVar41,uVar25 - 0x100,0);
        if (dVar32 != dVar35) {
          *(float *)(puVar14 + 0x1d) = (float)dVar32;
        }
      }
      else if (cVar22 == '\0') {
        dVar32 = (double)FastIntToDouble((ulonglong)*(byte *)((int)pvVar12 + 0x87) + 1);
        dVar33 = (double)FastIntToDouble(*(undefined1 *)((int)pvVar12 + 0x86));
        fVar51 = MB_WrapRot
                           ((float)((double)((float)(dVar33 * 2.0) * 3.1415927) / dVar32) -
                            3.1415927);
        dVar33 = (double)fVar51;
        fVar51 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        uVar41 = 0x3fe0000000000000;
        fVar51 = SQRT(fVar3 * fVar3 + fVar51 * fVar51) * 0.5;
        dVar32 = (double)fVar51;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)MB_randRangeFloat(fVar51,3.0);
        }
        fVar51 = (float)(dVar33 + 1.570796251296997);
        dVar36 = (double)(float)(3.141592502593994 - dVar33);
        if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
          dVar36 = dVar33;
        }
        fVar3 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar3 = fVar51;
        }
        dVar35 = (double)(float)(-3.141592502593994 - dVar33);
        if ((double)(float)(-3.141592502593994 - dVar33) - dVar36 < 0.0) {
          dVar35 = dVar36;
        }
        fVar6 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar3 < 0.0) {
          fVar6 = fVar3;
        }
        dVar33 = (double)(float)(dVar35 * dVar35);
        if (dVar32 - 3.0 < 0.0) {
          dVar32 = 3.0;
        }
        fVar9 = fVar6 * fVar6;
        dVar40 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar35));
        fVar3 = fVar9 * fVar9 * fVar6;
        dVar36 = (double)(float)(dVar33 * dVar40);
        fVar7 = fVar9 * fVar3;
        fVar51 = (float)((double)((float)(dVar33 * dVar36) * 2.601887e-06 +
                                 (float)(dVar36 * -0.0001980741071747616 +
                                        (double)(float)(dVar40 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar33 * 
                                                  dVar35) * -0.16666656732559204 + dVar35)))) *
                        dVar32);
        fVar3 = (float)((double)(fVar9 * fVar7 * 2.601887e-06 +
                                fVar7 * -0.0001980741 +
                                fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6) * dVar32
                       );
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        dVar32 = 0.0;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(float *)(puVar14 + 0x1a) = fVar3;
        fVar6 = SQRT(fVar3 * fVar3 + fVar51 * fVar51);
        if (*(float *)((int)pvVar12 + 0x90) < fVar6) {
          fVar6 = *(float *)((int)pvVar12 + 0x90) / fVar6;
          *(undefined4 *)(puVar14 + 0x1b) = 0;
          fVar3 = fVar3 * fVar6;
          fVar51 = fVar51 * fVar6;
          *(float *)(puVar14 + 0x1a) = fVar3;
          *(float *)((int)puVar14 + 0xd4) = fVar51;
        }
        *(undefined4 *)(puVar14 + 0x1d) = *(undefined4 *)(puVar14 + 0x19);
        *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)puVar14 + 0xcc);
        *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x18) + fVar3;
        *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xc4) + fVar51;
        dVar33 = (double)GetGroundZ(uVar41,uVar25 - 0x100,0);
        if (dVar33 != dVar32) {
          *(float *)(puVar14 + 0x1d) = (float)dVar33;
        }
      }
      fVar51 = *(float *)((int)puVar14 + 0xd4);
      fVar3 = *(float *)(puVar14 + 0x1a);
      fVar6 = fVar3 * fVar3 + fVar51 * fVar51;
      dVar32 = 0.0;
      dVar40 = (double)SQRT(fVar6);
      lVar28 = uVar25 - 0xc0;
      dVar45 = (double)(*(float *)((int)pvVar12 + 0xe4) * DAT_0071f408 *
                       SQRT(*(float *)(puVar14 + 0x1b) * *(float *)(puVar14 + 0x1b) + fVar6));
      *(undefined4 *)(puVar14 + 0x25) = 0;
      *(undefined4 *)((int)puVar14 + 300) = *(undefined4 *)((int)puVar14 + 0xdc);
      dVar36 = (double)(fVar51 * (float)(dVar45 / dVar40));
      dVar35 = (double)(fVar3 * (float)(dVar45 / dVar40));
      dVar33 = dVar32;
      if (0.0 - dVar40 < 0.0) {
        dVar33 = dVar36;
      }
      dVar37 = dVar32;
      if (0.0 - dVar40 < 0.0) {
        dVar37 = dVar35;
      }
      if (dVar40 - 0.0 < 0.0) {
        dVar33 = dVar36;
      }
      if (dVar40 - 0.0 < 0.0) {
        dVar37 = dVar35;
      }
      fVar51 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar33 * dVar33)) + 0.0);
      dVar40 = (double)(float)(dVar37 * (double)(0.05 / fVar51));
      dVar35 = (double)(float)(dVar33 * (double)(0.05 / fVar51));
      dVar36 = dVar32;
      if (0.0 - fVar51 < 0.0) {
        dVar36 = dVar40;
      }
      if (0.0 - fVar51 < 0.0) {
        dVar32 = dVar35;
      }
      if (fVar51 - 0.0 < 0.0) {
        dVar36 = dVar40;
      }
      if (fVar51 - 0.0 < 0.0) {
        dVar32 = dVar35;
      }
      *(float *)(puVar14 + 0x24) = (float)dVar36;
      *(float *)((int)puVar14 + 0x124) = (float)dVar32;
      *(undefined4 *)(puVar14 + 0x1b) = 0;
      *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
      *(float *)(puVar14 + 0x1a) = (float)dVar37;
      MB_RandomizeVector(0.025,(float *)lVar28);
      FastVecAddSelf(uVar25 - 0xb0,lVar28,uVar25 - 0x120);
      dVar32 = (double)MB_computeLobVelocity
                                 (dVar45,-(double)(*(float *)((int)pvVar12 + 0xdc) * g_FrameTimeSq),
                                  lVar28,uVar25 - 0x100);
      *(float *)(puVar14 + 0x1b) = (float)dVar32;
      iVar19 = FUN_003affa0(lVar18,lVar28,uVar25 - 0x110,*(undefined2 *)((int)pvVar12 + 0x8c),
                            *(undefined1 *)((int)pvVar12 + 0x83));
      if (iVar19 != 0) {
        *(undefined1 *)(iVar19 + 0x30) = 0xff;
      }
      auVar46 = loadVectorLeftIndexed(0x8a,uVar31);
      auVar48 = loadVectorRightIndexed(0x9a,uVar31);
      auVar49 = loadVectorLeftIndexed(0x24,0x38a5d4);
      auVar47 = ZEXT416(0xfffffff0);
      auVar48 = vectorShiftRightAlgebraicWord
                          (auVar46 | auVar48,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar46 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = ZEXT416(0xffffffff);
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar48 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar47 = vectorAddFloatingPoint
                          (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar47,auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = vectorSplatHalfWord(auVar47,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar47,0x88,uVar31);
      *(undefined2 *)((int)pvVar12 + 0x88) = uVar13;
      *(char *)((int)pvVar12 + 0x86) = *(char *)((int)pvVar12 + 0x86) + '\x01';
    }
  }
LAB_0038b7a0:
  MB_ColorDyingMoby(lVar18,uVar31 + 0x60);
  return;
}



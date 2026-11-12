// game/update/moby611.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3da478-0x3dae70
#include <stdio.h>
#include "game/update/moby611.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x03da478 (0x3b8 bytes)
// inlined: FastRSqrt @0x3da654, FastRSqrt @0x3da6c4
void M611_003da478(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float local_f0 [36];
  
  iVar9 = *(int *)(param_1 + 0x78);
  GetEffectTex(0x30);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar10 = FUN_00502e50(0);
  SetGSReg(8,uVar10);
  uVar10 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar10);
  dVar26 = 1.0;
  iVar16 = 0;
  iVar13 = 0;
  dVar25 = 0.0;
  iVar15 = iVar9;
  iVar14 = iVar9;
  do {
    if (*(short *)(iVar15 + 800) != 0) {
      fVar5 = *(float *)(iVar14 + 0x24);
      fVar6 = *(float *)(iVar14 + 0x20);
      fVar2 = (float)((double)fVar5 - (double)GameCamera.posY);
      fVar7 = *(float *)(iVar14 + 0x28);
      fVar3 = (float)((double)fVar6 - (double)GameCamera.posX);
      fVar4 = (float)((double)fVar7 - (double)GameCamera.posZ);
      fVar8 = *(float *)(iVar14 + 0x2c);
      dVar18 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar20 = dVar25;
      dVar21 = dVar25;
      dVar22 = dVar25;
      if ((double)(float)SQRT(dVar18) != dVar25) {
        dVar20 = 1.0 / SQRT(dVar18);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar18 * dVar20) * dVar20 - dVar26) *
                        (double)(float)(dVar20 * 0.5) + dVar20);
        dVar22 = (double)(fVar3 * fVar1);
        dVar21 = (double)(fVar2 * fVar1);
        dVar20 = (double)(fVar4 * fVar1);
      }
      dVar23 = (double)(float)(dVar22 * dVar22 + --(double)(float)(dVar21 * dVar21));
      dVar18 = dVar25;
      dVar19 = dVar25;
      if ((double)(float)SQRT(dVar23) != dVar25) {
        dVar18 = 1.0 / SQRT(dVar23);
        dVar18 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar18 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar23 * dVar18) * dVar18 - dVar26
                                                 ) * (double)(float)(dVar18 * 0.5) + dVar18);
        dVar18 = (double)(float)(dVar22 * dVar19);
        dVar19 = -(double)(float)(dVar21 * dVar19);
      }
      lVar17 = 4;
      pfVar12 = (float *)&DAT_00853880;
      pfVar11 = local_f0;
      do {
        fVar2 = *(float *)(iVar13 + iVar9 + 0x2c);
        fVar3 = pfVar12[1];
        dVar24 = (double)(*pfVar12 * fVar2);
        fVar4 = pfVar12[2] * fVar2;
        dVar23 = (double)pfVar12[3];
        pfVar12 = pfVar12 + 4;
        pfVar11[3] = (float)(dVar23 * (double)fVar8 + (double)(float)(dVar24 * (double)fVar8));
        pfVar11[2] = (float)(dVar23 * (double)fVar7 +
                            (double)((float)(dVar22 * dVar18 - (double)(float)(dVar21 * dVar19)) *
                                     fVar4 + (float)(dVar24 * dVar20 + dVar25)));
        *pfVar11 = (float)(dVar23 * (double)fVar6 +
                          (double)((float)(dVar21 * dVar25 - (double)(float)(dVar20 * dVar18)) *
                                   fVar4 + (float)(dVar24 * dVar22 +
                                                  (double)(float)((double)(fVar3 * fVar2) * dVar19))
                                  ));
        pfVar11[1] = (float)(dVar23 * (double)fVar5 +
                            (double)((float)(dVar20 * dVar19 - dVar25) * fVar4 +
                                    (float)(dVar24 * dVar21 +
                                           (double)(float)((double)(fVar3 * fVar2) * dVar18))));
        pfVar11 = pfVar11 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
    }
    iVar16 = iVar16 + 1;
    iVar13 = iVar13 + 0x10;
    iVar15 = iVar15 + 2;
    iVar14 = iVar14 + 0x10;
  } while (iVar16 < 0x30);
  return;
}


// 0x03da830 (0x14 bytes)
void M611_003da830(void)

{
  DAT_00853940 = 0x10000;
  return;
}


// 0x03da868 (0x608 bytes)
// strings: 00656d40: 'pDam HP:%f damageroClass:%d\n' | 00656d60: 'reaction type:%d damagetype:%d\n' | 00656d80: 'HP:%f\n' | 00656d88: 'group: pVar=%d moby=%d count:%d\n' | 003da850: '?333A' (raw)

/* Moby 611 */

void UpdateMoby_611(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 reactionType;
  ulonglong uVar8;
  undefined8 in_LR;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  float local_50 [4];
  int damageType;
  MobyInstance *local_3c;
  MobyInstance *local_38 [4];
  
  if (moby != (MobyInstance *)0x0) {
    pfVar3 = (float *)moby->pVar;
    uVar8 = ZEXT48(pfVar3);
    if (pfVar3 != (float *)0x0) {
      iVar7 = MB_damage(moby,0xc30000,0);
      if (iVar7 != 0) {
        printf("pDam HP:%f damageroClass:%d\n",(double)*(float *)(iVar7 + 0x2c),
                     *(undefined2 *)(*(int *)(iVar7 + 0x20) + 0xa6));
      }
      reactionType = MB_HandleDamage(moby,iVar7,uVar8,0,&damageType,0,0,4);
      if (iVar7 != 0) {
        printf("reaction type:%d damagetype:%d\n",reactionType,damageType);
      }
      if (1 < damageType) {
        fVar5 = *pfVar3 - *(float *)(iVar7 + 0x2c);
        *pfVar3 = fVar5;
        printf("HP:%f\n",(double)fVar5);
        if ((int)*pfVar3 < 1) {
          moby->state = '\x04';
          *(undefined1 *)((int)pfVar3 + 0x47) = 0x78;
          MB_UpdateLightsTransition(moby,uVar8 + 0x40);
        }
        else {
          *(undefined1 *)((int)pfVar3 + 0x47) = 0x5a;
          MB_UpdateLightsTransition(moby,uVar8 + 0x40);
        }
      }
      moby->damage = -1;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      bVar1 = moby->state;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      dVar9 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          local_3c = (MobyInstance *)0x0;
          pfVar3[0x1a] = 0.0;
          pfVar3[0x19] = 0.0;
          printf("group: pVar=%d moby=%d count:%d\n",pfVar3[0x15],(ulonglong)(byte)moby->group
                       ,g_NumMobyGroups);
          iVar7 = MB_GetFirstMobyInGroup(&local_3c,(int)pfVar3[0x15],'\x01','\0');
          while (iVar7 == 0) {
            if (((local_3c != (MobyInstance *)0x0) &&
                (local_3c->state != 0xfd && local_3c->state != 0xfe)) && (local_3c != moby)) {
              DeleteMoby(local_3c);
            }
            if (local_3c != moby) {
              pfVar3[0x1a] = (float)((int)pfVar3[0x1a] + 1);
            }
            iVar7 = MB_GetNextMobyInGroup(&local_3c,local_3c,'\0','\0');
          }
          auVar10 = ZEXT416(0xffffffff);
          auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          moby->state = '\x01';
          auVar10 = loadVectorLeftIndexed(0x58,uVar8);
          auVar11 = loadVectorRightIndexed(0x68,uVar8);
          auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar11 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar11,0);
          auVar10 = loadVectorLeftIndexed(in_LR,0x3da848);
          auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar10 = vectorAddFloatingPoint
                              (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60
                              );
          auVar10 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar12);
          auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
          auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x60,
                             uVar8);
          *(undefined4 *)((uint)(pfVar3 + 0x18) & 0xfffffffc) = uVar4;
          pfVar3[0x19] = 0.0;
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        }
        else {
          iVar7 = FastDecTimerS32(uVar8 + 0x60);
          if ((iVar7 != 0) && (dVar9 < (double)pfVar3[0x14])) {
            local_38[0] = (MobyInstance *)0x0;
            MB_GetFirstMobyInGroup(local_38,(int)pfVar3[0x15],'\x01','\x01');
            if (local_38[0] == moby) {
              MB_GetNextMobyInGroup(local_38,local_38[0],'\x01','\x01');
            }
            if (local_38[0] != (MobyInstance *)0x0) {
              pfVar3[0x19] = (float)((int)pfVar3[0x19] + 1);
              local_38[0]->state = '\0';
              local_38[0]->setByGroup = '\0';
              local_38[0]->modeBits = *(MobyModeBit *)&local_38[0]->pClass->mode_bits;
              local_38[0]->scale = local_38[0]->pClass->gScale;
              local_38[0]->updateDistance = -1;
              local_38[0]->drawDistance = 0xff;
              local_38[0]->enabled = '\x01';
              UpdateMobyGrids(local_38[0],0x80807f7f);
              local_38[0]->occlIndex = 0x7f80;
              local_38[0]->field45_0x72 = -1;
              local_38[0]->damage = -1;
              local_38[0]->field44_0x71 = -1;
              local_38[0]->collision = local_38[0]->pClass->collision;
              MB_CopyHeroLights(local_38[0]);
              UpdateMobyTransform(local_38[0]);
              reactionType = MB_GetPvarsIfMobyHasThem(local_38[0]);
              uVar2 = moby->state;
              if ((uint)reactionType != 0) {
                auVar10 = ZEXT416(0xfffffff0);
                auVar11 = loadVectorLeftIndexed(4,reactionType);
                auVar12 = loadVectorRightIndexed(0x14,reactionType);
                auVar10 = vectorShiftRightAlgebraicWord
                                    (auVar11 | auVar12,
                                     auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
                auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
                auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar4 = storeVectorElementWordIndexed
                                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,
                                   reactionType);
                *(undefined4 *)((uint)reactionType & 0xfffffffc) = uVar4;
              }
              if (uVar2 == '\x01') {
                auVar10 = loadVectorLeftIndexed(0x58,uVar8);
                auVar11 = loadVectorRightIndexed(0x68,uVar8);
                auVar10 = auVar10 | auVar11;
                auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              else {
                auVar10 = loadVectorLeftIndexed(0x5c,uVar8);
                auVar11 = loadVectorRightIndexed(0x6c,uVar8);
                auVar10 = auVar10 | auVar11;
                auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              auVar12 = vectorConvertFromSignedFixedPointWord(auVar10,0);
              auVar10 = ZEXT416(0xffffffff);
              auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
              auVar10 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
              auVar11 = loadVectorLeftIndexed(in_LR,0x3da848);
              auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar11 = vectorAddFloatingPoint
                                  (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 |
                                           auVar11 << 0x60);
              auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar10 = vectorMultiplyAddFloatingPoint
                                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                   auVar13);
              auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
              uVar4 = storeVectorElementWordIndexed(auVar10,0x60,uVar8);
              *(undefined4 *)((uint)(pfVar3 + 0x18) & 0xfffffffc) = uVar4;
            }
          }
          if ((int)pfVar3[0x1a] <= (int)pfVar3[0x19]) {
            moby->state = '\x02';
          }
        }
      }
      else if (bVar1 < 5) {
        if (3 < bVar1) {
          reactionType = 0;
          MB_RandomizeVector(DAT_0071f408 * 0.5,local_50);
          MB_genericExplosion
                    (reactionType,reactionType,0x4020000000000000,0x4010000000000000,
                     0x4032000000000000,0x3ff0000000000000,0x402e000000000000,moby,local_50,0,1,
                     0xffffffffffffffff,0x1e,8,0x14);
          moby->state = '\x05';
        }
      }
      else if (bVar1 < 6) {
        DeleteMoby(moby);
      }
    }
  }
  return;
}



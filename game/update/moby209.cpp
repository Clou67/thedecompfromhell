// game/update/moby209.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2ed160-0x2ed724
#include "game/update/moby209.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02ed160 (0x134 bytes)
longlong M208_002ed160(double param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  MobyInstance *pMVar5;
  
  pMVar5 = CreateMoby(SWINGSHOT_HOOK);
  lVar4 = (longlong)(int)pMVar5;
  if (pMVar5 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar5->pVar;
    iVar6 = (int)param_2;
    *piVar1 = iVar6;
    piVar1[1] = (int)(float)param_1;
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0xff;
    pMVar5->enabled = '\x01';
    SetColorOfMoby(pMVar5,0x80,0x80,0x80);
    GetBonePosition(param_2,0,lVar4 + 0x10);
    puVar2 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar9 = puVar2[2];
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    puVar3 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
    uVar13 = puVar3[3];
    uVar12 = puVar3[2];
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    puVar3 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
    uVar17 = puVar3[3];
    uVar16 = puVar3[2];
    uVar15 = puVar3[1];
    uVar14 = *puVar3;
    puVar3 = (undefined4 *)((uint)&pMVar5->transform & 0xfffffff0);
    puVar3[3] = puVar2[3];
    puVar3[2] = uVar9;
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar2 = (undefined4 *)((uint)&(pMVar5->transform).v1 & 0xfffffff0);
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    puVar2[1] = uVar11;
    *puVar2 = uVar10;
    puVar2 = (undefined4 *)((uint)&(pMVar5->transform).v2 & 0xfffffff0);
    puVar2[3] = uVar17;
    puVar2[2] = uVar16;
    puVar2[1] = uVar15;
    *puVar2 = uVar14;
    if (pMVar5->animationId != '\0') {
      MB_SetAnimation(lVar4,0,0,(int)(animationSpeed * 10.5));
    }
    UpdateMobyTransform(pMVar5);
    pMVar5->state = '\0';
    pMVar5->modeBits = pMVar5->modeBits | NO_POST_UPDATE;
  }
  return lVar4;
}


// 0x02ed298 (0x48c bytes)
/* Moby 209 */

void UpdateMoby_209(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  MobyModeBit MVar5;
  
  if ((moby != (MobyInstance *)0x0) && (piVar3 = (int *)moby->pVar, piVar3 != (int *)0x0)) {
    iVar4 = *piVar3;
    if ((iVar4 == 0) ||
       (((*(short *)(iVar4 + 0xa6) != 0xd0 ||
         (*(char *)(iVar4 + 0x20) == -3 || *(char *)(iVar4 + 0x20) == -2)) ||
        (*(MobyInstance **)(*(int *)(iVar4 + 0x78) + 0x14) != moby)))) {
      DeleteMoby(moby);
    }
    else {
      if (((*(ushort *)(iVar4 + 0x34) & 1) == 0) && (DAT_0096bd8f == '\0')) {
        MVar5 = moby->modeBits &
                (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      }
      else {
        MVar5 = moby->modeBits | (UNK_40|DISABLED);
      }
      moby->modeBits = MVar5;
      uVar1 = moby->state;
      if (uVar1 == '\a') {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
      }
      else if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->unk58 = 0.0;
          }
          if ((*(char *)(*piVar3 + 0x20) == '\x06') || (*(char *)(*piVar3 + 0x20) == '\a')) {
            moby->unk58 = 1.0;
            if (moby->animationId != '\a') {
              MB_SetAnimation(moby,7,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
        else if (uVar1 == '\x04') {
          cVar2 = *(char *)(*piVar3 + 0x20);
          if ((cVar2 == '\x04' || cVar2 == '\x03') || (cVar2 == '\x05')) {
            if (moby->animationId != '\x05') {
              MB_SetAnimation(moby,5,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x05';
          }
        }
        else if (uVar1 == '\x03') {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x04') {
              MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x04';
          }
        }
        else if (uVar1 == '\x02') {
          if ((moby->field43_0x70 & 2U) != 0) {
            DeleteMoby(moby);
            return;
          }
        }
        else if (uVar1 == '\x01') {
          if (*(char *)(*piVar3 + 0x20) == '\x02') {
            if (moby->animationId != '\x03') {
              MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x03';
            moby->unk58 = 1.0;
          }
          else if (*(char *)(*piVar3 + 0x20) == '\b') {
            if (moby->animationId != '\x02') {
              MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x02';
            moby->unk58 = 1.0;
          }
        }
        else if (uVar1 == '\0') {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x01') {
              MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x01';
            moby->unk58 = 1.0;
          }
        }
        else {
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
      }
      PostUpdateMobyLockTransform(moby);
    }
  }
  return;
}



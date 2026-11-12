// game/update/moby586.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3d3cec-0x3d4228
#include "game/update/moby586.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby1422.h"
#include "idol/fastfunc.h"

// 0x03d3cec (0x14 bytes)
void M586_003d3cec(void)

{
  DAT_00846644 = 0x10000;
  return;
}


// 0x03d3d30 (0x4f8 bytes)
// strings: 00a1000c: 'None'

/* Moby 586 */

void UpdateMoby_586(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  
  uVar1 = moby->state;
  pvVar2 = moby->pVar;
  if (uVar1 == '\x05') {
    fVar7 = Delt(*(float *)((int)pvVar2 + 100) - 1.5,0.15,&(moby->pos).z);
    if (fVar7 == 0.0) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    if (((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) &&
       (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
      moby->setByGroup = '\x01';
      fVar7 = (moby->pos).z;
      moby->state = '\x05';
      (moby->pos).z = fVar7 - 1.5;
      if (Level == Veldin2) {
        g_MiscLevelFlags.field127_0x7f = 1;
      }
    }
    fVar7 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar4 * fVar4 + fVar7 * fVar7) < 2.5) &&
       (uVar3 = 1 << (Level & 0x3f), (DAT_00a25818 & uVar3) == 0)) {
      if (g_HelpFlags.piece<904,2>() == 0) {
        g_HelpFlags[0x388] = '\0';
        g_HelpFlags[0x389] = '\x01';
        iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)g_HelpFlags.piece<906,2>() < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          g_HelpFlags.piece<906,2>() =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        g_HelpFlags.piece<908,4>() = g_HelpFlags.piece<908,4>() | uVar3 | 0x80000000;
      }
      else {
        iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar6 + (uint)(ushort)g_HelpFlags.piece<906,2>() * -600)) ||
           ((uint)(ushort)g_HelpFlags.piece<906,2>() * 600 == 0)) {
          Help_QueueMessage(STR_WITH_THE_THRUSTER_PACK_YOU_0x2B01,0x71);
        }
        else if ((int)(uint)(ushort)g_HelpFlags.piece<906,2>() < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          g_HelpFlags.piece<906,2>() =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
    }
  }
  else {
    if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        OrganicDelt
                  (*(float *)((int)pvVar2 + 100) + DAT_00846674,DAT_0071f418 * 5.0,
                   DAT_0071f418 * 10.0,g_FrameTime * 20.0,&(moby->pos).z,0x840000,
                   (float *)((int)pvVar2 + 0x68));
        if (((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) &&
           (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
          moby->state = '\x03';
          PlayMobySound(0,0,moby);
          iVar6 = *(int *)((int)pvVar2 + 0x70);
          if (((iVar6 != -1) && (g_SoundChannels[iVar6].pMoby == moby)) &&
             (g_SoundChannels[iVar6].state != '\0')) {
            sound_Kill(iVar6);
          }
          *(undefined4 *)((int)pvVar2 + 0x70) = 0xffffffff;
          return;
        }
        if (g_heroState == MOVEMENT_LOCKED) {
          return;
        }
        RegisterFuncForMoby(&PTR_M587_003d43c8_0070d798,moby);
        iVar6 = FastDecTimerS32((int)pvVar2 + 0x6c);
        if (iVar6 == 0) {
          return;
        }
        g_playDrekButtonCutscene = 1;
        return;
      }
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        *(f32 *)((int)pvVar2 + 100) = (moby->pos).z;
        *(ushort *)((int)pvVar2 + 0x3e) = *(ushort *)((int)pvVar2 + 0x3e) | 8;
        if (*(int *)((int)pvVar2 + 0x60) != 0) {
          moby->state = '\x01';
          moby->scale = moby->pClass->gScale * DAT_00846670;
          return;
        }
        moby->state = '\x04';
        return;
      }
    }
    OrganicDelt
              (*(float *)((int)pvVar2 + 100) + DAT_00846678,DAT_0071f418 * 20.0,DAT_0071f418 * 40.0,
               g_FrameTime * 20.0,&(moby->pos).z,0x840000,(float *)((int)pvVar2 + 0x68));
  }
  return;
}



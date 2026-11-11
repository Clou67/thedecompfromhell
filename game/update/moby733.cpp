// game/update/moby733.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x437780-0x437df4
#include "game/update/moby733.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1209.h"
#include "idol/fastfunc.h"

// 0x0437780 (0x208 bytes)
void M733_00437780(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int handle;
  int handle_00;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  
  pvVar1 = param_1->pVar;
  if (-1 < *(int *)((int)pvVar1 + 0x10)) {
    fVar3 = GameCamera.posY - (param_1->pos).y;
    fVar4 = GameCamera.posX - (param_1->pos).x;
    fVar5 = GameCamera.posZ - (param_1->pos).z;
    fVar2 = DAT_0085a208 * g_FrameTime + *(float *)((int)pvVar1 + 0x10);
    dVar11 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    *(float *)((int)pvVar1 + 0x10) = fVar2;
    if ((dVar11 < (double)fVar2) && (g_heroState != MOVEMENT_LOCKED)) {
      handle = PlayMobySound(0,0x10,param_1);
      handle_00 = PlayMobySound(1,0x10,param_1);
      dVar10 = 1024.0;
      lVar8 = FastDoubleToInt
                        ((double)((1.0 - (float)(dVar11 - (double)DAT_010ccd0c) /
                                         (float)((double)DAT_0085a210 - (double)DAT_010ccd0c)) *
                                 1024.0));
      lVar9 = FastDoubleToInt
                        ((double)(float)((double)((float)(dVar11 - (double)DAT_0085a214) /
                                                 (float)((double)DAT_010ccd10 - (double)DAT_0085a214
                                                        )) * dVar10));
      iVar6 = (int)lVar8 + ((uint)(lVar8 >> 0x3f) & -(int)lVar8);
      iVar7 = (int)lVar9 + ((uint)(lVar9 >> 0x3f) & -(int)lVar9);
      sound_SetVol(handle,iVar6 + ((uint)(0x400 - lVar8 >> 0x3f) & 0x400U - iVar6));
      sound_SetVol(handle_00,iVar7 + ((uint)(0x400 - lVar9 >> 0x3f) & 0x400U - iVar7));
      *(undefined4 *)((int)pvVar1 + 0x10) = 0xbf800000;
    }
  }
  return;
}


// 0x04379b8 (0x43c bytes)
/* Moby 733 */

undefined4 * UpdateMoby_733(MobyInstance *moby)

{
  byte bVar1;
  short sVar2;
  float *speed;
  float accel;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  undefined8 uVar8;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  speed = (float *)moby->pVar;
  M733_00437780();
  bVar1 = moby->state;
  puVar3 = (undefined4 *)(uint)bVar1;
  if (bVar1 == 0) {
    puVar3 = (undefined4 *)FastDecTimerS16(speed + 2);
    if (puVar3 != (undefined4 *)0x0) {
      dVar6 = (double)MB_randRangeFloat(0.0,3.14159);
      speed[1] = (float)dVar6;
      moby->state = '\x01';
      puVar3 = (undefined4 *)PlayMobySound(4,0,moby);
    }
  }
  else if (bVar1 < 2) {
    dVar6 = 0.01745329238474369;
    accel = DAT_0085a1f8 * 0.017453292 * DAT_0071f418;
    OrganicDeltAng
              (speed[1],accel,accel,DAT_0085a1fc * 0.017453292 * g_FrameTime,
               &(moby->rotation).z,0x860000,speed);
    iVar4 = IsMobyPlayingSound(moby,(int)*(short *)(speed + 3));
    if (iVar4 == 0) {
      iVar4 = PlayMobySound(2,4,moby);
      *(short *)(speed + 3) = (short)iVar4;
    }
    puVar3 = (undefined4 *)FastSubRots((moby->rotation).z,speed[1]);
    if (extraout_f1 < dVar6) {
      puVar3 = &DAT_00437988;
      uVar8 = 0;
      if (*speed == 0.0) {
        sVar2 = *(short *)(speed + 3);
        if (((sVar2 != -1) &&
            (iVar4 = (int)((longlong)sVar2 << 7) - (int)((longlong)sVar2 << 4),
            *(MobyInstance **)((int)g_SoundChannels + iVar4 + 0x18) == moby)) &&
           (*(char *)((int)g_SoundChannels + iVar4 + 4) != '\0')) {
          sound_Kill((int)sVar2);
        }
        *(undefined2 *)(speed + 3) = 0xffff;
        PlayMobySound(3,0,moby);
        speed[4] = DAT_0085a20c;
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,1);
        }
        GetBonePosition(moby,1,local_30);
        GetBonePosition(moby,0,local_40);
        MB_genericExplosion
                  (uVar8,uVar8,0x401c000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x4008000000000000,0x403e000000000000,moby,local_40,local_30,1,&DAT_00437988,0,6,
                   0x20);
        puVar3 = (undefined4 *)FUN_001ffaf0(moby,local_30,local_40);
      }
    }
  }
  else if (bVar1 < 3) {
    moby->modeBits = moby->modeBits | HAS_GLOW;
    dVar7 = (double)BlendAnimFrame(moby);
    dVar6 = (double)(float)(dVar7 * 0.10000000149011612);
    if (1.0 - (double)(float)(dVar7 * 0.10000000149011612) < 0.0) {
      dVar6 = 1.0;
    }
    uVar5 = FastLerpColor(dVar6,DAT_0085a200,DAT_0085a204);
    moby->field60_0x90 = uVar5;
    puVar3 = (undefined4 *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,1);
      }
      moby->state = '\0';
      dVar6 = (double)MB_randRangeFloat(60.0,180.0);
      puVar3 = (undefined4 *)
               FastDoubleToInt((double)(float)(dVar6 * (double)animationSpeed));
      *(short *)(speed + 2) = (short)puVar3;
    }
  }
  return puVar3;
}



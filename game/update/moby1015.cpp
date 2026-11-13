// game/update/moby1015.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x187a54-0x187df8
// shared update function UpdateMoby_{1015_1282}; registered for oClasses 1015, 1282
#include <math.h>
#include <stdio.h>
#include "game/update/moby1015.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"
#include "sdk/lUnk.h"

// 0x0187a54 (0x14 bytes)
void M1282_00187a54(void)

{
  DAT_0073bab8 = 0x10000;
  return;
}


// 0x0187a68 (0xf8 bytes)
undefined8
M1282_00187a68
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  FastNormalizeRMtx4(&local_50,param_1 + 0xc0);
  FastVecSub(&local_60,&stack0x00000040,param_1 + 0x10);
  if ((DAT_0073bae0 <=
       ABS(local_20 * local_54 + local_30 * local_58 + local_50 * local_60 + local_40 * local_5c))
     || (DAT_0073badc <=
         ABS(local_1c * local_54 + local_2c * local_58 + local_4c * local_60 + local_3c * local_5c))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// shared update function, registered for oClasses 1015, 1282
// 0x0187b68 (0x27c bytes)
// strings: 006541bc: 'Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n'

/* Moby 1015
   Moby 1282 */

void UpdateMoby_1015(MobyInstance *moby)

{
  u8 uVar1;
  f32 *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  MobyInstance *local_10 [2];
  
  pfVar2 = (f32 *)moby->pVar;
  if (pfVar2 == (f32 *)0x0) {
    printf("Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n"
                 ,moby->oClass,moby->uid);
    DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        fVar3 = (moby->pos).z + 4.0 / (animationSpeed * 20.0);
        (moby->pos).z = fVar3;
        if (pfVar2[2] + 4.0 <= fVar3) {
          (moby->pos).z = pfVar2[2] + 4.0;
          moby->state = '\x04';
          if (pfVar2[5] != -NAN) {
            (&g_MiscLevelFlags.field76_0x4c)[(int)pfVar2[5]] = 1;
          }
        }
      }
      else if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          fVar3 = (moby->pos).z - 4.0 / (animationSpeed * 20.0);
          (moby->pos).z = fVar3;
          if (fVar3 <= pfVar2[2]) {
            (moby->pos).z = pfVar2[2];
            moby->state = '\x02';
          }
          if (pfVar2[4] != -NAN) {
            iVar6 = MB_GetFirstMobyInGroup(local_10,(int)pfVar2[4],'\0','\0');
            while (iVar6 != 0) {
              uVar4.piece<0,4>() = (local_10[0]->pos).x;
              uVar4.piece<4,4>() = (local_10[0]->pos).y;
              uVar5.piece<0,4>() = (local_10[0]->pos).z;
              uVar5.piece<4,4>() = (local_10[0]->pos).w;
              iVar6 = M1282_00187a68(moby,local_10[0],uVar4,uVar5);
              if (iVar6 != 0) goto LAB_00187d5c;
              iVar6 = MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
            }
          }
          iVar6 = M1282_00187a68
                            (moby,&GameCamera,CONCAT44(GameCamera.posX,GameCamera.posY),
                             CONCAT44(GameCamera.posZ,GameCamera.posW));
          if ((iVar6 != 0) ||
             (iVar6 = M1282_00187a68
                                (moby,&g_heroMtx,CONCAT44(g_heroPosition.x,g_heroPosition.y),
                                 CONCAT44(g_heroPosition.z,g_heroPosition.w)), iVar6 != 0)) {
LAB_00187d5c:
            moby->state = '\x03';
          }
        }
        else if (uVar1 == '\0') {
          *pfVar2 = (moby->pos).x;
          pfVar2[1] = (moby->pos).y;
          pfVar2[2] = (moby->pos).z;
          pfVar2[3] = (moby->pos).w;
          moby->state = '\x02';
        }
      }
    }
  }
  return;
}


// 0x0187de4 (0x14 bytes)
void M1282_00187de4(void)

{
  DAT_0073bb30 = 0x10000;
  return;
}



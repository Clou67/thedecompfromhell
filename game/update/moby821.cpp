// game/update/moby821.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4764c8-0x47667c
// shared update function UpdateMoby_{821_1210}; registered for oClasses 821, 1210
#include "game/update/moby821.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x04764c8 (0x14 bytes)
void M1210_004764c8(void)

{
  DAT_00877998 = 0x10000;
  return;
}


// shared update function, registered for oClasses 821, 1210
// 0x04764e0 (0x19c bytes)
/* Moby 821
   Moby 1210 */

void UpdateMoby_821(MobyInstance *moby)

{
  f32 fVar1;
  void *pvVar2;
  Vec4 local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  pvVar2 = moby->pVar;
  if ((moby->modeBits & NO_UPDATE) == NONE) {
    if (moby->state == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x60) = 0;
      *(undefined2 *)((int)pvVar2 + 100) = 0;
      *(undefined1 *)((int)pvVar2 + 0x68) = 4;
      *(undefined2 *)((int)pvVar2 + 0x7e) = 0xd;
      GetBonePosition((longlong)(int)moby,0,&local_20);
      local_1c = (moby->pos).y - local_1c;
      local_20 = (moby->pos).x - local_20;
      local_18 = (moby->pos).z - local_18;
      moby->drawDistance = 0xff;
      *(float *)((int)pvVar2 + 0xc4) =
           SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c);
      *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
      *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
      *(f32 *)((int)pvVar2 + 0xb0) = (moby->rotation).x;
      *(f32 *)((int)pvVar2 + 0xb4) = (moby->rotation).y;
      *(f32 *)((int)pvVar2 + 0xb8) = (moby->rotation).z;
      fVar1 = (moby->rotation).w;
      *(undefined4 *)((int)pvVar2 + 0x5c) = 3;
      *(f32 *)((int)pvVar2 + 0xbc) = fVar1;
      moby->updateDistance = -1;
    }
    local_30.x = (moby->pos).x - *(float *)((int)pvVar2 + 0xa0);
    local_30.y = (moby->pos).y - *(float *)((int)pvVar2 + 0xa4);
    local_30.z = (moby->pos).z - *(float *)((int)pvVar2 + 0xa8);
    local_30.w = (moby->pos).w;
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x20),&local_30,ZEXT48(pvVar2) + 0xb0,
               (longlong)(int)moby + 0x40);
    *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
    *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
    *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
    *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
    *(f32 *)((int)pvVar2 + 0xb0) = (moby->rotation).x;
    *(f32 *)((int)pvVar2 + 0xb4) = (moby->rotation).y;
    *(f32 *)((int)pvVar2 + 0xb8) = (moby->rotation).z;
    *(f32 *)((int)pvVar2 + 0xbc) = (moby->rotation).w;
  }
  return;
}



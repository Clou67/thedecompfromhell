// game/update/moby1257.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x229424-0x229a54
#include "game/update/moby1257.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "idol/fastfunc.h"

// 0x0229424 (0x14 bytes)
void M1257_00229424(void)

{
  DAT_0076d4ac = 0x10000;
  return;
}


// 0x0229438 (0xc0 bytes)
MobyInstance * FUN_00229438(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyClass *pMVar3;
  u16 *puVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = CreateMoby(POISON_VESSEL_04E9);
  if (pMVar5 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar5->pVar;
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->setByGroup = '\0';
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[4] = 0;
    fVar1 = *param_2;
    pMVar5->drawDistance = 0x7f;
    (pMVar5->pos).x = fVar1;
    pMVar3 = pMVar5->pClass;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    puVar4 = pMVar3->collision;
    (pMVar5->pos).w = param_2[3];
    pMVar5->collision = puVar4;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x0229518 (0x53c bytes)
/* Moby 1257 */

void UpdateMoby_1257(void *this_,MobyInstance *moby)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  MobyInstance *pMVar4;
  longlong lVar5;
  int iVar6;
  MobyInstance *pMVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> auStack_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar5 = (longlong)(int)this_;
  lVar8 = lVar5 + 0x10;
  uVar9 = 0;
  uVar10 = 0x3fe0000000000000;
  pfVar2 = *(float **)((int)this_ + 0x78);
  iVar6 = CollSphere(0x3fe0000000000000,lVar8,moby,1,lVar5);
  pMVar4 = g_CollOutput.pMoby;
  pMVar7 = (MobyInstance *)0x0;
  if ((iVar6 != 0) &&
     ((pMVar7 = pMVar4, g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (iVar6 = MB_GetPlatformParent(g_CollOutput.pMoby), iVar6 == 0)))) {
    *(undefined1 *)((int)this_ + 0xbc) = 1;
  }
  iVar6 = MB_damage(lVar5,&DAT_00830000,0);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar6 + 0x20) + 0xa6) != *(short *)((int)this_ + 0xa6))) {
    *(undefined1 *)((int)this_ + 0xbc) = 1;
  }
  *(undefined1 *)((int)this_ + 0xa4) = 0xff;
  if (*(byte *)((int)this_ + 0x20) == 0) {
    fVar3 = DAT_0076d4d0 * DAT_0071f418;
    *pfVar2 = *pfVar2 * -0.02 + *pfVar2;
    pfVar2[1] = pfVar2[1] * -0.02 + pfVar2[1];
    pfVar2[2] = pfVar2[2] + -fVar3;
    FastVecAddSelf(auStack_60,lVar8,pfVar2);
    iVar6 = CollLine(local_80,lVar8,0x10,lVar5,0);
    if (iVar6 != 0) {
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
         (iVar6 = MB_GetPlatformParent(), iVar6 == 0)) {
        if ((g_CollOutput.pMoby == g_heroMobyPtr) || (pfVar2[2] < g_FrameTime * -9.8)) {
          *(undefined1 *)((int)this_ + 0xbc) = 1;
          *(float *)((int)this_ + 0x10) = g_CollOutput.ip.x;
          *(float *)((int)this_ + 0x14) = g_CollOutput.ip.y;
          *(float *)((int)this_ + 0x18) = g_CollOutput.ip.z;
          *(float *)((int)this_ + 0x1c) = g_CollOutput.ip.w;
          FastVecReflect(local_70,pfVar2,0xa10980);
        }
      }
      else {
        pfVar2[4] = (float)g_CollOutput.pMoby;
        *(undefined1 *)((int)this_ + 0x20) = 1;
        pfVar2[2] = 0.0;
        *(float *)((int)this_ + 0x10) = g_CollOutput.ip.x;
        *(float *)((int)this_ + 0x14) = g_CollOutput.ip.y;
        *(float *)((int)this_ + 0x18) = g_CollOutput.ip.z;
        *(float *)((int)this_ + 0x1c) = g_CollOutput.ip.w;
      }
    }
  }
  else if (*(byte *)((int)this_ + 0x20) < 2) {
    GetGroundZ(uVar10,lVar8,0);
    if (pfVar2[4] != 0.0) {
      cVar1 = *(char *)((int)pfVar2[4] + 0x20);
      if ((cVar1 == -2) || (cVar1 == -3)) {
        *(undefined1 *)((int)this_ + 0xbc) = 1;
        pfVar2[4] = 0.0;
      }
      else if ((pMVar7 != (MobyInstance *)0x0) &&
              (iVar6 = MB_GetPlatformParent(pMVar7), iVar6 != 0)) {
        MB_PlatformLocalToWorld(lVar5,pfVar2[4],lVar8,lVar5 + 0x40,lVar8,lVar5 + 0x40);
        FastVecSub(&local_50,lVar8,local_80);
        *pfVar2 = local_50;
        pfVar2[1] = local_4c;
        pfVar2[2] = local_48;
        pfVar2[3] = local_44;
        goto LAB_0022990c;
      }
    }
    *(undefined1 *)((int)this_ + 0x20) = 0;
    pfVar2[2] = 0.0;
    pfVar2[4] = 0.0;
  }
LAB_0022990c:
  if (*(char *)((int)this_ + 0xbc) != '\0') {
    uVar11 = 0x4000000000000000;
    uVar10 = 0x3ff0000000000000;
    MB_genericExplosion
              (uVar9,uVar9,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,
               0x3ff0000000000000,0x401c000000000000,lVar5,pfVar2,0,0xffffffffffffffff,0,3,3,5);
    sound_MobyPlay_oClass(0,0,(MobyInstance *)this_,0x79);
    uVar9 = CollMobySphere(uVar11,lVar8);
    MB_DamageMobyList
              (uVar10,uVar10,uVar10,lVar5,2,*(undefined8 *)((int)this_ + 0x10),
               *(undefined8 *)((int)this_ + 0x18),&DAT_00a14a00,uVar9,0,&DAT_00830001);
    DeleteMoby((MobyInstance *)this_);
  }
  return;
}



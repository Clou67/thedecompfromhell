// game/update/moby259.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x31d8c4-0x31ddc8
#include "game/update/moby259.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "sdk/lUnk.h"

// 0x031d8c4 (0x14 bytes)
void M259_0031d8c4(void)

{
  DAT_007fffbc = 0x10000;
  return;
}


// 0x031d8e0 (0xec bytes)
MobyInstance *
FUN_0031d8e0(Spline *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  int iVar3;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar2 = CreateMoby(0x103);
  if (pMVar2 != (MobyInstance *)0x0) {
    pvVar1 = pMVar2->pVar;
    (pMVar2->pos).x = fStack00000040;
    (pMVar2->pos).y = fStack00000044;
    *(Spline **)((int)pvVar1 + 0x60) = param_1;
    (pMVar2->pos).z = fStack00000048;
    (pMVar2->pos).w = fStack0000004c;
    iVar3 = PathFindClosestPnt(0.0,(Vec4 *)&stack0x00000040,param_1);
    *(int *)((int)pvVar1 + 100) = iVar3;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    UpdateMobyTransform(pMVar2);
    MB_CopyHeroLights(pMVar2);
  }
  return pMVar2;
}


// 0x031d9e8 (0x3e0 bytes)
// inlined: FastAtan2 @0x31db7c
/* Moby 259 */

void UpdateMoby_259(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  KickVars *kv;
  int *piVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0xb0;
  puVar6 = (ulonglong *)lVar9;
  *puVar6 = uVar8;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  puVar6[0x14] = unaff_r30;
  kv = (KickVars *)moby->pVar;
  iVar10 = MB_damage(moby,0x330000,0);
  if ((iVar10 != 0) && (dVar19 = 0.0, *(int *)(iVar10 + 0x2c) != 0)) {
    moby->collision = (ushort *)0x0;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    fVar11 = g_FrameTime;
    kv->xySpeed = g_FrameTime * 3.0;
    kv->type = '\0';
    MVar4 = moby->modeBits;
    kv->flag = 9;
    kv->xyBounceDamp = 1.0;
    kv->zBounceDamp = 1.0;
    kv->wallBounceDamp = 1.0;
    moby->modeBits =
         MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    kv->zSpeed = fVar11 * 6.0;
    fVar11 = g_FrameTime;
    kv->xySpeed = g_FrameTime * 8.0;
    kv->zSpeed = fVar11 * 10.0;
    fVar11 = (moby->pos).x - g_heroPosition.x;
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar1 = ABS(fVar11);
    fVar2 = ABS(fVar3);
    *(float *)(puVar6 + 0xe) = fVar11;
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    lVar13 = uVar14 << 2;
    fVar11 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar11 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
    fVar2 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar11) {
      lVar16 = uVar8 - 0xa0;
      lVar15 = uVar8 - 0x34;
      lVar13 = uVar8 - 0x24;
      lVar18 = 2;
      fVar11 = (fVar2 - fVar11) / (fVar2 + fVar11);
      fVar2 = fVar11 * fVar11;
      *(float *)(puVar6 + 0x11) = fVar11;
      *(float *)(puVar6 + 0x10) = fVar11;
      *(float *)((int)puVar6 + 0x84) = fVar11;
      *(float *)((int)puVar6 + 0x7c) = fVar11;
      fVar11 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar11;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar11 * fVar2;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar11 * fVar11;
        iVar10 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar10 + 4) * fVar11 * fVar11;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar8 - 0x34;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar13 = lVar16;
      lVar15 = lVar9;
      do {
        fVar11 = *pfVar17;
        fVar2 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar11;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      lVar15 = 2;
      do {
        iVar10 = (int)lVar9;
        lVar9 = lVar9 + 0x10;
        iVar7 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar10 + 0x7c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar1);
    }
    MB_StartKick(dVar19,moby,kv,lVar13,1,1,0);
    kv->peakFrame = 11.0;
    *(undefined4 *)&kv->field_0x54 = 0x41900000;
    moby->state = '\x01';
  }
  moby->damage = -1;
  if (moby->state == 0) {
    if ((kv == (KickVars *)0x0) || ((Spline *)kv[1].kickVel[0] == (Spline *)0x0)) {
      DeleteMoby(moby);
    }
    else {
      fVar11 = (float)GetPathPnt(g_FrameTime * 5.0,moby,(Spline *)kv[1].kickVel[0],
                                       (Vec4 *)&moby->pos,(int)kv[1].kickVel[1],1);
      piVar5 = (int *)kv[1].kickVel[0];
      kv[1].kickVel[1] = fVar11;
      if (fVar11 == (float)(*piVar5 + -1)) {
        DeleteMoby(moby);
      }
    }
  }
  else if (moby->state < 2) {
    uVar12 = MB_UpdateKick(moby,kv);
    if ((uVar12 & 0x40) == 0) {
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}



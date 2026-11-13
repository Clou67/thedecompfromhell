// game/update/moby78.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x459ff0-0x45a9f4
#include <math.h>
#include "game/update/moby78.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0459ff0 (0xfc bytes)
void M78_00459ff0(MobyInstance *param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = param_1->levelFlagIdx;
  uVar2 = param_1->uid;
  param_1->collision = (ushort *)0x0;
  (&g_CheckpointLive.objState[0])[(short)uVar2] = bVar1 + 2;
  if ((bVar1 == 0xff) || (((&g_CheckpointLevelFlags)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
    (&g_Checkpoint.objState[0])[(short)uVar2] = bVar1 + 2;
  }
  bVar1 = param_1->setByGroup;
  if (((bVar1 != 0xff) && (g_SoundChannels[bVar1].pMoby == param_1)) &&
     (g_SoundChannels[bVar1].state != '\0')) {
    sound_Kill((uint)bVar1);
  }
  param_1->setByGroup = -1;
  param_1->state = '\x02';
  return;
}


// 0x045a108 (0x8ec bytes)
/* Moby 78 */

void UpdateMoby_78(MobyInstance *moby)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  float fVar10;
  int iVar16;
  ulonglong uVar11;
  int iVar17;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<4> auStack_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_13c;
  float local_138;
  float local_134;
  float local_12c;
  float local_128;
  float local_124;
  double local_100;
  
  bVar5 = moby->state;
  pfVar9 = (float *)moby->pVar;
  if (bVar5 == 0) {
    uVar8 = moby->uid;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
    if (((&g_Checkpoint.objState[0])[(short)uVar8] == '\0') &&
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
        1 << (uVar8 & 0x1f)) == 0)) {
      moby->state = '\x01';
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->setByGroup = -1;
      moby->state = '\x03';
    }
  }
  else if (bVar5 < 2) {
    if (((pfVar9[4] == -NAN) || (g_MobyInstance[(int)pfVar9[4]].state != '\x02')) &&
       (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      if ((g_SoundChannels[(byte)moby->setByGroup].pMoby != moby) ||
         (g_SoundChannels[(byte)moby->setByGroup].state == '\0')) {
        iVar16 = PlayMobySound(0,4,moby);
        moby->setByGroup = (char)iVar16;
      }
      dVar25 = (double)(DAT_00969db4 - (moby->pos).y);
      dVar23 = (double)(g_heroCGPos - (moby->pos).x);
      dVar22 = (double)DAT_00969dbc;
      dVar21 = (double)(DAT_00969db8 - (moby->pos).z);
      FastNormalizeRMtx4(auStack_160,(longlong)(int)moby + 0xc0);
      iVar16 = 0;
      fVar10 = (float)((double)local_12c * dVar22 +
                      (double)(float)((double)local_13c * dVar21 +
                                     (double)(float)((double)local_15c * dVar23 +
                                                    (double)(float)((double)local_14c * dVar25))));
      dVar18 = (double)(float)((double)local_128 * dVar22 +
                              (double)(float)((double)local_138 * dVar21 +
                                             (double)(float)((double)local_158 * dVar23 +
                                                            (double)(float)((double)local_148 *
                                                                           dVar25))));
      dVar20 = 0.0;
      dVar19 = 30.5;
      local_100 = -5.0;
      do {
        MB_randRangeFloat(-0.25,0.25);
        dVar24 = 5.0;
        dVar26 = local_100;
        MB_randRangeFloat(-5.0,5.0);
        MB_randRangeFloat((float)dVar20,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        MB_randRangeFloat((float)dVar26,(float)dVar24);
        uVar11 = MB_randInt(0x20);
        iVar17 = MB_randInt(0x20);
        uVar12 = MB_randInt(0x10);
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar13 = FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 2) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)));
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar14 = FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 1) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar15 = FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 2) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)));
        SpawnPart_71
                  (local_190,local_180,local_170,
                   (int)((uVar11 & 0xffffffff) << 8) + 0x6000U | iVar17 + 0x60U |
                   (int)((uVar12 & 0xffffffff) << 0x10) + 0x200000U | 0x60000000,0x60808080,uVar13,
                   uVar14,uVar15);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x10);
      if (((5.0 <= ABS(fVar10)) || (dVar18 <= dVar20)) || (5.0 <= dVar18)) {
        *(undefined1 *)pfVar9 = 0;
        *(undefined1 *)((int)pfVar9 + 1) = 0;
        *(undefined1 *)((int)pfVar9 + 2) = 0;
        *(undefined1 *)((int)pfVar9 + 3) = 0;
        *(undefined1 *)(pfVar9 + 1) = 0;
        *(undefined1 *)((int)pfVar9 + 5) = 0;
        *(undefined1 *)((int)pfVar9 + 6) = 0;
        *(undefined1 *)((int)pfVar9 + 7) = 0;
        *(undefined1 *)(pfVar9 + 2) = 0;
        *(undefined1 *)((int)pfVar9 + 9) = 0;
        *(undefined1 *)((int)pfVar9 + 10) = 0;
        *(undefined1 *)((int)pfVar9 + 0xb) = 0;
        *(undefined1 *)(pfVar9 + 3) = 0;
        *(undefined1 *)((int)pfVar9 + 0xd) = 0;
        *(undefined1 *)((int)pfVar9 + 0xe) = 0;
        *(undefined1 *)((int)pfVar9 + 0xf) = 0;
      }
      else {
        fVar6 = (moby->transform).v2.w;
        fVar7 = (moby->transform).v1.w;
        fVar2 = (float)((double)(moby->transform).v2.x * dVar18 +
                       (double)((moby->transform).v1.x * fVar10));
        fVar3 = (float)((double)(moby->transform).v2.y * dVar18 +
                       (double)((moby->transform).v1.y * fVar10));
        fVar4 = (float)((double)(moby->transform).v2.z * dVar18 +
                       (double)((moby->transform).v1.z * fVar10));
        *pfVar9 = fVar2;
        pfVar9[1] = fVar3;
        pfVar9[2] = fVar4;
        pfVar9[3] = fVar7 * fVar10 +
                    (float)((double)fVar6 * dVar18 +
                           (double)(float)((double)local_124 * dVar22 +
                                          (double)(float)((double)local_134 * dVar21 +
                                                         (double)(float)((double)local_154 * dVar23
                                                                        + (double)(float)((double)
                                                  local_144 * dVar25)))));
        *pfVar9 = fVar2 + (moby->pos).x;
        pfVar9[1] = fVar3 + (moby->pos).y;
        pfVar9[2] = fVar4 + (moby->pos).z;
      }
      RegisterFuncForMoby(&PTR_M786_0045aa28_0070e9c0,moby);
    }
    else {
      M78_00459ff0((longlong)(int)moby);
    }
  }
  else if (bVar5 < 3) {
    fVar10 = pfVar9[5];
    pfVar9[5] = (float)((int)fVar10 + 1);
    if ((int)fVar10 < 0x3d) {
      *(undefined1 *)pfVar9 = 0;
      *(undefined1 *)((int)pfVar9 + 1) = 0;
      *(undefined1 *)((int)pfVar9 + 2) = 0;
      *(undefined1 *)((int)pfVar9 + 3) = 0;
      *(undefined1 *)(pfVar9 + 1) = 0;
      *(undefined1 *)((int)pfVar9 + 5) = 0;
      *(undefined1 *)((int)pfVar9 + 6) = 0;
      *(undefined1 *)((int)pfVar9 + 7) = 0;
      *(undefined1 *)(pfVar9 + 2) = 0;
      *(undefined1 *)((int)pfVar9 + 9) = 0;
      *(undefined1 *)((int)pfVar9 + 10) = 0;
      *(undefined1 *)((int)pfVar9 + 0xb) = 0;
      *(undefined1 *)(pfVar9 + 3) = 0;
      *(undefined1 *)((int)pfVar9 + 0xd) = 0;
      *(undefined1 *)((int)pfVar9 + 0xe) = 0;
      *(undefined1 *)((int)pfVar9 + 0xf) = 0;
      RegisterFuncForMoby(&PTR_M786_0045aa28_0070e9c0,moby);
    }
    else {
      moby->state = '\x03';
    }
  }
  return;
}



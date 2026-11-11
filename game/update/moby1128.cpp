// game/update/moby1128.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1d7850-0x1d7f20
#include <math.h>
#include "game/update/moby1128.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x01d7850 (0x14 bytes)
void M1128_001d7850(void)

{
  DAT_00764800 = 0x10000;
  return;
}


// 0x01d7870 (0x6b0 bytes)
/* Moby 1128 */

undefined * UpdateMoby_1128(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  uint uVar19;
  undefined *puVar20;
  
  uVar19 = (uint)(byte)moby->levelFlagIdx;
  pfVar13 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][uVar19] == -1)) {
    pfVar13[4] = -NAN;
    uVar19 = (uint)(byte)moby->levelFlagIdx;
  }
  puVar20 = (undefined *)0x0;
  bVar18 = false;
  if ((&DAT_00a202c0)[uVar19] == -1) {
    if (pfVar13[0xf] == 0.0) {
      bVar18 = true;
    }
    else {
      puVar20 = (undefined *)0x1;
    }
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((bVar18) ||
       ((((puVar20 == (undefined *)0x0 && (pfVar13[4] != -NAN)) &&
         (g_MobyInstance + (int)pfVar13[4] != (MobyInstance *)0x0)) &&
        ((bVar2 = g_MobyInstance[(int)pfVar13[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
         ((float)(uint)bVar2 != pfVar13[5])))))) {
      fVar3 = pfVar13[8];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[9];
      puVar20 = &DAT_00720000;
      fVar6 = 0.0;
      fVar7 = (moby->transform).v1.y;
      fVar8 = (moby->transform).v1.z;
      fVar17 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar9 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v0.z;
      fVar11 = (moby->transform).v2.y;
      fVar12 = (moby->transform).v2.z;
      fVar14 = -(pfVar13[0xb] * g_FrameTime) / fVar17;
      fVar16 = fVar6;
      if (0.0 - fVar17 < 0.0) {
        fVar16 = fVar14 * fVar3;
      }
      fVar15 = fVar6;
      if (0.0 - fVar17 < 0.0) {
        fVar15 = fVar14 * fVar4;
      }
      if (0.0 - fVar17 < 0.0) {
        fVar6 = fVar14 * fVar5;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar16 = fVar14 * fVar3;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar15 = fVar14 * fVar4;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar6 = fVar14 * fVar5;
      }
      (moby->pos).x =
           (moby->pos).x +
           (moby->transform).v2.x * fVar6 +
           (moby->transform).v0.x * fVar15 + (moby->transform).v1.x * fVar16;
      (moby->pos).y = (moby->pos).y + fVar11 * fVar6 + fVar9 * fVar15 + fVar7 * fVar16;
      (moby->pos).z = (moby->pos).z + fVar12 * fVar6 + fVar10 * fVar15 + fVar8 * fVar16;
      fVar3 = pfVar13[0xb] * g_FrameTime + pfVar13[3];
      pfVar13[3] = fVar3;
      if (fVar17 < fVar3) {
        (moby->pos).x = *pfVar13;
        fVar3 = pfVar13[0xc];
        (moby->pos).y = pfVar13[1];
        (moby->pos).z = pfVar13[2];
        (moby->pos).w = pfVar13[3];
        if (fVar3 != -NAN) {
          PlayMobySound((int)pfVar13[0xd],0,moby);
        }
        if (pfVar13[0xe] != -NAN) {
          (&DAT_00a20828)[(int)pfVar13[0xe]] = 0;
        }
        puVar20 = (undefined *)0x1;
        moby->state = '\x01';
      }
    }
    else {
      if (pfVar13[0xc] != -NAN) {
        PlayMobySound((int)pfVar13[0xc],0,moby);
      }
      puVar20 = (undefined *)0x2;
      moby->state = '\x02';
    }
    return puVar20;
  }
  if (uVar1 != '\x03') {
    if (uVar1 != '\x02') {
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return puVar20;
        }
        *pfVar13 = (moby->pos).x;
        pfVar13[1] = (moby->pos).y;
        pfVar13[2] = (moby->pos).z;
        pfVar13[3] = (moby->pos).w;
        if (pfVar13[0xe] != -NAN) {
          (&DAT_00a20828)[(int)pfVar13[0xe]] = 0;
        }
        moby->state = '\x01';
        pfVar13[3] = 0.0;
        return (undefined *)0x1;
      }
      if (bVar18) {
        return puVar20;
      }
      if (((puVar20 == (undefined *)0x0) && (pfVar13[4] != -NAN)) &&
         (g_MobyInstance + (int)pfVar13[4] != (MobyInstance *)0x0)) {
        bVar2 = g_MobyInstance[(int)pfVar13[4]].state;
        if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((float)(uint)bVar2 != pfVar13[5])) {
          return (undefined *)(uint)bVar2;
        }
      }
      pfVar13[3] = SQRT(pfVar13[9] * pfVar13[9] + pfVar13[7] * pfVar13[7] + pfVar13[8] * pfVar13[8])
      ;
      if (pfVar13[0xc] != -NAN) {
        PlayMobySound((int)pfVar13[0xc],0,moby);
      }
      moby->state = '\x02';
      return (undefined *)0x2;
    }
    if ((!bVar18) &&
       (((puVar20 != (undefined *)0x0 || (pfVar13[4] == -NAN)) ||
        ((g_MobyInstance + (int)pfVar13[4] == (MobyInstance *)0x0 ||
         ((bVar2 = g_MobyInstance[(int)pfVar13[4]].state, bVar2 == 0xfd || bVar2 == 0xfe ||
          ((float)(uint)bVar2 != pfVar13[6])))))))) {
      fVar3 = pfVar13[8];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[9];
      fVar7 = (moby->transform).v2.y * fVar5 +
              (moby->transform).v0.y * fVar4 + (moby->transform).v1.y * fVar3;
      fVar6 = (moby->transform).v2.x * fVar5 +
              (moby->transform).v0.x * fVar4 + (moby->transform).v1.x * fVar3;
      fVar4 = (moby->transform).v2.z * fVar5 +
              (moby->transform).v0.z * fVar4 + (moby->transform).v1.z * fVar3;
      fVar3 = 0.0;
      fVar9 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
      fVar5 = (pfVar13[10] * g_FrameTime) / fVar9;
      fVar8 = fVar3;
      if (0.0 - fVar9 < 0.0) {
        fVar8 = fVar4 * fVar5;
      }
      fVar10 = fVar3;
      if (0.0 - fVar9 < 0.0) {
        fVar10 = fVar7 * fVar5;
      }
      if (0.0 - fVar9 < 0.0) {
        fVar3 = fVar6 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar8 = fVar4 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar10 = fVar7 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar3 = fVar6 * fVar5;
      }
      (moby->pos).z = (moby->pos).z + fVar8;
      (moby->pos).y = (moby->pos).y + fVar10;
      (moby->pos).x = (moby->pos).x + fVar3;
      fVar3 = -(pfVar13[10] * g_FrameTime - pfVar13[3]);
      pfVar13[3] = fVar3;
      if (0.0 <= fVar3) {
        return &DAT_00720000;
      }
      (moby->pos).x = *pfVar13 + fVar6;
      (moby->pos).y = pfVar13[1] + fVar7;
      (moby->pos).z = pfVar13[2] + fVar4;
      (moby->pos).w = pfVar13[3];
      pfVar13[3] = 0.0;
      if (pfVar13[0xe] != -NAN) {
        (&DAT_00a20828)[(int)pfVar13[0xe]] = 1;
      }
      moby->state = '\x03';
      if (pfVar13[0xd] == -NAN) {
        return (undefined *)0xffffffff;
      }
      puVar20 = (undefined *)PlayMobySound((int)pfVar13[0xc],0,moby);
      return puVar20;
    }
    if (pfVar13[0xc] != -NAN) {
      PlayMobySound((int)pfVar13[0xc],0,moby);
    }
    moby->state = '\x04';
    return (undefined *)0x4;
  }
  if (!bVar18) {
    if (puVar20 != (undefined *)0x0) {
      return puVar20;
    }
    if (pfVar13[4] == -NAN) {
      return (undefined *)0xffffffff;
    }
    if (g_MobyInstance + (int)pfVar13[4] == (MobyInstance *)0x0) {
      return (undefined *)0x0;
    }
    bVar2 = g_MobyInstance[(int)pfVar13[4]].state;
    if (bVar2 == 0xfd || bVar2 == 0xfe) {
      return (undefined *)(uint)bVar2;
    }
    if ((float)(uint)bVar2 != pfVar13[6]) {
      return (undefined *)(uint)bVar2;
    }
  }
  pfVar13[3] = 0.0;
  if (pfVar13[0xc] != -NAN) {
    PlayMobySound((int)pfVar13[0xc],0,moby);
  }
  moby->state = '\x04';
  return (undefined *)0x4;
}



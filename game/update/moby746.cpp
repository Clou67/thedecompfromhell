// game/update/moby746.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x445354-0x445710
#include "game/update/moby746.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0445354 (0x14 bytes)
void M746_00445354(void)

{
  DAT_0085a678 = 0x10000;
  return;
}


// 0x0445398 (0x378 bytes)
/* Moby 746 */

void UpdateMoby_746(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  
  bVar1 = moby->state;
  pvVar7 = moby->pVar;
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar7 + 0x60) = (moby->pos).x;
    *(f32 *)((int)pvVar7 + 100) = (moby->pos).y;
    *(f32 *)((int)pvVar7 + 0x68) = (moby->pos).z;
    fVar2 = (moby->pos).w;
    *(undefined4 *)((int)pvVar7 + 0x70) = 0x3f800000;
    *(f32 *)((int)pvVar7 + 0x6c) = fVar2;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar7 + 0x74) = 0xffffffff;
  }
  else if (bVar1 < 2) {
    if ((moby->setByGroup == '\x02') || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      moby->state = '\x02';
      moby->setByGroup = '\0';
    }
  }
  else if (bVar1 < 3) {
    fVar3 = -(g_FrameTime * 0.5 - *(float *)((int)pvVar7 + 0x70));
    *(float *)((int)pvVar7 + 0x70) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar7 + 0x70) = 0;
      fVar3 = 0.0;
    }
    if (fVar3 == 0.0) {
      iVar23 = *(int *)((int)pvVar7 + 0x74);
      if (((iVar23 != -1) && (g_SoundChannels[iVar23].pMoby == moby)) &&
         (g_SoundChannels[iVar23].state != '\0')) {
        sound_Kill(iVar23);
      }
      *(undefined4 *)((int)pvVar7 + 0x74) = 0xffffffff;
      moby->state = '\x01';
    }
    else {
      iVar23 = IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x74));
      if (iVar23 == 0) {
        iVar23 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar7 + 0x74) = iVar23;
      }
    }
  }
  fVar3 = (moby->rotation).z;
  fVar8 = *(float *)((int)pvVar7 + 0x70) * 0.62831855;
  (moby->rotation).y = fVar8;
  fVar9 = fVar3 + 1.5707963;
  fVar4 = fVar8 + 1.5707963;
  fVar21 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar21 = fVar8;
  }
  fVar10 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar10 = fVar3;
  }
  fVar5 = 3.1415925 - fVar9;
  if (fVar9 - (3.1415925 - fVar9) < 0.0) {
    fVar5 = fVar9;
  }
  fVar6 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar6 = fVar4;
  }
  fVar20 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar21 < 0.0) {
    fVar20 = fVar21;
  }
  fVar8 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
    fVar8 = fVar10;
  }
  fVar3 = fVar20 * fVar20;
  fVar21 = -3.1415925 - fVar9;
  if ((-3.1415925 - fVar9) - fVar5 < 0.0) {
    fVar21 = fVar5;
  }
  fVar9 = fVar8 * fVar8;
  fVar10 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
    fVar10 = fVar6;
  }
  fVar4 = *(float *)((int)pvVar7 + 0x68);
  fVar22 = fVar21 * fVar21;
  fVar11 = fVar10 * fVar10;
  fVar19 = fVar3 * fVar3 * fVar20;
  fVar17 = fVar9 * fVar9 * fVar8;
  fVar5 = *(float *)((int)pvVar7 + 0x60);
  fVar6 = *(float *)((int)pvVar7 + 100);
  fVar18 = fVar3 * fVar19;
  fVar14 = fVar22 * fVar22 * fVar21;
  fVar16 = fVar9 * fVar17;
  fVar12 = fVar11 * fVar11 * fVar10;
  fVar15 = fVar22 * fVar14;
  (moby->pos).w = 0.0;
  fVar13 = fVar11 * fVar12;
  fVar3 = fVar3 * fVar18 * 2.601887e-06 +
          fVar18 * -0.0001980741 + fVar19 * 0.0083330255 + fVar3 * fVar20 * -0.16666657 + fVar20;
  (moby->pos).y =
       (fVar9 * fVar16 * 2.601887e-06 +
       fVar16 * -0.0001980741 + fVar17 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) * 11.0
       * fVar3 + fVar6;
  (moby->pos).x =
       (fVar22 * fVar15 * 2.601887e-06 +
       fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar22 * fVar21 * -0.16666657 + fVar21) *
       11.0 * fVar3 + fVar5;
  (moby->pos).z =
       (fVar11 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
       11.0 + fVar4 + -11.0;
  return;
}



// game/update/moby855.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48ec58-0x48f5fc
#include "game/update/moby855.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/water.h"

// 0x048ec58 (0x14 bytes)
void M855_0048ec58(void)

{
  DAT_008c7b3c = 0x10000;
  return;
}


// 0x048ecd0 (0x92c bytes)
/* Moby 855 */

ulonglong UpdateMoby_855(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *pMVar9;
  GPiece<16> auVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> local_130;
  GPiece<80> local_120;
  
  uVar11 = (ulonglong)(int)moby;
  pvVar8 = moby->pVar;
  if (pvVar8 != (void *)0x0) {
    bVar5 = moby->state;
    uVar11 = (ulonglong)bVar5;
    bVar14 = (bVar5 == 1) << 1;
    if (bVar5 == 0) {
      uVar11 = (ZERO_MASK((0xff - (uint)(byte)g_LevelFlags[Level][(byte)moby->levelFlagIdx])) & 2U) + 1;
      moby->state = (u8)uVar11;
    }
    else if (bVar5 < 2) {
      if ((-1 < *(int *)((int)pvVar8 + 8)) &&
         (uVar11 = (ulonglong)(byte)g_MobyInstance[*(int *)((int)pvVar8 + 8)].setByGroup,
         g_MobyInstance[*(int *)((int)pvVar8 + 8)].setByGroup != 0)) {
        uVar11 = MB_SetStateByGroup(moby->group,2);
      }
    }
    else if (bVar5 < 3) {
      dVar23 = (double)(moby->pos).y;
      dVar22 = (double)(moby->pos).x;
      dVar20 = (double)GameCamera.posY;
      dVar18 = (double)GameCamera.posX;
      fVar1 = (float)(dVar23 - dVar20);
      dVar15 = (double)(moby->pos).z;
      fVar2 = (float)(dVar22 - dVar18);
      dVar21 = (double)GameCamera.posZ;
      fVar3 = (float)(dVar15 - dVar21);
      *(int *)((int)pvVar8 + 0x10) = *(int *)((int)pvVar8 + 0x10) + 1;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 < 64.0) {
        iVar12 = **(int **)((int)pvVar8 + 0xc);
        if (((iVar12 < 0) || (g_SoundChannels[iVar12].pMoby == (MobyInstance *)0x0)) ||
           ((g_SoundChannels[iVar12].pMoby)->oClass != SEWER_PIPE_WITH_SLUDGE)) {
          iVar12 = PlayMobySound(0,0xd,moby);
          **(int **)((int)pvVar8 + 0xc) = iVar12;
          dVar15 = (double)(moby->pos).z;
          fVar1 = (moby->pos).y;
          if (-1 < iVar12) {
            fVar2 = (moby->transform).v0.y;
            fVar3 = (moby->transform).v0.x;
            fVar4 = (moby->transform).v0.z;
            dVar18 = 0.0;
            fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            if (fVar6 == 0.0) {
              fVar7 = (moby->transform).v0.w;
              dVar20 = dVar18;
              dVar21 = dVar18;
            }
            else {
              fVar6 = 2.5 / fVar6;
              fVar7 = (moby->transform).v0.w;
              dVar18 = (double)(fVar3 * fVar6);
              dVar20 = (double)(fVar2 * fVar6);
              dVar21 = (double)(fVar4 * fVar6);
            }
            iVar12 = (int)((longlong)iVar12 << 7) - (int)((longlong)iVar12 << 4);
            *(float *)((int)g_SoundChannels + iVar12 + 0x20) =
                 (float)(dVar18 + (double)(moby->pos).x);
            *(float *)((int)g_SoundChannels + iVar12 + 0x24) =
                 (float)(dVar20 + (double)fVar1);
            *(float *)((int)g_SoundChannels + iVar12 + 0x2c) = fVar7;
            *(float *)((int)g_SoundChannels + iVar12 + 0x28) = (float)(dVar21 + dVar15);
          }
        }
        else {
          pMVar9 = g_SoundChannels[iVar12].pMoby;
          if ((pMVar9 != moby) &&
             ((pMVar9->state != '\x02' ||
              (fVar2 = (float)((double)(pMVar9->pos).y - dVar20),
              fVar3 = (float)((double)(pMVar9->pos).x - dVar18),
              fVar4 = (float)((double)(pMVar9->pos).z - dVar21),
              fVar1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2))))) {
            fVar1 = (moby->transform).v0.y;
            fVar2 = (moby->transform).v0.x;
            fVar3 = (moby->transform).v0.z;
            dVar18 = 0.0;
            fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
            if (fVar4 == 0.0) {
              fVar6 = (moby->transform).v0.w;
              dVar20 = dVar18;
              dVar21 = dVar18;
            }
            else {
              fVar4 = 2.5 / fVar4;
              fVar6 = (moby->transform).v0.w;
              dVar18 = (double)(fVar2 * fVar4);
              dVar20 = (double)(fVar1 * fVar4);
              dVar21 = (double)(fVar3 * fVar4);
            }
            g_SoundChannels[iVar12].pos[3] = fVar6;
            g_SoundChannels[iVar12].pos[0] = (float)(dVar18 + dVar22);
            g_SoundChannels[iVar12].pos[1] = (float)(dVar20 + dVar23);
            g_SoundChannels[iVar12].pos[2] = (float)(dVar21 + dVar15);
            g_SoundChannels[**(int **)((int)pvVar8 + 0xc)].pMoby = moby;
          }
        }
      }
      dVar18 = (double)*(float *)((int)WaterTiles + *(int *)((int)pvVar8 + 4) * 0x11a0 + 8);
      if (dVar15 < dVar18) {
        moby->state = '\x03';
      }
      uVar11 = 0x8c0000;
      auVar10 = ZEXT416(0);
      iVar12 = 0;
      auVar27 = loadVectorLeftIndexed(0x7b80,0x8c0000);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                 auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      if ((bool)(bVar14 >> 1 & 1)) {
        dVar25 = 0.0;
        dVar22 = 0.4000000059604645;
        dVar23 = 10.0;
        dVar24 = 2.0;
        dVar15 = 1.25;
        dVar20 = 1.0;
        dVar21 = 1.5;
        do {
          dVar16 = (double)MB_randRangeFloat((float)dVar25,100.0);
          dVar19 = (double)DAT_008c7b84;
          fVar1 = DAT_008c7b78;
          if (dVar16 <= dVar19) {
            fVar1 = DAT_008c7b74;
          }
          dVar26 = (double)fVar1;
          MB_randRangeFloat(-DAT_008c7b7c,DAT_008c7b7c);
          MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          dVar21 = (double)(float)dVar21;
          dVar20 = (double)(float)dVar20;
          if (dVar16 <= dVar19) {
            dVar16 = (double)DAT_008c7b68;
            MB_randRangeFloat(-0.4,(float)dVar22);
          }
          else {
            dVar16 = (double)DAT_008c7b6c;
          }
          dVar19 = (double)MB_randRangeFloat(0.8,1.2);
          SpawnPart_50
                    ((double)(float)(dVar16 * dVar19),dVar18,
                     (double)(float)((double)g_FrameTimeSq * dVar23),local_130,local_120);
          iVar13 = MB_randInt(2);
          if ((iVar13 != 0) &&
             (SQRT((float)((double)(float)((double)(moby->pos).z - dVar18) * dVar24) /
                   (float)((double)g_FrameTimeSq * dVar23)) <
              (float)(longlong)*(int *)((int)pvVar8 + 0x10))) {
            MB_randRot();
            MB_randRangeFloat((float)dVar25,(float)dVar15);
            uVar17 = MB_randRangeFloat((float)dVar20,(float)dVar21);
            iVar13 = MB_randInt(2);
            dVar16 = -2.0;
            if (iVar13 != 0) {
              dVar16 = dVar24;
            }
            SpawnPart_46(uVar17,dVar16,local_130,&DAT_00a15d30);
          }
          iVar12 = iVar12 + 1;
          uVar11 = 0x8c0000;
        } while ((float)(longlong)iVar12 < DAT_008c7b80);
      }
    }
  }
  return uVar11;
}



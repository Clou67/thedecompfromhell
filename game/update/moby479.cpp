// game/update/moby479.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x39a708-0x39d1c8
#include <math.h>
#include <stdlib.h>
#include "game/update/moby479.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x039a708 (0x4e4 bytes)
// inlined: FastAtan2 @0x39a888, FastAtan2 @0x39aa50
MobyInstance * SpawnMoby_479_DroneDevice(undefined4 param_1,f32 *param_2)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  longlong lVar13;
  longlong lVar14;
  short sVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x19] = unaff_r29;
  pMVar15 = CreateMoby(DRONE);
  if (pMVar15 != (MobyInstance *)0x0) {
    pMVar15->updateDistance = -1;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x02';
    pMVar15->setByGroup = '\0';
    pvVar7 = pMVar15->pVar;
    (pMVar15->pos).x = *param_2;
    fVar1 = param_2[1];
    pMVar15->drawDistance = 0xff;
    (pMVar15->pos).y = fVar1;
    (pMVar15->pos).z = param_2[2];
    fVar1 = param_2[3];
    *(undefined4 *)((int)pvVar7 + 0x44) = param_1;
    (pMVar15->pos).w = fVar1;
    DAT_0096bcd6 = DAT_0096bcd6 + '\x01';
    UpdateMobyTransform(pMVar15);
    MB_CopyHeroLights(pMVar15);
    fVar2 = (pMVar15->pos).x - g_heroPosition.x;
    fVar4 = (pMVar15->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar2);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar8 + 0x7c) = fVar2;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = fVar3 - fVar6;
    fVar2 = 0.0;
    uVar20 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar8 + 0x7c));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar9 = fVar2;
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0xd0;
      lVar17 = uVar12 - 0x38;
      lVar18 = uVar12 - 0x28;
      lVar21 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xb4) = fVar4;
      *(float *)((int)puVar8 + 0xac) = fVar4;
      *(float *)(puVar8 + 0x16) = fVar4;
      *(float *)(puVar8 + 0x15) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
      *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
      *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar18 = uVar12 - 0x38;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      fVar4 = fVar2;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar9 = (fVar4 + 0.7853982) * fVar6 + fVar3;
    }
    *(float *)((int)pvVar7 + 0x28) = fVar9;
    fVar4 = g_heroPosition.y - (pMVar15->pos).y;
    fVar3 = g_heroPosition.x - (pMVar15->pos).x;
    fVar6 = (pMVar15->pos).z - g_heroPosition.z;
    fVar4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    *(float *)((int)puVar8 + 0x74) = fVar6;
    fVar6 = ABS(fVar6);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0xe) = fVar4;
    *(float *)(puVar8 + 0xf) = fVar3 - fVar6;
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0xd0;
      lVar17 = uVar12 - 0x58;
      lVar18 = uVar12 - 0x48;
      lVar21 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar18 = uVar12 - 0x58;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    *(float *)((int)pvVar7 + 0x24) = fVar2;
    fVar2 = (pMVar15->pos).y - g_heroPosition.y;
    fVar4 = (pMVar15->pos).x - g_heroPosition.x;
    sVar16 = 0;
    *(undefined2 *)((int)pvVar7 + 0x54) = 0;
    *(float *)((int)pvVar7 + 0x20) = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
    *(float *)((int)pvVar7 + 0x3c) = g_heroPosition.z;
    do {
      iVar10 = (int)((longlong)sVar16 << 2);
      if (*(int *)((int)&DAT_0096bd00 + iVar10) == 0) {
        *(MobyInstance **)((int)&DAT_0096bd00 + iVar10) = pMVar15;
        break;
      }
      sVar16 = sVar16 + 1;
      *(short *)((int)pvVar7 + 0x54) = sVar16;
    } while (sVar16 < 6);
    *(undefined2 *)((int)pvVar7 + 0x56) = 100;
    pMVar15->collision = (ushort *)0x0;
  }
  return pMVar15;
}


// 0x039ac10 (0x29c bytes)
// strings: 00a0fdc4: 'None'

void M479_0039ac10(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  MobyInstance *pMVar12;
  uint uVar13;
  double extraout_f1;
  double dVar14;
  double dVar15;
  GPiece<40> local_40;
  
  DAT_0096bcd5 = 0;
  iVar11 = Hero_GetWeaponAmmo(0x18);
  if (iVar11 != 0) {
    fVar2 = g_heroRotation.z + 1.5707963;
    fVar3 = 3.1415925 - g_heroRotation.z;
    if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
      fVar3 = g_heroRotation.z;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar4 = -3.1415925 - g_heroRotation.z;
    if ((-3.1415925 - g_heroRotation.z) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar2 = fVar4 * fVar4;
    fVar5 = fVar3 * fVar3;
    fVar8 = fVar2 * fVar2 * fVar4;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar9 = fVar2 * fVar8;
    fVar7 = fVar5 * fVar6;
    dVar15 = (double)((fVar2 * fVar9 * 2.601887e-06 +
                      fVar9 * -0.0001980741 +
                      fVar8 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * 0.25);
    dVar14 = (double)((fVar5 * fVar7 * 2.601887e-06 +
                      fVar7 * -0.0001980741 +
                      fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) * 0.25);
    if (DAT_0096bcd6 < 6) {
      hero_ConsumeAmmo(0x18,1);
      if (CHAR_ARRAY_00a0fdc4.piece<32,2>() != -1) {
        CHAR_ARRAY_00a0fdc4.piece<32,2>() = CHAR_ARRAY_00a0fdc4.piece<32,2>() + 1;
      }
      iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<34,2>() < iVar11 / 600) {
        sVar10 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a0fdc4.piece<34,2>() =
             ((short)(iVar11 / 600) + sVar10) -
             ((short)((short)(iVar11 / 0x2580000) + sVar10) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4.piece<36,4>() = CHAR_ARRAY_00a0fdc4.piece<36,4>() | 1 << (Level & 0x3f) | 0x80000000;
      uVar13 = (uint)DAT_0096bcd6;
      pMVar12 = g_heroMobyPtr;
      if (DAT_0096bcd6 < 6) {
        do {
          pMVar12 = (MobyInstance *)SpawnMoby_479_DroneDevice(pMVar12,local_40);
          if (pMVar12 != (MobyInstance *)0x0) {
            pfVar1 = (float *)pMVar12->pVar;
            *pfVar1 = (float)dVar14;
            pfVar1[1] = (float)dVar15;
            pfVar1[2] = 0.25;
            pfVar1[3] = (float)extraout_f1;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < 6);
      }
    }
  }
  return;
}


// 0x039aeb8 (0xb4 bytes)
void M479_0039aeb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_r7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    uVar2 = SpawnPart_55
                      (0x3fa99999a0000000,0x3f847ae140000000,param_1,0,&DAT_0039aeac,
                       0xffffffff80808080,in_r7,0x10808080);
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
    uVar2 = SpawnPart_55
                      (0x3fa99999a0000000,0x3f847ae140000000,param_1,1,&DAT_0039aeac,
                       0xffffffff80808080,in_r7,0x10808080);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return;
}


// 0x039af88 (0x348 bytes)
// strings: 0039af6c: 'Nnk(' (raw)

MobyInstance * M479_0039af88(float *param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  MobyInstance *moby;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar14;
  int iVar13;
  int *piVar15;
  MobyInstance *pMVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> local_60;
  
  pMVar16 = (MobyInstance *)0x0;
  bVar1 = MobyUpdateChainStart != (MobyInstance *)0x0;
  dVar18 = 1000000000.0;
  moby = MobyUpdateChainStart;
  do {
    if (!bVar1) {
      return pMVar16;
    }
    uVar14 = 0;
    if (moby->pClass != (MobyClass *)0x0) {
      uVar14 = (ushort)moby->pClass->mode_bits;
    }
    uVar14 = uVar14 & 0xff;
    if ((moby->state != 0xfd && moby->state != 0xfe) &&
       (((uVar14 == 5 || (uVar14 == 7)) || (uVar14 == 8)))) {
      if (param_2 != (int *)0x0) {
        iVar13 = 0;
        piVar15 = param_2;
        do {
          if ((MobyInstance *)*piVar15 == moby) goto LAB_0039b288;
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar13 < 9);
      }
      if (((uVar14 != 5) || ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
         ((moby->enabled != '\0' ||
          ((moby->oClass == (DOOR_LEFT|TRESPASSER_0050) || (moby->oClass == ROCKET_0031)))))) {
        fVar3 = (moby->pos).y;
        fVar2 = param_1[1] - fVar3;
        fVar4 = (moby->pos).x;
        fVar7 = *param_1 - fVar4;
        fVar5 = (moby->pos).z;
        fVar6 = param_1[2] - fVar5;
        dVar19 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2);
        if (moby->oClass == 0x4d6) {
          pfVar9 = (float *)moby->pVar;
          fVar6 = pfVar9[1];
          fVar7 = *pfVar9;
          fVar8 = pfVar9[2];
          fVar11 = 0.0;
          dVar17 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar2 = (float)(dVar19 / dVar17);
          fVar10 = fVar11;
          if (0.0 - dVar17 < 0.0) {
            fVar10 = fVar6 * fVar2;
          }
          fVar12 = fVar11;
          if (0.0 - dVar17 < 0.0) {
            fVar12 = fVar7 * fVar2;
          }
          if (0.0 - dVar17 < 0.0) {
            fVar11 = fVar8 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar10 = fVar6 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar12 = fVar7 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar11 = fVar8 * fVar2;
          }
          fVar3 = param_1[1] - (fVar10 + fVar3);
          fVar2 = *param_1 - (fVar12 + fVar4);
          fVar4 = param_1[2] - (fVar11 + fVar5);
          if ((double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= dVar19)
          goto LAB_0039b1dc;
        }
        else if (uVar14 < 7) {
          if ((uVar14 != 5) || (dVar19 <= 4.0)) goto LAB_0039b1dc;
        }
        else if (uVar14 < 8) {
          if (dVar19 <= 5.300000190734863) goto LAB_0039b1dc;
        }
        else if ((8 < uVar14) || (dVar19 <= 6.0)) {
LAB_0039b1dc:
          if ((dVar19 < dVar18) &&
             ((iVar13 = FUN_00486828(moby), iVar13 == 0 || (*(short *)(iVar13 + 0x68) < 1)))) {
            MB_GetPvarsIfMobyHasThem(moby);
            iVar13 = CollLine(param_1,local_60,6,moby,0);
            if (iVar13 == 0) {
              dVar18 = dVar19;
              pMVar16 = moby;
            }
          }
        }
      }
    }
LAB_0039b288:
    moby = (MobyInstance *)moby->pChain;
    bVar1 = moby != (MobyInstance *)0x0;
  } while( true );
}


// 0x039b390 (0x1a38 bytes)
// inlined: FastRSqrt @0x39bd50, FastAtan2 @0x39c01c, FastAtan2 @0x39c1d0, FastRSqrt @0x39c654, FastAtan2 @0x39c910, FastAtan2 @0x39cacc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 479 */

void UpdateMoby_479(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  short sVar12;
  int iVar13;
  u16 *puVar14;
  void *pvVar15;
  float fVar16;
  undefined2 uVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  byte bVar25;
  gameMode_t gVar26;
  ulonglong uVar27;
  int iVar31;
  longlong lVar28;
  MobyInstance *pMVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  undefined4 uVar36;
  short sVar37;
  longlong lVar29;
  longlong lVar30;
  byte bVar38;
  longlong lVar39;
  ulonglong uVar40;
  float *pfVar41;
  ulonglong uVar42;
  float *pfVar43;
  int *piVar44;
  int *piVar45;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar46;
  ulonglong unaff_r30;
  ushort uVar47;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f24;
  double dVar54;
  ulonglong in_f25;
  double dVar55;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar56;
  undefined8 uVar57;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  
  lVar29 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x2d0;
  puVar18 = (ulonglong *)lVar30;
  *puVar18 = uVar27;
  puVar18[0x5c] = in_LR;
  puVar18[0x52] = in_f24;
  puVar18[0x53] = in_f25;
  puVar18[0x54] = in_f26;
  puVar18[0x55] = in_f27;
  puVar18[0x56] = in_f28;
  puVar18[0x57] = in_f29;
  puVar18[0x58] = in_f30;
  puVar18[0x59] = in_f31;
  puVar18[0x51] = unaff_r31;
  puVar18[0x4d] = unaff_r27;
  gVar26 = g_gameMode;
  pfVar43 = (float *)moby->pVar;
  bVar2 = g_gameMode == GAME_MODE_VENDOR;
  bVar1 = g_gameMode == GAME_MODE_SCENE;
  MVar11 = moby->modeBits;
  puVar18[0x50] = unaff_r30;
  puVar18[0x4f] = unaff_r29;
  puVar18[0x4e] = unaff_r28;
  puVar18[0x4c] = unaff_r26;
  puVar18[0x4b] = unaff_r25;
  if (((bVar2 || bVar1) || (gVar26 == GAME_MODE_SPACE)) || (g_heroState == TURRET_PLANE_UI)) {
    moby->modeBits = MVar11 | (UNK_40|DISABLED);
  }
  else {
    moby->modeBits =
         MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    if (moby->state < 5) {
      DAT_0096bcd4 = DAT_0096bcd4 + 1;
      if (DAT_0096bcd6 < DAT_0096bcd4) {
        iVar35 = 0;
        DAT_0096bcd4 = 1;
        DAT_0096bcd7 = '\0';
        dVar48 = (double)FastWrapRot(DAT_0096bcd8,DAT_0071f408 * 0.05);
        iVar31 = 0;
        DAT_0096bcd8 = (float)dVar48;
        piVar44 = &DAT_0096bd00;
        iVar33 = 0;
        dVar48 = 1000000.0;
        lVar46 = 0;
        piVar45 = piVar44;
        do {
          iVar13 = *piVar45;
          if (iVar13 != 0) {
            if ((*(short *)(iVar13 + 0xa6) == 0x1df) &&
               (bVar38 = *(byte *)(iVar13 + 0x20), bVar38 != 0xfd && bVar38 != 0xfe)) {
              lVar46 = lVar46 + 1;
              *(undefined4 *)(&DAT_0096bcdc + iVar31) =
                   *(undefined4 *)(*(int *)(iVar13 + 0x78) + 0x30);
              if (bVar38 < 4) {
                DAT_0096bcd7 = DAT_0096bcd7 + '\x01';
              }
              iVar31 = iVar31 + 4;
              if (8 < (int)lVar46) break;
            }
            else {
              *piVar45 = 0;
            }
          }
          iVar33 = iVar33 + 1;
          piVar45 = piVar45 + 1;
        } while (iVar33 < 6);
        if ((int)lVar46 < 9) {
          lVar28 = lVar46 << 2;
          lVar39 = 9 - lVar46;
          do {
            iVar31 = (int)lVar28;
            lVar39 = lVar39 + -1;
            lVar28 = lVar28 + 4;
            *(undefined4 *)(&DAT_0096bcdc + iVar31) = 0;
          } while (0 < (int)lVar39);
        }
        pMVar32 = (MobyInstance *)M479_0039af88(&g_heroPosition,&DAT_0096bcdc);
        if (pMVar32 != (MobyInstance *)0x0) {
          MB_GetPvarsIfMobyHasThem(pMVar32);
          iVar31 = 0;
          do {
            iVar33 = *piVar44;
            if ((iVar33 != 0) &&
               ((((iVar13 = *(int *)(*(int *)(iVar33 + 0x78) + 0x30), iVar13 == 0 ||
                  (cVar3 = *(char *)(iVar13 + 0x20), cVar3 == -2)) || (cVar3 == -3)) &&
                (fVar7 = *(float *)(iVar33 + 0x14) - (pMVar32->pos).y,
                fVar4 = *(float *)(iVar33 + 0x10) - (pMVar32->pos).x,
                dVar49 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7), dVar49 < dVar48)))) {
              dVar48 = dVar49;
              iVar35 = iVar33;
            }
            iVar31 = iVar31 + 1;
            piVar44 = piVar44 + 1;
          } while (iVar31 < 6);
          if (iVar35 != 0) {
            iVar31 = *(int *)(iVar35 + 0x78);
            *(MobyInstance **)(iVar31 + 0x30) = pMVar32;
            *(int *)(iVar31 + 0x48) = (int)(short)pMVar32->oClass;
            iVar33 = MB_GetPvarsIfMobyHasThem(pMVar32);
            fVar4 = (pMVar32->pos).z;
            fVar5 = (pMVar32->pos).y;
            fVar6 = (pMVar32->pos).w;
            if (iVar33 != 0) {
              fVar4 = fVar4 + *(float *)(iVar33 + 0x10);
            }
            *(f32 *)(iVar31 + 0x10) = (pMVar32->pos).x;
            *(f32 *)(iVar31 + 0x14) = fVar5;
            *(float *)(iVar31 + 0x18) = fVar4;
            *(f32 *)(iVar31 + 0x1c) = fVar6;
            *(undefined1 *)(iVar35 + 0x20) = 3;
            iVar33 = rand();
            iVar35 = iVar33 / 3 + (iVar33 >> 0x1f);
            iVar33 = iVar33 + (iVar35 - (iVar35 >> 0x1f)) * -3;
            PlayMobySound(iVar33 + ((uint)(-(longlong)iVar33 >> 0x3f) & 1),0,moby);
            *(undefined4 *)(&DAT_0096bcdc + (int)(lVar46 << 2)) = *(undefined4 *)(iVar31 + 0x30);
          }
        }
      }
      bVar25 = DAT_0096bcd6;
      bVar38 = DAT_0096bcd4;
      uVar42 = (ulonglong)DAT_0096bcd6;
      uVar24 = (uint)DAT_0096bcd6;
      uVar21 = (uint)DAT_0096bcd6;
      uVar34 = (uint)DAT_0096bcd6;
      dVar48 = (double)FastIntToDouble(DAT_0096bcd4);
      puVar18[0x48] =
           (longlong)(int)(uVar34 + ((uint)((longlong)(uVar42 - 1) >> 0x3f) & 1 - uVar21));
      uVar34 = (uint)bVar38 * ((bVar25 + 2) * 0x33 >> 8);
      dVar58 = (double)(longlong)puVar18[0x48];
      dVar49 = 6.2831854820251465;
      dVar50 = 3.1415927410125732;
      pfVar43[0x10] = (float)(dVar48 / dVar58) * 6.2831855 - 3.1415927;
      dVar48 = (double)FastIntToDouble(uVar34 - (uVar34 / (uVar24 + 1)) * (uVar24 + 1));
      pfVar43[0xd] = (float)((double)(float)(dVar48 / dVar58) * dVar49 - dVar50) * 0.25;
      iVar35 = MB_damage(lVar29,1,0);
      if (((((iVar35 != 0) && (iVar35 = *(int *)(iVar35 + 0x20), iVar35 != 0)) &&
           (*(int *)(iVar35 + 0x24) != 0)) &&
          ((sVar12 = *(short *)(*(int *)(iVar35 + 0x24) + 0x46), 4 < sVar12 && (sVar12 < 9)))) &&
         ((*(short *)(iVar35 + 0xa6) != 0x4d6 ||
          (iVar35 = FastDecTimerS16((int)pfVar43 + 0x56), iVar35 != 0)))) {
        moby->state = '\x04';
      }
    }
    bVar38 = moby->state;
    if (bVar38 < 4) {
      if (1 < bVar38) {
        if (bVar38 < 3) {
          pvVar15 = moby->pVar;
          moby->collision = (ushort *)0x0;
          dVar50 = (double)(moby->pos).x;
          dVar49 = (double)(moby->pos).y;
          dVar48 = (double)(moby->pos).z;
          if (*(int *)((int)pvVar15 + 0x4c) == 0) {
            uVar36 = SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,0,&DAT_0039b2d0,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x4c) = uVar36;
          }
          if (*(int *)((int)pvVar15 + 0x50) == 0) {
            uVar36 = SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,1,&DAT_0039b2d0,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x50) = uVar36;
          }
          dVar52 = 0.05000000074505806;
          moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
          dVar56 = 1.0;
          dVar51 = (double)pfVar43[10];
          pfVar43[8] = DAT_0071f408 * 0.05 * (1.0 - pfVar43[8]) + pfVar43[8];
          uVar57 = FastWrapRot(pfVar43[0x10],DAT_0096bcd8);
          dVar58 = (double)FastDiffRots(uVar57,(double)pfVar43[10]);
          dVar58 = (double)FastWrapRot
                                     ((float)dVar51,
                                      (float)((double)(float)((double)DAT_0071f408 * dVar52) *
                                             dVar58));
          dVar51 = (double)pfVar43[9];
          pfVar43[10] = (float)dVar58;
          dVar58 = (double)FastDiffRots((double)pfVar43[0xd],dVar51);
          dVar58 = (double)FastWrapRot
                                     ((float)dVar51,(float)((double)(DAT_0071f408 * 0.01) * dVar58))
          ;
          fVar4 = pfVar43[10];
          fVar7 = fVar4 + 1.5707963;
          fVar8 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar8 = fVar4;
          }
          fVar16 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar16 = fVar7;
          }
          fVar10 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar8 < 0.0) {
            fVar10 = fVar8;
          }
          fVar4 = pfVar43[8];
          dVar51 = 0.0;
          pfVar43[9] = (float)dVar58;
          *(undefined4 *)(puVar18 + 0x1a) = 0;
          fVar8 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar16 < 0.0) {
            fVar8 = fVar16;
          }
          fVar16 = fVar10 * fVar10;
          fVar9 = fVar8 * fVar8;
          fVar22 = fVar16 * fVar16 * fVar10;
          fVar19 = fVar9 * fVar9 * fVar8;
          fVar23 = fVar16 * fVar22;
          fVar20 = fVar9 * fVar19;
          fVar7 = pfVar43[9];
          *(undefined4 *)(puVar18 + 0x1b) = 0;
          *(float *)((int)puVar18 + 0xd4) = fVar7;
          *(undefined4 *)((int)puVar18 + 0xdc) = 0;
          dVar55 = (double)((fVar16 * fVar23 * 2.601887e-06 +
                            fVar23 * -0.0001980741 +
                            fVar22 * 0.0083330255 + fVar16 * fVar10 * -0.16666657 + fVar10) * fVar4)
          ;
          dVar54 = (double)((fVar9 * fVar20 * 2.601887e-06 +
                            fVar20 * -0.0001980741 +
                            fVar19 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) * fVar4);
          FastEulerToMtx1(uVar27 - 0x180,uVar27 - 0x200);
          pMVar32 = g_heroMobyPtr;
          fVar20 = g_heroPosition.w;
          fVar9 = g_heroPosition.z;
          fVar19 = g_heroPosition.y;
          dVar58 = (double)*(float *)(puVar18 + 0x2a);
          fVar10 = g_heroPosition.x + (g_heroMobyPtr->transform).v2.x;
          fVar4 = *(float *)(puVar18 + 0x2d);
          *(float *)(puVar18 + 0x1c) = fVar10;
          fVar7 = *(float *)(puVar18 + 0x2b);
          fVar19 = fVar19 + (pMVar32->transform).v2.y;
          dVar53 = (double)DAT_0071f408;
          fVar8 = *(float *)(puVar18 + 0x31);
          *(float *)((int)puVar18 + 0xe4) = fVar19;
          fVar16 = (pMVar32->transform).v2.z;
          *(float *)((int)puVar18 + 0xec) = fVar20;
          fVar9 = fVar9 + fVar16;
          *(float *)(puVar18 + 0x1c) =
               fVar10 + (float)((double)*(float *)(puVar18 + 0x30) * dVar58 +
                               (double)(float)(dVar58 * dVar54 +
                                              (double)(float)((double)*(float *)(puVar18 + 0x2c) *
                                                             dVar55)));
          *(float *)((int)puVar18 + 0xe4) =
               fVar19 + (float)((double)*(float *)((int)puVar18 + 0x184) * dVar58 +
                               (double)(float)((double)*(float *)((int)puVar18 + 0x154) * dVar54 +
                                              (double)(float)((double)*(float *)((int)puVar18 +
                                                                                0x164) * dVar55)));
          *(float *)(puVar18 + 0x1d) = fVar9;
          fVar9 = (float)(dVar53 * dVar52) * (fVar9 - pfVar43[0xf]) + pfVar43[0xf];
          pfVar43[0xf] = fVar9;
          fVar16 = *(float *)((int)puVar18 + 0xe4) - (moby->pos).y;
          fVar10 = *(float *)(puVar18 + 0x1c) - (moby->pos).x;
          fVar4 = (fVar9 + (float)((double)fVar8 * dVar58 +
                                  (double)(float)((double)fVar7 * dVar54 +
                                                 (double)(float)((double)fVar4 * dVar55)))) -
                  (moby->pos).z;
          *(float *)(puVar18 + 0x1c) = fVar10;
          *(float *)((int)puVar18 + 0xe4) = fVar16;
          *(float *)(puVar18 + 0x1d) = fVar4;
          fVar7 = SQRT(fVar4 * fVar4 + fVar10 * fVar10 + fVar16 * fVar16);
          if (g_FrameTime * 10.0 < fVar7) {
            fVar7 = (g_FrameTime * 10.0) / fVar7;
            *(float *)(puVar18 + 0x1c) = fVar10 * fVar7;
            *(float *)((int)puVar18 + 0xe4) = fVar16 * fVar7;
            *(float *)(puVar18 + 0x1d) = fVar4 * fVar7;
          }
          uVar42 = MB_MoveAndCollide
                             (dVar51,0x3fc70a3d80000000,dVar51,lVar29,uVar27 - 0x1f0);
          if (((uVar42 & 1) != 0) && (moby->enabled == '\0')) {
            fVar4 = GameCamera.posX + GameCamera.orientMtx.up.x;
            fVar7 = GameCamera.posY + GameCamera.orientMtx.up.y;
            fVar8 = GameCamera.posZ + GameCamera.orientMtx.up.z;
            (moby->pos).w = (f32)GameCamera.field8_0x14c;
            (moby->pos).x = fVar4 - GameCamera.orientMtx.forward.x;
            (moby->pos).y = fVar7 - GameCamera.orientMtx.forward.y;
            (moby->pos).z = fVar8 - GameCamera.orientMtx.forward.z;
          }
          fVar5 = (moby->pos).y;
          *(f32 *)(puVar18 + 0x18) = (moby->pos).x;
          fVar6 = (moby->pos).z;
          *(f32 *)((int)puVar18 + 0xc4) = fVar5;
          fVar5 = (moby->pos).w;
          *(f32 *)(puVar18 + 0x19) = fVar6;
          *(f32 *)((int)puVar18 + 0xcc) = fVar5;
          uVar57 = 0x3fc99999a0000000;
          iVar35 = CollSphere(0x3fc99999a0000000,uVar27 - 0x210);
          if ((iVar35 != 0) &&
             ((((bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0, bVar1 ||
                ((g_CollOutput.pMoby)->oClass != RATCHET)) || ((g_CollOutput.pMoby)->state == 0xfe)) ||
              ((g_CollOutput.pMoby)->state == 0xfd)))) {
            uVar47 = 0;
            if (!bVar1) {
              uVar47 = 0;
              if ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
                uVar47 = (ushort)(g_CollOutput.pMoby)->pClass->mode_bits;
              }
            }
            uVar47 = uVar47 & 0xff;
            if (((!bVar1) &&
                ((g_CollOutput.pMoby)->state != 0xfd && (g_CollOutput.pMoby)->state != 0xfe)) &&
               ((uVar47 == 5 || ((uVar47 == 7 || (uVar47 == 8)))))) {
              SetCollDamIn(dVar56,uVar27 - 0x1e0,lVar29,0x10000);
              pMVar32 = g_CollOutput.pMoby;
              fVar4 = *pfVar43;
              auVar59 = ZEXT416(0xfffffff0);
              auVar60 = loadVectorLeftIndexed(0xa6,lVar29);
              dVar58 = (double)(fVar4 * fVar4 + pfVar43[1] * pfVar43[1]);
              auVar59 = vectorShiftRightWord
                                  (auVar60,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60);
              if ((double)(float)SQRT(dVar58) == dVar51) {
                *(undefined4 *)((int)puVar18 + 0xf4) = 0;
                *(undefined4 *)(puVar18 + 0x1e) = 0;
              }
              else {
                dVar52 = 1.0 / SQRT(dVar58);
                dVar52 = (double)(float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52
                                                         - dVar56) * (double)(float)(dVar52 * 0.5) +
                                        dVar52);
                dVar52 = (double)(float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52
                                                         - dVar56) * (double)(float)(dVar52 * 0.5) +
                                        dVar52);
                fVar7 = (float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52 - dVar56)
                                * (double)(float)(dVar52 * 0.5) + dVar52);
                *(float *)(puVar18 + 0x1e) = fVar4 * fVar7;
                *(float *)((int)puVar18 + 0xf4) = pfVar43[1] * fVar7;
              }
              auVar60 = vectorSplatHalfWord(auVar59,1);
              *(undefined4 *)(puVar18 + 0x1f) = 0x3f800000;
              *(undefined4 *)((int)puVar18 + 0xfc) = 0x45afdf66;
              *(undefined1 *)(puVar18 + 0x21) = 1;
              *(undefined1 *)((int)puVar18 + 0x109) = 2;
              uVar17 = storeVectorElementHalfWordIndexed(auVar60,0x10a,lVar30);
              *(undefined2 *)((int)puVar18 + 0x10a) = uVar17;
              auVar60 = loadVectorLeftIndexed(0x70,0x39b2d0);
              auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar61 = vectorPermute(*(undefined1 (*) [16])(puVar18 + 0x1e),_DAT_0039b320,
                                      _DAT_0039b330);
              auVar59 = vectorPermute(auVar59,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                              auVar60 << 0x60,_DAT_0039b350);
              auVar59 = vectorPermute(auVar59,*(undefined1 (*) [16])(puVar18 + 0x20),_DAT_0039b360);
              *(undefined1 (*) [16])(puVar18 + 8) = auVar61;
              *(undefined4 *)((int)puVar18 + 0x6c) = *(undefined4 *)((int)puVar18 + 0x11c);
              *(undefined4 *)(puVar18 + 0xd) = *(undefined4 *)(puVar18 + 0x23);
              *(undefined4 *)((int)puVar18 + 100) = *(undefined4 *)((int)puVar18 + 0x114);
              *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(puVar18 + 0x22);
              *(undefined1 (*) [16])(puVar18 + 10) = auVar59;
              CollDamageMobyDirect
                        (pMVar32,puVar18[9],puVar18[8],puVar18[9],puVar18[10],puVar18[0xb],
                         puVar18[0xc],puVar18[0xd]);
              if (uVar47 == 5) {
                if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
                    ((g_CollOutput.pMoby)->oClass != 0x4d6)) ||
                   (sVar12 = *(short *)((int)pfVar43 + 0x56), sVar12 < 1)) {
                  puVar18[0x12] = 1;
                  puVar18[0x14] = 1;
                  puVar18[0x15] = 1;
                  puVar18[0x16] = 0xffffffffffffffff;
                  puVar18[0x17] = 0;
                  MB_genericExplosion
                            (dVar51,dVar51,0x3fd99999a0000000,uVar57,0x4010000000000000,dVar56,
                             0x4020000000000000,lVar29,pfVar43,0,0xffffffffffffffff,0,0,1,1);
                  moby->state = '\x04';
                }
                else {
                  iVar35 = FastDoubleToInt((double)*(float *)((int)puVar18 + 0x10c));
                  sVar37 = 1;
                  if (0 < iVar35) {
                    sVar37 = FastDoubleToInt((double)*(float *)((int)puVar18 + 0x10c));
                  }
                  *(short *)((int)pfVar43 + 0x56) = sVar12 - sVar37;
                }
              }
            }
          }
          *pfVar43 = (float)((double)(moby->pos).x - dVar50);
          pfVar43[1] = (float)((double)(moby->pos).y - dVar49);
          pfVar43[2] = (float)((double)(moby->pos).z - dVar48);
          pfVar43[3] = (moby->pos).w;
          dVar56 = (double)(moby->pos).x;
          dVar53 = (double)(moby->pos).y;
          fVar4 = (float)(dVar56 - dVar50);
          fVar7 = (float)(dVar53 - dVar49);
          dVar52 = ABS((double)fVar4);
          dVar54 = ABS((double)fVar7);
          *(float *)((int)puVar18 + 0x1b4) = fVar4;
          *(float *)(puVar18 + 0x37) = fVar7;
          *(float *)((int)puVar18 + 0x1bc) = (float)(dVar52 - dVar54);
          fVar4 = (moby->pos).z;
          fVar7 = (moby->rotation).z;
          uVar42 = (ulonglong)(*(uint *)((int)puVar18 + 0x1b4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1bc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar18 + 0x37) >> 0x1d) & 4;
          dVar58 = ABS((double)*(float *)((int)puVar18 + 0x1b4));
          if ((double)*(float *)((int)puVar18 + 0x1bc) - dVar51 < 0.0) {
            dVar58 = dVar54;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar42 << 2));
          dVar54 = ABS((double)*(float *)(puVar18 + 0x37));
          if ((double)*(float *)((int)puVar18 + 0x1bc) - dVar51 < 0.0) {
            dVar54 = dVar52;
          }
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          dVar52 = dVar51;
          if (dVar51 < dVar58) {
            lVar29 = uVar27 - 0x2c0;
            lVar46 = uVar27 - 0xb0;
            lVar28 = uVar27 - 0xa0;
            lVar39 = 2;
            fVar10 = (float)(dVar54 - dVar58) / (float)(dVar54 + dVar58);
            fVar9 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x22c) = fVar10;
            *(float *)((int)puVar18 + 0x224) = fVar10;
            *(float *)(puVar18 + 0x45) = fVar10;
            *(float *)(puVar18 + 0x44) = fVar10;
            fVar10 = fVar9 * fVar9;
            *(float *)((int)puVar18 + 0x224) = *(float *)((int)puVar18 + 0x224) * fVar9;
            *(float *)(puVar18 + 0x45) = *(float *)(puVar18 + 0x45) * fVar10;
            *(float *)((int)puVar18 + 0x22c) = *(float *)((int)puVar18 + 0x22c) * fVar10 * fVar9;
            do {
              *(float *)((int)lVar29 + 0x220) = *(float *)((int)lVar29 + 0x210) * fVar10 * fVar10;
              iVar35 = (int)lVar46;
              lVar29 = lVar29 + 8;
              lVar46 = lVar46 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar10 * fVar10;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xb0;
            pfVar41 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar10 = *pfVar41;
              fVar9 = pfVar41[1];
              pfVar41 = pfVar41 + 2;
              *(float *)((int)lVar29 + 0x220) = *(float *)((int)lVar29 + 0x220) * fVar10;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar9;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar46 = 2;
            lVar29 = lVar30;
            dVar58 = dVar51;
            do {
              iVar35 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              iVar31 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              dVar58 = (double)((float)(dVar58 + (double)*(float *)(iVar35 + 0x220)) +
                                *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                               *(float *)(iVar31 + 0xc));
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
            dVar52 = (double)((float)(dVar58 + 0.7853981852531433) * fVar8 + fVar16);
          }
          fVar8 = (float)(dVar49 - dVar53);
          fVar16 = (float)(dVar50 - dVar56);
          fVar4 = (float)((double)fVar4 - dVar48);
          fVar8 = SQRT(fVar16 * fVar16 + fVar8 * fVar8);
          *(float *)((int)puVar18 + 0x1ac) = fVar4;
          dVar50 = ABS((double)fVar4);
          dVar49 = ABS((double)fVar8);
          *(float *)(puVar18 + 0x35) = fVar8;
          *(float *)(puVar18 + 0x36) = (float)(dVar49 - dVar50);
          uVar40 = (ulonglong)(*(uint *)(puVar18 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1ac) >> 0x1d) & 4;
          uVar42 = uVar40 << 2;
          dVar48 = ABS((double)*(float *)(puVar18 + 0x35));
          if ((double)*(float *)(puVar18 + 0x36) - dVar51 < 0.0) {
            dVar48 = dVar50;
          }
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar42);
          dVar50 = ABS((double)*(float *)((int)puVar18 + 0x1ac));
          if ((double)*(float *)(puVar18 + 0x36) - dVar51 < 0.0) {
            dVar50 = dVar49;
          }
          fVar8 = *(float *)(((uint)(uVar40 << 2) | 0x735900) + 4);
          if (dVar51 < dVar48) {
            lVar29 = uVar27 - 0x2c0;
            lVar28 = uVar27 - 0xc0;
            lVar46 = uVar27 - 0xd0;
            lVar39 = 2;
            fVar16 = (float)(dVar50 - dVar48) / (float)(dVar50 + dVar48);
            fVar10 = fVar16 * fVar16;
            *(float *)((int)puVar18 + 0x20c) = fVar16;
            *(float *)((int)puVar18 + 0x204) = fVar16;
            *(float *)(puVar18 + 0x41) = fVar16;
            *(float *)(puVar18 + 0x40) = fVar16;
            fVar16 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x204) = *(float *)((int)puVar18 + 0x204) * fVar10;
            *(float *)(puVar18 + 0x41) = *(float *)(puVar18 + 0x41) * fVar16;
            *(float *)((int)puVar18 + 0x20c) = *(float *)((int)puVar18 + 0x20c) * fVar16 * fVar10;
            do {
              *(float *)((int)lVar29 + 0x200) = *(float *)((int)lVar29 + 0x1f0) * fVar16 * fVar16;
              iVar35 = (int)lVar46;
              lVar46 = lVar46 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar16 * fVar16;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xd0;
            uVar42 = ZEXT48(&DAT_007358e0);
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              pfVar41 = (float *)uVar42;
              fVar16 = pfVar41[1];
              uVar42 = uVar42 + 8;
              *(float *)((int)lVar29 + 0x200) = *(float *)((int)lVar29 + 0x200) * *pfVar41;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar16;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar29 = 2;
            do {
              iVar35 = (int)lVar30;
              iVar31 = (int)lVar28;
              lVar30 = lVar30 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar51 = (double)((float)(dVar51 + (double)*(float *)(iVar35 + 0x200)) +
                                *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                               *(float *)(iVar31 + 0xc));
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            dVar51 = (double)((float)(dVar51 + 0.7853981852531433) * fVar4 + fVar8);
          }
          dVar51 = -dVar51;
          dVar50 = 6.2831854820251465;
          dVar49 = 3.1415927410125732;
          dVar48 = (double)MB_DeltAngSpeed
                                     ((double)fVar7,dVar52,(double)(g_FrameTimeSq * 6.2831855),
                                      (double)(g_FrameTimeSq * 3.1415927),
                                      (double)(g_FrameTime * 6.2831855),&DAT_0039b2d0,
                                      uVar42,pfVar43 + 0x16);
          (moby->rotation).z = (float)dVar48;
          dVar48 = (double)MB_DeltAngSpeed
                                     ((double)(moby->rotation).y,dVar51,
                                      (double)(float)((double)g_FrameTimeSq * dVar50),
                                      (double)(float)((double)g_FrameTimeSq * dVar49),
                                      (double)(float)((double)g_FrameTime * dVar50));
          (moby->rotation).y = (float)dVar48;
        }
        else {
          puVar14 = moby->pClass->collision;
          moby->collision = puVar14;
          uVar57 = 0x3fa99999a0000000;
          fVar4 = moby->pClass->gScale;
          fVar7 = DAT_0071f408 * 0.05;
          dVar50 = (double)(moby->pos).x;
          dVar49 = (double)(moby->pos).y;
          dVar48 = (double)(moby->pos).z;
          pvVar15 = moby->pVar;
          moby->collision = puVar14;
          moby->scale = fVar7 * (fVar4 - moby->scale) + moby->scale;
          if (*(int *)((int)pvVar15 + 0x4c) == 0) {
            uVar36 = SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,0,&DAT_00720000,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x4c) = uVar36;
          }
          if (*(int *)((int)pvVar15 + 0x50) == 0) {
            uVar36 = SpawnPart_55(uVar57,0x3f847ae140000000,lVar29,1);
            *(undefined4 *)((int)pvVar15 + 0x50) = uVar36;
          }
          pMVar32 = (MobyInstance *)pfVar43[0xc];
          if (((pMVar32 == (MobyInstance *)0x0) ||
              ((float)(int)(short)pMVar32->oClass != pfVar43[0x12])) ||
             (pMVar32->state == 0xfd || pMVar32->state == 0xfe)) {
            moby->state = '\x02';
            pfVar43[0xc] = 0.0;
            pfVar43[0x12] = -NAN;
          }
          else {
            iVar35 = MB_GetPvarsIfMobyHasThem(pMVar32);
            fVar10 = DAT_0071f408;
            fVar16 = pfVar43[0xc];
            fVar4 = *(float *)((int)fVar16 + 0x18);
            fVar7 = *(float *)((int)fVar16 + 0x10);
            fVar8 = *(float *)((int)fVar16 + 0x14);
            fVar16 = *(float *)((int)fVar16 + 0x1c);
            if (iVar35 != 0) {
              fVar4 = fVar4 + *(float *)(iVar35 + 0x10);
            }
            fVar19 = ((fVar7 - pfVar43[4]) * 3.1 + fVar7) - (moby->pos).x;
            *pfVar43 = fVar19;
            fVar20 = ((fVar8 - pfVar43[5]) * 3.1 + fVar8) - (moby->pos).y;
            pfVar43[1] = fVar20;
            fVar9 = (moby->pos).z;
            pfVar43[3] = fVar16;
            dVar58 = 1.0;
            fVar10 = fVar10 * -0.8 + 1.0;
            fVar19 = fVar19 * fVar10;
            pfVar43[1] = fVar20 * fVar10;
            *pfVar43 = fVar19;
            pfVar43[2] = (((fVar4 - pfVar43[6]) * 3.1 + fVar4) - fVar9) * fVar10;
            (moby->pos).x = (moby->pos).x + fVar19;
            (moby->pos).y = (moby->pos).y + pfVar43[1];
            (moby->pos).z = (moby->pos).z + pfVar43[2];
            pfVar43[4] = fVar7;
            pfVar43[5] = fVar8;
            pfVar43[6] = fVar4;
            pfVar43[7] = fVar16;
            fVar5 = (moby->pos).y;
            *(f32 *)(puVar18 + 0x18) = (moby->pos).x;
            *(f32 *)((int)puVar18 + 0xc4) = fVar5;
            *(f32 *)((int)puVar18 + 0xcc) = (moby->pos).w;
            *(f32 *)(puVar18 + 0x19) = (moby->pos).z;
            iVar35 = CollSphere(0x3fd0000000000000,uVar27 - 0x210,&DAT_0039b2d0,0,lVar29);
            if (iVar35 != 0) {
              if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
                  ((g_CollOutput.pMoby)->state == 0xfd || (g_CollOutput.pMoby)->state == 0xfe)) ||
                 ((g_CollOutput.pMoby != (MobyInstance *)pfVar43[0xc] ||
                  ((g_CollOutput.pMoby)->oClass == RATCHET)))) {
                (moby->pos).x = g_CollOutput.push.x;
                (moby->pos).y = g_CollOutput.push.y;
                (moby->pos).z = g_CollOutput.push.z;
                (moby->pos).w = g_CollOutput.push.w;
              }
              else {
                uVar47 = 0;
                if ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
                  uVar47 = (ushort)(g_CollOutput.pMoby)->pClass->mode_bits;
                }
                SetCollDamIn(dVar58,uVar27 - 0x1b0,lVar29,0x10000);
                pMVar32 = g_CollOutput.pMoby;
                fVar4 = *pfVar43;
                auVar59 = ZEXT416(0xfffffff0);
                dVar52 = (double)(fVar4 * fVar4 + pfVar43[1] * pfVar43[1]);
                uVar57 = 0;
                auVar60 = loadVectorLeftIndexed(0xa6,lVar29);
                auVar59 = vectorShiftRightWord
                                    (auVar60,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60);
                if ((float)SQRT(dVar52) == 0.0) {
                  *(undefined4 *)((int)puVar18 + 0x124) = 0;
                  *(undefined4 *)(puVar18 + 0x24) = 0;
                }
                else {
                  dVar51 = 1.0 / SQRT(dVar52);
                  dVar51 = (double)(float)(-(double)(float)((double)(float)(dVar52 * dVar51) *
                                                            dVar51 - dVar58) *
                                           (double)(float)(dVar51 * 0.5) + dVar51);
                  dVar51 = (double)(float)(-(double)(float)((double)(float)(dVar52 * dVar51) *
                                                            dVar51 - dVar58) *
                                           (double)(float)(dVar51 * 0.5) + dVar51);
                  fVar7 = (float)(-(double)(float)((double)(float)(dVar52 * dVar51) * dVar51 -
                                                  dVar58) * (double)(float)(dVar51 * 0.5) + dVar51);
                  *(float *)(puVar18 + 0x24) = fVar4 * fVar7;
                  *(float *)((int)puVar18 + 0x124) = pfVar43[1] * fVar7;
                }
                auVar60 = vectorSplatHalfWord(auVar59,1);
                *(undefined4 *)(puVar18 + 0x25) = 0x3f800000;
                *(undefined4 *)((int)puVar18 + 300) = 0x45afdf66;
                *(undefined1 *)(puVar18 + 0x27) = 1;
                *(undefined1 *)((int)puVar18 + 0x139) = 2;
                uVar17 = storeVectorElementHalfWordIndexed(auVar60,0x13a,lVar30);
                *(undefined2 *)((int)puVar18 + 0x13a) = uVar17;
                auVar60 = loadVectorLeftIndexed(0x70,0x39b2d0);
                auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar61 = vectorPermute(*(undefined1 (*) [16])(puVar18 + 0x24),_DAT_0039b320,
                                        _DAT_0039b330);
                auVar59 = vectorPermute(auVar59,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                                auVar60 << 0x60,_DAT_0039b350);
                auVar59 = vectorPermute(auVar59,*(undefined1 (*) [16])(puVar18 + 0x26),_DAT_0039b360
                                       );
                *(undefined1 (*) [16])(puVar18 + 8) = auVar61;
                *(undefined4 *)((int)puVar18 + 0x6c) = *(undefined4 *)((int)puVar18 + 0x14c);
                *(undefined4 *)(puVar18 + 0xd) = *(undefined4 *)(puVar18 + 0x29);
                *(undefined4 *)((int)puVar18 + 100) = *(undefined4 *)((int)puVar18 + 0x144);
                *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(puVar18 + 0x28);
                *(undefined1 (*) [16])(puVar18 + 10) = auVar59;
                CollDamageMobyDirect
                          (pMVar32,0x50,puVar18[8],puVar18[9],puVar18[10],puVar18[0xb],puVar18[0xc],
                           puVar18[0xd]);
                if ((uVar47 & 0xff) == 5) {
                  if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
                      ((g_CollOutput.pMoby)->oClass != 0x4d6)) ||
                     (sVar12 = *(short *)((int)pfVar43 + 0x56), sVar12 < 1)) {
                    puVar18[0x12] = 1;
                    puVar18[0x14] = 1;
                    puVar18[0x15] = 1;
                    puVar18[0x16] = 0xffffffffffffffff;
                    puVar18[0x17] = 0;
                    MB_genericExplosion
                              (uVar57,uVar57,0x3fd99999a0000000,0x3fc99999a0000000,
                               0x4010000000000000,dVar58,0x4020000000000000,lVar29,pfVar43,0,
                               &DAT_0039b2d0,0xffffffffffffffff,0,1,1);
                    moby->state = '\x04';
                  }
                  else {
                    iVar35 = FastDoubleToInt((double)*(float *)((int)puVar18 + 0x13c));
                    sVar37 = 1;
                    if (0 < iVar35) {
                      sVar37 = FastDoubleToInt((double)*(float *)((int)puVar18 + 0x13c));
                    }
                    *(short *)((int)pfVar43 + 0x56) = sVar12 - sVar37;
                  }
                }
              }
            }
          }
          dVar58 = (double)(moby->pos).x;
          dVar52 = (double)(moby->pos).y;
          fVar4 = (float)(dVar58 - dVar50);
          fVar7 = (float)(dVar52 - dVar49);
          fVar8 = ABS(fVar4);
          fVar16 = ABS(fVar7);
          *(float *)((int)puVar18 + 0x19c) = fVar4;
          *(float *)(puVar18 + 0x34) = fVar7;
          *(float *)((int)puVar18 + 0x1a4) = fVar8 - fVar16;
          fVar4 = 0.0;
          uVar42 = (ulonglong)(*(uint *)((int)puVar18 + 0x19c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar18 + 0x34) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)((int)puVar18 + 0x19c));
          if (*(float *)((int)puVar18 + 0x1a4) - 0.0 < 0.0) {
            fVar7 = fVar16;
          }
          fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar42 << 2));
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)(puVar18 + 0x34));
          if (*(float *)((int)puVar18 + 0x1a4) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = fVar4;
          if (0.0 < fVar7) {
            lVar29 = uVar27 - 0x2c0;
            lVar28 = uVar27 - 0xe0;
            lVar46 = uVar27 - 0xf0;
            lVar39 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x1ec) = fVar7;
            *(float *)((int)puVar18 + 0x1e4) = fVar7;
            *(float *)(puVar18 + 0x3d) = fVar7;
            *(float *)(puVar18 + 0x3c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar18 + 0x1e4) = *(float *)((int)puVar18 + 0x1e4) * fVar8;
            *(float *)(puVar18 + 0x3d) = *(float *)(puVar18 + 0x3d) * fVar7;
            *(float *)((int)puVar18 + 0x1ec) = *(float *)((int)puVar18 + 0x1ec) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar29 + 0x1e0) = *(float *)((int)lVar29 + 0x1d0) * fVar7 * fVar7;
              iVar35 = (int)lVar46;
              lVar46 = lVar46 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xf0;
            pfVar43 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar7 = *pfVar43;
              fVar8 = pfVar43[1];
              pfVar43 = pfVar43 + 2;
              *(float *)((int)lVar29 + 0x1e0) = *(float *)((int)lVar29 + 0x1e0) * fVar7;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar8;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar46 = 2;
            lVar29 = lVar30;
            fVar7 = fVar4;
            do {
              iVar35 = (int)lVar29;
              iVar31 = (int)lVar28;
              lVar29 = lVar29 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar35 + 0x1e0) + *(float *)(iVar31 + 4) +
                      *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
            fVar8 = (fVar7 + 0.7853982) * fVar10 + fVar16;
          }
          fVar7 = (float)(dVar49 - dVar52);
          fVar16 = (float)(dVar50 - dVar58);
          (moby->rotation).z = fVar8;
          fVar8 = (float)((double)(moby->pos).z - dVar48);
          fVar7 = SQRT(fVar16 * fVar16 + fVar7 * fVar7);
          *(float *)((int)puVar18 + 0x194) = fVar8;
          fVar8 = ABS(fVar8);
          fVar16 = ABS(fVar7);
          *(float *)(puVar18 + 0x32) = fVar7;
          *(float *)(puVar18 + 0x33) = fVar16 - fVar8;
          uVar42 = (ulonglong)(*(uint *)(puVar18 + 0x32) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x33) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x194) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)(puVar18 + 0x32));
          if (*(float *)(puVar18 + 0x33) - 0.0 < 0.0) {
            fVar7 = fVar8;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar42 << 2));
          fVar10 = ABS(*(float *)((int)puVar18 + 0x194));
          if (*(float *)(puVar18 + 0x33) - 0.0 < 0.0) {
            fVar10 = fVar16;
          }
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar29 = uVar27 - 0x2c0;
            lVar46 = uVar27 - 0x110;
            lVar28 = uVar27 - 0x100;
            lVar39 = 2;
            fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
            fVar10 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x1cc) = fVar7;
            *(float *)((int)puVar18 + 0x1c4) = fVar7;
            *(float *)(puVar18 + 0x39) = fVar7;
            *(float *)(puVar18 + 0x38) = fVar7;
            fVar7 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x1c4) = *(float *)((int)puVar18 + 0x1c4) * fVar10;
            *(float *)(puVar18 + 0x39) = *(float *)(puVar18 + 0x39) * fVar7;
            *(float *)((int)puVar18 + 0x1cc) = *(float *)((int)puVar18 + 0x1cc) * fVar7 * fVar10;
            do {
              *(float *)((int)lVar29 + 0x1c0) = *(float *)((int)lVar29 + 0x1b0) * fVar7 * fVar7;
              iVar35 = (int)lVar46;
              lVar29 = lVar29 + 8;
              lVar46 = lVar46 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0x110;
            pfVar43 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar7 = *pfVar43;
              fVar10 = pfVar43[1];
              pfVar43 = pfVar43 + 2;
              *(float *)((int)lVar29 + 0x1c0) = *(float *)((int)lVar29 + 0x1c0) * fVar7;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar10;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar29 = 2;
            do {
              iVar35 = (int)lVar30;
              iVar31 = (int)lVar28;
              lVar30 = lVar30 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar35 + 0x1c0) + *(float *)(iVar31 + 4) +
                      *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar16;
          }
          (moby->rotation).y = -fVar4;
        }
      }
    }
    else if (bVar38 < 5) {
      pMVar32 = (MobyInstance *)pfVar43[0xc];
      if (((pMVar32 == (MobyInstance *)0x0) || ((float)(int)(short)pMVar32->oClass != pfVar43[0x12])
          ) || (pMVar32->state == 0xfd || pMVar32->state == 0xfe)) {
        pfVar43[0xc] = 0.0;
      }
      else {
        iVar35 = MB_GetPvarsIfMobyHasThem(pMVar32);
        fVar16 = pfVar43[0xc];
        fVar4 = *(float *)((int)fVar16 + 0x18);
        fVar7 = *(float *)((int)fVar16 + 0x14);
        fVar8 = *(float *)((int)fVar16 + 0x1c);
        if (iVar35 != 0) {
          fVar4 = fVar4 + *(float *)(iVar35 + 0x10);
        }
        fVar10 = *(float *)((int)fVar16 + 0x10) - (moby->pos).x;
        *pfVar43 = fVar10;
        fVar7 = fVar7 - (moby->pos).y;
        pfVar43[1] = fVar7;
        fVar16 = (moby->pos).z;
        pfVar43[3] = fVar8;
        fVar9 = DAT_0071f408;
        fVar8 = DAT_0071f408 * -0.8 + 1.0;
        fVar7 = fVar7 * fVar8;
        fVar10 = fVar10 * fVar8;
        fVar8 = (fVar4 - fVar16) * fVar8;
        *pfVar43 = fVar10;
        pfVar43[1] = fVar7;
        pfVar43[2] = fVar8;
        fVar4 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar7 * fVar7);
        if (fVar9 * 0.9 < fVar4) {
          fVar4 = (fVar9 * 0.9) / fVar4;
          fVar10 = fVar10 * fVar4;
          *pfVar43 = fVar10;
          pfVar43[1] = fVar7 * fVar4;
          pfVar43[2] = fVar8 * fVar4;
        }
        (moby->pos).x = (moby->pos).x + fVar10;
        (moby->pos).y = (moby->pos).y + pfVar43[1];
        (moby->pos).z = (moby->pos).z + pfVar43[2];
      }
      bVar38 = moby->alpha - 4;
      moby->alpha = bVar38;
      if (bVar38 < 6) {
        moby->state = '\x05';
      }
    }
    else if (bVar38 < 6) {
      DAT_0096bcd6 = DAT_0096bcd6 - 1;
      *(undefined4 *)((int)&DAT_0096bd00 + (int)((longlong)*(short *)(pfVar43 + 0x15) << 2)) = 0;
      DeleteMoby(moby);
      return;
    }
    MB_RegisterLameShadow(0.17,moby);
  }
                    /* WARNING: Read-only address (ram,0x0039b320) is written */
                    /* WARNING: Read-only address (ram,0x0039b330) is written */
                    /* WARNING: Read-only address (ram,0x0039b350) is written */
                    /* WARNING: Read-only address (ram,0x0039b360) is written */
  return;
}


// 0x039cdcc (0x14 bytes)
void M479_0039cdcc(void)

{
  DAT_00842fec = 0x10000;
  return;
}


// 0x039cdf0 (0x3d8 bytes)
// inlined: FastAtan2 @0x39cf94
double M48_0039cdf0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  double dVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xd0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x1c] = in_LR;
  puVar7[0x19] = in_f31;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  puVar7[0x16] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  if (param_3 == 0) {
    fVar2 = *param_2 - *(float *)(param_1 + 0x10);
    fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
    fVar1 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)(puVar7 + 0x10) = fVar2;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar1 - fVar5;
    dVar20 = 0.0;
    uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar7 + 0x10));
    if (*(float *)(puVar7 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar3 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x84));
    if (*(float *)(puVar7 + 0x11) - 0.0 < 0.0) {
      fVar8 = fVar1;
    }
    dVar19 = dVar20;
    if (0.0 < fVar2) {
      lVar16 = uVar11 - 0xc0;
      lVar15 = uVar11 - 0x44;
      lVar14 = uVar11 - 0x34;
      lVar18 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x13) = fVar2;
      *(float *)(puVar7 + 0x12) = fVar2;
      *(float *)((int)puVar7 + 0x94) = fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar2;
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar1;
      *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar2;
      *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) * fVar2 * fVar1;
      do {
        *(float *)((int)lVar16 + 0x8c) = *(float *)((int)lVar16 + 0x7c) * fVar2 * fVar2;
        iVar9 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar11 - 0x44;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar13;
      do {
        fVar2 = *pfVar17;
        fVar1 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x8c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar1;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
    }
    OrganicDeltAng
              ((float)dVar19,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x39cde0,
               (float *)(iVar6 + 0x134));
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar19 == dVar20) {
      uVar4 = *(undefined4 *)(param_1 + 0xcc);
      dVar19 = dVar20;
      dVar21 = dVar20;
    }
    else {
      fVar1 = (float)((double)(DAT_00843028 * g_FrameTime) / dVar19);
      uVar4 = *(undefined4 *)(param_1 + 0xcc);
      dVar21 = (double)(fVar3 * fVar1);
      dVar19 = (double)(fVar5 * fVar1);
      dVar20 = (double)(fVar2 * fVar1);
    }
    *(undefined4 *)((int)puVar7 + 0x7c) = uVar4;
  }
  else {
    fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
    fVar5 = *param_2 - *(float *)(param_1 + 0x10);
    fVar1 = param_2[2] - *(float *)(param_1 + 0x18);
    fVar8 = DAT_0084302c * g_FrameTime;
    *(float *)(puVar7 + 0xe) = fVar5;
    *(float *)((int)puVar7 + 0x74) = fVar3;
    fVar2 = param_2[3];
    *(float *)(puVar7 + 0xf) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar2;
    dVar19 = 0.0;
    fVar2 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3);
    fVar8 = fVar8 / fVar2;
    dVar21 = dVar19;
    if (0.0 - fVar2 < 0.0) {
      dVar21 = (double)(fVar5 * fVar8);
    }
    dVar20 = dVar19;
    if (0.0 - fVar2 < 0.0) {
      dVar20 = (double)(fVar3 * fVar8);
    }
    if (0.0 - fVar2 < 0.0) {
      dVar19 = (double)(fVar1 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar21 = (double)(fVar5 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar20 = (double)(fVar3 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar19 = (double)(fVar1 * fVar8);
    }
  }
  *(float *)(puVar7 + 0xe) = (float)dVar21;
  *(float *)((int)puVar7 + 0x74) = (float)dVar20;
  *(float *)(puVar7 + 0xf) = (float)dVar19;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,0,param_1,uVar11 - 0x60);
  fVar2 = *(float *)(param_1 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_1 + 0x10) - *param_2;
  fVar5 = *(float *)(param_1 + 0x18) - param_2[2];
  return (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
}



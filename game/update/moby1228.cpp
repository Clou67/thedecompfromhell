// game/update/moby1228.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x210cf0-0x211390
#include "game/update/moby1228.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0210cf0 (0xf4 bytes)
void M1228_00210cf0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xd8);
  iVar5 = *(int *)(param_1 + 0x78);
  fVar4 = 0.0;
  iVar6 = *(int *)(iVar5 + 0x14);
  fVar10 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar7 = *(float *)(iVar5 + 0x18) / fVar10;
  fVar9 = fVar4;
  if (0.0 - fVar10 < 0.0) {
    fVar9 = fVar2 * fVar7;
  }
  fVar8 = fVar4;
  if (0.0 - fVar10 < 0.0) {
    fVar8 = fVar1 * fVar7;
  }
  if (0.0 - fVar10 < 0.0) {
    fVar4 = fVar3 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar9 = fVar2 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar8 = fVar1 * fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = fVar3 * fVar7;
  }
  *(float *)(param_1 + 0x10) = *(float *)(iVar5 + 0x20) + fVar9;
  *(float *)(param_1 + 0x14) = *(float *)(iVar5 + 0x24) + fVar8;
  *(float *)(param_1 + 0x18) = *(float *)(iVar5 + 0x28) + fVar4;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + 0x2c);
  *(float *)(iVar6 + 0x10) = *(float *)(iVar5 + 0x20) - fVar9;
  *(float *)(iVar6 + 0x14) = *(float *)(iVar5 + 0x24) - fVar8;
  *(float *)(iVar6 + 0x18) = *(float *)(iVar5 + 0x28) - fVar4;
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar5 + 0x2c);
  UpdateMobyTransform(*(MobyInstance **)(iVar5 + 0x14));
  return;
}


// 0x0210de4 (0x104 bytes)
undefined8 M1228_00210de4(int param_1)

{
  int *piVar1;
  MobyInstance *pMVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1[4] == -1) {
    uVar3 = 0;
  }
  else {
    iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]);
    if (iVar4 == 0) {
      iVar4 = 0;
      piVar6 = piVar1;
      do {
        if (*piVar6 != -1) {
          pMVar2 = g_MobyInstance + *piVar6;
          if (((pMVar2 == (MobyInstance *)0x0) || (pMVar2->state == 0xfe)) ||
             (pMVar2->state == 0xfd)) {
            *piVar6 = -1;
          }
          else {
            iVar5 = MB_IsPntInCuboid((Vec4 *)&pMVar2->pos,(longlong)piVar1[4]);
            if (iVar5 != 0) {
              return 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < 3);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


// 0x0210ef8 (0x498 bytes)
/* Moby 1228 */

void UpdateMoby_1228(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (uVar1 == '\x05') {
                    /* WARNING: Load size is inaccurate */
    piVar2[6] = (int)(*g_MobyInstance[piVar2[3]].pVar * 4.0);
    M1228_00210cf0(moby);
  }
  else if (uVar1 == '\x04') {
    fVar8 = OrganicDelt
                      (0.0,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,g_FrameTime * 10.0,
                       (float *)(piVar2 + 6),0x720000,(float *)(piVar2 + 7));
    M1228_00210cf0((double)fVar8,moby);
    if (piVar2[6] < 1) {
      moby->state = '\x01';
    }
    else {
      piVar2 = (int *)moby->pVar;
      if (piVar2[4] != -1) {
        iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
        if (iVar5 == 0) {
          iVar5 = 0;
          piVar7 = piVar2;
          do {
            if (*piVar7 != -1) {
              pMVar4 = g_MobyInstance + *piVar7;
              if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
                 (pMVar4->state == 0xfd)) {
                *piVar7 = -1;
              }
              else {
                iVar6 = MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
                if (iVar6 != 0) goto LAB_00211328;
              }
            }
            iVar5 = iVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar5 < 3);
        }
        else {
LAB_00211328:
          moby->state = '\x02';
        }
      }
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar2[4] != -1) {
      iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
      if (iVar5 != 0) {
        return;
      }
      iVar5 = 0;
      piVar7 = piVar2;
      do {
        if (*piVar7 != -1) {
          pMVar4 = g_MobyInstance + *piVar7;
          if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
             (pMVar4->state == 0xfd)) {
            *piVar7 = -1;
          }
          else {
            iVar6 = MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
            if (iVar6 != 0) {
              return;
            }
          }
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < 3);
    }
    moby->state = '\x04';
  }
  else if (uVar1 == '\x02') {
    fVar8 = OrganicDelt
                      (4.0,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,g_FrameTime * 10.0,
                       (float *)(piVar2 + 6),0x720000,(float *)(piVar2 + 7));
    M1228_00210cf0((double)fVar8,moby);
    uVar3 = piVar2[6] >> 0x1f;
    if (0x407fffff < (int)((uVar3 >> 1 ^ piVar2[6]) - uVar3)) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if (piVar2[4] != -1) {
      iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[4]);
      if (iVar5 == 0) {
        iVar5 = 0;
        piVar7 = piVar2;
        do {
          if (*piVar7 != -1) {
            pMVar4 = g_MobyInstance + *piVar7;
            if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) ||
               (pMVar4->state == 0xfd)) {
              *piVar7 = -1;
            }
            else {
              iVar6 = MB_IsPntInCuboid((Vec4 *)&pMVar4->pos,(longlong)piVar2[4]);
              if (iVar6 != 0) goto LAB_002110ec;
            }
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar5 < 3);
      }
      else {
LAB_002110ec:
        moby->state = '\x02';
      }
    }
  }
  else if (uVar1 == '\0') {
    piVar2[8] = (int)(moby->pos).x;
    piVar2[9] = (int)(moby->pos).y;
    piVar2[10] = (int)(moby->pos).z;
    piVar2[0xb] = (int)(moby->pos).w;
    pMVar4 = CreateMoby(0x4cc);
    piVar2[5] = (int)pMVar4;
    pMVar4->drawDistance = 0x40;
    *(undefined1 *)(piVar2[5] + 0x31) = 1;
    *(undefined8 *)(piVar2[5] + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(piVar2[5] + 0x34) = moby->modeBits | (MIRROR|NO_UPDATE);
    iVar5 = piVar2[5];
    *(f32 *)(iVar5 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar5 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar5 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar5 + 0x1c) = (moby->pos).w;
    iVar5 = piVar2[5];
    *(f32 *)(iVar5 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar5 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar5 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar5 + 0x4c) = (moby->rotation).w;
    UpdateMobyTransform((MobyInstance *)piVar2[5]);
    moby->state = ((byte)(ZERO_MASK((-1 - piVar2[3]))) & 0xfc) + 5;
  }
  return;
}



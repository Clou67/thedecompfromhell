// game/update/moby760.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x44f348-0x44fe94
#include "game/update/moby760.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby761.h"
#include "game/update/moby809.h"
#include "idol/fastfunc.h"

// 0x044f348 (0x14 bytes)
void M760_0044f348(void)

{
  DAT_00871d50 = 0x10000;
  return;
}


// 0x044f378 (0x144 bytes)
void M760_0044f378(int param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  iVar2 = *(int *)(param_1 + 0x78);
  uVar6 = 0;
  uVar5 = 0x3ff0000000000000;
  dVar4 = (double)MB_randRangeSigned(0,0x3ff0000000000000);
  iVar3 = (int)(param_2 << 4);
  *(float *)(&DAT_010cde30 + iVar3) = (float)dVar4;
  dVar4 = (double)MB_randRangeSigned(uVar6,uVar5);
  *(float *)(&DAT_010cde34 + iVar3) = (float)dVar4;
  dVar4 = (double)MB_randRangeSigned(uVar6,uVar5);
  *(float *)(&DAT_010cde38 + iVar3) = (float)dVar4;
  fVar1 = *(float *)(iVar2 + 0x44);
  dVar7 = (double)*(float *)(iVar2 + 0x4c);
  dVar4 = (double)MB_randRangeFloat(fVar1,fVar1 + 2.0);
  iVar2 = (int)(param_2 << 2);
  *(float *)(&DAT_010d2930 + iVar2) = (float)dVar4;
  dVar4 = (double)MB_randRangeFloat((float)dVar7,(float)(dVar7 + 4.0));
  *(float *)(&DAT_010d3bf0 + iVar2) = (float)dVar4;
  *(undefined4 *)(&DAT_010d5810 + iVar2) = 0;
  dVar4 = (double)MB_randRangeFloat(0.003,0.005);
  *(float *)(&DAT_010d6ad0 + iVar2) = (float)dVar4;
  (&DAT_010d5360)[(int)param_2] = 1;
  return;
}


// 0x044f4c8 (0x178 bytes)
void M760_0044f4c8(int param_1,longlong param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  psVar2 = *(short **)(param_1 + 0x78);
  uVar8 = 0;
  uVar7 = 0x3ff0000000000000;
  dVar6 = (double)MB_randRangeSigned(0,0x3ff0000000000000);
  iVar3 = (int)(param_2 << 4);
  *(float *)(&DAT_010cde30 + iVar3) = (float)dVar6;
  dVar6 = (double)MB_randRangeSigned(uVar8,uVar7);
  *(float *)(&DAT_010cde34 + iVar3) = (float)dVar6;
  dVar6 = (double)MB_randRangeSigned(uVar8,uVar7);
  *(float *)(&DAT_010cde38 + iVar3) = (float)dVar6;
  dVar6 = (double)MB_randRangeFloat(*(float *)(psVar2 + 8),*(float *)(psVar2 + 10));
  iVar3 = (int)(param_2 << 2);
  *(float *)(&DAT_010d2930 + iVar3) = (float)dVar6;
  dVar6 = (double)MB_randRangeFloat(*(float *)(psVar2 + 0xc),*(float *)(psVar2 + 0xe));
  *(float *)(&DAT_010d3bf0 + iVar3) = (float)dVar6;
  *(undefined4 *)(&DAT_010d5810 + iVar3) = 0;
  dVar6 = (double)MB_randRangeFloat(*(float *)(psVar2 + 4),*(float *)(psVar2 + 6));
  iVar4 = (int)(param_2 << 1);
  *(short *)(&DAT_010d7d90 + iVar4) = (short)DAT_010d99b4;
  *(undefined2 *)(&DAT_010d86f0 + iVar4) = 0;
  sVar1 = *psVar2;
  sVar5 = (short)DAT_010d99b0;
  *(float *)(&DAT_010d6ad0 + iVar3) = (float)dVar6;
  *(short *)(&DAT_010d9050 + iVar4) = ((short)param_2 - sVar1) * sVar5 + sVar5;
  (&DAT_010d5360)[(int)param_2] = 0;
  return;
}


// 0x044f670 (0x824 bytes)
/* Moby 760 */

void UpdateMoby_760(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short *psVar4;
  short *psVar5;
  void *pvVar6;
  Cuboid *pCVar7;
  float fVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar15;
  undefined1 uVar16;
  int iVar12;
  byte bVar17;
  int iVar13;
  int iVar14;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  GPiece<32> local_100;
  GPiece<32> local_e0;
  
  psVar4 = (short *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    if (*(int *)(psVar4 + 2) == -1) {
      DeleteMoby(moby);
    }
    else {
      pCVar7 = Cuboids + *(int *)(psVar4 + 2);
      fVar1 = (pCVar7->matrix).v1.y;
      fVar2 = (pCVar7->matrix).v1.x;
      fVar3 = (pCVar7->matrix).v1.z;
      fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      *(float *)(psVar4 + 0x24) = fVar8;
      fVar1 = (pCVar7->matrix).v0.y;
      fVar2 = (pCVar7->matrix).v0.x;
      fVar3 = (pCVar7->matrix).v0.z;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar8 < fVar1) {
        *(float *)(psVar4 + 0x24) = fVar1;
        fVar8 = fVar1;
      }
      fVar1 = 3.0;
      if (psVar4[0x20] != 0) {
        fVar1 = fVar8;
      }
      *(float *)(psVar4 + 0x22) = fVar1;
      fVar1 = (pCVar7->matrix).v2.y;
      fVar2 = (pCVar7->matrix).v2.x;
      fVar3 = (pCVar7->matrix).v2.z;
      *(float *)(psVar4 + 0x28) = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.5;
      sVar15 = FUN_0046c58c((longlong)psVar4[1] + (longlong)psVar4[0x20]);
      lVar19 = (longlong)sVar15;
      *psVar4 = sVar15;
      lVar18 = lVar19 + psVar4[1];
      iVar12 = (int)lVar18;
      if (sVar15 < iVar12) {
        uVar28 = 0x3ff0000000000000;
        uVar27 = 0;
        do {
          uVar16 = MB_randInt(2);
          iVar14 = (int)(lVar19 << 4);
          iVar13 = (int)lVar19;
          (&DAT_010d4eb0)[iVar13] = uVar16;
          psVar5 = (short *)moby->pVar;
          *(undefined4 *)(&DAT_010cde3c + iVar14) = 0x3f800000;
          dVar20 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde30 + iVar14) = (float)dVar20;
          dVar20 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde34 + iVar14) = (float)dVar20;
          dVar20 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde38 + iVar14) = (float)dVar20;
          dVar20 = (double)MB_randRangeFloat
                                     (*(float *)(psVar5 + 8),*(float *)(psVar5 + 10));
          iVar14 = (int)(lVar19 << 2);
          *(float *)(&DAT_010d2930 + iVar14) = (float)dVar20;
          dVar20 = (double)MB_randRangeFloat
                                     (*(float *)(psVar5 + 0xc),*(float *)(psVar5 + 0xe));
          *(float *)(&DAT_010d3bf0 + iVar14) = (float)dVar20;
          *(undefined4 *)(&DAT_010d5810 + iVar14) = 0;
          dVar20 = (double)MB_randRangeFloat
                                     (*(float *)(psVar5 + 4),*(float *)(psVar5 + 6));
          *(float *)(&DAT_010d6ad0 + iVar14) = (float)dVar20;
          uVar11 = DAT_010d99b0;
          iVar14 = (int)(lVar19 << 1);
          *(short *)(&DAT_010d7d90 + iVar14) = (short)DAT_010d99b4;
          *(undefined2 *)(&DAT_010d86f0 + iVar14) = 0;
          sVar15 = *psVar5;
          (&DAT_010d5360)[iVar13] = 0;
          sVar9 = (short)lVar19;
          *(undefined2 *)(&DAT_010d7d90 + iVar14) = 0;
          lVar19 = (longlong)(iVar13 + 1);
          *(short *)(&DAT_010d9050 + iVar14) = (sVar9 - sVar15) * (short)uVar11 + (short)uVar11;
        } while (iVar13 + 1 < iVar12);
      }
      sVar15 = psVar4[0x20];
      if (iVar12 < iVar12 + sVar15) {
        uVar28 = 0x3ff0000000000000;
        uVar27 = 0;
        dVar26 = 2.0;
        dVar25 = 4.0;
        dVar24 = 0.003000000026077032;
        dVar20 = 0.004999999888241291;
        do {
          uVar16 = MB_randInt(2);
          iVar14 = (int)(lVar18 << 4);
          iVar13 = (int)lVar18;
          (&DAT_010d4eb0)[iVar13] = uVar16;
          pvVar6 = moby->pVar;
          *(undefined4 *)(&DAT_010cde3c + iVar14) = 0x3f800000;
          dVar21 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde30 + iVar14) = (float)dVar21;
          dVar21 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde34 + iVar14) = (float)dVar21;
          dVar21 = (double)MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde38 + iVar14) = (float)dVar21;
          fVar1 = *(float *)((int)pvVar6 + 0x44);
          dVar23 = (double)*(float *)((int)pvVar6 + 0x4c);
          dVar21 = (double)MB_randRangeFloat(fVar1,(float)((double)fVar1 + dVar26));
          iVar14 = (int)(lVar18 << 2);
          *(float *)(&DAT_010d2930 + iVar14) = (float)dVar21;
          dVar21 = (double)MB_randRangeFloat((float)dVar23,(float)(dVar23 + dVar25));
          *(float *)(&DAT_010d3bf0 + iVar14) = (float)dVar21;
          *(undefined4 *)(&DAT_010d5810 + iVar14) = 0;
          dVar21 = (double)MB_randRangeFloat((float)dVar24,(float)dVar20);
          *(float *)(&DAT_010d6ad0 + iVar14) = (float)dVar21;
          (&DAT_010d5360)[iVar13] = 1;
          lVar18 = (longlong)(iVar13 + 1);
        } while (iVar13 + 1 < iVar12 + sVar15);
      }
      Cuboids[*(int *)(psVar4 + 2)].pos.w = 1.0;
      *(uint *)(psVar4 + 0x1c) =
           (uint)*(byte *)(psVar4 + 0x1f) << 0x10 | (uint)*(byte *)((int)psVar4 + 0x3d) << 8 |
           (uint)*(byte *)(psVar4 + 0x1e);
    }
  }
  else if ((moby->state < 2) &&
          (iVar12 = FastCheckBsphereInView((double)DAT_008720d4,local_100), -1 < iVar12))
  {
    if ((psVar4[0x21] != 0) &&
       ((fVar1 = GameCamera.posY - (moby->pos).y, fVar2 = GameCamera.posX - (moby->pos).x,
        SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 128.0 && (iVar12 = 0, 0 < DAT_008720b4)))) {
      uVar28 = 0;
      uVar27 = 0x3ff0000000000000;
      dVar24 = 0.5;
      dVar20 = 0.25;
      do {
        MB_randRangeSigned(uVar28,uVar27);
        MB_randRangeSigned(uVar28,uVar27);
        MB_randRangeSigned(uVar28,(double)(float)((double)g_FrameTime * dVar20))
        ;
        MB_randRangeSigned(uVar28,(double)(float)((double)g_FrameTime * dVar20))
        ;
        uVar22 = MB_randRangeFloat(*(float *)(psVar4 + 0x12),*(float *)(psVar4 + 0x14));
        bVar17 = MB_randRange(psVar4[0x16],psVar4[0x17]);
        uVar10 = (uint)PTR_FUN_008720bc >> 0x18;
        MB_randRange(DAT_010ccec0,DAT_008720b8);
        iVar13 = SpawnPart_23
                           ((double)DAT_008720ac,uVar27,(double)DAT_008720b0,uVar22,local_e0);
        if (iVar13 != 0) {
          iVar14 = MB_randRange
                             (*(undefined4 *)(psVar4 + 0x18),*(undefined4 *)(psVar4 + 0x1a));
          iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar24));
          *(undefined4 *)(iVar13 + 0x24) = 3;
          *(short *)(iVar13 + 10) = (short)iVar14;
          *(byte *)(iVar13 + 0x2a) = bVar17 | (byte)uVar10;
          *(char *)(iVar13 + 0x2b) = (char)iVar14;
          iVar14 = MB_randInt(2);
          if (iVar14 != 0) {
            *(undefined1 *)(iVar13 + 3) = 0x44;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_008720b4);
    }
    RegisterPostDraw(&PTR_M761_0044fea8_0070e840,moby);
  }
  return;
}



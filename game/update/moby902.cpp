// game/update/moby902.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4a56cc-0x4a655c
// shared update function UpdateMoby_a_lot_2; registered for oClasses 902, 941, 942, 943, 944, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977
#include "game/update/moby902.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x04a56cc (0x14 bytes)
void M977_004a56cc(void)

{
  DAT_008cc20c = 0x10000;
  return;
}


// 0x04a56e8 (0x1a0 bytes)
void M977_004a56e8(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_008cc280;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_008cc284;
  (&DAT_008cc28c)[iVar5] = 0xff;
  (&DAT_008cc28e)[iVar5] = 0xff;
  (&DAT_008cc28d)[iVar5] = 0xff;
  (&DAT_008cc28f)[iVar5] = 0xff;
  (&DAT_008cc290)[iVar5] = 0xff;
  (&DAT_008cc291)[iVar5] = 0xff;
  (&DAT_008cc292)[iVar5] = 0xff;
  (&DAT_008cc293)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_008cc280)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_008cc284)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_008cc290)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_008cc292)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_008cc291)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_008cc293)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_008cc28d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_008cc28f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_008cc28c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_008cc28e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x24);
  return;
}


// shared update function, registered for oClasses 902, 941, 942, 943, 944, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977
// 0x04a58e8 (0xc30 bytes)
// inlined: FastAtan2 @0x4a5ac8
// strings: 0096c165: 'None'

/* Moby 902
   Moby 941
   Moby 942
   Moby 943
   Moby 944
   Moby 948
   Moby 949
   Moby 950
   Moby 951
   Moby 952
   Moby 953
   Moby 954
   Moby 955
   Moby 956
   Moby 957
   Moby 958
   Moby 959
   Moby 960
   Moby 961
   Moby 962
   Moby 963
   Moby 964
   Moby 965
   Moby 966
   Moby 967
   Moby 968
   Moby 969
   Moby 970
   Moby 971
   Moby 972
   Moby 973
   Moby 974
   Moby 975
   Moby 976
   Moby 977 */

void UpdateMoby_902(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  f32 fVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  undefined2 uVar22;
  longlong lVar23;
  ulonglong unaff_r24;
  int iVar24;
  ulonglong unaff_r25;
  BSphere *bounds;
  WaterTile *pWVar25;
  ulonglong unaff_r26;
  WaterTile *tile;
  ulonglong unaff_r27;
  int iVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar27;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double in_f5;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  undefined8 uVar33;
  ulonglong in_f29;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  float fVar40;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x100;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar16;
  puVar12[0x22] = in_LR;
  puVar12[0x1b] = in_f27;
  puVar12[0x1c] = in_f28;
  puVar12[0x1d] = in_f29;
  puVar12[0x1e] = in_f30;
  puVar12[0x1f] = in_f31;
  puVar12[0x19] = unaff_r30;
  puVar12[0x1a] = unaff_r31;
  pfVar6 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar6);
  puVar12[0x18] = unaff_r29;
  puVar12[0x17] = unaff_r28;
  puVar12[0x16] = unaff_r27;
  puVar12[0x15] = unaff_r26;
  puVar12[0x14] = unaff_r25;
  puVar12[0x13] = unaff_r24;
  if (pfVar6 != (float *)0x0) {
    if (DAT_010e4780 != 0) {
      UnlockableItems.hydroPack = '\0';
      CHAR_ARRAY_0096c165[4] = '\0';
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      fVar7 = (moby->pos).z;
      uVar9 = (int)*pfVar6 >> 0x1f;
      uVar10 = (int)fVar7 >> 0x1f;
      if ((int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9) < (int)((uVar10 >> 1 ^ (uint)fVar7) - uVar10))
      {
        *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) = 0;
        DeleteMoby(moby);
        return;
      }
    }
    else if (uVar1 == '\x06') {
      fVar40 = g_FrameTime * 0.42 + (moby->pos).z;
      (moby->pos).z = fVar40;
      if (54.0 <= fVar40) {
        moby->state = '\a';
      }
    }
    else if (uVar1 == '\x05') {
      (moby->pos).z = g_FrameTime * 0.32 + (moby->pos).z;
      iVar24 = FastDecTimerS32(uVar29 + 0x18);
      if (iVar24 != 0) {
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      iVar24 = FastDecTimerS32(uVar29 + 0x18);
      if (iVar24 != 0) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(0x4c,0x4a5888);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar11;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      if ((-1 < (int)pfVar6[4]) &&
         (iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[4]), iVar24 != 0
         )) {
        pfVar6[7] = 0.0;
        MB_SetStateByGroup(moby->group,4);
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->setByGroup & 4U) == 0) {
        iVar24 = MB_IsFirstMobyInGroup(moby,(uint)(byte)moby->group,'\x01','\0');
        if ((iVar24 == 0) || (moby->setByGroup == '\x01')) {
          if (moby->setByGroup == '\x01') {
            Delt(pfVar6[1],g_FrameTime * 4.0,&(moby->pos).z);
          }
        }
        else {
          fVar40 = Delt(pfVar6[1],g_FrameTime * 4.0,&(moby->pos).z);
          MB_SetGroupField((double)fVar40,moby->group,1);
        }
      }
      else {
        MB_SetStateByGroup(moby->group,1);
      }
      iVar24 = MB_randInt(200);
      if (iVar24 == 0) {
        dVar32 = -4.0;
        dVar36 = 4.0;
        dVar35 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar31 = (double)(float)((double)(float)(&DAT_008cc280)[(int)pfVar6[5] * 0x468] + dVar35);
        dVar35 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
        WaterTile_PutDrop
                  ((float)dVar31,
                   (float)((double)(float)(&DAT_008cc284)[(int)pfVar6[5] * 0x468] + dVar35),1.0,
                   -0.05,(WaterTile *)(&DAT_008cc280 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->setByGroup & 8U) == 0) {
        iVar24 = MB_IsFirstMobyInGroup(moby,(uint)(byte)moby->group,'\x01','\0');
        if ((iVar24 == 0) || (moby->setByGroup == '\x02')) {
          if (moby->setByGroup == '\x02') {
            Delt(*pfVar6,g_FrameTime * 4.0,&(moby->pos).z);
          }
        }
        else {
          fVar40 = Delt(*pfVar6,g_FrameTime * 4.0,&(moby->pos).z);
          MB_SetGroupField((double)fVar40,moby->group,2);
        }
      }
      else {
        MB_SetStateByGroup(moby->group,2);
      }
      iVar24 = MB_randInt(200);
      if (iVar24 == 0) {
        dVar32 = -4.0;
        dVar36 = 4.0;
        dVar35 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar31 = (double)(float)((double)(float)(&DAT_008cc280)[(int)pfVar6[5] * 0x468] + dVar35);
        dVar35 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
        WaterTile_PutDrop
                  ((float)dVar31,
                   (float)((double)(float)(&DAT_008cc284)[(int)pfVar6[5] * 0x468] + dVar35),1.0,
                   -0.05,(WaterTile *)(&DAT_008cc280 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\0') {
      fVar40 = pfVar6[5];
      moby->modeBits = moby->modeBits | (NO_DRAW|DISABLED);
      if (fVar40 == 0.0) {
        pWVar25 = (WaterTile *)&DAT_008cc280;
        WaterTile_InitAll((WaterTile *)&DAT_008cc280,0x24);
        WaterWave_ScaleTable(1.0);
        fVar5 = DirectionalLights[0].direction1.x;
        fVar3 = ABS(DirectionalLights[0].direction1.x);
        fVar4 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        uVar9 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar12 + 0xe) = fVar3 - fVar4;
        fVar40 = 0.0;
        uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar13 = fVar3;
        if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar13) {
          lVar18 = uVar16 - 0xf0;
          lVar20 = uVar16 - 0x8c;
          lVar23 = uVar16 - 0x7c;
          lVar30 = 2;
          fVar3 = (fVar4 - fVar13) / (fVar4 + fVar13);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x10) = fVar3;
          *(float *)(puVar12 + 0xf) = fVar3;
          *(float *)((int)puVar12 + 0x7c) = fVar3;
          *(float *)((int)puVar12 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) * fVar4;
          *(float *)((int)puVar12 + 0x7c) = *(float *)((int)puVar12 + 0x7c) * fVar3;
          *(float *)(puVar12 + 0x10) = *(float *)(puVar12 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
            iVar24 = (int)lVar20;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar23 = uVar16 - 0x8c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar4 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar18 = 2;
          do {
            iVar24 = (int)lVar19;
            iVar27 = (int)lVar23;
            lVar19 = lVar19 + 0x10;
            lVar23 = lVar23 + 0x10;
            fVar40 = fVar40 + *(float *)(iVar24 + 0x74) + *(float *)(iVar27 + 4) +
                     *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar40 = (fVar40 + 0.7853982) * fVar5 + fVar2;
        }
        fVar5 = fVar40 + 1.5707963;
        iVar24 = 0;
        bounds = (BSphere *)&DAT_010e4540;
        fVar3 = 3.1415925 - fVar40;
        if (fVar40 - (3.1415925 - fVar40) < 0.0) {
          fVar3 = fVar40;
        }
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar13 = -3.1415925 - fVar40;
        if ((-3.1415925 - fVar40) - fVar3 < 0.0) {
          fVar13 = fVar3;
        }
        fVar40 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar40 = fVar4;
        }
        fVar5 = fVar13 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x28;
        WaterTileConsts.tex1 = 0x29;
        fVar3 = fVar40 * fVar40;
        WaterTileConsts.alpha0 = 0x40;
        WaterTileConsts.alpha1 = 0x40;
        fVar14 = fVar5 * fVar5 * fVar13;
        fVar4 = fVar3 * fVar3 * fVar40;
        fVar15 = fVar5 * fVar14;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar13 * -0.16666657 + fVar13)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar40 * -0.16666657 + fVar40) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_008cc280;
        WaterTileBoxes = (WaterTileBox *)&DAT_010e4540;
        WaterTileCnt = 0x24;
        WaterFogNearDist = 0;
        iVar27 = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
        tile = pWVar25;
        do {
          WaterTile_CalcGridBSphere(tile,bounds);
          iVar27 = iVar27 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) =
               *(undefined2 *)(&DAT_008f3d00 + (int)pfVar6[5] * 2);
        } while (iVar27 < 0x24);
        iVar28 = 0;
        iVar27 = 0;
        dVar36 = -6.0;
        dVar35 = 6.0;
        uVar34 = 0x4000000000000000;
        uVar33 = 0x3fc99999a0000000;
        do {
          iVar26 = 0;
          do {
            dVar31 = (double)MB_randRangeFloat((float)dVar36,(float)dVar35);
            dVar32 = (double)(float)((double)*(float *)((int)&DAT_008cc280 + iVar27) + dVar31);
            dVar31 = (double)MB_randRangeFloat((float)dVar36,(float)dVar35);
            WaterTile_PutDrop_Thunk
                      (dVar32,(double)(float)((double)(pWVar25->tilePos).y + dVar31),uVar34,uVar33,
                       &DAT_008cc280,0x24);
            iVar26 = iVar26 + 1;
          } while (iVar26 < 2);
          iVar28 = iVar28 + 1;
          pWVar25 = (WaterTile *)&pWVar25[1].ovlTex;
          iVar27 = iVar27 + 0x11a0;
        } while (iVar28 < 0x24);
        do {
          M977_004a56e8(iVar24);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 0x24);
      }
      if (pfVar6[3] == 0.0) {
        moby->state = ((byte)(ZERO_MASK((int)pfVar6[2])) & 1) + 1;
      }
      else {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        moby->state = '\x03';
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(0x3c,0x4a5888);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar40 = pfVar6[1];
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        uVar9 = (int)fVar40 >> 0x1f;
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar11;
        fVar7 = (moby->pos).z;
        uVar10 = (int)fVar7 >> 0x1f;
        if ((int)((uVar10 >> 1 ^ (uint)fVar7) - uVar10) < (int)((uVar9 >> 1 ^ (uint)fVar40) - uVar9)
           ) {
          *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) = 0;
        }
      }
    }
    if (-1 < (int)pfVar6[5]) {
      dVar36 = 0.0;
      (&DAT_008cc29c)[(int)pfVar6[5] * 0x11a0] = WaterTileConsts.alpha0;
      (&DAT_008cc29d)[(int)pfVar6[5] * 0x11a0] = WaterTileConsts.alpha1;
      puVar8 = moby->collision;
      *(f32 *)(&DAT_008cc288 + (int)pfVar6[5] * 0x11a0) = (moby->pos).z;
      dVar35 = dVar36;
      if ((puVar8 != (ushort *)0x0) &&
         (iVar24 = MB_ScaledVecWrapper(0x4048000000000000,moby), iVar24 != -1)) {
        if (moby->state < 8 && 2 < moby->state) {
          fVar7 = (moby->pos).z;
          uVar9 = (int)fVar7 >> 0x1f;
          uVar10 = (int)pfVar6[1] >> 0x1f;
          iVar24 = (uVar9 >> 1 ^ (uint)fVar7) - uVar9;
          if (((int)((uVar10 >> 1 ^ (uint)pfVar6[1]) - uVar10) < iVar24) &&
             (uVar9 = (int)*pfVar6 >> 0x1f, iVar24 < (int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9))) {
            dVar35 = 1.0;
          }
        }
        else {
          dVar35 = 1.0;
        }
      }
      uVar22 = 0;
      if (dVar35 != dVar36) {
        uVar22 = *(undefined2 *)(&DAT_008f3d00 + (int)pfVar6[5] * 2);
      }
      fVar40 = pfVar6[5];
      *(undefined2 *)(&DAT_008cc29e + (int)fVar40 * 0x11a0) = uVar22;
      if (fVar40 == 0.0) {
        WaterTile_UpdateWaves((WaterTile *)&DAT_008cc280,0x24);
        RegisterFuncForMoby(&PTR_M977_004a6518_0070f450,moby);
        fVar40 = pfVar6[5];
      }
      if (fVar40 == DAT_008cc240) {
        fVar5 = pfVar6[5];
        uVar22 = (undefined2)DAT_008cc244;
        *(undefined2 *)(&DAT_008cc29e + (int)fVar40 * 0x11a0) = uVar22;
        *(undefined2 *)(&DAT_008f3d00 + (int)fVar5 * 2) = uVar22;
      }
    }
  }
  return;
}


// 0x04a6518 (0x30 bytes)
void M977_004a6518(void)

{
  WaterTile_DrawAll(&DAT_008cc280,0x24);
  return;
}


// 0x04a6548 (0x14 bytes)
void M977_004a6548(void)

{
  DAT_008f3d94 = 0x10000;
  return;
}



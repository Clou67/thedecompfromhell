// game/map.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 105 functions, 0xe1b0c-0xe6b08
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/map.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sUnk.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/mUnk.h"

// 0x00e1b0c (0x14 bytes)
void SECTION_HEADER_MAP(void)

{
  DAT_00724acc = 0x10000;
  return;
}


// 0x00e1b28 (0x400 bytes)
// strings: 0065290c: 'rc1/ps3data/global/maps/maps_mm[%d].ps3' | 00652934: 'rc1/ps3data/global/maps/maps[%d].ps3'


void Map_LoadPlanetMap(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  float *pfVar14;
  int iVar15;
  char *__s;
  int iVar16;
  undefined4 *puVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int iVar22;
  undefined4 *puVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  byte in_cr6;
  longlong lVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar42;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar11 = uVar13 - 0x40;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  auVar42 = ZEXT416(0);
  auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  lVar33 = 0x14;
  puVar12 = &DAT_007261cc;
  DAT_00a204d0 = 1;
  puVar17 = &g_MapHeroU[0];
  pfVar14 = &g_MapZoom;
  puVar20 = &DAT_007261d0;
  puVar23 = &g_MapHeroV[0];
  do {
    uVar9 = *puVar12;
    *pfVar14 = 0.65;
    uVar10 = *puVar20;
    puVar12 = puVar12 + 2;
    *puVar17 = uVar9;
    puVar20 = puVar20 + 2;
    *puVar23 = uVar10;
    pfVar14 = pfVar14 + 1;
    puVar17 = puVar17 + 1;
    puVar23 = puVar23 + 1;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  g_MapFileId = -1;
  pfVar32 = &g_MapWorldToMap;
  lVar33 = 0x13;
  pfVar29 = (float *)&DAT_00724d54;
  iVar15 = Level + ((uint)(0x12 - (longlong)(int)Level >> 0x3f) & -Level);
  pfVar14 = &g_MapWorldBounds;
  pfVar30 = (float *)&DAT_00724d58;
  pfVar27 = (float *)&DAT_00724b08;
  pfVar18 = (float *)&DAT_00724af4;
  pfVar21 = (float *)&DAT_00724af8;
  pfVar24 = (float *)&DAT_00724afc;
  pfVar25 = (float *)&DAT_00724b00;
  pfVar26 = (float *)&DAT_00724b04;
  pfVar28 = (float *)&DAT_00724b0c;
  pfVar31 = (float *)&DAT_00724d5c;
  g_SelectedLevel = iVar15;
  do {
    fVar2 = *pfVar14;
    fVar3 = *pfVar18;
    fVar4 = *pfVar21;
    fVar5 = *pfVar24;
    fVar6 = *pfVar25;
    fVar7 = *pfVar26;
    fVar8 = *pfVar28;
    pfVar14 = pfVar14 + 8;
    pfVar18 = pfVar18 + 8;
    pfVar28 = pfVar28 + 8;
    pfVar21 = pfVar21 + 8;
    pfVar24 = pfVar24 + 8;
    fVar4 = (fVar6 - *pfVar27) / (fVar2 - fVar4);
    pfVar25 = pfVar25 + 8;
    pfVar26 = pfVar26 + 8;
    pfVar27 = pfVar27 + 8;
    fVar5 = (fVar7 - fVar8) / (fVar3 - fVar5);
    *pfVar29 = fVar4;
    pfVar29 = pfVar29 + 4;
    *pfVar32 = -(fVar4 * fVar2 - fVar6);
    pfVar32 = pfVar32 + 4;
    *pfVar31 = fVar5;
    pfVar31 = pfVar31 + 4;
    *pfVar30 = -(fVar5 * fVar3 - fVar7);
    pfVar30 = pfVar30 + 4;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  lVar33 = uVar13 - 0xc0;
  bVar1 = UnlockableItems.mapOMatic == '\0';
  if (bVar1) {
    snprintf((char *)lVar33,"rc1/ps3data/global/maps/maps[%d].ps3",iVar15);
  }
  else {
    snprintf((char *)lVar33,"rc1/ps3data/global/maps/maps_mm[%d].ps3",iVar15);
  }
  g_MapIsMapOMatic = (int)!bVar1;
  iVar15 = GetFileSize(lVar33);
  if (iVar15 == 0) {
    DAT_00a204c8 = 0;
    g_MapLoaded = 1;
    DAT_00a204c0 = 0;
    DAT_00a204c4 = 0;
  }
  else {
    g_MapLoaded = 1;
    g_MapFileSize = (int)((longlong)(iVar15 + 0x7ff >> 0xb) << 7);
    LoadAssetFromFile(lVar33,g_NpcBuffer,0x90000);
    if ((&DAT_0096ca34)[g_SelectedLevel * 0x8000] == '\0') {
      bVar1 = UnlockableItems.mapOMatic == '\0';
      __s = (char *)(uVar13 - 0x80);
      if (bVar1) {
        snprintf(__s,"rc1/ps3data/global/maps/maps[%d].ps3",g_SelectedLevel);
      }
      else {
        snprintf(__s,"rc1/ps3data/global/maps/maps_mm[%d].ps3",g_SelectedLevel);
      }
      g_MapIsMapOMatic = (int)!bVar1;
      LoadAssetFromFile(uVar13 - 0x80,g_NpcBuffer,0x90000);
      memset(g_MapRevealMask,0,0x8000);
    }
    else {
      memcpy((void *)g_MapRevealMask,&DAT_0096ca34 + g_SelectedLevel * 0x8000,0x8000);
    }
    iVar15 = 0;
    iVar16 = 0;
    auVar34 = loadVectorLeftIndexed(lVar11,0xe1b20);
    auVar37 = loadVectorLeftIndexed(4,0xe1b20);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = auVar42;
    do {
      auVar36 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      uVar19 = 0;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = vectorSubtractFloatingPoint(auVar35,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar40,auVar40,auVar41);
      auVar40 = auVar42;
      do {
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar40,0);
        auVar41 = vectorSubtractFloatingPoint(auVar35,auVar41);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar41,auVar36);
        vectorCompareGreaterThanFloatingPoint
                  (auVar41,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          iVar22 = ((int)uVar19 >> 3) + (uint)((int)uVar19 < 0 && (uVar19 & 7) != 0) + 0xa20664;
          *(byte *)(iVar22 + iVar16) =
               *(byte *)(iVar22 + iVar16) |
               (byte)(1 << (uVar19 + (((int)uVar19 >> 3) +
                                     (uint)((int)uVar19 < 0 && (uVar19 & 7) != 0)) * -8 & 0x3f));
        }
        uVar19 = uVar19 + 1;
        auVar41.piece<0,4>() = auVar40.piece<0,4>() + 1;
        auVar41.piece<8,8>() = auVar40.piece<8,8>();
        auVar41.piece<4,4>() = auVar40.piece<4,4>() + 1;
        auVar38.piece<0,8>() = auVar41.piece<0,8>();
        auVar38.piece<12,4>() = auVar40.piece<12,4>();
        auVar38.piece<8,4>() = auVar40.piece<8,4>() + 1;
        auVar40.piece<0,12>() = auVar38.piece<0,12>();
        auVar40.piece<12,4>() = auVar38.piece<12,4>() + 1;
      } while ((int)uVar19 < 0x20);
      iVar15 = iVar15 + 1;
      auVar36.piece<0,4>() = auVar37.piece<0,4>() + 1;
      auVar36.piece<8,8>() = auVar37.piece<8,8>();
      auVar36.piece<4,4>() = auVar37.piece<4,4>() + 1;
      auVar39.piece<0,8>() = auVar36.piece<0,8>();
      auVar39.piece<12,4>() = auVar37.piece<12,4>();
      auVar39.piece<8,4>() = auVar37.piece<8,4>() + 1;
      auVar37.piece<0,12>() = auVar39.piece<0,12>();
      auVar37.piece<12,4>() = auVar39.piece<12,4>() + 1;
      iVar16 = iVar16 + 4;
    } while (iVar15 < 0x20);
  }
  return;
}


// 0x00e1f28 (0x164 bytes)
void Map_OnPauseMenuOpen(void)

{
  UpdateMissionDisplay(g_SelectedLevel,1);
  DAT_00a207ac = DAT_00a52ca8 + 0x9a800;
  DAT_00a206fc = DAT_00a52ca8;
  DAT_00a52ca8 = DAT_00a52ca8 + 0x12a800;
  g_MapCacheBuf = 0;
  DAT_00a207b0 = DAT_00a52cac;
  DAT_00a52cac = DAT_00a52cac + 0x90000;
  DAT_00a207b4 = 0;
  DAT_00a207b8 = 0;
  g_MapCacheId = -1;
  DAT_00a207c0 = ~Veldin;
  DAT_00a207c4 = 0xffffffff;
  DAT_00a207c8 = 0xffffffff;
  DAT_00a207cc = 0xffffffff;
  DAT_00a207d0 = 0xffffffff;
  if (((g_MapFileId == -1) || (g_MapIsMapOMatic != 0)) || (UnlockableItems.mapOMatic == '\0')) {
    if (g_MapFileId == -1) {
      g_MapAvailable = 0;
    }
    else {
      DAT_00a207d8 = g_MapFileSize;
      ReadIndexedBuffer(DAT_00a207ac,g_MapFileId,0,g_MapFileSize,0);
      DAT_00a207c0 = Level;
      if (UnlockableItems.mapOMatic != '\0') {
        DAT_00a207c0 = Level + 0x100;
      }
      g_MapAvailable = 1;
      g_MapCurIndex = -2;
    }
  }
  else {
    Map_LoadPlanetMap();
  }
  return;
}


// 0x00e208c (0x80 bytes)
int Map_FindFreeCacheSlot(int fromTop)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = 0;
  while( true ) {
    lVar3 = (longlong)(4 - (int)lVar1);
    iVar2 = (int)(lVar3 + (ZERO_MASK((fromTop & 0xffU)) & lVar1 - lVar3));
    if (((&g_MapCacheBuf)[iVar2] != 0) && ((&g_MapCacheId)[iVar2] == -1)) break;
    iVar2 = (int)lVar1 + 1;
    lVar1 = (longlong)iVar2;
    if (4 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}


// 0x00e210c (0x84 bytes)
void Map_MoveCacheSlot(int dst,int src)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((longlong)dst << 2);
  iVar3 = (int)((longlong)src << 2);
  FastMemCopy
            (*(undefined4 *)((int)&g_MapCacheBuf + iVar2),
             *(undefined4 *)((int)&g_MapCacheBuf + iVar3),
             *(int *)((int)&g_MapCacheSize + iVar3) << 4);
  uVar1 = *(undefined4 *)((int)&g_MapCacheSize + iVar3);
  *(undefined4 *)((int)&g_MapCacheId + iVar2) = *(undefined4 *)((int)&g_MapCacheId + iVar3);
  *(undefined4 *)((int)&g_MapCacheSize + iVar2) = uVar1;
  *(undefined4 *)((int)&g_MapCacheId + iVar3) = 0xffffffff;
  return;
}


// 0x00e2190 (0x110 bytes)
int Map_GetFreeCacheSlotCompact(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = 4 - iVar3;
    iVar1 = (int)((longlong)iVar2 << 2);
    if ((*(int *)((int)&g_MapCacheBuf + iVar1) != 0) && (*(int *)((int)&g_MapCacheId + iVar1) == -1)
       ) break;
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
      return -1;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = 1;
  do {
    if ((((&g_MapCacheId)[iVar3] & 0x1000U) == 0) && ((&g_MapCacheBuf)[iVar3] != 0)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FastMemCopy(g_MapCacheBuf,(&g_MapCacheBuf)[iVar3],(&g_MapCacheSize)[iVar3] << 4);
  g_MapCacheId = (&g_MapCacheId)[iVar3];
  g_MapCacheSize = (&g_MapCacheSize)[iVar3];
  (&g_MapCacheId)[iVar3] = -1;
  return iVar3;
}


// 0x00e22a0 (0x54 bytes)
int Map_FindCacheSlotById(int id)

{
  int iVar1;
  
  iVar1 = 0;
  while (((&g_MapCacheBuf)[iVar1] == 0 || ((&g_MapCacheId)[iVar1] != id))) {
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// 0x00e22f4 (0x1b8 bytes)
int Map_GetNextMapToPrefetch(void)

{
  int iVar1;
  longlong lVar2;
  int *piVar4;
  longlong lVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = ((uint)(ZERO_MASK((uint)UnlockableItems.mapOMatic)) & 0xffffff00) + 0x100
  ;
  iVar5 = 0;
  iVar7 = g_SelectedLevel + iVar1;
  piVar8 = &g_MapCacheId;
  piVar4 = &g_MapCacheBuf;
  while ((*piVar4 == 0 || (*piVar8 != iVar7))) {
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar8 = piVar8 + 1;
    if (4 < iVar5) {
      return iVar7;
    }
  }
  if (iVar5 == -1) {
    return iVar7;
  }
  lVar2 = 0;
  if ((g_SelectedLevel < 0x14) && (lVar2 = 0, *(int *)ptr_GalacticMap != g_SelectedLevel)) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 4;
      lVar2 = lVar2 + 1;
    } while (*(int *)(ptr_GalacticMap + iVar5) != g_SelectedLevel);
  }
  lVar3 = 1;
  do {
    uVar6 = (uint)(lVar2 + lVar3);
    if ((uVar6 < 0x14) && (*(int *)(ptr_GalacticMap + uVar6 * 4) != 0)) {
      iVar7 = *(int *)(ptr_GalacticMap + uVar6 * 4) + iVar1;
      iVar5 = 0;
      piVar8 = &g_MapCacheId;
      piVar4 = &g_MapCacheBuf;
      do {
        if ((*piVar4 != 0) && (*piVar8 == iVar7)) goto LAB_000e245c;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar5 < 5);
      iVar5 = -1;
LAB_000e245c:
      if (iVar5 == -1) {
        return iVar7;
      }
    }
    lVar3 = (1 - lVar3) + (-(longlong)(int)lVar3 >> 0x3f & -(1 - lVar3) - lVar3);
    if ((int)lVar3 == 4) {
      return -1;
    }
  } while( true );
}


// 0x00e24ac (0x4c bytes)
int Map_GetGalacticMapIndex(int level)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x13 < iVar1 || *(int *)(ptr_GalacticMap + iVar1 * 4) == 0) {
      return -1;
    }
    if (*(int *)(ptr_GalacticMap + iVar1 * 4) == level) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// 0x00e24f8 (0x20c bytes)
int Map_ChooseCacheSlotToEvict(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  lVar3 = 0;
  uVar2 = 0xffffffffffffffff;
  if (g_SelectedLevel == 0) {
    lVar5 = 4;
    do {
      iVar4 = (int)(lVar5 << 2);
      iVar6 = (int)lVar5;
      if ((iVar6 != DAT_00a207d0 && *(int *)((int)&g_MapCacheBuf + iVar4) != 0) &&
         (*(int *)((int)&g_MapCacheId + iVar4) == -1)) {
        return iVar6;
      }
      lVar5 = (longlong)(iVar6 + -1);
    } while (-1 < iVar6 + -1);
  }
  iVar6 = 0;
  for (iVar4 = 0; iVar4 < 0x14 && *(int *)(ptr_GalacticMap + iVar6) != 0; iVar4 = iVar4 + 1) {
    if (*(int *)(ptr_GalacticMap + iVar6) == g_SelectedLevel) goto LAB_000e25c8;
    iVar6 = iVar6 + 4;
  }
  iVar4 = -1;
LAB_000e25c8:
  if (iVar4 == -1) {
    iVar4 = 1;
  }
  else {
    uVar7 = 0;
    do {
      iVar6 = (int)((uVar7 & 0xffffffff) << 2);
      iVar8 = (int)uVar7;
      if (iVar8 != DAT_00a207d0 && *(int *)((int)&g_MapCacheBuf + iVar6) != 0) {
        uVar1 = *(uint *)((int)&g_MapCacheId + iVar6);
        if (uVar1 == 0xffffffff) {
          return iVar8;
        }
        iVar6 = 0;
        puVar9 = (uint *)ptr_GalacticMap;
        for (iVar10 = 0; iVar10 < 0x14 && *(int *)(ptr_GalacticMap + iVar6) != 0;
            iVar10 = iVar10 + 1) {
          if (*puVar9 == (uVar1 & 0xff)) goto LAB_000e266c;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + 4;
        }
        iVar10 = -1;
LAB_000e266c:
        lVar5 = (longlong)(iVar10 - iVar4);
        lVar5 = lVar5 + (lVar5 >> 0x3f & lVar5 * -2);
        if ((int)lVar3 < (int)lVar5) {
          uVar2 = uVar7;
          lVar3 = lVar5;
        }
      }
      uVar7 = (ulonglong)(iVar8 + 1);
    } while (iVar8 + 1 < 5);
    iVar4 = (int)(uVar2 + (ZERO_MASK((-1 - (int)uVar2)) & -uVar2));
    (&g_MapCacheId)[iVar4] = -1;
  }
  return iVar4;
}


// 0x00e2704 (0x4 bytes)
void STUB_000e2704(...)

{
  return;
}


// 0x00e2708 (0xb4 bytes)
void Map_MergeByMask(char *out,char *a,char *b,char *mask)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    iVar4 = 0;
    uVar3 = 1;
    do {
      if (((uint)(byte)*mask & (uint)uVar3) == 0) {
        cVar1 = *b;
      }
      else {
        cVar1 = *a;
      }
      iVar4 = iVar4 + 1;
      a = a + 1;
      *out = cVar1;
      b = b + 1;
      out = out + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (iVar4 < 8);
    iVar2 = iVar2 + 1;
    mask = (char *)((byte *)mask + 1);
  } while (iVar2 < 0x8000);
  return;
}


// 0x00e27bc (0x78 bytes)
void Map_ExpandRevealMask(char *out,char *mask)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar2 = 0;
  do {
    uVar4 = 1;
    lVar5 = 8;
    pcVar3 = out;
    do {
      uVar1 = (uint)uVar4;
      out = pcVar3 + 1;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      *pcVar3 = ((byte)(ZERO_MASK(((byte)*mask & uVar1))) & 1) - 1;
      lVar5 = lVar5 + -1;
      pcVar3 = out;
    } while (lVar5 != 0);
    iVar2 = iVar2 + 1;
    mask = (char *)((byte *)mask + 1);
  } while (iVar2 < 0x8000);
  return;
}


// 0x00e2848 (0x2e0 bytes)
int Map_UpdateZoomPan(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  longlong lVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  
  iVar1 = g_MapCurIndex;
  auVar9 = loadVectorLeftIndexed(8,0x964a40);
  auVar8 = loadVectorLeftIndexed(0xc,0x964a40);
  if ((g_Pad.buttonsPressedThisFrame & (R3|SELECT)) == 0) {
    if (g_MapAvailable == 0) {
      iVar6 = 0;
    }
    else if (g_MapCurIndex < 0) {
      iVar6 = 0;
    }
    else {
      (&g_MapZoom)[g_MapCurIndex] = (&g_MapZoom)[g_MapCurIndex] * -(g_Pad.sticks.y * 0.02 - 1.0);
      iVar4 = g_MapCurIndex;
      uVar2 = (int)(&g_MapZoom)[iVar1] >> 0x1f;
      if (0x40800000 < (int)((uVar2 >> 1 ^ (uint)(&g_MapZoom)[iVar1]) - uVar2)) {
        (&g_MapZoom)[iVar1] = 4.0;
        iVar1 = iVar4;
      }
      iVar4 = g_MapCurIndex;
      uVar2 = (int)(&g_MapZoom)[iVar1] >> 0x1f;
      if ((int)((uVar2 >> 1 ^ (uint)(&g_MapZoom)[iVar1]) - uVar2) < 0x3f266666) {
        (&g_MapZoom)[iVar1] = 0.65;
        iVar1 = iVar4;
      }
      lVar5 = ZEXT48(&DAT_00a204c0) + (longlong)(iVar1 << 2);
      auVar11 = ZEXT416(0xffffffff);
      auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xb4,lVar5);
      auVar11 = loadVectorRightIndexed(0xc4,lVar5);
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = auVar10 | auVar11;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar12 = vectorReciprocalEstimateFloatingPoint(auVar10);
      auVar11 = loadVectorLeftIndexed(0xc,0xe2834);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = ZEXT416(0xffffffff);
      auVar19 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar12,auVar10,auVar14);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
      auVar11 = ZEXT416(0xffffffff);
      auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = loadVectorLeftIndexed(8,0xe2834);
      auVar12 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar10,auVar14);
      lVar7 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar15);
      auVar11 = ZEXT416(0xffffffff);
      auVar18 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar10,auVar14);
      auVar14 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar18 = loadVectorLeftIndexed(0x104,lVar5);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar16);
      auVar10 = loadVectorRightIndexed(0x114,lVar5);
      auVar13 = loadVectorLeftIndexed(0x154,lVar7);
      auVar16 = loadVectorRightIndexed(0x164,lVar7);
      auVar12 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                           auVar17);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar12,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar8,auVar12,auVar14);
      auVar8 = ZEXT416(0);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = ZEXT416((auVar18.piece<0,4>() | auVar10.piece<0,4>()) + auVar12.piece<0,4>()) &
               (GPiece<16>)0xffffffff;
      auVar11 = ZEXT416((auVar13.piece<0,4>() | auVar16.piece<0,4>()) + auVar11.piece<0,4>()) &
                (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x104,lVar5);
      *(undefined4 *)((int)lVar5 + 0x104) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x154,lVar7);
      *(undefined4 *)((int)lVar7 + 0x154) = uVar3;
      iVar4 = g_MapCurIndex;
      auVar9 = loadVectorLeftIndexed(0x10,0xe2834);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      lVar7 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      lVar5 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar11 = loadVectorLeftIndexed(0x104,lVar7);
      auVar12 = loadVectorRightIndexed(0x114,lVar7);
      auVar8 = vectorCompareGreaterThanSignedWord
                         (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                          auVar11 | auVar12);
      auVar8 = vectorLogicalAndWithComplement(auVar11 | auVar12,auVar8);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x104,lVar7);
      *(undefined4 *)((int)lVar7 + 0x104) = uVar3;
      auVar8 = loadVectorLeftIndexed(0x104,lVar5);
      auVar11 = loadVectorRightIndexed(0x114,lVar5);
      iVar1 = (&g_MapHeroV[0])[iVar4];
      auVar12 = vectorCompareGreaterThanSignedWord(auVar8 | auVar11,auVar9);
      auVar8 = vectorConditionalSelect(auVar8 | auVar11,auVar9,auVar12);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x104,lVar5);
      *(undefined4 *)((int)lVar5 + 0x104) = uVar3;
      (&g_MapHeroV[0])[iVar4] = iVar1 + (iVar1 >> 0x1f & -iVar1);
      iVar1 = (&g_MapHeroV[0])[iVar4];
      iVar6 = 0;
      (&g_MapHeroV[0])[iVar4] =
           iVar1 + ((uint)(0x10000000 - (longlong)iVar1 >> 0x3f) & 0x10000000U - iVar1);
    }
  }
  else {
    iVar6 = 1;
  }
  return iVar6;
}


// 0x00e2b38 (0xfc bytes)
void Map_WorldToMapCoords(float x,float y,float *outU,float *outV,int level)

{
  LevelId LVar1;
  int iVar2;
  
  LVar1 = level + -100 + ((uint)((longlong)level + -100 >> 0x3f) & level - (level + -100));
  if (LVar1 == ~Veldin) {
    LVar1 = Level;
  }
  iVar2 = LVar1 + ((int)LVar1 >> 0x1f & -LVar1);
  iVar2 = iVar2 + ((uint)(0x12 - (longlong)iVar2 >> 0x3f) & -iVar2);
  if ((iVar2 == 6) && (99 < level)) {
    *outU = (fRam00724dbc * y + 1053.0) * 0.001953125;
    *outV = -(fRam00724db4 * x - 740.0) * 0.001953125;
  }
  else {
    *outU = ((float)(&DAT_00724d54)[iVar2 * 4] * x + (&g_MapWorldToMap)[iVar2 * 4]) * 0.001953125;
    *outV = ((float)(&DAT_00724d5c)[iVar2 * 4] * y + (float)(&DAT_00724d58)[iVar2 * 4]) *
            0.001953125;
  }
  return;
}


// 0x00e2c34 (0x194 bytes)
// strings: 00652964: 'error'


void Map_GetIconLabel(int icon,char *out)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_40 [16];
  
  iVar3 = (int)((longlong)icon << 5) + (int)((longlong)icon << 3);
  pcVar5 = (char *)help_msg_string_by_index((int)*(short *)(g_MapIcons + iVar3 + 10));
  if (pcVar5 != (char *)0x0) {
    while( true ) {
      cVar2 = *pcVar5;
      if (cVar2 == '%' || cVar2 == '\0') break;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *out = cVar2;
      out = out + 1;
    }
    if (cVar2 == '\0') {
      *out = '\0';
    }
    else {
      if (pcVar5[1] == 'b') {
        snprintf(local_40,"%d",
                       (ulonglong)
                       *(uint *)(&DAT_00737d30 +
                                (int)((longlong)*(short *)(g_MapIcons + iVar3 + 0xc) << 3) * 3));
      }
      else {
        snprintf(local_40,"error");
      }
      bVar1 = local_40[0] != '\0';
      pcVar4 = local_40;
      while (bVar1) {
        *out = *pcVar4;
        out = out + 1;
        bVar1 = pcVar4[1] != '\0';
        pcVar4 = pcVar4 + 1;
      }
      cVar2 = pcVar5[2];
      pcVar5 = pcVar5 + 2;
      while (cVar2 != '\0') {
        *out = *pcVar5;
        out = out + 1;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      *out = '\0';
    }
  }
  return;
}


// 0x00e2e10 (0x1838 bytes)
// strings: 0065296c: 'No Map Available' | 0096c074: 'None'

void DrawMapFrame(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  RsxCmd *pRVar12;
  RsxCmd *pRVar13;
  RsxCmd *pRVar14;
  RsxCmd *pRVar15;
  RsxCmd *pRVar16;
  RsxCmd *pRVar17;
  RsxCmd *pRVar18;
  ulonglong *puVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  RenderingStep *pRVar23;
  longlong lVar24;
  undefined4 *puVar25;
  int iVar30;
  longlong lVar26;
  undefined4 *puVar31;
  undefined8 uVar27;
  uint uVar32;
  uint uVar33;
  longlong lVar28;
  undefined8 uVar29;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  ulonglong unaff_r14;
  int iVar43;
  ulonglong unaff_r15;
  longlong lVar44;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong uVar45;
  int iVar47;
  ulonglong uVar46;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar48;
  int iVar49;
  ulonglong unaff_r23;
  int iVar50;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int *piVar51;
  ulonglong unaff_r29;
  longlong lVar52;
  ulonglong unaff_r30;
  int iVar53;
  ulonglong unaff_r31;
  float *pfVar54;
  ulonglong in_LR;
  double dVar55;
  double extraout_f1;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar61;
  ulonglong in_f23;
  double dVar62;
  ulonglong in_f24;
  double dVar63;
  ulonglong in_f25;
  double dVar64;
  ulonglong in_f26;
  double dVar65;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar66;
  ulonglong in_f29;
  double dVar67;
  ulonglong in_f30;
  double dVar68;
  double dVar69;
  ulonglong in_f31;
  double dVar70;
  GPiece<16> auVar71;
  GPiece<16> auVar72;
  GPiece<16> auVar73;
  GPiece<16> auVar74;
  GPiece<16> auVar75;
  GPiece<16> auVar76;
  GPiece<16> auVar77;
  GPiece<16> auVar78;
  GPiece<16> auVar79;
  GPiece<16> auVar80;
  GPiece<16> auVar81;
  GPiece<16> auVar82;
  GPiece<16> auVar83;
  GPiece<16> auVar84;
  GPiece<16> auVar85;
  GPiece<16> auVar86;
  GPiece<16> auVar87;
  undefined8 in_vr26_64_1;
  GPiece<16> auVar88;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar89;
  
  uVar46 = ZEXT48(&stack0x00000000);
  lVar34 = uVar46 - 0x350;
  puVar19 = (ulonglong *)lVar34;
  *puVar19 = uVar46;
  puVar19[0x6c] = in_LR;
  puVar19[0x5e] = in_f20;
  puVar19[0x5f] = in_f21;
  puVar19[0x60] = in_f22;
  puVar19[0x61] = in_f23;
  puVar19[0x62] = in_f24;
  puVar19[99] = in_f25;
  puVar19[100] = in_f26;
  puVar19[0x65] = in_f27;
  puVar19[0x66] = in_f28;
  puVar19[0x67] = in_f29;
  puVar19[0x68] = in_f30;
  puVar19[0x69] = in_f31;
  puVar19[0x51] = unaff_r19;
  lVar24 = uVar46 - 0x100;
  puVar25 = (undefined4 *)lVar24;
  puVar25[3] = in_vr31_32_3;
  puVar25[2] = in_vr31_32_2;
  puVar25[1] = in_vr31_32_1;
  *puVar25 = in_vr31_32_0;
  puVar19[0x4e] = unaff_r16;
  iVar30 = g_MapAvailable;
  puVar25 = &DAT_00a204c0;
  puVar19[0x5d] = unaff_r31;
  puVar19[0x5c] = unaff_r30;
  puVar19[0x5b] = unaff_r29;
  puVar19[0x5a] = unaff_r28;
  puVar19[0x59] = unaff_r27;
  puVar19[0x58] = unaff_r26;
  puVar19[0x57] = unaff_r25;
  puVar19[0x56] = unaff_r24;
  puVar19[0x55] = unaff_r23;
  puVar19[0x54] = unaff_r22;
  puVar19[0x53] = unaff_r21;
  puVar19[0x52] = unaff_r20;
  puVar19[0x50] = unaff_r18;
  puVar19[0x4f] = unaff_r17;
  puVar19[0x4d] = unaff_r15;
  puVar19[0x4c] = unaff_r14;
  if (iVar30 == 0) {
    STUB_0006d704(0);
    iVar30 = DebugFontPrintCenter
                       (0x100,(int)g_FrameBufHeight >> 1,-0x7f6f6f70,"No Map Available");
    STUB_0006d708(iVar30);
  }
  else if (-1 < g_MapCurIndex) {
    STUB_0006d704(0);
    iVar43 = g_MapCurIndex;
    lVar26 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
    auVar83 = ZEXT416(0);
    auVar85 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = ZEXT416(0xffffffff);
    auVar72 = ZEXT416(1);
    iVar30 = (int)lVar26;
    puVar19[0x2f] = (longlong)(*(int *)(iVar30 + 0x104) >> 0xf);
    fVar2 = *(float *)(iVar30 + 0xb4);
    iVar30 = *(int *)(iVar30 + 0x154);
    auVar71 = loadVectorLeftIndexed(0x104,lVar26);
    auVar73 = loadVectorRightIndexed(0x114,lVar26);
    auVar76 = loadVectorLeftIndexed(0x154,lVar26);
    auVar79 = loadVectorRightIndexed(0x164,lVar26);
    auVar74 = ZEXT416(0xf);
    auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
    auVar80 = loadVectorLeftIndexed(0xb4,lVar26);
    auVar82 = loadVectorRightIndexed(0xc4,lVar26);
    auVar71 = vectorShiftRightAlgebraicWord(auVar71 | auVar73,auVar74);
    auVar73 = vectorShiftRightAlgebraicWord(auVar76 | auVar79,auVar74);
    auVar80 = auVar80 | auVar82;
    auVar74 = ZEXT416(0xfffffff8);
    auVar71 = vectorConvertFromSignedFixedPointWord(auVar71,0);
    auVar76 = loadVectorLeftIndexed(4,0x96c074);
    auVar76 = vectorShiftRightWord
                        (auVar76,auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
    auVar74 = ZEXT416(0xffffffff);
    auVar79 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
    auVar74 = vectorCompareEqualToUnsignedWord(auVar76,auVar85);
    auVar79 = vectorShiftLeftIntegerWord(auVar79,auVar79);
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
    auVar76 = vectorConditionalSelect
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                         auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,auVar74);
    auVar72 = vectorMultiplyAddFloatingPoint(auVar80,auVar71,auVar79);
    auVar83 = ZEXT416(0xffffffff);
    auVar83 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar74 = vectorShiftLeftIntegerWord(auVar83,auVar83);
    auVar72 = vectorConvertToSignedFixedPointWordSaturate(auVar72,0);
    puVar19[0x2f] = (longlong)(int)(fVar2 * (float)(longlong)puVar19[0x2f]);
    auVar83 = loadVectorLeftIndexed(4,0xe2dc8);
    auVar83 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar32 = (uint)(byte)Cheats[4];
    auVar74 = vectorMultiplyAddFloatingPoint
                        (auVar80,auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                         auVar74);
    auVar83 = ZEXT416(0xfffffff0);
    auVar82 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar79 = vectorRotateLeftIntegerWord(auVar76,auVar82);
    auVar88 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    puVar19[0x2f] = (longlong)(int)(fVar2 * 8192.0);
    auVar86 = loadVectorLeftIndexed(8,0xe2dc8);
    puVar19[0x2f] = (longlong)(iVar30 >> 0xf);
    puVar19[0x2b] = 1;
    puVar19[0x2e] = ZEXT48(Cheats);
    auVar83 = loadVectorLeftIndexed(lVar24,0xe2dc8);
    auVar83 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar87 = vectorMultiplyOddUnsignedHalfWord(auVar72,auVar76);
    iVar30 = ((uint)(ZERO_MASK(uVar32)) & 2) - 1;
    auVar72 = vectorMultiplySumSignedHalfWordModulo(auVar72,auVar79,auVar85);
    auVar71 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar74 = vectorShiftLeftIntegerWord(auVar72,auVar82);
    lVar26 = 0x1000 - (longlong)*(int *)((int)puVar19 + 0x17c) * (longlong)iVar30;
    auVar85 = vectorMultiplySumSignedHalfWordModulo(auVar88,auVar79,auVar85);
    auVar79 = vectorMultiplyOddUnsignedHalfWord(auVar88,auVar76);
    auVar76 = vectorMultiplyAddFloatingPoint(auVar80,auVar73,auVar71);
    auVar72 = auVar86 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar73.piece<0,4>() = auVar74.piece<0,4>() + auVar87.piece<0,4>();
    auVar73.piece<8,8>() = auVar74.piece<8,8>();
    auVar73.piece<4,4>() = auVar74.piece<4,4>() + auVar87.piece<4,4>();
    auVar71.piece<0,8>() = auVar73.piece<0,8>();
    auVar71.piece<12,4>() = auVar74.piece<12,4>();
    auVar71.piece<8,4>() = auVar74.piece<8,4>() + auVar87.piece<8,4>();
    auVar74.piece<0,12>() = auVar71.piece<0,12>();
    auVar74.piece<12,4>() = auVar71.piece<12,4>() + auVar87.piece<12,4>();
    auVar89 = vectorSubtractUnsignedWordModulo
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,auVar74);
    auVar83 = vectorShiftLeftIntegerWord(auVar85,auVar82);
    uVar45 = lVar26 + (longlong)(int)*(uint *)((int)puVar19 + 0x17c) * (longlong)iVar30;
    auVar82.piece<0,4>() = auVar83.piece<0,4>() + auVar79.piece<0,4>();
    auVar82.piece<4,4>() = auVar83.piece<4,4>() + auVar79.piece<4,4>();
    auVar82.piece<8,8>() = in_vr26_64_1;
    auVar80.piece<0,8>() = auVar82.piece<0,8>();
    auVar80.piece<8,4>() = auVar83.piece<8,4>() + auVar79.piece<8,4>();
    auVar80.piece<12,4>() = auVar83.piece<12,4>() + auVar79.piece<12,4>();
    auVar83 = vectorConvertToSignedFixedPointWordSaturate(auVar76,0);
    auVar79.piece<0,4>() = auVar89.piece<0,4>() + auVar82.piece<0,4>();
    auVar79.piece<8,8>() = auVar80.piece<8,8>();
    auVar79.piece<4,4>() = auVar89.piece<4,4>() + auVar82.piece<4,4>();
    auVar76.piece<0,8>() = auVar79.piece<0,8>();
    auVar76.piece<8,4>() = auVar89.piece<8,4>() + auVar80.piece<8,4>();
    auVar76.piece<12,4>() = auVar80.piece<12,4>();
    auVar85.piece<0,12>() = auVar76.piece<0,12>();
    auVar85.piece<12,4>() = auVar89.piece<12,4>() + auVar80.piece<12,4>();
    auVar87 = vectorSubtractUnsignedWordModulo
                        (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,auVar83);
    puVar19[0x2f] = (longlong)(int)(fVar2 * (float)(longlong)puVar19[0x2f]);
    auVar83.piece<0,4>() = auVar87.piece<0,4>() + auVar88.piece<0,4>();
    auVar83.piece<8,8>() = auVar88.piece<8,8>();
    auVar83.piece<4,4>() = auVar87.piece<4,4>() + auVar88.piece<4,4>();
    auVar72.piece<0,8>() = auVar83.piece<0,8>();
    auVar72.piece<12,4>() = auVar88.piece<12,4>();
    auVar72.piece<8,4>() = auVar87.piece<8,4>() + auVar88.piece<8,4>();
    auVar86.piece<0,12>() = auVar72.piece<0,12>();
    auVar86.piece<12,4>() = auVar87.piece<12,4>() + auVar72.piece<12,4>();
    lVar44 = 0x800 - (ulonglong)*(uint *)((int)puVar19 + 0x17c);
    uVar48 = lVar44 + (ulonglong)*(uint *)((int)puVar19 + 0x17c);
    lVar24 = GetIconFrameTex(0xe999,iVar43);
    iVar30 = TexturePointerArray;
    uVar32 = EffectTexHeaders;
    iVar43 = (int)lVar26;
    puVar19[0x2f] = (longlong)iVar43;
    puVar31 = (undefined4 *)(uVar32 + *(int *)(iVar30 + (int)(lVar24 << 2)) * 0x24);
    uVar9 = puVar31[1];
    uVar10 = puVar31[2];
    uVar11 = puVar31[3];
    *(undefined4 *)(puVar19 + 0x13) = *puVar31;
    *(undefined4 *)((int)puVar19 + 0x9c) = uVar9;
    *(undefined4 *)(puVar19 + 0x14) = uVar10;
    *(undefined4 *)((int)puVar19 + 0xa4) = uVar11;
    uVar9 = puVar31[5];
    uVar10 = puVar31[6];
    uVar11 = puVar31[7];
    *(undefined4 *)(puVar19 + 0x15) = puVar31[4];
    *(undefined4 *)((int)puVar19 + 0xac) = uVar9;
    *(undefined4 *)(puVar19 + 0x16) = uVar10;
    *(undefined4 *)((int)puVar19 + 0xb4) = uVar11;
    *(undefined4 *)(puVar19 + 0x17) = puVar31[8];
    *(undefined4 *)(puVar19 + 0x14) = 0x10101;
    iVar35 = (int)lVar44;
    auVar72 = loadVectorLeftIndexed(0xc,0xe2dc8);
    dVar65 = (double)(longlong)puVar19[0x2f];
    auVar83 = ZEXT416(0xffffffff);
    auVar76 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar85,0);
    puVar19[0x2f] = (longlong)(int)(dVar65 * 0.0625);
    puVar19[0x2f] = (longlong)iVar35;
    auVar88 = vectorConvertFromSignedFixedPointWord(auVar89,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar82 = vectorConvertFromSignedFixedPointWord(auVar87,0);
    auVar83 = auVar72 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar72 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar80 = vectorConvertFromSignedFixedPointWord(auVar86,0);
    auVar83 = ZEXT416(0xffffffff);
    auVar71 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar76 = vectorShiftLeftIntegerWord(auVar76,auVar76);
    auVar83 = ZEXT416(0xffffffff);
    auVar79 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar71 = vectorShiftLeftIntegerWord(auVar71,auVar71);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar73,auVar72,auVar76);
    dVar64 = (double)(longlong)puVar19[0x2f];
    auVar76 = vectorShiftLeftIntegerWord(auVar79,auVar79);
    auVar74 = vectorMultiplyAddFloatingPoint(auVar88,auVar72,auVar83);
    auVar71 = vectorMultiplyAddFloatingPoint(auVar82,auVar72,auVar71);
    auVar83 = vectorMultiplyAddFloatingPoint(auVar80,auVar72,auVar76);
    auVar72 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
    puVar19[0x2f] = (longlong)(int)(dVar64 * 0.0625);
    puVar19[0x2f] = (longlong)(int)uVar45;
    auVar73 = vectorConvertToSignedFixedPointWordSaturate(auVar73,0);
    auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar71,0);
    auVar83 = vectorConvertToSignedFixedPointWordSaturate(auVar83,0);
    auVar72 = vectorConvertFromSignedFixedPointWord(auVar72,0);
    uVar56 = puVar19[0x2f];
    auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
    auVar74 = vectorConvertFromSignedFixedPointWord(auVar74,0);
    auVar71 = vectorConvertFromSignedFixedPointWord(auVar83,0);
    puVar19[0x2f] = (longlong)(int)((double)(longlong)uVar56 * 0.0625);
    puVar19[0x2f] = (longlong)(int)uVar48;
    uVar57 = puVar19[0x2f];
    puVar19[0x2f] = (longlong)(int)((double)(longlong)uVar57 * 0.0625);
    puVar19[0x2f] = (longlong)(*(int *)((int)puVar19 + 0x17c) - *(int *)((int)puVar19 + 0x17c));
    uVar58 = puVar19[0x2f];
    puVar19[0x2f] = (longlong)(*(int *)((int)puVar19 + 0x17c) - *(int *)((int)puVar19 + 0x17c));
    uVar59 = puVar19[0x2f];
    puVar19[0x2f] = 0;
    uVar60 = puVar19[0x2f];
    puVar19[0x2f] = 0x400;
    puVar19[0xf] = 0x80;
    Hud_DrawTexQuadF
              ((double)(longlong)((float)(longlong)(dVar65 * 0.0625) - (float)(longlong)uVar58),
               (double)(longlong)((float)(longlong)(dVar64 * 0.0625) - (float)(longlong)uVar59),
               (double)(longlong)
                       ((float)(longlong)((double)(longlong)uVar56 * 0.0625) +
                       (float)(longlong)uVar58),
               (double)(longlong)
                       ((float)(longlong)((double)(longlong)uVar57 * 0.0625) +
                       (float)(longlong)uVar59),(double)(longlong)((float)(longlong)uVar60 - 1024.0)
               ,(double)(longlong)((float)(longlong)uVar60 - 1024.0),
               (double)(longlong)((float)(longlong)puVar19[0x2f] + 1024.0),
               (double)(longlong)((float)(longlong)puVar19[0x2f] + 1024.0),uVar46 - 0x2b8);
    uVar10 = DAT_00902e9c;
    iVar30 = g_NpcBuffer + *(int *)(g_NpcBuffer + 8);
    idol_draw::BindFragmentProgram(DAT_00902e9c,HUD_Pass,0xe);
    idol_draw::SetTextureUnitRegs(HUD_Pass,0,&DAT_00a207e8);
    idol_draw::SetTextureUnitRegs(HUD_Pass,1,iVar30 + 0x6c);
    idol_draw::SetTextureUnitRegs(HUD_Pass,2,iVar30 + 0x90);
    idol_draw::ResetPassState(HUD_Pass);
    auVar83 = auVar72 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar72 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    auVar83 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar74 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    pRVar12 = HUD_Pass->command;
    auVar83 = auVar71 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar71 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    HUD_Pass->command = pRVar12 + 2;
    pRVar13 = HUD_Pass->command;
    HUD_Pass->command = pRVar13 + 6;
    pRVar14 = HUD_Pass->command;
    HUD_Pass->command = pRVar14 + 3;
    pRVar23 = HUD_Pass;
    pRVar14[1] = 0;
    pRVar14[2] = 0;
    pRVar15 = pRVar23->command;
    uVar9 = storeVectorElementWordIndexed(auVar72,4,ZEXT48(pRVar15));
    *(undefined4 *)((uint)(pRVar15 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar74,8,ZEXT48(pRVar15));
    *(undefined4 *)((uint)(pRVar15 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar15 + 3;
    pRVar16 = HUD_Pass->command;
    HUD_Pass->command = pRVar16 + 3;
    pRVar23 = HUD_Pass;
    pRVar16[1] = 0;
    pRVar16[2] = 0x44800000;
    pRVar17 = pRVar23->command;
    uVar9 = storeVectorElementWordIndexed(auVar72,4,ZEXT48(pRVar17));
    *(undefined4 *)((uint)(pRVar17 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar71,8,ZEXT48(pRVar17));
    *(undefined4 *)((uint)(pRVar17 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar17 + 3;
    pRVar23 = HUD_Pass;
    auVar83 = auVar73 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar83 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
    pRVar18 = HUD_Pass->command;
    *pRVar12 = 0x41948;
    pRVar12[1] = 0x80808080;
    pRVar23->command = pRVar18 + 3;
    pRVar23 = HUD_Pass;
    pRVar18[1] = 0x44800000;
    pRVar18[2] = 0x44800000;
    *pRVar13 = 0x400c1714;
    pRVar13[1] = 0;
    pRVar13[2] = 0;
    pRVar13[3] = 0;
    pRVar13[4] = NV4097_SET_BEGIN_END_x1;
    pRVar12 = pRVar23->command;
    pRVar13[5] = 8;
    *pRVar14 = 0x81888;
    *pRVar15 = NV4097_SET_VERTEX_DATA2F_M_x2;
    uVar9 = storeVectorElementWordIndexed(auVar83,4,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar71,8,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar12 + 3;
    pRVar23 = HUD_Pass;
    *pRVar16 = 0x81888;
    *pRVar17 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13 = pRVar23->command;
    *pRVar18 = 0x81888;
    *pRVar12 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar23->command = pRVar13 + 3;
    pRVar23 = HUD_Pass;
    pRVar13[1] = 0x44800000;
    pRVar13[2] = 0;
    pRVar12 = pRVar23->command;
    *pRVar13 = 0x81888;
    uVar9 = storeVectorElementWordIndexed(auVar83,4,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 1) & 0xfffffffc) = uVar9;
    uVar9 = storeVectorElementWordIndexed(auVar74,8,ZEXT48(pRVar12));
    *(undefined4 *)((uint)(pRVar12 + 2) & 0xfffffffc) = uVar9;
    pRVar23->command = pRVar12 + 3;
    pRVar23 = HUD_Pass;
    *pRVar12 = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar12 = pRVar23->command;
    *pRVar12 = NV4097_SET_BEGIN_END_x1;
    pRVar23->command = pRVar12 + 2;
    pRVar23 = HUD_Pass;
    pRVar12[1] = 0;
    idol_draw::BindFragmentProgram(uVar10,pRVar23,0xc);
    uVar27 = idol_draw::Blend(1,5,0x60,3,0,0,0,0);
    SetGSReg(0x16,uVar27);
    if ((DAT_00a204ec != 0) && (DAT_00a204c8 != 0)) {
      iVar39 = 0;
      piVar51 = &DAT_00a204f0;
      iVar53 = (int)uVar45 - iVar43;
      iVar30 = (int)uVar48 - iVar35;
      do {
        if (-1 < *piVar51) {
          puVar19[0x31] = uVar45;
          uVar32 = puVar25[0xc];
          uVar42 = (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * iVar30;
          uVar32 = (uVar32 + (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) *
                             -0x10) * iVar53;
          uVar33 = uVar32 + iVar53;
          uVar36 = uVar42 + iVar30;
          uVar27 = FUN_00502f74_RET_0(0,0,0,0x20,0);
          DrawFlatOverlay
                    (((int)uVar32 >> 4) + (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0) + iVar43,
                     ((int)uVar42 >> 4) + (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0) + iVar35,
                     ((int)uVar33 >> 4) + (uint)((int)uVar33 < 0 && (uVar33 & 0xf) != 0) + iVar43,
                     ((int)uVar36 >> 4) + (uint)((int)uVar36 < 0 && (uVar36 & 0xf) != 0) + iVar35,
                     uVar27,1);
          uVar45 = puVar19[0x31];
        }
        iVar39 = iVar39 + 1;
        piVar51 = piVar51 + 4;
        puVar25 = puVar25 + 4;
      } while (iVar39 < 8);
    }
    iVar30 = g_MapIcons;
    puVar19[0x2d] = uVar45;
    puVar19[0x2c] = uVar48;
    uVar32 = g_ScratchBuf;
    if (iVar30 != 0) {
      auVar83 = loadVectorLeftIndexed(0x14,0xe2dc8);
      lVar24 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
      auVar74 = loadVectorLeftIndexed(0x18,0xe2dc8);
      auVar72 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar71 = loadVectorLeftIndexed(0xb4,lVar24);
      auVar73 = loadVectorRightIndexed(0xc4,lVar24);
      dVar55 = (double)(*(float *)((int)lVar24 + 0xb4) * 2.0 + 5.0);
      auVar83 = ZEXT416(0xffffffff);
      auVar76 = auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60;
      auVar74 = vectorMultiplyAddFloatingPoint
                          (auVar71 | auVar73,
                           auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60,
                           auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
      auVar83 = loadVectorLeftIndexed(0x1c,0xe2dc8);
      auVar83 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar72 = vectorShiftLeftIntegerWord(auVar76,auVar76);
      uVar56 = (ulonglong)g_ScratchBuf;
      dVar70 = (double)(float)(dVar55 * 0.07692307978868484);
      auVar83 = vectorMultiplyAddFloatingPoint
                          (auVar74,auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,
                           auVar72);
      if ((*(ushort *)(iVar30 + 4) & 4) == 0) {
        auVar71 = vectorSubtractUnsignedWordModulo(auVar85,auVar89);
        auVar73 = vectorSubtractUnsignedWordModulo(auVar86,auVar87);
        iVar53 = 0;
        lVar24 = uVar56 + 8;
        auVar72 = loadVectorLeftIndexed(0x20,0xe2dc8);
        lVar26 = uVar56 + 4;
        auVar74 = loadVectorLeftIndexed(0x24,0xe2dc8);
        lVar52 = uVar56 + 0xc;
        auVar76 = vectorConvertFromSignedFixedPointWord(auVar71,0);
        auVar72 = auVar72 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar71 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
        auVar73 = vectorConvertFromSignedFixedPointWord(auVar73,0);
        auVar72 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar72 = auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60;
        uVar57 = uVar56;
        do {
          iVar39 = iVar30 + iVar53;
          if (((*(int *)(iVar39 + 0x24) != 0) && (*(short *)(iVar39 + 6) != 0)) &&
             ((*(ushort *)(iVar39 + 4) & 1) == 0)) {
            auVar74 = loadVectorLeftIndexed(0x28,0xe2dc8);
            auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            if ((*(ushort *)(iVar39 + 4) & 0x80) != 0) {
              auVar74 = loadVectorLeftIndexed(0x2c,0xe2dc8);
              auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
            lVar28 = GetIconFrameTex(dVar55,*(short *)(iVar39 + 6),*(undefined2 *)(iVar39 + 8))
            ;
            iVar30 = g_MapIcons;
            uVar58 = (ulonglong)EffectTexHeaders +
                     (ulonglong)*(uint *)(TexturePointerArray + (int)(lVar28 << 2)) * 0x24 &
                     0xffffffff;
            uVar59 = (ulonglong)(uint)(g_MapIcons + iVar53);
            auVar80 = loadVectorLeftIndexed(0x18,uVar58);
            auVar79 = loadVectorRightIndexed(0x28,uVar58);
            auVar77 = loadVectorLeftIndexed(0x18,uVar59);
            auVar75 = loadVectorRightIndexed(0x28,uVar59);
            auVar81 = loadVectorLeftIndexed(0x1c,uVar59);
            auVar84 = loadVectorRightIndexed(0x2c,uVar59);
            auVar78 = vectorLogicalAnd(auVar80 | auVar79,auVar71);
            auVar79 = vectorShiftRightWord(auVar80 | auVar79,auVar72);
            auVar75 = vectorMultiplyAddFloatingPoint(auVar77 | auVar75,auVar76,auVar88);
            auVar77 = vectorMultiplyAddFloatingPoint(auVar81 | auVar84,auVar73,auVar82);
            auVar80 = auVar83;
            if ((*(ushort *)(g_MapIcons + iVar53 + 4) & 0x200) != 0) {
              lVar28 = ZEXT48(&DAT_00a204c0) + (longlong)(g_MapCurIndex << 2);
              auVar80 = loadVectorLeftIndexed(0xb4,lVar28);
              auVar81 = loadVectorRightIndexed(0xc4,lVar28);
              auVar80 = auVar80 | auVar81;
            }
            auVar81 = ZEXT416(0xffffffff);
            auVar81 = auVar81 | auVar81 << 0x20 | auVar81 << 0x40 | auVar81 << 0x60;
            auVar80 = auVar80 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar79 = vectorConvertFromUnsignedFixedPointWord(auVar79,0);
            auVar78 = vectorConvertFromUnsignedFixedPointWord(auVar78,0);
            auVar81 = vectorShiftLeftIntegerWord(auVar81,auVar81);
            auVar81 = vectorMultiplyAddFloatingPoint
                                (auVar80 | auVar80 << 0x20 | auVar80 << 0x40 | auVar80 << 0x60,
                                 auVar74,auVar81);
            auVar74 = vectorNegativeMultiplySubtractFloatingPoint(auVar81,auVar79,auVar75);
            auVar80 = vectorNegativeMultiplySubtractFloatingPoint(auVar81,auVar78,auVar77);
            auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
            auVar80 = vectorConvertToSignedFixedPointWordSaturate(auVar80,0);
            auVar75 = vectorConvertFromSignedFixedPointWord(auVar74,0);
            auVar77 = vectorConvertFromSignedFixedPointWord(auVar80,0);
            auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar80 = auVar80 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,0,
                               uVar57);
            *(undefined4 *)((uint)uVar57 & 0xfffffffc) = uVar9;
            auVar74 = vectorMultiplyAddFloatingPoint(auVar81,auVar79,auVar75);
            auVar79 = vectorMultiplyAddFloatingPoint(auVar81,auVar78,auVar77);
            auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
            auVar79 = vectorConvertToSignedFixedPointWordSaturate(auVar79,0);
            auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar79 = auVar79 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,0,
                               lVar24);
            *(undefined4 *)((uint)lVar24 & 0xfffffffc) = uVar9;
            uVar9 = storeVectorElementWordIndexed
                              (auVar80 | auVar80 << 0x20 | auVar80 << 0x40 | auVar80 << 0x60,0,
                               lVar26);
            *(undefined4 *)((uint)lVar26 & 0xfffffffc) = uVar9;
            uVar9 = storeVectorElementWordIndexed
                              (auVar79 | auVar79 << 0x20 | auVar79 << 0x40 | auVar79 << 0x60,0,
                               lVar52);
            *(undefined4 *)((uint)lVar52 & 0xfffffffc) = uVar9;
            dVar55 = extraout_f1;
          }
          iVar53 = iVar53 + 0x28;
          lVar24 = lVar24 + 0x10;
          lVar26 = lVar26 + 0x10;
          lVar52 = lVar52 + 0x10;
          uVar57 = uVar57 + 0x10;
        } while ((*(ushort *)(iVar30 + iVar53 + 4) & 4) == 0);
      }
      uVar4 = *(ushort *)(iVar30 + 0x2c);
      puVar19[0x2d] = uVar45;
      puVar19[0x2c] = uVar48;
      iVar53 = iVar30;
      if ((uVar4 & 4) == 0) {
        iVar49 = 0;
        iVar47 = 0;
        iVar39 = iVar30;
        do {
          iVar38 = iVar53 + iVar47;
          if (((*(int *)(iVar38 + 0x24) != 0) && (*(short *)(iVar38 + 6) != 0)) &&
             (((*(ushort *)(iVar38 + 4) & 3) == 0 &&
              (iVar38 = iVar47 + 0x28, (*(ushort *)(iVar53 + iVar38 + 4) & 4) == 0)))) {
            piVar51 = (int *)(iVar49 + uVar32 + 8);
            piVar21 = (int *)(iVar49 + uVar32 + 4);
            piVar22 = (int *)(iVar49 + uVar32 + 0xc);
            uVar45 = uVar56;
            iVar50 = iVar49;
            iVar30 = iVar39;
            do {
              iVar50 = iVar50 + 0x10;
              iVar39 = *(int *)((int)(uVar45 + 0x10) + 8) - *(int *)(uVar32 + iVar49);
              if (0 < iVar39) {
                iVar41 = *piVar51 - *(int *)(uVar32 + iVar50);
                if (0 < iVar41) {
                  iVar20 = (int)uVar45;
                  iVar37 = *(int *)(iVar20 + 0x1c) - *piVar21;
                  if (0 < iVar37) {
                    iVar40 = *piVar22 - *(int *)(iVar20 + 0x14);
                    if (((0 < iVar40) && (*(int *)(iVar53 + iVar38 + 0x24) != 0)) &&
                       ((*(short *)(iVar53 + iVar38 + 6) != 0 &&
                        ((*(ushort *)(iVar53 + iVar38 + 4) & 3) == 0)))) {
                      if (((iVar41 < iVar39) || (iVar37 < iVar39)) || (iVar40 < iVar39)) {
                        if ((iVar37 < iVar41) || (iVar40 < iVar41)) {
                          if (iVar40 < iVar37) {
                            iVar37 = iVar40 >> 1;
                            iVar39 = 0;
                            iVar40 = iVar37 - iVar40;
                            iVar41 = 0;
                          }
                          else {
                            iVar40 = iVar37 >> 1;
                            iVar37 = iVar40 - iVar37;
                            iVar39 = 0;
                            iVar41 = 0;
                          }
                        }
                        else {
                          iVar39 = iVar41 >> 1;
                          iVar37 = 0;
                          iVar41 = iVar39 - iVar41;
                          iVar40 = 0;
                        }
                      }
                      else {
                        iVar41 = iVar39 >> 1;
                        iVar37 = 0;
                        iVar39 = iVar41 - iVar39;
                        iVar40 = 0;
                      }
                      *(int *)(uVar32 + iVar49) = *(int *)(uVar32 + iVar49) + iVar41;
                      *piVar51 = *piVar51 + iVar41;
                      *piVar21 = *piVar21 + iVar40;
                      *piVar22 = *piVar22 + iVar40;
                      iVar30 = g_MapIcons;
                      *(int *)(uVar32 + iVar50) = *(int *)(uVar32 + iVar50) + iVar39;
                      *(int *)(iVar20 + 0x18) = *(int *)(iVar20 + 0x18) + iVar39;
                      *(int *)(iVar20 + 0x14) = *(int *)(iVar20 + 0x14) + iVar37;
                      *(int *)(iVar20 + 0x1c) = *(int *)(iVar20 + 0x1c) + iVar37;
                    }
                  }
                }
              }
              iVar38 = iVar38 + 0x28;
              uVar45 = uVar45 + 0x10;
              iVar53 = iVar30;
              iVar39 = iVar30;
            } while ((*(ushort *)(iVar30 + iVar38 + 4) & 4) == 0);
          }
          iVar47 = iVar47 + 0x28;
          uVar56 = uVar56 + 0x10;
          iVar49 = iVar49 + 0x10;
        } while ((*(ushort *)(iVar53 + iVar47 + 0x2c) & 4) == 0);
      }
      if ((*(ushort *)(iVar53 + 4) & 4) == 0) {
        dVar63 = 256.0;
        dVar62 = 1.5707963705062866;
        dVar61 = 0.5;
        uVar27 = 0x3ff0000000000000;
        uVar57 = 0;
        iVar39 = uVar32 + 4;
        uVar45 = puVar19[0x2b];
        iVar49 = uVar32 + 8;
        iVar47 = uVar32 + 0xc;
        uVar48 = 0x80000000;
        uVar56 = ZEXT48(g_MissionTargets + 0xc);
        iVar38 = iVar30;
        do {
          iVar41 = (int)uVar57;
          iVar50 = iVar41 * 0x28;
          if (*(int *)(iVar53 + iVar50 + 0x24) != 0) {
            iVar53 = iVar38 + iVar50;
            if ((*(ushort *)(iVar53 + 4) & 1) == 0) {
              sVar5 = *(short *)(iVar53 + 6);
              lVar24 = (longlong)*(short *)(iVar53 + 8);
              if (sVar5 != 0) {
                if ((*(ushort *)(iVar53 + 4) & 0x40) != 0) {
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  dVar55 = (double)DrawFlatOverlay_Fixed
                                             (*(int *)(uVar32 + iVar30) + -0x20,
                                              *(int *)(iVar30 + iVar39) + -0x20,
                                              *(int *)(iVar30 + iVar49) + 0x20,
                                              *(int *)(iVar30 + iVar47) + 0x20,uVar48,1);
                  iVar30 = g_MapIcons;
                  iVar38 = g_MapIcons;
                }
                uVar4 = *(ushort *)(iVar38 + iVar50 + 4);
                dVar68 = dVar70;
                if ((uVar4 & 0x200) != 0) {
                  dVar68 = (double)(&g_MapZoom)[g_MapCurIndex];
                }
                if ((uVar4 & 0x100) == 0) {
                  uVar29 = GetIconFrameTex(dVar55,sVar5,lVar24);
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  dVar55 = (double)Hud_DrawTexQuad_v2_Fixed
                                             (uVar29,*(int *)(uVar32 + iVar30),
                                              *(int *)(iVar30 + iVar39),
                                              *(int *)(iVar30 + iVar49) - *(int *)(uVar32 + iVar30),
                                              *(int *)(iVar30 + iVar47) - *(int *)(iVar30 + iVar39),
                                              0x80);
                }
                else {
                  dVar66 = (double)(float)(dVar68 * dVar63);
                  fVar2 = *(float *)(iVar38 + iVar50 + 0x20);
                  dVar67 = (double)fVar2;
                  dVar55 = dVar66;
                  if ((uVar4 & 0x400) != 0) {
                    dVar67 = (double)FastWrapRot(fVar2,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264d4 * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264d8 * dVar68);
                    iVar38 = g_MapIcons;
                    iVar30 = g_MapIcons;
                    if ((*(uint *)((int)uVar56 +
                                  (int)((longlong)*(short *)(g_MapIcons + iVar50) << 4)) & 2) != 0)
                    {
                      lVar24 = lVar24 + 1;
                    }
                  }
                  if ((*(ushort *)(iVar38 + iVar50 + 4) & 0x800) != 0) {
                    dVar67 = (double)FastWrapRot((float)dVar67,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264cc * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264d0 * dVar68);
                    iVar30 = g_MapIcons;
                    if ((*(uint *)((int)uVar56 +
                                  (int)((longlong)*(short *)(g_MapIcons + iVar50) << 4)) & 2) != 0)
                    {
                      lVar24 = lVar24 + 1;
                    }
                  }
                  if ((*(ushort *)(iVar30 + iVar50 + 4) & 0x1000) != 0) {
                    dVar67 = (double)FastWrapRot((float)dVar67,(float)dVar62);
                    dVar55 = (double)(float)((double)DAT_007264dc * dVar68);
                    dVar66 = (double)(float)((double)DAT_007264e0 * dVar68);
                  }
                  iVar30 = (int)((uVar57 & 0xfffffff) << 4);
                  puVar19[0x2f] = (longlong)(*(int *)(uVar32 + iVar30) + *(int *)(iVar30 + iVar49));
                  uVar58 = puVar19[0x2f];
                  puVar19[0x2f] = (longlong)(*(int *)(iVar30 + iVar39) + *(int *)(iVar30 + iVar47));
                  dVar69 = (double)(float)((double)(longlong)uVar58 * dVar61);
                  dVar68 = (double)(float)((double)(longlong)puVar19[0x2f] * dVar61);
                  iVar30 = GetIconFrameTex((double)(longlong)puVar19[0x2f],sVar5,lVar24);
                  Hud_GetTexIndex(iVar30);
                  dVar55 = (double)Hud_DrawTexQuadF_v4_Fixed
                                             (dVar69,dVar68,dVar55,dVar66,dVar67);
                }
                iVar50 = g_MapIcons + iVar50;
                iVar38 = g_MapIcons;
                iVar30 = g_MapIcons;
                if ((*(ushort *)(iVar50 + 4) & 0x10) != 0) {
                  sVar5 = *(short *)(iVar50 + 0x12);
                  sVar6 = *(short *)(iVar50 + 0xe);
                  sVar7 = *(short *)(iVar50 + 0x10);
                  sVar8 = *(short *)(iVar50 + 0x14);
                  uVar33 = (uint)sVar6;
                  iVar30 = (int)uVar33 >> 1;
                  if (sVar5 == 0) {
                    iVar53 = (int)((uVar57 & 0xffffffff) << 4);
                    iVar53 = (*(int *)(uVar32 + iVar53) + *(int *)(iVar53 + iVar49) >> 5) -
                             (iVar30 + (uint)((int)uVar33 < 0 && (uVar33 & 1) != 0));
                  }
                  else {
                    if (sVar5 < 1) {
                      iVar53 = *(int *)(uVar32 + (int)((uVar57 & 0xffffffff) << 4));
                    }
                    else {
                      iVar53 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar49);
                    }
                    iVar53 = ((iVar53 >> 4) -
                             (iVar30 + (uint)((int)uVar33 < 0 && (uVar33 & 1) != 0))) + (int)sVar5;
                  }
                  uVar42 = (uint)sVar7;
                  if (sVar8 == 0) {
                    iVar38 = (int)((uVar57 & 0xffffffff) << 4);
                    iVar38 = (*(int *)(iVar38 + iVar39) + *(int *)(iVar38 + iVar47) >> 5) -
                             (((int)uVar42 >> 1) + (uint)((int)uVar42 < 0 && (uVar42 & 1) != 0));
                  }
                  else {
                    if (sVar8 < 1) {
                      iVar38 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar39);
                    }
                    else {
                      iVar38 = *(int *)((int)((uVar57 & 0xffffffff) << 4) + iVar47);
                    }
                    iVar38 = ((iVar38 >> 4) -
                             (((int)uVar42 >> 1) + (uint)((int)uVar42 < 0 && (uVar42 & 1) != 0))) +
                             (int)sVar8;
                  }
                  puVar19[0x32] = uVar48;
                  puVar19[0x31] = uVar56;
                  lVar26 = (longlong)sVar7 + (longlong)iVar38;
                  lVar24 = (longlong)iVar53 + (longlong)sVar6;
                  DrawRoundedRect
                            ((longlong)iVar38,(int)lVar26,(longlong)iVar53,(int)lVar24,0x40);
                  Map_GetIconLabel(iVar41,(char *)(uVar46 - 0x278));
                  *(undefined2 *)(puVar19 + 0x19) = 0;
                  *(undefined2 *)((int)puVar19 + 0xca) = 0;
                  *(undefined2 *)((int)puVar19 + 0xcc) = 0xf;
                  *(short *)((int)puVar19 + 0xce) = (short)uVar45;
                  *(undefined2 *)(puVar19 + 0x1a) = 0;
                  *(undefined2 *)((int)puVar19 + 0xd2) = 0;
                  *(short *)((int)puVar19 + 0xbc) = (short)iVar38;
                  *(short *)((int)puVar19 + 0xbe) = (short)lVar26;
                  *(short *)(puVar19 + 0x18) = (short)iVar53;
                  *(short *)((int)puVar19 + 0xc2) = (short)lVar24;
                  *(ushort *)((int)puVar19 + 0xc4) =
                       (short)iVar53 +
                       (short)iVar30 + (ushort)((int)uVar33 < 0 && (uVar33 & 1) != 0);
                  *(short *)((int)puVar19 + 0xc6) = (short)iVar38 + 4;
                  dVar55 = (double)FontPrintOpt(uVar27,uVar46 - 0x294,0x80ffa888,
                                                      uVar46 - 0x278,0xffffffffffffffff);
                  uVar56 = puVar19[0x31];
                  uVar48 = puVar19[0x32];
                  iVar38 = g_MapIcons;
                  iVar30 = g_MapIcons;
                }
              }
            }
          }
          uVar57 = (ulonglong)(iVar41 + 1);
          iVar53 = iVar38;
        } while ((*(ushort *)(iVar38 + (int)(uVar57 << 5) + (int)(uVar57 << 3) + 4) & 4) == 0);
      }
    }
    uVar45 = puVar19[0x2c];
    uVar46 = puVar19[0x2d];
    if (Level == g_MapCurIndex) {
      iVar30 = GetIconFrameTex(0xe99a,5);
      puVar25 = &DAT_00a204c0 + g_MapCurIndex;
      dVar55 = (double)g_heroRotation.z;
      dVar70 = (double)(((&g_MapZoom)[g_MapCurIndex] * 4.0 + 10.0) * 0.75 * 0.07692308);
      if (g_heroStateType == 0xf) {
        dVar55 = (double)FastWrapRot(g_heroRotation.z,1.5707964);
      }
      if (g_MapAlt == 0) {
        Map_WorldToMapCoords
                  (g_heroPosition.x,g_heroPosition.y,0,(int)puVar25,(float *)(puVar19 + 0x10),
                   (float *)((int)puVar19 + 0x84),Level);
      }
      else {
        Map_WorldToMapCoords
                  (g_heroPosition.x,g_heroPosition.y,Level,(int)puVar25,(float *)(puVar19 + 0x10),
                   (float *)((int)puVar19 + 0x84),Level + 100);
        dVar55 = (double)FastWrapRot((float)dVar55,1.5707964);
      }
      auVar83 = vectorSubtractUnsignedWordModulo(auVar85,auVar89);
      auVar74 = vectorSubtractUnsignedWordModulo(auVar86,auVar87);
      auVar83 = vectorConvertFromSignedFixedPointWord(auVar83,0);
      auVar72 = loadVectorLeftIndexed(0x80,lVar34);
      puVar19[0x2f] = (longlong)((int)uVar46 - iVar43);
      fVar2 = *(float *)(puVar19 + 0x10);
      fVar3 = *(float *)((int)puVar19 + 0x84);
      auVar83 = vectorMultiplyAddFloatingPoint(auVar72,auVar83,auVar88);
      auVar72 = vectorConvertFromSignedFixedPointWord(auVar74,0);
      auVar74 = loadVectorLeftIndexed(0x84,lVar34);
      uVar48 = puVar19[0x2f];
      auVar83 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,0x80,lVar34);
      *(undefined4 *)(puVar19 + 0x10) = uVar9;
      puVar19[0x2f] = (longlong)((int)uVar45 - iVar35);
      cVar1 = *(char *)((int)puVar19[0x2e] + 4);
      auVar83 = vectorMultiplyAddFloatingPoint(auVar74,auVar72,auVar82);
      fVar2 = (float)((double)fVar2 * (double)(longlong)uVar48 + dVar65);
      auVar83 = auVar83 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar83 | auVar83 << 0x20 | auVar83 << 0x40 | auVar83 << 0x60,0x84,lVar34);
      *(undefined4 *)((int)puVar19 + 0x84) = uVar9;
      fVar3 = (float)((double)fVar3 * (double)(longlong)puVar19[0x2f] + dVar64);
      if (cVar1 != '\0') {
        uVar27 = 0x3ff921fb60000000;
        dVar64 = (double)FastWrapRot((float)dVar55,1.5707964);
        dVar55 = (double)FastDiffRots(-dVar64,uVar27);
        fVar2 = *(float *)(puVar19 + 0x10);
        fVar3 = *(float *)((int)puVar19 + 0x84);
      }
      dVar65 = (double)fVar3;
      dVar64 = (double)fVar2;
      dVar70 = (double)(float)(dVar70 * 256.0);
      Hud_GetTexIndex(iVar30);
      Hud_DrawTexQuadF_v4_Fixed(dVar64,dVar65,dVar70,dVar70,dVar55);
    }
    STUB_0006d708();
    if (DAT_00a204dc != (float *)0x0) {
      STUB_0006d704(0);
      pfVar54 = DAT_00a204dc;
      uVar48 = (ulonglong)DAT_00a20570;
      if (DAT_00a20570 != 0) {
        lVar34 = uVar45 - lVar44;
        puVar19[0x2f] = (longlong)((int)uVar46 - iVar43);
        uVar46 = puVar19[0x2f];
        puVar19[0x2f] = (longlong)(int)lVar34;
        dVar65 = (double)(longlong)uVar46;
        dVar64 = (double)(longlong)puVar19[0x2f];
        uVar46 = (longlong)(int)lVar34;
        do {
          uVar48 = uVar48 - 1;
          Map_WorldToMapCoords
                    (*pfVar54,pfVar54[1],(int)uVar46,(int)lVar34,(float *)(puVar19 + 0x12),
                     (float *)((int)puVar19 + 0x94),Level);
          puVar19[0x2f] = (longlong)(int)((double)*(float *)(puVar19 + 0x12) * dVar65);
          puVar19[0x2f] = (longlong)(int)((double)*(float *)((int)puVar19 + 0x94) * dVar64);
          iVar30 = *(int *)((int)puVar19 + 0x17c) + iVar43;
          lVar34 = (ulonglong)*(uint *)((int)puVar19 + 0x17c) + lVar44;
          if (((-0x19a < iVar30) && (iVar35 = (int)lVar34, -0x19a < iVar35)) &&
             ((iVar30 < 0x219a && ((iVar35 < 0x1b9a && (pfVar54[2] == -NAN)))))) {
            lVar34 = (longlong)(iVar35 - DAT_007264e4);
            DrawFlatOverlay
                      (iVar30 - DAT_007264e4,lVar34,DAT_007264e4 + iVar30,DAT_007264e4 + iVar35,
                       pfVar54[3],1);
          }
          pfVar54 = pfVar54 + 4;
          uVar46 = uVar48;
        } while ((int)uVar48 != 0);
      }
      STUB_0006d708();
    }
  }
  return;
}


// 0x00e4648 (0x2d8 bytes)
void Map_DecodeLayer(int param_1,int param_2,short *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  
  pbVar4 = g_ScratchBuf;
  uVar5 = 0;
  do {
    iVar18 = 0x200;
    if (uVar5 != 0) {
      iVar18 = (int)param_3[-1];
    }
    iVar18 = iVar18 + param_2;
    iVar6 = 0;
    bVar3 = false;
    iVar17 = (((*param_3 + param_2) - iVar18) * 2) / 3;
    if (0 < iVar17) {
      uVar10 = 0;
      pbVar16 = pbVar4;
      do {
        uVar11 = (ulonglong)*(byte *)(iVar18 + ((int)uVar10 >> 1));
        uVar12 = (uVar11 << 0x20) >> 0x24;
        uVar8 = (ulonglong)*(byte *)(((int)uVar10 >> 1) + iVar18 + 1);
        lVar9 = uVar8 + (ZERO_MASK((uVar10 & 1)) &
                        ((uVar8 & 0xf) << 4 | uVar12) - uVar8);
        uVar12 = uVar12 + (ZERO_MASK((uVar10 & 1)) & (uVar11 & 0xf) - uVar12);
        lVar9 = lVar9 + (ZERO_MASK((int)lVar9) & 0x100U - lVar9);
        pbVar14 = pbVar16;
        if (bVar3) {
          pbVar14 = pbVar16 + 1;
          bVar3 = false;
          lVar9 = lVar9 + -1;
          *pbVar16 = *pbVar16 | (byte)((uVar12 & 0xffffffff) << 4);
        }
        pbVar16 = pbVar14;
        if ((int)lVar9 != 0) {
          do {
            pbVar15 = pbVar14;
            *pbVar15 = (byte)((uVar12 & 0xffffffff) << 4) | (byte)uVar12 & 0xf;
            lVar9 = lVar9 + -2;
            pbVar14 = pbVar15 + 1;
          } while (0 < (int)lVar9);
          pbVar16 = pbVar15 + 1;
          if ((int)lVar9 != 0) {
            bVar3 = true;
            *pbVar15 = (byte)uVar12;
            pbVar16 = pbVar15;
          }
        }
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 + 3;
      } while (iVar6 < iVar17);
    }
    iVar17 = 0;
    iVar18 = 0;
    puVar13 = (undefined4 *)
              (param_1 +
              uVar5 * 4 +
              ((int)uVar5 >> 4) * 0x7c0 + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0) * -0x40 +
              (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0) * 0x800);
    do {
      uVar10 = 0;
      uVar12 = 0;
      puVar7 = puVar13;
      do {
        bVar1 = pbVar4[((int)uVar10 >> 1) + iVar18];
        uVar2 = (uint)(bVar1 >> 4);
        uVar8 = uVar12 | (uint)(1 << (uVar10 & 0x3f));
        uVar12 = uVar8 + (ZERO_MASK((uVar2 + ((uint)((LZCOUNT(-(uVar10 & 1)) << 0x3a) >> 0x3f) &
                                             (bVar1 & 0xf) - uVar2))) &
                         uVar12 - uVar8);
        if ((uVar10 & 0x1f) == 0x1f) {
          puVar7 = puVar7 + 1;
          *puVar13 = (int)uVar12;
          uVar12 = 0;
          puVar13 = puVar7;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x20);
      iVar17 = iVar17 + 1;
      puVar13 = puVar13 + 0xf;
      iVar18 = iVar18 + 0x10;
    } while (iVar17 < 0x20);
    uVar5 = uVar5 + 1;
    param_3 = param_3 + 1;
  } while ((int)uVar5 < 0x100);
  return;
}


// 0x00e4928 (0x250 bytes)
void Map_RevealAroundPos(float *pos)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float local_50;
  float local_4c [5];
  
  if (g_MapLoaded != 0) {
    if (g_MapAlt == 0) {
      Map_WorldToMapCoords(*pos,pos[1],(int)pos,0x970000,&local_50,local_4c,Level);
    }
    else {
      Map_WorldToMapCoords(*pos,pos[1],(int)pos,Level,&local_50,local_4c,Level + 100);
    }
    uVar1 = (uint)(local_50 * 512.0);
    uVar2 = (uint)(local_4c[0] * 512.0);
    lVar8 = (ulonglong)uVar1 + 1;
    lVar10 = (ulonglong)uVar2 + 1;
    uVar9 = (uint)lVar8;
    uVar3 = (uint)lVar10;
    if (((int)uVar9 < 0x200 && -1 < (int)(uVar9 | uVar3)) && ((int)uVar3 < 0x200)) {
      uVar11 = (ulonglong)uVar2 - 0xf;
      iVar6 = ((uint)((longlong)(int)(uVar2 + 0x11) + -0x1ff >> 0x3f) & uVar2 - 0x1ee) + 0x1ff;
      uVar7 = (ulonglong)uVar1 - 0xf;
      uVar11 = -(longlong)(int)uVar11 >> 0x3f & uVar11;
      iVar5 = ((uint)((longlong)(int)(uVar1 + 0x11) + -0x1ff >> 0x3f) & uVar1 - 0x1ee) + 0x1ff;
      if ((int)uVar11 < iVar6) {
        lVar12 = uVar11 << 9;
        lVar10 = uVar11 - lVar10;
        do {
          uVar13 = -(longlong)(int)uVar7 >> 0x3f & uVar7;
          if ((int)uVar13 < iVar5) {
            lVar15 = uVar13 - lVar8;
            lVar14 = uVar13 + lVar12;
            do {
              if (SQRT((float)(longlong)((int)lVar15 * (int)lVar15 + (int)lVar10 * (int)lVar10)) <=
                  16.0) {
                pbVar4 = (byte *)(g_MapRevealMask + ((int)(uint)lVar14 >> 3));
                *pbVar4 = *pbVar4 | (byte)(1 << ((uint)lVar14 & 7));
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 1;
            } while ((int)uVar13 < iVar5);
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 1;
          lVar12 = lVar12 + 0x200;
        } while ((int)uVar11 < iVar6);
      }
    }
  }
  return;
}


// 0x00e4b78 (0x94 bytes)
void Map_RevealRect(int x,int y,int w,int h)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = (longlong)y;
  lVar2 = (longlong)x;
  if (y < h + y) {
    lVar7 = lVar3 << 9;
    do {
      if (x < (int)(w + lVar2)) {
        lVar5 = lVar2 + lVar7;
        lVar4 = (w + lVar2) - lVar2;
        do {
          uVar6 = (uint)lVar5;
          lVar4 = lVar4 + -1;
          pbVar1 = (byte *)(g_MapRevealMask + ((int)uVar6 >> 3));
          lVar5 = lVar5 + 1;
          *pbVar1 = *pbVar1 | (byte)(1 << (uVar6 & 7));
        } while (0 < (int)lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0x200;
    } while ((int)lVar3 < h + y);
  }
  return;
}


// 0x00e4c0c (0x7c bytes)
void Map_SaveRevealMask(char *out)

{
  if (g_MapLoaded == 0) {
    FastMemSet(out,0,0x8000);
  }
  else {
    memcpy(out,(void *)g_MapRevealMask,0x8000);
    *out = '\x01';
  }
  return;
}


// 0x00e4c88 (0x3e0 bytes)
void Map_DecompressMapImage(longlong param_1,byte *param_2,byte *param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar3;
  byte *pbVar8;
  longlong lVar7;
  byte bVar10;
  int iVar9;
  uint uVar11;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  byte *pbVar12;
  ulonglong unaff_r25;
  ulonglong uVar13;
  ulonglong unaff_r26;
  ulonglong uVar14;
  ulonglong unaff_r27;
  byte *pbVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  byte *pbVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar7 = uVar14 - 0x500;
  puVar1 = (ulonglong *)lVar7;
  *puVar1 = uVar14;
  puVar1[0xa2] = in_LR;
  puVar1[0x97] = unaff_r23;
  puVar1[0x9b] = unaff_r27;
  puVar1[0x9f] = unaff_r31;
  iVar17 = g_MapLoaded;
  puVar1[0x9e] = unaff_r30;
  puVar1[0x9d] = unaff_r29;
  puVar1[0x9c] = unaff_r28;
  puVar1[0x9a] = unaff_r26;
  puVar1[0x99] = unaff_r25;
  puVar1[0x98] = unaff_r24;
  pbVar2 = g_ScratchBuf;
  if (iVar17 != 0) {
    if ((*param_2 & 1) == 0) {
      uVar4 = 0;
      iVar17 = 0;
      do {
        uVar11 = 0;
        iVar9 = (int)lVar7;
        *(undefined4 *)(iVar9 + 0xb0) = 0;
        if ((uVar4 & 1) != 0) {
          uVar11 = 0xf;
          *(undefined4 *)(iVar9 + 0xb0) = 0xf;
        }
        if ((uVar4 & 2) != 0) {
          uVar11 = uVar11 | 0xf0;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 4) != 0) {
          uVar11 = uVar11 | 0xf00;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 8) != 0) {
          uVar11 = uVar11 | 0xf000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x10) != 0) {
          uVar11 = uVar11 | 0xf0000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar11 = uVar11 | 0xf00000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar11 = uVar11 | 0xf000000;
          *(uint *)(iVar9 + 0xb0) = uVar11;
        }
        if ((uVar4 & 0x80) != 0) {
          *(uint *)(iVar9 + 0xb0) = uVar11 | 0xf0000000;
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 4;
      } while ((int)uVar4 < 0x100);
      do {
        lVar3 = uVar14 - 0x490;
        lVar18 = 0x10;
        lVar7 = lVar3;
        do {
          bVar10 = *param_2;
          param_2 = param_2 + 1;
          *(undefined4 *)lVar7 = *(undefined4 *)((int)puVar1 + (uint)bVar10 * 4 + 0xb0);
          lVar7 = lVar7 + 4;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        FastMemCopy(param_1,lVar3,0x40);
        FastMemCopy(param_1 + 0x40,lVar3,0x40);
        FastMemCopy(param_1 + 0x80,lVar3,0x40);
        FastMemCopy(param_1 + 0xc0,lVar3,0x40);
        iVar17 = iVar17 + 1;
        param_1 = param_1 + 0x100;
      } while (iVar17 < 0x80);
    }
    else {
      pbVar15 = param_2 + 1;
      iVar17 = (int)param_1;
      pbVar16 = g_ScratchBuf + 0x2000;
      uVar14 = ((ulonglong)*param_2 << 0x20) >> 0x21;
      FastMemSet(g_ScratchBuf,0,0x2400);
      uVar13 = 1;
      pbVar12 = pbVar2;
      while( true ) {
        do {
          pbVar6 = param_3 + 1;
          uVar4 = (uint)*pbVar6;
          pbVar12 = pbVar12 + *param_3;
          param_3 = param_3 + 2;
          if (*pbVar6 != 0) {
            do {
              if ((int)uVar14 == 0) {
                do {
                  bVar10 = *pbVar15;
                  uVar14 = (ulonglong)bVar10;
                  pbVar15 = pbVar15 + 1;
                  uVar13 = (ulonglong)(LZCOUNT((int)uVar13) << 0x20) >> 0x25;
                } while (bVar10 == 0);
              }
              uVar4 = uVar4 - 1;
              *pbVar12 = (byte)uVar13;
              uVar14 = uVar14 - 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar4 != 0);
          }
          pbVar6 = pbVar2;
          pbVar8 = pbVar2;
        } while (pbVar12 < pbVar2 + 0x2000);
        do {
          bVar10 = *pbVar6;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[1] << 1;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[2] << 2;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[3] << 3;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[4] << 4;
          *pbVar8 = bVar10;
          bVar10 = bVar10 | pbVar6[5] << 5;
          *pbVar8 = bVar10;
          pbVar5 = pbVar6 + 8;
          *pbVar8 = bVar10 | pbVar6[6] << 6;
          *pbVar8 = *pbVar8 | pbVar6[7] << 7;
          pbVar6 = pbVar5;
          pbVar8 = pbVar8 + 1;
        } while (pbVar5 < pbVar2 + 0x2000);
        FastMemCopy(param_1,pbVar2,0x400);
        param_1 = param_1 + 0x400;
        if ((int)param_1 == iVar17 + 0x8000) break;
        FastMemSet(pbVar2,0,0x2000);
        if (pbVar2 + 0x2000 < pbVar12) {
          iVar9 = (int)pbVar12 - (int)pbVar16;
          pbVar6 = pbVar16;
          pbVar8 = pbVar2;
          do {
            iVar9 = iVar9 + -1;
            bVar10 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            *pbVar8 = bVar10;
            pbVar8 = pbVar8 + 1;
          } while (0 < iVar9);
        }
        FastMemSet(pbVar16,0,0x400);
        pbVar12 = pbVar12 + -0x2000;
      }
    }
  }
  return;
}


// 0x00e5068 (0x40 bytes)
void Map_RegisterLevelObject(void *obj,int idx)

{
  if ((int)Level < 0x13) {
    *(void **)(&g_MissionMobys + (idx + *(int *)(&DAT_00738138 + Level * 4)) * 4) = obj;
  }
  return;
}


// 0x00e50a8 (0x14 bytes)
void Map_SetIconSource(void *a,int b)

{
  DAT_00a204dc = a;
  DAT_00a20570 = b;
  return;
}


// 0x00e50bc (0xa0 bytes)
// strings: 0096c24c: 'None'


void Map_SaveLevelObjectState(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (Level < (Veldin2|Novalis)) {
    uVar3 = *(uint *)(&DAT_00738138 + Level * 4);
    iVar1 = *(int *)(&DAT_0073813c + Level * 4);
    if ((int)uVar3 < iVar1) {
      lVar6 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
      lVar4 = ((ulonglong)uVar3 & 0xfffffff) << 4;
      do {
        iVar2 = *(int *)(&g_MissionMobys + (int)lVar6);
        if (iVar2 != 0) {
          iVar5 = (int)lVar4;
          *(undefined4 *)(g_MissionTargets + iVar5) = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)(g_MissionTargets + iVar5 + 4) = *(undefined4 *)(iVar2 + 0x14);
          *(undefined4 *)(g_MissionTargets + iVar5 + 8) = *(undefined4 *)(iVar2 + 0x48);
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 4;
        lVar4 = lVar4 + 0x10;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}


// 0x00e515c (0x34 bytes)
ulonglong Map_RegionVisible_e515c(longlong param_1,longlong param_2)

{
  return (ulonglong)((param_2 + -0xdb) * 0x56 + (param_1 + -0xd3) * -0x1e << 0x20) >> 0x3f;
}


// 0x00e5190 (0x1c bytes)
ulonglong Map_RegionVisible_e5190(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field12_0xc) << 0x20) >> 0x25 ^ 1;
}


// 0x00e51ac (0x1c bytes)
ulonglong Map_RegionVisible_e51ac(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field13_0xd) << 0x20) >> 0x25 ^ 1;
}


// 0x00e51c8 (0x1c bytes)
ulonglong Map_RegionVisible_e51c8(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field21_0x15) << 0x20) >> 0x25 ^ 1;
}


// 0x00e51f0 (0x98 bytes)
undefined8
Map_RegionVisible_e51f0
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = 0;
  uVar2 = 0;
  if ((g_heroStateType == 0x11 || g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = 1;
  }
  if (((199 < param_5) || (param_3 < 39.5)) || ((bool)(bVar1 | 42.5 < param_3))) {
    if (((199 < param_5) && (87.0 <= param_3)) && (g_heroStateType != 0x10)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// 0x00e5290 (0x78 bytes)
undefined8
Map_RegionVisible_e5290(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 < 0x100) && (g_MiscLevelFlags.field14_0xe != 0)) {
    uVar1 = 1;
  }
  else if ((param_4 < 0x100) ||
          (((param_3 < 58.0 || (86.0 < param_3)) || (g_heroStateType == 0x10)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e5310 (0x60 bytes)
undefined8
Map_RegionVisible_e5310(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x100) {
    uVar1 = 0;
    if ((g_heroStateType == 0x11 || g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01')
       ) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (95.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e5370 (0x14 bytes)
ulonglong Map_RegionVisible_e5370(void)

{
  return (ulonglong)(LZCOUNT(DAT_00a20824) << 0x20) >> 0x25;
}


// 0x00e5384 (0x1c bytes)
ulonglong Map_RegionVisible_e5384(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field28_0x1c) << 0x20) >> 0x25 ^ 1;
}


// 0x00e53a0 (0x1c bytes)
ulonglong Map_RegionVisible_e53a0(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field29_0x1d) << 0x20) >> 0x25 ^ 1;
}


// 0x00e53bc (0x1c bytes)
ulonglong Map_RegionVisible_e53bc(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field30_0x1e) << 0x20) >> 0x25 ^ 1;
}


// 0x00e53d8 (0x1c bytes)
ulonglong Map_RegionVisible_e53d8(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field31_0x1f) << 0x20) >> 0x25 ^ 1;
}


// 0x00e53f4 (0x1c bytes)
ulonglong Map_RegionVisible_e53f4(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field37_0x25) << 0x20) >> 0x25 ^ 1;
}


// 0x00e5420 (0x2b0 bytes)
undefined8
Map_RegionVisible_e5420(double param_1,double param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if ((param_5 + -0x16f) * -0x102 + (param_4 + -0x189) * 0x82 < 0) {
    if ((((param_5 + -0x146) * 0x116 + (param_4 + -0x75) * -0x86 < 0) &&
        ((param_5 + -0x130) * -0x91 < 0)) && (43.900001525878906 <= param_3)) {
      return 1;
    }
    uVar1 = 0;
  }
  else if ((param_5 + -0xcd) * -0xbf + (param_4 + -0x191) * -0x6e < 0) {
    if (7.0 < SQRT((float)(param_1 - 337.5) * (float)(param_1 - 337.5) +
                   (float)(param_2 - 250.0) * (float)(param_2 - 250.0))) {
      if (((param_5 + -0x12a) * 0x31 + (param_4 + -0x142) * 0x2e < 0) && (DAT_00a20830 != 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    if ((((g_heroStateType == 0x11 || g_heroStateType == 0x12) ||
         (DAT_0096afc4 == '\x01')) && ((param_5 + -0xb8) * 0xf + (param_4 + -299) * -0x3a < 0)) &&
       ((((param_5 + -0xed) * 0x35 + (param_4 + -0x130) * 0x22 < 0 &&
         ((param_5 + -0xdc) * -0x26 + (param_4 + -0x161) * 0x2c < 0)) &&
        ((param_5 + -0xa8) * -0x3d + (param_4 + -0x156) * -0x29 < 0)))) {
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// 0x00e56d8 (0x13c bytes)
undefined8
Map_RegionVisible_e56d8
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = false;
  if ((g_heroStateType == 0x11 || g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = true;
  }
  if ((((-1 < (param_5 + -0x168) * 0xef) || (param_5 < 0x135)) || (DAT_00a20828 == 0)) ||
     (param_3 < 47.70000076293945)) {
    if (((bVar1) && ((param_5 + -0x9a) * 0x77 + (param_4 + -0xc5) * -0x47 < 0)) &&
       (((param_5 + -0xc3) * 0x81 + (param_4 + -0xd6) * -2 < 0 &&
        ((param_5 + -0xda) * 0x6a + (param_4 + -0x107) * 0x3a < 0)))) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// 0x00e5814 (0x24c bytes)
undefined8 Map_RegionVisible_e5814(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0xe9) {
    uVar1 = 0;
    if (((((param_2 + -0xa0) * 0x2d + (param_1 + -0x132) * -0x38 < 0) &&
         ((param_2 + -0xd8) * 0x34 + (param_1 + -0x14d) * 0x3e < 0)) &&
        ((param_2 + -0xb4) * -0x4b + (param_1 + -0x182) * 0x21 < 0)) &&
       ((param_2 + -0x8c) * -0x27 + (param_1 + -0x157) * -0x1e < 0)) {
      uVar1 = 1;
    }
  }
  else if (((param_2 + -0x115) * 0xb9 + (param_1 + -0x8f) * -0x36 < 0) ||
          ((param_2 + -0x108) * 0x40 + (param_1 + -0xe7) * -0x5c < 0)) {
    if (((param_2 + -0x15f) * 0x67 + (param_1 + -0xed) * 0x51 < 0) ||
       ((param_2 + -299) * 0xcd + (param_1 + -0xa2) * -0x1c < 0)) {
      if (((param_2 + -0x163) * 0xf + (param_1 + -0x132) * 0x97 < 0) ||
         ((param_2 + -0x108) * 0xde + (param_1 + -0xc2) * -0x26 < 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x00e5a68 (0xc0 bytes)
undefined8
Map_RegionVisible_e5a68
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_5 < 0xbb) {
    uVar1 = 0;
    if (((g_heroStateType != 0x11 && g_heroStateType != 0x12) &&
        (DAT_0096afc4 != '\x01')) && (DAT_00a2083c != 0)) {
      uVar1 = 1;
    }
  }
  else if (((param_3 < 51.5) || (54.0 < param_3)) ||
          (-1 < (param_5 + -0xe5) * 0x1a + (param_4 + -0x10a) * -0x14)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e5b28 (0xa0 bytes)
undefined8 Map_RegionVisible_e5b28(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_00a20834 == 0) {
    uVar1 = 0;
  }
  else if (((param_2 + -0xed) * 199 + (param_1 + -0x99) * -0x2a < 0) ||
          ((param_2 + -0xf7) * 0x2f + (param_1 + -0x10e) * -0x22 < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x00e5bd8 (0x88 bytes)
undefined8
Map_RegionVisible_e5bd8
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_5 < 0x9d) {
    if (((param_3 < 73.5) || (80.0 < param_3)) || (DAT_00a20840 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (((param_3 < 51.5) || (54.0 < param_3)) || (DAT_00a20838 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e5c68 (0xc4 bytes)
undefined8
Map_RegionVisible_e5c68
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((g_heroStateType == 0x11 || g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    uVar1 = 1;
  }
  if (param_5 < 0x105) {
    if ((0xc0 < param_5) && ((param_5 + -0xb8) * 0x7d + (param_4 + -0xd9) * -0x1a < 0)) {
      uVar1 = 0;
    }
  }
  else if ((DAT_00a2082c == 0) || (param_3 < 47.70000076293945)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e5d30 (0xb8 bytes)
undefined8
Map_RegionVisible_e5d30
          (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5)

{
  if ((((g_heroStateType != 0x11 && g_heroStateType != 0x12) && (DAT_0096afc4 != '\x01')
       ) && (71.5 <= param_3)) &&
     ((-1 < (param_5 + -0xe2) * -0x6b + (param_4 + -0x131) * 0x4f &&
      (-1 < (param_5 + -0x89) * -0xbf + (param_4 + -400) * -0x72)))) {
    return 1;
  }
  return 0;
}


// 0x00e5de8 (0x4c bytes)
longlong Map_RegionVisible_e5de8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field53_0x35) << 0x20) >> 0x25 ^ 1;
  return uVar1 + (0x100 - param_2 >> 0x3f &
                 ((ulonglong)(LZCOUNT(g_heroStateType + -0xf) << 0x20) >> 0x25) - uVar1);
}


// 0x00e5e40 (0x4c bytes)
bool Map_RegionVisible_e5e40(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0xe0) {
    bVar1 = 47.75 <= param_3;
  }
  else {
    bVar1 = false;
    if (param_3 < 29.0) {
      bVar1 = true;
    }
  }
  return bVar1;
}


// 0x00e5e98 (0x54 bytes)
undefined8
Map_RegionVisible_e5e98(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xe0) {
    uVar1 = 0;
    if ((44.0 <= param_3) && (param_3 <= 45.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (37.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e5ef8 (0x54 bytes)
undefined8
Map_RegionVisible_e5ef8(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xe0) {
    uVar1 = 0;
    if ((42.0 <= param_3) && (param_3 <= 43.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (39.0 <= param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e5f50 (0x2c bytes)
undefined8
Map_RegionVisible_e5f50(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_4 < 0xe0) && (param_3 <= 38.0)) {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e5f7c (0x1c bytes)
ulonglong Map_RegionVisible_e5f7c(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field48_0x30) << 0x20) >> 0x25 ^ 1;
}


// 0x00e5f98 (0x1c bytes)
ulonglong Map_RegionVisible_e5f98(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field49_0x31) << 0x20) >> 0x25 ^ 1;
}


// 0x00e5fb4 (0x1c bytes)
ulonglong Map_RegionVisible_e5fb4(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field50_0x32) << 0x20) >> 0x25 ^ 1;
}


// 0x00e5fd0 (0x1c bytes)
ulonglong Map_RegionVisible_e5fd0(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field67_0x43) << 0x20) >> 0x25 ^ 1;
}


// 0x00e5fec (0x1c bytes)
ulonglong Map_RegionVisible_e5fec(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field68_0x44) << 0x20) >> 0x25 ^ 1;
}


// 0x00e6008 (0x1c bytes)
ulonglong Map_RegionVisible_e6008(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field69_0x45) << 0x20) >> 0x25 ^ 1;
}


// 0x00e6028 (0x44 bytes)
ulonglong Map_RegionVisible_e6028
                    (undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  ulonglong uVar1;
  
  if (param_4 < 0xbe) {
    uVar1 = 0;
    if (58.5 <= param_3) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field80_0x50) << 0x20) >> 0x25 ^ 1;
  }
  return uVar1;
}


// 0x00e606c (0x1c bytes)
ulonglong Map_RegionVisible_e606c(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field76_0x4c) << 0x20) >> 0x25 ^ 1;
}


// 0x00e6088 (0x1c bytes)
ulonglong Map_RegionVisible_e6088(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field77_0x4d) << 0x20) >> 0x25 ^ 1;
}


// 0x00e60a4 (0x1c bytes)
ulonglong Map_RegionVisible_e60a4(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field78_0x4e) << 0x20) >> 0x25 ^ 1;
}


// 0x00e60c0 (0x1c bytes)
ulonglong Map_RegionVisible_e60c0(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field79_0x4f) << 0x20) >> 0x25 ^ 1;
}


// 0x00e60dc (0x1c bytes)
ulonglong Map_RegionVisible_e60dc(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field81_0x51) << 0x20) >> 0x25 ^ 1;
}


// 0x00e6108 (0x64 bytes)
undefined8
Map_RegionVisible_e6108(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xdd) {
    uVar1 = 0;
    if (((232.0 <= param_3) && (param_3 <= 235.0)) && (g_MiscLevelFlags.field86_0x56 != 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (param_3 <= 180.0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e6178 (0x5c bytes)
bool Map_RegionVisible_e6178(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0xdd) {
    bVar1 = 242.0 <= param_3;
  }
  else {
    bVar1 = false;
    if ((param_3 <= 180.0) && (g_MiscLevelFlags.field87_0x57 != 0)) {
      bVar1 = true;
    }
  }
  return bVar1;
}


// 0x00e61e0 (0x68 bytes)
undefined8
Map_RegionVisible_e61e0(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0xdd) {
    uVar1 = 0;
    if ((238.0 <= param_3) && (param_3 <= 241.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if ((param_3 <= 180.0) && (g_MiscLevelFlags.field88_0x58 != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e6258 (0x94 bytes)
bool Map_RegionVisible_e6258(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  if ((g_heroStateType == 0x11 || g_heroStateType == 0x12) || (DAT_0096afc4 == '\x01'))
  {
    bVar1 = true;
  }
  if (param_4 < 0x15f) {
    bVar2 = bVar1 && 200.0 <= param_3;
  }
  else if (((233.0 <= param_3) && (param_3 <= 235.0)) && (g_MiscLevelFlags.field90_0x5a != 0)) {
    bVar2 = true;
  }
  return bVar2;
}


// 0x00e6300 (0x74 bytes)
undefined8
Map_RegionVisible_e6300(undefined8 param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x15f) {
    uVar1 = 0;
    if ((228.0 <= param_3) && (param_3 <= 230.0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (((233.0 <= param_3) && (param_3 <= 235.0)) && (g_MiscLevelFlags.field91_0x5b != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 0x00e6374 (0x1c bytes)
ulonglong Map_RegionVisible_e6374(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field89_0x59) << 0x20) >> 0x25 ^ 1;
}


// 0x00e6398 (0x30 bytes)
bool Map_RegionVisible_e6398
               (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5)

{
  return 0x140 < param_5 || 63.5 <= param_3;
}


// 0x00e63c8 (0x8 bytes)
undefined8 Map_RegionVisible_e63c8(void)

{
  return 1;
}


// 0x00e63d0 (0x8 bytes)
undefined8 Map_RegionVisible_e63d0(void)

{
  return 1;
}


// 0x00e63e8 (0x88 bytes)
undefined8 Map_RegionVisible_e63e8(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_00a20828 == 0) {
    if (35.0 < SQRT(((float)(longlong)param_1 - 161.5) * ((float)(longlong)param_1 - 161.5) +
                    ((float)(longlong)param_2 - 249.0) * ((float)(longlong)param_2 - 249.0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00e6470 (0x1c bytes)
ulonglong Map_RegionVisible_e6470(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field114_0x72) << 0x20) >> 0x25 ^ 1;
}


// 0x00e648c (0x1c bytes)
ulonglong Map_RegionVisible_e648c(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field115_0x73) << 0x20) >> 0x25 ^ 1;
}


// 0x00e64a8 (0x1c bytes)
ulonglong Map_RegionVisible_e64a8(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field116_0x74) << 0x20) >> 0x25 ^ 1;
}


// 0x00e64c4 (0x1c bytes)
ulonglong Map_RegionVisible_e64c4(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field117_0x75) << 0x20) >> 0x25 ^ 1;
}


// 0x00e64e0 (0x1c bytes)
ulonglong Map_RegionVisible_e64e0(void)

{
  return (ulonglong)(LZCOUNT((uint)g_MiscLevelFlags.field127_0x7f) << 0x20) >> 0x25 ^ 1;
}


// 0x00e64fc (0x98 bytes)
void Map_InitColors(void)

{
  DAT_00726534 = 0x10000;
  DAT_00a20848 = FUN_00502f74_RET_0(0,0,0,0x80,0);
  DAT_00a20850 = FUN_00502f74_RET_0(0xff,0xff,0xaf,0x80,0);
  DAT_00a20854 = FUN_00502f74_RET_0(0xff,0xff,0xaf,0,0);
  return;
}


// 0x00e6598 (0x114 bytes)
void FlowState_Update(void)

{
  int iVar1;
  
  iVar1 = g_CardState;
  if ((DAT_0071fb10 != 0) || (DAT_0071fa40 != 0)) {
    DAT_00a20884 = 1;
  }
  if ((g_CardStateFlags & 0x80) != 0) {
    g_CardStateFlags = g_CardStateFlags & 0xffffff7f | 0x40;
    g_CardState = 0x15;
  }
  if ((g_CardStateFlags & 0x100) != 0) {
    g_CardStateFlags = g_CardStateFlags & 0xfffffeff | 0x40;
    g_CardState = 0x14;
  }
  (**(code **)(&g_CardStateFuncs)[g_CardState])();
  DAT_00a20880 = DAT_00a20880 + 1;
  if (g_CardState != iVar1) {
    DAT_00a20880 = 0;
  }
  return;
}


// 0x00e66ac (0x28 bytes)
void CardState_INIT(void)

{
  g_memcardGameSaved = 0;
  DAT_0071fa40 = DAT_0071fae8;
  g_CardState = 3;
  return;
}


// 0x00e66d4 (0xb8 bytes)
void CardState_GOOD_SAVE(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = g_CardStateFlags & 0xfffffff9;
  if ((g_CardStateFlags & 0x80) == 0) {
    if ((g_CardStateFlags & 0x100) == 0) {
      if (DAT_0071fa40 == 0) {
        uVar2 = g_CardStateFlags & 0x200;
        g_CardStateFlags = uVar1;
        if (uVar2 != 0) {
          g_CardStateFlags = uVar1 ^ 0x200;
          g_CardState = 0x16;
        }
      }
      else {
        g_memcardGameSaved = 0;
        g_CardState = 2;
        g_CardStateFlags = uVar1 | 1;
      }
    }
    else {
      g_CardState = 0x14;
      g_CardStateFlags = uVar1 ^ 0x100 | 0x40;
    }
  }
  else {
    g_CardState = 0x15;
    g_CardStateFlags = uVar1 ^ 0x80 | 0x40;
  }
  return;
}


// 0x00e678c (0x58 bytes)
void CardState_WARNING(void)

{
  if ((&DAT_0071fad4)[g_SaveCurCard * 0x30] == 2) {
    (&DAT_0071fad4)[g_SaveCurCard * 0x30] = 0;
  }
  if ((g_CardStateFlags & 1) == 0) {
    g_CardState = 3;
  }
  return;
}


// 0x00e67e4 (0x64 bytes)
void CardState_NOCARD(void)

{
  DAT_0071fb08 = 0xffffffff;
  DAT_0071fb0c = 0xffffffff;
  DAT_0071fa44 = 0xffffffff;
  DAT_0071fa60 = 0xffffffff;
  DAT_0071fa7c = 0xffffffff;
  DAT_0071fa98 = 0xffffffff;
  DAT_0071fab4 = 0xffffffff;
  if ((&DAT_0071fad4)[g_SaveCurCard * 0x30] == 2) {
    (&DAT_0071fad4)[g_SaveCurCard * 0x30] = 0;
  }
  g_CardState = 4;
  return;
}


// 0x00e6848 (0x24 bytes)
void CardState_WAIT_FOR_CARD(void)

{
  g_CardState = 9;
  g_CardStateFlags = g_CardStateFlags & 0xffffffdf;
  return;
}


// 0x00e686c (0x10 bytes)
void CardState_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e687c (0x10 bytes)
void CardState_PROMPT_FORMAT(void)

{
  g_CardState = 9;
  return;
}


// 0x00e688c (0x10 bytes)
void CardState_FORMAT_PENDING(void)

{
  g_CardState = 9;
  return;
}


// 0x00e689c (0x10 bytes)
void CardState_FORMATTING(void)

{
  g_CardState = 0xe;
  return;
}


// 0x00e68ac (0x10 bytes)
void CardState_FORMATTED(void)

{
  g_CardState = 10;
  return;
}


// 0x00e68bc (0x34 bytes)
void CardState_CHECK_SAVE(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 7;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xb;
  return;
}


// 0x00e68f0 (0x10 bytes)
void CardState_CHECKING_SAVE(void)

{
  g_CardState = 0x10;
  return;
}


// 0x00e6900 (0x24 bytes)
void CardState_NOSAVE(void)

{
  if ((g_CardStateFlags & 2) != 0) {
    g_CardState = 0xd;
  }
  return;
}


// 0x00e6924 (0x84 bytes)
void CardState_PROMPT_CREATE_SAVE(void)

{
  if ((g_CardStateFlags & 0x20) == 0) {
    if ((g_CardStateFlags & 0x10) != 0) {
      g_CardStateFlags = g_CardStateFlags ^ 0x10;
      g_CardState = 0xe;
    }
  }
  else {
    g_CardStateFlags = g_CardStateFlags ^ 0x20;
    g_CardState = ((uint)(ZERO_MASK((uint)g_FrontEnd)) & 0xfffffff4) + 0x18;
  }
  return;
}


// 0x00e69a8 (0x34 bytes)
void CardState_CREATE_SAVE_PENDING(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 9;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xf;
  return;
}


// 0x00e69dc (0x6c bytes)
void CardState_CREATING_SAVE(void)

{
  if (DAT_0071fb10 == 0) {
    DAT_0071faec = 0;
    g_SaveCurFile = 0;
    if (DAT_0071fb08 < 0) {
      DAT_0071fb08 = 7;
      DAT_0071fb0c = 0;
    }
    g_CardState = 0x10;
  }
  else {
    g_CardState = 0x12;
    g_CardStateFlags = g_CardStateFlags | 0x40;
  }
  return;
}


// 0x00e6a48 (0x10 bytes)
void CardState_NEWCARD(void)

{
  g_CardState = 1;
  return;
}


// 0x00e6a58 (0x10 bytes)
void CardState_FORMAT_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a68 (0x10 bytes)
void CardState_CREATE_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a78 (0x10 bytes)
void CardState_NO_ROOM(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a88 (0x10 bytes)
void CardState_LOAD_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a98 (0x10 bytes)
void CardState_SAVE_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6aa8 (0x40 bytes)
void CardState_SAVING(void)

{
  g_CardState = 1;
  if (DAT_0071fb10 != 0) {
    g_CardState = 0x15;
    g_memcardGameSaved = 0;
    g_CardStateFlags = g_CardStateFlags | 0x440;
  }
  return;
}


// 0x00e6ae8 (0x10 bytes)
void CardState_PROMPT_BEGIN_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6af8 (0x10 bytes)
void CardState_PROMPT_BEGIN_NOSAVE(void)

{
  g_CardState = 0xc;
  return;
}



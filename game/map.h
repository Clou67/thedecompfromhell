#pragma once
// game/map.h
#include "types.h"
#include "game/update/moby1118.h"

// ---- globals
extern undefined4 DAT_0071fa40; /* 0x71fa40 */
extern undefined4 DAT_0071fa60; /* 0x71fa60 */
extern undefined4 DAT_0071fa7c; /* 0x71fa7c */
extern undefined4 DAT_0071fa98; /* 0x71fa98 */
extern undefined4 DAT_0071fab4; /* 0x71fab4 */
extern undefined4 DAT_0071fad4; /* 0x71fad4 */
extern undefined4 DAT_0071fae8; /* 0x71fae8 */
extern undefined4 DAT_0071faf0; /* 0x71faf0 */
extern undefined4 DAT_0071fb08; /* 0x71fb08 */
extern undefined4 DAT_0071fb0c; /* 0x71fb0c */
extern undefined4 DAT_0071fb10; /* 0x71fb10 */
extern undefined4 DAT_00724acc; /* 0x724acc */
extern undefined4 DAT_00724af4; /* 0x724af4 */
extern undefined4 DAT_00724af8; /* 0x724af8 */
extern undefined4 DAT_00724afc; /* 0x724afc */
extern undefined4 DAT_00724b00; /* 0x724b00 */
extern undefined4 DAT_00724b04; /* 0x724b04 */
extern undefined4 DAT_00724b08; /* 0x724b08 */
extern undefined4 DAT_00724b0c; /* 0x724b0c */
extern undefined4 DAT_00724d54; /* 0x724d54 */
extern undefined4 DAT_00724d58; /* 0x724d58 */
extern undefined4 DAT_00724d5c; /* 0x724d5c */
extern undefined4 DAT_007261cc; /* 0x7261cc */
extern undefined4 DAT_007261d0; /* 0x7261d0 */
extern undefined4 DAT_007264cc; /* 0x7264cc */
extern undefined4 DAT_007264d0; /* 0x7264d0 */
extern undefined4 DAT_007264d4; /* 0x7264d4 */
extern undefined4 DAT_007264d8; /* 0x7264d8 */
extern undefined4 DAT_007264dc; /* 0x7264dc */
extern undefined4 DAT_007264e0; /* 0x7264e0 */
extern undefined4 DAT_007264e4; /* 0x7264e4 */
extern undefined4 DAT_00726534; /* 0x726534 */
extern undefined1 DAT_0096afc4; /* 0x96afc4 */
extern undefined4 DAT_00a204c0; /* 0xa204c0 */
extern undefined4 DAT_00a204c4; /* 0xa204c4 */
extern undefined4 DAT_00a204c8; /* 0xa204c8 */
extern undefined4 DAT_00a204d0; /* 0xa204d0 */
extern undefined4 DAT_00a204dc; /* 0xa204dc */
extern undefined4 DAT_00a204ec; /* 0xa204ec */
extern undefined4 DAT_00a204f0; /* 0xa204f0 */
extern undefined4 DAT_00a20570; /* 0xa20570 */
extern undefined4 DAT_00a205c4; /* 0xa205c4 */
extern undefined4 DAT_00a20614; /* 0xa20614 */
extern undefined4 DAT_00a206fc; /* 0xa206fc */
extern undefined4 DAT_00a207ac; /* 0xa207ac */
extern undefined4 DAT_00a207b0; /* 0xa207b0 */
extern undefined4 DAT_00a207b4; /* 0xa207b4 */
extern undefined4 DAT_00a207b8; /* 0xa207b8 */
extern undefined4 DAT_00a207c0; /* 0xa207c0 */
extern undefined4 DAT_00a207c4; /* 0xa207c4 */
extern undefined4 DAT_00a207c8; /* 0xa207c8 */
extern undefined4 DAT_00a207cc; /* 0xa207cc */
extern undefined4 DAT_00a207d8; /* 0xa207d8 */
extern undefined4 DAT_00a207e8; /* 0xa207e8 */
extern undefined4 DAT_00a20820; /* 0xa20820 */
extern undefined4 DAT_00a20824; /* 0xa20824 */
extern undefined4 DAT_00a20828; /* 0xa20828 */
extern undefined4 DAT_00a2082c; /* 0xa2082c */
extern undefined4 DAT_00a20830; /* 0xa20830 */
extern undefined4 DAT_00a20834; /* 0xa20834 */
extern undefined4 DAT_00a20838; /* 0xa20838 */
extern undefined4 DAT_00a2083c; /* 0xa2083c */
extern undefined4 DAT_00a20840; /* 0xa20840 */
extern undefined8 DAT_00a20848; /* 0xa20848 */
extern undefined4 DAT_00a20850; /* 0xa20850 */
extern undefined4 DAT_00a20854; /* 0xa20854 */
extern undefined4 DAT_00a20880; /* 0xa20880 */
extern undefined4 DAT_00a52ca8; /* 0xa52ca8 */
extern MiscLevelFlags g_MiscLevelFlags; /* 0x96bff0 */
extern undefined4 g_CardState; /* 0xa0fd1c */
extern undefined4 g_CardStateFlags; /* 0xa0fd20 */
extern undefined * g_CardStateFuncs; /* 0x7265bc */
extern int g_MapAvailable; /* 0xa204e4 */
extern int g_MapCacheBuf; /* 0xa207a8 */
extern int g_MapCacheId; /* 0xa207bc */
extern int g_MapCacheSize; /* 0xa207d4 */
extern int g_MapCurIndex; /* 0xa206e8 */
extern int g_MapFileId; /* 0xa206ec */
extern int g_MapFileSize; /* 0xa206f4 */
extern int g_MapIcons; /* 0xa204e0 */
extern int g_MapIsMapOMatic; /* 0xa206f0 */
extern int g_MapLoaded; /* 0xa204e8 */
extern int g_MapRevealMask; /* 0xa204cc */
extern float g_MapWorldBounds; /* 0x724af0 */
extern float g_MapWorldToMap; /* 0x724d50 */
extern float g_MapZoom; /* 0xa20574 */
extern pointer ptr_GalacticMap; /* 0x729970 */

// ---- functions
void SECTION_HEADER_MAP(void);
void Map_LoadPlanetMap(void);
void Map_OnPauseMenuOpen(void);
int Map_FindFreeCacheSlot(int fromTop);
void Map_MoveCacheSlot(int dst,int src);
int Map_GetFreeCacheSlotCompact(void);
int Map_FindCacheSlotById(int id);
int Map_GetNextMapToPrefetch(void);
int Map_GetGalacticMapIndex(int level);
int Map_ChooseCacheSlotToEvict(void);
void STUB_000e2704(...);
void Map_MergeByMask(char *out,char *a,char *b,char *mask);
void Map_ExpandRevealMask(char *out,char *mask);
int Map_UpdateZoomPan(void);
void Map_WorldToMapCoords (float x,float y,int unused0,int unused1,float *outU,float *outV,int level);
void Map_GetIconLabel(int icon,char *out);
void DrawMapFrame(void);
void Map_DecodeLayer(int param_1,int param_2,short *param_3);
void Map_RevealAroundPos(float *pos);
void Map_RevealRect(int x,int y,int w,int h);
void Map_SaveRevealMask(char *out);
void Map_DecompressMapImage(longlong param_1,byte *param_2,byte *param_3);
void Map_RegisterLevelObject(void *obj,int idx);
void Map_SetIconSource(void *a,int b);
void Map_SaveLevelObjectState(void);
ulonglong Map_RegionVisible_e515c(longlong param_1,longlong param_2);
ulonglong Map_RegionVisible_e5190(void);
ulonglong Map_RegionVisible_e51ac(void);
ulonglong Map_RegionVisible_e51c8(void);
undefined8 Map_RegionVisible_e51f0 (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5);
undefined8 Map_RegionVisible_e5290(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e5310(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
ulonglong Map_RegionVisible_e5370(void);
ulonglong Map_RegionVisible_e5384(void);
ulonglong Map_RegionVisible_e53a0(void);
ulonglong Map_RegionVisible_e53bc(void);
ulonglong Map_RegionVisible_e53d8(void);
ulonglong Map_RegionVisible_e53f4(void);
undefined8 Map_RegionVisible_e5420(double param_1,double param_2,double param_3,int param_4,int param_5);
undefined8 Map_RegionVisible_e56d8 (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5);
undefined8 Map_RegionVisible_e5814(int param_1,int param_2);
undefined8 Map_RegionVisible_e5a68 (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5);
undefined8 Map_RegionVisible_e5b28(int param_1,int param_2);
undefined8 Map_RegionVisible_e5bd8 (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5);
undefined8 Map_RegionVisible_e5c68 (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5);
undefined8 Map_RegionVisible_e5d30 (undefined8 param_1,undefined8 param_2,double param_3,int param_4,int param_5);
longlong Map_RegionVisible_e5de8(undefined8 param_1,longlong param_2);
bool Map_RegionVisible_e5e40(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e5e98(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e5ef8(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e5f50(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
ulonglong Map_RegionVisible_e5f7c(void);
ulonglong Map_RegionVisible_e5f98(void);
ulonglong Map_RegionVisible_e5fb4(void);
ulonglong Map_RegionVisible_e5fd0(void);
ulonglong Map_RegionVisible_e5fec(void);
ulonglong Map_RegionVisible_e6008(void);
ulonglong Map_RegionVisible_e6028 (undefined8 param_1,undefined8 param_2,double param_3,int param_4);
ulonglong Map_RegionVisible_e606c(void);
ulonglong Map_RegionVisible_e6088(void);
ulonglong Map_RegionVisible_e60a4(void);
ulonglong Map_RegionVisible_e60c0(void);
ulonglong Map_RegionVisible_e60dc(void);
undefined8 Map_RegionVisible_e6108(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
bool Map_RegionVisible_e6178(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e61e0(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
bool Map_RegionVisible_e6258(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
undefined8 Map_RegionVisible_e6300(undefined8 param_1,undefined8 param_2,double param_3,int param_4);
ulonglong Map_RegionVisible_e6374(void);
bool Map_RegionVisible_e6398 (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,int param_5);
undefined8 Map_RegionVisible_e63c8(void);
undefined8 Map_RegionVisible_e63d0(void);
undefined8 Map_RegionVisible_e63e8(int param_1,int param_2);
ulonglong Map_RegionVisible_e6470(void);
ulonglong Map_RegionVisible_e648c(void);
ulonglong Map_RegionVisible_e64a8(void);
ulonglong Map_RegionVisible_e64c4(void);
ulonglong Map_RegionVisible_e64e0(void);
void Map_InitColors(void);
void FlowState_Update(void);
void CardState_INIT(void);
void CardState_GOOD_SAVE(void);
void CardState_WARNING(void);
void CardState_NOCARD(void);
void CardState_WAIT_FOR_CARD(void);
void CardState_UNFORMATTED(void);
void CardState_PROMPT_FORMAT(void);
void CardState_FORMAT_PENDING(void);
void CardState_FORMATTING(void);
void CardState_FORMATTED(void);
void CardState_CHECK_SAVE(void);
void CardState_CHECKING_SAVE(void);
void CardState_NOSAVE(void);
void CardState_PROMPT_CREATE_SAVE(void);
void CardState_CREATE_SAVE_PENDING(void);
void CardState_CREATING_SAVE(void);
void CardState_NEWCARD(void);
void CardState_FORMAT_FAILED(void);
void CardState_CREATE_FAILED(void);
void CardState_NO_ROOM(void);
void CardState_LOAD_FAILED(void);
void CardState_SAVE_FAILED(void);
void CardState_SAVING(void);
void CardState_PROMPT_BEGIN_UNFORMATTED(void);
void CardState_PROMPT_BEGIN_NOSAVE(void);

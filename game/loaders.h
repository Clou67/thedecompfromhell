#pragma once
// game/loaders.h
#include "types.h"
#include "game/camera.h"
#include "game/skyfunc.h"

// ---- types
struct Cylinder {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

/* header of the level's byte grid (LoadByteGrid); the rows of bytes follow */
typedef struct ByteGridHeader {
    int stride;              /* 0x00  bytes per row */
    int rows;                /* 0x04 */
    float min;               /* 0x08  value of byte 0 */
    float max;               /* 0x0c  value of byte 255 */
} ByteGridHeader;

/* Ratchet's animation fix-ups for widescreen: add `add` to the frames [startFrame, endFrame)
   of sequence seq (table at 0x724864) */
typedef struct SeqFrameFix {
    int seq;
    int add;
    u32 startFrame;
    u32 endFrame;
} SeqFrameFix;

// ---- globals
extern undefined4 BlenderCnt; /* 0xa1c8c4 */
extern Blender * Blenders; /* 0xa1c8c0 */
extern int CuboidCnt; /* 0xa51bdc */
extern int CylinderCnt; /* 0xa51bd4 */
extern undefined4 DAT_0071ef00; /* no defined data */
extern undefined4 DAT_0072479c; /* 0x72479c */
extern undefined4 DAT_007ff23c; /* 0x7ff23c */
extern undefined4 DAT_0095d2d0; /* no defined data */
extern undefined4 DAT_0095d2d2; /* no defined data */
extern undefined4 DAT_0095d2d4; /* no defined data */
extern undefined4 DAT_0095d2d8; /* no defined data */
extern undefined4 DAT_0095d2d9; /* no defined data */
extern undefined4 DAT_0095d2da; /* no defined data */
extern int DAT_009636c0; /* 0x9636c0 */ /* type set in global_types.tsv */
extern undefined4 DAT_00964568; /* 0x964568 */
extern undefined4 DAT_0096456c; /* 0x96456c */
extern undefined4 DAT_00a108f4; /* 0xa108f4 */
extern undefined4 DAT_00a15c14; /* 0xa15c14 */
extern undefined4 DAT_00a15c7c; /* 0xa15c7c */
extern undefined4 DAT_00a15f50; /* 0xa15f50 */
extern undefined4 DAT_00a15f70; /* 0xa15f70 */
extern undefined4 DAT_00a15f74; /* 0xa15f74 */
extern undefined4 DAT_00a15f80; /* 0xa15f80 */
extern undefined4 DAT_00a1a860; /* 0xa1a860 */
extern undefined4 DAT_00a1c840; /* 0xa1c840 */
extern undefined4 DAT_00a1c880; /* 0xa1c880 */
extern undefined4 DAT_00a1c900; /* 0xa1c900 */
extern undefined4 DAT_00a202c0; /* no defined data */
extern undefined4 DAT_00a204ac; /* 0xa204ac */
extern undefined4 DAT_00a204b0; /* 0xa204b0 */
extern undefined4 DAT_00a4d540; /* 0xa4d540 */
extern undefined4 DAT_00a4d5a0; /* 0xa4d5a0 */
extern undefined4 DAT_00a4d600; /* 0xa4d600 */
extern undefined4 DAT_00a4d7e0; /* no defined data */
extern undefined4 DAT_00a4dae0; /* 0xa4dae0 */
extern undefined4 DAT_00a51bc0; /* 0xa51bc0 */
extern undefined4 DAT_00a51bc4; /* 0xa51bc4 */
extern undefined4 DAT_010bb478; /* 0x10bb478 */
extern undefined4 DAT_010ea10c; /* no defined data */
extern undefined4 DAT_010ea114; /* no defined data */
extern undefined4 DAT_010ea634; /* 0x10ea634 */
extern undefined4 DAT_010ea63c; /* 0x10ea63c */
extern undefined4 DAT_010ea644; /* 0x10ea644 */
extern MobyClass * MobyClasses[240]; /* 0xa34c00 */
extern undefined MobyMipDists; /* 0xa37b90 */
extern int OCLASSES_COCKPIT[3]; /* 0x731c4c */
extern int OCLASSES_SPACESHIP[3]; /* 0x731c40 */
extern pointer32 PTR_AdvanceLoadingStage_00705ad0; /* 0x705ad0 */
extern pointer32 PTR_sound_BasicCB_00707c38; /* 0x707c38 */
extern undefined4 ScreenColorEffectLevel; /* 0x95cf1c */
extern undefined4 ShrubInstanceCnt; /* 0xa1a798 */
extern int SphereCnt; /* 0xa51bcc */
extern undefined4 SplineCnt; /* 0xa51ea0 */
extern void * SplineOfs; /* 0xa51ea4 */
extern Tfrag * Tfrags; /* 0x92d440 */
extern undefined4 TfragsCnt; /* 0x92d444 */
extern TieInstance * g_TieInstance; /* 0xe583f4 */
extern TieInstance * TieInstanceEnd; /* 0xe583f8 */
extern short g_CockpitTexDef[8]; /* 0x7247d0 */ /* type set in global_types.tsv */
extern int *g_EffectTableEntries; /* 0x95e9f4 */ /* type set in global_types.tsv */
extern int *g_EffectTableOffsets; /* 0x95e9f8 */ /* type set in global_types.tsv */
extern int g_EffectTexCnt; /* 0x95ddd0 */ /* type set in global_types.tsv */
extern sky_tex g_EffectTexs[112]; /* 0x95d6d0: EffectTex, the same layout */ /* type set in global_types.tsv */
extern undefined4 g_EngineData; /* 0xa15f60 */
extern int g_EnvSampleCount; /* 0xa4daf4 */ /* type set in global_types.tsv */
extern int g_GsRamAlloc; /* 0x966ad0: next free GS memory, bytes */ /* type set in global_types.tsv */
extern HeroCollHeader * g_HeroCollision; /* 0xa15c00 */
extern undefined4 g_IsPal; /* 0x966ae8 */
extern undefined4 g_JapanFontTex; /* 0x90d724 */
extern undefined2 g_LoadingStage; /* 0x964560 */
extern void *g_MemSlotsBase; /* 0xa108d8: start of the MemSlots pool */ /* type set in global_types.tsv */
extern int g_MobyTexAddrs[]; /* 0xa37390: per slot, texture address + a tag */ /* type set in global_types.tsv */
extern int g_MobyTexDefCnt; /* 0xa37388 */ /* type set in global_types.tsv */
extern short g_MobyTexDefs[][8]; /* 0xa4c540: tex_def per moby texture slot */ /* type set in global_types.tsv */
extern u8 g_MobyTexRef; /* 0x7247e0: the one-entry tex_refs passed with a ship class */ /* type set in global_types.tsv */
extern undefined4 g_NpcChunkLoadHandle; /* 0x7247f0 */
extern int g_PartTexBaseIndex; /* 0xa52b38 */
extern u64 g_PifFileTexRegs[][3]; /* 0xa202d0 */ /* type set in global_types.tsv */
extern undefined g_PifLoadQueue; /* 0x95d2cc */
extern undefined4 g_PifLoadQueueCnt; /* 0x95d6cc */
extern SeqFrameFix g_RatchetWideFixes[33]; /* 0x724864 */ /* type set in global_types.tsv */
extern undefined4 g_SceneChunkPtrs; /* 0x95cdb0 */
extern undefined4 g_SceneLoadBuffer; /* 0x95cdac */
extern char *g_SkyData; /* 0xa56140: the level's sky file */ /* type set in global_types.tsv */
extern short g_SpaceshipTexDef[8]; /* 0x7247c0: tex_def of the ship's textures */ /* type set in global_types.tsv */
extern u8 *g_byteGridData; /* 0xa204a8 */ /* type set in global_types.tsv */
extern float g_byteGridMax; /* 0xa204a4 */ /* type set in global_types.tsv */
extern float g_byteGridMin; /* 0xa204a0 */ /* type set in global_types.tsv */
extern int g_byteGridRows; /* 0xa2049c */ /* type set in global_types.tsv */
extern int g_byteGridStride; /* 0xa20498 */ /* type set in global_types.tsv */
extern undefined4 g_gadgetIdx; /* 0xa4dae8 */
extern void *g_pPifFileBuffer; /* 0xa10914 */ /* type set in global_types.tsv */
extern undefined2 mClass_to_oClass; /* 0xa35300 */
extern undefined4 maximumNumWeapons; /* 0xa4dae4 */
extern int oClass_to_mClass_lookup; /* 0xa35cc0 */

// ---- functions
void SECTION_HEADER_LOADERS(void);
void LoadByteGrid(ByteGridHeader *grid);
void Loaders_RelocEffectTable(int *table);
int ParsePif(struct PifHeader *pPif, u64 *tex_regs);
int LoadPifFile(char *filename);
void Loaders_RelocSpaceWadPtrs(int *data);
void ParseEffectTexs(int *tex_defs, int tex_cnt);
void ParseSky(char *data);
void LoadMobyModel(MobyClass *pClass, void *tex_regs, char *tex_refs, int oClass);
void LoadMobyPClasses(MobyClass *pClass, void *tex_regs, char *tex_refs, int oClass);
u8 *LoadSpaceshipModel(int *data, int *gs_addrs);
void SetUpVisGif(u64 *pGif, short *tex_def, int mip_dist, int filter, int u_clamp, int v_clamp, int index);
void STUB_000dcb5c(...);
void STUB_000dcb60(...);
void ParseMobySeq(MobyClass *pClass, int seq);
void STUB_000dcbc0(...);
void STUB_000dcbc4(...);
void STUB_000dcbc8(...);
void ParseColl(char *data);
void PrintMobyMemory(int *classes, int cnt);
void STUB_000dce3c(...);
void LoadHelp(void);
ulonglong NAVG_LoadFile(int param_1);
undefined8 STUB_000def38_RET_1(...);
void ____Unused_IncCounter_a204ac(void);
void AdvanceLoadingStage(void);
undefined8 LoadLevelFiles(void);
int LoadAllMobys(int param_1,int param_2);
int LoadNpcMobys(int level_id,int scene_id);
int LoadNpcSubtitles(void);
int PreLoadNpcChunk(int chunk_id);
void ParseNpcChunk(void);
void LoadWeaponCutscene(int weapon);
void ParseWeaponSceneChunk(int chunk_id);
void LoadSpaceScene(int scene,int fade);
void ParseSpaceSceneChunk(int chunk_id);
void LoadGadgetModel(int oClass,int t_target);
longlong QueuePifLoad(void *pPif);
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal);
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal,int tex_addr,int pal_addr);
void STUB_000e0e10(...);

#pragma once
// game/loaders.h
#include "types.h"
#include "game/camera.h"
#include "game/skyfunc.h"

// ---- types
/* header of the level's byte grid (LoadByteGrid); the rows of bytes follow */
typedef struct ByteGridHeader {
    int stride;              /* 0x00  bytes per row */
    int rows;                /* 0x04 */
    float min;               /* 0x08  value of byte 0 */
    float max;               /* 0x0c  value of byte 255 */
} ByteGridHeader;

/* the pvars every imported camera starts with (the rest depend on its type) */
struct CameraImportVars {
    u8 _pad00[4];
    struct UpdateCam *pCam;           /* 0x04  set by InitCameras */
    u8 _pad08[4];
    int cuboid;                       /* 0x0c  activation volume (activationType 4) */
    u8 _pad10[0x0c];
    u8 priority;                      /* 0x1c */
    char blendMode;                   /* 0x1d  how the switch to it blends (CAM_BLEND_*) */
    u8 _pad1e;
    u8 activationType;                /* 0x1f */
    u8 _pad20[4];
    int grindPath;                    /* 0x24  the grind path it is for (type 3), or -1 */
};

/* a camera placed in the level (ImportCameras, 0x20 each) */
struct ImportCamera {
    struct Vec3 pos;                  /* 0x00 */
    int type;                         /* 0x0c */
    struct Vec3 rot;                  /* 0x10 */
    struct CameraImportVars *pVar;    /* 0x1c */
};

/* a capsule volume (collision prim type 7), 0x90 bytes in g_Pills */
struct Pill {
    struct Mtx3 matrix;               /* 0x00  v2: from the center to an end */
    struct Vec4 pos;                  /* 0x30 */
    struct Mtx3 imatrix;              /* 0x40 */
    struct Vec4 rot;                  /* 0x70 */
    float radius;                     /* 0x80  of the ends */
    int pad[3];
};

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
extern int CuboidCnt; /* 0xa51bdc */
extern int CylinderCnt; /* 0xa51bd4 */
extern undefined4 DAT_0072479c; /* 0x72479c */
extern undefined4 DAT_00731c90; /* 0x731c90 */
extern undefined4 DAT_00731c94; /* 0x731c94 */
extern undefined4 DAT_007ff23c; /* 0x7ff23c */
extern int DAT_009636c0; /* 0x9636c0 */ /* type set in global_types.tsv */
extern undefined4 DAT_00a15c14; /* 0xa15c14 */
extern undefined4 DAT_00a15c7c; /* 0xa15c7c */
extern undefined4 DAT_00a15f50; /* 0xa15f50 */
extern undefined4 DAT_00a15f70; /* 0xa15f70 */
extern undefined4 DAT_00a15f74; /* 0xa15f74 */
extern undefined4 DAT_00a1c900; /* 0xa1c900 */
extern undefined4 DAT_00a204ac; /* 0xa204ac */
extern undefined4 DAT_00a561c4; /* 0xa561c4 */
extern undefined4 DAT_010bb478; /* 0x10bb478 */
extern undefined4 DAT_010ea114; /* no defined data */
extern int OCLASSES_COCKPIT[3]; /* 0x731c4c */
extern int OCLASSES_SPACESHIP[3]; /* 0x731c40 */
extern void * OcclGrid; /* 0xa108c0 */
extern pointer32 PTR_AdvanceLoadingStage_00705ad0; /* 0x705ad0 */
extern undefined4 ScreenColorEffectLevel; /* 0x95cf1c */
extern int SphereCnt; /* 0xa51bcc */
extern undefined4 SplineCnt; /* 0xa51ea0 */
extern void * SplineOfs; /* 0xa51ea4 */
extern undefined4 TEX_BASE; /* 0xa15f4c */
extern Tfrag * Tfrags; /* 0x92d440 */
extern undefined4 TfragsCnt; /* 0x92d444 */
extern TieInstance * g_TieInstance; /* 0xe583f4 */
extern s8 g_CheckpointLevelFlags; /* 0xa202c0: per level flag, -1 = clear at this checkpoint (indexed as an array) */ /* type set in global_types.tsv */
extern short g_CockpitTexDef[8]; /* 0x7247d0 */ /* type set in global_types.tsv */
extern int *g_EffectTableEntries; /* 0x95e9f4 */ /* type set in global_types.tsv */
extern int *g_EffectTableOffsets; /* 0x95e9f8 */ /* type set in global_types.tsv */
extern int g_EffectTexCnt; /* 0x95ddd0 */ /* type set in global_types.tsv */
extern sky_tex g_EffectTexs[112]; /* 0x95d6d0: EffectTex, the same layout */ /* type set in global_types.tsv */
extern undefined4 g_EngineData; /* 0xa15f60 */
extern int g_EnvSampleCount; /* 0xa4daf4 */ /* type set in global_types.tsv */
extern int g_GadgetModelSizes[24]; /* 0xa4d600 */ /* type set in global_types.tsv */
extern int g_GadgetModels[24]; /* 0xa4d5a0: the gadget classes in the engine file */ /* type set in global_types.tsv */
extern int g_GadgetOClasses[24]; /* 0xa4d540 */ /* type set in global_types.tsv */
extern short g_GadgetSoundIds[][16]; /* 0xa4d7e0: sound ids of gadgets whose class is loaded later */ /* type set in global_types.tsv */
extern u32 g_GrindPathCnt; /* 0xa1a860 */ /* type set in global_types.tsv */
extern int g_GsRamAlloc; /* 0x966ad0: next free GS memory, bytes */ /* type set in global_types.tsv */
extern HeroCollHeader * g_HeroCollision; /* 0xa15c00 */
extern u32 g_IopGameplay; /* 0x964568: where the gameplay file goes in IOP memory */ /* type set in global_types.tsv */
extern u32 g_IopSpaceships; /* 0x96456c: where the spaceships file goes */ /* type set in global_types.tsv */
extern undefined4 g_IsPal; /* 0x966ae8 */
extern int g_LevelLoadPending; /* 0xa204b0: 1 while LoadAssetAsync runs, 2 when it is done */ /* type set in global_types.tsv */
extern u32 g_LevelSoundBank; /* 0xa4dae0 */ /* type set in global_types.tsv */
extern undefined2 g_LoadingStage; /* 0x964560 */
extern int g_MobyShadowList[]; /* 0xa4a0e0: the shadow list DrawMobyShadows draws (Ghidra label "____oClassInstanceList") */ /* type set in global_types.tsv */
extern int g_MobyTexAddrs[]; /* 0xa37390: per slot, texture address + a tag */ /* type set in global_types.tsv */
extern int g_MobyTexDefCnt; /* 0xa37388 */ /* type set in global_types.tsv */
extern short g_MobyTexDefs[][8]; /* 0xa4c540: tex_def per moby texture slot */ /* type set in global_types.tsv */
extern u8 g_MobyTexRef; /* 0x7247e0: the one-entry tex_refs passed with a ship class */ /* type set in global_types.tsv */
extern undefined4 g_NpcChunkLoadHandle; /* 0x7247f0 */
extern u64 g_PifFileTexRegs[][3]; /* 0xa202d0 */ /* type set in global_types.tsv */
extern undefined g_PifLoadQueue; /* 0x95d2cc */
extern undefined4 g_PifLoadQueueCnt; /* 0x95d6cc */
extern int g_PillCnt; /* 0xa51bc4 */ /* type set in global_types.tsv */
extern u32 g_Pills; /* 0xa51bc0: gameplay section 0x6c, 0x90 bytes each (collision prim type 7) */ /* type set in global_types.tsv */
extern int g_PointLightCnt; /* 0xa1c840: gameplay section 0x7c */ /* type set in global_types.tsv */
extern u8 *g_PointLightGrid; /* 0xa1c8c0: gameplay section 0x78, a 0x4000-byte grid then its data (Ghidra label "Blenders"; the real blenders are g_Blenders) */ /* type set in global_types.tsv */
extern u32 g_PointLightRecords; /* 0xa1c880: 0x20 bytes each */ /* type set in global_types.tsv */
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
extern u32 g_pGameplayFile; /* 0xa108f4: the gameplay file buffer (a MemSlots pointer) */ /* type set in global_types.tsv */
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
u8 *LoadGameplayFile(int reload);
undefined8 STUB_000def38_RET_1(...);
void Unused_IncCounter_a204ac(void);
void AdvanceLoadingStage(void);
int LoadLevelFiles(void);
int LoadAllMobys(int reload, int restoreCheckpoint);
int LoadNpcMobys(int level_id, int scene_id);
int LoadNpcSubtitles(int level, int scene);
int PreLoadNpcChunk(int chunk_id);
void ParseNpcChunk(void);
void LoadWeaponCutscene(int weapon);
void ParseWeaponSceneChunk(int chunk_id);
void LoadSpaceScene(int scene, int fade);
void ParseSpaceSceneChunk(int chunk_id);
void LoadGadgetModel(int oClass, int slot);
u64 QueuePifLoad(PifHeader *pPif);
u64 QueuePifLoad(int log_w, int log_h, char *clut, char *tex);
u64 QueuePifLoad(int log_w, int log_h, char *clut, char *tex, int clut_addr, int tex_addr);
void STUB_000e0e10(...);

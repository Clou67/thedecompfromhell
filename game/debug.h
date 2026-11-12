#pragma once
// game/debug.h
#include "types.h"
#include "game/partproc.h"

// ---- types
typedef enum DEBUG_OPTION {
    DEBUG_OPTION__NONE=0,
    UPDATE_HERO=1,
    UPDATE_MOBYS=2,
    UPDATE_PARTICLES=4,
    UPDATE_CAMERA=8,
    ENABLE_STEPPING=16
} DEBUG_OPTION;

struct DebugCameraSpeeds {
    float horizontal;
    float vertical;
    float roll;
    float pitch;
    float yaw;
};

typedef enum DebugDrawMode {
    Darken=1,
    EnvColl=2,
    MobyColl=4,
    HeroColl=8,
    Bspheres=16,
    Cameras=32,
    DebugDrawMode__Cuboids=64,
    Samples=128,
    Text=256
} DebugDrawMode;

struct DebugFontString { /* queued debug text entry (debug font) */
    int x;
    int y;
    int color;
    char *str;
};
#define EDGE_DECOMPRESSOR_ASSERT 1
#define FIOS_COMPUTETHREAD_PRIORITY 257
#define FIOS_COMPUTETHREAD_STACKSIZE 65536
#define FIOS_INSTRUMENT 0
#define FIOS_IOTHREAD_PRIORITY 99
#define FIOS_IOTHREAD_STACKSIZE 32768
#define FIOS_LOWPRIORITYTHREAD_PRIORITY 1500
#define FIOS_LOWPRIORITYTHREAD_STACKSIZE 32768
#define FIOS_NORMALTHREAD_PRIORITY 1000
#define FIOS_NORMALTHREAD_STACKSIZE 32768
#define FIOS_PATH_MAX 256
#define FIOS_PROFILING 1
#define FIOS_PS3MAXFILES 256
#define FIOS_SCHEDULERTHREAD_PRIORITY 100
#define FIOS_SCHEDULERTHREAD_STACKSIZE 65536
#define FIOS_SIZET_MAX 4294967295
#define FIOS_USE_DIRTY_BLOCK_OPT 0
#define FIOS_VERSION 20267008
#define FIOS_VERSION_BUGFIX 5
#define FIOS_VERSION_MAJOR 1
#define FIOS_VERSION_MINOR 3
#define FIOS_VERSION_STAGE 4
#define FIOS_VERSION_STAGENUM 0
#define FIOSDEBUG 0
#define kDATE_EARLIEST 1
#define kDATE_HIGHBIT -9223372036854775808
#define kDATE_LATEST 9223372036854775807
#define kDATE_NULL 0
#define kDEADLINE_ASAP 2
#define kDEADLINE_LATER 9223372036854775807
#define kDEADLINE_NOW 1
#define kFIOS_VERSION_STAGE_a 1
#define kFIOS_VERSION_STAGE_b 2
#define kFIOS_VERSION_STAGE_d 0
#define kFIOS_VERSION_STAGE_f 4
#define kFIOS_VERSION_STAGE_rc 3
#define kTIME_EARLIEST 1
#define kTIME_LATEST 9223372036854775807
#define kTIME_NULL 0
#define MD5_DIGEST_SIZE 16
#define NULL 0
#define nullptr 0
#define PSARC_OFFSET_TABLE_DIV 32

struct Items32 {
    uint field0_0x0;
    uint field1_0x1;
    dword heliPack;
    dword thrusterPack;
    dword hydroPack;
    dword sonicSummoner;
    dword o2Mask;
    dword pilotsHelmet;
    dword missingNo1;
    dword suckCannon;
    dword bombGlove;
    dword devastator;
    dword swingshot;
    dword visibombGun;
    dword taunter;
    dword blaster;
    dword pyrocitor;
    dword mineGlove;
    dword walloper;
    dword teslaClaw;
    dword gloveOfDoom;
    dword morphORay;
    dword hydrodisplacer;
    dword ryno;
    dword droneDevice;
    dword decoyGlove;
    dword trespasser;
    dword metalDetector;
    dword magneboots;
    dword grindboots;
    dword hoverboard;
    dword hologuise;
    dword pda;
    dword mapOMatic;
    dword boltGrabber;
    dword persuader;
    dword field36_0x24;
};

// ---- globals
extern int Actuator; /* 0x95c6b4 */ /* type set in global_types.tsv */
extern char AddSample; /* 0x95c6b9 */ /* type set in global_types.tsv */
extern char AddStart; /* 0x95c6b8: 'y' once a start point was written */ /* type set in global_types.tsv */
extern int BattleCam; /* 0x95c6b0 */ /* type set in global_types.tsv */
extern int Bookmark; /* 0x95c5e0 */ /* type set in global_types.tsv */
extern int CollMode; /* 0x95c5ec */ /* type set in global_types.tsv */
extern undefined4 DAT_0071eb14; /* 0x71eb14 */
extern undefined4 DAT_0072103e; /* no defined data */
extern undefined4 DAT_0095a3b0; /* 0x95a3b0 */
extern undefined4 DAT_0095a564; /* 0x95a564 */
extern undefined4 DAT_0095a568; /* 0x95a568 */
extern undefined4 DAT_00a390b8; /* 0xa390b8 */
extern undefined4 DAT_00e5aa70; /* 0xe5aa70 */
extern DebugCameraSpeeds DebugCameraSpeed; /* 0x95c630 */
extern int DebugSelectedCol; /* 0x95c5cc */ /* type set in global_types.tsv */
extern int DebugSelectedRow; /* 0x95c5d0 */ /* type set in global_types.tsv */
extern int DrawDistMode; /* 0x95c5e8 */ /* type set in global_types.tsv */
extern DebugDrawMode DrawMode; /* 0x95c5c4 */
extern int Invincibility; /* 0x95c5e4 */ /* type set in global_types.tsv */
extern float LevelFogFarDist; /* 0x95ea04 */
extern float LevelFogFarIntensity; /* 0x95ea0c */
extern float LevelFogNearDist; /* 0x95ea00 */ /* type set in global_types.tsv */
extern float LevelFogNearIntensity; /* 0x95ea08 */
extern int Scene; /* 0x95c5f8 */ /* type set in global_types.tsv */
extern int ScreenMode; /* 0x95c5f4 */ /* type set in global_types.tsv */
extern int Segment; /* 0x95c5fc */ /* type set in global_types.tsv */
extern float ShrubDrawDist; /* 0xa54f1c */
extern float TfragDrawDist; /* 0x92d470 */
extern float TieDrawDist; /* 0xe5a620 */
extern int TvMode; /* 0x95c5f0 */ /* type set in global_types.tsv */
extern u8 g_DebugAmmoItems[14]; /* 0x71ee3c: item of each AMMO row */ /* type set in global_types.tsv */
extern const char *g_DebugCollNames[3]; /* 0x737b54 */ /* type set in global_types.tsv */
extern const char *g_DebugControlNames[4]; /* 0x737b10 */ /* type set in global_types.tsv */
extern const char *g_DebugDrawDistNames[2]; /* 0x737b4c */ /* type set in global_types.tsv */
extern int g_DebugEnables[20]; /* 0x95a56c */
extern int g_DebugExitCamPos[3]; /* 0x95c654: camera position / 4 when debug mode was left */ /* type set in global_types.tsv */
extern int g_DebugFontCharWidths[96]; /* 0x71ecbc */
extern int g_DebugFontNumStrings; /* 0x95c5bc */
extern char g_DebugFontStringBuf[2048]; /* 0x95a5bc */
extern DebugFontString g_DebugFontStrings[384]; /* 0x95adbc */
extern float g_DebugHeroDir; /* 0x95c648: direction from the camera to the hero, relative to its yaw */ /* type set in global_types.tsv */
extern float g_DebugHeroDist; /* 0x95c64c */ /* type set in global_types.tsv */
extern float g_DebugHeroHeight; /* 0x95c650 */ /* type set in global_types.tsv */
extern float g_DebugHeroYaw; /* 0x95c644: CONTROL_HERO: the hero's yaw relative to the camera's */ /* type set in global_types.tsv */
extern const char *g_DebugOcclNames[3]; /* 0x737b70 */ /* type set in global_types.tsv */
extern const char *g_DebugOnOff[2]; /* 0x737b08: "off", "on" */ /* type set in global_types.tsv */
extern const char *g_DebugProfileNames[8]; /* 0x737b20 */ /* type set in global_types.tsv */
extern const char *g_DebugScreenNames[2]; /* 0x737b68 */ /* type set in global_types.tsv */
extern const char *g_DebugTvNames[2]; /* 0x737b60 */ /* type set in global_types.tsv */
extern char g_LevelFlags[20][16]; /* 0xa0ca84 */
extern int g_OcclSampleCnt; /* 0xa108d4 */ /* type set in global_types.tsv */
extern int g_debugLastGameMode; /* 0x95c664 */ /* type set in global_types.tsv */
extern pointer g_pDebugFontBufPos; /* 0x71eb38 */
extern u32 g_pOcclSamples; /* 0xa1090c: occlusion sample positions (MemSlots buffer) */ /* type set in global_types.tsv */
extern RGBA levelFog; /* 0x95e9fc */

// ---- functions
void SECTION_HEADER_DEBUG(void);
void ResetDebugEnables(void);
void DebugFontPrintLeft(int x, int y, uint color, char *str);
void DebugFontPrintfLeft(int x, int y, int color, char *fmt, ...);
void STUB_00060c40(...);
void ResetDebugFontStrings(void);
int DebugFontPrintCenter(int x, int y, int color, char *str);
int DebugFontPrintfCenter(int x, int y, int color, char *fmt, ...);
void DebugFontPrintRight(int x, int y, int color, char *str);
void DebugFontPrintfRight(int x, int y, int color, char *fmt, ...);
int DebugFontStringWidth(char *str);
void DebugFontPrintN(int x, int y, int color, char *str, int len);
void AssertFailed(char *file, int line, char *expr);
void STUB_000612d0(...);
void STUB_000612d4(...);
void STUB_000612d8(...);
void STUB_000612dc(...);
void STUB_000612e0(...);
void STUB_000612e4(...);
void STUB_000612e8(...);
void STUB_000612ec(...);
void STUB_000612f0(...);
void STUB_000612f4(...);
void STUB_000612f8(...);
void STUB_000612fc(...);
void STUB_00061300(...);
void STUB_00061304(...);
void STUB_00061308(...);
void STUB_0006130c(...);
void STUB_00061310(...);
void STUB_00061314(...);
void STUB_00061318(...);
void STUB_0006131c(...);
void STUB_00061320(...);
void STUB_00061324(...);
void STUB_00061328(...);
void STUB_0006132c(...);
void STUB_00061330(...);
void STUB_00061334(...);
void STUB_00061338(...);
void STUB_0006133c(...);
void STUB_00061340(...);
void STUB_00061344(...);
void STUB_00061348(...);
void STUB_0006134c(...);
void STUB_00061350(...);
void STUB_00061354(...);
void DebugCamera(void);
void UpdateDebugCamera(void);
void STUB_00062760(...);
void SetDebugGameMode(void);
void UpdateDebugSelections(void);
void DrawDebugMenu(void);
void STUB_00065438(...);
void STUB_0006543c(...);
void STUB_00065440(...);
void STUB_00065444(...);
void STUB_00065448(...);
void STUB_0006544c(...);
void STUB_00065450(...);
void STUB_00065454(...);
void STUB_00065458(...);
void STUB_0006545c(...);
void STUB_00065460(...);
void STUB_00065464(...);
void STUB_00065468(...);
void STUB_0006546c(...);
void STUB_00065470(...);
void STUB_00065474(...);
void ScreenPosFromWorldSpace(float *screen, float *world);
void Debug_ResetLevelCounters(void);
void STUB_00065628(...);
void STUB_0006562c(...);
void STUB_00065630(...);
undefined8 STUB_00065634_RET_NEG1(...);
undefined8 STUB_0006563c_RET_NEG1(...);
void STUB_00065644(...);

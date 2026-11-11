#pragma once
// game/debug.h
#include "types.h"

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

// ---- globals
extern undefined4 Actuator; /* 0x95c6b4 */
extern undefined1 AddSample; /* 0x95c6b9 */
extern undefined1 AddStart; /* 0x95c6b8 */
extern undefined4 BattleCam; /* 0x95c6b0 */
extern undefined4 Bookmark; /* 0x95c5e0 */
extern undefined4 CollMode; /* 0x95c5ec */
extern undefined4 ControlMode; /* 0x95c5d4 */
extern undefined4 DAT_00651c88; /* no defined data */
extern undefined4 DAT_0071eb14; /* 0x71eb14 */
extern undefined4 DAT_0071ee3c; /* no defined data */
extern undefined4 DAT_0072103e; /* no defined data */
extern undefined4 DAT_0095a3b0; /* 0x95a3b0 */
extern undefined4 DAT_0095a564; /* 0x95a564 */
extern undefined4 DAT_0095a568; /* 0x95a568 */
extern undefined4 DAT_0095c644; /* 0x95c644 */
extern undefined4 DAT_0095c648; /* 0x95c648 */
extern undefined4 DAT_0095c64c; /* 0x95c64c */
extern undefined4 DAT_0095c650; /* 0x95c650 */
extern undefined4 DAT_0095c654; /* 0x95c654 */
extern undefined4 DAT_0095c658; /* 0x95c658 */
extern undefined4 DAT_0095c65c; /* 0x95c65c */
extern undefined4 DAT_00a108d4; /* 0xa108d4 */
extern undefined4 DAT_00a1090c; /* 0xa1090c */
extern undefined4 DAT_00a390b8; /* 0xa390b8 */
extern undefined4 DAT_00e5aa70; /* 0xe5aa70 */
extern DebugCameraSpeeds DebugCameraSpeed; /* 0x95c630 */
extern undefined4 DebugSelectedCol; /* 0x95c5cc */
extern undefined4 DebugSelectedRow; /* 0x95c5d0 */
extern undefined4 DrawDistMode; /* 0x95c5e8 */
extern DebugDrawMode DrawMode; /* 0x95c5c4 */
extern undefined4 Invincibility; /* 0x95c5e4 */
extern float LevelFogFarDist; /* 0x95ea04 */
extern float LevelFogFarIntensity; /* 0x95ea0c */
extern undefined4 LevelFogNearDist; /* 0x95ea00 */
extern float LevelFogNearIntensity; /* 0x95ea08 */
extern undefined4 OcclUpdate; /* 0x95c5dc */
extern pointer PTR_DAT_00737b60; /* 0x737b60 */
extern pointer PTR_s_hotspt_00737b54; /* 0x737b54 */
extern undefined * PTR_s_normal_00737b10; /* 0x737b10 */
extern pointer PTR_s_normal_00737b4c; /* 0x737b4c */
extern pointer PTR_s_normal_00737b68; /* 0x737b68 */
extern pointer PTR_s_off_00737b08; /* 0x737b08 */
extern undefined * PTR_s_off_00737b20; /* 0x737b20 */
extern undefined * PTR_s_off_00737b70; /* 0x737b70 */
extern undefined4 Profile; /* 0x95c5d8 */
extern undefined4 Scene; /* 0x95c5f8 */
extern undefined4 ScreenMode; /* 0x95c5f4 */
extern undefined4 Segment; /* 0x95c5fc */
extern float ShrubDrawDist; /* 0xa54f1c */
extern float TfragDrawDist; /* 0x92d470 */
extern float TieDrawDist; /* 0xe5a620 */
extern undefined4 TvMode; /* 0x95c5f0 */
extern int g_DebugEnables[20]; /* 0x95a56c */
extern int g_DebugFontCharWidths[96]; /* 0x71ecbc */
extern int g_DebugFontNumStrings; /* 0x95c5bc */
extern char g_DebugFontStringBuf[2048]; /* 0x95a5bc */
extern DebugFontString g_DebugFontStrings[384]; /* 0x95adbc */
extern char g_LevelFlags[20][16]; /* 0xa0ca84 */
extern undefined4 g_debugLastGameMode; /* 0x95c664 */
extern Items g_goldWeaponsArray; /* 0x969ca8 */
extern pointer g_pDebugFontBufPos; /* 0x71eb38 */
extern RGBA levelFog; /* 0x95e9fc */
extern undefined1 stack0x00000050[16]; /* stack slot, not a real global */

// ---- functions
void SECTION_HEADER_DEBUG(void);
void ResetDebugEnables(void);
void DebugFontPrintLeft(int x,int y,uint color,char *str);
void DebugFontPrintfLeft(int x,int y,int color,char *fmt,...);
void STUB_00060c40(...);
void ResetDebugFontStrings(void);
int DebugFontPrintCenter(int x,int y,int color,char *str);
int DebugFontPrintfCenter(int x,int y,int color,char *fmt,...);
void DebugFontPrintRight(int x,int y,int color,char *str);
void DebugFontPrintfRight(int x,int y,int color,char *fmt,...);
int DebugFontStringWidth(char *str);
void DebugFontPrintN(int x,int y,int color,char *str,int len);
void AssertFailed(char *file,int line,char *expr);
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
void ScreenPosFromWorldSpace(float *param_1,float *param_2);
void Debug_ResetLevelCounters(void);
void STUB_00065628(...);
void STUB_0006562c(...);
void STUB_00065630(...);
undefined8 STUB_00065634_RET_NEG1(...);
undefined8 STUB_0006563c_RET_NEG1(...);
void STUB_00065644(...);

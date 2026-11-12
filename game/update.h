#pragma once
// game/update.h
#include "types.h"
#include "game/debug.h"

// ---- globals
extern undefined4 DAT_0071fbd8; /* 0x71fbd8 */
extern undefined4 DAT_0072075c; /* no defined data */
extern undefined4 DAT_0073875c; /* 0x73875c */
extern undefined4 DAT_007387f0; /* no defined data */
extern undefined4 DAT_0095c660; /* 0x95c660 */
extern undefined4 DAT_0095c6ac; /* 0x95c6ac */
extern undefined4 DAT_0095cae0; /* 0x95cae0 */
extern undefined4 DAT_0095ccf0; /* 0x95ccf0 */
extern undefined4 DAT_0095cd50; /* 0x95cd50 */
extern undefined4 DAT_0095cd54; /* 0x95cd54 */
extern undefined4 DAT_0095cd58; /* 0x95cd58 */
extern undefined4 DAT_0095cd5c; /* 0x95cd5c */
extern undefined4 DAT_0095cd60; /* 0x95cd60 */
extern undefined4 DAT_0095cd68; /* 0x95cd68 */
extern undefined2 DAT_0095cda2; /* 0x95cda2 */
extern undefined1 DAT_009637cb; /* 0x9637cb */
extern undefined4 DAT_0096b2d0; /* 0x96b2d0 */
extern undefined4 DAT_00a15c0c; /* 0xa15c0c */
extern undefined4 DAT_00a15c10; /* 0xa15c10 */
extern undefined2 DAT_00a15c1c; /* 0xa15c1c */
extern undefined2 DAT_00a15c1e; /* 0xa15c1e */
extern undefined2 DAT_00a15c20; /* 0xa15c20 */
extern undefined2 DAT_00a15c22; /* 0xa15c22 */
extern undefined4 DAT_00a15c24; /* 0xa15c24 */
extern undefined4 DAT_00a15c28; /* 0xa15c28 */
extern undefined4 DAT_00a15c2c; /* 0xa15c2c */
extern undefined4 DAT_00a15c30; /* 0xa15c30 */
extern undefined4 DAT_00a15c34; /* 0xa15c34 */
extern undefined4 DAT_00a15c38; /* 0xa15c38 */
extern undefined4 DAT_00a15c3c; /* 0xa15c3c */
extern undefined4 DAT_00a15c40; /* 0xa15c40 */
extern undefined4 DAT_00a15c44; /* 0xa15c44 */
extern undefined4 DAT_00a15c48; /* 0xa15c48 */
extern undefined4 DAT_00a15c4c; /* 0xa15c4c */
extern undefined4 DAT_00a15c50; /* 0xa15c50 */
extern undefined4 DAT_00a15c54; /* 0xa15c54 */
extern undefined4 DAT_00a15c58; /* 0xa15c58 */
extern undefined4 DAT_00a15c5c; /* 0xa15c5c */
extern undefined4 DAT_00a15c60; /* 0xa15c60 */
extern undefined4 DAT_00a15c64; /* 0xa15c64 */
extern undefined4 DAT_00a15c68; /* 0xa15c68 */
extern undefined4 DAT_00a15c6c; /* 0xa15c6c */
extern undefined4 DAT_00a15c70; /* 0xa15c70 */
extern undefined4 DAT_00a15f30; /* 0xa15f30 */
extern undefined4 DAT_00a1bf80; /* no defined data */
extern undefined4 DAT_00a1bfe4; /* 0xa1bfe4 */
extern undefined4 DAT_00a52c98; /* 0xa52c98 */
extern undefined4 DAT_00e5a634; /* 0xe5a634 */
extern undefined4 DAT_00e5a640; /* 0xe5a640 */
extern DEBUG_OPTION DebugUpdate; /* 0x95c5c8 */
extern pointer32 PTR_BoltHud_Update_00705818; /* 0x705818 */
extern undefined4 g_CutscenePlaying; /* 0xa1071c */
extern undefined4 g_FramesSinceStateChange; /* 0xa1070c */
extern int g_IdleFrames; /* 0x738830 */
extern int g_MovieLanguage; /* 0xe5a638 */
extern undefined4 g_MovieParam0; /* 0xe5a630 */
extern char g_SceneSavedCamUnderWater; /* 0x95cd9b */
extern struct BinkPlayer *g_pBinkPlayer; /* 0x8fa410 */ /* type set in global_types.tsv */
extern undefined4 worldUpdateTime; /* 0xa10710 */

// ---- functions
void SECTION_HEADER_UPDATE(void);
void STUB_00166e1c(...);
undefined8 STUB_00166e20_RET_0(...);
void STUB_00166e28(...);
void ResetGameCounters(void);
void UpdateGameCounters(void);
void UpdateGameplay(void);
void mode_sceneUnInit(void);
void mode_sceneInit(int absolute_scene_id);
void UpdateSceneCamera(void);
void UpdateScene(void);
void StartMovie(int arg0,int arg1,int language);
void PlayInfobotMovie(int movieIdx);
void PlayHelpMovie(int movieIdx);
void PlaySpecialMovie(int movieIdx);
void PlayStoryMovie(int movieIdx);
void mode_movieUnInit(void);
void PlayMovieBlocking(void);
void UpdateCinematic(void);
void mode_creditsInit(void);
void mode_creditsUnInit(void);
void UpdateCredits(void);

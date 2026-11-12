#pragma once
// game/space.h
#include "types.h"

// ---- globals
extern Cuboid * Cuboids; /* 0xa51bd8 */
extern undefined4 DAT_00653758; /* no defined data */
extern undefined4 DAT_00731bc4; /* 0x731bc4 */
extern undefined4 DAT_00731c00; /* no defined data */
extern undefined4 DAT_00731c60; /* no defined data */
extern undefined4 DAT_00731c90; /* 0x731c90 */
extern undefined4 DAT_00731c94; /* 0x731c94 */
extern undefined4 DAT_00731c98; /* no defined data */
extern undefined4 DAT_00731d80; /* no defined data */
extern undefined4 DAT_00731d8c; /* 0x731d8c */
extern undefined4 DAT_00731d90; /* 0x731d90 */
extern undefined4 DAT_00731dac; /* no defined data */
extern undefined4 DAT_00731e40; /* 0x731e40 */
extern undefined4 DAT_00731e80; /* 0x731e80 */
extern undefined4 DAT_00731ed0; /* no defined data */
extern undefined4 DAT_00731f20; /* 0x731f20 */
extern undefined4 DAT_00731f24; /* 0x731f24 */
extern undefined4 DAT_00731f40; /* 0x731f40 */
extern undefined4 DAT_00731f58; /* no defined data */
extern undefined4 DAT_00731f70; /* 0x731f70 */
extern undefined4 DAT_00731f74; /* 0x731f74 */
extern undefined4 DAT_00731f78; /* 0x731f78 */
extern undefined4 DAT_00731f7c; /* 0x731f7c */
extern undefined4 DAT_00731f80; /* 0x731f80 */
extern undefined4 DAT_00731fd0; /* no defined data */
extern undefined4 DAT_00732070; /* no defined data */
extern undefined4 DAT_00732084; /* no defined data */
extern undefined4 DAT_00732220; /* no defined data */
extern undefined4 DAT_00734a30; /* no defined data */
extern undefined4 DAT_00734a40; /* no defined data */
extern undefined4 DAT_00734a50; /* no defined data */
extern undefined4 DAT_00734b00; /* no defined data */
extern undefined4 DAT_0095cda8; /* 0x95cda8 */
extern undefined4 DAT_0095cf14; /* 0x95cf14 */
extern undefined2 DAT_00964562; /* 0x964562 */
extern undefined4 DAT_00964578; /* 0x964578 */
extern undefined4 DAT_00964580; /* 0x964580 */
extern undefined4 DAT_00964584; /* 0x964584 */
extern undefined4 DAT_00964590; /* 0x964590 */
extern undefined2 DAT_00964594; /* 0x964594 */
extern undefined2 DAT_00964598; /* 0x964598 */
extern undefined4 DAT_009645ac; /* 0x9645ac */
extern undefined4 DAT_009645b0; /* 0x9645b0 */
extern undefined4 DAT_009645b4; /* 0x9645b4 */
extern undefined4 DAT_009645b8; /* 0x9645b8 */
extern undefined4 DAT_009645bc; /* 0x9645bc */
extern undefined4 DAT_009645c0; /* 0x9645c0 */
extern undefined4 DAT_009645f0; /* 0x9645f0 */
extern undefined4 DAT_009645f4; /* 0x9645f4 */
extern undefined4 DAT_009645f8; /* 0x9645f8 */
extern undefined4 DAT_009645fc; /* 0x9645fc */
extern undefined4 DAT_00964600; /* 0x964600 */
extern undefined4 DAT_00964604; /* 0x964604 */
extern undefined4 DAT_00964608; /* 0x964608 */
extern undefined4 DAT_0096460c; /* 0x96460c */
extern undefined4 DAT_00964610; /* 0x964610 */
extern undefined4 DAT_00964614; /* 0x964614 */
extern undefined4 DAT_00964618; /* 0x964618 */
extern undefined4 DAT_0096461c; /* 0x96461c */
extern undefined4 DAT_00964624; /* 0x964624 */
extern undefined4 DAT_00964628; /* 0x964628 */
extern undefined4 DAT_00964830; /* no defined data */
extern undefined4 DAT_00a0a0a0; /* no defined data */
extern undefined4 DAT_00a10920; /* 0xa10920 */
extern undefined4 DAT_00a15c74; /* 0xa15c74 */
extern undefined4 DAT_00a1be80; /* no defined data */
extern undefined4 DAT_00a1bec0; /* no defined data */
extern undefined4 DAT_00a561c4; /* 0xa561c4 */
extern undefined8 DAT_00a561c8; /* 0xa561c8 */
extern undefined8 DAT_00a561d0; /* 0xa561d0 */
extern undefined4 DAT_00a561e0; /* 0xa561e0 */
extern undefined4 DAT_00a561e4; /* 0xa561e4 */
extern undefined4 DAT_00a561e8; /* 0xa561e8 */
extern undefined4 DAT_00a561ec; /* 0xa561ec */
extern undefined4 DAT_00a561f0; /* 0xa561f0 */
extern undefined4 DAT_00a561f4; /* 0xa561f4 */
extern undefined4 DAT_00a561f8; /* 0xa561f8 */
extern undefined4 DAT_00a561fc; /* 0xa561fc */
extern undefined4 DAT_00a56850; /* 0xa56850 */
extern undefined4 DAT_00a56854; /* 0xa56854 */
extern undefined4 DAT_00a56b80; /* 0xa56b80 */
extern undefined4 DAT_00a56b84; /* 0xa56b84 */
extern undefined4 DAT_00e5aa64; /* 0xe5aa64 */
extern undefined * PTR_DAT_00734a60; /* 0x734a60 */
extern undefined * PTR_DAT_00734a70; /* 0x734a70 */
extern undefined * PTR_DAT_00734a80; /* 0x734a80 */
extern pointer32 PTR_STUB_0015e2c0_00707c68; /* 0x707c68 */
extern pointer32 PTR_Space_DrawShipEffects_00707cd8; /* 0x707cd8 */
extern pointer32 PTR_Space_DrawShipEngineGlow_00707cb0; /* 0x707cb0 */
extern pointer32 PTR_Space_DrawTransitionOverlay_00707cb8; /* 0x707cb8 */
extern pointer32 PTR_UpdateMoby_Spaceship_00707c58; /* 0x707c58 */
extern pointer32 PTR_sound_BasicCB_00707c38; /* 0x707c38 */
extern float SceneScreenFade; /* 0x95cf10 */
extern Planets VisitedPlanets; /* 0x96ca20 */
extern undefined1 g_FinishedLoading; /* 0x9636d3 */
extern undefined4 g_LoadScreenRelated; /* 0x9645c4 */
extern int g_ScreenHalfHeight; /* 0x966b0c */
extern Planets g_SeenPlanets; /* 0x96ca0c */
extern void * g_SpaceSceneCameraFrames; /* 0x95cda4 */
extern int g_SpaceSceneChunk; /* 0x95cd8c */
extern int g_SpaceSceneFrame; /* 0x95cd84 */
extern short g_SpaceSceneMobyCnt; /* 0x95cd94: entries in g_SpaceSceneMobys (read as a halfword) */ /* type set in global_types.tsv */
extern MobyInstance *g_SpaceSceneMobys[8]; /* 0x95cec8: the mobys of the playing space (ship) cutscene */ /* type set in global_types.tsv */
extern int g_SpaceSceneNumFrames; /* 0x95cd90 */
extern float g_SpaceSkyAngle; /* 0xa56164 */ /* type set in global_types.tsv */
extern MobyInstance * g_SpaceshipPtr; /* 0x964570 */
extern undefined2 g_SpaceshipVariant; /* 0x964596 */
extern undefined4 g_currentLoadingScreen; /* 0x9645c8 */
extern undefined4 g_cutsceneCameraFrame; /* 0x95cd88 */
extern undefined4 g_loadingCount; /* 0x9645cc */
extern undefined4 g_newlevelnum; /* 0xa10704 */
extern undefined4 g_shipCameraEndCuboid; /* 0x9645a8 */
extern undefined4 g_shipCameraStartCuboid; /* 0x9645a4 */
extern undefined4 g_shipSplinePath; /* 0x9645a0 */
extern int g_spaceArrivalPending; /* 0x96459c */

// ---- functions
void SECTION_HEADER_SPACE(void);
void UpdateMoby_Spaceship(MobyInstance *moby);
char Space_SetCutsceneCamera(void);
void STUB_0015e2c0(...);
void Space_DisableShip(void);
void SetupSpaceShipVars(MobyInstance *moby);
void Space_EnableShip(void);
void PlaySpaceCutscene(int cutscene);
void Space_StartTakeoffCutscene(void);
void StartLeaveLevelCutscene(LevelId param_1);
void ChangeLevel(LevelId level);
void Space_StartLevelArrival(void);
void Space_DrawShipEngineGlow(float *pos);
void Space_DrawTransitionOverlay(void);
void ____Space_TransitionDrawPass(void);
void Space_DrawLoadingBanner(void);
void ChooseLoadingScreen(void);
void Space_DrawShipEffects(int param_1);
void TransitionDraw_Space(void);
void Space_SpawnShipParticles(void);
void UpdateSpace(void);
void DisplayLoadingScreen(void);
void SpaceTransition_LoadWad(void);
void PlaySpaceMovie(undefined8 param_1);
void STUB_001645c8(...);
void LoadSpacePlate (undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4, int *param_5,int *param_6);
void PlaySpacePlate(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5);
void DoSpaceTransition(void);

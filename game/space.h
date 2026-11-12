#pragma once
// game/space.h
#include "types.h"
#include "game/draw.h"

// ---- types
/* one camera frame of a space scene (title screen and ship cutscenes) */
typedef struct SceneCameraFrame {
    float x, y, z;
    u8 flags[4];                /* 0x0c  copied to GameCamera; the first byte is returned */
    float rotX, rotY, rotZ;     /* 0x10 */
    float xratio;               /* 0x1c  the ship cutscenes set the view's xratio from it */
} SceneCameraFrame;

// ---- globals
extern Cuboid * Cuboids; /* 0xa51bd8 */
extern undefined4 DAT_00653758; /* no defined data */
extern undefined4 DAT_00731bc4; /* 0x731bc4 */
extern undefined4 DAT_00731c00; /* no defined data */
extern undefined4 DAT_00731c90; /* 0x731c90 */
extern undefined4 DAT_00731c94; /* 0x731c94 */
extern undefined4 DAT_00731ed0; /* no defined data */
extern undefined4 DAT_00731f74; /* 0x731f74 */
extern undefined4 DAT_00731f78; /* 0x731f78 */
extern undefined4 DAT_00731f7c; /* 0x731f7c */
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
extern undefined2 DAT_00964594; /* 0x964594 */
extern undefined2 DAT_00964598; /* 0x964598 */
extern undefined4 DAT_009645ac; /* 0x9645ac */
extern undefined4 DAT_009645b0; /* 0x9645b0 */
extern undefined4 DAT_009645b4; /* 0x9645b4 */
extern undefined4 DAT_009645b8; /* 0x9645b8 */
extern undefined4 DAT_009645bc; /* 0x9645bc */
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
extern undefined4 DAT_00a1be80; /* no defined data */
extern undefined4 DAT_00a1bec0; /* no defined data */
extern undefined4 DAT_00a561c4; /* 0xa561c4 */
extern undefined8 DAT_00a561c8; /* 0xa561c8 */
extern undefined8 DAT_00a561d0; /* 0xa561d0 */
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
extern float g_LoadScreenSkyAngles[5]; /* 0x732070 */ /* type set in global_types.tsv */
extern Vec4 g_LoadScreenSkyDirs[5]; /* 0x732020: per loading screen, the direction the sky scrolls (w copied) */ /* type set in global_types.tsv */
extern float g_LoadScreenXRatios[5]; /* 0x732084: the least view xratio of each loading screen */ /* type set in global_types.tsv */
extern int g_ScreenHalfHeight; /* 0x966b0c */
extern Planets g_SeenPlanets; /* 0x96ca0c */
extern Vec4 g_ShipBoardOffsets[3]; /* 0x731c60: where the hero boards, per ship variant (ship space) */ /* type set in global_types.tsv */
extern int g_ShipEngineGlowCnt[3]; /* 0x731dac */ /* type set in global_types.tsv */
extern Vec4 g_ShipEngineGlows[12]; /* 0x731dc0: engine glows (xyz, size in w): 8 for variant 0, 2 each for 1 and 2 */ /* type set in global_types.tsv */
extern Vec4 g_ShipGlowCorners[4]; /* 0x731e80 */ /* type set in global_types.tsv */
extern float g_ShipGlowSt[8]; /* 0x731d8c: QuadDef.st of the engine glow */ /* type set in global_types.tsv */
extern int g_ShipLeaveFrames[3]; /* 0x731d80: frame of the arrival cutscene the ship leaves at, per variant */ /* type set in global_types.tsv */
extern int g_ShipTakeoffPending; /* 0xa15c74: the ship takes off at the end of the frame */ /* type set in global_types.tsv */
extern u32 g_ShipTrailColors[3][2]; /* 0x731f40: trail colour at the ship and at the end, per variant */ /* type set in global_types.tsv */
extern int g_ShipTrailHead; /* 0x9645c0 */ /* type set in global_types.tsv */
extern int g_ShipTrailLen; /* 0x9645c4: points in use */ /* type set in global_types.tsv */
extern float g_ShipTrailSt[8]; /* 0x731f20 */ /* type set in global_types.tsv */
extern float g_ShipTrailWidths[3]; /* 0x731f58 */ /* type set in global_types.tsv */
extern Vec4 g_ShipTrails[2][32]; /* 0x964630: the two engine trails' points, a ring from g_ShipTrailHead */ /* type set in global_types.tsv */
extern int g_SpaceCutscene; /* 0x964590: PlaySpaceCutscene's argument; 3 once a level change is queued */ /* type set in global_types.tsv */
extern SceneCameraFrame *g_SpaceSceneCameraFrames; /* 0x95cda4 */ /* type set in global_types.tsv */
extern int g_SpaceSceneChunk; /* 0x95cd8c */
extern int g_SpaceSceneFrame; /* 0x95cd84 */
extern short g_SpaceSceneMobyCnt; /* 0x95cd94: entries in g_SpaceSceneMobys (read as a halfword) */ /* type set in global_types.tsv */
extern MobyInstance *g_SpaceSceneMobys[8]; /* 0x95cec8: the mobys of the playing space (ship) cutscene */ /* type set in global_types.tsv */
extern int g_SpaceSceneNumFrames; /* 0x95cd90 */
extern float g_SpaceSkyAngle; /* 0xa56164 */ /* type set in global_types.tsv */
extern MobyInstance * g_SpaceshipPtr; /* 0x964570 */
extern short g_SpaceshipVariant; /* 0x964596: 0-2, the ship's oClass - GREEN_SHIP_0213 */ /* type set in global_types.tsv */
extern Vec4 g_TransitionCenter; /* 0xa561e0 */ /* type set in global_types.tsv */
extern Vec4 g_TransitionCenterStart; /* 0x731f70 */ /* type set in global_types.tsv */
extern Vec4 g_TransitionCorners[4]; /* 0x731f80 */ /* type set in global_types.tsv */
extern Vec4 g_TransitionDrift; /* 0x731fc0: how far the centre moves over loading screen 4 */ /* type set in global_types.tsv */
extern float g_TransitionScales[19]; /* 0x731fd0: per level */ /* type set in global_types.tsv */
extern float g_TransitionUv[4][2]; /* 0x731c98 */ /* type set in global_types.tsv */
extern undefined4 g_currentLoadingScreen; /* 0x9645c8 */
extern int g_cutsceneCameraFrame; /* 0x95cd88 */ /* type set in global_types.tsv */
extern undefined4 g_loadingCount; /* 0x9645cc */
extern undefined4 g_newlevelnum; /* 0xa10704 */
extern undefined4 g_shipCameraEndCuboid; /* 0x9645a8 */
extern undefined4 g_shipCameraStartCuboid; /* 0x9645a4 */
extern undefined4 g_shipSplinePath; /* 0x9645a0 */
extern short g_spaceArrivalPending; /* 0x96459c */ /* type set in global_types.tsv */

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
void StartLeaveLevelCutscene(LevelId level);
void ChangeLevel(LevelId level);
void Space_StartLevelArrival(void);
void Space_DrawShipEngineGlow(MobyInstance *moby);
void Space_DrawTransitionOverlay(void);
void ____Space_TransitionDrawPass(void);
void Space_DrawLoadingBanner(int alpha);
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

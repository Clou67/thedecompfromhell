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
extern undefined4 DAT_00653758; /* no defined data */
extern undefined4 DAT_00731bc4; /* 0x731bc4 */
extern undefined4 DAT_00731c00; /* no defined data */
extern undefined4 DAT_00734b00; /* no defined data */
extern undefined4 DAT_0095cda8; /* 0x95cda8 */
extern undefined2 DAT_00964562; /* 0x964562 */
extern undefined2 DAT_00964598; /* 0x964598 */
extern undefined4 DAT_00a10920; /* 0xa10920 */
extern undefined4 DAT_00a1be80; /* no defined data */
extern undefined4 DAT_00a1bec0; /* no defined data */
extern undefined8 DAT_00a561c8; /* 0xa561c8 */
extern undefined8 DAT_00a561d0; /* 0xa561d0 */
extern pointer32 PTR_UpdateMoby_Spaceship_00707c58; /* 0x707c58 */
extern float SceneScreenFade; /* 0x95cf10 */
extern Planets VisitedPlanets; /* 0x96ca20 */
extern undefined1 g_FinishedLoading; /* 0x9636d3 */
extern float g_LoadScreenSkyAngles[5]; /* 0x732070 */ /* type set in global_types.tsv */
extern Vec4 g_LoadScreenSkyDirs[5]; /* 0x732020: per loading screen, the direction the sky scrolls (w copied) */ /* type set in global_types.tsv */
extern float g_LoadScreenXRatios[5]; /* 0x732084: the least view xratio of each loading screen */ /* type set in global_types.tsv */
extern float g_SceneFlash; /* 0x95cf14: white flash over a space cutscene, 0..1 */ /* type set in global_types.tsv */
extern MobyInstance *g_SceneO2Mask; /* 0x964578: the O2 mask moby on the hero in a ship cutscene */ /* type set in global_types.tsv */
extern Planets g_SeenPlanets; /* 0x96ca0c */
extern Vec4 g_ShipBoardOffsets[3]; /* 0x731c60: where the hero boards, per ship variant (ship space) */ /* type set in global_types.tsv */
extern float g_ShipCameraBlend; /* 0x9645b8: 0..1 between the start and end camera cuboids */ /* type set in global_types.tsv */
extern float g_ShipCameraBlendSpeed; /* 0x9645bc */ /* type set in global_types.tsv */
extern int g_ShipEngineGlowCnt[3]; /* 0x731dac */ /* type set in global_types.tsv */
extern Vec4 g_ShipEngineGlows[12]; /* 0x731dc0: engine glows (xyz, size in w): 8 for variant 0, 2 each for 1 and 2 */ /* type set in global_types.tsv */
extern int g_ShipEnvActive; /* 0x731c94 */ /* type set in global_types.tsv */
extern u32 g_ShipEnvColors[4]; /* 0x734a30: per ship class (oClass - 0x212), the reflection's colour */ /* type set in global_types.tsv */
extern int g_ShipEnvForce; /* 0x731c90: 1 = update the uvs once even when off (then 2) */ /* type set in global_types.tsv */
extern Vec4 *g_ShipEnvNormals[4]; /* 0x734a60 */ /* type set in global_types.tsv */
extern int g_ShipEnvQuadCnt[4]; /* 0x734a50 */ /* type set in global_types.tsv */
extern short *g_ShipEnvQuads[4]; /* 0x734a80: 4 (vertex, unused) pairs per quad */ /* type set in global_types.tsv */
extern int g_ShipEnvTimer; /* 0xa561c4 */ /* type set in global_types.tsv */
extern float g_ShipEnvUv[102][2]; /* 0xa56850: its sphere-mapped uvs */ /* type set in global_types.tsv */
extern float g_ShipEnvUvPrev[102][2]; /* 0xa56b80: the uvs when the reflection last went off, blended from */ /* type set in global_types.tsv */
extern int g_ShipEnvVertCnt[4]; /* 0x734a40 */ /* type set in global_types.tsv */
extern Vec4 *g_ShipEnvVerts[4]; /* 0x734a70 */ /* type set in global_types.tsv */
extern Vec4 g_ShipEnvWorld[102]; /* 0xa561f0: the reflection mesh in world space */ /* type set in global_types.tsv */
extern float g_ShipFlightParam; /* 0x9645ac: position along the flight spline */ /* type set in global_types.tsv */
extern float g_ShipFlightSegLen; /* 0x9645b4 */ /* type set in global_types.tsv */
extern float g_ShipFlightSpeed; /* 0x9645b0 */ /* type set in global_types.tsv */
extern Vec4 g_ShipGlowCorners[4]; /* 0x731e80 */ /* type set in global_types.tsv */
extern float g_ShipGlowSt[8]; /* 0x731d8c: QuadDef.st of the engine glow */ /* type set in global_types.tsv */
extern int g_ShipLeaveFrames[3]; /* 0x731d80: frame of the arrival cutscene the ship leaves at, per variant */ /* type set in global_types.tsv */
extern Vec4 g_ShipLiftFrom; /* 0x9645f0: the ship as it starts to lift off */ /* type set in global_types.tsv */
extern Vec4 g_ShipLiftFromRot; /* 0x964610 */ /* type set in global_types.tsv */
extern float g_ShipLiftPitch; /* 0x964624 */ /* type set in global_types.tsv */
extern Vec4 g_ShipLiftTo; /* 0x964600: the flight spline's first point */ /* type set in global_types.tsv */
extern float g_ShipLiftYaw; /* 0x964628 */ /* type set in global_types.tsv */
extern Vec4 g_ShipParticleOffsets[3][6]; /* 0x7320a0: engine particle emitters per ship variant (ship space) */ /* type set in global_types.tsv */
extern MobyInstance *g_ShipRiderClank; /* 0x964584 */ /* type set in global_types.tsv */
extern Vec4 g_ShipRiderOffsets[2][3]; /* 0x7321c0: Ratchet's then Clank's seat per variant (ship space) */ /* type set in global_types.tsv */
extern MobyInstance *g_ShipRiderRatchet; /* 0x964580: Ratchet riding the flying ship */ /* type set in global_types.tsv */
extern int g_ShipTakeoffPending; /* 0xa15c74: the ship takes off at the end of the frame */ /* type set in global_types.tsv */
extern int g_ShipTakeoffSkipFrames[3]; /* 0x732220: frame the take-off cutscene skips to, per variant */ /* type set in global_types.tsv */
extern u32 g_ShipTrailColors[3][2]; /* 0x731f40: trail colour at the ship and at the end, per variant */ /* type set in global_types.tsv */
extern int g_ShipTrailHead; /* 0x9645c0 */ /* type set in global_types.tsv */
extern int g_ShipTrailLen; /* 0x9645c4: points in use */ /* type set in global_types.tsv */
extern Vec4 g_ShipTrailOffsets[3][2]; /* 0x731ec0: the two engine trails' origins per variant (ship space) */ /* type set in global_types.tsv */
extern float g_ShipTrailSt[8]; /* 0x731f20 */ /* type set in global_types.tsv */
extern float g_ShipTrailWidths[3]; /* 0x731f58 */ /* type set in global_types.tsv */
extern Vec4 g_ShipTrails[2][32]; /* 0x964630: the two engine trails' points, a ring from g_ShipTrailHead */ /* type set in global_types.tsv */
extern Vec4 g_SpaceArrivalPos; /* 0x9645d0: where the hero is put after a landing cutscene */ /* type set in global_types.tsv */
extern Vec4 g_SpaceArrivalRot; /* 0x9645e0 */ /* type set in global_types.tsv */
extern int g_SpaceCutscene; /* 0x964590: PlaySpaceCutscene's argument; 3 once a level change is queued */ /* type set in global_types.tsv */
extern short g_SpaceCutsceneTimer; /* 0x964594: frames into the current space cutscene (starts at -1) */ /* type set in global_types.tsv */
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
void Space_DrawShipEffects(MobyInstance *moby);
void TransitionDraw_Space(void);
void Space_SpawnShipParticles(MobyInstance *ship, float zVel);
void UpdateSpace(void);
void DisplayLoadingScreen(void);
void SpaceTransition_LoadWad(void);
void PlaySpaceMovie(int movie);
void STUB_001645c8(...);
void LoadSpacePlate(int plate, int texA, int texB, u32 *outHeaders, u32 *outTexA, u32 *outTexB);
void PlaySpacePlate(int plate, int texA, int texB, int frames, int loadLevel);
void DoSpaceTransition(void);

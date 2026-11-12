#pragma once
// game/update.h
#include "types.h"

// ---- types
/* the header of one credits image (credits[N].ps3); the first word is the image's texture data,
   relocated by the address its .vram was loaded to */
typedef struct CreditsImage {
    u32 texData;             /* 0x00 */
    u32 unk04[8];            /* 0x04 */
} CreditsImage;

/* the credits mode (g_gameMode GAME_MODE_PUZZLE), 0x58 bytes at 0xa15c1c */
typedef struct CreditsState {
    s16 state;               /* 0x00  0 scrolling, 1 loading the next image */
    s16 image;               /* 0x02  the image scrolling, an index into g_CreditsImageLength */
    s16 loadTimer;           /* 0x04  frames in state 1 */
    s16 frame;               /* 0x06  scroll position, in frames */
    u32 vram[2];             /* 0x08  where the two .vram halves load */
    CreditsImage images[2];  /* 0x10  the image on screen, then the one loaded next */
} CreditsState;

// ---- globals
extern undefined4 DAT_0073875c; /* 0x73875c */
extern undefined4 DAT_007387f0; /* no defined data */
extern undefined4 DAT_0096b2d0; /* 0x96b2d0 */
extern undefined4 DAT_00a1bf80; /* no defined data */
extern undefined4 DAT_00e5a634; /* 0xe5a634 */
extern int Profile; /* 0x95c5d8 */ /* type set in global_types.tsv */
extern CreditsState g_Credits; /* 0xa15c1c */ /* type set in global_types.tsv */
extern int g_CreditsImageLength[]; /* 0x72075c: frames each credits image scrolls for */ /* type set in global_types.tsv */
extern u32 g_DialogLine; /* 0xa15c10: that dialog's state, Dialog_Advance's second argument */ /* type set in global_types.tsv */
extern u32 g_DialogMoby; /* 0xa15c0c: the moby whose dialog started the scene or movie playing */ /* type set in global_types.tsv */
extern undefined4 g_FramesSinceStateChange; /* 0xa1070c */
extern int g_IdleFrames; /* 0x738830 */
extern int g_MovieLanguage; /* 0xe5a638 */
extern undefined4 g_MovieParam0; /* 0xe5a630 */
extern u32 g_MovieVramSave; /* 0xe5a640: where mode_movieUnInit stores GS memory */ /* type set in global_types.tsv */
extern float g_SceneCheatDolly; /* 0x00a15f30: camera pull back along forward with Cheats[0] */ /* type set in global_types.tsv */
extern float g_SceneCheatZoom; /* 0x71fbd8: xratio scale with Cheats[0] */ /* type set in global_types.tsv */
extern u16 g_SceneFramesWritten; /* 0x95cda2 */ /* type set in global_types.tsv */
extern u32 g_SceneHideMoby; /* 0xa52c98: a moby disabled while a scene plays (set by the pause menu) */ /* type set in global_types.tsv */
extern u8 g_SceneSavedCamFlags[4]; /* 0x95cd5c: GameCamera's bytes at 0x14c while a scene plays */ /* type set in global_types.tsv */
extern float g_SceneSavedCamPos[3]; /* 0x95cd50: GameCamera's position while a scene plays */ /* type set in global_types.tsv */
extern char g_SceneSavedCamUnderWater; /* 0x95cd9b */
extern short g_SceneSpeechFrame; /* 0x95cd96: the scene frame its speech starts on */ /* type set in global_types.tsv */
extern u32 g_StepButtons; /* 0x95c660: the buttons held at the last debug step */ /* type set in global_types.tsv */
extern int g_StepFrames; /* 0x95c6ac: frames left of a 6-frame debug step */ /* type set in global_types.tsv */
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
char UpdateSceneCamera(void);
void UpdateScene(void);
void StartMovie(int arg0, int arg1, int language);
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

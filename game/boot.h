#pragma once
// game/boot.h
#include "types.h"
#include "game/sound.h"
#include "idol/mUnk.h"

// ---- types
/* an ambient sound of the title scene (@0x71cb5c, ends with start == -1) */
typedef struct SceneSound {
    int start;               /* scene frame it starts at */
    int end;                 /* and stops after; -1 plays to the end of the loop */
    int sound;
    int handle;              /* the playing channel, -1 none */
} SceneSound;

// ---- globals
extern undefined4 Cutscene; /* 0x966aec */
extern undefined4 DAT_00651080; /* no defined data */
extern undefined4 DAT_0066173c; /* no defined data */
extern undefined4 DAT_0071c980; /* 0x71c980 */
extern undefined4 DAT_0071cc08; /* 0x71cc08 */
extern undefined4 DAT_0071cc2c; /* no defined data */
extern undefined4 DAT_0071ccc0; /* 0x71ccc0 */
extern undefined4 DAT_0071cce4; /* no defined data */
extern undefined4 DAT_00731f40; /* 0x731f40 */
extern undefined4 DAT_00731f44; /* 0x731f44 */
extern undefined4 DAT_00731f48; /* 0x731f48 */
extern undefined4 DAT_00731f4c; /* 0x731f4c */
extern undefined4 DAT_00731f50; /* 0x731f50 */
extern undefined4 DAT_00731f54; /* 0x731f54 */
extern void *DAT_008fa630; /* 0x8fa630 */ /* type set in global_types.tsv */
extern undefined4 DAT_00902e9c; /* 0x902e9c */
extern void *DAT_009030e4; /* 0x9030e4: the object at 0x90d98c */ /* type set in global_types.tsv */
extern u8 *DAT_0090d714; /* 0x90d714 */ /* type set in global_types.tsv */
extern undefined4 DAT_0090d718; /* 0x90d718 */
extern undefined4 DAT_0090d71c; /* 0x90d71c */
extern undefined4 DAT_0090d720; /* 0x90d720 */
extern undefined4 DAT_0090d770; /* 0x90d770 */
extern undefined1 DAT_0090d774; /* 0x90d774 */
extern undefined4 DAT_0090d7c8; /* 0x90d7c8 */
extern undefined4 DAT_0090d7cc; /* 0x90d7cc */
extern undefined4 DAT_0090d7d0; /* 0x90d7d0 */
extern undefined4 DAT_0090d7d4; /* 0x90d7d4 */
extern undefined1 DAT_0090d7d8; /* 0x90d7d8 */
extern undefined1 DAT_0090d7d9; /* 0x90d7d9 */
extern undefined4 DAT_0090d7dc; /* 0x90d7dc */
extern undefined4 DAT_0090d7e0; /* 0x90d7e0 */
extern undefined4 DAT_0090d7e4; /* 0x90d7e4 */
extern undefined4 DAT_0090d7e8; /* 0x90d7e8 */
extern undefined4 DAT_0090d7ec; /* 0x90d7ec */
extern undefined4 DAT_0090d7f0; /* 0x90d7f0 */
extern undefined4 DAT_0090d7f4; /* 0x90d7f4 */
extern undefined4 DAT_0090d7f8; /* 0x90d7f8 */
extern undefined1 DAT_0090d7fc; /* 0x90d7fc */
extern undefined1 DAT_0090d7fd; /* 0x90d7fd */
extern undefined4 DAT_0090d800; /* 0x90d800 */
extern undefined4 DAT_0090d804; /* 0x90d804 */
extern undefined4 DAT_0090d808; /* 0x90d808 */
extern undefined4 DAT_0090d80c; /* 0x90d80c */
extern undefined4 DAT_0090d810; /* 0x90d810 */
extern undefined4 DAT_0090d814; /* 0x90d814 */
extern undefined4 DAT_0090d818; /* 0x90d818 */
extern undefined4 DAT_0090d81c; /* 0x90d81c */
extern undefined1 DAT_0090d820; /* 0x90d820 */
extern undefined1 DAT_0090d821; /* 0x90d821 */
extern undefined4 DAT_0090d824; /* 0x90d824 */
extern undefined4 DAT_0090d828; /* 0x90d828 */
extern undefined4 DAT_0090d82c; /* 0x90d82c */
extern undefined4 DAT_0090d830; /* 0x90d830 */
extern undefined4 DAT_0090d834; /* 0x90d834 */
extern undefined1 DAT_0090d838; /* 0x90d838 */
extern undefined4 DAT_0090d83c; /* 0x90d83c */
extern undefined4 DAT_0090d840; /* 0x90d840 */
extern undefined4 DAT_0090d844; /* 0x90d844 */
extern undefined4 DAT_0090d848; /* 0x90d848 */
extern undefined4 DAT_0090d84c; /* 0x90d84c */
extern undefined1 DAT_0090d850; /* 0x90d850 */
extern undefined1 DAT_0090d851; /* 0x90d851 */
extern undefined4 DAT_0090d854; /* 0x90d854 */
extern undefined4 DAT_0090d858; /* no defined data */
extern undefined4 DAT_0090d8f8; /* 0x90d8f8 */
extern undefined4 DAT_0090d8fc; /* 0x90d8fc */
extern undefined4 DAT_0090d98c; /* 0x90d98c */
extern undefined4 DAT_0090dad0; /* 0x90dad0 */
extern undefined4 DAT_009260d0; /* 0x9260d0 */
extern undefined4 DAT_009260d8; /* no defined data */
extern undefined4 DAT_00926181; /* no defined data */
extern undefined4 DAT_009265a0; /* 0x9265a0 */
extern undefined1 DAT_009265a4; /* 0x9265a4 */
extern undefined4 DAT_00926728; /* 0x926728 */
extern undefined1 DAT_0092672c; /* 0x92672c */
extern undefined4 DAT_00926730; /* 0x926730 */
extern undefined4 DAT_00926734; /* no defined data */
extern undefined4 DAT_0092674c; /* 0x92674c */
extern undefined4 DAT_00926750; /* 0x926750 */
extern undefined4 DAT_00926754; /* no defined data */
extern undefined4 DAT_00926bec; /* 0x926bec */
extern undefined4 DAT_00926bf0; /* 0x926bf0 */
extern undefined4 DAT_00926bf4; /* 0x926bf4 */
extern undefined4 DAT_00926bf8; /* 0x926bf8 */
extern undefined4 DAT_00926bfc; /* 0x926bfc */
extern undefined4 DAT_00926c00; /* no defined data */
extern undefined4 DAT_00927118; /* 0x927118 */
extern undefined4 DAT_0092711c; /* 0x92711c */
extern undefined4 DAT_00927130; /* 0x927130 */
extern undefined4 DAT_00927134; /* 0x927134 */
extern undefined4 DAT_009271d0; /* 0x9271d0 */
extern undefined4 DAT_009271d4; /* 0x9271d4 */
extern int *DAT_009271f8; /* 0x9271f8 */ /* type set in global_types.tsv */
extern undefined1 DAT_009637cb; /* 0x9637cb */
extern u32 *DAT_00964564; /* 0x964564: the initialised-data records */ /* type set in global_types.tsv */
extern undefined4 DAT_0096c1e4; /* 0x96c1e4 */
extern undefined4 DAT_0096c1e8; /* 0x96c1e8 */
extern undefined4 DAT_0096c1ec; /* 0x96c1ec */
extern undefined4 DAT_0096c1f0; /* 0x96c1f0 */
extern undefined4 DAT_0096c1f4; /* 0x96c1f4 */
extern undefined4 DAT_0096c1f8; /* 0x96c1f8 */
extern undefined4 DAT_00a0f51c; /* no defined data */
extern undefined4 DAT_00a0f5b0; /* no defined data */
extern undefined4 DAT_00a0f6e4; /* no defined data */
extern undefined4 DAT_00a10680; /* no defined data */
extern undefined4 DAT_00a10724; /* 0xa10724 */
extern int *DAT_00a108fc; /* 0xa108fc: the level's gameplay file */ /* type set in global_types.tsv */
extern undefined4 DAT_00a10908; /* 0xa10908 */
extern undefined4 DAT_00a15c74; /* 0xa15c74 */
extern undefined4 DAT_00a15c84; /* 0xa15c84 */
extern undefined4 DAT_00a15f7c; /* 0xa15f7c */
extern undefined4 DAT_00a15f80; /* 0xa15f80 */
extern undefined4 DAT_00a1a7b8; /* 0xa1a7b8 */
extern undefined4 DAT_00a1a7bc; /* 0xa1a7bc */
extern undefined4 DAT_00a1bfd8; /* 0xa1bfd8 */
extern undefined1 DAT_00a52e60; /* 0xa52e60 */
extern undefined4 DAT_00a561c0; /* 0xa561c0 */
extern undefined4 DAT_00cd4000; /* no defined data */
extern undefined4 DAT_00cd4070; /* 0xcd4070 */
extern undefined4 DAT_0159b388; /* 0x159b388 */
extern GSMEM_UNUSED GSmem; /* 0x966ad8 */
extern undefined4 Gameplay; /* 0xa108f0 */
extern undefined MobyMipDists; /* 0xa37b90 */
extern undefined MobyTexLookup; /* 0xa38290 */
extern pointer PTR_DAT_008fa62c; /* 0x8fa62c */
extern pointer PTR_DAT_00902e98; /* 0x902e98 */
extern pointer32 PTR_FUN_007108d0; /* 0x7108d0 */
extern pointer PTR_PTR_00661790; /* 0x661790 */
extern undefined * PTR_PTR_00661820; /* 0x661820 */
extern undefined * PTR_PTR_00661878; /* 0x661878 */
extern undefined * PTR_PTR_00661898; /* 0x661898 */
extern undefined * PTR_PTR_00661940; /* 0x661940 */
extern pointer PTR_PTR_00661960; /* 0x661960 */
extern undefined * PTR_PTR_00666410; /* 0x666410 */
extern ShrubInstance *ShrubInstanceBase; /* 0xa1a794 */ /* type set in global_types.tsv */
extern undefined4 ShrubInstanceCnt; /* 0xa1a798 */
extern ShrubInstance *ShrubInstanceEnd; /* type set in global_types.tsv */
extern int TieClassIndex; /* 0xe583f0: TieClasses used (DL name) */ /* type set in global_types.tsv */
extern u8 TieClassLookup[0xc00]; /* 0xe577f0: oClass -> index in TieClasses (DL name) */ /* type set in global_types.tsv */
extern int TieClassRef[128]; /* 0xe576f0: their oClass (DL name) */ /* type set in global_types.tsv */
extern undefined4 TieCnt; /* 0xe583fc */
extern undefined4 TieCntBase; /* 0xa18388 */
extern TieInstance *TieInstanceBase; /* 0xa18384 */ /* type set in global_types.tsv */
extern TieInstance * TieInstanceEnd; /* 0xe583f8 */
extern uint UINT_ARRAY_0096c1dc[2]; /* 0x96c1dc */
extern struct BinkPlayer g_BinkPlayerObject; /* 0x927078: what g_pBinkPlayer normally points at */ /* type set in global_types.tsv */
extern u32 g_BootSoundBank; /* 0x71f404 */ /* type set in global_types.tsv */
extern SoundDef g_BootSoundDefs[13]; /* 0x71c984: the boot sound bank's defs; [7..11] belong to the frame class */ /* type set in global_types.tsv */
extern u8 *g_FontVram; /* 0xa10930: 0x100000 bytes, the Japanese font texture */ /* type set in global_types.tsv */
extern int g_FrontEndLogoAlpha; /* 0x90d708 */
extern int g_FrontEndPressStartAlpha; /* 0x90d70c */
extern int g_FrontEndTimer; /* 0x90d710 */
extern undefined4 g_JapanLogoTex; /* 0x90d748 */
extern int g_LogoMovieDone; /* 0x969cd8 */
extern void *g_MobyClassUpdates[240]; /* 0xa34f80: update function per mClass (follows MobyClasses) */ /* type set in global_types.tsv */
extern undefined4 g_boltsMined; /* 0xa0fd18 */
extern undefined4 g_loadingPlanet; /* 0xa10700 */
extern struct BinkPlayer *g_pBinkPlayer; /* 0x8fa410 */ /* type set in global_types.tsv */
extern u32 *g_pDebugCounterMode; /* 0x9271fc */ /* type set in global_types.tsv */
extern int * g_pLocaleBuffer; /* 0xa1092c */
extern void * g_pNextMainFunc; /* 0x71cc70 */
extern const char *s_LanguageNames[]; /* 0x71cb3c: "english", ... */ /* type set in global_types.tsv */
extern SceneSound s_SceneSounds[]; /* 0x71cb5c */ /* type set in global_types.tsv */

// ---- functions
void _init(void);
int STUB_00010230_RET_0(void);
void PlayLogoMovie(void);
const char *GetLanguageNameByIdx(void);
void PlayAttractMovie(int idx);
void ZeroFillKeyGlobals(void);
void FrontEnd_DrawLogo(void);
char FrontEnd_UpdateSceneCamera(void);
void FrontEnd_Draw(void);
void FrontEnd_Update(void);
int IsSoundHandlePlaying(int handle, int soundId);
void STUB_0001152c(void);
void LoadLanguageHelpMsgs(void);
u8 *LoadGameplay(int *gameplay, int size);
void Load_Front_End(void);
void PrepareFrontbin(void);
void DrawSplashScreen(void *tex);
void ShowSplash(void *tex, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames);
void LoadAndShowSplash(char *path, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames);
void GameStart(void);
void LoadAndShowSplashVram(char *texPath, char *vramPath, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames);
void Transition_DrawSky(void);
void ____SectionHeader_Boot_13a0c(void);
void GameShutDown(void);
void sysutil_gameexit_callback(u64 status, u64 param, void *userData);
u32 CopyInitDataRecords(void);
void ResetLevelGlobals(void);
int boot(int argc, char **argv, char **envp);
void StaticDestroy_BootGlobals(void);
void StaticInit_BootGlobals(void);

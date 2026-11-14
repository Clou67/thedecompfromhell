#pragma once
// idol/idol.h
#include "types.h"
#include "idol/sound.h"

// ---- types
/* Idol's string table (Locale_GetInstance: a 0x1c-byte singleton @*0x902ec4) */
typedef struct LocaleEntry {
    int id;                  /* 0x00  string id + a per-language base */
    int unk04;
    char *text;              /* 0x08 */
} LocaleEntry;
typedef struct Localizer {
    int (*getLanguage)(void);/* 0x00 */
    u32 unk04;               /* 0x04 */
    int count;               /* 0x08  entries */
    int unk0c;               /* 0x0c  Locale_Load's third argument */
    void *buffer;            /* 0x10  Locale_Load's second argument */
    u8 loaded;               /* 0x14 */
    u8 _pad15[3];
    LocaleEntry *entries;    /* 0x18 */
} Localizer;
typedef char Localizer_size_check[sizeof(Localizer) == 0x1c ? 1 : -1];

// ---- globals
extern undefined4 DAT_0065f8dc; /* no defined data */
extern undefined4 DAT_0065f8e4; /* no defined data */
extern undefined4 DAT_0065f8ec; /* no defined data */
extern undefined4 DAT_0065f8f4; /* no defined data */
extern undefined4 DAT_0065f8fc; /* no defined data */
extern undefined4 DAT_0065f904; /* no defined data */
extern undefined4 DAT_00902ec4; /* 0x902ec4 */
extern undefined1 DAT_0159b84c; /* 0x159b84c */
extern undefined1 DAT_0159b88b; /* 0x159b88b */
extern undefined4 DAT_0159bb0c; /* 0x159bb0c */
extern undefined4 DAT_0159bb10; /* 0x159bb10 */
extern undefined1 DAT_0159c320; /* 0x159c320 */
extern undefined4 DAT_0159c328; /* 0x159c328 */
extern pointer32 PTR_FUN_00711e30; /* 0x711e30 */

// ---- functions
namespace idol { undefined8 m_LoadGameFileS(uint arg1,char *str); } 
namespace idol { undefined8 PRINT_m_LoadGameFile(uint arg2,char *arg1); } 
namespace idol { void *m_LoadGameFileB(void *param_1,const char *param_2); } 
undefined8 m_LoadSceneFile(void);
uint StrHashFnv1(byte *param_1);
uint StrHashFnv1N(byte *param_1,int param_2);
undefined8 StrStartsWith(char *param_1,char *param_2);
undefined8 StrEndsWith(char *param_1,char *param_2);
char * StrGetExtension(char *param_1);
char * StrSetExtension(char *param_1,undefined8 param_2,char *param_3);
void IdTable_Init(int param_1);
Localizer *Locale_GetInstance(void);
void IdTable_Init_2(int param_1);
void IdTable_Load(int param_1,char *param_2);
void Locale_Load(Localizer *param_1,void *param_2,int param_3,int (*param_4)(void),const char *param_5);
int IdTable_FindIndex(int param_1,int param_2);
undefined8 FUN_00503b10(undefined4 *param_1,int param_2);
char *Locale_GetString(Localizer *param_1,int param_2);
int IdTable_GetValue(int param_1,int param_2);
char *Locale_Convert(Localizer *param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6);
void STUB_00503df8(void);
void STUB_00503dfc(void);
int LoadAssetFromFile(const char *param_1,void *param_2,int param_3);
int LoadFileBlocking(const char *param_1,u32 param_2,int param_3);
void FiosCloseAndDeleteOp(int param_1);
int GetFileSize(const char *param_1);
void WriteTgaFile(undefined8 param_1,undefined8 param_2,int param_3,int param_4);
void *HWSystem_MainHeap(void *param_1);
void HWSystem_InitVideoHeap(longlong param_1,undefined8 param_2,undefined4 param_3);
void HWSystem_InitScratchHeap(u8 *param_1);
namespace idol { void InitGameGraphics(u8 *param_1); } 
void LoadDialogMessages(u8 *param_1);
namespace idol { void GameAuthenticate(u8 *param_1,char *param_2,char *param_3); } 
void FUN_0050476c(void);
void STUB_005048f4(void);
void HWSystem_Yield(void);
void HWSystem_SleepMs(undefined8 param_1,int param_2);
void HWSystem_ActivateSku(u8 *param_1,const char *param_2,int param_3);
namespace idol { void CheckLicense(int *unk1,const char *glow_rgba,char *gameId,char *gameIdExt,bool isDisc,int param_6); } 
undefined4 HWSystem_SkuUnk18(int param_1);
undefined4 HWSystem_SkuUnk1c(int param_1);
undefined4 HWSystem_SkuUnk20(int param_1);
undefined4 HWSystem_SkuUnk1cOrParent(int param_1);
undefined4 HWSystem_SkuUnk20OrParent(int param_1);
int HWSystem_CurrentSku(int param_1);
int HWSystem_ParentSku(int param_1);
u8 HWSystem_SkuUnk24(void *param_1);
ulonglong HWSystem_IsRegion(int param_1,int param_2);
void TextFmt_Init(int param_1);
void TextFmt_Init_2(int param_1);
byte * TextFmt_ParseEscape(undefined8 param_1,int param_2,undefined1 *param_3);
ulonglong TextFmt_IsEscape(undefined8 param_1,byte *param_2);
undefined8 TextFmt_IsShortEscape(undefined8 param_1,char *param_2);
undefined8 TextFmt_IsEscapeCommand(undefined8 param_1,char *param_2,char param_3);
undefined8 TextFmt_IsEscape4(undefined8 param_1,char *param_2);
longlong TextFmt_Splice(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5);
char * TextFmt_Expand(int param_1,char *param_2);
undefined8 TextFmt_CallHandler(int param_1,byte *param_2);
undefined8 TextFmt_GetFloat(int param_1,undefined8 param_2,float *param_3);
void TextFmt_SetParamStr(int param_1,uint param_2,undefined8 param_3);
void TextFmt_SetParamInt(int param_1,uint param_2,int param_3);
void TextFmt_InitGlobal(void);
void FUN_005055e8(undefined8 param_1,undefined4 *param_2);
void AudioInit(u8 *param_1);
void AudioShutdown(void);
undefined4 AudioGetChannelCount(void);
void AudioAllocSized(undefined4 param_1);
void STUB_00505808(void);
void FUN_00505810(void);
void FUN_005058a0(void);
int snd_InitVAGStreamingEx(int param_1,int param_2,int param_3,int param_4);
void FUN_00505acc(void);
undefined8 STUB_00505af0_RET_0(void);
void snd_AutoReverb(int param_1,int param_2,int param_3,int param_4);
undefined8 STUB_00505afc_RET_0(void);
undefined8 STUB_00505b04_RET_0(void);
void SndBankLoadFromMem(void);
void Sound_LoadBank(u8 *param_1,u8 *param_2,u32 *param_3);
void SndBankLoadWithCallback(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4);
int snd_BankLoadByPath(const char *param_1,int param_2);
void STUB_00505cf8(void);
void snd_ContinueVAGStream(u32 param_1);
undefined8 STUB_00505d20(...);
int snd_GetDopplerPitchMod(int param_1);
void FUN_00505d78(undefined4 param_1,undefined4 *param_2,undefined8 param_3);
void snd_GetVAGStreamTimeRemaining_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void snd_IsVAGStreamBuffered_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void snd_PauseVAGStream(u32 param_1);
void STUB_00505f3c(...);
void STUB_00505f40(...);
void STUB_00505f44(...);
void STUB_00505f48(...);
void STUB_00505f4c(...);
void STUB_00505f50(...);

#pragma once
// game/memcard.h
#include "types.h"

// ---- types
struct mc_data { /* DL struct mc_data (memcard.cpp): save chunk descriptor, list terminated by addr==0 */
    void *addr;
    int size;
    int iff;
    int mark;
};

// ---- globals
extern undefined4 DAT_00652bf8; /* no defined data */
extern undefined4 DAT_00652c00; /* no defined data */
extern undefined4 DAT_0071fad8; /* no defined data */
extern undefined4 DAT_0071faf4; /* 0x71faf4 */
extern undefined4 DAT_0072666c; /* 0x72666c */
extern undefined2 DAT_0072b330; /* 0x72b330 */
extern undefined2 DAT_0072b33c; /* 0x72b33c */
extern undefined2 DAT_0072b348; /* 0x72b348 */
extern undefined2 DAT_0072b354; /* 0x72b354 */
extern undefined4 DAT_00969ca4; /* 0x969ca4 */
extern undefined4 DAT_0096ca08; /* 0x96ca08 */
extern undefined4 DAT_0096ca34; /* no defined data */
extern undefined4 DAT_00a0cbc4; /* no defined data */
extern undefined4 DAT_00a2088d; /* no defined data */
extern undefined1 DAT_00a2308d; /* 0xa2308d */
extern undefined1 DAT_00a2308e; /* 0xa2308e */
extern undefined4 DAT_00a23094; /* 0xa23094 */
extern undefined1 DAT_00a23098; /* 0xa23098 */
extern pointer32 PTR_memcard_RestoreSaveGame_00705f80; /* 0x705f80 */
extern pointer32 PTR_memcard_ReturnLang_00705f10; /* 0x705f10 */
extern pointer32 PTR_memcard_printGameSaved_00705f88; /* 0x705f88 */
extern pointer32 PTR_memcard_print_LoadingCB_PS3_00705f98; /* 0x705f98 */
extern pointer32 PTR_memcard_print_SavingGameCB_PS3_00705f90; /* 0x705f90 */
extern pointer32 PTR_memcard_print_TimeForPain_00705f78; /* 0x705f78 */
extern undefined4 SaveDataPtr; /* 0xa10928 */
extern undefined1 g_FrontEnd; /* 0xa15f38 */
extern int g_loaderr; /* 0xa20888 */
extern int g_memcardGameSaved; /* 0x71fb20 */
extern char g_memcardPollDone; /* 0xa2088c */
extern int g_memcardRestoredBolts; /* 0xa23090 */
extern int g_memcardSaveBusy; /* 0x111160c */
extern char g_memcardSaveString[256]; /* 0xa244a8 */
extern int g_memcardSaveSysState; /* 0x8fa644 */
extern int g_memcardStrBufIdx; /* 0xa244a0 */
extern char g_memcardStrBufs[5120]; /* 0xa230a0 */
extern int g_memcardWaitDialog; /* 0xa2309c */
extern pointer mc_gamedata; /* 0x726690 */
extern pointer mc_leveldata; /* 0x7269a0 */

// ---- functions
void SECTION_HEADER_MEMCARD(void);
void memcard_GetName(char *buff);
undefined8 STUB_000e6c78(...);
int memcard_GetDataSize(mc_data *mcd);
int memcard_RestoreData(char *addr,int index,mc_data *mcd);
void memcard_RestoreGame(char *addr);
void memcard_SetupNewGameGlobals(void);
void memcard_ResetGame(void);
int memcard_GetSaveSysState(void);
void memcard_Update(void);
undefined8 STUB_000e7844(...);
int memcard_PrepData(char *addr,int index,mc_data *mcd);
void memcard_MakeWholeSave(char *addr);
int memcard_ReturnLang(void);
void memcard_InitSaveMsg(void);
undefined8 STUB_000e7b6c(...);
void memcard_RestoreInfo(char *addr,int slot,int index);
char * memcard_GetSaveMsgString(int idx);
void memcard_ConvertSaveMsgString(char *str,void *arg);
char * memcard_FixupAccentChars(char *str);
int memcard_ConstructPlanetString(char *buf,int id);
char * memcard_ConstructSaveString(char *buf);
void memcard_SetSaveDialogStrings(void);
int memcard_IsSaveSystemIdle(void);
void memcard_PerformOperation(int mode);
int memcard_Save(int force,int level);
void memcard_print_TimeForPain(void);
undefined8 memcard_RestoreSaveGame(undefined8 param_1,char *param_2);
undefined8 memcard_printGameSaved(undefined8 param_1);
undefined8 memcard_print_SavingGameCB_PS3(void);
undefined8 memcard_print_LoadingCB_PS3(undefined8 param_1);
int memcard_PollSaveResult(void);

#pragma once
// idol/gamecontent.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065ae20; /* no defined data */
extern undefined4 DAT_0065b0a8; /* no defined data */
extern undefined4 DAT_0065b0b0; /* no defined data */
extern undefined4 DAT_0065b0b8; /* no defined data */
extern undefined4 DAT_0065b0c0; /* no defined data */
extern undefined1 DAT_0065b13c; /* 0x65b13c */
extern undefined1 DAT_0065b13d; /* 0x65b13d */
extern undefined1 DAT_0065b1bc; /* 0x65b1bc */
extern undefined1 DAT_0065b1bd; /* 0x65b1bd */
extern undefined1 DAT_0065b23c; /* 0x65b23c */
extern undefined1 DAT_0065b23d; /* 0x65b23d */
extern undefined1 DAT_0065b2bc; /* 0x65b2bc */
extern undefined1 DAT_0065b2bd; /* 0x65b2bd */
extern undefined1 DAT_0065b33c; /* 0x65b33c */
extern undefined1 DAT_0065b33d; /* 0x65b33d */
extern undefined1 DAT_0065b3dc; /* 0x65b3dc */
extern undefined1 DAT_0065b3dd; /* 0x65b3dd */
extern undefined1 DAT_0065b47c; /* 0x65b47c */
extern undefined1 DAT_0065b47d; /* 0x65b47d */
extern undefined1 DAT_0065b51c; /* 0x65b51c */
extern undefined1 DAT_0065b51d; /* 0x65b51d */
extern undefined4 DAT_008fabd4; /* 0x8fabd4 */
extern undefined4 DAT_008fabd8; /* 0x8fabd8 */
extern undefined1 DAT_01592400; /* 0x1592400 */
extern undefined4 DAT_01592408; /* no defined data */
extern pointer32 PTR_FUN_00710298; /* 0x710298 */

// ---- functions
void GameContent_Ctor(u8 *param_1);
void GameContent_Ctor_2(void);
undefined8 GameContent_StartThread(undefined4 param_1);
undefined8 GameContent_Thread(int *param_1);
void GameContent_Start(u8 *param_1,int param_2,int param_3,int param_4);
void GameContent_SetRequest(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int GameContent_GetPath(int param_1);
bool GameContent_BootCheck(int param_1,uint param_2,char param_3);
void GameContent_GetHddGameParameters(longlong param_1);
void STUB_004ee954(void);
void GameContent_CreateGameData(int param_1);
void GameContent_CheckGameData(int param_1);
void GameContent_GetParamSfo(int param_1);
undefined8 GameContent_BootCheck_2(int param_1);
void GameContent_Run(undefined4 *param_1);
void GameContent_ThreadEntry(undefined4 param_1);
longlong ParseUrlHost(longlong param_1);
void PathBuffer_Clear(undefined8 param_1);
void PathBuffer_Clear_2(undefined8 param_1);
u8 *FileSys_Get(void);
char * GameContent_ExecuteSelf(char *param_1,undefined8 param_2);
char *FileSys_ResolvePath(u8 *param_1,const char *param_2,char *param_3);
char * ResolvePathInPlace(undefined8 param_1,undefined8 param_2);
void NpInitCommId(int param_1,int param_2);
undefined1 Http_Initialize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4);
void ShutdownIfZero(int param_1);

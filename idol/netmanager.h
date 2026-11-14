#pragma once
// idol/netmanager.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065f438; /* no defined data */
extern undefined4 DAT_015932cc; /* 0x15932cc */
extern undefined4 DAT_015932d0; /* 0x15932d0 */
extern undefined4 DAT_015932d4; /* 0x15932d4 */
extern undefined1 DAT_015932dc; /* 0x15932dc */
extern undefined4 DAT_015932e0; /* 0x15932e0 */
extern undefined4 DAT_015932e4; /* 0x15932e4 */
extern undefined4 DAT_015932e8; /* no defined data */
extern undefined4 DAT_0159331c; /* 0x159331c */
extern undefined4 DAT_01593320; /* 0x1593320 */
extern undefined4 DAT_01593324; /* 0x1593324 */
extern pointer32 PTR_FUN_00710ef8; /* 0x710ef8 */
extern pointer32 PTR_FUN_00710f08; /* 0x710f08 */
extern pointer32 PTR_FUN_00710f10; /* 0x710f10 */
extern pointer32 PTR_FUN_00710f18; /* 0x710f18 */
extern pointer32 PTR_FUN_00710f20; /* 0x710f20 */
extern pointer32 PTR_FUN_00710f28; /* 0x710f28 */
extern pointer32 PTR_FUN_00710f30; /* 0x710f30 */
extern pointer32 PTR_FUN_00710f38; /* 0x710f38 */
extern pointer32 PTR_FUN_00710f40; /* 0x710f40 */
extern pointer32 PTR_FUN_00710f50; /* 0x710f50 */
extern pointer32 PTR_FUN_00710f58; /* 0x710f58 */
extern pointer32 PTR_FUN_00710f60; /* 0x710f60 */
extern pointer32 PTR_FUN_00710f80; /* 0x710f80 */
extern pointer32 PTR_FUN_00710f88; /* 0x710f88 */
extern pointer32 PTR_FUN_00710f90; /* 0x710f90 */
extern pointer32 PTR_FUN_00710f98; /* 0x710f98 */
extern pointer32 PTR_FUN_00710fa8; /* 0x710fa8 */

// ---- functions
void Medius_Ctor(undefined4 *param_1);
void Medius_Ctor_2(undefined4 *param_1);
undefined4 * Medius_GetInstance(undefined8 param_1);
void Medius_Init(int param_1);
void Medius_Disconnect(int param_1);
void Medius_RequestState12(int param_1);
void Medius_ConnectToMLS(int param_1);
void Medius_DisconnectFromMAS(int param_1);
void Medius_RequestStateD(int param_1);
void Medius_BeginAuthentication(int param_1);
void Medius_RequestSessionMAS(int param_1);
void Medius_ConnectToMAS(int param_1);
void Medius_Update(int param_1);
void Medius_ResolveHostServer(int param_1);
void Medius_Connect(int param_1);
void SetWord_2(undefined4 *param_1,undefined4 param_2);
undefined8 STUB_004f7120_RET_0(void);
void NetGetHostByNameCallback(int param_1);
void Medius_OnConnectResult(int param_1);
void Medius_SetState8(void);
void Medius_OnLoginResult(undefined4 *param_1);
void Medius_SetState11(void);
void NetUpdateErrorCallback(int param_1);
void Medius_OnResolveResult(int param_1);
void Medius_OnSessionResult(int param_1);
void MASTicketLoginCallback(int param_1,int *param_2,int param_3);
void MASAnonymousLoginCallback(int param_1,int *param_2,int param_3);
void Medius_OnAccountResult(int param_1);
void Medius_OnPolicyResult(int param_1);
void MASSessionEndCallback(int param_1);
void NetManager_Ctor(undefined4 *param_1);
void NetManager_Ctor_2(undefined4 *param_1);
undefined4 * NetManager_GetInstance(undefined8 param_1);
void NpManagerCallback(int param_1);
undefined8 NpBasicCallback(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void NetManager_UnloadNetStartDialog(longlong param_1);
void NPTicketCallback(undefined8 param_1);
void NetManager_Shutdown(undefined4 *param_1);
void NetManager_Shutdown_2(int param_1);
void NetManager_InitNp(undefined4 *param_1,char param_2);
void NetManager_GetServiceId(int param_1,undefined4 param_2);
void NetManager_Update(undefined4 *param_1);
int NetManager_LookupNpId(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined * NetManager_FindPlayer(int param_1,int param_2);
undefined4 NetManager_AddPlayer(int param_1,int param_2);
void NetManager_SetPresence(undefined4 *param_1,undefined8 param_2);
undefined8 NetManager_SetChatPresence(int param_1,int param_2);
bool NetManager_AddFriend(int param_1,int param_2);
bool NetManager_AddBlockListEntry(int param_1,int param_2);
undefined1 NetManager_IsConnected(int param_1);

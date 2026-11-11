#pragma once
// sdk/cell.h
#include "types.h"

// ---- globals
extern pointer32 cellAudio_func_address_table[7]; /* 0x7018d4 */
extern pointer32 cellL10n_func_address_table[1]; /* 0x701960 */
extern pointer32 cellNetCtl_func_address_table[6]; /* 0x701964 */
extern pointer32 cellSpurs_func_address_table[31]; /* 0x70197c */
extern pointer32 cellSysmodule_func_address_table[3]; /* 0x701a04 */
extern pointer32 sys_fs_func_address_table[22]; /* 0x701b68 */
extern pointer32 sys_io_func_address_table[5]; /* 0x701bc0 */

// ---- functions
void cellPadInit(void);
void cellPadEnd(void);
void cellPadSetPortSetting(void);
void cellPadGetData(void);
void cellPadGetInfo2(void);
void cellSpursAttributeSetNamePrefix(void);
void _cellSpursTasksetAttributeInitialize(void);
void cellSpursRequestIdleSpu(void);
void cellSpursGetInfo(void);
void cellSpursEventFlagDetachLv2EventQueue(void);
void cellSpursEventFlagWait(void);
void cellSpursWorkloadAttributeSetName(void);
void cellSpursEventFlagClear(void);
void cellSpursGetWorkloadInfo(void);
void cellSpursRemoveWorkload(void);
void _cellSpursEventFlagInitialize(void);
void cellSpursWaitForWorkloadShutdown(void);
void cellSpursTasksetAttributeSetName(void);
void cellSpursSetPriorities(void);
void cellSpursEventFlagAttachLv2EventQueue(void);
void _cellSpursAttributeInitialize(void);
void cellSpursShutdownWorkload(void);
void cellSpursJoinTaskset(void);
void cellSpursShutdownTaskset(void);
void cellSpursInitializeWithAttribute(void);
void cellSpursAddWorkloadWithAttribute(void);
void cellSpursCreateTasksetWithAttribute(void);
void cellSpursFinalize(void);
void cellSpursSetExceptionEventHandler(void);
void _cellSpursWorkloadAttributeInitialize(void);
void cellSpursReadyCountStore(void);
void sys_net_finalize_network(void);
void cellNetCtlNetStartDialogLoadAsync(void);
void cellNetCtlNetStartDialogUnloadAsync(void);
void cellNetCtlGetState(void);
void cellNetCtlInit(void);
void cellAudioInit(void);
void cellAudioPortClose(void);
void cellAudioGetPortConfig(void);
void cellAudioPortStart(void);
void cellAudioPortOpen(void);
void L10nConvertStr(void);
void sceNpDrmIsAvailable2(void);
void cellFsRmdir(void);
void cellFsOpendir(void);
void cellFsAioWrite(void);
void cellFsReaddir(void);
void cellFsSdataOpenByFd(void);
void cellFsStat(void);
void cellFsAioCancel(void);
void cellFsUnlink(void);
void cellFsFsync(void);
void cellFsAioFinish(void);
void cellFsLseek(void);
void cellFsGetFreeSize(void);
void cellFsSdataOpen(void);
void cellFsMkdir(void);
void cellFsAioRead(void);
void cellFsAioInit(void);
void cellFsWrite(void);
void cellFsClosedir(void);
void cellSysmoduleInitialize(void);
void _cellSpursLFQueueInitialize(void);
void cellSpursLFQueueAttachLv2EventQueue(void);
void cellSpursLFQueueDetachLv2EventQueue(void);
void _cellSpursLFQueuePushBody(void);
void cellSpursCreateTask(void);

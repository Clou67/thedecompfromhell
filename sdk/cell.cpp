// sdk/cell.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 67 functions, 0x64f944-0x6501a4
#include "sdk/cell.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x064f944 (0x20 bytes)
void cellPadInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[0])();
  return;
}


// 0x064f964 (0x20 bytes)
void cellPadEnd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[1])();
  return;
}


// 0x064f984 (0x20 bytes)
void cellPadSetPortSetting(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[2])();
  return;
}


// 0x064f9a4 (0x20 bytes)
void cellPadGetData(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[3])();
  return;
}


// 0x064f9c4 (0x20 bytes)
void cellPadGetInfo2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_io_func_address_table[4])();
  return;
}


// 0x064f9e4 (0x20 bytes)
void cellSpursAttributeSetNamePrefix(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0])();
  return;
}


// 0x064fa04 (0x20 bytes)
void _cellSpursTasksetAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[1])();
  return;
}


// 0x064fa24 (0x20 bytes)
void cellSpursRequestIdleSpu(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[2])();
  return;
}


// 0x064fa44 (0x20 bytes)
void cellSpursGetInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[3])();
  return;
}


// 0x064fa64 (0x20 bytes)
void cellSpursEventFlagDetachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[4])();
  return;
}


// 0x064fa84 (0x20 bytes)
void cellSpursEventFlagWait(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[5])();
  return;
}


// 0x064faa4 (0x20 bytes)
void cellSpursWorkloadAttributeSetName(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[6])();
  return;
}


// 0x064fac4 (0x20 bytes)
void cellSpursEventFlagClear(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[7])();
  return;
}


// 0x064fae4 (0x20 bytes)
void cellSpursGetWorkloadInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[8])();
  return;
}


// 0x064fb04 (0x20 bytes)
void cellSpursRemoveWorkload(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[9])();
  return;
}


// 0x064fb24 (0x20 bytes)
void _cellSpursEventFlagInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[10])();
  return;
}


// 0x064fb44 (0x20 bytes)
void cellSpursWaitForWorkloadShutdown(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xb])();
  return;
}


// 0x064fb64 (0x20 bytes)
void cellSpursTasksetAttributeSetName(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xc])();
  return;
}


// 0x064fb84 (0x20 bytes)
void cellSpursSetPriorities(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xd])();
  return;
}


// 0x064fba4 (0x20 bytes)
void cellSpursEventFlagAttachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xe])();
  return;
}


// 0x064fbc4 (0x20 bytes)
void _cellSpursAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0xf])();
  return;
}


// 0x064fbe4 (0x20 bytes)
void cellSpursShutdownWorkload(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x10])();
  return;
}


// 0x064fc04 (0x20 bytes)
void cellSpursJoinTaskset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x11])();
  return;
}


// 0x064fc24 (0x20 bytes)
void cellSpursShutdownTaskset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x12])();
  return;
}


// 0x064fc44 (0x20 bytes)
void cellSpursInitializeWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x13])();
  return;
}


// 0x064fc64 (0x20 bytes)
void cellSpursAddWorkloadWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x14])();
  return;
}


// 0x064fc84 (0x20 bytes)
void cellSpursCreateTasksetWithAttribute(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x15])();
  return;
}


// 0x064fca4 (0x20 bytes)
void cellSpursFinalize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x16])();
  return;
}


// 0x064fcc4 (0x20 bytes)
void cellSpursSetExceptionEventHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x17])();
  return;
}


// 0x064fce4 (0x20 bytes)
void _cellSpursWorkloadAttributeInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x18])();
  return;
}


// 0x064fd04 (0x20 bytes)
void cellSpursReadyCountStore(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x19])();
  return;
}


// 0x064fd24 (0x20 bytes)
void sys_net_finalize_network(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_net_func_address_table[0])();
  return;
}


// 0x064fd44 (0x20 bytes)
void cellNetCtlNetStartDialogLoadAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[0])();
  return;
}


// 0x064fd64 (0x20 bytes)
void cellNetCtlNetStartDialogUnloadAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[1])();
  return;
}


// 0x064fd84 (0x20 bytes)
void cellNetCtlGetState(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[2])();
  return;
}


// 0x064fda4 (0x20 bytes)
void cellNetCtlInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellNetCtl_func_address_table[3])();
  return;
}


// 0x064fdc4 (0x20 bytes)
void cellAudioInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[0])();
  return;
}


// 0x064fde4 (0x20 bytes)
void cellAudioPortClose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[1])();
  return;
}


// 0x064fe04 (0x20 bytes)
void cellAudioGetPortConfig(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[2])();
  return;
}


// 0x064fe24 (0x20 bytes)
void cellAudioPortStart(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[3])();
  return;
}


// 0x064fe44 (0x20 bytes)
void cellAudioPortOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellAudio_func_address_table[4])();
  return;
}


// 0x064fe64 (0x20 bytes)
void L10nConvertStr(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellL10n_func_address_table[0])();
  return;
}


// 0x064fe84 (0x20 bytes)
void sceNpDrmIsAvailable2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x1a])();
  return;
}


// 0x064fea4 (0x20 bytes)
void cellFsRmdir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[4])();
  return;
}


// 0x064fec4 (0x20 bytes)
void cellFsOpendir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[5])();
  return;
}


// 0x064fee4 (0x20 bytes)
void cellFsAioWrite(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[6])();
  return;
}


// 0x064ff04 (0x20 bytes)
void cellFsReaddir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[7])();
  return;
}


// 0x064ff24 (0x20 bytes)
void cellFsSdataOpenByFd(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[8])();
  return;
}


// 0x064ff44 (0x20 bytes)
void cellFsStat(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[9])();
  return;
}


// 0x064ff64 (0x20 bytes)
void cellFsAioCancel(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[10])();
  return;
}


// 0x064ff84 (0x20 bytes)
void cellFsUnlink(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xb])();
  return;
}


// 0x064ffa4 (0x20 bytes)
void cellFsFsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xc])();
  return;
}


// 0x064ffc4 (0x20 bytes)
void cellFsAioFinish(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ffe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xd])();
  return;
}


// 0x064ffe4 (0x20 bytes)
void cellFsLseek(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xe])();
  return;
}


// 0x0650004 (0x20 bytes)
void cellFsGetFreeSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0xf])();
  return;
}


// 0x0650024 (0x20 bytes)
void cellFsSdataOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x10])();
  return;
}


// 0x0650044 (0x20 bytes)
void cellFsMkdir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x11])();
  return;
}


// 0x0650064 (0x20 bytes)
void cellFsAioRead(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x12])();
  return;
}


// 0x0650084 (0x20 bytes)
void cellFsAioInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x13])();
  return;
}


// 0x06500a4 (0x20 bytes)
void cellFsWrite(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x14])();
  return;
}


// 0x06500c4 (0x20 bytes)
void cellFsClosedir(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006500e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0x15])();
  return;
}


// 0x06500e4 (0x20 bytes)
void cellSysmoduleInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[2])();
  return;
}


// 0x0650104 (0x20 bytes)
void _cellSpursLFQueueInitialize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1a])();
  return;
}


// 0x0650124 (0x20 bytes)
void cellSpursLFQueueAttachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1b])();
  return;
}


// 0x0650144 (0x20 bytes)
void cellSpursLFQueueDetachLv2EventQueue(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1c])();
  return;
}


// 0x0650164 (0x20 bytes)
void _cellSpursLFQueuePushBody(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x00650180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1d])();
  return;
}


// 0x0650184 (0x20 bytes)
void cellSpursCreateTask(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x006501a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSpurs_func_address_table[0x1e])();
  return;
}



// sdk/sce.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 87 functions, 0x64ee64-0x64f944
#include "sdk/sce.h"
#include "sdk/cell.h"
#include "sdk/mUnk.h"

// 0x064ee64 (0x20 bytes)
void sceNpBasicGetFriendListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0])();
  return;
}


// 0x064ee84 (0x20 bytes)
void sceNpManagerGetTicket(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[1])();
  return;
}


// 0x064eea4 (0x20 bytes)
void sceNpBasicAddBlockListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[2])();
  return;
}


// 0x064eec4 (0x20 bytes)
void sceNpBasicGetFriendPresenceByNpId2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064eee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[3])();
  return;
}


// 0x064eee4 (0x20 bytes)
void sceNpBasicAddFriend(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[4])();
  return;
}


// 0x064ef04 (0x20 bytes)
void sceNpScoreInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[5])();
  return;
}


// 0x064ef24 (0x20 bytes)
void sceNpBasicRegisterContextSensitiveHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[6])();
  return;
}


// 0x064ef44 (0x20 bytes)
void sceNpManagerUnregisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[7])();
  return;
}


// 0x064ef64 (0x20 bytes)
void sceNpBasicSetPresenceDetails2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064ef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[8])();
  return;
}


// 0x064ef84 (0x20 bytes)
void sceNpLookupInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[9])();
  return;
}


// 0x064efa4 (0x20 bytes)
void sceNpBasicGetBlockListEntryCount(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[10])();
  return;
}


// 0x064efc4 (0x20 bytes)
void sceNpLookupPollAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064efe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xb])();
  return;
}


// 0x064efe4 (0x20 bytes)
void sceNpManagerRequestTicket2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xc])();
  return;
}


// 0x064f004 (0x20 bytes)
void sceNpManagerGetStatus(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xd])();
  return;
}


// 0x064f024 (0x20 bytes)
void sceNpBasicUnregisterHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xe])();
  return;
}


// 0x064f044 (0x20 bytes)
void sceNpBasicGetFriendListEntryCount(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0xf])();
  return;
}


// 0x064f064 (0x20 bytes)
void sceNpScoreCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x10])();
  return;
}


// 0x064f084 (0x20 bytes)
void sceNpInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x11])();
  return;
}


// 0x064f0a4 (0x20 bytes)
void sceNpLookupCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x12])();
  return;
}


// 0x064f0c4 (0x20 bytes)
void sceNpLookupNpIdAsync(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x13])();
  return;
}


// 0x064f0e4 (0x20 bytes)
void sceNpBasicGetEvent(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x14])();
  return;
}


// 0x064f104 (0x20 bytes)
void sceNpManagerRegisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x15])();
  return;
}


// 0x064f124 (0x20 bytes)
void sceNpLookupCreateTransactionCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x16])();
  return;
}


// 0x064f144 (0x20 bytes)
void sceNpBasicGetBlockListEntry(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x17])();
  return;
}


// 0x064f164 (0x20 bytes)
void sceNpLookupDestroyTransactionCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x18])();
  return;
}


// 0x064f184 (0x20 bytes)
void sceNpManagerGetNpId(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNp_func_address_table[0x19])();
  return;
}


// 0x064f1a4 (0x20 bytes)
void sceNpClansInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpClans_func_address_table[0])();
  return;
}


// 0x064f1c4 (0x20 bytes)
void cellFsClose(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[0])();
  return;
}


// 0x064f1e4 (0x20 bytes)
void cellFsRead(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[1])();
  return;
}


// 0x064f204 (0x20 bytes)
void cellFsOpen(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[2])();
  return;
}


// 0x064f224 (0x20 bytes)
void cellFsFstat(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sys_fs_func_address_table[3])();
  return;
}


// 0x064f244 (0x20 bytes)
void cellGcmGetTiledPitchSize(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0])();
  return;
}


// 0x064f264 (0x20 bytes)
void _cellGcmInitBody(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[1])();
  return;
}


// 0x064f284 (0x20 bytes)
void _cellGcmSetFlipCommand(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[2])();
  return;
}


// 0x064f2a4 (0x20 bytes)
void cellGcmAddressToOffset(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[3])();
  return;
}


// 0x064f2c4 (0x20 bytes)
void _cellGcmFunc15(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[4])();
  return;
}


// 0x064f2e4 (0x20 bytes)
void cellGcmBindTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[5])();
  return;
}


// 0x064f304 (0x20 bytes)
void cellGcmSetFlipMode(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[6])();
  return;
}


// 0x064f324 (0x20 bytes)
void cellGcmMapEaIoAddress(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[7])();
  return;
}


// 0x064f344 (0x20 bytes)
void cellGcmSetDisplayBuffer(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[8])();
  return;
}


// 0x064f364 (0x20 bytes)
void cellGcmGetControlRegister(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[9])();
  return;
}


// 0x064f384 (0x20 bytes)
void cellGcmSetVBlankHandler(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[10])();
  return;
}


// 0x064f3a4 (0x20 bytes)
void cellGcmSetTileInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xb])();
  return;
}


// 0x064f3c4 (0x20 bytes)
void cellGcmSetTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xc])();
  return;
}


// 0x064f3e4 (0x20 bytes)
void cellGcmSetZcull(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xd])();
  return;
}


// 0x064f404 (0x20 bytes)
void _cellGcmSetFlipCommandWithWaitLabel(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xe])();
  return;
}


// 0x064f424 (0x20 bytes)
void cellGcmUnbindTile(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0xf])();
  return;
}


// 0x064f444 (0x20 bytes)
void cellGcmGetConfiguration(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0x10])();
  return;
}


// 0x064f464 (0x20 bytes)
void cellGcmGetLabelAddress(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGcmSys_func_address_table[0x11])();
  return;
}


// 0x064f484 (0x20 bytes)
void cellSysmoduleUnloadModule(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[0])();
  return;
}


// 0x064f4a4 (0x20 bytes)
void cellSysmoduleLoadModule(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysmodule_func_address_table[1])();
  return;
}


// 0x064f4c4 (0x20 bytes)
void cellVideoOutConfigure(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0])();
  return;
}


// 0x064f4e4 (0x20 bytes)
void cellSaveDataUserListSave(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[1])();
  return;
}


// 0x064f504 (0x20 bytes)
void cellSysutilCheckCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[2])();
  return;
}


// 0x064f524 (0x20 bytes)
void cellVideoOutGetDeviceInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[3])();
  return;
}


// 0x064f544 (0x20 bytes)
void cellSaveDataListAutoLoad(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[4])();
  return;
}


// 0x064f564 (0x20 bytes)
void cellSaveDataUserListLoad(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[5])();
  return;
}


// 0x064f584 (0x20 bytes)
void cellSysutilGetSystemParamInt(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[6])();
  return;
}


// 0x064f5a4 (0x20 bytes)
void cellAudioOutConfigure(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[7])();
  return;
}


// 0x064f5c4 (0x20 bytes)
void cellSaveDataUserAutoSave(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[8])();
  return;
}


// 0x064f5e4 (0x20 bytes)
void cellMsgDialogAbort(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[9])();
  return;
}


// 0x064f604 (0x20 bytes)
void cellMsgDialogOpen2(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[10])();
  return;
}


// 0x064f624 (0x20 bytes)
void cellVideoOutGetState(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xb])();
  return;
}


// 0x064f644 (0x20 bytes)
void cellSysutilRegisterCallback(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xc])();
  return;
}


// 0x064f664 (0x20 bytes)
void cellVideoOutGetResolutionAvailability(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xd])();
  return;
}


// 0x064f684 (0x20 bytes)
void cellAudioOutGetSoundAvailability(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xe])();
  return;
}


// 0x064f6a4 (0x20 bytes)
void cellVideoOutGetResolution(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellSysutil_func_address_table[0xf])();
  return;
}


// 0x064f6c4 (0x20 bytes)
void cellGameGetParamString(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[0])();
  return;
}


// 0x064f6e4 (0x20 bytes)
void cellGameCreateGameData(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[1])();
  return;
}


// 0x064f704 (0x20 bytes)
void cellGameContentPermit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[2])();
  return;
}


// 0x064f724 (0x20 bytes)
void cellGameContentErrorDialog(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[3])();
  return;
}


// 0x064f744 (0x20 bytes)
void cellGameGetParamInt(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[4])();
  return;
}


// 0x064f764 (0x20 bytes)
void cellGameDataCheck(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[5])();
  return;
}


// 0x064f784 (0x20 bytes)
void cellGameGetSizeKB(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[6])();
  return;
}


// 0x064f7a4 (0x20 bytes)
void cellGameBootCheck(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)cellGame_func_address_table[7])();
  return;
}


// 0x064f7c4 (0x20 bytes)
void sceNpTrophyRegisterContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[0])();
  return;
}


// 0x064f7e4 (0x20 bytes)
void sceNpTrophyCreateHandle(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[1])();
  return;
}


// 0x064f804 (0x20 bytes)
void sceNpTrophyGetRequiredDiskSpace(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[2])();
  return;
}


// 0x064f824 (0x20 bytes)
void sceNpTrophyDestroyContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[3])();
  return;
}


// 0x064f844 (0x20 bytes)
void sceNpTrophyInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[4])();
  return;
}


// 0x064f864 (0x20 bytes)
void sceNpTrophyGetGameInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[5])();
  return;
}


// 0x064f884 (0x20 bytes)
void sceNpTrophyDestroyHandle(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[6])();
  return;
}


// 0x064f8a4 (0x20 bytes)
void sceNpTrophyUnlockTrophy(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[7])();
  return;
}


// 0x064f8c4 (0x20 bytes)
void sceNpTrophyCreateContext(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[8])();
  return;
}


// 0x064f8e4 (0x20 bytes)
void sceNpTrophyGetTrophyInfo(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTrophy_func_address_table[9])();
  return;
}


// 0x064f904 (0x20 bytes)
void sceNpTusCreateTitleCtx(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTus_func_address_table[0])();
  return;
}


// 0x064f924 (0x20 bytes)
void sceNpTusInit(void)

{
  ulonglong uStack00000028;
  
  uStack00000028 = ZEXT48(&TOC_BASE);
                    /* WARNING: Could not recover jumptable at 0x0064f940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)sceNpTus_func_address_table[1])();
  return;
}



#pragma once
// sdk/sce.h
#include "types.h"

// ---- globals
extern undefined TOC_BASE; /* 0x722328 */
extern pointer32 cellGame_func_address_table[8]; /* 0x7018f0 */
extern pointer32 cellGcmSys_func_address_table[18]; /* 0x701910 */
extern pointer32 cellSysutil_func_address_table[16]; /* 0x701a10 */
extern pointer32 sceNpClans_func_address_table[1]; /* 0x701ac0 */
extern pointer32 sceNpTrophy_func_address_table[10]; /* 0x701ac4 */
extern pointer32 sceNpTus_func_address_table[2]; /* 0x701aec */
extern pointer32 sceNp_func_address_table[27]; /* 0x701a54 */

// ---- functions
void sceNpBasicGetFriendListEntry(void);
void sceNpManagerGetTicket(void);
void sceNpBasicAddBlockListEntry(void);
void sceNpBasicGetFriendPresenceByNpId2(void);
void sceNpBasicAddFriend(void);
void sceNpScoreInit(void);
void sceNpBasicRegisterContextSensitiveHandler(void);
void sceNpManagerUnregisterCallback(void);
void sceNpBasicSetPresenceDetails2(void);
void sceNpLookupInit(void);
void sceNpBasicGetBlockListEntryCount(void);
void sceNpLookupPollAsync(void);
void sceNpManagerRequestTicket2(void);
void sceNpManagerGetStatus(void);
void sceNpBasicUnregisterHandler(void);
void sceNpBasicGetFriendListEntryCount(void);
void sceNpScoreCreateTitleCtx(void);
void sceNpInit(void);
void sceNpLookupCreateTitleCtx(void);
void sceNpLookupNpIdAsync(void);
void sceNpBasicGetEvent(void);
void sceNpManagerRegisterCallback(void);
void sceNpLookupCreateTransactionCtx(void);
void sceNpBasicGetBlockListEntry(void);
void sceNpLookupDestroyTransactionCtx(void);
void sceNpManagerGetNpId(void);
void sceNpClansInit(void);
void cellFsClose(void);
void cellFsRead(void);
void cellFsOpen(void);
void cellFsFstat(void);
void cellGcmGetTiledPitchSize(void);
void _cellGcmInitBody(void);
void _cellGcmSetFlipCommand(void);
void cellGcmAddressToOffset(void);
void _cellGcmFunc15(void);
void cellGcmBindTile(void);
void cellGcmSetFlipMode(void);
void cellGcmMapEaIoAddress(void);
void cellGcmSetDisplayBuffer(void);
void cellGcmGetControlRegister(void);
void cellGcmSetVBlankHandler(void);
void cellGcmSetTileInfo(void);
void cellGcmSetTile(void);
void cellGcmSetZcull(void);
void _cellGcmSetFlipCommandWithWaitLabel(void);
void cellGcmUnbindTile(void);
void cellGcmGetConfiguration(void);
void cellGcmGetLabelAddress(void);
void cellSysmoduleUnloadModule(void);
void cellSysmoduleLoadModule(void);
void cellVideoOutConfigure(void);
void cellSaveDataUserListSave(void);
void cellSysutilCheckCallback(void);
void cellVideoOutGetDeviceInfo(void);
void cellSaveDataListAutoLoad(void);
void cellSaveDataUserListLoad(void);
void cellSysutilGetSystemParamInt(void);
void cellAudioOutConfigure(void);
void cellSaveDataUserAutoSave(void);
void cellMsgDialogAbort(void);
void cellMsgDialogOpen2(void);
void cellVideoOutGetState(void);
void cellSysutilRegisterCallback(void);
void cellVideoOutGetResolutionAvailability(void);
void cellAudioOutGetSoundAvailability(void);
void cellVideoOutGetResolution(void);
void cellGameGetParamString(void);
void cellGameCreateGameData(void);
void cellGameContentPermit(void);
void cellGameContentErrorDialog(void);
void cellGameGetParamInt(void);
void cellGameDataCheck(void);
void cellGameGetSizeKB(void);
void cellGameBootCheck(void);
void sceNpTrophyRegisterContext(void);
void sceNpTrophyCreateHandle(void);
void sceNpTrophyGetRequiredDiskSpace(void);
void sceNpTrophyDestroyContext(void);
void sceNpTrophyInit(void);
void sceNpTrophyGetGameInfo(void);
void sceNpTrophyDestroyHandle(void);
void sceNpTrophyUnlockTrophy(void);
void sceNpTrophyCreateContext(void);
void sceNpTrophyGetTrophyInfo(void);
void sceNpTusCreateTitleCtx(void);
void sceNpTusInit(void);

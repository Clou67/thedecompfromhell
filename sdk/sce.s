# sdk/sce.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

sceNpBasicGetFriendListEntry:   # 0x64ee64, 0x20 bytes
  064ee64  li 12, 0
  064ee68  oris 12, 12, 112
  064ee6c  lwz 12, 6740(12)
  064ee70  std 2, 40(1)
  064ee74  lwz 0, 0(12)
  064ee78  lwz 2, 4(12)
  064ee7c  mtctr 0
  064ee80  bctr

sceNpManagerGetTicket:   # 0x64ee84, 0x20 bytes
  064ee84  li 12, 0
  064ee88  oris 12, 12, 112
  064ee8c  lwz 12, 6744(12)
  064ee90  std 2, 40(1)
  064ee94  lwz 0, 0(12)
  064ee98  lwz 2, 4(12)
  064ee9c  mtctr 0
  064eea0  bctr

sceNpBasicAddBlockListEntry:   # 0x64eea4, 0x20 bytes
  064eea4  li 12, 0
  064eea8  oris 12, 12, 112
  064eeac  lwz 12, 6748(12)
  064eeb0  std 2, 40(1)
  064eeb4  lwz 0, 0(12)
  064eeb8  lwz 2, 4(12)
  064eebc  mtctr 0
  064eec0  bctr

sceNpBasicGetFriendPresenceByNpId2:   # 0x64eec4, 0x20 bytes
  064eec4  li 12, 0
  064eec8  oris 12, 12, 112
  064eecc  lwz 12, 6752(12)
  064eed0  std 2, 40(1)
  064eed4  lwz 0, 0(12)
  064eed8  lwz 2, 4(12)
  064eedc  mtctr 0
  064eee0  bctr

sceNpBasicAddFriend:   # 0x64eee4, 0x20 bytes
  064eee4  li 12, 0
  064eee8  oris 12, 12, 112
  064eeec  lwz 12, 6756(12)
  064eef0  std 2, 40(1)
  064eef4  lwz 0, 0(12)
  064eef8  lwz 2, 4(12)
  064eefc  mtctr 0
  064ef00  bctr

sceNpScoreInit:   # 0x64ef04, 0x20 bytes
  064ef04  li 12, 0
  064ef08  oris 12, 12, 112
  064ef0c  lwz 12, 6760(12)
  064ef10  std 2, 40(1)
  064ef14  lwz 0, 0(12)
  064ef18  lwz 2, 4(12)
  064ef1c  mtctr 0
  064ef20  bctr

sceNpBasicRegisterContextSensitiveHandler:   # 0x64ef24, 0x20 bytes
  064ef24  li 12, 0
  064ef28  oris 12, 12, 112
  064ef2c  lwz 12, 6764(12)
  064ef30  std 2, 40(1)
  064ef34  lwz 0, 0(12)
  064ef38  lwz 2, 4(12)
  064ef3c  mtctr 0
  064ef40  bctr

sceNpManagerUnregisterCallback:   # 0x64ef44, 0x20 bytes
  064ef44  li 12, 0
  064ef48  oris 12, 12, 112
  064ef4c  lwz 12, 6768(12)
  064ef50  std 2, 40(1)
  064ef54  lwz 0, 0(12)
  064ef58  lwz 2, 4(12)
  064ef5c  mtctr 0
  064ef60  bctr

sceNpBasicSetPresenceDetails2:   # 0x64ef64, 0x20 bytes
  064ef64  li 12, 0
  064ef68  oris 12, 12, 112
  064ef6c  lwz 12, 6772(12)
  064ef70  std 2, 40(1)
  064ef74  lwz 0, 0(12)
  064ef78  lwz 2, 4(12)
  064ef7c  mtctr 0
  064ef80  bctr

sceNpLookupInit:   # 0x64ef84, 0x20 bytes
  064ef84  li 12, 0
  064ef88  oris 12, 12, 112
  064ef8c  lwz 12, 6776(12)
  064ef90  std 2, 40(1)
  064ef94  lwz 0, 0(12)
  064ef98  lwz 2, 4(12)
  064ef9c  mtctr 0
  064efa0  bctr

sceNpBasicGetBlockListEntryCount:   # 0x64efa4, 0x20 bytes
  064efa4  li 12, 0
  064efa8  oris 12, 12, 112
  064efac  lwz 12, 6780(12)
  064efb0  std 2, 40(1)
  064efb4  lwz 0, 0(12)
  064efb8  lwz 2, 4(12)
  064efbc  mtctr 0
  064efc0  bctr

sceNpLookupPollAsync:   # 0x64efc4, 0x20 bytes
  064efc4  li 12, 0
  064efc8  oris 12, 12, 112
  064efcc  lwz 12, 6784(12)
  064efd0  std 2, 40(1)
  064efd4  lwz 0, 0(12)
  064efd8  lwz 2, 4(12)
  064efdc  mtctr 0
  064efe0  bctr

sceNpManagerRequestTicket2:   # 0x64efe4, 0x20 bytes
  064efe4  li 12, 0
  064efe8  oris 12, 12, 112
  064efec  lwz 12, 6788(12)
  064eff0  std 2, 40(1)
  064eff4  lwz 0, 0(12)
  064eff8  lwz 2, 4(12)
  064effc  mtctr 0
  064f000  bctr

sceNpManagerGetStatus:   # 0x64f004, 0x20 bytes
  064f004  li 12, 0
  064f008  oris 12, 12, 112
  064f00c  lwz 12, 6792(12)
  064f010  std 2, 40(1)
  064f014  lwz 0, 0(12)
  064f018  lwz 2, 4(12)
  064f01c  mtctr 0
  064f020  bctr

sceNpBasicUnregisterHandler:   # 0x64f024, 0x20 bytes
  064f024  li 12, 0
  064f028  oris 12, 12, 112
  064f02c  lwz 12, 6796(12)
  064f030  std 2, 40(1)
  064f034  lwz 0, 0(12)
  064f038  lwz 2, 4(12)
  064f03c  mtctr 0
  064f040  bctr

sceNpBasicGetFriendListEntryCount:   # 0x64f044, 0x20 bytes
  064f044  li 12, 0
  064f048  oris 12, 12, 112
  064f04c  lwz 12, 6800(12)
  064f050  std 2, 40(1)
  064f054  lwz 0, 0(12)
  064f058  lwz 2, 4(12)
  064f05c  mtctr 0
  064f060  bctr

sceNpScoreCreateTitleCtx:   # 0x64f064, 0x20 bytes
  064f064  li 12, 0
  064f068  oris 12, 12, 112
  064f06c  lwz 12, 6804(12)
  064f070  std 2, 40(1)
  064f074  lwz 0, 0(12)
  064f078  lwz 2, 4(12)
  064f07c  mtctr 0
  064f080  bctr

sceNpInit:   # 0x64f084, 0x20 bytes
  064f084  li 12, 0
  064f088  oris 12, 12, 112
  064f08c  lwz 12, 6808(12)
  064f090  std 2, 40(1)
  064f094  lwz 0, 0(12)
  064f098  lwz 2, 4(12)
  064f09c  mtctr 0
  064f0a0  bctr

sceNpLookupCreateTitleCtx:   # 0x64f0a4, 0x20 bytes
  064f0a4  li 12, 0
  064f0a8  oris 12, 12, 112
  064f0ac  lwz 12, 6812(12)
  064f0b0  std 2, 40(1)
  064f0b4  lwz 0, 0(12)
  064f0b8  lwz 2, 4(12)
  064f0bc  mtctr 0
  064f0c0  bctr

sceNpLookupNpIdAsync:   # 0x64f0c4, 0x20 bytes
  064f0c4  li 12, 0
  064f0c8  oris 12, 12, 112
  064f0cc  lwz 12, 6816(12)
  064f0d0  std 2, 40(1)
  064f0d4  lwz 0, 0(12)
  064f0d8  lwz 2, 4(12)
  064f0dc  mtctr 0
  064f0e0  bctr

sceNpBasicGetEvent:   # 0x64f0e4, 0x20 bytes
  064f0e4  li 12, 0
  064f0e8  oris 12, 12, 112
  064f0ec  lwz 12, 6820(12)
  064f0f0  std 2, 40(1)
  064f0f4  lwz 0, 0(12)
  064f0f8  lwz 2, 4(12)
  064f0fc  mtctr 0
  064f100  bctr

sceNpManagerRegisterCallback:   # 0x64f104, 0x20 bytes
  064f104  li 12, 0
  064f108  oris 12, 12, 112
  064f10c  lwz 12, 6824(12)
  064f110  std 2, 40(1)
  064f114  lwz 0, 0(12)
  064f118  lwz 2, 4(12)
  064f11c  mtctr 0
  064f120  bctr

sceNpLookupCreateTransactionCtx:   # 0x64f124, 0x20 bytes
  064f124  li 12, 0
  064f128  oris 12, 12, 112
  064f12c  lwz 12, 6828(12)
  064f130  std 2, 40(1)
  064f134  lwz 0, 0(12)
  064f138  lwz 2, 4(12)
  064f13c  mtctr 0
  064f140  bctr

sceNpBasicGetBlockListEntry:   # 0x64f144, 0x20 bytes
  064f144  li 12, 0
  064f148  oris 12, 12, 112
  064f14c  lwz 12, 6832(12)
  064f150  std 2, 40(1)
  064f154  lwz 0, 0(12)
  064f158  lwz 2, 4(12)
  064f15c  mtctr 0
  064f160  bctr

sceNpLookupDestroyTransactionCtx:   # 0x64f164, 0x20 bytes
  064f164  li 12, 0
  064f168  oris 12, 12, 112
  064f16c  lwz 12, 6836(12)
  064f170  std 2, 40(1)
  064f174  lwz 0, 0(12)
  064f178  lwz 2, 4(12)
  064f17c  mtctr 0
  064f180  bctr

sceNpManagerGetNpId:   # 0x64f184, 0x20 bytes
  064f184  li 12, 0
  064f188  oris 12, 12, 112
  064f18c  lwz 12, 6840(12)
  064f190  std 2, 40(1)
  064f194  lwz 0, 0(12)
  064f198  lwz 2, 4(12)
  064f19c  mtctr 0
  064f1a0  bctr

sceNpClansInit:   # 0x64f1a4, 0x20 bytes
  064f1a4  li 12, 0
  064f1a8  oris 12, 12, 112
  064f1ac  lwz 12, 6848(12)
  064f1b0  std 2, 40(1)
  064f1b4  lwz 0, 0(12)
  064f1b8  lwz 2, 4(12)
  064f1bc  mtctr 0
  064f1c0  bctr

cellFsClose:   # 0x64f1c4, 0x20 bytes
  064f1c4  li 12, 0
  064f1c8  oris 12, 12, 112
  064f1cc  lwz 12, 7016(12)
  064f1d0  std 2, 40(1)
  064f1d4  lwz 0, 0(12)
  064f1d8  lwz 2, 4(12)
  064f1dc  mtctr 0
  064f1e0  bctr

cellFsRead:   # 0x64f1e4, 0x20 bytes
  064f1e4  li 12, 0
  064f1e8  oris 12, 12, 112
  064f1ec  lwz 12, 7020(12)
  064f1f0  std 2, 40(1)
  064f1f4  lwz 0, 0(12)
  064f1f8  lwz 2, 4(12)
  064f1fc  mtctr 0
  064f200  bctr

cellFsOpen:   # 0x64f204, 0x20 bytes
  064f204  li 12, 0
  064f208  oris 12, 12, 112
  064f20c  lwz 12, 7024(12)
  064f210  std 2, 40(1)
  064f214  lwz 0, 0(12)
  064f218  lwz 2, 4(12)
  064f21c  mtctr 0
  064f220  bctr

cellFsFstat:   # 0x64f224, 0x20 bytes
  064f224  li 12, 0
  064f228  oris 12, 12, 112
  064f22c  lwz 12, 7028(12)
  064f230  std 2, 40(1)
  064f234  lwz 0, 0(12)
  064f238  lwz 2, 4(12)
  064f23c  mtctr 0
  064f240  bctr

cellGcmGetTiledPitchSize:   # 0x64f244, 0x20 bytes
  064f244  li 12, 0
  064f248  oris 12, 12, 112
  064f24c  lwz 12, 6416(12)
  064f250  std 2, 40(1)
  064f254  lwz 0, 0(12)
  064f258  lwz 2, 4(12)
  064f25c  mtctr 0
  064f260  bctr

_cellGcmInitBody:   # 0x64f264, 0x20 bytes
  064f264  li 12, 0
  064f268  oris 12, 12, 112
  064f26c  lwz 12, 6420(12)
  064f270  std 2, 40(1)
  064f274  lwz 0, 0(12)
  064f278  lwz 2, 4(12)
  064f27c  mtctr 0
  064f280  bctr

_cellGcmSetFlipCommand:   # 0x64f284, 0x20 bytes
  064f284  li 12, 0
  064f288  oris 12, 12, 112
  064f28c  lwz 12, 6424(12)
  064f290  std 2, 40(1)
  064f294  lwz 0, 0(12)
  064f298  lwz 2, 4(12)
  064f29c  mtctr 0
  064f2a0  bctr

cellGcmAddressToOffset:   # 0x64f2a4, 0x20 bytes
  064f2a4  li 12, 0
  064f2a8  oris 12, 12, 112
  064f2ac  lwz 12, 6428(12)
  064f2b0  std 2, 40(1)
  064f2b4  lwz 0, 0(12)
  064f2b8  lwz 2, 4(12)
  064f2bc  mtctr 0
  064f2c0  bctr

_cellGcmFunc15:   # 0x64f2c4, 0x20 bytes
  064f2c4  li 12, 0
  064f2c8  oris 12, 12, 112
  064f2cc  lwz 12, 6432(12)
  064f2d0  std 2, 40(1)
  064f2d4  lwz 0, 0(12)
  064f2d8  lwz 2, 4(12)
  064f2dc  mtctr 0
  064f2e0  bctr

cellGcmBindTile:   # 0x64f2e4, 0x20 bytes
  064f2e4  li 12, 0
  064f2e8  oris 12, 12, 112
  064f2ec  lwz 12, 6436(12)
  064f2f0  std 2, 40(1)
  064f2f4  lwz 0, 0(12)
  064f2f8  lwz 2, 4(12)
  064f2fc  mtctr 0
  064f300  bctr

cellGcmSetFlipMode:   # 0x64f304, 0x20 bytes
  064f304  li 12, 0
  064f308  oris 12, 12, 112
  064f30c  lwz 12, 6440(12)
  064f310  std 2, 40(1)
  064f314  lwz 0, 0(12)
  064f318  lwz 2, 4(12)
  064f31c  mtctr 0
  064f320  bctr

cellGcmMapEaIoAddress:   # 0x64f324, 0x20 bytes
  064f324  li 12, 0
  064f328  oris 12, 12, 112
  064f32c  lwz 12, 6444(12)
  064f330  std 2, 40(1)
  064f334  lwz 0, 0(12)
  064f338  lwz 2, 4(12)
  064f33c  mtctr 0
  064f340  bctr

cellGcmSetDisplayBuffer:   # 0x64f344, 0x20 bytes
  064f344  li 12, 0
  064f348  oris 12, 12, 112
  064f34c  lwz 12, 6448(12)
  064f350  std 2, 40(1)
  064f354  lwz 0, 0(12)
  064f358  lwz 2, 4(12)
  064f35c  mtctr 0
  064f360  bctr

cellGcmGetControlRegister:   # 0x64f364, 0x20 bytes
  064f364  li 12, 0
  064f368  oris 12, 12, 112
  064f36c  lwz 12, 6452(12)
  064f370  std 2, 40(1)
  064f374  lwz 0, 0(12)
  064f378  lwz 2, 4(12)
  064f37c  mtctr 0
  064f380  bctr

cellGcmSetVBlankHandler:   # 0x64f384, 0x20 bytes
  064f384  li 12, 0
  064f388  oris 12, 12, 112
  064f38c  lwz 12, 6456(12)
  064f390  std 2, 40(1)
  064f394  lwz 0, 0(12)
  064f398  lwz 2, 4(12)
  064f39c  mtctr 0
  064f3a0  bctr

cellGcmSetTileInfo:   # 0x64f3a4, 0x20 bytes
  064f3a4  li 12, 0
  064f3a8  oris 12, 12, 112
  064f3ac  lwz 12, 6460(12)
  064f3b0  std 2, 40(1)
  064f3b4  lwz 0, 0(12)
  064f3b8  lwz 2, 4(12)
  064f3bc  mtctr 0
  064f3c0  bctr

cellGcmSetTile:   # 0x64f3c4, 0x20 bytes
  064f3c4  li 12, 0
  064f3c8  oris 12, 12, 112
  064f3cc  lwz 12, 6464(12)
  064f3d0  std 2, 40(1)
  064f3d4  lwz 0, 0(12)
  064f3d8  lwz 2, 4(12)
  064f3dc  mtctr 0
  064f3e0  bctr

cellGcmSetZcull:   # 0x64f3e4, 0x20 bytes
  064f3e4  li 12, 0
  064f3e8  oris 12, 12, 112
  064f3ec  lwz 12, 6468(12)
  064f3f0  std 2, 40(1)
  064f3f4  lwz 0, 0(12)
  064f3f8  lwz 2, 4(12)
  064f3fc  mtctr 0
  064f400  bctr

_cellGcmSetFlipCommandWithWaitLabel:   # 0x64f404, 0x20 bytes
  064f404  li 12, 0
  064f408  oris 12, 12, 112
  064f40c  lwz 12, 6472(12)
  064f410  std 2, 40(1)
  064f414  lwz 0, 0(12)
  064f418  lwz 2, 4(12)
  064f41c  mtctr 0
  064f420  bctr

cellGcmUnbindTile:   # 0x64f424, 0x20 bytes
  064f424  li 12, 0
  064f428  oris 12, 12, 112
  064f42c  lwz 12, 6476(12)
  064f430  std 2, 40(1)
  064f434  lwz 0, 0(12)
  064f438  lwz 2, 4(12)
  064f43c  mtctr 0
  064f440  bctr

cellGcmGetConfiguration:   # 0x64f444, 0x20 bytes
  064f444  li 12, 0
  064f448  oris 12, 12, 112
  064f44c  lwz 12, 6480(12)
  064f450  std 2, 40(1)
  064f454  lwz 0, 0(12)
  064f458  lwz 2, 4(12)
  064f45c  mtctr 0
  064f460  bctr

cellGcmGetLabelAddress:   # 0x64f464, 0x20 bytes
  064f464  li 12, 0
  064f468  oris 12, 12, 112
  064f46c  lwz 12, 6484(12)
  064f470  std 2, 40(1)
  064f474  lwz 0, 0(12)
  064f478  lwz 2, 4(12)
  064f47c  mtctr 0
  064f480  bctr

cellSysmoduleUnloadModule:   # 0x64f484, 0x20 bytes
  064f484  li 12, 0
  064f488  oris 12, 12, 112
  064f48c  lwz 12, 6660(12)
  064f490  std 2, 40(1)
  064f494  lwz 0, 0(12)
  064f498  lwz 2, 4(12)
  064f49c  mtctr 0
  064f4a0  bctr

cellSysmoduleLoadModule:   # 0x64f4a4, 0x20 bytes
  064f4a4  li 12, 0
  064f4a8  oris 12, 12, 112
  064f4ac  lwz 12, 6664(12)
  064f4b0  std 2, 40(1)
  064f4b4  lwz 0, 0(12)
  064f4b8  lwz 2, 4(12)
  064f4bc  mtctr 0
  064f4c0  bctr

cellVideoOutConfigure:   # 0x64f4c4, 0x20 bytes
  064f4c4  li 12, 0
  064f4c8  oris 12, 12, 112
  064f4cc  lwz 12, 6672(12)
  064f4d0  std 2, 40(1)
  064f4d4  lwz 0, 0(12)
  064f4d8  lwz 2, 4(12)
  064f4dc  mtctr 0
  064f4e0  bctr

cellSaveDataUserListSave:   # 0x64f4e4, 0x20 bytes
  064f4e4  li 12, 0
  064f4e8  oris 12, 12, 112
  064f4ec  lwz 12, 6676(12)
  064f4f0  std 2, 40(1)
  064f4f4  lwz 0, 0(12)
  064f4f8  lwz 2, 4(12)
  064f4fc  mtctr 0
  064f500  bctr

cellSysutilCheckCallback:   # 0x64f504, 0x20 bytes
  064f504  li 12, 0
  064f508  oris 12, 12, 112
  064f50c  lwz 12, 6680(12)
  064f510  std 2, 40(1)
  064f514  lwz 0, 0(12)
  064f518  lwz 2, 4(12)
  064f51c  mtctr 0
  064f520  bctr

cellVideoOutGetDeviceInfo:   # 0x64f524, 0x20 bytes
  064f524  li 12, 0
  064f528  oris 12, 12, 112
  064f52c  lwz 12, 6684(12)
  064f530  std 2, 40(1)
  064f534  lwz 0, 0(12)
  064f538  lwz 2, 4(12)
  064f53c  mtctr 0
  064f540  bctr

cellSaveDataListAutoLoad:   # 0x64f544, 0x20 bytes
  064f544  li 12, 0
  064f548  oris 12, 12, 112
  064f54c  lwz 12, 6688(12)
  064f550  std 2, 40(1)
  064f554  lwz 0, 0(12)
  064f558  lwz 2, 4(12)
  064f55c  mtctr 0
  064f560  bctr

cellSaveDataUserListLoad:   # 0x64f564, 0x20 bytes
  064f564  li 12, 0
  064f568  oris 12, 12, 112
  064f56c  lwz 12, 6692(12)
  064f570  std 2, 40(1)
  064f574  lwz 0, 0(12)
  064f578  lwz 2, 4(12)
  064f57c  mtctr 0
  064f580  bctr

cellSysutilGetSystemParamInt:   # 0x64f584, 0x20 bytes
  064f584  li 12, 0
  064f588  oris 12, 12, 112
  064f58c  lwz 12, 6696(12)
  064f590  std 2, 40(1)
  064f594  lwz 0, 0(12)
  064f598  lwz 2, 4(12)
  064f59c  mtctr 0
  064f5a0  bctr

cellAudioOutConfigure:   # 0x64f5a4, 0x20 bytes
  064f5a4  li 12, 0
  064f5a8  oris 12, 12, 112
  064f5ac  lwz 12, 6700(12)
  064f5b0  std 2, 40(1)
  064f5b4  lwz 0, 0(12)
  064f5b8  lwz 2, 4(12)
  064f5bc  mtctr 0
  064f5c0  bctr

cellSaveDataUserAutoSave:   # 0x64f5c4, 0x20 bytes
  064f5c4  li 12, 0
  064f5c8  oris 12, 12, 112
  064f5cc  lwz 12, 6704(12)
  064f5d0  std 2, 40(1)
  064f5d4  lwz 0, 0(12)
  064f5d8  lwz 2, 4(12)
  064f5dc  mtctr 0
  064f5e0  bctr

cellMsgDialogAbort:   # 0x64f5e4, 0x20 bytes
  064f5e4  li 12, 0
  064f5e8  oris 12, 12, 112
  064f5ec  lwz 12, 6708(12)
  064f5f0  std 2, 40(1)
  064f5f4  lwz 0, 0(12)
  064f5f8  lwz 2, 4(12)
  064f5fc  mtctr 0
  064f600  bctr

cellMsgDialogOpen2:   # 0x64f604, 0x20 bytes
  064f604  li 12, 0
  064f608  oris 12, 12, 112
  064f60c  lwz 12, 6712(12)
  064f610  std 2, 40(1)
  064f614  lwz 0, 0(12)
  064f618  lwz 2, 4(12)
  064f61c  mtctr 0
  064f620  bctr

cellVideoOutGetState:   # 0x64f624, 0x20 bytes
  064f624  li 12, 0
  064f628  oris 12, 12, 112
  064f62c  lwz 12, 6716(12)
  064f630  std 2, 40(1)
  064f634  lwz 0, 0(12)
  064f638  lwz 2, 4(12)
  064f63c  mtctr 0
  064f640  bctr

cellSysutilRegisterCallback:   # 0x64f644, 0x20 bytes
  064f644  li 12, 0
  064f648  oris 12, 12, 112
  064f64c  lwz 12, 6720(12)
  064f650  std 2, 40(1)
  064f654  lwz 0, 0(12)
  064f658  lwz 2, 4(12)
  064f65c  mtctr 0
  064f660  bctr

cellVideoOutGetResolutionAvailability:   # 0x64f664, 0x20 bytes
  064f664  li 12, 0
  064f668  oris 12, 12, 112
  064f66c  lwz 12, 6724(12)
  064f670  std 2, 40(1)
  064f674  lwz 0, 0(12)
  064f678  lwz 2, 4(12)
  064f67c  mtctr 0
  064f680  bctr

cellAudioOutGetSoundAvailability:   # 0x64f684, 0x20 bytes
  064f684  li 12, 0
  064f688  oris 12, 12, 112
  064f68c  lwz 12, 6728(12)
  064f690  std 2, 40(1)
  064f694  lwz 0, 0(12)
  064f698  lwz 2, 4(12)
  064f69c  mtctr 0
  064f6a0  bctr

cellVideoOutGetResolution:   # 0x64f6a4, 0x20 bytes
  064f6a4  li 12, 0
  064f6a8  oris 12, 12, 112
  064f6ac  lwz 12, 6732(12)
  064f6b0  std 2, 40(1)
  064f6b4  lwz 0, 0(12)
  064f6b8  lwz 2, 4(12)
  064f6bc  mtctr 0
  064f6c0  bctr

cellGameGetParamString:   # 0x64f6c4, 0x20 bytes
  064f6c4  li 12, 0
  064f6c8  oris 12, 12, 112
  064f6cc  lwz 12, 6384(12)
  064f6d0  std 2, 40(1)
  064f6d4  lwz 0, 0(12)
  064f6d8  lwz 2, 4(12)
  064f6dc  mtctr 0
  064f6e0  bctr

cellGameCreateGameData:   # 0x64f6e4, 0x20 bytes
  064f6e4  li 12, 0
  064f6e8  oris 12, 12, 112
  064f6ec  lwz 12, 6388(12)
  064f6f0  std 2, 40(1)
  064f6f4  lwz 0, 0(12)
  064f6f8  lwz 2, 4(12)
  064f6fc  mtctr 0
  064f700  bctr

cellGameContentPermit:   # 0x64f704, 0x20 bytes
  064f704  li 12, 0
  064f708  oris 12, 12, 112
  064f70c  lwz 12, 6392(12)
  064f710  std 2, 40(1)
  064f714  lwz 0, 0(12)
  064f718  lwz 2, 4(12)
  064f71c  mtctr 0
  064f720  bctr

cellGameContentErrorDialog:   # 0x64f724, 0x20 bytes
  064f724  li 12, 0
  064f728  oris 12, 12, 112
  064f72c  lwz 12, 6396(12)
  064f730  std 2, 40(1)
  064f734  lwz 0, 0(12)
  064f738  lwz 2, 4(12)
  064f73c  mtctr 0
  064f740  bctr

cellGameGetParamInt:   # 0x64f744, 0x20 bytes
  064f744  li 12, 0
  064f748  oris 12, 12, 112
  064f74c  lwz 12, 6400(12)
  064f750  std 2, 40(1)
  064f754  lwz 0, 0(12)
  064f758  lwz 2, 4(12)
  064f75c  mtctr 0
  064f760  bctr

cellGameDataCheck:   # 0x64f764, 0x20 bytes
  064f764  li 12, 0
  064f768  oris 12, 12, 112
  064f76c  lwz 12, 6404(12)
  064f770  std 2, 40(1)
  064f774  lwz 0, 0(12)
  064f778  lwz 2, 4(12)
  064f77c  mtctr 0
  064f780  bctr

cellGameGetSizeKB:   # 0x64f784, 0x20 bytes
  064f784  li 12, 0
  064f788  oris 12, 12, 112
  064f78c  lwz 12, 6408(12)
  064f790  std 2, 40(1)
  064f794  lwz 0, 0(12)
  064f798  lwz 2, 4(12)
  064f79c  mtctr 0
  064f7a0  bctr

cellGameBootCheck:   # 0x64f7a4, 0x20 bytes
  064f7a4  li 12, 0
  064f7a8  oris 12, 12, 112
  064f7ac  lwz 12, 6412(12)
  064f7b0  std 2, 40(1)
  064f7b4  lwz 0, 0(12)
  064f7b8  lwz 2, 4(12)
  064f7bc  mtctr 0
  064f7c0  bctr

sceNpTrophyRegisterContext:   # 0x64f7c4, 0x20 bytes
  064f7c4  li 12, 0
  064f7c8  oris 12, 12, 112
  064f7cc  lwz 12, 6852(12)
  064f7d0  std 2, 40(1)
  064f7d4  lwz 0, 0(12)
  064f7d8  lwz 2, 4(12)
  064f7dc  mtctr 0
  064f7e0  bctr

sceNpTrophyCreateHandle:   # 0x64f7e4, 0x20 bytes
  064f7e4  li 12, 0
  064f7e8  oris 12, 12, 112
  064f7ec  lwz 12, 6856(12)
  064f7f0  std 2, 40(1)
  064f7f4  lwz 0, 0(12)
  064f7f8  lwz 2, 4(12)
  064f7fc  mtctr 0
  064f800  bctr

sceNpTrophyGetRequiredDiskSpace:   # 0x64f804, 0x20 bytes
  064f804  li 12, 0
  064f808  oris 12, 12, 112
  064f80c  lwz 12, 6860(12)
  064f810  std 2, 40(1)
  064f814  lwz 0, 0(12)
  064f818  lwz 2, 4(12)
  064f81c  mtctr 0
  064f820  bctr

sceNpTrophyDestroyContext:   # 0x64f824, 0x20 bytes
  064f824  li 12, 0
  064f828  oris 12, 12, 112
  064f82c  lwz 12, 6864(12)
  064f830  std 2, 40(1)
  064f834  lwz 0, 0(12)
  064f838  lwz 2, 4(12)
  064f83c  mtctr 0
  064f840  bctr

sceNpTrophyInit:   # 0x64f844, 0x20 bytes
  064f844  li 12, 0
  064f848  oris 12, 12, 112
  064f84c  lwz 12, 6868(12)
  064f850  std 2, 40(1)
  064f854  lwz 0, 0(12)
  064f858  lwz 2, 4(12)
  064f85c  mtctr 0
  064f860  bctr

sceNpTrophyGetGameInfo:   # 0x64f864, 0x20 bytes
  064f864  li 12, 0
  064f868  oris 12, 12, 112
  064f86c  lwz 12, 6872(12)
  064f870  std 2, 40(1)
  064f874  lwz 0, 0(12)
  064f878  lwz 2, 4(12)
  064f87c  mtctr 0
  064f880  bctr

sceNpTrophyDestroyHandle:   # 0x64f884, 0x20 bytes
  064f884  li 12, 0
  064f888  oris 12, 12, 112
  064f88c  lwz 12, 6876(12)
  064f890  std 2, 40(1)
  064f894  lwz 0, 0(12)
  064f898  lwz 2, 4(12)
  064f89c  mtctr 0
  064f8a0  bctr

sceNpTrophyUnlockTrophy:   # 0x64f8a4, 0x20 bytes
  064f8a4  li 12, 0
  064f8a8  oris 12, 12, 112
  064f8ac  lwz 12, 6880(12)
  064f8b0  std 2, 40(1)
  064f8b4  lwz 0, 0(12)
  064f8b8  lwz 2, 4(12)
  064f8bc  mtctr 0
  064f8c0  bctr

sceNpTrophyCreateContext:   # 0x64f8c4, 0x20 bytes
  064f8c4  li 12, 0
  064f8c8  oris 12, 12, 112
  064f8cc  lwz 12, 6884(12)
  064f8d0  std 2, 40(1)
  064f8d4  lwz 0, 0(12)
  064f8d8  lwz 2, 4(12)
  064f8dc  mtctr 0
  064f8e0  bctr

sceNpTrophyGetTrophyInfo:   # 0x64f8e4, 0x20 bytes
  064f8e4  li 12, 0
  064f8e8  oris 12, 12, 112
  064f8ec  lwz 12, 6888(12)
  064f8f0  std 2, 40(1)
  064f8f4  lwz 0, 0(12)
  064f8f8  lwz 2, 4(12)
  064f8fc  mtctr 0
  064f900  bctr

sceNpTusCreateTitleCtx:   # 0x64f904, 0x20 bytes
  064f904  li 12, 0
  064f908  oris 12, 12, 112
  064f90c  lwz 12, 6892(12)
  064f910  std 2, 40(1)
  064f914  lwz 0, 0(12)
  064f918  lwz 2, 4(12)
  064f91c  mtctr 0
  064f920  bctr

sceNpTusInit:   # 0x64f924, 0x20 bytes
  064f924  li 12, 0
  064f928  oris 12, 12, 112
  064f92c  lwz 12, 6896(12)
  064f930  std 2, 40(1)
  064f934  lwz 0, 0(12)
  064f938  lwz 2, 4(12)
  064f93c  mtctr 0
  064f940  bctr

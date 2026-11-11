# sdk/cell.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellPadInit:   # 0x64f944, 0x20 bytes
  064f944  li 12, 0
  064f948  oris 12, 12, 112
  064f94c  lwz 12, 7104(12)
  064f950  std 2, 40(1)
  064f954  lwz 0, 0(12)
  064f958  lwz 2, 4(12)
  064f95c  mtctr 0
  064f960  bctr

cellPadEnd:   # 0x64f964, 0x20 bytes
  064f964  li 12, 0
  064f968  oris 12, 12, 112
  064f96c  lwz 12, 7108(12)
  064f970  std 2, 40(1)
  064f974  lwz 0, 0(12)
  064f978  lwz 2, 4(12)
  064f97c  mtctr 0
  064f980  bctr

cellPadSetPortSetting:   # 0x64f984, 0x20 bytes
  064f984  li 12, 0
  064f988  oris 12, 12, 112
  064f98c  lwz 12, 7112(12)
  064f990  std 2, 40(1)
  064f994  lwz 0, 0(12)
  064f998  lwz 2, 4(12)
  064f99c  mtctr 0
  064f9a0  bctr

cellPadGetData:   # 0x64f9a4, 0x20 bytes
  064f9a4  li 12, 0
  064f9a8  oris 12, 12, 112
  064f9ac  lwz 12, 7116(12)
  064f9b0  std 2, 40(1)
  064f9b4  lwz 0, 0(12)
  064f9b8  lwz 2, 4(12)
  064f9bc  mtctr 0
  064f9c0  bctr

cellPadGetInfo2:   # 0x64f9c4, 0x20 bytes
  064f9c4  li 12, 0
  064f9c8  oris 12, 12, 112
  064f9cc  lwz 12, 7120(12)
  064f9d0  std 2, 40(1)
  064f9d4  lwz 0, 0(12)
  064f9d8  lwz 2, 4(12)
  064f9dc  mtctr 0
  064f9e0  bctr

cellSpursAttributeSetNamePrefix:   # 0x64f9e4, 0x20 bytes
  064f9e4  li 12, 0
  064f9e8  oris 12, 12, 112
  064f9ec  lwz 12, 6524(12)
  064f9f0  std 2, 40(1)
  064f9f4  lwz 0, 0(12)
  064f9f8  lwz 2, 4(12)
  064f9fc  mtctr 0
  064fa00  bctr

_cellSpursTasksetAttributeInitialize:   # 0x64fa04, 0x20 bytes
  064fa04  li 12, 0
  064fa08  oris 12, 12, 112
  064fa0c  lwz 12, 6528(12)
  064fa10  std 2, 40(1)
  064fa14  lwz 0, 0(12)
  064fa18  lwz 2, 4(12)
  064fa1c  mtctr 0
  064fa20  bctr

cellSpursRequestIdleSpu:   # 0x64fa24, 0x20 bytes
  064fa24  li 12, 0
  064fa28  oris 12, 12, 112
  064fa2c  lwz 12, 6532(12)
  064fa30  std 2, 40(1)
  064fa34  lwz 0, 0(12)
  064fa38  lwz 2, 4(12)
  064fa3c  mtctr 0
  064fa40  bctr

cellSpursGetInfo:   # 0x64fa44, 0x20 bytes
  064fa44  li 12, 0
  064fa48  oris 12, 12, 112
  064fa4c  lwz 12, 6536(12)
  064fa50  std 2, 40(1)
  064fa54  lwz 0, 0(12)
  064fa58  lwz 2, 4(12)
  064fa5c  mtctr 0
  064fa60  bctr

cellSpursEventFlagDetachLv2EventQueue:   # 0x64fa64, 0x20 bytes
  064fa64  li 12, 0
  064fa68  oris 12, 12, 112
  064fa6c  lwz 12, 6540(12)
  064fa70  std 2, 40(1)
  064fa74  lwz 0, 0(12)
  064fa78  lwz 2, 4(12)
  064fa7c  mtctr 0
  064fa80  bctr

cellSpursEventFlagWait:   # 0x64fa84, 0x20 bytes
  064fa84  li 12, 0
  064fa88  oris 12, 12, 112
  064fa8c  lwz 12, 6544(12)
  064fa90  std 2, 40(1)
  064fa94  lwz 0, 0(12)
  064fa98  lwz 2, 4(12)
  064fa9c  mtctr 0
  064faa0  bctr

cellSpursWorkloadAttributeSetName:   # 0x64faa4, 0x20 bytes
  064faa4  li 12, 0
  064faa8  oris 12, 12, 112
  064faac  lwz 12, 6548(12)
  064fab0  std 2, 40(1)
  064fab4  lwz 0, 0(12)
  064fab8  lwz 2, 4(12)
  064fabc  mtctr 0
  064fac0  bctr

cellSpursEventFlagClear:   # 0x64fac4, 0x20 bytes
  064fac4  li 12, 0
  064fac8  oris 12, 12, 112
  064facc  lwz 12, 6552(12)
  064fad0  std 2, 40(1)
  064fad4  lwz 0, 0(12)
  064fad8  lwz 2, 4(12)
  064fadc  mtctr 0
  064fae0  bctr

cellSpursGetWorkloadInfo:   # 0x64fae4, 0x20 bytes
  064fae4  li 12, 0
  064fae8  oris 12, 12, 112
  064faec  lwz 12, 6556(12)
  064faf0  std 2, 40(1)
  064faf4  lwz 0, 0(12)
  064faf8  lwz 2, 4(12)
  064fafc  mtctr 0
  064fb00  bctr

cellSpursRemoveWorkload:   # 0x64fb04, 0x20 bytes
  064fb04  li 12, 0
  064fb08  oris 12, 12, 112
  064fb0c  lwz 12, 6560(12)
  064fb10  std 2, 40(1)
  064fb14  lwz 0, 0(12)
  064fb18  lwz 2, 4(12)
  064fb1c  mtctr 0
  064fb20  bctr

_cellSpursEventFlagInitialize:   # 0x64fb24, 0x20 bytes
  064fb24  li 12, 0
  064fb28  oris 12, 12, 112
  064fb2c  lwz 12, 6564(12)
  064fb30  std 2, 40(1)
  064fb34  lwz 0, 0(12)
  064fb38  lwz 2, 4(12)
  064fb3c  mtctr 0
  064fb40  bctr

cellSpursWaitForWorkloadShutdown:   # 0x64fb44, 0x20 bytes
  064fb44  li 12, 0
  064fb48  oris 12, 12, 112
  064fb4c  lwz 12, 6568(12)
  064fb50  std 2, 40(1)
  064fb54  lwz 0, 0(12)
  064fb58  lwz 2, 4(12)
  064fb5c  mtctr 0
  064fb60  bctr

cellSpursTasksetAttributeSetName:   # 0x64fb64, 0x20 bytes
  064fb64  li 12, 0
  064fb68  oris 12, 12, 112
  064fb6c  lwz 12, 6572(12)
  064fb70  std 2, 40(1)
  064fb74  lwz 0, 0(12)
  064fb78  lwz 2, 4(12)
  064fb7c  mtctr 0
  064fb80  bctr

cellSpursSetPriorities:   # 0x64fb84, 0x20 bytes
  064fb84  li 12, 0
  064fb88  oris 12, 12, 112
  064fb8c  lwz 12, 6576(12)
  064fb90  std 2, 40(1)
  064fb94  lwz 0, 0(12)
  064fb98  lwz 2, 4(12)
  064fb9c  mtctr 0
  064fba0  bctr

cellSpursEventFlagAttachLv2EventQueue:   # 0x64fba4, 0x20 bytes
  064fba4  li 12, 0
  064fba8  oris 12, 12, 112
  064fbac  lwz 12, 6580(12)
  064fbb0  std 2, 40(1)
  064fbb4  lwz 0, 0(12)
  064fbb8  lwz 2, 4(12)
  064fbbc  mtctr 0
  064fbc0  bctr

_cellSpursAttributeInitialize:   # 0x64fbc4, 0x20 bytes
  064fbc4  li 12, 0
  064fbc8  oris 12, 12, 112
  064fbcc  lwz 12, 6584(12)
  064fbd0  std 2, 40(1)
  064fbd4  lwz 0, 0(12)
  064fbd8  lwz 2, 4(12)
  064fbdc  mtctr 0
  064fbe0  bctr

cellSpursShutdownWorkload:   # 0x64fbe4, 0x20 bytes
  064fbe4  li 12, 0
  064fbe8  oris 12, 12, 112
  064fbec  lwz 12, 6588(12)
  064fbf0  std 2, 40(1)
  064fbf4  lwz 0, 0(12)
  064fbf8  lwz 2, 4(12)
  064fbfc  mtctr 0
  064fc00  bctr

cellSpursJoinTaskset:   # 0x64fc04, 0x20 bytes
  064fc04  li 12, 0
  064fc08  oris 12, 12, 112
  064fc0c  lwz 12, 6592(12)
  064fc10  std 2, 40(1)
  064fc14  lwz 0, 0(12)
  064fc18  lwz 2, 4(12)
  064fc1c  mtctr 0
  064fc20  bctr

cellSpursShutdownTaskset:   # 0x64fc24, 0x20 bytes
  064fc24  li 12, 0
  064fc28  oris 12, 12, 112
  064fc2c  lwz 12, 6596(12)
  064fc30  std 2, 40(1)
  064fc34  lwz 0, 0(12)
  064fc38  lwz 2, 4(12)
  064fc3c  mtctr 0
  064fc40  bctr

cellSpursInitializeWithAttribute:   # 0x64fc44, 0x20 bytes
  064fc44  li 12, 0
  064fc48  oris 12, 12, 112
  064fc4c  lwz 12, 6600(12)
  064fc50  std 2, 40(1)
  064fc54  lwz 0, 0(12)
  064fc58  lwz 2, 4(12)
  064fc5c  mtctr 0
  064fc60  bctr

cellSpursAddWorkloadWithAttribute:   # 0x64fc64, 0x20 bytes
  064fc64  li 12, 0
  064fc68  oris 12, 12, 112
  064fc6c  lwz 12, 6604(12)
  064fc70  std 2, 40(1)
  064fc74  lwz 0, 0(12)
  064fc78  lwz 2, 4(12)
  064fc7c  mtctr 0
  064fc80  bctr

cellSpursCreateTasksetWithAttribute:   # 0x64fc84, 0x20 bytes
  064fc84  li 12, 0
  064fc88  oris 12, 12, 112
  064fc8c  lwz 12, 6608(12)
  064fc90  std 2, 40(1)
  064fc94  lwz 0, 0(12)
  064fc98  lwz 2, 4(12)
  064fc9c  mtctr 0
  064fca0  bctr

cellSpursFinalize:   # 0x64fca4, 0x20 bytes
  064fca4  li 12, 0
  064fca8  oris 12, 12, 112
  064fcac  lwz 12, 6612(12)
  064fcb0  std 2, 40(1)
  064fcb4  lwz 0, 0(12)
  064fcb8  lwz 2, 4(12)
  064fcbc  mtctr 0
  064fcc0  bctr

cellSpursSetExceptionEventHandler:   # 0x64fcc4, 0x20 bytes
  064fcc4  li 12, 0
  064fcc8  oris 12, 12, 112
  064fccc  lwz 12, 6616(12)
  064fcd0  std 2, 40(1)
  064fcd4  lwz 0, 0(12)
  064fcd8  lwz 2, 4(12)
  064fcdc  mtctr 0
  064fce0  bctr

_cellSpursWorkloadAttributeInitialize:   # 0x64fce4, 0x20 bytes
  064fce4  li 12, 0
  064fce8  oris 12, 12, 112
  064fcec  lwz 12, 6620(12)
  064fcf0  std 2, 40(1)
  064fcf4  lwz 0, 0(12)
  064fcf8  lwz 2, 4(12)
  064fcfc  mtctr 0
  064fd00  bctr

cellSpursReadyCountStore:   # 0x64fd04, 0x20 bytes
  064fd04  li 12, 0
  064fd08  oris 12, 12, 112
  064fd0c  lwz 12, 6624(12)
  064fd10  std 2, 40(1)
  064fd14  lwz 0, 0(12)
  064fd18  lwz 2, 4(12)
  064fd1c  mtctr 0
  064fd20  bctr

sys_net_finalize_network:   # 0x64fd24, 0x20 bytes
  064fd24  li 12, 0
  064fd28  oris 12, 12, 112
  064fd2c  lwz 12, 7124(12)
  064fd30  std 2, 40(1)
  064fd34  lwz 0, 0(12)
  064fd38  lwz 2, 4(12)
  064fd3c  mtctr 0
  064fd40  bctr

cellNetCtlNetStartDialogLoadAsync:   # 0x64fd44, 0x20 bytes
  064fd44  li 12, 0
  064fd48  oris 12, 12, 112
  064fd4c  lwz 12, 6500(12)
  064fd50  std 2, 40(1)
  064fd54  lwz 0, 0(12)
  064fd58  lwz 2, 4(12)
  064fd5c  mtctr 0
  064fd60  bctr

cellNetCtlNetStartDialogUnloadAsync:   # 0x64fd64, 0x20 bytes
  064fd64  li 12, 0
  064fd68  oris 12, 12, 112
  064fd6c  lwz 12, 6504(12)
  064fd70  std 2, 40(1)
  064fd74  lwz 0, 0(12)
  064fd78  lwz 2, 4(12)
  064fd7c  mtctr 0
  064fd80  bctr

cellNetCtlGetState:   # 0x64fd84, 0x20 bytes
  064fd84  li 12, 0
  064fd88  oris 12, 12, 112
  064fd8c  lwz 12, 6508(12)
  064fd90  std 2, 40(1)
  064fd94  lwz 0, 0(12)
  064fd98  lwz 2, 4(12)
  064fd9c  mtctr 0
  064fda0  bctr

cellNetCtlInit:   # 0x64fda4, 0x20 bytes
  064fda4  li 12, 0
  064fda8  oris 12, 12, 112
  064fdac  lwz 12, 6512(12)
  064fdb0  std 2, 40(1)
  064fdb4  lwz 0, 0(12)
  064fdb8  lwz 2, 4(12)
  064fdbc  mtctr 0
  064fdc0  bctr

cellAudioInit:   # 0x64fdc4, 0x20 bytes
  064fdc4  li 12, 0
  064fdc8  oris 12, 12, 112
  064fdcc  lwz 12, 6356(12)
  064fdd0  std 2, 40(1)
  064fdd4  lwz 0, 0(12)
  064fdd8  lwz 2, 4(12)
  064fddc  mtctr 0
  064fde0  bctr

cellAudioPortClose:   # 0x64fde4, 0x20 bytes
  064fde4  li 12, 0
  064fde8  oris 12, 12, 112
  064fdec  lwz 12, 6360(12)
  064fdf0  std 2, 40(1)
  064fdf4  lwz 0, 0(12)
  064fdf8  lwz 2, 4(12)
  064fdfc  mtctr 0
  064fe00  bctr

cellAudioGetPortConfig:   # 0x64fe04, 0x20 bytes
  064fe04  li 12, 0
  064fe08  oris 12, 12, 112
  064fe0c  lwz 12, 6364(12)
  064fe10  std 2, 40(1)
  064fe14  lwz 0, 0(12)
  064fe18  lwz 2, 4(12)
  064fe1c  mtctr 0
  064fe20  bctr

cellAudioPortStart:   # 0x64fe24, 0x20 bytes
  064fe24  li 12, 0
  064fe28  oris 12, 12, 112
  064fe2c  lwz 12, 6368(12)
  064fe30  std 2, 40(1)
  064fe34  lwz 0, 0(12)
  064fe38  lwz 2, 4(12)
  064fe3c  mtctr 0
  064fe40  bctr

cellAudioPortOpen:   # 0x64fe44, 0x20 bytes
  064fe44  li 12, 0
  064fe48  oris 12, 12, 112
  064fe4c  lwz 12, 6372(12)
  064fe50  std 2, 40(1)
  064fe54  lwz 0, 0(12)
  064fe58  lwz 2, 4(12)
  064fe5c  mtctr 0
  064fe60  bctr

L10nConvertStr:   # 0x64fe64, 0x20 bytes
  064fe64  li 12, 0
  064fe68  oris 12, 12, 112
  064fe6c  lwz 12, 6496(12)
  064fe70  std 2, 40(1)
  064fe74  lwz 0, 0(12)
  064fe78  lwz 2, 4(12)
  064fe7c  mtctr 0
  064fe80  bctr

sceNpDrmIsAvailable2:   # 0x64fe84, 0x20 bytes
  064fe84  li 12, 0
  064fe88  oris 12, 12, 112
  064fe8c  lwz 12, 6844(12)
  064fe90  std 2, 40(1)
  064fe94  lwz 0, 0(12)
  064fe98  lwz 2, 4(12)
  064fe9c  mtctr 0
  064fea0  bctr

cellFsRmdir:   # 0x64fea4, 0x20 bytes
  064fea4  li 12, 0
  064fea8  oris 12, 12, 112
  064feac  lwz 12, 7032(12)
  064feb0  std 2, 40(1)
  064feb4  lwz 0, 0(12)
  064feb8  lwz 2, 4(12)
  064febc  mtctr 0
  064fec0  bctr

cellFsOpendir:   # 0x64fec4, 0x20 bytes
  064fec4  li 12, 0
  064fec8  oris 12, 12, 112
  064fecc  lwz 12, 7036(12)
  064fed0  std 2, 40(1)
  064fed4  lwz 0, 0(12)
  064fed8  lwz 2, 4(12)
  064fedc  mtctr 0
  064fee0  bctr

cellFsAioWrite:   # 0x64fee4, 0x20 bytes
  064fee4  li 12, 0
  064fee8  oris 12, 12, 112
  064feec  lwz 12, 7040(12)
  064fef0  std 2, 40(1)
  064fef4  lwz 0, 0(12)
  064fef8  lwz 2, 4(12)
  064fefc  mtctr 0
  064ff00  bctr

cellFsReaddir:   # 0x64ff04, 0x20 bytes
  064ff04  li 12, 0
  064ff08  oris 12, 12, 112
  064ff0c  lwz 12, 7044(12)
  064ff10  std 2, 40(1)
  064ff14  lwz 0, 0(12)
  064ff18  lwz 2, 4(12)
  064ff1c  mtctr 0
  064ff20  bctr

cellFsSdataOpenByFd:   # 0x64ff24, 0x20 bytes
  064ff24  li 12, 0
  064ff28  oris 12, 12, 112
  064ff2c  lwz 12, 7048(12)
  064ff30  std 2, 40(1)
  064ff34  lwz 0, 0(12)
  064ff38  lwz 2, 4(12)
  064ff3c  mtctr 0
  064ff40  bctr

cellFsStat:   # 0x64ff44, 0x20 bytes
  064ff44  li 12, 0
  064ff48  oris 12, 12, 112
  064ff4c  lwz 12, 7052(12)
  064ff50  std 2, 40(1)
  064ff54  lwz 0, 0(12)
  064ff58  lwz 2, 4(12)
  064ff5c  mtctr 0
  064ff60  bctr

cellFsAioCancel:   # 0x64ff64, 0x20 bytes
  064ff64  li 12, 0
  064ff68  oris 12, 12, 112
  064ff6c  lwz 12, 7056(12)
  064ff70  std 2, 40(1)
  064ff74  lwz 0, 0(12)
  064ff78  lwz 2, 4(12)
  064ff7c  mtctr 0
  064ff80  bctr

cellFsUnlink:   # 0x64ff84, 0x20 bytes
  064ff84  li 12, 0
  064ff88  oris 12, 12, 112
  064ff8c  lwz 12, 7060(12)
  064ff90  std 2, 40(1)
  064ff94  lwz 0, 0(12)
  064ff98  lwz 2, 4(12)
  064ff9c  mtctr 0
  064ffa0  bctr

cellFsFsync:   # 0x64ffa4, 0x20 bytes
  064ffa4  li 12, 0
  064ffa8  oris 12, 12, 112
  064ffac  lwz 12, 7064(12)
  064ffb0  std 2, 40(1)
  064ffb4  lwz 0, 0(12)
  064ffb8  lwz 2, 4(12)
  064ffbc  mtctr 0
  064ffc0  bctr

cellFsAioFinish:   # 0x64ffc4, 0x20 bytes
  064ffc4  li 12, 0
  064ffc8  oris 12, 12, 112
  064ffcc  lwz 12, 7068(12)
  064ffd0  std 2, 40(1)
  064ffd4  lwz 0, 0(12)
  064ffd8  lwz 2, 4(12)
  064ffdc  mtctr 0
  064ffe0  bctr

cellFsLseek:   # 0x64ffe4, 0x20 bytes
  064ffe4  li 12, 0
  064ffe8  oris 12, 12, 112
  064ffec  lwz 12, 7072(12)
  064fff0  std 2, 40(1)
  064fff4  lwz 0, 0(12)
  064fff8  lwz 2, 4(12)
  064fffc  mtctr 0
  0650000  bctr

cellFsGetFreeSize:   # 0x650004, 0x20 bytes
  0650004  li 12, 0
  0650008  oris 12, 12, 112
  065000c  lwz 12, 7076(12)
  0650010  std 2, 40(1)
  0650014  lwz 0, 0(12)
  0650018  lwz 2, 4(12)
  065001c  mtctr 0
  0650020  bctr

cellFsSdataOpen:   # 0x650024, 0x20 bytes
  0650024  li 12, 0
  0650028  oris 12, 12, 112
  065002c  lwz 12, 7080(12)
  0650030  std 2, 40(1)
  0650034  lwz 0, 0(12)
  0650038  lwz 2, 4(12)
  065003c  mtctr 0
  0650040  bctr

cellFsMkdir:   # 0x650044, 0x20 bytes
  0650044  li 12, 0
  0650048  oris 12, 12, 112
  065004c  lwz 12, 7084(12)
  0650050  std 2, 40(1)
  0650054  lwz 0, 0(12)
  0650058  lwz 2, 4(12)
  065005c  mtctr 0
  0650060  bctr

cellFsAioRead:   # 0x650064, 0x20 bytes
  0650064  li 12, 0
  0650068  oris 12, 12, 112
  065006c  lwz 12, 7088(12)
  0650070  std 2, 40(1)
  0650074  lwz 0, 0(12)
  0650078  lwz 2, 4(12)
  065007c  mtctr 0
  0650080  bctr

cellFsAioInit:   # 0x650084, 0x20 bytes
  0650084  li 12, 0
  0650088  oris 12, 12, 112
  065008c  lwz 12, 7092(12)
  0650090  std 2, 40(1)
  0650094  lwz 0, 0(12)
  0650098  lwz 2, 4(12)
  065009c  mtctr 0
  06500a0  bctr

cellFsWrite:   # 0x6500a4, 0x20 bytes
  06500a4  li 12, 0
  06500a8  oris 12, 12, 112
  06500ac  lwz 12, 7096(12)
  06500b0  std 2, 40(1)
  06500b4  lwz 0, 0(12)
  06500b8  lwz 2, 4(12)
  06500bc  mtctr 0
  06500c0  bctr

cellFsClosedir:   # 0x6500c4, 0x20 bytes
  06500c4  li 12, 0
  06500c8  oris 12, 12, 112
  06500cc  lwz 12, 7100(12)
  06500d0  std 2, 40(1)
  06500d4  lwz 0, 0(12)
  06500d8  lwz 2, 4(12)
  06500dc  mtctr 0
  06500e0  bctr

cellSysmoduleInitialize:   # 0x6500e4, 0x20 bytes
  06500e4  li 12, 0
  06500e8  oris 12, 12, 112
  06500ec  lwz 12, 6668(12)
  06500f0  std 2, 40(1)
  06500f4  lwz 0, 0(12)
  06500f8  lwz 2, 4(12)
  06500fc  mtctr 0
  0650100  bctr

_cellSpursLFQueueInitialize:   # 0x650104, 0x20 bytes
  0650104  li 12, 0
  0650108  oris 12, 12, 112
  065010c  lwz 12, 6628(12)
  0650110  std 2, 40(1)
  0650114  lwz 0, 0(12)
  0650118  lwz 2, 4(12)
  065011c  mtctr 0
  0650120  bctr

cellSpursLFQueueAttachLv2EventQueue:   # 0x650124, 0x20 bytes
  0650124  li 12, 0
  0650128  oris 12, 12, 112
  065012c  lwz 12, 6632(12)
  0650130  std 2, 40(1)
  0650134  lwz 0, 0(12)
  0650138  lwz 2, 4(12)
  065013c  mtctr 0
  0650140  bctr

cellSpursLFQueueDetachLv2EventQueue:   # 0x650144, 0x20 bytes
  0650144  li 12, 0
  0650148  oris 12, 12, 112
  065014c  lwz 12, 6636(12)
  0650150  std 2, 40(1)
  0650154  lwz 0, 0(12)
  0650158  lwz 2, 4(12)
  065015c  mtctr 0
  0650160  bctr

_cellSpursLFQueuePushBody:   # 0x650164, 0x20 bytes
  0650164  li 12, 0
  0650168  oris 12, 12, 112
  065016c  lwz 12, 6640(12)
  0650170  std 2, 40(1)
  0650174  lwz 0, 0(12)
  0650178  lwz 2, 4(12)
  065017c  mtctr 0
  0650180  bctr

cellSpursCreateTask:   # 0x650184, 0x20 bytes
  0650184  li 12, 0
  0650188  oris 12, 12, 112
  065018c  lwz 12, 6644(12)
  0650190  std 2, 40(1)
  0650194  lwz 0, 0(12)
  0650198  lwz 2, 4(12)
  065019c  mtctr 0
  06501a0  bctr

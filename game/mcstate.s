# game/mcstate.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

Map_InitColors:   # 0xe64fc, 0x98 bytes
  00e64fc  stdu 1, -112(1)
  00e6500  mflr 0
  00e6504  std 0, 128(1)
  00e6508  lis 3, 114
  00e650c  lis 7, 1
  00e6510  addic 8, 3, 25836
  00e6514  li 3, 0
  00e6518  li 4, 0
  00e651c  li 5, 0
  00e6520  li 6, 128
  00e6524  stw 7, 72(8)
  00e6528  li 7, 0
  00e652c  bl 0x502f74
  00e6530  nop
  00e6534  lis 7, 162
  00e6538  li 4, 255
  00e653c  li 5, 175
  00e6540  li 6, 128
  00e6544  std 3, 2120(7)
  00e6548  li 7, 0
  00e654c  li 3, 255
  00e6550  bl 0x502f74
  00e6554  nop
  00e6558  lis 8, 162
  00e655c  li 4, 255
  00e6560  li 5, 175
  00e6564  li 6, 0
  00e6568  li 7, 0
  00e656c  stw 3, 2128(8)
  00e6570  li 3, 255
  00e6574  bl 0x502f74
  00e6578  nop
  00e657c  lis 4, 162
  00e6580  stw 3, 2132(4)
  00e6584  ld 0, 128(1)
  00e6588  mtlr 0
  00e658c  addi 1, 1, 112
  00e6590  blr

FlowState_Update:   # 0xe6598, 0x114 bytes
  00e6598  stdu 1, -128(1)
  00e659c  mflr 0
  00e65a0  std 0, 144(1)
  00e65a4  lis 3, 114
  00e65a8  addic 3, 3, -1500
  00e65ac  lwz 4, 236(3)
  00e65b0  std 31, 120(1)
  00e65b4  cmpwi 4, 0
  00e65b8  bf 2, 0xe65c8
  00e65bc  lwz 3, 28(3)
  00e65c0  cmpwi 3, 0
  00e65c4  bt 2, 0xe65d4
  00e65c8  lis 3, 162
  00e65cc  li 4, 1
  00e65d0  stw 4, 2180(3)
  00e65d4  lis 3, 161
  00e65d8  lis 31, 161
  00e65dc  lwz 3, -736(3)
  00e65e0  lwz 31, -740(31)
  00e65e4  rlwinm 5, 3, 0, 24, 24
  00e65e8  ori 4, 31, 0
  00e65ec  cmpwi 5, 0
  00e65f0  bt 2, 0xe6614
  00e65f4  li 4, 0
  00e65f8  lis 5, 161
  00e65fc  rlwimi 3, 4, 0, 24, 24
  00e6600  lis 6, 161
  00e6604  ori 3, 3, 64
  00e6608  li 4, 21
  00e660c  stw 3, -736(5)
  00e6610  stw 4, -740(6)
  00e6614  rlwinm 5, 3, 0, 23, 23
  00e6618  cmpwi 5, 0
  00e661c  bt 2, 0xe6640
  00e6620  li 4, 0
  00e6624  lis 6, 161
  00e6628  rlwimi 3, 4, 0, 23, 23
  00e662c  lis 5, 161
  00e6630  li 4, 20
  00e6634  ori 3, 3, 64
  00e6638  stw 4, -740(6)
  00e663c  stw 3, -736(5)
  00e6640  lis 3, 114
  00e6644  slwi 4, 4, 2
  00e6648  std 2, 40(1)
  00e664c  addic 3, 3, 26044
  00e6650  extsw 4, 4
  00e6654  lwzx 3, 3, 4
  00e6658  lwz 4, 0(3)
  00e665c  lwz 2, 4(3)
  00e6660  mtctr 4
  00e6664  bcctrl 20, 30
  00e6668  lis 3, 162
  00e666c  lis 4, 161
  00e6670  ld 2, 40(1)
  00e6674  lwz 5, 2176(3)
  00e6678  lwz 4, -740(4)
  00e667c  addic 5, 5, 1
  00e6680  cmpw 4, 31
  00e6684  stw 5, 2176(3)
  00e6688  bt 2, 0xe6698
  00e668c  lis 3, 162
  00e6690  li 4, 0
  00e6694  stw 4, 2176(3)
  00e6698  ld 0, 144(1)
  00e669c  mtlr 0
  00e66a0  ld 31, 120(1)
  00e66a4  addi 1, 1, 128
  00e66a8  blr

CardState_INIT:   # 0xe66ac, 0x28 bytes
  00e66ac  lis 3, 114
  00e66b0  li 6, 0
  00e66b4  addic 3, 3, -1500
  00e66b8  lis 4, 161
  00e66bc  li 5, 3
  00e66c0  lwz 7, 196(3)
  00e66c4  stw 6, 252(3)
  00e66c8  stw 7, 28(3)
  00e66cc  stw 5, -740(4)
  00e66d0  blr

CardState_GOOD_SAVE:   # 0xe66d4, 0xb8 bytes
  00e66d4  lis 5, 161
  00e66d8  li 3, 0
  00e66dc  lis 6, 161
  00e66e0  lwz 4, -736(5)
  00e66e4  ori 7, 4, 0
  00e66e8  rlwinm 8, 4, 0, 24, 24
  00e66ec  rlwimi 7, 3, 0, 29, 29
  00e66f0  cmpwi 8, 0
  00e66f4  rlwimi 7, 3, 0, 30, 30
  00e66f8  stw 7, -736(5)
  00e66fc  bt 2, 0xe6718
  00e6700  xori 3, 7, 128
  00e6704  li 4, 21
  00e6708  ori 3, 3, 64
  00e670c  stw 4, -740(6)
  00e6710  stw 3, -736(5)
  00e6714  b 0xe6788
  00e6718  rlwinm 3, 4, 0, 23, 23
  00e671c  cmpwi 3, 0
  00e6720  bt 2, 0xe673c
  00e6724  xori 3, 7, 256
  00e6728  li 4, 20
  00e672c  ori 3, 3, 64
  00e6730  stw 4, -740(6)
  00e6734  stw 3, -736(5)
  00e6738  b 0xe6788
  00e673c  lis 3, 114
  00e6740  addic 3, 3, -1500
  00e6744  lwz 8, 28(3)
  00e6748  cmpwi 8, 0
  00e674c  bt 2, 0xe676c
  00e6750  li 4, 0
  00e6754  ori 7, 7, 1
  00e6758  li 8, 2
  00e675c  stw 4, 252(3)
  00e6760  stw 7, -736(5)
  00e6764  stw 8, -740(6)
  00e6768  b 0xe6788
  00e676c  rlwinm 3, 4, 0, 22, 22
  00e6770  cmpwi 3, 0
  00e6774  bt 2, 0xe6788
  00e6778  xori 3, 7, 512
  00e677c  li 4, 22
  00e6780  stw 3, -736(5)
  00e6784  stw 4, -740(6)
  00e6788  blr

CardState_WARNING:   # 0xe678c, 0x58 bytes
  00e678c  lis 3, 114
  00e6790  addic 3, 3, -1500
  00e6794  lwz 4, 204(3)
  00e6798  sldi 4, 4, 6
  00e679c  addc 5, 4, 4
  00e67a0  addc 4, 4, 5
  00e67a4  extsw 4, 4
  00e67a8  addc 3, 3, 4
  00e67ac  lwz 4, 176(3)
  00e67b0  cmpwi 4, 2
  00e67b4  bf 2, 0xe67c0
  00e67b8  li 4, 0
  00e67bc  stw 4, 176(3)
  00e67c0  lis 3, 161
  00e67c4  lwz 3, -736(3)
  00e67c8  clrlwi 3, 3, 31
  00e67cc  cmpwi 3, 0
  00e67d0  bf 2, 0xe67e0
  00e67d4  lis 3, 161
  00e67d8  li 4, 3
  00e67dc  stw 4, -740(3)
  00e67e0  blr

CardState_NOCARD:   # 0xe67e4, 0x64 bytes
  00e67e4  lis 3, 114
  00e67e8  li 5, -1
  00e67ec  addic 4, 3, -1500
  00e67f0  lwz 3, 204(4)
  00e67f4  stw 5, 228(4)
  00e67f8  sldi 3, 3, 6
  00e67fc  stw 5, 232(4)
  00e6800  addc 6, 3, 3
  00e6804  stw 5, 32(4)
  00e6808  addc 3, 3, 6
  00e680c  stw 5, 60(4)
  00e6810  extsw 3, 3
  00e6814  stw 5, 88(4)
  00e6818  addc 3, 4, 3
  00e681c  stw 5, 116(4)
  00e6820  stw 5, 144(4)
  00e6824  lwz 4, 176(3)
  00e6828  cmpwi 4, 2
  00e682c  bf 2, 0xe6838
  00e6830  li 4, 0
  00e6834  stw 4, 176(3)
  00e6838  lis 3, 161
  00e683c  li 4, 4
  00e6840  stw 4, -740(3)
  00e6844  blr

CardState_WAIT_FOR_CARD:   # 0xe6848, 0x24 bytes
  00e6848  lis 3, 161
  00e684c  lis 4, 161
  00e6850  li 5, 0
  00e6854  li 6, 9
  00e6858  lwz 7, -736(3)
  00e685c  rlwimi 7, 5, 0, 26, 26
  00e6860  stw 6, -740(4)
  00e6864  stw 7, -736(3)
  00e6868  blr

CardState_UNFORMATTED:   # 0xe686c, 0x10 bytes
  00e686c  lis 3, 161
  00e6870  li 4, 3
  00e6874  stw 4, -740(3)
  00e6878  blr

CardState_PROMPT_FORMAT:   # 0xe687c, 0x10 bytes
  00e687c  lis 3, 161
  00e6880  li 4, 9
  00e6884  stw 4, -740(3)
  00e6888  blr

CardState_FORMAT_PENDING:   # 0xe688c, 0x10 bytes
  00e688c  lis 3, 161
  00e6890  li 4, 9
  00e6894  stw 4, -740(3)
  00e6898  blr

CardState_FORMATTING:   # 0xe689c, 0x10 bytes
  00e689c  lis 3, 161
  00e68a0  li 4, 14
  00e68a4  stw 4, -740(3)
  00e68a8  blr

CardState_FORMATTED:   # 0xe68ac, 0x10 bytes
  00e68ac  lis 3, 161
  00e68b0  li 4, 10
  00e68b4  stw 4, -740(3)
  00e68b8  blr

CardState_CHECK_SAVE:   # 0xe68bc, 0x34 bytes
  00e68bc  lis 3, 114
  00e68c0  addic 3, 3, -1500
  00e68c4  lwz 4, 228(3)
  00e68c8  cmpwi 4, 0
  00e68cc  bf 0, 0xe68e0
  00e68d0  li 4, 7
  00e68d4  li 5, 0
  00e68d8  stw 4, 228(3)
  00e68dc  stw 5, 232(3)
  00e68e0  lis 3, 161
  00e68e4  li 4, 11
  00e68e8  stw 4, -740(3)
  00e68ec  blr

CardState_CHECKING_SAVE:   # 0xe68f0, 0x10 bytes
  00e68f0  lis 3, 161
  00e68f4  li 4, 16
  00e68f8  stw 4, -740(3)
  00e68fc  blr

CardState_NOSAVE:   # 0xe6900, 0x24 bytes
  00e6900  lis 3, 161
  00e6904  lwz 3, -736(3)
  00e6908  rlwinm 3, 3, 0, 30, 30
  00e690c  cmpwi 3, 0
  00e6910  bt 2, 0xe6920
  00e6914  lis 3, 161
  00e6918  li 4, 13
  00e691c  stw 4, -740(3)
  00e6920  blr

CardState_PROMPT_CREATE_SAVE:   # 0xe6924, 0x84 bytes
  00e6924  lis 3, 161
  00e6928  lwz 3, -736(3)
  00e692c  rlwinm 4, 3, 0, 26, 26
  00e6930  cmpwi 4, 0
  00e6934  bt 2, 0xe6980
  00e6938  lis 4, 161
  00e693c  lis 6, 161
  00e6940  xori 3, 3, 32
  00e6944  li 5, 0
  00e6948  lbz 4, 24376(4)
  00e694c  stw 3, -736(6)
  00e6950  subc 4, 5, 4
  00e6954  li 5, 12
  00e6958  cntlzw 3, 4
  00e695c  li 6, 24
  00e6960  sldi 3, 3, 58
  00e6964  subc 5, 5, 6
  00e6968  sradi 3, 3, 63
  00e696c  lis 4, 161
  00e6970  and 3, 3, 5
  00e6974  addc 3, 6, 3
  00e6978  stw 3, -740(4)
  00e697c  b 0xe69a4
  00e6980  rlwinm 4, 3, 0, 27, 27
  00e6984  cmpwi 4, 0
  00e6988  bt 2, 0xe69a4
  00e698c  lis 4, 161
  00e6990  xori 3, 3, 16
  00e6994  lis 5, 161
  00e6998  li 6, 14
  00e699c  stw 3, -736(4)
  00e69a0  stw 6, -740(5)
  00e69a4  blr

CardState_CREATE_SAVE_PENDING:   # 0xe69a8, 0x34 bytes
  00e69a8  lis 3, 114
  00e69ac  addic 3, 3, -1500
  00e69b0  lwz 4, 228(3)
  00e69b4  cmpwi 4, 0
  00e69b8  bf 0, 0xe69cc
  00e69bc  li 4, 9
  00e69c0  li 5, 0
  00e69c4  stw 4, 228(3)
  00e69c8  stw 5, 232(3)
  00e69cc  lis 3, 161
  00e69d0  li 4, 15
  00e69d4  stw 4, -740(3)
  00e69d8  blr

CardState_CREATING_SAVE:   # 0xe69dc, 0x6c bytes
  00e69dc  lis 3, 114
  00e69e0  addic 3, 3, -1500
  00e69e4  lwz 4, 236(3)
  00e69e8  cmpwi 4, 0
  00e69ec  bt 2, 0xe6a10
  00e69f0  lis 3, 161
  00e69f4  lis 4, 161
  00e69f8  li 5, 18
  00e69fc  lwz 6, -736(3)
  00e6a00  stw 5, -740(4)
  00e6a04  ori 6, 6, 64
  00e6a08  stw 6, -736(3)
  00e6a0c  b 0xe6a44
  00e6a10  li 4, 0
  00e6a14  lwz 5, 228(3)
  00e6a18  cmpwi 5, 0
  00e6a1c  stw 4, 200(3)
  00e6a20  stw 4, 20(3)
  00e6a24  bf 0, 0xe6a38
  00e6a28  li 4, 7
  00e6a2c  li 5, 0
  00e6a30  stw 4, 228(3)
  00e6a34  stw 5, 232(3)
  00e6a38  lis 3, 161
  00e6a3c  li 4, 16
  00e6a40  stw 4, -740(3)
  00e6a44  blr

CardState_NEWCARD:   # 0xe6a48, 0x10 bytes
  00e6a48  lis 3, 161
  00e6a4c  li 4, 1
  00e6a50  stw 4, -740(3)
  00e6a54  blr

CardState_FORMAT_FAILED:   # 0xe6a58, 0x10 bytes
  00e6a58  lis 3, 161
  00e6a5c  li 4, 3
  00e6a60  stw 4, -740(3)
  00e6a64  blr

CardState_CREATE_FAILED:   # 0xe6a68, 0x10 bytes
  00e6a68  lis 3, 161
  00e6a6c  li 4, 3
  00e6a70  stw 4, -740(3)
  00e6a74  blr

CardState_NO_ROOM:   # 0xe6a78, 0x10 bytes
  00e6a78  lis 3, 161
  00e6a7c  li 4, 3
  00e6a80  stw 4, -740(3)
  00e6a84  blr

CardState_LOAD_FAILED:   # 0xe6a88, 0x10 bytes
  00e6a88  lis 3, 161
  00e6a8c  li 4, 3
  00e6a90  stw 4, -740(3)
  00e6a94  blr

CardState_SAVE_FAILED:   # 0xe6a98, 0x10 bytes
  00e6a98  lis 3, 161
  00e6a9c  li 4, 3
  00e6aa0  stw 4, -740(3)
  00e6aa4  blr

CardState_SAVING:   # 0xe6aa8, 0x40 bytes
  00e6aa8  lis 4, 114
  00e6aac  li 3, 1
  00e6ab0  addic 4, 4, -1500
  00e6ab4  lwz 5, 236(4)
  00e6ab8  cmpwi 5, 0
  00e6abc  bt 2, 0xe6adc
  00e6ac0  lis 5, 161
  00e6ac4  li 6, 0
  00e6ac8  li 3, 21
  00e6acc  lwz 7, -736(5)
  00e6ad0  stw 6, 252(4)
  00e6ad4  ori 4, 7, 1088
  00e6ad8  stw 4, -736(5)
  00e6adc  lis 4, 161
  00e6ae0  stw 3, -740(4)
  00e6ae4  blr

CardState_PROMPT_BEGIN_UNFORMATTED:   # 0xe6ae8, 0x10 bytes
  00e6ae8  lis 3, 161
  00e6aec  li 4, 3
  00e6af0  stw 4, -740(3)
  00e6af4  blr

CardState_PROMPT_BEGIN_NOSAVE:   # 0xe6af8, 0x10 bytes
  00e6af8  lis 3, 161
  00e6afc  li 4, 12
  00e6b00  stw 4, -740(3)
  00e6b04  blr

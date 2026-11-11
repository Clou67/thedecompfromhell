# game/mission.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

ResetMissionState:   # 0xea378, 0x54 bytes
  00ea378  lis 4, 162
  00ea37c  li 5, 3
  00ea380  addic 4, 4, 17832
  00ea384  li 3, 0
  00ea388  mtctr 5
  00ea38c  stw 3, 0(4)
  00ea390  stw 3, 4(4)
  00ea394  stw 3, 8(4)
  00ea398  stw 3, 12(4)
  00ea39c  stw 3, 16(4)
  00ea3a0  stw 3, 20(4)
  00ea3a4  stw 3, 24(4)
  00ea3a8  stw 3, 28(4)
  00ea3ac  addic 4, 4, 32
  00ea3b0  bdnz 0xea38c
  00ea3b4  lis 4, 162
  00ea3b8  addic 5, 4, 17928
  00ea3bc  stw 3, 17928(4)
  00ea3c0  stw 3, 4(5)
  00ea3c4  stw 3, 8(5)
  00ea3c8  blr

CheckMission:   # 0xea3d0, 0x1e0 bytes
  00ea3d0  stdu 1, -112(1)
  00ea3d4  mflr 0
  00ea3d8  std 0, 128(1)
  00ea3dc  ori 5, 4, 0
  00ea3e0  extsh 4, 3
  00ea3e4  ori 3, 5, 0
  00ea3e8  cmpwi 4, 4
  00ea3ec  cmpwi 1, 4, 1
  00ea3f0  cmpwi 6, 4, -1
  00ea3f4  cmpwi 7, 4, 0
  00ea3f8  bt 1, 0xea420
  00ea3fc  bt 5, 0xea40c
  00ea400  bf 25, 0xea59c
  00ea404  bf 29, 0xea450
  00ea408  b 0xea460
  00ea40c  cmpwi 4, 2
  00ea410  bf 1, 0xea47c
  00ea414  cmpwi 4, 3
  00ea418  bf 1, 0xea498
  00ea41c  b 0xea4b4
  00ea420  cmpwi 4, 7
  00ea424  bt 1, 0xea43c
  00ea428  cmpwi 4, 5
  00ea42c  bf 1, 0xea4e8
  00ea430  cmpwi 4, 6
  00ea434  bf 1, 0xea524
  00ea438  b 0xea540
  00ea43c  cmpwi 4, 8
  00ea440  bf 1, 0xea568
  00ea444  cmpwi 4, 9
  00ea448  bf 1, 0xea458
  00ea44c  b 0xea59c
  00ea450  li 3, 1
  00ea454  b 0xea5a0
  00ea458  li 3, 0
  00ea45c  b 0xea5a0
  00ea460  lis 4, 151
  00ea464  addic 4, 4, -13812
  00ea468  lbzx 3, 4, 3
  00ea46c  cntlzw 3, 3
  00ea470  rlwinm 3, 3, 27, 31, 31
  00ea474  xori 3, 3, 1
  00ea478  b 0xea5a0
  00ea47c  lis 4, 151
  00ea480  addic 4, 4, -16064
  00ea484  lbzx 3, 4, 3
  00ea488  cntlzw 3, 3
  00ea48c  rlwinm 3, 3, 27, 31, 31
  00ea490  xori 3, 3, 1
  00ea494  b 0xea5a0
  00ea498  lis 4, 151
  00ea49c  addic 4, 4, -16027
  00ea4a0  lbzx 3, 4, 3
  00ea4a4  cntlzw 3, 3
  00ea4a8  rlwinm 3, 3, 27, 31, 31
  00ea4ac  xori 3, 3, 1
  00ea4b0  b 0xea5a0
  00ea4b4  cmpwi 3, 121
  00ea4b8  bt 0, 0xea4c4
  00ea4bc  li 3, 0
  00ea4c0  b 0xea5a0
  00ea4c4  lis 4, 151
  00ea4c8  sldi 3, 3, 4
  00ea4cc  addic 4, 4, -15784
  00ea4d0  extsw 3, 3
  00ea4d4  lwzx 3, 4, 3
  00ea4d8  cntlzw 3, 3
  00ea4dc  rlwinm 3, 3, 27, 31, 31
  00ea4e0  xori 3, 3, 1
  00ea4e4  b 0xea5a0
  00ea4e8  cmpwi 3, 121
  00ea4ec  bt 0, 0xea4f8
  00ea4f0  li 3, 0
  00ea4f4  b 0xea5a0
  00ea4f8  lis 4, 151
  00ea4fc  sldi 3, 3, 4
  00ea500  addic 4, 4, -15784
  00ea504  extsw 3, 3
  00ea508  li 5, 2
  00ea50c  lwzx 3, 4, 3
  00ea510  extsw 3, 3
  00ea514  subc 3, 3, 5
  00ea518  rldicl 3, 3, 1, 63
  00ea51c  xori 3, 3, 1
  00ea520  b 0xea5a0
  00ea524  lis 4, 151
  00ea528  addic 4, 4, -16400
  00ea52c  lbzx 3, 4, 3
  00ea530  cntlzw 3, 3
  00ea534  rlwinm 3, 3, 27, 31, 31
  00ea538  xori 3, 3, 1
  00ea53c  b 0xea5a0
  00ea540  lwz 4, 0(3)
  00ea544  std 2, 40(1)
  00ea548  mtctr 4
  00ea54c  lwz 2, 4(3)
  00ea550  bcctrl 20, 30
  00ea554  cntlzw 3, 3
  00ea558  ld 2, 40(1)
  00ea55c  rlwinm 3, 3, 27, 31, 31
  00ea560  xori 3, 3, 1
  00ea564  b 0xea5a0
  00ea568  lis 4, 161
  00ea56c  clrlwi 5, 3, 16
  00ea570  addic 4, 4, -13772
  00ea574  srawi 3, 3, 16
  00ea578  addc 4, 5, 4
  00ea57c  sldi 3, 3, 2
  00ea580  clrldi 4, 4, 32
  00ea584  extsw 3, 3
  00ea588  lbzx 3, 4, 3
  00ea58c  cntlzw 3, 3
  00ea590  rlwinm 3, 3, 27, 31, 31
  00ea594  xori 3, 3, 1
  00ea598  b 0xea5a0
  00ea59c  li 3, 0
  00ea5a0  ld 0, 128(1)
  00ea5a4  mtlr 0
  00ea5a8  addi 1, 1, 112
  00ea5ac  blr

RefreshLevelMissionStatus:   # 0xea5b0, 0x1f8 bytes
  00ea5b0  stdu 1, -160(1)
  00ea5b4  mflr 0
  00ea5b8  std 0, 176(1)
  00ea5bc  std 29, 136(1)
  00ea5c0  lis 29, 162
  00ea5c4  std 30, 144(1)
  00ea5c8  lis 3, 115
  00ea5cc  addic 29, 29, 1216
  00ea5d0  std 31, 152(1)
  00ea5d4  addic 30, 3, -29308
  00ea5d8  lis 31, 162
  00ea5dc  addic 31, 31, 17940
  00ea5e0  lwz 3, 548(29)
  00ea5e4  slwi 3, 3, 2
  00ea5e8  extsw 3, 3
  00ea5ec  lwzx 30, 30, 3
  00ea5f0  cmpwi 30, 0
  00ea5f4  std 28, 128(1)
  00ea5f8  std 27, 120(1)
  00ea5fc  std 26, 112(1)
  00ea600  stw 30, 16(31)
  00ea604  bf 2, 0xea610
  00ea608  li 3, 0
  00ea60c  b 0xea780
  00ea610  lhz 3, 0(30)
  00ea614  cmpwi 3, 0
  00ea618  bt 2, 0xea6c4
  00ea61c  lis 28, 151
  00ea620  addic 28, 28, -13792
  00ea624  ori 27, 30, 0
  00ea628  lhz 3, 16(27)
  00ea62c  rlwinm 3, 3, 0, 29, 29
  00ea630  cmpwi 3, 0
  00ea634  bt 2, 0xea654
  00ea638  lwz 3, 548(29)
  00ea63c  extsw 3, 3
  00ea640  lbzx 3, 28, 3
  00ea644  cmpwi 3, 0
  00ea648  bf 2, 0xea654
  00ea64c  li 26, 0
  00ea650  b 0xea6b0
  00ea654  lhz 3, 2(30)
  00ea658  li 26, 0
  00ea65c  lwz 4, 4(30)
  00ea660  extsh 3, 3
  00ea664  extsw 4, 4
  00ea668  bl 0xea3d0
  00ea66c  cmpwi 3, 0
  00ea670  bt 2, 0xea6b0
  00ea674  lhz 3, 8(30)
  00ea678  lwz 4, 12(30)
  00ea67c  extsh 3, 3
  00ea680  extsw 4, 4
  00ea684  bl 0xea3d0
  00ea688  li 4, 0
  00ea68c  li 26, 2
  00ea690  subc 3, 4, 3
  00ea694  li 4, 1
  00ea698  cntlzw 3, 3
  00ea69c  subc 4, 4, 26
  00ea6a0  sldi 3, 3, 58
  00ea6a4  sradi 3, 3, 63
  00ea6a8  and 3, 3, 4
  00ea6ac  addc 26, 26, 3
  00ea6b0  sth 26, 36(30)
  00ea6b4  lhz 3, 40(27)
  00ea6b8  addic 30, 30, 40
  00ea6bc  cmpwi 3, 0
  00ea6c0  bf 2, 0xea624
  00ea6c4  lwz 30, 16(31)
  00ea6c8  lhz 3, 0(30)
  00ea6cc  cmpwi 3, 0
  00ea6d0  bt 2, 0xea71c
  00ea6d4  ori 29, 30, 0
  00ea6d8  lwz 3, 28(29)
  00ea6dc  cmpwi 3, 0
  00ea6e0  bt 2, 0xea70c
  00ea6e4  ori 4, 3, 0
  00ea6e8  lwz 3, 32(30)
  00ea6ec  extsw 3, 3
  00ea6f0  lwz 5, 0(4)
  00ea6f4  std 2, 40(1)
  00ea6f8  mtctr 5
  00ea6fc  lwz 2, 4(4)
  00ea700  bcctrl 20, 30
  00ea704  ld 2, 40(1)
  00ea708  sth 3, 38(30)
  00ea70c  lhz 3, 40(29)
  00ea710  addic 30, 30, 40
  00ea714  cmpwi 3, 0
  00ea718  bf 2, 0xea6d4
  00ea71c  li 4, 0
  00ea720  lwz 30, 16(31)
  00ea724  ori 3, 4, 0
  00ea728  stw 4, 12(31)
  00ea72c  lhz 5, 0(30)
  00ea730  cmpwi 5, 0
  00ea734  bt 2, 0xea778
  00ea738  ori 3, 30, 0
  00ea73c  lhz 5, 36(3)
  00ea740  cmpwi 5, 1
  00ea744  bf 2, 0xea760
  00ea748  lhz 5, 16(30)
  00ea74c  rlwinm 5, 5, 0, 30, 30
  00ea750  cmpwi 5, 0
  00ea754  bf 2, 0xea760
  00ea758  addic 4, 4, 1
  00ea75c  stw 4, 12(31)
  00ea760  ori 5, 3, 0
  00ea764  ori 3, 4, 0
  00ea768  addic 30, 30, 40
  00ea76c  lhz 5, 40(5)
  00ea770  cmpwi 5, 0
  00ea774  bf 2, 0xea738
  00ea778  cntlzw 3, 3
  00ea77c  rlwinm 3, 3, 27, 31, 31
  00ea780  ld 0, 176(1)
  00ea784  mtlr 0
  00ea788  ld 26, 112(1)
  00ea78c  ld 27, 120(1)
  00ea790  ld 28, 128(1)
  00ea794  ld 29, 136(1)
  00ea798  ld 30, 144(1)
  00ea79c  ld 31, 152(1)
  00ea7a0  addi 1, 1, 160
  00ea7a4  blr

BuildMissionList:   # 0xea7a8, 0x1a4 bytes
  00ea7a8  stdu 1, -64(1)
  00ea7ac  lis 8, 162
  00ea7b0  li 7, 0
  00ea7b4  addic 9, 8, 17940
  00ea7b8  li 8, 1
  00ea7bc  ori 11, 5, 0
  00ea7c0  cmpwi 4, 0
  00ea7c4  ori 5, 8, 0
  00ea7c8  lwz 9, 16(9)
  00ea7cc  stw 7, 0(3)
  00ea7d0  std 31, 56(1)
  00ea7d4  std 30, 48(1)
  00ea7d8  cmpwi 6, 11, 0
  00ea7dc  bt 2, 0xea7e4
  00ea7e0  stw 7, 0(4)
  00ea7e4  cmpwi 1, 9, 0
  00ea7e8  bt 26, 0xea7f4
  00ea7ec  li 10, -1
  00ea7f0  stw 10, 0(11)
  00ea7f4  bf 6, 0xea800
  00ea7f8  ori 3, 7, 0
  00ea7fc  b 0xea93c
  00ea800  lhz 12, 0(9)
  00ea804  ori 10, 7, 0
  00ea808  cmpwi 12, 0
  00ea80c  bt 2, 0xea918
  00ea810  ori 10, 6, 0
  00ea814  ori 6, 11, 0
  00ea818  clrlwi 11, 10, 24
  00ea81c  ori 10, 7, 0
  00ea820  cmpwi 7, 11, 0
  00ea824  ori 11, 9, 0
  00ea828  lhz 12, 36(11)
  00ea82c  cmpwi 6, 12, 2
  00ea830  cmpwi 1, 12, 0
  00ea834  bt 26, 0xea84c
  00ea838  lhz 12, 16(9)
  00ea83c  rlwinm 12, 12, 0, 30, 30
  00ea840  cmpwi 12, 0
  00ea844  bf 2, 0xea84c
  00ea848  ori 8, 7, 0
  00ea84c  lhz 12, 16(9)
  00ea850  rlwinm 31, 12, 0, 30, 30
  00ea854  cmpwi 31, 0
  00ea858  bf 2, 0xea908
  00ea85c  bt 6, 0xea908
  00ea860  clrlwi 12, 12, 31
  00ea864  cmpwi 12, 0
  00ea868  bt 2, 0xea870
  00ea86c  bt 26, 0xea908
  00ea870  sldi 12, 10, 2
  00ea874  lhz 31, 0(9)
  00ea878  extsw 12, 12
  00ea87c  extsh 31, 31
  00ea880  stwx 31, 3, 12
  00ea884  bt 30, 0xea8b8
  00ea888  lhz 30, 36(9)
  00ea88c  li 31, 21054
  00ea890  cmpwi 30, 2
  00ea894  bt 2, 0xea8b4
  00ea898  lhz 31, 38(9)
  00ea89c  extsh 31, 31
  00ea8a0  sldi 31, 31, 1
  00ea8a4  addc 31, 9, 31
  00ea8a8  clrldi 31, 31, 32
  00ea8ac  lhz 31, 20(31)
  00ea8b0  extsh 31, 31
  00ea8b4  stwx 31, 3, 12
  00ea8b8  cmpwi 4, 0
  00ea8bc  bt 2, 0xea8dc
  00ea8c0  lhz 12, 36(9)
  00ea8c4  cmpwi 12, 2
  00ea8c8  bf 2, 0xea8dc
  00ea8cc  slw 12, 5, 10
  00ea8d0  lwz 31, 0(4)
  00ea8d4  or 12, 31, 12
  00ea8d8  stw 12, 0(4)
  00ea8dc  cmpwi 6, 0
  00ea8e0  bt 2, 0xea900
  00ea8e4  lhz 12, 18(9)
  00ea8e8  lhz 31, 38(9)
  00ea8ec  extsh 12, 12
  00ea8f0  extsh 31, 31
  00ea8f4  addc 12, 12, 31
  00ea8f8  stw 12, 0(6)
  00ea8fc  addic 6, 6, 4
  00ea900  addic 10, 10, 1
  00ea904  extsw 10, 10
  00ea908  lhz 11, 40(11)
  00ea90c  addic 9, 9, 40
  00ea910  cmpwi 11, 0
  00ea914  bf 2, 0xea824
  00ea918  cmpwi 1, 8, 0
  00ea91c  cmpwi 4, 0
  00ea920  cror 2, 2, 6
  00ea924  bt 2, 0xea938
  00ea928  lis 3, -32768
  00ea92c  lwz 5, 0(4)
  00ea930  or 3, 5, 3
  00ea934  stw 3, 0(4)
  00ea938  ori 3, 10, 0
  00ea93c  ld 30, 48(1)
  00ea940  ld 31, 56(1)
  00ea944  addi 1, 1, 64
  00ea948  blr

UpdateMissionDisplay:   # 0xea958, 0x618 bytes
  00ea958  stdu 1, -352(1)
  00ea95c  mflr 0
  00ea960  std 0, 368(1)
  00ea964  stfd 31, 344(1)
  00ea968  std 25, 288(1)
  00ea96c  std 24, 280(1)
  00ea970  lis 25, 15
  00ea974  lis 24, 162
  00ea978  cmpwi 3, 18
  00ea97c  addi 25, 25, -22196
  00ea980  std 31, 336(1)
  00ea984  addic 24, 24, 1216
  00ea988  std 30, 328(1)
  00ea98c  std 29, 320(1)
  00ea990  std 28, 312(1)
  00ea994  std 27, 304(1)
  00ea998  std 26, 296(1)
  00ea99c  std 23, 272(1)
  00ea9a0  ori 31, 3, 0
  00ea9a4  bt 1, 0xea9d4
  00ea9a8  lis 3, 151
  00ea9ac  addic 3, 3, -13792
  00ea9b0  lbzx 3, 3, 31
  00ea9b4  cmpwi 3, 0
  00ea9b8  bt 2, 0xea9d4
  00ea9bc  lis 3, 115
  00ea9c0  sldi 5, 31, 2
  00ea9c4  addic 3, 3, -29232
  00ea9c8  extsw 5, 5
  00ea9cc  lwzx 3, 3, 5
  00ea9d0  b 0xea9d8
  00ea9d4  li 3, 0
  00ea9d8  lis 5, 151
  00ea9dc  stw 3, 32(24)
  00ea9e0  li 23, 0
  00ea9e4  addic 3, 5, -25376
  00ea9e8  lwz 5, 136(3)
  00ea9ec  cmpwi 5, 0
  00ea9f0  bt 2, 0xeaacc
  00ea9f4  lis 5, 151
  00ea9f8  lwz 5, -25488(5)
  00ea9fc  cmpw 5, 31
  00eaa00  bf 2, 0xeaacc
  00eaa04  clrlwi 4, 4, 24
  00eaa08  cmpwi 4, 0
  00eaa0c  bt 2, 0xeaacc
  00eaa10  lis 4, 162
  00eaa14  li 6, 0
  00eaa18  addic 7, 31, 100
  00eaa1c  addic 5, 1, 112
  00eaa20  extsw 7, 7
  00eaa24  lwz 4, 2080(4)
  00eaa28  lfs 1, 128(3)
  00eaa2c  subc 4, 6, 4
  00eaa30  lfs 2, 132(3)
  00eaa34  addic 6, 1, 116
  00eaa38  cntlzw 3, 4
  00eaa3c  subc 4, 31, 7
  00eaa40  sldi 3, 3, 58
  00eaa44  sradi 3, 3, 63
  00eaa48  and 3, 3, 4
  00eaa4c  addc 7, 7, 3
  00eaa50  bl 0xe2b38
  00eaa54  nop
  00eaa58  vspltisw 3, -1
  00eaa5c  li 3, 112
  00eaa60  vspltisw 4, -1
  00eaa64  li 4, 116
  00eaa68  <unknown>
  00eaa6c  li 5, 340
  00eaa70  vspltw 2, 2, 0
  00eaa74  vslw 3, 3, 3
  00eaa78  vslw 4, 4, 4
  00eaa7c  <unknown>
  00eaa80  <unknown>
  00eaa84  li 3, 4
  00eaa88  vmaddfp 3, 5, 2, 3
  00eaa8c  sldi 4, 31, 2
  00eaa90  vmaddfp 2, 6, 2, 4
  00eaa94  extsw 4, 4
  00eaa98  <unknown>
  00eaa9c  addc 4, 24, 4
  00eaaa0  li 3, 260
  00eaaa4  vspltw 4, 4, 0
  00eaaa8  vctsxs 3, 3, 0
  00eaaac  vctsxs 2, 2, 0
  00eaab0  vslw 3, 3, 4
  00eaab4  vslw 2, 2, 4
  00eaab8  vspltw 3, 3, 0
  00eaabc  vspltw 2, 2, 0
  00eaac0  stvewx 3, 3, 4
  00eaac4  stvewx 2, 5, 4
  00eaac8  b 0xeaaf0
  00eaacc  addic 3, 24, 260
  00eaad0  cmpwi 3, 0
  00eaad4  bf 2, 0xeaaf0
  00eaad8  sldi 3, 31, 2
  00eaadc  lis 4, 2048
  00eaae0  extsw 3, 3
  00eaae4  addc 3, 24, 3
  00eaae8  stw 4, 260(3)
  00eaaec  stw 4, 340(3)
  00eaaf0  lwz 3, 32(24)
  00eaaf4  ori 30, 3, 0
  00eaaf8  ori 10, 30, 0
  00eaafc  cmpwi 10, 0
  00eab00  bt 2, 0xeaf38
  00eab04  lhz 5, 4(3)
  00eab08  ori 4, 3, 0
  00eab0c  rlwinm 5, 5, 0, 29, 29
  00eab10  cmpwi 5, 0
  00eab14  bf 2, 0xead3c
  00eab18  lis 28, 161
  00eab1c  lis 27, 151
  00eab20  ori 29, 23, 0
  00eab24  addic 28, 28, 23872
  00eab28  addic 27, 27, -15796
  00eab2c  addc 4, 10, 29
  00eab30  clrldi 30, 4, 32
  00eab34  lhz 9, 0(30)
  00eab38  extsh 9, 9
  00eab3c  cmpwi 9, -1
  00eab40  cmpwi 1, 9, -2
  00eab44  cmpwi 6, 9, -3
  00eab48  cmpwi 7, 9, -4
  00eab4c  bf 2, 0xeab68
  00eab50  lis 4, 15984
  00eab54  lis 5, 16026
  00eab58  ori 9, 3, 0
  00eab5c  stw 4, 24(30)
  00eab60  stw 5, 28(30)
  00eab64  b 0xead18
  00eab68  bf 6, 0xeab84
  00eab6c  lis 4, 16138
  00eab70  lis 5, 16059
  00eab74  ori 9, 3, 0
  00eab78  stw 4, 24(30)
  00eab7c  stw 5, 28(30)
  00eab80  b 0xead18
  00eab84  bf 26, 0xeaba0
  00eab88  lis 4, 16149
  00eab8c  lis 5, 16176
  00eab90  ori 9, 3, 0
  00eab94  stw 4, 24(30)
  00eab98  stw 5, 28(30)
  00eab9c  b 0xead18
  00eaba0  bf 30, 0xeabc4
  00eaba4  lis 4, 16184
  00eaba8  lis 5, 16186
  00eabac  ori 4, 4, 32768
  00eabb0  ori 5, 5, 32768
  00eabb4  ori 9, 3, 0
  00eabb8  stw 4, 24(30)
  00eabbc  stw 5, 28(30)
  00eabc0  b 0xead18
  00eabc4  cmpwi 9, -5
  00eabc8  bf 2, 0xeabe4
  00eabcc  lis 4, 16069
  00eabd0  lis 5, 16075
  00eabd4  ori 9, 3, 0
  00eabd8  stw 4, 24(30)
  00eabdc  stw 5, 28(30)
  00eabe0  b 0xead18
  00eabe4  cmpwi 9, -7
  00eabe8  bf 2, 0xeac04
  00eabec  lis 4, 16222
  00eabf0  lis 5, 15980
  00eabf4  ori 9, 3, 0
  00eabf8  stw 4, 24(30)
  00eabfc  stw 5, 28(30)
  00eac00  b 0xead18
  00eac04  cmpwi 9, -8
  00eac08  bf 2, 0xeac24
  00eac0c  lis 4, 16118
  00eac10  lis 5, 16146
  00eac14  ori 9, 3, 0
  00eac18  stw 4, 24(30)
  00eac1c  stw 5, 28(30)
  00eac20  b 0xead18
  00eac24  cmpwi 9, -9
  00eac28  bf 2, 0xeac44
  00eac2c  lis 4, 16160
  00eac30  lis 5, 16185
  00eac34  ori 9, 3, 0
  00eac38  stw 4, 24(30)
  00eac3c  stw 5, 28(30)
  00eac40  b 0xead18
  00eac44  lis 5, 151
  00eac48  addic 6, 4, 24
  00eac4c  addic 8, 4, 28
  00eac50  clrldi 4, 6, 32
  00eac54  clrldi 8, 8, 32
  00eac58  lwz 5, -25488(5)
  00eac5c  cmpw 5, 31
  00eac60  bf 2, 0xeacc8
  00eac64  sldi 11, 9, 2
  00eac68  ori 9, 3, 0
  00eac6c  lwzx 5, 28, 11
  00eac70  cmpwi 5, 0
  00eac74  bt 2, 0xead18
  00eac78  lwzx 3, 28, 11
  00eac7c  ori 5, 4, 0
  00eac80  ori 6, 8, 0
  00eac84  ori 7, 31, 0
  00eac88  lfs 1, 16(3)
  00eac8c  lfs 2, 20(3)
  00eac90  bl 0xe2b38
  00eac94  nop
  00eac98  lhz 3, 0(30)
  00eac9c  extsh 5, 3
  00eaca0  lwz 3, 32(24)
  00eaca4  sldi 4, 5, 2
  00eaca8  ori 9, 3, 0
  00eacac  ori 10, 9, 0
  00eacb0  lwzx 4, 28, 4
  00eacb4  addc 5, 10, 29
  00eacb8  clrldi 5, 5, 32
  00eacbc  lfs 1, 72(4)
  00eacc0  stfs 1, 32(5)
  00eacc4  b 0xead18
  00eacc8  sldi 3, 9, 4
  00eaccc  ori 5, 4, 0
  00eacd0  addc 4, 3, 27
  00eacd4  ori 6, 8, 0
  00eacd8  ori 7, 31, 0
  00eacdc  lfsx 1, 27, 3
  00eace0  lfs 2, 4(4)
  00eace4  bl 0xe2b38
  00eace8  nop
  00eacec  lhz 3, 0(30)
  00eacf0  extsh 5, 3
  00eacf4  lwz 3, 32(24)
  00eacf8  sldi 4, 5, 4
  00eacfc  ori 9, 3, 0
  00ead00  addc 4, 4, 27
  00ead04  ori 10, 9, 0
  00ead08  addc 5, 10, 29
  00ead0c  lfs 1, 8(4)
  00ead10  clrldi 4, 5, 32
  00ead14  stfs 1, 32(4)
  00ead18  addic 29, 29, 40
  00ead1c  ori 4, 10, 0
  00ead20  addc 5, 4, 29
  00ead24  clrldi 5, 5, 32
  00ead28  lhz 5, 4(5)
  00ead2c  rlwinm 5, 5, 0, 29, 29
  00ead30  cmpwi 5, 0
  00ead34  bt 2, 0xeab2c
  00ead38  ori 30, 9, 0
  00ead3c  lhz 4, 4(4)
  00ead40  ori 31, 23, 0
  00ead44  rlwinm 4, 4, 0, 29, 29
  00ead48  cmpwi 4, 0
  00ead4c  bf 2, 0xeaf38
  00ead50  sldi 4, 31, 5
  00ead54  sldi 5, 31, 3
  00ead58  addc 4, 4, 5
  00ead5c  li 5, 1
  00ead60  addc 30, 30, 4
  00ead64  ori 4, 5, 0
  00ead68  clrldi 30, 30, 32
  00ead6c  lhz 29, 4(30)
  00ead70  lhz 6, 2(30)
  00ead74  ori 7, 29, 0
  00ead78  extsh 6, 6
  00ead7c  rlwimi 7, 23, 0, 27, 27
  00ead80  cmpwi 6, -1
  00ead84  sth 7, 4(30)
  00ead88  bt 2, 0xeadbc
  00ead8c  lis 5, 162
  00ead90  sldi 7, 6, 5
  00ead94  addic 5, 5, 17940
  00ead98  sldi 6, 6, 3
  00ead9c  addc 6, 7, 6
  00eada0  lwz 5, 16(5)
  00eada4  addc 5, 5, 6
  00eada8  clrldi 5, 5, 32
  00eadac  lhz 5, 36(5)
  00eadb0  addic 5, 5, -1
  00eadb4  cntlzw 5, 5
  00eadb8  rlwinm 5, 5, 27, 31, 31
  00eadbc  rlwinm 6, 29, 0, 19, 19
  00eadc0  stw 5, 36(30)
  00eadc4  cmpwi 6, 0
  00eadc8  bt 2, 0xeadf8
  00eadcc  lhz 6, 0(30)
  00eadd0  lis 5, 151
  00eadd4  extsh 6, 6
  00eadd8  addic 5, 5, -15796
  00eaddc  sldi 6, 6, 4
  00eade0  addc 5, 5, 6
  00eade4  lwz 5, 12(5)
  00eade8  clrlwi 5, 5, 31
  00eadec  cmpwi 5, 0
  00eadf0  bf 2, 0xeadf8
  00eadf4  stw 23, 36(30)
  00eadf8  lhz 5, 10(30)
  00eadfc  cmpwi 5, 0
  00eae00  bt 2, 0xeaf08
  00eae04  rlwimi 29, 4, 4, 27, 27
  00eae08  addic 27, 1, 144
  00eae0c  ori 3, 31, 0
  00eae10  ori 4, 27, 0
  00eae14  sth 29, 4(30)
  00eae18  bl 0xe2c34
  00eae1c  nop
  00eae20  li 3, 4
  00eae24  sth 23, 120(1)
  00eae28  li 4, 15
  00eae2c  sth 23, 124(1)
  00eae30  li 6, -1
  00eae34  sth 23, 132(1)
  00eae38  sth 3, 128(1)
  00eae3c  sth 3, 130(1)
  00eae40  sth 23, 134(1)
  00eae44  sth 4, 136(1)
  00eae48  sth 3, 138(1)
  00eae4c  sth 23, 140(1)
  00eae50  lis 4, -32513
  00eae54  sth 23, 142(1)
  00eae58  lhz 3, 16(30)
  00eae5c  ori 4, 4, 43144
  00eae60  sth 3, 122(1)
  00eae64  lhz 5, 14(30)
  00eae68  clrldi 26, 4, 32
  00eae6c  addic 3, 1, 120
  00eae70  sth 5, 126(1)
  00eae74  lfs 31, 8(25)
  00eae78  ori 5, 27, 0
  00eae7c  ori 4, 26, 0
  00eae80  fmr 1, 31
  00eae84  bl 0x7100c
  00eae88  nop
  00eae8c  lhz 29, 134(1)
  00eae90  ori 28, 23, 0
  00eae94  addic 3, 29, 8
  00eae98  extsh 29, 29
  00eae9c  sth 3, 16(30)
  00eaea0  lhz 7, 126(1)
  00eaea4  addic 3, 1, 120
  00eaea8  fmr 1, 31
  00eaeac  addic 7, 7, -4
  00eaeb0  ori 4, 26, 0
  00eaeb4  ori 5, 27, 0
  00eaeb8  li 6, -1
  00eaebc  sth 7, 126(1)
  00eaec0  bl 0x7100c
  00eaec4  nop
  00eaec8  lhz 3, 134(1)
  00eaecc  li 4, 1
  00eaed0  extsh 3, 3
  00eaed4  subc 5, 28, 4
  00eaed8  subc 3, 29, 3
  00eaedc  cntlzw 3, 3
  00eaee0  sldi 3, 3, 58
  00eaee4  sradi 3, 3, 63
  00eaee8  and 28, 3, 5
  00eaeec  addc 28, 4, 28
  00eaef0  cmpwi 28, 0
  00eaef4  bt 2, 0xeaea0
  00eaef8  lhz 4, 126(1)
  00eaefc  lwz 3, 32(24)
  00eaf00  addic 4, 4, 4
  00eaf04  sth 4, 14(30)
  00eaf08  addic 31, 31, 1
  00eaf0c  ori 30, 3, 0
  00eaf10  extsw 31, 31
  00eaf14  sldi 4, 31, 5
  00eaf18  sldi 5, 31, 3
  00eaf1c  addc 4, 4, 5
  00eaf20  addc 4, 30, 4
  00eaf24  clrldi 4, 4, 32
  00eaf28  lhz 4, 4(4)
  00eaf2c  rlwinm 4, 4, 0, 29, 29
  00eaf30  cmpwi 4, 0
  00eaf34  bt 2, 0xead50
  00eaf38  ld 0, 368(1)
  00eaf3c  mtlr 0
  00eaf40  lfd 31, 344(1)
  00eaf44  ld 23, 272(1)
  00eaf48  ld 24, 280(1)
  00eaf4c  ld 25, 288(1)
  00eaf50  ld 26, 296(1)
  00eaf54  ld 27, 304(1)
  00eaf58  ld 28, 312(1)
  00eaf5c  ld 29, 320(1)
  00eaf60  ld 30, 328(1)
  00eaf64  ld 31, 336(1)
  00eaf68  addi 1, 1, 352
  00eaf6c  blr

MissionCond_eaf70:   # 0xeaf70, 0x38 bytes
  00eaf70  lis 3, 151
  00eaf74  addic 3, 3, -15796
  00eaf78  lwz 3, 396(3)
  00eaf7c  cmpwi 3, 0
  00eaf80  bt 2, 0xeafa0
  00eaf84  lis 3, 151
  00eaf88  addic 3, 3, -16400
  00eaf8c  lbz 3, 24(3)
  00eaf90  cmpwi 3, 0
  00eaf94  bt 2, 0xeafa0
  00eaf98  li 3, 1
  00eaf9c  b 0xeafa4
  00eafa0  li 3, 0
  00eafa4  blr

MissionCond_eafa8:   # 0xeafa8, 0x44 bytes
  00eafa8  lis 3, 151
  00eafac  addic 3, 3, -15796
  00eafb0  lwz 3, 764(3)
  00eafb4  cmpwi 3, 0
  00eafb8  bt 2, 0xeafe4
  00eafbc  lis 3, 151
  00eafc0  addic 3, 3, -16400
  00eafc4  lbz 4, 32(3)
  00eafc8  cmpwi 4, 0
  00eafcc  bt 2, 0xeafe4
  00eafd0  lbz 3, 33(3)
  00eafd4  cmpwi 3, 0
  00eafd8  bt 2, 0xeafe4
  00eafdc  li 3, 1
  00eafe0  b 0xeafe8
  00eafe4  li 3, 0
  00eafe8  blr

MissionCond_eafec:   # 0xeafec, 0x30 bytes
  00eafec  lis 3, 151
  00eaff0  addic 3, 3, -15796
  00eaff4  lwz 4, 1036(3)
  00eaff8  cmpwi 4, 0
  00eaffc  bt 2, 0xeb014
  00eb000  lwz 3, 1020(3)
  00eb004  cmpwi 3, 0
  00eb008  bt 2, 0xeb014
  00eb00c  li 3, 1
  00eb010  b 0xeb018
  00eb014  li 3, 0
  00eb018  blr

MissionCond_eb01c:   # 0xeb01c, 0x38 bytes
  00eb01c  lis 3, 151
  00eb020  addic 3, 3, -15796
  00eb024  lwz 3, 1068(3)
  00eb028  cmpwi 3, 0
  00eb02c  bt 2, 0xeb04c
  00eb030  lis 3, 151
  00eb034  addic 3, 3, -16400
  00eb038  lbz 3, 85(3)
  00eb03c  cmpwi 3, 0
  00eb040  bt 2, 0xeb04c
  00eb044  li 3, 1
  00eb048  b 0xeb050
  00eb04c  li 3, 0
  00eb050  blr

MissionCond_eb054:   # 0xeb054, 0x38 bytes
  00eb054  lis 3, 151
  00eb058  addic 3, 3, -15796
  00eb05c  lwz 3, 1132(3)
  00eb060  cmpwi 3, 0
  00eb064  bt 2, 0xeb084
  00eb068  lis 3, 151
  00eb06c  addic 3, 3, -16400
  00eb070  lbz 3, 97(3)
  00eb074  cmpwi 3, 0
  00eb078  bt 2, 0xeb084
  00eb07c  li 3, 1
  00eb080  b 0xeb088
  00eb084  li 3, 0
  00eb088  blr

MissionCond_eb08c:   # 0xeb08c, 0x38 bytes
  00eb08c  lis 3, 151
  00eb090  addic 3, 3, -15796
  00eb094  lwz 3, 1404(3)
  00eb098  cmpwi 3, 0
  00eb09c  bt 2, 0xeb0bc
  00eb0a0  lis 3, 151
  00eb0a4  addic 3, 3, -16027
  00eb0a8  lbz 3, 21(3)
  00eb0ac  cmpwi 3, 0
  00eb0b0  bt 2, 0xeb0bc
  00eb0b4  li 3, 1
  00eb0b8  b 0xeb0c0
  00eb0bc  li 3, 0
  00eb0c0  blr

CheckIfMapOMaticAndHologuiseUnlocked:   # 0xeb0c4, 0x30 bytes
  00eb0c4  lis 3, 151
  00eb0c8  addic 3, 3, -16064
  00eb0cc  lbz 4, 33(3)
  00eb0d0  cmpwi 4, 0
  00eb0d4  bt 2, 0xeb0ec
  00eb0d8  lbz 3, 31(3)
  00eb0dc  cmpwi 3, 0
  00eb0e0  bt 2, 0xeb0ec
  00eb0e4  li 3, 1
  00eb0e8  b 0xeb0f0
  00eb0ec  li 3, 0
  00eb0f0  blr

IsItemUnlocked:   # 0xeb0f4, 0x24 bytes
  00eb0f4  lis 4, 151
  00eb0f8  addic 4, 4, -16064
  00eb0fc  lbzx 3, 4, 3
  00eb100  cmpwi 3, 0
  00eb104  bt 2, 0xeb110
  00eb108  li 3, 1
  00eb10c  b 0xeb114
  00eb110  li 3, 0
  00eb114  blr

MissionCond_eb118:   # 0xeb118, 0x5c bytes
  00eb118  lis 3, 151
  00eb11c  addic 3, 3, -15796
  00eb120  lwz 4, 332(3)
  00eb124  lwz 5, 396(3)
  00eb128  cmpwi 4, 0
  00eb12c  lwz 3, 364(3)
  00eb130  cmpwi 6, 5, 0
  00eb134  crorc 2, 2, 26
  00eb138  cmpwi 1, 3, 0
  00eb13c  bt 2, 0xeb148
  00eb140  li 3, 1
  00eb144  b 0xeb170
  00eb148  bt 26, 0xeb16c
  00eb14c  lis 3, 151
  00eb150  addic 3, 3, -16064
  00eb154  lbz 3, 2(3)
  00eb158  cmpwi 3, 0
  00eb15c  bt 2, 0xeb16c
  00eb160  bf 6, 0xeb16c
  00eb164  li 3, 2
  00eb168  b 0xeb170
  00eb16c  li 3, 0
  00eb170  blr

MissionCond_eb174:   # 0xeb174, 0x40 bytes
  00eb174  lis 3, 151
  00eb178  addic 3, 3, -15796
  00eb17c  lwz 3, 764(3)
  00eb180  cmpwi 3, 0
  00eb184  bf 2, 0xeb190
  00eb188  li 3, 0
  00eb18c  b 0xeb1b0
  00eb190  lis 3, 151
  00eb194  addic 3, 3, -16400
  00eb198  lbz 3, 32(3)
  00eb19c  cmpwi 3, 0
  00eb1a0  bf 2, 0xeb1ac
  00eb1a4  li 3, 1
  00eb1a8  b 0xeb1b0
  00eb1ac  li 3, 2
  00eb1b0  blr

MissionCond_eb1b4:   # 0xeb1b4, 0x38 bytes
  00eb1b4  lis 3, 151
  00eb1b8  addic 3, 3, -16400
  00eb1bc  lbz 3, 97(3)
  00eb1c0  cmpwi 3, 0
  00eb1c4  bt 2, 0xeb1e4
  00eb1c8  lis 3, 151
  00eb1cc  addic 3, 3, -13812
  00eb1d0  lbz 3, 13(3)
  00eb1d4  cmpwi 3, 0
  00eb1d8  bt 2, 0xeb1e4
  00eb1dc  li 3, 1
  00eb1e0  b 0xeb1e8
  00eb1e4  li 3, 0
  00eb1e8  blr

MissionCond_eb1ec:   # 0xeb1ec, 0x40 bytes
  00eb1ec  lis 3, 151
  00eb1f0  addic 3, 3, -16064
  00eb1f4  lbz 3, 21(3)
  00eb1f8  cmpwi 3, 0
  00eb1fc  bt 2, 0xeb208
  00eb200  li 3, 2
  00eb204  b 0xeb228
  00eb208  lis 3, 151
  00eb20c  addic 3, 3, -15796
  00eb210  lwz 3, 1404(3)
  00eb214  cmpwi 3, 0
  00eb218  bt 2, 0xeb224
  00eb21c  li 3, 1
  00eb220  b 0xeb228
  00eb224  li 3, 0
  00eb228  blr

CheckIfHologuiseUnlocked:   # 0xeb22c, 0x24 bytes
  00eb22c  lis 3, 151
  00eb230  addic 3, 3, -16064
  00eb234  lbz 3, 31(3)
  00eb238  cmpwi 3, 0
  00eb23c  bt 2, 0xeb248
  00eb240  li 3, 1
  00eb244  b 0xeb24c
  00eb248  li 3, 0
  00eb24c  blr

GetKaleboItemsUnlockStatus:   # 0xeb250, 0x38 bytes
  00eb250  lis 3, 151
  00eb254  addic 3, 3, -16064
  00eb258  lbz 4, 31(3)
  00eb25c  cmpwi 4, 0
  00eb260  bt 2, 0xeb26c
  00eb264  li 3, 2
  00eb268  b 0xeb284
  00eb26c  lbz 3, 33(3)
  00eb270  cmpwi 3, 0
  00eb274  bt 2, 0xeb280
  00eb278  li 3, 1
  00eb27c  b 0xeb284
  00eb280  li 3, 0
  00eb284  blr

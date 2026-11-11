# game/update/moby1885.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002ce020:   # 0x2ce020, 0x310 bytes
  02ce020  stdu 1, -176(1)
  02ce024  mflr 0
  02ce028  std 0, 192(1)
  02ce02c  std 29, 152(1)
  02ce030  cmpwi 3, 0
  02ce034  std 25, 120(1)
  02ce038  ori 29, 3, 0
  02ce03c  std 27, 136(1)
  02ce040  std 26, 128(1)
  02ce044  li 25, 176
  02ce048  ori 26, 5, 0
  02ce04c  std 31, 168(1)
  02ce050  std 30, 160(1)
  02ce054  std 28, 144(1)
  02ce058  ori 27, 6, 0
  02ce05c  bf 2, 0x2ce068
  02ce060  li 3, 0
  02ce064  b 0x2ce304
  02ce068  li 30, 0
  02ce06c  lwz 28, 120(29)
  02ce070  addic 3, 1, 112
  02ce074  ori 31, 30, 0
  02ce078  li 6, 1
  02ce07c  li 5, 1
  02ce080  stw 31, 112(1)
  02ce084  lwz 4, 148(28)
  02ce088  extsw 4, 4
  02ce08c  bl 0x104800
  02ce090  nop
  02ce094  cmpwi 3, 0
  02ce098  bf 2, 0x2ce2dc
  02ce09c  lbz 4, 145(28)
  02ce0a0  addc 3, 1, 25
  02ce0a4  addic 4, 4, 1
  02ce0a8  li 5, 255
  02ce0ac  stb 4, 145(28)
  02ce0b0  lwz 4, 112(1)
  02ce0b4  std 26, 64(3)
  02ce0b8  std 27, 72(3)
  02ce0bc  lfs 1, 68(3)
  02ce0c0  lfs 2, 76(3)
  02ce0c4  stfs 1, 20(4)
  02ce0c8  stfs 2, 28(4)
  02ce0cc  lfs 1, 64(3)
  02ce0d0  lfs 2, 72(3)
  02ce0d4  stfs 1, 16(4)
  02ce0d8  stfs 2, 24(4)
  02ce0dc  lwz 3, 112(1)
  02ce0e0  li 6, 1
  02ce0e4  stw 30, 28(3)
  02ce0e8  lwz 3, 112(1)
  02ce0ec  stb 30, 32(3)
  02ce0f0  lwz 3, 112(1)
  02ce0f4  stb 30, 188(3)
  02ce0f8  lwz 3, 112(1)
  02ce0fc  lwz 4, 36(3)
  02ce100  lhz 4, 68(4)
  02ce104  sth 4, 52(3)
  02ce108  lwz 3, 112(1)
  02ce10c  lwz 4, 36(3)
  02ce110  lfs 1, 36(4)
  02ce114  stfs 1, 44(3)
  02ce118  lwz 3, 112(1)
  02ce11c  stb 5, 48(3)
  02ce120  lwz 3, 112(1)
  02ce124  sth 5, 50(3)
  02ce128  lwz 3, 112(1)
  02ce12c  stb 6, 49(3)
  02ce130  lwz 26, 112(1)
  02ce134  lwz 3, 36(26)
  02ce138  lwz 3, 64(3)
  02ce13c  cmpwi 3, 0
  02ce140  bt 2, 0x2ce154
  02ce144  lhz 3, 52(26)
  02ce148  ori 3, 3, 16
  02ce14c  sth 3, 52(26)
  02ce150  lwz 26, 112(1)
  02ce154  ori 3, 26, 0
  02ce158  lwz 4, 36(3)
  02ce15c  lbz 4, 15(4)
  02ce160  cmpwi 4, 0
  02ce164  bt 2, 0x2ce178
  02ce168  lhz 3, 52(26)
  02ce16c  ori 3, 3, 1024
  02ce170  sth 3, 52(26)
  02ce174  lwz 3, 112(1)
  02ce178  li 4, 32640
  02ce17c  li 5, 255
  02ce180  sth 4, 54(3)
  02ce184  lwz 3, 112(1)
  02ce188  stb 5, 113(3)
  02ce18c  lwz 3, 112(1)
  02ce190  stb 5, 114(3)
  02ce194  lwz 3, 112(1)
  02ce198  stb 5, 164(3)
  02ce19c  lbz 3, 147(28)
  02ce1a0  cmpwi 3, 0
  02ce1a4  bt 2, 0x2ce1c8
  02ce1a8  lis 3, 45
  02ce1ac  lwz 4, 112(1)
  02ce1b0  addi 3, 3, -8168
  02ce1b4  lfs 1, 0(3)
  02ce1b8  lwz 3, 36(4)
  02ce1bc  lfs 2, 36(3)
  02ce1c0  fmuls 1, 2, 1
  02ce1c4  stfs 1, 44(4)
  02ce1c8  lwz 3, 112(1)
  02ce1cc  li 4, 0
  02ce1d0  li 5, 0
  02ce1d4  bl 0xfdcf0
  02ce1d8  nop
  02ce1dc  lwz 3, 112(1)
  02ce1e0  bl 0x486828
  02ce1e4  nop
  02ce1e8  ori 4, 3, 0
  02ce1ec  lhz 3, 180(29)
  02ce1f0  cmpwi 4, 0
  02ce1f4  bt 2, 0x2ce204
  02ce1f8  stw 30, 148(4)
  02ce1fc  sth 30, 104(4)
  02ce200  stw 30, 108(4)
  02ce204  lwz 30, 112(1)
  02ce208  extsh 4, 3
  02ce20c  lhz 5, 180(30)
  02ce210  extsh 5, 5
  02ce214  cmpw 4, 5
  02ce218  bf 0, 0x2ce224
  02ce21c  sth 3, 180(30)
  02ce220  lwz 30, 112(1)
  02ce224  ori 3, 30, 0
  02ce228  lhz 4, 180(3)
  02ce22c  extsh 4, 4
  02ce230  cmpwi 4, 1
  02ce234  bf 0, 0x2ce248
  02ce238  li 3, 1
  02ce23c  sth 3, 180(30)
  02ce240  lwz 3, 112(1)
  02ce244  ori 30, 3, 0
  02ce248  lhz 4, 180(29)
  02ce24c  lhz 5, 180(3)
  02ce250  subc 4, 4, 5
  02ce254  extsh 5, 4
  02ce258  cmpwi 5, 0
  02ce25c  sth 4, 180(29)
  02ce260  bf 0, 0x2ce26c
  02ce264  li 4, 1
  02ce268  sth 4, 180(29)
  02ce26c  lwz 3, 36(3)
  02ce270  lwz 3, 16(3)
  02ce274  stw 3, 148(30)
  02ce278  lwz 3, 112(1)
  02ce27c  bl 0x10c000
  02ce280  nop
  02ce284  lwz 3, 112(1)
  02ce288  bl 0xf31a8
  02ce28c  nop
  02ce290  lwz 30, 112(1)
  02ce294  ori 3, 30, 0
  02ce298  bl 0xfcccc
  02ce29c  nop
  02ce2a0  cmpwi 3, 0
  02ce2a4  bt 2, 0x2ce300
  02ce2a8  li 4, 4
  02ce2ac  vspltisw 2, -16
  02ce2b0  addi 5, 4, 16
  02ce2b4  <unknown>
  02ce2b8  <unknown>
  02ce2bc  vor 3, 3, 4
  02ce2c0  vsraw 2, 3, 2
  02ce2c4  vcfsx 2, 2, 0
  02ce2c8  vspltw 2, 2, 0
  02ce2cc  stvewx 2, 0, 3
  02ce2d0  stw 31, 48(3)
  02ce2d4  stw 31, 52(3)
  02ce2d8  b 0x2ce300
  02ce2dc  lis 4, 161
  02ce2e0  lhz 5, 178(29)
  02ce2e4  lis 3, 101
  02ce2e8  addic 3, 3, 23448
  02ce2ec  lwz 6, 1808(4)
  02ce2f0  extsh 4, 5
  02ce2f4  extsw 5, 6
  02ce2f8  bl 0x5cd098
  02ce2fc  nop
  02ce300  ori 3, 30, 0
  02ce304  ld 0, 192(1)
  02ce308  mtlr 0
  02ce30c  ld 25, 120(1)
  02ce310  ld 26, 128(1)
  02ce314  ld 27, 136(1)
  02ce318  ld 28, 144(1)
  02ce31c  ld 29, 152(1)
  02ce320  ld 30, 160(1)
  02ce324  ld 31, 168(1)
  02ce328  addi 1, 1, 176
  02ce32c  blr

M1885_002ce340:   # 0x2ce340, 0x16c bytes
  02ce340  stdu 1, -144(1)
  02ce344  mflr 0
  02ce348  std 0, 160(1)
  02ce34c  std 30, 128(1)
  02ce350  std 31, 136(1)
  02ce354  ori 30, 3, 0
  02ce358  ori 31, 4, 0
  02ce35c  lis 4, 195
  02ce360  std 29, 120(1)
  02ce364  li 5, 0
  02ce368  bl 0x10675c
  02ce36c  nop
  02ce370  ori 29, 3, 0
  02ce374  ori 3, 30, 0
  02ce378  li 6, 0
  02ce37c  addic 5, 31, 32
  02ce380  li 8, 0
  02ce384  addic 7, 1, 112
  02ce388  li 10, 4
  02ce38c  ori 4, 29, 0
  02ce390  li 9, 0
  02ce394  bl 0x106840
  02ce398  nop
  02ce39c  lwz 3, 112(1)
  02ce3a0  cmpwi 3, 1
  02ce3a4  bf 1, 0x2ce478
  02ce3a8  lfs 1, 32(31)
  02ce3ac  lfs 2, 44(29)
  02ce3b0  lis 3, 45
  02ce3b4  fsubs 1, 1, 2
  02ce3b8  addi 3, 3, -7376
  02ce3bc  stfs 1, 32(31)
  02ce3c0  lfs 2, 0(3)
  02ce3c4  fcmpu 0, 1, 2
  02ce3c8  cror 6, 0, 2
  02ce3cc  bt 6, 0x2ce3ec
  02ce3d0  li 5, 90
  02ce3d4  addic 4, 31, 96
  02ce3d8  ori 3, 30, 0
  02ce3dc  stb 5, 103(31)
  02ce3e0  bl 0x10c808
  02ce3e4  nop
  02ce3e8  b 0x2ce478
  02ce3ec  lis 3, 151
  02ce3f0  lwz 3, -25488(3)
  02ce3f4  cmpwi 3, 13
  02ce3f8  bf 2, 0x2ce444
  02ce3fc  lis 3, 45
  02ce400  lis 4, 151
  02ce404  addi 3, 3, -7376
  02ce408  addic 4, 4, -25376
  02ce40c  lfs 1, 4(3)
  02ce410  lfs 2, 136(4)
  02ce414  lfs 3, 8(3)
  02ce418  fsubs 1, 2, 1
  02ce41c  fabs 1, 1
  02ce420  fcmpu 0, 1, 3
  02ce424  cror 6, 1, 2
  02ce428  bt 6, 0x2ce444
  02ce42c  ori 3, 30, 0
  02ce430  li 4, 512
  02ce434  li 5, -1
  02ce438  bl 0xfd8d0
  02ce43c  nop
  02ce440  b 0x2ce458
  02ce444  ori 3, 30, 0
  02ce448  li 4, 0
  02ce44c  li 5, -1
  02ce450  bl 0xfd8d0
  02ce454  nop
  02ce458  li 5, 2
  02ce45c  li 6, 120
  02ce460  addic 4, 31, 96
  02ce464  ori 3, 30, 0
  02ce468  stb 5, 32(30)
  02ce46c  stb 6, 103(31)
  02ce470  bl 0x10c808
  02ce474  nop
  02ce478  li 5, 255
  02ce47c  addic 4, 31, 96
  02ce480  ori 3, 30, 0
  02ce484  stb 5, 164(30)
  02ce488  bl 0x10c9a0
  02ce48c  nop
  02ce490  ld 0, 160(1)
  02ce494  mtlr 0
  02ce498  ld 29, 120(1)
  02ce49c  ld 30, 128(1)
  02ce4a0  ld 31, 136(1)
  02ce4a4  addi 1, 1, 144
  02ce4a8  blr

M1885_002ce4ac:   # 0x2ce4ac, 0xa8 bytes
  02ce4ac  stdu 1, -128(1)
  02ce4b0  mflr 0
  02ce4b4  std 0, 144(1)
  02ce4b8  std 31, 120(1)
  02ce4bc  ori 31, 4, 0
  02ce4c0  li 4, -1
  02ce4c4  lwz 3, 148(31)
  02ce4c8  extsw 3, 3
  02ce4cc  bl 0x104214
  02ce4d0  nop
  02ce4d4  li 5, 0
  02ce4d8  li 6, -1
  02ce4dc  stb 3, 145(31)
  02ce4e0  addic 4, 31, 176
  02ce4e4  slwi 7, 5, 2
  02ce4e8  addc 7, 7, 4
  02ce4ec  clrldi 7, 7, 32
  02ce4f0  lwz 7, 0(7)
  02ce4f4  cmpwi 7, 0
  02ce4f8  bt 2, 0x2ce528
  02ce4fc  lhz 8, 166(7)
  02ce500  cmpwi 8, 1886
  02ce504  bf 2, 0x2ce528
  02ce508  lbz 7, 32(7)
  02ce50c  cmpwi 1, 7, 253
  02ce510  cmpwi 7, 254
  02ce514  cror 2, 2, 6
  02ce518  bt 2, 0x2ce528
  02ce51c  addic 3, 3, 1
  02ce520  stb 3, 145(31)
  02ce524  b 0x2ce52c
  02ce528  ori 6, 5, 0
  02ce52c  addic 5, 5, 1
  02ce530  extsw 5, 5
  02ce534  cmpwi 5, 20
  02ce538  bt 0, 0x2ce4e4
  02ce53c  ori 3, 6, 0
  02ce540  ld 0, 144(1)
  02ce544  mtlr 0
  02ce548  ld 31, 120(1)
  02ce54c  addi 1, 1, 128
  02ce550  blr

UpdateMoby_1885:   # 0x2ce590, 0xc54 bytes
  02ce590  stdu 1, -336(1)
  02ce594  mflr 0
  02ce598  std 0, 352(1)
  02ce59c  stfd 30, 320(1)
  02ce5a0  stfd 31, 328(1)
  02ce5a4  std 31, 312(1)
  02ce5a8  ori 31, 3, 0
  02ce5ac  lis 4, 195
  02ce5b0  std 30, 304(1)
  02ce5b4  li 5, 0
  02ce5b8  std 29, 296(1)
  02ce5bc  std 28, 288(1)
  02ce5c0  std 27, 280(1)
  02ce5c4  lwz 30, 120(31)
  02ce5c8  bl 0x10675c
  02ce5cc  nop
  02ce5d0  ori 28, 3, 0
  02ce5d4  addic 29, 30, 32
  02ce5d8  ori 3, 31, 0
  02ce5dc  li 6, 0
  02ce5e0  addic 7, 1, 264
  02ce5e4  li 10, 4
  02ce5e8  ori 4, 28, 0
  02ce5ec  ori 5, 29, 0
  02ce5f0  li 8, 0
  02ce5f4  li 9, 0
  02ce5f8  bl 0x106840
  02ce5fc  nop
  02ce600  lwz 3, 264(1)
  02ce604  cmpwi 3, 1
  02ce608  bf 1, 0x2ce6dc
  02ce60c  lfs 1, 32(30)
  02ce610  lis 3, 45
  02ce614  lfs 2, 44(28)
  02ce618  addi 3, 3, -6828
  02ce61c  fsubs 1, 1, 2
  02ce620  stfs 1, 32(30)
  02ce624  lfs 2, 0(3)
  02ce628  fcmpu 0, 1, 2
  02ce62c  cror 6, 0, 2
  02ce630  bt 6, 0x2ce650
  02ce634  li 5, 90
  02ce638  addic 4, 30, 96
  02ce63c  ori 3, 31, 0
  02ce640  stb 5, 103(30)
  02ce644  bl 0x10c808
  02ce648  nop
  02ce64c  b 0x2ce6dc
  02ce650  lis 3, 151
  02ce654  lwz 3, -25488(3)
  02ce658  cmpwi 3, 13
  02ce65c  bf 2, 0x2ce6a8
  02ce660  lis 3, 45
  02ce664  lis 4, 151
  02ce668  addi 3, 3, -6828
  02ce66c  addic 4, 4, -25376
  02ce670  lfs 1, 4(3)
  02ce674  lfs 2, 136(4)
  02ce678  lfs 3, 8(3)
  02ce67c  fsubs 1, 2, 1
  02ce680  fabs 1, 1
  02ce684  fcmpu 0, 1, 3
  02ce688  cror 6, 1, 2
  02ce68c  bt 6, 0x2ce6a8
  02ce690  ori 3, 31, 0
  02ce694  li 4, 512
  02ce698  li 5, -1
  02ce69c  bl 0xfd8d0
  02ce6a0  nop
  02ce6a4  b 0x2ce6bc
  02ce6a8  ori 3, 31, 0
  02ce6ac  li 4, 0
  02ce6b0  li 5, -1
  02ce6b4  bl 0xfd8d0
  02ce6b8  nop
  02ce6bc  li 5, 2
  02ce6c0  li 6, 120
  02ce6c4  addic 4, 30, 96
  02ce6c8  ori 3, 31, 0
  02ce6cc  stb 5, 32(31)
  02ce6d0  stb 6, 103(30)
  02ce6d4  bl 0x10c808
  02ce6d8  nop
  02ce6dc  li 5, 255
  02ce6e0  addic 28, 30, 96
  02ce6e4  ori 3, 31, 0
  02ce6e8  ori 4, 28, 0
  02ce6ec  stb 5, 164(31)
  02ce6f0  bl 0x10c9a0
  02ce6f4  nop
  02ce6f8  lbz 3, 32(31)
  02ce6fc  cmpwi 3, 0
  02ce700  bt 1, 0x2ce710
  02ce704  cmpwi 3, -1
  02ce708  bf 1, 0x2cf1b8
  02ce70c  b 0x2ce724
  02ce710  cmpwi 3, 1
  02ce714  bf 1, 0x2ce76c
  02ce718  cmpwi 3, 2
  02ce71c  bf 1, 0x2cf0a4
  02ce720  b 0x2cf1b8
  02ce724  li 3, 0
  02ce728  stw 3, 256(1)
  02ce72c  addic 3, 1, 256
  02ce730  lwz 4, 148(30)
  02ce734  li 5, 0
  02ce738  li 6, 0
  02ce73c  extsw 4, 4
  02ce740  bl 0x104800
  02ce744  nop
  02ce748  cmpwi 3, 0
  02ce74c  bf 2, 0x2ce760
  02ce750  lwz 3, 256(1)
  02ce754  bl 0xefb38
  02ce758  nop
  02ce75c  b 0x2ce72c
  02ce760  li 3, 1
  02ce764  stb 3, 32(31)
  02ce768  b 0x2cf1b8
  02ce76c  ori 3, 31, 0
  02ce770  ori 27, 29, 0
  02ce774  lis 4, 195
  02ce778  li 5, 0
  02ce77c  bl 0x10675c
  02ce780  nop
  02ce784  ori 29, 3, 0
  02ce788  ori 3, 31, 0
  02ce78c  li 6, 0
  02ce790  addic 7, 1, 260
  02ce794  li 9, 0
  02ce798  li 10, 4
  02ce79c  ori 4, 29, 0
  02ce7a0  ori 5, 27, 0
  02ce7a4  li 8, 0
  02ce7a8  bl 0x106840
  02ce7ac  nop
  02ce7b0  lwz 3, 260(1)
  02ce7b4  cmpwi 3, 1
  02ce7b8  bf 1, 0x2ce88c
  02ce7bc  lfs 1, 32(30)
  02ce7c0  lis 3, 45
  02ce7c4  lfs 2, 44(29)
  02ce7c8  addi 3, 3, -6828
  02ce7cc  fsubs 1, 1, 2
  02ce7d0  stfs 1, 32(30)
  02ce7d4  lfs 2, 0(3)
  02ce7d8  fcmpu 0, 1, 2
  02ce7dc  cror 6, 0, 2
  02ce7e0  bt 6, 0x2ce800
  02ce7e4  li 5, 90
  02ce7e8  ori 3, 31, 0
  02ce7ec  ori 4, 28, 0
  02ce7f0  stb 5, 103(30)
  02ce7f4  bl 0x10c808
  02ce7f8  nop
  02ce7fc  b 0x2ce88c
  02ce800  lis 3, 151
  02ce804  lwz 3, -25488(3)
  02ce808  cmpwi 3, 13
  02ce80c  bf 2, 0x2ce858
  02ce810  lis 3, 45
  02ce814  lis 4, 151
  02ce818  addi 3, 3, -6828
  02ce81c  addic 4, 4, -25376
  02ce820  lfs 1, 4(3)
  02ce824  lfs 2, 136(4)
  02ce828  lfs 3, 8(3)
  02ce82c  fsubs 1, 2, 1
  02ce830  fabs 1, 1
  02ce834  fcmpu 0, 1, 3
  02ce838  cror 6, 1, 2
  02ce83c  bt 6, 0x2ce858
  02ce840  ori 3, 31, 0
  02ce844  li 4, 512
  02ce848  li 5, -1
  02ce84c  bl 0xfd8d0
  02ce850  nop
  02ce854  b 0x2ce86c
  02ce858  ori 3, 31, 0
  02ce85c  li 4, 0
  02ce860  li 5, -1
  02ce864  bl 0xfd8d0
  02ce868  nop
  02ce86c  li 5, 2
  02ce870  li 6, 120
  02ce874  ori 3, 31, 0
  02ce878  ori 4, 28, 0
  02ce87c  stb 5, 32(31)
  02ce880  stb 6, 103(30)
  02ce884  bl 0x10c808
  02ce888  nop
  02ce88c  li 5, 255
  02ce890  ori 3, 31, 0
  02ce894  ori 4, 28, 0
  02ce898  stb 5, 164(31)
  02ce89c  bl 0x10c9a0
  02ce8a0  nop
  02ce8a4  addic 3, 30, 142
  02ce8a8  bl 0x4fffb4
  02ce8ac  nop
  02ce8b0  cmpwi 3, 0
  02ce8b4  bt 2, 0x2cf1b8
  02ce8b8  li 3, 7
  02ce8bc  bl 0xfc620
  02ce8c0  nop
  02ce8c4  cmpwi 3, 0
  02ce8c8  bf 2, 0x2ce980
  02ce8cc  li 6, -1
  02ce8d0  lwz 8, 132(30)
  02ce8d4  li 3, -1
  02ce8d8  subc 6, 6, 8
  02ce8dc  subc 3, 3, 8
  02ce8e0  cntlzw 6, 6
  02ce8e4  cntlzw 8, 3
  02ce8e8  addic 7, 30, 132
  02ce8ec  li 10, 0
  02ce8f0  sldi 6, 6, 58
  02ce8f4  li 5, 0
  02ce8f8  li 9, 1
  02ce8fc  sldi 8, 8, 58
  02ce900  subc 10, 10, 7
  02ce904  sradi 6, 6, 63
  02ce908  subc 11, 5, 9
  02ce90c  sradi 8, 8, 63
  02ce910  lwz 5, 136(30)
  02ce914  and 6, 6, 10
  02ce918  li 4, 0
  02ce91c  and 8, 8, 11
  02ce920  addc 7, 7, 6
  02ce924  cmpwi 5, -1
  02ce928  ori 3, 4, 0
  02ce92c  addc 6, 9, 8
  02ce930  bt 2, 0x2ce954
  02ce934  lis 3, 165
  02ce938  slwi 4, 5, 2
  02ce93c  addic 3, 3, 7136
  02ce940  extsw 4, 4
  02ce944  lwzx 4, 3, 4
  02ce948  addic 3, 4, 16
  02ce94c  lwz 4, 0(4)
  02ce950  extsw 4, 4
  02ce954  ori 5, 6, 0
  02ce958  lfs 1, 128(30)
  02ce95c  ori 8, 3, 0
  02ce960  ori 9, 4, 0
  02ce964  ori 6, 7, 0
  02ce968  addic 4, 30, 256
  02ce96c  ori 3, 31, 0
  02ce970  ori 7, 5, 0
  02ce974  bl 0x111ba0
  02ce978  nop
  02ce97c  b 0x2ce9d4
  02ce980  lwz 3, 320(30)
  02ce984  cmpwi 3, 0
  02ce988  bt 2, 0x2ce9c4
  02ce98c  lbz 4, 32(3)
  02ce990  cmpwi 1, 4, 253
  02ce994  cmpwi 4, 254
  02ce998  cror 2, 2, 6
  02ce99c  bt 2, 0x2ce9c4
  02ce9a0  lfs 1, 16(3)
  02ce9a4  stfs 1, 256(30)
  02ce9a8  lfs 1, 20(3)
  02ce9ac  stfs 1, 260(30)
  02ce9b0  lfs 1, 24(3)
  02ce9b4  stfs 1, 264(30)
  02ce9b8  lfs 1, 28(3)
  02ce9bc  stfs 1, 268(30)
  02ce9c0  b 0x2ce9d4
  02ce9c4  li 3, 0
  02ce9c8  li 4, 2
  02ce9cc  stw 3, 320(30)
  02ce9d0  stw 4, 324(30)
  02ce9d4  lwz 3, 324(30)
  02ce9d8  cmpwi 3, 2
  02ce9dc  bt 2, 0x2cf1b8
  02ce9e0  lwz 3, 148(30)
  02ce9e4  li 4, -1
  02ce9e8  extsw 3, 3
  02ce9ec  bl 0x104214
  02ce9f0  nop
  02ce9f4  ori 6, 3, 0
  02ce9f8  ori 5, 30, 0
  02ce9fc  li 3, 0
  02cea00  li 29, -1
  02cea04  stb 6, 145(30)
  02cea08  ori 27, 3, 0
  02cea0c  lbz 7, 144(5)
  02cea10  lwz 4, 176(5)
  02cea14  cmpwi 4, 0
  02cea18  bt 2, 0x2cea4c
  02cea1c  lhz 8, 166(4)
  02cea20  cmpwi 8, 1886
  02cea24  bf 2, 0x2cea4c
  02cea28  lbz 4, 32(4)
  02cea2c  cmpwi 1, 4, 253
  02cea30  cmpwi 4, 254
  02cea34  cror 2, 2, 6
  02cea38  bt 2, 0x2cea4c
  02cea3c  addic 4, 6, 1
  02cea40  ori 6, 4, 0
  02cea44  stb 4, 145(30)
  02cea48  b 0x2cea54
  02cea4c  ori 29, 3, 0
  02cea50  ori 4, 6, 0
  02cea54  addic 3, 3, 1
  02cea58  addic 5, 5, 4
  02cea5c  cmpwi 3, 20
  02cea60  bt 0, 0x2cea10
  02cea64  clrlwi 3, 4, 24
  02cea68  cmpwi 1, 29, -1
  02cea6c  cmpw 3, 7
  02cea70  bf 0, 0x2cf1b8
  02cea74  bt 6, 0x2cf1b8
  02cea78  clrlwi 3, 6, 24
  02cea7c  cmpwi 3, 1
  02cea80  bt 0, 0x2cead4
  02cea84  lis 3, 161
  02cea88  lis 4, 16217
  02cea8c  ori 4, 4, 39322
  02cea90  lwz 3, 1816(3)
  02cea94  srawi 5, 3, 31
  02cea98  srwi 6, 5, 1
  02cea9c  xor 3, 6, 3
  02ceaa0  subc 3, 3, 5
  02ceaa4  cmpw 3, 4
  02ceaa8  bf 0, 0x2cf1b8
  02ceaac  lis 3, 161
  02ceab0  lis 4, 16217
  02ceab4  ori 4, 4, 39322
  02ceab8  lwz 3, 1812(3)
  02ceabc  srawi 5, 3, 31
  02ceac0  srwi 6, 5, 1
  02ceac4  xor 3, 6, 3
  02ceac8  subc 3, 3, 5
  02ceacc  cmpw 3, 4
  02cead0  bf 0, 0x2cf1b8
  02cead4  lbz 3, 146(30)
  02cead8  ori 28, 27, 0
  02ceadc  cmpwi 3, 0
  02ceae0  bt 2, 0x2cecc0
  02ceae4  lis 3, 45
  02ceae8  lis 5, 151
  02ceaec  addi 6, 3, -6828
  02ceaf0  ori 3, 30, 0
  02ceaf4  lis 4, 165
  02ceaf8  addic 5, 5, -25376
  02ceafc  lfs 1, 12(6)
  02ceb00  lwz 6, 160(3)
  02ceb04  cmpwi 6, -1
  02ceb08  bt 2, 0x2ceb64
  02ceb0c  slwi 6, 6, 7
  02ceb10  lwz 7, 7128(4)
  02ceb14  lfs 2, 132(5)
  02ceb18  addc 6, 7, 6
  02ceb1c  lfs 3, 128(5)
  02ceb20  clrldi 6, 6, 32
  02ceb24  lfs 4, 136(5)
  02ceb28  lfs 5, 52(6)
  02ceb2c  lfs 6, 48(6)
  02ceb30  fsubs 2, 2, 5
  02ceb34  fsubs 3, 3, 6
  02ceb38  lfs 5, 56(6)
  02ceb3c  fsubs 4, 4, 5
  02ceb40  fmuls 2, 2, 2
  02ceb44  fmadds 2, 3, 3, 2
  02ceb48  fmadds 2, 4, 4, 2
  02ceb4c  fsqrts 2, 2
  02ceb50  fcmpu 0, 1, 2
  02ceb54  cror 6, 0, 2
  02ceb58  bt 6, 0x2ceb64
  02ceb5c  fmr 1, 2
  02ceb60  ori 28, 6, 0
  02ceb64  addic 27, 27, 1
  02ceb68  addic 3, 3, 4
  02ceb6c  cmpwi 27, 4
  02ceb70  bt 0, 0x2ceb00
  02ceb74  cmpwi 28, 0
  02ceb78  bf 2, 0x2cec9c
  02ceb7c  lfs 1, 256(30)
  02ceb80  lfs 2, 16(31)
  02ceb84  lfs 3, 20(31)
  02ceb88  fsubs 9, 1, 2
  02ceb8c  lfs 4, 24(31)
  02ceb90  lis 3, 45
  02ceb94  addi 3, 3, -6828
  02ceb98  lis 4, 16448
  02ceb9c  stfs 9, 192(1)
  02ceba0  lfs 1, 260(30)
  02ceba4  fsubs 10, 1, 3
  02ceba8  stfs 10, 196(1)
  02cebac  lfs 1, 264(30)
  02cebb0  fsubs 11, 1, 4
  02cebb4  stfs 11, 200(1)
  02cebb8  lfs 1, 268(30)
  02cebbc  stfs 1, 204(1)
  02cebc0  lfs 1, 16(3)
  02cebc4  fmuls 9, 9, 1
  02cebc8  fmuls 10, 10, 1
  02cebcc  fmuls 11, 11, 1
  02cebd0  stfs 9, 192(1)
  02cebd4  stfs 10, 196(1)
  02cebd8  stfs 11, 200(1)
  02cebdc  lwz 5, 128(30)
  02cebe0  lfs 5, 20(3)
  02cebe4  srawi 6, 5, 31
  02cebe8  srwi 3, 6, 1
  02cebec  xor 3, 3, 5
  02cebf0  subc 3, 3, 6
  02cebf4  cmpw 3, 4
  02cebf8  bf 1, 0x2cec28
  02cebfc  fmuls 1, 10, 10
  02cec00  fmadds 1, 9, 9, 1
  02cec04  fmadds 1, 11, 11, 1
  02cec08  fsqrts 1, 1
  02cec0c  fcmpu 0, 1, 5
  02cec10  cror 6, 0, 2
  02cec14  bt 6, 0x2cec28
  02cec18  fdivs 1, 5, 1
  02cec1c  fmuls 9, 9, 1
  02cec20  fmuls 10, 10, 1
  02cec24  fmuls 11, 11, 1
  02cec28  fmr 7, 10
  02cec2c  fmr 6, 9
  02cec30  fmr 8, 11
  02cec34  fmuls 1, 7, 7
  02cec38  fmadds 1, 6, 6, 1
  02cec3c  fmadds 1, 8, 8, 1
  02cec40  fsqrts 1, 1
  02cec44  fcmpu 0, 1, 5
  02cec48  cror 6, 1, 2
  02cec4c  bt 6, 0x2cec80
  02cec50  lis 3, 45
  02cec54  addi 3, 3, -6828
  02cec58  lfs 6, 0(3)
  02cec5c  fcmpu 0, 1, 6
  02cec60  bf 2, 0x2cec70
  02cec64  fmr 8, 6
  02cec68  fmr 7, 8
  02cec6c  b 0x2cec80
  02cec70  fdivs 8, 5, 1
  02cec74  fmuls 6, 9, 8
  02cec78  fmuls 7, 10, 8
  02cec7c  fmuls 8, 11, 8
  02cec80  fadds 1, 6, 2
  02cec84  fadds 2, 7, 3
  02cec88  fadds 3, 8, 4
  02cec8c  stfs 1, 192(1)
  02cec90  stfs 2, 196(1)
  02cec94  stfs 3, 200(1)
  02cec98  b 0x2ceda0
  02cec9c  lfs 1, 48(28)
  02ceca0  stfs 1, 192(1)
  02ceca4  lfs 1, 52(28)
  02ceca8  stfs 1, 196(1)
  02cecac  lfs 1, 56(28)
  02cecb0  stfs 1, 200(1)
  02cecb4  lfs 1, 60(28)
  02cecb8  stfs 1, 204(1)
  02cecbc  b 0x2ceda0
  02cecc0  li 3, 0
  02cecc4  li 4, 3
  02cecc8  bl 0xfe484
  02ceccc  nop
  02cecd0  srawi 4, 3, 2
  02cecd4  addze 4, 4
  02cecd8  sldi 4, 4, 2
  02cecdc  subc 4, 3, 4
  02cece0  sldi 4, 4, 2
  02cece4  addc 4, 30, 4
  02cece8  clrldi 4, 4, 32
  02cecec  lwz 4, 160(4)
  02cecf0  cmpwi 4, -1
  02cecf4  bt 2, 0x2ced18
  02cecf8  lis 3, 165
  02cecfc  slwi 4, 4, 7
  02ced00  lwz 3, 7128(3)
  02ced04  addc 28, 3, 4
  02ced08  clrldi 28, 28, 32
  02ced0c  cmpwi 28, 0
  02ced10  bt 2, 0x2ced28
  02ced14  b 0x2ced80
  02ced18  addic 27, 27, 1
  02ced1c  addic 3, 3, 1
  02ced20  cmpwi 27, 4
  02ced24  bt 0, 0x2cecd0
  02ced28  lis 3, 45
  02ced2c  lfs 1, 128(30)
  02ced30  addi 3, 3, -6828
  02ced34  lfs 2, 20(3)
  02ced38  addic 3, 1, 192
  02ced3c  fsub 3, 1, 2
  02ced40  fsel 1, 3, 1, 2
  02ced44  bl 0xfe8c8
  02ced48  nop
  02ced4c  lfs 1, 192(1)
  02ced50  lfs 2, 16(31)
  02ced54  lfs 3, 196(1)
  02ced58  fadds 1, 1, 2
  02ced5c  lfs 2, 20(31)
  02ced60  lfs 4, 200(1)
  02ced64  fadds 2, 3, 2
  02ced68  lfs 3, 24(31)
  02ced6c  fadds 3, 4, 3
  02ced70  stfs 1, 192(1)
  02ced74  stfs 2, 196(1)
  02ced78  stfs 3, 200(1)
  02ced7c  b 0x2ceda0
  02ced80  lfs 1, 48(28)
  02ced84  stfs 1, 192(1)
  02ced88  lfs 1, 52(28)
  02ced8c  stfs 1, 196(1)
  02ced90  lfs 1, 56(28)
  02ced94  stfs 1, 200(1)
  02ced98  lfs 1, 60(28)
  02ced9c  stfs 1, 204(1)
  02ceda0  cmpwi 28, 0
  02ceda4  bt 2, 0x2cee38
  02ceda8  lis 3, 45
  02cedac  addi 3, 3, -6828
  02cedb0  lfs 31, 24(3)
  02cedb4  lfs 30, 28(3)
  02cedb8  fmr 1, 31
  02cedbc  fmr 2, 30
  02cedc0  bl 0xfcbe8
  02cedc4  nop
  02cedc8  lfs 2, 0(28)
  02cedcc  lfs 3, 4(28)
  02cedd0  lfs 4, 8(28)
  02cedd4  lfs 5, 192(1)
  02cedd8  lfs 6, 196(1)
  02ceddc  fmadds 5, 2, 1, 5
  02cede0  lfs 2, 200(1)
  02cede4  fmadds 3, 3, 1, 6
  02cede8  fmadds 4, 4, 1, 2
  02cedec  fmr 1, 31
  02cedf0  fmr 2, 30
  02cedf4  stfs 5, 192(1)
  02cedf8  stfs 3, 196(1)
  02cedfc  stfs 4, 200(1)
  02cee00  bl 0xfcbe8
  02cee04  nop
  02cee08  lfs 2, 16(28)
  02cee0c  lfs 3, 20(28)
  02cee10  lfs 4, 24(28)
  02cee14  lfs 5, 192(1)
  02cee18  lfs 6, 196(1)
  02cee1c  fmadds 2, 2, 1, 5
  02cee20  lfs 5, 200(1)
  02cee24  fmadds 3, 3, 1, 6
  02cee28  fmadds 1, 4, 1, 5
  02cee2c  stfs 2, 192(1)
  02cee30  stfs 3, 196(1)
  02cee34  stfs 1, 200(1)
  02cee38  lis 4, 45
  02cee3c  addic 3, 1, 192
  02cee40  addi 28, 4, -6828
  02cee44  li 4, 0
  02cee48  lfs 1, 16(28)
  02cee4c  bl 0xffb70
  02cee50  nop
  02cee54  lfs 31, 0(28)
  02cee58  lfs 2, 192(1)
  02cee5c  fcmpu 0, 1, 31
  02cee60  lfs 3, 16(31)
  02cee64  lfs 4, 196(1)
  02cee68  lfs 5, 20(31)
  02cee6c  lfs 6, 200(1)
  02cee70  lfs 7, 24(31)
  02cee74  lfs 8, 204(1)
  02cee78  bt 2, 0x2cee84
  02cee7c  fmr 6, 1
  02cee80  stfs 1, 200(1)
  02cee84  fsubs 1, 4, 5
  02cee88  fsubs 2, 2, 3
  02cee8c  fsubs 3, 6, 7
  02cee90  lis 3, 45
  02cee94  addi 28, 3, -6828
  02cee98  lis 3, 114
  02cee9c  fmuls 4, 1, 1
  02ceea0  stfs 2, 208(1)
  02ceea4  stfs 1, 212(1)
  02ceea8  stfs 3, 216(1)
  02ceeac  stfs 8, 220(1)
  02ceeb0  lfs 5, 32(28)
  02ceeb4  fmadds 4, 2, 2, 4
  02ceeb8  lfs 6, -3052(3)
  02ceebc  fmuls 5, 6, 5
  02ceec0  addic 27, 1, 224
  02ceec4  ori 3, 31, 0
  02ceec8  fmadds 4, 3, 3, 4
  02ceecc  li 4, 0
  02ceed0  ori 5, 27, 0
  02ceed4  fsqrts 4, 4
  02ceed8  fmuls 30, 5, 4
  02ceedc  fsub 6, 31, 4
  02ceee0  fsub 7, 31, 4
  02ceee4  fsub 8, 31, 4
  02ceee8  fsub 9, 4, 31
  02ceeec  fsub 10, 4, 31
  02ceef0  fdivs 5, 30, 4
  02ceef4  fsub 4, 4, 31
  02ceef8  fmuls 2, 2, 5
  02ceefc  fmuls 1, 1, 5
  02cef00  fmuls 3, 3, 5
  02cef04  fsel 5, 6, 31, 2
  02cef08  fsel 6, 7, 31, 1
  02cef0c  fsel 7, 8, 31, 3
  02cef10  fsel 2, 9, 5, 2
  02cef14  fsel 1, 10, 6, 1
  02cef18  fsel 3, 4, 7, 3
  02cef1c  stfs 2, 208(1)
  02cef20  stfs 1, 212(1)
  02cef24  stfs 3, 216(1)
  02cef28  bl 0xf1114
  02cef2c  nop
  02cef30  lfs 1, 212(1)
  02cef34  lfs 2, 208(1)
  02cef38  fmuls 3, 1, 1
  02cef3c  lfs 4, 216(1)
  02cef40  lfs 5, 36(28)
  02cef44  lfs 6, 220(1)
  02cef48  addic 3, 1, 240
  02cef4c  fmadds 3, 2, 2, 3
  02cef50  stfs 6, 252(1)
  02cef54  fmadds 3, 4, 4, 3
  02cef58  fsqrts 3, 3
  02cef5c  fdivs 5, 5, 3
  02cef60  fsub 6, 31, 3
  02cef64  fsub 7, 31, 3
  02cef68  fsub 8, 31, 3
  02cef6c  fsub 9, 3, 31
  02cef70  fsub 10, 3, 31
  02cef74  fsub 3, 3, 31
  02cef78  fmuls 2, 2, 5
  02cef7c  fmuls 1, 1, 5
  02cef80  fmuls 4, 4, 5
  02cef84  fsel 5, 6, 31, 2
  02cef88  fsel 6, 7, 31, 1
  02cef8c  fsel 7, 8, 31, 4
  02cef90  fsel 2, 9, 5, 2
  02cef94  fsel 1, 10, 6, 1
  02cef98  fsel 3, 3, 7, 4
  02cef9c  stfs 2, 240(1)
  02cefa0  stfs 1, 244(1)
  02cefa4  stfs 3, 248(1)
  02cefa8  lfs 1, 40(28)
  02cefac  bl 0x110950
  02cefb0  nop
  02cefb4  lfs 1, 224(1)
  02cefb8  lis 3, 114
  02cefbc  lfs 2, 240(1)
  02cefc0  addic 4, 1, 192
  02cefc4  lfs 3, 228(1)
  02cefc8  li 7, 0
  02cefcc  fadds 2, 1, 2
  02cefd0  lfs 1, 244(1)
  02cefd4  lfs 4, 232(1)
  02cefd8  fadds 3, 3, 1
  02cefdc  lfs 1, 248(1)
  02cefe0  fadds 4, 4, 1
  02cefe4  fmr 1, 30
  02cefe8  stfs 2, 224(1)
  02cefec  stfs 3, 228(1)
  02ceff0  lfs 2, -3048(3)
  02ceff4  ori 3, 27, 0
  02ceff8  stfs 4, 232(1)
  02ceffc  lfs 3, 44(28)
  02cf000  fmuls 2, 2, 3
  02cf004  bl 0x108180
  02cf008  nop
  02cf00c  stfs 1, 216(1)
  02cf010  ori 4, 27, 0
  02cf014  addic 5, 1, 208
  02cf018  lbz 6, 147(30)
  02cf01c  clrlwi 7, 29, 24
  02cf020  ori 3, 31, 0
  02cf024  bl 0x2cf208
  02cf028  nop
  02cf02c  li 4, 140
  02cf030  vspltisw 4, -1
  02cf034  sldi 6, 29, 2
  02cf038  addi 5, 4, 16
  02cf03c  <unknown>
  02cf040  addc 4, 30, 6
  02cf044  <unknown>
  02cf048  clrldi 4, 4, 32
  02cf04c  vor 2, 2, 3
  02cf050  li 5, 16
  02cf054  vspltisw 3, -16
  02cf058  vslw 4, 4, 4
  02cf05c  stw 3, 176(4)
  02cf060  vsraw 2, 2, 3
  02cf064  <unknown>
  02cf068  lis 3, 114
  02cf06c  li 4, -3056
  02cf070  vspltw 3, 3, 0
  02cf074  vcfsx 2, 2, 0
  02cf078  <unknown>
  02cf07c  lbz 3, 145(30)
  02cf080  li 4, 142
  02cf084  addic 3, 3, 1
  02cf088  vaddfp 2, 2, 3
  02cf08c  vmaddfp 2, 5, 2, 4
  02cf090  vctsxs 2, 2, 0
  02cf094  vsplth 2, 2, 1
  02cf098  stvehx 2, 4, 30
  02cf09c  stb 3, 145(30)
  02cf0a0  b 0x2cf1b8
  02cf0a4  lis 3, 45
  02cf0a8  li 6, 1
  02cf0ac  addi 3, 3, -6828
  02cf0b0  li 7, -1
  02cf0b4  li 11, 0
  02cf0b8  li 5, 0
  02cf0bc  addic 4, 30, 112
  02cf0c0  lfs 31, 0(3)
  02cf0c4  lfs 3, 48(3)
  02cf0c8  li 8, 30
  02cf0cc  lfs 4, 8(3)
  02cf0d0  li 9, 8
  02cf0d4  lfs 5, 52(3)
  02cf0d8  li 10, 20
  02cf0dc  lfs 6, 28(3)
  02cf0e0  fmr 1, 31
  02cf0e4  lfs 7, 56(3)
  02cf0e8  fmr 2, 31
  02cf0ec  std 6, 144(1)
  02cf0f0  ori 3, 31, 0
  02cf0f4  std 6, 160(1)
  02cf0f8  std 6, 168(1)
  02cf0fc  std 7, 176(1)
  02cf100  std 11, 184(1)
  02cf104  bl 0x10e030
  02cf108  nop
  02cf10c  lis 5, 161
  02cf110  fmr 1, 31
  02cf114  addic 30, 31, 16
  02cf118  addic 29, 5, 23856
  02cf11c  addic 28, 31, 64
  02cf120  ori 3, 31, 0
  02cf124  li 4, 1733
  02cf128  std 29, 112(1)
  02cf12c  std 29, 120(1)
  02cf130  ori 5, 30, 0
  02cf134  ori 10, 29, 0
  02cf138  ori 6, 28, 0
  02cf13c  li 7, 0
  02cf140  li 8, 0
  02cf144  bl 0x11a560
  02cf148  nop
  02cf14c  std 29, 112(1)
  02cf150  ori 3, 31, 0
  02cf154  std 29, 120(1)
  02cf158  ori 10, 29, 0
  02cf15c  li 4, 1734
  02cf160  fmr 1, 31
  02cf164  ori 5, 30, 0
  02cf168  ori 6, 28, 0
  02cf16c  li 7, 0
  02cf170  li 8, 0
  02cf174  bl 0x11a560
  02cf178  nop
  02cf17c  ori 3, 31, 0
  02cf180  std 29, 112(1)
  02cf184  ori 10, 29, 0
  02cf188  fmr 1, 31
  02cf18c  li 4, 1735
  02cf190  std 29, 120(1)
  02cf194  ori 5, 30, 0
  02cf198  ori 6, 28, 0
  02cf19c  li 7, 0
  02cf1a0  li 8, 0
  02cf1a4  bl 0x11a560
  02cf1a8  nop
  02cf1ac  ori 3, 31, 0
  02cf1b0  bl 0xefb38
  02cf1b4  nop
  02cf1b8  ld 0, 352(1)
  02cf1bc  mtlr 0
  02cf1c0  lfd 30, 320(1)
  02cf1c4  lfd 31, 328(1)
  02cf1c8  ld 27, 280(1)
  02cf1cc  ld 28, 288(1)
  02cf1d0  ld 29, 296(1)
  02cf1d4  ld 30, 304(1)
  02cf1d8  ld 31, 312(1)
  02cf1dc  addi 1, 1, 336
  02cf1e0  blr

M1886_002cf1e4:   # 0x2cf1e4, 0x14 bytes
  02cf1e4  lis 3, 124
  02cf1e8  lis 4, 1
  02cf1ec  addic 3, 3, -10840
  02cf1f0  stw 4, 72(3)
  02cf1f4  blr

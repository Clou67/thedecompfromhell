# game/update/moby1172.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1172_001ed1d0:   # 0x1ed1d0, 0x14 bytes
  01ed1d0  lis 3, 118
  01ed1d4  lis 4, 1
  01ed1d8  addic 3, 3, 23748
  01ed1dc  stw 4, 72(3)
  01ed1e0  blr

M1172_001ed1f0:   # 0x1ed1f0, 0x23c bytes
  01ed1f0  stdu 1, -160(1)
  01ed1f4  mflr 0
  01ed1f8  std 0, 176(1)
  01ed1fc  std 30, 144(1)
  01ed200  ori 30, 3, 0
  01ed204  std 31, 152(1)
  01ed208  lbz 3, 32(3)
  01ed20c  std 29, 136(1)
  01ed210  ori 31, 4, 0
  01ed214  ori 29, 5, 0
  01ed218  std 28, 128(1)
  01ed21c  cmpwi 3, 3
  01ed220  bt 2, 0x1ed3fc
  01ed224  ori 3, 30, 0
  01ed228  lis 4, 51
  01ed22c  li 5, 0
  01ed230  bl 0x10675c
  01ed234  nop
  01ed238  ori 28, 3, 0
  01ed23c  cmpwi 28, 0
  01ed240  bt 2, 0x1ed268
  01ed244  lfs 1, 44(28)
  01ed248  lhz 4, 166(30)
  01ed24c  lis 3, 101
  01ed250  addic 3, 3, 19500
  01ed254  extsh 4, 4
  01ed258  stfd 1, 64(1)
  01ed25c  ld 5, 64(1)
  01ed260  bl 0x5cd098
  01ed264  nop
  01ed268  ori 3, 30, 0
  01ed26c  ori 4, 28, 0
  01ed270  addic 7, 1, 112
  01ed274  li 9, 0
  01ed278  li 10, 4
  01ed27c  ori 5, 29, 0
  01ed280  li 6, 0
  01ed284  li 8, 0
  01ed288  bl 0x106840
  01ed28c  nop
  01ed290  ori 4, 3, 0
  01ed294  lwz 3, 112(1)
  01ed298  cmpwi 4, 0
  01ed29c  bf 1, 0x1ed2b0
  01ed2a0  cmpwi 4, 2
  01ed2a4  bt 1, 0x1ed2b0
  01ed2a8  li 4, 0
  01ed2ac  stw 4, 0(29)
  01ed2b0  cmpwi 3, 1
  01ed2b4  bf 1, 0x1ed3f4
  01ed2b8  lwz 3, 0(29)
  01ed2bc  lwz 4, 44(28)
  01ed2c0  srawi 5, 3, 31
  01ed2c4  lfs 2, 0(29)
  01ed2c8  srawi 6, 4, 31
  01ed2cc  lfs 1, 44(28)
  01ed2d0  srwi 7, 5, 1
  01ed2d4  srwi 8, 6, 1
  01ed2d8  xor 3, 7, 3
  01ed2dc  xor 4, 8, 4
  01ed2e0  subc 3, 3, 5
  01ed2e4  subc 4, 4, 6
  01ed2e8  cmpw 3, 4
  01ed2ec  bt 1, 0x1ed39c
  01ed2f0  li 3, 0
  01ed2f4  lhz 4, 52(30)
  01ed2f8  rlwimi 4, 3, 0, 19, 19
  01ed2fc  stw 3, 0(29)
  01ed300  lwz 29, 112(31)
  01ed304  sth 4, 52(30)
  01ed308  cmpwi 29, -1
  01ed30c  bt 2, 0x1ed364
  01ed310  lis 3, 164
  01ed314  slwi 4, 29, 8
  01ed318  lwz 3, -28512(3)
  01ed31c  addc 29, 3, 4
  01ed320  clrldi 29, 29, 32
  01ed324  cmpwi 29, 0
  01ed328  bt 2, 0x1ed364
  01ed32c  lbz 3, 32(29)
  01ed330  cmpwi 1, 3, 253
  01ed334  cmpwi 3, 254
  01ed338  cror 2, 2, 6
  01ed33c  bt 2, 0x1ed364
  01ed340  lhz 3, 166(29)
  01ed344  cmpwi 1, 3, 1181
  01ed348  cmpwi 3, 1172
  01ed34c  cror 2, 2, 6
  01ed350  bt 2, 0x1ed35c
  01ed354  cmpwi 3, 1184
  01ed358  bf 2, 0x1ed364
  01ed35c  li 3, 1
  01ed360  stb 3, 188(29)
  01ed364  li 5, -1
  01ed368  ori 3, 30, 0
  01ed36c  li 4, 0
  01ed370  bl 0xfd8d0
  01ed374  nop
  01ed378  li 5, 120
  01ed37c  ori 3, 30, 0
  01ed380  addic 4, 31, 96
  01ed384  stb 5, 103(31)
  01ed388  bl 0x10c808
  01ed38c  nop
  01ed390  li 3, 3
  01ed394  stb 3, 32(30)
  01ed398  b 0x1ed3f4
  01ed39c  fsubs 1, 2, 1
  01ed3a0  lis 3, 31
  01ed3a4  vspltisw 2, -1
  01ed3a8  li 4, 250
  01ed3ac  addi 3, 3, -11800
  01ed3b0  lis 5, 114
  01ed3b4  li 6, -3056
  01ed3b8  vslw 2, 2, 2
  01ed3bc  stfs 1, 0(29)
  01ed3c0  stb 4, 103(31)
  01ed3c4  lvlx 3, 0, 3
  01ed3c8  lvlx 4, 6, 5
  01ed3cc  vspltw 3, 3, 0
  01ed3d0  li 5, 38
  01ed3d4  addic 4, 31, 96
  01ed3d8  vmaddfp 2, 4, 3, 2
  01ed3dc  ori 3, 30, 0
  01ed3e0  vctsxs 2, 2, 0
  01ed3e4  vsplth 2, 2, 1
  01ed3e8  stvehx 2, 5, 31
  01ed3ec  bl 0x10c808
  01ed3f0  nop
  01ed3f4  li 3, 255
  01ed3f8  stb 3, 164(30)
  01ed3fc  addic 4, 31, 96
  01ed400  ori 3, 30, 0
  01ed404  bl 0x10c9a0
  01ed408  nop
  01ed40c  ld 0, 176(1)
  01ed410  mtlr 0
  01ed414  ld 28, 128(1)
  01ed418  ld 29, 136(1)
  01ed41c  ld 30, 144(1)
  01ed420  ld 31, 152(1)
  01ed424  addi 1, 1, 160
  01ed428  blr

UpdateMoby_1172:   # 0x1ed448, 0x33c bytes
  01ed448  stdu 1, -224(1)
  01ed44c  mflr 0
  01ed450  std 0, 240(1)
  01ed454  std 31, 216(1)
  01ed458  std 30, 208(1)
  01ed45c  ori 31, 3, 0
  01ed460  lwz 30, 120(31)
  01ed464  addic 5, 30, 32
  01ed468  ori 4, 30, 0
  01ed46c  bl 0x1ed1f0
  01ed470  lbz 3, 32(31)
  01ed474  cmpwi 3, 1
  01ed478  bt 1, 0x1ed490
  01ed47c  cmpwi 3, -1
  01ed480  bf 1, 0x1ed76c
  01ed484  cmpwi 3, 0
  01ed488  bf 1, 0x1ed4a4
  01ed48c  b 0x1ed4ec
  01ed490  cmpwi 3, 2
  01ed494  bf 1, 0x1ed634
  01ed498  cmpwi 3, 3
  01ed49c  bf 1, 0x1ed6bc
  01ed4a0  b 0x1ed76c
  01ed4a4  lhz 3, 118(30)
  01ed4a8  extsh 3, 3
  01ed4ac  cmpwi 3, -1
  01ed4b0  bt 2, 0x1ed4d8
  01ed4b4  lis 4, 151
  01ed4b8  addic 4, 4, -16343
  01ed4bc  lbzx 3, 4, 3
  01ed4c0  cmpwi 3, 0
  01ed4c4  bt 2, 0x1ed4d8
  01ed4c8  ori 3, 31, 0
  01ed4cc  bl 0xefb38
  01ed4d0  nop
  01ed4d4  b 0x1ed76c
  01ed4d8  li 3, -1
  01ed4dc  li 4, 1
  01ed4e0  stw 3, 124(30)
  01ed4e4  stb 4, 32(31)
  01ed4e8  b 0x1ed76c
  01ed4ec  lis 3, 161
  01ed4f0  srawi 4, 31, 8
  01ed4f4  lwz 3, 1808(3)
  01ed4f8  xor 3, 3, 4
  01ed4fc  clrlwi 3, 3, 29
  01ed500  cmpwi 3, 0
  01ed504  bf 2, 0x1ed550
  01ed508  lwz 3, 124(30)
  01ed50c  cmpwi 3, -1
  01ed510  bt 2, 0x1ed530
  01ed514  extsw 4, 3
  01ed518  ori 3, 31, 0
  01ed51c  bl 0x15cc7c
  01ed520  nop
  01ed524  cmpwi 3, 0
  01ed528  bf 2, 0x1ed550
  01ed52c  lwz 3, 124(30)
  01ed530  cmpwi 3, -1
  01ed534  bf 2, 0x1ed550
  01ed538  li 3, 1
  01ed53c  li 4, 4
  01ed540  ori 5, 31, 0
  01ed544  bl 0x15d12c
  01ed548  nop
  01ed54c  stw 3, 124(30)
  01ed550  lbz 3, 188(31)
  01ed554  cmpwi 3, 1
  01ed558  bf 2, 0x1ed76c
  01ed55c  lwz 3, 120(30)
  01ed560  cmpwi 3, -1
  01ed564  bt 2, 0x1ed590
  01ed568  lis 4, 164
  01ed56c  slwi 3, 3, 8
  01ed570  lwz 4, -28512(4)
  01ed574  addc 3, 4, 3
  01ed578  clrldi 3, 3, 32
  01ed57c  lbz 4, 32(3)
  01ed580  cmpwi 4, 1
  01ed584  bf 2, 0x1ed590
  01ed588  li 4, 1
  01ed58c  stb 4, 188(3)
  01ed590  lis 3, 31
  01ed594  vspltisw 2, -1
  01ed598  lis 4, 114
  01ed59c  addi 3, 3, -11220
  01ed5a0  li 5, -3056
  01ed5a4  vslw 2, 2, 2
  01ed5a8  lvlx 3, 0, 3
  01ed5ac  lvlx 4, 5, 4
  01ed5b0  vspltw 3, 3, 0
  01ed5b4  li 3, 116
  01ed5b8  lwz 4, 124(30)
  01ed5bc  cmpwi 4, -1
  01ed5c0  vmaddfp 2, 4, 3, 2
  01ed5c4  vctsxs 2, 2, 0
  01ed5c8  vsplth 2, 2, 1
  01ed5cc  stvehx 2, 3, 30
  01ed5d0  bt 2, 0x1ed618
  01ed5d4  sldi 3, 4, 7
  01ed5d8  sldi 6, 4, 4
  01ed5dc  lis 5, 150
  01ed5e0  subc 3, 3, 6
  01ed5e4  addic 5, 5, 14312
  01ed5e8  extsw 3, 3
  01ed5ec  lwzx 5, 5, 3
  01ed5f0  cmpw 5, 31
  01ed5f4  bf 2, 0x1ed618
  01ed5f8  lis 5, 150
  01ed5fc  addic 5, 5, 14292
  01ed600  lbzx 3, 5, 3
  01ed604  cmpwi 3, 0
  01ed608  bt 2, 0x1ed618
  01ed60c  extsw 3, 4
  01ed610  bl 0x15cdb0
  01ed614  nop
  01ed618  li 3, -1
  01ed61c  li 4, 255
  01ed620  li 5, 2
  01ed624  stw 3, 124(30)
  01ed628  stb 4, 48(31)
  01ed62c  stb 5, 32(31)
  01ed630  b 0x1ed76c
  01ed634  addic 3, 30, 116
  01ed638  bl 0x4fffb4
  01ed63c  nop
  01ed640  cmpwi 3, 0
  01ed644  bt 2, 0x1ed76c
  01ed648  lwz 30, 112(30)
  01ed64c  cmpwi 30, -1
  01ed650  bt 2, 0x1ed6b0
  01ed654  lis 3, 164
  01ed658  slwi 4, 30, 8
  01ed65c  lwz 3, -28512(3)
  01ed660  addc 30, 3, 4
  01ed664  clrldi 30, 30, 32
  01ed668  cmpwi 30, 0
  01ed66c  bt 2, 0x1ed6b0
  01ed670  lbz 3, 32(30)
  01ed674  cmpwi 1, 3, 253
  01ed678  cmpwi 3, 254
  01ed67c  cror 2, 2, 6
  01ed680  bt 2, 0x1ed6b0
  01ed684  lhz 3, 166(30)
  01ed688  cmpwi 1, 3, 1181
  01ed68c  cmpwi 3, 1172
  01ed690  cror 2, 2, 6
  01ed694  bt 2, 0x1ed6a0
  01ed698  cmpwi 3, 1184
  01ed69c  bf 2, 0x1ed6b0
  01ed6a0  li 3, 255
  01ed6a4  li 4, 1
  01ed6a8  stb 3, 48(30)
  01ed6ac  stb 4, 188(30)
  01ed6b0  li 3, 3
  01ed6b4  stb 3, 32(31)
  01ed6b8  b 0x1ed76c
  01ed6bc  lis 3, 149
  01ed6c0  lfs 1, 16(31)
  01ed6c4  lis 4, 31
  01ed6c8  addic 3, 3, 5056
  01ed6cc  lfs 2, 20(31)
  01ed6d0  addi 5, 4, -11220
  01ed6d4  li 6, 0
  01ed6d8  li 7, 1
  01ed6dc  li 11, -1
  01ed6e0  lfs 3, 320(3)
  01ed6e4  addic 4, 1, 192
  01ed6e8  lfs 4, 324(3)
  01ed6ec  li 8, 20
  01ed6f0  fsubs 1, 3, 1
  01ed6f4  li 9, 9
  01ed6f8  lfs 3, 328(3)
  01ed6fc  fsubs 2, 4, 2
  01ed700  lfs 4, 24(31)
  01ed704  li 10, 32
  01ed708  fsubs 3, 3, 4
  01ed70c  lfs 4, 332(3)
  01ed710  ori 3, 31, 0
  01ed714  stfs 4, 204(1)
  01ed718  stfs 1, 192(1)
  01ed71c  stfs 2, 196(1)
  01ed720  stfs 3, 200(1)
  01ed724  lfs 1, 4(5)
  01ed728  lfs 3, 8(5)
  01ed72c  lfs 4, 12(5)
  01ed730  lfs 5, 16(5)
  01ed734  fmr 2, 1
  01ed738  lfs 6, 20(5)
  01ed73c  lfs 7, 24(5)
  01ed740  std 6, 144(1)
  01ed744  li 5, 0
  01ed748  std 6, 160(1)
  01ed74c  std 7, 168(1)
  01ed750  std 11, 176(1)
  01ed754  std 6, 184(1)
  01ed758  bl 0x10e030
  01ed75c  nop
  01ed760  ori 3, 31, 0
  01ed764  bl 0xefb38
  01ed768  nop
  01ed76c  ld 0, 240(1)
  01ed770  mtlr 0
  01ed774  ld 30, 208(1)
  01ed778  ld 31, 216(1)
  01ed77c  addi 1, 1, 224
  01ed780  blr

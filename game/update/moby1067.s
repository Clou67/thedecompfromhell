# game/update/moby1067.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1067_001ae034:   # 0x1ae034, 0x14 bytes
  01ae034  lis 3, 117
  01ae038  lis 4, 1
  01ae03c  addic 3, 3, 31076
  01ae040  stw 4, 72(3)
  01ae044  blr

UpdateMoby_1067:   # 0x1ae060, 0x56c bytes
  01ae060  stdu 1, -224(1)
  01ae064  mflr 0
  01ae068  std 0, 240(1)
  01ae06c  std 30, 208(1)
  01ae070  std 31, 216(1)
  01ae074  lwz 30, 120(3)
  01ae078  ori 31, 3, 0
  01ae07c  lwz 3, 12(30)
  01ae080  std 29, 200(1)
  01ae084  std 28, 192(1)
  01ae088  std 27, 184(1)
  01ae08c  std 26, 176(1)
  01ae090  cmpwi 3, -1
  01ae094  bf 2, 0x1ae0cc
  01ae098  lis 3, 101
  01ae09c  addic 3, 3, 17700
  01ae0a0  bl 0x5cd098
  01ae0a4  nop
  01ae0a8  lis 3, 101
  01ae0ac  lhz 4, 178(31)
  01ae0b0  addic 3, 3, 17764
  01ae0b4  extsh 4, 4
  01ae0b8  bl 0x5cd098
  01ae0bc  nop
  01ae0c0  ori 3, 31, 0
  01ae0c4  bl 0xefb38
  01ae0c8  nop
  01ae0cc  lbz 3, 32(31)
  01ae0d0  cmpwi 3, 0
  01ae0d4  cmpwi 1, 3, 2
  01ae0d8  cmpwi 6, 3, 1
  01ae0dc  cmpwi 7, 3, -1
  01ae0e0  bt 1, 0x1ae0ec
  01ae0e4  bf 29, 0x1ae5a4
  01ae0e8  b 0x1ae0f8
  01ae0ec  bf 25, 0x1ae288
  01ae0f0  bf 5, 0x1ae400
  01ae0f4  b 0x1ae5a4
  01ae0f8  lis 3, 151
  01ae0fc  lwz 3, -25488(3)
  01ae100  cmpwi 3, 10
  01ae104  bf 2, 0x1ae12c
  01ae108  lis 3, 151
  01ae10c  addic 3, 3, -25376
  01ae110  lbz 3, 8356(3)
  01ae114  cmpwi 3, 1
  01ae118  bf 2, 0x1ae12c
  01ae11c  ori 3, 31, 0
  01ae120  bl 0xefb38
  01ae124  nop
  01ae128  b 0x1ae5a4
  01ae12c  li 29, 0
  01ae130  li 4, 1
  01ae134  li 6, 2
  01ae138  li 3, 4
  01ae13c  stb 29, 144(1)
  01ae140  li 8, 3
  01ae144  li 5, 5
  01ae148  stb 4, 145(1)
  01ae14c  li 7, 6
  01ae150  stb 6, 146(1)
  01ae154  li 4, 7
  01ae158  stb 3, 148(1)
  01ae15c  li 6, 8
  01ae160  stb 8, 147(1)
  01ae164  li 3, 9
  01ae168  stb 5, 149(1)
  01ae16c  stb 7, 150(1)
  01ae170  ori 26, 29, 0
  01ae174  stb 4, 151(1)
  01ae178  stb 6, 152(1)
  01ae17c  stb 3, 153(1)
  01ae180  ori 28, 1, 0
  01ae184  ori 27, 29, 0
  01ae188  li 3, 9
  01ae18c  bl 0xfc620
  01ae190  nop
  01ae194  cmpw 27, 3
  01ae198  bf 0, 0x1ae1b8
  01ae19c  lbz 3, 145(28)
  01ae1a0  addic 27, 27, 1
  01ae1a4  lbz 4, 144(28)
  01ae1a8  stb 3, 144(28)
  01ae1ac  stb 4, 145(28)
  01ae1b0  addic 28, 28, 1
  01ae1b4  b 0x1ae188
  01ae1b8  addic 26, 26, 1
  01ae1bc  cmpwi 26, 10
  01ae1c0  bt 0, 0x1ae180
  01ae1c4  lwz 3, 4(30)
  01ae1c8  cmpwi 3, 0
  01ae1cc  bf 1, 0x1ae1f8
  01ae1d0  ori 4, 1, 0
  01ae1d4  ori 3, 30, 0
  01ae1d8  lbz 5, 144(4)
  01ae1dc  addic 29, 29, 1
  01ae1e0  lwz 6, 4(30)
  01ae1e4  stb 5, 16(3)
  01ae1e8  addic 4, 4, 1
  01ae1ec  cmpw 29, 6
  01ae1f0  addic 3, 3, 1
  01ae1f4  bt 0, 0x1ae1d8
  01ae1f8  lis 3, 27
  01ae1fc  lfs 1, 72(31)
  01ae200  addi 29, 3, -8120
  01ae204  lfs 2, 0(29)
  01ae208  bl 0x502578
  01ae20c  nop
  01ae210  li 3, 96
  01ae214  stfs 1, 72(31)
  01ae218  li 4, 1
  01ae21c  li 5, -1
  01ae220  stb 3, 48(31)
  01ae224  lis 3, 117
  01ae228  stb 4, 32(31)
  01ae22c  stw 5, 48(30)
  01ae230  lfs 1, 4(29)
  01ae234  lfs 2, 31376(3)
  01ae238  fmuls 1, 2, 1
  01ae23c  bl 0x502758
  01ae240  nop
  01ae244  extsw 3, 3
  01ae248  li 4, 52
  01ae24c  std 3, 160(1)
  01ae250  lis 3, 114
  01ae254  lfs 1, 8(29)
  01ae258  lfs 2, -3056(3)
  01ae25c  lfd 3, 160(1)
  01ae260  fcfid 3, 3
  01ae264  frsp 3, 3
  01ae268  fadds 1, 3, 1
  01ae26c  fmuls 1, 2, 1
  01ae270  fctiwz 1, 1
  01ae274  stfiwx 1, 4, 30
  01ae278  lhz 3, 52(31)
  01ae27c  ori 3, 3, 65
  01ae280  sth 3, 52(31)
  01ae284  b 0x1ae5a4
  01ae288  lwz 3, 4(30)
  01ae28c  li 4, 8
  01ae290  extsw 3, 3
  01ae294  addi 5, 4, 16
  01ae298  li 6, 8
  01ae29c  std 3, 160(1)
  01ae2a0  lis 3, 27
  01ae2a4  lfs 1, 8(30)
  01ae2a8  addi 3, 3, -8120
  01ae2ac  lvlx 2, 4, 30
  01ae2b0  lis 4, 149
  01ae2b4  addic 4, 4, 5056
  01ae2b8  lfs 2, 8(3)
  01ae2bc  lvrx 3, 5, 30
  01ae2c0  lvlx 4, 6, 3
  01ae2c4  lfs 3, 0(30)
  01ae2c8  lfs 4, 16(31)
  01ae2cc  lfd 5, 160(1)
  01ae2d0  fmuls 3, 3, 2
  01ae2d4  stfs 4, 112(1)
  01ae2d8  fcfid 5, 5
  01ae2dc  lfs 6, 20(31)
  01ae2e0  lfs 7, 324(4)
  01ae2e4  stfs 6, 116(1)
  01ae2e8  fsubs 6, 6, 7
  01ae2ec  lfs 8, 320(4)
  01ae2f0  lfs 7, 24(31)
  01ae2f4  fsubs 4, 4, 8
  01ae2f8  fmuls 3, 3, 3
  01ae2fc  frsp 5, 5
  01ae300  li 5, 4
  01ae304  vor 2, 2, 3
  01ae308  addi 6, 5, 16
  01ae30c  fmuls 6, 6, 6
  01ae310  vspltw 4, 4, 0
  01ae314  fmuls 1, 5, 1
  01ae318  lfs 5, 328(4)
  01ae31c  fsubs 5, 7, 5
  01ae320  li 4, 24
  01ae324  lvlx 5, 5, 30
  01ae328  lvrx 6, 6, 30
  01ae32c  vor 5, 5, 6
  01ae330  vspltisw 6, -1
  01ae334  fmuls 1, 1, 2
  01ae338  fmadds 2, 4, 4, 6
  01ae33c  vcfsx 5, 5, 0
  01ae340  vslw 3, 6, 6
  01ae344  li 5, 120
  01ae348  fmadds 1, 1, 1, 3
  01ae34c  fmadds 2, 5, 5, 2
  01ae350  vmaddfp 2, 5, 2, 3
  01ae354  lvlx 3, 4, 31
  01ae358  fsqrts 1, 1
  01ae35c  fsqrts 2, 2
  01ae360  vmaddfp 2, 2, 4, 3
  01ae364  vspltw 2, 2, 0
  01ae368  stvewx 2, 5, 1
  01ae36c  stfs 1, 124(1)
  01ae370  lfs 1, 12(3)
  01ae374  fcmpu 0, 2, 1
  01ae378  cror 6, 1, 2
  01ae37c  bt 6, 0x1ae3c8
  01ae380  addic 3, 1, 112
  01ae384  bl 0x502910
  01ae388  nop
  01ae38c  extsw 3, 3
  01ae390  std 3, 160(1)
  01ae394  lis 3, 27
  01ae398  addi 3, 3, -8120
  01ae39c  lfs 1, 16(3)
  01ae3a0  lfd 2, 160(1)
  01ae3a4  fcfid 2, 2
  01ae3a8  frsp 2, 2
  01ae3ac  fcmpu 0, 2, 1
  01ae3b0  bt 0, 0x1ae3c8
  01ae3b4  lis 3, 113
  01ae3b8  ori 4, 31, 0
  01ae3bc  addic 3, 3, -30472
  01ae3c0  bl 0x6d7e0
  01ae3c4  nop
  01ae3c8  ori 3, 31, 0
  01ae3cc  lwz 4, 48(30)
  01ae3d0  extsw 4, 4
  01ae3d4  bl 0x15cc7c
  01ae3d8  nop
  01ae3dc  cmpwi 3, 0
  01ae3e0  bf 2, 0x1ae5a4
  01ae3e4  li 3, 0
  01ae3e8  li 4, 4
  01ae3ec  ori 5, 31, 0
  01ae3f0  bl 0x15d12c
  01ae3f4  nop
  01ae3f8  stw 3, 48(30)
  01ae3fc  b 0x1ae5a4
  01ae400  addic 3, 30, 52
  01ae404  bl 0x4fff60
  01ae408  nop
  01ae40c  lwz 4, 48(30)
  01ae410  cmpwi 4, -1
  01ae414  bt 2, 0x1ae45c
  01ae418  sldi 3, 4, 7
  01ae41c  sldi 6, 4, 4
  01ae420  lis 5, 150
  01ae424  subc 3, 3, 6
  01ae428  addic 5, 5, 14312
  01ae42c  extsw 3, 3
  01ae430  lwzx 5, 5, 3
  01ae434  cmpw 5, 31
  01ae438  bf 2, 0x1ae45c
  01ae43c  lis 5, 150
  01ae440  addic 5, 5, 14292
  01ae444  lbzx 3, 5, 3
  01ae448  cmpwi 3, 0
  01ae44c  bt 2, 0x1ae45c
  01ae450  extsw 3, 4
  01ae454  bl 0x15cdb0
  01ae458  nop
  01ae45c  lwz 4, 4(30)
  01ae460  li 3, -1
  01ae464  li 6, 8
  01ae468  extsw 4, 4
  01ae46c  stw 3, 48(30)
  01ae470  lis 3, 27
  01ae474  std 4, 160(1)
  01ae478  li 4, 8
  01ae47c  addi 3, 3, -8120
  01ae480  lfs 1, 8(30)
  01ae484  addi 5, 4, 16
  01ae488  lvlx 2, 4, 30
  01ae48c  lfs 2, 8(3)
  01ae490  lis 4, 149
  01ae494  lvrx 3, 5, 30
  01ae498  lfs 3, 0(30)
  01ae49c  lvlx 4, 6, 3
  01ae4a0  addic 4, 4, 5056
  01ae4a4  lfs 4, 16(31)
  01ae4a8  fmuls 3, 3, 2
  01ae4ac  stfs 4, 128(1)
  01ae4b0  lfs 5, 20(31)
  01ae4b4  lfd 6, 160(1)
  01ae4b8  lfs 7, 324(4)
  01ae4bc  fcfid 6, 6
  01ae4c0  stfs 5, 132(1)
  01ae4c4  fsubs 5, 5, 7
  01ae4c8  lfs 7, 320(4)
  01ae4cc  lfs 8, 24(31)
  01ae4d0  fsubs 4, 4, 7
  01ae4d4  fmuls 3, 3, 3
  01ae4d8  lfs 7, 328(4)
  01ae4dc  li 5, 4
  01ae4e0  vor 2, 2, 3
  01ae4e4  li 4, 24
  01ae4e8  frsp 6, 6
  01ae4ec  fmuls 5, 5, 5
  01ae4f0  addi 6, 5, 16
  01ae4f4  lvlx 5, 5, 30
  01ae4f8  vspltw 4, 4, 0
  01ae4fc  li 5, 136
  01ae500  lvrx 6, 6, 30
  01ae504  vor 5, 5, 6
  01ae508  fmuls 1, 6, 1
  01ae50c  fsubs 6, 8, 7
  01ae510  fmadds 4, 4, 4, 5
  01ae514  vcfsx 5, 5, 0
  01ae518  vspltisw 6, -1
  01ae51c  vslw 3, 6, 6
  01ae520  fmuls 1, 1, 2
  01ae524  fmadds 2, 6, 6, 4
  01ae528  vmaddfp 2, 5, 2, 3
  01ae52c  lvlx 3, 4, 31
  01ae530  fmadds 1, 1, 1, 3
  01ae534  fsqrts 2, 2
  01ae538  fsqrts 1, 1
  01ae53c  vmaddfp 2, 2, 4, 3
  01ae540  vspltw 2, 2, 0
  01ae544  stvewx 2, 5, 1
  01ae548  stfs 1, 140(1)
  01ae54c  lfs 1, 12(3)
  01ae550  fcmpu 0, 2, 1
  01ae554  cror 6, 1, 2
  01ae558  bt 6, 0x1ae5a4
  01ae55c  addic 3, 1, 128
  01ae560  bl 0x502910
  01ae564  nop
  01ae568  extsw 3, 3
  01ae56c  lis 4, 27
  01ae570  std 3, 160(1)
  01ae574  addi 3, 4, -8120
  01ae578  lfs 1, 16(3)
  01ae57c  lfd 2, 160(1)
  01ae580  fcfid 2, 2
  01ae584  frsp 2, 2
  01ae588  fcmpu 0, 2, 1
  01ae58c  bt 0, 0x1ae5a4
  01ae590  lis 3, 113
  01ae594  ori 4, 31, 0
  01ae598  addic 3, 3, -30472
  01ae59c  bl 0x6d7e0
  01ae5a0  nop
  01ae5a4  ld 0, 240(1)
  01ae5a8  mtlr 0
  01ae5ac  ld 26, 176(1)
  01ae5b0  ld 27, 184(1)
  01ae5b4  ld 28, 192(1)
  01ae5b8  ld 29, 200(1)
  01ae5bc  ld 30, 208(1)
  01ae5c0  ld 31, 216(1)
  01ae5c4  addi 1, 1, 224
  01ae5c8  blr

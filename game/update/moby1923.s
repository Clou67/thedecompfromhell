# game/update/moby1923.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1923_002dbe78:   # 0x2dbe78, 0xa8 bytes
  02dbe78  stdu 1, -128(1)
  02dbe7c  mflr 0
  02dbe80  std 0, 144(1)
  02dbe84  lis 4, 165
  02dbe88  sldi 3, 3, 2
  02dbe8c  addic 4, 4, -28284
  02dbe90  std 30, 112(1)
  02dbe94  extsw 3, 3
  02dbe98  lwzx 30, 4, 3
  02dbe9c  std 31, 120(1)
  02dbea0  cmpwi 30, 0
  02dbea4  bf 2, 0x2dbeb0
  02dbea8  li 3, 0
  02dbeac  b 0x2dbf08
  02dbeb0  lis 3, 164
  02dbeb4  lhz 4, 0(30)
  02dbeb8  rlwinm 4, 4, 8, 9, 23
  02dbebc  lwz 3, -28512(3)
  02dbec0  addc 31, 3, 4
  02dbec4  clrldi 31, 31, 32
  02dbec8  lhz 3, 166(31)
  02dbecc  cmpwi 3, 270
  02dbed0  bf 2, 0x2dbef0
  02dbed4  ori 3, 31, 0
  02dbed8  bl 0x321970
  02dbedc  nop
  02dbee0  cmpwi 3, 0
  02dbee4  bt 2, 0x2dbef0
  02dbee8  ori 3, 31, 0
  02dbeec  b 0x2dbf08
  02dbef0  lhz 3, 0(30)
  02dbef4  addic 30, 30, 2
  02dbef8  extsh 3, 3
  02dbefc  cmpwi 3, 0
  02dbf00  bf 0, 0x2dbeb0
  02dbf04  li 3, 0
  02dbf08  ld 0, 144(1)
  02dbf0c  mtlr 0
  02dbf10  ld 30, 112(1)
  02dbf14  ld 31, 120(1)
  02dbf18  addi 1, 1, 128
  02dbf1c  blr

UpdateMoby_1923:   # 0x2dbf30, 0x374 bytes
  02dbf30  stdu 1, -192(1)
  02dbf34  mflr 0
  02dbf38  std 0, 208(1)
  02dbf3c  std 30, 176(1)
  02dbf40  std 28, 160(1)
  02dbf44  ori 30, 3, 0
  02dbf48  lis 28, 151
  02dbf4c  std 29, 168(1)
  02dbf50  addic 28, 28, -25376
  02dbf54  lwz 29, 120(30)
  02dbf58  addic 3, 28, 128
  02dbf5c  lwz 4, 8(29)
  02dbf60  std 31, 184(1)
  02dbf64  std 27, 152(1)
  02dbf68  extsw 4, 4
  02dbf6c  bl 0x110b70
  02dbf70  nop
  02dbf74  cmpwi 3, 0
  02dbf78  bt 2, 0x2dc280
  02dbf7c  lis 3, 164
  02dbf80  lwz 3, -28512(3)
  02dbf84  lwz 4, 4(29)
  02dbf88  lbz 5, 32(30)
  02dbf8c  slwi 4, 4, 8
  02dbf90  cmpwi 5, 0
  02dbf94  addc 31, 3, 4
  02dbf98  cmpwi 1, 5, -1
  02dbf9c  clrldi 31, 31, 32
  02dbfa0  cmpwi 6, 5, 1
  02dbfa4  cmpwi 7, 5, 2
  02dbfa8  bt 1, 0x2dbfb4
  02dbfac  bf 5, 0x2dc280
  02dbfb0  b 0x2dbfc0
  02dbfb4  bf 25, 0x2dc018
  02dbfb8  bf 29, 0x2dc148
  02dbfbc  b 0x2dc280
  02dbfc0  li 5, 1
  02dbfc4  li 3, 180
  02dbfc8  li 4, 360
  02dbfcc  stb 5, 32(30)
  02dbfd0  bl 0xfe484
  02dbfd4  nop
  02dbfd8  extsw 3, 3
  02dbfdc  lis 4, 114
  02dbfe0  std 3, 128(1)
  02dbfe4  lis 3, 46
  02dbfe8  addi 3, 3, -16608
  02dbfec  lfs 1, 0(3)
  02dbff0  lfs 2, -3056(4)
  02dbff4  lfd 3, 128(1)
  02dbff8  li 3, 12
  02dbffc  fcfid 3, 3
  02dc000  frsp 3, 3
  02dc004  fadds 1, 3, 1
  02dc008  fmuls 1, 2, 1
  02dc00c  fctiwz 1, 1
  02dc010  stfiwx 1, 3, 29
  02dc014  b 0x2dc280
  02dc018  lfs 1, 132(28)
  02dc01c  lfs 2, 20(31)
  02dc020  lfs 3, 128(28)
  02dc024  fsubs 1, 1, 2
  02dc028  lfs 2, 16(31)
  02dc02c  fsubs 2, 3, 2
  02dc030  lis 4, 46
  02dc034  addi 4, 4, -16608
  02dc038  fmuls 1, 1, 1
  02dc03c  fmadds 1, 2, 2, 1
  02dc040  lfs 2, 4(4)
  02dc044  fsqrts 1, 1
  02dc048  fcmpu 0, 1, 2
  02dc04c  cror 6, 0, 2
  02dc050  bt 6, 0x2dc280
  02dc054  lwz 5, 0(29)
  02dc058  lis 4, 165
  02dc05c  slwi 5, 5, 2
  02dc060  addic 4, 4, -28284
  02dc064  extsw 5, 5
  02dc068  lwzx 27, 4, 5
  02dc06c  cmpwi 27, 0
  02dc070  bt 2, 0x2dc280
  02dc074  lhz 4, 0(27)
  02dc078  rlwinm 4, 4, 8, 9, 23
  02dc07c  addc 28, 3, 4
  02dc080  clrldi 28, 28, 32
  02dc084  lhz 4, 166(28)
  02dc088  cmpwi 4, 270
  02dc08c  bf 2, 0x2dc0b8
  02dc090  ori 3, 28, 0
  02dc094  bl 0x321970
  02dc098  nop
  02dc09c  lis 4, 164
  02dc0a0  cmpwi 3, 0
  02dc0a4  lwz 3, -28512(4)
  02dc0a8  bt 2, 0x2dc0b8
  02dc0ac  cmpwi 28, 0
  02dc0b0  bf 2, 0x2dc0d0
  02dc0b4  b 0x2dc280
  02dc0b8  lhz 4, 0(27)
  02dc0bc  addic 27, 27, 2
  02dc0c0  extsh 4, 4
  02dc0c4  cmpwi 4, 0
  02dc0c8  bf 0, 0x2dc074
  02dc0cc  b 0x2dc280
  02dc0d0  addic 3, 29, 12
  02dc0d4  bl 0x4fff60
  02dc0d8  nop
  02dc0dc  cmpwi 3, 0
  02dc0e0  bt 2, 0x2dc280
  02dc0e4  li 4, 2
  02dc0e8  ori 3, 31, 0
  02dc0ec  stb 4, 32(30)
  02dc0f0  bl 0x1dbce8
  02dc0f4  nop
  02dc0f8  li 3, 180
  02dc0fc  li 4, 360
  02dc100  bl 0xfe484
  02dc104  nop
  02dc108  extsw 3, 3
  02dc10c  lis 4, 114
  02dc110  std 3, 128(1)
  02dc114  lis 3, 46
  02dc118  addi 3, 3, -16608
  02dc11c  lfs 1, 0(3)
  02dc120  lfs 2, -3056(4)
  02dc124  lfd 3, 128(1)
  02dc128  li 3, 12
  02dc12c  fcfid 3, 3
  02dc130  frsp 3, 3
  02dc134  fadds 1, 3, 1
  02dc138  fmuls 1, 2, 1
  02dc13c  fctiwz 1, 1
  02dc140  stfiwx 1, 3, 29
  02dc144  b 0x2dc280
  02dc148  ori 3, 31, 0
  02dc14c  bl 0x1dbd38
  02dc150  nop
  02dc154  cmpwi 3, 0
  02dc158  bt 1, 0x2dc168
  02dc15c  cmpwi 3, -1
  02dc160  bf 1, 0x2dc280
  02dc164  b 0x2dc174
  02dc168  cmpwi 3, 2
  02dc16c  bt 2, 0x2dc180
  02dc170  b 0x2dc280
  02dc174  li 3, 1
  02dc178  stb 3, 32(30)
  02dc17c  b 0x2dc280
  02dc180  li 3, 1
  02dc184  lis 4, 165
  02dc188  addic 4, 4, -28284
  02dc18c  stb 3, 32(30)
  02dc190  lwz 3, 0(29)
  02dc194  slwi 3, 3, 2
  02dc198  extsw 3, 3
  02dc19c  lwzx 30, 4, 3
  02dc1a0  cmpwi 30, 0
  02dc1a4  bt 2, 0x2dc280
  02dc1a8  lis 3, 164
  02dc1ac  lhz 4, 0(30)
  02dc1b0  rlwinm 4, 4, 8, 9, 23
  02dc1b4  lwz 3, -28512(3)
  02dc1b8  addc 29, 3, 4
  02dc1bc  clrldi 29, 29, 32
  02dc1c0  lhz 3, 166(29)
  02dc1c4  cmpwi 3, 270
  02dc1c8  bf 2, 0x2dc1ec
  02dc1cc  ori 3, 29, 0
  02dc1d0  bl 0x321970
  02dc1d4  nop
  02dc1d8  cmpwi 3, 0
  02dc1dc  bt 2, 0x2dc1ec
  02dc1e0  cmpwi 29, 0
  02dc1e4  bf 2, 0x2dc204
  02dc1e8  b 0x2dc280
  02dc1ec  lhz 3, 0(30)
  02dc1f0  addic 30, 30, 2
  02dc1f4  extsh 3, 3
  02dc1f8  cmpwi 3, 0
  02dc1fc  bf 0, 0x2dc1a8
  02dc200  b 0x2dc280
  02dc204  lfs 1, 16(31)
  02dc208  lis 3, 46
  02dc20c  li 4, 0
  02dc210  stfs 1, 112(1)
  02dc214  lfs 1, 20(31)
  02dc218  addi 5, 3, -16608
  02dc21c  addic 3, 1, 112
  02dc220  stfs 1, 116(1)
  02dc224  lfs 1, 24(31)
  02dc228  stfs 1, 120(1)
  02dc22c  lfs 2, 28(31)
  02dc230  stfs 2, 124(1)
  02dc234  lfs 2, 8(5)
  02dc238  fadds 1, 1, 2
  02dc23c  stfs 1, 120(1)
  02dc240  lfs 1, 0(5)
  02dc244  bl 0xffb70
  02dc248  nop
  02dc24c  lfs 2, 112(1)
  02dc250  ori 3, 29, 0
  02dc254  stfs 1, 72(1)
  02dc258  stfs 2, 64(1)
  02dc25c  lfs 2, 116(1)
  02dc260  lfs 3, 124(1)
  02dc264  stfs 2, 68(1)
  02dc268  stfs 1, 120(1)
  02dc26c  stfs 3, 76(1)
  02dc270  ld 6, 72(1)
  02dc274  ld 5, 64(1)
  02dc278  bl 0x3216b8
  02dc27c  nop
  02dc280  ld 0, 208(1)
  02dc284  mtlr 0
  02dc288  ld 27, 152(1)
  02dc28c  ld 28, 160(1)
  02dc290  ld 29, 168(1)
  02dc294  ld 30, 176(1)
  02dc298  ld 31, 184(1)
  02dc29c  addi 1, 1, 192
  02dc2a0  blr

M1923_002dc2a4:   # 0x2dc2a4, 0x14 bytes
  02dc2a4  lis 3, 127
  02dc2a8  lis 4, 1
  02dc2ac  addic 3, 3, 15924
  02dc2b0  stw 4, 72(3)
  02dc2b4  blr

M1923_002dc2b8:   # 0x2dc2b8, 0x58 bytes
  02dc2b8  stdu 1, -128(1)
  02dc2bc  mflr 0
  02dc2c0  std 0, 144(1)
  02dc2c4  std 31, 120(1)
  02dc2c8  ori 31, 3, 0
  02dc2cc  bl 0x48a718
  02dc2d0  nop
  02dc2d4  cmpwi 3, 0
  02dc2d8  bt 2, 0x2dc2e8
  02dc2dc  li 4, 7
  02dc2e0  stb 4, 32(31)
  02dc2e4  b 0x2dc2fc
  02dc2e8  lbz 4, 32(31)
  02dc2ec  cmpwi 4, 7
  02dc2f0  bf 2, 0x2dc2fc
  02dc2f4  li 4, 1
  02dc2f8  stb 4, 32(31)
  02dc2fc  ld 0, 144(1)
  02dc300  mtlr 0
  02dc304  ld 31, 120(1)
  02dc308  addi 1, 1, 128
  02dc30c  blr

M1923_002dc310:   # 0x2dc310, 0x58 bytes
  02dc310  stdu 1, -128(1)
  02dc314  mflr 0
  02dc318  std 0, 144(1)
  02dc31c  std 31, 120(1)
  02dc320  ori 31, 3, 0
  02dc324  bl 0x48aa70
  02dc328  nop
  02dc32c  cmpwi 3, 0
  02dc330  bt 2, 0x2dc340
  02dc334  li 4, 7
  02dc338  stb 4, 32(31)
  02dc33c  b 0x2dc354
  02dc340  lbz 4, 32(31)
  02dc344  cmpwi 4, 7
  02dc348  bf 2, 0x2dc354
  02dc34c  li 4, 1
  02dc350  stb 4, 32(31)
  02dc354  ld 0, 144(1)
  02dc358  mtlr 0
  02dc35c  ld 31, 120(1)
  02dc360  addi 1, 1, 128
  02dc364  blr

M1923_002dc368:   # 0x2dc368, 0x58 bytes
  02dc368  stdu 1, -128(1)
  02dc36c  mflr 0
  02dc370  std 0, 144(1)
  02dc374  std 31, 120(1)
  02dc378  ori 31, 3, 0
  02dc37c  bl 0x48acb8
  02dc380  nop
  02dc384  cmpwi 3, 0
  02dc388  bt 2, 0x2dc398
  02dc38c  li 4, 7
  02dc390  stb 4, 32(31)
  02dc394  b 0x2dc3ac
  02dc398  lbz 4, 32(31)
  02dc39c  cmpwi 4, 7
  02dc3a0  bf 2, 0x2dc3ac
  02dc3a4  li 4, 1
  02dc3a8  stb 4, 32(31)
  02dc3ac  ld 0, 144(1)
  02dc3b0  mtlr 0
  02dc3b4  ld 31, 120(1)
  02dc3b8  addi 1, 1, 128
  02dc3bc  blr

M1923_002dc3c0:   # 0x2dc3c0, 0x38 bytes
  02dc3c0  stdu 1, -128(1)
  02dc3c4  mflr 0
  02dc3c8  std 0, 144(1)
  02dc3cc  std 31, 120(1)
  02dc3d0  ori 31, 3, 0
  02dc3d4  bl 0x48afe8
  02dc3d8  nop
  02dc3dc  li 4, 7
  02dc3e0  stb 4, 32(31)
  02dc3e4  ld 0, 144(1)
  02dc3e8  mtlr 0
  02dc3ec  ld 31, 120(1)
  02dc3f0  addi 1, 1, 128
  02dc3f4  blr

M1923_002dc3f8:   # 0x2dc3f8, 0x40 bytes
  02dc3f8  cmpwi 3, 0
  02dc3fc  bt 2, 0x2dc430
  02dc400  li 4, 0
  02dc404  lwz 3, 120(3)
  02dc408  li 5, 0
  02dc40c  subc 4, 4, 3
  02dc410  addic 3, 3, 96
  02dc414  cntlzw 4, 4
  02dc418  subc 5, 5, 3
  02dc41c  sldi 4, 4, 58
  02dc420  sradi 4, 4, 63
  02dc424  and 4, 4, 5
  02dc428  addc 3, 3, 4
  02dc42c  b 0x2dc434
  02dc430  li 3, 0
  02dc434  blr

M1923_002dc438:   # 0x2dc438, 0xa4 bytes
  02dc438  stdu 1, -128(1)
  02dc43c  mflr 0
  02dc440  std 0, 144(1)
  02dc444  std 30, 112(1)
  02dc448  std 31, 120(1)
  02dc44c  ori 30, 3, 0
  02dc450  ori 31, 4, 0
  02dc454  lwz 3, 120(30)
  02dc458  lwz 3, 544(3)
  02dc45c  cmpwi 3, -1
  02dc460  bt 2, 0x2dc4c0
  02dc464  lis 4, 165
  02dc468  slwi 3, 3, 2
  02dc46c  addic 4, 4, 7136
  02dc470  extsw 5, 3
  02dc474  addic 3, 30, 16
  02dc478  lwzx 5, 4, 5
  02dc47c  addic 4, 5, 16
  02dc480  lwz 5, 0(5)
  02dc484  extsw 5, 5
  02dc488  bl 0x104e44
  02dc48c  nop
  02dc490  cmpwi 3, 0
  02dc494  bf 2, 0x2dc4c0
  02dc498  lfs 1, 0(31)
  02dc49c  li 3, 2
  02dc4a0  stfs 1, 16(30)
  02dc4a4  lfs 1, 4(31)
  02dc4a8  stfs 1, 20(30)
  02dc4ac  lfs 1, 8(31)
  02dc4b0  stfs 1, 24(30)
  02dc4b4  lfs 1, 12(31)
  02dc4b8  stfs 1, 28(30)
  02dc4bc  b 0x2dc4c4
  02dc4c0  li 3, 0
  02dc4c4  ld 0, 144(1)
  02dc4c8  mtlr 0
  02dc4cc  ld 30, 112(1)
  02dc4d0  ld 31, 120(1)
  02dc4d4  addi 1, 1, 128
  02dc4d8  blr

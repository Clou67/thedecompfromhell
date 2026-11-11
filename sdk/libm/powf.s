# sdk/libm/powf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

powf:   # 0x5dcbd8, 0x61c bytes
  05dcbd8  stdu 1, -208(1)
  05dcbdc  mflr 0
  05dcbe0  addi 4, 1, 256
  05dcbe4  stfd 31, 200(1)
  05dcbe8  addi 3, 1, 112
  05dcbec  fmr 31, 2
  05dcbf0  std 29, 168(1)
  05dcbf4  addi 29, 1, 120
  05dcbf8  stfs 1, 256(1)
  05dcbfc  std 30, 176(1)
  05dcc00  std 31, 184(1)
  05dcc04  std 0, 224(1)
  05dcc08  stfs 2, 120(1)
  05dcc0c  stfd 30, 192(1)
  05dcc10  std 28, 160(1)
  05dcc14  bl 0x5e6774
  05dcc18  nop
  05dcc1c  mr 30, 3
  05dcc20  li 4, 0
  05dcc24  mr 3, 29
  05dcc28  bl 0x5dd378
  05dcc2c  nop
  05dcc30  extsh 31, 3
  05dcc34  cmpwi 7, 31, 0
  05dcc38  bf 30, 0x5dcc48
  05dcc3c  lfs 0, -23852(2)
  05dcc40  fcmpu 7, 31, 0
  05dcc44  bt 30, 0x5dcd14
  05dcc48  extsh 3, 30
  05dcc4c  cmpwi 7, 3, 0
  05dcc50  bt 28, 0x5dcdc0
  05dcc54  cmpwi 7, 3, 2
  05dcc58  bt 30, 0x5dccc0
  05dcc5c  cmpwi 7, 31, 2
  05dcc60  bt 30, 0x5dcc94
  05dcc64  cmpwi 7, 3, 1
  05dcc68  bt 30, 0x5dced8
  05dcc6c  cmpwi 7, 31, 1
  05dcc70  bt 30, 0x5dcf04
  05dcc74  stfs 31, 144(1)
  05dcc78  lwz 0, 144(1)
  05dcc7c  rlwinm 0, 0, 16, 16, 16
  05dcc80  cmpwi 7, 0, 0
  05dcc84  bf 30, 0x5dcd78
  05dcc88  cmpwi 7, 31, 0
  05dcc8c  bt 30, 0x5dcd44
  05dcc90  lfs 31, -23852(2)
  05dcc94  ld 0, 224(1)
  05dcc98  fmr 1, 31
  05dcc9c  ld 28, 160(1)
  05dcca0  ld 29, 168(1)
  05dcca4  mtlr 0
  05dcca8  ld 30, 176(1)
  05dccac  ld 31, 184(1)
  05dccb0  lfd 30, 192(1)
  05dccb4  lfd 31, 200(1)
  05dccb8  addi 1, 1, 208
  05dccbc  blr
  05dccc0  ld 0, 224(1)
  05dccc4  lfs 31, 256(1)
  05dccc8  fmr 1, 31
  05dcccc  ld 28, 160(1)
  05dccd0  ld 29, 168(1)
  05dccd4  mtlr 0
  05dccd8  ld 30, 176(1)
  05dccdc  ld 31, 184(1)
  05dcce0  lfd 30, 192(1)
  05dcce4  lfd 31, 200(1)
  05dcce8  addi 1, 1, 208
  05dccec  blr
  05dccf0  lfs 13, 256(1)
  05dccf4  lfs 0, -23892(2)
  05dccf8  fcmpu 7, 13, 0
  05dccfc  bt 30, 0x5dcd14
  05dcd00  cmpwi 7, 31, 1
  05dcd04  bf 30, 0x5dcdcc
  05dcd08  lfs 0, -23888(2)
  05dcd0c  fcmpu 7, 13, 0
  05dcd10  bf 30, 0x5dcf08
  05dcd14  ld 0, 224(1)
  05dcd18  lfs 31, -23856(2)
  05dcd1c  fmr 1, 31
  05dcd20  ld 28, 160(1)
  05dcd24  ld 29, 168(1)
  05dcd28  mtlr 0
  05dcd2c  ld 30, 176(1)
  05dcd30  ld 31, 184(1)
  05dcd34  lfd 30, 192(1)
  05dcd38  lfd 31, 200(1)
  05dcd3c  addi 1, 1, 208
  05dcd40  blr
  05dcd44  mr 3, 29
  05dcd48  li 4, -1
  05dcd4c  bl 0x5dd378
  05dcd50  nop
  05dcd54  extsh 3, 3
  05dcd58  cmpwi 7, 3, 0
  05dcd5c  bf 28, 0x5dcc90
  05dcd60  lhz 0, 256(1)
  05dcd64  rldicl 9, 0, 49, 15
  05dcd68  cmpdi 9, 0
  05dcd6c  bf 2, 0x5dcf68
  05dcd70  lfs 31, -23852(2)
  05dcd74  b 0x5dcc94
  05dcd78  lis 3, 1024
  05dcd7c  bl 0x5dd4f8
  05dcd80  nop
  05dcd84  cmpwi 7, 31, 0
  05dcd88  bt 30, 0x5dd014
  05dcd8c  lwz 9, -23884(2)
  05dcd90  ld 0, 224(1)
  05dcd94  ld 28, 160(1)
  05dcd98  ld 29, 168(1)
  05dcd9c  mtlr 0
  05dcda0  ld 30, 176(1)
  05dcda4  lfs 31, 0(9)
  05dcda8  fmr 1, 31
  05dcdac  ld 31, 184(1)
  05dcdb0  lfd 30, 192(1)
  05dcdb4  lfd 31, 200(1)
  05dcdb8  addi 1, 1, 208
  05dcdbc  blr
  05dcdc0  lhz 9, 112(1)
  05dcdc4  cmpwi 7, 9, 1
  05dcdc8  bt 30, 0x5dccf0
  05dcdcc  cmpwi 7, 31, 0
  05dcdd0  bt 29, 0x5dcc5c
  05dcdd4  lfs 12, 256(1)
  05dcdd8  stfs 12, 144(1)
  05dcddc  lwz 0, 144(1)
  05dcde0  rlwinm 0, 0, 16, 16, 16
  05dcde4  cmpwi 7, 0, 0
  05dcde8  bt 30, 0x5dcdf4
  05dcdec  cmpwi 7, 31, 0
  05dcdf0  bf 30, 0x5dd124
  05dcdf4  lfs 0, -23852(2)
  05dcdf8  li 28, 0
  05dcdfc  fcmpu 7, 12, 0
  05dce00  bf 29, 0x5dd174
  05dce04  lfs 0, -23872(2)
  05dce08  fcmpu 7, 12, 0
  05dce0c  bf 28, 0x5dce24
  05dce10  fadds 0, 12, 12
  05dce14  addi 0, 9, -1
  05dce18  mr 9, 0
  05dce1c  sth 0, 112(1)
  05dce20  stfs 0, 256(1)
  05dce24  lfs 0, -23868(2)
  05dce28  li 0, 0
  05dce2c  fcmpu 7, 31, 0
  05dce30  stw 0, 116(1)
  05dce34  cror 30, 28, 30
  05dce38  bf 30, 0x5dd044
  05dce3c  extsh 0, 9
  05dce40  cmpwi 0, 0
  05dce44  bt 0, 0x5dd064
  05dce48  bt 2, 0x5dd08c
  05dce4c  li 0, 0
  05dce50  li 30, -229
  05dce54  addi 29, 1, 116
  05dce58  lfs 30, -23856(2)
  05dce5c  lfs 12, 256(1)
  05dce60  fmr 13, 30
  05dce64  fcmpu 7, 12, 30
  05dce68  bt 30, 0x5dcfd4
  05dce6c  extsh 31, 0
  05dce70  lfs 13, -23852(2)
  05dce74  extsw 0, 31
  05dce78  std 0, 152(1)
  05dce7c  lfd 11, 152(1)
  05dce80  fcfid 11, 11
  05dce84  frsp 0, 11
  05dce88  fsubs 0, 31, 0
  05dce8c  fcmpu 7, 0, 13
  05dce90  stfs 0, 120(1)
  05dce94  bf 30, 0x5dd13c
  05dce98  fmr 1, 12
  05dce9c  srawi 0, 31, 31
  05dcea0  fmr 13, 30
  05dcea4  xor 11, 0, 31
  05dcea8  sub 11, 11, 0
  05dceac  extsh 9, 11
  05dceb0  clrlwi 0, 11, 31
  05dceb4  srwi 11, 9, 1
  05dceb8  cmpwi 7, 0, 0
  05dcebc  extsh 9, 11
  05dcec0  cmpwi 6, 9, 0
  05dcec4  bt 30, 0x5dcecc
  05dcec8  fmuls 13, 13, 1
  05dcecc  bt 26, 0x5dcfc0
  05dced0  fmuls 1, 1, 1
  05dced4  b 0x5dceb0
  05dced8  lhz 0, 256(1)
  05dcedc  rldicl 9, 0, 49, 15
  05dcee0  cmpdi 9, 0
  05dcee4  bf 2, 0x5dcf30
  05dcee8  stfs 31, 144(1)
  05dceec  lwz 0, 144(1)
  05dcef0  lfs 31, -23852(2)
  05dcef4  rlwinm 0, 0, 16, 16, 16
  05dcef8  cmpwi 7, 0, 0
  05dcefc  bt 30, 0x5dcd8c
  05dcf00  b 0x5dcc94
  05dcf04  lhz 9, 112(1)
  05dcf08  stfs 31, 144(1)
  05dcf0c  lwz 0, 144(1)
  05dcf10  rlwinm 0, 0, 16, 16, 16
  05dcf14  cmpwi 7, 0, 0
  05dcf18  bf 30, 0x5dcf78
  05dcf1c  extsh 0, 9
  05dcf20  lfs 31, -23852(2)
  05dcf24  cmpwi 7, 0, 0
  05dcf28  bt 29, 0x5dcd8c
  05dcf2c  b 0x5dcc94
  05dcf30  stfs 31, 144(1)
  05dcf34  lwz 0, 144(1)
  05dcf38  rlwinm 0, 0, 16, 16, 16
  05dcf3c  cmpwi 7, 0, 0
  05dcf40  bt 30, 0x5dcf8c
  05dcf44  cmpwi 7, 31, 0
  05dcf48  bf 30, 0x5dcc90
  05dcf4c  mr 3, 29
  05dcf50  li 4, -1
  05dcf54  bl 0x5dd378
  05dcf58  nop
  05dcf5c  extsh 3, 3
  05dcf60  cmpwi 7, 3, 0
  05dcf64  bf 28, 0x5dcc90
  05dcf68  lwz 9, -23880(2)
  05dcf6c  lfs 0, 0(9)
  05dcf70  fneg 31, 0
  05dcf74  b 0x5dcc94
  05dcf78  extsh 0, 9
  05dcf7c  lfs 31, -23852(2)
  05dcf80  cmpwi 7, 0, 0
  05dcf84  bt 29, 0x5dcc94
  05dcf88  b 0x5dcd8c
  05dcf8c  cmpwi 7, 31, 0
  05dcf90  bf 30, 0x5dcd8c
  05dcf94  mr 3, 29
  05dcf98  li 4, -1
  05dcf9c  bl 0x5dd378
  05dcfa0  nop
  05dcfa4  extsh 3, 3
  05dcfa8  cmpwi 7, 3, 0
  05dcfac  bf 28, 0x5dcd8c
  05dcfb0  lwz 9, -23884(2)
  05dcfb4  lfs 0, 0(9)
  05dcfb8  fneg 31, 0
  05dcfbc  b 0x5dcc94
  05dcfc0  lfs 0, -23852(2)
  05dcfc4  fcmpu 7, 31, 0
  05dcfc8  stfs 1, 120(1)
  05dcfcc  bf 28, 0x5dcfd4
  05dcfd0  fdivs 13, 30, 13
  05dcfd4  fmr 1, 13
  05dcfd8  mr 3, 29
  05dcfdc  extsh 5, 30
  05dcfe0  bl 0x5dd5a8
  05dcfe4  nop
  05dcfe8  extsh 3, 3
  05dcfec  cmpwi 7, 3, 0
  05dcff0  bt 30, 0x5dd07c
  05dcff4  cmpwi 7, 3, 1
  05dcff8  bt 30, 0x5dd164
  05dcffc  extsh 0, 28
  05dd000  cmpwi 7, 0, 0
  05dd004  bt 30, 0x5dd074
  05dd008  lfs 0, 116(1)
  05dd00c  fneg 31, 0
  05dd010  b 0x5dcc94
  05dd014  mr 3, 29
  05dd018  li 4, -1
  05dd01c  bl 0x5dd378
  05dd020  nop
  05dd024  extsh 3, 3
  05dd028  cmpwi 7, 3, 0
  05dd02c  bf 28, 0x5dcd8c
  05dd030  lhz 0, 256(1)
  05dd034  rldicl 9, 0, 49, 15
  05dd038  cmpdi 9, 0
  05dd03c  bt 2, 0x5dcd8c
  05dd040  b 0x5dcfb0
  05dd044  lfs 0, -23864(2)
  05dd048  fcmpu 7, 31, 0
  05dd04c  cror 30, 29, 30
  05dd050  bf 30, 0x5dd09c
  05dd054  extsh 0, 9
  05dd058  cmpwi 0, 0
  05dd05c  bt 0, 0x5dce4c
  05dd060  bt 2, 0x5dd08c
  05dd064  li 0, 0
  05dd068  li 30, 229
  05dd06c  addi 29, 1, 116
  05dd070  b 0x5dce58
  05dd074  lfs 31, 116(1)
  05dd078  b 0x5dcc94
  05dd07c  lis 3, 2048
  05dd080  bl 0x5dd4f8
  05dd084  nop
  05dd088  b 0x5dcffc
  05dd08c  li 0, 0
  05dd090  li 30, 0
  05dd094  addi 29, 1, 116
  05dd098  b 0x5dce58
  05dd09c  extsh 0, 9
  05dd0a0  addi 9, 1, 128
  05dd0a4  std 0, 152(1)
  05dd0a8  lfd 0, 152(1)
  05dd0ac  fcfid 0, 0
  05dd0b0  frsp 30, 0
  05dd0b4  fmuls 13, 31, 30
  05dd0b8  fmr 0, 13
  05dd0bc  fctiwz 0, 0
  05dd0c0  stfiwx 0, 0, 9
  05dd0c4  lwz 31, 128(1)
  05dd0c8  cmpwi 7, 31, 0
  05dd0cc  bf 30, 0x5dd19c
  05dd0d0  lfs 0, -23860(2)
  05dd0d4  addi 29, 1, 116
  05dd0d8  fmuls 0, 13, 0
  05dd0dc  stfs 0, 116(1)
  05dd0e0  cmpwi 7, 31, 229
  05dd0e4  mr 0, 31
  05dd0e8  bf 29, 0x5dd0f0
  05dd0ec  li 0, 229
  05dd0f0  mr 30, 0
  05dd0f4  fmr 0, 31
  05dd0f8  addi 9, 1, 128
  05dd0fc  fctiwz 0, 0
  05dd100  stfiwx 0, 0, 9
  05dd104  lhz 0, 130(1)
  05dd108  extsh 9, 0
  05dd10c  cmpwi 7, 9, -127
  05dd110  bt 28, 0x5dd11c
  05dd114  cmpwi 7, 9, 127
  05dd118  bf 29, 0x5dce58
  05dd11c  li 0, 0
  05dd120  b 0x5dce58
  05dd124  lis 3, 8192
  05dd128  bl 0x5dd4f8
  05dd12c  nop
  05dd130  lwz 9, -23876(2)
  05dd134  lfs 31, 0(9)
  05dd138  b 0x5dcc94
  05dd13c  fmr 1, 12
  05dd140  li 4, 0
  05dd144  bl 0x5dd718
  05dd148  nop
  05dd14c  lfs 13, 116(1)
  05dd150  lfs 0, 120(1)
  05dd154  fmadds 1, 1, 0, 13
  05dd158  lfs 12, 256(1)
  05dd15c  stfs 1, 116(1)
  05dd160  b 0x5dce98
  05dd164  lis 3, 4096
  05dd168  bl 0x5dd4f8
  05dd16c  nop
  05dd170  b 0x5dcffc
  05dd174  fneg 0, 12
  05dd178  mr 3, 29
  05dd17c  li 4, -1
  05dd180  stfs 0, 256(1)
  05dd184  bl 0x5dd378
  05dd188  nop
  05dd18c  lhz 9, 112(1)
  05dd190  mr 28, 3
  05dd194  lfs 12, 256(1)
  05dd198  b 0x5dce04
  05dd19c  addi 29, 1, 116
  05dd1a0  stfs 31, 116(1)
  05dd1a4  li 4, 16
  05dd1a8  mr 3, 29
  05dd1ac  li 30, -229
  05dd1b0  bl 0x5dd378
  05dd1b4  nop
  05dd1b8  extsw 0, 31
  05dd1bc  lfs 13, 116(1)
  05dd1c0  std 0, 152(1)
  05dd1c4  fsubs 0, 31, 13
  05dd1c8  lfd 11, 152(1)
  05dd1cc  cmpwi 7, 31, -229
  05dd1d0  fcfid 11, 11
  05dd1d4  frsp 12, 11
  05dd1d8  lfs 11, -23860(2)
  05dd1dc  fmsubs 13, 30, 13, 12
  05dd1e0  fmadds 0, 30, 0, 13
  05dd1e4  fmuls 0, 0, 11
  05dd1e8  stfs 0, 116(1)
  05dd1ec  bf 29, 0x5dd0f4
  05dd1f0  b 0x5dd0e0

# game/update/moby570.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003bcd40:   # 0x3bcd40, 0x4ac bytes
  03bcd40  stdu 1, -224(1)
  03bcd44  mflr 0
  03bcd48  std 0, 240(1)
  03bcd4c  stfd 31, 216(1)
  03bcd50  lis 7, 165
  03bcd54  sldi 4, 4, 2
  03bcd58  std 27, 176(1)
  03bcd5c  fmr 31, 1
  03bcd60  addic 27, 7, -28284
  03bcd64  std 31, 208(1)
  03bcd68  extsw 4, 4
  03bcd6c  std 30, 200(1)
  03bcd70  ori 31, 3, 0
  03bcd74  std 29, 192(1)
  03bcd78  ori 30, 5, 0
  03bcd7c  std 28, 184(1)
  03bcd80  ori 29, 6, 0
  03bcd84  ori 28, 8, 0
  03bcd88  lwzx 27, 27, 4
  03bcd8c  std 26, 168(1)
  03bcd90  cmpwi 27, 0
  03bcd94  bf 2, 0x3bcda0
  03bcd98  li 3, 0
  03bcd9c  b 0x3bd1c0
  03bcda0  lis 4, 164
  03bcda4  ori 3, 27, 0
  03bcda8  li 27, 0
  03bcdac  ori 26, 27, 0
  03bcdb0  lwz 4, -28512(4)
  03bcdb4  lhz 5, 0(3)
  03bcdb8  rlwinm 5, 5, 8, 9, 23
  03bcdbc  addc 5, 4, 5
  03bcdc0  clrldi 5, 5, 32
  03bcdc4  lhz 6, 166(5)
  03bcdc8  cmpwi 6, 568
  03bcdcc  bf 2, 0x3bcde0
  03bcdd0  lbz 6, 32(5)
  03bcdd4  cmpwi 6, 5
  03bcdd8  bf 2, 0x3bcde0
  03bcddc  ori 27, 5, 0
  03bcde0  lhz 5, 0(3)
  03bcde4  addic 3, 3, 2
  03bcde8  extsh 5, 5
  03bcdec  cmpwi 5, 0
  03bcdf0  bf 0, 0x3bcdb4
  03bcdf4  cmpwi 27, 0
  03bcdf8  bt 2, 0x3bd1bc
  03bcdfc  li 3, 255
  03bce00  lhz 6, 52(27)
  03bce04  li 4, -66
  03bce08  li 5, 1
  03bce0c  stb 3, 48(27)
  03bce10  sth 3, 50(27)
  03bce14  and 3, 6, 4
  03bce18  stb 5, 49(27)
  03bce1c  ori 3, 3, 4096
  03bce20  stb 5, 32(27)
  03bce24  stb 26, 188(27)
  03bce28  lwz 4, 36(27)
  03bce2c  sth 3, 52(27)
  03bce30  lbz 3, 83(27)
  03bce34  cmpwi 3, 0
  03bce38  lwz 3, 16(4)
  03bce3c  stw 3, 148(27)
  03bce40  bt 2, 0x3bce5c
  03bce44  ori 3, 27, 0
  03bce48  li 4, 0
  03bce4c  li 5, 0
  03bce50  li 6, 1
  03bce54  bl 0xfddc0
  03bce58  nop
  03bce5c  lfs 1, 0(30)
  03bce60  lis 3, 60
  03bce64  stfs 1, 16(27)
  03bce68  lfs 1, 4(30)
  03bce6c  addi 5, 3, -13012
  03bce70  lis 4, 132
  03bce74  stfs 1, 20(27)
  03bce78  lfs 1, 8(30)
  03bce7c  stfs 1, 24(27)
  03bce80  lfs 1, 12(30)
  03bce84  stfs 1, 28(27)
  03bce88  lfs 2, 0(5)
  03bce8c  stw 26, 64(27)
  03bce90  lfs 1, 23872(4)
  03bce94  fneg 1, 1
  03bce98  stfs 1, 68(27)
  03bce9c  lfs 1, 4(29)
  03bcea0  lfs 3, 4(30)
  03bcea4  lfs 4, 0(29)
  03bcea8  fsubs 5, 1, 3
  03bceac  lfs 6, 0(30)
  03bceb0  lfs 7, 4(5)
  03bceb4  fsubs 4, 4, 6
  03bceb8  lfs 8, 8(29)
  03bcebc  fadds 7, 8, 7
  03bcec0  fmuls 1, 5, 5
  03bcec4  stfs 7, 8(29)
  03bcec8  fmadds 1, 4, 4, 1
  03bcecc  lfs 9, 23872(4)
  03bced0  lfs 10, 8(30)
  03bced4  stfs 5, 116(1)
  03bced8  stfs 4, 112(1)
  03bcedc  fsqrts 8, 1
  03bcee0  lfs 1, 12(29)
  03bcee4  stfs 1, 124(1)
  03bcee8  lis 6, 114
  03bceec  ori 3, 30, 0
  03bcef0  addic 4, 1, 112
  03bcef4  li 7, 0
  03bcef8  fmr 1, 31
  03bcefc  fmr 31, 2
  03bcf00  fsubs 2, 7, 10
  03bcf04  fadds 7, 2, 10
  03bcf08  stfs 2, 120(1)
  03bcf0c  stfs 7, 120(1)
  03bcf10  fsubs 2, 8, 9
  03bcf14  fsub 7, 31, 8
  03bcf18  fsub 10, 31, 8
  03bcf1c  fsub 9, 8, 31
  03bcf20  fdivs 2, 2, 8
  03bcf24  fsub 8, 8, 31
  03bcf28  fmuls 5, 5, 2
  03bcf2c  fmuls 2, 4, 2
  03bcf30  fsel 4, 7, 31, 5
  03bcf34  fsel 7, 10, 31, 2
  03bcf38  fsel 4, 9, 4, 5
  03bcf3c  fsel 2, 8, 7, 2
  03bcf40  fadds 3, 4, 3
  03bcf44  fadds 2, 2, 6
  03bcf48  stfs 3, 116(1)
  03bcf4c  stfs 2, 112(1)
  03bcf50  lwz 29, 120(27)
  03bcf54  stfs 2, 368(29)
  03bcf58  lfs 2, 116(1)
  03bcf5c  stfs 2, 372(29)
  03bcf60  lfs 2, 120(1)
  03bcf64  stfs 2, 376(29)
  03bcf68  lfs 2, 124(1)
  03bcf6c  stfs 2, 380(29)
  03bcf70  lfs 2, 112(1)
  03bcf74  lfs 3, 0(30)
  03bcf78  fsubs 2, 2, 3
  03bcf7c  stfs 2, 384(29)
  03bcf80  lfs 3, 116(1)
  03bcf84  lfs 4, 4(30)
  03bcf88  fsubs 3, 3, 4
  03bcf8c  fmuls 4, 3, 3
  03bcf90  stfs 3, 388(29)
  03bcf94  lfs 5, 120(1)
  03bcf98  lfs 6, 8(30)
  03bcf9c  fsubs 5, 5, 6
  03bcfa0  fmadds 4, 2, 2, 4
  03bcfa4  fsqrts 4, 4
  03bcfa8  stfs 5, 392(29)
  03bcfac  lfs 5, 124(1)
  03bcfb0  stw 26, 392(29)
  03bcfb4  sth 26, 200(29)
  03bcfb8  fdivs 6, 1, 4
  03bcfbc  fsub 7, 31, 4
  03bcfc0  fsub 8, 31, 4
  03bcfc4  fsub 9, 4, 31
  03bcfc8  fsub 4, 4, 31
  03bcfcc  fmuls 2, 2, 6
  03bcfd0  fmuls 3, 3, 6
  03bcfd4  fsel 6, 7, 31, 2
  03bcfd8  fsel 7, 8, 31, 3
  03bcfdc  fsel 2, 9, 6, 2
  03bcfe0  fsel 3, 4, 7, 3
  03bcfe4  stfs 2, 384(29)
  03bcfe8  stfs 3, 388(29)
  03bcfec  lfs 2, 8(5)
  03bcff0  lfs 3, -3048(6)
  03bcff4  stfs 5, 396(29)
  03bcff8  fmuls 2, 3, 2
  03bcffc  bl 0x108180
  03bd000  nop
  03bd004  lwz 3, 384(29)
  03bd008  lwz 4, 388(29)
  03bd00c  lfs 2, 384(29)
  03bd010  lfs 3, 388(29)
  03bd014  fabs 5, 2
  03bd018  fabs 3, 3
  03bd01c  stfs 1, 392(29)
  03bd020  rlwinm 4, 4, 3, 29, 29
  03bd024  lis 5, 115
  03bd028  addic 5, 5, 22784
  03bd02c  fsubs 1, 5, 3
  03bd030  stfs 1, 128(1)
  03bd034  lwz 6, 128(1)
  03bd038  lfs 1, 128(1)
  03bd03c  rlwimi 4, 6, 2, 30, 30
  03bd040  fsub 4, 1, 31
  03bd044  fsub 6, 1, 31
  03bd048  rlwimi 4, 3, 4, 28, 28
  03bd04c  ori 3, 5, 0
  03bd050  rlwimi 3, 4, 2, 26, 28
  03bd054  slwi 4, 4, 2
  03bd058  clrldi 3, 3, 32
  03bd05c  fsel 4, 4, 5, 3
  03bd060  lfsx 1, 5, 4
  03bd064  fsel 3, 6, 3, 5
  03bd068  lfs 2, 4(3)
  03bd06c  fcmpu 0, 4, 31
  03bd070  bt 1, 0x3bd078
  03bd074  b 0x3bd198
  03bd078  fsubs 5, 3, 4
  03bd07c  fadds 3, 3, 4
  03bd080  addic 3, 1, 16
  03bd084  li 6, 2
  03bd088  addic 4, 3, 116
  03bd08c  addic 5, 3, 132
  03bd090  mtctr 6
  03bd094  fdivs 3, 5, 3
  03bd098  fmuls 4, 3, 3
  03bd09c  stfs 3, 144(1)
  03bd0a0  stfs 3, 136(1)
  03bd0a4  stfs 3, 140(1)
  03bd0a8  stfs 3, 132(1)
  03bd0ac  lfs 6, 144(1)
  03bd0b0  lfs 7, 136(1)
  03bd0b4  lfs 8, 140(1)
  03bd0b8  fmuls 5, 4, 4
  03bd0bc  fmuls 7, 7, 4
  03bd0c0  fmuls 6, 6, 5
  03bd0c4  fmuls 3, 5, 5
  03bd0c8  fmuls 5, 8, 5
  03bd0cc  stfs 7, 136(1)
  03bd0d0  fmuls 4, 6, 4
  03bd0d4  stfs 5, 140(1)
  03bd0d8  stfs 4, 144(1)
  03bd0dc  lfs 4, 116(3)
  03bd0e0  fmuls 4, 4, 3
  03bd0e4  stfs 4, 132(3)
  03bd0e8  lfs 4, 4(4)
  03bd0ec  addic 3, 3, 8
  03bd0f0  addic 4, 4, 8
  03bd0f4  fmuls 4, 4, 3
  03bd0f8  stfs 4, 4(5)
  03bd0fc  addic 5, 5, 8
  03bd100  bdnz 0x3bd0dc
  03bd104  ori 3, 1, 0
  03bd108  lis 4, 115
  03bd10c  li 8, 4
  03bd110  addic 5, 3, 132
  03bd114  addic 4, 4, 22752
  03bd118  ori 7, 5, 0
  03bd11c  mtctr 8
  03bd120  lfs 3, 132(3)
  03bd124  lfs 4, 0(4)
  03bd128  fmuls 3, 3, 4
  03bd12c  lfs 4, 4(4)
  03bd130  addic 4, 4, 8
  03bd134  stfs 3, 132(3)
  03bd138  lfs 3, 4(5)
  03bd13c  addic 3, 3, 8
  03bd140  fmuls 3, 3, 4
  03bd144  stfs 3, 4(5)
  03bd148  addic 5, 5, 8
  03bd14c  bdnz 0x3bd120
  03bd150  ori 3, 1, 0
  03bd154  mtctr 6
  03bd158  lfs 3, 132(3)
  03bd15c  lfs 4, 4(7)
  03bd160  fadds 3, 31, 3
  03bd164  lfs 5, 8(7)
  03bd168  lfs 31, 12(7)
  03bd16c  addic 3, 3, 16
  03bd170  addic 7, 7, 16
  03bd174  fadds 3, 3, 4
  03bd178  fadds 3, 3, 5
  03bd17c  fadds 31, 3, 31
  03bd180  bdnz 0x3bd158
  03bd184  lis 3, 60
  03bd188  addi 3, 3, -13012
  03bd18c  lfs 3, 12(3)
  03bd190  fadds 31, 31, 3
  03bd194  fmadds 31, 31, 1, 2
  03bd198  stfs 31, 72(27)
  03bd19c  li 3, 0
  03bd1a0  stw 28, 404(29)
  03bd1a4  li 4, 0
  03bd1a8  stw 31, 408(29)
  03bd1ac  ori 5, 27, 0
  03bd1b0  stw 26, 412(29)
  03bd1b4  bl 0x15d12c
  03bd1b8  nop
  03bd1bc  ori 3, 27, 0
  03bd1c0  ld 0, 240(1)
  03bd1c4  mtlr 0
  03bd1c8  lfd 31, 216(1)
  03bd1cc  ld 26, 168(1)
  03bd1d0  ld 27, 176(1)
  03bd1d4  ld 28, 184(1)
  03bd1d8  ld 29, 192(1)
  03bd1dc  ld 30, 200(1)
  03bd1e0  ld 31, 208(1)
  03bd1e4  addi 1, 1, 224
  03bd1e8  blr

M570_003bd1ec:   # 0x3bd1ec, 0x90 bytes
  03bd1ec  stdu 1, -128(1)
  03bd1f0  mflr 0
  03bd1f4  std 0, 144(1)
  03bd1f8  std 31, 120(1)
  03bd1fc  std 30, 112(1)
  03bd200  ori 31, 3, 0
  03bd204  lwz 30, 120(31)
  03bd208  bl 0x48a718
  03bd20c  nop
  03bd210  cmpwi 3, 0
  03bd214  bt 2, 0x3bd250
  03bd218  lbz 3, 32(31)
  03bd21c  cmpwi 3, 3
  03bd220  cmpwi 1, 3, 4
  03bd224  bt 2, 0x3bd22c
  03bd228  bf 6, 0x3bd244
  03bd22c  bt 6, 0x3bd23c
  03bd230  li 4, 4
  03bd234  stb 3, 188(31)
  03bd238  stb 4, 32(31)
  03bd23c  li 3, 2
  03bd240  b 0x3bd264
  03bd244  li 3, 0
  03bd248  sth 3, 200(30)
  03bd24c  b 0x3bd264
  03bd250  lbz 4, 32(31)
  03bd254  cmpwi 4, 4
  03bd258  bf 2, 0x3bd264
  03bd25c  lbz 4, 188(31)
  03bd260  stb 4, 32(31)
  03bd264  ld 0, 144(1)
  03bd268  mtlr 0
  03bd26c  ld 30, 112(1)
  03bd270  ld 31, 120(1)
  03bd274  addi 1, 1, 128
  03bd278  blr

M570_003bd27c:   # 0x3bd27c, 0x58 bytes
  03bd27c  stdu 1, -128(1)
  03bd280  mflr 0
  03bd284  std 0, 144(1)
  03bd288  std 31, 120(1)
  03bd28c  ori 31, 3, 0
  03bd290  bl 0x48aa70
  03bd294  nop
  03bd298  cmpwi 3, 0
  03bd29c  bt 2, 0x3bd2ac
  03bd2a0  li 4, 4
  03bd2a4  stb 4, 32(31)
  03bd2a8  b 0x3bd2c0
  03bd2ac  lbz 4, 32(31)
  03bd2b0  cmpwi 4, 4
  03bd2b4  bf 2, 0x3bd2c0
  03bd2b8  lbz 4, 188(31)
  03bd2bc  stb 4, 32(31)
  03bd2c0  ld 0, 144(1)
  03bd2c4  mtlr 0
  03bd2c8  ld 31, 120(1)
  03bd2cc  addi 1, 1, 128
  03bd2d0  blr

M570_003bd2d4:   # 0x3bd2d4, 0x58 bytes
  03bd2d4  stdu 1, -128(1)
  03bd2d8  mflr 0
  03bd2dc  std 0, 144(1)
  03bd2e0  std 31, 120(1)
  03bd2e4  ori 31, 3, 0
  03bd2e8  bl 0x48acb8
  03bd2ec  nop
  03bd2f0  cmpwi 3, 0
  03bd2f4  bt 2, 0x3bd304
  03bd2f8  li 4, 4
  03bd2fc  stb 4, 32(31)
  03bd300  b 0x3bd318
  03bd304  lbz 4, 32(31)
  03bd308  cmpwi 4, 4
  03bd30c  bf 2, 0x3bd318
  03bd310  lbz 4, 188(31)
  03bd314  stb 4, 32(31)
  03bd318  ld 0, 144(1)
  03bd31c  mtlr 0
  03bd320  ld 31, 120(1)
  03bd324  addi 1, 1, 128
  03bd328  blr

M570_003bd32c:   # 0x3bd32c, 0x24 bytes
  03bd32c  stdu 1, -112(1)
  03bd330  mflr 0
  03bd334  std 0, 128(1)
  03bd338  bl 0x48afe8
  03bd33c  nop
  03bd340  ld 0, 128(1)
  03bd344  mtlr 0
  03bd348  addi 1, 1, 112
  03bd34c  blr

M570_003bd350:   # 0x3bd350, 0x40 bytes
  03bd350  cmpwi 3, 0
  03bd354  bt 2, 0x3bd388
  03bd358  li 4, 0
  03bd35c  lwz 3, 120(3)
  03bd360  li 5, 0
  03bd364  subc 4, 4, 3
  03bd368  addic 3, 3, 96
  03bd36c  cntlzw 4, 4
  03bd370  subc 5, 5, 3
  03bd374  sldi 4, 4, 58
  03bd378  sradi 4, 4, 63
  03bd37c  and 4, 4, 5
  03bd380  addc 3, 3, 4
  03bd384  b 0x3bd38c
  03bd388  li 3, 0
  03bd38c  blr

M570_003bd398:   # 0x3bd398, 0x94 bytes
  03bd398  stdu 1, -144(1)
  03bd39c  mflr 0
  03bd3a0  std 0, 160(1)
  03bd3a4  li 4, 5
  03bd3a8  std 31, 136(1)
  03bd3ac  lbz 5, 83(3)
  03bd3b0  ori 31, 3, 0
  03bd3b4  cmpwi 5, 0
  03bd3b8  stb 4, 32(3)
  03bd3bc  bt 2, 0x3bd3fc
  03bd3c0  lis 3, 60
  03bd3c4  lis 4, 114
  03bd3c8  addi 3, 3, -11376
  03bd3cc  li 5, 0
  03bd3d0  lfs 1, 0(3)
  03bd3d4  lfs 2, -3056(4)
  03bd3d8  ori 3, 31, 0
  03bd3dc  li 4, 0
  03bd3e0  fmuls 1, 2, 1
  03bd3e4  fctiwz 1, 1
  03bd3e8  stfd 1, 112(1)
  03bd3ec  lwz 6, 116(1)
  03bd3f0  extsw 6, 6
  03bd3f4  bl 0xfddc0
  03bd3f8  nop
  03bd3fc  lhz 4, 52(31)
  03bd400  li 3, 0
  03bd404  ori 4, 4, 1
  03bd408  rlwimi 4, 3, 0, 19, 19
  03bd40c  stb 3, 49(31)
  03bd410  stw 3, 148(31)
  03bd414  sth 4, 52(31)
  03bd418  ld 0, 160(1)
  03bd41c  mtlr 0
  03bd420  ld 31, 136(1)
  03bd424  addi 1, 1, 144
  03bd428  blr

M570_003bd42c:   # 0x3bd42c, 0x14 bytes
  03bd42c  lis 3, 132
  03bd430  lis 4, 1
  03bd434  addic 3, 3, 23880
  03bd438  stw 4, 72(3)
  03bd43c  blr

FUN_003bd440:   # 0x3bd440, 0xdc bytes
  03bd440  stdu 1, -160(1)
  03bd444  mflr 0
  03bd448  std 0, 176(1)
  03bd44c  std 29, 136(1)
  03bd450  ori 29, 3, 0
  03bd454  std 31, 152(1)
  03bd458  li 3, 570
  03bd45c  std 30, 144(1)
  03bd460  ori 31, 6, 0
  03bd464  std 28, 128(1)
  03bd468  ori 30, 5, 0
  03bd46c  std 27, 120(1)
  03bd470  li 28, 160
  03bd474  bl 0xefa28
  03bd478  nop
  03bd47c  ori 27, 3, 0
  03bd480  cmpwi 27, 0
  03bd484  bt 2, 0x3bd4f4
  03bd488  addc 4, 1, 28
  03bd48c  li 5, 255
  03bd490  li 6, 1
  03bd494  li 3, 0
  03bd498  std 30, 64(4)
  03bd49c  std 31, 72(4)
  03bd4a0  lhz 7, 50(29)
  03bd4a4  stb 5, 48(27)
  03bd4a8  sth 7, 50(27)
  03bd4ac  stb 6, 49(27)
  03bd4b0  lfs 1, 72(29)
  03bd4b4  stw 3, 64(27)
  03bd4b8  stw 3, 68(27)
  03bd4bc  ld 5, 56(29)
  03bd4c0  stfs 1, 72(27)
  03bd4c4  ori 3, 27, 0
  03bd4c8  std 5, 56(27)
  03bd4cc  lfs 1, 68(4)
  03bd4d0  lfs 2, 76(4)
  03bd4d4  stfs 1, 20(27)
  03bd4d8  stfs 2, 28(27)
  03bd4dc  lfs 1, 64(4)
  03bd4e0  lfs 2, 72(4)
  03bd4e4  stfs 1, 16(27)
  03bd4e8  stfs 2, 24(27)
  03bd4ec  bl 0xf31a8
  03bd4f0  nop
  03bd4f4  ori 3, 27, 0
  03bd4f8  ld 0, 176(1)
  03bd4fc  mtlr 0
  03bd500  ld 27, 120(1)
  03bd504  ld 28, 128(1)
  03bd508  ld 29, 136(1)
  03bd50c  ld 30, 144(1)
  03bd510  ld 31, 152(1)
  03bd514  addi 1, 1, 160
  03bd518  blr

UpdateMoby_570:   # 0x3bd51c, 0x4 bytes
  03bd51c  blr

# game/update/moby1060.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1060_001abea4:   # 0x1abea4, 0x14 bytes
  01abea4  lis 3, 116
  01abea8  lis 4, 1
  01abeac  addic 3, 3, 2332
  01abeb0  stw 4, 72(3)
  01abeb4  blr

M1060_001abec8:   # 0x1abec8, 0x104 bytes
  01abec8  stdu 1, -144(1)
  01abecc  mflr 0
  01abed0  std 0, 160(1)
  01abed4  stfd 30, 128(1)
  01abed8  stfd 31, 136(1)
  01abedc  lis 5, 151
  01abee0  std 31, 120(1)
  01abee4  lis 4, 27
  01abee8  ori 31, 3, 0
  01abeec  addi 4, 4, -16712
  01abef0  lwz 3, -25488(5)
  01abef4  cmpwi 3, 0
  01abef8  lfs 30, 0(4)
  01abefc  cmpwi 1, 3, 18
  01abf00  bt 2, 0x1abf08
  01abf04  bf 6, 0x1abf14
  01abf08  lis 3, 27
  01abf0c  addi 3, 3, -16712
  01abf10  lfs 30, 4(3)
  01abf14  addic 3, 1, 112
  01abf18  lbz 4, 33(31)
  01abf1c  li 5, 0
  01abf20  li 6, 0
  01abf24  bl 0x104800
  01abf28  nop
  01abf2c  lwz 3, 112(1)
  01abf30  cmpwi 3, 0
  01abf34  bt 2, 0x1abfb0
  01abf38  lis 4, 27
  01abf3c  addi 4, 4, -16712
  01abf40  lfs 31, 8(4)
  01abf44  lbz 4, 49(3)
  01abf48  cmpwi 4, 0
  01abf4c  bt 2, 0x1abf8c
  01abf50  lhz 4, 166(3)
  01abf54  lhz 5, 166(31)
  01abf58  extsh 6, 4
  01abf5c  extsh 5, 5
  01abf60  lwz 4, 120(3)
  01abf64  cmpw 6, 5
  01abf68  bf 2, 0x1abf8c
  01abf6c  lwz 4, 4(4)
  01abf70  addic 3, 3, 16
  01abf74  fmr 1, 30
  01abf78  fmr 2, 31
  01abf7c  extsw 4, 4
  01abf80  bl 0x119028
  01abf84  nop
  01abf88  lwz 3, 112(1)
  01abf8c  ori 4, 3, 0
  01abf90  addic 3, 1, 112
  01abf94  li 5, 0
  01abf98  li 6, 0
  01abf9c  bl 0x10466c
  01abfa0  nop
  01abfa4  lwz 3, 112(1)
  01abfa8  cmpwi 3, 0
  01abfac  bf 2, 0x1abf44
  01abfb0  ld 0, 160(1)
  01abfb4  mtlr 0
  01abfb8  lfd 30, 128(1)
  01abfbc  lfd 31, 136(1)
  01abfc0  ld 31, 120(1)
  01abfc4  addi 1, 1, 144
  01abfc8  blr

M1060_001abfcc:   # 0x1abfcc, 0x68 bytes
  01abfcc  stdu 1, -112(1)
  01abfd0  mflr 0
  01abfd4  std 0, 128(1)
  01abfd8  lbz 4, 33(3)
  01abfdc  cmpwi 4, 255
  01abfe0  bt 2, 0x1ac024
  01abfe4  lis 5, 161
  01abfe8  lwz 5, 1808(5)
  01abfec  lwz 4, 120(3)
  01abff0  cmpwi 5, 0
  01abff4  bt 2, 0x1ac024
  01abff8  lwz 4, 8(4)
  01abffc  lwz 6, 0(4)
  01ac000  cmpw 5, 6
  01ac004  bt 2, 0x1ac024
  01ac008  ori 6, 4, 0
  01ac00c  lis 7, 113
  01ac010  ori 4, 3, 0
  01ac014  addic 3, 7, -30576
  01ac018  stw 5, 0(6)
  01ac01c  bl 0x6d720
  01ac020  nop
  01ac024  ld 0, 128(1)
  01ac028  mtlr 0
  01ac02c  addi 1, 1, 112
  01ac030  blr

UpdateMoby_1060:   # 0x1ac058, 0x1f8 bytes
  01ac058  stdu 1, -160(1)
  01ac05c  mflr 0
  01ac060  std 0, 176(1)
  01ac064  std 31, 152(1)
  01ac068  lbz 4, 32(3)
  01ac06c  std 27, 120(1)
  01ac070  ori 31, 3, 0
  01ac074  lwz 27, 120(3)
  01ac078  cmpwi 4, 0
  01ac07c  cmpwi 1, 4, 1
  01ac080  std 30, 144(1)
  01ac084  std 29, 136(1)
  01ac088  std 28, 128(1)
  01ac08c  cmpwi 6, 4, -1
  01ac090  bt 1, 0x1ac09c
  01ac094  bf 25, 0x1ac22c
  01ac098  b 0x1ac0a4
  01ac09c  bf 5, 0x1ac0c8
  01ac0a0  b 0x1ac22c
  01ac0a4  lis 3, 27
  01ac0a8  lfs 1, 0(27)
  01ac0ac  addi 3, 3, -16332
  01ac0b0  lfs 2, 0(3)
  01ac0b4  li 3, 1
  01ac0b8  fmuls 1, 1, 2
  01ac0bc  stfs 1, 0(27)
  01ac0c0  stb 3, 32(31)
  01ac0c4  b 0x1ac22c
  01ac0c8  lis 3, 27
  01ac0cc  lis 4, 114
  01ac0d0  addi 30, 3, -16332
  01ac0d4  lis 3, 116
  01ac0d8  lfs 3, 0(30)
  01ac0dc  lfs 2, 2448(3)
  01ac0e0  lfs 1, 0(27)
  01ac0e4  fmuls 2, 2, 3
  01ac0e8  lfs 4, -3052(4)
  01ac0ec  fmuls 2, 2, 4
  01ac0f0  bl 0x502578
  01ac0f4  nop
  01ac0f8  lfs 2, 4(30)
  01ac0fc  lfs 3, 8(30)
  01ac100  fsubs 2, 2, 1
  01ac104  fsubs 3, 3, 1
  01ac108  lis 3, 116
  01ac10c  lis 4, 116
  01ac110  fsub 4, 1, 2
  01ac114  fsel 2, 4, 2, 1
  01ac118  lfs 4, 12(30)
  01ac11c  lfs 5, 16(30)
  01ac120  fsub 6, 3, 2
  01ac124  fsel 2, 6, 3, 2
  01ac128  lfs 3, 20(30)
  01ac12c  lfs 6, 24(30)
  01ac130  lfs 8, 28(30)
  01ac134  lwz 3, 2440(3)
  01ac138  lwz 4, 2444(4)
  01ac13c  stfs 1, 0(27)
  01ac140  extsw 3, 3
  01ac144  extsw 4, 4
  01ac148  fmuls 7, 2, 2
  01ac14c  fmuls 9, 7, 2
  01ac150  fmuls 10, 7, 9
  01ac154  fmadds 2, 9, 4, 2
  01ac158  fmuls 1, 7, 10
  01ac15c  fmadds 2, 10, 5, 2
  01ac160  fmuls 4, 7, 1
  01ac164  fmadds 1, 1, 3, 2
  01ac168  fmadds 1, 4, 6, 1
  01ac16c  fmadds 1, 1, 8, 8
  01ac170  bl 0x5027bc
  01ac174  nop
  01ac178  lis 6, 151
  01ac17c  ori 28, 3, 0
  01ac180  li 5, 56
  01ac184  srawi 30, 28, 16
  01ac188  srawi 4, 28, 8
  01ac18c  lwz 3, -25488(6)
  01ac190  clrlwi 29, 28, 24
  01ac194  cmpwi 3, 0
  01ac198  bt 2, 0x1ac1a4
  01ac19c  cmpwi 3, 18
  01ac1a0  bf 2, 0x1ac1a8
  01ac1a4  li 5, 32
  01ac1a8  rlwinm 3, 30, 16, 8, 15
  01ac1ac  ori 6, 29, 0
  01ac1b0  rlwimi 3, 5, 24, 2, 4
  01ac1b4  rlwimi 6, 4, 8, 16, 23
  01ac1b8  or 3, 3, 6
  01ac1bc  stw 3, 4(27)
  01ac1c0  lbz 3, 33(31)
  01ac1c4  cmpwi 3, 255
  01ac1c8  bt 2, 0x1ac210
  01ac1cc  lis 4, 161
  01ac1d0  lwz 4, 1808(4)
  01ac1d4  lwz 3, 120(31)
  01ac1d8  cmpwi 4, 0
  01ac1dc  bt 2, 0x1ac210
  01ac1e0  lwz 3, 8(3)
  01ac1e4  lwz 5, 0(3)
  01ac1e8  cmpw 4, 5
  01ac1ec  bt 2, 0x1ac210
  01ac1f0  ori 6, 3, 0
  01ac1f4  ori 5, 4, 0
  01ac1f8  lis 3, 113
  01ac1fc  ori 4, 31, 0
  01ac200  addic 3, 3, -30576
  01ac204  stw 5, 0(6)
  01ac208  bl 0x6d720
  01ac20c  nop
  01ac210  srawi 6, 28, 24
  01ac214  clrlwi 5, 30, 24
  01ac218  clrlwi 6, 6, 24
  01ac21c  ori 3, 31, 0
  01ac220  ori 4, 29, 0
  01ac224  bl 0xf1ec8
  01ac228  nop
  01ac22c  ld 0, 176(1)
  01ac230  mtlr 0
  01ac234  ld 27, 120(1)
  01ac238  ld 28, 128(1)
  01ac23c  ld 29, 136(1)
  01ac240  ld 30, 144(1)
  01ac244  ld 31, 152(1)
  01ac248  addi 1, 1, 160
  01ac24c  blr

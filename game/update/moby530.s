# game/update/moby530.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M530_003abc80:   # 0x3abc80, 0x14 bytes
  03abc80  lis 3, 132
  03abc84  lis 4, 1
  03abc88  addic 3, 3, 14240
  03abc8c  stw 4, 72(3)
  03abc90  blr

M530_003abcb8:   # 0x3abcb8, 0x88c bytes
  03abcb8  stdu 1, -496(1)
  03abcbc  mflr 0
  03abcc0  std 0, 512(1)
  03abcc4  stfd 14, 352(1)
  03abcc8  stfd 15, 360(1)
  03abccc  stfd 16, 368(1)
  03abcd0  stfd 17, 376(1)
  03abcd4  stfd 18, 384(1)
  03abcd8  stfd 19, 392(1)
  03abcdc  stfd 20, 400(1)
  03abce0  stfd 21, 408(1)
  03abce4  stfd 22, 416(1)
  03abce8  stfd 23, 424(1)
  03abcec  stfd 24, 432(1)
  03abcf0  stfd 25, 440(1)
  03abcf4  stfd 26, 448(1)
  03abcf8  stfd 27, 456(1)
  03abcfc  stfd 28, 464(1)
  03abd00  stfd 29, 472(1)
  03abd04  stfd 30, 480(1)
  03abd08  stfd 31, 488(1)
  03abd0c  std 30, 336(1)
  03abd10  ori 30, 3, 0
  03abd14  lis 3, 132
  03abd18  std 31, 344(1)
  03abd1c  lis 4, 59
  03abd20  std 29, 328(1)
  03abd24  addi 31, 4, -17256
  03abd28  lwz 29, 120(30)
  03abd2c  lwz 3, 21772(3)
  03abd30  std 28, 320(1)
  03abd34  std 27, 312(1)
  03abd38  extsw 3, 3
  03abd3c  bl 0x685c4
  03abd40  nop
  03abd44  std 3, 232(1)
  03abd48  lis 9, 0
  03abd4c  li 3, 0
  03abd50  li 4, 0
  03abd54  li 5, 1
  03abd58  li 6, 1
  03abd5c  li 7, 1
  03abd60  li 8, 0
  03abd64  ori 9, 9, 65424
  03abd68  bl 0x502fd4
  03abd6c  nop
  03abd70  std 3, 240(1)
  03abd74  li 4, 0
  03abd78  li 3, 0
  03abd7c  li 5, 0
  03abd80  li 6, 0
  03abd84  li 7, 0
  03abd88  li 8, 0
  03abd8c  bl 0x502f08
  03abd90  nop
  03abd94  lis 4, 269
  03abd98  std 3, 224(1)
  03abd9c  lis 5, 132
  03abda0  lis 6, 132
  03abda4  lis 7, 269
  03abda8  lis 8, 132
  03abdac  lwz 3, -24784(4)
  03abdb0  lwz 4, 21768(5)
  03abdb4  lwz 5, 21760(6)
  03abdb8  lwz 6, -24780(7)
  03abdbc  ori 7, 4, 0
  03abdc0  lwz 8, 21764(8)
  03abdc4  ori 4, 5, 0
  03abdc8  ori 5, 6, 0
  03abdcc  ori 6, 8, 0
  03abdd0  bl 0x502ea8
  03abdd4  nop
  03abdd8  lis 4, 132
  03abddc  std 3, 248(1)
  03abde0  lis 28, 149
  03abde4  lfs 1, 16(30)
  03abde8  addic 28, 28, 5056
  03abdec  lwz 3, 21776(4)
  03abdf0  stw 3, 188(1)
  03abdf4  stw 3, 184(1)
  03abdf8  stw 3, 180(1)
  03abdfc  stw 3, 176(1)
  03abe00  lfs 2, 320(28)
  03abe04  fsubs 2, 2, 1
  03abe08  lfs 1, 0(31)
  03abe0c  li 31, 0
  03abe10  lbz 3, 32(30)
  03abe14  fabs 2, 2
  03abe18  fcmpu 0, 2, 1
  03abe1c  cror 6, 1, 2
  03abe20  bt 6, 0x3abe3c
  03abe24  lfs 2, 324(28)
  03abe28  lfs 3, 20(30)
  03abe2c  fsubs 2, 2, 3
  03abe30  fabs 2, 2
  03abe34  fcmpu 0, 2, 1
  03abe38  bt 0, 0x3abe44
  03abe3c  cmpwi 3, 1
  03abe40  bf 2, 0x3ac208
  03abe44  li 4, 1
  03abe48  addic 3, 29, 64
  03abe4c  stb 4, 188(30)
  03abe50  bl 0x4fff60
  03abe54  nop
  03abe58  lwz 3, 64(29)
  03abe5c  extsw 3, 3
  03abe60  bl 0x502730
  03abe64  nop
  03abe68  lis 3, 59
  03abe6c  fmr 14, 1
  03abe70  addi 27, 3, -17256
  03abe74  lis 3, 114
  03abe78  lfs 2, 4(27)
  03abe7c  lfs 3, -3056(3)
  03abe80  fmuls 1, 3, 2
  03abe84  fctiwz 1, 1
  03abe88  stfd 1, 288(1)
  03abe8c  lwz 3, 292(1)
  03abe90  extsw 3, 3
  03abe94  bl 0x502730
  03abe98  nop
  03abe9c  lfs 2, 20(27)
  03abea0  fdivs 14, 14, 1
  03abea4  lfs 29, 8(27)
  03abea8  lis 3, 269
  03abeac  lfs 30, 12(27)
  03abeb0  lis 4, 269
  03abeb4  lfs 28, 16(27)
  03abeb8  lis 7, 269
  03abebc  lfs 15, 24(27)
  03abec0  lis 8, 132
  03abec4  lfs 1, 320(28)
  03abec8  lis 9, 132
  03abecc  lfs 3, 324(28)
  03abed0  addic 3, 3, -25600
  03abed4  lfs 4, 328(28)
  03abed8  addic 4, 4, -26416
  03abedc  ori 10, 31, 0
  03abee0  stfd 4, 256(1)
  03abee4  stfd 1, 272(1)
  03abee8  addic 7, 7, -28048
  03abeec  stfd 3, 264(1)
  03abef0  addic 8, 8, 14352
  03abef4  addic 9, 9, 18944
  03abef8  stfd 2, 280(1)
  03abefc  addic 5, 3, 4
  03abf00  addic 6, 4, 4
  03abf04  lfs 1, 16(29)
  03abf08  lfs 2, 4(8)
  03abf0c  lfs 3, 20(29)
  03abf10  fmuls 1, 1, 2
  03abf14  fmuls 3, 3, 2
  03abf18  lfs 4, 0(29)
  03abf1c  lfs 5, 0(8)
  03abf20  lfs 6, 4(29)
  03abf24  lfs 7, 32(29)
  03abf28  lfs 8, 8(8)
  03abf2c  lfs 9, 36(29)
  03abf30  fmr 31, 29
  03abf34  fmadds 1, 4, 5, 1
  03abf38  fmadds 3, 6, 5, 3
  03abf3c  lfs 4, 48(29)
  03abf40  lfs 6, 12(8)
  03abf44  lfs 10, 24(29)
  03abf48  lfs 11, 52(29)
  03abf4c  fmuls 10, 10, 2
  03abf50  lfs 12, 8(29)
  03abf54  fmadds 1, 7, 8, 1
  03abf58  fmadds 3, 9, 8, 3
  03abf5c  lfs 7, 40(29)
  03abf60  lfs 9, 56(29)
  03abf64  lfs 13, 12(29)
  03abf68  lfs 0, 28(29)
  03abf6c  fmadds 10, 12, 5, 10
  03abf70  lfs 27, 44(29)
  03abf74  fmadds 12, 4, 6, 1
  03abf78  fmadds 11, 11, 6, 3
  03abf7c  lfs 1, 60(29)
  03abf80  fmuls 2, 0, 2
  03abf84  fmadds 3, 7, 8, 10
  03abf88  fmr 0, 31
  03abf8c  stfs 12, 0(7)
  03abf90  stfs 11, 4(7)
  03abf94  lfd 4, 264(1)
  03abf98  lfd 7, 272(1)
  03abf9c  fsubs 11, 11, 4
  03abfa0  lfd 10, 256(1)
  03abfa4  fmadds 3, 9, 6, 3
  03abfa8  fsubs 12, 12, 7
  03abfac  fmadds 2, 13, 5, 2
  03abfb0  fmr 13, 0
  03abfb4  fmuls 4, 11, 11
  03abfb8  fsubs 10, 3, 10
  03abfbc  fmadds 2, 27, 8, 2
  03abfc0  stfs 3, 8(7)
  03abfc4  fmadds 9, 12, 12, 4
  03abfc8  fmadds 1, 1, 6, 2
  03abfcc  fmadds 9, 10, 10, 9
  03abfd0  stfs 1, 12(7)
  03abfd4  lfs 16, 0(29)
  03abfd8  lfs 17, 16(29)
  03abfdc  fsqrts 4, 9
  03abfe0  lfs 18, 32(29)
  03abfe4  lfs 19, 48(29)
  03abfe8  lfs 20, 4(29)
  03abfec  lfs 21, 20(29)
  03abff0  lfs 22, 36(29)
  03abff4  lfs 23, 52(29)
  03abff8  lfs 24, 8(29)
  03abffc  lfs 25, 24(29)
  03ac000  lbz 11, 32(30)
  03ac004  lfs 26, 40(29)
  03ac008  lfs 27, 56(29)
  03ac00c  cmpwi 1, 11, 1
  03ac010  fcmpu 0, 4, 13
  03ac014  bt 2, 0x3ac058
  03ac018  frsqrte 1, 9
  03ac01c  fmuls 2, 9, 1
  03ac020  fmuls 3, 1, 30
  03ac024  fnmsubs 2, 2, 1, 28
  03ac028  fmadds 1, 2, 3, 1
  03ac02c  fmuls 2, 9, 1
  03ac030  fmuls 3, 1, 30
  03ac034  fnmsubs 2, 2, 1, 28
  03ac038  fmadds 1, 2, 3, 1
  03ac03c  fmuls 2, 9, 1
  03ac040  fmuls 3, 1, 30
  03ac044  fnmsubs 2, 2, 1, 28
  03ac048  fmadds 13, 2, 3, 1
  03ac04c  fmuls 31, 12, 13
  03ac050  fmuls 0, 11, 13
  03ac054  fmuls 13, 10, 13
  03ac058  lfs 1, 4(9)
  03ac05c  lfs 2, 0(9)
  03ac060  fmuls 3, 21, 1
  03ac064  fmuls 4, 17, 1
  03ac068  lfs 5, 8(9)
  03ac06c  fmuls 1, 25, 1
  03ac070  lfs 6, 12(9)
  03ac074  fmadds 3, 20, 2, 3
  03ac078  fmadds 4, 16, 2, 4
  03ac07c  fmadds 1, 24, 2, 1
  03ac080  fmadds 2, 22, 5, 3
  03ac084  fmadds 3, 18, 5, 4
  03ac088  fmadds 1, 26, 5, 1
  03ac08c  lfd 5, 280(1)
  03ac090  fmadds 2, 23, 6, 2
  03ac094  fmadds 3, 19, 6, 3
  03ac098  fmadds 1, 27, 6, 1
  03ac09c  fmuls 4, 2, 2
  03ac0a0  fmadds 4, 3, 3, 4
  03ac0a4  fmadds 4, 1, 1, 4
  03ac0a8  fsqrts 4, 4
  03ac0ac  fmr 12, 29
  03ac0b0  fmr 11, 12
  03ac0b4  fdivs 5, 5, 4
  03ac0b8  fsub 6, 29, 4
  03ac0bc  fsub 8, 29, 4
  03ac0c0  fsub 9, 29, 4
  03ac0c4  fsub 7, 4, 29
  03ac0c8  fsub 10, 4, 29
  03ac0cc  fsub 4, 4, 29
  03ac0d0  fmuls 2, 2, 5
  03ac0d4  fmuls 3, 3, 5
  03ac0d8  fmuls 1, 1, 5
  03ac0dc  fsel 5, 6, 29, 2
  03ac0e0  fsel 6, 8, 29, 3
  03ac0e4  fsel 8, 9, 29, 1
  03ac0e8  fsel 9, 7, 5, 2
  03ac0ec  fsel 10, 10, 6, 3
  03ac0f0  fsel 8, 4, 8, 1
  03ac0f4  fmuls 1, 9, 0
  03ac0f8  fmadds 1, 10, 31, 1
  03ac0fc  fmadds 1, 8, 13, 1
  03ac100  fmuls 1, 1, 15
  03ac104  fnmsubs 9, 9, 1, 0
  03ac108  fnmsubs 10, 10, 1, 31
  03ac10c  fnmsubs 8, 8, 1, 13
  03ac110  fmr 31, 11
  03ac114  fmuls 1, 9, 9
  03ac118  fmadds 7, 10, 10, 1
  03ac11c  fmadds 7, 8, 8, 7
  03ac120  fsqrts 1, 7
  03ac124  fcmpu 0, 1, 31
  03ac128  bt 2, 0x3ac16c
  03ac12c  frsqrte 1, 7
  03ac130  fmuls 2, 7, 1
  03ac134  fmuls 3, 1, 30
  03ac138  fnmsubs 2, 2, 1, 28
  03ac13c  fmadds 1, 2, 3, 1
  03ac140  fmuls 2, 7, 1
  03ac144  fmuls 3, 1, 30
  03ac148  fnmsubs 2, 2, 1, 28
  03ac14c  fmadds 1, 2, 3, 1
  03ac150  fmuls 2, 7, 1
  03ac154  fmuls 3, 1, 30
  03ac158  fnmsubs 2, 2, 1, 28
  03ac15c  fmadds 31, 2, 3, 1
  03ac160  fmuls 12, 31, 10
  03ac164  fmuls 11, 31, 9
  03ac168  fmuls 31, 31, 8
  03ac16c  fadds 1, 31, 28
  03ac170  fmuls 1, 1, 15
  03ac174  fsqrts 1, 1
  03ac178  fmuls 1, 1, 15
  03ac17c  fdivs 12, 12, 1
  03ac180  fdivs 1, 11, 1
  03ac184  fadds 12, 12, 30
  03ac188  fadds 1, 1, 30
  03ac18c  bt 6, 0x3ac19c
  03ac190  lwz 11, 64(29)
  03ac194  cmpwi 11, 0
  03ac198  bf 2, 0x3ac1a8
  03ac19c  stfs 12, 0(4)
  03ac1a0  stfs 1, 0(6)
  03ac1a4  b 0x3ac1c8
  03ac1a8  lfs 2, 0(3)
  03ac1ac  lfs 3, 0(5)
  03ac1b0  fsubs 2, 2, 12
  03ac1b4  fsubs 3, 3, 1
  03ac1b8  fmadds 2, 2, 14, 12
  03ac1bc  fmadds 1, 3, 14, 1
  03ac1c0  stfs 2, 0(4)
  03ac1c4  stfs 1, 0(6)
  03ac1c8  addic 10, 10, 1
  03ac1cc  addic 7, 7, 16
  03ac1d0  cmpwi 10, 102
  03ac1d4  addic 8, 8, 16
  03ac1d8  addic 9, 9, 16
  03ac1dc  addic 3, 3, 8
  03ac1e0  addic 4, 4, 8
  03ac1e4  addic 5, 5, 8
  03ac1e8  addic 6, 6, 8
  03ac1ec  bt 0, 0x3abf04
  03ac1f0  lbz 3, 32(30)
  03ac1f4  cmpwi 3, 1
  03ac1f8  bf 2, 0x3ac41c
  03ac1fc  li 3, 2
  03ac200  stb 3, 32(30)
  03ac204  b 0x3ac41c
  03ac208  lbz 3, 188(30)
  03ac20c  cmpwi 3, 1
  03ac210  bf 2, 0x3ac31c
  03ac214  lis 3, 269
  03ac218  stb 31, 188(30)
  03ac21c  lis 4, 269
  03ac220  addic 30, 3, -26416
  03ac224  lis 6, 269
  03ac228  lis 7, 132
  03ac22c  addic 3, 4, -25600
  03ac230  ori 8, 31, 0
  03ac234  addic 6, 6, -28048
  03ac238  addic 7, 7, 14352
  03ac23c  addic 4, 30, 4
  03ac240  addic 5, 3, 4
  03ac244  lfs 1, 0(30)
  03ac248  lfs 2, 0(4)
  03ac24c  stfs 1, 0(3)
  03ac250  stfs 2, 0(5)
  03ac254  lfs 1, 16(29)
  03ac258  lfs 2, 4(7)
  03ac25c  lfs 3, 20(29)
  03ac260  lfs 4, 0(29)
  03ac264  lfs 5, 0(7)
  03ac268  fmuls 1, 1, 2
  03ac26c  lfs 6, 24(29)
  03ac270  fmuls 3, 3, 2
  03ac274  lfs 7, 4(29)
  03ac278  lfs 8, 28(29)
  03ac27c  fmuls 6, 6, 2
  03ac280  lfs 9, 8(29)
  03ac284  fmuls 2, 8, 2
  03ac288  lfs 8, 32(29)
  03ac28c  addic 8, 8, 1
  03ac290  addic 30, 30, 8
  03ac294  fmadds 1, 4, 5, 1
  03ac298  lfs 4, 8(7)
  03ac29c  fmadds 3, 7, 5, 3
  03ac2a0  lfs 7, 12(29)
  03ac2a4  fmadds 6, 9, 5, 6
  03ac2a8  lfs 10, 36(29)
  03ac2ac  fmadds 2, 7, 5, 2
  03ac2b0  lfs 11, 48(29)
  03ac2b4  lfs 9, 40(29)
  03ac2b8  cmpwi 8, 102
  03ac2bc  lfs 12, 12(7)
  03ac2c0  addic 3, 3, 8
  03ac2c4  lfs 5, 44(29)
  03ac2c8  addic 4, 4, 8
  03ac2cc  lfs 7, 52(29)
  03ac2d0  addic 5, 5, 8
  03ac2d4  fmadds 1, 8, 4, 1
  03ac2d8  addic 7, 7, 16
  03ac2dc  lfs 8, 56(29)
  03ac2e0  fmadds 3, 10, 4, 3
  03ac2e4  fmadds 6, 9, 4, 6
  03ac2e8  fmadds 2, 5, 4, 2
  03ac2ec  lfs 9, 60(29)
  03ac2f0  fmadds 1, 11, 12, 1
  03ac2f4  fmadds 3, 7, 12, 3
  03ac2f8  fmadds 4, 8, 12, 6
  03ac2fc  fmadds 2, 9, 12, 2
  03ac300  stfs 1, 0(6)
  03ac304  stfs 3, 4(6)
  03ac308  stfs 4, 8(6)
  03ac30c  stfs 2, 12(6)
  03ac310  addic 6, 6, 16
  03ac314  bt 0, 0x3ac244
  03ac318  b 0x3ac3e0
  03ac31c  lis 3, 269
  03ac320  lis 4, 132
  03ac324  li 5, 102
  03ac328  addic 3, 3, -28048
  03ac32c  addic 4, 4, 14352
  03ac330  mtctr 5
  03ac334  lfs 1, 16(29)
  03ac338  lfs 2, 4(4)
  03ac33c  lfs 3, 20(29)
  03ac340  lfs 4, 0(29)
  03ac344  lfs 5, 0(4)
  03ac348  fmuls 1, 1, 2
  03ac34c  lfs 6, 24(29)
  03ac350  fmuls 3, 3, 2
  03ac354  lfs 7, 4(29)
  03ac358  lfs 8, 28(29)
  03ac35c  fmuls 6, 6, 2
  03ac360  lfs 9, 8(29)
  03ac364  fmuls 2, 8, 2
  03ac368  lfs 8, 32(29)
  03ac36c  fmadds 1, 4, 5, 1
  03ac370  lfs 4, 8(4)
  03ac374  fmadds 3, 7, 5, 3
  03ac378  lfs 7, 12(29)
  03ac37c  fmadds 6, 9, 5, 6
  03ac380  lfs 10, 36(29)
  03ac384  fmadds 2, 7, 5, 2
  03ac388  lfs 11, 48(29)
  03ac38c  lfs 9, 40(29)
  03ac390  lfs 12, 12(4)
  03ac394  lfs 5, 44(29)
  03ac398  addic 4, 4, 16
  03ac39c  lfs 7, 52(29)
  03ac3a0  fmadds 1, 8, 4, 1
  03ac3a4  lfs 8, 56(29)
  03ac3a8  fmadds 3, 10, 4, 3
  03ac3ac  fmadds 6, 9, 4, 6
  03ac3b0  fmadds 2, 5, 4, 2
  03ac3b4  lfs 9, 60(29)
  03ac3b8  fmadds 1, 11, 12, 1
  03ac3bc  fmadds 3, 7, 12, 3
  03ac3c0  fmadds 4, 8, 12, 6
  03ac3c4  fmadds 2, 9, 12, 2
  03ac3c8  stfs 1, 0(3)
  03ac3cc  stfs 3, 4(3)
  03ac3d0  stfs 4, 8(3)
  03ac3d4  stfs 2, 12(3)
  03ac3d8  addic 3, 3, 16
  03ac3dc  bdnz 0x3ac334
  03ac3e0  lis 3, 59
  03ac3e4  li 4, 4
  03ac3e8  vspltisw 2, -1
  03ac3ec  addi 3, 3, -17256
  03ac3f0  lis 5, 114
  03ac3f4  li 6, -3056
  03ac3f8  vslw 2, 2, 2
  03ac3fc  <unknown>
  03ac400  li 3, 64
  03ac404  vspltw 3, 3, 0
  03ac408  <unknown>
  03ac40c  vmaddfp 2, 4, 3, 2
  03ac410  vctsxs 2, 2, 0
  03ac414  vspltw 2, 2, 0
  03ac418  stvewx 2, 3, 29
  03ac41c  lis 27, 132
  03ac420  lis 30, 269
  03ac424  lis 29, 269
  03ac428  lis 28, 161
  03ac42c  addic 27, 27, 15984
  03ac430  addic 30, 30, -28048
  03ac434  addic 29, 29, -26416
  03ac438  addic 28, 28, 24396
  03ac43c  li 6, 4
  03ac440  ori 3, 1, 0
  03ac444  addic 4, 1, 112
  03ac448  ori 5, 27, 0
  03ac44c  mtctr 6
  03ac450  lhz 6, 0(5)
  03ac454  addic 5, 5, 6
  03ac458  extsh 6, 6
  03ac45c  sldi 7, 6, 4
  03ac460  sldi 6, 6, 3
  03ac464  addc 7, 7, 30
  03ac468  addc 8, 6, 29
  03ac46c  clrldi 7, 7, 32
  03ac470  lfs 1, 0(7)
  03ac474  stfs 1, 0(4)
  03ac478  lfs 1, 4(7)
  03ac47c  stfs 1, 4(4)
  03ac480  lfs 1, 8(7)
  03ac484  stfs 1, 8(4)
  03ac488  lfs 1, 12(7)
  03ac48c  stfs 1, 12(4)
  03ac490  lfsx 1, 29, 6
  03ac494  lfs 2, 4(8)
  03ac498  addic 4, 4, 16
  03ac49c  stfs 1, 192(3)
  03ac4a0  stfs 2, 196(3)
  03ac4a4  addic 3, 3, 8
  03ac4a8  bdnz 0x3ac450
  03ac4ac  addic 3, 1, 112
  03ac4b0  lwz 6, 28(28)
  03ac4b4  li 4, 0
  03ac4b8  li 5, 0
  03ac4bc  li 7, 9
  03ac4c0  bl 0x72280
  03ac4c4  nop
  03ac4c8  addic 31, 31, 1
  03ac4cc  addic 27, 27, 24
  03ac4d0  cmpwi 31, 74
  03ac4d4  bt 0, 0x3ac43c
  03ac4d8  ld 0, 512(1)
  03ac4dc  mtlr 0
  03ac4e0  lfd 14, 352(1)
  03ac4e4  lfd 15, 360(1)
  03ac4e8  lfd 16, 368(1)
  03ac4ec  lfd 17, 376(1)
  03ac4f0  lfd 18, 384(1)
  03ac4f4  lfd 19, 392(1)
  03ac4f8  lfd 20, 400(1)
  03ac4fc  lfd 21, 408(1)
  03ac500  lfd 22, 416(1)
  03ac504  lfd 23, 424(1)
  03ac508  lfd 24, 432(1)
  03ac50c  lfd 25, 440(1)
  03ac510  lfd 26, 448(1)
  03ac514  lfd 27, 456(1)
  03ac518  lfd 28, 464(1)
  03ac51c  lfd 29, 472(1)
  03ac520  lfd 30, 480(1)
  03ac524  lfd 31, 488(1)
  03ac528  ld 27, 312(1)
  03ac52c  ld 28, 320(1)
  03ac530  ld 29, 328(1)
  03ac534  ld 30, 336(1)
  03ac538  ld 31, 344(1)
  03ac53c  addi 1, 1, 496
  03ac540  blr

UpdateMoby_530:   # 0x3ac544, 0xd8 bytes
  03ac544  stdu 1, -128(1)
  03ac548  mflr 0
  03ac54c  std 0, 144(1)
  03ac550  std 31, 120(1)
  03ac554  ori 31, 3, 0
  03ac558  lbz 4, 32(31)
  03ac55c  lwz 3, 120(31)
  03ac560  cmpwi 4, 0
  03ac564  bf 2, 0x3ac57c
  03ac568  li 4, 1
  03ac56c  li 5, 0
  03ac570  stb 4, 32(31)
  03ac574  stb 4, 188(31)
  03ac578  stw 5, 64(3)
  03ac57c  lis 4, 161
  03ac580  lwz 4, 1800(4)
  03ac584  cmpwi 4, 2
  03ac588  bf 2, 0x3ac5c0
  03ac58c  lis 4, 150
  03ac590  addic 4, 4, -12976
  03ac594  lwz 4, 48(4)
  03ac598  cmpwi 4, 3
  03ac59c  cmpwi 1, 4, 4
  03ac5a0  bt 0, 0x3ac5a8
  03ac5a4  bf 6, 0x3ac5c0
  03ac5a8  li 4, 0
  03ac5ac  lhz 5, 52(31)
  03ac5b0  stb 4, 49(31)
  03ac5b4  ori 4, 5, 1
  03ac5b8  sth 4, 52(31)
  03ac5bc  b 0x3ac5d4
  03ac5c0  li 4, 1
  03ac5c4  lhz 5, 52(31)
  03ac5c8  stb 4, 49(31)
  03ac5cc  rlwinm 4, 5, 0, 0, 30
  03ac5d0  sth 4, 52(31)
  03ac5d4  ori 5, 3, 0
  03ac5d8  ori 3, 31, 0
  03ac5dc  li 4, 0
  03ac5e0  bl 0xf1038
  03ac5e4  nop
  03ac5e8  lbz 3, 49(31)
  03ac5ec  cmpwi 3, 0
  03ac5f0  bt 2, 0x3ac608
  03ac5f4  lis 3, 113
  03ac5f8  ori 4, 31, 0
  03ac5fc  addic 3, 3, -12104
  03ac600  bl 0x6d7e0
  03ac604  nop
  03ac608  ld 0, 144(1)
  03ac60c  mtlr 0
  03ac610  ld 31, 120(1)
  03ac614  addi 1, 1, 128
  03ac618  blr

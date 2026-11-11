# game/update/moby642.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_642:   # 0x3fee50, 0xb0c bytes
  03fee50  stdu 1, -240(1)
  03fee54  mflr 0
  03fee58  std 0, 256(1)
  03fee5c  stfd 25, 184(1)
  03fee60  stfd 26, 192(1)
  03fee64  stfd 27, 200(1)
  03fee68  stfd 28, 208(1)
  03fee6c  stfd 29, 216(1)
  03fee70  stfd 30, 224(1)
  03fee74  stfd 31, 232(1)
  03fee78  std 31, 176(1)
  03fee7c  lis 4, 64
  03fee80  ori 31, 3, 0
  03fee84  addi 4, 4, -4640
  03fee88  lfs 25, 4(4)
  03fee8c  lfs 26, 8(4)
  03fee90  fmr 1, 25
  03fee94  std 30, 168(1)
  03fee98  lfs 31, 0(4)
  03fee9c  lwz 30, 120(31)
  03feea0  std 29, 160(1)
  03feea4  fmr 2, 26
  03feea8  bl 0xfcbe8
  03feeac  nop
  03feeb0  fmr 27, 1
  03feeb4  fmr 1, 25
  03feeb8  fmr 2, 26
  03feebc  bl 0xfcbe8
  03feec0  nop
  03feec4  fmr 28, 1
  03feec8  fmr 2, 26
  03feecc  fmr 1, 25
  03feed0  bl 0xfcbe8
  03feed4  nop
  03feed8  lfs 2, 4(30)
  03feedc  fmr 29, 1
  03feee0  lfs 3, 0(30)
  03feee4  fmuls 4, 2, 2
  03feee8  lfs 2, 16(31)
  03feeec  lfs 1, 20(31)
  03feef0  stfs 2, 112(1)
  03feef4  lfs 5, 24(31)
  03feef8  stfs 1, 116(1)
  03feefc  lfs 6, 28(31)
  03fef00  lbz 3, 32(31)
  03fef04  stfs 5, 120(1)
  03fef08  cmpwi 3, 0
  03fef0c  stfs 6, 124(1)
  03fef10  fmadds 30, 3, 3, 4
  03fef14  fsqrts 30, 30
  03fef18  bt 1, 0x3fef28
  03fef1c  cmpwi 3, -1
  03fef20  bf 1, 0x3ff924
  03fef24  b 0x3fef3c
  03fef28  cmpwi 3, 1
  03fef2c  bf 1, 0x3fefa8
  03fef30  cmpwi 3, 2
  03fef34  bf 1, 0x3ff2bc
  03fef38  b 0x3ff924
  03fef3c  stfs 2, 48(30)
  03fef40  lfs 1, 20(31)
  03fef44  li 3, 120
  03fef48  li 4, 2400
  03fef4c  stfs 1, 52(30)
  03fef50  lfs 1, 24(31)
  03fef54  stfs 1, 56(30)
  03fef58  lfs 1, 28(31)
  03fef5c  stfs 1, 60(30)
  03fef60  bl 0xfe484
  03fef64  nop
  03fef68  lis 4, 64
  03fef6c  stw 3, 68(30)
  03fef70  stw 3, 64(30)
  03fef74  addi 3, 4, -4640
  03fef78  lfs 1, 12(3)
  03fef7c  lfs 2, 16(3)
  03fef80  bl 0xfcbe8
  03fef84  nop
  03fef88  lfs 2, 44(31)
  03fef8c  li 3, 0
  03fef90  li 4, 1
  03fef94  fmuls 1, 2, 1
  03fef98  stfs 1, 76(30)
  03fef9c  stw 3, 44(31)
  03fefa0  stb 4, 32(31)
  03fefa4  b 0x3ff924
  03fefa8  lis 3, 149
  03fefac  addic 3, 3, 5056
  03fefb0  lfs 3, 324(3)
  03fefb4  lfs 4, 320(3)
  03fefb8  fsubs 1, 1, 3
  03fefbc  fsubs 2, 2, 4
  03fefc0  lis 3, 64
  03fefc4  addi 3, 3, -4640
  03fefc8  fmuls 1, 1, 1
  03fefcc  fmadds 1, 2, 2, 1
  03fefd0  lfs 2, 20(3)
  03fefd4  fsqrts 1, 1
  03fefd8  fcmpu 0, 1, 2
  03fefdc  cror 6, 1, 2
  03fefe0  bt 6, 0x3ff924
  03fefe4  addic 3, 30, 68
  03fefe8  bl 0x4fff60
  03fefec  nop
  03feff0  cmpwi 3, 0
  03feff4  bt 2, 0x3ff924
  03feff8  fmr 1, 25
  03feffc  fmr 2, 26
  03ff000  bl 0xfcbe8
  03ff004  nop
  03ff008  fmr 30, 1
  03ff00c  fmr 1, 25
  03ff010  fmr 2, 26
  03ff014  bl 0xfcbe8
  03ff018  nop
  03ff01c  fmr 29, 1
  03ff020  fmr 2, 26
  03ff024  fmr 1, 25
  03ff028  bl 0xfcbe8
  03ff02c  nop
  03ff030  fmuls 2, 29, 29
  03ff034  lis 3, 64
  03ff038  addi 5, 3, -4640
  03ff03c  lis 3, 230
  03ff040  addic 6, 3, -20768
  03ff044  lfs 3, 24(5)
  03ff048  fmadds 2, 30, 30, 2
  03ff04c  lfs 4, 20(6)
  03ff050  lfs 5, 4(6)
  03ff054  fmuls 3, 4, 3
  03ff058  lfs 6, 28(5)
  03ff05c  lfs 7, 32(5)
  03ff060  fadds 5, 5, 6
  03ff064  lfs 8, 36(5)
  03ff068  fmadds 2, 1, 1, 2
  03ff06c  lfs 9, 40(5)
  03ff070  lfs 6, 44(5)
  03ff074  lfs 10, 48(5)
  03ff078  fsubs 11, 7, 5
  03ff07c  fsqrts 2, 2
  03ff080  li 7, 0
  03ff084  li 4, 64
  03ff088  li 3, 255
  03ff08c  fsub 25, 5, 11
  03ff090  fsubs 27, 8, 5
  03ff094  lwz 30, 120(31)
  03ff098  fsel 5, 25, 11, 5
  03ff09c  fsub 11, 27, 5
  03ff0a0  fsel 5, 11, 27, 5
  03ff0a4  fdivs 3, 3, 2
  03ff0a8  fsub 12, 31, 2
  03ff0ac  fsub 28, 31, 2
  03ff0b0  fsub 0, 31, 2
  03ff0b4  fsub 13, 2, 31
  03ff0b8  fsub 26, 2, 31
  03ff0bc  fsub 2, 2, 31
  03ff0c0  fmuls 11, 29, 3
  03ff0c4  fmuls 30, 30, 3
  03ff0c8  fmuls 1, 1, 3
  03ff0cc  fmuls 3, 5, 5
  03ff0d0  fsel 12, 12, 31, 11
  03ff0d4  fsel 0, 0, 31, 30
  03ff0d8  fsel 29, 28, 31, 1
  03ff0dc  fmuls 28, 3, 5
  03ff0e0  fsel 11, 13, 12, 11
  03ff0e4  fsel 12, 26, 0, 30
  03ff0e8  fsel 1, 2, 29, 1
  03ff0ec  lfs 13, 52(5)
  03ff0f0  fmuls 2, 3, 28
  03ff0f4  fmadds 5, 28, 9, 5
  03ff0f8  stw 7, 44(31)
  03ff0fc  sth 4, 50(31)
  03ff100  stb 3, 48(31)
  03ff104  fmuls 0, 11, 11
  03ff108  fmuls 30, 3, 2
  03ff10c  fmadds 2, 2, 6, 5
  03ff110  fmr 5, 13
  03ff114  lis 3, 114
  03ff118  fmadds 13, 12, 12, 0
  03ff11c  fmuls 3, 3, 30
  03ff120  fmadds 2, 30, 10, 2
  03ff124  fmadds 13, 1, 1, 13
  03ff128  fmadds 2, 3, 5, 2
  03ff12c  fsqrts 3, 13
  03ff130  li 4, 1200
  03ff134  fmuls 2, 4, 2
  03ff138  stfs 2, 0(30)
  03ff13c  lfs 2, 4(6)
  03ff140  fsubs 4, 7, 2
  03ff144  lfs 7, 60(5)
  03ff148  fsubs 8, 8, 2
  03ff14c  fsub 13, 2, 4
  03ff150  fsel 2, 13, 4, 2
  03ff154  fdivs 4, 7, 3
  03ff158  lfs 7, 20(6)
  03ff15c  lfs 13, 56(5)
  03ff160  lfs 0, -3052(3)
  03ff164  li 3, 720
  03ff168  fsub 30, 8, 2
  03ff16c  fsub 29, 31, 3
  03ff170  fsub 27, 31, 3
  03ff174  fsub 26, 3, 31
  03ff178  fsel 2, 30, 8, 2
  03ff17c  fsub 8, 31, 3
  03ff180  fmuls 30, 2, 2
  03ff184  fmuls 28, 30, 2
  03ff188  fmuls 25, 30, 28
  03ff18c  fmadds 2, 28, 9, 2
  03ff190  fmuls 9, 0, 13
  03ff194  fsub 13, 3, 31
  03ff198  fmuls 0, 30, 25
  03ff19c  fmadds 2, 25, 6, 2
  03ff1a0  fsub 6, 3, 31
  03ff1a4  fmuls 28, 12, 4
  03ff1a8  fmuls 25, 11, 4
  03ff1ac  stfs 9, 8(30)
  03ff1b0  fmuls 4, 1, 4
  03ff1b4  fmuls 30, 30, 0
  03ff1b8  fmadds 2, 0, 10, 2
  03ff1bc  fsel 8, 8, 31, 28
  03ff1c0  fsel 10, 29, 31, 25
  03ff1c4  fsel 0, 27, 31, 4
  03ff1c8  fmadds 2, 30, 5, 2
  03ff1cc  fsel 5, 26, 8, 28
  03ff1d0  fsel 8, 13, 10, 25
  03ff1d4  fsel 4, 6, 0, 4
  03ff1d8  fmuls 2, 7, 2
  03ff1dc  fsub 6, 31, 3
  03ff1e0  fsub 7, 3, 31
  03ff1e4  fsub 9, 3, 31
  03ff1e8  fsub 10, 31, 3
  03ff1ec  fsub 13, 31, 3
  03ff1f0  stfs 2, 4(30)
  03ff1f4  stfs 5, 64(31)
  03ff1f8  stfs 8, 68(31)
  03ff1fc  stfs 4, 72(31)
  03ff200  stw 7, 76(31)
  03ff204  lfs 2, 64(5)
  03ff208  fdivs 2, 2, 3
  03ff20c  stw 7, 44(30)
  03ff210  fsub 4, 31, 3
  03ff214  fsub 5, 31, 3
  03ff218  fsub 8, 3, 31
  03ff21c  fsub 0, 31, 3
  03ff220  fsub 30, 3, 31
  03ff224  fsub 29, 3, 31
  03ff228  fsub 28, 3, 31
  03ff22c  fmuls 27, 12, 2
  03ff230  fmuls 26, 11, 2
  03ff234  fmuls 2, 1, 2
  03ff238  fsel 4, 4, 31, 27
  03ff23c  fsel 5, 5, 31, 26
  03ff240  fsel 6, 6, 31, 2
  03ff244  fsel 4, 7, 4, 27
  03ff248  fsel 5, 8, 5, 26
  03ff24c  fsel 2, 9, 6, 2
  03ff250  stfs 4, 32(30)
  03ff254  stfs 5, 36(30)
  03ff258  stfs 2, 40(30)
  03ff25c  lfs 2, 68(5)
  03ff260  lfs 4, 20(6)
  03ff264  fmuls 2, 4, 2
  03ff268  stw 7, 28(30)
  03ff26c  fdivs 2, 2, 3
  03ff270  fmuls 3, 12, 2
  03ff274  fmuls 4, 11, 2
  03ff278  fmuls 1, 1, 2
  03ff27c  fsel 2, 10, 31, 3
  03ff280  fsel 5, 13, 31, 4
  03ff284  fsel 6, 0, 31, 1
  03ff288  fsel 2, 30, 2, 3
  03ff28c  fsel 3, 29, 5, 4
  03ff290  fsel 1, 28, 6, 1
  03ff294  stfs 2, 16(30)
  03ff298  stfs 3, 20(30)
  03ff29c  stfs 1, 24(30)
  03ff2a0  bl 0xfe484
  03ff2a4  nop
  03ff2a8  li 4, 2
  03ff2ac  stw 3, 68(30)
  03ff2b0  stw 3, 64(30)
  03ff2b4  stb 4, 32(31)
  03ff2b8  b 0x3ff924
  03ff2bc  addic 3, 30, 68
  03ff2c0  fmr 26, 29
  03ff2c4  bl 0x4fff60
  03ff2c8  nop
  03ff2cc  fmuls 1, 28, 28
  03ff2d0  lis 3, 64
  03ff2d4  lis 29, 230
  03ff2d8  addi 3, 3, -4640
  03ff2dc  addic 29, 29, -20768
  03ff2e0  fmadds 1, 27, 27, 1
  03ff2e4  lfs 29, 72(3)
  03ff2e8  lfs 2, 20(29)
  03ff2ec  fmuls 2, 2, 29
  03ff2f0  fmadds 1, 26, 26, 1
  03ff2f4  lfs 3, 20(30)
  03ff2f8  lfs 4, 16(30)
  03ff2fc  lfs 5, 24(30)
  03ff300  fsqrts 1, 1
  03ff304  fdivs 2, 2, 1
  03ff308  fsub 6, 31, 1
  03ff30c  fsub 8, 31, 1
  03ff310  fsub 9, 31, 1
  03ff314  fsub 7, 1, 31
  03ff318  fsub 10, 1, 31
  03ff31c  fsub 1, 1, 31
  03ff320  fmuls 11, 28, 2
  03ff324  fmuls 12, 27, 2
  03ff328  fmuls 2, 26, 2
  03ff32c  fsel 6, 6, 31, 11
  03ff330  fsel 8, 8, 31, 12
  03ff334  fsel 9, 9, 31, 2
  03ff338  fsel 6, 7, 6, 11
  03ff33c  fsel 7, 10, 8, 12
  03ff340  fsel 1, 1, 9, 2
  03ff344  fadds 3, 3, 6
  03ff348  fadds 2, 4, 7
  03ff34c  fadds 4, 5, 1
  03ff350  fmuls 1, 3, 3
  03ff354  stfs 2, 16(30)
  03ff358  stfs 3, 20(30)
  03ff35c  stfs 4, 24(30)
  03ff360  lfs 27, 20(29)
  03ff364  fmadds 1, 2, 2, 1
  03ff368  fmadds 1, 4, 4, 1
  03ff36c  fsqrts 1, 1
  03ff370  fcmpu 0, 1, 31
  03ff374  bf 2, 0x3ff3a4
  03ff378  stfs 2, 128(1)
  03ff37c  li 3, 0
  03ff380  lfs 1, 20(30)
  03ff384  stfs 1, 132(1)
  03ff388  lfs 1, 24(30)
  03ff38c  stfs 1, 136(1)
  03ff390  lfs 2, 28(30)
  03ff394  stw 3, 136(1)
  03ff398  stw 3, 132(1)
  03ff39c  stw 3, 128(1)
  03ff3a0  b 0x3ff3d8
  03ff3a4  lis 3, 64
  03ff3a8  addi 3, 3, -4640
  03ff3ac  lfs 3, 76(3)
  03ff3b0  fdivs 1, 3, 1
  03ff3b4  fmuls 2, 2, 1
  03ff3b8  stfs 2, 128(1)
  03ff3bc  lfs 2, 20(30)
  03ff3c0  fmuls 2, 2, 1
  03ff3c4  stfs 2, 132(1)
  03ff3c8  lfs 2, 24(30)
  03ff3cc  fmuls 1, 2, 1
  03ff3d0  stfs 1, 136(1)
  03ff3d4  lfs 2, 28(30)
  03ff3d8  stfs 2, 140(1)
  03ff3dc  lfs 1, 20(30)
  03ff3e0  lfs 2, 16(30)
  03ff3e4  fmuls 3, 1, 1
  03ff3e8  lfs 4, 24(30)
  03ff3ec  lis 3, 64
  03ff3f0  addi 3, 3, -4640
  03ff3f4  fmadds 3, 2, 2, 3
  03ff3f8  lfs 5, 68(3)
  03ff3fc  fmuls 5, 27, 5
  03ff400  fmadds 3, 4, 4, 3
  03ff404  addic 3, 1, 112
  03ff408  addic 4, 1, 128
  03ff40c  li 5, 6
  03ff410  li 6, 0
  03ff414  fsqrts 3, 3
  03ff418  li 7, 0
  03ff41c  fdivs 5, 5, 3
  03ff420  fsub 6, 31, 3
  03ff424  fsub 7, 31, 3
  03ff428  fsub 8, 31, 3
  03ff42c  fsub 9, 3, 31
  03ff430  fsub 10, 3, 31
  03ff434  fsub 3, 3, 31
  03ff438  fmuls 2, 2, 5
  03ff43c  fmuls 1, 1, 5
  03ff440  fmuls 4, 4, 5
  03ff444  fsel 5, 6, 31, 2
  03ff448  fsel 6, 7, 31, 1
  03ff44c  fsel 7, 8, 31, 4
  03ff450  fsel 2, 9, 5, 2
  03ff454  fsel 1, 10, 6, 1
  03ff458  fsel 3, 3, 7, 4
  03ff45c  stfs 2, 16(30)
  03ff460  stfs 1, 20(30)
  03ff464  stfs 3, 24(30)
  03ff468  lfs 1, 128(1)
  03ff46c  lfs 2, 16(31)
  03ff470  lfs 3, 132(1)
  03ff474  fadds 1, 1, 2
  03ff478  lfs 2, 20(31)
  03ff47c  lfs 4, 136(1)
  03ff480  fadds 2, 3, 2
  03ff484  lfs 3, 24(31)
  03ff488  fadds 3, 4, 3
  03ff48c  stfs 1, 128(1)
  03ff490  stfs 2, 132(1)
  03ff494  stfs 3, 136(1)
  03ff498  bl 0x57820
  03ff49c  nop
  03ff4a0  cmpwi 3, 0
  03ff4a4  bt 2, 0x3ff4e8
  03ff4a8  li 3, 8
  03ff4ac  bl 0xfc620
  03ff4b0  nop
  03ff4b4  cmpwi 3, 0
  03ff4b8  bf 2, 0x3ff4e8
  03ff4bc  lis 5, 161
  03ff4c0  addic 3, 30, 16
  03ff4c4  addic 5, 5, 2368
  03ff4c8  ori 4, 3, 0
  03ff4cc  addic 5, 5, 64
  03ff4d0  bl 0x500608
  03ff4d4  nop
  03ff4d8  lfs 1, 24(30)
  03ff4dc  lfs 2, 20(29)
  03ff4e0  fmadds 1, 2, 29, 1
  03ff4e4  stfs 1, 24(30)
  03ff4e8  lfs 1, 0(30)
  03ff4ec  lis 3, 64
  03ff4f0  lfs 2, 16(30)
  03ff4f4  lfs 3, 4(30)
  03ff4f8  fadds 1, 1, 2
  03ff4fc  addi 3, 3, -4640
  03ff500  lfs 2, 20(30)
  03ff504  lfs 4, 8(30)
  03ff508  fadds 2, 3, 2
  03ff50c  lfs 3, 24(30)
  03ff510  fadds 3, 4, 3
  03ff514  lis 4, 114
  03ff518  stfs 1, 0(30)
  03ff51c  stfs 2, 4(30)
  03ff520  stfs 3, 8(30)
  03ff524  lfs 1, 28(3)
  03ff528  lfs 2, 4(29)
  03ff52c  lfs 3, 32(3)
  03ff530  fadds 1, 2, 1
  03ff534  lfs 4, 36(3)
  03ff538  fsubs 5, 3, 2
  03ff53c  li 5, 6
  03ff540  fsubs 3, 3, 1
  03ff544  fsub 7, 2, 5
  03ff548  fsubs 6, 4, 1
  03ff54c  fsubs 4, 4, 2
  03ff550  fsub 8, 1, 3
  03ff554  fsel 2, 7, 5, 2
  03ff558  lfs 5, 40(3)
  03ff55c  li 6, 0
  03ff560  fsel 1, 8, 3, 1
  03ff564  fsub 3, 4, 2
  03ff568  li 7, 0
  03ff56c  fsub 8, 6, 1
  03ff570  fsel 2, 3, 4, 2
  03ff574  lfs 3, 44(3)
  03ff578  lfs 4, 48(3)
  03ff57c  lfs 9, 52(3)
  03ff580  lfs 10, 20(29)
  03ff584  fsel 1, 8, 6, 1
  03ff588  fmuls 6, 2, 2
  03ff58c  fmuls 7, 1, 1
  03ff590  fmuls 8, 6, 2
  03ff594  fmuls 11, 7, 1
  03ff598  fmuls 12, 6, 8
  03ff59c  fmadds 2, 8, 5, 2
  03ff5a0  fmuls 8, 7, 11
  03ff5a4  fmadds 1, 11, 5, 1
  03ff5a8  fmuls 5, 6, 12
  03ff5ac  fmadds 2, 12, 3, 2
  03ff5b0  fmuls 11, 7, 8
  03ff5b4  fmadds 1, 8, 3, 1
  03ff5b8  fmuls 3, 6, 5
  03ff5bc  fmadds 2, 5, 4, 2
  03ff5c0  fmuls 5, 7, 11
  03ff5c4  fmadds 1, 11, 4, 1
  03ff5c8  fmadds 2, 3, 9, 2
  03ff5cc  lfs 3, -3052(4)
  03ff5d0  addic 4, 31, 16
  03ff5d4  fmadds 1, 5, 9, 1
  03ff5d8  fmuls 2, 10, 2
  03ff5dc  fmuls 1, 10, 1
  03ff5e0  stfs 2, 132(1)
  03ff5e4  stfs 1, 128(1)
  03ff5e8  lfs 28, 56(3)
  03ff5ec  lfs 4, 80(3)
  03ff5f0  fmuls 3, 3, 28
  03ff5f4  fmuls 1, 1, 4
  03ff5f8  fmuls 2, 2, 4
  03ff5fc  fmuls 3, 3, 4
  03ff600  stfs 1, 128(1)
  03ff604  stfs 2, 132(1)
  03ff608  stfs 3, 136(1)
  03ff60c  lfs 1, 84(3)
  03ff610  lfs 2, 0(30)
  03ff614  lfs 3, 4(30)
  03ff618  lfs 4, 8(30)
  03ff61c  fmuls 2, 2, 1
  03ff620  fmuls 3, 3, 1
  03ff624  fmuls 1, 4, 1
  03ff628  addic 3, 1, 112
  03ff62c  stfs 2, 0(30)
  03ff630  stfs 3, 4(30)
  03ff634  stfs 1, 8(30)
  03ff638  lfs 4, 128(1)
  03ff63c  fadds 2, 4, 2
  03ff640  stfs 2, 0(30)
  03ff644  lfs 4, 132(1)
  03ff648  fadds 3, 4, 3
  03ff64c  stfs 3, 4(30)
  03ff650  lfs 3, 136(1)
  03ff654  fadds 1, 3, 1
  03ff658  stfs 1, 8(30)
  03ff65c  lfs 1, 140(1)
  03ff660  stfs 1, 12(30)
  03ff664  lfs 1, 16(31)
  03ff668  fadds 1, 1, 2
  03ff66c  lfs 2, 20(31)
  03ff670  lfs 3, 24(31)
  03ff674  stfs 1, 16(31)
  03ff678  lfs 1, 4(30)
  03ff67c  fadds 1, 2, 1
  03ff680  stfs 1, 20(31)
  03ff684  lfs 1, 8(30)
  03ff688  fadds 1, 3, 1
  03ff68c  stfs 1, 24(31)
  03ff690  bl 0x57820
  03ff694  nop
  03ff698  cmpwi 3, 0
  03ff69c  lfs 2, 8(30)
  03ff6a0  bt 2, 0x3ff750
  03ff6a4  lis 3, 161
  03ff6a8  ori 4, 30, 0
  03ff6ac  addic 6, 3, 2368
  03ff6b0  ori 3, 30, 0
  03ff6b4  addic 5, 6, 64
  03ff6b8  lfs 1, 32(6)
  03ff6bc  stfs 1, 16(31)
  03ff6c0  lfs 1, 36(6)
  03ff6c4  stfs 1, 20(31)
  03ff6c8  lfs 1, 40(6)
  03ff6cc  stfs 1, 24(31)
  03ff6d0  lfs 1, 44(6)
  03ff6d4  stfs 1, 28(31)
  03ff6d8  bl 0x500608
  03ff6dc  nop
  03ff6e0  lis 3, 64
  03ff6e4  lfs 1, 4(30)
  03ff6e8  lfs 2, 0(30)
  03ff6ec  addi 3, 3, -4640
  03ff6f0  lfs 3, 88(3)
  03ff6f4  lfs 4, 8(30)
  03ff6f8  fmuls 1, 1, 3
  03ff6fc  fmuls 2, 2, 3
  03ff700  fmuls 3, 4, 3
  03ff704  stfs 1, 4(30)
  03ff708  stfs 2, 0(30)
  03ff70c  stfs 3, 8(30)
  03ff710  lfs 1, 16(31)
  03ff714  fadds 1, 1, 2
  03ff718  lfs 2, 20(31)
  03ff71c  lfs 3, 24(31)
  03ff720  stfs 1, 16(31)
  03ff724  lfs 1, 4(30)
  03ff728  fadds 1, 2, 1
  03ff72c  stfs 1, 20(31)
  03ff730  lfs 1, 8(30)
  03ff734  fadds 1, 3, 1
  03ff738  stfs 1, 24(31)
  03ff73c  lfs 1, 24(3)
  03ff740  lfs 2, 8(30)
  03ff744  lfs 3, 20(29)
  03ff748  fmadds 2, 3, 1, 2
  03ff74c  stfs 2, 8(30)
  03ff750  lfs 3, 20(29)
  03ff754  fmr 1, 2
  03ff758  fcmpu 0, 30, 3
  03ff75c  cror 6, 0, 2
  03ff760  bt 6, 0x3ff7c4
  03ff764  lfs 1, 4(30)
  03ff768  lfs 4, 0(30)
  03ff76c  fmuls 5, 1, 1
  03ff770  fmadds 5, 4, 4, 5
  03ff774  fmadds 5, 2, 2, 5
  03ff778  fsqrts 5, 5
  03ff77c  fdivs 3, 3, 5
  03ff780  fsub 6, 31, 5
  03ff784  fsub 7, 31, 5
  03ff788  fsub 8, 5, 31
  03ff78c  fsub 9, 5, 31
  03ff790  fsub 10, 31, 5
  03ff794  fsub 5, 5, 31
  03ff798  fmuls 4, 4, 3
  03ff79c  fmuls 1, 1, 3
  03ff7a0  fmuls 2, 2, 3
  03ff7a4  fsel 3, 6, 31, 4
  03ff7a8  fsel 6, 7, 31, 1
  03ff7ac  fsel 7, 10, 31, 2
  03ff7b0  fsel 3, 8, 3, 4
  03ff7b4  fsel 4, 9, 6, 1
  03ff7b8  fsel 1, 5, 7, 2
  03ff7bc  stfs 3, 0(30)
  03ff7c0  stfs 4, 4(30)
  03ff7c4  lis 3, 114
  03ff7c8  lfs 2, -3052(3)
  03ff7cc  fmuls 3, 2, 28
  03ff7d0  lfs 2, 32(30)
  03ff7d4  fmadds 4, 3, 29, 1
  03ff7d8  fsub 1, 3, 1
  03ff7dc  fsel 1, 1, 3, 4
  03ff7e0  stfs 1, 8(30)
  03ff7e4  lfs 1, 64(31)
  03ff7e8  bl 0x502578
  03ff7ec  nop
  03ff7f0  stfs 1, 64(31)
  03ff7f4  lfs 1, 68(31)
  03ff7f8  lfs 2, 36(30)
  03ff7fc  bl 0x502578
  03ff800  nop
  03ff804  stfs 1, 68(31)
  03ff808  lfs 1, 72(31)
  03ff80c  lfs 2, 40(30)
  03ff810  bl 0x502578
  03ff814  nop
  03ff818  lis 3, 64
  03ff81c  stfs 1, 72(31)
  03ff820  lis 4, 114
  03ff824  addi 3, 3, -4640
  03ff828  lfs 1, 92(3)
  03ff82c  lfs 28, -3056(4)
  03ff830  lwz 4, 68(30)
  03ff834  fmuls 1, 28, 1
  03ff838  lwz 3, 64(30)
  03ff83c  fctiwz 1, 1
  03ff840  stfd 1, 144(1)
  03ff844  lwz 5, 148(1)
  03ff848  subc 5, 3, 5
  03ff84c  cmpw 4, 5
  03ff850  bf 1, 0x3ff88c
  03ff854  subc 3, 4, 3
  03ff858  extsw 3, 3
  03ff85c  bl 0x502730
  03ff860  nop
  03ff864  lis 3, 64
  03ff868  lis 4, 114
  03ff86c  lfs 2, 76(30)
  03ff870  addi 3, 3, -4640
  03ff874  fmuls 1, 2, 1
  03ff878  lfs 2, 96(3)
  03ff87c  lfs 4, -3056(4)
  03ff880  fmuls 2, 4, 2
  03ff884  fdivs 1, 1, 2
  03ff888  b 0x3ff8cc
  03ff88c  lis 3, 64
  03ff890  addi 3, 3, -4640
  03ff894  lfs 1, 100(3)
  03ff898  fmuls 1, 28, 1
  03ff89c  fctiwz 1, 1
  03ff8a0  stfd 1, 144(1)
  03ff8a4  lwz 3, 148(1)
  03ff8a8  cmpw 4, 3
  03ff8ac  bf 0, 0x3ff8c8
  03ff8b0  lis 3, 64
  03ff8b4  lfs 1, 44(31)
  03ff8b8  addi 3, 3, -4640
  03ff8bc  lfs 2, 104(3)
  03ff8c0  fmuls 1, 1, 2
  03ff8c4  b 0x3ff8cc
  03ff8c8  lfs 1, 76(30)
  03ff8cc  stfs 1, 44(31)
  03ff8d0  lwz 3, 68(30)
  03ff8d4  cmpwi 3, 0
  03ff8d8  bt 1, 0x3ff924
  03ff8dc  lfs 1, 48(30)
  03ff8e0  li 3, 120
  03ff8e4  li 4, 2400
  03ff8e8  stfs 1, 16(31)
  03ff8ec  lfs 1, 52(30)
  03ff8f0  stfs 1, 20(31)
  03ff8f4  lfs 1, 56(30)
  03ff8f8  stfs 1, 24(31)
  03ff8fc  lfs 1, 60(30)
  03ff900  stfs 1, 28(31)
  03ff904  bl 0xfe484
  03ff908  nop
  03ff90c  stw 3, 68(30)
  03ff910  li 4, 0
  03ff914  stw 3, 64(30)
  03ff918  li 3, 1
  03ff91c  stw 4, 44(31)
  03ff920  stb 3, 32(31)
  03ff924  ld 0, 256(1)
  03ff928  mtlr 0
  03ff92c  lfd 25, 184(1)
  03ff930  lfd 26, 192(1)
  03ff934  lfd 27, 200(1)
  03ff938  lfd 28, 208(1)
  03ff93c  lfd 29, 216(1)
  03ff940  lfd 30, 224(1)
  03ff944  lfd 31, 232(1)
  03ff948  ld 29, 160(1)
  03ff94c  ld 30, 168(1)
  03ff950  ld 31, 176(1)
  03ff954  addi 1, 1, 240
  03ff958  blr

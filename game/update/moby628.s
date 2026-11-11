# game/update/moby628.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003eba50:   # 0x3eba50, 0x31c bytes
  03eba50  stdu 1, -192(1)
  03eba54  mflr 0
  03eba58  std 0, 208(1)
  03eba5c  std 31, 184(1)
  03eba60  ori 31, 3, 0
  03eba64  std 30, 176(1)
  03eba68  std 28, 160(1)
  03eba6c  li 3, 627
  03eba70  ori 30, 5, 0
  03eba74  std 29, 168(1)
  03eba78  std 27, 152(1)
  03eba7c  ori 28, 4, 0
  03eba80  bl 0xefa28
  03eba84  nop
  03eba88  ori 29, 3, 0
  03eba8c  cmpwi 29, 0
  03eba90  bf 2, 0x3eba9c
  03eba94  ori 3, 29, 0
  03eba98  b 0x3ebd48
  03eba9c  li 3, 1
  03ebaa0  lhz 4, 50(31)
  03ebaa4  lis 5, 114
  03ebaa8  ori 6, 30, 0
  03ebaac  sth 4, 50(29)
  03ebab0  lhz 4, 50(31)
  03ebab4  stb 3, 49(29)
  03ebab8  stb 4, 48(29)
  03ebabc  ld 4, 56(31)
  03ebac0  std 4, 56(29)
  03ebac4  lfs 1, 0(28)
  03ebac8  lis 4, 63
  03ebacc  stfs 1, 16(29)
  03ebad0  lfs 1, 4(28)
  03ebad4  addi 4, 4, -17856
  03ebad8  stfs 1, 20(29)
  03ebadc  lfs 1, 8(28)
  03ebae0  stfs 1, 24(29)
  03ebae4  lfs 1, 12(28)
  03ebae8  stfs 1, 28(29)
  03ebaec  lfs 1, 0(4)
  03ebaf0  lfs 2, -3060(5)
  03ebaf4  lwz 30, 120(29)
  03ebaf8  fmuls 1, 2, 1
  03ebafc  li 5, 0
  03ebb00  li 8, 1024
  03ebb04  lis 10, 16256
  03ebb08  lis 7, 16166
  03ebb0c  lis 11, 16192
  03ebb10  lis 9, 15948
  03ebb14  lis 28, 16128
  03ebb18  ori 7, 7, 26214
  03ebb1c  lis 12, 15395
  03ebb20  stfs 1, 16(30)
  03ebb24  lfs 1, 4(4)
  03ebb28  fmuls 1, 2, 1
  03ebb2c  ori 9, 9, 52429
  03ebb30  ori 12, 12, 55050
  03ebb34  lis 27, 115
  03ebb38  addic 27, 27, 22784
  03ebb3c  stfs 1, 20(30)
  03ebb40  lfs 1, 4(6)
  03ebb44  lfs 2, 0(6)
  03ebb48  fmuls 1, 1, 1
  03ebb4c  fmadds 1, 2, 2, 1
  03ebb50  fsqrts 1, 1
  03ebb54  stfs 1, 24(30)
  03ebb58  lfs 1, 8(6)
  03ebb5c  stb 5, 61(30)
  03ebb60  stfs 1, 28(30)
  03ebb64  stw 3, 36(30)
  03ebb68  stw 8, 32(30)
  03ebb6c  stw 10, 40(30)
  03ebb70  stw 11, 48(30)
  03ebb74  stw 28, 52(30)
  03ebb78  stw 7, 56(30)
  03ebb7c  stw 9, 72(30)
  03ebb80  stw 12, 76(30)
  03ebb84  lwz 3, 0(6)
  03ebb88  lwz 5, 4(6)
  03ebb8c  lfs 1, 0(6)
  03ebb90  lfs 2, 4(6)
  03ebb94  fabs 5, 1
  03ebb98  fabs 2, 2
  03ebb9c  rlwinm 5, 5, 3, 29, 29
  03ebba0  fsubs 1, 5, 2
  03ebba4  stfs 1, 112(1)
  03ebba8  lfs 1, 8(4)
  03ebbac  lwz 4, 112(1)
  03ebbb0  lfs 3, 112(1)
  03ebbb4  rlwimi 5, 4, 2, 30, 30
  03ebbb8  fsub 4, 3, 1
  03ebbbc  fsub 6, 3, 1
  03ebbc0  rlwimi 5, 3, 4, 28, 28
  03ebbc4  ori 3, 27, 0
  03ebbc8  slwi 4, 5, 2
  03ebbcc  rlwimi 3, 5, 2, 26, 28
  03ebbd0  clrldi 3, 3, 32
  03ebbd4  lfsx 3, 27, 4
  03ebbd8  fsel 4, 4, 5, 2
  03ebbdc  fsel 5, 6, 2, 5
  03ebbe0  lfs 2, 4(3)
  03ebbe4  fcmpu 0, 4, 1
  03ebbe8  bt 1, 0x3ebbf0
  03ebbec  b 0x3ebd14
  03ebbf0  fsubs 6, 5, 4
  03ebbf4  fadds 4, 5, 4
  03ebbf8  addic 6, 1, 16
  03ebbfc  li 3, 2
  03ebc00  addic 5, 6, 100
  03ebc04  addic 4, 6, 116
  03ebc08  mtctr 3
  03ebc0c  fdivs 4, 6, 4
  03ebc10  fmuls 6, 4, 4
  03ebc14  stfs 4, 128(1)
  03ebc18  stfs 4, 120(1)
  03ebc1c  stfs 4, 124(1)
  03ebc20  stfs 4, 116(1)
  03ebc24  lfs 7, 128(1)
  03ebc28  lfs 8, 120(1)
  03ebc2c  lfs 9, 124(1)
  03ebc30  fmuls 4, 6, 6
  03ebc34  fmuls 8, 8, 6
  03ebc38  fmuls 7, 7, 4
  03ebc3c  fmuls 5, 4, 4
  03ebc40  fmuls 4, 9, 4
  03ebc44  stfs 8, 120(1)
  03ebc48  fmuls 6, 7, 6
  03ebc4c  stfs 4, 124(1)
  03ebc50  stfs 6, 128(1)
  03ebc54  lfs 4, 100(6)
  03ebc58  fmuls 4, 4, 5
  03ebc5c  stfs 4, 116(6)
  03ebc60  lfs 4, 4(5)
  03ebc64  addic 6, 6, 8
  03ebc68  addic 5, 5, 8
  03ebc6c  fmuls 4, 4, 5
  03ebc70  stfs 4, 4(4)
  03ebc74  addic 4, 4, 8
  03ebc78  bdnz 0x3ebc54
  03ebc7c  ori 7, 1, 0
  03ebc80  lis 6, 115
  03ebc84  li 8, 4
  03ebc88  addic 5, 7, 116
  03ebc8c  addic 6, 6, 22752
  03ebc90  ori 4, 5, 0
  03ebc94  mtctr 8
  03ebc98  lfs 4, 116(7)
  03ebc9c  lfs 5, 0(6)
  03ebca0  fmuls 4, 4, 5
  03ebca4  lfs 5, 4(6)
  03ebca8  addic 6, 6, 8
  03ebcac  stfs 4, 116(7)
  03ebcb0  lfs 4, 4(5)
  03ebcb4  addic 7, 7, 8
  03ebcb8  fmuls 4, 4, 5
  03ebcbc  stfs 4, 4(5)
  03ebcc0  addic 5, 5, 8
  03ebcc4  bdnz 0x3ebc98
  03ebcc8  ori 5, 3, 0
  03ebccc  ori 3, 1, 0
  03ebcd0  mtctr 5
  03ebcd4  lfs 4, 116(3)
  03ebcd8  fadds 1, 1, 4
  03ebcdc  addic 3, 3, 16
  03ebce0  lfs 4, 4(4)
  03ebce4  lfs 5, 8(4)
  03ebce8  lfs 6, 12(4)
  03ebcec  addic 4, 4, 16
  03ebcf0  fadds 1, 1, 4
  03ebcf4  fadds 1, 1, 5
  03ebcf8  fadds 1, 1, 6
  03ebcfc  bdnz 0x3ebcd4
  03ebd00  lis 3, 63
  03ebd04  addi 3, 3, -17856
  03ebd08  lfs 4, 12(3)
  03ebd0c  fadds 1, 1, 4
  03ebd10  fmadds 1, 1, 3, 2
  03ebd14  ori 4, 30, 0
  03ebd18  ori 3, 29, 0
  03ebd1c  li 6, 0
  03ebd20  li 7, 1
  03ebd24  li 8, 0
  03ebd28  bl 0x10ad80
  03ebd2c  nop
  03ebd30  li 4, 0
  03ebd34  stw 31, 104(30)
  03ebd38  li 5, 1
  03ebd3c  ori 3, 29, 0
  03ebd40  stw 4, 108(30)
  03ebd44  stb 5, 32(29)
  03ebd48  ld 0, 208(1)
  03ebd4c  mtlr 0
  03ebd50  ld 27, 152(1)
  03ebd54  ld 28, 160(1)
  03ebd58  ld 29, 168(1)
  03ebd5c  ld 30, 176(1)
  03ebd60  ld 31, 184(1)
  03ebd64  addi 1, 1, 192
  03ebd68  blr

M628_003ebd6c:   # 0x3ebd6c, 0x14 bytes
  03ebd6c  lis 3, 133
  03ebd70  lis 4, 1
  03ebd74  addic 3, 3, 16564
  03ebd78  stw 4, 72(3)
  03ebd7c  blr

UpdateMoby_628:   # 0x3ebd90, 0x23c bytes
  03ebd90  stdu 1, -224(1)
  03ebd94  mflr 0
  03ebd98  std 0, 240(1)
  03ebd9c  std 31, 216(1)
  03ebda0  std 29, 200(1)
  03ebda4  ori 31, 3, 0
  03ebda8  lwz 29, 120(31)
  03ebdac  std 30, 208(1)
  03ebdb0  addic 3, 29, 8
  03ebdb4  bl 0x4fff60
  03ebdb8  nop
  03ebdbc  cmpwi 3, 0
  03ebdc0  bt 2, 0x3ebdd4
  03ebdc4  ori 3, 31, 0
  03ebdc8  bl 0xefb38
  03ebdcc  nop
  03ebdd0  b 0x3ebfb0
  03ebdd4  lis 30, 151
  03ebdd8  lfs 1, 20(31)
  03ebddc  lfs 3, 16(31)
  03ebde0  addic 30, 30, -25376
  03ebde4  lis 3, 63
  03ebde8  lfs 4, 132(30)
  03ebdec  lfs 2, 128(30)
  03ebdf0  fsubs 4, 1, 4
  03ebdf4  fsubs 5, 3, 2
  03ebdf8  addi 3, 3, -17024
  03ebdfc  fmuls 4, 4, 4
  03ebe00  fmadds 4, 5, 5, 4
  03ebe04  lfs 5, 0(3)
  03ebe08  lfs 6, 0(29)
  03ebe0c  fadds 5, 6, 5
  03ebe10  fsqrts 4, 4
  03ebe14  fcmpu 0, 4, 5
  03ebe18  cror 6, 1, 2
  03ebe1c  bt 6, 0x3ebf30
  03ebe20  fsubs 2, 2, 3
  03ebe24  lfs 3, 132(30)
  03ebe28  fsubs 1, 3, 1
  03ebe2c  lfs 3, 136(30)
  03ebe30  lfs 4, 24(31)
  03ebe34  fsubs 3, 3, 4
  03ebe38  lis 3, 63
  03ebe3c  li 4, 0
  03ebe40  addi 6, 3, -17024
  03ebe44  stfs 2, 128(1)
  03ebe48  fmuls 5, 1, 1
  03ebe4c  stfs 1, 132(1)
  03ebe50  lfs 4, 140(30)
  03ebe54  stfs 4, 140(1)
  03ebe58  stfs 3, 136(1)
  03ebe5c  lis 3, 114
  03ebe60  lfs 4, 4(6)
  03ebe64  fmadds 5, 2, 2, 5
  03ebe68  stw 4, 136(1)
  03ebe6c  lis 5, 1
  03ebe70  addic 7, 1, 128
  03ebe74  ori 5, 5, 1
  03ebe78  fsqrts 3, 5
  03ebe7c  lfs 5, 8(6)
  03ebe80  lfs 6, -3052(3)
  03ebe84  stw 4, 136(1)
  03ebe88  addic 3, 1, 144
  03ebe8c  ori 4, 31, 0
  03ebe90  fmuls 7, 6, 5
  03ebe94  fmuls 5, 6, 5
  03ebe98  stfs 5, 136(1)
  03ebe9c  fdivs 6, 7, 3
  03ebea0  fsub 5, 4, 3
  03ebea4  fsub 7, 4, 3
  03ebea8  fsub 8, 3, 4
  03ebeac  fsub 3, 3, 4
  03ebeb0  fmuls 2, 2, 6
  03ebeb4  fmuls 1, 1, 6
  03ebeb8  fsel 5, 5, 4, 2
  03ebebc  fsel 4, 7, 4, 1
  03ebec0  fsel 2, 8, 5, 2
  03ebec4  fsel 1, 3, 4, 1
  03ebec8  stfs 2, 128(1)
  03ebecc  stfs 1, 132(1)
  03ebed0  lfs 1, 12(6)
  03ebed4  bl 0x10581c
  03ebed8  nop
  03ebedc  li 3, 144
  03ebee0  li 4, 160
  03ebee4  li 6, 176
  03ebee8  li 5, 64
  03ebeec  li 7, 80
  03ebef0  lvx 2, 3, 1
  03ebef4  li 8, 96
  03ebef8  lvx 3, 4, 1
  03ebefc  lwz 3, 8320(30)
  03ebf00  lvx 4, 6, 1
  03ebf04  stvx 2, 5, 1
  03ebf08  stvx 3, 7, 1
  03ebf0c  stvx 4, 8, 1
  03ebf10  ld 5, 64(1)
  03ebf14  ld 6, 72(1)
  03ebf18  ld 7, 80(1)
  03ebf1c  ld 8, 88(1)
  03ebf20  ld 9, 96(1)
  03ebf24  ld 10, 104(1)
  03ebf28  bl 0x105ab4
  03ebf2c  nop
  03ebf30  lis 3, 133
  03ebf34  lis 4, 114
  03ebf38  lfs 1, 4(29)
  03ebf3c  lis 5, 161
  03ebf40  lfs 2, 16756(3)
  03ebf44  lfs 3, -3052(4)
  03ebf48  lwz 3, 1808(5)
  03ebf4c  fmadds 1, 2, 3, 1
  03ebf50  rlwinm 3, 3, 0, 29, 29
  03ebf54  cmpwi 3, 0
  03ebf58  stfs 1, 4(29)
  03ebf5c  bf 2, 0x3ebf9c
  03ebf60  lis 3, 63
  03ebf64  li 5, 0
  03ebf68  addi 3, 3, -17024
  03ebf6c  addic 4, 31, 16
  03ebf70  lis 6, 1
  03ebf74  li 9, 0
  03ebf78  li 10, 1
  03ebf7c  lfs 2, 12(3)
  03ebf80  lwz 7, 12(29)
  03ebf84  lfs 1, 0(29)
  03ebf88  fmr 3, 2
  03ebf8c  ori 3, 7, 0
  03ebf90  std 5, 112(1)
  03ebf94  bl 0x105870
  03ebf98  nop
  03ebf9c  lis 3, 113
  03ebfa0  ori 4, 31, 0
  03ebfa4  addic 3, 3, -9560
  03ebfa8  bl 0x6d720
  03ebfac  nop
  03ebfb0  ld 0, 240(1)
  03ebfb4  mtlr 0
  03ebfb8  ld 29, 200(1)
  03ebfbc  ld 30, 208(1)
  03ebfc0  ld 31, 216(1)
  03ebfc4  addi 1, 1, 224
  03ebfc8  blr

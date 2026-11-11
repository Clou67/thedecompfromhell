# game/update/moby1426.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1426_0027ac98:   # 0x27ac98, 0x454 bytes
  027ac98  stdu 1, -304(1)
  027ac9c  mflr 0
  027aca0  std 0, 320(1)
  027aca4  stfd 24, 240(1)
  027aca8  stfd 25, 248(1)
  027acac  stfd 26, 256(1)
  027acb0  stfd 27, 264(1)
  027acb4  stfd 28, 272(1)
  027acb8  stfd 29, 280(1)
  027acbc  stfd 30, 288(1)
  027acc0  stfd 31, 296(1)
  027acc4  std 30, 224(1)
  027acc8  ori 30, 3, 0
  027accc  lis 3, 161
  027acd0  std 29, 216(1)
  027acd4  lis 4, 40
  027acd8  std 22, 160(1)
  027acdc  addi 29, 4, -21392
  027ace0  lwz 22, 120(30)
  027ace4  lwz 3, 1808(3)
  027ace8  std 31, 232(1)
  027acec  std 28, 208(1)
  027acf0  std 27, 200(1)
  027acf4  std 26, 192(1)
  027acf8  std 25, 184(1)
  027acfc  std 24, 176(1)
  027ad00  std 23, 168(1)
  027ad04  std 21, 152(1)
  027ad08  extsw 3, 3
  027ad0c  bl 0x502730
  027ad10  nop
  027ad14  lis 3, 123
  027ad18  lis 31, 114
  027ad1c  lis 4, 123
  027ad20  lfs 2, -22980(3)
  027ad24  lfs 3, -3052(31)
  027ad28  lwz 3, -23000(4)
  027ad2c  fmuls 31, 2, 3
  027ad30  extsw 3, 3
  027ad34  fmuls 31, 31, 1
  027ad38  bl 0x685c4
  027ad3c  nop
  027ad40  ori 4, 3, 0
  027ad44  li 3, 24
  027ad48  bl 0x174f80
  027ad4c  nop
  027ad50  lis 7, 123
  027ad54  li 3, 0
  027ad58  li 4, 1
  027ad5c  li 5, 0
  027ad60  li 6, 1
  027ad64  lwz 7, -23004(7)
  027ad68  bl 0x502ea8
  027ad6c  nop
  027ad70  ori 4, 3, 0
  027ad74  li 3, 3
  027ad78  bl 0x174f80
  027ad7c  nop
  027ad80  li 3, 0
  027ad84  li 4, 0
  027ad88  li 8, 0
  027ad8c  li 5, 0
  027ad90  li 6, 0
  027ad94  li 7, 0
  027ad98  bl 0x502f08
  027ad9c  nop
  027ada0  ori 4, 3, 0
  027ada4  li 3, 6
  027ada8  bl 0x174f80
  027adac  nop
  027adb0  lis 9, 0
  027adb4  li 3, 0
  027adb8  li 4, 0
  027adbc  ori 9, 9, 65424
  027adc0  li 5, 1
  027adc4  li 6, 1
  027adc8  li 7, 1
  027adcc  li 8, 0
  027add0  bl 0x502fd4
  027add4  nop
  027add8  ori 4, 3, 0
  027addc  li 3, 26
  027ade0  bl 0x174f80
  027ade4  nop
  027ade8  lis 3, 123
  027adec  lfs 1, 4(22)
  027adf0  lis 4, 114
  027adf4  stfs 1, 0(22)
  027adf8  lfs 2, 0(29)
  027adfc  lfs 3, -22988(3)
  027ae00  lfs 4, -3056(4)
  027ae04  fmuls 3, 3, 4
  027ae08  lfs 4, 4(29)
  027ae0c  fdivs 2, 2, 3
  027ae10  lfs 3, -3052(31)
  027ae14  fmuls 2, 2, 4
  027ae18  fmuls 2, 2, 3
  027ae1c  bl 0x502578
  027ae20  nop
  027ae24  ori 3, 30, 0
  027ae28  stfs 1, 4(22)
  027ae2c  addic 4, 1, 112
  027ae30  addic 5, 1, 116
  027ae34  addic 6, 1, 120
  027ae38  bl 0xf1ef0
  027ae3c  nop
  027ae40  lis 3, 123
  027ae44  lwz 4, 120(1)
  027ae48  lis 25, 251
  027ae4c  lwz 5, 116(1)
  027ae50  li 24, 0
  027ae54  slwi 4, 4, 16
  027ae58  slwi 5, 5, 8
  027ae5c  lwz 3, -22996(3)
  027ae60  addic 25, 25, -13168
  027ae64  lwz 6, 112(1)
  027ae68  lis 28, 251
  027ae6c  lfs 24, 8(29)
  027ae70  slwi 3, 3, 24
  027ae74  lfs 25, 12(29)
  027ae78  or 23, 5, 6
  027ae7c  lfs 26, 16(29)
  027ae80  lis 5, 123
  027ae84  lfs 27, 20(29)
  027ae88  or 3, 3, 4
  027ae8c  lfs 28, 24(29)
  027ae90  ori 31, 24, 0
  027ae94  lfs 29, 28(29)
  027ae98  or 23, 3, 23
  027ae9c  lfs 30, 32(29)
  027aea0  addic 26, 25, 4
  027aea4  addic 27, 25, 8
  027aea8  addic 28, 28, -12268
  027aeac  addic 29, 5, -24096
  027aeb0  lfs 1, 4(29)
  027aeb4  lfs 3, 0(29)
  027aeb8  fmuls 1, 1, 1
  027aebc  lis 21, 123
  027aec0  lfs 2, -22992(21)
  027aec4  fmadds 1, 3, 3, 1
  027aec8  fsqrts 1, 1
  027aecc  bl 0x502798
  027aed0  nop
  027aed4  lfs 2, -22992(21)
  027aed8  fmuls 1, 1, 24
  027aedc  fdivs 1, 1, 2
  027aee0  bl 0x502648
  027aee4  nop
  027aee8  lfs 2, 4(22)
  027aeec  bl 0x502578
  027aef0  nop
  027aef4  lfs 4, 0(29)
  027aef8  lis 3, 123
  027aefc  lfs 6, 16(30)
  027af00  lfs 7, 4(29)
  027af04  addic 24, 24, 1
  027af08  cmplwi 24, 45
  027af0c  fsubs 2, 25, 1
  027af10  fsubs 3, 26, 1
  027af14  fsub 5, 1, 2
  027af18  fsel 1, 5, 2, 1
  027af1c  fadds 2, 4, 6
  027af20  lfs 4, 8(29)
  027af24  addic 29, 29, 12
  027af28  fsub 5, 3, 1
  027af2c  stfs 2, 0(25)
  027af30  lfs 2, 20(30)
  027af34  fadds 2, 7, 2
  027af38  addic 25, 25, 12
  027af3c  fsel 1, 5, 3, 1
  027af40  lfs 5, -22984(3)
  027af44  stfs 2, 0(26)
  027af48  lfs 2, 24(30)
  027af4c  fmuls 3, 1, 1
  027af50  fadds 2, 4, 2
  027af54  stw 23, 0(28)
  027af58  addic 26, 26, 12
  027af5c  addic 28, 28, 4
  027af60  fmuls 6, 3, 1
  027af64  fmuls 4, 3, 6
  027af68  fmadds 1, 6, 27, 1
  027af6c  fmuls 6, 3, 4
  027af70  fmadds 1, 4, 28, 1
  027af74  fmuls 3, 3, 6
  027af78  fmadds 1, 6, 29, 1
  027af7c  fmadds 1, 3, 30, 1
  027af80  fmadds 1, 5, 1, 2
  027af84  stfs 1, 0(27)
  027af88  addic 27, 27, 12
  027af8c  bt 0, 0x27aeb0
  027af90  lis 3, 40
  027af94  ori 24, 31, 0
  027af98  addi 3, 3, -21392
  027af9c  ori 30, 1, 0
  027afa0  lfs 30, 36(3)
  027afa4  lis 26, 123
  027afa8  lis 27, 251
  027afac  lis 28, 123
  027afb0  lis 29, 251
  027afb4  ori 25, 31, 0
  027afb8  addic 26, 26, -23556
  027afbc  addic 27, 27, -12628
  027afc0  addic 28, 28, -23552
  027afc4  addic 29, 29, -12624
  027afc8  lis 3, 16256
  027afcc  lis 4, -16608
  027afd0  fmr 2, 30
  027afd4  lis 5, 16160
  027afd8  ori 4, 4, 55676
  027afdc  stw 3, 124(1)
  027afe0  ori 5, 5, 55676
  027afe4  stw 3, 132(1)
  027afe8  stw 4, 128(1)
  027afec  lfs 1, 124(30)
  027aff0  stw 5, 136(1)
  027aff4  fmuls 1, 1, 31
  027aff8  bl 0x502798
  027affc  nop
  027b000  lfs 2, 0(26)
  027b004  fadds 3, 2, 1
  027b008  lfs 1, 128(30)
  027b00c  fmr 2, 30
  027b010  fmuls 1, 1, 31
  027b014  stfs 3, 0(27)
  027b018  bl 0x502798
  027b01c  nop
  027b020  lfs 2, 0(28)
  027b024  addic 25, 25, 1
  027b028  fadds 1, 2, 1
  027b02c  cmplwi 25, 45
  027b030  addic 26, 26, 8
  027b034  addic 27, 27, 8
  027b038  addic 28, 28, 8
  027b03c  stfs 1, 0(29)
  027b040  addic 29, 29, 8
  027b044  bt 0, 0x27afc8
  027b048  bl 0x71170
  027b04c  nop
  027b050  lis 3, 123
  027b054  lis 4, 123
  027b058  lis 5, 123
  027b05c  lis 6, 123
  027b060  li 7, 9
  027b064  lwz 3, -24128(3)
  027b068  lwz 4, -23016(4)
  027b06c  lwz 5, -23008(5)
  027b070  extsw 3, 3
  027b074  lwz 6, -23012(6)
  027b078  bl 0x74604
  027b07c  nop
  027b080  addic 24, 24, 1
  027b084  addic 30, 30, 8
  027b088  cmpwi 24, 2
  027b08c  bt 0, 0x27afa4
  027b090  ld 0, 320(1)
  027b094  mtlr 0
  027b098  lfd 24, 240(1)
  027b09c  lfd 25, 248(1)
  027b0a0  lfd 26, 256(1)
  027b0a4  lfd 27, 264(1)
  027b0a8  lfd 28, 272(1)
  027b0ac  lfd 29, 280(1)
  027b0b0  lfd 30, 288(1)
  027b0b4  lfd 31, 296(1)
  027b0b8  ld 21, 152(1)
  027b0bc  ld 22, 160(1)
  027b0c0  ld 23, 168(1)
  027b0c4  ld 24, 176(1)
  027b0c8  ld 25, 184(1)
  027b0cc  ld 26, 192(1)
  027b0d0  ld 27, 200(1)
  027b0d4  ld 28, 208(1)
  027b0d8  ld 29, 216(1)
  027b0dc  ld 30, 224(1)
  027b0e0  ld 31, 232(1)
  027b0e4  addi 1, 1, 304
  027b0e8  blr

UpdateMoby_1426:   # 0x27b0ec, 0x80 bytes
  027b0ec  stdu 1, -128(1)
  027b0f0  mflr 0
  027b0f4  std 0, 144(1)
  027b0f8  std 31, 120(1)
  027b0fc  ori 31, 3, 0
  027b100  lbz 3, 32(3)
  027b104  cmpwi 3, 0
  027b108  bf 2, 0x27b130
  027b10c  ori 3, 31, 0
  027b110  li 4, 64
  027b114  li 5, 64
  027b118  li 6, 64
  027b11c  bl 0xf1ec8
  027b120  nop
  027b124  li 3, 1
  027b128  stb 3, 32(31)
  027b12c  b 0x27b158
  027b130  lis 3, 113
  027b134  ori 4, 31, 0
  027b138  addic 3, 3, -23080
  027b13c  bl 0x6d7e0
  027b140  nop
  027b144  lhz 4, 52(31)
  027b148  li 3, 0
  027b14c  ori 4, 4, 1
  027b150  sth 3, 50(31)
  027b154  sth 4, 52(31)
  027b158  ld 0, 144(1)
  027b15c  mtlr 0
  027b160  ld 31, 120(1)
  027b164  addi 1, 1, 128
  027b168  blr

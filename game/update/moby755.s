# game/update/moby755.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_755:   # 0x44de60, 0x284 bytes
  044de60  stdu 1, -240(1)
  044de64  mflr 0
  044de68  std 0, 256(1)
  044de6c  stfd 28, 208(1)
  044de70  stfd 29, 216(1)
  044de74  stfd 30, 224(1)
  044de78  stfd 31, 232(1)
  044de7c  std 31, 200(1)
  044de80  lbz 4, 32(3)
  044de84  std 30, 192(1)
  044de88  ori 31, 3, 0
  044de8c  lwz 30, 120(3)
  044de90  cmpwi 4, 1
  044de94  cmpwi 1, 4, 2
  044de98  std 29, 184(1)
  044de9c  std 28, 176(1)
  044dea0  std 27, 168(1)
  044dea4  cmpwi 6, 4, 0
  044dea8  bt 1, 0x44deb4
  044deac  bf 25, 0x44e0b0
  044deb0  b 0x44debc
  044deb4  bf 5, 0x44e030
  044deb8  b 0x44e0b0
  044debc  lis 3, 69
  044dec0  li 5, 0
  044dec4  addi 6, 3, -8624
  044dec8  ori 3, 31, 0
  044decc  ori 4, 30, 0
  044ded0  lfs 28, 0(6)
  044ded4  stw 5, 124(1)
  044ded8  stw 5, 120(1)
  044dedc  stw 5, 116(1)
  044dee0  stw 5, 112(1)
  044dee4  bl 0x10b030
  044dee8  nop
  044deec  clrlwi 3, 3, 31
  044def0  cmpwi 3, 0
  044def4  bt 2, 0x44df00
  044def8  li 3, 2
  044defc  stb 3, 32(31)
  044df00  lis 3, 69
  044df04  li 30, 0
  044df08  addi 3, 3, -8624
  044df0c  lfs 29, 4(3)
  044df10  lfs 30, 8(3)
  044df14  lfs 31, 12(3)
  044df18  fmr 1, 28
  044df1c  lfs 3, 16(31)
  044df20  fmr 2, 29
  044df24  lfs 4, 20(31)
  044df28  stfs 3, 128(1)
  044df2c  lfs 3, 24(31)
  044df30  stfs 4, 132(1)
  044df34  lfs 4, 28(31)
  044df38  stfs 3, 136(1)
  044df3c  stfs 4, 140(1)
  044df40  bl 0xfcbe8
  044df44  nop
  044df48  lfs 2, 136(1)
  044df4c  fadds 3, 2, 1
  044df50  fmr 1, 30
  044df54  fmr 2, 31
  044df58  stfs 3, 136(1)
  044df5c  bl 0xfcbe8
  044df60  nop
  044df64  lfs 2, 128(1)
  044df68  fadds 3, 2, 1
  044df6c  fmr 1, 30
  044df70  fmr 2, 31
  044df74  stfs 3, 128(1)
  044df78  bl 0xfcbe8
  044df7c  nop
  044df80  lfs 2, 132(1)
  044df84  lis 5, 135
  044df88  fadds 1, 2, 1
  044df8c  lis 6, 135
  044df90  li 3, 20
  044df94  li 4, 40
  044df98  lwz 5, 7296(5)
  044df9c  lwz 6, 7300(6)
  044dfa0  extsw 29, 5
  044dfa4  extsw 28, 6
  044dfa8  stfs 1, 132(1)
  044dfac  bl 0xfe484
  044dfb0  nop
  044dfb4  extsw 3, 3
  044dfb8  li 4, 40
  044dfbc  std 3, 144(1)
  044dfc0  lis 3, 114
  044dfc4  lfs 1, -3056(3)
  044dfc8  lfd 2, 144(1)
  044dfcc  fcfid 2, 2
  044dfd0  li 3, 20
  044dfd4  frsp 2, 2
  044dfd8  fadds 2, 2, 29
  044dfdc  fmuls 1, 1, 2
  044dfe0  fctiwz 1, 1
  044dfe4  stfd 1, 144(1)
  044dfe8  lwz 5, 148(1)
  044dfec  extsw 27, 5
  044dff0  bl 0xfe484
  044dff4  nop
  044dff8  ori 9, 3, 0
  044dffc  addic 3, 1, 128
  044e000  li 8, 40
  044e004  addic 4, 1, 112
  044e008  ori 5, 29, 0
  044e00c  ori 6, 28, 0
  044e010  ori 7, 27, 0
  044e014  li 10, 1
  044e018  bl 0x121740
  044e01c  nop
  044e020  addic 30, 30, 1
  044e024  cmpwi 30, 3
  044e028  bt 0, 0x44df18
  044e02c  b 0x44e0b0
  044e030  lwz 4, 96(30)
  044e034  lfs 1, 16(31)
  044e038  li 3, 17
  044e03c  li 5, 0
  044e040  li 6, 1
  044e044  stfs 1, 16(4)
  044e048  lfs 1, 20(31)
  044e04c  stfs 1, 20(4)
  044e050  lfs 1, 24(31)
  044e054  stfs 1, 24(4)
  044e058  lfs 1, 28(31)
  044e05c  stfs 1, 28(4)
  044e060  lwz 7, 96(30)
  044e064  li 4, 5
  044e068  stb 3, 32(7)
  044e06c  lwz 3, 96(30)
  044e070  bl 0xfddc0
  044e074  nop
  044e078  lwz 3, 96(30)
  044e07c  lis 4, 16256
  044e080  lwz 5, 36(3)
  044e084  lwz 5, 16(5)
  044e088  stw 5, 148(3)
  044e08c  lwz 3, 96(30)
  044e090  stw 4, 88(3)
  044e094  lwz 3, 96(30)
  044e098  bl 0xf31a8
  044e09c  nop
  044e0a0  ori 3, 31, 0
  044e0a4  bl 0xefb38
  044e0a8  nop
  044e0ac  b 0x44e0b0
  044e0b0  ld 0, 256(1)
  044e0b4  mtlr 0
  044e0b8  lfd 28, 208(1)
  044e0bc  lfd 29, 216(1)
  044e0c0  lfd 30, 224(1)
  044e0c4  lfd 31, 232(1)
  044e0c8  ld 27, 168(1)
  044e0cc  ld 28, 176(1)
  044e0d0  ld 29, 184(1)
  044e0d4  ld 30, 192(1)
  044e0d8  ld 31, 200(1)
  044e0dc  addi 1, 1, 240
  044e0e0  blr

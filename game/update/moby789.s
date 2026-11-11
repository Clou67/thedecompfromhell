# game/update/moby789.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M789_0045de60:   # 0x45de60, 0x14 bytes
  045de60  lis 3, 135
  045de64  lis 4, 1
  045de68  addic 3, 3, 15316
  045de6c  stw 4, 72(3)
  045de70  blr

UpdateMoby_789:   # 0x45de78, 0x4 bytes
  045de78  blr

M789_0045de88:   # 0x45de88, 0x108 bytes
  045de88  stdu 1, -176(1)
  045de8c  mflr 0
  045de90  std 0, 192(1)
  045de94  stfd 30, 160(1)
  045de98  stfd 31, 168(1)
  045de9c  std 31, 152(1)
  045dea0  ori 31, 3, 0
  045dea4  addic 3, 1, 112
  045dea8  li 5, 0
  045deac  li 6, 0
  045deb0  std 30, 144(1)
  045deb4  std 29, 136(1)
  045deb8  std 28, 128(1)
  045debc  lbz 4, 33(31)
  045dec0  bl 0x104800
  045dec4  nop
  045dec8  lwz 3, 112(1)
  045decc  cmpwi 3, 0
  045ded0  bt 2, 0x45df68
  045ded4  lis 4, 70
  045ded8  addi 4, 4, -8576
  045dedc  lfs 30, 0(4)
  045dee0  lfs 31, 4(4)
  045dee4  lbz 4, 49(3)
  045dee8  cmpwi 4, 0
  045deec  bt 2, 0x45df44
  045def0  lhz 4, 166(3)
  045def4  lhz 5, 166(31)
  045def8  extsh 4, 4
  045defc  lwz 30, 120(3)
  045df00  extsh 5, 5
  045df04  cmpw 4, 5
  045df08  bf 2, 0x45df44
  045df0c  li 28, 0
  045df10  ori 29, 30, 0
  045df14  lwz 4, 864(30)
  045df18  addic 3, 29, 816
  045df1c  fmr 1, 30
  045df20  fmr 2, 31
  045df24  extsw 4, 4
  045df28  bl 0x119028
  045df2c  nop
  045df30  addic 28, 28, 1
  045df34  addic 29, 29, 16
  045df38  cmpwi 28, 3
  045df3c  bt 0, 0x45df14
  045df40  lwz 3, 112(1)
  045df44  ori 4, 3, 0
  045df48  addic 3, 1, 112
  045df4c  li 5, 0
  045df50  li 6, 0
  045df54  bl 0x10466c
  045df58  nop
  045df5c  lwz 3, 112(1)
  045df60  cmpwi 3, 0
  045df64  bf 2, 0x45dee4
  045df68  ld 0, 192(1)
  045df6c  mtlr 0
  045df70  lfd 30, 160(1)
  045df74  lfd 31, 168(1)
  045df78  ld 28, 128(1)
  045df7c  ld 29, 136(1)
  045df80  ld 30, 144(1)
  045df84  ld 31, 152(1)
  045df88  addi 1, 1, 176
  045df8c  blr

M79_0045dfb0:   # 0x45dfb0, 0x188 bytes
  045dfb0  stdu 1, -144(1)
  045dfb4  mflr 0
  045dfb8  std 0, 160(1)
  045dfbc  std 31, 136(1)
  045dfc0  ori 31, 3, 0
  045dfc4  lbz 3, 33(3)
  045dfc8  std 30, 128(1)
  045dfcc  std 29, 120(1)
  045dfd0  std 28, 112(1)
  045dfd4  cmpwi 3, 255
  045dfd8  bt 2, 0x45e118
  045dfdc  lbz 3, 49(31)
  045dfe0  cmpwi 3, 0
  045dfe4  bt 2, 0x45e118
  045dfe8  lwz 30, 120(31)
  045dfec  li 28, 0
  045dff0  addic 29, 30, 816
  045dff4  slwi 5, 28, 4
  045dff8  ori 4, 28, 0
  045dffc  addc 5, 5, 29
  045e000  ori 3, 31, 0
  045e004  clrldi 5, 5, 32
  045e008  bl 0xf1114
  045e00c  nop
  045e010  addic 28, 28, 1
  045e014  extsw 28, 28
  045e018  cmpwi 28, 3
  045e01c  bt 0, 0x45dff4
  045e020  lis 3, 70
  045e024  lfs 1, 872(30)
  045e028  addi 29, 3, -8304
  045e02c  lis 3, 114
  045e030  lfs 2, 0(29)
  045e034  lfs 3, -3052(3)
  045e038  fmuls 2, 3, 2
  045e03c  bl 0x502578
  045e040  nop
  045e044  lfs 2, 4(29)
  045e048  lfs 3, 8(29)
  045e04c  fsubs 2, 2, 1
  045e050  fsubs 3, 3, 1
  045e054  lis 3, 30
  045e058  lis 4, 30
  045e05c  ori 3, 3, 7860
  045e060  ori 4, 4, 46110
  045e064  fsub 4, 1, 2
  045e068  fsel 2, 4, 2, 1
  045e06c  lfs 4, 12(29)
  045e070  lfs 5, 16(29)
  045e074  fsub 6, 3, 2
  045e078  fsel 2, 6, 3, 2
  045e07c  lfs 3, 20(29)
  045e080  lfs 6, 24(29)
  045e084  lfs 8, 28(29)
  045e088  stfs 1, 872(30)
  045e08c  fmuls 7, 2, 2
  045e090  fmuls 9, 7, 2
  045e094  fmuls 10, 7, 9
  045e098  fmadds 2, 9, 4, 2
  045e09c  fmuls 1, 7, 10
  045e0a0  fmadds 2, 10, 5, 2
  045e0a4  fmuls 4, 7, 1
  045e0a8  fmadds 1, 1, 3, 2
  045e0ac  fmadds 1, 4, 6, 1
  045e0b0  fmadds 1, 1, 8, 8
  045e0b4  bl 0x5027bc
  045e0b8  nop
  045e0bc  srawi 4, 3, 8
  045e0c0  clrlwi 5, 3, 24
  045e0c4  stw 3, 144(31)
  045e0c8  srawi 6, 3, 16
  045e0cc  rlwimi 5, 4, 8, 16, 23
  045e0d0  lis 4, 161
  045e0d4  rlwimi 5, 6, 16, 8, 15
  045e0d8  oris 3, 5, 12288
  045e0dc  stw 3, 864(30)
  045e0e0  lwz 3, 1808(4)
  045e0e4  cmpwi 3, 0
  045e0e8  bt 2, 0x45e118
  045e0ec  lwz 30, 868(30)
  045e0f0  lwz 4, 0(30)
  045e0f4  cmpw 3, 4
  045e0f8  bt 2, 0x45e118
  045e0fc  ori 5, 3, 0
  045e100  lis 3, 113
  045e104  ori 4, 31, 0
  045e108  addic 3, 3, -5600
  045e10c  stw 5, 0(30)
  045e110  bl 0x6d720
  045e114  nop
  045e118  ld 0, 160(1)
  045e11c  mtlr 0
  045e120  ld 28, 112(1)
  045e124  ld 29, 120(1)
  045e128  ld 30, 128(1)
  045e12c  ld 31, 136(1)
  045e130  addi 1, 1, 144
  045e134  blr

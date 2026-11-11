# game/update/moby1378.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1378_0025df18:   # 0x25df18, 0x14 bytes
  025df18  lis 3, 122
  025df1c  lis 4, 1
  025df20  addic 3, 3, -16220
  025df24  stw 4, 72(3)
  025df28  blr

UpdateMoby_1378:   # 0x25df48, 0x22c bytes
  025df48  stdu 1, -240(1)
  025df4c  mflr 0
  025df50  std 0, 256(1)
  025df54  stfd 27, 200(1)
  025df58  stfd 28, 208(1)
  025df5c  stfd 29, 216(1)
  025df60  stfd 30, 224(1)
  025df64  stfd 31, 232(1)
  025df68  std 31, 192(1)
  025df6c  ori 31, 3, 0
  025df70  lbz 3, 32(3)
  025df74  cmpwi 3, 0
  025df78  cmpwi 1, 3, 1
  025df7c  std 30, 184(1)
  025df80  cmpwi 6, 3, -1
  025df84  bt 1, 0x25df90
  025df88  bf 25, 0x25e148
  025df8c  b 0x25df98
  025df90  bf 5, 0x25dfb8
  025df94  b 0x25e148
  025df98  li 3, 0
  025df9c  lhz 5, 52(31)
  025dfa0  li 4, 1
  025dfa4  stb 3, 49(31)
  025dfa8  ori 3, 5, 1
  025dfac  stb 4, 32(31)
  025dfb0  sth 3, 52(31)
  025dfb4  b 0x25e148
  025dfb8  lis 30, 151
  025dfbc  lfs 1, 20(31)
  025dfc0  addic 30, 30, -25376
  025dfc4  lfs 2, 16(31)
  025dfc8  lis 3, 38
  025dfcc  lfs 3, 132(30)
  025dfd0  lfs 4, 128(30)
  025dfd4  fsubs 5, 1, 3
  025dfd8  fsubs 4, 2, 4
  025dfdc  lfs 3, 24(31)
  025dfe0  lfs 6, 136(30)
  025dfe4  fsubs 6, 3, 6
  025dfe8  addi 3, 3, -8400
  025dfec  fmuls 5, 5, 5
  025dff0  lfs 31, 0(3)
  025dff4  fmadds 4, 4, 4, 5
  025dff8  fmadds 4, 6, 6, 4
  025dffc  fsqrts 4, 4
  025e000  fcmpu 0, 4, 31
  025e004  cror 6, 1, 2
  025e008  bt 6, 0x25e134
  025e00c  lfs 4, 212(30)
  025e010  addic 3, 1, 112
  025e014  lfs 5, 208(30)
  025e018  addic 4, 31, 192
  025e01c  fsubs 30, 4, 1
  025e020  lfs 1, 216(30)
  025e024  lfs 28, 220(30)
  025e028  fsubs 29, 5, 2
  025e02c  fsubs 27, 1, 3
  025e030  bl 0x5010c0
  025e034  nop
  025e038  lfs 1, 128(1)
  025e03c  lfs 2, 112(1)
  025e040  fmuls 1, 1, 30
  025e044  lfs 3, 144(1)
  025e048  lis 3, 38
  025e04c  lfs 4, 132(1)
  025e050  lfs 5, 136(1)
  025e054  fmuls 4, 4, 30
  025e058  lfs 6, 160(1)
  025e05c  fmuls 5, 5, 30
  025e060  lfs 7, 116(1)
  025e064  addi 3, 3, -8400
  025e068  fmadds 1, 2, 29, 1
  025e06c  lfs 2, 120(1)
  025e070  lfs 8, 148(1)
  025e074  fmadds 4, 7, 29, 4
  025e078  fmadds 2, 2, 29, 5
  025e07c  lfs 5, 4(3)
  025e080  fmadds 1, 3, 27, 1
  025e084  lfs 3, 152(1)
  025e088  lfs 7, 164(1)
  025e08c  fmadds 4, 8, 27, 4
  025e090  fmadds 3, 3, 27, 2
  025e094  lfs 8, 168(1)
  025e098  fmadds 1, 6, 28, 1
  025e09c  fmadds 2, 7, 28, 4
  025e0a0  fmadds 3, 8, 28, 3
  025e0a4  fcmpu 0, 1, 5
  025e0a8  cror 6, 0, 2
  025e0ac  bt 6, 0x25e114
  025e0b0  lis 3, 38
  025e0b4  addi 3, 3, -8400
  025e0b8  lfs 4, 8(3)
  025e0bc  fcmpu 0, 1, 4
  025e0c0  cror 6, 1, 2
  025e0c4  bt 6, 0x25e114
  025e0c8  lis 3, 38
  025e0cc  addi 3, 3, -8400
  025e0d0  lfs 1, 12(3)
  025e0d4  fcmpu 0, 3, 1
  025e0d8  cror 6, 0, 2
  025e0dc  bt 6, 0x25e114
  025e0e0  fcmpu 0, 3, 31
  025e0e4  cror 6, 1, 2
  025e0e8  bt 6, 0x25e114
  025e0ec  lis 3, 38
  025e0f0  addi 4, 3, -8400
  025e0f4  li 3, 0
  025e0f8  lfs 1, 16(4)
  025e0fc  fcmpu 0, 2, 1
  025e100  cror 6, 1, 2
  025e104  bt 6, 0x25e10c
  025e108  li 3, 1
  025e10c  stb 3, 8907(30)
  025e110  b 0x25e134
  025e114  lis 3, 38
  025e118  addi 3, 3, -8400
  025e11c  lfs 1, 12(3)
  025e120  fcmpu 0, 2, 1
  025e124  cror 6, 0, 2
  025e128  bt 6, 0x25e134
  025e12c  li 3, 0
  025e130  stb 3, 8907(30)
  025e134  lis 3, 113
  025e138  ori 4, 31, 0
  025e13c  addic 3, 3, -24240
  025e140  bl 0x6d720
  025e144  nop
  025e148  ld 0, 256(1)
  025e14c  mtlr 0
  025e150  lfd 27, 200(1)
  025e154  lfd 28, 208(1)
  025e158  lfd 29, 216(1)
  025e15c  lfd 30, 224(1)
  025e160  lfd 31, 232(1)
  025e164  ld 30, 184(1)
  025e168  ld 31, 192(1)
  025e16c  addi 1, 1, 240
  025e170  blr

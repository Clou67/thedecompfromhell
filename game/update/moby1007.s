# game/update/moby1007.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1007:   # 0x183f38, 0x1cc bytes
  0183f38  stdu 1, -144(1)
  0183f3c  mflr 0
  0183f40  std 0, 160(1)
  0183f44  stfd 31, 136(1)
  0183f48  std 31, 128(1)
  0183f4c  lis 4, 149
  0183f50  ori 31, 3, 0
  0183f54  std 30, 120(1)
  0183f58  addic 3, 4, 5056
  0183f5c  lwz 30, 384(3)
  0183f60  cmpwi 30, 0
  0183f64  bt 2, 0x1840d8
  0183f68  lfs 1, 48(30)
  0183f6c  lis 4, 151
  0183f70  stfs 1, 16(31)
  0183f74  lfs 2, 52(30)
  0183f78  stfs 2, 20(31)
  0183f7c  lfs 3, 56(30)
  0183f80  stfs 3, 24(31)
  0183f84  lfs 4, 60(30)
  0183f88  addic 30, 4, -25376
  0183f8c  stfs 4, 28(31)
  0183f90  lfs 4, 132(30)
  0183f94  lwz 4, 8320(30)
  0183f98  fsubs 4, 2, 4
  0183f9c  lfs 2, 128(30)
  0183fa0  fsubs 2, 1, 2
  0183fa4  lfs 1, 228(4)
  0183fa8  lfs 5, 136(30)
  0183fac  lfs 6, 224(4)
  0183fb0  fsubs 31, 3, 5
  0183fb4  lfs 5, 232(4)
  0183fb8  fmuls 3, 4, 1
  0183fbc  lis 4, 24
  0183fc0  addi 4, 4, 16172
  0183fc4  lfs 7, 0(4)
  0183fc8  fmadds 3, 2, 6, 3
  0183fcc  fmadds 3, 31, 5, 3
  0183fd0  fabs 8, 3
  0183fd4  fnmsubs 2, 6, 3, 2
  0183fd8  fnmsubs 1, 1, 3, 4
  0183fdc  fnmsubs 31, 5, 3, 31
  0183fe0  fcmpu 0, 8, 7
  0183fe4  cror 6, 1, 2
  0183fe8  bt 6, 0x1840e8
  0183fec  fmuls 1, 1, 1
  0183ff0  lis 4, 24
  0183ff4  addi 4, 4, 16172
  0183ff8  fmadds 1, 2, 2, 1
  0183ffc  fmadds 1, 31, 31, 1
  0184000  lfs 31, 4(4)
  0184004  fsqrts 1, 1
  0184008  fcmpu 0, 1, 31
  018400c  bt 0, 0x184050
  0184010  lfs 1, 152(30)
  0184014  lfs 2, 344(3)
  0184018  bl 0x5026a0
  018401c  nop
  0184020  lis 3, 24
  0184024  addi 3, 3, 16172
  0184028  lfs 2, 8(3)
  018402c  fcmpu 0, 1, 2
  0184030  bt 0, 0x184050
  0184034  lis 3, 114
  0184038  lfs 1, -3052(3)
  018403c  lfs 2, 356(30)
  0184040  fmuls 1, 1, 31
  0184044  fcmpu 0, 2, 1
  0184048  cror 6, 1, 2
  018404c  bt 6, 0x184064
  0184050  lis 3, 16752
  0184054  stw 3, 24(31)
  0184058  stw 3, 20(31)
  018405c  stw 3, 16(31)
  0184060  b 0x1840e8
  0184064  lwz 3, 8320(30)
  0184068  lfs 6, 20(31)
  018406c  lfs 7, 16(31)
  0184070  lfs 2, 228(3)
  0184074  lfs 3, 224(3)
  0184078  fmuls 4, 6, 2
  018407c  lfs 1, 132(30)
  0184080  lfs 5, 24(31)
  0184084  fmuls 8, 1, 2
  0184088  lfs 1, 232(3)
  018408c  lfs 9, 128(30)
  0184090  lfs 10, 136(30)
  0184094  lwz 3, 8332(30)
  0184098  cmpwi 3, 17
  018409c  fmadds 4, 7, 3, 4
  01840a0  fmadds 8, 9, 3, 8
  01840a4  fmadds 9, 5, 1, 4
  01840a8  fmadds 4, 10, 1, 8
  01840ac  fnmsubs 7, 3, 9, 7
  01840b0  fnmsubs 6, 2, 9, 6
  01840b4  fnmsubs 5, 1, 9, 5
  01840b8  bt 2, 0x1840e8
  01840bc  fmadds 3, 3, 4, 7
  01840c0  fmadds 2, 2, 4, 6
  01840c4  fmadds 1, 1, 4, 5
  01840c8  stfs 3, 16(31)
  01840cc  stfs 2, 20(31)
  01840d0  stfs 1, 24(31)
  01840d4  b 0x1840e8
  01840d8  lis 3, 16544
  01840dc  stw 3, 24(31)
  01840e0  stw 3, 20(31)
  01840e4  stw 3, 16(31)
  01840e8  ld 0, 160(1)
  01840ec  mtlr 0
  01840f0  lfd 31, 136(1)
  01840f4  ld 30, 120(1)
  01840f8  ld 31, 128(1)
  01840fc  addi 1, 1, 144
  0184100  blr

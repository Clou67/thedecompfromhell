# game/update/moby712.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M712_0042de7c:   # 0x42de7c, 0x14 bytes
  042de7c  lis 3, 134
  042de80  lis 4, 1
  042de84  addic 3, 3, -25484
  042de88  stw 4, 72(3)
  042de8c  blr

M712_0042de90:   # 0x42de90, 0x148 bytes
  042de90  stdu 1, -128(1)
  042de94  stfd 23, 56(1)
  042de98  stfd 24, 64(1)
  042de9c  stfd 25, 72(1)
  042dea0  stfd 26, 80(1)
  042dea4  stfd 27, 88(1)
  042dea8  stfd 28, 96(1)
  042deac  stfd 29, 104(1)
  042deb0  stfd 30, 112(1)
  042deb4  stfd 31, 120(1)
  042deb8  lwz 5, 120(3)
  042debc  lwz 4, 220(5)
  042dec0  cmpwi 4, -1
  042dec4  bt 2, 0x42dfac
  042dec8  lis 6, 165
  042decc  slwi 4, 4, 2
  042ded0  addic 6, 6, 7136
  042ded4  extsw 4, 4
  042ded8  lwzx 4, 6, 4
  042dedc  lwz 6, 0(4)
  042dee0  cmpwi 6, 7
  042dee4  bf 2, 0x42dfac
  042dee8  ori 6, 3, 0
  042deec  lis 7, 134
  042def0  li 8, 7
  042def4  ori 3, 4, 0
  042def8  addic 4, 7, -25376
  042defc  lfs 31, 192(6)
  042df00  lfs 0, 208(6)
  042df04  mtctr 8
  042df08  lfs 13, 224(6)
  042df0c  lfs 12, 196(6)
  042df10  lfs 11, 212(6)
  042df14  lfs 10, 228(6)
  042df18  lfs 9, 200(6)
  042df1c  lfs 8, 216(6)
  042df20  lfs 7, 232(6)
  042df24  lfs 6, 204(6)
  042df28  lfs 5, 220(6)
  042df2c  lfs 4, 236(6)
  042df30  lfs 3, 16(6)
  042df34  lfs 2, 20(6)
  042df38  lfs 1, 24(6)
  042df3c  lfs 30, 4(4)
  042df40  lfs 29, 0(4)
  042df44  fmuls 28, 30, 5
  042df48  fmadds 27, 29, 31, 3
  042df4c  lfs 24, 8(4)
  042df50  fmadds 26, 29, 12, 2
  042df54  lfs 23, 12(4)
  042df58  fmadds 25, 29, 9, 1
  042df5c  addic 4, 4, 16
  042df60  fmadds 29, 29, 6, 28
  042df64  fmadds 28, 24, 13, 27
  042df68  fmadds 27, 24, 10, 26
  042df6c  fmadds 26, 24, 7, 25
  042df70  fmadds 29, 24, 4, 29
  042df74  fmadds 28, 30, 0, 28
  042df78  fmadds 27, 30, 11, 27
  042df7c  fmadds 30, 30, 8, 26
  042df80  fadds 29, 29, 23
  042df84  stfs 28, 16(3)
  042df88  stfs 27, 20(3)
  042df8c  stfs 30, 24(3)
  042df90  stfs 29, 28(3)
  042df94  addic 3, 3, 16
  042df98  bdnz 0x42df3c
  042df9c  lis 3, 151
  042dfa0  lwz 4, 220(5)
  042dfa4  addic 3, 3, -25376
  042dfa8  sth 4, 8922(3)
  042dfac  lfd 23, 56(1)
  042dfb0  lfd 24, 64(1)
  042dfb4  lfd 25, 72(1)
  042dfb8  lfd 26, 80(1)
  042dfbc  lfd 27, 88(1)
  042dfc0  lfd 28, 96(1)
  042dfc4  lfd 29, 104(1)
  042dfc8  lfd 30, 112(1)
  042dfcc  lfd 31, 120(1)
  042dfd0  addi 1, 1, 128
  042dfd4  blr

M712_0042e010:   # 0x42e010, 0x2b8 bytes
  042e010  stdu 1, -208(1)
  042e014  mflr 0
  042e018  std 0, 224(1)
  042e01c  stfd 25, 152(1)
  042e020  stfd 26, 160(1)
  042e024  stfd 27, 168(1)
  042e028  stfd 28, 176(1)
  042e02c  stfd 29, 184(1)
  042e030  stfd 30, 192(1)
  042e034  stfd 31, 200(1)
  042e038  std 31, 144(1)
  042e03c  ori 31, 3, 0
  042e040  std 29, 128(1)
  042e044  std 28, 120(1)
  042e048  lis 3, 67
  042e04c  lis 28, 114
  042e050  std 30, 136(1)
  042e054  addi 29, 3, -8232
  042e058  lwz 30, 120(31)
  042e05c  lfs 1, 96(30)
  042e060  stfs 1, 16(31)
  042e064  lfs 1, 100(30)
  042e068  stfs 1, 20(31)
  042e06c  lfs 1, 104(30)
  042e070  stfs 1, 24(31)
  042e074  lfs 1, 108(30)
  042e078  stfs 1, 28(31)
  042e07c  lfs 1, 112(30)
  042e080  stfs 1, 64(31)
  042e084  lfs 1, 116(30)
  042e088  stfs 1, 68(31)
  042e08c  lfs 1, 120(30)
  042e090  stfs 1, 72(31)
  042e094  lfs 1, 124(30)
  042e098  stfs 1, 76(31)
  042e09c  lfs 3, 0(29)
  042e0a0  lfs 1, 200(30)
  042e0a4  lfs 2, -3052(28)
  042e0a8  fmuls 2, 2, 3
  042e0ac  bl 0x502578
  042e0b0  nop
  042e0b4  stfs 1, 200(30)
  042e0b8  lfs 31, 4(29)
  042e0bc  lfs 30, 8(29)
  042e0c0  fsubs 2, 31, 1
  042e0c4  fsubs 3, 30, 1
  042e0c8  lfs 29, 12(29)
  042e0cc  lfs 28, 16(29)
  042e0d0  lfs 27, 20(29)
  042e0d4  lfs 26, 24(29)
  042e0d8  fsub 4, 1, 2
  042e0dc  fsel 1, 4, 2, 1
  042e0e0  fsub 4, 3, 1
  042e0e4  fsel 1, 4, 3, 1
  042e0e8  lfs 3, 24(31)
  042e0ec  lfs 2, 28(29)
  042e0f0  fmuls 4, 1, 1
  042e0f4  fmuls 5, 4, 1
  042e0f8  fmuls 6, 4, 5
  042e0fc  fmadds 1, 5, 29, 1
  042e100  fmuls 5, 4, 6
  042e104  fmadds 1, 6, 28, 1
  042e108  fmuls 4, 4, 5
  042e10c  fmadds 1, 5, 27, 1
  042e110  fmadds 1, 4, 26, 1
  042e114  fmadds 1, 1, 2, 3
  042e118  stfs 1, 24(31)
  042e11c  lfs 3, 32(29)
  042e120  lfs 1, 204(30)
  042e124  lfs 4, -3052(28)
  042e128  fmuls 2, 4, 3
  042e12c  bl 0x502578
  042e130  nop
  042e134  fsubs 2, 31, 1
  042e138  stfs 1, 204(30)
  042e13c  fsubs 3, 30, 1
  042e140  fsub 4, 1, 2
  042e144  fsel 2, 4, 2, 1
  042e148  fsub 1, 3, 2
  042e14c  fsel 2, 1, 3, 2
  042e150  lfs 1, 68(31)
  042e154  lfs 25, 36(29)
  042e158  fmuls 3, 2, 2
  042e15c  fmuls 5, 3, 2
  042e160  fmuls 4, 3, 5
  042e164  fmadds 2, 5, 29, 2
  042e168  fmuls 5, 3, 4
  042e16c  fmadds 2, 4, 28, 2
  042e170  fmuls 3, 3, 5
  042e174  fmadds 2, 5, 27, 2
  042e178  fmadds 2, 3, 26, 2
  042e17c  fmuls 2, 2, 25
  042e180  bl 0x502578
  042e184  nop
  042e188  stfs 1, 68(31)
  042e18c  lfs 3, 40(29)
  042e190  lfs 1, 208(30)
  042e194  lfs 4, -3052(28)
  042e198  fmuls 2, 4, 3
  042e19c  bl 0x502578
  042e1a0  nop
  042e1a4  fsubs 2, 31, 1
  042e1a8  fsubs 3, 30, 1
  042e1ac  stfs 1, 208(30)
  042e1b0  fsub 4, 1, 2
  042e1b4  fsel 2, 4, 2, 1
  042e1b8  lfs 1, 64(31)
  042e1bc  fsub 4, 3, 2
  042e1c0  fsel 2, 4, 3, 2
  042e1c4  fmuls 3, 2, 2
  042e1c8  fmuls 4, 3, 2
  042e1cc  fmuls 5, 3, 4
  042e1d0  fmadds 2, 4, 29, 2
  042e1d4  fmuls 4, 3, 5
  042e1d8  fmadds 2, 5, 28, 2
  042e1dc  fmuls 3, 3, 4
  042e1e0  fmadds 2, 4, 27, 2
  042e1e4  fmadds 2, 3, 26, 2
  042e1e8  fmuls 2, 2, 25
  042e1ec  bl 0x502578
  042e1f0  nop
  042e1f4  lwz 3, 68(31)
  042e1f8  stfs 1, 64(31)
  042e1fc  lfs 2, 44(29)
  042e200  srawi 4, 3, 31
  042e204  fcmpu 0, 1, 2
  042e208  srwi 5, 4, 1
  042e20c  xor 3, 5, 3
  042e210  subc 3, 3, 4
  042e214  cror 6, 0, 2
  042e218  bt 6, 0x42e22c
  042e21c  lis 4, 15922
  042e220  ori 4, 4, 47298
  042e224  stw 4, 64(31)
  042e228  b 0x42e250
  042e22c  lis 4, 67
  042e230  addi 4, 4, -8232
  042e234  lfs 2, 48(4)
  042e238  fcmpu 0, 1, 2
  042e23c  cror 6, 1, 2
  042e240  bt 6, 0x42e250
  042e244  lis 4, -16846
  042e248  ori 4, 4, 47298
  042e24c  stw 4, 64(31)
  042e250  lis 4, 15922
  042e254  ori 4, 4, 47298
  042e258  cmpw 3, 4
  042e25c  bf 1, 0x42e270
  042e260  lis 3, 15922
  042e264  ori 3, 3, 47298
  042e268  stw 3, 68(31)
  042e26c  b 0x42e28c
  042e270  lis 4, -15923
  042e274  ori 4, 4, 18238
  042e278  cmpw 3, 4
  042e27c  bf 0, 0x42e28c
  042e280  lis 3, -16846
  042e284  ori 3, 3, 47298
  042e288  stw 3, 68(31)
  042e28c  ld 0, 224(1)
  042e290  mtlr 0
  042e294  lfd 25, 152(1)
  042e298  lfd 26, 160(1)
  042e29c  lfd 27, 168(1)
  042e2a0  lfd 28, 176(1)
  042e2a4  lfd 29, 184(1)
  042e2a8  lfd 30, 192(1)
  042e2ac  lfd 31, 200(1)
  042e2b0  ld 28, 120(1)
  042e2b4  ld 29, 128(1)
  042e2b8  ld 30, 136(1)
  042e2bc  ld 31, 144(1)
  042e2c0  addi 1, 1, 208
  042e2c4  blr

M712_0042e2c8:   # 0x42e2c8, 0x8c bytes
  042e2c8  lis 5, 165
  042e2cc  lbz 3, 33(3)
  042e2d0  lwz 5, -28288(5)
  042e2d4  cmpw 3, 5
  042e2d8  bt 0, 0x42e2e4
  042e2dc  li 3, 0
  042e2e0  b 0x42e350
  042e2e4  lis 5, 165
  042e2e8  rlwinm 3, 3, 2, 22, 29
  042e2ec  addic 5, 5, -28284
  042e2f0  lis 6, 164
  042e2f4  lwzx 5, 5, 3
  042e2f8  lwz 3, -28512(6)
  042e2fc  cmpwi 5, 0
  042e300  bf 2, 0x42e30c
  042e304  li 3, 0
  042e308  b 0x42e350
  042e30c  lhz 6, 0(5)
  042e310  rlwinm 6, 6, 8, 9, 23
  042e314  addc 6, 3, 6
  042e318  clrldi 6, 6, 32
  042e31c  lwz 7, 120(6)
  042e320  lhz 7, 180(7)
  042e324  extsh 7, 7
  042e328  cmpw 7, 4
  042e32c  bf 2, 0x42e338
  042e330  ori 3, 6, 0
  042e334  b 0x42e350
  042e338  lhz 6, 0(5)
  042e33c  addic 5, 5, 2
  042e340  extsh 6, 6
  042e344  cmpwi 6, 0
  042e348  bf 0, 0x42e30c
  042e34c  li 3, 0
  042e350  blr

M712_0042e360:   # 0x42e360, 0x164 bytes
  042e360  stdu 1, -64(1)
  042e364  lwz 4, 120(3)
  042e368  lhz 3, 180(4)
  042e36c  extsh 3, 3
  042e370  cmpwi 3, 4
  042e374  cmpwi 1, 3, 0
  042e378  cmpwi 6, 3, 1
  042e37c  cmpwi 7, 3, 2
  042e380  bt 2, 0x42e41c
  042e384  lis 5, 165
  042e388  cmpwi 3, 3
  042e38c  addic 3, 5, 7136
  042e390  bt 2, 0x42e400
  042e394  bt 30, 0x42e3e0
  042e398  bt 26, 0x42e3c0
  042e39c  bf 6, 0x42e41c
  042e3a0  li 5, 1
  042e3a4  lwz 6, 148(4)
  042e3a8  slwi 6, 6, 2
  042e3ac  sth 5, 182(4)
  042e3b0  extsw 5, 6
  042e3b4  lwzx 3, 3, 5
  042e3b8  stw 3, 172(4)
  042e3bc  b 0x42e41c
  042e3c0  li 5, 0
  042e3c4  lwz 6, 152(4)
  042e3c8  slwi 6, 6, 2
  042e3cc  sth 5, 182(4)
  042e3d0  extsw 5, 6
  042e3d4  lwzx 3, 3, 5
  042e3d8  stw 3, 172(4)
  042e3dc  b 0x42e41c
  042e3e0  li 5, 3
  042e3e4  lwz 6, 156(4)
  042e3e8  slwi 6, 6, 2
  042e3ec  sth 5, 182(4)
  042e3f0  extsw 5, 6
  042e3f4  lwzx 3, 3, 5
  042e3f8  stw 3, 172(4)
  042e3fc  b 0x42e41c
  042e400  li 5, 0
  042e404  lwz 6, 160(4)
  042e408  slwi 6, 6, 2
  042e40c  sth 5, 182(4)
  042e410  extsw 5, 6
  042e414  lwzx 3, 3, 5
  042e418  stw 3, 172(4)
  042e41c  lwz 3, 172(4)
  042e420  lfs 1, 20(3)
  042e424  lfs 2, 36(3)
  042e428  lfs 3, 16(3)
  042e42c  fsubs 1, 1, 2
  042e430  lfs 2, 32(3)
  042e434  fsubs 2, 3, 2
  042e438  lfs 3, 24(3)
  042e43c  lfs 4, 40(3)
  042e440  fsubs 3, 3, 4
  042e444  fmuls 1, 1, 1
  042e448  lwz 3, 0(3)
  042e44c  extsw 3, 3
  042e450  std 3, 48(1)
  042e454  fmadds 1, 2, 2, 1
  042e458  lis 3, 67
  042e45c  addi 3, 3, -7340
  042e460  lis 5, 114
  042e464  lfs 2, 0(3)
  042e468  fmadds 1, 3, 3, 1
  042e46c  lfd 3, 48(1)
  042e470  fcfid 3, 3
  042e474  lfs 4, 4(3)
  042e478  lfs 5, -3052(5)
  042e47c  fsqrts 1, 1
  042e480  lis 5, 114
  042e484  li 6, 0
  042e488  frsp 3, 3
  042e48c  fmuls 4, 5, 4
  042e490  fmuls 1, 1, 3
  042e494  fdivs 1, 2, 1
  042e498  fmuls 2, 4, 1
  042e49c  stfs 2, 212(4)
  042e4a0  lfs 2, 8(3)
  042e4a4  lfs 3, -3048(5)
  042e4a8  stw 6, 192(4)
  042e4ac  fmuls 2, 3, 2
  042e4b0  stw 6, 196(4)
  042e4b4  fmuls 1, 2, 1
  042e4b8  stfs 1, 216(4)
  042e4bc  addi 1, 1, 64
  042e4c0  blr

M712_0042e4c8:   # 0x42e4c8, 0x114 bytes
  042e4c8  lis 4, 67
  042e4cc  lwz 7, 120(3)
  042e4d0  lis 9, 165
  042e4d4  lfs 3, 16(3)
  042e4d8  addi 5, 4, -6972
  042e4dc  li 8, -1
  042e4e0  li 6, 0
  042e4e4  ori 4, 7, 0
  042e4e8  lfs 4, 0(5)
  042e4ec  lwz 5, 7128(9)
  042e4f0  sth 8, 180(7)
  042e4f4  lfs 2, 20(3)
  042e4f8  lfs 1, 24(3)
  042e4fc  lwz 8, 128(4)
  042e500  slwi 8, 8, 7
  042e504  addc 8, 5, 8
  042e508  clrldi 8, 8, 32
  042e50c  lfs 5, 52(8)
  042e510  lfs 6, 48(8)
  042e514  fsubs 5, 2, 5
  042e518  fsubs 6, 3, 6
  042e51c  lfs 7, 56(8)
  042e520  fsubs 7, 1, 7
  042e524  fmuls 5, 5, 5
  042e528  fmadds 5, 6, 6, 5
  042e52c  fmadds 5, 7, 7, 5
  042e530  fsqrts 5, 5
  042e534  fcmpu 0, 5, 4
  042e538  cror 6, 1, 2
  042e53c  bt 6, 0x42e548
  042e540  sth 6, 180(7)
  042e544  b 0x42e558
  042e548  addic 6, 6, 1
  042e54c  addic 4, 4, 4
  042e550  cmpwi 6, 5
  042e554  bt 0, 0x42e4fc
  042e558  li 4, 1
  042e55c  lis 5, 165
  042e560  stb 4, 32(3)
  042e564  lhz 3, 180(7)
  042e568  lwz 4, 7128(5)
  042e56c  extsh 3, 3
  042e570  sldi 3, 3, 2
  042e574  addc 3, 7, 3
  042e578  clrldi 3, 3, 32
  042e57c  lwz 3, 128(3)
  042e580  slwi 5, 3, 7
  042e584  slwi 3, 3, 7
  042e588  addc 5, 4, 5
  042e58c  addc 3, 4, 3
  042e590  clrldi 5, 5, 32
  042e594  clrldi 3, 3, 32
  042e598  lfs 1, 48(5)
  042e59c  stfs 1, 96(7)
  042e5a0  lfs 1, 52(5)
  042e5a4  stfs 1, 100(7)
  042e5a8  lfs 1, 56(5)
  042e5ac  stfs 1, 104(7)
  042e5b0  lfs 1, 60(5)
  042e5b4  stfs 1, 108(7)
  042e5b8  lfs 1, 112(3)
  042e5bc  stfs 1, 112(7)
  042e5c0  lfs 1, 116(3)
  042e5c4  stfs 1, 116(7)
  042e5c8  lfs 1, 120(3)
  042e5cc  stfs 1, 120(7)
  042e5d0  lfs 1, 124(3)
  042e5d4  stfs 1, 124(7)
  042e5d8  blr

M712_0042e5dc:   # 0x42e5dc, 0xd4 bytes
  042e5dc  stdu 1, -112(1)
  042e5e0  mflr 0
  042e5e4  std 0, 128(1)
  042e5e8  lwz 4, 120(3)
  042e5ec  lbz 3, 32(3)
  042e5f0  cmpwi 3, 5
  042e5f4  lhz 3, 180(4)
  042e5f8  bf 2, 0x42e600
  042e5fc  lhz 3, 182(4)
  042e600  extsh 3, 3
  042e604  cmpwi 3, 4
  042e608  cmpwi 1, 3, 0
  042e60c  cmpwi 6, 3, 1
  042e610  cmpwi 7, 3, 2
  042e614  bt 2, 0x42e67c
  042e618  cmpwi 3, 3
  042e61c  bt 2, 0x42e668
  042e620  bt 30, 0x42e654
  042e624  bt 26, 0x42e640
  042e628  bf 6, 0x42e690
  042e62c  li 3, 4
  042e630  li 4, 21485
  042e634  bl 0x11aeec
  042e638  nop
  042e63c  b 0x42e6a0
  042e640  li 3, 4
  042e644  li 4, 21486
  042e648  bl 0x11aeec
  042e64c  nop
  042e650  b 0x42e6a0
  042e654  li 3, 4
  042e658  li 4, 21486
  042e65c  bl 0x11aeec
  042e660  nop
  042e664  b 0x42e6a0
  042e668  li 3, 4
  042e66c  li 4, 21486
  042e670  bl 0x11aeec
  042e674  nop
  042e678  b 0x42e6a0
  042e67c  li 3, 4
  042e680  li 4, 5017
  042e684  bl 0x11aeec
  042e688  nop
  042e68c  b 0x42e6a0
  042e690  li 3, 4
  042e694  li 4, 5019
  042e698  bl 0x11aeec
  042e69c  nop
  042e6a0  ld 0, 128(1)
  042e6a4  mtlr 0
  042e6a8  addi 1, 1, 112
  042e6ac  blr

M712_0042e6b0:   # 0x42e6b0, 0x150 bytes
  042e6b0  stdu 1, -128(1)
  042e6b4  mflr 0
  042e6b8  std 0, 144(1)
  042e6bc  std 31, 120(1)
  042e6c0  lis 4, 165
  042e6c4  lwz 31, 120(3)
  042e6c8  lbz 5, 33(3)
  042e6cc  lwz 3, -28288(4)
  042e6d0  cmpw 5, 3
  042e6d4  lhz 3, 182(31)
  042e6d8  extsh 4, 3
  042e6dc  bf 0, 0x42e7e8
  042e6e0  lis 6, 165
  042e6e4  rlwinm 5, 5, 2, 22, 29
  042e6e8  addic 6, 6, -28284
  042e6ec  lis 7, 164
  042e6f0  lwzx 6, 6, 5
  042e6f4  lwz 5, -28512(7)
  042e6f8  cmpwi 6, 0
  042e6fc  bt 2, 0x42e7e8
  042e700  lhz 7, 0(6)
  042e704  rlwinm 7, 7, 8, 9, 23
  042e708  addc 7, 5, 7
  042e70c  clrldi 7, 7, 32
  042e710  lwz 8, 120(7)
  042e714  lhz 8, 180(8)
  042e718  extsh 8, 8
  042e71c  cmpw 8, 4
  042e720  bf 2, 0x42e730
  042e724  cmpwi 7, 0
  042e728  bf 2, 0x42e748
  042e72c  b 0x42e7e8
  042e730  lhz 7, 0(6)
  042e734  addic 6, 6, 2
  042e738  extsh 7, 7
  042e73c  cmpwi 7, 0
  042e740  bf 0, 0x42e700
  042e744  b 0x42e7e8
  042e748  lhz 4, 180(31)
  042e74c  lis 3, 165
  042e750  extsh 4, 4
  042e754  sldi 4, 4, 2
  042e758  addc 4, 31, 4
  042e75c  lwz 5, 7128(3)
  042e760  clrldi 4, 4, 32
  042e764  lwz 4, 128(4)
  042e768  slwi 4, 4, 7
  042e76c  addc 4, 5, 4
  042e770  clrldi 4, 4, 32
  042e774  lfs 1, 48(4)
  042e778  stfs 1, 16(7)
  042e77c  lfs 1, 52(4)
  042e780  stfs 1, 20(7)
  042e784  lfs 1, 56(4)
  042e788  stfs 1, 24(7)
  042e78c  lfs 1, 60(4)
  042e790  stfs 1, 28(7)
  042e794  lhz 4, 180(31)
  042e798  lwz 3, 7128(3)
  042e79c  extsh 4, 4
  042e7a0  sldi 4, 4, 2
  042e7a4  addc 4, 31, 4
  042e7a8  clrldi 4, 4, 32
  042e7ac  lwz 4, 128(4)
  042e7b0  slwi 4, 4, 7
  042e7b4  addc 3, 3, 4
  042e7b8  clrldi 4, 3, 32
  042e7bc  ori 3, 7, 0
  042e7c0  lfs 1, 112(4)
  042e7c4  stfs 1, 64(7)
  042e7c8  lfs 1, 116(4)
  042e7cc  stfs 1, 68(7)
  042e7d0  lfs 1, 120(4)
  042e7d4  stfs 1, 72(7)
  042e7d8  lfs 1, 124(4)
  042e7dc  stfs 1, 76(7)
  042e7e0  bl 0x42e4c8
  042e7e4  lhz 3, 182(31)
  042e7e8  sth 3, 180(31)
  042e7ec  ld 0, 144(1)
  042e7f0  mtlr 0
  042e7f4  ld 31, 120(1)
  042e7f8  addi 1, 1, 128
  042e7fc  blr

M712_0042e808:   # 0x42e808, 0xc4 bytes
  042e808  stdu 1, -144(1)
  042e80c  mflr 0
  042e810  std 0, 160(1)
  042e814  std 30, 128(1)
  042e818  lis 4, 67
  042e81c  std 31, 136(1)
  042e820  lwz 30, 120(3)
  042e824  lis 31, 16256
  042e828  addi 4, 4, -6144
  042e82c  addic 3, 30, 192
  042e830  addic 5, 30, 196
  042e834  lfs 1, 0(4)
  042e838  lfs 3, 216(30)
  042e83c  lfs 4, 212(30)
  042e840  fmr 2, 3
  042e844  bl 0x109c30
  042e848  nop
  042e84c  lwz 3, 172(30)
  042e850  addic 6, 30, 96
  042e854  addic 7, 30, 112
  042e858  li 5, 0
  042e85c  lwz 4, 0(3)
  042e860  addic 4, 4, -1
  042e864  li 8, 0
  042e868  extsw 4, 4
  042e86c  std 4, 112(1)
  042e870  lfs 1, 192(30)
  042e874  lfd 2, 112(1)
  042e878  fcfid 2, 2
  042e87c  frsp 2, 2
  042e880  fmuls 1, 1, 2
  042e884  bl 0x117390
  042e888  nop
  042e88c  lwz 3, 192(30)
  042e890  srawi 4, 3, 31
  042e894  srwi 5, 4, 1
  042e898  xor 3, 5, 3
  042e89c  subc 3, 3, 4
  042e8a0  cmpw 3, 31
  042e8a4  bt 0, 0x42e8b0
  042e8a8  li 3, 1
  042e8ac  b 0x42e8b4
  042e8b0  li 3, 0
  042e8b4  ld 0, 160(1)
  042e8b8  mtlr 0
  042e8bc  ld 30, 128(1)
  042e8c0  ld 31, 136(1)
  042e8c4  addi 1, 1, 144
  042e8c8  blr

UpdateMoby_712:   # 0x42e8f0, 0x1058 bytes
  042e8f0  stdu 1, -496(1)
  042e8f4  mflr 0
  042e8f8  std 0, 512(1)
  042e8fc  stfd 22, 416(1)
  042e900  stfd 23, 424(1)
  042e904  stfd 24, 432(1)
  042e908  stfd 25, 440(1)
  042e90c  stfd 26, 448(1)
  042e910  stfd 27, 456(1)
  042e914  stfd 28, 464(1)
  042e918  stfd 29, 472(1)
  042e91c  stfd 30, 480(1)
  042e920  stfd 31, 488(1)
  042e924  std 31, 408(1)
  042e928  std 30, 400(1)
  042e92c  ori 31, 3, 0
  042e930  lwz 30, 120(31)
  042e934  lfs 31, 16(31)
  042e938  lfs 1, 64(31)
  042e93c  lfs 30, 20(31)
  042e940  lfs 29, 24(31)
  042e944  lfs 2, 68(31)
  042e948  lhz 4, 52(31)
  042e94c  stfs 1, 112(1)
  042e950  lfs 1, 72(31)
  042e954  clrlwi 4, 4, 31
  042e958  stfs 2, 116(1)
  042e95c  lfs 2, 76(31)
  042e960  cntlzw 4, 4
  042e964  stfs 1, 120(1)
  042e968  stfs 2, 124(1)
  042e96c  std 29, 392(1)
  042e970  std 28, 384(1)
  042e974  rlwinm 4, 4, 27, 31, 31
  042e978  bl 0x4d407c
  042e97c  nop
  042e980  lbz 3, 32(31)
  042e984  lwz 4, 36(31)
  042e988  cmpwi 3, 7
  042e98c  lhz 5, 52(31)
  042e990  bt 2, 0x42f1bc
  042e994  cmpwi 3, 6
  042e998  bt 2, 0x42f75c
  042e99c  cmpwi 3, 5
  042e9a0  bt 2, 0x42f3e8
  042e9a4  cmpwi 3, 4
  042e9a8  bt 2, 0x42f308
  042e9ac  cmpwi 3, 3
  042e9b0  bt 2, 0x42f020
  042e9b4  cmpwi 3, 2
  042e9b8  bt 2, 0x42f7c0
  042e9bc  cmpwi 3, 1
  042e9c0  bt 2, 0x42e9e4
  042e9c4  cmpwi 3, 0
  042e9c8  bf 2, 0x42f7c0
  042e9cc  li 4, -1
  042e9d0  ori 3, 31, 0
  042e9d4  sth 4, 176(30)
  042e9d8  sth 4, 178(30)
  042e9dc  bl 0x42e4c8
  042e9e0  b 0x42f7c0
  042e9e4  lis 29, 151
  042e9e8  addic 29, 29, -25376
  042e9ec  lwz 3, 764(29)
  042e9f0  cmpw 3, 31
  042e9f4  bf 2, 0x42eb5c
  042e9f8  lhz 3, 782(29)
  042e9fc  cmpwi 3, 0
  042ea00  bf 2, 0x42eb5c
  042ea04  addic 3, 1, 240
  042ea08  addic 4, 31, 192
  042ea0c  bl 0x5010c0
  042ea10  nop
  042ea14  lfs 1, 132(29)
  042ea18  lfs 2, 20(31)
  042ea1c  lfs 3, 128(29)
  042ea20  fsubs 1, 1, 2
  042ea24  lfs 2, 16(31)
  042ea28  lfs 4, 260(1)
  042ea2c  fsubs 2, 3, 2
  042ea30  lis 3, 67
  042ea34  lfs 3, 136(29)
  042ea38  lfs 5, 24(31)
  042ea3c  lfs 6, 244(1)
  042ea40  addi 3, 3, -5940
  042ea44  fsubs 3, 3, 5
  042ea48  lfs 5, 276(1)
  042ea4c  fmuls 1, 4, 1
  042ea50  fmadds 1, 6, 2, 1
  042ea54  lfs 2, 0(3)
  042ea58  fmadds 1, 5, 3, 1
  042ea5c  fabs 1, 1
  042ea60  fcmpu 0, 1, 2
  042ea64  cror 6, 1, 2
  042ea68  bt 6, 0x42f7c0
  042ea6c  ori 3, 31, 0
  042ea70  bl 0x42e360
  042ea74  ori 3, 31, 0
  042ea78  bl 0x42e5dc
  042ea7c  lis 3, 150
  042ea80  addic 3, 3, 19008
  042ea84  lwz 3, 164(3)
  042ea88  rlwinm 3, 3, 0, 27, 27
  042ea8c  cmpwi 3, 0
  042ea90  bt 2, 0x42f7c0
  042ea94  lis 3, 161
  042ea98  lwz 3, 24360(3)
  042ea9c  cmpwi 3, 4
  042eaa0  bf 2, 0x42f7c0
  042eaa4  li 3, 3
  042eaa8  lis 5, 165
  042eaac  stb 3, 32(31)
  042eab0  lhz 4, 182(30)
  042eab4  lbz 3, 33(31)
  042eab8  lwz 5, -28288(5)
  042eabc  extsh 4, 4
  042eac0  cmpw 3, 5
  042eac4  bf 0, 0x42eb50
  042eac8  lis 5, 165
  042eacc  rlwinm 3, 3, 2, 22, 29
  042ead0  addic 5, 5, -28284
  042ead4  lis 6, 164
  042ead8  lwzx 3, 5, 3
  042eadc  lwz 5, -28512(6)
  042eae0  cmpwi 3, 0
  042eae4  bt 2, 0x42eb50
  042eae8  lhz 6, 0(3)
  042eaec  rlwinm 6, 6, 8, 9, 23
  042eaf0  addc 6, 5, 6
  042eaf4  clrldi 6, 6, 32
  042eaf8  lwz 7, 120(6)
  042eafc  lhz 7, 180(7)
  042eb00  extsh 7, 7
  042eb04  cmpw 7, 4
  042eb08  bf 2, 0x42eb18
  042eb0c  cmpwi 6, 0
  042eb10  bf 2, 0x42eb30
  042eb14  b 0x42eb50
  042eb18  lhz 6, 0(3)
  042eb1c  addic 3, 3, 2
  042eb20  extsh 6, 6
  042eb24  cmpwi 6, 0
  042eb28  bf 0, 0x42eae8
  042eb2c  b 0x42eb50
  042eb30  li 3, 0
  042eb34  lhz 5, 52(6)
  042eb38  li 4, 2
  042eb3c  ori 5, 5, 1
  042eb40  stw 3, 148(6)
  042eb44  stb 3, 49(6)
  042eb48  stb 4, 32(6)
  042eb4c  sth 5, 52(6)
  042eb50  li 3, -1
  042eb54  sth 3, 176(30)
  042eb58  b 0x42f7c0
  042eb5c  lwz 3, 256(30)
  042eb60  cmpwi 3, 0
  042eb64  bt 0, 0x42ed0c
  042eb68  lhz 4, 180(30)
  042eb6c  cmpwi 4, 0
  042eb70  bt 2, 0x42ed0c
  042eb74  addic 5, 29, 128
  042eb78  extsw 4, 3
  042eb7c  ori 3, 5, 0
  042eb80  bl 0x110b70
  042eb84  nop
  042eb88  cmpwi 3, 0
  042eb8c  bt 2, 0x42ed0c
  042eb90  lis 3, 67
  042eb94  lis 4, 114
  042eb98  addi 3, 3, -5940
  042eb9c  lfs 1, 4(3)
  042eba0  lfs 2, -3056(4)
  042eba4  lis 3, 161
  042eba8  fmuls 1, 2, 1
  042ebac  lwz 3, 1808(3)
  042ebb0  fctiwz 1, 1
  042ebb4  stfd 1, 368(1)
  042ebb8  lwz 4, 372(1)
  042ebbc  cmpw 3, 4
  042ebc0  bf 0, 0x42eccc
  042ebc4  li 3, 0
  042ebc8  lis 4, 165
  042ebcc  sth 3, 180(30)
  042ebd0  lwz 5, 128(30)
  042ebd4  lwz 6, 7128(4)
  042ebd8  slwi 5, 5, 7
  042ebdc  sth 3, 182(30)
  042ebe0  addc 3, 6, 5
  042ebe4  clrldi 3, 3, 32
  042ebe8  li 5, 1
  042ebec  lfs 1, 48(3)
  042ebf0  stfs 1, 16(31)
  042ebf4  lfs 1, 52(3)
  042ebf8  stfs 1, 20(31)
  042ebfc  lfs 1, 56(3)
  042ec00  lhz 7, 180(30)
  042ec04  stfs 1, 24(31)
  042ec08  extsh 7, 7
  042ec0c  lfs 1, 60(3)
  042ec10  sldi 7, 7, 2
  042ec14  stfs 1, 28(31)
  042ec18  addc 7, 30, 7
  042ec1c  clrldi 3, 7, 32
  042ec20  lwz 3, 128(3)
  042ec24  slwi 3, 3, 7
  042ec28  addc 3, 6, 3
  042ec2c  clrldi 3, 3, 32
  042ec30  lfs 1, 112(3)
  042ec34  stfs 1, 64(31)
  042ec38  lfs 1, 116(3)
  042ec3c  stfs 1, 68(31)
  042ec40  lfs 1, 120(3)
  042ec44  stfs 1, 72(31)
  042ec48  lfs 1, 124(3)
  042ec4c  stb 5, 32(31)
  042ec50  lhz 3, 180(30)
  042ec54  lwz 4, 7128(4)
  042ec58  extsh 3, 3
  042ec5c  stfs 1, 76(31)
  042ec60  sldi 3, 3, 2
  042ec64  addc 3, 30, 3
  042ec68  clrldi 3, 3, 32
  042ec6c  lwz 3, 128(3)
  042ec70  slwi 5, 3, 7
  042ec74  slwi 3, 3, 7
  042ec78  addc 5, 4, 5
  042ec7c  addc 3, 4, 3
  042ec80  clrldi 5, 5, 32
  042ec84  clrldi 3, 3, 32
  042ec88  lfs 1, 48(5)
  042ec8c  stfs 1, 96(30)
  042ec90  lfs 1, 52(5)
  042ec94  stfs 1, 100(30)
  042ec98  lfs 1, 56(5)
  042ec9c  stfs 1, 104(30)
  042eca0  lfs 1, 60(5)
  042eca4  stfs 1, 108(30)
  042eca8  lfs 1, 112(3)
  042ecac  stfs 1, 112(30)
  042ecb0  lfs 1, 116(3)
  042ecb4  stfs 1, 116(30)
  042ecb8  lfs 1, 120(3)
  042ecbc  stfs 1, 120(30)
  042ecc0  lfs 1, 124(3)
  042ecc4  stfs 1, 124(30)
  042ecc8  b 0x42ed0c
  042eccc  li 3, 2
  042ecd0  lhz 6, 180(30)
  042ecd4  li 4, 3
  042ecd8  subc 3, 3, 6
  042ecdc  li 5, 1
  042ece0  cntlzw 3, 3
  042ece4  subc 4, 4, 5
  042ece8  sldi 3, 3, 58
  042ecec  sradi 3, 3, 63
  042ecf0  and 4, 3, 4
  042ecf4  ori 3, 31, 0
  042ecf8  addc 4, 5, 4
  042ecfc  sth 4, 180(30)
  042ed00  bl 0x42e360
  042ed04  li 3, 3
  042ed08  stb 3, 32(31)
  042ed0c  lwz 3, 260(30)
  042ed10  cmpwi 3, 0
  042ed14  bt 0, 0x42ee90
  042ed18  lhz 4, 180(30)
  042ed1c  cmpwi 4, 1
  042ed20  bt 2, 0x42ee90
  042ed24  addic 5, 29, 128
  042ed28  extsw 4, 3
  042ed2c  ori 3, 5, 0
  042ed30  bl 0x110b70
  042ed34  nop
  042ed38  cmpwi 3, 0
  042ed3c  bt 2, 0x42ee90
  042ed40  lis 3, 67
  042ed44  lis 4, 114
  042ed48  addi 3, 3, -5940
  042ed4c  lis 5, 161
  042ed50  lfs 1, 4(3)
  042ed54  lfs 2, -3056(4)
  042ed58  lwz 3, 1808(5)
  042ed5c  fmuls 1, 2, 1
  042ed60  fctiwz 1, 1
  042ed64  stfd 1, 368(1)
  042ed68  lwz 4, 372(1)
  042ed6c  cmpw 3, 4
  042ed70  bf 0, 0x42ee78
  042ed74  li 3, 1
  042ed78  lis 4, 165
  042ed7c  sth 3, 180(30)
  042ed80  lwz 5, 132(30)
  042ed84  lwz 6, 7128(4)
  042ed88  slwi 5, 5, 7
  042ed8c  sth 3, 182(30)
  042ed90  addc 5, 6, 5
  042ed94  clrldi 5, 5, 32
  042ed98  lfs 1, 48(5)
  042ed9c  stfs 1, 16(31)
  042eda0  lfs 1, 52(5)
  042eda4  stfs 1, 20(31)
  042eda8  lfs 1, 56(5)
  042edac  lhz 7, 180(30)
  042edb0  stfs 1, 24(31)
  042edb4  extsh 7, 7
  042edb8  lfs 1, 60(5)
  042edbc  sldi 7, 7, 2
  042edc0  stfs 1, 28(31)
  042edc4  addc 7, 30, 7
  042edc8  clrldi 5, 7, 32
  042edcc  lwz 5, 128(5)
  042edd0  slwi 5, 5, 7
  042edd4  addc 5, 6, 5
  042edd8  clrldi 5, 5, 32
  042eddc  lfs 1, 112(5)
  042ede0  stfs 1, 64(31)
  042ede4  lfs 1, 116(5)
  042ede8  stfs 1, 68(31)
  042edec  lfs 1, 120(5)
  042edf0  stfs 1, 72(31)
  042edf4  lfs 1, 124(5)
  042edf8  stb 3, 32(31)
  042edfc  lhz 3, 180(30)
  042ee00  lwz 4, 7128(4)
  042ee04  extsh 3, 3
  042ee08  stfs 1, 76(31)
  042ee0c  sldi 3, 3, 2
  042ee10  addc 3, 30, 3
  042ee14  clrldi 3, 3, 32
  042ee18  lwz 3, 128(3)
  042ee1c  slwi 5, 3, 7
  042ee20  slwi 3, 3, 7
  042ee24  addc 5, 4, 5
  042ee28  addc 3, 4, 3
  042ee2c  clrldi 5, 5, 32
  042ee30  clrldi 3, 3, 32
  042ee34  lfs 1, 48(5)
  042ee38  stfs 1, 96(30)
  042ee3c  lfs 1, 52(5)
  042ee40  stfs 1, 100(30)
  042ee44  lfs 1, 56(5)
  042ee48  stfs 1, 104(30)
  042ee4c  lfs 1, 60(5)
  042ee50  stfs 1, 108(30)
  042ee54  lfs 1, 112(3)
  042ee58  stfs 1, 112(30)
  042ee5c  lfs 1, 116(3)
  042ee60  stfs 1, 116(30)
  042ee64  lfs 1, 120(3)
  042ee68  stfs 1, 120(30)
  042ee6c  lfs 1, 124(3)
  042ee70  stfs 1, 124(30)
  042ee74  b 0x42ee90
  042ee78  li 4, 0
  042ee7c  ori 3, 31, 0
  042ee80  sth 4, 180(30)
  042ee84  bl 0x42e360
  042ee88  li 3, 3
  042ee8c  stb 3, 32(31)
  042ee90  lwz 3, 264(30)
  042ee94  cmpwi 3, 0
  042ee98  bt 0, 0x42f7c0
  042ee9c  lhz 4, 180(30)
  042eea0  extsh 4, 4
  042eea4  cmpwi 4, 2
  042eea8  bf 0, 0x42f7c0
  042eeac  addic 5, 29, 128
  042eeb0  extsw 4, 3
  042eeb4  ori 3, 5, 0
  042eeb8  bl 0x110b70
  042eebc  nop
  042eec0  cmpwi 3, 0
  042eec4  bt 2, 0x42f7c0
  042eec8  lis 3, 67
  042eecc  lis 4, 114
  042eed0  addi 3, 3, -5940
  042eed4  lfs 1, 4(3)
  042eed8  lfs 2, -3056(4)
  042eedc  lis 3, 161
  042eee0  fmuls 1, 2, 1
  042eee4  lwz 3, 1808(3)
  042eee8  fctiwz 1, 1
  042eeec  stfd 1, 368(1)
  042eef0  lwz 4, 372(1)
  042eef4  cmpw 3, 4
  042eef8  bf 0, 0x42f004
  042eefc  li 3, 2
  042ef00  lis 4, 165
  042ef04  sth 3, 180(30)
  042ef08  lwz 5, 136(30)
  042ef0c  lwz 6, 7128(4)
  042ef10  slwi 5, 5, 7
  042ef14  sth 3, 182(30)
  042ef18  addc 3, 6, 5
  042ef1c  clrldi 3, 3, 32
  042ef20  li 5, 1
  042ef24  lfs 1, 48(3)
  042ef28  stfs 1, 16(31)
  042ef2c  lfs 1, 52(3)
  042ef30  stfs 1, 20(31)
  042ef34  lfs 1, 56(3)
  042ef38  lhz 7, 180(30)
  042ef3c  stfs 1, 24(31)
  042ef40  extsh 7, 7
  042ef44  lfs 1, 60(3)
  042ef48  sldi 7, 7, 2
  042ef4c  stfs 1, 28(31)
  042ef50  addc 7, 30, 7
  042ef54  clrldi 3, 7, 32
  042ef58  lwz 3, 128(3)
  042ef5c  slwi 3, 3, 7
  042ef60  addc 3, 6, 3
  042ef64  clrldi 3, 3, 32
  042ef68  lfs 1, 112(3)
  042ef6c  stfs 1, 64(31)
  042ef70  lfs 1, 116(3)
  042ef74  stfs 1, 68(31)
  042ef78  lfs 1, 120(3)
  042ef7c  stfs 1, 72(31)
  042ef80  lfs 1, 124(3)
  042ef84  stb 5, 32(31)
  042ef88  lhz 3, 180(30)
  042ef8c  lwz 4, 7128(4)
  042ef90  extsh 3, 3
  042ef94  stfs 1, 76(31)
  042ef98  sldi 3, 3, 2
  042ef9c  addc 3, 30, 3
  042efa0  clrldi 3, 3, 32
  042efa4  lwz 3, 128(3)
  042efa8  slwi 5, 3, 7
  042efac  slwi 3, 3, 7
  042efb0  addc 5, 4, 5
  042efb4  addc 3, 4, 3
  042efb8  clrldi 5, 5, 32
  042efbc  clrldi 3, 3, 32
  042efc0  lfs 1, 48(5)
  042efc4  stfs 1, 96(30)
  042efc8  lfs 1, 52(5)
  042efcc  stfs 1, 100(30)
  042efd0  lfs 1, 56(5)
  042efd4  stfs 1, 104(30)
  042efd8  lfs 1, 60(5)
  042efdc  stfs 1, 108(30)
  042efe0  lfs 1, 112(3)
  042efe4  stfs 1, 112(30)
  042efe8  lfs 1, 116(3)
  042efec  stfs 1, 116(30)
  042eff0  lfs 1, 120(3)
  042eff4  stfs 1, 120(30)
  042eff8  lfs 1, 124(3)
  042effc  stfs 1, 124(30)
  042f000  b 0x42f7c0
  042f004  li 4, 2
  042f008  ori 3, 31, 0
  042f00c  sth 4, 180(30)
  042f010  bl 0x42e360
  042f014  li 3, 3
  042f018  stb 3, 32(31)
  042f01c  b 0x42f7c0
  042f020  lis 3, 151
  042f024  addic 3, 3, -25376
  042f028  lwz 4, 764(3)
  042f02c  cmpw 4, 31
  042f030  bf 2, 0x42f05c
  042f034  lhz 3, 782(3)
  042f038  cmpwi 3, 0
  042f03c  bf 2, 0x42f05c
  042f040  lis 3, 67
  042f044  li 4, 0
  042f048  addi 3, 3, -5940
  042f04c  lfs 1, 8(3)
  042f050  lfs 2, 12(3)
  042f054  bl 0x2f3d8
  042f058  nop
  042f05c  lis 3, 67
  042f060  lis 4, 114
  042f064  addi 29, 3, -5940
  042f068  lis 6, 114
  042f06c  addic 3, 30, 192
  042f070  addic 5, 30, 196
  042f074  lis 28, 16256
  042f078  lfs 4, 20(29)
  042f07c  lfs 1, 16(29)
  042f080  lfs 3, -3048(4)
  042f084  lfs 5, -3052(6)
  042f088  fmr 2, 3
  042f08c  fmuls 4, 5, 4
  042f090  bl 0x109c30
  042f094  nop
  042f098  lhz 3, 180(30)
  042f09c  lis 4, 165
  042f0a0  addic 6, 1, 144
  042f0a4  extsh 3, 3
  042f0a8  addic 7, 1, 160
  042f0ac  sldi 3, 3, 2
  042f0b0  lwz 4, 7128(4)
  042f0b4  li 8, 0
  042f0b8  addc 3, 30, 3
  042f0bc  lwz 5, 172(30)
  042f0c0  lfs 1, 24(29)
  042f0c4  clrldi 3, 3, 32
  042f0c8  lwz 3, 128(3)
  042f0cc  slwi 3, 3, 7
  042f0d0  addc 4, 4, 3
  042f0d4  ori 3, 5, 0
  042f0d8  clrldi 4, 4, 32
  042f0dc  li 5, 0
  042f0e0  lfs 28, 48(4)
  042f0e4  lfs 27, 52(4)
  042f0e8  lfs 26, 56(4)
  042f0ec  lfs 25, 116(4)
  042f0f0  lfs 24, 120(4)
  042f0f4  bl 0x117390
  042f0f8  nop
  042f0fc  lfs 1, 144(1)
  042f100  lfs 2, 148(1)
  042f104  fsubs 1, 1, 28
  042f108  lfs 3, 152(1)
  042f10c  fsubs 4, 2, 27
  042f110  lfs 5, 192(30)
  042f114  fmr 2, 25
  042f118  fsubs 3, 3, 26
  042f11c  lfs 6, 156(1)
  042f120  stfs 6, 108(30)
  042f124  fmadds 1, 5, 1, 28
  042f128  fmadds 4, 5, 4, 27
  042f12c  fmadds 3, 5, 3, 26
  042f130  stfs 1, 96(30)
  042f134  stfs 4, 100(30)
  042f138  stfs 3, 104(30)
  042f13c  lfs 1, 164(1)
  042f140  bl 0x5025e0
  042f144  nop
  042f148  lfs 3, 192(30)
  042f14c  fmr 2, 25
  042f150  fmuls 1, 1, 3
  042f154  bl 0x502578
  042f158  nop
  042f15c  stfs 1, 116(30)
  042f160  lfs 1, 168(1)
  042f164  fmr 2, 24
  042f168  bl 0x5025e0
  042f16c  nop
  042f170  lfs 3, 192(30)
  042f174  fmr 2, 24
  042f178  fmuls 1, 1, 3
  042f17c  bl 0x502578
  042f180  nop
  042f184  lwz 3, 192(30)
  042f188  stfs 1, 120(30)
  042f18c  srawi 4, 3, 31
  042f190  srwi 5, 4, 1
  042f194  xor 3, 5, 3
  042f198  subc 3, 3, 4
  042f19c  cmpw 3, 28
  042f1a0  bt 0, 0x42f7c0
  042f1a4  li 3, 0
  042f1a8  li 4, 4
  042f1ac  stw 3, 192(30)
  042f1b0  stw 3, 196(30)
  042f1b4  stb 4, 32(31)
  042f1b8  b 0x42f7c0
  042f1bc  lis 3, 67
  042f1c0  lis 4, 114
  042f1c4  addi 29, 3, -5940
  042f1c8  lis 6, 114
  042f1cc  addic 5, 30, 196
  042f1d0  addic 3, 30, 192
  042f1d4  lis 28, 16256
  042f1d8  lfs 28, 16(29)
  042f1dc  lfs 4, 20(29)
  042f1e0  lfs 3, -3048(4)
  042f1e4  fmr 1, 28
  042f1e8  lfs 5, -3052(6)
  042f1ec  fmr 2, 3
  042f1f0  fmuls 4, 5, 4
  042f1f4  bl 0x109c30
  042f1f8  nop
  042f1fc  lfs 26, 24(29)
  042f200  lfs 27, 224(30)
  042f204  addic 6, 1, 176
  042f208  lfs 25, 228(30)
  042f20c  fmr 1, 26
  042f210  lfs 24, 232(30)
  042f214  addic 7, 1, 192
  042f218  lwz 3, 172(30)
  042f21c  li 5, 0
  042f220  lfs 23, 244(30)
  042f224  li 8, 0
  042f228  lfs 22, 248(30)
  042f22c  bl 0x117390
  042f230  nop
  042f234  fmr 1, 28
  042f238  lfs 5, 192(30)
  042f23c  fmr 2, 26
  042f240  fmr 3, 28
  042f244  fmr 4, 26
  042f248  bl 0xfec94
  042f24c  nop
  042f250  lfs 2, 176(1)
  042f254  fmr 28, 1
  042f258  lfs 1, 180(1)
  042f25c  fsubs 3, 2, 27
  042f260  lfs 2, 184(1)
  042f264  fsubs 1, 1, 25
  042f268  lfs 5, 188(1)
  042f26c  fsubs 4, 2, 24
  042f270  stfs 5, 108(30)
  042f274  fmr 2, 23
  042f278  fmadds 3, 28, 3, 27
  042f27c  fmadds 1, 28, 1, 25
  042f280  fmadds 4, 28, 4, 24
  042f284  stfs 3, 96(30)
  042f288  stfs 1, 100(30)
  042f28c  stfs 4, 104(30)
  042f290  lfs 1, 196(1)
  042f294  bl 0x5025e0
  042f298  nop
  042f29c  fmuls 1, 1, 28
  042f2a0  fmr 2, 23
  042f2a4  bl 0x502578
  042f2a8  nop
  042f2ac  stfs 1, 116(30)
  042f2b0  lfs 1, 200(1)
  042f2b4  fmr 2, 22
  042f2b8  bl 0x5025e0
  042f2bc  nop
  042f2c0  fmuls 1, 1, 28
  042f2c4  fmr 2, 22
  042f2c8  bl 0x502578
  042f2cc  nop
  042f2d0  lwz 3, 192(30)
  042f2d4  stfs 1, 120(30)
  042f2d8  srawi 4, 3, 31
  042f2dc  srwi 5, 4, 1
  042f2e0  xor 3, 5, 3
  042f2e4  subc 3, 3, 4
  042f2e8  cmpw 3, 28
  042f2ec  bt 0, 0x42f7c0
  042f2f0  li 3, 0
  042f2f4  li 4, 4
  042f2f8  stw 3, 192(30)
  042f2fc  stw 3, 196(30)
  042f300  stb 4, 32(31)
  042f304  b 0x42f7c0
  042f308  lis 3, 151
  042f30c  addic 3, 3, -25376
  042f310  lwz 4, 764(3)
  042f314  cmpw 4, 31
  042f318  bf 2, 0x42f344
  042f31c  lhz 3, 782(3)
  042f320  cmpwi 3, 0
  042f324  bf 2, 0x42f344
  042f328  lis 3, 67
  042f32c  li 4, 0
  042f330  addi 3, 3, -5940
  042f334  lfs 1, 8(3)
  042f338  lfs 2, 28(3)
  042f33c  bl 0x2f3d8
  042f340  nop
  042f344  lis 3, 67
  042f348  lwz 28, 120(31)
  042f34c  lis 29, 16256
  042f350  addi 4, 3, -5940
  042f354  addic 3, 28, 192
  042f358  addic 5, 28, 196
  042f35c  lfs 1, 16(4)
  042f360  lfs 3, 216(28)
  042f364  lfs 4, 212(28)
  042f368  fmr 2, 3
  042f36c  bl 0x109c30
  042f370  nop
  042f374  lwz 3, 172(28)
  042f378  addic 6, 28, 96
  042f37c  addic 7, 28, 112
  042f380  li 5, 0
  042f384  lwz 4, 0(3)
  042f388  addic 4, 4, -1
  042f38c  li 8, 0
  042f390  extsw 4, 4
  042f394  std 4, 368(1)
  042f398  lfs 1, 192(28)
  042f39c  lfd 2, 368(1)
  042f3a0  fcfid 2, 2
  042f3a4  frsp 2, 2
  042f3a8  fmuls 1, 1, 2
  042f3ac  bl 0x117390
  042f3b0  nop
  042f3b4  lwz 3, 192(28)
  042f3b8  srawi 4, 3, 31
  042f3bc  srwi 5, 4, 1
  042f3c0  xor 3, 5, 3
  042f3c4  subc 3, 3, 4
  042f3c8  cmpw 3, 29
  042f3cc  bt 0, 0x42f7c0
  042f3d0  li 3, 0
  042f3d4  li 4, 5
  042f3d8  stw 3, 192(30)
  042f3dc  stw 3, 196(30)
  042f3e0  stb 4, 32(31)
  042f3e4  b 0x42f7c0
  042f3e8  lis 3, 67
  042f3ec  lis 4, 114
  042f3f0  addi 6, 3, -5940
  042f3f4  lis 7, 114
  042f3f8  addic 3, 30, 192
  042f3fc  addic 5, 30, 196
  042f400  lis 29, 16256
  042f404  lfs 4, 32(6)
  042f408  lfs 1, 16(6)
  042f40c  lfs 3, -3048(4)
  042f410  lfs 5, -3052(7)
  042f414  fmr 2, 3
  042f418  fmuls 4, 5, 4
  042f41c  bl 0x109c30
  042f420  nop
  042f424  lwz 3, 172(30)
  042f428  lhz 5, 182(30)
  042f42c  lis 4, 165
  042f430  extsh 5, 5
  042f434  sldi 5, 5, 2
  042f438  lwz 6, 0(3)
  042f43c  addc 5, 30, 5
  042f440  extsw 6, 6
  042f444  lwz 4, 7128(4)
  042f448  clrldi 5, 5, 32
  042f44c  addic 7, 1, 224
  042f450  std 6, 368(1)
  042f454  li 8, 0
  042f458  addic 6, 1, 208
  042f45c  lwz 5, 128(5)
  042f460  slwi 5, 5, 7
  042f464  addc 4, 4, 5
  042f468  li 5, 0
  042f46c  clrldi 4, 4, 32
  042f470  lfs 28, 48(4)
  042f474  lfs 27, 52(4)
  042f478  lfs 26, 56(4)
  042f47c  lfs 25, 60(4)
  042f480  lfs 24, 116(4)
  042f484  lfd 1, 368(1)
  042f488  lfs 23, 120(4)
  042f48c  fcfid 1, 1
  042f490  frsp 1, 1
  042f494  bl 0x117390
  042f498  nop
  042f49c  lfs 1, 208(1)
  042f4a0  lfs 2, 192(30)
  042f4a4  fsubs 3, 28, 1
  042f4a8  lfs 4, 212(1)
  042f4ac  lfs 5, 216(1)
  042f4b0  fsubs 4, 27, 4
  042f4b4  fsubs 5, 26, 5
  042f4b8  fmadds 3, 2, 3, 1
  042f4bc  fmr 1, 24
  042f4c0  stfs 3, 96(30)
  042f4c4  lfs 3, 212(1)
  042f4c8  fmadds 3, 2, 4, 3
  042f4cc  stfs 3, 100(30)
  042f4d0  lfs 3, 216(1)
  042f4d4  stfs 25, 108(30)
  042f4d8  fmadds 2, 2, 5, 3
  042f4dc  stfs 2, 104(30)
  042f4e0  lfs 2, 228(1)
  042f4e4  bl 0x5025e0
  042f4e8  nop
  042f4ec  lfs 2, 192(30)
  042f4f0  lfs 3, 228(1)
  042f4f4  fmuls 1, 1, 2
  042f4f8  fmr 2, 3
  042f4fc  bl 0x502578
  042f500  nop
  042f504  stfs 1, 116(30)
  042f508  fmr 1, 23
  042f50c  lfs 2, 232(1)
  042f510  bl 0x5025e0
  042f514  nop
  042f518  lfs 2, 192(30)
  042f51c  lfs 3, 232(1)
  042f520  fmuls 1, 1, 2
  042f524  fmr 2, 3
  042f528  bl 0x502578
  042f52c  nop
  042f530  lwz 3, 192(30)
  042f534  stfs 1, 120(30)
  042f538  srawi 4, 3, 31
  042f53c  srwi 5, 4, 1
  042f540  xor 3, 5, 3
  042f544  subc 3, 3, 4
  042f548  cmpw 3, 29
  042f54c  bt 0, 0x42f56c
  042f550  li 4, 0
  042f554  li 5, 1
  042f558  ori 3, 31, 0
  042f55c  stw 4, 192(30)
  042f560  stw 4, 196(30)
  042f564  stb 5, 32(31)
  042f568  bl 0x42e6b0
  042f56c  lis 29, 151
  042f570  addic 29, 29, -25376
  042f574  lwz 3, 764(29)
  042f578  cmpw 3, 31
  042f57c  bf 2, 0x42f7c0
  042f580  lhz 3, 782(29)
  042f584  cmpwi 3, 0
  042f588  bf 2, 0x42f7c0
  042f58c  addic 3, 1, 304
  042f590  addic 4, 31, 192
  042f594  bl 0x5010c0
  042f598  nop
  042f59c  lfs 1, 132(29)
  042f5a0  lfs 2, 20(31)
  042f5a4  lfs 3, 128(29)
  042f5a8  fsubs 1, 1, 2
  042f5ac  lfs 2, 16(31)
  042f5b0  lfs 4, 324(1)
  042f5b4  fsubs 2, 3, 2
  042f5b8  lis 3, 67
  042f5bc  lfs 3, 136(29)
  042f5c0  lfs 5, 24(31)
  042f5c4  lfs 6, 308(1)
  042f5c8  addi 3, 3, -5940
  042f5cc  fsubs 3, 3, 5
  042f5d0  lfs 5, 340(1)
  042f5d4  fmuls 1, 4, 1
  042f5d8  fmadds 1, 6, 2, 1
  042f5dc  lfs 2, 0(3)
  042f5e0  fmadds 1, 5, 3, 1
  042f5e4  fabs 1, 1
  042f5e8  fcmpu 0, 1, 2
  042f5ec  cror 6, 1, 2
  042f5f0  bt 6, 0x42f7c0
  042f5f4  ori 3, 31, 0
  042f5f8  bl 0x42e5dc
  042f5fc  lis 3, 150
  042f600  addic 3, 3, 19008
  042f604  lwz 3, 164(3)
  042f608  rlwinm 3, 3, 0, 27, 27
  042f60c  cmpwi 3, 0
  042f610  bt 2, 0x42f7c0
  042f614  lfs 1, 96(30)
  042f618  lfs 2, 100(30)
  042f61c  ori 3, 31, 0
  042f620  stfs 1, 224(30)
  042f624  lfs 1, 104(30)
  042f628  stfs 2, 228(30)
  042f62c  lfs 2, 108(30)
  042f630  stfs 1, 232(30)
  042f634  lfs 1, 112(30)
  042f638  stfs 2, 236(30)
  042f63c  lfs 2, 116(30)
  042f640  stfs 1, 240(30)
  042f644  lfs 1, 120(30)
  042f648  stfs 2, 244(30)
  042f64c  lfs 2, 124(30)
  042f650  stfs 1, 248(30)
  042f654  stfs 2, 252(30)
  042f658  bl 0x42e4c8
  042f65c  lhz 4, 182(30)
  042f660  ori 3, 31, 0
  042f664  sth 4, 180(30)
  042f668  bl 0x42e360
  042f66c  li 3, 7
  042f670  lis 5, 165
  042f674  stb 3, 32(31)
  042f678  lfs 1, 224(30)
  042f67c  lfs 2, 228(30)
  042f680  stfs 1, 96(30)
  042f684  lfs 1, 232(30)
  042f688  stfs 2, 100(30)
  042f68c  lfs 2, 236(30)
  042f690  stfs 1, 104(30)
  042f694  lfs 1, 240(30)
  042f698  stfs 2, 108(30)
  042f69c  lfs 2, 244(30)
  042f6a0  stfs 1, 112(30)
  042f6a4  lfs 1, 248(30)
  042f6a8  stfs 2, 116(30)
  042f6ac  lfs 2, 252(30)
  042f6b0  stfs 1, 120(30)
  042f6b4  stfs 2, 124(30)
  042f6b8  lhz 3, 182(30)
  042f6bc  lbz 4, 33(31)
  042f6c0  lwz 5, -28288(5)
  042f6c4  extsh 3, 3
  042f6c8  cmpw 4, 5
  042f6cc  bf 0, 0x42f7c0
  042f6d0  lis 5, 165
  042f6d4  rlwinm 4, 4, 2, 22, 29
  042f6d8  addic 5, 5, -28284
  042f6dc  lis 6, 164
  042f6e0  lwzx 4, 5, 4
  042f6e4  lwz 5, -28512(6)
  042f6e8  cmpwi 4, 0
  042f6ec  bt 2, 0x42f7c0
  042f6f0  lhz 6, 0(4)
  042f6f4  rlwinm 6, 6, 8, 9, 23
  042f6f8  addc 6, 5, 6
  042f6fc  clrldi 6, 6, 32
  042f700  lwz 7, 120(6)
  042f704  lhz 7, 180(7)
  042f708  extsh 7, 7
  042f70c  cmpw 7, 3
  042f710  bf 2, 0x42f720
  042f714  cmpwi 6, 0
  042f718  bf 2, 0x42f738
  042f71c  b 0x42f7c0
  042f720  lhz 6, 0(4)
  042f724  addic 4, 4, 2
  042f728  extsh 6, 6
  042f72c  cmpwi 6, 0
  042f730  bf 0, 0x42f6f0
  042f734  b 0x42f7c0
  042f738  li 3, 0
  042f73c  lhz 5, 52(6)
  042f740  li 4, 2
  042f744  ori 5, 5, 1
  042f748  stw 3, 148(6)
  042f74c  stb 3, 49(6)
  042f750  stb 4, 32(6)
  042f754  sth 5, 52(6)
  042f758  b 0x42f7c0
  042f75c  lis 6, 151
  042f760  lis 3, 161
  042f764  lwz 7, 184(30)
  042f768  addic 3, 3, -13692
  042f76c  lwz 6, -25488(6)
  042f770  addc 7, 7, 3
  042f774  slwi 6, 6, 4
  042f778  clrldi 7, 7, 32
  042f77c  extsw 6, 6
  042f780  lbzx 7, 7, 6
  042f784  cmpwi 7, 255
  042f788  bt 2, 0x42f7a4
  042f78c  lwz 7, 188(30)
  042f790  addc 3, 7, 3
  042f794  clrldi 3, 3, 32
  042f798  lbzx 3, 3, 6
  042f79c  cmpwi 3, 255
  042f7a0  bf 2, 0x42f7c0
  042f7a4  rlwinm 3, 5, 0, 16, 30
  042f7a8  li 5, 1
  042f7ac  lwz 4, 16(4)
  042f7b0  sth 3, 52(31)
  042f7b4  stw 4, 148(31)
  042f7b8  stb 5, 49(31)
  042f7bc  stb 5, 32(31)
  042f7c0  ori 3, 31, 0
  042f7c4  bl 0x42e010
  042f7c8  lbz 3, 32(31)
  042f7cc  cmpwi 3, 3
  042f7d0  bt 2, 0x42f7dc
  042f7d4  cmpwi 3, 4
  042f7d8  bf 2, 0x42f84c
  042f7dc  lis 3, 151
  042f7e0  addic 3, 3, -25376
  042f7e4  lwz 4, 764(3)
  042f7e8  cmpw 4, 31
  042f7ec  bf 2, 0x42f814
  042f7f0  lhz 4, 782(3)
  042f7f4  cmpwi 4, 0
  042f7f8  bf 2, 0x42f814
  042f7fc  ori 4, 3, 0
  042f800  li 5, 2
  042f804  ori 3, 31, 0
  042f808  sth 5, 498(4)
  042f80c  sth 5, 500(4)
  042f810  bl 0x42de90
  042f814  ori 3, 31, 0
  042f818  lhz 4, 178(30)
  042f81c  extsh 4, 4
  042f820  bl 0x15cc7c
  042f824  nop
  042f828  cmpwi 3, 0
  042f82c  bf 2, 0x42f8bc
  042f830  li 3, 0
  042f834  li 4, 4
  042f838  ori 5, 31, 0
  042f83c  bl 0x15d12c
  042f840  nop
  042f844  sth 3, 178(30)
  042f848  b 0x42f8bc
  042f84c  ori 3, 31, 0
  042f850  lhz 4, 178(30)
  042f854  extsh 4, 4
  042f858  bl 0x15cc7c
  042f85c  nop
  042f860  cmpwi 3, 0
  042f864  bt 2, 0x42f8bc
  042f868  lhz 3, 178(30)
  042f86c  extsh 3, 3
  042f870  cmpwi 3, -1
  042f874  bt 2, 0x42f8b4
  042f878  lis 4, 150
  042f87c  sldi 5, 3, 7
  042f880  sldi 6, 3, 4
  042f884  addic 7, 4, 14312
  042f888  subc 4, 5, 6
  042f88c  lwzx 5, 7, 4
  042f890  cmpw 5, 31
  042f894  bf 2, 0x42f8b4
  042f898  lis 5, 150
  042f89c  addic 5, 5, 14292
  042f8a0  lbzx 4, 5, 4
  042f8a4  cmpwi 4, 0
  042f8a8  bt 2, 0x42f8b4
  042f8ac  bl 0x15cdb0
  042f8b0  nop
  042f8b4  li 3, -1
  042f8b8  sth 3, 178(30)
  042f8bc  lfs 1, 16(31)
  042f8c0  lfs 2, 20(31)
  042f8c4  addic 3, 30, 32
  042f8c8  fsubs 1, 1, 31
  042f8cc  lfs 3, 24(31)
  042f8d0  fsubs 2, 2, 30
  042f8d4  lfs 4, 28(31)
  042f8d8  fsubs 3, 3, 29
  042f8dc  addic 4, 1, 128
  042f8e0  stfs 4, 140(1)
  042f8e4  addic 5, 1, 112
  042f8e8  addic 6, 31, 64
  042f8ec  stfs 1, 128(1)
  042f8f0  stfs 2, 132(1)
  042f8f4  stfs 3, 136(1)
  042f8f8  bl 0x112900
  042f8fc  nop
  042f900  ld 0, 512(1)
  042f904  mtlr 0
  042f908  lfd 22, 416(1)
  042f90c  lfd 23, 424(1)
  042f910  lfd 24, 432(1)
  042f914  lfd 25, 440(1)
  042f918  lfd 26, 448(1)
  042f91c  lfd 27, 456(1)
  042f920  lfd 28, 464(1)
  042f924  lfd 29, 472(1)
  042f928  lfd 30, 480(1)
  042f92c  lfd 31, 488(1)
  042f930  ld 28, 384(1)
  042f934  ld 29, 392(1)
  042f938  ld 30, 400(1)
  042f93c  ld 31, 408(1)
  042f940  addi 1, 1, 496
  042f944  blr

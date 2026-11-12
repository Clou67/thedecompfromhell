# game/update/moby185.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1849_002c5db8:   # 0x2c5db8, 0x17c bytes
  02c5db8  stdu 1, -144(1)
  02c5dbc  mflr 0
  02c5dc0  std 0, 160(1)
  02c5dc4  std 31, 136(1)
  02c5dc8  lis 4, 266
  02c5dcc  ori 31, 3, 0
  02c5dd0  std 30, 128(1)
  02c5dd4  lwz 4, 4256(4)
  02c5dd8  lwz 30, 120(3)
  02c5ddc  std 29, 120(1)
  02c5de0  cmpwi 4, 0
  02c5de4  bt 2, 0x2c5f18
  02c5de8  ori 29, 31, 0
  02c5dec  lis 4, 266
  02c5df0  li 31, 0
  02c5df4  li 3, 12
  02c5df8  stw 31, 4256(4)
  02c5dfc  bl 0x502730
  02c5e00  nop
  02c5e04  lis 3, 124
  02c5e08  lis 5, 266
  02c5e0c  lis 6, 266
  02c5e10  lfs 2, -11452(3)
  02c5e14  fdivs 1, 2, 1
  02c5e18  addic 3, 6, 4288
  02c5e1c  li 4, 11
  02c5e20  mtctr 4
  02c5e24  addic 4, 3, 16
  02c5e28  stfs 1, 4864(5)
  02c5e2c  lfs 2, 208(29)
  02c5e30  lfs 3, 212(29)
  02c5e34  fmuls 4, 1, 2
  02c5e38  lfs 2, 216(29)
  02c5e3c  fmuls 3, 1, 3
  02c5e40  lfs 5, 0(30)
  02c5e44  fmuls 2, 1, 2
  02c5e48  lfs 1, 220(29)
  02c5e4c  stfs 5, 4288(6)
  02c5e50  lfs 5, 4(30)
  02c5e54  stfs 5, 4(3)
  02c5e58  lfs 5, 8(30)
  02c5e5c  fneg 4, 4
  02c5e60  stfs 5, 8(3)
  02c5e64  lfs 5, 12(30)
  02c5e68  fneg 3, 3
  02c5e6c  fneg 2, 2
  02c5e70  stfs 5, 12(3)
  02c5e74  lfs 5, 0(3)
  02c5e78  fadds 5, 5, 4
  02c5e7c  stfs 5, 0(4)
  02c5e80  lfs 5, 4(3)
  02c5e84  fadds 5, 5, 3
  02c5e88  stfs 5, 4(4)
  02c5e8c  lfs 5, 8(3)
  02c5e90  fadds 5, 5, 2
  02c5e94  stfs 5, 8(4)
  02c5e98  lfs 5, 12(3)
  02c5e9c  addic 3, 3, 16
  02c5ea0  stfs 5, 12(4)
  02c5ea4  addic 4, 4, 16
  02c5ea8  bdnz 0x2c5e74
  02c5eac  lis 3, 266
  02c5eb0  lis 4, 266
  02c5eb4  lis 5, 266
  02c5eb8  lis 6, 266
  02c5ebc  lis 7, 266
  02c5ec0  stw 31, 8720(3)
  02c5ec4  stw 31, 8884(4)
  02c5ec8  lis 3, 266
  02c5ecc  lis 4, 266
  02c5ed0  stw 31, 8724(5)
  02c5ed4  stw 31, 8728(6)
  02c5ed8  ori 5, 31, 0
  02c5edc  stw 31, 4868(7)
  02c5ee0  addic 4, 4, 8880
  02c5ee4  addic 3, 3, 8784
  02c5ee8  slwi 6, 5, 4
  02c5eec  addic 7, 5, 1
  02c5ef0  stbx 31, 4, 5
  02c5ef4  addc 6, 6, 3
  02c5ef8  extsw 5, 7
  02c5efc  clrldi 6, 6, 32
  02c5f00  cmpwi 5, 3
  02c5f04  stfs 4, 0(6)
  02c5f08  stfs 3, 4(6)
  02c5f0c  stfs 2, 8(6)
  02c5f10  stfs 1, 12(6)
  02c5f14  bt 0, 0x2c5ee8
  02c5f18  ld 0, 160(1)
  02c5f1c  mtlr 0
  02c5f20  ld 29, 120(1)
  02c5f24  ld 30, 128(1)
  02c5f28  ld 31, 136(1)
  02c5f2c  addi 1, 1, 144
  02c5f30  blr

M185_002c5f88:   # 0x2c5f88, 0x1364 bytes
  02c5f88  stdu 1, -560(1)
  02c5f8c  mflr 0
  02c5f90  std 0, 576(1)
  02c5f94  stfd 18, 448(1)
  02c5f98  stfd 19, 456(1)
  02c5f9c  stfd 20, 464(1)
  02c5fa0  stfd 21, 472(1)
  02c5fa4  stfd 22, 480(1)
  02c5fa8  stfd 23, 488(1)
  02c5fac  stfd 24, 496(1)
  02c5fb0  stfd 25, 504(1)
  02c5fb4  stfd 26, 512(1)
  02c5fb8  stfd 27, 520(1)
  02c5fbc  stfd 28, 528(1)
  02c5fc0  stfd 29, 536(1)
  02c5fc4  stfd 30, 544(1)
  02c5fc8  stfd 31, 552(1)
  02c5fcc  std 31, 440(1)
  02c5fd0  std 24, 384(1)
  02c5fd4  ori 31, 3, 0
  02c5fd8  lis 24, 44
  02c5fdc  std 30, 432(1)
  02c5fe0  addi 24, 24, 24372
  02c5fe4  std 29, 424(1)
  02c5fe8  std 28, 416(1)
  02c5fec  std 27, 408(1)
  02c5ff0  std 26, 400(1)
  02c5ff4  std 25, 392(1)
  02c5ff8  std 23, 376(1)
  02c5ffc  std 22, 368(1)
  02c6000  std 21, 360(1)
  02c6004  std 20, 352(1)
  02c6008  std 19, 344(1)
  02c600c  std 18, 336(1)
  02c6010  std 17, 328(1)
  02c6014  std 16, 320(1)
  02c6018  lwz 30, 120(31)
  02c601c  bl 0x2c5db8
  02c6020  lis 29, 266
  02c6024  lis 3, 124
  02c6028  lfs 1, 4868(29)
  02c602c  lfs 2, -11436(3)
  02c6030  fadds 1, 1, 2
  02c6034  bl 0x10de78
  02c6038  nop
  02c603c  lis 27, 266
  02c6040  stfs 1, 4868(29)
  02c6044  lfs 2, 72(30)
  02c6048  addic 3, 1, 128
  02c604c  lfs 3, 76(30)
  02c6050  lfs 1, 4864(27)
  02c6054  bl 0xfe610
  02c6058  nop
  02c605c  lwz 3, 16(30)
  02c6060  cmpwi 3, 0
  02c6064  bt 2, 0x2c60a4
  02c6068  bl 0xfcccc
  02c606c  nop
  02c6070  cmpwi 3, 0
  02c6074  bt 2, 0x2c60a4
  02c6078  lwz 4, 16(30)
  02c607c  lfs 1, 16(4)
  02c6080  stfs 1, 144(1)
  02c6084  lfs 1, 20(4)
  02c6088  stfs 1, 148(1)
  02c608c  lfs 31, 24(4)
  02c6090  stfs 31, 152(1)
  02c6094  lfs 1, 28(4)
  02c6098  stfs 1, 156(1)
  02c609c  lfs 1, 16(3)
  02c60a0  b 0x2c60e8
  02c60a4  lis 4, 124
  02c60a8  addic 3, 1, 144
  02c60ac  lfs 1, -11452(4)
  02c60b0  lfs 2, 72(30)
  02c60b4  lfs 3, 76(30)
  02c60b8  bl 0xfe610
  02c60bc  nop
  02c60c0  lfs 1, 144(1)
  02c60c4  lfs 2, 0(30)
  02c60c8  fadds 1, 1, 2
  02c60cc  lfs 2, 148(1)
  02c60d0  lfs 31, 152(1)
  02c60d4  stfs 1, 144(1)
  02c60d8  lfs 1, 4(30)
  02c60dc  fadds 1, 2, 1
  02c60e0  stfs 1, 148(1)
  02c60e4  lfs 1, 8(30)
  02c60e8  fadds 1, 31, 1
  02c60ec  lis 4, 124
  02c60f0  lwz 3, 16(30)
  02c60f4  cmpwi 3, 0
  02c60f8  lfs 31, -11452(4)
  02c60fc  stfs 1, 152(1)
  02c6100  bf 2, 0x2c6160
  02c6104  lis 4, 151
  02c6108  ori 3, 30, 0
  02c610c  addic 6, 4, -25376
  02c6110  li 5, 20
  02c6114  addic 4, 1, 144
  02c6118  li 7, 0
  02c611c  lwz 6, 8320(6)
  02c6120  bl 0x57820
  02c6124  nop
  02c6128  cmpwi 3, 0
  02c612c  lfs 1, 0(30)
  02c6130  bt 2, 0x2c6184
  02c6134  lis 3, 161
  02c6138  lfs 2, 4(30)
  02c613c  addic 3, 3, 2368
  02c6140  lfs 3, 36(3)
  02c6144  lfs 4, 32(3)
  02c6148  fsubs 2, 3, 2
  02c614c  fsubs 3, 4, 1
  02c6150  fmuls 2, 2, 2
  02c6154  fmadds 31, 3, 3, 2
  02c6158  fsqrts 31, 31
  02c615c  b 0x2c6184
  02c6160  lfs 1, 0(30)
  02c6164  lfs 2, 20(3)
  02c6168  lfs 3, 4(30)
  02c616c  lfs 4, 16(3)
  02c6170  fsubs 2, 2, 3
  02c6174  fsubs 3, 4, 1
  02c6178  fmuls 2, 2, 2
  02c617c  fmadds 31, 3, 3, 2
  02c6180  fsqrts 31, 31
  02c6184  lis 3, 124
  02c6188  lis 4, 266
  02c618c  addic 23, 4, 4288
  02c6190  lfs 2, -11444(3)
  02c6194  stfs 1, 4288(4)
  02c6198  lis 3, 266
  02c619c  fmuls 2, 2, 31
  02c61a0  lis 4, 266
  02c61a4  addic 22, 3, 4480
  02c61a8  addic 21, 4, 4672
  02c61ac  li 29, 1
  02c61b0  ori 19, 29, 0
  02c61b4  stfs 2, 4864(27)
  02c61b8  lfs 1, 4(30)
  02c61bc  stfs 1, 4(23)
  02c61c0  lfs 1, 8(30)
  02c61c4  stfs 1, 8(23)
  02c61c8  lfs 1, 12(30)
  02c61cc  stfs 1, 12(23)
  02c61d0  lfs 1, 0(30)
  02c61d4  stfs 1, 4480(3)
  02c61d8  lfs 1, 4(30)
  02c61dc  stfs 1, 4(22)
  02c61e0  lfs 1, 8(30)
  02c61e4  stfs 1, 8(22)
  02c61e8  lfs 1, 12(30)
  02c61ec  stfs 1, 12(22)
  02c61f0  lfs 1, 0(30)
  02c61f4  stfs 1, 4672(4)
  02c61f8  lfs 1, 4(30)
  02c61fc  stfs 1, 4(21)
  02c6200  lfs 1, 8(30)
  02c6204  stfs 1, 8(21)
  02c6208  lfs 1, 12(30)
  02c620c  stfs 1, 12(21)
  02c6210  slwi 26, 29, 4
  02c6214  addic 16, 23, -16
  02c6218  addc 25, 26, 23
  02c621c  addc 28, 26, 16
  02c6220  clrldi 25, 25, 32
  02c6224  clrldi 28, 28, 32
  02c6228  ori 3, 29, 0
  02c622c  lfs 25, 0(25)
  02c6230  lfs 1, 0(28)
  02c6234  lfs 29, 4(25)
  02c6238  lfs 2, 4(28)
  02c623c  fsubs 25, 25, 1
  02c6240  lfs 28, 8(25)
  02c6244  lfs 1, 8(28)
  02c6248  fsubs 29, 29, 2
  02c624c  fsubs 28, 28, 1
  02c6250  bl 0x502730
  02c6254  nop
  02c6258  lis 3, 124
  02c625c  lfs 5, 0(24)
  02c6260  lis 4, 124
  02c6264  lfs 6, 4(24)
  02c6268  lfs 30, -11444(3)
  02c626c  lfs 2, 128(1)
  02c6270  fmuls 30, 1, 30
  02c6274  lwz 3, -11440(4)
  02c6278  lfs 3, 132(1)
  02c627c  cmpw 3, 29
  02c6280  lfs 4, 136(1)
  02c6284  fmadds 1, 30, 5, 6
  02c6288  bf 0, 0x2c6344
  02c628c  lwz 3, 16(30)
  02c6290  cmpwi 3, 0
  02c6294  bt 2, 0x2c6344
  02c6298  lfs 5, 20(3)
  02c629c  lfs 6, 4(25)
  02c62a0  lfs 7, 16(3)
  02c62a4  fsubs 5, 5, 6
  02c62a8  lfs 6, 0(25)
  02c62ac  fsubs 6, 7, 6
  02c62b0  lfs 7, 24(3)
  02c62b4  lfs 8, 8(25)
  02c62b8  fsubs 7, 7, 8
  02c62bc  fmuls 8, 5, 5
  02c62c0  lfs 9, 4864(27)
  02c62c4  lfs 10, 8(24)
  02c62c8  lfs 11, 12(24)
  02c62cc  lfs 12, 28(3)
  02c62d0  fmadds 8, 6, 6, 8
  02c62d4  stfs 12, 140(1)
  02c62d8  fmadds 8, 7, 7, 8
  02c62dc  fsqrts 8, 8
  02c62e0  fdivs 9, 9, 8
  02c62e4  fsub 12, 10, 8
  02c62e8  fsub 13, 10, 8
  02c62ec  fsub 0, 10, 8
  02c62f0  fsub 27, 8, 10
  02c62f4  fsub 26, 8, 10
  02c62f8  fsub 8, 8, 10
  02c62fc  fmuls 7, 9, 7
  02c6300  fmuls 5, 9, 5
  02c6304  fmuls 6, 9, 6
  02c6308  fsel 9, 12, 10, 7
  02c630c  fsel 12, 13, 10, 5
  02c6310  fsel 10, 0, 10, 6
  02c6314  fsel 7, 27, 9, 7
  02c6318  fsel 5, 26, 12, 5
  02c631c  fsel 6, 8, 10, 6
  02c6320  fsubs 7, 7, 4
  02c6324  fsubs 5, 5, 3
  02c6328  fsubs 6, 6, 2
  02c632c  fmadds 4, 7, 11, 4
  02c6330  fmadds 3, 5, 11, 3
  02c6334  fmadds 2, 6, 11, 2
  02c6338  stfs 4, 136(1)
  02c633c  stfs 3, 132(1)
  02c6340  stfs 2, 128(1)
  02c6344  fmr 5, 1
  02c6348  fsubs 1, 3, 29
  02c634c  fsubs 3, 2, 25
  02c6350  fsubs 4, 4, 28
  02c6354  fmadds 2, 5, 1, 29
  02c6358  fmadds 1, 5, 3, 25
  02c635c  fmadds 3, 5, 4, 28
  02c6360  lfs 25, 8(24)
  02c6364  fmuls 4, 2, 2
  02c6368  fmadds 4, 1, 1, 4
  02c636c  fmadds 4, 3, 3, 4
  02c6370  fsqrts 4, 4
  02c6374  fcmpu 0, 4, 25
  02c6378  bf 2, 0x2c639c
  02c637c  lfs 1, 0(28)
  02c6380  stfs 1, 0(25)
  02c6384  lfs 2, 4(28)
  02c6388  stfs 2, 4(25)
  02c638c  lfs 2, 8(28)
  02c6390  stfs 2, 8(25)
  02c6394  lfs 2, 12(28)
  02c6398  b 0x2c63cc
  02c639c  lfs 5, 4864(27)
  02c63a0  fdivs 4, 5, 4
  02c63a4  lfs 5, 0(28)
  02c63a8  fmadds 1, 4, 1, 5
  02c63ac  stfs 1, 0(25)
  02c63b0  lfs 5, 4(28)
  02c63b4  fmadds 2, 4, 2, 5
  02c63b8  stfs 2, 4(25)
  02c63bc  lfs 2, 8(28)
  02c63c0  fmadds 2, 4, 3, 2
  02c63c4  stfs 2, 8(25)
  02c63c8  lfs 2, 12(28)
  02c63cc  stfs 2, 12(25)
  02c63d0  lis 20, 151
  02c63d4  lfs 2, 0(28)
  02c63d8  addic 20, 20, -25376
  02c63dc  fsubs 1, 1, 2
  02c63e0  lis 3, 124
  02c63e4  lis 4, 124
  02c63e8  lis 17, 266
  02c63ec  sldi 18, 29, 8
  02c63f0  stfs 1, 192(1)
  02c63f4  lfs 2, 4(25)
  02c63f8  lfs 3, 4(28)
  02c63fc  fsubs 2, 2, 3
  02c6400  lfs 3, 656(20)
  02c6404  lfs 4, 664(20)
  02c6408  lfs 5, 660(20)
  02c640c  fmuls 6, 5, 1
  02c6410  stfs 2, 196(1)
  02c6414  lfs 7, 8(25)
  02c6418  lfs 8, 8(28)
  02c641c  fsubs 7, 7, 8
  02c6420  fmuls 8, 4, 2
  02c6424  fmsubs 2, 3, 2, 6
  02c6428  li 28, 0
  02c642c  fmuls 3, 3, 7
  02c6430  fmsubs 5, 5, 7, 8
  02c6434  stfs 7, 200(1)
  02c6438  addic 17, 17, 4880
  02c643c  fmsubs 1, 4, 1, 3
  02c6440  lfs 4, 12(25)
  02c6444  stfs 5, 208(1)
  02c6448  fmuls 3, 1, 1
  02c644c  stfs 1, 212(1)
  02c6450  stfs 2, 216(1)
  02c6454  stw 28, 220(1)
  02c6458  lfs 6, -11416(3)
  02c645c  lfs 7, -11420(4)
  02c6460  stfs 4, 204(1)
  02c6464  fmadds 3, 5, 5, 3
  02c6468  fsubs 4, 6, 7
  02c646c  sldi 3, 29, 6
  02c6470  fmadds 3, 2, 2, 3
  02c6474  fmadds 4, 4, 30, 7
  02c6478  addc 18, 18, 3
  02c647c  fsqrts 3, 3
  02c6480  fdivs 4, 4, 3
  02c6484  fsub 6, 25, 3
  02c6488  fsub 7, 25, 3
  02c648c  fsub 8, 25, 3
  02c6490  fsub 9, 3, 25
  02c6494  fsub 10, 3, 25
  02c6498  fsub 3, 3, 25
  02c649c  fmuls 5, 5, 4
  02c64a0  fmuls 1, 1, 4
  02c64a4  fmuls 2, 2, 4
  02c64a8  fsel 4, 6, 25, 5
  02c64ac  fsel 6, 7, 25, 1
  02c64b0  fsel 7, 8, 25, 2
  02c64b4  fsel 4, 9, 4, 5
  02c64b8  fsel 1, 10, 6, 1
  02c64bc  fsel 2, 3, 7, 2
  02c64c0  stfs 4, 208(1)
  02c64c4  stfs 1, 212(1)
  02c64c8  stfs 2, 216(1)
  02c64cc  extsw 3, 28
  02c64d0  lis 6, 124
  02c64d4  addic 4, 1, 208
  02c64d8  addic 5, 1, 192
  02c64dc  std 3, 296(1)
  02c64e0  addic 3, 1, 224
  02c64e4  lfs 1, -11424(6)
  02c64e8  lfd 2, 296(1)
  02c64ec  fcfid 2, 2
  02c64f0  frsp 2, 2
  02c64f4  fmuls 1, 2, 1
  02c64f8  bl 0x1113e0
  02c64fc  nop
  02c6500  lfs 1, 224(1)
  02c6504  lfs 29, 0(25)
  02c6508  addc 3, 17, 18
  02c650c  fadds 1, 1, 29
  02c6510  clrldi 3, 3, 32
  02c6514  addic 28, 28, 1
  02c6518  addic 17, 17, 16
  02c651c  cmpwi 28, 20
  02c6520  stfs 1, 0(3)
  02c6524  lfs 1, 228(1)
  02c6528  lfs 28, 4(25)
  02c652c  fadds 1, 1, 28
  02c6530  stfs 1, 4(3)
  02c6534  lfs 1, 232(1)
  02c6538  lfs 27, 8(25)
  02c653c  fadds 1, 1, 27
  02c6540  stfs 1, 8(3)
  02c6544  lfs 1, 236(1)
  02c6548  stfs 1, 12(3)
  02c654c  bt 0, 0x2c64cc
  02c6550  lfs 9, 196(1)
  02c6554  lfs 8, 192(1)
  02c6558  fmuls 1, 9, 9
  02c655c  lfs 10, 200(1)
  02c6560  fmr 2, 25
  02c6564  lfs 21, 220(1)
  02c6568  lfs 5, 208(1)
  02c656c  lfs 6, 212(1)
  02c6570  lfs 7, 216(1)
  02c6574  lfs 26, 12(25)
  02c6578  fmadds 1, 8, 8, 1
  02c657c  fmr 3, 2
  02c6580  fmadds 1, 10, 10, 1
  02c6584  fmr 4, 3
  02c6588  fsqrts 11, 1
  02c658c  fcmpu 0, 11, 4
  02c6590  bt 2, 0x2c65dc
  02c6594  frsqrte 2, 1
  02c6598  lfs 3, 16(24)
  02c659c  lfs 4, 20(24)
  02c65a0  fmuls 11, 1, 2
  02c65a4  fmuls 12, 3, 2
  02c65a8  fnmsubs 11, 11, 2, 4
  02c65ac  fmadds 2, 11, 12, 2
  02c65b0  fmuls 11, 1, 2
  02c65b4  fmuls 12, 3, 2
  02c65b8  fnmsubs 11, 11, 2, 4
  02c65bc  fmadds 2, 11, 12, 2
  02c65c0  fmuls 1, 1, 2
  02c65c4  fmuls 3, 3, 2
  02c65c8  fnmsubs 1, 1, 2, 4
  02c65cc  fmadds 2, 1, 3, 2
  02c65d0  fmuls 4, 8, 2
  02c65d4  fmuls 3, 9, 2
  02c65d8  fmuls 2, 10, 2
  02c65dc  fmuls 1, 6, 6
  02c65e0  fmr 24, 25
  02c65e4  fmadds 1, 5, 5, 1
  02c65e8  fmr 23, 24
  02c65ec  fmadds 1, 7, 7, 1
  02c65f0  fmr 22, 23
  02c65f4  fsqrts 8, 1
  02c65f8  fcmpu 0, 8, 22
  02c65fc  bt 2, 0x2c6648
  02c6600  frsqrte 8, 1
  02c6604  lfs 9, 16(24)
  02c6608  lfs 10, 20(24)
  02c660c  fmuls 11, 1, 8
  02c6610  fmuls 12, 9, 8
  02c6614  fnmsubs 11, 11, 8, 10
  02c6618  fmadds 8, 11, 12, 8
  02c661c  fmuls 11, 1, 8
  02c6620  fmuls 12, 9, 8
  02c6624  fnmsubs 11, 11, 8, 10
  02c6628  fmadds 8, 11, 12, 8
  02c662c  fmuls 1, 1, 8
  02c6630  fmuls 9, 9, 8
  02c6634  fnmsubs 1, 1, 8, 10
  02c6638  fmadds 24, 1, 9, 8
  02c663c  fmuls 22, 5, 24
  02c6640  fmuls 23, 6, 24
  02c6644  fmuls 24, 7, 24
  02c6648  lis 3, 124
  02c664c  lis 4, 124
  02c6650  fmuls 1, 2, 23
  02c6654  fmuls 5, 4, 24
  02c6658  fmuls 6, 3, 22
  02c665c  lfs 7, -11392(3)
  02c6660  lfs 8, -11396(4)
  02c6664  ori 3, 29, 0
  02c6668  fsubs 7, 7, 8
  02c666c  fmsubs 20, 3, 24, 1
  02c6670  fmsubs 19, 2, 22, 5
  02c6674  fmsubs 18, 4, 23, 6
  02c6678  fmadds 30, 7, 30, 8
  02c667c  bl 0x502730
  02c6680  nop
  02c6684  lis 3, 124
  02c6688  lis 4, 266
  02c668c  lfs 2, -11432(3)
  02c6690  lfs 3, 4868(4)
  02c6694  fmadds 1, 2, 1, 3
  02c6698  bl 0x10de78
  02c669c  nop
  02c66a0  lfs 2, 24(24)
  02c66a4  lfs 3, 48(24)
  02c66a8  fsubs 5, 2, 1
  02c66ac  fadds 3, 1, 3
  02c66b0  lfs 4, 28(24)
  02c66b4  fsubs 6, 4, 1
  02c66b8  lfs 8, 32(24)
  02c66bc  addc 3, 26, 22
  02c66c0  addc 4, 26, 21
  02c66c4  fsub 7, 1, 5
  02c66c8  fsubs 2, 2, 3
  02c66cc  fsubs 4, 4, 3
  02c66d0  clrldi 3, 3, 32
  02c66d4  clrldi 4, 4, 32
  02c66d8  addic 29, 29, 1
  02c66dc  fsel 1, 7, 5, 1
  02c66e0  fsub 9, 3, 2
  02c66e4  lfs 5, 36(24)
  02c66e8  lfs 7, 40(24)
  02c66ec  extsw 29, 29
  02c66f0  cmpwi 29, 12
  02c66f4  fsel 2, 9, 2, 3
  02c66f8  fsub 3, 6, 1
  02c66fc  fsub 9, 4, 2
  02c6700  fsel 1, 3, 6, 1
  02c6704  lfs 3, 44(24)
  02c6708  fsel 2, 9, 4, 2
  02c670c  fmuls 4, 1, 1
  02c6710  fmuls 6, 2, 2
  02c6714  fmuls 9, 4, 1
  02c6718  fmuls 10, 6, 2
  02c671c  fmuls 11, 4, 9
  02c6720  fmadds 1, 9, 8, 1
  02c6724  fmuls 9, 6, 10
  02c6728  fmadds 2, 10, 8, 2
  02c672c  fmuls 8, 4, 11
  02c6730  fmadds 1, 11, 5, 1
  02c6734  fmuls 10, 6, 9
  02c6738  fmadds 2, 9, 5, 2
  02c673c  fmuls 4, 4, 8
  02c6740  fmadds 1, 8, 7, 1
  02c6744  fmuls 5, 6, 10
  02c6748  fmadds 2, 10, 7, 2
  02c674c  fmadds 1, 4, 3, 1
  02c6750  fmadds 2, 5, 3, 2
  02c6754  fmuls 1, 30, 1
  02c6758  fmuls 2, 30, 2
  02c675c  fmadds 3, 22, 1, 29
  02c6760  fmadds 4, 23, 1, 28
  02c6764  fmadds 5, 24, 1, 27
  02c6768  fmadds 6, 21, 1, 26
  02c676c  fmuls 7, 2, 20
  02c6770  fmuls 8, 2, 19
  02c6774  fmuls 9, 2, 18
  02c6778  fmadds 3, 20, 2, 3
  02c677c  fmadds 4, 19, 2, 4
  02c6780  fmadds 2, 18, 2, 5
  02c6784  stfs 6, 12(3)
  02c6788  fneg 5, 7
  02c678c  fneg 7, 8
  02c6790  fneg 8, 9
  02c6794  stfs 3, 0(3)
  02c6798  stfs 4, 4(3)
  02c679c  stfs 2, 8(3)
  02c67a0  stfs 6, 12(4)
  02c67a4  fmadds 2, 22, 1, 5
  02c67a8  fmadds 3, 23, 1, 7
  02c67ac  fmadds 1, 24, 1, 8
  02c67b0  fadds 2, 2, 29
  02c67b4  fadds 3, 3, 28
  02c67b8  fadds 1, 1, 27
  02c67bc  stfs 2, 0(4)
  02c67c0  stfs 3, 4(4)
  02c67c4  stfs 1, 8(4)
  02c67c8  bt 0, 0x2c6210
  02c67cc  lis 3, 113
  02c67d0  ori 4, 31, 0
  02c67d4  addic 3, 3, -20232
  02c67d8  bl 0x6d7e0
  02c67dc  nop
  02c67e0  lfs 30, 52(24)
  02c67e4  lfs 2, 56(24)
  02c67e8  fmr 1, 30
  02c67ec  bl 0xfcbe8
  02c67f0  nop
  02c67f4  fmr 29, 1
  02c67f8  li 3, 2
  02c67fc  bl 0xfc620
  02c6800  nop
  02c6804  li 4, 0
  02c6808  addic 5, 3, -1
  02c680c  subc 4, 4, 3
  02c6810  extsw 5, 5
  02c6814  cntlzw 4, 4
  02c6818  subc 5, 5, 3
  02c681c  sldi 4, 4, 58
  02c6820  sradi 4, 4, 63
  02c6824  and 29, 4, 5
  02c6828  addc 29, 3, 29
  02c682c  li 3, 2
  02c6830  bl 0xfc620
  02c6834  nop
  02c6838  cmpwi 3, 0
  02c683c  bf 2, 0x2c690c
  02c6840  lfs 1, 176(22)
  02c6844  lfs 2, 180(22)
  02c6848  lis 28, 114
  02c684c  stfs 1, 160(1)
  02c6850  lfs 1, 184(22)
  02c6854  stfs 2, 164(1)
  02c6858  lis 3, 161
  02c685c  lfs 2, 188(22)
  02c6860  addic 26, 1, 160
  02c6864  stfs 1, 168(1)
  02c6868  lis 7, 32639
  02c686c  stfs 2, 172(1)
  02c6870  addic 25, 3, 23856
  02c6874  lfs 28, 60(24)
  02c6878  fmuls 1, 29, 30
  02c687c  lfs 3, -3056(28)
  02c6880  fmr 2, 29
  02c6884  ori 3, 26, 0
  02c6888  fmuls 3, 3, 28
  02c688c  ori 7, 7, 8224
  02c6890  li 8, 0
  02c6894  ori 9, 29, 0
  02c6898  ori 10, 25, 0
  02c689c  fctiwz 3, 3
  02c68a0  stfd 3, 296(1)
  02c68a4  lfs 27, 64(24)
  02c68a8  lwz 4, 300(1)
  02c68ac  fmr 3, 27
  02c68b0  extsw 4, 4
  02c68b4  bl 0x12f8c0
  02c68b8  nop
  02c68bc  lfs 1, -3056(28)
  02c68c0  neg 29, 29
  02c68c4  lis 7, 32639
  02c68c8  fmr 3, 27
  02c68cc  fmuls 1, 1, 28
  02c68d0  li 8, 1
  02c68d4  ori 10, 25, 0
  02c68d8  ori 3, 26, 0
  02c68dc  ori 7, 7, 32639
  02c68e0  ori 9, 29, 0
  02c68e4  fctiwz 1, 1
  02c68e8  stfd 1, 296(1)
  02c68ec  lfs 1, 68(24)
  02c68f0  lfs 2, 72(24)
  02c68f4  lwz 4, 300(1)
  02c68f8  fmuls 1, 29, 1
  02c68fc  extsw 4, 4
  02c6900  fmuls 2, 29, 2
  02c6904  bl 0x12f8c0
  02c6908  nop
  02c690c  li 3, 2
  02c6910  bl 0xfc620
  02c6914  nop
  02c6918  cmpwi 3, 0
  02c691c  bf 2, 0x2c69ec
  02c6920  lfs 1, 176(21)
  02c6924  lfs 2, 180(21)
  02c6928  lis 28, 114
  02c692c  stfs 1, 160(1)
  02c6930  lfs 1, 184(21)
  02c6934  stfs 2, 164(1)
  02c6938  lis 3, 161
  02c693c  lfs 2, 188(21)
  02c6940  addic 26, 1, 160
  02c6944  stfs 1, 168(1)
  02c6948  lis 7, 32544
  02c694c  stfs 2, 172(1)
  02c6950  addic 25, 3, 23856
  02c6954  lfs 28, 60(24)
  02c6958  fmuls 1, 29, 30
  02c695c  lfs 3, -3056(28)
  02c6960  fmr 2, 29
  02c6964  ori 3, 26, 0
  02c6968  fmuls 3, 3, 28
  02c696c  ori 7, 7, 8319
  02c6970  li 8, 0
  02c6974  ori 9, 29, 0
  02c6978  ori 10, 25, 0
  02c697c  fctiwz 3, 3
  02c6980  stfd 3, 296(1)
  02c6984  lfs 27, 64(24)
  02c6988  lwz 4, 300(1)
  02c698c  fmr 3, 27
  02c6990  extsw 4, 4
  02c6994  bl 0x12f8c0
  02c6998  nop
  02c699c  lfs 1, -3056(28)
  02c69a0  neg 29, 29
  02c69a4  lis 7, 32639
  02c69a8  fmr 3, 27
  02c69ac  fmuls 1, 1, 28
  02c69b0  li 8, 1
  02c69b4  ori 10, 25, 0
  02c69b8  ori 3, 26, 0
  02c69bc  ori 7, 7, 32639
  02c69c0  ori 9, 29, 0
  02c69c4  fctiwz 1, 1
  02c69c8  stfd 1, 296(1)
  02c69cc  lfs 1, 68(24)
  02c69d0  lfs 2, 72(24)
  02c69d4  lwz 4, 300(1)
  02c69d8  fmuls 1, 29, 1
  02c69dc  extsw 4, 4
  02c69e0  fmuls 2, 29, 2
  02c69e4  bl 0x12f8c0
  02c69e8  nop
  02c69ec  lfs 1, 20(23)
  02c69f0  lis 28, 266
  02c69f4  lfs 2, 4(23)
  02c69f8  lfs 3, 16(23)
  02c69fc  fsubs 1, 1, 2
  02c6a00  lfs 2, 4288(28)
  02c6a04  fsubs 2, 3, 2
  02c6a08  lfs 3, 24(23)
  02c6a0c  lfs 4, 8(23)
  02c6a10  fsubs 3, 3, 4
  02c6a14  fmuls 4, 1, 1
  02c6a18  lis 3, 114
  02c6a1c  lis 4, 124
  02c6a20  lfs 5, -3064(3)
  02c6a24  lfs 6, -11388(4)
  02c6a28  fmadds 4, 2, 2, 4
  02c6a2c  fmuls 5, 5, 6
  02c6a30  stfs 2, 176(1)
  02c6a34  stfs 1, 180(1)
  02c6a38  lfs 7, 28(23)
  02c6a3c  stfs 3, 184(1)
  02c6a40  fmadds 4, 3, 3, 4
  02c6a44  stfs 7, 188(1)
  02c6a48  li 3, 2
  02c6a4c  fsqrts 4, 4
  02c6a50  fdivs 5, 5, 4
  02c6a54  fsub 6, 25, 4
  02c6a58  fsub 7, 25, 4
  02c6a5c  fsub 8, 25, 4
  02c6a60  fsub 9, 4, 25
  02c6a64  fsub 10, 4, 25
  02c6a68  fsub 4, 4, 25
  02c6a6c  fmuls 2, 2, 5
  02c6a70  fmuls 1, 1, 5
  02c6a74  fmuls 3, 3, 5
  02c6a78  fsel 5, 6, 25, 2
  02c6a7c  fsel 6, 7, 25, 1
  02c6a80  fsel 7, 8, 25, 3
  02c6a84  fsel 2, 9, 5, 2
  02c6a88  fsel 1, 10, 6, 1
  02c6a8c  fsel 3, 4, 7, 3
  02c6a90  stfs 2, 176(1)
  02c6a94  stfs 1, 180(1)
  02c6a98  stfs 3, 184(1)
  02c6a9c  bl 0xfc620
  02c6aa0  nop
  02c6aa4  cmpwi 3, 0
  02c6aa8  lfs 1, 4288(28)
  02c6aac  bf 2, 0x2c6cf8
  02c6ab0  lfs 2, 212(31)
  02c6ab4  lfs 3, 208(31)
  02c6ab8  fmuls 4, 2, 2
  02c6abc  lfs 5, 216(31)
  02c6ac0  lis 3, 124
  02c6ac4  lis 4, 32639
  02c6ac8  lfs 6, -11376(3)
  02c6acc  fmadds 4, 3, 3, 4
  02c6ad0  lfs 7, 4(23)
  02c6ad4  lfs 8, 8(23)
  02c6ad8  lfs 9, 12(23)
  02c6adc  stfs 9, 172(1)
  02c6ae0  fmadds 4, 5, 5, 4
  02c6ae4  lis 3, 32544
  02c6ae8  lis 6, 32544
  02c6aec  ori 3, 3, 32639
  02c6af0  lis 5, 32639
  02c6af4  fsqrts 4, 4
  02c6af8  ori 4, 4, 8224
  02c6afc  lis 7, 32639
  02c6b00  stw 3, 272(1)
  02c6b04  ori 6, 6, 8319
  02c6b08  ori 5, 5, 8319
  02c6b0c  ori 7, 7, 32544
  02c6b10  stw 4, 276(1)
  02c6b14  li 3, 5
  02c6b18  stw 6, 280(1)
  02c6b1c  stw 5, 284(1)
  02c6b20  stw 7, 288(1)
  02c6b24  fdivs 6, 6, 4
  02c6b28  fsub 9, 25, 4
  02c6b2c  fsub 10, 25, 4
  02c6b30  fsub 11, 25, 4
  02c6b34  fsub 12, 4, 25
  02c6b38  fsub 13, 4, 25
  02c6b3c  fsub 4, 4, 25
  02c6b40  fmuls 5, 5, 6
  02c6b44  fmuls 2, 2, 6
  02c6b48  fmuls 3, 3, 6
  02c6b4c  fsel 6, 9, 25, 5
  02c6b50  fsel 9, 10, 25, 2
  02c6b54  fsel 10, 11, 25, 3
  02c6b58  fsel 5, 12, 6, 5
  02c6b5c  fsel 2, 13, 9, 2
  02c6b60  fsel 3, 4, 10, 3
  02c6b64  fadds 4, 8, 5
  02c6b68  fadds 2, 7, 2
  02c6b6c  fadds 1, 1, 3
  02c6b70  stfs 4, 168(1)
  02c6b74  stfs 2, 164(1)
  02c6b78  stfs 1, 160(1)
  02c6b7c  bl 0xfc620
  02c6b80  nop
  02c6b84  sldi 3, 3, 2
  02c6b88  fmr 1, 25
  02c6b8c  lis 31, 124
  02c6b90  addc 3, 1, 3
  02c6b94  clrldi 3, 3, 32
  02c6b98  lfs 2, -11380(31)
  02c6b9c  lwz 3, 272(3)
  02c6ba0  extsw 28, 3
  02c6ba4  bl 0xfe4f0
  02c6ba8  nop
  02c6bac  lfs 2, -11380(31)
  02c6bb0  fmr 28, 1
  02c6bb4  fmr 1, 25
  02c6bb8  bl 0xfe4f0
  02c6bbc  nop
  02c6bc0  addic 31, 1, 240
  02c6bc4  addic 4, 1, 176
  02c6bc8  addic 5, 20, 656
  02c6bcc  ori 3, 31, 0
  02c6bd0  bl 0x1113e0
  02c6bd4  nop
  02c6bd8  lfs 2, 660(20)
  02c6bdc  lfs 3, 184(1)
  02c6be0  li 6, 0
  02c6be4  lfs 4, 664(20)
  02c6be8  ori 3, 31, 0
  02c6bec  lfs 5, 180(1)
  02c6bf0  fmr 1, 28
  02c6bf4  lfs 6, 176(1)
  02c6bf8  addic 5, 1, 256
  02c6bfc  fmuls 7, 4, 5
  02c6c00  lfs 8, 656(20)
  02c6c04  fmuls 9, 2, 6
  02c6c08  stw 6, 268(1)
  02c6c0c  fmuls 10, 8, 3
  02c6c10  ori 4, 31, 0
  02c6c14  fmsubs 2, 2, 3, 7
  02c6c18  fmsubs 3, 8, 5, 9
  02c6c1c  fmsubs 4, 4, 6, 10
  02c6c20  stfs 2, 256(1)
  02c6c24  stfs 3, 264(1)
  02c6c28  stfs 4, 260(1)
  02c6c2c  bl 0x1113e0
  02c6c30  nop
  02c6c34  lis 3, 114
  02c6c38  lfs 1, 76(24)
  02c6c3c  lis 4, 124
  02c6c40  fmuls 1, 31, 1
  02c6c44  lfs 2, -3064(3)
  02c6c48  lfs 3, -11388(4)
  02c6c4c  fmuls 2, 2, 3
  02c6c50  fdivs 1, 1, 2
  02c6c54  bl 0x502758
  02c6c58  nop
  02c6c5c  lwz 4, 16(30)
  02c6c60  li 6, 0
  02c6c64  addc 5, 3, 3
  02c6c68  fmuls 1, 29, 30
  02c6c6c  subc 6, 6, 4
  02c6c70  std 4, 112(1)
  02c6c74  addc 5, 3, 5
  02c6c78  fmr 2, 29
  02c6c7c  cntlzw 6, 6
  02c6c80  extsw 5, 5
  02c6c84  sldi 6, 6, 58
  02c6c88  subc 3, 3, 5
  02c6c8c  sradi 6, 6, 63
  02c6c90  addic 26, 1, 160
  02c6c94  and 6, 6, 3
  02c6c98  ori 3, 26, 0
  02c6c9c  addc 25, 5, 6
  02c6ca0  ori 7, 28, 0
  02c6ca4  ori 4, 25, 0
  02c6ca8  li 8, 0
  02c6cac  ori 9, 29, 0
  02c6cb0  ori 10, 31, 0
  02c6cb4  bl 0x135678
  02c6cb8  nop
  02c6cbc  lfs 1, 68(24)
  02c6cc0  lis 7, 32639
  02c6cc4  lfs 2, 72(24)
  02c6cc8  neg 9, 29
  02c6ccc  lwz 5, 16(30)
  02c6cd0  ori 3, 26, 0
  02c6cd4  ori 4, 25, 0
  02c6cd8  fmuls 1, 29, 1
  02c6cdc  ori 7, 7, 32639
  02c6ce0  std 5, 112(1)
  02c6ce4  li 8, 1
  02c6ce8  fmuls 2, 29, 2
  02c6cec  ori 10, 31, 0
  02c6cf0  bl 0x135678
  02c6cf4  nop
  02c6cf8  lis 3, 266
  02c6cfc  addic 3, 3, 8884
  02c6d00  bl 0x4fff60
  02c6d04  nop
  02c6d08  cmpwi 3, 0
  02c6d0c  bt 2, 0x2c6ef8
  02c6d10  lis 3, 124
  02c6d14  li 4, -11372
  02c6d18  li 5, 16
  02c6d1c  li 31, 0
  02c6d20  lvlx 2, 4, 3
  02c6d24  lvlx 3, 5, 24
  02c6d28  lis 3, 114
  02c6d2c  vcfsx 4, 2, 0
  02c6d30  li 4, -3056
  02c6d34  vspltw 3, 3, 0
  02c6d38  vspltisw 2, -1
  02c6d3c  lis 5, 266
  02c6d40  vslw 5, 2, 2
  02c6d44  lvlx 2, 4, 3
  02c6d48  li 4, 8884
  02c6d4c  lis 3, 266
  02c6d50  lfs 31, 16(24)
  02c6d54  vaddfp 4, 4, 3
  02c6d58  addic 3, 3, 8880
  02c6d5c  vmaddfp 4, 2, 4, 5
  02c6d60  vctsxs 4, 4, 0
  02c6d64  vspltw 4, 4, 0
  02c6d68  stvewx 4, 4, 5
  02c6d6c  lbzx 4, 3, 31
  02c6d70  cmpwi 4, 0
  02c6d74  bf 2, 0x2c6ee8
  02c6d78  lis 4, 124
  02c6d7c  li 5, -11364
  02c6d80  vspltisw 4, -1
  02c6d84  lis 6, 266
  02c6d88  lis 8, 124
  02c6d8c  vslw 4, 4, 4
  02c6d90  lvlx 5, 5, 4
  02c6d94  vcfsx 5, 5, 0
  02c6d98  stbx 19, 3, 31
  02c6d9c  lis 5, 124
  02c6da0  slwi 3, 31, 2
  02c6da4  lis 4, 266
  02c6da8  extsw 29, 3
  02c6dac  addic 4, 4, 8832
  02c6db0  lis 3, 266
  02c6db4  addic 6, 6, 8856
  02c6db8  lfs 1, -11348(5)
  02c6dbc  li 7, 0
  02c6dc0  addic 5, 3, 8868
  02c6dc4  lwz 3, -11344(8)
  02c6dc8  vaddfp 3, 5, 3
  02c6dcc  srawi 3, 3, 24
  02c6dd0  vmaddfp 2, 2, 3, 4
  02c6dd4  vctsxs 2, 2, 0
  02c6dd8  vspltw 2, 2, 0
  02c6ddc  stvewx 2, 29, 4
  02c6de0  stwx 7, 6, 29
  02c6de4  stfsx 1, 5, 29
  02c6de8  bl 0x502730
  02c6dec  nop
  02c6df0  lis 3, 266
  02c6df4  lis 4, 266
  02c6df8  addic 3, 3, 8844
  02c6dfc  addic 4, 4, 8736
  02c6e00  slwi 5, 31, 4
  02c6e04  addc 4, 4, 5
  02c6e08  stfsx 1, 3, 29
  02c6e0c  clrldi 3, 4, 32
  02c6e10  lfs 1, 0(30)
  02c6e14  lis 4, 266
  02c6e18  fmr 6, 25
  02c6e1c  stfs 1, 0(3)
  02c6e20  lfs 1, 4(30)
  02c6e24  stfs 1, 4(3)
  02c6e28  lfs 1, 8(30)
  02c6e2c  stfs 1, 8(3)
  02c6e30  lfs 1, 12(30)
  02c6e34  stfs 1, 12(3)
  02c6e38  lfs 2, 20(23)
  02c6e3c  lfs 1, 4(23)
  02c6e40  lfs 3, 16(23)
  02c6e44  fsubs 2, 2, 1
  02c6e48  lfs 1, 4288(4)
  02c6e4c  fsubs 1, 3, 1
  02c6e50  lfs 3, 24(23)
  02c6e54  lfs 4, 8(23)
  02c6e58  fsubs 3, 3, 4
  02c6e5c  fmuls 4, 2, 2
  02c6e60  fmr 7, 6
  02c6e64  lis 3, 266
  02c6e68  addic 3, 3, 8784
  02c6e6c  addc 30, 3, 5
  02c6e70  fmadds 5, 1, 1, 4
  02c6e74  fmr 8, 7
  02c6e78  lfs 4, 28(23)
  02c6e7c  clrldi 30, 30, 32
  02c6e80  fmadds 5, 3, 3, 5
  02c6e84  fsqrts 9, 5
  02c6e88  fcmpu 0, 9, 8
  02c6e8c  bt 2, 0x2c6ed4
  02c6e90  frsqrte 6, 5
  02c6e94  lfs 7, 20(24)
  02c6e98  fmuls 8, 5, 6
  02c6e9c  fmuls 9, 31, 6
  02c6ea0  fnmsubs 8, 8, 6, 7
  02c6ea4  fmadds 6, 8, 9, 6
  02c6ea8  fmuls 8, 5, 6
  02c6eac  fmuls 9, 31, 6
  02c6eb0  fnmsubs 8, 8, 6, 7
  02c6eb4  fmadds 6, 8, 9, 6
  02c6eb8  fmuls 5, 5, 6
  02c6ebc  fmuls 8, 31, 6
  02c6ec0  fnmsubs 5, 5, 6, 7
  02c6ec4  fmadds 6, 5, 8, 6
  02c6ec8  fmuls 8, 6, 1
  02c6ecc  fmuls 7, 6, 2
  02c6ed0  fmuls 6, 6, 3
  02c6ed4  stfs 8, 0(30)
  02c6ed8  stfs 7, 4(30)
  02c6edc  stfs 6, 8(30)
  02c6ee0  stfs 4, 12(30)
  02c6ee4  b 0x2c6ef8
  02c6ee8  addic 31, 31, 1
  02c6eec  extsw 31, 31
  02c6ef0  cmpwi 31, 3
  02c6ef4  bt 0, 0x2c6d6c
  02c6ef8  ori 3, 24, 0
  02c6efc  li 31, 0
  02c6f00  lis 25, 266
  02c6f04  lis 29, 266
  02c6f08  lis 24, 266
  02c6f0c  lis 28, 266
  02c6f10  lfs 31, 20(3)
  02c6f14  lis 22, 266
  02c6f18  lfs 29, 16(3)
  02c6f1c  lis 26, 266
  02c6f20  lis 21, 266
  02c6f24  addic 25, 25, 8856
  02c6f28  ori 30, 31, 0
  02c6f2c  addic 29, 29, 8880
  02c6f30  addic 24, 24, 8868
  02c6f34  addic 28, 28, 8832
  02c6f38  addic 26, 26, 8844
  02c6f3c  addic 22, 22, 8784
  02c6f40  addic 21, 21, 8736
  02c6f44  addic 20, 23, 16
  02c6f48  lbzx 3, 29, 31
  02c6f4c  cmpwi 3, 0
  02c6f50  bt 2, 0x2c7254
  02c6f54  slwi 19, 31, 2
  02c6f58  addc 3, 19, 28
  02c6f5c  clrldi 3, 3, 32
  02c6f60  bl 0x4fff60
  02c6f64  nop
  02c6f68  lis 4, 114
  02c6f6c  lis 5, 124
  02c6f70  lis 6, 124
  02c6f74  lis 7, 124
  02c6f78  cmpwi 3, 0
  02c6f7c  lfs 3, -3052(4)
  02c6f80  lis 3, 124
  02c6f84  lfs 4, -11368(5)
  02c6f88  lfs 1, -11452(6)
  02c6f8c  lfs 5, -11352(7)
  02c6f90  lfs 2, 4864(27)
  02c6f94  lfs 6, -11348(3)
  02c6f98  bt 2, 0x2c6fa4
  02c6f9c  stbx 30, 29, 31
  02c6fa0  b 0x2c7254
  02c6fa4  extsw 19, 19
  02c6fa8  lis 3, 124
  02c6fac  lwzx 4, 28, 19
  02c6fb0  lwz 3, -11360(3)
  02c6fb4  cmpw 4, 3
  02c6fb8  bf 0, 0x2c6fd0
  02c6fbc  lis 3, 124
  02c6fc0  lfsx 7, 26, 19
  02c6fc4  lfs 8, -11336(3)
  02c6fc8  fsubs 7, 7, 8
  02c6fcc  stfsx 7, 26, 19
  02c6fd0  fmr 7, 1
  02c6fd4  lfsx 1, 25, 19
  02c6fd8  fmadds 1, 3, 4, 1
  02c6fdc  fsubs 5, 5, 6
  02c6fe0  fdivs 8, 1, 7
  02c6fe4  stfsx 1, 25, 19
  02c6fe8  fcmpu 0, 1, 7
  02c6fec  fsub 7, 31, 8
  02c6ff0  fsel 7, 7, 8, 31
  02c6ff4  fmadds 5, 5, 7, 6
  02c6ff8  stfsx 5, 24, 19
  02c6ffc  bt 0, 0x2c704c
  02c7000  slwi 3, 31, 4
  02c7004  fmuls 1, 3, 4
  02c7008  addc 4, 3, 21
  02c700c  addc 3, 3, 22
  02c7010  clrldi 4, 4, 32
  02c7014  clrldi 3, 3, 32
  02c7018  lfs 2, 0(4)
  02c701c  lfs 3, 0(3)
  02c7020  lfs 4, 4(3)
  02c7024  lfs 5, 8(3)
  02c7028  fmadds 2, 3, 1, 2
  02c702c  lfs 3, 4(4)
  02c7030  lfs 6, 8(4)
  02c7034  fmadds 3, 4, 1, 3
  02c7038  fmadds 1, 5, 1, 6
  02c703c  stfs 2, 0(4)
  02c7040  stfs 3, 4(4)
  02c7044  stfs 1, 8(4)
  02c7048  b 0x2c7254
  02c704c  fdivs 1, 1, 2
  02c7050  bl 0x502758
  02c7054  nop
  02c7058  ori 18, 3, 0
  02c705c  bl 0x502730
  02c7060  nop
  02c7064  sldi 4, 18, 4
  02c7068  lfsx 2, 25, 19
  02c706c  slwi 19, 31, 4
  02c7070  lfs 3, 4864(27)
  02c7074  addc 3, 4, 23
  02c7078  addc 5, 19, 21
  02c707c  clrldi 6, 3, 32
  02c7080  clrldi 3, 5, 32
  02c7084  cmpwi 18, 11
  02c7088  fnmsubs 1, 1, 3, 2
  02c708c  lfs 2, 0(6)
  02c7090  stfs 2, 0(3)
  02c7094  lfs 3, 4(6)
  02c7098  stfs 3, 4(3)
  02c709c  lfs 4, 8(6)
  02c70a0  stfs 4, 8(3)
  02c70a4  lfs 5, 12(6)
  02c70a8  stfs 5, 12(3)
  02c70ac  bf 2, 0x2c70d8
  02c70b0  addc 4, 4, 16
  02c70b4  fmr 6, 5
  02c70b8  clrldi 4, 4, 32
  02c70bc  fmr 7, 4
  02c70c0  fmr 9, 3
  02c70c4  fmr 11, 2
  02c70c8  lfs 12, 0(4)
  02c70cc  lfs 10, 4(4)
  02c70d0  lfs 8, 8(4)
  02c70d4  b 0x2c70fc
  02c70d8  addc 4, 4, 20
  02c70dc  fmr 8, 4
  02c70e0  clrldi 4, 4, 32
  02c70e4  fmr 10, 3
  02c70e8  fmr 12, 2
  02c70ec  lfs 11, 0(4)
  02c70f0  lfs 9, 4(4)
  02c70f4  lfs 7, 8(4)
  02c70f8  lfs 6, 12(4)
  02c70fc  fsubs 10, 9, 10
  02c7100  fsubs 9, 7, 8
  02c7104  fsubs 11, 11, 12
  02c7108  fmuls 7, 10, 10
  02c710c  fmadds 8, 11, 11, 7
  02c7110  fmadds 8, 9, 9, 8
  02c7114  fsqrts 7, 8
  02c7118  fcmpu 0, 7, 25
  02c711c  bt 2, 0x2c7254
  02c7120  frsqrte 12, 8
  02c7124  fsub 28, 25, 7
  02c7128  addc 19, 19, 22
  02c712c  fsub 27, 7, 25
  02c7130  stfs 5, 12(3)
  02c7134  clrldi 19, 19, 32
  02c7138  fmr 5, 25
  02c713c  fmuls 13, 8, 12
  02c7140  fmuls 0, 12, 29
  02c7144  fnmsubs 13, 13, 12, 31
  02c7148  fmadds 12, 13, 0, 12
  02c714c  fmuls 13, 8, 12
  02c7150  fmuls 0, 12, 29
  02c7154  fnmsubs 13, 13, 12, 31
  02c7158  fmadds 12, 13, 0, 12
  02c715c  fsub 0, 25, 7
  02c7160  fmuls 8, 8, 12
  02c7164  fmuls 13, 12, 29
  02c7168  fnmsubs 8, 8, 12, 31
  02c716c  fmadds 8, 8, 13, 12
  02c7170  fsub 13, 7, 25
  02c7174  fdivs 12, 8, 7
  02c7178  fmuls 1, 8, 1
  02c717c  fsub 8, 25, 7
  02c7180  fsub 7, 7, 25
  02c7184  fmadds 2, 1, 11, 2
  02c7188  fmadds 3, 1, 10, 3
  02c718c  fmadds 1, 1, 9, 4
  02c7190  stfs 2, 0(3)
  02c7194  stfs 3, 4(3)
  02c7198  stfs 1, 8(3)
  02c719c  lfs 2, 4(19)
  02c71a0  lfs 1, 0(19)
  02c71a4  lfs 3, 8(19)
  02c71a8  fmuls 4, 10, 12
  02c71ac  fmuls 10, 11, 12
  02c71b0  fmuls 9, 9, 12
  02c71b4  fsel 8, 8, 25, 4
  02c71b8  fsel 11, 0, 25, 10
  02c71bc  fsel 12, 28, 25, 9
  02c71c0  fsel 4, 13, 8, 4
  02c71c4  fsel 8, 27, 11, 10
  02c71c8  fsel 7, 7, 12, 9
  02c71cc  fsubs 4, 4, 2
  02c71d0  fsubs 8, 8, 1
  02c71d4  fsubs 7, 7, 3
  02c71d8  fmadds 2, 4, 30, 2
  02c71dc  fmadds 1, 8, 30, 1
  02c71e0  fmadds 3, 7, 30, 3
  02c71e4  fmr 7, 5
  02c71e8  fmuls 4, 2, 2
  02c71ec  fmr 8, 7
  02c71f0  fmadds 4, 1, 1, 4
  02c71f4  fmadds 4, 3, 3, 4
  02c71f8  fsqrts 9, 4
  02c71fc  fcmpu 0, 9, 8
  02c7200  bt 2, 0x2c7244
  02c7204  frsqrte 5, 4
  02c7208  fmuls 7, 4, 5
  02c720c  fmuls 8, 5, 29
  02c7210  fnmsubs 7, 7, 5, 31
  02c7214  fmadds 5, 7, 8, 5
  02c7218  fmuls 7, 4, 5
  02c721c  fmuls 8, 5, 29
  02c7220  fnmsubs 7, 7, 5, 31
  02c7224  fmadds 5, 7, 8, 5
  02c7228  fmuls 4, 4, 5
  02c722c  fmuls 7, 5, 29
  02c7230  fnmsubs 4, 4, 5, 31
  02c7234  fmadds 5, 4, 7, 5
  02c7238  fmuls 8, 1, 5
  02c723c  fmuls 7, 2, 5
  02c7240  fmuls 5, 3, 5
  02c7244  stfs 8, 0(19)
  02c7248  stfs 7, 4(19)
  02c724c  stfs 5, 8(19)
  02c7250  stfs 6, 12(19)
  02c7254  addic 31, 31, 1
  02c7258  extsw 31, 31
  02c725c  cmpwi 31, 3
  02c7260  bt 0, 0x2c6f48
  02c7264  ld 0, 576(1)
  02c7268  mtlr 0
  02c726c  lfd 18, 448(1)
  02c7270  lfd 19, 456(1)
  02c7274  lfd 20, 464(1)
  02c7278  lfd 21, 472(1)
  02c727c  lfd 22, 480(1)
  02c7280  lfd 23, 488(1)
  02c7284  lfd 24, 496(1)
  02c7288  lfd 25, 504(1)
  02c728c  lfd 26, 512(1)
  02c7290  lfd 27, 520(1)
  02c7294  lfd 28, 528(1)
  02c7298  lfd 29, 536(1)
  02c729c  lfd 30, 544(1)
  02c72a0  lfd 31, 552(1)
  02c72a4  ld 16, 320(1)
  02c72a8  ld 17, 328(1)
  02c72ac  ld 18, 336(1)
  02c72b0  ld 19, 344(1)
  02c72b4  ld 20, 352(1)
  02c72b8  ld 21, 360(1)
  02c72bc  ld 22, 368(1)
  02c72c0  ld 23, 376(1)
  02c72c4  ld 24, 384(1)
  02c72c8  ld 25, 392(1)
  02c72cc  ld 26, 400(1)
  02c72d0  ld 27, 408(1)
  02c72d4  ld 28, 416(1)
  02c72d8  ld 29, 424(1)
  02c72dc  ld 30, 432(1)
  02c72e0  ld 31, 440(1)
  02c72e4  addi 1, 1, 560
  02c72e8  blr

UpdateMoby_185:   # 0x2c7328, 0xc78 bytes
  02c7328  stdu 1, -384(1)
  02c732c  mflr 0
  02c7330  std 0, 400(1)
  02c7334  stfd 31, 376(1)
  02c7338  std 27, 336(1)
  02c733c  std 31, 368(1)
  02c7340  lis 27, 151
  02c7344  std 30, 360(1)
  02c7348  ori 31, 3, 0
  02c734c  lwz 30, 120(3)
  02c7350  addic 27, 27, -25376
  02c7354  lbz 3, 32(3)
  02c7358  std 29, 352(1)
  02c735c  cmpwi 3, 0
  02c7360  lwz 29, 4276(27)
  02c7364  std 28, 344(1)
  02c7368  std 26, 328(1)
  02c736c  addic 29, 29, -3
  02c7370  bf 2, 0x2c739c
  02c7374  li 3, 1
  02c7378  lis 5, 266
  02c737c  lis 4, 266
  02c7380  li 6, -1
  02c7384  lis 7, 266
  02c7388  stb 3, 32(31)
  02c738c  li 8, 0
  02c7390  stw 6, 4260(5)
  02c7394  stw 6, 4268(4)
  02c7398  stw 8, 4264(7)
  02c739c  lbz 3, 83(31)
  02c73a0  li 28, 1
  02c73a4  cmpwi 3, 0
  02c73a8  ori 26, 28, 0
  02c73ac  bf 2, 0x2c73d8
  02c73b0  ori 3, 31, 0
  02c73b4  bl 0xefe40
  02c73b8  nop
  02c73bc  lis 3, 44
  02c73c0  addi 3, 3, 29420
  02c73c4  lfs 2, 0(3)
  02c73c8  fcmpu 0, 1, 2
  02c73cc  cror 6, 1, 2
  02c73d0  bt 6, 0x2c73d8
  02c73d4  li 28, 0
  02c73d8  addic 3, 30, 28
  02c73dc  bl 0x4fffb4
  02c73e0  nop
  02c73e4  lwz 3, 8332(27)
  02c73e8  lwz 4, 4256(27)
  02c73ec  cmpwi 3, 0
  02c73f0  lbz 5, 8360(27)
  02c73f4  bt 2, 0x2c7418
  02c73f8  cmpwi 3, 1
  02c73fc  bt 2, 0x2c7418
  02c7400  cmpwi 3, 12
  02c7404  bt 2, 0x2c7418
  02c7408  cmpwi 3, 4
  02c740c  bt 2, 0x2c7418
  02c7410  cmpwi 3, 5
  02c7414  bf 2, 0x2c7d38
  02c7418  lis 3, 150
  02c741c  addic 3, 3, 19008
  02c7420  lwz 3, 160(3)
  02c7424  and 3, 3, 4
  02c7428  cmpwi 3, 0
  02c742c  bt 2, 0x2c7d38
  02c7430  cmpwi 1, 28, 0
  02c7434  cmpwi 29, 0
  02c7438  cror 2, 2, 6
  02c743c  bt 2, 0x2c7d38
  02c7440  cmpwi 5, 0
  02c7444  bf 2, 0x2c7450
  02c7448  bl 0x99ea8
  02c744c  nop
  02c7450  lhz 3, 30(30)
  02c7454  cmpwi 3, 0
  02c7458  bf 2, 0x2c752c
  02c745c  lis 4, 161
  02c7460  sth 26, 30(30)
  02c7464  lis 3, 0
  02c7468  addic 4, 4, -732
  02c746c  ori 5, 3, 65535
  02c7470  lhz 6, 168(4)
  02c7474  lhz 3, 170(4)
  02c7478  cmpw 6, 5
  02c747c  lwz 5, 172(4)
  02c7480  bf 0, 0x2c748c
  02c7484  addic 6, 6, 1
  02c7488  sth 6, 168(4)
  02c748c  lis 6, 161
  02c7490  lis 7, 44
  02c7494  lwz 6, -2344(6)
  02c7498  extsw 6, 6
  02c749c  std 6, 312(1)
  02c74a0  addi 6, 7, 29420
  02c74a4  lis 7, 114
  02c74a8  lfs 1, 4(6)
  02c74ac  lfs 2, -3056(7)
  02c74b0  lfd 3, 312(1)
  02c74b4  fcfid 3, 3
  02c74b8  ori 6, 3, 0
  02c74bc  lis 3, 6990
  02c74c0  ori 7, 3, 33205
  02c74c4  frsp 3, 3
  02c74c8  fadds 1, 3, 1
  02c74cc  fmuls 1, 2, 1
  02c74d0  fctiwz 1, 1
  02c74d4  stfd 1, 312(1)
  02c74d8  lwz 3, 316(1)
  02c74dc  mulhw 7, 7, 3
  02c74e0  srawi 7, 7, 6
  02c74e4  srwi 8, 7, 31
  02c74e8  addc 7, 7, 8
  02c74ec  cmpw 7, 6
  02c74f0  bf 1, 0x2c7510
  02c74f4  lis 6, 6990
  02c74f8  ori 6, 6, 33205
  02c74fc  mulhw 3, 6, 3
  02c7500  srawi 3, 3, 6
  02c7504  srwi 6, 3, 31
  02c7508  addc 3, 3, 6
  02c750c  sth 3, 170(4)
  02c7510  lis 3, 151
  02c7514  lis 6, -32768
  02c7518  lwz 3, -25488(3)
  02c751c  slw 3, 26, 3
  02c7520  or 3, 5, 3
  02c7524  or 3, 3, 6
  02c7528  stw 3, 172(4)
  02c752c  lhz 3, 28(30)
  02c7530  cmpwi 3, 0
  02c7534  bf 2, 0x2c7574
  02c7538  lis 3, 44
  02c753c  li 4, 8
  02c7540  vspltisw 2, -1
  02c7544  addi 3, 3, 29420
  02c7548  lis 5, 114
  02c754c  li 6, -3056
  02c7550  vslw 2, 2, 2
  02c7554  lvlx 3, 4, 3
  02c7558  li 3, 28
  02c755c  vspltw 3, 3, 0
  02c7560  lvlx 4, 6, 5
  02c7564  vmaddfp 2, 4, 3, 2
  02c7568  vctsxs 2, 2, 0
  02c756c  vsplth 2, 2, 1
  02c7570  stvehx 2, 3, 30
  02c7574  ori 3, 31, 0
  02c7578  li 4, 0
  02c757c  ori 5, 30, 0
  02c7580  bl 0xf1114
  02c7584  nop
  02c7588  lwz 3, 8324(27)
  02c758c  cmpwi 3, 1
  02c7590  bf 2, 0x2c75a8
  02c7594  li 3, 30
  02c7598  li 4, 1
  02c759c  bl 0xb72b0
  02c75a0  nop
  02c75a4  lwz 3, 8324(27)
  02c75a8  lis 4, 44
  02c75ac  cmpwi 3, 30
  02c75b0  addi 4, 4, 29420
  02c75b4  lfs 31, 12(4)
  02c75b8  bf 2, 0x2c7608
  02c75bc  lwz 3, 8320(27)
  02c75c0  lhz 3, 52(3)
  02c75c4  clrlwi 3, 3, 31
  02c75c8  cmpwi 3, 0
  02c75cc  bt 2, 0x2c7608
  02c75d0  addic 28, 1, 112
  02c75d4  lis 4, 149
  02c75d8  ori 3, 28, 0
  02c75dc  addic 4, 4, 5056
  02c75e0  bl 0x500fa8
  02c75e4  nop
  02c75e8  addic 3, 1, 160
  02c75ec  ori 4, 28, 0
  02c75f0  bl 0x5010c0
  02c75f4  nop
  02c75f8  lfs 7, 192(1)
  02c75fc  lfs 6, 196(1)
  02c7600  lfs 5, 200(1)
  02c7604  b 0x2c763c
  02c7608  lhz 3, 8904(27)
  02c760c  cmpwi 3, 1
  02c7610  bf 2, 0x2c7630
  02c7614  lfs 7, 208(31)
  02c7618  lfs 6, 212(31)
  02c761c  lfs 5, 216(31)
  02c7620  fneg 7, 7
  02c7624  fneg 6, 6
  02c7628  fneg 5, 5
  02c762c  b 0x2c763c
  02c7630  lfs 7, 1600(27)
  02c7634  lfs 6, 1604(27)
  02c7638  lfs 5, 1608(27)
  02c763c  fabs 3, 7
  02c7640  stfs 7, 236(1)
  02c7644  fabs 8, 6
  02c7648  stfs 6, 240(1)
  02c764c  lis 3, 115
  02c7650  lis 5, 44
  02c7654  addic 3, 3, 22784
  02c7658  addi 5, 5, 29420
  02c765c  fsubs 1, 3, 8
  02c7660  stfs 1, 244(1)
  02c7664  lwz 4, 236(1)
  02c7668  lfs 1, 236(1)
  02c766c  lwz 6, 240(1)
  02c7670  lfs 2, 240(1)
  02c7674  lwz 7, 244(1)
  02c7678  rlwinm 6, 6, 3, 29, 29
  02c767c  lfs 4, 244(1)
  02c7680  fabs 1, 1
  02c7684  rlwimi 6, 7, 2, 30, 30
  02c7688  fabs 10, 2
  02c768c  fsub 9, 4, 31
  02c7690  rlwimi 6, 4, 4, 28, 28
  02c7694  fsub 4, 4, 31
  02c7698  ori 4, 3, 0
  02c769c  rlwimi 4, 6, 2, 26, 28
  02c76a0  slwi 6, 6, 2
  02c76a4  clrldi 4, 4, 32
  02c76a8  fsel 8, 9, 1, 8
  02c76ac  lfsx 1, 3, 6
  02c76b0  lfs 2, 4(4)
  02c76b4  fsel 3, 4, 10, 3
  02c76b8  lfs 4, 16(5)
  02c76bc  fcmpu 0, 8, 31
  02c76c0  bt 1, 0x2c76cc
  02c76c4  fmr 1, 31
  02c76c8  b 0x2c77e4
  02c76cc  fsubs 9, 3, 8
  02c76d0  fadds 3, 3, 8
  02c76d4  addic 4, 1, 16
  02c76d8  li 7, 2
  02c76dc  addic 5, 4, 264
  02c76e0  addic 6, 4, 280
  02c76e4  mtctr 7
  02c76e8  fdivs 3, 9, 3
  02c76ec  fmuls 8, 3, 3
  02c76f0  stfs 3, 292(1)
  02c76f4  stfs 3, 284(1)
  02c76f8  stfs 3, 288(1)
  02c76fc  stfs 3, 280(1)
  02c7700  lfs 10, 292(1)
  02c7704  lfs 11, 284(1)
  02c7708  lfs 12, 288(1)
  02c770c  fmuls 9, 8, 8
  02c7710  fmuls 11, 11, 8
  02c7714  fmuls 10, 10, 9
  02c7718  fmuls 3, 9, 9
  02c771c  fmuls 9, 12, 9
  02c7720  stfs 11, 284(1)
  02c7724  fmuls 8, 10, 8
  02c7728  stfs 9, 288(1)
  02c772c  stfs 8, 292(1)
  02c7730  lfs 8, 264(4)
  02c7734  fmuls 8, 8, 3
  02c7738  stfs 8, 280(4)
  02c773c  lfs 8, 4(5)
  02c7740  addic 4, 4, 8
  02c7744  addic 5, 5, 8
  02c7748  fmuls 8, 8, 3
  02c774c  stfs 8, 4(6)
  02c7750  addic 6, 6, 8
  02c7754  bdnz 0x2c7730
  02c7758  li 6, 4
  02c775c  ori 4, 1, 0
  02c7760  mtctr 6
  02c7764  lis 5, 115
  02c7768  addic 6, 4, 280
  02c776c  addic 5, 5, 22752
  02c7770  ori 8, 6, 0
  02c7774  lfs 3, 280(4)
  02c7778  lfs 8, 0(5)
  02c777c  fmuls 3, 3, 8
  02c7780  lfs 8, 4(5)
  02c7784  addic 5, 5, 8
  02c7788  stfs 3, 280(4)
  02c778c  lfs 3, 4(6)
  02c7790  addic 4, 4, 8
  02c7794  fmuls 3, 3, 8
  02c7798  stfs 3, 4(6)
  02c779c  addic 6, 6, 8
  02c77a0  bdnz 0x2c7774
  02c77a4  fmr 3, 31
  02c77a8  ori 4, 1, 0
  02c77ac  mtctr 7
  02c77b0  lfs 8, 280(4)
  02c77b4  fadds 3, 3, 8
  02c77b8  addic 4, 4, 16
  02c77bc  lfs 8, 4(8)
  02c77c0  lfs 9, 8(8)
  02c77c4  lfs 10, 12(8)
  02c77c8  addic 8, 8, 16
  02c77cc  fadds 3, 3, 8
  02c77d0  fadds 3, 3, 9
  02c77d4  fadds 3, 3, 10
  02c77d8  bdnz 0x2c77b0
  02c77dc  fadds 3, 3, 4
  02c77e0  fmadds 1, 3, 1, 2
  02c77e4  fmuls 2, 6, 6
  02c77e8  stfs 1, 72(30)
  02c77ec  stfs 5, 228(1)
  02c77f0  fabs 5, 5
  02c77f4  fmadds 2, 7, 7, 2
  02c77f8  fsqrts 2, 2
  02c77fc  lwz 4, 228(1)
  02c7800  lfs 1, 228(1)
  02c7804  fabs 3, 1
  02c7808  rlwinm 4, 4, 3, 29, 29
  02c780c  fabs 6, 2
  02c7810  stfs 2, 224(1)
  02c7814  fsubs 1, 6, 5
  02c7818  stfs 1, 232(1)
  02c781c  lwz 5, 224(1)
  02c7820  lfs 1, 224(1)
  02c7824  lwz 6, 232(1)
  02c7828  lfs 2, 232(1)
  02c782c  fabs 1, 1
  02c7830  rlwimi 4, 6, 2, 30, 30
  02c7834  fsub 7, 2, 31
  02c7838  fsub 8, 2, 31
  02c783c  rlwimi 4, 5, 4, 28, 28
  02c7840  ori 5, 3, 0
  02c7844  rlwimi 5, 4, 2, 26, 28
  02c7848  slwi 4, 4, 2
  02c784c  clrldi 5, 5, 32
  02c7850  fsel 5, 7, 1, 5
  02c7854  lfsx 1, 3, 4
  02c7858  fsel 3, 8, 3, 6
  02c785c  lfs 2, 4(5)
  02c7860  fcmpu 0, 5, 31
  02c7864  bt 1, 0x2c7870
  02c7868  fmr 4, 31
  02c786c  b 0x2c7988
  02c7870  fsubs 6, 3, 5
  02c7874  fadds 3, 3, 5
  02c7878  addic 3, 1, 16
  02c787c  li 7, 2
  02c7880  addic 5, 3, 248
  02c7884  addic 4, 3, 232
  02c7888  mtctr 7
  02c788c  fdivs 3, 6, 3
  02c7890  fmuls 5, 3, 3
  02c7894  stfs 3, 260(1)
  02c7898  stfs 3, 252(1)
  02c789c  stfs 3, 256(1)
  02c78a0  stfs 3, 248(1)
  02c78a4  lfs 7, 260(1)
  02c78a8  lfs 8, 252(1)
  02c78ac  lfs 9, 256(1)
  02c78b0  fmuls 6, 5, 5
  02c78b4  fmuls 8, 8, 5
  02c78b8  fmuls 7, 7, 6
  02c78bc  fmuls 3, 6, 6
  02c78c0  fmuls 6, 9, 6
  02c78c4  stfs 8, 252(1)
  02c78c8  fmuls 5, 7, 5
  02c78cc  stfs 6, 256(1)
  02c78d0  stfs 5, 260(1)
  02c78d4  lfs 5, 232(3)
  02c78d8  fmuls 5, 5, 3
  02c78dc  stfs 5, 248(3)
  02c78e0  lfs 5, 4(4)
  02c78e4  addic 4, 4, 8
  02c78e8  fmuls 5, 5, 3
  02c78ec  addic 3, 3, 8
  02c78f0  stfs 5, 4(5)
  02c78f4  addic 5, 5, 8
  02c78f8  bdnz 0x2c78d4
  02c78fc  li 5, 4
  02c7900  ori 3, 1, 0
  02c7904  mtctr 5
  02c7908  lis 4, 115
  02c790c  addic 5, 3, 248
  02c7910  addic 4, 4, 22752
  02c7914  ori 6, 5, 0
  02c7918  lfs 3, 248(3)
  02c791c  lfs 5, 0(4)
  02c7920  fmuls 3, 3, 5
  02c7924  lfs 5, 4(4)
  02c7928  addic 4, 4, 8
  02c792c  stfs 3, 248(3)
  02c7930  lfs 3, 4(5)
  02c7934  addic 3, 3, 8
  02c7938  fmuls 3, 3, 5
  02c793c  stfs 3, 4(5)
  02c7940  addic 5, 5, 8
  02c7944  bdnz 0x2c7918
  02c7948  ori 3, 1, 0
  02c794c  fmr 3, 31
  02c7950  mtctr 7
  02c7954  lfs 5, 248(3)
  02c7958  fadds 3, 3, 5
  02c795c  lfs 5, 4(6)
  02c7960  addic 3, 3, 16
  02c7964  lfs 6, 8(6)
  02c7968  lfs 7, 12(6)
  02c796c  addic 6, 6, 16
  02c7970  fadds 3, 3, 5
  02c7974  fadds 3, 3, 6
  02c7978  fadds 3, 3, 7
  02c797c  bdnz 0x2c7954
  02c7980  fadds 4, 3, 4
  02c7984  fmadds 4, 4, 1, 2
  02c7988  lfs 1, 0(30)
  02c798c  ori 3, 31, 0
  02c7990  stfs 1, 64(1)
  02c7994  lfs 1, 4(30)
  02c7998  addic 7, 30, 72
  02c799c  addic 8, 30, 76
  02c79a0  stfs 1, 68(1)
  02c79a4  lfs 1, 8(30)
  02c79a8  stfs 1, 72(1)
  02c79ac  stfs 4, 76(30)
  02c79b0  lfs 1, 12(30)
  02c79b4  stfs 1, 76(1)
  02c79b8  ld 5, 64(1)
  02c79bc  ld 6, 72(1)
  02c79c0  bl 0x2c5358
  02c79c4  ori 28, 3, 0
  02c79c8  addic 3, 30, 68
  02c79cc  bl 0x4fff60
  02c79d0  nop
  02c79d4  lwz 3, 16(30)
  02c79d8  cmpwi 3, 0
  02c79dc  bt 2, 0x2c7a00
  02c79e0  lbz 3, 32(3)
  02c79e4  cmpwi 3, 254
  02c79e8  cmpwi 1, 3, 253
  02c79ec  bt 2, 0x2c79f4
  02c79f0  bf 6, 0x2c7a00
  02c79f4  li 3, 0
  02c79f8  stw 3, 16(30)
  02c79fc  stw 3, 68(30)
  02c7a00  cmpwi 28, 0
  02c7a04  bf 2, 0x2c7a14
  02c7a08  lwz 3, 68(30)
  02c7a0c  cmpwi 3, 0
  02c7a10  bt 2, 0x2c7b78
  02c7a14  cmpwi 28, 0
  02c7a18  bt 2, 0x2c7aec
  02c7a1c  ori 3, 28, 0
  02c7a20  bl 0xfcccc
  02c7a24  nop
  02c7a28  lwz 4, 16(30)
  02c7a2c  ori 27, 3, 0
  02c7a30  cmpw 28, 4
  02c7a34  bt 2, 0x2c7aec
  02c7a38  lwz 3, 68(30)
  02c7a3c  cmpwi 3, 0
  02c7a40  bf 2, 0x2c7aec
  02c7a44  stw 28, 16(30)
  02c7a48  lhz 3, 4(27)
  02c7a4c  extsh 3, 3
  02c7a50  bl 0x502730
  02c7a54  nop
  02c7a58  lis 3, 44
  02c7a5c  stfs 1, 20(30)
  02c7a60  li 4, 20
  02c7a64  lfs 2, 0(27)
  02c7a68  addi 3, 3, 29420
  02c7a6c  vspltisw 2, -1
  02c7a70  stfs 2, 24(30)
  02c7a74  lis 5, 114
  02c7a78  li 6, -3056
  02c7a7c  vslw 2, 2, 2
  02c7a80  lvlx 3, 4, 3
  02c7a84  li 4, 68
  02c7a88  vspltw 3, 3, 0
  02c7a8c  lvlx 4, 6, 5
  02c7a90  vmaddfp 2, 4, 3, 2
  02c7a94  vctsxs 2, 2, 0
  02c7a98  vspltw 2, 2, 0
  02c7a9c  stvewx 2, 4, 30
  02c7aa0  lfs 2, 24(3)
  02c7aa4  fcmpu 0, 1, 2
  02c7aa8  bt 1, 0x2c7ab4
  02c7aac  li 3, 0
  02c7ab0  stw 3, 24(30)
  02c7ab4  li 3, 4
  02c7ab8  lis 5, 112
  02c7abc  lis 6, 112
  02c7ac0  lis 7, 112
  02c7ac4  lis 8, 266
  02c7ac8  addic 5, 5, 22328
  02c7acc  li 4, 30003
  02c7ad0  li 9, 10000
  02c7ad4  addic 6, 6, 22336
  02c7ad8  addic 7, 7, 22344
  02c7adc  addic 8, 8, 4280
  02c7ae0  bl 0xc8444
  02c7ae4  nop
  02c7ae8  stw 3, 52(30)
  02c7aec  lis 3, 151
  02c7af0  addic 3, 3, -25432
  02c7af4  lbz 3, 21(3)
  02c7af8  bl 0x502730
  02c7afc  nop
  02c7b00  lis 3, 44
  02c7b04  lis 4, 124
  02c7b08  addi 3, 3, 29420
  02c7b0c  lis 5, 114
  02c7b10  lfs 4, 28(3)
  02c7b14  lfs 3, 24(3)
  02c7b18  lfs 2, -11448(4)
  02c7b1c  lfs 5, -3052(5)
  02c7b20  fmadds 1, 1, 4, 3
  02c7b24  lfs 6, 24(30)
  02c7b28  fmuls 5, 2, 5
  02c7b2c  lfs 2, 20(30)
  02c7b30  fnmsubs 1, 5, 1, 6
  02c7b34  fcmpu 0, 1, 31
  02c7b38  stfs 1, 24(30)
  02c7b3c  cror 6, 1, 2
  02c7b40  bt 6, 0x2c7b50
  02c7b44  li 3, 0
  02c7b48  fmr 1, 31
  02c7b4c  stw 3, 24(30)
  02c7b50  lis 3, 44
  02c7b54  addi 3, 3, 29420
  02c7b58  lfs 3, 32(3)
  02c7b5c  fmuls 1, 1, 3
  02c7b60  fdivs 1, 1, 2
  02c7b64  bl 0x502758
  02c7b68  nop
  02c7b6c  lis 4, 266
  02c7b70  subfic 3, 3, 10000
  02c7b74  stw 3, 4280(4)
  02c7b78  lwz 3, 16(30)
  02c7b7c  cmpwi 3, 0
  02c7b80  bt 2, 0x2c7bcc
  02c7b84  lwz 4, 24(30)
  02c7b88  cmpwi 4, 0
  02c7b8c  bt 1, 0x2c7bcc
  02c7b90  lis 4, 151
  02c7b94  lwz 4, -25488(4)
  02c7b98  cmpwi 4, 5
  02c7b9c  bf 2, 0x2c7bbc
  02c7ba0  lhz 4, 166(3)
  02c7ba4  cmpwi 4, 625
  02c7ba8  bf 2, 0x2c7bbc
  02c7bac  li 3, 8
  02c7bb0  bl 0x11b728
  02c7bb4  nop
  02c7bb8  lwz 3, 16(30)
  02c7bbc  bl 0x320bf8
  02c7bc0  nop
  02c7bc4  li 3, 0
  02c7bc8  stw 3, 16(30)
  02c7bcc  ori 3, 31, 0
  02c7bd0  bl 0x2c5f88
  02c7bd4  lis 3, 266
  02c7bd8  lwz 3, 4260(3)
  02c7bdc  cmpwi 3, -1
  02c7be0  bf 2, 0x2c7c10
  02c7be4  lis 4, 44
  02c7be8  fmr 2, 31
  02c7bec  lis 6, 32
  02c7bf0  addi 4, 4, 29420
  02c7bf4  addic 3, 31, 16
  02c7bf8  ori 6, 6, 32639
  02c7bfc  lfs 1, 36(4)
  02c7c00  bl 0xda308
  02c7c04  nop
  02c7c08  lis 4, 266
  02c7c0c  stw 3, 4260(4)
  02c7c10  cmpwi 3, 0
  02c7c14  bt 0, 0x2c7cf8
  02c7c18  lis 4, 44
  02c7c1c  li 5, 40
  02c7c20  vspltisw 2, -1
  02c7c24  addi 4, 4, 29420
  02c7c28  lis 6, 114
  02c7c2c  li 7, -3056
  02c7c30  vslw 2, 2, 2
  02c7c34  lvlx 3, 5, 4
  02c7c38  lis 5, 266
  02c7c3c  vspltw 3, 3, 0
  02c7c40  lvlx 4, 7, 6
  02c7c44  li 6, 4264
  02c7c48  vmaddfp 2, 4, 3, 2
  02c7c4c  slwi 3, 3, 5
  02c7c50  extsw 3, 3
  02c7c54  vctsxs 2, 2, 0
  02c7c58  vspltw 2, 2, 0
  02c7c5c  stvewx 2, 6, 5
  02c7c60  lfs 1, 212(31)
  02c7c64  lfs 2, 208(31)
  02c7c68  fmuls 3, 1, 1
  02c7c6c  lfs 4, 216(31)
  02c7c70  lfs 5, 44(4)
  02c7c74  lfs 6, 0(30)
  02c7c78  lis 4, 162
  02c7c7c  fmadds 3, 2, 2, 3
  02c7c80  lfs 7, 4(30)
  02c7c84  lfs 8, 8(30)
  02c7c88  addic 4, 4, -8448
  02c7c8c  lis 5, 16624
  02c7c90  addc 3, 4, 3
  02c7c94  fmadds 3, 4, 4, 3
  02c7c98  stw 5, 28(3)
  02c7c9c  fsqrts 3, 3
  02c7ca0  fdivs 5, 5, 3
  02c7ca4  fsub 9, 31, 3
  02c7ca8  fsub 10, 31, 3
  02c7cac  fsub 11, 31, 3
  02c7cb0  fsub 12, 3, 31
  02c7cb4  fsub 13, 3, 31
  02c7cb8  fsub 3, 3, 31
  02c7cbc  fmuls 4, 4, 5
  02c7cc0  fmuls 1, 1, 5
  02c7cc4  fmuls 2, 2, 5
  02c7cc8  fsel 5, 9, 31, 4
  02c7ccc  fsel 9, 10, 31, 1
  02c7cd0  fsel 10, 11, 31, 2
  02c7cd4  fsel 4, 12, 5, 4
  02c7cd8  fsel 1, 13, 9, 1
  02c7cdc  fsel 2, 3, 10, 2
  02c7ce0  fadds 3, 8, 4
  02c7ce4  fadds 1, 7, 1
  02c7ce8  fadds 2, 6, 2
  02c7cec  stfs 3, 24(3)
  02c7cf0  stfs 1, 20(3)
  02c7cf4  stfs 2, 16(3)
  02c7cf8  lis 4, 266
  02c7cfc  ori 3, 31, 0
  02c7d00  lwz 4, 4268(4)
  02c7d04  extsw 4, 4
  02c7d08  bl 0x15cc7c
  02c7d0c  nop
  02c7d10  cmpwi 3, 0
  02c7d14  bf 2, 0x2c7f44
  02c7d18  li 4, 4
  02c7d1c  li 3, 0
  02c7d20  ori 5, 31, 0
  02c7d24  bl 0x15d12c
  02c7d28  nop
  02c7d2c  lis 4, 266
  02c7d30  stw 3, 4268(4)
  02c7d34  b 0x2c7f44
  02c7d38  li 4, 0
  02c7d3c  lwz 3, 52(30)
  02c7d40  cmpwi 3, -1
  02c7d44  stw 4, 16(30)
  02c7d48  sth 4, 30(30)
  02c7d4c  stw 4, 68(30)
  02c7d50  bt 2, 0x2c7d68
  02c7d54  extsw 3, 3
  02c7d58  bl 0xc8964
  02c7d5c  nop
  02c7d60  li 3, -1
  02c7d64  stw 3, 52(30)
  02c7d68  lis 3, 266
  02c7d6c  lis 4, 266
  02c7d70  stw 26, 4256(3)
  02c7d74  lwz 26, 4260(4)
  02c7d78  cmpwi 26, 0
  02c7d7c  bt 0, 0x2c7ea4
  02c7d80  lfs 1, 212(31)
  02c7d84  lfs 2, 208(31)
  02c7d88  fmuls 3, 1, 1
  02c7d8c  lfs 4, 216(31)
  02c7d90  lis 3, 44
  02c7d94  addi 28, 3, 29420
  02c7d98  fmadds 3, 2, 2, 3
  02c7d9c  lfs 5, 44(28)
  02c7da0  lfs 6, 12(28)
  02c7da4  lfs 7, 0(30)
  02c7da8  lis 3, 162
  02c7dac  fmadds 3, 4, 4, 3
  02c7db0  lfs 8, 4(30)
  02c7db4  lfs 9, 8(30)
  02c7db8  slwi 4, 26, 5
  02c7dbc  addic 30, 3, -8448
  02c7dc0  extsw 3, 4
  02c7dc4  lis 27, 266
  02c7dc8  fsqrts 3, 3
  02c7dcc  addc 4, 30, 3
  02c7dd0  lis 5, 16624
  02c7dd4  lwz 3, 4264(27)
  02c7dd8  stw 5, 28(4)
  02c7ddc  extsw 3, 3
  02c7de0  fdivs 5, 5, 3
  02c7de4  fsub 10, 6, 3
  02c7de8  fsub 11, 6, 3
  02c7dec  fsub 12, 6, 3
  02c7df0  fsub 13, 3, 6
  02c7df4  fsub 0, 3, 6
  02c7df8  fsub 3, 3, 6
  02c7dfc  fmuls 4, 4, 5
  02c7e00  fmuls 1, 1, 5
  02c7e04  fmuls 2, 2, 5
  02c7e08  fsel 5, 10, 6, 4
  02c7e0c  fsel 10, 11, 6, 1
  02c7e10  fsel 6, 12, 6, 2
  02c7e14  fsel 4, 13, 5, 4
  02c7e18  fsel 1, 0, 10, 1
  02c7e1c  fsel 2, 3, 6, 2
  02c7e20  fadds 3, 9, 4
  02c7e24  fadds 1, 8, 1
  02c7e28  fadds 2, 7, 2
  02c7e2c  stfs 3, 24(4)
  02c7e30  stfs 1, 20(4)
  02c7e34  stfs 2, 16(4)
  02c7e38  bl 0x502730
  02c7e3c  nop
  02c7e40  lfs 2, 48(28)
  02c7e44  lfs 3, 52(28)
  02c7e48  addic 3, 27, 4264
  02c7e4c  fmuls 1, 1, 2
  02c7e50  lis 28, 266
  02c7e54  lwz 4, 4260(28)
  02c7e58  slwi 4, 4, 5
  02c7e5c  extsw 4, 4
  02c7e60  fmuls 2, 1, 3
  02c7e64  addc 5, 30, 4
  02c7e68  stfs 1, 4(5)
  02c7e6c  stfsx 1, 30, 4
  02c7e70  stfs 2, 8(5)
  02c7e74  bl 0x4fff60
  02c7e78  nop
  02c7e7c  cmpwi 3, 0
  02c7e80  lwz 26, 4260(28)
  02c7e84  bt 2, 0x2c7ea4
  02c7e88  extsw 3, 26
  02c7e8c  bl 0xda9e8
  02c7e90  nop
  02c7e94  lis 3, 266
  02c7e98  li 4, -1
  02c7e9c  stw 4, 4260(3)
  02c7ea0  b 0x2c7ed4
  02c7ea4  cmpwi 26, 0
  02c7ea8  bt 0, 0x2c7ed4
  02c7eac  lis 3, 266
  02c7eb0  lwz 3, 4264(3)
  02c7eb4  cmpwi 3, 0
  02c7eb8  bf 2, 0x2c7ed4
  02c7ebc  extsw 3, 26
  02c7ec0  bl 0xda9e8
  02c7ec4  nop
  02c7ec8  lis 3, 266
  02c7ecc  li 4, -1
  02c7ed0  stw 4, 4260(3)
  02c7ed4  lis 3, 266
  02c7ed8  lwz 3, 4268(3)
  02c7edc  cmpwi 3, 0
  02c7ee0  cmpwi 1, 3, -1
  02c7ee4  bt 0, 0x2c7f3c
  02c7ee8  bt 6, 0x2c7f30
  02c7eec  sldi 4, 3, 7
  02c7ef0  sldi 6, 3, 4
  02c7ef4  lis 5, 150
  02c7ef8  subc 4, 4, 6
  02c7efc  addic 5, 5, 14312
  02c7f00  extsw 4, 4
  02c7f04  lwzx 5, 5, 4
  02c7f08  cmpw 5, 31
  02c7f0c  bf 2, 0x2c7f30
  02c7f10  lis 5, 150
  02c7f14  addic 5, 5, 14292
  02c7f18  lbzx 4, 5, 4
  02c7f1c  cmpwi 4, 0
  02c7f20  bt 2, 0x2c7f30
  02c7f24  extsw 3, 3
  02c7f28  bl 0x15cdb0
  02c7f2c  nop
  02c7f30  lis 3, 266
  02c7f34  li 4, -1
  02c7f38  stw 4, 4268(3)
  02c7f3c  bl 0x855b8
  02c7f40  nop
  02c7f44  cmpwi 29, 0
  02c7f48  bf 2, 0x2c7f74
  02c7f4c  lis 3, 266
  02c7f50  lwz 3, 4260(3)
  02c7f54  cmpwi 3, 0
  02c7f58  bt 0, 0x2c7f74
  02c7f5c  extsw 3, 3
  02c7f60  bl 0xda9e8
  02c7f64  nop
  02c7f68  lis 3, 266
  02c7f6c  li 4, -1
  02c7f70  stw 4, 4260(3)
  02c7f74  ld 0, 400(1)
  02c7f78  mtlr 0
  02c7f7c  lfd 31, 376(1)
  02c7f80  ld 26, 328(1)
  02c7f84  ld 27, 336(1)
  02c7f88  ld 28, 344(1)
  02c7f8c  ld 29, 352(1)
  02c7f90  ld 30, 360(1)
  02c7f94  ld 31, 368(1)
  02c7f98  addi 1, 1, 384
  02c7f9c  blr

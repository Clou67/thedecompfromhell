# game/update/moby557.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M557_003b5ce0:   # 0x3b5ce0, 0x14 bytes
  03b5ce0  lis 3, 132
  03b5ce4  lis 4, 1
  03b5ce8  addic 3, 3, 22812
  03b5cec  stw 4, 72(3)
  03b5cf0  blr

UpdateMoby_557_Hoverboat:   # 0x3b5d10, 0x750 bytes
  03b5d10  stdu 1, -288(1)
  03b5d14  mflr 0
  03b5d18  std 0, 304(1)
  03b5d1c  stfd 29, 264(1)
  03b5d20  stfd 30, 272(1)
  03b5d24  stfd 31, 280(1)
  03b5d28  std 31, 256(1)
  03b5d2c  cmpwi 3, 0
  03b5d30  std 30, 248(1)
  03b5d34  std 29, 240(1)
  03b5d38  ori 31, 3, 0
  03b5d3c  bt 2, 0x3b6438
  03b5d40  lwz 30, 120(31)
  03b5d44  cmpwi 30, 0
  03b5d48  bt 2, 0x3b6438
  03b5d4c  lwz 3, 540(30)
  03b5d50  cmpwi 3, 0
  03b5d54  bt 0, 0x3b5dc8
  03b5d58  lis 5, 151
  03b5d5c  extsw 4, 3
  03b5d60  addic 3, 5, -25376
  03b5d64  addic 3, 3, 128
  03b5d68  bl 0x110b70
  03b5d6c  nop
  03b5d70  cmpwi 3, 0
  03b5d74  bt 2, 0x3b5dc8
  03b5d78  li 3, 0
  03b5d7c  lhz 4, 52(31)
  03b5d80  stw 3, 148(31)
  03b5d84  ori 3, 4, 65
  03b5d88  sth 3, 52(31)
  03b5d8c  lwz 31, 336(30)
  03b5d90  cmpwi 31, 0
  03b5d94  bt 0, 0x3b6438
  03b5d98  lis 3, 164
  03b5d9c  slwi 4, 31, 8
  03b5da0  li 5, 0
  03b5da4  lwz 3, -28512(3)
  03b5da8  addc 3, 3, 4
  03b5dac  clrldi 3, 3, 32
  03b5db0  lhz 4, 52(3)
  03b5db4  stw 5, 148(3)
  03b5db8  ori 4, 4, 65
  03b5dbc  rlwimi 4, 5, 0, 19, 19
  03b5dc0  sth 4, 52(3)
  03b5dc4  b 0x3b6438
  03b5dc8  lwz 3, 148(31)
  03b5dcc  cmpwi 3, 0
  03b5dd0  bf 2, 0x3b5e30
  03b5dd4  li 3, -66
  03b5dd8  lhz 4, 52(31)
  03b5ddc  lwz 5, 36(31)
  03b5de0  and 3, 4, 3
  03b5de4  sth 3, 52(31)
  03b5de8  lwz 3, 16(5)
  03b5dec  stw 3, 148(31)
  03b5df0  lwz 3, 336(30)
  03b5df4  cmpwi 3, 0
  03b5df8  bt 0, 0x3b5e30
  03b5dfc  lis 4, 164
  03b5e00  slwi 3, 3, 8
  03b5e04  li 5, -66
  03b5e08  lwz 4, -28512(4)
  03b5e0c  addc 3, 4, 3
  03b5e10  clrldi 3, 3, 32
  03b5e14  lhz 4, 52(3)
  03b5e18  lwz 6, 36(3)
  03b5e1c  and 4, 4, 5
  03b5e20  ori 4, 4, 4096
  03b5e24  lwz 5, 16(6)
  03b5e28  stw 5, 148(3)
  03b5e2c  sth 4, 52(3)
  03b5e30  lfs 29, 16(31)
  03b5e34  lfs 1, 64(31)
  03b5e38  lfs 30, 20(31)
  03b5e3c  lfs 31, 24(31)
  03b5e40  lfs 2, 68(31)
  03b5e44  stfs 1, 112(1)
  03b5e48  lfs 1, 72(31)
  03b5e4c  stfs 2, 116(1)
  03b5e50  lfs 2, 76(31)
  03b5e54  lbz 3, 32(31)
  03b5e58  stfs 1, 120(1)
  03b5e5c  cmpwi 3, 0
  03b5e60  stfs 2, 124(1)
  03b5e64  bf 2, 0x3b5f0c
  03b5e68  lwz 4, 116(30)
  03b5e6c  lis 3, 165
  03b5e70  li 6, -1
  03b5e74  slwi 4, 4, 2
  03b5e78  addic 3, 3, 7136
  03b5e7c  extsw 4, 4
  03b5e80  li 8, 0
  03b5e84  addic 5, 30, 448
  03b5e88  lwzx 7, 3, 4
  03b5e8c  ori 3, 31, 0
  03b5e90  li 4, 0
  03b5e94  lfs 1, 16(7)
  03b5e98  stfs 1, 16(31)
  03b5e9c  lfs 1, 20(7)
  03b5ea0  stfs 1, 20(31)
  03b5ea4  lfs 1, 24(7)
  03b5ea8  stfs 1, 24(31)
  03b5eac  lfs 1, 28(7)
  03b5eb0  stfs 1, 28(31)
  03b5eb4  stw 6, 348(30)
  03b5eb8  stw 8, 512(30)
  03b5ebc  sth 8, 518(30)
  03b5ec0  bl 0xf0ea8
  03b5ec4  nop
  03b5ec8  lwz 3, 336(30)
  03b5ecc  cmpwi 3, -1
  03b5ed0  bf 2, 0x3b5efc
  03b5ed4  lis 3, 101
  03b5ed8  lhz 4, 178(31)
  03b5edc  addic 3, 3, 27280
  03b5ee0  extsh 4, 4
  03b5ee4  bl 0x5cd098
  03b5ee8  nop
  03b5eec  ori 3, 31, 0
  03b5ef0  bl 0xefb38
  03b5ef4  nop
  03b5ef8  b 0x3b6438
  03b5efc  li 3, 0
  03b5f00  lfs 1, 252(30)
  03b5f04  sth 3, 516(30)
  03b5f08  stfs 1, 532(30)
  03b5f0c  ori 3, 31, 0
  03b5f10  bl 0x3a82b8
  03b5f14  nop
  03b5f18  lis 3, 164
  03b5f1c  lwz 4, 336(30)
  03b5f20  lwz 5, 344(30)
  03b5f24  slwi 4, 4, 8
  03b5f28  cmpwi 5, 12345
  03b5f2c  lwz 3, -28512(3)
  03b5f30  addc 29, 3, 4
  03b5f34  clrldi 29, 29, 32
  03b5f38  bf 2, 0x3b602c
  03b5f3c  lwz 3, 340(30)
  03b5f40  cmpwi 3, -1
  03b5f44  bt 2, 0x3b5f60
  03b5f48  extsw 4, 3
  03b5f4c  addic 5, 1, 144
  03b5f50  ori 3, 31, 0
  03b5f54  bl 0xf1114
  03b5f58  nop
  03b5f5c  b 0x3b5f80
  03b5f60  lfs 1, 16(31)
  03b5f64  lfs 2, 20(31)
  03b5f68  stfs 1, 144(1)
  03b5f6c  lfs 1, 24(31)
  03b5f70  stfs 2, 148(1)
  03b5f74  lfs 2, 28(31)
  03b5f78  stfs 1, 152(1)
  03b5f7c  stfs 2, 156(1)
  03b5f80  addic 3, 1, 160
  03b5f84  addic 4, 31, 64
  03b5f88  bl 0x500ca4
  03b5f8c  nop
  03b5f90  lfs 1, 176(1)
  03b5f94  lfs 2, 356(30)
  03b5f98  lfs 3, 160(1)
  03b5f9c  fmuls 1, 1, 2
  03b5fa0  lfs 4, 352(30)
  03b5fa4  lfs 5, 180(1)
  03b5fa8  lfs 6, 192(1)
  03b5fac  fmuls 5, 5, 2
  03b5fb0  lfs 7, 360(30)
  03b5fb4  lfs 8, 164(1)
  03b5fb8  lfs 9, 208(1)
  03b5fbc  fmadds 1, 3, 4, 1
  03b5fc0  lfs 3, 364(30)
  03b5fc4  lfs 10, 184(1)
  03b5fc8  lfs 11, 196(1)
  03b5fcc  fmadds 5, 8, 4, 5
  03b5fd0  fmuls 2, 10, 2
  03b5fd4  lfs 8, 168(1)
  03b5fd8  fmadds 1, 6, 7, 1
  03b5fdc  lfs 6, 212(1)
  03b5fe0  lfs 10, 144(1)
  03b5fe4  lfs 12, 200(1)
  03b5fe8  fmadds 5, 11, 7, 5
  03b5fec  fmadds 2, 8, 4, 2
  03b5ff0  lfs 4, 216(1)
  03b5ff4  fmadds 1, 9, 3, 1
  03b5ff8  fmadds 5, 6, 3, 5
  03b5ffc  fmadds 2, 12, 7, 2
  03b6000  fadds 1, 10, 1
  03b6004  fmadds 2, 4, 3, 2
  03b6008  stfs 1, 16(29)
  03b600c  lfs 1, 148(1)
  03b6010  fadds 1, 1, 5
  03b6014  stfs 1, 20(29)
  03b6018  lfs 1, 152(1)
  03b601c  fadds 1, 1, 2
  03b6020  stfs 1, 24(29)
  03b6024  lfs 1, 156(1)
  03b6028  stfs 1, 28(29)
  03b602c  lwz 3, 348(30)
  03b6030  cmpwi 3, -1
  03b6034  bt 2, 0x3b6054
  03b6038  extsw 4, 3
  03b603c  ori 3, 31, 0
  03b6040  bl 0x15cc7c
  03b6044  nop
  03b6048  cmpwi 3, 0
  03b604c  bf 2, 0x3b6074
  03b6050  lwz 3, 348(30)
  03b6054  cmpwi 3, -1
  03b6058  bf 2, 0x3b6074
  03b605c  li 3, 0
  03b6060  li 4, 4
  03b6064  ori 5, 31, 0
  03b6068  bl 0x15d12c
  03b606c  nop
  03b6070  stw 3, 348(30)
  03b6074  lis 3, 59
  03b6078  lfs 1, 512(30)
  03b607c  addi 3, 3, 23800
  03b6080  lfs 2, 0(3)
  03b6084  bl 0x502578
  03b6088  nop
  03b608c  stfs 1, 512(30)
  03b6090  addic 3, 30, 464
  03b6094  li 4, 0
  03b6098  bl 0x501980
  03b609c  nop
  03b60a0  lfs 1, 16(31)
  03b60a4  addic 4, 1, 128
  03b60a8  lfs 2, 20(31)
  03b60ac  addic 3, 30, 384
  03b60b0  fsubs 1, 1, 29
  03b60b4  lfs 3, 24(31)
  03b60b8  fsubs 2, 2, 30
  03b60bc  lfs 4, 28(31)
  03b60c0  fsubs 3, 3, 31
  03b60c4  addic 5, 1, 112
  03b60c8  stfs 4, 140(1)
  03b60cc  addic 6, 31, 64
  03b60d0  stfs 1, 128(1)
  03b60d4  stfs 2, 132(1)
  03b60d8  stfs 3, 136(1)
  03b60dc  bl 0x112900
  03b60e0  nop
  03b60e4  lis 4, 151
  03b60e8  lfs 3, 24(31)
  03b60ec  addic 4, 4, -25376
  03b60f0  lwz 5, 8332(4)
  03b60f4  lhz 3, 782(4)
  03b60f8  lfs 2, 136(4)
  03b60fc  cmpwi 5, 13
  03b6100  lfs 1, 128(4)
  03b6104  lfs 29, 132(4)
  03b6108  bf 2, 0x3b620c
  03b610c  lwz 5, 2404(4)
  03b6110  cmpw 5, 29
  03b6114  bf 2, 0x3b620c
  03b6118  lhz 3, 516(30)
  03b611c  cmpwi 3, 0
  03b6120  bf 2, 0x3b61c8
  03b6124  li 3, 1
  03b6128  lis 4, 132
  03b612c  vspltisw 4, -1
  03b6130  li 5, 23044
  03b6134  sth 3, 516(30)
  03b6138  lwz 3, 23044(4)
  03b613c  extsw 3, 3
  03b6140  std 3, 224(1)
  03b6144  lis 3, 59
  03b6148  <unknown>
  03b614c  addi 31, 3, 23800
  03b6150  li 3, 4
  03b6154  vcfsx 2, 2, 0
  03b6158  lis 4, 114
  03b615c  lfs 1, 4(31)
  03b6160  <unknown>
  03b6164  lfd 2, 224(1)
  03b6168  vspltw 3, 3, 0
  03b616c  li 3, -3056
  03b6170  fcfid 2, 2
  03b6174  vaddfp 2, 2, 3
  03b6178  vslw 3, 4, 4
  03b617c  <unknown>
  03b6180  lfs 3, -3056(4)
  03b6184  li 3, 524
  03b6188  frsp 2, 2
  03b618c  vmaddfp 2, 4, 2, 3
  03b6190  fadds 1, 2, 1
  03b6194  vctsxs 2, 2, 0
  03b6198  fmuls 1, 3, 1
  03b619c  fctiwz 1, 1
  03b61a0  vsplth 2, 2, 1
  03b61a4  stfd 1, 224(1)
  03b61a8  lwz 4, 228(1)
  03b61ac  stvehx 2, 3, 30
  03b61b0  extsh 3, 4
  03b61b4  bl 0x502730
  03b61b8  nop
  03b61bc  lfs 2, 8(31)
  03b61c0  fdivs 1, 2, 1
  03b61c4  stfs 1, 528(30)
  03b61c8  addic 3, 30, 524
  03b61cc  bl 0x4fffb4
  03b61d0  nop
  03b61d4  lhz 3, 524(30)
  03b61d8  extsh 3, 3
  03b61dc  bl 0x502730
  03b61e0  nop
  03b61e4  lis 3, 59
  03b61e8  lfs 2, 528(30)
  03b61ec  addi 3, 3, 23800
  03b61f0  lfs 3, 532(30)
  03b61f4  fmuls 1, 1, 2
  03b61f8  lfs 2, 12(3)
  03b61fc  fsubs 3, 3, 2
  03b6200  fmadds 1, 3, 1, 2
  03b6204  stfs 1, 252(30)
  03b6208  b 0x3b6438
  03b620c  lhz 5, 516(30)
  03b6210  cmpwi 5, 1
  03b6214  bf 2, 0x3b63b0
  03b6218  cmpwi 3, 0
  03b621c  bt 2, 0x3b6238
  03b6220  lis 3, 59
  03b6224  addi 3, 3, 23800
  03b6228  lfs 4, 16(3)
  03b622c  fsubs 3, 3, 4
  03b6230  fcmpu 0, 2, 3
  03b6234  bt 1, 0x3b62e8
  03b6238  li 3, 0
  03b623c  lis 4, 132
  03b6240  li 5, 23048
  03b6244  vspltisw 4, -1
  03b6248  sth 3, 516(30)
  03b624c  lwz 3, 23048(4)
  03b6250  extsw 3, 3
  03b6254  std 3, 224(1)
  03b6258  lis 3, 59
  03b625c  <unknown>
  03b6260  lis 4, 114
  03b6264  addi 31, 3, 23800
  03b6268  li 3, 4
  03b626c  vcfsx 2, 2, 0
  03b6270  lfs 1, 4(31)
  03b6274  <unknown>
  03b6278  lfs 2, -3056(4)
  03b627c  li 3, -3056
  03b6280  lfd 3, 224(1)
  03b6284  vspltw 3, 3, 0
  03b6288  fcfid 3, 3
  03b628c  vaddfp 2, 2, 3
  03b6290  vslw 3, 4, 4
  03b6294  <unknown>
  03b6298  li 3, 524
  03b629c  frsp 3, 3
  03b62a0  vmaddfp 2, 4, 2, 3
  03b62a4  fadds 1, 3, 1
  03b62a8  vctsxs 2, 2, 0
  03b62ac  fmuls 1, 2, 1
  03b62b0  vsplth 2, 2, 1
  03b62b4  fctiwz 1, 1
  03b62b8  stfd 1, 224(1)
  03b62bc  lwz 4, 228(1)
  03b62c0  stvehx 2, 3, 30
  03b62c4  extsh 3, 4
  03b62c8  bl 0x502730
  03b62cc  nop
  03b62d0  lfs 2, 8(31)
  03b62d4  fdivs 1, 2, 1
  03b62d8  lfs 2, 252(30)
  03b62dc  stfs 2, 536(30)
  03b62e0  stfs 1, 528(30)
  03b62e4  b 0x3b63b0
  03b62e8  lfs 3, 16(29)
  03b62ec  fsubs 3, 3, 1
  03b62f0  lis 3, 59
  03b62f4  lis 5, 114
  03b62f8  addi 3, 3, 23800
  03b62fc  lis 6, 132
  03b6300  stfs 3, 128(1)
  03b6304  lfs 1, 20(29)
  03b6308  fsubs 1, 1, 29
  03b630c  fmuls 4, 1, 1
  03b6310  stfs 1, 132(1)
  03b6314  lfs 1, 24(29)
  03b6318  fsubs 2, 1, 2
  03b631c  fmadds 4, 3, 3, 4
  03b6320  stfs 2, 136(1)
  03b6324  fsqrts 1, 4
  03b6328  lfs 2, 28(29)
  03b632c  stfs 2, 140(1)
  03b6330  lfs 2, 20(3)
  03b6334  lfs 4, -3052(5)
  03b6338  lfs 5, 23040(6)
  03b633c  li 3, 0
  03b6340  stw 3, 136(1)
  03b6344  fmuls 4, 4, 5
  03b6348  fcmpu 0, 1, 2
  03b634c  fsub 2, 4, 1
  03b6350  fsel 2, 2, 1, 4
  03b6354  bf 2, 0x3b6384
  03b6358  lfs 1, 132(1)
  03b635c  li 3, 0
  03b6360  stfs 3, 240(4)
  03b6364  lfs 2, 136(1)
  03b6368  stfs 1, 244(4)
  03b636c  lfs 3, 140(1)
  03b6370  stfs 2, 248(4)
  03b6374  stw 3, 248(4)
  03b6378  stw 3, 244(4)
  03b637c  stw 3, 240(4)
  03b6380  b 0x3b63ac
  03b6384  fdivs 1, 2, 1
  03b6388  lfs 2, 132(1)
  03b638c  lfs 4, 136(1)
  03b6390  fmuls 6, 3, 1
  03b6394  fmuls 2, 2, 1
  03b6398  fmuls 1, 4, 1
  03b639c  lfs 3, 140(1)
  03b63a0  stfs 6, 240(4)
  03b63a4  stfs 2, 244(4)
  03b63a8  stfs 1, 248(4)
  03b63ac  stfs 3, 252(4)
  03b63b0  lhz 3, 516(30)
  03b63b4  cmpwi 3, 0
  03b63b8  bf 2, 0x3b63f8
  03b63bc  addic 3, 30, 524
  03b63c0  bl 0x4fffb4
  03b63c4  nop
  03b63c8  lhz 3, 524(30)
  03b63cc  extsh 3, 3
  03b63d0  bl 0x502730
  03b63d4  nop
  03b63d8  lfs 2, 528(30)
  03b63dc  lfs 3, 532(30)
  03b63e0  lfs 4, 536(30)
  03b63e4  fmuls 1, 1, 2
  03b63e8  fsubs 2, 4, 3
  03b63ec  fmadds 1, 2, 1, 3
  03b63f0  stfs 1, 252(30)
  03b63f4  b 0x3b6438
  03b63f8  addic 3, 30, 524
  03b63fc  bl 0x4fffb4
  03b6400  nop
  03b6404  lhz 3, 524(30)
  03b6408  extsh 3, 3
  03b640c  bl 0x502730
  03b6410  nop
  03b6414  lis 3, 59
  03b6418  lfs 2, 528(30)
  03b641c  addi 3, 3, 23800
  03b6420  lfs 3, 532(30)
  03b6424  fmuls 1, 1, 2
  03b6428  lfs 2, 12(3)
  03b642c  fsubs 3, 3, 2
  03b6430  fmadds 1, 3, 1, 2
  03b6434  stfs 1, 252(30)
  03b6438  ld 0, 304(1)
  03b643c  mtlr 0
  03b6440  lfd 29, 264(1)
  03b6444  lfd 30, 272(1)
  03b6448  lfd 31, 280(1)
  03b644c  ld 29, 240(1)
  03b6450  ld 30, 248(1)
  03b6454  ld 31, 256(1)
  03b6458  addi 1, 1, 288
  03b645c  blr

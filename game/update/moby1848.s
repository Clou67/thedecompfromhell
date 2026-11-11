# game/update/moby1848.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1848_002c4d28:   # 0x2c4d28, 0x254 bytes
  02c4d28  stdu 1, -64(1)
  02c4d2c  stfd 31, 56(1)
  02c4d30  cmpwi 3, 0
  02c4d34  li 10, 0
  02c4d38  bf 1, 0x2c4f70
  02c4d3c  lis 6, 44
  02c4d40  lis 9, 149
  02c4d44  addi 11, 6, 19736
  02c4d48  ori 6, 5, 0
  02c4d4c  ori 5, 4, 0
  02c4d50  lis 8, 266
  02c4d54  ori 4, 7, 0
  02c4d58  lfs 4, 0(11)
  02c4d5c  addic 9, 9, 5056
  02c4d60  lfs 3, 4(11)
  02c4d64  addic 7, 8, 3040
  02c4d68  lfs 2, 8(11)
  02c4d6c  lfs 1, 12(11)
  02c4d70  lfs 9, 4(6)
  02c4d74  lfs 5, 324(9)
  02c4d78  lfs 10, 0(6)
  02c4d7c  fsubs 9, 9, 5
  02c4d80  lfs 5, 320(9)
  02c4d84  lfs 8, 8(6)
  02c4d88  fsubs 10, 10, 5
  02c4d8c  lfs 5, 328(9)
  02c4d90  fsubs 8, 8, 5
  02c4d94  fmr 7, 4
  02c4d98  fmuls 5, 9, 9
  02c4d9c  fmr 6, 7
  02c4da0  fmadds 11, 10, 10, 5
  02c4da4  fmr 5, 6
  02c4da8  fmadds 11, 8, 8, 11
  02c4dac  fsqrts 12, 11
  02c4db0  fcmpu 0, 12, 5
  02c4db4  bt 2, 0x2c4df8
  02c4db8  frsqrte 5, 11
  02c4dbc  fmuls 6, 11, 5
  02c4dc0  fmuls 7, 5, 3
  02c4dc4  fnmsubs 6, 6, 5, 2
  02c4dc8  fmadds 5, 6, 7, 5
  02c4dcc  fmuls 6, 11, 5
  02c4dd0  fmuls 7, 5, 3
  02c4dd4  fnmsubs 6, 6, 5, 2
  02c4dd8  fmadds 5, 6, 7, 5
  02c4ddc  fmuls 6, 11, 5
  02c4de0  fmuls 7, 5, 3
  02c4de4  fnmsubs 6, 6, 5, 2
  02c4de8  fmadds 5, 6, 7, 5
  02c4dec  fmuls 7, 10, 5
  02c4df0  fmuls 6, 9, 5
  02c4df4  fmuls 5, 8, 5
  02c4df8  lfs 0, 0(5)
  02c4dfc  lfs 13, 4(5)
  02c4e00  fmuls 8, 0, 0
  02c4e04  lfs 12, 8(5)
  02c4e08  fmuls 9, 13, 13
  02c4e0c  fmuls 10, 12, 12
  02c4e10  fneg 8, 8
  02c4e14  fneg 9, 9
  02c4e18  fneg 10, 10
  02c4e1c  fneg 8, 8
  02c4e20  fneg 9, 9
  02c4e24  fneg 11, 10
  02c4e28  fmr 10, 4
  02c4e2c  fadds 8, 8, 9
  02c4e30  fmr 9, 10
  02c4e34  fadds 11, 8, 11
  02c4e38  fmr 8, 9
  02c4e3c  fsqrts 31, 11
  02c4e40  fcmpu 0, 31, 8
  02c4e44  bt 2, 0x2c4e94
  02c4e48  frsqrte 8, 11
  02c4e4c  fmuls 9, 11, 8
  02c4e50  fmuls 10, 8, 3
  02c4e54  fnmsubs 9, 9, 8, 2
  02c4e58  fmadds 8, 9, 10, 8
  02c4e5c  fmuls 9, 11, 8
  02c4e60  fmuls 10, 8, 3
  02c4e64  fnmsubs 9, 9, 8, 2
  02c4e68  fmadds 8, 9, 10, 8
  02c4e6c  fmuls 9, 11, 8
  02c4e70  fmuls 10, 8, 3
  02c4e74  fnmsubs 9, 9, 8, 2
  02c4e78  fmadds 8, 9, 10, 8
  02c4e7c  fmuls 10, 0, 8
  02c4e80  fmuls 9, 13, 8
  02c4e84  fmuls 8, 12, 8
  02c4e88  fneg 10, 10
  02c4e8c  fneg 9, 9
  02c4e90  fneg 8, 8
  02c4e94  fmr 11, 5
  02c4e98  fmuls 5, 6, 9
  02c4e9c  fmadds 5, 7, 10, 5
  02c4ea0  fmadds 5, 11, 8, 5
  02c4ea4  fmuls 12, 5, 1
  02c4ea8  fnmsubs 5, 12, 9, 6
  02c4eac  fnmsubs 6, 12, 10, 7
  02c4eb0  fnmsubs 7, 12, 8, 11
  02c4eb4  fmr 11, 4
  02c4eb8  fmuls 8, 5, 5
  02c4ebc  fmr 10, 11
  02c4ec0  fmadds 8, 6, 6, 8
  02c4ec4  fmr 9, 10
  02c4ec8  fmadds 8, 7, 7, 8
  02c4ecc  fsqrts 12, 8
  02c4ed0  fcmpu 0, 12, 9
  02c4ed4  bt 2, 0x2c4f18
  02c4ed8  frsqrte 9, 8
  02c4edc  fmuls 10, 8, 9
  02c4ee0  fmuls 11, 9, 3
  02c4ee4  fnmsubs 10, 10, 9, 2
  02c4ee8  fmadds 9, 10, 11, 9
  02c4eec  fmuls 10, 8, 9
  02c4ef0  fmuls 11, 9, 3
  02c4ef4  fnmsubs 10, 10, 9, 2
  02c4ef8  fmadds 9, 10, 11, 9
  02c4efc  fmuls 8, 8, 9
  02c4f00  fmuls 10, 9, 3
  02c4f04  fnmsubs 8, 8, 9, 2
  02c4f08  fmadds 9, 8, 10, 9
  02c4f0c  fmuls 11, 9, 6
  02c4f10  fmuls 10, 9, 5
  02c4f14  fmuls 9, 9, 7
  02c4f18  fmuls 5, 10, 10
  02c4f1c  fadds 6, 9, 2
  02c4f20  addic 10, 10, 1
  02c4f24  fmadds 5, 11, 11, 5
  02c4f28  cmpw 10, 3
  02c4f2c  addic 6, 6, 12
  02c4f30  addic 5, 5, 12
  02c4f34  fmadds 5, 6, 6, 5
  02c4f38  lfs 6, 3040(8)
  02c4f3c  fsqrts 5, 5
  02c4f40  fmuls 5, 5, 1
  02c4f44  fdivs 7, 11, 5
  02c4f48  fdivs 5, 10, 5
  02c4f4c  fadds 7, 7, 3
  02c4f50  fmadds 6, 7, 1, 6
  02c4f54  fadds 5, 5, 3
  02c4f58  stfs 6, 0(4)
  02c4f5c  lfs 6, 4(7)
  02c4f60  fmadds 5, 5, 1, 6
  02c4f64  stfs 5, 4(4)
  02c4f68  addic 4, 4, 8
  02c4f6c  bt 0, 0x2c4d70
  02c4f70  lfd 31, 56(1)
  02c4f74  addi 1, 1, 64
  02c4f78  blr

M1848_002c4f7c:   # 0x2c4f7c, 0x19c bytes
  02c4f7c  stdu 1, -176(1)
  02c4f80  mflr 0
  02c4f84  std 0, 192(1)
  02c4f88  std 31, 168(1)
  02c4f8c  std 30, 160(1)
  02c4f90  std 29, 152(1)
  02c4f94  std 28, 144(1)
  02c4f98  std 27, 136(1)
  02c4f9c  std 26, 128(1)
  02c4fa0  std 25, 120(1)
  02c4fa4  li 3, 40
  02c4fa8  bl 0x685c4
  02c4fac  nop
  02c4fb0  ori 4, 3, 0
  02c4fb4  li 3, 24
  02c4fb8  bl 0x174f80
  02c4fbc  nop
  02c4fc0  li 3, 0
  02c4fc4  li 4, 1
  02c4fc8  li 5, 2
  02c4fcc  li 6, 1
  02c4fd0  li 7, 32
  02c4fd4  bl 0x502ea8
  02c4fd8  nop
  02c4fdc  ori 4, 3, 0
  02c4fe0  li 3, 3
  02c4fe4  bl 0x174f80
  02c4fe8  nop
  02c4fec  li 3, 0
  02c4ff0  li 4, 0
  02c4ff4  li 5, 0
  02c4ff8  li 6, 0
  02c4ffc  li 7, 0
  02c5000  li 8, 0
  02c5004  bl 0x502f08
  02c5008  nop
  02c500c  ori 4, 3, 0
  02c5010  li 3, 6
  02c5014  bl 0x174f80
  02c5018  nop
  02c501c  li 3, 0
  02c5020  lis 9, 0
  02c5024  li 4, 0
  02c5028  li 5, 1
  02c502c  li 6, 1
  02c5030  li 7, 1
  02c5034  li 8, 0
  02c5038  ori 9, 9, 65424
  02c503c  bl 0x502fd4
  02c5040  nop
  02c5044  ori 4, 3, 0
  02c5048  li 3, 26
  02c504c  bl 0x174f80
  02c5050  nop
  02c5054  bl 0x71170
  02c5058  nop
  02c505c  lis 29, 124
  02c5060  lis 31, 124
  02c5064  lis 27, 124
  02c5068  lis 30, 124
  02c506c  lis 28, 124
  02c5070  lis 26, 266
  02c5074  li 25, 0
  02c5078  addic 27, 27, -11504
  02c507c  addic 29, 29, -32624
  02c5080  addic 28, 28, -11524
  02c5084  addic 31, 31, -11484
  02c5088  addic 30, 30, -11544
  02c508c  addic 26, 26, 3056
  02c5090  lwz 3, 0(29)
  02c5094  ori 7, 26, 0
  02c5098  lwz 4, 0(27)
  02c509c  lwz 5, 0(30)
  02c50a0  extsw 3, 3
  02c50a4  lwz 6, 0(28)
  02c50a8  bl 0x2c4d28
  02c50ac  lwz 3, 0(29)
  02c50b0  ori 6, 26, 0
  02c50b4  lwz 4, 0(30)
  02c50b8  li 7, 9
  02c50bc  lwz 5, 0(31)
  02c50c0  extsw 3, 3
  02c50c4  bl 0x74604
  02c50c8  nop
  02c50cc  addic 25, 25, 1
  02c50d0  addic 27, 27, 4
  02c50d4  cmpwi 25, 5
  02c50d8  addic 28, 28, 4
  02c50dc  addic 29, 29, 4
  02c50e0  addic 30, 30, 4
  02c50e4  addic 31, 31, 4
  02c50e8  bt 0, 0x2c5090
  02c50ec  ld 0, 192(1)
  02c50f0  mtlr 0
  02c50f4  ld 25, 120(1)
  02c50f8  ld 26, 128(1)
  02c50fc  ld 27, 136(1)
  02c5100  ld 28, 144(1)
  02c5104  ld 29, 152(1)
  02c5108  ld 30, 160(1)
  02c510c  ld 31, 168(1)
  02c5110  addi 1, 1, 176
  02c5114  blr

UpdateMoby_1848:   # 0x2c5128, 0x108 bytes
  02c5128  stdu 1, -112(1)
  02c512c  mflr 0
  02c5130  std 0, 128(1)
  02c5134  lbz 5, 32(3)
  02c5138  lis 4, 266
  02c513c  cmpwi 5, 0
  02c5140  cmpwi 1, 5, 1
  02c5144  cmpwi 6, 5, -1
  02c5148  bt 1, 0x2c5154
  02c514c  bf 25, 0x2c5220
  02c5150  b 0x2c515c
  02c5154  bf 5, 0x2c5178
  02c5158  b 0x2c5220
  02c515c  li 5, 0
  02c5160  addic 6, 4, 3040
  02c5164  li 7, 1
  02c5168  stw 5, 3040(4)
  02c516c  stw 5, 4(6)
  02c5170  stb 7, 32(3)
  02c5174  b 0x2c5220
  02c5178  lis 5, 44
  02c517c  lfs 4, 3040(4)
  02c5180  lis 7, 114
  02c5184  addi 6, 5, 20760
  02c5188  addic 5, 4, 3040
  02c518c  lfs 1, 0(6)
  02c5190  lfs 3, -3036(7)
  02c5194  lfs 2, 4(5)
  02c5198  fmadds 4, 3, 1, 4
  02c519c  fmadds 3, 3, 1, 2
  02c51a0  stfs 4, 3040(4)
  02c51a4  stfs 3, 4(5)
  02c51a8  lfs 2, 4(6)
  02c51ac  fcmpu 0, 4, 2
  02c51b0  cror 6, 0, 2
  02c51b4  bt 6, 0x2c51c0
  02c51b8  fsubs 4, 4, 2
  02c51bc  stfs 4, 3040(4)
  02c51c0  lis 6, 44
  02c51c4  addi 6, 6, 20760
  02c51c8  lfs 1, 8(6)
  02c51cc  fcmpu 0, 4, 1
  02c51d0  cror 6, 1, 2
  02c51d4  bt 6, 0x2c51e0
  02c51d8  fadds 4, 4, 2
  02c51dc  stfs 4, 3040(4)
  02c51e0  fmr 4, 3
  02c51e4  fcmpu 0, 4, 2
  02c51e8  cror 6, 0, 2
  02c51ec  bt 6, 0x2c51f8
  02c51f0  fsubs 4, 3, 2
  02c51f4  stfs 4, 4(5)
  02c51f8  fcmpu 0, 4, 1
  02c51fc  cror 6, 1, 2
  02c5200  bt 6, 0x2c520c
  02c5204  fadds 1, 4, 2
  02c5208  stfs 1, 4(5)
  02c520c  lis 5, 113
  02c5210  ori 4, 3, 0
  02c5214  addic 3, 5, -20312
  02c5218  bl 0x6d720
  02c521c  nop
  02c5220  ld 0, 128(1)
  02c5224  mtlr 0
  02c5228  addi 1, 1, 112
  02c522c  blr

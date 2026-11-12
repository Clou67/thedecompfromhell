# game/update/sound0.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateSound_0:   # 0x17f7d0, 0x228 bytes
  017f7d0  stdu 1, -160(1)
  017f7d4  mflr 0
  017f7d8  std 0, 176(1)
  017f7dc  std 30, 144(1)
  017f7e0  std 31, 152(1)
  017f7e4  lwz 30, 8(3)
  017f7e8  std 29, 136(1)
  017f7ec  ori 31, 3, 0
  017f7f0  lwz 29, 0(30)
  017f7f4  cmpwi 29, 0
  017f7f8  bt 0, 0x17f9dc
  017f7fc  lis 3, 149
  017f800  lfs 1, 68(31)
  017f804  addic 3, 3, 5056
  017f808  lfs 2, 324(3)
  017f80c  lfs 3, 320(3)
  017f810  fsubs 1, 2, 1
  017f814  lfs 2, 64(31)
  017f818  fsubs 2, 3, 2
  017f81c  lfs 3, 328(3)
  017f820  lfs 4, 72(31)
  017f824  fsubs 3, 3, 4
  017f828  fmuls 1, 1, 1
  017f82c  fmadds 1, 2, 2, 1
  017f830  fmadds 2, 3, 3, 1
  017f834  lfs 1, 12(31)
  017f838  fsqrts 2, 2
  017f83c  fcmpu 0, 2, 1
  017f840  cror 6, 1, 2
  017f844  bt 6, 0x17f96c
  017f848  lis 3, 161
  017f84c  slwi 4, 29, 5
  017f850  li 8, 0
  017f854  li 5, 0
  017f858  li 29, 4
  017f85c  lwz 3, 1844(3)
  017f860  lis 6, 150
  017f864  subc 5, 5, 29
  017f868  addc 3, 3, 4
  017f86c  lwz 4, 16(30)
  017f870  addic 6, 6, 14176
  017f874  clrldi 3, 3, 32
  017f878  sldi 7, 4, 7
  017f87c  sldi 4, 4, 4
  017f880  subc 4, 7, 4
  017f884  lbz 3, 24(3)
  017f888  extsw 4, 4
  017f88c  subc 3, 8, 3
  017f890  cntlzw 3, 3
  017f894  sldi 3, 3, 58
  017f898  sradi 3, 3, 63
  017f89c  and 5, 3, 5
  017f8a0  addc 3, 6, 4
  017f8a4  addc 29, 29, 5
  017f8a8  lwz 4, 140(3)
  017f8ac  cmpw 4, 31
  017f8b0  bf 2, 0x17f8c0
  017f8b4  lbz 3, 116(3)
  017f8b8  cmpwi 3, 0
  017f8bc  bf 2, 0x17f9dc
  017f8c0  addic 3, 30, 12
  017f8c4  bl 0x4fff60
  017f8c8  nop
  017f8cc  cmpwi 3, 0
  017f8d0  bt 2, 0x17f9dc
  017f8d4  lwz 3, 0(30)
  017f8d8  ori 5, 31, 0
  017f8dc  ori 4, 29, 0
  017f8e0  li 6, 1024
  017f8e4  bl 0x15d434
  017f8e8  nop
  017f8ec  lwz 31, 8(30)
  017f8f0  stw 3, 16(30)
  017f8f4  cmpwi 31, 0
  017f8f8  bf 1, 0x17f9dc
  017f8fc  lwz 3, 4(30)
  017f900  subc 3, 31, 3
  017f904  extsw 3, 3
  017f908  bl 0xfc620
  017f90c  nop
  017f910  lwz 4, 4(30)
  017f914  addc 3, 4, 3
  017f918  lis 4, 114
  017f91c  extsw 3, 3
  017f920  std 3, 112(1)
  017f924  lis 3, 24
  017f928  addi 3, 3, -2112
  017f92c  lfs 1, 0(3)
  017f930  lfs 2, -3056(4)
  017f934  lfd 3, 112(1)
  017f938  fcfid 3, 3
  017f93c  frsp 3, 3
  017f940  fadds 1, 3, 1
  017f944  lfs 3, 4(3)
  017f948  li 3, 12
  017f94c  fmuls 1, 2, 1
  017f950  fctidz 1, 1
  017f954  fcfid 1, 1
  017f958  frsp 1, 1
  017f95c  fmuls 1, 1, 3
  017f960  fctiwz 1, 1
  017f964  stfiwx 1, 3, 30
  017f968  b 0x17f9dc
  017f96c  lis 3, 24
  017f970  addi 3, 3, -2112
  017f974  lfs 3, 8(3)
  017f978  fadds 1, 1, 3
  017f97c  fcmpu 0, 2, 1
  017f980  cror 6, 0, 2
  017f984  bt 6, 0x17f9dc
  017f988  lwz 4, 16(30)
  017f98c  cmpwi 4, -1
  017f990  bt 2, 0x17f9d4
  017f994  sldi 3, 4, 7
  017f998  sldi 6, 4, 4
  017f99c  lis 5, 150
  017f9a0  subc 3, 3, 6
  017f9a4  addic 5, 5, 14176
  017f9a8  extsw 3, 3
  017f9ac  addc 3, 5, 3
  017f9b0  lwz 5, 140(3)
  017f9b4  cmpw 5, 31
  017f9b8  bf 2, 0x17f9d4
  017f9bc  lbz 3, 116(3)
  017f9c0  cmpwi 3, 0
  017f9c4  bt 2, 0x17f9d4
  017f9c8  extsw 3, 4
  017f9cc  bl 0x15cdb0
  017f9d0  nop
  017f9d4  li 3, -1
  017f9d8  stw 3, 16(30)
  017f9dc  ld 0, 176(1)
  017f9e0  mtlr 0
  017f9e4  ld 29, 136(1)
  017f9e8  ld 30, 144(1)
  017f9ec  ld 31, 152(1)
  017f9f0  addi 1, 1, 160
  017f9f4  blr

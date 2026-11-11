# game/update/moby1351.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1351_002552c8:   # 0x2552c8, 0x14 bytes
  02552c8  lis 3, 122
  02552cc  lis 4, 1
  02552d0  addic 3, 3, -17764
  02552d4  stw 4, 72(3)
  02552d8  blr

UpdateMoby_1351:   # 0x2552e8, 0x80 bytes
  02552e8  lbz 4, 32(3)
  02552ec  cmpwi 4, 0
  02552f0  cmpwi 1, 4, 1
  02552f4  cmpwi 6, 4, -1
  02552f8  bt 1, 0x255304
  02552fc  bf 25, 0x255364
  0255300  b 0x25530c
  0255304  bf 5, 0x255318
  0255308  b 0x255364
  025530c  li 4, 1
  0255310  stb 4, 32(3)
  0255314  b 0x255364
  0255318  lis 4, 151
  025531c  addic 4, 4, -25376
  0255320  lwz 5, 764(4)
  0255324  cmpw 5, 3
  0255328  bf 2, 0x255364
  025532c  lhz 5, 782(4)
  0255330  cmpwi 5, 0
  0255334  bf 2, 0x255364
  0255338  lwz 4, 8324(4)
  025533c  cmpwi 4, 34
  0255340  bf 2, 0x255364
  0255344  lis 4, 37
  0255348  lfs 1, 24(3)
  025534c  li 5, 2
  0255350  addi 4, 4, 21216
  0255354  lfs 2, 0(4)
  0255358  stb 5, 32(3)
  025535c  fsubs 1, 1, 2
  0255360  stfs 1, 24(3)
  0255364  blr

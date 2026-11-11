# game/update/moby641.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_641:   # 0x3fece0, 0xfc bytes
  03fece0  stdu 1, -144(1)
  03fece4  mflr 0
  03fece8  std 0, 160(1)
  03fecec  stfd 31, 136(1)
  03fecf0  std 31, 128(1)
  03fecf4  ori 31, 3, 0
  03fecf8  lbz 4, 32(31)
  03fecfc  lwz 3, 120(31)
  03fed00  cmpwi 4, 0
  03fed04  cmpwi 1, 4, 1
  03fed08  std 30, 120(1)
  03fed0c  cmpwi 6, 4, -1
  03fed10  bt 1, 0x3fed1c
  03fed14  bf 25, 0x3fedc0
  03fed18  b 0x3fed24
  03fed1c  bf 5, 0x3fed50
  03fed20  b 0x3fedc0
  03fed24  lis 4, 64
  03fed28  lfs 1, 64(31)
  03fed2c  addi 4, 4, -4904
  03fed30  stfs 1, 4(3)
  03fed34  lfs 1, 0(4)
  03fed38  lfs 2, 8(3)
  03fed3c  li 4, 1
  03fed40  fmuls 1, 2, 1
  03fed44  stfs 1, 8(3)
  03fed48  stb 4, 32(31)
  03fed4c  b 0x3fedc0
  03fed50  lwz 4, 0(3)
  03fed54  cmpwi 4, -1
  03fed58  bt 2, 0x3fedc0
  03fed5c  lis 5, 164
  03fed60  slwi 4, 4, 8
  03fed64  lwz 5, -28512(5)
  03fed68  addc 4, 5, 4
  03fed6c  clrldi 4, 4, 32
  03fed70  lhz 5, 166(4)
  03fed74  cmpwi 5, 280
  03fed78  bf 2, 0x3fedc0
  03fed7c  li 5, 255
  03fed80  lwz 30, 120(4)
  03fed84  stb 5, 48(4)
  03fed88  lfs 31, 4(3)
  03fed8c  lfs 1, 8(3)
  03fed90  fneg 2, 31
  03fed94  bl 0x502578
  03fed98  nop
  03fed9c  lfs 2, 0(30)
  03feda0  fmuls 1, 1, 2
  03feda4  bl 0x502648
  03feda8  nop
  03fedac  fmr 2, 1
  03fedb0  fmr 1, 31
  03fedb4  bl 0x502578
  03fedb8  nop
  03fedbc  stfs 1, 64(31)
  03fedc0  ld 0, 160(1)
  03fedc4  mtlr 0
  03fedc8  lfd 31, 136(1)
  03fedcc  ld 30, 120(1)
  03fedd0  ld 31, 128(1)
  03fedd4  addi 1, 1, 144
  03fedd8  blr

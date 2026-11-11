# game/update/moby381.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M381_00359358:   # 0x359358, 0x78 bytes
  0359358  stdu 1, -128(1)
  035935c  mflr 0
  0359360  std 0, 144(1)
  0359364  std 31, 120(1)
  0359368  li 3, 381
  035936c  bl 0xefa28
  0359370  nop
  0359374  ori 31, 3, 0
  0359378  cmpwi 31, 0
  035937c  bt 2, 0x3593b8
  0359380  lis 4, 151
  0359384  li 3, 255
  0359388  li 5, 1
  035938c  addic 4, 4, -25376
  0359390  li 6, 127
  0359394  stb 3, 48(31)
  0359398  stb 5, 49(31)
  035939c  ori 3, 31, 0
  03593a0  lwz 4, 8320(4)
  03593a4  sth 6, 50(31)
  03593a8  ld 4, 56(4)
  03593ac  std 4, 56(31)
  03593b0  bl 0xf31a8
  03593b4  nop
  03593b8  ori 3, 31, 0
  03593bc  ld 0, 144(1)
  03593c0  mtlr 0
  03593c4  ld 31, 120(1)
  03593c8  addi 1, 1, 128
  03593cc  blr

UpdateMoby_381:   # 0x3593d0, 0x4 bytes
  03593d0  blr

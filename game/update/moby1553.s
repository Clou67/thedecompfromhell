# game/update/moby1553.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1553:   # 0x2989a0, 0x104 bytes
  02989a0  stdu 1, -128(1)
  02989a4  mflr 0
  02989a8  std 0, 144(1)
  02989ac  lbz 4, 32(3)
  02989b0  cmpwi 4, 0
  02989b4  cmpwi 1, 4, -1
  02989b8  cmpwi 6, 4, 1
  02989bc  bt 1, 0x2989c8
  02989c0  bf 5, 0x298a94
  02989c4  b 0x2989d0
  02989c8  bf 25, 0x2989e4
  02989cc  b 0x298a94
  02989d0  li 4, 255
  02989d4  li 5, 1
  02989d8  stb 4, 48(3)
  02989dc  stb 5, 32(3)
  02989e0  b 0x298a94
  02989e4  lis 3, 161
  02989e8  lwz 3, 1800(3)
  02989ec  cmpwi 3, 2
  02989f0  bf 2, 0x298a94
  02989f4  lis 3, 150
  02989f8  addic 3, 3, -12976
  02989fc  lwz 4, 48(3)
  0298a00  cmpwi 1, 4, 2
  0298a04  cmpwi 4, 1
  0298a08  cror 2, 2, 6
  0298a0c  bt 2, 0x298a20
  0298a10  cmpwi 4, 4
  0298a14  bt 2, 0x298a20
  0298a18  cmpwi 4, 5
  0298a1c  bf 2, 0x298a94
  0298a20  cmpwi 4, 1
  0298a24  bf 2, 0x298a58
  0298a28  lis 5, 42
  0298a2c  lis 6, 114
  0298a30  addi 5, 5, -30312
  0298a34  lfs 1, 0(5)
  0298a38  lfs 2, -3056(6)
  0298a3c  lwz 5, 52(3)
  0298a40  fmuls 1, 2, 1
  0298a44  fctiwz 1, 1
  0298a48  stfd 1, 112(1)
  0298a4c  lwz 6, 116(1)
  0298a50  cmpw 5, 6
  0298a54  bf 1, 0x298a94
  0298a58  cmpwi 4, 1
  0298a5c  li 5, 0
  0298a60  bt 2, 0x298a6c
  0298a64  cmpwi 4, 4
  0298a68  bf 2, 0x298a74
  0298a6c  li 5, 3
  0298a70  b 0x298a84
  0298a74  bt 6, 0x298a80
  0298a78  cmpwi 4, 5
  0298a7c  bf 2, 0x298a84
  0298a80  li 5, 2
  0298a84  rlwimi 3, 5, 2, 28, 29
  0298a88  lwz 3, 376(3)
  0298a8c  bl 0x119600
  0298a90  nop
  0298a94  ld 0, 144(1)
  0298a98  mtlr 0
  0298a9c  addi 1, 1, 128
  0298aa0  blr

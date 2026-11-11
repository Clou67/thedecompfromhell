# game/update/moby1561.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1561:   # 0x29a0d8, 0xd8 bytes
  029a0d8  stdu 1, -128(1)
  029a0dc  mflr 0
  029a0e0  std 0, 144(1)
  029a0e4  std 31, 120(1)
  029a0e8  lwz 31, 120(3)
  029a0ec  lwz 3, 8(31)
  029a0f0  cmpwi 3, 0
  029a0f4  cmpwi 1, 3, 1
  029a0f8  std 30, 112(1)
  029a0fc  cmpwi 6, 3, -1
  029a100  bt 1, 0x29a10c
  029a104  bf 25, 0x29a198
  029a108  b 0x29a114
  029a10c  bf 5, 0x29a150
  029a110  b 0x29a198
  029a114  lis 30, 151
  029a118  lwz 4, 0(31)
  029a11c  addic 30, 30, -25376
  029a120  extsw 4, 4
  029a124  addic 3, 30, 128
  029a128  bl 0x110b70
  029a12c  nop
  029a130  cmpwi 3, 0
  029a134  bt 2, 0x29a198
  029a138  lwz 3, 8332(30)
  029a13c  cmpwi 3, 15
  029a140  bf 2, 0x29a198
  029a144  li 3, 1
  029a148  stw 3, 8(31)
  029a14c  b 0x29a198
  029a150  lis 3, 151
  029a154  addic 3, 3, -25376
  029a158  lwz 4, 8324(3)
  029a15c  cmpwi 4, 66
  029a160  bf 2, 0x29a170
  029a164  li 3, 0
  029a168  stw 3, 8(31)
  029a16c  b 0x29a198
  029a170  addic 3, 3, 128
  029a174  lwz 4, 4(31)
  029a178  extsw 4, 4
  029a17c  bl 0x110b70
  029a180  nop
  029a184  cmpwi 3, 0
  029a188  bt 2, 0x29a198
  029a18c  li 3, 25
  029a190  bl 0x11b728
  029a194  nop
  029a198  ld 0, 144(1)
  029a19c  mtlr 0
  029a1a0  ld 30, 112(1)
  029a1a4  ld 31, 120(1)
  029a1a8  addi 1, 1, 128
  029a1ac  blr

# game/update/moby1122.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1122_001d5844:   # 0x1d5844, 0x14 bytes
  01d5844  lis 3, 118
  01d5848  lis 4, 1
  01d584c  addic 3, 3, 17788
  01d5850  stw 4, 72(3)
  01d5854  blr

FUN_001d5858:   # 0x1d5858, 0xb0 bytes
  01d5858  stdu 1, -128(1)
  01d585c  mflr 0
  01d5860  std 0, 144(1)
  01d5864  std 31, 120(1)
  01d5868  ori 31, 3, 0
  01d586c  std 30, 112(1)
  01d5870  li 3, 1122
  01d5874  bl 0xefa28
  01d5878  nop
  01d587c  ori 30, 3, 0
  01d5880  cmpwi 30, 0
  01d5884  bt 2, 0x1d58ec
  01d5888  li 4, 255
  01d588c  li 5, 1
  01d5890  li 6, 0
  01d5894  lis 7, 17004
  01d5898  stb 4, 48(30)
  01d589c  ori 3, 30, 0
  01d58a0  sth 4, 50(30)
  01d58a4  stb 5, 49(30)
  01d58a8  lfs 1, 72(31)
  01d58ac  stw 6, 64(30)
  01d58b0  stw 6, 68(30)
  01d58b4  ld 4, 56(31)
  01d58b8  stfs 1, 72(30)
  01d58bc  lfs 1, 16(31)
  01d58c0  std 4, 56(30)
  01d58c4  lfs 2, 20(31)
  01d58c8  lfs 3, 24(31)
  01d58cc  stfs 1, 16(30)
  01d58d0  stfs 2, 20(30)
  01d58d4  lfs 1, 28(31)
  01d58d8  stfs 3, 24(30)
  01d58dc  stfs 1, 28(30)
  01d58e0  stw 7, 24(30)
  01d58e4  bl 0xf31a8
  01d58e8  nop
  01d58ec  ori 3, 30, 0
  01d58f0  ld 0, 144(1)
  01d58f4  mtlr 0
  01d58f8  ld 30, 112(1)
  01d58fc  ld 31, 120(1)
  01d5900  addi 1, 1, 128
  01d5904  blr

UpdateMoby_1122:   # 0x1d5908, 0x4 bytes
  01d5908  blr

# game/update/moby1568.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1568:   # 0x29e008, 0xec bytes
  029e008  stdu 1, -128(1)
  029e00c  mflr 0
  029e010  std 0, 144(1)
  029e014  std 31, 120(1)
  029e018  ori 31, 3, 0
  029e01c  lbz 3, 32(3)
  029e020  cmpwi 3, 0
  029e024  cmpwi 1, 3, 2
  029e028  cmpwi 6, 3, 1
  029e02c  cmpwi 7, 3, -1
  029e030  bt 1, 0x29e03c
  029e034  bf 29, 0x29e0e0
  029e038  b 0x29e048
  029e03c  bf 25, 0x29e054
  029e040  bf 5, 0x29e0b4
  029e044  b 0x29e0e0
  029e048  li 3, 1
  029e04c  stb 3, 32(31)
  029e050  b 0x29e0e0
  029e054  lis 3, 161
  029e058  lwz 3, 1800(3)
  029e05c  cmpwi 3, 2
  029e060  bf 2, 0x29e0e0
  029e064  lis 3, 150
  029e068  addic 3, 3, -12976
  029e06c  lwz 3, 48(3)
  029e070  cmpwi 3, 3
  029e074  bf 2, 0x29e0e0
  029e078  li 3, 0
  029e07c  lis 4, 42
  029e080  lhz 5, 52(31)
  029e084  addi 4, 4, -8192
  029e088  ori 5, 5, 1
  029e08c  stb 3, 49(31)
  029e090  lfs 1, 64(31)
  029e094  sth 5, 52(31)
  029e098  lfs 2, 0(4)
  029e09c  bl 0x502578
  029e0a0  nop
  029e0a4  li 3, 2
  029e0a8  stfs 1, 64(31)
  029e0ac  stb 3, 32(31)
  029e0b0  b 0x29e0e0
  029e0b4  lis 3, 161
  029e0b8  lwz 3, 1800(3)
  029e0bc  cmpwi 3, 2
  029e0c0  bt 2, 0x29e0e0
  029e0c4  li 3, 1
  029e0c8  lhz 5, 52(31)
  029e0cc  li 4, 3
  029e0d0  rlwinm 5, 5, 0, 0, 30
  029e0d4  stb 3, 49(31)
  029e0d8  stb 4, 32(31)
  029e0dc  sth 5, 52(31)
  029e0e0  ld 0, 144(1)
  029e0e4  mtlr 0
  029e0e8  ld 31, 120(1)
  029e0ec  addi 1, 1, 128
  029e0f0  blr

# game/update/moby1856.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1856:   # 0x2c967c, 0xd4 bytes
  02c967c  stdu 1, -128(1)
  02c9680  mflr 0
  02c9684  std 0, 144(1)
  02c9688  std 31, 120(1)
  02c968c  ori 31, 3, 0
  02c9690  lis 4, 1
  02c9694  li 5, 0
  02c9698  bl 0x10675c
  02c969c  nop
  02c96a0  ori 4, 3, 0
  02c96a4  lbz 3, 32(31)
  02c96a8  cmpwi 3, 0
  02c96ac  bt 1, 0x2c96bc
  02c96b0  cmpwi 3, -1
  02c96b4  bf 1, 0x2c973c
  02c96b8  b 0x2c96d0
  02c96bc  cmpwi 3, 1
  02c96c0  bf 1, 0x2c96dc
  02c96c4  cmpwi 3, 2
  02c96c8  bf 1, 0x2c96fc
  02c96cc  b 0x2c973c
  02c96d0  li 3, 1
  02c96d4  stb 3, 32(31)
  02c96d8  b 0x2c973c
  02c96dc  cmpwi 4, 0
  02c96e0  bt 2, 0x2c973c
  02c96e4  lwz 3, 44(4)
  02c96e8  cmpwi 3, 0
  02c96ec  bf 1, 0x2c973c
  02c96f0  li 3, 2
  02c96f4  stb 3, 32(31)
  02c96f8  b 0x2c973c
  02c96fc  li 3, 0
  02c9700  li 4, 0
  02c9704  ori 5, 31, 0
  02c9708  bl 0x15d12c
  02c970c  nop
  02c9710  ori 3, 31, 0
  02c9714  bl 0x11a100
  02c9718  nop
  02c971c  ori 3, 31, 0
  02c9720  li 4, 1857
  02c9724  bl 0x11ad48
  02c9728  nop
  02c972c  ori 3, 31, 0
  02c9730  bl 0xefb38
  02c9734  nop
  02c9738  b 0x2c973c
  02c973c  ld 0, 144(1)
  02c9740  mtlr 0
  02c9744  ld 31, 120(1)
  02c9748  addi 1, 1, 128
  02c974c  blr

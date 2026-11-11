# game/update/moby1432.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1432_0027c5a4:   # 0x27c5a4, 0x14 bytes
  027c5a4  lis 3, 123
  027c5a8  lis 4, 1
  027c5ac  addic 3, 3, -22856
  027c5b0  stw 4, 72(3)
  027c5b4  blr

UpdateMoby_1432:   # 0x27c5b8, 0x2c bytes
  027c5b8  lbz 4, 32(3)
  027c5bc  cmpwi 4, 0
  027c5c0  bf 2, 0x27c5e0
  027c5c4  li 4, 1
  027c5c8  lhz 6, 52(3)
  027c5cc  li 5, 0
  027c5d0  stb 4, 32(3)
  027c5d4  ori 4, 6, 3
  027c5d8  stb 5, 49(3)
  027c5dc  sth 4, 52(3)
  027c5e0  blr

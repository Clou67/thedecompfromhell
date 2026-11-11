# game/update/moby1476.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1476_0028a988:   # 0x28a988, 0x14 bytes
  028a988  lis 3, 123
  028a98c  lis 4, 1
  028a990  addic 3, 3, -20716
  028a994  stw 4, 72(3)
  028a998  blr

UpdateMoby_1476:   # 0x28a9a0, 0x40 bytes
  028a9a0  lis 4, 161
  028a9a4  lwz 4, 1800(4)
  028a9a8  cmpwi 4, 2
  028a9ac  bf 2, 0x28a9c8
  028a9b0  li 4, 0
  028a9b4  lhz 5, 52(3)
  028a9b8  stb 4, 49(3)
  028a9bc  ori 4, 5, 1
  028a9c0  sth 4, 52(3)
  028a9c4  b 0x28a9dc
  028a9c8  li 4, 1
  028a9cc  lhz 5, 52(3)
  028a9d0  stb 4, 49(3)
  028a9d4  rlwinm 4, 5, 0, 0, 30
  028a9d8  sth 4, 52(3)
  028a9dc  blr

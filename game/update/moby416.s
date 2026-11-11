# game/update/moby416.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M416_0036762c:   # 0x36762c, 0x14 bytes
  036762c  lis 3, 132
  0367630  lis 4, 1
  0367634  addic 3, 3, 3612
  0367638  stw 4, 72(3)
  036763c  blr

UpdateMoby_416:   # 0x367640, 0x4 bytes
  0367640  blr

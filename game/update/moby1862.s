# game/update/moby1862.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1862:   # 0x2cd974, 0xf8 bytes
  02cd974  stdu 1, -128(1)
  02cd978  mflr 0
  02cd97c  std 0, 144(1)
  02cd980  std 31, 120(1)
  02cd984  ori 31, 3, 0
  02cd988  lis 4, 1
  02cd98c  li 5, 0
  02cd990  bl 0x10675c
  02cd994  nop
  02cd998  ori 4, 3, 0
  02cd99c  lbz 3, 32(31)
  02cd9a0  cmpwi 3, 0
  02cd9a4  bt 1, 0x2cd9b4
  02cd9a8  cmpwi 3, -1
  02cd9ac  bf 1, 0x2cda58
  02cd9b0  b 0x2cd9c8
  02cd9b4  cmpwi 3, 1
  02cd9b8  bf 1, 0x2cd9d4
  02cd9bc  cmpwi 3, 2
  02cd9c0  bf 1, 0x2cd9f4
  02cd9c4  b 0x2cda58
  02cd9c8  li 3, 1
  02cd9cc  stb 3, 32(31)
  02cd9d0  b 0x2cda58
  02cd9d4  cmpwi 4, 0
  02cd9d8  bt 2, 0x2cda58
  02cd9dc  lwz 3, 44(4)
  02cd9e0  cmpwi 3, 0
  02cd9e4  bf 1, 0x2cda58
  02cd9e8  li 3, 2
  02cd9ec  stb 3, 32(31)
  02cd9f0  b 0x2cda58
  02cd9f4  li 3, 0
  02cd9f8  li 4, 0
  02cd9fc  ori 5, 31, 0
  02cda00  bl 0x15d12c
  02cda04  nop
  02cda08  ori 3, 31, 0
  02cda0c  bl 0x11a100
  02cda10  nop
  02cda14  ori 3, 31, 0
  02cda18  li 9, 2
  02cda1c  li 4, 1864
  02cda20  li 5, 1
  02cda24  li 6, 1864
  02cda28  li 7, 1
  02cda2c  li 8, 11
  02cda30  bl 0x11aa78
  02cda34  nop
  02cda38  ori 3, 31, 0
  02cda3c  li 4, 1863
  02cda40  bl 0x11ad48
  02cda44  nop
  02cda48  ori 3, 31, 0
  02cda4c  bl 0xefb38
  02cda50  nop
  02cda54  b 0x2cda58
  02cda58  ld 0, 144(1)
  02cda5c  mtlr 0
  02cda60  ld 31, 120(1)
  02cda64  addi 1, 1, 128
  02cda68  blr

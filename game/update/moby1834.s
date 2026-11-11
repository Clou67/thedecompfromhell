# game/update/moby1834.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1834:   # 0x2c1abc, 0xf8 bytes
  02c1abc  stdu 1, -128(1)
  02c1ac0  mflr 0
  02c1ac4  std 0, 144(1)
  02c1ac8  std 31, 120(1)
  02c1acc  ori 31, 3, 0
  02c1ad0  lis 4, 1
  02c1ad4  li 5, 0
  02c1ad8  bl 0x10675c
  02c1adc  nop
  02c1ae0  ori 4, 3, 0
  02c1ae4  lbz 3, 32(31)
  02c1ae8  cmpwi 3, 0
  02c1aec  bt 1, 0x2c1afc
  02c1af0  cmpwi 3, -1
  02c1af4  bf 1, 0x2c1ba0
  02c1af8  b 0x2c1b10
  02c1afc  cmpwi 3, 1
  02c1b00  bf 1, 0x2c1b1c
  02c1b04  cmpwi 3, 2
  02c1b08  bf 1, 0x2c1b3c
  02c1b0c  b 0x2c1ba0
  02c1b10  li 3, 1
  02c1b14  stb 3, 32(31)
  02c1b18  b 0x2c1ba0
  02c1b1c  cmpwi 4, 0
  02c1b20  bt 2, 0x2c1ba0
  02c1b24  lwz 3, 44(4)
  02c1b28  cmpwi 3, 0
  02c1b2c  bf 1, 0x2c1ba0
  02c1b30  li 3, 2
  02c1b34  stb 3, 32(31)
  02c1b38  b 0x2c1ba0
  02c1b3c  li 3, 0
  02c1b40  li 4, 0
  02c1b44  ori 5, 31, 0
  02c1b48  bl 0x15d12c
  02c1b4c  nop
  02c1b50  ori 3, 31, 0
  02c1b54  bl 0x11a100
  02c1b58  nop
  02c1b5c  ori 3, 31, 0
  02c1b60  li 9, 2
  02c1b64  li 4, 1836
  02c1b68  li 5, 1
  02c1b6c  li 6, 1836
  02c1b70  li 7, 1
  02c1b74  li 8, 1
  02c1b78  bl 0x11aa78
  02c1b7c  nop
  02c1b80  ori 3, 31, 0
  02c1b84  li 4, 1835
  02c1b88  bl 0x11ad48
  02c1b8c  nop
  02c1b90  ori 3, 31, 0
  02c1b94  bl 0xefb38
  02c1b98  nop
  02c1b9c  b 0x2c1ba0
  02c1ba0  ld 0, 144(1)
  02c1ba4  mtlr 0
  02c1ba8  ld 31, 120(1)
  02c1bac  addi 1, 1, 128
  02c1bb0  blr

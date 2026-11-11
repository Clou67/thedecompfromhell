# game/update/moby1819.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1819_002c0b34:   # 0x2c0b34, 0x14 bytes
  02c0b34  lis 3, 123
  02c0b38  lis 4, 1
  02c0b3c  addic 3, 3, 32400
  02c0b40  stw 4, 72(3)
  02c0b44  blr

UpdateMoby_1819:   # 0x2c0b48, 0xf8 bytes
  02c0b48  stdu 1, -128(1)
  02c0b4c  mflr 0
  02c0b50  std 0, 144(1)
  02c0b54  std 31, 120(1)
  02c0b58  ori 31, 3, 0
  02c0b5c  lis 4, 1
  02c0b60  li 5, 0
  02c0b64  bl 0x10675c
  02c0b68  nop
  02c0b6c  ori 4, 3, 0
  02c0b70  lbz 3, 32(31)
  02c0b74  cmpwi 3, 0
  02c0b78  bt 1, 0x2c0b88
  02c0b7c  cmpwi 3, -1
  02c0b80  bf 1, 0x2c0c2c
  02c0b84  b 0x2c0b9c
  02c0b88  cmpwi 3, 1
  02c0b8c  bf 1, 0x2c0ba8
  02c0b90  cmpwi 3, 2
  02c0b94  bf 1, 0x2c0bc8
  02c0b98  b 0x2c0c2c
  02c0b9c  li 3, 1
  02c0ba0  stb 3, 32(31)
  02c0ba4  b 0x2c0c2c
  02c0ba8  cmpwi 4, 0
  02c0bac  bt 2, 0x2c0c2c
  02c0bb0  lwz 3, 44(4)
  02c0bb4  cmpwi 3, 0
  02c0bb8  bf 1, 0x2c0c2c
  02c0bbc  li 3, 2
  02c0bc0  stb 3, 32(31)
  02c0bc4  b 0x2c0c2c
  02c0bc8  li 3, 0
  02c0bcc  li 4, 0
  02c0bd0  ori 5, 31, 0
  02c0bd4  bl 0x15d12c
  02c0bd8  nop
  02c0bdc  ori 3, 31, 0
  02c0be0  bl 0x11a100
  02c0be4  nop
  02c0be8  ori 3, 31, 0
  02c0bec  li 9, 2
  02c0bf0  li 4, 1821
  02c0bf4  li 5, 1
  02c0bf8  li 6, 1821
  02c0bfc  li 7, 1
  02c0c00  li 8, 5
  02c0c04  bl 0x11aa78
  02c0c08  nop
  02c0c0c  ori 3, 31, 0
  02c0c10  li 4, 1820
  02c0c14  bl 0x11ad48
  02c0c18  nop
  02c0c1c  ori 3, 31, 0
  02c0c20  bl 0xefb38
  02c0c24  nop
  02c0c28  b 0x2c0c2c
  02c0c2c  ld 0, 144(1)
  02c0c30  mtlr 0
  02c0c34  ld 31, 120(1)
  02c0c38  addi 1, 1, 128
  02c0c3c  blr

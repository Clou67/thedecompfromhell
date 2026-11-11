# game/update/moby361.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_361:   # 0x354e58, 0xb0 bytes
  0354e58  stdu 1, -112(1)
  0354e5c  mflr 0
  0354e60  std 0, 128(1)
  0354e64  ori 4, 3, 0
  0354e68  lbz 5, 32(4)
  0354e6c  lwz 3, 120(4)
  0354e70  cmpwi 5, 0
  0354e74  cmpwi 1, 5, 1
  0354e78  cmpwi 6, 5, -1
  0354e7c  bt 1, 0x354e88
  0354e80  bf 25, 0x354ef8
  0354e84  b 0x354e90
  0354e88  bf 5, 0x354ebc
  0354e8c  b 0x354ef8
  0354e90  li 5, 255
  0354e94  li 6, 1
  0354e98  stb 5, 48(4)
  0354e9c  stb 6, 32(4)
  0354ea0  lwz 3, 0(3)
  0354ea4  cmpwi 3, -1
  0354ea8  bf 2, 0x354ef8
  0354eac  ori 3, 4, 0
  0354eb0  bl 0xefb38
  0354eb4  nop
  0354eb8  b 0x354ef8
  0354ebc  lis 4, 151
  0354ec0  lis 5, 17218
  0354ec4  addic 4, 4, -25376
  0354ec8  lwz 6, 136(4)
  0354ecc  srawi 7, 6, 31
  0354ed0  srwi 8, 7, 1
  0354ed4  xor 6, 8, 6
  0354ed8  subc 6, 6, 7
  0354edc  cmpw 6, 5
  0354ee0  bf 1, 0x354ef8
  0354ee4  lwz 5, 8324(4)
  0354ee8  cmpwi 5, 50
  0354eec  bt 2, 0x354ef8
  0354ef0  lwz 3, 0(3)
  0354ef4  sth 3, 8922(4)
  0354ef8  ld 0, 128(1)
  0354efc  mtlr 0
  0354f00  addi 1, 1, 112
  0354f04  blr

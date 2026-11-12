# game/update/moby251.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M251_CheckPlasmabotHatchAvailability:   # 0x316b98, 0xbc bytes
  0316b98  stdu 1, -128(1)
  0316b9c  mflr 0
  0316ba0  std 0, 144(1)
  0316ba4  lis 4, 164
  0316ba8  std 31, 120(1)
  0316bac  sldi 3, 3, 8
  0316bb0  li 31, 0
  0316bb4  lwz 4, -28512(4)
  0316bb8  addc 3, 4, 3
  0316bbc  clrldi 3, 3, 32
  0316bc0  std 30, 112(1)
  0316bc4  lbz 4, 32(3)
  0316bc8  lwz 30, 120(3)
  0316bcc  cmpwi 4, 0
  0316bd0  cmpwi 1, 4, 6
  0316bd4  bf 2, 0x316bf8
  0316bd8  ori 6, 3, 0
  0316bdc  li 7, 5
  0316be0  li 4, 1
  0316be4  li 5, 0
  0316be8  stb 7, 32(6)
  0316bec  bl 0xfdcf0
  0316bf0  nop
  0316bf4  b 0x316c00
  0316bf8  bf 6, 0x316c00
  0316bfc  li 31, 1
  0316c00  lis 3, 49
  0316c04  vspltisw 2, -1
  0316c08  lis 4, 114
  0316c0c  addi 3, 3, 27536
  0316c10  li 5, -3056
  0316c14  vslw 2, 2, 2
  0316c18  lvlx 3, 0, 3
  0316c1c  lvlx 4, 5, 4
  0316c20  vspltw 3, 3, 0
  0316c24  li 4, 8
  0316c28  ori 3, 31, 0
  0316c2c  vmaddfp 2, 4, 3, 2
  0316c30  vctsxs 2, 2, 0
  0316c34  vspltw 2, 2, 0
  0316c38  stvewx 2, 4, 30
  0316c3c  ld 0, 144(1)
  0316c40  mtlr 0
  0316c44  ld 30, 112(1)
  0316c48  ld 31, 120(1)
  0316c4c  addi 1, 1, 128
  0316c50  blr

M251_00316c54:   # 0x316c54, 0x14 bytes
  0316c54  lis 3, 128
  0316c58  lis 4, 1
  0316c5c  addic 3, 3, -1136
  0316c60  stw 4, 72(3)
  0316c64  blr

M251_00316c68:   # 0x316c68, 0xf8 bytes
  0316c68  stdu 1, -160(1)
  0316c6c  mflr 0
  0316c70  std 0, 176(1)
  0316c74  std 29, 136(1)
  0316c78  ori 29, 3, 0
  0316c7c  std 31, 152(1)
  0316c80  li 3, 251
  0316c84  std 30, 144(1)
  0316c88  ori 31, 6, 0
  0316c8c  std 28, 128(1)
  0316c90  ori 30, 5, 0
  0316c94  std 27, 120(1)
  0316c98  li 28, 160
  0316c9c  bl 0xefa28
  0316ca0  nop
  0316ca4  ori 27, 3, 0
  0316ca8  cmpwi 27, 0
  0316cac  bt 2, 0x316d38
  0316cb0  addc 4, 1, 28
  0316cb4  lbz 5, 48(29)
  0316cb8  li 3, 1
  0316cbc  std 30, 64(4)
  0316cc0  std 31, 72(4)
  0316cc4  stb 5, 48(27)
  0316cc8  lwz 31, 120(27)
  0316ccc  lbz 5, 48(29)
  0316cd0  stb 3, 49(27)
  0316cd4  sth 5, 50(27)
  0316cd8  lfs 1, 68(4)
  0316cdc  ori 3, 27, 0
  0316ce0  lfs 2, 76(4)
  0316ce4  stfs 1, 20(27)
  0316ce8  lfs 1, 64(29)
  0316cec  stfs 2, 28(27)
  0316cf0  lfs 2, 68(29)
  0316cf4  stfs 1, 64(27)
  0316cf8  lfs 1, 72(29)
  0316cfc  stfs 2, 68(27)
  0316d00  lfs 2, 76(29)
  0316d04  stfs 1, 72(27)
  0316d08  ld 5, 56(29)
  0316d0c  stfs 2, 76(27)
  0316d10  lfs 1, 64(4)
  0316d14  lfs 2, 72(4)
  0316d18  stfs 1, 16(27)
  0316d1c  stfs 2, 24(27)
  0316d20  std 5, 56(27)
  0316d24  bl 0xf31a8
  0316d28  nop
  0316d2c  li 3, -1
  0316d30  stw 29, 4(31)
  0316d34  stw 3, 0(31)
  0316d38  ori 3, 27, 0
  0316d3c  ld 0, 176(1)
  0316d40  mtlr 0
  0316d44  ld 27, 120(1)
  0316d48  ld 28, 128(1)
  0316d4c  ld 29, 136(1)
  0316d50  ld 30, 144(1)
  0316d54  ld 31, 152(1)
  0316d58  addi 1, 1, 160
  0316d5c  blr

UpdateMoby_251:   # 0x316d60, 0x50 bytes
  0316d60  stdu 1, -112(1)
  0316d64  mflr 0
  0316d68  std 0, 128(1)
  0316d6c  lwz 4, 120(3)
  0316d70  cmpwi 4, 0
  0316d74  bt 2, 0x316da0
  0316d78  lwz 4, 4(4)
  0316d7c  cmpwi 4, 0
  0316d80  bt 2, 0x316d98
  0316d84  lbz 4, 32(4)
  0316d88  cmpwi 4, 254
  0316d8c  cmpwi 1, 4, 253
  0316d90  bt 2, 0x316d98
  0316d94  bf 6, 0x316da0
  0316d98  bl 0xefb38
  0316d9c  nop
  0316da0  ld 0, 128(1)
  0316da4  mtlr 0
  0316da8  addi 1, 1, 112
  0316dac  blr

# game/update/moby236.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M236_00304bb8:   # 0x304bb8, 0xe0 bytes
  0304bb8  stdu 1, -144(1)
  0304bbc  mflr 0
  0304bc0  std 0, 160(1)
  0304bc4  std 31, 136(1)
  0304bc8  li 3, 236
  0304bcc  std 30, 128(1)
  0304bd0  std 29, 120(1)
  0304bd4  ori 31, 4, 0
  0304bd8  bl 0xefa28
  0304bdc  nop
  0304be0  ori 30, 3, 0
  0304be4  cmpwi 30, 0
  0304be8  bt 2, 0x304c78
  0304bec  li 3, 255
  0304bf0  lis 6, 48
  0304bf4  li 4, 1
  0304bf8  li 5, 0
  0304bfc  addi 6, 6, 19376
  0304c00  stb 3, 48(30)
  0304c04  sth 3, 50(30)
  0304c08  stb 4, 49(30)
  0304c0c  stb 5, 32(30)
  0304c10  ori 3, 30, 0
  0304c14  li 4, 255
  0304c18  lfs 1, 0(6)
  0304c1c  lfs 2, 44(30)
  0304c20  li 6, 48
  0304c24  lwz 29, 120(30)
  0304c28  li 5, 128
  0304c2c  fmuls 1, 2, 1
  0304c30  stb 6, 35(30)
  0304c34  li 6, 0
  0304c38  stfs 1, 44(30)
  0304c3c  bl 0xf1ec8
  0304c40  nop
  0304c44  lfs 1, 0(31)
  0304c48  li 3, -320
  0304c4c  stfs 1, 16(30)
  0304c50  lfs 1, 4(31)
  0304c54  lhz 4, 52(30)
  0304c58  stfs 1, 20(30)
  0304c5c  lfs 1, 8(31)
  0304c60  stw 3, 4(29)
  0304c64  ori 3, 4, 768
  0304c68  stfs 1, 24(30)
  0304c6c  lfs 1, 12(31)
  0304c70  stfs 1, 28(30)
  0304c74  sth 3, 52(30)
  0304c78  ori 3, 30, 0
  0304c7c  ld 0, 160(1)
  0304c80  mtlr 0
  0304c84  ld 29, 120(1)
  0304c88  ld 30, 128(1)
  0304c8c  ld 31, 136(1)
  0304c90  addi 1, 1, 144
  0304c94  blr

UpdateMoby_236:   # 0x304c98, 0x94 bytes
  0304c98  stdu 1, -128(1)
  0304c9c  mflr 0
  0304ca0  std 0, 144(1)
  0304ca4  std 31, 120(1)
  0304ca8  ori 31, 3, 0
  0304cac  lwz 5, 120(31)
  0304cb0  lwz 4, 4(5)
  0304cb4  lwz 3, 0(5)
  0304cb8  extsw 4, 4
  0304cbc  addc 3, 3, 4
  0304cc0  cmpwi 3, 4096
  0304cc4  cmpwi 1, 3, 0
  0304cc8  stw 3, 0(5)
  0304ccc  bf 1, 0x304ce4
  0304cd0  addic 3, 3, -4096
  0304cd4  addic 4, 4, -4096
  0304cd8  extsw 4, 4
  0304cdc  stw 3, 0(5)
  0304ce0  b 0x304cf8
  0304ce4  bf 4, 0x304cf8
  0304ce8  addic 3, 3, 4096
  0304cec  addic 4, 4, 4096
  0304cf0  extsw 4, 4
  0304cf4  stw 3, 0(5)
  0304cf8  ori 5, 4, 0
  0304cfc  lwz 3, 36(31)
  0304d00  li 4, 0
  0304d04  bl 0xf0838
  0304d08  nop
  0304d0c  lhz 3, 52(31)
  0304d10  ori 3, 3, 768
  0304d14  sth 3, 52(31)
  0304d18  ld 0, 144(1)
  0304d1c  mtlr 0
  0304d20  ld 31, 120(1)
  0304d24  addi 1, 1, 128
  0304d28  blr

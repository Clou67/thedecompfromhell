# game/update/moby1584.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1584:   # 0x2a0bc0, 0x1cc bytes
  02a0bc0  stdu 1, -144(1)
  02a0bc4  mflr 0
  02a0bc8  std 0, 160(1)
  02a0bcc  std 31, 136(1)
  02a0bd0  lbz 4, 32(3)
  02a0bd4  std 30, 128(1)
  02a0bd8  ori 31, 3, 0
  02a0bdc  lwz 30, 120(3)
  02a0be0  cmpwi 4, 0
  02a0be4  cmpwi 1, 4, 1
  02a0be8  cmpwi 6, 4, -1
  02a0bec  bt 1, 0x2a0bf8
  02a0bf0  bf 25, 0x2a0c5c
  02a0bf4  b 0x2a0c00
  02a0bf8  bf 5, 0x2a0c0c
  02a0bfc  b 0x2a0c5c
  02a0c00  li 3, 1
  02a0c04  stb 3, 32(31)
  02a0c08  b 0x2a0c5c
  02a0c0c  lfs 1, 16(31)
  02a0c10  lfs 2, 96(30)
  02a0c14  addic 3, 30, 32
  02a0c18  fsubs 1, 1, 2
  02a0c1c  addic 4, 1, 112
  02a0c20  addic 5, 30, 112
  02a0c24  addic 6, 31, 64
  02a0c28  stfs 1, 112(1)
  02a0c2c  lfs 1, 20(31)
  02a0c30  lfs 2, 100(30)
  02a0c34  fsubs 1, 1, 2
  02a0c38  stfs 1, 116(1)
  02a0c3c  lfs 1, 24(31)
  02a0c40  lfs 2, 104(30)
  02a0c44  fsubs 1, 1, 2
  02a0c48  stfs 1, 120(1)
  02a0c4c  lfs 1, 28(31)
  02a0c50  stfs 1, 124(1)
  02a0c54  bl 0x112900
  02a0c58  nop
  02a0c5c  lbz 3, 188(31)
  02a0c60  cmpwi 3, 0
  02a0c64  bt 2, 0x2a0cd8
  02a0c68  lwz 3, 128(30)
  02a0c6c  cmpwi 3, 0
  02a0c70  bt 2, 0x2a0cd8
  02a0c74  lwz 3, 132(30)
  02a0c78  cmpwi 3, 0
  02a0c7c  bf 2, 0x2a0cd8
  02a0c80  li 3, 1892
  02a0c84  bl 0xefa28
  02a0c88  nop
  02a0c8c  cmpwi 3, 0
  02a0c90  stw 3, 132(30)
  02a0c94  bt 2, 0x2a0cd8
  02a0c98  lhz 5, 50(31)
  02a0c9c  li 4, 1
  02a0ca0  sth 5, 50(3)
  02a0ca4  lwz 3, 132(30)
  02a0ca8  stb 4, 49(3)
  02a0cac  lwz 3, 132(30)
  02a0cb0  ld 4, 56(31)
  02a0cb4  std 4, 56(3)
  02a0cb8  lwz 3, 36(31)
  02a0cbc  lfs 1, 44(31)
  02a0cc0  lfs 2, 36(3)
  02a0cc4  fdivs 1, 1, 2
  02a0cc8  lwz 3, 132(30)
  02a0ccc  lfs 2, 44(3)
  02a0cd0  fmuls 1, 2, 1
  02a0cd4  stfs 1, 44(3)
  02a0cd8  lfs 1, 16(31)
  02a0cdc  stfs 1, 96(30)
  02a0ce0  lfs 1, 20(31)
  02a0ce4  stfs 1, 100(30)
  02a0ce8  lfs 1, 24(31)
  02a0cec  stfs 1, 104(30)
  02a0cf0  lfs 1, 28(31)
  02a0cf4  stfs 1, 108(30)
  02a0cf8  lfs 1, 64(31)
  02a0cfc  stfs 1, 112(30)
  02a0d00  lfs 1, 68(31)
  02a0d04  lwz 3, 132(30)
  02a0d08  stfs 1, 116(30)
  02a0d0c  lfs 1, 72(31)
  02a0d10  cmpwi 3, 0
  02a0d14  stfs 1, 120(30)
  02a0d18  lfs 1, 76(31)
  02a0d1c  stfs 1, 124(30)
  02a0d20  bt 2, 0x2a0d74
  02a0d24  lfs 1, 16(31)
  02a0d28  stfs 1, 16(3)
  02a0d2c  lfs 1, 20(31)
  02a0d30  stfs 1, 20(3)
  02a0d34  lfs 1, 24(31)
  02a0d38  stfs 1, 24(3)
  02a0d3c  lfs 1, 28(31)
  02a0d40  stfs 1, 28(3)
  02a0d44  lwz 3, 132(30)
  02a0d48  lfs 1, 64(31)
  02a0d4c  stfs 1, 64(3)
  02a0d50  lfs 1, 68(31)
  02a0d54  stfs 1, 68(3)
  02a0d58  lfs 1, 72(31)
  02a0d5c  stfs 1, 72(3)
  02a0d60  lfs 1, 76(31)
  02a0d64  stfs 1, 76(3)
  02a0d68  lwz 3, 132(30)
  02a0d6c  bl 0xf31a8
  02a0d70  nop
  02a0d74  ld 0, 160(1)
  02a0d78  mtlr 0
  02a0d7c  ld 30, 128(1)
  02a0d80  ld 31, 136(1)
  02a0d84  addi 1, 1, 144
  02a0d88  blr

M1584_002a0d8c:   # 0x2a0d8c, 0x60 bytes
  02a0d8c  lis 5, 165
  02a0d90  sldi 3, 3, 2
  02a0d94  addic 5, 5, -28284
  02a0d98  extsw 3, 3
  02a0d9c  lwzx 3, 5, 3
  02a0da0  cmpwi 3, 0
  02a0da4  bt 2, 0x2a0de8
  02a0da8  ori 5, 3, 0
  02a0dac  lis 3, 164
  02a0db0  lhz 6, 0(5)
  02a0db4  lwz 7, -28512(3)
  02a0db8  rlwinm 6, 6, 8, 9, 23
  02a0dbc  addc 6, 7, 6
  02a0dc0  clrldi 6, 6, 32
  02a0dc4  lhz 7, 166(6)
  02a0dc8  cmpwi 7, 1584
  02a0dcc  bf 2, 0x2a0dd4
  02a0dd0  stb 4, 188(6)
  02a0dd4  lhz 6, 0(5)
  02a0dd8  addic 5, 5, 2
  02a0ddc  extsh 6, 6
  02a0de0  cmpwi 6, 0
  02a0de4  bf 0, 0x2a0db0
  02a0de8  blr

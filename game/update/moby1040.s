# game/update/moby1040.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1040:   # 0x195a48, 0x360 bytes
  0195a48  stdu 1, -208(1)
  0195a4c  mflr 0
  0195a50  std 0, 224(1)
  0195a54  stfd 29, 184(1)
  0195a58  stfd 30, 192(1)
  0195a5c  stfd 31, 200(1)
  0195a60  std 31, 176(1)
  0195a64  ori 31, 3, 0
  0195a68  lis 4, 51
  0195a6c  std 30, 168(1)
  0195a70  li 5, 0
  0195a74  std 29, 160(1)
  0195a78  std 28, 152(1)
  0195a7c  std 27, 144(1)
  0195a80  std 26, 136(1)
  0195a84  lwz 30, 120(31)
  0195a88  bl 0x10675c
  0195a8c  nop
  0195a90  cmpwi 3, 0
  0195a94  bt 2, 0x195c4c
  0195a98  lis 3, 25
  0195a9c  li 27, 0
  0195aa0  addi 3, 3, 23100
  0195aa4  addic 29, 31, 16
  0195aa8  lfs 30, 0(3)
  0195aac  lfs 31, 4(3)
  0195ab0  lis 4, 116
  0195ab4  lis 5, 114
  0195ab8  lis 6, 116
  0195abc  addic 3, 1, 112
  0195ac0  lfs 1, 620(4)
  0195ac4  lfs 2, -3052(5)
  0195ac8  lfs 3, 624(6)
  0195acc  fmuls 1, 1, 2
  0195ad0  fmuls 2, 3, 2
  0195ad4  bl 0xfea60
  0195ad8  nop
  0195adc  lis 3, 116
  0195ae0  lis 4, 116
  0195ae4  lfs 1, 652(3)
  0195ae8  lfs 2, 656(4)
  0195aec  bl 0xfcbe8
  0195af0  nop
  0195af4  li 3, 2
  0195af8  fmr 29, 1
  0195afc  bl 0xfc620
  0195b00  nop
  0195b04  cmpwi 3, 0
  0195b08  bt 2, 0x195b4c
  0195b0c  lis 3, 116
  0195b10  fmr 1, 31
  0195b14  lis 4, 116
  0195b18  fmr 2, 30
  0195b1c  lwz 3, 636(3)
  0195b20  lwz 4, 640(4)
  0195b24  extsw 28, 3
  0195b28  extsw 26, 4
  0195b2c  bl 0xfcbe8
  0195b30  nop
  0195b34  ori 3, 28, 0
  0195b38  ori 4, 26, 0
  0195b3c  bl 0x5027bc
  0195b40  nop
  0195b44  ori 28, 3, 0
  0195b48  b 0x195b88
  0195b4c  lis 3, 116
  0195b50  fmr 1, 31
  0195b54  lis 4, 116
  0195b58  fmr 2, 30
  0195b5c  lwz 3, 644(3)
  0195b60  lwz 4, 648(4)
  0195b64  extsw 28, 3
  0195b68  extsw 26, 4
  0195b6c  bl 0xfcbe8
  0195b70  nop
  0195b74  ori 3, 28, 0
  0195b78  ori 4, 26, 0
  0195b7c  bl 0x5027bc
  0195b80  nop
  0195b84  ori 28, 3, 0
  0195b88  lis 4, 116
  0195b8c  li 3, 255
  0195b90  lwz 4, 632(4)
  0195b94  clrlwi 26, 4, 24
  0195b98  bl 0xfc620
  0195b9c  nop
  0195ba0  clrlwi 8, 3, 24
  0195ba4  fmr 1, 29
  0195ba8  addic 4, 1, 112
  0195bac  ori 3, 29, 0
  0195bb0  ori 5, 28, 0
  0195bb4  ori 7, 26, 0
  0195bb8  li 9, 0
  0195bbc  bl 0x131100
  0195bc0  nop
  0195bc4  addic 27, 27, 1
  0195bc8  cmpwi 27, 40
  0195bcc  bt 0, 0x195ab0
  0195bd0  li 4, 0
  0195bd4  li 3, 1
  0195bd8  ori 5, 31, 0
  0195bdc  bl 0x15d12c
  0195be0  nop
  0195be4  lwz 4, 96(30)
  0195be8  cmpwi 4, -1
  0195bec  bt 2, 0x195c34
  0195bf0  sldi 3, 4, 7
  0195bf4  sldi 6, 4, 4
  0195bf8  lis 5, 150
  0195bfc  subc 3, 3, 6
  0195c00  addic 5, 5, 14312
  0195c04  extsw 3, 3
  0195c08  lwzx 5, 5, 3
  0195c0c  cmpw 5, 31
  0195c10  bf 2, 0x195c34
  0195c14  lis 5, 150
  0195c18  addic 5, 5, 14292
  0195c1c  lbzx 3, 5, 3
  0195c20  cmpwi 3, 0
  0195c24  bt 2, 0x195c34
  0195c28  extsw 3, 4
  0195c2c  bl 0x15cdb0
  0195c30  nop
  0195c34  li 4, -1
  0195c38  ori 3, 31, 0
  0195c3c  stw 4, 96(30)
  0195c40  bl 0xefb38
  0195c44  nop
  0195c48  b 0x195d74
  0195c4c  lbz 3, 32(31)
  0195c50  cmpwi 3, 0
  0195c54  cmpwi 1, 3, 1
  0195c58  cmpwi 6, 3, -1
  0195c5c  bt 1, 0x195c68
  0195c60  bf 25, 0x195d40
  0195c64  b 0x195c70
  0195c68  bf 5, 0x195cc4
  0195c6c  b 0x195d40
  0195c70  ori 3, 31, 0
  0195c74  li 4, 128
  0195c78  li 5, 128
  0195c7c  li 6, 128
  0195c80  bl 0xf1ec8
  0195c84  nop
  0195c88  lis 3, 116
  0195c8c  lwz 4, 36(31)
  0195c90  addic 5, 30, 32
  0195c94  lhz 6, 52(31)
  0195c98  li 7, 1
  0195c9c  lfs 1, 616(3)
  0195ca0  lfs 2, 36(4)
  0195ca4  ori 3, 6, 32
  0195ca8  stw 5, 0(30)
  0195cac  fmuls 1, 2, 1
  0195cb0  li 4, -1
  0195cb4  stb 7, 32(31)
  0195cb8  sth 3, 52(31)
  0195cbc  stw 4, 96(30)
  0195cc0  stfs 1, 44(31)
  0195cc4  lis 3, 25
  0195cc8  lis 4, 116
  0195ccc  addi 3, 3, 23100
  0195cd0  lis 29, 114
  0195cd4  lfs 31, 8(3)
  0195cd8  lfs 2, 604(4)
  0195cdc  lfs 1, 64(31)
  0195ce0  fmuls 2, 2, 31
  0195ce4  lfs 3, -3052(29)
  0195ce8  fmuls 2, 2, 3
  0195cec  bl 0x502578
  0195cf0  nop
  0195cf4  lis 3, 116
  0195cf8  stfs 1, 64(31)
  0195cfc  lfs 1, 68(31)
  0195d00  lfs 2, -3052(29)
  0195d04  lfs 3, 608(3)
  0195d08  fmuls 3, 3, 31
  0195d0c  fmuls 2, 3, 2
  0195d10  bl 0x502578
  0195d14  nop
  0195d18  lis 3, 116
  0195d1c  stfs 1, 68(31)
  0195d20  lfs 1, 72(31)
  0195d24  lfs 2, -3052(29)
  0195d28  lfs 3, 612(3)
  0195d2c  fmuls 3, 3, 31
  0195d30  fmuls 2, 3, 2
  0195d34  bl 0x502578
  0195d38  nop
  0195d3c  stfs 1, 72(31)
  0195d40  ori 3, 31, 0
  0195d44  lwz 4, 96(30)
  0195d48  extsw 4, 4
  0195d4c  bl 0x15cc7c
  0195d50  nop
  0195d54  cmpwi 3, 0
  0195d58  bf 2, 0x195d74
  0195d5c  li 3, 0
  0195d60  li 4, 4
  0195d64  ori 5, 31, 0
  0195d68  bl 0x15d12c
  0195d6c  nop
  0195d70  stw 3, 96(30)
  0195d74  ld 0, 224(1)
  0195d78  mtlr 0
  0195d7c  lfd 29, 184(1)
  0195d80  lfd 30, 192(1)
  0195d84  lfd 31, 200(1)
  0195d88  ld 26, 136(1)
  0195d8c  ld 27, 144(1)
  0195d90  ld 28, 152(1)
  0195d94  ld 29, 160(1)
  0195d98  ld 30, 168(1)
  0195d9c  ld 31, 176(1)
  0195da0  addi 1, 1, 208
  0195da4  blr

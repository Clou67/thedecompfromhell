# game/update/moby65.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_65:   # 0x401c48, 0x19c bytes
  0401c48  stdu 1, -144(1)
  0401c4c  mflr 0
  0401c50  std 0, 160(1)
  0401c54  std 31, 136(1)
  0401c58  lbz 4, 32(3)
  0401c5c  std 30, 128(1)
  0401c60  ori 31, 3, 0
  0401c64  lwz 30, 120(3)
  0401c68  cmpwi 4, 0
  0401c6c  cmpwi 1, 4, 2
  0401c70  cmpwi 6, 4, 1
  0401c74  std 29, 120(1)
  0401c78  cmpwi 7, 4, -1
  0401c7c  bt 1, 0x401c88
  0401c80  bf 29, 0x401dc8
  0401c84  b 0x401c94
  0401c88  bf 25, 0x401dc8
  0401c8c  bf 5, 0x401d38
  0401c90  b 0x401dc8
  0401c94  li 3, 1
  0401c98  lhz 4, 52(31)
  0401c9c  lfs 1, 72(31)
  0401ca0  rlwinm 4, 4, 0, 16, 16
  0401ca4  stb 3, 32(31)
  0401ca8  cmpwi 4, 0
  0401cac  stfs 1, 4(30)
  0401cb0  bf 2, 0x401dc8
  0401cb4  li 3, 65
  0401cb8  bl 0xefa28
  0401cbc  nop
  0401cc0  lhz 4, 50(31)
  0401cc4  sth 4, 50(3)
  0401cc8  lbz 5, 48(31)
  0401ccc  lis 4, 0
  0401cd0  stb 5, 48(3)
  0401cd4  ori 4, 4, 32768
  0401cd8  lhz 5, 52(31)
  0401cdc  or 4, 5, 4
  0401ce0  sth 4, 52(3)
  0401ce4  lfs 1, 16(31)
  0401ce8  stfs 1, 16(3)
  0401cec  lfs 1, 20(31)
  0401cf0  stfs 1, 20(3)
  0401cf4  lfs 1, 24(31)
  0401cf8  stfs 1, 24(3)
  0401cfc  lfs 1, 28(31)
  0401d00  stfs 1, 28(3)
  0401d04  lfs 1, 64(31)
  0401d08  stfs 1, 64(3)
  0401d0c  lfs 1, 68(31)
  0401d10  stfs 1, 68(3)
  0401d14  lfs 1, 72(31)
  0401d18  stfs 1, 72(3)
  0401d1c  lfs 1, 76(31)
  0401d20  stfs 1, 76(3)
  0401d24  stw 3, 8(30)
  0401d28  lwz 3, 120(3)
  0401d2c  lfs 1, 72(31)
  0401d30  stfs 1, 4(3)
  0401d34  b 0x401dc8
  0401d38  lis 3, 64
  0401d3c  lhz 4, 52(31)
  0401d40  addi 3, 3, 7224
  0401d44  lfs 1, 0(3)
  0401d48  rlwinm 3, 4, 0, 16, 16
  0401d4c  cmpwi 3, 0
  0401d50  bf 2, 0x401d68
  0401d54  fmr 2, 1
  0401d58  lfs 1, 4(30)
  0401d5c  bl 0x502578
  0401d60  nop
  0401d64  b 0x401d78
  0401d68  fmr 2, 1
  0401d6c  lfs 1, 4(30)
  0401d70  bl 0x5025e0
  0401d74  nop
  0401d78  lis 3, 64
  0401d7c  lis 4, 114
  0401d80  addi 29, 3, 7224
  0401d84  lis 3, 114
  0401d88  ori 5, 30, 0
  0401d8c  lfs 2, 4(29)
  0401d90  lfs 3, -3048(3)
  0401d94  lfs 4, 8(29)
  0401d98  addic 3, 31, 72
  0401d9c  fmuls 2, 3, 2
  0401da0  lfs 5, -3052(4)
  0401da4  fmuls 4, 5, 4
  0401da8  fmr 3, 2
  0401dac  bl 0x10a2e0
  0401db0  nop
  0401db4  lfs 2, 12(29)
  0401db8  fcmpu 0, 1, 2
  0401dbc  bf 2, 0x401dc8
  0401dc0  li 3, 3
  0401dc4  stb 3, 32(31)
  0401dc8  ld 0, 160(1)
  0401dcc  mtlr 0
  0401dd0  ld 29, 120(1)
  0401dd4  ld 30, 128(1)
  0401dd8  ld 31, 136(1)
  0401ddc  addi 1, 1, 144
  0401de0  blr

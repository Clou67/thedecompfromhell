# sdk/libfios/fios_media.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Z41__static_initialization_and_destruction_0ii:   # 0x5198dc, 0x40 bytes
  05198dc  cmpwi 7, 3, 1
  05198e0  li 0, 0
  05198e4  ori 0, 0, 65535
  05198e8  bclr 4, 30
  05198ec  cmpw 7, 4, 0
  05198f0  li 11, 0
  05198f4  li 0, 0
  05198f8  bclr 4, 30
  05198fc  lwz 9, -30808(2)
  0519900  stw 11, 32(9)
  0519904  stw 0, 16(9)
  0519908  stw 0, 0(9)
  051990c  stw 0, 8(9)
  0519910  stw 0, 12(9)
  0519914  std 11, 24(9)
  0519918  blr

FUN_0051991c:   # 0x51991c, 0x10 bytes
  051991c  li 4, -1
  0519920  li 3, 1
  0519924  clrldi 4, 4, 48
  0519928  b 0x5198dc

FUN_0051992c:   # 0x51992c, 0x10 bytes
  051992c  li 4, -1
  0519930  li 3, 0
  0519934  clrldi 4, 4, 48
  0519938  b 0x5198dc

_ZNK4cell4fios5media14getIdentifiersEPjPPKPKc:   # 0x51993c, 0x70 bytes
  051993c  stdu 1, -144(1)
  0519940  mflr 0
  0519944  std 28, 112(1)
  0519948  mr 28, 4
  051994c  std 30, 128(1)
  0519950  std 31, 136(1)
  0519954  mr 30, 5
  0519958  std 29, 120(1)
  051995c  std 0, 160(1)
  0519960  mr 31, 3
  0519964  bl 0x604710
  0519968  nop
  051996c  cmpwi 7, 28, 0
  0519970  cmpwi 6, 30, 0
  0519974  bt 30, 0x519980
  0519978  lwz 0, 80(31)
  051997c  stw 0, 0(28)
  0519980  bt 26, 0x51998c
  0519984  lwz 0, 88(31)
  0519988  stw 0, 0(30)
  051998c  ld 0, 160(1)
  0519990  ld 28, 112(1)
  0519994  ld 29, 120(1)
  0519998  mtlr 0
  051999c  ld 30, 128(1)
  05199a0  ld 31, 136(1)
  05199a4  addi 1, 1, 144
  05199a8  blr

_ZN4cell4fios5media19initializeClassLockEv:   # 0x5199ac, 0xf8 bytes
  05199ac  stdu 1, -144(1)
  05199b0  mflr 0
  05199b4  std 28, 112(1)
  05199b8  lwz 28, -30808(2)
  05199bc  std 0, 160(1)
  05199c0  std 29, 120(1)
  05199c4  std 30, 128(1)
  05199c8  std 31, 136(1)
  05199cc  lwz 0, 0(28)
  05199d0  isync
  05199d4  cmpwi 7, 0, 0
  05199d8  bt 30, 0x5199fc
  05199dc  ld 0, 160(1)
  05199e0  ld 28, 112(1)
  05199e4  ld 29, 120(1)
  05199e8  mtlr 0
  05199ec  ld 30, 128(1)
  05199f0  ld 31, 136(1)
  05199f4  addi 1, 1, 144
  05199f8  blr
  05199fc  lis 4, 4162
  0519a00  li 5, 3
  0519a04  li 3, 40
  0519a08  bl 0x51080c
  0519a0c  nop
  0519a10  lwz 4, -30804(2)
  0519a14  mr 29, 3
  0519a18  mr 31, 3
  0519a1c  mr 30, 3
  0519a20  clrldi 3, 3, 32
  0519a24  bl 0x52d370
  0519a28  nop
  0519a2c  mr 11, 28
  0519a30  mr 9, 28
  0519a34  b 0x519a4c
  0519a38  stwcx. 29, 0, 11
  0519a3c  mfocrf 0, 128
  0519a40  rlwinm 0, 0, 0, 2, 2
  0519a44  cmpwi 7, 0, 0
  0519a48  bf 30, 0x5199dc
  0519a4c  lwarx 0, 0, 9
  0519a50  cmpwi 7, 0, 0
  0519a54  bt 30, 0x519a38
  0519a58  cmpwi 7, 30, 0
  0519a5c  bt 30, 0x5199dc
  0519a60  clrldi 29, 31, 32
  0519a64  mr 3, 29
  0519a68  bl 0x52df14
  0519a6c  nop
  0519a70  mr 3, 29
  0519a74  lis 4, 4162
  0519a78  li 5, 3
  0519a7c  bl 0x510704
  0519a80  nop
  0519a84  ld 0, 160(1)
  0519a88  ld 28, 112(1)
  0519a8c  ld 29, 120(1)
  0519a90  mtlr 0
  0519a94  ld 30, 128(1)
  0519a98  ld 31, 136(1)
  0519a9c  addi 1, 1, 144
  0519aa0  blr

FUN_00519aa4:   # 0x519aa4, 0x1e8 bytes
  0519aa4  stdu 1, -160(1)
  0519aa8  mflr 0
  0519aac  std 31, 152(1)
  0519ab0  mr 31, 3
  0519ab4  addi 3, 3, 4
  0519ab8  std 26, 112(1)
  0519abc  clrldi 3, 3, 32
  0519ac0  clrldi 26, 4, 32
  0519ac4  std 27, 120(1)
  0519ac8  std 28, 128(1)
  0519acc  mr 27, 4
  0519ad0  std 29, 136(1)
  0519ad4  std 30, 144(1)
  0519ad8  std 0, 176(1)
  0519adc  bl 0x5106cc
  0519ae0  nop
  0519ae4  lwz 0, -30800(2)
  0519ae8  addi 3, 31, 16
  0519aec  lwz 4, -30796(2)
  0519af0  clrldi 28, 31, 32
  0519af4  clrldi 3, 3, 32
  0519af8  stw 0, 0(31)
  0519afc  bl 0x52d370
  0519b00  nop
  0519b04  li 30, 0
  0519b08  li 11, 0
  0519b0c  li 0, 1
  0519b10  li 9, 4
  0519b14  mr 3, 28
  0519b18  addi 29, 31, 104
  0519b1c  stw 11, 68(31)
  0519b20  stw 0, 80(31)
  0519b24  stw 9, 84(31)
  0519b28  stw 11, 56(31)
  0519b2c  stw 11, 60(31)
  0519b30  stw 11, 64(31)
  0519b34  std 30, 72(31)
  0519b38  stw 30, 88(31)
  0519b3c  stw 30, 92(31)
  0519b40  stw 30, 96(31)
  0519b44  bl 0x604710
  0519b48  nop
  0519b4c  lwz 28, -30792(2)
  0519b50  lis 0, 28004
  0519b54  lis 5, 4097
  0519b58  ori 0, 0, 26977
  0519b5c  ori 5, 5, 258
  0519b60  stw 0, 8(31)
  0519b64  std 30, 40(29)
  0519b68  std 30, 0(29)
  0519b6c  std 30, 8(29)
  0519b70  std 30, 16(29)
  0519b74  std 30, 24(29)
  0519b78  std 30, 32(29)
  0519b7c  lwz 10, 8(28)
  0519b80  li 4, 16
  0519b84  li 6, 0
  0519b88  mr 3, 10
  0519b8c  li 7, 0
  0519b90  lwz 9, 0(10)
  0519b94  lwz 11, 0(9)
  0519b98  lwz 0, 0(11)
  0519b9c  std 2, 40(1)
  0519ba0  lwz 2, 4(11)
  0519ba4  mtctr 0
  0519ba8  bctrl
  0519bac  ld 2, 40(1)
  0519bb0  cmpwi 6, 27, 0
  0519bb4  mr 9, 3
  0519bb8  mr 3, 26
  0519bbc  cmpwi 7, 9, 0
  0519bc0  clrldi 11, 9, 32
  0519bc4  stw 9, 88(31)
  0519bc8  bt 30, 0x519bdc
  0519bcc  stw 30, 12(11)
  0519bd0  stw 30, 0(11)
  0519bd4  stw 30, 4(11)
  0519bd8  stw 30, 8(11)
  0519bdc  bt 26, 0x519c64
  0519be0  lwz 29, 8(28)
  0519be4  bl 0x5c8510
  0519be8  nop
  0519bec  lwz 28, 88(31)
  0519bf0  addi 4, 3, 1
  0519bf4  lis 5, 4098
  0519bf8  clrldi 4, 4, 32
  0519bfc  lwz 11, 0(29)
  0519c00  ori 5, 5, 256
  0519c04  mr 3, 29
  0519c08  li 6, 0
  0519c0c  li 7, 0
  0519c10  lwz 9, 0(11)
  0519c14  lwz 0, 0(9)
  0519c18  std 2, 40(1)
  0519c1c  mtctr 0
  0519c20  lwz 2, 4(9)
  0519c24  bctrl
  0519c28  ld 2, 40(1)
  0519c2c  mr 0, 3
  0519c30  mr 3, 26
  0519c34  cmpwi 7, 0, 0
  0519c38  stw 0, 0(28)
  0519c3c  bt 30, 0x519c64
  0519c40  bl 0x5c8510
  0519c44  nop
  0519c48  lwz 9, 88(31)
  0519c4c  addi 5, 3, 1
  0519c50  mr 4, 26
  0519c54  clrldi 5, 5, 32
  0519c58  lwz 3, 0(9)
  0519c5c  bl 0x5193cc
  0519c60  nop
  0519c64  ld 0, 176(1)
  0519c68  ld 26, 112(1)
  0519c6c  ld 27, 120(1)
  0519c70  mtlr 0
  0519c74  ld 28, 128(1)
  0519c78  ld 29, 136(1)
  0519c7c  ld 30, 144(1)
  0519c80  ld 31, 152(1)
  0519c84  addi 1, 1, 160
  0519c88  blr

FUN_00519c8c:   # 0x519c8c, 0x1e8 bytes
  0519c8c  stdu 1, -160(1)
  0519c90  mflr 0
  0519c94  std 31, 152(1)
  0519c98  mr 31, 3
  0519c9c  addi 3, 3, 4
  0519ca0  std 26, 112(1)
  0519ca4  clrldi 3, 3, 32
  0519ca8  clrldi 26, 4, 32
  0519cac  std 27, 120(1)
  0519cb0  std 28, 128(1)
  0519cb4  mr 27, 4
  0519cb8  std 29, 136(1)
  0519cbc  std 30, 144(1)
  0519cc0  std 0, 176(1)
  0519cc4  bl 0x5106cc
  0519cc8  nop
  0519ccc  lwz 0, -30800(2)
  0519cd0  addi 3, 31, 16
  0519cd4  lwz 4, -30796(2)
  0519cd8  clrldi 28, 31, 32
  0519cdc  clrldi 3, 3, 32
  0519ce0  stw 0, 0(31)
  0519ce4  bl 0x52d370
  0519ce8  nop
  0519cec  li 30, 0
  0519cf0  li 11, 0
  0519cf4  li 0, 1
  0519cf8  li 9, 4
  0519cfc  mr 3, 28
  0519d00  addi 29, 31, 104
  0519d04  stw 11, 68(31)
  0519d08  stw 0, 80(31)
  0519d0c  stw 9, 84(31)
  0519d10  stw 11, 56(31)
  0519d14  stw 11, 60(31)
  0519d18  stw 11, 64(31)
  0519d1c  std 30, 72(31)
  0519d20  stw 30, 88(31)
  0519d24  stw 30, 92(31)
  0519d28  stw 30, 96(31)
  0519d2c  bl 0x604710
  0519d30  nop
  0519d34  lwz 28, -30792(2)
  0519d38  lis 0, 28004
  0519d3c  lis 5, 4097
  0519d40  ori 0, 0, 26977
  0519d44  ori 5, 5, 258
  0519d48  stw 0, 8(31)
  0519d4c  std 30, 40(29)
  0519d50  std 30, 0(29)
  0519d54  std 30, 8(29)
  0519d58  std 30, 16(29)
  0519d5c  std 30, 24(29)
  0519d60  std 30, 32(29)
  0519d64  lwz 10, 8(28)
  0519d68  li 4, 16
  0519d6c  li 6, 0
  0519d70  mr 3, 10
  0519d74  li 7, 0
  0519d78  lwz 9, 0(10)
  0519d7c  lwz 11, 0(9)
  0519d80  lwz 0, 0(11)
  0519d84  std 2, 40(1)
  0519d88  lwz 2, 4(11)
  0519d8c  mtctr 0
  0519d90  bctrl
  0519d94  ld 2, 40(1)
  0519d98  cmpwi 6, 27, 0
  0519d9c  mr 9, 3
  0519da0  mr 3, 26
  0519da4  cmpwi 7, 9, 0
  0519da8  clrldi 11, 9, 32
  0519dac  stw 9, 88(31)
  0519db0  bt 30, 0x519dc4
  0519db4  stw 30, 12(11)
  0519db8  stw 30, 0(11)
  0519dbc  stw 30, 4(11)
  0519dc0  stw 30, 8(11)
  0519dc4  bt 26, 0x519e4c
  0519dc8  lwz 29, 8(28)
  0519dcc  bl 0x5c8510
  0519dd0  nop
  0519dd4  lwz 28, 88(31)
  0519dd8  addi 4, 3, 1
  0519ddc  lis 5, 4098
  0519de0  clrldi 4, 4, 32
  0519de4  lwz 11, 0(29)
  0519de8  ori 5, 5, 256
  0519dec  mr 3, 29
  0519df0  li 6, 0
  0519df4  li 7, 0
  0519df8  lwz 9, 0(11)
  0519dfc  lwz 0, 0(9)
  0519e00  std 2, 40(1)
  0519e04  mtctr 0
  0519e08  lwz 2, 4(9)
  0519e0c  bctrl
  0519e10  ld 2, 40(1)
  0519e14  mr 0, 3
  0519e18  mr 3, 26
  0519e1c  cmpwi 7, 0, 0
  0519e20  stw 0, 0(28)
  0519e24  bt 30, 0x519e4c
  0519e28  bl 0x5c8510
  0519e2c  nop
  0519e30  lwz 9, 88(31)
  0519e34  addi 5, 3, 1
  0519e38  mr 4, 26
  0519e3c  clrldi 5, 5, 32
  0519e40  lwz 3, 0(9)
  0519e44  bl 0x5193cc
  0519e48  nop
  0519e4c  ld 0, 176(1)
  0519e50  ld 26, 112(1)
  0519e54  ld 27, 120(1)
  0519e58  mtlr 0
  0519e5c  ld 28, 128(1)
  0519e60  ld 29, 136(1)
  0519e64  ld 30, 144(1)
  0519e68  ld 31, 152(1)
  0519e6c  addi 1, 1, 160
  0519e70  blr

FUN_00519e74:   # 0x519e74, 0x58 bytes
  0519e74  stdu 1, -144(1)
  0519e78  mflr 0
  0519e7c  std 30, 128(1)
  0519e80  mr 30, 5
  0519e84  std 31, 136(1)
  0519e88  mr 31, 3
  0519e8c  std 0, 160(1)
  0519e90  std 29, 120(1)
  0519e94  bl 0x519c8c
  0519e98  cmpwi 7, 30, 0
  0519e9c  lwz 0, -30788(2)
  0519ea0  stw 30, 64(31)
  0519ea4  stw 0, 0(31)
  0519ea8  bt 30, 0x519eb0
  0519eac  stw 31, 60(30)
  0519eb0  ld 0, 160(1)
  0519eb4  ld 29, 120(1)
  0519eb8  ld 30, 128(1)
  0519ebc  mtlr 0
  0519ec0  ld 31, 136(1)
  0519ec4  addi 1, 1, 144
  0519ec8  blr

FUN_00519ecc:   # 0x519ecc, 0x58 bytes
  0519ecc  stdu 1, -144(1)
  0519ed0  mflr 0
  0519ed4  std 30, 128(1)
  0519ed8  mr 30, 5
  0519edc  std 31, 136(1)
  0519ee0  mr 31, 3
  0519ee4  std 0, 160(1)
  0519ee8  std 29, 120(1)
  0519eec  bl 0x519c8c
  0519ef0  cmpwi 7, 30, 0
  0519ef4  lwz 0, -30788(2)
  0519ef8  stw 30, 64(31)
  0519efc  stw 0, 0(31)
  0519f00  bt 30, 0x519f08
  0519f04  stw 31, 60(30)
  0519f08  ld 0, 160(1)
  0519f0c  ld 29, 120(1)
  0519f10  ld 30, 128(1)
  0519f14  mtlr 0
  0519f18  ld 31, 136(1)
  0519f1c  addi 1, 1, 144
  0519f20  blr

_ZN4cell4fios5media13normalizePathEPKcPc:   # 0x519f24, 0x200 bytes
  0519f24  lbz 0, 1(3)
  0519f28  mr 7, 3
  0519f2c  mr 8, 4
  0519f30  cmpwi 7, 0, 58
  0519f34  addi 6, 4, 256
  0519f38  bt 30, 0x519ffc
  0519f3c  li 10, 47
  0519f40  li 0, 47
  0519f44  b 0x519f74
  0519f48  clrldi 9, 8, 32
  0519f4c  addi 8, 8, 1
  0519f50  stb 10, 0(9)
  0519f54  cmplw 7, 8, 6
  0519f58  bf- 28, 0x51a018
  0519f5c  lbz 10, 0(7)
  0519f60  extsb 11, 10
  0519f64  cmpwi 7, 11, 0
  0519f68  mr 0, 11
  0519f6c  bt 30, 0x519fe0
  0519f70  addi 7, 7, 1
  0519f74  cmpwi 7, 0, 92
  0519f78  bt 30, 0x519f84
  0519f7c  cmpwi 7, 0, 47
  0519f80  bf 30, 0x519f48
  0519f84  lbz 0, 0(7)
  0519f88  xori 9, 0, 47
  0519f8c  xori 11, 0, 92
  0519f90  clrldi 9, 9, 56
  0519f94  clrldi 11, 11, 56
  0519f98  addi 9, 9, -1
  0519f9c  addi 11, 11, -1
  0519fa0  clrldi 10, 0, 56
  0519fa4  rldicl 9, 9, 1, 63
  0519fa8  rldicl 11, 11, 1, 63
  0519fac  addi 10, 10, -1
  0519fb0  or 9, 9, 11
  0519fb4  rldicl 10, 10, 1, 63
  0519fb8  or 9, 9, 10
  0519fbc  cmpwi 7, 9, 0
  0519fc0  bf- 30, 0x519f54
  0519fc4  cmpwi 7, 0, 46
  0519fc8  bt- 30, 0x51a024
  0519fcc  clrldi 9, 8, 32
  0519fd0  li 0, 47
  0519fd4  addi 8, 8, 1
  0519fd8  stb 0, 0(9)
  0519fdc  b 0x519f54
  0519fe0  cmpw 7, 8, 4
  0519fe4  bt- 30, 0x51a104
  0519fe8  li 3, 1
  0519fec  clrldi 9, 8, 32
  0519ff0  extsw 3, 3
  0519ff4  stb 11, 0(9)
  0519ff8  blr
  0519ffc  lbz 3, 0(3)
  051a000  rlwinm 9, 3, 26, 1, 31
  051a004  rotlwi 9, 9, 6
  051a008  addi 9, 9, -65
  051a00c  clrlwi 9, 9, 24
  051a010  cmplwi 7, 9, 25
  051a014  bt 29, 0x519f3c
  051a018  li 3, 0
  051a01c  extsw 3, 3
  051a020  blr
  051a024  mr 5, 7
  051a028  lbzu 0, 1(5)
  051a02c  xori 9, 0, 47
  051a030  xori 11, 0, 92
  051a034  clrldi 9, 9, 56
  051a038  clrldi 11, 11, 56
  051a03c  addi 9, 9, -1
  051a040  addi 11, 11, -1
  051a044  clrldi 10, 0, 56
  051a048  rldicl 9, 9, 1, 63
  051a04c  rldicl 11, 11, 1, 63
  051a050  addi 10, 10, -1
  051a054  or 9, 9, 11
  051a058  rldicl 10, 10, 1, 63
  051a05c  or 9, 9, 10
  051a060  cmpwi 7, 9, 0
  051a064  bt 30, 0x51a070
  051a068  mr 7, 5
  051a06c  b 0x519f54
  051a070  cmpwi 7, 0, 46
  051a074  bf 30, 0x519fcc
  051a078  mr 5, 7
  051a07c  lbzu 10, 2(5)
  051a080  xori 9, 10, 47
  051a084  xori 11, 10, 92
  051a088  clrldi 9, 9, 56
  051a08c  clrldi 11, 11, 56
  051a090  addi 9, 9, -1
  051a094  addi 11, 11, -1
  051a098  clrldi 10, 10, 56
  051a09c  rldicl 9, 9, 1, 63
  051a0a0  rldicl 11, 11, 1, 63
  051a0a4  addi 10, 10, -1
  051a0a8  or 9, 9, 11
  051a0ac  rldicl 10, 10, 1, 63
  051a0b0  or 9, 9, 10
  051a0b4  cmpwi 7, 9, 0
  051a0b8  bt 30, 0x519fcc
  051a0bc  cmpw 7, 4, 8
  051a0c0  mr 7, 5
  051a0c4  bt 30, 0x51a018
  051a0c8  addi 0, 8, -1
  051a0cc  sub 9, 8, 4
  051a0d0  cmplw 7, 4, 0
  051a0d4  clrldi 9, 9, 32
  051a0d8  mtctr 9
  051a0dc  bt- 29, 0x51a118
  051a0e0  cmpwi 7, 4, -1
  051a0e4  bt- 30, 0x51a118
  051a0e8  addi 8, 8, -1
  051a0ec  bdz 0x519f54
  051a0f0  clrldi 9, 8, 32
  051a0f4  lbz 0, 0(9)
  051a0f8  cmpwi 7, 0, 47
  051a0fc  bf 30, 0x51a0e8
  051a100  b 0x519f54
  051a104  clrldi 9, 8, 32
  051a108  li 0, 47
  051a10c  addi 8, 8, 1
  051a110  stb 0, 0(9)
  051a114  b 0x519fe8
  051a118  li 0, 1
  051a11c  mtctr 0
  051a120  b 0x51a0e8

FUN_0051a124:   # 0x51a124, 0x148 bytes
  051a124  li 0, 272
  051a128  stdu 1, -336(1)
  051a12c  stvx 31, 1, 0
  051a130  mflr 0
  051a134  std 27, 296(1)
  051a138  std 28, 304(1)
  051a13c  mr 27, 4
  051a140  std 29, 312(1)
  051a144  std 0, 352(1)
  051a148  mr 29, 3
  051a14c  bl 0x604710
  051a150  nop
  051a154  li 0, 176
  051a158  vxor 31, 31, 31
  051a15c  li 9, 192
  051a160  li 11, 0
  051a164  li 3, 0
  051a168  stvx 31, 1, 0
  051a16c  li 0, 208
  051a170  stw 11, 184(1)
  051a174  stvx 31, 1, 9
  051a178  li 9, 224
  051a17c  stw 11, 256(1)
  051a180  sth 11, 260(1)
  051a184  stvx 31, 1, 0
  051a188  li 0, 240
  051a18c  stvx 31, 1, 9
  051a190  stvx 31, 1, 0
  051a194  bl 0x51c8d4
  051a198  nop
  051a19c  lwz 9, -30808(2)
  051a1a0  lwz 10, 0(29)
  051a1a4  li 0, 1
  051a1a8  stw 3, 188(1)
  051a1ac  stw 0, 176(1)
  051a1b0  li 0, 160
  051a1b4  lwz 4, 32(9)
  051a1b8  lwz 8, 8(9)
  051a1bc  mr 3, 29
  051a1c0  lwz 7, 12(9)
  051a1c4  lwz 6, 16(9)
  051a1c8  ld 5, 24(9)
  051a1cc  li 9, 144
  051a1d0  lwz 11, 140(29)
  051a1d4  stvx 31, 1, 0
  051a1d8  li 0, 112
  051a1dc  lwz 28, 20(10)
  051a1e0  lis 10, -32767
  051a1e4  slwi 11, 11, 3
  051a1e8  stvx 31, 1, 9
  051a1ec  li 9, 128
  051a1f0  ori 10, 10, 1793
  051a1f4  stvx 31, 1, 0
  051a1f8  addi 0, 1, 176
  051a1fc  stw 4, 216(1)
  051a200  stw 27, 256(1)
  051a204  stvx 31, 1, 9
  051a208  addi 4, 1, 112
  051a20c  stw 8, 192(1)
  051a210  stw 7, 196(1)
  051a214  stw 6, 200(1)
  051a218  std 5, 208(1)
  051a21c  std 11, 240(1)
  051a220  stw 0, 148(1)
  051a224  stw 10, 180(1)
  051a228  lwz 0, 0(28)
  051a22c  std 2, 40(1)
  051a230  mtctr 0
  051a234  lwz 2, 4(28)
  051a238  bctrl
  051a23c  ld 2, 40(1)
  051a240  lwz 0, 180(1)
  051a244  li 0, 272
  051a248  lwz 9, 180(1)
  051a24c  ld 27, 296(1)
  051a250  ld 28, 304(1)
  051a254  ld 29, 312(1)
  051a258  lvx 31, 1, 0
  051a25c  ld 0, 352(1)
  051a260  addi 1, 1, 336
  051a264  mtlr 0
  051a268  blr

_ZN4cell4fios5media18terminateClassLockEv:   # 0x51a26c, 0x88 bytes
  051a26c  lwz 11, -30808(2)
  051a270  mflr 0
  051a274  stdu 1, -144(1)
  051a278  std 29, 120(1)
  051a27c  std 0, 160(1)
  051a280  lwz 8, -30808(2)
  051a284  mr 10, 11
  051a288  lwz 29, 0(8)
  051a28c  isync
  051a290  cmpwi 7, 29, 0
  051a294  bt 30, 0x51a2e0
  051a298  li 9, 0
  051a29c  lwarx 0, 0, 10
  051a2a0  cmpw 7, 29, 0
  051a2a4  bf 30, 0x51a288
  051a2a8  stwcx. 9, 0, 11
  051a2ac  mfocrf 0, 128
  051a2b0  rlwinm 0, 0, 0, 2, 2
  051a2b4  cmpwi 7, 0, 0
  051a2b8  bt 30, 0x51a29c
  051a2bc  clrldi 29, 29, 32
  051a2c0  mr 3, 29
  051a2c4  bl 0x52df14
  051a2c8  nop
  051a2cc  mr 3, 29
  051a2d0  lis 4, 4162
  051a2d4  li 5, 3
  051a2d8  bl 0x510704
  051a2dc  nop
  051a2e0  ld 0, 160(1)
  051a2e4  ld 29, 120(1)
  051a2e8  addi 1, 1, 144
  051a2ec  mtlr 0
  051a2f0  blr

_ZN4cell4fios5media13getFirstMediaEv:   # 0x51a2f4, 0x68 bytes
  051a2f4  stdu 1, -160(1)
  051a2f8  mflr 0
  051a2fc  std 28, 128(1)
  051a300  std 29, 136(1)
  051a304  std 27, 120(1)
  051a308  std 0, 176(1)
  051a30c  bl 0x5199ac
  051a310  lwz 29, -30808(2)
  051a314  lwz 28, 0(29)
  051a318  isync
  051a31c  clrldi 28, 28, 32
  051a320  mr 3, 28
  051a324  bl 0x52de58
  051a328  nop
  051a32c  mr 3, 28
  051a330  lwz 27, 40(29)
  051a334  bl 0x52dda0
  051a338  nop
  051a33c  ld 0, 176(1)
  051a340  ld 28, 128(1)
  051a344  clrldi 3, 27, 32
  051a348  ld 29, 136(1)
  051a34c  ld 27, 120(1)
  051a350  mtlr 0
  051a354  addi 1, 1, 160
  051a358  blr

_ZNK4cell4fios5media11getCallbackEPPv:   # 0x51a35c, 0x88 bytes
  051a35c  stdu 1, -144(1)
  051a360  mflr 0
  051a364  std 31, 136(1)
  051a368  mr 31, 3
  051a36c  std 29, 120(1)
  051a370  addi 29, 31, 16
  051a374  clrldi 3, 3, 32
  051a378  clrldi 29, 29, 32
  051a37c  std 30, 128(1)
  051a380  std 0, 160(1)
  051a384  mr 30, 4
  051a388  std 28, 112(1)
  051a38c  bl 0x604710
  051a390  nop
  051a394  mr 3, 29
  051a398  bl 0x52de58
  051a39c  nop
  051a3a0  cmpwi 7, 30, 0
  051a3a4  mr 3, 29
  051a3a8  bt 30, 0x51a3b4
  051a3ac  lwz 0, 96(31)
  051a3b0  stw 0, 0(30)
  051a3b4  lwz 29, 92(31)
  051a3b8  bl 0x52dda0
  051a3bc  nop
  051a3c0  ld 0, 160(1)
  051a3c4  clrldi 3, 29, 32
  051a3c8  ld 28, 112(1)
  051a3cc  ld 29, 120(1)
  051a3d0  mtlr 0
  051a3d4  ld 30, 128(1)
  051a3d8  ld 31, 136(1)
  051a3dc  addi 1, 1, 144
  051a3e0  blr

_ZN4cell4fios5media8callbackEhPv:   # 0x51a3e4, 0x9c bytes
  051a3e4  stdu 1, -160(1)
  051a3e8  mflr 0
  051a3ec  std 29, 136(1)
  051a3f0  mr 29, 3
  051a3f4  std 30, 144(1)
  051a3f8  std 31, 152(1)
  051a3fc  mr 30, 5
  051a400  mr 31, 4
  051a404  std 0, 176(1)
  051a408  bl 0x604710
  051a40c  nop
  051a410  addi 4, 1, 112
  051a414  li 0, 0
  051a418  mr 3, 29
  051a41c  stw 0, 112(1)
  051a420  bl 0x51a35c
  051a424  mr 4, 29
  051a428  cmpwi 7, 3, 0
  051a42c  clrldi 9, 3, 32
  051a430  lis 3, -32767
  051a434  clrldi 5, 31, 56
  051a438  clrldi 6, 30, 32
  051a43c  ori 3, 3, 1804
  051a440  bt 30, 0x51a460
  051a444  lwz 0, 0(9)
  051a448  std 2, 40(1)
  051a44c  mtctr 0
  051a450  lwz 3, 112(1)
  051a454  lwz 2, 4(9)
  051a458  bctrl
  051a45c  ld 2, 40(1)
  051a460  ld 0, 176(1)
  051a464  extsw 3, 3
  051a468  ld 29, 136(1)
  051a46c  ld 30, 144(1)
  051a470  mtlr 0
  051a474  ld 31, 152(1)
  051a478  addi 1, 1, 160
  051a47c  blr

_ZNK4cell4fios5media12getSchedulerEv:   # 0x51a480, 0xa8 bytes
  051a480  stdu 1, -144(1)
  051a484  mflr 0
  051a488  std 31, 136(1)
  051a48c  mr 31, 3
  051a490  std 29, 120(1)
  051a494  addi 29, 31, 16
  051a498  clrldi 3, 3, 32
  051a49c  clrldi 29, 29, 32
  051a4a0  std 30, 128(1)
  051a4a4  std 0, 160(1)
  051a4a8  bl 0x604710
  051a4ac  nop
  051a4b0  mr 3, 29
  051a4b4  bl 0x52de58
  051a4b8  nop
  051a4bc  lwz 30, 68(31)
  051a4c0  cmpwi 7, 30, 0
  051a4c4  mr 3, 29
  051a4c8  bt 30, 0x51a4f4
  051a4cc  bl 0x52dda0
  051a4d0  nop
  051a4d4  ld 0, 160(1)
  051a4d8  ld 29, 120(1)
  051a4dc  clrldi 3, 30, 32
  051a4e0  ld 31, 136(1)
  051a4e4  ld 30, 128(1)
  051a4e8  mtlr 0
  051a4ec  addi 1, 1, 144
  051a4f0  blr
  051a4f4  lwz 31, 60(31)
  051a4f8  cmpwi 7, 31, 0
  051a4fc  bt 30, 0x51a4cc
  051a500  bl 0x52dda0
  051a504  nop
  051a508  ld 0, 160(1)
  051a50c  ld 29, 120(1)
  051a510  clrldi 3, 31, 32
  051a514  ld 30, 128(1)
  051a518  ld 31, 136(1)
  051a51c  addi 1, 1, 144
  051a520  mtlr 0
  051a524  b 0x51a480

_ZN4cell4fios5media21getMediaForIdentifierEPKc:   # 0x51a528, 0x148 bytes
  051a528  cmpwi 7, 3, 0
  051a52c  mflr 0
  051a530  stdu 1, -192(1)
  051a534  std 27, 152(1)
  051a538  std 28, 160(1)
  051a53c  std 24, 128(1)
  051a540  std 25, 136(1)
  051a544  std 26, 144(1)
  051a548  std 29, 168(1)
  051a54c  std 30, 176(1)
  051a550  std 31, 184(1)
  051a554  std 0, 208(1)
  051a558  mr 28, 3
  051a55c  li 27, 0
  051a560  bt 30, 0x51a60c
  051a564  bl 0x5199ac
  051a568  lwz 29, -30808(2)
  051a56c  lwz 0, 0(29)
  051a570  isync
  051a574  clrldi 26, 0, 32
  051a578  mr 3, 26
  051a57c  bl 0x52de58
  051a580  nop
  051a584  lwz 0, 40(29)
  051a588  cmpwi 7, 0, 0
  051a58c  bt 30, 0x51a600
  051a590  addi 24, 1, 112
  051a594  addi 25, 1, 116
  051a598  clrldi 27, 0, 32
  051a59c  mr 4, 24
  051a5a0  li 0, 0
  051a5a4  mr 3, 27
  051a5a8  mr 5, 25
  051a5ac  stw 0, 116(1)
  051a5b0  stw 0, 112(1)
  051a5b4  bl 0x51993c
  051a5b8  li 29, 0
  051a5bc  lwz 30, 112(1)
  051a5c0  lwz 31, 116(1)
  051a5c4  slwi 0, 29, 2
  051a5c8  cmplw 7, 29, 30
  051a5cc  add 0, 0, 31
  051a5d0  clrldi 4, 28, 32
  051a5d4  clrldi 3, 0, 32
  051a5d8  bf 28, 0x51a65c
  051a5dc  lwz 0, 0(3)
  051a5e0  cmpwi 7, 0, 0
  051a5e4  clrldi 3, 0, 32
  051a5e8  bt 30, 0x51a640
  051a5ec  bl 0x5197dc
  051a5f0  nop
  051a5f4  addi 29, 29, 1
  051a5f8  cmpwi 7, 3, 0
  051a5fc  bf 30, 0x51a5c4
  051a600  mr 3, 26
  051a604  bl 0x52dda0
  051a608  nop
  051a60c  ld 0, 208(1)
  051a610  mr 3, 27
  051a614  ld 24, 128(1)
  051a618  ld 25, 136(1)
  051a61c  mtlr 0
  051a620  ld 26, 144(1)
  051a624  ld 27, 152(1)
  051a628  ld 28, 160(1)
  051a62c  ld 29, 168(1)
  051a630  ld 30, 176(1)
  051a634  ld 31, 184(1)
  051a638  addi 1, 1, 192
  051a63c  blr
  051a640  addi 29, 29, 1
  051a644  slwi 0, 29, 2
  051a648  cmplw 7, 29, 30
  051a64c  add 0, 0, 31
  051a650  clrldi 4, 28, 32
  051a654  clrldi 3, 0, 32
  051a658  bt 28, 0x51a5dc
  051a65c  lwz 0, 56(27)
  051a660  cmpwi 7, 0, 0
  051a664  bf 30, 0x51a598
  051a668  li 27, 0
  051a66c  b 0x51a600

_ZN4cell4fios5media15getMediaForPathEPKcPS3_c:   # 0x51a670, 0xe4 bytes
  051a670  stdu 1, -160(1)
  051a674  mflr 0
  051a678  std 30, 144(1)
  051a67c  clrldi 30, 3, 32
  051a680  std 27, 120(1)
  051a684  std 28, 128(1)
  051a688  std 31, 152(1)
  051a68c  mr 28, 3
  051a690  mr 27, 4
  051a694  mr 3, 30
  051a698  mr 4, 5
  051a69c  mr 31, 1
  051a6a0  std 0, 176(1)
  051a6a4  std 29, 136(1)
  051a6a8  bl 0x5cc578
  051a6ac  nop
  051a6b0  mr 4, 30
  051a6b4  sub 30, 3, 28
  051a6b8  cmpwi 7, 3, 0
  051a6bc  addi 0, 30, 1
  051a6c0  cmpwi 6, 27, 0
  051a6c4  li 11, 0
  051a6c8  clrldi 5, 30, 32
  051a6cc  clrldi 9, 0, 32
  051a6d0  bt 30, 0x51a728
  051a6d4  addi 0, 9, 30
  051a6d8  ld 9, 0(1)
  051a6dc  addi 3, 3, 1
  051a6e0  sldi 0, 0, 31
  051a6e4  rldicr 0, 0, 33, 59
  051a6e8  bt 26, 0x51a6f0
  051a6ec  stw 3, 0(27)
  051a6f0  neg 0, 0
  051a6f4  stdux 9, 1, 0
  051a6f8  addi 29, 1, 112
  051a6fc  clrldi 28, 29, 32
  051a700  add 29, 29, 30
  051a704  mr 3, 28
  051a708  clrldi 29, 29, 32
  051a70c  bl 0x5c5ad0
  051a710  nop
  051a714  li 0, 0
  051a718  mr 3, 28
  051a71c  stb 0, 0(29)
  051a720  bl 0x51a528
  051a724  mr 11, 3
  051a728  clrldi 3, 11, 32
  051a72c  ld 11, 0(1)
  051a730  ld 0, 16(11)
  051a734  ld 27, -40(11)
  051a738  ld 28, -32(11)
  051a73c  mtlr 0
  051a740  ld 29, -24(11)
  051a744  ld 30, -16(11)
  051a748  ld 31, -8(11)
  051a74c  mr 1, 11
  051a750  blr

_ZN4cell4fios5media15unregisterMediaEv:   # 0x51a754, 0x104 bytes
  051a754  stdu 1, -144(1)
  051a758  mflr 0
  051a75c  std 28, 112(1)
  051a760  std 31, 136(1)
  051a764  mr 28, 3
  051a768  mr 31, 3
  051a76c  clrldi 3, 3, 32
  051a770  std 0, 160(1)
  051a774  std 30, 128(1)
  051a778  std 29, 120(1)
  051a77c  bl 0x604710
  051a780  nop
  051a784  bl 0x5199ac
  051a788  lwz 30, -30808(2)
  051a78c  lwz 0, 0(30)
  051a790  isync
  051a794  clrldi 29, 0, 32
  051a798  mr 3, 29
  051a79c  bl 0x52de58
  051a7a0  nop
  051a7a4  lwz 9, 40(30)
  051a7a8  cmpwi 7, 9, 0
  051a7ac  bt 30, 0x51a844
  051a7b0  cmpw 7, 28, 9
  051a7b4  bf 30, 0x51a7c0
  051a7b8  b 0x51a84c
  051a7bc  bt 26, 0x51a810
  051a7c0  addi 0, 9, 56
  051a7c4  clrldi 11, 0, 32
  051a7c8  lwz 9, 0(11)
  051a7cc  cmpwi 7, 9, 0
  051a7d0  cmpw 6, 31, 9
  051a7d4  bf 30, 0x51a7bc
  051a7d8  cmpwi 7, 31, 0
  051a7dc  bt 30, 0x51a80c
  051a7e0  mr 3, 29
  051a7e4  bl 0x52dda0
  051a7e8  nop
  051a7ec  ld 0, 160(1)
  051a7f0  ld 28, 112(1)
  051a7f4  ld 29, 120(1)
  051a7f8  mtlr 0
  051a7fc  ld 30, 128(1)
  051a800  ld 31, 136(1)
  051a804  addi 1, 1, 144
  051a808  blr
  051a80c  clrldi 11, 0, 32
  051a810  lwz 0, 56(28)
  051a814  mr 3, 29
  051a818  stw 0, 0(11)
  051a81c  bl 0x52dda0
  051a820  nop
  051a824  ld 0, 160(1)
  051a828  ld 28, 112(1)
  051a82c  ld 29, 120(1)
  051a830  mtlr 0
  051a834  ld 30, 128(1)
  051a838  ld 31, 136(1)
  051a83c  addi 1, 1, 144
  051a840  blr
  051a844  addi 0, 30, 40
  051a848  b 0x51a7d8
  051a84c  addi 0, 30, 40
  051a850  clrldi 11, 0, 32
  051a854  b 0x51a810

_ZN4cell4fios5mediaD0Ev:   # 0x51a858, 0x198 bytes
  051a858  stdu 1, -176(1)
  051a85c  mflr 0
  051a860  std 25, 120(1)
  051a864  std 0, 192(1)
  051a868  clrldi 25, 3, 32
  051a86c  lwz 0, -30800(2)
  051a870  std 29, 152(1)
  051a874  mr 29, 3
  051a878  std 26, 128(1)
  051a87c  std 27, 136(1)
  051a880  std 28, 144(1)
  051a884  std 30, 160(1)
  051a888  std 31, 168(1)
  051a88c  mr 26, 3
  051a890  stw 0, 0(3)
  051a894  mr 3, 25
  051a898  bl 0x604710
  051a89c  nop
  051a8a0  mr 3, 25
  051a8a4  bl 0x51a754
  051a8a8  lwz 0, 88(29)
  051a8ac  cmpwi 7, 0, 0
  051a8b0  bt 30, 0x51a984
  051a8b4  lwz 11, 80(29)
  051a8b8  cmpwi 7, 11, 0
  051a8bc  bt 30, 0x51a9e8
  051a8c0  li 30, 0
  051a8c4  lwz 28, -30792(2)
  051a8c8  li 27, 0
  051a8cc  slwi 31, 30, 2
  051a8d0  lis 5, 4098
  051a8d4  add 9, 31, 0
  051a8d8  addi 30, 30, 1
  051a8dc  clrldi 9, 9, 32
  051a8e0  ori 5, 5, 256
  051a8e4  li 6, 0
  051a8e8  li 7, 0
  051a8ec  lwz 9, 0(9)
  051a8f0  cmpwi 7, 9, 0
  051a8f4  clrldi 4, 9, 32
  051a8f8  bt 30, 0x51a92c
  051a8fc  lwz 11, 8(28)
  051a900  mr 3, 11
  051a904  lwz 9, 0(11)
  051a908  lwz 10, 4(9)
  051a90c  lwz 0, 0(10)
  051a910  std 2, 40(1)
  051a914  mtctr 0
  051a918  lwz 2, 4(10)
  051a91c  bctrl
  051a920  ld 2, 40(1)
  051a924  lwz 0, 88(29)
  051a928  lwz 11, 80(29)
  051a92c  add 9, 31, 0
  051a930  cmplw 7, 11, 30
  051a934  clrldi 9, 9, 32
  051a938  stw 27, 0(9)
  051a93c  bt 29, 0x51a8cc
  051a940  lwz 9, 8(28)
  051a944  clrldi 4, 0, 32
  051a948  lis 5, 4097
  051a94c  mr 3, 9
  051a950  ori 5, 5, 258
  051a954  li 6, 0
  051a958  lwz 11, 0(9)
  051a95c  li 7, 0
  051a960  lwz 9, 4(11)
  051a964  lwz 0, 0(9)
  051a968  std 2, 40(1)
  051a96c  mtctr 0
  051a970  lwz 2, 4(9)
  051a974  bctrl
  051a978  ld 2, 40(1)
  051a97c  li 0, 0
  051a980  stw 0, 88(29)
  051a984  addi 3, 26, 16
  051a988  clrldi 3, 3, 32
  051a98c  bl 0x52df14
  051a990  nop
  051a994  addi 3, 26, 4
  051a998  clrldi 3, 3, 32
  051a99c  bl 0x5107d0
  051a9a0  nop
  051a9a4  lis 4, 4096
  051a9a8  mr 3, 25
  051a9ac  li 5, 2
  051a9b0  ori 4, 4, 256
  051a9b4  bl 0x510704
  051a9b8  nop
  051a9bc  ld 0, 192(1)
  051a9c0  ld 25, 120(1)
  051a9c4  ld 26, 128(1)
  051a9c8  mtlr 0
  051a9cc  ld 27, 136(1)
  051a9d0  ld 28, 144(1)
  051a9d4  ld 29, 152(1)
  051a9d8  ld 30, 160(1)
  051a9dc  ld 31, 168(1)
  051a9e0  addi 1, 1, 176
  051a9e4  blr
  051a9e8  lwz 28, -30792(2)
  051a9ec  b 0x51a940

FUN_0051a9f0:   # 0x51a9f0, 0x178 bytes
  051a9f0  stdu 1, -160(1)
  051a9f4  mflr 0
  051a9f8  std 29, 136(1)
  051a9fc  std 0, 176(1)
  051aa00  clrldi 29, 3, 32
  051aa04  lwz 0, -30800(2)
  051aa08  std 30, 144(1)
  051aa0c  mr 30, 3
  051aa10  std 26, 112(1)
  051aa14  std 27, 120(1)
  051aa18  std 28, 128(1)
  051aa1c  std 31, 152(1)
  051aa20  mr 26, 3
  051aa24  stw 0, 0(3)
  051aa28  mr 3, 29
  051aa2c  bl 0x604710
  051aa30  nop
  051aa34  mr 3, 29
  051aa38  bl 0x51a754
  051aa3c  lwz 0, 88(30)
  051aa40  cmpwi 7, 0, 0
  051aa44  bt 30, 0x51ab18
  051aa48  lwz 11, 80(30)
  051aa4c  cmpwi 7, 11, 0
  051aa50  bt 30, 0x51ab60
  051aa54  li 31, 0
  051aa58  lwz 28, -30792(2)
  051aa5c  li 27, 0
  051aa60  slwi 29, 31, 2
  051aa64  lis 5, 4098
  051aa68  add 9, 29, 0
  051aa6c  addi 31, 31, 1
  051aa70  clrldi 9, 9, 32
  051aa74  ori 5, 5, 256
  051aa78  li 6, 0
  051aa7c  li 7, 0
  051aa80  lwz 9, 0(9)
  051aa84  cmpwi 7, 9, 0
  051aa88  clrldi 4, 9, 32
  051aa8c  bt 30, 0x51aac0
  051aa90  lwz 11, 8(28)
  051aa94  mr 3, 11
  051aa98  lwz 9, 0(11)
  051aa9c  lwz 10, 4(9)
  051aaa0  lwz 0, 0(10)
  051aaa4  std 2, 40(1)
  051aaa8  mtctr 0
  051aaac  lwz 2, 4(10)
  051aab0  bctrl
  051aab4  ld 2, 40(1)
  051aab8  lwz 0, 88(30)
  051aabc  lwz 11, 80(30)
  051aac0  add 9, 29, 0
  051aac4  cmplw 7, 11, 31
  051aac8  clrldi 9, 9, 32
  051aacc  stw 27, 0(9)
  051aad0  bt 29, 0x51aa60
  051aad4  lwz 9, 8(28)
  051aad8  clrldi 4, 0, 32
  051aadc  lis 5, 4097
  051aae0  mr 3, 9
  051aae4  ori 5, 5, 258
  051aae8  li 6, 0
  051aaec  lwz 11, 0(9)
  051aaf0  li 7, 0
  051aaf4  lwz 9, 4(11)
  051aaf8  lwz 0, 0(9)
  051aafc  std 2, 40(1)
  051ab00  mtctr 0
  051ab04  lwz 2, 4(9)
  051ab08  bctrl
  051ab0c  ld 2, 40(1)
  051ab10  li 0, 0
  051ab14  stw 0, 88(30)
  051ab18  addi 3, 26, 16
  051ab1c  clrldi 3, 3, 32
  051ab20  bl 0x52df14
  051ab24  nop
  051ab28  addi 3, 26, 4
  051ab2c  clrldi 3, 3, 32
  051ab30  bl 0x5107d0
  051ab34  nop
  051ab38  ld 0, 176(1)
  051ab3c  ld 26, 112(1)
  051ab40  ld 27, 120(1)
  051ab44  mtlr 0
  051ab48  ld 28, 128(1)
  051ab4c  ld 29, 136(1)
  051ab50  ld 30, 144(1)
  051ab54  ld 31, 152(1)
  051ab58  addi 1, 1, 160
  051ab5c  blr
  051ab60  lwz 28, -30792(2)
  051ab64  b 0x51aad4

FUN_0051ab68:   # 0x51ab68, 0x178 bytes
  051ab68  stdu 1, -160(1)
  051ab6c  mflr 0
  051ab70  std 29, 136(1)
  051ab74  std 0, 176(1)
  051ab78  clrldi 29, 3, 32
  051ab7c  lwz 0, -30800(2)
  051ab80  std 30, 144(1)
  051ab84  mr 30, 3
  051ab88  std 26, 112(1)
  051ab8c  std 27, 120(1)
  051ab90  std 28, 128(1)
  051ab94  std 31, 152(1)
  051ab98  mr 26, 3
  051ab9c  stw 0, 0(3)
  051aba0  mr 3, 29
  051aba4  bl 0x604710
  051aba8  nop
  051abac  mr 3, 29
  051abb0  bl 0x51a754
  051abb4  lwz 0, 88(30)
  051abb8  cmpwi 7, 0, 0
  051abbc  bt 30, 0x51ac90
  051abc0  lwz 11, 80(30)
  051abc4  cmpwi 7, 11, 0
  051abc8  bt 30, 0x51acd8
  051abcc  li 31, 0
  051abd0  lwz 28, -30792(2)
  051abd4  li 27, 0
  051abd8  slwi 29, 31, 2
  051abdc  lis 5, 4098
  051abe0  add 9, 29, 0
  051abe4  addi 31, 31, 1
  051abe8  clrldi 9, 9, 32
  051abec  ori 5, 5, 256
  051abf0  li 6, 0
  051abf4  li 7, 0
  051abf8  lwz 9, 0(9)
  051abfc  cmpwi 7, 9, 0
  051ac00  clrldi 4, 9, 32
  051ac04  bt 30, 0x51ac38
  051ac08  lwz 11, 8(28)
  051ac0c  mr 3, 11
  051ac10  lwz 9, 0(11)
  051ac14  lwz 10, 4(9)
  051ac18  lwz 0, 0(10)
  051ac1c  std 2, 40(1)
  051ac20  mtctr 0
  051ac24  lwz 2, 4(10)
  051ac28  bctrl
  051ac2c  ld 2, 40(1)
  051ac30  lwz 0, 88(30)
  051ac34  lwz 11, 80(30)
  051ac38  add 9, 29, 0
  051ac3c  cmplw 7, 11, 31
  051ac40  clrldi 9, 9, 32
  051ac44  stw 27, 0(9)
  051ac48  bt 29, 0x51abd8
  051ac4c  lwz 9, 8(28)
  051ac50  clrldi 4, 0, 32
  051ac54  lis 5, 4097
  051ac58  mr 3, 9
  051ac5c  ori 5, 5, 258
  051ac60  li 6, 0
  051ac64  lwz 11, 0(9)
  051ac68  li 7, 0
  051ac6c  lwz 9, 4(11)
  051ac70  lwz 0, 0(9)
  051ac74  std 2, 40(1)
  051ac78  mtctr 0
  051ac7c  lwz 2, 4(9)
  051ac80  bctrl
  051ac84  ld 2, 40(1)
  051ac88  li 0, 0
  051ac8c  stw 0, 88(30)
  051ac90  addi 3, 26, 16
  051ac94  clrldi 3, 3, 32
  051ac98  bl 0x52df14
  051ac9c  nop
  051aca0  addi 3, 26, 4
  051aca4  clrldi 3, 3, 32
  051aca8  bl 0x5107d0
  051acac  nop
  051acb0  ld 0, 176(1)
  051acb4  ld 26, 112(1)
  051acb8  ld 27, 120(1)
  051acbc  mtlr 0
  051acc0  ld 28, 128(1)
  051acc4  ld 29, 136(1)
  051acc8  ld 30, 144(1)
  051accc  ld 31, 152(1)
  051acd0  addi 1, 1, 160
  051acd4  blr
  051acd8  lwz 28, -30792(2)
  051acdc  b 0x51ac4c

_ZN4cell4fios11mediafilterD0Ev:   # 0x51ace0, 0x64 bytes
  051ace0  stdu 1, -128(1)
  051ace4  mflr 0
  051ace8  std 31, 120(1)
  051acec  mr 31, 3
  051acf0  lwz 9, -30788(2)
  051acf4  std 0, 144(1)
  051acf8  lwz 0, 64(31)
  051acfc  stw 9, 0(31)
  051ad00  cmpwi 7, 0, 0
  051ad04  clrldi 9, 0, 32
  051ad08  bt 30, 0x51ad14
  051ad0c  li 0, 0
  051ad10  stw 0, 60(9)
  051ad14  bl 0x51ab68
  051ad18  lis 4, 4096
  051ad1c  mr 3, 31
  051ad20  li 5, 2
  051ad24  ori 4, 4, 256
  051ad28  bl 0x510704
  051ad2c  nop
  051ad30  ld 0, 144(1)
  051ad34  ld 31, 120(1)
  051ad38  mtlr 0
  051ad3c  addi 1, 1, 128
  051ad40  blr

FUN_0051ad44:   # 0x51ad44, 0x28 bytes
  051ad44  mr 9, 3
  051ad48  lwz 11, -30788(2)
  051ad4c  lwz 0, 64(9)
  051ad50  stw 11, 0(9)
  051ad54  cmpwi 7, 0, 0
  051ad58  clrldi 9, 0, 32
  051ad5c  bt 30, 0x51ad68
  051ad60  li 0, 0
  051ad64  stw 0, 60(9)
  051ad68  b 0x51ab68

FUN_0051ad6c:   # 0x51ad6c, 0x28 bytes
  051ad6c  mr 9, 3
  051ad70  lwz 11, -30788(2)
  051ad74  lwz 0, 64(9)
  051ad78  stw 11, 0(9)
  051ad7c  cmpwi 7, 0, 0
  051ad80  clrldi 9, 0, 32
  051ad84  bt 30, 0x51ad90
  051ad88  li 0, 0
  051ad8c  stw 0, 60(9)
  051ad90  b 0x51ab68

_ZN4cell4fios5media13registerMediaEv:   # 0x51ad94, 0xd8 bytes
  051ad94  stdu 1, -144(1)
  051ad98  mflr 0
  051ad9c  std 29, 120(1)
  051ada0  mr 29, 3
  051ada4  std 31, 136(1)
  051ada8  mr 31, 3
  051adac  clrldi 3, 3, 32
  051adb0  std 0, 160(1)
  051adb4  std 30, 128(1)
  051adb8  bl 0x604710
  051adbc  nop
  051adc0  bl 0x5199ac
  051adc4  lwz 0, 56(29)
  051adc8  cmpwi 7, 0, 0
  051adcc  bt 30, 0x51adec
  051add0  ld 0, 160(1)
  051add4  ld 29, 120(1)
  051add8  ld 30, 128(1)
  051addc  mtlr 0
  051ade0  ld 31, 136(1)
  051ade4  addi 1, 1, 144
  051ade8  blr
  051adec  lwz 30, -30808(2)
  051adf0  lwz 0, 0(30)
  051adf4  isync
  051adf8  clrldi 29, 0, 32
  051adfc  mr 3, 29
  051ae00  bl 0x52de58
  051ae04  nop
  051ae08  lwz 9, 40(30)
  051ae0c  cmpwi 7, 9, 0
  051ae10  bt 30, 0x51ae60
  051ae14  cmpw 7, 31, 9
  051ae18  bf 30, 0x51ae24
  051ae1c  b 0x51ae50
  051ae20  bt 26, 0x51ae50
  051ae24  addi 0, 9, 56
  051ae28  clrldi 11, 0, 32
  051ae2c  lwz 9, 0(11)
  051ae30  cmpwi 7, 9, 0
  051ae34  cmpw 6, 31, 9
  051ae38  bf 30, 0x51ae20
  051ae3c  mr 3, 29
  051ae40  stw 31, 0(11)
  051ae44  bl 0x52dda0
  051ae48  nop
  051ae4c  b 0x51add0
  051ae50  mr 3, 29
  051ae54  bl 0x52dda0
  051ae58  nop
  051ae5c  b 0x51add0
  051ae60  addi 0, 30, 40
  051ae64  clrldi 11, 0, 32
  051ae68  b 0x51ae3c

_ZNK4cell4fios5media20getPrimaryIdentifierEv:   # 0x51ae6c, 0x68 bytes
  051ae6c  stdu 1, -144(1)
  051ae70  mflr 0
  051ae74  std 28, 112(1)
  051ae78  mr 28, 3
  051ae7c  std 29, 120(1)
  051ae80  addi 29, 28, 16
  051ae84  clrldi 3, 3, 32
  051ae88  clrldi 29, 29, 32
  051ae8c  std 0, 160(1)
  051ae90  bl 0x604710
  051ae94  nop
  051ae98  mr 3, 29
  051ae9c  bl 0x52de58
  051aea0  nop
  051aea4  lwz 9, 88(28)
  051aea8  mr 3, 29
  051aeac  lwz 28, 0(9)
  051aeb0  bl 0x52dda0
  051aeb4  nop
  051aeb8  ld 0, 160(1)
  051aebc  clrldi 3, 28, 32
  051aec0  ld 29, 120(1)
  051aec4  ld 28, 112(1)
  051aec8  mtlr 0
  051aecc  addi 1, 1, 144
  051aed0  blr

_ZNK4cell4fios5media19getCachedIdentifierEv:   # 0x51aed4, 0x6c bytes
  051aed4  stdu 1, -160(1)
  051aed8  mflr 0
  051aedc  std 29, 136(1)
  051aee0  mr 29, 3
  051aee4  std 28, 128(1)
  051aee8  addi 28, 29, 16
  051aeec  clrldi 3, 3, 32
  051aef0  clrldi 28, 28, 32
  051aef4  std 0, 176(1)
  051aef8  std 27, 120(1)
  051aefc  bl 0x604710
  051af00  nop
  051af04  mr 3, 28
  051af08  bl 0x52de58
  051af0c  nop
  051af10  mr 3, 28
  051af14  ld 27, 72(29)
  051af18  bl 0x52dda0
  051af1c  nop
  051af20  ld 0, 176(1)
  051af24  ld 28, 128(1)
  051af28  mr 3, 27
  051af2c  ld 29, 136(1)
  051af30  ld 27, 120(1)
  051af34  mtlr 0
  051af38  addi 1, 1, 160
  051af3c  blr

_ZN4cell4fios5media19setCachedIdentifierEy:   # 0x51af40, 0x6c bytes
  051af40  stdu 1, -160(1)
  051af44  mflr 0
  051af48  std 29, 136(1)
  051af4c  mr 29, 3
  051af50  std 28, 128(1)
  051af54  addi 28, 29, 16
  051af58  clrldi 3, 3, 32
  051af5c  clrldi 28, 28, 32
  051af60  std 0, 176(1)
  051af64  std 27, 120(1)
  051af68  mr 27, 4
  051af6c  bl 0x604710
  051af70  nop
  051af74  mr 3, 28
  051af78  bl 0x52de58
  051af7c  nop
  051af80  mr 3, 28
  051af84  std 27, 72(29)
  051af88  bl 0x52dda0
  051af8c  nop
  051af90  ld 0, 176(1)
  051af94  ld 27, 120(1)
  051af98  ld 28, 128(1)
  051af9c  mtlr 0
  051afa0  ld 29, 136(1)
  051afa4  addi 1, 1, 160
  051afa8  blr

_ZN4cell4fios5media11setCallbackEPFiPvPS1_hS2_ES2_PS5_PS2_:   # 0x51afac, 0xc4 bytes
  051afac  stdu 1, -176(1)
  051afb0  mflr 0
  051afb4  std 31, 168(1)
  051afb8  mr 31, 3
  051afbc  std 29, 152(1)
  051afc0  addi 29, 31, 16
  051afc4  clrldi 3, 3, 32
  051afc8  clrldi 29, 29, 32
  051afcc  std 24, 112(1)
  051afd0  std 25, 120(1)
  051afd4  std 26, 128(1)
  051afd8  std 30, 160(1)
  051afdc  mr 26, 7
  051afe0  mr 30, 6
  051afe4  std 0, 192(1)
  051afe8  mr 24, 4
  051afec  mr 25, 5
  051aff0  std 27, 136(1)
  051aff4  std 28, 144(1)
  051aff8  bl 0x604710
  051affc  nop
  051b000  mr 3, 29
  051b004  bl 0x52de58
  051b008  nop
  051b00c  cmpwi 7, 30, 0
  051b010  cmpwi 6, 26, 0
  051b014  mr 3, 29
  051b018  bt 30, 0x51b024
  051b01c  lwz 0, 92(31)
  051b020  stw 0, 0(30)
  051b024  bt 26, 0x51b030
  051b028  lwz 0, 96(31)
  051b02c  stw 0, 0(26)
  051b030  stw 25, 96(31)
  051b034  stw 24, 92(31)
  051b038  bl 0x52dda0
  051b03c  nop
  051b040  ld 0, 192(1)
  051b044  ld 24, 112(1)
  051b048  ld 25, 120(1)
  051b04c  mtlr 0
  051b050  ld 26, 128(1)
  051b054  ld 27, 136(1)
  051b058  ld 28, 144(1)
  051b05c  ld 29, 152(1)
  051b060  ld 30, 160(1)
  051b064  ld 31, 168(1)
  051b068  addi 1, 1, 176
  051b06c  blr

FUN_0051b070:   # 0x51b070, 0x17c bytes
  051b070  li 0, 272
  051b074  stdu 1, -352(1)
  051b078  stvx 31, 1, 0
  051b07c  mflr 0
  051b080  std 27, 312(1)
  051b084  clrldi 27, 3, 32
  051b088  std 26, 304(1)
  051b08c  mr 26, 3
  051b090  mr 3, 27
  051b094  std 25, 296(1)
  051b098  std 28, 320(1)
  051b09c  std 29, 328(1)
  051b0a0  std 0, 368(1)
  051b0a4  bl 0x604710
  051b0a8  nop
  051b0ac  li 0, 176
  051b0b0  vxor 31, 31, 31
  051b0b4  li 9, 192
  051b0b8  li 29, 0
  051b0bc  li 3, 0
  051b0c0  stvx 31, 1, 0
  051b0c4  li 0, 208
  051b0c8  stw 29, 256(1)
  051b0cc  stvx 31, 1, 9
  051b0d0  li 9, 224
  051b0d4  sth 29, 260(1)
  051b0d8  stw 29, 184(1)
  051b0dc  stvx 31, 1, 0
  051b0e0  li 0, 240
  051b0e4  addi 28, 26, 104
  051b0e8  stvx 31, 1, 9
  051b0ec  stvx 31, 1, 0
  051b0f0  bl 0x51c8d4
  051b0f4  nop
  051b0f8  li 0, 160
  051b0fc  lwz 11, 0(26)
  051b100  lwz 9, -30808(2)
  051b104  lis 10, -32767
  051b108  stw 3, 188(1)
  051b10c  ori 10, 10, 1793
  051b110  stvx 31, 1, 0
  051b114  li 0, 144
  051b118  lwz 25, 20(11)
  051b11c  mr 3, 27
  051b120  lwz 5, 32(9)
  051b124  addi 4, 1, 112
  051b128  lwz 11, 8(9)
  051b12c  lwz 8, 12(9)
  051b130  stvx 31, 1, 0
  051b134  li 0, 48
  051b138  lwz 7, 16(9)
  051b13c  ld 6, 24(9)
  051b140  li 9, 112
  051b144  std 0, 240(1)
  051b148  li 0, 128
  051b14c  stw 11, 192(1)
  051b150  stw 8, 196(1)
  051b154  stvx 31, 1, 9
  051b158  addi 9, 1, 176
  051b15c  stw 7, 200(1)
  051b160  stvx 31, 1, 0
  051b164  std 6, 208(1)
  051b168  stw 5, 216(1)
  051b16c  stw 29, 176(1)
  051b170  stw 28, 256(1)
  051b174  stw 9, 148(1)
  051b178  stw 10, 180(1)
  051b17c  lwz 0, 0(25)
  051b180  std 2, 40(1)
  051b184  mtctr 0
  051b188  lwz 2, 4(25)
  051b18c  bctrl
  051b190  ld 2, 40(1)
  051b194  lwz 11, 0(26)
  051b198  mr 3, 27
  051b19c  lwz 0, 180(1)
  051b1a0  lwz 10, 180(1)
  051b1a4  lwz 9, 24(11)
  051b1a8  lwz 0, 0(9)
  051b1ac  std 2, 40(1)
  051b1b0  mtctr 0
  051b1b4  lwz 2, 4(9)
  051b1b8  bctrl
  051b1bc  ld 2, 40(1)
  051b1c0  li 0, 272
  051b1c4  ld 25, 296(1)
  051b1c8  ld 26, 304(1)
  051b1cc  ld 27, 312(1)
  051b1d0  lvx 31, 1, 0
  051b1d4  ld 0, 368(1)
  051b1d8  ld 28, 320(1)
  051b1dc  ld 29, 328(1)
  051b1e0  mtlr 0
  051b1e4  addi 1, 1, 352
  051b1e8  blr

FUN_0051b1ec:   # 0x51b1ec, 0x12c bytes
  051b1ec  li 0, 272
  051b1f0  stdu 1, -336(1)
  051b1f4  stvx 31, 1, 0
  051b1f8  mflr 0
  051b1fc  std 28, 304(1)
  051b200  std 29, 312(1)
  051b204  std 0, 352(1)
  051b208  mr 29, 3
  051b20c  bl 0x604710
  051b210  nop
  051b214  li 0, 176
  051b218  vxor 31, 31, 31
  051b21c  li 9, 192
  051b220  li 11, 0
  051b224  li 3, 0
  051b228  stvx 31, 1, 0
  051b22c  li 0, 208
  051b230  stw 11, 184(1)
  051b234  stvx 31, 1, 9
  051b238  li 9, 224
  051b23c  stw 11, 256(1)
  051b240  sth 11, 260(1)
  051b244  stvx 31, 1, 0
  051b248  li 0, 240
  051b24c  stvx 31, 1, 9
  051b250  stvx 31, 1, 0
  051b254  bl 0x51c8d4
  051b258  nop
  051b25c  li 0, 160
  051b260  lwz 11, 0(29)
  051b264  lwz 9, -30808(2)
  051b268  lis 10, -32767
  051b26c  stw 3, 188(1)
  051b270  ori 10, 10, 1793
  051b274  stvx 31, 1, 0
  051b278  li 0, 144
  051b27c  lwz 28, 20(11)
  051b280  mr 3, 29
  051b284  lwz 5, 32(9)
  051b288  addi 4, 1, 112
  051b28c  lwz 11, 8(9)
  051b290  lwz 8, 12(9)
  051b294  stvx 31, 1, 0
  051b298  li 0, 2
  051b29c  lwz 7, 16(9)
  051b2a0  ld 6, 24(9)
  051b2a4  li 9, 112
  051b2a8  stw 0, 176(1)
  051b2ac  li 0, 128
  051b2b0  stw 11, 192(1)
  051b2b4  stw 8, 196(1)
  051b2b8  stvx 31, 1, 9
  051b2bc  addi 9, 1, 176
  051b2c0  stw 7, 200(1)
  051b2c4  stvx 31, 1, 0
  051b2c8  stw 9, 148(1)
  051b2cc  std 6, 208(1)
  051b2d0  stw 5, 216(1)
  051b2d4  stw 10, 180(1)
  051b2d8  lwz 0, 0(28)
  051b2dc  std 2, 40(1)
  051b2e0  mtctr 0
  051b2e4  lwz 2, 4(28)
  051b2e8  bctrl
  051b2ec  ld 2, 40(1)
  051b2f0  lwz 0, 180(1)
  051b2f4  li 0, 272
  051b2f8  lwz 9, 180(1)
  051b2fc  ld 28, 304(1)
  051b300  ld 29, 312(1)
  051b304  lvx 31, 1, 0
  051b308  ld 0, 352(1)
  051b30c  addi 1, 1, 336
  051b310  mtlr 0
  051b314  blr

_ZN4cell4fios5media12setSchedulerEPNS0_9schedulerE:   # 0x51b318, 0xb4 bytes
  051b318  stdu 1, -144(1)
  051b31c  mflr 0
  051b320  std 31, 136(1)
  051b324  mr 31, 3
  051b328  std 29, 120(1)
  051b32c  addi 29, 31, 16
  051b330  clrldi 3, 3, 32
  051b334  clrldi 29, 29, 32
  051b338  std 0, 160(1)
  051b33c  std 30, 128(1)
  051b340  std 28, 112(1)
  051b344  mr 30, 4
  051b348  bl 0x604710
  051b34c  nop
  051b350  mr 3, 29
  051b354  bl 0x52de58
  051b358  nop
  051b35c  lwz 0, 68(31)
  051b360  cmpwi 7, 0, 0
  051b364  cmpwi 6, 30, 0
  051b368  bt 30, 0x51b39c
  051b36c  bt 26, 0x51b39c
  051b370  mr 3, 29
  051b374  bl 0x52dda0
  051b378  nop
  051b37c  ld 0, 160(1)
  051b380  ld 28, 112(1)
  051b384  ld 29, 120(1)
  051b388  mtlr 0
  051b38c  ld 30, 128(1)
  051b390  ld 31, 136(1)
  051b394  addi 1, 1, 144
  051b398  blr
  051b39c  mr 3, 29
  051b3a0  stw 30, 68(31)
  051b3a4  bl 0x52dda0
  051b3a8  nop
  051b3ac  ld 0, 160(1)
  051b3b0  ld 28, 112(1)
  051b3b4  ld 29, 120(1)
  051b3b8  mtlr 0
  051b3bc  ld 30, 128(1)
  051b3c0  ld 31, 136(1)
  051b3c4  addi 1, 1, 144
  051b3c8  blr

_ZNK4cell4fios5media9nextMediaEv:   # 0x51b3cc, 0x74 bytes
  051b3cc  stdu 1, -160(1)
  051b3d0  mflr 0
  051b3d4  std 27, 120(1)
  051b3d8  std 29, 136(1)
  051b3dc  std 0, 176(1)
  051b3e0  std 28, 128(1)
  051b3e4  mr 27, 3
  051b3e8  bl 0x604710
  051b3ec  nop
  051b3f0  bl 0x5199ac
  051b3f4  lwz 9, -30808(2)
  051b3f8  lwz 29, 0(9)
  051b3fc  isync
  051b400  clrldi 29, 29, 32
  051b404  mr 3, 29
  051b408  bl 0x52de58
  051b40c  nop
  051b410  mr 3, 29
  051b414  lwz 28, 56(27)
  051b418  bl 0x52dda0
  051b41c  nop
  051b420  ld 0, 176(1)
  051b424  ld 27, 120(1)
  051b428  clrldi 3, 28, 32
  051b42c  ld 29, 136(1)
  051b430  ld 28, 128(1)
  051b434  mtlr 0
  051b438  addi 1, 1, 160
  051b43c  blr

_ZN4cell4fios5media13addIdentifierEPKc:   # 0x51b440, 0x2d4 bytes
  051b440  stdu 1, -192(1)
  051b444  mflr 0
  051b448  std 23, 120(1)
  051b44c  std 30, 176(1)
  051b450  mr 23, 4
  051b454  mr 30, 3
  051b458  clrldi 3, 3, 32
  051b45c  std 22, 112(1)
  051b460  std 24, 128(1)
  051b464  std 25, 136(1)
  051b468  std 26, 144(1)
  051b46c  std 27, 152(1)
  051b470  std 28, 160(1)
  051b474  std 29, 168(1)
  051b478  std 31, 184(1)
  051b47c  std 0, 208(1)
  051b480  bl 0x604710
  051b484  nop
  051b488  cmpwi 7, 23, 0
  051b48c  bt 30, 0x51b660
  051b490  addi 0, 30, 16
  051b494  clrldi 24, 0, 32
  051b498  mr 3, 24
  051b49c  bl 0x52de58
  051b4a0  nop
  051b4a4  lwz 9, 80(30)
  051b4a8  lwz 5, 84(30)
  051b4ac  addi 9, 9, 1
  051b4b0  cmplw 7, 9, 5
  051b4b4  bf 29, 0x51b698
  051b4b8  lwz 22, -30792(2)
  051b4bc  addi 25, 5, 4
  051b4c0  lis 5, 4097
  051b4c4  lwz 26, 88(30)
  051b4c8  slwi 29, 25, 2
  051b4cc  ori 5, 5, 256
  051b4d0  mr 4, 29
  051b4d4  lwz 9, 8(22)
  051b4d8  li 6, 0
  051b4dc  li 7, 0
  051b4e0  mr 3, 9
  051b4e4  lwz 11, 0(9)
  051b4e8  lwz 9, 0(11)
  051b4ec  lwz 0, 0(9)
  051b4f0  std 2, 40(1)
  051b4f4  mtctr 0
  051b4f8  lwz 2, 4(9)
  051b4fc  bctrl
  051b500  ld 2, 40(1)
  051b504  cmpwi 7, 3, 0
  051b508  mr 27, 3
  051b50c  bt 30, 0x51b6a0
  051b510  clrldi 28, 3, 32
  051b514  mr 5, 29
  051b518  mr 3, 28
  051b51c  li 4, 0
  051b520  bl 0x5d0140
  051b524  nop
  051b528  cmpwi 7, 26, 0
  051b52c  bt 30, 0x51b6e4
  051b530  clrldi 29, 26, 32
  051b534  lwz 5, 80(30)
  051b538  mr 3, 28
  051b53c  slwi 5, 5, 2
  051b540  mr 4, 29
  051b544  bl 0x5c5ad0
  051b548  nop
  051b54c  lwz 5, 80(30)
  051b550  slwi 3, 5, 2
  051b554  sub 5, 25, 5
  051b558  add 3, 3, 27
  051b55c  li 4, 0
  051b560  slwi 5, 5, 2
  051b564  clrldi 3, 3, 32
  051b568  bl 0x5d0140
  051b56c  nop
  051b570  lwz 9, 8(22)
  051b574  stw 27, 88(30)
  051b578  stw 25, 84(30)
  051b57c  mr 3, 9
  051b580  lwz 11, 0(9)
  051b584  lis 5, 4097
  051b588  mr 4, 29
  051b58c  ori 5, 5, 256
  051b590  li 6, 0
  051b594  li 7, 0
  051b598  lwz 9, 4(11)
  051b59c  lwz 0, 0(9)
  051b5a0  std 2, 40(1)
  051b5a4  mtctr 0
  051b5a8  lwz 2, 4(9)
  051b5ac  bctrl
  051b5b0  ld 2, 40(1)
  051b5b4  lwz 29, 8(22)
  051b5b8  clrldi 31, 23, 32
  051b5bc  mr 3, 31
  051b5c0  bl 0x5c8510
  051b5c4  nop
  051b5c8  lis 5, 4098
  051b5cc  lwz 11, 0(29)
  051b5d0  addi 4, 3, 1
  051b5d4  ori 5, 5, 256
  051b5d8  mr 3, 29
  051b5dc  clrldi 4, 4, 32
  051b5e0  lwz 9, 0(11)
  051b5e4  li 6, 0
  051b5e8  li 7, 0
  051b5ec  lwz 0, 0(9)
  051b5f0  std 2, 40(1)
  051b5f4  mtctr 0
  051b5f8  lwz 2, 4(9)
  051b5fc  bctrl
  051b600  ld 2, 40(1)
  051b604  cmpwi 7, 3, 0
  051b608  mr 28, 3
  051b60c  bt 30, 0x51b6a0
  051b610  mr 3, 31
  051b614  bl 0x5c8510
  051b618  nop
  051b61c  mr 4, 31
  051b620  addi 5, 3, 1
  051b624  clrldi 3, 28, 32
  051b628  clrldi 5, 5, 32
  051b62c  bl 0x5193cc
  051b630  nop
  051b634  lwz 11, 80(30)
  051b638  lwz 0, 88(30)
  051b63c  slwi 9, 11, 2
  051b640  addi 11, 11, 1
  051b644  add 9, 9, 0
  051b648  mr 3, 24
  051b64c  clrldi 9, 9, 32
  051b650  stw 11, 80(30)
  051b654  stw 28, 0(9)
  051b658  bl 0x52dda0
  051b65c  nop
  051b660  ld 0, 208(1)
  051b664  ld 22, 112(1)
  051b668  ld 23, 120(1)
  051b66c  mtlr 0
  051b670  ld 24, 128(1)
  051b674  ld 25, 136(1)
  051b678  ld 26, 144(1)
  051b67c  ld 27, 152(1)
  051b680  ld 28, 160(1)
  051b684  ld 29, 168(1)
  051b688  ld 30, 176(1)
  051b68c  ld 31, 184(1)
  051b690  addi 1, 1, 192
  051b694  blr
  051b698  lwz 22, -30792(2)
  051b69c  b 0x51b5b4
  051b6a0  mr 3, 24
  051b6a4  bl 0x52dda0
  051b6a8  nop
  051b6ac  ld 0, 208(1)
  051b6b0  ld 22, 112(1)
  051b6b4  ld 23, 120(1)
  051b6b8  mtlr 0
  051b6bc  ld 24, 128(1)
  051b6c0  ld 25, 136(1)
  051b6c4  ld 26, 144(1)
  051b6c8  ld 27, 152(1)
  051b6cc  ld 28, 160(1)
  051b6d0  ld 29, 168(1)
  051b6d4  ld 30, 176(1)
  051b6d8  ld 31, 184(1)
  051b6dc  addi 1, 1, 192
  051b6e0  blr
  051b6e4  lwz 5, 80(30)
  051b6e8  li 4, 0
  051b6ec  slwi 3, 5, 2
  051b6f0  sub 5, 25, 5
  051b6f4  add 3, 3, 27
  051b6f8  slwi 5, 5, 2
  051b6fc  clrldi 3, 3, 32
  051b700  bl 0x5d0140
  051b704  nop
  051b708  stw 27, 88(30)
  051b70c  stw 25, 84(30)
  051b710  b 0x51b5b4

FUN_0051b714:   # 0x51b714, 0x2c bytes
  051b714  cmpwi 7, 3, 1
  051b718  li 0, 0
  051b71c  ori 0, 0, 65535
  051b720  bclr 4, 30
  051b724  cmpw 7, 4, 0
  051b728  li 0, 0
  051b72c  bclr 4, 30
  051b730  lwz 9, -30784(2)
  051b734  stw 0, 0(9)
  051b738  stw 0, 4(9)
  051b73c  blr

FUN_0051b740:   # 0x51b740, 0x10 bytes
  051b740  li 4, -1
  051b744  li 3, 1
  051b748  clrldi 4, 4, 48
  051b74c  b 0x51b714

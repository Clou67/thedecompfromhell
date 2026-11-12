# game/debug.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_DEBUG:   # 0x609f0, 0xa0 bytes
  00609f0  lis 3, 114
  00609f4  li 9, 0
  00609f8  addic 3, 3, -5428
  00609fc  lis 5, 1
  0060a00  ori 4, 9, 0
  0060a04  lis 6, 6
  0060a08  lis 10, 149
  0060a0c  ori 7, 4, 0
  0060a10  addi 6, 6, 2536
  0060a14  stw 5, 72(3)
  0060a18  addic 3, 10, 16576
  0060a1c  lfs 1, 0(6)
  0060a20  ori 5, 4, 0
  0060a24  addc 8, 3, 7
  0060a28  li 3, 256
  0060a2c  clrldi 8, 8, 32
  0060a30  stw 4, 4(8)
  0060a34  stfs 1, 8(8)
  0060a38  stfs 1, 12(8)
  0060a3c  stfs 1, 16(8)
  0060a40  stfs 1, 20(8)
  0060a44  stfs 1, 24(8)
  0060a48  stfs 1, 28(8)
  0060a4c  stfs 1, 32(8)
  0060a50  stfs 1, 36(8)
  0060a54  addic 11, 8, 40
  0060a58  addic 3, 3, -1
  0060a5c  addc 11, 11, 5
  0060a60  cmpwi 3, 0
  0060a64  clrldi 11, 11, 32
  0060a68  addic 5, 5, 12
  0060a6c  stfs 1, 0(11)
  0060a70  stfs 1, 4(11)
  0060a74  stfs 1, 8(11)
  0060a78  bf 2, 0x60a54
  0060a7c  addic 9, 9, 1
  0060a80  addic 7, 7, 3112
  0060a84  cmpwi 9, 8
  0060a88  bt 0, 0x60a18
  0060a8c  blr

ResetDebugEnables:   # 0x60a90, 0x30 bytes
  0060a90  lis 3, 150
  0060a94  li 5, 5
  0060a98  li 4, 1
  0060a9c  addic 3, 3, -23188
  0060aa0  mtctr 5
  0060aa4  stw 4, 0(3)
  0060aa8  stw 4, 4(3)
  0060aac  stw 4, 8(3)
  0060ab0  stw 4, 12(3)
  0060ab4  addic 3, 3, 16
  0060ab8  bdnz 0x60aa4
  0060abc  blr

DebugFontPrintLeft:   # 0x60ac0, 0x8c bytes
  0060ac0  stdu 1, -128(1)
  0060ac4  mflr 0
  0060ac8  std 0, 144(1)
  0060acc  lis 7, 150
  0060ad0  std 31, 120(1)
  0060ad4  lis 8, 150
  0060ad8  lis 31, 114
  0060adc  addic 8, 8, -21060
  0060ae0  lis 11, 101
  0060ae4  lwz 9, -14916(7)
  0060ae8  slwi 10, 9, 4
  0060aec  std 30, 112(1)
  0060af0  addic 9, 9, 1
  0060af4  lwz 30, -5320(31)
  0060af8  extsw 10, 10
  0060afc  addc 12, 8, 10
  0060b00  stwx 3, 8, 10
  0060b04  stw 9, -14916(7)
  0060b08  stw 4, 4(12)
  0060b0c  ori 3, 30, 0
  0060b10  stw 5, 8(12)
  0060b14  addic 4, 11, 7136
  0060b18  stw 30, 12(12)
  0060b1c  ori 5, 6, 0
  0060b20  bl 0x5cd2a8
  0060b24  nop
  0060b28  addic 3, 3, 1
  0060b2c  addc 3, 30, 3
  0060b30  stw 3, -5320(31)
  0060b34  ld 0, 144(1)
  0060b38  mtlr 0
  0060b3c  ld 30, 112(1)
  0060b40  ld 31, 120(1)
  0060b44  addi 1, 1, 128
  0060b48  blr

DebugFontPrintfLeft:   # 0x60b4c, 0xf4 bytes
  0060b4c  stdu 1, -672(1)
  0060b50  mflr 0
  0060b54  std 0, 688(1)
  0060b58  std 31, 664(1)
  0060b5c  ori 31, 5, 0
  0060b60  std 30, 656(1)
  0060b64  li 5, 672
  0060b68  ori 30, 4, 0
  0060b6c  addc 11, 1, 5
  0060b70  std 28, 640(1)
  0060b74  addc 4, 1, 5
  0060b78  addic 28, 1, 112
  0060b7c  std 29, 648(1)
  0060b80  addic 5, 4, 80
  0060b84  ori 29, 3, 0
  0060b88  stw 6, 76(11)
  0060b8c  ori 3, 28, 0
  0060b90  std 7, 80(11)
  0060b94  ori 4, 6, 0
  0060b98  std 8, 88(11)
  0060b9c  std 27, 632(1)
  0060ba0  std 26, 624(1)
  0060ba4  clrldi 5, 5, 32
  0060ba8  std 9, 96(11)
  0060bac  std 10, 104(11)
  0060bb0  bl 0x5cd52c
  0060bb4  nop
  0060bb8  lis 3, 150
  0060bbc  lis 4, 150
  0060bc0  lis 27, 114
  0060bc4  addic 5, 4, -21060
  0060bc8  lis 7, 101
  0060bcc  lwz 4, -14916(3)
  0060bd0  addic 6, 4, 1
  0060bd4  lwz 26, -5320(27)
  0060bd8  slwi 4, 4, 4
  0060bdc  extsw 8, 4
  0060be0  stw 6, -14916(3)
  0060be4  addic 4, 7, 7136
  0060be8  addc 6, 5, 8
  0060bec  ori 3, 26, 0
  0060bf0  stwx 29, 5, 8
  0060bf4  ori 5, 28, 0
  0060bf8  stw 30, 4(6)
  0060bfc  stw 31, 8(6)
  0060c00  stw 26, 12(6)
  0060c04  bl 0x5cd2a8
  0060c08  nop
  0060c0c  addic 3, 3, 1
  0060c10  addc 3, 26, 3
  0060c14  stw 3, -5320(27)
  0060c18  ld 0, 688(1)
  0060c1c  mtlr 0
  0060c20  ld 26, 624(1)
  0060c24  ld 27, 632(1)
  0060c28  ld 28, 640(1)
  0060c2c  ld 29, 648(1)
  0060c30  ld 30, 656(1)
  0060c34  ld 31, 664(1)
  0060c38  addi 1, 1, 672
  0060c3c  blr

STUB_00060c40:   # 0x60c40, 0x4 bytes
  0060c40  blr

ResetDebugFontStrings:   # 0x60c44, 0x20 bytes
  0060c44  lis 3, 150
  0060c48  lis 4, 150
  0060c4c  li 5, 0
  0060c50  lis 6, 114
  0060c54  addic 3, 3, -23108
  0060c58  stw 5, -14916(4)
  0060c5c  stw 3, -5320(6)
  0060c60  blr

DebugFontPrintCenter:   # 0x60c64, 0x124 bytes
  0060c64  stdu 1, -144(1)
  0060c68  mflr 0
  0060c6c  std 0, 160(1)
  0060c70  ori 7, 6, 0
  0060c74  ori 9, 5, 0
  0060c78  ori 6, 3, 0
  0060c7c  ori 5, 4, 0
  0060c80  ori 3, 7, 0
  0060c84  lbz 10, 0(7)
  0060c88  li 8, 0
  0060c8c  ori 4, 9, 0
  0060c90  std 31, 136(1)
  0060c94  std 30, 128(1)
  0060c98  std 29, 120(1)
  0060c9c  cmpwi 10, 0
  0060ca0  bt 2, 0x60cf4
  0060ca4  lis 9, 114
  0060ca8  addic 9, 9, -4932
  0060cac  lbz 31, 0(7)
  0060cb0  li 10, 96
  0060cb4  addic 31, 31, -32
  0060cb8  li 12, 32
  0060cbc  clrlwi 31, 31, 24
  0060cc0  ori 11, 7, 0
  0060cc4  subc 10, 31, 10
  0060cc8  subc 31, 31, 12
  0060ccc  sradi 10, 10, 63
  0060cd0  addic 7, 7, 1
  0060cd4  and 10, 10, 31
  0060cd8  lbz 11, 1(11)
  0060cdc  addc 10, 12, 10
  0060ce0  cmpwi 11, 0
  0060ce4  slwi 10, 10, 2
  0060ce8  lwzx 10, 9, 10
  0060cec  addc 8, 8, 10
  0060cf0  bf 2, 0x60cac
  0060cf4  lis 10, 150
  0060cf8  ori 7, 3, 0
  0060cfc  srawi 3, 8, 1
  0060d00  ori 9, 4, 0
  0060d04  subc 3, 6, 3
  0060d08  lwz 6, -14916(10)
  0060d0c  lis 4, 150
  0060d10  extsw 30, 3
  0060d14  slwi 3, 6, 4
  0060d18  lis 31, 114
  0060d1c  addic 8, 4, -21060
  0060d20  extsw 3, 3
  0060d24  addic 6, 6, 1
  0060d28  addc 11, 8, 3
  0060d2c  lwz 29, -5320(31)
  0060d30  lis 4, 101
  0060d34  stwx 30, 8, 3
  0060d38  ori 3, 29, 0
  0060d3c  stw 5, 4(11)
  0060d40  stw 9, 8(11)
  0060d44  addic 4, 4, 7136
  0060d48  stw 6, -14916(10)
  0060d4c  ori 5, 7, 0
  0060d50  stw 29, 12(11)
  0060d54  bl 0x5cd2a8
  0060d58  nop
  0060d5c  addic 4, 3, 1
  0060d60  ori 3, 30, 0
  0060d64  addc 4, 29, 4
  0060d68  stw 4, -5320(31)
  0060d6c  ld 0, 160(1)
  0060d70  mtlr 0
  0060d74  ld 29, 120(1)
  0060d78  ld 30, 128(1)
  0060d7c  ld 31, 136(1)
  0060d80  addi 1, 1, 144
  0060d84  blr

DebugFontPrintfCenter:   # 0x60d88, 0x168 bytes
  0060d88  stdu 1, -672(1)
  0060d8c  mflr 0
  0060d90  std 0, 688(1)
  0060d94  std 31, 664(1)
  0060d98  ori 31, 5, 0
  0060d9c  std 30, 656(1)
  0060da0  li 5, 672
  0060da4  ori 30, 4, 0
  0060da8  addc 11, 1, 5
  0060dac  std 29, 648(1)
  0060db0  addc 4, 1, 5
  0060db4  addic 29, 1, 112
  0060db8  std 28, 640(1)
  0060dbc  addic 5, 4, 80
  0060dc0  ori 28, 3, 0
  0060dc4  stw 6, 76(11)
  0060dc8  clrldi 5, 5, 32
  0060dcc  std 7, 80(11)
  0060dd0  ori 4, 6, 0
  0060dd4  std 8, 88(11)
  0060dd8  std 27, 632(1)
  0060ddc  std 26, 624(1)
  0060de0  ori 3, 29, 0
  0060de4  std 9, 96(11)
  0060de8  std 10, 104(11)
  0060dec  bl 0x5cd52c
  0060df0  nop
  0060df4  lbz 5, 112(1)
  0060df8  ori 3, 28, 0
  0060dfc  li 4, 0
  0060e00  cmpwi 5, 0
  0060e04  bt 2, 0x60e58
  0060e08  lis 5, 114
  0060e0c  ori 6, 29, 0
  0060e10  addic 5, 5, -4932
  0060e14  lbz 9, 0(6)
  0060e18  li 7, 96
  0060e1c  li 8, 32
  0060e20  lbz 10, 1(6)
  0060e24  addic 9, 9, -32
  0060e28  cmpwi 10, 0
  0060e2c  clrlwi 9, 9, 24
  0060e30  addic 6, 6, 1
  0060e34  subc 7, 9, 7
  0060e38  subc 9, 9, 8
  0060e3c  sradi 7, 7, 63
  0060e40  and 7, 7, 9
  0060e44  addc 7, 8, 7
  0060e48  slwi 7, 7, 2
  0060e4c  lwzx 7, 5, 7
  0060e50  addc 4, 4, 7
  0060e54  bf 2, 0x60e14
  0060e58  lis 6, 150
  0060e5c  srawi 4, 4, 1
  0060e60  lis 5, 150
  0060e64  subc 3, 3, 4
  0060e68  lis 28, 114
  0060e6c  lwz 4, -14916(6)
  0060e70  extsw 27, 3
  0060e74  addic 5, 5, -21060
  0060e78  slwi 3, 4, 4
  0060e7c  addic 9, 4, 1
  0060e80  extsw 3, 3
  0060e84  lwz 26, -5320(28)
  0060e88  lis 7, 101
  0060e8c  addc 8, 5, 3
  0060e90  addic 4, 7, 7136
  0060e94  stwx 27, 5, 3
  0060e98  ori 3, 26, 0
  0060e9c  stw 30, 4(8)
  0060ea0  ori 5, 29, 0
  0060ea4  stw 31, 8(8)
  0060ea8  stw 9, -14916(6)
  0060eac  stw 26, 12(8)
  0060eb0  bl 0x5cd2a8
  0060eb4  nop
  0060eb8  addic 4, 3, 1
  0060ebc  ori 3, 27, 0
  0060ec0  addc 4, 26, 4
  0060ec4  stw 4, -5320(28)
  0060ec8  ld 0, 688(1)
  0060ecc  mtlr 0
  0060ed0  ld 26, 624(1)
  0060ed4  ld 27, 632(1)
  0060ed8  ld 28, 640(1)
  0060edc  ld 29, 648(1)
  0060ee0  ld 30, 656(1)
  0060ee4  ld 31, 664(1)
  0060ee8  addi 1, 1, 672
  0060eec  blr

DebugFontPrintRight:   # 0x60ef0, 0x110 bytes
  0060ef0  stdu 1, -128(1)
  0060ef4  mflr 0
  0060ef8  std 0, 144(1)
  0060efc  ori 7, 6, 0
  0060f00  ori 9, 5, 0
  0060f04  ori 6, 3, 0
  0060f08  ori 5, 4, 0
  0060f0c  ori 3, 7, 0
  0060f10  lbz 10, 0(7)
  0060f14  li 8, 0
  0060f18  ori 4, 9, 0
  0060f1c  std 31, 120(1)
  0060f20  std 30, 112(1)
  0060f24  cmpwi 10, 0
  0060f28  bt 2, 0x60f7c
  0060f2c  lis 9, 114
  0060f30  addic 9, 9, -4932
  0060f34  lbz 31, 0(7)
  0060f38  li 10, 96
  0060f3c  addic 31, 31, -32
  0060f40  li 12, 32
  0060f44  clrlwi 31, 31, 24
  0060f48  ori 11, 7, 0
  0060f4c  subc 10, 31, 10
  0060f50  subc 31, 31, 12
  0060f54  sradi 10, 10, 63
  0060f58  addic 7, 7, 1
  0060f5c  and 10, 10, 31
  0060f60  lbz 11, 1(11)
  0060f64  addc 10, 12, 10
  0060f68  cmpwi 11, 0
  0060f6c  slwi 10, 10, 2
  0060f70  lwzx 10, 9, 10
  0060f74  addc 8, 8, 10
  0060f78  bf 2, 0x60f34
  0060f7c  ori 7, 5, 0
  0060f80  ori 5, 3, 0
  0060f84  lis 3, 150
  0060f88  ori 9, 4, 0
  0060f8c  lis 4, 150
  0060f90  lis 31, 114
  0060f94  addic 10, 4, -21060
  0060f98  lwz 4, -14916(3)
  0060f9c  subc 6, 6, 8
  0060fa0  lis 11, 101
  0060fa4  addic 8, 4, 1
  0060fa8  slwi 4, 4, 4
  0060fac  lwz 30, -5320(31)
  0060fb0  extsw 12, 4
  0060fb4  stw 8, -14916(3)
  0060fb8  addc 8, 10, 12
  0060fbc  ori 3, 30, 0
  0060fc0  addic 4, 11, 7136
  0060fc4  stwx 6, 10, 12
  0060fc8  stw 7, 4(8)
  0060fcc  stw 9, 8(8)
  0060fd0  stw 30, 12(8)
  0060fd4  bl 0x5cd2a8
  0060fd8  nop
  0060fdc  addic 3, 3, 1
  0060fe0  addc 3, 30, 3
  0060fe4  stw 3, -5320(31)
  0060fe8  ld 0, 144(1)
  0060fec  mtlr 0
  0060ff0  ld 30, 112(1)
  0060ff4  ld 31, 120(1)
  0060ff8  addi 1, 1, 128
  0060ffc  blr

DebugFontPrintfRight:   # 0x61000, 0x154 bytes
  0061000  stdu 1, -672(1)
  0061004  mflr 0
  0061008  std 0, 688(1)
  006100c  std 31, 664(1)
  0061010  ori 31, 5, 0
  0061014  std 30, 656(1)
  0061018  li 5, 672
  006101c  ori 30, 4, 0
  0061020  addc 11, 1, 5
  0061024  std 29, 648(1)
  0061028  addc 4, 1, 5
  006102c  addic 29, 1, 112
  0061030  std 28, 640(1)
  0061034  addic 5, 4, 80
  0061038  ori 28, 3, 0
  006103c  stw 6, 76(11)
  0061040  clrldi 5, 5, 32
  0061044  std 7, 80(11)
  0061048  ori 4, 6, 0
  006104c  std 8, 88(11)
  0061050  std 27, 632(1)
  0061054  ori 3, 29, 0
  0061058  std 9, 96(11)
  006105c  std 10, 104(11)
  0061060  bl 0x5cd52c
  0061064  nop
  0061068  lbz 5, 112(1)
  006106c  ori 3, 28, 0
  0061070  li 4, 0
  0061074  cmpwi 5, 0
  0061078  bt 2, 0x610cc
  006107c  lis 5, 114
  0061080  ori 6, 29, 0
  0061084  addic 5, 5, -4932
  0061088  lbz 9, 0(6)
  006108c  li 7, 96
  0061090  li 8, 32
  0061094  lbz 10, 1(6)
  0061098  addic 9, 9, -32
  006109c  cmpwi 10, 0
  00610a0  clrlwi 9, 9, 24
  00610a4  addic 6, 6, 1
  00610a8  subc 7, 9, 7
  00610ac  subc 9, 9, 8
  00610b0  sradi 7, 7, 63
  00610b4  and 7, 7, 9
  00610b8  addc 7, 8, 7
  00610bc  slwi 7, 7, 2
  00610c0  lwzx 7, 5, 7
  00610c4  addc 4, 4, 7
  00610c8  bf 2, 0x61088
  00610cc  lis 5, 150
  00610d0  subc 7, 3, 4
  00610d4  lis 6, 150
  00610d8  lis 28, 114
  00610dc  addic 6, 6, -21060
  00610e0  lwz 3, -14916(5)
  00610e4  lis 8, 101
  00610e8  addic 4, 3, 1
  00610ec  slwi 3, 3, 4
  00610f0  lwz 27, -5320(28)
  00610f4  extsw 9, 3
  00610f8  stw 4, -14916(5)
  00610fc  ori 3, 27, 0
  0061100  addc 10, 6, 9
  0061104  addic 4, 8, 7136
  0061108  ori 5, 29, 0
  006110c  stwx 7, 6, 9
  0061110  stw 30, 4(10)
  0061114  stw 31, 8(10)
  0061118  stw 27, 12(10)
  006111c  bl 0x5cd2a8
  0061120  nop
  0061124  addic 3, 3, 1
  0061128  addc 3, 27, 3
  006112c  stw 3, -5320(28)
  0061130  ld 0, 688(1)
  0061134  mtlr 0
  0061138  ld 27, 632(1)
  006113c  ld 28, 640(1)
  0061140  ld 29, 648(1)
  0061144  ld 30, 656(1)
  0061148  ld 31, 664(1)
  006114c  addi 1, 1, 672
  0061150  blr

DebugFontStringWidth:   # 0x61154, 0x4c bytes
  0061154  lbz 5, 0(3)
  0061158  li 4, 0
  006115c  cmpwi 5, 0
  0061160  bt 2, 0x61198
  0061164  lis 5, 114
  0061168  addic 5, 5, -4932
  006116c  lbz 7, 0(3)
  0061170  ori 6, 3, 0
  0061174  addic 3, 3, 1
  0061178  addic 7, 7, -32
  006117c  rlwinm 7, 7, 2, 22, 29
  0061180  lbz 6, 1(6)
  0061184  cmpwi 6, 0
  0061188  lwzx 6, 5, 7
  006118c  addc 4, 4, 6
  0061190  extsw 4, 4
  0061194  bf 2, 0x6116c
  0061198  ori 3, 4, 0
  006119c  blr

DebugFontPrintN:   # 0x611a0, 0xf0 bytes
  00611a0  stdu 1, -288(1)
  00611a4  mflr 0
  00611a8  std 0, 304(1)
  00611ac  std 28, 256(1)
  00611b0  std 29, 264(1)
  00611b4  ori 28, 3, 0
  00611b8  cmpwi 7, 0
  00611bc  std 30, 272(1)
  00611c0  ori 29, 4, 0
  00611c4  ori 30, 5, 0
  00611c8  std 31, 280(1)
  00611cc  ori 3, 6, 0
  00611d0  std 27, 248(1)
  00611d4  std 26, 240(1)
  00611d8  ori 31, 7, 0
  00611dc  bf 1, 0x61268
  00611e0  addic 27, 1, 112
  00611e4  ori 4, 3, 0
  00611e8  clrldi 5, 31, 32
  00611ec  ori 3, 27, 0
  00611f0  bl 0x5c5ad0
  00611f4  nop
  00611f8  lis 5, 150
  00611fc  addc 3, 1, 31
  0061200  lis 4, 150
  0061204  clrldi 3, 3, 32
  0061208  li 6, 0
  006120c  lwz 7, -14916(5)
  0061210  addic 8, 4, -21060
  0061214  slwi 4, 7, 4
  0061218  lis 31, 114
  006121c  stb 6, 112(3)
  0061220  extsw 3, 4
  0061224  addic 6, 7, 1
  0061228  addc 7, 8, 3
  006122c  lis 9, 101
  0061230  lwz 26, -5320(31)
  0061234  stwx 28, 8, 3
  0061238  stw 6, -14916(5)
  006123c  ori 3, 26, 0
  0061240  stw 29, 4(7)
  0061244  addic 4, 9, 7136
  0061248  stw 30, 8(7)
  006124c  ori 5, 27, 0
  0061250  stw 26, 12(7)
  0061254  bl 0x5cd2a8
  0061258  nop
  006125c  addic 3, 3, 1
  0061260  addc 3, 26, 3
  0061264  stw 3, -5320(31)
  0061268  ld 0, 304(1)
  006126c  mtlr 0
  0061270  ld 26, 240(1)
  0061274  ld 27, 248(1)
  0061278  ld 28, 256(1)
  006127c  ld 29, 264(1)
  0061280  ld 30, 272(1)
  0061284  ld 31, 280(1)
  0061288  addi 1, 1, 288
  006128c  blr

AssertFailed:   # 0x61290, 0x40 bytes
  0061290  stdu 1, -112(1)
  0061294  mflr 0
  0061298  std 0, 128(1)
  006129c  ori 7, 3, 0
  00612a0  ori 6, 4, 0
  00612a4  lis 3, 101
  00612a8  ori 4, 5, 0
  00612ac  addic 3, 3, 7140
  00612b0  ori 5, 7, 0
  00612b4  bl 0x5cd098
  00612b8  nop
  00612bc  trap
  00612c0  ld 0, 128(1)
  00612c4  mtlr 0
  00612c8  addi 1, 1, 112
  00612cc  blr

STUB_000612d0:   # 0x612d0, 0x4 bytes
  00612d0  blr

STUB_000612d4:   # 0x612d4, 0x4 bytes
  00612d4  blr

STUB_000612d8:   # 0x612d8, 0x4 bytes
  00612d8  blr

STUB_000612dc:   # 0x612dc, 0x4 bytes
  00612dc  blr

STUB_000612e0:   # 0x612e0, 0x4 bytes
  00612e0  blr

STUB_000612e4:   # 0x612e4, 0x4 bytes
  00612e4  blr

STUB_000612e8:   # 0x612e8, 0x4 bytes
  00612e8  blr

STUB_000612ec:   # 0x612ec, 0x4 bytes
  00612ec  blr

STUB_000612f0:   # 0x612f0, 0x4 bytes
  00612f0  blr

STUB_000612f4:   # 0x612f4, 0x4 bytes
  00612f4  blr

STUB_000612f8:   # 0x612f8, 0x4 bytes
  00612f8  blr

STUB_000612fc:   # 0x612fc, 0x4 bytes
  00612fc  blr

STUB_00061300:   # 0x61300, 0x4 bytes
  0061300  blr

STUB_00061304:   # 0x61304, 0x4 bytes
  0061304  blr

STUB_00061308:   # 0x61308, 0x4 bytes
  0061308  blr

STUB_0006130c:   # 0x6130c, 0x4 bytes
  006130c  blr

STUB_00061310:   # 0x61310, 0x4 bytes
  0061310  blr

STUB_00061314:   # 0x61314, 0x4 bytes
  0061314  blr

STUB_00061318:   # 0x61318, 0x4 bytes
  0061318  blr

STUB_0006131c:   # 0x6131c, 0x4 bytes
  006131c  blr

STUB_00061320:   # 0x61320, 0x4 bytes
  0061320  blr

STUB_00061324:   # 0x61324, 0x4 bytes
  0061324  blr

STUB_00061328:   # 0x61328, 0x4 bytes
  0061328  blr

STUB_0006132c:   # 0x6132c, 0x4 bytes
  006132c  blr

STUB_00061330:   # 0x61330, 0x4 bytes
  0061330  blr

STUB_00061334:   # 0x61334, 0x4 bytes
  0061334  blr

STUB_00061338:   # 0x61338, 0x4 bytes
  0061338  blr

STUB_0006133c:   # 0x6133c, 0x4 bytes
  006133c  blr

STUB_00061340:   # 0x61340, 0x4 bytes
  0061340  blr

STUB_00061344:   # 0x61344, 0x4 bytes
  0061344  blr

STUB_00061348:   # 0x61348, 0x4 bytes
  0061348  blr

STUB_0006134c:   # 0x6134c, 0x4 bytes
  006134c  blr

STUB_00061350:   # 0x61350, 0x4 bytes
  0061350  blr

STUB_00061354:   # 0x61354, 0x4 bytes
  0061354  blr

DebugCamera:   # 0x613a0, 0x11d4 bytes
  00613a0  stdu 1, -736(1)
  00613a4  mflr 0
  00613a8  std 0, 752(1)
  00613ac  stfd 27, 696(1)
  00613b0  stfd 28, 704(1)
  00613b4  stfd 29, 712(1)
  00613b8  stfd 30, 720(1)
  00613bc  stfd 31, 728(1)
  00613c0  std 29, 672(1)
  00613c4  std 27, 656(1)
  00613c8  lis 29, 150
  00613cc  li 27, 0
  00613d0  std 30, 680(1)
  00613d4  addic 29, 29, 19008
  00613d8  ori 30, 27, 0
  00613dc  lwz 3, 160(29)
  00613e0  rlwinm 4, 3, 0, 20, 20
  00613e4  std 31, 688(1)
  00613e8  std 28, 664(1)
  00613ec  std 26, 648(1)
  00613f0  std 25, 640(1)
  00613f4  std 24, 632(1)
  00613f8  cmpwi 4, 0
  00613fc  bf 2, 0x62530
  0061400  lis 31, 150
  0061404  addic 31, 31, -14912
  0061408  lwz 4, 8(31)
  006140c  rlwinm 4, 4, 0, 28, 28
  0061410  cmpwi 4, 0
  0061414  bt 2, 0x61424
  0061418  bl 0x50ae0
  006141c  nop
  0061420  lwz 3, 160(29)
  0061424  lwz 4, 216(29)
  0061428  cmpwi 4, 0
  006142c  bf 2, 0x62530
  0061430  lis 4, 151
  0061434  clrlwi 5, 3, 31
  0061438  addic 4, 4, -25376
  006143c  cmpwi 6, 5, 0
  0061440  lhz 28, 776(4)
  0061444  addic 28, 28, -2
  0061448  cmpwi 1, 28, 0
  006144c  cmpwi 7, 28, 0
  0061450  bt 26, 0x61460
  0061454  rlwinm 4, 3, 0, 30, 30
  0061458  cmpwi 4, 0
  006145c  bf 2, 0x61a78
  0061460  rlwinm 4, 3, 0, 19, 19
  0061464  cmpwi 4, 0
  0061468  bt 2, 0x615d8
  006146c  bf 6, 0x6150c
  0061470  lis 4, 149
  0061474  addic 4, 4, 5056
  0061478  lfs 1, 852(4)
  006147c  lfs 2, 848(4)
  0061480  fmuls 3, 1, 1
  0061484  lfs 4, 856(4)
  0061488  lfs 5, 112(31)
  006148c  lis 5, 6
  0061490  fmadds 3, 2, 2, 3
  0061494  addi 5, 5, 4952
  0061498  fmadds 3, 4, 4, 3
  006149c  lfs 6, 0(5)
  00614a0  lfs 7, 320(4)
  00614a4  lfs 8, 324(4)
  00614a8  lfs 9, 328(4)
  00614ac  fsqrts 3, 3
  00614b0  fdivs 5, 5, 3
  00614b4  fsub 10, 6, 3
  00614b8  fsub 11, 6, 3
  00614bc  fsub 12, 6, 3
  00614c0  fsub 13, 3, 6
  00614c4  fsub 0, 3, 6
  00614c8  fsub 3, 3, 6
  00614cc  fmuls 4, 4, 5
  00614d0  fmuls 1, 1, 5
  00614d4  fmuls 2, 2, 5
  00614d8  fsel 5, 10, 6, 4
  00614dc  fsel 10, 11, 6, 1
  00614e0  fsel 6, 12, 6, 2
  00614e4  fsel 4, 13, 5, 4
  00614e8  fsel 1, 0, 10, 1
  00614ec  fsel 2, 3, 6, 2
  00614f0  fadds 3, 9, 4
  00614f4  fadds 1, 8, 1
  00614f8  fadds 2, 7, 2
  00614fc  stfs 3, 328(4)
  0061500  stfs 1, 324(4)
  0061504  stfs 2, 320(4)
  0061508  b 0x615d4
  006150c  lis 4, 6
  0061510  lis 5, 149
  0061514  addi 4, 4, 4952
  0061518  addic 5, 5, 5056
  006151c  lfs 1, 4(4)
  0061520  lfs 2, 344(5)
  0061524  lfs 3, 8(4)
  0061528  fadds 1, 2, 1
  006152c  fsubs 5, 3, 2
  0061530  lfs 4, 12(4)
  0061534  fsubs 3, 3, 1
  0061538  fsub 7, 2, 5
  006153c  fsubs 6, 4, 1
  0061540  fsubs 4, 4, 2
  0061544  fsub 8, 1, 3
  0061548  fsel 2, 7, 5, 2
  006154c  lfs 5, 16(4)
  0061550  fsel 1, 8, 3, 1
  0061554  fsub 3, 4, 2
  0061558  fsub 8, 6, 1
  006155c  fsel 2, 3, 4, 2
  0061560  lfs 3, 20(4)
  0061564  lfs 4, 24(4)
  0061568  lfs 7, 320(5)
  006156c  fsel 1, 8, 6, 1
  0061570  fmuls 6, 2, 2
  0061574  fmuls 8, 1, 1
  0061578  fmuls 9, 6, 2
  006157c  fmuls 11, 8, 1
  0061580  fmuls 12, 6, 9
  0061584  fmadds 2, 9, 5, 2
  0061588  lfs 9, 28(4)
  006158c  fmuls 10, 8, 11
  0061590  fmadds 1, 11, 5, 1
  0061594  fmuls 5, 6, 12
  0061598  lfs 11, 112(31)
  006159c  fmadds 2, 12, 3, 2
  00615a0  lfs 12, 324(5)
  00615a4  fmuls 13, 8, 10
  00615a8  fmadds 1, 10, 3, 1
  00615ac  fmuls 3, 6, 5
  00615b0  fmadds 2, 5, 4, 2
  00615b4  fmuls 5, 8, 13
  00615b8  fmadds 1, 13, 4, 1
  00615bc  fmadds 2, 3, 9, 2
  00615c0  fmadds 1, 5, 9, 1
  00615c4  fmadds 2, 2, 11, 12
  00615c8  fmadds 1, 1, 11, 7
  00615cc  stfs 2, 324(5)
  00615d0  stfs 1, 320(5)
  00615d4  li 27, 1
  00615d8  rlwinm 4, 3, 0, 17, 17
  00615dc  cmpwi 4, 0
  00615e0  bt 2, 0x61750
  00615e4  bf 6, 0x61684
  00615e8  lis 4, 149
  00615ec  addic 4, 4, 5056
  00615f0  lfs 1, 852(4)
  00615f4  lfs 2, 848(4)
  00615f8  fmuls 3, 1, 1
  00615fc  lfs 4, 856(4)
  0061600  lfs 5, 112(31)
  0061604  lis 5, 6
  0061608  fmadds 3, 2, 2, 3
  006160c  addi 5, 5, 4952
  0061610  fmadds 3, 4, 4, 3
  0061614  lfs 6, 0(5)
  0061618  lfs 7, 320(4)
  006161c  lfs 8, 324(4)
  0061620  lfs 9, 328(4)
  0061624  fsqrts 3, 3
  0061628  fdivs 5, 5, 3
  006162c  fsub 10, 6, 3
  0061630  fsub 11, 6, 3
  0061634  fsub 12, 6, 3
  0061638  fsub 13, 3, 6
  006163c  fsub 0, 3, 6
  0061640  fsub 3, 3, 6
  0061644  fmuls 4, 4, 5
  0061648  fmuls 1, 1, 5
  006164c  fmuls 2, 2, 5
  0061650  fsel 5, 10, 6, 4
  0061654  fsel 10, 11, 6, 1
  0061658  fsel 6, 12, 6, 2
  006165c  fsel 4, 13, 5, 4
  0061660  fsel 1, 0, 10, 1
  0061664  fsel 2, 3, 6, 2
  0061668  fsubs 3, 9, 4
  006166c  fsubs 1, 8, 1
  0061670  fsubs 2, 7, 2
  0061674  stfs 3, 328(4)
  0061678  stfs 1, 324(4)
  006167c  stfs 2, 320(4)
  0061680  b 0x6174c
  0061684  lis 4, 6
  0061688  lis 5, 149
  006168c  addi 4, 4, 4952
  0061690  addic 5, 5, 5056
  0061694  lfs 1, 4(4)
  0061698  lfs 2, 344(5)
  006169c  lfs 3, 8(4)
  00616a0  fadds 1, 2, 1
  00616a4  fsubs 5, 3, 2
  00616a8  lfs 4, 12(4)
  00616ac  fsubs 3, 3, 1
  00616b0  fsub 7, 2, 5
  00616b4  fsubs 6, 4, 1
  00616b8  fsubs 4, 4, 2
  00616bc  fsub 8, 1, 3
  00616c0  fsel 2, 7, 5, 2
  00616c4  lfs 5, 16(4)
  00616c8  fsel 1, 8, 3, 1
  00616cc  fsub 3, 4, 2
  00616d0  fsub 8, 6, 1
  00616d4  fsel 2, 3, 4, 2
  00616d8  lfs 3, 20(4)
  00616dc  lfs 4, 24(4)
  00616e0  lfs 7, 320(5)
  00616e4  fsel 1, 8, 6, 1
  00616e8  fmuls 6, 2, 2
  00616ec  fmuls 8, 1, 1
  00616f0  fmuls 9, 6, 2
  00616f4  fmuls 11, 8, 1
  00616f8  fmuls 12, 6, 9
  00616fc  fmadds 2, 9, 5, 2
  0061700  lfs 9, 28(4)
  0061704  fmuls 10, 8, 11
  0061708  fmadds 1, 11, 5, 1
  006170c  fmuls 5, 6, 12
  0061710  lfs 11, 112(31)
  0061714  fmadds 2, 12, 3, 2
  0061718  lfs 12, 324(5)
  006171c  fmuls 13, 8, 10
  0061720  fmadds 1, 10, 3, 1
  0061724  fmuls 3, 6, 5
  0061728  fmadds 2, 5, 4, 2
  006172c  fmuls 5, 8, 13
  0061730  fmadds 1, 13, 4, 1
  0061734  fmadds 2, 3, 9, 2
  0061738  fmadds 1, 5, 9, 1
  006173c  fnmsubs 2, 2, 11, 12
  0061740  fnmsubs 1, 1, 11, 7
  0061744  stfs 2, 324(5)
  0061748  stfs 1, 320(5)
  006174c  li 27, 1
  0061750  bt 26, 0x618c0
  0061754  bf 6, 0x617f4
  0061758  lis 4, 149
  006175c  addic 4, 4, 5056
  0061760  lfs 1, 868(4)
  0061764  lfs 2, 864(4)
  0061768  fmuls 3, 1, 1
  006176c  lfs 4, 872(4)
  0061770  lfs 5, 112(31)
  0061774  lis 5, 6
  0061778  fmadds 3, 2, 2, 3
  006177c  addi 5, 5, 4952
  0061780  fmadds 3, 4, 4, 3
  0061784  lfs 6, 0(5)
  0061788  lfs 7, 320(4)
  006178c  lfs 8, 324(4)
  0061790  lfs 9, 328(4)
  0061794  fsqrts 3, 3
  0061798  fdivs 5, 5, 3
  006179c  fsub 10, 6, 3
  00617a0  fsub 11, 6, 3
  00617a4  fsub 12, 6, 3
  00617a8  fsub 13, 3, 6
  00617ac  fsub 0, 3, 6
  00617b0  fsub 3, 3, 6
  00617b4  fmuls 4, 4, 5
  00617b8  fmuls 1, 1, 5
  00617bc  fmuls 2, 2, 5
  00617c0  fsel 5, 10, 6, 4
  00617c4  fsel 10, 11, 6, 1
  00617c8  fsel 6, 12, 6, 2
  00617cc  fsel 4, 13, 5, 4
  00617d0  fsel 1, 0, 10, 1
  00617d4  fsel 2, 3, 6, 2
  00617d8  fadds 3, 9, 4
  00617dc  fadds 1, 8, 1
  00617e0  fadds 2, 7, 2
  00617e4  stfs 3, 328(4)
  00617e8  stfs 1, 324(4)
  00617ec  stfs 2, 320(4)
  00617f0  b 0x618bc
  00617f4  lis 4, 6
  00617f8  lis 5, 149
  00617fc  addi 4, 4, 4952
  0061800  addic 5, 5, 5056
  0061804  lfs 1, 8(4)
  0061808  lfs 2, 344(5)
  006180c  lfs 3, 12(4)
  0061810  fsubs 4, 1, 2
  0061814  fsubs 5, 3, 2
  0061818  fsub 6, 2, 4
  006181c  fsel 4, 6, 4, 2
  0061820  lfs 6, 16(4)
  0061824  lfs 7, 20(4)
  0061828  fsub 8, 5, 4
  006182c  fsel 4, 8, 5, 4
  0061830  lfs 5, 24(4)
  0061834  lfs 8, 28(4)
  0061838  lfs 9, 320(5)
  006183c  lfs 11, 112(31)
  0061840  fmuls 10, 4, 4
  0061844  fmuls 12, 10, 4
  0061848  fmuls 13, 10, 12
  006184c  fmadds 4, 12, 6, 4
  0061850  fmuls 12, 10, 13
  0061854  fmadds 4, 13, 7, 4
  0061858  fmuls 10, 10, 12
  006185c  fmadds 4, 12, 5, 4
  0061860  fmadds 4, 10, 8, 4
  0061864  fnmsubs 4, 4, 11, 9
  0061868  stfs 4, 320(5)
  006186c  lfs 4, 4(4)
  0061870  fadds 2, 2, 4
  0061874  fsubs 1, 1, 2
  0061878  fsubs 3, 3, 2
  006187c  fsub 4, 2, 1
  0061880  fsel 1, 4, 1, 2
  0061884  fsub 2, 3, 1
  0061888  fsel 1, 2, 3, 1
  006188c  lfs 2, 324(5)
  0061890  fmuls 3, 1, 1
  0061894  fmuls 4, 3, 1
  0061898  fmuls 9, 3, 4
  006189c  fmadds 1, 4, 6, 1
  00618a0  fmuls 4, 3, 9
  00618a4  fmadds 1, 9, 7, 1
  00618a8  fmuls 3, 3, 4
  00618ac  fmadds 1, 4, 5, 1
  00618b0  fmadds 1, 3, 8, 1
  00618b4  fmadds 1, 1, 11, 2
  00618b8  stfs 1, 324(5)
  00618bc  li 27, 1
  00618c0  rlwinm 4, 3, 0, 30, 30
  00618c4  cmpwi 1, 27, 0
  00618c8  cmpwi 4, 0
  00618cc  bt 2, 0x61a3c
  00618d0  bf 30, 0x61970
  00618d4  lis 4, 149
  00618d8  addic 4, 4, 5056
  00618dc  lfs 1, 868(4)
  00618e0  lfs 2, 864(4)
  00618e4  fmuls 3, 1, 1
  00618e8  lfs 4, 872(4)
  00618ec  lfs 5, 112(31)
  00618f0  lis 5, 6
  00618f4  addi 5, 5, 4952
  00618f8  fmadds 3, 2, 2, 3
  00618fc  lfs 6, 0(5)
  0061900  lfs 7, 320(4)
  0061904  lfs 8, 324(4)
  0061908  fmadds 3, 4, 4, 3
  006190c  lfs 9, 328(4)
  0061910  fsqrts 3, 3
  0061914  fdivs 5, 5, 3
  0061918  fsub 10, 6, 3
  006191c  fsub 11, 6, 3
  0061920  fsub 12, 6, 3
  0061924  fsub 13, 3, 6
  0061928  fsub 0, 3, 6
  006192c  fsub 3, 3, 6
  0061930  fmuls 4, 4, 5
  0061934  fmuls 1, 1, 5
  0061938  fmuls 2, 2, 5
  006193c  fsel 5, 10, 6, 4
  0061940  fsel 10, 11, 6, 1
  0061944  fsel 6, 12, 6, 2
  0061948  fsel 4, 13, 5, 4
  006194c  fsel 1, 0, 10, 1
  0061950  fsel 2, 3, 6, 2
  0061954  fsubs 3, 9, 4
  0061958  fsubs 1, 8, 1
  006195c  fsubs 2, 7, 2
  0061960  stfs 3, 328(4)
  0061964  stfs 1, 324(4)
  0061968  stfs 2, 320(4)
  006196c  b 0x61a40
  0061970  lis 4, 6
  0061974  lis 5, 149
  0061978  addi 4, 4, 4952
  006197c  addic 5, 5, 5056
  0061980  lfs 1, 8(4)
  0061984  lfs 2, 344(5)
  0061988  lfs 3, 12(4)
  006198c  fsubs 4, 1, 2
  0061990  fsubs 5, 3, 2
  0061994  lfs 7, 16(4)
  0061998  fsub 6, 2, 4
  006199c  fsel 4, 6, 4, 2
  00619a0  lfs 6, 20(4)
  00619a4  fsub 8, 5, 4
  00619a8  fsel 4, 8, 5, 4
  00619ac  lfs 5, 24(4)
  00619b0  lfs 8, 28(4)
  00619b4  lfs 10, 320(5)
  00619b8  lfs 12, 112(31)
  00619bc  fmuls 9, 4, 4
  00619c0  fmuls 11, 9, 4
  00619c4  fmuls 13, 9, 11
  00619c8  fmadds 4, 11, 7, 4
  00619cc  fmuls 11, 9, 13
  00619d0  fmadds 4, 13, 6, 4
  00619d4  fmuls 9, 9, 11
  00619d8  fmadds 4, 11, 5, 4
  00619dc  fmadds 4, 9, 8, 4
  00619e0  fmadds 4, 4, 12, 10
  00619e4  stfs 4, 320(5)
  00619e8  lfs 4, 4(4)
  00619ec  fadds 2, 2, 4
  00619f0  fsubs 1, 1, 2
  00619f4  fsubs 3, 3, 2
  00619f8  fsub 4, 2, 1
  00619fc  fsel 1, 4, 1, 2
  0061a00  lfs 4, 324(5)
  0061a04  fsub 2, 3, 1
  0061a08  fsel 1, 2, 3, 1
  0061a0c  fmuls 2, 1, 1
  0061a10  fmuls 3, 2, 1
  0061a14  fmuls 9, 2, 3
  0061a18  fmadds 1, 3, 7, 1
  0061a1c  fmuls 3, 2, 9
  0061a20  fmadds 1, 9, 6, 1
  0061a24  fmuls 2, 2, 3
  0061a28  fmadds 1, 3, 5, 1
  0061a2c  fmadds 1, 2, 8, 1
  0061a30  fnmsubs 1, 1, 12, 4
  0061a34  stfs 1, 324(5)
  0061a38  b 0x61a40
  0061a3c  bt 6, 0x61a78
  0061a40  lis 4, 6
  0061a44  lfs 1, 112(31)
  0061a48  addi 4, 4, 4952
  0061a4c  lfs 2, 32(4)
  0061a50  fadds 1, 1, 2
  0061a54  stfs 1, 112(31)
  0061a58  lfs 2, 36(4)
  0061a5c  fcmpu 0, 1, 2
  0061a60  cror 6, 0, 2
  0061a64  bt 6, 0x61aa4
  0061a68  lis 4, 16025
  0061a6c  ori 4, 4, 39322
  0061a70  stw 4, 112(31)
  0061a74  b 0x61aa4
  0061a78  lis 4, 6
  0061a7c  lfs 1, 112(31)
  0061a80  addi 4, 4, 4952
  0061a84  lfs 2, 40(4)
  0061a88  fmuls 1, 1, 2
  0061a8c  stfs 1, 112(31)
  0061a90  lfs 2, 32(4)
  0061a94  fcmpu 0, 1, 2
  0061a98  cror 6, 1, 2
  0061a9c  bt 6, 0x61aa4
  0061aa0  stw 30, 112(31)
  0061aa4  cmpwi 28, 0
  0061aa8  bf 2, 0x61abc
  0061aac  bt 26, 0x61abc
  0061ab0  rlwinm 4, 3, 0, 30, 30
  0061ab4  cmpwi 4, 0
  0061ab8  bf 2, 0x61c9c
  0061abc  lis 4, 0
  0061ac0  ori 4, 4, 40960
  0061ac4  and 4, 3, 4
  0061ac8  cmpwi 4, 0
  0061acc  bt 2, 0x61c9c
  0061ad0  rlwinm 3, 3, 0, 16, 16
  0061ad4  cmpwi 3, 0
  0061ad8  bt 2, 0x61af4
  0061adc  lis 3, 6
  0061ae0  lfs 2, 128(31)
  0061ae4  addi 3, 3, 4952
  0061ae8  lfs 1, 44(3)
  0061aec  fsubs 2, 2, 1
  0061af0  b 0x61b08
  0061af4  lis 3, 6
  0061af8  lfs 2, 128(31)
  0061afc  addi 3, 3, 4952
  0061b00  lfs 1, 44(3)
  0061b04  fadds 2, 2, 1
  0061b08  fmr 1, 2
  0061b0c  lis 3, 6
  0061b10  stfs 2, 128(31)
  0061b14  addi 3, 3, 4952
  0061b18  lfs 3, 48(3)
  0061b1c  fcmpu 0, 1, 3
  0061b20  cror 6, 0, 2
  0061b24  bt 6, 0x61b40
  0061b28  fmr 1, 3
  0061b2c  lis 3, 15651
  0061b30  ori 3, 3, 55050
  0061b34  stw 3, 128(31)
  0061b38  fmr 2, 1
  0061b3c  b 0x61b6c
  0061b40  lis 3, 6
  0061b44  addi 3, 3, 4952
  0061b48  lfs 3, 52(3)
  0061b4c  fcmpu 0, 2, 3
  0061b50  cror 6, 1, 2
  0061b54  bt 6, 0x61b6c
  0061b58  fmr 1, 3
  0061b5c  lis 3, -17117
  0061b60  ori 3, 3, 55050
  0061b64  stw 3, 128(31)
  0061b68  fmr 2, 1
  0061b6c  cmpwi 28, 0
  0061b70  bf 2, 0x61c80
  0061b74  lis 3, 6
  0061b78  addi 3, 3, 4952
  0061b7c  addic 27, 1, 112
  0061b80  lfs 3, 8(3)
  0061b84  lfs 4, 4(3)
  0061b88  fsubs 6, 3, 2
  0061b8c  fadds 1, 1, 4
  0061b90  lfs 5, 12(3)
  0061b94  fsubs 4, 5, 2
  0061b98  fsub 7, 2, 6
  0061b9c  fsubs 3, 3, 1
  0061ba0  fsubs 5, 5, 1
  0061ba4  fsel 2, 7, 6, 2
  0061ba8  fsub 6, 1, 3
  0061bac  lfs 7, 16(3)
  0061bb0  fsub 9, 4, 2
  0061bb4  fsel 1, 6, 3, 1
  0061bb8  lfs 3, 20(3)
  0061bbc  lfs 6, 24(3)
  0061bc0  lfs 31, 28(3)
  0061bc4  ori 3, 27, 0
  0061bc8  fsel 2, 9, 4, 2
  0061bcc  fsub 4, 5, 1
  0061bd0  fmuls 8, 2, 2
  0061bd4  fsel 1, 4, 5, 1
  0061bd8  fmuls 4, 8, 2
  0061bdc  fmuls 5, 1, 1
  0061be0  fmuls 9, 8, 4
  0061be4  fmadds 2, 4, 7, 2
  0061be8  fmuls 4, 5, 1
  0061bec  fmuls 10, 8, 9
  0061bf0  fmadds 2, 9, 3, 2
  0061bf4  fmuls 9, 5, 4
  0061bf8  fmadds 1, 4, 7, 1
  0061bfc  fmuls 30, 8, 10
  0061c00  fmadds 29, 10, 6, 2
  0061c04  fmuls 2, 5, 9
  0061c08  fmadds 1, 9, 3, 1
  0061c0c  fmadds 28, 30, 31, 29
  0061c10  fmuls 3, 5, 2
  0061c14  fmadds 1, 2, 6, 1
  0061c18  fmadds 27, 3, 31, 1
  0061c1c  bl 0x500af8
  0061c20  nop
  0061c24  fnmadds 1, 30, 31, 29
  0061c28  lis 3, 149
  0061c2c  stfs 27, 112(1)
  0061c30  addic 26, 1, 176
  0061c34  addic 3, 3, 5056
  0061c38  stfs 28, 128(1)
  0061c3c  stfs 27, 132(1)
  0061c40  addic 25, 3, 848
  0061c44  ori 3, 26, 0
  0061c48  ori 4, 25, 0
  0061c4c  stfs 1, 116(1)
  0061c50  bl 0x500f6c
  0061c54  nop
  0061c58  ori 3, 26, 0
  0061c5c  ori 4, 26, 0
  0061c60  ori 5, 27, 0
  0061c64  bl 0x50162c
  0061c68  nop
  0061c6c  ori 3, 25, 0
  0061c70  ori 4, 26, 0
  0061c74  bl 0x500fa8
  0061c78  nop
  0061c7c  b 0x61ccc
  0061c80  lis 3, 149
  0061c84  addic 27, 3, 5056
  0061c88  lfs 1, 344(27)
  0061c8c  bl 0x5025e0
  0061c90  nop
  0061c94  stfs 1, 344(27)
  0061c98  b 0x61ccc
  0061c9c  lis 3, 6
  0061ca0  lfs 1, 128(31)
  0061ca4  addi 3, 3, 4952
  0061ca8  lfs 2, 56(3)
  0061cac  fmuls 1, 1, 2
  0061cb0  fabs 2, 1
  0061cb4  stfs 1, 128(31)
  0061cb8  lfs 1, 44(3)
  0061cbc  fcmpu 0, 2, 1
  0061cc0  cror 6, 1, 2
  0061cc4  bt 6, 0x61ccc
  0061cc8  stw 30, 128(31)
  0061ccc  lwz 3, 160(29)
  0061cd0  clrlwi 4, 3, 31
  0061cd4  cmpwi 4, 0
  0061cd8  bt 2, 0x61ec4
  0061cdc  rlwinm 4, 3, 0, 30, 30
  0061ce0  cmpwi 4, 0
  0061ce4  bt 2, 0x61ec4
  0061ce8  rlwinm 4, 3, 0, 19, 19
  0061cec  cmpwi 1, 4, 0
  0061cf0  bf 6, 0x61d00
  0061cf4  rlwinm 3, 3, 0, 17, 17
  0061cf8  cmpwi 3, 0
  0061cfc  bt 2, 0x61ec4
  0061d00  bt 6, 0x61d1c
  0061d04  lis 3, 6
  0061d08  lfs 2, 124(31)
  0061d0c  addi 3, 3, 4952
  0061d10  lfs 1, 44(3)
  0061d14  fsubs 2, 2, 1
  0061d18  b 0x61d30
  0061d1c  lis 3, 6
  0061d20  lfs 2, 124(31)
  0061d24  addi 3, 3, 4952
  0061d28  lfs 1, 44(3)
  0061d2c  fadds 2, 2, 1
  0061d30  fmr 1, 2
  0061d34  lis 3, 6
  0061d38  stfs 2, 124(31)
  0061d3c  addi 3, 3, 4952
  0061d40  lfs 3, 48(3)
  0061d44  fcmpu 0, 1, 3
  0061d48  cror 6, 0, 2
  0061d4c  bt 6, 0x61d68
  0061d50  fmr 1, 3
  0061d54  lis 3, 15651
  0061d58  ori 3, 3, 55050
  0061d5c  stw 3, 124(31)
  0061d60  fmr 2, 1
  0061d64  b 0x61d94
  0061d68  lis 3, 6
  0061d6c  addi 3, 3, 4952
  0061d70  lfs 3, 52(3)
  0061d74  fcmpu 0, 2, 3
  0061d78  cror 6, 1, 2
  0061d7c  bt 6, 0x61d94
  0061d80  fmr 1, 3
  0061d84  lis 3, -17117
  0061d88  ori 3, 3, 55050
  0061d8c  stw 3, 124(31)
  0061d90  fmr 2, 1
  0061d94  cmpwi 28, 0
  0061d98  bf 2, 0x61ea8
  0061d9c  lis 3, 6
  0061da0  addi 3, 3, 4952
  0061da4  addic 27, 1, 240
  0061da8  lfs 3, 8(3)
  0061dac  lfs 4, 4(3)
  0061db0  fsubs 6, 3, 2
  0061db4  fadds 1, 1, 4
  0061db8  lfs 5, 12(3)
  0061dbc  fsubs 4, 5, 2
  0061dc0  fsub 7, 2, 6
  0061dc4  fsubs 3, 3, 1
  0061dc8  fsubs 5, 5, 1
  0061dcc  fsel 2, 7, 6, 2
  0061dd0  fsub 6, 1, 3
  0061dd4  lfs 7, 16(3)
  0061dd8  fsub 9, 4, 2
  0061ddc  fsel 1, 6, 3, 1
  0061de0  lfs 3, 20(3)
  0061de4  lfs 6, 24(3)
  0061de8  lfs 31, 28(3)
  0061dec  ori 3, 27, 0
  0061df0  fsel 2, 9, 4, 2
  0061df4  fsub 4, 5, 1
  0061df8  fmuls 8, 2, 2
  0061dfc  fsel 1, 4, 5, 1
  0061e00  fmuls 4, 8, 2
  0061e04  fmuls 5, 1, 1
  0061e08  fmuls 9, 8, 4
  0061e0c  fmadds 2, 4, 7, 2
  0061e10  fmuls 4, 5, 1
  0061e14  fmuls 10, 8, 9
  0061e18  fmadds 2, 9, 3, 2
  0061e1c  fmuls 9, 5, 4
  0061e20  fmadds 1, 4, 7, 1
  0061e24  fmuls 30, 8, 10
  0061e28  fmadds 29, 10, 6, 2
  0061e2c  fmuls 2, 5, 9
  0061e30  fmadds 1, 9, 3, 1
  0061e34  fmadds 28, 30, 31, 29
  0061e38  fmuls 3, 5, 2
  0061e3c  fmadds 1, 2, 6, 1
  0061e40  fmadds 27, 3, 31, 1
  0061e44  bl 0x500af8
  0061e48  nop
  0061e4c  fnmadds 1, 30, 31, 29
  0061e50  lis 3, 149
  0061e54  stfs 27, 240(1)
  0061e58  addic 26, 1, 304
  0061e5c  addic 3, 3, 5056
  0061e60  stfs 28, 248(1)
  0061e64  stfs 27, 280(1)
  0061e68  addic 25, 3, 848
  0061e6c  ori 3, 26, 0
  0061e70  ori 4, 25, 0
  0061e74  stfs 1, 272(1)
  0061e78  bl 0x500f6c
  0061e7c  nop
  0061e80  ori 3, 26, 0
  0061e84  ori 4, 26, 0
  0061e88  ori 5, 27, 0
  0061e8c  bl 0x50162c
  0061e90  nop
  0061e94  ori 3, 25, 0
  0061e98  ori 4, 26, 0
  0061e9c  bl 0x500fa8
  0061ea0  nop
  0061ea4  b 0x61ef4
  0061ea8  lis 3, 149
  0061eac  addic 27, 3, 5056
  0061eb0  lfs 1, 340(27)
  0061eb4  bl 0x5025e0
  0061eb8  nop
  0061ebc  stfs 1, 340(27)
  0061ec0  b 0x61ef4
  0061ec4  lis 3, 6
  0061ec8  lfs 1, 124(31)
  0061ecc  addi 3, 3, 4952
  0061ed0  lfs 2, 56(3)
  0061ed4  fmuls 1, 1, 2
  0061ed8  fabs 2, 1
  0061edc  stfs 1, 124(31)
  0061ee0  lfs 1, 44(3)
  0061ee4  fcmpu 0, 2, 1
  0061ee8  cror 6, 1, 2
  0061eec  bt 6, 0x61ef4
  0061ef0  stw 30, 124(31)
  0061ef4  cmpwi 28, 0
  0061ef8  bf 2, 0x620d4
  0061efc  lwz 3, 160(29)
  0061f00  clrlwi 4, 3, 31
  0061f04  cmpwi 4, 0
  0061f08  bt 2, 0x620d4
  0061f0c  rlwinm 4, 3, 0, 30, 30
  0061f10  cmpwi 4, 0
  0061f14  bt 2, 0x620d4
  0061f18  rlwinm 4, 3, 0, 16, 16
  0061f1c  cmpwi 1, 4, 0
  0061f20  bf 6, 0x61f30
  0061f24  rlwinm 3, 3, 0, 18, 18
  0061f28  cmpwi 3, 0
  0061f2c  bt 2, 0x620d4
  0061f30  bt 6, 0x61f4c
  0061f34  lis 3, 6
  0061f38  lfs 2, 120(31)
  0061f3c  addi 3, 3, 4952
  0061f40  lfs 1, 44(3)
  0061f44  fsubs 2, 2, 1
  0061f48  b 0x61f60
  0061f4c  lis 3, 6
  0061f50  lfs 2, 120(31)
  0061f54  addi 3, 3, 4952
  0061f58  lfs 1, 44(3)
  0061f5c  fadds 2, 2, 1
  0061f60  fmr 1, 2
  0061f64  lis 3, 6
  0061f68  stfs 2, 120(31)
  0061f6c  addi 3, 3, 4952
  0061f70  lfs 3, 48(3)
  0061f74  fcmpu 0, 1, 3
  0061f78  cror 6, 0, 2
  0061f7c  bt 6, 0x61f98
  0061f80  fmr 1, 3
  0061f84  lis 3, 15651
  0061f88  ori 3, 3, 55050
  0061f8c  stw 3, 120(31)
  0061f90  fmr 2, 1
  0061f94  b 0x61fc4
  0061f98  lis 3, 6
  0061f9c  addi 3, 3, 4952
  0061fa0  lfs 3, 52(3)
  0061fa4  fcmpu 0, 2, 3
  0061fa8  cror 6, 1, 2
  0061fac  bt 6, 0x61fc4
  0061fb0  fmr 1, 3
  0061fb4  lis 3, -17117
  0061fb8  ori 3, 3, 55050
  0061fbc  stw 3, 120(31)
  0061fc0  fmr 2, 1
  0061fc4  lis 3, 6
  0061fc8  addi 3, 3, 4952
  0061fcc  addic 27, 1, 368
  0061fd0  lfs 3, 8(3)
  0061fd4  lfs 4, 4(3)
  0061fd8  fsubs 6, 3, 2
  0061fdc  fadds 1, 1, 4
  0061fe0  lfs 5, 12(3)
  0061fe4  fsubs 4, 5, 2
  0061fe8  fsub 7, 2, 6
  0061fec  fsubs 3, 3, 1
  0061ff0  fsubs 5, 5, 1
  0061ff4  fsel 2, 7, 6, 2
  0061ff8  fsub 6, 1, 3
  0061ffc  lfs 7, 16(3)
  0062000  fsub 9, 4, 2
  0062004  fsel 1, 6, 3, 1
  0062008  lfs 3, 20(3)
  006200c  lfs 6, 24(3)
  0062010  lfs 31, 28(3)
  0062014  ori 3, 27, 0
  0062018  fsel 2, 9, 4, 2
  006201c  fsub 4, 5, 1
  0062020  fmuls 8, 2, 2
  0062024  fsel 1, 4, 5, 1
  0062028  fmuls 4, 8, 2
  006202c  fmuls 5, 1, 1
  0062030  fmuls 9, 8, 4
  0062034  fmadds 2, 4, 7, 2
  0062038  fmuls 4, 5, 1
  006203c  fmuls 10, 8, 9
  0062040  fmadds 2, 9, 3, 2
  0062044  fmuls 9, 5, 4
  0062048  fmadds 1, 4, 7, 1
  006204c  fmuls 30, 8, 10
  0062050  fmadds 29, 10, 6, 2
  0062054  fmuls 2, 5, 9
  0062058  fmadds 1, 9, 3, 1
  006205c  fmadds 28, 30, 31, 29
  0062060  fmuls 3, 5, 2
  0062064  fmadds 1, 2, 6, 1
  0062068  fmadds 27, 3, 31, 1
  006206c  bl 0x500af8
  0062070  nop
  0062074  fnmadds 1, 30, 31, 29
  0062078  lis 3, 149
  006207c  stfs 27, 388(1)
  0062080  addic 26, 1, 432
  0062084  addic 3, 3, 5056
  0062088  stfs 28, 404(1)
  006208c  stfs 27, 408(1)
  0062090  addic 25, 3, 848
  0062094  ori 3, 26, 0
  0062098  ori 4, 25, 0
  006209c  stfs 1, 392(1)
  00620a0  bl 0x500f6c
  00620a4  nop
  00620a8  addic 24, 1, 496
  00620ac  ori 4, 26, 0
  00620b0  ori 3, 24, 0
  00620b4  ori 5, 27, 0
  00620b8  bl 0x50162c
  00620bc  nop
  00620c0  ori 3, 25, 0
  00620c4  ori 4, 24, 0
  00620c8  bl 0x500fa8
  00620cc  nop
  00620d0  b 0x62104
  00620d4  lis 3, 6
  00620d8  lfs 1, 120(31)
  00620dc  addi 3, 3, 4952
  00620e0  lfs 2, 56(3)
  00620e4  fmuls 1, 1, 2
  00620e8  fabs 2, 1
  00620ec  stfs 1, 120(31)
  00620f0  lfs 1, 44(3)
  00620f4  fcmpu 0, 2, 1
  00620f8  cror 6, 1, 2
  00620fc  bt 6, 0x62104
  0062100  stw 30, 120(31)
  0062104  lwz 29, 160(29)
  0062108  rlwinm 3, 29, 0, 28, 28
  006210c  cmpwi 1, 3, 0
  0062110  bf 6, 0x62120
  0062114  rlwinm 3, 29, 0, 29, 29
  0062118  cmpwi 3, 0
  006211c  bt 2, 0x6219c
  0062120  bt 6, 0x62160
  0062124  lis 3, 6
  0062128  lfs 1, 116(31)
  006212c  addi 3, 3, 4952
  0062130  lfs 2, 32(3)
  0062134  fadds 1, 1, 2
  0062138  stfs 1, 116(31)
  006213c  lfs 2, 36(3)
  0062140  fcmpu 0, 1, 2
  0062144  cror 6, 0, 2
  0062148  bt 6, 0x621d4
  006214c  lis 3, 16025
  0062150  fmr 1, 2
  0062154  ori 3, 3, 39322
  0062158  stw 3, 116(31)
  006215c  b 0x621d4
  0062160  lis 3, 6
  0062164  lfs 1, 116(31)
  0062168  addi 3, 3, 4952
  006216c  lfs 2, 32(3)
  0062170  fsubs 1, 1, 2
  0062174  stfs 1, 116(31)
  0062178  lfs 2, 60(3)
  006217c  fcmpu 0, 1, 2
  0062180  cror 6, 1, 2
  0062184  bt 6, 0x621d4
  0062188  lis 3, -16743
  006218c  fmr 1, 2
  0062190  ori 3, 3, 39322
  0062194  stw 3, 116(31)
  0062198  b 0x621d4
  006219c  lis 3, 6
  00621a0  lfs 1, 116(31)
  00621a4  addi 3, 3, 4952
  00621a8  lfs 2, 40(3)
  00621ac  fmuls 1, 1, 2
  00621b0  stfs 1, 116(31)
  00621b4  lfs 2, 32(3)
  00621b8  fcmpu 0, 1, 2
  00621bc  cror 6, 1, 2
  00621c0  bt 6, 0x621d4
  00621c4  lis 3, 6
  00621c8  addi 3, 3, 4952
  00621cc  lfs 1, 0(3)
  00621d0  stw 30, 116(31)
  00621d4  cmpwi 28, 0
  00621d8  bf 2, 0x62274
  00621dc  lis 3, 149
  00621e0  addic 3, 3, 5056
  00621e4  lfs 2, 884(3)
  00621e8  lfs 3, 880(3)
  00621ec  fmuls 4, 2, 2
  00621f0  lfs 5, 888(3)
  00621f4  lis 4, 6
  00621f8  addi 4, 4, 4952
  00621fc  fmadds 4, 3, 3, 4
  0062200  lfs 6, 0(4)
  0062204  lfs 7, 320(3)
  0062208  lfs 8, 324(3)
  006220c  lfs 9, 328(3)
  0062210  fmadds 4, 5, 5, 4
  0062214  fsqrts 4, 4
  0062218  fdivs 1, 1, 4
  006221c  fsub 10, 6, 4
  0062220  fsub 11, 6, 4
  0062224  fsub 12, 6, 4
  0062228  fsub 13, 4, 6
  006222c  fsub 0, 4, 6
  0062230  fsub 4, 4, 6
  0062234  fmuls 5, 5, 1
  0062238  fmuls 2, 2, 1
  006223c  fmuls 1, 3, 1
  0062240  fsel 3, 10, 6, 5
  0062244  fsel 10, 11, 6, 2
  0062248  fsel 6, 12, 6, 1
  006224c  fsel 3, 13, 3, 5
  0062250  fsel 2, 0, 10, 2
  0062254  fsel 1, 4, 6, 1
  0062258  fadds 3, 9, 3
  006225c  fadds 2, 8, 2
  0062260  fadds 1, 7, 1
  0062264  stfs 3, 328(3)
  0062268  stfs 2, 324(3)
  006226c  stfs 1, 320(3)
  0062270  b 0x62288
  0062274  lis 3, 149
  0062278  addic 3, 3, 5056
  006227c  lfs 2, 328(3)
  0062280  fadds 1, 2, 1
  0062284  stfs 1, 328(3)
  0062288  cmpwi 28, 0
  006228c  bt 2, 0x62464
  0062290  lis 30, 149
  0062294  addic 3, 1, 560
  0062298  addic 30, 30, 5056
  006229c  addic 4, 30, 336
  00622a0  bl 0x500ca4
  00622a4  nop
  00622a8  lfs 12, 564(1)
  00622ac  lfs 13, 560(1)
  00622b0  fmuls 1, 12, 12
  00622b4  lfs 11, 568(1)
  00622b8  lis 3, 6
  00622bc  addi 3, 3, 4952
  00622c0  fmadds 0, 13, 13, 1
  00622c4  lfs 4, 0(3)
  00622c8  fmr 10, 4
  00622cc  lfs 7, 576(1)
  00622d0  lfs 6, 580(1)
  00622d4  lfs 5, 584(1)
  00622d8  fmadds 0, 11, 11, 0
  00622dc  lfs 3, 592(1)
  00622e0  fmr 9, 10
  00622e4  lfs 2, 596(1)
  00622e8  lfs 1, 600(1)
  00622ec  fsqrts 31, 0
  00622f0  fmr 8, 9
  00622f4  fcmpu 0, 31, 8
  00622f8  bt 2, 0x6234c
  00622fc  frsqrte 8, 0
  0062300  lis 3, 6
  0062304  addi 3, 3, 4952
  0062308  lfs 9, 40(3)
  006230c  lfs 10, 64(3)
  0062310  fmuls 31, 0, 8
  0062314  fmuls 30, 9, 8
  0062318  fnmsubs 31, 31, 8, 10
  006231c  fmadds 8, 31, 30, 8
  0062320  fmuls 31, 0, 8
  0062324  fmuls 30, 9, 8
  0062328  fnmsubs 31, 31, 8, 10
  006232c  fmadds 8, 31, 30, 8
  0062330  fmuls 0, 0, 8
  0062334  fmuls 9, 9, 8
  0062338  fnmsubs 10, 0, 8, 10
  006233c  fmadds 10, 10, 9, 8
  0062340  fmuls 8, 13, 10
  0062344  fmuls 9, 12, 10
  0062348  fmuls 10, 11, 10
  006234c  fmuls 11, 6, 6
  0062350  stfs 9, 564(1)
  0062354  fmr 9, 4
  0062358  stfs 8, 560(1)
  006235c  stfs 10, 568(1)
  0062360  fmadds 11, 7, 7, 11
  0062364  fmr 8, 9
  0062368  fmadds 11, 5, 5, 11
  006236c  fmr 10, 8
  0062370  fsqrts 12, 11
  0062374  fcmpu 0, 12, 10
  0062378  bt 2, 0x623cc
  006237c  frsqrte 8, 11
  0062380  lis 3, 6
  0062384  addi 3, 3, 4952
  0062388  lfs 9, 40(3)
  006238c  lfs 10, 64(3)
  0062390  fmuls 12, 11, 8
  0062394  fmuls 13, 9, 8
  0062398  fnmsubs 12, 12, 8, 10
  006239c  fmadds 8, 12, 13, 8
  00623a0  fmuls 12, 11, 8
  00623a4  fmuls 13, 9, 8
  00623a8  fnmsubs 12, 12, 8, 10
  00623ac  fmadds 8, 12, 13, 8
  00623b0  fmuls 11, 11, 8
  00623b4  fmuls 9, 9, 8
  00623b8  fnmsubs 10, 11, 8, 10
  00623bc  fmadds 9, 10, 9, 8
  00623c0  fmuls 10, 7, 9
  00623c4  fmuls 8, 6, 9
  00623c8  fmuls 9, 5, 9
  00623cc  fmuls 5, 2, 2
  00623d0  stfs 9, 584(1)
  00623d4  fmr 6, 4
  00623d8  stfs 10, 576(1)
  00623dc  stfs 8, 580(1)
  00623e0  fmadds 9, 3, 3, 5
  00623e4  fmr 5, 6
  00623e8  fmadds 9, 1, 1, 9
  00623ec  fsqrts 7, 9
  00623f0  fcmpu 0, 7, 4
  00623f4  bt 2, 0x62448
  00623f8  frsqrte 4, 9
  00623fc  lis 3, 6
  0062400  addi 3, 3, 4952
  0062404  lfs 5, 40(3)
  0062408  lfs 6, 64(3)
  006240c  fmuls 7, 9, 4
  0062410  fmuls 8, 5, 4
  0062414  fnmsubs 7, 7, 4, 6
  0062418  fmadds 4, 7, 8, 4
  006241c  fmuls 7, 9, 4
  0062420  fmuls 8, 5, 4
  0062424  fnmsubs 7, 7, 4, 6
  0062428  fmadds 4, 7, 8, 4
  006242c  fmuls 7, 9, 4
  0062430  fmuls 5, 5, 4
  0062434  fnmsubs 6, 7, 4, 6
  0062438  fmadds 6, 6, 5, 4
  006243c  fmuls 4, 3, 6
  0062440  fmuls 5, 2, 6
  0062444  fmuls 6, 1, 6
  0062448  stfs 4, 592(1)
  006244c  stfs 5, 596(1)
  0062450  addic 3, 30, 848
  0062454  addic 4, 1, 560
  0062458  stfs 6, 600(1)
  006245c  bl 0x500fa8
  0062460  nop
  0062464  lwz 3, 20(31)
  0062468  cmpwi 3, 2
  006246c  bf 2, 0x62530
  0062470  lis 3, 149
  0062474  addic 3, 3, 5056
  0062478  lwz 4, 384(3)
  006247c  cmpwi 4, 0
  0062480  bt 2, 0x62530
  0062484  ori 5, 3, 0
  0062488  ori 3, 4, 0
  006248c  lfs 1, 320(5)
  0062490  stfs 1, 48(4)
  0062494  lfs 2, 324(5)
  0062498  stfs 2, 52(4)
  006249c  lfs 3, 328(5)
  00624a0  stfs 3, 56(4)
  00624a4  lfs 4, 332(5)
  00624a8  stfs 4, 60(4)
  00624ac  lfs 4, 848(5)
  00624b0  stfs 4, 0(4)
  00624b4  lfs 5, 852(5)
  00624b8  stfs 5, 4(4)
  00624bc  lfs 6, 856(5)
  00624c0  stfs 6, 8(4)
  00624c4  lfs 7, 860(5)
  00624c8  stfs 7, 12(4)
  00624cc  lfs 8, 864(5)
  00624d0  stfs 8, 16(4)
  00624d4  lfs 8, 868(5)
  00624d8  stfs 8, 20(4)
  00624dc  lfs 8, 872(5)
  00624e0  stfs 8, 24(4)
  00624e4  lfs 8, 876(5)
  00624e8  stfs 8, 28(4)
  00624ec  lfs 8, 880(5)
  00624f0  stfs 8, 32(4)
  00624f4  lfs 8, 884(5)
  00624f8  stfs 8, 36(4)
  00624fc  lfs 8, 888(5)
  0062500  stfs 8, 40(4)
  0062504  lfs 8, 892(5)
  0062508  stfs 4, 64(4)
  006250c  stfs 8, 44(4)
  0062510  stfs 5, 68(4)
  0062514  stfs 6, 72(4)
  0062518  stfs 7, 76(4)
  006251c  stfs 1, 100(4)
  0062520  stfs 2, 104(4)
  0062524  stfs 3, 108(4)
  0062528  bl 0x307f8
  006252c  nop
  0062530  ld 0, 752(1)
  0062534  mtlr 0
  0062538  lfd 27, 696(1)
  006253c  lfd 28, 704(1)
  0062540  lfd 29, 712(1)
  0062544  lfd 30, 720(1)
  0062548  lfd 31, 728(1)
  006254c  ld 24, 632(1)
  0062550  ld 25, 640(1)
  0062554  ld 26, 648(1)
  0062558  ld 27, 656(1)
  006255c  ld 28, 664(1)
  0062560  ld 29, 672(1)
  0062564  ld 30, 680(1)
  0062568  ld 31, 688(1)
  006256c  addi 1, 1, 736
  0062570  blr

UpdateDebugCamera:   # 0x62590, 0x1d0 bytes
  0062590  stdu 1, -160(1)
  0062594  mflr 0
  0062598  std 0, 176(1)
  006259c  stfd 29, 136(1)
  00625a0  stfd 30, 144(1)
  00625a4  stfd 31, 152(1)
  00625a8  lis 3, 149
  00625ac  lis 5, 150
  00625b0  std 31, 128(1)
  00625b4  std 29, 112(1)
  00625b8  lis 4, 6
  00625bc  addic 31, 3, 5056
  00625c0  std 30, 120(1)
  00625c4  addic 29, 5, -14912
  00625c8  addi 30, 4, 9588
  00625cc  lfs 1, 344(31)
  00625d0  lfs 2, 136(29)
  00625d4  bl 0x502578
  00625d8  nop
  00625dc  lfs 2, 0(30)
  00625e0  lfs 3, 4(30)
  00625e4  fadds 2, 1, 2
  00625e8  fsubs 5, 3, 1
  00625ec  lfs 4, 8(30)
  00625f0  lis 3, 151
  00625f4  fsubs 3, 3, 2
  00625f8  fsub 7, 1, 5
  00625fc  fsubs 6, 4, 2
  0062600  fsubs 4, 4, 1
  0062604  fsub 8, 2, 3
  0062608  fsel 1, 7, 5, 1
  006260c  lfs 5, 12(30)
  0062610  fsel 2, 8, 3, 2
  0062614  fsub 3, 4, 1
  0062618  fsub 8, 6, 2
  006261c  fsel 1, 3, 4, 1
  0062620  lfs 3, 16(30)
  0062624  lfs 4, 20(30)
  0062628  lfs 7, 320(31)
  006262c  fsel 2, 8, 6, 2
  0062630  fmuls 6, 1, 1
  0062634  fmuls 8, 2, 2
  0062638  fmuls 9, 6, 1
  006263c  fmuls 12, 8, 2
  0062640  fmuls 0, 6, 9
  0062644  fmadds 1, 9, 5, 1
  0062648  lfs 9, 24(30)
  006264c  lfs 11, 140(29)
  0062650  lfs 13, 324(31)
  0062654  lfs 10, 328(31)
  0062658  lfs 31, 144(29)
  006265c  fmuls 30, 8, 12
  0062660  fmadds 2, 12, 5, 2
  0062664  fmuls 5, 6, 0
  0062668  fmadds 1, 0, 3, 1
  006266c  lfs 12, 344(31)
  0062670  addic 31, 3, -25376
  0062674  lfs 0, 132(29)
  0062678  fmuls 29, 8, 30
  006267c  fmadds 2, 30, 3, 2
  0062680  fmuls 3, 6, 5
  0062684  fmadds 1, 5, 4, 1
  0062688  fmuls 5, 8, 29
  006268c  fmadds 2, 29, 4, 2
  0062690  fadds 4, 10, 31
  0062694  fmadds 3, 3, 9, 1
  0062698  fmr 1, 12
  006269c  fmadds 5, 5, 9, 2
  00626a0  fmr 2, 0
  00626a4  fmadds 3, 3, 11, 13
  00626a8  stfs 4, 136(31)
  00626ac  fmadds 4, 5, 11, 7
  00626b0  stfs 3, 132(31)
  00626b4  stfs 4, 128(31)
  00626b8  bl 0x502578
  00626bc  nop
  00626c0  stfs 1, 152(31)
  00626c4  addic 4, 31, 144
  00626c8  ori 3, 31, 0
  00626cc  bl 0x500ca4
  00626d0  nop
  00626d4  lwz 6, 8320(31)
  00626d8  lfs 1, 128(31)
  00626dc  ori 4, 31, 0
  00626e0  addic 3, 6, 192
  00626e4  li 5, 48
  00626e8  stfs 1, 16(6)
  00626ec  lfs 1, 132(31)
  00626f0  stfs 1, 20(6)
  00626f4  lfs 1, 136(31)
  00626f8  stfs 1, 24(6)
  00626fc  lfs 1, 140(31)
  0062700  stfs 1, 28(6)
  0062704  lfs 1, 144(31)
  0062708  stfs 1, 64(6)
  006270c  lfs 1, 148(31)
  0062710  stfs 1, 68(6)
  0062714  lfs 1, 152(31)
  0062718  stfs 1, 72(6)
  006271c  lfs 1, 156(31)
  0062720  stfs 1, 76(6)
  0062724  bl 0x50027c
  0062728  nop
  006272c  lwz 3, 8320(31)
  0062730  bl 0xf31a8
  0062734  nop
  0062738  ld 0, 176(1)
  006273c  mtlr 0
  0062740  lfd 29, 136(1)
  0062744  lfd 30, 144(1)
  0062748  lfd 31, 152(1)
  006274c  ld 29, 112(1)
  0062750  ld 30, 120(1)
  0062754  ld 31, 128(1)
  0062758  addi 1, 1, 160
  006275c  blr

STUB_00062760:   # 0x62760, 0x4 bytes
  0062760  blr

SetDebugGameMode:   # 0x62764, 0x4c bytes
  0062764  stdu 1, -112(1)
  0062768  mflr 0
  006276c  std 0, 128(1)
  0062770  lis 6, 161
  0062774  lis 4, 150
  0062778  li 8, -1
  006277c  addic 7, 4, -14912
  0062780  li 3, 0
  0062784  lwz 9, 1800(6)
  0062788  li 4, 0
  006278c  li 5, 0
  0062790  stw 9, 164(7)
  0062794  stw 8, 1800(6)
  0062798  bl 0x780f4
  006279c  nop
  00627a0  ld 0, 128(1)
  00627a4  mtlr 0
  00627a8  addi 1, 1, 112
  00627ac  blr

UpdateDebugSelections:   # 0x627d0, 0x168c bytes
  00627d0  stdu 1, -480(1)
  00627d4  mflr 0
  00627d8  std 0, 496(1)
  00627dc  stfd 31, 472(1)
  00627e0  std 31, 464(1)
  00627e4  std 30, 456(1)
  00627e8  std 29, 448(1)
  00627ec  std 28, 440(1)
  00627f0  std 27, 432(1)
  00627f4  std 26, 424(1)
  00627f8  std 25, 416(1)
  00627fc  std 24, 408(1)
  0062800  std 23, 400(1)
  0062804  bl 0x15be68
  0062808  nop
  006280c  lis 28, 150
  0062810  li 4, 1280
  0062814  addic 28, 28, 19008
  0062818  lwz 3, 164(28)
  006281c  lwz 6, 160(28)
  0062820  and 4, 3, 4
  0062824  cmpwi 4, 0
  0062828  bt 2, 0x628d8
  006282c  lis 3, 150
  0062830  lis 4, 150
  0062834  addic 31, 3, -14912
  0062838  addic 4, 4, -12416
  006283c  lis 5, 161
  0062840  lwz 3, 164(31)
  0062844  lwz 6, 572(4)
  0062848  stw 3, 1800(5)
  006284c  extsw 3, 6
  0062850  lwz 5, 576(4)
  0062854  lwz 6, 580(4)
  0062858  extsw 4, 5
  006285c  extsw 5, 6
  0062860  bl 0x780f4
  0062864  nop
  0062868  lis 3, 149
  006286c  vspltisw 2, 2
  0062870  li 4, 324
  0062874  addic 3, 3, 5056
  0062878  li 5, 320
  006287c  li 6, 328
  0062880  lvlx 3, 4, 3
  0062884  lvlx 4, 5, 3
  0062888  lvlx 5, 6, 3
  006288c  li 4, 152
  0062890  vctsxs 4, 4, 0
  0062894  li 3, 148
  0062898  vctsxs 3, 3, 0
  006289c  li 5, 156
  00628a0  vctsxs 5, 5, 0
  00628a4  li 6, 110
  00628a8  vsraw 4, 4, 2
  00628ac  vsraw 3, 3, 2
  00628b0  vsraw 2, 5, 2
  00628b4  vspltw 4, 4, 0
  00628b8  vspltw 3, 3, 0
  00628bc  vspltw 2, 2, 0
  00628c0  stvewx 4, 3, 31
  00628c4  stvewx 3, 4, 31
  00628c8  stvewx 2, 5, 31
  00628cc  stb 6, 248(31)
  00628d0  stb 6, 249(31)
  00628d4  b 0x63e24
  00628d8  li 4, 5
  00628dc  li 5, 11
  00628e0  li 8, 9
  00628e4  li 9, 14
  00628e8  stw 4, 124(1)
  00628ec  li 10, 7
  00628f0  stw 5, 128(1)
  00628f4  rlwinm 7, 3, 0, 18, 18
  00628f8  stw 8, 132(1)
  00628fc  stw 9, 136(1)
  0062900  cmpwi 7, 0
  0062904  stw 10, 140(1)
  0062908  stw 4, 144(1)
  006290c  bt 2, 0x6294c
  0062910  lis 4, 150
  0062914  addic 4, 4, -14912
  0062918  lwz 5, 12(4)
  006291c  addic 5, 5, 1
  0062920  cmpwi 5, 3
  0062924  cmpwi 1, 5, 6
  0062928  stw 5, 12(4)
  006292c  bf 2, 0x6293c
  0062930  li 5, 0
  0062934  stw 5, 12(4)
  0062938  b 0x62990
  006293c  bf 6, 0x62990
  0062940  li 5, 3
  0062944  stw 5, 12(4)
  0062948  b 0x62990
  006294c  rlwinm 4, 3, 0, 16, 16
  0062950  cmpwi 4, 0
  0062954  bt 2, 0x62990
  0062958  lis 4, 150
  006295c  addic 4, 4, -14912
  0062960  lwz 5, 12(4)
  0062964  addic 5, 5, -1
  0062968  cmpwi 5, 0
  006296c  cmpwi 1, 5, 2
  0062970  stw 5, 12(4)
  0062974  bf 0, 0x62984
  0062978  li 5, 2
  006297c  stw 5, 12(4)
  0062980  b 0x62990
  0062984  bf 6, 0x62990
  0062988  li 5, 5
  006298c  stw 5, 12(4)
  0062990  rlwinm 4, 3, 0, 19, 19
  0062994  cmpwi 4, 0
  0062998  bt 2, 0x62a0c
  006299c  lis 4, 150
  00629a0  addic 4, 4, -14912
  00629a4  lwz 5, 16(4)
  00629a8  addic 5, 5, -1
  00629ac  cmpwi 5, 0
  00629b0  stw 5, 16(4)
  00629b4  bf 0, 0x62a0c
  00629b8  lwz 5, 12(4)
  00629bc  cmpwi 5, 2
  00629c0  bf 1, 0x629f0
  00629c4  lis 7, 10922
  00629c8  addic 5, 5, 3
  00629cc  ori 7, 7, 43691
  00629d0  mulhw 7, 7, 5
  00629d4  srwi 8, 7, 31
  00629d8  addc 7, 7, 8
  00629dc  addc 8, 7, 7
  00629e0  addc 7, 7, 8
  00629e4  addc 7, 7, 7
  00629e8  subc 5, 5, 7
  00629ec  stw 5, 12(4)
  00629f0  slwi 5, 5, 2
  00629f4  addc 5, 1, 5
  00629f8  clrldi 5, 5, 32
  00629fc  lwz 5, 124(5)
  0062a00  addic 5, 5, -1
  0062a04  stw 5, 16(4)
  0062a08  b 0x62a84
  0062a0c  rlwinm 4, 3, 0, 17, 17
  0062a10  cmpwi 4, 0
  0062a14  bt 2, 0x62a84
  0062a18  lis 5, 150
  0062a1c  addic 5, 5, -14912
  0062a20  lwz 4, 12(5)
  0062a24  lwz 7, 16(5)
  0062a28  slwi 8, 4, 2
  0062a2c  addic 7, 7, 1
  0062a30  addc 8, 1, 8
  0062a34  cmpwi 1, 4, 3
  0062a38  clrldi 8, 8, 32
  0062a3c  stw 7, 16(5)
  0062a40  lwz 8, 124(8)
  0062a44  cmpw 7, 8
  0062a48  bt 0, 0x62a84
  0062a4c  bf 4, 0x62a7c
  0062a50  lis 7, 10922
  0062a54  addic 4, 4, 9
  0062a58  ori 7, 7, 43691
  0062a5c  mulhw 7, 7, 4
  0062a60  srwi 8, 7, 31
  0062a64  addc 7, 7, 8
  0062a68  addc 8, 7, 7
  0062a6c  addc 7, 7, 8
  0062a70  addc 7, 7, 7
  0062a74  subc 4, 4, 7
  0062a78  stw 4, 12(5)
  0062a7c  li 4, 0
  0062a80  stw 4, 16(5)
  0062a84  lis 27, 150
  0062a88  addic 27, 27, -14912
  0062a8c  lwz 4, 12(27)
  0062a90  lwz 7, 16(27)
  0062a94  slwi 5, 4, 2
  0062a98  cmpwi 1, 4, 5
  0062a9c  addc 5, 1, 5
  0062aa0  cmpwi 6, 4, 4
  0062aa4  clrldi 5, 5, 32
  0062aa8  cmpwi 7, 4, 3
  0062aac  lwz 5, 124(5)
  0062ab0  cmpw 7, 5
  0062ab4  bt 0, 0x62ac0
  0062ab8  addic 7, 5, -1
  0062abc  stw 7, 16(27)
  0062ac0  bt 6, 0x639d4
  0062ac4  cmpwi 1, 7, 0
  0062ac8  bt 26, 0x6357c
  0062acc  cmpwi 1, 7, 13
  0062ad0  bt 30, 0x63370
  0062ad4  cmpwi 4, 2
  0062ad8  bt 2, 0x6334c
  0062adc  cmpwi 4, 1
  0062ae0  cmpwi 7, 7, 4
  0062ae4  bt 2, 0x62b4c
  0062ae8  cmpwi 4, 0
  0062aec  bf 2, 0x63e24
  0062af0  rlwinm 3, 3, 0, 25, 25
  0062af4  cmpwi 3, 0
  0062af8  bt 2, 0x63e24
  0062afc  li 3, 1
  0062b00  slw 7, 3, 7
  0062b04  lwz 3, 8(27)
  0062b08  cmpwi 7, 16
  0062b0c  xor 7, 3, 7
  0062b10  stw 7, 8(27)
  0062b14  bf 2, 0x63e24
  0062b18  rlwinm 3, 7, 0, 27, 27
  0062b1c  li 4, 0
  0062b20  li 5, 15
  0062b24  subc 3, 4, 3
  0062b28  li 4, 16
  0062b2c  cntlzw 3, 3
  0062b30  subc 5, 5, 4
  0062b34  sldi 3, 3, 58
  0062b38  sradi 3, 3, 63
  0062b3c  and 3, 3, 5
  0062b40  addc 3, 4, 3
  0062b44  stw 3, 8(27)
  0062b48  b 0x63e24
  0062b4c  cmpwi 1, 7, 1
  0062b50  cmpwi 6, 7, 10
  0062b54  bt 29, 0x62b84
  0062b58  cmpwi 6, 7, -1
  0062b5c  cmpwi 7, 7, 2
  0062b60  bt 5, 0x62b74
  0062b64  cmpwi 1, 7, 0
  0062b68  bf 25, 0x63e24
  0062b6c  bf 5, 0x62bb4
  0062b70  b 0x62e94
  0062b74  cmpwi 1, 7, 3
  0062b78  bf 29, 0x62ee8
  0062b7c  bf 5, 0x62f58
  0062b80  b 0x62f7c
  0062b84  cmpwi 1, 7, 9
  0062b88  bt 26, 0x6327c
  0062b8c  cmpwi 6, 7, 8
  0062b90  bt 6, 0x631c0
  0062b94  cmpwi 1, 7, 7
  0062b98  bt 26, 0x630c4
  0062b9c  cmpwi 6, 7, 6
  0062ba0  bt 6, 0x630a0
  0062ba4  cmpwi 1, 7, 5
  0062ba8  bt 26, 0x6304c
  0062bac  bt 6, 0x62fa0
  0062bb0  b 0x63e24
  0062bb4  li 4, 80
  0062bb8  and 4, 3, 4
  0062bbc  cmpwi 4, 0
  0062bc0  bt 2, 0x63e24
  0062bc4  rlwinm 4, 3, 0, 25, 25
  0062bc8  cmpwi 4, 0
  0062bcc  bt 2, 0x62bec
  0062bd0  lwz 4, 20(27)
  0062bd4  addic 4, 4, 1
  0062bd8  cmpwi 4, 4
  0062bdc  stw 4, 20(27)
  0062be0  bt 0, 0x62bec
  0062be4  li 4, 0
  0062be8  stw 4, 20(27)
  0062bec  rlwinm 3, 3, 0, 27, 27
  0062bf0  cmpwi 3, 0
  0062bf4  bt 2, 0x62c14
  0062bf8  lwz 3, 20(27)
  0062bfc  addic 3, 3, -1
  0062c00  cmpwi 3, 0
  0062c04  stw 3, 20(27)
  0062c08  bf 0, 0x62c14
  0062c0c  li 3, 3
  0062c10  stw 3, 20(27)
  0062c14  lwz 3, 20(27)
  0062c18  cmpwi 3, 1
  0062c1c  cmpwi 1, 3, -1
  0062c20  cmpwi 6, 3, 0
  0062c24  cmpwi 7, 3, 2
  0062c28  bt 1, 0x62c38
  0062c2c  bf 5, 0x63e24
  0062c30  bf 25, 0x62c48
  0062c34  b 0x62c54
  0062c38  bf 29, 0x62c60
  0062c3c  cmpwi 3, 3
  0062c40  bf 1, 0x62e88
  0062c44  b 0x63e24
  0062c48  li 3, 15
  0062c4c  stw 3, 8(27)
  0062c50  b 0x63e24
  0062c54  li 3, 0
  0062c58  stw 3, 8(27)
  0062c5c  b 0x63e24
  0062c60  lis 31, 151
  0062c64  lis 30, 149
  0062c68  addic 31, 31, -25376
  0062c6c  addic 30, 30, 5056
  0062c70  li 3, 0
  0062c74  lfs 1, 132(31)
  0062c78  lfs 2, 324(30)
  0062c7c  lfs 3, 128(31)
  0062c80  fsubs 1, 1, 2
  0062c84  lfs 2, 320(30)
  0062c88  fsubs 2, 3, 2
  0062c8c  lis 4, 115
  0062c90  fmuls 3, 1, 1
  0062c94  fabs 5, 1
  0062c98  addic 4, 4, 22784
  0062c9c  fabs 6, 2
  0062ca0  stfs 2, 112(1)
  0062ca4  stw 3, 8(27)
  0062ca8  stfs 1, 116(1)
  0062cac  fmadds 3, 2, 2, 3
  0062cb0  lis 3, 6
  0062cb4  lwz 5, 112(1)
  0062cb8  lfs 2, 112(1)
  0062cbc  fsubs 1, 6, 5
  0062cc0  addi 3, 3, 10160
  0062cc4  fabs 7, 2
  0062cc8  fsqrts 3, 3
  0062ccc  stfs 1, 120(1)
  0062cd0  lwz 6, 116(1)
  0062cd4  lfs 1, 116(1)
  0062cd8  lwz 7, 120(1)
  0062cdc  fabs 8, 1
  0062ce0  rlwinm 6, 6, 3, 29, 29
  0062ce4  lfs 1, 120(1)
  0062ce8  rlwimi 6, 7, 2, 30, 30
  0062cec  rlwimi 6, 5, 4, 28, 28
  0062cf0  slwi 5, 6, 2
  0062cf4  stfs 3, 140(27)
  0062cf8  lfs 4, 0(3)
  0062cfc  ori 3, 4, 0
  0062d00  fsub 3, 1, 4
  0062d04  fsub 9, 1, 4
  0062d08  rlwimi 3, 6, 2, 26, 28
  0062d0c  lfsx 1, 4, 5
  0062d10  clrldi 3, 3, 32
  0062d14  lfs 2, 4(3)
  0062d18  fsel 5, 3, 7, 5
  0062d1c  fsel 3, 9, 8, 6
  0062d20  fcmpu 0, 5, 4
  0062d24  bt 1, 0x62d2c
  0062d28  b 0x62e4c
  0062d2c  fsubs 6, 3, 5
  0062d30  fadds 3, 3, 5
  0062d34  addic 3, 1, 16
  0062d38  li 6, 2
  0062d3c  addic 4, 3, 132
  0062d40  addic 5, 3, 148
  0062d44  mtctr 6
  0062d48  fdivs 3, 6, 3
  0062d4c  fmuls 5, 3, 3
  0062d50  stfs 3, 160(1)
  0062d54  stfs 3, 152(1)
  0062d58  stfs 3, 156(1)
  0062d5c  stfs 3, 148(1)
  0062d60  lfs 7, 160(1)
  0062d64  lfs 8, 152(1)
  0062d68  lfs 9, 156(1)
  0062d6c  fmuls 6, 5, 5
  0062d70  fmuls 8, 8, 5
  0062d74  fmuls 7, 7, 6
  0062d78  fmuls 3, 6, 6
  0062d7c  fmuls 6, 9, 6
  0062d80  stfs 8, 152(1)
  0062d84  fmuls 5, 7, 5
  0062d88  stfs 6, 156(1)
  0062d8c  stfs 5, 160(1)
  0062d90  lfs 5, 132(3)
  0062d94  fmuls 5, 5, 3
  0062d98  stfs 5, 148(3)
  0062d9c  lfs 5, 4(4)
  0062da0  addic 3, 3, 8
  0062da4  addic 4, 4, 8
  0062da8  fmuls 5, 5, 3
  0062dac  stfs 5, 4(5)
  0062db0  addic 5, 5, 8
  0062db4  bdnz 0x62d90
  0062db8  li 5, 4
  0062dbc  ori 3, 1, 0
  0062dc0  mtctr 5
  0062dc4  lis 4, 115
  0062dc8  addic 5, 3, 148
  0062dcc  addic 4, 4, 22752
  0062dd0  ori 7, 5, 0
  0062dd4  lfs 3, 148(3)
  0062dd8  lfs 5, 0(4)
  0062ddc  fmuls 3, 3, 5
  0062de0  lfs 5, 4(4)
  0062de4  addic 4, 4, 8
  0062de8  stfs 3, 148(3)
  0062dec  lfs 3, 4(5)
  0062df0  addic 3, 3, 8
  0062df4  fmuls 3, 3, 5
  0062df8  stfs 3, 4(5)
  0062dfc  addic 5, 5, 8
  0062e00  bdnz 0x62dd4
  0062e04  ori 3, 1, 0
  0062e08  mtctr 6
  0062e0c  lfs 3, 148(3)
  0062e10  fadds 3, 4, 3
  0062e14  lfs 4, 4(7)
  0062e18  addic 3, 3, 16
  0062e1c  lfs 5, 8(7)
  0062e20  lfs 6, 12(7)
  0062e24  addic 7, 7, 16
  0062e28  fadds 3, 3, 4
  0062e2c  fadds 4, 3, 5
  0062e30  fadds 4, 4, 6
  0062e34  bdnz 0x62e0c
  0062e38  lis 3, 6
  0062e3c  addi 3, 3, 10160
  0062e40  lfs 3, 4(3)
  0062e44  fadds 4, 4, 3
  0062e48  fmadds 4, 4, 1, 2
  0062e4c  lfs 2, 344(30)
  0062e50  fmr 1, 4
  0062e54  bl 0x5025e0
  0062e58  nop
  0062e5c  lfs 2, 136(31)
  0062e60  lfs 3, 328(30)
  0062e64  stfs 1, 136(27)
  0062e68  fsubs 3, 2, 3
  0062e6c  lfs 1, 152(31)
  0062e70  lfs 2, 344(30)
  0062e74  stfs 3, 144(27)
  0062e78  bl 0x5025e0
  0062e7c  nop
  0062e80  stfs 1, 132(27)
  0062e84  b 0x63e24
  0062e88  li 3, 6
  0062e8c  stw 3, 8(27)
  0062e90  b 0x63e24
  0062e94  rlwinm 4, 3, 0, 25, 25
  0062e98  cmpwi 4, 0
  0062e9c  bt 2, 0x62ebc
  0062ea0  lwz 4, 24(27)
  0062ea4  addic 4, 4, 1
  0062ea8  cmpwi 4, 8
  0062eac  stw 4, 24(27)
  0062eb0  bt 0, 0x62ebc
  0062eb4  li 4, 0
  0062eb8  stw 4, 24(27)
  0062ebc  rlwinm 3, 3, 0, 27, 27
  0062ec0  cmpwi 3, 0
  0062ec4  bt 2, 0x63e24
  0062ec8  lwz 3, 24(27)
  0062ecc  addic 3, 3, -1
  0062ed0  cmpwi 3, 0
  0062ed4  stw 3, 24(27)
  0062ed8  bf 0, 0x63e24
  0062edc  li 3, 7
  0062ee0  stw 3, 24(27)
  0062ee4  b 0x63e24
  0062ee8  lis 4, 161
  0062eec  lwz 4, 2240(4)
  0062ef0  cmpwi 4, 0
  0062ef4  bf 2, 0x62f04
  0062ef8  li 3, 0
  0062efc  stw 3, 28(27)
  0062f00  b 0x63e24
  0062f04  rlwinm 4, 3, 0, 25, 25
  0062f08  cmpwi 4, 0
  0062f0c  bt 2, 0x62f2c
  0062f10  lwz 4, 28(27)
  0062f14  addic 4, 4, 1
  0062f18  cmpwi 4, 3
  0062f1c  stw 4, 28(27)
  0062f20  bt 0, 0x62f2c
  0062f24  li 4, 0
  0062f28  stw 4, 28(27)
  0062f2c  rlwinm 3, 3, 0, 27, 27
  0062f30  cmpwi 3, 0
  0062f34  bt 2, 0x63e24
  0062f38  lwz 3, 28(27)
  0062f3c  addic 3, 3, -1
  0062f40  cmpwi 3, 0
  0062f44  stw 3, 28(27)
  0062f48  bf 0, 0x63e24
  0062f4c  li 3, 2
  0062f50  stw 3, 28(27)
  0062f54  b 0x63e24
  0062f58  li 4, 80
  0062f5c  and 3, 3, 4
  0062f60  cmpwi 3, 0
  0062f64  bt 2, 0x63e24
  0062f68  lwz 3, 32(27)
  0062f6c  cntlzw 3, 3
  0062f70  rlwinm 3, 3, 27, 31, 31
  0062f74  stw 3, 32(27)
  0062f78  b 0x63e24
  0062f7c  li 4, 80
  0062f80  and 3, 3, 4
  0062f84  cmpwi 3, 0
  0062f88  bt 2, 0x63e24
  0062f8c  lwz 3, 36(27)
  0062f90  cntlzw 3, 3
  0062f94  rlwinm 3, 3, 27, 31, 31
  0062f98  stw 3, 36(27)
  0062f9c  b 0x63e24
  0062fa0  li 4, 80
  0062fa4  and 3, 3, 4
  0062fa8  cmpwi 3, 0
  0062fac  bt 2, 0x63e24
  0062fb0  lwz 3, 40(27)
  0062fb4  cntlzw 4, 3
  0062fb8  cmpwi 3, 0
  0062fbc  rlwinm 3, 4, 27, 31, 31
  0062fc0  stw 3, 40(27)
  0062fc4  bf 2, 0x63008
  0062fc8  lis 3, 147
  0062fcc  lis 4, 18304
  0062fd0  lis 5, 164
  0062fd4  lis 6, 230
  0062fd8  li 7, 64
  0062fdc  stw 4, -11152(3)
  0062fe0  lis 8, 165
  0062fe4  lis 3, 17024
  0062fe8  lis 4, 165
  0062fec  stw 7, -28488(5)
  0062ff0  lis 9, 16928
  0062ff4  stw 3, -23008(6)
  0062ff8  lis 3, 4
  0062ffc  stw 9, 20252(4)
  0063000  stw 3, 8144(8)
  0063004  b 0x63e24
  0063008  lis 3, 147
  006300c  lis 4, 18682
  0063010  lis 6, 230
  0063014  lis 5, 164
  0063018  lis 9, 17402
  006301c  stw 4, -11152(3)
  0063020  lis 10, 31
  0063024  lis 3, 17460
  0063028  lis 4, 165
  006302c  li 7, 500
  0063030  lis 8, 165
  0063034  stw 3, -23008(6)
  0063038  ori 3, 10, 16384
  006303c  stw 9, 20252(4)
  0063040  stw 7, -28488(5)
  0063044  stw 3, 8144(8)
  0063048  b 0x63e24
  006304c  rlwinm 4, 3, 0, 25, 25
  0063050  cmpwi 4, 0
  0063054  bt 2, 0x63074
  0063058  lwz 4, 44(27)
  006305c  addic 4, 4, 1
  0063060  cmpwi 4, 3
  0063064  stw 4, 44(27)
  0063068  bt 0, 0x63074
  006306c  li 4, 0
  0063070  stw 4, 44(27)
  0063074  rlwinm 3, 3, 0, 27, 27
  0063078  cmpwi 3, 0
  006307c  bt 2, 0x63e24
  0063080  lwz 3, 44(27)
  0063084  addic 3, 3, -1
  0063088  cmpwi 3, 0
  006308c  stw 3, 44(27)
  0063090  bf 0, 0x63e24
  0063094  li 3, 2
  0063098  stw 3, 44(27)
  006309c  b 0x63e24
  00630a0  li 4, 80
  00630a4  and 3, 3, 4
  00630a8  cmpwi 3, 0
  00630ac  bt 2, 0x63e24
  00630b0  lwz 3, 48(27)
  00630b4  cntlzw 3, 3
  00630b8  rlwinm 3, 3, 27, 31, 31
  00630bc  stw 3, 48(27)
  00630c0  b 0x63e24
  00630c4  li 4, 80
  00630c8  and 3, 3, 4
  00630cc  cmpwi 3, 0
  00630d0  bt 2, 0x63e24
  00630d4  lwz 4, 52(27)
  00630d8  lis 3, 150
  00630dc  cntlzw 5, 4
  00630e0  cmpwi 4, 0
  00630e4  rlwinm 5, 5, 27, 31, 31
  00630e8  stw 5, 52(27)
  00630ec  addic 27, 3, 27456
  00630f0  bf 2, 0x63140
  00630f4  lhz 3, 60(27)
  00630f8  extsh 3, 3
  00630fc  bl 0x502730
  0063100  nop
  0063104  lis 3, 6
  0063108  lhz 5, 62(27)
  006310c  lis 4, 150
  0063110  addi 3, 3, 10160
  0063114  addic 31, 4, -12416
  0063118  lfs 2, 8(3)
  006311c  extsh 3, 5
  0063120  fmr 31, 2
  0063124  fmuls 1, 1, 31
  0063128  stfs 1, 512(31)
  006312c  bl 0x502730
  0063130  nop
  0063134  fmuls 1, 1, 31
  0063138  stfs 1, 516(31)
  006313c  b 0x63188
  0063140  lhz 3, 60(27)
  0063144  extsh 3, 3
  0063148  bl 0x502730
  006314c  nop
  0063150  lis 3, 6
  0063154  lis 4, 150
  0063158  addi 3, 3, 10160
  006315c  addic 31, 4, -12416
  0063160  lfs 2, 12(3)
  0063164  lhz 3, 62(27)
  0063168  fmr 31, 2
  006316c  extsh 3, 3
  0063170  fmuls 1, 1, 31
  0063174  stfs 1, 512(31)
  0063178  bl 0x502730
  006317c  nop
  0063180  fmuls 1, 1, 31
  0063184  stfs 1, 516(31)
  0063188  lis 3, 6
  006318c  lis 4, 150
  0063190  addi 3, 3, 10160
  0063194  addic 4, 4, -12416
  0063198  lfs 1, 16(3)
  006319c  lfs 2, 512(4)
  00631a0  lfs 3, 516(4)
  00631a4  fmuls 2, 2, 1
  00631a8  fmuls 1, 3, 1
  00631ac  stfs 2, 520(4)
  00631b0  stfs 1, 524(4)
  00631b4  bl 0x668d0
  00631b8  nop
  00631bc  b 0x63e24
  00631c0  li 4, 80
  00631c4  and 4, 3, 4
  00631c8  cmpwi 4, 0
  00631cc  bt 2, 0x6324c
  00631d0  rlwinm 3, 3, 0, 25, 25
  00631d4  cmpwi 3, 0
  00631d8  bt 2, 0x631fc
  00631dc  lwz 3, 56(27)
  00631e0  addic 3, 3, 1
  00631e4  cmpwi 3, 36
  00631e8  stw 3, 56(27)
  00631ec  bf 2, 0x6321c
  00631f0  li 3, -1
  00631f4  stw 3, 56(27)
  00631f8  b 0x6321c
  00631fc  lwz 3, 56(27)
  0063200  addic 3, 3, -1
  0063204  cmpwi 3, -1
  0063208  stw 3, 56(27)
  006320c  bf 0, 0x6321c
  0063210  li 3, 35
  0063214  stw 3, 56(27)
  0063218  b 0x63224
  006321c  cmpwi 3, 0
  0063220  bt 0, 0x6324c
  0063224  lis 5, 151
  0063228  extsw 4, 3
  006322c  lwz 3, -25488(5)
  0063230  extsw 3, 3
  0063234  bl 0xe0038
  0063238  nop
  006323c  cmpwi 3, 0
  0063240  bf 2, 0x6324c
  0063244  lwz 3, 164(28)
  0063248  b 0x631d0
  006324c  lwz 6, 56(27)
  0063250  li 3, 0
  0063254  li 4, 0
  0063258  extsw 6, 6
  006325c  li 5, 2
  0063260  subc 3, 6, 3
  0063264  subc 4, 4, 5
  0063268  sradi 3, 3, 63
  006326c  and 3, 3, 4
  0063270  addc 3, 5, 3
  0063274  stw 3, 164(27)
  0063278  b 0x63e24
  006327c  li 4, 80
  0063280  and 4, 3, 4
  0063284  cmpwi 4, 0
  0063288  bt 2, 0x632d8
  006328c  rlwinm 3, 3, 0, 25, 25
  0063290  cmpwi 3, 0
  0063294  bt 2, 0x632b8
  0063298  lwz 3, 60(27)
  006329c  addic 3, 3, 1
  00632a0  cmpwi 3, 16
  00632a4  stw 3, 60(27)
  00632a8  bf 2, 0x63e24
  00632ac  li 3, 0
  00632b0  stw 3, 60(27)
  00632b4  b 0x63e24
  00632b8  lwz 3, 60(27)
  00632bc  addic 3, 3, -1
  00632c0  cmpwi 3, 0
  00632c4  stw 3, 60(27)
  00632c8  bf 0, 0x63e24
  00632cc  li 3, 15
  00632d0  stw 3, 60(27)
  00632d4  b 0x63e24
  00632d8  rlwinm 3, 3, 0, 26, 26
  00632dc  cmpwi 3, 0
  00632e0  bt 2, 0x63e24
  00632e4  lis 3, 151
  00632e8  lwz 5, 60(27)
  00632ec  lis 4, 161
  00632f0  li 7, 0
  00632f4  addic 4, 4, -13692
  00632f8  li 6, 255
  00632fc  lwz 3, -25488(3)
  0063300  addc 4, 5, 4
  0063304  li 8, 0
  0063308  slwi 3, 3, 4
  006330c  clrldi 4, 4, 32
  0063310  extsw 3, 3
  0063314  subc 6, 6, 8
  0063318  extsw 5, 5
  006331c  lbzx 9, 4, 3
  0063320  subc 7, 7, 9
  0063324  lis 9, 162
  0063328  cntlzw 7, 7
  006332c  addic 9, 9, 704
  0063330  sldi 7, 7, 58
  0063334  sradi 7, 7, 63
  0063338  and 6, 7, 6
  006333c  addc 6, 8, 6
  0063340  stbx 6, 4, 3
  0063344  stbx 6, 9, 5
  0063348  b 0x63e24
  006334c  rlwinm 3, 3, 0, 25, 25
  0063350  cmpwi 3, 0
  0063354  bt 2, 0x63e24
  0063358  li 3, 1
  006335c  lwz 4, 4(27)
  0063360  slw 3, 3, 7
  0063364  xor 3, 4, 3
  0063368  stw 3, 4(27)
  006336c  b 0x63e24
  0063370  lis 4, 15
  0063374  ori 4, 4, 16959
  0063378  bf 4, 0x633bc
  006337c  lis 4, 114
  0063380  extsw 5, 7
  0063384  addic 4, 4, -4548
  0063388  lis 9, 115
  006338c  lis 8, 151
  0063390  addic 9, 9, 32062
  0063394  addic 8, 8, -16212
  0063398  lbzx 4, 4, 5
  006339c  sldi 5, 4, 3
  00633a0  slwi 4, 4, 2
  00633a4  addc 10, 5, 5
  00633a8  addc 10, 5, 10
  00633ac  addc 5, 8, 4
  00633b0  clrldi 5, 5, 32
  00633b4  lhzx 4, 9, 10
  00633b8  b 0x633c4
  00633bc  lis 5, 151
  00633c0  addic 5, 5, -25440
  00633c4  rlwinm 8, 6, 0, 28, 28
  00633c8  cmpwi 8, 0
  00633cc  bt 2, 0x63424
  00633d0  rlwinm 6, 3, 0, 25, 25
  00633d4  cmpwi 6, 0
  00633d8  bt 2, 0x633e8
  00633dc  lwz 6, 0(5)
  00633e0  addic 6, 6, 60
  00633e4  stw 6, 0(5)
  00633e8  rlwinm 6, 3, 0, 26, 26
  00633ec  cmpwi 6, 0
  00633f0  bt 2, 0x634bc
  00633f4  lwz 9, 0(5)
  00633f8  li 6, 60
  00633fc  li 8, 0
  0063400  extsw 10, 9
  0063404  addic 9, 9, -60
  0063408  subc 6, 6, 10
  006340c  subc 9, 9, 8
  0063410  sradi 6, 6, 63
  0063414  and 6, 6, 9
  0063418  addc 6, 8, 6
  006341c  stw 6, 0(5)
  0063420  b 0x634bc
  0063424  rlwinm 6, 6, 0, 30, 30
  0063428  cmpwi 6, 0
  006342c  bt 2, 0x63484
  0063430  rlwinm 6, 3, 0, 25, 25
  0063434  cmpwi 6, 0
  0063438  bt 2, 0x63448
  006343c  lwz 6, 0(5)
  0063440  addic 6, 6, 600
  0063444  stw 6, 0(5)
  0063448  rlwinm 6, 3, 0, 26, 26
  006344c  cmpwi 6, 0
  0063450  bt 2, 0x634bc
  0063454  lwz 9, 0(5)
  0063458  li 6, 600
  006345c  li 8, 0
  0063460  extsw 10, 9
  0063464  addic 9, 9, -600
  0063468  subc 6, 6, 10
  006346c  subc 9, 9, 8
  0063470  sradi 6, 6, 63
  0063474  and 6, 6, 9
  0063478  addc 6, 8, 6
  006347c  stw 6, 0(5)
  0063480  b 0x634bc
  0063484  rlwinm 6, 3, 0, 25, 25
  0063488  cmpwi 6, 0
  006348c  bt 2, 0x6349c
  0063490  lwz 6, 0(5)
  0063494  addic 6, 6, 1
  0063498  stw 6, 0(5)
  006349c  rlwinm 6, 3, 0, 26, 26
  00634a0  cmpwi 6, 0
  00634a4  bt 2, 0x634bc
  00634a8  lwz 6, 0(5)
  00634ac  cmpwi 6, 0
  00634b0  bf 1, 0x634bc
  00634b4  addic 6, 6, -1
  00634b8  stw 6, 0(5)
  00634bc  lwz 9, 0(5)
  00634c0  rlwinm 6, 3, 0, 27, 27
  00634c4  lis 8, 151
  00634c8  extsw 10, 9
  00634cc  subc 11, 4, 9
  00634d0  subc 4, 4, 10
  00634d4  cmpwi 6, 0
  00634d8  sradi 4, 4, 63
  00634dc  and 4, 4, 11
  00634e0  addc 6, 9, 4
  00634e4  addic 4, 8, -25432
  00634e8  stw 6, 0(5)
  00634ec  bt 2, 0x6350c
  00634f0  lis 5, 114
  00634f4  extsw 6, 7
  00634f8  addic 5, 5, -4548
  00634fc  lbzx 5, 5, 6
  0063500  lbzx 6, 5, 4
  0063504  addic 6, 6, 1
  0063508  stbx 6, 5, 4
  006350c  rlwinm 3, 3, 0, 24, 24
  0063510  cmpwi 3, 0
  0063514  bt 2, 0x63534
  0063518  lis 3, 114
  006351c  extsw 5, 7
  0063520  addic 3, 3, -4548
  0063524  lbzx 3, 3, 5
  0063528  lbzx 5, 3, 4
  006352c  addic 5, 5, -1
  0063530  stbx 5, 3, 4
  0063534  lis 3, 114
  0063538  extsw 7, 7
  006353c  addic 3, 3, -4548
  0063540  lis 5, 114
  0063544  lbzx 7, 3, 7
  0063548  addic 3, 5, 4158
  006354c  sldi 5, 7, 4
  0063550  subc 6, 7, 5
  0063554  lbzx 8, 7, 4
  0063558  sldi 6, 6, 2
  006355c  subc 5, 5, 6
  0063560  lhzx 6, 3, 5
  0063564  extsh 6, 6
  0063568  cmpw 8, 6
  006356c  bf 1, 0x63e24
  0063570  lhzx 3, 3, 5
  0063574  stbx 3, 7, 4
  0063578  b 0x63e24
  006357c  bf 6, 0x63644
  0063580  rlwinm 4, 6, 0, 25, 25
  0063584  cmpwi 4, 0
  0063588  bf 2, 0x63598
  006358c  rlwinm 4, 3, 0, 28, 28
  0063590  cmpwi 4, 0
  0063594  bt 2, 0x635b4
  0063598  lis 4, 6
  006359c  lis 5, 150
  00635a0  addi 4, 4, 10160
  00635a4  lfs 1, 20(4)
  00635a8  lfs 2, -5632(5)
  00635ac  fadds 1, 2, 1
  00635b0  stfs 1, -5632(5)
  00635b4  rlwinm 4, 6, 0, 27, 27
  00635b8  cmpwi 4, 0
  00635bc  bf 2, 0x635cc
  00635c0  rlwinm 4, 3, 0, 29, 29
  00635c4  cmpwi 4, 0
  00635c8  bt 2, 0x635e8
  00635cc  lis 4, 6
  00635d0  lis 5, 150
  00635d4  addi 4, 4, 10160
  00635d8  lfs 1, 20(4)
  00635dc  lfs 2, -5632(5)
  00635e0  fsubs 1, 2, 1
  00635e4  stfs 1, -5632(5)
  00635e8  lis 4, 150
  00635ec  lis 5, 150
  00635f0  lwz 8, -5628(4)
  00635f4  lwz 5, -5632(5)
  00635f8  srawi 10, 8, 31
  00635fc  srawi 9, 5, 31
  0063600  lfs 1, -5628(4)
  0063604  srwi 12, 10, 1
  0063608  srwi 11, 9, 1
  006360c  xor 8, 12, 8
  0063610  xor 4, 11, 5
  0063614  subc 8, 8, 10
  0063618  subc 4, 4, 9
  006361c  cmpwi 1, 5, 0
  0063620  cmpw 8, 4
  0063624  bf 0, 0x63634
  0063628  lis 4, 150
  006362c  stfs 1, -5632(4)
  0063630  b 0x63644
  0063634  bf 4, 0x63644
  0063638  lis 4, 150
  006363c  li 5, 0
  0063640  stw 5, -5632(4)
  0063644  cmpwi 7, 2
  0063648  bf 2, 0x63714
  006364c  rlwinm 4, 6, 0, 25, 25
  0063650  cmpwi 4, 0
  0063654  bf 2, 0x63664
  0063658  rlwinm 4, 3, 0, 28, 28
  006365c  cmpwi 4, 0
  0063660  bt 2, 0x63680
  0063664  lis 4, 6
  0063668  lis 5, 150
  006366c  addi 4, 4, 10160
  0063670  lfs 1, 20(4)
  0063674  lfs 2, -5628(5)
  0063678  fadds 1, 2, 1
  006367c  stfs 1, -5628(5)
  0063680  rlwinm 4, 6, 0, 27, 27
  0063684  cmpwi 4, 0
  0063688  bf 2, 0x63698
  006368c  rlwinm 4, 3, 0, 29, 29
  0063690  cmpwi 4, 0
  0063694  bt 2, 0x636b4
  0063698  lis 4, 6
  006369c  lis 5, 150
  00636a0  addi 4, 4, 10160
  00636a4  lfs 1, 20(4)
  00636a8  lfs 2, -5628(5)
  00636ac  fsubs 1, 2, 1
  00636b0  stfs 1, -5628(5)
  00636b4  lis 4, 150
  00636b8  lis 5, 18688
  00636bc  lwz 4, -5628(4)
  00636c0  srawi 8, 4, 31
  00636c4  srwi 9, 8, 1
  00636c8  xor 4, 9, 4
  00636cc  subc 4, 4, 8
  00636d0  cmpw 4, 5
  00636d4  bf 1, 0x636e8
  00636d8  lis 4, 150
  00636dc  lis 5, 18688
  00636e0  stw 5, -5628(4)
  00636e4  b 0x63714
  00636e8  lis 5, 150
  00636ec  lwz 8, -5632(5)
  00636f0  lfs 1, -5632(5)
  00636f4  srawi 9, 8, 31
  00636f8  srwi 5, 9, 1
  00636fc  xor 5, 5, 8
  0063700  subc 5, 5, 9
  0063704  cmpw 4, 5
  0063708  bf 0, 0x63714
  006370c  lis 4, 150
  0063710  stfs 1, -5628(4)
  0063714  cmpwi 7, 1
  0063718  bf 2, 0x637cc
  006371c  rlwinm 4, 6, 0, 25, 25
  0063720  cmpwi 4, 0
  0063724  bf 2, 0x63734
  0063728  rlwinm 4, 3, 0, 28, 28
  006372c  cmpwi 4, 0
  0063730  bt 2, 0x63750
  0063734  lis 4, 6
  0063738  lis 5, 150
  006373c  addi 4, 4, 10160
  0063740  lfs 1, 24(4)
  0063744  lfs 2, -5624(5)
  0063748  fsubs 1, 2, 1
  006374c  stfs 1, -5624(5)
  0063750  rlwinm 4, 6, 0, 27, 27
  0063754  cmpwi 4, 0
  0063758  bf 2, 0x63768
  006375c  rlwinm 4, 3, 0, 29, 29
  0063760  cmpwi 4, 0
  0063764  bt 2, 0x63784
  0063768  lis 4, 6
  006376c  lis 5, 150
  0063770  addi 4, 4, 10160
  0063774  lfs 1, 24(4)
  0063778  lfs 2, -5624(5)
  006377c  fadds 1, 2, 1
  0063780  stfs 1, -5624(5)
  0063784  lis 4, 150
  0063788  lis 5, 17279
  006378c  lwz 4, -5624(4)
  0063790  srawi 8, 4, 31
  0063794  cmpwi 1, 4, 0
  0063798  srwi 9, 8, 1
  006379c  xor 4, 9, 4
  00637a0  subc 4, 4, 8
  00637a4  cmpw 4, 5
  00637a8  bf 1, 0x637bc
  00637ac  lis 4, 150
  00637b0  lis 5, 17279
  00637b4  stw 5, -5624(4)
  00637b8  b 0x637cc
  00637bc  bf 4, 0x637cc
  00637c0  lis 4, 150
  00637c4  li 5, 0
  00637c8  stw 5, -5624(4)
  00637cc  cmpwi 7, 3
  00637d0  bf 2, 0x63884
  00637d4  rlwinm 4, 6, 0, 25, 25
  00637d8  cmpwi 4, 0
  00637dc  bf 2, 0x637ec
  00637e0  rlwinm 4, 3, 0, 28, 28
  00637e4  cmpwi 4, 0
  00637e8  bt 2, 0x63808
  00637ec  lis 4, 6
  00637f0  lis 5, 150
  00637f4  addi 4, 4, 10160
  00637f8  lfs 1, 24(4)
  00637fc  lfs 2, -5620(5)
  0063800  fsubs 1, 2, 1
  0063804  stfs 1, -5620(5)
  0063808  rlwinm 4, 6, 0, 27, 27
  006380c  cmpwi 4, 0
  0063810  bf 2, 0x63820
  0063814  rlwinm 4, 3, 0, 29, 29
  0063818  cmpwi 4, 0
  006381c  bt 2, 0x6383c
  0063820  lis 4, 6
  0063824  lis 5, 150
  0063828  addi 4, 4, 10160
  006382c  lfs 1, 24(4)
  0063830  lfs 2, -5620(5)
  0063834  fadds 1, 2, 1
  0063838  stfs 1, -5620(5)
  006383c  lis 4, 150
  0063840  lis 5, 17279
  0063844  lwz 4, -5620(4)
  0063848  srawi 8, 4, 31
  006384c  cmpwi 1, 4, 0
  0063850  srwi 9, 8, 1
  0063854  xor 4, 9, 4
  0063858  subc 4, 4, 8
  006385c  cmpw 4, 5
  0063860  bf 1, 0x63874
  0063864  lis 4, 150
  0063868  lis 5, 17279
  006386c  stw 5, -5620(4)
  0063870  b 0x63884
  0063874  bf 4, 0x63884
  0063878  lis 4, 150
  006387c  li 5, 0
  0063880  stw 5, -5620(4)
  0063884  cmpwi 7, 4
  0063888  bf 2, 0x638f0
  006388c  lis 4, 150
  0063890  lbz 4, -5636(4)
  0063894  cmpwi 4, 255
  0063898  bf 0, 0x638c0
  006389c  rlwinm 5, 6, 0, 25, 25
  00638a0  cmpwi 5, 0
  00638a4  bf 2, 0x638b4
  00638a8  rlwinm 5, 3, 0, 28, 28
  00638ac  cmpwi 5, 0
  00638b0  bt 2, 0x638c0
  00638b4  lis 5, 150
  00638b8  addic 4, 4, 1
  00638bc  stb 4, -5636(5)
  00638c0  clrlwi 5, 4, 24
  00638c4  cmpwi 5, 0
  00638c8  bf 1, 0x638f0
  00638cc  rlwinm 5, 6, 0, 27, 27
  00638d0  cmpwi 5, 0
  00638d4  bf 2, 0x638e4
  00638d8  rlwinm 5, 3, 0, 29, 29
  00638dc  cmpwi 5, 0
  00638e0  bt 2, 0x638f0
  00638e4  lis 5, 150
  00638e8  addic 4, 4, -1
  00638ec  stb 4, -5636(5)
  00638f0  cmpwi 7, 5
  00638f4  bf 2, 0x6395c
  00638f8  lis 4, 150
  00638fc  lbz 4, -5635(4)
  0063900  cmpwi 4, 255
  0063904  bf 0, 0x6392c
  0063908  rlwinm 5, 6, 0, 25, 25
  006390c  cmpwi 5, 0
  0063910  bf 2, 0x63920
  0063914  rlwinm 5, 3, 0, 28, 28
  0063918  cmpwi 5, 0
  006391c  bt 2, 0x6392c
  0063920  lis 5, 150
  0063924  addic 4, 4, 1
  0063928  stb 4, -5635(5)
  006392c  clrlwi 5, 4, 24
  0063930  cmpwi 5, 0
  0063934  bf 1, 0x6395c
  0063938  rlwinm 5, 6, 0, 27, 27
  006393c  cmpwi 5, 0
  0063940  bf 2, 0x63950
  0063944  rlwinm 5, 3, 0, 29, 29
  0063948  cmpwi 5, 0
  006394c  bt 2, 0x6395c
  0063950  lis 5, 150
  0063954  addic 4, 4, -1
  0063958  stb 4, -5635(5)
  006395c  cmpwi 7, 6
  0063960  bf 2, 0x639c8
  0063964  lis 4, 150
  0063968  lbz 4, -5634(4)
  006396c  cmpwi 4, 255
  0063970  bf 0, 0x63998
  0063974  rlwinm 5, 6, 0, 25, 25
  0063978  cmpwi 5, 0
  006397c  bf 2, 0x6398c
  0063980  rlwinm 5, 3, 0, 28, 28
  0063984  cmpwi 5, 0
  0063988  bt 2, 0x63998
  006398c  lis 5, 150
  0063990  addic 4, 4, 1
  0063994  stb 4, -5634(5)
  0063998  clrlwi 5, 4, 24
  006399c  cmpwi 5, 0
  00639a0  bf 1, 0x639c8
  00639a4  rlwinm 5, 6, 0, 27, 27
  00639a8  cmpwi 5, 0
  00639ac  bf 2, 0x639bc
  00639b0  rlwinm 3, 3, 0, 29, 29
  00639b4  cmpwi 3, 0
  00639b8  bt 2, 0x639c8
  00639bc  lis 3, 150
  00639c0  addic 4, 4, -1
  00639c4  stb 4, -5634(3)
  00639c8  bl 0x678d8
  00639cc  nop
  00639d0  b 0x63e24
  00639d4  cmpwi 7, 0
  00639d8  bf 2, 0x639fc
  00639dc  li 4, 80
  00639e0  and 4, 3, 4
  00639e4  cmpwi 4, 0
  00639e8  bt 2, 0x639fc
  00639ec  lwz 4, 240(27)
  00639f0  cntlzw 4, 4
  00639f4  rlwinm 4, 4, 27, 31, 31
  00639f8  stw 4, 240(27)
  00639fc  cmpwi 7, 1
  0063a00  bf 2, 0x63a24
  0063a04  li 4, 80
  0063a08  and 4, 3, 4
  0063a0c  cmpwi 4, 0
  0063a10  bt 2, 0x63a24
  0063a14  lwz 4, 244(27)
  0063a18  cntlzw 4, 4
  0063a1c  rlwinm 4, 4, 27, 31, 31
  0063a20  stw 4, 244(27)
  0063a24  cmpwi 7, 2
  0063a28  bf 2, 0x63d24
  0063a2c  rlwinm 3, 3, 0, 24, 27
  0063a30  cmpwi 3, 0
  0063a34  bt 2, 0x63d24
  0063a38  lis 5, 161
  0063a3c  li 3, 0
  0063a40  ori 25, 3, 0
  0063a44  lwz 5, 2260(5)
  0063a48  cmpwi 5, 0
  0063a4c  bf 1, 0x63b00
  0063a50  lis 4, 6
  0063a54  lis 7, 161
  0063a58  addi 4, 4, 10160
  0063a5c  lis 8, 149
  0063a60  ori 6, 3, 0
  0063a64  addic 7, 7, 2264
  0063a68  addic 8, 8, 5056
  0063a6c  lfs 3, 12(4)
  0063a70  lwz 4, 52(7)
  0063a74  lfs 2, 320(8)
  0063a78  addc 4, 4, 6
  0063a7c  fadds 4, 2, 3
  0063a80  clrldi 4, 4, 32
  0063a84  lfs 1, 0(4)
  0063a88  fcmpu 0, 1, 4
  0063a8c  cror 6, 1, 2
  0063a90  bt 6, 0x63af0
  0063a94  fsubs 2, 2, 3
  0063a98  fcmpu 0, 1, 2
  0063a9c  cror 6, 0, 2
  0063aa0  bt 6, 0x63af0
  0063aa4  lfs 2, 324(8)
  0063aa8  lfs 1, 4(4)
  0063aac  fadds 4, 2, 3
  0063ab0  fcmpu 0, 1, 4
  0063ab4  cror 6, 1, 2
  0063ab8  bt 6, 0x63af0
  0063abc  fsubs 2, 2, 3
  0063ac0  fcmpu 0, 1, 2
  0063ac4  cror 6, 0, 2
  0063ac8  bt 6, 0x63af0
  0063acc  lfs 2, 328(8)
  0063ad0  lfs 1, 8(4)
  0063ad4  fadds 4, 2, 3
  0063ad8  fcmpu 0, 1, 4
  0063adc  cror 6, 1, 2
  0063ae0  bt 6, 0x63af0
  0063ae4  fsubs 2, 2, 3
  0063ae8  fcmpu 0, 1, 2
  0063aec  bt 1, 0x63e24
  0063af0  addic 3, 3, 1
  0063af4  addic 6, 6, 4
  0063af8  cmpw 5, 3
  0063afc  bt 1, 0x63a70
  0063b00  lis 3, 151
  0063b04  lis 30, 101
  0063b08  lis 29, 101
  0063b0c  lis 31, 101
  0063b10  addic 24, 1, 264
  0063b14  lwz 6, -25488(3)
  0063b18  lis 7, 101
  0063b1c  addic 30, 30, 7232
  0063b20  addic 31, 31, 7248
  0063b24  addic 29, 29, 7304
  0063b28  extsw 6, 6
  0063b2c  ori 3, 24, 0
  0063b30  ori 4, 30, 0
  0063b34  addic 7, 7, 7280
  0063b38  ori 5, 31, 0
  0063b3c  ori 8, 29, 0
  0063b40  bl 0x5cd2a8
  0063b44  nop
  0063b48  lis 26, 149
  0063b4c  lis 4, 101
  0063b50  addic 26, 26, 5056
  0063b54  addic 3, 1, 184
  0063b58  addic 4, 4, 7312
  0063b5c  lfs 1, 320(26)
  0063b60  lfs 2, 324(26)
  0063b64  lfs 3, 328(26)
  0063b68  stfd 1, 64(1)
  0063b6c  stfd 2, 72(1)
  0063b70  stfd 3, 80(1)
  0063b74  ld 5, 64(1)
  0063b78  ld 6, 72(1)
  0063b7c  ld 7, 80(1)
  0063b80  bl 0x5cd2a8
  0063b84  nop
  0063b88  ori 3, 24, 0
  0063b8c  li 4, 7
  0063b90  bl 0x502dcc
  0063b94  nop
  0063b98  ori 24, 3, 0
  0063b9c  cmpwi 24, 0
  0063ba0  bt 0, 0x63bf0
  0063ba4  ori 3, 24, 0
  0063ba8  li 4, 0
  0063bac  li 5, 5
  0063bb0  bl 0x502de0
  0063bb4  nop
  0063bb8  addic 23, 1, 184
  0063bbc  ori 3, 23, 0
  0063bc0  bl 0x5c8510
  0063bc4  nop
  0063bc8  extsw 5, 3
  0063bcc  ori 3, 24, 0
  0063bd0  ori 4, 23, 0
  0063bd4  bl 0x502de8
  0063bd8  nop
  0063bdc  ori 3, 24, 0
  0063be0  bl 0x502ddc
  0063be4  nop
  0063be8  li 3, 121
  0063bec  stb 3, 249(27)
  0063bf0  lis 3, 161
  0063bf4  lis 6, 151
  0063bf8  addic 3, 3, 2264
  0063bfc  addic 24, 1, 264
  0063c00  ori 5, 31, 0
  0063c04  lis 7, 101
  0063c08  lwz 6, -25488(6)
  0063c0c  lwz 31, 52(3)
  0063c10  ori 4, 30, 0
  0063c14  ori 3, 24, 0
  0063c18  addic 7, 7, 7344
  0063c1c  extsw 6, 6
  0063c20  ori 8, 29, 0
  0063c24  bl 0x5cd2a8
  0063c28  nop
  0063c2c  ori 3, 24, 0
  0063c30  li 4, 7
  0063c34  bl 0x502dcc
  0063c38  nop
  0063c3c  ori 30, 3, 0
  0063c40  cmpwi 30, 0
  0063c44  bt 0, 0x63d24
  0063c48  ori 3, 30, 0
  0063c4c  li 4, 0
  0063c50  li 5, 5
  0063c54  bl 0x502de0
  0063c58  nop
  0063c5c  ori 3, 30, 0
  0063c60  addic 4, 26, 320
  0063c64  li 5, 4
  0063c68  bl 0x502de8
  0063c6c  nop
  0063c70  ori 3, 30, 0
  0063c74  addic 4, 26, 324
  0063c78  li 5, 4
  0063c7c  bl 0x502de8
  0063c80  nop
  0063c84  ori 3, 30, 0
  0063c88  addic 4, 26, 328
  0063c8c  li 5, 4
  0063c90  bl 0x502de8
  0063c94  nop
  0063c98  ori 3, 30, 0
  0063c9c  li 4, 0
  0063ca0  li 5, 6
  0063ca4  bl 0x502de0
  0063ca8  nop
  0063cac  ori 3, 30, 0
  0063cb0  li 4, 0
  0063cb4  li 5, 5
  0063cb8  bl 0x502de0
  0063cbc  nop
  0063cc0  ori 26, 3, 0
  0063cc4  lis 3, 16
  0063cc8  cmpw 26, 3
  0063ccc  bt 1, 0x63d10
  0063cd0  ori 3, 30, 0
  0063cd4  li 4, 0
  0063cd8  li 5, 6
  0063cdc  bl 0x502de0
  0063ce0  nop
  0063ce4  ori 3, 30, 0
  0063ce8  ori 4, 31, 0
  0063cec  ori 5, 26, 0
  0063cf0  bl 0x502dd4
  0063cf4  nop
  0063cf8  lis 3, 10922
  0063cfc  ori 3, 3, 43691
  0063d00  mulhw 3, 3, 26
  0063d04  srawi 25, 3, 1
  0063d08  srwi 3, 25, 31
  0063d0c  addc 25, 25, 3
  0063d10  lis 4, 161
  0063d14  ori 3, 30, 0
  0063d18  stw 25, 2260(4)
  0063d1c  bl 0x502ddc
  0063d20  nop
  0063d24  lwz 3, 16(27)
  0063d28  cmpwi 3, 3
  0063d2c  bf 2, 0x63e24
  0063d30  lwz 3, 164(28)
  0063d34  rlwinm 3, 3, 0, 24, 27
  0063d38  cmpwi 3, 0
  0063d3c  bt 2, 0x63e24
  0063d40  lis 3, 151
  0063d44  addic 31, 1, 328
  0063d48  lis 7, 101
  0063d4c  lis 4, 101
  0063d50  lis 8, 101
  0063d54  lwz 6, -25488(3)
  0063d58  lis 5, 101
  0063d5c  ori 3, 31, 0
  0063d60  addic 4, 4, 7232
  0063d64  addic 7, 7, 7280
  0063d68  addic 5, 5, 7248
  0063d6c  extsw 6, 6
  0063d70  addic 8, 8, 7304
  0063d74  bl 0x5cd2a8
  0063d78  nop
  0063d7c  lis 3, 149
  0063d80  lis 4, 101
  0063d84  addic 3, 3, 5056
  0063d88  addic 4, 4, 7360
  0063d8c  lfs 1, 320(3)
  0063d90  lfs 2, 324(3)
  0063d94  lfs 3, 328(3)
  0063d98  addic 3, 1, 224
  0063d9c  stfd 1, 64(1)
  0063da0  stfd 2, 72(1)
  0063da4  stfd 3, 80(1)
  0063da8  ld 5, 64(1)
  0063dac  ld 6, 72(1)
  0063db0  ld 7, 80(1)
  0063db4  bl 0x5cd2a8
  0063db8  nop
  0063dbc  ori 3, 31, 0
  0063dc0  li 4, 7
  0063dc4  bl 0x502dcc
  0063dc8  nop
  0063dcc  ori 31, 3, 0
  0063dd0  cmpwi 31, 0
  0063dd4  bt 0, 0x63e24
  0063dd8  ori 3, 31, 0
  0063ddc  li 4, 0
  0063de0  li 5, 5
  0063de4  bl 0x502de0
  0063de8  nop
  0063dec  addic 30, 1, 224
  0063df0  ori 3, 30, 0
  0063df4  bl 0x5c8510
  0063df8  nop
  0063dfc  extsw 5, 3
  0063e00  ori 3, 31, 0
  0063e04  ori 4, 30, 0
  0063e08  bl 0x502de8
  0063e0c  nop
  0063e10  ori 3, 31, 0
  0063e14  bl 0x502ddc
  0063e18  nop
  0063e1c  li 3, 121
  0063e20  stb 3, 248(27)
  0063e24  ld 0, 496(1)
  0063e28  mtlr 0
  0063e2c  lfd 31, 472(1)
  0063e30  ld 23, 400(1)
  0063e34  ld 24, 408(1)
  0063e38  ld 25, 416(1)
  0063e3c  ld 26, 424(1)
  0063e40  ld 27, 432(1)
  0063e44  ld 28, 440(1)
  0063e48  ld 29, 448(1)
  0063e4c  ld 30, 456(1)
  0063e50  ld 31, 464(1)
  0063e54  addi 1, 1, 480
  0063e58  blr

DrawDebugMenu:   # 0x63e68, 0x15d0 bytes
  0063e68  stdu 1, -272(1)
  0063e6c  mflr 0
  0063e70  std 0, 288(1)
  0063e74  stfd 29, 248(1)
  0063e78  stfd 30, 256(1)
  0063e7c  stfd 31, 264(1)
  0063e80  std 31, 240(1)
  0063e84  std 30, 232(1)
  0063e88  std 29, 224(1)
  0063e8c  std 28, 216(1)
  0063e90  std 27, 208(1)
  0063e94  std 26, 200(1)
  0063e98  std 25, 192(1)
  0063e9c  bl 0x78100
  0063ea0  nop
  0063ea4  lis 3, 161
  0063ea8  lwz 3, 1820(3)
  0063eac  cmpwi 3, 0
  0063eb0  bf 2, 0x65400
  0063eb4  lis 6, 101
  0063eb8  lis 5, -32576
  0063ebc  addic 6, 6, 7388
  0063ec0  ori 5, 5, 49152
  0063ec4  li 3, 256
  0063ec8  li 4, 16
  0063ecc  bl 0x60c64
  0063ed0  nop
  0063ed4  lis 6, 101
  0063ed8  lis 5, -32576
  0063edc  addic 6, 6, 7396
  0063ee0  ori 5, 5, 49152
  0063ee4  li 3, 256
  0063ee8  li 4, 24
  0063eec  bl 0x60c64
  0063ef0  nop
  0063ef4  lis 6, 101
  0063ef8  lis 5, -32768
  0063efc  addic 6, 6, 7412
  0063f00  ori 5, 5, 49152
  0063f04  li 3, 12
  0063f08  li 4, 44
  0063f0c  bl 0x60ac0
  0063f10  nop
  0063f14  lis 6, 101
  0063f18  lis 5, -32768
  0063f1c  addic 6, 6, 7420
  0063f20  ori 5, 5, 49152
  0063f24  li 3, 12
  0063f28  li 4, 50
  0063f2c  bl 0x60ac0
  0063f30  nop
  0063f34  lis 6, 101
  0063f38  lis 5, -32768
  0063f3c  addic 6, 6, 7428
  0063f40  ori 5, 5, 49344
  0063f44  li 3, 20
  0063f48  li 4, 64
  0063f4c  bl 0x60ac0
  0063f50  nop
  0063f54  lis 31, 150
  0063f58  lis 29, 115
  0063f5c  addic 31, 31, -14912
  0063f60  addic 29, 29, 31496
  0063f64  lis 5, -32528
  0063f68  ori 5, 5, 61680
  0063f6c  lwz 3, 8(31)
  0063f70  clrlwi 3, 3, 31
  0063f74  srwi 4, 3, 31
  0063f78  subc 3, 4, 3
  0063f7c  li 4, 64
  0063f80  rlwinm 6, 3, 3, 29, 29
  0063f84  li 3, 108
  0063f88  lwzx 6, 29, 6
  0063f8c  bl 0x60ac0
  0063f90  nop
  0063f94  lis 6, 101
  0063f98  lis 5, -32768
  0063f9c  li 3, 20
  0063fa0  addic 6, 6, 7444
  0063fa4  li 4, 79
  0063fa8  ori 5, 5, 49344
  0063fac  bl 0x60ac0
  0063fb0  nop
  0063fb4  lwz 3, 8(31)
  0063fb8  lis 5, -32528
  0063fbc  rlwinm 3, 3, 0, 30, 30
  0063fc0  ori 5, 5, 61680
  0063fc4  srwi 4, 3, 31
  0063fc8  subc 3, 4, 3
  0063fcc  li 4, 79
  0063fd0  rlwinm 6, 3, 3, 29, 29
  0063fd4  li 3, 108
  0063fd8  lwzx 6, 29, 6
  0063fdc  bl 0x60ac0
  0063fe0  nop
  0063fe4  lis 6, 101
  0063fe8  lis 5, -32768
  0063fec  li 3, 20
  0063ff0  ori 5, 5, 49344
  0063ff4  addic 6, 6, 7452
  0063ff8  li 4, 94
  0063ffc  bl 0x60ac0
  0064000  nop
  0064004  lwz 3, 8(31)
  0064008  lis 5, -32528
  006400c  rlwinm 3, 3, 0, 29, 29
  0064010  ori 5, 5, 61680
  0064014  srwi 4, 3, 31
  0064018  subc 3, 4, 3
  006401c  li 4, 94
  0064020  rlwinm 6, 3, 3, 29, 29
  0064024  li 3, 108
  0064028  lwzx 6, 29, 6
  006402c  bl 0x60ac0
  0064030  nop
  0064034  lis 6, 101
  0064038  lis 5, -32768
  006403c  li 3, 20
  0064040  addic 6, 6, 7460
  0064044  li 4, 109
  0064048  ori 5, 5, 49344
  006404c  bl 0x60ac0
  0064050  nop
  0064054  lwz 3, 8(31)
  0064058  lis 5, -32528
  006405c  rlwinm 3, 3, 0, 28, 28
  0064060  ori 5, 5, 61680
  0064064  srwi 4, 3, 31
  0064068  subc 3, 4, 3
  006406c  li 4, 109
  0064070  rlwinm 6, 3, 3, 29, 29
  0064074  li 3, 108
  0064078  lwzx 6, 29, 6
  006407c  bl 0x60ac0
  0064080  nop
  0064084  lis 6, 101
  0064088  lis 5, -32768
  006408c  li 3, 20
  0064090  ori 5, 5, 49344
  0064094  addic 6, 6, 7468
  0064098  li 4, 124
  006409c  bl 0x60ac0
  00640a0  nop
  00640a4  lwz 3, 8(31)
  00640a8  lis 5, -32528
  00640ac  rlwinm 3, 3, 0, 27, 27
  00640b0  ori 5, 5, 61680
  00640b4  srwi 4, 3, 31
  00640b8  subc 3, 4, 3
  00640bc  li 4, 124
  00640c0  rlwinm 6, 3, 3, 29, 29
  00640c4  li 3, 108
  00640c8  lwzx 6, 29, 6
  00640cc  bl 0x60ac0
  00640d0  nop
  00640d4  lwz 3, 12(31)
  00640d8  cmpwi 3, 0
  00640dc  bf 2, 0x64110
  00640e0  lwz 4, 16(31)
  00640e4  lis 6, 101
  00640e8  lis 5, -32768
  00640ec  sldi 7, 4, 4
  00640f0  addic 6, 6, 7476
  00640f4  subc 4, 7, 4
  00640f8  li 3, 9
  00640fc  addic 4, 4, 64
  0064100  ori 5, 5, 192
  0064104  extsw 4, 4
  0064108  bl 0x60ac0
  006410c  nop
  0064110  lis 6, 101
  0064114  lis 5, -32768
  0064118  addic 6, 6, 7484
  006411c  li 3, 168
  0064120  li 4, 44
  0064124  ori 5, 5, 49152
  0064128  bl 0x60ac0
  006412c  nop
  0064130  lis 30, 101
  0064134  lis 5, -32768
  0064138  addic 30, 30, 7492
  006413c  ori 5, 5, 49152
  0064140  ori 6, 30, 0
  0064144  li 3, 168
  0064148  li 4, 50
  006414c  bl 0x60ac0
  0064150  nop
  0064154  lis 6, 101
  0064158  lis 5, -32768
  006415c  li 3, 176
  0064160  ori 5, 5, 49344
  0064164  addic 6, 6, 7500
  0064168  li 4, 64
  006416c  bl 0x60ac0
  0064170  nop
  0064174  lis 3, 115
  0064178  lwz 4, 20(31)
  006417c  lis 5, -32528
  0064180  addic 6, 3, 31504
  0064184  slwi 3, 4, 2
  0064188  ori 5, 5, 61680
  006418c  extsw 7, 3
  0064190  li 3, 264
  0064194  li 4, 64
  0064198  lwzx 6, 6, 7
  006419c  bl 0x60ac0
  00641a0  nop
  00641a4  lis 6, 101
  00641a8  lis 5, -32768
  00641ac  li 3, 176
  00641b0  addic 6, 6, 7508
  00641b4  li 4, 79
  00641b8  ori 5, 5, 49344
  00641bc  bl 0x60ac0
  00641c0  nop
  00641c4  lwz 3, 24(31)
  00641c8  lis 4, 115
  00641cc  slwi 3, 3, 2
  00641d0  addic 5, 4, 31520
  00641d4  extsw 6, 3
  00641d8  lis 7, -32528
  00641dc  li 3, 264
  00641e0  li 4, 79
  00641e4  lwzx 6, 5, 6
  00641e8  ori 5, 7, 61680
  00641ec  bl 0x60ac0
  00641f0  nop
  00641f4  lis 6, 101
  00641f8  lis 5, -32768
  00641fc  li 3, 176
  0064200  ori 5, 5, 49344
  0064204  addic 6, 6, 7516
  0064208  li 4, 94
  006420c  bl 0x60ac0
  0064210  nop
  0064214  lis 3, 115
  0064218  lwz 4, 28(31)
  006421c  lis 5, -32528
  0064220  addic 6, 3, 31600
  0064224  slwi 3, 4, 2
  0064228  ori 5, 5, 61680
  006422c  extsw 7, 3
  0064230  li 3, 264
  0064234  li 4, 94
  0064238  lwzx 6, 6, 7
  006423c  bl 0x60ac0
  0064240  nop
  0064244  lis 6, 101
  0064248  lis 5, -32768
  006424c  li 3, 176
  0064250  addic 6, 6, 7524
  0064254  li 4, 109
  0064258  ori 5, 5, 49344
  006425c  bl 0x60ac0
  0064260  nop
  0064264  lwz 3, 32(31)
  0064268  lis 5, -32528
  006426c  cntlzw 3, 3
  0064270  ori 5, 5, 61680
  0064274  rlwinm 6, 3, 29, 29, 29
  0064278  li 3, 264
  006427c  li 4, 109
  0064280  lwzx 6, 29, 6
  0064284  bl 0x60ac0
  0064288  nop
  006428c  lis 6, 101
  0064290  lis 5, -32768
  0064294  li 3, 176
  0064298  ori 5, 5, 49344
  006429c  addic 6, 6, 7540
  00642a0  li 4, 124
  00642a4  bl 0x60ac0
  00642a8  nop
  00642ac  lwz 3, 36(31)
  00642b0  lis 5, -32528
  00642b4  slwi 3, 3, 2
  00642b8  ori 5, 5, 61680
  00642bc  extsw 6, 3
  00642c0  li 3, 264
  00642c4  li 4, 124
  00642c8  lwzx 6, 29, 6
  00642cc  bl 0x60ac0
  00642d0  nop
  00642d4  lis 6, 101
  00642d8  lis 5, -32768
  00642dc  li 3, 176
  00642e0  addic 6, 6, 7548
  00642e4  li 4, 139
  00642e8  ori 5, 5, 49344
  00642ec  bl 0x60ac0
  00642f0  nop
  00642f4  lwz 3, 40(31)
  00642f8  lis 4, 115
  00642fc  slwi 3, 3, 2
  0064300  addic 5, 4, 31564
  0064304  extsw 6, 3
  0064308  lis 7, -32528
  006430c  li 3, 264
  0064310  li 4, 139
  0064314  lwzx 6, 5, 6
  0064318  ori 5, 7, 61680
  006431c  bl 0x60ac0
  0064320  nop
  0064324  lis 6, 101
  0064328  lis 5, -32768
  006432c  li 3, 176
  0064330  ori 5, 5, 49344
  0064334  addic 6, 6, 7564
  0064338  li 4, 154
  006433c  bl 0x60ac0
  0064340  nop
  0064344  lis 3, 115
  0064348  lwz 4, 44(31)
  006434c  lis 5, -32528
  0064350  addic 6, 3, 31572
  0064354  slwi 3, 4, 2
  0064358  ori 5, 5, 61680
  006435c  extsw 7, 3
  0064360  li 3, 264
  0064364  li 4, 154
  0064368  lwzx 6, 6, 7
  006436c  bl 0x60ac0
  0064370  nop
  0064374  lis 6, 101
  0064378  lis 5, -32768
  006437c  li 3, 176
  0064380  addic 6, 6, 7572
  0064384  li 4, 169
  0064388  ori 5, 5, 49344
  006438c  bl 0x60ac0
  0064390  nop
  0064394  lwz 3, 48(31)
  0064398  lis 4, 115
  006439c  slwi 3, 3, 2
  00643a0  addic 5, 4, 31584
  00643a4  extsw 6, 3
  00643a8  lis 7, -32528
  00643ac  li 3, 264
  00643b0  li 4, 169
  00643b4  lwzx 6, 5, 6
  00643b8  ori 5, 7, 61680
  00643bc  bl 0x60ac0
  00643c0  nop
  00643c4  lis 6, 101
  00643c8  lis 5, -32768
  00643cc  li 3, 176
  00643d0  ori 5, 5, 49344
  00643d4  addic 6, 6, 7580
  00643d8  li 4, 184
  00643dc  bl 0x60ac0
  00643e0  nop
  00643e4  lis 3, 115
  00643e8  lwz 4, 52(31)
  00643ec  lis 5, -32528
  00643f0  addic 6, 3, 31592
  00643f4  slwi 3, 4, 2
  00643f8  ori 5, 5, 61680
  00643fc  extsw 7, 3
  0064400  li 3, 264
  0064404  li 4, 184
  0064408  lwzx 6, 6, 7
  006440c  bl 0x60ac0
  0064410  nop
  0064414  lis 6, 101
  0064418  lis 5, -32768
  006441c  li 3, 176
  0064420  addic 6, 6, 7588
  0064424  li 4, 199
  0064428  ori 5, 5, 49344
  006442c  bl 0x60ac0
  0064430  nop
  0064434  lwz 3, 56(31)
  0064438  cmpwi 3, 0
  006443c  bt 0, 0x6447c
  0064440  addic 28, 1, 152
  0064444  lis 4, 101
  0064448  extsw 5, 3
  006444c  ori 3, 28, 0
  0064450  addic 4, 4, 7596
  0064454  bl 0x5cd2a8
  0064458  nop
  006445c  lis 5, -32528
  0064460  li 3, 264
  0064464  li 4, 199
  0064468  ori 5, 5, 61680
  006446c  ori 6, 28, 0
  0064470  bl 0x60ac0
  0064474  nop
  0064478  b 0x6449c
  006447c  lis 6, 101
  0064480  lis 5, -32528
  0064484  addic 6, 6, 7604
  0064488  ori 5, 5, 61680
  006448c  li 3, 264
  0064490  li 4, 199
  0064494  bl 0x60ac0
  0064498  nop
  006449c  lis 6, 101
  00644a0  lis 5, -32768
  00644a4  li 3, 176
  00644a8  ori 5, 5, 49344
  00644ac  addic 6, 6, 7612
  00644b0  li 4, 214
  00644b4  bl 0x60ac0
  00644b8  nop
  00644bc  lis 3, 151
  00644c0  lis 4, 161
  00644c4  lwz 5, 60(31)
  00644c8  lis 6, 101
  00644cc  addic 4, 4, -13692
  00644d0  addic 28, 1, 168
  00644d4  lwz 3, -25488(3)
  00644d8  addc 4, 5, 4
  00644dc  slwi 3, 3, 4
  00644e0  clrldi 7, 4, 32
  00644e4  extsw 8, 3
  00644e8  addic 4, 6, 7620
  00644ec  extsw 5, 5
  00644f0  ori 3, 28, 0
  00644f4  lbzx 6, 7, 8
  00644f8  bl 0x5cd2a8
  00644fc  nop
  0064500  lis 5, -32528
  0064504  li 3, 264
  0064508  li 4, 214
  006450c  ori 5, 5, 61680
  0064510  ori 6, 28, 0
  0064514  bl 0x60ac0
  0064518  nop
  006451c  lwz 3, 12(31)
  0064520  cmpwi 3, 1
  0064524  bf 2, 0x64558
  0064528  lwz 4, 16(31)
  006452c  lis 6, 101
  0064530  lis 5, -32768
  0064534  sldi 7, 4, 4
  0064538  addic 6, 6, 7476
  006453c  subc 4, 7, 4
  0064540  li 3, 165
  0064544  addic 4, 4, 64
  0064548  ori 5, 5, 192
  006454c  extsw 4, 4
  0064550  bl 0x60ac0
  0064554  nop
  0064558  lis 5, -32768
  006455c  lis 6, 101
  0064560  ori 5, 5, 49152
  0064564  addic 6, 6, 7628
  0064568  li 3, 344
  006456c  li 4, 44
  0064570  bl 0x60ac0
  0064574  nop
  0064578  lis 5, -32768
  006457c  ori 6, 30, 0
  0064580  ori 5, 5, 49152
  0064584  li 3, 344
  0064588  li 4, 50
  006458c  bl 0x60ac0
  0064590  nop
  0064594  lis 6, 101
  0064598  lis 5, -32768
  006459c  li 3, 352
  00645a0  ori 5, 5, 49344
  00645a4  addic 6, 6, 7636
  00645a8  li 4, 64
  00645ac  bl 0x60ac0
  00645b0  nop
  00645b4  lwz 3, 4(31)
  00645b8  lis 5, -32528
  00645bc  clrlwi 3, 3, 31
  00645c0  ori 5, 5, 61680
  00645c4  srwi 4, 3, 31
  00645c8  subc 3, 4, 3
  00645cc  li 4, 64
  00645d0  rlwinm 6, 3, 3, 29, 29
  00645d4  li 3, 460
  00645d8  lwzx 6, 29, 6
  00645dc  bl 0x60ac0
  00645e0  nop
  00645e4  lis 6, 101
  00645e8  lis 5, -32768
  00645ec  li 3, 352
  00645f0  addic 6, 6, 7644
  00645f4  li 4, 79
  00645f8  ori 5, 5, 49344
  00645fc  bl 0x60ac0
  0064600  nop
  0064604  lwz 3, 4(31)
  0064608  lis 5, -32528
  006460c  rlwinm 3, 3, 0, 30, 30
  0064610  ori 5, 5, 61680
  0064614  srwi 4, 3, 31
  0064618  subc 3, 4, 3
  006461c  li 4, 79
  0064620  rlwinm 6, 3, 3, 29, 29
  0064624  li 3, 460
  0064628  lwzx 6, 29, 6
  006462c  bl 0x60ac0
  0064630  nop
  0064634  lis 6, 101
  0064638  lis 5, -32768
  006463c  li 3, 352
  0064640  ori 5, 5, 49344
  0064644  addic 6, 6, 7660
  0064648  li 4, 94
  006464c  bl 0x60ac0
  0064650  nop
  0064654  lwz 3, 4(31)
  0064658  lis 5, -32528
  006465c  rlwinm 3, 3, 0, 29, 29
  0064660  ori 5, 5, 61680
  0064664  srwi 4, 3, 31
  0064668  subc 3, 4, 3
  006466c  li 4, 94
  0064670  rlwinm 6, 3, 3, 29, 29
  0064674  li 3, 460
  0064678  lwzx 6, 29, 6
  006467c  bl 0x60ac0
  0064680  nop
  0064684  lis 6, 101
  0064688  lis 5, -32768
  006468c  li 3, 352
  0064690  addic 6, 6, 7676
  0064694  li 4, 109
  0064698  ori 5, 5, 49344
  006469c  bl 0x60ac0
  00646a0  nop
  00646a4  lwz 3, 4(31)
  00646a8  lis 5, -32528
  00646ac  rlwinm 3, 3, 0, 28, 28
  00646b0  ori 5, 5, 61680
  00646b4  srwi 4, 3, 31
  00646b8  subc 3, 4, 3
  00646bc  li 4, 109
  00646c0  rlwinm 6, 3, 3, 29, 29
  00646c4  li 3, 460
  00646c8  lwzx 6, 29, 6
  00646cc  bl 0x60ac0
  00646d0  nop
  00646d4  lis 6, 101
  00646d8  lis 5, -32768
  00646dc  li 3, 352
  00646e0  ori 5, 5, 49344
  00646e4  addic 6, 6, 7692
  00646e8  li 4, 124
  00646ec  bl 0x60ac0
  00646f0  nop
  00646f4  lwz 3, 4(31)
  00646f8  lis 5, -32528
  00646fc  rlwinm 3, 3, 0, 27, 27
  0064700  ori 5, 5, 61680
  0064704  srwi 4, 3, 31
  0064708  subc 3, 4, 3
  006470c  li 4, 124
  0064710  rlwinm 6, 3, 3, 29, 29
  0064714  li 3, 460
  0064718  lwzx 6, 29, 6
  006471c  bl 0x60ac0
  0064720  nop
  0064724  lis 6, 101
  0064728  lis 5, -32768
  006472c  li 3, 352
  0064730  addic 6, 6, 7708
  0064734  li 4, 139
  0064738  ori 5, 5, 49344
  006473c  bl 0x60ac0
  0064740  nop
  0064744  lwz 3, 4(31)
  0064748  lis 5, -32528
  006474c  rlwinm 3, 3, 0, 26, 26
  0064750  ori 5, 5, 61680
  0064754  srwi 4, 3, 31
  0064758  subc 3, 4, 3
  006475c  li 4, 139
  0064760  rlwinm 6, 3, 3, 29, 29
  0064764  li 3, 460
  0064768  lwzx 6, 29, 6
  006476c  bl 0x60ac0
  0064770  nop
  0064774  lis 6, 101
  0064778  lis 5, -32768
  006477c  li 3, 352
  0064780  ori 5, 5, 49344
  0064784  addic 6, 6, 7716
  0064788  li 4, 154
  006478c  bl 0x60ac0
  0064790  nop
  0064794  lwz 3, 4(31)
  0064798  lis 5, -32528
  006479c  rlwinm 3, 3, 0, 25, 25
  00647a0  ori 5, 5, 61680
  00647a4  srwi 4, 3, 31
  00647a8  subc 3, 4, 3
  00647ac  li 4, 154
  00647b0  rlwinm 6, 3, 3, 29, 29
  00647b4  li 3, 460
  00647b8  lwzx 6, 29, 6
  00647bc  bl 0x60ac0
  00647c0  nop
  00647c4  lis 6, 101
  00647c8  lis 5, -32768
  00647cc  li 3, 352
  00647d0  addic 6, 6, 7724
  00647d4  li 4, 169
  00647d8  ori 5, 5, 49344
  00647dc  bl 0x60ac0
  00647e0  nop
  00647e4  lwz 3, 4(31)
  00647e8  lis 5, -32528
  00647ec  rlwinm 3, 3, 0, 24, 24
  00647f0  ori 5, 5, 61680
  00647f4  srwi 4, 3, 31
  00647f8  subc 3, 4, 3
  00647fc  li 4, 169
  0064800  rlwinm 6, 3, 3, 29, 29
  0064804  li 3, 460
  0064808  lwzx 6, 29, 6
  006480c  bl 0x60ac0
  0064810  nop
  0064814  lis 6, 101
  0064818  lis 5, -32768
  006481c  li 3, 352
  0064820  ori 5, 5, 49344
  0064824  addic 6, 6, 7732
  0064828  li 4, 184
  006482c  bl 0x60ac0
  0064830  nop
  0064834  lwz 3, 4(31)
  0064838  lis 5, -32528
  006483c  rlwinm 3, 3, 0, 23, 23
  0064840  ori 5, 5, 61680
  0064844  srwi 4, 3, 31
  0064848  subc 3, 4, 3
  006484c  li 4, 184
  0064850  rlwinm 6, 3, 3, 29, 29
  0064854  li 3, 460
  0064858  lwzx 6, 29, 6
  006485c  bl 0x60ac0
  0064860  nop
  0064864  lwz 3, 12(31)
  0064868  cmpwi 3, 2
  006486c  bf 2, 0x648a0
  0064870  lwz 4, 16(31)
  0064874  lis 6, 101
  0064878  lis 5, -32768
  006487c  sldi 7, 4, 4
  0064880  addic 6, 6, 7476
  0064884  subc 4, 7, 4
  0064888  li 3, 341
  006488c  addic 4, 4, 62
  0064890  ori 5, 5, 192
  0064894  extsw 4, 4
  0064898  bl 0x60ac0
  006489c  nop
  00648a0  lis 5, -32768
  00648a4  lis 6, 101
  00648a8  ori 5, 5, 49152
  00648ac  addic 6, 6, 7740
  00648b0  li 3, 12
  00648b4  li 4, 166
  00648b8  bl 0x60ac0
  00648bc  nop
  00648c0  lis 5, -32768
  00648c4  li 3, 12
  00648c8  li 4, 172
  00648cc  ori 5, 5, 49152
  00648d0  ori 6, 30, 0
  00648d4  bl 0x60ac0
  00648d8  nop
  00648dc  lwz 3, 12(31)
  00648e0  cmpwi 3, 3
  00648e4  bf 2, 0x64918
  00648e8  lwz 4, 16(31)
  00648ec  lis 6, 101
  00648f0  lis 5, -32768
  00648f4  sldi 7, 4, 4
  00648f8  addic 6, 6, 7476
  00648fc  subc 4, 7, 4
  0064900  li 3, 9
  0064904  addic 4, 4, 184
  0064908  ori 5, 5, 192
  006490c  extsw 4, 4
  0064910  bl 0x60ac0
  0064914  nop
  0064918  lis 6, 101
  006491c  lis 5, -32768
  0064920  li 3, 20
  0064924  addic 6, 6, 7748
  0064928  li 4, 186
  006492c  ori 5, 5, 49344
  0064930  bl 0x60ac0
  0064934  nop
  0064938  lis 3, 151
  006493c  lis 28, 101
  0064940  addic 27, 3, -25432
  0064944  addic 26, 1, 120
  0064948  addic 28, 28, 7596
  006494c  ori 3, 26, 0
  0064950  ori 4, 28, 0
  0064954  lbz 5, 9(27)
  0064958  bl 0x5cd2a8
  006495c  nop
  0064960  lis 5, -32704
  0064964  li 3, 122
  0064968  ori 5, 5, 24704
  006496c  li 4, 186
  0064970  ori 6, 26, 0
  0064974  bl 0x60ac0
  0064978  nop
  006497c  lis 5, -32768
  0064980  lis 6, 101
  0064984  ori 5, 5, 49344
  0064988  addic 6, 6, 7764
  006498c  li 3, 20
  0064990  li 4, 201
  0064994  bl 0x60ac0
  0064998  nop
  006499c  lbz 5, 21(27)
  00649a0  ori 3, 26, 0
  00649a4  ori 4, 28, 0
  00649a8  bl 0x5cd2a8
  00649ac  nop
  00649b0  lis 5, -32704
  00649b4  li 3, 122
  00649b8  ori 5, 5, 24704
  00649bc  li 4, 201
  00649c0  ori 6, 26, 0
  00649c4  bl 0x60ac0
  00649c8  nop
  00649cc  lis 5, -32768
  00649d0  lis 6, 101
  00649d4  ori 5, 5, 49344
  00649d8  addic 6, 6, 7780
  00649dc  li 3, 20
  00649e0  li 4, 216
  00649e4  bl 0x60ac0
  00649e8  nop
  00649ec  lbz 5, 25(27)
  00649f0  ori 3, 26, 0
  00649f4  ori 4, 28, 0
  00649f8  bl 0x5cd2a8
  00649fc  nop
  0064a00  lis 5, -32704
  0064a04  ori 6, 26, 0
  0064a08  ori 5, 5, 24704
  0064a0c  li 3, 122
  0064a10  li 4, 216
  0064a14  bl 0x60ac0
  0064a18  nop
  0064a1c  lis 6, 101
  0064a20  lis 5, -32768
  0064a24  li 3, 20
  0064a28  addic 6, 6, 7796
  0064a2c  li 4, 231
  0064a30  ori 5, 5, 49344
  0064a34  bl 0x60ac0
  0064a38  nop
  0064a3c  lis 3, 151
  0064a40  ori 4, 28, 0
  0064a44  addic 25, 3, -16212
  0064a48  ori 3, 26, 0
  0064a4c  lwz 5, 92(25)
  0064a50  extsw 5, 5
  0064a54  bl 0x5cd2a8
  0064a58  nop
  0064a5c  lis 5, -32528
  0064a60  li 3, 140
  0064a64  ori 5, 5, 61680
  0064a68  li 4, 231
  0064a6c  ori 6, 26, 0
  0064a70  bl 0x60ac0
  0064a74  nop
  0064a78  lis 5, -32768
  0064a7c  lis 6, 101
  0064a80  ori 5, 5, 49344
  0064a84  addic 6, 6, 7812
  0064a88  li 3, 20
  0064a8c  li 4, 246
  0064a90  bl 0x60ac0
  0064a94  nop
  0064a98  lwz 5, 96(25)
  0064a9c  ori 3, 26, 0
  0064aa0  ori 4, 28, 0
  0064aa4  extsw 5, 5
  0064aa8  bl 0x5cd2a8
  0064aac  nop
  0064ab0  lis 5, -32528
  0064ab4  li 3, 140
  0064ab8  ori 5, 5, 61680
  0064abc  li 4, 246
  0064ac0  ori 6, 26, 0
  0064ac4  bl 0x60ac0
  0064ac8  nop
  0064acc  lis 5, -32768
  0064ad0  lis 6, 101
  0064ad4  ori 5, 5, 49344
  0064ad8  addic 6, 6, 7828
  0064adc  li 3, 20
  0064ae0  li 4, 261
  0064ae4  bl 0x60ac0
  0064ae8  nop
  0064aec  lwz 5, 40(25)
  0064af0  ori 3, 26, 0
  0064af4  extsw 5, 5
  0064af8  ori 4, 28, 0
  0064afc  bl 0x5cd2a8
  0064b00  nop
  0064b04  lis 5, -32528
  0064b08  li 3, 140
  0064b0c  ori 5, 5, 61680
  0064b10  li 4, 261
  0064b14  ori 6, 26, 0
  0064b18  bl 0x60ac0
  0064b1c  nop
  0064b20  lbz 5, 10(27)
  0064b24  ori 3, 26, 0
  0064b28  ori 4, 28, 0
  0064b2c  bl 0x5cd2a8
  0064b30  nop
  0064b34  lis 5, -32704
  0064b38  li 3, 122
  0064b3c  ori 5, 5, 24704
  0064b40  li 4, 261
  0064b44  ori 6, 26, 0
  0064b48  bl 0x60ac0
  0064b4c  nop
  0064b50  lis 5, -32768
  0064b54  lis 6, 101
  0064b58  ori 5, 5, 49344
  0064b5c  addic 6, 6, 7836
  0064b60  li 3, 20
  0064b64  li 4, 276
  0064b68  bl 0x60ac0
  0064b6c  nop
  0064b70  lwz 5, 44(25)
  0064b74  ori 3, 26, 0
  0064b78  ori 4, 28, 0
  0064b7c  extsw 5, 5
  0064b80  bl 0x5cd2a8
  0064b84  nop
  0064b88  lis 5, -32528
  0064b8c  li 3, 140
  0064b90  ori 5, 5, 61680
  0064b94  li 4, 276
  0064b98  ori 6, 26, 0
  0064b9c  bl 0x60ac0
  0064ba0  nop
  0064ba4  lbz 5, 11(27)
  0064ba8  ori 3, 26, 0
  0064bac  ori 4, 28, 0
  0064bb0  bl 0x5cd2a8
  0064bb4  nop
  0064bb8  lis 5, -32704
  0064bbc  li 3, 122
  0064bc0  ori 5, 5, 24704
  0064bc4  li 4, 276
  0064bc8  ori 6, 26, 0
  0064bcc  bl 0x60ac0
  0064bd0  nop
  0064bd4  lis 5, -32768
  0064bd8  lis 6, 101
  0064bdc  ori 5, 5, 49344
  0064be0  addic 6, 6, 7852
  0064be4  li 3, 20
  0064be8  li 4, 291
  0064bec  bl 0x60ac0
  0064bf0  nop
  0064bf4  lwz 5, 52(25)
  0064bf8  ori 3, 26, 0
  0064bfc  extsw 5, 5
  0064c00  ori 4, 28, 0
  0064c04  bl 0x5cd2a8
  0064c08  nop
  0064c0c  lis 5, -32528
  0064c10  li 3, 140
  0064c14  ori 5, 5, 61680
  0064c18  li 4, 291
  0064c1c  ori 6, 26, 0
  0064c20  bl 0x60ac0
  0064c24  nop
  0064c28  lis 5, -32768
  0064c2c  lis 6, 101
  0064c30  ori 5, 5, 49344
  0064c34  addic 6, 6, 7868
  0064c38  li 3, 20
  0064c3c  li 4, 306
  0064c40  bl 0x60ac0
  0064c44  nop
  0064c48  lwz 5, 80(25)
  0064c4c  ori 3, 26, 0
  0064c50  ori 4, 28, 0
  0064c54  extsw 5, 5
  0064c58  bl 0x5cd2a8
  0064c5c  nop
  0064c60  lis 5, -32528
  0064c64  li 3, 140
  0064c68  ori 5, 5, 61680
  0064c6c  li 4, 306
  0064c70  ori 6, 26, 0
  0064c74  bl 0x60ac0
  0064c78  nop
  0064c7c  lbz 5, 20(27)
  0064c80  ori 3, 26, 0
  0064c84  ori 4, 28, 0
  0064c88  bl 0x5cd2a8
  0064c8c  nop
  0064c90  lis 5, -32704
  0064c94  li 3, 122
  0064c98  ori 5, 5, 24704
  0064c9c  li 4, 306
  0064ca0  ori 6, 26, 0
  0064ca4  bl 0x60ac0
  0064ca8  nop
  0064cac  lis 5, -32768
  0064cb0  lis 6, 101
  0064cb4  ori 5, 5, 49344
  0064cb8  addic 6, 6, 7876
  0064cbc  li 3, 20
  0064cc0  li 4, 321
  0064cc4  bl 0x60ac0
  0064cc8  nop
  0064ccc  lwz 5, 64(25)
  0064cd0  ori 3, 26, 0
  0064cd4  extsw 5, 5
  0064cd8  ori 4, 28, 0
  0064cdc  bl 0x5cd2a8
  0064ce0  nop
  0064ce4  lis 5, -32528
  0064ce8  li 3, 140
  0064cec  ori 5, 5, 61680
  0064cf0  li 4, 321
  0064cf4  ori 6, 26, 0
  0064cf8  bl 0x60ac0
  0064cfc  nop
  0064d00  lbz 5, 16(27)
  0064d04  ori 3, 26, 0
  0064d08  ori 4, 28, 0
  0064d0c  bl 0x5cd2a8
  0064d10  nop
  0064d14  lis 5, -32704
  0064d18  li 3, 122
  0064d1c  ori 5, 5, 24704
  0064d20  li 4, 321
  0064d24  ori 6, 26, 0
  0064d28  bl 0x60ac0
  0064d2c  nop
  0064d30  lis 5, -32768
  0064d34  lis 6, 101
  0064d38  ori 5, 5, 49344
  0064d3c  addic 6, 6, 7892
  0064d40  li 3, 20
  0064d44  li 4, 336
  0064d48  bl 0x60ac0
  0064d4c  nop
  0064d50  lwz 5, 76(25)
  0064d54  ori 3, 26, 0
  0064d58  ori 4, 28, 0
  0064d5c  extsw 5, 5
  0064d60  bl 0x5cd2a8
  0064d64  nop
  0064d68  lis 5, -32528
  0064d6c  li 3, 140
  0064d70  ori 5, 5, 61680
  0064d74  li 4, 336
  0064d78  ori 6, 26, 0
  0064d7c  bl 0x60ac0
  0064d80  nop
  0064d84  lbz 5, 19(27)
  0064d88  ori 3, 26, 0
  0064d8c  ori 4, 28, 0
  0064d90  bl 0x5cd2a8
  0064d94  nop
  0064d98  lis 5, -32704
  0064d9c  li 3, 122
  0064da0  ori 5, 5, 24704
  0064da4  ori 6, 26, 0
  0064da8  li 4, 336
  0064dac  bl 0x60ac0
  0064db0  nop
  0064db4  lis 5, -32768
  0064db8  lis 6, 101
  0064dbc  ori 5, 5, 49344
  0064dc0  li 3, 20
  0064dc4  addic 6, 6, 7908
  0064dc8  li 4, 351
  0064dcc  bl 0x60ac0
  0064dd0  nop
  0064dd4  lwz 5, 68(25)
  0064dd8  ori 3, 26, 0
  0064ddc  extsw 5, 5
  0064de0  ori 4, 28, 0
  0064de4  bl 0x5cd2a8
  0064de8  nop
  0064dec  lis 5, -32528
  0064df0  li 3, 140
  0064df4  ori 5, 5, 61680
  0064df8  li 4, 351
  0064dfc  ori 6, 26, 0
  0064e00  bl 0x60ac0
  0064e04  nop
  0064e08  lbz 5, 17(27)
  0064e0c  ori 3, 26, 0
  0064e10  ori 4, 28, 0
  0064e14  bl 0x5cd2a8
  0064e18  nop
  0064e1c  lis 5, -32704
  0064e20  li 3, 122
  0064e24  ori 5, 5, 24704
  0064e28  ori 6, 26, 0
  0064e2c  li 4, 351
  0064e30  bl 0x60ac0
  0064e34  nop
  0064e38  lis 5, -32768
  0064e3c  lis 6, 101
  0064e40  ori 5, 5, 49344
  0064e44  li 3, 20
  0064e48  li 4, 366
  0064e4c  addic 6, 6, 7924
  0064e50  bl 0x60ac0
  0064e54  nop
  0064e58  lwz 5, 60(25)
  0064e5c  ori 3, 26, 0
  0064e60  ori 4, 28, 0
  0064e64  extsw 5, 5
  0064e68  bl 0x5cd2a8
  0064e6c  nop
  0064e70  lis 5, -32528
  0064e74  li 3, 140
  0064e78  ori 5, 5, 61680
  0064e7c  li 4, 366
  0064e80  ori 6, 26, 0
  0064e84  bl 0x60ac0
  0064e88  nop
  0064e8c  lbz 5, 15(27)
  0064e90  ori 3, 26, 0
  0064e94  ori 4, 28, 0
  0064e98  bl 0x5cd2a8
  0064e9c  nop
  0064ea0  lis 5, -32704
  0064ea4  li 3, 122
  0064ea8  ori 5, 5, 24704
  0064eac  ori 6, 26, 0
  0064eb0  li 4, 366
  0064eb4  bl 0x60ac0
  0064eb8  nop
  0064ebc  lis 5, -32768
  0064ec0  lis 6, 101
  0064ec4  ori 5, 5, 49344
  0064ec8  li 3, 20
  0064ecc  li 4, 381
  0064ed0  addic 6, 6, 7932
  0064ed4  bl 0x60ac0
  0064ed8  nop
  0064edc  lis 5, 151
  0064ee0  ori 3, 26, 0
  0064ee4  ori 4, 28, 0
  0064ee8  lwz 5, -25440(5)
  0064eec  extsw 5, 5
  0064ef0  bl 0x5cd2a8
  0064ef4  nop
  0064ef8  lis 5, -32528
  0064efc  ori 6, 26, 0
  0064f00  ori 5, 5, 61680
  0064f04  li 3, 140
  0064f08  li 4, 381
  0064f0c  bl 0x60ac0
  0064f10  nop
  0064f14  lis 5, -32768
  0064f18  lis 6, 101
  0064f1c  ori 5, 5, 49152
  0064f20  addic 6, 6, 7940
  0064f24  li 3, 188
  0064f28  li 4, 256
  0064f2c  bl 0x60ac0
  0064f30  nop
  0064f34  lis 5, -32768
  0064f38  lis 6, 101
  0064f3c  li 3, 188
  0064f40  li 4, 262
  0064f44  ori 5, 5, 49152
  0064f48  addic 6, 6, 7948
  0064f4c  bl 0x60ac0
  0064f50  nop
  0064f54  lwz 3, 12(31)
  0064f58  cmpwi 3, 4
  0064f5c  bf 2, 0x64f90
  0064f60  lwz 4, 16(31)
  0064f64  lis 6, 101
  0064f68  lis 5, -32768
  0064f6c  sldi 7, 4, 4
  0064f70  addic 6, 6, 7476
  0064f74  subc 4, 7, 4
  0064f78  li 3, 185
  0064f7c  addic 4, 4, 274
  0064f80  ori 5, 5, 192
  0064f84  extsw 4, 4
  0064f88  bl 0x60ac0
  0064f8c  nop
  0064f90  lis 6, 101
  0064f94  lis 5, -32768
  0064f98  li 3, 196
  0064f9c  addic 6, 6, 7956
  0064fa0  li 4, 276
  0064fa4  ori 5, 5, 49344
  0064fa8  bl 0x60ac0
  0064fac  nop
  0064fb0  lis 3, 6
  0064fb4  addi 27, 3, 15964
  0064fb8  lis 3, 150
  0064fbc  addic 26, 1, 136
  0064fc0  lfs 31, 0(27)
  0064fc4  lfs 2, -5632(3)
  0064fc8  lis 3, 101
  0064fcc  fmuls 1, 2, 31
  0064fd0  addic 25, 3, 7964
  0064fd4  ori 3, 26, 0
  0064fd8  ori 4, 25, 0
  0064fdc  stfd 1, 64(1)
  0064fe0  ld 5, 64(1)
  0064fe4  bl 0x5cd2a8
  0064fe8  nop
  0064fec  lis 5, -32528
  0064ff0  ori 6, 26, 0
  0064ff4  ori 5, 5, 61680
  0064ff8  li 3, 284
  0064ffc  li 4, 276
  0065000  bl 0x60ac0
  0065004  nop
  0065008  lis 6, 101
  006500c  lis 5, -32768
  0065010  addic 6, 6, 7972
  0065014  ori 5, 5, 49344
  0065018  li 3, 196
  006501c  li 4, 291
  0065020  bl 0x60ac0
  0065024  nop
  0065028  lfs 30, 4(27)
  006502c  lis 3, 150
  0065030  lfs 2, 8(27)
  0065034  ori 4, 25, 0
  0065038  fmr 29, 2
  006503c  lfs 1, -5624(3)
  0065040  ori 3, 26, 0
  0065044  fnmsubs 1, 1, 30, 29
  0065048  stfd 1, 64(1)
  006504c  ld 5, 64(1)
  0065050  bl 0x5cd2a8
  0065054  nop
  0065058  lis 5, -32528
  006505c  ori 6, 26, 0
  0065060  ori 5, 5, 61680
  0065064  li 3, 284
  0065068  li 4, 291
  006506c  bl 0x60ac0
  0065070  nop
  0065074  lis 6, 101
  0065078  lis 5, -32768
  006507c  li 3, 196
  0065080  ori 5, 5, 49344
  0065084  addic 6, 6, 7980
  0065088  li 4, 306
  006508c  bl 0x60ac0
  0065090  nop
  0065094  lis 3, 150
  0065098  ori 4, 25, 0
  006509c  lfs 1, -5628(3)
  00650a0  ori 3, 26, 0
  00650a4  fmuls 1, 1, 31
  00650a8  stfd 1, 64(1)
  00650ac  ld 5, 64(1)
  00650b0  bl 0x5cd2a8
  00650b4  nop
  00650b8  lis 5, -32528
  00650bc  ori 6, 26, 0
  00650c0  ori 5, 5, 61680
  00650c4  li 3, 284
  00650c8  li 4, 306
  00650cc  bl 0x60ac0
  00650d0  nop
  00650d4  lis 6, 101
  00650d8  lis 5, -32768
  00650dc  li 3, 196
  00650e0  ori 5, 5, 49344
  00650e4  addic 6, 6, 7988
  00650e8  li 4, 321
  00650ec  bl 0x60ac0
  00650f0  nop
  00650f4  lis 3, 150
  00650f8  ori 4, 25, 0
  00650fc  lfs 1, -5620(3)
  0065100  ori 3, 26, 0
  0065104  fnmsubs 1, 1, 30, 29
  0065108  stfd 1, 64(1)
  006510c  ld 5, 64(1)
  0065110  bl 0x5cd2a8
  0065114  nop
  0065118  lis 5, -32528
  006511c  li 3, 284
  0065120  ori 5, 5, 61680
  0065124  li 4, 321
  0065128  ori 6, 26, 0
  006512c  bl 0x60ac0
  0065130  nop
  0065134  lis 5, -32768
  0065138  lis 6, 101
  006513c  ori 5, 5, 49344
  0065140  addic 6, 6, 7996
  0065144  li 3, 196
  0065148  li 4, 336
  006514c  bl 0x60ac0
  0065150  nop
  0065154  lis 5, 150
  0065158  ori 3, 26, 0
  006515c  ori 4, 28, 0
  0065160  lbz 5, -5636(5)
  0065164  bl 0x5cd2a8
  0065168  nop
  006516c  lis 5, -32528
  0065170  li 3, 284
  0065174  ori 5, 5, 61680
  0065178  li 4, 336
  006517c  ori 6, 26, 0
  0065180  bl 0x60ac0
  0065184  nop
  0065188  lis 5, -32768
  006518c  lis 6, 101
  0065190  ori 5, 5, 49344
  0065194  addic 6, 6, 8004
  0065198  li 3, 196
  006519c  li 4, 351
  00651a0  bl 0x60ac0
  00651a4  nop
  00651a8  lis 5, 150
  00651ac  ori 3, 26, 0
  00651b0  ori 4, 28, 0
  00651b4  lbz 5, -5635(5)
  00651b8  bl 0x5cd2a8
  00651bc  nop
  00651c0  lis 5, -32528
  00651c4  li 3, 284
  00651c8  ori 5, 5, 61680
  00651cc  li 4, 351
  00651d0  ori 6, 26, 0
  00651d4  bl 0x60ac0
  00651d8  nop
  00651dc  lis 5, -32768
  00651e0  lis 6, 101
  00651e4  ori 5, 5, 49344
  00651e8  addic 6, 6, 8012
  00651ec  li 3, 196
  00651f0  li 4, 366
  00651f4  bl 0x60ac0
  00651f8  nop
  00651fc  lis 5, 150
  0065200  ori 3, 26, 0
  0065204  ori 4, 28, 0
  0065208  lbz 5, -5634(5)
  006520c  bl 0x5cd2a8
  0065210  nop
  0065214  lis 5, -32528
  0065218  li 3, 284
  006521c  ori 5, 5, 61680
  0065220  li 4, 366
  0065224  ori 6, 26, 0
  0065228  bl 0x60ac0
  006522c  nop
  0065230  lis 5, -32768
  0065234  lis 6, 101
  0065238  ori 5, 5, 49152
  006523c  addic 6, 6, 8020
  0065240  li 3, 352
  0065244  li 4, 256
  0065248  bl 0x60ac0
  006524c  nop
  0065250  lis 5, -32768
  0065254  li 3, 352
  0065258  li 4, 262
  006525c  ori 5, 5, 49152
  0065260  ori 6, 30, 0
  0065264  bl 0x60ac0
  0065268  nop
  006526c  lwz 3, 12(31)
  0065270  cmpwi 3, 5
  0065274  bf 2, 0x652a8
  0065278  lwz 4, 16(31)
  006527c  lis 6, 101
  0065280  lis 5, -32768
  0065284  sldi 7, 4, 4
  0065288  addic 6, 6, 7476
  006528c  subc 4, 7, 4
  0065290  li 3, 349
  0065294  addic 4, 4, 274
  0065298  ori 5, 5, 192
  006529c  extsw 4, 4
  00652a0  bl 0x60ac0
  00652a4  nop
  00652a8  lis 6, 101
  00652ac  lis 5, -32768
  00652b0  li 3, 360
  00652b4  addic 6, 6, 8028
  00652b8  li 4, 276
  00652bc  ori 5, 5, 49344
  00652c0  bl 0x60ac0
  00652c4  nop
  00652c8  lwz 3, 240(31)
  00652cc  lis 5, -32528
  00652d0  li 4, 276
  00652d4  cntlzw 3, 3
  00652d8  ori 5, 5, 61680
  00652dc  rlwinm 6, 3, 29, 29, 29
  00652e0  li 3, 458
  00652e4  lwzx 6, 29, 6
  00652e8  bl 0x60ac0
  00652ec  nop
  00652f0  lis 6, 101
  00652f4  lis 5, -32768
  00652f8  li 3, 360
  00652fc  ori 5, 5, 49344
  0065300  addic 6, 6, 8044
  0065304  li 4, 291
  0065308  bl 0x60ac0
  006530c  nop
  0065310  lwz 3, 244(31)
  0065314  lis 5, -32528
  0065318  li 4, 291
  006531c  slwi 3, 3, 2
  0065320  ori 5, 5, 61680
  0065324  extsw 6, 3
  0065328  li 3, 458
  006532c  lwzx 6, 29, 6
  0065330  bl 0x60ac0
  0065334  nop
  0065338  lis 6, 101
  006533c  lis 5, -32768
  0065340  addic 6, 6, 8060
  0065344  li 3, 360
  0065348  li 4, 306
  006534c  ori 5, 5, 49344
  0065350  bl 0x60ac0
  0065354  nop
  0065358  li 30, 0
  006535c  lbz 3, 249(31)
  0065360  addic 29, 1, 112
  0065364  lis 5, -32528
  0065368  ori 6, 29, 0
  006536c  stb 3, 112(1)
  0065370  ori 5, 5, 61680
  0065374  stb 30, 113(1)
  0065378  li 3, 458
  006537c  li 4, 306
  0065380  bl 0x60ac0
  0065384  nop
  0065388  lis 6, 101
  006538c  lis 5, -32768
  0065390  li 4, 321
  0065394  addic 6, 6, 8076
  0065398  li 3, 360
  006539c  ori 5, 5, 49344
  00653a0  bl 0x60ac0
  00653a4  nop
  00653a8  lbz 4, 248(31)
  00653ac  lis 5, -32528
  00653b0  stb 30, 113(1)
  00653b4  li 3, 458
  00653b8  stb 4, 112(1)
  00653bc  ori 5, 5, 61680
  00653c0  li 4, 321
  00653c4  ori 6, 29, 0
  00653c8  bl 0x60ac0
  00653cc  nop
  00653d0  bl 0x60c44
  00653d4  nop
  00653d8  lis 3, 230
  00653dc  lwz 3, -21904(3)
  00653e0  clrlwi 3, 3, 31
  00653e4  cmpwi 3, 0
  00653e8  bt 2, 0x65400
  00653ec  lis 3, 230
  00653f0  lwz 3, -21904(3)
  00653f4  clrlwi 3, 3, 31
  00653f8  cmpwi 3, 0
  00653fc  bf 2, 0x653ec
  0065400  ld 0, 288(1)
  0065404  mtlr 0
  0065408  lfd 29, 248(1)
  006540c  lfd 30, 256(1)
  0065410  lfd 31, 264(1)
  0065414  ld 25, 192(1)
  0065418  ld 26, 200(1)
  006541c  ld 27, 208(1)
  0065420  ld 28, 216(1)
  0065424  ld 29, 224(1)
  0065428  ld 30, 232(1)
  006542c  ld 31, 240(1)
  0065430  addi 1, 1, 272
  0065434  blr

STUB_00065438:   # 0x65438, 0x4 bytes
  0065438  blr

STUB_0006543c:   # 0x6543c, 0x4 bytes
  006543c  blr

STUB_00065440:   # 0x65440, 0x4 bytes
  0065440  blr

STUB_00065444:   # 0x65444, 0x4 bytes
  0065444  blr

STUB_00065448:   # 0x65448, 0x4 bytes
  0065448  blr

STUB_0006544c:   # 0x6544c, 0x4 bytes
  006544c  blr

STUB_00065450:   # 0x65450, 0x4 bytes
  0065450  blr

STUB_00065454:   # 0x65454, 0x4 bytes
  0065454  blr

STUB_00065458:   # 0x65458, 0x4 bytes
  0065458  blr

STUB_0006545c:   # 0x6545c, 0x4 bytes
  006545c  blr

STUB_00065460:   # 0x65460, 0x4 bytes
  0065460  blr

STUB_00065464:   # 0x65464, 0x4 bytes
  0065464  blr

STUB_00065468:   # 0x65468, 0x4 bytes
  0065468  blr

STUB_0006546c:   # 0x6546c, 0x4 bytes
  006546c  blr

STUB_00065470:   # 0x65470, 0x4 bytes
  0065470  blr

STUB_00065474:   # 0x65474, 0x4 bytes
  0065474  blr

ScreenPosFromWorldSpace:   # 0x65490, 0x178 bytes
  0065490  stdu 1, -272(1)
  0065494  mflr 0
  0065498  std 0, 288(1)
  006549c  std 30, 256(1)
  00654a0  addic 30, 1, 112
  00654a4  std 31, 264(1)
  00654a8  lis 5, 6
  00654ac  ori 31, 3, 0
  00654b0  std 29, 248(1)
  00654b4  ori 3, 30, 0
  00654b8  std 28, 240(1)
  00654bc  addi 29, 5, 21624
  00654c0  ori 28, 4, 0
  00654c4  bl 0x500af8
  00654c8  nop
  00654cc  lis 3, 149
  00654d0  lfs 1, 0(29)
  00654d4  ori 5, 30, 0
  00654d8  addic 4, 3, 5056
  00654dc  addic 3, 1, 176
  00654e0  lfs 2, 320(4)
  00654e4  lfs 3, 324(4)
  00654e8  lfs 4, 328(4)
  00654ec  fmuls 2, 2, 1
  00654f0  fmuls 3, 3, 1
  00654f4  addic 4, 4, 64
  00654f8  fmuls 1, 4, 1
  00654fc  stfs 2, 160(1)
  0065500  stfs 3, 164(1)
  0065504  stfs 1, 168(1)
  0065508  bl 0x50162c
  006550c  nop
  0065510  lfs 1, 4(29)
  0065514  lfs 2, 4(28)
  0065518  lfs 3, 0(28)
  006551c  fmuls 2, 2, 1
  0065520  lfs 4, 8(28)
  0065524  fmuls 3, 3, 1
  0065528  lfs 5, 204(1)
  006552c  lis 3, 150
  0065530  lfs 6, 188(1)
  0065534  fmuls 1, 4, 1
  0065538  lfs 4, 220(1)
  006553c  addic 3, 3, -12416
  0065540  lfs 7, 236(1)
  0065544  lfs 8, 192(1)
  0065548  lfs 9, 196(1)
  006554c  fmuls 5, 5, 2
  0065550  lfs 10, 528(3)
  0065554  fmuls 9, 9, 2
  0065558  fmadds 5, 6, 3, 5
  006555c  fmuls 6, 8, 2
  0065560  lfs 8, 176(1)
  0065564  lfs 11, 180(1)
  0065568  fmadds 4, 4, 1, 5
  006556c  fmadds 5, 8, 3, 6
  0065570  fmadds 6, 11, 3, 9
  0065574  lfs 8, 208(1)
  0065578  lfs 9, 212(1)
  006557c  fadds 4, 4, 7
  0065580  fmadds 5, 8, 1, 5
  0065584  lfs 7, 224(1)
  0065588  fmadds 6, 9, 1, 6
  006558c  lfs 8, 228(1)
  0065590  lfs 9, 200(1)
  0065594  fmuls 2, 9, 2
  0065598  fdivs 4, 10, 4
  006559c  fadds 5, 5, 7
  00655a0  lfs 7, 8(29)
  00655a4  fadds 6, 6, 8
  00655a8  lfs 11, 184(1)
  00655ac  lfs 8, 12(29)
  00655b0  fmadds 2, 11, 3, 2
  00655b4  lfs 13, 216(1)
  00655b8  lfs 0, 232(1)
  00655bc  fmadds 1, 13, 1, 2
  00655c0  fadds 1, 1, 0
  00655c4  fmadds 2, 5, 4, 7
  00655c8  fmadds 3, 6, 4, 7
  00655cc  fmuls 2, 2, 8
  00655d0  fmuls 3, 3, 8
  00655d4  stfs 2, 0(31)
  00655d8  stfs 3, 4(31)
  00655dc  lfs 2, 16(29)
  00655e0  fmuls 1, 1, 2
  00655e4  stfs 1, 8(31)
  00655e8  ld 0, 288(1)
  00655ec  mtlr 0
  00655f0  ld 28, 240(1)
  00655f4  ld 29, 248(1)
  00655f8  ld 30, 256(1)
  00655fc  ld 31, 264(1)
  0065600  addi 1, 1, 272
  0065604  blr

Debug_ResetLevelCounters:   # 0x65608, 0x20 bytes
  0065608  lis 3, 150
  006560c  li 4, 0
  0065610  addic 3, 3, -24064
  0065614  lwz 5, 868(3)
  0065618  stw 4, 432(3)
  006561c  stw 5, 872(3)
  0065620  stw 4, 868(3)
  0065624  blr

STUB_00065628:   # 0x65628, 0x4 bytes
  0065628  blr

STUB_0006562c:   # 0x6562c, 0x4 bytes
  006562c  blr

STUB_00065630:   # 0x65630, 0x4 bytes
  0065630  blr

STUB_00065634_RET_NEG1:   # 0x65634, 0x8 bytes
  0065634  li 3, -1
  0065638  blr

STUB_0006563c_RET_NEG1:   # 0x6563c, 0x8 bytes
  006563c  li 3, -1
  0065640  blr

STUB_00065644:   # 0x65644, 0x18 bytes
  0065644  li 3, 0
  0065648  addc 3, 1, 3
  006564c  std 8, 88(3)
  0065650  std 9, 96(3)
  0065654  std 10, 104(3)
  0065658  blr

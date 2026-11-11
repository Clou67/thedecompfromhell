# game/update/moby881.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M881_004a0760:   # 0x4a0760, 0x14 bytes
  04a0760  lis 3, 141
  04a0764  lis 4, 1
  04a0768  addic 3, 3, -16956
  04a076c  stw 4, 72(3)
  04a0770  blr

UpdateMoby_881:   # 0x4a07c0, 0x84c bytes
  04a07c0  stdu 1, -528(1)
  04a07c4  mflr 0
  04a07c8  std 0, 544(1)
  04a07cc  stfd 28, 496(1)
  04a07d0  stfd 29, 504(1)
  04a07d4  stfd 30, 512(1)
  04a07d8  stfd 31, 520(1)
  04a07dc  std 31, 488(1)
  04a07e0  cmpwi 3, 0
  04a07e4  std 30, 480(1)
  04a07e8  std 29, 472(1)
  04a07ec  std 28, 464(1)
  04a07f0  ori 31, 3, 0
  04a07f4  bt 2, 0x4a0fdc
  04a07f8  lwz 30, 120(31)
  04a07fc  cmpwi 30, 0
  04a0800  bt 2, 0x4a0fdc
  04a0804  ori 3, 31, 0
  04a0808  addic 28, 30, 32
  04a080c  lis 4, 35
  04a0810  li 5, 0
  04a0814  bl 0x10675c
  04a0818  nop
  04a081c  ori 29, 3, 0
  04a0820  ori 3, 31, 0
  04a0824  ori 4, 29, 0
  04a0828  addic 7, 1, 416
  04a082c  li 9, 0
  04a0830  li 10, 4
  04a0834  ori 5, 28, 0
  04a0838  li 6, 0
  04a083c  li 8, 0
  04a0840  bl 0x106840
  04a0844  nop
  04a0848  ori 4, 3, 0
  04a084c  lwz 3, 416(1)
  04a0850  cmpwi 4, 2
  04a0854  bt 1, 0x4a0870
  04a0858  cmpwi 4, -1
  04a085c  bf 1, 0x4a0870
  04a0860  cmpwi 4, 0
  04a0864  bf 1, 0x4a0870
  04a0868  li 4, 0
  04a086c  stw 4, 32(30)
  04a0870  cmpwi 3, 1
  04a0874  bf 1, 0x4a09c8
  04a0878  cmpwi 29, 0
  04a087c  bt 2, 0x4a0898
  04a0880  lwz 3, 32(29)
  04a0884  cmpwi 3, 0
  04a0888  bt 2, 0x4a0898
  04a088c  lhz 3, 166(3)
  04a0890  cmpwi 3, 882
  04a0894  bt 2, 0x4a09c8
  04a0898  lwz 3, 32(30)
  04a089c  lwz 4, 44(29)
  04a08a0  srawi 5, 3, 31
  04a08a4  lfs 2, 32(30)
  04a08a8  srawi 6, 4, 31
  04a08ac  lfs 1, 44(29)
  04a08b0  srwi 7, 5, 1
  04a08b4  srwi 8, 6, 1
  04a08b8  xor 3, 7, 3
  04a08bc  xor 4, 8, 4
  04a08c0  subc 3, 3, 5
  04a08c4  subc 4, 4, 6
  04a08c8  cmpw 3, 4
  04a08cc  bt 1, 0x4a096c
  04a08d0  ori 3, 31, 0
  04a08d4  li 4, 0
  04a08d8  li 5, -1
  04a08dc  bl 0xfd8d0
  04a08e0  nop
  04a08e4  lis 3, 74
  04a08e8  li 7, 0
  04a08ec  addi 6, 3, 1912
  04a08f0  li 12, -1
  04a08f4  li 11, 1
  04a08f8  ori 3, 31, 0
  04a08fc  addic 4, 1, 192
  04a0900  lfs 1, 0(6)
  04a0904  li 5, 0
  04a0908  stw 7, 32(30)
  04a090c  li 8, 10
  04a0910  stw 7, 204(1)
  04a0914  li 9, 3
  04a0918  stw 7, 200(1)
  04a091c  li 10, 16
  04a0920  stw 7, 196(1)
  04a0924  fmr 2, 1
  04a0928  stw 7, 192(1)
  04a092c  lfs 3, 4(6)
  04a0930  lfs 4, 8(6)
  04a0934  lfs 5, 12(6)
  04a0938  lfs 6, 16(6)
  04a093c  lfs 7, 20(6)
  04a0940  std 12, 144(1)
  04a0944  std 11, 160(1)
  04a0948  std 11, 168(1)
  04a094c  std 12, 176(1)
  04a0950  std 7, 184(1)
  04a0954  bl 0x10e030
  04a0958  nop
  04a095c  ori 3, 31, 0
  04a0960  bl 0xefb38
  04a0964  nop
  04a0968  b 0x4a0fdc
  04a096c  fsubs 1, 2, 1
  04a0970  lis 3, 74
  04a0974  li 4, 250
  04a0978  vspltisw 2, -1
  04a097c  addi 3, 3, 1912
  04a0980  li 5, 24
  04a0984  lis 6, 114
  04a0988  stb 4, 103(30)
  04a098c  li 4, -3056
  04a0990  vslw 2, 2, 2
  04a0994  stfs 1, 32(30)
  04a0998  <unknown>
  04a099c  <unknown>
  04a09a0  li 5, 38
  04a09a4  vspltw 3, 3, 0
  04a09a8  addic 4, 30, 96
  04a09ac  ori 3, 31, 0
  04a09b0  vmaddfp 2, 4, 3, 2
  04a09b4  vctsxs 2, 2, 0
  04a09b8  vsplth 2, 2, 1
  04a09bc  stvehx 2, 5, 30
  04a09c0  bl 0x10c808
  04a09c4  nop
  04a09c8  li 5, 255
  04a09cc  ori 3, 31, 0
  04a09d0  addic 4, 30, 96
  04a09d4  stb 5, 164(31)
  04a09d8  bl 0x10c9a0
  04a09dc  nop
  04a09e0  lis 3, 74
  04a09e4  addic 5, 1, 336
  04a09e8  addi 4, 3, 1912
  04a09ec  ori 3, 31, 0
  04a09f0  lfs 31, 28(4)
  04a09f4  fmr 1, 31
  04a09f8  bl 0x1118d8
  04a09fc  nop
  04a0a00  lbz 3, 32(31)
  04a0a04  cmpwi 3, 0
  04a0a08  bt 1, 0x4a0a18
  04a0a0c  cmpwi 3, -1
  04a0a10  bf 1, 0x4a0fdc
  04a0a14  b 0x4a0a2c
  04a0a18  cmpwi 3, 1
  04a0a1c  bf 1, 0x4a0aa8
  04a0a20  cmpwi 3, 2
  04a0a24  bf 1, 0x4a0b28
  04a0a28  b 0x4a0fdc
  04a0a2c  li 3, 112
  04a0a30  vspltisw 4, -1
  04a0a34  lis 5, 74
  04a0a38  addi 4, 3, 16
  04a0a3c  vslw 4, 4, 4
  04a0a40  <unknown>
  04a0a44  addi 3, 5, 1912
  04a0a48  <unknown>
  04a0a4c  li 4, 32
  04a0a50  vor 2, 2, 3
  04a0a54  li 6, 116
  04a0a58  li 5, 0
  04a0a5c  vcfsx 2, 2, 0
  04a0a60  <unknown>
  04a0a64  lis 3, 114
  04a0a68  vspltw 3, 3, 0
  04a0a6c  li 4, -3056
  04a0a70  li 7, 1
  04a0a74  <unknown>
  04a0a78  lis 3, 161
  04a0a7c  li 4, 1808
  04a0a80  vaddfp 2, 2, 3
  04a0a84  <unknown>
  04a0a88  vmaddfp 2, 5, 2, 4
  04a0a8c  vctsxs 2, 2, 0
  04a0a90  vadduwm 2, 3, 2
  04a0a94  vspltw 2, 2, 0
  04a0a98  stvewx 2, 6, 30
  04a0a9c  stb 5, 41(30)
  04a0aa0  stb 7, 32(31)
  04a0aa4  b 0x4a0fdc
  04a0aa8  lis 3, 161
  04a0aac  li 4, 1808
  04a0ab0  lwz 5, 116(30)
  04a0ab4  lwz 6, 1808(3)
  04a0ab8  <unknown>
  04a0abc  cmpw 5, 6
  04a0ac0  bt 1, 0x4a0fdc
  04a0ac4  lis 3, 74
  04a0ac8  vspltisw 3, -1
  04a0acc  li 5, 36
  04a0ad0  addi 3, 3, 1912
  04a0ad4  lis 4, 114
  04a0ad8  li 6, -3056
  04a0adc  vslw 3, 3, 3
  04a0ae0  li 29, 0
  04a0ae4  <unknown>
  04a0ae8  vspltw 4, 4, 0
  04a0aec  <unknown>
  04a0af0  li 3, 116
  04a0af4  vmaddfp 3, 5, 4, 3
  04a0af8  vctsxs 3, 3, 0
  04a0afc  vadduwm 2, 2, 3
  04a0b00  vspltw 2, 2, 0
  04a0b04  stvewx 2, 3, 30
  04a0b08  sth 29, 120(30)
  04a0b0c  bl 0xfcc68
  04a0b10  nop
  04a0b14  li 3, 2
  04a0b18  stfs 1, 124(30)
  04a0b1c  sth 29, 122(30)
  04a0b20  stb 3, 32(31)
  04a0b24  b 0x4a0fdc
  04a0b28  addic 3, 30, 120
  04a0b2c  bl 0x4fffb4
  04a0b30  nop
  04a0b34  cmpwi 3, 0
  04a0b38  bt 2, 0x4a0f78
  04a0b3c  lis 3, 74
  04a0b40  vspltisw 2, -1
  04a0b44  li 5, 40
  04a0b48  addi 3, 3, 1912
  04a0b4c  lis 4, 114
  04a0b50  li 6, -3056
  04a0b54  vslw 2, 2, 2
  04a0b58  <unknown>
  04a0b5c  li 3, 120
  04a0b60  vspltw 3, 3, 0
  04a0b64  <unknown>
  04a0b68  vmaddfp 2, 4, 3, 2
  04a0b6c  vctsxs 2, 2, 0
  04a0b70  vsplth 2, 2, 1
  04a0b74  stvehx 2, 3, 30
  04a0b78  lfs 1, 20(31)
  04a0b7c  lfs 3, 340(1)
  04a0b80  lfs 4, 16(31)
  04a0b84  fsubs 5, 1, 3
  04a0b88  lfs 2, 336(1)
  04a0b8c  fsubs 6, 4, 2
  04a0b90  fmuls 5, 5, 5
  04a0b94  fmadds 5, 6, 6, 5
  04a0b98  fsqrts 5, 5
  04a0b9c  fcmpu 0, 5, 31
  04a0ba0  cror 6, 1, 2
  04a0ba4  bt 6, 0x4a0d64
  04a0ba8  fsubs 2, 2, 4
  04a0bac  fsubs 1, 3, 1
  04a0bb0  lis 3, 74
  04a0bb4  addi 3, 3, 1912
  04a0bb8  lis 4, 115
  04a0bbc  addic 4, 4, 22784
  04a0bc0  fabs 5, 2
  04a0bc4  fabs 4, 1
  04a0bc8  stfs 2, 420(1)
  04a0bcc  stfs 1, 424(1)
  04a0bd0  fsubs 1, 5, 4
  04a0bd4  stfs 1, 428(1)
  04a0bd8  lwz 5, 420(1)
  04a0bdc  lfs 1, 0(3)
  04a0be0  lfs 2, 420(1)
  04a0be4  lwz 3, 424(1)
  04a0be8  lfs 3, 424(1)
  04a0bec  lwz 6, 428(1)
  04a0bf0  rlwinm 3, 3, 3, 29, 29
  04a0bf4  fabs 6, 3
  04a0bf8  lfs 3, 428(1)
  04a0bfc  fabs 2, 2
  04a0c00  rlwimi 3, 6, 2, 30, 30
  04a0c04  fsub 7, 3, 1
  04a0c08  rlwimi 3, 5, 4, 28, 28
  04a0c0c  fsub 8, 3, 1
  04a0c10  ori 5, 4, 0
  04a0c14  rlwimi 5, 3, 2, 26, 28
  04a0c18  slwi 3, 3, 2
  04a0c1c  clrldi 5, 5, 32
  04a0c20  fsel 4, 7, 2, 4
  04a0c24  lfsx 3, 4, 3
  04a0c28  lfs 2, 4(5)
  04a0c2c  fsel 5, 8, 6, 5
  04a0c30  fcmpu 0, 4, 1
  04a0c34  bt 1, 0x4a0c3c
  04a0c38  b 0x4a0d60
  04a0c3c  fsubs 6, 5, 4
  04a0c40  fadds 4, 5, 4
  04a0c44  addic 6, 1, 16
  04a0c48  li 3, 2
  04a0c4c  addic 5, 6, 416
  04a0c50  addic 4, 6, 432
  04a0c54  mtctr 3
  04a0c58  fdivs 4, 6, 4
  04a0c5c  fmuls 6, 4, 4
  04a0c60  stfs 4, 444(1)
  04a0c64  stfs 4, 436(1)
  04a0c68  stfs 4, 440(1)
  04a0c6c  stfs 4, 432(1)
  04a0c70  lfs 7, 444(1)
  04a0c74  lfs 8, 436(1)
  04a0c78  lfs 9, 440(1)
  04a0c7c  fmuls 4, 6, 6
  04a0c80  fmuls 8, 8, 6
  04a0c84  fmuls 7, 7, 4
  04a0c88  fmuls 5, 4, 4
  04a0c8c  fmuls 4, 9, 4
  04a0c90  stfs 8, 436(1)
  04a0c94  fmuls 6, 7, 6
  04a0c98  stfs 4, 440(1)
  04a0c9c  stfs 6, 444(1)
  04a0ca0  lfs 4, 416(6)
  04a0ca4  fmuls 4, 4, 5
  04a0ca8  stfs 4, 432(6)
  04a0cac  lfs 4, 4(5)
  04a0cb0  addic 6, 6, 8
  04a0cb4  addic 5, 5, 8
  04a0cb8  fmuls 4, 4, 5
  04a0cbc  stfs 4, 4(4)
  04a0cc0  addic 4, 4, 8
  04a0cc4  bdnz 0x4a0ca0
  04a0cc8  ori 7, 1, 0
  04a0ccc  li 4, 4
  04a0cd0  lis 6, 115
  04a0cd4  addic 5, 7, 432
  04a0cd8  mtctr 4
  04a0cdc  addic 6, 6, 22752
  04a0ce0  ori 4, 5, 0
  04a0ce4  lfs 4, 432(7)
  04a0ce8  lfs 5, 0(6)
  04a0cec  fmuls 4, 4, 5
  04a0cf0  lfs 5, 4(6)
  04a0cf4  addic 6, 6, 8
  04a0cf8  stfs 4, 432(7)
  04a0cfc  lfs 4, 4(5)
  04a0d00  addic 7, 7, 8
  04a0d04  fmuls 4, 4, 5
  04a0d08  stfs 4, 4(5)
  04a0d0c  addic 5, 5, 8
  04a0d10  bdnz 0x4a0ce4
  04a0d14  ori 5, 3, 0
  04a0d18  ori 3, 1, 0
  04a0d1c  mtctr 5
  04a0d20  lfs 4, 432(3)
  04a0d24  fadds 1, 1, 4
  04a0d28  addic 3, 3, 16
  04a0d2c  lfs 4, 4(4)
  04a0d30  lfs 5, 8(4)
  04a0d34  lfs 6, 12(4)
  04a0d38  addic 4, 4, 16
  04a0d3c  fadds 1, 1, 4
  04a0d40  fadds 1, 1, 5
  04a0d44  fadds 1, 1, 6
  04a0d48  bdnz 0x4a0d20
  04a0d4c  lis 3, 74
  04a0d50  addi 3, 3, 1912
  04a0d54  lfs 4, 44(3)
  04a0d58  fadds 1, 1, 4
  04a0d5c  fmadds 1, 1, 3, 2
  04a0d60  stfs 1, 124(30)
  04a0d64  lis 3, 74
  04a0d68  addi 29, 3, 1912
  04a0d6c  lfs 1, 48(29)
  04a0d70  lfs 2, 52(29)
  04a0d74  bl 0xfcbe8
  04a0d78  nop
  04a0d7c  stfs 1, 208(1)
  04a0d80  lfs 1, 56(29)
  04a0d84  lfs 2, 8(29)
  04a0d88  bl 0xfcbe8
  04a0d8c  nop
  04a0d90  li 3, 0
  04a0d94  stfs 1, 212(1)
  04a0d98  li 5, 224
  04a0d9c  lfs 31, 0(29)
  04a0da0  addic 4, 1, 224
  04a0da4  lfs 2, 16(31)
  04a0da8  stw 3, 216(1)
  04a0dac  lfs 3, 20(31)
  04a0db0  addic 3, 1, 272
  04a0db4  stfs 2, 256(1)
  04a0db8  lfs 2, 28(31)
  04a0dbc  stfs 3, 260(1)
  04a0dc0  stfs 2, 268(1)
  04a0dc4  lfs 2, 16(29)
  04a0dc8  lfs 3, 24(31)
  04a0dcc  vspltisw 2, 0
  04a0dd0  fadds 1, 3, 2
  04a0dd4  stfs 1, 264(1)
  04a0dd8  stvx 2, 5, 1
  04a0ddc  lfs 1, 124(30)
  04a0de0  stfs 1, 232(1)
  04a0de4  bl 0x500ca4
  04a0de8  nop
  04a0dec  lfs 1, 212(1)
  04a0df0  lfs 2, 292(1)
  04a0df4  lfs 3, 208(1)
  04a0df8  fmuls 2, 2, 1
  04a0dfc  lfs 4, 288(1)
  04a0e00  lfs 5, 276(1)
  04a0e04  lfs 6, 272(1)
  04a0e08  fmuls 4, 4, 1
  04a0e0c  lfs 7, 216(1)
  04a0e10  lfs 8, 308(1)
  04a0e14  lfs 9, 304(1)
  04a0e18  lfs 10, 296(1)
  04a0e1c  lfs 11, 220(1)
  04a0e20  fmuls 10, 10, 1
  04a0e24  fmadds 2, 5, 3, 2
  04a0e28  lfs 5, 324(1)
  04a0e2c  fmadds 4, 6, 3, 4
  04a0e30  lfs 6, 280(1)
  04a0e34  lfs 12, 320(1)
  04a0e38  lfs 13, 312(1)
  04a0e3c  fmadds 6, 6, 3, 10
  04a0e40  fmadds 2, 8, 7, 2
  04a0e44  lfs 8, 328(1)
  04a0e48  fmadds 4, 9, 7, 4
  04a0e4c  lis 4, 114
  04a0e50  fmadds 6, 13, 7, 6
  04a0e54  fmadds 2, 5, 11, 2
  04a0e58  lfs 5, 300(1)
  04a0e5c  fmadds 4, 12, 11, 4
  04a0e60  fmuls 1, 5, 1
  04a0e64  lfs 5, 284(1)
  04a0e68  lfs 9, 316(1)
  04a0e6c  fmadds 6, 8, 11, 6
  04a0e70  fmuls 8, 2, 2
  04a0e74  fmadds 1, 5, 3, 1
  04a0e78  lfs 3, 332(1)
  04a0e7c  stfs 4, 208(1)
  04a0e80  stfs 2, 212(1)
  04a0e84  fmadds 8, 4, 4, 8
  04a0e88  stfs 6, 216(1)
  04a0e8c  fmadds 1, 9, 7, 1
  04a0e90  lis 5, 114
  04a0e94  fmadds 5, 6, 6, 8
  04a0e98  fmadds 1, 3, 11, 1
  04a0e9c  fsqrts 5, 5
  04a0ea0  addic 28, 1, 256
  04a0ea4  li 7, 0
  04a0ea8  stfs 1, 220(1)
  04a0eac  lfs 3, 60(29)
  04a0eb0  lfs 7, -3052(4)
  04a0eb4  lfs 9, 16(31)
  04a0eb8  lfs 10, 20(31)
  04a0ebc  lfs 11, 24(31)
  04a0ec0  stfs 1, 252(1)
  04a0ec4  lfs 12, -3048(5)
  04a0ec8  ori 3, 28, 0
  04a0ecc  addic 4, 1, 208
  04a0ed0  fmuls 8, 7, 3
  04a0ed4  fmuls 1, 7, 3
  04a0ed8  fadds 10, 2, 10
  04a0edc  fadds 9, 4, 9
  04a0ee0  fadds 11, 6, 11
  04a0ee4  stfs 9, 208(1)
  04a0ee8  stfs 10, 212(1)
  04a0eec  stfs 11, 216(1)
  04a0ef0  fdivs 8, 8, 5
  04a0ef4  fsub 13, 31, 5
  04a0ef8  fsub 0, 31, 5
  04a0efc  fsub 30, 31, 5
  04a0f00  fsub 29, 5, 31
  04a0f04  fsub 28, 5, 31
  04a0f08  fsub 5, 5, 31
  04a0f0c  fmuls 3, 4, 8
  04a0f10  fmuls 2, 2, 8
  04a0f14  fmuls 4, 6, 8
  04a0f18  fsel 6, 13, 31, 3
  04a0f1c  fsel 7, 0, 31, 2
  04a0f20  fsel 8, 30, 31, 4
  04a0f24  fsel 3, 29, 6, 3
  04a0f28  fsel 2, 28, 7, 2
  04a0f2c  fsel 4, 5, 8, 4
  04a0f30  stfs 3, 240(1)
  04a0f34  stfs 2, 244(1)
  04a0f38  stfs 4, 248(1)
  04a0f3c  lfs 2, 64(29)
  04a0f40  fmuls 2, 12, 2
  04a0f44  bl 0x108180
  04a0f48  nop
  04a0f4c  stfs 1, 248(1)
  04a0f50  ori 3, 28, 0
  04a0f54  lhz 6, 122(30)
  04a0f58  addic 4, 1, 240
  04a0f5c  ori 5, 31, 0
  04a0f60  extsh 6, 6
  04a0f64  bl 0x4a1030
  04a0f68  nop
  04a0f6c  lhz 3, 122(30)
  04a0f70  addic 3, 3, 1
  04a0f74  sth 3, 122(30)
  04a0f78  lis 3, 161
  04a0f7c  li 4, 1808
  04a0f80  lwz 5, 116(30)
  04a0f84  lwz 6, 1808(3)
  04a0f88  <unknown>
  04a0f8c  cmpw 5, 6
  04a0f90  bt 1, 0x4a0fdc
  04a0f94  lis 3, 74
  04a0f98  vspltisw 3, -1
  04a0f9c  li 5, 68
  04a0fa0  addi 3, 3, 1912
  04a0fa4  lis 4, 114
  04a0fa8  li 6, -3056
  04a0fac  vslw 3, 3, 3
  04a0fb0  <unknown>
  04a0fb4  vspltw 4, 4, 0
  04a0fb8  <unknown>
  04a0fbc  li 3, 116
  04a0fc0  vmaddfp 3, 5, 4, 3
  04a0fc4  li 4, 1
  04a0fc8  vctsxs 3, 3, 0
  04a0fcc  vadduwm 2, 2, 3
  04a0fd0  vspltw 2, 2, 0
  04a0fd4  stvewx 2, 3, 30
  04a0fd8  stb 4, 32(31)
  04a0fdc  ld 0, 544(1)
  04a0fe0  mtlr 0
  04a0fe4  lfd 28, 496(1)
  04a0fe8  lfd 29, 504(1)
  04a0fec  lfd 30, 512(1)
  04a0ff0  lfd 31, 520(1)
  04a0ff4  ld 28, 464(1)
  04a0ff8  ld 29, 472(1)
  04a0ffc  ld 30, 480(1)
  04a1000  ld 31, 488(1)
  04a1004  addi 1, 1, 528
  04a1008  blr

M882_004a100c:   # 0x4a100c, 0x14 bytes
  04a100c  lis 3, 141
  04a1010  lis 4, 1
  04a1014  addic 3, 3, -16844
  04a1018  stw 4, 72(3)
  04a101c  blr

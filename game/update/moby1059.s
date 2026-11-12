# game/update/moby1059.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001a87d8:   # 0x1a87d8, 0xc bytes
  01a87d8  li 4, 3
  01a87dc  stb 4, 32(3)
  01a87e0  blr

M1059_001a87e4:   # 0x1a87e4, 0x14 bytes
  01a87e4  lis 3, 116
  01a87e8  lis 4, 1
  01a87ec  addic 3, 3, 2200
  01a87f0  stw 4, 72(3)
  01a87f4  blr

M1059_001a8808:   # 0x1a8808, 0x14c bytes
  01a8808  stdu 1, -144(1)
  01a880c  mflr 0
  01a8810  std 0, 160(1)
  01a8814  lis 6, 27
  01a8818  lis 7, 114
  01a881c  std 31, 136(1)
  01a8820  addi 6, 6, -30728
  01a8824  ori 31, 4, 0
  01a8828  lis 4, 14851
  01a882c  lis 8, 16256
  01a8830  ori 4, 4, 4719
  01a8834  lfs 1, 0(6)
  01a8838  lfs 2, -3048(7)
  01a883c  lis 7, 114
  01a8840  fmuls 1, 2, 1
  01a8844  stw 4, 20(31)
  01a8848  lis 10, 16166
  01a884c  lis 4, 15989
  01a8850  lis 11, 16128
  01a8854  ori 4, 4, 49807
  01a8858  lis 12, 15948
  01a885c  lis 9, 15395
  01a8860  ori 10, 10, 26214
  01a8864  ori 12, 12, 52429
  01a8868  std 30, 128(1)
  01a886c  ori 9, 9, 55050
  01a8870  std 29, 120(1)
  01a8874  lis 30, 16448
  01a8878  ori 29, 3, 0
  01a887c  stfs 1, 16(31)
  01a8880  lis 3, 16656
  01a8884  lfs 1, 4(6)
  01a8888  lfs 2, -3052(7)
  01a888c  fmuls 1, 2, 1
  01a8890  stfs 1, 24(31)
  01a8894  lfs 1, 8(6)
  01a8898  lfs 2, -3052(7)
  01a889c  stw 8, 40(31)
  01a88a0  li 6, 1024
  01a88a4  fmuls 1, 2, 1
  01a88a8  stw 4, 48(31)
  01a88ac  stw 11, 52(31)
  01a88b0  li 4, 0
  01a88b4  stw 10, 56(31)
  01a88b8  li 7, 13
  01a88bc  stw 12, 72(31)
  01a88c0  stw 9, 76(31)
  01a88c4  stw 30, 80(31)
  01a88c8  stw 3, 84(31)
  01a88cc  stb 4, 61(31)
  01a88d0  stw 6, 32(31)
  01a88d4  stw 7, 36(31)
  01a88d8  addic 6, 31, 24
  01a88dc  addic 7, 31, 28
  01a88e0  stfs 1, 28(31)
  01a88e4  lfs 1, 0(5)
  01a88e8  lfs 2, 8(5)
  01a88ec  stfs 1, 48(1)
  01a88f0  stfs 2, 56(1)
  01a88f4  lfs 1, 4(5)
  01a88f8  lfs 2, 12(5)
  01a88fc  stfs 1, 52(1)
  01a8900  addic 5, 1, 112
  01a8904  stfs 2, 60(1)
  01a8908  ld 3, 48(1)
  01a890c  ld 4, 56(1)
  01a8910  bl 0x107de8
  01a8914  nop
  01a8918  lfs 1, 112(1)
  01a891c  ori 3, 29, 0
  01a8920  ori 4, 31, 0
  01a8924  li 6, 12
  01a8928  li 7, 1
  01a892c  li 8, 0
  01a8930  bl 0x10ad80
  01a8934  nop
  01a8938  ld 0, 160(1)
  01a893c  mtlr 0
  01a8940  ld 29, 120(1)
  01a8944  ld 30, 128(1)
  01a8948  ld 31, 136(1)
  01a894c  addi 1, 1, 144
  01a8950  blr

M1059_001a8960:   # 0x1a8960, 0x15c bytes
  01a8960  stdu 1, -160(1)
  01a8964  mflr 0
  01a8968  std 0, 176(1)
  01a896c  lis 6, 27
  01a8970  lis 7, 114
  01a8974  std 31, 152(1)
  01a8978  addi 6, 6, -30380
  01a897c  ori 31, 4, 0
  01a8980  lis 4, 14851
  01a8984  lis 8, 15989
  01a8988  ori 4, 4, 4719
  01a898c  lfs 1, 0(6)
  01a8990  lfs 2, -3048(7)
  01a8994  lis 7, 114
  01a8998  fmuls 1, 2, 1
  01a899c  stw 4, 20(31)
  01a89a0  lis 9, 16166
  01a89a4  lis 4, 16307
  01a89a8  ori 8, 8, 49807
  01a89ac  ori 4, 4, 13107
  01a89b0  lis 10, 15948
  01a89b4  lis 12, 16128
  01a89b8  lis 11, 15395
  01a89bc  ori 9, 9, 26214
  01a89c0  ori 10, 10, 52429
  01a89c4  std 30, 144(1)
  01a89c8  ori 11, 11, 55050
  01a89cc  lis 30, 16640
  01a89d0  std 28, 128(1)
  01a89d4  stfs 1, 16(31)
  01a89d8  ori 28, 3, 0
  01a89dc  lfs 1, 4(6)
  01a89e0  lis 3, 16792
  01a89e4  std 29, 136(1)
  01a89e8  lfs 2, -3052(7)
  01a89ec  li 29, 0
  01a89f0  fmuls 1, 2, 1
  01a89f4  stfs 1, 24(31)
  01a89f8  lfs 1, 8(6)
  01a89fc  lfs 2, -3052(7)
  01a8a00  stw 4, 40(31)
  01a8a04  addic 6, 31, 24
  01a8a08  stw 8, 48(31)
  01a8a0c  fmuls 1, 2, 1
  01a8a10  stw 12, 52(31)
  01a8a14  li 4, 1433
  01a8a18  stw 9, 56(31)
  01a8a1c  addic 8, 1, 112
  01a8a20  stw 10, 72(31)
  01a8a24  addic 7, 31, 28
  01a8a28  stw 11, 76(31)
  01a8a2c  stw 30, 80(31)
  01a8a30  stw 3, 84(31)
  01a8a34  li 3, 13
  01a8a38  stb 29, 61(31)
  01a8a3c  stw 4, 32(31)
  01a8a40  stw 3, 36(31)
  01a8a44  stfs 1, 28(31)
  01a8a48  lfs 1, 0(5)
  01a8a4c  lfs 2, 8(5)
  01a8a50  stfs 1, 48(1)
  01a8a54  stfs 2, 56(1)
  01a8a58  lfs 1, 4(5)
  01a8a5c  lfs 2, 12(5)
  01a8a60  stfs 1, 52(1)
  01a8a64  ori 5, 8, 0
  01a8a68  stfs 2, 60(1)
  01a8a6c  ld 3, 48(1)
  01a8a70  ld 4, 56(1)
  01a8a74  bl 0x107de8
  01a8a78  nop
  01a8a7c  lfs 1, 112(1)
  01a8a80  ori 3, 28, 0
  01a8a84  ori 4, 31, 0
  01a8a88  li 6, 6
  01a8a8c  li 7, 1
  01a8a90  li 8, 0
  01a8a94  bl 0x10ad80
  01a8a98  nop
  01a8a9c  ld 0, 176(1)
  01a8aa0  mtlr 0
  01a8aa4  ld 28, 128(1)
  01a8aa8  ld 29, 136(1)
  01a8aac  ld 30, 144(1)
  01a8ab0  ld 31, 152(1)
  01a8ab4  addi 1, 1, 160
  01a8ab8  blr

M1059_001a8ac0:   # 0x1a8ac0, 0x230 bytes
  01a8ac0  stdu 1, -160(1)
  01a8ac4  mflr 0
  01a8ac8  std 0, 176(1)
  01a8acc  std 29, 136(1)
  01a8ad0  std 30, 144(1)
  01a8ad4  ori 29, 3, 0
  01a8ad8  lbz 3, 32(3)
  01a8adc  std 31, 152(1)
  01a8ae0  ori 30, 4, 0
  01a8ae4  ori 31, 5, 0
  01a8ae8  std 28, 128(1)
  01a8aec  std 27, 120(1)
  01a8af0  cmpwi 3, 14
  01a8af4  bt 2, 0x1a8ccc
  01a8af8  ori 3, 29, 0
  01a8afc  lis 4, 51
  01a8b00  li 5, 0
  01a8b04  bl 0x10675c
  01a8b08  nop
  01a8b0c  ori 28, 3, 0
  01a8b10  li 6, 0
  01a8b14  ori 4, 28, 0
  01a8b18  addic 7, 1, 112
  01a8b1c  li 9, 0
  01a8b20  ori 3, 29, 0
  01a8b24  li 10, 4
  01a8b28  ori 5, 31, 0
  01a8b2c  li 8, 0
  01a8b30  bl 0x106840
  01a8b34  nop
  01a8b38  lbz 4, 188(29)
  01a8b3c  cmpwi 4, 0
  01a8b40  bt 2, 0x1a8cc4
  01a8b44  cmpwi 3, 2
  01a8b48  bt 1, 0x1a8b60
  01a8b4c  cmpwi 3, -1
  01a8b50  bf 1, 0x1a8bc8
  01a8b54  cmpwi 3, 0
  01a8b58  bf 1, 0x1a8bc8
  01a8b5c  b 0x1a8b74
  01a8b60  cmpwi 3, 10
  01a8b64  bt 1, 0x1a8bc8
  01a8b68  cmpwi 3, 8
  01a8b6c  bf 1, 0x1a8b80
  01a8b70  b 0x1a8b9c
  01a8b74  li 3, 0
  01a8b78  stw 3, 0(31)
  01a8b7c  b 0x1a8bc8
  01a8b80  ori 3, 29, 0
  01a8b84  addic 4, 30, 112
  01a8b88  addic 5, 28, 16
  01a8b8c  bl 0x1a8960
  01a8b90  li 3, 12
  01a8b94  stb 3, 32(29)
  01a8b98  b 0x1a8bc8
  01a8b9c  lbz 3, 83(29)
  01a8ba0  cmpwi 3, 4
  01a8ba4  bt 2, 0x1a8bc0
  01a8ba8  ori 3, 29, 0
  01a8bac  li 4, 4
  01a8bb0  li 5, 4
  01a8bb4  li 6, 4
  01a8bb8  bl 0xfddc0
  01a8bbc  nop
  01a8bc0  li 3, 13
  01a8bc4  stb 3, 32(29)
  01a8bc8  lwz 3, 112(1)
  01a8bcc  cmpwi 3, 1
  01a8bd0  bf 1, 0x1a8cc4
  01a8bd4  lwz 3, 0(31)
  01a8bd8  lwz 4, 44(28)
  01a8bdc  addic 27, 30, 96
  01a8be0  srawi 5, 3, 31
  01a8be4  lfs 2, 0(31)
  01a8be8  srawi 6, 4, 31
  01a8bec  lfs 1, 44(28)
  01a8bf0  srwi 7, 5, 1
  01a8bf4  srwi 8, 6, 1
  01a8bf8  xor 3, 7, 3
  01a8bfc  xor 4, 8, 4
  01a8c00  subc 3, 3, 5
  01a8c04  subc 4, 4, 6
  01a8c08  cmpw 3, 4
  01a8c0c  bt 1, 0x1a8c6c
  01a8c10  li 6, 0
  01a8c14  lhz 7, 52(29)
  01a8c18  addic 5, 28, 16
  01a8c1c  rlwimi 7, 6, 0, 19, 19
  01a8c20  addic 4, 30, 112
  01a8c24  stw 6, 0(31)
  01a8c28  ori 3, 29, 0
  01a8c2c  sth 7, 52(29)
  01a8c30  bl 0x1a8808
  01a8c34  li 5, -1
  01a8c38  ori 3, 29, 0
  01a8c3c  li 4, 0
  01a8c40  bl 0xfd8d0
  01a8c44  nop
  01a8c48  li 5, 120
  01a8c4c  ori 3, 29, 0
  01a8c50  ori 4, 27, 0
  01a8c54  stb 5, 103(30)
  01a8c58  bl 0x10c808
  01a8c5c  nop
  01a8c60  li 3, 14
  01a8c64  stb 3, 32(29)
  01a8c68  b 0x1a8cc4
  01a8c6c  fsubs 1, 2, 1
  01a8c70  lis 3, 27
  01a8c74  li 4, 250
  01a8c78  vspltisw 2, -1
  01a8c7c  addi 3, 3, -30020
  01a8c80  lis 5, 114
  01a8c84  li 6, -3056
  01a8c88  vslw 2, 2, 2
  01a8c8c  stfs 1, 0(31)
  01a8c90  stb 4, 103(30)
  01a8c94  lvlx 3, 0, 3
  01a8c98  lvlx 4, 6, 5
  01a8c9c  vspltw 3, 3, 0
  01a8ca0  li 5, 38
  01a8ca4  ori 3, 29, 0
  01a8ca8  ori 4, 27, 0
  01a8cac  vmaddfp 2, 4, 3, 2
  01a8cb0  vctsxs 2, 2, 0
  01a8cb4  vsplth 2, 2, 1
  01a8cb8  stvehx 2, 5, 30
  01a8cbc  bl 0x10c808
  01a8cc0  nop
  01a8cc4  li 3, 255
  01a8cc8  stb 3, 164(29)
  01a8ccc  ld 0, 176(1)
  01a8cd0  mtlr 0
  01a8cd4  ld 27, 120(1)
  01a8cd8  ld 28, 128(1)
  01a8cdc  ld 29, 136(1)
  01a8ce0  ld 30, 144(1)
  01a8ce4  ld 31, 152(1)
  01a8ce8  addi 1, 1, 160
  01a8cec  blr

M1059_001a8cf0:   # 0x1a8cf0, 0x88 bytes
  01a8cf0  cmpwi 3, 0
  01a8cf4  bt 2, 0x1a8d74
  01a8cf8  lwz 4, 0(3)
  01a8cfc  li 7, 0
  01a8d00  cmpwi 4, 0
  01a8d04  bf 1, 0x1a8d74
  01a8d08  ori 6, 3, 0
  01a8d0c  addic 5, 3, 16
  01a8d10  addic 7, 7, 1
  01a8d14  lfs 1, 20(6)
  01a8d18  divw 8, 7, 4
  01a8d1c  mullw 4, 8, 4
  01a8d20  lfs 2, 16(6)
  01a8d24  subc 4, 7, 4
  01a8d28  sldi 4, 4, 4
  01a8d2c  addc 4, 4, 5
  01a8d30  clrldi 4, 4, 32
  01a8d34  lfs 3, 4(4)
  01a8d38  lfs 4, 0(4)
  01a8d3c  fsubs 1, 1, 3
  01a8d40  fsubs 2, 2, 4
  01a8d44  lfs 3, 24(6)
  01a8d48  lfs 4, 8(4)
  01a8d4c  fsubs 3, 3, 4
  01a8d50  lwz 4, 0(3)
  01a8d54  fmuls 1, 1, 1
  01a8d58  cmpw 7, 4
  01a8d5c  fmadds 1, 2, 2, 1
  01a8d60  fmadds 1, 3, 3, 1
  01a8d64  fsqrts 1, 1
  01a8d68  stfs 1, 28(6)
  01a8d6c  addic 6, 6, 16
  01a8d70  bt 0, 0x1a8d10
  01a8d74  blr

M1059_001a8d88:   # 0x1a8d88, 0x98 bytes
  01a8d88  stdu 1, -128(1)
  01a8d8c  mflr 0
  01a8d90  std 0, 144(1)
  01a8d94  std 31, 120(1)
  01a8d98  lis 5, 27
  01a8d9c  std 30, 112(1)
  01a8da0  ori 31, 4, 0
  01a8da4  addi 30, 5, -29320
  01a8da8  addic 3, 3, 16
  01a8dac  bl 0xffc18
  01a8db0  nop
  01a8db4  fmr 2, 1
  01a8db8  lwz 3, 300(31)
  01a8dbc  stfs 2, 304(31)
  01a8dc0  lfs 1, 0(3)
  01a8dc4  lfs 3, 0(30)
  01a8dc8  fsubs 1, 1, 2
  01a8dcc  fmadds 2, 1, 3, 2
  01a8dd0  stfs 2, 312(31)
  01a8dd4  lfs 2, 4(30)
  01a8dd8  fcmpu 0, 1, 2
  01a8ddc  cror 6, 1, 2
  01a8de0  bt 6, 0x1a8dec
  01a8de4  li 3, 2
  01a8de8  b 0x1a8e08
  01a8dec  lis 3, 27
  01a8df0  addi 3, 3, -29320
  01a8df4  lfs 2, 8(3)
  01a8df8  li 3, 0
  01a8dfc  fcmpu 0, 1, 2
  01a8e00  bt 1, 0x1a8e08
  01a8e04  li 3, 1
  01a8e08  ld 0, 144(1)
  01a8e0c  mtlr 0
  01a8e10  ld 30, 112(1)
  01a8e14  ld 31, 120(1)
  01a8e18  addi 1, 1, 128
  01a8e1c  blr

M1059_001a8e20:   # 0x1a8e20, 0xe0 bytes
  01a8e20  stdu 1, -128(1)
  01a8e24  mflr 0
  01a8e28  std 0, 144(1)
  01a8e2c  std 31, 120(1)
  01a8e30  ori 31, 3, 0
  01a8e34  lbz 3, 188(3)
  01a8e38  cmpwi 3, 0
  01a8e3c  cmpwi 1, 3, 2
  01a8e40  cmpwi 6, 3, 1
  01a8e44  cmpwi 7, 3, -1
  01a8e48  bt 1, 0x1a8e54
  01a8e4c  bf 29, 0x1a8eec
  01a8e50  b 0x1a8e60
  01a8e54  bf 25, 0x1a8e90
  01a8e58  bf 5, 0x1a8ec0
  01a8e5c  b 0x1a8eec
  01a8e60  lbz 3, 83(31)
  01a8e64  cmpwi 3, 0
  01a8e68  bt 2, 0x1a8e84
  01a8e6c  ori 3, 31, 0
  01a8e70  li 4, 0
  01a8e74  li 5, 0
  01a8e78  li 6, 10
  01a8e7c  bl 0xfddc0
  01a8e80  nop
  01a8e84  li 3, 1
  01a8e88  stb 3, 32(31)
  01a8e8c  b 0x1a8eec
  01a8e90  lbz 3, 83(31)
  01a8e94  cmpwi 3, 3
  01a8e98  bt 2, 0x1a8eb4
  01a8e9c  ori 3, 31, 0
  01a8ea0  li 4, 3
  01a8ea4  li 5, 0
  01a8ea8  li 6, 10
  01a8eac  bl 0xfddc0
  01a8eb0  nop
  01a8eb4  li 3, 7
  01a8eb8  stb 3, 32(31)
  01a8ebc  b 0x1a8eec
  01a8ec0  lbz 3, 83(31)
  01a8ec4  cmpwi 3, 9
  01a8ec8  bt 2, 0x1a8ee4
  01a8ecc  ori 3, 31, 0
  01a8ed0  li 4, 9
  01a8ed4  li 5, 0
  01a8ed8  li 6, 10
  01a8edc  bl 0xfddc0
  01a8ee0  nop
  01a8ee4  li 3, 15
  01a8ee8  stb 3, 32(31)
  01a8eec  ld 0, 144(1)
  01a8ef0  mtlr 0
  01a8ef4  ld 31, 120(1)
  01a8ef8  addi 1, 1, 128
  01a8efc  blr

M1059_001a8f18:   # 0x1a8f18, 0x2d0 bytes
  01a8f18  stdu 1, -144(1)
  01a8f1c  mflr 0
  01a8f20  std 0, 160(1)
  01a8f24  std 30, 128(1)
  01a8f28  ori 30, 3, 0
  01a8f2c  std 31, 136(1)
  01a8f30  lwz 3, 272(4)
  01a8f34  ori 31, 4, 0
  01a8f38  std 29, 120(1)
  01a8f3c  cmpwi 3, -1
  01a8f40  bt 2, 0x1a8f74
  01a8f44  lis 29, 165
  01a8f48  slwi 3, 3, 2
  01a8f4c  addic 29, 29, 7136
  01a8f50  extsw 3, 3
  01a8f54  lwzx 4, 29, 3
  01a8f58  ori 3, 4, 0
  01a8f5c  stw 4, 296(31)
  01a8f60  bl 0x1a8cf0
  01a8f64  lwz 3, 324(31)
  01a8f68  cmpwi 3, -1
  01a8f6c  bf 2, 0x1a8fa4
  01a8f70  b 0x1a8fcc
  01a8f74  lis 4, 164
  01a8f78  lis 3, 101
  01a8f7c  addic 3, 3, 17360
  01a8f80  lwz 4, -28512(4)
  01a8f84  subc 4, 30, 4
  01a8f88  srawi 4, 4, 8
  01a8f8c  addze 4, 4
  01a8f90  extsw 4, 4
  01a8f94  bl 0x5cd098
  01a8f98  nop
  01a8f9c  li 3, 1
  01a8fa0  b 0x1a91cc
  01a8fa4  slwi 3, 3, 2
  01a8fa8  extsw 3, 3
  01a8fac  lwzx 4, 29, 3
  01a8fb0  stw 4, 328(31)
  01a8fb4  ori 3, 4, 0
  01a8fb8  bl 0x1a8cf0
  01a8fbc  lwz 29, 280(31)
  01a8fc0  cmpwi 29, -1
  01a8fc4  bf 2, 0x1a8ffc
  01a8fc8  b 0x1a9090
  01a8fcc  lis 4, 164
  01a8fd0  lis 3, 101
  01a8fd4  addic 3, 3, 17416
  01a8fd8  lwz 4, -28512(4)
  01a8fdc  subc 4, 30, 4
  01a8fe0  srawi 4, 4, 8
  01a8fe4  addze 4, 4
  01a8fe8  extsw 4, 4
  01a8fec  bl 0x5cd098
  01a8ff0  nop
  01a8ff4  li 3, 1
  01a8ff8  b 0x1a91cc
  01a8ffc  lis 4, 164
  01a9000  slwi 5, 29, 8
  01a9004  addic 3, 30, 16
  01a9008  lwz 4, -28512(4)
  01a900c  addc 4, 4, 5
  01a9010  addic 4, 4, 24
  01a9014  stw 4, 300(31)
  01a9018  bl 0xffc18
  01a901c  nop
  01a9020  fmr 2, 1
  01a9024  lis 4, 27
  01a9028  addi 4, 4, -28928
  01a902c  lwz 3, 300(31)
  01a9030  stfs 2, 304(31)
  01a9034  lfs 1, 0(3)
  01a9038  lfs 3, 0(4)
  01a903c  fsubs 1, 1, 2
  01a9040  fmadds 2, 1, 3, 2
  01a9044  stfs 2, 312(31)
  01a9048  lfs 2, 4(4)
  01a904c  fcmpu 0, 1, 2
  01a9050  cror 6, 1, 2
  01a9054  bt 6, 0x1a9060
  01a9058  li 3, 2
  01a905c  b 0x1a907c
  01a9060  lis 3, 27
  01a9064  addi 4, 3, -28928
  01a9068  li 3, 0
  01a906c  lfs 2, 8(4)
  01a9070  fcmpu 0, 1, 2
  01a9074  bt 1, 0x1a907c
  01a9078  li 3, 1
  01a907c  stb 3, 188(30)
  01a9080  lwz 3, 276(31)
  01a9084  cmpwi 3, -1
  01a9088  bf 2, 0x1a90c0
  01a908c  b 0x1a917c
  01a9090  lis 4, 164
  01a9094  lis 3, 101
  01a9098  addic 3, 3, 17472
  01a909c  lwz 4, -28512(4)
  01a90a0  subc 4, 30, 4
  01a90a4  srawi 4, 4, 8
  01a90a8  addze 4, 4
  01a90ac  extsw 4, 4
  01a90b0  bl 0x5cd098
  01a90b4  nop
  01a90b8  li 3, 1
  01a90bc  b 0x1a91cc
  01a90c0  lis 4, 165
  01a90c4  slwi 3, 3, 7
  01a90c8  lwz 4, 7128(4)
  01a90cc  addc 3, 4, 3
  01a90d0  ori 4, 31, 0
  01a90d4  clrldi 3, 3, 32
  01a90d8  lfs 1, 48(3)
  01a90dc  stfs 1, 240(31)
  01a90e0  lfs 1, 52(3)
  01a90e4  stfs 1, 244(31)
  01a90e8  lfs 1, 56(3)
  01a90ec  stfs 1, 248(31)
  01a90f0  lfs 1, 60(3)
  01a90f4  ori 3, 30, 0
  01a90f8  stfs 1, 252(31)
  01a90fc  lfs 1, 16(30)
  01a9100  stfs 1, 224(31)
  01a9104  lfs 1, 20(30)
  01a9108  stfs 1, 228(31)
  01a910c  lfs 1, 24(30)
  01a9110  stfs 1, 232(31)
  01a9114  lfs 1, 28(30)
  01a9118  stfs 1, 236(31)
  01a911c  bl 0x1a8e20
  01a9120  bl 0x5c8318
  01a9124  nop
  01a9128  lis 4, -30584
  01a912c  ori 4, 4, 34953
  01a9130  mulhw 4, 4, 3
  01a9134  addc 4, 4, 3
  01a9138  srawi 4, 4, 6
  01a913c  srwi 5, 4, 31
  01a9140  addc 4, 4, 5
  01a9144  sldi 5, 4, 7
  01a9148  sldi 4, 4, 3
  01a914c  subc 4, 5, 4
  01a9150  subc 3, 3, 4
  01a9154  stw 3, 308(31)
  01a9158  bl 0x5c8318
  01a915c  nop
  01a9160  lis 4, 27
  01a9164  clrlwi 3, 3, 31
  01a9168  addi 4, 4, -28928
  01a916c  cmpwi 3, 0
  01a9170  lfs 1, 12(4)
  01a9174  bf 2, 0x1a91ac
  01a9178  b 0x1a91b8
  01a917c  lis 4, 164
  01a9180  lis 3, 101
  01a9184  addic 3, 3, 17520
  01a9188  lwz 4, -28512(4)
  01a918c  subc 4, 30, 4
  01a9190  srawi 4, 4, 8
  01a9194  addze 4, 4
  01a9198  extsw 4, 4
  01a919c  bl 0x5cd098
  01a91a0  nop
  01a91a4  li 3, 1
  01a91a8  b 0x1a91cc
  01a91ac  lis 3, 27
  01a91b0  addi 3, 3, -28928
  01a91b4  lfs 1, 16(3)
  01a91b8  li 3, 0
  01a91bc  li 4, 1
  01a91c0  stfs 1, 320(31)
  01a91c4  stw 3, 332(31)
  01a91c8  stb 4, 41(31)
  01a91cc  ld 0, 160(1)
  01a91d0  mtlr 0
  01a91d4  ld 29, 120(1)
  01a91d8  ld 30, 128(1)
  01a91dc  ld 31, 136(1)
  01a91e0  addi 1, 1, 144
  01a91e4  blr

M1059_001a9218:   # 0x1a9218, 0x6dc bytes
  01a9218  stdu 1, -368(1)
  01a921c  mflr 0
  01a9220  std 0, 384(1)
  01a9224  stfd 18, 256(1)
  01a9228  stfd 19, 264(1)
  01a922c  stfd 20, 272(1)
  01a9230  stfd 21, 280(1)
  01a9234  stfd 22, 288(1)
  01a9238  stfd 23, 296(1)
  01a923c  stfd 24, 304(1)
  01a9240  stfd 25, 312(1)
  01a9244  stfd 26, 320(1)
  01a9248  stfd 27, 328(1)
  01a924c  stfd 28, 336(1)
  01a9250  stfd 29, 344(1)
  01a9254  stfd 30, 352(1)
  01a9258  stfd 31, 360(1)
  01a925c  std 31, 248(1)
  01a9260  lwz 5, 308(4)
  01a9264  ori 31, 3, 0
  01a9268  std 30, 240(1)
  01a926c  cmpwi 5, 0
  01a9270  ori 30, 4, 0
  01a9274  std 29, 232(1)
  01a9278  std 28, 224(1)
  01a927c  lwz 3, 296(4)
  01a9280  bf 2, 0x1a9450
  01a9284  lfs 1, 240(30)
  01a9288  lfs 2, 16(31)
  01a928c  lfs 3, 244(30)
  01a9290  lfs 4, 20(31)
  01a9294  fsubs 1, 1, 2
  01a9298  lis 3, 27
  01a929c  fsubs 2, 3, 4
  01a92a0  addi 3, 3, -28184
  01a92a4  lis 4, 115
  01a92a8  addic 4, 4, 22784
  01a92ac  fabs 3, 1
  01a92b0  fabs 5, 2
  01a92b4  stfs 1, 140(1)
  01a92b8  stfs 2, 144(1)
  01a92bc  fsubs 1, 3, 5
  01a92c0  stfs 1, 148(1)
  01a92c4  lwz 5, 140(1)
  01a92c8  lfs 4, 0(3)
  01a92cc  lfs 1, 140(1)
  01a92d0  lwz 3, 144(1)
  01a92d4  lfs 2, 144(1)
  01a92d8  lwz 6, 148(1)
  01a92dc  rlwinm 3, 3, 3, 29, 29
  01a92e0  fabs 6, 2
  01a92e4  lfs 2, 148(1)
  01a92e8  fabs 1, 1
  01a92ec  rlwimi 3, 6, 2, 30, 30
  01a92f0  fsub 7, 2, 4
  01a92f4  rlwimi 3, 5, 4, 28, 28
  01a92f8  fsub 8, 2, 4
  01a92fc  ori 5, 4, 0
  01a9300  rlwimi 5, 3, 2, 26, 28
  01a9304  slwi 3, 3, 2
  01a9308  clrldi 5, 5, 32
  01a930c  fsel 5, 7, 1, 5
  01a9310  lfsx 1, 4, 3
  01a9314  lfs 2, 4(5)
  01a9318  fsel 3, 8, 6, 3
  01a931c  fcmpu 0, 5, 4
  01a9320  bt 1, 0x1a9328
  01a9324  b 0x1a9448
  01a9328  fsubs 6, 3, 5
  01a932c  fadds 3, 3, 5
  01a9330  addic 3, 1, 16
  01a9334  li 7, 2
  01a9338  addic 4, 3, 168
  01a933c  addic 5, 3, 184
  01a9340  mtctr 7
  01a9344  fdivs 3, 6, 3
  01a9348  fmuls 5, 3, 3
  01a934c  stfs 3, 196(1)
  01a9350  stfs 3, 188(1)
  01a9354  stfs 3, 192(1)
  01a9358  stfs 3, 184(1)
  01a935c  lfs 7, 196(1)
  01a9360  lfs 8, 188(1)
  01a9364  lfs 9, 192(1)
  01a9368  fmuls 6, 5, 5
  01a936c  fmuls 8, 8, 5
  01a9370  fmuls 7, 7, 6
  01a9374  fmuls 3, 6, 6
  01a9378  fmuls 6, 9, 6
  01a937c  stfs 8, 188(1)
  01a9380  fmuls 5, 7, 5
  01a9384  stfs 6, 192(1)
  01a9388  stfs 5, 196(1)
  01a938c  lfs 5, 168(3)
  01a9390  fmuls 5, 5, 3
  01a9394  stfs 5, 184(3)
  01a9398  lfs 5, 4(4)
  01a939c  addic 3, 3, 8
  01a93a0  addic 4, 4, 8
  01a93a4  fmuls 5, 5, 3
  01a93a8  stfs 5, 4(5)
  01a93ac  addic 5, 5, 8
  01a93b0  bdnz 0x1a938c
  01a93b4  li 5, 4
  01a93b8  ori 3, 1, 0
  01a93bc  mtctr 5
  01a93c0  lis 4, 115
  01a93c4  addic 5, 3, 184
  01a93c8  addic 4, 4, 22752
  01a93cc  ori 6, 5, 0
  01a93d0  lfs 3, 184(3)
  01a93d4  lfs 5, 0(4)
  01a93d8  fmuls 3, 3, 5
  01a93dc  lfs 5, 4(4)
  01a93e0  addic 4, 4, 8
  01a93e4  stfs 3, 184(3)
  01a93e8  lfs 3, 4(5)
  01a93ec  addic 3, 3, 8
  01a93f0  fmuls 3, 3, 5
  01a93f4  stfs 3, 4(5)
  01a93f8  addic 5, 5, 8
  01a93fc  bdnz 0x1a93d0
  01a9400  ori 3, 1, 0
  01a9404  mtctr 7
  01a9408  lfs 3, 184(3)
  01a940c  fadds 3, 4, 3
  01a9410  lfs 4, 4(6)
  01a9414  addic 3, 3, 16
  01a9418  lfs 5, 8(6)
  01a941c  lfs 6, 12(6)
  01a9420  addic 6, 6, 16
  01a9424  fadds 3, 3, 4
  01a9428  fadds 4, 3, 5
  01a942c  fadds 4, 4, 6
  01a9430  bdnz 0x1a9408
  01a9434  lis 3, 27
  01a9438  addi 3, 3, -28184
  01a943c  lfs 3, 4(3)
  01a9440  fadds 4, 4, 3
  01a9444  fmadds 4, 4, 1, 2
  01a9448  stfs 4, 316(30)
  01a944c  b 0x1a989c
  01a9450  ori 5, 3, 0
  01a9454  lis 3, 27
  01a9458  lfs 1, 72(31)
  01a945c  addi 3, 3, -28184
  01a9460  lfs 28, 8(3)
  01a9464  lfs 27, 12(3)
  01a9468  fadds 2, 1, 28
  01a946c  fsubs 3, 27, 1
  01a9470  lfs 26, 16(3)
  01a9474  fsubs 7, 26, 1
  01a9478  lfs 25, 20(3)
  01a947c  lfs 24, 24(3)
  01a9480  lfs 23, 28(3)
  01a9484  lfs 22, 32(3)
  01a9488  fsubs 4, 27, 2
  01a948c  fsub 6, 1, 3
  01a9490  fsubs 5, 26, 2
  01a9494  lfs 21, 36(3)
  01a9498  addic 29, 1, 112
  01a949c  addic 4, 5, 16
  01a94a0  fsub 8, 2, 4
  01a94a4  fsel 1, 6, 3, 1
  01a94a8  fsel 2, 8, 4, 2
  01a94ac  fsub 3, 7, 1
  01a94b0  fsub 4, 5, 2
  01a94b4  fsel 1, 3, 7, 1
  01a94b8  fsel 2, 4, 5, 2
  01a94bc  fmuls 3, 1, 1
  01a94c0  fmuls 4, 2, 2
  01a94c4  fmuls 5, 3, 1
  01a94c8  fmuls 6, 4, 2
  01a94cc  fmuls 7, 3, 5
  01a94d0  fmadds 1, 5, 25, 1
  01a94d4  fmuls 5, 4, 6
  01a94d8  fmadds 2, 6, 25, 2
  01a94dc  fmuls 6, 3, 7
  01a94e0  fmadds 1, 7, 24, 1
  01a94e4  fmuls 7, 4, 5
  01a94e8  fmadds 2, 5, 24, 2
  01a94ec  fmuls 3, 3, 6
  01a94f0  lfs 5, 16(31)
  01a94f4  fmadds 1, 6, 23, 1
  01a94f8  lfs 6, 20(31)
  01a94fc  lfs 20, 0(3)
  01a9500  ori 3, 29, 0
  01a9504  fmuls 4, 4, 7
  01a9508  fmadds 2, 7, 23, 2
  01a950c  fmadds 1, 3, 22, 1
  01a9510  lfs 3, 24(31)
  01a9514  stfs 3, 120(1)
  01a9518  fmadds 2, 4, 22, 2
  01a951c  fmadds 1, 1, 21, 6
  01a9520  fmadds 2, 2, 21, 5
  01a9524  stfs 1, 116(1)
  01a9528  stfs 2, 112(1)
  01a952c  lwz 5, 0(5)
  01a9530  extsw 5, 5
  01a9534  bl 0x104e44
  01a9538  nop
  01a953c  cmpwi 3, 0
  01a9540  bt 2, 0x1a9590
  01a9544  addic 3, 31, 16
  01a9548  ori 4, 29, 0
  01a954c  li 5, 36
  01a9550  ori 6, 31, 0
  01a9554  li 7, 0
  01a9558  bl 0x57820
  01a955c  nop
  01a9560  cmpwi 3, 0
  01a9564  bf 2, 0x1a9590
  01a9568  lis 3, 27
  01a956c  li 5, 36
  01a9570  addi 4, 3, -28184
  01a9574  ori 3, 29, 0
  01a9578  ori 6, 31, 0
  01a957c  lfs 1, 40(4)
  01a9580  bl 0x59e20
  01a9584  nop
  01a9588  cmpwi 3, 0
  01a958c  bt 2, 0x1a989c
  01a9590  lis 3, 27
  01a9594  lfs 31, 320(30)
  01a9598  fmr 29, 20
  01a959c  addi 3, 3, -28184
  01a95a0  lfs 30, 72(31)
  01a95a4  addic 28, 31, 16
  01a95a8  fabs 31, 31
  01a95ac  lfs 19, 44(3)
  01a95b0  lfs 18, 40(3)
  01a95b4  fmr 1, 30
  01a95b8  lfs 2, 320(30)
  01a95bc  bl 0x502578
  01a95c0  nop
  01a95c4  fmr 30, 1
  01a95c8  ori 3, 29, 0
  01a95cc  fadds 1, 30, 28
  01a95d0  fsubs 2, 27, 30
  01a95d4  fsubs 3, 26, 30
  01a95d8  fsubs 4, 27, 1
  01a95dc  fsub 5, 30, 2
  01a95e0  fsubs 6, 26, 1
  01a95e4  fsub 7, 1, 4
  01a95e8  fsel 2, 5, 2, 30
  01a95ec  fsel 1, 7, 4, 1
  01a95f0  fsub 4, 3, 2
  01a95f4  fsub 5, 6, 1
  01a95f8  fsel 2, 4, 3, 2
  01a95fc  lfs 4, 16(31)
  01a9600  lfs 7, 20(31)
  01a9604  lwz 5, 296(30)
  01a9608  addic 4, 5, 16
  01a960c  fsel 1, 5, 6, 1
  01a9610  fmuls 3, 2, 2
  01a9614  fmuls 5, 1, 1
  01a9618  fmuls 6, 3, 2
  01a961c  fmuls 8, 5, 1
  01a9620  fmuls 9, 3, 6
  01a9624  fmadds 2, 6, 25, 2
  01a9628  lfs 6, 24(31)
  01a962c  stfs 6, 120(1)
  01a9630  fmuls 10, 5, 8
  01a9634  fmadds 1, 8, 25, 1
  01a9638  fmuls 8, 3, 9
  01a963c  fmadds 2, 9, 24, 2
  01a9640  fmuls 9, 5, 10
  01a9644  fmadds 1, 10, 24, 1
  01a9648  fmuls 3, 3, 8
  01a964c  fmadds 2, 8, 23, 2
  01a9650  fmuls 5, 5, 9
  01a9654  fmadds 1, 9, 23, 1
  01a9658  fmadds 2, 3, 22, 2
  01a965c  fmadds 1, 5, 22, 1
  01a9660  fmadds 2, 2, 21, 7
  01a9664  fmadds 1, 1, 21, 4
  01a9668  stfs 2, 116(1)
  01a966c  stfs 1, 112(1)
  01a9670  lwz 5, 0(5)
  01a9674  extsw 5, 5
  01a9678  bl 0x104e44
  01a967c  nop
  01a9680  cmpwi 3, 0
  01a9684  bt 2, 0x1a96d4
  01a9688  ori 3, 28, 0
  01a968c  ori 4, 29, 0
  01a9690  li 5, 36
  01a9694  ori 6, 31, 0
  01a9698  li 7, 0
  01a969c  bl 0x57820
  01a96a0  nop
  01a96a4  cmpwi 3, 0
  01a96a8  bf 2, 0x1a96d4
  01a96ac  ori 3, 29, 0
  01a96b0  fmr 1, 18
  01a96b4  li 5, 36
  01a96b8  ori 6, 31, 0
  01a96bc  bl 0x59e20
  01a96c0  nop
  01a96c4  cmpwi 3, 0
  01a96c8  bf 2, 0x1a96d4
  01a96cc  stfs 30, 316(30)
  01a96d0  b 0x1a989c
  01a96d4  fadds 29, 31, 29
  01a96d8  fcmpu 0, 29, 19
  01a96dc  bt 0, 0x1a95b4
  01a96e0  lfs 1, 240(30)
  01a96e4  lfs 2, 16(31)
  01a96e8  lfs 3, 244(30)
  01a96ec  lfs 4, 20(31)
  01a96f0  fsubs 1, 1, 2
  01a96f4  fsubs 2, 3, 4
  01a96f8  lis 3, 115
  01a96fc  addic 3, 3, 22784
  01a9700  fabs 3, 1
  01a9704  fabs 4, 2
  01a9708  stfs 1, 128(1)
  01a970c  stfs 2, 132(1)
  01a9710  fsubs 1, 3, 4
  01a9714  stfs 1, 136(1)
  01a9718  lwz 4, 128(1)
  01a971c  lfs 1, 128(1)
  01a9720  lwz 5, 132(1)
  01a9724  lfs 2, 132(1)
  01a9728  lwz 6, 136(1)
  01a972c  rlwinm 5, 5, 3, 29, 29
  01a9730  fabs 5, 2
  01a9734  lfs 2, 136(1)
  01a9738  fabs 1, 1
  01a973c  rlwimi 5, 6, 2, 30, 30
  01a9740  fsub 6, 2, 20
  01a9744  fsub 7, 2, 20
  01a9748  rlwimi 5, 4, 4, 28, 28
  01a974c  ori 4, 3, 0
  01a9750  rlwimi 4, 5, 2, 26, 28
  01a9754  slwi 5, 5, 2
  01a9758  clrldi 4, 4, 32
  01a975c  fsel 4, 6, 1, 4
  01a9760  lfsx 1, 3, 5
  01a9764  fsel 3, 7, 5, 3
  01a9768  lfs 2, 4(4)
  01a976c  fcmpu 0, 4, 20
  01a9770  bt 1, 0x1a9778
  01a9774  b 0x1a9898
  01a9778  fsubs 5, 3, 4
  01a977c  fadds 3, 3, 4
  01a9780  addic 3, 1, 16
  01a9784  li 7, 2
  01a9788  addic 4, 3, 136
  01a978c  addic 5, 3, 152
  01a9790  mtctr 7
  01a9794  fdivs 3, 5, 3
  01a9798  fmuls 4, 3, 3
  01a979c  stfs 3, 164(1)
  01a97a0  stfs 3, 156(1)
  01a97a4  stfs 3, 160(1)
  01a97a8  stfs 3, 152(1)
  01a97ac  lfs 6, 164(1)
  01a97b0  lfs 7, 156(1)
  01a97b4  lfs 8, 160(1)
  01a97b8  fmuls 5, 4, 4
  01a97bc  fmuls 7, 7, 4
  01a97c0  fmuls 6, 6, 5
  01a97c4  fmuls 3, 5, 5
  01a97c8  fmuls 5, 8, 5
  01a97cc  stfs 7, 156(1)
  01a97d0  fmuls 4, 6, 4
  01a97d4  stfs 5, 160(1)
  01a97d8  stfs 4, 164(1)
  01a97dc  lfs 4, 136(3)
  01a97e0  fmuls 4, 4, 3
  01a97e4  stfs 4, 152(3)
  01a97e8  lfs 4, 4(4)
  01a97ec  addic 3, 3, 8
  01a97f0  addic 4, 4, 8
  01a97f4  fmuls 4, 4, 3
  01a97f8  stfs 4, 4(5)
  01a97fc  addic 5, 5, 8
  01a9800  bdnz 0x1a97dc
  01a9804  li 5, 4
  01a9808  ori 3, 1, 0
  01a980c  mtctr 5
  01a9810  lis 4, 115
  01a9814  addic 5, 3, 152
  01a9818  addic 4, 4, 22752
  01a981c  ori 6, 5, 0
  01a9820  lfs 3, 152(3)
  01a9824  lfs 4, 0(4)
  01a9828  fmuls 3, 3, 4
  01a982c  lfs 4, 4(4)
  01a9830  addic 4, 4, 8
  01a9834  stfs 3, 152(3)
  01a9838  lfs 3, 4(5)
  01a983c  addic 3, 3, 8
  01a9840  fmuls 3, 3, 4
  01a9844  stfs 3, 4(5)
  01a9848  addic 5, 5, 8
  01a984c  bdnz 0x1a9820
  01a9850  ori 3, 1, 0
  01a9854  mtctr 7
  01a9858  lfs 3, 152(3)
  01a985c  lfs 4, 4(6)
  01a9860  fadds 3, 20, 3
  01a9864  lfs 5, 8(6)
  01a9868  lfs 20, 12(6)
  01a986c  addic 3, 3, 16
  01a9870  addic 6, 6, 16
  01a9874  fadds 3, 3, 4
  01a9878  fadds 3, 3, 5
  01a987c  fadds 20, 3, 20
  01a9880  bdnz 0x1a9858
  01a9884  lis 3, 27
  01a9888  addi 3, 3, -28184
  01a988c  lfs 3, 4(3)
  01a9890  fadds 20, 20, 3
  01a9894  fmadds 20, 20, 1, 2
  01a9898  stfs 20, 316(30)
  01a989c  ld 0, 384(1)
  01a98a0  mtlr 0
  01a98a4  lfd 18, 256(1)
  01a98a8  lfd 19, 264(1)
  01a98ac  lfd 20, 272(1)
  01a98b0  lfd 21, 280(1)
  01a98b4  lfd 22, 288(1)
  01a98b8  lfd 23, 296(1)
  01a98bc  lfd 24, 304(1)
  01a98c0  lfd 25, 312(1)
  01a98c4  lfd 26, 320(1)
  01a98c8  lfd 27, 328(1)
  01a98cc  lfd 28, 336(1)
  01a98d0  lfd 29, 344(1)
  01a98d4  lfd 30, 352(1)
  01a98d8  lfd 31, 360(1)
  01a98dc  ld 28, 224(1)
  01a98e0  ld 29, 232(1)
  01a98e4  ld 30, 240(1)
  01a98e8  ld 31, 248(1)
  01a98ec  addi 1, 1, 368
  01a98f0  blr

M1059_001a9908:   # 0x1a9908, 0x130 bytes
  01a9908  stdu 1, -144(1)
  01a990c  mflr 0
  01a9910  std 0, 160(1)
  01a9914  lis 5, 27
  01a9918  std 30, 128(1)
  01a991c  lwz 6, 300(4)
  01a9920  ori 30, 3, 0
  01a9924  addi 5, 5, -26380
  01a9928  fmr 9, 3
  01a992c  std 31, 136(1)
  01a9930  fmr 3, 1
  01a9934  ori 31, 4, 0
  01a9938  lfs 10, 0(5)
  01a993c  lfs 11, 0(6)
  01a9940  lfs 8, 24(3)
  01a9944  fsubs 10, 11, 10
  01a9948  lfs 7, 16(3)
  01a994c  lfs 6, 20(3)
  01a9950  lfs 5, 28(3)
  01a9954  fmr 1, 9
  01a9958  lfs 4, 312(4)
  01a995c  fcmpu 0, 8, 10
  01a9960  cror 6, 0, 2
  01a9964  bt 6, 0x1a9988
  01a9968  lis 3, 27
  01a996c  lfs 9, 216(31)
  01a9970  lis 4, 114
  01a9974  addi 3, 3, -26380
  01a9978  lfs 10, 4(3)
  01a997c  lfs 11, -3052(4)
  01a9980  fnmsubs 9, 11, 10, 9
  01a9984  stfs 9, 216(31)
  01a9988  fmr 9, 2
  01a998c  stfs 7, 112(1)
  01a9990  fmr 10, 1
  01a9994  stfs 6, 116(1)
  01a9998  fmr 1, 4
  01a999c  stfs 8, 120(1)
  01a99a0  fmr 2, 3
  01a99a4  addic 3, 1, 120
  01a99a8  addic 5, 31, 216
  01a99ac  stfs 5, 124(1)
  01a99b0  fmr 3, 9
  01a99b4  fmr 4, 10
  01a99b8  bl 0x109c30
  01a99bc  nop
  01a99c0  lis 4, 27
  01a99c4  ori 3, 30, 0
  01a99c8  addi 5, 4, -26380
  01a99cc  li 6, 1024
  01a99d0  addic 4, 31, 208
  01a99d4  li 8, 16
  01a99d8  lfs 1, 8(5)
  01a99dc  lfs 2, 12(5)
  01a99e0  bl 0x100ef8
  01a99e4  nop
  01a99e8  cmpwi 3, 0
  01a99ec  bt 2, 0x1a9a20
  01a99f0  lis 3, 27
  01a99f4  lfs 1, 208(31)
  01a99f8  addi 3, 3, -26380
  01a99fc  lfs 2, 16(3)
  01a9a00  lfs 3, 212(31)
  01a9a04  lfs 4, 216(31)
  01a9a08  fmuls 1, 1, 2
  01a9a0c  fmuls 3, 3, 2
  01a9a10  fmuls 2, 4, 2
  01a9a14  stfs 1, 208(31)
  01a9a18  stfs 3, 212(31)
  01a9a1c  stfs 2, 216(31)
  01a9a20  ld 0, 160(1)
  01a9a24  mtlr 0
  01a9a28  ld 30, 128(1)
  01a9a2c  ld 31, 136(1)
  01a9a30  addi 1, 1, 144
  01a9a34  blr

M1059_001a9a58:   # 0x1a9a58, 0x1bc bytes
  01a9a58  stdu 1, -192(1)
  01a9a5c  mflr 0
  01a9a60  std 0, 208(1)
  01a9a64  stfd 25, 136(1)
  01a9a68  stfd 26, 144(1)
  01a9a6c  stfd 27, 152(1)
  01a9a70  stfd 28, 160(1)
  01a9a74  stfd 29, 168(1)
  01a9a78  stfd 30, 176(1)
  01a9a7c  stfd 31, 184(1)
  01a9a80  std 31, 128(1)
  01a9a84  ori 31, 4, 0
  01a9a88  std 29, 112(1)
  01a9a8c  fmr 30, 6
  01a9a90  ori 29, 3, 0
  01a9a94  std 30, 120(1)
  01a9a98  fmr 29, 5
  01a9a9c  li 30, 0
  01a9aa0  fmr 31, 7
  01a9aa4  fmr 25, 2
  01a9aa8  lfs 6, 212(31)
  01a9aac  fmr 2, 1
  01a9ab0  lfs 5, 208(31)
  01a9ab4  fmr 28, 4
  01a9ab8  fmuls 6, 6, 6
  01a9abc  lfs 7, 72(29)
  01a9ac0  fmr 27, 3
  01a9ac4  fmr 1, 7
  01a9ac8  fmadds 26, 5, 5, 6
  01a9acc  fsqrts 26, 26
  01a9ad0  bl 0x5026a0
  01a9ad4  nop
  01a9ad8  fmr 2, 1
  01a9adc  lfs 1, 72(29)
  01a9ae0  fcmpu 0, 2, 25
  01a9ae4  cror 6, 1, 2
  01a9ae8  bt 6, 0x1a9af8
  01a9aec  li 30, 1
  01a9af0  fadds 26, 27, 26
  01a9af4  b 0x1a9b08
  01a9af8  fcmpu 0, 2, 28
  01a9afc  cror 6, 0, 2
  01a9b00  bt 6, 0x1a9b08
  01a9b04  fsubs 26, 26, 29
  01a9b08  fcmpu 0, 30, 26
  01a9b0c  fcmpu 1, 31, 26
  01a9b10  cror 2, 1, 2
  01a9b14  bt 2, 0x1a9b20
  01a9b18  fmr 26, 30
  01a9b1c  b 0x1a9b28
  01a9b20  bf 5, 0x1a9b28
  01a9b24  fmr 26, 31
  01a9b28  lis 3, 27
  01a9b2c  addi 3, 3, -26056
  01a9b30  lfs 2, 0(3)
  01a9b34  lfs 3, 4(3)
  01a9b38  fadds 2, 1, 2
  01a9b3c  lfs 4, 8(3)
  01a9b40  fsubs 5, 3, 1
  01a9b44  fsubs 3, 3, 2
  01a9b48  fsub 7, 1, 5
  01a9b4c  fsubs 6, 4, 2
  01a9b50  fsubs 4, 4, 1
  01a9b54  fsub 8, 2, 3
  01a9b58  fsel 1, 7, 5, 1
  01a9b5c  fsel 2, 8, 3, 2
  01a9b60  fsub 5, 4, 1
  01a9b64  lfs 3, 12(3)
  01a9b68  fsub 7, 6, 2
  01a9b6c  fsel 1, 5, 4, 1
  01a9b70  lfs 4, 16(3)
  01a9b74  lfs 5, 20(3)
  01a9b78  lfs 8, 24(3)
  01a9b7c  ori 3, 30, 0
  01a9b80  fsel 2, 7, 6, 2
  01a9b84  fmuls 6, 1, 1
  01a9b88  fmuls 7, 2, 2
  01a9b8c  fmuls 9, 6, 1
  01a9b90  fmuls 10, 7, 2
  01a9b94  fmuls 11, 6, 9
  01a9b98  fmadds 1, 9, 3, 1
  01a9b9c  fmuls 9, 7, 10
  01a9ba0  fmadds 2, 10, 3, 2
  01a9ba4  fmuls 3, 6, 11
  01a9ba8  fmadds 1, 11, 4, 1
  01a9bac  fmuls 10, 7, 9
  01a9bb0  fmadds 2, 9, 4, 2
  01a9bb4  fmuls 4, 6, 3
  01a9bb8  fmadds 1, 3, 5, 1
  01a9bbc  fmuls 3, 7, 10
  01a9bc0  fmadds 2, 10, 5, 2
  01a9bc4  fmadds 1, 4, 8, 1
  01a9bc8  fmadds 2, 3, 8, 2
  01a9bcc  fmuls 1, 1, 26
  01a9bd0  fmuls 2, 2, 26
  01a9bd4  stfs 1, 212(31)
  01a9bd8  stfs 2, 208(31)
  01a9bdc  ld 0, 208(1)
  01a9be0  mtlr 0
  01a9be4  lfd 25, 136(1)
  01a9be8  lfd 26, 144(1)
  01a9bec  lfd 27, 152(1)
  01a9bf0  lfd 28, 160(1)
  01a9bf4  lfd 29, 168(1)
  01a9bf8  lfd 30, 176(1)
  01a9bfc  lfd 31, 184(1)
  01a9c00  ld 29, 112(1)
  01a9c04  ld 30, 120(1)
  01a9c08  ld 31, 128(1)
  01a9c0c  addi 1, 1, 192
  01a9c10  blr

M1059_001a9c20:   # 0x1a9c20, 0x238 bytes
  01a9c20  stdu 1, -304(1)
  01a9c24  mflr 0
  01a9c28  std 0, 320(1)
  01a9c2c  stfd 27, 264(1)
  01a9c30  stfd 28, 272(1)
  01a9c34  stfd 29, 280(1)
  01a9c38  stfd 30, 288(1)
  01a9c3c  stfd 31, 296(1)
  01a9c40  std 29, 240(1)
  01a9c44  ori 29, 3, 0
  01a9c48  fmr 31, 5
  01a9c4c  li 7, 304
  01a9c50  fmr 30, 4
  01a9c54  std 31, 256(1)
  01a9c58  fmr 29, 3
  01a9c5c  std 28, 232(1)
  01a9c60  ori 31, 6, 0
  01a9c64  addc 28, 1, 7
  01a9c68  std 24, 200(1)
  01a9c6c  fmr 28, 2
  01a9c70  fmr 27, 1
  01a9c74  std 30, 248(1)
  01a9c78  ori 24, 5, 0
  01a9c7c  std 26, 216(1)
  01a9c80  std 25, 208(1)
  01a9c84  ori 30, 4, 0
  01a9c88  lwz 25, 124(28)
  01a9c8c  std 27, 224(1)
  01a9c90  lwz 26, 132(28)
  01a9c94  lwz 27, 140(28)
  01a9c98  lwz 28, 148(28)
  01a9c9c  extsw 25, 25
  01a9ca0  extsw 26, 26
  01a9ca4  bl 0xefe40
  01a9ca8  nop
  01a9cac  lbz 3, 32(29)
  01a9cb0  cmpw 3, 24
  01a9cb4  bf 2, 0x1a9e14
  01a9cb8  lbz 3, 82(29)
  01a9cbc  cmpw 3, 31
  01a9cc0  bf 2, 0x1a9e14
  01a9cc4  fcmpu 0, 1, 27
  01a9cc8  cror 6, 0, 2
  01a9ccc  bt 6, 0x1a9e14
  01a9cd0  fcmpu 0, 28, 1
  01a9cd4  cror 6, 0, 2
  01a9cd8  bt 6, 0x1a9e14
  01a9cdc  lfs 2, 212(30)
  01a9ce0  lfs 3, 208(30)
  01a9ce4  fmuls 1, 2, 2
  01a9ce8  lfs 4, 216(30)
  01a9cec  lis 3, 27
  01a9cf0  addi 3, 3, -25580
  01a9cf4  fmadds 1, 3, 3, 1
  01a9cf8  fmadds 4, 4, 4, 1
  01a9cfc  lfs 1, 0(3)
  01a9d00  fsqrts 4, 4
  01a9d04  fcmpu 0, 4, 1
  01a9d08  bf 2, 0x1a9d18
  01a9d0c  lfs 2, 220(30)
  01a9d10  fmr 29, 1
  01a9d14  b 0x1a9d28
  01a9d18  fdivs 29, 29, 4
  01a9d1c  fmuls 1, 2, 29
  01a9d20  lfs 2, 220(30)
  01a9d24  fmuls 29, 3, 29
  01a9d28  lis 6, 16256
  01a9d2c  stfs 29, 112(1)
  01a9d30  addic 31, 1, 144
  01a9d34  stfs 1, 116(1)
  01a9d38  stfs 2, 124(1)
  01a9d3c  ori 4, 29, 0
  01a9d40  addic 7, 1, 112
  01a9d44  fmr 1, 30
  01a9d48  ori 3, 31, 0
  01a9d4c  stw 6, 120(1)
  01a9d50  li 5, 1
  01a9d54  bl 0x10581c
  01a9d58  nop
  01a9d5c  addic 24, 1, 128
  01a9d60  ori 3, 29, 0
  01a9d64  li 4, 0
  01a9d68  ori 5, 24, 0
  01a9d6c  bl 0xf1114
  01a9d70  nop
  01a9d74  ori 3, 24, 0
  01a9d78  fmr 1, 31
  01a9d7c  li 5, 33
  01a9d80  ori 6, 29, 0
  01a9d84  ori 7, 31, 0
  01a9d88  bl 0x5e598
  01a9d8c  nop
  01a9d90  cmpwi 3, 0
  01a9d94  bt 2, 0x1a9e14
  01a9d98  lis 3, 161
  01a9d9c  addic 3, 3, 2368
  01a9da0  lwz 3, 24(3)
  01a9da4  cmpw 3, 28
  01a9da8  bf 2, 0x1a9e14
  01a9dac  lfs 1, 208(30)
  01a9db0  lfs 2, 212(30)
  01a9db4  lis 3, 27
  01a9db8  fneg 1, 1
  01a9dbc  lfs 3, 216(30)
  01a9dc0  fneg 2, 2
  01a9dc4  addi 3, 3, -25580
  01a9dc8  fneg 3, 3
  01a9dcc  lis 4, 114
  01a9dd0  stfs 1, 208(30)
  01a9dd4  stfs 2, 212(30)
  01a9dd8  stfs 3, 216(30)
  01a9ddc  lfs 1, 4(3)
  01a9de0  lfs 2, -3064(4)
  01a9de4  fmuls 1, 2, 1
  01a9de8  stfs 1, 216(30)
  01a9dec  lbz 3, 83(29)
  01a9df0  cmpw 3, 25
  01a9df4  bt 2, 0x1a9e10
  01a9df8  ori 3, 29, 0
  01a9dfc  ori 4, 25, 0
  01a9e00  ori 5, 26, 0
  01a9e04  li 6, 5
  01a9e08  bl 0xfddc0
  01a9e0c  nop
  01a9e10  stb 27, 32(29)
  01a9e14  ld 0, 320(1)
  01a9e18  mtlr 0
  01a9e1c  lfd 27, 264(1)
  01a9e20  lfd 28, 272(1)
  01a9e24  lfd 29, 280(1)
  01a9e28  lfd 30, 288(1)
  01a9e2c  lfd 31, 296(1)
  01a9e30  ld 24, 200(1)
  01a9e34  ld 25, 208(1)
  01a9e38  ld 26, 216(1)
  01a9e3c  ld 27, 224(1)
  01a9e40  ld 28, 232(1)
  01a9e44  ld 29, 240(1)
  01a9e48  ld 30, 248(1)
  01a9e4c  ld 31, 256(1)
  01a9e50  addi 1, 1, 304
  01a9e54  blr

M1059_001a9e58:   # 0x1a9e58, 0x9c bytes
  01a9e58  stdu 1, -160(1)
  01a9e5c  mflr 0
  01a9e60  std 0, 176(1)
  01a9e64  stfd 31, 152(1)
  01a9e68  std 30, 136(1)
  01a9e6c  std 29, 128(1)
  01a9e70  fmr 31, 1
  01a9e74  addic 29, 1, 112
  01a9e78  std 31, 144(1)
  01a9e7c  ori 30, 3, 0
  01a9e80  ori 31, 5, 0
  01a9e84  li 4, 0
  01a9e88  ori 5, 29, 0
  01a9e8c  bl 0xf1114
  01a9e90  nop
  01a9e94  ori 3, 29, 0
  01a9e98  fmr 1, 31
  01a9e9c  li 5, 33
  01a9ea0  ori 6, 30, 0
  01a9ea4  bl 0x59e20
  01a9ea8  nop
  01a9eac  cmpwi 3, 0
  01a9eb0  bt 2, 0x1a9ed0
  01a9eb4  lis 3, 161
  01a9eb8  addic 3, 3, 2368
  01a9ebc  lwz 3, 24(3)
  01a9ec0  cmpw 3, 31
  01a9ec4  bf 2, 0x1a9ed0
  01a9ec8  li 3, 1
  01a9ecc  b 0x1a9ed4
  01a9ed0  li 3, 0
  01a9ed4  ld 0, 176(1)
  01a9ed8  mtlr 0
  01a9edc  lfd 31, 152(1)
  01a9ee0  ld 29, 128(1)
  01a9ee4  ld 30, 136(1)
  01a9ee8  ld 31, 144(1)
  01a9eec  addi 1, 1, 160
  01a9ef0  blr

M1059_001a9ef4:   # 0x1a9ef4, 0xcc bytes
  01a9ef4  stdu 1, -144(1)
  01a9ef8  mflr 0
  01a9efc  std 0, 160(1)
  01a9f00  std 29, 120(1)
  01a9f04  ori 29, 3, 0
  01a9f08  li 6, 0
  01a9f0c  std 31, 136(1)
  01a9f10  addic 3, 1, 112
  01a9f14  std 30, 128(1)
  01a9f18  ori 31, 5, 0
  01a9f1c  ori 30, 4, 0
  01a9f20  lbz 7, 33(29)
  01a9f24  li 5, 0
  01a9f28  stw 6, 112(1)
  01a9f2c  li 6, 0
  01a9f30  ori 4, 7, 0
  01a9f34  bl 0x104800
  01a9f38  nop
  01a9f3c  cmpwi 3, 0
  01a9f40  bf 2, 0x1a9fa0
  01a9f44  lwz 3, 112(1)
  01a9f48  cmpwi 3, 0
  01a9f4c  bt 2, 0x1a9fa0
  01a9f50  cmpw 3, 29
  01a9f54  bt 2, 0x1a9f74
  01a9f58  lbz 4, 32(3)
  01a9f5c  cmpw 1, 4, 31
  01a9f60  cmpw 4, 30
  01a9f64  cror 2, 0, 5
  01a9f68  bt 2, 0x1a9f74
  01a9f6c  li 3, 1
  01a9f70  b 0x1a9fa4
  01a9f74  ori 4, 3, 0
  01a9f78  addic 3, 1, 112
  01a9f7c  li 5, 0
  01a9f80  li 6, 0
  01a9f84  bl 0x10466c
  01a9f88  nop
  01a9f8c  cmpwi 3, 0
  01a9f90  bf 2, 0x1a9fa0
  01a9f94  lwz 3, 112(1)
  01a9f98  cmpwi 3, 0
  01a9f9c  bf 2, 0x1a9f50
  01a9fa0  li 3, 0
  01a9fa4  ld 0, 160(1)
  01a9fa8  mtlr 0
  01a9fac  ld 29, 120(1)
  01a9fb0  ld 30, 128(1)
  01a9fb4  ld 31, 136(1)
  01a9fb8  addi 1, 1, 144
  01a9fbc  blr

UpdateMoby_1059:   # 0x1aa078, 0x1e2c bytes
  01aa078  stdu 1, -480(1)
  01aa07c  mflr 0
  01aa080  std 0, 496(1)
  01aa084  stfd 27, 440(1)
  01aa088  stfd 28, 448(1)
  01aa08c  stfd 29, 456(1)
  01aa090  stfd 30, 464(1)
  01aa094  stfd 31, 472(1)
  01aa098  std 31, 432(1)
  01aa09c  cmpwi 3, 0
  01aa0a0  std 30, 424(1)
  01aa0a4  std 29, 416(1)
  01aa0a8  std 28, 408(1)
  01aa0ac  std 27, 400(1)
  01aa0b0  std 26, 392(1)
  01aa0b4  std 25, 384(1)
  01aa0b8  std 24, 376(1)
  01aa0bc  std 23, 368(1)
  01aa0c0  ori 31, 3, 0
  01aa0c4  bt 2, 0x1abe5c
  01aa0c8  lwz 30, 120(31)
  01aa0cc  cmpwi 30, 0
  01aa0d0  bt 2, 0x1abe5c
  01aa0d4  lis 3, 27
  01aa0d8  addic 5, 30, 336
  01aa0dc  addi 6, 3, -24640
  01aa0e0  ori 3, 31, 0
  01aa0e4  li 4, 0
  01aa0e8  lfs 1, 0(6)
  01aa0ec  bl 0x119a18
  01aa0f0  nop
  01aa0f4  lbz 3, 32(31)
  01aa0f8  cmpwi 3, 0
  01aa0fc  bf 2, 0x1aa14c
  01aa100  ori 3, 31, 0
  01aa104  ori 4, 30, 0
  01aa108  bl 0x1a8f18
  01aa10c  cmpwi 3, 0
  01aa110  bt 2, 0x1abdc0
  01aa114  lis 4, 164
  01aa118  lis 3, 101
  01aa11c  addic 3, 3, 17576
  01aa120  lwz 4, -28512(4)
  01aa124  subc 4, 31, 4
  01aa128  srawi 4, 4, 8
  01aa12c  addze 4, 4
  01aa130  extsw 4, 4
  01aa134  bl 0x5cd098
  01aa138  nop
  01aa13c  ori 3, 31, 0
  01aa140  bl 0xefb38
  01aa144  nop
  01aa148  b 0x1abe5c
  01aa14c  lis 3, 27
  01aa150  addic 5, 1, 272
  01aa154  addi 4, 3, -24640
  01aa158  ori 3, 31, 0
  01aa15c  lfs 31, 4(4)
  01aa160  fmr 1, 31
  01aa164  bl 0x1118d8
  01aa168  nop
  01aa16c  ori 3, 31, 0
  01aa170  ori 4, 30, 0
  01aa174  addic 5, 30, 32
  01aa178  bl 0x1a8ac0
  01aa17c  addic 4, 30, 96
  01aa180  ori 3, 31, 0
  01aa184  bl 0x10c9a0
  01aa188  nop
  01aa18c  addic 3, 30, 308
  01aa190  bl 0x4fff60
  01aa194  nop
  01aa198  lwz 4, 272(30)
  01aa19c  ori 29, 3, 0
  01aa1a0  cmpwi 4, 0
  01aa1a4  bt 2, 0x1aa1e0
  01aa1a8  lbz 3, 32(31)
  01aa1ac  cmpwi 3, 7
  01aa1b0  bt 0, 0x1aa1e0
  01aa1b4  lwz 5, 328(30)
  01aa1b8  addic 3, 1, 272
  01aa1bc  addic 4, 5, 16
  01aa1c0  lwz 5, 0(5)
  01aa1c4  extsw 5, 5
  01aa1c8  bl 0x104e44
  01aa1cc  nop
  01aa1d0  cntlzw 3, 3
  01aa1d4  rlwinm 28, 3, 27, 31, 31
  01aa1d8  xori 28, 28, 1
  01aa1dc  b 0x1aa308
  01aa1e0  lwz 5, 328(30)
  01aa1e4  lis 27, 151
  01aa1e8  addic 4, 5, 16
  01aa1ec  addic 27, 27, -25376
  01aa1f0  lwz 5, 0(5)
  01aa1f4  addic 3, 27, 128
  01aa1f8  extsw 5, 5
  01aa1fc  bl 0x104e44
  01aa200  nop
  01aa204  lfs 1, 20(31)
  01aa208  lfs 2, 132(27)
  01aa20c  lfs 3, 16(31)
  01aa210  fsubs 1, 1, 2
  01aa214  lfs 2, 128(27)
  01aa218  fsubs 2, 3, 2
  01aa21c  cntlzw 3, 3
  01aa220  rlwinm 28, 3, 27, 31, 31
  01aa224  fmuls 1, 1, 1
  01aa228  xori 28, 28, 1
  01aa22c  fmadds 1, 2, 2, 1
  01aa230  fsqrts 1, 1
  01aa234  fcmpu 0, 1, 31
  01aa238  cror 6, 1, 2
  01aa23c  bt 6, 0x1aa2d4
  01aa240  lwz 4, 8320(27)
  01aa244  lfs 1, 128(27)
  01aa248  li 3, 0
  01aa24c  stw 4, 336(1)
  01aa250  lfs 2, 132(27)
  01aa254  stfs 1, 272(1)
  01aa258  lfs 1, 136(27)
  01aa25c  stfs 2, 276(1)
  01aa260  lfs 2, 140(27)
  01aa264  stfs 1, 280(1)
  01aa268  lfs 1, 144(27)
  01aa26c  stfs 2, 284(1)
  01aa270  lfs 2, 148(27)
  01aa274  stfs 1, 288(1)
  01aa278  lfs 1, 152(27)
  01aa27c  stfs 2, 292(1)
  01aa280  lfs 2, 156(27)
  01aa284  stfs 1, 296(1)
  01aa288  lfs 1, 192(27)
  01aa28c  stfs 2, 300(1)
  01aa290  lfs 2, 196(27)
  01aa294  stfs 1, 304(1)
  01aa298  lfs 1, 200(27)
  01aa29c  stfs 2, 308(1)
  01aa2a0  lfs 2, 204(27)
  01aa2a4  stfs 1, 312(1)
  01aa2a8  lfs 1, 208(27)
  01aa2ac  stfs 2, 316(1)
  01aa2b0  lfs 2, 212(27)
  01aa2b4  stfs 1, 320(1)
  01aa2b8  lfs 1, 216(27)
  01aa2bc  stfs 2, 324(1)
  01aa2c0  lfs 2, 220(27)
  01aa2c4  stfs 1, 328(1)
  01aa2c8  stfs 2, 332(1)
  01aa2cc  stw 3, 340(1)
  01aa2d0  b 0x1aa308
  01aa2d4  li 3, 0
  01aa2d8  vspltisw 2, 0
  01aa2dc  li 5, 272
  01aa2e0  li 6, 288
  01aa2e4  li 4, 320
  01aa2e8  stw 3, 336(1)
  01aa2ec  li 3, 304
  01aa2f0  li 7, 2
  01aa2f4  stvx 2, 5, 1
  01aa2f8  stvx 2, 6, 1
  01aa2fc  stvx 2, 4, 1
  01aa300  stvx 2, 3, 1
  01aa304  stw 7, 340(1)
  01aa308  lwz 3, 272(30)
  01aa30c  cmpwi 3, 0
  01aa310  bt 2, 0x1aa330
  01aa314  lwz 5, 296(30)
  01aa318  addic 3, 31, 16
  01aa31c  addic 4, 5, 16
  01aa320  lwz 5, 0(5)
  01aa324  extsw 5, 5
  01aa328  bl 0x104e44
  01aa32c  nop
  01aa330  li 27, 255
  01aa334  addic 24, 31, 16
  01aa338  lbz 25, 188(31)
  01aa33c  ori 26, 27, 0
  01aa340  ori 3, 24, 0
  01aa344  bl 0xffc18
  01aa348  nop
  01aa34c  fmr 2, 1
  01aa350  lis 3, 27
  01aa354  lwz 4, 300(30)
  01aa358  addi 3, 3, -24640
  01aa35c  stfs 2, 304(30)
  01aa360  lfs 1, 0(4)
  01aa364  lfs 29, 8(3)
  01aa368  fsubs 1, 1, 2
  01aa36c  fmadds 2, 1, 29, 2
  01aa370  stfs 2, 312(30)
  01aa374  lfs 2, 12(3)
  01aa378  fcmpu 0, 1, 2
  01aa37c  cror 6, 1, 2
  01aa380  bt 6, 0x1aa38c
  01aa384  li 3, 2
  01aa388  b 0x1aa3a8
  01aa38c  lis 3, 27
  01aa390  addi 3, 3, -24640
  01aa394  lfs 2, 16(3)
  01aa398  li 3, 0
  01aa39c  fcmpu 0, 1, 2
  01aa3a0  bt 1, 0x1aa3a8
  01aa3a4  li 3, 1
  01aa3a8  cmpw 25, 3
  01aa3ac  stb 3, 188(31)
  01aa3b0  bt 2, 0x1aa3e4
  01aa3b4  lis 4, 116
  01aa3b8  lis 5, 116
  01aa3bc  addic 4, 4, 2308
  01aa3c0  addic 5, 5, 2317
  01aa3c4  addc 6, 25, 25
  01aa3c8  addc 4, 3, 4
  01aa3cc  addc 3, 3, 5
  01aa3d0  addc 6, 25, 6
  01aa3d4  clrldi 4, 4, 32
  01aa3d8  clrldi 3, 3, 32
  01aa3dc  lbzx 27, 4, 6
  01aa3e0  lbzx 26, 3, 6
  01aa3e4  addic 25, 1, 192
  01aa3e8  ori 3, 31, 0
  01aa3ec  li 4, 0
  01aa3f0  ori 5, 25, 0
  01aa3f4  bl 0xf1114
  01aa3f8  nop
  01aa3fc  lis 3, 27
  01aa400  li 5, 1
  01aa404  addi 4, 3, -24640
  01aa408  ori 3, 25, 0
  01aa40c  ori 6, 31, 0
  01aa410  lfs 1, 20(4)
  01aa414  bl 0x59e20
  01aa418  nop
  01aa41c  cmpwi 3, 0
  01aa420  bt 2, 0x1aa640
  01aa424  bl 0x60780
  01aa428  nop
  01aa42c  lbz 4, 32(31)
  01aa430  lfs 30, 16(31)
  01aa434  cmpwi 3, 0
  01aa438  lfs 1, 20(31)
  01aa43c  lhz 3, 178(31)
  01aa440  bf 2, 0x1aa640
  01aa444  lwz 6, 300(30)
  01aa448  lfs 2, 304(30)
  01aa44c  lfs 3, 24(31)
  01aa450  lfs 4, 200(1)
  01aa454  lis 5, 27
  01aa458  lfs 5, 0(6)
  01aa45c  fsubs 3, 3, 4
  01aa460  fsubs 2, 5, 2
  01aa464  addi 5, 5, -24640
  01aa468  lfs 4, 216(30)
  01aa46c  cmpwi 4, 14
  01aa470  lfs 5, 24(5)
  01aa474  fabs 3, 3
  01aa478  fmuls 2, 2, 29
  01aa47c  fsub 4, 4, 5
  01aa480  fsub 6, 2, 3
  01aa484  fsel 2, 6, 3, 2
  01aa488  fneg 3, 2
  01aa48c  fsel 2, 4, 2, 3
  01aa490  bt 2, 0x1aa4a0
  01aa494  cmpwi 4, 12
  01aa498  fmr 31, 2
  01aa49c  bf 2, 0x1aa4b0
  01aa4a0  lis 4, 27
  01aa4a4  addi 4, 4, -24640
  01aa4a8  lfs 31, 28(4)
  01aa4ac  fmuls 31, 2, 31
  01aa4b0  lis 25, 161
  01aa4b4  addic 25, 25, 2368
  01aa4b8  lis 6, 27
  01aa4bc  lis 4, 161
  01aa4c0  lfs 2, 36(25)
  01aa4c4  lfs 3, 32(25)
  01aa4c8  fsubs 1, 1, 2
  01aa4cc  fsubs 2, 30, 3
  01aa4d0  addi 6, 6, -24640
  01aa4d4  lis 5, -18933
  01aa4d8  ori 5, 5, 24759
  01aa4dc  lfs 30, 28(6)
  01aa4e0  fmuls 1, 1, 1
  01aa4e4  lwz 4, 1808(4)
  01aa4e8  mulhw 5, 5, 4
  01aa4ec  fmadds 1, 2, 2, 1
  01aa4f0  addc 5, 5, 4
  01aa4f4  extsh 3, 3
  01aa4f8  srawi 5, 5, 5
  01aa4fc  srwi 6, 5, 31
  01aa500  addc 5, 5, 6
  01aa504  fsqrts 1, 1
  01aa508  addc 6, 5, 5
  01aa50c  addc 5, 5, 6
  01aa510  sldi 6, 5, 4
  01aa514  subc 5, 6, 5
  01aa518  subc 4, 4, 5
  01aa51c  cmpw 4, 3
  01aa520  fsub 2, 29, 1
  01aa524  fsel 1, 2, 29, 1
  01aa528  fmuls 30, 1, 30
  01aa52c  bf 2, 0x1aa574
  01aa530  li 3, 2
  01aa534  bl 0xfc620
  01aa538  nop
  01aa53c  cmpwi 3, 0
  01aa540  bf 2, 0x1aa574
  01aa544  lis 3, 230
  01aa548  lis 4, 230
  01aa54c  fmr 3, 30
  01aa550  li 9, 1
  01aa554  fmr 4, 31
  01aa558  lwz 3, -21888(3)
  01aa55c  lwz 4, -21880(4)
  01aa560  lfs 1, 16(31)
  01aa564  lfs 2, 20(31)
  01aa568  extsw 4, 4
  01aa56c  bl 0x17bd90
  01aa570  nop
  01aa574  bl 0x5c8318
  01aa578  nop
  01aa57c  lis 4, 161
  01aa580  clrlwi 3, 3, 29
  01aa584  addic 5, 3, 20
  01aa588  lwz 4, 1808(4)
  01aa58c  divw 5, 4, 5
  01aa590  mullw 3, 5, 3
  01aa594  sldi 6, 5, 4
  01aa598  sldi 5, 5, 2
  01aa59c  addc 5, 6, 5
  01aa5a0  addc 3, 3, 5
  01aa5a4  subc 3, 4, 3
  01aa5a8  cmpwi 3, 0
  01aa5ac  bf 2, 0x1aa640
  01aa5b0  lis 3, 27
  01aa5b4  addi 23, 3, -24640
  01aa5b8  lfs 1, 32(23)
  01aa5bc  lfs 2, 36(23)
  01aa5c0  bl 0xfcbe8
  01aa5c4  nop
  01aa5c8  lfs 31, 40(23)
  01aa5cc  fmr 28, 1
  01aa5d0  lfs 3, 44(23)
  01aa5d4  fmr 1, 31
  01aa5d8  fmr 30, 3
  01aa5dc  fmr 2, 30
  01aa5e0  bl 0xfcbe8
  01aa5e4  nop
  01aa5e8  lfs 2, 192(1)
  01aa5ec  fadds 3, 2, 1
  01aa5f0  fmr 1, 31
  01aa5f4  fmr 2, 30
  01aa5f8  stfs 3, 192(1)
  01aa5fc  bl 0xfcbe8
  01aa600  nop
  01aa604  lfs 2, 196(1)
  01aa608  addic 3, 25, 32
  01aa60c  fadds 1, 2, 1
  01aa610  li 4, 0
  01aa614  stfs 1, 196(1)
  01aa618  bl 0x105f40
  01aa61c  nop
  01aa620  stfs 1, 200(1)
  01aa624  addic 3, 1, 192
  01aa628  lfs 2, 48(23)
  01aa62c  fmr 1, 28
  01aa630  li 5, 0
  01aa634  li 6, -1
  01aa638  bl 0x12aee8
  01aa63c  nop
  01aa640  lis 3, 27
  01aa644  lwz 5, 332(30)
  01aa648  lis 4, 16256
  01aa64c  addi 3, 3, -24640
  01aa650  srawi 6, 5, 31
  01aa654  lfs 31, 52(3)
  01aa658  srwi 3, 6, 1
  01aa65c  xor 3, 3, 5
  01aa660  subc 3, 3, 6
  01aa664  cmpw 3, 4
  01aa668  bt 0, 0x1aa694
  01aa66c  lis 3, 151
  01aa670  lfs 1, 16(31)
  01aa674  addic 3, 3, -25376
  01aa678  stfs 1, 128(3)
  01aa67c  lfs 1, 20(31)
  01aa680  stfs 1, 132(3)
  01aa684  lfs 1, 24(31)
  01aa688  stfs 1, 136(3)
  01aa68c  lfs 1, 28(31)
  01aa690  stfs 1, 140(3)
  01aa694  lbz 3, 32(31)
  01aa698  cmpwi 1, 3, 7
  01aa69c  cmpwi 6, 3, 6
  01aa6a0  cmpwi 7, 3, 5
  01aa6a4  bt 5, 0x1aa6d8
  01aa6a8  bt 6, 0x1ab448
  01aa6ac  bt 26, 0x1ab300
  01aa6b0  bt 30, 0x1ab0b0
  01aa6b4  cmpwi 3, 4
  01aa6b8  bt 2, 0x1aae00
  01aa6bc  cmpwi 3, 2
  01aa6c0  bt 2, 0x1aaa18
  01aa6c4  cmpwi 3, 1
  01aa6c8  bt 2, 0x1aa748
  01aa6cc  cmpwi 3, 0
  01aa6d0  bt 2, 0x1aa734
  01aa6d4  b 0x1abdc0
  01aa6d8  cmpwi 3, 13
  01aa6dc  bt 1, 0x1aa70c
  01aa6e0  cmpwi 3, 10
  01aa6e4  bt 1, 0x1aa6f8
  01aa6e8  cmpwi 3, 8
  01aa6ec  cmpwi 1, 28, 0
  01aa6f0  bf 1, 0x1ab5cc
  01aa6f4  b 0x1ab860
  01aa6f8  cmpwi 3, 11
  01aa6fc  bf 1, 0x1abb3c
  01aa700  cmpwi 3, 12
  01aa704  bf 1, 0x1abb58
  01aa708  b 0x1abb84
  01aa70c  cmpwi 3, 15
  01aa710  bt 1, 0x1aa720
  01aa714  cmpwi 3, 14
  01aa718  bf 1, 0x1abba4
  01aa71c  b 0x1abcc8
  01aa720  cmpwi 3, 16
  01aa724  bf 1, 0x1abc3c
  01aa728  cmpwi 3, 17
  01aa72c  bf 1, 0x1abd68
  01aa730  b 0x1abdc0
  01aa734  lis 3, 101
  01aa738  addic 3, 3, 17640
  01aa73c  bl 0x5cd098
  01aa740  nop
  01aa744  b 0x1abdc0
  01aa748  lbz 3, 112(31)
  01aa74c  rlwinm 3, 3, 0, 30, 30
  01aa750  cmpwi 3, 0
  01aa754  bt 2, 0x1aa77c
  01aa758  lbz 3, 83(31)
  01aa75c  cmpwi 3, 0
  01aa760  bt 2, 0x1aa77c
  01aa764  ori 3, 31, 0
  01aa768  li 4, 0
  01aa76c  li 5, 0
  01aa770  li 6, 10
  01aa774  bl 0xfddc0
  01aa778  nop
  01aa77c  cmpwi 28, 0
  01aa780  bt 2, 0x1aa850
  01aa784  lwz 3, 336(1)
  01aa788  cmpwi 3, 0
  01aa78c  bt 2, 0x1aa850
  01aa790  lis 4, 151
  01aa794  addic 4, 4, -25376
  01aa798  lwz 4, 8320(4)
  01aa79c  cmpw 3, 4
  01aa7a0  bf 2, 0x1aa850
  01aa7a4  li 4, 0
  01aa7a8  addic 3, 1, 356
  01aa7ac  lbz 7, 33(31)
  01aa7b0  li 5, 0
  01aa7b4  li 6, 0
  01aa7b8  stw 4, 356(1)
  01aa7bc  ori 4, 7, 0
  01aa7c0  bl 0x104800
  01aa7c4  nop
  01aa7c8  cmpwi 3, 0
  01aa7cc  bf 2, 0x1aa824
  01aa7d0  lwz 3, 356(1)
  01aa7d4  cmpwi 3, 0
  01aa7d8  bt 2, 0x1aa824
  01aa7dc  cmpw 3, 31
  01aa7e0  bt 2, 0x1aa7f8
  01aa7e4  lbz 4, 32(3)
  01aa7e8  cmpwi 1, 4, 6
  01aa7ec  cmpwi 4, 4
  01aa7f0  crnor 2, 0, 5
  01aa7f4  bt 2, 0x1aa850
  01aa7f8  ori 4, 3, 0
  01aa7fc  addic 3, 1, 356
  01aa800  li 5, 0
  01aa804  li 6, 0
  01aa808  bl 0x10466c
  01aa80c  nop
  01aa810  cmpwi 3, 0
  01aa814  bf 2, 0x1aa824
  01aa818  lwz 3, 356(1)
  01aa81c  cmpwi 3, 0
  01aa820  bf 2, 0x1aa7dc
  01aa824  lbz 3, 83(31)
  01aa828  cmpwi 3, 1
  01aa82c  bt 2, 0x1aa848
  01aa830  ori 3, 31, 0
  01aa834  li 4, 1
  01aa838  li 5, 0
  01aa83c  li 6, 10
  01aa840  bl 0xfddc0
  01aa844  nop
  01aa848  li 3, 4
  01aa84c  stb 3, 32(31)
  01aa850  lwz 28, 336(1)
  01aa854  cmpwi 28, 0
  01aa858  bt 2, 0x1aa8f4
  01aa85c  lis 3, 151
  01aa860  addic 3, 3, -25376
  01aa864  lwz 3, 8320(3)
  01aa868  cmpw 28, 3
  01aa86c  bf 2, 0x1aa8f4
  01aa870  addic 25, 1, 256
  01aa874  ori 3, 31, 0
  01aa878  li 4, 0
  01aa87c  ori 5, 25, 0
  01aa880  bl 0xf1114
  01aa884  nop
  01aa888  lis 3, 27
  01aa88c  li 5, 33
  01aa890  addi 4, 3, -24640
  01aa894  ori 3, 25, 0
  01aa898  ori 6, 31, 0
  01aa89c  lfs 1, 32(4)
  01aa8a0  bl 0x59e20
  01aa8a4  nop
  01aa8a8  cmpwi 3, 0
  01aa8ac  bt 2, 0x1aa8f4
  01aa8b0  lis 3, 161
  01aa8b4  addic 3, 3, 2368
  01aa8b8  lwz 3, 24(3)
  01aa8bc  cmpw 3, 28
  01aa8c0  bf 2, 0x1aa8f4
  01aa8c4  lbz 3, 83(31)
  01aa8c8  cmpwi 3, 2
  01aa8cc  bt 2, 0x1aa8e8
  01aa8d0  ori 3, 31, 0
  01aa8d4  li 4, 2
  01aa8d8  li 5, 0
  01aa8dc  li 6, 2
  01aa8e0  bl 0xfddc0
  01aa8e4  nop
  01aa8e8  li 3, 5
  01aa8ec  stb 3, 32(31)
  01aa8f0  b 0x1aa974
  01aa8f4  cmpwi 29, 0
  01aa8f8  bt 2, 0x1aa974
  01aa8fc  lbz 3, 83(31)
  01aa900  cmpwi 3, 1
  01aa904  bt 2, 0x1aa920
  01aa908  ori 3, 31, 0
  01aa90c  li 4, 1
  01aa910  li 5, 0
  01aa914  li 6, 10
  01aa918  bl 0xfddc0
  01aa91c  nop
  01aa920  bl 0x5c8318
  01aa924  nop
  01aa928  lis 4, 20971
  01aa92c  ori 4, 4, 34079
  01aa930  mulhw 4, 4, 3
  01aa934  srawi 4, 4, 6
  01aa938  srwi 5, 4, 31
  01aa93c  addc 4, 4, 5
  01aa940  sldi 5, 4, 6
  01aa944  addc 4, 4, 4
  01aa948  addc 4, 5, 4
  01aa94c  sldi 4, 4, 2
  01aa950  subc 4, 4, 5
  01aa954  subc 3, 3, 4
  01aa958  addic 3, 3, 300
  01aa95c  stw 3, 308(30)
  01aa960  bl 0xfcc68
  01aa964  nop
  01aa968  li 3, 2
  01aa96c  stfs 1, 316(30)
  01aa970  stb 3, 32(31)
  01aa974  lis 3, 27
  01aa978  addi 5, 3, -24640
  01aa97c  lis 3, 114
  01aa980  lis 6, 114
  01aa984  lis 7, 114
  01aa988  lfs 1, 56(5)
  01aa98c  lfs 2, -3064(3)
  01aa990  lfs 3, 208(30)
  01aa994  fmadds 1, 2, 1, 31
  01aa998  lfs 4, 212(30)
  01aa99c  ori 3, 31, 0
  01aa9a0  lfs 5, 216(30)
  01aa9a4  ori 4, 30, 0
  01aa9a8  fmuls 2, 3, 1
  01aa9ac  fmuls 3, 4, 1
  01aa9b0  fmuls 1, 5, 1
  01aa9b4  stfs 2, 208(30)
  01aa9b8  stfs 3, 212(30)
  01aa9bc  stfs 1, 216(30)
  01aa9c0  lfs 1, 60(5)
  01aa9c4  lfs 2, 64(5)
  01aa9c8  lfs 3, 68(5)
  01aa9cc  lfs 4, -3048(6)
  01aa9d0  lfs 5, -3052(7)
  01aa9d4  fmuls 1, 4, 1
  01aa9d8  fmuls 2, 4, 2
  01aa9dc  fmuls 3, 5, 3
  01aa9e0  bl 0x1a9908
  01aa9e4  cmpwi 27, 255
  01aa9e8  bt 2, 0x1abdc0
  01aa9ec  lbz 3, 83(31)
  01aa9f0  cmpw 3, 26
  01aa9f4  bt 2, 0x1aaa10
  01aa9f8  ori 3, 31, 0
  01aa9fc  ori 4, 26, 0
  01aaa00  li 5, 0
  01aaa04  li 6, 6
  01aaa08  bl 0xfddc0
  01aaa0c  nop
  01aaa10  stb 27, 32(31)
  01aaa14  b 0x1abdc0
  01aaa18  lbz 3, 112(31)
  01aaa1c  rlwinm 3, 3, 0, 30, 30
  01aaa20  cmpwi 3, 0
  01aaa24  bt 2, 0x1aaa4c
  01aaa28  lbz 3, 83(31)
  01aaa2c  cmpwi 3, 1
  01aaa30  bt 2, 0x1aaa4c
  01aaa34  ori 3, 31, 0
  01aaa38  li 4, 1
  01aaa3c  li 5, 0
  01aaa40  li 6, 10
  01aaa44  bl 0xfddc0
  01aaa48  nop
  01aaa4c  cmpwi 28, 0
  01aaa50  bt 2, 0x1aab24
  01aaa54  lwz 3, 336(1)
  01aaa58  cmpwi 3, 0
  01aaa5c  bt 2, 0x1aab24
  01aaa60  lis 4, 151
  01aaa64  addic 4, 4, -25376
  01aaa68  lwz 4, 8320(4)
  01aaa6c  cmpw 3, 4
  01aaa70  bf 2, 0x1aab24
  01aaa74  li 4, 0
  01aaa78  lbz 7, 33(31)
  01aaa7c  addic 3, 1, 352
  01aaa80  li 6, 0
  01aaa84  li 5, 0
  01aaa88  stw 4, 352(1)
  01aaa8c  ori 4, 7, 0
  01aaa90  bl 0x104800
  01aaa94  nop
  01aaa98  cmpwi 3, 0
  01aaa9c  bf 2, 0x1aaaf4
  01aaaa0  lwz 3, 352(1)
  01aaaa4  cmpwi 3, 0
  01aaaa8  bt 2, 0x1aaaf4
  01aaaac  cmpw 3, 31
  01aaab0  bt 2, 0x1aaac8
  01aaab4  lbz 4, 32(3)
  01aaab8  cmpwi 1, 4, 6
  01aaabc  cmpwi 4, 4
  01aaac0  crnor 2, 0, 5
  01aaac4  bt 2, 0x1aac1c
  01aaac8  ori 4, 3, 0
  01aaacc  addic 3, 1, 352
  01aaad0  li 5, 0
  01aaad4  li 6, 0
  01aaad8  bl 0x10466c
  01aaadc  nop
  01aaae0  cmpwi 3, 0
  01aaae4  bf 2, 0x1aaaf4
  01aaae8  lwz 3, 352(1)
  01aaaec  cmpwi 3, 0
  01aaaf0  bf 2, 0x1aaaac
  01aaaf4  lbz 3, 83(31)
  01aaaf8  cmpwi 3, 1
  01aaafc  bt 2, 0x1aab18
  01aab00  ori 3, 31, 0
  01aab04  li 4, 1
  01aab08  li 5, 0
  01aab0c  li 6, 10
  01aab10  bl 0xfddc0
  01aab14  nop
  01aab18  li 3, 4
  01aab1c  stb 3, 32(31)
  01aab20  b 0x1aac1c
  01aab24  lis 3, 27
  01aab28  lfs 1, 316(30)
  01aab2c  lis 25, 114
  01aab30  addi 28, 3, -24640
  01aab34  lis 23, 114
  01aab38  addic 5, 30, 288
  01aab3c  ori 3, 31, 0
  01aab40  lfs 31, 72(28)
  01aab44  lfs 30, 76(28)
  01aab48  lfs 4, -3048(25)
  01aab4c  lfs 5, -3052(23)
  01aab50  fmuls 2, 4, 31
  01aab54  fmuls 3, 4, 30
  01aab58  fmuls 4, 5, 31
  01aab5c  bl 0xff2e8
  01aab60  nop
  01aab64  lfs 1, 68(31)
  01aab68  addic 5, 30, 292
  01aab6c  lfs 2, 24(28)
  01aab70  lfs 4, -3048(25)
  01aab74  lfs 5, -3052(23)
  01aab78  fmuls 3, 4, 31
  01aab7c  fmuls 4, 4, 30
  01aab80  fmuls 5, 5, 31
  01aab84  bl 0xff190
  01aab88  nop
  01aab8c  cmpwi 29, 0
  01aab90  stfs 1, 68(31)
  01aab94  bt 2, 0x1aac1c
  01aab98  ori 3, 24, 0
  01aab9c  lwz 4, 276(30)
  01aaba0  extsw 4, 4
  01aaba4  bl 0x110b70
  01aaba8  nop
  01aabac  cmpwi 3, 0
  01aabb0  bt 2, 0x1aac1c
  01aabb4  lbz 3, 83(31)
  01aabb8  cmpwi 3, 0
  01aabbc  bt 2, 0x1aabd8
  01aabc0  ori 3, 31, 0
  01aabc4  li 4, 0
  01aabc8  li 5, 0
  01aabcc  li 6, 10
  01aabd0  bl 0xfddc0
  01aabd4  nop
  01aabd8  bl 0x5c8318
  01aabdc  nop
  01aabe0  lis 4, -30584
  01aabe4  ori 4, 4, 34953
  01aabe8  mulhw 4, 4, 3
  01aabec  addc 4, 4, 3
  01aabf0  srawi 4, 4, 6
  01aabf4  srwi 5, 4, 31
  01aabf8  addc 4, 4, 5
  01aabfc  sldi 5, 4, 7
  01aac00  sldi 4, 4, 3
  01aac04  subc 4, 5, 4
  01aac08  li 5, 1
  01aac0c  subc 3, 3, 4
  01aac10  addic 3, 3, 60
  01aac14  stw 3, 308(30)
  01aac18  stb 5, 32(31)
  01aac1c  ori 3, 31, 0
  01aac20  ori 4, 30, 0
  01aac24  bl 0x1a9218
  01aac28  lis 3, 27
  01aac2c  lfs 1, 316(30)
  01aac30  lis 4, 114
  01aac34  addi 3, 3, -24640
  01aac38  lis 5, 114
  01aac3c  lfs 5, 84(3)
  01aac40  lfs 6, 92(3)
  01aac44  lfs 8, 96(3)
  01aac48  lfs 2, 80(3)
  01aac4c  lfs 9, 100(3)
  01aac50  lfs 7, -3048(4)
  01aac54  lfs 4, 88(3)
  01aac58  lfs 10, -3052(5)
  01aac5c  ori 3, 31, 0
  01aac60  fmuls 3, 7, 5
  01aac64  ori 4, 30, 0
  01aac68  fmuls 5, 7, 6
  01aac6c  fmuls 6, 10, 8
  01aac70  fmuls 7, 10, 9
  01aac74  bl 0x1a9a58
  01aac78  cmpwi 3, 0
  01aac7c  bt 2, 0x1aacf0
  01aac80  cmpwi 29, 0
  01aac84  bt 2, 0x1aacf0
  01aac88  lbz 3, 83(31)
  01aac8c  cmpwi 3, 0
  01aac90  bt 2, 0x1aacac
  01aac94  ori 3, 31, 0
  01aac98  li 4, 0
  01aac9c  li 5, 0
  01aaca0  li 6, 10
  01aaca4  bl 0xfddc0
  01aaca8  nop
  01aacac  bl 0x5c8318
  01aacb0  nop
  01aacb4  lis 4, -30584
  01aacb8  ori 4, 4, 34953
  01aacbc  mulhw 4, 4, 3
  01aacc0  addc 4, 4, 3
  01aacc4  srawi 4, 4, 6
  01aacc8  srwi 5, 4, 31
  01aaccc  addc 4, 4, 5
  01aacd0  li 5, 1
  01aacd4  sldi 6, 4, 7
  01aacd8  sldi 4, 4, 3
  01aacdc  subc 4, 6, 4
  01aace0  subc 3, 3, 4
  01aace4  addic 3, 3, 60
  01aace8  stw 3, 308(30)
  01aacec  stb 5, 32(31)
  01aacf0  lwz 29, 336(1)
  01aacf4  cmpwi 29, 0
  01aacf8  bt 2, 0x1aad90
  01aacfc  lis 3, 151
  01aad00  addic 3, 3, -25376
  01aad04  lwz 3, 8320(3)
  01aad08  cmpw 29, 3
  01aad0c  bf 2, 0x1aad90
  01aad10  addic 28, 1, 240
  01aad14  ori 3, 31, 0
  01aad18  li 4, 0
  01aad1c  ori 5, 28, 0
  01aad20  bl 0xf1114
  01aad24  nop
  01aad28  lis 3, 27
  01aad2c  li 5, 33
  01aad30  addi 4, 3, -24640
  01aad34  ori 3, 28, 0
  01aad38  ori 6, 31, 0
  01aad3c  lfs 1, 32(4)
  01aad40  bl 0x59e20
  01aad44  nop
  01aad48  cmpwi 3, 0
  01aad4c  bt 2, 0x1aad90
  01aad50  lis 3, 161
  01aad54  addic 3, 3, 2368
  01aad58  lwz 3, 24(3)
  01aad5c  cmpw 3, 29
  01aad60  bf 2, 0x1aad90
  01aad64  lbz 3, 83(31)
  01aad68  cmpwi 3, 2
  01aad6c  bt 2, 0x1aad88
  01aad70  ori 3, 31, 0
  01aad74  li 4, 2
  01aad78  li 5, 0
  01aad7c  li 6, 2
  01aad80  bl 0xfddc0
  01aad84  nop
  01aad88  li 3, 5
  01aad8c  stb 3, 32(31)
  01aad90  lis 3, 27
  01aad94  lis 5, 114
  01aad98  addi 4, 3, -24640
  01aad9c  lis 6, 114
  01aada0  ori 3, 31, 0
  01aada4  lfs 1, 60(4)
  01aada8  lfs 2, 64(4)
  01aadac  lfs 3, 68(4)
  01aadb0  lfs 4, -3048(5)
  01aadb4  lfs 5, -3052(6)
  01aadb8  ori 4, 30, 0
  01aadbc  fmuls 1, 4, 1
  01aadc0  fmuls 2, 4, 2
  01aadc4  fmuls 3, 5, 3
  01aadc8  bl 0x1a9908
  01aadcc  cmpwi 27, 255
  01aadd0  bt 2, 0x1abdc0
  01aadd4  lbz 3, 83(31)
  01aadd8  cmpw 3, 26
  01aaddc  bt 2, 0x1aadf8
  01aade0  ori 3, 31, 0
  01aade4  ori 4, 26, 0
  01aade8  li 5, 0
  01aadec  li 6, 6
  01aadf0  bl 0xfddc0
  01aadf4  nop
  01aadf8  stb 27, 32(31)
  01aadfc  b 0x1abdc0
  01aae00  lfs 1, 272(1)
  01aae04  lfs 2, 16(31)
  01aae08  lfs 3, 276(1)
  01aae0c  lfs 4, 20(31)
  01aae10  fsubs 1, 1, 2
  01aae14  fsubs 2, 3, 4
  01aae18  bl 0x5e8338
  01aae1c  nop
  01aae20  lis 3, 27
  01aae24  fmr 30, 1
  01aae28  lis 24, 114
  01aae2c  addi 29, 3, -24640
  01aae30  lis 23, 114
  01aae34  addic 5, 30, 288
  01aae38  ori 3, 31, 0
  01aae3c  lfs 28, 104(29)
  01aae40  lfs 29, 24(29)
  01aae44  lfs 2, -3048(24)
  01aae48  lfs 4, -3052(23)
  01aae4c  fmr 3, 29
  01aae50  fmuls 2, 2, 28
  01aae54  fmuls 4, 4, 28
  01aae58  bl 0xff2e8
  01aae5c  nop
  01aae60  lfs 1, 20(31)
  01aae64  lfs 2, 276(1)
  01aae68  lfs 3, 16(31)
  01aae6c  fsubs 1, 1, 2
  01aae70  lfs 2, 272(1)
  01aae74  fsubs 3, 3, 2
  01aae78  lfs 27, 68(31)
  01aae7c  lfs 2, 280(1)
  01aae80  lfs 4, 24(31)
  01aae84  fmuls 1, 1, 1
  01aae88  fsubs 2, 2, 4
  01aae8c  fmadds 1, 3, 3, 1
  01aae90  fsqrts 1, 1
  01aae94  bl 0x5e8338
  01aae98  nop
  01aae9c  lfs 3, -3048(24)
  01aaea0  lfs 5, -3052(23)
  01aaea4  addic 5, 30, 292
  01aaea8  fmr 4, 29
  01aaeac  fmuls 3, 3, 28
  01aaeb0  fmuls 5, 5, 28
  01aaeb4  fneg 2, 1
  01aaeb8  fmr 1, 27
  01aaebc  bl 0xff190
  01aaec0  nop
  01aaec4  lis 25, 151
  01aaec8  stfs 1, 68(31)
  01aaecc  addic 25, 25, -25376
  01aaed0  lfs 1, 20(31)
  01aaed4  lfs 2, 16(31)
  01aaed8  lfs 3, 132(25)
  01aaedc  lfs 4, 128(25)
  01aaee0  fsubs 1, 1, 3
  01aaee4  fsubs 2, 2, 4
  01aaee8  fmuls 1, 1, 1
  01aaeec  fmadds 1, 2, 2, 1
  01aaef0  fsqrts 5, 1
  01aaef4  lfs 1, 100(29)
  01aaef8  li 29, 0
  01aaefc  lfs 2, -3048(24)
  01aaf00  lfs 3, -3052(23)
  01aaf04  ori 24, 29, 0
  01aaf08  fcmpu 0, 5, 1
  01aaf0c  cror 6, 1, 2
  01aaf10  bt 6, 0x1aaf54
  01aaf14  lis 3, 27
  01aaf18  lis 4, 114
  01aaf1c  addi 3, 3, -24640
  01aaf20  li 29, 1
  01aaf24  lfs 4, 108(3)
  01aaf28  lfs 5, -3064(4)
  01aaf2c  lfs 6, 208(30)
  01aaf30  fmadds 4, 5, 4, 31
  01aaf34  lfs 7, 212(30)
  01aaf38  lfs 8, 216(30)
  01aaf3c  fmuls 5, 6, 4
  01aaf40  fmuls 6, 7, 4
  01aaf44  fmuls 4, 8, 4
  01aaf48  stfs 5, 208(30)
  01aaf4c  stfs 6, 212(30)
  01aaf50  stfs 4, 216(30)
  01aaf54  lis 3, 27
  01aaf58  fmuls 5, 2, 1
  01aaf5c  ori 4, 30, 0
  01aaf60  addi 3, 3, -24640
  01aaf64  fmr 1, 30
  01aaf68  lfs 6, 112(3)
  01aaf6c  lfs 8, 80(3)
  01aaf70  fmuls 9, 2, 6
  01aaf74  lfs 7, 116(3)
  01aaf78  lfs 4, 88(3)
  01aaf7c  fmuls 6, 3, 6
  01aaf80  ori 3, 31, 0
  01aaf84  fmuls 7, 3, 7
  01aaf88  fmr 2, 8
  01aaf8c  fmr 3, 9
  01aaf90  bl 0x1a9a58
  01aaf94  cmpwi 3, 0
  01aaf98  bt 2, 0x1aaff8
  01aaf9c  cmpwi 29, 0
  01aafa0  bt 2, 0x1aaff8
  01aafa4  lbz 3, 83(31)
  01aafa8  cmpwi 3, 2
  01aafac  bt 2, 0x1aafc8
  01aafb0  ori 3, 31, 0
  01aafb4  li 4, 2
  01aafb8  li 5, 4
  01aafbc  li 6, 2
  01aafc0  bl 0xfddc0
  01aafc4  nop
  01aafc8  li 3, 5
  01aafcc  stb 3, 32(31)
  01aafd0  stw 24, 148(31)
  01aafd4  stw 24, 332(30)
  01aafd8  lfs 1, 16(31)
  01aafdc  stfs 1, 256(30)
  01aafe0  lfs 1, 20(31)
  01aafe4  stfs 1, 260(30)
  01aafe8  lfs 1, 24(31)
  01aafec  stfs 1, 264(30)
  01aaff0  lfs 1, 28(31)
  01aaff4  stfs 1, 268(30)
  01aaff8  lis 3, 27
  01aaffc  lfs 1, 280(1)
  01ab000  lis 6, 114
  01ab004  addi 5, 3, -24640
  01ab008  fmr 2, 29
  01ab00c  lis 7, 114
  01ab010  ori 3, 31, 0
  01ab014  ori 4, 30, 0
  01ab018  lfs 3, 120(5)
  01ab01c  fsubs 1, 1, 3
  01ab020  stfs 1, 312(30)
  01ab024  lfs 4, 124(5)
  01ab028  lfs 3, -3048(6)
  01ab02c  lfs 5, -3052(7)
  01ab030  fmuls 1, 3, 4
  01ab034  fmuls 3, 5, 4
  01ab038  bl 0x1a9908
  01ab03c  cmpwi 28, 0
  01ab040  lbz 30, 83(31)
  01ab044  bt 2, 0x1ab054
  01ab048  lhz 3, 780(25)
  01ab04c  cmpwi 3, 0
  01ab050  bf 2, 0x1ab080
  01ab054  cmpwi 30, 1
  01ab058  bt 2, 0x1ab078
  01ab05c  ori 3, 31, 0
  01ab060  li 4, 1
  01ab064  li 5, 0
  01ab068  li 6, 10
  01ab06c  bl 0xfddc0
  01ab070  nop
  01ab074  lbz 30, 83(31)
  01ab078  li 3, 2
  01ab07c  stb 3, 32(31)
  01ab080  cmpwi 27, 255
  01ab084  cmpw 1, 30, 26
  01ab088  bt 2, 0x1abdc0
  01ab08c  bt 6, 0x1ab0a8
  01ab090  ori 3, 31, 0
  01ab094  ori 4, 26, 0
  01ab098  li 5, 0
  01ab09c  li 6, 6
  01ab0a0  bl 0xfddc0
  01ab0a4  nop
  01ab0a8  stb 27, 32(31)
  01ab0ac  b 0x1abdc0
  01ab0b0  fmr 30, 31
  01ab0b4  addic 5, 1, 208
  01ab0b8  ori 3, 31, 0
  01ab0bc  li 4, 0
  01ab0c0  bl 0xf1114
  01ab0c4  nop
  01ab0c8  lfs 1, 208(1)
  01ab0cc  lfs 2, 16(31)
  01ab0d0  lfs 3, 212(1)
  01ab0d4  lfs 4, 20(31)
  01ab0d8  fsubs 29, 1, 2
  01ab0dc  lfs 2, 216(1)
  01ab0e0  lfs 5, 24(31)
  01ab0e4  fsubs 28, 3, 4
  01ab0e8  lfs 4, 272(1)
  01ab0ec  fsubs 27, 2, 5
  01ab0f0  lfs 2, 276(1)
  01ab0f4  fsubs 1, 4, 1
  01ab0f8  fsubs 2, 2, 3
  01ab0fc  bl 0x5e8338
  01ab100  nop
  01ab104  lis 3, 27
  01ab108  lis 4, 114
  01ab10c  fmr 31, 1
  01ab110  addi 29, 3, -24640
  01ab114  lis 3, 114
  01ab118  addic 5, 30, 288
  01ab11c  lfs 4, 104(29)
  01ab120  lfs 2, -3048(3)
  01ab124  lfs 3, 24(29)
  01ab128  lfs 5, -3052(4)
  01ab12c  ori 3, 31, 0
  01ab130  fmuls 2, 2, 4
  01ab134  fmuls 4, 5, 4
  01ab138  bl 0xff2e8
  01ab13c  nop
  01ab140  lis 3, 114
  01ab144  lfs 1, 128(29)
  01ab148  lfs 2, 68(31)
  01ab14c  ori 4, 24, 0
  01ab150  lfs 3, -3064(3)
  01ab154  fmuls 1, 3, 1
  01ab158  addic 3, 1, 224
  01ab15c  fmuls 1, 1, 2
  01ab160  stfs 1, 68(31)
  01ab164  lfs 1, 132(29)
  01ab168  lfs 2, 332(30)
  01ab16c  fadds 1, 2, 1
  01ab170  stfs 1, 332(30)
  01ab174  lfs 1, 16(31)
  01ab178  lfs 2, 20(31)
  01ab17c  stfs 1, 224(1)
  01ab180  lfs 1, 24(31)
  01ab184  stfs 2, 228(1)
  01ab188  lfs 2, 28(31)
  01ab18c  stfs 1, 232(1)
  01ab190  stfs 2, 236(1)
  01ab194  lfs 1, 272(1)
  01ab198  lfs 2, 256(30)
  01ab19c  lfs 3, 276(1)
  01ab1a0  lfs 4, 260(30)
  01ab1a4  fsubs 1, 1, 29
  01ab1a8  lfs 5, 280(1)
  01ab1ac  fsubs 3, 3, 28
  01ab1b0  lfs 6, 332(30)
  01ab1b4  fsubs 5, 5, 27
  01ab1b8  fsub 7, 6, 30
  01ab1bc  fsubs 1, 1, 2
  01ab1c0  fsubs 3, 3, 4
  01ab1c4  lfs 4, 264(30)
  01ab1c8  fsel 6, 7, 30, 6
  01ab1cc  fsubs 4, 5, 4
  01ab1d0  lfs 5, 284(1)
  01ab1d4  fmadds 1, 1, 6, 2
  01ab1d8  stfs 1, 16(31)
  01ab1dc  lfs 1, 260(30)
  01ab1e0  fmadds 1, 3, 6, 1
  01ab1e4  stfs 1, 20(31)
  01ab1e8  lfs 1, 264(30)
  01ab1ec  stfs 5, 28(31)
  01ab1f0  fmadds 1, 4, 6, 1
  01ab1f4  stfs 1, 24(31)
  01ab1f8  bl 0x65468
  01ab1fc  nop
  01ab200  addic 3, 30, 256
  01ab204  ori 4, 24, 0
  01ab208  bl 0x65468
  01ab20c  nop
  01ab210  lfs 1, 16(31)
  01ab214  lfs 2, 224(1)
  01ab218  lwz 3, 332(30)
  01ab21c  fsubs 1, 1, 2
  01ab220  srawi 5, 3, 31
  01ab224  lis 4, 16256
  01ab228  srwi 6, 5, 1
  01ab22c  xor 3, 6, 3
  01ab230  subc 3, 3, 5
  01ab234  cmpw 3, 4
  01ab238  stfs 1, 208(30)
  01ab23c  lfs 1, 20(31)
  01ab240  lfs 2, 228(1)
  01ab244  fsubs 1, 1, 2
  01ab248  stfs 1, 212(30)
  01ab24c  lfs 1, 24(31)
  01ab250  lfs 2, 232(1)
  01ab254  fsubs 1, 1, 2
  01ab258  stfs 1, 216(30)
  01ab25c  lfs 1, 28(31)
  01ab260  stfs 1, 220(30)
  01ab264  bt 0, 0x1ab2a8
  01ab268  lis 3, 151
  01ab26c  li 5, 0
  01ab270  addic 29, 3, -25376
  01ab274  li 3, 61
  01ab278  li 4, 1
  01ab27c  stw 5, 8872(29)
  01ab280  bl 0xb72b0
  01ab284  nop
  01ab288  lwz 3, 8320(29)
  01ab28c  li 4, -1
  01ab290  li 5, 1
  01ab294  li 6, 6
  01ab298  stw 4, 152(3)
  01ab29c  stb 5, 8357(29)
  01ab2a0  stb 6, 32(31)
  01ab2a4  b 0x1ab2ac
  01ab2a8  stfs 31, 316(30)
  01ab2ac  cmpwi 28, 0
  01ab2b0  bf 2, 0x1abdc0
  01ab2b4  lis 3, 151
  01ab2b8  addic 3, 3, -25376
  01ab2bc  lhz 3, 780(3)
  01ab2c0  cmpwi 3, 0
  01ab2c4  bf 2, 0x1abdc0
  01ab2c8  li 3, 0
  01ab2cc  stw 3, 332(30)
  01ab2d0  lbz 3, 83(31)
  01ab2d4  cmpwi 3, 1
  01ab2d8  bt 2, 0x1ab2f4
  01ab2dc  ori 3, 31, 0
  01ab2e0  li 4, 1
  01ab2e4  li 5, 0
  01ab2e8  li 6, 10
  01ab2ec  bl 0xfddc0
  01ab2f0  nop
  01ab2f4  li 3, 2
  01ab2f8  stb 3, 32(31)
  01ab2fc  b 0x1abdc0
  01ab300  ori 3, 31, 0
  01ab304  ori 4, 30, 0
  01ab308  bl 0x1a9218
  01ab30c  lis 3, 27
  01ab310  lfs 1, 316(30)
  01ab314  lis 29, 114
  01ab318  addi 28, 3, -24640
  01ab31c  lis 25, 114
  01ab320  ori 3, 31, 0
  01ab324  ori 4, 30, 0
  01ab328  lfs 5, 84(28)
  01ab32c  lfs 6, 92(28)
  01ab330  lfs 31, 96(28)
  01ab334  lfs 2, 80(28)
  01ab338  lfs 8, 100(28)
  01ab33c  lfs 7, -3048(29)
  01ab340  lfs 4, 88(28)
  01ab344  lfs 9, -3052(25)
  01ab348  fmuls 3, 7, 5
  01ab34c  fmuls 5, 7, 6
  01ab350  fmuls 6, 9, 31
  01ab354  fmuls 7, 9, 8
  01ab358  bl 0x1a9a58
  01ab35c  lfs 1, 136(28)
  01ab360  lfs 2, 64(28)
  01ab364  ori 3, 31, 0
  01ab368  lfs 4, -3048(29)
  01ab36c  ori 4, 30, 0
  01ab370  lfs 3, -3052(25)
  01ab374  fmuls 1, 4, 1
  01ab378  fmuls 3, 3, 31
  01ab37c  fmuls 2, 4, 2
  01ab380  bl 0x1a9908
  01ab384  lfs 31, 140(28)
  01ab388  addic 5, 30, 288
  01ab38c  lfs 30, 144(28)
  01ab390  ori 3, 31, 0
  01ab394  lfs 1, 316(30)
  01ab398  lfs 3, -3048(29)
  01ab39c  lfs 4, -3052(25)
  01ab3a0  fmuls 2, 3, 31
  01ab3a4  fmuls 3, 3, 30
  01ab3a8  fmuls 4, 4, 30
  01ab3ac  bl 0xff2e8
  01ab3b0  nop
  01ab3b4  lfs 1, 68(31)
  01ab3b8  addic 5, 30, 292
  01ab3bc  lfs 2, 24(28)
  01ab3c0  lfs 4, -3048(29)
  01ab3c4  lfs 5, -3052(25)
  01ab3c8  fmuls 3, 4, 31
  01ab3cc  fmuls 4, 4, 30
  01ab3d0  fmuls 5, 5, 30
  01ab3d4  bl 0xff190
  01ab3d8  nop
  01ab3dc  lbz 3, 112(31)
  01ab3e0  stfs 1, 68(31)
  01ab3e4  rlwinm 3, 3, 0, 30, 30
  01ab3e8  cmpwi 3, 0
  01ab3ec  bt 2, 0x1ab414
  01ab3f0  lbz 3, 83(31)
  01ab3f4  cmpwi 3, 1
  01ab3f8  bt 2, 0x1ab414
  01ab3fc  ori 3, 31, 0
  01ab400  li 4, 1
  01ab404  li 5, 0
  01ab408  li 6, 10
  01ab40c  bl 0xfddc0
  01ab410  nop
  01ab414  cmpwi 27, 255
  01ab418  bt 2, 0x1abdc0
  01ab41c  lbz 3, 83(31)
  01ab420  cmpw 3, 26
  01ab424  bt 2, 0x1ab440
  01ab428  ori 3, 31, 0
  01ab42c  ori 4, 26, 0
  01ab430  li 5, 0
  01ab434  li 6, 6
  01ab438  bl 0xfddc0
  01ab43c  nop
  01ab440  stb 27, 32(31)
  01ab444  b 0x1abdc0
  01ab448  cmpwi 28, 0
  01ab44c  bt 2, 0x1ab480
  01ab450  lbz 3, 83(31)
  01ab454  cmpwi 3, 4
  01ab458  bt 2, 0x1ab474
  01ab45c  ori 3, 31, 0
  01ab460  li 4, 4
  01ab464  li 5, 0
  01ab468  li 6, 10
  01ab46c  bl 0xfddc0
  01ab470  nop
  01ab474  li 3, 9
  01ab478  stb 3, 32(31)
  01ab47c  b 0x1ab500
  01ab480  cmpwi 29, 0
  01ab484  bt 2, 0x1ab500
  01ab488  lbz 3, 83(31)
  01ab48c  cmpwi 3, 4
  01ab490  bt 2, 0x1ab4ac
  01ab494  ori 3, 31, 0
  01ab498  li 4, 4
  01ab49c  li 5, 0
  01ab4a0  li 6, 10
  01ab4a4  bl 0xfddc0
  01ab4a8  nop
  01ab4ac  bl 0x5c8318
  01ab4b0  nop
  01ab4b4  lis 4, 20971
  01ab4b8  ori 4, 4, 34079
  01ab4bc  mulhw 4, 4, 3
  01ab4c0  srawi 4, 4, 6
  01ab4c4  srwi 5, 4, 31
  01ab4c8  addc 4, 4, 5
  01ab4cc  sldi 5, 4, 6
  01ab4d0  addc 4, 4, 4
  01ab4d4  addc 4, 5, 4
  01ab4d8  sldi 4, 4, 2
  01ab4dc  subc 4, 4, 5
  01ab4e0  subc 3, 3, 4
  01ab4e4  addic 3, 3, 300
  01ab4e8  stw 3, 308(30)
  01ab4ec  bl 0xfcc68
  01ab4f0  nop
  01ab4f4  li 3, 8
  01ab4f8  stfs 1, 316(30)
  01ab4fc  stb 3, 32(31)
  01ab500  lis 3, 27
  01ab504  lis 7, 114
  01ab508  addi 5, 3, -24640
  01ab50c  lis 3, 114
  01ab510  addic 4, 30, 208
  01ab514  li 6, 1024
  01ab518  lfs 1, 56(5)
  01ab51c  lfs 2, -3064(3)
  01ab520  lfs 3, 208(30)
  01ab524  fmadds 2, 2, 1, 31
  01ab528  lfs 4, 212(30)
  01ab52c  lfs 5, 216(30)
  01ab530  ori 3, 31, 0
  01ab534  fmr 1, 31
  01ab538  li 8, 16
  01ab53c  fmuls 3, 3, 2
  01ab540  fmuls 4, 4, 2
  01ab544  stfs 3, 208(30)
  01ab548  stfs 4, 212(30)
  01ab54c  lfs 3, 148(5)
  01ab550  lfs 4, -3052(7)
  01ab554  fmuls 3, 4, 3
  01ab558  fmsubs 2, 5, 2, 3
  01ab55c  stfs 2, 216(30)
  01ab560  lfs 2, 24(5)
  01ab564  bl 0x100ef8
  01ab568  nop
  01ab56c  cmpwi 3, 0
  01ab570  bt 2, 0x1ab598
  01ab574  lfs 1, 208(30)
  01ab578  lfs 2, 212(30)
  01ab57c  fmuls 1, 1, 29
  01ab580  lfs 3, 216(30)
  01ab584  fmuls 2, 2, 29
  01ab588  fmuls 3, 3, 29
  01ab58c  stfs 1, 208(30)
  01ab590  stfs 2, 212(30)
  01ab594  stfs 3, 216(30)
  01ab598  cmpwi 27, 255
  01ab59c  bt 2, 0x1abdc0
  01ab5a0  lbz 3, 83(31)
  01ab5a4  cmpw 3, 26
  01ab5a8  bt 2, 0x1ab5c4
  01ab5ac  ori 3, 31, 0
  01ab5b0  ori 4, 26, 0
  01ab5b4  li 5, 0
  01ab5b8  li 6, 6
  01ab5bc  bl 0xfddc0
  01ab5c0  nop
  01ab5c4  stb 27, 32(31)
  01ab5c8  b 0x1abdc0
  01ab5cc  bt 6, 0x1ab600
  01ab5d0  lbz 3, 83(31)
  01ab5d4  cmpwi 3, 4
  01ab5d8  bt 2, 0x1ab5f4
  01ab5dc  ori 3, 31, 0
  01ab5e0  li 4, 4
  01ab5e4  li 5, 0
  01ab5e8  li 6, 10
  01ab5ec  bl 0xfddc0
  01ab5f0  nop
  01ab5f4  li 3, 9
  01ab5f8  stb 3, 32(31)
  01ab5fc  b 0x1ab6f8
  01ab600  lis 3, 27
  01ab604  lis 25, 114
  01ab608  lfs 1, 316(30)
  01ab60c  addi 28, 3, -24640
  01ab610  lis 23, 114
  01ab614  addic 5, 30, 288
  01ab618  ori 3, 31, 0
  01ab61c  lfs 30, 152(28)
  01ab620  lfs 28, 140(28)
  01ab624  lfs 3, -3048(25)
  01ab628  lfs 4, -3052(23)
  01ab62c  fmuls 2, 3, 30
  01ab630  fmuls 3, 3, 28
  01ab634  fmuls 4, 4, 30
  01ab638  bl 0xff2e8
  01ab63c  nop
  01ab640  lfs 1, 68(31)
  01ab644  lfs 2, 24(28)
  01ab648  addic 5, 30, 292
  01ab64c  lfs 4, -3048(25)
  01ab650  lfs 5, -3052(23)
  01ab654  fmuls 3, 4, 30
  01ab658  fmuls 4, 4, 28
  01ab65c  fmuls 5, 5, 30
  01ab660  bl 0xff190
  01ab664  nop
  01ab668  cmpwi 29, 0
  01ab66c  stfs 1, 68(31)
  01ab670  bt 2, 0x1ab6f8
  01ab674  ori 3, 24, 0
  01ab678  lwz 4, 276(30)
  01ab67c  extsw 4, 4
  01ab680  bl 0x110b70
  01ab684  nop
  01ab688  cmpwi 3, 0
  01ab68c  bt 2, 0x1ab6f8
  01ab690  lbz 3, 83(31)
  01ab694  cmpwi 3, 3
  01ab698  bt 2, 0x1ab6b4
  01ab69c  ori 3, 31, 0
  01ab6a0  li 4, 3
  01ab6a4  li 5, 0
  01ab6a8  li 6, 10
  01ab6ac  bl 0xfddc0
  01ab6b0  nop
  01ab6b4  bl 0x5c8318
  01ab6b8  nop
  01ab6bc  lis 4, -30584
  01ab6c0  ori 4, 4, 34953
  01ab6c4  mulhw 4, 4, 3
  01ab6c8  addc 4, 4, 3
  01ab6cc  srawi 4, 4, 6
  01ab6d0  srwi 5, 4, 31
  01ab6d4  addc 4, 4, 5
  01ab6d8  li 5, 7
  01ab6dc  sldi 6, 4, 7
  01ab6e0  sldi 4, 4, 3
  01ab6e4  subc 4, 6, 4
  01ab6e8  subc 3, 3, 4
  01ab6ec  addic 3, 3, 60
  01ab6f0  stw 3, 308(30)
  01ab6f4  stb 5, 32(31)
  01ab6f8  ori 3, 31, 0
  01ab6fc  ori 4, 30, 0
  01ab700  bl 0x1a9218
  01ab704  lis 3, 27
  01ab708  lis 4, 114
  01ab70c  lfs 1, 316(30)
  01ab710  addi 3, 3, -24640
  01ab714  lis 5, 114
  01ab718  lfs 5, 100(3)
  01ab71c  lfs 8, 164(3)
  01ab720  lfs 2, 156(3)
  01ab724  lfs 9, -3048(4)
  01ab728  lfs 4, 160(3)
  01ab72c  ori 4, 30, 0
  01ab730  lfs 7, -3052(5)
  01ab734  ori 3, 31, 0
  01ab738  fmuls 3, 9, 5
  01ab73c  fmr 6, 7
  01ab740  fmuls 5, 9, 8
  01ab744  bl 0x1a9a58
  01ab748  cmpwi 3, 0
  01ab74c  bt 2, 0x1ab7c0
  01ab750  cmpwi 29, 0
  01ab754  bt 2, 0x1ab7c0
  01ab758  lbz 3, 83(31)
  01ab75c  cmpwi 3, 3
  01ab760  bt 2, 0x1ab77c
  01ab764  ori 3, 31, 0
  01ab768  li 4, 3
  01ab76c  li 5, 0
  01ab770  li 6, 10
  01ab774  bl 0xfddc0
  01ab778  nop
  01ab77c  bl 0x5c8318
  01ab780  nop
  01ab784  lis 4, -30584
  01ab788  ori 4, 4, 34953
  01ab78c  mulhw 4, 4, 3
  01ab790  addc 4, 4, 3
  01ab794  srawi 4, 4, 6
  01ab798  srwi 5, 4, 31
  01ab79c  addc 4, 4, 5
  01ab7a0  li 5, 7
  01ab7a4  sldi 6, 4, 7
  01ab7a8  sldi 4, 4, 3
  01ab7ac  subc 4, 6, 4
  01ab7b0  subc 3, 3, 4
  01ab7b4  addic 3, 3, 60
  01ab7b8  stw 3, 308(30)
  01ab7bc  stb 5, 32(31)
  01ab7c0  lis 3, 27
  01ab7c4  lfs 2, 216(30)
  01ab7c8  addic 4, 30, 208
  01ab7cc  addi 5, 3, -24640
  01ab7d0  fmr 1, 31
  01ab7d4  lis 3, 114
  01ab7d8  li 6, 1024
  01ab7dc  li 8, 16
  01ab7e0  lfs 4, 148(5)
  01ab7e4  lfs 3, -3052(3)
  01ab7e8  ori 3, 31, 0
  01ab7ec  fnmsubs 2, 3, 4, 2
  01ab7f0  stfs 2, 216(30)
  01ab7f4  lfs 2, 24(5)
  01ab7f8  bl 0x100ef8
  01ab7fc  nop
  01ab800  cmpwi 3, 0
  01ab804  bt 2, 0x1ab82c
  01ab808  lfs 1, 208(30)
  01ab80c  lfs 2, 212(30)
  01ab810  fmuls 1, 1, 29
  01ab814  lfs 3, 216(30)
  01ab818  fmuls 2, 2, 29
  01ab81c  fmuls 3, 3, 29
  01ab820  stfs 1, 208(30)
  01ab824  stfs 2, 212(30)
  01ab828  stfs 3, 216(30)
  01ab82c  cmpwi 27, 255
  01ab830  bt 2, 0x1abdc0
  01ab834  lbz 3, 83(31)
  01ab838  cmpw 3, 26
  01ab83c  bt 2, 0x1ab858
  01ab840  ori 3, 31, 0
  01ab844  ori 4, 26, 0
  01ab848  li 5, 0
  01ab84c  li 6, 6
  01ab850  bl 0xfddc0
  01ab854  nop
  01ab858  stb 27, 32(31)
  01ab85c  b 0x1abdc0
  01ab860  lfs 1, 272(1)
  01ab864  lfs 2, 16(31)
  01ab868  lfs 3, 276(1)
  01ab86c  lfs 4, 20(31)
  01ab870  fsubs 1, 1, 2
  01ab874  fsubs 2, 3, 4
  01ab878  bl 0x5e8338
  01ab87c  nop
  01ab880  lis 3, 27
  01ab884  lis 25, 114
  01ab888  fmr 30, 1
  01ab88c  addi 29, 3, -24640
  01ab890  lis 24, 114
  01ab894  addic 5, 30, 288
  01ab898  ori 3, 31, 0
  01ab89c  lfs 4, 152(29)
  01ab8a0  lfs 28, 140(29)
  01ab8a4  lfs 3, -3048(25)
  01ab8a8  lfs 5, -3052(24)
  01ab8ac  fmuls 2, 3, 4
  01ab8b0  fmuls 3, 3, 28
  01ab8b4  fmuls 4, 5, 4
  01ab8b8  bl 0xff2e8
  01ab8bc  nop
  01ab8c0  lfs 3, 92(29)
  01ab8c4  lfs 5, 164(29)
  01ab8c8  ori 3, 31, 0
  01ab8cc  lfs 6, 32(29)
  01ab8d0  fmr 1, 30
  01ab8d4  lfs 2, 88(29)
  01ab8d8  fmr 4, 28
  01ab8dc  lfs 8, -3048(25)
  01ab8e0  ori 4, 30, 0
  01ab8e4  lfs 9, -3052(24)
  01ab8e8  fmuls 3, 8, 3
  01ab8ec  fmr 7, 9
  01ab8f0  fmuls 5, 8, 5
  01ab8f4  fmuls 6, 9, 6
  01ab8f8  bl 0x1a9a58
  01ab8fc  cmpwi 3, 0
  01ab900  bt 2, 0x1ab978
  01ab904  lfs 1, 20(31)
  01ab908  lfs 2, 276(1)
  01ab90c  lfs 3, 16(31)
  01ab910  fsubs 1, 1, 2
  01ab914  lfs 2, 272(1)
  01ab918  fsubs 2, 3, 2
  01ab91c  lis 3, 27
  01ab920  addi 3, 3, -24640
  01ab924  fmuls 1, 1, 1
  01ab928  fmadds 1, 2, 2, 1
  01ab92c  lfs 2, 168(3)
  01ab930  fsqrts 1, 1
  01ab934  fcmpu 0, 1, 2
  01ab938  cror 6, 1, 2
  01ab93c  bt 6, 0x1ab978
  01ab940  lbz 3, 32(31)
  01ab944  cmpwi 3, 10
  01ab948  bt 2, 0x1ab978
  01ab94c  lbz 3, 83(31)
  01ab950  cmpwi 3, 5
  01ab954  bt 2, 0x1ab970
  01ab958  ori 3, 31, 0
  01ab95c  li 4, 5
  01ab960  li 5, 0
  01ab964  li 6, 2
  01ab968  bl 0xfddc0
  01ab96c  nop
  01ab970  li 3, 10
  01ab974  stb 3, 32(31)
  01ab978  lis 3, 27
  01ab97c  lfs 2, 216(30)
  01ab980  addic 4, 30, 208
  01ab984  fmr 1, 31
  01ab988  addi 5, 3, -24640
  01ab98c  lis 3, 114
  01ab990  li 6, 1024
  01ab994  li 8, 16
  01ab998  lfs 4, 148(5)
  01ab99c  lfs 3, -3052(3)
  01ab9a0  ori 3, 31, 0
  01ab9a4  fnmsubs 2, 3, 4, 2
  01ab9a8  stfs 2, 216(30)
  01ab9ac  lfs 2, 24(5)
  01ab9b0  bl 0x100ef8
  01ab9b4  nop
  01ab9b8  cmpwi 3, 0
  01ab9bc  bt 2, 0x1ab9e4
  01ab9c0  lfs 1, 208(30)
  01ab9c4  lfs 2, 212(30)
  01ab9c8  fmuls 1, 1, 29
  01ab9cc  lfs 3, 216(30)
  01ab9d0  fmuls 2, 2, 29
  01ab9d4  fmuls 3, 3, 29
  01ab9d8  stfs 1, 208(30)
  01ab9dc  stfs 2, 212(30)
  01ab9e0  stfs 3, 216(30)
  01ab9e4  lis 3, 27
  01ab9e8  addi 29, 3, -24640
  01ab9ec  lfs 1, 68(29)
  01ab9f0  bl 0x502758
  01ab9f4  nop
  01ab9f8  stb 3, 88(30)
  01ab9fc  lfs 1, 172(29)
  01aba00  bl 0x502758
  01aba04  nop
  01aba08  cmpwi 28, 0
  01aba0c  stb 3, 90(30)
  01aba10  bf 2, 0x1aba40
  01aba14  lbz 3, 83(31)
  01aba18  cmpwi 3, 4
  01aba1c  bt 2, 0x1aba38
  01aba20  ori 3, 31, 0
  01aba24  li 4, 4
  01aba28  li 5, 0
  01aba2c  li 6, 10
  01aba30  bl 0xfddc0
  01aba34  nop
  01aba38  li 3, 8
  01aba3c  stb 3, 32(31)
  01aba40  lis 3, 27
  01aba44  lwz 9, 336(1)
  01aba48  li 7, 4
  01aba4c  fmr 3, 31
  01aba50  addi 6, 3, -24640
  01aba54  fmr 4, 31
  01aba58  li 8, 11
  01aba5c  fmr 5, 31
  01aba60  ori 3, 31, 0
  01aba64  ori 4, 30, 0
  01aba68  li 5, 10
  01aba6c  lfs 1, 176(6)
  01aba70  lfs 2, 112(6)
  01aba74  std 7, 120(1)
  01aba78  std 7, 128(1)
  01aba7c  li 6, 5
  01aba80  std 8, 136(1)
  01aba84  std 9, 144(1)
  01aba88  bl 0x1a9c20
  01aba8c  lbz 3, 112(31)
  01aba90  rlwinm 3, 3, 0, 30, 30
  01aba94  cmpwi 3, 0
  01aba98  bt 2, 0x1abb08
  01aba9c  lbz 3, 83(31)
  01abaa0  cmpwi 3, 4
  01abaa4  bt 2, 0x1abac0
  01abaa8  ori 3, 31, 0
  01abaac  li 4, 4
  01abab0  li 5, 0
  01abab4  li 6, 10
  01abab8  bl 0xfddc0
  01ababc  nop
  01abac0  bl 0x5c8318
  01abac4  nop
  01abac8  lis 4, 20971
  01abacc  ori 4, 4, 34079
  01abad0  mulhw 4, 4, 3
  01abad4  li 6, 8
  01abad8  srawi 4, 4, 6
  01abadc  srwi 5, 4, 31
  01abae0  addc 4, 4, 5
  01abae4  sldi 5, 4, 6
  01abae8  addc 4, 4, 4
  01abaec  addc 4, 5, 4
  01abaf0  sldi 4, 4, 2
  01abaf4  subc 4, 4, 5
  01abaf8  subc 3, 3, 4
  01abafc  addic 3, 3, 300
  01abb00  stw 3, 308(30)
  01abb04  stb 6, 32(31)
  01abb08  cmpwi 27, 255
  01abb0c  bt 2, 0x1abdc0
  01abb10  lbz 3, 83(31)
  01abb14  cmpw 3, 26
  01abb18  bt 2, 0x1abb34
  01abb1c  ori 3, 31, 0
  01abb20  ori 4, 26, 0
  01abb24  li 5, 0
  01abb28  li 6, 6
  01abb2c  bl 0xfddc0
  01abb30  nop
  01abb34  stb 27, 32(31)
  01abb38  b 0x1abdc0
  01abb3c  lbz 3, 112(31)
  01abb40  rlwinm 3, 3, 0, 30, 30
  01abb44  cmpwi 3, 0
  01abb48  bt 2, 0x1abdc0
  01abb4c  li 3, 7
  01abb50  stb 3, 32(31)
  01abb54  b 0x1abdc0
  01abb58  ori 3, 31, 0
  01abb5c  addic 4, 30, 112
  01abb60  bl 0x10b030
  01abb64  nop
  01abb68  clrlwi 3, 3, 31
  01abb6c  cmpwi 3, 0
  01abb70  bt 2, 0x1abdc0
  01abb74  ori 3, 31, 0
  01abb78  ori 4, 30, 0
  01abb7c  bl 0x1a8e20
  01abb80  b 0x1abdc0
  01abb84  lbz 3, 112(31)
  01abb88  rlwinm 3, 3, 0, 30, 30
  01abb8c  cmpwi 3, 0
  01abb90  bt 2, 0x1abdc0
  01abb94  ori 3, 31, 0
  01abb98  ori 4, 30, 0
  01abb9c  bl 0x1a8e20
  01abba0  b 0x1abdc0
  01abba4  addic 4, 30, 112
  01abba8  ori 3, 31, 0
  01abbac  bl 0x10b030
  01abbb0  nop
  01abbb4  lbz 4, 112(31)
  01abbb8  rlwinm 4, 4, 0, 30, 30
  01abbbc  and 3, 4, 3
  01abbc0  cmpwi 3, 0
  01abbc4  bt 2, 0x1abdc0
  01abbc8  lis 3, 27
  01abbcc  li 11, -1
  01abbd0  fmr 4, 31
  01abbd4  addi 5, 3, -24640
  01abbd8  fmr 6, 31
  01abbdc  li 6, 0
  01abbe0  li 7, 1
  01abbe4  ori 3, 31, 0
  01abbe8  addic 4, 30, 208
  01abbec  lfs 1, 24(5)
  01abbf0  li 8, 3
  01abbf4  lfs 3, 28(5)
  01abbf8  li 9, 3
  01abbfc  lfs 5, 92(5)
  01abc00  li 10, 5
  01abc04  lfs 7, 96(5)
  01abc08  fmr 2, 1
  01abc0c  std 11, 144(1)
  01abc10  li 5, 0
  01abc14  std 6, 160(1)
  01abc18  std 7, 168(1)
  01abc1c  std 11, 176(1)
  01abc20  std 6, 184(1)
  01abc24  bl 0x10e030
  01abc28  nop
  01abc2c  ori 3, 31, 0
  01abc30  bl 0xefb38
  01abc34  nop
  01abc38  b 0x1abe5c
  01abc3c  lis 3, 27
  01abc40  lis 7, 114
  01abc44  addi 5, 3, -24640
  01abc48  lis 3, 114
  01abc4c  addic 4, 30, 208
  01abc50  li 6, 1024
  01abc54  lfs 1, 56(5)
  01abc58  lfs 2, -3064(3)
  01abc5c  lfs 3, 208(30)
  01abc60  fmadds 2, 2, 1, 31
  01abc64  lfs 4, 212(30)
  01abc68  lfs 5, 216(30)
  01abc6c  ori 3, 31, 0
  01abc70  fmr 1, 31
  01abc74  li 8, 16
  01abc78  fmuls 3, 3, 2
  01abc7c  fmuls 4, 4, 2
  01abc80  stfs 3, 208(30)
  01abc84  stfs 4, 212(30)
  01abc88  lfs 3, 148(5)
  01abc8c  lfs 4, -3052(7)
  01abc90  fmuls 3, 4, 3
  01abc94  fmsubs 2, 5, 2, 3
  01abc98  stfs 2, 216(30)
  01abc9c  lfs 2, 24(5)
  01abca0  bl 0x100ef8
  01abca4  nop
  01abca8  lbz 3, 112(31)
  01abcac  rlwinm 3, 3, 0, 30, 30
  01abcb0  cmpwi 3, 0
  01abcb4  bt 2, 0x1abdc0
  01abcb8  ori 3, 31, 0
  01abcbc  ori 4, 30, 0
  01abcc0  bl 0x1a8e20
  01abcc4  b 0x1abdc0
  01abcc8  lis 3, 27
  01abccc  lis 7, 114
  01abcd0  addi 5, 3, -24640
  01abcd4  lis 3, 114
  01abcd8  addic 4, 30, 208
  01abcdc  li 6, 1024
  01abce0  lfs 1, 56(5)
  01abce4  lfs 2, -3064(3)
  01abce8  lfs 3, 208(30)
  01abcec  fmadds 2, 2, 1, 31
  01abcf0  lfs 4, 212(30)
  01abcf4  lfs 5, 216(30)
  01abcf8  fmr 1, 31
  01abcfc  ori 3, 31, 0
  01abd00  li 8, 16
  01abd04  fmuls 3, 3, 2
  01abd08  fmuls 4, 4, 2
  01abd0c  stfs 3, 208(30)
  01abd10  stfs 4, 212(30)
  01abd14  lfs 3, 148(5)
  01abd18  lfs 4, -3052(7)
  01abd1c  fmuls 3, 4, 3
  01abd20  fmsubs 2, 5, 2, 3
  01abd24  stfs 2, 216(30)
  01abd28  lfs 2, 24(5)
  01abd2c  bl 0x100ef8
  01abd30  nop
  01abd34  cmpwi 27, 255
  01abd38  bt 2, 0x1abdc0
  01abd3c  lbz 3, 83(31)
  01abd40  cmpw 3, 26
  01abd44  bt 2, 0x1abd60
  01abd48  ori 3, 31, 0
  01abd4c  ori 4, 26, 0
  01abd50  li 5, 0
  01abd54  li 6, 6
  01abd58  bl 0xfddc0
  01abd5c  nop
  01abd60  stb 27, 32(31)
  01abd64  b 0x1abdc0
  01abd68  lis 3, 27
  01abd6c  lis 4, 114
  01abd70  addi 3, 3, -24640
  01abd74  lfs 1, 56(3)
  01abd78  lfs 2, -3064(4)
  01abd7c  lfs 3, 208(30)
  01abd80  fmadds 1, 2, 1, 31
  01abd84  lfs 4, 212(30)
  01abd88  lfs 5, 216(30)
  01abd8c  fmuls 2, 3, 1
  01abd90  fmuls 3, 4, 1
  01abd94  fmuls 1, 5, 1
  01abd98  stfs 2, 208(30)
  01abd9c  stfs 3, 212(30)
  01abda0  stfs 1, 216(30)
  01abda4  lbz 3, 112(31)
  01abda8  rlwinm 3, 3, 0, 30, 30
  01abdac  cmpwi 3, 0
  01abdb0  bt 2, 0x1abdc0
  01abdb4  ori 3, 31, 0
  01abdb8  ori 4, 30, 0
  01abdbc  bl 0x1a8e20
  01abdc0  lwz 3, 16(31)
  01abdc4  lis 4, 16384
  01abdc8  srawi 5, 3, 31
  01abdcc  srwi 6, 5, 1
  01abdd0  xor 3, 6, 3
  01abdd4  subc 3, 3, 5
  01abdd8  cmpw 3, 4
  01abddc  bt 0, 0x1abe50
  01abde0  lis 4, 17535
  01abde4  ori 4, 4, 16384
  01abde8  cmpw 3, 4
  01abdec  bt 1, 0x1abe50
  01abdf0  lwz 5, 20(31)
  01abdf4  lis 3, 17535
  01abdf8  lis 4, 16384
  01abdfc  srawi 6, 5, 31
  01abe00  ori 3, 3, 16384
  01abe04  srwi 7, 6, 1
  01abe08  xor 5, 7, 5
  01abe0c  subc 5, 5, 6
  01abe10  cmpw 1, 5, 3
  01abe14  cmpw 5, 4
  01abe18  cror 2, 0, 5
  01abe1c  bt 2, 0x1abe50
  01abe20  lwz 5, 24(31)
  01abe24  lis 3, 17535
  01abe28  lis 4, 16384
  01abe2c  srawi 6, 5, 31
  01abe30  ori 3, 3, 16384
  01abe34  srwi 7, 6, 1
  01abe38  xor 5, 7, 5
  01abe3c  subc 5, 5, 6
  01abe40  cmpw 5, 4
  01abe44  cmpw 1, 5, 3
  01abe48  bt 0, 0x1abe50
  01abe4c  bf 5, 0x1abe5c
  01abe50  ori 3, 31, 0
  01abe54  bl 0xefb38
  01abe58  nop
  01abe5c  ld 0, 496(1)
  01abe60  mtlr 0
  01abe64  lfd 27, 440(1)
  01abe68  lfd 28, 448(1)
  01abe6c  lfd 29, 456(1)
  01abe70  lfd 30, 464(1)
  01abe74  lfd 31, 472(1)
  01abe78  ld 23, 368(1)
  01abe7c  ld 24, 376(1)
  01abe80  ld 25, 384(1)
  01abe84  ld 26, 392(1)
  01abe88  ld 27, 400(1)
  01abe8c  ld 28, 408(1)
  01abe90  ld 29, 416(1)
  01abe94  ld 30, 424(1)
  01abe98  ld 31, 432(1)
  01abe9c  addi 1, 1, 480
  01abea0  blr

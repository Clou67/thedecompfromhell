# game/update/moby1826.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1826:   # 0x2c0c60, 0x554 bytes
  02c0c60  stdu 1, -192(1)
  02c0c64  mflr 0
  02c0c68  std 0, 208(1)
  02c0c6c  std 31, 184(1)
  02c0c70  ori 31, 3, 0
  02c0c74  lfs 1, 16(31)
  02c0c78  lfs 2, 20(31)
  02c0c7c  fneg 3, 1
  02c0c80  lwz 3, 24(31)
  02c0c84  fneg 2, 2
  02c0c88  std 30, 176(1)
  02c0c8c  lfs 1, 24(31)
  02c0c90  lwz 30, 120(31)
  02c0c94  srawi 4, 3, 31
  02c0c98  fneg 4, 1
  02c0c9c  lfs 5, 28(31)
  02c0ca0  lfs 6, 64(31)
  02c0ca4  srwi 5, 4, 1
  02c0ca8  stfs 5, 124(1)
  02c0cac  cmpwi 30, 0
  02c0cb0  xor 3, 5, 3
  02c0cb4  subc 3, 3, 4
  02c0cb8  stfs 3, 112(1)
  02c0cbc  stfs 2, 116(1)
  02c0cc0  lfs 2, 68(31)
  02c0cc4  stfs 4, 120(1)
  02c0cc8  stfs 6, 128(1)
  02c0ccc  lfs 3, 72(31)
  02c0cd0  stfs 2, 132(1)
  02c0cd4  lfs 2, 76(31)
  02c0cd8  stfs 3, 136(1)
  02c0cdc  std 29, 168(1)
  02c0ce0  stfs 2, 140(1)
  02c0ce4  bt 2, 0x2c1198
  02c0ce8  lbz 4, 32(31)
  02c0cec  cmpwi 4, 1
  02c0cf0  cmpwi 1, 4, 3
  02c0cf4  cmpwi 6, 4, 2
  02c0cf8  cmpwi 7, 4, 0
  02c0cfc  bt 1, 0x2c0d08
  02c0d00  bt 30, 0x2c0d14
  02c0d04  b 0x2c1150
  02c0d08  bf 25, 0x2c0d70
  02c0d0c  bf 5, 0x2c0f10
  02c0d10  b 0x2c1150
  02c0d14  lis 3, 165
  02c0d18  lwz 5, 160(30)
  02c0d1c  li 4, -1
  02c0d20  slwi 5, 5, 7
  02c0d24  li 6, 2
  02c0d28  lwz 3, 7120(3)
  02c0d2c  stw 4, 180(30)
  02c0d30  addc 3, 3, 5
  02c0d34  lis 4, 123
  02c0d38  clrldi 3, 3, 32
  02c0d3c  li 5, 1
  02c0d40  lfs 1, 40(3)
  02c0d44  lfs 2, 56(3)
  02c0d48  fadds 2, 1, 2
  02c0d4c  stfs 2, 168(30)
  02c0d50  lfs 2, 56(3)
  02c0d54  fadds 1, 1, 2
  02c0d58  lfs 2, 32508(4)
  02c0d5c  stb 5, 188(31)
  02c0d60  stb 6, 32(31)
  02c0d64  fadds 1, 1, 2
  02c0d68  stfs 1, 24(31)
  02c0d6c  b 0x2c1150
  02c0d70  ori 3, 31, 0
  02c0d74  lwz 4, 180(30)
  02c0d78  extsw 4, 4
  02c0d7c  bl 0x15cc7c
  02c0d80  nop
  02c0d84  cmpwi 3, 0
  02c0d88  bt 2, 0x2c0da4
  02c0d8c  lwz 3, 180(30)
  02c0d90  extsw 3, 3
  02c0d94  bl 0x15cdb0
  02c0d98  nop
  02c0d9c  li 3, -1
  02c0da0  stw 3, 180(30)
  02c0da4  lis 3, 151
  02c0da8  lfs 1, 20(31)
  02c0dac  lfs 2, 16(31)
  02c0db0  addic 3, 3, -25376
  02c0db4  lis 4, 44
  02c0db8  lfs 3, 132(3)
  02c0dbc  lfs 4, 128(3)
  02c0dc0  fsubs 1, 1, 3
  02c0dc4  fsubs 2, 2, 4
  02c0dc8  addi 4, 4, 3144
  02c0dcc  fmuls 1, 1, 1
  02c0dd0  fmadds 1, 2, 2, 1
  02c0dd4  lfs 2, 0(4)
  02c0dd8  fsqrts 1, 1
  02c0ddc  fcmpu 0, 1, 2
  02c0de0  cror 6, 1, 2
  02c0de4  bt 6, 0x2c0e80
  02c0de8  lis 4, 44
  02c0dec  addi 5, 4, 3144
  02c0df0  lbz 4, 188(31)
  02c0df4  cmpwi 4, 0
  02c0df8  lfs 2, 4(5)
  02c0dfc  fmr 1, 2
  02c0e00  bt 2, 0x2c0e10
  02c0e04  lis 5, 44
  02c0e08  addi 5, 5, 3144
  02c0e0c  lfs 2, 8(5)
  02c0e10  lis 5, 165
  02c0e14  lwz 7, 160(30)
  02c0e18  lis 6, 123
  02c0e1c  fmr 3, 1
  02c0e20  slwi 7, 7, 7
  02c0e24  lwz 5, 7120(5)
  02c0e28  lfs 1, 32508(6)
  02c0e2c  addc 5, 5, 7
  02c0e30  lfs 4, 136(3)
  02c0e34  clrldi 5, 5, 32
  02c0e38  lfs 5, 40(5)
  02c0e3c  lfs 6, 56(5)
  02c0e40  fmadds 2, 5, 2, 6
  02c0e44  fadds 1, 2, 1
  02c0e48  fsubs 2, 4, 1
  02c0e4c  fabs 2, 2
  02c0e50  fcmpu 0, 2, 3
  02c0e54  cror 6, 1, 2
  02c0e58  bt 6, 0x2c0e80
  02c0e5c  addic 3, 4, 1
  02c0e60  li 4, 0
  02c0e64  clrlwi 3, 3, 31
  02c0e68  li 5, 3
  02c0e6c  stb 3, 188(31)
  02c0e70  stfs 1, 168(30)
  02c0e74  stw 4, 176(30)
  02c0e78  stb 5, 32(31)
  02c0e7c  b 0x2c1150
  02c0e80  lwz 4, 764(3)
  02c0e84  cmpw 4, 31
  02c0e88  bf 2, 0x2c1150
  02c0e8c  lhz 3, 782(3)
  02c0e90  cmpwi 3, 0
  02c0e94  bf 2, 0x2c1150
  02c0e98  lis 3, 44
  02c0e9c  addi 4, 3, 3144
  02c0ea0  lbz 3, 188(31)
  02c0ea4  cmpwi 3, 0
  02c0ea8  lfs 1, 4(4)
  02c0eac  bt 2, 0x2c0ebc
  02c0eb0  lis 4, 44
  02c0eb4  addi 4, 4, 3144
  02c0eb8  lfs 1, 8(4)
  02c0ebc  addic 3, 3, 1
  02c0ec0  lis 4, 165
  02c0ec4  clrlwi 3, 3, 31
  02c0ec8  stb 3, 188(31)
  02c0ecc  lwz 3, 160(30)
  02c0ed0  lwz 4, 7120(4)
  02c0ed4  slwi 3, 3, 7
  02c0ed8  addc 3, 4, 3
  02c0edc  lis 4, 123
  02c0ee0  clrldi 3, 3, 32
  02c0ee4  lfs 2, 40(3)
  02c0ee8  lfs 3, 56(3)
  02c0eec  li 3, 0
  02c0ef0  fmadds 1, 2, 1, 3
  02c0ef4  lfs 2, 32508(4)
  02c0ef8  li 4, 3
  02c0efc  stw 3, 176(30)
  02c0f00  fadds 1, 1, 2
  02c0f04  stfs 1, 168(30)
  02c0f08  stb 4, 32(31)
  02c0f0c  b 0x2c1150
  02c0f10  lis 4, 165
  02c0f14  lwz 5, 160(30)
  02c0f18  lis 29, 151
  02c0f1c  slwi 5, 5, 7
  02c0f20  addic 29, 29, -25376
  02c0f24  lwz 4, 7120(4)
  02c0f28  addc 4, 4, 5
  02c0f2c  clrldi 4, 4, 32
  02c0f30  lfs 2, 132(29)
  02c0f34  lfs 3, 128(29)
  02c0f38  lfs 4, 52(4)
  02c0f3c  lfs 5, 48(4)
  02c0f40  fsubs 2, 2, 4
  02c0f44  fsubs 3, 3, 5
  02c0f48  lis 4, 44
  02c0f4c  addic 5, 31, 24
  02c0f50  addi 4, 4, 3144
  02c0f54  fmuls 2, 2, 2
  02c0f58  fmadds 2, 3, 3, 2
  02c0f5c  lfs 3, 12(4)
  02c0f60  addic 4, 30, 176
  02c0f64  fsqrts 2, 2
  02c0f68  fcmpu 0, 2, 3
  02c0f6c  bt 1, 0x2c0fb4
  02c0f70  lfs 2, 136(29)
  02c0f74  lis 6, 44
  02c0f78  fsubs 2, 1, 2
  02c0f7c  addi 6, 6, 3144
  02c0f80  lfs 3, 16(6)
  02c0f84  lfs 4, 4(6)
  02c0f88  fsubs 2, 2, 3
  02c0f8c  fabs 2, 2
  02c0f90  fcmpu 0, 2, 4
  02c0f94  bt 1, 0x2c0fb4
  02c0f98  lwz 6, 168(30)
  02c0f9c  srawi 7, 6, 31
  02c0fa0  srwi 8, 7, 1
  02c0fa4  xor 6, 8, 6
  02c0fa8  subc 6, 6, 7
  02c0fac  cmpw 3, 6
  02c0fb0  bf 0, 0x2c0ff8
  02c0fb4  lis 3, 123
  02c0fb8  lis 6, 114
  02c0fbc  lis 7, 123
  02c0fc0  lis 8, 114
  02c0fc4  lfs 2, 32524(3)
  02c0fc8  lfs 1, -3048(6)
  02c0fcc  ori 3, 5, 0
  02c0fd0  fmuls 2, 2, 1
  02c0fd4  lfs 1, 168(30)
  02c0fd8  ori 5, 4, 0
  02c0fdc  lfs 4, 32520(7)
  02c0fe0  lfs 5, -3052(8)
  02c0fe4  fmuls 4, 4, 5
  02c0fe8  fmr 3, 2
  02c0fec  bl 0x109c30
  02c0ff0  nop
  02c0ff4  b 0x2c1044
  02c0ff8  ori 3, 5, 0
  02c0ffc  lis 5, 44
  02c1000  lis 6, 123
  02c1004  addi 5, 5, 3144
  02c1008  lis 7, 114
  02c100c  lfs 2, 20(5)
  02c1010  lfs 3, 32524(6)
  02c1014  lfs 5, -3048(7)
  02c1018  lis 6, 123
  02c101c  fmuls 2, 3, 2
  02c1020  lis 7, 114
  02c1024  ori 5, 4, 0
  02c1028  lfs 4, 32520(6)
  02c102c  lfs 3, -3052(7)
  02c1030  fmuls 4, 4, 3
  02c1034  fmuls 2, 2, 5
  02c1038  fmr 3, 2
  02c103c  bl 0x109c30
  02c1040  nop
  02c1044  li 7, 0
  02c1048  addic 5, 31, 64
  02c104c  addic 3, 30, 96
  02c1050  ori 6, 5, 0
  02c1054  stw 7, 156(1)
  02c1058  addic 4, 1, 144
  02c105c  stw 7, 148(1)
  02c1060  stw 7, 144(1)
  02c1064  stfs 1, 152(1)
  02c1068  bl 0x112900
  02c106c  nop
  02c1070  lwz 3, 152(1)
  02c1074  cmpwi 3, 0
  02c1078  bt 2, 0x2c10b4
  02c107c  ori 3, 31, 0
  02c1080  lwz 4, 180(30)
  02c1084  extsw 4, 4
  02c1088  bl 0x15cc7c
  02c108c  nop
  02c1090  cmpwi 3, 0
  02c1094  bf 2, 0x2c10e8
  02c1098  li 3, 0
  02c109c  li 4, 4
  02c10a0  ori 5, 31, 0
  02c10a4  bl 0x15d12c
  02c10a8  nop
  02c10ac  stw 3, 180(30)
  02c10b0  b 0x2c10e8
  02c10b4  ori 3, 31, 0
  02c10b8  lwz 4, 180(30)
  02c10bc  extsw 4, 4
  02c10c0  bl 0x15cc7c
  02c10c4  nop
  02c10c8  cmpwi 3, 0
  02c10cc  bt 2, 0x2c10e8
  02c10d0  lwz 3, 180(30)
  02c10d4  extsw 3, 3
  02c10d8  bl 0x15cdb0
  02c10dc  nop
  02c10e0  li 3, -1
  02c10e4  stw 3, 180(30)
  02c10e8  lwz 3, 24(31)
  02c10ec  lwz 4, 168(30)
  02c10f0  cmpw 3, 4
  02c10f4  bf 2, 0x2c1130
  02c10f8  lwz 3, 764(29)
  02c10fc  cmpw 3, 31
  02c1100  bf 2, 0x2c1110
  02c1104  lhz 3, 782(29)
  02c1108  cmpwi 3, 0
  02c110c  bt 2, 0x2c1130
  02c1110  li 3, 0
  02c1114  li 4, 2
  02c1118  stw 3, 124(30)
  02c111c  stw 3, 120(30)
  02c1120  stw 3, 116(30)
  02c1124  stw 3, 112(30)
  02c1128  stb 4, 32(31)
  02c112c  b 0x2c1150
  02c1130  lwz 3, 176(30)
  02c1134  cmpwi 3, 0
  02c1138  bt 2, 0x2c1150
  02c113c  lis 3, 113
  02c1140  ori 4, 31, 0
  02c1144  addic 3, 3, -20448
  02c1148  bl 0x6d720
  02c114c  nop
  02c1150  lfs 1, 112(1)
  02c1154  lfs 2, 16(31)
  02c1158  addic 3, 30, 96
  02c115c  lfs 3, 116(1)
  02c1160  addic 4, 1, 112
  02c1164  fadds 1, 1, 2
  02c1168  addic 5, 1, 128
  02c116c  lfs 2, 20(31)
  02c1170  addic 6, 31, 64
  02c1174  lfs 4, 120(1)
  02c1178  fadds 2, 3, 2
  02c117c  lfs 3, 24(31)
  02c1180  fadds 3, 4, 3
  02c1184  stfs 1, 112(1)
  02c1188  stfs 2, 116(1)
  02c118c  stfs 3, 120(1)
  02c1190  bl 0x112900
  02c1194  nop
  02c1198  ld 0, 208(1)
  02c119c  mtlr 0
  02c11a0  ld 29, 168(1)
  02c11a4  ld 30, 176(1)
  02c11a8  ld 31, 184(1)
  02c11ac  addi 1, 1, 192
  02c11b0  blr

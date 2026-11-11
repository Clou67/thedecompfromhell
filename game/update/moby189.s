# game/update/moby189.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_189:   # 0x2d0c98, 0x618 bytes
  02d0c98  stdu 1, -272(1)
  02d0c9c  mflr 0
  02d0ca0  std 0, 288(1)
  02d0ca4  stfd 23, 200(1)
  02d0ca8  stfd 24, 208(1)
  02d0cac  stfd 25, 216(1)
  02d0cb0  stfd 26, 224(1)
  02d0cb4  stfd 27, 232(1)
  02d0cb8  stfd 28, 240(1)
  02d0cbc  stfd 29, 248(1)
  02d0cc0  stfd 30, 256(1)
  02d0cc4  stfd 31, 264(1)
  02d0cc8  std 31, 192(1)
  02d0ccc  ori 31, 3, 0
  02d0cd0  std 28, 168(1)
  02d0cd4  lis 3, 45
  02d0cd8  std 29, 176(1)
  02d0cdc  addi 28, 3, 3156
  02d0ce0  lwz 29, 120(31)
  02d0ce4  lfs 1, 16(31)
  02d0ce8  lfs 2, 20(31)
  02d0cec  stfs 1, 112(1)
  02d0cf0  lfs 3, 24(31)
  02d0cf4  stfs 2, 116(1)
  02d0cf8  lfs 4, 28(31)
  02d0cfc  stfs 3, 120(1)
  02d0d00  stfs 4, 124(1)
  02d0d04  lfs 4, 0(29)
  02d0d08  fadds 4, 1, 4
  02d0d0c  lfs 1, 64(31)
  02d0d10  stfs 4, 16(31)
  02d0d14  lfs 4, 4(29)
  02d0d18  fadds 2, 2, 4
  02d0d1c  stfs 2, 20(31)
  02d0d20  lfs 2, 8(29)
  02d0d24  fadds 2, 3, 2
  02d0d28  stfs 2, 24(31)
  02d0d2c  std 30, 184(1)
  02d0d30  std 27, 160(1)
  02d0d34  lfs 2, 16(29)
  02d0d38  bl 0x502578
  02d0d3c  nop
  02d0d40  stfs 1, 64(31)
  02d0d44  lfs 1, 68(31)
  02d0d48  lfs 2, 20(29)
  02d0d4c  bl 0x502578
  02d0d50  nop
  02d0d54  stfs 1, 68(31)
  02d0d58  lwz 3, 16(31)
  02d0d5c  li 30, 0
  02d0d60  lfs 31, 0(28)
  02d0d64  cmpwi 3, 0
  02d0d68  lfs 2, 16(31)
  02d0d6c  bt 0, 0x2d0dc8
  02d0d70  lwz 3, 20(31)
  02d0d74  lfs 1, 20(31)
  02d0d78  cmpwi 3, 0
  02d0d7c  bt 0, 0x2d0dc8
  02d0d80  lwz 3, 24(31)
  02d0d84  cmpwi 3, 0
  02d0d88  bt 0, 0x2d0dc8
  02d0d8c  lis 3, 149
  02d0d90  addic 3, 3, 5056
  02d0d94  lfs 3, 324(3)
  02d0d98  lfs 4, 320(3)
  02d0d9c  fsubs 1, 1, 3
  02d0da0  fsubs 2, 2, 4
  02d0da4  lis 3, 45
  02d0da8  addi 3, 3, 3156
  02d0dac  fmuls 1, 1, 1
  02d0db0  fmadds 1, 2, 2, 1
  02d0db4  lfs 2, 4(3)
  02d0db8  fsqrts 1, 1
  02d0dbc  fcmpu 0, 1, 2
  02d0dc0  cror 6, 0, 2
  02d0dc4  bt 6, 0x2d0dd8
  02d0dc8  ori 3, 31, 0
  02d0dcc  bl 0xefb38
  02d0dd0  nop
  02d0dd4  b 0x2d1268
  02d0dd8  lfs 1, 4(29)
  02d0ddc  lfs 2, 0(29)
  02d0de0  fmuls 3, 1, 1
  02d0de4  lfs 1, 8(29)
  02d0de8  fmadds 2, 2, 2, 3
  02d0dec  fmadds 2, 1, 1, 2
  02d0df0  fsqrts 2, 2
  02d0df4  fcmpu 0, 2, 31
  02d0df8  bt 2, 0x2d0e18
  02d0dfc  lis 3, 45
  02d0e00  lis 4, 114
  02d0e04  addi 3, 3, 3156
  02d0e08  lfs 2, 8(3)
  02d0e0c  lfs 3, -3048(4)
  02d0e10  fnmsubs 1, 3, 2, 1
  02d0e14  stfs 1, 8(29)
  02d0e18  addic 3, 29, 28
  02d0e1c  bl 0x4fff60
  02d0e20  nop
  02d0e24  cmpwi 3, 0
  02d0e28  bt 2, 0x2d1080
  02d0e2c  lis 3, 45
  02d0e30  addic 28, 31, 16
  02d0e34  addi 3, 3, 3156
  02d0e38  ori 27, 30, 0
  02d0e3c  lfs 23, 12(3)
  02d0e40  lfs 24, 16(3)
  02d0e44  lfs 25, 20(3)
  02d0e48  lfs 26, 24(3)
  02d0e4c  lfs 27, 28(3)
  02d0e50  lfs 28, 32(3)
  02d0e54  lfs 29, 36(3)
  02d0e58  lfs 30, 40(3)
  02d0e5c  fmr 1, 23
  02d0e60  stw 30, 128(1)
  02d0e64  stw 30, 132(1)
  02d0e68  fmr 2, 24
  02d0e6c  stw 30, 136(1)
  02d0e70  stw 30, 140(1)
  02d0e74  bl 0xfcbe8
  02d0e78  nop
  02d0e7c  stfs 1, 128(1)
  02d0e80  fmr 2, 24
  02d0e84  fmr 1, 23
  02d0e88  bl 0xfcbe8
  02d0e8c  nop
  02d0e90  stfs 1, 132(1)
  02d0e94  fmr 1, 23
  02d0e98  fmr 2, 24
  02d0e9c  bl 0xfcbe8
  02d0ea0  nop
  02d0ea4  stfs 1, 136(1)
  02d0ea8  lfs 1, 4(29)
  02d0eac  lfs 2, 0(29)
  02d0eb0  fmuls 1, 1, 1
  02d0eb4  lfs 3, 8(29)
  02d0eb8  fmadds 1, 2, 2, 1
  02d0ebc  fmadds 1, 3, 3, 1
  02d0ec0  fsqrts 1, 1
  02d0ec4  fcmpu 0, 1, 31
  02d0ec8  bt 2, 0x2d0f90
  02d0ecc  fmr 2, 26
  02d0ed0  fmr 1, 25
  02d0ed4  bl 0xfcbe8
  02d0ed8  nop
  02d0edc  lfs 2, 4(29)
  02d0ee0  lfs 3, 0(29)
  02d0ee4  fmuls 2, 2, 2
  02d0ee8  lfs 4, 132(1)
  02d0eec  lfs 5, 8(29)
  02d0ef0  fmuls 6, 4, 4
  02d0ef4  lfs 7, 128(1)
  02d0ef8  lfs 8, 136(1)
  02d0efc  fmadds 2, 3, 3, 2
  02d0f00  fmadds 3, 7, 7, 6
  02d0f04  fmadds 2, 5, 5, 2
  02d0f08  fmadds 3, 8, 8, 3
  02d0f0c  fsqrts 2, 2
  02d0f10  fsqrts 3, 3
  02d0f14  fmuls 1, 2, 1
  02d0f18  fdivs 1, 1, 3
  02d0f1c  fsub 2, 31, 3
  02d0f20  fsub 5, 31, 3
  02d0f24  fsub 6, 31, 3
  02d0f28  fsub 9, 3, 31
  02d0f2c  fsub 10, 3, 31
  02d0f30  fsub 3, 3, 31
  02d0f34  fmuls 7, 7, 1
  02d0f38  fmuls 4, 4, 1
  02d0f3c  fmuls 1, 8, 1
  02d0f40  fsel 2, 2, 31, 7
  02d0f44  fsel 5, 5, 31, 4
  02d0f48  fsel 6, 6, 31, 1
  02d0f4c  fsel 2, 9, 2, 7
  02d0f50  fsel 4, 10, 5, 4
  02d0f54  fsel 1, 3, 6, 1
  02d0f58  stfs 2, 128(1)
  02d0f5c  stfs 4, 132(1)
  02d0f60  stfs 1, 136(1)
  02d0f64  lfs 3, 0(29)
  02d0f68  fadds 2, 3, 2
  02d0f6c  stfs 2, 128(1)
  02d0f70  lfs 2, 4(29)
  02d0f74  fadds 2, 2, 4
  02d0f78  stfs 2, 132(1)
  02d0f7c  lfs 2, 8(29)
  02d0f80  fadds 1, 2, 1
  02d0f84  stfs 1, 136(1)
  02d0f88  lfs 1, 12(29)
  02d0f8c  stfs 1, 140(1)
  02d0f90  lis 3, 114
  02d0f94  lfs 1, -3052(3)
  02d0f98  fmuls 2, 1, 27
  02d0f9c  bl 0xfcbe8
  02d0fa0  nop
  02d0fa4  lfs 2, 132(1)
  02d0fa8  lfs 3, 128(1)
  02d0fac  fmuls 4, 2, 2
  02d0fb0  lfs 5, 136(1)
  02d0fb4  lis 3, 114
  02d0fb8  fmadds 4, 3, 3, 4
  02d0fbc  lfs 6, -3056(3)
  02d0fc0  fmuls 7, 6, 28
  02d0fc4  fmuls 6, 6, 29
  02d0fc8  fmadds 4, 5, 5, 4
  02d0fcc  fctiwz 7, 7
  02d0fd0  fctiwz 6, 6
  02d0fd4  fsqrts 4, 4
  02d0fd8  stfd 7, 144(1)
  02d0fdc  lwz 3, 148(1)
  02d0fe0  stfd 6, 144(1)
  02d0fe4  lwz 4, 148(1)
  02d0fe8  extsw 3, 3
  02d0fec  extsw 4, 4
  02d0ff0  fdivs 1, 1, 4
  02d0ff4  fsub 6, 31, 4
  02d0ff8  fsub 7, 31, 4
  02d0ffc  fsub 8, 31, 4
  02d1000  fsub 9, 4, 31
  02d1004  fsub 10, 4, 31
  02d1008  fsub 4, 4, 31
  02d100c  fmuls 3, 3, 1
  02d1010  fmuls 2, 2, 1
  02d1014  fmuls 1, 5, 1
  02d1018  fsel 5, 6, 31, 3
  02d101c  fsel 6, 7, 31, 2
  02d1020  fsel 7, 8, 31, 1
  02d1024  fsel 3, 9, 5, 3
  02d1028  fsel 2, 10, 6, 2
  02d102c  fsel 1, 4, 7, 1
  02d1030  stfs 3, 128(1)
  02d1034  stfs 2, 132(1)
  02d1038  stfs 1, 136(1)
  02d103c  bl 0xfe484
  02d1040  nop
  02d1044  lis 5, 32559
  02d1048  fmr 1, 30
  02d104c  ori 6, 3, 0
  02d1050  addic 4, 1, 128
  02d1054  ori 3, 28, 0
  02d1058  ori 5, 5, 20335
  02d105c  bl 0x128248
  02d1060  nop
  02d1064  addic 27, 27, 1
  02d1068  cmpwi 27, 5
  02d106c  bt 0, 0x2d0e5c
  02d1070  ori 3, 31, 0
  02d1074  bl 0xefb38
  02d1078  nop
  02d107c  b 0x2d1268
  02d1080  lis 3, 151
  02d1084  li 5, 0
  02d1088  addic 6, 3, -25376
  02d108c  addic 3, 1, 112
  02d1090  li 7, 0
  02d1094  addic 4, 31, 16
  02d1098  lwz 6, 8320(6)
  02d109c  bl 0x57820
  02d10a0  nop
  02d10a4  cmpwi 3, 0
  02d10a8  bt 2, 0x2d1268
  02d10ac  lis 3, 161
  02d10b0  addic 3, 3, 2368
  02d10b4  lfs 1, 68(3)
  02d10b8  lfs 3, 64(3)
  02d10bc  fmuls 1, 1, 1
  02d10c0  lfs 2, 72(3)
  02d10c4  fmadds 1, 3, 3, 1
  02d10c8  fmadds 1, 2, 2, 1
  02d10cc  fsqrts 1, 1
  02d10d0  fcmpu 0, 1, 31
  02d10d4  bf 2, 0x2d1108
  02d10d8  fmr 2, 31
  02d10dc  lfs 1, 68(3)
  02d10e0  stfs 3, 112(1)
  02d10e4  lfs 3, 72(3)
  02d10e8  stfs 1, 116(1)
  02d10ec  lfs 1, 76(3)
  02d10f0  stfs 3, 120(1)
  02d10f4  stw 30, 120(1)
  02d10f8  stw 30, 116(1)
  02d10fc  stw 30, 112(1)
  02d1100  fmr 3, 2
  02d1104  b 0x2d113c
  02d1108  lis 4, 45
  02d110c  addi 4, 4, 3156
  02d1110  lfs 2, 44(4)
  02d1114  fdivs 31, 2, 1
  02d1118  lfs 2, 68(3)
  02d111c  lfs 4, 72(3)
  02d1120  lfs 1, 76(3)
  02d1124  fmuls 3, 3, 31
  02d1128  fmuls 2, 2, 31
  02d112c  fmuls 31, 4, 31
  02d1130  stfs 3, 112(1)
  02d1134  stfs 2, 116(1)
  02d1138  stfs 31, 120(1)
  02d113c  ori 6, 3, 0
  02d1140  ori 3, 29, 0
  02d1144  addic 5, 6, 64
  02d1148  ori 4, 29, 0
  02d114c  lfs 4, 32(6)
  02d1150  stfs 1, 124(1)
  02d1154  fadds 3, 4, 3
  02d1158  stfs 3, 16(31)
  02d115c  lfs 1, 36(6)
  02d1160  fadds 1, 1, 2
  02d1164  stfs 1, 20(31)
  02d1168  lfs 1, 40(6)
  02d116c  fadds 1, 1, 31
  02d1170  stfs 1, 24(31)
  02d1174  lfs 1, 44(6)
  02d1178  stfs 1, 28(31)
  02d117c  bl 0x500608
  02d1180  nop
  02d1184  lis 3, 45
  02d1188  addi 31, 3, 3156
  02d118c  lfs 1, 48(31)
  02d1190  lfs 2, 52(31)
  02d1194  bl 0xfcbe8
  02d1198  nop
  02d119c  lfs 2, 0(29)
  02d11a0  lfs 3, 4(29)
  02d11a4  fmuls 2, 2, 1
  02d11a8  fmuls 3, 3, 1
  02d11ac  lfs 4, 8(29)
  02d11b0  fmuls 1, 4, 1
  02d11b4  stfs 2, 0(29)
  02d11b8  stfs 3, 4(29)
  02d11bc  lfs 2, 24(31)
  02d11c0  fmuls 1, 1, 2
  02d11c4  stfs 1, 8(29)
  02d11c8  lfs 31, 56(31)
  02d11cc  lfs 30, 60(31)
  02d11d0  fmr 1, 31
  02d11d4  fmr 2, 30
  02d11d8  bl 0xfcbe8
  02d11dc  nop
  02d11e0  lfs 2, 16(29)
  02d11e4  fmuls 1, 2, 1
  02d11e8  bl 0x502648
  02d11ec  nop
  02d11f0  stfs 1, 16(29)
  02d11f4  fmr 2, 30
  02d11f8  fmr 1, 31
  02d11fc  bl 0xfcbe8
  02d1200  nop
  02d1204  lfs 2, 20(29)
  02d1208  fmuls 1, 2, 1
  02d120c  bl 0x502648
  02d1210  nop
  02d1214  lfs 2, 4(29)
  02d1218  lfs 3, 0(29)
  02d121c  fmuls 2, 2, 2
  02d1220  lfs 4, 8(29)
  02d1224  stfs 1, 20(29)
  02d1228  lis 3, 114
  02d122c  fmadds 2, 3, 3, 2
  02d1230  fmadds 1, 4, 4, 2
  02d1234  lfs 2, 8(31)
  02d1238  lfs 3, -3048(3)
  02d123c  fmuls 2, 3, 2
  02d1240  fsqrts 1, 1
  02d1244  fcmpu 0, 1, 2
  02d1248  cror 6, 1, 2
  02d124c  bt 6, 0x2d1268
  02d1250  stw 30, 12(29)
  02d1254  stw 30, 8(29)
  02d1258  stw 30, 4(29)
  02d125c  stw 30, 0(29)
  02d1260  stw 30, 16(29)
  02d1264  stw 30, 20(29)
  02d1268  ld 0, 288(1)
  02d126c  mtlr 0
  02d1270  lfd 23, 200(1)
  02d1274  lfd 24, 208(1)
  02d1278  lfd 25, 216(1)
  02d127c  lfd 26, 224(1)
  02d1280  lfd 27, 232(1)
  02d1284  lfd 28, 240(1)
  02d1288  lfd 29, 248(1)
  02d128c  lfd 30, 256(1)
  02d1290  lfd 31, 264(1)
  02d1294  ld 27, 160(1)
  02d1298  ld 28, 168(1)
  02d129c  ld 29, 176(1)
  02d12a0  ld 30, 184(1)
  02d12a4  ld 31, 192(1)
  02d12a8  addi 1, 1, 272
  02d12ac  blr

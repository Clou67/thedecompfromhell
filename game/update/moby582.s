# game/update/moby582.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003d0b20:   # 0x3d0b20, 0x278 bytes
  03d0b20  stdu 1, -192(1)
  03d0b24  mflr 0
  03d0b28  std 0, 208(1)
  03d0b2c  li 6, -66
  03d0b30  std 29, 168(1)
  03d0b34  lhz 8, 52(3)
  03d0b38  ori 29, 4, 0
  03d0b3c  std 28, 160(1)
  03d0b40  li 7, 27
  03d0b44  lwz 28, 120(3)
  03d0b48  and 4, 8, 6
  03d0b4c  std 31, 184(1)
  03d0b50  lbz 6, 83(3)
  03d0b54  ori 31, 3, 0
  03d0b58  cmpwi 6, 11
  03d0b5c  std 30, 176(1)
  03d0b60  sth 4, 52(3)
  03d0b64  ori 30, 5, 0
  03d0b68  stb 7, 32(3)
  03d0b6c  bt 2, 0x3d0b88
  03d0b70  ori 3, 31, 0
  03d0b74  li 4, 11
  03d0b78  li 5, 0
  03d0b7c  li 6, 1
  03d0b80  bl 0xfddc0
  03d0b84  nop
  03d0b88  lfs 1, 0(29)
  03d0b8c  lis 5, 61
  03d0b90  stfs 1, 16(31)
  03d0b94  lfs 1, 4(29)
  03d0b98  stfs 1, 20(31)
  03d0b9c  lfs 1, 8(29)
  03d0ba0  stfs 1, 24(31)
  03d0ba4  lfs 1, 12(29)
  03d0ba8  stfs 1, 28(31)
  03d0bac  lfs 1, 0(30)
  03d0bb0  stfs 1, 64(28)
  03d0bb4  lfs 1, 4(30)
  03d0bb8  stfs 1, 68(28)
  03d0bbc  addi 5, 5, 2840
  03d0bc0  lfs 1, 8(30)
  03d0bc4  stfs 1, 72(28)
  03d0bc8  lfs 1, 12(30)
  03d0bcc  lis 6, 115
  03d0bd0  stfs 1, 76(28)
  03d0bd4  lwz 3, 0(30)
  03d0bd8  lwz 4, 4(30)
  03d0bdc  lfs 1, 0(30)
  03d0be0  lfs 2, 4(30)
  03d0be4  fabs 5, 1
  03d0be8  fabs 6, 2
  03d0bec  rlwinm 4, 4, 3, 29, 29
  03d0bf0  addic 6, 6, 22784
  03d0bf4  fsubs 1, 5, 6
  03d0bf8  stfs 1, 112(1)
  03d0bfc  lfs 1, 0(5)
  03d0c00  lwz 5, 112(1)
  03d0c04  lfs 2, 112(1)
  03d0c08  rlwimi 4, 5, 2, 30, 30
  03d0c0c  fsub 4, 2, 1
  03d0c10  fsub 7, 2, 1
  03d0c14  rlwimi 4, 3, 4, 28, 28
  03d0c18  ori 3, 6, 0
  03d0c1c  rlwimi 3, 4, 2, 26, 28
  03d0c20  slwi 4, 4, 2
  03d0c24  clrldi 3, 3, 32
  03d0c28  fsel 4, 4, 5, 6
  03d0c2c  lfsx 3, 6, 4
  03d0c30  lfs 2, 4(3)
  03d0c34  fsel 5, 7, 6, 5
  03d0c38  fcmpu 0, 4, 1
  03d0c3c  bt 1, 0x3d0c44
  03d0c40  b 0x3d0d68
  03d0c44  fsubs 6, 5, 4
  03d0c48  fadds 4, 5, 4
  03d0c4c  addic 6, 1, 16
  03d0c50  li 3, 2
  03d0c54  addic 4, 6, 116
  03d0c58  addic 5, 6, 100
  03d0c5c  mtctr 3
  03d0c60  fdivs 4, 6, 4
  03d0c64  fmuls 6, 4, 4
  03d0c68  stfs 4, 128(1)
  03d0c6c  stfs 4, 120(1)
  03d0c70  stfs 4, 124(1)
  03d0c74  stfs 4, 116(1)
  03d0c78  lfs 7, 128(1)
  03d0c7c  lfs 8, 120(1)
  03d0c80  lfs 9, 124(1)
  03d0c84  fmuls 4, 6, 6
  03d0c88  fmuls 8, 8, 6
  03d0c8c  fmuls 7, 7, 4
  03d0c90  fmuls 5, 4, 4
  03d0c94  fmuls 4, 9, 4
  03d0c98  stfs 8, 120(1)
  03d0c9c  fmuls 6, 7, 6
  03d0ca0  stfs 4, 124(1)
  03d0ca4  stfs 6, 128(1)
  03d0ca8  lfs 4, 100(6)
  03d0cac  fmuls 4, 4, 5
  03d0cb0  stfs 4, 116(6)
  03d0cb4  lfs 4, 4(5)
  03d0cb8  addic 5, 5, 8
  03d0cbc  fmuls 4, 4, 5
  03d0cc0  addic 6, 6, 8
  03d0cc4  stfs 4, 4(4)
  03d0cc8  addic 4, 4, 8
  03d0ccc  bdnz 0x3d0ca8
  03d0cd0  ori 7, 1, 0
  03d0cd4  li 4, 4
  03d0cd8  lis 6, 115
  03d0cdc  addic 5, 7, 116
  03d0ce0  mtctr 4
  03d0ce4  addic 6, 6, 22752
  03d0ce8  ori 4, 5, 0
  03d0cec  lfs 4, 116(7)
  03d0cf0  lfs 5, 0(6)
  03d0cf4  fmuls 4, 4, 5
  03d0cf8  lfs 5, 4(6)
  03d0cfc  addic 6, 6, 8
  03d0d00  stfs 4, 116(7)
  03d0d04  lfs 4, 4(5)
  03d0d08  addic 7, 7, 8
  03d0d0c  fmuls 4, 4, 5
  03d0d10  stfs 4, 4(5)
  03d0d14  addic 5, 5, 8
  03d0d18  bdnz 0x3d0cec
  03d0d1c  ori 5, 3, 0
  03d0d20  ori 3, 1, 0
  03d0d24  mtctr 5
  03d0d28  lfs 4, 116(3)
  03d0d2c  fadds 1, 1, 4
  03d0d30  lfs 4, 4(4)
  03d0d34  addic 3, 3, 16
  03d0d38  lfs 5, 8(4)
  03d0d3c  lfs 6, 12(4)
  03d0d40  addic 4, 4, 16
  03d0d44  fadds 1, 1, 4
  03d0d48  fadds 1, 1, 5
  03d0d4c  fadds 1, 1, 6
  03d0d50  bdnz 0x3d0d28
  03d0d54  lis 3, 61
  03d0d58  addi 3, 3, 2840
  03d0d5c  lfs 4, 4(3)
  03d0d60  fadds 1, 1, 4
  03d0d64  fmadds 1, 1, 3, 2
  03d0d68  ori 3, 31, 0
  03d0d6c  stfs 1, 72(31)
  03d0d70  bl 0xf31a8
  03d0d74  nop
  03d0d78  ld 0, 208(1)
  03d0d7c  mtlr 0
  03d0d80  ld 28, 160(1)
  03d0d84  ld 29, 168(1)
  03d0d88  ld 30, 176(1)
  03d0d8c  ld 31, 184(1)
  03d0d90  addi 1, 1, 192
  03d0d94  blr

M582_003d0d98:   # 0x3d0d98, 0x58 bytes
  03d0d98  stdu 1, -128(1)
  03d0d9c  mflr 0
  03d0da0  std 0, 144(1)
  03d0da4  std 31, 120(1)
  03d0da8  ori 31, 3, 0
  03d0dac  bl 0x48a718
  03d0db0  nop
  03d0db4  cmpwi 3, 0
  03d0db8  bt 2, 0x3d0dc8
  03d0dbc  li 4, 9
  03d0dc0  stb 4, 32(31)
  03d0dc4  b 0x3d0ddc
  03d0dc8  lbz 4, 32(31)
  03d0dcc  cmpwi 4, 9
  03d0dd0  bf 2, 0x3d0ddc
  03d0dd4  li 4, 1
  03d0dd8  stb 4, 32(31)
  03d0ddc  ld 0, 144(1)
  03d0de0  mtlr 0
  03d0de4  ld 31, 120(1)
  03d0de8  addi 1, 1, 128
  03d0dec  blr

M582_003d0df0:   # 0x3d0df0, 0x8c bytes
  03d0df0  stdu 1, -128(1)
  03d0df4  mflr 0
  03d0df8  std 0, 144(1)
  03d0dfc  std 31, 120(1)
  03d0e00  ori 31, 3, 0
  03d0e04  bl 0x48aa70
  03d0e08  nop
  03d0e0c  cmpwi 3, 0
  03d0e10  bt 2, 0x3d0e54
  03d0e14  li 4, 9
  03d0e18  lwz 5, 120(31)
  03d0e1c  stb 4, 32(31)
  03d0e20  lwz 31, 648(5)
  03d0e24  cmpwi 31, -1
  03d0e28  bf 1, 0x3d0e68
  03d0e2c  lis 4, 164
  03d0e30  slwi 5, 31, 8
  03d0e34  lwz 4, -28512(4)
  03d0e38  addc 4, 4, 5
  03d0e3c  clrldi 4, 4, 32
  03d0e40  lwz 4, 120(4)
  03d0e44  lwz 5, 332(4)
  03d0e48  addic 5, 5, -1
  03d0e4c  stw 5, 332(4)
  03d0e50  b 0x3d0e68
  03d0e54  lbz 4, 32(31)
  03d0e58  cmpwi 4, 9
  03d0e5c  bf 2, 0x3d0e68
  03d0e60  li 4, 1
  03d0e64  stb 4, 32(31)
  03d0e68  ld 0, 144(1)
  03d0e6c  mtlr 0
  03d0e70  ld 31, 120(1)
  03d0e74  addi 1, 1, 128
  03d0e78  blr

M582_003d0e7c:   # 0x3d0e7c, 0x58 bytes
  03d0e7c  stdu 1, -128(1)
  03d0e80  mflr 0
  03d0e84  std 0, 144(1)
  03d0e88  std 31, 120(1)
  03d0e8c  ori 31, 3, 0
  03d0e90  bl 0x48acb8
  03d0e94  nop
  03d0e98  cmpwi 3, 0
  03d0e9c  bt 2, 0x3d0eac
  03d0ea0  li 4, 9
  03d0ea4  stb 4, 32(31)
  03d0ea8  b 0x3d0ec0
  03d0eac  lbz 4, 32(31)
  03d0eb0  cmpwi 4, 9
  03d0eb4  bf 2, 0x3d0ec0
  03d0eb8  li 4, 1
  03d0ebc  stb 4, 32(31)
  03d0ec0  ld 0, 144(1)
  03d0ec4  mtlr 0
  03d0ec8  ld 31, 120(1)
  03d0ecc  addi 1, 1, 128
  03d0ed0  blr

M582_003d0ed4:   # 0x3d0ed4, 0x38 bytes
  03d0ed4  stdu 1, -128(1)
  03d0ed8  mflr 0
  03d0edc  std 0, 144(1)
  03d0ee0  std 31, 120(1)
  03d0ee4  ori 31, 3, 0
  03d0ee8  bl 0x48afe8
  03d0eec  nop
  03d0ef0  li 4, 9
  03d0ef4  stb 4, 32(31)
  03d0ef8  ld 0, 144(1)
  03d0efc  mtlr 0
  03d0f00  ld 31, 120(1)
  03d0f04  addi 1, 1, 128
  03d0f08  blr

M582_003d0f0c:   # 0x3d0f0c, 0x40 bytes
  03d0f0c  cmpwi 3, 0
  03d0f10  bt 2, 0x3d0f44
  03d0f14  li 4, 0
  03d0f18  lwz 3, 120(3)
  03d0f1c  li 5, 0
  03d0f20  subc 4, 4, 3
  03d0f24  addic 3, 3, 96
  03d0f28  cntlzw 4, 4
  03d0f2c  subc 5, 5, 3
  03d0f30  sldi 4, 4, 58
  03d0f34  sradi 4, 4, 63
  03d0f38  and 4, 4, 5
  03d0f3c  addc 3, 3, 4
  03d0f40  b 0x3d0f48
  03d0f44  li 3, 0
  03d0f48  blr

M582_003d0f50:   # 0x3d0f50, 0x1d0 bytes
  03d0f50  stdu 1, -160(1)
  03d0f54  mflr 0
  03d0f58  std 0, 176(1)
  03d0f5c  std 30, 144(1)
  03d0f60  std 31, 152(1)
  03d0f64  lbz 30, 33(3)
  03d0f68  std 29, 136(1)
  03d0f6c  ori 31, 3, 0
  03d0f70  lwz 29, 120(3)
  03d0f74  std 28, 128(1)
  03d0f78  std 27, 120(1)
  03d0f7c  cmpwi 30, 255
  03d0f80  bf 2, 0x3d0f8c
  03d0f84  li 30, 0
  03d0f88  b 0x3d1010
  03d0f8c  lis 3, 165
  03d0f90  rlwinm 4, 30, 2, 22, 29
  03d0f94  addic 3, 3, -28284
  03d0f98  li 30, 0
  03d0f9c  lwzx 28, 3, 4
  03d0fa0  lis 3, 164
  03d0fa4  lhz 27, 0(28)
  03d0fa8  rlwinm 27, 27, 8, 9, 23
  03d0fac  lwz 3, -28512(3)
  03d0fb0  addc 4, 3, 27
  03d0fb4  clrldi 4, 4, 32
  03d0fb8  lhz 5, 166(4)
  03d0fbc  cmpwi 5, 668
  03d0fc0  bf 2, 0x3d0ffc
  03d0fc4  lbz 4, 32(4)
  03d0fc8  cmpwi 1, 30, 0
  03d0fcc  cmpwi 4, 127
  03d0fd0  bf 0, 0x3d0ffc
  03d0fd4  bt 6, 0x3d0ff8
  03d0fd8  li 3, 255
  03d0fdc  bl 0xfc620
  03d0fe0  nop
  03d0fe4  clrlwi 3, 3, 31
  03d0fe8  cmpwi 3, 0
  03d0fec  bt 2, 0x3d0ffc
  03d0ff0  lis 3, 164
  03d0ff4  lwz 3, -28512(3)
  03d0ff8  addc 30, 3, 27
  03d0ffc  lhz 3, 0(28)
  03d1000  addic 28, 28, 2
  03d1004  extsh 3, 3
  03d1008  cmpwi 3, 0
  03d100c  bf 0, 0x3d0fa0
  03d1010  cmpwi 30, 0
  03d1014  stw 30, 636(29)
  03d1018  bt 2, 0x3d1068
  03d101c  li 3, 26
  03d1020  li 4, 0
  03d1024  lis 5, 61
  03d1028  stb 3, 32(31)
  03d102c  stw 4, 88(31)
  03d1030  lfs 1, 544(29)
  03d1034  addi 3, 5, 3916
  03d1038  stfs 1, 16(31)
  03d103c  lfs 1, 548(29)
  03d1040  stfs 1, 20(31)
  03d1044  lfs 1, 552(29)
  03d1048  stfs 1, 24(31)
  03d104c  lfs 2, 556(29)
  03d1050  stfs 2, 28(31)
  03d1054  lfs 2, 0(3)
  03d1058  stw 4, 148(31)
  03d105c  fsubs 1, 1, 2
  03d1060  stfs 1, 24(31)
  03d1064  b 0x3d10fc
  03d1068  lis 6, 132
  03d106c  ori 3, 31, 0
  03d1070  li 4, 0
  03d1074  li 5, 1
  03d1078  lwz 6, 25660(6)
  03d107c  extsw 6, 6
  03d1080  bl 0x3cd150
  03d1084  lis 6, 132
  03d1088  ori 3, 31, 0
  03d108c  li 4, 2
  03d1090  li 5, 3
  03d1094  lwz 6, 25656(6)
  03d1098  extsw 6, 6
  03d109c  bl 0x3cd150
  03d10a0  lis 30, 132
  03d10a4  ori 3, 31, 0
  03d10a8  li 4, 4
  03d10ac  li 5, 5
  03d10b0  lwz 6, 25664(30)
  03d10b4  extsw 6, 6
  03d10b8  bl 0x3cd150
  03d10bc  lwz 6, 25664(30)
  03d10c0  ori 3, 31, 0
  03d10c4  extsw 6, 6
  03d10c8  li 4, 6
  03d10cc  li 5, 7
  03d10d0  bl 0x3cd150
  03d10d4  lis 6, 132
  03d10d8  ori 3, 31, 0
  03d10dc  li 4, 8
  03d10e0  li 5, 9
  03d10e4  lwz 6, 25668(6)
  03d10e8  extsw 6, 6
  03d10ec  bl 0x3cd150
  03d10f0  ori 3, 31, 0
  03d10f4  bl 0xefb38
  03d10f8  nop
  03d10fc  ld 0, 176(1)
  03d1100  mtlr 0
  03d1104  ld 27, 120(1)
  03d1108  ld 28, 128(1)
  03d110c  ld 29, 136(1)
  03d1110  ld 30, 144(1)
  03d1114  ld 31, 152(1)
  03d1118  addi 1, 1, 160
  03d111c  blr

M582_003d1128:   # 0x3d1128, 0x50 bytes
  03d1128  lis 3, 61
  03d112c  vspltisw 2, -1
  03d1130  lis 4, 114
  03d1134  addi 3, 3, 4384
  03d1138  li 5, -3056
  03d113c  vslw 2, 2, 2
  03d1140  li 6, -24704
  03d1144  <unknown>
  03d1148  <unknown>
  03d114c  lis 3, 132
  03d1150  vspltw 3, 3, 0
  03d1154  lis 4, 1
  03d1158  addic 3, 3, 25676
  03d115c  lis 5, 269
  03d1160  vmaddfp 2, 4, 3, 2
  03d1164  stw 4, 72(3)
  03d1168  vctsxs 2, 2, 0
  03d116c  vspltw 2, 2, 0
  03d1170  stvewx 2, 6, 5
  03d1174  blr

UpdateMoby_582:   # 0x3d1180, 0x358 bytes
  03d1180  stdu 1, -224(1)
  03d1184  mflr 0
  03d1188  std 0, 240(1)
  03d118c  lbz 5, 32(3)
  03d1190  lwz 4, 120(3)
  03d1194  cmpwi 5, 0
  03d1198  cmpwi 1, 5, 1
  03d119c  std 31, 216(1)
  03d11a0  std 30, 208(1)
  03d11a4  std 29, 200(1)
  03d11a8  std 28, 192(1)
  03d11ac  std 27, 184(1)
  03d11b0  std 26, 176(1)
  03d11b4  std 25, 168(1)
  03d11b8  std 24, 160(1)
  03d11bc  std 23, 152(1)
  03d11c0  std 22, 144(1)
  03d11c4  std 21, 136(1)
  03d11c8  std 20, 128(1)
  03d11cc  std 19, 120(1)
  03d11d0  std 18, 112(1)
  03d11d4  cmpwi 6, 5, -1
  03d11d8  bt 1, 0x3d11e4
  03d11dc  bf 25, 0x3d1490
  03d11e0  b 0x3d11ec
  03d11e4  bf 5, 0x3d13b4
  03d11e8  b 0x3d1490
  03d11ec  ori 10, 3, 0
  03d11f0  lis 3, 61
  03d11f4  li 31, 255
  03d11f8  addi 30, 3, 4472
  03d11fc  li 12, 1
  03d1200  lis 5, 162
  03d1204  li 11, 0
  03d1208  lis 6, 162
  03d120c  lfs 1, 0(30)
  03d1210  stb 31, 48(10)
  03d1214  addic 7, 4, 32
  03d1218  stb 12, 32(10)
  03d121c  addic 8, 4, 4
  03d1220  addic 9, 4, 36
  03d1224  lwz 10, -22432(5)
  03d1228  ori 3, 11, 0
  03d122c  ori 26, 10, 0
  03d1230  ori 12, 3, 0
  03d1234  ori 27, 26, 0
  03d1238  cmpwi 27, 0
  03d123c  bf 1, 0x3d136c
  03d1240  sldi 29, 11, 3
  03d1244  ori 25, 3, 0
  03d1248  addc 24, 29, 7
  03d124c  addc 23, 29, 8
  03d1250  addc 22, 29, 9
  03d1254  clrldi 24, 24, 32
  03d1258  clrldi 23, 23, 32
  03d125c  clrldi 22, 22, 32
  03d1260  lwz 30, -22436(6)
  03d1264  cmpwi 1, 27, 0
  03d1268  addc 31, 30, 25
  03d126c  clrldi 28, 31, 32
  03d1270  lwz 21, 12(28)
  03d1274  cmpwi 21, 0
  03d1278  bt 2, 0x3d1358
  03d127c  extsw 21, 29
  03d1280  stwx 31, 4, 21
  03d1284  lfs 2, 12(28)
  03d1288  ori 31, 3, 0
  03d128c  stfs 2, 0(24)
  03d1290  bf 5, 0x3d1358
  03d1294  ori 21, 30, 0
  03d1298  lwz 20, 12(21)
  03d129c  cmpwi 20, 0
  03d12a0  bt 2, 0x3d1348
  03d12a4  lwz 20, 16(21)
  03d12a8  lwz 19, 16(28)
  03d12ac  lwz 18, 0(20)
  03d12b0  lfs 2, 20(19)
  03d12b4  slwi 18, 18, 4
  03d12b8  lfs 3, 16(19)
  03d12bc  addc 20, 20, 18
  03d12c0  clrldi 20, 20, 32
  03d12c4  lfs 4, 4(20)
  03d12c8  lfs 5, 0(20)
  03d12cc  fsubs 2, 2, 4
  03d12d0  fsubs 3, 3, 5
  03d12d4  lfs 4, 24(19)
  03d12d8  lfs 5, 8(20)
  03d12dc  fsubs 4, 4, 5
  03d12e0  fmuls 2, 2, 2
  03d12e4  fmadds 2, 3, 3, 2
  03d12e8  fmadds 2, 4, 4, 2
  03d12ec  fsqrts 2, 2
  03d12f0  fcmpu 0, 2, 1
  03d12f4  cror 6, 1, 2
  03d12f8  bt 6, 0x3d1348
  03d12fc  slwi 10, 31, 5
  03d1300  addic 24, 24, 8
  03d1304  addc 10, 30, 10
  03d1308  addic 29, 29, 8
  03d130c  clrldi 31, 10, 32
  03d1310  addic 11, 11, 1
  03d1314  stw 10, 0(23)
  03d1318  addic 23, 23, 8
  03d131c  lfs 2, 12(31)
  03d1320  stfs 2, 0(22)
  03d1324  stw 3, 12(31)
  03d1328  lwz 10, -22436(6)
  03d132c  addic 22, 22, 8
  03d1330  addc 10, 10, 25
  03d1334  clrldi 10, 10, 32
  03d1338  stw 3, 12(10)
  03d133c  lwz 26, -22432(5)
  03d1340  ori 10, 26, 0
  03d1344  b 0x3d1358
  03d1348  addic 31, 31, 1
  03d134c  addic 21, 21, 32
  03d1350  cmpw 27, 31
  03d1354  bt 1, 0x3d1298
  03d1358  ori 27, 26, 0
  03d135c  addic 12, 12, 1
  03d1360  addic 25, 25, 32
  03d1364  cmpw 12, 27
  03d1368  bt 0, 0x3d1260
  03d136c  cmpwi 11, 4
  03d1370  bt 0, 0x3d122c
  03d1374  ori 31, 3, 0
  03d1378  ori 30, 4, 0
  03d137c  lis 3, 165
  03d1380  lwz 4, 64(30)
  03d1384  slwi 4, 4, 7
  03d1388  lwz 3, 7128(3)
  03d138c  addc 3, 3, 4
  03d1390  addic 3, 3, 48
  03d1394  clrldi 3, 3, 32
  03d1398  bl 0x46615c
  03d139c  nop
  03d13a0  addic 31, 31, 1
  03d13a4  addic 30, 30, 4
  03d13a8  cmpwi 31, 2
  03d13ac  bt 0, 0x3d137c
  03d13b0  b 0x3d1490
  03d13b4  ori 5, 4, 0
  03d13b8  lis 4, 151
  03d13bc  li 7, 5
  03d13c0  addic 4, 4, -25376
  03d13c4  li 3, 0
  03d13c8  ori 6, 3, 0
  03d13cc  sth 7, 458(4)
  03d13d0  lwz 7, 8332(4)
  03d13d4  cmpwi 7, 15
  03d13d8  bf 2, 0x3d1400
  03d13dc  lwz 8, 0(5)
  03d13e0  lwz 7, 1376(4)
  03d13e4  lwz 8, 16(8)
  03d13e8  cmpw 7, 8
  03d13ec  bt 2, 0x3d1480
  03d13f0  lwz 8, 4(5)
  03d13f4  lwz 8, 16(8)
  03d13f8  cmpw 7, 8
  03d13fc  bt 2, 0x3d1480
  03d1400  lwz 7, 0(5)
  03d1404  lwz 8, 4(5)
  03d1408  lfs 1, 132(4)
  03d140c  lwz 9, 16(7)
  03d1410  lwz 8, 16(8)
  03d1414  lfs 2, 128(4)
  03d1418  lfs 3, 20(9)
  03d141c  lfs 4, 20(8)
  03d1420  fsubs 3, 1, 3
  03d1424  lfs 5, 16(9)
  03d1428  fsubs 1, 1, 4
  03d142c  lfs 4, 16(8)
  03d1430  fsubs 5, 2, 5
  03d1434  fsubs 2, 2, 4
  03d1438  fmuls 3, 3, 3
  03d143c  fmuls 1, 1, 1
  03d1440  fmadds 3, 5, 5, 3
  03d1444  fmadds 1, 2, 2, 1
  03d1448  fsqrts 2, 3
  03d144c  fsqrts 1, 1
  03d1450  fcmpu 0, 2, 1
  03d1454  cror 6, 1, 2
  03d1458  bt 6, 0x3d1470
  03d145c  lfs 1, 32(5)
  03d1460  stfs 1, 12(7)
  03d1464  lwz 7, 4(5)
  03d1468  stw 6, 12(7)
  03d146c  b 0x3d1480
  03d1470  stw 6, 12(7)
  03d1474  lwz 7, 4(5)
  03d1478  lfs 1, 36(5)
  03d147c  stfs 1, 12(7)
  03d1480  addic 3, 3, 1
  03d1484  addic 5, 5, 8
  03d1488  cmpwi 3, 4
  03d148c  bt 0, 0x3d13d0
  03d1490  ld 0, 240(1)
  03d1494  mtlr 0
  03d1498  ld 18, 112(1)
  03d149c  ld 19, 120(1)
  03d14a0  ld 20, 128(1)
  03d14a4  ld 21, 136(1)
  03d14a8  ld 22, 144(1)
  03d14ac  ld 23, 152(1)
  03d14b0  ld 24, 160(1)
  03d14b4  ld 25, 168(1)
  03d14b8  ld 26, 176(1)
  03d14bc  ld 27, 184(1)
  03d14c0  ld 28, 192(1)
  03d14c4  ld 29, 200(1)
  03d14c8  ld 30, 208(1)
  03d14cc  ld 31, 216(1)
  03d14d0  addi 1, 1, 224
  03d14d4  blr

# game/update/moby196.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_196:   # 0x2e4af8, 0x534 bytes
  02e4af8  stdu 1, -208(1)
  02e4afc  mflr 0
  02e4b00  std 0, 224(1)
  02e4b04  stfd 31, 200(1)
  02e4b08  std 31, 192(1)
  02e4b0c  std 30, 184(1)
  02e4b10  ori 31, 3, 0
  02e4b14  li 30, 0
  02e4b18  ori 3, 30, 0
  02e4b1c  std 29, 176(1)
  02e4b20  lhz 4, 166(31)
  02e4b24  lwz 29, 120(31)
  02e4b28  cmpwi 4, 196
  02e4b2c  cmpwi 1, 4, 1958
  02e4b30  bt 2, 0x2e4b38
  02e4b34  bf 6, 0x2e4b3c
  02e4b38  li 30, 1
  02e4b3c  lwz 4, 16(29)
  02e4b40  cmpwi 4, -1
  02e4b44  bf 2, 0x2e4b70
  02e4b48  lwz 5, 24(29)
  02e4b4c  cmpwi 5, -1
  02e4b50  bt 2, 0x2e4b60
  02e4b54  lwz 5, 28(29)
  02e4b58  cmpwi 5, -1
  02e4b5c  bf 2, 0x2e4b70
  02e4b60  ori 3, 31, 0
  02e4b64  bl 0xefb38
  02e4b68  nop
  02e4b6c  b 0x2e500c
  02e4b70  lbz 5, 32(31)
  02e4b74  cmpwi 5, 6
  02e4b78  cmpwi 1, 5, 5
  02e4b7c  cmpwi 6, 5, 4
  02e4b80  cmpwi 7, 5, 3
  02e4b84  bt 2, 0x2e4e84
  02e4b88  bt 6, 0x2e4e3c
  02e4b8c  bt 26, 0x2e4dec
  02e4b90  bt 30, 0x2e500c
  02e4b94  cmpwi 5, 2
  02e4b98  cmpwi 1, 30, 0
  02e4b9c  bt 2, 0x2e4c48
  02e4ba0  cmpwi 5, 1
  02e4ba4  bt 2, 0x2e4c00
  02e4ba8  cmpwi 5, 0
  02e4bac  bf 2, 0x2e500c
  02e4bb0  li 3, 0
  02e4bb4  lfs 1, 16(31)
  02e4bb8  li 5, 1
  02e4bbc  subc 3, 3, 4
  02e4bc0  li 4, 4
  02e4bc4  cntlzw 3, 3
  02e4bc8  stfs 1, 0(29)
  02e4bcc  lfs 1, 20(31)
  02e4bd0  subc 4, 4, 5
  02e4bd4  sldi 3, 3, 58
  02e4bd8  stfs 1, 4(29)
  02e4bdc  sradi 3, 3, 63
  02e4be0  lfs 1, 24(31)
  02e4be4  and 3, 3, 4
  02e4be8  stfs 1, 8(29)
  02e4bec  lfs 1, 28(31)
  02e4bf0  addc 3, 5, 3
  02e4bf4  stfs 1, 12(29)
  02e4bf8  stb 3, 32(31)
  02e4bfc  b 0x2e500c
  02e4c00  lis 3, 164
  02e4c04  slwi 4, 4, 8
  02e4c08  cmpwi 1, 30, 0
  02e4c0c  lwz 3, -28512(3)
  02e4c10  addc 3, 3, 4
  02e4c14  clrldi 3, 3, 32
  02e4c18  lbz 3, 32(3)
  02e4c1c  cmpwi 3, 4
  02e4c20  bf 2, 0x2e500c
  02e4c24  bt 6, 0x2e4c3c
  02e4c28  li 3, 0
  02e4c2c  li 4, 0
  02e4c30  ori 5, 31, 0
  02e4c34  bl 0x15d12c
  02e4c38  nop
  02e4c3c  li 3, 2
  02e4c40  stb 3, 32(31)
  02e4c44  b 0x2e500c
  02e4c48  lis 4, 46
  02e4c4c  lfs 1, 44(31)
  02e4c50  addi 4, 4, 19144
  02e4c54  lfs 31, 0(4)
  02e4c58  lwz 5, 36(31)
  02e4c5c  fmuls 1, 1, 31
  02e4c60  lfs 2, 36(5)
  02e4c64  lfs 6, 4(4)
  02e4c68  lis 5, 114
  02e4c6c  fdivs 1, 1, 2
  02e4c70  lfs 2, 20(29)
  02e4c74  lfs 3, 8(4)
  02e4c78  lfs 5, -3052(5)
  02e4c7c  fmuls 1, 1, 6
  02e4c80  fmuls 1, 1, 5
  02e4c84  bf 6, 0x2e4c94
  02e4c88  lis 4, 46
  02e4c8c  addi 4, 4, 19144
  02e4c90  lfs 3, 12(4)
  02e4c94  fmadds 1, 1, 3, 2
  02e4c98  ori 6, 3, 0
  02e4c9c  lis 3, 46
  02e4ca0  addi 3, 3, 19144
  02e4ca4  addic 5, 1, 112
  02e4ca8  ori 4, 29, 0
  02e4cac  stfs 1, 20(29)
  02e4cb0  lfs 2, 16(3)
  02e4cb4  lfs 3, 72(31)
  02e4cb8  lfs 4, 20(3)
  02e4cbc  fadds 2, 3, 2
  02e4cc0  lfs 5, 24(3)
  02e4cc4  fsubs 6, 4, 3
  02e4cc8  fsubs 4, 4, 2
  02e4ccc  fsub 8, 3, 6
  02e4cd0  fsubs 7, 5, 2
  02e4cd4  fsubs 5, 5, 3
  02e4cd8  fsub 9, 2, 4
  02e4cdc  fsel 3, 8, 6, 3
  02e4ce0  fsel 2, 9, 4, 2
  02e4ce4  fsub 6, 5, 3
  02e4ce8  lfs 4, 28(3)
  02e4cec  lfs 8, 32(3)
  02e4cf0  fsub 9, 7, 2
  02e4cf4  fsel 3, 6, 5, 3
  02e4cf8  lfs 5, 36(3)
  02e4cfc  fsel 2, 9, 7, 2
  02e4d00  fmuls 6, 3, 3
  02e4d04  lfs 7, 40(3)
  02e4d08  addic 3, 1, 128
  02e4d0c  fmuls 9, 2, 2
  02e4d10  fmuls 10, 6, 3
  02e4d14  fmuls 11, 9, 2
  02e4d18  fmuls 12, 6, 10
  02e4d1c  fmadds 3, 10, 4, 3
  02e4d20  fmuls 10, 9, 11
  02e4d24  fmadds 2, 11, 4, 2
  02e4d28  fmuls 4, 6, 12
  02e4d2c  fmadds 3, 12, 8, 3
  02e4d30  fmuls 11, 9, 10
  02e4d34  fmadds 2, 10, 8, 2
  02e4d38  fmuls 6, 6, 4
  02e4d3c  fmadds 3, 4, 5, 3
  02e4d40  fmuls 4, 9, 11
  02e4d44  fmadds 2, 11, 5, 2
  02e4d48  fmadds 3, 6, 7, 3
  02e4d4c  fmadds 2, 4, 7, 2
  02e4d50  fmuls 1, 2, 1
  02e4d54  stfs 1, 112(1)
  02e4d58  lfs 1, 20(29)
  02e4d5c  stw 6, 120(1)
  02e4d60  fmuls 1, 3, 1
  02e4d64  stfs 1, 116(1)
  02e4d68  bl 0x5023f0
  02e4d6c  nop
  02e4d70  lfs 1, 128(1)
  02e4d74  lfs 2, 44(31)
  02e4d78  stfs 1, 16(31)
  02e4d7c  lfs 1, 132(1)
  02e4d80  fmuls 2, 2, 31
  02e4d84  stfs 1, 20(31)
  02e4d88  lfs 1, 136(1)
  02e4d8c  lwz 3, 36(31)
  02e4d90  stfs 1, 24(31)
  02e4d94  lfs 1, 140(1)
  02e4d98  stfs 1, 28(31)
  02e4d9c  lfs 1, 36(3)
  02e4da0  fdivs 1, 2, 1
  02e4da4  lfs 2, 20(29)
  02e4da8  fabs 2, 2
  02e4dac  fcmpu 0, 2, 1
  02e4db0  cror 6, 0, 2
  02e4db4  bt 6, 0x2e500c
  02e4db8  li 4, -1
  02e4dbc  lwz 6, 16(29)
  02e4dc0  li 3, 5
  02e4dc4  li 5, 3
  02e4dc8  subc 4, 4, 6
  02e4dcc  subc 3, 3, 5
  02e4dd0  cntlzw 4, 4
  02e4dd4  sldi 4, 4, 58
  02e4dd8  sradi 4, 4, 63
  02e4ddc  and 3, 4, 3
  02e4de0  addc 3, 5, 3
  02e4de4  stb 3, 32(31)
  02e4de8  b 0x2e500c
  02e4dec  ori 4, 3, 0
  02e4df0  lis 3, 151
  02e4df4  addic 3, 3, -25248
  02e4df8  stw 4, 20(29)
  02e4dfc  lwz 4, 24(29)
  02e4e00  extsw 4, 4
  02e4e04  bl 0x110b70
  02e4e08  nop
  02e4e0c  cmpwi 3, 0
  02e4e10  bt 2, 0x2e500c
  02e4e14  cmpwi 30, 0
  02e4e18  bt 2, 0x2e4e30
  02e4e1c  li 3, 0
  02e4e20  li 4, 0
  02e4e24  ori 5, 31, 0
  02e4e28  bl 0x15d12c
  02e4e2c  nop
  02e4e30  li 3, 2
  02e4e34  stb 3, 32(31)
  02e4e38  b 0x2e500c
  02e4e3c  lis 3, 151
  02e4e40  lwz 4, 28(29)
  02e4e44  addic 3, 3, -25248
  02e4e48  extsw 4, 4
  02e4e4c  bl 0x110b70
  02e4e50  nop
  02e4e54  cmpwi 3, 0
  02e4e58  bf 2, 0x2e500c
  02e4e5c  cmpwi 30, 0
  02e4e60  bt 2, 0x2e4e78
  02e4e64  li 3, 0
  02e4e68  li 4, 0
  02e4e6c  ori 5, 31, 0
  02e4e70  bl 0x15d12c
  02e4e74  nop
  02e4e78  li 3, 6
  02e4e7c  stb 3, 32(31)
  02e4e80  b 0x2e500c
  02e4e84  lis 4, 46
  02e4e88  lfs 1, 44(31)
  02e4e8c  addi 4, 4, 19144
  02e4e90  cmpwi 1, 30, 0
  02e4e94  lfs 2, 0(4)
  02e4e98  lwz 5, 36(31)
  02e4e9c  fmuls 1, 1, 2
  02e4ea0  lfs 3, 36(5)
  02e4ea4  fdivs 1, 1, 3
  02e4ea8  lfs 3, 4(4)
  02e4eac  lis 4, 114
  02e4eb0  lfs 2, 20(29)
  02e4eb4  lfs 4, -3052(4)
  02e4eb8  fabs 5, 2
  02e4ebc  fmuls 1, 1, 3
  02e4ec0  fmuls 1, 1, 4
  02e4ec4  fcmpu 0, 5, 1
  02e4ec8  cror 2, 0, 2
  02e4ecc  bt 2, 0x2e4ef4
  02e4ed0  lis 4, 46
  02e4ed4  addi 4, 4, 19144
  02e4ed8  lfs 3, 8(4)
  02e4edc  bf 6, 0x2e4eec
  02e4ee0  lis 4, 46
  02e4ee4  addi 4, 4, 19144
  02e4ee8  lfs 3, 12(4)
  02e4eec  fnmsubs 2, 1, 3, 2
  02e4ef0  b 0x2e4f00
  02e4ef4  lis 4, 46
  02e4ef8  addi 4, 4, 19144
  02e4efc  lfs 2, 44(4)
  02e4f00  ori 6, 3, 0
  02e4f04  lis 3, 46
  02e4f08  stfs 2, 20(29)
  02e4f0c  addi 3, 3, 19144
  02e4f10  lfs 1, 16(3)
  02e4f14  lfs 3, 72(31)
  02e4f18  lfs 4, 20(3)
  02e4f1c  fadds 1, 3, 1
  02e4f20  lfs 5, 24(3)
  02e4f24  fsubs 6, 4, 3
  02e4f28  addic 5, 1, 144
  02e4f2c  ori 4, 29, 0
  02e4f30  fsubs 4, 4, 1
  02e4f34  fsub 8, 3, 6
  02e4f38  fsubs 7, 5, 1
  02e4f3c  fsubs 5, 5, 3
  02e4f40  fsub 9, 1, 4
  02e4f44  fsel 3, 8, 6, 3
  02e4f48  fsel 1, 9, 4, 1
  02e4f4c  fsub 6, 5, 3
  02e4f50  lfs 4, 28(3)
  02e4f54  lfs 8, 32(3)
  02e4f58  fsub 9, 7, 1
  02e4f5c  fsel 3, 6, 5, 3
  02e4f60  lfs 5, 36(3)
  02e4f64  fsel 1, 9, 7, 1
  02e4f68  fmuls 6, 3, 3
  02e4f6c  lfs 7, 40(3)
  02e4f70  addic 3, 1, 160
  02e4f74  fmuls 9, 1, 1
  02e4f78  fmuls 10, 6, 3
  02e4f7c  fmuls 11, 9, 1
  02e4f80  fmuls 12, 6, 10
  02e4f84  fmadds 3, 10, 4, 3
  02e4f88  fmuls 10, 9, 11
  02e4f8c  fmadds 1, 11, 4, 1
  02e4f90  fmuls 4, 6, 12
  02e4f94  fmadds 3, 12, 8, 3
  02e4f98  fmuls 11, 9, 10
  02e4f9c  fmadds 1, 10, 8, 1
  02e4fa0  fmuls 6, 6, 4
  02e4fa4  fmadds 3, 4, 5, 3
  02e4fa8  fmuls 4, 9, 11
  02e4fac  fmadds 1, 11, 5, 1
  02e4fb0  fmadds 3, 6, 7, 3
  02e4fb4  fmadds 1, 4, 7, 1
  02e4fb8  fmuls 1, 1, 2
  02e4fbc  stfs 1, 144(1)
  02e4fc0  lfs 1, 20(29)
  02e4fc4  stw 6, 152(1)
  02e4fc8  fmuls 1, 3, 1
  02e4fcc  stfs 1, 148(1)
  02e4fd0  bl 0x5023f0
  02e4fd4  nop
  02e4fd8  lfs 1, 160(1)
  02e4fdc  stfs 1, 16(31)
  02e4fe0  lfs 1, 164(1)
  02e4fe4  stfs 1, 20(31)
  02e4fe8  lfs 1, 168(1)
  02e4fec  stfs 1, 24(31)
  02e4ff0  lfs 1, 172(1)
  02e4ff4  stfs 1, 28(31)
  02e4ff8  lwz 3, 20(29)
  02e4ffc  cmpwi 3, 0
  02e5000  bf 2, 0x2e500c
  02e5004  li 3, 4
  02e5008  stb 3, 32(31)
  02e500c  ld 0, 224(1)
  02e5010  mtlr 0
  02e5014  lfd 31, 200(1)
  02e5018  ld 29, 176(1)
  02e501c  ld 30, 184(1)
  02e5020  ld 31, 192(1)
  02e5024  addi 1, 1, 208
  02e5028  blr

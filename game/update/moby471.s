# game/update/moby471.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M471_00399a30:   # 0x399a30, 0x2f0 bytes
  0399a30  stdu 1, -128(1)
  0399a34  mflr 0
  0399a38  std 0, 144(1)
  0399a3c  lis 4, 58
  0399a40  lis 5, 165
  0399a44  lbz 6, 33(3)
  0399a48  addi 4, 4, -26080
  0399a4c  addic 5, 5, -28284
  0399a50  std 31, 120(1)
  0399a54  slwi 6, 6, 2
  0399a58  ori 31, 3, 0
  0399a5c  std 30, 112(1)
  0399a60  lfs 5, 0(4)
  0399a64  lwz 30, 120(3)
  0399a68  lwzx 4, 5, 6
  0399a6c  cmpwi 4, 0
  0399a70  bt 2, 0x399d08
  0399a74  lis 3, 149
  0399a78  lis 5, 164
  0399a7c  addic 6, 3, 5056
  0399a80  li 3, 0
  0399a84  lwz 5, -28512(5)
  0399a88  lfs 3, 320(6)
  0399a8c  lfs 2, 324(6)
  0399a90  lfs 1, 328(6)
  0399a94  lhz 6, 0(4)
  0399a98  rlwinm 6, 6, 8, 9, 23
  0399a9c  addc 6, 5, 6
  0399aa0  clrldi 6, 6, 32
  0399aa4  lhz 7, 166(6)
  0399aa8  cmpwi 7, 471
  0399aac  bf 2, 0x399aec
  0399ab0  lfs 4, 20(6)
  0399ab4  lfs 6, 16(6)
  0399ab8  fsubs 4, 2, 4
  0399abc  lfs 7, 24(6)
  0399ac0  fsubs 6, 3, 6
  0399ac4  fsubs 7, 1, 7
  0399ac8  fmuls 4, 4, 4
  0399acc  fmadds 4, 6, 6, 4
  0399ad0  fmadds 4, 7, 7, 4
  0399ad4  fsqrts 4, 4
  0399ad8  fcmpu 0, 5, 4
  0399adc  cror 6, 0, 2
  0399ae0  bt 6, 0x399aec
  0399ae4  ori 3, 6, 0
  0399ae8  fmr 5, 4
  0399aec  lhz 6, 0(4)
  0399af0  addic 4, 4, 2
  0399af4  extsh 6, 6
  0399af8  cmpwi 6, 0
  0399afc  bf 0, 0x399a94
  0399b00  fmr 4, 2
  0399b04  lfs 2, 20(3)
  0399b08  fmr 5, 3
  0399b0c  lfs 3, 16(3)
  0399b10  fmr 6, 1
  0399b14  lfs 1, 24(3)
  0399b18  lis 4, 58
  0399b1c  fsubs 4, 2, 4
  0399b20  fsubs 5, 3, 5
  0399b24  fsubs 6, 1, 6
  0399b28  addi 4, 4, -26080
  0399b2c  fmuls 4, 4, 4
  0399b30  fmadds 4, 5, 5, 4
  0399b34  lfs 5, 4(4)
  0399b38  fmadds 4, 6, 6, 4
  0399b3c  fsqrts 4, 4
  0399b40  fcmpu 0, 4, 5
  0399b44  cror 6, 1, 2
  0399b48  bt 6, 0x399d08
  0399b4c  lwz 6, 116(30)
  0399b50  cmpwi 6, 0
  0399b54  bt 0, 0x399c3c
  0399b58  sldi 5, 6, 7
  0399b5c  sldi 6, 6, 4
  0399b60  lis 4, 150
  0399b64  subc 6, 5, 6
  0399b68  addic 4, 4, 14176
  0399b6c  extsw 5, 6
  0399b70  addc 5, 4, 5
  0399b74  lwz 5, 136(5)
  0399b78  cmpwi 5, 0
  0399b7c  bt 2, 0x399c3c
  0399b80  lhz 5, 166(5)
  0399b84  cmpwi 5, 471
  0399b88  bf 2, 0x399c3c
  0399b8c  lfs 6, 228(3)
  0399b90  lfs 7, 224(3)
  0399b94  fmuls 4, 6, 6
  0399b98  lfs 5, 232(3)
  0399b9c  lis 5, 58
  0399ba0  addi 5, 5, -26080
  0399ba4  fmadds 4, 7, 7, 4
  0399ba8  fmadds 8, 5, 5, 4
  0399bac  lfs 4, 8(5)
  0399bb0  fsqrts 8, 8
  0399bb4  fcmpu 0, 8, 4
  0399bb8  bf 2, 0x399bd0
  0399bbc  fmr 6, 4
  0399bc0  clrldi 5, 3, 32
  0399bc4  lfs 7, 236(5)
  0399bc8  fmr 5, 6
  0399bcc  b 0x399bf8
  0399bd0  lis 5, 58
  0399bd4  addi 5, 5, -26080
  0399bd8  fmr 9, 6
  0399bdc  fmr 10, 5
  0399be0  lfs 4, 12(5)
  0399be4  fdivs 4, 4, 8
  0399be8  fmuls 6, 7, 4
  0399bec  fmuls 5, 9, 4
  0399bf0  lfs 7, 236(3)
  0399bf4  fmuls 4, 10, 4
  0399bf8  fadds 3, 6, 3
  0399bfc  addc 5, 4, 6
  0399c00  fadds 2, 5, 2
  0399c04  fadds 1, 4, 1
  0399c08  clrldi 5, 5, 32
  0399c0c  stfs 7, 156(5)
  0399c10  stfs 3, 144(5)
  0399c14  stfs 2, 148(5)
  0399c18  stfs 1, 152(5)
  0399c1c  lwz 5, 116(30)
  0399c20  sldi 6, 5, 7
  0399c24  sldi 5, 5, 4
  0399c28  subc 5, 6, 5
  0399c2c  extsw 5, 5
  0399c30  addc 4, 4, 5
  0399c34  stw 3, 136(4)
  0399c38  b 0x399d08
  0399c3c  ori 5, 3, 0
  0399c40  li 3, 0
  0399c44  li 4, 13
  0399c48  bl 0x15d12c
  0399c4c  nop
  0399c50  lfs 3, 16(31)
  0399c54  cmpwi 3, 0
  0399c58  stw 3, 116(30)
  0399c5c  lfs 2, 20(31)
  0399c60  lfs 1, 24(31)
  0399c64  bt 0, 0x399d08
  0399c68  lfs 6, 228(31)
  0399c6c  lfs 7, 224(31)
  0399c70  fmuls 4, 6, 6
  0399c74  lfs 5, 232(31)
  0399c78  lis 4, 58
  0399c7c  addi 4, 4, -26080
  0399c80  fmadds 4, 7, 7, 4
  0399c84  fmadds 8, 5, 5, 4
  0399c88  lfs 4, 8(4)
  0399c8c  fsqrts 8, 8
  0399c90  fcmpu 0, 8, 4
  0399c94  bf 2, 0x399ca8
  0399c98  fmr 6, 4
  0399c9c  lfs 7, 236(31)
  0399ca0  fmr 5, 6
  0399ca4  b 0x399cd0
  0399ca8  lis 4, 58
  0399cac  addi 4, 4, -26080
  0399cb0  fmr 9, 6
  0399cb4  fmr 10, 5
  0399cb8  lfs 4, 12(4)
  0399cbc  fdivs 4, 4, 8
  0399cc0  fmuls 6, 7, 4
  0399cc4  fmuls 5, 9, 4
  0399cc8  lfs 7, 236(31)
  0399ccc  fmuls 4, 10, 4
  0399cd0  fadds 3, 6, 3
  0399cd4  sldi 5, 3, 7
  0399cd8  lis 4, 150
  0399cdc  fadds 2, 5, 2
  0399ce0  sldi 3, 3, 4
  0399ce4  fadds 1, 4, 1
  0399ce8  addic 4, 4, 14176
  0399cec  subc 3, 5, 3
  0399cf0  addc 3, 4, 3
  0399cf4  clrldi 3, 3, 32
  0399cf8  stfs 3, 144(3)
  0399cfc  stfs 2, 148(3)
  0399d00  stfs 7, 156(3)
  0399d04  stfs 1, 152(3)
  0399d08  ld 0, 144(1)
  0399d0c  mtlr 0
  0399d10  ld 30, 112(1)
  0399d14  ld 31, 120(1)
  0399d18  addi 1, 1, 128
  0399d1c  blr

M471_00399d20:   # 0x399d20, 0xa0 bytes
  0399d20  stdu 1, -128(1)
  0399d24  mflr 0
  0399d28  std 0, 144(1)
  0399d2c  lis 5, 165
  0399d30  sldi 3, 3, 2
  0399d34  addic 5, 5, -28284
  0399d38  std 31, 120(1)
  0399d3c  extsw 3, 3
  0399d40  std 30, 112(1)
  0399d44  ori 31, 4, 0
  0399d48  lwzx 30, 5, 3
  0399d4c  cmpwi 30, 0
  0399d50  bt 2, 0x399da8
  0399d54  lis 3, 164
  0399d58  lhz 4, 0(30)
  0399d5c  rlwinm 4, 4, 8, 9, 23
  0399d60  lwz 3, -28512(3)
  0399d64  addc 3, 3, 4
  0399d68  clrldi 3, 3, 32
  0399d6c  lhz 4, 166(3)
  0399d70  cmpwi 4, 471
  0399d74  bf 2, 0x399d94
  0399d78  addic 5, 3, 64
  0399d7c  lwz 3, 120(3)
  0399d80  ori 6, 5, 0
  0399d84  ori 4, 31, 0
  0399d88  addic 3, 3, 32
  0399d8c  bl 0x112900
  0399d90  nop
  0399d94  lhz 3, 0(30)
  0399d98  addic 30, 30, 2
  0399d9c  extsh 3, 3
  0399da0  cmpwi 3, 0
  0399da4  bf 0, 0x399d54
  0399da8  ld 0, 144(1)
  0399dac  mtlr 0
  0399db0  ld 30, 112(1)
  0399db4  ld 31, 120(1)
  0399db8  addi 1, 1, 128
  0399dbc  blr

UpdateMoby_471:   # 0x399dc8, 0x380 bytes
  0399dc8  stdu 1, -176(1)
  0399dcc  mflr 0
  0399dd0  std 0, 192(1)
  0399dd4  std 31, 168(1)
  0399dd8  lbz 4, 32(3)
  0399ddc  std 30, 160(1)
  0399de0  ori 31, 3, 0
  0399de4  lwz 30, 120(3)
  0399de8  cmpwi 4, 0
  0399dec  cmpwi 1, 4, 2
  0399df0  cmpwi 6, 4, 1
  0399df4  std 29, 152(1)
  0399df8  cmpwi 7, 4, -1
  0399dfc  bt 1, 0x399e08
  0399e00  bf 29, 0x39a118
  0399e04  b 0x399e14
  0399e08  bf 25, 0x399fc0
  0399e0c  bf 5, 0x399e60
  0399e10  b 0x39a118
  0399e14  lwz 5, 92(30)
  0399e18  li 4, 0
  0399e1c  lhz 3, 52(31)
  0399e20  ori 5, 5, 4
  0399e24  ori 6, 3, 1
  0399e28  stw 5, 92(30)
  0399e2c  stb 4, 49(31)
  0399e30  lwz 4, 96(30)
  0399e34  sth 6, 52(31)
  0399e38  cmpwi 4, -1
  0399e3c  bf 2, 0x399e4c
  0399e40  ori 3, 3, 3
  0399e44  sth 3, 52(31)
  0399e48  b 0x399e54
  0399e4c  li 3, 2
  0399e50  stb 3, 32(31)
  0399e54  li 3, -1
  0399e58  stw 3, 116(30)
  0399e5c  b 0x39a118
  0399e60  lis 3, 132
  0399e64  lis 4, 114
  0399e68  lfs 1, 11920(3)
  0399e6c  lfs 2, -3052(4)
  0399e70  fmuls 6, 1, 2
  0399e74  lfs 1, 108(30)
  0399e78  fneg 6, 6
  0399e7c  fcmpu 0, 1, 6
  0399e80  bt 2, 0x399f80
  0399e84  lis 3, 58
  0399e88  fmr 1, 6
  0399e8c  lis 4, 114
  0399e90  addi 29, 3, -25152
  0399e94  addic 3, 30, 108
  0399e98  lfs 3, 0(29)
  0399e9c  lfs 2, -3048(4)
  0399ea0  fmuls 2, 2, 3
  0399ea4  bl 0x109af0
  0399ea8  nop
  0399eac  lfs 3, 196(31)
  0399eb0  lfs 4, 192(31)
  0399eb4  fmuls 1, 3, 3
  0399eb8  lfs 2, 200(31)
  0399ebc  fmadds 1, 4, 4, 1
  0399ec0  fmadds 6, 2, 2, 1
  0399ec4  lfs 1, 4(29)
  0399ec8  lfs 5, 108(30)
  0399ecc  lbz 29, 33(31)
  0399ed0  fsqrts 6, 6
  0399ed4  fcmpu 0, 6, 1
  0399ed8  bf 2, 0x399eec
  0399edc  fmr 3, 1
  0399ee0  lfs 6, 204(31)
  0399ee4  fmr 2, 3
  0399ee8  b 0x399f04
  0399eec  fdivs 5, 5, 6
  0399ef0  lfs 6, 204(31)
  0399ef4  fmr 7, 2
  0399ef8  fmuls 2, 3, 5
  0399efc  fmuls 1, 4, 5
  0399f00  fmuls 3, 7, 5
  0399f04  lis 3, 165
  0399f08  stfs 1, 112(1)
  0399f0c  rlwinm 4, 29, 2, 22, 29
  0399f10  stfs 2, 116(1)
  0399f14  addic 3, 3, -28284
  0399f18  lwzx 29, 3, 4
  0399f1c  stfs 3, 120(1)
  0399f20  cmpwi 29, 0
  0399f24  stfs 6, 124(1)
  0399f28  bt 2, 0x399f80
  0399f2c  lis 3, 164
  0399f30  lhz 4, 0(29)
  0399f34  rlwinm 4, 4, 8, 9, 23
  0399f38  lwz 3, -28512(3)
  0399f3c  addc 3, 3, 4
  0399f40  clrldi 3, 3, 32
  0399f44  lhz 4, 166(3)
  0399f48  cmpwi 4, 471
  0399f4c  bf 2, 0x399f6c
  0399f50  addic 5, 3, 64
  0399f54  lwz 3, 120(3)
  0399f58  addic 4, 1, 112
  0399f5c  ori 6, 5, 0
  0399f60  addic 3, 3, 32
  0399f64  bl 0x112900
  0399f68  nop
  0399f6c  lhz 3, 0(29)
  0399f70  addic 29, 29, 2
  0399f74  extsh 3, 3
  0399f78  cmpwi 3, 0
  0399f7c  bf 0, 0x399f2c
  0399f80  lis 3, 151
  0399f84  lwz 4, 104(30)
  0399f88  addic 3, 3, -25248
  0399f8c  extsw 4, 4
  0399f90  bl 0x110b70
  0399f94  nop
  0399f98  cmpwi 3, 0
  0399f9c  bt 2, 0x399fa8
  0399fa0  li 3, 1
  0399fa4  stb 3, 32(31)
  0399fa8  lis 3, 113
  0399fac  ori 4, 31, 0
  0399fb0  addic 3, 3, -12688
  0399fb4  bl 0x6d720
  0399fb8  nop
  0399fbc  b 0x39a118
  0399fc0  lis 3, 132
  0399fc4  lis 4, 114
  0399fc8  lfs 6, 11920(3)
  0399fcc  lfs 1, -3052(4)
  0399fd0  lfs 2, 108(30)
  0399fd4  fmuls 6, 6, 1
  0399fd8  fcmpu 0, 2, 6
  0399fdc  bt 2, 0x39a0dc
  0399fe0  lis 3, 58
  0399fe4  lis 4, 114
  0399fe8  fmr 1, 6
  0399fec  addi 29, 3, -25152
  0399ff0  addic 3, 30, 108
  0399ff4  lfs 2, 0(29)
  0399ff8  lfs 3, -3048(4)
  0399ffc  fmuls 2, 3, 2
  039a000  bl 0x109af0
  039a004  nop
  039a008  lfs 3, 196(31)
  039a00c  lfs 4, 192(31)
  039a010  fmuls 1, 3, 3
  039a014  lfs 2, 200(31)
  039a018  fmadds 1, 4, 4, 1
  039a01c  fmadds 5, 2, 2, 1
  039a020  lfs 1, 4(29)
  039a024  lfs 6, 108(30)
  039a028  lbz 29, 33(31)
  039a02c  fsqrts 5, 5
  039a030  fcmpu 0, 5, 1
  039a034  bf 2, 0x39a048
  039a038  fmr 3, 1
  039a03c  lfs 6, 204(31)
  039a040  fmr 2, 3
  039a044  b 0x39a060
  039a048  fdivs 5, 6, 5
  039a04c  lfs 6, 204(31)
  039a050  fmr 7, 2
  039a054  fmuls 2, 3, 5
  039a058  fmuls 1, 4, 5
  039a05c  fmuls 3, 7, 5
  039a060  lis 3, 165
  039a064  rlwinm 4, 29, 2, 22, 29
  039a068  stfs 1, 128(1)
  039a06c  addic 3, 3, -28284
  039a070  stfs 2, 132(1)
  039a074  lwzx 29, 3, 4
  039a078  stfs 3, 136(1)
  039a07c  cmpwi 29, 0
  039a080  stfs 6, 140(1)
  039a084  bt 2, 0x39a0dc
  039a088  lis 3, 164
  039a08c  lhz 4, 0(29)
  039a090  rlwinm 4, 4, 8, 9, 23
  039a094  lwz 3, -28512(3)
  039a098  addc 3, 3, 4
  039a09c  clrldi 3, 3, 32
  039a0a0  lhz 4, 166(3)
  039a0a4  cmpwi 4, 471
  039a0a8  bf 2, 0x39a0c8
  039a0ac  addic 5, 3, 64
  039a0b0  lwz 3, 120(3)
  039a0b4  ori 6, 5, 0
  039a0b8  addic 4, 1, 128
  039a0bc  addic 3, 3, 32
  039a0c0  bl 0x112900
  039a0c4  nop
  039a0c8  lhz 3, 0(29)
  039a0cc  addic 29, 29, 2
  039a0d0  extsh 3, 3
  039a0d4  cmpwi 3, 0
  039a0d8  bf 0, 0x39a088
  039a0dc  lis 3, 151
  039a0e0  lwz 4, 100(30)
  039a0e4  addic 3, 3, -25248
  039a0e8  extsw 4, 4
  039a0ec  bl 0x110b70
  039a0f0  nop
  039a0f4  cmpwi 3, 0
  039a0f8  bt 2, 0x39a104
  039a0fc  li 3, 2
  039a100  stb 3, 32(31)
  039a104  lis 3, 113
  039a108  ori 4, 31, 0
  039a10c  addic 3, 3, -12688
  039a110  bl 0x6d720
  039a114  nop
  039a118  lbz 3, 32(31)
  039a11c  cmpwi 3, 0
  039a120  bt 2, 0x39a12c
  039a124  ori 3, 31, 0
  039a128  bl 0x399a30
  039a12c  ld 0, 192(1)
  039a130  mtlr 0
  039a134  ld 29, 152(1)
  039a138  ld 30, 160(1)
  039a13c  ld 31, 168(1)
  039a140  addi 1, 1, 176
  039a144  blr

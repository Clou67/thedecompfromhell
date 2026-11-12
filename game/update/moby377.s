# game/update/moby377.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M377_00357940:   # 0x357940, 0x14 bytes
  0357940  lis 3, 132
  0357944  lis 4, 1
  0357948  addic 3, 3, 1544
  035794c  stw 4, 72(3)
  0357950  blr

M377_00357958:   # 0x357958, 0xcc bytes
  0357958  stdu 1, -128(1)
  035795c  mflr 0
  0357960  std 0, 144(1)
  0357964  std 31, 120(1)
  0357968  ori 31, 3, 0
  035796c  std 30, 112(1)
  0357970  li 3, 377
  0357974  bl 0xefa28
  0357978  nop
  035797c  ori 30, 3, 0
  0357980  cmpwi 30, 0
  0357984  bt 2, 0x357a08
  0357988  li 3, 255
  035798c  li 4, 1
  0357990  li 5, 0
  0357994  stb 3, 48(30)
  0357998  stb 4, 49(30)
  035799c  stb 5, 32(30)
  03579a0  stb 5, 188(30)
  03579a4  lfs 1, 16(31)
  03579a8  stfs 1, 16(30)
  03579ac  lfs 1, 20(31)
  03579b0  lwz 4, 120(30)
  03579b4  stfs 1, 20(30)
  03579b8  lfs 1, 24(31)
  03579bc  stfs 1, 24(30)
  03579c0  lfs 1, 28(31)
  03579c4  sth 3, 50(30)
  03579c8  stfs 1, 28(30)
  03579cc  ori 3, 30, 0
  03579d0  lfs 1, 64(31)
  03579d4  stfs 1, 64(30)
  03579d8  lfs 1, 68(31)
  03579dc  stfs 1, 68(30)
  03579e0  lfs 1, 72(31)
  03579e4  stw 31, 0(4)
  03579e8  stfs 1, 72(30)
  03579ec  lfs 1, 76(31)
  03579f0  stfs 1, 76(30)
  03579f4  bl 0xf31a8
  03579f8  nop
  03579fc  ori 3, 30, 0
  0357a00  bl 0x10c000
  0357a04  nop
  0357a08  ori 3, 30, 0
  0357a0c  ld 0, 144(1)
  0357a10  mtlr 0
  0357a14  ld 30, 112(1)
  0357a18  ld 31, 120(1)
  0357a1c  addi 1, 1, 128
  0357a20  blr

UpdateMoby_377:   # 0x357a40, 0x6a8 bytes
  0357a40  stdu 1, -240(1)
  0357a44  mflr 0
  0357a48  std 0, 256(1)
  0357a4c  std 31, 232(1)
  0357a50  cmpwi 3, 0
  0357a54  std 30, 224(1)
  0357a58  std 29, 216(1)
  0357a5c  ori 31, 3, 0
  0357a60  bt 2, 0x3580cc
  0357a64  lwz 30, 120(31)
  0357a68  cmpwi 30, 0
  0357a6c  bt 2, 0x3580cc
  0357a70  lbz 3, 32(31)
  0357a74  cmpwi 3, 7
  0357a78  cmpwi 1, 3, 6
  0357a7c  cmpwi 6, 3, 5
  0357a80  cmpwi 7, 3, 4
  0357a84  bt 2, 0x3580bc
  0357a88  bt 6, 0x35803c
  0357a8c  bt 26, 0x357fd8
  0357a90  bt 30, 0x357f70
  0357a94  cmpwi 3, 3
  0357a98  bt 2, 0x357ba8
  0357a9c  cmpwi 3, 2
  0357aa0  bt 2, 0x357b24
  0357aa4  cmpwi 3, 1
  0357aa8  bt 2, 0x357ac0
  0357aac  cmpwi 3, 0
  0357ab0  bf 2, 0x3580cc
  0357ab4  li 3, 1
  0357ab8  stb 3, 32(31)
  0357abc  b 0x3580cc
  0357ac0  lbz 3, 112(31)
  0357ac4  rlwinm 3, 3, 0, 30, 30
  0357ac8  cmpwi 3, 0
  0357acc  bt 2, 0x3580cc
  0357ad0  lbz 3, 83(31)
  0357ad4  cmpwi 3, 4
  0357ad8  bt 2, 0x357b18
  0357adc  lis 3, 53
  0357ae0  lis 4, 114
  0357ae4  addi 3, 3, 31268
  0357ae8  li 5, 0
  0357aec  lfs 1, 0(3)
  0357af0  lfs 2, -3056(4)
  0357af4  ori 3, 31, 0
  0357af8  fmuls 1, 2, 1
  0357afc  li 4, 4
  0357b00  fctiwz 1, 1
  0357b04  stfd 1, 192(1)
  0357b08  lwz 6, 196(1)
  0357b0c  extsw 6, 6
  0357b10  bl 0xfddc0
  0357b14  nop
  0357b18  li 3, 2
  0357b1c  stb 3, 32(31)
  0357b20  b 0x3580cc
  0357b24  lhz 3, 14(30)
  0357b28  extsh 3, 3
  0357b2c  cmpwi 3, 3
  0357b30  bf 0, 0x3580cc
  0357b34  addic 3, 30, 4
  0357b38  bl 0x4fffb4
  0357b3c  nop
  0357b40  cmpwi 3, 0
  0357b44  bt 2, 0x3580cc
  0357b48  lhz 4, 14(30)
  0357b4c  li 3, 3
  0357b50  addic 4, 4, 1
  0357b54  sth 4, 14(30)
  0357b58  lbz 4, 83(31)
  0357b5c  stb 3, 32(31)
  0357b60  cmpwi 4, 1
  0357b64  bt 2, 0x3580cc
  0357b68  lis 3, 53
  0357b6c  lis 4, 114
  0357b70  addi 3, 3, 31268
  0357b74  li 5, 0
  0357b78  lfs 1, 4(3)
  0357b7c  lfs 2, -3056(4)
  0357b80  ori 3, 31, 0
  0357b84  li 4, 1
  0357b88  fmuls 1, 2, 1
  0357b8c  fctiwz 1, 1
  0357b90  stfd 1, 192(1)
  0357b94  lwz 6, 196(1)
  0357b98  extsw 6, 6
  0357b9c  bl 0xfddc0
  0357ba0  nop
  0357ba4  b 0x3580cc
  0357ba8  lbz 3, 112(31)
  0357bac  rlwinm 3, 3, 0, 30, 30
  0357bb0  cmpwi 3, 0
  0357bb4  bt 2, 0x3580cc
  0357bb8  lis 3, 151
  0357bbc  lfs 1, 16(31)
  0357bc0  lis 6, 53
  0357bc4  addic 3, 3, -25376
  0357bc8  lfs 2, 20(31)
  0357bcc  li 5, 20
  0357bd0  addi 6, 6, 31268
  0357bd4  lfs 3, 128(3)
  0357bd8  lfs 4, 132(3)
  0357bdc  fsubs 1, 3, 1
  0357be0  li 3, 16
  0357be4  fsubs 2, 4, 2
  0357be8  lwz 4, 0(30)
  0357bec  lvlx 2, 3, 4
  0357bf0  lvlx 3, 5, 4
  0357bf4  lfs 3, 8(6)
  0357bf8  fabs 4, 1
  0357bfc  fabs 6, 2
  0357c00  stfs 1, 144(1)
  0357c04  stfs 2, 148(1)
  0357c08  fmr 2, 3
  0357c0c  lfs 3, 24(31)
  0357c10  lis 3, 115
  0357c14  addic 3, 3, 22784
  0357c18  fsubs 1, 4, 6
  0357c1c  stfs 1, 152(1)
  0357c20  lwz 4, 144(1)
  0357c24  lfs 5, 12(6)
  0357c28  lfs 1, 144(1)
  0357c2c  lwz 5, 148(1)
  0357c30  fabs 7, 1
  0357c34  fadds 1, 3, 2
  0357c38  rlwinm 5, 5, 3, 29, 29
  0357c3c  lfs 2, 148(1)
  0357c40  lwz 6, 152(1)
  0357c44  fabs 8, 2
  0357c48  lfs 2, 152(1)
  0357c4c  rlwimi 5, 6, 2, 30, 30
  0357c50  fsub 3, 2, 5
  0357c54  fsub 9, 2, 5
  0357c58  rlwimi 5, 4, 4, 28, 28
  0357c5c  ori 4, 3, 0
  0357c60  rlwimi 4, 5, 2, 26, 28
  0357c64  slwi 5, 5, 2
  0357c68  clrldi 4, 4, 32
  0357c6c  fsel 6, 3, 7, 6
  0357c70  lfsx 2, 3, 5
  0357c74  lfs 3, 4(4)
  0357c78  fsel 4, 9, 8, 4
  0357c7c  fcmpu 0, 6, 5
  0357c80  bt 1, 0x357c88
  0357c84  b 0x357da8
  0357c88  fsubs 7, 4, 6
  0357c8c  fadds 4, 4, 6
  0357c90  addic 3, 1, 16
  0357c94  li 7, 2
  0357c98  addic 5, 3, 156
  0357c9c  addic 4, 3, 140
  0357ca0  mtctr 7
  0357ca4  fdivs 4, 7, 4
  0357ca8  fmuls 6, 4, 4
  0357cac  stfs 4, 168(1)
  0357cb0  stfs 4, 160(1)
  0357cb4  stfs 4, 164(1)
  0357cb8  stfs 4, 156(1)
  0357cbc  lfs 8, 168(1)
  0357cc0  lfs 9, 160(1)
  0357cc4  lfs 10, 164(1)
  0357cc8  fmuls 7, 6, 6
  0357ccc  fmuls 9, 9, 6
  0357cd0  fmuls 8, 8, 7
  0357cd4  fmuls 4, 7, 7
  0357cd8  fmuls 7, 10, 7
  0357cdc  stfs 9, 160(1)
  0357ce0  fmuls 6, 8, 6
  0357ce4  stfs 7, 164(1)
  0357ce8  stfs 6, 168(1)
  0357cec  lfs 6, 140(3)
  0357cf0  fmuls 6, 6, 4
  0357cf4  stfs 6, 156(3)
  0357cf8  lfs 6, 4(4)
  0357cfc  addic 4, 4, 8
  0357d00  fmuls 6, 6, 4
  0357d04  addic 3, 3, 8
  0357d08  stfs 6, 4(5)
  0357d0c  addic 5, 5, 8
  0357d10  bdnz 0x357cec
  0357d14  li 5, 4
  0357d18  ori 3, 1, 0
  0357d1c  mtctr 5
  0357d20  lis 4, 115
  0357d24  addic 5, 3, 156
  0357d28  addic 4, 4, 22752
  0357d2c  ori 6, 5, 0
  0357d30  lfs 4, 156(3)
  0357d34  lfs 6, 0(4)
  0357d38  fmuls 4, 4, 6
  0357d3c  lfs 6, 4(4)
  0357d40  addic 4, 4, 8
  0357d44  stfs 4, 156(3)
  0357d48  lfs 4, 4(5)
  0357d4c  addic 3, 3, 8
  0357d50  fmuls 4, 4, 6
  0357d54  stfs 4, 4(5)
  0357d58  addic 5, 5, 8
  0357d5c  bdnz 0x357d30
  0357d60  ori 3, 1, 0
  0357d64  mtctr 7
  0357d68  lfs 4, 156(3)
  0357d6c  fadds 4, 5, 4
  0357d70  addic 3, 3, 16
  0357d74  lfs 5, 4(6)
  0357d78  lfs 6, 8(6)
  0357d7c  lfs 7, 12(6)
  0357d80  addic 6, 6, 16
  0357d84  fadds 4, 4, 5
  0357d88  fadds 5, 4, 6
  0357d8c  fadds 5, 5, 7
  0357d90  bdnz 0x357d68
  0357d94  lis 3, 53
  0357d98  addi 3, 3, 31268
  0357d9c  lfs 4, 16(3)
  0357da0  fadds 5, 5, 4
  0357da4  fmadds 5, 5, 2, 3
  0357da8  vspltisw 4, 0
  0357dac  lis 3, 53
  0357db0  li 4, 112
  0357db4  addi 3, 3, 31268
  0357db8  lis 5, 114
  0357dbc  li 7, 52
  0357dc0  stvx 4, 4, 1
  0357dc4  lfs 3, 20(3)
  0357dc8  lfs 4, -3052(5)
  0357dcc  addi 8, 7, 16
  0357dd0  li 5, 48
  0357dd4  fmuls 3, 4, 3
  0357dd8  addi 6, 5, 16
  0357ddc  li 9, 116
  0357de0  addic 3, 1, 112
  0357de4  stfs 3, 120(1)
  0357de8  lwz 10, 0(30)
  0357dec  lwz 10, 120(10)
  0357df0  lvlx 4, 5, 10
  0357df4  lvrx 5, 6, 10
  0357df8  vor 4, 4, 5
  0357dfc  li 5, 132
  0357e00  ori 6, 30, 0
  0357e04  vspltw 5, 4, 0
  0357e08  vaddfp 2, 2, 4
  0357e0c  stvewx 5, 4, 1
  0357e10  lvlx 4, 7, 10
  0357e14  li 4, 128
  0357e18  lvrx 5, 8, 10
  0357e1c  vor 4, 4, 5
  0357e20  vspltw 2, 2, 0
  0357e24  vspltw 5, 4, 0
  0357e28  vaddfp 3, 3, 4
  0357e2c  stvewx 5, 9, 1
  0357e30  lfs 4, 56(10)
  0357e34  stvewx 2, 4, 1
  0357e38  fadds 3, 3, 4
  0357e3c  li 4, 0
  0357e40  vspltw 2, 3, 0
  0357e44  fadds 1, 1, 3
  0357e48  stvewx 2, 5, 1
  0357e4c  stfs 3, 120(1)
  0357e50  stfs 2, 140(1)
  0357e54  stfs 1, 136(1)
  0357e58  lwz 5, 16(6)
  0357e5c  cmpwi 5, 0
  0357e60  bt 2, 0x357e94
  0357e64  lhz 7, 166(5)
  0357e68  cmpwi 7, 329
  0357e6c  bf 2, 0x357e94
  0357e70  lbz 5, 32(5)
  0357e74  cmpwi 1, 5, 253
  0357e78  cmpwi 5, 254
  0357e7c  cror 2, 2, 6
  0357e80  bt 2, 0x357e94
  0357e84  addic 4, 4, 1
  0357e88  addic 6, 6, 4
  0357e8c  cmpwi 4, 3
  0357e90  bt 0, 0x357e58
  0357e94  cmpwi 4, 3
  0357e98  bf 2, 0x357eb0
  0357e9c  lis 3, 101
  0357ea0  addic 3, 3, 26052
  0357ea4  bl 0x5cd098
  0357ea8  nop
  0357eac  b 0x3580cc
  0357eb0  slwi 29, 4, 2
  0357eb4  fneg 1, 5
  0357eb8  extsh 8, 4
  0357ebc  lwz 4, 0(30)
  0357ec0  addic 6, 1, 128
  0357ec4  ori 5, 3, 0
  0357ec8  ori 3, 31, 0
  0357ecc  lwz 4, 120(4)
  0357ed0  addc 4, 4, 29
  0357ed4  clrldi 7, 4, 32
  0357ed8  ori 4, 6, 0
  0357edc  lwz 7, 32(7)
  0357ee0  extsw 7, 7
  0357ee4  bl 0x344150
  0357ee8  nop
  0357eec  addc 4, 30, 29
  0357ef0  cmpwi 3, 0
  0357ef4  clrldi 4, 4, 32
  0357ef8  stw 3, 16(4)
  0357efc  bt 2, 0x3580cc
  0357f00  li 3, 240
  0357f04  lhz 5, 6(30)
  0357f08  li 4, 30
  0357f0c  addic 5, 5, 1
  0357f10  sth 3, 4(30)
  0357f14  sth 4, 12(30)
  0357f18  sth 5, 6(30)
  0357f1c  lbz 3, 83(31)
  0357f20  cmpwi 3, 2
  0357f24  bt 2, 0x357f64
  0357f28  lis 3, 53
  0357f2c  lis 4, 114
  0357f30  addi 3, 3, 31268
  0357f34  li 5, 0
  0357f38  lfs 1, 4(3)
  0357f3c  lfs 2, -3056(4)
  0357f40  ori 3, 31, 0
  0357f44  fmuls 1, 2, 1
  0357f48  li 4, 2
  0357f4c  fctiwz 1, 1
  0357f50  stfd 1, 192(1)
  0357f54  lwz 6, 196(1)
  0357f58  extsw 6, 6
  0357f5c  bl 0xfddc0
  0357f60  nop
  0357f64  li 3, 4
  0357f68  stb 3, 32(31)
  0357f6c  b 0x3580cc
  0357f70  addic 3, 30, 12
  0357f74  bl 0x4fffb4
  0357f78  nop
  0357f7c  cmpwi 3, 0
  0357f80  bt 2, 0x3580cc
  0357f84  lbz 3, 83(31)
  0357f88  cmpwi 3, 3
  0357f8c  bt 2, 0x357fcc
  0357f90  lis 3, 53
  0357f94  lis 4, 114
  0357f98  addi 3, 3, 31268
  0357f9c  li 5, 0
  0357fa0  lfs 1, 4(3)
  0357fa4  lfs 2, -3056(4)
  0357fa8  ori 3, 31, 0
  0357fac  fmuls 1, 2, 1
  0357fb0  li 4, 3
  0357fb4  fctiwz 1, 1
  0357fb8  stfd 1, 192(1)
  0357fbc  lwz 6, 196(1)
  0357fc0  extsw 6, 6
  0357fc4  bl 0xfddc0
  0357fc8  nop
  0357fcc  li 3, 5
  0357fd0  stb 3, 32(31)
  0357fd4  b 0x3580cc
  0357fd8  lbz 3, 112(31)
  0357fdc  rlwinm 3, 3, 0, 30, 30
  0357fe0  cmpwi 3, 0
  0357fe4  bt 2, 0x3580cc
  0357fe8  lbz 3, 83(31)
  0357fec  cmpwi 3, 4
  0357ff0  bt 2, 0x358030
  0357ff4  lis 3, 53
  0357ff8  lis 4, 114
  0357ffc  addi 3, 3, 31268
  0358000  li 5, 0
  0358004  lfs 1, 4(3)
  0358008  lfs 2, -3056(4)
  035800c  ori 3, 31, 0
  0358010  li 4, 4
  0358014  fmuls 1, 2, 1
  0358018  fctiwz 1, 1
  035801c  stfd 1, 192(1)
  0358020  lwz 6, 196(1)
  0358024  extsw 6, 6
  0358028  bl 0xfddc0
  035802c  nop
  0358030  li 3, 2
  0358034  stb 3, 32(31)
  0358038  b 0x3580cc
  035803c  lbz 3, 112(31)
  0358040  rlwinm 3, 3, 0, 30, 30
  0358044  cmpwi 3, 0
  0358048  bt 2, 0x3580cc
  035804c  li 3, 0
  0358050  li 4, 7
  0358054  stw 3, 88(31)
  0358058  stb 4, 32(31)
  035805c  ori 31, 30, 0
  0358060  lwz 4, 16(31)
  0358064  cmpwi 4, 0
  0358068  bt 2, 0x3580a8
  035806c  lhz 5, 166(4)
  0358070  cmpwi 5, 329
  0358074  bf 2, 0x3580a8
  0358078  lbz 4, 32(4)
  035807c  cmpwi 1, 4, 253
  0358080  cmpwi 4, 254
  0358084  cror 2, 2, 6
  0358088  bt 2, 0x3580a8
  035808c  slwi 3, 3, 2
  0358090  li 4, 5
  0358094  addc 3, 30, 3
  0358098  clrldi 3, 3, 32
  035809c  lwz 3, 16(3)
  03580a0  stb 4, 32(3)
  03580a4  b 0x3580cc
  03580a8  addic 3, 3, 1
  03580ac  addic 31, 31, 4
  03580b0  cmpwi 3, 3
  03580b4  bt 0, 0x358060
  03580b8  b 0x3580cc
  03580bc  ori 3, 31, 0
  03580c0  bl 0xefb38
  03580c4  nop
  03580c8  b 0x3580cc
  03580cc  ld 0, 256(1)
  03580d0  mtlr 0
  03580d4  ld 29, 216(1)
  03580d8  ld 30, 224(1)
  03580dc  ld 31, 232(1)
  03580e0  addi 1, 1, 240
  03580e4  blr

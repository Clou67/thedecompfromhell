# game/update/moby1021.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1021_0018893c:   # 0x18893c, 0x14 bytes
  018893c  lis 3, 116
  0188940  lis 4, 1
  0188944  addic 3, 3, -2076
  0188948  stw 4, 72(3)
  018894c  blr

UpdateMoby_1021:   # 0x188968, 0x64c bytes
  0188968  stdu 1, -176(1)
  018896c  mflr 0
  0188970  std 0, 192(1)
  0188974  stfd 31, 168(1)
  0188978  std 31, 160(1)
  018897c  ori 31, 3, 0
  0188980  std 30, 152(1)
  0188984  lbz 3, 32(31)
  0188988  lwz 30, 120(31)
  018898c  cmpwi 3, 2
  0188990  cmpwi 1, 3, 0
  0188994  cmpwi 6, 3, -1
  0188998  std 29, 144(1)
  018899c  std 28, 136(1)
  01889a0  std 27, 128(1)
  01889a4  cmpwi 7, 3, 1
  01889a8  bt 1, 0x1889c4
  01889ac  li 29, 1
  01889b0  bt 5, 0x1889bc
  01889b4  bf 25, 0x188f8c
  01889b8  b 0x1889ec
  01889bc  bf 29, 0x188b1c
  01889c0  b 0x188bdc
  01889c4  cmpwi 3, 5
  01889c8  bt 1, 0x1889d8
  01889cc  cmpwi 3, 3
  01889d0  bf 1, 0x188d68
  01889d4  b 0x188dfc
  01889d8  cmpwi 3, 7
  01889dc  bf 1, 0x188f8c
  01889e0  cmpwi 3, 9
  01889e4  bf 1, 0x188edc
  01889e8  b 0x188f8c
  01889ec  lfs 1, 64(31)
  01889f0  lis 4, 25
  01889f4  stfs 1, 16(30)
  01889f8  lfs 1, 16(31)
  01889fc  li 3, 2
  0188a00  addi 4, 4, -30384
  0188a04  stfs 1, 0(30)
  0188a08  lfs 1, 20(31)
  0188a0c  li 27, 0
  0188a10  stfs 1, 4(30)
  0188a14  ori 28, 27, 0
  0188a18  lfs 1, 24(31)
  0188a1c  stfs 1, 8(30)
  0188a20  lfs 1, 28(31)
  0188a24  stfs 1, 12(30)
  0188a28  stb 3, 32(31)
  0188a2c  lfs 31, 0(4)
  0188a30  li 3, 1021
  0188a34  bl 0xefa28
  0188a38  nop
  0188a3c  li 4, 64
  0188a40  stw 3, 36(30)
  0188a44  addic 28, 28, 45
  0188a48  stb 4, 48(3)
  0188a4c  extsw 3, 28
  0188a50  std 3, 112(1)
  0188a54  lwz 3, 36(30)
  0188a58  sth 4, 50(3)
  0188a5c  lwz 3, 36(30)
  0188a60  stb 29, 49(3)
  0188a64  lwz 3, 36(30)
  0188a68  ld 4, 56(31)
  0188a6c  std 4, 56(3)
  0188a70  lwz 3, 36(30)
  0188a74  lhz 4, 52(31)
  0188a78  sth 4, 52(3)
  0188a7c  lwz 3, 36(30)
  0188a80  lfs 1, 16(31)
  0188a84  stfs 1, 16(3)
  0188a88  lfs 1, 20(31)
  0188a8c  stfs 1, 20(3)
  0188a90  lfs 1, 24(31)
  0188a94  stfs 1, 24(3)
  0188a98  lfs 1, 28(31)
  0188a9c  stfs 1, 28(3)
  0188aa0  lwz 3, 36(30)
  0188aa4  lfs 1, 64(31)
  0188aa8  stfs 1, 64(3)
  0188aac  lfs 1, 68(31)
  0188ab0  stfs 1, 68(3)
  0188ab4  lfs 1, 72(31)
  0188ab8  stfs 1, 72(3)
  0188abc  lfs 1, 76(31)
  0188ac0  stfs 1, 76(3)
  0188ac4  lfd 1, 112(1)
  0188ac8  lwz 3, 36(30)
  0188acc  fcfid 2, 1
  0188ad0  lfs 1, 64(3)
  0188ad4  frsp 2, 2
  0188ad8  fmuls 2, 2, 31
  0188adc  bl 0x502578
  0188ae0  nop
  0188ae4  lwz 3, 36(30)
  0188ae8  stfs 1, 64(3)
  0188aec  lwz 3, 36(30)
  0188af0  stb 29, 32(3)
  0188af4  lwz 4, 36(30)
  0188af8  addic 3, 4, 192
  0188afc  addic 4, 4, 64
  0188b00  bl 0x500b64
  0188b04  nop
  0188b08  addic 27, 27, 1
  0188b0c  addic 30, 30, 4
  0188b10  cmpwi 27, 7
  0188b14  bt 0, 0x188a30
  0188b18  b 0x188f8c
  0188b1c  lfs 1, 64(31)
  0188b20  stfs 1, 16(30)
  0188b24  lfs 1, 16(31)
  0188b28  stfs 1, 0(30)
  0188b2c  lfs 1, 20(31)
  0188b30  stfs 1, 4(30)
  0188b34  lfs 1, 24(31)
  0188b38  stfs 1, 8(30)
  0188b3c  lfs 1, 28(31)
  0188b40  stfs 1, 12(30)
  0188b44  lfs 4, 228(31)
  0188b48  lfs 5, 224(31)
  0188b4c  fmuls 1, 4, 4
  0188b50  lfs 3, 232(31)
  0188b54  li 3, 3
  0188b58  lis 4, 25
  0188b5c  stb 3, 32(31)
  0188b60  addi 3, 4, -30384
  0188b64  fmadds 1, 5, 5, 1
  0188b68  lfs 2, 4(3)
  0188b6c  lis 4, 116
  0188b70  lfs 6, -1936(4)
  0188b74  fmadds 7, 3, 3, 1
  0188b78  lfs 1, 0(30)
  0188b7c  fsqrts 7, 7
  0188b80  fcmpu 0, 7, 2
  0188b84  bf 2, 0x188b98
  0188b88  fmr 4, 2
  0188b8c  lfs 6, 236(31)
  0188b90  fmr 3, 4
  0188b94  b 0x188bb4
  0188b98  fdivs 2, 6, 7
  0188b9c  lfs 6, 236(31)
  0188ba0  fmr 7, 4
  0188ba4  fmr 8, 3
  0188ba8  fmuls 4, 5, 2
  0188bac  fmuls 3, 7, 2
  0188bb0  fmuls 2, 8, 2
  0188bb4  fadds 1, 4, 1
  0188bb8  stfs 1, 16(31)
  0188bbc  lfs 1, 4(30)
  0188bc0  fadds 1, 3, 1
  0188bc4  stfs 1, 20(31)
  0188bc8  lfs 1, 8(30)
  0188bcc  stfs 6, 28(31)
  0188bd0  fadds 1, 2, 1
  0188bd4  stfs 1, 24(31)
  0188bd8  b 0x188f8c
  0188bdc  lbz 3, 188(31)
  0188be0  cmpwi 3, 0
  0188be4  bf 2, 0x188d68
  0188be8  lwz 3, 28(30)
  0188bec  cmpwi 3, 0
  0188bf0  bt 0, 0x188c80
  0188bf4  lis 4, 164
  0188bf8  slwi 3, 3, 8
  0188bfc  lwz 4, -28512(4)
  0188c00  addc 3, 4, 3
  0188c04  clrldi 3, 3, 32
  0188c08  lhz 4, 166(3)
  0188c0c  cmpwi 4, 1448
  0188c10  cmpwi 1, 4, 586
  0188c14  bf 2, 0x188c5c
  0188c18  lis 4, 151
  0188c1c  lfs 1, 20(3)
  0188c20  addic 4, 4, -25376
  0188c24  lfs 2, 132(4)
  0188c28  lfs 3, 128(4)
  0188c2c  fsubs 1, 2, 1
  0188c30  lfs 2, 16(3)
  0188c34  fsubs 2, 3, 2
  0188c38  lis 3, 25
  0188c3c  addi 3, 3, -30384
  0188c40  fmuls 1, 1, 1
  0188c44  fmadds 1, 2, 2, 1
  0188c48  lfs 2, 8(3)
  0188c4c  fsqrts 1, 1
  0188c50  fcmpu 0, 1, 2
  0188c54  bt 0, 0x188cd4
  0188c58  b 0x188d68
  0188c5c  bf 6, 0x188c70
  0188c60  lbz 3, 188(3)
  0188c64  cmpwi 3, 0
  0188c68  bf 2, 0x188cd4
  0188c6c  b 0x188d68
  0188c70  lbz 3, 32(3)
  0188c74  cmpwi 3, 3
  0188c78  bf 0, 0x188cd4
  0188c7c  b 0x188d68
  0188c80  lis 3, 151
  0188c84  lfs 1, 20(31)
  0188c88  lfs 2, 16(31)
  0188c8c  addic 3, 3, -25376
  0188c90  lfs 3, 132(3)
  0188c94  lfs 4, 128(3)
  0188c98  fsubs 1, 1, 3
  0188c9c  fsubs 2, 2, 4
  0188ca0  lis 3, 25
  0188ca4  addi 3, 3, -30384
  0188ca8  fmuls 1, 1, 1
  0188cac  fmadds 1, 2, 2, 1
  0188cb0  lfs 2, 12(3)
  0188cb4  fsqrts 1, 1
  0188cb8  fcmpu 0, 1, 2
  0188cbc  cror 6, 1, 2
  0188cc0  bt 6, 0x188d68
  0188cc4  lis 3, 230
  0188cc8  lwz 3, -4216(3)
  0188ccc  cmpwi 3, 0
  0188cd0  bf 2, 0x188d68
  0188cd4  li 4, 7
  0188cd8  ori 3, 29, 0
  0188cdc  ori 29, 30, 0
  0188ce0  mtctr 4
  0188ce4  lwz 6, 36(29)
  0188ce8  li 4, 3
  0188cec  li 5, 0
  0188cf0  addic 29, 29, 4
  0188cf4  subc 3, 3, 5
  0188cf8  lbz 6, 32(6)
  0188cfc  subc 4, 4, 6
  0188d00  cntlzw 4, 4
  0188d04  sldi 4, 4, 58
  0188d08  sradi 4, 4, 63
  0188d0c  and 3, 4, 3
  0188d10  addc 3, 5, 3
  0188d14  bdnz 0x188ce4
  0188d18  cmpwi 3, 0
  0188d1c  bt 2, 0x188d68
  0188d20  ori 5, 31, 0
  0188d24  li 3, 0
  0188d28  li 4, 0
  0188d2c  bl 0x15d12c
  0188d30  nop
  0188d34  li 5, 4
  0188d38  li 4, 0
  0188d3c  ori 3, 30, 0
  0188d40  stb 5, 32(31)
  0188d44  stw 4, 24(30)
  0188d48  stw 4, 20(30)
  0188d4c  lwz 6, 36(3)
  0188d50  li 5, 5
  0188d54  addic 4, 4, 1
  0188d58  addic 3, 3, 4
  0188d5c  cmpwi 4, 7
  0188d60  stb 5, 32(6)
  0188d64  bt 0, 0x188d4c
  0188d68  lfs 3, 228(31)
  0188d6c  lfs 4, 224(31)
  0188d70  fmuls 1, 3, 3
  0188d74  lfs 2, 232(31)
  0188d78  lis 3, 25
  0188d7c  addi 3, 3, -30384
  0188d80  fmadds 1, 4, 4, 1
  0188d84  fmadds 5, 2, 2, 1
  0188d88  lfs 1, 4(3)
  0188d8c  lis 3, 116
  0188d90  fsqrts 5, 5
  0188d94  lfs 6, -1936(3)
  0188d98  fcmpu 0, 5, 1
  0188d9c  bf 2, 0x188db0
  0188da0  fmr 3, 1
  0188da4  lfs 4, 236(31)
  0188da8  fmr 2, 3
  0188dac  b 0x188dd0
  0188db0  fdivs 1, 6, 5
  0188db4  lfs 5, 236(31)
  0188db8  fmr 6, 3
  0188dbc  fmr 7, 2
  0188dc0  fmuls 3, 4, 1
  0188dc4  fmuls 2, 6, 1
  0188dc8  fmuls 1, 7, 1
  0188dcc  fmr 4, 5
  0188dd0  lfs 5, 0(30)
  0188dd4  fadds 3, 3, 5
  0188dd8  stfs 3, 16(31)
  0188ddc  lfs 3, 4(30)
  0188de0  fadds 2, 2, 3
  0188de4  stfs 2, 20(31)
  0188de8  lfs 2, 8(30)
  0188dec  stfs 4, 28(31)
  0188df0  fadds 1, 1, 2
  0188df4  stfs 1, 24(31)
  0188df8  b 0x188f8c
  0188dfc  lis 3, 25
  0188e00  lis 5, 116
  0188e04  addi 3, 3, -30384
  0188e08  lis 4, 116
  0188e0c  lis 7, 116
  0188e10  lis 6, 114
  0188e14  lfs 2, 0(3)
  0188e18  lfs 3, -1948(5)
  0188e1c  lfs 4, -1944(4)
  0188e20  lfs 1, 16(3)
  0188e24  fmuls 3, 3, 2
  0188e28  lfs 5, -1940(7)
  0188e2c  fmuls 4, 4, 2
  0188e30  lis 4, 16262
  0188e34  lfs 6, -3048(6)
  0188e38  fmuls 5, 5, 2
  0188e3c  addic 3, 30, 20
  0188e40  ori 29, 4, 2706
  0188e44  lis 4, 114
  0188e48  addic 5, 30, 32
  0188e4c  lfs 7, -3052(4)
  0188e50  fmuls 2, 3, 6
  0188e54  fmuls 3, 4, 6
  0188e58  fmuls 4, 5, 7
  0188e5c  bl 0x10a2e0
  0188e60  nop
  0188e64  lfs 1, 16(30)
  0188e68  lfs 2, 20(30)
  0188e6c  bl 0x5025e0
  0188e70  nop
  0188e74  stfs 1, 64(31)
  0188e78  lwz 3, 20(30)
  0188e7c  srawi 4, 3, 31
  0188e80  srwi 5, 4, 1
  0188e84  xor 3, 5, 3
  0188e88  subc 3, 3, 4
  0188e8c  cmpw 3, 29
  0188e90  bt 0, 0x188f8c
  0188e94  li 3, 4
  0188e98  lbz 6, 32(31)
  0188e9c  li 5, 6
  0188ea0  li 7, 7
  0188ea4  lhz 8, 52(31)
  0188ea8  subc 3, 3, 6
  0188eac  subc 5, 5, 7
  0188eb0  cntlzw 3, 3
  0188eb4  ori 6, 8, 1
  0188eb8  sldi 3, 3, 58
  0188ebc  li 4, 0
  0188ec0  sradi 3, 3, 63
  0188ec4  sth 6, 52(31)
  0188ec8  and 3, 3, 5
  0188ecc  stb 4, 49(31)
  0188ed0  addc 3, 7, 3
  0188ed4  stb 3, 32(31)
  0188ed8  b 0x188f8c
  0188edc  lis 3, 25
  0188ee0  lis 5, 116
  0188ee4  addi 4, 3, -30384
  0188ee8  lis 3, 116
  0188eec  lis 7, 116
  0188ef0  lis 6, 114
  0188ef4  lfs 2, 0(4)
  0188ef8  lfs 3, -1948(5)
  0188efc  lfs 4, -1944(3)
  0188f00  lfs 1, 4(4)
  0188f04  fmuls 3, 3, 2
  0188f08  lfs 5, -1940(7)
  0188f0c  fmuls 4, 4, 2
  0188f10  lis 4, 114
  0188f14  lfs 6, -3048(6)
  0188f18  fmuls 5, 5, 2
  0188f1c  addic 3, 30, 20
  0188f20  addic 5, 30, 32
  0188f24  lfs 7, -3052(4)
  0188f28  fmuls 2, 3, 6
  0188f2c  fmuls 3, 4, 6
  0188f30  fmuls 4, 5, 7
  0188f34  bl 0x10a2e0
  0188f38  nop
  0188f3c  lfs 1, 16(30)
  0188f40  lfs 2, 20(30)
  0188f44  bl 0x5025e0
  0188f48  nop
  0188f4c  stfs 1, 64(31)
  0188f50  lwz 3, 20(30)
  0188f54  cmpwi 3, 0
  0188f58  bt 1, 0x188f8c
  0188f5c  li 4, 8
  0188f60  lbz 6, 32(31)
  0188f64  li 3, 2
  0188f68  li 5, 3
  0188f6c  subc 4, 4, 6
  0188f70  subc 3, 3, 5
  0188f74  cntlzw 4, 4
  0188f78  sldi 4, 4, 58
  0188f7c  sradi 4, 4, 63
  0188f80  and 3, 4, 3
  0188f84  addc 3, 5, 3
  0188f88  stb 3, 32(31)
  0188f8c  ld 0, 192(1)
  0188f90  mtlr 0
  0188f94  lfd 31, 168(1)
  0188f98  ld 27, 128(1)
  0188f9c  ld 28, 136(1)
  0188fa0  ld 29, 144(1)
  0188fa4  ld 30, 152(1)
  0188fa8  ld 31, 160(1)
  0188fac  addi 1, 1, 176
  0188fb0  blr

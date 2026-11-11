# game/collproc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_COLL:   # 0x55aa4, 0x14 bytes
  0055aa4  lis 3, 114
  0055aa8  lis 4, 1
  0055aac  addic 3, 3, -5540
  0055ab0  stw 4, 72(3)
  0055ab4  blr

STUB_00055ab8_RET_0:   # 0x55ab8, 0x8 bytes
  0055ab8  li 3, 0
  0055abc  blr

STUB_00055ac0_RET_0:   # 0x55ac0, 0x8 bytes
  0055ac0  li 3, 0
  0055ac4  blr

STUB_00055ac8_RET_0:   # 0x55ac8, 0x8 bytes
  0055ac8  li 3, 0
  0055acc  blr

Coll_ComputeVertOutcodes:   # 0x55ad0, 0x160 bytes
  0055ad0  stdu 1, -96(1)
  0055ad4  ori 11, 5, 0
  0055ad8  ori 12, 7, 0
  0055adc  li 5, 96
  0055ae0  std 30, 80(1)
  0055ae4  ori 7, 8, 0
  0055ae8  addc 5, 1, 5
  0055aec  std 31, 88(1)
  0055af0  rldicl 30, 7, 32, 32
  0055af4  ori 31, 9, 0
  0055af8  li 8, 0
  0055afc  rldicl 10, 10, 32, 32
  0055b00  ori 7, 8, 0
  0055b04  std 12, 80(5)
  0055b08  stw 30, 88(5)
  0055b0c  ori 9, 11, 0
  0055b10  cmpw 6, 7
  0055b14  std 31, 96(5)
  0055b18  std 29, 72(1)
  0055b1c  std 28, 64(1)
  0055b20  std 27, 56(1)
  0055b24  std 26, 48(1)
  0055b28  stw 10, 104(5)
  0055b2c  bf 1, 0x55c0c
  0055b30  ori 12, 9, 0
  0055b34  ori 11, 8, 0
  0055b38  lfs 3, 0(12)
  0055b3c  ori 26, 7, 0
  0055b40  lfs 1, 96(5)
  0055b44  li 10, 1
  0055b48  lfs 2, 4(12)
  0055b4c  fcmpu 0, 3, 1
  0055b50  lfs 1, 8(12)
  0055b54  cror 6, 0, 2
  0055b58  bt 6, 0x55b60
  0055b5c  ori 26, 10, 0
  0055b60  lfs 4, 100(5)
  0055b64  ori 27, 7, 0
  0055b68  fcmpu 0, 2, 4
  0055b6c  cror 6, 0, 2
  0055b70  bt 6, 0x55b78
  0055b74  ori 27, 10, 0
  0055b78  lfs 4, 104(5)
  0055b7c  ori 28, 7, 0
  0055b80  fcmpu 0, 1, 4
  0055b84  cror 6, 0, 2
  0055b88  bt 6, 0x55b90
  0055b8c  ori 28, 10, 0
  0055b90  lfs 4, 80(5)
  0055b94  ori 29, 7, 0
  0055b98  fcmpu 0, 3, 4
  0055b9c  cror 6, 1, 2
  0055ba0  bt 6, 0x55ba8
  0055ba4  ori 29, 10, 0
  0055ba8  lfs 3, 84(5)
  0055bac  ori 30, 7, 0
  0055bb0  fcmpu 0, 2, 3
  0055bb4  cror 6, 1, 2
  0055bb8  bt 6, 0x55bc0
  0055bbc  ori 30, 10, 0
  0055bc0  lfs 2, 88(5)
  0055bc4  ori 31, 7, 0
  0055bc8  fcmpu 0, 1, 2
  0055bcc  cror 6, 1, 2
  0055bd0  bt 6, 0x55bd8
  0055bd4  ori 31, 10, 0
  0055bd8  slwi 10, 30, 8
  0055bdc  rlwimi 29, 26, 1, 30, 30
  0055be0  rlwimi 10, 27, 9, 22, 22
  0055be4  slwi 31, 31, 16
  0055be8  or 10, 29, 10
  0055bec  rlwimi 31, 28, 17, 14, 14
  0055bf0  addic 8, 8, 1
  0055bf4  or 10, 10, 31
  0055bf8  cmpw 8, 6
  0055bfc  addic 12, 12, 12
  0055c00  stwx 10, 4, 11
  0055c04  addic 11, 11, 4
  0055c08  bt 0, 0x55b38
  0055c0c  stw 9, 0(3)
  0055c10  ld 26, 48(1)
  0055c14  ld 27, 56(1)
  0055c18  ld 28, 64(1)
  0055c1c  ld 29, 72(1)
  0055c20  ld 30, 80(1)
  0055c24  ld 31, 88(1)
  0055c28  addi 1, 1, 96
  0055c2c  blr

Coll_AddDamage:   # 0x55c30, 0x134 bytes
  0055c30  cmpwi 1, 5, 0
  0055c34  lbz 5, 164(3)
  0055c38  extsb 6, 5
  0055c3c  cmpwi 6, 0
  0055c40  bt 0, 0x55c78
  0055c44  lis 6, 161
  0055c48  rlwinm 5, 5, 6, 18, 25
  0055c4c  addic 6, 6, 19456
  0055c50  addc 5, 6, 5
  0055c54  clrldi 5, 5, 32
  0055c58  lwz 6, 52(5)
  0055c5c  cmpw 3, 6
  0055c60  bf 2, 0x55c78
  0055c64  lfs 1, 44(5)
  0055c68  lfs 2, 28(4)
  0055c6c  fcmpu 0, 1, 2
  0055c70  cror 2, 1, 2
  0055c74  bt 2, 0x55d60
  0055c78  ori 5, 3, 0
  0055c7c  lis 3, 161
  0055c80  ori 7, 4, 0
  0055c84  addic 3, 3, 2368
  0055c88  lis 4, 161
  0055c8c  addic 4, 4, 19456
  0055c90  lwz 6, 20(3)
  0055c94  addic 8, 6, 1
  0055c98  rlwinm 10, 6, 6, 18, 25
  0055c9c  stb 6, 164(5)
  0055ca0  srawi 9, 8, 6
  0055ca4  addze 9, 9
  0055ca8  addc 6, 4, 10
  0055cac  sldi 4, 9, 6
  0055cb0  clrldi 6, 6, 32
  0055cb4  subc 4, 8, 4
  0055cb8  addic 9, 6, 16
  0055cbc  addic 8, 6, 16
  0055cc0  stw 4, 20(3)
  0055cc4  lfs 1, 0(7)
  0055cc8  li 4, 0
  0055ccc  stfs 1, 0(9)
  0055cd0  lfs 1, 4(7)
  0055cd4  stfs 1, 4(8)
  0055cd8  lfs 1, 8(7)
  0055cdc  stfs 1, 8(8)
  0055ce0  lfs 1, 12(7)
  0055ce4  stfs 1, 12(8)
  0055ce8  lfs 1, 32(3)
  0055cec  stfs 1, 0(6)
  0055cf0  lfs 1, 36(3)
  0055cf4  stfs 1, 4(6)
  0055cf8  lfs 1, 40(3)
  0055cfc  stfs 1, 8(6)
  0055d00  lfs 1, 44(3)
  0055d04  stw 4, 56(6)
  0055d08  stfs 1, 12(6)
  0055d0c  lwz 4, 16(7)
  0055d10  stw 4, 32(6)
  0055d14  lwz 4, 20(7)
  0055d18  stw 4, 36(6)
  0055d1c  lbz 4, 24(7)
  0055d20  stb 4, 40(6)
  0055d24  lbz 8, 25(7)
  0055d28  li 4, -32
  0055d2c  stb 8, 41(6)
  0055d30  lhz 8, 26(7)
  0055d34  sth 8, 42(6)
  0055d38  lfs 1, 28(7)
  0055d3c  stfs 1, 44(6)
  0055d40  lwz 7, 32(7)
  0055d44  stw 5, 52(6)
  0055d48  stw 7, 48(6)
  0055d4c  lwz 5, 148(5)
  0055d50  bf 4, 0x55d58
  0055d54  addc 4, 3, 5
  0055d58  srawi 3, 4, 5
  0055d5c  stw 3, 56(6)
  0055d60  blr

CollLineVsSphere:   # 0x55d70, 0x2ac bytes
  0055d70  stdu 1, -112(1)
  0055d74  stfd 29, 88(1)
  0055d78  stfd 30, 96(1)
  0055d7c  stfd 31, 104(1)
  0055d80  std 29, 64(1)
  0055d84  std 31, 80(1)
  0055d88  ori 31, 5, 0
  0055d8c  std 30, 72(1)
  0055d90  li 29, 112
  0055d94  std 28, 56(1)
  0055d98  rldicl 30, 6, 32, 32
  0055d9c  addc 28, 1, 29
  0055da0  addic 11, 29, 48
  0055da4  std 27, 48(1)
  0055da8  addic 12, 29, 64
  0055dac  ori 27, 7, 0
  0055db0  addic 5, 29, 56
  0055db4  std 3, 48(28)
  0055db8  std 4, 56(28)
  0055dbc  rldicl 3, 8, 32, 32
  0055dc0  std 31, 64(28)
  0055dc4  addic 7, 29, 72
  0055dc8  stw 30, 72(28)
  0055dcc  addic 6, 29, 80
  0055dd0  lfs 1, 160(1)
  0055dd4  addic 31, 29, 84
  0055dd8  lfs 2, 52(28)
  0055ddc  addic 8, 29, 88
  0055de0  lfs 3, 176(1)
  0055de4  lfs 4, 68(28)
  0055de8  fsubs 1, 1, 3
  0055dec  std 27, 80(28)
  0055df0  fsubs 3, 2, 4
  0055df4  stw 3, 88(28)
  0055df8  lfs 2, 168(1)
  0055dfc  lfs 4, 184(1)
  0055e00  lfs 5, 192(1)
  0055e04  lfs 6, 84(28)
  0055e08  fsubs 4, 2, 4
  0055e0c  lfs 8, 196(1)
  0055e10  lfs 2, 196(1)
  0055e14  fmuls 7, 5, 5
  0055e18  fmuls 6, 6, 8
  0055e1c  lfs 8, 200(1)
  0055e20  fmuls 5, 1, 5
  0055e24  fmuls 9, 3, 2
  0055e28  fmuls 10, 8, 8
  0055e2c  lis 3, 5
  0055e30  fmuls 3, 3, 3
  0055e34  fmuls 12, 4, 8
  0055e38  fadds 6, 7, 6
  0055e3c  addi 27, 3, 23908
  0055e40  fadds 5, 5, 9
  0055e44  addic 4, 29, 52
  0055e48  lwz 30, 116(28)
  0055e4c  addic 3, 29, 68
  0055e50  fadds 9, 6, 10
  0055e54  fadds 12, 5, 12
  0055e58  fmuls 6, 1, 1
  0055e5c  lfs 1, 0(27)
  0055e60  fmuls 10, 4, 4
  0055e64  lfs 11, 60(28)
  0055e68  fmuls 11, 11, 11
  0055e6c  fdivs 7, 12, 9
  0055e70  fadds 3, 6, 3
  0055e74  fadds 10, 3, 10
  0055e78  fcmpu 0, 7, 1
  0055e7c  cror 6, 1, 2
  0055e80  bt 6, 0x55e88
  0055e84  fmr 7, 1
  0055e88  lis 29, 5
  0055e8c  addi 29, 29, 23908
  0055e90  lfs 8, 4(29)
  0055e94  fcmpu 0, 7, 8
  0055e98  bt 0, 0x55ea0
  0055e9c  fmr 7, 8
  0055ea0  fmr 4, 2
  0055ea4  lfsx 3, 1, 6
  0055ea8  lfsx 2, 1, 8
  0055eac  fmuls 6, 3, 7
  0055eb0  lfsx 5, 1, 12
  0055eb4  fmuls 31, 2, 7
  0055eb8  lfsx 13, 1, 3
  0055ebc  fmuls 0, 4, 7
  0055ec0  lfsx 4, 1, 7
  0055ec4  fadds 29, 5, 6
  0055ec8  lfsx 7, 1, 11
  0055ecc  lfsx 30, 1, 4
  0055ed0  lfsx 6, 1, 5
  0055ed4  fadds 13, 13, 0
  0055ed8  fadds 0, 4, 31
  0055edc  fsubs 31, 29, 7
  0055ee0  fsubs 13, 13, 30
  0055ee4  fsubs 0, 0, 6
  0055ee8  fmuls 31, 31, 31
  0055eec  fmuls 13, 13, 13
  0055ef0  fmuls 0, 0, 0
  0055ef4  fadds 13, 31, 13
  0055ef8  fadds 13, 13, 0
  0055efc  fsubs 13, 13, 11
  0055f00  fcmpu 0, 13, 1
  0055f04  cror 6, 1, 2
  0055f08  bt 6, 0x55ff4
  0055f0c  fmr 13, 10
  0055f10  lis 5, 5
  0055f14  fadds 10, 12, 12
  0055f18  addi 5, 5, 23908
  0055f1c  lfs 12, 8(5)
  0055f20  fsubs 11, 13, 11
  0055f24  fmuls 12, 9, 12
  0055f28  fmuls 13, 10, 10
  0055f2c  fmuls 12, 12, 11
  0055f30  fsubs 12, 13, 12
  0055f34  fcmpu 0, 12, 1
  0055f38  cror 6, 1, 2
  0055f3c  bt 6, 0x55f44
  0055f40  fmr 12, 1
  0055f44  fsqrts 11, 12
  0055f48  fneg 10, 10
  0055f4c  fadds 9, 9, 9
  0055f50  fadds 10, 10, 11
  0055f54  fdivs 9, 10, 9
  0055f58  fneg 9, 9
  0055f5c  fcmpu 0, 9, 1
  0055f60  cror 6, 1, 2
  0055f64  bt 6, 0x55f6c
  0055f68  fmr 9, 1
  0055f6c  fcmpu 0, 9, 8
  0055f70  cror 6, 0, 2
  0055f74  bt 6, 0x55f7c
  0055f78  fmr 9, 8
  0055f7c  lfsx 8, 1, 31
  0055f80  fmr 10, 4
  0055f84  lfs 4, 8(9)
  0055f88  fmuls 12, 3, 9
  0055f8c  lfsx 11, 1, 3
  0055f90  fsubs 4, 4, 9
  0055f94  lfsx 13, 1, 4
  0055f98  fmuls 8, 8, 9
  0055f9c  fmuls 2, 2, 9
  0055fa0  fcmpu 0, 4, 1
  0055fa4  fadds 4, 5, 12
  0055fa8  fadds 3, 11, 8
  0055fac  fadds 5, 10, 2
  0055fb0  cror 6, 0, 2
  0055fb4  fsubs 2, 4, 7
  0055fb8  fsubs 1, 3, 13
  0055fbc  fsubs 7, 5, 6
  0055fc0  bt 6, 0x55ff4
  0055fc4  neg 3, 10
  0055fc8  addic 4, 9, 12
  0055fcc  stw 30, 4(9)
  0055fd0  addic 5, 9, 24
  0055fd4  stw 3, 0(9)
  0055fd8  stfs 9, 8(9)
  0055fdc  stfs 4, 0(4)
  0055fe0  stfs 3, 4(4)
  0055fe4  stfs 5, 8(4)
  0055fe8  stfs 2, 0(5)
  0055fec  stfs 1, 4(5)
  0055ff0  stfs 7, 8(5)
  0055ff4  lfd 29, 88(1)
  0055ff8  lfd 30, 96(1)
  0055ffc  lfd 31, 104(1)
  0056000  ld 27, 48(1)
  0056004  ld 28, 56(1)
  0056008  ld 29, 64(1)
  005600c  ld 30, 72(1)
  0056010  ld 31, 80(1)
  0056014  addi 1, 1, 112
  0056018  blr

CollLineVsTri:   # 0x56020, 0x4b0 bytes
  0056020  stdu 1, -240(1)
  0056024  stfd 14, 96(1)
  0056028  stfd 15, 104(1)
  005602c  stfd 16, 112(1)
  0056030  stfd 17, 120(1)
  0056034  stfd 18, 128(1)
  0056038  stfd 19, 136(1)
  005603c  stfd 20, 144(1)
  0056040  stfd 21, 152(1)
  0056044  stfd 22, 160(1)
  0056048  stfd 23, 168(1)
  005604c  stfd 24, 176(1)
  0056050  stfd 25, 184(1)
  0056054  stfd 26, 192(1)
  0056058  stfd 27, 200(1)
  005605c  stfd 28, 208(1)
  0056060  stfd 29, 216(1)
  0056064  stfd 30, 224(1)
  0056068  stfd 31, 232(1)
  005606c  std 30, 80(1)
  0056070  std 29, 72(1)
  0056074  ori 30, 3, 0
  0056078  ori 29, 5, 0
  005607c  li 5, 240
  0056080  std 31, 88(1)
  0056084  rldicl 7, 9, 32, 32
  0056088  addc 31, 1, 5
  005608c  lbz 9, 0(30)
  0056090  addic 3, 5, 88
  0056094  lbz 11, 1(30)
  0056098  addic 5, 5, 96
  005609c  std 28, 64(1)
  00560a0  lbz 12, 2(30)
  00560a4  std 27, 56(1)
  00560a8  slwi 28, 9, 2
  00560ac  slwi 27, 11, 2
  00560b0  std 8, 88(31)
  00560b4  std 26, 48(1)
  00560b8  stw 7, 96(31)
  00560bc  slwi 26, 12, 2
  00560c0  lfs 26, 112(31)
  00560c4  lfs 8, 116(31)
  00560c8  lfs 7, 120(31)
  00560cc  lwzx 7, 29, 28
  00560d0  lfs 6, 128(31)
  00560d4  lfs 5, 132(31)
  00560d8  lfs 4, 136(31)
  00560dc  lwzx 8, 29, 27
  00560e0  lfs 12, 144(31)
  00560e4  lfs 1, 148(31)
  00560e8  lfs 2, 152(31)
  00560ec  and 28, 7, 8
  00560f0  lwz 7, 164(31)
  00560f4  lbz 8, 3(30)
  00560f8  lwzx 30, 29, 26
  00560fc  and 30, 28, 30
  0056100  cmpwi 30, 0
  0056104  bf 2, 0x56468
  0056108  rlwinm 30, 8, 0, 24, 24
  005610c  and 30, 30, 10
  0056110  cmpwi 30, 0
  0056114  bf 2, 0x56468
  0056118  rlwinm 28, 10, 0, 26, 26
  005611c  li 29, 0
  0056120  cmplwi 28, 1
  0056124  ori 30, 29, 0
  0056128  bf 0, 0x56130
  005612c  li 30, 1
  0056130  srwi 28, 10, 8
  0056134  xor 28, 28, 8
  0056138  clrlwi 28, 28, 27
  005613c  or 30, 30, 28
  0056140  cmpwi 30, 0
  0056144  bt 2, 0x56468
  0056148  addc 30, 9, 9
  005614c  fmr 9, 2
  0056150  addc 28, 11, 11
  0056154  fmr 10, 1
  0056158  addc 9, 9, 30
  005615c  addc 11, 11, 28
  0056160  sldi 9, 9, 2
  0056164  addc 30, 12, 12
  0056168  addc 9, 4, 9
  005616c  sldi 11, 11, 2
  0056170  clrldi 9, 9, 32
  0056174  addc 12, 12, 30
  0056178  addc 11, 4, 11
  005617c  sldi 12, 12, 2
  0056180  clrldi 11, 11, 32
  0056184  addc 4, 4, 12
  0056188  lfs 2, 0(9)
  005618c  lfs 1, 4(9)
  0056190  clrldi 4, 4, 32
  0056194  lfs 3, 8(9)
  0056198  lfs 31, 0(11)
  005619c  fsubs 27, 2, 12
  00561a0  lfs 0, 4(11)
  00561a4  fsubs 23, 1, 10
  00561a8  lfs 13, 8(11)
  00561ac  fsubs 31, 31, 2
  00561b0  fsubs 0, 0, 1
  00561b4  lfs 28, 0(4)
  00561b8  lfs 29, 4(4)
  00561bc  fsubs 13, 13, 3
  00561c0  lfs 30, 8(4)
  00561c4  fsubs 28, 28, 2
  00561c8  fsubs 29, 29, 1
  00561cc  fsubs 30, 30, 3
  00561d0  fsubs 25, 2, 6
  00561d4  lis 4, 5
  00561d8  fsubs 24, 1, 5
  00561dc  fsubs 19, 3, 4
  00561e0  fsubs 18, 3, 9
  00561e4  addi 4, 4, 24604
  00561e8  fmuls 11, 28, 13
  00561ec  fmuls 12, 29, 13
  00561f0  fmuls 10, 30, 0
  00561f4  fmuls 22, 30, 31
  00561f8  fmuls 21, 28, 0
  00561fc  fmuls 20, 29, 31
  0056200  lfs 9, 0(4)
  0056204  fsubs 12, 12, 10
  0056208  fsubs 11, 22, 11
  005620c  fsubs 10, 21, 20
  0056210  fmuls 22, 26, 12
  0056214  fmuls 21, 8, 11
  0056218  fmuls 25, 25, 12
  005621c  fmuls 24, 24, 11
  0056220  fmuls 20, 7, 10
  0056224  fmuls 27, 27, 12
  0056228  fmuls 23, 23, 11
  005622c  fmuls 19, 19, 10
  0056230  fadds 22, 22, 21
  0056234  fmuls 21, 18, 10
  0056238  fadds 25, 25, 24
  005623c  fadds 27, 27, 23
  0056240  fadds 24, 22, 20
  0056244  fadds 25, 25, 19
  0056248  fadds 23, 27, 21
  005624c  fcmpu 0, 24, 9
  0056250  fdivs 27, 25, 24
  0056254  fcmpu 1, 23, 9
  0056258  fcmpu 6, 25, 9
  005625c  bt 2, 0x56468
  0056260  rlwinm 4, 10, 0, 27, 27
  0056264  cmpwi 4, 0
  0056268  bf 2, 0x5627c
  005626c  fcmpu 0, 25, 9
  0056270  cror 2, 1, 2
  0056274  bt 2, 0x56468
  0056278  bf 5, 0x56468
  005627c  ori 4, 29, 0
  0056280  bf 25, 0x56288
  0056284  li 4, 1
  0056288  ori 9, 29, 0
  005628c  bf 24, 0x56294
  0056290  li 9, 1
  0056294  subc 4, 4, 9
  0056298  ori 9, 29, 0
  005629c  bf 5, 0x562a4
  00562a0  li 9, 1
  00562a4  bf 4, 0x562ac
  00562a8  li 29, 1
  00562ac  subc 9, 9, 29
  00562b0  cmpw 4, 9
  00562b4  bt 2, 0x56468
  00562b8  fmr 25, 5
  00562bc  lfs 5, 92(31)
  00562c0  fmuls 8, 8, 27
  00562c4  lfsx 24, 1, 3
  00562c8  fadds 5, 1, 5
  00562cc  lfsx 23, 1, 5
  00562d0  fmuls 26, 26, 27
  00562d4  fmuls 7, 7, 27
  00562d8  fsubs 22, 6, 2
  00562dc  fadds 6, 2, 24
  00562e0  fsubs 1, 25, 1
  00562e4  fsubs 25, 4, 3
  00562e8  fadds 4, 3, 23
  00562ec  fadds 3, 22, 26
  00562f0  fsubs 26, 30, 13
  00562f4  fadds 2, 1, 8
  00562f8  fadds 1, 25, 7
  00562fc  fsubs 7, 28, 31
  0056300  fsubs 8, 29, 0
  0056304  fmuls 25, 3, 13
  0056308  fmuls 19, 30, 3
  005630c  fsubs 17, 3, 31
  0056310  fmuls 24, 2, 13
  0056314  fmuls 22, 1, 31
  0056318  fmuls 23, 1, 0
  005631c  fmuls 21, 29, 1
  0056320  fmuls 20, 30, 2
  0056324  fmuls 18, 28, 1
  0056328  fsubs 16, 2, 0
  005632c  fsubs 15, 1, 13
  0056330  fsubs 25, 22, 25
  0056334  fsubs 24, 24, 23
  0056338  fmuls 23, 3, 0
  005633c  fsubs 22, 21, 20
  0056340  fmuls 21, 2, 31
  0056344  fsubs 20, 19, 18
  0056348  fmuls 19, 28, 2
  005634c  fmuls 18, 29, 3
  0056350  fmuls 14, 16, 26
  0056354  fmuls 26, 17, 26
  0056358  fmuls 25, 25, 11
  005635c  fmuls 24, 24, 12
  0056360  fmuls 22, 22, 12
  0056364  fsubs 23, 23, 21
  0056368  fmuls 20, 20, 11
  005636c  fsubs 21, 19, 18
  0056370  fmuls 19, 15, 8
  0056374  fmuls 18, 15, 7
  0056378  fmuls 8, 17, 8
  005637c  fmuls 7, 16, 7
  0056380  fadds 25, 24, 25
  0056384  fmuls 24, 23, 10
  0056388  fadds 22, 22, 20
  005638c  fmuls 21, 21, 10
  0056390  fsubs 23, 14, 19
  0056394  fsubs 26, 18, 26
  0056398  fsubs 7, 8, 7
  005639c  fadds 8, 25, 24
  00563a0  fadds 24, 22, 21
  00563a4  fmuls 25, 23, 12
  00563a8  fmuls 26, 26, 11
  00563ac  fmuls 7, 7, 10
  00563b0  fcmpu 0, 8, 9
  00563b4  lfs 8, 8(6)
  00563b8  fcmpu 1, 24, 9
  00563bc  fsubs 8, 8, 27
  00563c0  fadds 26, 25, 26
  00563c4  cror 2, 0, 4
  00563c8  fadds 7, 26, 7
  00563cc  bt 2, 0x56468
  00563d0  fcmpu 0, 7, 9
  00563d4  bt 0, 0x56468
  00563d8  fcmpu 0, 8, 9
  00563dc  cror 6, 0, 2
  00563e0  bt 6, 0x56468
  00563e4  fadds 3, 3, 6
  00563e8  fadds 2, 2, 5
  00563ec  addic 3, 8, 4096
  00563f0  fadds 1, 1, 4
  00563f4  addic 4, 6, 12
  00563f8  fadds 7, 31, 6
  00563fc  addic 5, 6, 24
  0056400  fadds 8, 0, 5
  0056404  addic 8, 6, 36
  0056408  stw 3, 0(6)
  005640c  fadds 9, 13, 4
  0056410  stw 7, 4(6)
  0056414  fadds 13, 28, 6
  0056418  stfs 27, 8(6)
  005641c  fadds 0, 29, 5
  0056420  fadds 31, 30, 4
  0056424  addic 3, 6, 48
  0056428  addic 6, 6, 60
  005642c  stfs 3, 0(4)
  0056430  stfs 2, 4(4)
  0056434  stfs 1, 8(4)
  0056438  stfs 12, 0(5)
  005643c  stfs 11, 4(5)
  0056440  stfs 10, 8(5)
  0056444  stfs 6, 0(8)
  0056448  stfs 5, 4(8)
  005644c  stfs 4, 8(8)
  0056450  stfs 7, 0(3)
  0056454  stfs 8, 4(3)
  0056458  stfs 9, 8(3)
  005645c  stfs 13, 0(6)
  0056460  stfs 0, 4(6)
  0056464  stfs 31, 8(6)
  0056468  lfd 14, 96(1)
  005646c  lfd 15, 104(1)
  0056470  lfd 16, 112(1)
  0056474  lfd 17, 120(1)
  0056478  lfd 18, 128(1)
  005647c  lfd 19, 136(1)
  0056480  lfd 20, 144(1)
  0056484  lfd 21, 152(1)
  0056488  lfd 22, 160(1)
  005648c  lfd 23, 168(1)
  0056490  lfd 24, 176(1)
  0056494  lfd 25, 184(1)
  0056498  lfd 26, 192(1)
  005649c  lfd 27, 200(1)
  00564a0  lfd 28, 208(1)
  00564a4  lfd 29, 216(1)
  00564a8  lfd 30, 224(1)
  00564ac  lfd 31, 232(1)
  00564b0  ld 26, 48(1)
  00564b4  ld 27, 56(1)
  00564b8  ld 28, 64(1)
  00564bc  ld 29, 72(1)
  00564c0  ld 30, 80(1)
  00564c4  ld 31, 88(1)
  00564c8  addi 1, 1, 240
  00564cc  blr

CollMoby_TransformVerts:   # 0x564d0, 0x560 bytes
  00564d0  stdu 1, -208(1)
  00564d4  mflr 0
  00564d8  std 0, 224(1)
  00564dc  std 29, 184(1)
  00564e0  ori 11, 6, 0
  00564e4  std 31, 200(1)
  00564e8  ori 29, 9, 0
  00564ec  li 31, 208
  00564f0  lwz 6, 148(3)
  00564f4  addc 12, 1, 31
  00564f8  std 30, 192(1)
  00564fc  rldicl 9, 7, 32, 32
  0056500  ori 30, 10, 0
  0056504  std 28, 176(1)
  0056508  rldicl 5, 5, 32, 32
  005650c  lwz 28, 148(12)
  0056510  lwz 7, 4(6)
  0056514  lwz 10, 12(6)
  0056518  addc 7, 6, 7
  005651c  srawi 6, 10, 4
  0056520  std 4, 56(12)
  0056524  addic 7, 7, 16
  0056528  stw 5, 64(12)
  005652c  slwi 4, 6, 4
  0056530  std 11, 72(12)
  0056534  clrldi 7, 7, 32
  0056538  stw 9, 80(12)
  005653c  addic 11, 31, 88
  0056540  std 8, 88(12)
  0056544  addc 4, 7, 4
  0056548  addic 9, 31, 96
  005654c  addic 10, 31, 104
  0056550  lwz 31, 156(12)
  0056554  stw 4, 0(28)
  0056558  cmpwi 6, 150
  005655c  std 29, 96(12)
  0056560  li 8, -1
  0056564  lwz 29, 148(3)
  0056568  std 30, 104(12)
  005656c  lwz 4, 132(12)
  0056570  lwz 5, 140(12)
  0056574  lwz 30, 8(29)
  0056578  srawi 30, 30, 2
  005657c  std 27, 168(1)
  0056580  std 26, 160(1)
  0056584  std 25, 152(1)
  0056588  std 24, 144(1)
  005658c  std 23, 136(1)
  0056590  std 22, 128(1)
  0056594  stw 30, 0(31)
  0056598  bf 1, 0x567e8
  005659c  li 31, 0
  00565a0  ori 29, 31, 0
  00565a4  mulli 28, 31, 3112
  00565a8  lis 27, 149
  00565ac  extsw 30, 28
  00565b0  addic 27, 27, 16576
  00565b4  lwzx 26, 27, 30
  00565b8  cmpwi 26, 0
  00565bc  bf 2, 0x565d4
  00565c0  lhz 3, 166(3)
  00565c4  ori 8, 31, 0
  00565c8  extsh 3, 3
  00565cc  stwx 3, 27, 30
  00565d0  b 0x567e8
  00565d4  lhz 26, 166(3)
  00565d8  lwzx 30, 27, 30
  00565dc  extsh 26, 26
  00565e0  cmpw 30, 26
  00565e4  bf 2, 0x567dc
  00565e8  addic 3, 27, 4
  00565ec  lfsx 2, 1, 11
  00565f0  ori 8, 29, 0
  00565f4  addc 3, 3, 28
  00565f8  lfs 1, 92(12)
  00565fc  ori 30, 8, 0
  0056600  clrldi 3, 3, 32
  0056604  lfs 3, 0(3)
  0056608  fcmpu 0, 2, 3
  005660c  lfsx 2, 1, 9
  0056610  lfs 3, 100(12)
  0056614  lfsx 4, 1, 10
  0056618  lfs 5, 108(12)
  005661c  lfs 6, 112(12)
  0056620  lfs 7, 116(12)
  0056624  lfs 8, 120(12)
  0056628  bf 2, 0x56644
  005662c  lfs 9, 4(3)
  0056630  fcmpu 0, 1, 9
  0056634  bf 2, 0x56644
  0056638  lfs 1, 8(3)
  005663c  fcmpu 0, 2, 1
  0056640  bt 2, 0x56648
  0056644  li 30, 1
  0056648  cmpwi 30, 0
  005664c  bf 2, 0x566b8
  0056650  lfs 1, 12(3)
  0056654  ori 30, 29, 0
  0056658  fcmpu 0, 3, 1
  005665c  bf 2, 0x56678
  0056660  lfs 1, 16(3)
  0056664  fcmpu 0, 4, 1
  0056668  bf 2, 0x56678
  005666c  lfs 1, 20(3)
  0056670  fcmpu 0, 5, 1
  0056674  bt 2, 0x5667c
  0056678  li 30, 1
  005667c  cmpwi 30, 0
  0056680  bf 2, 0x566b8
  0056684  lfs 1, 24(3)
  0056688  ori 30, 29, 0
  005668c  fcmpu 0, 6, 1
  0056690  bf 2, 0x566ac
  0056694  lfs 1, 28(3)
  0056698  fcmpu 0, 7, 1
  005669c  bf 2, 0x566ac
  00566a0  lfs 1, 32(3)
  00566a4  fcmpu 0, 8, 1
  00566a8  bt 2, 0x566b0
  00566ac  li 30, 1
  00566b0  cmpwi 30, 0
  00566b4  bt 2, 0x566bc
  00566b8  li 8, 1
  00566bc  cmpwi 8, 0
  00566c0  bt 2, 0x566cc
  00566c4  ori 8, 31, 0
  00566c8  b 0x567e8
  00566cc  ori 3, 29, 0
  00566d0  cmpw 6, 3
  00566d4  bf 1, 0x569f8
  00566d8  addc 7, 3, 3
  00566dc  addic 8, 27, 40
  00566e0  lfs 3, 72(12)
  00566e4  addc 7, 3, 7
  00566e8  sldi 7, 7, 2
  00566ec  addc 8, 7, 8
  00566f0  addc 7, 4, 7
  00566f4  addc 8, 8, 28
  00566f8  clrldi 9, 7, 32
  00566fc  clrldi 8, 8, 32
  0056700  ori 7, 29, 0
  0056704  lfs 1, 0(8)
  0056708  lfs 2, 4(8)
  005670c  fcmpu 0, 1, 3
  0056710  lfs 3, 8(8)
  0056714  stfs 1, 0(9)
  0056718  stfs 2, 4(9)
  005671c  stfs 3, 8(9)
  0056720  cror 6, 0, 2
  0056724  bt 6, 0x5672c
  0056728  li 7, 1
  005672c  lfs 4, 76(12)
  0056730  ori 8, 29, 0
  0056734  fcmpu 0, 2, 4
  0056738  cror 6, 0, 2
  005673c  bt 6, 0x56744
  0056740  li 8, 1
  0056744  lfs 4, 80(12)
  0056748  ori 9, 29, 0
  005674c  fcmpu 0, 3, 4
  0056750  cror 6, 0, 2
  0056754  bt 6, 0x5675c
  0056758  li 9, 1
  005675c  lfs 4, 56(12)
  0056760  ori 10, 29, 0
  0056764  fcmpu 0, 1, 4
  0056768  cror 6, 1, 2
  005676c  bt 6, 0x56774
  0056770  li 10, 1
  0056774  lfs 1, 60(12)
  0056778  ori 11, 29, 0
  005677c  fcmpu 0, 2, 1
  0056780  cror 6, 1, 2
  0056784  bt 6, 0x5678c
  0056788  li 11, 1
  005678c  lfs 1, 64(12)
  0056790  ori 31, 29, 0
  0056794  fcmpu 0, 3, 1
  0056798  cror 6, 1, 2
  005679c  bt 6, 0x567a4
  00567a0  li 31, 1
  00567a4  slwi 11, 11, 8
  00567a8  rlwimi 10, 7, 1, 30, 30
  00567ac  rlwimi 11, 8, 9, 22, 22
  00567b0  slwi 7, 31, 16
  00567b4  slwi 30, 3, 2
  00567b8  rlwimi 7, 9, 17, 14, 14
  00567bc  or 8, 10, 11
  00567c0  extsw 9, 30
  00567c4  or 7, 8, 7
  00567c8  addic 3, 3, 1
  00567cc  cmpw 3, 6
  00567d0  stwx 7, 5, 9
  00567d4  bt 0, 0x566d8
  00567d8  b 0x569f8
  00567dc  addic 31, 31, 1
  00567e0  cmpwi 31, 8
  00567e4  bt 0, 0x565a4
  00567e8  li 3, 0
  00567ec  ori 22, 3, 0
  00567f0  cmpw 6, 22
  00567f4  bf 1, 0x5696c
  00567f8  ori 25, 3, 0
  00567fc  ori 24, 4, 0
  0056800  ori 23, 25, 0
  0056804  addic 31, 7, 4
  0056808  lfsx 1, 7, 25
  005680c  addic 30, 7, 8
  0056810  lfsx 2, 1, 11
  0056814  addc 31, 31, 25
  0056818  lfs 3, 100(12)
  005681c  addc 30, 30, 25
  0056820  fmuls 2, 2, 1
  0056824  clrldi 31, 31, 32
  0056828  clrldi 30, 30, 32
  005682c  lfs 4, 0(31)
  0056830  lfs 5, 0(30)
  0056834  fmuls 3, 3, 4
  0056838  lfs 6, 112(12)
  005683c  lfs 7, 92(12)
  0056840  addic 30, 1, 112
  0056844  lfsx 8, 1, 10
  0056848  fmuls 6, 6, 5
  005684c  lfsx 9, 1, 9
  0056850  fmuls 7, 7, 1
  0056854  lfs 10, 108(12)
  0056858  fmuls 8, 8, 4
  005685c  fmuls 1, 9, 1
  0056860  lfs 11, 116(12)
  0056864  fmuls 4, 10, 4
  0056868  ori 31, 22, 0
  005686c  fmuls 9, 11, 5
  0056870  fadds 2, 2, 3
  0056874  lfs 3, 120(12)
  0056878  fmuls 3, 3, 5
  005687c  fadds 5, 7, 8
  0056880  fadds 4, 1, 4
  0056884  fadds 1, 2, 6
  0056888  lfs 6, 72(12)
  005688c  fadds 2, 5, 9
  0056890  fadds 3, 4, 3
  0056894  fcmpu 0, 1, 6
  0056898  stfs 1, 0(30)
  005689c  stfs 2, 4(30)
  00568a0  stfs 3, 8(30)
  00568a4  cror 6, 0, 2
  00568a8  bt 6, 0x568b0
  00568ac  li 31, 1
  00568b0  lfs 4, 76(12)
  00568b4  ori 30, 22, 0
  00568b8  fcmpu 0, 2, 4
  00568bc  cror 6, 0, 2
  00568c0  bt 6, 0x568c8
  00568c4  li 30, 1
  00568c8  lfs 4, 80(12)
  00568cc  ori 29, 22, 0
  00568d0  fcmpu 0, 3, 4
  00568d4  cror 6, 0, 2
  00568d8  bt 6, 0x568e0
  00568dc  li 29, 1
  00568e0  lfs 4, 56(12)
  00568e4  ori 28, 22, 0
  00568e8  fcmpu 0, 1, 4
  00568ec  cror 6, 1, 2
  00568f0  bt 6, 0x568f8
  00568f4  li 28, 1
  00568f8  lfs 4, 60(12)
  00568fc  ori 27, 22, 0
  0056900  fcmpu 0, 2, 4
  0056904  cror 6, 1, 2
  0056908  bt 6, 0x56910
  005690c  li 27, 1
  0056910  lfs 4, 64(12)
  0056914  ori 26, 22, 0
  0056918  fcmpu 0, 3, 4
  005691c  cror 6, 1, 2
  0056920  bt 6, 0x56928
  0056924  li 26, 1
  0056928  slwi 31, 31, 1
  005692c  slwi 26, 26, 16
  0056930  stfs 1, 0(24)
  0056934  rlwimi 31, 27, 8, 23, 23
  0056938  stfs 2, 4(24)
  005693c  rlwimi 26, 29, 17, 14, 14
  0056940  stfs 3, 8(24)
  0056944  or 31, 31, 28
  0056948  rlwimi 26, 30, 9, 22, 22
  005694c  addic 3, 3, 1
  0056950  or 31, 31, 26
  0056954  cmpw 3, 6
  0056958  addic 25, 25, 16
  005695c  addic 24, 24, 12
  0056960  stwx 31, 5, 23
  0056964  addic 23, 23, 4
  0056968  bt 0, 0x56804
  005696c  cmpwi 8, -1
  0056970  bt 2, 0x569f8
  0056974  mulli 3, 8, 3112
  0056978  lis 5, 149
  005697c  lwzx 7, 1, 11
  0056980  addc 29, 6, 6
  0056984  addic 5, 5, 16576
  0056988  lwz 11, 92(12)
  005698c  lwzx 9, 1, 9
  0056990  addic 8, 5, 4
  0056994  lwz 31, 100(12)
  0056998  addic 5, 5, 40
  005699c  addc 8, 8, 3
  00569a0  lwzx 10, 1, 10
  00569a4  lwz 30, 108(12)
  00569a8  addc 3, 5, 3
  00569ac  clrldi 8, 8, 32
  00569b0  lwz 28, 112(12)
  00569b4  lwz 27, 116(12)
  00569b8  addc 5, 6, 29
  00569bc  clrldi 3, 3, 32
  00569c0  sldi 5, 5, 2
  00569c4  stw 7, 0(8)
  00569c8  clrldi 5, 5, 32
  00569cc  stw 11, 4(8)
  00569d0  stw 9, 8(8)
  00569d4  stw 31, 12(8)
  00569d8  stw 10, 16(8)
  00569dc  stw 30, 20(8)
  00569e0  lwz 6, 120(12)
  00569e4  stw 28, 24(8)
  00569e8  stw 27, 28(8)
  00569ec  stw 6, 32(8)
  00569f0  bl 0x5c5ad0
  00569f4  nop
  00569f8  ld 0, 224(1)
  00569fc  mtlr 0
  0056a00  ld 22, 128(1)
  0056a04  ld 23, 136(1)
  0056a08  ld 24, 144(1)
  0056a0c  ld 25, 152(1)
  0056a10  ld 26, 160(1)
  0056a14  ld 27, 168(1)
  0056a18  ld 28, 176(1)
  0056a1c  ld 29, 184(1)
  0056a20  ld 30, 192(1)
  0056a24  ld 31, 200(1)
  0056a28  addi 1, 1, 208
  0056a2c  blr

CollMoby_GetJointCache:   # 0x56a30, 0xf4 bytes
  0056a30  stdu 1, -128(1)
  0056a34  mflr 0
  0056a38  std 0, 144(1)
  0056a3c  ori 8, 3, 0
  0056a40  lis 7, 161
  0056a44  lis 6, 161
  0056a48  ori 3, 4, 0
  0056a4c  li 5, 0
  0056a50  addic 7, 7, 2560
  0056a54  std 31, 120(1)
  0056a58  addic 6, 6, 2496
  0056a5c  ori 4, 8, 0
  0056a60  slwi 8, 5, 3
  0056a64  extsw 9, 8
  0056a68  lwz 8, 168(4)
  0056a6c  lwzx 9, 6, 9
  0056a70  cmpw 9, 8
  0056a74  bf 2, 0x56a94
  0056a78  sldi 3, 5, 2
  0056a7c  subfic 4, 3, 0
  0056a80  sldi 3, 3, 9
  0056a84  addc 3, 4, 3
  0056a88  addc 3, 7, 3
  0056a8c  clrldi 3, 3, 32
  0056a90  b 0x56b10
  0056a94  addic 5, 5, 1
  0056a98  cmpwi 5, 8
  0056a9c  bt 0, 0x56a60
  0056aa0  ori 5, 4, 0
  0056aa4  lis 4, 161
  0056aa8  addic 9, 4, 2368
  0056aac  lwz 4, 12(9)
  0056ab0  slwi 10, 4, 3
  0056ab4  addic 11, 4, 1
  0056ab8  addc 6, 6, 10
  0056abc  srawi 10, 11, 3
  0056ac0  sldi 4, 4, 2
  0056ac4  addze 10, 10
  0056ac8  sldi 12, 4, 9
  0056acc  sldi 10, 10, 3
  0056ad0  subfic 4, 4, 0
  0056ad4  clrldi 6, 6, 32
  0056ad8  subc 10, 11, 10
  0056adc  addc 4, 4, 12
  0056ae0  addc 7, 7, 4
  0056ae4  stw 10, 12(9)
  0056ae8  clrldi 31, 7, 32
  0056aec  stw 8, 0(6)
  0056af0  ori 4, 3, 0
  0056af4  lwz 7, 16(9)
  0056af8  ori 3, 5, 0
  0056afc  ori 5, 31, 0
  0056b00  stw 7, 4(6)
  0056b04  bl 0xf595c
  0056b08  nop
  0056b0c  ori 3, 31, 0
  0056b10  ld 0, 144(1)
  0056b14  mtlr 0
  0056b18  ld 31, 120(1)
  0056b1c  addi 1, 1, 128
  0056b20  blr

CollGrid_GetCell:   # 0x56b24, 0xf0 bytes
  0056b24  ori 6, 5, 0
  0056b28  lis 5, 161
  0056b2c  lwz 7, 2368(5)
  0056b30  lhz 8, 0(7)
  0056b34  extsh 8, 8
  0056b38  subc 6, 6, 8
  0056b3c  cmpwi 6, 0
  0056b40  bt 0, 0x56bfc
  0056b44  lhz 8, 2(7)
  0056b48  extsh 8, 8
  0056b4c  cmpw 6, 8
  0056b50  bf 0, 0x56bfc
  0056b54  addic 7, 7, 4
  0056b58  sldi 6, 6, 2
  0056b5c  addc 6, 7, 6
  0056b60  lwz 7, 2368(5)
  0056b64  clrldi 6, 6, 32
  0056b68  lwz 6, 0(6)
  0056b6c  addc 6, 7, 6
  0056b70  clrldi 6, 6, 32
  0056b74  lhz 7, 0(6)
  0056b78  extsh 7, 7
  0056b7c  subc 4, 4, 7
  0056b80  cmpwi 4, 0
  0056b84  bt 0, 0x56bfc
  0056b88  lhz 7, 2(6)
  0056b8c  extsh 7, 7
  0056b90  cmpw 4, 7
  0056b94  bf 0, 0x56bfc
  0056b98  addic 6, 6, 4
  0056b9c  sldi 4, 4, 2
  0056ba0  lwz 5, 2368(5)
  0056ba4  addc 4, 6, 4
  0056ba8  ori 6, 3, 0
  0056bac  clrldi 4, 4, 32
  0056bb0  lwz 3, 0(4)
  0056bb4  addc 3, 5, 3
  0056bb8  clrldi 3, 3, 32
  0056bbc  lhz 4, 0(3)
  0056bc0  extsh 4, 4
  0056bc4  subc 6, 6, 4
  0056bc8  cmpwi 6, 0
  0056bcc  bt 0, 0x56bfc
  0056bd0  lhz 4, 2(3)
  0056bd4  extsh 4, 4
  0056bd8  cmpw 6, 4
  0056bdc  bf 0, 0x56bfc
  0056be0  addic 3, 3, 4
  0056be4  sldi 4, 6, 2
  0056be8  addc 3, 3, 4
  0056bec  clrldi 3, 3, 32
  0056bf0  lwz 4, 0(3)
  0056bf4  cmpwi 4, 0
  0056bf8  bf 2, 0x56c04
  0056bfc  li 3, 0
  0056c00  b 0x56c10
  0056c04  lwz 3, 0(3)
  0056c08  addc 3, 5, 3
  0056c0c  clrldi 3, 3, 32
  0056c10  blr

CollLineVsEnv:   # 0x56c20, 0xbe4 bytes
  0056c20  stdu 1, -1440(1)
  0056c24  mflr 0
  0056c28  std 0, 1456(1)
  0056c2c  stfd 30, 1424(1)
  0056c30  stfd 31, 1432(1)
  0056c34  std 30, 1408(1)
  0056c38  ori 30, 4, 0
  0056c3c  std 18, 1312(1)
  0056c40  fmr 31, 1
  0056c44  std 14, 1280(1)
  0056c48  li 18, 1440
  0056c4c  rldicl 4, 6, 32, 32
  0056c50  std 31, 1416(1)
  0056c54  addc 14, 1, 18
  0056c58  std 27, 1384(1)
  0056c5c  ori 31, 3, 0
  0056c60  rldicl 3, 8, 32, 32
  0056c64  std 29, 1400(1)
  0056c68  addic 27, 18, 80
  0056c6c  std 25, 1368(1)
  0056c70  std 24, 1360(1)
  0056c74  addic 29, 18, 64
  0056c78  lwz 25, 116(14)
  0056c7c  std 28, 1392(1)
  0056c80  lwz 24, 124(14)
  0056c84  addic 28, 18, 72
  0056c88  std 5, 64(14)
  0056c8c  addic 6, 25, 4
  0056c90  std 17, 1304(1)
  0056c94  stw 4, 72(14)
  0056c98  slwi 17, 24, 3
  0056c9c  std 7, 80(14)
  0056ca0  rldicl 5, 10, 32, 32
  0056ca4  stw 3, 88(14)
  0056ca8  std 23, 1352(1)
  0056cac  addc 4, 6, 17
  0056cb0  addic 3, 25, 5
  0056cb4  std 9, 96(14)
  0056cb8  clrldi 23, 4, 32
  0056cbc  addc 3, 3, 17
  0056cc0  addic 4, 25, 6
  0056cc4  std 22, 1344(1)
  0056cc8  stw 5, 104(14)
  0056ccc  clrldi 22, 3, 32
  0056cd0  addc 3, 4, 17
  0056cd4  std 26, 1376(1)
  0056cd8  lbz 23, 0(23)
  0056cdc  std 21, 1336(1)
  0056ce0  addic 26, 18, 88
  0056ce4  clrldi 21, 3, 32
  0056ce8  ori 3, 23, 0
  0056cec  std 16, 1296(1)
  0056cf0  lbz 22, 0(22)
  0056cf4  std 15, 1288(1)
  0056cf8  addic 16, 18, 96
  0056cfc  addic 15, 18, 104
  0056d00  ori 4, 22, 0
  0056d04  lbz 21, 0(21)
  0056d08  std 20, 1328(1)
  0056d0c  std 19, 1320(1)
  0056d10  ori 5, 21, 0
  0056d14  bl 0x56b24
  0056d18  ori 20, 3, 0
  0056d1c  cmpwi 20, 0
  0056d20  bt 2, 0x577a4
  0056d24  lbz 19, 2(20)
  0056d28  cmpwi 19, 0
  0056d2c  bt 2, 0x577a4
  0056d30  addic 3, 25, 8
  0056d34  fmr 1, 31
  0056d38  cmpwi 24, 0
  0056d3c  addc 3, 3, 17
  0056d40  clrldi 3, 3, 32
  0056d44  lfs 2, 0(3)
  0056d48  bf 2, 0x56d70
  0056d4c  lis 3, 5
  0056d50  addi 3, 3, 27668
  0056d54  lfs 3, 0(3)
  0056d58  fcmpu 0, 31, 3
  0056d5c  bf 2, 0x56d70
  0056d60  lis 3, 5
  0056d64  fmr 2, 3
  0056d68  addi 3, 3, 27668
  0056d6c  lfs 1, 4(3)
  0056d70  li 3, 2048
  0056d74  ori 4, 3, 0
  0056d78  rlwimi 4, 23, 12, 12, 19
  0056d7c  extsw 4, 4
  0056d80  ori 5, 3, 0
  0056d84  std 4, 1264(1)
  0056d88  rlwimi 5, 22, 12, 12, 19
  0056d8c  rlwimi 3, 21, 12, 12, 19
  0056d90  extsw 4, 5
  0056d94  extsw 3, 3
  0056d98  li 0, 1248
  0056d9c  addic 5, 1, 180
  0056da0  addic 6, 1, 184
  0056da4  lfd 3, 1264(1)
  0056da8  std 4, 1264(1)
  0056dac  fcfid 3, 3
  0056db0  addic 4, 1, 176
  0056db4  frsp 3, 3
  0056db8  stfs 3, 1248(1)
  0056dbc  stfs 3, 1252(1)
  0056dc0  stfs 3, 1256(1)
  0056dc4  stfs 3, 1260(1)
  0056dc8  lfd 4, 1264(1)
  0056dcc  std 3, 1264(1)
  0056dd0  fcfid 4, 4
  0056dd4  lvx 2, 1, 0
  0056dd8  li 0, 1248
  0056ddc  vspltw 2, 2, 0
  0056de0  vspltw 2, 2, 0
  0056de4  frsp 4, 4
  0056de8  vspltw 2, 2, 0
  0056dec  addic 3, 18, 68
  0056df0  vspltw 2, 2, 0
  0056df4  vspltw 2, 2, 0
  0056df8  stfs 4, 1248(1)
  0056dfc  stfs 4, 1252(1)
  0056e00  stfs 4, 1256(1)
  0056e04  stfs 4, 1260(1)
  0056e08  lfd 5, 1264(1)
  0056e0c  lvx 3, 1, 0
  0056e10  fcfid 5, 5
  0056e14  li 0, 1248
  0056e18  vspltw 3, 3, 0
  0056e1c  vspltw 2, 2, 0
  0056e20  vspltw 3, 3, 0
  0056e24  vspltw 2, 2, 0
  0056e28  vspltw 3, 3, 0
  0056e2c  frsp 5, 5
  0056e30  vspltw 2, 2, 0
  0056e34  vspltw 3, 3, 0
  0056e38  vspltw 2, 2, 0
  0056e3c  vspltw 3, 3, 0
  0056e40  vspltw 2, 2, 0
  0056e44  vspltw 3, 3, 0
  0056e48  stfs 5, 1248(1)
  0056e4c  stfs 5, 1252(1)
  0056e50  stfs 5, 1256(1)
  0056e54  stfs 5, 1260(1)
  0056e58  lfsx 6, 1, 16
  0056e5c  lvx 4, 1, 0
  0056e60  vspltw 3, 3, 0
  0056e64  vspltw 4, 4, 0
  0056e68  vspltw 2, 2, 0
  0056e6c  vspltw 3, 3, 0
  0056e70  vspltw 4, 4, 0
  0056e74  vspltw 2, 2, 0
  0056e78  vspltw 3, 3, 0
  0056e7c  vspltw 4, 4, 0
  0056e80  vspltw 2, 2, 0
  0056e84  fmuls 7, 6, 1
  0056e88  vspltw 3, 3, 0
  0056e8c  vspltw 4, 4, 0
  0056e90  vspltw 2, 2, 0
  0056e94  fmuls 6, 6, 2
  0056e98  vspltw 3, 3, 0
  0056e9c  vspltw 4, 4, 0
  0056ea0  vspltw 2, 2, 0
  0056ea4  vspltw 3, 3, 0
  0056ea8  vspltw 4, 4, 0
  0056eac  vspltw 2, 2, 0
  0056eb0  vspltw 3, 3, 0
  0056eb4  vspltw 4, 4, 0
  0056eb8  vspltw 2, 2, 0
  0056ebc  vspltw 3, 3, 0
  0056ec0  vspltw 4, 4, 0
  0056ec4  vspltw 2, 2, 0
  0056ec8  vspltw 3, 3, 0
  0056ecc  vspltw 4, 4, 0
  0056ed0  vspltw 2, 2, 0
  0056ed4  lfs 8, 100(14)
  0056ed8  vspltw 3, 3, 0
  0056edc  vspltw 4, 4, 0
  0056ee0  vspltw 2, 2, 0
  0056ee4  fmuls 8, 8, 1
  0056ee8  lfsx 9, 1, 15
  0056eec  vspltw 3, 3, 0
  0056ef0  vspltw 4, 4, 0
  0056ef4  fmuls 10, 9, 1
  0056ef8  vspltw 2, 2, 0
  0056efc  fmuls 9, 9, 2
  0056f00  lfsx 11, 1, 29
  0056f04  vspltw 3, 3, 0
  0056f08  vspltw 4, 4, 0
  0056f0c  fadds 7, 11, 7
  0056f10  vspltw 2, 2, 0
  0056f14  lfsx 1, 1, 29
  0056f18  vspltw 3, 3, 0
  0056f1c  vspltw 4, 4, 0
  0056f20  vspltw 2, 2, 0
  0056f24  addic 29, 18, 100
  0056f28  fadds 6, 1, 6
  0056f2c  vspltw 3, 3, 0
  0056f30  vspltw 4, 4, 0
  0056f34  vspltw 2, 2, 0
  0056f38  lfsx 11, 1, 29
  0056f3c  vspltw 3, 3, 0
  0056f40  vspltw 4, 4, 0
  0056f44  fmuls 11, 11, 2
  0056f48  vspltw 2, 2, 0
  0056f4c  lfs 2, 68(14)
  0056f50  vspltw 3, 3, 0
  0056f54  vspltw 4, 4, 0
  0056f58  vspltw 2, 2, 0
  0056f5c  fadds 8, 2, 8
  0056f60  lfsx 2, 1, 28
  0056f64  vspltw 3, 3, 0
  0056f68  vspltw 4, 4, 0
  0056f6c  fadds 10, 2, 10
  0056f70  vspltw 2, 2, 0
  0056f74  lfsx 2, 1, 3
  0056f78  vspltw 3, 3, 0
  0056f7c  vspltw 4, 4, 0
  0056f80  vspltw 2, 2, 0
  0056f84  fadds 11, 2, 11
  0056f88  lfsx 2, 1, 28
  0056f8c  vspltw 3, 3, 0
  0056f90  vspltw 4, 4, 0
  0056f94  fadds 13, 2, 9
  0056f98  vspltw 2, 2, 0
  0056f9c  fsubs 9, 6, 3
  0056fa0  fsubs 6, 7, 3
  0056fa4  vspltw 3, 3, 0
  0056fa8  vspltw 4, 4, 0
  0056fac  vspltw 2, 2, 0
  0056fb0  vspltw 3, 3, 0
  0056fb4  vspltw 4, 4, 0
  0056fb8  vspltw 2, 2, 0
  0056fbc  fsubs 7, 8, 4
  0056fc0  vspltw 3, 3, 0
  0056fc4  vspltw 4, 4, 0
  0056fc8  vspltw 2, 2, 0
  0056fcc  fmr 12, 9
  0056fd0  vspltw 3, 3, 0
  0056fd4  vspltw 4, 4, 0
  0056fd8  vspltw 2, 2, 0
  0056fdc  fsubs 8, 10, 5
  0056fe0  vspltw 3, 3, 0
  0056fe4  vspltw 4, 4, 0
  0056fe8  vspltw 2, 2, 0
  0056fec  fsubs 10, 11, 4
  0056ff0  fsubs 11, 13, 5
  0056ff4  vspltw 3, 3, 0
  0056ff8  vspltw 4, 4, 0
  0056ffc  fcmpu 0, 6, 12
  0057000  vspltw 2, 2, 0
  0057004  vspltw 3, 3, 0
  0057008  vspltw 4, 4, 0
  005700c  vspltw 2, 2, 0
  0057010  vspltw 3, 3, 0
  0057014  vspltw 4, 4, 0
  0057018  cror 6, 1, 2
  005701c  vspltw 3, 3, 0
  0057020  vspltw 4, 4, 0
  0057024  stvewx 2, 0, 4
  0057028  vspltw 3, 3, 0
  005702c  vspltw 4, 4, 0
  0057030  vspltw 3, 3, 0
  0057034  vspltw 4, 4, 0
  0057038  vspltw 4, 4, 0
  005703c  stvewx 3, 0, 5
  0057040  vspltw 4, 4, 0
  0057044  vspltw 4, 4, 0
  0057048  vspltw 2, 4, 0
  005704c  vspltw 2, 2, 0
  0057050  vspltw 2, 2, 0
  0057054  stvewx 2, 0, 6
  0057058  bt 6, 0x57060
  005705c  fmr 12, 6
  0057060  fmr 13, 10
  0057064  fcmpu 0, 7, 13
  0057068  cror 6, 1, 2
  005706c  bt 6, 0x57074
  0057070  fmr 13, 7
  0057074  fmr 0, 11
  0057078  fcmpu 0, 8, 0
  005707c  cror 6, 1, 2
  0057080  bt 6, 0x57088
  0057084  fmr 0, 8
  0057088  lis 4, 5
  005708c  fmr 30, 9
  0057090  addi 4, 4, 27668
  0057094  lfs 31, 8(4)
  0057098  fsubs 9, 13, 31
  005709c  fsubs 13, 0, 31
  00570a0  fmr 0, 30
  00570a4  fsubs 12, 12, 31
  00570a8  fcmpu 0, 6, 0
  00570ac  cror 6, 0, 2
  00570b0  bt 6, 0x570b8
  00570b4  fmr 0, 6
  00570b8  fmr 6, 10
  00570bc  fcmpu 0, 7, 6
  00570c0  cror 6, 0, 2
  00570c4  bt 6, 0x570cc
  00570c8  fmr 6, 7
  00570cc  fmr 7, 11
  00570d0  fcmpu 0, 8, 7
  00570d4  cror 6, 0, 2
  00570d8  bt 6, 0x570e0
  00570dc  fmr 7, 8
  00570e0  fsubs 1, 1, 3
  00570e4  lfsx 8, 1, 3
  00570e8  li 0, 1248
  00570ec  fsubs 8, 8, 4
  00570f0  addic 3, 1, 188
  00570f4  stfs 1, 1248(1)
  00570f8  stfs 1, 1252(1)
  00570fc  stfs 1, 1256(1)
  0057100  stfs 1, 1260(1)
  0057104  fsubs 1, 2, 5
  0057108  lvx 2, 1, 0
  005710c  li 0, 1248
  0057110  stfs 8, 1248(1)
  0057114  stfs 8, 1252(1)
  0057118  vspltw 2, 2, 0
  005711c  stfs 8, 1256(1)
  0057120  stfs 8, 1260(1)
  0057124  lvx 3, 1, 0
  0057128  vspltw 2, 2, 0
  005712c  li 0, 1248
  0057130  vspltw 3, 3, 0
  0057134  stfs 1, 1248(1)
  0057138  stfs 1, 1252(1)
  005713c  stfs 1, 1256(1)
  0057140  vspltw 2, 2, 0
  0057144  stfs 1, 1260(1)
  0057148  lvx 4, 1, 0
  005714c  vspltw 3, 3, 0
  0057150  vspltw 4, 4, 0
  0057154  vspltw 2, 2, 0
  0057158  vspltw 3, 3, 0
  005715c  vspltw 4, 4, 0
  0057160  vspltw 2, 2, 0
  0057164  vspltw 3, 3, 0
  0057168  vspltw 4, 4, 0
  005716c  vspltw 2, 2, 0
  0057170  vspltw 3, 3, 0
  0057174  vspltw 4, 4, 0
  0057178  vspltw 2, 2, 0
  005717c  vspltw 3, 3, 0
  0057180  vspltw 4, 4, 0
  0057184  vspltw 2, 2, 0
  0057188  vspltw 3, 3, 0
  005718c  vspltw 4, 4, 0
  0057190  vspltw 2, 2, 0
  0057194  vspltw 3, 3, 0
  0057198  vspltw 4, 4, 0
  005719c  vspltw 2, 2, 0
  00571a0  vspltw 3, 3, 0
  00571a4  vspltw 4, 4, 0
  00571a8  vspltw 2, 2, 0
  00571ac  vspltw 3, 3, 0
  00571b0  vspltw 4, 4, 0
  00571b4  vspltw 2, 2, 0
  00571b8  vspltw 3, 3, 0
  00571bc  vspltw 4, 4, 0
  00571c0  vspltw 2, 2, 0
  00571c4  vspltw 3, 3, 0
  00571c8  vspltw 4, 4, 0
  00571cc  vspltw 2, 2, 0
  00571d0  vspltw 3, 3, 0
  00571d4  vspltw 4, 4, 0
  00571d8  vspltw 2, 2, 0
  00571dc  vspltw 3, 3, 0
  00571e0  vspltw 4, 4, 0
  00571e4  vspltw 2, 2, 0
  00571e8  vspltw 3, 3, 0
  00571ec  vspltw 4, 4, 0
  00571f0  vspltw 2, 2, 0
  00571f4  vspltw 3, 3, 0
  00571f8  vspltw 4, 4, 0
  00571fc  vspltw 2, 2, 0
  0057200  vspltw 3, 3, 0
  0057204  vspltw 4, 4, 0
  0057208  vspltw 2, 2, 0
  005720c  vspltw 3, 3, 0
  0057210  vspltw 4, 4, 0
  0057214  vspltw 2, 2, 0
  0057218  vspltw 3, 3, 0
  005721c  vspltw 4, 4, 0
  0057220  vspltw 2, 2, 0
  0057224  vspltw 3, 3, 0
  0057228  vspltw 4, 4, 0
  005722c  vspltw 2, 2, 0
  0057230  vspltw 3, 3, 0
  0057234  vspltw 4, 4, 0
  0057238  vspltw 2, 2, 0
  005723c  li 4, 4
  0057240  vspltw 3, 3, 0
  0057244  vspltw 4, 4, 0
  0057248  vspltw 2, 2, 0
  005724c  li 5, 8
  0057250  vspltw 3, 3, 0
  0057254  vspltw 4, 4, 0
  0057258  vspltw 2, 2, 0
  005725c  vspltw 3, 3, 0
  0057260  vspltw 4, 4, 0
  0057264  vspltw 2, 2, 0
  0057268  vspltw 3, 3, 0
  005726c  vspltw 4, 4, 0
  0057270  vspltw 2, 2, 0
  0057274  vspltw 3, 3, 0
  0057278  vspltw 4, 4, 0
  005727c  vspltw 2, 2, 0
  0057280  vspltw 3, 3, 0
  0057284  vspltw 4, 4, 0
  0057288  vspltw 2, 2, 0
  005728c  lfsx 1, 1, 27
  0057290  vspltw 3, 3, 0
  0057294  vspltw 4, 4, 0
  0057298  vspltw 2, 2, 0
  005729c  fsubs 1, 1, 3
  00572a0  vspltw 3, 3, 0
  00572a4  vspltw 4, 4, 0
  00572a8  vspltw 2, 2, 0
  00572ac  vspltw 3, 3, 0
  00572b0  vspltw 4, 4, 0
  00572b4  vspltw 2, 2, 0
  00572b8  vspltw 3, 3, 0
  00572bc  vspltw 4, 4, 0
  00572c0  vspltw 2, 2, 0
  00572c4  vspltw 3, 3, 0
  00572c8  vspltw 4, 4, 0
  00572cc  vspltw 2, 2, 0
  00572d0  vspltw 3, 3, 0
  00572d4  vspltw 4, 4, 0
  00572d8  vspltw 2, 2, 0
  00572dc  vspltw 3, 3, 0
  00572e0  vspltw 4, 4, 0
  00572e4  vspltw 2, 2, 0
  00572e8  vspltw 3, 3, 0
  00572ec  vspltw 4, 4, 0
  00572f0  stvewx 2, 0, 3
  00572f4  vspltw 2, 4, 0
  00572f8  vspltw 3, 3, 0
  00572fc  li 0, 1248
  0057300  vspltw 2, 2, 0
  0057304  stvewx 3, 4, 3
  0057308  stvewx 2, 5, 3
  005730c  stfs 1, 1248(1)
  0057310  stfs 1, 1252(1)
  0057314  stfs 1, 1256(1)
  0057318  stfs 1, 1260(1)
  005731c  lfs 1, 84(14)
  0057320  lfsx 2, 1, 26
  0057324  fsubs 1, 1, 4
  0057328  fsubs 3, 2, 5
  005732c  lvx 2, 1, 0
  0057330  li 0, 1248
  0057334  vspltw 2, 2, 0
  0057338  vspltw 2, 2, 0
  005733c  stfs 1, 1248(1)
  0057340  stfs 1, 1252(1)
  0057344  stfs 1, 1256(1)
  0057348  stfs 1, 1260(1)
  005734c  lvx 3, 1, 0
  0057350  vspltw 2, 2, 0
  0057354  li 0, 1248
  0057358  stfs 3, 1248(1)
  005735c  stfs 3, 1252(1)
  0057360  stfs 3, 1256(1)
  0057364  vspltw 2, 2, 0
  0057368  stfs 3, 1260(1)
  005736c  lvx 4, 1, 0
  0057370  vspltw 3, 3, 0
  0057374  vspltw 4, 4, 0
  0057378  vspltw 2, 2, 0
  005737c  vspltw 3, 3, 0
  0057380  vspltw 4, 4, 0
  0057384  vspltw 2, 2, 0
  0057388  vspltw 3, 3, 0
  005738c  vspltw 4, 4, 0
  0057390  vspltw 2, 2, 0
  0057394  vspltw 3, 3, 0
  0057398  vspltw 4, 4, 0
  005739c  vspltw 2, 2, 0
  00573a0  vspltw 3, 3, 0
  00573a4  vspltw 4, 4, 0
  00573a8  vspltw 2, 2, 0
  00573ac  vspltw 3, 3, 0
  00573b0  vspltw 4, 4, 0
  00573b4  vspltw 2, 2, 0
  00573b8  vspltw 3, 3, 0
  00573bc  vspltw 4, 4, 0
  00573c0  vspltw 2, 2, 0
  00573c4  vspltw 3, 3, 0
  00573c8  vspltw 4, 4, 0
  00573cc  vspltw 2, 2, 0
  00573d0  vspltw 3, 3, 0
  00573d4  vspltw 4, 4, 0
  00573d8  vspltw 2, 2, 0
  00573dc  vspltw 3, 3, 0
  00573e0  vspltw 4, 4, 0
  00573e4  vspltw 2, 2, 0
  00573e8  vspltw 3, 3, 0
  00573ec  vspltw 4, 4, 0
  00573f0  vspltw 2, 2, 0
  00573f4  vspltw 3, 3, 0
  00573f8  vspltw 4, 4, 0
  00573fc  vspltw 2, 2, 0
  0057400  vspltw 3, 3, 0
  0057404  vspltw 4, 4, 0
  0057408  vspltw 2, 2, 0
  005740c  vspltw 3, 3, 0
  0057410  vspltw 4, 4, 0
  0057414  vspltw 2, 2, 0
  0057418  vspltw 3, 3, 0
  005741c  vspltw 4, 4, 0
  0057420  vspltw 2, 2, 0
  0057424  vspltw 3, 3, 0
  0057428  vspltw 4, 4, 0
  005742c  vspltw 2, 2, 0
  0057430  vspltw 3, 3, 0
  0057434  vspltw 4, 4, 0
  0057438  vspltw 2, 2, 0
  005743c  addic 6, 1, 200
  0057440  vspltw 3, 3, 0
  0057444  vspltw 4, 4, 0
  0057448  vspltw 2, 2, 0
  005744c  vspltw 3, 3, 0
  0057450  vspltw 4, 4, 0
  0057454  vspltw 2, 2, 0
  0057458  vspltw 3, 3, 0
  005745c  vspltw 4, 4, 0
  0057460  vspltw 2, 2, 0
  0057464  vspltw 3, 3, 0
  0057468  vspltw 4, 4, 0
  005746c  vspltw 2, 2, 0
  0057470  vspltw 3, 3, 0
  0057474  vspltw 4, 4, 0
  0057478  vspltw 2, 2, 0
  005747c  li 28, 0
  0057480  vspltw 3, 3, 0
  0057484  vspltw 4, 4, 0
  0057488  vspltw 2, 2, 0
  005748c  ori 3, 28, 0
  0057490  vspltw 3, 3, 0
  0057494  vspltw 4, 4, 0
  0057498  vspltw 2, 2, 0
  005749c  cmpw 19, 3
  00574a0  vspltw 3, 3, 0
  00574a4  vspltw 4, 4, 0
  00574a8  vspltw 2, 2, 0
  00574ac  fadds 0, 0, 31
  00574b0  vspltw 3, 3, 0
  00574b4  vspltw 4, 4, 0
  00574b8  vspltw 2, 2, 0
  00574bc  fadds 1, 6, 31
  00574c0  vspltw 3, 3, 0
  00574c4  vspltw 4, 4, 0
  00574c8  vspltw 2, 2, 0
  00574cc  fadds 2, 7, 31
  00574d0  vspltw 3, 3, 0
  00574d4  vspltw 4, 4, 0
  00574d8  vspltw 2, 2, 0
  00574dc  addic 27, 20, 4
  00574e0  vspltw 3, 3, 0
  00574e4  vspltw 4, 4, 0
  00574e8  vspltw 2, 2, 0
  00574ec  vspltw 3, 3, 0
  00574f0  vspltw 4, 4, 0
  00574f4  vspltw 2, 2, 0
  00574f8  vspltw 3, 3, 0
  00574fc  vspltw 4, 4, 0
  0057500  vspltw 2, 2, 0
  0057504  vspltw 3, 3, 0
  0057508  vspltw 4, 4, 0
  005750c  vspltw 2, 2, 0
  0057510  vspltw 3, 3, 0
  0057514  vspltw 4, 4, 0
  0057518  vspltw 3, 3, 0
  005751c  stvewx 2, 0, 6
  0057520  vspltw 2, 4, 0
  0057524  vspltw 3, 3, 0
  0057528  vspltw 2, 2, 0
  005752c  vspltw 3, 3, 0
  0057530  vspltw 2, 2, 0
  0057534  stvewx 3, 4, 6
  0057538  stvewx 2, 5, 6
  005753c  bf 1, 0x575f8
  0057540  ori 10, 27, 0
  0057544  ori 12, 1, 0
  0057548  lfs 5, 0(10)
  005754c  ori 4, 28, 0
  0057550  lfs 3, 4(10)
  0057554  li 11, 1
  0057558  fcmpu 0, 0, 5
  005755c  lfs 4, 8(10)
  0057560  fcmpu 1, 1, 3
  0057564  fcmpu 6, 2, 4
  0057568  fcmpu 7, 12, 5
  005756c  cror 2, 1, 2
  0057570  bt 2, 0x57578
  0057574  ori 4, 11, 0
  0057578  ori 5, 28, 0
  005757c  bf 4, 0x57584
  0057580  ori 5, 11, 0
  0057584  ori 6, 28, 0
  0057588  bf 24, 0x57590
  005758c  ori 6, 11, 0
  0057590  ori 7, 28, 0
  0057594  bf 29, 0x5759c
  0057598  ori 7, 11, 0
  005759c  fcmpu 0, 9, 3
  00575a0  ori 8, 28, 0
  00575a4  cror 6, 0, 2
  00575a8  bt 6, 0x575b0
  00575ac  ori 8, 11, 0
  00575b0  fcmpu 0, 13, 4
  00575b4  ori 9, 28, 0
  00575b8  cror 6, 0, 2
  00575bc  bt 6, 0x575c4
  00575c0  ori 9, 11, 0
  00575c4  slwi 8, 8, 8
  00575c8  rlwimi 7, 4, 1, 30, 30
  00575cc  rlwimi 8, 5, 9, 22, 22
  00575d0  slwi 4, 9, 16
  00575d4  or 5, 7, 8
  00575d8  rlwimi 4, 6, 17, 14, 14
  00575dc  addic 3, 3, 1
  00575e0  or 4, 5, 4
  00575e4  cmpw 3, 19
  00575e8  addic 10, 10, 12
  00575ec  stw 4, 212(12)
  00575f0  addic 12, 12, 4
  00575f4  bt 0, 0x57548
  00575f8  addc 3, 19, 19
  00575fc  lhz 25, 0(20)
  0057600  ori 24, 28, 0
  0057604  addc 3, 19, 3
  0057608  extsh 25, 25
  005760c  sldi 3, 3, 2
  0057610  cmpw 25, 24
  0057614  addc 26, 27, 3
  0057618  clrldi 26, 26, 32
  005761c  bf 1, 0x576c4
  0057620  ori 23, 26, 0
  0057624  lis 3, 161
  0057628  lfs 1, 176(1)
  005762c  addic 5, 1, 212
  0057630  lfs 2, 184(1)
  0057634  clrldi 10, 30, 32
  0057638  stfs 1, 88(1)
  005763c  ori 4, 27, 0
  0057640  stfs 2, 96(1)
  0057644  ori 6, 31, 0
  0057648  lfs 1, 180(1)
  005764c  ori 7, 19, 0
  0057650  lwz 11, 2368(3)
  0057654  stfs 1, 92(1)
  0057658  lfsx 1, 1, 16
  005765c  ori 3, 23, 0
  0057660  lfsx 2, 1, 29
  0057664  stfs 1, 112(1)
  0057668  lfsx 1, 1, 15
  005766c  stfs 2, 116(1)
  0057670  lfs 2, 188(1)
  0057674  stfs 1, 120(1)
  0057678  lfs 1, 192(1)
  005767c  stfs 2, 128(1)
  0057680  lfs 2, 196(1)
  0057684  stfs 1, 132(1)
  0057688  lfs 1, 200(1)
  005768c  stfs 2, 136(1)
  0057690  lfs 2, 204(1)
  0057694  stfs 1, 144(1)
  0057698  ld 8, 88(1)
  005769c  ld 9, 96(1)
  00576a0  lfs 1, 208(1)
  00576a4  stfs 2, 148(1)
  00576a8  stfs 1, 152(1)
  00576ac  std 11, 160(1)
  00576b0  bl 0x56020
  00576b4  addic 24, 24, 1
  00576b8  addic 23, 23, 4
  00576bc  cmpw 24, 25
  00576c0  bt 0, 0x57624
  00576c4  lbz 20, 3(20)
  00576c8  cmpwi 20, 0
  00576cc  bt 2, 0x577a4
  00576d0  sldi 3, 25, 2
  00576d4  cmpw 20, 28
  00576d8  addc 25, 26, 3
  00576dc  clrldi 25, 25, 32
  00576e0  bf 1, 0x577a4
  00576e4  slwi 3, 28, 2
  00576e8  lfs 1, 176(1)
  00576ec  lfs 2, 184(1)
  00576f0  lis 4, 161
  00576f4  extsw 3, 3
  00576f8  stfs 1, 88(1)
  00576fc  stfs 2, 96(1)
  0057700  addic 5, 1, 212
  0057704  clrldi 10, 30, 32
  0057708  ori 7, 19, 0
  005770c  lwzx 3, 26, 3
  0057710  stw 3, 1240(1)
  0057714  lbz 6, 1242(1)
  0057718  addic 3, 1, 1240
  005771c  lfs 1, 180(1)
  0057720  stb 6, 1241(1)
  0057724  lbzx 6, 25, 28
  0057728  lwz 11, 2368(4)
  005772c  stb 6, 1242(1)
  0057730  ori 4, 27, 0
  0057734  stfs 1, 92(1)
  0057738  ori 6, 31, 0
  005773c  lfsx 1, 1, 16
  0057740  lfsx 2, 1, 29
  0057744  stfs 1, 112(1)
  0057748  lfsx 1, 1, 15
  005774c  stfs 2, 116(1)
  0057750  lfs 2, 188(1)
  0057754  stfs 1, 120(1)
  0057758  lfs 1, 192(1)
  005775c  ld 8, 88(1)
  0057760  ld 9, 96(1)
  0057764  stfs 2, 128(1)
  0057768  lfs 2, 196(1)
  005776c  stfs 1, 132(1)
  0057770  lfs 1, 200(1)
  0057774  stfs 2, 136(1)
  0057778  lfs 2, 204(1)
  005777c  stfs 1, 144(1)
  0057780  lfs 1, 208(1)
  0057784  stfs 2, 148(1)
  0057788  stfs 1, 152(1)
  005778c  std 11, 160(1)
  0057790  bl 0x56020
  0057794  addic 28, 28, 1
  0057798  extsw 28, 28
  005779c  cmpw 28, 20
  00577a0  bt 0, 0x576e4
  00577a4  ld 0, 1456(1)
  00577a8  mtlr 0
  00577ac  lfd 30, 1424(1)
  00577b0  lfd 31, 1432(1)
  00577b4  ld 14, 1280(1)
  00577b8  ld 15, 1288(1)
  00577bc  ld 16, 1296(1)
  00577c0  ld 17, 1304(1)
  00577c4  ld 18, 1312(1)
  00577c8  ld 19, 1320(1)
  00577cc  ld 20, 1328(1)
  00577d0  ld 21, 1336(1)
  00577d4  ld 22, 1344(1)
  00577d8  ld 23, 1352(1)
  00577dc  ld 24, 1360(1)
  00577e0  ld 25, 1368(1)
  00577e4  ld 26, 1376(1)
  00577e8  ld 27, 1384(1)
  00577ec  ld 28, 1392(1)
  00577f0  ld 29, 1400(1)
  00577f4  ld 30, 1408(1)
  00577f8  ld 31, 1416(1)
  00577fc  addi 1, 1, 1440
  0057800  blr

CollLine:   # 0x57820, 0x1e2c bytes
  0057820  stdu 1, -10608(1)
  0057824  mflr 0
  0057828  std 0, 10624(1)
  005782c  stfd 14, 10464(1)
  0057830  stfd 15, 10472(1)
  0057834  stfd 16, 10480(1)
  0057838  stfd 17, 10488(1)
  005783c  stfd 18, 10496(1)
  0057840  stfd 19, 10504(1)
  0057844  stfd 20, 10512(1)
  0057848  stfd 21, 10520(1)
  005784c  stfd 22, 10528(1)
  0057850  stfd 23, 10536(1)
  0057854  stfd 24, 10544(1)
  0057858  stfd 25, 10552(1)
  005785c  stfd 26, 10560(1)
  0057860  stfd 27, 10568(1)
  0057864  stfd 28, 10576(1)
  0057868  stfd 29, 10584(1)
  005786c  stfd 30, 10592(1)
  0057870  stfd 31, 10600(1)
  0057874  std 31, 10456(1)
  0057878  std 28, 10432(1)
  005787c  std 16, 10336(1)
  0057880  ori 31, 3, 0
  0057884  ori 28, 7, 0
  0057888  std 6, 10272(1)
  005788c  addic 3, 1, 204
  0057890  std 24, 10400(1)
  0057894  lis 16, 5
  0057898  std 15, 10328(1)
  005789c  li 24, 0
  00578a0  lfs 1, 0(31)
  00578a4  std 30, 10448(1)
  00578a8  ori 15, 5, 0
  00578ac  ori 30, 4, 0
  00578b0  addi 16, 16, 30724
  00578b4  std 29, 10440(1)
  00578b8  stfs 1, 204(1)
  00578bc  std 27, 10424(1)
  00578c0  std 26, 10416(1)
  00578c4  std 25, 10408(1)
  00578c8  std 23, 10392(1)
  00578cc  std 22, 10384(1)
  00578d0  std 21, 10376(1)
  00578d4  std 20, 10368(1)
  00578d8  std 19, 10360(1)
  00578dc  std 18, 10352(1)
  00578e0  std 17, 10344(1)
  00578e4  std 14, 10320(1)
  00578e8  ori 29, 24, 0
  00578ec  bl 0x5dd48c
  00578f0  nop
  00578f4  cmpwi 3, 2
  00578f8  std 28, 10280(1)
  00578fc  bf 2, 0x57904
  0057900  li 29, 1
  0057904  cmpwi 29, 0
  0057908  bf 2, 0x579e8
  005790c  addic 3, 1, 200
  0057910  lfs 1, 4(31)
  0057914  ori 29, 24, 0
  0057918  stfs 1, 200(1)
  005791c  bl 0x5dd48c
  0057920  nop
  0057924  cmpwi 3, 2
  0057928  bf 2, 0x57930
  005792c  li 29, 1
  0057930  cmpwi 29, 0
  0057934  bf 2, 0x579e8
  0057938  addic 3, 1, 196
  005793c  lfs 1, 8(31)
  0057940  ori 29, 24, 0
  0057944  stfs 1, 196(1)
  0057948  bl 0x5dd48c
  005794c  nop
  0057950  cmpwi 3, 2
  0057954  bf 2, 0x5795c
  0057958  li 29, 1
  005795c  cmpwi 29, 0
  0057960  bf 2, 0x579e8
  0057964  addic 3, 1, 192
  0057968  lfs 1, 0(30)
  005796c  ori 29, 24, 0
  0057970  stfs 1, 192(1)
  0057974  bl 0x5dd48c
  0057978  nop
  005797c  cmpwi 3, 2
  0057980  bf 2, 0x57988
  0057984  li 29, 1
  0057988  cmpwi 29, 0
  005798c  bf 2, 0x579e8
  0057990  addic 3, 1, 188
  0057994  lfs 1, 4(30)
  0057998  ori 29, 24, 0
  005799c  stfs 1, 188(1)
  00579a0  bl 0x5dd48c
  00579a4  nop
  00579a8  cmpwi 3, 2
  00579ac  bf 2, 0x579b4
  00579b0  li 29, 1
  00579b4  cmpwi 29, 0
  00579b8  bf 2, 0x579e8
  00579bc  addic 3, 1, 184
  00579c0  lfs 1, 8(30)
  00579c4  ori 29, 24, 0
  00579c8  stfs 1, 184(1)
  00579cc  bl 0x5dd48c
  00579d0  nop
  00579d4  cmpwi 3, 2
  00579d8  bf 2, 0x579e0
  00579dc  li 29, 1
  00579e0  cmpwi 29, 0
  00579e4  bt 2, 0x57a00
  00579e8  lis 3, 101
  00579ec  addic 3, 3, 6844
  00579f0  bl 0x4ff98c
  00579f4  nop
  00579f8  ori 3, 24, 0
  00579fc  b 0x595ac
  0057a00  lfs 10, 0(30)
  0057a04  lfs 7, 0(31)
  0057a08  fmr 1, 10
  0057a0c  lfs 8, 4(31)
  0057a10  lfs 9, 8(31)
  0057a14  lfs 11, 4(30)
  0057a18  lfs 12, 8(30)
  0057a1c  fcmpu 0, 7, 1
  0057a20  cror 6, 1, 2
  0057a24  bt 6, 0x57a2c
  0057a28  fmr 1, 7
  0057a2c  fmr 2, 11
  0057a30  fcmpu 0, 8, 2
  0057a34  cror 6, 1, 2
  0057a38  bt 6, 0x57a40
  0057a3c  fmr 2, 8
  0057a40  fmr 3, 12
  0057a44  fcmpu 0, 9, 3
  0057a48  cror 6, 1, 2
  0057a4c  bt 6, 0x57a54
  0057a50  fmr 3, 9
  0057a54  fmr 4, 10
  0057a58  fcmpu 0, 7, 4
  0057a5c  cror 6, 0, 2
  0057a60  bt 6, 0x57a68
  0057a64  fmr 4, 7
  0057a68  fmr 5, 11
  0057a6c  fcmpu 0, 8, 5
  0057a70  cror 6, 0, 2
  0057a74  bt 6, 0x57a7c
  0057a78  fmr 5, 8
  0057a7c  fmr 6, 12
  0057a80  fcmpu 0, 9, 6
  0057a84  cror 6, 0, 2
  0057a88  bt 6, 0x57a90
  0057a8c  fmr 6, 9
  0057a90  lfs 13, 0(16)
  0057a94  lis 4, 161
  0057a98  fmuls 7, 7, 13
  0057a9c  fmuls 8, 8, 13
  0057aa0  addic 4, 4, 2368
  0057aa4  fmuls 9, 9, 13
  0057aa8  addic 5, 1, 208
  0057aac  fmuls 10, 10, 13
  0057ab0  addic 6, 1, 220
  0057ab4  fmuls 11, 11, 13
  0057ab8  stfs 13, 10224(1)
  0057abc  fmuls 12, 12, 13
  0057ac0  lwz 3, 16(4)
  0057ac4  fsubs 4, 4, 13
  0057ac8  cmpwi 3, 0
  0057acc  fsubs 5, 5, 13
  0057ad0  fsubs 6, 6, 13
  0057ad4  stfs 7, 0(5)
  0057ad8  stfs 8, 4(5)
  0057adc  stfs 9, 8(5)
  0057ae0  stfs 10, 0(6)
  0057ae4  stfs 11, 4(6)
  0057ae8  stfs 12, 8(6)
  0057aec  bt 0, 0x5946c
  0057af0  addic 3, 3, 1
  0057af4  stw 3, 16(4)
  0057af8  lfs 15, 4(16)
  0057afc  std 4, 10264(1)
  0057b00  fcmpu 0, 1, 15
  0057b04  bt 0, 0x5946c
  0057b08  fcmpu 1, 3, 15
  0057b0c  fcmpu 0, 2, 15
  0057b10  cror 2, 0, 4
  0057b14  bt 2, 0x5946c
  0057b18  fcmpu 0, 4, 15
  0057b1c  bt 1, 0x5946c
  0057b20  fcmpu 0, 5, 15
  0057b24  bt 1, 0x5946c
  0057b28  fcmpu 0, 6, 15
  0057b2c  bt 1, 0x5946c
  0057b30  fctiwz 1, 7
  0057b34  fctiwz 2, 8
  0057b38  addic 5, 1, 232
  0057b3c  fctiwz 3, 9
  0057b40  li 0, 10208
  0057b44  fctiwz 4, 10
  0057b48  fctiwz 5, 11
  0057b4c  fctiwz 6, 12
  0057b50  fsubs 7, 10, 7
  0057b54  fsubs 8, 11, 8
  0057b58  stfd 1, 10288(1)
  0057b5c  lwz 3, 10292(1)
  0057b60  stfd 2, 10288(1)
  0057b64  srawi 3, 3, 12
  0057b68  lwz 4, 10292(1)
  0057b6c  stfd 3, 10288(1)
  0057b70  fsubs 1, 12, 9
  0057b74  lwz 6, 10292(1)
  0057b78  srawi 4, 4, 12
  0057b7c  stw 3, 10208(1)
  0057b80  stfd 4, 10288(1)
  0057b84  lwz 7, 10292(1)
  0057b88  stfd 5, 10288(1)
  0057b8c  lwz 8, 10292(1)
  0057b90  stfd 6, 10288(1)
  0057b94  lwz 9, 10292(1)
  0057b98  stfs 7, 0(5)
  0057b9c  stfs 8, 4(5)
  0057ba0  stw 3, 10212(1)
  0057ba4  stw 3, 10216(1)
  0057ba8  stw 3, 10220(1)
  0057bac  stfs 1, 8(5)
  0057bb0  lvx 2, 1, 0
  0057bb4  li 0, 10208
  0057bb8  stw 4, 10208(1)
  0057bbc  stw 4, 10212(1)
  0057bc0  srawi 5, 6, 12
  0057bc4  stw 4, 10216(1)
  0057bc8  stw 4, 10220(1)
  0057bcc  vspltw 2, 2, 0
  0057bd0  lvx 3, 1, 0
  0057bd4  li 0, 10208
  0057bd8  stw 5, 10208(1)
  0057bdc  stw 5, 10212(1)
  0057be0  stw 5, 10216(1)
  0057be4  stw 5, 10220(1)
  0057be8  vspltw 3, 3, 0
  0057bec  lvx 4, 1, 0
  0057bf0  vspltw 2, 2, 0
  0057bf4  vspltw 4, 4, 0
  0057bf8  vspltw 3, 3, 0
  0057bfc  vspltw 2, 2, 0
  0057c00  vspltw 4, 4, 0
  0057c04  vspltw 3, 3, 0
  0057c08  vspltw 2, 2, 0
  0057c0c  vspltw 4, 4, 0
  0057c10  vspltw 3, 3, 0
  0057c14  vspltw 2, 2, 0
  0057c18  vspltw 4, 4, 0
  0057c1c  vspltw 3, 3, 0
  0057c20  vspltw 2, 2, 0
  0057c24  vspltw 4, 4, 0
  0057c28  vspltw 3, 3, 0
  0057c2c  vspltw 2, 2, 0
  0057c30  vspltw 4, 4, 0
  0057c34  vspltw 3, 3, 0
  0057c38  vspltw 2, 2, 0
  0057c3c  vspltw 4, 4, 0
  0057c40  vspltw 3, 3, 0
  0057c44  vspltw 2, 2, 0
  0057c48  vspltw 4, 4, 0
  0057c4c  vspltw 3, 3, 0
  0057c50  vspltw 2, 2, 0
  0057c54  vspltw 4, 4, 0
  0057c58  vspltw 3, 3, 0
  0057c5c  vspltw 2, 2, 0
  0057c60  vspltw 4, 4, 0
  0057c64  vspltw 3, 3, 0
  0057c68  vspltw 2, 2, 0
  0057c6c  vspltw 4, 4, 0
  0057c70  vspltw 3, 3, 0
  0057c74  vspltw 2, 2, 0
  0057c78  vspltw 4, 4, 0
  0057c7c  vspltw 3, 3, 0
  0057c80  vspltw 2, 2, 0
  0057c84  vspltw 4, 4, 0
  0057c88  vspltw 3, 3, 0
  0057c8c  vspltw 2, 2, 0
  0057c90  vspltw 4, 4, 0
  0057c94  vspltw 3, 3, 0
  0057c98  vspltw 2, 2, 0
  0057c9c  vspltw 4, 4, 0
  0057ca0  vspltw 3, 3, 0
  0057ca4  vspltw 2, 2, 0
  0057ca8  vspltw 4, 4, 0
  0057cac  vspltw 3, 3, 0
  0057cb0  vspltw 2, 2, 0
  0057cb4  vspltw 4, 4, 0
  0057cb8  vspltw 3, 3, 0
  0057cbc  vspltw 2, 2, 0
  0057cc0  vspltw 4, 4, 0
  0057cc4  vspltw 3, 3, 0
  0057cc8  srawi 6, 7, 12
  0057ccc  vspltw 2, 2, 0
  0057cd0  vspltw 4, 4, 0
  0057cd4  vspltw 3, 3, 0
  0057cd8  addic 31, 1, 2000
  0057cdc  vspltw 2, 2, 0
  0057ce0  vspltw 4, 4, 0
  0057ce4  vspltw 3, 3, 0
  0057ce8  srawi 7, 8, 12
  0057cec  vspltw 2, 2, 0
  0057cf0  vspltw 4, 4, 0
  0057cf4  vspltw 3, 3, 0
  0057cf8  srawi 8, 9, 12
  0057cfc  vspltw 2, 2, 0
  0057d00  vspltw 4, 4, 0
  0057d04  vspltw 3, 3, 0
  0057d08  cmpw 3, 6
  0057d0c  vspltw 2, 2, 0
  0057d10  vspltw 4, 4, 0
  0057d14  vspltw 3, 3, 0
  0057d18  ori 19, 31, 0
  0057d1c  vspltw 2, 2, 0
  0057d20  vspltw 4, 4, 0
  0057d24  vspltw 3, 3, 0
  0057d28  ori 9, 24, 0
  0057d2c  vspltw 2, 2, 0
  0057d30  vspltw 4, 4, 0
  0057d34  vspltw 3, 3, 0
  0057d38  vspltw 2, 2, 0
  0057d3c  vspltw 4, 4, 0
  0057d40  vspltw 3, 3, 0
  0057d44  vspltw 2, 2, 0
  0057d48  vspltw 4, 4, 0
  0057d4c  vspltw 3, 3, 0
  0057d50  vspltw 2, 2, 0
  0057d54  vspltw 4, 4, 0
  0057d58  vspltw 3, 3, 0
  0057d5c  vspltw 2, 2, 0
  0057d60  vspltw 4, 4, 0
  0057d64  vspltw 3, 3, 0
  0057d68  vspltw 2, 2, 0
  0057d6c  vspltw 4, 4, 0
  0057d70  vspltw 3, 3, 0
  0057d74  vspltw 2, 2, 0
  0057d78  vspltw 4, 4, 0
  0057d7c  vspltw 3, 3, 0
  0057d80  vspltw 2, 2, 0
  0057d84  vspltw 4, 4, 0
  0057d88  vspltw 3, 3, 0
  0057d8c  vspltw 2, 2, 0
  0057d90  vspltw 4, 4, 0
  0057d94  vspltw 3, 3, 0
  0057d98  vspltw 2, 2, 0
  0057d9c  vspltw 4, 4, 0
  0057da0  vspltw 3, 3, 0
  0057da4  vspltw 4, 4, 0
  0057da8  bf 2, 0x57dbc
  0057dac  cmpw 1, 5, 8
  0057db0  cmpw 4, 7
  0057db4  crand 2, 2, 6
  0057db8  bt 2, 0x57dc0
  0057dbc  li 9, 1
  0057dc0  cmpwi 9, 0
  0057dc4  bt 2, 0x580c4
  0057dc8  lfs 1, 232(1)
  0057dcc  lfs 2, 236(1)
  0057dd0  ori 30, 24, 0
  0057dd4  lfs 3, 240(1)
  0057dd8  addic 10, 1, 10192
  0057ddc  lfs 4, 208(1)
  0057de0  addic 11, 1, 4048
  0057de4  lfs 5, 212(1)
  0057de8  ori 9, 30, 0
  0057dec  lfs 6, 216(1)
  0057df0  fmr 9, 1
  0057df4  ori 25, 6, 0
  0057df8  lfs 11, 8(16)
  0057dfc  ori 26, 3, 0
  0057e00  fmr 10, 4
  0057e04  ori 28, 25, 0
  0057e08  ori 29, 26, 0
  0057e0c  ori 12, 11, 0
  0057e10  subc 27, 28, 29
  0057e14  cmpwi 27, 0
  0057e18  fdivs 7, 11, 9
  0057e1c  bt 0, 0x57e28
  0057e20  li 27, 1
  0057e24  b 0x57e34
  0057e28  li 27, -1
  0057e2c  addic 29, 29, 1
  0057e30  addic 28, 28, 1
  0057e34  cmpw 29, 28
  0057e38  bt 2, 0x57f34
  0057e3c  addc 29, 29, 27
  0057e40  sldi 23, 29, 12
  0057e44  extsw 23, 23
  0057e48  std 23, 10288(1)
  0057e4c  lfd 8, 10288(1)
  0057e50  fcfid 8, 8
  0057e54  frsp 8, 8
  0057e58  fsubs 8, 8, 4
  0057e5c  fmuls 8, 7, 8
  0057e60  fcmpu 0, 8, 11
  0057e64  bt 0, 0x57e6c
  0057e68  fmr 8, 11
  0057e6c  fcmpu 0, 8, 15
  0057e70  cmpw 1, 29, 28
  0057e74  bt 1, 0x57e7c
  0057e78  fmr 8, 15
  0057e7c  li 0, 10208
  0057e80  stfs 8, 10208(1)
  0057e84  stfs 8, 10212(1)
  0057e88  stfs 8, 10216(1)
  0057e8c  stfs 8, 10220(1)
  0057e90  lvx 2, 1, 0
  0057e94  vspltw 2, 2, 0
  0057e98  vspltw 2, 2, 0
  0057e9c  vspltw 2, 2, 0
  0057ea0  vspltw 2, 2, 0
  0057ea4  vspltw 2, 2, 0
  0057ea8  vspltw 2, 2, 0
  0057eac  vspltw 2, 2, 0
  0057eb0  addic 9, 9, 1
  0057eb4  vspltw 2, 2, 0
  0057eb8  vspltw 2, 2, 0
  0057ebc  vspltw 2, 2, 0
  0057ec0  vspltw 2, 2, 0
  0057ec4  vspltw 2, 2, 0
  0057ec8  vspltw 2, 2, 0
  0057ecc  vspltw 2, 2, 0
  0057ed0  vspltw 2, 2, 0
  0057ed4  vspltw 2, 2, 0
  0057ed8  vspltw 2, 2, 0
  0057edc  vspltw 2, 2, 0
  0057ee0  vspltw 2, 2, 0
  0057ee4  vspltw 2, 2, 0
  0057ee8  vspltw 2, 2, 0
  0057eec  vspltw 2, 2, 0
  0057ef0  vspltw 2, 2, 0
  0057ef4  vspltw 2, 2, 0
  0057ef8  vspltw 2, 2, 0
  0057efc  vspltw 2, 2, 0
  0057f00  vspltw 2, 2, 0
  0057f04  vspltw 2, 2, 0
  0057f08  vspltw 2, 2, 0
  0057f0c  vspltw 2, 2, 0
  0057f10  vspltw 2, 2, 0
  0057f14  vspltw 2, 2, 0
  0057f18  vspltw 2, 2, 0
  0057f1c  vspltw 2, 2, 0
  0057f20  vspltw 2, 2, 0
  0057f24  vspltw 2, 2, 0
  0057f28  stvewx 2, 0, 12
  0057f2c  addic 12, 12, 4
  0057f30  bf 6, 0x57e3c
  0057f34  lis 29, 18080
  0057f38  addic 23, 1, 244
  0057f3c  addic 28, 1, 256
  0057f40  addic 22, 1, 280
  0057f44  stw 29, 0(12)
  0057f48  addic 30, 30, 1
  0057f4c  addic 12, 1, 268
  0057f50  stfs 2, 0(23)
  0057f54  stfs 3, 4(23)
  0057f58  cmpwi 30, 3
  0057f5c  stfs 1, 8(23)
  0057f60  addic 11, 11, 1024
  0057f64  stfs 5, 0(28)
  0057f68  fmr 1, 2
  0057f6c  stfs 6, 4(28)
  0057f70  fmr 2, 3
  0057f74  stfs 4, 8(28)
  0057f78  fmr 3, 9
  0057f7c  stb 27, 0(10)
  0057f80  fmr 4, 5
  0057f84  stw 4, 0(12)
  0057f88  fmr 5, 6
  0057f8c  stw 3, 8(12)
  0057f90  addic 10, 10, 1
  0057f94  stw 5, 4(12)
  0057f98  ori 3, 4, 0
  0057f9c  stw 7, 0(22)
  0057fa0  ori 4, 5, 0
  0057fa4  stw 6, 8(22)
  0057fa8  fmr 6, 10
  0057fac  ori 6, 7, 0
  0057fb0  stw 8, 4(22)
  0057fb4  ori 7, 8, 0
  0057fb8  ori 5, 26, 0
  0057fbc  ori 8, 25, 0
  0057fc0  bt 0, 0x57df0
  0057fc4  stb 3, 10200(1)
  0057fc8  cmpwi 9, 0
  0057fcc  stb 4, 10201(1)
  0057fd0  addic 3, 1, 4048
  0057fd4  stb 5, 10202(1)
  0057fd8  addic 4, 1, 5072
  0057fdc  stfs 15, 0(19)
  0057fe0  addic 5, 1, 6096
  0057fe4  lwz 6, 10200(1)
  0057fe8  stw 6, 4(19)
  0057fec  lbz 6, 10192(1)
  0057ff0  lbz 7, 10193(1)
  0057ff4  lbz 8, 10194(1)
  0057ff8  bt 0, 0x58164
  0057ffc  lfs 1, 0(3)
  0058000  addic 19, 19, 8
  0058004  lfs 2, 0(4)
  0058008  lfs 3, 0(5)
  005800c  fcmpu 0, 1, 2
  0058010  fcmpu 1, 2, 3
  0058014  fcmpu 6, 1, 3
  0058018  cror 2, 0, 2
  005801c  bt 2, 0x5806c
  0058020  bf 5, 0x58048
  0058024  lbz 10, 10202(1)
  0058028  addic 5, 5, 4
  005802c  addc 10, 10, 8
  0058030  clrldi 5, 5, 32
  0058034  stb 10, 10202(1)
  0058038  stfs 3, 0(19)
  005803c  lwz 10, 10200(1)
  0058040  stw 10, 4(19)
  0058044  b 0x580b4
  0058048  lbz 10, 10201(1)
  005804c  addic 4, 4, 4
  0058050  addc 10, 10, 7
  0058054  clrldi 4, 4, 32
  0058058  stb 10, 10201(1)
  005805c  stfs 2, 0(19)
  0058060  lwz 10, 10200(1)
  0058064  stw 10, 4(19)
  0058068  b 0x580b4
  005806c  bf 25, 0x58094
  0058070  lbz 10, 10202(1)
  0058074  addic 5, 5, 4
  0058078  addc 10, 10, 8
  005807c  clrldi 5, 5, 32
  0058080  stb 10, 10202(1)
  0058084  stfs 3, 0(19)
  0058088  lwz 10, 10200(1)
  005808c  stw 10, 4(19)
  0058090  b 0x580b4
  0058094  lbz 10, 10200(1)
  0058098  addic 3, 3, 4
  005809c  addc 10, 10, 6
  00580a0  clrldi 3, 3, 32
  00580a4  stb 10, 10200(1)
  00580a8  stfs 1, 0(19)
  00580ac  lwz 10, 10200(1)
  00580b0  stw 10, 4(19)
  00580b4  addic 9, 9, -1
  00580b8  cmpwi 9, 0
  00580bc  bf 0, 0x57ffc
  00580c0  b 0x58164
  00580c4  lfs 1, 208(1)
  00580c8  lfs 2, 212(1)
  00580cc  fctiwz 1, 1
  00580d0  lfs 3, 216(1)
  00580d4  fctiwz 2, 2
  00580d8  lfs 4, 220(1)
  00580dc  fctiwz 3, 3
  00580e0  lfs 5, 224(1)
  00580e4  fctiwz 4, 4
  00580e8  lfs 6, 228(1)
  00580ec  fctiwz 5, 5
  00580f0  fctiwz 6, 6
  00580f4  stfd 1, 10288(1)
  00580f8  lwz 3, 10292(1)
  00580fc  stfd 2, 10288(1)
  0058100  lwz 4, 10292(1)
  0058104  stfd 3, 10288(1)
  0058108  lwz 5, 10292(1)
  005810c  stfd 4, 10288(1)
  0058110  lwz 6, 10292(1)
  0058114  stfd 5, 10288(1)
  0058118  lwz 7, 10292(1)
  005811c  stfd 6, 10288(1)
  0058120  subc 3, 3, 6
  0058124  lwz 6, 10292(1)
  0058128  subc 4, 4, 7
  005812c  subc 5, 5, 6
  0058130  or 3, 3, 4
  0058134  or 3, 3, 5
  0058138  cmpwi 3, 0
  005813c  bt 2, 0x5946c
  0058140  vspltb 2, 2, 3
  0058144  addic 3, 1, 2004
  0058148  vspltb 3, 3, 3
  005814c  addic 4, 1, 2005
  0058150  vspltb 4, 4, 3
  0058154  addic 5, 1, 2006
  0058158  stvebx 2, 0, 3
  005815c  stvebx 3, 0, 4
  0058160  stvebx 4, 0, 5
  0058164  lis 3, 16256
  0058168  lfs 14, 8(16)
  005816c  stw 3, 0(19)
  0058170  addic 19, 1, 904
  0058174  ori 3, 19, 0
  0058178  bl 0x5e7a78
  005817c  nop
  0058180  clrlwi 3, 15, 31
  0058184  cmpwi 3, 0
  0058188  bf 2, 0x58238
  005818c  ori 30, 24, 0
  0058190  slwi 3, 30, 3
  0058194  lfs 1, 912(1)
  0058198  addc 3, 1, 3
  005819c  clrldi 3, 3, 32
  00581a0  lfs 31, 2000(3)
  00581a4  fcmpu 0, 1, 31
  00581a8  bt 0, 0x58238
  00581ac  lfs 1, 208(1)
  00581b0  ori 3, 19, 0
  00581b4  lfs 2, 216(1)
  00581b8  ori 4, 15, 0
  00581bc  stfs 1, 64(1)
  00581c0  stfs 2, 72(1)
  00581c4  lfs 1, 220(1)
  00581c8  lfs 2, 228(1)
  00581cc  stfs 1, 80(1)
  00581d0  stfs 2, 88(1)
  00581d4  lfs 1, 232(1)
  00581d8  lfs 2, 240(1)
  00581dc  stfs 1, 96(1)
  00581e0  stfs 2, 104(1)
  00581e4  lfs 1, 212(1)
  00581e8  lfs 2, 224(1)
  00581ec  stfs 1, 68(1)
  00581f0  stfs 2, 84(1)
  00581f4  lfs 1, 236(1)
  00581f8  stfs 1, 100(1)
  00581fc  std 31, 112(1)
  0058200  fmr 1, 31
  0058204  std 30, 120(1)
  0058208  ld 5, 64(1)
  005820c  ld 6, 72(1)
  0058210  ld 7, 80(1)
  0058214  ld 8, 88(1)
  0058218  ld 9, 96(1)
  005821c  ld 10, 104(1)
  0058220  bl 0x56c20
  0058224  fcmpu 0, 31, 14
  0058228  bt 2, 0x58238
  005822c  addic 30, 30, 1
  0058230  extsw 30, 30
  0058234  b 0x58190
  0058238  lfs 1, 2000(1)
  005823c  addic 4, 31, 4
  0058240  lbz 3, 2005(1)
  0058244  fcmpu 0, 1, 14
  0058248  lbz 5, 2004(1)
  005824c  rlwinm 3, 3, 14, 10, 15
  0058250  stw 24, 908(1)
  0058254  rlwimi 3, 5, 30, 26, 31
  0058258  stw 4, 10256(1)
  005825c  stw 3, 0(31)
  0058260  bt 2, 0x582c4
  0058264  lfs 1, 8(31)
  0058268  fcmpu 0, 1, 14
  005826c  bt 2, 0x582c4
  0058270  addic 5, 1, 8
  0058274  lwz 7, 10256(1)
  0058278  ori 6, 5, 0
  005827c  lbz 4, 2005(5)
  0058280  lbz 8, 2004(5)
  0058284  rlwinm 4, 4, 14, 0, 15
  0058288  rlwimi 4, 8, 30, 26, 31
  005828c  cmpw 4, 3
  0058290  bf 2, 0x5829c
  0058294  addic 7, 7, -4
  0058298  b 0x582a4
  005829c  ori 3, 4, 0
  00582a0  stw 3, 0(7)
  00582a4  addic 4, 6, 2000
  00582a8  addic 7, 7, 4
  00582ac  addic 6, 6, 8
  00582b0  addic 5, 5, 8
  00582b4  lfs 1, 8(4)
  00582b8  stw 7, 10256(1)
  00582bc  fcmpu 0, 1, 14
  00582c0  bf 2, 0x5827c
  00582c4  lwz 4, 10256(1)
  00582c8  li 3, -1
  00582cc  stw 3, 0(4)
  00582d0  lfs 1, 232(1)
  00582d4  lfs 2, 236(1)
  00582d8  fmuls 3, 1, 1
  00582dc  lfs 4, 240(1)
  00582e0  fmuls 5, 2, 2
  00582e4  fmuls 6, 4, 4
  00582e8  addic 3, 1, 292
  00582ec  stw 31, 10256(1)
  00582f0  fadds 3, 3, 5
  00582f4  fadds 3, 3, 6
  00582f8  fdivs 1, 1, 3
  00582fc  fdivs 2, 2, 3
  0058300  fdivs 3, 4, 3
  0058304  stfs 1, 0(3)
  0058308  stfs 2, 4(3)
  005830c  stfs 3, 8(3)
  0058310  lwz 3, 0(31)
  0058314  cmpwi 3, 0
  0058318  bt 0, 0x59460
  005831c  lwz 4, 10256(1)
  0058320  lis 3, 164
  0058324  addic 3, 3, -28384
  0058328  lwz 4, 0(4)
  005832c  addic 6, 3, 16384
  0058330  srawi 5, 4, 16
  0058334  rlwinm 4, 4, 2, 14, 29
  0058338  slwi 5, 5, 8
  005833c  addc 4, 4, 5
  0058340  li 5, 0
  0058344  addc 3, 4, 3
  0058348  ori 14, 5, 0
  005834c  clrldi 3, 3, 32
  0058350  lhz 4, 0(3)
  0058354  std 3, 10240(1)
  0058358  extsh 4, 4
  005835c  lbz 3, 2(3)
  0058360  sldi 4, 4, 5
  0058364  cmpw 3, 14
  0058368  addc 4, 6, 4
  005836c  clrldi 3, 4, 32
  0058370  std 3, 10248(1)
  0058374  bf 1, 0x59448
  0058378  lfs 31, 10224(1)
  005837c  std 5, 10232(1)
  0058380  lis 3, 164
  0058384  ld 4, 10248(1)
  0058388  ld 6, 10232(1)
  005838c  li 5, 0
  0058390  lwz 3, -28512(3)
  0058394  ld 7, 10272(1)
  0058398  lhzx 4, 4, 6
  005839c  extsh 4, 4
  00583a0  sldi 4, 4, 8
  00583a4  addc 22, 3, 4
  00583a8  clrldi 22, 22, 32
  00583ac  cmpw 22, 7
  00583b0  bt 2, 0x59428
  00583b4  lwz 17, 148(22)
  00583b8  cmpwi 17, 0
  00583bc  bt 2, 0x59428
  00583c0  ld 21, 10264(1)
  00583c4  lwz 3, 156(22)
  00583c8  lwz 21, 16(21)
  00583cc  cmpw 3, 21
  00583d0  bt 2, 0x59428
  00583d4  li 4, 9
  00583d8  lfs 2, 0(22)
  00583dc  ori 3, 5, 0
  00583e0  and 4, 15, 4
  00583e4  lfs 3, 4(22)
  00583e8  lfs 4, 8(22)
  00583ec  cmpwi 4, 1
  00583f0  lfs 5, 12(22)
  00583f4  bf 0, 0x583fc
  00583f8  li 3, 1
  00583fc  lhz 4, 52(22)
  0058400  rlwinm 4, 4, 0, 17, 17
  0058404  or 3, 3, 4
  0058408  cmpwi 3, 0
  005840c  bt 2, 0x59428
  0058410  lfs 9, 208(1)
  0058414  addic 3, 1, 316
  0058418  lfs 8, 212(1)
  005841c  lfs 7, 216(1)
  0058420  fsubs 1, 2, 9
  0058424  fsubs 6, 3, 8
  0058428  fsubs 10, 4, 7
  005842c  fmuls 5, 5, 5
  0058430  stfs 1, 0(3)
  0058434  stfs 6, 4(3)
  0058438  stfs 10, 8(3)
  005843c  lfs 11, 292(1)
  0058440  lfs 12, 296(1)
  0058444  fmuls 1, 1, 11
  0058448  fmuls 6, 6, 12
  005844c  lfs 11, 300(1)
  0058450  fmuls 10, 10, 11
  0058454  fadds 1, 1, 6
  0058458  fadds 1, 1, 10
  005845c  fcmpu 0, 1, 15
  0058460  cror 6, 1, 2
  0058464  bt 6, 0x5846c
  0058468  fmr 1, 15
  005846c  fmr 6, 1
  0058470  lfs 1, 912(1)
  0058474  fcmpu 0, 1, 6
  0058478  cror 6, 1, 2
  005847c  bt 6, 0x58484
  0058480  fmr 6, 1
  0058484  lfs 1, 232(1)
  0058488  lfs 10, 236(1)
  005848c  addic 3, 1, 328
  0058490  fmuls 1, 1, 6
  0058494  lfs 11, 240(1)
  0058498  fmuls 10, 10, 6
  005849c  fmuls 6, 11, 6
  00584a0  addic 4, 1, 340
  00584a4  fadds 9, 9, 1
  00584a8  fadds 8, 8, 10
  00584ac  fadds 7, 7, 6
  00584b0  stfs 1, 0(3)
  00584b4  stfs 10, 4(3)
  00584b8  stfs 6, 8(3)
  00584bc  fsubs 2, 9, 2
  00584c0  fsubs 3, 8, 3
  00584c4  fsubs 4, 7, 4
  00584c8  fmuls 1, 2, 2
  00584cc  fmuls 6, 3, 3
  00584d0  fmuls 7, 4, 4
  00584d4  stfs 2, 0(4)
  00584d8  stfs 3, 4(4)
  00584dc  stfs 4, 8(4)
  00584e0  fadds 1, 1, 6
  00584e4  fadds 1, 1, 7
  00584e8  fcmpu 0, 1, 5
  00584ec  cror 6, 1, 2
  00584f0  bt 6, 0x59428
  00584f4  lwz 3, 4(17)
  00584f8  rlwinm 18, 15, 0, 29, 29
  00584fc  srawi 17, 3, 5
  0058500  cmpwi 18, 0
  0058504  addze 17, 17
  0058508  bt 2, 0x5851c
  005850c  lwz 3, 148(22)
  0058510  lhz 3, 0(3)
  0058514  extsh 3, 3
  0058518  b 0x58528
  005851c  lwz 3, 148(22)
  0058520  lhz 3, 2(3)
  0058524  extsh 3, 3
  0058528  lwz 4, 148(22)
  005852c  cmpwi 3, 0
  0058530  stw 21, 156(22)
  0058534  ori 20, 5, 0
  0058538  lwz 21, 12(4)
  005853c  extsw 21, 21
  0058540  bt 2, 0x58570
  0058544  rlwinm 6, 15, 0, 30, 30
  0058548  ori 4, 5, 0
  005854c  cmpwi 6, 1
  0058550  bf 0, 0x58558
  0058554  li 4, 1
  0058558  cmpw 21, 4
  005855c  bt 2, 0x59428
  0058560  ori 4, 3, 0
  0058564  ori 3, 22, 0
  0058568  bl 0x56a30
  005856c  ori 20, 3, 0
  0058570  lwz 3, 192(22)
  0058574  lwz 4, 196(22)
  0058578  lfs 1, 192(22)
  005857c  lwz 5, 200(22)
  0058580  lfs 2, 196(22)
  0058584  lwz 6, 208(22)
  0058588  lfs 3, 200(22)
  005858c  lwz 7, 212(22)
  0058590  lfs 4, 208(22)
  0058594  lwz 8, 216(22)
  0058598  lfs 5, 212(22)
  005859c  lwz 9, 224(22)
  00585a0  lfs 6, 216(22)
  00585a4  lwz 10, 228(22)
  00585a8  lfs 7, 224(22)
  00585ac  lwz 11, 232(22)
  00585b0  lfs 8, 228(22)
  00585b4  lfs 9, 232(22)
  00585b8  stfs 1, 796(1)
  00585bc  stfs 2, 800(1)
  00585c0  stfs 3, 804(1)
  00585c4  stfs 4, 808(1)
  00585c8  cmpwi 21, 0
  00585cc  stfs 5, 812(1)
  00585d0  stfs 6, 816(1)
  00585d4  stfs 7, 820(1)
  00585d8  stfs 8, 824(1)
  00585dc  stfs 9, 828(1)
  00585e0  stw 3, 832(1)
  00585e4  stw 4, 836(1)
  00585e8  addic 3, 1, 304
  00585ec  stw 5, 840(1)
  00585f0  stw 6, 844(1)
  00585f4  stw 7, 848(1)
  00585f8  stw 8, 852(1)
  00585fc  stw 9, 856(1)
  0058600  stw 10, 860(1)
  0058604  stw 11, 864(1)
  0058608  lfs 1, 16(22)
  005860c  lfs 2, 20(22)
  0058610  lfs 3, 24(22)
  0058614  fmuls 1, 1, 31
  0058618  fmuls 2, 2, 31
  005861c  fmuls 3, 3, 31
  0058620  stfs 1, 0(3)
  0058624  stfs 2, 4(3)
  0058628  stfs 3, 8(3)
  005862c  bt 2, 0x588e8
  0058630  fmr 6, 3
  0058634  fmr 5, 2
  0058638  addic 3, 1, 352
  005863c  fmr 4, 1
  0058640  lfs 1, 208(1)
  0058644  lfs 2, 212(1)
  0058648  lfs 3, 216(1)
  005864c  addic 4, 1, 364
  0058650  fsubs 3, 3, 6
  0058654  fsubs 2, 2, 5
  0058658  fsubs 1, 1, 4
  005865c  stfs 3, 8(3)
  0058660  stfs 2, 4(3)
  0058664  stfs 1, 0(3)
  0058668  lfs 7, 220(1)
  005866c  fsubs 4, 7, 4
  0058670  lfs 7, 224(1)
  0058674  lfs 8, 228(1)
  0058678  fsubs 5, 7, 5
  005867c  fsubs 6, 8, 6
  0058680  fmr 7, 4
  0058684  stfs 4, 0(4)
  0058688  stfs 5, 4(4)
  005868c  stfs 6, 8(4)
  0058690  fcmpu 0, 1, 7
  0058694  cror 6, 1, 2
  0058698  bt 6, 0x586a0
  005869c  fmr 7, 1
  00586a0  fmr 8, 5
  00586a4  fcmpu 0, 2, 8
  00586a8  cror 6, 1, 2
  00586ac  bt 6, 0x586b4
  00586b0  fmr 8, 2
  00586b4  fmr 9, 6
  00586b8  fcmpu 0, 3, 9
  00586bc  cror 6, 1, 2
  00586c0  bt 6, 0x586c8
  00586c4  fmr 9, 3
  00586c8  fcmpu 0, 1, 4
  00586cc  addic 3, 1, 376
  00586d0  stfs 7, 0(3)
  00586d4  stfs 8, 4(3)
  00586d8  stfs 9, 8(3)
  00586dc  cror 6, 0, 2
  00586e0  bt 6, 0x586e8
  00586e4  fmr 4, 1
  00586e8  fmr 1, 5
  00586ec  fcmpu 0, 2, 1
  00586f0  cror 6, 0, 2
  00586f4  bt 6, 0x586fc
  00586f8  fmr 1, 2
  00586fc  fmr 2, 6
  0058700  fcmpu 0, 3, 2
  0058704  cror 6, 0, 2
  0058708  bt 6, 0x58710
  005870c  fmr 2, 3
  0058710  addic 5, 1, 388
  0058714  addic 23, 1, 7120
  0058718  li 4, 256
  005871c  ori 3, 23, 0
  0058720  stfs 4, 0(5)
  0058724  stfs 1, 4(5)
  0058728  stfs 2, 8(5)
  005872c  addic 4, 4, -1
  0058730  stfs 15, 0(3)
  0058734  stfs 15, 4(3)
  0058738  cmpwi 4, 0
  005873c  stfs 15, 8(3)
  0058740  addic 3, 3, 12
  0058744  bf 2, 0x5872c
  0058748  lfs 1, 44(22)
  005874c  addic 3, 1, 868
  0058750  addic 4, 1, 796
  0058754  bl 0x5e7ad8
  0058758  nop
  005875c  lfs 1, 376(1)
  0058760  lfs 2, 384(1)
  0058764  stfs 1, 56(1)
  0058768  stfs 2, 64(1)
  005876c  lfs 1, 388(1)
  0058770  addic 10, 1, 976
  0058774  lfs 2, 396(1)
  0058778  addic 11, 1, 176
  005877c  stfs 1, 72(1)
  0058780  addic 12, 1, 180
  0058784  stfs 2, 80(1)
  0058788  lwz 3, 868(1)
  005878c  lwz 4, 876(1)
  0058790  stw 3, 88(1)
  0058794  lwz 3, 884(1)
  0058798  stw 4, 96(1)
  005879c  stw 3, 104(1)
  00587a0  lfs 1, 380(1)
  00587a4  lfs 2, 392(1)
  00587a8  stfs 1, 60(1)
  00587ac  stfs 2, 76(1)
  00587b0  lwz 3, 872(1)
  00587b4  lwz 4, 880(1)
  00587b8  stw 3, 92(1)
  00587bc  lwz 5, 888(1)
  00587c0  ori 3, 22, 0
  00587c4  ld 6, 56(1)
  00587c8  ld 7, 64(1)
  00587cc  stw 4, 100(1)
  00587d0  ld 8, 72(1)
  00587d4  ld 9, 80(1)
  00587d8  ori 4, 6, 0
  00587dc  lwz 31, 892(1)
  00587e0  ori 6, 8, 0
  00587e4  lwz 30, 896(1)
  00587e8  stw 5, 108(1)
  00587ec  lwz 29, 900(1)
  00587f0  ori 5, 7, 0
  00587f4  stw 31, 112(1)
  00587f8  ori 7, 9, 0
  00587fc  stw 30, 116(1)
  0058800  ld 8, 88(1)
  0058804  ld 31, 96(1)
  0058808  stw 29, 120(1)
  005880c  ld 30, 104(1)
  0058810  ori 9, 31, 0
  0058814  std 23, 128(1)
  0058818  std 10, 136(1)
  005881c  std 11, 144(1)
  0058820  ori 10, 30, 0
  0058824  std 12, 152(1)
  0058828  bl 0x564d0
  005882c  li 3, 0
  0058830  lwz 4, 180(1)
  0058834  ori 24, 3, 0
  0058838  cmpw 4, 24
  005883c  bf 1, 0x588e8
  0058840  ori 31, 3, 0
  0058844  lfs 1, 304(1)
  0058848  lfs 2, 312(1)
  005884c  clrldi 10, 15, 32
  0058850  stfs 1, 88(1)
  0058854  addic 5, 1, 976
  0058858  stfs 2, 96(1)
  005885c  ori 4, 23, 0
  0058860  lwz 3, 176(1)
  0058864  ori 6, 19, 0
  0058868  lfs 1, 308(1)
  005886c  ori 7, 21, 0
  0058870  lfs 2, 232(1)
  0058874  addc 3, 3, 31
  0058878  stfs 1, 92(1)
  005887c  lfs 1, 236(1)
  0058880  stfs 2, 112(1)
  0058884  clrldi 3, 3, 32
  0058888  lfs 2, 240(1)
  005888c  stfs 1, 116(1)
  0058890  lfs 1, 352(1)
  0058894  stfs 2, 120(1)
  0058898  lfs 2, 356(1)
  005889c  stfs 1, 128(1)
  00588a0  lfs 1, 360(1)
  00588a4  stfs 2, 132(1)
  00588a8  lfs 2, 364(1)
  00588ac  stfs 1, 136(1)
  00588b0  lfs 1, 368(1)
  00588b4  ld 8, 88(1)
  00588b8  ld 9, 96(1)
  00588bc  stfs 2, 144(1)
  00588c0  lfs 2, 372(1)
  00588c4  stfs 1, 148(1)
  00588c8  stfs 2, 152(1)
  00588cc  std 22, 160(1)
  00588d0  bl 0x56020
  00588d4  lwz 3, 180(1)
  00588d8  addic 24, 24, 1
  00588dc  addic 31, 31, 4
  00588e0  cmpw 24, 3
  00588e4  bt 0, 0x58844
  00588e8  rlwinm 3, 15, 0, 30, 30
  00588ec  cmpwi 3, 0
  00588f0  bf 2, 0x59428
  00588f4  li 3, 0
  00588f8  lwz 31, 148(22)
  00588fc  cmpwi 18, 1
  0058900  ori 28, 3, 0
  0058904  addic 31, 31, 16
  0058908  bf 0, 0x58910
  005890c  li 28, 1
  0058910  ori 30, 3, 0
  0058914  addic 28, 28, 1
  0058918  lwz 29, 152(22)
  005891c  cmpw 17, 30
  0058920  bf 1, 0x59428
  0058924  clrlwi 3, 29, 31
  0058928  srawi 29, 29, 1
  005892c  cmpwi 3, 0
  0058930  lbz 3, 0(31)
  0058934  lhz 4, 2(31)
  0058938  cmpwi 1, 3, 1
  005893c  extsh 4, 4
  0058940  cmpwi 6, 3, 0
  0058944  cmpwi 7, 3, 2
  0058948  bf 2, 0x59414
  005894c  and 4, 4, 28
  0058950  cmpwi 4, 0
  0058954  bt 2, 0x59414
  0058958  bt 5, 0x58964
  005895c  bf 25, 0x58e48
  0058960  b 0x58974
  0058964  bf 29, 0x58a50
  0058968  cmpwi 3, 3
  005896c  bf 1, 0x58b68
  0058970  b 0x58e48
  0058974  addic 3, 31, 16
  0058978  addic 4, 1, 832
  005897c  lfs 1, 0(3)
  0058980  lfs 2, 8(3)
  0058984  lfs 3, 44(22)
  0058988  lfs 4, 4(3)
  005898c  fmuls 1, 1, 3
  0058990  lfs 5, 12(3)
  0058994  fmuls 2, 2, 3
  0058998  addic 3, 1, 400
  005899c  fmuls 4, 4, 3
  00589a0  fmuls 31, 5, 3
  00589a4  stfs 1, 64(1)
  00589a8  stfs 2, 72(1)
  00589ac  stfs 4, 68(1)
  00589b0  ld 5, 64(1)
  00589b4  ld 6, 72(1)
  00589b8  bl 0x5e7b50
  00589bc  nop
  00589c0  lfs 1, 400(1)
  00589c4  lfs 2, 408(1)
  00589c8  lfs 3, 304(1)
  00589cc  lfs 4, 312(1)
  00589d0  ori 9, 19, 0
  00589d4  fadds 1, 1, 3
  00589d8  ori 10, 31, 0
  00589dc  fadds 2, 2, 4
  00589e0  lfs 3, 404(1)
  00589e4  lfs 4, 208(1)
  00589e8  lfs 5, 308(1)
  00589ec  stfs 4, 64(1)
  00589f0  fadds 3, 3, 5
  00589f4  lfs 4, 216(1)
  00589f8  lfs 5, 232(1)
  00589fc  stfs 4, 72(1)
  0058a00  stfs 5, 80(1)
  0058a04  lfs 4, 240(1)
  0058a08  stfs 1, 48(1)
  0058a0c  stfs 2, 56(1)
  0058a10  stfs 4, 88(1)
  0058a14  stfs 31, 60(1)
  0058a18  lfs 1, 212(1)
  0058a1c  stfs 3, 52(1)
  0058a20  stfs 1, 68(1)
  0058a24  lfs 1, 236(1)
  0058a28  stfs 1, 84(1)
  0058a2c  std 22, 112(1)
  0058a30  ld 5, 64(1)
  0058a34  ld 6, 72(1)
  0058a38  ld 7, 80(1)
  0058a3c  ld 3, 48(1)
  0058a40  ld 4, 56(1)
  0058a44  ld 8, 88(1)
  0058a48  bl 0x55d70
  0058a4c  b 0x59414
  0058a50  addic 3, 31, 4
  0058a54  addic 4, 31, 16
  0058a58  lwz 3, 0(3)
  0058a5c  lfs 1, 0(4)
  0058a60  slwi 3, 3, 4
  0058a64  lfs 2, 8(4)
  0058a68  addc 3, 20, 3
  0058a6c  clrldi 3, 3, 32
  0058a70  lfs 3, 0(3)
  0058a74  lfs 4, 8(3)
  0058a78  fmuls 3, 3, 31
  0058a7c  lfs 5, 4(3)
  0058a80  fmuls 4, 4, 31
  0058a84  lfs 6, 44(22)
  0058a88  fmuls 5, 5, 31
  0058a8c  lfs 7, 4(4)
  0058a90  addic 3, 31, 12
  0058a94  addic 4, 1, 832
  0058a98  fadds 1, 3, 1
  0058a9c  fadds 2, 4, 2
  0058aa0  fadds 4, 5, 7
  0058aa4  lfs 3, 0(3)
  0058aa8  addic 3, 1, 412
  0058aac  fmuls 31, 3, 6
  0058ab0  fmuls 1, 1, 6
  0058ab4  fmuls 2, 2, 6
  0058ab8  fmuls 4, 4, 6
  0058abc  stfs 1, 64(1)
  0058ac0  stfs 2, 72(1)
  0058ac4  stfs 4, 68(1)
  0058ac8  ld 5, 64(1)
  0058acc  ld 6, 72(1)
  0058ad0  bl 0x5e7b50
  0058ad4  nop
  0058ad8  lfs 1, 412(1)
  0058adc  lfs 2, 420(1)
  0058ae0  lfs 3, 304(1)
  0058ae4  ori 9, 19, 0
  0058ae8  lfs 4, 312(1)
  0058aec  ori 10, 31, 0
  0058af0  fadds 1, 1, 3
  0058af4  fadds 2, 2, 4
  0058af8  lfs 3, 416(1)
  0058afc  lfs 4, 208(1)
  0058b00  lfs 5, 308(1)
  0058b04  stfs 4, 64(1)
  0058b08  fadds 3, 3, 5
  0058b0c  lfs 4, 216(1)
  0058b10  lfs 5, 232(1)
  0058b14  stfs 4, 72(1)
  0058b18  stfs 5, 80(1)
  0058b1c  lfs 4, 240(1)
  0058b20  stfs 1, 48(1)
  0058b24  stfs 2, 56(1)
  0058b28  stfs 4, 88(1)
  0058b2c  stfs 31, 60(1)
  0058b30  lfs 1, 212(1)
  0058b34  stfs 3, 52(1)
  0058b38  stfs 1, 68(1)
  0058b3c  lfs 1, 236(1)
  0058b40  stfs 1, 84(1)
  0058b44  std 22, 112(1)
  0058b48  ld 5, 64(1)
  0058b4c  ld 6, 72(1)
  0058b50  ld 7, 80(1)
  0058b54  ld 3, 48(1)
  0058b58  ld 4, 56(1)
  0058b5c  ld 8, 88(1)
  0058b60  bl 0x55d70
  0058b64  b 0x59414
  0058b68  addic 3, 31, 16
  0058b6c  addic 5, 31, 4
  0058b70  addic 4, 1, 832
  0058b74  lfs 1, 0(3)
  0058b78  lfs 2, 8(3)
  0058b7c  lfs 31, 44(22)
  0058b80  lfs 3, 4(3)
  0058b84  fmuls 1, 1, 31
  0058b88  lfs 30, 12(3)
  0058b8c  fmuls 2, 2, 31
  0058b90  lfs 4, 0(5)
  0058b94  fmuls 3, 3, 31
  0058b98  addic 3, 1, 460
  0058b9c  fmuls 30, 30, 31
  0058ba0  fmuls 31, 4, 31
  0058ba4  stfs 1, 64(1)
  0058ba8  stfs 2, 72(1)
  0058bac  stfs 3, 68(1)
  0058bb0  ld 5, 64(1)
  0058bb4  ld 6, 72(1)
  0058bb8  bl 0x5e7b50
  0058bbc  nop
  0058bc0  lfs 1, 460(1)
  0058bc4  lfs 2, 464(1)
  0058bc8  addic 3, 1, 436
  0058bcc  lfs 3, 304(1)
  0058bd0  lfs 4, 308(1)
  0058bd4  fadds 1, 1, 3
  0058bd8  lfs 29, 208(1)
  0058bdc  fadds 2, 2, 4
  0058be0  lfs 0, 212(1)
  0058be4  lfs 3, 468(1)
  0058be8  lfs 6, 312(1)
  0058bec  lfs 13, 216(1)
  0058bf0  fadds 3, 3, 6
  0058bf4  fsubs 4, 1, 29
  0058bf8  fsubs 5, 2, 0
  0058bfc  stfs 1, 424(1)
  0058c00  stfs 2, 428(1)
  0058c04  stfs 4, 0(3)
  0058c08  stfs 5, 4(3)
  0058c0c  lfs 12, 232(1)
  0058c10  lfs 11, 236(1)
  0058c14  fmuls 6, 12, 12
  0058c18  lfs 7, 12(16)
  0058c1c  fmuls 8, 11, 11
  0058c20  lfs 10, 240(1)
  0058c24  fadds 6, 6, 8
  0058c28  fadds 6, 6, 15
  0058c2c  fcmpu 0, 6, 7
  0058c30  bt 1, 0x58c38
  0058c34  fmr 6, 7
  0058c38  fmr 7, 5
  0058c3c  fmr 8, 4
  0058c40  fmuls 4, 15, 15
  0058c44  fmuls 5, 7, 11
  0058c48  fmuls 9, 8, 12
  0058c4c  fmuls 28, 8, 8
  0058c50  fmuls 7, 7, 7
  0058c54  fmuls 8, 30, 30
  0058c58  fadds 5, 9, 5
  0058c5c  fadds 7, 28, 7
  0058c60  fadds 5, 5, 4
  0058c64  fadds 7, 7, 4
  0058c68  fdivs 9, 5, 6
  0058c6c  fcmpu 0, 9, 15
  0058c70  bt 1, 0x58c78
  0058c74  fmr 9, 15
  0058c78  fcmpu 0, 9, 14
  0058c7c  bt 0, 0x58c84
  0058c80  fmr 9, 14
  0058c84  fmuls 12, 12, 9
  0058c88  fmuls 11, 11, 9
  0058c8c  fmuls 9, 10, 9
  0058c90  addic 3, 1, 472
  0058c94  addic 4, 1, 484
  0058c98  fadds 29, 29, 12
  0058c9c  fadds 0, 0, 11
  0058ca0  fadds 10, 13, 9
  0058ca4  stfs 12, 0(3)
  0058ca8  stfs 11, 4(3)
  0058cac  stfs 9, 8(3)
  0058cb0  fsubs 1, 29, 1
  0058cb4  fsubs 2, 0, 2
  0058cb8  fsubs 10, 10, 3
  0058cbc  fmuls 13, 1, 1
  0058cc0  fmuls 0, 2, 2
  0058cc4  stfs 1, 0(4)
  0058cc8  stfs 2, 4(4)
  0058ccc  stfs 10, 8(4)
  0058cd0  fadds 9, 13, 0
  0058cd4  fadds 1, 9, 4
  0058cd8  fsubs 1, 1, 8
  0058cdc  fcmpu 0, 1, 15
  0058ce0  bt 1, 0x59414
  0058ce4  lfs 1, 16(16)
  0058ce8  fsubs 2, 7, 8
  0058cec  lfs 4, 20(16)
  0058cf0  fmuls 5, 5, 1
  0058cf4  fmuls 4, 6, 4
  0058cf8  fmuls 7, 5, 5
  0058cfc  fmuls 2, 4, 2
  0058d00  fsubs 2, 7, 2
  0058d04  fcmpu 0, 2, 15
  0058d08  cror 6, 0, 2
  0058d0c  bt 6, 0x58d14
  0058d10  b 0x58d18
  0058d14  fmr 2, 15
  0058d18  fsqrts 2, 2
  0058d1c  fmuls 1, 6, 1
  0058d20  fsubs 2, 2, 5
  0058d24  fdivs 6, 2, 1
  0058d28  fneg 6, 6
  0058d2c  fcmpu 0, 6, 15
  0058d30  cror 6, 1, 2
  0058d34  bt 6, 0x58d40
  0058d38  fmr 6, 15
  0058d3c  b 0x58d40
  0058d40  fcmpu 0, 6, 14
  0058d44  cror 6, 0, 2
  0058d48  bt 6, 0x58d50
  0058d4c  fmr 6, 14
  0058d50  lfs 1, 232(1)
  0058d54  addic 3, 1, 496
  0058d58  lfs 2, 236(1)
  0058d5c  fmuls 1, 1, 6
  0058d60  lfs 4, 240(1)
  0058d64  fmuls 2, 2, 6
  0058d68  addic 4, 1, 448
  0058d6c  fmuls 6, 4, 6
  0058d70  fadds 31, 31, 3
  0058d74  stfs 1, 0(3)
  0058d78  stfs 2, 4(3)
  0058d7c  stfs 6, 8(3)
  0058d80  lfs 4, 216(1)
  0058d84  lfs 5, 208(1)
  0058d88  fadds 6, 4, 6
  0058d8c  lfs 4, 212(1)
  0058d90  fadds 1, 5, 1
  0058d94  fadds 2, 4, 2
  0058d98  fcmpu 1, 3, 6
  0058d9c  stfs 6, 8(4)
  0058da0  stfs 1, 0(4)
  0058da4  stfs 2, 4(4)
  0058da8  bf 5, 0x58db4
  0058dac  fmr 1, 3
  0058db0  b 0x58db8
  0058db4  fmr 1, 6
  0058db8  fcmpu 0, 31, 1
  0058dbc  cror 2, 0, 2
  0058dc0  bt 2, 0x58dd4
  0058dc4  bf 5, 0x58dd0
  0058dc8  fmr 31, 3
  0058dcc  b 0x58dd4
  0058dd0  fmr 31, 6
  0058dd4  lfs 1, 424(1)
  0058dd8  ori 9, 19, 0
  0058ddc  stfs 31, 56(1)
  0058de0  ori 10, 31, 0
  0058de4  stfs 1, 48(1)
  0058de8  lfs 1, 208(1)
  0058dec  lfs 2, 216(1)
  0058df0  stfs 1, 64(1)
  0058df4  stfs 2, 72(1)
  0058df8  lfs 1, 232(1)
  0058dfc  lfs 2, 240(1)
  0058e00  stfs 1, 80(1)
  0058e04  stfs 2, 88(1)
  0058e08  lfs 1, 428(1)
  0058e0c  stfs 30, 60(1)
  0058e10  stfs 1, 52(1)
  0058e14  lfs 1, 212(1)
  0058e18  lfs 2, 236(1)
  0058e1c  stfs 1, 68(1)
  0058e20  stfs 2, 84(1)
  0058e24  std 22, 112(1)
  0058e28  ld 4, 56(1)
  0058e2c  ld 3, 48(1)
  0058e30  ld 5, 64(1)
  0058e34  ld 6, 72(1)
  0058e38  ld 7, 80(1)
  0058e3c  ld 8, 88(1)
  0058e40  bl 0x55d70
  0058e44  b 0x59414
  0058e48  lhz 3, 4(31)
  0058e4c  lfs 1, 10224(1)
  0058e50  extsh 3, 3
  0058e54  lhz 4, 6(31)
  0058e58  sldi 3, 3, 4
  0058e5c  extsh 4, 4
  0058e60  addc 3, 20, 3
  0058e64  sldi 4, 4, 4
  0058e68  clrldi 3, 3, 32
  0058e6c  addic 5, 1, 604
  0058e70  addic 27, 1, 832
  0058e74  lfs 2, 0(3)
  0058e78  lfs 3, 8(3)
  0058e7c  lfs 16, 44(22)
  0058e80  lfs 4, 4(3)
  0058e84  fmuls 2, 2, 1
  0058e88  addc 3, 20, 4
  0058e8c  fmuls 3, 3, 1
  0058e90  fmuls 4, 4, 1
  0058e94  addic 4, 31, 12
  0058e98  clrldi 3, 3, 32
  0058e9c  lfs 5, 0(3)
  0058ea0  lfs 6, 4(3)
  0058ea4  lfs 7, 8(3)
  0058ea8  fmuls 5, 5, 1
  0058eac  lfs 8, 0(4)
  0058eb0  fmuls 6, 6, 1
  0058eb4  addic 4, 1, 592
  0058eb8  fmuls 1, 7, 1
  0058ebc  addic 3, 1, 616
  0058ec0  fmuls 2, 2, 16
  0058ec4  fmuls 3, 3, 16
  0058ec8  fmuls 4, 4, 16
  0058ecc  fmuls 31, 5, 16
  0058ed0  fmuls 30, 6, 16
  0058ed4  fmuls 29, 1, 16
  0058ed8  fmuls 16, 8, 16
  0058edc  stfs 2, 64(1)
  0058ee0  stfs 3, 72(1)
  0058ee4  stfs 2, 0(4)
  0058ee8  stfs 3, 8(4)
  0058eec  stfs 4, 4(4)
  0058ef0  stfs 4, 68(1)
  0058ef4  ori 4, 27, 0
  0058ef8  stfs 31, 0(5)
  0058efc  stfs 30, 4(5)
  0058f00  stfs 29, 8(5)
  0058f04  ld 5, 64(1)
  0058f08  ld 6, 72(1)
  0058f0c  bl 0x5e7b50
  0058f10  nop
  0058f14  stfs 31, 64(1)
  0058f18  stfs 29, 72(1)
  0058f1c  addic 3, 1, 628
  0058f20  lfs 31, 616(1)
  0058f24  ori 4, 27, 0
  0058f28  stfs 30, 68(1)
  0058f2c  lfs 30, 620(1)
  0058f30  lfs 29, 624(1)
  0058f34  ld 5, 64(1)
  0058f38  ld 6, 72(1)
  0058f3c  bl 0x5e7b50
  0058f40  nop
  0058f44  lfs 11, 628(1)
  0058f48  lfs 10, 632(1)
  0058f4c  addic 4, 1, 520
  0058f50  lfs 9, 636(1)
  0058f54  fsubs 11, 11, 31
  0058f58  fsubs 10, 10, 30
  0058f5c  fsubs 9, 9, 29
  0058f60  addic 5, 1, 544
  0058f64  fmuls 17, 16, 16
  0058f68  addic 3, 1, 568
  0058f6c  stfs 11, 0(4)
  0058f70  stfs 10, 4(4)
  0058f74  stfs 9, 8(4)
  0058f78  lfs 27, 236(1)
  0058f7c  addic 4, 1, 532
  0058f80  lfs 28, 240(1)
  0058f84  fmuls 1, 9, 27
  0058f88  fmuls 2, 10, 28
  0058f8c  lfs 26, 232(1)
  0058f90  fmuls 3, 11, 28
  0058f94  lfs 0, 304(1)
  0058f98  fmuls 4, 9, 26
  0058f9c  lfs 13, 308(1)
  0058fa0  fmuls 5, 11, 27
  0058fa4  lfs 7, 312(1)
  0058fa8  fmuls 6, 10, 26
  0058fac  fadds 0, 31, 0
  0058fb0  fadds 13, 30, 13
  0058fb4  fadds 29, 29, 7
  0058fb8  fsubs 8, 2, 1
  0058fbc  fsubs 1, 1, 2
  0058fc0  fsubs 2, 4, 3
  0058fc4  fsubs 3, 3, 4
  0058fc8  fsubs 4, 5, 6
  0058fcc  fsubs 5, 6, 5
  0058fd0  stfs 0, 508(1)
  0058fd4  stfs 13, 512(1)
  0058fd8  stfs 29, 516(1)
  0058fdc  fmuls 24, 8, 8
  0058fe0  fmuls 7, 28, 8
  0058fe4  fmuls 25, 2, 2
  0058fe8  fmuls 20, 26, 2
  0058fec  stfs 1, 0(4)
  0058ff0  fmuls 30, 4, 4
  0058ff4  fmuls 18, 27, 4
  0058ff8  fmuls 19, 26, 4
  0058ffc  stfs 3, 4(4)
  0059000  fmuls 4, 28, 2
  0059004  stfs 5, 8(4)
  0059008  fmuls 2, 27, 8
  005900c  addic 4, 1, 556
  0059010  fmuls 21, 10, 5
  0059014  fmuls 6, 9, 3
  0059018  fmuls 22, 9, 1
  005901c  fmuls 8, 11, 5
  0059020  fmuls 23, 11, 3
  0059024  stfs 24, 0(5)
  0059028  fmuls 1, 10, 1
  005902c  stfs 25, 4(5)
  0059030  fsubs 3, 24, 14
  0059034  fsubs 19, 7, 19
  0059038  fsubs 18, 18, 4
  005903c  stfs 30, 8(5)
  0059040  fsubs 20, 20, 2
  0059044  addic 5, 1, 580
  0059048  fsubs 12, 25, 14
  005904c  fsubs 21, 21, 6
  0059050  fsubs 31, 30, 14
  0059054  fsubs 22, 22, 8
  0059058  fsubs 23, 23, 1
  005905c  fcmpu 0, 3, 15
  0059060  stfs 18, 0(4)
  0059064  stfs 19, 4(4)
  0059068  stfs 20, 8(4)
  005906c  stfs 21, 0(3)
  0059070  stfs 22, 4(3)
  0059074  stfs 3, 0(5)
  0059078  stfs 23, 8(3)
  005907c  cror 6, 1, 2
  0059080  stfs 12, 4(5)
  0059084  stfs 31, 8(5)
  0059088  bt 6, 0x590b4
  005908c  fcmpu 0, 12, 15
  0059090  cror 6, 1, 2
  0059094  bt 6, 0x590b4
  0059098  fcmpu 0, 31, 15
  005909c  cror 6, 1, 2
  00590a0  bt 6, 0x590b4
  00590a4  lfs 20, 208(1)
  00590a8  lfs 1, 212(1)
  00590ac  lfs 2, 216(1)
  00590b0  b 0x592ec
  00590b4  stfs 16, 10304(1)
  00590b8  lfs 2, 208(1)
  00590bc  fadds 1, 24, 25
  00590c0  lfs 3, 212(1)
  00590c4  fsubs 4, 2, 0
  00590c8  fsubs 5, 3, 13
  00590cc  lfs 31, 216(1)
  00590d0  fsubs 6, 0, 2
  00590d4  fsubs 8, 31, 29
  00590d8  fsubs 7, 13, 3
  00590dc  fsubs 12, 29, 31
  00590e0  fadds 1, 1, 30
  00590e4  fmuls 4, 18, 4
  00590e8  fmuls 5, 19, 5
  00590ec  fmuls 30, 21, 6
  00590f0  fmuls 8, 20, 8
  00590f4  fmuls 25, 22, 7
  00590f8  fmuls 24, 23, 12
  00590fc  addic 3, 1, 640
  0059100  stfs 11, 56(1)
  0059104  addic 6, 1, 664
  0059108  stfs 9, 64(1)
  005910c  addic 7, 1, 652
  0059110  fadds 4, 4, 5
  0059114  stfs 6, 0(3)
  0059118  fadds 5, 30, 25
  005911c  stfs 7, 4(3)
  0059120  fmr 30, 3
  0059124  stfs 12, 8(3)
  0059128  stfs 10, 60(1)
  005912c  addic 8, 1, 688
  0059130  ld 4, 56(1)
  0059134  addic 9, 1, 676
  0059138  fadds 4, 4, 8
  005913c  fadds 5, 5, 24
  0059140  ld 5, 64(1)
  0059144  addic 3, 1, 700
  0059148  fdivs 4, 4, 1
  005914c  fdivs 1, 5, 1
  0059150  fmuls 3, 9, 4
  0059154  fmuls 5, 11, 4
  0059158  fmuls 4, 10, 4
  005915c  fadds 19, 29, 3
  0059160  fmr 29, 2
  0059164  stfs 3, 8(6)
  0059168  fadds 18, 0, 5
  005916c  stfs 5, 0(6)
  0059170  fadds 16, 13, 4
  0059174  stfs 4, 4(6)
  0059178  fmuls 2, 26, 1
  005917c  fmuls 3, 27, 1
  0059180  fmuls 1, 28, 1
  0059184  stfs 19, 8(7)
  0059188  stfs 18, 0(7)
  005918c  stfs 16, 4(7)
  0059190  fadds 20, 29, 2
  0059194  fadds 21, 30, 3
  0059198  fadds 22, 31, 1
  005919c  stfs 2, 0(8)
  00591a0  stfs 3, 4(8)
  00591a4  stfs 1, 8(8)
  00591a8  stfs 20, 0(9)
  00591ac  stfs 21, 4(9)
  00591b0  stfs 22, 8(9)
  00591b4  bl 0x5e7bf8
  00591b8  nop
  00591bc  lfs 26, 232(1)
  00591c0  lfs 28, 240(1)
  00591c4  addic 3, 1, 712
  00591c8  stfs 26, 56(1)
  00591cc  stfs 28, 64(1)
  00591d0  lfs 27, 236(1)
  00591d4  lfs 23, 700(1)
  00591d8  lfs 24, 704(1)
  00591dc  lfs 25, 708(1)
  00591e0  stfs 27, 60(1)
  00591e4  ld 4, 56(1)
  00591e8  ld 5, 64(1)
  00591ec  bl 0x5e7bf8
  00591f0  nop
  00591f4  fsubs 1, 20, 18
  00591f8  fsubs 2, 21, 16
  00591fc  addic 3, 1, 724
  0059200  fsubs 3, 22, 19
  0059204  lfs 10, 712(1)
  0059208  lfs 9, 716(1)
  005920c  lfs 8, 720(1)
  0059210  fmuls 4, 1, 1
  0059214  fmuls 5, 2, 2
  0059218  stfs 1, 0(3)
  005921c  fmuls 6, 3, 3
  0059220  stfs 2, 4(3)
  0059224  stfs 3, 8(3)
  0059228  lfs 16, 10304(1)
  005922c  fadds 1, 4, 5
  0059230  fadds 11, 1, 6
  0059234  fsubs 11, 11, 17
  0059238  fcmpu 0, 11, 15
  005923c  cror 6, 1, 2
  0059240  bt 6, 0x59414
  0059244  fmuls 1, 23, 10
  0059248  fmuls 2, 24, 9
  005924c  fmuls 3, 25, 8
  0059250  fadds 1, 1, 2
  0059254  fadds 1, 1, 3
  0059258  fmuls 1, 1, 1
  005925c  fsubs 23, 14, 1
  0059260  fsubs 23, 11, 23
  0059264  fcmpu 0, 23, 15
  0059268  cror 6, 0, 2
  005926c  bt 6, 0x59274
  0059270  b 0x59278
  0059274  fmr 23, 15
  0059278  fsqrts 1, 23
  005927c  addic 3, 1, 736
  0059280  addic 4, 1, 748
  0059284  fmuls 2, 10, 1
  0059288  fmuls 3, 9, 1
  005928c  fmuls 4, 8, 1
  0059290  fsubs 20, 20, 2
  0059294  fsubs 1, 21, 3
  0059298  fsubs 2, 22, 4
  005929c  fsubs 3, 20, 29
  00592a0  fsubs 4, 1, 30
  00592a4  fsubs 5, 2, 31
  00592a8  stfs 20, 0(3)
  00592ac  stfs 1, 4(3)
  00592b0  stfs 2, 8(3)
  00592b4  fmuls 6, 3, 26
  00592b8  fmuls 7, 4, 27
  00592bc  stfs 3, 0(4)
  00592c0  fmuls 8, 5, 28
  00592c4  stfs 4, 4(4)
  00592c8  stfs 5, 8(4)
  00592cc  fadds 3, 6, 7
  00592d0  fadds 3, 3, 8
  00592d4  fcmpu 0, 3, 15
  00592d8  cror 6, 1, 2
  00592dc  bt 6, 0x592ec
  00592e0  lfs 20, 208(1)
  00592e4  lfs 1, 212(1)
  00592e8  lfs 2, 216(1)
  00592ec  fmr 4, 2
  00592f0  fmr 5, 1
  00592f4  addic 3, 1, 760
  00592f8  lfs 1, 508(1)
  00592fc  lfs 2, 512(1)
  0059300  lfs 3, 516(1)
  0059304  fsubs 6, 20, 1
  0059308  fsubs 7, 4, 3
  005930c  fsubs 5, 5, 2
  0059310  stfs 6, 0(3)
  0059314  stfs 7, 8(3)
  0059318  stfs 5, 4(3)
  005931c  lfs 20, 520(1)
  0059320  lfs 4, 524(1)
  0059324  fmuls 6, 6, 20
  0059328  fmuls 11, 5, 4
  005932c  fmuls 8, 20, 20
  0059330  fmuls 9, 4, 4
  0059334  lfs 5, 528(1)
  0059338  fmuls 7, 7, 5
  005933c  fmuls 10, 5, 5
  0059340  fadds 6, 6, 11
  0059344  fadds 8, 8, 9
  0059348  fadds 6, 6, 7
  005934c  fadds 7, 8, 10
  0059350  fdivs 6, 6, 7
  0059354  fcmpu 0, 6, 15
  0059358  cror 6, 0, 2
  005935c  bt 6, 0x59364
  0059360  b 0x59368
  0059364  fmr 6, 15
  0059368  fcmpu 0, 6, 14
  005936c  bt 0, 0x59374
  0059370  fmr 6, 14
  0059374  fmuls 7, 20, 6
  0059378  fmuls 4, 4, 6
  005937c  addic 3, 1, 772
  0059380  fmuls 5, 5, 6
  0059384  addic 4, 1, 784
  0059388  stfs 16, 60(1)
  005938c  ori 9, 19, 0
  0059390  ori 10, 31, 0
  0059394  fadds 1, 1, 7
  0059398  fadds 2, 2, 4
  005939c  fadds 3, 3, 5
  00593a0  stfs 7, 0(3)
  00593a4  stfs 4, 4(3)
  00593a8  stfs 5, 8(3)
  00593ac  stfs 1, 0(4)
  00593b0  stfs 2, 4(4)
  00593b4  stfs 3, 8(4)
  00593b8  stfs 1, 48(1)
  00593bc  stfs 3, 56(1)
  00593c0  lfs 1, 208(1)
  00593c4  lfs 3, 216(1)
  00593c8  stfs 1, 64(1)
  00593cc  stfs 3, 72(1)
  00593d0  lfs 1, 232(1)
  00593d4  lfs 3, 240(1)
  00593d8  stfs 1, 80(1)
  00593dc  stfs 3, 88(1)
  00593e0  stfs 2, 52(1)
  00593e4  lfs 1, 212(1)
  00593e8  lfs 2, 236(1)
  00593ec  stfs 1, 68(1)
  00593f0  stfs 2, 84(1)
  00593f4  std 22, 112(1)
  00593f8  ld 3, 48(1)
  00593fc  ld 4, 56(1)
  0059400  ld 5, 64(1)
  0059404  ld 6, 72(1)
  0059408  ld 7, 80(1)
  005940c  ld 8, 88(1)
  0059410  bl 0x55d70
  0059414  addic 30, 30, 1
  0059418  lfs 31, 10224(1)
  005941c  addic 31, 31, 32
  0059420  cmpw 30, 17
  0059424  bt 0, 0x58924
  0059428  ld 3, 10240(1)
  005942c  ld 4, 10232(1)
  0059430  addic 14, 14, 1
  0059434  addic 4, 4, 2
  0059438  lbz 3, 2(3)
  005943c  cmpw 14, 3
  0059440  std 4, 10232(1)
  0059444  bt 0, 0x58380
  0059448  lwz 3, 10256(1)
  005944c  addic 3, 3, 4
  0059450  stw 3, 10256(1)
  0059454  lwz 3, 0(3)
  0059458  cmpwi 3, 0
  005945c  bf 0, 0x5831c
  0059460  lwz 3, 904(1)
  0059464  cmpwi 3, 0
  0059468  bf 2, 0x59474
  005946c  li 3, 0
  0059470  b 0x595ac
  0059474  lfs 1, 24(16)
  0059478  lfs 2, 916(1)
  005947c  lfs 3, 920(1)
  0059480  lfs 4, 924(1)
  0059484  fmuls 2, 2, 1
  0059488  lfs 5, 940(1)
  005948c  fmuls 3, 3, 1
  0059490  lfs 6, 944(1)
  0059494  fmuls 4, 4, 1
  0059498  lfs 7, 948(1)
  005949c  fmuls 5, 5, 1
  00594a0  lfs 8, 952(1)
  00594a4  fmuls 6, 6, 1
  00594a8  lfs 9, 956(1)
  00594ac  fmuls 7, 7, 1
  00594b0  fmuls 8, 8, 1
  00594b4  lfs 10, 960(1)
  00594b8  fmuls 9, 9, 1
  00594bc  lfs 11, 964(1)
  00594c0  lfs 12, 968(1)
  00594c4  fmuls 10, 10, 1
  00594c8  fmuls 11, 11, 1
  00594cc  lfs 13, 972(1)
  00594d0  fmuls 12, 12, 1
  00594d4  fmuls 1, 13, 1
  00594d8  stfs 2, 916(1)
  00594dc  stfs 3, 920(1)
  00594e0  stfs 4, 924(1)
  00594e4  stfs 5, 940(1)
  00594e8  stfs 6, 944(1)
  00594ec  stfs 7, 948(1)
  00594f0  stfs 8, 952(1)
  00594f4  stfs 9, 956(1)
  00594f8  ld 4, 10264(1)
  00594fc  stfs 10, 960(1)
  0059500  stfs 11, 964(1)
  0059504  stfs 12, 968(1)
  0059508  lfs 13, 928(1)
  005950c  stfs 2, 32(4)
  0059510  stfs 1, 972(1)
  0059514  stfs 3, 36(4)
  0059518  stfs 4, 40(4)
  005951c  lfs 2, 932(1)
  0059520  stfs 13, 64(4)
  0059524  lfs 3, 936(1)
  0059528  stfs 2, 68(4)
  005952c  stfs 3, 72(4)
  0059530  stfs 5, 80(4)
  0059534  lwz 16, 908(1)
  0059538  stfs 6, 84(4)
  005953c  stfs 7, 88(4)
  0059540  stfs 8, 96(4)
  0059544  cmpwi 16, 0
  0059548  stfs 9, 100(4)
  005954c  stfs 10, 104(4)
  0059550  stfs 11, 112(4)
  0059554  stfs 12, 116(4)
  0059558  stfs 1, 120(4)
  005955c  stw 16, 24(4)
  0059560  stw 3, 28(4)
  0059564  bf 2, 0x59570
  0059568  li 3, 1
  005956c  b 0x595ac
  0059570  ld 4, 10280(1)
  0059574  cmpwi 4, 0
  0059578  bf 2, 0x59584
  005957c  li 3, 1
  0059580  b 0x595ac
  0059584  lhz 5, 52(16)
  0059588  rlwinm 5, 5, 0, 17, 17
  005958c  cmpwi 5, 0
  0059590  bf 2, 0x5959c
  0059594  li 3, 1
  0059598  b 0x595ac
  005959c  extsw 5, 3
  00595a0  ori 3, 16, 0
  00595a4  bl 0x55c30
  00595a8  li 3, 1
  00595ac  ld 0, 10624(1)
  00595b0  mtlr 0
  00595b4  lfd 14, 10464(1)
  00595b8  lfd 15, 10472(1)
  00595bc  lfd 16, 10480(1)
  00595c0  lfd 17, 10488(1)
  00595c4  lfd 18, 10496(1)
  00595c8  lfd 19, 10504(1)
  00595cc  lfd 20, 10512(1)
  00595d0  lfd 21, 10520(1)
  00595d4  lfd 22, 10528(1)
  00595d8  lfd 23, 10536(1)
  00595dc  lfd 24, 10544(1)
  00595e0  lfd 25, 10552(1)
  00595e4  lfd 26, 10560(1)
  00595e8  lfd 27, 10568(1)
  00595ec  lfd 28, 10576(1)
  00595f0  lfd 29, 10584(1)
  00595f4  lfd 30, 10592(1)
  00595f8  lfd 31, 10600(1)
  00595fc  ld 14, 10320(1)
  0059600  ld 15, 10328(1)
  0059604  ld 16, 10336(1)
  0059608  ld 17, 10344(1)
  005960c  ld 18, 10352(1)
  0059610  ld 19, 10360(1)
  0059614  ld 20, 10368(1)
  0059618  ld 21, 10376(1)
  005961c  ld 22, 10384(1)
  0059620  ld 23, 10392(1)
  0059624  ld 24, 10400(1)
  0059628  ld 25, 10408(1)
  005962c  ld 26, 10416(1)
  0059630  ld 27, 10424(1)
  0059634  ld 28, 10432(1)
  0059638  ld 29, 10440(1)
  005963c  ld 30, 10448(1)
  0059640  ld 31, 10456(1)
  0059644  addi 1, 1, 10608
  0059648  blr

CollSphereVsSphere:   # 0x59658, 0x19c bytes
  0059658  stdu 1, -64(1)
  005965c  fadds 1, 1, 2
  0059660  rldicl 11, 4, 32, 32
  0059664  std 31, 56(1)
  0059668  li 12, 64
  005966c  std 30, 48(1)
  0059670  rldicl 31, 6, 32, 32
  0059674  addc 30, 1, 12
  0059678  addic 4, 12, 48
  005967c  addic 6, 12, 64
  0059680  addic 7, 12, 56
  0059684  addic 8, 12, 72
  0059688  std 3, 48(30)
  005968c  stw 11, 56(30)
  0059690  std 5, 64(30)
  0059694  stw 31, 72(30)
  0059698  lfs 3, 112(1)
  005969c  lfs 4, 52(30)
  00596a0  lfs 5, 128(1)
  00596a4  lfs 6, 68(30)
  00596a8  fsubs 3, 5, 3
  00596ac  fsubs 4, 6, 4
  00596b0  lfs 5, 120(1)
  00596b4  lfs 6, 136(1)
  00596b8  fsubs 5, 6, 5
  00596bc  fmuls 6, 1, 1
  00596c0  lis 11, 6
  00596c4  addic 5, 12, 52
  00596c8  fmuls 3, 3, 3
  00596cc  fmuls 4, 4, 4
  00596d0  addic 3, 12, 68
  00596d4  addi 11, 11, -27060
  00596d8  fmuls 1, 5, 5
  00596dc  lwz 12, 116(30)
  00596e0  fadds 3, 3, 4
  00596e4  fadds 1, 3, 1
  00596e8  fcmpu 0, 1, 6
  00596ec  bt 1, 0x597e4
  00596f0  lfs 5, 0(11)
  00596f4  fmr 4, 5
  00596f8  fmr 3, 4
  00596fc  fcmpu 0, 1, 3
  0059700  bt 2, 0x59764
  0059704  fsqrts 1, 1
  0059708  lfs 4, 4(11)
  005970c  fmr 3, 2
  0059710  fmuls 2, 1, 4
  0059714  fcmpu 0, 3, 2
  0059718  bt 0, 0x59720
  005971c  fmr 3, 2
  0059720  lfs 2, 8(11)
  0059724  fdivs 1, 2, 1
  0059728  lfsx 2, 1, 6
  005972c  lfsx 4, 1, 3
  0059730  lfsx 5, 1, 4
  0059734  lfsx 6, 1, 8
  0059738  lfsx 7, 1, 5
  005973c  lfsx 8, 1, 7
  0059740  fsubs 2, 5, 2
  0059744  fsubs 4, 7, 4
  0059748  fsubs 5, 8, 6
  005974c  fmuls 2, 2, 1
  0059750  fmuls 4, 4, 1
  0059754  fmuls 1, 5, 1
  0059758  fmuls 5, 3, 2
  005975c  fmuls 4, 3, 4
  0059760  fmuls 3, 3, 1
  0059764  lfsx 7, 1, 6
  0059768  lfsx 6, 1, 3
  005976c  fadds 7, 7, 5
  0059770  fadds 6, 6, 4
  0059774  lfsx 2, 1, 8
  0059778  lfsx 1, 1, 4
  005977c  lfsx 8, 1, 5
  0059780  fadds 2, 2, 3
  0059784  lfsx 9, 1, 7
  0059788  lfs 10, 8(9)
  005978c  fsubs 1, 7, 1
  0059790  fsubs 8, 6, 8
  0059794  fsubs 9, 2, 9
  0059798  fmuls 1, 1, 1
  005979c  fmuls 8, 8, 8
  00597a0  fmuls 9, 9, 9
  00597a4  fadds 1, 1, 8
  00597a8  fadds 1, 1, 9
  00597ac  fcmpu 0, 10, 1
  00597b0  bt 0, 0x597e4
  00597b4  addic 3, 9, 12
  00597b8  stfs 1, 8(9)
  00597bc  neg 4, 10
  00597c0  addic 5, 9, 24
  00597c4  stw 12, 4(9)
  00597c8  stfs 7, 0(3)
  00597cc  stfs 6, 4(3)
  00597d0  stfs 2, 8(3)
  00597d4  stw 4, 0(9)
  00597d8  stfs 5, 0(5)
  00597dc  stfs 4, 4(5)
  00597e0  stfs 3, 8(5)
  00597e4  ld 30, 48(1)
  00597e8  ld 31, 56(1)
  00597ec  addi 1, 1, 64
  00597f0  blr

CollSphereVsTri:   # 0x59800, 0x604 bytes
  0059800  stdu 1, -352(1)
  0059804  stfd 15, 216(1)
  0059808  stfd 16, 224(1)
  005980c  stfd 17, 232(1)
  0059810  stfd 18, 240(1)
  0059814  stfd 19, 248(1)
  0059818  stfd 20, 256(1)
  005981c  stfd 21, 264(1)
  0059820  stfd 22, 272(1)
  0059824  stfd 23, 280(1)
  0059828  stfd 24, 288(1)
  005982c  stfd 25, 296(1)
  0059830  stfd 26, 304(1)
  0059834  stfd 27, 312(1)
  0059838  stfd 28, 320(1)
  005983c  stfd 29, 328(1)
  0059840  stfd 30, 336(1)
  0059844  stfd 31, 344(1)
  0059848  ori 7, 3, 0
  005984c  ori 11, 4, 0
  0059850  ori 12, 5, 0
  0059854  std 31, 208(1)
  0059858  li 5, 352
  005985c  std 29, 192(1)
  0059860  lbz 31, 0(7)
  0059864  ori 3, 9, 0
  0059868  std 30, 200(1)
  005986c  lbz 29, 1(7)
  0059870  ori 30, 8, 0
  0059874  addc 8, 31, 31
  0059878  std 28, 184(1)
  005987c  addc 9, 1, 5
  0059880  std 26, 168(1)
  0059884  lis 28, 6
  0059888  addc 26, 31, 8
  005988c  std 27, 176(1)
  0059890  addi 8, 28, -26636
  0059894  rldicl 28, 3, 32, 32
  0059898  std 30, 88(9)
  005989c  addc 27, 29, 29
  00598a0  sldi 30, 26, 2
  00598a4  addc 27, 29, 27
  00598a8  stw 28, 96(9)
  00598ac  addc 30, 11, 30
  00598b0  lbz 28, 2(7)
  00598b4  addic 4, 5, 96
  00598b8  lfs 3, 112(9)
  00598bc  addic 3, 5, 88
  00598c0  lfs 1, 116(9)
  00598c4  sldi 5, 27, 2
  00598c8  lfs 2, 120(9)
  00598cc  clrldi 30, 30, 32
  00598d0  addc 27, 28, 28
  00598d4  addc 26, 11, 5
  00598d8  addc 27, 28, 27
  00598dc  lwz 5, 132(9)
  00598e0  clrldi 26, 26, 32
  00598e4  sldi 27, 27, 2
  00598e8  lfs 8, 0(30)
  00598ec  lfs 7, 4(30)
  00598f0  rlwinm 31, 31, 2, 22, 29
  00598f4  addc 11, 11, 27
  00598f8  lfs 6, 8(30)
  00598fc  rlwinm 30, 29, 2, 22, 29
  0059900  lfs 13, 0(26)
  0059904  clrldi 11, 11, 32
  0059908  lfs 12, 4(26)
  005990c  rlwinm 28, 28, 2, 22, 29
  0059910  lfs 11, 8(26)
  0059914  lwzx 31, 12, 31
  0059918  lwzx 30, 12, 30
  005991c  lfs 21, 0(11)
  0059920  and 31, 31, 30
  0059924  lfs 22, 4(11)
  0059928  lwzx 12, 12, 28
  005992c  lfs 23, 8(11)
  0059930  and 11, 31, 12
  0059934  lbz 7, 3(7)
  0059938  cmpwi 11, 0
  005993c  bf 2, 0x59da0
  0059940  rlwinm 11, 7, 0, 24, 24
  0059944  and 11, 11, 10
  0059948  cmpwi 11, 0
  005994c  bf 2, 0x59da0
  0059950  rlwinm 12, 10, 0, 26, 26
  0059954  li 11, 0
  0059958  cmplwi 12, 1
  005995c  bf 0, 0x59964
  0059960  li 11, 1
  0059964  srwi 12, 10, 8
  0059968  xor 12, 12, 7
  005996c  clrlwi 12, 12, 27
  0059970  or 11, 11, 12
  0059974  cmpwi 11, 0
  0059978  bt 2, 0x59da0
  005997c  fsubs 13, 13, 8
  0059980  stfd 8, 160(1)
  0059984  fsubs 12, 12, 7
  0059988  stfd 7, 152(1)
  005998c  fsubs 11, 11, 6
  0059990  stfd 6, 144(1)
  0059994  fsubs 21, 21, 8
  0059998  fsubs 22, 22, 7
  005999c  fsubs 23, 23, 6
  00599a0  addic 11, 1, 48
  00599a4  fsubs 4, 3, 8
  00599a8  fsubs 18, 2, 6
  00599ac  fsubs 17, 1, 7
  00599b0  addic 12, 1, 60
  00599b4  fmuls 2, 21, 11
  00599b8  fmuls 3, 22, 11
  00599bc  fmuls 1, 23, 12
  00599c0  fmuls 5, 23, 13
  00599c4  fmuls 7, 21, 12
  00599c8  stfs 13, 0(11)
  00599cc  fmuls 8, 22, 13
  00599d0  stfs 12, 4(11)
  00599d4  stfs 11, 8(11)
  00599d8  stfs 21, 0(12)
  00599dc  stfs 22, 4(12)
  00599e0  addic 11, 1, 84
  00599e4  stfs 23, 8(12)
  00599e8  stfs 4, 136(1)
  00599ec  fsubs 3, 3, 1
  00599f0  fsubs 2, 5, 2
  00599f4  fsubs 1, 7, 8
  00599f8  fmuls 5, 3, 3
  00599fc  fmuls 6, 2, 2
  0059a00  fmuls 4, 4, 3
  0059a04  fmuls 7, 1, 1
  0059a08  stfs 3, 0(11)
  0059a0c  fmuls 8, 17, 2
  0059a10  stfs 2, 4(11)
  0059a14  stfs 1, 8(11)
  0059a18  fmuls 9, 18, 1
  0059a1c  lfs 10, 0(8)
  0059a20  fadds 5, 5, 6
  0059a24  fadds 4, 4, 8
  0059a28  fadds 6, 5, 7
  0059a2c  fadds 5, 4, 9
  0059a30  fcmpu 0, 6, 10
  0059a34  fdivs 4, 5, 6
  0059a38  bt 2, 0x59da0
  0059a3c  rlwinm 10, 10, 0, 27, 27
  0059a40  cmpwi 10, 0
  0059a44  bf 2, 0x59a50
  0059a48  fcmpu 0, 5, 10
  0059a4c  bt 0, 0x59da0
  0059a50  fmuls 5, 3, 4
  0059a54  fmuls 6, 2, 4
  0059a58  lfs 24, 136(1)
  0059a5c  fmuls 7, 1, 4
  0059a60  stfd 17, 128(1)
  0059a64  fneg 8, 3
  0059a68  fneg 0, 1
  0059a6c  fneg 9, 2
  0059a70  stfd 18, 120(1)
  0059a74  lfs 19, 8(6)
  0059a78  fmuls 5, 5, 5
  0059a7c  fmuls 6, 6, 6
  0059a80  fmuls 20, 7, 7
  0059a84  fmuls 7, 8, 4
  0059a88  fmuls 26, 0, 4
  0059a8c  fmuls 25, 9, 4
  0059a90  fsubs 9, 21, 13
  0059a94  fsubs 8, 22, 12
  0059a98  fadds 4, 5, 6
  0059a9c  fadds 24, 24, 7
  0059aa0  fadds 26, 18, 26
  0059aa4  fadds 25, 17, 25
  0059aa8  fsubs 7, 23, 11
  0059aac  fadds 20, 4, 20
  0059ab0  fmuls 28, 24, 11
  0059ab4  fmuls 0, 26, 13
  0059ab8  fmuls 27, 25, 11
  0059abc  fmuls 4, 26, 12
  0059ac0  stfs 24, 72(1)
  0059ac4  fmuls 29, 24, 12
  0059ac8  stfs 25, 76(1)
  0059acc  fmuls 31, 25, 13
  0059ad0  stfs 26, 80(1)
  0059ad4  fmuls 30, 22, 26
  0059ad8  fmuls 18, 23, 25
  0059adc  fcmpu 0, 19, 20
  0059ae0  fmuls 17, 23, 24
  0059ae4  fmuls 16, 21, 26
  0059ae8  fsubs 28, 0, 28
  0059aec  fmuls 0, 21, 25
  0059af0  fmuls 15, 22, 24
  0059af4  fsubs 27, 27, 4
  0059af8  fsubs 29, 29, 31
  0059afc  fsubs 6, 24, 13
  0059b00  fsubs 5, 25, 12
  0059b04  fsubs 4, 26, 11
  0059b08  fsubs 30, 30, 18
  0059b0c  fsubs 31, 17, 16
  0059b10  fsubs 0, 0, 15
  0059b14  bt 0, 0x59da0
  0059b18  fmuls 18, 5, 7
  0059b1c  fmuls 17, 4, 8
  0059b20  fmuls 4, 4, 9
  0059b24  fmuls 7, 6, 7
  0059b28  fmuls 6, 6, 8
  0059b2c  fmuls 5, 5, 9
  0059b30  fmuls 8, 27, 3
  0059b34  fmuls 9, 28, 2
  0059b38  fmuls 29, 29, 1
  0059b3c  fsubs 28, 18, 17
  0059b40  fsubs 4, 4, 7
  0059b44  fmuls 7, 30, 3
  0059b48  fsubs 5, 6, 5
  0059b4c  fmuls 6, 31, 2
  0059b50  fadds 8, 8, 9
  0059b54  fmuls 9, 0, 1
  0059b58  fmuls 3, 28, 3
  0059b5c  fmuls 2, 4, 2
  0059b60  fmuls 1, 5, 1
  0059b64  fadds 4, 7, 6
  0059b68  fadds 5, 8, 29
  0059b6c  fadds 2, 3, 2
  0059b70  fadds 3, 4, 9
  0059b74  fcmpu 0, 5, 10
  0059b78  fadds 1, 2, 1
  0059b7c  fcmpu 6, 3, 10
  0059b80  cror 2, 1, 2
  0059b84  fcmpu 1, 1, 10
  0059b88  bt 2, 0x59ba8
  0059b8c  stfs 10, 96(1)
  0059b90  stfs 10, 100(1)
  0059b94  stfs 10, 104(1)
  0059b98  stfs 13, 108(1)
  0059b9c  stfs 12, 112(1)
  0059ba0  stfs 11, 116(1)
  0059ba4  b 0x59be4
  0059ba8  bf 24, 0x59bc8
  0059bac  stfs 21, 96(1)
  0059bb0  stfs 22, 100(1)
  0059bb4  stfs 23, 104(1)
  0059bb8  stfs 10, 108(1)
  0059bbc  stfs 10, 112(1)
  0059bc0  stfs 10, 116(1)
  0059bc4  b 0x59be4
  0059bc8  bf 4, 0x59cc0
  0059bcc  stfs 13, 96(1)
  0059bd0  stfs 12, 100(1)
  0059bd4  stfs 11, 104(1)
  0059bd8  stfs 21, 108(1)
  0059bdc  stfs 22, 112(1)
  0059be0  stfs 23, 116(1)
  0059be4  lfs 1, 96(1)
  0059be8  lfs 2, 100(1)
  0059bec  fsubs 3, 24, 1
  0059bf0  lfs 24, 108(1)
  0059bf4  lfs 5, 112(1)
  0059bf8  fsubs 4, 25, 2
  0059bfc  fsubs 24, 24, 1
  0059c00  lfs 6, 104(1)
  0059c04  fsubs 1, 5, 2
  0059c08  lfs 2, 116(1)
  0059c0c  fsubs 5, 26, 6
  0059c10  fsubs 2, 2, 6
  0059c14  fmuls 3, 3, 24
  0059c18  fmuls 4, 4, 1
  0059c1c  fmuls 6, 24, 24
  0059c20  fmuls 7, 1, 1
  0059c24  fmuls 5, 5, 2
  0059c28  fmuls 8, 2, 2
  0059c2c  fadds 3, 3, 4
  0059c30  fadds 4, 6, 7
  0059c34  fadds 3, 3, 5
  0059c38  fadds 4, 4, 8
  0059c3c  fdivs 3, 3, 4
  0059c40  fcmpu 0, 3, 10
  0059c44  bt 1, 0x59c4c
  0059c48  fmr 3, 10
  0059c4c  lfs 4, 4(8)
  0059c50  fcmpu 0, 3, 4
  0059c54  bt 0, 0x59c5c
  0059c58  fmr 3, 4
  0059c5c  fmuls 4, 24, 3
  0059c60  fmuls 1, 1, 3
  0059c64  fmuls 2, 2, 3
  0059c68  lfs 3, 96(1)
  0059c6c  lfs 5, 100(1)
  0059c70  lfs 6, 104(1)
  0059c74  lfs 7, 136(1)
  0059c78  fadds 3, 3, 4
  0059c7c  fadds 1, 5, 1
  0059c80  lfd 4, 128(1)
  0059c84  fadds 2, 6, 2
  0059c88  lfd 5, 120(1)
  0059c8c  fsubs 6, 3, 7
  0059c90  fsubs 4, 1, 4
  0059c94  stfs 3, 72(1)
  0059c98  fsubs 5, 2, 5
  0059c9c  stfs 1, 76(1)
  0059ca0  stfs 2, 80(1)
  0059ca4  fmuls 3, 6, 6
  0059ca8  fmuls 4, 4, 4
  0059cac  fmuls 20, 5, 5
  0059cb0  fadds 1, 3, 4
  0059cb4  fadds 20, 1, 20
  0059cb8  fcmpu 0, 19, 20
  0059cbc  bt 0, 0x59da0
  0059cc0  lfs 1, 92(9)
  0059cc4  lfd 2, 160(1)
  0059cc8  addic 7, 7, 4096
  0059ccc  lfsx 3, 1, 3
  0059cd0  lfd 4, 152(1)
  0059cd4  lfd 5, 144(1)
  0059cd8  fadds 2, 2, 3
  0059cdc  lfsx 3, 1, 4
  0059ce0  fadds 1, 4, 1
  0059ce4  stw 7, 0(6)
  0059ce8  addic 3, 6, 12
  0059cec  fadds 3, 5, 3
  0059cf0  stw 5, 4(6)
  0059cf4  lfs 4, 8(8)
  0059cf8  addic 4, 6, 24
  0059cfc  lfs 5, 72(1)
  0059d00  addic 5, 6, 36
  0059d04  lfs 6, 76(1)
  0059d08  fmuls 4, 20, 4
  0059d0c  lfs 7, 80(1)
  0059d10  addic 7, 6, 48
  0059d14  fadds 5, 5, 2
  0059d18  fadds 6, 6, 1
  0059d1c  fadds 7, 7, 3
  0059d20  stfs 4, 8(6)
  0059d24  stfs 5, 0(3)
  0059d28  stfs 6, 4(3)
  0059d2c  stfs 7, 8(3)
  0059d30  lfs 4, 84(1)
  0059d34  stfs 4, 0(4)
  0059d38  lfs 4, 88(1)
  0059d3c  stfs 4, 4(4)
  0059d40  lfs 4, 92(1)
  0059d44  stfs 4, 8(4)
  0059d48  stfs 2, 0(5)
  0059d4c  stfs 1, 4(5)
  0059d50  addic 3, 6, 60
  0059d54  stfs 3, 8(5)
  0059d58  lfs 4, 48(1)
  0059d5c  lfs 5, 52(1)
  0059d60  fadds 4, 4, 2
  0059d64  lfs 6, 56(1)
  0059d68  fadds 5, 5, 1
  0059d6c  fadds 6, 6, 3
  0059d70  stfs 4, 0(7)
  0059d74  stfs 5, 4(7)
  0059d78  stfs 6, 8(7)
  0059d7c  lfs 4, 60(1)
  0059d80  lfs 5, 64(1)
  0059d84  fadds 2, 4, 2
  0059d88  lfs 4, 68(1)
  0059d8c  fadds 1, 5, 1
  0059d90  fadds 3, 4, 3
  0059d94  stfs 2, 0(3)
  0059d98  stfs 1, 4(3)
  0059d9c  stfs 3, 8(3)
  0059da0  lfd 15, 216(1)
  0059da4  lfd 16, 224(1)
  0059da8  lfd 17, 232(1)
  0059dac  lfd 18, 240(1)
  0059db0  lfd 19, 248(1)
  0059db4  lfd 20, 256(1)
  0059db8  lfd 21, 264(1)
  0059dbc  lfd 22, 272(1)
  0059dc0  lfd 23, 280(1)
  0059dc4  lfd 24, 288(1)
  0059dc8  lfd 25, 296(1)
  0059dcc  lfd 26, 304(1)
  0059dd0  lfd 27, 312(1)
  0059dd4  lfd 28, 320(1)
  0059dd8  lfd 29, 328(1)
  0059ddc  lfd 30, 336(1)
  0059de0  lfd 31, 344(1)
  0059de4  ld 26, 168(1)
  0059de8  ld 27, 176(1)
  0059dec  ld 28, 184(1)
  0059df0  ld 29, 192(1)
  0059df4  ld 30, 200(1)
  0059df8  ld 31, 208(1)
  0059dfc  addi 1, 1, 352
  0059e00  blr

CollSphere:   # 0x59e20, 0x1df0 bytes
  0059e20  stdu 1, -10448(1)
  0059e24  mflr 0
  0059e28  std 0, 10464(1)
  0059e2c  stfd 14, 10304(1)
  0059e30  stfd 15, 10312(1)
  0059e34  stfd 16, 10320(1)
  0059e38  stfd 17, 10328(1)
  0059e3c  stfd 18, 10336(1)
  0059e40  stfd 19, 10344(1)
  0059e44  stfd 20, 10352(1)
  0059e48  stfd 21, 10360(1)
  0059e4c  stfd 22, 10368(1)
  0059e50  stfd 23, 10376(1)
  0059e54  stfd 24, 10384(1)
  0059e58  stfd 25, 10392(1)
  0059e5c  stfd 26, 10400(1)
  0059e60  stfd 27, 10408(1)
  0059e64  stfd 28, 10416(1)
  0059e68  stfd 29, 10424(1)
  0059e6c  stfd 30, 10432(1)
  0059e70  stfd 31, 10440(1)
  0059e74  addi 0, 1, 10128
  0059e78  stvx 30, 0, 0
  0059e7c  addic 0, 0, 16
  0059e80  stvx 31, 0, 0
  0059e84  std 31, 10296(1)
  0059e88  ori 31, 3, 0
  0059e8c  std 29, 10280(1)
  0059e90  std 14, 10160(1)
  0059e94  stfd 1, 10000(1)
  0059e98  addic 3, 1, 184
  0059e9c  std 6, 10048(1)
  0059ea0  lis 29, 6
  0059ea4  std 18, 10192(1)
  0059ea8  li 14, 0
  0059eac  ori 18, 5, 0
  0059eb0  lfs 1, 0(31)
  0059eb4  std 30, 10288(1)
  0059eb8  addi 29, 29, -25084
  0059ebc  ori 30, 14, 0
  0059ec0  std 28, 10272(1)
  0059ec4  std 27, 10264(1)
  0059ec8  std 26, 10256(1)
  0059ecc  std 25, 10248(1)
  0059ed0  std 24, 10240(1)
  0059ed4  std 23, 10232(1)
  0059ed8  std 22, 10224(1)
  0059edc  std 21, 10216(1)
  0059ee0  std 20, 10208(1)
  0059ee4  std 19, 10200(1)
  0059ee8  std 17, 10184(1)
  0059eec  std 16, 10176(1)
  0059ef0  std 15, 10168(1)
  0059ef4  stfs 1, 184(1)
  0059ef8  bl 0x5dd48c
  0059efc  nop
  0059f00  cmpwi 3, 2
  0059f04  bf 2, 0x59f0c
  0059f08  li 30, 1
  0059f0c  cmpwi 30, 0
  0059f10  bf 2, 0x59f6c
  0059f14  addic 3, 1, 180
  0059f18  lfs 1, 4(31)
  0059f1c  ori 30, 14, 0
  0059f20  stfs 1, 180(1)
  0059f24  bl 0x5dd48c
  0059f28  nop
  0059f2c  cmpwi 3, 2
  0059f30  bf 2, 0x59f38
  0059f34  li 30, 1
  0059f38  cmpwi 30, 0
  0059f3c  bf 2, 0x59f6c
  0059f40  addic 3, 1, 176
  0059f44  lfs 1, 8(31)
  0059f48  ori 30, 14, 0
  0059f4c  stfs 1, 176(1)
  0059f50  bl 0x5dd48c
  0059f54  nop
  0059f58  cmpwi 3, 2
  0059f5c  bf 2, 0x59f64
  0059f60  li 30, 1
  0059f64  cmpwi 30, 0
  0059f68  bt 2, 0x59f84
  0059f6c  lis 3, 101
  0059f70  addic 3, 3, 6940
  0059f74  bl 0x4ff98c
  0059f78  nop
  0059f7c  ori 3, 14, 0
  0059f80  b 0x5bb60
  0059f84  lfd 7, 10000(1)
  0059f88  addic 3, 1, 188
  0059f8c  lfs 8, 0(31)
  0059f90  addic 4, 1, 200
  0059f94  lfs 9, 4(31)
  0059f98  addic 5, 1, 212
  0059f9c  lfs 10, 8(31)
  0059fa0  fadds 1, 8, 7
  0059fa4  fadds 2, 9, 7
  0059fa8  fadds 3, 10, 7
  0059fac  fsubs 4, 8, 7
  0059fb0  fsubs 5, 9, 7
  0059fb4  fsubs 6, 10, 7
  0059fb8  stfs 1, 0(3)
  0059fbc  stfs 2, 4(3)
  0059fc0  stfs 3, 8(3)
  0059fc4  stfs 4, 0(4)
  0059fc8  stfs 5, 4(4)
  0059fcc  stfs 6, 8(4)
  0059fd0  lfs 14, 0(29)
  0059fd4  fmuls 8, 8, 14
  0059fd8  fmuls 9, 9, 14
  0059fdc  fmuls 10, 10, 14
  0059fe0  fmuls 7, 7, 14
  0059fe4  fcmpu 6, 1, 14
  0059fe8  fcmpu 7, 2, 14
  0059fec  stfs 8, 0(5)
  0059ff0  stfs 9, 4(5)
  0059ff4  stfs 10, 8(5)
  0059ff8  lfs 25, 4(29)
  0059ffc  fcmpu 0, 4, 25
  005a000  fcmpu 1, 6, 25
  005a004  bt 0, 0x5b9ac
  005a008  fcmpu 0, 5, 25
  005a00c  bt 0, 0x5b9ac
  005a010  bt 4, 0x5b9ac
  005a014  bt 25, 0x5b9ac
  005a018  bt 29, 0x5b9ac
  005a01c  fcmpu 0, 3, 14
  005a020  bt 1, 0x5b9ac
  005a024  lis 15, 161
  005a028  addic 15, 15, 2368
  005a02c  lwz 31, 16(15)
  005a030  cmpwi 31, 0
  005a034  bt 0, 0x5b9ac
  005a038  fctiwz 8, 4
  005a03c  fctiwz 9, 5
  005a040  addic 3, 31, 1
  005a044  fctiwz 10, 6
  005a048  fctiwz 11, 1
  005a04c  fctiwz 12, 2
  005a050  fctiwz 13, 3
  005a054  stw 3, 16(15)
  005a058  fcmpu 0, 7, 25
  005a05c  stfd 8, 10104(1)
  005a060  lwz 31, 10108(1)
  005a064  stfd 9, 10104(1)
  005a068  lwz 3, 10108(1)
  005a06c  stfd 10, 10104(1)
  005a070  cror 6, 0, 2
  005a074  lwz 27, 10108(1)
  005a078  stfd 11, 10104(1)
  005a07c  lwz 30, 10108(1)
  005a080  stfd 12, 10104(1)
  005a084  lwz 4, 10108(1)
  005a088  stfd 13, 10104(1)
  005a08c  lwz 28, 10108(1)
  005a090  bt 6, 0x5b9ac
  005a094  fmuls 4, 4, 14
  005a098  srawi 5, 31, 2
  005a09c  fmuls 5, 5, 14
  005a0a0  addic 6, 1, 224
  005a0a4  fmuls 6, 6, 14
  005a0a8  addic 7, 1, 236
  005a0ac  fmuls 1, 1, 14
  005a0b0  li 0, 9984
  005a0b4  fmuls 2, 2, 14
  005a0b8  stw 5, 9984(1)
  005a0bc  fmuls 3, 3, 14
  005a0c0  stw 5, 9988(1)
  005a0c4  stw 5, 9992(1)
  005a0c8  srawi 31, 3, 2
  005a0cc  stw 5, 9996(1)
  005a0d0  srawi 27, 27, 2
  005a0d4  stfs 4, 0(6)
  005a0d8  stfs 5, 4(6)
  005a0dc  stfs 6, 8(6)
  005a0e0  stfs 1, 0(7)
  005a0e4  stfs 2, 4(7)
  005a0e8  stfs 3, 8(7)
  005a0ec  lvx 2, 1, 0
  005a0f0  li 0, 9984
  005a0f4  vspltw 2, 2, 0
  005a0f8  stw 31, 9984(1)
  005a0fc  stw 31, 9988(1)
  005a100  stw 31, 9992(1)
  005a104  vspltw 2, 2, 0
  005a108  stw 31, 9996(1)
  005a10c  lvx 3, 1, 0
  005a110  li 0, 9984
  005a114  vspltw 2, 2, 0
  005a118  stw 27, 9984(1)
  005a11c  stw 27, 9988(1)
  005a120  stw 27, 9992(1)
  005a124  vspltw 2, 2, 0
  005a128  stw 27, 9996(1)
  005a12c  lvx 4, 1, 0
  005a130  vspltw 3, 3, 0
  005a134  vspltw 4, 4, 0
  005a138  vspltw 2, 2, 0
  005a13c  vspltw 3, 3, 0
  005a140  vspltw 4, 4, 0
  005a144  vspltw 2, 2, 0
  005a148  vspltw 3, 3, 0
  005a14c  vspltw 4, 4, 0
  005a150  vspltw 2, 2, 0
  005a154  vspltw 3, 3, 0
  005a158  vspltw 4, 4, 0
  005a15c  vspltw 2, 2, 0
  005a160  vspltw 3, 3, 0
  005a164  vspltw 4, 4, 0
  005a168  vspltw 2, 2, 0
  005a16c  vspltw 3, 3, 0
  005a170  vspltw 4, 4, 0
  005a174  vspltw 2, 2, 0
  005a178  vspltw 3, 3, 0
  005a17c  vspltw 4, 4, 0
  005a180  vspltw 2, 2, 0
  005a184  vspltw 3, 3, 0
  005a188  vspltw 4, 4, 0
  005a18c  vspltw 2, 2, 0
  005a190  vspltw 3, 3, 0
  005a194  vspltw 4, 4, 0
  005a198  vspltw 2, 2, 0
  005a19c  vspltw 3, 3, 0
  005a1a0  vspltw 4, 4, 0
  005a1a4  vspltw 2, 2, 0
  005a1a8  vspltw 3, 3, 0
  005a1ac  vspltw 4, 4, 0
  005a1b0  vspltw 2, 2, 0
  005a1b4  vspltw 3, 3, 0
  005a1b8  vspltw 4, 4, 0
  005a1bc  vspltw 2, 2, 0
  005a1c0  vspltw 3, 3, 0
  005a1c4  vspltw 4, 4, 0
  005a1c8  vspltw 2, 2, 0
  005a1cc  vspltw 3, 3, 0
  005a1d0  vspltw 4, 4, 0
  005a1d4  vspltw 2, 2, 0
  005a1d8  vspltw 3, 3, 0
  005a1dc  vspltw 4, 4, 0
  005a1e0  vspltw 2, 2, 0
  005a1e4  vspltw 3, 3, 0
  005a1e8  vspltw 4, 4, 0
  005a1ec  vspltw 2, 2, 0
  005a1f0  vspltw 3, 3, 0
  005a1f4  vspltw 4, 4, 0
  005a1f8  vspltw 2, 2, 0
  005a1fc  vspltw 3, 3, 0
  005a200  vspltw 4, 4, 0
  005a204  vspltw 2, 2, 0
  005a208  addic 3, 1, 260
  005a20c  vspltw 3, 3, 0
  005a210  vspltw 4, 4, 0
  005a214  vspltw 2, 2, 0
  005a218  vspltw 3, 3, 0
  005a21c  vspltw 4, 4, 0
  005a220  vspltw 2, 2, 0
  005a224  vspltw 3, 3, 0
  005a228  vspltw 4, 4, 0
  005a22c  vspltw 2, 2, 0
  005a230  li 6, 4
  005a234  vspltw 3, 3, 0
  005a238  vspltw 4, 4, 0
  005a23c  vspltw 2, 2, 0
  005a240  li 7, 8
  005a244  vspltw 3, 3, 0
  005a248  vspltw 4, 4, 0
  005a24c  vspltw 2, 2, 0
  005a250  srawi 8, 30, 2
  005a254  vspltw 3, 3, 0
  005a258  vspltw 4, 4, 0
  005a25c  vspltw 2, 2, 0
  005a260  srawi 30, 4, 2
  005a264  vspltw 3, 3, 0
  005a268  vspltw 4, 4, 0
  005a26c  vspltw 2, 2, 0
  005a270  srawi 28, 28, 2
  005a274  vspltw 3, 3, 0
  005a278  vspltw 4, 4, 0
  005a27c  vspltw 2, 2, 0
  005a280  vspltw 3, 3, 0
  005a284  vspltw 4, 4, 0
  005a288  vspltw 2, 2, 0
  005a28c  vspltw 3, 3, 0
  005a290  vspltw 4, 4, 0
  005a294  vspltw 2, 2, 0
  005a298  vspltw 3, 3, 0
  005a29c  vspltw 4, 4, 0
  005a2a0  vspltw 2, 2, 0
  005a2a4  vspltw 3, 3, 0
  005a2a8  vspltw 4, 4, 0
  005a2ac  vspltw 2, 2, 0
  005a2b0  vspltw 3, 3, 0
  005a2b4  vspltw 4, 4, 0
  005a2b8  vspltw 2, 2, 0
  005a2bc  vspltw 3, 3, 0
  005a2c0  vspltw 4, 4, 0
  005a2c4  vspltw 2, 2, 0
  005a2c8  vspltw 3, 3, 0
  005a2cc  vspltw 4, 4, 0
  005a2d0  vspltw 3, 3, 0
  005a2d4  stvewx 2, 0, 3
  005a2d8  vspltw 2, 4, 0
  005a2dc  li 0, 9984
  005a2e0  vspltw 3, 3, 0
  005a2e4  vspltw 2, 2, 0
  005a2e8  vspltw 3, 3, 0
  005a2ec  vspltw 2, 2, 0
  005a2f0  stvewx 3, 6, 3
  005a2f4  stvewx 2, 7, 3
  005a2f8  stw 8, 9984(1)
  005a2fc  stw 8, 9988(1)
  005a300  stw 8, 9992(1)
  005a304  stw 8, 9996(1)
  005a308  lvx 2, 1, 0
  005a30c  li 0, 9984
  005a310  stw 30, 9984(1)
  005a314  vspltw 2, 2, 0
  005a318  stw 30, 9988(1)
  005a31c  stw 30, 9992(1)
  005a320  stw 30, 9996(1)
  005a324  vspltw 2, 2, 0
  005a328  lvx 3, 1, 0
  005a32c  li 0, 9984
  005a330  stw 28, 9984(1)
  005a334  stw 28, 9988(1)
  005a338  vspltw 2, 2, 0
  005a33c  stw 28, 9992(1)
  005a340  stw 28, 9996(1)
  005a344  lvx 4, 1, 0
  005a348  vspltw 2, 2, 0
  005a34c  vspltw 3, 3, 0
  005a350  vspltw 4, 4, 0
  005a354  vspltw 2, 2, 0
  005a358  vspltw 3, 3, 0
  005a35c  vspltw 4, 4, 0
  005a360  vspltw 2, 2, 0
  005a364  vspltw 3, 3, 0
  005a368  vspltw 4, 4, 0
  005a36c  vspltw 2, 2, 0
  005a370  vspltw 3, 3, 0
  005a374  vspltw 4, 4, 0
  005a378  vspltw 2, 2, 0
  005a37c  vspltw 3, 3, 0
  005a380  vspltw 4, 4, 0
  005a384  vspltw 2, 2, 0
  005a388  vspltw 3, 3, 0
  005a38c  vspltw 4, 4, 0
  005a390  vspltw 2, 2, 0
  005a394  vspltw 3, 3, 0
  005a398  vspltw 4, 4, 0
  005a39c  vspltw 2, 2, 0
  005a3a0  vspltw 3, 3, 0
  005a3a4  vspltw 4, 4, 0
  005a3a8  vspltw 2, 2, 0
  005a3ac  vspltw 3, 3, 0
  005a3b0  vspltw 4, 4, 0
  005a3b4  vspltw 2, 2, 0
  005a3b8  vspltw 3, 3, 0
  005a3bc  vspltw 4, 4, 0
  005a3c0  vspltw 2, 2, 0
  005a3c4  vspltw 3, 3, 0
  005a3c8  vspltw 4, 4, 0
  005a3cc  vspltw 2, 2, 0
  005a3d0  vspltw 3, 3, 0
  005a3d4  vspltw 4, 4, 0
  005a3d8  vspltw 2, 2, 0
  005a3dc  vspltw 3, 3, 0
  005a3e0  vspltw 4, 4, 0
  005a3e4  vspltw 2, 2, 0
  005a3e8  vspltw 3, 3, 0
  005a3ec  vspltw 4, 4, 0
  005a3f0  vspltw 2, 2, 0
  005a3f4  vspltw 3, 3, 0
  005a3f8  vspltw 4, 4, 0
  005a3fc  vspltw 2, 2, 0
  005a400  vspltw 3, 3, 0
  005a404  vspltw 4, 4, 0
  005a408  vspltw 2, 2, 0
  005a40c  vspltw 3, 3, 0
  005a410  vspltw 4, 4, 0
  005a414  vspltw 2, 2, 0
  005a418  vspltw 3, 3, 0
  005a41c  vspltw 4, 4, 0
  005a420  addic 3, 1, 272
  005a424  vspltw 2, 2, 0
  005a428  vspltw 3, 3, 0
  005a42c  vspltw 4, 4, 0
  005a430  vspltw 2, 2, 0
  005a434  vspltw 3, 3, 0
  005a438  vspltw 4, 4, 0
  005a43c  vspltw 2, 2, 0
  005a440  vspltw 3, 3, 0
  005a444  vspltw 4, 4, 0
  005a448  vspltw 2, 2, 0
  005a44c  vspltw 3, 3, 0
  005a450  vspltw 4, 4, 0
  005a454  vspltw 2, 2, 0
  005a458  vspltw 3, 3, 0
  005a45c  vspltw 4, 4, 0
  005a460  vspltw 2, 2, 0
  005a464  vspltw 3, 3, 0
  005a468  vspltw 4, 4, 0
  005a46c  vspltw 2, 2, 0
  005a470  vspltw 3, 3, 0
  005a474  vspltw 4, 4, 0
  005a478  fmuls 1, 7, 7
  005a47c  stfs 7, 10012(1)
  005a480  vspltw 2, 2, 0
  005a484  vspltw 3, 3, 0
  005a488  vspltw 4, 4, 0
  005a48c  stfs 25, 10008(1)
  005a490  vspltw 2, 2, 0
  005a494  vspltw 3, 3, 0
  005a498  vspltw 4, 4, 0
  005a49c  std 5, 10088(1)
  005a4a0  vspltw 2, 2, 0
  005a4a4  vspltw 3, 3, 0
  005a4a8  vspltw 4, 4, 0
  005a4ac  std 8, 10040(1)
  005a4b0  vspltw 2, 2, 0
  005a4b4  vspltw 3, 3, 0
  005a4b8  vspltw 4, 4, 0
  005a4bc  vspltw 2, 2, 0
  005a4c0  vspltw 3, 3, 0
  005a4c4  vspltw 4, 4, 0
  005a4c8  vspltw 2, 2, 0
  005a4cc  vspltw 3, 3, 0
  005a4d0  vspltw 4, 4, 0
  005a4d4  vspltw 2, 2, 0
  005a4d8  vspltw 3, 3, 0
  005a4dc  vspltw 4, 4, 0
  005a4e0  vspltw 2, 2, 0
  005a4e4  vspltw 3, 3, 0
  005a4e8  vspltw 4, 4, 0
  005a4ec  vspltw 3, 3, 0
  005a4f0  stvewx 2, 0, 3
  005a4f4  vspltw 2, 4, 0
  005a4f8  vspltw 3, 3, 0
  005a4fc  vspltw 2, 2, 0
  005a500  vspltw 3, 3, 0
  005a504  vspltw 2, 2, 0
  005a508  stvewx 3, 6, 3
  005a50c  stvewx 2, 7, 3
  005a510  stfs 25, 688(1)
  005a514  stfs 25, 692(1)
  005a518  clrlwi 3, 18, 31
  005a51c  stfs 25, 696(1)
  005a520  stfs 25, 700(1)
  005a524  stfs 25, 704(1)
  005a528  cmpwi 3, 0
  005a52c  stfs 25, 708(1)
  005a530  stfs 25, 712(1)
  005a534  stfs 25, 716(1)
  005a538  stfs 25, 720(1)
  005a53c  stfs 25, 724(1)
  005a540  stfs 25, 728(1)
  005a544  stfs 25, 732(1)
  005a548  stfs 25, 736(1)
  005a54c  stfs 25, 740(1)
  005a550  stfs 25, 744(1)
  005a554  stw 14, 676(1)
  005a558  stw 14, 680(1)
  005a55c  lfs 2, 12(29)
  005a560  lfs 3, 8(29)
  005a564  fmuls 1, 1, 2
  005a568  stfs 3, 10016(1)
  005a56c  stfs 1, 684(1)
  005a570  bf 2, 0x5ade8
  005a574  ld 3, 10088(1)
  005a578  li 0, 9984
  005a57c  slwi 4, 31, 12
  005a580  slwi 3, 3, 12
  005a584  slwi 5, 27, 12
  005a588  stw 3, 9984(1)
  005a58c  stw 3, 9988(1)
  005a590  stw 3, 9992(1)
  005a594  stw 3, 9996(1)
  005a598  lvx 2, 1, 0
  005a59c  li 0, 9984
  005a5a0  stw 4, 9984(1)
  005a5a4  vspltw 2, 2, 0
  005a5a8  stw 4, 9988(1)
  005a5ac  stw 4, 9992(1)
  005a5b0  stw 4, 9996(1)
  005a5b4  vspltw 2, 2, 0
  005a5b8  lvx 3, 1, 0
  005a5bc  li 0, 9984
  005a5c0  stw 5, 9984(1)
  005a5c4  stw 5, 9988(1)
  005a5c8  vspltw 2, 2, 0
  005a5cc  stw 5, 9992(1)
  005a5d0  stw 5, 9996(1)
  005a5d4  lvx 4, 1, 0
  005a5d8  vspltw 2, 2, 0
  005a5dc  vspltw 3, 3, 0
  005a5e0  vspltw 4, 4, 0
  005a5e4  vspltw 2, 2, 0
  005a5e8  vspltw 3, 3, 0
  005a5ec  vspltw 4, 4, 0
  005a5f0  vspltw 2, 2, 0
  005a5f4  vspltw 3, 3, 0
  005a5f8  vspltw 4, 4, 0
  005a5fc  vspltw 2, 2, 0
  005a600  vspltw 3, 3, 0
  005a604  vspltw 4, 4, 0
  005a608  vspltw 2, 2, 0
  005a60c  vspltw 3, 3, 0
  005a610  vspltw 4, 4, 0
  005a614  vspltw 2, 2, 0
  005a618  vspltw 3, 3, 0
  005a61c  vspltw 4, 4, 0
  005a620  vspltw 2, 2, 0
  005a624  vspltw 3, 3, 0
  005a628  vspltw 4, 4, 0
  005a62c  vspltw 2, 2, 0
  005a630  vspltw 3, 3, 0
  005a634  vspltw 4, 4, 0
  005a638  vspltw 2, 2, 0
  005a63c  vspltw 3, 3, 0
  005a640  vspltw 4, 4, 0
  005a644  vspltw 2, 2, 0
  005a648  vspltw 3, 3, 0
  005a64c  vspltw 4, 4, 0
  005a650  vspltw 2, 2, 0
  005a654  vspltw 3, 3, 0
  005a658  vspltw 4, 4, 0
  005a65c  vspltw 2, 2, 0
  005a660  vspltw 3, 3, 0
  005a664  vspltw 4, 4, 0
  005a668  vspltw 2, 2, 0
  005a66c  vspltw 3, 3, 0
  005a670  vspltw 4, 4, 0
  005a674  vspltw 2, 2, 0
  005a678  vspltw 3, 3, 0
  005a67c  vspltw 4, 4, 0
  005a680  vspltw 2, 2, 0
  005a684  vspltw 3, 3, 0
  005a688  vspltw 4, 4, 0
  005a68c  vspltw 2, 2, 0
  005a690  vspltw 3, 3, 0
  005a694  vspltw 4, 4, 0
  005a698  vspltw 2, 2, 0
  005a69c  vspltw 3, 3, 0
  005a6a0  vspltw 4, 4, 0
  005a6a4  vspltw 2, 2, 0
  005a6a8  vspltw 3, 3, 0
  005a6ac  vspltw 4, 4, 0
  005a6b0  addic 6, 1, 296
  005a6b4  vspltw 2, 2, 0
  005a6b8  vspltw 3, 3, 0
  005a6bc  vspltw 4, 4, 0
  005a6c0  vspltw 2, 2, 0
  005a6c4  vspltw 3, 3, 0
  005a6c8  vspltw 4, 4, 0
  005a6cc  vspltw 2, 2, 0
  005a6d0  vspltw 3, 3, 0
  005a6d4  vspltw 4, 4, 0
  005a6d8  li 7, 4
  005a6dc  vspltw 2, 2, 0
  005a6e0  vspltw 3, 3, 0
  005a6e4  vspltw 4, 4, 0
  005a6e8  li 8, 8
  005a6ec  vspltw 2, 2, 0
  005a6f0  vspltw 3, 3, 0
  005a6f4  vspltw 4, 4, 0
  005a6f8  extsw 3, 3
  005a6fc  vspltw 2, 2, 0
  005a700  vspltw 3, 3, 0
  005a704  vspltw 4, 4, 0
  005a708  vspltw 2, 2, 0
  005a70c  vspltw 3, 3, 0
  005a710  vspltw 4, 4, 0
  005a714  vspltw 2, 2, 0
  005a718  vspltw 3, 3, 0
  005a71c  vspltw 4, 4, 0
  005a720  vspltw 2, 2, 0
  005a724  vspltw 3, 3, 0
  005a728  vspltw 4, 4, 0
  005a72c  vspltw 2, 2, 0
  005a730  vspltw 3, 3, 0
  005a734  vspltw 4, 4, 0
  005a738  vspltw 2, 2, 0
  005a73c  vspltw 3, 3, 0
  005a740  vspltw 4, 4, 0
  005a744  vspltw 2, 2, 0
  005a748  vspltw 3, 3, 0
  005a74c  vspltw 4, 4, 0
  005a750  vspltw 2, 2, 0
  005a754  vspltw 3, 3, 0
  005a758  vspltw 4, 4, 0
  005a75c  vspltw 2, 2, 0
  005a760  vspltw 3, 3, 0
  005a764  vspltw 4, 4, 0
  005a768  vspltw 2, 2, 0
  005a76c  vspltw 3, 3, 0
  005a770  vspltw 4, 4, 0
  005a774  vspltw 3, 3, 0
  005a778  stvewx 2, 0, 6
  005a77c  vspltw 2, 4, 0
  005a780  vspltw 3, 3, 0
  005a784  vspltw 2, 2, 0
  005a788  vspltw 3, 3, 0
  005a78c  vspltw 2, 2, 0
  005a790  li 0, 9984
  005a794  stvewx 3, 7, 6
  005a798  stvewx 2, 8, 6
  005a79c  std 3, 10104(1)
  005a7a0  extsw 3, 4
  005a7a4  extsw 4, 5
  005a7a8  addic 5, 1, 284
  005a7ac  lfd 1, 10104(1)
  005a7b0  std 3, 10104(1)
  005a7b4  fcfid 1, 1
  005a7b8  addic 3, 1, 5868
  005a7bc  frsp 1, 1
  005a7c0  stfs 1, 9984(1)
  005a7c4  stfs 1, 9988(1)
  005a7c8  stfs 1, 9992(1)
  005a7cc  stfs 1, 9996(1)
  005a7d0  lfd 1, 10104(1)
  005a7d4  std 4, 10104(1)
  005a7d8  fcfid 1, 1
  005a7dc  lvx 2, 1, 0
  005a7e0  li 0, 9984
  005a7e4  vspltw 2, 2, 0
  005a7e8  vspltw 2, 2, 0
  005a7ec  frsp 1, 1
  005a7f0  vspltw 2, 2, 0
  005a7f4  vspltw 2, 2, 0
  005a7f8  vspltw 2, 2, 0
  005a7fc  stfs 1, 9984(1)
  005a800  stfs 1, 9988(1)
  005a804  stfs 1, 9992(1)
  005a808  stfs 1, 9996(1)
  005a80c  lfd 1, 10104(1)
  005a810  vspltw 2, 2, 0
  005a814  fcfid 1, 1
  005a818  lvx 3, 1, 0
  005a81c  li 0, 9984
  005a820  vspltw 2, 2, 0
  005a824  vspltw 3, 3, 0
  005a828  vspltw 2, 2, 0
  005a82c  vspltw 3, 3, 0
  005a830  frsp 1, 1
  005a834  vspltw 2, 2, 0
  005a838  vspltw 3, 3, 0
  005a83c  vspltw 2, 2, 0
  005a840  vspltw 3, 3, 0
  005a844  vspltw 2, 2, 0
  005a848  vspltw 3, 3, 0
  005a84c  stfs 1, 9984(1)
  005a850  stfs 1, 9988(1)
  005a854  stfs 1, 9992(1)
  005a858  stfs 1, 9996(1)
  005a85c  lvx 4, 1, 0
  005a860  vspltw 2, 2, 0
  005a864  vspltw 3, 3, 0
  005a868  vspltw 4, 4, 0
  005a86c  vspltw 2, 2, 0
  005a870  vspltw 3, 3, 0
  005a874  vspltw 4, 4, 0
  005a878  vspltw 2, 2, 0
  005a87c  vspltw 3, 3, 0
  005a880  vspltw 4, 4, 0
  005a884  vspltw 2, 2, 0
  005a888  vspltw 3, 3, 0
  005a88c  vspltw 4, 4, 0
  005a890  vspltw 2, 2, 0
  005a894  vspltw 3, 3, 0
  005a898  vspltw 4, 4, 0
  005a89c  vspltw 2, 2, 0
  005a8a0  vspltw 3, 3, 0
  005a8a4  vspltw 4, 4, 0
  005a8a8  vspltw 2, 2, 0
  005a8ac  vspltw 3, 3, 0
  005a8b0  vspltw 4, 4, 0
  005a8b4  vspltw 2, 2, 0
  005a8b8  vspltw 3, 3, 0
  005a8bc  vspltw 4, 4, 0
  005a8c0  vspltw 2, 2, 0
  005a8c4  vspltw 3, 3, 0
  005a8c8  vspltw 4, 4, 0
  005a8cc  vspltw 2, 2, 0
  005a8d0  vspltw 3, 3, 0
  005a8d4  vspltw 4, 4, 0
  005a8d8  vspltw 2, 2, 0
  005a8dc  vspltw 3, 3, 0
  005a8e0  vspltw 4, 4, 0
  005a8e4  vspltw 2, 2, 0
  005a8e8  vspltw 3, 3, 0
  005a8ec  vspltw 4, 4, 0
  005a8f0  vspltw 2, 2, 0
  005a8f4  vspltw 3, 3, 0
  005a8f8  vspltw 4, 4, 0
  005a8fc  vspltw 2, 2, 0
  005a900  vspltw 3, 3, 0
  005a904  vspltw 4, 4, 0
  005a908  vspltw 2, 2, 0
  005a90c  vspltw 3, 3, 0
  005a910  vspltw 4, 4, 0
  005a914  vspltw 2, 2, 0
  005a918  vspltw 3, 3, 0
  005a91c  vspltw 4, 4, 0
  005a920  vspltw 2, 2, 0
  005a924  vspltw 3, 3, 0
  005a928  vspltw 4, 4, 0
  005a92c  vspltw 2, 2, 0
  005a930  vspltw 3, 3, 0
  005a934  vspltw 4, 4, 0
  005a938  vspltw 2, 2, 0
  005a93c  vspltw 3, 3, 0
  005a940  vspltw 4, 4, 0
  005a944  vspltw 2, 2, 0
  005a948  vspltw 3, 3, 0
  005a94c  vspltw 4, 4, 0
  005a950  vspltw 2, 2, 0
  005a954  vspltw 3, 3, 0
  005a958  vspltw 4, 4, 0
  005a95c  vspltw 2, 2, 0
  005a960  vspltw 3, 3, 0
  005a964  vspltw 4, 4, 0
  005a968  vspltw 30, 2, 0
  005a96c  vspltw 2, 3, 0
  005a970  vspltw 3, 4, 0
  005a974  li 4, 256
  005a978  vspltw 2, 2, 0
  005a97c  vspltw 3, 3, 0
  005a980  vspltw 30, 30, 0
  005a984  vspltw 2, 2, 0
  005a988  vspltw 3, 3, 0
  005a98c  vspltw 2, 2, 0
  005a990  vspltw 3, 3, 0
  005a994  vspltw 2, 2, 0
  005a998  vspltw 3, 3, 0
  005a99c  vspltw 2, 2, 0
  005a9a0  vspltw 3, 3, 0
  005a9a4  vspltw 31, 2, 0
  005a9a8  vspltw 2, 3, 0
  005a9ac  vspltw 31, 31, 0
  005a9b0  vspltw 2, 2, 0
  005a9b4  vspltw 2, 2, 0
  005a9b8  vspltw 2, 2, 0
  005a9bc  vspltw 2, 2, 0
  005a9c0  vspltw 2, 2, 0
  005a9c4  vspltw 2, 2, 0
  005a9c8  vspltw 2, 2, 0
  005a9cc  stvewx 2, 8, 5
  005a9d0  stfs 25, 0(3)
  005a9d4  addic 4, 4, -1
  005a9d8  stfs 25, 4(3)
  005a9dc  stfs 25, 8(3)
  005a9e0  cmpwi 4, 0
  005a9e4  stfs 25, 12(3)
  005a9e8  addic 3, 3, 16
  005a9ec  bf 2, 0x5a9d0
  005a9f0  addic 29, 1, 5868
  005a9f4  vspltw 2, 31, 0
  005a9f8  addic 3, 1, 288
  005a9fc  lis 24, 6
  005aa00  ld 23, 10040(1)
  005aa04  ori 26, 31, 0
  005aa08  addi 24, 24, -25084
  005aa0c  stvewx 2, 0, 3
  005aa10  vspltw 2, 30, 0
  005aa14  addic 3, 1, 284
  005aa18  ld 25, 10088(1)
  005aa1c  stvewx 2, 0, 3
  005aa20  lfs 1, 16(24)
  005aa24  lfs 31, 284(1)
  005aa28  addic 6, 1, 308
  005aa2c  fmr 26, 1
  005aa30  lfs 30, 288(1)
  005aa34  lfs 29, 292(1)
  005aa38  ori 3, 25, 0
  005aa3c  ori 4, 26, 0
  005aa40  ori 5, 27, 0
  005aa44  fadds 28, 31, 26
  005aa48  fadds 27, 30, 26
  005aa4c  fadds 26, 29, 26
  005aa50  stfs 28, 0(6)
  005aa54  stfs 27, 4(6)
  005aa58  stfs 26, 8(6)
  005aa5c  bl 0x56b24
  005aa60  cmpwi 3, 0
  005aa64  stw 3, 160(1)
  005aa68  bt 2, 0x5aa88
  005aa6c  lfs 1, 160(1)
  005aa70  stfs 28, 0(29)
  005aa74  addic 3, 29, 16
  005aa78  stfs 27, 4(29)
  005aa7c  stfs 26, 8(29)
  005aa80  stfs 1, 12(29)
  005aa84  clrldi 29, 3, 32
  005aa88  cmpw 23, 25
  005aa8c  bt 2, 0x5aab8
  005aa90  lfs 1, 20(24)
  005aa94  fadds 2, 30, 25
  005aa98  fadds 3, 29, 25
  005aa9c  addic 25, 25, 1
  005aaa0  fadds 1, 31, 1
  005aaa4  extsw 25, 25
  005aaa8  stfs 2, 288(1)
  005aaac  stfs 3, 292(1)
  005aab0  stfs 1, 284(1)
  005aab4  b 0x5aa20
  005aab8  cmpw 30, 26
  005aabc  bt 2, 0x5aae0
  005aac0  lfs 1, 20(24)
  005aac4  fadds 2, 29, 25
  005aac8  addic 26, 26, 1
  005aacc  fadds 1, 30, 1
  005aad0  extsw 26, 26
  005aad4  stfs 2, 292(1)
  005aad8  stfs 1, 288(1)
  005aadc  b 0x5aa10
  005aae0  cmpw 28, 27
  005aae4  bt 2, 0x5ab08
  005aae8  lis 3, 6
  005aaec  addic 27, 27, 1
  005aaf0  addi 3, 3, -25084
  005aaf4  extsw 27, 27
  005aaf8  lfs 1, 20(3)
  005aafc  fadds 1, 29, 1
  005ab00  stfs 1, 292(1)
  005ab04  b 0x5a9f4
  005ab08  stfs 25, 12(29)
  005ab0c  addic 29, 1, 5868
  005ab10  stfs 25, 10008(1)
  005ab14  lwz 24, 12(29)
  005ab18  lfs 1, 12(29)
  005ab1c  cmpwi 24, 0
  005ab20  stfs 1, 164(1)
  005ab24  bt 2, 0x5ade8
  005ab28  lbz 28, 2(24)
  005ab2c  cmpwi 28, 0
  005ab30  bt 2, 0x5ade0
  005ab34  addic 3, 1, 320
  005ab38  lfs 4, 0(29)
  005ab3c  addic 4, 1, 332
  005ab40  lfs 5, 4(29)
  005ab44  lfs 6, 8(29)
  005ab48  addic 5, 1, 344
  005ab4c  stfs 4, 0(3)
  005ab50  stfs 5, 4(3)
  005ab54  stfs 6, 8(3)
  005ab58  lfs 1, 212(1)
  005ab5c  lfs 2, 216(1)
  005ab60  fsubs 1, 1, 4
  005ab64  lfs 3, 220(1)
  005ab68  fsubs 2, 2, 5
  005ab6c  fsubs 3, 3, 6
  005ab70  addic 6, 1, 356
  005ab74  ori 3, 14, 0
  005ab78  addic 26, 24, 4
  005ab7c  cmpw 28, 3
  005ab80  clrldi 27, 26, 32
  005ab84  stfs 1, 0(4)
  005ab88  stfs 2, 4(4)
  005ab8c  stfs 3, 8(4)
  005ab90  lfs 1, 224(1)
  005ab94  lfs 2, 228(1)
  005ab98  fsubs 1, 1, 4
  005ab9c  lfs 3, 232(1)
  005aba0  fsubs 2, 2, 5
  005aba4  fsubs 3, 3, 6
  005aba8  stfs 1, 0(5)
  005abac  stfs 2, 4(5)
  005abb0  stfs 3, 8(5)
  005abb4  lfs 7, 236(1)
  005abb8  lfs 8, 240(1)
  005abbc  fsubs 4, 7, 4
  005abc0  lfs 7, 244(1)
  005abc4  fsubs 5, 8, 5
  005abc8  fsubs 6, 7, 6
  005abcc  stfs 4, 0(6)
  005abd0  stfs 5, 4(6)
  005abd4  stfs 6, 8(6)
  005abd8  bf 1, 0x5ac90
  005abdc  ori 10, 27, 0
  005abe0  ori 11, 1, 0
  005abe4  lfs 9, 0(10)
  005abe8  lfs 7, 4(10)
  005abec  ori 4, 14, 0
  005abf0  fcmpu 0, 4, 9
  005abf4  lfs 8, 8(10)
  005abf8  fcmpu 1, 5, 7
  005abfc  fcmpu 6, 6, 8
  005ac00  fcmpu 7, 1, 9
  005ac04  cror 2, 1, 2
  005ac08  bt 2, 0x5ac10
  005ac0c  li 4, 1
  005ac10  ori 5, 14, 0
  005ac14  bf 4, 0x5ac1c
  005ac18  li 5, 1
  005ac1c  ori 6, 14, 0
  005ac20  bf 24, 0x5ac28
  005ac24  li 6, 1
  005ac28  ori 7, 14, 0
  005ac2c  bf 29, 0x5ac34
  005ac30  li 7, 1
  005ac34  fcmpu 0, 2, 7
  005ac38  ori 8, 14, 0
  005ac3c  cror 6, 0, 2
  005ac40  bt 6, 0x5ac48
  005ac44  li 8, 1
  005ac48  fcmpu 0, 3, 8
  005ac4c  ori 9, 14, 0
  005ac50  cror 6, 0, 2
  005ac54  bt 6, 0x5ac5c
  005ac58  li 9, 1
  005ac5c  slwi 8, 8, 8
  005ac60  rlwimi 7, 4, 1, 30, 30
  005ac64  rlwimi 8, 5, 9, 22, 22
  005ac68  slwi 4, 9, 16
  005ac6c  or 5, 7, 8
  005ac70  rlwimi 4, 6, 17, 14, 14
  005ac74  addic 3, 3, 1
  005ac78  or 4, 5, 4
  005ac7c  cmpw 3, 28
  005ac80  addic 10, 10, 12
  005ac84  stw 4, 748(11)
  005ac88  addic 11, 11, 4
  005ac8c  bt 0, 0x5abe4
  005ac90  addc 3, 28, 28
  005ac94  lhz 25, 0(24)
  005ac98  ori 23, 14, 0
  005ac9c  addc 3, 28, 3
  005aca0  extsh 25, 25
  005aca4  sldi 3, 3, 2
  005aca8  cmpw 25, 23
  005acac  addc 26, 26, 3
  005acb0  clrldi 26, 26, 32
  005acb4  bf 1, 0x5ad2c
  005acb8  ori 22, 26, 0
  005acbc  lis 3, 161
  005acc0  lfs 1, 320(1)
  005acc4  addic 5, 1, 748
  005acc8  lfs 2, 328(1)
  005accc  addic 6, 1, 676
  005acd0  stfs 1, 88(1)
  005acd4  clrldi 10, 18, 32
  005acd8  stfs 2, 96(1)
  005acdc  ori 4, 27, 0
  005ace0  lfs 1, 324(1)
  005ace4  ori 7, 28, 0
  005ace8  lwz 8, 2368(3)
  005acec  stfs 1, 92(1)
  005acf0  lfs 1, 332(1)
  005acf4  ori 3, 22, 0
  005acf8  lfs 2, 336(1)
  005acfc  stfs 1, 112(1)
  005ad00  lfs 1, 340(1)
  005ad04  stfs 2, 116(1)
  005ad08  stfs 1, 120(1)
  005ad0c  std 8, 128(1)
  005ad10  ld 8, 88(1)
  005ad14  ld 9, 96(1)
  005ad18  bl 0x59800
  005ad1c  addic 23, 23, 1
  005ad20  addic 22, 22, 4
  005ad24  cmpw 23, 25
  005ad28  bt 0, 0x5acbc
  005ad2c  lbz 24, 3(24)
  005ad30  cmpwi 24, 0
  005ad34  bt 2, 0x5ade0
  005ad38  sldi 3, 25, 2
  005ad3c  ori 23, 14, 0
  005ad40  addc 25, 26, 3
  005ad44  cmpw 24, 23
  005ad48  clrldi 25, 25, 32
  005ad4c  bf 1, 0x5ade0
  005ad50  slwi 3, 23, 2
  005ad54  lfs 1, 320(1)
  005ad58  lis 4, 161
  005ad5c  extsw 3, 3
  005ad60  lfs 2, 328(1)
  005ad64  stfs 1, 88(1)
  005ad68  addic 6, 1, 676
  005ad6c  stfs 2, 96(1)
  005ad70  clrldi 10, 18, 32
  005ad74  lwzx 5, 26, 3
  005ad78  addic 3, 1, 9968
  005ad7c  stw 5, 9968(1)
  005ad80  lbz 7, 9970(1)
  005ad84  lfs 1, 324(1)
  005ad88  addic 5, 1, 748
  005ad8c  stb 7, 9969(1)
  005ad90  lbzx 7, 25, 23
  005ad94  lwz 8, 2368(4)
  005ad98  stb 7, 9970(1)
  005ad9c  stfs 1, 92(1)
  005ada0  ori 4, 27, 0
  005ada4  lfs 1, 332(1)
  005ada8  ori 7, 28, 0
  005adac  lfs 2, 336(1)
  005adb0  stfs 1, 112(1)
  005adb4  lfs 1, 340(1)
  005adb8  stfs 2, 116(1)
  005adbc  stfs 1, 120(1)
  005adc0  std 8, 128(1)
  005adc4  ld 8, 88(1)
  005adc8  ld 9, 96(1)
  005adcc  bl 0x59800
  005add0  addic 23, 23, 1
  005add4  extsw 23, 23
  005add8  cmpw 23, 24
  005addc  bt 0, 0x5ad50
  005ade0  addic 29, 29, 16
  005ade4  b 0x5ab14
  005ade8  srawi 3, 30, 2
  005adec  ld 4, 10040(1)
  005adf0  srawi 5, 31, 2
  005adf4  ld 6, 10088(1)
  005adf8  addic 3, 3, 1
  005adfc  stw 14, 680(1)
  005ae00  srawi 4, 4, 2
  005ae04  srawi 6, 6, 2
  005ae08  std 5, 10072(1)
  005ae0c  cmpw 5, 3
  005ae10  std 3, 10096(1)
  005ae14  std 4, 10040(1)
  005ae18  std 6, 10088(1)
  005ae1c  bf 0, 0x5b9a0
  005ae20  ld 3, 10040(1)
  005ae24  ld 4, 10088(1)
  005ae28  addic 3, 3, 1
  005ae2c  std 4, 10056(1)
  005ae30  cmpw 4, 3
  005ae34  std 3, 10080(1)
  005ae38  bf 0, 0x5b988
  005ae3c  ld 3, 10056(1)
  005ae40  sldi 3, 3, 2
  005ae44  std 3, 10064(1)
  005ae48  ld 4, 10072(1)
  005ae4c  lis 3, 164
  005ae50  ld 5, 10064(1)
  005ae54  ori 17, 14, 0
  005ae58  slwi 4, 4, 8
  005ae5c  addic 3, 3, -28384
  005ae60  addc 4, 5, 4
  005ae64  addc 4, 4, 3
  005ae68  addic 3, 3, 16384
  005ae6c  clrldi 4, 4, 32
  005ae70  lhz 5, 0(4)
  005ae74  std 4, 10024(1)
  005ae78  extsh 5, 5
  005ae7c  lbz 4, 2(4)
  005ae80  sldi 5, 5, 5
  005ae84  cmpw 4, 17
  005ae88  addc 3, 3, 5
  005ae8c  clrldi 3, 3, 32
  005ae90  std 3, 10032(1)
  005ae94  bf 1, 0x5b964
  005ae98  ori 16, 14, 0
  005ae9c  lfs 31, 10012(1)
  005aea0  lis 3, 164
  005aea4  ld 4, 10032(1)
  005aea8  lwz 3, -28512(3)
  005aeac  ld 5, 10048(1)
  005aeb0  lhzx 4, 4, 16
  005aeb4  extsh 4, 4
  005aeb8  sldi 4, 4, 8
  005aebc  addc 24, 3, 4
  005aec0  clrldi 24, 24, 32
  005aec4  cmpw 24, 5
  005aec8  bt 2, 0x5b94c
  005aecc  lwz 3, 148(24)
  005aed0  cmpwi 3, 0
  005aed4  bt 2, 0x5b94c
  005aed8  lwz 4, 156(24)
  005aedc  lwz 21, 16(15)
  005aee0  cmpw 4, 21
  005aee4  bt 2, 0x5b94c
  005aee8  lfs 1, 0(24)
  005aeec  addic 4, 1, 368
  005aef0  lfs 2, 4(24)
  005aef4  lfs 3, 212(1)
  005aef8  lfs 4, 216(1)
  005aefc  fsubs 1, 1, 3
  005af00  fsubs 2, 2, 4
  005af04  lfs 3, 8(24)
  005af08  lfs 4, 220(1)
  005af0c  lfs 5, 12(24)
  005af10  fsubs 3, 3, 4
  005af14  fadds 4, 31, 5
  005af18  fmuls 5, 1, 1
  005af1c  fmuls 6, 2, 2
  005af20  stfs 1, 0(4)
  005af24  fmuls 7, 3, 3
  005af28  fmuls 4, 4, 4
  005af2c  stfs 2, 4(4)
  005af30  stfs 3, 8(4)
  005af34  fadds 1, 5, 6
  005af38  fadds 1, 1, 7
  005af3c  fcmpu 0, 1, 4
  005af40  bt 1, 0x5b94c
  005af44  lwz 4, 4(3)
  005af48  rlwinm 19, 18, 0, 29, 29
  005af4c  srawi 20, 4, 5
  005af50  cmpwi 19, 0
  005af54  addze 20, 20
  005af58  bt 2, 0x5af68
  005af5c  lhz 3, 0(3)
  005af60  extsh 3, 3
  005af64  b 0x5af70
  005af68  lhz 3, 2(3)
  005af6c  extsh 3, 3
  005af70  lwz 4, 148(24)
  005af74  cmpwi 3, 0
  005af78  stw 21, 156(24)
  005af7c  ori 22, 14, 0
  005af80  lwz 21, 12(4)
  005af84  extsw 21, 21
  005af88  bt 2, 0x5b058
  005af8c  rlwinm 5, 18, 0, 30, 30
  005af90  ori 4, 14, 0
  005af94  cmpwi 5, 1
  005af98  bf 0, 0x5afa0
  005af9c  li 4, 1
  005afa0  cmpw 21, 4
  005afa4  bt 2, 0x5b94c
  005afa8  lis 22, 161
  005afac  lis 5, 161
  005afb0  ori 4, 14, 0
  005afb4  addic 22, 22, 2560
  005afb8  addic 5, 5, 2496
  005afbc  slwi 6, 4, 3
  005afc0  extsw 7, 6
  005afc4  lwz 6, 168(24)
  005afc8  lwzx 7, 5, 7
  005afcc  cmpw 7, 6
  005afd0  bf 2, 0x5afec
  005afd4  sldi 3, 4, 2
  005afd8  subfic 4, 3, 0
  005afdc  sldi 3, 3, 9
  005afe0  addc 3, 4, 3
  005afe4  addc 22, 22, 3
  005afe8  b 0x5b058
  005afec  addic 4, 4, 1
  005aff0  cmpwi 4, 8
  005aff4  bt 0, 0x5afbc
  005aff8  ori 4, 3, 0
  005affc  lwz 3, 12(15)
  005b000  slwi 7, 3, 3
  005b004  addic 8, 3, 1
  005b008  addc 5, 5, 7
  005b00c  sldi 3, 3, 2
  005b010  srawi 7, 8, 3
  005b014  clrldi 9, 5, 32
  005b018  sldi 5, 3, 9
  005b01c  addze 7, 7
  005b020  subfic 3, 3, 0
  005b024  sldi 7, 7, 3
  005b028  addc 3, 3, 5
  005b02c  subc 5, 8, 7
  005b030  addc 22, 22, 3
  005b034  ori 3, 24, 0
  005b038  clrldi 22, 22, 32
  005b03c  stw 5, 12(15)
  005b040  stw 6, 0(9)
  005b044  ori 5, 22, 0
  005b048  lwz 6, 16(15)
  005b04c  stw 6, 4(9)
  005b050  bl 0xf595c
  005b054  nop
  005b058  lfs 1, 16(24)
  005b05c  lfs 2, 20(24)
  005b060  addic 3, 1, 380
  005b064  lfs 3, 24(24)
  005b068  fmuls 1, 1, 14
  005b06c  fmuls 2, 2, 14
  005b070  lfs 15, 192(24)
  005b074  fmuls 3, 3, 14
  005b078  lfs 16, 196(24)
  005b07c  lfs 17, 200(24)
  005b080  cmpwi 21, 0
  005b084  lfs 18, 208(24)
  005b088  lfs 19, 212(24)
  005b08c  lfs 20, 216(24)
  005b090  lfs 21, 224(24)
  005b094  lfs 22, 228(24)
  005b098  lfs 23, 232(24)
  005b09c  stfs 1, 0(3)
  005b0a0  stfs 2, 4(3)
  005b0a4  stfs 3, 8(3)
  005b0a8  bt 2, 0x5b318
  005b0ac  lfs 4, 212(1)
  005b0b0  addic 3, 1, 392
  005b0b4  lfs 5, 216(1)
  005b0b8  addic 6, 1, 404
  005b0bc  fsubs 4, 4, 1
  005b0c0  addic 5, 1, 416
  005b0c4  lfs 1, 220(1)
  005b0c8  fsubs 2, 5, 2
  005b0cc  addic 23, 1, 2796
  005b0d0  fsubs 3, 1, 3
  005b0d4  lfs 1, 10008(1)
  005b0d8  li 4, 256
  005b0dc  fsubs 5, 4, 31
  005b0e0  fsubs 6, 2, 31
  005b0e4  stfs 4, 0(3)
  005b0e8  fsubs 7, 3, 31
  005b0ec  fadds 4, 4, 31
  005b0f0  stfs 2, 4(3)
  005b0f4  fadds 2, 2, 31
  005b0f8  stfs 3, 8(3)
  005b0fc  fadds 3, 3, 31
  005b100  ori 3, 23, 0
  005b104  stfs 5, 0(6)
  005b108  stfs 6, 4(6)
  005b10c  stfs 7, 8(6)
  005b110  stfs 4, 0(5)
  005b114  stfs 2, 4(5)
  005b118  stfs 3, 8(5)
  005b11c  addic 4, 4, -1
  005b120  stfs 1, 0(3)
  005b124  stfs 1, 4(3)
  005b128  cmpwi 4, 0
  005b12c  stfs 1, 8(3)
  005b130  addic 3, 3, 12
  005b134  bf 2, 0x5b11c
  005b138  lfs 1, 44(24)
  005b13c  addic 3, 1, 572
  005b140  fmuls 2, 15, 1
  005b144  fmuls 3, 16, 1
  005b148  addic 4, 1, 584
  005b14c  fmuls 4, 17, 1
  005b150  addic 5, 1, 596
  005b154  fmuls 5, 18, 1
  005b158  addic 6, 1, 640
  005b15c  fmuls 6, 19, 1
  005b160  fmuls 7, 20, 1
  005b164  fmuls 8, 21, 1
  005b168  addic 7, 6, 24
  005b16c  fmuls 9, 22, 1
  005b170  fmuls 1, 23, 1
  005b174  addic 10, 1, 1772
  005b178  addic 11, 1, 168
  005b17c  stfs 2, 0(3)
  005b180  stfs 3, 4(3)
  005b184  stfs 4, 8(3)
  005b188  stfs 5, 0(4)
  005b18c  stfs 6, 4(4)
  005b190  addic 3, 6, 12
  005b194  stfs 7, 8(4)
  005b198  stfs 8, 0(5)
  005b19c  stfs 9, 4(5)
  005b1a0  stfs 1, 8(5)
  005b1a4  stfs 2, 0(6)
  005b1a8  stfs 3, 4(6)
  005b1ac  stfs 4, 8(6)
  005b1b0  stfs 5, 0(3)
  005b1b4  stfs 6, 4(3)
  005b1b8  stfs 7, 8(3)
  005b1bc  stfs 8, 0(7)
  005b1c0  stfs 9, 4(7)
  005b1c4  stfs 1, 8(7)
  005b1c8  lfs 1, 404(1)
  005b1cc  lfs 2, 412(1)
  005b1d0  stfs 1, 56(1)
  005b1d4  stfs 2, 64(1)
  005b1d8  lfs 1, 416(1)
  005b1dc  lfs 2, 424(1)
  005b1e0  stfs 1, 72(1)
  005b1e4  stfs 2, 80(1)
  005b1e8  addic 12, 1, 172
  005b1ec  lwz 3, 640(1)
  005b1f0  lwz 4, 648(1)
  005b1f4  stw 3, 88(1)
  005b1f8  lwz 3, 656(1)
  005b1fc  stw 4, 96(1)
  005b200  stw 3, 104(1)
  005b204  lfs 1, 408(1)
  005b208  lfs 2, 420(1)
  005b20c  stfs 1, 60(1)
  005b210  stfs 2, 76(1)
  005b214  lwz 3, 644(1)
  005b218  lwz 4, 652(1)
  005b21c  stw 3, 92(1)
  005b220  lwz 5, 660(1)
  005b224  ld 6, 56(1)
  005b228  ori 3, 24, 0
  005b22c  ld 7, 64(1)
  005b230  stw 4, 100(1)
  005b234  ld 8, 72(1)
  005b238  ori 4, 6, 0
  005b23c  ld 9, 80(1)
  005b240  lwz 31, 664(1)
  005b244  lwz 30, 668(1)
  005b248  ori 6, 8, 0
  005b24c  stw 5, 108(1)
  005b250  lwz 29, 672(1)
  005b254  stw 31, 112(1)
  005b258  ori 5, 7, 0
  005b25c  stw 30, 116(1)
  005b260  ori 7, 9, 0
  005b264  ld 8, 88(1)
  005b268  ld 31, 96(1)
  005b26c  stw 29, 120(1)
  005b270  ld 30, 104(1)
  005b274  std 23, 128(1)
  005b278  ori 9, 31, 0
  005b27c  std 10, 136(1)
  005b280  std 11, 144(1)
  005b284  std 12, 152(1)
  005b288  ori 10, 30, 0
  005b28c  bl 0x564d0
  005b290  ori 25, 14, 0
  005b294  lwz 3, 172(1)
  005b298  cmpw 3, 25
  005b29c  bf 1, 0x5b318
  005b2a0  ori 26, 14, 0
  005b2a4  lfs 1, 380(1)
  005b2a8  lfs 2, 388(1)
  005b2ac  addic 6, 1, 676
  005b2b0  stfs 1, 88(1)
  005b2b4  clrldi 10, 18, 32
  005b2b8  stfs 2, 96(1)
  005b2bc  addic 5, 1, 1772
  005b2c0  lwz 3, 168(1)
  005b2c4  ori 4, 23, 0
  005b2c8  lfs 1, 384(1)
  005b2cc  ori 7, 21, 0
  005b2d0  addc 3, 3, 26
  005b2d4  stfs 1, 92(1)
  005b2d8  lfs 1, 392(1)
  005b2dc  clrldi 3, 3, 32
  005b2e0  lfs 2, 396(1)
  005b2e4  stfs 1, 112(1)
  005b2e8  lfs 1, 400(1)
  005b2ec  stfs 2, 116(1)
  005b2f0  stfs 1, 120(1)
  005b2f4  std 24, 128(1)
  005b2f8  ld 8, 88(1)
  005b2fc  ld 9, 96(1)
  005b300  bl 0x59800
  005b304  lwz 3, 172(1)
  005b308  addic 25, 25, 1
  005b30c  addic 26, 26, 4
  005b310  cmpw 25, 3
  005b314  bt 0, 0x5b2a4
  005b318  rlwinm 3, 18, 0, 30, 30
  005b31c  cmpwi 3, 0
  005b320  bf 2, 0x5b94c
  005b324  lwz 30, 148(24)
  005b328  cmpwi 19, 1
  005b32c  ori 27, 14, 0
  005b330  addic 30, 30, 16
  005b334  bf 0, 0x5b33c
  005b338  li 27, 1
  005b33c  ori 29, 14, 0
  005b340  lwz 28, 152(24)
  005b344  addic 27, 27, 1
  005b348  cmpw 20, 29
  005b34c  bf 1, 0x5b94c
  005b350  clrlwi 3, 28, 31
  005b354  srawi 28, 28, 1
  005b358  cmpwi 3, 0
  005b35c  lbz 3, 0(30)
  005b360  lhz 4, 2(30)
  005b364  cmpwi 1, 3, 1
  005b368  cmpwi 7, 3, 2
  005b36c  extsh 4, 4
  005b370  cmpwi 6, 3, 0
  005b374  bf 2, 0x5b93c
  005b378  and 4, 4, 27
  005b37c  cmpwi 4, 0
  005b380  bt 2, 0x5b93c
  005b384  bt 5, 0x5b390
  005b388  bf 25, 0x5b6f4
  005b38c  b 0x5b3a0
  005b390  bf 29, 0x5b49c
  005b394  cmpwi 3, 3
  005b398  bf 1, 0x5b5c0
  005b39c  b 0x5b6f4
  005b3a0  addic 3, 30, 16
  005b3a4  addic 4, 1, 608
  005b3a8  addic 5, 1, 428
  005b3ac  lfs 1, 0(3)
  005b3b0  lfs 2, 4(3)
  005b3b4  lfs 3, 8(3)
  005b3b8  lfs 4, 12(3)
  005b3bc  stfs 1, 0(4)
  005b3c0  stfs 2, 4(4)
  005b3c4  stfs 3, 8(4)
  005b3c8  stfs 4, 12(4)
  005b3cc  stfs 1, 0(5)
  005b3d0  stfs 2, 4(5)
  005b3d4  stfs 3, 8(5)
  005b3d8  lfs 5, 44(24)
  005b3dc  fmuls 1, 1, 5
  005b3e0  fmuls 2, 2, 5
  005b3e4  fmuls 3, 3, 5
  005b3e8  addic 3, 1, 440
  005b3ec  addic 9, 1, 676
  005b3f0  ori 10, 30, 0
  005b3f4  fmuls 6, 15, 1
  005b3f8  fmuls 7, 18, 2
  005b3fc  fmuls 8, 16, 1
  005b400  fmuls 9, 19, 2
  005b404  fmuls 1, 17, 1
  005b408  fmuls 2, 20, 2
  005b40c  fmuls 10, 21, 3
  005b410  fmuls 11, 22, 3
  005b414  fmuls 3, 23, 3
  005b418  fadds 6, 6, 7
  005b41c  fadds 7, 8, 9
  005b420  fadds 1, 1, 2
  005b424  fmuls 2, 4, 5
  005b428  fadds 6, 6, 10
  005b42c  fadds 7, 7, 11
  005b430  fadds 1, 1, 3
  005b434  stfs 6, 0(3)
  005b438  stfs 7, 4(3)
  005b43c  stfs 1, 8(3)
  005b440  lfs 3, 380(1)
  005b444  lfs 4, 388(1)
  005b448  fadds 3, 6, 3
  005b44c  fadds 1, 1, 4
  005b450  lfs 4, 212(1)
  005b454  lfs 5, 220(1)
  005b458  stfs 4, 48(1)
  005b45c  lfs 4, 384(1)
  005b460  stfs 5, 56(1)
  005b464  fadds 4, 7, 4
  005b468  lfs 5, 216(1)
  005b46c  stfs 5, 52(1)
  005b470  stfs 3, 64(1)
  005b474  stfs 1, 72(1)
  005b478  std 24, 112(1)
  005b47c  fmr 1, 31
  005b480  stfs 4, 68(1)
  005b484  ld 3, 48(1)
  005b488  ld 4, 56(1)
  005b48c  ld 5, 64(1)
  005b490  ld 6, 72(1)
  005b494  bl 0x59658
  005b498  b 0x5b938
  005b49c  addic 3, 30, 4
  005b4a0  addic 4, 30, 12
  005b4a4  addic 6, 30, 16
  005b4a8  addic 5, 1, 452
  005b4ac  lwz 3, 0(3)
  005b4b0  lfs 2, 0(4)
  005b4b4  slwi 3, 3, 4
  005b4b8  lfs 1, 0(6)
  005b4bc  addc 3, 22, 3
  005b4c0  lfs 3, 4(6)
  005b4c4  clrldi 3, 3, 32
  005b4c8  lfs 4, 8(6)
  005b4cc  stfs 1, 0(5)
  005b4d0  stfs 3, 4(5)
  005b4d4  stfs 4, 8(5)
  005b4d8  lfs 5, 0(3)
  005b4dc  lfs 6, 4(3)
  005b4e0  fmuls 5, 5, 14
  005b4e4  lfs 7, 8(3)
  005b4e8  fmuls 6, 6, 14
  005b4ec  lfs 8, 44(24)
  005b4f0  fmuls 7, 7, 14
  005b4f4  addic 3, 1, 464
  005b4f8  fmuls 2, 2, 8
  005b4fc  addic 9, 1, 676
  005b500  ori 10, 30, 0
  005b504  fadds 1, 5, 1
  005b508  fadds 3, 6, 3
  005b50c  fadds 4, 7, 4
  005b510  fmuls 1, 1, 8
  005b514  fmuls 3, 3, 8
  005b518  fmuls 4, 4, 8
  005b51c  fmuls 5, 15, 1
  005b520  fmuls 6, 18, 3
  005b524  fmuls 7, 16, 1
  005b528  fmuls 9, 19, 3
  005b52c  fmuls 1, 17, 1
  005b530  fmuls 3, 20, 3
  005b534  fmuls 10, 21, 4
  005b538  fmuls 11, 22, 4
  005b53c  fmuls 4, 23, 4
  005b540  fadds 5, 5, 6
  005b544  fadds 6, 7, 9
  005b548  fadds 1, 1, 3
  005b54c  fadds 3, 5, 10
  005b550  fadds 5, 6, 11
  005b554  fadds 1, 1, 4
  005b558  stfs 3, 0(3)
  005b55c  stfs 5, 4(3)
  005b560  stfs 1, 8(3)
  005b564  lfs 4, 380(1)
  005b568  lfs 6, 388(1)
  005b56c  fadds 3, 3, 4
  005b570  fadds 1, 1, 6
  005b574  lfs 4, 212(1)
  005b578  lfs 6, 220(1)
  005b57c  stfs 4, 48(1)
  005b580  lfs 4, 384(1)
  005b584  stfs 6, 56(1)
  005b588  fadds 4, 5, 4
  005b58c  lfs 5, 216(1)
  005b590  stfs 5, 52(1)
  005b594  stfs 3, 64(1)
  005b598  stfs 1, 72(1)
  005b59c  std 24, 112(1)
  005b5a0  fmr 1, 31
  005b5a4  stfs 4, 68(1)
  005b5a8  ld 3, 48(1)
  005b5ac  ld 4, 56(1)
  005b5b0  ld 5, 64(1)
  005b5b4  ld 6, 72(1)
  005b5b8  bl 0x59658
  005b5bc  b 0x5b938
  005b5c0  addic 3, 30, 4
  005b5c4  addic 4, 30, 16
  005b5c8  addic 6, 1, 624
  005b5cc  addic 5, 1, 476
  005b5d0  lfs 1, 0(3)
  005b5d4  lfs 2, 0(4)
  005b5d8  lfs 3, 4(4)
  005b5dc  lfs 4, 8(4)
  005b5e0  lfs 5, 12(4)
  005b5e4  stfs 2, 0(6)
  005b5e8  stfs 3, 4(6)
  005b5ec  stfs 4, 8(6)
  005b5f0  stfs 5, 12(6)
  005b5f4  stfs 2, 0(5)
  005b5f8  stfs 3, 4(5)
  005b5fc  stfs 4, 8(5)
  005b600  lfs 6, 44(24)
  005b604  fmuls 2, 2, 6
  005b608  fmuls 3, 3, 6
  005b60c  fmuls 4, 4, 6
  005b610  addic 3, 1, 488
  005b614  fmuls 1, 1, 6
  005b618  fmuls 7, 15, 2
  005b61c  fmuls 8, 18, 3
  005b620  fmuls 9, 16, 2
  005b624  fmuls 10, 19, 3
  005b628  fmuls 2, 17, 2
  005b62c  fmuls 3, 20, 3
  005b630  fmuls 11, 21, 4
  005b634  fmuls 12, 22, 4
  005b638  fmuls 4, 23, 4
  005b63c  fadds 7, 7, 8
  005b640  fadds 8, 9, 10
  005b644  fadds 2, 2, 3
  005b648  fadds 3, 7, 11
  005b64c  fadds 7, 8, 12
  005b650  fadds 4, 2, 4
  005b654  fmuls 2, 5, 6
  005b658  stfs 3, 0(3)
  005b65c  stfs 7, 4(3)
  005b660  stfs 4, 8(3)
  005b664  lfs 5, 388(1)
  005b668  lfs 6, 220(1)
  005b66c  fadds 5, 4, 5
  005b670  lfs 4, 380(1)
  005b674  lfs 8, 384(1)
  005b678  fadds 3, 3, 4
  005b67c  fadds 4, 7, 8
  005b680  fcmpu 0, 6, 5
  005b684  cror 6, 0, 2
  005b688  bt 6, 0x5b690
  005b68c  b 0x5b694
  005b690  fmr 6, 5
  005b694  fadds 1, 5, 1
  005b698  fcmpu 0, 1, 6
  005b69c  cror 6, 1, 2
  005b6a0  bt 6, 0x5b6a8
  005b6a4  fmr 6, 1
  005b6a8  lfs 1, 212(1)
  005b6ac  lfs 5, 220(1)
  005b6b0  addic 9, 1, 676
  005b6b4  stfs 1, 48(1)
  005b6b8  ori 10, 30, 0
  005b6bc  stfs 5, 56(1)
  005b6c0  stfs 3, 64(1)
  005b6c4  stfs 6, 72(1)
  005b6c8  lfs 1, 216(1)
  005b6cc  stfs 4, 68(1)
  005b6d0  stfs 1, 52(1)
  005b6d4  std 24, 112(1)
  005b6d8  fmr 1, 31
  005b6dc  ld 3, 48(1)
  005b6e0  ld 4, 56(1)
  005b6e4  ld 5, 64(1)
  005b6e8  ld 6, 72(1)
  005b6ec  bl 0x59658
  005b6f0  b 0x5b938
  005b6f4  lhz 3, 4(30)
  005b6f8  lhz 4, 6(30)
  005b6fc  extsh 3, 3
  005b700  extsh 4, 4
  005b704  lfs 24, 44(24)
  005b708  sldi 3, 3, 4
  005b70c  sldi 4, 4, 4
  005b710  addc 3, 22, 3
  005b714  addc 4, 22, 4
  005b718  clrldi 3, 3, 32
  005b71c  clrldi 4, 4, 32
  005b720  lfs 1, 0(3)
  005b724  lfs 2, 4(3)
  005b728  fmuls 1, 1, 14
  005b72c  lfs 3, 0(4)
  005b730  fmuls 2, 2, 14
  005b734  lfs 4, 4(4)
  005b738  lfs 5, 8(3)
  005b73c  fmuls 3, 3, 14
  005b740  fmuls 4, 4, 14
  005b744  lfs 6, 8(4)
  005b748  fmuls 5, 5, 14
  005b74c  addic 3, 30, 12
  005b750  fmuls 6, 6, 14
  005b754  addic 4, 1, 548
  005b758  fmuls 1, 1, 24
  005b75c  fmuls 2, 2, 24
  005b760  fmuls 3, 3, 24
  005b764  fmuls 4, 4, 24
  005b768  fmuls 5, 5, 24
  005b76c  fmuls 6, 6, 24
  005b770  fmuls 7, 15, 1
  005b774  fmuls 8, 18, 2
  005b778  fmuls 9, 16, 1
  005b77c  fmuls 10, 19, 2
  005b780  fmuls 1, 17, 1
  005b784  fmuls 2, 20, 2
  005b788  fmuls 12, 15, 3
  005b78c  fmuls 13, 18, 4
  005b790  fmuls 11, 21, 5
  005b794  fmuls 0, 22, 5
  005b798  fmuls 31, 16, 3
  005b79c  fadds 7, 7, 8
  005b7a0  fmuls 8, 19, 4
  005b7a4  fmuls 5, 23, 5
  005b7a8  fadds 9, 9, 10
  005b7ac  fadds 1, 1, 2
  005b7b0  fmuls 2, 17, 3
  005b7b4  lfs 10, 0(3)
  005b7b8  fmuls 3, 20, 4
  005b7bc  addic 3, 1, 536
  005b7c0  fadds 4, 12, 13
  005b7c4  fmuls 12, 21, 6
  005b7c8  fmuls 13, 22, 6
  005b7cc  fadds 25, 7, 11
  005b7d0  fadds 7, 31, 8
  005b7d4  fmuls 6, 23, 6
  005b7d8  fadds 26, 9, 0
  005b7dc  fadds 27, 1, 5
  005b7e0  fadds 1, 2, 3
  005b7e4  fadds 2, 4, 12
  005b7e8  fadds 3, 7, 13
  005b7ec  stfs 25, 0(3)
  005b7f0  stfs 26, 4(3)
  005b7f4  fadds 1, 1, 6
  005b7f8  stfs 27, 8(3)
  005b7fc  addic 3, 1, 500
  005b800  stfs 2, 0(4)
  005b804  stfs 3, 4(4)
  005b808  stfs 1, 8(4)
  005b80c  lfs 4, 380(1)
  005b810  lfs 5, 384(1)
  005b814  lfs 6, 388(1)
  005b818  fadds 25, 25, 4
  005b81c  fadds 31, 2, 4
  005b820  fadds 26, 26, 5
  005b824  fadds 0, 3, 5
  005b828  fadds 27, 27, 6
  005b82c  fadds 13, 1, 6
  005b830  fmuls 24, 10, 24
  005b834  fsubs 31, 31, 25
  005b838  fsubs 0, 0, 26
  005b83c  fsubs 13, 13, 27
  005b840  fmuls 1, 31, 31
  005b844  stfs 31, 0(3)
  005b848  fmuls 5, 0, 0
  005b84c  stfs 0, 4(3)
  005b850  fmuls 6, 13, 13
  005b854  stfs 13, 8(3)
  005b858  lfs 28, 212(1)
  005b85c  lfs 29, 216(1)
  005b860  fsubs 2, 28, 25
  005b864  lfs 30, 220(1)
  005b868  fsubs 3, 29, 26
  005b86c  fsubs 4, 30, 27
  005b870  fadds 1, 1, 5
  005b874  addic 3, 1, 512
  005b878  fmuls 7, 2, 31
  005b87c  fmuls 8, 3, 0
  005b880  fmuls 9, 4, 13
  005b884  fadds 1, 1, 6
  005b888  fadds 5, 7, 8
  005b88c  fadds 5, 5, 9
  005b890  fdivs 1, 5, 1
  005b894  lfs 5, 10008(1)
  005b898  stfs 2, 0(3)
  005b89c  stfs 3, 4(3)
  005b8a0  stfs 4, 8(3)
  005b8a4  fcmpu 0, 1, 5
  005b8a8  bt 1, 0x5b8b0
  005b8ac  lfs 1, 10008(1)
  005b8b0  lfs 2, 10016(1)
  005b8b4  fcmpu 0, 1, 2
  005b8b8  bt 0, 0x5b8c0
  005b8bc  fmr 1, 2
  005b8c0  fmuls 2, 31, 1
  005b8c4  addic 3, 1, 560
  005b8c8  fmuls 3, 13, 1
  005b8cc  stfs 28, 48(1)
  005b8d0  fmuls 1, 0, 1
  005b8d4  stfs 30, 56(1)
  005b8d8  addic 4, 1, 524
  005b8dc  addic 9, 1, 676
  005b8e0  ori 10, 30, 0
  005b8e4  fadds 4, 25, 2
  005b8e8  fadds 5, 27, 3
  005b8ec  fadds 6, 26, 1
  005b8f0  stfs 2, 0(3)
  005b8f4  stfs 1, 4(3)
  005b8f8  stfs 3, 8(3)
  005b8fc  fmr 2, 24
  005b900  stfs 4, 64(1)
  005b904  stfs 5, 72(1)
  005b908  stfs 4, 0(4)
  005b90c  stfs 6, 4(4)
  005b910  stfs 5, 8(4)
  005b914  stfs 29, 52(1)
  005b918  stfs 6, 68(1)
  005b91c  lfs 1, 10012(1)
  005b920  std 24, 112(1)
  005b924  ld 3, 48(1)
  005b928  ld 4, 56(1)
  005b92c  ld 5, 64(1)
  005b930  ld 6, 72(1)
  005b934  bl 0x59658
  005b938  lfs 31, 10012(1)
  005b93c  addic 29, 29, 1
  005b940  addic 30, 30, 32
  005b944  cmpw 29, 20
  005b948  bt 0, 0x5b350
  005b94c  ld 3, 10024(1)
  005b950  addic 17, 17, 1
  005b954  addic 16, 16, 2
  005b958  lbz 3, 2(3)
  005b95c  cmpw 17, 3
  005b960  bt 0, 0x5aea0
  005b964  ld 3, 10064(1)
  005b968  ld 4, 10056(1)
  005b96c  addic 3, 3, 4
  005b970  ld 5, 10080(1)
  005b974  addic 4, 4, 1
  005b978  cmpw 4, 5
  005b97c  std 3, 10064(1)
  005b980  std 4, 10056(1)
  005b984  bt 0, 0x5ae48
  005b988  ld 3, 10072(1)
  005b98c  ld 4, 10096(1)
  005b990  addic 3, 3, 1
  005b994  cmpw 3, 4
  005b998  std 3, 10072(1)
  005b99c  bt 0, 0x5ae20
  005b9a0  lwz 3, 676(1)
  005b9a4  cmpwi 3, 0
  005b9a8  bf 2, 0x5b9b4
  005b9ac  ori 3, 14, 0
  005b9b0  b 0x5bb60
  005b9b4  lis 4, 6
  005b9b8  lfs 1, 688(1)
  005b9bc  addi 4, 4, -25084
  005b9c0  lfs 9, 24(4)
  005b9c4  lfs 2, 692(1)
  005b9c8  lfs 7, 696(1)
  005b9cc  fmr 8, 9
  005b9d0  lfs 3, 712(1)
  005b9d4  lfs 5, 212(1)
  005b9d8  lfs 4, 716(1)
  005b9dc  fmuls 13, 7, 9
  005b9e0  fsubs 5, 5, 1
  005b9e4  lfs 10, 720(1)
  005b9e8  fmuls 1, 1, 9
  005b9ec  lfs 6, 216(1)
  005b9f0  lfs 11, 220(1)
  005b9f4  fmuls 31, 3, 9
  005b9f8  fsubs 6, 6, 2
  005b9fc  lfs 12, 724(1)
  005ba00  lfs 0, 728(1)
  005ba04  fmuls 29, 10, 9
  005ba08  lfs 3, 732(1)
  005ba0c  fsubs 7, 11, 7
  005ba10  fmuls 2, 2, 8
  005ba14  lfs 30, 736(1)
  005ba18  lfs 10, 740(1)
  005ba1c  fmuls 27, 4, 8
  005ba20  lfs 11, 744(1)
  005ba24  fmuls 12, 12, 9
  005ba28  fmuls 26, 10, 8
  005ba2c  fmuls 0, 0, 8
  005ba30  fmuls 28, 3, 9
  005ba34  fmuls 30, 30, 9
  005ba38  stfs 1, 688(1)
  005ba3c  fmuls 11, 11, 9
  005ba40  stfs 13, 696(1)
  005ba44  lfs 4, 684(1)
  005ba48  lfs 10, 10008(1)
  005ba4c  stfs 1, 32(15)
  005ba50  stfs 2, 692(1)
  005ba54  fcmpu 0, 4, 10
  005ba58  lfs 1, 700(1)
  005ba5c  stfs 2, 36(15)
  005ba60  stfs 13, 40(15)
  005ba64  lfs 2, 704(1)
  005ba68  stfs 1, 64(15)
  005ba6c  lfs 3, 708(1)
  005ba70  stfs 2, 68(15)
  005ba74  stfs 3, 72(15)
  005ba78  stfs 31, 80(15)
  005ba7c  stfs 27, 84(15)
  005ba80  stfs 29, 88(15)
  005ba84  stfs 12, 96(15)
  005ba88  stfs 0, 100(15)
  005ba8c  stfs 28, 104(15)
  005ba90  stfs 30, 112(15)
  005ba94  lwz 4, 680(1)
  005ba98  stfs 26, 116(15)
  005ba9c  stfs 11, 120(15)
  005baa0  stw 4, 24(15)
  005baa4  stw 3, 28(15)
  005baa8  bf 2, 0x5bafc
  005baac  fmuls 4, 1, 1
  005bab0  fmuls 5, 2, 2
  005bab4  fmuls 6, 3, 3
  005bab8  fadds 4, 4, 5
  005babc  fadds 4, 4, 6
  005bac0  fsqrts 4, 4
  005bac4  fcmpu 0, 4, 10
  005bac8  bt 2, 0x5badc
  005bacc  fdivs 1, 1, 4
  005bad0  fdivs 2, 2, 4
  005bad4  fdivs 3, 3, 4
  005bad8  b 0x5badc
  005badc  lfd 4, 10000(1)
  005bae0  fmuls 1, 4, 1
  005bae4  fmuls 2, 4, 2
  005bae8  fmuls 3, 4, 3
  005baec  stfs 1, 248(1)
  005baf0  stfs 2, 252(1)
  005baf4  stfs 3, 256(1)
  005baf8  b 0x5bb2c
  005bafc  fsqrts 1, 4
  005bb00  lfs 2, 10012(1)
  005bb04  fdivs 1, 2, 1
  005bb08  fmuls 2, 5, 1
  005bb0c  fmuls 3, 6, 1
  005bb10  fmuls 1, 7, 1
  005bb14  fmuls 2, 2, 9
  005bb18  fmuls 3, 3, 8
  005bb1c  fmuls 1, 1, 9
  005bb20  stfs 2, 248(1)
  005bb24  stfs 3, 252(1)
  005bb28  stfs 1, 256(1)
  005bb2c  lfs 1, 688(1)
  005bb30  li 3, 1
  005bb34  lfs 2, 692(1)
  005bb38  lfs 3, 696(1)
  005bb3c  lfs 4, 248(1)
  005bb40  lfs 5, 252(1)
  005bb44  fadds 1, 4, 1
  005bb48  lfs 4, 256(1)
  005bb4c  fadds 2, 5, 2
  005bb50  fadds 3, 4, 3
  005bb54  stfs 1, 48(15)
  005bb58  stfs 2, 52(15)
  005bb5c  stfs 3, 56(15)
  005bb60  li 0, 10128
  005bb64  lvx 30, 1, 0
  005bb68  addic 0, 0, 16
  005bb6c  lvx 31, 1, 0
  005bb70  ld 0, 10464(1)
  005bb74  mtlr 0
  005bb78  lfd 14, 10304(1)
  005bb7c  lfd 15, 10312(1)
  005bb80  lfd 16, 10320(1)
  005bb84  lfd 17, 10328(1)
  005bb88  lfd 18, 10336(1)
  005bb8c  lfd 19, 10344(1)
  005bb90  lfd 20, 10352(1)
  005bb94  lfd 21, 10360(1)
  005bb98  lfd 22, 10368(1)
  005bb9c  lfd 23, 10376(1)
  005bba0  lfd 24, 10384(1)
  005bba4  lfd 25, 10392(1)
  005bba8  lfd 26, 10400(1)
  005bbac  lfd 27, 10408(1)
  005bbb0  lfd 28, 10416(1)
  005bbb4  lfd 29, 10424(1)
  005bbb8  lfd 30, 10432(1)
  005bbbc  lfd 31, 10440(1)
  005bbc0  ld 14, 10160(1)
  005bbc4  ld 15, 10168(1)
  005bbc8  ld 16, 10176(1)
  005bbcc  ld 17, 10184(1)
  005bbd0  ld 18, 10192(1)
  005bbd4  ld 19, 10200(1)
  005bbd8  ld 20, 10208(1)
  005bbdc  ld 21, 10216(1)
  005bbe0  ld 22, 10224(1)
  005bbe4  ld 23, 10232(1)
  005bbe8  ld 24, 10240(1)
  005bbec  ld 25, 10248(1)
  005bbf0  ld 26, 10256(1)
  005bbf4  ld 27, 10264(1)
  005bbf8  ld 28, 10272(1)
  005bbfc  ld 29, 10280(1)
  005bc00  ld 30, 10288(1)
  005bc04  ld 31, 10296(1)
  005bc08  addi 1, 1, 10448
  005bc0c  blr

CollPillVsSphere:   # 0x5bc20, 0x19c bytes
  005bc20  ori 7, 5, 0
  005bc24  fmr 7, 3
  005bc28  ori 8, 6, 0
  005bc2c  li 6, 0
  005bc30  ori 11, 3, 0
  005bc34  addc 3, 1, 6
  005bc38  rldicl 4, 4, 32, 32
  005bc3c  rldicl 8, 8, 32, 32
  005bc40  addic 5, 6, 72
  005bc44  addic 12, 6, 56
  005bc48  std 11, 48(3)
  005bc4c  stw 4, 56(3)
  005bc50  std 7, 64(3)
  005bc54  stw 8, 72(3)
  005bc58  lis 7, 6
  005bc5c  lfs 5, 72(1)
  005bc60  addic 4, 6, 64
  005bc64  lfs 3, 56(1)
  005bc68  addi 7, 7, -17392
  005bc6c  lwz 8, 116(3)
  005bc70  fsubs 5, 5, 3
  005bc74  lfs 6, 52(3)
  005bc78  lfs 4, 56(1)
  005bc7c  lfs 3, 48(3)
  005bc80  fcmpu 0, 7, 5
  005bc84  cror 6, 0, 2
  005bc88  bt 6, 0x5bc90
  005bc8c  fmr 7, 5
  005bc90  lfs 5, 0(7)
  005bc94  fcmpu 0, 7, 5
  005bc98  bt 1, 0x5bca0
  005bc9c  fmr 7, 5
  005bca0  fmr 8, 5
  005bca4  fmr 9, 4
  005bca8  lfsx 10, 1, 4
  005bcac  lfs 11, 68(3)
  005bcb0  fadds 1, 1, 2
  005bcb4  addic 6, 6, 68
  005bcb8  fadds 5, 8, 3
  005bcbc  fadds 4, 8, 6
  005bcc0  fadds 3, 7, 9
  005bcc4  lfsx 6, 1, 5
  005bcc8  fsubs 7, 10, 5
  005bccc  fsubs 8, 11, 4
  005bcd0  fmuls 10, 1, 1
  005bcd4  fsubs 9, 6, 3
  005bcd8  fmuls 1, 7, 7
  005bcdc  fmuls 7, 8, 8
  005bce0  fmuls 8, 9, 9
  005bce4  fadds 1, 1, 7
  005bce8  fadds 1, 1, 8
  005bcec  fcmpu 0, 1, 10
  005bcf0  bt 1, 0x5bdb8
  005bcf4  fsqrts 1, 1
  005bcf8  lfs 7, 4(7)
  005bcfc  fmuls 7, 1, 7
  005bd00  fcmpu 0, 2, 7
  005bd04  bt 0, 0x5bd0c
  005bd08  fmr 2, 7
  005bd0c  lfs 7, 8(7)
  005bd10  fmr 8, 5
  005bd14  fdivs 1, 7, 1
  005bd18  lfsx 10, 1, 4
  005bd1c  lfsx 11, 1, 6
  005bd20  lfsx 13, 1, 5
  005bd24  lfs 0, 8(9)
  005bd28  fmr 9, 4
  005bd2c  fmr 12, 3
  005bd30  fsubs 3, 8, 10
  005bd34  fsubs 4, 9, 11
  005bd38  fsubs 5, 12, 6
  005bd3c  fmuls 7, 3, 1
  005bd40  fmuls 3, 4, 1
  005bd44  fmuls 4, 5, 1
  005bd48  fmuls 7, 7, 2
  005bd4c  fmuls 5, 3, 2
  005bd50  fmuls 4, 4, 2
  005bd54  fadds 3, 10, 7
  005bd58  fadds 2, 11, 5
  005bd5c  fadds 6, 13, 4
  005bd60  fsubs 1, 3, 8
  005bd64  fsubs 8, 2, 9
  005bd68  fsubs 9, 6, 12
  005bd6c  fmuls 1, 1, 1
  005bd70  fmuls 8, 8, 8
  005bd74  fmuls 9, 9, 9
  005bd78  fadds 1, 1, 8
  005bd7c  fadds 1, 1, 9
  005bd80  fcmpu 0, 0, 1
  005bd84  bt 0, 0x5bdb8
  005bd88  addic 3, 9, 12
  005bd8c  stfs 1, 8(9)
  005bd90  neg 4, 10
  005bd94  addic 5, 9, 24
  005bd98  stw 8, 4(9)
  005bd9c  stfs 3, 0(3)
  005bda0  stfs 2, 4(3)
  005bda4  stfs 6, 8(3)
  005bda8  stw 4, 0(9)
  005bdac  stfs 7, 0(5)
  005bdb0  stfs 5, 4(5)
  005bdb4  stfs 4, 8(5)
  005bdb8  blr

CollMobyVertCache_Reset:   # 0x5bdbc, 0x2c bytes
  005bdbc  li 5, 0
  005bdc0  li 3, 8
  005bdc4  ori 4, 5, 0
  005bdc8  lis 6, 149
  005bdcc  addic 3, 3, -1
  005bdd0  addic 6, 6, 16576
  005bdd4  cmpwi 3, 0
  005bdd8  stwx 5, 6, 4
  005bddc  addic 4, 4, 3112
  005bde0  bf 2, 0x5bdc8
  005bde4  blr

CollPillVsTri:   # 0x5bdf8, 0x8f4 bytes
  005bdf8  stdu 1, -320(1)
  005bdfc  stfd 14, 176(1)
  005be00  stfd 15, 184(1)
  005be04  stfd 16, 192(1)
  005be08  stfd 17, 200(1)
  005be0c  stfd 18, 208(1)
  005be10  stfd 19, 216(1)
  005be14  stfd 20, 224(1)
  005be18  stfd 21, 232(1)
  005be1c  stfd 22, 240(1)
  005be20  stfd 23, 248(1)
  005be24  stfd 24, 256(1)
  005be28  stfd 25, 264(1)
  005be2c  stfd 26, 272(1)
  005be30  stfd 27, 280(1)
  005be34  stfd 28, 288(1)
  005be38  stfd 29, 296(1)
  005be3c  stfd 30, 304(1)
  005be40  stfd 31, 312(1)
  005be44  ori 7, 3, 0
  005be48  ori 11, 4, 0
  005be4c  ori 12, 5, 0
  005be50  std 31, 168(1)
  005be54  li 5, 320
  005be58  std 29, 152(1)
  005be5c  lbz 31, 0(7)
  005be60  ori 3, 9, 0
  005be64  std 30, 160(1)
  005be68  lbz 29, 1(7)
  005be6c  ori 30, 8, 0
  005be70  addc 8, 31, 31
  005be74  std 28, 144(1)
  005be78  addc 9, 1, 5
  005be7c  std 26, 128(1)
  005be80  lis 28, 6
  005be84  addc 26, 31, 8
  005be88  std 27, 136(1)
  005be8c  addi 8, 28, -16920
  005be90  rldicl 28, 3, 32, 32
  005be94  std 30, 88(9)
  005be98  addc 27, 29, 29
  005be9c  sldi 30, 26, 2
  005bea0  addc 27, 29, 27
  005bea4  stw 28, 96(9)
  005bea8  addc 30, 11, 30
  005beac  lbz 28, 2(7)
  005beb0  addic 4, 5, 96
  005beb4  lfs 0, 112(9)
  005beb8  addic 3, 5, 88
  005bebc  lfs 13, 116(9)
  005bec0  sldi 5, 27, 2
  005bec4  lfs 7, 120(9)
  005bec8  clrldi 30, 30, 32
  005becc  addc 27, 28, 28
  005bed0  addc 26, 11, 5
  005bed4  addc 27, 28, 27
  005bed8  lwz 5, 140(9)
  005bedc  clrldi 26, 26, 32
  005bee0  sldi 27, 27, 2
  005bee4  lfs 21, 0(30)
  005bee8  lfs 25, 4(30)
  005beec  rlwinm 31, 31, 2, 22, 29
  005bef0  addc 11, 11, 27
  005bef4  lfs 26, 8(30)
  005bef8  rlwinm 30, 29, 2, 22, 29
  005befc  lfs 9, 0(26)
  005bf00  clrldi 11, 11, 32
  005bf04  lfs 8, 4(26)
  005bf08  rlwinm 28, 28, 2, 22, 29
  005bf0c  lfs 4, 8(26)
  005bf10  lwzx 31, 12, 31
  005bf14  lwzx 30, 12, 30
  005bf18  lfs 12, 0(11)
  005bf1c  and 31, 31, 30
  005bf20  lfs 11, 4(11)
  005bf24  lwzx 12, 12, 28
  005bf28  lfs 5, 8(11)
  005bf2c  and 11, 31, 12
  005bf30  lbz 7, 3(7)
  005bf34  cmpwi 11, 0
  005bf38  bf 2, 0x5c684
  005bf3c  rlwinm 11, 7, 0, 24, 24
  005bf40  and 11, 11, 10
  005bf44  cmpwi 11, 0
  005bf48  bf 2, 0x5c684
  005bf4c  rlwinm 12, 10, 0, 26, 26
  005bf50  li 11, 0
  005bf54  cmplwi 12, 1
  005bf58  bf 0, 0x5bf60
  005bf5c  li 11, 1
  005bf60  srwi 12, 10, 8
  005bf64  xor 12, 12, 7
  005bf68  clrlwi 12, 12, 27
  005bf6c  or 11, 11, 12
  005bf70  cmpwi 11, 0
  005bf74  bt 2, 0x5c684
  005bf78  fsubs 9, 9, 21
  005bf7c  addic 11, 1, 48
  005bf80  fsubs 8, 8, 25
  005bf84  stfs 21, 120(1)
  005bf88  fsubs 4, 4, 26
  005bf8c  addic 12, 1, 60
  005bf90  fsubs 11, 11, 25
  005bf94  stfs 25, 116(1)
  005bf98  fsubs 5, 5, 26
  005bf9c  stfs 26, 112(1)
  005bfa0  fsubs 12, 12, 21
  005bfa4  addic 31, 1, 72
  005bfa8  fsubs 0, 0, 21
  005bfac  fsubs 13, 13, 25
  005bfb0  fsubs 7, 7, 26
  005bfb4  rlwinm 10, 10, 0, 27, 27
  005bfb8  cmpwi 10, 0
  005bfbc  stfs 9, 0(11)
  005bfc0  fmuls 3, 11, 4
  005bfc4  stfs 8, 4(11)
  005bfc8  fmuls 2, 5, 8
  005bfcc  stfs 4, 8(11)
  005bfd0  fmuls 6, 5, 9
  005bfd4  fmuls 10, 12, 4
  005bfd8  stfs 12, 0(12)
  005bfdc  fmuls 30, 12, 8
  005bfe0  stfs 11, 4(12)
  005bfe4  fmuls 29, 11, 9
  005bfe8  stfs 5, 8(12)
  005bfec  fadds 31, 7, 1
  005bff0  stfs 0, 0(31)
  005bff4  stfs 13, 4(31)
  005bff8  stfs 7, 8(31)
  005bffc  lfs 22, 0(8)
  005c000  fsubs 3, 3, 2
  005c004  fadds 23, 0, 22
  005c008  fsubs 2, 6, 10
  005c00c  fadds 24, 13, 22
  005c010  fsubs 6, 30, 29
  005c014  addic 11, 1, 84
  005c018  fsubs 28, 7, 4
  005c01c  fmuls 30, 0, 3
  005c020  fmuls 29, 23, 3
  005c024  fmuls 27, 13, 2
  005c028  fmuls 26, 24, 2
  005c02c  stfs 3, 0(11)
  005c030  fmuls 25, 7, 6
  005c034  stfs 2, 4(11)
  005c038  fmuls 21, 31, 6
  005c03c  fmuls 10, 1, 6
  005c040  stfs 6, 8(11)
  005c044  fadds 30, 30, 27
  005c048  fadds 27, 29, 26
  005c04c  fsubs 29, 7, 5
  005c050  fcmpu 7, 10, 22
  005c054  fadds 30, 30, 25
  005c058  fadds 27, 27, 21
  005c05c  fcmpu 1, 30, 22
  005c060  fcmpu 6, 27, 22
  005c064  bf 2, 0x5c070
  005c068  bt 4, 0x5c684
  005c06c  bt 24, 0x5c684
  005c070  fabs 25, 6
  005c074  lfs 19, 4(8)
  005c078  fsubs 21, 31, 4
  005c07c  fsubs 20, 31, 5
  005c080  fmr 26, 22
  005c084  fcmpu 0, 25, 19
  005c088  fcmpu 1, 21, 22
  005c08c  fcmpu 6, 20, 22
  005c090  bt 0, 0x5c28c
  005c094  fdivs 10, 30, 10
  005c098  stfd 10, 104(1)
  005c09c  bt 30, 0x5c684
  005c0a0  fcmpu 0, 29, 22
  005c0a4  bt 0, 0x5c0bc
  005c0a8  fcmpu 0, 28, 22
  005c0ac  bt 0, 0x5c0bc
  005c0b0  fcmpu 0, 7, 22
  005c0b4  cror 2, 1, 2
  005c0b8  bt 2, 0x5c348
  005c0bc  fcmpu 0, 31, 22
  005c0c0  stfs 22, 96(1)
  005c0c4  cror 2, 1, 2
  005c0c8  bt 2, 0x5c0dc
  005c0cc  stfs 22, 96(1)
  005c0d0  bf 4, 0x5c0dc
  005c0d4  stfs 22, 96(1)
  005c0d8  bt 24, 0x5c314
  005c0dc  fmr 10, 2
  005c0e0  lfd 2, 104(1)
  005c0e4  fmuls 24, 13, 9
  005c0e8  fmuls 26, 13, 4
  005c0ec  fmuls 2, 2, 1
  005c0f0  fsubs 30, 11, 8
  005c0f4  fsubs 29, 5, 4
  005c0f8  fsubs 27, 13, 8
  005c0fc  fmuls 25, 0, 4
  005c100  fsubs 31, 12, 9
  005c104  fsubs 28, 0, 9
  005c108  fmuls 23, 5, 13
  005c10c  fmuls 15, 11, 0
  005c110  fmuls 22, 5, 0
  005c114  fsubs 2, 7, 2
  005c118  fmuls 7, 0, 8
  005c11c  fmuls 21, 27, 29
  005c120  fmuls 29, 28, 29
  005c124  fmuls 19, 2, 8
  005c128  fsubs 20, 2, 4
  005c12c  fmuls 18, 2, 9
  005c130  fsubs 7, 7, 24
  005c134  fmuls 17, 11, 2
  005c138  fmuls 24, 12, 13
  005c13c  fmuls 16, 12, 2
  005c140  fsubs 26, 26, 19
  005c144  fmuls 19, 20, 30
  005c148  fsubs 25, 18, 25
  005c14c  fmuls 20, 20, 31
  005c150  fmuls 30, 28, 30
  005c154  fmuls 31, 27, 31
  005c158  fsubs 23, 17, 23
  005c15c  fsubs 28, 24, 15
  005c160  fsubs 22, 22, 16
  005c164  fmuls 7, 7, 6
  005c168  fmuls 27, 26, 3
  005c16c  fmuls 26, 25, 10
  005c170  fsubs 25, 21, 19
  005c174  fsubs 29, 20, 29
  005c178  fsubs 31, 30, 31
  005c17c  fmuls 24, 23, 3
  005c180  fmuls 30, 28, 6
  005c184  fmuls 23, 22, 10
  005c188  fadds 28, 27, 26
  005c18c  fmuls 3, 25, 3
  005c190  fmuls 10, 29, 10
  005c194  fmuls 6, 31, 6
  005c198  lfs 29, 96(1)
  005c19c  fadds 27, 24, 23
  005c1a0  fadds 7, 28, 7
  005c1a4  fadds 3, 3, 10
  005c1a8  fadds 10, 27, 30
  005c1ac  fcmpu 0, 7, 29
  005c1b0  fadds 3, 3, 6
  005c1b4  fcmpu 1, 10, 29
  005c1b8  cror 2, 1, 2
  005c1bc  fcmpu 6, 3, 29
  005c1c0  bt 2, 0x5c1e4
  005c1c4  lfs 22, 96(1)
  005c1c8  fmr 12, 9
  005c1cc  fmr 9, 22
  005c1d0  fmr 11, 8
  005c1d4  fmr 5, 4
  005c1d8  fmr 8, 9
  005c1dc  fmr 26, 8
  005c1e0  b 0x5c21c
  005c1e4  lfs 22, 96(1)
  005c1e8  bf 4, 0x5c208
  005c1ec  fmr 9, 12
  005c1f0  fmr 12, 22
  005c1f4  fmr 8, 11
  005c1f8  fmr 26, 5
  005c1fc  fmr 11, 12
  005c200  fmr 5, 11
  005c204  b 0x5c21c
  005c208  bf 24, 0x5c214
  005c20c  fmr 26, 4
  005c210  b 0x5c21c
  005c214  fmr 26, 2
  005c218  b 0x5c28c
  005c21c  fsubs 3, 12, 9
  005c220  fsubs 4, 11, 8
  005c224  fsubs 6, 0, 9
  005c228  fsubs 0, 5, 26
  005c22c  fsubs 5, 13, 8
  005c230  fsubs 2, 2, 26
  005c234  fmuls 7, 3, 3
  005c238  fmuls 8, 4, 4
  005c23c  fmuls 3, 6, 3
  005c240  fmuls 6, 0, 0
  005c244  fmuls 4, 5, 4
  005c248  fmuls 2, 2, 0
  005c24c  fadds 5, 7, 8
  005c250  fadds 3, 3, 4
  005c254  fadds 4, 5, 6
  005c258  fadds 2, 3, 2
  005c25c  fcmpu 0, 4, 22
  005c260  fdivs 2, 2, 4
  005c264  bt 2, 0x5c684
  005c268  fcmpu 0, 2, 22
  005c26c  bt 1, 0x5c274
  005c270  fmr 2, 22
  005c274  lfs 3, 8(8)
  005c278  fcmpu 0, 2, 3
  005c27c  bt 0, 0x5c284
  005c280  fmr 2, 3
  005c284  fmuls 2, 2, 0
  005c288  fadds 26, 2, 26
  005c28c  lfs 6, 80(1)
  005c290  fsubs 2, 26, 6
  005c294  fcmpu 0, 1, 2
  005c298  cror 6, 0, 2
  005c29c  bt 6, 0x5c2a4
  005c2a0  fmr 1, 2
  005c2a4  fcmpu 0, 1, 22
  005c2a8  bt 1, 0x5c2b0
  005c2ac  fmr 1, 22
  005c2b0  fmr 25, 6
  005c2b4  lfs 6, 84(1)
  005c2b8  fmuls 7, 6, 6
  005c2bc  fadds 25, 1, 25
  005c2c0  lfs 1, 88(1)
  005c2c4  lfs 2, 92(1)
  005c2c8  fmuls 8, 1, 1
  005c2cc  lfs 23, 72(1)
  005c2d0  lfs 24, 76(1)
  005c2d4  fmuls 9, 2, 2
  005c2d8  fmuls 3, 23, 6
  005c2dc  fmuls 4, 24, 1
  005c2e0  fmuls 5, 25, 2
  005c2e4  fadds 7, 7, 8
  005c2e8  fadds 3, 3, 4
  005c2ec  fadds 4, 7, 9
  005c2f0  fadds 3, 3, 5
  005c2f4  fcmpu 0, 4, 22
  005c2f8  fdivs 3, 3, 4
  005c2fc  bt 2, 0x5c684
  005c300  fmr 4, 2
  005c304  fmuls 2, 6, 3
  005c308  fmuls 1, 1, 3
  005c30c  fmuls 6, 4, 3
  005c310  b 0x5c380
  005c314  fmuls 1, 3, 3
  005c318  fmuls 4, 2, 2
  005c31c  fmuls 5, 6, 6
  005c320  fadds 1, 1, 4
  005c324  fadds 1, 1, 5
  005c328  fcmpu 0, 1, 22
  005c32c  fdivs 27, 27, 1
  005c330  bt 2, 0x5c684
  005c334  fmuls 1, 2, 27
  005c338  fmuls 2, 3, 27
  005c33c  fmr 25, 31
  005c340  fmuls 6, 6, 27
  005c344  b 0x5c380
  005c348  fmuls 1, 3, 3
  005c34c  fmuls 4, 2, 2
  005c350  fmuls 5, 6, 6
  005c354  fadds 1, 1, 4
  005c358  fadds 1, 1, 5
  005c35c  fcmpu 0, 1, 22
  005c360  fdivs 30, 30, 1
  005c364  bt 2, 0x5c684
  005c368  fmuls 1, 2, 30
  005c36c  fmuls 2, 3, 30
  005c370  fmr 23, 0
  005c374  fmr 24, 13
  005c378  fmr 25, 7
  005c37c  fmuls 6, 6, 30
  005c380  fmuls 3, 2, 2
  005c384  fmuls 4, 1, 1
  005c388  fmuls 27, 6, 6
  005c38c  fsubs 28, 23, 2
  005c390  fsubs 29, 24, 1
  005c394  fsubs 30, 25, 6
  005c398  fadds 4, 3, 4
  005c39c  lfs 3, 48(1)
  005c3a0  lfs 2, 52(1)
  005c3a4  lfs 1, 56(1)
  005c3a8  lfs 6, 60(1)
  005c3ac  fmuls 13, 30, 2
  005c3b0  lfs 5, 64(1)
  005c3b4  fmuls 31, 29, 1
  005c3b8  lfs 10, 68(1)
  005c3bc  fmuls 0, 30, 3
  005c3c0  stfs 28, 72(1)
  005c3c4  fmuls 7, 28, 1
  005c3c8  fsubs 21, 10, 1
  005c3cc  stfs 29, 76(1)
  005c3d0  fsubs 19, 29, 2
  005c3d4  stfs 30, 80(1)
  005c3d8  fadds 27, 4, 27
  005c3dc  lfs 26, 8(6)
  005c3e0  fmuls 17, 28, 2
  005c3e4  fmuls 8, 29, 3
  005c3e8  fsubs 12, 5, 2
  005c3ec  fsubs 20, 28, 3
  005c3f0  fsubs 18, 30, 1
  005c3f4  fmr 4, 10
  005c3f8  fsubs 11, 6, 3
  005c3fc  fsubs 31, 31, 13
  005c400  fsubs 0, 0, 7
  005c404  fcmpu 0, 26, 27
  005c408  fmuls 9, 19, 21
  005c40c  fsubs 13, 17, 8
  005c410  fmuls 10, 6, 30
  005c414  fmuls 8, 5, 30
  005c418  fmuls 7, 18, 12
  005c41c  fmuls 17, 4, 29
  005c420  fmuls 16, 4, 28
  005c424  fmuls 21, 20, 21
  005c428  fmuls 18, 18, 11
  005c42c  fmuls 15, 6, 29
  005c430  fmuls 20, 20, 12
  005c434  fmuls 14, 5, 28
  005c438  fmuls 19, 19, 11
  005c43c  fsubs 9, 9, 7
  005c440  fsubs 12, 8, 17
  005c444  fsubs 11, 16, 10
  005c448  fsubs 8, 18, 21
  005c44c  fsubs 10, 15, 14
  005c450  fsubs 7, 20, 19
  005c454  bt 0, 0x5c684
  005c458  lfs 21, 84(1)
  005c45c  lfs 20, 88(1)
  005c460  fmuls 31, 31, 21
  005c464  lfs 19, 92(1)
  005c468  fmuls 0, 0, 20
  005c46c  fmuls 9, 9, 21
  005c470  fmuls 8, 8, 20
  005c474  fmuls 13, 13, 19
  005c478  fmuls 12, 12, 21
  005c47c  fmuls 11, 11, 20
  005c480  fmuls 10, 10, 19
  005c484  fmuls 7, 7, 19
  005c488  fadds 0, 31, 0
  005c48c  fadds 8, 9, 8
  005c490  fadds 11, 12, 11
  005c494  fadds 9, 0, 13
  005c498  fadds 7, 8, 7
  005c49c  fadds 10, 11, 10
  005c4a0  fcmpu 0, 9, 22
  005c4a4  fcmpu 6, 7, 22
  005c4a8  fcmpu 1, 10, 22
  005c4ac  cror 2, 1, 2
  005c4b0  bt 2, 0x5c4d0
  005c4b4  fmr 6, 3
  005c4b8  fmr 3, 22
  005c4bc  fmr 5, 2
  005c4c0  fmr 4, 1
  005c4c4  fmr 2, 3
  005c4c8  fmr 1, 2
  005c4cc  b 0x5c4f4
  005c4d0  bf 4, 0x5c4f0
  005c4d4  fmr 3, 6
  005c4d8  fmr 6, 22
  005c4dc  fmr 2, 5
  005c4e0  fmr 1, 4
  005c4e4  fmr 5, 6
  005c4e8  fmr 4, 5
  005c4ec  b 0x5c4f4
  005c4f0  bf 24, 0x5c5a4
  005c4f4  fmr 7, 4
  005c4f8  fsubs 8, 28, 3
  005c4fc  fsubs 6, 6, 3
  005c500  fsubs 9, 29, 2
  005c504  fsubs 4, 5, 2
  005c508  fsubs 10, 30, 1
  005c50c  fsubs 5, 7, 1
  005c510  fmuls 7, 8, 6
  005c514  fmuls 8, 9, 4
  005c518  fmuls 9, 6, 6
  005c51c  fmuls 11, 4, 4
  005c520  fmuls 10, 10, 5
  005c524  fmuls 12, 5, 5
  005c528  fadds 7, 7, 8
  005c52c  fadds 8, 9, 11
  005c530  fadds 7, 7, 10
  005c534  fadds 8, 8, 12
  005c538  fdivs 7, 7, 8
  005c53c  fcmpu 0, 7, 22
  005c540  bt 1, 0x5c548
  005c544  fmr 7, 22
  005c548  lfs 8, 8(8)
  005c54c  fcmpu 0, 7, 8
  005c550  bt 0, 0x5c558
  005c554  fmr 7, 8
  005c558  fmuls 6, 7, 6
  005c55c  fmuls 4, 7, 4
  005c560  fmuls 5, 7, 5
  005c564  fadds 3, 6, 3
  005c568  fadds 2, 4, 2
  005c56c  fadds 1, 5, 1
  005c570  fsubs 4, 3, 23
  005c574  fsubs 5, 2, 24
  005c578  stfs 3, 72(1)
  005c57c  fsubs 6, 1, 25
  005c580  stfs 2, 76(1)
  005c584  stfs 1, 80(1)
  005c588  fmuls 3, 4, 4
  005c58c  fmuls 4, 5, 5
  005c590  fmuls 27, 6, 6
  005c594  fadds 1, 3, 4
  005c598  fadds 27, 1, 27
  005c59c  fcmpu 0, 26, 27
  005c5a0  bt 0, 0x5c684
  005c5a4  lfs 1, 92(9)
  005c5a8  lfs 2, 120(1)
  005c5ac  addic 7, 7, 4096
  005c5b0  lfsx 3, 1, 3
  005c5b4  lfs 4, 116(1)
  005c5b8  lfs 5, 112(1)
  005c5bc  fadds 2, 2, 3
  005c5c0  lfsx 3, 1, 4
  005c5c4  fadds 1, 4, 1
  005c5c8  stw 7, 0(6)
  005c5cc  addic 3, 6, 12
  005c5d0  fadds 3, 5, 3
  005c5d4  stw 5, 4(6)
  005c5d8  lfs 4, 12(8)
  005c5dc  addic 4, 6, 24
  005c5e0  lfs 5, 72(1)
  005c5e4  addic 5, 6, 36
  005c5e8  lfs 6, 76(1)
  005c5ec  fmuls 4, 27, 4
  005c5f0  lfs 7, 80(1)
  005c5f4  addic 7, 6, 48
  005c5f8  fadds 5, 5, 2
  005c5fc  fadds 6, 6, 1
  005c600  fadds 7, 7, 3
  005c604  stfs 4, 8(6)
  005c608  stfs 5, 0(3)
  005c60c  stfs 6, 4(3)
  005c610  stfs 7, 8(3)
  005c614  lfs 4, 84(1)
  005c618  stfs 4, 0(4)
  005c61c  lfs 4, 88(1)
  005c620  stfs 4, 4(4)
  005c624  lfs 4, 92(1)
  005c628  stfs 4, 8(4)
  005c62c  stfs 2, 0(5)
  005c630  stfs 1, 4(5)
  005c634  addic 3, 6, 60
  005c638  stfs 3, 8(5)
  005c63c  lfs 4, 48(1)
  005c640  lfs 5, 52(1)
  005c644  fadds 4, 4, 2
  005c648  lfs 6, 56(1)
  005c64c  fadds 5, 5, 1
  005c650  fadds 6, 6, 3
  005c654  stfs 4, 0(7)
  005c658  stfs 5, 4(7)
  005c65c  stfs 6, 8(7)
  005c660  lfs 4, 60(1)
  005c664  lfs 5, 64(1)
  005c668  fadds 2, 4, 2
  005c66c  lfs 4, 68(1)
  005c670  fadds 1, 5, 1
  005c674  fadds 3, 4, 3
  005c678  stfs 2, 0(3)
  005c67c  stfs 1, 4(3)
  005c680  stfs 3, 8(3)
  005c684  lfd 14, 176(1)
  005c688  lfd 15, 184(1)
  005c68c  lfd 16, 192(1)
  005c690  lfd 17, 200(1)
  005c694  lfd 18, 208(1)
  005c698  lfd 19, 216(1)
  005c69c  lfd 20, 224(1)
  005c6a0  lfd 21, 232(1)
  005c6a4  lfd 22, 240(1)
  005c6a8  lfd 23, 248(1)
  005c6ac  lfd 24, 256(1)
  005c6b0  lfd 25, 264(1)
  005c6b4  lfd 26, 272(1)
  005c6b8  lfd 27, 280(1)
  005c6bc  lfd 28, 288(1)
  005c6c0  lfd 29, 296(1)
  005c6c4  lfd 30, 304(1)
  005c6c8  lfd 31, 312(1)
  005c6cc  ld 26, 128(1)
  005c6d0  ld 27, 136(1)
  005c6d4  ld 28, 144(1)
  005c6d8  ld 29, 152(1)
  005c6dc  ld 30, 160(1)
  005c6e0  ld 31, 168(1)
  005c6e4  addi 1, 1, 320
  005c6e8  blr

CollPill:   # 0x5c710, 0x1e7c bytes
  005c710  stdu 1, -10448(1)
  005c714  mflr 0
  005c718  std 0, 10464(1)
  005c71c  stfd 14, 10304(1)
  005c720  stfd 15, 10312(1)
  005c724  stfd 16, 10320(1)
  005c728  stfd 17, 10328(1)
  005c72c  stfd 18, 10336(1)
  005c730  stfd 19, 10344(1)
  005c734  stfd 20, 10352(1)
  005c738  stfd 21, 10360(1)
  005c73c  stfd 22, 10368(1)
  005c740  stfd 23, 10376(1)
  005c744  stfd 24, 10384(1)
  005c748  stfd 25, 10392(1)
  005c74c  stfd 26, 10400(1)
  005c750  stfd 27, 10408(1)
  005c754  stfd 28, 10416(1)
  005c758  stfd 29, 10424(1)
  005c75c  stfd 30, 10432(1)
  005c760  stfd 31, 10440(1)
  005c764  addi 0, 1, 10128
  005c768  stvx 30, 0, 0
  005c76c  addic 0, 0, 16
  005c770  stvx 31, 0, 0
  005c774  fmr 14, 1
  005c778  lfs 7, 0(3)
  005c77c  fmr 15, 2
  005c780  lfs 8, 4(3)
  005c784  addic 5, 1, 248
  005c788  lfs 9, 8(3)
  005c78c  lis 4, 6
  005c790  addic 3, 1, 176
  005c794  addi 4, 4, -14612
  005c798  std 17, 10184(1)
  005c79c  addic 8, 1, 188
  005c7a0  ori 17, 6, 0
  005c7a4  fadds 1, 7, 14
  005c7a8  fadds 2, 8, 14
  005c7ac  fadds 3, 9, 14
  005c7b0  fsubs 6, 9, 14
  005c7b4  fsubs 4, 7, 14
  005c7b8  fsubs 5, 8, 14
  005c7bc  stfs 1, 0(5)
  005c7c0  stfs 2, 4(5)
  005c7c4  stfs 3, 8(5)
  005c7c8  lfs 25, 0(4)
  005c7cc  fadds 3, 3, 15
  005c7d0  std 7, 10032(1)
  005c7d4  fadds 1, 1, 25
  005c7d8  addic 5, 1, 200
  005c7dc  fadds 2, 2, 25
  005c7e0  fcmpu 1, 5, 25
  005c7e4  fcmpu 0, 4, 25
  005c7e8  stfs 3, 8(3)
  005c7ec  stfs 6, 8(8)
  005c7f0  stfs 1, 0(3)
  005c7f4  stfs 2, 4(3)
  005c7f8  cror 2, 0, 4
  005c7fc  stfs 4, 0(8)
  005c800  stfs 5, 4(8)
  005c804  lfs 16, 4(4)
  005c808  fmuls 7, 7, 16
  005c80c  fmuls 8, 8, 16
  005c810  fmuls 9, 9, 16
  005c814  fmuls 15, 15, 16
  005c818  fmuls 14, 14, 16
  005c81c  stfs 7, 0(5)
  005c820  stfs 8, 4(5)
  005c824  std 31, 10296(1)
  005c828  std 30, 10288(1)
  005c82c  std 29, 10280(1)
  005c830  std 28, 10272(1)
  005c834  std 27, 10264(1)
  005c838  std 26, 10256(1)
  005c83c  std 25, 10248(1)
  005c840  std 24, 10240(1)
  005c844  std 23, 10232(1)
  005c848  std 22, 10224(1)
  005c84c  std 21, 10216(1)
  005c850  std 20, 10208(1)
  005c854  std 19, 10200(1)
  005c858  std 18, 10192(1)
  005c85c  std 16, 10176(1)
  005c860  std 15, 10168(1)
  005c864  std 14, 10160(1)
  005c868  stfs 9, 8(5)
  005c86c  bt 2, 0x5c87c
  005c870  fcmpu 0, 6, 25
  005c874  cror 6, 1, 2
  005c878  bt 6, 0x5c884
  005c87c  li 3, 0
  005c880  b 0x5e4dc
  005c884  fcmpu 0, 1, 16
  005c888  bt 1, 0x5c8a0
  005c88c  fcmpu 0, 2, 16
  005c890  bt 1, 0x5c8a0
  005c894  fcmpu 0, 3, 16
  005c898  cror 6, 0, 2
  005c89c  bt 6, 0x5c8a8
  005c8a0  li 3, 0
  005c8a4  b 0x5e4dc
  005c8a8  lis 8, 161
  005c8ac  addic 8, 8, 2368
  005c8b0  lwz 14, 16(8)
  005c8b4  cmpwi 14, 0
  005c8b8  bf 0, 0x5c8c4
  005c8bc  li 3, 0
  005c8c0  b 0x5e4dc
  005c8c4  fctiwz 7, 4
  005c8c8  addic 3, 14, 1
  005c8cc  fctiwz 8, 5
  005c8d0  fctiwz 9, 6
  005c8d4  fcmpu 0, 15, 25
  005c8d8  fctiwz 10, 1
  005c8dc  fctiwz 11, 2
  005c8e0  stw 3, 16(8)
  005c8e4  fctiwz 12, 3
  005c8e8  std 8, 10048(1)
  005c8ec  stfd 7, 10112(1)
  005c8f0  lwz 14, 10116(1)
  005c8f4  stfd 8, 10112(1)
  005c8f8  lwz 3, 10116(1)
  005c8fc  stfd 9, 10112(1)
  005c900  lwz 4, 10116(1)
  005c904  stfd 10, 10112(1)
  005c908  lwz 5, 10116(1)
  005c90c  stfd 11, 10112(1)
  005c910  lwz 6, 10116(1)
  005c914  stfd 12, 10112(1)
  005c918  lwz 7, 10116(1)
  005c91c  bt 1, 0x5c928
  005c920  li 3, 0
  005c924  b 0x5e4dc
  005c928  fcmpu 0, 14, 25
  005c92c  bt 1, 0x5c938
  005c930  li 3, 0
  005c934  b 0x5e4dc
  005c938  fmuls 4, 4, 16
  005c93c  fmuls 5, 5, 16
  005c940  srawi 8, 14, 2
  005c944  fmuls 6, 6, 16
  005c948  addic 9, 1, 212
  005c94c  fmuls 1, 1, 16
  005c950  addic 10, 1, 224
  005c954  fmuls 2, 2, 16
  005c958  li 0, 10000
  005c95c  fmuls 3, 3, 16
  005c960  stw 8, 10000(1)
  005c964  stw 8, 10004(1)
  005c968  srawi 31, 3, 2
  005c96c  stw 8, 10008(1)
  005c970  srawi 27, 4, 2
  005c974  stw 8, 10012(1)
  005c978  stfs 4, 0(9)
  005c97c  stfs 5, 4(9)
  005c980  stfs 6, 8(9)
  005c984  stfs 1, 0(10)
  005c988  stfs 2, 4(10)
  005c98c  stfs 3, 8(10)
  005c990  lvx 2, 1, 0
  005c994  li 0, 10000
  005c998  stw 31, 10000(1)
  005c99c  vspltw 2, 2, 0
  005c9a0  stw 31, 10004(1)
  005c9a4  stw 31, 10008(1)
  005c9a8  stw 31, 10012(1)
  005c9ac  vspltw 2, 2, 0
  005c9b0  lvx 3, 1, 0
  005c9b4  li 0, 10000
  005c9b8  stw 27, 10000(1)
  005c9bc  stw 27, 10004(1)
  005c9c0  vspltw 2, 2, 0
  005c9c4  stw 27, 10008(1)
  005c9c8  stw 27, 10012(1)
  005c9cc  lvx 4, 1, 0
  005c9d0  vspltw 2, 2, 0
  005c9d4  vspltw 3, 3, 0
  005c9d8  vspltw 4, 4, 0
  005c9dc  vspltw 2, 2, 0
  005c9e0  vspltw 3, 3, 0
  005c9e4  vspltw 4, 4, 0
  005c9e8  vspltw 2, 2, 0
  005c9ec  vspltw 3, 3, 0
  005c9f0  vspltw 4, 4, 0
  005c9f4  vspltw 2, 2, 0
  005c9f8  vspltw 3, 3, 0
  005c9fc  vspltw 4, 4, 0
  005ca00  vspltw 2, 2, 0
  005ca04  vspltw 3, 3, 0
  005ca08  vspltw 4, 4, 0
  005ca0c  vspltw 2, 2, 0
  005ca10  vspltw 3, 3, 0
  005ca14  vspltw 4, 4, 0
  005ca18  vspltw 2, 2, 0
  005ca1c  vspltw 3, 3, 0
  005ca20  vspltw 4, 4, 0
  005ca24  vspltw 2, 2, 0
  005ca28  vspltw 3, 3, 0
  005ca2c  vspltw 4, 4, 0
  005ca30  vspltw 2, 2, 0
  005ca34  vspltw 3, 3, 0
  005ca38  vspltw 4, 4, 0
  005ca3c  vspltw 2, 2, 0
  005ca40  vspltw 3, 3, 0
  005ca44  vspltw 4, 4, 0
  005ca48  vspltw 2, 2, 0
  005ca4c  vspltw 3, 3, 0
  005ca50  vspltw 4, 4, 0
  005ca54  vspltw 2, 2, 0
  005ca58  vspltw 3, 3, 0
  005ca5c  vspltw 4, 4, 0
  005ca60  vspltw 2, 2, 0
  005ca64  vspltw 3, 3, 0
  005ca68  vspltw 4, 4, 0
  005ca6c  vspltw 2, 2, 0
  005ca70  vspltw 3, 3, 0
  005ca74  vspltw 4, 4, 0
  005ca78  vspltw 2, 2, 0
  005ca7c  vspltw 3, 3, 0
  005ca80  vspltw 4, 4, 0
  005ca84  vspltw 2, 2, 0
  005ca88  vspltw 3, 3, 0
  005ca8c  vspltw 4, 4, 0
  005ca90  vspltw 2, 2, 0
  005ca94  vspltw 3, 3, 0
  005ca98  vspltw 4, 4, 0
  005ca9c  vspltw 2, 2, 0
  005caa0  vspltw 3, 3, 0
  005caa4  vspltw 4, 4, 0
  005caa8  addic 3, 1, 260
  005caac  vspltw 2, 2, 0
  005cab0  vspltw 3, 3, 0
  005cab4  vspltw 4, 4, 0
  005cab8  vspltw 2, 2, 0
  005cabc  vspltw 3, 3, 0
  005cac0  vspltw 4, 4, 0
  005cac4  vspltw 2, 2, 0
  005cac8  vspltw 3, 3, 0
  005cacc  vspltw 4, 4, 0
  005cad0  li 4, 4
  005cad4  vspltw 2, 2, 0
  005cad8  vspltw 3, 3, 0
  005cadc  vspltw 4, 4, 0
  005cae0  li 9, 8
  005cae4  vspltw 2, 2, 0
  005cae8  vspltw 3, 3, 0
  005caec  vspltw 4, 4, 0
  005caf0  srawi 5, 5, 2
  005caf4  vspltw 2, 2, 0
  005caf8  vspltw 3, 3, 0
  005cafc  vspltw 4, 4, 0
  005cb00  srawi 30, 6, 2
  005cb04  vspltw 2, 2, 0
  005cb08  vspltw 3, 3, 0
  005cb0c  vspltw 4, 4, 0
  005cb10  vspltw 2, 2, 0
  005cb14  vspltw 3, 3, 0
  005cb18  vspltw 4, 4, 0
  005cb1c  vspltw 2, 2, 0
  005cb20  vspltw 3, 3, 0
  005cb24  vspltw 4, 4, 0
  005cb28  srawi 28, 7, 2
  005cb2c  vspltw 2, 2, 0
  005cb30  vspltw 3, 3, 0
  005cb34  vspltw 4, 4, 0
  005cb38  vspltw 2, 2, 0
  005cb3c  vspltw 3, 3, 0
  005cb40  vspltw 4, 4, 0
  005cb44  vspltw 2, 2, 0
  005cb48  vspltw 3, 3, 0
  005cb4c  vspltw 4, 4, 0
  005cb50  vspltw 2, 2, 0
  005cb54  vspltw 3, 3, 0
  005cb58  vspltw 4, 4, 0
  005cb5c  vspltw 2, 2, 0
  005cb60  vspltw 3, 3, 0
  005cb64  vspltw 4, 4, 0
  005cb68  vspltw 2, 2, 0
  005cb6c  vspltw 3, 3, 0
  005cb70  vspltw 4, 4, 0
  005cb74  vspltw 3, 3, 0
  005cb78  stvewx 2, 0, 3
  005cb7c  vspltw 2, 4, 0
  005cb80  li 0, 10000
  005cb84  vspltw 3, 3, 0
  005cb88  vspltw 2, 2, 0
  005cb8c  vspltw 3, 3, 0
  005cb90  vspltw 2, 2, 0
  005cb94  stvewx 3, 4, 3
  005cb98  stvewx 2, 9, 3
  005cb9c  stw 5, 10000(1)
  005cba0  stw 5, 10004(1)
  005cba4  stw 5, 10008(1)
  005cba8  stw 5, 10012(1)
  005cbac  lvx 2, 1, 0
  005cbb0  li 0, 10000
  005cbb4  vspltw 2, 2, 0
  005cbb8  stw 30, 10000(1)
  005cbbc  stw 30, 10004(1)
  005cbc0  stw 30, 10008(1)
  005cbc4  vspltw 2, 2, 0
  005cbc8  stw 30, 10012(1)
  005cbcc  lvx 3, 1, 0
  005cbd0  li 0, 10000
  005cbd4  vspltw 2, 2, 0
  005cbd8  stw 28, 10000(1)
  005cbdc  stw 28, 10004(1)
  005cbe0  stw 28, 10008(1)
  005cbe4  vspltw 2, 2, 0
  005cbe8  stw 28, 10012(1)
  005cbec  lvx 4, 1, 0
  005cbf0  vspltw 3, 3, 0
  005cbf4  vspltw 4, 4, 0
  005cbf8  vspltw 2, 2, 0
  005cbfc  vspltw 3, 3, 0
  005cc00  vspltw 4, 4, 0
  005cc04  vspltw 2, 2, 0
  005cc08  vspltw 3, 3, 0
  005cc0c  vspltw 4, 4, 0
  005cc10  vspltw 2, 2, 0
  005cc14  vspltw 3, 3, 0
  005cc18  vspltw 4, 4, 0
  005cc1c  vspltw 2, 2, 0
  005cc20  vspltw 3, 3, 0
  005cc24  vspltw 4, 4, 0
  005cc28  vspltw 2, 2, 0
  005cc2c  vspltw 3, 3, 0
  005cc30  vspltw 4, 4, 0
  005cc34  vspltw 2, 2, 0
  005cc38  vspltw 3, 3, 0
  005cc3c  vspltw 4, 4, 0
  005cc40  vspltw 2, 2, 0
  005cc44  vspltw 3, 3, 0
  005cc48  vspltw 4, 4, 0
  005cc4c  vspltw 2, 2, 0
  005cc50  vspltw 3, 3, 0
  005cc54  vspltw 4, 4, 0
  005cc58  vspltw 2, 2, 0
  005cc5c  vspltw 3, 3, 0
  005cc60  vspltw 4, 4, 0
  005cc64  vspltw 2, 2, 0
  005cc68  vspltw 3, 3, 0
  005cc6c  vspltw 4, 4, 0
  005cc70  vspltw 2, 2, 0
  005cc74  vspltw 3, 3, 0
  005cc78  vspltw 4, 4, 0
  005cc7c  vspltw 2, 2, 0
  005cc80  vspltw 3, 3, 0
  005cc84  vspltw 4, 4, 0
  005cc88  vspltw 2, 2, 0
  005cc8c  vspltw 3, 3, 0
  005cc90  vspltw 4, 4, 0
  005cc94  vspltw 2, 2, 0
  005cc98  vspltw 3, 3, 0
  005cc9c  vspltw 4, 4, 0
  005cca0  vspltw 2, 2, 0
  005cca4  vspltw 3, 3, 0
  005cca8  vspltw 4, 4, 0
  005ccac  vspltw 2, 2, 0
  005ccb0  vspltw 3, 3, 0
  005ccb4  vspltw 4, 4, 0
  005ccb8  vspltw 2, 2, 0
  005ccbc  vspltw 3, 3, 0
  005ccc0  vspltw 4, 4, 0
  005ccc4  vspltw 2, 2, 0
  005ccc8  addic 3, 1, 272
  005cccc  vspltw 3, 3, 0
  005ccd0  vspltw 4, 4, 0
  005ccd4  vspltw 2, 2, 0
  005ccd8  vspltw 3, 3, 0
  005ccdc  vspltw 4, 4, 0
  005cce0  vspltw 2, 2, 0
  005cce4  vspltw 3, 3, 0
  005cce8  vspltw 4, 4, 0
  005ccec  vspltw 2, 2, 0
  005ccf0  vspltw 3, 3, 0
  005ccf4  vspltw 4, 4, 0
  005ccf8  vspltw 2, 2, 0
  005ccfc  vspltw 3, 3, 0
  005cd00  vspltw 4, 4, 0
  005cd04  vspltw 2, 2, 0
  005cd08  vspltw 3, 3, 0
  005cd0c  vspltw 4, 4, 0
  005cd10  vspltw 2, 2, 0
  005cd14  vspltw 3, 3, 0
  005cd18  vspltw 4, 4, 0
  005cd1c  vspltw 2, 2, 0
  005cd20  fmuls 1, 14, 14
  005cd24  stfs 25, 10040(1)
  005cd28  vspltw 3, 3, 0
  005cd2c  vspltw 4, 4, 0
  005cd30  vspltw 2, 2, 0
  005cd34  std 8, 10104(1)
  005cd38  vspltw 3, 3, 0
  005cd3c  vspltw 4, 4, 0
  005cd40  vspltw 2, 2, 0
  005cd44  std 5, 10072(1)
  005cd48  vspltw 3, 3, 0
  005cd4c  vspltw 4, 4, 0
  005cd50  vspltw 2, 2, 0
  005cd54  vspltw 3, 3, 0
  005cd58  vspltw 4, 4, 0
  005cd5c  vspltw 2, 2, 0
  005cd60  li 14, 0
  005cd64  vspltw 3, 3, 0
  005cd68  vspltw 4, 4, 0
  005cd6c  vspltw 2, 2, 0
  005cd70  vspltw 3, 3, 0
  005cd74  vspltw 4, 4, 0
  005cd78  vspltw 2, 2, 0
  005cd7c  vspltw 3, 3, 0
  005cd80  vspltw 4, 4, 0
  005cd84  vspltw 2, 2, 0
  005cd88  vspltw 3, 3, 0
  005cd8c  vspltw 4, 4, 0
  005cd90  vspltw 3, 3, 0
  005cd94  stvewx 2, 0, 3
  005cd98  vspltw 2, 4, 0
  005cd9c  vspltw 3, 3, 0
  005cda0  vspltw 2, 2, 0
  005cda4  vspltw 3, 3, 0
  005cda8  vspltw 2, 2, 0
  005cdac  stvewx 3, 4, 3
  005cdb0  lis 4, 6
  005cdb4  stvewx 2, 9, 3
  005cdb8  stfs 25, 712(1)
  005cdbc  stfs 25, 716(1)
  005cdc0  addi 4, 4, -14612
  005cdc4  stfs 25, 720(1)
  005cdc8  clrlwi 3, 17, 31
  005cdcc  stfs 25, 724(1)
  005cdd0  stfs 25, 728(1)
  005cdd4  stfs 25, 732(1)
  005cdd8  cmpwi 3, 0
  005cddc  stfs 25, 736(1)
  005cde0  stfs 25, 740(1)
  005cde4  stfs 25, 744(1)
  005cde8  stfs 25, 748(1)
  005cdec  stfs 25, 752(1)
  005cdf0  stfs 25, 756(1)
  005cdf4  stfs 25, 760(1)
  005cdf8  stfs 25, 764(1)
  005cdfc  stfs 25, 768(1)
  005ce00  stw 14, 700(1)
  005ce04  stw 14, 704(1)
  005ce08  lfs 2, 12(4)
  005ce0c  lfs 3, 8(4)
  005ce10  fmuls 1, 1, 2
  005ce14  stfs 3, 10044(1)
  005ce18  stfs 1, 708(1)
  005ce1c  bf 2, 0x5d69c
  005ce20  ld 3, 10104(1)
  005ce24  li 0, 10000
  005ce28  slwi 3, 3, 12
  005ce2c  slwi 4, 31, 12
  005ce30  slwi 5, 27, 12
  005ce34  stw 3, 10000(1)
  005ce38  stw 3, 10004(1)
  005ce3c  stw 3, 10008(1)
  005ce40  stw 3, 10012(1)
  005ce44  lvx 2, 1, 0
  005ce48  li 0, 10000
  005ce4c  vspltw 2, 2, 0
  005ce50  stw 4, 10000(1)
  005ce54  stw 4, 10004(1)
  005ce58  stw 4, 10008(1)
  005ce5c  vspltw 2, 2, 0
  005ce60  stw 4, 10012(1)
  005ce64  lvx 3, 1, 0
  005ce68  li 0, 10000
  005ce6c  vspltw 2, 2, 0
  005ce70  stw 5, 10000(1)
  005ce74  stw 5, 10004(1)
  005ce78  stw 5, 10008(1)
  005ce7c  vspltw 2, 2, 0
  005ce80  stw 5, 10012(1)
  005ce84  lvx 4, 1, 0
  005ce88  vspltw 3, 3, 0
  005ce8c  vspltw 4, 4, 0
  005ce90  vspltw 2, 2, 0
  005ce94  vspltw 3, 3, 0
  005ce98  vspltw 4, 4, 0
  005ce9c  vspltw 2, 2, 0
  005cea0  vspltw 3, 3, 0
  005cea4  vspltw 4, 4, 0
  005cea8  vspltw 2, 2, 0
  005ceac  vspltw 3, 3, 0
  005ceb0  vspltw 4, 4, 0
  005ceb4  vspltw 2, 2, 0
  005ceb8  vspltw 3, 3, 0
  005cebc  vspltw 4, 4, 0
  005cec0  vspltw 2, 2, 0
  005cec4  vspltw 3, 3, 0
  005cec8  vspltw 4, 4, 0
  005cecc  vspltw 2, 2, 0
  005ced0  vspltw 3, 3, 0
  005ced4  vspltw 4, 4, 0
  005ced8  vspltw 2, 2, 0
  005cedc  vspltw 3, 3, 0
  005cee0  vspltw 4, 4, 0
  005cee4  vspltw 2, 2, 0
  005cee8  vspltw 3, 3, 0
  005ceec  vspltw 4, 4, 0
  005cef0  vspltw 2, 2, 0
  005cef4  vspltw 3, 3, 0
  005cef8  vspltw 4, 4, 0
  005cefc  vspltw 2, 2, 0
  005cf00  vspltw 3, 3, 0
  005cf04  vspltw 4, 4, 0
  005cf08  vspltw 2, 2, 0
  005cf0c  vspltw 3, 3, 0
  005cf10  vspltw 4, 4, 0
  005cf14  vspltw 2, 2, 0
  005cf18  vspltw 3, 3, 0
  005cf1c  vspltw 4, 4, 0
  005cf20  vspltw 2, 2, 0
  005cf24  vspltw 3, 3, 0
  005cf28  vspltw 4, 4, 0
  005cf2c  vspltw 2, 2, 0
  005cf30  vspltw 3, 3, 0
  005cf34  vspltw 4, 4, 0
  005cf38  vspltw 2, 2, 0
  005cf3c  vspltw 3, 3, 0
  005cf40  vspltw 4, 4, 0
  005cf44  vspltw 2, 2, 0
  005cf48  vspltw 3, 3, 0
  005cf4c  vspltw 4, 4, 0
  005cf50  vspltw 2, 2, 0
  005cf54  vspltw 3, 3, 0
  005cf58  vspltw 4, 4, 0
  005cf5c  vspltw 2, 2, 0
  005cf60  addic 6, 1, 296
  005cf64  vspltw 3, 3, 0
  005cf68  vspltw 4, 4, 0
  005cf6c  vspltw 2, 2, 0
  005cf70  vspltw 3, 3, 0
  005cf74  vspltw 4, 4, 0
  005cf78  vspltw 2, 2, 0
  005cf7c  vspltw 3, 3, 0
  005cf80  vspltw 4, 4, 0
  005cf84  vspltw 2, 2, 0
  005cf88  li 7, 4
  005cf8c  vspltw 3, 3, 0
  005cf90  vspltw 4, 4, 0
  005cf94  vspltw 2, 2, 0
  005cf98  li 8, 8
  005cf9c  vspltw 3, 3, 0
  005cfa0  vspltw 4, 4, 0
  005cfa4  vspltw 2, 2, 0
  005cfa8  extsw 3, 3
  005cfac  vspltw 3, 3, 0
  005cfb0  vspltw 4, 4, 0
  005cfb4  vspltw 2, 2, 0
  005cfb8  vspltw 3, 3, 0
  005cfbc  vspltw 4, 4, 0
  005cfc0  vspltw 2, 2, 0
  005cfc4  vspltw 3, 3, 0
  005cfc8  vspltw 4, 4, 0
  005cfcc  vspltw 2, 2, 0
  005cfd0  vspltw 3, 3, 0
  005cfd4  vspltw 4, 4, 0
  005cfd8  vspltw 2, 2, 0
  005cfdc  vspltw 3, 3, 0
  005cfe0  vspltw 4, 4, 0
  005cfe4  vspltw 2, 2, 0
  005cfe8  vspltw 3, 3, 0
  005cfec  vspltw 4, 4, 0
  005cff0  vspltw 2, 2, 0
  005cff4  vspltw 3, 3, 0
  005cff8  vspltw 4, 4, 0
  005cffc  vspltw 2, 2, 0
  005d000  vspltw 3, 3, 0
  005d004  vspltw 4, 4, 0
  005d008  vspltw 2, 2, 0
  005d00c  vspltw 3, 3, 0
  005d010  vspltw 4, 4, 0
  005d014  vspltw 2, 2, 0
  005d018  vspltw 3, 3, 0
  005d01c  vspltw 4, 4, 0
  005d020  vspltw 3, 3, 0
  005d024  stvewx 2, 0, 6
  005d028  vspltw 2, 4, 0
  005d02c  vspltw 3, 3, 0
  005d030  vspltw 2, 2, 0
  005d034  vspltw 3, 3, 0
  005d038  vspltw 2, 2, 0
  005d03c  li 0, 10000
  005d040  stvewx 3, 7, 6
  005d044  stvewx 2, 8, 6
  005d048  std 3, 10112(1)
  005d04c  extsw 3, 4
  005d050  extsw 4, 5
  005d054  addic 5, 1, 284
  005d058  lfd 1, 10112(1)
  005d05c  std 3, 10112(1)
  005d060  fcfid 1, 1
  005d064  addic 3, 1, 5892
  005d068  frsp 1, 1
  005d06c  stfs 1, 10000(1)
  005d070  stfs 1, 10004(1)
  005d074  stfs 1, 10008(1)
  005d078  stfs 1, 10012(1)
  005d07c  lfd 1, 10112(1)
  005d080  std 4, 10112(1)
  005d084  fcfid 1, 1
  005d088  lvx 2, 1, 0
  005d08c  li 0, 10000
  005d090  vspltw 2, 2, 0
  005d094  vspltw 2, 2, 0
  005d098  frsp 1, 1
  005d09c  vspltw 2, 2, 0
  005d0a0  vspltw 2, 2, 0
  005d0a4  vspltw 2, 2, 0
  005d0a8  stfs 1, 10000(1)
  005d0ac  stfs 1, 10004(1)
  005d0b0  stfs 1, 10008(1)
  005d0b4  stfs 1, 10012(1)
  005d0b8  lfd 1, 10112(1)
  005d0bc  lvx 3, 1, 0
  005d0c0  fcfid 1, 1
  005d0c4  vspltw 2, 2, 0
  005d0c8  li 0, 10000
  005d0cc  vspltw 3, 3, 0
  005d0d0  vspltw 2, 2, 0
  005d0d4  vspltw 3, 3, 0
  005d0d8  vspltw 2, 2, 0
  005d0dc  frsp 1, 1
  005d0e0  vspltw 3, 3, 0
  005d0e4  vspltw 2, 2, 0
  005d0e8  vspltw 3, 3, 0
  005d0ec  vspltw 2, 2, 0
  005d0f0  vspltw 3, 3, 0
  005d0f4  vspltw 2, 2, 0
  005d0f8  stfs 1, 10000(1)
  005d0fc  stfs 1, 10004(1)
  005d100  stfs 1, 10008(1)
  005d104  stfs 1, 10012(1)
  005d108  lvx 4, 1, 0
  005d10c  vspltw 3, 3, 0
  005d110  vspltw 4, 4, 0
  005d114  vspltw 2, 2, 0
  005d118  vspltw 3, 3, 0
  005d11c  vspltw 4, 4, 0
  005d120  vspltw 2, 2, 0
  005d124  vspltw 3, 3, 0
  005d128  vspltw 4, 4, 0
  005d12c  vspltw 2, 2, 0
  005d130  vspltw 3, 3, 0
  005d134  vspltw 4, 4, 0
  005d138  vspltw 2, 2, 0
  005d13c  vspltw 3, 3, 0
  005d140  vspltw 4, 4, 0
  005d144  vspltw 2, 2, 0
  005d148  vspltw 3, 3, 0
  005d14c  vspltw 4, 4, 0
  005d150  vspltw 2, 2, 0
  005d154  vspltw 3, 3, 0
  005d158  vspltw 4, 4, 0
  005d15c  vspltw 2, 2, 0
  005d160  vspltw 3, 3, 0
  005d164  vspltw 4, 4, 0
  005d168  vspltw 2, 2, 0
  005d16c  vspltw 3, 3, 0
  005d170  vspltw 4, 4, 0
  005d174  vspltw 2, 2, 0
  005d178  vspltw 3, 3, 0
  005d17c  vspltw 4, 4, 0
  005d180  vspltw 2, 2, 0
  005d184  vspltw 3, 3, 0
  005d188  vspltw 4, 4, 0
  005d18c  vspltw 2, 2, 0
  005d190  vspltw 3, 3, 0
  005d194  vspltw 4, 4, 0
  005d198  vspltw 2, 2, 0
  005d19c  vspltw 3, 3, 0
  005d1a0  vspltw 4, 4, 0
  005d1a4  vspltw 2, 2, 0
  005d1a8  vspltw 3, 3, 0
  005d1ac  vspltw 4, 4, 0
  005d1b0  vspltw 2, 2, 0
  005d1b4  vspltw 3, 3, 0
  005d1b8  vspltw 4, 4, 0
  005d1bc  vspltw 2, 2, 0
  005d1c0  vspltw 3, 3, 0
  005d1c4  vspltw 4, 4, 0
  005d1c8  vspltw 2, 2, 0
  005d1cc  vspltw 3, 3, 0
  005d1d0  vspltw 4, 4, 0
  005d1d4  vspltw 2, 2, 0
  005d1d8  vspltw 3, 3, 0
  005d1dc  vspltw 4, 4, 0
  005d1e0  vspltw 2, 2, 0
  005d1e4  vspltw 3, 3, 0
  005d1e8  vspltw 4, 4, 0
  005d1ec  vspltw 2, 2, 0
  005d1f0  vspltw 3, 3, 0
  005d1f4  vspltw 4, 4, 0
  005d1f8  vspltw 2, 2, 0
  005d1fc  vspltw 3, 3, 0
  005d200  vspltw 4, 4, 0
  005d204  vspltw 2, 2, 0
  005d208  vspltw 3, 3, 0
  005d20c  vspltw 4, 4, 0
  005d210  vspltw 2, 2, 0
  005d214  vspltw 3, 3, 0
  005d218  vspltw 4, 4, 0
  005d21c  vspltw 30, 2, 0
  005d220  li 4, 256
  005d224  vspltw 2, 3, 0
  005d228  vspltw 3, 4, 0
  005d22c  vspltw 30, 30, 0
  005d230  vspltw 2, 2, 0
  005d234  vspltw 3, 3, 0
  005d238  vspltw 2, 2, 0
  005d23c  vspltw 3, 3, 0
  005d240  vspltw 2, 2, 0
  005d244  vspltw 3, 3, 0
  005d248  vspltw 2, 2, 0
  005d24c  vspltw 3, 3, 0
  005d250  vspltw 31, 2, 0
  005d254  vspltw 2, 3, 0
  005d258  vspltw 31, 31, 0
  005d25c  vspltw 2, 2, 0
  005d260  vspltw 2, 2, 0
  005d264  vspltw 2, 2, 0
  005d268  vspltw 2, 2, 0
  005d26c  vspltw 2, 2, 0
  005d270  vspltw 2, 2, 0
  005d274  vspltw 2, 2, 0
  005d278  stvewx 2, 8, 5
  005d27c  stfs 25, 0(3)
  005d280  addic 4, 4, -1
  005d284  stfs 25, 4(3)
  005d288  stfs 25, 8(3)
  005d28c  cmpwi 4, 0
  005d290  stfs 25, 12(3)
  005d294  addic 3, 3, 16
  005d298  bf 2, 0x5d27c
  005d29c  addic 29, 1, 5892
  005d2a0  vspltw 2, 31, 0
  005d2a4  addic 3, 1, 288
  005d2a8  ld 23, 10072(1)
  005d2ac  lis 24, 6
  005d2b0  ori 26, 31, 0
  005d2b4  addi 24, 24, -14612
  005d2b8  stvewx 2, 0, 3
  005d2bc  vspltw 2, 30, 0
  005d2c0  addic 3, 1, 284
  005d2c4  ld 25, 10104(1)
  005d2c8  stvewx 2, 0, 3
  005d2cc  lfs 1, 16(24)
  005d2d0  addic 6, 1, 308
  005d2d4  lfs 31, 284(1)
  005d2d8  ori 3, 25, 0
  005d2dc  fmr 26, 1
  005d2e0  lfs 30, 288(1)
  005d2e4  lfs 29, 292(1)
  005d2e8  ori 4, 26, 0
  005d2ec  ori 5, 27, 0
  005d2f0  fadds 28, 31, 26
  005d2f4  fadds 27, 30, 26
  005d2f8  fadds 26, 29, 26
  005d2fc  stfs 28, 0(6)
  005d300  stfs 27, 4(6)
  005d304  stfs 26, 8(6)
  005d308  bl 0x56b24
  005d30c  cmpwi 3, 0
  005d310  stw 3, 160(1)
  005d314  bt 2, 0x5d334
  005d318  lfs 1, 160(1)
  005d31c  addic 3, 29, 16
  005d320  stfs 28, 0(29)
  005d324  stfs 27, 4(29)
  005d328  stfs 26, 8(29)
  005d32c  stfs 1, 12(29)
  005d330  clrldi 29, 3, 32
  005d334  cmpw 23, 25
  005d338  bt 2, 0x5d364
  005d33c  lfs 1, 20(24)
  005d340  fadds 2, 30, 25
  005d344  addic 25, 25, 1
  005d348  fadds 3, 29, 25
  005d34c  fadds 1, 31, 1
  005d350  extsw 25, 25
  005d354  stfs 2, 288(1)
  005d358  stfs 3, 292(1)
  005d35c  stfs 1, 284(1)
  005d360  b 0x5d2cc
  005d364  cmpw 30, 26
  005d368  bt 2, 0x5d38c
  005d36c  lfs 1, 20(24)
  005d370  fadds 2, 29, 25
  005d374  addic 26, 26, 1
  005d378  fadds 1, 30, 1
  005d37c  extsw 26, 26
  005d380  stfs 2, 292(1)
  005d384  stfs 1, 288(1)
  005d388  b 0x5d2bc
  005d38c  cmpw 28, 27
  005d390  bt 2, 0x5d3b4
  005d394  lis 3, 6
  005d398  addic 27, 27, 1
  005d39c  addi 3, 3, -14612
  005d3a0  extsw 27, 27
  005d3a4  lfs 1, 20(3)
  005d3a8  fadds 1, 29, 1
  005d3ac  stfs 1, 292(1)
  005d3b0  b 0x5d2a0
  005d3b4  stfs 25, 12(29)
  005d3b8  stfs 25, 10040(1)
  005d3bc  addic 29, 1, 5892
  005d3c0  lwz 24, 12(29)
  005d3c4  lfs 1, 12(29)
  005d3c8  cmpwi 24, 0
  005d3cc  stfs 1, 164(1)
  005d3d0  bt 2, 0x5d69c
  005d3d4  lbz 28, 2(24)
  005d3d8  cmpwi 28, 0
  005d3dc  bt 2, 0x5d694
  005d3e0  addic 3, 1, 320
  005d3e4  lfs 4, 0(29)
  005d3e8  lfs 5, 4(29)
  005d3ec  addic 4, 1, 332
  005d3f0  lfs 6, 8(29)
  005d3f4  addic 5, 1, 344
  005d3f8  addic 6, 1, 356
  005d3fc  stfs 4, 0(3)
  005d400  stfs 5, 4(3)
  005d404  stfs 6, 8(3)
  005d408  lfs 1, 200(1)
  005d40c  lfs 2, 204(1)
  005d410  fsubs 1, 1, 4
  005d414  lfs 3, 208(1)
  005d418  fsubs 2, 2, 5
  005d41c  fsubs 3, 3, 6
  005d420  ori 3, 14, 0
  005d424  addic 26, 24, 4
  005d428  cmpw 28, 3
  005d42c  clrldi 27, 26, 32
  005d430  stfs 1, 0(4)
  005d434  stfs 2, 4(4)
  005d438  stfs 3, 8(4)
  005d43c  lfs 1, 212(1)
  005d440  lfs 2, 216(1)
  005d444  fsubs 1, 1, 4
  005d448  lfs 3, 220(1)
  005d44c  fsubs 2, 2, 5
  005d450  fsubs 3, 3, 6
  005d454  stfs 1, 0(5)
  005d458  stfs 2, 4(5)
  005d45c  stfs 3, 8(5)
  005d460  lfs 7, 224(1)
  005d464  lfs 8, 228(1)
  005d468  fsubs 4, 7, 4
  005d46c  lfs 7, 232(1)
  005d470  fsubs 5, 8, 5
  005d474  fsubs 6, 7, 6
  005d478  stfs 4, 0(6)
  005d47c  stfs 5, 4(6)
  005d480  stfs 6, 8(6)
  005d484  bf 1, 0x5d53c
  005d488  ori 10, 27, 0
  005d48c  ori 11, 1, 0
  005d490  lfs 9, 0(10)
  005d494  ori 4, 14, 0
  005d498  lfs 7, 4(10)
  005d49c  fcmpu 0, 4, 9
  005d4a0  lfs 8, 8(10)
  005d4a4  fcmpu 1, 5, 7
  005d4a8  fcmpu 7, 1, 9
  005d4ac  fcmpu 6, 6, 8
  005d4b0  cror 2, 1, 2
  005d4b4  bt 2, 0x5d4bc
  005d4b8  li 4, 1
  005d4bc  ori 5, 14, 0
  005d4c0  bf 4, 0x5d4c8
  005d4c4  li 5, 1
  005d4c8  ori 6, 14, 0
  005d4cc  bf 24, 0x5d4d4
  005d4d0  li 6, 1
  005d4d4  ori 7, 14, 0
  005d4d8  bf 29, 0x5d4e0
  005d4dc  li 7, 1
  005d4e0  fcmpu 0, 2, 7
  005d4e4  ori 8, 14, 0
  005d4e8  cror 6, 0, 2
  005d4ec  bt 6, 0x5d4f4
  005d4f0  li 8, 1
  005d4f4  fcmpu 0, 3, 8
  005d4f8  ori 9, 14, 0
  005d4fc  cror 6, 0, 2
  005d500  bt 6, 0x5d508
  005d504  li 9, 1
  005d508  slwi 8, 8, 8
  005d50c  rlwimi 7, 4, 1, 30, 30
  005d510  rlwimi 8, 5, 9, 22, 22
  005d514  slwi 5, 9, 16
  005d518  or 4, 7, 8
  005d51c  rlwimi 5, 6, 17, 14, 14
  005d520  addic 3, 3, 1
  005d524  or 4, 4, 5
  005d528  cmpw 3, 28
  005d52c  addic 10, 10, 12
  005d530  stw 4, 772(11)
  005d534  addic 11, 11, 4
  005d538  bt 0, 0x5d490
  005d53c  addc 3, 28, 28
  005d540  lhz 25, 0(24)
  005d544  ori 23, 14, 0
  005d548  addc 3, 28, 3
  005d54c  extsh 25, 25
  005d550  sldi 3, 3, 2
  005d554  cmpw 25, 23
  005d558  addc 26, 26, 3
  005d55c  clrldi 26, 26, 32
  005d560  bf 1, 0x5d5dc
  005d564  ori 22, 26, 0
  005d568  lis 3, 161
  005d56c  lfs 1, 320(1)
  005d570  lfs 2, 328(1)
  005d574  addic 5, 1, 772
  005d578  stfs 1, 88(1)
  005d57c  addic 6, 1, 700
  005d580  stfs 2, 96(1)
  005d584  clrldi 10, 17, 32
  005d588  lfs 1, 324(1)
  005d58c  ori 4, 27, 0
  005d590  lwz 8, 2368(3)
  005d594  ori 7, 28, 0
  005d598  stfs 1, 92(1)
  005d59c  ori 3, 22, 0
  005d5a0  lfs 1, 332(1)
  005d5a4  lfs 2, 336(1)
  005d5a8  stfs 1, 112(1)
  005d5ac  lfs 3, 340(1)
  005d5b0  stfs 2, 116(1)
  005d5b4  fmr 1, 15
  005d5b8  stfs 3, 120(1)
  005d5bc  std 8, 136(1)
  005d5c0  ld 8, 88(1)
  005d5c4  ld 9, 96(1)
  005d5c8  bl 0x5bdf8
  005d5cc  addic 23, 23, 1
  005d5d0  addic 22, 22, 4
  005d5d4  cmpw 23, 25
  005d5d8  bt 0, 0x5d568
  005d5dc  lbz 24, 3(24)
  005d5e0  cmpwi 24, 0
  005d5e4  bt 2, 0x5d694
  005d5e8  sldi 3, 25, 2
  005d5ec  ori 23, 14, 0
  005d5f0  addc 25, 26, 3
  005d5f4  cmpw 24, 23
  005d5f8  clrldi 25, 25, 32
  005d5fc  bf 1, 0x5d694
  005d600  slwi 3, 23, 2
  005d604  lfs 1, 320(1)
  005d608  lis 4, 161
  005d60c  extsw 3, 3
  005d610  lfs 2, 328(1)
  005d614  stfs 1, 88(1)
  005d618  addic 6, 1, 700
  005d61c  stfs 2, 96(1)
  005d620  clrldi 10, 17, 32
  005d624  lwzx 5, 26, 3
  005d628  addic 3, 1, 9992
  005d62c  stw 5, 9992(1)
  005d630  lbz 7, 9994(1)
  005d634  lfs 1, 324(1)
  005d638  addic 5, 1, 772
  005d63c  stb 7, 9993(1)
  005d640  lbzx 7, 25, 23
  005d644  lwz 8, 2368(4)
  005d648  stb 7, 9994(1)
  005d64c  stfs 1, 92(1)
  005d650  ori 4, 27, 0
  005d654  lfs 2, 332(1)
  005d658  ori 7, 28, 0
  005d65c  lfs 3, 336(1)
  005d660  fmr 1, 15
  005d664  stfs 2, 112(1)
  005d668  lfs 2, 340(1)
  005d66c  stfs 3, 116(1)
  005d670  stfs 2, 120(1)
  005d674  std 8, 136(1)
  005d678  ld 8, 88(1)
  005d67c  ld 9, 96(1)
  005d680  bl 0x5bdf8
  005d684  addic 23, 23, 1
  005d688  extsw 23, 23
  005d68c  cmpw 23, 24
  005d690  bt 0, 0x5d600
  005d694  addic 29, 29, 16
  005d698  b 0x5d3c0
  005d69c  srawi 3, 30, 2
  005d6a0  ld 5, 10072(1)
  005d6a4  srawi 4, 31, 2
  005d6a8  addic 3, 3, 1
  005d6ac  ld 6, 10104(1)
  005d6b0  srawi 5, 5, 2
  005d6b4  stw 14, 704(1)
  005d6b8  srawi 6, 6, 2
  005d6bc  cmpw 4, 3
  005d6c0  std 3, 10024(1)
  005d6c4  std 5, 10072(1)
  005d6c8  std 6, 10104(1)
  005d6cc  std 4, 10096(1)
  005d6d0  bf 0, 0x5e330
  005d6d4  ld 3, 10072(1)
  005d6d8  ld 4, 10104(1)
  005d6dc  addic 3, 3, 1
  005d6e0  std 4, 10080(1)
  005d6e4  cmpw 4, 3
  005d6e8  std 3, 10016(1)
  005d6ec  bf 0, 0x5e318
  005d6f0  ld 3, 10080(1)
  005d6f4  sldi 3, 3, 2
  005d6f8  std 3, 10088(1)
  005d6fc  ld 5, 10096(1)
  005d700  lis 3, 164
  005d704  ld 6, 10088(1)
  005d708  slwi 5, 5, 8
  005d70c  addic 3, 3, -28384
  005d710  addc 5, 6, 5
  005d714  addic 4, 3, 16384
  005d718  addc 3, 5, 3
  005d71c  ori 16, 14, 0
  005d720  clrldi 3, 3, 32
  005d724  lhz 5, 0(3)
  005d728  std 3, 10056(1)
  005d72c  extsh 5, 5
  005d730  lbz 3, 2(3)
  005d734  sldi 5, 5, 5
  005d738  cmpw 3, 16
  005d73c  addc 4, 4, 5
  005d740  clrldi 3, 4, 32
  005d744  std 3, 10064(1)
  005d748  bf 1, 0x5e2f4
  005d74c  ori 15, 14, 0
  005d750  lis 3, 164
  005d754  ld 4, 10064(1)
  005d758  lwz 3, -28512(3)
  005d75c  ld 5, 10032(1)
  005d760  lhzx 4, 4, 15
  005d764  extsh 4, 4
  005d768  sldi 4, 4, 8
  005d76c  addc 23, 3, 4
  005d770  clrldi 23, 23, 32
  005d774  cmpw 23, 5
  005d778  bt 2, 0x5e2dc
  005d77c  lwz 3, 148(23)
  005d780  cmpwi 3, 0
  005d784  bt 2, 0x5e2dc
  005d788  ld 21, 10048(1)
  005d78c  lwz 4, 156(23)
  005d790  lwz 21, 16(21)
  005d794  cmpw 4, 21
  005d798  bt 2, 0x5e2dc
  005d79c  lfs 1, 0(23)
  005d7a0  lfs 2, 4(23)
  005d7a4  addic 4, 1, 380
  005d7a8  lfs 3, 12(23)
  005d7ac  lfs 4, 200(1)
  005d7b0  lfs 5, 204(1)
  005d7b4  fadds 3, 14, 3
  005d7b8  fsubs 1, 1, 4
  005d7bc  fsubs 2, 2, 5
  005d7c0  lfs 4, 8(23)
  005d7c4  lfs 5, 208(1)
  005d7c8  lfs 31, 10040(1)
  005d7cc  fsubs 6, 4, 5
  005d7d0  fadds 7, 4, 3
  005d7d4  fmuls 8, 1, 1
  005d7d8  fmuls 10, 2, 2
  005d7dc  fmuls 9, 3, 3
  005d7e0  stfs 1, 0(4)
  005d7e4  fsubs 3, 3, 4
  005d7e8  stfs 2, 4(4)
  005d7ec  stfs 6, 8(4)
  005d7f0  fsubs 2, 7, 5
  005d7f4  fadds 4, 8, 10
  005d7f8  fsubs 1, 3, 5
  005d7fc  fcmpu 1, 2, 31
  005d800  fcmpu 0, 4, 9
  005d804  crorc 2, 1, 5
  005d808  bt 2, 0x5e2dc
  005d80c  fcmpu 0, 1, 31
  005d810  cror 6, 1, 2
  005d814  bt 6, 0x5e2dc
  005d818  lwz 4, 4(3)
  005d81c  rlwinm 19, 17, 0, 29, 29
  005d820  srawi 18, 4, 5
  005d824  cmpwi 19, 0
  005d828  addze 18, 18
  005d82c  bt 2, 0x5d83c
  005d830  lhz 3, 0(3)
  005d834  extsh 3, 3
  005d838  b 0x5d844
  005d83c  lhz 3, 2(3)
  005d840  extsh 3, 3
  005d844  lwz 4, 148(23)
  005d848  cmpwi 3, 0
  005d84c  stw 21, 156(23)
  005d850  ori 20, 14, 0
  005d854  lwz 21, 12(4)
  005d858  bt 2, 0x5d92c
  005d85c  rlwinm 5, 17, 0, 30, 30
  005d860  ori 4, 14, 0
  005d864  cmpwi 5, 1
  005d868  bf 0, 0x5d870
  005d86c  li 4, 1
  005d870  cmpw 21, 4
  005d874  bt 2, 0x5e2dc
  005d878  lis 20, 161
  005d87c  lis 6, 161
  005d880  ori 4, 14, 0
  005d884  addic 20, 20, 2560
  005d888  addic 6, 6, 2496
  005d88c  slwi 5, 4, 3
  005d890  lwz 7, 168(23)
  005d894  extsw 5, 5
  005d898  lwzx 5, 6, 5
  005d89c  cmpw 5, 7
  005d8a0  bf 2, 0x5d8bc
  005d8a4  sldi 3, 4, 2
  005d8a8  subfic 4, 3, 0
  005d8ac  sldi 3, 3, 9
  005d8b0  addc 3, 4, 3
  005d8b4  addc 20, 20, 3
  005d8b8  b 0x5d92c
  005d8bc  addic 4, 4, 1
  005d8c0  cmpwi 4, 8
  005d8c4  bt 0, 0x5d88c
  005d8c8  ld 5, 10048(1)
  005d8cc  ori 4, 3, 0
  005d8d0  lwz 3, 12(5)
  005d8d4  slwi 8, 3, 3
  005d8d8  addic 9, 3, 1
  005d8dc  addc 6, 6, 8
  005d8e0  srawi 8, 9, 3
  005d8e4  sldi 3, 3, 2
  005d8e8  addze 8, 8
  005d8ec  sldi 10, 3, 9
  005d8f0  sldi 8, 8, 3
  005d8f4  clrldi 6, 6, 32
  005d8f8  subfic 3, 3, 0
  005d8fc  subc 8, 9, 8
  005d900  addc 9, 3, 10
  005d904  ori 3, 23, 0
  005d908  addc 20, 20, 9
  005d90c  stw 8, 12(5)
  005d910  stw 7, 0(6)
  005d914  clrldi 20, 20, 32
  005d918  lwz 7, 16(5)
  005d91c  ori 5, 20, 0
  005d920  stw 7, 4(6)
  005d924  bl 0xf595c
  005d928  nop
  005d92c  lfs 1, 16(23)
  005d930  addic 3, 1, 368
  005d934  lfs 2, 20(23)
  005d938  cmpwi 21, 0
  005d93c  lfs 3, 24(23)
  005d940  fmuls 1, 1, 16
  005d944  fmuls 2, 2, 16
  005d948  lfs 17, 192(23)
  005d94c  fmuls 3, 3, 16
  005d950  lfs 18, 196(23)
  005d954  lfs 19, 200(23)
  005d958  lfs 20, 208(23)
  005d95c  lfs 21, 212(23)
  005d960  lfs 22, 216(23)
  005d964  lfs 23, 224(23)
  005d968  lfs 24, 228(23)
  005d96c  lfs 25, 232(23)
  005d970  stfs 1, 0(3)
  005d974  stfs 2, 4(3)
  005d978  stfs 3, 8(3)
  005d97c  bt 2, 0x5dc0c
  005d980  lfs 4, 200(1)
  005d984  lfs 5, 204(1)
  005d988  addic 3, 1, 392
  005d98c  fsubs 1, 4, 1
  005d990  addic 5, 1, 404
  005d994  lfs 4, 208(1)
  005d998  fsubs 2, 5, 2
  005d99c  addic 7, 1, 428
  005d9a0  fsubs 3, 4, 3
  005d9a4  addic 6, 1, 416
  005d9a8  addic 22, 1, 2820
  005d9ac  li 4, 256
  005d9b0  fadds 4, 1, 14
  005d9b4  fadds 5, 2, 14
  005d9b8  fsubs 7, 1, 14
  005d9bc  fadds 6, 3, 14
  005d9c0  stfs 1, 0(3)
  005d9c4  fsubs 8, 2, 14
  005d9c8  stfs 2, 4(3)
  005d9cc  fsubs 9, 3, 14
  005d9d0  stfs 3, 8(3)
  005d9d4  ori 3, 22, 0
  005d9d8  fadds 1, 4, 31
  005d9dc  fadds 2, 5, 31
  005d9e0  fadds 3, 6, 15
  005d9e4  stfs 7, 0(5)
  005d9e8  stfs 8, 4(5)
  005d9ec  stfs 9, 8(5)
  005d9f0  stfs 4, 0(7)
  005d9f4  stfs 5, 4(7)
  005d9f8  stfs 6, 8(7)
  005d9fc  stfs 1, 0(6)
  005da00  stfs 2, 4(6)
  005da04  stfs 3, 8(6)
  005da08  addic 4, 4, -1
  005da0c  stfs 31, 0(3)
  005da10  stfs 31, 4(3)
  005da14  cmpwi 4, 0
  005da18  stfs 31, 8(3)
  005da1c  addic 3, 3, 12
  005da20  bf 2, 0x5da08
  005da24  lfs 1, 44(23)
  005da28  addic 3, 1, 596
  005da2c  addic 5, 1, 608
  005da30  fmuls 2, 17, 1
  005da34  fmuls 3, 18, 1
  005da38  addic 4, 1, 620
  005da3c  fmuls 4, 19, 1
  005da40  addic 6, 1, 664
  005da44  fmuls 5, 20, 1
  005da48  fmuls 6, 21, 1
  005da4c  fmuls 7, 22, 1
  005da50  fmuls 8, 23, 1
  005da54  fmuls 9, 24, 1
  005da58  fmuls 1, 25, 1
  005da5c  addic 10, 1, 1796
  005da60  addic 11, 1, 168
  005da64  stfs 2, 0(3)
  005da68  stfs 3, 4(3)
  005da6c  stfs 4, 8(3)
  005da70  stfs 5, 0(5)
  005da74  stfs 6, 4(5)
  005da78  addic 3, 6, 12
  005da7c  stfs 7, 8(5)
  005da80  stfs 8, 0(4)
  005da84  stfs 9, 4(4)
  005da88  addic 5, 6, 24
  005da8c  stfs 1, 8(4)
  005da90  stfs 2, 0(6)
  005da94  stfs 3, 4(6)
  005da98  stfs 4, 8(6)
  005da9c  stfs 5, 0(3)
  005daa0  stfs 6, 4(3)
  005daa4  stfs 7, 8(3)
  005daa8  stfs 8, 0(5)
  005daac  stfs 9, 4(5)
  005dab0  stfs 1, 8(5)
  005dab4  lfs 1, 404(1)
  005dab8  lfs 2, 412(1)
  005dabc  stfs 1, 56(1)
  005dac0  stfs 2, 64(1)
  005dac4  lfs 1, 416(1)
  005dac8  lfs 2, 424(1)
  005dacc  stfs 1, 72(1)
  005dad0  addic 12, 1, 172
  005dad4  stfs 2, 80(1)
  005dad8  lwz 3, 664(1)
  005dadc  lwz 4, 672(1)
  005dae0  stw 3, 88(1)
  005dae4  lwz 3, 680(1)
  005dae8  stw 4, 96(1)
  005daec  stw 3, 104(1)
  005daf0  lfs 1, 408(1)
  005daf4  lfs 2, 420(1)
  005daf8  stfs 1, 60(1)
  005dafc  stfs 2, 76(1)
  005db00  lwz 3, 668(1)
  005db04  lwz 4, 676(1)
  005db08  stw 3, 92(1)
  005db0c  lwz 5, 684(1)
  005db10  ori 3, 23, 0
  005db14  ld 6, 56(1)
  005db18  ld 7, 64(1)
  005db1c  stw 4, 100(1)
  005db20  ld 8, 72(1)
  005db24  ld 9, 80(1)
  005db28  ori 4, 6, 0
  005db2c  lwz 31, 688(1)
  005db30  ori 6, 8, 0
  005db34  lwz 30, 692(1)
  005db38  stw 5, 108(1)
  005db3c  lwz 29, 696(1)
  005db40  ori 5, 7, 0
  005db44  stw 31, 112(1)
  005db48  ori 7, 9, 0
  005db4c  stw 30, 116(1)
  005db50  ld 8, 88(1)
  005db54  ld 9, 96(1)
  005db58  stw 29, 120(1)
  005db5c  ld 31, 104(1)
  005db60  std 22, 128(1)
  005db64  std 10, 136(1)
  005db68  std 11, 144(1)
  005db6c  std 12, 152(1)
  005db70  ori 10, 31, 0
  005db74  bl 0x564d0
  005db78  lwz 3, 172(1)
  005db7c  ori 24, 14, 0
  005db80  cmpw 3, 24
  005db84  bf 1, 0x5dc0c
  005db88  ori 25, 14, 0
  005db8c  lfs 1, 368(1)
  005db90  lfs 2, 376(1)
  005db94  srawi 3, 21, 3
  005db98  stfs 1, 88(1)
  005db9c  clrldi 10, 17, 32
  005dba0  stfs 2, 96(1)
  005dba4  addze 7, 3
  005dba8  lwz 4, 168(1)
  005dbac  addic 6, 1, 700
  005dbb0  lfs 1, 372(1)
  005dbb4  extsw 7, 7
  005dbb8  addc 3, 4, 25
  005dbbc  stfs 1, 92(1)
  005dbc0  lfs 1, 392(1)
  005dbc4  clrldi 3, 3, 32
  005dbc8  lfs 2, 396(1)
  005dbcc  addic 5, 1, 1796
  005dbd0  stfs 1, 112(1)
  005dbd4  ori 4, 22, 0
  005dbd8  lfs 3, 400(1)
  005dbdc  fmr 1, 15
  005dbe0  stfs 2, 116(1)
  005dbe4  stfs 3, 120(1)
  005dbe8  std 23, 136(1)
  005dbec  ld 8, 88(1)
  005dbf0  ld 9, 96(1)
  005dbf4  bl 0x5bdf8
  005dbf8  addic 24, 24, 1
  005dbfc  lwz 3, 172(1)
  005dc00  addic 25, 25, 4
  005dc04  cmpw 24, 3
  005dc08  bt 0, 0x5db8c
  005dc0c  rlwinm 3, 17, 0, 30, 30
  005dc10  cmpwi 3, 0
  005dc14  bf 2, 0x5e2dc
  005dc18  lwz 30, 148(23)
  005dc1c  cmpwi 19, 1
  005dc20  ori 27, 14, 0
  005dc24  addic 30, 30, 16
  005dc28  bf 0, 0x5dc30
  005dc2c  li 27, 1
  005dc30  ori 29, 14, 0
  005dc34  addic 27, 27, 1
  005dc38  lwz 28, 152(23)
  005dc3c  cmpw 18, 29
  005dc40  bf 1, 0x5e2dc
  005dc44  clrlwi 3, 28, 31
  005dc48  srawi 28, 28, 1
  005dc4c  cmpwi 3, 0
  005dc50  lbz 3, 0(30)
  005dc54  lhz 4, 2(30)
  005dc58  cmpwi 1, 3, 1
  005dc5c  extsh 4, 4
  005dc60  cmpwi 6, 3, 0
  005dc64  cmpwi 7, 3, 2
  005dc68  bf 2, 0x5e2cc
  005dc6c  and 4, 4, 27
  005dc70  cmpwi 4, 0
  005dc74  bt 2, 0x5e2cc
  005dc78  bt 5, 0x5dc84
  005dc7c  bf 25, 0x5dff4
  005dc80  b 0x5dc94
  005dc84  bf 29, 0x5dd94
  005dc88  cmpwi 3, 3
  005dc8c  bf 1, 0x5debc
  005dc90  b 0x5dff4
  005dc94  addic 3, 30, 16
  005dc98  addic 5, 1, 632
  005dc9c  addic 4, 1, 440
  005dca0  lfs 1, 0(3)
  005dca4  lfs 2, 4(3)
  005dca8  lfs 3, 8(3)
  005dcac  lfs 4, 12(3)
  005dcb0  stfs 1, 0(5)
  005dcb4  stfs 2, 4(5)
  005dcb8  stfs 3, 8(5)
  005dcbc  stfs 4, 12(5)
  005dcc0  stfs 1, 0(4)
  005dcc4  stfs 2, 4(4)
  005dcc8  stfs 3, 8(4)
  005dccc  lfs 5, 44(23)
  005dcd0  addic 3, 1, 452
  005dcd4  fmuls 1, 1, 5
  005dcd8  fmuls 2, 2, 5
  005dcdc  fmuls 3, 3, 5
  005dce0  addic 9, 1, 700
  005dce4  ori 10, 30, 0
  005dce8  fmuls 6, 17, 1
  005dcec  fmuls 7, 20, 2
  005dcf0  fmuls 8, 18, 1
  005dcf4  fmuls 9, 21, 2
  005dcf8  fmuls 1, 19, 1
  005dcfc  fmuls 2, 22, 2
  005dd00  fmuls 10, 23, 3
  005dd04  fmuls 11, 24, 3
  005dd08  fmuls 3, 25, 3
  005dd0c  fadds 6, 6, 7
  005dd10  fadds 7, 8, 9
  005dd14  fadds 1, 1, 2
  005dd18  fmuls 2, 4, 5
  005dd1c  fadds 6, 6, 10
  005dd20  fadds 7, 7, 11
  005dd24  fadds 1, 1, 3
  005dd28  stfs 6, 0(3)
  005dd2c  stfs 7, 4(3)
  005dd30  stfs 1, 8(3)
  005dd34  lfs 3, 368(1)
  005dd38  lfs 4, 376(1)
  005dd3c  fadds 3, 6, 3
  005dd40  fadds 1, 1, 4
  005dd44  lfs 4, 200(1)
  005dd48  lfs 5, 208(1)
  005dd4c  stfs 4, 48(1)
  005dd50  lfs 4, 372(1)
  005dd54  stfs 5, 56(1)
  005dd58  fadds 4, 7, 4
  005dd5c  lfs 5, 204(1)
  005dd60  stfs 5, 52(1)
  005dd64  stfs 3, 64(1)
  005dd68  stfs 1, 72(1)
  005dd6c  std 23, 112(1)
  005dd70  fmr 1, 14
  005dd74  fmr 3, 15
  005dd78  stfs 4, 68(1)
  005dd7c  ld 3, 48(1)
  005dd80  ld 4, 56(1)
  005dd84  ld 5, 64(1)
  005dd88  ld 6, 72(1)
  005dd8c  bl 0x5bc20
  005dd90  b 0x5e2cc
  005dd94  addic 3, 30, 4
  005dd98  addic 4, 30, 12
  005dd9c  addic 6, 30, 16
  005dda0  addic 5, 1, 464
  005dda4  lwz 3, 0(3)
  005dda8  lfs 2, 0(4)
  005ddac  slwi 3, 3, 4
  005ddb0  lfs 1, 0(6)
  005ddb4  addc 3, 20, 3
  005ddb8  lfs 3, 4(6)
  005ddbc  clrldi 3, 3, 32
  005ddc0  lfs 4, 8(6)
  005ddc4  stfs 1, 0(5)
  005ddc8  stfs 3, 4(5)
  005ddcc  stfs 4, 8(5)
  005ddd0  lfs 5, 0(3)
  005ddd4  lfs 6, 4(3)
  005ddd8  fmuls 5, 5, 16
  005dddc  lfs 7, 8(3)
  005dde0  fmuls 6, 6, 16
  005dde4  lfs 8, 44(23)
  005dde8  fmuls 7, 7, 16
  005ddec  addic 3, 1, 476
  005ddf0  fmuls 2, 2, 8
  005ddf4  addic 9, 1, 700
  005ddf8  ori 10, 30, 0
  005ddfc  fadds 1, 5, 1
  005de00  fadds 3, 6, 3
  005de04  fadds 4, 7, 4
  005de08  fmuls 1, 1, 8
  005de0c  fmuls 3, 3, 8
  005de10  fmuls 4, 4, 8
  005de14  fmuls 5, 17, 1
  005de18  fmuls 6, 20, 3
  005de1c  fmuls 7, 18, 1
  005de20  fmuls 9, 21, 3
  005de24  fmuls 1, 19, 1
  005de28  fmuls 3, 22, 3
  005de2c  fmuls 10, 23, 4
  005de30  fmuls 11, 24, 4
  005de34  fmuls 4, 25, 4
  005de38  fadds 5, 5, 6
  005de3c  fadds 6, 7, 9
  005de40  fadds 1, 1, 3
  005de44  fadds 3, 5, 10
  005de48  fadds 5, 6, 11
  005de4c  fadds 1, 1, 4
  005de50  stfs 3, 0(3)
  005de54  stfs 5, 4(3)
  005de58  stfs 1, 8(3)
  005de5c  lfs 4, 368(1)
  005de60  lfs 6, 376(1)
  005de64  fadds 3, 3, 4
  005de68  fadds 1, 1, 6
  005de6c  lfs 4, 200(1)
  005de70  lfs 6, 208(1)
  005de74  stfs 4, 48(1)
  005de78  lfs 4, 372(1)
  005de7c  stfs 6, 56(1)
  005de80  fadds 4, 5, 4
  005de84  lfs 5, 204(1)
  005de88  stfs 5, 52(1)
  005de8c  stfs 3, 64(1)
  005de90  stfs 1, 72(1)
  005de94  fmr 3, 15
  005de98  std 23, 112(1)
  005de9c  fmr 1, 14
  005dea0  stfs 4, 68(1)
  005dea4  ld 3, 48(1)
  005dea8  ld 4, 56(1)
  005deac  ld 5, 64(1)
  005deb0  ld 6, 72(1)
  005deb4  bl 0x5bc20
  005deb8  b 0x5e2cc
  005debc  addic 3, 30, 4
  005dec0  addic 5, 30, 16
  005dec4  addic 4, 1, 648
  005dec8  addic 6, 1, 488
  005decc  lfs 1, 0(3)
  005ded0  lfs 2, 0(5)
  005ded4  lfs 3, 4(5)
  005ded8  lfs 4, 8(5)
  005dedc  lfs 5, 12(5)
  005dee0  stfs 2, 0(4)
  005dee4  stfs 3, 4(4)
  005dee8  stfs 4, 8(4)
  005deec  stfs 5, 12(4)
  005def0  stfs 2, 0(6)
  005def4  stfs 3, 4(6)
  005def8  stfs 4, 8(6)
  005defc  lfs 6, 44(23)
  005df00  addic 3, 1, 500
  005df04  fmuls 2, 2, 6
  005df08  fmuls 3, 3, 6
  005df0c  fmuls 4, 4, 6
  005df10  fmuls 1, 1, 6
  005df14  fmuls 7, 17, 2
  005df18  fmuls 8, 20, 3
  005df1c  fmuls 9, 18, 2
  005df20  fmuls 10, 21, 3
  005df24  fmuls 2, 19, 2
  005df28  fmuls 3, 22, 3
  005df2c  fmuls 11, 23, 4
  005df30  fmuls 12, 24, 4
  005df34  fmuls 4, 25, 4
  005df38  fadds 7, 7, 8
  005df3c  fadds 8, 9, 10
  005df40  fadds 2, 2, 3
  005df44  fadds 3, 7, 11
  005df48  fadds 7, 8, 12
  005df4c  fadds 4, 2, 4
  005df50  fmuls 2, 5, 6
  005df54  stfs 3, 0(3)
  005df58  stfs 7, 4(3)
  005df5c  stfs 4, 8(3)
  005df60  lfs 5, 376(1)
  005df64  lfs 6, 208(1)
  005df68  fadds 5, 4, 5
  005df6c  lfs 4, 368(1)
  005df70  lfs 8, 372(1)
  005df74  fadds 3, 3, 4
  005df78  fadds 4, 7, 8
  005df7c  fcmpu 0, 6, 5
  005df80  cror 6, 0, 2
  005df84  bt 6, 0x5df8c
  005df88  b 0x5df90
  005df8c  fmr 6, 5
  005df90  fadds 1, 5, 1
  005df94  fcmpu 0, 1, 6
  005df98  cror 6, 1, 2
  005df9c  bt 6, 0x5dfa4
  005dfa0  fmr 6, 1
  005dfa4  lfs 1, 200(1)
  005dfa8  addic 9, 1, 700
  005dfac  lfs 5, 208(1)
  005dfb0  ori 10, 30, 0
  005dfb4  stfs 1, 48(1)
  005dfb8  stfs 5, 56(1)
  005dfbc  stfs 3, 64(1)
  005dfc0  fmr 1, 14
  005dfc4  stfs 6, 72(1)
  005dfc8  lfs 3, 204(1)
  005dfcc  stfs 4, 68(1)
  005dfd0  stfs 3, 52(1)
  005dfd4  std 23, 112(1)
  005dfd8  fmr 3, 15
  005dfdc  ld 3, 48(1)
  005dfe0  ld 4, 56(1)
  005dfe4  ld 5, 64(1)
  005dfe8  ld 6, 72(1)
  005dfec  bl 0x5bc20
  005dff0  b 0x5e2cc
  005dff4  lhz 3, 4(30)
  005dff8  lhz 4, 6(30)
  005dffc  extsh 3, 3
  005e000  extsh 4, 4
  005e004  lfs 26, 44(23)
  005e008  sldi 3, 3, 4
  005e00c  sldi 4, 4, 4
  005e010  addc 3, 20, 3
  005e014  addc 4, 20, 4
  005e018  clrldi 3, 3, 32
  005e01c  clrldi 4, 4, 32
  005e020  lfs 1, 0(3)
  005e024  lfs 2, 4(3)
  005e028  fmuls 1, 1, 16
  005e02c  lfs 3, 0(4)
  005e030  fmuls 2, 2, 16
  005e034  lfs 4, 4(4)
  005e038  fmuls 3, 3, 16
  005e03c  lfs 5, 8(3)
  005e040  fmuls 4, 4, 16
  005e044  lfs 6, 8(4)
  005e048  fmuls 5, 5, 16
  005e04c  addic 3, 30, 12
  005e050  fmuls 6, 6, 16
  005e054  addic 4, 1, 548
  005e058  fmuls 1, 1, 26
  005e05c  fmuls 2, 2, 26
  005e060  fmuls 3, 3, 26
  005e064  fmuls 4, 4, 26
  005e068  fmuls 5, 5, 26
  005e06c  fmuls 6, 6, 26
  005e070  fmuls 7, 17, 1
  005e074  fmuls 8, 20, 2
  005e078  fmuls 9, 18, 1
  005e07c  fmuls 10, 21, 2
  005e080  fmuls 1, 19, 1
  005e084  fmuls 2, 22, 2
  005e088  fmuls 12, 17, 3
  005e08c  fmuls 13, 20, 4
  005e090  fmuls 31, 18, 3
  005e094  fmuls 11, 23, 5
  005e098  fmuls 0, 24, 5
  005e09c  fadds 7, 7, 8
  005e0a0  fmuls 8, 21, 4
  005e0a4  fadds 9, 9, 10
  005e0a8  fmuls 5, 25, 5
  005e0ac  lfs 10, 0(3)
  005e0b0  fadds 1, 1, 2
  005e0b4  addic 3, 1, 536
  005e0b8  fmuls 2, 19, 3
  005e0bc  fmuls 3, 22, 4
  005e0c0  fadds 4, 12, 13
  005e0c4  fmuls 12, 23, 6
  005e0c8  fmuls 13, 24, 6
  005e0cc  fmuls 6, 25, 6
  005e0d0  fadds 8, 31, 8
  005e0d4  fadds 7, 7, 11
  005e0d8  fadds 0, 9, 0
  005e0dc  fadds 1, 1, 5
  005e0e0  fadds 2, 2, 3
  005e0e4  fadds 3, 4, 12
  005e0e8  fadds 4, 8, 13
  005e0ec  stfs 7, 0(3)
  005e0f0  stfs 0, 4(3)
  005e0f4  fadds 2, 2, 6
  005e0f8  stfs 1, 8(3)
  005e0fc  addic 3, 1, 512
  005e100  stfs 3, 0(4)
  005e104  fmuls 26, 10, 26
  005e108  stfs 4, 4(4)
  005e10c  stfs 2, 8(4)
  005e110  lfs 5, 368(1)
  005e114  lfs 6, 372(1)
  005e118  fadds 31, 7, 5
  005e11c  fadds 0, 0, 6
  005e120  fadds 12, 3, 5
  005e124  fadds 11, 4, 6
  005e128  lfs 3, 376(1)
  005e12c  fadds 13, 1, 3
  005e130  fadds 27, 2, 3
  005e134  fsubs 12, 12, 31
  005e138  fsubs 11, 11, 0
  005e13c  fsubs 27, 27, 13
  005e140  fmuls 1, 12, 12
  005e144  fmuls 2, 11, 11
  005e148  stfs 12, 0(3)
  005e14c  stfs 11, 4(3)
  005e150  lfs 3, 10044(1)
  005e154  stfs 27, 8(3)
  005e158  lfs 29, 200(1)
  005e15c  addic 3, 1, 524
  005e160  lfs 28, 208(1)
  005e164  lfs 30, 204(1)
  005e168  fadds 1, 1, 2
  005e16c  fsubs 2, 29, 31
  005e170  fsubs 4, 30, 0
  005e174  fsubs 7, 28, 13
  005e178  fabs 5, 1
  005e17c  fmuls 6, 2, 12
  005e180  fmuls 8, 4, 11
  005e184  stfs 2, 0(3)
  005e188  stfs 4, 4(3)
  005e18c  stfs 7, 8(3)
  005e190  fcmpu 0, 5, 3
  005e194  fadds 2, 6, 8
  005e198  bt 1, 0x5e22c
  005e19c  fadds 31, 31, 12
  005e1a0  fadds 1, 0, 11
  005e1a4  addic 3, 1, 560
  005e1a8  fadds 2, 13, 27
  005e1ac  fcmpu 0, 13, 28
  005e1b0  stfs 31, 0(3)
  005e1b4  stfs 1, 4(3)
  005e1b8  cror 6, 0, 2
  005e1bc  stfs 2, 8(3)
  005e1c0  bt 6, 0x5e1cc
  005e1c4  fmr 28, 13
  005e1c8  b 0x5e1cc
  005e1cc  fmr 3, 28
  005e1d0  fcmpu 0, 2, 3
  005e1d4  cror 6, 1, 2
  005e1d8  bt 6, 0x5e1e0
  005e1dc  fmr 3, 2
  005e1e0  lfs 2, 208(1)
  005e1e4  stfs 31, 64(1)
  005e1e8  addic 9, 1, 700
  005e1ec  stfs 2, 56(1)
  005e1f0  ori 10, 30, 0
  005e1f4  stfs 3, 72(1)
  005e1f8  fmr 2, 26
  005e1fc  stfs 1, 68(1)
  005e200  fmr 3, 15
  005e204  stfs 29, 48(1)
  005e208  fmr 1, 14
  005e20c  stfs 30, 52(1)
  005e210  std 23, 112(1)
  005e214  ld 5, 64(1)
  005e218  ld 4, 56(1)
  005e21c  ld 6, 72(1)
  005e220  ld 3, 48(1)
  005e224  bl 0x5bc20
  005e228  b 0x5e2cc
  005e22c  fdivs 2, 2, 1
  005e230  lfs 1, 10040(1)
  005e234  fcmpu 0, 2, 1
  005e238  bt 1, 0x5e240
  005e23c  fmr 2, 1
  005e240  lfs 1, 10044(1)
  005e244  fcmpu 0, 2, 1
  005e248  bt 0, 0x5e250
  005e24c  fmr 2, 1
  005e250  fmuls 1, 12, 2
  005e254  addic 3, 1, 584
  005e258  fmuls 3, 27, 2
  005e25c  stfs 28, 56(1)
  005e260  fmuls 2, 11, 2
  005e264  stfs 29, 48(1)
  005e268  addic 4, 1, 572
  005e26c  addic 9, 1, 700
  005e270  ori 10, 30, 0
  005e274  fadds 4, 31, 1
  005e278  fadds 5, 13, 3
  005e27c  fadds 6, 0, 2
  005e280  stfs 1, 0(3)
  005e284  stfs 2, 4(3)
  005e288  stfs 3, 8(3)
  005e28c  fmr 1, 14
  005e290  stfs 30, 52(1)
  005e294  fmr 2, 26
  005e298  fmr 3, 15
  005e29c  stfs 4, 64(1)
  005e2a0  stfs 5, 72(1)
  005e2a4  stfs 4, 0(4)
  005e2a8  stfs 6, 4(4)
  005e2ac  stfs 5, 8(4)
  005e2b0  ld 4, 56(1)
  005e2b4  stfs 6, 68(1)
  005e2b8  std 23, 112(1)
  005e2bc  ld 3, 48(1)
  005e2c0  ld 5, 64(1)
  005e2c4  ld 6, 72(1)
  005e2c8  bl 0x5bc20
  005e2cc  addic 29, 29, 1
  005e2d0  addic 30, 30, 32
  005e2d4  cmpw 29, 18
  005e2d8  bt 0, 0x5dc44
  005e2dc  ld 3, 10056(1)
  005e2e0  addic 16, 16, 1
  005e2e4  addic 15, 15, 2
  005e2e8  lbz 3, 2(3)
  005e2ec  cmpw 16, 3
  005e2f0  bt 0, 0x5d750
  005e2f4  ld 3, 10088(1)
  005e2f8  ld 4, 10080(1)
  005e2fc  addic 3, 3, 4
  005e300  ld 5, 10016(1)
  005e304  addic 4, 4, 1
  005e308  cmpw 4, 5
  005e30c  std 3, 10088(1)
  005e310  std 4, 10080(1)
  005e314  bt 0, 0x5d6fc
  005e318  ld 3, 10096(1)
  005e31c  ld 4, 10024(1)
  005e320  addic 3, 3, 1
  005e324  cmpw 3, 4
  005e328  std 3, 10096(1)
  005e32c  bt 0, 0x5d6d4
  005e330  lwz 3, 700(1)
  005e334  cmpwi 3, 0
  005e338  bf 2, 0x5e344
  005e33c  ori 3, 14, 0
  005e340  b 0x5e4dc
  005e344  lis 4, 6
  005e348  addi 4, 4, -14612
  005e34c  lfs 7, 24(4)
  005e350  lfs 12, 720(1)
  005e354  fmr 6, 7
  005e358  lfs 1, 712(1)
  005e35c  fmuls 10, 12, 7
  005e360  lfs 2, 716(1)
  005e364  lfs 3, 736(1)
  005e368  lfs 4, 740(1)
  005e36c  fmuls 8, 1, 7
  005e370  lfs 5, 744(1)
  005e374  fmuls 3, 3, 7
  005e378  lfs 9, 748(1)
  005e37c  lfs 11, 752(1)
  005e380  fmuls 28, 9, 7
  005e384  lfs 13, 756(1)
  005e388  lfs 0, 760(1)
  005e38c  fmuls 30, 5, 7
  005e390  fmuls 9, 2, 6
  005e394  lfs 31, 764(1)
  005e398  lfs 29, 768(1)
  005e39c  fmuls 4, 4, 6
  005e3a0  lfs 5, 208(1)
  005e3a4  fmuls 27, 11, 6
  005e3a8  ld 5, 10048(1)
  005e3ac  lfs 26, 724(1)
  005e3b0  fsubs 12, 12, 5
  005e3b4  lfs 25, 728(1)
  005e3b8  fmr 11, 15
  005e3bc  lfs 24, 732(1)
  005e3c0  fmuls 13, 13, 7
  005e3c4  fmuls 0, 0, 7
  005e3c8  stfs 8, 32(5)
  005e3cc  fmuls 31, 31, 6
  005e3d0  stfs 10, 40(5)
  005e3d4  fmuls 29, 29, 7
  005e3d8  stfs 9, 36(5)
  005e3dc  stfs 26, 64(5)
  005e3e0  stfs 25, 68(5)
  005e3e4  stfs 24, 72(5)
  005e3e8  stfs 3, 80(5)
  005e3ec  fcmpu 0, 12, 11
  005e3f0  stfs 4, 84(5)
  005e3f4  stfs 30, 88(5)
  005e3f8  stfs 28, 96(5)
  005e3fc  stfs 27, 100(5)
  005e400  stfs 13, 104(5)
  005e404  stfs 0, 112(5)
  005e408  lwz 6, 704(1)
  005e40c  stfs 31, 116(5)
  005e410  stfs 29, 120(5)
  005e414  stw 6, 24(5)
  005e418  stw 3, 28(5)
  005e41c  cror 6, 1, 2
  005e420  lfs 3, 200(1)
  005e424  lfs 4, 204(1)
  005e428  bt 6, 0x5e430
  005e42c  fmr 11, 12
  005e430  lfs 12, 10040(1)
  005e434  fcmpu 0, 11, 12
  005e438  bt 1, 0x5e440
  005e43c  fmr 11, 12
  005e440  fmr 13, 4
  005e444  lfs 4, 708(1)
  005e448  fsqrts 4, 4
  005e44c  lfs 0, 720(1)
  005e450  fsubs 5, 5, 0
  005e454  fsubs 1, 3, 1
  005e458  fsubs 2, 13, 2
  005e45c  fadds 3, 5, 11
  005e460  fcmpu 0, 4, 12
  005e464  bt 2, 0x5e488
  005e468  fdivs 4, 14, 4
  005e46c  fmuls 1, 1, 4
  005e470  fmuls 2, 2, 4
  005e474  fmuls 3, 3, 4
  005e478  stfs 1, 236(1)
  005e47c  stfs 2, 240(1)
  005e480  stfs 3, 244(1)
  005e484  b 0x5e4a4
  005e488  lfs 4, 28(4)
  005e48c  fmuls 1, 1, 4
  005e490  fmuls 2, 2, 4
  005e494  fmuls 3, 3, 4
  005e498  stfs 1, 236(1)
  005e49c  stfs 2, 240(1)
  005e4a0  stfs 3, 244(1)
  005e4a4  lfs 1, 244(1)
  005e4a8  lfs 2, 236(1)
  005e4ac  fsubs 1, 1, 11
  005e4b0  lfs 3, 240(1)
  005e4b4  fmuls 2, 2, 7
  005e4b8  li 3, 1
  005e4bc  fmuls 3, 3, 6
  005e4c0  fmuls 1, 1, 7
  005e4c4  fadds 2, 2, 8
  005e4c8  fadds 3, 3, 9
  005e4cc  fadds 1, 1, 10
  005e4d0  stfs 2, 48(5)
  005e4d4  stfs 3, 52(5)
  005e4d8  stfs 1, 56(5)
  005e4dc  li 0, 10128
  005e4e0  lvx 30, 1, 0
  005e4e4  addic 0, 0, 16
  005e4e8  lvx 31, 1, 0
  005e4ec  ld 0, 10464(1)
  005e4f0  mtlr 0
  005e4f4  lfd 14, 10304(1)
  005e4f8  lfd 15, 10312(1)
  005e4fc  lfd 16, 10320(1)
  005e500  lfd 17, 10328(1)
  005e504  lfd 18, 10336(1)
  005e508  lfd 19, 10344(1)
  005e50c  lfd 20, 10352(1)
  005e510  lfd 21, 10360(1)
  005e514  lfd 22, 10368(1)
  005e518  lfd 23, 10376(1)
  005e51c  lfd 24, 10384(1)
  005e520  lfd 25, 10392(1)
  005e524  lfd 26, 10400(1)
  005e528  lfd 27, 10408(1)
  005e52c  lfd 28, 10416(1)
  005e530  lfd 29, 10424(1)
  005e534  lfd 30, 10432(1)
  005e538  lfd 31, 10440(1)
  005e53c  ld 14, 10160(1)
  005e540  ld 15, 10168(1)
  005e544  ld 16, 10176(1)
  005e548  ld 17, 10184(1)
  005e54c  ld 18, 10192(1)
  005e550  ld 19, 10200(1)
  005e554  ld 20, 10208(1)
  005e558  ld 21, 10216(1)
  005e55c  ld 22, 10224(1)
  005e560  ld 23, 10232(1)
  005e564  ld 24, 10240(1)
  005e568  ld 25, 10248(1)
  005e56c  ld 26, 10256(1)
  005e570  ld 27, 10264(1)
  005e574  ld 28, 10272(1)
  005e578  ld 29, 10280(1)
  005e57c  ld 30, 10288(1)
  005e580  ld 31, 10296(1)
  005e584  addi 1, 1, 10448
  005e588  blr

CollMobySphere:   # 0x5e598, 0x11d0 bytes
  005e598  stdu 1, -5376(1)
  005e59c  mflr 0
  005e5a0  std 0, 5392(1)
  005e5a4  stfd 14, 5232(1)
  005e5a8  stfd 15, 5240(1)
  005e5ac  stfd 16, 5248(1)
  005e5b0  stfd 17, 5256(1)
  005e5b4  stfd 18, 5264(1)
  005e5b8  stfd 19, 5272(1)
  005e5bc  stfd 20, 5280(1)
  005e5c0  stfd 21, 5288(1)
  005e5c4  stfd 22, 5296(1)
  005e5c8  stfd 23, 5304(1)
  005e5cc  stfd 24, 5312(1)
  005e5d0  stfd 25, 5320(1)
  005e5d4  stfd 26, 5328(1)
  005e5d8  stfd 27, 5336(1)
  005e5dc  stfd 28, 5344(1)
  005e5e0  stfd 29, 5352(1)
  005e5e4  stfd 30, 5360(1)
  005e5e8  stfd 31, 5368(1)
  005e5ec  std 31, 5224(1)
  005e5f0  std 17, 5112(1)
  005e5f4  ori 31, 3, 0
  005e5f8  fmr 30, 1
  005e5fc  std 7, 5056(1)
  005e600  lis 17, 6
  005e604  std 22, 5152(1)
  005e608  addic 3, 1, 180
  005e60c  std 18, 5120(1)
  005e610  li 22, 0
  005e614  lfs 1, 0(31)
  005e618  std 6, 4992(1)
  005e61c  ori 18, 5, 0
  005e620  addi 17, 17, -6772
  005e624  std 30, 5216(1)
  005e628  stfs 1, 180(1)
  005e62c  std 29, 5208(1)
  005e630  std 28, 5200(1)
  005e634  std 27, 5192(1)
  005e638  std 26, 5184(1)
  005e63c  std 25, 5176(1)
  005e640  std 24, 5168(1)
  005e644  std 23, 5160(1)
  005e648  std 21, 5144(1)
  005e64c  std 20, 5136(1)
  005e650  std 19, 5128(1)
  005e654  std 16, 5104(1)
  005e658  std 15, 5096(1)
  005e65c  std 14, 5088(1)
  005e660  ori 30, 22, 0
  005e664  bl 0x5dd48c
  005e668  nop
  005e66c  cmpwi 3, 2
  005e670  bf 2, 0x5e678
  005e674  li 30, 1
  005e678  cmpwi 30, 0
  005e67c  bf 2, 0x5e6d8
  005e680  addic 3, 1, 176
  005e684  lfs 1, 4(31)
  005e688  ori 30, 22, 0
  005e68c  stfs 1, 176(1)
  005e690  bl 0x5dd48c
  005e694  nop
  005e698  cmpwi 3, 2
  005e69c  bf 2, 0x5e6a4
  005e6a0  li 30, 1
  005e6a4  cmpwi 30, 0
  005e6a8  bf 2, 0x5e6d8
  005e6ac  addic 3, 1, 172
  005e6b0  lfs 1, 8(31)
  005e6b4  ori 30, 22, 0
  005e6b8  stfs 1, 172(1)
  005e6bc  bl 0x5dd48c
  005e6c0  nop
  005e6c4  cmpwi 3, 2
  005e6c8  bf 2, 0x5e6d0
  005e6cc  li 30, 1
  005e6d0  cmpwi 30, 0
  005e6d4  bt 2, 0x5e6f0
  005e6d8  lis 3, 101
  005e6dc  addic 3, 3, 7036
  005e6e0  bl 0x4ff98c
  005e6e4  nop
  005e6e8  ori 3, 22, 0
  005e6ec  b 0x5f6c8
  005e6f0  lfs 6, 0(17)
  005e6f4  lfs 7, 0(31)
  005e6f8  addic 3, 1, 184
  005e6fc  lfs 8, 4(31)
  005e700  lfs 9, 8(31)
  005e704  fadds 2, 8, 30
  005e708  fsubs 5, 8, 30
  005e70c  fmuls 11, 7, 6
  005e710  fadds 3, 9, 30
  005e714  fsubs 10, 9, 30
  005e718  fmuls 8, 8, 6
  005e71c  fmuls 9, 9, 6
  005e720  fsubs 4, 7, 30
  005e724  fadds 1, 7, 30
  005e728  fmuls 7, 30, 6
  005e72c  fcmpu 7, 2, 6
  005e730  stfs 11, 0(3)
  005e734  stfs 8, 4(3)
  005e738  stfs 9, 8(3)
  005e73c  lfs 30, 4(17)
  005e740  fcmpu 6, 1, 6
  005e744  fcmpu 0, 4, 30
  005e748  fcmpu 1, 10, 30
  005e74c  bt 0, 0x5e75c
  005e750  fcmpu 0, 5, 30
  005e754  bt 0, 0x5e75c
  005e758  bf 4, 0x5e764
  005e75c  ori 3, 22, 0
  005e760  b 0x5f6c8
  005e764  bt 25, 0x5e77c
  005e768  bt 29, 0x5e77c
  005e76c  fcmpu 0, 3, 6
  005e770  stfs 6, 4972(1)
  005e774  cror 6, 0, 2
  005e778  bt 6, 0x5e784
  005e77c  ori 3, 22, 0
  005e780  b 0x5f6c8
  005e784  lis 16, 161
  005e788  addic 16, 16, 2368
  005e78c  lwz 19, 16(16)
  005e790  cmpwi 19, 0
  005e794  bf 0, 0x5e7a0
  005e798  ori 3, 22, 0
  005e79c  b 0x5f6c8
  005e7a0  fctiwz 3, 4
  005e7a4  addic 3, 19, 1
  005e7a8  fcmpu 0, 7, 30
  005e7ac  fctiwz 4, 5
  005e7b0  fctiwz 1, 1
  005e7b4  fctiwz 2, 2
  005e7b8  stw 3, 16(16)
  005e7bc  stfd 3, 5064(1)
  005e7c0  lwz 19, 5068(1)
  005e7c4  stfd 4, 5064(1)
  005e7c8  lwz 3, 5068(1)
  005e7cc  stfd 1, 5064(1)
  005e7d0  lwz 4, 5068(1)
  005e7d4  stfd 2, 5064(1)
  005e7d8  lwz 5, 5068(1)
  005e7dc  bt 1, 0x5e7e8
  005e7e0  ori 3, 22, 0
  005e7e4  b 0x5f6c8
  005e7e8  fmuls 1, 7, 7
  005e7ec  srawi 6, 19, 4
  005e7f0  stfs 7, 4980(1)
  005e7f4  srawi 4, 4, 4
  005e7f8  srawi 5, 5, 4
  005e7fc  srawi 3, 3, 4
  005e800  addic 5, 5, 1
  005e804  std 6, 5048(1)
  005e808  ori 19, 22, 0
  005e80c  std 4, 5040(1)
  005e810  cmpw 3, 5
  005e814  std 3, 5016(1)
  005e818  std 5, 5032(1)
  005e81c  stfs 1, 4976(1)
  005e820  bf 0, 0x5f62c
  005e824  ld 3, 5040(1)
  005e828  ld 4, 5048(1)
  005e82c  addic 3, 3, 1
  005e830  std 4, 5000(1)
  005e834  cmpw 4, 3
  005e838  std 3, 5024(1)
  005e83c  bf 0, 0x5f614
  005e840  ld 3, 5000(1)
  005e844  lfs 24, 4972(1)
  005e848  sldi 3, 3, 2
  005e84c  lfs 31, 4976(1)
  005e850  lfs 29, 4980(1)
  005e854  std 3, 5008(1)
  005e858  ld 4, 5016(1)
  005e85c  lis 3, 164
  005e860  ld 5, 5008(1)
  005e864  slwi 4, 4, 8
  005e868  addic 3, 3, -28384
  005e86c  addc 4, 5, 4
  005e870  ori 15, 22, 0
  005e874  addc 4, 4, 3
  005e878  clrldi 4, 4, 32
  005e87c  lhz 5, 0(4)
  005e880  std 4, 4984(1)
  005e884  extsh 5, 5
  005e888  lbz 4, 2(4)
  005e88c  sldi 5, 5, 5
  005e890  cmpw 4, 15
  005e894  addc 3, 3, 5
  005e898  addic 14, 3, 16384
  005e89c  clrldi 14, 14, 32
  005e8a0  bf 1, 0x5f5f0
  005e8a4  lis 3, 164
  005e8a8  lhz 4, 0(14)
  005e8ac  extsh 4, 4
  005e8b0  sldi 4, 4, 8
  005e8b4  lwz 3, -28512(3)
  005e8b8  ld 5, 4992(1)
  005e8bc  addc 26, 3, 4
  005e8c0  clrldi 26, 26, 32
  005e8c4  cmpw 26, 5
  005e8c8  bt 2, 0x5f5d8
  005e8cc  lwz 11, 148(26)
  005e8d0  cmpwi 11, 0
  005e8d4  bt 2, 0x5f5d8
  005e8d8  lwz 3, 156(26)
  005e8dc  lwz 23, 16(16)
  005e8e0  cmpw 3, 23
  005e8e4  bt 2, 0x5f5d8
  005e8e8  lfs 1, 0(26)
  005e8ec  lfs 2, 4(26)
  005e8f0  addic 3, 1, 196
  005e8f4  lfs 3, 184(1)
  005e8f8  lfs 4, 188(1)
  005e8fc  fsubs 1, 1, 3
  005e900  fsubs 2, 2, 4
  005e904  lfs 3, 8(26)
  005e908  lfs 4, 192(1)
  005e90c  lfs 5, 12(26)
  005e910  fsubs 3, 3, 4
  005e914  fadds 4, 29, 5
  005e918  fmuls 5, 1, 1
  005e91c  fmuls 6, 2, 2
  005e920  stfs 1, 0(3)
  005e924  stfs 2, 4(3)
  005e928  fmuls 7, 3, 3
  005e92c  fmuls 4, 4, 4
  005e930  stfs 3, 8(3)
  005e934  fadds 5, 5, 6
  005e938  fadds 1, 5, 7
  005e93c  fcmpu 0, 1, 4
  005e940  bt 1, 0x5f5d8
  005e944  lwz 3, 4(11)
  005e948  rlwinm 20, 18, 0, 29, 29
  005e94c  srawi 21, 3, 5
  005e950  cmpwi 20, 0
  005e954  addze 21, 21
  005e958  bt 2, 0x5e968
  005e95c  lhz 11, 0(11)
  005e960  extsh 11, 11
  005e964  b 0x5e970
  005e968  lhz 11, 2(11)
  005e96c  extsh 11, 11
  005e970  lwz 3, 148(26)
  005e974  stw 23, 156(26)
  005e978  cmpwi 11, 0
  005e97c  ori 24, 22, 0
  005e980  lwz 23, 12(3)
  005e984  extsw 23, 23
  005e988  bt 2, 0x5ea60
  005e98c  rlwinm 4, 18, 0, 30, 30
  005e990  ori 3, 22, 0
  005e994  cmpwi 4, 1
  005e998  bf 0, 0x5e9a0
  005e99c  li 3, 1
  005e9a0  cmpw 23, 3
  005e9a4  bt 2, 0x5f5d8
  005e9a8  lis 7, 161
  005e9ac  lis 6, 161
  005e9b0  addic 7, 7, 2560
  005e9b4  addic 6, 6, 2496
  005e9b8  ori 3, 22, 0
  005e9bc  slwi 4, 3, 3
  005e9c0  lwz 5, 168(26)
  005e9c4  extsw 4, 4
  005e9c8  lwzx 4, 6, 4
  005e9cc  cmpw 4, 5
  005e9d0  bf 2, 0x5e9ec
  005e9d4  sldi 3, 3, 2
  005e9d8  subfic 4, 3, 0
  005e9dc  sldi 3, 3, 9
  005e9e0  addc 3, 4, 3
  005e9e4  addc 3, 7, 3
  005e9e8  b 0x5ea5c
  005e9ec  addic 3, 3, 1
  005e9f0  cmpwi 3, 8
  005e9f4  bt 0, 0x5e9bc
  005e9f8  lwz 3, 12(16)
  005e9fc  slwi 4, 3, 3
  005ea00  addic 8, 3, 1
  005ea04  addc 4, 6, 4
  005ea08  srawi 6, 8, 3
  005ea0c  sldi 3, 3, 2
  005ea10  addze 6, 6
  005ea14  clrldi 9, 4, 32
  005ea18  sldi 6, 6, 3
  005ea1c  sldi 4, 3, 9
  005ea20  subfic 3, 3, 0
  005ea24  subc 6, 8, 6
  005ea28  addc 4, 3, 4
  005ea2c  ori 3, 26, 0
  005ea30  addc 7, 7, 4
  005ea34  stw 6, 12(16)
  005ea38  ori 4, 11, 0
  005ea3c  stw 5, 0(9)
  005ea40  clrldi 31, 7, 32
  005ea44  lwz 6, 16(16)
  005ea48  ori 5, 31, 0
  005ea4c  stw 6, 4(9)
  005ea50  bl 0xf595c
  005ea54  nop
  005ea58  ori 3, 31, 0
  005ea5c  ori 24, 3, 0
  005ea60  lfs 1, 192(26)
  005ea64  lfs 0, 196(26)
  005ea68  addic 3, 1, 208
  005ea6c  lfs 13, 200(26)
  005ea70  cmpwi 23, 0
  005ea74  lfs 14, 208(26)
  005ea78  stfs 1, 4968(1)
  005ea7c  lfs 15, 212(26)
  005ea80  stfs 0, 4964(1)
  005ea84  lfs 16, 216(26)
  005ea88  stfs 13, 4960(1)
  005ea8c  lfs 1, 16(26)
  005ea90  lfs 2, 20(26)
  005ea94  lfs 3, 24(26)
  005ea98  fmuls 1, 1, 24
  005ea9c  fmuls 2, 2, 24
  005eaa0  lfs 17, 224(26)
  005eaa4  fmuls 3, 3, 24
  005eaa8  lfs 18, 228(26)
  005eaac  lfs 19, 232(26)
  005eab0  stfs 1, 0(3)
  005eab4  stfs 2, 4(3)
  005eab8  stfs 3, 8(3)
  005eabc  bt 2, 0x5ed98
  005eac0  lfs 4, 184(1)
  005eac4  lfs 5, 188(1)
  005eac8  addic 3, 1, 220
  005eacc  fsubs 1, 4, 1
  005ead0  addic 5, 1, 232
  005ead4  lfs 4, 192(1)
  005ead8  fsubs 2, 5, 2
  005eadc  addic 6, 1, 244
  005eae0  fsubs 3, 4, 3
  005eae4  addic 25, 1, 1888
  005eae8  li 4, 256
  005eaec  fsubs 4, 1, 29
  005eaf0  fsubs 5, 2, 29
  005eaf4  stfs 1, 0(3)
  005eaf8  fsubs 6, 3, 29
  005eafc  fadds 1, 1, 29
  005eb00  stfs 2, 4(3)
  005eb04  fadds 2, 2, 29
  005eb08  stfs 3, 8(3)
  005eb0c  fadds 3, 3, 29
  005eb10  ori 3, 25, 0
  005eb14  stfs 4, 0(5)
  005eb18  stfs 5, 4(5)
  005eb1c  stfs 6, 8(5)
  005eb20  stfs 1, 0(6)
  005eb24  stfs 2, 4(6)
  005eb28  stfs 3, 8(6)
  005eb2c  lfs 1, 4968(1)
  005eb30  addic 4, 4, -1
  005eb34  stfs 30, 0(3)
  005eb38  stfs 30, 4(3)
  005eb3c  cmpwi 4, 0
  005eb40  stfs 30, 8(3)
  005eb44  addic 3, 3, 12
  005eb48  bf 2, 0x5eb30
  005eb4c  lfs 2, 44(26)
  005eb50  addic 3, 1, 400
  005eb54  addic 5, 1, 412
  005eb58  fmuls 1, 1, 2
  005eb5c  fmuls 3, 0, 2
  005eb60  addic 4, 1, 424
  005eb64  fmuls 4, 13, 2
  005eb68  addic 6, 1, 468
  005eb6c  fmuls 5, 14, 2
  005eb70  fmuls 6, 15, 2
  005eb74  fmuls 7, 16, 2
  005eb78  fmuls 8, 17, 2
  005eb7c  fmuls 9, 18, 2
  005eb80  fmuls 2, 19, 2
  005eb84  addic 10, 1, 864
  005eb88  addic 11, 1, 160
  005eb8c  stfs 1, 0(3)
  005eb90  stfs 3, 4(3)
  005eb94  stfs 4, 8(3)
  005eb98  stfs 5, 0(5)
  005eb9c  stfs 6, 4(5)
  005eba0  addic 3, 6, 12
  005eba4  stfs 7, 8(5)
  005eba8  stfs 8, 0(4)
  005ebac  stfs 9, 4(4)
  005ebb0  addic 5, 6, 24
  005ebb4  stfs 2, 8(4)
  005ebb8  stfs 1, 0(6)
  005ebbc  stfs 3, 4(6)
  005ebc0  stfs 4, 8(6)
  005ebc4  stfs 5, 0(3)
  005ebc8  stfs 6, 4(3)
  005ebcc  stfs 7, 8(3)
  005ebd0  stfs 8, 0(5)
  005ebd4  stfs 9, 4(5)
  005ebd8  stfs 2, 8(5)
  005ebdc  lfs 1, 232(1)
  005ebe0  lfs 2, 240(1)
  005ebe4  stfs 1, 56(1)
  005ebe8  stfs 2, 64(1)
  005ebec  lfs 1, 244(1)
  005ebf0  lfs 2, 252(1)
  005ebf4  stfs 1, 72(1)
  005ebf8  addic 12, 1, 164
  005ebfc  stfs 2, 80(1)
  005ec00  lwz 3, 468(1)
  005ec04  lwz 4, 476(1)
  005ec08  stw 3, 88(1)
  005ec0c  lwz 3, 484(1)
  005ec10  stw 4, 96(1)
  005ec14  stw 3, 104(1)
  005ec18  lfs 1, 236(1)
  005ec1c  lfs 2, 248(1)
  005ec20  stfs 1, 60(1)
  005ec24  stfs 2, 76(1)
  005ec28  lwz 3, 472(1)
  005ec2c  lwz 4, 480(1)
  005ec30  stw 3, 92(1)
  005ec34  lwz 5, 488(1)
  005ec38  ori 3, 26, 0
  005ec3c  ld 6, 56(1)
  005ec40  ld 7, 64(1)
  005ec44  stw 4, 100(1)
  005ec48  ld 8, 72(1)
  005ec4c  ld 9, 80(1)
  005ec50  ori 4, 6, 0
  005ec54  lwz 31, 492(1)
  005ec58  ori 6, 8, 0
  005ec5c  lwz 30, 496(1)
  005ec60  stw 5, 108(1)
  005ec64  lwz 29, 500(1)
  005ec68  ori 5, 7, 0
  005ec6c  stw 31, 112(1)
  005ec70  ori 7, 9, 0
  005ec74  stw 30, 116(1)
  005ec78  ld 8, 88(1)
  005ec7c  ld 9, 96(1)
  005ec80  stw 29, 120(1)
  005ec84  ld 31, 104(1)
  005ec88  std 25, 128(1)
  005ec8c  std 10, 136(1)
  005ec90  std 11, 144(1)
  005ec94  std 12, 152(1)
  005ec98  ori 10, 31, 0
  005ec9c  bl 0x564d0
  005eca0  lwz 3, 164(1)
  005eca4  ori 27, 22, 0
  005eca8  cmpw 3, 27
  005ecac  bf 1, 0x5ed98
  005ecb0  lfs 1, 208(1)
  005ecb4  slwi 3, 27, 2
  005ecb8  lfs 2, 216(1)
  005ecbc  stfs 1, 88(1)
  005ecc0  stfs 2, 96(1)
  005ecc4  addic 6, 1, 504
  005ecc8  stfs 30, 516(1)
  005eccc  clrldi 10, 18, 32
  005ecd0  stfs 30, 520(1)
  005ecd4  addic 5, 1, 864
  005ecd8  stfs 30, 524(1)
  005ecdc  ori 7, 23, 0
  005ece0  stfs 30, 528(1)
  005ece4  stfs 30, 532(1)
  005ece8  stfs 30, 536(1)
  005ecec  stfs 30, 540(1)
  005ecf0  stfs 30, 544(1)
  005ecf4  stfs 30, 548(1)
  005ecf8  stfs 30, 552(1)
  005ecfc  stfs 30, 556(1)
  005ed00  stfs 30, 560(1)
  005ed04  stfs 30, 564(1)
  005ed08  lwz 4, 160(1)
  005ed0c  stfs 30, 568(1)
  005ed10  stfs 30, 572(1)
  005ed14  addc 3, 4, 3
  005ed18  stw 22, 504(1)
  005ed1c  ori 4, 25, 0
  005ed20  stfs 31, 512(1)
  005ed24  clrldi 3, 3, 32
  005ed28  stw 22, 508(1)
  005ed2c  lfs 1, 212(1)
  005ed30  ld 9, 96(1)
  005ed34  stfs 1, 92(1)
  005ed38  ld 8, 88(1)
  005ed3c  lfs 1, 220(1)
  005ed40  lfs 2, 224(1)
  005ed44  stfs 1, 112(1)
  005ed48  lfs 1, 228(1)
  005ed4c  stfs 2, 116(1)
  005ed50  stfs 1, 120(1)
  005ed54  std 26, 128(1)
  005ed58  bl 0x59800
  005ed5c  lwz 3, 508(1)
  005ed60  cmpwi 3, 0
  005ed64  bt 2, 0x5ed88
  005ed68  lis 4, 161
  005ed6c  sldi 5, 19, 2
  005ed70  addic 4, 4, 18944
  005ed74  extsw 5, 5
  005ed78  addic 19, 19, 1
  005ed7c  extsw 19, 19
  005ed80  stwx 3, 4, 5
  005ed84  b 0x5f5d8
  005ed88  addic 27, 27, 1
  005ed8c  lwz 3, 164(1)
  005ed90  cmpw 27, 3
  005ed94  bt 0, 0x5ecb0
  005ed98  rlwinm 3, 18, 0, 30, 30
  005ed9c  lfs 13, 4960(1)
  005eda0  cmpwi 3, 0
  005eda4  lfs 0, 4964(1)
  005eda8  lfs 1, 4968(1)
  005edac  bf 2, 0x5f5d8
  005edb0  lwz 30, 148(26)
  005edb4  cmpwi 20, 1
  005edb8  ori 28, 22, 0
  005edbc  addic 30, 30, 16
  005edc0  bf 0, 0x5edc8
  005edc4  li 28, 1
  005edc8  ori 29, 22, 0
  005edcc  addic 27, 28, 1
  005edd0  cmpw 21, 29
  005edd4  lwz 28, 152(26)
  005edd8  bf 1, 0x5f5d8
  005eddc  clrlwi 3, 28, 31
  005ede0  lbz 5, 0(30)
  005ede4  srawi 28, 28, 1
  005ede8  cmpwi 3, 0
  005edec  lhz 3, 2(30)
  005edf0  cmpwi 1, 5, 1
  005edf4  cmpwi 6, 5, 0
  005edf8  extsh 3, 3
  005edfc  cmpwi 7, 5, 2
  005ee00  bf 2, 0x5f5c8
  005ee04  and 3, 3, 27
  005ee08  cmpwi 3, 0
  005ee0c  bt 2, 0x5f5c8
  005ee10  bt 5, 0x5ee1c
  005ee14  bf 25, 0x5f2d4
  005ee18  b 0x5ee2c
  005ee1c  bf 29, 0x5ef98
  005ee20  cmpwi 5, 3
  005ee24  bf 1, 0x5f12c
  005ee28  b 0x5f2d4
  005ee2c  addic 3, 30, 16
  005ee30  addic 5, 1, 436
  005ee34  addic 4, 1, 256
  005ee38  lfs 2, 0(3)
  005ee3c  lfs 3, 4(3)
  005ee40  lfs 4, 8(3)
  005ee44  lfs 5, 12(3)
  005ee48  stfs 2, 0(5)
  005ee4c  stfs 3, 4(5)
  005ee50  stfs 4, 8(5)
  005ee54  stfs 5, 12(5)
  005ee58  stfs 2, 0(4)
  005ee5c  stfs 3, 4(4)
  005ee60  stfs 4, 8(4)
  005ee64  lfs 6, 44(26)
  005ee68  addic 3, 1, 268
  005ee6c  fmuls 2, 2, 6
  005ee70  fmuls 3, 3, 6
  005ee74  fmuls 4, 4, 6
  005ee78  addic 9, 1, 576
  005ee7c  ori 10, 30, 0
  005ee80  fmuls 1, 1, 2
  005ee84  fmuls 7, 14, 3
  005ee88  fmuls 8, 0, 2
  005ee8c  fmuls 9, 15, 3
  005ee90  fmuls 2, 13, 2
  005ee94  fmuls 3, 16, 3
  005ee98  fmuls 10, 17, 4
  005ee9c  fmuls 11, 18, 4
  005eea0  fmuls 4, 19, 4
  005eea4  fadds 1, 1, 7
  005eea8  fadds 7, 8, 9
  005eeac  fadds 2, 2, 3
  005eeb0  fadds 1, 1, 10
  005eeb4  fadds 3, 7, 11
  005eeb8  fadds 4, 2, 4
  005eebc  fmuls 2, 5, 6
  005eec0  stfs 1, 0(3)
  005eec4  stfs 3, 4(3)
  005eec8  stfs 4, 8(3)
  005eecc  lfs 5, 208(1)
  005eed0  lfs 6, 216(1)
  005eed4  fadds 1, 1, 5
  005eed8  fadds 4, 4, 6
  005eedc  lfs 5, 212(1)
  005eee0  lfs 6, 184(1)
  005eee4  fadds 3, 3, 5
  005eee8  lfs 5, 192(1)
  005eeec  stfs 6, 48(1)
  005eef0  stfs 5, 56(1)
  005eef4  stfs 30, 588(1)
  005eef8  stfs 30, 592(1)
  005eefc  stfs 30, 596(1)
  005ef00  stfs 30, 600(1)
  005ef04  stfs 1, 64(1)
  005ef08  stfs 4, 72(1)
  005ef0c  stfs 30, 604(1)
  005ef10  stfs 30, 608(1)
  005ef14  stfs 30, 612(1)
  005ef18  stfs 30, 616(1)
  005ef1c  stfs 30, 620(1)
  005ef20  stfs 30, 624(1)
  005ef24  stfs 30, 628(1)
  005ef28  stfs 30, 632(1)
  005ef2c  stfs 30, 636(1)
  005ef30  stfs 30, 640(1)
  005ef34  lfs 1, 188(1)
  005ef38  stfs 30, 644(1)
  005ef3c  stw 22, 576(1)
  005ef40  stfs 31, 584(1)
  005ef44  stw 22, 580(1)
  005ef48  stfs 1, 52(1)
  005ef4c  ld 3, 48(1)
  005ef50  ld 4, 56(1)
  005ef54  stfs 3, 68(1)
  005ef58  fmr 1, 29
  005ef5c  ld 5, 64(1)
  005ef60  ld 6, 72(1)
  005ef64  std 26, 112(1)
  005ef68  bl 0x59658
  005ef6c  lwz 3, 580(1)
  005ef70  cmpwi 3, 0
  005ef74  bt 2, 0x5f5b8
  005ef78  lis 4, 161
  005ef7c  sldi 5, 19, 2
  005ef80  addic 4, 4, 18944
  005ef84  extsw 5, 5
  005ef88  addic 19, 19, 1
  005ef8c  extsw 19, 19
  005ef90  stwx 3, 4, 5
  005ef94  b 0x5f5d8
  005ef98  addic 3, 30, 4
  005ef9c  addic 5, 30, 12
  005efa0  addic 6, 30, 16
  005efa4  addic 4, 1, 280
  005efa8  lwz 3, 0(3)
  005efac  lfs 2, 0(5)
  005efb0  slwi 3, 3, 4
  005efb4  lfs 3, 0(6)
  005efb8  lfs 4, 4(6)
  005efbc  addc 3, 24, 3
  005efc0  lfs 5, 8(6)
  005efc4  clrldi 3, 3, 32
  005efc8  stfs 3, 0(4)
  005efcc  stfs 4, 4(4)
  005efd0  stfs 5, 8(4)
  005efd4  lfs 6, 0(3)
  005efd8  lfs 7, 4(3)
  005efdc  fmuls 6, 6, 24
  005efe0  fmuls 7, 7, 24
  005efe4  lfs 8, 8(3)
  005efe8  lfs 9, 44(26)
  005efec  fmuls 8, 8, 24
  005eff0  addic 3, 1, 292
  005eff4  fmuls 2, 2, 9
  005eff8  addic 9, 1, 648
  005effc  ori 10, 30, 0
  005f000  fadds 3, 6, 3
  005f004  fadds 4, 7, 4
  005f008  fadds 5, 8, 5
  005f00c  fmuls 3, 3, 9
  005f010  fmuls 4, 4, 9
  005f014  fmuls 5, 5, 9
  005f018  fmuls 1, 1, 3
  005f01c  fmuls 6, 14, 4
  005f020  fmuls 7, 0, 3
  005f024  fmuls 8, 15, 4
  005f028  fmuls 3, 13, 3
  005f02c  fmuls 4, 16, 4
  005f030  fmuls 10, 17, 5
  005f034  fmuls 11, 18, 5
  005f038  fmuls 5, 19, 5
  005f03c  fadds 1, 1, 6
  005f040  fadds 6, 7, 8
  005f044  fadds 3, 3, 4
  005f048  fadds 1, 1, 10
  005f04c  fadds 4, 6, 11
  005f050  fadds 3, 3, 5
  005f054  stfs 1, 0(3)
  005f058  stfs 4, 4(3)
  005f05c  stfs 3, 8(3)
  005f060  lfs 5, 208(1)
  005f064  lfs 6, 216(1)
  005f068  fadds 1, 1, 5
  005f06c  fadds 3, 3, 6
  005f070  lfs 5, 212(1)
  005f074  lfs 6, 184(1)
  005f078  fadds 4, 4, 5
  005f07c  lfs 5, 192(1)
  005f080  stfs 6, 48(1)
  005f084  stfs 5, 56(1)
  005f088  stfs 30, 660(1)
  005f08c  stfs 30, 664(1)
  005f090  stfs 30, 668(1)
  005f094  stfs 30, 672(1)
  005f098  stfs 1, 64(1)
  005f09c  stfs 3, 72(1)
  005f0a0  stfs 30, 676(1)
  005f0a4  stfs 30, 680(1)
  005f0a8  stfs 30, 684(1)
  005f0ac  stfs 30, 688(1)
  005f0b0  stfs 30, 692(1)
  005f0b4  stfs 30, 696(1)
  005f0b8  stfs 30, 700(1)
  005f0bc  stfs 30, 704(1)
  005f0c0  stfs 30, 708(1)
  005f0c4  stfs 30, 712(1)
  005f0c8  lfs 1, 188(1)
  005f0cc  stfs 30, 716(1)
  005f0d0  stw 22, 648(1)
  005f0d4  stfs 31, 656(1)
  005f0d8  stw 22, 652(1)
  005f0dc  stfs 1, 52(1)
  005f0e0  ld 3, 48(1)
  005f0e4  ld 4, 56(1)
  005f0e8  stfs 4, 68(1)
  005f0ec  fmr 1, 29
  005f0f0  ld 5, 64(1)
  005f0f4  ld 6, 72(1)
  005f0f8  std 26, 112(1)
  005f0fc  bl 0x59658
  005f100  lwz 3, 652(1)
  005f104  cmpwi 3, 0
  005f108  bt 2, 0x5f5b8
  005f10c  lis 4, 161
  005f110  sldi 5, 19, 2
  005f114  addic 4, 4, 18944
  005f118  extsw 5, 5
  005f11c  addic 19, 19, 1
  005f120  extsw 19, 19
  005f124  stwx 3, 4, 5
  005f128  b 0x5f5d8
  005f12c  addic 3, 30, 4
  005f130  addic 5, 30, 16
  005f134  addic 4, 1, 452
  005f138  addic 6, 1, 304
  005f13c  lfs 1, 0(3)
  005f140  lfs 2, 0(5)
  005f144  lfs 3, 4(5)
  005f148  lfs 4, 8(5)
  005f14c  lfs 5, 12(5)
  005f150  stfs 2, 0(4)
  005f154  stfs 3, 4(4)
  005f158  stfs 4, 8(4)
  005f15c  stfs 5, 12(4)
  005f160  stfs 2, 0(6)
  005f164  stfs 3, 4(6)
  005f168  stfs 4, 8(6)
  005f16c  lfs 6, 44(26)
  005f170  addic 3, 1, 316
  005f174  lfs 7, 4968(1)
  005f178  fmuls 2, 2, 6
  005f17c  fmuls 3, 3, 6
  005f180  fmuls 4, 4, 6
  005f184  fmuls 1, 1, 6
  005f188  fmuls 7, 7, 2
  005f18c  fmuls 8, 14, 3
  005f190  fmuls 9, 0, 2
  005f194  fmuls 10, 15, 3
  005f198  fmuls 2, 13, 2
  005f19c  fmuls 3, 16, 3
  005f1a0  fmuls 11, 17, 4
  005f1a4  fmuls 12, 18, 4
  005f1a8  fmuls 4, 19, 4
  005f1ac  fadds 7, 7, 8
  005f1b0  fadds 8, 9, 10
  005f1b4  fadds 2, 2, 3
  005f1b8  fadds 3, 7, 11
  005f1bc  fadds 7, 8, 12
  005f1c0  fadds 4, 2, 4
  005f1c4  fmuls 2, 5, 6
  005f1c8  stfs 3, 0(3)
  005f1cc  stfs 7, 4(3)
  005f1d0  stfs 4, 8(3)
  005f1d4  lfs 5, 216(1)
  005f1d8  lfs 6, 192(1)
  005f1dc  fadds 5, 4, 5
  005f1e0  lfs 4, 208(1)
  005f1e4  lfs 8, 212(1)
  005f1e8  fadds 3, 3, 4
  005f1ec  fadds 4, 7, 8
  005f1f0  fcmpu 0, 6, 5
  005f1f4  cror 6, 0, 2
  005f1f8  bt 6, 0x5f200
  005f1fc  b 0x5f204
  005f200  fmr 6, 5
  005f204  fadds 1, 5, 1
  005f208  fcmpu 0, 1, 6
  005f20c  cror 6, 1, 2
  005f210  bt 6, 0x5f218
  005f214  fmr 6, 1
  005f218  lfs 1, 184(1)
  005f21c  lfs 5, 192(1)
  005f220  addic 9, 1, 720
  005f224  stfs 1, 48(1)
  005f228  ori 10, 30, 0
  005f22c  stfs 5, 56(1)
  005f230  stfs 3, 64(1)
  005f234  stfs 6, 72(1)
  005f238  stfs 30, 732(1)
  005f23c  stfs 30, 736(1)
  005f240  stfs 30, 740(1)
  005f244  stfs 30, 744(1)
  005f248  stfs 30, 748(1)
  005f24c  stfs 30, 752(1)
  005f250  stfs 30, 756(1)
  005f254  stfs 30, 760(1)
  005f258  stfs 30, 764(1)
  005f25c  stfs 30, 768(1)
  005f260  stfs 30, 772(1)
  005f264  stfs 30, 776(1)
  005f268  stfs 30, 780(1)
  005f26c  stfs 30, 784(1)
  005f270  lfs 1, 188(1)
  005f274  stfs 30, 788(1)
  005f278  stw 22, 720(1)
  005f27c  stfs 31, 728(1)
  005f280  stw 22, 724(1)
  005f284  stfs 1, 52(1)
  005f288  ld 3, 48(1)
  005f28c  ld 4, 56(1)
  005f290  stfs 4, 68(1)
  005f294  ld 5, 64(1)
  005f298  ld 6, 72(1)
  005f29c  std 26, 112(1)
  005f2a0  fmr 1, 29
  005f2a4  bl 0x59658
  005f2a8  lwz 3, 724(1)
  005f2ac  cmpwi 3, 0
  005f2b0  bt 2, 0x5f5b8
  005f2b4  lis 4, 161
  005f2b8  sldi 5, 19, 2
  005f2bc  addic 4, 4, 18944
  005f2c0  extsw 5, 5
  005f2c4  addic 19, 19, 1
  005f2c8  extsw 19, 19
  005f2cc  stwx 3, 4, 5
  005f2d0  b 0x5f5d8
  005f2d4  lhz 3, 4(30)
  005f2d8  lhz 4, 6(30)
  005f2dc  extsh 3, 3
  005f2e0  extsh 4, 4
  005f2e4  lfs 2, 4972(1)
  005f2e8  sldi 3, 3, 4
  005f2ec  sldi 4, 4, 4
  005f2f0  addc 3, 24, 3
  005f2f4  addc 4, 24, 4
  005f2f8  clrldi 3, 3, 32
  005f2fc  clrldi 4, 4, 32
  005f300  lfs 3, 0(3)
  005f304  lfs 4, 4(3)
  005f308  fmuls 3, 3, 2
  005f30c  lfs 5, 0(4)
  005f310  fmuls 4, 4, 2
  005f314  lfs 6, 4(4)
  005f318  lfs 7, 8(3)
  005f31c  fmuls 5, 5, 2
  005f320  lfs 8, 8(4)
  005f324  fmuls 6, 6, 2
  005f328  lfs 20, 44(26)
  005f32c  fmuls 7, 7, 2
  005f330  fmuls 2, 8, 2
  005f334  addic 3, 30, 12
  005f338  addic 4, 1, 376
  005f33c  fmuls 3, 3, 20
  005f340  fmuls 4, 4, 20
  005f344  fmuls 5, 5, 20
  005f348  fmuls 6, 6, 20
  005f34c  fmuls 7, 7, 20
  005f350  fmuls 2, 2, 20
  005f354  lfs 8, 0(3)
  005f358  addic 3, 1, 364
  005f35c  fmuls 9, 1, 3
  005f360  fmuls 10, 14, 4
  005f364  fmuls 11, 0, 3
  005f368  fmuls 12, 15, 4
  005f36c  fmuls 3, 13, 3
  005f370  fmuls 4, 16, 4
  005f374  fmuls 31, 17, 7
  005f378  fmuls 1, 1, 5
  005f37c  fmuls 29, 14, 6
  005f380  fmuls 28, 18, 7
  005f384  fmuls 0, 0, 5
  005f388  fadds 9, 9, 10
  005f38c  fmuls 10, 15, 6
  005f390  fmuls 7, 19, 7
  005f394  fadds 11, 11, 12
  005f398  fadds 3, 3, 4
  005f39c  fmuls 4, 13, 5
  005f3a0  fmuls 5, 16, 6
  005f3a4  fadds 1, 1, 29
  005f3a8  fmuls 6, 17, 2
  005f3ac  fmuls 12, 18, 2
  005f3b0  fadds 21, 9, 31
  005f3b4  fadds 9, 0, 10
  005f3b8  fmuls 2, 19, 2
  005f3bc  fadds 22, 11, 28
  005f3c0  fadds 23, 3, 7
  005f3c4  fadds 3, 4, 5
  005f3c8  fadds 1, 1, 6
  005f3cc  fadds 4, 9, 12
  005f3d0  stfs 21, 0(3)
  005f3d4  stfs 22, 4(3)
  005f3d8  fadds 2, 3, 2
  005f3dc  stfs 23, 8(3)
  005f3e0  addic 3, 1, 328
  005f3e4  stfs 1, 0(4)
  005f3e8  stfs 4, 4(4)
  005f3ec  fmuls 20, 8, 20
  005f3f0  stfs 2, 8(4)
  005f3f4  lfs 3, 208(1)
  005f3f8  lfs 5, 212(1)
  005f3fc  lfs 6, 216(1)
  005f400  fadds 21, 21, 3
  005f404  fadds 27, 1, 3
  005f408  fadds 22, 22, 5
  005f40c  fadds 28, 4, 5
  005f410  fadds 23, 23, 6
  005f414  fadds 29, 2, 6
  005f418  addic 4, 1, 340
  005f41c  fsubs 27, 27, 21
  005f420  fsubs 28, 28, 22
  005f424  fsubs 29, 29, 23
  005f428  fmuls 4, 27, 27
  005f42c  stfs 27, 0(3)
  005f430  fmuls 5, 28, 28
  005f434  stfs 28, 4(3)
  005f438  fmuls 6, 29, 29
  005f43c  stfs 29, 8(3)
  005f440  lfs 24, 184(1)
  005f444  lfs 25, 188(1)
  005f448  fsubs 1, 24, 21
  005f44c  lfs 26, 192(1)
  005f450  fsubs 2, 25, 22
  005f454  fsubs 3, 26, 23
  005f458  fadds 4, 4, 5
  005f45c  addic 3, 1, 168
  005f460  fmuls 7, 1, 27
  005f464  fmuls 9, 2, 28
  005f468  fmuls 10, 3, 29
  005f46c  fadds 31, 4, 6
  005f470  stfs 1, 0(4)
  005f474  stfs 2, 4(4)
  005f478  stfs 3, 8(4)
  005f47c  fadds 5, 7, 9
  005f480  fadds 4, 5, 10
  005f484  fdivs 31, 4, 31
  005f488  stfs 31, 168(1)
  005f48c  bl 0x5dd48c
  005f490  nop
  005f494  cmpwi 3, 2
  005f498  bf 2, 0x5f4a0
  005f49c  fmr 31, 30
  005f4a0  fcmpu 0, 31, 30
  005f4a4  bt 1, 0x5f4ac
  005f4a8  fmr 31, 30
  005f4ac  fmr 1, 31
  005f4b0  lfs 31, 8(17)
  005f4b4  fcmpu 0, 1, 31
  005f4b8  bt 0, 0x5f4c0
  005f4bc  fmr 1, 31
  005f4c0  fmuls 2, 27, 1
  005f4c4  addic 3, 1, 388
  005f4c8  fmuls 3, 29, 1
  005f4cc  addic 4, 1, 352
  005f4d0  fmuls 1, 28, 1
  005f4d4  addic 9, 1, 792
  005f4d8  ori 10, 30, 0
  005f4dc  fadds 4, 21, 2
  005f4e0  fadds 5, 23, 3
  005f4e4  fadds 6, 22, 1
  005f4e8  stfs 2, 0(3)
  005f4ec  stfs 1, 4(3)
  005f4f0  stfs 24, 48(1)
  005f4f4  stfs 3, 8(3)
  005f4f8  stfs 26, 56(1)
  005f4fc  lfs 31, 4976(1)
  005f500  stw 22, 792(1)
  005f504  fmr 2, 20
  005f508  stfs 4, 64(1)
  005f50c  stfs 4, 0(4)
  005f510  stfs 5, 72(1)
  005f514  stfs 6, 4(4)
  005f518  stfs 5, 8(4)
  005f51c  stfs 30, 804(1)
  005f520  stfs 30, 808(1)
  005f524  stfs 30, 812(1)
  005f528  stfs 30, 816(1)
  005f52c  stfs 30, 820(1)
  005f530  stfs 30, 824(1)
  005f534  stfs 30, 828(1)
  005f538  stfs 30, 832(1)
  005f53c  stfs 30, 836(1)
  005f540  stfs 30, 840(1)
  005f544  stfs 30, 844(1)
  005f548  stfs 30, 848(1)
  005f54c  stfs 30, 852(1)
  005f550  stfs 30, 856(1)
  005f554  stfs 30, 860(1)
  005f558  stfs 31, 800(1)
  005f55c  stw 22, 796(1)
  005f560  stfs 25, 52(1)
  005f564  ld 3, 48(1)
  005f568  ld 4, 56(1)
  005f56c  stfs 6, 68(1)
  005f570  ld 5, 64(1)
  005f574  ld 6, 72(1)
  005f578  lfs 1, 4980(1)
  005f57c  std 26, 112(1)
  005f580  bl 0x59658
  005f584  lwz 3, 796(1)
  005f588  lfs 24, 4972(1)
  005f58c  cmpwi 3, 0
  005f590  bt 2, 0x5f5b8
  005f594  lis 4, 161
  005f598  lfs 29, 4980(1)
  005f59c  sldi 5, 19, 2
  005f5a0  addic 4, 4, 18944
  005f5a4  extsw 5, 5
  005f5a8  addic 19, 19, 1
  005f5ac  extsw 19, 19
  005f5b0  stwx 3, 4, 5
  005f5b4  b 0x5f5d8
  005f5b8  lfs 13, 4960(1)
  005f5bc  lfs 0, 4964(1)
  005f5c0  lfs 1, 4968(1)
  005f5c4  lfs 29, 4980(1)
  005f5c8  addic 29, 29, 1
  005f5cc  addic 30, 30, 32
  005f5d0  cmpw 29, 21
  005f5d4  bt 0, 0x5eddc
  005f5d8  ld 3, 4984(1)
  005f5dc  addic 15, 15, 1
  005f5e0  addic 14, 14, 2
  005f5e4  lbz 3, 2(3)
  005f5e8  cmpw 15, 3
  005f5ec  bt 0, 0x5e8a4
  005f5f0  ld 3, 5008(1)
  005f5f4  ld 4, 5000(1)
  005f5f8  addic 3, 3, 4
  005f5fc  addic 4, 4, 1
  005f600  ld 5, 5024(1)
  005f604  cmpw 4, 5
  005f608  std 3, 5008(1)
  005f60c  std 4, 5000(1)
  005f610  bt 0, 0x5e858
  005f614  ld 3, 5016(1)
  005f618  ld 4, 5032(1)
  005f61c  addic 3, 3, 1
  005f620  cmpw 3, 4
  005f624  std 3, 5016(1)
  005f628  bt 0, 0x5e824
  005f62c  cmpwi 19, 0
  005f630  bf 2, 0x5f63c
  005f634  ori 3, 22, 0
  005f638  b 0x5f6c8
  005f63c  lis 3, 161
  005f640  sldi 4, 19, 2
  005f644  stfs 30, 32(16)
  005f648  lis 5, 16256
  005f64c  stfs 30, 36(16)
  005f650  addic 31, 3, 18944
  005f654  stfs 30, 40(16)
  005f658  extsw 4, 4
  005f65c  li 6, 63
  005f660  stw 5, 44(16)
  005f664  stwx 22, 31, 4
  005f668  ld 4, 5056(1)
  005f66c  lwz 3, 18944(3)
  005f670  stw 6, 28(16)
  005f674  cmpwi 4, 0
  005f678  stw 3, 24(16)
  005f67c  bt 2, 0x5f6c4
  005f680  ori 30, 22, 0
  005f684  cmpw 19, 30
  005f688  bf 1, 0x5f6c4
  005f68c  ori 29, 22, 0
  005f690  ld 28, 5056(1)
  005f694  lwzx 3, 31, 29
  005f698  lhz 4, 52(3)
  005f69c  rlwinm 4, 4, 0, 17, 17
  005f6a0  cmpwi 4, 0
  005f6a4  bt 2, 0x5f6b4
  005f6a8  ori 4, 28, 0
  005f6ac  ori 5, 22, 0
  005f6b0  bl 0x55c30
  005f6b4  addic 30, 30, 1
  005f6b8  addic 29, 29, 4
  005f6bc  cmpw 30, 19
  005f6c0  bt 0, 0x5f694
  005f6c4  ori 3, 19, 0
  005f6c8  ld 0, 5392(1)
  005f6cc  mtlr 0
  005f6d0  lfd 14, 5232(1)
  005f6d4  lfd 15, 5240(1)
  005f6d8  lfd 16, 5248(1)
  005f6dc  lfd 17, 5256(1)
  005f6e0  lfd 18, 5264(1)
  005f6e4  lfd 19, 5272(1)
  005f6e8  lfd 20, 5280(1)
  005f6ec  lfd 21, 5288(1)
  005f6f0  lfd 22, 5296(1)
  005f6f4  lfd 23, 5304(1)
  005f6f8  lfd 24, 5312(1)
  005f6fc  lfd 25, 5320(1)
  005f700  lfd 26, 5328(1)
  005f704  lfd 27, 5336(1)
  005f708  lfd 28, 5344(1)
  005f70c  lfd 29, 5352(1)
  005f710  lfd 30, 5360(1)
  005f714  lfd 31, 5368(1)
  005f718  ld 14, 5088(1)
  005f71c  ld 15, 5096(1)
  005f720  ld 16, 5104(1)
  005f724  ld 17, 5112(1)
  005f728  ld 18, 5120(1)
  005f72c  ld 19, 5128(1)
  005f730  ld 20, 5136(1)
  005f734  ld 21, 5144(1)
  005f738  ld 22, 5152(1)
  005f73c  ld 23, 5160(1)
  005f740  ld 24, 5168(1)
  005f744  ld 25, 5176(1)
  005f748  ld 26, 5184(1)
  005f74c  ld 27, 5192(1)
  005f750  ld 28, 5200(1)
  005f754  ld 29, 5208(1)
  005f758  ld 30, 5216(1)
  005f75c  ld 31, 5224(1)
  005f760  addi 1, 1, 5376
  005f764  blr

CollHeroSphere:   # 0x5f780, 0xfb8 bytes
  005f780  stdu 1, -5392(1)
  005f784  stfd 15, 5256(1)
  005f788  stfd 16, 5264(1)
  005f78c  stfd 17, 5272(1)
  005f790  stfd 18, 5280(1)
  005f794  stfd 19, 5288(1)
  005f798  stfd 20, 5296(1)
  005f79c  stfd 21, 5304(1)
  005f7a0  stfd 22, 5312(1)
  005f7a4  stfd 23, 5320(1)
  005f7a8  stfd 24, 5328(1)
  005f7ac  stfd 25, 5336(1)
  005f7b0  stfd 26, 5344(1)
  005f7b4  stfd 27, 5352(1)
  005f7b8  stfd 28, 5360(1)
  005f7bc  stfd 29, 5368(1)
  005f7c0  stfd 30, 5376(1)
  005f7c4  stfd 31, 5384(1)
  005f7c8  std 28, 5224(1)
  005f7cc  lis 28, 6
  005f7d0  lfs 4, 0(3)
  005f7d4  addic 4, 1, 48
  005f7d8  addi 28, 28, -2200
  005f7dc  addic 8, 1, 60
  005f7e0  std 27, 5216(1)
  005f7e4  lis 7, 161
  005f7e8  li 27, 0
  005f7ec  lfs 5, 0(28)
  005f7f0  lfs 3, 4(3)
  005f7f4  fmuls 4, 4, 5
  005f7f8  fmuls 1, 1, 5
  005f7fc  lfs 2, 8(3)
  005f800  lfs 6, 4(28)
  005f804  fmuls 3, 3, 5
  005f808  fmuls 2, 2, 5
  005f80c  ori 5, 27, 0
  005f810  ori 6, 5, 0
  005f814  stfs 6, 5056(1)
  005f818  stfs 6, 5092(1)
  005f81c  stfs 6, 5128(1)
  005f820  stfs 6, 5088(1)
  005f824  fsubs 7, 4, 1
  005f828  stfs 6, 5124(1)
  005f82c  fsubs 8, 3, 1
  005f830  stfs 1, 5136(1)
  005f834  fsubs 9, 2, 1
  005f838  stfs 6, 5120(1)
  005f83c  fmuls 5, 1, 1
  005f840  stfs 6, 5116(1)
  005f844  fadds 10, 4, 1
  005f848  stfs 6, 5068(1)
  005f84c  fadds 11, 3, 1
  005f850  stfs 6, 5064(1)
  005f854  fadds 1, 2, 1
  005f858  stfs 6, 5112(1)
  005f85c  stfs 6, 5060(1)
  005f860  stfs 6, 5108(1)
  005f864  stfs 6, 5104(1)
  005f868  stfs 6, 5100(1)
  005f86c  stfs 7, 0(4)
  005f870  stfs 6, 5132(1)
  005f874  stfs 8, 4(4)
  005f878  stfs 6, 5096(1)
  005f87c  stfs 9, 8(4)
  005f880  stfs 5, 5072(1)
  005f884  ori 4, 6, 0
  005f888  stfs 10, 0(8)
  005f88c  lwz 9, 23552(7)
  005f890  stfs 11, 4(8)
  005f894  stfs 1, 8(8)
  005f898  lwz 8, 0(9)
  005f89c  std 31, 5248(1)
  005f8a0  std 30, 5240(1)
  005f8a4  std 29, 5232(1)
  005f8a8  std 26, 5208(1)
  005f8ac  std 25, 5200(1)
  005f8b0  std 24, 5192(1)
  005f8b4  std 23, 5184(1)
  005f8b8  std 22, 5176(1)
  005f8bc  std 21, 5168(1)
  005f8c0  cmpw 8, 6
  005f8c4  bf 1, 0x5fbd0
  005f8c8  ori 9, 27, 0
  005f8cc  lfs 1, 5136(1)
  005f8d0  lwz 10, 23552(7)
  005f8d4  addic 8, 10, 16
  005f8d8  addic 12, 10, 18
  005f8dc  addc 8, 8, 9
  005f8e0  addc 12, 12, 9
  005f8e4  clrldi 11, 8, 32
  005f8e8  li 0, 5008
  005f8ec  lhz 11, 0(11)
  005f8f0  clrldi 11, 11, 32
  005f8f4  std 11, 5144(1)
  005f8f8  clrldi 11, 12, 32
  005f8fc  addic 12, 10, 20
  005f900  addc 12, 12, 9
  005f904  clrldi 12, 12, 32
  005f908  lhz 11, 0(11)
  005f90c  clrldi 11, 11, 32
  005f910  lhz 12, 0(12)
  005f914  lfd 5, 5144(1)
  005f918  std 11, 5144(1)
  005f91c  fcfid 5, 5
  005f920  clrldi 11, 12, 32
  005f924  addic 10, 10, 22
  005f928  addc 10, 10, 9
  005f92c  clrldi 10, 10, 32
  005f930  frsp 5, 5
  005f934  fsubs 5, 5, 4
  005f938  lfd 6, 5144(1)
  005f93c  std 11, 5144(1)
  005f940  fcfid 6, 6
  005f944  stfs 5, 5008(1)
  005f948  frsp 6, 6
  005f94c  stfs 5, 5012(1)
  005f950  stfs 5, 5016(1)
  005f954  stfs 5, 5020(1)
  005f958  lfd 7, 5144(1)
  005f95c  lvx 2, 1, 0
  005f960  fcfid 7, 7
  005f964  li 0, 5008
  005f968  vspltw 2, 2, 0
  005f96c  fsubs 6, 6, 3
  005f970  vspltw 2, 2, 0
  005f974  vspltw 2, 2, 0
  005f978  frsp 7, 7
  005f97c  vspltw 2, 2, 0
  005f980  stfs 6, 5008(1)
  005f984  stfs 6, 5012(1)
  005f988  stfs 6, 5016(1)
  005f98c  stfs 6, 5020(1)
  005f990  fsubs 7, 7, 2
  005f994  lvx 3, 1, 0
  005f998  li 0, 5008
  005f99c  vspltw 3, 3, 0
  005f9a0  vspltw 2, 2, 0
  005f9a4  vspltw 3, 3, 0
  005f9a8  vspltw 2, 2, 0
  005f9ac  vspltw 3, 3, 0
  005f9b0  stfs 7, 5008(1)
  005f9b4  stfs 7, 5012(1)
  005f9b8  stfs 7, 5016(1)
  005f9bc  lhz 10, 0(10)
  005f9c0  stfs 7, 5020(1)
  005f9c4  lvx 4, 1, 0
  005f9c8  vspltw 3, 3, 0
  005f9cc  vspltw 4, 4, 0
  005f9d0  vspltw 2, 2, 0
  005f9d4  vspltw 3, 3, 0
  005f9d8  vspltw 4, 4, 0
  005f9dc  vspltw 2, 2, 0
  005f9e0  clrldi 10, 10, 32
  005f9e4  vspltw 3, 3, 0
  005f9e8  vspltw 4, 4, 0
  005f9ec  vspltw 2, 2, 0
  005f9f0  vspltw 3, 3, 0
  005f9f4  vspltw 4, 4, 0
  005f9f8  vspltw 2, 2, 0
  005f9fc  vspltw 3, 3, 0
  005fa00  vspltw 4, 4, 0
  005fa04  vspltw 2, 2, 0
  005fa08  vspltw 3, 3, 0
  005fa0c  vspltw 4, 4, 0
  005fa10  vspltw 2, 2, 0
  005fa14  std 10, 5144(1)
  005fa18  vspltw 3, 3, 0
  005fa1c  vspltw 4, 4, 0
  005fa20  vspltw 2, 2, 0
  005fa24  vspltw 3, 3, 0
  005fa28  vspltw 4, 4, 0
  005fa2c  vspltw 2, 2, 0
  005fa30  fmuls 5, 5, 5
  005fa34  vspltw 3, 3, 0
  005fa38  vspltw 4, 4, 0
  005fa3c  vspltw 2, 2, 0
  005fa40  fmuls 6, 6, 6
  005fa44  vspltw 3, 3, 0
  005fa48  vspltw 4, 4, 0
  005fa4c  vspltw 2, 2, 0
  005fa50  fmuls 7, 7, 7
  005fa54  vspltw 3, 3, 0
  005fa58  vspltw 4, 4, 0
  005fa5c  vspltw 2, 2, 0
  005fa60  vspltw 3, 3, 0
  005fa64  vspltw 4, 4, 0
  005fa68  vspltw 2, 2, 0
  005fa6c  lfd 8, 5144(1)
  005fa70  vspltw 3, 3, 0
  005fa74  vspltw 4, 4, 0
  005fa78  fcfid 8, 8
  005fa7c  vspltw 2, 2, 0
  005fa80  fadds 5, 5, 6
  005fa84  vspltw 3, 3, 0
  005fa88  vspltw 4, 4, 0
  005fa8c  vspltw 2, 2, 0
  005fa90  vspltw 3, 3, 0
  005fa94  vspltw 4, 4, 0
  005fa98  vspltw 2, 2, 0
  005fa9c  frsp 8, 8
  005faa0  vspltw 3, 3, 0
  005faa4  vspltw 4, 4, 0
  005faa8  vspltw 2, 2, 0
  005faac  vspltw 3, 3, 0
  005fab0  vspltw 4, 4, 0
  005fab4  vspltw 2, 2, 0
  005fab8  fadds 5, 5, 7
  005fabc  vspltw 3, 3, 0
  005fac0  vspltw 4, 4, 0
  005fac4  vspltw 2, 2, 0
  005fac8  fadds 8, 1, 8
  005facc  vspltw 3, 3, 0
  005fad0  vspltw 4, 4, 0
  005fad4  vspltw 2, 2, 0
  005fad8  addic 10, 1, 72
  005fadc  vspltw 3, 3, 0
  005fae0  vspltw 4, 4, 0
  005fae4  vspltw 2, 2, 0
  005fae8  li 11, 4
  005faec  vspltw 3, 3, 0
  005faf0  vspltw 4, 4, 0
  005faf4  vspltw 2, 2, 0
  005faf8  fmuls 8, 8, 8
  005fafc  vspltw 3, 3, 0
  005fb00  vspltw 4, 4, 0
  005fb04  vspltw 2, 2, 0
  005fb08  li 12, 8
  005fb0c  vspltw 3, 3, 0
  005fb10  vspltw 4, 4, 0
  005fb14  vspltw 2, 2, 0
  005fb18  vspltw 3, 3, 0
  005fb1c  vspltw 4, 4, 0
  005fb20  fcmpu 0, 5, 8
  005fb24  vspltw 2, 2, 0
  005fb28  vspltw 3, 3, 0
  005fb2c  vspltw 4, 4, 0
  005fb30  vspltw 2, 2, 0
  005fb34  vspltw 3, 3, 0
  005fb38  vspltw 4, 4, 0
  005fb3c  vspltw 2, 2, 0
  005fb40  vspltw 3, 3, 0
  005fb44  vspltw 4, 4, 0
  005fb48  vspltw 2, 2, 0
  005fb4c  vspltw 3, 3, 0
  005fb50  vspltw 4, 4, 0
  005fb54  vspltw 2, 2, 0
  005fb58  vspltw 3, 3, 0
  005fb5c  vspltw 4, 4, 0
  005fb60  vspltw 2, 2, 0
  005fb64  vspltw 3, 3, 0
  005fb68  vspltw 4, 4, 0
  005fb6c  vspltw 2, 2, 0
  005fb70  vspltw 3, 3, 0
  005fb74  vspltw 4, 4, 0
  005fb78  vspltw 3, 3, 0
  005fb7c  vspltw 4, 4, 0
  005fb80  stvewx 2, 0, 10
  005fb84  vspltw 3, 3, 0
  005fb88  vspltw 4, 4, 0
  005fb8c  vspltw 4, 4, 0
  005fb90  stvewx 3, 11, 10
  005fb94  vspltw 2, 4, 0
  005fb98  vspltw 2, 2, 0
  005fb9c  stvewx 2, 12, 10
  005fba0  bt 1, 0x5fbb8
  005fba4  sldi 10, 4, 2
  005fba8  addic 4, 4, 1
  005fbac  addc 10, 1, 10
  005fbb0  clrldi 10, 10, 32
  005fbb4  stw 8, 384(10)
  005fbb8  lwz 8, 23552(7)
  005fbbc  addic 6, 6, 1
  005fbc0  addic 9, 9, 16
  005fbc4  lwz 8, 0(8)
  005fbc8  cmpw 6, 8
  005fbcc  bt 0, 0x5f8d0
  005fbd0  ori 6, 27, 0
  005fbd4  stfs 4, 5084(1)
  005fbd8  cmpw 4, 6
  005fbdc  stfs 3, 5080(1)
  005fbe0  stfs 2, 5076(1)
  005fbe4  bf 1, 0x60590
  005fbe8  ori 26, 1, 0
  005fbec  lfs 10, 5056(1)
  005fbf0  addic 8, 1, 1920
  005fbf4  li 9, 256
  005fbf8  lwz 7, 384(26)
  005fbfc  addic 9, 9, -1
  005fc00  stfs 10, 0(8)
  005fc04  stfs 10, 4(8)
  005fc08  cmpwi 9, 0
  005fc0c  stfs 10, 8(8)
  005fc10  addic 8, 8, 12
  005fc14  bf 2, 0x5fbfc
  005fc18  lwz 8, 12(7)
  005fc1c  ori 9, 27, 0
  005fc20  lhz 10, 10(7)
  005fc24  cmpw 10, 9
  005fc28  bf 1, 0x5ffa8
  005fc2c  ori 25, 1, 0
  005fc30  ori 24, 1, 0
  005fc34  lhz 31, 0(8)
  005fc38  addic 10, 1, 84
  005fc3c  lhz 11, 2(8)
  005fc40  extsw 30, 31
  005fc44  lhz 12, 4(8)
  005fc48  li 0, 5008
  005fc4c  std 30, 5144(1)
  005fc50  stw 31, 0(10)
  005fc54  stw 11, 4(10)
  005fc58  stw 12, 8(10)
  005fc5c  lfd 1, 5144(1)
  005fc60  fcfid 1, 1
  005fc64  ori 10, 27, 0
  005fc68  frsp 1, 1
  005fc6c  stfs 1, 5008(1)
  005fc70  stfs 1, 5012(1)
  005fc74  stfs 1, 5016(1)
  005fc78  stfs 1, 5020(1)
  005fc7c  lvx 2, 1, 0
  005fc80  vspltw 2, 2, 0
  005fc84  vspltw 2, 2, 0
  005fc88  vspltw 2, 2, 0
  005fc8c  vspltw 2, 2, 0
  005fc90  vspltw 2, 2, 0
  005fc94  vspltw 2, 2, 0
  005fc98  vspltw 2, 2, 0
  005fc9c  vspltw 2, 2, 0
  005fca0  vspltw 2, 2, 0
  005fca4  lfs 2, 60(1)
  005fca8  vspltw 2, 2, 0
  005fcac  fcmpu 0, 1, 2
  005fcb0  vspltw 2, 2, 0
  005fcb4  vspltw 2, 2, 0
  005fcb8  vspltw 2, 2, 0
  005fcbc  cror 6, 0, 2
  005fcc0  vspltw 2, 2, 0
  005fcc4  vspltw 2, 2, 0
  005fcc8  vspltw 2, 2, 0
  005fccc  vspltw 2, 2, 0
  005fcd0  vspltw 2, 2, 0
  005fcd4  vspltw 2, 2, 0
  005fcd8  vspltw 2, 2, 0
  005fcdc  vspltw 2, 2, 0
  005fce0  vspltw 2, 2, 0
  005fce4  vspltw 2, 2, 0
  005fce8  vspltw 2, 2, 0
  005fcec  vspltw 2, 2, 0
  005fcf0  vspltw 2, 2, 0
  005fcf4  vspltw 2, 2, 0
  005fcf8  vspltw 2, 2, 0
  005fcfc  vspltw 2, 2, 0
  005fd00  vspltw 2, 2, 0
  005fd04  vspltw 2, 2, 0
  005fd08  vspltw 2, 2, 0
  005fd0c  vspltw 2, 2, 0
  005fd10  vspltw 2, 2, 0
  005fd14  vspltw 2, 2, 0
  005fd18  bt 6, 0x5fd20
  005fd1c  li 10, 1
  005fd20  extsw 11, 11
  005fd24  li 0, 5008
  005fd28  std 11, 5144(1)
  005fd2c  ori 11, 27, 0
  005fd30  lfd 2, 5144(1)
  005fd34  fcfid 2, 2
  005fd38  frsp 2, 2
  005fd3c  stfs 2, 5008(1)
  005fd40  stfs 2, 5012(1)
  005fd44  stfs 2, 5016(1)
  005fd48  stfs 2, 5020(1)
  005fd4c  lvx 3, 1, 0
  005fd50  vspltw 3, 3, 0
  005fd54  vspltw 3, 3, 0
  005fd58  vspltw 3, 3, 0
  005fd5c  vspltw 3, 3, 0
  005fd60  vspltw 3, 3, 0
  005fd64  vspltw 3, 3, 0
  005fd68  vspltw 3, 3, 0
  005fd6c  vspltw 3, 3, 0
  005fd70  vspltw 3, 3, 0
  005fd74  lfs 3, 64(1)
  005fd78  vspltw 3, 3, 0
  005fd7c  fcmpu 0, 2, 3
  005fd80  vspltw 3, 3, 0
  005fd84  vspltw 3, 3, 0
  005fd88  vspltw 3, 3, 0
  005fd8c  cror 6, 0, 2
  005fd90  vspltw 3, 3, 0
  005fd94  vspltw 3, 3, 0
  005fd98  vspltw 3, 3, 0
  005fd9c  vspltw 3, 3, 0
  005fda0  vspltw 3, 3, 0
  005fda4  vspltw 3, 3, 0
  005fda8  vspltw 3, 3, 0
  005fdac  vspltw 3, 3, 0
  005fdb0  vspltw 3, 3, 0
  005fdb4  vspltw 3, 3, 0
  005fdb8  vspltw 3, 3, 0
  005fdbc  vspltw 3, 3, 0
  005fdc0  vspltw 3, 3, 0
  005fdc4  vspltw 3, 3, 0
  005fdc8  vspltw 3, 3, 0
  005fdcc  vspltw 3, 3, 0
  005fdd0  vspltw 3, 3, 0
  005fdd4  vspltw 3, 3, 0
  005fdd8  vspltw 3, 3, 0
  005fddc  vspltw 3, 3, 0
  005fde0  vspltw 3, 3, 0
  005fde4  vspltw 3, 3, 0
  005fde8  bt 6, 0x5fdf0
  005fdec  li 11, 1
  005fdf0  extsw 12, 12
  005fdf4  li 0, 5008
  005fdf8  std 12, 5144(1)
  005fdfc  ori 12, 27, 0
  005fe00  lfd 3, 5144(1)
  005fe04  fcfid 3, 3
  005fe08  frsp 3, 3
  005fe0c  stfs 3, 5008(1)
  005fe10  stfs 3, 5012(1)
  005fe14  stfs 3, 5016(1)
  005fe18  stfs 3, 5020(1)
  005fe1c  lvx 4, 1, 0
  005fe20  vspltw 4, 4, 0
  005fe24  vspltw 4, 4, 0
  005fe28  vspltw 4, 4, 0
  005fe2c  vspltw 4, 4, 0
  005fe30  vspltw 4, 4, 0
  005fe34  vspltw 4, 4, 0
  005fe38  vspltw 4, 4, 0
  005fe3c  vspltw 4, 4, 0
  005fe40  vspltw 4, 4, 0
  005fe44  lfs 4, 68(1)
  005fe48  vspltw 4, 4, 0
  005fe4c  fcmpu 0, 3, 4
  005fe50  vspltw 4, 4, 0
  005fe54  vspltw 4, 4, 0
  005fe58  vspltw 4, 4, 0
  005fe5c  cror 6, 0, 2
  005fe60  vspltw 4, 4, 0
  005fe64  vspltw 4, 4, 0
  005fe68  vspltw 4, 4, 0
  005fe6c  vspltw 4, 4, 0
  005fe70  vspltw 4, 4, 0
  005fe74  vspltw 4, 4, 0
  005fe78  vspltw 4, 4, 0
  005fe7c  vspltw 4, 4, 0
  005fe80  vspltw 4, 4, 0
  005fe84  vspltw 4, 4, 0
  005fe88  vspltw 4, 4, 0
  005fe8c  vspltw 4, 4, 0
  005fe90  vspltw 4, 4, 0
  005fe94  vspltw 4, 4, 0
  005fe98  vspltw 4, 4, 0
  005fe9c  vspltw 4, 4, 0
  005fea0  vspltw 4, 4, 0
  005fea4  vspltw 4, 4, 0
  005fea8  vspltw 4, 4, 0
  005feac  vspltw 4, 4, 0
  005feb0  vspltw 4, 4, 0
  005feb4  vspltw 4, 4, 0
  005feb8  bt 6, 0x5fec0
  005febc  li 12, 1
  005fec0  lfs 4, 48(1)
  005fec4  ori 31, 27, 0
  005fec8  fcmpu 0, 1, 4
  005fecc  cror 6, 1, 2
  005fed0  bt 6, 0x5fed8
  005fed4  li 31, 1
  005fed8  lfs 1, 52(1)
  005fedc  ori 30, 27, 0
  005fee0  fcmpu 0, 2, 1
  005fee4  cror 6, 1, 2
  005fee8  bt 6, 0x5fef0
  005feec  li 30, 1
  005fef0  lfs 1, 56(1)
  005fef4  ori 29, 27, 0
  005fef8  fcmpu 0, 3, 1
  005fefc  cror 6, 1, 2
  005ff00  bt 6, 0x5ff08
  005ff04  li 29, 1
  005ff08  slwi 23, 10, 1
  005ff0c  rlwimi 31, 10, 1, 30, 30
  005ff10  vspltw 2, 2, 0
  005ff14  addic 10, 1, 108
  005ff18  vspltw 3, 3, 0
  005ff1c  slwi 22, 11, 1
  005ff20  vspltw 4, 4, 0
  005ff24  rlwimi 30, 11, 1, 30, 30
  005ff28  slwi 11, 12, 1
  005ff2c  addic 21, 1, 96
  005ff30  stw 23, 0(10)
  005ff34  rlwimi 29, 12, 1, 30, 30
  005ff38  stw 22, 4(10)
  005ff3c  stw 11, 8(10)
  005ff40  li 12, 8
  005ff44  addic 10, 1, 120
  005ff48  stw 31, 0(21)
  005ff4c  stw 30, 4(21)
  005ff50  li 11, 4
  005ff54  stw 29, 8(21)
  005ff58  addic 9, 9, 1
  005ff5c  stb 31, 4992(1)
  005ff60  addic 8, 8, 8
  005ff64  stb 30, 4993(1)
  005ff68  addic 31, 25, 1920
  005ff6c  stb 29, 4994(1)
  005ff70  addic 25, 25, 12
  005ff74  stb 27, 4995(1)
  005ff78  stvewx 2, 0, 10
  005ff7c  stvewx 3, 11, 10
  005ff80  stvewx 4, 12, 10
  005ff84  stvewx 2, 0, 31
  005ff88  stvewx 3, 11, 31
  005ff8c  stvewx 4, 12, 31
  005ff90  lhz 10, 10(7)
  005ff94  cmpw 9, 10
  005ff98  lwz 10, 4992(1)
  005ff9c  stw 10, 896(24)
  005ffa0  addic 24, 24, 4
  005ffa4  bt 0, 0x5fc34
  005ffa8  lhz 8, 10(7)
  005ffac  lwz 10, 12(7)
  005ffb0  ori 9, 27, 0
  005ffb4  lhz 11, 8(7)
  005ffb8  slwi 8, 8, 3
  005ffbc  cmpw 11, 9
  005ffc0  addc 8, 8, 10
  005ffc4  bf 1, 0x60580
  005ffc8  clrldi 10, 8, 32
  005ffcc  lbz 11, 0(10)
  005ffd0  lbz 12, 1(10)
  005ffd4  addc 31, 11, 11
  005ffd8  addc 30, 12, 12
  005ffdc  lbz 29, 2(10)
  005ffe0  addc 31, 11, 31
  005ffe4  addc 30, 12, 30
  005ffe8  sldi 31, 31, 2
  005ffec  sldi 30, 30, 2
  005fff0  addc 31, 1, 31
  005fff4  addc 30, 1, 30
  005fff8  clrldi 31, 31, 32
  005fffc  addc 25, 29, 29
  0060000  addic 31, 31, 1920
  0060004  clrldi 30, 30, 32
  0060008  addc 25, 29, 25
  006000c  slwi 11, 11, 2
  0060010  sldi 25, 25, 2
  0060014  lfs 9, 0(31)
  0060018  lfs 8, 4(31)
  006001c  slwi 12, 12, 2
  0060020  lfs 7, 8(31)
  0060024  addc 11, 1, 11
  0060028  addic 31, 30, 1920
  006002c  addc 30, 1, 25
  0060030  addc 12, 1, 12
  0060034  clrldi 11, 11, 32
  0060038  clrldi 30, 30, 32
  006003c  lfs 6, 0(31)
  0060040  slwi 29, 29, 2
  0060044  lfs 5, 4(31)
  0060048  clrldi 12, 12, 32
  006004c  lfs 3, 8(31)
  0060050  addic 30, 30, 1920
  0060054  lwz 11, 896(11)
  0060058  addc 31, 1, 29
  006005c  clrldi 31, 31, 32
  0060060  lwz 12, 896(12)
  0060064  lfs 2, 0(30)
  0060068  lfs 1, 4(30)
  006006c  and 11, 11, 12
  0060070  lfs 4, 8(30)
  0060074  lwz 12, 896(31)
  0060078  and 11, 11, 12
  006007c  cmpwi 11, 0
  0060080  bf 2, 0x60568
  0060084  fsubs 24, 6, 9
  0060088  fsubs 25, 5, 8
  006008c  fsubs 26, 3, 7
  0060090  fsubs 21, 2, 9
  0060094  fsubs 22, 1, 8
  0060098  fsubs 23, 4, 7
  006009c  lfs 1, 5084(1)
  00600a0  lfs 2, 5080(1)
  00600a4  addic 11, 1, 192
  00600a8  fsubs 1, 1, 9
  00600ac  lfs 20, 5076(1)
  00600b0  fsubs 5, 2, 8
  00600b4  stfd 9, 5048(1)
  00600b8  stfd 8, 5040(1)
  00600bc  fsubs 20, 20, 7
  00600c0  stfd 7, 5032(1)
  00600c4  addic 12, 1, 204
  00600c8  addic 31, 1, 132
  00600cc  fmuls 3, 21, 26
  00600d0  fmuls 4, 22, 26
  00600d4  fmuls 2, 23, 25
  00600d8  fmuls 6, 23, 24
  00600dc  stfs 24, 0(11)
  00600e0  fmuls 11, 21, 25
  00600e4  stfs 25, 4(11)
  00600e8  fmuls 12, 22, 24
  00600ec  stfs 26, 8(11)
  00600f0  stfs 21, 0(12)
  00600f4  addic 11, 1, 144
  00600f8  stfs 22, 4(12)
  00600fc  stfs 23, 8(12)
  0060100  stfs 1, 0(31)
  0060104  stfs 1, 5028(1)
  0060108  stfs 5, 4(31)
  006010c  fsubs 4, 4, 2
  0060110  fsubs 3, 6, 3
  0060114  stfs 5, 5024(1)
  0060118  fsubs 2, 11, 12
  006011c  stfs 20, 8(31)
  0060120  fmuls 6, 1, 4
  0060124  fmuls 7, 5, 3
  0060128  fmuls 9, 4, 4
  006012c  fmuls 8, 20, 2
  0060130  fmuls 11, 3, 3
  0060134  stfs 4, 0(11)
  0060138  fmuls 12, 2, 2
  006013c  stfs 3, 4(11)
  0060140  stfs 2, 8(11)
  0060144  fadds 6, 6, 7
  0060148  fadds 1, 9, 11
  006014c  fadds 5, 6, 8
  0060150  fadds 1, 1, 12
  0060154  fcmpu 0, 5, 10
  0060158  fdivs 1, 5, 1
  006015c  bt 0, 0x60568
  0060160  fneg 7, 4
  0060164  lfs 28, 5028(1)
  0060168  fneg 8, 3
  006016c  lfs 29, 5024(1)
  0060170  fneg 10, 2
  0060174  addic 11, 1, 240
  0060178  fmuls 5, 4, 1
  006017c  addic 12, 1, 228
  0060180  fmuls 6, 3, 1
  0060184  addic 31, 1, 216
  0060188  fmuls 9, 2, 1
  006018c  fmuls 11, 7, 1
  0060190  fmuls 12, 8, 1
  0060194  fmuls 1, 10, 1
  0060198  fmuls 5, 5, 5
  006019c  stfs 7, 0(11)
  00601a0  fmuls 6, 6, 6
  00601a4  stfs 8, 4(11)
  00601a8  fmuls 27, 9, 9
  00601ac  stfs 10, 8(11)
  00601b0  fsubs 9, 21, 24
  00601b4  addic 11, 1, 156
  00601b8  fsubs 8, 22, 25
  00601bc  fsubs 7, 23, 26
  00601c0  fadds 28, 28, 11
  00601c4  fadds 29, 29, 12
  00601c8  fadds 30, 20, 1
  00601cc  stfs 11, 0(12)
  00601d0  stfs 12, 4(12)
  00601d4  fadds 5, 5, 6
  00601d8  stfs 1, 8(12)
  00601dc  addic 12, 1, 168
  00601e0  fsubs 6, 28, 24
  00601e4  fmuls 31, 29, 26
  00601e8  fmuls 10, 30, 25
  00601ec  stfs 28, 0(31)
  00601f0  fmuls 0, 28, 26
  00601f4  stfs 29, 4(31)
  00601f8  fmuls 11, 30, 24
  00601fc  stfs 30, 8(31)
  0060200  fadds 27, 5, 27
  0060204  stfs 28, 132(1)
  0060208  stfs 29, 136(1)
  006020c  fmuls 13, 28, 25
  0060210  stfs 30, 140(1)
  0060214  fmuls 12, 29, 24
  0060218  fmuls 19, 22, 30
  006021c  stfs 9, 0(11)
  0060220  fmuls 18, 23, 29
  0060224  stfs 8, 4(11)
  0060228  fmuls 17, 23, 28
  006022c  stfs 7, 8(11)
  0060230  fmuls 16, 21, 29
  0060234  addic 11, 1, 252
  0060238  fsubs 31, 31, 10
  006023c  stfs 6, 0(12)
  0060240  fmuls 10, 21, 30
  0060244  fmuls 15, 22, 28
  0060248  fsubs 5, 29, 25
  006024c  fsubs 0, 11, 0
  0060250  fsubs 1, 30, 26
  0060254  lfs 11, 5072(1)
  0060258  fsubs 13, 13, 12
  006025c  fcmpu 0, 11, 27
  0060260  fsubs 12, 19, 18
  0060264  fsubs 11, 17, 10
  0060268  fsubs 10, 16, 15
  006026c  stfs 5, 4(12)
  0060270  stfs 1, 8(12)
  0060274  addic 12, 1, 180
  0060278  stfs 31, 0(11)
  006027c  stfs 0, 4(11)
  0060280  stfs 13, 8(11)
  0060284  stfs 12, 0(12)
  0060288  stfs 11, 4(12)
  006028c  stfs 10, 8(12)
  0060290  bt 0, 0x60568
  0060294  fmuls 19, 5, 7
  0060298  fmuls 18, 1, 8
  006029c  addic 11, 1, 264
  00602a0  fmuls 1, 1, 9
  00602a4  fmuls 7, 6, 7
  00602a8  fmuls 6, 6, 8
  00602ac  fmuls 5, 5, 9
  00602b0  fmuls 8, 31, 4
  00602b4  fmuls 9, 0, 3
  00602b8  fmuls 13, 13, 2
  00602bc  fsubs 0, 19, 18
  00602c0  fsubs 1, 1, 7
  00602c4  fsubs 5, 6, 5
  00602c8  fmuls 6, 12, 4
  00602cc  fadds 7, 8, 9
  00602d0  fmuls 8, 11, 3
  00602d4  fmuls 9, 10, 2
  00602d8  lfs 10, 5056(1)
  00602dc  fmuls 4, 0, 4
  00602e0  fmuls 3, 1, 3
  00602e4  stfs 0, 0(11)
  00602e8  stfs 1, 4(11)
  00602ec  fmuls 2, 5, 2
  00602f0  fadds 7, 7, 13
  00602f4  stfs 5, 8(11)
  00602f8  fadds 6, 6, 8
  00602fc  fadds 1, 4, 3
  0060300  fcmpu 0, 7, 10
  0060304  fadds 3, 6, 9
  0060308  fadds 1, 1, 2
  006030c  cror 2, 1, 2
  0060310  fcmpu 6, 3, 10
  0060314  fcmpu 1, 1, 10
  0060318  bt 2, 0x6033c
  006031c  lfs 8, 5056(1)
  0060320  fmr 2, 24
  0060324  fmr 7, 8
  0060328  fmr 1, 25
  006032c  fmr 3, 26
  0060330  fmr 6, 7
  0060334  fmr 27, 6
  0060338  b 0x6037c
  006033c  lfs 8, 5056(1)
  0060340  bf 24, 0x60360
  0060344  fmr 2, 8
  0060348  fmr 7, 21
  006034c  fmr 6, 22
  0060350  fmr 27, 23
  0060354  fmr 1, 2
  0060358  fmr 3, 1
  006035c  b 0x6037c
  0060360  bf 4, 0x604a0
  0060364  fmr 7, 24
  0060368  fmr 6, 25
  006036c  fmr 27, 26
  0060370  fmr 2, 21
  0060374  fmr 1, 22
  0060378  fmr 3, 23
  006037c  fsubs 9, 28, 7
  0060380  fsubs 10, 29, 6
  0060384  fsubs 5, 2, 7
  0060388  fsubs 4, 1, 6
  006038c  fsubs 1, 30, 27
  0060390  fsubs 3, 3, 27
  0060394  addic 11, 1, 276
  0060398  addic 12, 1, 288
  006039c  fmuls 2, 9, 5
  00603a0  fmuls 11, 10, 4
  00603a4  fmuls 12, 5, 5
  00603a8  fmuls 13, 4, 4
  00603ac  fmuls 0, 1, 3
  00603b0  fmuls 31, 3, 3
  00603b4  stfs 9, 0(11)
  00603b8  stfs 10, 4(11)
  00603bc  stfs 1, 8(11)
  00603c0  stfs 5, 0(12)
  00603c4  fadds 2, 2, 11
  00603c8  fadds 11, 12, 13
  00603cc  stfs 4, 4(12)
  00603d0  stfs 3, 8(12)
  00603d4  lfs 1, 8(28)
  00603d8  fadds 2, 2, 0
  00603dc  fadds 11, 11, 31
  00603e0  fdivs 2, 2, 11
  00603e4  fcmpu 0, 2, 1
  00603e8  cror 6, 0, 2
  00603ec  bt 6, 0x603f4
  00603f0  fmr 2, 1
  00603f4  fmr 1, 2
  00603f8  fcmpu 0, 1, 8
  00603fc  cror 6, 1, 2
  0060400  bt 6, 0x60408
  0060404  fmr 1, 8
  0060408  fmuls 2, 5, 1
  006040c  addic 11, 1, 312
  0060410  fmuls 4, 4, 1
  0060414  fmuls 1, 3, 1
  0060418  lfs 3, 5028(1)
  006041c  lfs 5, 5024(1)
  0060420  addic 12, 1, 300
  0060424  addic 31, 1, 336
  0060428  fadds 7, 7, 2
  006042c  fadds 6, 6, 4
  0060430  fadds 8, 27, 1
  0060434  stfs 2, 0(11)
  0060438  stfs 4, 4(11)
  006043c  stfs 1, 8(11)
  0060440  lfs 1, 5072(1)
  0060444  addic 11, 1, 324
  0060448  fsubs 9, 7, 3
  006044c  fsubs 10, 6, 5
  0060450  fsubs 11, 8, 20
  0060454  stfs 7, 0(12)
  0060458  stfs 6, 4(12)
  006045c  stfs 8, 8(12)
  0060460  stfs 7, 132(1)
  0060464  stfs 6, 136(1)
  0060468  stfs 8, 140(1)
  006046c  stfs 3, 0(31)
  0060470  fmuls 2, 9, 9
  0060474  fmuls 4, 10, 10
  0060478  fmuls 27, 11, 11
  006047c  stfs 5, 4(31)
  0060480  stfs 20, 8(31)
  0060484  stfs 9, 0(11)
  0060488  stfs 10, 4(11)
  006048c  stfs 11, 8(11)
  0060490  fadds 2, 2, 4
  0060494  fadds 27, 2, 27
  0060498  fcmpu 0, 1, 27
  006049c  bt 0, 0x60568
  00604a0  lfs 1, 12(28)
  00604a4  addic 11, 1, 348
  00604a8  lfd 2, 5048(1)
  00604ac  lfd 3, 5040(1)
  00604b0  lfs 4, 132(1)
  00604b4  fmuls 1, 27, 1
  00604b8  lfd 5, 5032(1)
  00604bc  fadds 10, 2, 24
  00604c0  lfs 6, 136(1)
  00604c4  fadds 4, 4, 2
  00604c8  lfs 7, 140(1)
  00604cc  fadds 12, 3, 25
  00604d0  fadds 6, 6, 3
  00604d4  fadds 7, 7, 5
  00604d8  lbz 5, 4(10)
  00604dc  lfs 8, 144(1)
  00604e0  lfs 9, 148(1)
  00604e4  addic 10, 1, 360
  00604e8  lfs 11, 152(1)
  00604ec  fadds 13, 5, 23
  00604f0  stfs 8, 5124(1)
  00604f4  addic 5, 5, 4096
  00604f8  stfs 9, 5120(1)
  00604fc  fadds 8, 5, 26
  0060500  stfs 11, 5116(1)
  0060504  fadds 9, 2, 21
  0060508  fadds 11, 3, 22
  006050c  stfs 4, 0(11)
  0060510  stfs 4, 5092(1)
  0060514  stfs 6, 4(11)
  0060518  stfs 7, 8(11)
  006051c  stfs 1, 5072(1)
  0060520  stfs 6, 5128(1)
  0060524  addic 11, 1, 372
  0060528  stfs 7, 5088(1)
  006052c  stfs 2, 5068(1)
  0060530  stfs 3, 5064(1)
  0060534  stfs 5, 5060(1)
  0060538  stfs 10, 0(10)
  006053c  stfs 12, 4(10)
  0060540  stfs 8, 8(10)
  0060544  stfs 10, 5112(1)
  0060548  stfs 12, 5108(1)
  006054c  stfs 8, 5104(1)
  0060550  stfs 9, 0(11)
  0060554  stfs 11, 4(11)
  0060558  stfs 13, 8(11)
  006055c  stfs 11, 5096(1)
  0060560  stfs 9, 5100(1)
  0060564  stfs 13, 5132(1)
  0060568  addic 9, 9, 1
  006056c  lhz 10, 8(7)
  0060570  addic 8, 8, 4
  0060574  lfs 10, 5056(1)
  0060578  cmpw 9, 10
  006057c  bt 0, 0x5ffc8
  0060580  addic 6, 6, 1
  0060584  addic 26, 26, 4
  0060588  cmpw 6, 4
  006058c  bt 0, 0x5fbf0
  0060590  cmpwi 5, 0
  0060594  bf 2, 0x605a0
  0060598  ori 3, 27, 0
  006059c  b 0x606c0
  00605a0  lfs 1, 5136(1)
  00605a4  lfs 2, 5072(1)
  00605a8  fdivs 1, 1, 2
  00605ac  lfs 2, 5084(1)
  00605b0  lis 4, 161
  00605b4  lfs 3, 5080(1)
  00605b8  lfs 4, 5092(1)
  00605bc  lfs 5, 5076(1)
  00605c0  addic 4, 4, 2368
  00605c4  lfs 6, 5128(1)
  00605c8  lfs 7, 5088(1)
  00605cc  lfs 8, 16(28)
  00605d0  lfs 9, 5068(1)
  00605d4  lfs 10, 5064(1)
  00605d8  lfs 11, 5060(1)
  00605dc  lfs 12, 5112(1)
  00605e0  lfs 13, 5108(1)
  00605e4  lfs 0, 5104(1)
  00605e8  lfs 31, 5100(1)
  00605ec  lfs 30, 5096(1)
  00605f0  lfs 29, 5132(1)
  00605f4  fsubs 2, 2, 4
  00605f8  lfs 28, 5124(1)
  00605fc  fmuls 4, 4, 8
  0060600  lfs 27, 5120(1)
  0060604  fsubs 3, 3, 6
  0060608  fsubs 5, 5, 7
  006060c  fmuls 6, 6, 8
  0060610  fmuls 7, 7, 8
  0060614  fmuls 9, 9, 8
  0060618  fmuls 10, 10, 8
  006061c  fmuls 11, 11, 8
  0060620  fmuls 12, 12, 8
  0060624  fmuls 13, 13, 8
  0060628  fmuls 0, 0, 8
  006062c  fmuls 31, 31, 8
  0060630  stfs 4, 32(4)
  0060634  lfs 4, 5116(1)
  0060638  fmuls 30, 30, 8
  006063c  fmuls 29, 29, 8
  0060640  stfs 6, 36(4)
  0060644  stfs 7, 40(4)
  0060648  stfs 28, 64(4)
  006064c  stfs 27, 68(4)
  0060650  stfs 4, 72(4)
  0060654  stfs 9, 80(4)
  0060658  stfs 10, 84(4)
  006065c  stfs 11, 88(4)
  0060660  stfs 12, 96(4)
  0060664  stfs 13, 100(4)
  0060668  stfs 0, 104(4)
  006066c  stfs 31, 112(4)
  0060670  stfs 30, 116(4)
  0060674  stfs 29, 120(4)
  0060678  lfs 4, 0(3)
  006067c  lfs 6, 4(3)
  0060680  lfs 7, 8(3)
  0060684  stw 27, 24(4)
  0060688  li 3, 1
  006068c  stw 5, 28(4)
  0060690  fmuls 2, 2, 1
  0060694  fmuls 3, 3, 1
  0060698  fmuls 1, 5, 1
  006069c  fmuls 2, 2, 8
  00606a0  fmuls 3, 3, 8
  00606a4  fmuls 1, 1, 8
  00606a8  fadds 2, 2, 4
  00606ac  fadds 3, 3, 6
  00606b0  fadds 1, 1, 7
  00606b4  stfs 2, 48(4)
  00606b8  stfs 3, 52(4)
  00606bc  stfs 1, 56(4)
  00606c0  lfd 15, 5256(1)
  00606c4  lfd 16, 5264(1)
  00606c8  lfd 17, 5272(1)
  00606cc  lfd 18, 5280(1)
  00606d0  lfd 19, 5288(1)
  00606d4  lfd 20, 5296(1)
  00606d8  lfd 21, 5304(1)
  00606dc  lfd 22, 5312(1)
  00606e0  lfd 23, 5320(1)
  00606e4  lfd 24, 5328(1)
  00606e8  lfd 25, 5336(1)
  00606ec  lfd 26, 5344(1)
  00606f0  lfd 27, 5352(1)
  00606f4  lfd 28, 5360(1)
  00606f8  lfd 29, 5368(1)
  00606fc  lfd 30, 5376(1)
  0060700  lfd 31, 5384(1)
  0060704  ld 21, 5168(1)
  0060708  ld 22, 5176(1)
  006070c  ld 23, 5184(1)
  0060710  ld 24, 5192(1)
  0060714  ld 25, 5200(1)
  0060718  ld 26, 5208(1)
  006071c  ld 27, 5216(1)
  0060720  ld 28, 5224(1)
  0060724  ld 29, 5232(1)
  0060728  ld 30, 5240(1)
  006072c  ld 31, 5248(1)
  0060730  addi 1, 1, 5392
  0060734  blr

CollGetMobyPoly:   # 0x60738, 0x48 bytes
  0060738  lis 4, 161
  006073c  addic 4, 4, 2368
  0060740  lwz 3, 24(4)
  0060744  cmpwi 3, 0
  0060748  bf 2, 0x60754
  006074c  li 3, -1
  0060750  b 0x6077c
  0060754  lwz 5, 28(4)
  0060758  cmpwi 5, 0
  006075c  bt 0, 0x60768
  0060760  li 3, -1
  0060764  b 0x6077c
  0060768  lwz 3, 148(3)
  006076c  lwz 4, 28(4)
  0060770  addc 3, 3, 4
  0060774  neg 3, 3
  0060778  srwi 3, 3, 5
  006077c  blr

CollHotspot:   # 0x60780, 0x34 bytes
  0060780  lis 3, 161
  0060784  addic 3, 3, 2368
  0060788  lwz 3, 28(3)
  006078c  cmpwi 3, 0
  0060790  bf 0, 0x6079c
  0060794  li 3, -1
  0060798  b 0x607b0
  006079c  clrlwi 3, 3, 27
  00607a0  cmpwi 3, 31
  00607a4  bf 2, 0x607b0
  00607a8  li 3, -1
  00607ac  b 0x607b0
  00607b0  blr

CollSoundSurface:   # 0x607b4, 0x38 bytes
  00607b4  lis 3, 161
  00607b8  addic 3, 3, 2368
  00607bc  lwz 3, 28(3)
  00607c0  cmpwi 3, 0
  00607c4  bf 0, 0x607d0
  00607c8  li 3, 0
  00607cc  b 0x607e8
  00607d0  rlwinm 4, 3, 0, 25, 26
  00607d4  cmpwi 4, 96
  00607d8  bf 2, 0x607e4
  00607dc  li 3, 0
  00607e0  b 0x607e8
  00607e4  rlwinm 3, 3, 27, 30, 31
  00607e8  blr

CollLineVsSphere_Out:   # 0x60800, 0x1e4 bytes
  0060800  stdu 1, -80(1)
  0060804  stfd 28, 48(1)
  0060808  stfd 29, 56(1)
  006080c  stfd 30, 64(1)
  0060810  stfd 31, 72(1)
  0060814  lfs 10, 0(3)
  0060818  lfs 9, 4(3)
  006081c  lfs 4, 0(4)
  0060820  lfs 3, 4(4)
  0060824  lfs 7, 0(5)
  0060828  fsubs 4, 4, 10
  006082c  lfs 6, 4(5)
  0060830  fsubs 3, 3, 9
  0060834  fsubs 1, 7, 10
  0060838  lfs 8, 8(3)
  006083c  fsubs 11, 6, 9
  0060840  lfs 2, 8(4)
  0060844  lfs 5, 8(5)
  0060848  fsubs 2, 2, 8
  006084c  fsubs 13, 5, 8
  0060850  lis 3, 6
  0060854  fmuls 12, 4, 4
  0060858  fmuls 0, 3, 3
  006085c  fmuls 31, 4, 1
  0060860  fmuls 30, 3, 11
  0060864  fmuls 29, 2, 2
  0060868  fmuls 28, 2, 13
  006086c  fmuls 1, 1, 1
  0060870  addi 3, 3, 2028
  0060874  fadds 12, 12, 0
  0060878  fadds 31, 31, 30
  006087c  fmuls 0, 13, 13
  0060880  fadds 12, 12, 29
  0060884  fadds 31, 31, 28
  0060888  fmuls 28, 11, 11
  006088c  lfs 11, 0(3)
  0060890  lfs 29, 12(5)
  0060894  fmuls 13, 29, 29
  0060898  fdivs 30, 31, 12
  006089c  fadds 1, 1, 28
  00608a0  fadds 0, 1, 0
  00608a4  fcmpu 0, 30, 11
  00608a8  cror 6, 1, 2
  00608ac  bt 6, 0x608b4
  00608b0  fmr 30, 11
  00608b4  lfs 1, 4(3)
  00608b8  fcmpu 0, 30, 1
  00608bc  cror 6, 0, 2
  00608c0  bt 6, 0x608c8
  00608c4  fmr 30, 1
  00608c8  fmuls 29, 4, 30
  00608cc  fmuls 28, 3, 30
  00608d0  fmuls 30, 2, 30
  00608d4  fadds 29, 29, 10
  00608d8  fadds 28, 28, 9
  00608dc  fadds 30, 30, 8
  00608e0  fsubs 29, 7, 29
  00608e4  fsubs 28, 6, 28
  00608e8  fsubs 30, 5, 30
  00608ec  fmuls 29, 29, 29
  00608f0  fmuls 28, 28, 28
  00608f4  fmuls 30, 30, 30
  00608f8  fadds 29, 29, 28
  00608fc  fadds 30, 29, 30
  0060900  fsubs 30, 30, 13
  0060904  fcmpu 0, 30, 11
  0060908  cror 6, 0, 2
  006090c  bt 6, 0x60918
  0060910  li 3, 0
  0060914  b 0x609cc
  0060918  lfs 30, 8(3)
  006091c  fsubs 0, 0, 13
  0060920  lfs 29, 12(3)
  0060924  fmuls 13, 31, 30
  0060928  fmuls 31, 12, 29
  006092c  fmuls 30, 13, 13
  0060930  fmuls 31, 31, 0
  0060934  fsubs 31, 30, 31
  0060938  fcmpu 0, 31, 11
  006093c  cror 6, 1, 2
  0060940  bt 6, 0x60948
  0060944  fmr 31, 11
  0060948  fsqrts 0, 31
  006094c  lfs 31, 16(3)
  0060950  fsubs 13, 0, 13
  0060954  fmuls 13, 13, 31
  0060958  fmuls 12, 13, 12
  006095c  fneg 12, 12
  0060960  fcmpu 0, 12, 11
  0060964  cror 6, 1, 2
  0060968  bt 6, 0x60970
  006096c  fmr 12, 11
  0060970  fmr 11, 12
  0060974  fcmpu 0, 11, 1
  0060978  cror 6, 0, 2
  006097c  bt 6, 0x60984
  0060980  fmr 11, 1
  0060984  fmuls 1, 4, 11
  0060988  fmuls 3, 3, 11
  006098c  lis 3, 161
  0060990  fmuls 2, 2, 11
  0060994  addic 4, 3, 2368
  0060998  li 3, 1
  006099c  fadds 1, 1, 10
  00609a0  fadds 3, 3, 9
  00609a4  fadds 2, 2, 8
  00609a8  fsubs 4, 1, 7
  00609ac  fsubs 6, 3, 6
  00609b0  fsubs 5, 2, 5
  00609b4  stfs 1, 32(4)
  00609b8  stfs 3, 36(4)
  00609bc  stfs 2, 40(4)
  00609c0  stfs 4, 64(4)
  00609c4  stfs 6, 68(4)
  00609c8  stfs 5, 72(4)
  00609cc  lfd 28, 48(1)
  00609d0  lfd 29, 56(1)
  00609d4  lfd 30, 64(1)
  00609d8  lfd 31, 72(1)
  00609dc  addi 1, 1, 80
  00609e0  blr

STUB_000609e4:   # 0x609e4, 0x4 bytes
  00609e4  blr

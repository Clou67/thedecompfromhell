# game/update/moby1357.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1357_00259954:   # 0x259954, 0x14 bytes
  0259954  lis 3, 122
  0259958  lis 4, 1
  025995c  addic 3, 3, -16996
  0259960  stw 4, 72(3)
  0259964  blr

M1357_00259970:   # 0x259970, 0x1e8 bytes
  0259970  stdu 1, -96(1)
  0259974  stfd 27, 56(1)
  0259978  stfd 28, 64(1)
  025997c  stfd 29, 72(1)
  0259980  stfd 30, 80(1)
  0259984  stfd 31, 88(1)
  0259988  lwz 7, 16(3)
  025998c  lis 5, 38
  0259990  lwz 9, 20(3)
  0259994  ori 6, 4, 0
  0259998  srawi 8, 7, 31
  025999c  addi 5, 5, -26264
  02599a0  srwi 11, 8, 1
  02599a4  srawi 10, 9, 31
  02599a8  xor 7, 11, 7
  02599ac  lwz 11, 24(3)
  02599b0  lfs 3, 16(3)
  02599b4  srwi 12, 10, 1
  02599b8  std 31, 48(1)
  02599bc  lfs 28, 0(5)
  02599c0  srawi 31, 11, 31
  02599c4  lfs 27, 20(3)
  02599c8  subc 7, 7, 8
  02599cc  lfs 29, 24(3)
  02599d0  srwi 5, 31, 1
  02599d4  lfs 31, 192(3)
  02599d8  xor 8, 12, 9
  02599dc  lfs 0, 16(6)
  02599e0  xor 5, 5, 11
  02599e4  lfs 13, 208(3)
  02599e8  lis 4, 16672
  02599ec  lfs 12, 20(6)
  02599f0  subc 8, 8, 10
  02599f4  lfs 11, 224(3)
  02599f8  subc 5, 5, 31
  02599fc  lfs 10, 24(6)
  0259a00  cmpw 7, 4
  0259a04  lfs 9, 196(3)
  0259a08  cmpw 1, 5, 4
  0259a0c  lfs 8, 212(3)
  0259a10  cmpw 6, 8, 4
  0259a14  lfs 7, 228(3)
  0259a18  lfs 6, 200(3)
  0259a1c  lfs 5, 216(3)
  0259a20  lfs 4, 232(3)
  0259a24  lfs 2, 28(3)
  0259a28  lfs 1, 64(3)
  0259a2c  bf 0, 0x259a38
  0259a30  fmr 3, 28
  0259a34  stw 4, 16(3)
  0259a38  lis 5, 38
  0259a3c  addi 5, 5, -26264
  0259a40  lfs 30, 4(5)
  0259a44  fcmpu 0, 3, 30
  0259a48  cror 2, 0, 2
  0259a4c  bt 2, 0x259a60
  0259a50  lis 5, 17533
  0259a54  fmr 3, 30
  0259a58  ori 5, 5, 16384
  0259a5c  stw 5, 16(3)
  0259a60  bf 24, 0x259a6c
  0259a64  fmr 27, 28
  0259a68  stw 4, 20(3)
  0259a6c  fcmpu 0, 27, 30
  0259a70  cror 2, 0, 2
  0259a74  bt 2, 0x259a88
  0259a78  lis 5, 17533
  0259a7c  fmr 27, 30
  0259a80  ori 5, 5, 16384
  0259a84  stw 5, 20(3)
  0259a88  bf 4, 0x259a94
  0259a8c  fmr 29, 28
  0259a90  stw 4, 24(3)
  0259a94  fcmpu 0, 29, 30
  0259a98  cror 6, 0, 2
  0259a9c  bt 6, 0x259ab0
  0259aa0  lis 4, 17533
  0259aa4  fmr 29, 30
  0259aa8  ori 4, 4, 16384
  0259aac  stw 4, 24(3)
  0259ab0  fmuls 13, 13, 12
  0259ab4  fmuls 8, 8, 12
  0259ab8  lis 4, 151
  0259abc  fmuls 5, 5, 12
  0259ac0  addic 4, 4, -25376
  0259ac4  stfs 2, 140(4)
  0259ac8  fmadds 12, 31, 0, 13
  0259acc  fmadds 8, 9, 0, 8
  0259ad0  fmadds 5, 6, 0, 5
  0259ad4  lwz 5, 8320(4)
  0259ad8  fmadds 2, 11, 10, 12
  0259adc  fmadds 6, 7, 10, 8
  0259ae0  fmadds 4, 4, 10, 5
  0259ae4  fsubs 2, 3, 2
  0259ae8  fsubs 3, 27, 6
  0259aec  fsubs 4, 29, 4
  0259af0  stfs 2, 128(4)
  0259af4  stfs 3, 132(4)
  0259af8  stfs 4, 136(4)
  0259afc  stfs 1, 64(5)
  0259b00  lfs 1, 68(3)
  0259b04  stfs 1, 68(5)
  0259b08  lfs 1, 72(3)
  0259b0c  stfs 1, 72(5)
  0259b10  lfs 1, 76(3)
  0259b14  stfs 1, 76(5)
  0259b18  lfs 1, 64(3)
  0259b1c  stfs 1, 144(4)
  0259b20  lfs 1, 68(3)
  0259b24  stfs 1, 148(4)
  0259b28  lfs 1, 72(3)
  0259b2c  stfs 1, 152(4)
  0259b30  lfs 1, 76(3)
  0259b34  stfs 1, 156(4)
  0259b38  lfd 27, 56(1)
  0259b3c  lfd 28, 64(1)
  0259b40  lfd 29, 72(1)
  0259b44  lfd 30, 80(1)
  0259b48  lfd 31, 88(1)
  0259b4c  ld 31, 48(1)
  0259b50  addi 1, 1, 96
  0259b54  blr

M1357_00259b58:   # 0x259b58, 0x88 bytes
  0259b58  stdu 1, -112(1)
  0259b5c  mflr 0
  0259b60  std 0, 128(1)
  0259b64  lis 4, 151
  0259b68  li 7, 208
  0259b6c  addic 4, 4, -25376
  0259b70  li 5, 224
  0259b74  addic 6, 3, 192
  0259b78  lwz 8, 8320(4)
  0259b7c  addic 9, 8, 192
  0259b80  lvx 2, 7, 8
  0259b84  lvx 3, 5, 8
  0259b88  lvx 4, 0, 9
  0259b8c  stvx 4, 0, 6
  0259b90  stvx 2, 7, 3
  0259b94  stvx 3, 5, 3
  0259b98  lwz 6, 8320(4)
  0259b9c  addic 5, 3, 16
  0259ba0  li 4, 5
  0259ba4  lfs 1, 64(6)
  0259ba8  stfs 1, 64(3)
  0259bac  lfs 1, 68(6)
  0259bb0  stfs 1, 68(3)
  0259bb4  lfs 1, 72(6)
  0259bb8  stfs 1, 72(3)
  0259bbc  lfs 1, 76(6)
  0259bc0  stfs 1, 76(3)
  0259bc4  ori 3, 6, 0
  0259bc8  bl 0xf1114
  0259bcc  nop
  0259bd0  ld 0, 128(1)
  0259bd4  mtlr 0
  0259bd8  addi 1, 1, 112
  0259bdc  blr

M1357_00259bf0:   # 0x259bf0, 0x784 bytes
  0259bf0  stdu 1, -208(1)
  0259bf4  mflr 0
  0259bf8  std 0, 224(1)
  0259bfc  stfd 30, 192(1)
  0259c00  stfd 31, 200(1)
  0259c04  std 30, 176(1)
  0259c08  lis 30, 151
  0259c0c  lis 3, 38
  0259c10  std 31, 184(1)
  0259c14  addic 30, 30, -25376
  0259c18  ori 31, 4, 0
  0259c1c  addi 3, 3, -25632
  0259c20  lwz 4, 7456(30)
  0259c24  lwz 5, 7460(30)
  0259c28  cmpwi 4, 0
  0259c2c  lfs 1, 7456(30)
  0259c30  cmpwi 1, 5, 0
  0259c34  lfs 31, 0(3)
  0259c38  crnand 2, 2, 6
  0259c3c  std 29, 168(1)
  0259c40  lfs 2, 7460(30)
  0259c44  bt 2, 0x259cdc
  0259c48  lis 3, 150
  0259c4c  addic 3, 3, 19008
  0259c50  lwz 3, 160(3)
  0259c54  rlwinm 3, 3, 0, 28, 28
  0259c58  cmpwi 3, 0
  0259c5c  bt 2, 0x25a0f0
  0259c60  li 3, 0
  0259c64  bl 0x2f064
  0259c68  nop
  0259c6c  lis 3, 149
  0259c70  lis 4, 38
  0259c74  addic 3, 3, 5056
  0259c78  addi 4, 4, -25632
  0259c7c  lis 5, 122
  0259c80  lis 6, 122
  0259c84  lis 7, 122
  0259c88  lfs 1, 344(3)
  0259c8c  addic 3, 30, 152
  0259c90  stfs 1, 384(30)
  0259c94  lfs 5, 4(4)
  0259c98  li 9, 0
  0259c9c  lfs 4, -16872(5)
  0259ca0  lis 4, 114
  0259ca4  lfs 2, -16868(6)
  0259ca8  addic 5, 30, 388
  0259cac  fmuls 4, 4, 5
  0259cb0  lis 6, 114
  0259cb4  lfs 3, -3060(4)
  0259cb8  lfs 6, -16864(7)
  0259cbc  fmuls 2, 2, 3
  0259cc0  fmuls 3, 6, 3
  0259cc4  lfs 6, -3052(6)
  0259cc8  fmuls 4, 4, 6
  0259ccc  bl 0x10a050
  0259cd0  nop
  0259cd4  stfs 1, 392(30)
  0259cd8  b 0x25a0f0
  0259cdc  lis 3, 150
  0259ce0  addic 3, 3, 19008
  0259ce4  lwz 3, 160(3)
  0259ce8  rlwinm 3, 3, 0, 28, 28
  0259cec  cmpwi 3, 0
  0259cf0  bt 2, 0x259e4c
  0259cf4  li 3, 0
  0259cf8  bl 0x2f064
  0259cfc  nop
  0259d00  lis 3, 149
  0259d04  lis 4, 38
  0259d08  addic 3, 3, 5056
  0259d0c  addi 4, 4, -25632
  0259d10  lis 5, 122
  0259d14  lis 6, 114
  0259d18  lis 7, 122
  0259d1c  lfs 1, 344(3)
  0259d20  lis 8, 114
  0259d24  addic 3, 30, 152
  0259d28  stfs 1, 384(30)
  0259d2c  lfs 5, 4(4)
  0259d30  li 9, 0
  0259d34  lis 4, 122
  0259d38  lfs 4, -16872(5)
  0259d3c  addic 5, 30, 388
  0259d40  fmuls 4, 4, 5
  0259d44  lfs 2, -16868(4)
  0259d48  lfs 3, -3060(6)
  0259d4c  lfs 6, -16864(7)
  0259d50  fmuls 2, 2, 3
  0259d54  fmuls 3, 6, 3
  0259d58  lfs 6, -3052(8)
  0259d5c  fmuls 4, 4, 6
  0259d60  bl 0x10a050
  0259d64  nop
  0259d68  lwz 3, 8320(30)
  0259d6c  stfs 1, 392(30)
  0259d70  lis 4, 122
  0259d74  lis 5, 114
  0259d78  lfs 1, 212(3)
  0259d7c  lfs 2, 208(3)
  0259d80  fmuls 3, 1, 1
  0259d84  lfs 4, 216(3)
  0259d88  lfs 5, -16756(4)
  0259d8c  lfs 6, -3048(5)
  0259d90  fmadds 3, 2, 2, 3
  0259d94  fmadds 3, 4, 4, 3
  0259d98  fmuls 4, 5, 6
  0259d9c  lfs 5, 7456(30)
  0259da0  lfs 8, 0(31)
  0259da4  lfs 6, 4(31)
  0259da8  fsqrts 3, 3
  0259dac  lfs 7, 8(31)
  0259db0  fmuls 4, 4, 5
  0259db4  fneg 4, 4
  0259db8  fdivs 4, 4, 3
  0259dbc  fsub 5, 31, 3
  0259dc0  fsub 9, 31, 3
  0259dc4  fsub 10, 3, 31
  0259dc8  fsub 3, 3, 31
  0259dcc  fmuls 1, 1, 4
  0259dd0  fmuls 2, 2, 4
  0259dd4  fsel 4, 5, 31, 1
  0259dd8  fsel 5, 9, 31, 2
  0259ddc  fsel 1, 10, 4, 1
  0259de0  fsel 5, 3, 5, 2
  0259de4  fadds 6, 6, 1
  0259de8  fadds 5, 8, 5
  0259dec  stfs 6, 4(31)
  0259df0  stfs 5, 0(31)
  0259df4  lfs 4, 196(3)
  0259df8  lfs 3, 192(3)
  0259dfc  fmuls 1, 4, 4
  0259e00  lfs 2, 200(3)
  0259e04  fmadds 1, 3, 3, 1
  0259e08  fmadds 2, 2, 2, 1
  0259e0c  lfs 1, -16756(4)
  0259e10  lfs 8, -3048(5)
  0259e14  lfs 9, 7460(30)
  0259e18  fmuls 1, 1, 8
  0259e1c  fsqrts 2, 2
  0259e20  fmuls 1, 1, 9
  0259e24  fneg 1, 1
  0259e28  fcmpu 0, 2, 31
  0259e2c  bf 2, 0x259e3c
  0259e30  fmr 1, 31
  0259e34  fmr 2, 1
  0259e38  b 0x25a0dc
  0259e3c  fdivs 2, 1, 2
  0259e40  fmuls 1, 3, 2
  0259e44  fmuls 2, 4, 2
  0259e48  b 0x25a0dc
  0259e4c  fneg 2, 2
  0259e50  fneg 1, 1
  0259e54  lis 3, 115
  0259e58  addic 3, 3, 22784
  0259e5c  fabs 3, 2
  0259e60  fabs 4, 1
  0259e64  stfs 2, 112(1)
  0259e68  stfs 1, 116(1)
  0259e6c  fsubs 1, 3, 4
  0259e70  stfs 1, 120(1)
  0259e74  lwz 4, 112(1)
  0259e78  lfs 1, 112(1)
  0259e7c  lwz 5, 116(1)
  0259e80  lfs 2, 116(1)
  0259e84  lwz 6, 120(1)
  0259e88  rlwinm 5, 5, 3, 29, 29
  0259e8c  fabs 5, 2
  0259e90  lfs 2, 120(1)
  0259e94  fabs 1, 1
  0259e98  rlwimi 5, 6, 2, 30, 30
  0259e9c  fsub 6, 2, 31
  0259ea0  fsub 7, 2, 31
  0259ea4  rlwimi 5, 4, 4, 28, 28
  0259ea8  ori 4, 3, 0
  0259eac  rlwimi 4, 5, 2, 26, 28
  0259eb0  slwi 5, 5, 2
  0259eb4  clrldi 4, 4, 32
  0259eb8  fsel 4, 6, 1, 4
  0259ebc  lfsx 1, 3, 5
  0259ec0  fsel 3, 7, 5, 3
  0259ec4  lfs 2, 4(4)
  0259ec8  fcmpu 0, 4, 31
  0259ecc  bt 1, 0x259ed8
  0259ed0  fmr 1, 31
  0259ed4  b 0x259ffc
  0259ed8  fsubs 5, 3, 4
  0259edc  fadds 3, 3, 4
  0259ee0  addic 3, 1, 16
  0259ee4  li 6, 2
  0259ee8  addic 5, 3, 124
  0259eec  addic 4, 3, 108
  0259ef0  mtctr 6
  0259ef4  fdivs 3, 5, 3
  0259ef8  fmuls 4, 3, 3
  0259efc  stfs 3, 136(1)
  0259f00  stfs 3, 128(1)
  0259f04  stfs 3, 132(1)
  0259f08  stfs 3, 124(1)
  0259f0c  lfs 6, 136(1)
  0259f10  lfs 7, 128(1)
  0259f14  lfs 8, 132(1)
  0259f18  fmuls 5, 4, 4
  0259f1c  fmuls 7, 7, 4
  0259f20  fmuls 6, 6, 5
  0259f24  fmuls 3, 5, 5
  0259f28  fmuls 5, 8, 5
  0259f2c  stfs 7, 128(1)
  0259f30  fmuls 4, 6, 4
  0259f34  stfs 5, 132(1)
  0259f38  stfs 4, 136(1)
  0259f3c  lfs 4, 108(3)
  0259f40  fmuls 4, 4, 3
  0259f44  stfs 4, 124(3)
  0259f48  lfs 4, 4(4)
  0259f4c  addic 4, 4, 8
  0259f50  fmuls 4, 4, 3
  0259f54  addic 3, 3, 8
  0259f58  stfs 4, 4(5)
  0259f5c  addic 5, 5, 8
  0259f60  bdnz 0x259f3c
  0259f64  li 5, 4
  0259f68  ori 3, 1, 0
  0259f6c  mtctr 5
  0259f70  lis 4, 115
  0259f74  addic 5, 3, 124
  0259f78  addic 4, 4, 22752
  0259f7c  ori 7, 5, 0
  0259f80  lfs 3, 124(3)
  0259f84  lfs 4, 0(4)
  0259f88  fmuls 3, 3, 4
  0259f8c  lfs 4, 4(4)
  0259f90  addic 4, 4, 8
  0259f94  stfs 3, 124(3)
  0259f98  lfs 3, 4(5)
  0259f9c  addic 3, 3, 8
  0259fa0  fmuls 3, 3, 4
  0259fa4  stfs 3, 4(5)
  0259fa8  addic 5, 5, 8
  0259fac  bdnz 0x259f80
  0259fb0  ori 3, 1, 0
  0259fb4  fmr 3, 31
  0259fb8  mtctr 6
  0259fbc  lfs 4, 124(3)
  0259fc0  fadds 3, 3, 4
  0259fc4  lfs 4, 4(7)
  0259fc8  addic 3, 3, 16
  0259fcc  lfs 5, 8(7)
  0259fd0  lfs 6, 12(7)
  0259fd4  addic 7, 7, 16
  0259fd8  fadds 3, 3, 4
  0259fdc  fadds 3, 3, 5
  0259fe0  fadds 3, 3, 6
  0259fe4  bdnz 0x259fbc
  0259fe8  lis 3, 38
  0259fec  addi 3, 3, -25632
  0259ff0  lfs 4, 8(3)
  0259ff4  fadds 3, 3, 4
  0259ff8  fmadds 1, 3, 1, 2
  0259ffc  lis 3, 149
  025a000  stfs 1, 384(30)
  025a004  addic 3, 3, 5056
  025a008  lfs 2, 344(3)
  025a00c  bl 0x502578
  025a010  nop
  025a014  lis 3, 38
  025a018  stfs 1, 384(30)
  025a01c  lis 4, 122
  025a020  addi 3, 3, -25632
  025a024  lis 6, 122
  025a028  lis 7, 114
  025a02c  lis 8, 122
  025a030  addic 5, 30, 388
  025a034  lfs 5, 4(3)
  025a038  li 9, 0
  025a03c  lfs 4, -16872(4)
  025a040  addic 3, 30, 152
  025a044  lfs 2, -16868(6)
  025a048  lis 4, 114
  025a04c  fmuls 4, 4, 5
  025a050  lfs 3, -3060(7)
  025a054  lfs 6, -16864(8)
  025a058  fmuls 2, 2, 3
  025a05c  fmuls 3, 6, 3
  025a060  lfs 6, -3052(4)
  025a064  fmuls 4, 4, 6
  025a068  bl 0x10a050
  025a06c  nop
  025a070  lwz 3, 8320(30)
  025a074  stfs 1, 392(30)
  025a078  lis 4, 114
  025a07c  lfs 4, 196(3)
  025a080  lfs 3, 192(3)
  025a084  fmuls 1, 4, 4
  025a088  lfs 2, 200(3)
  025a08c  lis 3, 122
  025a090  fmadds 1, 3, 3, 1
  025a094  fmadds 2, 2, 2, 1
  025a098  lfs 1, -16756(3)
  025a09c  lfs 8, 8860(30)
  025a0a0  lfs 9, -3048(4)
  025a0a4  lfs 5, 0(31)
  025a0a8  fmuls 1, 1, 9
  025a0ac  lfs 6, 4(31)
  025a0b0  fsqrts 2, 2
  025a0b4  lfs 7, 8(31)
  025a0b8  fmuls 1, 1, 8
  025a0bc  fcmpu 0, 2, 31
  025a0c0  bf 2, 0x25a0d0
  025a0c4  fmr 1, 31
  025a0c8  fmr 2, 1
  025a0cc  b 0x25a0dc
  025a0d0  fdivs 2, 1, 2
  025a0d4  fmuls 1, 3, 2
  025a0d8  fmuls 2, 4, 2
  025a0dc  fadds 1, 5, 1
  025a0e0  stfs 7, 8(31)
  025a0e4  fadds 2, 6, 2
  025a0e8  stfs 1, 0(31)
  025a0ec  stfs 2, 4(31)
  025a0f0  lis 29, 150
  025a0f4  addic 29, 29, 19008
  025a0f8  lwz 3, 164(29)
  025a0fc  rlwinm 3, 3, 0, 25, 25
  025a100  cmpwi 3, 0
  025a104  bt 2, 0x25a124
  025a108  lis 3, 122
  025a10c  lis 4, 114
  025a110  lfs 1, -16716(3)
  025a114  lfs 2, -3048(4)
  025a118  fmuls 1, 1, 2
  025a11c  stfs 1, 60(31)
  025a120  b 0x25a17c
  025a124  lwz 3, 160(29)
  025a128  rlwinm 3, 3, 0, 25, 25
  025a12c  cmpwi 3, 0
  025a130  bf 2, 0x25a140
  025a134  li 3, 0
  025a138  stw 3, 60(31)
  025a13c  b 0x25a17c
  025a140  lwz 3, 60(31)
  025a144  lfs 1, 60(31)
  025a148  cmpwi 3, 0
  025a14c  bf 1, 0x25a17c
  025a150  lis 3, 122
  025a154  lis 4, 114
  025a158  lfs 2, -16712(3)
  025a15c  lfs 3, -3048(4)
  025a160  fnmsubs 1, 2, 3, 1
  025a164  fcmpu 0, 1, 31
  025a168  stfs 1, 60(31)
  025a16c  cror 6, 1, 2
  025a170  bt 6, 0x25a17c
  025a174  li 3, 0
  025a178  stw 3, 60(31)
  025a17c  lfs 1, 40(29)
  025a180  li 4, 3
  025a184  bl 0xfe398
  025a188  nop
  025a18c  fmr 30, 1
  025a190  li 4, 3
  025a194  lfs 1, 44(29)
  025a198  bl 0xfe398
  025a19c  nop
  025a1a0  lis 3, 122
  025a1a4  lis 4, 114
  025a1a8  lfs 2, 60(31)
  025a1ac  fsubs 1, 30, 1
  025a1b0  lis 5, 114
  025a1b4  lfs 3, -16740(3)
  025a1b8  lfs 4, -3048(4)
  025a1bc  lis 3, 38
  025a1c0  fmuls 3, 3, 4
  025a1c4  lfs 4, 8(31)
  025a1c8  addi 3, 3, -25632
  025a1cc  lis 4, 122
  025a1d0  lfs 7, 4(31)
  025a1d4  lfs 6, 0(31)
  025a1d8  fmadds 2, 3, 1, 2
  025a1dc  fadds 2, 2, 4
  025a1e0  stfs 2, 8(31)
  025a1e4  lfs 5, 12(3)
  025a1e8  lfs 3, -16732(4)
  025a1ec  lfs 4, -3064(5)
  025a1f0  fsubs 3, 3, 5
  025a1f4  lis 3, 114
  025a1f8  lis 4, 122
  025a1fc  fmadds 3, 3, 4, 5
  025a200  fmuls 7, 7, 3
  025a204  fmuls 6, 6, 3
  025a208  fmuls 2, 2, 3
  025a20c  fmuls 3, 7, 7
  025a210  stfs 6, 0(31)
  025a214  stfs 7, 4(31)
  025a218  stfs 2, 8(31)
  025a21c  lfs 8, -3052(3)
  025a220  fmadds 4, 6, 6, 3
  025a224  lfs 3, -16760(4)
  025a228  fmuls 3, 3, 8
  025a22c  fsqrts 4, 4
  025a230  fcmpu 0, 3, 4
  025a234  cror 6, 1, 2
  025a238  bt 6, 0x25a258
  025a23c  fdivs 3, 3, 4
  025a240  lis 3, 114
  025a244  fmuls 6, 6, 3
  025a248  fmuls 7, 7, 3
  025a24c  stfs 6, 0(31)
  025a250  stfs 7, 4(31)
  025a254  lfs 8, -3052(3)
  025a258  lis 3, 122
  025a25c  fmr 4, 2
  025a260  lfs 3, -16748(3)
  025a264  fmuls 9, 3, 8
  025a268  fcmpu 0, 4, 9
  025a26c  cror 6, 0, 2
  025a270  bt 6, 0x25a2a0
  025a274  lis 3, 122
  025a278  fmsubs 3, 3, 8, 2
  025a27c  lis 4, 114
  025a280  lfs 8, -16724(3)
  025a284  lfs 9, -3064(4)
  025a288  fmuls 8, 8, 9
  025a28c  fmuls 3, 8, 3
  025a290  fdivs 2, 3, 2
  025a294  fadds 2, 2, 5
  025a298  fmuls 4, 4, 2
  025a29c  stfs 4, 8(31)
  025a2a0  lwz 4, 8320(30)
  025a2a4  lis 3, 114
  025a2a8  lis 5, 122
  025a2ac  lis 6, 122
  025a2b0  lfs 2, 16(4)
  025a2b4  lfs 3, 20(4)
  025a2b8  fadds 2, 2, 6
  025a2bc  lfs 5, 24(4)
  025a2c0  fadds 3, 3, 7
  025a2c4  fadds 4, 5, 4
  025a2c8  lfs 5, 28(4)
  025a2cc  lis 7, 122
  025a2d0  stfs 2, 16(4)
  025a2d4  stfs 3, 20(4)
  025a2d8  stfs 4, 24(4)
  025a2dc  stfs 2, 128(30)
  025a2e0  lfs 2, -3048(3)
  025a2e4  stfs 3, 132(30)
  025a2e8  stfs 4, 136(30)
  025a2ec  stfs 5, 140(30)
  025a2f0  lfs 3, 8(31)
  025a2f4  lfs 4, -16720(5)
  025a2f8  lis 3, 122
  025a2fc  fnmsubs 2, 4, 2, 3
  025a300  lfs 3, 52(31)
  025a304  stfs 2, 8(31)
  025a308  lfs 2, -16812(6)
  025a30c  fsubs 2, 3, 2
  025a310  stfs 2, 52(31)
  025a314  lfs 3, 8860(30)
  025a318  lfs 4, -16804(7)
  025a31c  lfs 5, -16808(3)
  025a320  fmuls 3, 4, 3
  025a324  fmadds 1, 5, 1, 3
  025a328  fsubs 1, 2, 1
  025a32c  fcmpu 0, 1, 31
  025a330  stfs 1, 52(31)
  025a334  cror 6, 1, 2
  025a338  bt 6, 0x25a34c
  025a33c  li 4, 0
  025a340  li 3, 1
  025a344  stw 4, 52(31)
  025a348  b 0x25a350
  025a34c  li 3, 0
  025a350  ld 0, 224(1)
  025a354  mtlr 0
  025a358  lfd 30, 192(1)
  025a35c  lfd 31, 200(1)
  025a360  ld 29, 168(1)
  025a364  ld 30, 176(1)
  025a368  ld 31, 184(1)
  025a36c  addi 1, 1, 208
  025a370  blr

M1357_0025a374:   # 0x25a374, 0xd8 bytes
  025a374  stdu 1, -144(1)
  025a378  mflr 0
  025a37c  std 0, 160(1)
  025a380  stfd 31, 136(1)
  025a384  std 30, 120(1)
  025a388  lis 4, 150
  025a38c  std 31, 128(1)
  025a390  lwz 30, 120(3)
  025a394  addic 31, 4, 27456
  025a398  lhz 3, 62(31)
  025a39c  extsh 3, 3
  025a3a0  addic 3, 3, -64
  025a3a4  bl 0x502730
  025a3a8  nop
  025a3ac  lis 3, 122
  025a3b0  lfs 2, 52(30)
  025a3b4  lis 7, 24704
  025a3b8  lfs 3, -16816(3)
  025a3bc  fdivs 2, 2, 3
  025a3c0  li 3, 30
  025a3c4  lhz 4, 62(31)
  025a3c8  lhz 5, 60(31)
  025a3cc  extsh 4, 4
  025a3d0  extsh 6, 5
  025a3d4  addic 4, 4, -30
  025a3d8  addic 5, 6, -50
  025a3dc  addic 6, 6, -30
  025a3e0  fmuls 31, 1, 2
  025a3e4  bl 0x6a634
  025a3e8  nop
  025a3ec  fmr 1, 31
  025a3f0  bl 0x502758
  025a3f4  nop
  025a3f8  lhz 4, 62(31)
  025a3fc  lis 7, 16384
  025a400  lhz 5, 60(31)
  025a404  extsh 6, 4
  025a408  extsh 8, 5
  025a40c  subc 3, 6, 3
  025a410  addic 4, 6, -32
  025a414  addic 3, 3, -32
  025a418  addic 5, 8, -48
  025a41c  addic 6, 8, -32
  025a420  extsw 3, 3
  025a424  ori 7, 7, 128
  025a428  bl 0x6a634
  025a42c  nop
  025a430  ld 0, 160(1)
  025a434  mtlr 0
  025a438  lfd 31, 136(1)
  025a43c  ld 30, 120(1)
  025a440  ld 31, 128(1)
  025a444  addi 1, 1, 144
  025a448  blr

UpdateMoby_1357:   # 0x25a470, 0x864 bytes
  025a470  stdu 1, -160(1)
  025a474  mflr 0
  025a478  std 0, 176(1)
  025a47c  std 31, 152(1)
  025a480  ori 31, 3, 0
  025a484  std 30, 144(1)
  025a488  lbz 3, 32(31)
  025a48c  lwz 30, 120(31)
  025a490  cmpwi 3, 2
  025a494  cmpwi 1, 3, 0
  025a498  cmpwi 6, 3, -1
  025a49c  std 29, 136(1)
  025a4a0  std 28, 128(1)
  025a4a4  std 27, 120(1)
  025a4a8  cmpwi 7, 3, 1
  025a4ac  bt 1, 0x25a4c4
  025a4b0  bt 5, 0x25a4bc
  025a4b4  bf 25, 0x25abb0
  025a4b8  b 0x25a4e4
  025a4bc  bf 29, 0x25a574
  025a4c0  b 0x25a618
  025a4c4  cmpwi 3, 4
  025a4c8  bt 1, 0x25a4d8
  025a4cc  cmpwi 3, 3
  025a4d0  bf 1, 0x25abb0
  025a4d4  b 0x25a808
  025a4d8  cmpwi 3, 6
  025a4dc  bf 1, 0x25a9e4
  025a4e0  b 0x25abb0
  025a4e4  lis 3, 122
  025a4e8  lfs 1, 24(31)
  025a4ec  lis 4, 151
  025a4f0  addic 5, 30, 16
  025a4f4  addic 29, 4, -25376
  025a4f8  li 4, 5
  025a4fc  lfs 2, -16800(3)
  025a500  fadds 1, 1, 2
  025a504  lwz 3, 8320(29)
  025a508  stfs 1, 24(31)
  025a50c  bl 0xf1114
  025a510  nop
  025a514  lfs 1, 16(30)
  025a518  lfs 2, 128(29)
  025a51c  fsubs 1, 1, 2
  025a520  lfs 2, 20(30)
  025a524  lfs 3, 24(30)
  025a528  stfs 1, 16(30)
  025a52c  lfs 1, 132(29)
  025a530  fsubs 1, 2, 1
  025a534  stfs 1, 20(30)
  025a538  lfs 1, 136(29)
  025a53c  fsubs 1, 3, 1
  025a540  stfs 1, 24(30)
  025a544  lbz 3, 83(31)
  025a548  cmpwi 3, 0
  025a54c  bt 2, 0x25a568
  025a550  ori 3, 31, 0
  025a554  li 4, 0
  025a558  li 5, 0
  025a55c  li 6, 10
  025a560  bl 0xfddc0
  025a564  nop
  025a568  li 3, 1
  025a56c  stb 3, 32(31)
  025a570  b 0x25abb0
  025a574  lis 3, 38
  025a578  lis 4, 122
  025a57c  addi 3, 3, -23476
  025a580  lis 5, 114
  025a584  lfs 3, 0(3)
  025a588  lfs 2, -16796(4)
  025a58c  lfs 1, 72(31)
  025a590  fmuls 2, 2, 3
  025a594  lfs 4, -3052(5)
  025a598  fmuls 2, 2, 4
  025a59c  bl 0x502578
  025a5a0  nop
  025a5a4  lis 3, 151
  025a5a8  stfs 1, 72(31)
  025a5ac  lfs 1, 20(31)
  025a5b0  addic 3, 3, -25376
  025a5b4  lfs 2, 16(31)
  025a5b8  lfs 3, 132(3)
  025a5bc  lfs 4, 128(3)
  025a5c0  fsubs 1, 1, 3
  025a5c4  fsubs 2, 2, 4
  025a5c8  lis 3, 122
  025a5cc  fmuls 1, 1, 1
  025a5d0  fmadds 1, 2, 2, 1
  025a5d4  lfs 2, -16792(3)
  025a5d8  fsqrts 1, 1
  025a5dc  fcmpu 0, 1, 2
  025a5e0  cror 6, 1, 2
  025a5e4  bt 6, 0x25abb0
  025a5e8  lbz 3, 83(31)
  025a5ec  cmpwi 3, 0
  025a5f0  bt 2, 0x25a60c
  025a5f4  ori 3, 31, 0
  025a5f8  li 4, 0
  025a5fc  li 5, 0
  025a600  li 6, 10
  025a604  bl 0xfddc0
  025a608  nop
  025a60c  li 3, 2
  025a610  stb 3, 32(31)
  025a614  b 0x25abb0
  025a618  lis 29, 151
  025a61c  li 5, 208
  025a620  addic 29, 29, -25376
  025a624  li 3, 224
  025a628  addic 4, 31, 192
  025a62c  lwz 6, 8320(29)
  025a630  addic 7, 6, 192
  025a634  lvx 2, 5, 6
  025a638  lvx 3, 3, 6
  025a63c  lvx 4, 0, 7
  025a640  stvx 4, 0, 4
  025a644  stvx 2, 5, 31
  025a648  li 4, 5
  025a64c  stvx 3, 3, 31
  025a650  addic 5, 31, 16
  025a654  lwz 6, 8320(29)
  025a658  ori 3, 6, 0
  025a65c  lfs 1, 64(6)
  025a660  stfs 1, 64(31)
  025a664  lfs 1, 68(6)
  025a668  stfs 1, 68(31)
  025a66c  lfs 1, 72(6)
  025a670  stfs 1, 72(31)
  025a674  lfs 1, 76(6)
  025a678  stfs 1, 76(31)
  025a67c  bl 0xf1114
  025a680  nop
  025a684  lwz 3, 764(29)
  025a688  cmpwi 3, 0
  025a68c  bt 2, 0x25a6c8
  025a690  lhz 3, 166(3)
  025a694  cmpwi 3, 1358
  025a698  bf 2, 0x25a6c8
  025a69c  lbz 3, 83(31)
  025a6a0  cmpwi 3, 1
  025a6a4  bt 2, 0x25a6c0
  025a6a8  ori 3, 31, 0
  025a6ac  li 4, 1
  025a6b0  li 5, 0
  025a6b4  li 6, 10
  025a6b8  bl 0xfddc0
  025a6bc  nop
  025a6c0  li 3, 4
  025a6c4  stb 3, 32(31)
  025a6c8  lwz 3, 52(30)
  025a6cc  cmpwi 3, 0
  025a6d0  bf 1, 0x25abb0
  025a6d4  lis 3, 150
  025a6d8  addic 3, 3, 19008
  025a6dc  lwz 3, 164(3)
  025a6e0  rlwinm 3, 3, 0, 25, 25
  025a6e4  cmpwi 3, 0
  025a6e8  bt 2, 0x25abb0
  025a6ec  lhz 3, 782(29)
  025a6f0  cmpwi 3, 0
  025a6f4  bt 2, 0x25abb0
  025a6f8  li 3, 50
  025a6fc  li 4, 0
  025a700  bl 0xb72b0
  025a704  nop
  025a708  lis 3, 38
  025a70c  li 4, 0
  025a710  addi 28, 3, -23476
  025a714  li 3, 19
  025a718  lfs 1, 4(28)
  025a71c  bl 0x85300
  025a720  nop
  025a724  lwz 4, 8320(29)
  025a728  li 3, -1
  025a72c  li 5, 0
  025a730  lis 6, 122
  025a734  lis 7, 114
  025a738  stw 3, 152(4)
  025a73c  stb 5, 0(30)
  025a740  lis 3, 122
  025a744  stb 5, 1(30)
  025a748  stb 5, 2(30)
  025a74c  stb 5, 3(30)
  025a750  stb 5, 4(30)
  025a754  stb 5, 5(30)
  025a758  stb 5, 6(30)
  025a75c  stb 5, 7(30)
  025a760  stb 5, 8(30)
  025a764  stb 5, 9(30)
  025a768  stb 5, 10(30)
  025a76c  stb 5, 11(30)
  025a770  stb 5, 12(30)
  025a774  stb 5, 13(30)
  025a778  stb 5, 14(30)
  025a77c  stb 5, 15(30)
  025a780  lfs 1, -16776(6)
  025a784  lfs 2, -3052(7)
  025a788  lis 5, 114
  025a78c  fmuls 1, 1, 2
  025a790  li 4, 0
  025a794  stfs 1, 8(30)
  025a798  lfs 1, -16716(3)
  025a79c  lfs 2, -3048(5)
  025a7a0  fmuls 1, 1, 2
  025a7a4  stfs 1, 60(30)
  025a7a8  lfs 1, 8(28)
  025a7ac  lfs 2, 12(28)
  025a7b0  bl 0x2f414
  025a7b4  nop
  025a7b8  lis 3, 114
  025a7bc  lis 5, 114
  025a7c0  lis 4, 122
  025a7c4  lis 7, 250
  025a7c8  lis 6, 122
  025a7cc  lfs 1, -11000(3)
  025a7d0  lis 9, 250
  025a7d4  lfs 2, -10996(5)
  025a7d8  lis 8, 122
  025a7dc  lfs 3, -16784(4)
  025a7e0  li 10, 6
  025a7e4  stfs 1, 16164(7)
  025a7e8  lfs 1, -16780(6)
  025a7ec  stfs 2, 16168(9)
  025a7f0  stfs 3, -11000(3)
  025a7f4  stfs 1, -10996(5)
  025a7f8  lwz 3, -16772(8)
  025a7fc  stw 3, 48(30)
  025a800  stb 10, 32(31)
  025a804  b 0x25abb0
  025a808  lis 3, 122
  025a80c  lfs 1, 52(30)
  025a810  lis 4, 122
  025a814  lfs 2, -16820(3)
  025a818  fadds 2, 1, 2
  025a81c  stfs 2, 52(30)
  025a820  lfs 1, -16816(4)
  025a824  fcmpu 0, 2, 1
  025a828  cror 6, 0, 2
  025a82c  bt 6, 0x25a834
  025a830  stfs 1, 52(30)
  025a834  lis 3, 151
  025a838  li 4, 208
  025a83c  addic 29, 3, -25376
  025a840  li 3, 224
  025a844  addic 5, 31, 192
  025a848  lwz 6, 8320(29)
  025a84c  addic 7, 6, 192
  025a850  lvx 2, 4, 6
  025a854  lvx 3, 3, 6
  025a858  lvx 4, 0, 7
  025a85c  stvx 4, 0, 5
  025a860  stvx 2, 4, 31
  025a864  stvx 3, 3, 31
  025a868  li 4, 5
  025a86c  lwz 6, 8320(29)
  025a870  addic 5, 31, 16
  025a874  ori 3, 6, 0
  025a878  lfs 1, 64(6)
  025a87c  stfs 1, 64(31)
  025a880  lfs 1, 68(6)
  025a884  stfs 1, 68(31)
  025a888  lfs 1, 72(6)
  025a88c  stfs 1, 72(31)
  025a890  lfs 1, 76(6)
  025a894  stfs 1, 76(31)
  025a898  bl 0xf1114
  025a89c  nop
  025a8a0  lwz 4, 764(29)
  025a8a4  lbz 3, 83(31)
  025a8a8  cmpwi 4, 0
  025a8ac  bt 2, 0x25a8bc
  025a8b0  lhz 4, 166(4)
  025a8b4  cmpwi 4, 1358
  025a8b8  bt 2, 0x25a8e4
  025a8bc  cmpwi 3, 0
  025a8c0  bt 2, 0x25a8dc
  025a8c4  ori 3, 31, 0
  025a8c8  li 4, 0
  025a8cc  li 5, 0
  025a8d0  li 6, 10
  025a8d4  bl 0xfddc0
  025a8d8  nop
  025a8dc  li 3, 2
  025a8e0  stb 3, 32(31)
  025a8e4  lwz 3, 52(30)
  025a8e8  cmpwi 3, 0
  025a8ec  bf 1, 0x25abb0
  025a8f0  lis 3, 150
  025a8f4  addic 3, 3, 19008
  025a8f8  lwz 3, 164(3)
  025a8fc  rlwinm 3, 3, 0, 25, 25
  025a900  cmpwi 3, 0
  025a904  bt 2, 0x25abb0
  025a908  li 3, 50
  025a90c  li 4, 0
  025a910  bl 0xb72b0
  025a914  nop
  025a918  lis 3, 38
  025a91c  li 4, 0
  025a920  addi 5, 3, -23476
  025a924  li 3, 19
  025a928  lfs 1, 4(5)
  025a92c  bl 0x85300
  025a930  nop
  025a934  lbz 3, 83(31)
  025a938  cmpwi 3, 0
  025a93c  bt 2, 0x25a958
  025a940  ori 3, 31, 0
  025a944  li 4, 0
  025a948  li 5, 0
  025a94c  li 6, 10
  025a950  bl 0xfddc0
  025a954  nop
  025a958  li 3, 0
  025a95c  lis 4, 122
  025a960  lis 5, 114
  025a964  lis 6, 122
  025a968  stb 3, 0(30)
  025a96c  stb 3, 1(30)
  025a970  stb 3, 2(30)
  025a974  stb 3, 3(30)
  025a978  stb 3, 4(30)
  025a97c  stb 3, 5(30)
  025a980  stb 3, 6(30)
  025a984  stb 3, 7(30)
  025a988  stb 3, 8(30)
  025a98c  stb 3, 9(30)
  025a990  stb 3, 10(30)
  025a994  stb 3, 11(30)
  025a998  stb 3, 12(30)
  025a99c  stb 3, 13(30)
  025a9a0  stb 3, 14(30)
  025a9a4  stb 3, 15(30)
  025a9a8  lfs 1, -16716(4)
  025a9ac  lfs 2, -3048(5)
  025a9b0  lis 3, 122
  025a9b4  lis 4, 114
  025a9b8  lwz 6, -16764(6)
  025a9bc  fmuls 1, 1, 2
  025a9c0  li 5, 5
  025a9c4  stfs 1, 60(30)
  025a9c8  lfs 1, -16768(3)
  025a9cc  lfs 2, -3052(4)
  025a9d0  stw 6, 48(30)
  025a9d4  fmuls 1, 1, 2
  025a9d8  stfs 1, 8(30)
  025a9dc  stb 5, 32(31)
  025a9e0  b 0x25abb0
  025a9e4  lis 3, 38
  025a9e8  ori 4, 30, 0
  025a9ec  addi 5, 3, -23476
  025a9f0  ori 3, 31, 0
  025a9f4  lfs 1, 16(5)
  025a9f8  bl 0x259bf0
  025a9fc  lis 29, 151
  025aa00  li 4, 208
  025aa04  addic 29, 29, -25376
  025aa08  li 5, 224
  025aa0c  addic 6, 31, 192
  025aa10  ori 27, 3, 0
  025aa14  addic 28, 31, 16
  025aa18  lwz 7, 8320(29)
  025aa1c  addic 8, 7, 192
  025aa20  lvx 2, 4, 7
  025aa24  lvx 3, 5, 7
  025aa28  lvx 4, 0, 8
  025aa2c  stvx 4, 0, 6
  025aa30  stvx 2, 4, 31
  025aa34  stvx 3, 5, 31
  025aa38  lwz 6, 8320(29)
  025aa3c  li 4, 5
  025aa40  ori 5, 28, 0
  025aa44  ori 3, 6, 0
  025aa48  lfs 1, 64(6)
  025aa4c  stfs 1, 64(31)
  025aa50  lfs 1, 68(6)
  025aa54  stfs 1, 68(31)
  025aa58  lfs 1, 72(6)
  025aa5c  stfs 1, 72(31)
  025aa60  lfs 1, 76(6)
  025aa64  stfs 1, 76(31)
  025aa68  bl 0xf1114
  025aa6c  nop
  025aa70  addic 3, 30, 48
  025aa74  bl 0x4fff60
  025aa78  nop
  025aa7c  cmpwi 3, 0
  025aa80  bf 2, 0x25aa8c
  025aa84  cmpwi 27, 0
  025aa88  bt 2, 0x25ab04
  025aa8c  lis 4, 38
  025aa90  addic 3, 29, 128
  025aa94  addi 5, 4, -23476
  025aa98  li 4, 0
  025aa9c  lfs 1, 20(5)
  025aaa0  bl 0xffb70
  025aaa4  nop
  025aaa8  lfs 2, 136(29)
  025aaac  fcmpu 0, 1, 2
  025aab0  cror 6, 1, 2
  025aab4  bt 6, 0x25aac0
  025aab8  cmpwi 27, 0
  025aabc  bt 2, 0x25ab04
  025aac0  li 5, 0
  025aac4  li 3, 0
  025aac8  li 4, 1
  025aacc  stw 5, 48(30)
  025aad0  bl 0xb72b0
  025aad4  nop
  025aad8  lbz 3, 83(31)
  025aadc  cmpwi 3, 0
  025aae0  bt 2, 0x25aafc
  025aae4  ori 3, 31, 0
  025aae8  li 4, 0
  025aaec  li 5, 0
  025aaf0  li 6, 10
  025aaf4  bl 0xfddc0
  025aaf8  nop
  025aafc  li 3, 2
  025ab00  stb 3, 32(31)
  025ab04  lis 4, 122
  025ab08  ori 3, 28, 0
  025ab0c  li 5, 2
  025ab10  lfs 1, -16728(4)
  025ab14  lwz 6, 8320(29)
  025ab18  bl 0x59e20
  025ab1c  nop
  025ab20  cmpwi 3, 0
  025ab24  bt 2, 0x25abb0
  025ab28  lfs 1, 128(29)
  025ab2c  lfs 2, 16(31)
  025ab30  fsubs 1, 1, 2
  025ab34  lis 3, 161
  025ab38  addic 3, 3, 2368
  025ab3c  stfs 1, 16(30)
  025ab40  lfs 1, 132(29)
  025ab44  lfs 2, 20(31)
  025ab48  fsubs 1, 1, 2
  025ab4c  stfs 1, 20(30)
  025ab50  lfs 1, 136(29)
  025ab54  lfs 2, 24(31)
  025ab58  fsubs 1, 1, 2
  025ab5c  stfs 1, 24(30)
  025ab60  lfs 1, 140(29)
  025ab64  stfs 1, 28(30)
  025ab68  lfs 1, 48(3)
  025ab6c  stfs 1, 16(31)
  025ab70  lfs 2, 52(3)
  025ab74  stfs 2, 20(31)
  025ab78  lfs 3, 56(3)
  025ab7c  stfs 3, 24(31)
  025ab80  lfs 4, 60(3)
  025ab84  stfs 4, 28(31)
  025ab88  lfs 5, 16(30)
  025ab8c  fadds 1, 1, 5
  025ab90  stfs 1, 128(29)
  025ab94  lfs 1, 20(30)
  025ab98  fadds 1, 2, 1
  025ab9c  stfs 1, 132(29)
  025aba0  lfs 1, 24(30)
  025aba4  stfs 4, 140(29)
  025aba8  fadds 1, 3, 1
  025abac  stfs 1, 136(29)
  025abb0  lis 4, 38
  025abb4  lwz 5, 16(31)
  025abb8  lfs 1, 16(31)
  025abbc  lis 3, 16672
  025abc0  addi 4, 4, -23476
  025abc4  srawi 6, 5, 31
  025abc8  srwi 7, 6, 1
  025abcc  lfs 2, 24(4)
  025abd0  xor 4, 7, 5
  025abd4  subc 4, 4, 6
  025abd8  cmpw 4, 3
  025abdc  bf 0, 0x25abe8
  025abe0  fmr 1, 2
  025abe4  stw 3, 16(31)
  025abe8  fmr 3, 1
  025abec  lis 4, 38
  025abf0  addi 4, 4, -23476
  025abf4  lfs 1, 28(4)
  025abf8  fcmpu 0, 3, 1
  025abfc  cror 6, 0, 2
  025ac00  bt 6, 0x25ac10
  025ac04  lis 4, 17533
  025ac08  ori 4, 4, 16384
  025ac0c  stw 4, 16(31)
  025ac10  lwz 4, 20(31)
  025ac14  lfs 3, 20(31)
  025ac18  srawi 5, 4, 31
  025ac1c  srwi 6, 5, 1
  025ac20  xor 4, 6, 4
  025ac24  subc 4, 4, 5
  025ac28  cmpw 4, 3
  025ac2c  bf 0, 0x25ac38
  025ac30  fmr 3, 2
  025ac34  stw 3, 20(31)
  025ac38  fcmpu 0, 3, 1
  025ac3c  cror 6, 0, 2
  025ac40  bt 6, 0x25ac50
  025ac44  lis 4, 17533
  025ac48  ori 4, 4, 16384
  025ac4c  stw 4, 20(31)
  025ac50  lwz 4, 24(31)
  025ac54  lfs 3, 24(31)
  025ac58  srawi 5, 4, 31
  025ac5c  srwi 6, 5, 1
  025ac60  xor 4, 6, 4
  025ac64  subc 4, 4, 5
  025ac68  cmpw 4, 3
  025ac6c  bf 0, 0x25ac78
  025ac70  fmr 3, 2
  025ac74  stw 3, 24(31)
  025ac78  fcmpu 0, 3, 1
  025ac7c  cror 6, 0, 2
  025ac80  bt 6, 0x25ac90
  025ac84  lis 3, 17533
  025ac88  ori 3, 3, 16384
  025ac8c  stw 3, 24(31)
  025ac90  lbz 3, 32(31)
  025ac94  cmpwi 3, 2
  025ac98  bf 1, 0x25acb0
  025ac9c  lis 3, 113
  025aca0  ori 4, 31, 0
  025aca4  addic 3, 3, -24400
  025aca8  bl 0x6d720
  025acac  nop
  025acb0  ld 0, 176(1)
  025acb4  mtlr 0
  025acb8  ld 27, 120(1)
  025acbc  ld 28, 128(1)
  025acc0  ld 29, 136(1)
  025acc4  ld 30, 144(1)
  025acc8  ld 31, 152(1)
  025accc  addi 1, 1, 160
  025acd0  blr

M1357_0025acd4:   # 0x25acd4, 0x14 bytes
  025acd4  lis 3, 122
  025acd8  lis 4, 1
  025acdc  addic 3, 3, -16704
  025ace0  stw 4, 72(3)
  025ace4  blr

M1357_0025ace8:   # 0x25ace8, 0x58 bytes
  025ace8  lwz 4, 120(3)
  025acec  lfs 1, 208(4)
  025acf0  lfs 2, 192(4)
  025acf4  lfs 3, 232(4)
  025acf8  fsubs 1, 1, 2
  025acfc  lfs 4, 212(4)
  025ad00  lfs 5, 196(4)
  025ad04  fsubs 4, 4, 5
  025ad08  lfs 5, 216(4)
  025ad0c  lfs 6, 200(4)
  025ad10  lfs 7, 220(4)
  025ad14  fsubs 5, 5, 6
  025ad18  fmadds 1, 3, 1, 2
  025ad1c  stfs 1, 16(3)
  025ad20  lfs 1, 196(4)
  025ad24  fmadds 1, 3, 4, 1
  025ad28  stfs 1, 20(3)
  025ad2c  lfs 1, 200(4)
  025ad30  stfs 7, 28(3)
  025ad34  fmadds 1, 3, 5, 1
  025ad38  stfs 1, 24(3)
  025ad3c  blr

M1357_0025ad40:   # 0x25ad40, 0x4c bytes
  025ad40  stdu 1, -128(1)
  025ad44  mflr 0
  025ad48  std 0, 144(1)
  025ad4c  std 31, 120(1)
  025ad50  ori 31, 3, 0
  025ad54  lis 4, 51
  025ad58  li 5, 0
  025ad5c  bl 0x10675c
  025ad60  nop
  025ad64  cmpwi 3, 0
  025ad68  bt 2, 0x25ad78
  025ad6c  ori 3, 31, 0
  025ad70  bl 0xefb38
  025ad74  nop
  025ad78  ld 0, 144(1)
  025ad7c  mtlr 0
  025ad80  ld 31, 120(1)
  025ad84  addi 1, 1, 128
  025ad88  blr

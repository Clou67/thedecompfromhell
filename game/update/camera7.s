# game/update/camera7.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x499fc, 0x14 bytes
  00499fc  lis 3, 114
  0049a00  lis 4, 1
  0049a04  addic 3, 3, -6280
  0049a08  stw 4, 72(3)
  0049a0c  blr

InitCamera_7:   # 0x49a50, 0x548 bytes
  0049a50  stdu 1, -112(1)
  0049a54  lwz 8, 112(3)
  0049a58  li 7, 0
  0049a5c  lis 4, 151
  0049a60  lis 5, 5
  0049a64  addi 5, 5, -26096
  0049a68  stw 7, 128(8)
  0049a6c  lwz 4, -25488(4)
  0049a70  std 31, 104(1)
  0049a74  std 30, 96(1)
  0049a78  cmpwi 4, 14
  0049a7c  bf 2, 0x49aa4
  0049a80  lis 4, 151
  0049a84  addic 4, 4, -25376
  0049a88  lwz 4, 8324(4)
  0049a8c  cmpwi 4, 44
  0049a90  cmpwi 1, 4, 45
  0049a94  bt 2, 0x49a9c
  0049a98  bf 6, 0x49aa4
  0049a9c  lfs 4, 0(5)
  0049aa0  b 0x49aa8
  0049aa4  lfs 4, 4(5)
  0049aa8  lis 10, 151
  0049aac  lis 4, 15958
  0049ab0  stfs 4, 140(8)
  0049ab4  addic 10, 10, -25376
  0049ab8  vspltisw 2, -1
  0049abc  lis 6, 15076
  0049ac0  ori 4, 4, 30544
  0049ac4  ori 6, 6, 50056
  0049ac8  lis 9, -17522
  0049acc  lwz 12, 8320(10)
  0049ad0  lis 11, 16532
  0049ad4  stw 4, 136(8)
  0049ad8  ori 9, 9, 64053
  0049adc  stw 12, 132(8)
  0049ae0  ori 4, 11, 31457
  0049ae4  stw 6, 152(8)
  0049ae8  lis 11, 16128
  0049aec  lwz 12, 112(3)
  0049af0  lis 6, 15692
  0049af4  lis 31, 16384
  0049af8  stw 9, 156(8)
  0049afc  ori 6, 6, 52429
  0049b00  vslw 2, 2, 2
  0049b04  lis 9, 15395
  0049b08  lis 30, 16025
  0049b0c  stw 4, 160(12)
  0049b10  lfs 4, 8(5)
  0049b14  stw 11, 164(12)
  0049b18  ori 4, 9, 55050
  0049b1c  stw 31, 176(12)
  0049b20  ori 9, 30, 39322
  0049b24  stw 6, 180(12)
  0049b28  li 31, -3056
  0049b2c  lwz 11, 112(3)
  0049b30  li 6, 16
  0049b34  lis 12, 114
  0049b38  stw 4, 16(11)
  0049b3c  stw 9, 20(11)
  0049b40  lfs 1, 12(5)
  0049b44  stw 7, 24(11)
  0049b48  <unknown>
  0049b4c  <unknown>
  0049b50  li 6, 30
  0049b54  vspltw 3, 3, 0
  0049b58  lis 4, 15523
  0049b5c  lis 9, 15948
  0049b60  ori 12, 4, 55050
  0049b64  vmaddfp 2, 4, 3, 2
  0049b68  ori 9, 9, 52429
  0049b6c  lis 4, 149
  0049b70  addic 4, 4, 5056
  0049b74  vctsxs 2, 2, 0
  0049b78  vsplth 2, 2, 1
  0049b7c  stvehx 2, 6, 11
  0049b80  sth 7, 28(11)
  0049b84  stw 7, 12(11)
  0049b88  stw 7, 8(11)
  0049b8c  stw 7, 4(11)
  0049b90  stw 7, 0(11)
  0049b94  lwz 6, 112(3)
  0049b98  stw 12, 52(6)
  0049b9c  stw 9, 56(6)
  0049ba0  stw 7, 60(6)
  0049ba4  stw 7, 48(6)
  0049ba8  lwz 6, 112(3)
  0049bac  stw 7, 188(6)
  0049bb0  lwz 9, 388(4)
  0049bb4  lfs 3, 48(9)
  0049bb8  stfs 3, 48(3)
  0049bbc  lfs 2, 52(9)
  0049bc0  stfs 2, 52(3)
  0049bc4  lfs 2, 56(9)
  0049bc8  stfs 2, 56(3)
  0049bcc  lfs 2, 60(9)
  0049bd0  stfs 2, 60(3)
  0049bd4  lfs 2, 0(9)
  0049bd8  stfs 2, 0(3)
  0049bdc  lfs 5, 4(9)
  0049be0  stfs 5, 4(3)
  0049be4  lfs 6, 8(9)
  0049be8  stfs 6, 8(3)
  0049bec  lfs 7, 12(9)
  0049bf0  stfs 7, 12(3)
  0049bf4  lfs 8, 16(9)
  0049bf8  stfs 8, 16(3)
  0049bfc  lfs 8, 20(9)
  0049c00  stfs 8, 20(3)
  0049c04  lfs 8, 24(9)
  0049c08  stfs 8, 24(3)
  0049c0c  lfs 8, 28(9)
  0049c10  stfs 8, 28(3)
  0049c14  lfs 8, 32(9)
  0049c18  stfs 8, 32(3)
  0049c1c  lfs 8, 36(9)
  0049c20  stfs 8, 36(3)
  0049c24  lfs 8, 40(9)
  0049c28  stfs 8, 40(3)
  0049c2c  lfs 8, 44(9)
  0049c30  sth 7, 126(3)
  0049c34  stfs 8, 44(3)
  0049c38  stfs 2, 64(3)
  0049c3c  stfs 5, 68(3)
  0049c40  stfs 6, 72(3)
  0049c44  lwz 11, 8324(10)
  0049c48  stfs 7, 76(3)
  0049c4c  lfs 2, 2476(10)
  0049c50  cmpwi 11, 44
  0049c54  lwz 9, 2452(10)
  0049c58  cmpwi 1, 11, 45
  0049c5c  bt 2, 0x49c64
  0049c60  bf 6, 0x49d14
  0049c64  lfs 1, 20(5)
  0049c68  lfs 3, 24(5)
  0049c6c  fadds 1, 2, 1
  0049c70  lfs 4, 28(5)
  0049c74  fsubs 5, 3, 2
  0049c78  ori 3, 9, 0
  0049c7c  fsubs 3, 3, 1
  0049c80  fsub 7, 2, 5
  0049c84  fsubs 6, 4, 1
  0049c88  fsubs 4, 4, 2
  0049c8c  fsub 8, 1, 3
  0049c90  fsel 5, 7, 5, 2
  0049c94  fsel 1, 8, 3, 1
  0049c98  fsub 7, 4, 5
  0049c9c  lfs 3, 32(5)
  0049ca0  fsub 8, 6, 1
  0049ca4  fsel 4, 7, 4, 5
  0049ca8  lfs 5, 36(5)
  0049cac  fsel 1, 8, 6, 1
  0049cb0  fmuls 7, 4, 4
  0049cb4  lfs 6, 40(5)
  0049cb8  lfs 10, 44(5)
  0049cbc  stw 7, 120(8)
  0049cc0  fmuls 8, 1, 1
  0049cc4  fmuls 9, 7, 4
  0049cc8  fmuls 11, 8, 1
  0049ccc  fmuls 12, 7, 9
  0049cd0  fmadds 4, 9, 3, 4
  0049cd4  fmuls 9, 8, 11
  0049cd8  fmadds 1, 11, 3, 1
  0049cdc  fmuls 3, 7, 12
  0049ce0  fmadds 4, 12, 5, 4
  0049ce4  fmuls 11, 8, 9
  0049ce8  fmadds 1, 9, 5, 1
  0049cec  fmuls 5, 7, 3
  0049cf0  fmadds 3, 3, 6, 4
  0049cf4  fmuls 4, 8, 11
  0049cf8  fmadds 6, 11, 6, 1
  0049cfc  fmr 1, 2
  0049d00  fmadds 3, 5, 10, 3
  0049d04  fmadds 2, 4, 10, 6
  0049d08  stfs 3, 116(8)
  0049d0c  stfs 2, 112(8)
  0049d10  b 0x49f3c
  0049d14  ori 9, 3, 0
  0049d18  lwz 3, 2404(10)
  0049d1c  lfs 7, 16(3)
  0049d20  fsubs 7, 7, 3
  0049d24  fmr 3, 1
  0049d28  stfs 7, 112(8)
  0049d2c  lfs 5, 20(3)
  0049d30  lfs 2, 52(9)
  0049d34  fsubs 5, 5, 2
  0049d38  stw 7, 124(8)
  0049d3c  fmr 2, 3
  0049d40  fmuls 6, 5, 5
  0049d44  fmadds 6, 7, 7, 6
  0049d48  fsqrts 8, 6
  0049d4c  fcmpu 0, 8, 2
  0049d50  bt 2, 0x49d94
  0049d54  frsqrte 2, 6
  0049d58  lfs 3, 48(5)
  0049d5c  fmuls 8, 6, 2
  0049d60  fmuls 9, 4, 2
  0049d64  fnmsubs 8, 8, 2, 3
  0049d68  fmadds 2, 8, 9, 2
  0049d6c  fmuls 8, 6, 2
  0049d70  fmuls 9, 4, 2
  0049d74  fnmsubs 8, 8, 2, 3
  0049d78  fmadds 2, 8, 9, 2
  0049d7c  fmuls 6, 6, 2
  0049d80  fmuls 4, 4, 2
  0049d84  fnmsubs 3, 6, 2, 3
  0049d88  fmadds 3, 3, 4, 2
  0049d8c  fmuls 2, 7, 3
  0049d90  fmuls 3, 5, 3
  0049d94  fabs 5, 2
  0049d98  stfs 2, 112(8)
  0049d9c  fabs 4, 3
  0049da0  stfs 3, 116(8)
  0049da4  stw 7, 120(8)
  0049da8  stfs 2, 48(1)
  0049dac  stfs 3, 52(1)
  0049db0  lis 7, 115
  0049db4  addic 7, 7, 22784
  0049db8  fsubs 2, 5, 4
  0049dbc  stfs 2, 56(1)
  0049dc0  lwz 8, 48(1)
  0049dc4  lfs 2, 48(1)
  0049dc8  lwz 9, 52(1)
  0049dcc  lfs 3, 52(1)
  0049dd0  fabs 2, 2
  0049dd4  lwz 10, 56(1)
  0049dd8  rlwinm 9, 9, 3, 29, 29
  0049ddc  lfs 6, 56(1)
  0049de0  fabs 8, 3
  0049de4  rlwimi 9, 10, 2, 30, 30
  0049de8  fsub 7, 6, 1
  0049dec  fsub 6, 6, 1
  0049df0  rlwimi 9, 8, 4, 28, 28
  0049df4  ori 8, 7, 0
  0049df8  rlwimi 8, 9, 2, 26, 28
  0049dfc  slwi 9, 9, 2
  0049e00  clrldi 8, 8, 32
  0049e04  fsel 4, 7, 2, 4
  0049e08  lfsx 2, 7, 9
  0049e0c  lfs 3, 4(8)
  0049e10  fsel 5, 6, 8, 5
  0049e14  fcmpu 0, 4, 1
  0049e18  bt 1, 0x49e20
  0049e1c  b 0x49f3c
  0049e20  fsubs 6, 5, 4
  0049e24  fadds 4, 5, 4
  0049e28  addic 10, 1, 16
  0049e2c  li 7, 2
  0049e30  addic 8, 10, 60
  0049e34  addic 9, 10, 44
  0049e38  mtctr 7
  0049e3c  fdivs 4, 6, 4
  0049e40  fmuls 6, 4, 4
  0049e44  stfs 4, 72(1)
  0049e48  stfs 4, 64(1)
  0049e4c  stfs 4, 68(1)
  0049e50  stfs 4, 60(1)
  0049e54  lfs 7, 72(1)
  0049e58  lfs 8, 64(1)
  0049e5c  lfs 9, 68(1)
  0049e60  fmuls 4, 6, 6
  0049e64  fmuls 8, 8, 6
  0049e68  fmuls 7, 7, 4
  0049e6c  fmuls 5, 4, 4
  0049e70  fmuls 4, 9, 4
  0049e74  stfs 8, 64(1)
  0049e78  fmuls 6, 7, 6
  0049e7c  stfs 4, 68(1)
  0049e80  stfs 6, 72(1)
  0049e84  lfs 4, 44(10)
  0049e88  fmuls 4, 4, 5
  0049e8c  stfs 4, 60(10)
  0049e90  lfs 4, 4(9)
  0049e94  addic 9, 9, 8
  0049e98  fmuls 4, 4, 5
  0049e9c  addic 10, 10, 8
  0049ea0  stfs 4, 4(8)
  0049ea4  addic 8, 8, 8
  0049ea8  bdnz 0x49e84
  0049eac  ori 11, 1, 0
  0049eb0  li 8, 4
  0049eb4  lis 10, 115
  0049eb8  addic 9, 11, 60
  0049ebc  mtctr 8
  0049ec0  addic 10, 10, 22752
  0049ec4  ori 8, 9, 0
  0049ec8  lfs 4, 60(11)
  0049ecc  lfs 5, 0(10)
  0049ed0  fmuls 4, 4, 5
  0049ed4  lfs 5, 4(10)
  0049ed8  addic 10, 10, 8
  0049edc  stfs 4, 60(11)
  0049ee0  lfs 4, 4(9)
  0049ee4  addic 11, 11, 8
  0049ee8  fmuls 4, 4, 5
  0049eec  stfs 4, 4(9)
  0049ef0  addic 9, 9, 8
  0049ef4  bdnz 0x49ec8
  0049ef8  ori 9, 7, 0
  0049efc  ori 7, 1, 0
  0049f00  mtctr 9
  0049f04  lfs 4, 60(7)
  0049f08  fadds 1, 1, 4
  0049f0c  lfs 4, 4(8)
  0049f10  addic 7, 7, 16
  0049f14  lfs 5, 8(8)
  0049f18  lfs 6, 12(8)
  0049f1c  addic 8, 8, 16
  0049f20  fadds 1, 1, 4
  0049f24  fadds 1, 1, 5
  0049f28  fadds 1, 1, 6
  0049f2c  bdnz 0x49f04
  0049f30  lfs 4, 52(5)
  0049f34  fadds 1, 1, 4
  0049f38  fmadds 1, 1, 2, 3
  0049f3c  li 7, 2
  0049f40  stfs 1, 184(6)
  0049f44  li 8, 1
  0049f48  stw 3, 192(6)
  0049f4c  li 9, 56
  0049f50  vspltisw 3, -1
  0049f54  lis 10, 114
  0049f58  stb 7, 627(4)
  0049f5c  li 11, -3056
  0049f60  sth 8, 624(4)
  0049f64  vslw 3, 3, 3
  0049f68  <unknown>
  0049f6c  li 3, 756
  0049f70  vspltw 2, 2, 0
  0049f74  <unknown>
  0049f78  vmaddfp 2, 4, 2, 3
  0049f7c  vctsxs 2, 2, 0
  0049f80  vspltw 2, 2, 0
  0049f84  stvewx 2, 3, 4
  0049f88  ld 30, 96(1)
  0049f8c  ld 31, 104(1)
  0049f90  addi 1, 1, 112
  0049f94  blr

Cam7_UpdatePos:   # 0x49ff0, 0xb84 bytes
  0049ff0  stdu 1, -336(1)
  0049ff4  mflr 0
  0049ff8  std 0, 352(1)
  0049ffc  stfd 23, 264(1)
  004a000  stfd 24, 272(1)
  004a004  stfd 25, 280(1)
  004a008  stfd 26, 288(1)
  004a00c  stfd 27, 296(1)
  004a010  stfd 28, 304(1)
  004a014  stfd 29, 312(1)
  004a018  stfd 30, 320(1)
  004a01c  stfd 31, 328(1)
  004a020  std 28, 232(1)
  004a024  std 31, 256(1)
  004a028  lis 28, 151
  004a02c  ori 31, 3, 0
  004a030  std 29, 240(1)
  004a034  addic 28, 28, -25376
  004a038  lwz 29, 112(31)
  004a03c  lwz 3, 2452(28)
  004a040  std 30, 248(1)
  004a044  std 27, 224(1)
  004a048  std 26, 216(1)
  004a04c  cmpwi 3, 0
  004a050  bt 2, 0x4a0c0
  004a054  lwz 4, 8324(28)
  004a058  cmpwi 4, 44
  004a05c  bf 2, 0x4a0c0
  004a060  lfs 31, 24(3)
  004a064  lfs 1, 136(28)
  004a068  fsubs 31, 31, 1
  004a06c  lfs 1, 2464(28)
  004a070  fcmpu 0, 31, 1
  004a074  cror 6, 0, 2
  004a078  bt 6, 0x4a084
  004a07c  fmr 31, 1
  004a080  b 0x4a0a0
  004a084  lis 3, 5
  004a088  addi 3, 3, -24680
  004a08c  lfs 2, 0(3)
  004a090  fcmpu 0, 31, 2
  004a094  cror 6, 1, 2
  004a098  bt 6, 0x4a0a0
  004a09c  fmr 31, 2
  004a0a0  fdivs 1, 31, 1
  004a0a4  lis 3, 5
  004a0a8  addi 3, 3, -24680
  004a0ac  lfs 31, 4(3)
  004a0b0  lfs 2, 8(3)
  004a0b4  fmuls 31, 1, 31
  004a0b8  fadds 1, 1, 2
  004a0bc  b 0x4a0d0
  004a0c0  lis 3, 5
  004a0c4  addi 3, 3, -24680
  004a0c8  lfs 1, 12(3)
  004a0cc  lfs 31, 4(3)
  004a0d0  lis 3, 5
  004a0d4  lis 4, 149
  004a0d8  addi 30, 3, -24680
  004a0dc  addic 27, 4, 5056
  004a0e0  lis 26, 114
  004a0e4  lfs 30, 16(30)
  004a0e8  lwz 3, 384(27)
  004a0ec  lfs 2, -3052(26)
  004a0f0  fmuls 2, 2, 30
  004a0f4  lwz 3, 112(3)
  004a0f8  addic 3, 3, 160
  004a0fc  bl 0x109af0
  004a100  nop
  004a104  lfs 2, 20(30)
  004a108  fmr 1, 31
  004a10c  lwz 3, 384(27)
  004a110  lfs 3, -3052(26)
  004a114  fmuls 2, 3, 2
  004a118  lwz 3, 112(3)
  004a11c  addic 3, 3, 176
  004a120  bl 0x109af0
  004a124  nop
  004a128  lis 4, 151
  004a12c  lfs 1, -3052(26)
  004a130  lwz 3, 384(27)
  004a134  fmuls 1, 1, 30
  004a138  lwz 4, -25488(4)
  004a13c  cmpwi 4, 14
  004a140  bf 2, 0x4a178
  004a144  lwz 4, 8324(28)
  004a148  cmpwi 4, 44
  004a14c  bf 2, 0x4a178
  004a150  lis 4, 5
  004a154  fmr 2, 1
  004a158  addi 4, 4, -24680
  004a15c  lwz 3, 112(3)
  004a160  addic 3, 3, 140
  004a164  lfs 1, 24(4)
  004a168  fadds 1, 31, 1
  004a16c  bl 0x109af0
  004a170  nop
  004a174  b 0x4a19c
  004a178  lis 4, 5
  004a17c  fmr 2, 1
  004a180  addi 4, 4, -24680
  004a184  lwz 3, 112(3)
  004a188  addic 3, 3, 140
  004a18c  lfs 1, 28(4)
  004a190  fsubs 1, 31, 1
  004a194  bl 0x109af0
  004a198  nop
  004a19c  lwz 3, 8324(28)
  004a1a0  cmpwi 3, 44
  004a1a4  cmpwi 1, 3, 37
  004a1a8  bf 2, 0x4a64c
  004a1ac  lis 3, 151
  004a1b0  lwz 3, -25488(3)
  004a1b4  cmpwi 6, 3, 7
  004a1b8  cmpwi 3, 14
  004a1bc  cror 2, 2, 26
  004a1c0  cmpwi 1, 3, 9
  004a1c4  bt 2, 0x4a1cc
  004a1c8  bf 6, 0x4a1e4
  004a1cc  lwz 6, 2452(28)
  004a1d0  cmpwi 6, 0
  004a1d4  bt 2, 0x4a214
  004a1d8  lbz 3, 33(6)
  004a1dc  cmpwi 3, 255
  004a1e0  bf 2, 0x4a214
  004a1e4  lis 3, 5
  004a1e8  lfs 1, 184(29)
  004a1ec  lfs 2, 152(28)
  004a1f0  addic 5, 29, 188
  004a1f4  addi 3, 3, -24680
  004a1f8  lfs 3, 32(3)
  004a1fc  lfs 4, 36(3)
  004a200  lfs 5, 0(3)
  004a204  bl 0x50288
  004a208  nop
  004a20c  stfs 1, 184(29)
  004a210  b 0x4a6c0
  004a214  lis 4, 5
  004a218  lbz 7, 33(6)
  004a21c  lis 3, 165
  004a220  addi 4, 4, -24680
  004a224  addic 5, 3, -28284
  004a228  slwi 7, 7, 2
  004a22c  li 3, 0
  004a230  lfs 1, 40(4)
  004a234  lwzx 4, 5, 7
  004a238  cmpwi 4, 0
  004a23c  bt 2, 0x4a5e0
  004a240  lis 5, 5
  004a244  lis 7, 164
  004a248  addi 5, 5, -24680
  004a24c  lfs 8, 0(5)
  004a250  lfs 9, 28(5)
  004a254  lfs 10, 44(5)
  004a258  lfs 11, 48(5)
  004a25c  lfs 12, 52(5)
  004a260  lfs 13, 56(5)
  004a264  lfs 0, 60(5)
  004a268  lfs 31, 64(5)
  004a26c  lfs 30, 68(5)
  004a270  lfs 29, 72(5)
  004a274  lfs 28, 76(5)
  004a278  lhz 5, 0(4)
  004a27c  lwz 8, -28512(7)
  004a280  rlwinm 5, 5, 8, 9, 23
  004a284  addc 5, 8, 5
  004a288  clrldi 5, 5, 32
  004a28c  cmpw 5, 6
  004a290  bt 2, 0x4a3d4
  004a294  lhz 8, 166(5)
  004a298  cmpwi 8, 803
  004a29c  cmpwi 1, 8, 758
  004a2a0  bt 2, 0x4a2a8
  004a2a4  bf 6, 0x4a3d4
  004a2a8  lfs 3, 20(5)
  004a2ac  lfs 2, 20(6)
  004a2b0  lfs 4, 16(5)
  004a2b4  fsubs 3, 3, 2
  004a2b8  lfs 2, 16(6)
  004a2bc  fsubs 2, 4, 2
  004a2c0  lfs 4, 24(5)
  004a2c4  lfs 5, 24(6)
  004a2c8  fsubs 7, 4, 5
  004a2cc  fmuls 4, 3, 3
  004a2d0  fmr 5, 8
  004a2d4  fmadds 4, 2, 2, 4
  004a2d8  fmr 6, 5
  004a2dc  fmadds 7, 7, 7, 4
  004a2e0  fsqrts 4, 7
  004a2e4  fcmpu 0, 4, 6
  004a2e8  bt 2, 0x4a328
  004a2ec  frsqrte 5, 7
  004a2f0  fmuls 6, 7, 5
  004a2f4  fmuls 27, 9, 5
  004a2f8  fnmsubs 6, 6, 5, 10
  004a2fc  fmadds 5, 6, 27, 5
  004a300  fmuls 6, 7, 5
  004a304  fmuls 27, 9, 5
  004a308  fnmsubs 6, 6, 5, 10
  004a30c  fmadds 5, 6, 27, 5
  004a310  fmuls 6, 7, 5
  004a314  fmuls 7, 9, 5
  004a318  fnmsubs 6, 6, 5, 10
  004a31c  fmadds 6, 6, 7, 5
  004a320  fmuls 5, 2, 6
  004a324  fmuls 6, 3, 6
  004a328  lfs 2, 152(28)
  004a32c  fadds 3, 2, 11
  004a330  fsubs 7, 12, 2
  004a334  fsubs 27, 13, 2
  004a338  fsubs 26, 12, 3
  004a33c  fsub 25, 2, 7
  004a340  fsubs 24, 13, 3
  004a344  fsub 23, 3, 26
  004a348  fsel 2, 25, 7, 2
  004a34c  fsel 3, 23, 26, 3
  004a350  fsub 7, 27, 2
  004a354  fsub 26, 24, 3
  004a358  fsel 2, 7, 27, 2
  004a35c  fsel 3, 26, 24, 3
  004a360  fmuls 7, 2, 2
  004a364  fmuls 27, 3, 3
  004a368  fmuls 26, 7, 2
  004a36c  fmuls 25, 27, 3
  004a370  fmuls 24, 7, 26
  004a374  fmadds 2, 26, 0, 2
  004a378  fmuls 26, 27, 25
  004a37c  fmadds 3, 25, 0, 3
  004a380  fmuls 25, 7, 24
  004a384  fmadds 2, 24, 31, 2
  004a388  fmuls 24, 27, 26
  004a38c  fmadds 3, 26, 31, 3
  004a390  fmuls 7, 7, 25
  004a394  fmadds 2, 25, 30, 2
  004a398  fmuls 27, 27, 24
  004a39c  fmadds 3, 24, 30, 3
  004a3a0  fmadds 2, 7, 29, 2
  004a3a4  fmadds 3, 27, 29, 3
  004a3a8  fmuls 2, 2, 6
  004a3ac  fmadds 5, 3, 5, 2
  004a3b0  fcmpu 0, 5, 8
  004a3b4  cror 6, 0, 2
  004a3b8  bt 6, 0x4a3d4
  004a3bc  fnmsubs 2, 5, 28, 4
  004a3c0  fcmpu 0, 1, 2
  004a3c4  cror 6, 0, 2
  004a3c8  bt 6, 0x4a3d4
  004a3cc  fmr 1, 2
  004a3d0  ori 3, 5, 0
  004a3d4  lhz 5, 0(4)
  004a3d8  addic 4, 4, 2
  004a3dc  extsh 5, 5
  004a3e0  cmpwi 5, 0
  004a3e4  bf 0, 0x4a278
  004a3e8  cmpwi 3, 0
  004a3ec  bt 2, 0x4a5e0
  004a3f0  lfs 1, 16(3)
  004a3f4  lfs 2, 16(6)
  004a3f8  lfs 3, 20(3)
  004a3fc  lfs 4, 20(6)
  004a400  fsubs 1, 1, 2
  004a404  fsubs 2, 3, 4
  004a408  lis 3, 115
  004a40c  addic 3, 3, 22784
  004a410  fabs 3, 1
  004a414  fabs 4, 2
  004a418  stfs 1, 140(1)
  004a41c  stfs 2, 144(1)
  004a420  fsubs 1, 3, 4
  004a424  stfs 1, 148(1)
  004a428  lwz 4, 140(1)
  004a42c  lfs 1, 140(1)
  004a430  lwz 5, 144(1)
  004a434  lfs 2, 144(1)
  004a438  fabs 1, 1
  004a43c  lwz 6, 148(1)
  004a440  rlwinm 5, 5, 3, 29, 29
  004a444  lfs 5, 148(1)
  004a448  fabs 2, 2
  004a44c  rlwimi 5, 6, 2, 30, 30
  004a450  fsub 6, 5, 8
  004a454  fsub 5, 5, 8
  004a458  rlwimi 5, 4, 4, 28, 28
  004a45c  ori 4, 3, 0
  004a460  rlwimi 4, 5, 2, 26, 28
  004a464  slwi 5, 5, 2
  004a468  clrldi 4, 4, 32
  004a46c  fsel 4, 6, 1, 4
  004a470  lfsx 1, 3, 5
  004a474  fsel 3, 5, 2, 3
  004a478  lfs 2, 4(4)
  004a47c  fcmpu 0, 4, 8
  004a480  bt 1, 0x4a48c
  004a484  fmr 1, 8
  004a488  b 0x4a5b0
  004a48c  fsubs 5, 3, 4
  004a490  fadds 3, 3, 4
  004a494  addic 3, 1, 16
  004a498  li 7, 2
  004a49c  addic 4, 3, 168
  004a4a0  addic 5, 3, 184
  004a4a4  mtctr 7
  004a4a8  fdivs 3, 5, 3
  004a4ac  fmuls 4, 3, 3
  004a4b0  stfs 3, 196(1)
  004a4b4  stfs 3, 188(1)
  004a4b8  stfs 3, 192(1)
  004a4bc  stfs 3, 184(1)
  004a4c0  lfs 6, 196(1)
  004a4c4  lfs 7, 188(1)
  004a4c8  lfs 9, 192(1)
  004a4cc  fmuls 5, 4, 4
  004a4d0  fmuls 7, 7, 4
  004a4d4  fmuls 6, 6, 5
  004a4d8  fmuls 3, 5, 5
  004a4dc  fmuls 5, 9, 5
  004a4e0  stfs 7, 188(1)
  004a4e4  fmuls 4, 6, 4
  004a4e8  stfs 5, 192(1)
  004a4ec  stfs 4, 196(1)
  004a4f0  lfs 4, 168(3)
  004a4f4  fmuls 4, 4, 3
  004a4f8  stfs 4, 184(3)
  004a4fc  lfs 4, 4(4)
  004a500  addic 3, 3, 8
  004a504  addic 4, 4, 8
  004a508  fmuls 4, 4, 3
  004a50c  stfs 4, 4(5)
  004a510  addic 5, 5, 8
  004a514  bdnz 0x4a4f0
  004a518  li 5, 4
  004a51c  ori 3, 1, 0
  004a520  mtctr 5
  004a524  lis 4, 115
  004a528  addic 5, 3, 184
  004a52c  addic 4, 4, 22752
  004a530  ori 6, 5, 0
  004a534  lfs 3, 184(3)
  004a538  lfs 4, 0(4)
  004a53c  fmuls 3, 3, 4
  004a540  lfs 4, 4(4)
  004a544  addic 4, 4, 8
  004a548  stfs 3, 184(3)
  004a54c  lfs 3, 4(5)
  004a550  addic 3, 3, 8
  004a554  fmuls 3, 3, 4
  004a558  stfs 3, 4(5)
  004a55c  addic 5, 5, 8
  004a560  bdnz 0x4a534
  004a564  fmr 3, 8
  004a568  ori 3, 1, 0
  004a56c  mtctr 7
  004a570  lfs 4, 184(3)
  004a574  fadds 3, 3, 4
  004a578  addic 3, 3, 16
  004a57c  lfs 4, 4(6)
  004a580  lfs 5, 8(6)
  004a584  lfs 6, 12(6)
  004a588  addic 6, 6, 16
  004a58c  fadds 3, 3, 4
  004a590  fadds 3, 3, 5
  004a594  fadds 3, 3, 6
  004a598  bdnz 0x4a570
  004a59c  lis 3, 5
  004a5a0  addi 3, 3, -24680
  004a5a4  lfs 4, 80(3)
  004a5a8  fadds 3, 3, 4
  004a5ac  fmadds 1, 3, 1, 2
  004a5b0  lis 3, 5
  004a5b4  fmr 2, 1
  004a5b8  addic 5, 29, 188
  004a5bc  addi 3, 3, -24680
  004a5c0  lfs 1, 184(29)
  004a5c4  fmr 5, 8
  004a5c8  lfs 3, 32(3)
  004a5cc  lfs 4, 36(3)
  004a5d0  bl 0x50288
  004a5d4  nop
  004a5d8  stfs 1, 184(29)
  004a5dc  b 0x4a6c0
  004a5e0  lwz 3, 128(29)
  004a5e4  cmpwi 3, 1
  004a5e8  bf 2, 0x4a61c
  004a5ec  lis 3, 5
  004a5f0  lwz 4, 132(29)
  004a5f4  lfs 1, 184(29)
  004a5f8  addic 5, 29, 188
  004a5fc  addi 3, 3, -24680
  004a600  lfs 3, 32(3)
  004a604  lfs 4, 36(3)
  004a608  lfs 5, 0(3)
  004a60c  lfs 2, 72(4)
  004a610  bl 0x50288
  004a614  nop
  004a618  b 0x4a644
  004a61c  lis 3, 5
  004a620  lfs 1, 184(29)
  004a624  lfs 2, 152(28)
  004a628  addic 5, 29, 188
  004a62c  addi 3, 3, -24680
  004a630  lfs 3, 32(3)
  004a634  lfs 4, 36(3)
  004a638  lfs 5, 0(3)
  004a63c  bl 0x50288
  004a640  nop
  004a644  stfs 1, 184(29)
  004a648  b 0x4a6c0
  004a64c  bf 6, 0x4a6c0
  004a650  lwz 3, 128(29)
  004a654  cmpwi 3, 1
  004a658  bf 2, 0x4a690
  004a65c  lis 3, 5
  004a660  lwz 6, 132(29)
  004a664  lis 4, 114
  004a668  lfs 1, 184(29)
  004a66c  addi 3, 3, -24680
  004a670  addic 5, 29, 188
  004a674  lfs 3, -6172(4)
  004a678  lfs 4, 36(3)
  004a67c  lfs 5, 0(3)
  004a680  lfs 2, 72(6)
  004a684  bl 0x50288
  004a688  nop
  004a68c  b 0x4a6bc
  004a690  lis 3, 5
  004a694  lis 4, 114
  004a698  lfs 1, 184(29)
  004a69c  addi 3, 3, -24680
  004a6a0  lfs 2, 152(28)
  004a6a4  addic 5, 29, 188
  004a6a8  lfs 3, -6172(4)
  004a6ac  lfs 4, 36(3)
  004a6b0  lfs 5, 0(3)
  004a6b4  bl 0x50288
  004a6b8  nop
  004a6bc  stfs 1, 184(29)
  004a6c0  lis 3, 5
  004a6c4  lfs 1, 184(29)
  004a6c8  addi 3, 3, -24680
  004a6cc  lfs 2, 48(3)
  004a6d0  lfs 3, 52(3)
  004a6d4  fadds 2, 1, 2
  004a6d8  lfs 4, 56(3)
  004a6dc  fsubs 5, 3, 1
  004a6e0  fsubs 6, 4, 1
  004a6e4  fsubs 3, 3, 2
  004a6e8  fsub 7, 1, 5
  004a6ec  fsubs 4, 4, 2
  004a6f0  fsub 9, 2, 3
  004a6f4  fsel 1, 7, 5, 1
  004a6f8  lfs 5, 60(3)
  004a6fc  lfs 7, 64(3)
  004a700  fsel 2, 9, 3, 2
  004a704  fsub 3, 6, 1
  004a708  fsub 8, 4, 2
  004a70c  fsel 1, 3, 6, 1
  004a710  lfs 3, 68(3)
  004a714  lfs 6, 72(3)
  004a718  fsel 2, 8, 4, 2
  004a71c  fmuls 4, 1, 1
  004a720  fmuls 8, 2, 2
  004a724  fmuls 9, 4, 1
  004a728  fmuls 10, 8, 2
  004a72c  fmuls 11, 4, 9
  004a730  fmadds 1, 9, 5, 1
  004a734  fmuls 9, 8, 10
  004a738  fmadds 2, 10, 5, 2
  004a73c  fmuls 5, 4, 11
  004a740  fmadds 1, 11, 7, 1
  004a744  fmuls 10, 8, 9
  004a748  fmadds 2, 9, 7, 2
  004a74c  fmuls 4, 4, 5
  004a750  fmadds 1, 5, 3, 1
  004a754  fmuls 5, 8, 10
  004a758  fmadds 2, 10, 3, 2
  004a75c  fmadds 3, 4, 6, 1
  004a760  fmadds 1, 5, 6, 2
  004a764  fmuls 2, 3, 3
  004a768  fmadds 2, 1, 1, 2
  004a76c  stfs 1, 112(29)
  004a770  stfs 3, 116(29)
  004a774  lfs 31, 0(3)
  004a778  li 3, 0
  004a77c  fsqrts 3, 2
  004a780  lfs 2, 160(29)
  004a784  stw 3, 124(29)
  004a788  stw 3, 120(29)
  004a78c  fneg 2, 2
  004a790  fcmpu 0, 3, 31
  004a794  bf 2, 0x4a7d0
  004a798  stfs 1, 112(1)
  004a79c  fmr 1, 31
  004a7a0  lfs 2, 116(29)
  004a7a4  li 3, 0
  004a7a8  stfs 2, 116(1)
  004a7ac  lfs 2, 120(29)
  004a7b0  stfs 2, 120(1)
  004a7b4  lfs 4, 124(29)
  004a7b8  stw 3, 120(1)
  004a7bc  stw 3, 116(1)
  004a7c0  stw 3, 112(1)
  004a7c4  fmr 3, 1
  004a7c8  fmr 2, 3
  004a7cc  b 0x4a7f8
  004a7d0  fdivs 4, 2, 3
  004a7d4  fmuls 2, 1, 4
  004a7d8  stfs 2, 112(1)
  004a7dc  lfs 3, 116(29)
  004a7e0  fmuls 3, 3, 4
  004a7e4  stfs 3, 116(1)
  004a7e8  lfs 1, 120(29)
  004a7ec  fmuls 1, 1, 4
  004a7f0  stfs 1, 120(1)
  004a7f4  lfs 4, 124(29)
  004a7f8  stfs 4, 124(1)
  004a7fc  lfs 4, 176(29)
  004a800  addic 3, 31, 48
  004a804  addic 4, 1, 112
  004a808  fadds 1, 1, 4
  004a80c  lfs 4, 128(28)
  004a810  li 5, 18
  004a814  lfs 5, 132(28)
  004a818  li 6, 0
  004a81c  fadds 2, 2, 4
  004a820  li 7, 0
  004a824  lfs 4, 136(28)
  004a828  fadds 3, 3, 5
  004a82c  fadds 4, 1, 4
  004a830  stfs 1, 120(1)
  004a834  stfs 2, 112(1)
  004a838  stfs 3, 116(1)
  004a83c  stfs 4, 120(1)
  004a840  bl 0x57820
  004a844  nop
  004a848  cmpwi 3, 0
  004a84c  bt 2, 0x4ab08
  004a850  lis 27, 161
  004a854  lfs 5, 52(31)
  004a858  addic 27, 27, 2368
  004a85c  lis 3, 5
  004a860  lfs 1, 36(27)
  004a864  lfs 30, 32(27)
  004a868  fsubs 1, 1, 5
  004a86c  lfs 4, 48(31)
  004a870  lfs 2, 40(27)
  004a874  fsubs 30, 30, 4
  004a878  lfs 6, 56(31)
  004a87c  fsubs 2, 2, 6
  004a880  addi 3, 3, -24680
  004a884  fmuls 3, 1, 1
  004a888  lfs 7, 28(3)
  004a88c  fmadds 3, 30, 30, 3
  004a890  fmadds 3, 2, 2, 3
  004a894  fsqrts 3, 3
  004a898  fcmpu 0, 3, 7
  004a89c  cror 6, 0, 2
  004a8a0  bt 6, 0x4a928
  004a8a4  fsubs 7, 3, 7
  004a8a8  lis 3, 5
  004a8ac  li 30, 0
  004a8b0  addi 3, 3, -24680
  004a8b4  fdivs 3, 7, 3
  004a8b8  lfs 7, 60(31)
  004a8bc  stfs 7, 124(1)
  004a8c0  fmadds 4, 30, 3, 4
  004a8c4  fmadds 1, 1, 3, 5
  004a8c8  fmadds 2, 2, 3, 6
  004a8cc  stfs 4, 112(1)
  004a8d0  stfs 1, 116(1)
  004a8d4  stfs 2, 120(1)
  004a8d8  lfs 30, 84(3)
  004a8dc  addic 3, 1, 112
  004a8e0  fmr 1, 30
  004a8e4  li 5, 0
  004a8e8  li 6, 0
  004a8ec  bl 0x59e20
  004a8f0  nop
  004a8f4  cmpwi 3, 0
  004a8f8  bt 2, 0x4a928
  004a8fc  lfs 1, 48(27)
  004a900  addic 30, 30, 1
  004a904  lfs 2, 52(27)
  004a908  stfs 1, 112(1)
  004a90c  lfs 1, 56(27)
  004a910  cmpwi 30, 5
  004a914  stfs 2, 116(1)
  004a918  lfs 2, 60(27)
  004a91c  stfs 1, 120(1)
  004a920  stfs 2, 124(1)
  004a924  bt 0, 0x4a8dc
  004a928  lfs 1, 112(1)
  004a92c  lfs 2, 116(1)
  004a930  stfs 1, 48(31)
  004a934  lfs 3, 120(1)
  004a938  stfs 2, 52(31)
  004a93c  lfs 4, 124(1)
  004a940  stfs 3, 56(31)
  004a944  stfs 4, 60(31)
  004a948  lfs 3, 128(28)
  004a94c  lfs 4, 132(28)
  004a950  fsubs 1, 3, 1
  004a954  fsubs 2, 4, 2
  004a958  lis 3, 115
  004a95c  addic 3, 3, 22784
  004a960  fabs 3, 1
  004a964  fabs 4, 2
  004a968  stfs 1, 128(1)
  004a96c  stfs 2, 132(1)
  004a970  fsubs 1, 3, 4
  004a974  stfs 1, 136(1)
  004a978  lwz 4, 128(1)
  004a97c  lfs 1, 128(1)
  004a980  lwz 5, 132(1)
  004a984  lfs 2, 132(1)
  004a988  fabs 1, 1
  004a98c  lwz 6, 136(1)
  004a990  rlwinm 5, 5, 3, 29, 29
  004a994  lfs 5, 136(1)
  004a998  fabs 2, 2
  004a99c  rlwimi 5, 6, 2, 30, 30
  004a9a0  fsub 6, 5, 31
  004a9a4  fsub 5, 5, 31
  004a9a8  rlwimi 5, 4, 4, 28, 28
  004a9ac  ori 4, 3, 0
  004a9b0  rlwimi 4, 5, 2, 26, 28
  004a9b4  slwi 5, 5, 2
  004a9b8  clrldi 4, 4, 32
  004a9bc  fsel 4, 6, 1, 4
  004a9c0  lfsx 1, 3, 5
  004a9c4  fsel 3, 5, 2, 3
  004a9c8  lfs 2, 4(4)
  004a9cc  fcmpu 0, 4, 31
  004a9d0  bt 1, 0x4a9d8
  004a9d4  b 0x4aaf8
  004a9d8  fsubs 5, 3, 4
  004a9dc  fadds 3, 3, 4
  004a9e0  addic 3, 1, 16
  004a9e4  li 6, 2
  004a9e8  addic 5, 3, 152
  004a9ec  addic 4, 3, 136
  004a9f0  mtctr 6
  004a9f4  fdivs 3, 5, 3
  004a9f8  fmuls 4, 3, 3
  004a9fc  stfs 3, 164(1)
  004aa00  stfs 3, 156(1)
  004aa04  stfs 3, 160(1)
  004aa08  stfs 3, 152(1)
  004aa0c  lfs 6, 164(1)
  004aa10  lfs 7, 156(1)
  004aa14  lfs 8, 160(1)
  004aa18  fmuls 5, 4, 4
  004aa1c  fmuls 7, 7, 4
  004aa20  fmuls 6, 6, 5
  004aa24  fmuls 3, 5, 5
  004aa28  fmuls 5, 8, 5
  004aa2c  stfs 7, 156(1)
  004aa30  fmuls 4, 6, 4
  004aa34  stfs 5, 160(1)
  004aa38  stfs 4, 164(1)
  004aa3c  lfs 4, 136(3)
  004aa40  fmuls 4, 4, 3
  004aa44  stfs 4, 152(3)
  004aa48  lfs 4, 4(4)
  004aa4c  addic 4, 4, 8
  004aa50  fmuls 4, 4, 3
  004aa54  addic 3, 3, 8
  004aa58  stfs 4, 4(5)
  004aa5c  addic 5, 5, 8
  004aa60  bdnz 0x4aa3c
  004aa64  li 5, 4
  004aa68  ori 3, 1, 0
  004aa6c  mtctr 5
  004aa70  lis 4, 115
  004aa74  addic 5, 3, 152
  004aa78  addic 4, 4, 22752
  004aa7c  ori 7, 5, 0
  004aa80  lfs 3, 152(3)
  004aa84  lfs 4, 0(4)
  004aa88  fmuls 3, 3, 4
  004aa8c  lfs 4, 4(4)
  004aa90  addic 4, 4, 8
  004aa94  stfs 3, 152(3)
  004aa98  lfs 3, 4(5)
  004aa9c  addic 3, 3, 8
  004aaa0  fmuls 3, 3, 4
  004aaa4  stfs 3, 4(5)
  004aaa8  addic 5, 5, 8
  004aaac  bdnz 0x4aa80
  004aab0  ori 3, 1, 0
  004aab4  mtctr 6
  004aab8  lfs 3, 152(3)
  004aabc  lfs 4, 4(7)
  004aac0  fadds 3, 31, 3
  004aac4  lfs 5, 8(7)
  004aac8  addic 3, 3, 16
  004aacc  lfs 31, 12(7)
  004aad0  addic 7, 7, 16
  004aad4  fadds 3, 3, 4
  004aad8  fadds 3, 3, 5
  004aadc  fadds 31, 3, 31
  004aae0  bdnz 0x4aab8
  004aae4  lis 3, 5
  004aae8  addi 3, 3, -24680
  004aaec  lfs 3, 80(3)
  004aaf0  fadds 31, 31, 3
  004aaf4  fmadds 31, 31, 1, 2
  004aaf8  li 3, 0
  004aafc  stfs 31, 184(29)
  004ab00  stw 3, 188(29)
  004ab04  b 0x4ab28
  004ab08  lfs 1, 112(1)
  004ab0c  lfs 2, 116(1)
  004ab10  stfs 1, 48(31)
  004ab14  lfs 1, 120(1)
  004ab18  stfs 2, 52(31)
  004ab1c  lfs 2, 124(1)
  004ab20  stfs 1, 56(31)
  004ab24  stfs 2, 60(31)
  004ab28  ld 0, 352(1)
  004ab2c  mtlr 0
  004ab30  lfd 23, 264(1)
  004ab34  lfd 24, 272(1)
  004ab38  lfd 25, 280(1)
  004ab3c  lfd 26, 288(1)
  004ab40  lfd 27, 296(1)
  004ab44  lfd 28, 304(1)
  004ab48  lfd 29, 312(1)
  004ab4c  lfd 30, 320(1)
  004ab50  lfd 31, 328(1)
  004ab54  ld 26, 216(1)
  004ab58  ld 27, 224(1)
  004ab5c  ld 28, 232(1)
  004ab60  ld 29, 240(1)
  004ab64  ld 30, 248(1)
  004ab68  ld 31, 256(1)
  004ab6c  addi 1, 1, 336
  004ab70  blr

Cam7_UpdateRot:   # 0x4ab98, 0x3e8 bytes
  004ab98  stdu 1, -176(1)
  004ab9c  mflr 0
  004aba0  std 0, 192(1)
  004aba4  stfd 27, 136(1)
  004aba8  stfd 28, 144(1)
  004abac  stfd 29, 152(1)
  004abb0  stfd 30, 160(1)
  004abb4  stfd 31, 168(1)
  004abb8  std 31, 128(1)
  004abbc  ori 31, 3, 0
  004abc0  lis 3, 151
  004abc4  addic 5, 3, -25376
  004abc8  lwz 4, 112(31)
  004abcc  lfs 5, 52(31)
  004abd0  lfs 1, 132(5)
  004abd4  lfs 4, 128(5)
  004abd8  fsubs 5, 1, 5
  004abdc  lfs 1, 136(5)
  004abe0  lfs 2, 140(4)
  004abe4  lfs 3, 48(31)
  004abe8  fadds 6, 1, 2
  004abec  fsubs 4, 4, 3
  004abf0  lfs 1, 56(31)
  004abf4  lis 3, 5
  004abf8  fmuls 2, 5, 5
  004abfc  addi 3, 3, -21644
  004ac00  fsubs 6, 6, 1
  004ac04  lfs 28, 0(3)
  004ac08  fmr 31, 28
  004ac0c  fmadds 3, 4, 4, 2
  004ac10  lfs 27, 0(31)
  004ac14  addic 3, 4, 48
  004ac18  lfs 1, 4(31)
  004ac1c  lfs 2, 8(31)
  004ac20  lwz 5, 8324(5)
  004ac24  fmr 30, 31
  004ac28  fmadds 3, 6, 6, 3
  004ac2c  cmpwi 1, 5, 37
  004ac30  fmr 29, 30
  004ac34  fsqrts 7, 3
  004ac38  fcmpu 0, 7, 29
  004ac3c  bt 2, 0x4ac90
  004ac40  frsqrte 7, 3
  004ac44  lis 5, 5
  004ac48  addi 5, 5, -21644
  004ac4c  lfs 8, 4(5)
  004ac50  lfs 9, 8(5)
  004ac54  fmuls 10, 3, 7
  004ac58  fmuls 11, 8, 7
  004ac5c  fnmsubs 10, 10, 7, 9
  004ac60  fmadds 7, 10, 11, 7
  004ac64  fmuls 10, 3, 7
  004ac68  fmuls 11, 8, 7
  004ac6c  fnmsubs 10, 10, 7, 9
  004ac70  fmadds 7, 10, 11, 7
  004ac74  fmuls 3, 3, 7
  004ac78  fmuls 8, 8, 7
  004ac7c  fnmsubs 3, 3, 7, 9
  004ac80  fmadds 29, 3, 8, 7
  004ac84  fmuls 31, 4, 29
  004ac88  fmuls 30, 5, 29
  004ac8c  fmuls 29, 6, 29
  004ac90  fmuls 1, 30, 1
  004ac94  lis 5, 5
  004ac98  addi 5, 5, -21644
  004ac9c  lis 6, 115
  004aca0  addic 7, 6, 22720
  004aca4  fmadds 1, 31, 27, 1
  004aca8  lfs 27, 8(5)
  004acac  lfs 6, 22720(6)
  004acb0  lfs 7, 4(7)
  004acb4  fmadds 1, 29, 2, 1
  004acb8  fabs 2, 1
  004acbc  fsub 3, 1, 28
  004acc0  fsel 2, 3, 1, 2
  004acc4  fsub 1, 1, 28
  004acc8  fsubs 3, 27, 2
  004accc  fmuls 4, 2, 2
  004acd0  fsub 5, 3, 28
  004acd4  fmuls 8, 4, 2
  004acd8  fmadds 2, 2, 7, 6
  004acdc  fsel 3, 5, 3, 28
  004ace0  lfs 5, 8(7)
  004ace4  fmadds 2, 4, 5, 2
  004ace8  lfs 4, 12(5)
  004acec  lfs 7, 12(7)
  004acf0  lfs 5, 16(5)
  004acf4  fsel 1, 1, 27, 4
  004acf8  fsqrts 3, 3
  004acfc  fmadds 2, 8, 7, 2
  004ad00  fnmsubs 2, 2, 3, 5
  004ad04  fnmsubs 1, 2, 1, 5
  004ad08  bf 6, 0x4ad44
  004ad0c  lis 3, 5
  004ad10  lfs 2, 48(4)
  004ad14  addi 3, 3, -21644
  004ad18  lfs 3, 20(3)
  004ad1c  fadds 2, 2, 3
  004ad20  fcmpu 0, 2, 27
  004ad24  stfs 2, 48(4)
  004ad28  cror 6, 0, 2
  004ad2c  bt 6, 0x4ad3c
  004ad30  lis 3, 16256
  004ad34  fmr 2, 27
  004ad38  stw 3, 48(4)
  004ad3c  fmuls 1, 1, 2
  004ad40  b 0x4ad6c
  004ad44  lis 4, 5
  004ad48  fmr 2, 1
  004ad4c  ori 5, 3, 0
  004ad50  addi 4, 4, -21644
  004ad54  fmr 1, 28
  004ad58  fmr 5, 28
  004ad5c  lfs 3, 24(4)
  004ad60  lfs 4, 28(4)
  004ad64  bl 0x50288
  004ad68  nop
  004ad6c  lfs 2, 68(31)
  004ad70  lfs 3, 72(31)
  004ad74  li 3, 0
  004ad78  lfs 4, 64(31)
  004ad7c  fmuls 5, 2, 31
  004ad80  fmuls 6, 3, 30
  004ad84  addic 4, 31, 64
  004ad88  fmuls 7, 4, 29
  004ad8c  addic 5, 1, 112
  004ad90  stw 3, 124(1)
  004ad94  ori 3, 31, 0
  004ad98  fmsubs 4, 4, 30, 5
  004ad9c  fmsubs 2, 2, 29, 6
  004ada0  fmsubs 3, 3, 31, 7
  004ada4  stfs 4, 120(1)
  004ada8  stfs 2, 112(1)
  004adac  stfs 3, 116(1)
  004adb0  bl 0x1113e0
  004adb4  nop
  004adb8  lfs 2, 4(31)
  004adbc  lfs 1, 0(31)
  004adc0  fmuls 4, 2, 2
  004adc4  lfs 3, 8(31)
  004adc8  fmadds 31, 1, 1, 4
  004adcc  fmadds 31, 3, 3, 31
  004add0  fsqrts 4, 31
  004add4  fcmpu 0, 4, 28
  004add8  bf 2, 0x4ae08
  004addc  fmr 1, 28
  004ade0  lfs 2, 0(31)
  004ade4  lfs 3, 4(31)
  004ade8  stfs 2, 64(31)
  004adec  lfs 4, 8(31)
  004adf0  stfs 3, 68(31)
  004adf4  lfs 31, 12(31)
  004adf8  stfs 4, 72(31)
  004adfc  fmr 2, 1
  004ae00  fmr 3, 2
  004ae04  b 0x4ae60
  004ae08  frsqrte 4, 31
  004ae0c  lis 3, 5
  004ae10  fmr 8, 3
  004ae14  addi 3, 3, -21644
  004ae18  lfs 5, 4(3)
  004ae1c  fmuls 6, 31, 4
  004ae20  fmuls 7, 5, 4
  004ae24  fnmsubs 6, 6, 4, 27
  004ae28  fmadds 3, 6, 7, 4
  004ae2c  lfs 7, 12(31)
  004ae30  fmuls 4, 31, 3
  004ae34  fmuls 6, 5, 3
  004ae38  fnmsubs 4, 4, 3, 27
  004ae3c  fmadds 3, 4, 6, 3
  004ae40  fmuls 4, 31, 3
  004ae44  fmuls 5, 5, 3
  004ae48  fmr 31, 7
  004ae4c  fnmsubs 4, 4, 3, 27
  004ae50  fmadds 4, 4, 5, 3
  004ae54  fmuls 3, 1, 4
  004ae58  fmuls 2, 2, 4
  004ae5c  fmuls 1, 8, 4
  004ae60  stfs 3, 64(31)
  004ae64  lis 3, 149
  004ae68  stfs 2, 68(31)
  004ae6c  stfs 1, 72(31)
  004ae70  addic 3, 3, 5056
  004ae74  stfs 31, 76(31)
  004ae78  stfs 3, 0(31)
  004ae7c  stfs 2, 4(31)
  004ae80  stfs 1, 8(31)
  004ae84  stfs 31, 12(31)
  004ae88  lfs 6, 432(3)
  004ae8c  lfs 5, 440(3)
  004ae90  fmuls 4, 6, 1
  004ae94  lfs 7, 436(3)
  004ae98  fmuls 8, 5, 2
  004ae9c  fmuls 9, 7, 3
  004aea0  li 3, 0
  004aea4  fmsubs 5, 5, 3, 4
  004aea8  fmsubs 4, 7, 1, 8
  004aeac  fmsubs 6, 6, 2, 9
  004aeb0  stw 3, 28(31)
  004aeb4  fmuls 7, 5, 5
  004aeb8  fmadds 31, 4, 4, 7
  004aebc  fmr 7, 28
  004aec0  fmadds 31, 6, 6, 31
  004aec4  fmr 8, 7
  004aec8  fsqrts 9, 31
  004aecc  fcmpu 0, 9, 8
  004aed0  bt 2, 0x4af20
  004aed4  frsqrte 7, 31
  004aed8  lis 3, 5
  004aedc  addi 3, 3, -21644
  004aee0  lfs 8, 4(3)
  004aee4  fmuls 9, 31, 7
  004aee8  fmuls 10, 8, 7
  004aeec  fnmsubs 9, 9, 7, 27
  004aef0  fmadds 7, 9, 10, 7
  004aef4  fmuls 9, 31, 7
  004aef8  fmuls 10, 8, 7
  004aefc  fnmsubs 9, 9, 7, 27
  004af00  fmadds 7, 9, 10, 7
  004af04  fmuls 9, 31, 7
  004af08  fmuls 8, 8, 7
  004af0c  fnmsubs 9, 9, 7, 27
  004af10  fmadds 28, 9, 8, 7
  004af14  fmuls 8, 4, 28
  004af18  fmuls 7, 5, 28
  004af1c  fmuls 28, 6, 28
  004af20  fmuls 4, 1, 7
  004af24  li 3, 0
  004af28  fmuls 5, 3, 28
  004af2c  stfs 8, 16(31)
  004af30  fmuls 6, 2, 8
  004af34  stfs 7, 20(31)
  004af38  stfs 28, 24(31)
  004af3c  stw 3, 44(31)
  004af40  fmsubs 2, 2, 28, 4
  004af44  fmsubs 1, 1, 8, 5
  004af48  fmsubs 3, 3, 7, 6
  004af4c  stfs 2, 32(31)
  004af50  stfs 1, 36(31)
  004af54  stfs 3, 40(31)
  004af58  ld 0, 192(1)
  004af5c  mtlr 0
  004af60  lfd 27, 136(1)
  004af64  lfd 28, 144(1)
  004af68  lfd 29, 152(1)
  004af6c  lfd 30, 160(1)
  004af70  lfd 31, 168(1)
  004af74  ld 31, 128(1)
  004af78  addi 1, 1, 176
  004af7c  blr

UpdateCamera_7:   # 0x4af80, 0x34 bytes
  004af80  stdu 1, -128(1)
  004af84  mflr 0
  004af88  std 0, 144(1)
  004af8c  std 31, 120(1)
  004af90  ori 31, 3, 0
  004af94  bl 0x49ff0
  004af98  ori 3, 31, 0
  004af9c  bl 0x4ab98
  004afa0  ld 0, 144(1)
  004afa4  mtlr 0
  004afa8  ld 31, 120(1)
  004afac  addi 1, 1, 128
  004afb0  blr

CamZoomOfs_Reset:   # 0x4afb4, 0x34 bytes
  004afb4  lis 3, 149
  004afb8  li 4, 0
  004afbc  addic 3, 3, 5056
  004afc0  lis 5, 17948
  004afc4  lis 6, 112
  004afc8  ori 5, 5, 16384
  004afcc  addic 6, 6, 16728
  004afd0  stw 4, 900(3)
  004afd4  stw 4, 896(3)
  004afd8  stw 5, 904(3)
  004afdc  stw 4, 908(3)
  004afe0  stw 6, 912(3)
  004afe4  blr

CamZoomOfs_Update:   # 0x4aff0, 0x64 bytes
  004aff0  stdu 1, -112(1)
  004aff4  mflr 0
  004aff8  std 0, 128(1)
  004affc  lis 3, 149
  004b000  addic 3, 3, 5056
  004b004  lwz 4, 908(3)
  004b008  lfs 1, 908(3)
  004b00c  cmpwi 4, 0
  004b010  bt 2, 0x4b044
  004b014  lis 3, 5
  004b018  li 4, 1
  004b01c  addi 3, 3, -20504
  004b020  lfs 3, 0(3)
  004b024  lfs 2, 4(3)
  004b028  fmuls 1, 1, 3
  004b02c  bl 0x2f414
  004b030  nop
  004b034  lis 3, 112
  004b038  addic 3, 3, 16736
  004b03c  bl 0x50000
  004b040  nop
  004b044  ld 0, 128(1)
  004b048  mtlr 0
  004b04c  addi 1, 1, 112
  004b050  blr

CamZoomOfs_PostUpd:   # 0x4b058, 0x64 bytes
  004b058  lis 4, 149
  004b05c  lis 5, 17948
  004b060  addic 4, 4, 5056
  004b064  ori 5, 5, 16384
  004b068  li 3, 0
  004b06c  lwz 6, 900(4)
  004b070  stw 5, 904(4)
  004b074  cmpwi 6, 0
  004b078  bf 2, 0x4b0b0
  004b07c  lis 5, 114
  004b080  lfs 1, 908(4)
  004b084  lis 6, 5
  004b088  addi 6, 6, -20396
  004b08c  lfs 2, -6168(5)
  004b090  fsubs 1, 1, 2
  004b094  stfs 1, 908(4)
  004b098  lfs 2, 0(6)
  004b09c  fcmpu 0, 1, 2
  004b0a0  cror 6, 1, 2
  004b0a4  bt 6, 0x4b0b4
  004b0a8  stw 3, 908(4)
  004b0ac  b 0x4b0b4
  004b0b0  stw 3, 900(4)
  004b0b4  stw 3, 896(4)
  004b0b8  blr

???_Cam_NudgeTowardMoby:   # 0x4b0e0, 0x264 bytes
  004b0e0  stdu 1, -112(1)
  004b0e4  stfd 24, 48(1)
  004b0e8  stfd 25, 56(1)
  004b0ec  stfd 26, 64(1)
  004b0f0  stfd 27, 72(1)
  004b0f4  stfd 28, 80(1)
  004b0f8  stfd 29, 88(1)
  004b0fc  stfd 30, 96(1)
  004b100  stfd 31, 104(1)
  004b104  lis 5, 149
  004b108  lis 4, 5
  004b10c  addic 5, 5, 5056
  004b110  addi 4, 4, -20292
  004b114  lwz 6, 384(5)
  004b118  lfs 2, 908(5)
  004b11c  lhz 7, 134(6)
  004b120  extsh 7, 7
  004b124  cmpwi 7, 0
  004b128  bf 2, 0x4b31c
  004b12c  lis 7, 150
  004b130  lis 8, 15692
  004b134  addic 7, 7, 19008
  004b138  ori 8, 8, 52429
  004b13c  lwz 7, 4(7)
  004b140  clrlwi 7, 7, 1
  004b144  cmpw 7, 8
  004b148  bt 1, 0x4b31c
  004b14c  lis 7, 151
  004b150  lfs 10, 20(3)
  004b154  lfs 11, 16(3)
  004b158  addic 7, 7, -25376
  004b15c  lfs 3, 132(7)
  004b160  lfs 4, 128(7)
  004b164  fsubs 3, 10, 3
  004b168  lfs 9, 24(3)
  004b16c  fsubs 4, 11, 4
  004b170  lfs 1, 136(7)
  004b174  fsubs 1, 9, 1
  004b178  fmuls 5, 3, 3
  004b17c  fmadds 5, 4, 4, 5
  004b180  fmadds 31, 1, 1, 5
  004b184  lfs 5, 0(4)
  004b188  fsqrts 31, 31
  004b18c  fcmpu 0, 31, 5
  004b190  cror 6, 1, 2
  004b194  bt 6, 0x4b31c
  004b198  lfs 8, 4(4)
  004b19c  fcmpu 0, 31, 8
  004b1a0  fcmpu 1, 1, 8
  004b1a4  cror 2, 0, 2
  004b1a8  bt 2, 0x4b31c
  004b1ac  lfs 5, 904(5)
  004b1b0  fcmpu 0, 31, 5
  004b1b4  cror 2, 1, 2
  004b1b8  bt 2, 0x4b31c
  004b1bc  bf 5, 0x4b31c
  004b1c0  lfs 6, 4(6)
  004b1c4  lfs 7, 0(6)
  004b1c8  fmuls 3, 6, 3
  004b1cc  lfs 5, 8(6)
  004b1d0  lis 7, 115
  004b1d4  addic 8, 7, 22720
  004b1d8  fmadds 3, 7, 4, 3
  004b1dc  fmadds 1, 5, 1, 3
  004b1e0  lfs 3, 8(4)
  004b1e4  fdivs 30, 1, 31
  004b1e8  lfs 31, 22720(7)
  004b1ec  lfs 0, 4(8)
  004b1f0  lfs 13, 8(8)
  004b1f4  lfs 1, 12(4)
  004b1f8  lfs 12, 12(8)
  004b1fc  lfs 4, 16(4)
  004b200  lfs 29, 20(4)
  004b204  fabs 28, 30
  004b208  fsub 27, 30, 8
  004b20c  fsel 28, 27, 30, 28
  004b210  fsub 30, 30, 8
  004b214  fsubs 27, 3, 28
  004b218  fmuls 26, 28, 28
  004b21c  fmadds 24, 28, 0, 31
  004b220  fsel 30, 30, 3, 1
  004b224  fsub 25, 27, 8
  004b228  fmuls 28, 26, 28
  004b22c  fmadds 26, 26, 13, 24
  004b230  fsel 27, 25, 27, 8
  004b234  fmadds 28, 28, 12, 26
  004b238  fsqrts 27, 27
  004b23c  fnmsubs 28, 28, 27, 4
  004b240  fnmsubs 30, 28, 30, 4
  004b244  fcmpu 0, 30, 29
  004b248  cror 6, 1, 2
  004b24c  bt 6, 0x4b31c
  004b250  lfs 30, 52(6)
  004b254  lfs 29, 48(6)
  004b258  fsubs 10, 10, 30
  004b25c  lfs 30, 56(6)
  004b260  fsubs 11, 11, 29
  004b264  fsubs 9, 9, 30
  004b268  lfs 29, 24(4)
  004b26c  fmuls 30, 10, 10
  004b270  fmuls 6, 6, 10
  004b274  fmadds 30, 11, 11, 30
  004b278  fmadds 6, 7, 11, 6
  004b27c  fmadds 30, 9, 9, 30
  004b280  fmadds 5, 5, 9, 6
  004b284  fsqrts 30, 30
  004b288  fsub 6, 8, 30
  004b28c  fsub 11, 30, 8
  004b290  fsel 6, 6, 29, 30
  004b294  fsel 11, 11, 6, 30
  004b298  lfs 6, 28(4)
  004b29c  fdivs 5, 5, 11
  004b2a0  fabs 7, 5
  004b2a4  fsub 9, 5, 8
  004b2a8  fsel 7, 9, 5, 7
  004b2ac  fsub 5, 5, 8
  004b2b0  fsubs 9, 3, 7
  004b2b4  fmuls 10, 7, 7
  004b2b8  fmadds 0, 7, 0, 31
  004b2bc  fsel 1, 5, 3, 1
  004b2c0  fsub 30, 9, 8
  004b2c4  fmuls 7, 10, 7
  004b2c8  fmadds 10, 10, 13, 0
  004b2cc  fsel 9, 30, 9, 8
  004b2d0  fmadds 7, 7, 12, 10
  004b2d4  fsqrts 9, 9
  004b2d8  fnmsubs 5, 7, 9, 4
  004b2dc  fnmsubs 1, 5, 1, 4
  004b2e0  fcmpu 0, 1, 6
  004b2e4  cror 6, 1, 2
  004b2e8  bt 6, 0x4b31c
  004b2ec  lis 4, 114
  004b2f0  stfs 11, 904(5)
  004b2f4  stw 3, 900(5)
  004b2f8  stw 6, 896(5)
  004b2fc  lfs 1, -6168(4)
  004b300  fadds 1, 2, 1
  004b304  fcmpu 0, 1, 3
  004b308  stfs 1, 908(5)
  004b30c  cror 6, 0, 2
  004b310  bt 6, 0x4b31c
  004b314  lis 3, 16256
  004b318  stw 3, 908(5)
  004b31c  lfd 24, 48(1)
  004b320  lfd 25, 56(1)
  004b324  lfd 26, 64(1)
  004b328  lfd 27, 72(1)
  004b32c  lfd 28, 80(1)
  004b330  lfd 29, 88(1)
  004b334  lfd 30, 96(1)
  004b338  lfd 31, 104(1)
  004b33c  addi 1, 1, 112
  004b340  blr

ActivateCamera_7:   # 0x4b344, 0x8 bytes
  004b344  li 3, 0
  004b348  blr

UpdateCamera_7:   # 0x4b358, 0x24c bytes
  004b358  stdu 1, -128(1)
  004b35c  mflr 0
  004b360  std 0, 144(1)
  004b364  std 31, 120(1)
  004b368  lis 4, 151
  004b36c  ori 31, 3, 0
  004b370  addic 4, 4, -25376
  004b374  lwz 5, 112(31)
  004b378  lwz 6, 8324(4)
  004b37c  lwz 3, 2404(4)
  004b380  cmpwi 6, 44
  004b384  cmpwi 1, 6, 38
  004b388  lfs 1, 48(31)
  004b38c  cmpwi 6, 6, 37
  004b390  std 30, 112(1)
  004b394  cmpwi 7, 6, 36
  004b398  bf 2, 0x4b478
  004b39c  lwz 3, 192(5)
  004b3a0  lwz 4, 2452(4)
  004b3a4  cmpw 3, 4
  004b3a8  bt 2, 0x4b558
  004b3ac  lis 3, 149
  004b3b0  addic 30, 3, 5056
  004b3b4  ori 3, 31, 0
  004b3b8  lwz 4, 388(30)
  004b3bc  stfs 1, 48(4)
  004b3c0  lfs 1, 52(31)
  004b3c4  stfs 1, 52(4)
  004b3c8  lfs 1, 56(31)
  004b3cc  stfs 1, 56(4)
  004b3d0  lfs 1, 60(31)
  004b3d4  stfs 1, 60(4)
  004b3d8  lfs 1, 0(31)
  004b3dc  stfs 1, 0(4)
  004b3e0  lfs 1, 4(31)
  004b3e4  stfs 1, 4(4)
  004b3e8  lfs 1, 8(31)
  004b3ec  stfs 1, 8(4)
  004b3f0  lfs 1, 12(31)
  004b3f4  stfs 1, 12(4)
  004b3f8  lfs 1, 16(31)
  004b3fc  stfs 1, 16(4)
  004b400  lfs 1, 20(31)
  004b404  stfs 1, 20(4)
  004b408  lfs 1, 24(31)
  004b40c  stfs 1, 24(4)
  004b410  lfs 1, 28(31)
  004b414  stfs 1, 28(4)
  004b418  lfs 1, 32(31)
  004b41c  stfs 1, 32(4)
  004b420  lfs 1, 36(31)
  004b424  stfs 1, 36(4)
  004b428  lfs 1, 40(31)
  004b42c  stfs 1, 40(4)
  004b430  lfs 1, 44(31)
  004b434  stfs 1, 44(4)
  004b438  bl 0x49a50
  004b43c  lis 3, 5
  004b440  vspltisw 2, -1
  004b444  lis 4, 114
  004b448  addi 3, 3, -19636
  004b44c  li 5, -3056
  004b450  vslw 2, 2, 2
  004b454  <unknown>
  004b458  <unknown>
  004b45c  vspltw 3, 3, 0
  004b460  li 3, 756
  004b464  vmaddfp 2, 4, 3, 2
  004b468  vctsxs 2, 2, 0
  004b46c  vspltw 2, 2, 0
  004b470  stvewx 2, 3, 30
  004b474  b 0x4b558
  004b478  bt 30, 0x4b484
  004b47c  bt 26, 0x4b484
  004b480  bf 6, 0x4b558
  004b484  lwz 4, 192(5)
  004b488  cmpw 4, 3
  004b48c  bt 2, 0x4b558
  004b490  lis 3, 149
  004b494  addic 30, 3, 5056
  004b498  ori 3, 31, 0
  004b49c  lwz 4, 388(30)
  004b4a0  stfs 1, 48(4)
  004b4a4  lfs 1, 52(31)
  004b4a8  stfs 1, 52(4)
  004b4ac  lfs 1, 56(31)
  004b4b0  stfs 1, 56(4)
  004b4b4  lfs 1, 60(31)
  004b4b8  stfs 1, 60(4)
  004b4bc  lfs 1, 0(31)
  004b4c0  stfs 1, 0(4)
  004b4c4  lfs 1, 4(31)
  004b4c8  stfs 1, 4(4)
  004b4cc  lfs 1, 8(31)
  004b4d0  stfs 1, 8(4)
  004b4d4  lfs 1, 12(31)
  004b4d8  stfs 1, 12(4)
  004b4dc  lfs 1, 16(31)
  004b4e0  stfs 1, 16(4)
  004b4e4  lfs 1, 20(31)
  004b4e8  stfs 1, 20(4)
  004b4ec  lfs 1, 24(31)
  004b4f0  stfs 1, 24(4)
  004b4f4  lfs 1, 28(31)
  004b4f8  stfs 1, 28(4)
  004b4fc  lfs 1, 32(31)
  004b500  stfs 1, 32(4)
  004b504  lfs 1, 36(31)
  004b508  stfs 1, 36(4)
  004b50c  lfs 1, 40(31)
  004b510  stfs 1, 40(4)
  004b514  lfs 1, 44(31)
  004b518  stfs 1, 44(4)
  004b51c  bl 0x49a50
  004b520  lis 3, 5
  004b524  vspltisw 2, -1
  004b528  lis 4, 114
  004b52c  addi 3, 3, -19636
  004b530  li 5, -3056
  004b534  vslw 2, 2, 2
  004b538  <unknown>
  004b53c  <unknown>
  004b540  vspltw 3, 3, 0
  004b544  li 3, 756
  004b548  vmaddfp 2, 4, 3, 2
  004b54c  vctsxs 2, 2, 0
  004b550  vspltw 2, 2, 0
  004b554  stvewx 2, 3, 30
  004b558  ori 3, 31, 0
  004b55c  bl 0x49ff0
  004b560  ori 3, 31, 0
  004b564  bl 0x4ab98
  004b568  lis 4, 5
  004b56c  addic 3, 31, 48
  004b570  addi 4, 4, -19636
  004b574  lfs 1, 4(4)
  004b578  bl 0x543c8
  004b57c  nop
  004b580  lwz 4, 112(31)
  004b584  li 3, 0
  004b588  stw 3, 128(4)
  004b58c  ld 0, 144(1)
  004b590  mtlr 0
  004b594  ld 30, 112(1)
  004b598  ld 31, 120(1)
  004b59c  addi 1, 1, 128
  004b5a0  blr

ExitCamera_7:   # 0x4b5a4, 0x3c bytes
  004b5a4  lis 4, 151
  004b5a8  lhz 5, 134(3)
  004b5ac  addic 4, 4, -25376
  004b5b0  extsh 5, 5
  004b5b4  lwz 6, 8836(4)
  004b5b8  cmpw 6, 5
  004b5bc  bt 2, 0x4b5dc
  004b5c0  lwz 4, 8324(4)
  004b5c4  cmpwi 4, 6
  004b5c8  bt 2, 0x4b5dc
  004b5cc  li 4, 3
  004b5d0  li 5, 0
  004b5d4  sth 4, 126(3)
  004b5d8  stb 5, 125(3)
  004b5dc  blr

Cam7_SetTargetMoby:   # 0x4b5e0, 0x44 bytes
  004b5e0  lis 4, 149
  004b5e4  addic 4, 4, 5056
  004b5e8  lwz 4, 384(4)
  004b5ec  lhz 5, 134(4)
  004b5f0  cmpwi 5, 7
  004b5f4  bf 2, 0x4b620
  004b5f8  lwz 8, 112(4)
  004b5fc  li 5, 1
  004b600  lis 6, 16384
  004b604  lis 7, 16608
  004b608  stw 3, 132(8)
  004b60c  lwz 3, 112(4)
  004b610  stw 5, 128(8)
  004b614  stw 6, 140(8)
  004b618  stw 7, 160(3)
  004b61c  stw 6, 176(3)
  004b620  blr

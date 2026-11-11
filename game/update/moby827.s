# game/update/moby827.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M827_00479880:   # 0x479880, 0x2ec bytes
  0479880  stdu 1, -208(1)
  0479884  mflr 0
  0479888  std 0, 224(1)
  047988c  stfd 28, 176(1)
  0479890  stfd 29, 184(1)
  0479894  stfd 30, 192(1)
  0479898  stfd 31, 200(1)
  047989c  lfs 3, 228(3)
  04798a0  lfs 4, 224(3)
  04798a4  fmuls 5, 3, 3
  04798a8  lfs 6, 232(3)
  04798ac  lis 5, 72
  04798b0  addi 5, 5, -26504
  04798b4  fmadds 5, 4, 4, 5
  04798b8  lfs 7, 0(5)
  04798bc  fmadds 5, 6, 6, 5
  04798c0  lis 5, 114
  04798c4  std 30, 160(1)
  04798c8  fsqrts 5, 5
  04798cc  lfs 8, -3052(5)
  04798d0  std 31, 168(1)
  04798d4  ori 30, 3, 0
  04798d8  ori 31, 7, 0
  04798dc  fneg 8, 8
  04798e0  fmr 31, 2
  04798e4  fdivs 1, 1, 5
  04798e8  fsub 9, 7, 5
  04798ec  fsub 10, 7, 5
  04798f0  fsub 11, 7, 5
  04798f4  fsub 29, 5, 7
  04798f8  fsub 28, 5, 7
  04798fc  fsub 30, 5, 7
  0479900  lfs 5, 4(4)
  0479904  lfs 12, 0(4)
  0479908  lfs 13, 8(4)
  047990c  fmuls 3, 3, 1
  0479910  fmuls 4, 4, 1
  0479914  fmuls 1, 6, 1
  0479918  fsel 6, 9, 7, 3
  047991c  fsel 9, 10, 7, 4
  0479920  fsel 10, 11, 7, 1
  0479924  fsel 29, 29, 6, 3
  0479928  fsel 30, 30, 9, 4
  047992c  fsel 28, 28, 10, 1
  0479930  fmuls 1, 29, 29
  0479934  fmadds 1, 30, 30, 1
  0479938  fmadds 1, 28, 28, 1
  047993c  fsqrts 1, 1
  0479940  fdivs 3, 8, 1
  0479944  fsub 4, 7, 1
  0479948  fsub 6, 7, 1
  047994c  fsub 8, 7, 1
  0479950  fsub 9, 1, 7
  0479954  fsub 10, 1, 7
  0479958  fsub 1, 1, 7
  047995c  fmuls 11, 3, 29
  0479960  fmuls 0, 3, 28
  0479964  fmuls 3, 3, 30
  0479968  fsel 4, 4, 7, 11
  047996c  fsel 6, 6, 7, 0
  0479970  fsel 7, 8, 7, 3
  0479974  fsel 4, 9, 4, 11
  0479978  fsel 6, 10, 6, 0
  047997c  fsel 1, 1, 7, 3
  0479980  fadds 3, 5, 4
  0479984  fadds 4, 13, 6
  0479988  fadds 1, 12, 1
  047998c  stfs 3, 4(4)
  0479990  stfs 4, 8(4)
  0479994  stfs 1, 0(4)
  0479998  lfs 3, 16(3)
  047999c  lfs 4, 20(3)
  04799a0  lfs 5, 24(3)
  04799a4  fadds 6, 3, 30
  04799a8  fadds 7, 4, 29
  04799ac  lfs 9, 28(3)
  04799b0  fadds 8, 5, 28
  04799b4  fadds 1, 3, 1
  04799b8  stfs 9, 124(1)
  04799bc  stfs 6, 112(1)
  04799c0  stfs 7, 116(1)
  04799c4  stfs 8, 120(1)
  04799c8  stfs 1, 16(3)
  04799cc  lfs 3, 4(4)
  04799d0  fadds 3, 4, 3
  04799d4  fadds 1, 1, 30
  04799d8  stfs 3, 20(3)
  04799dc  lfs 4, 8(4)
  04799e0  fadds 4, 5, 4
  04799e4  fadds 3, 3, 29
  04799e8  stfs 4, 24(3)
  04799ec  lfs 5, 4(4)
  04799f0  lfs 6, 0(4)
  04799f4  fmuls 5, 5, 5
  04799f8  lfs 7, 8(4)
  04799fc  fadds 4, 4, 28
  0479a00  stfs 9, 140(1)
  0479a04  stfs 1, 128(1)
  0479a08  stfs 3, 132(1)
  0479a0c  fmadds 5, 6, 6, 5
  0479a10  stfs 4, 136(1)
  0479a14  fmadds 5, 7, 7, 5
  0479a18  fsqrts 5, 5
  0479a1c  fcmpu 0, 2, 5
  0479a20  std 29, 152(1)
  0479a24  std 28, 144(1)
  0479a28  cror 6, 1, 2
  0479a2c  bt 6, 0x479a98
  0479a30  addic 3, 1, 112
  0479a34  addic 4, 1, 128
  0479a38  li 5, 0
  0479a3c  ori 6, 30, 0
  0479a40  li 7, 0
  0479a44  bl 0x57820
  0479a48  nop
  0479a4c  cmpwi 3, 0
  0479a50  bt 2, 0x479a98
  0479a54  lis 3, 161
  0479a58  addic 3, 3, 2368
  0479a5c  lfs 1, 32(3)
  0479a60  lfs 2, 36(3)
  0479a64  lfs 3, 40(3)
  0479a68  fsubs 4, 1, 30
  0479a6c  stfs 1, 128(1)
  0479a70  fsubs 1, 2, 29
  0479a74  stfs 2, 132(1)
  0479a78  fsubs 2, 3, 28
  0479a7c  lfs 5, 44(3)
  0479a80  stfs 3, 136(1)
  0479a84  stfs 5, 140(1)
  0479a88  stfs 5, 28(30)
  0479a8c  stfs 4, 16(30)
  0479a90  stfs 1, 20(30)
  0479a94  stfs 2, 24(30)
  0479a98  lis 29, 161
  0479a9c  li 28, 0
  0479aa0  addic 29, 29, 2368
  0479aa4  addic 3, 1, 128
  0479aa8  fmr 1, 31
  0479aac  li 5, 4
  0479ab0  ori 6, 30, 0
  0479ab4  bl 0x59e20
  0479ab8  nop
  0479abc  cmpwi 3, 0
  0479ac0  bt 2, 0x479b0c
  0479ac4  lfs 1, 48(29)
  0479ac8  lfs 2, 52(29)
  0479acc  addic 28, 28, 1
  0479ad0  lfs 3, 56(29)
  0479ad4  fsubs 4, 1, 30
  0479ad8  fsubs 5, 2, 29
  0479adc  stfs 1, 128(1)
  0479ae0  fsubs 1, 3, 28
  0479ae4  stfs 2, 132(1)
  0479ae8  lfs 2, 60(29)
  0479aec  cmpwi 28, 6
  0479af0  stfs 3, 136(1)
  0479af4  stfs 2, 140(1)
  0479af8  stfs 2, 28(30)
  0479afc  stfs 4, 16(30)
  0479b00  stfs 5, 20(30)
  0479b04  stfs 1, 24(30)
  0479b08  bt 0, 0x479aa4
  0479b0c  cmpwi 31, 0
  0479b10  bt 2, 0x479b3c
  0479b14  lis 3, 72
  0479b18  lwz 4, 120(30)
  0479b1c  addic 5, 30, 16
  0479b20  addi 3, 3, -26504
  0479b24  ori 6, 5, 0
  0479b28  lfs 1, 4(3)
  0479b2c  lwz 3, 492(4)
  0479b30  extsw 3, 3
  0479b34  bl 0x1145d8
  0479b38  nop
  0479b3c  ld 0, 224(1)
  0479b40  mtlr 0
  0479b44  lfd 28, 176(1)
  0479b48  lfd 29, 184(1)
  0479b4c  lfd 30, 192(1)
  0479b50  lfd 31, 200(1)
  0479b54  ld 28, 144(1)
  0479b58  ld 29, 152(1)
  0479b5c  ld 30, 160(1)
  0479b60  ld 31, 168(1)
  0479b64  addi 1, 1, 208
  0479b68  blr

M827_00479b78:   # 0x479b78, 0x294 bytes
  0479b78  stdu 1, -272(1)
  0479b7c  mflr 0
  0479b80  std 0, 288(1)
  0479b84  stfd 26, 224(1)
  0479b88  stfd 27, 232(1)
  0479b8c  stfd 28, 240(1)
  0479b90  stfd 29, 248(1)
  0479b94  stfd 30, 256(1)
  0479b98  stfd 31, 264(1)
  0479b9c  lfs 8, 4(4)
  0479ba0  lfs 9, 0(4)
  0479ba4  fmuls 1, 8, 8
  0479ba8  lfs 7, 8(4)
  0479bac  lis 6, 72
  0479bb0  addi 6, 6, -25748
  0479bb4  fmadds 6, 9, 9, 1
  0479bb8  lfs 5, 0(6)
  0479bbc  lfs 4, 0(5)
  0479bc0  lfs 3, 4(5)
  0479bc4  lfs 2, 8(5)
  0479bc8  lfs 1, 12(5)
  0479bcc  fmadds 6, 7, 7, 6
  0479bd0  fsqrts 10, 6
  0479bd4  std 31, 216(1)
  0479bd8  std 30, 208(1)
  0479bdc  std 29, 200(1)
  0479be0  fcmpu 0, 10, 5
  0479be4  bf 2, 0x479bfc
  0479be8  fmr 9, 5
  0479bec  lfs 6, 12(4)
  0479bf0  fmr 8, 9
  0479bf4  fmr 7, 8
  0479bf8  b 0x479c54
  0479bfc  frsqrte 10, 6
  0479c00  lis 5, 72
  0479c04  addi 5, 5, -25748
  0479c08  lfs 11, 4(5)
  0479c0c  lfs 12, 8(5)
  0479c10  fmuls 13, 6, 10
  0479c14  fmuls 0, 11, 10
  0479c18  fnmsubs 13, 13, 10, 12
  0479c1c  fmadds 10, 13, 0, 10
  0479c20  lfs 13, 12(4)
  0479c24  fmuls 0, 6, 10
  0479c28  fmuls 31, 11, 10
  0479c2c  fnmsubs 0, 0, 10, 12
  0479c30  fmadds 10, 0, 31, 10
  0479c34  fmuls 0, 6, 10
  0479c38  fmuls 11, 11, 10
  0479c3c  fmr 6, 13
  0479c40  fnmsubs 12, 0, 10, 12
  0479c44  fmadds 10, 12, 11, 10
  0479c48  fmuls 9, 9, 10
  0479c4c  fmuls 8, 8, 10
  0479c50  fmuls 7, 7, 10
  0479c54  fmuls 10, 8, 8
  0479c58  fmuls 11, 8, 3
  0479c5c  fmr 13, 2
  0479c60  fmr 12, 5
  0479c64  fmadds 10, 9, 9, 10
  0479c68  fmadds 2, 9, 4, 11
  0479c6c  fmadds 10, 7, 7, 10
  0479c70  fmadds 2, 7, 13, 2
  0479c74  fsqrts 10, 10
  0479c78  fmr 11, 12
  0479c7c  fdivs 2, 2, 10
  0479c80  fsub 5, 12, 10
  0479c84  fsub 31, 12, 10
  0479c88  fsub 30, 12, 10
  0479c8c  fsub 0, 10, 12
  0479c90  fsub 29, 10, 12
  0479c94  fsub 28, 10, 12
  0479c98  fmr 10, 11
  0479c9c  fmuls 27, 8, 2
  0479ca0  fmuls 26, 9, 2
  0479ca4  fmuls 2, 7, 2
  0479ca8  fsel 5, 5, 12, 27
  0479cac  fsel 31, 31, 12, 26
  0479cb0  fsel 30, 30, 12, 2
  0479cb4  fsel 5, 0, 5, 27
  0479cb8  fsel 0, 29, 31, 26
  0479cbc  fsel 31, 28, 30, 2
  0479cc0  fsubs 2, 3, 5
  0479cc4  fsubs 3, 4, 0
  0479cc8  fsubs 4, 13, 31
  0479ccc  fmuls 5, 2, 2
  0479cd0  fmadds 5, 3, 3, 5
  0479cd4  fmadds 5, 4, 4, 5
  0479cd8  fsqrts 13, 5
  0479cdc  fcmpu 0, 13, 10
  0479ce0  bt 2, 0x479d34
  0479ce4  frsqrte 10, 5
  0479ce8  lis 4, 72
  0479cec  addi 4, 4, -25748
  0479cf0  lfs 11, 4(4)
  0479cf4  lfs 12, 8(4)
  0479cf8  fmuls 13, 5, 10
  0479cfc  fmuls 0, 11, 10
  0479d00  fnmsubs 13, 13, 10, 12
  0479d04  fmadds 10, 13, 0, 10
  0479d08  fmuls 13, 5, 10
  0479d0c  fmuls 0, 11, 10
  0479d10  fnmsubs 13, 13, 10, 12
  0479d14  fmadds 10, 13, 0, 10
  0479d18  fmuls 5, 5, 10
  0479d1c  fmuls 11, 11, 10
  0479d20  fnmsubs 5, 5, 10, 12
  0479d24  fmadds 10, 5, 11, 10
  0479d28  fmuls 12, 3, 10
  0479d2c  fmuls 11, 2, 10
  0479d30  fmuls 10, 4, 10
  0479d34  fmuls 2, 7, 11
  0479d38  stfs 9, 176(1)
  0479d3c  fmuls 3, 9, 10
  0479d40  stfs 8, 180(1)
  0479d44  fmuls 4, 8, 12
  0479d48  stfs 7, 184(1)
  0479d4c  stfs 6, 188(1)
  0479d50  li 4, 0
  0479d54  stfs 12, 144(1)
  0479d58  addic 31, 1, 112
  0479d5c  stfs 11, 148(1)
  0479d60  addic 30, 3, 192
  0479d64  stfs 10, 152(1)
  0479d68  ori 3, 31, 0
  0479d6c  stfs 1, 156(1)
  0479d70  stw 4, 172(1)
  0479d74  ori 4, 30, 0
  0479d78  fmsubs 2, 8, 10, 2
  0479d7c  fmsubs 3, 7, 12, 3
  0479d80  fmsubs 4, 9, 11, 4
  0479d84  stfs 2, 160(1)
  0479d88  stfs 3, 164(1)
  0479d8c  stfs 4, 168(1)
  0479d90  bl 0x10bf98
  0479d94  nop
  0479d98  addic 29, 1, 128
  0479d9c  addic 4, 1, 144
  0479da0  ori 3, 29, 0
  0479da4  bl 0x10bf98
  0479da8  nop
  0479dac  lis 6, 135
  0479db0  ori 3, 31, 0
  0479db4  ori 4, 31, 0
  0479db8  ori 5, 29, 0
  0479dbc  lfs 1, 31500(6)
  0479dc0  bl 0x501848
  0479dc4  nop
  0479dc8  ori 3, 31, 0
  0479dcc  ori 4, 30, 0
  0479dd0  bl 0x501ab0
  0479dd4  nop
  0479dd8  ld 0, 288(1)
  0479ddc  mtlr 0
  0479de0  lfd 26, 224(1)
  0479de4  lfd 27, 232(1)
  0479de8  lfd 28, 240(1)
  0479dec  lfd 29, 248(1)
  0479df0  lfd 30, 256(1)
  0479df4  lfd 31, 264(1)
  0479df8  ld 29, 200(1)
  0479dfc  ld 30, 208(1)
  0479e00  ld 31, 216(1)
  0479e04  addi 1, 1, 272
  0479e08  blr

M827_00479e20:   # 0x479e20, 0x160 bytes
  0479e20  stdu 1, -160(1)
  0479e24  mflr 0
  0479e28  std 0, 176(1)
  0479e2c  stfd 31, 152(1)
  0479e30  lfs 8, 16(3)
  0479e34  lfs 7, 20(3)
  0479e38  lfs 5, 28(3)
  0479e3c  lfs 6, 24(3)
  0479e40  stfs 5, 140(1)
  0479e44  lfs 3, 228(3)
  0479e48  lfs 4, 224(3)
  0479e4c  fmuls 1, 3, 3
  0479e50  lfs 2, 232(3)
  0479e54  lis 3, 72
  0479e58  addi 3, 3, -25076
  0479e5c  fmadds 13, 4, 4, 1
  0479e60  lfs 1, 0(3)
  0479e64  fmr 11, 1
  0479e68  fmadds 13, 2, 2, 13
  0479e6c  fmr 10, 11
  0479e70  fsqrts 12, 13
  0479e74  fmr 9, 10
  0479e78  fcmpu 0, 12, 9
  0479e7c  bt 2, 0x479ed0
  0479e80  frsqrte 9, 13
  0479e84  lis 3, 72
  0479e88  addi 3, 3, -25076
  0479e8c  lfs 10, 4(3)
  0479e90  lfs 11, 8(3)
  0479e94  fmuls 0, 13, 9
  0479e98  fmuls 31, 10, 9
  0479e9c  fnmsubs 0, 0, 9, 11
  0479ea0  fmadds 9, 0, 31, 9
  0479ea4  fmuls 0, 13, 9
  0479ea8  fmuls 31, 10, 9
  0479eac  fnmsubs 0, 0, 9, 11
  0479eb0  fmadds 9, 0, 31, 9
  0479eb4  fmuls 13, 13, 9
  0479eb8  fmuls 10, 10, 9
  0479ebc  fnmsubs 11, 13, 9, 11
  0479ec0  fmadds 9, 11, 10, 9
  0479ec4  fmuls 11, 4, 9
  0479ec8  fmuls 10, 3, 9
  0479ecc  fmuls 9, 2, 9
  0479ed0  fadds 11, 8, 11
  0479ed4  fadds 10, 7, 10
  0479ed8  lis 3, 72
  0479edc  fadds 9, 6, 9
  0479ee0  stfs 5, 124(1)
  0479ee4  addi 3, 3, -25076
  0479ee8  fsub 13, 12, 1
  0479eec  fsub 0, 12, 1
  0479ef0  addic 4, 1, 112
  0479ef4  li 5, 2
  0479ef8  li 6, 0
  0479efc  li 7, 0
  0479f00  stfs 11, 128(1)
  0479f04  stfs 10, 132(1)
  0479f08  stfs 9, 136(1)
  0479f0c  lfs 5, 12(3)
  0479f10  fdivs 5, 5, 12
  0479f14  addic 3, 1, 128
  0479f18  fsub 9, 1, 12
  0479f1c  fsub 10, 1, 12
  0479f20  fsub 11, 1, 12
  0479f24  fsub 12, 12, 1
  0479f28  fmuls 2, 2, 5
  0479f2c  fmuls 3, 3, 5
  0479f30  fmuls 4, 4, 5
  0479f34  fsel 5, 9, 1, 2
  0479f38  fsel 9, 10, 1, 3
  0479f3c  fsel 1, 11, 1, 4
  0479f40  fsel 2, 13, 5, 2
  0479f44  fsel 3, 0, 9, 3
  0479f48  fsel 1, 12, 1, 4
  0479f4c  fadds 2, 6, 2
  0479f50  fadds 3, 7, 3
  0479f54  fadds 1, 8, 1
  0479f58  stfs 2, 120(1)
  0479f5c  stfs 3, 116(1)
  0479f60  stfs 1, 112(1)
  0479f64  bl 0x57820
  0479f68  nop
  0479f6c  ld 0, 176(1)
  0479f70  mtlr 0
  0479f74  lfd 31, 152(1)
  0479f78  addi 1, 1, 160
  0479f7c  blr

M827_00479fa8:   # 0x479fa8, 0x380 bytes
  0479fa8  stdu 1, -304(1)
  0479fac  mflr 0
  0479fb0  std 0, 320(1)
  0479fb4  stfd 19, 200(1)
  0479fb8  stfd 20, 208(1)
  0479fbc  stfd 21, 216(1)
  0479fc0  stfd 22, 224(1)
  0479fc4  stfd 23, 232(1)
  0479fc8  stfd 24, 240(1)
  0479fcc  stfd 25, 248(1)
  0479fd0  stfd 26, 256(1)
  0479fd4  stfd 27, 264(1)
  0479fd8  stfd 28, 272(1)
  0479fdc  stfd 29, 280(1)
  0479fe0  stfd 30, 288(1)
  0479fe4  stfd 31, 296(1)
  0479fe8  std 31, 192(1)
  0479fec  lis 4, 72
  0479ff0  std 27, 160(1)
  0479ff4  ori 31, 3, 0
  0479ff8  addi 27, 4, -24704
  0479ffc  li 3, 4
  047a000  std 29, 176(1)
  047a004  li 4, 0
  047a008  ori 5, 31, 0
  047a00c  std 30, 184(1)
  047a010  std 28, 168(1)
  047a014  lwz 29, 120(31)
  047a018  bl 0x15d12c
  047a01c  nop
  047a020  lfs 25, 0(27)
  047a024  li 28, 0
  047a028  lfs 24, 24(31)
  047a02c  lfs 22, 16(31)
  047a030  lfs 23, 20(31)
  047a034  ori 30, 28, 0
  047a038  lfs 26, 4(27)
  047a03c  lis 31, 161
  047a040  lfs 27, 8(27)
  047a044  fadds 24, 24, 25
  047a048  lfs 28, 12(27)
  047a04c  addic 31, 31, 23856
  047a050  lfs 29, 16(27)
  047a054  lfs 30, 20(27)
  047a058  lfs 31, 24(27)
  047a05c  lfs 20, 28(27)
  047a060  lfs 21, 32(27)
  047a064  fmr 1, 26
  047a068  fmr 2, 27
  047a06c  bl 0xfcbe8
  047a070  nop
  047a074  lis 3, 114
  047a078  stw 30, 128(1)
  047a07c  fmr 2, 30
  047a080  stw 30, 132(1)
  047a084  stw 30, 136(1)
  047a088  stw 30, 140(1)
  047a08c  lfs 3, -3052(3)
  047a090  fmuls 19, 1, 3
  047a094  fmr 1, 29
  047a098  bl 0xfcbe8
  047a09c  nop
  047a0a0  stfs 1, 128(1)
  047a0a4  fmr 2, 30
  047a0a8  fmr 1, 29
  047a0ac  bl 0xfcbe8
  047a0b0  nop
  047a0b4  stfs 1, 132(1)
  047a0b8  fmr 1, 28
  047a0bc  fmr 2, 31
  047a0c0  bl 0xfcbe8
  047a0c4  nop
  047a0c8  lfs 3, 132(1)
  047a0cc  lfs 4, 128(1)
  047a0d0  fmuls 2, 3, 3
  047a0d4  fadds 6, 4, 22
  047a0d8  fadds 7, 3, 23
  047a0dc  fadds 8, 1, 24
  047a0e0  fmadds 2, 4, 4, 2
  047a0e4  addic 4, 1, 112
  047a0e8  addic 5, 1, 128
  047a0ec  ori 6, 31, 0
  047a0f0  li 7, 357
  047a0f4  fmadds 2, 1, 1, 2
  047a0f8  li 10, 0
  047a0fc  fsqrts 5, 2
  047a100  lfs 2, 140(1)
  047a104  stfs 2, 124(1)
  047a108  lwz 3, 524(29)
  047a10c  stfs 6, 128(1)
  047a110  stfs 7, 132(1)
  047a114  stfs 8, 136(1)
  047a118  fmr 2, 21
  047a11c  fdivs 6, 19, 5
  047a120  fsub 7, 28, 5
  047a124  fsub 8, 28, 5
  047a128  fsub 9, 28, 5
  047a12c  fsub 10, 5, 28
  047a130  fsub 11, 5, 28
  047a134  fsub 5, 5, 28
  047a138  fmuls 4, 4, 6
  047a13c  fmuls 3, 3, 6
  047a140  fmuls 6, 1, 6
  047a144  fmr 1, 20
  047a148  fsel 7, 7, 28, 4
  047a14c  fsel 8, 8, 28, 3
  047a150  fsel 9, 9, 28, 6
  047a154  fsel 4, 10, 7, 4
  047a158  fsel 3, 11, 8, 3
  047a15c  fsel 5, 5, 9, 6
  047a160  stfs 4, 112(1)
  047a164  stfs 3, 116(1)
  047a168  stfs 5, 120(1)
  047a16c  bl 0x28cce0
  047a170  nop
  047a174  addic 28, 28, 1
  047a178  cmpwi 28, 4
  047a17c  bt 0, 0x47a064
  047a180  lis 3, 72
  047a184  ori 28, 30, 0
  047a188  addi 3, 3, -24704
  047a18c  lfs 21, 36(3)
  047a190  fmr 1, 26
  047a194  fmr 2, 27
  047a198  bl 0xfcbe8
  047a19c  nop
  047a1a0  lis 3, 114
  047a1a4  stw 30, 144(1)
  047a1a8  stw 30, 148(1)
  047a1ac  fmr 2, 30
  047a1b0  stw 30, 152(1)
  047a1b4  stw 30, 156(1)
  047a1b8  lfs 3, -3052(3)
  047a1bc  fmuls 20, 1, 3
  047a1c0  fmr 1, 29
  047a1c4  bl 0xfcbe8
  047a1c8  nop
  047a1cc  stfs 1, 144(1)
  047a1d0  fmr 1, 29
  047a1d4  fmr 2, 30
  047a1d8  bl 0xfcbe8
  047a1dc  nop
  047a1e0  stfs 1, 148(1)
  047a1e4  fmr 2, 31
  047a1e8  fmr 1, 28
  047a1ec  bl 0xfcbe8
  047a1f0  nop
  047a1f4  lfs 2, 148(1)
  047a1f8  lfs 3, 144(1)
  047a1fc  fmuls 4, 2, 2
  047a200  lfs 5, 156(1)
  047a204  stfs 5, 124(1)
  047a208  fadds 5, 3, 22
  047a20c  lwz 27, 524(29)
  047a210  fmadds 4, 3, 3, 4
  047a214  fadds 6, 2, 23
  047a218  fadds 7, 1, 24
  047a21c  li 3, 2
  047a220  stfs 5, 144(1)
  047a224  fmadds 4, 1, 1, 4
  047a228  stfs 6, 148(1)
  047a22c  stfs 7, 152(1)
  047a230  fsqrts 4, 4
  047a234  fdivs 5, 20, 4
  047a238  fsub 6, 28, 4
  047a23c  fsub 7, 28, 4
  047a240  fsub 8, 28, 4
  047a244  fsub 9, 4, 28
  047a248  fsub 10, 4, 28
  047a24c  fsub 4, 4, 28
  047a250  fmuls 3, 3, 5
  047a254  fmuls 2, 2, 5
  047a258  fmuls 1, 1, 5
  047a25c  fsel 5, 6, 28, 3
  047a260  fsel 6, 7, 28, 2
  047a264  fsel 7, 8, 28, 1
  047a268  fsel 3, 9, 5, 3
  047a26c  fsel 2, 10, 6, 2
  047a270  fsel 1, 4, 7, 1
  047a274  stfs 3, 112(1)
  047a278  stfs 2, 116(1)
  047a27c  stfs 1, 120(1)
  047a280  bl 0xfc620
  047a284  nop
  047a288  addic 7, 3, 358
  047a28c  fmr 1, 25
  047a290  li 10, 0
  047a294  fmr 2, 21
  047a298  extsw 7, 7
  047a29c  addic 4, 1, 112
  047a2a0  addic 5, 1, 144
  047a2a4  ori 3, 27, 0
  047a2a8  ori 6, 31, 0
  047a2ac  bl 0x28cce0
  047a2b0  nop
  047a2b4  addic 28, 28, 1
  047a2b8  cmpwi 28, 8
  047a2bc  bt 0, 0x47a190
  047a2c0  lwz 3, 524(29)
  047a2c4  bl 0xefb38
  047a2c8  nop
  047a2cc  stw 30, 524(29)
  047a2d0  ld 0, 320(1)
  047a2d4  mtlr 0
  047a2d8  lfd 19, 200(1)
  047a2dc  lfd 20, 208(1)
  047a2e0  lfd 21, 216(1)
  047a2e4  lfd 22, 224(1)
  047a2e8  lfd 23, 232(1)
  047a2ec  lfd 24, 240(1)
  047a2f0  lfd 25, 248(1)
  047a2f4  lfd 26, 256(1)
  047a2f8  lfd 27, 264(1)
  047a2fc  lfd 28, 272(1)
  047a300  lfd 29, 280(1)
  047a304  lfd 30, 288(1)
  047a308  lfd 31, 296(1)
  047a30c  ld 27, 160(1)
  047a310  ld 28, 168(1)
  047a314  ld 29, 176(1)
  047a318  ld 30, 184(1)
  047a31c  ld 31, 192(1)
  047a320  addi 1, 1, 304
  047a324  blr

M827_0047a338:   # 0x47a338, 0x1ac bytes
  047a338  stdu 1, -240(1)
  047a33c  mflr 0
  047a340  std 0, 256(1)
  047a344  stfd 27, 200(1)
  047a348  stfd 28, 208(1)
  047a34c  stfd 29, 216(1)
  047a350  stfd 30, 224(1)
  047a354  stfd 31, 232(1)
  047a358  std 31, 192(1)
  047a35c  lis 4, 72
  047a360  ori 31, 3, 0
  047a364  std 30, 184(1)
  047a368  addi 4, 4, -23768
  047a36c  li 30, 0
  047a370  lfs 28, 0(4)
  047a374  lfs 29, 4(4)
  047a378  std 29, 176(1)
  047a37c  std 28, 168(1)
  047a380  std 27, 160(1)
  047a384  lfs 30, 8(4)
  047a388  lfs 31, 12(4)
  047a38c  bl 0xfcc68
  047a390  nop
  047a394  fmr 27, 1
  047a398  bl 0xfcc68
  047a39c  nop
  047a3a0  lis 29, 114
  047a3a4  fmr 3, 1
  047a3a8  addic 28, 1, 112
  047a3ac  fmr 2, 27
  047a3b0  ori 3, 28, 0
  047a3b4  lfs 1, -3052(29)
  047a3b8  fmuls 1, 1, 28
  047a3bc  bl 0xfe610
  047a3c0  nop
  047a3c4  lfs 1, 120(1)
  047a3c8  lfs 2, -3052(29)
  047a3cc  addic 29, 1, 128
  047a3d0  fmadds 3, 2, 29, 1
  047a3d4  fmr 1, 30
  047a3d8  ori 3, 29, 0
  047a3dc  fmr 2, 31
  047a3e0  stfs 3, 120(1)
  047a3e4  bl 0xfea60
  047a3e8  nop
  047a3ec  lfs 1, 136(1)
  047a3f0  lfs 2, 24(31)
  047a3f4  li 3, 20
  047a3f8  lfs 3, 128(1)
  047a3fc  li 4, 35
  047a400  fadds 1, 1, 2
  047a404  lfs 2, 16(31)
  047a408  lfs 4, 132(1)
  047a40c  fadds 2, 3, 2
  047a410  lfs 3, 20(31)
  047a414  fadds 3, 4, 3
  047a418  fadds 1, 1, 31
  047a41c  stfs 2, 128(1)
  047a420  stfs 3, 132(1)
  047a424  stfs 1, 136(1)
  047a428  bl 0xfe484
  047a42c  nop
  047a430  extsw 3, 3
  047a434  li 4, 60
  047a438  std 3, 144(1)
  047a43c  lis 3, 114
  047a440  lfs 1, -3056(3)
  047a444  lfd 2, 144(1)
  047a448  fcfid 2, 2
  047a44c  li 3, 40
  047a450  frsp 2, 2
  047a454  fadds 2, 2, 31
  047a458  fmuls 1, 1, 2
  047a45c  fctiwz 1, 1
  047a460  stfd 1, 144(1)
  047a464  lwz 5, 148(1)
  047a468  extsw 27, 5
  047a46c  bl 0xfe484
  047a470  nop
  047a474  lis 5, 28672
  047a478  ori 9, 3, 0
  047a47c  ori 7, 27, 0
  047a480  ori 3, 29, 0
  047a484  li 8, 30
  047a488  ori 4, 28, 0
  047a48c  ori 5, 5, 41215
  047a490  li 6, 255
  047a494  li 10, 1
  047a498  bl 0x121740
  047a49c  nop
  047a4a0  addic 30, 30, 1
  047a4a4  cmpwi 30, 20
  047a4a8  bt 0, 0x47a38c
  047a4ac  ld 0, 256(1)
  047a4b0  mtlr 0
  047a4b4  lfd 27, 200(1)
  047a4b8  lfd 28, 208(1)
  047a4bc  lfd 29, 216(1)
  047a4c0  lfd 30, 224(1)
  047a4c4  lfd 31, 232(1)
  047a4c8  ld 27, 160(1)
  047a4cc  ld 28, 168(1)
  047a4d0  ld 29, 176(1)
  047a4d4  ld 30, 184(1)
  047a4d8  ld 31, 192(1)
  047a4dc  addi 1, 1, 240
  047a4e0  blr

M827_0047a518:   # 0x47a518, 0x4d4 bytes
  047a518  stdu 1, -336(1)
  047a51c  mflr 0
  047a520  std 0, 352(1)
  047a524  stfd 27, 296(1)
  047a528  stfd 28, 304(1)
  047a52c  stfd 29, 312(1)
  047a530  stfd 30, 320(1)
  047a534  stfd 31, 328(1)
  047a538  std 30, 280(1)
  047a53c  std 27, 256(1)
  047a540  lis 5, 135
  047a544  ori 30, 3, 0
  047a548  std 31, 288(1)
  047a54c  li 27, 0
  047a550  std 29, 272(1)
  047a554  ori 31, 4, 0
  047a558  ori 29, 27, 0
  047a55c  lwz 3, 31516(5)
  047a560  std 28, 264(1)
  047a564  std 26, 248(1)
  047a568  std 25, 240(1)
  047a56c  std 24, 232(1)
  047a570  std 23, 224(1)
  047a574  std 22, 216(1)
  047a578  std 21, 208(1)
  047a57c  std 20, 200(1)
  047a580  cmpwi 3, 0
  047a584  bf 1, 0x47a998
  047a588  lfs 1, 16(30)
  047a58c  lfs 2, 20(30)
  047a590  lis 4, 135
  047a594  stfs 1, 128(1)
  047a598  addic 3, 1, 128
  047a59c  lfs 1, 24(30)
  047a5a0  stfs 2, 132(1)
  047a5a4  lfs 2, 28(30)
  047a5a8  stfs 1, 136(1)
  047a5ac  stfs 2, 140(1)
  047a5b0  lfs 1, 31524(4)
  047a5b4  bl 0x110950
  047a5b8  nop
  047a5bc  lis 3, 72
  047a5c0  lfs 1, 136(1)
  047a5c4  addi 28, 3, -23324
  047a5c8  lfs 2, 0(28)
  047a5cc  fadds 1, 1, 2
  047a5d0  stfs 1, 136(1)
  047a5d4  bl 0xfcc68
  047a5d8  nop
  047a5dc  lis 3, 135
  047a5e0  fmr 31, 1
  047a5e4  lis 4, 135
  047a5e8  lfs 1, 31536(3)
  047a5ec  lfs 2, 31540(4)
  047a5f0  bl 0xfcbe8
  047a5f4  nop
  047a5f8  lis 3, 135
  047a5fc  lis 4, 135
  047a600  fmr 30, 1
  047a604  lfs 1, 31544(3)
  047a608  lfs 2, 31548(4)
  047a60c  bl 0xfcbe8
  047a610  nop
  047a614  lis 3, 270
  047a618  lfs 27, 4(28)
  047a61c  fmr 29, 1
  047a620  fmr 1, 27
  047a624  lfs 2, -26128(3)
  047a628  bl 0xfcbe8
  047a62c  nop
  047a630  lis 3, 114
  047a634  lfs 2, 0(31)
  047a638  lfs 3, -3052(3)
  047a63c  fmuls 1, 1, 3
  047a640  lis 3, 135
  047a644  lis 4, 114
  047a648  fmuls 2, 2, 1
  047a64c  stfs 2, 144(1)
  047a650  lfs 4, 4(31)
  047a654  fmuls 4, 4, 1
  047a658  stfs 4, 148(1)
  047a65c  lfs 5, 8(31)
  047a660  fmuls 1, 5, 1
  047a664  stfs 1, 152(1)
  047a668  lfs 5, 12(31)
  047a66c  stfs 5, 156(1)
  047a670  lfs 6, 8(28)
  047a674  lfs 7, 12(28)
  047a678  fadds 6, 31, 6
  047a67c  fsubs 9, 7, 31
  047a680  lfs 8, 16(28)
  047a684  fmadds 1, 3, 29, 1
  047a688  fsubs 7, 7, 6
  047a68c  fsub 11, 31, 9
  047a690  fsubs 10, 8, 6
  047a694  fsubs 8, 8, 31
  047a698  fsub 12, 6, 7
  047a69c  fsel 9, 11, 9, 31
  047a6a0  lfs 11, 20(28)
  047a6a4  fsel 6, 12, 7, 6
  047a6a8  fsub 7, 8, 9
  047a6ac  fsub 13, 10, 6
  047a6b0  fsel 7, 7, 8, 9
  047a6b4  lfs 8, 24(28)
  047a6b8  lfs 9, 28(28)
  047a6bc  lfs 0, 32(28)
  047a6c0  lwz 3, 31584(3)
  047a6c4  extsw 3, 3
  047a6c8  fsel 6, 13, 10, 6
  047a6cc  fmuls 10, 7, 7
  047a6d0  std 3, 176(1)
  047a6d4  stfs 5, 172(1)
  047a6d8  lis 3, 114
  047a6dc  stfs 1, 152(1)
  047a6e0  stfs 1, 168(1)
  047a6e4  fmuls 12, 6, 6
  047a6e8  fmuls 13, 10, 7
  047a6ec  fmuls 31, 12, 6
  047a6f0  fmuls 28, 10, 13
  047a6f4  fmadds 7, 13, 11, 7
  047a6f8  fmuls 13, 12, 31
  047a6fc  fmadds 6, 31, 11, 6
  047a700  fmuls 11, 10, 28
  047a704  fmadds 7, 28, 8, 7
  047a708  fmuls 31, 3, 30
  047a70c  fmuls 28, 12, 13
  047a710  fmadds 6, 13, 8, 6
  047a714  fmuls 8, 10, 11
  047a718  fmadds 7, 11, 9, 7
  047a71c  fmuls 10, 3, 30
  047a720  fmuls 11, 12, 28
  047a724  fmadds 6, 28, 9, 6
  047a728  fmadds 7, 8, 0, 7
  047a72c  fmadds 3, 11, 0, 6
  047a730  fmadds 4, 10, 7, 4
  047a734  fmadds 2, 31, 3, 2
  047a738  stfs 4, 148(1)
  047a73c  stfs 4, 164(1)
  047a740  lfd 3, 176(1)
  047a744  fcfid 3, 3
  047a748  stfs 2, 144(1)
  047a74c  stfs 2, 160(1)
  047a750  lfs 28, 36(28)
  047a754  ori 28, 29, 0
  047a758  frsp 2, 3
  047a75c  lfs 3, -3056(3)
  047a760  lis 3, 135
  047a764  lfs 4, 31552(3)
  047a768  lfs 5, -3048(4)
  047a76c  fadds 2, 2, 28
  047a770  lis 3, 135
  047a774  fmuls 4, 4, 5
  047a778  lwz 3, 31520(3)
  047a77c  cmpwi 3, 0
  047a780  fmuls 2, 3, 2
  047a784  fctidz 2, 2
  047a788  fcfid 2, 2
  047a78c  frsp 2, 2
  047a790  fnmsubs 1, 4, 2, 1
  047a794  stfs 1, 168(1)
  047a798  bf 1, 0x47a984
  047a79c  lis 3, 72
  047a7a0  addi 3, 3, -23324
  047a7a4  lfs 29, 40(3)
  047a7a8  lfs 30, 44(3)
  047a7ac  lfs 31, 48(3)
  047a7b0  fmr 1, 28
  047a7b4  fmr 2, 29
  047a7b8  bl 0xfcbe8
  047a7bc  nop
  047a7c0  lis 3, 135
  047a7c4  lis 4, 135
  047a7c8  lis 5, 135
  047a7cc  addic 26, 1, 128
  047a7d0  lfs 2, 31556(3)
  047a7d4  lfs 3, 31560(4)
  047a7d8  ori 3, 26, 0
  047a7dc  fmuls 2, 2, 1
  047a7e0  fmuls 3, 3, 1
  047a7e4  lfs 1, 31528(5)
  047a7e8  stfs 2, 156(1)
  047a7ec  stfs 3, 172(1)
  047a7f0  bl 0x110950
  047a7f4  nop
  047a7f8  lis 4, 135
  047a7fc  lis 5, 114
  047a800  addic 25, 1, 160
  047a804  ori 3, 25, 0
  047a808  lfs 1, 31532(4)
  047a80c  lfs 2, -3052(5)
  047a810  fmuls 1, 1, 2
  047a814  bl 0x110950
  047a818  nop
  047a81c  lis 3, 135
  047a820  fmr 1, 27
  047a824  lis 4, 135
  047a828  fmr 2, 30
  047a82c  lwz 3, 31564(3)
  047a830  lwz 4, 31572(4)
  047a834  extsw 24, 3
  047a838  extsw 23, 4
  047a83c  bl 0xfcbe8
  047a840  nop
  047a844  ori 4, 23, 0
  047a848  ori 3, 24, 0
  047a84c  bl 0x5027bc
  047a850  nop
  047a854  lis 4, 135
  047a858  fmr 1, 27
  047a85c  lis 5, 135
  047a860  fmr 2, 30
  047a864  ori 24, 3, 0
  047a868  lwz 3, 31568(4)
  047a86c  lwz 4, 31576(5)
  047a870  extsw 23, 3
  047a874  extsw 22, 4
  047a878  bl 0xfcbe8
  047a87c  nop
  047a880  ori 4, 22, 0
  047a884  ori 3, 23, 0
  047a888  bl 0x5027bc
  047a88c  nop
  047a890  lis 4, 135
  047a894  lis 23, 114
  047a898  lis 5, 135
  047a89c  lwz 4, 31580(4)
  047a8a0  extsw 4, 4
  047a8a4  std 4, 176(1)
  047a8a8  lis 4, 135
  047a8ac  lfs 1, -3056(23)
  047a8b0  ori 22, 3, 0
  047a8b4  lwz 4, 31584(4)
  047a8b8  lfd 2, 176(1)
  047a8bc  fcfid 2, 2
  047a8c0  extsw 4, 4
  047a8c4  frsp 2, 2
  047a8c8  fadds 2, 2, 28
  047a8cc  fmuls 2, 1, 2
  047a8d0  fctiwz 2, 2
  047a8d4  stfd 2, 176(1)
  047a8d8  lwz 6, 180(1)
  047a8dc  std 4, 176(1)
  047a8e0  lwz 4, 31588(5)
  047a8e4  lfd 2, 176(1)
  047a8e8  fcfid 2, 2
  047a8ec  extsw 4, 4
  047a8f0  extsw 21, 6
  047a8f4  frsp 2, 2
  047a8f8  fadds 2, 2, 28
  047a8fc  fmuls 1, 1, 2
  047a900  fctiwz 1, 1
  047a904  stfd 1, 176(1)
  047a908  lwz 3, 180(1)
  047a90c  std 4, 176(1)
  047a910  extsw 20, 3
  047a914  lfd 1, 176(1)
  047a918  fcfid 1, 1
  047a91c  frsp 2, 1
  047a920  fmuls 1, 2, 28
  047a924  fmuls 2, 2, 31
  047a928  bl 0xfcbe8
  047a92c  nop
  047a930  lfs 2, -3056(23)
  047a934  fmuls 1, 1, 2
  047a938  bl 0x502758
  047a93c  nop
  047a940  li 7, -1
  047a944  ori 10, 3, 0
  047a948  ori 3, 26, 0
  047a94c  ori 5, 25, 0
  047a950  std 7, 112(1)
  047a954  ori 6, 24, 0
  047a958  addic 4, 1, 144
  047a95c  ori 9, 20, 0
  047a960  ori 7, 22, 0
  047a964  ori 8, 21, 0
  047a968  bl 0x1206e8
  047a96c  nop
  047a970  lis 3, 135
  047a974  addic 28, 28, 1
  047a978  lwz 3, 31520(3)
  047a97c  cmpw 28, 3
  047a980  bt 0, 0x47a7b0
  047a984  lis 3, 135
  047a988  addic 27, 27, 1
  047a98c  lwz 3, 31516(3)
  047a990  cmpw 27, 3
  047a994  bt 0, 0x47a588
  047a998  ld 0, 352(1)
  047a99c  mtlr 0
  047a9a0  lfd 27, 296(1)
  047a9a4  lfd 28, 304(1)
  047a9a8  lfd 29, 312(1)
  047a9ac  lfd 30, 320(1)
  047a9b0  lfd 31, 328(1)
  047a9b4  ld 20, 200(1)
  047a9b8  ld 21, 208(1)
  047a9bc  ld 22, 216(1)
  047a9c0  ld 23, 224(1)
  047a9c4  ld 24, 232(1)
  047a9c8  ld 25, 240(1)
  047a9cc  ld 26, 248(1)
  047a9d0  ld 27, 256(1)
  047a9d4  ld 28, 264(1)
  047a9d8  ld 29, 272(1)
  047a9dc  ld 30, 280(1)
  047a9e0  ld 31, 288(1)
  047a9e4  addi 1, 1, 336
  047a9e8  blr

M827_0047aa38:   # 0x47aa38, 0x740 bytes
  047aa38  stdu 1, -256(1)
  047aa3c  mflr 0
  047aa40  std 0, 272(1)
  047aa44  stfd 27, 216(1)
  047aa48  stfd 28, 224(1)
  047aa4c  stfd 29, 232(1)
  047aa50  stfd 30, 240(1)
  047aa54  stfd 31, 248(1)
  047aa58  std 31, 208(1)
  047aa5c  lis 4, 72
  047aa60  ori 31, 3, 0
  047aa64  addi 4, 4, -22036
  047aa68  lfs 1, 0(4)
  047aa6c  std 30, 200(1)
  047aa70  lfs 2, 232(31)
  047aa74  lwz 30, 120(31)
  047aa78  fmuls 1, 2, 1
  047aa7c  lwz 3, 524(30)
  047aa80  cmpwi 3, 0
  047aa84  std 29, 192(1)
  047aa88  std 28, 184(1)
  047aa8c  std 27, 176(1)
  047aa90  std 26, 168(1)
  047aa94  stfs 1, 48(30)
  047aa98  bt 2, 0x47ab08
  047aa9c  lis 4, 51
  047aaa0  li 5, 0
  047aaa4  bl 0x10675c
  047aaa8  nop
  047aaac  cmpwi 3, 0
  047aab0  bt 2, 0x47ab08
  047aab4  lwz 3, 32(3)
  047aab8  cmpwi 3, 0
  047aabc  bt 2, 0x47aacc
  047aac0  lhz 3, 166(3)
  047aac4  cmpwi 3, 175
  047aac8  bt 2, 0x47ab08
  047aacc  lis 4, 161
  047aad0  ori 3, 31, 0
  047aad4  addic 4, 4, 23856
  047aad8  bl 0x47a518
  047aadc  ori 3, 31, 0
  047aae0  bl 0x479fa8
  047aae4  ori 3, 31, 0
  047aae8  li 4, 0
  047aaec  li 5, -1
  047aaf0  bl 0xfd8d0
  047aaf4  nop
  047aaf8  ori 3, 31, 0
  047aafc  bl 0xefb38
  047ab00  nop
  047ab04  b 0x47b13c
  047ab08  lis 3, 72
  047ab0c  li 6, 0
  047ab10  addi 7, 3, -22036
  047ab14  ori 3, 31, 0
  047ab18  lis 4, 51
  047ab1c  li 5, 0
  047ab20  lfs 28, 4(7)
  047ab24  stw 6, 148(1)
  047ab28  bl 0x10675c
  047ab2c  nop
  047ab30  ori 29, 3, 0
  047ab34  addic 5, 30, 32
  047ab38  ori 4, 29, 0
  047ab3c  li 6, 0
  047ab40  addic 7, 1, 144
  047ab44  li 9, 0
  047ab48  addic 8, 1, 148
  047ab4c  ori 3, 31, 0
  047ab50  li 10, 4
  047ab54  bl 0x106840
  047ab58  nop
  047ab5c  lwz 4, 144(1)
  047ab60  cmpwi 4, 1
  047ab64  bt 2, 0x47adcc
  047ab68  lbz 4, 32(31)
  047ab6c  cmpwi 4, 14
  047ab70  bt 2, 0x47adcc
  047ab74  lfs 1, 32(30)
  047ab78  lfs 2, 148(1)
  047ab7c  fsubs 1, 1, 2
  047ab80  fcmpu 0, 1, 28
  047ab84  stfs 1, 32(30)
  047ab88  cror 6, 0, 2
  047ab8c  bt 6, 0x47aba0
  047ab90  cmpwi 3, 0
  047ab94  bf 1, 0x47adcc
  047ab98  cmpwi 3, 2
  047ab9c  bt 1, 0x47adcc
  047aba0  ori 3, 31, 0
  047aba4  li 4, 0
  047aba8  li 5, -1
  047abac  bl 0xfd8d0
  047abb0  nop
  047abb4  ori 3, 31, 0
  047abb8  addic 4, 29, 16
  047abbc  bl 0x47a518
  047abc0  lbz 3, 334(30)
  047abc4  cmpwi 3, 1
  047abc8  bf 2, 0x47ad0c
  047abcc  lis 3, 72
  047abd0  li 29, 0
  047abd4  addi 3, 3, -22036
  047abd8  lfs 29, 8(3)
  047abdc  lfs 30, 12(3)
  047abe0  lfs 31, 16(3)
  047abe4  bl 0xfcc68
  047abe8  nop
  047abec  fmr 27, 1
  047abf0  bl 0xfcc68
  047abf4  nop
  047abf8  lis 28, 114
  047abfc  fmr 3, 1
  047ac00  addic 27, 1, 112
  047ac04  fmr 2, 27
  047ac08  ori 3, 27, 0
  047ac0c  lfs 1, -3052(28)
  047ac10  fmuls 1, 1, 29
  047ac14  bl 0xfe610
  047ac18  nop
  047ac1c  lfs 1, 120(1)
  047ac20  lfs 2, -3052(28)
  047ac24  addic 28, 1, 128
  047ac28  fmadds 3, 2, 30, 1
  047ac2c  fmr 1, 28
  047ac30  ori 3, 28, 0
  047ac34  fmr 2, 31
  047ac38  stfs 3, 120(1)
  047ac3c  bl 0xfea60
  047ac40  nop
  047ac44  lfs 1, 136(1)
  047ac48  lfs 2, 24(31)
  047ac4c  li 3, 20
  047ac50  lfs 3, 128(1)
  047ac54  li 4, 35
  047ac58  fadds 1, 1, 2
  047ac5c  lfs 2, 16(31)
  047ac60  lfs 4, 132(1)
  047ac64  fadds 2, 3, 2
  047ac68  lfs 3, 20(31)
  047ac6c  fadds 3, 4, 3
  047ac70  fadds 1, 1, 31
  047ac74  stfs 2, 128(1)
  047ac78  stfs 3, 132(1)
  047ac7c  stfs 1, 136(1)
  047ac80  bl 0xfe484
  047ac84  nop
  047ac88  extsw 3, 3
  047ac8c  li 4, 60
  047ac90  std 3, 152(1)
  047ac94  lis 3, 114
  047ac98  lfs 1, -3056(3)
  047ac9c  lfd 2, 152(1)
  047aca0  fcfid 2, 2
  047aca4  li 3, 40
  047aca8  frsp 2, 2
  047acac  fadds 2, 2, 31
  047acb0  fmuls 1, 1, 2
  047acb4  fctiwz 1, 1
  047acb8  stfd 1, 152(1)
  047acbc  lwz 5, 156(1)
  047acc0  extsw 26, 5
  047acc4  bl 0xfe484
  047acc8  nop
  047accc  lis 5, 28672
  047acd0  ori 9, 3, 0
  047acd4  ori 7, 26, 0
  047acd8  ori 3, 28, 0
  047acdc  li 8, 30
  047ace0  ori 4, 27, 0
  047ace4  ori 5, 5, 41215
  047ace8  li 6, 255
  047acec  li 10, 1
  047acf0  bl 0x121740
  047acf4  nop
  047acf8  addic 29, 29, 1
  047acfc  cmpwi 29, 20
  047ad00  bt 0, 0x47abe4
  047ad04  li 3, 0
  047ad08  stb 3, 334(30)
  047ad0c  li 3, 3
  047ad10  li 4, 0
  047ad14  ori 5, 31, 0
  047ad18  bl 0x15d12c
  047ad1c  nop
  047ad20  lwz 3, 524(30)
  047ad24  cmpwi 3, 0
  047ad28  bt 2, 0x47ad34
  047ad2c  ori 3, 31, 0
  047ad30  bl 0x479fa8
  047ad34  lhz 3, 576(30)
  047ad38  cmpwi 3, 0
  047ad3c  bt 2, 0x47adbc
  047ad40  li 4, 36
  047ad44  vspltisw 2, -16
  047ad48  addic 3, 3, -1
  047ad4c  addi 5, 4, 16
  047ad50  li 6, 15
  047ad54  <unknown>
  047ad58  li 4, 32
  047ad5c  <unknown>
  047ad60  sth 3, 576(30)
  047ad64  vor 3, 3, 4
  047ad68  li 3, 0
  047ad6c  lfs 1, 528(30)
  047ad70  lhz 5, 52(31)
  047ad74  vsraw 2, 3, 2
  047ad78  rlwimi 5, 3, 0, 19, 19
  047ad7c  ori 5, 5, 65
  047ad80  vcfsx 2, 2, 0
  047ad84  rlwimi 5, 3, 0, 19, 19
  047ad88  vspltw 2, 2, 0
  047ad8c  stvewx 2, 4, 30
  047ad90  stfs 1, 16(31)
  047ad94  lfs 1, 532(30)
  047ad98  stfs 1, 20(31)
  047ad9c  lfs 1, 536(30)
  047ada0  stfs 1, 24(31)
  047ada4  lfs 1, 540(30)
  047ada8  stb 6, 32(31)
  047adac  stfs 1, 28(31)
  047adb0  stw 3, 148(31)
  047adb4  sth 5, 52(31)
  047adb8  b 0x47adcc
  047adbc  ori 3, 31, 0
  047adc0  bl 0xefb38
  047adc4  nop
  047adc8  b 0x47b13c
  047adcc  li 3, 255
  047add0  lis 4, 72
  047add4  addi 29, 4, -22036
  047add8  stb 3, 164(31)
  047addc  lis 4, 114
  047ade0  lis 3, 135
  047ade4  lfs 2, 20(29)
  047ade8  lfs 3, 31504(3)
  047adec  lfs 1, 584(30)
  047adf0  fmuls 2, 3, 2
  047adf4  lfs 4, -3052(4)
  047adf8  fmuls 2, 2, 4
  047adfc  bl 0x502578
  047ae00  nop
  047ae04  lfs 2, 24(29)
  047ae08  lfs 3, 28(29)
  047ae0c  fsubs 2, 2, 1
  047ae10  fsubs 3, 3, 1
  047ae14  lis 3, 135
  047ae18  lis 4, 135
  047ae1c  fsub 4, 1, 2
  047ae20  fsel 2, 4, 2, 1
  047ae24  lfs 4, 32(29)
  047ae28  lfs 5, 36(29)
  047ae2c  fsub 6, 3, 2
  047ae30  fsel 2, 6, 3, 2
  047ae34  lfs 3, 40(29)
  047ae38  lfs 6, 44(29)
  047ae3c  lfs 8, 48(29)
  047ae40  lfs 10, 16(29)
  047ae44  lwz 3, 31508(3)
  047ae48  lwz 4, 31512(4)
  047ae4c  stfs 1, 584(30)
  047ae50  fmuls 7, 2, 2
  047ae54  extsw 3, 3
  047ae58  extsw 4, 4
  047ae5c  fmuls 9, 7, 2
  047ae60  fmadds 2, 9, 4, 2
  047ae64  fmuls 11, 7, 9
  047ae68  fmr 4, 10
  047ae6c  fmuls 9, 7, 11
  047ae70  fmadds 2, 11, 5, 2
  047ae74  fmuls 1, 7, 9
  047ae78  fmadds 2, 9, 3, 2
  047ae7c  fmadds 1, 1, 6, 2
  047ae80  fadds 1, 1, 8
  047ae84  fmuls 1, 1, 4
  047ae88  bl 0x5027bc
  047ae8c  nop
  047ae90  lwz 4, 56(30)
  047ae94  stw 3, 144(31)
  047ae98  cmpwi 4, 0
  047ae9c  bt 2, 0x47aed8
  047aea0  lis 3, 72
  047aea4  addi 3, 3, -22036
  047aea8  lfs 1, 52(3)
  047aeac  lfs 2, 56(3)
  047aeb0  bl 0xfcbe8
  047aeb4  nop
  047aeb8  lis 3, 114
  047aebc  lfs 2, -3056(3)
  047aec0  fmuls 1, 1, 2
  047aec4  bl 0x502758
  047aec8  nop
  047aecc  li 4, 0
  047aed0  sth 3, 488(30)
  047aed4  stw 4, 56(30)
  047aed8  addic 3, 30, 488
  047aedc  bl 0x4fffb4
  047aee0  nop
  047aee4  lhz 4, 488(30)
  047aee8  lwz 3, 516(30)
  047aeec  cmpwi 4, 0
  047aef0  bt 2, 0x47af0c
  047aef4  lis 4, 72
  047aef8  lfs 1, 476(30)
  047aefc  addi 4, 4, -22036
  047af00  lfs 2, 60(4)
  047af04  fadds 1, 1, 2
  047af08  b 0x47af10
  047af0c  lfs 1, 476(30)
  047af10  cmpwi 3, -1
  047af14  stfs 1, 480(30)
  047af18  bt 2, 0x47af60
  047af1c  lis 4, 164
  047af20  slwi 3, 3, 8
  047af24  li 5, 1
  047af28  lwz 4, -28512(4)
  047af2c  stw 5, 452(30)
  047af30  addc 3, 4, 3
  047af34  clrldi 4, 3, 32
  047af38  stw 3, 448(30)
  047af3c  lfs 1, 16(4)
  047af40  stfs 1, 384(30)
  047af44  lfs 1, 20(4)
  047af48  stfs 1, 388(30)
  047af4c  lfs 1, 24(4)
  047af50  stfs 1, 392(30)
  047af54  lfs 1, 28(4)
  047af58  stfs 1, 396(30)
  047af5c  b 0x47b120
  047af60  lis 3, 151
  047af64  addic 3, 3, -25376
  047af68  lbz 3, 8356(3)
  047af6c  cmpwi 3, 1
  047af70  bf 2, 0x47b07c
  047af74  lis 3, 161
  047af78  lwz 3, 1808(3)
  047af7c  lhz 5, 522(30)
  047af80  srawi 4, 3, 3
  047af84  extsh 5, 5
  047af88  addze 4, 4
  047af8c  sldi 4, 4, 3
  047af90  subc 3, 3, 4
  047af94  cmpw 3, 5
  047af98  bf 2, 0x47b120
  047af9c  ori 3, 31, 0
  047afa0  addic 4, 30, 448
  047afa4  bl 0x495490
  047afa8  nop
  047afac  lwz 3, 448(30)
  047afb0  cmpwi 3, 0
  047afb4  bf 2, 0x47afc4
  047afb8  li 3, 2
  047afbc  stw 3, 452(30)
  047afc0  b 0x47b120
  047afc4  lwz 5, 500(30)
  047afc8  lis 4, 165
  047afcc  slwi 5, 5, 2
  047afd0  addic 4, 4, 7136
  047afd4  extsw 5, 5
  047afd8  addic 3, 3, 16
  047afdc  lwzx 5, 4, 5
  047afe0  addic 4, 5, 16
  047afe4  lwz 5, 0(5)
  047afe8  extsw 5, 5
  047afec  bl 0x104e44
  047aff0  nop
  047aff4  cmpwi 3, 0
  047aff8  bf 2, 0x47b010
  047affc  li 3, 0
  047b000  li 4, 2
  047b004  stw 3, 448(30)
  047b008  stw 4, 452(30)
  047b00c  b 0x47b120
  047b010  lwz 3, 448(30)
  047b014  lhz 4, 166(3)
  047b018  cmpwi 4, 857
  047b01c  bf 2, 0x47b070
  047b020  lfs 1, 20(31)
  047b024  lfs 2, 20(3)
  047b028  lfs 3, 16(31)
  047b02c  fsubs 1, 1, 2
  047b030  lfs 2, 16(3)
  047b034  fsubs 2, 3, 2
  047b038  lis 3, 72
  047b03c  addi 3, 3, -22036
  047b040  fmuls 1, 1, 1
  047b044  fmadds 1, 2, 2, 1
  047b048  lfs 2, 64(3)
  047b04c  fsqrts 1, 1
  047b050  fcmpu 0, 1, 2
  047b054  cror 6, 0, 2
  047b058  bt 6, 0x47b070
  047b05c  li 3, 0
  047b060  li 4, 2
  047b064  stw 3, 448(30)
  047b068  stw 4, 452(30)
  047b06c  b 0x47b120
  047b070  li 3, 0
  047b074  stw 3, 452(30)
  047b078  b 0x47b120
  047b07c  lis 3, 165
  047b080  addic 4, 30, 384
  047b084  addic 5, 3, 7136
  047b088  lwz 3, 500(30)
  047b08c  li 6, 0
  047b090  slwi 3, 3, 2
  047b094  extsw 7, 3
  047b098  ori 3, 31, 0
  047b09c  lwzx 5, 5, 7
  047b0a0  li 7, 0
  047b0a4  addic 8, 5, 16
  047b0a8  lwz 9, 0(5)
  047b0ac  extsw 9, 9
  047b0b0  bl 0x111ba0
  047b0b4  nop
  047b0b8  cmpwi 3, 2
  047b0bc  bt 2, 0x47b120
  047b0c0  lfs 1, 532(30)
  047b0c4  lfs 2, 388(30)
  047b0c8  lfs 3, 528(30)
  047b0cc  fsubs 1, 1, 2
  047b0d0  lfs 2, 384(30)
  047b0d4  fsubs 2, 3, 2
  047b0d8  fmuls 1, 1, 1
  047b0dc  fmadds 1, 2, 2, 1
  047b0e0  lfs 2, 480(30)
  047b0e4  fsqrts 1, 1
  047b0e8  fcmpu 0, 1, 2
  047b0ec  bt 1, 0x47b118
  047b0f0  lfs 1, 24(31)
  047b0f4  lis 3, 72
  047b0f8  lfs 2, 392(30)
  047b0fc  addi 3, 3, -22036
  047b100  fsubs 1, 1, 2
  047b104  lfs 2, 68(3)
  047b108  fabs 1, 1
  047b10c  fcmpu 0, 1, 2
  047b110  cror 6, 0, 2
  047b114  bt 6, 0x47b120
  047b118  li 3, 2
  047b11c  stw 3, 452(30)
  047b120  lwz 3, 448(30)
  047b124  cmpwi 3, 0
  047b128  bf 2, 0x47b13c
  047b12c  lis 3, 151
  047b130  addic 3, 3, -25376
  047b134  lwz 3, 8320(3)
  047b138  stw 3, 448(30)
  047b13c  ld 0, 272(1)
  047b140  mtlr 0
  047b144  lfd 27, 216(1)
  047b148  lfd 28, 224(1)
  047b14c  lfd 29, 232(1)
  047b150  lfd 30, 240(1)
  047b154  lfd 31, 248(1)
  047b158  ld 26, 168(1)
  047b15c  ld 27, 176(1)
  047b160  ld 28, 184(1)
  047b164  ld 29, 192(1)
  047b168  ld 30, 200(1)
  047b16c  ld 31, 208(1)
  047b170  addi 1, 1, 256
  047b174  blr

UpdateMoby_827:   # 0x47b1f0, 0x1860 bytes
  047b1f0  stdu 1, -464(1)
  047b1f4  mflr 0
  047b1f8  std 0, 480(1)
  047b1fc  stfd 26, 416(1)
  047b200  stfd 27, 424(1)
  047b204  stfd 28, 432(1)
  047b208  stfd 29, 440(1)
  047b20c  stfd 30, 448(1)
  047b210  stfd 31, 456(1)
  047b214  std 31, 408(1)
  047b218  lis 4, 270
  047b21c  ori 31, 3, 0
  047b220  std 30, 400(1)
  047b224  lwz 4, -26136(4)
  047b228  lwz 30, 120(3)
  047b22c  std 29, 392(1)
  047b230  std 28, 384(1)
  047b234  cmpwi 4, 0
  047b238  bf 2, 0x47ca18
  047b23c  lis 3, 161
  047b240  lwz 3, 1800(3)
  047b244  cmpwi 3, 2
  047b248  cmpwi 1, 3, 0
  047b24c  bf 2, 0x47b278
  047b250  lhz 3, 52(31)
  047b254  clrlwi 3, 3, 31
  047b258  cmpwi 3, 0
  047b25c  bf 2, 0x47b278
  047b260  li 3, 1
  047b264  sth 3, 490(30)
  047b268  lhz 3, 52(31)
  047b26c  ori 3, 3, 65
  047b270  sth 3, 52(31)
  047b274  b 0x47b2a0
  047b278  bf 6, 0x47b2a0
  047b27c  lhz 3, 490(30)
  047b280  cmpwi 3, 0
  047b284  bt 2, 0x47b2a0
  047b288  li 3, 0
  047b28c  li 4, -66
  047b290  sth 3, 490(30)
  047b294  lhz 3, 52(31)
  047b298  and 3, 3, 4
  047b29c  sth 3, 52(31)
  047b2a0  lbz 3, 32(31)
  047b2a4  cmpwi 3, 16
  047b2a8  bt 2, 0x47b2d8
  047b2ac  lis 3, 162
  047b2b0  lwz 3, 2080(3)
  047b2b4  cmpwi 1, 3, 0
  047b2b8  bt 6, 0x47b2c8
  047b2bc  lhz 3, 578(30)
  047b2c0  cmpwi 3, 0
  047b2c4  bt 2, 0x47ca18
  047b2c8  bf 6, 0x47b2d8
  047b2cc  lhz 3, 578(30)
  047b2d0  cmpwi 3, 0
  047b2d4  bf 2, 0x47ca18
  047b2d8  lis 4, 72
  047b2dc  ori 3, 31, 0
  047b2e0  addi 6, 4, -20104
  047b2e4  li 4, 1
  047b2e8  addic 5, 30, 592
  047b2ec  lfs 1, 0(6)
  047b2f0  bl 0x119a18
  047b2f4  nop
  047b2f8  ori 3, 31, 0
  047b2fc  bl 0x47aa38
  047b300  lbz 3, 49(31)
  047b304  cmpwi 3, 0
  047b308  bt 2, 0x47b34c
  047b30c  lis 4, 149
  047b310  addic 3, 31, 16
  047b314  addic 4, 4, 5376
  047b318  bl 0x5e8548
  047b31c  nop
  047b320  lis 3, 72
  047b324  addi 3, 3, -20104
  047b328  lfs 2, 4(3)
  047b32c  fcmpu 0, 1, 2
  047b330  cror 6, 1, 2
  047b334  bt 6, 0x47b34c
  047b338  ori 3, 31, 0
  047b33c  bl 0x106360
  047b340  nop
  047b344  li 3, 11
  047b348  stb 3, 127(31)
  047b34c  lbz 3, 32(31)
  047b350  lwz 29, 448(30)
  047b354  cmpwi 1, 3, 7
  047b358  cmpwi 6, 3, 6
  047b35c  cmpwi 7, 3, 5
  047b360  bt 5, 0x47b394
  047b364  bt 6, 0x47bbec
  047b368  bt 26, 0x47bb40
  047b36c  bt 30, 0x47baa4
  047b370  cmpwi 3, 4
  047b374  bt 2, 0x47b7b8
  047b378  cmpwi 3, 3
  047b37c  bt 2, 0x47b6f0
  047b380  cmpwi 3, 1
  047b384  bt 2, 0x47b65c
  047b388  cmpwi 3, 0
  047b38c  bt 2, 0x47b3d0
  047b390  b 0x47ca18
  047b394  cmpwi 3, 16
  047b398  bt 2, 0x47c9a8
  047b39c  cmpwi 3, 13
  047b3a0  bt 2, 0x47c800
  047b3a4  cmpwi 3, 12
  047b3a8  bt 2, 0x47c534
  047b3ac  cmpwi 3, 11
  047b3b0  bt 2, 0x47c4d0
  047b3b4  cmpwi 3, 10
  047b3b8  bt 2, 0x47c1d8
  047b3bc  cmpwi 3, 9
  047b3c0  bt 2, 0x47bfac
  047b3c4  cmpwi 3, 8
  047b3c8  bt 2, 0x47bc50
  047b3cc  b 0x47ca18
  047b3d0  lis 3, 270
  047b3d4  lwz 5, -26132(3)
  047b3d8  srawi 4, 5, 3
  047b3dc  addze 7, 4
  047b3e0  addic 6, 5, 1
  047b3e4  lhz 4, 576(30)
  047b3e8  sldi 7, 7, 3
  047b3ec  cmpwi 4, 0
  047b3f0  stw 6, -26132(3)
  047b3f4  subc 3, 5, 7
  047b3f8  sth 3, 522(30)
  047b3fc  lhz 3, 52(31)
  047b400  bt 2, 0x47b418
  047b404  lhz 5, 180(31)
  047b408  extsh 4, 4
  047b40c  extsh 5, 5
  047b410  divw 4, 5, 4
  047b414  sth 4, 180(31)
  047b418  lis 4, 72
  047b41c  ori 3, 3, 256
  047b420  addi 29, 4, -20104
  047b424  sth 3, 52(31)
  047b428  lfs 1, 8(29)
  047b42c  bl 0x502758
  047b430  nop
  047b434  stb 3, 88(30)
  047b438  lfs 1, 12(29)
  047b43c  bl 0x502758
  047b440  nop
  047b444  addic 28, 31, 16
  047b448  stb 3, 90(30)
  047b44c  addic 3, 30, 528
  047b450  ori 4, 28, 0
  047b454  bl 0x5e7e98
  047b458  nop
  047b45c  addic 3, 30, 560
  047b460  ori 4, 28, 0
  047b464  bl 0x5e7e98
  047b468  nop
  047b46c  addic 3, 30, 544
  047b470  addic 4, 31, 64
  047b474  bl 0x5e7e98
  047b478  nop
  047b47c  li 28, 0
  047b480  sth 28, 520(30)
  047b484  lfs 1, 16(29)
  047b488  lfs 2, 20(29)
  047b48c  bl 0xfcbe8
  047b490  nop
  047b494  li 3, 512
  047b498  stfs 1, 580(30)
  047b49c  lis 4, 114
  047b4a0  stw 28, 328(30)
  047b4a4  stw 3, 320(30)
  047b4a8  lfs 1, 24(29)
  047b4ac  lfs 2, -3048(4)
  047b4b0  stw 28, 308(30)
  047b4b4  fmuls 1, 2, 1
  047b4b8  stfs 1, 304(30)
  047b4bc  bl 0xfcc68
  047b4c0  nop
  047b4c4  lis 3, 135
  047b4c8  stfs 1, 584(30)
  047b4cc  li 4, 1
  047b4d0  lhz 5, 512(30)
  047b4d4  addic 3, 3, 31484
  047b4d8  cmpwi 5, 0
  047b4dc  stb 4, 41(30)
  047b4e0  stw 3, 208(30)
  047b4e4  bt 2, 0x47b5ac
  047b4e8  li 4, 1
  047b4ec  li 3, 500
  047b4f0  stb 4, 32(31)
  047b4f4  bl 0xefa28
  047b4f8  nop
  047b4fc  cmpwi 3, 0
  047b500  stw 3, 524(30)
  047b504  bt 2, 0x47b59c
  047b508  ld 4, 56(31)
  047b50c  std 4, 56(3)
  047b510  lwz 3, 524(30)
  047b514  li 5, 1
  047b518  lhz 4, 52(3)
  047b51c  ori 4, 4, 16386
  047b520  sth 4, 52(3)
  047b524  lwz 3, 524(30)
  047b528  li 4, 64
  047b52c  lfs 1, 16(31)
  047b530  stfs 1, 16(3)
  047b534  lfs 1, 20(31)
  047b538  stfs 1, 20(3)
  047b53c  lfs 1, 24(31)
  047b540  stfs 1, 24(3)
  047b544  lfs 1, 28(31)
  047b548  stfs 1, 28(3)
  047b54c  lwz 3, 524(30)
  047b550  lfs 1, 64(31)
  047b554  stfs 1, 64(3)
  047b558  lfs 1, 68(31)
  047b55c  stfs 1, 68(3)
  047b560  lfs 1, 72(31)
  047b564  stfs 1, 72(3)
  047b568  lfs 1, 76(31)
  047b56c  stfs 1, 76(3)
  047b570  lwz 3, 524(30)
  047b574  sth 4, 50(3)
  047b578  lwz 3, 524(30)
  047b57c  stb 5, 49(3)
  047b580  lwz 3, 524(30)
  047b584  bl 0xf31a8
  047b588  nop
  047b58c  lhz 3, 52(31)
  047b590  ori 3, 3, 65
  047b594  sth 3, 52(31)
  047b598  b 0x47ca18
  047b59c  ori 3, 31, 0
  047b5a0  bl 0xefb38
  047b5a4  nop
  047b5a8  b 0x47ca18
  047b5ac  lhz 3, 514(30)
  047b5b0  cmpwi 3, 0
  047b5b4  bt 2, 0x47b5dc
  047b5b8  li 4, 15
  047b5bc  lhz 5, 52(31)
  047b5c0  li 3, 0
  047b5c4  stb 4, 32(31)
  047b5c8  ori 4, 5, 65
  047b5cc  stw 3, 148(31)
  047b5d0  rlwimi 4, 3, 0, 19, 19
  047b5d4  sth 4, 52(31)
  047b5d8  b 0x47ca18
  047b5dc  lwz 3, 504(30)
  047b5e0  cmpwi 3, -1
  047b5e4  bf 1, 0x47b618
  047b5e8  li 3, 3
  047b5ec  lbz 4, 83(31)
  047b5f0  cmpwi 4, 0
  047b5f4  stb 3, 32(31)
  047b5f8  bt 2, 0x47ca18
  047b5fc  ori 3, 31, 0
  047b600  li 4, 0
  047b604  li 5, 0
  047b608  li 6, 0
  047b60c  bl 0xfddc0
  047b610  nop
  047b614  b 0x47ca18
  047b618  li 3, 8
  047b61c  lbz 4, 83(31)
  047b620  cmpwi 4, 4
  047b624  stb 3, 32(31)
  047b628  bt 2, 0x47ca18
  047b62c  lwz 3, 36(31)
  047b630  lwz 3, 88(3)
  047b634  lbz 3, 16(3)
  047b638  bl 0xfc620
  047b63c  nop
  047b640  ori 5, 3, 0
  047b644  ori 3, 31, 0
  047b648  li 4, 4
  047b64c  li 6, 0
  047b650  bl 0xfddc0
  047b654  nop
  047b658  b 0x47ca18
  047b65c  addic 3, 31, 16
  047b660  addic 4, 29, 16
  047b664  bl 0x5e8588
  047b668  nop
  047b66c  lis 3, 72
  047b670  addi 3, 3, -20104
  047b674  lfs 2, 28(3)
  047b678  fcmpu 0, 1, 2
  047b67c  cror 6, 1, 2
  047b680  bt 6, 0x47ca18
  047b684  li 4, -66
  047b688  lhz 5, 52(31)
  047b68c  ori 3, 31, 0
  047b690  and 4, 5, 4
  047b694  sth 4, 52(31)
  047b698  bl 0x479fa8
  047b69c  li 4, 8
  047b6a0  lbz 3, 83(31)
  047b6a4  cmpwi 3, 4
  047b6a8  stb 4, 32(31)
  047b6ac  bt 2, 0x47ca18
  047b6b0  lis 3, 72
  047b6b4  lis 4, 114
  047b6b8  addi 3, 3, -20104
  047b6bc  li 5, 0
  047b6c0  lfs 1, 32(3)
  047b6c4  lfs 2, -3056(4)
  047b6c8  ori 3, 31, 0
  047b6cc  li 4, 4
  047b6d0  fmuls 1, 2, 1
  047b6d4  fctiwz 1, 1
  047b6d8  stfd 1, 368(1)
  047b6dc  lwz 6, 372(1)
  047b6e0  extsw 6, 6
  047b6e4  bl 0xfddc0
  047b6e8  nop
  047b6ec  b 0x47ca18
  047b6f0  addic 28, 1, 128
  047b6f4  addic 4, 29, 16
  047b6f8  ori 3, 28, 0
  047b6fc  addic 5, 31, 16
  047b700  bl 0x5e81f0
  047b704  nop
  047b708  ori 3, 31, 0
  047b70c  bl 0x479e20
  047b710  lis 4, 161
  047b714  ori 3, 31, 0
  047b718  addic 4, 4, 2368
  047b71c  ori 5, 28, 0
  047b720  addic 4, 4, 64
  047b724  bl 0x479b78
  047b728  lis 3, 151
  047b72c  lfs 1, 20(31)
  047b730  addic 3, 3, -25376
  047b734  lfs 2, 16(31)
  047b738  lfs 3, 132(3)
  047b73c  lfs 4, 128(3)
  047b740  fsubs 1, 3, 1
  047b744  fsubs 2, 4, 2
  047b748  fmuls 1, 1, 1
  047b74c  fmadds 1, 2, 2, 1
  047b750  lfs 2, 588(30)
  047b754  fsqrts 1, 1
  047b758  fcmpu 0, 1, 2
  047b75c  cror 6, 1, 2
  047b760  bt 6, 0x47ca18
  047b764  li 3, 4
  047b768  lbz 4, 83(31)
  047b76c  cmpwi 4, 4
  047b770  stb 3, 32(31)
  047b774  bt 2, 0x47ca18
  047b778  lis 3, 72
  047b77c  lis 4, 114
  047b780  addi 3, 3, -20104
  047b784  li 5, 0
  047b788  lfs 1, 32(3)
  047b78c  lfs 2, -3056(4)
  047b790  ori 3, 31, 0
  047b794  li 4, 4
  047b798  fmuls 1, 2, 1
  047b79c  fctiwz 1, 1
  047b7a0  stfd 1, 368(1)
  047b7a4  lwz 6, 372(1)
  047b7a8  extsw 6, 6
  047b7ac  bl 0xfddc0
  047b7b0  nop
  047b7b4  b 0x47ca18
  047b7b8  lwz 3, 504(30)
  047b7bc  lis 29, 165
  047b7c0  lhz 4, 520(30)
  047b7c4  slwi 3, 3, 2
  047b7c8  lfs 1, 16(31)
  047b7cc  addic 29, 29, 7136
  047b7d0  lfs 2, 20(31)
  047b7d4  extsw 3, 3
  047b7d8  extsh 4, 4
  047b7dc  sldi 4, 4, 4
  047b7e0  lwzx 3, 29, 3
  047b7e4  lfs 3, 24(31)
  047b7e8  addc 3, 3, 4
  047b7ec  clrldi 4, 3, 32
  047b7f0  ori 3, 31, 0
  047b7f4  lfs 4, 16(4)
  047b7f8  lfs 5, 20(4)
  047b7fc  lfs 6, 24(4)
  047b800  fsubs 1, 4, 1
  047b804  fsubs 2, 5, 2
  047b808  lfs 4, 28(4)
  047b80c  fsubs 3, 6, 3
  047b810  stfs 4, 156(1)
  047b814  stfs 1, 144(1)
  047b818  stfs 2, 148(1)
  047b81c  stfs 3, 152(1)
  047b820  bl 0x479e20
  047b824  lis 4, 161
  047b828  addic 5, 1, 144
  047b82c  addic 4, 4, 2368
  047b830  ori 3, 31, 0
  047b834  addic 4, 4, 64
  047b838  bl 0x479b78
  047b83c  lfs 2, 196(31)
  047b840  lfs 3, 192(31)
  047b844  fmuls 1, 2, 2
  047b848  lfs 4, 200(31)
  047b84c  lis 3, 72
  047b850  addi 3, 3, -20104
  047b854  fmadds 1, 3, 3, 1
  047b858  fmadds 6, 4, 4, 1
  047b85c  lfs 1, 36(3)
  047b860  lis 3, 114
  047b864  lfs 5, 484(30)
  047b868  lfs 7, -3052(3)
  047b86c  fsqrts 6, 6
  047b870  fmuls 5, 5, 7
  047b874  fcmpu 0, 6, 1
  047b878  bf 2, 0x47b88c
  047b87c  fmr 3, 1
  047b880  lfs 4, 204(31)
  047b884  fmr 2, 3
  047b888  b 0x47b8a4
  047b88c  fdivs 5, 5, 6
  047b890  lfs 6, 204(31)
  047b894  fmuls 1, 3, 5
  047b898  fmuls 3, 4, 5
  047b89c  fmuls 2, 2, 5
  047b8a0  fmr 4, 6
  047b8a4  lis 3, 72
  047b8a8  stfs 1, 160(1)
  047b8ac  stfs 2, 164(1)
  047b8b0  addic 4, 1, 160
  047b8b4  addi 28, 3, -20104
  047b8b8  stfs 3, 168(1)
  047b8bc  stfs 4, 172(1)
  047b8c0  ori 3, 31, 0
  047b8c4  li 7, 0
  047b8c8  lfs 1, 40(28)
  047b8cc  fmr 2, 1
  047b8d0  bl 0x479880
  047b8d4  lfs 1, 148(1)
  047b8d8  lfs 2, 212(31)
  047b8dc  lfs 4, 144(1)
  047b8e0  fmuls 2, 2, 1
  047b8e4  lfs 3, 208(31)
  047b8e8  lfs 5, 196(31)
  047b8ec  fmuls 3, 3, 1
  047b8f0  lfs 6, 192(31)
  047b8f4  lfs 7, 152(1)
  047b8f8  lfs 8, 228(31)
  047b8fc  lfs 9, 224(31)
  047b900  fmadds 2, 5, 4, 2
  047b904  fmadds 3, 6, 4, 3
  047b908  lfs 6, 220(31)
  047b90c  fmuls 6, 6, 1
  047b910  fmadds 2, 8, 7, 2
  047b914  fmadds 3, 9, 7, 3
  047b918  lfs 8, 216(31)
  047b91c  lfs 9, 204(31)
  047b920  fmuls 1, 8, 1
  047b924  lfs 10, 200(31)
  047b928  fmadds 6, 9, 4, 6
  047b92c  lfs 8, 16(28)
  047b930  fmuls 5, 2, 2
  047b934  lfs 12, 236(31)
  047b938  lfs 13, 232(31)
  047b93c  lfs 0, 156(1)
  047b940  fmadds 1, 10, 4, 1
  047b944  fmadds 4, 12, 7, 6
  047b948  fmadds 5, 3, 3, 5
  047b94c  fmadds 1, 13, 7, 1
  047b950  fadds 4, 4, 0
  047b954  fsqrts 5, 5
  047b958  fcmpu 0, 5, 8
  047b95c  cror 6, 1, 2
  047b960  bt 6, 0x47ca18
  047b964  lwz 3, 504(30)
  047b968  stfs 4, 156(1)
  047b96c  slwi 3, 3, 2
  047b970  stfs 1, 152(1)
  047b974  extsw 3, 3
  047b978  stfs 2, 148(1)
  047b97c  stfs 3, 144(1)
  047b980  lhz 4, 520(30)
  047b984  lwzx 3, 29, 3
  047b988  extsh 5, 4
  047b98c  lwz 29, 0(3)
  047b990  addic 6, 29, -2
  047b994  cmpw 5, 6
  047b998  bf 0, 0x47b9a8
  047b99c  addic 3, 4, 1
  047b9a0  sth 3, 520(30)
  047b9a4  b 0x47ca18
  047b9a8  slwi 4, 29, 4
  047b9ac  addc 3, 3, 4
  047b9b0  clrldi 3, 3, 32
  047b9b4  lis 4, 114
  047b9b8  lfs 1, 0(3)
  047b9bc  stfs 1, 528(30)
  047b9c0  lfs 2, 4(3)
  047b9c4  stfs 2, 532(30)
  047b9c8  lfs 3, 8(3)
  047b9cc  stfs 3, 536(30)
  047b9d0  lfs 4, 12(3)
  047b9d4  stfs 1, 560(30)
  047b9d8  stfs 4, 540(30)
  047b9dc  stfs 2, 564(30)
  047b9e0  stfs 3, 568(30)
  047b9e4  stfs 4, 572(30)
  047b9e8  lfs 3, 20(31)
  047b9ec  lfs 4, 16(31)
  047b9f0  fsubs 2, 3, 2
  047b9f4  fsubs 1, 4, 1
  047b9f8  lis 3, 72
  047b9fc  addi 3, 3, -20104
  047ba00  fmuls 2, 2, 2
  047ba04  lfs 3, 44(3)
  047ba08  lfs 4, -3056(4)
  047ba0c  addic 3, 31, 16
  047ba10  addic 4, 30, 528
  047ba14  li 7, 0
  047ba18  fmadds 1, 1, 1, 2
  047ba1c  fmuls 2, 4, 3
  047ba20  lfs 3, 304(30)
  047ba24  fsqrts 1, 1
  047ba28  fctidz 2, 2
  047ba2c  fcfid 2, 2
  047ba30  frsp 2, 2
  047ba34  fdivs 1, 1, 2
  047ba38  fneg 2, 3
  047ba3c  stfs 1, 312(30)
  047ba40  bl 0x108180
  047ba44  nop
  047ba48  li 3, 3
  047ba4c  stfs 1, 316(30)
  047ba50  li 29, 5
  047ba54  lfs 1, 528(30)
  047ba58  lfs 2, 532(30)
  047ba5c  addic 28, 30, 288
  047ba60  stb 3, 349(30)
  047ba64  stw 29, 324(30)
  047ba68  lfs 3, 16(31)
  047ba6c  lfs 4, 20(31)
  047ba70  fsubs 1, 1, 3
  047ba74  fsubs 2, 2, 4
  047ba78  bl 0x5e8338
  047ba7c  nop
  047ba80  ori 3, 31, 0
  047ba84  ori 4, 28, 0
  047ba88  li 6, 2
  047ba8c  li 7, 1
  047ba90  li 8, 0
  047ba94  bl 0x10ad80
  047ba98  nop
  047ba9c  stb 29, 32(31)
  047baa0  b 0x47ca18
  047baa4  li 6, 0
  047baa8  lis 7, 16256
  047baac  ori 3, 31, 0
  047bab0  addic 4, 1, 176
  047bab4  stw 6, 188(1)
  047bab8  stw 6, 180(1)
  047babc  addic 5, 30, 288
  047bac0  stw 6, 176(1)
  047bac4  stw 7, 184(1)
  047bac8  bl 0x479b78
  047bacc  ori 3, 31, 0
  047bad0  addic 4, 30, 288
  047bad4  bl 0x10b030
  047bad8  nop
  047badc  clrlwi 3, 3, 31
  047bae0  cmpwi 3, 0
  047bae4  bt 2, 0x47ca18
  047bae8  li 3, 7
  047baec  lbz 4, 83(31)
  047baf0  cmpwi 4, 3
  047baf4  stb 3, 32(31)
  047baf8  bt 2, 0x47bb14
  047bafc  ori 3, 31, 0
  047bb00  li 4, 3
  047bb04  li 5, 0
  047bb08  li 6, 1
  047bb0c  bl 0xfddc0
  047bb10  nop
  047bb14  lis 5, 72
  047bb18  lis 4, 16256
  047bb1c  addi 5, 5, -20104
  047bb20  addic 3, 31, 16
  047bb24  stw 4, 84(31)
  047bb28  li 4, 0
  047bb2c  lfs 1, 16(5)
  047bb30  bl 0xffb70
  047bb34  nop
  047bb38  stfs 1, 24(31)
  047bb3c  b 0x47ca18
  047bb40  ori 3, 31, 0
  047bb44  addic 4, 30, 288
  047bb48  bl 0x10b030
  047bb4c  nop
  047bb50  ori 30, 3, 0
  047bb54  clrlwi 3, 30, 31
  047bb58  cmpwi 3, 0
  047bb5c  bt 2, 0x47bbb8
  047bb60  li 3, 7
  047bb64  lbz 4, 83(31)
  047bb68  cmpwi 4, 3
  047bb6c  stb 3, 32(31)
  047bb70  bt 2, 0x47bb8c
  047bb74  ori 3, 31, 0
  047bb78  li 4, 3
  047bb7c  li 5, 0
  047bb80  li 6, 1
  047bb84  bl 0xfddc0
  047bb88  nop
  047bb8c  lis 5, 72
  047bb90  lis 4, 16256
  047bb94  addi 5, 5, -20104
  047bb98  addic 3, 31, 16
  047bb9c  stw 4, 84(31)
  047bba0  li 4, 0
  047bba4  lfs 1, 16(5)
  047bba8  bl 0xffb70
  047bbac  nop
  047bbb0  stfs 1, 24(31)
  047bbb4  b 0x47ca18
  047bbb8  li 3, 288
  047bbbc  and 3, 30, 3
  047bbc0  cmpwi 3, 0
  047bbc4  bt 2, 0x47ca18
  047bbc8  ori 3, 31, 0
  047bbcc  li 4, 0
  047bbd0  li 5, -1
  047bbd4  bl 0xfd8d0
  047bbd8  nop
  047bbdc  ori 3, 31, 0
  047bbe0  bl 0xefb38
  047bbe4  nop
  047bbe8  b 0x47ca18
  047bbec  lbz 3, 112(31)
  047bbf0  rlwinm 3, 3, 0, 30, 30
  047bbf4  cmpwi 3, 0
  047bbf8  bt 2, 0x47ca18
  047bbfc  li 3, 8
  047bc00  lbz 4, 83(31)
  047bc04  cmpwi 4, 4
  047bc08  stb 3, 32(31)
  047bc0c  bt 2, 0x47ca18
  047bc10  lis 3, 72
  047bc14  lis 4, 114
  047bc18  addi 3, 3, -20104
  047bc1c  li 5, 0
  047bc20  lfs 1, 32(3)
  047bc24  lfs 2, -3056(4)
  047bc28  ori 3, 31, 0
  047bc2c  fmuls 1, 2, 1
  047bc30  li 4, 4
  047bc34  fctiwz 1, 1
  047bc38  stfd 1, 368(1)
  047bc3c  lwz 6, 372(1)
  047bc40  extsw 6, 6
  047bc44  bl 0xfddc0
  047bc48  nop
  047bc4c  b 0x47ca18
  047bc50  lbz 3, 49(31)
  047bc54  cmpwi 3, 0
  047bc58  bt 2, 0x47bed8
  047bc5c  lfs 1, 20(31)
  047bc60  lfs 2, 564(30)
  047bc64  lfs 3, 16(31)
  047bc68  fsubs 1, 1, 2
  047bc6c  lfs 2, 560(30)
  047bc70  fsubs 2, 3, 2
  047bc74  lfs 3, 24(31)
  047bc78  lfs 4, 568(30)
  047bc7c  fsubs 3, 3, 4
  047bc80  fmuls 1, 1, 1
  047bc84  lis 3, 72
  047bc88  addi 3, 3, -20104
  047bc8c  fmadds 1, 2, 2, 1
  047bc90  lfs 2, 48(3)
  047bc94  fmadds 1, 3, 3, 1
  047bc98  fsqrts 1, 1
  047bc9c  fcmpu 0, 1, 2
  047bca0  bt 0, 0x47bcb8
  047bca4  addic 3, 30, 508
  047bca8  bl 0x4fff60
  047bcac  nop
  047bcb0  cmpwi 3, 0
  047bcb4  bt 2, 0x47bde8
  047bcb8  bl 0xfcc68
  047bcbc  nop
  047bcc0  lis 3, 72
  047bcc4  fmr 31, 1
  047bcc8  addi 29, 3, -20104
  047bccc  lfs 30, 16(29)
  047bcd0  lfs 2, 52(29)
  047bcd4  fmr 1, 30
  047bcd8  bl 0xfcbe8
  047bcdc  nop
  047bce0  lfs 2, 56(29)
  047bce4  lfs 3, 60(29)
  047bce8  fadds 2, 31, 2
  047bcec  lfs 4, 64(29)
  047bcf0  fsubs 5, 3, 31
  047bcf4  fsubs 3, 3, 2
  047bcf8  fsub 7, 31, 5
  047bcfc  fsubs 6, 4, 2
  047bd00  fsubs 4, 4, 31
  047bd04  fsub 8, 2, 3
  047bd08  fsel 5, 7, 5, 31
  047bd0c  fsel 2, 8, 3, 2
  047bd10  fsub 7, 4, 5
  047bd14  lfs 3, 68(29)
  047bd18  fsub 8, 6, 2
  047bd1c  fsel 4, 7, 4, 5
  047bd20  lfs 5, 72(29)
  047bd24  fsel 2, 8, 6, 2
  047bd28  fmuls 7, 4, 4
  047bd2c  lfs 6, 76(29)
  047bd30  lfs 10, 80(29)
  047bd34  fmuls 8, 2, 2
  047bd38  fmuls 9, 7, 4
  047bd3c  fmuls 11, 8, 2
  047bd40  fmuls 12, 7, 9
  047bd44  fmadds 4, 9, 3, 4
  047bd48  lfs 9, 528(30)
  047bd4c  lfs 13, 532(30)
  047bd50  fmuls 0, 8, 11
  047bd54  fmadds 2, 11, 3, 2
  047bd58  fmuls 3, 7, 12
  047bd5c  fmadds 4, 12, 5, 4
  047bd60  lfs 11, 536(30)
  047bd64  lfs 12, 540(30)
  047bd68  stfs 11, 568(30)
  047bd6c  stfs 12, 572(30)
  047bd70  fmuls 31, 8, 0
  047bd74  fmadds 2, 0, 5, 2
  047bd78  fmuls 5, 7, 3
  047bd7c  fmadds 3, 3, 6, 4
  047bd80  fmuls 4, 8, 31
  047bd84  fmadds 2, 31, 6, 2
  047bd88  fmadds 3, 5, 10, 3
  047bd8c  fmadds 2, 4, 10, 2
  047bd90  fmadds 3, 3, 1, 13
  047bd94  fmadds 1, 2, 1, 9
  047bd98  stfs 3, 564(30)
  047bd9c  stfs 1, 560(30)
  047bda0  lfs 1, 84(29)
  047bda4  lfs 2, 88(29)
  047bda8  bl 0xfcbe8
  047bdac  nop
  047bdb0  bl 0x502758
  047bdb4  nop
  047bdb8  extsw 3, 3
  047bdbc  li 4, 508
  047bdc0  std 3, 368(1)
  047bdc4  lis 3, 114
  047bdc8  lfs 1, -3056(3)
  047bdcc  lfd 2, 368(1)
  047bdd0  fcfid 2, 2
  047bdd4  frsp 2, 2
  047bdd8  fadds 2, 2, 30
  047bddc  fmuls 1, 1, 2
  047bde0  fctiwz 1, 1
  047bde4  stfiwx 1, 4, 30
  047bde8  lfs 1, 560(30)
  047bdec  lfs 2, 16(31)
  047bdf0  fsubs 1, 1, 2
  047bdf4  lfs 2, 20(31)
  047bdf8  lfs 3, 24(31)
  047bdfc  ori 3, 31, 0
  047be00  stfs 1, 208(1)
  047be04  lfs 1, 564(30)
  047be08  fsubs 1, 1, 2
  047be0c  stfs 1, 212(1)
  047be10  lfs 1, 568(30)
  047be14  fsubs 1, 1, 3
  047be18  stfs 1, 216(1)
  047be1c  lfs 1, 572(30)
  047be20  stfs 1, 220(1)
  047be24  bl 0x479e20
  047be28  lis 4, 161
  047be2c  addic 5, 1, 208
  047be30  addic 4, 4, 2368
  047be34  ori 3, 31, 0
  047be38  addic 4, 4, 64
  047be3c  bl 0x479b78
  047be40  lfs 2, 196(31)
  047be44  lfs 3, 192(31)
  047be48  fmuls 1, 2, 2
  047be4c  lfs 4, 200(31)
  047be50  lis 3, 72
  047be54  addi 3, 3, -20104
  047be58  fmadds 1, 3, 3, 1
  047be5c  fmadds 6, 4, 4, 1
  047be60  lfs 1, 36(3)
  047be64  lis 3, 114
  047be68  lfs 5, 484(30)
  047be6c  lfs 7, -3052(3)
  047be70  fsqrts 6, 6
  047be74  fmuls 5, 5, 7
  047be78  fcmpu 0, 6, 1
  047be7c  bf 2, 0x47be90
  047be80  fmr 3, 1
  047be84  lfs 4, 204(31)
  047be88  fmr 2, 3
  047be8c  b 0x47bea8
  047be90  fdivs 5, 5, 6
  047be94  lfs 6, 204(31)
  047be98  fmuls 1, 3, 5
  047be9c  fmuls 3, 4, 5
  047bea0  fmuls 2, 2, 5
  047bea4  fmr 4, 6
  047bea8  lis 3, 72
  047beac  stfs 1, 192(1)
  047beb0  stfs 2, 196(1)
  047beb4  addic 4, 1, 192
  047beb8  addi 3, 3, -20104
  047bebc  stfs 3, 200(1)
  047bec0  stfs 4, 204(1)
  047bec4  li 7, 1
  047bec8  lfs 1, 40(3)
  047becc  ori 3, 31, 0
  047bed0  fmr 2, 1
  047bed4  bl 0x479880
  047bed8  lwz 3, 452(30)
  047bedc  cmpwi 3, 2
  047bee0  bt 2, 0x47bf4c
  047bee4  li 3, 9
  047bee8  bl 0xfc620
  047beec  nop
  047bef0  cmpwi 3, 0
  047bef4  bf 2, 0x47bf4c
  047bef8  lfs 2, 472(30)
  047befc  fneg 1, 2
  047bf00  bl 0xfcbe8
  047bf04  nop
  047bf08  lis 3, 72
  047bf0c  addi 3, 3, -20104
  047bf10  lfs 2, 92(3)
  047bf14  li 3, 9
  047bf18  fmuls 1, 1, 2
  047bf1c  stfs 1, 468(30)
  047bf20  lbz 4, 83(31)
  047bf24  stb 3, 32(31)
  047bf28  cmpwi 4, 4
  047bf2c  bt 2, 0x47ca18
  047bf30  ori 3, 31, 0
  047bf34  li 4, 4
  047bf38  li 5, 0
  047bf3c  li 6, 0
  047bf40  bl 0xfddc0
  047bf44  nop
  047bf48  b 0x47ca18
  047bf4c  lhz 3, 488(30)
  047bf50  cmpwi 3, 0
  047bf54  bt 2, 0x47ca18
  047bf58  lfs 2, 472(30)
  047bf5c  fneg 1, 2
  047bf60  bl 0xfcbe8
  047bf64  nop
  047bf68  lis 3, 72
  047bf6c  addi 3, 3, -20104
  047bf70  lfs 2, 92(3)
  047bf74  li 3, 10
  047bf78  fmuls 1, 1, 2
  047bf7c  stfs 1, 468(30)
  047bf80  lbz 4, 83(31)
  047bf84  stb 3, 32(31)
  047bf88  cmpwi 4, 4
  047bf8c  bt 2, 0x47ca18
  047bf90  ori 3, 31, 0
  047bf94  li 4, 4
  047bf98  li 5, 0
  047bf9c  li 6, 0
  047bfa0  bl 0xfddc0
  047bfa4  nop
  047bfa8  b 0x47ca18
  047bfac  lfs 1, 16(29)
  047bfb0  lfs 2, 16(31)
  047bfb4  lfs 3, 20(29)
  047bfb8  lfs 4, 20(31)
  047bfbc  fsubs 1, 1, 2
  047bfc0  fsubs 2, 3, 4
  047bfc4  bl 0x5e8338
  047bfc8  nop
  047bfcc  lfs 2, 468(30)
  047bfd0  bl 0x502578
  047bfd4  nop
  047bfd8  lis 3, 72
  047bfdc  addi 4, 3, -20104
  047bfe0  li 5, 0
  047bfe4  lfs 2, 56(4)
  047bfe8  lfs 3, 60(4)
  047bfec  fadds 2, 1, 2
  047bff0  lfs 4, 64(4)
  047bff4  fsubs 5, 3, 1
  047bff8  fsubs 6, 4, 1
  047bffc  ori 3, 31, 0
  047c000  fsubs 3, 3, 2
  047c004  fsub 7, 1, 5
  047c008  fsubs 4, 4, 2
  047c00c  fsub 9, 2, 3
  047c010  fsel 1, 7, 5, 1
  047c014  lfs 5, 68(4)
  047c018  fsel 2, 9, 3, 2
  047c01c  fsub 3, 6, 1
  047c020  fsub 8, 4, 2
  047c024  fsel 1, 3, 6, 1
  047c028  lfs 3, 72(4)
  047c02c  lfs 6, 76(4)
  047c030  lfs 7, 80(4)
  047c034  fsel 2, 8, 4, 2
  047c038  fmuls 4, 1, 1
  047c03c  fmuls 8, 2, 2
  047c040  fmuls 9, 4, 1
  047c044  fmuls 10, 8, 2
  047c048  fmuls 11, 4, 9
  047c04c  fmadds 1, 9, 5, 1
  047c050  fmuls 9, 8, 10
  047c054  fmadds 2, 10, 5, 2
  047c058  fmuls 5, 4, 11
  047c05c  fmadds 1, 11, 3, 1
  047c060  fmuls 10, 8, 9
  047c064  fmadds 2, 9, 3, 2
  047c068  fmuls 3, 4, 5
  047c06c  fmadds 1, 5, 6, 1
  047c070  fmuls 4, 8, 10
  047c074  fmadds 2, 10, 6, 2
  047c078  fmadds 1, 3, 7, 1
  047c07c  fmadds 2, 4, 7, 2
  047c080  stfs 1, 244(1)
  047c084  lfs 31, 36(4)
  047c088  stw 5, 248(1)
  047c08c  stfs 2, 240(1)
  047c090  bl 0x479e20
  047c094  lis 4, 161
  047c098  addic 5, 1, 240
  047c09c  addic 4, 4, 2368
  047c0a0  ori 3, 31, 0
  047c0a4  addic 4, 4, 64
  047c0a8  bl 0x479b78
  047c0ac  lfs 1, 196(31)
  047c0b0  lfs 2, 192(31)
  047c0b4  fmuls 4, 1, 1
  047c0b8  lfs 3, 200(31)
  047c0bc  lis 3, 114
  047c0c0  fmadds 4, 2, 2, 4
  047c0c4  fmadds 5, 3, 3, 4
  047c0c8  lfs 4, 484(30)
  047c0cc  lfs 6, -3052(3)
  047c0d0  fmuls 4, 4, 6
  047c0d4  fsqrts 5, 5
  047c0d8  fcmpu 0, 5, 31
  047c0dc  bf 2, 0x47c0f0
  047c0e0  fmr 2, 31
  047c0e4  lfs 3, 204(31)
  047c0e8  fmr 1, 2
  047c0ec  b 0x47c108
  047c0f0  fdivs 4, 4, 5
  047c0f4  lfs 5, 204(31)
  047c0f8  fmuls 31, 2, 4
  047c0fc  fmuls 2, 3, 4
  047c100  fmuls 1, 1, 4
  047c104  fmr 3, 5
  047c108  lis 3, 72
  047c10c  stfs 31, 224(1)
  047c110  addic 4, 1, 224
  047c114  addi 28, 3, -20104
  047c118  stfs 1, 228(1)
  047c11c  stfs 2, 232(1)
  047c120  ori 3, 31, 0
  047c124  stfs 3, 236(1)
  047c128  li 7, 1
  047c12c  lfs 1, 40(28)
  047c130  fmr 2, 1
  047c134  bl 0x479880
  047c138  lfs 1, 20(31)
  047c13c  lfs 2, 20(29)
  047c140  lfs 3, 16(31)
  047c144  fsubs 1, 1, 2
  047c148  lfs 2, 16(29)
  047c14c  fsubs 2, 3, 2
  047c150  fmuls 1, 1, 1
  047c154  fmadds 1, 2, 2, 1
  047c158  lfs 2, 52(28)
  047c15c  fsqrts 1, 1
  047c160  fcmpu 0, 1, 2
  047c164  cror 6, 1, 2
  047c168  bt 6, 0x47c1c0
  047c16c  li 3, 12
  047c170  lbz 4, 83(31)
  047c174  cmpwi 4, 5
  047c178  stb 3, 32(31)
  047c17c  bt 2, 0x47ca18
  047c180  lis 3, 72
  047c184  lis 4, 114
  047c188  addi 3, 3, -20104
  047c18c  li 5, 4
  047c190  lfs 1, 96(3)
  047c194  lfs 2, -3056(4)
  047c198  ori 3, 31, 0
  047c19c  fmuls 1, 2, 1
  047c1a0  li 4, 5
  047c1a4  fctiwz 1, 1
  047c1a8  stfd 1, 368(1)
  047c1ac  lwz 6, 372(1)
  047c1b0  extsw 6, 6
  047c1b4  bl 0xfddc0
  047c1b8  nop
  047c1bc  b 0x47ca18
  047c1c0  lwz 3, 452(30)
  047c1c4  cmpwi 3, 2
  047c1c8  bf 2, 0x47ca18
  047c1cc  li 3, 13
  047c1d0  stb 3, 32(31)
  047c1d4  b 0x47ca18
  047c1d8  lfs 1, 16(29)
  047c1dc  lfs 2, 16(31)
  047c1e0  lfs 3, 20(29)
  047c1e4  lfs 4, 20(31)
  047c1e8  fsubs 1, 1, 2
  047c1ec  fsubs 2, 3, 4
  047c1f0  bl 0x5e8338
  047c1f4  nop
  047c1f8  lfs 2, 468(30)
  047c1fc  bl 0x502578
  047c200  nop
  047c204  lis 3, 72
  047c208  addi 4, 3, -20104
  047c20c  li 5, 0
  047c210  lfs 2, 56(4)
  047c214  lfs 3, 60(4)
  047c218  fadds 2, 1, 2
  047c21c  lfs 4, 64(4)
  047c220  fsubs 5, 3, 1
  047c224  fsubs 6, 4, 1
  047c228  ori 3, 31, 0
  047c22c  fsubs 3, 3, 2
  047c230  fsub 7, 1, 5
  047c234  fsubs 4, 4, 2
  047c238  fsub 9, 2, 3
  047c23c  fsel 1, 7, 5, 1
  047c240  lfs 5, 68(4)
  047c244  fsel 2, 9, 3, 2
  047c248  fsub 3, 6, 1
  047c24c  fsub 8, 4, 2
  047c250  fsel 1, 3, 6, 1
  047c254  lfs 3, 72(4)
  047c258  lfs 6, 76(4)
  047c25c  lfs 7, 80(4)
  047c260  fsel 2, 8, 4, 2
  047c264  fmuls 4, 1, 1
  047c268  fmuls 8, 2, 2
  047c26c  fmuls 9, 4, 1
  047c270  fmuls 10, 8, 2
  047c274  fmuls 11, 4, 9
  047c278  fmadds 1, 9, 5, 1
  047c27c  fmuls 9, 8, 10
  047c280  fmadds 2, 10, 5, 2
  047c284  fmuls 5, 4, 11
  047c288  fmadds 1, 11, 3, 1
  047c28c  fmuls 10, 8, 9
  047c290  fmadds 2, 9, 3, 2
  047c294  fmuls 3, 4, 5
  047c298  fmadds 1, 5, 6, 1
  047c29c  fmuls 4, 8, 10
  047c2a0  fmadds 2, 10, 6, 2
  047c2a4  fmadds 1, 3, 7, 1
  047c2a8  fmadds 2, 4, 7, 2
  047c2ac  stfs 1, 276(1)
  047c2b0  lfs 31, 36(4)
  047c2b4  stw 5, 280(1)
  047c2b8  stfs 2, 272(1)
  047c2bc  bl 0x479e20
  047c2c0  lis 4, 161
  047c2c4  addic 5, 1, 272
  047c2c8  addic 4, 4, 2368
  047c2cc  ori 3, 31, 0
  047c2d0  addic 4, 4, 64
  047c2d4  bl 0x479b78
  047c2d8  lfs 1, 196(31)
  047c2dc  lfs 2, 192(31)
  047c2e0  fmuls 4, 1, 1
  047c2e4  lfs 3, 200(31)
  047c2e8  lis 3, 114
  047c2ec  fmadds 4, 2, 2, 4
  047c2f0  fmadds 5, 3, 3, 4
  047c2f4  lfs 4, 484(30)
  047c2f8  lfs 6, -3052(3)
  047c2fc  fmuls 4, 4, 6
  047c300  fsqrts 5, 5
  047c304  fcmpu 0, 5, 31
  047c308  bf 2, 0x47c31c
  047c30c  fmr 2, 31
  047c310  lfs 3, 204(31)
  047c314  fmr 1, 2
  047c318  b 0x47c334
  047c31c  fdivs 4, 4, 5
  047c320  lfs 5, 204(31)
  047c324  fmuls 31, 2, 4
  047c328  fmuls 2, 3, 4
  047c32c  fmuls 1, 1, 4
  047c330  fmr 3, 5
  047c334  lis 3, 72
  047c338  stfs 31, 256(1)
  047c33c  li 7, 1
  047c340  addi 4, 3, -20104
  047c344  stfs 1, 260(1)
  047c348  stfs 2, 264(1)
  047c34c  ori 3, 31, 0
  047c350  stfs 3, 268(1)
  047c354  lfs 1, 40(4)
  047c358  addic 4, 1, 256
  047c35c  fmr 2, 1
  047c360  bl 0x479880
  047c364  lwz 3, 492(30)
  047c368  addic 4, 31, 16
  047c36c  addic 5, 29, 16
  047c370  extsw 3, 3
  047c374  addic 6, 1, 288
  047c378  bl 0xfc948
  047c37c  nop
  047c380  cmpwi 3, 0
  047c384  lhz 4, 488(30)
  047c388  li 5, 0
  047c38c  lbz 3, 83(31)
  047c390  lfs 1, 16(31)
  047c394  lfs 3, 20(31)
  047c398  bt 2, 0x47c3e0
  047c39c  lfs 2, 292(1)
  047c3a0  lfs 4, 288(1)
  047c3a4  fsubs 2, 3, 2
  047c3a8  lfs 5, 24(31)
  047c3ac  fsubs 4, 1, 4
  047c3b0  lfs 6, 296(1)
  047c3b4  fsubs 5, 5, 6
  047c3b8  li 5, 0
  047c3bc  fmuls 2, 2, 2
  047c3c0  fmadds 2, 4, 4, 2
  047c3c4  lfs 4, 580(30)
  047c3c8  fmadds 2, 5, 5, 2
  047c3cc  fsqrts 2, 2
  047c3d0  fcmpu 0, 2, 4
  047c3d4  cror 6, 1, 2
  047c3d8  bt 6, 0x47c3e0
  047c3dc  li 5, 1
  047c3e0  cmpwi 4, 0
  047c3e4  cmpwi 1, 5, 0
  047c3e8  bf 2, 0x47c3f8
  047c3ec  li 3, 13
  047c3f0  stb 3, 32(31)
  047c3f4  b 0x47ca18
  047c3f8  bt 6, 0x47c44c
  047c3fc  li 4, 11
  047c400  cmpwi 3, 6
  047c404  stb 4, 32(31)
  047c408  bt 2, 0x47ca18
  047c40c  lis 3, 72
  047c410  lis 4, 114
  047c414  addi 3, 3, -20104
  047c418  li 5, 0
  047c41c  lfs 1, 96(3)
  047c420  lfs 2, -3056(4)
  047c424  ori 3, 31, 0
  047c428  fmuls 1, 2, 1
  047c42c  li 4, 6
  047c430  fctiwz 1, 1
  047c434  stfd 1, 368(1)
  047c438  lwz 6, 372(1)
  047c43c  extsw 6, 6
  047c440  bl 0xfddc0
  047c444  nop
  047c448  b 0x47ca18
  047c44c  lfs 2, 20(29)
  047c450  lfs 4, 16(29)
  047c454  fsubs 2, 3, 2
  047c458  fsubs 1, 1, 4
  047c45c  lis 4, 72
  047c460  addi 4, 4, -20104
  047c464  fmuls 2, 2, 2
  047c468  fmadds 1, 1, 1, 2
  047c46c  lfs 2, 52(4)
  047c470  fsqrts 1, 1
  047c474  fcmpu 0, 1, 2
  047c478  cror 6, 1, 2
  047c47c  bt 6, 0x47ca18
  047c480  li 4, 12
  047c484  cmpwi 3, 5
  047c488  stb 4, 32(31)
  047c48c  bt 2, 0x47ca18
  047c490  lis 3, 72
  047c494  lis 4, 114
  047c498  addi 3, 3, -20104
  047c49c  li 5, 0
  047c4a0  lfs 1, 96(3)
  047c4a4  lfs 2, -3056(4)
  047c4a8  ori 3, 31, 0
  047c4ac  li 4, 5
  047c4b0  fmuls 1, 2, 1
  047c4b4  fctiwz 1, 1
  047c4b8  stfd 1, 368(1)
  047c4bc  lwz 6, 372(1)
  047c4c0  extsw 6, 6
  047c4c4  bl 0xfddc0
  047c4c8  nop
  047c4cc  b 0x47ca18
  047c4d0  lbz 3, 112(31)
  047c4d4  rlwinm 3, 3, 0, 30, 30
  047c4d8  cmpwi 3, 0
  047c4dc  bt 2, 0x47ca18
  047c4e0  li 3, 10
  047c4e4  lbz 4, 83(31)
  047c4e8  cmpwi 4, 4
  047c4ec  stb 3, 32(31)
  047c4f0  bt 2, 0x47ca18
  047c4f4  lis 3, 72
  047c4f8  lis 4, 114
  047c4fc  addi 3, 3, -20104
  047c500  li 5, 0
  047c504  lfs 1, 100(3)
  047c508  lfs 2, -3056(4)
  047c50c  ori 3, 31, 0
  047c510  fmuls 1, 2, 1
  047c514  li 4, 4
  047c518  fctiwz 1, 1
  047c51c  stfd 1, 368(1)
  047c520  lwz 6, 372(1)
  047c524  extsw 6, 6
  047c528  bl 0xfddc0
  047c52c  nop
  047c530  b 0x47ca18
  047c534  lfs 1, 16(29)
  047c538  lfs 2, 16(31)
  047c53c  lfs 3, 20(29)
  047c540  lfs 4, 20(31)
  047c544  fsubs 1, 1, 2
  047c548  fsubs 2, 3, 4
  047c54c  bl 0x5e8338
  047c550  nop
  047c554  lis 3, 72
  047c558  addi 28, 3, -20104
  047c55c  lfs 2, 56(28)
  047c560  lfs 31, 60(28)
  047c564  fadds 1, 1, 2
  047c568  lfs 30, 64(28)
  047c56c  lfs 29, 68(28)
  047c570  lfs 28, 72(28)
  047c574  lfs 27, 76(28)
  047c578  lfs 26, 80(28)
  047c57c  fsubs 2, 31, 1
  047c580  fsubs 3, 30, 1
  047c584  fsub 5, 1, 2
  047c588  fsel 1, 5, 2, 1
  047c58c  fsub 2, 3, 1
  047c590  fsel 1, 2, 3, 1
  047c594  lfs 2, 16(31)
  047c598  lfs 5, 20(31)
  047c59c  fmuls 3, 1, 1
  047c5a0  fmuls 4, 3, 1
  047c5a4  fmuls 6, 3, 4
  047c5a8  fmadds 1, 4, 29, 1
  047c5ac  fmuls 4, 3, 6
  047c5b0  fmadds 1, 6, 28, 1
  047c5b4  fmuls 3, 3, 4
  047c5b8  fmadds 1, 4, 27, 1
  047c5bc  fmadds 1, 3, 26, 1
  047c5c0  stfs 1, 320(1)
  047c5c4  lfs 1, 16(29)
  047c5c8  lfs 3, 20(29)
  047c5cc  fsubs 1, 1, 2
  047c5d0  fsubs 2, 3, 5
  047c5d4  bl 0x5e8338
  047c5d8  nop
  047c5dc  fsubs 2, 31, 1
  047c5e0  fsubs 3, 30, 1
  047c5e4  li 6, 0
  047c5e8  addic 5, 1, 320
  047c5ec  ori 3, 31, 0
  047c5f0  addic 4, 31, 224
  047c5f4  fsub 4, 1, 2
  047c5f8  fsel 1, 4, 2, 1
  047c5fc  fsub 2, 3, 1
  047c600  fsel 1, 2, 3, 1
  047c604  fmuls 2, 1, 1
  047c608  fmuls 3, 2, 1
  047c60c  fmuls 4, 2, 3
  047c610  fmadds 1, 3, 29, 1
  047c614  fmuls 3, 2, 4
  047c618  fmadds 1, 4, 28, 1
  047c61c  fmuls 2, 2, 3
  047c620  fmadds 1, 3, 27, 1
  047c624  fmadds 1, 2, 26, 1
  047c628  stfs 1, 324(1)
  047c62c  lfs 31, 36(28)
  047c630  stw 6, 328(1)
  047c634  bl 0x479b78
  047c638  ori 3, 31, 0
  047c63c  bl 0xefe40
  047c640  nop
  047c644  lbz 5, 82(31)
  047c648  lbz 4, 83(31)
  047c64c  lbz 3, 112(31)
  047c650  fmr 3, 1
  047c654  cmpw 5, 4
  047c658  lfs 2, 16(31)
  047c65c  lfs 1, 20(31)
  047c660  bf 2, 0x47c770
  047c664  lis 5, 72
  047c668  addi 5, 5, -20104
  047c66c  lfs 4, 104(5)
  047c670  fcmpu 0, 3, 4
  047c674  bt 0, 0x47c770
  047c678  lis 5, 72
  047c67c  addi 5, 5, -20104
  047c680  lfs 4, 108(5)
  047c684  fcmpu 0, 3, 4
  047c688  bt 1, 0x47c770
  047c68c  lis 5, 151
  047c690  addic 5, 5, -25376
  047c694  lwz 5, 8324(5)
  047c698  cmpwi 5, 81
  047c69c  bt 2, 0x47c770
  047c6a0  lfs 1, 196(31)
  047c6a4  lfs 2, 192(31)
  047c6a8  fmuls 4, 1, 1
  047c6ac  lfs 3, 200(31)
  047c6b0  lis 3, 72
  047c6b4  addi 3, 3, -20104
  047c6b8  fmadds 4, 2, 2, 4
  047c6bc  lfs 5, 52(3)
  047c6c0  lfs 6, 484(30)
  047c6c4  lis 3, 114
  047c6c8  fmuls 5, 6, 5
  047c6cc  lfs 7, -3052(3)
  047c6d0  fmadds 4, 3, 3, 4
  047c6d4  fmuls 5, 5, 7
  047c6d8  fsqrts 4, 4
  047c6dc  fcmpu 0, 4, 31
  047c6e0  bf 2, 0x47c6f4
  047c6e4  fmr 2, 31
  047c6e8  lfs 3, 204(31)
  047c6ec  fmr 1, 2
  047c6f0  b 0x47c70c
  047c6f4  fdivs 4, 5, 4
  047c6f8  lfs 5, 204(31)
  047c6fc  fmuls 31, 2, 4
  047c700  fmuls 2, 3, 4
  047c704  fmuls 1, 1, 4
  047c708  fmr 3, 5
  047c70c  lis 3, 72
  047c710  stfs 31, 304(1)
  047c714  addic 4, 1, 304
  047c718  addi 30, 3, -20104
  047c71c  stfs 1, 308(1)
  047c720  stfs 2, 312(1)
  047c724  ori 3, 31, 0
  047c728  stfs 3, 316(1)
  047c72c  li 7, 1
  047c730  lfs 1, 40(30)
  047c734  fmr 2, 1
  047c738  bl 0x479880
  047c73c  li 5, 0
  047c740  lfs 2, 116(30)
  047c744  lfs 1, 112(30)
  047c748  li 10, 1
  047c74c  ori 3, 31, 0
  047c750  fmr 3, 2
  047c754  li 4, 0
  047c758  std 5, 112(1)
  047c75c  li 6, 1
  047c760  li 9, 0
  047c764  bl 0x1059f0
  047c768  nop
  047c76c  b 0x47ca18
  047c770  rlwinm 3, 3, 0, 30, 30
  047c774  cmpwi 3, 0
  047c778  bt 2, 0x47ca18
  047c77c  lfs 3, 20(29)
  047c780  lfs 4, 16(29)
  047c784  fsubs 1, 1, 3
  047c788  fsubs 2, 2, 4
  047c78c  lis 3, 72
  047c790  addi 3, 3, -20104
  047c794  fmuls 1, 1, 1
  047c798  fmadds 1, 2, 2, 1
  047c79c  lfs 2, 52(3)
  047c7a0  fsqrts 1, 1
  047c7a4  fcmpu 0, 1, 2
  047c7a8  cror 6, 0, 2
  047c7ac  bt 6, 0x47ca18
  047c7b0  li 3, 9
  047c7b4  cmpwi 4, 4
  047c7b8  stb 3, 32(31)
  047c7bc  bt 2, 0x47ca18
  047c7c0  lis 3, 72
  047c7c4  lis 4, 114
  047c7c8  addi 3, 3, -20104
  047c7cc  li 5, 0
  047c7d0  lfs 1, 96(3)
  047c7d4  lfs 2, -3056(4)
  047c7d8  ori 3, 31, 0
  047c7dc  li 4, 4
  047c7e0  fmuls 1, 2, 1
  047c7e4  fctiwz 1, 1
  047c7e8  stfd 1, 368(1)
  047c7ec  lwz 6, 372(1)
  047c7f0  extsw 6, 6
  047c7f4  bl 0xfddc0
  047c7f8  nop
  047c7fc  b 0x47ca18
  047c800  lfs 1, 528(30)
  047c804  lfs 2, 16(31)
  047c808  ori 3, 31, 0
  047c80c  fsubs 1, 1, 2
  047c810  lfs 2, 20(31)
  047c814  lfs 3, 24(31)
  047c818  stfs 1, 352(1)
  047c81c  lfs 1, 532(30)
  047c820  fsubs 1, 1, 2
  047c824  stfs 1, 356(1)
  047c828  lfs 1, 536(30)
  047c82c  fsubs 1, 1, 3
  047c830  stfs 1, 360(1)
  047c834  lfs 1, 540(30)
  047c838  stfs 1, 364(1)
  047c83c  bl 0x479e20
  047c840  lis 3, 161
  047c844  addic 5, 1, 352
  047c848  addic 4, 3, 2368
  047c84c  ori 3, 31, 0
  047c850  addic 4, 4, 64
  047c854  bl 0x479b78
  047c858  lfs 2, 196(31)
  047c85c  lfs 3, 192(31)
  047c860  fmuls 1, 2, 2
  047c864  lfs 4, 200(31)
  047c868  lis 3, 72
  047c86c  lfs 6, 484(30)
  047c870  lis 4, 114
  047c874  addi 3, 3, -20104
  047c878  fmadds 1, 3, 3, 1
  047c87c  fmadds 5, 4, 4, 1
  047c880  lfs 1, 36(3)
  047c884  lfs 7, -3052(4)
  047c888  fmuls 6, 6, 7
  047c88c  fsqrts 5, 5
  047c890  fcmpu 0, 5, 1
  047c894  bf 2, 0x47c8a8
  047c898  fmr 3, 1
  047c89c  lfs 4, 204(31)
  047c8a0  fmr 2, 3
  047c8a4  b 0x47c8c0
  047c8a8  fdivs 5, 6, 5
  047c8ac  lfs 6, 204(31)
  047c8b0  fmuls 1, 3, 5
  047c8b4  fmuls 3, 4, 5
  047c8b8  fmuls 2, 2, 5
  047c8bc  fmr 4, 6
  047c8c0  lis 3, 72
  047c8c4  stfs 1, 336(1)
  047c8c8  addic 4, 1, 336
  047c8cc  addi 29, 3, -20104
  047c8d0  stfs 2, 340(1)
  047c8d4  stfs 3, 344(1)
  047c8d8  ori 3, 31, 0
  047c8dc  stfs 4, 348(1)
  047c8e0  li 7, 1
  047c8e4  lfs 1, 40(29)
  047c8e8  fmr 2, 1
  047c8ec  bl 0x479880
  047c8f0  lfs 1, 20(31)
  047c8f4  lfs 2, 532(30)
  047c8f8  lfs 3, 16(31)
  047c8fc  fsubs 1, 1, 2
  047c900  lfs 2, 528(30)
  047c904  fsubs 2, 3, 2
  047c908  fmuls 1, 1, 1
  047c90c  fmadds 1, 2, 2, 1
  047c910  lfs 2, 52(29)
  047c914  fsqrts 1, 1
  047c918  fcmpu 0, 1, 2
  047c91c  cror 6, 1, 2
  047c920  bt 6, 0x47c978
  047c924  li 3, 8
  047c928  lbz 4, 83(31)
  047c92c  cmpwi 4, 4
  047c930  stb 3, 32(31)
  047c934  bt 2, 0x47ca18
  047c938  lis 3, 72
  047c93c  lis 4, 114
  047c940  addi 3, 3, -20104
  047c944  li 5, 0
  047c948  lfs 1, 96(3)
  047c94c  lfs 2, -3056(4)
  047c950  ori 3, 31, 0
  047c954  fmuls 1, 2, 1
  047c958  li 4, 4
  047c95c  fctiwz 1, 1
  047c960  stfd 1, 368(1)
  047c964  lwz 6, 372(1)
  047c968  extsw 6, 6
  047c96c  bl 0xfddc0
  047c970  nop
  047c974  b 0x47ca18
  047c978  lwz 3, 452(30)
  047c97c  cmpwi 3, 2
  047c980  bt 2, 0x47c990
  047c984  li 3, 9
  047c988  stb 3, 32(31)
  047c98c  b 0x47ca18
  047c990  lhz 3, 488(30)
  047c994  cmpwi 3, 0
  047c998  bt 2, 0x47ca18
  047c99c  li 3, 10
  047c9a0  stb 3, 32(31)
  047c9a4  b 0x47ca18
  047c9a8  ori 3, 31, 0
  047c9ac  addic 4, 30, 288
  047c9b0  bl 0x48c188
  047c9b4  nop
  047c9b8  cmpwi 3, 0
  047c9bc  bt 2, 0x47ca18
  047c9c0  li 3, 8
  047c9c4  lbz 4, 83(31)
  047c9c8  cmpwi 4, 0
  047c9cc  stb 3, 32(31)
  047c9d0  bt 2, 0x47ca10
  047c9d4  lis 3, 72
  047c9d8  lis 4, 114
  047c9dc  addi 3, 3, -20104
  047c9e0  li 5, 0
  047c9e4  lfs 1, 96(3)
  047c9e8  lfs 2, -3056(4)
  047c9ec  ori 3, 31, 0
  047c9f0  li 4, 0
  047c9f4  fmuls 1, 2, 1
  047c9f8  fctiwz 1, 1
  047c9fc  stfd 1, 368(1)
  047ca00  lwz 6, 372(1)
  047ca04  extsw 6, 6
  047ca08  bl 0xfddc0
  047ca0c  nop
  047ca10  li 3, 0
  047ca14  sth 3, 200(30)
  047ca18  ld 0, 480(1)
  047ca1c  mtlr 0
  047ca20  lfd 26, 416(1)
  047ca24  lfd 27, 424(1)
  047ca28  lfd 28, 432(1)
  047ca2c  lfd 29, 440(1)
  047ca30  lfd 30, 448(1)
  047ca34  lfd 31, 456(1)
  047ca38  ld 28, 384(1)
  047ca3c  ld 29, 392(1)
  047ca40  ld 30, 400(1)
  047ca44  ld 31, 408(1)
  047ca48  addi 1, 1, 464
  047ca4c  blr

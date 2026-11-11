# game/update/moby344.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003509b0:   # 0x3509b0, 0x134 bytes
  03509b0  stdu 1, -160(1)
  03509b4  mflr 0
  03509b8  std 0, 176(1)
  03509bc  stfd 30, 144(1)
  03509c0  stfd 31, 152(1)
  03509c4  stw 7, 112(1)
  03509c8  stw 7, 116(1)
  03509cc  li 4, 1
  03509d0  stw 7, 120(1)
  03509d4  lis 8, 114
  03509d8  stw 7, 124(1)
  03509dc  li 9, -3056
  03509e0  std 31, 136(1)
  03509e4  lis 7, 53
  03509e8  lwz 31, 120(3)
  03509ec  li 0, 112
  03509f0  vspltisw 2, -1
  03509f4  addi 7, 7, 2464
  03509f8  std 30, 128(1)
  03509fc  lis 30, 114
  0350a00  lvx 3, 1, 0
  0350a04  stb 4, 32(3)
  0350a08  lfs 1, 0(5)
  0350a0c  vcfsx 3, 3, 0
  0350a10  stfs 1, 48(31)
  0350a14  lfs 1, 4(5)
  0350a18  stfs 1, 52(31)
  0350a1c  lfs 1, 8(5)
  0350a20  vslw 2, 2, 2
  0350a24  stfs 1, 56(31)
  0350a28  lfs 1, 12(5)
  0350a2c  stfs 1, 60(31)
  0350a30  lfs 1, 0(6)
  0350a34  stfs 1, 16(31)
  0350a38  lfs 1, 4(6)
  0350a3c  stfs 1, 20(31)
  0350a40  lfs 1, 8(6)
  0350a44  stfs 1, 24(31)
  0350a48  lfs 1, 12(6)
  0350a4c  stfs 1, 28(31)
  0350a50  <unknown>
  0350a54  <unknown>
  0350a58  vspltw 4, 4, 0
  0350a5c  lfs 2, -3052(30)
  0350a60  vaddfp 3, 3, 4
  0350a64  vmaddfp 2, 5, 3, 2
  0350a68  vctsxs 2, 2, 0
  0350a6c  vspltw 2, 2, 0
  0350a70  stvewx 2, 0, 31
  0350a74  lfs 31, 4(7)
  0350a78  lfs 3, 8(7)
  0350a7c  fmuls 1, 2, 31
  0350a80  fmr 30, 3
  0350a84  fmuls 2, 2, 30
  0350a88  bl 0xfcbe8
  0350a8c  nop
  0350a90  stfs 1, 32(31)
  0350a94  lfs 2, -3052(30)
  0350a98  fmuls 1, 2, 31
  0350a9c  fmuls 2, 2, 30
  0350aa0  bl 0xfcbe8
  0350aa4  nop
  0350aa8  stfs 1, 36(31)
  0350aac  lfs 2, -3052(30)
  0350ab0  fmuls 1, 2, 31
  0350ab4  fmuls 2, 2, 30
  0350ab8  bl 0xfcbe8
  0350abc  nop
  0350ac0  stfs 1, 40(31)
  0350ac4  ld 0, 176(1)
  0350ac8  mtlr 0
  0350acc  lfd 30, 144(1)
  0350ad0  lfd 31, 152(1)
  0350ad4  ld 30, 128(1)
  0350ad8  ld 31, 136(1)
  0350adc  addi 1, 1, 160
  0350ae0  blr

UpdateMoby_344:   # 0x350b08, 0x598 bytes
  0350b08  stdu 1, -288(1)
  0350b0c  mflr 0
  0350b10  std 0, 304(1)
  0350b14  stfd 26, 240(1)
  0350b18  stfd 27, 248(1)
  0350b1c  stfd 28, 256(1)
  0350b20  stfd 29, 264(1)
  0350b24  stfd 30, 272(1)
  0350b28  stfd 31, 280(1)
  0350b2c  std 31, 232(1)
  0350b30  lbz 4, 32(3)
  0350b34  std 30, 224(1)
  0350b38  ori 31, 3, 0
  0350b3c  lwz 30, 120(3)
  0350b40  cmpwi 4, 0
  0350b44  cmpwi 1, 4, 1
  0350b48  std 29, 216(1)
  0350b4c  cmpwi 6, 4, -1
  0350b50  bt 1, 0x350b5c
  0350b54  bf 25, 0x35106c
  0350b58  b 0x350b64
  0350b5c  bf 5, 0x350b94
  0350b60  b 0x35106c
  0350b64  lhz 3, 50(31)
  0350b68  clrlwi 3, 3, 31
  0350b6c  cmpwi 3, 0
  0350b70  bt 2, 0x350b88
  0350b74  lis 3, 0
  0350b78  lhz 4, 52(31)
  0350b7c  ori 3, 3, 32768
  0350b80  or 3, 4, 3
  0350b84  sth 3, 52(31)
  0350b88  li 3, 2
  0350b8c  stb 3, 32(31)
  0350b90  b 0x35106c
  0350b94  lwz 3, 4(30)
  0350b98  cmpwi 3, 0
  0350b9c  bf 1, 0x350c48
  0350ba0  extsw 4, 3
  0350ba4  addic 5, 1, 112
  0350ba8  ori 3, 31, 0
  0350bac  bl 0xf1114
  0350bb0  nop
  0350bb4  lfs 1, 64(31)
  0350bb8  lfs 2, 32(30)
  0350bbc  bl 0x502578
  0350bc0  nop
  0350bc4  stfs 1, 64(31)
  0350bc8  lfs 1, 68(31)
  0350bcc  lfs 2, 36(30)
  0350bd0  bl 0x502578
  0350bd4  nop
  0350bd8  stfs 1, 68(31)
  0350bdc  lfs 1, 72(31)
  0350be0  lfs 2, 40(30)
  0350be4  bl 0x502578
  0350be8  nop
  0350bec  addic 29, 1, 144
  0350bf0  stfs 1, 72(31)
  0350bf4  addic 4, 31, 64
  0350bf8  ori 3, 29, 0
  0350bfc  bl 0x500ca4
  0350c00  nop
  0350c04  ori 4, 29, 0
  0350c08  addic 3, 31, 192
  0350c0c  bl 0x500fa8
  0350c10  nop
  0350c14  lwz 4, 4(30)
  0350c18  addic 5, 1, 128
  0350c1c  ori 3, 31, 0
  0350c20  extsw 4, 4
  0350c24  bl 0xf1114
  0350c28  nop
  0350c2c  lfs 30, 112(1)
  0350c30  lfs 31, 128(1)
  0350c34  lfs 28, 116(1)
  0350c38  lfs 29, 132(1)
  0350c3c  lfs 26, 120(1)
  0350c40  lfs 27, 136(1)
  0350c44  b 0x350e04
  0350c48  lfs 1, 20(30)
  0350c4c  lfs 2, 16(30)
  0350c50  lfs 3, 208(31)
  0350c54  lfs 4, 220(31)
  0350c58  lfs 5, 212(31)
  0350c5c  fmuls 4, 4, 1
  0350c60  lfs 6, 192(31)
  0350c64  fmuls 3, 3, 1
  0350c68  lfs 7, 216(31)
  0350c6c  fmuls 5, 5, 1
  0350c70  lfs 8, 204(31)
  0350c74  fmuls 1, 7, 1
  0350c78  lfs 7, 24(30)
  0350c7c  lfs 9, 196(31)
  0350c80  lfs 10, 200(31)
  0350c84  fmadds 4, 8, 2, 4
  0350c88  fmadds 3, 6, 2, 3
  0350c8c  lfs 6, 224(31)
  0350c90  fmadds 5, 9, 2, 5
  0350c94  lfs 8, 236(31)
  0350c98  fmadds 1, 10, 2, 1
  0350c9c  lfs 9, 228(31)
  0350ca0  lfs 11, 232(31)
  0350ca4  lfs 2, 28(30)
  0350ca8  fmadds 4, 8, 7, 4
  0350cac  fmadds 3, 6, 7, 3
  0350cb0  fmadds 5, 9, 7, 5
  0350cb4  fmadds 1, 11, 7, 1
  0350cb8  fadds 2, 4, 2
  0350cbc  stfs 3, 112(1)
  0350cc0  stfs 5, 116(1)
  0350cc4  stfs 1, 120(1)
  0350cc8  stfs 2, 124(1)
  0350ccc  lfs 1, 64(31)
  0350cd0  lfs 2, 32(30)
  0350cd4  bl 0x502578
  0350cd8  nop
  0350cdc  stfs 1, 64(31)
  0350ce0  lfs 1, 68(31)
  0350ce4  lfs 2, 36(30)
  0350ce8  bl 0x502578
  0350cec  nop
  0350cf0  stfs 1, 68(31)
  0350cf4  lfs 1, 72(31)
  0350cf8  lfs 2, 40(30)
  0350cfc  bl 0x502578
  0350d00  nop
  0350d04  stfs 1, 72(31)
  0350d08  addic 3, 1, 144
  0350d0c  addic 4, 31, 64
  0350d10  bl 0x500ca4
  0350d14  nop
  0350d18  lhz 3, 52(31)
  0350d1c  rlwinm 3, 3, 0, 16, 16
  0350d20  cmpwi 3, 0
  0350d24  bt 2, 0x350d4c
  0350d28  lfs 1, 160(1)
  0350d2c  lfs 2, 164(1)
  0350d30  fneg 1, 1
  0350d34  lfs 3, 168(1)
  0350d38  fneg 2, 2
  0350d3c  fneg 3, 3
  0350d40  stfs 1, 160(1)
  0350d44  stfs 2, 164(1)
  0350d48  stfs 3, 168(1)
  0350d4c  addic 3, 31, 192
  0350d50  addic 4, 1, 144
  0350d54  bl 0x500fa8
  0350d58  nop
  0350d5c  lfs 1, 20(30)
  0350d60  lfs 2, 16(30)
  0350d64  lfs 3, 220(31)
  0350d68  lfs 4, 208(31)
  0350d6c  fmuls 3, 3, 1
  0350d70  lfs 5, 212(31)
  0350d74  lfs 6, 204(31)
  0350d78  fmuls 4, 4, 1
  0350d7c  lfs 27, 24(30)
  0350d80  fmuls 5, 5, 1
  0350d84  lfs 7, 192(31)
  0350d88  lfs 8, 216(31)
  0350d8c  lfs 9, 196(31)
  0350d90  fmuls 1, 8, 1
  0350d94  lfs 8, 200(31)
  0350d98  lfs 10, 236(31)
  0350d9c  fmadds 3, 6, 2, 3
  0350da0  fmadds 31, 7, 2, 4
  0350da4  fmadds 29, 9, 2, 5
  0350da8  lfs 4, 224(31)
  0350dac  lfs 5, 228(31)
  0350db0  lfs 6, 232(31)
  0350db4  fmadds 1, 8, 2, 1
  0350db8  lfs 2, 28(30)
  0350dbc  lfs 30, 112(1)
  0350dc0  lfs 28, 116(1)
  0350dc4  fmadds 3, 10, 27, 3
  0350dc8  lfs 26, 120(1)
  0350dcc  fmadds 31, 4, 27, 31
  0350dd0  fmadds 29, 5, 27, 29
  0350dd4  fmadds 27, 6, 27, 1
  0350dd8  fadds 1, 3, 2
  0350ddc  stfs 1, 140(1)
  0350de0  lfs 1, 16(31)
  0350de4  lfs 2, 20(31)
  0350de8  fadds 1, 31, 1
  0350dec  lfs 3, 24(31)
  0350df0  fadds 2, 29, 2
  0350df4  fadds 3, 27, 3
  0350df8  stfs 1, 128(1)
  0350dfc  stfs 2, 132(1)
  0350e00  stfs 3, 136(1)
  0350e04  lwz 3, 12(30)
  0350e08  extsw 3, 3
  0350e0c  bl 0x502730
  0350e10  nop
  0350e14  lis 3, 53
  0350e18  li 5, 0
  0350e1c  addi 4, 3, 2788
  0350e20  addic 3, 1, 128
  0350e24  ori 6, 31, 0
  0350e28  lfs 2, 0(4)
  0350e2c  fmuls 1, 1, 2
  0350e30  bl 0x59e20
  0350e34  nop
  0350e38  cmpwi 3, 0
  0350e3c  bt 2, 0x350eec
  0350e40  lis 3, 161
  0350e44  addic 3, 3, 2368
  0350e48  lwz 4, 24(3)
  0350e4c  cmpwi 4, 0
  0350e50  bt 2, 0x350e60
  0350e54  lwz 5, 8(30)
  0350e58  cmpw 4, 5
  0350e5c  bt 2, 0x350eec
  0350e60  li 4, 0
  0350e64  lis 5, 53
  0350e68  stw 4, 0(30)
  0350e6c  lfs 1, 52(30)
  0350e70  addi 4, 5, 2788
  0350e74  lfs 2, 68(3)
  0350e78  lfs 3, 48(30)
  0350e7c  fmuls 1, 1, 2
  0350e80  lfs 2, 64(3)
  0350e84  lfs 4, 56(30)
  0350e88  lfs 5, 72(3)
  0350e8c  fmadds 1, 3, 2, 1
  0350e90  lfs 2, 4(4)
  0350e94  fmadds 1, 4, 5, 1
  0350e98  fcmpu 0, 1, 2
  0350e9c  cror 6, 1, 2
  0350ea0  bt 6, 0x350eec
  0350ea4  addic 4, 30, 48
  0350ea8  ori 5, 3, 0
  0350eac  ori 3, 4, 0
  0350eb0  addic 5, 5, 64
  0350eb4  bl 0x500608
  0350eb8  nop
  0350ebc  lis 3, 53
  0350ec0  lfs 1, 48(30)
  0350ec4  lfs 2, 52(30)
  0350ec8  addi 3, 3, 2788
  0350ecc  lfs 3, 56(30)
  0350ed0  lfs 4, 8(3)
  0350ed4  fmuls 1, 1, 4
  0350ed8  fmuls 2, 2, 4
  0350edc  fmuls 3, 3, 4
  0350ee0  stfs 1, 48(30)
  0350ee4  stfs 2, 52(30)
  0350ee8  stfs 3, 56(30)
  0350eec  ori 3, 30, 0
  0350ef0  bl 0x4fff60
  0350ef4  nop
  0350ef8  cmpwi 3, 0
  0350efc  bt 2, 0x350fdc
  0350f00  lis 3, 53
  0350f04  li 4, 12
  0350f08  vspltisw 2, -1
  0350f0c  addi 3, 3, 2788
  0350f10  lis 5, 114
  0350f14  li 6, -3056
  0350f18  vslw 2, 2, 2
  0350f1c  <unknown>
  0350f20  vspltw 3, 3, 0
  0350f24  <unknown>
  0350f28  li 4, 20
  0350f2c  vmaddfp 2, 4, 3, 2
  0350f30  vspltisw 10, -1
  0350f34  vspltisw 3, -1
  0350f38  <unknown>
  0350f3c  vspltw 4, 4, 0
  0350f40  vslw 3, 3, 3
  0350f44  vspltisw 5, -1
  0350f48  li 4, 16
  0350f4c  vspltisw 6, -1
  0350f50  vspltisw 11, -8
  0350f54  vctsxs 2, 2, 0
  0350f58  vslw 5, 5, 5
  0350f5c  vslw 6, 6, 6
  0350f60  <unknown>
  0350f64  li 3, 0
  0350f68  li 4, 35
  0350f6c  vspltw 8, 8, 0
  0350f70  stw 3, 0(30)
  0350f74  vcfsx 2, 2, 0
  0350f78  vrefp 7, 2
  0350f7c  vnmsubfp 9, 7, 2, 4
  0350f80  vmaddfp 7, 7, 9, 3
  0350f84  vslw 9, 10, 10
  0350f88  <unknown>
  0350f8c  vsrw 3, 3, 11
  0350f90  vcfux 11, 3, 0
  0350f94  vnmsubfp 10, 7, 2, 4
  0350f98  vmaddfp 5, 7, 10, 5
  0350f9c  vspltw 7, 11, 0
  0350fa0  vnmsubfp 2, 5, 2, 4
  0350fa4  vmaddfp 2, 5, 2, 6
  0350fa8  vmaddfp 2, 2, 8, 9
  0350fac  vspltw 4, 2, 0
  0350fb0  vcmpgefp. 4, 7, 4
  0350fb4  bt 26, 0x350fd0
  0350fb8  vctuxs 2, 2, 0
  0350fbc  li 3, 35
  0350fc0  vsubuwm 2, 3, 2
  0350fc4  vspltb 2, 2, 3
  0350fc8  stvebx 2, 3, 31
  0350fcc  b 0x350fdc
  0350fd0  ori 3, 31, 0
  0350fd4  bl 0xefb38
  0350fd8  nop
  0350fdc  lis 3, 53
  0350fe0  lfs 1, 56(30)
  0350fe4  lis 4, 114
  0350fe8  addi 3, 3, 2788
  0350fec  fsubs 5, 30, 31
  0350ff0  lfs 2, 24(3)
  0350ff4  lfs 3, -3048(4)
  0350ff8  lfs 4, 48(30)
  0350ffc  fnmsubs 1, 3, 2, 1
  0351000  fsubs 2, 28, 29
  0351004  fsubs 3, 26, 27
  0351008  stfs 1, 56(30)
  035100c  lfs 1, 16(31)
  0351010  fadds 1, 1, 4
  0351014  lfs 4, 20(31)
  0351018  lfs 6, 24(31)
  035101c  stfs 1, 16(31)
  0351020  lfs 7, 52(30)
  0351024  fadds 1, 1, 5
  0351028  fadds 4, 4, 7
  035102c  fadds 2, 4, 2
  0351030  stfs 4, 20(31)
  0351034  lfs 5, 56(30)
  0351038  stfs 1, 16(31)
  035103c  fadds 4, 6, 5
  0351040  stfs 2, 20(31)
  0351044  fadds 1, 4, 3
  0351048  stfs 1, 24(31)
  035104c  lfs 2, 28(3)
  0351050  fcmpu 0, 1, 2
  0351054  cror 6, 1, 2
  0351058  bt 6, 0x35106c
  035105c  ori 3, 31, 0
  0351060  bl 0xefb38
  0351064  nop
  0351068  b 0x35106c
  035106c  ld 0, 304(1)
  0351070  mtlr 0
  0351074  lfd 26, 240(1)
  0351078  lfd 27, 248(1)
  035107c  lfd 28, 256(1)
  0351080  lfd 29, 264(1)
  0351084  lfd 30, 272(1)
  0351088  lfd 31, 280(1)
  035108c  ld 29, 216(1)
  0351090  ld 30, 224(1)
  0351094  ld 31, 232(1)
  0351098  addi 1, 1, 288
  035109c  blr

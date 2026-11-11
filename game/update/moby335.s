# game/update/moby335.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M338_00349ae4:   # 0x349ae4, 0x14 bytes
  0349ae4  lis 3, 132
  0349ae8  lis 4, 1
  0349aec  addic 3, 3, -332
  0349af0  stw 4, 72(3)
  0349af4  blr

UpdateMoby_335:   # 0x349b38, 0x6f0 bytes
  0349b38  stdu 1, -208(1)
  0349b3c  mflr 0
  0349b40  std 0, 224(1)
  0349b44  stfd 25, 152(1)
  0349b48  stfd 26, 160(1)
  0349b4c  stfd 27, 168(1)
  0349b50  stfd 28, 176(1)
  0349b54  stfd 29, 184(1)
  0349b58  stfd 30, 192(1)
  0349b5c  stfd 31, 200(1)
  0349b60  std 31, 144(1)
  0349b64  cmpwi 3, 0
  0349b68  std 30, 136(1)
  0349b6c  std 29, 128(1)
  0349b70  std 28, 120(1)
  0349b74  std 27, 112(1)
  0349b78  ori 31, 3, 0
  0349b7c  bt 2, 0x34a1e8
  0349b80  lwz 30, 120(31)
  0349b84  cmpwi 30, 0
  0349b88  bt 2, 0x34a1e8
  0349b8c  lbz 3, 32(31)
  0349b90  cmpwi 3, 5
  0349b94  cmpwi 1, 3, 4
  0349b98  cmpwi 6, 3, 3
  0349b9c  cmpwi 7, 3, 2
  0349ba0  bt 2, 0x349f80
  0349ba4  bt 6, 0x349fcc
  0349ba8  bt 26, 0x349f54
  0349bac  bt 30, 0x349ed8
  0349bb0  cmpwi 3, 1
  0349bb4  bt 2, 0x349c64
  0349bb8  cmpwi 3, 0
  0349bbc  bf 2, 0x34a01c
  0349bc0  li 3, 1
  0349bc4  lfs 1, 16(31)
  0349bc8  li 4, 0
  0349bcc  stb 3, 32(31)
  0349bd0  stfs 1, 32(30)
  0349bd4  lfs 1, 20(31)
  0349bd8  stfs 1, 36(30)
  0349bdc  lfs 1, 24(31)
  0349be0  stfs 1, 40(30)
  0349be4  lfs 1, 64(31)
  0349be8  stfs 1, 16(30)
  0349bec  lfs 1, 68(31)
  0349bf0  lwz 3, 68(30)
  0349bf4  stfs 1, 20(30)
  0349bf8  cmpwi 3, 0
  0349bfc  lfs 1, 72(31)
  0349c00  lwz 3, 72(30)
  0349c04  stfs 1, 24(30)
  0349c08  stw 4, 4(30)
  0349c0c  cmpwi 1, 3, 0
  0349c10  bt 1, 0x349c38
  0349c14  lis 3, 53
  0349c18  lfs 1, 44(31)
  0349c1c  addi 3, 3, -25864
  0349c20  lfs 2, 0(3)
  0349c24  lwz 3, 36(31)
  0349c28  fmuls 1, 1, 2
  0349c2c  lfs 3, 36(3)
  0349c30  fdivs 1, 1, 3
  0349c34  stfs 1, 68(30)
  0349c38  bt 5, 0x34a01c
  0349c3c  lis 3, 53
  0349c40  lfs 1, 44(31)
  0349c44  addi 3, 3, -25864
  0349c48  lfs 2, 4(3)
  0349c4c  lwz 3, 36(31)
  0349c50  fmuls 1, 1, 2
  0349c54  lfs 3, 36(3)
  0349c58  fdivs 1, 1, 3
  0349c5c  stfs 1, 72(30)
  0349c60  b 0x34a01c
  0349c64  lis 28, 151
  0349c68  addic 28, 28, -25376
  0349c6c  lwz 29, 5616(28)
  0349c70  cmpwi 29, 0
  0349c74  bt 2, 0x34a01c
  0349c78  ori 3, 31, 0
  0349c7c  ori 4, 29, 0
  0349c80  bl 0xf20f0
  0349c84  nop
  0349c88  lis 3, 53
  0349c8c  li 29, 0
  0349c90  addi 3, 3, -25864
  0349c94  lfs 5, 8(3)
  0349c98  lwz 9, 5616(28)
  0349c9c  fcmpu 0, 1, 5
  0349ca0  lfs 4, 16(31)
  0349ca4  lfs 3, 20(31)
  0349ca8  lfs 2, 24(31)
  0349cac  lbz 8, 5622(28)
  0349cb0  lbz 7, 5624(28)
  0349cb4  lbz 6, 5623(28)
  0349cb8  lbz 5, 5625(28)
  0349cbc  lbz 4, 5627(28)
  0349cc0  lbz 3, 5626(28)
  0349cc4  lfs 1, 5628(28)
  0349cc8  bt 1, 0x34a01c
  0349ccc  lfs 5, 20(9)
  0349cd0  lfs 6, 16(9)
  0349cd4  fsubs 3, 3, 5
  0349cd8  fsubs 4, 4, 6
  0349cdc  fmuls 3, 3, 3
  0349ce0  fmadds 3, 4, 4, 3
  0349ce4  lfs 4, 68(30)
  0349ce8  fsqrts 3, 3
  0349cec  fcmpu 0, 3, 4
  0349cf0  cror 6, 1, 2
  0349cf4  bt 6, 0x34a01c
  0349cf8  lfs 3, 24(9)
  0349cfc  fsubs 2, 3, 2
  0349d00  lfs 3, 72(30)
  0349d04  fabs 2, 2
  0349d08  fcmpu 0, 2, 3
  0349d0c  cror 6, 1, 2
  0349d10  bt 6, 0x34a01c
  0349d14  lhz 9, 166(31)
  0349d18  extsh 9, 9
  0349d1c  cmpwi 9, 336
  0349d20  cmpwi 1, 9, 335
  0349d24  cmpwi 6, 9, 337
  0349d28  cmpwi 7, 9, 338
  0349d2c  bt 1, 0x349d38
  0349d30  bt 6, 0x349d44
  0349d34  b 0x349e8c
  0349d38  bf 25, 0x349e0c
  0349d3c  bf 29, 0x349da8
  0349d40  b 0x349e8c
  0349d44  lhz 4, 2(30)
  0349d48  li 3, -1
  0349d4c  extsh 4, 4
  0349d50  subc 3, 3, 4
  0349d54  subc 5, 7, 4
  0349d58  cntlzw 3, 3
  0349d5c  sldi 3, 3, 58
  0349d60  sradi 3, 3, 63
  0349d64  and 3, 3, 5
  0349d68  addc 3, 4, 3
  0349d6c  ori 4, 8, 0
  0349d70  addc 5, 8, 3
  0349d74  extsw 3, 5
  0349d78  subc 7, 6, 5
  0349d7c  subc 3, 6, 3
  0349d80  lis 6, 101
  0349d84  sradi 3, 3, 63
  0349d88  and 7, 3, 7
  0349d8c  addic 3, 6, 25772
  0349d90  addc 27, 5, 7
  0349d94  ori 5, 27, 0
  0349d98  bl 0x5cd098
  0349d9c  nop
  0349da0  stb 27, 5622(28)
  0349da4  b 0x349ea0
  0349da8  lhz 7, 2(30)
  0349dac  li 6, -1
  0349db0  extsh 7, 7
  0349db4  subc 6, 6, 7
  0349db8  subc 4, 4, 7
  0349dbc  cntlzw 6, 6
  0349dc0  sldi 6, 6, 58
  0349dc4  sradi 6, 6, 63
  0349dc8  and 4, 6, 4
  0349dcc  addc 4, 7, 4
  0349dd0  addc 5, 5, 4
  0349dd4  extsw 4, 5
  0349dd8  subc 6, 3, 5
  0349ddc  subc 4, 3, 4
  0349de0  sradi 7, 4, 63
  0349de4  ori 4, 3, 0
  0349de8  and 3, 7, 6
  0349dec  lis 6, 101
  0349df0  addc 27, 5, 3
  0349df4  addic 3, 6, 25796
  0349df8  ori 5, 27, 0
  0349dfc  bl 0x5cd098
  0349e00  nop
  0349e04  stb 27, 5626(28)
  0349e08  b 0x349ea0
  0349e0c  stfd 1, 56(1)
  0349e10  lis 3, 101
  0349e14  addic 3, 3, 25828
  0349e18  ld 4, 56(1)
  0349e1c  bl 0x5cd098
  0349e20  nop
  0349e24  lhz 3, 2(30)
  0349e28  extsh 3, 3
  0349e2c  cmpwi 3, -1
  0349e30  bt 2, 0x349e44
  0349e34  bl 0x502730
  0349e38  nop
  0349e3c  lfs 2, 5628(28)
  0349e40  b 0x349e4c
  0349e44  lfs 2, 5628(28)
  0349e48  lfs 1, 5636(28)
  0349e4c  fadds 2, 2, 1
  0349e50  lfs 1, 5632(28)
  0349e54  fcmpu 0, 2, 1
  0349e58  stfs 2, 5628(28)
  0349e5c  cror 6, 0, 2
  0349e60  bt 6, 0x349e6c
  0349e64  fmr 2, 1
  0349e68  stfs 1, 5628(28)
  0349e6c  fmr 1, 2
  0349e70  lis 3, 101
  0349e74  addic 3, 3, 25844
  0349e78  stfd 1, 56(1)
  0349e7c  ld 4, 56(1)
  0349e80  bl 0x5cd098
  0349e84  nop
  0349e88  b 0x349ea0
  0349e8c  lis 3, 101
  0349e90  ori 4, 9, 0
  0349e94  addic 3, 3, 25860
  0349e98  bl 0x5cd098
  0349e9c  nop
  0349ea0  lis 4, 53
  0349ea4  li 3, 2
  0349ea8  addi 4, 4, -25864
  0349eac  lis 5, 114
  0349eb0  stb 3, 32(31)
  0349eb4  lfs 1, 12(4)
  0349eb8  lfs 2, 16(4)
  0349ebc  lfs 3, -3064(5)
  0349ec0  lfs 4, 44(31)
  0349ec4  fmadds 1, 3, 1, 2
  0349ec8  stw 29, 148(31)
  0349ecc  fmuls 1, 4, 1
  0349ed0  stfs 1, 44(31)
  0349ed4  b 0x34a01c
  0349ed8  lis 3, 53
  0349edc  lis 4, 114
  0349ee0  addi 3, 3, -25864
  0349ee4  lfs 1, 20(3)
  0349ee8  lfs 2, 16(3)
  0349eec  lfs 3, -3064(4)
  0349ef0  lfs 4, 44(31)
  0349ef4  fmadds 1, 3, 1, 2
  0349ef8  fmuls 1, 4, 1
  0349efc  stfs 1, 44(31)
  0349f00  lfs 2, 24(3)
  0349f04  fcmpu 0, 1, 2
  0349f08  cror 6, 1, 2
  0349f0c  bt 6, 0x34a01c
  0349f10  lwz 3, 60(30)
  0349f14  cmpwi 3, 0
  0349f18  bf 2, 0x349f2c
  0349f1c  ori 3, 31, 0
  0349f20  bl 0xefb38
  0349f24  nop
  0349f28  b 0x34a1e8
  0349f2c  lis 4, 16384
  0349f30  stw 3, 64(30)
  0349f34  li 5, 0
  0349f38  li 6, 5
  0349f3c  stw 4, 16(31)
  0349f40  stw 4, 20(31)
  0349f44  stw 4, 24(31)
  0349f48  stw 5, 148(31)
  0349f4c  stb 6, 32(31)
  0349f50  b 0x34a01c
  0349f54  addic 3, 30, 4
  0349f58  bl 0x4fff60
  0349f5c  nop
  0349f60  cmpwi 3, 0
  0349f64  bt 2, 0x34a01c
  0349f68  li 3, 1
  0349f6c  lwz 4, 36(31)
  0349f70  stb 3, 32(31)
  0349f74  lwz 3, 16(4)
  0349f78  stw 3, 148(31)
  0349f7c  b 0x34a01c
  0349f80  addic 3, 30, 64
  0349f84  bl 0x4fff60
  0349f88  nop
  0349f8c  cmpwi 3, 0
  0349f90  bt 2, 0x34a01c
  0349f94  li 3, 4
  0349f98  stb 3, 32(31)
  0349f9c  lfs 1, 32(30)
  0349fa0  stfs 1, 16(31)
  0349fa4  lfs 1, 36(30)
  0349fa8  lwz 3, 36(31)
  0349fac  stfs 1, 20(31)
  0349fb0  lfs 1, 40(30)
  0349fb4  stfs 1, 24(31)
  0349fb8  lfs 1, 44(30)
  0349fbc  stfs 1, 28(31)
  0349fc0  lwz 3, 16(3)
  0349fc4  stw 3, 148(31)
  0349fc8  b 0x34a01c
  0349fcc  lis 3, 53
  0349fd0  lfs 2, 44(31)
  0349fd4  lis 4, 114
  0349fd8  addi 3, 3, -25864
  0349fdc  lfs 3, 28(3)
  0349fe0  lwz 5, 36(31)
  0349fe4  lfs 4, -3064(4)
  0349fe8  fmuls 3, 4, 3
  0349fec  lfs 1, 36(5)
  0349ff0  fsubs 5, 1, 2
  0349ff4  fmadds 2, 3, 5, 2
  0349ff8  fsubs 3, 1, 2
  0349ffc  stfs 2, 44(31)
  034a000  lfs 2, 32(3)
  034a004  fcmpu 0, 3, 2
  034a008  cror 6, 1, 2
  034a00c  bt 6, 0x34a01c
  034a010  li 3, 1
  034a014  stfs 1, 44(31)
  034a018  stb 3, 32(31)
  034a01c  lbz 3, 32(31)
  034a020  cmpwi 3, 5
  034a024  bt 2, 0x34a1e8
  034a028  lbz 3, 1(30)
  034a02c  clrlwi 3, 3, 31
  034a030  cmpwi 3, 0
  034a034  bt 2, 0x34a05c
  034a038  lis 3, 132
  034a03c  lwz 3, -16892(3)
  034a040  cmpwi 3, 0
  034a044  bt 2, 0x34a05c
  034a048  addic 3, 31, 16
  034a04c  bl 0x342d38
  034a050  nop
  034a054  fmr 25, 1
  034a058  b 0x34a060
  034a05c  lfs 25, 40(30)
  034a060  lwz 3, 8(30)
  034a064  cmpwi 3, 0
  034a068  bt 2, 0x34a0b4
  034a06c  lis 3, 161
  034a070  lwz 3, 1808(3)
  034a074  extsw 3, 3
  034a078  bl 0x502730
  034a07c  nop
  034a080  lis 3, 114
  034a084  lfs 2, 8(30)
  034a088  lfs 3, -3064(3)
  034a08c  fmuls 2, 2, 3
  034a090  fmuls 1, 2, 1
  034a094  bl 0x10de78
  034a098  nop
  034a09c  lfs 3, 24(30)
  034a0a0  fmr 2, 1
  034a0a4  fmr 1, 3
  034a0a8  bl 0x502578
  034a0ac  nop
  034a0b0  stfs 1, 72(31)
  034a0b4  lis 3, 53
  034a0b8  lwz 4, 12(30)
  034a0bc  addi 3, 3, -25864
  034a0c0  cmpwi 4, 0
  034a0c4  lfs 28, 36(3)
  034a0c8  lfs 29, 40(3)
  034a0cc  lfs 27, 44(3)
  034a0d0  lfs 26, 48(3)
  034a0d4  lfs 30, 52(3)
  034a0d8  lfs 31, 56(3)
  034a0dc  bt 2, 0x34a158
  034a0e0  lis 3, 161
  034a0e4  lwz 3, 1808(3)
  034a0e8  extsw 3, 3
  034a0ec  bl 0x502730
  034a0f0  nop
  034a0f4  lis 3, 114
  034a0f8  lfs 2, 12(30)
  034a0fc  lfs 3, -3064(3)
  034a100  fmuls 2, 2, 3
  034a104  fmuls 1, 2, 1
  034a108  bl 0x10de78
  034a10c  nop
  034a110  fsubs 2, 30, 1
  034a114  fsubs 3, 31, 1
  034a118  fsub 4, 1, 2
  034a11c  fsel 1, 4, 2, 1
  034a120  fsub 2, 3, 1
  034a124  fsel 1, 2, 3, 1
  034a128  lfs 2, 48(30)
  034a12c  fmuls 3, 1, 1
  034a130  fmuls 4, 3, 1
  034a134  fmuls 5, 3, 4
  034a138  fmadds 1, 4, 26, 1
  034a13c  fmuls 4, 3, 5
  034a140  fmadds 1, 5, 27, 1
  034a144  fmuls 3, 3, 4
  034a148  fmadds 1, 4, 28, 1
  034a14c  fmadds 1, 3, 29, 1
  034a150  fmadds 1, 2, 1, 25
  034a154  stfs 1, 24(31)
  034a158  lwz 3, 52(30)
  034a15c  cmpwi 3, 0
  034a160  bt 2, 0x34a1e8
  034a164  lis 3, 161
  034a168  lwz 3, 1808(3)
  034a16c  extsw 3, 3
  034a170  bl 0x502730
  034a174  nop
  034a178  lis 3, 114
  034a17c  lfs 2, 52(30)
  034a180  lfs 3, -3064(3)
  034a184  fmuls 2, 2, 3
  034a188  fmuls 1, 2, 1
  034a18c  bl 0x10de78
  034a190  nop
  034a194  fsubs 2, 30, 1
  034a198  fsubs 3, 31, 1
  034a19c  fsub 4, 1, 2
  034a1a0  fsel 1, 4, 2, 1
  034a1a4  lfs 4, 56(30)
  034a1a8  fsub 2, 3, 1
  034a1ac  fsel 2, 2, 3, 1
  034a1b0  lfs 1, 20(30)
  034a1b4  fmuls 3, 2, 2
  034a1b8  fmuls 5, 3, 2
  034a1bc  fmuls 6, 3, 5
  034a1c0  fmadds 2, 5, 26, 2
  034a1c4  fmuls 5, 3, 6
  034a1c8  fmadds 2, 6, 27, 2
  034a1cc  fmuls 3, 3, 5
  034a1d0  fmadds 2, 5, 28, 2
  034a1d4  fmadds 2, 3, 29, 2
  034a1d8  fmuls 2, 4, 2
  034a1dc  bl 0x502578
  034a1e0  nop
  034a1e4  stfs 1, 68(31)
  034a1e8  ld 0, 224(1)
  034a1ec  mtlr 0
  034a1f0  lfd 25, 152(1)
  034a1f4  lfd 26, 160(1)
  034a1f8  lfd 27, 168(1)
  034a1fc  lfd 28, 176(1)
  034a200  lfd 29, 184(1)
  034a204  lfd 30, 192(1)
  034a208  lfd 31, 200(1)
  034a20c  ld 27, 112(1)
  034a210  ld 28, 120(1)
  034a214  ld 29, 128(1)
  034a218  ld 30, 136(1)
  034a21c  ld 31, 144(1)
  034a220  addi 1, 1, 208
  034a224  blr

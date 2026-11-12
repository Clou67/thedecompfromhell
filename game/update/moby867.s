# game/update/moby867.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M867_00499bf4:   # 0x499bf4, 0x14 bytes
  0499bf4  lis 3, 140
  0499bf8  lis 4, 1
  0499bfc  addic 3, 3, 32348
  0499c00  stw 4, 72(3)
  0499c04  blr

UpdateMoby_867:   # 0x499c40, 0x770 bytes
  0499c40  stdu 1, -432(1)
  0499c44  mflr 0
  0499c48  std 0, 448(1)
  0499c4c  stfd 30, 416(1)
  0499c50  stfd 31, 424(1)
  0499c54  std 31, 408(1)
  0499c58  cmpwi 3, 0
  0499c5c  std 30, 400(1)
  0499c60  std 29, 392(1)
  0499c64  std 28, 384(1)
  0499c68  ori 31, 3, 0
  0499c6c  bt 2, 0x49a388
  0499c70  lwz 30, 120(31)
  0499c74  cmpwi 30, 0
  0499c78  bt 2, 0x49a388
  0499c7c  lis 3, 74
  0499c80  addic 5, 1, 288
  0499c84  addi 4, 3, -25592
  0499c88  ori 3, 31, 0
  0499c8c  lfs 31, 0(4)
  0499c90  fmr 1, 31
  0499c94  bl 0x1118d8
  0499c98  nop
  0499c9c  ori 3, 31, 0
  0499ca0  addic 28, 30, 32
  0499ca4  lis 4, 35
  0499ca8  li 5, 0
  0499cac  bl 0x10675c
  0499cb0  nop
  0499cb4  ori 29, 3, 0
  0499cb8  ori 3, 31, 0
  0499cbc  li 6, 0
  0499cc0  addic 7, 1, 368
  0499cc4  li 9, 0
  0499cc8  li 10, 4
  0499ccc  ori 4, 29, 0
  0499cd0  ori 5, 28, 0
  0499cd4  li 8, 0
  0499cd8  bl 0x106840
  0499cdc  nop
  0499ce0  lwz 3, 368(1)
  0499ce4  lbz 4, 32(31)
  0499ce8  cmpwi 3, 1
  0499cec  lhz 3, 52(31)
  0499cf0  lfs 1, 16(31)
  0499cf4  bf 1, 0x499db8
  0499cf8  cmpwi 29, 0
  0499cfc  bt 2, 0x499db8
  0499d00  lwz 29, 32(29)
  0499d04  lhz 29, 166(29)
  0499d08  cmpwi 1, 29, 869
  0499d0c  cmpwi 29, 867
  0499d10  cror 2, 2, 6
  0499d14  bt 2, 0x499db8
  0499d18  cmpwi 29, 871
  0499d1c  bt 2, 0x499db8
  0499d20  lis 3, 74
  0499d24  li 6, 0
  0499d28  addi 3, 3, -25592
  0499d2c  li 11, -1
  0499d30  li 7, 1
  0499d34  addic 4, 1, 192
  0499d38  li 5, 0
  0499d3c  lfs 1, 4(3)
  0499d40  stw 6, 204(1)
  0499d44  li 8, 3
  0499d48  stw 6, 200(1)
  0499d4c  li 9, 3
  0499d50  stw 6, 196(1)
  0499d54  li 10, 5
  0499d58  stw 6, 192(1)
  0499d5c  fmr 2, 1
  0499d60  lfs 4, 16(3)
  0499d64  lfs 3, 8(3)
  0499d68  lfs 5, 12(3)
  0499d6c  fmr 6, 4
  0499d70  lfs 7, 20(3)
  0499d74  std 11, 144(1)
  0499d78  std 6, 160(1)
  0499d7c  ori 3, 31, 0
  0499d80  std 7, 168(1)
  0499d84  std 11, 176(1)
  0499d88  std 6, 184(1)
  0499d8c  bl 0x10e030
  0499d90  nop
  0499d94  ori 3, 31, 0
  0499d98  li 4, 0
  0499d9c  li 5, -1
  0499da0  bl 0xfd8d0
  0499da4  nop
  0499da8  ori 3, 31, 0
  0499dac  bl 0xefb38
  0499db0  nop
  0499db4  b 0x49a388
  0499db8  cmpwi 4, 0
  0499dbc  bt 1, 0x499dcc
  0499dc0  cmpwi 4, -1
  0499dc4  bf 1, 0x49a370
  0499dc8  b 0x499de0
  0499dcc  cmpwi 4, 1
  0499dd0  bf 1, 0x499e1c
  0499dd4  cmpwi 4, 2
  0499dd8  bf 1, 0x499f20
  0499ddc  b 0x49a370
  0499de0  ori 3, 3, 4096
  0499de4  li 4, 1
  0499de8  sth 3, 52(31)
  0499dec  stfs 1, 96(30)
  0499df0  lfs 1, 20(31)
  0499df4  stfs 1, 100(30)
  0499df8  lfs 1, 24(31)
  0499dfc  stfs 1, 104(30)
  0499e00  lfs 1, 28(31)
  0499e04  stfs 1, 108(30)
  0499e08  lwz 3, 36(31)
  0499e0c  lwz 3, 16(3)
  0499e10  stb 4, 32(31)
  0499e14  stw 3, 148(31)
  0499e18  b 0x49a370
  0499e1c  lis 3, 74
  0499e20  vspltisw 2, -1
  0499e24  li 5, 24
  0499e28  addi 3, 3, -25592
  0499e2c  lis 4, 114
  0499e30  li 6, -3056
  0499e34  vslw 2, 2, 2
  0499e38  lvlx 3, 5, 3
  0499e3c  li 3, 120
  0499e40  vspltw 3, 3, 0
  0499e44  lvlx 4, 6, 4
  0499e48  vmaddfp 2, 4, 3, 2
  0499e4c  vctsxs 2, 2, 0
  0499e50  vspltw 2, 2, 0
  0499e54  stvewx 2, 3, 30
  0499e58  lwz 3, 352(1)
  0499e5c  cmpwi 3, 0
  0499e60  bt 2, 0x49a370
  0499e64  lfs 1, 20(31)
  0499e68  lfs 2, 292(1)
  0499e6c  lfs 3, 16(31)
  0499e70  fsubs 1, 1, 2
  0499e74  lfs 2, 288(1)
  0499e78  fsubs 2, 3, 2
  0499e7c  lfs 3, 24(31)
  0499e80  lfs 4, 296(1)
  0499e84  fsubs 3, 3, 4
  0499e88  fmuls 1, 1, 1
  0499e8c  fmadds 1, 2, 2, 1
  0499e90  fmadds 1, 3, 3, 1
  0499e94  fsqrts 1, 1
  0499e98  fcmpu 0, 1, 31
  0499e9c  cror 6, 1, 2
  0499ea0  bt 6, 0x49a370
  0499ea4  li 3, 0
  0499ea8  li 5, 120
  0499eac  lis 4, 74
  0499eb0  li 6, 1
  0499eb4  stw 3, 112(30)
  0499eb8  addi 4, 4, -25592
  0499ebc  li 3, 28
  0499ec0  stvewx 2, 5, 30
  0499ec4  vspltisw 2, -1
  0499ec8  lis 7, 114
  0499ecc  li 5, -3056
  0499ed0  stb 6, 188(31)
  0499ed4  lvlx 3, 3, 4
  0499ed8  vslw 2, 2, 2
  0499edc  vspltw 3, 3, 0
  0499ee0  li 3, 124
  0499ee4  lvlx 4, 5, 7
  0499ee8  li 4, 2
  0499eec  vmaddfp 2, 4, 3, 2
  0499ef0  vctsxs 2, 2, 0
  0499ef4  vspltw 2, 2, 0
  0499ef8  stvewx 2, 3, 30
  0499efc  stb 4, 32(31)
  0499f00  lwz 30, 116(30)
  0499f04  cmpwi 30, -1
  0499f08  bt 2, 0x49a370
  0499f0c  extsw 3, 30
  0499f10  li 4, 2
  0499f14  bl 0x1042ec
  0499f18  nop
  0499f1c  b 0x49a370
  0499f20  lis 3, 74
  0499f24  lis 4, 114
  0499f28  lfs 1, 112(30)
  0499f2c  addi 3, 3, -25592
  0499f30  lfs 2, 32(3)
  0499f34  lfs 3, -3048(4)
  0499f38  lis 4, 114
  0499f3c  fmadds 2, 3, 2, 1
  0499f40  stfs 2, 112(30)
  0499f44  lfs 1, 36(3)
  0499f48  lfs 3, -3052(4)
  0499f4c  fmuls 1, 3, 1
  0499f50  fcmpu 0, 2, 1
  0499f54  cror 6, 0, 2
  0499f58  bt 6, 0x499f60
  0499f5c  stfs 1, 112(30)
  0499f60  lbz 3, 188(31)
  0499f64  cmpwi 3, 1
  0499f68  cmpwi 1, 3, 2
  0499f6c  bf 2, 0x499fec
  0499f70  lis 3, 74
  0499f74  lis 4, 114
  0499f78  lfs 1, 24(31)
  0499f7c  addi 3, 3, -25592
  0499f80  lfs 2, 40(3)
  0499f84  lfs 3, -3064(4)
  0499f88  addic 3, 30, 124
  0499f8c  fmadds 1, 3, 2, 1
  0499f90  stfs 1, 24(31)
  0499f94  bl 0x4fff60
  0499f98  nop
  0499f9c  cmpwi 3, 0
  0499fa0  bt 2, 0x49a02c
  0499fa4  lis 3, 74
  0499fa8  vspltisw 2, -1
  0499fac  li 5, 28
  0499fb0  addi 3, 3, -25592
  0499fb4  lis 4, 114
  0499fb8  li 6, -3056
  0499fbc  vslw 2, 2, 2
  0499fc0  lvlx 3, 5, 3
  0499fc4  li 3, 124
  0499fc8  vspltw 3, 3, 0
  0499fcc  lvlx 4, 6, 4
  0499fd0  li 4, 2
  0499fd4  vmaddfp 2, 4, 3, 2
  0499fd8  vctsxs 2, 2, 0
  0499fdc  vspltw 2, 2, 0
  0499fe0  stvewx 2, 3, 30
  0499fe4  stb 4, 188(31)
  0499fe8  b 0x49a02c
  0499fec  bf 6, 0x49a02c
  0499ff0  lis 3, 74
  0499ff4  lis 4, 114
  0499ff8  lfs 1, 24(31)
  0499ffc  addi 3, 3, -25592
  049a000  lfs 2, 40(3)
  049a004  lfs 3, -3064(4)
  049a008  addic 3, 30, 124
  049a00c  fnmsubs 1, 3, 2, 1
  049a010  stfs 1, 24(31)
  049a014  bl 0x4fff60
  049a018  nop
  049a01c  cmpwi 3, 0
  049a020  bt 2, 0x49a02c
  049a024  li 3, 0
  049a028  stb 3, 188(31)
  049a02c  lfs 1, 292(1)
  049a030  lfs 2, 20(31)
  049a034  lfs 3, 288(1)
  049a038  fsubs 1, 1, 2
  049a03c  lfs 4, 16(31)
  049a040  lfs 5, 296(1)
  049a044  fsubs 3, 3, 4
  049a048  lfs 6, 24(31)
  049a04c  fsubs 5, 5, 6
  049a050  fmuls 7, 1, 1
  049a054  lis 3, 74
  049a058  stfs 3, 208(1)
  049a05c  stfs 1, 212(1)
  049a060  lfs 8, 300(1)
  049a064  fmadds 7, 3, 3, 7
  049a068  stfs 5, 216(1)
  049a06c  stfs 8, 220(1)
  049a070  lfs 8, 112(30)
  049a074  addi 3, 3, -25592
  049a078  fmadds 7, 5, 5, 7
  049a07c  lfs 30, 4(3)
  049a080  fsqrts 7, 7
  049a084  fdivs 8, 8, 7
  049a088  fsub 9, 30, 7
  049a08c  fsub 10, 30, 7
  049a090  fsub 11, 30, 7
  049a094  fsub 12, 7, 30
  049a098  fsub 13, 7, 30
  049a09c  fsub 7, 7, 30
  049a0a0  fmuls 3, 3, 8
  049a0a4  fmuls 1, 1, 8
  049a0a8  fmuls 5, 5, 8
  049a0ac  fsel 8, 9, 30, 3
  049a0b0  fsel 9, 10, 30, 1
  049a0b4  fsel 10, 11, 30, 5
  049a0b8  fsel 3, 12, 8, 3
  049a0bc  fsel 1, 13, 9, 1
  049a0c0  fsel 5, 7, 10, 5
  049a0c4  fadds 4, 4, 3
  049a0c8  fadds 2, 2, 1
  049a0cc  fadds 6, 6, 5
  049a0d0  stfs 3, 208(1)
  049a0d4  stfs 1, 212(1)
  049a0d8  stfs 5, 216(1)
  049a0dc  stfs 4, 16(31)
  049a0e0  stfs 2, 20(31)
  049a0e4  stfs 6, 24(31)
  049a0e8  lfs 1, 100(30)
  049a0ec  lfs 3, 96(30)
  049a0f0  fsubs 1, 2, 1
  049a0f4  fsubs 2, 4, 3
  049a0f8  lfs 3, 104(30)
  049a0fc  fsubs 3, 6, 3
  049a100  fmuls 1, 1, 1
  049a104  fmadds 1, 2, 2, 1
  049a108  lfs 2, 44(3)
  049a10c  fmadds 1, 3, 3, 1
  049a110  fsqrts 1, 1
  049a114  fcmpu 0, 1, 2
  049a118  cror 6, 0, 2
  049a11c  bt 6, 0x49a130
  049a120  ori 3, 31, 0
  049a124  bl 0xefb38
  049a128  nop
  049a12c  b 0x49a388
  049a130  lis 3, 74
  049a134  addic 28, 1, 240
  049a138  addi 29, 3, -25592
  049a13c  lis 5, 1
  049a140  addic 7, 1, 208
  049a144  ori 3, 28, 0
  049a148  ori 4, 31, 0
  049a14c  lfs 31, 16(29)
  049a150  ori 5, 5, 1
  049a154  fmr 1, 31
  049a158  bl 0x10581c
  049a15c  nop
  049a160  lfs 1, 16(31)
  049a164  addic 3, 1, 224
  049a168  lfs 2, 20(31)
  049a16c  li 5, 16
  049a170  stfs 1, 224(1)
  049a174  ori 6, 31, 0
  049a178  lfs 1, 28(31)
  049a17c  ori 7, 28, 0
  049a180  stfs 2, 228(1)
  049a184  stfs 1, 236(1)
  049a188  lfs 1, 48(29)
  049a18c  lfs 2, 24(31)
  049a190  fadds 2, 2, 1
  049a194  stfs 2, 232(1)
  049a198  bl 0x5e598
  049a19c  nop
  049a1a0  lfs 4, 16(31)
  049a1a4  cmpwi 3, 0
  049a1a8  lfs 3, 20(31)
  049a1ac  lfs 2, 24(31)
  049a1b0  lfs 1, 28(31)
  049a1b4  bt 2, 0x49a25c
  049a1b8  lis 3, 161
  049a1bc  addic 3, 3, 2368
  049a1c0  lwz 3, 24(3)
  049a1c4  cmpwi 3, 0
  049a1c8  bt 2, 0x49a25c
  049a1cc  lhz 3, 166(3)
  049a1d0  cmpwi 1, 3, 869
  049a1d4  cmpwi 3, 867
  049a1d8  cror 2, 2, 6
  049a1dc  bt 2, 0x49a25c
  049a1e0  cmpwi 3, 871
  049a1e4  bt 2, 0x49a25c
  049a1e8  lis 3, 74
  049a1ec  fmr 1, 30
  049a1f0  li 12, -1
  049a1f4  fmr 2, 30
  049a1f8  addi 6, 3, -25592
  049a1fc  fmr 4, 31
  049a200  li 7, 0
  049a204  fmr 6, 31
  049a208  li 11, 1
  049a20c  ori 3, 31, 0
  049a210  addic 4, 1, 208
  049a214  lfs 3, 8(6)
  049a218  lfs 5, 12(6)
  049a21c  li 5, 0
  049a220  lfs 7, 20(6)
  049a224  li 8, 3
  049a228  std 12, 144(1)
  049a22c  li 9, 3
  049a230  std 7, 160(1)
  049a234  li 10, 5
  049a238  std 11, 168(1)
  049a23c  std 12, 176(1)
  049a240  std 7, 184(1)
  049a244  bl 0x10e030
  049a248  nop
  049a24c  ori 3, 31, 0
  049a250  bl 0xefb38
  049a254  nop
  049a258  b 0x49a388
  049a25c  lis 3, 74
  049a260  stfs 4, 224(1)
  049a264  stfs 3, 228(1)
  049a268  li 5, 0
  049a26c  addi 3, 3, -25592
  049a270  stfs 1, 236(1)
  049a274  ori 6, 31, 0
  049a278  lfs 1, 52(3)
  049a27c  addic 3, 1, 224
  049a280  fadds 2, 2, 1
  049a284  stfs 2, 232(1)
  049a288  bl 0x59e20
  049a28c  nop
  049a290  cmpwi 3, 0
  049a294  bt 2, 0x49a2e8
  049a298  lis 3, 161
  049a29c  lfs 1, 224(1)
  049a2a0  addic 3, 3, 2368
  049a2a4  lfs 2, 228(1)
  049a2a8  lfs 3, 48(3)
  049a2ac  lfs 4, 52(3)
  049a2b0  fsubs 1, 3, 1
  049a2b4  lfs 3, 56(3)
  049a2b8  fsubs 2, 4, 2
  049a2bc  lfs 4, 232(1)
  049a2c0  fsubs 3, 3, 4
  049a2c4  lfs 4, 16(31)
  049a2c8  lfs 5, 20(31)
  049a2cc  lfs 6, 24(31)
  049a2d0  fadds 1, 4, 1
  049a2d4  fadds 2, 5, 2
  049a2d8  fadds 3, 6, 3
  049a2dc  stfs 1, 16(31)
  049a2e0  stfs 2, 20(31)
  049a2e4  stfs 3, 24(31)
  049a2e8  addic 3, 30, 120
  049a2ec  bl 0x4fff60
  049a2f0  nop
  049a2f4  cmpwi 3, 0
  049a2f8  bt 2, 0x49a370
  049a2fc  lis 3, 74
  049a300  fmr 1, 30
  049a304  li 12, -1
  049a308  fmr 2, 30
  049a30c  addi 6, 3, -25592
  049a310  fmr 4, 31
  049a314  li 7, 0
  049a318  fmr 6, 31
  049a31c  li 11, 1
  049a320  ori 3, 31, 0
  049a324  addic 4, 1, 208
  049a328  lfs 3, 8(6)
  049a32c  lfs 5, 12(6)
  049a330  li 5, 0
  049a334  lfs 7, 20(6)
  049a338  li 8, 3
  049a33c  std 12, 144(1)
  049a340  li 9, 3
  049a344  std 7, 160(1)
  049a348  li 10, 5
  049a34c  std 11, 168(1)
  049a350  std 12, 176(1)
  049a354  std 7, 184(1)
  049a358  bl 0x10e030
  049a35c  nop
  049a360  ori 3, 31, 0
  049a364  bl 0xefb38
  049a368  nop
  049a36c  b 0x49a388
  049a370  lis 3, 74
  049a374  addi 4, 3, -25592
  049a378  ori 3, 31, 0
  049a37c  lfs 1, 16(4)
  049a380  bl 0x106150
  049a384  nop
  049a388  ld 0, 448(1)
  049a38c  mtlr 0
  049a390  lfd 30, 416(1)
  049a394  lfd 31, 424(1)
  049a398  ld 28, 384(1)
  049a39c  ld 29, 392(1)
  049a3a0  ld 30, 400(1)
  049a3a4  ld 31, 408(1)
  049a3a8  addi 1, 1, 432
  049a3ac  blr

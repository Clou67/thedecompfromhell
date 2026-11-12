# game/update/moby386.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M386_00359ad0:   # 0x359ad0, 0x400 bytes
  0359ad0  stdu 1, -432(1)
  0359ad4  mflr 0
  0359ad8  std 0, 448(1)
  0359adc  stfd 21, 344(1)
  0359ae0  stfd 22, 352(1)
  0359ae4  stfd 23, 360(1)
  0359ae8  stfd 24, 368(1)
  0359aec  stfd 25, 376(1)
  0359af0  stfd 26, 384(1)
  0359af4  stfd 27, 392(1)
  0359af8  stfd 28, 400(1)
  0359afc  stfd 29, 408(1)
  0359b00  stfd 30, 416(1)
  0359b04  stfd 31, 424(1)
  0359b08  std 31, 336(1)
  0359b0c  ori 31, 3, 0
  0359b10  lis 4, 54
  0359b14  std 30, 328(1)
  0359b18  addic 3, 1, 112
  0359b1c  addi 30, 4, -25960
  0359b20  std 29, 320(1)
  0359b24  addic 4, 31, 192
  0359b28  lwz 29, 120(31)
  0359b2c  bl 0x500f6c
  0359b30  nop
  0359b34  lfs 1, 16(31)
  0359b38  lfs 2, 20(31)
  0359b3c  lis 4, 16256
  0359b40  stfs 1, 160(1)
  0359b44  li 3, 16
  0359b48  lfs 1, 24(31)
  0359b4c  stfs 2, 164(1)
  0359b50  lfs 2, 28(31)
  0359b54  stfs 1, 168(1)
  0359b58  stfs 2, 172(1)
  0359b5c  lfs 2, 8(29)
  0359b60  fadds 1, 1, 2
  0359b64  stfs 1, 168(1)
  0359b68  lfs 1, 0(30)
  0359b6c  stw 4, 172(1)
  0359b70  fmr 31, 1
  0359b74  bl 0x685c4
  0359b78  nop
  0359b7c  std 3, 296(1)
  0359b80  li 3, 0
  0359b84  lis 9, 0
  0359b88  li 4, 0
  0359b8c  li 5, 1
  0359b90  li 6, 1
  0359b94  li 7, 1
  0359b98  li 8, 0
  0359b9c  ori 9, 9, 65424
  0359ba0  bl 0x502fd4
  0359ba4  nop
  0359ba8  std 3, 304(1)
  0359bac  li 4, 0
  0359bb0  li 3, 0
  0359bb4  li 5, 0
  0359bb8  li 6, 0
  0359bbc  li 7, 0
  0359bc0  li 8, 0
  0359bc4  bl 0x502f08
  0359bc8  nop
  0359bcc  std 3, 288(1)
  0359bd0  lis 3, 268
  0359bd4  lis 4, 268
  0359bd8  lis 5, 132
  0359bdc  lis 6, 132
  0359be0  li 7, 128
  0359be4  lwz 8, 20760(3)
  0359be8  lwz 3, 20756(4)
  0359bec  lwz 4, 2064(5)
  0359bf0  lwz 6, 2068(6)
  0359bf4  ori 5, 8, 0
  0359bf8  bl 0x502ea8
  0359bfc  nop
  0359c00  std 3, 312(1)
  0359c04  lfs 21, 4(30)
  0359c08  lfs 1, 0(29)
  0359c0c  lfs 22, 8(30)
  0359c10  fsubs 2, 21, 1
  0359c14  fsubs 3, 22, 1
  0359c18  lfs 23, 12(30)
  0359c1c  lfs 24, 16(30)
  0359c20  lfs 25, 20(30)
  0359c24  lis 3, 132
  0359c28  lfs 26, 24(30)
  0359c2c  lis 4, 132
  0359c30  fsub 4, 1, 2
  0359c34  fsel 1, 4, 2, 1
  0359c38  lfs 4, 28(30)
  0359c3c  lwz 3, 2072(3)
  0359c40  lwz 4, 2076(4)
  0359c44  extsw 3, 3
  0359c48  extsw 4, 4
  0359c4c  fsub 2, 3, 1
  0359c50  fsel 1, 2, 3, 1
  0359c54  fmuls 2, 1, 1
  0359c58  fmuls 3, 2, 1
  0359c5c  fmuls 5, 2, 3
  0359c60  fmadds 1, 3, 23, 1
  0359c64  fmuls 3, 2, 5
  0359c68  fmadds 1, 5, 24, 1
  0359c6c  fmuls 2, 2, 3
  0359c70  fmadds 1, 3, 25, 1
  0359c74  fmadds 1, 2, 26, 1
  0359c78  fadds 1, 1, 31
  0359c7c  fmuls 1, 1, 4
  0359c80  bl 0x5027bc
  0359c84  nop
  0359c88  ori 7, 3, 0
  0359c8c  lis 3, 132
  0359c90  li 8, 4
  0359c94  addic 4, 1, 176
  0359c98  addic 3, 3, 2096
  0359c9c  ori 6, 1, 0
  0359ca0  ori 5, 1, 0
  0359ca4  mtctr 8
  0359ca8  lis 8, 16128
  0359cac  stw 8, 256(6)
  0359cb0  stw 8, 260(6)
  0359cb4  stw 7, 240(5)
  0359cb8  lfs 1, 0(3)
  0359cbc  addic 6, 6, 8
  0359cc0  addic 5, 5, 4
  0359cc4  stfs 1, 0(4)
  0359cc8  lfs 1, 4(3)
  0359ccc  stfs 1, 4(4)
  0359cd0  lfs 1, 8(3)
  0359cd4  stfs 1, 8(4)
  0359cd8  lfs 1, 12(3)
  0359cdc  addic 3, 3, 16
  0359ce0  stfs 1, 12(4)
  0359ce4  addic 4, 4, 16
  0359ce8  bdnz 0x359ca8
  0359cec  lis 3, 54
  0359cf0  lis 30, 161
  0359cf4  addi 3, 3, -25960
  0359cf8  addic 30, 30, 24396
  0359cfc  lfs 1, 32(3)
  0359d00  lfs 27, 36(3)
  0359d04  lfs 29, 40(3)
  0359d08  lfs 30, 44(3)
  0359d0c  lfs 31, 48(3)
  0359d10  fadds 28, 1, 29
  0359d14  lbz 3, 188(31)
  0359d18  stfs 1, 212(1)
  0359d1c  clrlwi 3, 3, 31
  0359d20  stfs 1, 180(1)
  0359d24  cmpwi 3, 0
  0359d28  stfs 28, 228(1)
  0359d2c  stfs 28, 196(1)
  0359d30  bt 2, 0x359dd0
  0359d34  lis 3, 132
  0359d38  lfs 2, 2080(3)
  0359d3c  fmadds 1, 2, 1, 30
  0359d40  fsubs 2, 21, 1
  0359d44  fsubs 3, 22, 1
  0359d48  fsub 4, 1, 2
  0359d4c  fsel 1, 4, 2, 1
  0359d50  fsub 2, 3, 1
  0359d54  fsel 1, 2, 3, 1
  0359d58  fmuls 2, 1, 1
  0359d5c  fmuls 3, 2, 1
  0359d60  fmuls 4, 2, 3
  0359d64  fmadds 1, 3, 23, 1
  0359d68  fmuls 3, 2, 4
  0359d6c  fmadds 1, 4, 24, 1
  0359d70  fmuls 2, 2, 3
  0359d74  fmadds 1, 3, 25, 1
  0359d78  fmadds 1, 2, 26, 1
  0359d7c  fsubs 1, 31, 1
  0359d80  stfs 1, 184(1)
  0359d84  lfs 1, 2080(3)
  0359d88  fmadds 1, 28, 1, 30
  0359d8c  fsubs 2, 21, 1
  0359d90  fsubs 3, 22, 1
  0359d94  fsub 4, 1, 2
  0359d98  fsel 1, 4, 2, 1
  0359d9c  fsub 2, 3, 1
  0359da0  fsel 1, 2, 3, 1
  0359da4  fmuls 2, 1, 1
  0359da8  fmuls 3, 2, 1
  0359dac  fmuls 4, 2, 3
  0359db0  fmadds 1, 3, 23, 1
  0359db4  fmuls 3, 2, 4
  0359db8  fmadds 1, 4, 24, 1
  0359dbc  fmuls 2, 2, 3
  0359dc0  fmadds 1, 3, 25, 1
  0359dc4  fmadds 1, 2, 26, 1
  0359dc8  fsubs 1, 31, 1
  0359dcc  b 0x359e5c
  0359dd0  lis 3, 132
  0359dd4  lfs 2, 2080(3)
  0359dd8  fmadds 1, 2, 1, 30
  0359ddc  fmadds 2, 28, 2, 30
  0359de0  fsubs 3, 21, 1
  0359de4  fsubs 5, 21, 2
  0359de8  fsubs 4, 22, 1
  0359dec  fsubs 6, 22, 2
  0359df0  fsub 7, 1, 3
  0359df4  fsub 8, 2, 5
  0359df8  fsel 1, 7, 3, 1
  0359dfc  fsel 2, 8, 5, 2
  0359e00  fsub 3, 4, 1
  0359e04  fsub 5, 6, 2
  0359e08  fsel 1, 3, 4, 1
  0359e0c  fsel 2, 5, 6, 2
  0359e10  fmuls 3, 1, 1
  0359e14  fmuls 4, 2, 2
  0359e18  fmuls 5, 3, 1
  0359e1c  fmuls 6, 4, 2
  0359e20  fmuls 7, 3, 5
  0359e24  fmadds 1, 5, 23, 1
  0359e28  fmuls 5, 4, 6
  0359e2c  fmadds 2, 6, 23, 2
  0359e30  fmuls 6, 3, 7
  0359e34  fmadds 1, 7, 24, 1
  0359e38  fmuls 7, 4, 5
  0359e3c  fmadds 2, 5, 24, 2
  0359e40  fmuls 3, 3, 6
  0359e44  fmadds 1, 6, 25, 1
  0359e48  fmuls 4, 4, 7
  0359e4c  fmadds 2, 7, 25, 2
  0359e50  fmadds 3, 3, 26, 1
  0359e54  fmadds 1, 4, 26, 2
  0359e58  stfs 3, 184(1)
  0359e5c  lwz 6, 28(30)
  0359e60  stfs 1, 200(1)
  0359e64  addic 4, 1, 112
  0359e68  addic 3, 1, 176
  0359e6c  li 5, 0
  0359e70  li 7, 9
  0359e74  bl 0x72280
  0359e78  nop
  0359e7c  fmr 1, 28
  0359e80  fcmpu 0, 1, 27
  0359e84  bt 0, 0x359d10
  0359e88  ld 0, 448(1)
  0359e8c  mtlr 0
  0359e90  lfd 21, 344(1)
  0359e94  lfd 22, 352(1)
  0359e98  lfd 23, 360(1)
  0359e9c  lfd 24, 368(1)
  0359ea0  lfd 25, 376(1)
  0359ea4  lfd 26, 384(1)
  0359ea8  lfd 27, 392(1)
  0359eac  lfd 28, 400(1)
  0359eb0  lfd 29, 408(1)
  0359eb4  lfd 30, 416(1)
  0359eb8  lfd 31, 424(1)
  0359ebc  ld 29, 320(1)
  0359ec0  ld 30, 328(1)
  0359ec4  ld 31, 336(1)
  0359ec8  addi 1, 1, 432
  0359ecc  blr

M386_00359f28:   # 0x359f28, 0x4d0 bytes
  0359f28  stdu 1, -368(1)
  0359f2c  mflr 0
  0359f30  std 0, 384(1)
  0359f34  stfd 17, 248(1)
  0359f38  stfd 18, 256(1)
  0359f3c  stfd 19, 264(1)
  0359f40  stfd 20, 272(1)
  0359f44  stfd 21, 280(1)
  0359f48  stfd 22, 288(1)
  0359f4c  stfd 23, 296(1)
  0359f50  stfd 24, 304(1)
  0359f54  stfd 25, 312(1)
  0359f58  stfd 26, 320(1)
  0359f5c  stfd 27, 328(1)
  0359f60  stfd 28, 336(1)
  0359f64  stfd 29, 344(1)
  0359f68  stfd 30, 352(1)
  0359f6c  stfd 31, 360(1)
  0359f70  addi 0, 1, 128
  0359f74  stvx 29, 0, 0
  0359f78  addic 0, 0, 16
  0359f7c  stvx 30, 0, 0
  0359f80  addic 0, 0, 16
  0359f84  stvx 31, 0, 0
  0359f88  std 31, 240(1)
  0359f8c  std 24, 184(1)
  0359f90  ori 31, 3, 0
  0359f94  lis 3, 54
  0359f98  std 29, 224(1)
  0359f9c  addi 24, 3, -24880
  0359fa0  lwz 29, 120(31)
  0359fa4  lfs 2, 0(24)
  0359fa8  std 30, 232(1)
  0359fac  std 28, 216(1)
  0359fb0  std 27, 208(1)
  0359fb4  std 26, 200(1)
  0359fb8  std 25, 192(1)
  0359fbc  lfs 1, 480(29)
  0359fc0  bl 0x502578
  0359fc4  nop
  0359fc8  stfs 1, 480(29)
  0359fcc  lfs 1, 484(29)
  0359fd0  lfs 2, 4(24)
  0359fd4  bl 0x5025e0
  0359fd8  nop
  0359fdc  stfs 1, 484(29)
  0359fe0  lfs 1, 488(29)
  0359fe4  lfs 2, 8(24)
  0359fe8  bl 0x502578
  0359fec  nop
  0359ff0  stfs 1, 488(29)
  0359ff4  li 3, 10
  0359ff8  bl 0x502730
  0359ffc  nop
  035a000  lfs 23, 12(24)
  035a004  lfs 2, 16(24)
  035a008  fmuls 1, 1, 23
  035a00c  lfs 3, 20(24)
  035a010  li 3, 60
  035a014  lfs 24, 24(24)
  035a018  li 25, 0
  035a01c  lfs 25, 28(24)
  035a020  addic 28, 29, 8
  035a024  lfs 26, 32(24)
  035a028  ori 30, 25, 0
  035a02c  lfs 27, 36(24)
  035a030  addic 26, 29, 4
  035a034  lfs 28, 40(24)
  035a038  addic 27, 29, 12
  035a03c  lfs 29, 44(24)
  035a040  fdivs 21, 2, 1
  035a044  lfs 22, 48(24)
  035a048  lfs 30, 52(24)
  035a04c  lfs 31, 56(24)
  035a050  vspltisw 30, 0
  035a054  fmr 1, 3
  035a058  lvlx 31, 3, 24
  035a05c  vspltw 31, 31, 0
  035a060  fmuls 21, 21, 1
  035a064  ori 3, 25, 0
  035a068  bl 0x502730
  035a06c  nop
  035a070  li 3, 10
  035a074  bl 0x502730
  035a078  nop
  035a07c  cmpwi 25, 0
  035a080  fmr 1, 30
  035a084  bt 2, 0x35a0fc
  035a088  extsw 3, 25
  035a08c  std 3, 112(1)
  035a090  lfs 1, 480(29)
  035a094  lfd 2, 112(1)
  035a098  fcfid 2, 2
  035a09c  frsp 2, 2
  035a0a0  fmadds 1, 2, 21, 1
  035a0a4  bl 0x10de78
  035a0a8  nop
  035a0ac  fsubs 2, 24, 1
  035a0b0  fsubs 3, 25, 1
  035a0b4  fsub 4, 1, 2
  035a0b8  fsel 1, 4, 2, 1
  035a0bc  fsub 2, 3, 1
  035a0c0  fsel 3, 2, 3, 1
  035a0c4  fmr 1, 30
  035a0c8  fmr 2, 31
  035a0cc  fmuls 4, 3, 3
  035a0d0  fmuls 5, 4, 3
  035a0d4  fmuls 6, 4, 5
  035a0d8  fmadds 3, 5, 26, 3
  035a0dc  fmuls 5, 4, 6
  035a0e0  fmadds 3, 6, 27, 3
  035a0e4  fmuls 4, 4, 5
  035a0e8  fmadds 3, 5, 28, 3
  035a0ec  fmadds 20, 4, 29, 3
  035a0f0  bl 0xfe4f0
  035a0f4  nop
  035a0f8  fmadds 1, 20, 22, 1
  035a0fc  li 3, 496
  035a100  vcfsx 2, 30, 0
  035a104  slwi 5, 25, 4
  035a108  addi 4, 3, 16
  035a10c  extsw 7, 5
  035a110  addic 25, 25, 1
  035a114  lvlx 3, 3, 29
  035a118  lis 6, 16256
  035a11c  addc 3, 5, 28
  035a120  lvrx 4, 4, 29
  035a124  clrldi 3, 3, 32
  035a128  vor 3, 3, 4
  035a12c  addc 4, 5, 26
  035a130  extsw 25, 25
  035a134  clrldi 4, 4, 32
  035a138  vmaddfp 2, 3, 2, 31
  035a13c  stfs 1, 0(3)
  035a140  cmpwi 25, 5
  035a144  addc 3, 5, 27
  035a148  vspltisw 3, 1
  035a14c  clrldi 3, 3, 32
  035a150  stw 30, 0(4)
  035a154  vadduwm 30, 30, 3
  035a158  vspltw 2, 2, 0
  035a15c  stvewx 2, 7, 29
  035a160  stw 6, 0(3)
  035a164  bt 0, 0x35a064
  035a168  li 4, 5
  035a16c  addic 3, 29, 80
  035a170  vspltisw 2, 5
  035a174  mtctr 4
  035a178  li 5, 496
  035a17c  vcfsx 3, 2, 0
  035a180  subfic 7, 4, 9
  035a184  addi 6, 5, 16
  035a188  addic 4, 4, 1
  035a18c  lvlx 4, 5, 29
  035a190  sldi 5, 7, 4
  035a194  lvrx 5, 6, 29
  035a198  addc 5, 5, 28
  035a19c  vor 4, 4, 5
  035a1a0  lis 6, 16256
  035a1a4  clrldi 5, 5, 32
  035a1a8  stw 30, 4(3)
  035a1ac  vmaddfp 3, 4, 3, 31
  035a1b0  vspltisw 4, 1
  035a1b4  lfs 1, 0(5)
  035a1b8  stfs 1, 8(3)
  035a1bc  vadduwm 2, 2, 4
  035a1c0  vspltw 3, 3, 0
  035a1c4  stvewx 3, 0, 3
  035a1c8  stw 6, 12(3)
  035a1cc  addic 3, 3, 16
  035a1d0  bdnz 0x35a178
  035a1d4  lis 3, 54
  035a1d8  vspltisw 31, 0
  035a1dc  li 4, 80
  035a1e0  addi 3, 3, -24880
  035a1e4  ori 27, 29, 0
  035a1e8  ori 26, 30, 0
  035a1ec  addic 28, 27, 160
  035a1f0  lfs 19, 64(3)
  035a1f4  lfs 20, 68(3)
  035a1f8  lfs 21, 72(3)
  035a1fc  lfs 22, 76(3)
  035a200  lvlx 30, 4, 3
  035a204  vspltw 30, 30, 0
  035a208  extsw 3, 26
  035a20c  vcfsx 29, 31, 0
  035a210  std 3, 112(1)
  035a214  stw 30, 168(27)
  035a218  lfs 1, 484(29)
  035a21c  lfd 2, 112(1)
  035a220  fcfid 2, 2
  035a224  frsp 18, 2
  035a228  fmadds 1, 18, 19, 1
  035a22c  bl 0x10de78
  035a230  nop
  035a234  lfs 2, 488(29)
  035a238  fmr 17, 1
  035a23c  fmadds 1, 18, 20, 2
  035a240  bl 0x10de78
  035a244  nop
  035a248  fsubs 2, 24, 1
  035a24c  fsubs 3, 25, 1
  035a250  fsub 4, 1, 2
  035a254  fsel 1, 4, 2, 1
  035a258  fsub 2, 3, 1
  035a25c  fsel 3, 2, 3, 1
  035a260  fmr 2, 31
  035a264  fmr 1, 30
  035a268  fmuls 4, 3, 3
  035a26c  fmuls 5, 4, 3
  035a270  fmuls 6, 4, 5
  035a274  fmadds 3, 5, 26, 3
  035a278  fmuls 5, 4, 6
  035a27c  fmadds 3, 6, 27, 3
  035a280  fmuls 4, 4, 5
  035a284  fmadds 3, 5, 28, 3
  035a288  fmadds 3, 4, 29, 3
  035a28c  fmuls 18, 3, 21
  035a290  bl 0xfe4f0
  035a294  nop
  035a298  fsubs 2, 24, 17
  035a29c  fadds 3, 17, 22
  035a2a0  fsubs 4, 25, 17
  035a2a4  vspltisw 2, -1
  035a2a8  lis 3, 16256
  035a2ac  vspltisw 3, 1
  035a2b0  addic 26, 26, 1
  035a2b4  fsub 5, 17, 2
  035a2b8  fsubs 6, 24, 3
  035a2bc  fsubs 7, 25, 3
  035a2c0  vslw 2, 2, 2
  035a2c4  cmpwi 26, 19
  035a2c8  vadduwm 31, 31, 3
  035a2cc  vmaddfp 2, 29, 30, 2
  035a2d0  fsel 2, 5, 2, 17
  035a2d4  fsub 5, 3, 6
  035a2d8  fsub 8, 4, 2
  035a2dc  fsel 3, 5, 6, 3
  035a2e0  fsel 2, 8, 4, 2
  035a2e4  fsub 4, 7, 3
  035a2e8  fmuls 5, 2, 2
  035a2ec  fsel 3, 4, 7, 3
  035a2f0  lfs 4, 168(27)
  035a2f4  stvewx 2, 0, 28
  035a2f8  stw 3, 172(27)
  035a2fc  addic 28, 28, 16
  035a300  fmuls 6, 5, 2
  035a304  fmuls 7, 3, 3
  035a308  fmuls 8, 5, 6
  035a30c  fmadds 2, 6, 26, 2
  035a310  fmuls 6, 7, 3
  035a314  fmuls 9, 5, 8
  035a318  fmadds 2, 8, 27, 2
  035a31c  fmuls 8, 7, 6
  035a320  fmadds 3, 6, 26, 3
  035a324  fmuls 5, 5, 9
  035a328  fmadds 2, 9, 28, 2
  035a32c  fmuls 6, 7, 8
  035a330  fmadds 3, 8, 27, 3
  035a334  fmadds 2, 5, 29, 2
  035a338  fmuls 5, 7, 6
  035a33c  fmadds 3, 6, 28, 3
  035a340  fmadds 1, 18, 2, 1
  035a344  fmadds 2, 5, 29, 3
  035a348  fadds 1, 1, 4
  035a34c  fmuls 2, 2, 23
  035a350  stfs 1, 168(27)
  035a354  stfs 2, 164(27)
  035a358  addic 27, 27, 16
  035a35c  bt 0, 0x35a208
  035a360  lis 3, 113
  035a364  ori 4, 31, 0
  035a368  addic 3, 3, -14664
  035a36c  bl 0x6d7e0
  035a370  nop
  035a374  li 0, 128
  035a378  lvx 29, 1, 0
  035a37c  addic 0, 0, 16
  035a380  lvx 30, 1, 0
  035a384  addic 0, 0, 16
  035a388  lvx 31, 1, 0
  035a38c  ld 0, 384(1)
  035a390  mtlr 0
  035a394  lfd 17, 248(1)
  035a398  lfd 18, 256(1)
  035a39c  lfd 19, 264(1)
  035a3a0  lfd 20, 272(1)
  035a3a4  lfd 21, 280(1)
  035a3a8  lfd 22, 288(1)
  035a3ac  lfd 23, 296(1)
  035a3b0  lfd 24, 304(1)
  035a3b4  lfd 25, 312(1)
  035a3b8  lfd 26, 320(1)
  035a3bc  lfd 27, 328(1)
  035a3c0  lfd 28, 336(1)
  035a3c4  lfd 29, 344(1)
  035a3c8  lfd 30, 352(1)
  035a3cc  lfd 31, 360(1)
  035a3d0  ld 24, 184(1)
  035a3d4  ld 25, 192(1)
  035a3d8  ld 26, 200(1)
  035a3dc  ld 27, 208(1)
  035a3e0  ld 28, 216(1)
  035a3e4  ld 29, 224(1)
  035a3e8  ld 30, 232(1)
  035a3ec  ld 31, 240(1)
  035a3f0  addi 1, 1, 368
  035a3f4  blr

M386_0035a450:   # 0x35a450, 0x10c bytes
  035a450  stdu 1, -192(1)
  035a454  mflr 0
  035a458  std 0, 208(1)
  035a45c  std 31, 184(1)
  035a460  std 30, 176(1)
  035a464  ori 31, 3, 0
  035a468  lis 30, 151
  035a46c  addic 30, 30, -25376
  035a470  lwz 4, 120(31)
  035a474  addic 3, 30, 128
  035a478  lwz 4, 512(4)
  035a47c  extsw 4, 4
  035a480  bl 0x110b70
  035a484  nop
  035a488  cmpwi 3, 0
  035a48c  bt 2, 0x35a544
  035a490  li 3, 144
  035a494  vspltisw 4, -16
  035a498  li 5, 166
  035a49c  vspltisw 8, 1
  035a4a0  lis 7, 54
  035a4a4  li 4, 0
  035a4a8  li 6, 16
  035a4ac  lvx 2, 3, 1
  035a4b0  addi 3, 7, -23552
  035a4b4  lvlx 3, 5, 31
  035a4b8  stw 4, 8872(30)
  035a4bc  li 5, 48
  035a4c0  li 4, 32
  035a4c4  vsrw 3, 3, 4
  035a4c8  li 7, 64
  035a4cc  li 8, 80
  035a4d0  lvx 5, 6, 3
  035a4d4  stw 31, 160(1)
  035a4d8  stw 31, 164(1)
  035a4dc  li 6, 64
  035a4e0  stw 31, 168(1)
  035a4e4  stw 31, 172(1)
  035a4e8  lvx 4, 0, 3
  035a4ec  lvx 6, 4, 3
  035a4f0  lvx 7, 5, 3
  035a4f4  li 5, 96
  035a4f8  li 0, 160
  035a4fc  lvx 9, 6, 3
  035a500  lwz 4, 8320(30)
  035a504  vperm 2, 8, 2, 9
  035a508  ori 3, 4, 0
  035a50c  lvx 8, 1, 0
  035a510  stvx 4, 7, 1
  035a514  vperm 3, 8, 3, 6
  035a518  stvx 2, 5, 1
  035a51c  ld 5, 64(1)
  035a520  ld 6, 72(1)
  035a524  vperm 2, 3, 5, 7
  035a528  ld 9, 96(1)
  035a52c  stvx 2, 8, 1
  035a530  ld 7, 80(1)
  035a534  ld 8, 88(1)
  035a538  ld 10, 104(1)
  035a53c  bl 0x105ab4
  035a540  nop
  035a544  ld 0, 208(1)
  035a548  mtlr 0
  035a54c  ld 30, 176(1)
  035a550  ld 31, 184(1)
  035a554  addi 1, 1, 192
  035a558  blr

M386_0035a560:   # 0x35a560, 0xcc bytes
  035a560  li 4, 10
  035a564  lwz 5, 120(3)
  035a568  li 6, 496
  035a56c  vspltisw 3, 0
  035a570  mtctr 4
  035a574  vspltisw 2, 1
  035a578  li 4, 0
  035a57c  lis 3, 16256
  035a580  ori 7, 5, 0
  035a584  vcfsx 4, 3, 0
  035a588  addi 8, 6, 16
  035a58c  vspltisw 5, -1
  035a590  lvlx 6, 6, 5
  035a594  vadduwm 3, 3, 2
  035a598  vslw 5, 5, 5
  035a59c  lvrx 7, 8, 5
  035a5a0  vor 6, 6, 7
  035a5a4  vmaddfp 4, 6, 4, 5
  035a5a8  vspltw 4, 4, 0
  035a5ac  stvewx 4, 0, 7
  035a5b0  stw 4, 8(7)
  035a5b4  stw 4, 4(7)
  035a5b8  stw 3, 12(7)
  035a5bc  addic 7, 7, 16
  035a5c0  bdnz 0x35a584
  035a5c4  lis 6, 54
  035a5c8  ori 7, 5, 0
  035a5cc  vspltisw 3, 0
  035a5d0  addi 8, 6, -23204
  035a5d4  li 9, 20
  035a5d8  addic 6, 7, 160
  035a5dc  mtctr 9
  035a5e0  lvlx 4, 0, 8
  035a5e4  vspltw 4, 4, 0
  035a5e8  vcfsx 5, 3, 0
  035a5ec  vspltisw 6, -1
  035a5f0  vadduwm 3, 3, 2
  035a5f4  vslw 6, 6, 6
  035a5f8  vmaddfp 5, 5, 4, 6
  035a5fc  stvewx 5, 0, 6
  035a600  stw 4, 168(7)
  035a604  addic 6, 6, 16
  035a608  stw 4, 164(7)
  035a60c  stw 3, 172(7)
  035a610  addic 7, 7, 16
  035a614  bdnz 0x35a5e8
  035a618  stw 4, 480(5)
  035a61c  stw 4, 484(5)
  035a620  stw 4, 488(5)
  035a624  stw 4, 492(5)
  035a628  blr

UpdateMoby_386:   # 0x35a6b8, 0x3dc bytes
  035a6b8  stdu 1, -224(1)
  035a6bc  mflr 0
  035a6c0  std 0, 240(1)
  035a6c4  std 30, 208(1)
  035a6c8  lbz 4, 32(3)
  035a6cc  std 31, 216(1)
  035a6d0  lwz 30, 120(3)
  035a6d4  ori 31, 3, 0
  035a6d8  lfs 2, 16(3)
  035a6dc  cmpwi 4, 0
  035a6e0  cmpwi 1, 4, 1
  035a6e4  lfs 1, 20(3)
  035a6e8  std 29, 200(1)
  035a6ec  cmpwi 6, 4, -1
  035a6f0  bt 1, 0x35a6fc
  035a6f4  bf 25, 0x35aa18
  035a6f8  b 0x35a704
  035a6fc  bf 5, 0x35a770
  035a700  b 0x35aa18
  035a704  lwz 3, 500(30)
  035a708  cmpwi 3, -1
  035a70c  bt 2, 0x35a728
  035a710  lwz 3, 504(30)
  035a714  cmpwi 3, -1
  035a718  bt 2, 0x35a728
  035a71c  lwz 3, 508(30)
  035a720  cmpwi 3, -1
  035a724  bf 2, 0x35a738
  035a728  ori 3, 31, 0
  035a72c  bl 0xefb38
  035a730  nop
  035a734  b 0x35aa78
  035a738  lwz 3, 512(30)
  035a73c  cmpwi 3, 0
  035a740  bf 0, 0x35a754
  035a744  ori 3, 31, 0
  035a748  bl 0xefb38
  035a74c  nop
  035a750  b 0x35aa78
  035a754  ori 3, 31, 0
  035a758  bl 0x35a560
  035a75c  li 3, 1
  035a760  li 4, -1
  035a764  stb 3, 32(31)
  035a768  stw 4, 516(30)
  035a76c  b 0x35aa18
  035a770  lis 29, 151
  035a774  addic 29, 29, -25376
  035a778  lwz 3, 8332(29)
  035a77c  cmpwi 3, 15
  035a780  bf 2, 0x35a7e4
  035a784  lis 3, 162
  035a788  lwz 4, 500(30)
  035a78c  slwi 5, 4, 5
  035a790  lwz 3, -22436(3)
  035a794  lwz 4, 1376(29)
  035a798  addc 5, 3, 5
  035a79c  clrldi 5, 5, 32
  035a7a0  lwz 5, 16(5)
  035a7a4  cmpw 4, 5
  035a7a8  bt 2, 0x35a818
  035a7ac  lwz 5, 504(30)
  035a7b0  slwi 5, 5, 5
  035a7b4  addc 5, 3, 5
  035a7b8  clrldi 5, 5, 32
  035a7bc  lwz 5, 16(5)
  035a7c0  cmpw 4, 5
  035a7c4  bt 2, 0x35a818
  035a7c8  lwz 5, 508(30)
  035a7cc  slwi 5, 5, 5
  035a7d0  addc 3, 3, 5
  035a7d4  clrldi 3, 3, 32
  035a7d8  lwz 3, 16(3)
  035a7dc  cmpw 4, 3
  035a7e0  bt 2, 0x35a818
  035a7e4  lfs 3, 128(29)
  035a7e8  lis 3, 54
  035a7ec  fsubs 3, 3, 2
  035a7f0  addi 3, 3, -22992
  035a7f4  lfs 2, 0(3)
  035a7f8  fabs 3, 3
  035a7fc  fcmpu 0, 3, 2
  035a800  bt 1, 0x35aa18
  035a804  lfs 3, 132(29)
  035a808  fsubs 1, 3, 1
  035a80c  fabs 1, 1
  035a810  fcmpu 0, 1, 2
  035a814  bt 1, 0x35aa18
  035a818  ori 3, 31, 0
  035a81c  lwz 4, 516(30)
  035a820  extsw 4, 4
  035a824  bl 0x15cc7c
  035a828  nop
  035a82c  cmpwi 3, 0
  035a830  bf 2, 0x35a850
  035a834  li 3, 6
  035a838  li 4, 4
  035a83c  ori 5, 31, 0
  035a840  li 6, 211
  035a844  bl 0x15d204
  035a848  nop
  035a84c  stw 3, 516(30)
  035a850  lwz 4, 120(31)
  035a854  addic 3, 29, 128
  035a858  lwz 4, 512(4)
  035a85c  extsw 4, 4
  035a860  bl 0x110b70
  035a864  nop
  035a868  cmpwi 3, 0
  035a86c  bt 2, 0x35a924
  035a870  li 3, 0
  035a874  vspltisw 4, -16
  035a878  lis 5, 54
  035a87c  vspltisw 8, 1
  035a880  li 4, 32
  035a884  addi 5, 5, -22992
  035a888  stw 3, 8872(29)
  035a88c  li 6, 160
  035a890  li 3, 166
  035a894  li 7, 80
  035a898  li 8, 64
  035a89c  lvx 2, 4, 5
  035a8a0  stw 31, 176(1)
  035a8a4  li 4, 16
  035a8a8  lvlx 3, 3, 31
  035a8ac  li 3, 48
  035a8b0  lvx 5, 6, 1
  035a8b4  stw 31, 180(1)
  035a8b8  li 6, 64
  035a8bc  stw 31, 184(1)
  035a8c0  vsrw 3, 3, 4
  035a8c4  stw 31, 188(1)
  035a8c8  lvx 4, 3, 5
  035a8cc  lvx 6, 4, 5
  035a8d0  lwz 3, 8320(29)
  035a8d4  li 4, 80
  035a8d8  lvx 7, 6, 5
  035a8dc  li 6, 96
  035a8e0  li 0, 176
  035a8e4  lvx 9, 7, 5
  035a8e8  vperm 5, 8, 5, 9
  035a8ec  lvx 8, 1, 0
  035a8f0  stvx 6, 8, 1
  035a8f4  vperm 3, 8, 3, 4
  035a8f8  stvx 5, 6, 1
  035a8fc  ld 5, 64(1)
  035a900  ld 6, 72(1)
  035a904  vperm 2, 3, 2, 7
  035a908  ld 9, 96(1)
  035a90c  ld 10, 104(1)
  035a910  stvx 2, 4, 1
  035a914  ld 7, 80(1)
  035a918  ld 8, 88(1)
  035a91c  bl 0x105ab4
  035a920  nop
  035a924  lis 3, 54
  035a928  lfs 1, 72(31)
  035a92c  addi 4, 3, -22992
  035a930  lfs 2, 96(4)
  035a934  lfs 3, 100(4)
  035a938  fadds 2, 1, 2
  035a93c  lfs 4, 104(4)
  035a940  fsubs 5, 3, 1
  035a944  lis 3, 16528
  035a948  fsubs 3, 3, 2
  035a94c  fsub 7, 1, 5
  035a950  fsubs 6, 4, 2
  035a954  fsubs 4, 4, 1
  035a958  fsub 8, 2, 3
  035a95c  fsel 1, 7, 5, 1
  035a960  fsel 2, 8, 3, 2
  035a964  fsub 5, 4, 1
  035a968  lfs 3, 108(4)
  035a96c  fsub 7, 6, 2
  035a970  fsel 1, 5, 4, 1
  035a974  lfs 4, 112(4)
  035a978  lfs 5, 116(4)
  035a97c  lfs 8, 120(4)
  035a980  fsel 2, 7, 6, 2
  035a984  fmuls 6, 1, 1
  035a988  fmuls 7, 2, 2
  035a98c  fmuls 9, 6, 1
  035a990  fmuls 10, 7, 2
  035a994  fmuls 11, 6, 9
  035a998  fmadds 1, 9, 3, 1
  035a99c  lfs 9, 124(4)
  035a9a0  fmuls 12, 7, 10
  035a9a4  fmadds 2, 10, 3, 2
  035a9a8  fmuls 3, 6, 11
  035a9ac  fmadds 1, 11, 4, 1
  035a9b0  fmuls 10, 7, 12
  035a9b4  fmadds 2, 12, 4, 2
  035a9b8  fmuls 4, 6, 3
  035a9bc  fmadds 1, 3, 5, 1
  035a9c0  lfs 3, 16(31)
  035a9c4  fmuls 6, 7, 10
  035a9c8  fmadds 2, 10, 5, 2
  035a9cc  lfs 5, 20(31)
  035a9d0  fmadds 1, 4, 8, 1
  035a9d4  lfs 4, 24(31)
  035a9d8  stfs 4, 120(1)
  035a9dc  stw 3, 124(1)
  035a9e0  addic 3, 1, 112
  035a9e4  fmadds 2, 6, 8, 2
  035a9e8  fmadds 1, 1, 9, 5
  035a9ec  fmadds 2, 2, 9, 3
  035a9f0  stfs 1, 116(1)
  035a9f4  stfs 2, 112(1)
  035a9f8  lfs 1, 128(4)
  035a9fc  bl 0x502910
  035aa00  nop
  035aa04  cmpwi 3, 0
  035aa08  bt 0, 0x35aa78
  035aa0c  ori 3, 31, 0
  035aa10  bl 0x359f28
  035aa14  b 0x35aa78
  035aa18  lwz 4, 516(30)
  035aa1c  cmpwi 4, 0
  035aa20  cmpwi 1, 4, -1
  035aa24  bt 0, 0x35aa78
  035aa28  bt 6, 0x35aa70
  035aa2c  sldi 3, 4, 7
  035aa30  sldi 6, 4, 4
  035aa34  lis 5, 150
  035aa38  subc 3, 3, 6
  035aa3c  addic 5, 5, 14312
  035aa40  extsw 3, 3
  035aa44  lwzx 5, 5, 3
  035aa48  cmpw 5, 31
  035aa4c  bf 2, 0x35aa70
  035aa50  lis 5, 150
  035aa54  addic 5, 5, 14292
  035aa58  lbzx 3, 5, 3
  035aa5c  cmpwi 3, 0
  035aa60  bt 2, 0x35aa70
  035aa64  extsw 3, 4
  035aa68  bl 0x15cdb0
  035aa6c  nop
  035aa70  li 3, -1
  035aa74  stw 3, 516(30)
  035aa78  ld 0, 240(1)
  035aa7c  mtlr 0
  035aa80  ld 29, 200(1)
  035aa84  ld 30, 208(1)
  035aa88  ld 31, 216(1)
  035aa8c  addi 1, 1, 224
  035aa90  blr

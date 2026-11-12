# game/update/moby1324.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1324_00249c50:   # 0x249c50, 0x30 bytes
  0249c50  stdu 1, -112(1)
  0249c54  mflr 0
  0249c58  std 0, 128(1)
  0249c5c  lis 3, 241
  0249c60  li 4, 128
  0249c64  addic 3, 3, 24000
  0249c68  bl 0x17cfdc
  0249c6c  nop
  0249c70  ld 0, 128(1)
  0249c74  mtlr 0
  0249c78  addi 1, 1, 112
  0249c7c  blr

M1324_00249c80:   # 0x249c80, 0x14 bytes
  0249c80  lis 3, 121
  0249c84  lis 4, 1
  0249c88  addic 3, 3, -6924
  0249c8c  stw 4, 72(3)
  0249c90  blr

UpdateMoby_1324:   # 0x249cb0, 0x924 bytes
  0249cb0  stdu 1, -176(1)
  0249cb4  mflr 0
  0249cb8  std 0, 192(1)
  0249cbc  std 27, 136(1)
  0249cc0  lis 27, 151
  0249cc4  std 31, 168(1)
  0249cc8  li 4, 255
  0249ccc  lwz 31, 120(3)
  0249cd0  std 30, 160(1)
  0249cd4  addic 27, 27, -25376
  0249cd8  addic 30, 27, 128
  0249cdc  stb 4, 48(3)
  0249ce0  ori 3, 30, 0
  0249ce4  lwz 4, 92(31)
  0249ce8  std 29, 152(1)
  0249cec  std 28, 144(1)
  0249cf0  extsw 4, 4
  0249cf4  bl 0x110b70
  0249cf8  nop
  0249cfc  cmpwi 3, 0
  0249d00  bt 2, 0x249dc0
  0249d04  lwz 3, 8332(27)
  0249d08  cmpwi 3, 0
  0249d0c  cmpwi 1, 3, 1
  0249d10  bt 2, 0x249d18
  0249d14  bf 6, 0x249dc0
  0249d18  lis 3, 161
  0249d1c  addic 3, 3, 12
  0249d20  lhz 3, 632(3)
  0249d24  cmpwi 3, 0
  0249d28  bf 2, 0x249dc0
  0249d2c  lis 3, 161
  0249d30  addic 3, 3, -276
  0249d34  lhz 3, 160(3)
  0249d38  cmpwi 3, 0
  0249d3c  bf 2, 0x249dc0
  0249d40  li 4, 0
  0249d44  lis 5, 114
  0249d48  lis 6, 151
  0249d4c  ori 3, 4, 0
  0249d50  addic 5, 5, 4104
  0249d54  addic 6, 6, -16064
  0249d58  sldi 7, 4, 4
  0249d5c  subc 8, 4, 7
  0249d60  sldi 8, 8, 2
  0249d64  subc 7, 7, 8
  0249d68  extsw 7, 7
  0249d6c  lwzx 7, 5, 7
  0249d70  cmpwi 7, 0
  0249d74  bf 2, 0x249d98
  0249d78  cmpwi 1, 4, 24
  0249d7c  cmpwi 4, 8
  0249d80  cror 2, 2, 6
  0249d84  bt 2, 0x249d98
  0249d88  lbzx 7, 6, 4
  0249d8c  cmpwi 7, 0
  0249d90  bt 2, 0x249d98
  0249d94  addic 3, 3, 1
  0249d98  addic 4, 4, 1
  0249d9c  extsw 4, 4
  0249da0  cmpwi 4, 37
  0249da4  bt 0, 0x249d58
  0249da8  cmpwi 3, 2
  0249dac  bt 0, 0x249dc0
  0249db0  li 3, 20005
  0249db4  li 4, 79
  0249db8  bl 0x7b310
  0249dbc  nop
  0249dc0  lwz 3, 84(31)
  0249dc4  cmpwi 3, 0
  0249dc8  cmpwi 1, 3, -1
  0249dcc  cmpwi 6, 3, 1
  0249dd0  bt 1, 0x249ddc
  0249dd4  bf 5, 0x249e58
  0249dd8  b 0x249de4
  0249ddc  bf 25, 0x249e18
  0249de0  b 0x249e58
  0249de4  ori 3, 30, 0
  0249de8  lwz 4, 72(31)
  0249dec  extsw 4, 4
  0249df0  bl 0x110b70
  0249df4  nop
  0249df8  cmpwi 3, 0
  0249dfc  bt 2, 0x249e58
  0249e00  lwz 3, 8324(27)
  0249e04  cmpwi 3, 44
  0249e08  bf 2, 0x249e58
  0249e0c  li 3, 1
  0249e10  stw 3, 84(31)
  0249e14  b 0x249e58
  0249e18  lwz 3, 768(27)
  0249e1c  cmpwi 3, 0
  0249e20  bt 2, 0x249e30
  0249e24  li 3, 0
  0249e28  stw 3, 84(31)
  0249e2c  b 0x249e58
  0249e30  ori 3, 30, 0
  0249e34  lwz 4, 76(31)
  0249e38  extsw 4, 4
  0249e3c  bl 0x110b70
  0249e40  nop
  0249e44  cmpwi 3, 0
  0249e48  bt 2, 0x249e58
  0249e4c  li 3, 1
  0249e50  bl 0x11b728
  0249e54  nop
  0249e58  lis 29, 161
  0249e5c  addic 29, 29, 12
  0249e60  lhz 3, 96(29)
  0249e64  cmpwi 3, 0
  0249e68  bf 2, 0x249f6c
  0249e6c  ori 3, 30, 0
  0249e70  lwz 4, 16(31)
  0249e74  extsw 4, 4
  0249e78  bl 0x110b70
  0249e7c  nop
  0249e80  cmpwi 3, 0
  0249e84  bt 2, 0x249f6c
  0249e88  lis 4, 151
  0249e8c  lis 3, 161
  0249e90  addic 5, 3, -13692
  0249e94  lwz 3, 0(31)
  0249e98  lwz 4, -25488(4)
  0249e9c  addc 5, 3, 5
  0249ea0  slwi 4, 4, 4
  0249ea4  clrldi 5, 5, 32
  0249ea8  extsw 4, 4
  0249eac  lbzx 4, 5, 4
  0249eb0  cmpwi 4, 255
  0249eb4  bt 2, 0x249f6c
  0249eb8  lis 4, 151
  0249ebc  addic 4, 4, -16064
  0249ec0  lbz 4, 16(4)
  0249ec4  cmpwi 4, 0
  0249ec8  bt 2, 0x249f6c
  0249ecc  lis 4, 161
  0249ed0  slwi 3, 3, 2
  0249ed4  addic 4, 4, -812
  0249ed8  extsw 3, 3
  0249edc  lwzx 3, 4, 3
  0249ee0  cmpwi 3, 6
  0249ee4  bt 0, 0x249f6c
  0249ee8  lis 3, 161
  0249eec  lis 4, 114
  0249ef0  lwz 3, -2344(3)
  0249ef4  extsw 3, 3
  0249ef8  std 3, 112(1)
  0249efc  lis 3, 37
  0249f00  addi 3, 3, -25448
  0249f04  lfs 1, 0(3)
  0249f08  lfs 2, -3056(4)
  0249f0c  lfd 3, 112(1)
  0249f10  lis 4, 161
  0249f14  fcfid 3, 3
  0249f18  addic 4, 4, -572
  0249f1c  lhz 4, 130(4)
  0249f20  mulli 4, 4, 600
  0249f24  frsp 3, 3
  0249f28  fadds 1, 3, 1
  0249f2c  fmuls 1, 2, 1
  0249f30  fctiwz 1, 1
  0249f34  stfd 1, 112(1)
  0249f38  lfs 1, 4(3)
  0249f3c  lwz 3, 116(1)
  0249f40  fmuls 1, 2, 1
  0249f44  subc 3, 3, 4
  0249f48  fctiwz 1, 1
  0249f4c  stfd 1, 112(1)
  0249f50  lwz 4, 116(1)
  0249f54  cmpw 3, 4
  0249f58  bf 1, 0x249f6c
  0249f5c  li 3, 2002
  0249f60  li 4, 12
  0249f64  bl 0x7b310
  0249f68  nop
  0249f6c  lwz 4, 64(31)
  0249f70  ori 3, 30, 0
  0249f74  extsw 4, 4
  0249f78  bl 0x110b70
  0249f7c  nop
  0249f80  ori 4, 3, 0
  0249f84  lwz 3, 88(31)
  0249f88  cmpwi 4, 0
  0249f8c  bt 2, 0x249f9c
  0249f90  li 3, 1
  0249f94  stw 3, 88(31)
  0249f98  b 0x249fa4
  0249f9c  cmpwi 3, 0
  0249fa0  bt 2, 0x24a048
  0249fa4  lis 3, 161
  0249fa8  addic 3, 3, -276
  0249fac  lhz 3, 64(3)
  0249fb0  cmpwi 3, 3
  0249fb4  bf 0, 0x249fe8
  0249fb8  lis 3, 151
  0249fbc  lwz 5, 612(29)
  0249fc0  li 4, 1
  0249fc4  lwz 3, -25488(3)
  0249fc8  slw 3, 4, 3
  0249fcc  and 3, 5, 3
  0249fd0  cmpwi 3, 0
  0249fd4  bf 2, 0x249fe8
  0249fd8  li 3, 20002
  0249fdc  li 4, 76
  0249fe0  bl 0x7b310
  0249fe4  nop
  0249fe8  lis 3, 114
  0249fec  lbz 3, -1224(3)
  0249ff0  cmpwi 3, 0
  0249ff4  bt 2, 0x24a03c
  0249ff8  lis 3, 114
  0249ffc  lbz 3, -1220(3)
  024a000  cmpwi 3, 0
  024a004  bt 2, 0x24a03c
  024a008  lis 3, 151
  024a00c  lwz 5, 948(29)
  024a010  li 4, 1
  024a014  lwz 3, -25488(3)
  024a018  slw 3, 4, 3
  024a01c  and 3, 5, 3
  024a020  cmpwi 3, 0
  024a024  bf 2, 0x24a048
  024a028  li 3, 20012
  024a02c  li 4, 118
  024a030  bl 0x7b310
  024a034  nop
  024a038  b 0x24a048
  024a03c  lis 3, 0
  024a040  ori 3, 3, 65535
  024a044  sth 3, 944(29)
  024a048  lhz 3, 104(29)
  024a04c  cmpwi 3, 0
  024a050  bf 2, 0x24a108
  024a054  ori 3, 30, 0
  024a058  lwz 4, 16(31)
  024a05c  extsw 4, 4
  024a060  bl 0x110b70
  024a064  nop
  024a068  cmpwi 3, 0
  024a06c  bt 2, 0x24a108
  024a070  lis 4, 151
  024a074  lis 3, 161
  024a078  addic 5, 3, -13692
  024a07c  lwz 3, 0(31)
  024a080  lwz 4, -25488(4)
  024a084  addc 5, 3, 5
  024a088  slwi 4, 4, 4
  024a08c  clrldi 5, 5, 32
  024a090  extsw 4, 4
  024a094  lbzx 4, 5, 4
  024a098  cmpwi 4, 255
  024a09c  bt 2, 0x24a108
  024a0a0  lis 4, 151
  024a0a4  addic 4, 4, -16064
  024a0a8  lbz 4, 16(4)
  024a0ac  cmpwi 4, 0
  024a0b0  bf 2, 0x24a108
  024a0b4  slwi 3, 3, 2
  024a0b8  lis 4, 161
  024a0bc  extsw 3, 3
  024a0c0  addic 4, 4, -812
  024a0c4  addi 5, 3, 16
  024a0c8  li 6, 8
  024a0cc  lvlx 2, 3, 4
  024a0d0  lvrx 3, 5, 4
  024a0d4  lis 3, 37
  024a0d8  vor 2, 2, 3
  024a0dc  addi 3, 3, -25448
  024a0e0  vcfsx 2, 2, 0
  024a0e4  lvlx 3, 6, 3
  024a0e8  vspltw 3, 3, 0
  024a0ec  vspltw 2, 2, 0
  024a0f0  vcmpgefp. 2, 2, 3
  024a0f4  bt 26, 0x24a108
  024a0f8  li 3, 2003
  024a0fc  li 4, 13
  024a100  bl 0x7b310
  024a104  nop
  024a108  lhz 3, 128(29)
  024a10c  cmpwi 3, 0
  024a110  bf 2, 0x24a1a8
  024a114  lwz 4, 24(31)
  024a118  ori 3, 30, 0
  024a11c  extsw 4, 4
  024a120  bl 0x110b70
  024a124  nop
  024a128  ori 4, 3, 0
  024a12c  lwz 3, 8324(27)
  024a130  cmpwi 4, 0
  024a134  lwz 4, 8336(27)
  024a138  lwz 5, 408(27)
  024a13c  bt 2, 0x24a14c
  024a140  lis 6, 0
  024a144  ori 6, 6, 65535
  024a148  sth 6, 128(29)
  024a14c  cmpwi 3, 44
  024a150  bt 2, 0x24a170
  024a154  cmpwi 4, 44
  024a158  bf 2, 0x24a170
  024a15c  cmpwi 5, 1
  024a160  bf 2, 0x24a170
  024a164  lwz 3, 48(31)
  024a168  addic 3, 3, 1
  024a16c  stw 3, 48(31)
  024a170  lwz 3, 48(31)
  024a174  cmpwi 3, 2
  024a178  bt 0, 0x24a1a8
  024a17c  ori 3, 30, 0
  024a180  lwz 4, 28(31)
  024a184  extsw 4, 4
  024a188  bl 0x110b70
  024a18c  nop
  024a190  cmpwi 3, 0
  024a194  bt 2, 0x24a1a8
  024a198  li 3, 2006
  024a19c  li 4, 16
  024a1a0  bl 0x7b310
  024a1a4  nop
  024a1a8  lis 28, 151
  024a1ac  addic 28, 28, -16064
  024a1b0  lbz 3, 12(28)
  024a1b4  cmpwi 3, 0
  024a1b8  bf 2, 0x24a2b0
  024a1bc  ori 3, 30, 0
  024a1c0  lwz 4, 20(31)
  024a1c4  extsw 4, 4
  024a1c8  bl 0x110b70
  024a1cc  nop
  024a1d0  cmpwi 3, 0
  024a1d4  bt 2, 0x24a2b0
  024a1d8  lis 3, 161
  024a1dc  lis 4, 114
  024a1e0  lwz 3, -2344(3)
  024a1e4  extsw 3, 3
  024a1e8  std 3, 112(1)
  024a1ec  lis 3, 37
  024a1f0  addi 3, 3, -25448
  024a1f4  lfs 1, 0(3)
  024a1f8  lfs 2, -3056(4)
  024a1fc  lfd 3, 112(1)
  024a200  fcfid 3, 3
  024a204  frsp 3, 3
  024a208  fadds 1, 3, 1
  024a20c  fmuls 1, 2, 1
  024a210  fctiwz 1, 1
  024a214  stfd 1, 112(1)
  024a218  lfs 1, 12(3)
  024a21c  fmuls 1, 2, 1
  024a220  lfs 3, 16(3)
  024a224  lhz 4, 138(29)
  024a228  mulli 5, 4, 600
  024a22c  fctidz 1, 1
  024a230  lwz 3, 116(1)
  024a234  cmpwi 1, 5, 0
  024a238  subc 6, 3, 5
  024a23c  fcfid 1, 1
  024a240  frsp 1, 1
  024a244  fmuls 1, 1, 3
  024a248  fctiwz 1, 1
  024a24c  stfd 1, 112(1)
  024a250  lwz 5, 116(1)
  024a254  cmpw 6, 5
  024a258  bt 1, 0x24a260
  024a25c  bf 6, 0x24a274
  024a260  li 3, 2007
  024a264  li 4, 17
  024a268  bl 0x7b310
  024a26c  nop
  024a270  b 0x24a2b0
  024a274  lis 5, 6990
  024a278  ori 5, 5, 33205
  024a27c  mulhw 5, 5, 3
  024a280  srawi 5, 5, 6
  024a284  srwi 6, 5, 31
  024a288  addc 5, 5, 6
  024a28c  cmpw 5, 4
  024a290  bf 1, 0x24a2b0
  024a294  lis 4, 6990
  024a298  ori 4, 4, 33205
  024a29c  mulhw 3, 4, 3
  024a2a0  srawi 3, 3, 6
  024a2a4  srwi 4, 3, 31
  024a2a8  addc 3, 3, 4
  024a2ac  sth 3, 138(29)
  024a2b0  lbz 3, 12(28)
  024a2b4  cmpwi 3, 0
  024a2b8  bt 2, 0x24a488
  024a2bc  lwz 4, 20(31)
  024a2c0  ori 3, 30, 0
  024a2c4  extsw 4, 4
  024a2c8  bl 0x110b70
  024a2cc  nop
  024a2d0  ori 4, 3, 0
  024a2d4  lhz 3, 146(29)
  024a2d8  cmpwi 4, 0
  024a2dc  lwz 4, 148(29)
  024a2e0  bt 2, 0x24a488
  024a2e4  lhz 5, 144(29)
  024a2e8  cmpwi 5, 0
  024a2ec  bt 2, 0x24a3c8
  024a2f0  lis 4, 161
  024a2f4  lis 5, 114
  024a2f8  lwz 4, -2344(4)
  024a2fc  extsw 4, 4
  024a300  std 4, 112(1)
  024a304  lis 4, 37
  024a308  addi 4, 4, -25448
  024a30c  lfs 1, 0(4)
  024a310  lfs 2, -3056(5)
  024a314  lfd 3, 112(1)
  024a318  fcfid 3, 3
  024a31c  mulli 5, 3, 600
  024a320  frsp 3, 3
  024a324  cmpwi 1, 5, 0
  024a328  fadds 1, 3, 1
  024a32c  fmuls 1, 2, 1
  024a330  fctiwz 1, 1
  024a334  stfd 1, 112(1)
  024a338  lfs 1, 12(4)
  024a33c  fmuls 1, 2, 1
  024a340  lfs 3, 16(4)
  024a344  lwz 4, 116(1)
  024a348  subc 6, 4, 5
  024a34c  fctidz 1, 1
  024a350  fcfid 1, 1
  024a354  frsp 1, 1
  024a358  fmuls 1, 1, 3
  024a35c  fctiwz 1, 1
  024a360  stfd 1, 112(1)
  024a364  lwz 5, 116(1)
  024a368  cmpw 6, 5
  024a36c  bt 1, 0x24a374
  024a370  bf 6, 0x24a388
  024a374  li 3, 2008
  024a378  li 4, 18
  024a37c  bl 0x7b310
  024a380  nop
  024a384  b 0x24a4b0
  024a388  lis 5, 6990
  024a38c  ori 5, 5, 33205
  024a390  mulhw 5, 5, 4
  024a394  srawi 5, 5, 6
  024a398  srwi 6, 5, 31
  024a39c  addc 5, 5, 6
  024a3a0  cmpw 5, 3
  024a3a4  bf 1, 0x24a4b0
  024a3a8  lis 3, 6990
  024a3ac  ori 3, 3, 33205
  024a3b0  mulhw 3, 3, 4
  024a3b4  srawi 3, 3, 6
  024a3b8  srwi 4, 3, 31
  024a3bc  addc 3, 3, 4
  024a3c0  sth 3, 146(29)
  024a3c4  b 0x24a4b0
  024a3c8  lis 6, 0
  024a3cc  ori 6, 6, 65535
  024a3d0  cmpw 5, 6
  024a3d4  bf 0, 0x24a3e0
  024a3d8  addic 5, 5, 1
  024a3dc  sth 5, 144(29)
  024a3e0  lis 5, 161
  024a3e4  lis 6, 114
  024a3e8  lwz 5, -2344(5)
  024a3ec  extsw 5, 5
  024a3f0  std 5, 112(1)
  024a3f4  lis 5, 37
  024a3f8  addi 5, 5, -25448
  024a3fc  lfs 1, 0(5)
  024a400  lfs 2, -3056(6)
  024a404  lfd 3, 112(1)
  024a408  ori 5, 3, 0
  024a40c  fcfid 3, 3
  024a410  lis 3, 6990
  024a414  ori 6, 3, 33205
  024a418  frsp 3, 3
  024a41c  fadds 1, 3, 1
  024a420  fmuls 1, 2, 1
  024a424  fctiwz 1, 1
  024a428  stfd 1, 112(1)
  024a42c  lwz 3, 116(1)
  024a430  mulhw 6, 6, 3
  024a434  srawi 6, 6, 6
  024a438  srwi 7, 6, 31
  024a43c  addc 6, 6, 7
  024a440  cmpw 6, 5
  024a444  bf 1, 0x24a464
  024a448  lis 5, 6990
  024a44c  ori 5, 5, 33205
  024a450  mulhw 3, 5, 3
  024a454  srawi 3, 3, 6
  024a458  srwi 5, 3, 31
  024a45c  addc 3, 3, 5
  024a460  sth 3, 146(29)
  024a464  lis 3, 151
  024a468  li 5, 1
  024a46c  lis 6, -32768
  024a470  lwz 3, -25488(3)
  024a474  slw 3, 5, 3
  024a478  or 3, 4, 3
  024a47c  or 3, 3, 6
  024a480  stw 3, 148(29)
  024a484  b 0x24a4b0
  024a488  ori 3, 30, 0
  024a48c  lwz 4, 28(31)
  024a490  extsw 4, 4
  024a494  bl 0x110b70
  024a498  nop
  024a49c  cmpwi 3, 0
  024a4a0  bt 2, 0x24a4b0
  024a4a4  lis 3, 0
  024a4a8  ori 3, 3, 65535
  024a4ac  sth 3, 144(29)
  024a4b0  lhz 3, 560(29)
  024a4b4  cmpwi 1, 3, 0
  024a4b8  bt 6, 0x24a4c8
  024a4bc  lhz 3, 568(29)
  024a4c0  cmpwi 3, 0
  024a4c4  bf 2, 0x24a558
  024a4c8  lwz 3, 8324(27)
  024a4cc  cmpwi 3, 114
  024a4d0  bf 2, 0x24a558
  024a4d4  lwz 3, 764(27)
  024a4d8  cmpwi 3, 0
  024a4dc  bt 2, 0x24a558
  024a4e0  lhz 3, 166(3)
  024a4e4  cmpwi 3, 615
  024a4e8  bf 2, 0x24a558
  024a4ec  bf 6, 0x24a504
  024a4f0  li 3, 2011
  024a4f4  li 4, 70
  024a4f8  bl 0x7b310
  024a4fc  nop
  024a500  b 0x24a558
  024a504  lhz 3, 568(29)
  024a508  cmpwi 3, 0
  024a50c  bf 2, 0x24a558
  024a510  lis 3, 37
  024a514  lwz 4, 80(31)
  024a518  lis 5, 114
  024a51c  addi 3, 3, -25448
  024a520  addic 4, 4, 1
  024a524  stw 4, 80(31)
  024a528  lfs 1, 20(3)
  024a52c  lfs 2, -3056(5)
  024a530  fmuls 1, 2, 1
  024a534  fctiwz 1, 1
  024a538  stfd 1, 112(1)
  024a53c  lwz 3, 116(1)
  024a540  cmpw 4, 3
  024a544  bf 1, 0x24a558
  024a548  li 3, 2012
  024a54c  li 4, 71
  024a550  bl 0x7b310
  024a554  nop
  024a558  lis 29, 151
  024a55c  addic 29, 29, -16400
  024a560  lbz 3, 20(29)
  024a564  cmpwi 3, 0
  024a568  bf 2, 0x24a590
  024a56c  ori 3, 30, 0
  024a570  lwz 4, 68(31)
  024a574  extsw 4, 4
  024a578  bl 0x110b70
  024a57c  nop
  024a580  cmpwi 3, 0
  024a584  bt 2, 0x24a590
  024a588  li 3, 1
  024a58c  stb 3, 20(29)
  024a590  lfs 1, 128(27)
  024a594  stfs 1, 32(31)
  024a598  lfs 1, 132(27)
  024a59c  stfs 1, 36(31)
  024a5a0  lfs 1, 136(27)
  024a5a4  stfs 1, 40(31)
  024a5a8  lfs 1, 140(27)
  024a5ac  stfs 1, 44(31)
  024a5b0  ld 0, 192(1)
  024a5b4  mtlr 0
  024a5b8  ld 27, 136(1)
  024a5bc  ld 28, 144(1)
  024a5c0  ld 29, 152(1)
  024a5c4  ld 30, 160(1)
  024a5c8  ld 31, 168(1)
  024a5cc  addi 1, 1, 176
  024a5d0  blr

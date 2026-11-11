# sdk/libc/xputtxt.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Puttxt:   # 0x5d9d68, 0x430 bytes
  05d9d68  stdu 1, -160(1)
  05d9d6c  mflr 0
  05d9d70  std 26, 112(1)
  05d9d74  std 0, 176(1)
  05d9d78  lwz 0, 76(3)
  05d9d7c  mr 26, 4
  05d9d80  lwz 5, 44(3)
  05d9d84  lwz 11, 48(3)
  05d9d88  sub 0, 0, 5
  05d9d8c  lwz 10, 52(3)
  05d9d90  lhz 9, 80(3)
  05d9d94  sub 0, 0, 11
  05d9d98  lwz 11, 56(3)
  05d9d9c  rlwinm 9, 9, 0, 29, 29
  05d9da0  sub 0, 0, 10
  05d9da4  lwz 10, 60(3)
  05d9da8  cmpwi 7, 9, 0
  05d9dac  lwz 9, 64(3)
  05d9db0  sub 0, 0, 11
  05d9db4  std 27, 120(1)
  05d9db8  sub 0, 0, 10
  05d9dbc  std 31, 152(1)
  05d9dc0  std 28, 128(1)
  05d9dc4  std 29, 136(1)
  05d9dc8  std 30, 144(1)
  05d9dcc  mr 31, 3
  05d9dd0  sub 27, 0, 9
  05d9dd4  bf 30, 0x5d9de0
  05d9dd8  cmpwi 7, 27, 0
  05d9ddc  bt 29, 0x5d9ed4
  05d9de0  cmpwi 7, 5, 0
  05d9de4  bt 29, 0x5da0f4
  05d9de8  lwz 29, 48(31)
  05d9dec  cmpwi 7, 29, 0
  05d9df0  bt 29, 0x5d9fb0
  05d9df4  lwz 5, 52(31)
  05d9df8  cmpwi 7, 5, 0
  05d9dfc  bt 29, 0x5da13c
  05d9e00  lwz 29, 56(31)
  05d9e04  cmpwi 7, 29, 0
  05d9e08  bt 29, 0x5da01c
  05d9e0c  lwz 5, 60(31)
  05d9e10  cmpwi 7, 5, 0
  05d9e14  bt 29, 0x5d9f40
  05d9e18  lwz 29, 64(31)
  05d9e1c  cmpwi 7, 29, 0
  05d9e20  bt 29, 0x5da088
  05d9e24  lhz 0, 80(31)
  05d9e28  rlwinm 0, 0, 0, 29, 29
  05d9e2c  cmpwi 7, 0, 0
  05d9e30  bt 30, 0x5d9e3c
  05d9e34  cmpwi 7, 27, 0
  05d9e38  bt 29, 0x5d9e6c
  05d9e3c  ld 0, 176(1)
  05d9e40  li 3, 0
  05d9e44  ld 26, 112(1)
  05d9e48  extsw 3, 3
  05d9e4c  ld 27, 120(1)
  05d9e50  ld 28, 128(1)
  05d9e54  mtlr 0
  05d9e58  ld 29, 136(1)
  05d9e5c  ld 30, 144(1)
  05d9e60  ld 31, 152(1)
  05d9e64  addi 1, 1, 160
  05d9e68  blr
  05d9e6c  mr 29, 27
  05d9e70  lwz 28, -24016(2)
  05d9e74  cmplwi 7, 29, 32
  05d9e78  clrldi 4, 28, 32
  05d9e7c  mr 30, 29
  05d9e80  bf 29, 0x5d9e88
  05d9e84  li 30, 32
  05d9e88  lwz 9, 32(31)
  05d9e8c  clrldi 5, 30, 32
  05d9e90  lwz 3, 36(31)
  05d9e94  sub 29, 29, 30
  05d9e98  lwz 0, 0(9)
  05d9e9c  std 2, 40(1)
  05d9ea0  mtctr 0
  05d9ea4  lwz 2, 4(9)
  05d9ea8  bctrl
  05d9eac  ld 2, 40(1)
  05d9eb0  cmpwi 6, 29, 0
  05d9eb4  cmpwi 7, 3, 0
  05d9eb8  stw 3, 36(31)
  05d9ebc  bt 30, 0x5d9f80
  05d9ec0  lwz 0, 72(31)
  05d9ec4  add 0, 30, 0
  05d9ec8  stw 0, 72(31)
  05d9ecc  bt 25, 0x5d9e74
  05d9ed0  b 0x5d9e3c
  05d9ed4  mr 29, 27
  05d9ed8  lwz 28, -24016(2)
  05d9edc  cmplwi 7, 29, 32
  05d9ee0  clrldi 4, 28, 32
  05d9ee4  mr 30, 29
  05d9ee8  bf 29, 0x5d9ef0
  05d9eec  li 30, 32
  05d9ef0  lwz 9, 32(31)
  05d9ef4  clrldi 5, 30, 32
  05d9ef8  lwz 3, 36(31)
  05d9efc  sub 29, 29, 30
  05d9f00  lwz 0, 0(9)
  05d9f04  std 2, 40(1)
  05d9f08  mtctr 0
  05d9f0c  lwz 2, 4(9)
  05d9f10  bctrl
  05d9f14  ld 2, 40(1)
  05d9f18  cmpwi 6, 29, 0
  05d9f1c  cmpwi 7, 3, 0
  05d9f20  stw 3, 36(31)
  05d9f24  bt 30, 0x5d9f80
  05d9f28  lwz 0, 72(31)
  05d9f2c  add 0, 30, 0
  05d9f30  stw 0, 72(31)
  05d9f34  bt 25, 0x5d9edc
  05d9f38  lwz 5, 44(31)
  05d9f3c  b 0x5d9de0
  05d9f40  lwz 9, 32(31)
  05d9f44  clrldi 5, 5, 32
  05d9f48  lwz 0, 52(31)
  05d9f4c  lwz 4, 40(31)
  05d9f50  add 4, 4, 0
  05d9f54  lwz 0, 0(9)
  05d9f58  std 2, 40(1)
  05d9f5c  mtctr 0
  05d9f60  clrldi 4, 4, 32
  05d9f64  lwz 3, 36(31)
  05d9f68  lwz 2, 4(9)
  05d9f6c  bctrl
  05d9f70  ld 2, 40(1)
  05d9f74  cmpwi 7, 3, 0
  05d9f78  stw 3, 36(31)
  05d9f7c  bf 30, 0x5da184
  05d9f80  li 3, -1
  05d9f84  ld 0, 176(1)
  05d9f88  extsw 3, 3
  05d9f8c  ld 26, 112(1)
  05d9f90  ld 27, 120(1)
  05d9f94  mtlr 0
  05d9f98  ld 28, 128(1)
  05d9f9c  ld 29, 136(1)
  05d9fa0  ld 30, 144(1)
  05d9fa4  ld 31, 152(1)
  05d9fa8  addi 1, 1, 160
  05d9fac  blr
  05d9fb0  lwz 28, -24012(2)
  05d9fb4  b 0x5d9fc8
  05d9fb8  lwz 0, 72(31)
  05d9fbc  add 0, 30, 0
  05d9fc0  stw 0, 72(31)
  05d9fc4  bf 25, 0x5d9df4
  05d9fc8  cmplwi 7, 29, 32
  05d9fcc  clrldi 4, 28, 32
  05d9fd0  mr 30, 29
  05d9fd4  bf 29, 0x5d9fdc
  05d9fd8  li 30, 32
  05d9fdc  lwz 9, 32(31)
  05d9fe0  clrldi 5, 30, 32
  05d9fe4  lwz 3, 36(31)
  05d9fe8  sub 29, 29, 30
  05d9fec  lwz 0, 0(9)
  05d9ff0  std 2, 40(1)
  05d9ff4  mtctr 0
  05d9ff8  lwz 2, 4(9)
  05d9ffc  bctrl
  05da000  ld 2, 40(1)
  05da004  cmpwi 6, 29, 0
  05da008  cmpwi 7, 3, 0
  05da00c  stw 3, 36(31)
  05da010  bf 30, 0x5d9fb8
  05da014  li 3, -1
  05da018  b 0x5d9f84
  05da01c  lwz 28, -24012(2)
  05da020  b 0x5da034
  05da024  lwz 0, 72(31)
  05da028  add 0, 30, 0
  05da02c  stw 0, 72(31)
  05da030  bf 25, 0x5d9e0c
  05da034  cmplwi 7, 29, 32
  05da038  clrldi 4, 28, 32
  05da03c  mr 30, 29
  05da040  bf 29, 0x5da048
  05da044  li 30, 32
  05da048  lwz 9, 32(31)
  05da04c  clrldi 5, 30, 32
  05da050  lwz 3, 36(31)
  05da054  sub 29, 29, 30
  05da058  lwz 0, 0(9)
  05da05c  std 2, 40(1)
  05da060  mtctr 0
  05da064  lwz 2, 4(9)
  05da068  bctrl
  05da06c  ld 2, 40(1)
  05da070  cmpwi 6, 29, 0
  05da074  cmpwi 7, 3, 0
  05da078  stw 3, 36(31)
  05da07c  bf 30, 0x5da024
  05da080  li 3, -1
  05da084  b 0x5d9f84
  05da088  lwz 28, -24012(2)
  05da08c  b 0x5da0a0
  05da090  lwz 0, 72(31)
  05da094  add 0, 30, 0
  05da098  stw 0, 72(31)
  05da09c  bf 25, 0x5d9e24
  05da0a0  cmplwi 7, 29, 32
  05da0a4  clrldi 4, 28, 32
  05da0a8  mr 30, 29
  05da0ac  bf 29, 0x5da0b4
  05da0b0  li 30, 32
  05da0b4  lwz 9, 32(31)
  05da0b8  clrldi 5, 30, 32
  05da0bc  lwz 3, 36(31)
  05da0c0  sub 29, 29, 30
  05da0c4  lwz 0, 0(9)
  05da0c8  std 2, 40(1)
  05da0cc  mtctr 0
  05da0d0  lwz 2, 4(9)
  05da0d4  bctrl
  05da0d8  ld 2, 40(1)
  05da0dc  cmpwi 6, 29, 0
  05da0e0  cmpwi 7, 3, 0
  05da0e4  stw 3, 36(31)
  05da0e8  bf 30, 0x5da090
  05da0ec  li 3, -1
  05da0f0  b 0x5d9f84
  05da0f4  lwz 9, 32(31)
  05da0f8  clrldi 4, 26, 32
  05da0fc  lwz 3, 36(31)
  05da100  clrldi 5, 5, 32
  05da104  lwz 0, 0(9)
  05da108  std 2, 40(1)
  05da10c  mtctr 0
  05da110  lwz 2, 4(9)
  05da114  bctrl
  05da118  ld 2, 40(1)
  05da11c  cmpwi 7, 3, 0
  05da120  stw 3, 36(31)
  05da124  bt 30, 0x5d9f80
  05da128  lwz 0, 72(31)
  05da12c  lwz 9, 44(31)
  05da130  add 0, 0, 9
  05da134  stw 0, 72(31)
  05da138  b 0x5d9de8
  05da13c  lwz 9, 32(31)
  05da140  clrldi 5, 5, 32
  05da144  lwz 3, 36(31)
  05da148  lwz 4, 40(31)
  05da14c  lwz 0, 0(9)
  05da150  std 2, 40(1)
  05da154  mtctr 0
  05da158  lwz 2, 4(9)
  05da15c  bctrl
  05da160  ld 2, 40(1)
  05da164  cmpwi 7, 3, 0
  05da168  stw 3, 36(31)
  05da16c  bt 30, 0x5d9f80
  05da170  lwz 0, 72(31)
  05da174  lwz 9, 52(31)
  05da178  add 0, 0, 9
  05da17c  stw 0, 72(31)
  05da180  b 0x5d9e00
  05da184  lwz 0, 72(31)
  05da188  lwz 9, 60(31)
  05da18c  add 0, 0, 9
  05da190  stw 0, 72(31)
  05da194  b 0x5d9e18

FUN_005da198:   # 0x5da198, 0x14 bytes
  05da198  lwz 9, -24008(2)
  05da19c  lbz 3, 0(9)
  05da1a0  extsb 3, 3
  05da1a4  clrldi 3, 3, 32
  05da1a8  blr

FUN_005da1ac:   # 0x5da1ac, 0x10 bytes
  05da1ac  addis 3, 13, 0
  05da1b0  addi 3, 3, -28428
  05da1b4  clrldi 3, 3, 32
  05da1b8  blr

FUN_005da1bc:   # 0x5da1bc, 0x398 bytes
  05da1bc  stdu 1, -336(1)
  05da1c0  mflr 0
  05da1c4  std 31, 328(1)
  05da1c8  std 0, 352(1)
  05da1cc  mr 31, 6
  05da1d0  mr 0, 3
  05da1d4  addi 3, 1, 384
  05da1d8  std 26, 288(1)
  05da1dc  std 27, 296(1)
  05da1e0  std 28, 304(1)
  05da1e4  std 29, 312(1)
  05da1e8  std 30, 320(1)
  05da1ec  std 23, 264(1)
  05da1f0  std 24, 272(1)
  05da1f4  std 25, 280(1)
  05da1f8  mr 30, 4
  05da1fc  mr 28, 6
  05da200  stw 0, 384(1)
  05da204  mr 26, 5
  05da208  mr 29, 0
  05da20c  bl 0x5ca99c
  05da210  nop
  05da214  cmpwi 7, 31, 0
  05da218  mr 27, 3
  05da21c  bt 30, 0x5da228
  05da220  li 0, 0
  05da224  stw 0, 0(31)
  05da228  rlwinm 0, 27, 28, 1, 31
  05da22c  rotlwi 0, 0, 4
  05da230  cmpwi 7, 0, 1
  05da234  bt 30, 0x5da2f8
  05da238  cmpwi 7, 0, 2
  05da23c  bt 30, 0x5da428
  05da240  cmpwi 7, 0, 3
  05da244  bt 30, 0x5da2d8
  05da248  cmpwi 7, 0, 4
  05da24c  bt 30, 0x5da2e8
  05da250  lfd 0, -24000(2)
  05da254  stfd 0, 112(1)
  05da258  rlwinm 0, 27, 0, 28, 28
  05da25c  cmpwi 7, 0, 0
  05da260  bt 30, 0x5da2a0
  05da264  ld 0, 352(1)
  05da268  lfd 0, 112(1)
  05da26c  fneg 1, 0
  05da270  ld 23, 264(1)
  05da274  ld 24, 272(1)
  05da278  mtlr 0
  05da27c  ld 25, 280(1)
  05da280  ld 26, 288(1)
  05da284  ld 27, 296(1)
  05da288  ld 28, 304(1)
  05da28c  ld 29, 312(1)
  05da290  ld 30, 320(1)
  05da294  ld 31, 328(1)
  05da298  addi 1, 1, 336
  05da29c  blr
  05da2a0  ld 0, 352(1)
  05da2a4  lfd 1, 112(1)
  05da2a8  ld 23, 264(1)
  05da2ac  mtlr 0
  05da2b0  ld 24, 272(1)
  05da2b4  ld 25, 280(1)
  05da2b8  ld 26, 288(1)
  05da2bc  ld 27, 296(1)
  05da2c0  ld 28, 304(1)
  05da2c4  ld 29, 312(1)
  05da2c8  ld 30, 320(1)
  05da2cc  ld 31, 328(1)
  05da2d0  addi 1, 1, 336
  05da2d4  blr
  05da2d8  lwz 9, -23988(2)
  05da2dc  lfd 0, 0(9)
  05da2e0  stfd 0, 112(1)
  05da2e4  b 0x5da258
  05da2e8  lwz 9, -23984(2)
  05da2ec  lfd 0, 0(9)
  05da2f0  stfd 0, 112(1)
  05da2f4  b 0x5da258
  05da2f8  addi 31, 1, 120
  05da2fc  lwz 4, 384(1)
  05da300  mr 5, 30
  05da304  clrldi 3, 29, 32
  05da308  mr 6, 31
  05da30c  li 7, 2
  05da310  bl 0x5ca4a0
  05da314  nop
  05da318  cmpwi 7, 3, 0
  05da31c  mr 30, 3
  05da320  bt 30, 0x5da250
  05da324  lwz 0, 124(1)
  05da328  cmpwi 7, 0, 0
  05da32c  bt 30, 0x5da250
  05da330  extsw 0, 0
  05da334  lis 9, -4501
  05da338  std 0, 240(1)
  05da33c  lfd 0, 240(1)
  05da340  ori 9, 9, 10240
  05da344  fcfid 1, 0
  05da348  li 0, 16412
  05da34c  sldi 9, 9, 32
  05da350  addi 3, 1, 136
  05da354  stw 0, 184(1)
  05da358  std 9, 192(1)
  05da35c  bl 0x5d60b0
  05da360  nop
  05da364  cmpwi 7, 30, 1
  05da368  bf 29, 0x5da3fc
  05da36c  addi 31, 31, 4
  05da370  li 29, 1
  05da374  addi 23, 1, 168
  05da378  addi 24, 1, 152
  05da37c  addi 25, 1, 208
  05da380  ld 4, 136(1)
  05da384  clrldi 3, 23, 32
  05da388  ld 5, 144(1)
  05da38c  addi 31, 31, 4
  05da390  ld 6, 184(1)
  05da394  addi 29, 29, 1
  05da398  ld 7, 192(1)
  05da39c  bl 0x5d615c
  05da3a0  nop
  05da3a4  clrldi 9, 31, 32
  05da3a8  clrldi 3, 24, 32
  05da3ac  lwz 0, 0(9)
  05da3b0  extsw 0, 0
  05da3b4  std 0, 240(1)
  05da3b8  lfd 0, 240(1)
  05da3bc  fcfid 1, 0
  05da3c0  bl 0x5d60b0
  05da3c4  nop
  05da3c8  ld 4, 168(1)
  05da3cc  ld 5, 176(1)
  05da3d0  clrldi 3, 25, 32
  05da3d4  ld 6, 152(1)
  05da3d8  ld 7, 160(1)
  05da3dc  bl 0x5d63b4
  05da3e0  nop
  05da3e4  cmpw 7, 30, 29
  05da3e8  lwz 0, 208(1)
  05da3ec  ld 9, 216(1)
  05da3f0  stw 0, 136(1)
  05da3f4  std 9, 144(1)
  05da3f8  bf 30, 0x5da380
  05da3fc  lwz 0, 120(1)
  05da400  add 4, 26, 0
  05da404  cmpwi 7, 4, 0
  05da408  bf 30, 0x5da51c
  05da40c  clrldi 5, 28, 32
  05da410  ld 3, 136(1)
  05da414  ld 4, 144(1)
  05da418  bl 0x5d6668
  05da41c  nop
  05da420  stfd 1, 112(1)
  05da424  b 0x5da258
  05da428  clrldi 3, 29, 32
  05da42c  lwz 4, 384(1)
  05da430  mr 5, 30
  05da434  addi 6, 1, 120
  05da438  li 7, 2
  05da43c  bl 0x5caf7c
  05da440  nop
  05da444  cmpwi 7, 3, 0
  05da448  bf 30, 0x5da488
  05da44c  lfd 0, -24000(2)
  05da450  addi 8, 1, 112
  05da454  stfd 0, 112(1)
  05da458  lwz 4, 120(1)
  05da45c  mr 3, 8
  05da460  extsw 4, 4
  05da464  bl 0x5d8b80
  05da468  nop
  05da46c  extsw 4, 26
  05da470  lfd 1, 112(1)
  05da474  clrldi 5, 28, 32
  05da478  bl 0x5dc84c
  05da47c  nop
  05da480  stfd 1, 112(1)
  05da484  b 0x5da258
  05da488  slwi 9, 3, 2
  05da48c  lwz 11, -23992(2)
  05da490  addi 8, 1, 112
  05da494  extsw 9, 9
  05da498  addi 0, 3, -1
  05da49c  add 9, 8, 9
  05da4a0  cmpwi 7, 0, 0
  05da4a4  clrldi 0, 3, 32
  05da4a8  mtctr 0
  05da4ac  lwz 0, 8(9)
  05da4b0  extsw 0, 0
  05da4b4  std 0, 240(1)
  05da4b8  lfd 0, 240(1)
  05da4bc  fcfid 12, 0
  05da4c0  bt- 28, 0x5da548
  05da4c4  clrldi 10, 11, 32
  05da4c8  addi 3, 3, -1
  05da4cc  addi 11, 11, 8
  05da4d0  bdz 0x5da514
  05da4d4  slwi 9, 3, 2
  05da4d8  extsw 9, 9
  05da4dc  add 9, 8, 9
  05da4e0  lwz 0, 8(9)
  05da4e4  cmpwi 7, 0, 0
  05da4e8  extsw 9, 0
  05da4ec  bt 30, 0x5da4c4
  05da4f0  std 9, 240(1)
  05da4f4  lfd 0, 240(1)
  05da4f8  addi 3, 3, -1
  05da4fc  fcfid 13, 0
  05da500  lfd 0, 0(10)
  05da504  clrldi 10, 11, 32
  05da508  addi 11, 11, 8
  05da50c  fmadd 12, 13, 0, 12
  05da510  bdnz 0x5da4d4
  05da514  stfd 12, 112(1)
  05da518  b 0x5da458
  05da51c  extsw 6, 4
  05da520  ld 5, 144(1)
  05da524  addi 3, 1, 224
  05da528  ld 4, 136(1)
  05da52c  bl 0x5d6450
  05da530  nop
  05da534  lwz 0, 224(1)
  05da538  ld 9, 232(1)
  05da53c  stw 0, 136(1)
  05da540  std 9, 144(1)
  05da544  b 0x5da40c
  05da548  li 0, 1
  05da54c  mtctr 0
  05da550  b 0x5da4c4

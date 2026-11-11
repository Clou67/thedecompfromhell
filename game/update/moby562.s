# game/update/moby562.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M562_003b66b4:   # 0x3b66b4, 0x14 bytes
  03b66b4  lis 3, 132
  03b66b8  lis 4, 1
  03b66bc  addic 3, 3, 23172
  03b66c0  stw 4, 72(3)
  03b66c4  blr

M562_003b6708:   # 0x3b6708, 0x548 bytes
  03b6708  stdu 1, -224(1)
  03b670c  mflr 0
  03b6710  std 0, 240(1)
  03b6714  stfd 29, 200(1)
  03b6718  stfd 30, 208(1)
  03b671c  stfd 31, 216(1)
  03b6720  fmr 31, 1
  03b6724  lfs 1, 4(3)
  03b6728  lfs 4, 4(4)
  03b672c  lfs 29, 0(3)
  03b6730  fsubs 7, 1, 4
  03b6734  lfs 2, 0(4)
  03b6738  lfs 5, 8(3)
  03b673c  fsubs 8, 29, 2
  03b6740  lfs 6, 8(4)
  03b6744  std 31, 192(1)
  03b6748  fsubs 9, 5, 6
  03b674c  std 30, 184(1)
  03b6750  ori 31, 3, 0
  03b6754  ori 30, 5, 0
  03b6758  fmuls 7, 7, 7
  03b675c  fmadds 7, 8, 8, 7
  03b6760  fmadds 7, 9, 9, 7
  03b6764  fsqrts 7, 7
  03b6768  fcmpu 0, 7, 3
  03b676c  std 29, 176(1)
  03b6770  cror 6, 0, 2
  03b6774  bt 6, 0x3b67fc
  03b6778  fsubs 4, 4, 1
  03b677c  fsubs 2, 2, 29
  03b6780  fsubs 6, 6, 5
  03b6784  lis 3, 59
  03b6788  addi 3, 3, 26312
  03b678c  fmuls 7, 4, 4
  03b6790  lfs 8, 0(3)
  03b6794  fsubs 8, 3, 8
  03b6798  lfs 9, 4(3)
  03b679c  fmadds 7, 2, 2, 7
  03b67a0  lfs 3, 12(4)
  03b67a4  fmadds 7, 6, 6, 7
  03b67a8  fsqrts 7, 7
  03b67ac  fdivs 8, 8, 7
  03b67b0  fsub 10, 9, 7
  03b67b4  fsub 11, 9, 7
  03b67b8  fsub 12, 9, 7
  03b67bc  fsub 13, 7, 9
  03b67c0  fsub 0, 7, 9
  03b67c4  fsub 7, 7, 9
  03b67c8  fmuls 6, 6, 8
  03b67cc  fmuls 4, 4, 8
  03b67d0  fmuls 2, 2, 8
  03b67d4  fsel 8, 10, 9, 6
  03b67d8  fsel 10, 11, 9, 4
  03b67dc  fsel 9, 12, 9, 2
  03b67e0  fsel 6, 13, 8, 6
  03b67e4  fsel 4, 0, 10, 4
  03b67e8  fsel 2, 7, 9, 2
  03b67ec  fadds 6, 6, 5
  03b67f0  fadds 4, 4, 1
  03b67f4  fadds 2, 2, 29
  03b67f8  b 0x3b6800
  03b67fc  lfs 3, 12(4)
  03b6800  fsubs 5, 2, 29
  03b6804  stfs 3, 124(1)
  03b6808  fsubs 1, 4, 1
  03b680c  lis 3, 59
  03b6810  addi 3, 3, 26312
  03b6814  lis 4, 115
  03b6818  addic 4, 4, 22784
  03b681c  fabs 3, 5
  03b6820  fabs 7, 1
  03b6824  stfs 5, 128(1)
  03b6828  stfs 2, 112(1)
  03b682c  stfs 4, 116(1)
  03b6830  stfs 6, 120(1)
  03b6834  stfs 1, 132(1)
  03b6838  fsubs 1, 3, 7
  03b683c  stfs 1, 136(1)
  03b6840  lwz 5, 128(1)
  03b6844  lfs 29, 4(3)
  03b6848  lfs 1, 128(1)
  03b684c  lwz 3, 132(1)
  03b6850  fabs 4, 1
  03b6854  lfs 1, 132(1)
  03b6858  lwz 6, 136(1)
  03b685c  rlwinm 3, 3, 3, 29, 29
  03b6860  fabs 5, 1
  03b6864  lfs 1, 136(1)
  03b6868  rlwimi 3, 6, 2, 30, 30
  03b686c  fsub 2, 1, 29
  03b6870  rlwimi 3, 5, 4, 28, 28
  03b6874  fsub 6, 1, 29
  03b6878  ori 5, 4, 0
  03b687c  rlwimi 5, 3, 2, 26, 28
  03b6880  slwi 3, 3, 2
  03b6884  clrldi 5, 5, 32
  03b6888  fsel 4, 2, 4, 7
  03b688c  lfsx 1, 4, 3
  03b6890  lfs 2, 4(5)
  03b6894  fsel 3, 6, 5, 3
  03b6898  fcmpu 0, 4, 29
  03b689c  bt 1, 0x3b68a8
  03b68a0  fmr 30, 29
  03b68a4  b 0x3b69cc
  03b68a8  fsubs 5, 3, 4
  03b68ac  fadds 3, 3, 4
  03b68b0  addic 3, 1, 16
  03b68b4  li 7, 2
  03b68b8  addic 4, 3, 124
  03b68bc  addic 5, 3, 140
  03b68c0  mtctr 7
  03b68c4  fdivs 3, 5, 3
  03b68c8  fmuls 4, 3, 3
  03b68cc  stfs 3, 152(1)
  03b68d0  stfs 3, 144(1)
  03b68d4  stfs 3, 148(1)
  03b68d8  stfs 3, 140(1)
  03b68dc  lfs 6, 152(1)
  03b68e0  lfs 7, 144(1)
  03b68e4  lfs 8, 148(1)
  03b68e8  fmuls 5, 4, 4
  03b68ec  fmuls 7, 7, 4
  03b68f0  fmuls 6, 6, 5
  03b68f4  fmuls 3, 5, 5
  03b68f8  fmuls 5, 8, 5
  03b68fc  stfs 7, 144(1)
  03b6900  fmuls 4, 6, 4
  03b6904  stfs 5, 148(1)
  03b6908  stfs 4, 152(1)
  03b690c  lfs 4, 124(3)
  03b6910  fmuls 4, 4, 3
  03b6914  stfs 4, 140(3)
  03b6918  lfs 4, 4(4)
  03b691c  addic 3, 3, 8
  03b6920  addic 4, 4, 8
  03b6924  fmuls 4, 4, 3
  03b6928  stfs 4, 4(5)
  03b692c  addic 5, 5, 8
  03b6930  bdnz 0x3b690c
  03b6934  li 5, 4
  03b6938  ori 3, 1, 0
  03b693c  mtctr 5
  03b6940  lis 4, 115
  03b6944  addic 5, 3, 140
  03b6948  addic 4, 4, 22752
  03b694c  ori 6, 5, 0
  03b6950  lfs 3, 140(3)
  03b6954  lfs 4, 0(4)
  03b6958  fmuls 3, 3, 4
  03b695c  lfs 4, 4(4)
  03b6960  addic 4, 4, 8
  03b6964  stfs 3, 140(3)
  03b6968  lfs 3, 4(5)
  03b696c  addic 3, 3, 8
  03b6970  fmuls 3, 3, 4
  03b6974  stfs 3, 4(5)
  03b6978  addic 5, 5, 8
  03b697c  bdnz 0x3b6950
  03b6980  fmr 30, 29
  03b6984  ori 3, 1, 0
  03b6988  mtctr 7
  03b698c  lfs 3, 140(3)
  03b6990  lfs 4, 4(6)
  03b6994  fadds 3, 30, 3
  03b6998  lfs 5, 8(6)
  03b699c  addic 3, 3, 16
  03b69a0  lfs 30, 12(6)
  03b69a4  addic 6, 6, 16
  03b69a8  fadds 3, 3, 4
  03b69ac  fadds 3, 3, 5
  03b69b0  fadds 30, 3, 30
  03b69b4  bdnz 0x3b698c
  03b69b8  lis 3, 59
  03b69bc  addi 3, 3, 26312
  03b69c0  lfs 3, 8(3)
  03b69c4  fadds 30, 30, 3
  03b69c8  fmadds 30, 30, 1, 2
  03b69cc  lis 3, 151
  03b69d0  fmr 2, 30
  03b69d4  addic 29, 3, -25376
  03b69d8  lfs 1, 152(29)
  03b69dc  bl 0x5026a0
  03b69e0  nop
  03b69e4  fmr 5, 1
  03b69e8  lis 3, 59
  03b69ec  addi 3, 3, 26312
  03b69f0  lfs 6, 12(3)
  03b69f4  lfs 2, 152(29)
  03b69f8  fcmpu 0, 5, 6
  03b69fc  lfs 1, 16(3)
  03b6a00  lfs 3, 0(31)
  03b6a04  lfs 4, 4(31)
  03b6a08  bt 1, 0x3b6a34
  03b6a0c  lfs 5, 116(1)
  03b6a10  lfs 6, 112(1)
  03b6a14  fsubs 5, 4, 5
  03b6a18  fsubs 6, 3, 6
  03b6a1c  fmuls 5, 5, 5
  03b6a20  fmadds 5, 6, 6, 5
  03b6a24  fsqrts 5, 5
  03b6a28  fcmpu 0, 5, 1
  03b6a2c  cror 6, 1, 2
  03b6a30  bt 6, 0x3b6ae8
  03b6a34  fmr 30, 2
  03b6a38  lis 3, 59
  03b6a3c  addi 3, 3, 26312
  03b6a40  lfs 2, 20(3)
  03b6a44  lfs 5, 24(3)
  03b6a48  fadds 2, 30, 2
  03b6a4c  lfs 6, 28(3)
  03b6a50  fsubs 7, 5, 30
  03b6a54  fsubs 5, 5, 2
  03b6a58  fsub 9, 30, 7
  03b6a5c  fsubs 8, 6, 2
  03b6a60  fsubs 6, 6, 30
  03b6a64  fsub 10, 2, 5
  03b6a68  fsel 7, 9, 7, 30
  03b6a6c  fsel 2, 10, 5, 2
  03b6a70  fsub 9, 6, 7
  03b6a74  lfs 5, 32(3)
  03b6a78  fsub 10, 8, 2
  03b6a7c  fsel 6, 9, 6, 7
  03b6a80  lfs 7, 36(3)
  03b6a84  fsel 2, 10, 8, 2
  03b6a88  fmuls 9, 6, 6
  03b6a8c  lfs 8, 40(3)
  03b6a90  lfs 12, 44(3)
  03b6a94  fmuls 10, 2, 2
  03b6a98  fmuls 11, 9, 6
  03b6a9c  fmuls 13, 10, 2
  03b6aa0  fmuls 0, 9, 11
  03b6aa4  fmadds 6, 11, 5, 6
  03b6aa8  fmuls 11, 10, 13
  03b6aac  fmadds 2, 13, 5, 2
  03b6ab0  fmuls 5, 9, 0
  03b6ab4  fmadds 6, 0, 7, 6
  03b6ab8  fmuls 13, 10, 11
  03b6abc  fmadds 2, 11, 7, 2
  03b6ac0  fmuls 7, 9, 5
  03b6ac4  fmadds 5, 5, 8, 6
  03b6ac8  fmuls 6, 10, 13
  03b6acc  fmadds 2, 13, 8, 2
  03b6ad0  fmadds 5, 7, 12, 5
  03b6ad4  fmadds 2, 6, 12, 2
  03b6ad8  fmadds 4, 5, 1, 4
  03b6adc  fmadds 1, 2, 1, 3
  03b6ae0  stfs 4, 116(1)
  03b6ae4  stfs 1, 112(1)
  03b6ae8  lis 3, 59
  03b6aec  addi 3, 3, 26312
  03b6af0  lis 4, 114
  03b6af4  lfs 1, 20(3)
  03b6af8  lfs 2, 24(3)
  03b6afc  fadds 1, 30, 1
  03b6b00  fsubs 4, 2, 30
  03b6b04  lfs 3, 28(3)
  03b6b08  fsubs 5, 3, 30
  03b6b0c  li 7, 0
  03b6b10  fsubs 2, 2, 1
  03b6b14  fsub 6, 30, 4
  03b6b18  fsubs 3, 3, 1
  03b6b1c  fsub 7, 1, 2
  03b6b20  fsel 4, 6, 4, 30
  03b6b24  lfs 6, 32(3)
  03b6b28  fsel 1, 7, 2, 1
  03b6b2c  fsub 2, 5, 4
  03b6b30  fsub 8, 3, 1
  03b6b34  fsel 2, 2, 5, 4
  03b6b38  lfs 4, 36(3)
  03b6b3c  lfs 5, 48(3)
  03b6b40  lfs 30, -3052(4)
  03b6b44  lfs 7, 40(3)
  03b6b48  fmuls 30, 30, 5
  03b6b4c  addic 4, 1, 112
  03b6b50  fsel 1, 8, 3, 1
  03b6b54  fmuls 3, 2, 2
  03b6b58  fmuls 8, 1, 1
  03b6b5c  fmuls 9, 3, 2
  03b6b60  fmuls 5, 8, 1
  03b6b64  fmuls 11, 3, 9
  03b6b68  fmadds 2, 9, 6, 2
  03b6b6c  lfs 9, 44(3)
  03b6b70  li 3, 0
  03b6b74  stw 3, 8(30)
  03b6b78  fmuls 10, 8, 5
  03b6b7c  fmadds 1, 5, 6, 1
  03b6b80  fmuls 5, 3, 11
  03b6b84  fmadds 2, 11, 4, 2
  03b6b88  ori 3, 31, 0
  03b6b8c  fmuls 6, 8, 10
  03b6b90  fmadds 1, 10, 4, 1
  03b6b94  fmuls 3, 3, 5
  03b6b98  fmadds 2, 5, 7, 2
  03b6b9c  fmuls 4, 8, 6
  03b6ba0  fmadds 1, 6, 7, 1
  03b6ba4  fmadds 3, 3, 9, 2
  03b6ba8  fneg 2, 31
  03b6bac  fmadds 4, 4, 9, 1
  03b6bb0  fmr 1, 30
  03b6bb4  fmuls 3, 3, 30
  03b6bb8  fmuls 4, 4, 30
  03b6bbc  stfs 3, 4(30)
  03b6bc0  stfs 4, 0(30)
  03b6bc4  bl 0x108180
  03b6bc8  nop
  03b6bcc  lis 3, 150
  03b6bd0  stfs 1, 8(30)
  03b6bd4  li 4, 5
  03b6bd8  addic 3, 3, 19008
  03b6bdc  lwz 3, 160(3)
  03b6be0  and 3, 3, 4
  03b6be4  cmpwi 3, 0
  03b6be8  bt 2, 0x3b6bf8
  03b6bec  lis 3, 59
  03b6bf0  addi 3, 3, 26312
  03b6bf4  lfs 29, 52(3)
  03b6bf8  lis 3, 59
  03b6bfc  addi 3, 3, 26312
  03b6c00  lfs 2, 56(3)
  03b6c04  fadds 2, 29, 2
  03b6c08  lfs 3, 60(3)
  03b6c0c  fdivs 2, 2, 30
  03b6c10  fmuls 31, 31, 2
  03b6c14  fmuls 31, 31, 3
  03b6c18  fcmpu 0, 1, 31
  03b6c1c  cror 6, 0, 2
  03b6c20  bt 6, 0x3b6c28
  03b6c24  stfs 31, 8(30)
  03b6c28  ld 0, 240(1)
  03b6c2c  mtlr 0
  03b6c30  lfd 29, 200(1)
  03b6c34  lfd 30, 208(1)
  03b6c38  lfd 31, 216(1)
  03b6c3c  ld 29, 176(1)
  03b6c40  ld 30, 184(1)
  03b6c44  ld 31, 192(1)
  03b6c48  addi 1, 1, 224
  03b6c4c  blr

M562_003b6ca8:   # 0x3b6ca8, 0xf88 bytes
  03b6ca8  stdu 1, -720(1)
  03b6cac  mflr 0
  03b6cb0  std 0, 736(1)
  03b6cb4  stfd 16, 592(1)
  03b6cb8  stfd 17, 600(1)
  03b6cbc  stfd 18, 608(1)
  03b6cc0  stfd 19, 616(1)
  03b6cc4  stfd 20, 624(1)
  03b6cc8  stfd 21, 632(1)
  03b6ccc  stfd 22, 640(1)
  03b6cd0  stfd 23, 648(1)
  03b6cd4  stfd 24, 656(1)
  03b6cd8  stfd 25, 664(1)
  03b6cdc  stfd 26, 672(1)
  03b6ce0  stfd 27, 680(1)
  03b6ce4  stfd 28, 688(1)
  03b6ce8  stfd 29, 696(1)
  03b6cec  stfd 30, 704(1)
  03b6cf0  stfd 31, 712(1)
  03b6cf4  std 29, 568(1)
  03b6cf8  std 28, 560(1)
  03b6cfc  lis 7, 0
  03b6d00  ori 29, 4, 0
  03b6d04  std 30, 576(1)
  03b6d08  std 24, 528(1)
  03b6d0c  li 28, 720
  03b6d10  lis 30, 149
  03b6d14  std 27, 552(1)
  03b6d18  addc 24, 1, 28
  03b6d1c  addic 27, 1, 160
  03b6d20  std 31, 584(1)
  03b6d24  addic 30, 30, 5056
  03b6d28  ori 31, 3, 0
  03b6d2c  ori 3, 27, 0
  03b6d30  std 5, 64(24)
  03b6d34  ori 4, 30, 0
  03b6d38  std 6, 72(24)
  03b6d3c  std 26, 544(1)
  03b6d40  std 25, 536(1)
  03b6d44  addic 28, 28, 64
  03b6d48  bl 0x500fa8
  03b6d4c  nop
  03b6d50  addic 3, 1, 208
  03b6d54  ori 4, 27, 0
  03b6d58  bl 0x5010c0
  03b6d5c  nop
  03b6d60  lwz 29, 80(29)
  03b6d64  cmpwi 29, 0
  03b6d68  bt 2, 0x3b7bc0
  03b6d6c  lis 25, 151
  03b6d70  lis 3, 59
  03b6d74  addic 25, 25, -25376
  03b6d78  addi 3, 3, 27728
  03b6d7c  lis 27, 115
  03b6d80  lwz 4, 1648(25)
  03b6d84  lwz 5, 1652(25)
  03b6d88  lfs 1, 1648(25)
  03b6d8c  lfs 2, 1652(25)
  03b6d90  fabs 3, 1
  03b6d94  lfs 27, 0(3)
  03b6d98  fabs 5, 2
  03b6d9c  lwz 29, 120(29)
  03b6da0  lfs 26, 4(3)
  03b6da4  lfs 25, 8(3)
  03b6da8  lfs 31, 1600(25)
  03b6dac  rlwinm 5, 5, 3, 29, 29
  03b6db0  addic 27, 27, 22784
  03b6db4  fsubs 1, 3, 5
  03b6db8  stfs 1, 292(1)
  03b6dbc  lfs 30, 1604(25)
  03b6dc0  lfs 29, 1608(25)
  03b6dc4  lfs 28, 1612(25)
  03b6dc8  lfs 16, 12(3)
  03b6dcc  lwz 3, 292(1)
  03b6dd0  lfs 1, 292(1)
  03b6dd4  rlwimi 5, 3, 2, 30, 30
  03b6dd8  fsub 4, 1, 26
  03b6ddc  ori 3, 27, 0
  03b6de0  fsub 6, 1, 26
  03b6de4  rlwimi 5, 4, 4, 28, 28
  03b6de8  rlwimi 3, 5, 2, 26, 28
  03b6dec  slwi 4, 5, 2
  03b6df0  clrldi 3, 3, 32
  03b6df4  lfsx 1, 27, 4
  03b6df8  fsel 4, 4, 3, 5
  03b6dfc  lfs 2, 4(3)
  03b6e00  fsel 3, 6, 5, 3
  03b6e04  fcmpu 0, 4, 26
  03b6e08  bt 1, 0x3b6e14
  03b6e0c  fmr 1, 26
  03b6e10  b 0x3b6f2c
  03b6e14  fsubs 5, 3, 4
  03b6e18  fadds 3, 3, 4
  03b6e1c  addic 3, 1, 16
  03b6e20  li 6, 2
  03b6e24  addic 5, 3, 488
  03b6e28  addic 4, 3, 472
  03b6e2c  mtctr 6
  03b6e30  fdivs 3, 5, 3
  03b6e34  fmuls 4, 3, 3
  03b6e38  stfs 3, 500(1)
  03b6e3c  stfs 3, 492(1)
  03b6e40  stfs 3, 496(1)
  03b6e44  stfs 3, 488(1)
  03b6e48  lfs 6, 500(1)
  03b6e4c  lfs 7, 492(1)
  03b6e50  lfs 8, 496(1)
  03b6e54  fmuls 5, 4, 4
  03b6e58  fmuls 7, 7, 4
  03b6e5c  fmuls 6, 6, 5
  03b6e60  fmuls 3, 5, 5
  03b6e64  fmuls 5, 8, 5
  03b6e68  stfs 7, 492(1)
  03b6e6c  fmuls 4, 6, 4
  03b6e70  stfs 5, 496(1)
  03b6e74  stfs 4, 500(1)
  03b6e78  lfs 4, 472(3)
  03b6e7c  fmuls 4, 4, 3
  03b6e80  stfs 4, 488(3)
  03b6e84  lfs 4, 4(4)
  03b6e88  addic 4, 4, 8
  03b6e8c  fmuls 4, 4, 3
  03b6e90  addic 3, 3, 8
  03b6e94  stfs 4, 4(5)
  03b6e98  addic 5, 5, 8
  03b6e9c  bdnz 0x3b6e78
  03b6ea0  li 5, 4
  03b6ea4  ori 3, 1, 0
  03b6ea8  mtctr 5
  03b6eac  lis 4, 115
  03b6eb0  addic 5, 3, 488
  03b6eb4  addic 4, 4, 22752
  03b6eb8  ori 7, 5, 0
  03b6ebc  lfs 3, 488(3)
  03b6ec0  lfs 4, 0(4)
  03b6ec4  fmuls 3, 3, 4
  03b6ec8  lfs 4, 4(4)
  03b6ecc  addic 4, 4, 8
  03b6ed0  stfs 3, 488(3)
  03b6ed4  lfs 3, 4(5)
  03b6ed8  addic 3, 3, 8
  03b6edc  fmuls 3, 3, 4
  03b6ee0  stfs 3, 4(5)
  03b6ee4  addic 5, 5, 8
  03b6ee8  bdnz 0x3b6ebc
  03b6eec  ori 3, 1, 0
  03b6ef0  fmr 3, 26
  03b6ef4  mtctr 6
  03b6ef8  lfs 4, 488(3)
  03b6efc  fadds 3, 3, 4
  03b6f00  lfs 4, 4(7)
  03b6f04  addic 3, 3, 16
  03b6f08  lfs 5, 8(7)
  03b6f0c  lfs 6, 12(7)
  03b6f10  addic 7, 7, 16
  03b6f14  fadds 3, 3, 4
  03b6f18  fadds 3, 3, 5
  03b6f1c  fadds 3, 3, 6
  03b6f20  bdnz 0x3b6ef8
  03b6f24  fadds 3, 3, 16
  03b6f28  fmadds 1, 3, 1, 2
  03b6f2c  fmr 2, 1
  03b6f30  fmr 1, 25
  03b6f34  bl 0x502578
  03b6f38  nop
  03b6f3c  lis 3, 59
  03b6f40  addi 3, 3, 27728
  03b6f44  lfs 24, 16(3)
  03b6f48  lfs 23, 20(3)
  03b6f4c  fadds 1, 1, 24
  03b6f50  lfs 22, 24(3)
  03b6f54  lwz 4, 1648(25)
  03b6f58  lfs 4, 1648(25)
  03b6f5c  lwz 5, 1652(25)
  03b6f60  lfs 6, 1652(25)
  03b6f64  fabs 7, 4
  03b6f68  lfs 21, 28(3)
  03b6f6c  fabs 6, 6
  03b6f70  lfs 20, 32(3)
  03b6f74  fsubs 2, 23, 1
  03b6f78  fsubs 3, 22, 1
  03b6f7c  lfs 19, 36(3)
  03b6f80  lfs 18, 40(3)
  03b6f84  lfs 17, 44(3)
  03b6f88  rlwinm 5, 5, 3, 29, 29
  03b6f8c  fsub 5, 1, 2
  03b6f90  fsel 1, 5, 2, 1
  03b6f94  fsubs 2, 7, 6
  03b6f98  fsub 4, 3, 1
  03b6f9c  stfs 2, 288(1)
  03b6fa0  fsel 1, 4, 3, 1
  03b6fa4  fmuls 2, 1, 1
  03b6fa8  lwz 3, 288(1)
  03b6fac  lfs 5, 288(1)
  03b6fb0  rlwimi 5, 3, 2, 30, 30
  03b6fb4  ori 3, 27, 0
  03b6fb8  rlwimi 5, 4, 4, 28, 28
  03b6fbc  fmuls 3, 2, 1
  03b6fc0  rlwimi 3, 5, 2, 26, 28
  03b6fc4  slwi 4, 5, 2
  03b6fc8  clrldi 3, 3, 32
  03b6fcc  fmuls 4, 2, 3
  03b6fd0  fmadds 1, 3, 21, 1
  03b6fd4  fsub 3, 5, 26
  03b6fd8  fmuls 8, 2, 4
  03b6fdc  fmadds 1, 4, 20, 1
  03b6fe0  fsel 4, 3, 7, 6
  03b6fe4  fsub 3, 5, 26
  03b6fe8  fmuls 2, 2, 8
  03b6fec  fmadds 1, 8, 19, 1
  03b6ff0  fcmpu 0, 4, 26
  03b6ff4  fsel 3, 3, 6, 7
  03b6ff8  fmadds 1, 2, 18, 1
  03b6ffc  fmuls 1, 1, 17
  03b7000  stfs 1, 64(24)
  03b7004  lfsx 1, 27, 4
  03b7008  lfs 2, 4(3)
  03b700c  bt 1, 0x3b7018
  03b7010  fmr 1, 26
  03b7014  b 0x3b7130
  03b7018  fsubs 5, 3, 4
  03b701c  fadds 3, 3, 4
  03b7020  addic 3, 1, 16
  03b7024  li 7, 2
  03b7028  addic 4, 3, 440
  03b702c  addic 5, 3, 456
  03b7030  mtctr 7
  03b7034  fdivs 3, 5, 3
  03b7038  fmuls 4, 3, 3
  03b703c  stfs 3, 468(1)
  03b7040  stfs 3, 460(1)
  03b7044  stfs 3, 464(1)
  03b7048  stfs 3, 456(1)
  03b704c  lfs 6, 468(1)
  03b7050  lfs 7, 460(1)
  03b7054  lfs 8, 464(1)
  03b7058  fmuls 5, 4, 4
  03b705c  fmuls 7, 7, 4
  03b7060  fmuls 6, 6, 5
  03b7064  fmuls 3, 5, 5
  03b7068  fmuls 5, 8, 5
  03b706c  stfs 7, 460(1)
  03b7070  fmuls 4, 6, 4
  03b7074  stfs 5, 464(1)
  03b7078  stfs 4, 468(1)
  03b707c  lfs 4, 440(3)
  03b7080  fmuls 4, 4, 3
  03b7084  stfs 4, 456(3)
  03b7088  lfs 4, 4(4)
  03b708c  addic 3, 3, 8
  03b7090  addic 4, 4, 8
  03b7094  fmuls 4, 4, 3
  03b7098  stfs 4, 4(5)
  03b709c  addic 5, 5, 8
  03b70a0  bdnz 0x3b707c
  03b70a4  li 5, 4
  03b70a8  ori 3, 1, 0
  03b70ac  mtctr 5
  03b70b0  lis 4, 115
  03b70b4  addic 5, 3, 456
  03b70b8  addic 4, 4, 22752
  03b70bc  ori 6, 5, 0
  03b70c0  lfs 3, 456(3)
  03b70c4  lfs 4, 0(4)
  03b70c8  fmuls 3, 3, 4
  03b70cc  lfs 4, 4(4)
  03b70d0  addic 4, 4, 8
  03b70d4  stfs 3, 456(3)
  03b70d8  lfs 3, 4(5)
  03b70dc  addic 3, 3, 8
  03b70e0  fmuls 3, 3, 4
  03b70e4  stfs 3, 4(5)
  03b70e8  addic 5, 5, 8
  03b70ec  bdnz 0x3b70c0
  03b70f0  fmr 3, 26
  03b70f4  ori 3, 1, 0
  03b70f8  mtctr 7
  03b70fc  lfs 4, 456(3)
  03b7100  fadds 3, 3, 4
  03b7104  addic 3, 3, 16
  03b7108  lfs 4, 4(6)
  03b710c  lfs 5, 8(6)
  03b7110  lfs 6, 12(6)
  03b7114  addic 6, 6, 16
  03b7118  fadds 3, 3, 4
  03b711c  fadds 3, 3, 5
  03b7120  fadds 3, 3, 6
  03b7124  bdnz 0x3b70fc
  03b7128  fadds 3, 3, 16
  03b712c  fmadds 1, 3, 1, 2
  03b7130  fmr 2, 1
  03b7134  fmr 1, 25
  03b7138  bl 0x502578
  03b713c  nop
  03b7140  fsubs 2, 23, 1
  03b7144  fsubs 3, 22, 1
  03b7148  fabs 7, 31
  03b714c  lfs 25, 64(24)
  03b7150  fabs 10, 30
  03b7154  li 3, 0
  03b7158  lis 4, 59
  03b715c  addi 5, 4, 27728
  03b7160  fsub 4, 1, 2
  03b7164  fsubs 11, 7, 10
  03b7168  fsel 1, 4, 2, 1
  03b716c  lfs 4, 128(25)
  03b7170  lfs 9, 132(25)
  03b7174  fadds 25, 25, 4
  03b7178  fsub 8, 11, 26
  03b717c  stw 3, 72(24)
  03b7180  fsub 11, 11, 26
  03b7184  fsub 2, 3, 1
  03b7188  fsel 8, 8, 7, 10
  03b718c  stfs 25, 64(24)
  03b7190  lwz 3, 240(1)
  03b7194  fsel 1, 2, 3, 1
  03b7198  fsel 7, 11, 10, 7
  03b719c  fcmpu 0, 8, 26
  03b71a0  fmuls 2, 1, 1
  03b71a4  cror 6, 0, 2
  03b71a8  fmuls 3, 2, 1
  03b71ac  fmuls 5, 2, 3
  03b71b0  fmadds 1, 3, 21, 1
  03b71b4  fmuls 3, 2, 5
  03b71b8  fmadds 1, 5, 20, 1
  03b71bc  fmuls 2, 2, 3
  03b71c0  fmadds 1, 3, 19, 1
  03b71c4  lfs 3, 240(1)
  03b71c8  lwz 4, 244(1)
  03b71cc  lfs 4, 244(1)
  03b71d0  lfs 5, 248(1)
  03b71d4  lfs 6, 252(1)
  03b71d8  lfs 12, 136(25)
  03b71dc  fmadds 1, 2, 18, 1
  03b71e0  fmuls 2, 1, 17
  03b71e4  fadds 1, 2, 9
  03b71e8  stfs 2, 68(24)
  03b71ec  stfs 1, 68(24)
  03b71f0  lfs 2, 48(5)
  03b71f4  fadds 2, 12, 2
  03b71f8  stfs 2, 72(24)
  03b71fc  bt 6, 0x3b72d4
  03b7200  fsubs 9, 7, 8
  03b7204  fadds 7, 7, 8
  03b7208  addic 5, 1, 16
  03b720c  li 8, 2
  03b7210  addic 6, 5, 408
  03b7214  addic 7, 5, 424
  03b7218  mtctr 8
  03b721c  fdivs 7, 9, 7
  03b7220  fmuls 8, 7, 7
  03b7224  stfs 7, 436(1)
  03b7228  stfs 7, 428(1)
  03b722c  stfs 7, 432(1)
  03b7230  stfs 7, 424(1)
  03b7234  lfs 10, 436(1)
  03b7238  lfs 11, 428(1)
  03b723c  lfs 12, 432(1)
  03b7240  fmuls 9, 8, 8
  03b7244  fmuls 11, 11, 8
  03b7248  fmuls 10, 10, 9
  03b724c  fmuls 7, 9, 9
  03b7250  fmuls 9, 12, 9
  03b7254  stfs 11, 428(1)
  03b7258  fmuls 8, 10, 8
  03b725c  stfs 9, 432(1)
  03b7260  stfs 8, 436(1)
  03b7264  lfs 8, 408(5)
  03b7268  fmuls 8, 8, 7
  03b726c  stfs 8, 424(5)
  03b7270  lfs 8, 4(6)
  03b7274  addic 5, 5, 8
  03b7278  addic 6, 6, 8
  03b727c  fmuls 8, 8, 7
  03b7280  stfs 8, 4(7)
  03b7284  addic 7, 7, 8
  03b7288  bdnz 0x3b7264
  03b728c  lis 6, 115
  03b7290  ori 5, 1, 0
  03b7294  li 8, 4
  03b7298  addic 6, 6, 22752
  03b729c  addic 7, 5, 424
  03b72a0  mtctr 8
  03b72a4  lfs 7, 424(5)
  03b72a8  lfs 8, 0(6)
  03b72ac  fmuls 7, 7, 8
  03b72b0  lfs 8, 4(6)
  03b72b4  addic 6, 6, 8
  03b72b8  stfs 7, 424(5)
  03b72bc  lfs 7, 4(7)
  03b72c0  addic 5, 5, 8
  03b72c4  fmuls 7, 7, 8
  03b72c8  stfs 7, 4(7)
  03b72cc  addic 7, 7, 8
  03b72d0  bdnz 0x3b72a4
  03b72d4  lis 26, 150
  03b72d8  li 5, 5
  03b72dc  fmr 7, 26
  03b72e0  addic 26, 26, 19008
  03b72e4  lwz 6, 160(26)
  03b72e8  and 5, 6, 5
  03b72ec  cmpwi 1, 5, 0
  03b72f0  bt 6, 0x3b72f8
  03b72f4  fmr 7, 27
  03b72f8  lis 5, 59
  03b72fc  fmr 8, 31
  03b7300  addi 5, 5, 27728
  03b7304  lfs 31, 52(5)
  03b7308  stfs 28, 124(1)
  03b730c  fadds 7, 7, 31
  03b7310  fmadds 8, 8, 7, 25
  03b7314  fmadds 1, 30, 7, 1
  03b7318  fmadds 2, 29, 7, 2
  03b731c  stfs 8, 112(1)
  03b7320  stfs 1, 116(1)
  03b7324  stfs 2, 120(1)
  03b7328  bt 6, 0x3b7b60
  03b732c  lbz 5, 8364(25)
  03b7330  cmpwi 5, 0
  03b7334  bf 2, 0x3b7b60
  03b7338  fabs 2, 3
  03b733c  fabs 7, 4
  03b7340  lwz 5, 8320(25)
  03b7344  stfs 3, 128(1)
  03b7348  stfs 4, 132(1)
  03b734c  stfs 5, 136(1)
  03b7350  stfs 6, 140(1)
  03b7354  lfs 5, 72(5)
  03b7358  rlwinm 4, 4, 3, 29, 29
  03b735c  fsubs 1, 2, 7
  03b7360  stfs 1, 284(1)
  03b7364  lwz 5, 284(1)
  03b7368  lfs 1, 284(1)
  03b736c  rlwimi 4, 5, 2, 30, 30
  03b7370  fsub 4, 1, 26
  03b7374  fsub 6, 1, 26
  03b7378  rlwimi 4, 3, 4, 28, 28
  03b737c  ori 3, 27, 0
  03b7380  rlwimi 3, 4, 2, 26, 28
  03b7384  slwi 4, 4, 2
  03b7388  clrldi 3, 3, 32
  03b738c  fsel 4, 4, 2, 7
  03b7390  lfsx 3, 27, 4
  03b7394  fsel 2, 6, 7, 2
  03b7398  lfs 1, 4(3)
  03b739c  fcmpu 0, 4, 26
  03b73a0  bt 1, 0x3b73ac
  03b73a4  fmr 3, 26
  03b73a8  b 0x3b74c4
  03b73ac  fsubs 6, 2, 4
  03b73b0  fadds 2, 2, 4
  03b73b4  addic 3, 1, 16
  03b73b8  li 7, 2
  03b73bc  addic 5, 3, 392
  03b73c0  addic 4, 3, 376
  03b73c4  mtctr 7
  03b73c8  fdivs 2, 6, 2
  03b73cc  fmuls 4, 2, 2
  03b73d0  stfs 2, 404(1)
  03b73d4  stfs 2, 396(1)
  03b73d8  stfs 2, 400(1)
  03b73dc  stfs 2, 392(1)
  03b73e0  lfs 7, 404(1)
  03b73e4  lfs 8, 396(1)
  03b73e8  lfs 9, 400(1)
  03b73ec  fmuls 6, 4, 4
  03b73f0  fmuls 8, 8, 4
  03b73f4  fmuls 7, 7, 6
  03b73f8  fmuls 2, 6, 6
  03b73fc  fmuls 6, 9, 6
  03b7400  stfs 8, 396(1)
  03b7404  fmuls 4, 7, 4
  03b7408  stfs 6, 400(1)
  03b740c  stfs 4, 404(1)
  03b7410  lfs 4, 376(3)
  03b7414  fmuls 4, 4, 2
  03b7418  stfs 4, 392(3)
  03b741c  lfs 4, 4(4)
  03b7420  addic 4, 4, 8
  03b7424  fmuls 4, 4, 2
  03b7428  addic 3, 3, 8
  03b742c  stfs 4, 4(5)
  03b7430  addic 5, 5, 8
  03b7434  bdnz 0x3b7410
  03b7438  li 5, 4
  03b743c  ori 3, 1, 0
  03b7440  mtctr 5
  03b7444  lis 4, 115
  03b7448  addic 5, 3, 392
  03b744c  addic 4, 4, 22752
  03b7450  ori 6, 5, 0
  03b7454  lfs 2, 392(3)
  03b7458  lfs 4, 0(4)
  03b745c  fmuls 2, 2, 4
  03b7460  lfs 4, 4(4)
  03b7464  addic 4, 4, 8
  03b7468  stfs 2, 392(3)
  03b746c  lfs 2, 4(5)
  03b7470  addic 3, 3, 8
  03b7474  fmuls 2, 2, 4
  03b7478  stfs 2, 4(5)
  03b747c  addic 5, 5, 8
  03b7480  bdnz 0x3b7454
  03b7484  ori 3, 1, 0
  03b7488  fmr 2, 26
  03b748c  mtctr 7
  03b7490  lfs 4, 392(3)
  03b7494  fadds 2, 2, 4
  03b7498  lfs 4, 4(6)
  03b749c  addic 3, 3, 16
  03b74a0  lfs 6, 8(6)
  03b74a4  lfs 7, 12(6)
  03b74a8  addic 6, 6, 16
  03b74ac  fadds 2, 2, 4
  03b74b0  fadds 2, 2, 6
  03b74b4  fadds 2, 2, 7
  03b74b8  bdnz 0x3b7490
  03b74bc  fadds 2, 2, 16
  03b74c0  fmadds 3, 2, 3, 1
  03b74c4  fmr 1, 5
  03b74c8  fmr 2, 3
  03b74cc  bl 0x5025e0
  03b74d0  nop
  03b74d4  lwz 3, 128(1)
  03b74d8  lwz 4, 132(1)
  03b74dc  lfs 2, 128(1)
  03b74e0  lfs 3, 132(1)
  03b74e4  rlwinm 6, 4, 3, 29, 29
  03b74e8  fabs 6, 2
  03b74ec  fabs 8, 3
  03b74f0  lwz 5, 136(1)
  03b74f4  fsubs 1, 6, 8
  03b74f8  stfs 1, 280(1)
  03b74fc  lfs 4, 136(1)
  03b7500  lwz 4, 160(26)
  03b7504  lwz 7, 280(1)
  03b7508  lfs 1, 280(1)
  03b750c  rlwimi 6, 7, 2, 30, 30
  03b7510  fsub 7, 1, 26
  03b7514  fsub 9, 1, 26
  03b7518  rlwimi 6, 3, 4, 28, 28
  03b751c  ori 3, 27, 0
  03b7520  rlwimi 3, 6, 2, 26, 28
  03b7524  slwi 6, 6, 2
  03b7528  clrldi 3, 3, 32
  03b752c  fsel 7, 7, 6, 8
  03b7530  lfsx 5, 27, 6
  03b7534  fsel 6, 9, 8, 6
  03b7538  lfs 1, 4(3)
  03b753c  fcmpu 0, 7, 26
  03b7540  bt 1, 0x3b754c
  03b7544  fmr 30, 26
  03b7548  b 0x3b7664
  03b754c  fsubs 8, 6, 7
  03b7550  fadds 6, 6, 7
  03b7554  addic 3, 1, 16
  03b7558  li 8, 2
  03b755c  addic 7, 3, 360
  03b7560  addic 6, 3, 344
  03b7564  mtctr 8
  03b7568  fdivs 6, 8, 6
  03b756c  fmuls 7, 6, 6
  03b7570  stfs 6, 372(1)
  03b7574  stfs 6, 364(1)
  03b7578  stfs 6, 368(1)
  03b757c  stfs 6, 360(1)
  03b7580  lfs 9, 372(1)
  03b7584  lfs 10, 364(1)
  03b7588  lfs 11, 368(1)
  03b758c  fmuls 8, 7, 7
  03b7590  fmuls 10, 10, 7
  03b7594  fmuls 9, 9, 8
  03b7598  fmuls 6, 8, 8
  03b759c  fmuls 8, 11, 8
  03b75a0  stfs 10, 364(1)
  03b75a4  fmuls 7, 9, 7
  03b75a8  stfs 8, 368(1)
  03b75ac  stfs 7, 372(1)
  03b75b0  lfs 7, 344(3)
  03b75b4  fmuls 7, 7, 6
  03b75b8  stfs 7, 360(3)
  03b75bc  lfs 7, 4(6)
  03b75c0  addic 6, 6, 8
  03b75c4  fmuls 7, 7, 6
  03b75c8  addic 3, 3, 8
  03b75cc  stfs 7, 4(7)
  03b75d0  addic 7, 7, 8
  03b75d4  bdnz 0x3b75b0
  03b75d8  li 7, 4
  03b75dc  ori 3, 1, 0
  03b75e0  mtctr 7
  03b75e4  lis 6, 115
  03b75e8  addic 7, 3, 360
  03b75ec  addic 6, 6, 22752
  03b75f0  ori 9, 7, 0
  03b75f4  lfs 6, 360(3)
  03b75f8  lfs 7, 0(6)
  03b75fc  fmuls 6, 6, 7
  03b7600  lfs 7, 4(6)
  03b7604  addic 6, 6, 8
  03b7608  stfs 6, 360(3)
  03b760c  lfs 6, 4(7)
  03b7610  addic 3, 3, 8
  03b7614  fmuls 6, 6, 7
  03b7618  stfs 6, 4(7)
  03b761c  addic 7, 7, 8
  03b7620  bdnz 0x3b75f4
  03b7624  ori 3, 1, 0
  03b7628  fmr 30, 26
  03b762c  mtctr 8
  03b7630  lfs 6, 360(3)
  03b7634  lfs 7, 4(9)
  03b7638  fadds 6, 30, 6
  03b763c  lfs 8, 8(9)
  03b7640  lfs 30, 12(9)
  03b7644  addic 3, 3, 16
  03b7648  addic 9, 9, 16
  03b764c  fadds 6, 6, 7
  03b7650  fadds 6, 6, 8
  03b7654  fadds 30, 6, 30
  03b7658  bdnz 0x3b7630
  03b765c  fadds 30, 30, 16
  03b7660  fmadds 30, 30, 5, 1
  03b7664  fmuls 1, 3, 3
  03b7668  fabs 3, 4
  03b766c  rlwinm 3, 5, 3, 29, 29
  03b7670  fmadds 1, 2, 2, 1
  03b7674  fsqrts 1, 1
  03b7678  fabs 5, 1
  03b767c  stfs 1, 272(1)
  03b7680  fsubs 1, 5, 3
  03b7684  stfs 1, 276(1)
  03b7688  lwz 5, 272(1)
  03b768c  lfs 1, 272(1)
  03b7690  lwz 6, 276(1)
  03b7694  fabs 4, 1
  03b7698  lfs 1, 276(1)
  03b769c  rlwimi 3, 6, 2, 30, 30
  03b76a0  fsub 2, 1, 26
  03b76a4  rlwimi 3, 5, 4, 28, 28
  03b76a8  fsub 6, 1, 26
  03b76ac  ori 5, 27, 0
  03b76b0  rlwimi 5, 3, 2, 26, 28
  03b76b4  slwi 3, 3, 2
  03b76b8  clrldi 5, 5, 32
  03b76bc  fsel 4, 2, 4, 3
  03b76c0  lfsx 2, 27, 3
  03b76c4  fsel 3, 6, 3, 5
  03b76c8  lfs 1, 4(5)
  03b76cc  fcmpu 0, 4, 26
  03b76d0  bt 1, 0x3b76dc
  03b76d4  fmr 2, 26
  03b76d8  b 0x3b77f4
  03b76dc  fsubs 5, 3, 4
  03b76e0  fadds 3, 3, 4
  03b76e4  addic 3, 1, 16
  03b76e8  li 8, 2
  03b76ec  addic 6, 3, 328
  03b76f0  addic 5, 3, 312
  03b76f4  mtctr 8
  03b76f8  fdivs 3, 5, 3
  03b76fc  fmuls 4, 3, 3
  03b7700  stfs 3, 340(1)
  03b7704  stfs 3, 332(1)
  03b7708  stfs 3, 336(1)
  03b770c  stfs 3, 328(1)
  03b7710  lfs 6, 340(1)
  03b7714  lfs 7, 332(1)
  03b7718  lfs 8, 336(1)
  03b771c  fmuls 5, 4, 4
  03b7720  fmuls 7, 7, 4
  03b7724  fmuls 6, 6, 5
  03b7728  fmuls 3, 5, 5
  03b772c  fmuls 5, 8, 5
  03b7730  stfs 7, 332(1)
  03b7734  fmuls 4, 6, 4
  03b7738  stfs 5, 336(1)
  03b773c  stfs 4, 340(1)
  03b7740  lfs 4, 312(3)
  03b7744  fmuls 4, 4, 3
  03b7748  stfs 4, 328(3)
  03b774c  lfs 4, 4(5)
  03b7750  addic 5, 5, 8
  03b7754  fmuls 4, 4, 3
  03b7758  addic 3, 3, 8
  03b775c  stfs 4, 4(6)
  03b7760  addic 6, 6, 8
  03b7764  bdnz 0x3b7740
  03b7768  li 6, 4
  03b776c  ori 3, 1, 0
  03b7770  mtctr 6
  03b7774  lis 5, 115
  03b7778  addic 6, 3, 328
  03b777c  addic 5, 5, 22752
  03b7780  ori 7, 6, 0
  03b7784  lfs 3, 328(3)
  03b7788  lfs 4, 0(5)
  03b778c  fmuls 3, 3, 4
  03b7790  lfs 4, 4(5)
  03b7794  addic 5, 5, 8
  03b7798  stfs 3, 328(3)
  03b779c  lfs 3, 4(6)
  03b77a0  addic 3, 3, 8
  03b77a4  fmuls 3, 3, 4
  03b77a8  stfs 3, 4(6)
  03b77ac  addic 6, 6, 8
  03b77b0  bdnz 0x3b7784
  03b77b4  ori 3, 1, 0
  03b77b8  fmr 3, 26
  03b77bc  mtctr 8
  03b77c0  lfs 4, 328(3)
  03b77c4  fadds 3, 3, 4
  03b77c8  lfs 4, 4(7)
  03b77cc  addic 3, 3, 16
  03b77d0  lfs 5, 8(7)
  03b77d4  lfs 6, 12(7)
  03b77d8  addic 7, 7, 16
  03b77dc  fadds 3, 3, 4
  03b77e0  fadds 3, 3, 5
  03b77e4  fadds 3, 3, 6
  03b77e8  bdnz 0x3b77c0
  03b77ec  fadds 3, 3, 16
  03b77f0  fmadds 2, 3, 2, 1
  03b77f4  lis 3, 59
  03b77f8  addi 3, 3, 27728
  03b77fc  lfs 1, 56(3)
  03b7800  lfs 3, 60(3)
  03b7804  fsub 4, 1, 2
  03b7808  li 3, 5
  03b780c  and 3, 4, 3
  03b7810  cmpwi 3, 0
  03b7814  fsel 1, 4, 2, 1
  03b7818  fmr 2, 26
  03b781c  fsub 4, 1, 3
  03b7820  fsel 1, 4, 1, 3
  03b7824  bt 2, 0x3b782c
  03b7828  fmr 2, 27
  03b782c  fmr 3, 1
  03b7830  fadds 1, 2, 31
  03b7834  addic 3, 1, 128
  03b7838  fmr 2, 30
  03b783c  bl 0xfe610
  03b7840  nop
  03b7844  lfs 1, 132(1)
  03b7848  lfs 2, 128(1)
  03b784c  fmuls 1, 1, 1
  03b7850  lis 3, 59
  03b7854  lis 4, 114
  03b7858  addi 3, 3, 27728
  03b785c  fmadds 1, 2, 2, 1
  03b7860  lfs 5, 64(3)
  03b7864  lfs 2, 68(3)
  03b7868  lfs 29, 136(1)
  03b786c  li 3, 5
  03b7870  lfs 4, -3048(4)
  03b7874  lwz 4, 160(26)
  03b7878  fmuls 2, 4, 2
  03b787c  fsqrts 3, 1
  03b7880  and 3, 4, 3
  03b7884  cmpwi 3, 0
  03b7888  fmr 1, 26
  03b788c  fsub 4, 26, 3
  03b7890  fsub 6, 3, 26
  03b7894  fsel 4, 4, 5, 3
  03b7898  fsel 3, 6, 4, 3
  03b789c  fdivs 29, 29, 3
  03b78a0  bt 2, 0x3b78a8
  03b78a4  fmr 1, 27
  03b78a8  fadds 1, 1, 31
  03b78ac  lis 3, 59
  03b78b0  addi 3, 3, 27728
  03b78b4  fsubs 4, 27, 29
  03b78b8  lfs 3, 72(3)
  03b78bc  fmuls 1, 2, 1
  03b78c0  fmuls 1, 1, 3
  03b78c4  lfs 3, 76(3)
  03b78c8  fsqrts 1, 1
  03b78cc  fmuls 3, 1, 3
  03b78d0  fmuls 1, 3, 1
  03b78d4  fmuls 1, 1, 4
  03b78d8  fdivs 1, 1, 2
  03b78dc  fcmpu 0, 1, 26
  03b78e0  fmuls 29, 29, 1
  03b78e4  cror 6, 0, 2
  03b78e8  bt 6, 0x3b7b68
  03b78ec  fadds 2, 30, 24
  03b78f0  fsubs 3, 23, 30
  03b78f4  fsubs 4, 22, 30
  03b78f8  addic 3, 30, 320
  03b78fc  addic 4, 1, 144
  03b7900  li 5, 2
  03b7904  fsubs 5, 23, 2
  03b7908  fsub 6, 30, 3
  03b790c  fsubs 7, 22, 2
  03b7910  ori 6, 31, 0
  03b7914  li 7, 0
  03b7918  fsub 8, 2, 5
  03b791c  fsel 3, 6, 3, 30
  03b7920  fsel 2, 8, 5, 2
  03b7924  fsub 5, 4, 3
  03b7928  fsub 6, 7, 2
  03b792c  fsel 3, 5, 4, 3
  03b7930  fsel 2, 6, 7, 2
  03b7934  fmuls 4, 3, 3
  03b7938  fmuls 5, 2, 2
  03b793c  fmuls 6, 4, 3
  03b7940  fmuls 7, 5, 2
  03b7944  fmuls 8, 4, 6
  03b7948  fmadds 3, 6, 21, 3
  03b794c  fmuls 6, 5, 7
  03b7950  fmadds 2, 7, 21, 2
  03b7954  fmuls 7, 4, 8
  03b7958  fmadds 3, 8, 20, 3
  03b795c  fmuls 8, 5, 6
  03b7960  fmadds 2, 6, 20, 2
  03b7964  fmuls 4, 4, 7
  03b7968  fmadds 3, 7, 19, 3
  03b796c  fmuls 5, 5, 8
  03b7970  fmadds 2, 8, 19, 2
  03b7974  fmadds 30, 4, 18, 3
  03b7978  lfs 3, 320(30)
  03b797c  lfs 4, 324(30)
  03b7980  lfs 6, 328(30)
  03b7984  stfs 29, 136(1)
  03b7988  fmadds 24, 5, 18, 2
  03b798c  fadds 2, 6, 29
  03b7990  fmuls 30, 30, 1
  03b7994  lfs 5, 332(30)
  03b7998  fmuls 24, 24, 1
  03b799c  fadds 1, 4, 30
  03b79a0  stfs 30, 132(1)
  03b79a4  stfs 2, 152(1)
  03b79a8  stfs 5, 156(1)
  03b79ac  fadds 2, 3, 24
  03b79b0  stfs 24, 128(1)
  03b79b4  stfs 1, 148(1)
  03b79b8  stfs 2, 144(1)
  03b79bc  bl 0x57820
  03b79c0  nop
  03b79c4  cmpwi 3, 0
  03b79c8  bt 2, 0x3b7b14
  03b79cc  lis 3, 161
  03b79d0  lwz 4, 8320(25)
  03b79d4  addic 3, 3, 2368
  03b79d8  lwz 5, 24(3)
  03b79dc  cmpw 5, 4
  03b79e0  bt 2, 0x3b7b14
  03b79e4  lfs 1, 32(3)
  03b79e8  lfs 2, 36(3)
  03b79ec  lfs 3, 64(24)
  03b79f0  lfs 4, 68(24)
  03b79f4  fsubs 3, 1, 3
  03b79f8  fsubs 4, 2, 4
  03b79fc  stfs 1, 112(1)
  03b7a00  lfs 1, 40(3)
  03b7a04  stfs 2, 116(1)
  03b7a08  lfs 2, 44(3)
  03b7a0c  stfs 1, 120(1)
  03b7a10  stfs 2, 124(1)
  03b7a14  fabs 3, 3
  03b7a18  fabs 4, 4
  03b7a1c  fsubs 1, 3, 4
  03b7a20  fsub 2, 1, 26
  03b7a24  fsub 1, 1, 26
  03b7a28  fsel 2, 2, 3, 4
  03b7a2c  fsel 1, 1, 4, 3
  03b7a30  fcmpu 0, 2, 26
  03b7a34  cror 6, 0, 2
  03b7a38  bt 6, 0x3b7b68
  03b7a3c  fsubs 3, 1, 2
  03b7a40  fadds 1, 1, 2
  03b7a44  addic 3, 1, 16
  03b7a48  li 6, 2
  03b7a4c  addic 5, 3, 296
  03b7a50  addic 4, 3, 280
  03b7a54  mtctr 6
  03b7a58  fdivs 1, 3, 1
  03b7a5c  fmuls 2, 1, 1
  03b7a60  stfs 1, 308(1)
  03b7a64  stfs 1, 300(1)
  03b7a68  stfs 1, 304(1)
  03b7a6c  stfs 1, 296(1)
  03b7a70  lfs 4, 308(1)
  03b7a74  lfs 5, 300(1)
  03b7a78  lfs 6, 304(1)
  03b7a7c  fmuls 3, 2, 2
  03b7a80  fmuls 5, 5, 2
  03b7a84  fmuls 4, 4, 3
  03b7a88  fmuls 1, 3, 3
  03b7a8c  fmuls 3, 6, 3
  03b7a90  stfs 5, 300(1)
  03b7a94  fmuls 2, 4, 2
  03b7a98  stfs 3, 304(1)
  03b7a9c  stfs 2, 308(1)
  03b7aa0  lfs 2, 280(3)
  03b7aa4  fmuls 2, 2, 1
  03b7aa8  stfs 2, 296(3)
  03b7aac  lfs 2, 4(4)
  03b7ab0  addic 4, 4, 8
  03b7ab4  fmuls 2, 2, 1
  03b7ab8  addic 3, 3, 8
  03b7abc  stfs 2, 4(5)
  03b7ac0  addic 5, 5, 8
  03b7ac4  bdnz 0x3b7aa0
  03b7ac8  lis 4, 115
  03b7acc  ori 3, 1, 0
  03b7ad0  li 6, 4
  03b7ad4  addic 4, 4, 22752
  03b7ad8  addic 5, 3, 296
  03b7adc  mtctr 6
  03b7ae0  lfs 1, 296(3)
  03b7ae4  lfs 2, 0(4)
  03b7ae8  fmuls 1, 1, 2
  03b7aec  lfs 2, 4(4)
  03b7af0  addic 4, 4, 8
  03b7af4  stfs 1, 296(3)
  03b7af8  lfs 1, 4(5)
  03b7afc  addic 3, 3, 8
  03b7b00  fmuls 1, 1, 2
  03b7b04  stfs 1, 4(5)
  03b7b08  addic 5, 5, 8
  03b7b0c  bdnz 0x3b7ae0
  03b7b10  b 0x3b7b68
  03b7b14  lis 3, 59
  03b7b18  addi 3, 3, 27728
  03b7b1c  lfs 1, 80(3)
  03b7b20  lfs 2, 320(30)
  03b7b24  fmuls 5, 24, 1
  03b7b28  fmuls 6, 30, 1
  03b7b2c  lfs 3, 324(30)
  03b7b30  fmuls 1, 29, 1
  03b7b34  lfs 4, 328(30)
  03b7b38  fadds 2, 5, 2
  03b7b3c  fadds 3, 6, 3
  03b7b40  fadds 4, 1, 4
  03b7b44  stfs 5, 112(1)
  03b7b48  stfs 6, 116(1)
  03b7b4c  stfs 1, 120(1)
  03b7b50  stfs 2, 112(1)
  03b7b54  stfs 3, 116(1)
  03b7b58  stfs 4, 120(1)
  03b7b5c  b 0x3b7b68
  03b7b60  li 3, 0
  03b7b64  stw 3, 2640(25)
  03b7b68  lis 3, 59
  03b7b6c  fmr 3, 26
  03b7b70  lis 4, 114
  03b7b74  addi 3, 3, 27728
  03b7b78  li 5, 5
  03b7b7c  addc 28, 1, 28
  03b7b80  addic 29, 29, 16
  03b7b84  clrldi 28, 28, 32
  03b7b88  lfs 1, 68(3)
  03b7b8c  lfs 4, -3048(4)
  03b7b90  lwz 4, 160(26)
  03b7b94  lfs 2, 84(3)
  03b7b98  and 3, 4, 5
  03b7b9c  fmuls 1, 4, 1
  03b7ba0  cmpwi 3, 0
  03b7ba4  bt 2, 0x3b7bac
  03b7ba8  fmr 3, 27
  03b7bac  addic 4, 1, 112
  03b7bb0  fadds 3, 3, 31
  03b7bb4  ori 3, 28, 0
  03b7bb8  ori 5, 29, 0
  03b7bbc  bl 0x3b6708
  03b7bc0  ld 0, 736(1)
  03b7bc4  mtlr 0
  03b7bc8  lfd 16, 592(1)
  03b7bcc  lfd 17, 600(1)
  03b7bd0  lfd 18, 608(1)
  03b7bd4  lfd 19, 616(1)
  03b7bd8  lfd 20, 624(1)
  03b7bdc  lfd 21, 632(1)
  03b7be0  lfd 22, 640(1)
  03b7be4  lfd 23, 648(1)
  03b7be8  lfd 24, 656(1)
  03b7bec  lfd 25, 664(1)
  03b7bf0  lfd 26, 672(1)
  03b7bf4  lfd 27, 680(1)
  03b7bf8  lfd 28, 688(1)
  03b7bfc  lfd 29, 696(1)
  03b7c00  lfd 30, 704(1)
  03b7c04  lfd 31, 712(1)
  03b7c08  ld 24, 528(1)
  03b7c0c  ld 25, 536(1)
  03b7c10  ld 26, 544(1)
  03b7c14  ld 27, 552(1)
  03b7c18  ld 28, 560(1)
  03b7c1c  ld 29, 568(1)
  03b7c20  ld 30, 576(1)
  03b7c24  ld 31, 584(1)
  03b7c28  addi 1, 1, 720
  03b7c2c  blr

UpdateMoby_562:   # 0x3b7c48, 0x59c bytes
  03b7c48  stdu 1, -288(1)
  03b7c4c  mflr 0
  03b7c50  std 0, 304(1)
  03b7c54  stfd 30, 272(1)
  03b7c58  stfd 31, 280(1)
  03b7c5c  std 31, 264(1)
  03b7c60  cmpwi 3, 0
  03b7c64  std 30, 256(1)
  03b7c68  std 29, 248(1)
  03b7c6c  ori 31, 3, 0
  03b7c70  bt 2, 0x3b81c0
  03b7c74  lwz 30, 120(31)
  03b7c78  cmpwi 30, 0
  03b7c7c  bt 2, 0x3b81c0
  03b7c80  lis 3, 59
  03b7c84  addic 5, 1, 112
  03b7c88  addi 6, 3, 31792
  03b7c8c  ori 3, 31, 0
  03b7c90  li 4, 0
  03b7c94  lfs 1, 0(6)
  03b7c98  lfs 2, 4(6)
  03b7c9c  fmr 31, 1
  03b7ca0  fmr 30, 2
  03b7ca4  bl 0xf1114
  03b7ca8  nop
  03b7cac  addic 5, 1, 160
  03b7cb0  ori 3, 31, 0
  03b7cb4  li 4, 0
  03b7cb8  bl 0xf1038
  03b7cbc  nop
  03b7cc0  lfs 1, 176(1)
  03b7cc4  lfs 2, 112(1)
  03b7cc8  lfs 3, 192(1)
  03b7ccc  fmadds 1, 1, 31, 2
  03b7cd0  lfs 2, 180(1)
  03b7cd4  lfs 4, 196(1)
  03b7cd8  lfs 5, 184(1)
  03b7cdc  lfs 6, 200(1)
  03b7ce0  lwz 3, 80(30)
  03b7ce4  cmpwi 3, 0
  03b7ce8  fmadds 1, 3, 30, 1
  03b7cec  stfs 1, 64(30)
  03b7cf0  lfs 1, 116(1)
  03b7cf4  fmadds 1, 2, 31, 1
  03b7cf8  fmadds 1, 4, 30, 1
  03b7cfc  stfs 1, 68(30)
  03b7d00  lfs 1, 120(1)
  03b7d04  fmadds 1, 5, 31, 1
  03b7d08  fmadds 1, 6, 30, 1
  03b7d0c  stfs 1, 72(30)
  03b7d10  lfs 1, 124(1)
  03b7d14  stfs 1, 76(30)
  03b7d18  bt 2, 0x3b7d8c
  03b7d1c  lis 4, 151
  03b7d20  li 5, 1
  03b7d24  addic 4, 4, -25432
  03b7d28  stw 5, 152(3)
  03b7d2c  lwz 3, 80(30)
  03b7d30  lbz 4, 25(4)
  03b7d34  cmpwi 4, 0
  03b7d38  bt 2, 0x3b7d8c
  03b7d3c  lhz 4, 166(3)
  03b7d40  cmpwi 4, 1900
  03b7d44  bt 2, 0x3b7d8c
  03b7d48  vspltisw 2, 0
  03b7d4c  li 3, 128
  03b7d50  lis 4, 165
  03b7d54  addic 4, 4, 8040
  03b7d58  stvx 2, 3, 1
  03b7d5c  lwz 3, 80(30)
  03b7d60  bl 0x110798
  03b7d64  nop
  03b7d68  lwz 3, 80(30)
  03b7d6c  bl 0xefb38
  03b7d70  nop
  03b7d74  ori 3, 31, 0
  03b7d78  addic 4, 30, 64
  03b7d7c  addic 5, 1, 128
  03b7d80  bl 0x2e7140
  03b7d84  nop
  03b7d88  stw 3, 80(30)
  03b7d8c  cmpwi 3, 0
  03b7d90  bt 2, 0x3b7da8
  03b7d94  lbz 3, 32(3)
  03b7d98  cmpwi 3, 254
  03b7d9c  cmpwi 1, 3, 253
  03b7da0  bt 2, 0x3b7da8
  03b7da4  bf 6, 0x3b7db0
  03b7da8  li 3, 0
  03b7dac  stw 3, 80(30)
  03b7db0  lis 29, 151
  03b7db4  addic 29, 29, -25376
  03b7db8  lwz 3, 8324(29)
  03b7dbc  cmpwi 3, 1
  03b7dc0  bf 2, 0x3b7dd4
  03b7dc4  li 3, 30
  03b7dc8  li 4, 1
  03b7dcc  bl 0xb72b0
  03b7dd0  nop
  03b7dd4  addic 3, 30, 84
  03b7dd8  bl 0x4fff60
  03b7ddc  nop
  03b7de0  cmpwi 3, 0
  03b7de4  lwz 3, 8324(29)
  03b7de8  lwz 4, 4256(29)
  03b7dec  bt 2, 0x3b7ed0
  03b7df0  lbz 5, 8364(29)
  03b7df4  cmpwi 5, 0
  03b7df8  bf 2, 0x3b7ed0
  03b7dfc  lbz 5, 8360(29)
  03b7e00  cmpwi 5, 0
  03b7e04  bt 2, 0x3b7e38
  03b7e08  lis 5, 59
  03b7e0c  lis 6, 114
  03b7e10  addi 5, 5, 31792
  03b7e14  lfs 1, 8(5)
  03b7e18  lfs 2, -3056(6)
  03b7e1c  lwz 5, 444(29)
  03b7e20  fmuls 1, 2, 1
  03b7e24  fctiwz 1, 1
  03b7e28  stfd 1, 224(1)
  03b7e2c  lwz 6, 228(1)
  03b7e30  cmpw 5, 6
  03b7e34  bt 2, 0x3b7ea8
  03b7e38  lis 5, 150
  03b7e3c  cmpwi 1, 3, 30
  03b7e40  addic 5, 5, 19008
  03b7e44  lwz 5, 164(5)
  03b7e48  and 4, 5, 4
  03b7e4c  cmpwi 4, 0
  03b7e50  crorc 2, 2, 6
  03b7e54  bt 2, 0x3b7e70
  03b7e58  li 3, -1
  03b7e5c  bl 0x8e0f4
  03b7e60  nop
  03b7e64  cmpwi 3, 0
  03b7e68  bf 2, 0x3b7ea8
  03b7e6c  lwz 3, 8324(29)
  03b7e70  cmpwi 3, 35
  03b7e74  bf 2, 0x3b7ed0
  03b7e78  lis 3, 59
  03b7e7c  lis 4, 114
  03b7e80  addi 3, 3, 31792
  03b7e84  lfs 1, 12(3)
  03b7e88  lfs 2, -3056(4)
  03b7e8c  lwz 3, 408(29)
  03b7e90  fmuls 1, 2, 1
  03b7e94  fctiwz 1, 1
  03b7e98  stfd 1, 224(1)
  03b7e9c  lwz 4, 228(1)
  03b7ea0  cmpw 3, 4
  03b7ea4  bf 2, 0x3b7ed0
  03b7ea8  li 3, 26
  03b7eac  li 4, 0
  03b7eb0  bl 0x816ec
  03b7eb4  nop
  03b7eb8  li 3, -1
  03b7ebc  li 4, 1
  03b7ec0  bl 0xaa258
  03b7ec4  nop
  03b7ec8  li 3, 3
  03b7ecc  stb 3, 32(31)
  03b7ed0  lfs 1, 64(30)
  03b7ed4  ori 3, 31, 0
  03b7ed8  stfs 1, 64(1)
  03b7edc  lfs 1, 68(30)
  03b7ee0  ori 4, 30, 0
  03b7ee4  stfs 1, 68(1)
  03b7ee8  lfs 1, 72(30)
  03b7eec  stfs 1, 72(1)
  03b7ef0  lfs 1, 76(30)
  03b7ef4  stfs 1, 76(1)
  03b7ef8  ld 5, 64(1)
  03b7efc  ld 6, 72(1)
  03b7f00  bl 0x3b6ca8
  03b7f04  lbz 3, 32(31)
  03b7f08  cmpwi 3, 6
  03b7f0c  bt 2, 0x3b81c0
  03b7f10  cmpwi 3, 5
  03b7f14  bt 2, 0x3b811c
  03b7f18  cmpwi 3, 4
  03b7f1c  bt 2, 0x3b80f8
  03b7f20  cmpwi 3, 3
  03b7f24  bt 2, 0x3b7f9c
  03b7f28  cmpwi 3, 2
  03b7f2c  bt 2, 0x3b8124
  03b7f30  cmpwi 3, 1
  03b7f34  bt 2, 0x3b7f80
  03b7f38  cmpwi 3, 0
  03b7f3c  bf 2, 0x3b8124
  03b7f40  li 3, 0
  03b7f44  li 5, 0
  03b7f48  li 4, 1
  03b7f4c  li 6, 2
  03b7f50  stw 3, 80(30)
  03b7f54  lbz 3, 112(31)
  03b7f58  subc 4, 4, 6
  03b7f5c  rlwinm 7, 3, 0, 30, 30
  03b7f60  subc 5, 5, 7
  03b7f64  cntlzw 5, 5
  03b7f68  sldi 5, 5, 58
  03b7f6c  sradi 5, 5, 63
  03b7f70  and 4, 5, 4
  03b7f74  addc 4, 6, 4
  03b7f78  stb 4, 32(31)
  03b7f7c  b 0x3b7f84
  03b7f80  lbz 3, 112(31)
  03b7f84  rlwinm 3, 3, 0, 30, 30
  03b7f88  cmpwi 3, 0
  03b7f8c  bt 2, 0x3b8124
  03b7f90  li 3, 2
  03b7f94  stb 3, 32(31)
  03b7f98  b 0x3b8124
  03b7f9c  lwz 3, 80(30)
  03b7fa0  cmpwi 3, 0
  03b7fa4  bt 2, 0x3b809c
  03b7fa8  lis 3, 161
  03b7fac  lis 4, 0
  03b7fb0  addic 3, 3, -732
  03b7fb4  ori 5, 4, 65535
  03b7fb8  lhz 4, 200(3)
  03b7fbc  cmpw 4, 5
  03b7fc0  bf 0, 0x3b7fcc
  03b7fc4  addic 4, 4, 1
  03b7fc8  sth 4, 200(3)
  03b7fcc  lis 4, 161
  03b7fd0  lis 5, 114
  03b7fd4  lwz 4, -2344(4)
  03b7fd8  extsw 4, 4
  03b7fdc  std 4, 224(1)
  03b7fe0  lis 4, 59
  03b7fe4  addi 4, 4, 31792
  03b7fe8  lfs 1, 16(4)
  03b7fec  lfs 2, -3056(5)
  03b7ff0  lfd 3, 224(1)
  03b7ff4  lis 4, 6990
  03b7ff8  fcfid 3, 3
  03b7ffc  ori 5, 4, 33205
  03b8000  lhz 6, 202(3)
  03b8004  frsp 3, 3
  03b8008  fadds 1, 3, 1
  03b800c  fmuls 1, 2, 1
  03b8010  fctiwz 1, 1
  03b8014  stfd 1, 224(1)
  03b8018  lwz 4, 228(1)
  03b801c  mulhw 5, 5, 4
  03b8020  srawi 5, 5, 6
  03b8024  srwi 7, 5, 31
  03b8028  addc 5, 5, 7
  03b802c  cmpw 5, 6
  03b8030  bf 1, 0x3b8050
  03b8034  lis 5, 6990
  03b8038  ori 5, 5, 33205
  03b803c  mulhw 4, 5, 4
  03b8040  srawi 4, 4, 6
  03b8044  srwi 5, 4, 31
  03b8048  addc 4, 4, 5
  03b804c  sth 4, 202(3)
  03b8050  ori 4, 3, 0
  03b8054  lis 3, 151
  03b8058  li 5, 1
  03b805c  lis 6, -32768
  03b8060  lwz 7, 204(4)
  03b8064  lwz 3, -25488(3)
  03b8068  slw 3, 5, 3
  03b806c  or 3, 7, 3
  03b8070  or 5, 3, 6
  03b8074  addic 3, 30, 64
  03b8078  stw 5, 204(4)
  03b807c  lwz 4, 80(30)
  03b8080  lwz 5, 120(4)
  03b8084  addic 5, 5, 16
  03b8088  bl 0x2e74a8
  03b808c  nop
  03b8090  li 3, 0
  03b8094  stw 3, 80(30)
  03b8098  b 0x3b80b0
  03b809c  li 3, 0
  03b80a0  li 4, 0
  03b80a4  ori 5, 31, 0
  03b80a8  bl 0x15d12c
  03b80ac  nop
  03b80b0  lis 3, 59
  03b80b4  vspltisw 2, -1
  03b80b8  li 4, 4
  03b80bc  addi 3, 3, 31792
  03b80c0  li 6, 20
  03b80c4  lis 5, 114
  03b80c8  stb 4, 32(31)
  03b80cc  li 4, -3056
  03b80d0  vslw 2, 2, 2
  03b80d4  <unknown>
  03b80d8  li 3, 84
  03b80dc  vspltw 3, 3, 0
  03b80e0  <unknown>
  03b80e4  vmaddfp 2, 4, 3, 2
  03b80e8  vctsxs 2, 2, 0
  03b80ec  vspltw 2, 2, 0
  03b80f0  stvewx 2, 3, 30
  03b80f4  b 0x3b8124
  03b80f8  lwz 3, 8324(29)
  03b80fc  cmpwi 3, 35
  03b8100  bt 2, 0x3b8124
  03b8104  lbz 3, 8360(29)
  03b8108  cmpwi 3, 0
  03b810c  bf 2, 0x3b8124
  03b8110  li 3, 2
  03b8114  stb 3, 32(31)
  03b8118  b 0x3b8124
  03b811c  li 3, 6
  03b8120  stb 3, 32(31)
  03b8124  lwz 3, 80(30)
  03b8128  cmpwi 3, 0
  03b812c  bt 2, 0x3b8154
  03b8130  lfs 1, 64(30)
  03b8134  stfs 1, 16(3)
  03b8138  lfs 1, 68(30)
  03b813c  stfs 1, 20(3)
  03b8140  lfs 1, 72(30)
  03b8144  stfs 1, 24(3)
  03b8148  lfs 1, 76(30)
  03b814c  stfs 1, 28(3)
  03b8150  b 0x3b81c0
  03b8154  li 3, -1
  03b8158  bl 0x8e0f4
  03b815c  nop
  03b8160  cmpwi 3, 0
  03b8164  bt 2, 0x3b8190
  03b8168  vspltisw 2, 0
  03b816c  li 6, 144
  03b8170  ori 3, 31, 0
  03b8174  addic 4, 30, 64
  03b8178  addic 5, 1, 144
  03b817c  stvx 2, 6, 1
  03b8180  bl 0x2e7140
  03b8184  nop
  03b8188  stw 3, 80(30)
  03b818c  b 0x3b81c0
  03b8190  lbz 3, 8360(29)
  03b8194  cmpwi 3, 0
  03b8198  bt 2, 0x3b81c0
  03b819c  vspltisw 2, 0
  03b81a0  li 6, 144
  03b81a4  ori 3, 31, 0
  03b81a8  addic 4, 30, 64
  03b81ac  addic 5, 1, 144
  03b81b0  stvx 2, 6, 1
  03b81b4  bl 0x2e7140
  03b81b8  nop
  03b81bc  stw 3, 80(30)
  03b81c0  ld 0, 304(1)
  03b81c4  mtlr 0
  03b81c8  lfd 30, 272(1)
  03b81cc  lfd 31, 280(1)
  03b81d0  ld 29, 248(1)
  03b81d4  ld 30, 256(1)
  03b81d8  ld 31, 264(1)
  03b81dc  addi 1, 1, 288
  03b81e0  blr

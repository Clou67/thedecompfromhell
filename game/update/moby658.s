# game/update/moby658.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_658:   # 0x407868, 0x684 bytes
  0407868  stdu 1, -272(1)
  040786c  mflr 0
  0407870  std 0, 288(1)
  0407874  stfd 21, 184(1)
  0407878  stfd 22, 192(1)
  040787c  stfd 23, 200(1)
  0407880  stfd 24, 208(1)
  0407884  stfd 25, 216(1)
  0407888  stfd 26, 224(1)
  040788c  stfd 27, 232(1)
  0407890  stfd 28, 240(1)
  0407894  stfd 29, 248(1)
  0407898  stfd 30, 256(1)
  040789c  stfd 31, 264(1)
  04078a0  std 31, 176(1)
  04078a4  cmpwi 3, 0
  04078a8  std 30, 168(1)
  04078ac  std 29, 160(1)
  04078b0  std 28, 152(1)
  04078b4  std 27, 144(1)
  04078b8  ori 31, 3, 0
  04078bc  bt 2, 0x407e9c
  04078c0  lwz 30, 120(31)
  04078c4  cmpwi 30, 0
  04078c8  bt 2, 0x407e9c
  04078cc  lhz 3, 40(30)
  04078d0  extsh 3, 3
  04078d4  cmpwi 3, -1
  04078d8  bt 2, 0x407920
  04078dc  addic 3, 30, 40
  04078e0  bl 0x4fffb4
  04078e4  nop
  04078e8  cmpwi 3, 0
  04078ec  bt 2, 0x407920
  04078f0  lbz 3, 46(30)
  04078f4  extsb 3, 3
  04078f8  cmpwi 3, -1
  04078fc  bt 2, 0x407910
  0407900  bl 0xda9e8
  0407904  nop
  0407908  li 3, -1
  040790c  stb 3, 46(30)
  0407910  ori 3, 31, 0
  0407914  bl 0xefb38
  0407918  nop
  040791c  b 0x407e9c
  0407920  lbz 3, 32(31)
  0407924  cmpwi 3, 1
  0407928  cmpwi 1, 3, 3
  040792c  cmpwi 6, 3, 2
  0407930  cmpwi 7, 3, 0
  0407934  bt 1, 0x407948
  0407938  cmpwi 3, -1
  040793c  bf 1, 0x407e9c
  0407940  bf 29, 0x407954
  0407944  b 0x407a10
  0407948  bf 25, 0x407a30
  040794c  bf 5, 0x407e6c
  0407950  b 0x407e9c
  0407954  li 3, 255
  0407958  lfs 1, 16(31)
  040795c  li 4, -1
  0407960  vspltisw 2, -8
  0407964  li 5, 47
  0407968  stb 3, 48(31)
  040796c  stfs 1, 16(30)
  0407970  lfs 1, 20(31)
  0407974  stfs 1, 20(30)
  0407978  lfs 1, 24(31)
  040797c  lwz 3, 36(30)
  0407980  stfs 1, 24(30)
  0407984  lfs 1, 28(31)
  0407988  stw 3, 12(30)
  040798c  stfs 1, 28(30)
  0407990  stb 4, 46(30)
  0407994  lwz 3, 32(30)
  0407998  lvlx 3, 5, 30
  040799c  cmpwi 3, -1
  04079a0  vsrw 2, 3, 2
  04079a4  bt 2, 0x4079bc
  04079a8  lis 4, 164
  04079ac  slwi 3, 3, 8
  04079b0  lwz 4, -28512(4)
  04079b4  addc 3, 4, 3
  04079b8  stw 3, 52(30)
  04079bc  lis 3, 64
  04079c0  vcfsx 2, 2, 0
  04079c4  vspltisw 3, -1
  04079c8  lis 4, 114
  04079cc  addi 3, 3, 30800
  04079d0  li 5, -3056
  04079d4  vslw 3, 3, 3
  04079d8  lvlx 4, 0, 3
  04079dc  lvlx 5, 5, 4
  04079e0  vspltw 4, 4, 0
  04079e4  li 3, 48
  04079e8  li 4, 0
  04079ec  vaddfp 2, 2, 4
  04079f0  li 5, 1
  04079f4  vmaddfp 2, 5, 2, 3
  04079f8  vctsxs 2, 2, 0
  04079fc  vspltw 2, 2, 0
  0407a00  stvewx 2, 3, 30
  0407a04  stb 4, 45(30)
  0407a08  stb 5, 32(31)
  0407a0c  b 0x407e9c
  0407a10  addic 3, 30, 48
  0407a14  bl 0x4fff60
  0407a18  nop
  0407a1c  cmpwi 3, 0
  0407a20  bt 2, 0x407e9c
  0407a24  li 3, 2
  0407a28  stb 3, 32(31)
  0407a2c  b 0x407e9c
  0407a30  lbz 3, 45(30)
  0407a34  sldi 4, 3, 2
  0407a38  addc 3, 3, 4
  0407a3c  addc 3, 30, 3
  0407a40  clrldi 29, 3, 32
  0407a44  addic 27, 3, 56
  0407a48  clrldi 27, 27, 32
  0407a4c  lbz 3, 56(29)
  0407a50  bl 0x502730
  0407a54  nop
  0407a58  lis 3, 64
  0407a5c  addi 28, 3, 30800
  0407a60  lbz 3, 57(29)
  0407a64  lfs 23, 4(28)
  0407a68  fmuls 31, 1, 23
  0407a6c  bl 0x502730
  0407a70  nop
  0407a74  lbz 3, 58(29)
  0407a78  fmuls 30, 1, 23
  0407a7c  bl 0x502730
  0407a80  nop
  0407a84  lbz 3, 59(29)
  0407a88  fmuls 29, 1, 23
  0407a8c  bl 0x502730
  0407a90  nop
  0407a94  lbz 3, 60(29)
  0407a98  fmr 28, 1
  0407a9c  extsw 3, 3
  0407aa0  addic 29, 27, 5
  0407aa4  std 3, 128(1)
  0407aa8  lis 3, 114
  0407aac  lfs 2, 0(28)
  0407ab0  lfs 3, -3056(3)
  0407ab4  lwz 3, 48(30)
  0407ab8  lfd 1, 128(1)
  0407abc  fcfid 1, 1
  0407ac0  extsw 3, 3
  0407ac4  frsp 1, 1
  0407ac8  fadds 1, 1, 2
  0407acc  fmuls 1, 3, 1
  0407ad0  fctiwz 1, 1
  0407ad4  stfd 1, 128(1)
  0407ad8  lwz 28, 132(1)
  0407adc  extsw 28, 28
  0407ae0  bl 0x502730
  0407ae4  nop
  0407ae8  fmr 27, 1
  0407aec  ori 3, 28, 0
  0407af0  bl 0x502730
  0407af4  nop
  0407af8  lbz 3, 45(30)
  0407afc  lbz 4, 44(30)
  0407b00  addic 3, 3, 1
  0407b04  fdivs 27, 27, 1
  0407b08  cmpw 3, 4
  0407b0c  bf 1, 0x407b2c
  0407b10  lwz 3, 36(30)
  0407b14  rlwinm 3, 3, 0, 17, 17
  0407b18  cmpwi 3, 0
  0407b1c  bt 2, 0x407b28
  0407b20  addic 29, 30, 56
  0407b24  b 0x407b2c
  0407b28  ori 29, 27, 0
  0407b2c  lbz 3, 0(29)
  0407b30  bl 0x502730
  0407b34  nop
  0407b38  lbz 3, 1(29)
  0407b3c  fmr 26, 1
  0407b40  bl 0x502730
  0407b44  nop
  0407b48  lbz 3, 2(29)
  0407b4c  fmr 25, 1
  0407b50  bl 0x502730
  0407b54  nop
  0407b58  fmr 24, 1
  0407b5c  lbz 3, 3(29)
  0407b60  bl 0x502730
  0407b64  nop
  0407b68  fsubs 1, 1, 28
  0407b6c  fmsubs 2, 26, 23, 31
  0407b70  lis 3, 64
  0407b74  fmsubs 3, 25, 23, 30
  0407b78  lfs 5, 16(31)
  0407b7c  fmsubs 4, 24, 23, 29
  0407b80  lfs 6, 20(31)
  0407b84  addi 4, 3, 30800
  0407b88  stfs 5, 112(1)
  0407b8c  lfs 5, 24(31)
  0407b90  addic 3, 1, 112
  0407b94  stfs 6, 116(1)
  0407b98  stfs 5, 120(1)
  0407b9c  fmadds 28, 1, 27, 28
  0407ba0  fmadds 31, 2, 27, 31
  0407ba4  fmadds 30, 3, 27, 30
  0407ba8  fmadds 29, 4, 27, 29
  0407bac  stfs 28, 124(1)
  0407bb0  lfs 1, 8(4)
  0407bb4  bl 0x502910
  0407bb8  nop
  0407bbc  cmpwi 3, -1
  0407bc0  bt 2, 0x407dec
  0407bc4  lwz 3, 36(30)
  0407bc8  rlwinm 4, 3, 0, 7, 7
  0407bcc  cmpwi 4, 0
  0407bd0  bt 2, 0x407bf0
  0407bd4  lwz 4, 52(30)
  0407bd8  cmpwi 4, 0
  0407bdc  bt 2, 0x407bf0
  0407be0  lhz 4, 52(4)
  0407be4  clrlwi 4, 4, 31
  0407be8  cmpwi 4, 0
  0407bec  bf 2, 0x407dec
  0407bf0  lwz 4, 52(30)
  0407bf4  cmpwi 4, 0
  0407bf8  bt 2, 0x407c10
  0407bfc  lfs 27, 16(4)
  0407c00  lfs 26, 20(4)
  0407c04  lfs 25, 24(4)
  0407c08  lfs 24, 28(4)
  0407c0c  b 0x407c20
  0407c10  lfs 27, 16(30)
  0407c14  lfs 26, 20(30)
  0407c18  lfs 25, 24(30)
  0407c1c  lfs 24, 28(30)
  0407c20  rlwinm 4, 3, 0, 8, 8
  0407c24  cmpwi 4, 0
  0407c28  bf 2, 0x407d44
  0407c2c  rlwinm 4, 3, 0, 11, 11
  0407c30  cmpwi 4, 0
  0407c34  bt 2, 0x407cc4
  0407c38  rlwinm 3, 3, 0, 10, 10
  0407c3c  cmpwi 3, 0
  0407c40  bt 2, 0x407c80
  0407c44  lfs 2, 0(30)
  0407c48  fneg 1, 2
  0407c4c  bl 0xfcbe8
  0407c50  nop
  0407c54  lfs 2, 4(30)
  0407c58  fmr 21, 1
  0407c5c  fneg 1, 2
  0407c60  bl 0xfcbe8
  0407c64  nop
  0407c68  lfs 2, 8(30)
  0407c6c  fmr 22, 1
  0407c70  fneg 1, 2
  0407c74  bl 0xfcbe8
  0407c78  nop
  0407c7c  b 0x407cd0
  0407c80  lis 3, 64
  0407c84  li 4, 0
  0407c88  lwz 29, 12(30)
  0407c8c  addi 3, 3, 30800
  0407c90  lfs 1, 12(3)
  0407c94  stw 4, 12(30)
  0407c98  lfs 2, 16(3)
  0407c9c  bl 0xfcbe8
  0407ca0  nop
  0407ca4  lfs 21, 0(30)
  0407ca8  lfs 22, 4(30)
  0407cac  lfs 2, 8(30)
  0407cb0  fmuls 21, 21, 1
  0407cb4  fmuls 22, 22, 1
  0407cb8  stw 29, 12(30)
  0407cbc  fmuls 1, 2, 1
  0407cc0  b 0x407cd0
  0407cc4  lfs 21, 0(30)
  0407cc8  lfs 22, 4(30)
  0407ccc  lfs 1, 8(30)
  0407cd0  lwz 3, 36(30)
  0407cd4  rlwinm 3, 3, 0, 9, 9
  0407cd8  cmpwi 3, 0
  0407cdc  bt 2, 0x407d34
  0407ce0  lwz 3, 52(30)
  0407ce4  cmpwi 3, 0
  0407ce8  bt 2, 0x407d34
  0407cec  lfs 2, 208(3)
  0407cf0  lfs 3, 212(3)
  0407cf4  lfs 4, 216(3)
  0407cf8  fmuls 2, 2, 22
  0407cfc  fmuls 3, 3, 22
  0407d00  lfs 5, 192(3)
  0407d04  fmuls 4, 4, 22
  0407d08  lfs 6, 196(3)
  0407d0c  lfs 7, 200(3)
  0407d10  lfs 8, 224(3)
  0407d14  lfs 22, 228(3)
  0407d18  lfs 9, 232(3)
  0407d1c  fmadds 2, 5, 21, 2
  0407d20  fmadds 3, 6, 21, 3
  0407d24  fmadds 4, 7, 21, 4
  0407d28  fmadds 21, 8, 1, 2
  0407d2c  fmadds 22, 22, 1, 3
  0407d30  fmadds 1, 9, 1, 4
  0407d34  fadds 27, 27, 21
  0407d38  fadds 26, 26, 22
  0407d3c  fadds 25, 25, 1
  0407d40  b 0x407d44
  0407d44  stfs 27, 16(31)
  0407d48  stfs 26, 20(31)
  0407d4c  stfs 25, 24(31)
  0407d50  stfs 24, 28(31)
  0407d54  lbz 3, 46(30)
  0407d58  extsb 3, 3
  0407d5c  cmpwi 3, -1
  0407d60  bf 2, 0x407d9c
  0407d64  addic 29, 31, 16
  0407d68  lbz 3, 42(30)
  0407d6c  bl 0x502730
  0407d70  nop
  0407d74  ori 3, 29, 0
  0407d78  fmuls 2, 1, 23
  0407d7c  fmr 1, 28
  0407d80  fmr 3, 31
  0407d84  fmr 4, 30
  0407d88  fmr 5, 29
  0407d8c  bl 0xda4ac
  0407d90  nop
  0407d94  stb 3, 46(30)
  0407d98  b 0x407e0c
  0407d9c  lis 4, 162
  0407da0  sldi 3, 3, 5
  0407da4  addic 4, 4, -8448
  0407da8  addc 3, 4, 3
  0407dac  clrldi 29, 3, 32
  0407db0  stfs 27, 16(29)
  0407db4  lfs 1, 20(31)
  0407db8  stfs 1, 20(29)
  0407dbc  lfs 1, 24(31)
  0407dc0  stfs 28, 28(29)
  0407dc4  stfs 1, 24(29)
  0407dc8  stfs 31, 0(29)
  0407dcc  stfs 30, 4(29)
  0407dd0  stfs 29, 8(29)
  0407dd4  lbz 3, 42(30)
  0407dd8  bl 0x502730
  0407ddc  nop
  0407de0  fmuls 1, 1, 23
  0407de4  stfs 1, 12(29)
  0407de8  b 0x407e0c
  0407dec  lbz 3, 46(30)
  0407df0  extsb 3, 3
  0407df4  cmpwi 3, -1
  0407df8  bt 2, 0x407e0c
  0407dfc  bl 0xda9e8
  0407e00  nop
  0407e04  li 3, -1
  0407e08  stb 3, 46(30)
  0407e0c  lwz 3, 48(30)
  0407e10  addic 3, 3, 1
  0407e14  cmpw 3, 28
  0407e18  stw 3, 48(30)
  0407e1c  bt 0, 0x407e9c
  0407e20  li 3, 0
  0407e24  lbz 4, 45(30)
  0407e28  lbz 5, 44(30)
  0407e2c  addic 4, 4, 1
  0407e30  stw 3, 48(30)
  0407e34  clrlwi 3, 4, 24
  0407e38  stb 4, 45(30)
  0407e3c  cmpw 3, 5
  0407e40  bf 1, 0x407e9c
  0407e44  lwz 3, 36(30)
  0407e48  rlwinm 3, 3, 0, 17, 17
  0407e4c  cmpwi 3, 0
  0407e50  bt 2, 0x407e60
  0407e54  li 3, 0
  0407e58  stb 3, 45(30)
  0407e5c  b 0x407e9c
  0407e60  li 3, 3
  0407e64  stb 3, 32(31)
  0407e68  b 0x407e9c
  0407e6c  lbz 3, 46(30)
  0407e70  extsb 3, 3
  0407e74  cmpwi 3, -1
  0407e78  bt 2, 0x407e9c
  0407e7c  bl 0xda9e8
  0407e80  nop
  0407e84  li 4, -1
  0407e88  ori 3, 31, 0
  0407e8c  stb 4, 46(30)
  0407e90  bl 0xefb38
  0407e94  nop
  0407e98  b 0x407e9c
  0407e9c  ld 0, 288(1)
  0407ea0  mtlr 0
  0407ea4  lfd 21, 184(1)
  0407ea8  lfd 22, 192(1)
  0407eac  lfd 23, 200(1)
  0407eb0  lfd 24, 208(1)
  0407eb4  lfd 25, 216(1)
  0407eb8  lfd 26, 224(1)
  0407ebc  lfd 27, 232(1)
  0407ec0  lfd 28, 240(1)
  0407ec4  lfd 29, 248(1)
  0407ec8  lfd 30, 256(1)
  0407ecc  lfd 31, 264(1)
  0407ed0  ld 27, 144(1)
  0407ed4  ld 28, 152(1)
  0407ed8  ld 29, 160(1)
  0407edc  ld 30, 168(1)
  0407ee0  ld 31, 176(1)
  0407ee4  addi 1, 1, 272
  0407ee8  blr

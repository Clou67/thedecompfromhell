# game/update/moby217.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M217_002f19c8:   # 0x2f19c8, 0x1a4 bytes
  02f19c8  lis 3, 47
  02f19cc  vspltisw 2, -1
  02f19d0  li 4, 16
  02f19d4  addi 3, 3, 6552
  02f19d8  lis 5, 114
  02f19dc  li 6, -3056
  02f19e0  vslw 2, 2, 2
  02f19e4  lvlx 3, 4, 3
  02f19e8  lis 4, 268
  02f19ec  vspltw 3, 3, 0
  02f19f0  lvlx 4, 6, 5
  02f19f4  li 5, -19420
  02f19f8  lfs 1, 0(3)
  02f19fc  li 6, 24
  02f1a00  vmaddfp 2, 4, 3, 2
  02f1a04  lfs 2, 4(3)
  02f1a08  lfs 3, 8(3)
  02f1a0c  lfs 4, 12(3)
  02f1a10  vspltisw 3, -1
  02f1a14  lis 7, 268
  02f1a18  li 8, -19412
  02f1a1c  li 9, 28
  02f1a20  vslw 3, 3, 3
  02f1a24  li 10, -19404
  02f1a28  li 11, 32
  02f1a2c  vctsxs 2, 2, 0
  02f1a30  vspltw 2, 2, 0
  02f1a34  stvewx 2, 5, 4
  02f1a38  lvlx 2, 6, 3
  02f1a3c  vspltw 2, 2, 0
  02f1a40  lfs 5, 20(3)
  02f1a44  lis 4, 268
  02f1a48  vmaddfp 2, 4, 2, 3
  02f1a4c  vspltisw 3, -1
  02f1a50  li 5, -19408
  02f1a54  lis 6, 268
  02f1a58  vslw 3, 3, 3
  02f1a5c  vctsxs 2, 2, 0
  02f1a60  vspltw 2, 2, 0
  02f1a64  stvewx 2, 8, 7
  02f1a68  lvlx 5, 9, 3
  02f1a6c  vspltw 5, 5, 0
  02f1a70  lis 7, 268
  02f1a74  vmaddfp 3, 4, 5, 3
  02f1a78  vspltisw 5, -1
  02f1a7c  li 9, -19400
  02f1a80  li 8, 36
  02f1a84  vslw 5, 5, 5
  02f1a88  vctsxs 3, 3, 0
  02f1a8c  vspltw 3, 3, 0
  02f1a90  stvewx 3, 5, 4
  02f1a94  stvewx 2, 10, 6
  02f1a98  lvlx 2, 11, 3
  02f1a9c  lis 4, 114
  02f1aa0  lis 6, 128
  02f1aa4  vspltw 2, 2, 0
  02f1aa8  lis 5, 114
  02f1aac  vspltisw 3, -1
  02f1ab0  addic 6, 6, -4720
  02f1ab4  lfs 6, -3064(4)
  02f1ab8  vmaddfp 2, 4, 2, 5
  02f1abc  lis 10, 1
  02f1ac0  fmuls 1, 6, 1
  02f1ac4  lis 4, 268
  02f1ac8  lfs 7, -3060(5)
  02f1acc  fmuls 2, 6, 2
  02f1ad0  vslw 3, 3, 3
  02f1ad4  fmuls 4, 6, 4
  02f1ad8  stw 10, 72(6)
  02f1adc  fmuls 3, 7, 3
  02f1ae0  lis 5, 268
  02f1ae4  lis 6, 268
  02f1ae8  lis 10, 268
  02f1aec  lis 11, 268
  02f1af0  vctsxs 2, 2, 0
  02f1af4  stfs 1, -19436(4)
  02f1af8  fmuls 1, 6, 5
  02f1afc  li 4, -19392
  02f1b00  vspltw 2, 2, 0
  02f1b04  stvewx 2, 9, 7
  02f1b08  lvlx 2, 8, 3
  02f1b0c  stfs 2, -19432(5)
  02f1b10  vspltw 2, 2, 0
  02f1b14  li 5, 40
  02f1b18  stfs 3, -19428(6)
  02f1b1c  lis 6, 268
  02f1b20  stfs 4, -19424(10)
  02f1b24  vmaddfp 2, 4, 2, 3
  02f1b28  vspltisw 3, -1
  02f1b2c  lis 7, 268
  02f1b30  stfs 1, -19416(6)
  02f1b34  lis 6, 268
  02f1b38  vslw 3, 3, 3
  02f1b3c  li 8, -19388
  02f1b40  stfs 1, -19396(6)
  02f1b44  vctsxs 2, 2, 0
  02f1b48  vspltw 2, 2, 0
  02f1b4c  stvewx 2, 4, 11
  02f1b50  lvlx 2, 5, 3
  02f1b54  vspltw 2, 2, 0
  02f1b58  vmaddfp 2, 4, 2, 3
  02f1b5c  vctsxs 2, 2, 0
  02f1b60  vspltw 2, 2, 0
  02f1b64  stvewx 2, 8, 7
  02f1b68  blr

M217_002f1b70:   # 0x2f1b70, 0x74 bytes
  02f1b70  stdu 1, -144(1)
  02f1b74  mflr 0
  02f1b78  std 0, 160(1)
  02f1b7c  std 28, 112(1)
  02f1b80  std 31, 136(1)
  02f1b84  lwz 28, 120(3)
  02f1b88  std 30, 128(1)
  02f1b8c  ori 31, 6, 0
  02f1b90  std 29, 120(1)
  02f1b94  ori 30, 5, 0
  02f1b98  ori 29, 4, 0
  02f1b9c  bl 0xfddc0
  02f1ba0  nop
  02f1ba4  lwz 3, 1060(28)
  02f1ba8  cmpwi 3, 0
  02f1bac  bt 2, 0x2f1bc4
  02f1bb0  ori 4, 29, 0
  02f1bb4  ori 5, 30, 0
  02f1bb8  ori 6, 31, 0
  02f1bbc  bl 0xfddc0
  02f1bc0  nop
  02f1bc4  ld 0, 160(1)
  02f1bc8  mtlr 0
  02f1bcc  ld 28, 112(1)
  02f1bd0  ld 29, 120(1)
  02f1bd4  ld 30, 128(1)
  02f1bd8  ld 31, 136(1)
  02f1bdc  addi 1, 1, 144
  02f1be0  blr

M217_002f1be4:   # 0x2f1be4, 0x1c bytes
  02f1be4  lwz 4, 120(3)
  02f1be8  stfs 1, 88(3)
  02f1bec  lwz 3, 1060(4)
  02f1bf0  cmpwi 3, 0
  02f1bf4  bt 2, 0x2f1bfc
  02f1bf8  stfs 1, 88(3)
  02f1bfc  blr

M217_002f1c10:   # 0x2f1c10, 0x300 bytes
  02f1c10  stdu 1, -352(1)
  02f1c14  mflr 0
  02f1c18  std 0, 368(1)
  02f1c1c  stfd 31, 344(1)
  02f1c20  std 31, 336(1)
  02f1c24  std 30, 328(1)
  02f1c28  ori 31, 3, 0
  02f1c2c  li 30, 0
  02f1c30  std 28, 312(1)
  02f1c34  lis 3, 16426
  02f1c38  li 28, 9
  02f1c3c  std 26, 296(1)
  02f1c40  lis 4, 47
  02f1c44  lwz 26, 120(31)
  02f1c48  ori 3, 3, 43830
  02f1c4c  std 29, 320(1)
  02f1c50  stw 30, 132(1)
  02f1c54  std 27, 304(1)
  02f1c58  addi 29, 4, 7168
  02f1c5c  lis 27, 16128
  02f1c60  stw 28, 112(1)
  02f1c64  lis 4, 16416
  02f1c68  stw 30, 136(1)
  02f1c6c  stw 3, 116(1)
  02f1c70  lis 5, 16384
  02f1c74  stw 30, 140(1)
  02f1c78  lis 6, 16800
  02f1c7c  stw 27, 152(1)
  02f1c80  lis 7, 16804
  02f1c84  stw 4, 160(1)
  02f1c88  lis 8, 16828
  02f1c8c  lfs 1, 0(29)
  02f1c90  lis 9, 16824
  02f1c94  std 25, 288(1)
  02f1c98  stw 5, 176(1)
  02f1c9c  li 25, 3
  02f1ca0  stw 6, 184(1)
  02f1ca4  lis 10, 16720
  02f1ca8  stw 7, 156(1)
  02f1cac  lis 4, 16320
  02f1cb0  stw 8, 164(1)
  02f1cb4  lis 5, 16480
  02f1cb8  stw 9, 180(1)
  02f1cbc  lis 6, 16448
  02f1cc0  stw 30, 188(1)
  02f1cc4  lis 7, 16648
  02f1cc8  stw 25, 192(1)
  02f1ccc  lis 8, 16696
  02f1cd0  stw 3, 196(1)
  02f1cd4  lis 9, 16728
  02f1cd8  stw 30, 212(1)
  02f1cdc  lis 11, 16788
  02f1ce0  std 24, 280(1)
  02f1ce4  stw 10, 216(1)
  02f1ce8  addic 24, 1, 112
  02f1cec  stw 10, 220(1)
  02f1cf0  fmr 31, 1
  02f1cf4  stw 4, 232(1)
  02f1cf8  addic 3, 26, 528
  02f1cfc  stw 5, 240(1)
  02f1d00  ori 4, 24, 0
  02f1d04  stw 6, 256(1)
  02f1d08  li 5, 80
  02f1d0c  stw 7, 264(1)
  02f1d10  stw 8, 236(1)
  02f1d14  stw 9, 244(1)
  02f1d18  stw 10, 260(1)
  02f1d1c  stw 11, 268(1)
  02f1d20  bl 0x50027c
  02f1d24  nop
  02f1d28  ori 4, 24, 0
  02f1d2c  addic 3, 26, 532
  02f1d30  li 5, 80
  02f1d34  bl 0x50027c
  02f1d38  nop
  02f1d3c  ori 4, 24, 0
  02f1d40  addic 3, 26, 536
  02f1d44  li 5, 80
  02f1d48  bl 0x50027c
  02f1d4c  nop
  02f1d50  ori 4, 24, 0
  02f1d54  addic 3, 26, 540
  02f1d58  li 5, 80
  02f1d5c  bl 0x50027c
  02f1d60  nop
  02f1d64  ori 4, 24, 0
  02f1d68  addic 3, 26, 544
  02f1d6c  li 5, 80
  02f1d70  bl 0x50027c
  02f1d74  nop
  02f1d78  ori 4, 24, 0
  02f1d7c  addic 3, 26, 548
  02f1d80  li 5, 80
  02f1d84  bl 0x50027c
  02f1d88  nop
  02f1d8c  ori 4, 24, 0
  02f1d90  addic 3, 26, 552
  02f1d94  li 5, 80
  02f1d98  bl 0x50027c
  02f1d9c  nop
  02f1da0  addic 4, 1, 192
  02f1da4  addic 3, 26, 556
  02f1da8  li 5, 80
  02f1dac  bl 0x50027c
  02f1db0  nop
  02f1db4  ori 4, 24, 0
  02f1db8  addic 3, 26, 560
  02f1dbc  li 5, 80
  02f1dc0  bl 0x50027c
  02f1dc4  nop
  02f1dc8  ori 4, 24, 0
  02f1dcc  addic 3, 26, 564
  02f1dd0  li 5, 80
  02f1dd4  bl 0x50027c
  02f1dd8  nop
  02f1ddc  ori 4, 24, 0
  02f1de0  addic 3, 26, 568
  02f1de4  li 5, 80
  02f1de8  bl 0x50027c
  02f1dec  nop
  02f1df0  ori 4, 24, 0
  02f1df4  addic 3, 26, 572
  02f1df8  li 5, 80
  02f1dfc  bl 0x50027c
  02f1e00  nop
  02f1e04  ori 4, 24, 0
  02f1e08  addic 3, 26, 576
  02f1e0c  li 5, 80
  02f1e10  bl 0x50027c
  02f1e14  nop
  02f1e18  addic 24, 26, 416
  02f1e1c  ori 3, 31, 0
  02f1e20  ori 4, 24, 0
  02f1e24  bl 0x175644
  02f1e28  nop
  02f1e2c  lis 3, 114
  02f1e30  lfs 1, 4(29)
  02f1e34  lis 5, 114
  02f1e38  li 6, 255
  02f1e3c  li 7, 8
  02f1e40  lfs 2, -3048(3)
  02f1e44  fmuls 1, 2, 1
  02f1e48  li 8, 1
  02f1e4c  fmuls 3, 2, 31
  02f1e50  li 9, 4
  02f1e54  li 11, 2
  02f1e58  li 10, 5
  02f1e5c  li 12, 7
  02f1e60  ori 3, 31, 0
  02f1e64  ori 4, 24, 0
  02f1e68  stfs 1, 636(26)
  02f1e6c  lfs 1, 8(29)
  02f1e70  fmuls 1, 2, 1
  02f1e74  stfs 1, 620(26)
  02f1e78  lfs 1, 12(29)
  02f1e7c  li 29, 6
  02f1e80  fmuls 2, 2, 1
  02f1e84  stfs 2, 624(26)
  02f1e88  lfs 2, -3052(5)
  02f1e8c  stfs 3, 612(26)
  02f1e90  fmuls 1, 2, 1
  02f1e94  stb 30, 592(26)
  02f1e98  stb 30, 593(26)
  02f1e9c  stb 6, 594(26)
  02f1ea0  stb 7, 595(26)
  02f1ea4  stb 8, 596(26)
  02f1ea8  stb 8, 597(26)
  02f1eac  stb 9, 656(26)
  02f1eb0  stb 11, 657(26)
  02f1eb4  stb 29, 659(26)
  02f1eb8  stfs 1, 628(26)
  02f1ebc  stb 7, 658(26)
  02f1ec0  stb 10, 832(26)
  02f1ec4  stb 25, 833(26)
  02f1ec8  stb 12, 835(26)
  02f1ecc  stb 28, 834(26)
  02f1ed0  stw 27, 640(26)
  02f1ed4  bl 0x175688
  02f1ed8  nop
  02f1edc  ld 0, 368(1)
  02f1ee0  mtlr 0
  02f1ee4  lfd 31, 344(1)
  02f1ee8  ld 24, 280(1)
  02f1eec  ld 25, 288(1)
  02f1ef0  ld 26, 296(1)
  02f1ef4  ld 27, 304(1)
  02f1ef8  ld 28, 312(1)
  02f1efc  ld 29, 320(1)
  02f1f00  ld 30, 328(1)
  02f1f04  ld 31, 336(1)
  02f1f08  addi 1, 1, 352
  02f1f0c  blr

M217_002f1f28:   # 0x2f1f28, 0xd8 bytes
  02f1f28  stdu 1, -272(1)
  02f1f2c  mflr 0
  02f1f30  std 0, 288(1)
  02f1f34  stfd 31, 264(1)
  02f1f38  std 29, 240(1)
  02f1f3c  lis 4, 47
  02f1f40  std 31, 256(1)
  02f1f44  std 28, 232(1)
  02f1f48  li 29, 0
  02f1f4c  addi 31, 4, 7952
  02f1f50  std 30, 248(1)
  02f1f54  addic 28, 1, 192
  02f1f58  ori 30, 3, 0
  02f1f5c  li 4, 6
  02f1f60  ori 5, 28, 0
  02f1f64  lfs 1, 0(31)
  02f1f68  stw 29, 220(1)
  02f1f6c  stw 29, 216(1)
  02f1f70  fmr 31, 1
  02f1f74  stw 29, 212(1)
  02f1f78  stw 29, 208(1)
  02f1f7c  bl 0xf1114
  02f1f80  nop
  02f1f84  lfs 3, 4(31)
  02f1f88  li 7, -1
  02f1f8c  lfs 4, 8(31)
  02f1f90  li 6, 1
  02f1f94  lfs 5, 12(31)
  02f1f98  ori 3, 30, 0
  02f1f9c  lfs 6, 16(31)
  02f1fa0  addic 4, 1, 208
  02f1fa4  lfs 7, 20(31)
  02f1fa8  ori 5, 28, 0
  02f1fac  std 7, 144(1)
  02f1fb0  li 8, 10
  02f1fb4  std 6, 160(1)
  02f1fb8  li 9, 3
  02f1fbc  std 6, 168(1)
  02f1fc0  fmr 1, 31
  02f1fc4  std 7, 176(1)
  02f1fc8  li 10, 4
  02f1fcc  fmr 2, 31
  02f1fd0  std 29, 184(1)
  02f1fd4  bl 0x10e030
  02f1fd8  nop
  02f1fdc  ld 0, 288(1)
  02f1fe0  mtlr 0
  02f1fe4  lfd 31, 264(1)
  02f1fe8  ld 28, 232(1)
  02f1fec  ld 29, 240(1)
  02f1ff0  ld 30, 248(1)
  02f1ff4  ld 31, 256(1)
  02f1ff8  addi 1, 1, 272
  02f1ffc  blr

UpdateMoby_217:   # 0x2f20a0, 0x23b8 bytes
  02f20a0  stdu 1, -736(1)
  02f20a4  mflr 0
  02f20a8  std 0, 752(1)
  02f20ac  stfd 27, 696(1)
  02f20b0  stfd 28, 704(1)
  02f20b4  stfd 29, 712(1)
  02f20b8  stfd 30, 720(1)
  02f20bc  stfd 31, 728(1)
  02f20c0  std 26, 648(1)
  02f20c4  std 31, 688(1)
  02f20c8  lwz 26, 120(3)
  02f20cc  std 30, 680(1)
  02f20d0  ori 31, 3, 0
  02f20d4  std 23, 624(1)
  02f20d8  li 30, 0
  02f20dc  ori 23, 30, 0
  02f20e0  lwz 3, 56(26)
  02f20e4  std 29, 672(1)
  02f20e8  std 28, 664(1)
  02f20ec  std 27, 656(1)
  02f20f0  std 25, 640(1)
  02f20f4  std 24, 632(1)
  02f20f8  cmpwi 3, 0
  02f20fc  bf 2, 0x2f210c
  02f2100  lbz 3, 1030(26)
  02f2104  cmpwi 3, 0
  02f2108  bt 2, 0x2f2110
  02f210c  li 30, 1
  02f2110  lis 4, 47
  02f2114  addic 25, 26, 288
  02f2118  addi 6, 4, 8192
  02f211c  ori 3, 31, 0
  02f2120  li 4, 0
  02f2124  ori 5, 25, 0
  02f2128  lfs 1, 0(6)
  02f212c  bl 0x119a18
  02f2130  nop
  02f2134  lbz 3, 49(31)
  02f2138  cmpwi 3, 0
  02f213c  bt 2, 0x2f2180
  02f2140  lis 4, 149
  02f2144  addic 3, 31, 16
  02f2148  addic 4, 4, 5376
  02f214c  bl 0x5e8548
  02f2150  nop
  02f2154  lis 3, 47
  02f2158  addi 3, 3, 8192
  02f215c  lfs 2, 4(3)
  02f2160  fcmpu 0, 1, 2
  02f2164  cror 6, 1, 2
  02f2168  bt 6, 0x2f2180
  02f216c  ori 3, 31, 0
  02f2170  bl 0x106360
  02f2174  nop
  02f2178  li 3, 21
  02f217c  stb 3, 127(31)
  02f2180  cmpwi 30, 0
  02f2184  bt 2, 0x2f21a0
  02f2188  lis 3, 47
  02f218c  lfs 31, 1084(26)
  02f2190  addi 3, 3, 8192
  02f2194  lfs 1, 8(3)
  02f2198  fmuls 31, 31, 1
  02f219c  b 0x2f21a4
  02f21a0  lfs 31, 1084(26)
  02f21a4  fmr 1, 31
  02f21a8  addic 28, 1, 480
  02f21ac  ori 3, 31, 0
  02f21b0  ori 5, 28, 0
  02f21b4  bl 0x1118d8
  02f21b8  nop
  02f21bc  addic 24, 31, 16
  02f21c0  lwz 29, 544(1)
  02f21c4  ori 4, 28, 0
  02f21c8  lfs 28, 72(31)
  02f21cc  ori 3, 24, 0
  02f21d0  bl 0x5e8588
  02f21d4  nop
  02f21d8  lfs 2, 480(1)
  02f21dc  fmr 31, 1
  02f21e0  lfs 1, 16(31)
  02f21e4  lfs 3, 484(1)
  02f21e8  fsubs 1, 2, 1
  02f21ec  lfs 4, 20(31)
  02f21f0  fsubs 2, 3, 4
  02f21f4  bl 0x5e8338
  02f21f8  nop
  02f21fc  ori 3, 31, 0
  02f2200  fmr 30, 1
  02f2204  bl 0xefe40
  02f2208  nop
  02f220c  lis 3, 161
  02f2210  fmr 29, 1
  02f2214  lwz 3, 1800(3)
  02f2218  cmpwi 3, 2
  02f221c  bf 2, 0x2f2248
  02f2220  lhz 4, 52(31)
  02f2224  lwz 3, 1060(26)
  02f2228  ori 4, 4, 65
  02f222c  cmpwi 3, 0
  02f2230  sth 4, 52(31)
  02f2234  bt 2, 0x2f2280
  02f2238  lhz 4, 52(3)
  02f223c  ori 4, 4, 65
  02f2240  sth 4, 52(3)
  02f2244  b 0x2f2280
  02f2248  lhz 3, 52(31)
  02f224c  clrlwi 4, 3, 31
  02f2250  cmpwi 4, 0
  02f2254  bt 2, 0x2f2280
  02f2258  li 4, -66
  02f225c  and 4, 3, 4
  02f2260  lwz 3, 1060(26)
  02f2264  cmpwi 3, 0
  02f2268  sth 4, 52(31)
  02f226c  bt 2, 0x2f2280
  02f2270  li 4, -66
  02f2274  lhz 5, 52(3)
  02f2278  and 4, 5, 4
  02f227c  sth 4, 52(3)
  02f2280  addic 3, 1, 128
  02f2284  ori 4, 24, 0
  02f2288  bl 0x5e7e98
  02f228c  nop
  02f2290  addic 3, 1, 144
  02f2294  ori 4, 24, 0
  02f2298  bl 0x5e7e98
  02f229c  nop
  02f22a0  addic 3, 1, 160
  02f22a4  addic 4, 1, 480
  02f22a8  bl 0x5e7e98
  02f22ac  nop
  02f22b0  lbz 3, 49(31)
  02f22b4  cmpwi 3, 0
  02f22b8  bt 2, 0x2f22fc
  02f22bc  lis 4, 149
  02f22c0  ori 3, 24, 0
  02f22c4  addic 4, 4, 5376
  02f22c8  bl 0x5e8548
  02f22cc  nop
  02f22d0  lis 3, 47
  02f22d4  addi 3, 3, 8192
  02f22d8  lfs 2, 12(3)
  02f22dc  fcmpu 0, 1, 2
  02f22e0  cror 6, 1, 2
  02f22e4  bt 6, 0x2f22fc
  02f22e8  ori 3, 31, 0
  02f22ec  bl 0x106360
  02f22f0  nop
  02f22f4  li 3, 26
  02f22f8  stb 3, 127(31)
  02f22fc  addic 3, 26, 1028
  02f2300  bl 0x4fffb4
  02f2304  nop
  02f2308  lbz 3, 32(31)
  02f230c  cmpwi 3, 10
  02f2310  bt 2, 0x2f2900
  02f2314  cmpwi 3, 0
  02f2318  bt 2, 0x2f2900
  02f231c  lis 3, 47
  02f2320  lis 4, 33
  02f2324  addi 6, 3, 8192
  02f2328  ori 3, 31, 0
  02f232c  li 5, 0
  02f2330  lfs 27, 16(6)
  02f2334  stw 23, 564(1)
  02f2338  bl 0x10675c
  02f233c  nop
  02f2340  ori 28, 3, 0
  02f2344  ori 3, 31, 0
  02f2348  addic 5, 26, 32
  02f234c  li 6, 0
  02f2350  addic 7, 1, 560
  02f2354  li 9, 0
  02f2358  addic 8, 1, 564
  02f235c  ori 4, 28, 0
  02f2360  li 10, 4
  02f2364  bl 0x106840
  02f2368  nop
  02f236c  cmpwi 28, 0
  02f2370  ori 27, 3, 0
  02f2374  bt 2, 0x2f2900
  02f2378  lwz 3, 564(1)
  02f237c  cmpwi 3, 0
  02f2380  bt 2, 0x2f2900
  02f2384  lbz 3, 32(31)
  02f2388  cmpwi 3, 0
  02f238c  bt 2, 0x2f2900
  02f2390  lwz 3, 32(28)
  02f2394  cmpwi 3, 0
  02f2398  bt 2, 0x2f23f8
  02f239c  lis 4, 151
  02f23a0  addic 4, 4, -25376
  02f23a4  lwz 5, 4240(4)
  02f23a8  cmpw 3, 5
  02f23ac  bt 2, 0x2f23d4
  02f23b0  lfs 1, 16(31)
  02f23b4  lfs 2, 16(3)
  02f23b8  lfs 3, 20(31)
  02f23bc  lfs 4, 20(3)
  02f23c0  fsubs 1, 1, 2
  02f23c4  fsubs 2, 3, 4
  02f23c8  bl 0x5e8338
  02f23cc  nop
  02f23d0  b 0x2f23f4
  02f23d4  lfs 1, 16(31)
  02f23d8  lfs 2, 128(4)
  02f23dc  lfs 3, 20(31)
  02f23e0  lfs 4, 132(4)
  02f23e4  fsubs 1, 1, 2
  02f23e8  fsubs 2, 3, 4
  02f23ec  bl 0x5e8338
  02f23f0  nop
  02f23f4  b 0x2f2420
  02f23f8  lis 3, 151
  02f23fc  lfs 1, 16(31)
  02f2400  lfs 2, 20(31)
  02f2404  addic 3, 3, -25376
  02f2408  lfs 3, 128(3)
  02f240c  lfs 4, 132(3)
  02f2410  fsubs 1, 1, 3
  02f2414  fsubs 2, 2, 4
  02f2418  bl 0x5e8338
  02f241c  nop
  02f2420  lis 3, 47
  02f2424  stfs 1, 568(1)
  02f2428  lis 4, 114
  02f242c  addi 3, 3, 8192
  02f2430  fmr 3, 27
  02f2434  li 5, 9
  02f2438  lfs 1, 20(3)
  02f243c  lfs 2, -3048(4)
  02f2440  lfs 4, 32(26)
  02f2444  lis 4, 114
  02f2448  fmuls 1, 2, 1
  02f244c  stfs 1, 212(26)
  02f2450  lfs 1, 24(3)
  02f2454  fmuls 1, 2, 1
  02f2458  stfs 1, 208(26)
  02f245c  lfs 27, 28(3)
  02f2460  lfs 1, -3052(4)
  02f2464  stb 23, 253(26)
  02f2468  fmuls 1, 1, 27
  02f246c  stw 5, 228(26)
  02f2470  stfs 1, 216(26)
  02f2474  lfs 1, 564(1)
  02f2478  fsubs 1, 4, 1
  02f247c  fcmpu 0, 1, 3
  02f2480  stfs 1, 32(26)
  02f2484  bt 1, 0x2f248c
  02f2488  li 27, 1
  02f248c  lhz 3, 1028(26)
  02f2490  cmpwi 1, 27, 1
  02f2494  cmpwi 3, 0
  02f2498  cror 2, 2, 6
  02f249c  bt 2, 0x2f24e4
  02f24a0  lwz 3, 1096(26)
  02f24a4  cmpwi 3, 0
  02f24a8  bt 1, 0x2f24b8
  02f24ac  lis 3, -16634
  02f24b0  ori 3, 3, 2706
  02f24b4  stw 3, 1032(26)
  02f24b8  li 3, 30
  02f24bc  bl 0x5e7e18
  02f24c0  nop
  02f24c4  li 5, 120
  02f24c8  stw 3, 1096(26)
  02f24cc  addic 4, 26, 176
  02f24d0  ori 3, 31, 0
  02f24d4  stb 5, 183(26)
  02f24d8  bl 0x10c808
  02f24dc  nop
  02f24e0  b 0x2f2900
  02f24e4  cmpwi 27, 5
  02f24e8  cmpwi 1, 27, 1
  02f24ec  cmpwi 6, 27, 8
  02f24f0  bt 1, 0x2f2520
  02f24f4  cmpwi 6, 27, -1
  02f24f8  cmpwi 7, 27, 2
  02f24fc  bt 5, 0x2f2510
  02f2500  cmpwi 1, 27, 0
  02f2504  bf 25, 0x2f2900
  02f2508  bf 5, 0x2f2900
  02f250c  b 0x2f2830
  02f2510  cmpwi 1, 27, 3
  02f2514  bf 29, 0x2f2900
  02f2518  bf 5, 0x2f252c
  02f251c  b 0x2f2788
  02f2520  cmpwi 1, 27, 7
  02f2524  bt 25, 0x2f2900
  02f2528  bt 6, 0x2f2680
  02f252c  li 3, 11
  02f2530  li 4, 0
  02f2534  ori 5, 31, 0
  02f2538  bl 0x15d12c
  02f253c  nop
  02f2540  lwz 3, 1096(26)
  02f2544  cmpwi 3, 0
  02f2548  bt 1, 0x2f2558
  02f254c  lis 3, -16634
  02f2550  ori 3, 3, 2706
  02f2554  stw 3, 1032(26)
  02f2558  li 3, 30
  02f255c  bl 0x5e7e18
  02f2560  nop
  02f2564  stw 3, 1096(26)
  02f2568  lwz 4, 32(28)
  02f256c  lbz 3, 82(31)
  02f2570  lhz 4, 166(4)
  02f2574  cmpwi 4, 0
  02f2578  bt 2, 0x2f259c
  02f257c  lwz 5, 44(28)
  02f2580  lis 4, 16256
  02f2584  srawi 6, 5, 31
  02f2588  srwi 7, 6, 1
  02f258c  xor 5, 7, 5
  02f2590  subc 5, 5, 6
  02f2594  cmpw 5, 4
  02f2598  bf 1, 0x2f2618
  02f259c  cmpwi 3, 4
  02f25a0  bf 2, 0x2f25d0
  02f25a4  lis 3, 47
  02f25a8  addi 3, 3, 8192
  02f25ac  lfs 1, 32(3)
  02f25b0  fcmpu 0, 29, 1
  02f25b4  bt 0, 0x2f25d0
  02f25b8  lis 3, 47
  02f25bc  addi 3, 3, 8192
  02f25c0  lfs 1, 36(3)
  02f25c4  fcmpu 0, 29, 1
  02f25c8  cror 6, 0, 2
  02f25cc  bt 6, 0x2f2618
  02f25d0  lbz 4, 188(31)
  02f25d4  li 3, 6
  02f25d8  ori 4, 4, 5
  02f25dc  stb 4, 188(31)
  02f25e0  bl 0x5e7e18
  02f25e4  nop
  02f25e8  ori 6, 3, 0
  02f25ec  ori 3, 31, 0
  02f25f0  li 4, 5
  02f25f4  li 5, 0
  02f25f8  bl 0x2f1b70
  02f25fc  lis 3, 47
  02f2600  addi 4, 3, 8192
  02f2604  ori 3, 31, 0
  02f2608  lfs 1, 8(4)
  02f260c  bl 0x2f1be4
  02f2610  li 3, 8
  02f2614  stb 3, 32(31)
  02f2618  lis 3, 114
  02f261c  lis 4, 47
  02f2620  addi 4, 4, 8192
  02f2624  lfs 1, -3056(3)
  02f2628  fmuls 1, 1, 27
  02f262c  lfs 2, 40(4)
  02f2630  lfs 3, 44(4)
  02f2634  li 5, 120
  02f2638  ori 3, 31, 0
  02f263c  addic 4, 26, 176
  02f2640  stb 5, 183(26)
  02f2644  fdivs 1, 2, 1
  02f2648  fmr 2, 3
  02f264c  fmuls 1, 1, 2
  02f2650  stfs 1, 1068(26)
  02f2654  bl 0x10c808
  02f2658  nop
  02f265c  li 3, 70
  02f2660  bl 0x5e7e18
  02f2664  nop
  02f2668  sth 3, 1028(26)
  02f266c  li 3, 240
  02f2670  bl 0x5e7e18
  02f2674  nop
  02f2678  stb 3, 1030(26)
  02f267c  b 0x2f2900
  02f2680  li 3, 11
  02f2684  li 4, 0
  02f2688  ori 5, 31, 0
  02f268c  bl 0x15d12c
  02f2690  nop
  02f2694  lwz 3, 1096(26)
  02f2698  cmpwi 3, 0
  02f269c  bt 1, 0x2f26ac
  02f26a0  lis 3, -16634
  02f26a4  ori 3, 3, 2706
  02f26a8  stw 3, 1032(26)
  02f26ac  li 3, 30
  02f26b0  bl 0x5e7e18
  02f26b4  nop
  02f26b8  stw 3, 1096(26)
  02f26bc  lbz 4, 188(31)
  02f26c0  li 3, 6
  02f26c4  ori 4, 4, 5
  02f26c8  stb 4, 188(31)
  02f26cc  bl 0x5e7e18
  02f26d0  nop
  02f26d4  ori 6, 3, 0
  02f26d8  ori 3, 31, 0
  02f26dc  li 4, 5
  02f26e0  li 5, 0
  02f26e4  bl 0x2f1b70
  02f26e8  lis 3, 47
  02f26ec  addi 28, 3, 8192
  02f26f0  ori 3, 31, 0
  02f26f4  lfs 1, 8(28)
  02f26f8  bl 0x2f1be4
  02f26fc  li 5, 8
  02f2700  lfs 1, 568(1)
  02f2704  ori 3, 31, 0
  02f2708  addic 4, 26, 192
  02f270c  li 6, 5
  02f2710  stb 5, 32(31)
  02f2714  li 7, 1
  02f2718  li 8, 0
  02f271c  bl 0x10ad80
  02f2720  nop
  02f2724  lis 3, 16544
  02f2728  lis 4, 16672
  02f272c  lis 5, 114
  02f2730  stw 3, 272(26)
  02f2734  stw 4, 276(26)
  02f2738  lfs 1, 40(28)
  02f273c  lfs 2, -3056(5)
  02f2740  fmuls 2, 2, 27
  02f2744  li 5, 120
  02f2748  ori 3, 31, 0
  02f274c  addic 4, 26, 176
  02f2750  stb 5, 183(26)
  02f2754  fdivs 1, 1, 2
  02f2758  stfs 1, 1068(26)
  02f275c  bl 0x10c808
  02f2760  nop
  02f2764  li 3, 70
  02f2768  bl 0x5e7e18
  02f276c  nop
  02f2770  sth 3, 1028(26)
  02f2774  li 3, 240
  02f2778  bl 0x5e7e18
  02f277c  nop
  02f2780  stb 3, 1030(26)
  02f2784  b 0x2f2900
  02f2788  li 3, 11
  02f278c  li 4, 0
  02f2790  ori 5, 31, 0
  02f2794  bl 0x15d12c
  02f2798  nop
  02f279c  li 3, 4
  02f27a0  bl 0x5e7e18
  02f27a4  nop
  02f27a8  ori 6, 3, 0
  02f27ac  ori 3, 31, 0
  02f27b0  li 4, 6
  02f27b4  li 5, 2
  02f27b8  bl 0x2f1b70
  02f27bc  li 3, 40
  02f27c0  bl 0x5e7e18
  02f27c4  nop
  02f27c8  sth 3, 1026(26)
  02f27cc  li 4, 1
  02f27d0  lis 3, 114
  02f27d4  lis 5, 47
  02f27d8  stb 4, 32(31)
  02f27dc  addi 5, 5, 8192
  02f27e0  lfs 1, -3056(3)
  02f27e4  fmuls 1, 1, 27
  02f27e8  lfs 2, 40(5)
  02f27ec  li 5, 120
  02f27f0  ori 3, 31, 0
  02f27f4  addic 4, 26, 176
  02f27f8  stb 5, 183(26)
  02f27fc  fdivs 1, 2, 1
  02f2800  stfs 1, 1068(26)
  02f2804  bl 0x10c808
  02f2808  nop
  02f280c  li 3, 70
  02f2810  bl 0x5e7e18
  02f2814  nop
  02f2818  sth 3, 1028(26)
  02f281c  li 3, 240
  02f2820  bl 0x5e7e18
  02f2824  nop
  02f2828  stb 3, 1030(26)
  02f282c  b 0x2f2900
  02f2830  lis 4, 47
  02f2834  li 3, 1024
  02f2838  lis 6, 16256
  02f283c  addi 4, 4, 8192
  02f2840  addic 27, 26, 192
  02f2844  stw 3, 224(26)
  02f2848  stw 6, 232(26)
  02f284c  ori 5, 27, 0
  02f2850  lfs 1, 48(4)
  02f2854  lfs 2, 52(4)
  02f2858  bl 0x1158b0
  02f285c  nop
  02f2860  lfs 1, 16(28)
  02f2864  lfs 2, 24(28)
  02f2868  addic 5, 1, 568
  02f286c  stfs 1, 48(1)
  02f2870  addic 6, 26, 216
  02f2874  stfs 2, 56(1)
  02f2878  addic 7, 26, 220
  02f287c  lfs 1, 20(28)
  02f2880  lfs 2, 28(28)
  02f2884  stfs 1, 52(1)
  02f2888  stfs 2, 60(1)
  02f288c  ld 3, 48(1)
  02f2890  ld 4, 56(1)
  02f2894  bl 0x107de8
  02f2898  nop
  02f289c  ori 3, 31, 0
  02f28a0  lfs 1, 568(1)
  02f28a4  ori 4, 27, 0
  02f28a8  li 6, 7
  02f28ac  li 7, 1
  02f28b0  li 8, 0
  02f28b4  bl 0x10ad80
  02f28b8  nop
  02f28bc  lis 3, 16704
  02f28c0  lis 5, 16840
  02f28c4  li 6, 10
  02f28c8  li 7, 120
  02f28cc  stw 3, 272(26)
  02f28d0  addic 4, 26, 176
  02f28d4  stw 5, 276(26)
  02f28d8  ori 3, 31, 0
  02f28dc  stb 6, 32(31)
  02f28e0  stb 7, 183(26)
  02f28e4  bl 0x10c808
  02f28e8  nop
  02f28ec  ori 3, 31, 0
  02f28f0  li 4, 0
  02f28f4  li 5, -1
  02f28f8  bl 0xfd8d0
  02f28fc  nop
  02f2900  li 3, 255
  02f2904  stb 3, 164(31)
  02f2908  lwz 3, 56(26)
  02f290c  cmpwi 3, 0
  02f2910  bt 2, 0x2f2924
  02f2914  li 3, 240
  02f2918  bl 0x5e7e18
  02f291c  nop
  02f2920  stb 3, 1030(26)
  02f2924  addic 3, 26, 1030
  02f2928  stw 23, 56(26)
  02f292c  bl 0x5000b4
  02f2930  nop
  02f2934  lbz 3, 32(31)
  02f2938  cmpwi 3, 0
  02f293c  bt 2, 0x2f2974
  02f2940  lbz 3, 46(26)
  02f2944  cmpwi 3, 1
  02f2948  bt 2, 0x2f2974
  02f294c  lwz 26, 1060(26)
  02f2950  cmpwi 26, 0
  02f2954  bt 2, 0x2f2964
  02f2958  ori 3, 26, 0
  02f295c  bl 0xefb38
  02f2960  nop
  02f2964  ori 3, 31, 0
  02f2968  bl 0xefb38
  02f296c  nop
  02f2970  b 0x2f4410
  02f2974  addic 3, 26, 1026
  02f2978  bl 0x4fffb4
  02f297c  nop
  02f2980  lfs 27, 72(31)
  02f2984  lbz 3, 32(31)
  02f2988  lfs 1, 16(31)
  02f298c  fmr 3, 27
  02f2990  lwz 28, 120(31)
  02f2994  cmpwi 3, 4
  02f2998  lfs 2, 20(31)
  02f299c  bt 1, 0x2f29d0
  02f29a0  cmpwi 3, 1
  02f29a4  bt 1, 0x2f29bc
  02f29a8  cmpwi 3, -1
  02f29ac  bf 1, 0x2f4034
  02f29b0  cmpwi 3, 0
  02f29b4  bf 1, 0x2f2a04
  02f29b8  b 0x2f2ae0
  02f29bc  cmpwi 3, 2
  02f29c0  bf 1, 0x2f2d9c
  02f29c4  cmpwi 3, 3
  02f29c8  bf 1, 0x2f2e34
  02f29cc  b 0x2f3004
  02f29d0  cmpwi 3, 10
  02f29d4  bt 2, 0x2f3f0c
  02f29d8  cmpwi 3, 9
  02f29dc  bt 2, 0x2f3dac
  02f29e0  cmpwi 3, 8
  02f29e4  bt 2, 0x2f3b50
  02f29e8  cmpwi 3, 7
  02f29ec  bt 2, 0x2f389c
  02f29f0  cmpwi 3, 6
  02f29f4  bt 2, 0x2f35e4
  02f29f8  cmpwi 3, 5
  02f29fc  bt 2, 0x2f3378
  02f2a00  b 0x2f4034
  02f2a04  lis 3, 16448
  02f2a08  li 4, 3
  02f2a0c  li 5, 2
  02f2a10  lis 6, 16320
  02f2a14  li 7, 1
  02f2a18  stw 3, 32(26)
  02f2a1c  sth 4, 36(26)
  02f2a20  stb 5, 40(26)
  02f2a24  addic 3, 26, 1008
  02f2a28  stw 6, 48(26)
  02f2a2c  ori 4, 24, 0
  02f2a30  stb 7, 46(26)
  02f2a34  stb 23, 41(26)
  02f2a38  stb 23, 188(31)
  02f2a3c  stw 23, 1056(26)
  02f2a40  stw 23, 1060(26)
  02f2a44  stb 23, 1031(26)
  02f2a48  bl 0x5e7e98
  02f2a4c  nop
  02f2a50  lbz 3, 289(26)
  02f2a54  cmpwi 3, 0
  02f2a58  bf 2, 0x2f2a70
  02f2a5c  ori 3, 31, 0
  02f2a60  li 4, 0
  02f2a64  ori 5, 25, 0
  02f2a68  bl 0xf0ea8
  02f2a6c  nop
  02f2a70  ori 3, 31, 0
  02f2a74  addic 5, 26, 352
  02f2a78  li 4, 12
  02f2a7c  bl 0xf0ea8
  02f2a80  nop
  02f2a84  li 3, 10
  02f2a88  lfs 1, 72(31)
  02f2a8c  li 4, 12
  02f2a90  lbz 5, 1024(26)
  02f2a94  stfs 1, 1064(26)
  02f2a98  stb 3, 88(26)
  02f2a9c  cmpwi 5, 0
  02f2aa0  stb 4, 90(26)
  02f2aa4  bt 2, 0x2f2ad4
  02f2aa8  li 4, 3
  02f2aac  li 3, 12
  02f2ab0  stb 4, 32(31)
  02f2ab4  bl 0x5e7e18
  02f2ab8  nop
  02f2abc  ori 6, 3, 0
  02f2ac0  ori 3, 31, 0
  02f2ac4  li 4, 10
  02f2ac8  li 5, 0
  02f2acc  bl 0x2f1b70
  02f2ad0  b 0x2f4034
  02f2ad4  li 3, 1
  02f2ad8  stb 3, 32(31)
  02f2adc  b 0x2f4034
  02f2ae0  lbz 3, 83(31)
  02f2ae4  cmpwi 3, 6
  02f2ae8  bf 2, 0x2f2b1c
  02f2aec  lhz 4, 1026(26)
  02f2af0  li 3, 37
  02f2af4  extsh 29, 4
  02f2af8  bl 0x5e7e18
  02f2afc  nop
  02f2b00  cmpw 29, 3
  02f2b04  bf 2, 0x2f2b1c
  02f2b08  li 3, 2
  02f2b0c  li 4, 0
  02f2b10  ori 5, 31, 0
  02f2b14  bl 0x15d12c
  02f2b18  nop
  02f2b1c  lbz 3, 112(31)
  02f2b20  cmpwi 1, 30, 0
  02f2b24  rlwinm 3, 3, 0, 30, 30
  02f2b28  cmpwi 6, 3, 0
  02f2b2c  bt 26, 0x2f2bbc
  02f2b30  bt 6, 0x2f2b4c
  02f2b34  lis 3, 47
  02f2b38  lfs 1, 1084(26)
  02f2b3c  addi 3, 3, 8192
  02f2b40  lfs 2, 8(3)
  02f2b44  fmuls 1, 1, 2
  02f2b48  b 0x2f2b50
  02f2b4c  lfs 1, 1084(26)
  02f2b50  fcmpu 0, 31, 1
  02f2b54  cror 6, 0, 2
  02f2b58  bt 6, 0x2f2bbc
  02f2b5c  stw 23, 572(1)
  02f2b60  li 4, 1
  02f2b64  stw 23, 576(1)
  02f2b68  li 3, 6
  02f2b6c  stw 23, 580(1)
  02f2b70  stw 23, 584(1)
  02f2b74  stw 23, 588(1)
  02f2b78  stw 4, 592(1)
  02f2b7c  bl 0xfc620
  02f2b80  nop
  02f2b84  sldi 3, 3, 2
  02f2b88  addc 3, 1, 3
  02f2b8c  clrldi 4, 3, 32
  02f2b90  li 3, 24
  02f2b94  lwz 4, 572(4)
  02f2b98  extsw 29, 4
  02f2b9c  bl 0x5e7e18
  02f2ba0  nop
  02f2ba4  ori 6, 3, 0
  02f2ba8  ori 3, 31, 0
  02f2bac  ori 4, 29, 0
  02f2bb0  li 5, 0
  02f2bb4  bl 0x2f1b70
  02f2bb8  b 0x2f2c24
  02f2bbc  lbz 3, 83(31)
  02f2bc0  cmpwi 3, 13
  02f2bc4  cmpwi 1, 3, 6
  02f2bc8  bt 2, 0x2f2c24
  02f2bcc  bf 6, 0x2f2bd4
  02f2bd0  bt 26, 0x2f2c24
  02f2bd4  cmpwi 30, 0
  02f2bd8  bt 2, 0x2f2bf4
  02f2bdc  lis 3, 47
  02f2be0  lfs 1, 1084(26)
  02f2be4  addi 3, 3, 8192
  02f2be8  lfs 2, 8(3)
  02f2bec  fmuls 1, 1, 2
  02f2bf0  b 0x2f2bf8
  02f2bf4  lfs 1, 1084(26)
  02f2bf8  fcmpu 0, 31, 1
  02f2bfc  cror 6, 1, 2
  02f2c00  bt 6, 0x2f2c24
  02f2c04  li 3, 24
  02f2c08  bl 0x5e7e18
  02f2c0c  nop
  02f2c10  ori 6, 3, 0
  02f2c14  ori 3, 31, 0
  02f2c18  li 4, 13
  02f2c1c  li 5, 0
  02f2c20  bl 0x2f1b70
  02f2c24  lwz 3, 1072(26)
  02f2c28  cmpwi 3, -1
  02f2c2c  bt 2, 0x2f2c90
  02f2c30  lwz 4, 1076(26)
  02f2c34  cmpwi 4, -1
  02f2c38  bt 2, 0x2f2c90
  02f2c3c  lhz 4, 1082(26)
  02f2c40  cmpwi 1, 30, 0
  02f2c44  cmpwi 4, 0
  02f2c48  bf 2, 0x2f2c90
  02f2c4c  bf 6, 0x2f2c70
  02f2c50  lis 5, 151
  02f2c54  extsw 4, 3
  02f2c58  addic 3, 5, -25376
  02f2c5c  addic 3, 3, 128
  02f2c60  bl 0x110b70
  02f2c64  nop
  02f2c68  cmpwi 3, 0
  02f2c6c  bt 2, 0x2f2c90
  02f2c70  li 3, 4
  02f2c74  lbz 5, 188(31)
  02f2c78  li 4, 1
  02f2c7c  stb 3, 32(31)
  02f2c80  ori 3, 5, 1
  02f2c84  stb 3, 188(31)
  02f2c88  sth 4, 1082(26)
  02f2c8c  b 0x2f4034
  02f2c90  lbz 3, 82(31)
  02f2c94  cmpwi 3, 13
  02f2c98  bf 2, 0x2f2cd4
  02f2c9c  addic 3, 26, 1031
  02f2ca0  bl 0x5000b4
  02f2ca4  nop
  02f2ca8  cmpwi 3, 0
  02f2cac  bt 2, 0x2f2cd4
  02f2cb0  li 3, 10
  02f2cb4  li 4, 0
  02f2cb8  ori 5, 31, 0
  02f2cbc  bl 0x15d12c
  02f2cc0  nop
  02f2cc4  li 3, 180
  02f2cc8  bl 0x5e7e18
  02f2ccc  nop
  02f2cd0  stb 3, 1031(26)
  02f2cd4  lhz 3, 1026(26)
  02f2cd8  cmpwi 3, 0
  02f2cdc  bf 2, 0x2f4034
  02f2ce0  lis 3, 47
  02f2ce4  cmpwi 1, 30, 0
  02f2ce8  addi 3, 3, 8192
  02f2cec  lfs 1, 56(3)
  02f2cf0  fcmpu 0, 31, 1
  02f2cf4  cror 2, 1, 2
  02f2cf8  bt 2, 0x2f2d28
  02f2cfc  li 3, 12
  02f2d00  bl 0x5e7e18
  02f2d04  nop
  02f2d08  ori 6, 3, 0
  02f2d0c  ori 3, 31, 0
  02f2d10  li 4, 4
  02f2d14  li 5, 4
  02f2d18  bl 0x2f1b70
  02f2d1c  li 3, 7
  02f2d20  stb 3, 32(31)
  02f2d24  b 0x2f4034
  02f2d28  bt 6, 0x2f2d44
  02f2d2c  lis 3, 47
  02f2d30  lfs 1, 1084(26)
  02f2d34  addi 3, 3, 8192
  02f2d38  lfs 2, 8(3)
  02f2d3c  fmuls 1, 1, 2
  02f2d40  b 0x2f2d48
  02f2d44  lfs 1, 1084(26)
  02f2d48  fcmpu 0, 31, 1
  02f2d4c  cror 6, 1, 2
  02f2d50  bt 6, 0x2f4034
  02f2d54  lbz 3, 188(31)
  02f2d58  clrlwi 3, 3, 31
  02f2d5c  cmpwi 3, 0
  02f2d60  bf 2, 0x2f4034
  02f2d64  li 3, 12
  02f2d68  bl 0x5e7e18
  02f2d6c  nop
  02f2d70  ori 6, 3, 0
  02f2d74  ori 3, 31, 0
  02f2d78  li 4, 2
  02f2d7c  li 5, 0
  02f2d80  bl 0x2f1b70
  02f2d84  lbz 3, 188(31)
  02f2d88  li 4, 2
  02f2d8c  ori 3, 3, 1
  02f2d90  stb 4, 32(31)
  02f2d94  stb 3, 188(31)
  02f2d98  b 0x2f4034
  02f2d9c  lbz 3, 82(31)
  02f2da0  cmpwi 3, 2
  02f2da4  bf 2, 0x2f4034
  02f2da8  lbz 3, 112(31)
  02f2dac  cmpwi 1, 30, 0
  02f2db0  rlwinm 3, 3, 0, 30, 30
  02f2db4  cmpwi 3, 0
  02f2db8  bt 2, 0x2f4034
  02f2dbc  ori 3, 23, 0
  02f2dc0  bt 6, 0x2f2ddc
  02f2dc4  lis 4, 47
  02f2dc8  lfs 1, 1084(26)
  02f2dcc  addi 4, 4, 8192
  02f2dd0  lfs 2, 8(4)
  02f2dd4  fmuls 1, 1, 2
  02f2dd8  b 0x2f2de0
  02f2ddc  lfs 1, 1084(26)
  02f2de0  fcmpu 0, 31, 1
  02f2de4  cror 6, 1, 2
  02f2de8  bt 6, 0x2f2df0
  02f2dec  li 3, 13
  02f2df0  ori 4, 3, 0
  02f2df4  lis 3, 47
  02f2df8  lis 5, 114
  02f2dfc  addi 3, 3, 8192
  02f2e00  lfs 1, 60(3)
  02f2e04  lfs 2, -3056(5)
  02f2e08  ori 3, 31, 0
  02f2e0c  li 5, 0
  02f2e10  fmuls 1, 2, 1
  02f2e14  fctiwz 1, 1
  02f2e18  stfd 1, 600(1)
  02f2e1c  lwz 6, 604(1)
  02f2e20  extsw 6, 6
  02f2e24  bl 0x2f1b70
  02f2e28  li 3, 1
  02f2e2c  stb 3, 32(31)
  02f2e30  b 0x2f4034
  02f2e34  lbz 3, 82(31)
  02f2e38  cmpwi 3, 0
  02f2e3c  bt 2, 0x2f2eb4
  02f2e40  lbz 3, 112(31)
  02f2e44  rlwinm 3, 3, 0, 30, 30
  02f2e48  cmpwi 3, 0
  02f2e4c  bt 2, 0x2f2eb4
  02f2e50  lis 3, 47
  02f2e54  lis 4, 114
  02f2e58  addi 3, 3, 8192
  02f2e5c  li 5, 0
  02f2e60  lfs 1, 60(3)
  02f2e64  lfs 2, -3056(4)
  02f2e68  ori 3, 31, 0
  02f2e6c  fmuls 1, 2, 1
  02f2e70  li 4, 11
  02f2e74  fctiwz 1, 1
  02f2e78  stfd 1, 600(1)
  02f2e7c  lwz 29, 604(1)
  02f2e80  extsw 29, 29
  02f2e84  ori 6, 29, 0
  02f2e88  bl 0xfddc0
  02f2e8c  nop
  02f2e90  lwz 28, 1060(28)
  02f2e94  cmpwi 28, 0
  02f2e98  bt 2, 0x2f2eb4
  02f2e9c  ori 3, 28, 0
  02f2ea0  li 4, 11
  02f2ea4  li 5, 0
  02f2ea8  ori 6, 29, 0
  02f2eac  bl 0xfddc0
  02f2eb0  nop
  02f2eb4  lhz 3, 1026(26)
  02f2eb8  cmpwi 3, 0
  02f2ebc  bf 2, 0x2f4034
  02f2ec0  lis 3, 47
  02f2ec4  cmpwi 1, 30, 0
  02f2ec8  addi 3, 3, 8192
  02f2ecc  lfs 1, 56(3)
  02f2ed0  fcmpu 0, 31, 1
  02f2ed4  cror 2, 1, 2
  02f2ed8  bt 2, 0x2f2f4c
  02f2edc  lis 3, 47
  02f2ee0  lis 4, 114
  02f2ee4  addi 3, 3, 8192
  02f2ee8  li 5, 4
  02f2eec  lfs 1, 60(3)
  02f2ef0  lfs 2, -3056(4)
  02f2ef4  ori 3, 31, 0
  02f2ef8  lwz 29, 120(31)
  02f2efc  li 4, 4
  02f2f00  fmuls 1, 2, 1
  02f2f04  fctiwz 1, 1
  02f2f08  stfd 1, 600(1)
  02f2f0c  lwz 30, 604(1)
  02f2f10  extsw 30, 30
  02f2f14  ori 6, 30, 0
  02f2f18  bl 0xfddc0
  02f2f1c  nop
  02f2f20  lwz 3, 1060(29)
  02f2f24  cmpwi 3, 0
  02f2f28  bt 2, 0x2f2f40
  02f2f2c  li 4, 4
  02f2f30  li 5, 4
  02f2f34  ori 6, 30, 0
  02f2f38  bl 0xfddc0
  02f2f3c  nop
  02f2f40  li 3, 7
  02f2f44  stb 3, 32(31)
  02f2f48  b 0x2f4034
  02f2f4c  bt 6, 0x2f2f68
  02f2f50  lis 3, 47
  02f2f54  lfs 1, 1084(26)
  02f2f58  addi 3, 3, 8192
  02f2f5c  lfs 2, 8(3)
  02f2f60  fmuls 1, 1, 2
  02f2f64  b 0x2f2f6c
  02f2f68  lfs 1, 1084(26)
  02f2f6c  fcmpu 0, 31, 1
  02f2f70  cror 6, 1, 2
  02f2f74  bt 6, 0x2f4034
  02f2f78  lbz 3, 188(31)
  02f2f7c  clrlwi 3, 3, 31
  02f2f80  cmpwi 3, 0
  02f2f84  bf 2, 0x2f4034
  02f2f88  lis 3, 47
  02f2f8c  lis 4, 114
  02f2f90  addi 3, 3, 8192
  02f2f94  li 5, 0
  02f2f98  lfs 1, 60(3)
  02f2f9c  lfs 2, -3056(4)
  02f2fa0  lwz 29, 120(31)
  02f2fa4  ori 3, 31, 0
  02f2fa8  fmuls 1, 2, 1
  02f2fac  li 4, 2
  02f2fb0  fctiwz 1, 1
  02f2fb4  stfd 1, 600(1)
  02f2fb8  lwz 30, 604(1)
  02f2fbc  extsw 30, 30
  02f2fc0  ori 6, 30, 0
  02f2fc4  bl 0xfddc0
  02f2fc8  nop
  02f2fcc  lwz 3, 1060(29)
  02f2fd0  cmpwi 3, 0
  02f2fd4  bt 2, 0x2f2fec
  02f2fd8  li 4, 2
  02f2fdc  li 5, 0
  02f2fe0  ori 6, 30, 0
  02f2fe4  bl 0xfddc0
  02f2fe8  nop
  02f2fec  li 3, 2
  02f2ff0  lbz 4, 188(31)
  02f2ff4  stb 3, 32(31)
  02f2ff8  ori 3, 4, 1
  02f2ffc  stb 3, 188(31)
  02f3000  b 0x2f4034
  02f3004  lis 3, 165
  02f3008  addic 29, 3, 7136
  02f300c  lwz 3, 1076(26)
  02f3010  lbz 4, 83(31)
  02f3014  slwi 3, 3, 2
  02f3018  cmpwi 4, 3
  02f301c  extsw 3, 3
  02f3020  lwzx 29, 29, 3
  02f3024  bt 2, 0x2f308c
  02f3028  lis 3, 47
  02f302c  lis 4, 114
  02f3030  addi 3, 3, 8192
  02f3034  ori 27, 28, 0
  02f3038  li 5, 0
  02f303c  lfs 1, 60(3)
  02f3040  lfs 2, -3056(4)
  02f3044  ori 3, 31, 0
  02f3048  li 4, 3
  02f304c  fmuls 1, 2, 1
  02f3050  fctiwz 1, 1
  02f3054  stfd 1, 600(1)
  02f3058  lwz 28, 604(1)
  02f305c  extsw 28, 28
  02f3060  ori 6, 28, 0
  02f3064  bl 0xfddc0
  02f3068  nop
  02f306c  lwz 3, 1060(27)
  02f3070  cmpwi 3, 0
  02f3074  bt 2, 0x2f308c
  02f3078  li 4, 3
  02f307c  li 5, 0
  02f3080  ori 6, 28, 0
  02f3084  bl 0xfddc0
  02f3088  nop
  02f308c  lis 3, 47
  02f3090  addi 3, 3, 8192
  02f3094  lfs 1, 56(3)
  02f3098  fcmpu 0, 31, 1
  02f309c  cror 6, 1, 2
  02f30a0  bt 6, 0x2f3110
  02f30a4  lis 3, 47
  02f30a8  lis 4, 114
  02f30ac  addi 3, 3, 8192
  02f30b0  li 5, 4
  02f30b4  lfs 1, 60(3)
  02f30b8  lfs 2, -3056(4)
  02f30bc  ori 3, 31, 0
  02f30c0  lwz 27, 120(31)
  02f30c4  li 4, 4
  02f30c8  fmuls 1, 2, 1
  02f30cc  fctiwz 1, 1
  02f30d0  stfd 1, 600(1)
  02f30d4  lwz 28, 604(1)
  02f30d8  extsw 28, 28
  02f30dc  ori 6, 28, 0
  02f30e0  bl 0xfddc0
  02f30e4  nop
  02f30e8  lwz 3, 1060(27)
  02f30ec  cmpwi 3, 0
  02f30f0  bt 2, 0x2f3108
  02f30f4  li 4, 4
  02f30f8  li 5, 4
  02f30fc  ori 6, 28, 0
  02f3100  bl 0xfddc0
  02f3104  nop
  02f3108  li 3, 7
  02f310c  stb 3, 32(31)
  02f3110  lhz 3, 1080(26)
  02f3114  ori 4, 24, 0
  02f3118  extsh 3, 3
  02f311c  sldi 3, 3, 4
  02f3120  addc 3, 29, 3
  02f3124  addic 3, 3, 16
  02f3128  clrldi 3, 3, 32
  02f312c  bl 0x5e8588
  02f3130  nop
  02f3134  lis 3, 47
  02f3138  addi 3, 3, 8192
  02f313c  lfs 2, 64(3)
  02f3140  fcmpu 0, 1, 2
  02f3144  cror 6, 1, 2
  02f3148  bt 6, 0x2f3274
  02f314c  lhz 3, 1080(26)
  02f3150  cmpwi 1, 30, 0
  02f3154  addic 3, 3, 1
  02f3158  lwz 30, 120(31)
  02f315c  extsh 4, 3
  02f3160  sth 3, 1080(26)
  02f3164  lwz 3, 0(29)
  02f3168  cmpw 4, 3
  02f316c  bf 2, 0x2f3274
  02f3170  bt 6, 0x2f318c
  02f3174  lis 3, 47
  02f3178  lfs 1, 1084(26)
  02f317c  addi 3, 3, 8192
  02f3180  lfs 2, 8(3)
  02f3184  fmuls 1, 1, 2
  02f3188  b 0x2f3190
  02f318c  lfs 1, 1084(26)
  02f3190  fcmpu 0, 31, 1
  02f3194  cror 6, 0, 2
  02f3198  bt 6, 0x2f3204
  02f319c  lis 3, 47
  02f31a0  lis 4, 114
  02f31a4  addi 3, 3, 8192
  02f31a8  ori 29, 30, 0
  02f31ac  li 5, 0
  02f31b0  lfs 1, 68(3)
  02f31b4  lfs 2, -3056(4)
  02f31b8  ori 3, 31, 0
  02f31bc  fmuls 1, 2, 1
  02f31c0  li 4, 0
  02f31c4  fctiwz 1, 1
  02f31c8  stfd 1, 600(1)
  02f31cc  lwz 30, 604(1)
  02f31d0  extsw 30, 30
  02f31d4  ori 6, 30, 0
  02f31d8  bl 0xfddc0
  02f31dc  nop
  02f31e0  lwz 3, 1060(29)
  02f31e4  cmpwi 3, 0
  02f31e8  bt 2, 0x2f3268
  02f31ec  li 4, 0
  02f31f0  li 5, 0
  02f31f4  ori 6, 30, 0
  02f31f8  bl 0xfddc0
  02f31fc  nop
  02f3200  b 0x2f3268
  02f3204  lis 3, 47
  02f3208  lis 4, 114
  02f320c  addi 3, 3, 8192
  02f3210  ori 29, 30, 0
  02f3214  li 5, 0
  02f3218  lfs 1, 68(3)
  02f321c  lfs 2, -3056(4)
  02f3220  ori 3, 31, 0
  02f3224  fmuls 1, 2, 1
  02f3228  li 4, 13
  02f322c  fctiwz 1, 1
  02f3230  stfd 1, 600(1)
  02f3234  lwz 30, 604(1)
  02f3238  extsw 30, 30
  02f323c  ori 6, 30, 0
  02f3240  bl 0xfddc0
  02f3244  nop
  02f3248  lwz 3, 1060(29)
  02f324c  cmpwi 3, 0
  02f3250  bt 2, 0x2f3268
  02f3254  li 4, 13
  02f3258  li 5, 0
  02f325c  ori 6, 30, 0
  02f3260  bl 0xfddc0
  02f3264  nop
  02f3268  li 3, 1
  02f326c  stb 3, 32(31)
  02f3270  b 0x2f4034
  02f3274  lhz 3, 1080(26)
  02f3278  lfs 31, 72(31)
  02f327c  extsh 3, 3
  02f3280  lfs 1, 16(31)
  02f3284  sldi 3, 3, 4
  02f3288  lfs 2, 20(31)
  02f328c  addc 3, 29, 3
  02f3290  clrldi 3, 3, 32
  02f3294  lfs 3, 16(3)
  02f3298  lfs 4, 20(3)
  02f329c  fsubs 1, 3, 1
  02f32a0  fsubs 2, 4, 2
  02f32a4  bl 0x5e8338
  02f32a8  nop
  02f32ac  lis 3, 47
  02f32b0  lis 29, 114
  02f32b4  fmr 2, 1
  02f32b8  addi 30, 3, 8192
  02f32bc  fmr 1, 31
  02f32c0  lis 3, 114
  02f32c4  addic 5, 26, 1040
  02f32c8  lfs 3, 72(30)
  02f32cc  lfs 4, 76(30)
  02f32d0  lfs 6, 80(30)
  02f32d4  lfs 5, -3048(3)
  02f32d8  lfs 7, -3052(29)
  02f32dc  fmuls 3, 5, 3
  02f32e0  fmuls 4, 5, 4
  02f32e4  fmuls 5, 7, 6
  02f32e8  bl 0xff190
  02f32ec  nop
  02f32f0  stfs 1, 72(31)
  02f32f4  bl 0x5e8078
  02f32f8  nop
  02f32fc  lfs 31, 84(30)
  02f3300  lfs 3, -3052(29)
  02f3304  lfs 2, 72(31)
  02f3308  fmuls 3, 3, 31
  02f330c  fmuls 3, 3, 1
  02f3310  fmr 1, 2
  02f3314  stfs 3, 192(1)
  02f3318  bl 0x5e8128
  02f331c  nop
  02f3320  lfs 2, -3052(29)
  02f3324  ori 5, 24, 0
  02f3328  addic 29, 1, 192
  02f332c  stw 23, 200(1)
  02f3330  fmuls 2, 2, 31
  02f3334  ori 3, 29, 0
  02f3338  ori 4, 29, 0
  02f333c  fmuls 1, 2, 1
  02f3340  stfs 1, 196(1)
  02f3344  bl 0x5e7f54
  02f3348  nop
  02f334c  lfs 1, 88(30)
  02f3350  lfs 2, 92(30)
  02f3354  ori 3, 31, 0
  02f3358  lfs 3, 96(30)
  02f335c  ori 4, 24, 0
  02f3360  lfs 4, 100(30)
  02f3364  ori 5, 29, 0
  02f3368  li 10, 1
  02f336c  bl 0xffcd0
  02f3370  nop
  02f3374  b 0x2f4034
  02f3378  lbz 3, 188(31)
  02f337c  rlwinm 4, 3, 0, 28, 28
  02f3380  cmpwi 4, 0
  02f3384  bt 2, 0x2f33a8
  02f3388  ori 5, 3, 0
  02f338c  addic 4, 26, 416
  02f3390  rlwimi 5, 23, 0, 28, 28
  02f3394  ori 3, 31, 0
  02f3398  stb 5, 188(31)
  02f339c  bl 0x17aa48
  02f33a0  nop
  02f33a4  lfs 3, 72(31)
  02f33a8  lis 3, 47
  02f33ac  fmr 1, 3
  02f33b0  lis 29, 114
  02f33b4  fmr 2, 30
  02f33b8  addi 30, 3, 8192
  02f33bc  lis 28, 114
  02f33c0  addic 5, 26, 1040
  02f33c4  lfs 5, 76(30)
  02f33c8  lfs 4, -3048(29)
  02f33cc  lfs 6, 104(30)
  02f33d0  fmuls 8, 4, 5
  02f33d4  lfs 7, 72(30)
  02f33d8  lfs 3, -3052(28)
  02f33dc  fmuls 4, 4, 6
  02f33e0  fmuls 5, 3, 7
  02f33e4  fmr 3, 8
  02f33e8  bl 0xff190
  02f33ec  nop
  02f33f0  fmr 2, 1
  02f33f4  addic 4, 26, 416
  02f33f8  ori 3, 31, 0
  02f33fc  stfs 2, 1044(26)
  02f3400  lfs 1, 52(30)
  02f3404  lfs 3, 36(30)
  02f3408  lfs 4, -3052(28)
  02f340c  lfs 5, -3048(29)
  02f3410  fmuls 1, 4, 1
  02f3414  fmuls 3, 5, 3
  02f3418  bl 0x17a230
  02f341c  nop
  02f3420  lfs 1, 56(30)
  02f3424  fcmpu 0, 31, 1
  02f3428  cror 6, 1, 2
  02f342c  bt 6, 0x2f34a0
  02f3430  lis 3, 47
  02f3434  lis 4, 114
  02f3438  addi 3, 3, 8192
  02f343c  li 5, 4
  02f3440  lfs 1, 60(3)
  02f3444  lfs 2, -3056(4)
  02f3448  lwz 29, 120(31)
  02f344c  ori 3, 31, 0
  02f3450  fmuls 1, 2, 1
  02f3454  li 4, 4
  02f3458  fctiwz 1, 1
  02f345c  stfd 1, 600(1)
  02f3460  lwz 30, 604(1)
  02f3464  extsw 30, 30
  02f3468  ori 6, 30, 0
  02f346c  bl 0xfddc0
  02f3470  nop
  02f3474  lwz 3, 1060(29)
  02f3478  cmpwi 3, 0
  02f347c  bt 2, 0x2f3494
  02f3480  li 4, 4
  02f3484  li 5, 4
  02f3488  ori 6, 30, 0
  02f348c  bl 0xfddc0
  02f3490  nop
  02f3494  li 3, 7
  02f3498  stb 3, 32(31)
  02f349c  b 0x2f4034
  02f34a0  lwz 3, 1052(26)
  02f34a4  cmpwi 3, -1
  02f34a8  bt 2, 0x2f4034
  02f34ac  lfs 1, 72(31)
  02f34b0  bl 0x5e8078
  02f34b4  nop
  02f34b8  lis 3, 47
  02f34bc  lfs 2, 72(31)
  02f34c0  addi 3, 3, 8192
  02f34c4  lfs 31, 8(3)
  02f34c8  fmuls 3, 1, 31
  02f34cc  fmr 1, 2
  02f34d0  stfs 3, 208(1)
  02f34d4  bl 0x5e8128
  02f34d8  nop
  02f34dc  fmuls 1, 1, 31
  02f34e0  addic 30, 1, 208
  02f34e4  stw 23, 216(1)
  02f34e8  ori 5, 24, 0
  02f34ec  ori 3, 30, 0
  02f34f0  ori 4, 30, 0
  02f34f4  stfs 1, 212(1)
  02f34f8  bl 0x5e7f54
  02f34fc  nop
  02f3500  lwz 3, 1052(26)
  02f3504  lis 29, 165
  02f3508  slwi 3, 3, 2
  02f350c  addic 29, 29, 7136
  02f3510  extsw 4, 3
  02f3514  ori 3, 30, 0
  02f3518  lwzx 5, 29, 4
  02f351c  addic 4, 5, 16
  02f3520  lwz 5, 0(5)
  02f3524  extsw 5, 5
  02f3528  bl 0x104e44
  02f352c  nop
  02f3530  cmpwi 3, 0
  02f3534  bf 2, 0x2f35a8
  02f3538  lis 3, 47
  02f353c  stw 23, 1040(26)
  02f3540  lis 4, 114
  02f3544  addi 3, 3, 8192
  02f3548  li 5, 0
  02f354c  lfs 1, 60(3)
  02f3550  lfs 2, -3056(4)
  02f3554  ori 3, 31, 0
  02f3558  lwz 28, 120(31)
  02f355c  li 4, 8
  02f3560  fmuls 1, 2, 1
  02f3564  fctiwz 1, 1
  02f3568  stfd 1, 600(1)
  02f356c  lwz 30, 604(1)
  02f3570  extsw 30, 30
  02f3574  ori 6, 30, 0
  02f3578  bl 0xfddc0
  02f357c  nop
  02f3580  lwz 3, 1060(28)
  02f3584  cmpwi 3, 0
  02f3588  bt 2, 0x2f35a0
  02f358c  li 4, 8
  02f3590  li 5, 0
  02f3594  ori 6, 30, 0
  02f3598  bl 0xfddc0
  02f359c  nop
  02f35a0  li 3, 9
  02f35a4  stb 3, 32(31)
  02f35a8  lwz 4, 1052(26)
  02f35ac  addic 3, 1, 160
  02f35b0  slwi 4, 4, 2
  02f35b4  extsw 4, 4
  02f35b8  lwzx 5, 29, 4
  02f35bc  addic 4, 5, 16
  02f35c0  lwz 5, 0(5)
  02f35c4  extsw 5, 5
  02f35c8  bl 0x104e44
  02f35cc  nop
  02f35d0  cmpwi 3, 0
  02f35d4  bf 2, 0x2f4034
  02f35d8  li 3, 6
  02f35dc  stb 3, 32(31)
  02f35e0  b 0x2f4034
  02f35e4  lis 3, 47
  02f35e8  addi 3, 3, 8192
  02f35ec  lfs 3, 56(3)
  02f35f0  fcmpu 0, 31, 3
  02f35f4  cror 6, 1, 2
  02f35f8  bt 6, 0x2f366c
  02f35fc  lis 3, 47
  02f3600  lis 4, 114
  02f3604  addi 3, 3, 8192
  02f3608  li 5, 4
  02f360c  lfs 1, 60(3)
  02f3610  lfs 2, -3056(4)
  02f3614  ori 3, 31, 0
  02f3618  li 4, 4
  02f361c  fmuls 1, 2, 1
  02f3620  fctiwz 1, 1
  02f3624  stfd 1, 600(1)
  02f3628  lwz 30, 604(1)
  02f362c  extsw 30, 30
  02f3630  ori 6, 30, 0
  02f3634  bl 0xfddc0
  02f3638  nop
  02f363c  lwz 28, 1060(28)
  02f3640  cmpwi 28, 0
  02f3644  bt 2, 0x2f3660
  02f3648  ori 3, 28, 0
  02f364c  li 4, 4
  02f3650  li 5, 4
  02f3654  ori 6, 30, 0
  02f3658  bl 0xfddc0
  02f365c  nop
  02f3660  li 3, 7
  02f3664  stb 3, 32(31)
  02f3668  b 0x2f4034
  02f366c  lbz 3, 188(31)
  02f3670  rlwinm 4, 3, 0, 28, 28
  02f3674  cmpwi 4, 0
  02f3678  bt 2, 0x2f36a4
  02f367c  ori 5, 3, 0
  02f3680  addic 4, 26, 416
  02f3684  rlwimi 5, 23, 0, 28, 28
  02f3688  ori 3, 31, 0
  02f368c  stb 5, 188(31)
  02f3690  bl 0x17aa48
  02f3694  nop
  02f3698  lfs 27, 72(31)
  02f369c  lfs 1, 16(31)
  02f36a0  lfs 2, 20(31)
  02f36a4  lfs 3, 1008(26)
  02f36a8  lfs 4, 1012(26)
  02f36ac  fsubs 1, 3, 1
  02f36b0  fsubs 2, 4, 2
  02f36b4  bl 0x5e8338
  02f36b8  nop
  02f36bc  lis 3, 47
  02f36c0  fmr 2, 1
  02f36c4  lis 29, 114
  02f36c8  addi 30, 3, 8192
  02f36cc  fmr 1, 27
  02f36d0  lis 28, 114
  02f36d4  addic 5, 26, 1040
  02f36d8  lfs 3, 76(30)
  02f36dc  lfs 4, 104(30)
  02f36e0  lfs 6, 72(30)
  02f36e4  lfs 5, -3048(29)
  02f36e8  lfs 7, -3052(28)
  02f36ec  fmuls 3, 5, 3
  02f36f0  fmuls 4, 5, 4
  02f36f4  fmuls 5, 7, 6
  02f36f8  bl 0xff190
  02f36fc  nop
  02f3700  fmr 2, 1
  02f3704  addic 4, 26, 416
  02f3708  ori 3, 31, 0
  02f370c  stfs 2, 1044(26)
  02f3710  lfs 1, 52(30)
  02f3714  lfs 3, 36(30)
  02f3718  lfs 4, -3052(28)
  02f371c  lfs 5, -3048(29)
  02f3720  fmuls 1, 4, 1
  02f3724  fmuls 3, 5, 3
  02f3728  bl 0x17a230
  02f372c  nop
  02f3730  addic 4, 26, 1008
  02f3734  ori 3, 24, 0
  02f3738  bl 0x5e8588
  02f373c  nop
  02f3740  fmr 2, 1
  02f3744  lfs 27, 8(30)
  02f3748  lfs 1, 72(31)
  02f374c  fcmpu 0, 2, 27
  02f3750  cror 6, 1, 2
  02f3754  bt 6, 0x2f3760
  02f3758  li 3, 1
  02f375c  stb 3, 32(31)
  02f3760  lwz 3, 1052(26)
  02f3764  cmpwi 3, -1
  02f3768  bt 2, 0x2f4034
  02f376c  bl 0x5e8078
  02f3770  nop
  02f3774  fmuls 2, 1, 27
  02f3778  lfs 1, 72(31)
  02f377c  stfs 2, 224(1)
  02f3780  bl 0x5e8128
  02f3784  nop
  02f3788  fmuls 1, 1, 27
  02f378c  addic 30, 1, 224
  02f3790  stw 23, 232(1)
  02f3794  ori 5, 24, 0
  02f3798  ori 3, 30, 0
  02f379c  ori 4, 30, 0
  02f37a0  stfs 1, 228(1)
  02f37a4  bl 0x5e7f54
  02f37a8  nop
  02f37ac  lwz 3, 1052(26)
  02f37b0  lis 29, 165
  02f37b4  slwi 3, 3, 2
  02f37b8  addic 29, 29, 7136
  02f37bc  extsw 4, 3
  02f37c0  ori 3, 30, 0
  02f37c4  lwzx 5, 29, 4
  02f37c8  addic 4, 5, 16
  02f37cc  lwz 5, 0(5)
  02f37d0  extsw 5, 5
  02f37d4  bl 0x104e44
  02f37d8  nop
  02f37dc  cmpwi 3, 0
  02f37e0  bf 2, 0x2f3860
  02f37e4  lis 3, 47
  02f37e8  lis 4, 114
  02f37ec  stw 23, 1040(26)
  02f37f0  addi 3, 3, 8192
  02f37f4  li 5, 0
  02f37f8  lfs 1, 60(3)
  02f37fc  lfs 2, -3056(4)
  02f3800  lwz 28, 120(31)
  02f3804  ori 3, 31, 0
  02f3808  fmuls 1, 2, 1
  02f380c  li 4, 8
  02f3810  fctiwz 1, 1
  02f3814  stfd 1, 600(1)
  02f3818  lwz 30, 604(1)
  02f381c  extsw 30, 30
  02f3820  ori 6, 30, 0
  02f3824  bl 0xfddc0
  02f3828  nop
  02f382c  lwz 3, 1060(28)
  02f3830  cmpwi 3, 0
  02f3834  bt 2, 0x2f384c
  02f3838  li 4, 8
  02f383c  li 5, 0
  02f3840  ori 6, 30, 0
  02f3844  bl 0xfddc0
  02f3848  nop
  02f384c  li 3, 9
  02f3850  lbz 4, 188(31)
  02f3854  stb 3, 32(31)
  02f3858  ori 3, 4, 16
  02f385c  stb 3, 188(31)
  02f3860  lwz 4, 1052(26)
  02f3864  addic 3, 1, 160
  02f3868  slwi 4, 4, 2
  02f386c  extsw 4, 4
  02f3870  lwzx 5, 29, 4
  02f3874  addic 4, 5, 16
  02f3878  lwz 5, 0(5)
  02f387c  extsw 5, 5
  02f3880  bl 0x104e44
  02f3884  nop
  02f3888  cmpwi 3, 0
  02f388c  bt 2, 0x2f4034
  02f3890  li 3, 1
  02f3894  stb 3, 32(31)
  02f3898  b 0x2f4034
  02f389c  lbz 3, 82(31)
  02f38a0  lbz 4, 83(31)
  02f38a4  cmpw 3, 4
  02f38a8  bf 2, 0x2f39d0
  02f38ac  ori 3, 31, 0
  02f38b0  bl 0xefe40
  02f38b4  nop
  02f38b8  lis 3, 47
  02f38bc  addi 3, 3, 8192
  02f38c0  lfs 2, 32(3)
  02f38c4  fcmpu 0, 1, 2
  02f38c8  bt 0, 0x2f39d0
  02f38cc  ori 3, 31, 0
  02f38d0  bl 0xefe40
  02f38d4  nop
  02f38d8  lis 3, 47
  02f38dc  addi 3, 3, 8192
  02f38e0  lfs 2, 36(3)
  02f38e4  fcmpu 0, 1, 2
  02f38e8  cror 6, 1, 2
  02f38ec  bt 6, 0x2f39d0
  02f38f0  lfs 1, 24(31)
  02f38f4  lis 3, 47
  02f38f8  lfs 2, 488(1)
  02f38fc  addi 3, 3, 8192
  02f3900  fsubs 1, 1, 2
  02f3904  lfs 2, 8(3)
  02f3908  fabs 1, 1
  02f390c  fcmpu 0, 1, 2
  02f3910  cror 6, 1, 2
  02f3914  bt 6, 0x2f39d0
  02f3918  ori 3, 24, 0
  02f391c  addic 4, 1, 480
  02f3920  bl 0x5e8588
  02f3924  nop
  02f3928  lis 3, 47
  02f392c  addi 3, 3, 8192
  02f3930  lfs 2, 56(3)
  02f3934  fcmpu 0, 1, 2
  02f3938  cror 6, 1, 2
  02f393c  bt 6, 0x2f39d0
  02f3940  fmr 1, 30
  02f3944  bl 0x5e8078
  02f3948  nop
  02f394c  lis 3, 47
  02f3950  addi 28, 3, 8192
  02f3954  lfs 27, 108(28)
  02f3958  fmuls 2, 1, 27
  02f395c  fmr 1, 30
  02f3960  stfs 2, 240(1)
  02f3964  bl 0x5e8128
  02f3968  nop
  02f396c  fmuls 1, 1, 27
  02f3970  lfs 2, 480(1)
  02f3974  cmpwi 29, 0
  02f3978  stw 23, 248(1)
  02f397c  lfs 3, 484(1)
  02f3980  stfs 2, 256(1)
  02f3984  lfs 2, 492(1)
  02f3988  stfs 3, 260(1)
  02f398c  stfs 2, 268(1)
  02f3990  lfs 2, 488(1)
  02f3994  stfs 1, 244(1)
  02f3998  lfs 1, 96(28)
  02f399c  fadds 1, 2, 1
  02f39a0  stfs 1, 264(1)
  02f39a4  bt 2, 0x2f39d0
  02f39a8  lis 4, 47
  02f39ac  ori 3, 29, 0
  02f39b0  addi 4, 4, 8192
  02f39b4  li 5, 1
  02f39b8  addic 7, 1, 256
  02f39bc  addic 8, 1, 240
  02f39c0  lfs 1, 64(4)
  02f39c4  ori 4, 31, 0
  02f39c8  bl 0x105c08
  02f39cc  nop
  02f39d0  lis 3, 47
  02f39d4  addi 3, 3, 8192
  02f39d8  lfs 1, 36(3)
  02f39dc  fcmpu 0, 29, 1
  02f39e0  cror 6, 0, 2
  02f39e4  bt 6, 0x2f3a50
  02f39e8  lis 3, 47
  02f39ec  lwz 5, 88(31)
  02f39f0  lfs 1, 88(31)
  02f39f4  lis 4, 16256
  02f39f8  addi 3, 3, 8192
  02f39fc  srawi 6, 5, 31
  02f3a00  lfs 2, 64(3)
  02f3a04  srwi 3, 6, 1
  02f3a08  xor 3, 3, 5
  02f3a0c  subc 3, 3, 6
  02f3a10  cmpw 3, 4
  02f3a14  bf 1, 0x2f3a50
  02f3a18  lis 3, 47
  02f3a1c  lis 4, 114
  02f3a20  addi 3, 3, 8192
  02f3a24  lfs 3, 112(3)
  02f3a28  lfs 4, -3052(4)
  02f3a2c  lwz 3, 120(31)
  02f3a30  fnmsubs 1, 4, 3, 1
  02f3a34  fsub 3, 1, 2
  02f3a38  fsel 1, 3, 1, 2
  02f3a3c  stfs 1, 88(31)
  02f3a40  lwz 3, 1060(3)
  02f3a44  cmpwi 3, 0
  02f3a48  bt 2, 0x2f3a50
  02f3a4c  stfs 1, 88(3)
  02f3a50  lbz 3, 82(31)
  02f3a54  cmpwi 3, 4
  02f3a58  bf 2, 0x2f4034
  02f3a5c  lbz 3, 112(31)
  02f3a60  cmpwi 1, 30, 0
  02f3a64  rlwinm 3, 3, 0, 30, 30
  02f3a68  cmpwi 3, 0
  02f3a6c  bt 2, 0x2f4034
  02f3a70  lis 3, 47
  02f3a74  vspltisw 2, -1
  02f3a78  li 5, 116
  02f3a7c  addi 3, 3, 8192
  02f3a80  lis 4, 114
  02f3a84  li 6, -3056
  02f3a88  vslw 2, 2, 2
  02f3a8c  ori 30, 23, 0
  02f3a90  lvlx 3, 5, 3
  02f3a94  li 3, 1026
  02f3a98  vspltw 3, 3, 0
  02f3a9c  lvlx 4, 6, 4
  02f3aa0  lfs 2, -3056(4)
  02f3aa4  vmaddfp 2, 4, 3, 2
  02f3aa8  vctsxs 2, 2, 0
  02f3aac  vsplth 2, 2, 1
  02f3ab0  stvehx 2, 3, 26
  02f3ab4  lwz 29, 120(31)
  02f3ab8  bt 6, 0x2f3ad4
  02f3abc  lis 3, 47
  02f3ac0  lfs 1, 1084(26)
  02f3ac4  addi 3, 3, 8192
  02f3ac8  lfs 3, 8(3)
  02f3acc  fmuls 1, 1, 3
  02f3ad0  b 0x2f3ad8
  02f3ad4  lfs 1, 1084(26)
  02f3ad8  fcmpu 0, 31, 1
  02f3adc  cror 6, 1, 2
  02f3ae0  bt 6, 0x2f3ae8
  02f3ae4  li 30, 13
  02f3ae8  lis 3, 47
  02f3aec  ori 28, 29, 0
  02f3af0  addi 3, 3, 8192
  02f3af4  ori 4, 30, 0
  02f3af8  li 5, 0
  02f3afc  lfs 1, 60(3)
  02f3b00  ori 3, 31, 0
  02f3b04  fmuls 1, 2, 1
  02f3b08  fctiwz 1, 1
  02f3b0c  stfd 1, 600(1)
  02f3b10  lwz 29, 604(1)
  02f3b14  extsw 29, 29
  02f3b18  ori 6, 29, 0
  02f3b1c  bl 0xfddc0
  02f3b20  nop
  02f3b24  lwz 3, 1060(28)
  02f3b28  cmpwi 3, 0
  02f3b2c  bt 2, 0x2f3b44
  02f3b30  ori 4, 30, 0
  02f3b34  li 5, 0
  02f3b38  ori 6, 29, 0
  02f3b3c  bl 0xfddc0
  02f3b40  nop
  02f3b44  li 3, 1
  02f3b48  stb 3, 32(31)
  02f3b4c  b 0x2f4034
  02f3b50  lbz 3, 83(31)
  02f3b54  lbz 4, 82(31)
  02f3b58  cmpwi 3, 5
  02f3b5c  cmpwi 6, 3, 8
  02f3b60  cmpwi 1, 4, 5
  02f3b64  cmpwi 7, 4, 8
  02f3b68  bf 2, 0x2f3b88
  02f3b6c  bf 6, 0x2f4034
  02f3b70  lis 3, 47
  02f3b74  addi 3, 3, 8192
  02f3b78  lfs 1, 120(3)
  02f3b7c  fcmpu 0, 29, 1
  02f3b80  cror 6, 0, 2
  02f3b84  bt 6, 0x2f4034
  02f3b88  lbz 30, 188(31)
  02f3b8c  rlwinm 3, 30, 0, 29, 29
  02f3b90  cmpwi 3, 0
  02f3b94  bt 2, 0x2f3c2c
  02f3b98  lis 3, 47
  02f3b9c  rlwimi 30, 23, 0, 29, 29
  02f3ba0  addi 3, 3, 8192
  02f3ba4  lis 4, 114
  02f3ba8  stb 30, 188(31)
  02f3bac  li 5, 4
  02f3bb0  lfs 1, 124(3)
  02f3bb4  lfs 2, -3056(4)
  02f3bb8  ori 3, 31, 0
  02f3bbc  fmuls 1, 2, 1
  02f3bc0  li 4, 4
  02f3bc4  fctiwz 1, 1
  02f3bc8  stfd 1, 600(1)
  02f3bcc  lwz 30, 604(1)
  02f3bd0  extsw 30, 30
  02f3bd4  ori 6, 30, 0
  02f3bd8  bl 0xfddc0
  02f3bdc  nop
  02f3be0  lwz 3, 1060(28)
  02f3be4  cmpwi 3, 0
  02f3be8  bt 2, 0x2f3c00
  02f3bec  li 4, 4
  02f3bf0  li 5, 4
  02f3bf4  ori 6, 30, 0
  02f3bf8  bl 0xfddc0
  02f3bfc  nop
  02f3c00  lis 3, 16320
  02f3c04  lwz 4, 120(31)
  02f3c08  stw 3, 88(31)
  02f3c0c  lwz 3, 1060(4)
  02f3c10  cmpwi 3, 0
  02f3c14  bt 2, 0x2f3c20
  02f3c18  lis 4, 16320
  02f3c1c  stw 4, 88(3)
  02f3c20  li 3, 7
  02f3c24  stb 3, 32(31)
  02f3c28  b 0x2f4034
  02f3c2c  bf 26, 0x2f3d04
  02f3c30  lis 3, 47
  02f3c34  addi 3, 3, 8192
  02f3c38  lfs 1, 128(3)
  02f3c3c  fcmpu 0, 29, 1
  02f3c40  bt 0, 0x2f3c48
  02f3c44  bt 30, 0x2f3d04
  02f3c48  lis 3, 47
  02f3c4c  lis 4, 114
  02f3c50  addi 3, 3, 8192
  02f3c54  lfs 1, 132(3)
  02f3c58  lfs 3, -3064(4)
  02f3c5c  lfs 2, 1048(26)
  02f3c60  fmuls 1, 3, 1
  02f3c64  fcmpu 0, 2, 1
  02f3c68  cror 6, 1, 2
  02f3c6c  bt 6, 0x2f3c88
  02f3c70  lis 3, 47
  02f3c74  lis 4, 114
  02f3c78  addi 3, 3, 8192
  02f3c7c  lfs 1, 36(3)
  02f3c80  lfs 3, -3048(4)
  02f3c84  fmadds 1, 3, 1, 2
  02f3c88  addic 30, 1, 272
  02f3c8c  stfs 1, 1048(26)
  02f3c90  lfs 2, 1044(26)
  02f3c94  ori 3, 30, 0
  02f3c98  lfs 3, 68(31)
  02f3c9c  bl 0xfe610
  02f3ca0  nop
  02f3ca4  ori 3, 24, 0
  02f3ca8  ori 4, 24, 0
  02f3cac  ori 5, 30, 0
  02f3cb0  bl 0x5e7f54
  02f3cb4  nop
  02f3cb8  lis 3, 47
  02f3cbc  lfs 1, 72(31)
  02f3cc0  lis 4, 114
  02f3cc4  fmr 2, 30
  02f3cc8  addi 3, 3, 8192
  02f3ccc  lis 6, 114
  02f3cd0  addic 5, 26, 1040
  02f3cd4  lfs 4, 80(3)
  02f3cd8  lfs 5, 76(3)
  02f3cdc  lfs 7, 136(3)
  02f3ce0  lfs 6, -3048(4)
  02f3ce4  lfs 8, -3052(6)
  02f3ce8  fmuls 3, 6, 4
  02f3cec  fmuls 4, 6, 5
  02f3cf0  fmuls 5, 8, 7
  02f3cf4  bl 0xff190
  02f3cf8  nop
  02f3cfc  stfs 1, 72(31)
  02f3d00  b 0x2f4034
  02f3d04  lwz 3, 1048(26)
  02f3d08  lfs 1, 1048(26)
  02f3d0c  cmpwi 3, 0
  02f3d10  bf 1, 0x2f3d9c
  02f3d14  lis 3, 47
  02f3d18  lis 29, 114
  02f3d1c  addi 30, 3, 8192
  02f3d20  addic 28, 1, 272
  02f3d24  ori 3, 28, 0
  02f3d28  lfs 4, 140(30)
  02f3d2c  lfs 3, -3048(29)
  02f3d30  lfs 2, 1044(26)
  02f3d34  fnmsubs 1, 3, 4, 1
  02f3d38  stfs 1, 1048(26)
  02f3d3c  lfs 3, 68(31)
  02f3d40  bl 0xfe610
  02f3d44  nop
  02f3d48  ori 3, 24, 0
  02f3d4c  ori 4, 24, 0
  02f3d50  ori 5, 28, 0
  02f3d54  bl 0x5e7f54
  02f3d58  nop
  02f3d5c  lfs 3, 80(30)
  02f3d60  lis 3, 114
  02f3d64  lfs 4, 76(30)
  02f3d68  lfs 5, 136(30)
  02f3d6c  addic 5, 26, 1040
  02f3d70  lfs 1, 72(31)
  02f3d74  fmr 2, 30
  02f3d78  lfs 6, -3048(29)
  02f3d7c  lfs 7, -3052(3)
  02f3d80  fmuls 3, 6, 3
  02f3d84  fmuls 4, 6, 4
  02f3d88  fmuls 5, 7, 5
  02f3d8c  bl 0xff190
  02f3d90  nop
  02f3d94  stfs 1, 72(31)
  02f3d98  b 0x2f4034
  02f3d9c  li 3, 1
  02f3da0  stb 3, 32(31)
  02f3da4  sth 23, 1026(26)
  02f3da8  b 0x2f4034
  02f3dac  lbz 3, 82(31)
  02f3db0  cmpwi 3, 8
  02f3db4  bf 2, 0x2f3e48
  02f3db8  lbz 3, 112(31)
  02f3dbc  rlwinm 3, 3, 0, 30, 30
  02f3dc0  cmpwi 3, 0
  02f3dc4  bt 2, 0x2f3e48
  02f3dc8  li 3, 5
  02f3dcc  lbz 5, 188(31)
  02f3dd0  lis 4, 47
  02f3dd4  addi 4, 4, 8192
  02f3dd8  stb 3, 32(31)
  02f3ddc  ori 3, 5, 8
  02f3de0  lis 5, 114
  02f3de4  rlwimi 3, 23, 0, 27, 27
  02f3de8  stb 3, 188(31)
  02f3dec  lfs 1, 60(4)
  02f3df0  lfs 2, -3056(5)
  02f3df4  ori 3, 31, 0
  02f3df8  li 4, 9
  02f3dfc  fmuls 1, 2, 1
  02f3e00  li 5, 0
  02f3e04  fctiwz 1, 1
  02f3e08  stfd 1, 600(1)
  02f3e0c  lwz 30, 604(1)
  02f3e10  extsw 30, 30
  02f3e14  ori 6, 30, 0
  02f3e18  bl 0xfddc0
  02f3e1c  nop
  02f3e20  lwz 28, 1060(28)
  02f3e24  cmpwi 28, 0
  02f3e28  bt 2, 0x2f4034
  02f3e2c  ori 3, 28, 0
  02f3e30  li 4, 9
  02f3e34  li 5, 0
  02f3e38  ori 6, 30, 0
  02f3e3c  bl 0xfddc0
  02f3e40  nop
  02f3e44  b 0x2f4034
  02f3e48  lbz 3, 188(31)
  02f3e4c  rlwinm 3, 3, 0, 27, 27
  02f3e50  cmpwi 3, 0
  02f3e54  bt 2, 0x2f3ebc
  02f3e58  lfs 3, 1008(26)
  02f3e5c  lfs 4, 1012(26)
  02f3e60  fsubs 1, 3, 1
  02f3e64  fsubs 2, 4, 2
  02f3e68  bl 0x5e8338
  02f3e6c  nop
  02f3e70  lis 3, 47
  02f3e74  fmr 2, 1
  02f3e78  fmr 1, 27
  02f3e7c  lis 4, 114
  02f3e80  addi 3, 3, 8192
  02f3e84  lis 6, 114
  02f3e88  addic 5, 26, 1040
  02f3e8c  lfs 4, 80(3)
  02f3e90  lfs 5, 76(3)
  02f3e94  lfs 7, 136(3)
  02f3e98  lfs 6, -3048(4)
  02f3e9c  lfs 8, -3052(6)
  02f3ea0  fmuls 3, 6, 4
  02f3ea4  fmuls 4, 6, 5
  02f3ea8  fmuls 5, 8, 7
  02f3eac  bl 0xff190
  02f3eb0  nop
  02f3eb4  fmr 27, 1
  02f3eb8  b 0x2f3f04
  02f3ebc  lis 3, 47
  02f3ec0  fmr 1, 27
  02f3ec4  lis 4, 114
  02f3ec8  addi 3, 3, 8192
  02f3ecc  fmr 2, 30
  02f3ed0  lis 6, 114
  02f3ed4  addic 5, 26, 1040
  02f3ed8  lfs 3, 80(3)
  02f3edc  lfs 4, 76(3)
  02f3ee0  lfs 6, 136(3)
  02f3ee4  lfs 5, -3048(4)
  02f3ee8  lfs 7, -3052(6)
  02f3eec  fmuls 3, 5, 3
  02f3ef0  fmuls 4, 5, 4
  02f3ef4  fmuls 5, 7, 6
  02f3ef8  bl 0xff190
  02f3efc  nop
  02f3f00  fmr 27, 1
  02f3f04  stfs 27, 72(31)
  02f3f08  b 0x2f4034
  02f3f0c  ori 3, 31, 0
  02f3f10  addic 4, 26, 192
  02f3f14  bl 0x10b030
  02f3f18  nop
  02f3f1c  rlwinm 3, 3, 0, 25, 25
  02f3f20  cmpwi 3, 0
  02f3f24  bf 2, 0x2f3f48
  02f3f28  lwz 4, 24(31)
  02f3f2c  lis 3, 16256
  02f3f30  srawi 5, 4, 31
  02f3f34  srwi 6, 5, 1
  02f3f38  xor 4, 6, 4
  02f3f3c  subc 4, 4, 5
  02f3f40  cmpw 4, 3
  02f3f44  bf 0, 0x2f4034
  02f3f48  ori 3, 31, 0
  02f3f4c  bl 0x2f1f28
  02f3f50  lwz 26, 1060(26)
  02f3f54  cmpwi 26, 0
  02f3f58  bt 2, 0x2f3f68
  02f3f5c  ori 3, 26, 0
  02f3f60  bl 0xefb38
  02f3f64  nop
  02f3f68  ori 3, 31, 0
  02f3f6c  li 4, 0
  02f3f70  li 5, -1
  02f3f74  bl 0xfd8d0
  02f3f78  nop
  02f3f7c  lis 3, 47
  02f3f80  lis 4, 161
  02f3f84  addi 3, 3, 8192
  02f3f88  addic 29, 4, 23856
  02f3f8c  addic 30, 31, 64
  02f3f90  li 8, 0
  02f3f94  li 4, 1944
  02f3f98  lfs 31, 16(3)
  02f3f9c  std 29, 112(1)
  02f3fa0  ori 3, 31, 0
  02f3fa4  std 29, 120(1)
  02f3fa8  ori 5, 24, 0
  02f3fac  ori 6, 30, 0
  02f3fb0  fmr 1, 31
  02f3fb4  li 7, 0
  02f3fb8  ori 10, 29, 0
  02f3fbc  bl 0x11a560
  02f3fc0  nop
  02f3fc4  std 29, 112(1)
  02f3fc8  ori 3, 31, 0
  02f3fcc  std 29, 120(1)
  02f3fd0  li 4, 1945
  02f3fd4  ori 10, 29, 0
  02f3fd8  fmr 1, 31
  02f3fdc  ori 5, 24, 0
  02f3fe0  ori 6, 30, 0
  02f3fe4  li 7, 0
  02f3fe8  li 8, 0
  02f3fec  bl 0x11a560
  02f3ff0  nop
  02f3ff4  ori 3, 31, 0
  02f3ff8  std 29, 112(1)
  02f3ffc  li 4, 1946
  02f4000  fmr 1, 31
  02f4004  ori 10, 29, 0
  02f4008  std 29, 120(1)
  02f400c  ori 5, 24, 0
  02f4010  ori 6, 30, 0
  02f4014  li 7, 0
  02f4018  li 8, 0
  02f401c  bl 0x11a560
  02f4020  nop
  02f4024  ori 3, 31, 0
  02f4028  bl 0xefb38
  02f402c  nop
  02f4030  b 0x2f4410
  02f4034  ori 3, 31, 0
  02f4038  addic 4, 26, 176
  02f403c  bl 0x10c9a0
  02f4040  nop
  02f4044  lis 3, 47
  02f4048  lwz 4, 1068(26)
  02f404c  addi 3, 3, 8192
  02f4050  cmpwi 4, 0
  02f4054  lfs 31, 16(3)
  02f4058  bf 1, 0x2f4150
  02f405c  lis 3, 151
  02f4060  lfs 1, 16(31)
  02f4064  addic 30, 3, -25376
  02f4068  lfs 2, 20(31)
  02f406c  lfs 3, 128(30)
  02f4070  lfs 4, 132(30)
  02f4074  fsubs 1, 1, 3
  02f4078  fsubs 2, 2, 4
  02f407c  bl 0x5e8338
  02f4080  nop
  02f4084  bl 0x5e8078
  02f4088  nop
  02f408c  lfs 2, 1068(26)
  02f4090  fmuls 3, 1, 2
  02f4094  lfs 1, 16(31)
  02f4098  lfs 2, 128(30)
  02f409c  lfs 4, 20(31)
  02f40a0  fsubs 1, 1, 2
  02f40a4  lfs 5, 132(30)
  02f40a8  fsubs 2, 4, 5
  02f40ac  stfs 3, 288(1)
  02f40b0  bl 0x5e8338
  02f40b4  nop
  02f40b8  bl 0x5e8128
  02f40bc  nop
  02f40c0  lfs 2, 1068(26)
  02f40c4  addic 3, 1, 288
  02f40c8  stw 23, 296(1)
  02f40cc  ori 5, 24, 0
  02f40d0  fmuls 1, 1, 2
  02f40d4  ori 4, 3, 0
  02f40d8  stfs 1, 292(1)
  02f40dc  bl 0x5e7f54
  02f40e0  nop
  02f40e4  lwz 3, 1056(26)
  02f40e8  cmpwi 3, 0
  02f40ec  bf 2, 0x2f4120
  02f40f0  lis 3, 47
  02f40f4  lis 4, 114
  02f40f8  addi 3, 3, 8192
  02f40fc  lfs 1, 28(3)
  02f4100  lfs 2, -3056(4)
  02f4104  lfs 3, 144(3)
  02f4108  fmuls 1, 2, 1
  02f410c  lfs 2, 1068(26)
  02f4110  fmuls 1, 1, 1
  02f4114  fdivs 1, 3, 1
  02f4118  fadds 1, 2, 1
  02f411c  stfs 1, 1068(26)
  02f4120  lis 3, 47
  02f4124  addic 5, 1, 288
  02f4128  addi 6, 3, 8192
  02f412c  ori 4, 24, 0
  02f4130  ori 3, 31, 0
  02f4134  li 10, 1
  02f4138  lfs 1, 88(6)
  02f413c  lfs 2, 92(6)
  02f4140  lfs 3, 96(6)
  02f4144  lfs 4, 100(6)
  02f4148  bl 0xffcd0
  02f414c  nop
  02f4150  lis 3, 47
  02f4154  lfs 1, 1032(26)
  02f4158  addi 3, 3, 8192
  02f415c  lfs 2, 148(3)
  02f4160  fmuls 1, 1, 2
  02f4164  addic 3, 26, 1096
  02f4168  stfs 1, 1032(26)
  02f416c  bl 0x4fff60
  02f4170  nop
  02f4174  addic 30, 1, 176
  02f4178  li 4, 1
  02f417c  ori 3, 30, 0
  02f4180  lfs 1, 1032(26)
  02f4184  bl 0x501980
  02f4188  nop
  02f418c  addic 29, 26, 304
  02f4190  fmr 1, 31
  02f4194  li 4, 2
  02f4198  ori 3, 29, 0
  02f419c  bl 0x501980
  02f41a0  nop
  02f41a4  ori 3, 29, 0
  02f41a8  ori 4, 29, 0
  02f41ac  ori 5, 30, 0
  02f41b0  bl 0x5017c4
  02f41b4  nop
  02f41b8  lbz 3, 32(31)
  02f41bc  lfs 31, 1056(26)
  02f41c0  cmpwi 3, 8
  02f41c4  bt 2, 0x2f41cc
  02f41c8  stb 3, 1025(26)
  02f41cc  lis 3, 47
  02f41d0  addi 5, 3, 8192
  02f41d4  lis 3, 114
  02f41d8  li 4, 0
  02f41dc  lfs 1, 152(5)
  02f41e0  lfs 2, -3048(3)
  02f41e4  fmadds 1, 2, 1, 31
  02f41e8  ori 3, 24, 0
  02f41ec  stfs 1, 1056(26)
  02f41f0  lfs 29, 8(5)
  02f41f4  lfs 2, 24(31)
  02f41f8  fsubs 1, 1, 29
  02f41fc  fsubs 1, 2, 1
  02f4200  stfs 1, 24(31)
  02f4204  lfs 1, 44(5)
  02f4208  bl 0xffb70
  02f420c  nop
  02f4210  lfs 2, 24(31)
  02f4214  fmr 31, 1
  02f4218  fsubs 1, 2, 29
  02f421c  fcmpu 0, 1, 31
  02f4220  stfs 1, 24(31)
  02f4224  cror 6, 1, 2
  02f4228  bt 6, 0x2f4238
  02f422c  stfs 31, 24(31)
  02f4230  stw 23, 1056(26)
  02f4234  lfs 1, 24(31)
  02f4238  lis 3, 47
  02f423c  lfs 2, 1016(26)
  02f4240  addi 3, 3, 8192
  02f4244  lfs 3, 156(3)
  02f4248  fsubs 2, 2, 3
  02f424c  fcmpu 0, 1, 2
  02f4250  cror 6, 1, 2
  02f4254  bt 6, 0x2f4288
  02f4258  ori 3, 31, 0
  02f425c  bl 0x2f1f28
  02f4260  lwz 26, 1060(26)
  02f4264  cmpwi 26, 0
  02f4268  bt 2, 0x2f4278
  02f426c  ori 3, 26, 0
  02f4270  bl 0xefb38
  02f4274  nop
  02f4278  ori 3, 31, 0
  02f427c  bl 0xefb38
  02f4280  nop
  02f4284  b 0x2f4410
  02f4288  lbz 3, 32(31)
  02f428c  cmpwi 3, 0
  02f4290  bt 2, 0x2f4320
  02f4294  lfs 1, 72(31)
  02f4298  fmr 2, 28
  02f429c  lfs 31, 1064(26)
  02f42a0  bl 0x5025e0
  02f42a4  nop
  02f42a8  fmr 2, 1
  02f42ac  fmr 1, 31
  02f42b0  bl 0x502578
  02f42b4  nop
  02f42b8  stfs 1, 1064(26)
  02f42bc  addic 30, 1, 352
  02f42c0  ori 3, 31, 0
  02f42c4  li 4, 12
  02f42c8  ori 5, 30, 0
  02f42cc  bl 0xf1038
  02f42d0  nop
  02f42d4  ori 3, 30, 0
  02f42d8  addic 4, 1, 320
  02f42dc  bl 0x10c1e8
  02f42e0  nop
  02f42e4  addic 30, 1, 304
  02f42e8  lfs 2, 1064(26)
  02f42ec  fmr 1, 30
  02f42f0  bl 0x5025e0
  02f42f4  nop
  02f42f8  ori 3, 30, 0
  02f42fc  li 4, 2
  02f4300  bl 0x501980
  02f4304  nop
  02f4308  addic 3, 26, 368
  02f430c  stfs 30, 1064(26)
  02f4310  ori 5, 30, 0
  02f4314  ori 4, 3, 0
  02f4318  bl 0x5017c4
  02f431c  nop
  02f4320  lwz 3, 1060(26)
  02f4324  cmpwi 3, 0
  02f4328  bt 2, 0x2f43c4
  02f432c  addic 30, 1, 416
  02f4330  ori 3, 31, 0
  02f4334  li 4, 13
  02f4338  ori 5, 30, 0
  02f433c  bl 0xf1038
  02f4340  nop
  02f4344  lwz 3, 1060(26)
  02f4348  lfs 1, 464(1)
  02f434c  stfs 1, 16(3)
  02f4350  lfs 1, 468(1)
  02f4354  stfs 1, 20(3)
  02f4358  lfs 1, 472(1)
  02f435c  stfs 1, 24(3)
  02f4360  lfs 1, 476(1)
  02f4364  stfs 1, 28(3)
  02f4368  lwz 3, 1060(26)
  02f436c  bl 0xf98d8
  02f4370  nop
  02f4374  lwz 3, 1060(26)
  02f4378  bl 0xf31a8
  02f437c  nop
  02f4380  lwz 3, 1060(26)
  02f4384  ori 4, 30, 0
  02f4388  addic 3, 3, 192
  02f438c  bl 0x500fa8
  02f4390  nop
  02f4394  lwz 3, 1060(26)
  02f4398  addic 3, 3, 192
  02f439c  bl 0x10a788
  02f43a0  nop
  02f43a4  lwz 3, 1060(26)
  02f43a8  bl 0xf30a0
  02f43ac  nop
  02f43b0  lwz 3, 1060(26)
  02f43b4  lhz 4, 52(3)
  02f43b8  ori 4, 4, 6
  02f43bc  sth 4, 52(3)
  02f43c0  b 0x2f4410
  02f43c4  addic 5, 1, 336
  02f43c8  ori 3, 31, 0
  02f43cc  li 4, 11
  02f43d0  bl 0xf1114
  02f43d4  nop
  02f43d8  lfs 1, 336(1)
  02f43dc  ori 3, 31, 0
  02f43e0  lfs 2, 344(1)
  02f43e4  stfs 1, 64(1)
  02f43e8  stfs 2, 72(1)
  02f43ec  lfs 1, 340(1)
  02f43f0  lfs 2, 348(1)
  02f43f4  stfs 1, 68(1)
  02f43f8  stfs 2, 76(1)
  02f43fc  ld 5, 64(1)
  02f4400  ld 6, 72(1)
  02f4404  bl 0x3bd440
  02f4408  nop
  02f440c  stw 3, 1060(26)
  02f4410  ld 0, 752(1)
  02f4414  mtlr 0
  02f4418  lfd 27, 696(1)
  02f441c  lfd 28, 704(1)
  02f4420  lfd 29, 712(1)
  02f4424  lfd 30, 720(1)
  02f4428  lfd 31, 728(1)
  02f442c  ld 23, 624(1)
  02f4430  ld 24, 632(1)
  02f4434  ld 25, 640(1)
  02f4438  ld 26, 648(1)
  02f443c  ld 27, 656(1)
  02f4440  ld 28, 664(1)
  02f4444  ld 29, 672(1)
  02f4448  ld 30, 680(1)
  02f444c  ld 31, 688(1)
  02f4450  addi 1, 1, 736
  02f4454  blr

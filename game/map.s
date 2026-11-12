# game/map.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MAP:   # 0xe1b0c, 0x14 bytes
  00e1b0c  lis 3, 114
  00e1b10  lis 4, 1
  00e1b14  addic 3, 3, 19076
  00e1b18  stw 4, 72(3)
  00e1b1c  blr

Map_LoadPlanetMap:   # 0xe1b28, 0x400 bytes
  00e1b28  stdu 1, -304(1)
  00e1b2c  mflr 0
  00e1b30  std 0, 320(1)
  00e1b34  std 28, 272(1)
  00e1b38  addi 0, 1, 240
  00e1b3c  stvx 31, 0, 0
  00e1b40  std 29, 280(1)
  00e1b44  lis 28, 162
  00e1b48  li 29, 1
  00e1b4c  vspltisw 31, 0
  00e1b50  addic 28, 28, 1216
  00e1b54  li 7, 20
  00e1b58  lis 4, 114
  00e1b5c  lis 6, 114
  00e1b60  lis 8, 16166
  00e1b64  mtctr 7
  00e1b68  addic 4, 4, 25036
  00e1b6c  stw 29, 16(28)
  00e1b70  std 31, 296(1)
  00e1b74  addic 5, 28, 260
  00e1b78  li 31, 0
  00e1b7c  addic 3, 28, 180
  00e1b80  addic 6, 6, 25040
  00e1b84  std 30, 288(1)
  00e1b88  std 27, 264(1)
  00e1b8c  std 26, 256(1)
  00e1b90  addic 7, 28, 340
  00e1b94  ori 8, 8, 26214
  00e1b98  lwz 9, 0(4)
  00e1b9c  stw 8, 0(3)
  00e1ba0  lwz 10, 0(6)
  00e1ba4  addic 4, 4, 8
  00e1ba8  stw 9, 0(5)
  00e1bac  addic 6, 6, 8
  00e1bb0  stw 10, 0(7)
  00e1bb4  addic 3, 3, 4
  00e1bb8  addic 5, 5, 4
  00e1bbc  addic 7, 7, 4
  00e1bc0  bdnz 0xe1b98
  00e1bc4  lis 3, 151
  00e1bc8  li 4, -1
  00e1bcc  li 5, 18
  00e1bd0  li 6, 0
  00e1bd4  lis 30, 114
  00e1bd8  lwz 3, -25488(3)
  00e1bdc  li 11, 19
  00e1be0  stw 4, 556(28)
  00e1be4  addic 30, 30, 19792
  00e1be8  extsw 4, 3
  00e1bec  subc 6, 6, 3
  00e1bf0  subc 4, 5, 4
  00e1bf4  lis 5, 114
  00e1bf8  sradi 4, 4, 63
  00e1bfc  mtctr 11
  00e1c00  and 4, 4, 6
  00e1c04  addic 12, 30, 4
  00e1c08  addc 3, 3, 4
  00e1c0c  addic 4, 5, 19184
  00e1c10  addic 26, 30, 8
  00e1c14  addic 10, 4, 24
  00e1c18  stw 3, 548(28)
  00e1c1c  addic 5, 4, 4
  00e1c20  addic 6, 4, 8
  00e1c24  addic 7, 4, 12
  00e1c28  addic 8, 4, 16
  00e1c2c  addic 9, 4, 20
  00e1c30  addic 11, 4, 28
  00e1c34  addic 27, 30, 12
  00e1c38  lfs 1, 0(4)
  00e1c3c  lfs 2, 0(5)
  00e1c40  lfs 3, 0(6)
  00e1c44  lfs 4, 0(7)
  00e1c48  lfs 5, 0(8)
  00e1c4c  fsubs 3, 1, 3
  00e1c50  lfs 6, 0(9)
  00e1c54  fsubs 4, 2, 4
  00e1c58  lfs 7, 0(10)
  00e1c5c  lfs 8, 0(11)
  00e1c60  fsubs 7, 5, 7
  00e1c64  fsubs 8, 6, 8
  00e1c68  addic 4, 4, 32
  00e1c6c  addic 5, 5, 32
  00e1c70  addic 11, 11, 32
  00e1c74  addic 6, 6, 32
  00e1c78  addic 7, 7, 32
  00e1c7c  fdivs 3, 7, 3
  00e1c80  addic 8, 8, 32
  00e1c84  addic 9, 9, 32
  00e1c88  addic 10, 10, 32
  00e1c8c  fdivs 4, 8, 4
  00e1c90  fnmsubs 1, 3, 1, 5
  00e1c94  stfs 3, 0(12)
  00e1c98  addic 12, 12, 16
  00e1c9c  stfs 1, 0(30)
  00e1ca0  addic 30, 30, 16
  00e1ca4  fnmsubs 1, 4, 2, 6
  00e1ca8  stfs 4, 0(27)
  00e1cac  addic 27, 27, 16
  00e1cb0  stfs 1, 0(26)
  00e1cb4  addic 26, 26, 16
  00e1cb8  bdnz 0xe1c38
  00e1cbc  lis 27, 151
  00e1cc0  addic 30, 1, 112
  00e1cc4  addic 27, 27, -16064
  00e1cc8  extsw 3, 3
  00e1ccc  lbz 4, 33(27)
  00e1cd0  cmpwi 4, 0
  00e1cd4  bt 2, 0xe1cf8
  00e1cd8  lis 4, 101
  00e1cdc  ori 5, 3, 0
  00e1ce0  ori 3, 30, 0
  00e1ce4  addic 4, 4, 10508
  00e1ce8  bl 0x5cd2a8
  00e1cec  nop
  00e1cf0  ori 3, 29, 0
  00e1cf4  b 0xe1d14
  00e1cf8  lis 4, 101
  00e1cfc  ori 5, 3, 0
  00e1d00  ori 3, 30, 0
  00e1d04  addic 4, 4, 10548
  00e1d08  bl 0x5cd2a8
  00e1d0c  nop
  00e1d10  ori 3, 31, 0
  00e1d14  ori 4, 3, 0
  00e1d18  ori 3, 30, 0
  00e1d1c  stw 4, 560(28)
  00e1d20  bl 0x504178
  00e1d24  nop
  00e1d28  cmpwi 3, 0
  00e1d2c  bt 2, 0xe1ee4
  00e1d30  ori 4, 30, 0
  00e1d34  stw 29, 40(28)
  00e1d38  addic 3, 3, 2047
  00e1d3c  lis 30, 161
  00e1d40  srawi 3, 3, 11
  00e1d44  addic 30, 30, 2264
  00e1d48  sldi 6, 3, 7
  00e1d4c  ori 3, 4, 0
  00e1d50  lis 5, 9
  00e1d54  lwz 4, 64(30)
  00e1d58  stw 6, 564(28)
  00e1d5c  bl 0x503e00
  00e1d60  nop
  00e1d64  lwz 3, 548(28)
  00e1d68  lis 4, 151
  00e1d6c  slwi 5, 3, 15
  00e1d70  addic 4, 4, -13772
  00e1d74  extsw 6, 5
  00e1d78  lbzx 6, 4, 6
  00e1d7c  cmpwi 6, 0
  00e1d80  bt 2, 0xe1da4
  00e1d84  addc 4, 4, 5
  00e1d88  lis 5, 0
  00e1d8c  lwz 3, 12(28)
  00e1d90  clrldi 4, 4, 32
  00e1d94  ori 5, 5, 32768
  00e1d98  bl 0x5c5ad0
  00e1d9c  nop
  00e1da0  b 0xe1e2c
  00e1da4  lbz 4, 33(27)
  00e1da8  extsw 3, 3
  00e1dac  cmpwi 4, 0
  00e1db0  addic 27, 1, 176
  00e1db4  bt 2, 0xe1dd8
  00e1db8  lis 4, 101
  00e1dbc  ori 5, 3, 0
  00e1dc0  ori 3, 27, 0
  00e1dc4  addic 4, 4, 10508
  00e1dc8  bl 0x5cd2a8
  00e1dcc  nop
  00e1dd0  ori 3, 29, 0
  00e1dd4  b 0xe1df4
  00e1dd8  lis 4, 101
  00e1ddc  ori 5, 3, 0
  00e1de0  ori 3, 27, 0
  00e1de4  addic 4, 4, 10548
  00e1de8  bl 0x5cd2a8
  00e1dec  nop
  00e1df0  ori 3, 31, 0
  00e1df4  ori 4, 3, 0
  00e1df8  lwz 6, 64(30)
  00e1dfc  lis 5, 9
  00e1e00  ori 3, 27, 0
  00e1e04  stw 4, 560(28)
  00e1e08  ori 4, 6, 0
  00e1e0c  bl 0x503e00
  00e1e10  nop
  00e1e14  lis 5, 0
  00e1e18  lwz 3, 12(28)
  00e1e1c  li 4, 0
  00e1e20  ori 5, 5, 32768
  00e1e24  bl 0x5d0140
  00e1e28  nop
  00e1e2c  lis 3, 14
  00e1e30  li 5, 4
  00e1e34  vspltisw 7, 1
  00e1e38  addi 6, 3, 6944
  00e1e3c  ori 3, 31, 0
  00e1e40  addic 28, 28, 420
  00e1e44  ori 4, 3, 0
  00e1e48  vsldoi 6, 31, 31, 0
  00e1e4c  lvlx 2, 0, 6
  00e1e50  lvlx 4, 5, 6
  00e1e54  vspltw 2, 2, 0
  00e1e58  vspltw 4, 4, 0
  00e1e5c  vcfsx 3, 6, 0
  00e1e60  vspltisw 8, -1
  00e1e64  ori 5, 31, 0
  00e1e68  vsldoi 5, 31, 31, 0
  00e1e6c  vslw 8, 8, 8
  00e1e70  vsubfp 3, 2, 3
  00e1e74  vmaddfp 3, 3, 3, 8
  00e1e78  vcfsx 8, 5, 0
  00e1e7c  vsubfp 8, 2, 8
  00e1e80  vmaddfp 8, 8, 8, 3
  00e1e84  vcmpgtfp. 8, 8, 4
  00e1e88  bt 26, 0xe1ebc
  00e1e8c  srawi 6, 5, 3
  00e1e90  addze 6, 6
  00e1e94  srawi 7, 5, 3
  00e1e98  addze 7, 7
  00e1e9c  addc 6, 6, 28
  00e1ea0  sldi 7, 7, 3
  00e1ea4  clrldi 6, 6, 32
  00e1ea8  subc 7, 5, 7
  00e1eac  slw 7, 29, 7
  00e1eb0  lbzx 8, 6, 4
  00e1eb4  or 7, 8, 7
  00e1eb8  stbx 7, 6, 4
  00e1ebc  addic 5, 5, 1
  00e1ec0  vadduwm 5, 5, 7
  00e1ec4  cmpwi 5, 32
  00e1ec8  bt 0, 0xe1e78
  00e1ecc  addic 3, 3, 1
  00e1ed0  vadduwm 6, 6, 7
  00e1ed4  addic 4, 4, 4
  00e1ed8  cmpwi 3, 32
  00e1edc  bt 0, 0xe1e5c
  00e1ee0  b 0xe1ef8
  00e1ee4  lis 3, 162
  00e1ee8  stw 31, 8(28)
  00e1eec  stw 29, 40(28)
  00e1ef0  stw 31, 1216(3)
  00e1ef4  stw 31, 4(28)
  00e1ef8  li 0, 240
  00e1efc  lvx 31, 1, 0
  00e1f00  ld 0, 320(1)
  00e1f04  mtlr 0
  00e1f08  ld 26, 256(1)
  00e1f0c  ld 27, 264(1)
  00e1f10  ld 28, 272(1)
  00e1f14  ld 29, 280(1)
  00e1f18  ld 30, 288(1)
  00e1f1c  ld 31, 296(1)
  00e1f20  addi 1, 1, 304
  00e1f24  blr

Map_OnPauseMenuOpen:   # 0xe1f28, 0x164 bytes
  00e1f28  stdu 1, -128(1)
  00e1f2c  mflr 0
  00e1f30  std 0, 144(1)
  00e1f34  std 31, 120(1)
  00e1f38  lis 31, 162
  00e1f3c  li 4, 1
  00e1f40  addic 31, 31, 1216
  00e1f44  lwz 3, 548(31)
  00e1f48  extsw 3, 3
  00e1f4c  bl 0xea958
  00e1f50  nop
  00e1f54  lis 3, 165
  00e1f58  lis 4, 9
  00e1f5c  addic 3, 3, 11184
  00e1f60  lis 5, 18
  00e1f64  ori 4, 4, 43008
  00e1f68  ori 10, 5, 43008
  00e1f6c  li 8, 0
  00e1f70  lwz 7, 248(3)
  00e1f74  lis 6, 9
  00e1f78  lwz 9, 252(3)
  00e1f7c  addc 5, 7, 4
  00e1f80  stw 7, 572(31)
  00e1f84  addc 4, 7, 10
  00e1f88  stw 8, 744(31)
  00e1f8c  clrldi 5, 5, 32
  00e1f90  stw 9, 752(31)
  00e1f94  addc 6, 9, 6
  00e1f98  li 7, -1
  00e1f9c  stw 5, 748(31)
  00e1fa0  stw 4, 248(3)
  00e1fa4  stw 6, 252(3)
  00e1fa8  stw 8, 756(31)
  00e1fac  stw 8, 760(31)
  00e1fb0  stw 7, 764(31)
  00e1fb4  stw 7, 768(31)
  00e1fb8  lwz 4, 556(31)
  00e1fbc  stw 7, 772(31)
  00e1fc0  stw 7, 776(31)
  00e1fc4  stw 7, 780(31)
  00e1fc8  cmpwi 4, -1
  00e1fcc  stw 7, 784(31)
  00e1fd0  lwz 3, 564(31)
  00e1fd4  bt 2, 0xe2000
  00e1fd8  lwz 6, 560(31)
  00e1fdc  cmpwi 6, 0
  00e1fe0  bf 2, 0xe2000
  00e1fe4  lis 6, 151
  00e1fe8  addic 6, 6, -16064
  00e1fec  lbz 6, 33(6)
  00e1ff0  cmpwi 6, 0
  00e1ff4  bt 2, 0xe2000
  00e1ff8  bl 0xe1b28
  00e1ffc  b 0xe2078
  00e2000  cmpwi 4, -1
  00e2004  bt 2, 0xe2070
  00e2008  ori 7, 3, 0
  00e200c  ori 3, 5, 0
  00e2010  extsw 6, 7
  00e2014  extsw 4, 4
  00e2018  stw 7, 792(31)
  00e201c  li 5, 0
  00e2020  li 7, 0
  00e2024  bl 0x165800
  00e2028  nop
  00e202c  lis 3, 151
  00e2030  addic 3, 3, -16064
  00e2034  lbz 3, 33(3)
  00e2038  cmpwi 3, 0
  00e203c  bt 2, 0xe2050
  00e2040  lis 3, 151
  00e2044  lwz 3, -25488(3)
  00e2048  addic 3, 3, 256
  00e204c  b 0xe2058
  00e2050  lis 3, 151
  00e2054  lwz 3, -25488(3)
  00e2058  li 4, 1
  00e205c  stw 3, 768(31)
  00e2060  li 5, -2
  00e2064  stw 4, 36(31)
  00e2068  stw 5, 552(31)
  00e206c  b 0xe2078
  00e2070  li 3, 0
  00e2074  stw 3, 36(31)
  00e2078  ld 0, 144(1)
  00e207c  mtlr 0
  00e2080  ld 31, 120(1)
  00e2084  addi 1, 1, 128
  00e2088  blr

Map_FindFreeCacheSlot:   # 0xe208c, 0x80 bytes
  00e208c  clrlwi 5, 3, 24
  00e2090  lis 4, 162
  00e2094  lis 3, 162
  00e2098  li 6, 0
  00e209c  addic 4, 4, 1960
  00e20a0  addic 3, 3, 1980
  00e20a4  li 8, 0
  00e20a8  subfic 7, 6, 4
  00e20ac  subc 8, 8, 5
  00e20b0  extsw 7, 7
  00e20b4  cntlzw 8, 8
  00e20b8  subc 9, 6, 7
  00e20bc  sldi 8, 8, 58
  00e20c0  sradi 8, 8, 63
  00e20c4  and 8, 8, 9
  00e20c8  addc 7, 7, 8
  00e20cc  sldi 8, 7, 2
  00e20d0  extsw 8, 8
  00e20d4  lwzx 9, 4, 8
  00e20d8  cmpwi 9, 0
  00e20dc  bt 2, 0xe20f4
  00e20e0  lwzx 8, 3, 8
  00e20e4  cmpwi 8, -1
  00e20e8  bf 2, 0xe20f4
  00e20ec  ori 3, 7, 0
  00e20f0  b 0xe2108
  00e20f4  addic 6, 6, 1
  00e20f8  extsw 6, 6
  00e20fc  cmpwi 6, 5
  00e2100  bt 0, 0xe20a4
  00e2104  li 3, -1
  00e2108  blr

Map_MoveCacheSlot:   # 0xe210c, 0x84 bytes
  00e210c  stdu 1, -128(1)
  00e2110  mflr 0
  00e2114  std 0, 144(1)
  00e2118  lis 5, 162
  00e211c  sldi 3, 3, 2
  00e2120  sldi 4, 4, 2
  00e2124  addic 5, 5, 1216
  00e2128  extsw 3, 3
  00e212c  std 31, 120(1)
  00e2130  extsw 4, 4
  00e2134  std 30, 112(1)
  00e2138  addc 31, 5, 3
  00e213c  addc 30, 5, 4
  00e2140  lwz 3, 744(31)
  00e2144  lwz 4, 788(30)
  00e2148  lwz 6, 744(30)
  00e214c  slwi 5, 4, 4
  00e2150  ori 4, 6, 0
  00e2154  extsw 5, 5
  00e2158  bl 0x5002cc
  00e215c  nop
  00e2160  lwz 3, 764(30)
  00e2164  li 4, -1
  00e2168  lwz 5, 788(30)
  00e216c  stw 3, 764(31)
  00e2170  stw 5, 788(31)
  00e2174  stw 4, 764(30)
  00e2178  ld 0, 144(1)
  00e217c  mtlr 0
  00e2180  ld 30, 112(1)
  00e2184  ld 31, 120(1)
  00e2188  addi 1, 1, 128
  00e218c  blr

Map_GetFreeCacheSlotCompact:   # 0xe2190, 0x110 bytes
  00e2190  stdu 1, -144(1)
  00e2194  mflr 0
  00e2198  std 0, 160(1)
  00e219c  std 31, 136(1)
  00e21a0  lis 31, 162
  00e21a4  li 6, 0
  00e21a8  std 30, 128(1)
  00e21ac  std 29, 120(1)
  00e21b0  addic 31, 31, 1216
  00e21b4  lwz 3, 744(31)
  00e21b8  subfic 4, 6, 4
  00e21bc  extsw 4, 4
  00e21c0  sldi 5, 4, 2
  00e21c4  extsw 5, 5
  00e21c8  addc 5, 31, 5
  00e21cc  lwz 7, 744(5)
  00e21d0  cmpwi 7, 0
  00e21d4  bt 2, 0xe21f0
  00e21d8  lwz 5, 764(5)
  00e21dc  cmpwi 5, -1
  00e21e0  bf 2, 0xe21f0
  00e21e4  cmpwi 4, 0
  00e21e8  bf 2, 0xe2200
  00e21ec  b 0xe2208
  00e21f0  addic 6, 6, 1
  00e21f4  cmpwi 6, 5
  00e21f8  bt 0, 0xe21b8
  00e21fc  li 4, -1
  00e2200  ori 3, 4, 0
  00e2204  b 0xe2284
  00e2208  li 30, 1
  00e220c  slwi 4, 30, 2
  00e2210  extsw 4, 4
  00e2214  addc 4, 31, 4
  00e2218  lwz 5, 764(4)
  00e221c  rlwinm 5, 5, 0, 19, 19
  00e2220  cmpwi 5, 0
  00e2224  bf 2, 0xe2234
  00e2228  lwz 4, 744(4)
  00e222c  cmpwi 4, 0
  00e2230  bf 2, 0xe2244
  00e2234  addic 30, 30, 1
  00e2238  extsw 30, 30
  00e223c  cmpwi 30, 5
  00e2240  bt 0, 0xe220c
  00e2244  slwi 4, 30, 2
  00e2248  extsw 4, 4
  00e224c  addc 29, 31, 4
  00e2250  lwz 5, 788(29)
  00e2254  lwz 4, 744(29)
  00e2258  slwi 5, 5, 4
  00e225c  extsw 5, 5
  00e2260  bl 0x5002cc
  00e2264  nop
  00e2268  lwz 4, 764(29)
  00e226c  li 5, -1
  00e2270  lwz 6, 788(29)
  00e2274  ori 3, 30, 0
  00e2278  stw 4, 764(31)
  00e227c  stw 6, 788(31)
  00e2280  stw 5, 764(29)
  00e2284  ld 0, 160(1)
  00e2288  mtlr 0
  00e228c  ld 29, 120(1)
  00e2290  ld 30, 128(1)
  00e2294  ld 31, 136(1)
  00e2298  addi 1, 1, 144
  00e229c  blr

Map_FindCacheSlotById:   # 0xe22a0, 0x54 bytes
  00e22a0  lis 5, 162
  00e22a4  lis 4, 162
  00e22a8  li 7, 0
  00e22ac  addic 5, 5, 1960
  00e22b0  addic 4, 4, 1980
  00e22b4  slwi 6, 7, 2
  00e22b8  extsw 6, 6
  00e22bc  lwzx 8, 5, 6
  00e22c0  cmpwi 8, 0
  00e22c4  bt 2, 0xe22dc
  00e22c8  lwzx 6, 4, 6
  00e22cc  cmpw 6, 3
  00e22d0  bf 2, 0xe22dc
  00e22d4  ori 3, 7, 0
  00e22d8  b 0xe22f0
  00e22dc  addic 7, 7, 1
  00e22e0  extsw 7, 7
  00e22e4  cmpwi 7, 5
  00e22e8  bt 0, 0xe22b4
  00e22ec  li 3, -1
  00e22f0  blr

Map_GetNextMapToPrefetch:   # 0xe22f4, 0x1b8 bytes
  00e22f4  stdu 1, -64(1)
  00e22f8  lis 3, 151
  00e22fc  li 4, 0
  00e2300  addic 3, 3, -16064
  00e2304  lis 5, 162
  00e2308  li 7, 0
  00e230c  li 10, 256
  00e2310  li 6, 0
  00e2314  lbz 3, 33(3)
  00e2318  subc 3, 4, 3
  00e231c  addic 4, 5, 1216
  00e2320  cntlzw 3, 3
  00e2324  subc 5, 7, 10
  00e2328  sldi 3, 3, 58
  00e232c  addic 9, 4, 744
  00e2330  sradi 3, 3, 63
  00e2334  lwz 8, 548(4)
  00e2338  addic 7, 4, 764
  00e233c  and 5, 3, 5
  00e2340  cmpwi 1, 8, 20
  00e2344  addc 5, 10, 5
  00e2348  ori 10, 6, 0
  00e234c  addc 11, 8, 5
  00e2350  ori 3, 9, 0
  00e2354  std 31, 56(1)
  00e2358  std 30, 48(1)
  00e235c  extsw 11, 11
  00e2360  ori 4, 7, 0
  00e2364  lwz 12, 0(9)
  00e2368  cmpwi 12, 0
  00e236c  bt 2, 0xe2388
  00e2370  lwz 12, 0(7)
  00e2374  cmpw 12, 11
  00e2378  bf 2, 0xe2388
  00e237c  cmpwi 10, -1
  00e2380  bt 2, 0xe239c
  00e2384  b 0xe23a4
  00e2388  addic 10, 10, 1
  00e238c  addic 9, 9, 4
  00e2390  cmpwi 10, 5
  00e2394  addic 7, 7, 4
  00e2398  bt 0, 0xe2364
  00e239c  ori 3, 11, 0
  00e23a0  b 0xe249c
  00e23a4  ori 7, 6, 0
  00e23a8  bf 4, 0xe23e0
  00e23ac  lis 10, 115
  00e23b0  ori 7, 6, 0
  00e23b4  lwz 10, -26256(10)
  00e23b8  lwz 9, 0(10)
  00e23bc  cmpw 9, 8
  00e23c0  bt 2, 0xe23e0
  00e23c4  ori 9, 6, 0
  00e23c8  addic 9, 9, 4
  00e23cc  addic 7, 7, 1
  00e23d0  extsw 11, 9
  00e23d4  lwzx 11, 10, 11
  00e23d8  cmpw 11, 8
  00e23dc  bf 2, 0xe23c8
  00e23e0  li 9, 1
  00e23e4  lis 8, 115
  00e23e8  addc 10, 7, 9
  00e23ec  cmpwi 1, 10, 20
  00e23f0  cmpwi 10, 0
  00e23f4  crorc 2, 0, 4
  00e23f8  bt 2, 0xe246c
  00e23fc  sldi 10, 10, 2
  00e2400  lwz 11, -26256(8)
  00e2404  extsw 10, 10
  00e2408  lwzx 10, 11, 10
  00e240c  cmpwi 10, 0
  00e2410  bt 2, 0xe246c
  00e2414  addc 11, 10, 5
  00e2418  ori 10, 6, 0
  00e241c  extsw 11, 11
  00e2420  ori 31, 3, 0
  00e2424  ori 12, 4, 0
  00e2428  lwz 30, 0(31)
  00e242c  cmpwi 30, 0
  00e2430  bt 2, 0xe2444
  00e2434  lwz 30, 0(12)
  00e2438  cmpw 30, 11
  00e243c  bf 2, 0xe2444
  00e2440  b 0xe245c
  00e2444  addic 10, 10, 1
  00e2448  addic 31, 31, 4
  00e244c  cmpwi 10, 5
  00e2450  addic 12, 12, 4
  00e2454  bt 0, 0xe2428
  00e2458  li 10, -1
  00e245c  cmpwi 10, -1
  00e2460  bf 2, 0xe246c
  00e2464  ori 3, 11, 0
  00e2468  b 0xe249c
  00e246c  extsw 10, 9
  00e2470  li 12, 0
  00e2474  neg 11, 9
  00e2478  subfic 9, 9, 1
  00e247c  subc 10, 12, 10
  00e2480  subc 11, 11, 9
  00e2484  sradi 10, 10, 63
  00e2488  and 10, 10, 11
  00e248c  addc 9, 9, 10
  00e2490  cmpwi 9, 4
  00e2494  bf 2, 0xe23e8
  00e2498  li 3, -1
  00e249c  ld 30, 48(1)
  00e24a0  ld 31, 56(1)
  00e24a4  addi 1, 1, 64
  00e24a8  blr

Map_GetGalacticMapIndex:   # 0xe24ac, 0x4c bytes
  00e24ac  lis 4, 115
  00e24b0  li 5, 0
  00e24b4  lwz 4, -26256(4)
  00e24b8  slwi 6, 5, 2
  00e24bc  cmpwi 6, 5, 20
  00e24c0  extsw 6, 6
  00e24c4  lwzx 6, 4, 6
  00e24c8  cmpwi 6, 0
  00e24cc  crorc 2, 2, 24
  00e24d0  cmpw 1, 6, 3
  00e24d4  bt 2, 0xe24f0
  00e24d8  bf 6, 0xe24e4
  00e24dc  ori 3, 5, 0
  00e24e0  b 0xe24f4
  00e24e4  addic 5, 5, 1
  00e24e8  extsw 5, 5
  00e24ec  b 0xe24b8
  00e24f0  li 3, -1
  00e24f4  blr

Map_ChooseCacheSlotToEvict:   # 0xe24f8, 0x20c bytes
  00e24f8  stdu 1, -96(1)
  00e24fc  lis 6, 162
  00e2500  li 8, 0
  00e2504  addic 6, 6, 1216
  00e2508  li 7, -1
  00e250c  ori 5, 8, 0
  00e2510  ori 4, 7, 0
  00e2514  lwz 10, 548(6)
  00e2518  lwz 3, 784(6)
  00e251c  std 31, 88(1)
  00e2520  std 30, 80(1)
  00e2524  std 29, 72(1)
  00e2528  std 28, 64(1)
  00e252c  std 27, 56(1)
  00e2530  std 26, 48(1)
  00e2534  cmpwi 10, 0
  00e2538  bf 2, 0xe2584
  00e253c  li 11, 4
  00e2540  sldi 9, 11, 2
  00e2544  cmpw 1, 11, 3
  00e2548  extsw 9, 9
  00e254c  addc 9, 6, 9
  00e2550  lwz 12, 744(9)
  00e2554  cmpwi 12, 0
  00e2558  cror 2, 2, 6
  00e255c  bt 2, 0xe2574
  00e2560  lwz 9, 764(9)
  00e2564  cmpwi 9, -1
  00e2568  bf 2, 0xe2574
  00e256c  ori 3, 11, 0
  00e2570  b 0xe26e4
  00e2574  addic 11, 11, -1
  00e2578  extsw 11, 11
  00e257c  cmpwi 11, 0
  00e2580  bf 0, 0xe2540
  00e2584  ori 11, 8, 0
  00e2588  lis 12, 115
  00e258c  ori 31, 11, 0
  00e2590  lwz 9, -26256(12)
  00e2594  cmpwi 1, 11, 20
  00e2598  lwzx 30, 9, 31
  00e259c  cmpwi 30, 0
  00e25a0  crorc 2, 2, 4
  00e25a4  bt 2, 0xe25c4
  00e25a8  cmpw 30, 10
  00e25ac  bf 2, 0xe25b8
  00e25b0  ori 10, 11, 0
  00e25b4  b 0xe25c8
  00e25b8  addic 31, 31, 4
  00e25bc  addic 11, 11, 1
  00e25c0  b 0xe2590
  00e25c4  ori 10, 7, 0
  00e25c8  cmpwi 10, -1
  00e25cc  ori 11, 9, 0
  00e25d0  bf 2, 0xe25dc
  00e25d4  li 3, 1
  00e25d8  b 0xe26e4
  00e25dc  ori 12, 8, 0
  00e25e0  slwi 31, 12, 2
  00e25e4  cmpw 1, 12, 3
  00e25e8  extsw 31, 31
  00e25ec  addc 31, 6, 31
  00e25f0  lwz 30, 744(31)
  00e25f4  cmpwi 30, 0
  00e25f8  cror 2, 2, 6
  00e25fc  bt 2, 0xe26a0
  00e2600  lwz 31, 764(31)
  00e2604  cmpwi 31, -1
  00e2608  bf 2, 0xe2614
  00e260c  ori 3, 12, 0
  00e2610  b 0xe26e4
  00e2614  clrlwi 27, 31, 24
  00e2618  ori 31, 5, 0
  00e261c  clrldi 29, 9, 32
  00e2620  ori 28, 31, 0
  00e2624  ori 30, 29, 0
  00e2628  clrldi 11, 11, 32
  00e262c  cmpwi 1, 31, 20
  00e2630  lwzx 26, 11, 28
  00e2634  cmpwi 26, 0
  00e2638  crorc 2, 2, 4
  00e263c  bt 2, 0xe2668
  00e2640  lwz 26, 0(30)
  00e2644  ori 9, 29, 0
  00e2648  cmpw 26, 27
  00e264c  ori 11, 9, 0
  00e2650  bf 2, 0xe2658
  00e2654  b 0xe266c
  00e2658  addic 30, 30, 4
  00e265c  addic 28, 28, 4
  00e2660  addic 31, 31, 1
  00e2664  b 0xe2628
  00e2668  ori 31, 4, 0
  00e266c  subc 31, 31, 10
  00e2670  li 30, 0
  00e2674  extsw 31, 31
  00e2678  neg 29, 31
  00e267c  subc 30, 31, 30
  00e2680  subc 29, 29, 31
  00e2684  sradi 30, 30, 63
  00e2688  and 30, 30, 29
  00e268c  addc 31, 31, 30
  00e2690  cmpw 8, 31
  00e2694  bf 0, 0xe26a0
  00e2698  ori 8, 31, 0
  00e269c  ori 7, 12, 0
  00e26a0  addic 12, 12, 1
  00e26a4  extsw 12, 12
  00e26a8  cmpwi 12, 5
  00e26ac  bt 0, 0xe25e0
  00e26b0  li 3, -1
  00e26b4  li 5, 0
  00e26b8  subc 3, 3, 7
  00e26bc  subc 5, 5, 7
  00e26c0  cntlzw 3, 3
  00e26c4  sldi 3, 3, 58
  00e26c8  sradi 3, 3, 63
  00e26cc  and 3, 3, 5
  00e26d0  addc 3, 7, 3
  00e26d4  sldi 5, 3, 2
  00e26d8  extsw 5, 5
  00e26dc  addc 5, 6, 5
  00e26e0  stw 4, 764(5)
  00e26e4  ld 26, 48(1)
  00e26e8  ld 27, 56(1)
  00e26ec  ld 28, 64(1)
  00e26f0  ld 29, 72(1)
  00e26f4  ld 30, 80(1)
  00e26f8  ld 31, 88(1)
  00e26fc  addi 1, 1, 96
  00e2700  blr

STUB_000e2704:   # 0xe2704, 0x4 bytes
  00e2704  blr

Map_MergeByMask:   # 0xe2708, 0xb4 bytes
  00e2708  stdu 1, -80(1)
  00e270c  ori 7, 5, 0
  00e2710  ori 5, 6, 0
  00e2714  ori 6, 7, 0
  00e2718  ori 7, 4, 0
  00e271c  li 9, 0
  00e2720  lis 4, 0
  00e2724  ori 8, 3, 0
  00e2728  std 31, 72(1)
  00e272c  std 30, 64(1)
  00e2730  std 29, 56(1)
  00e2734  ori 3, 9, 0
  00e2738  ori 4, 4, 32768
  00e273c  ori 31, 3, 0
  00e2740  li 30, 1
  00e2744  ori 12, 7, 0
  00e2748  ori 11, 6, 0
  00e274c  ori 10, 8, 0
  00e2750  lbz 29, 0(5)
  00e2754  and 29, 29, 30
  00e2758  cmpwi 29, 0
  00e275c  bt 2, 0xe2768
  00e2760  lbz 7, 0(7)
  00e2764  b 0xe276c
  00e2768  lbz 7, 0(6)
  00e276c  addic 31, 31, 1
  00e2770  addic 12, 12, 1
  00e2774  stb 7, 0(8)
  00e2778  addic 11, 11, 1
  00e277c  addic 10, 10, 1
  00e2780  cmpwi 31, 8
  00e2784  slwi 30, 30, 1
  00e2788  ori 7, 12, 0
  00e278c  ori 6, 11, 0
  00e2790  ori 8, 10, 0
  00e2794  bt 0, 0xe2750
  00e2798  addic 9, 9, 1
  00e279c  addic 5, 5, 1
  00e27a0  cmpw 9, 4
  00e27a4  bt 0, 0xe273c
  00e27a8  ld 29, 56(1)
  00e27ac  ld 30, 64(1)
  00e27b0  ld 31, 72(1)
  00e27b4  addi 1, 1, 80
  00e27b8  blr

Map_ExpandRevealMask:   # 0xe27bc, 0x78 bytes
  00e27bc  lis 7, 0
  00e27c0  ori 5, 3, 0
  00e27c4  li 6, 0
  00e27c8  ori 3, 7, 32768
  00e27cc  li 9, 8
  00e27d0  li 8, 1
  00e27d4  ori 7, 5, 0
  00e27d8  mtctr 9
  00e27dc  lbz 11, 0(4)
  00e27e0  li 9, 0
  00e27e4  li 10, 0
  00e27e8  and 11, 11, 8
  00e27ec  li 12, 255
  00e27f0  subc 9, 9, 11
  00e27f4  subc 10, 10, 12
  00e27f8  cntlzw 9, 9
  00e27fc  addic 7, 7, 1
  00e2800  sldi 9, 9, 58
  00e2804  slwi 8, 8, 1
  00e2808  sradi 9, 9, 63
  00e280c  and 9, 9, 10
  00e2810  addc 9, 12, 9
  00e2814  stb 9, 0(5)
  00e2818  ori 5, 7, 0
  00e281c  bdnz 0xe27dc
  00e2820  addic 6, 6, 1
  00e2824  addic 4, 4, 1
  00e2828  cmpw 6, 3
  00e282c  bt 0, 0xe27cc
  00e2830  blr

Map_UpdateZoomPan:   # 0xe2848, 0x2e0 bytes
  00e2848  lis 5, 150
  00e284c  lis 4, 162
  00e2850  addic 5, 5, 19008
  00e2854  addic 4, 4, 1216
  00e2858  li 6, 8
  00e285c  li 3, 1280
  00e2860  li 8, 12
  00e2864  lwz 7, 164(5)
  00e2868  lwz 9, 36(4)
  00e286c  and 7, 7, 3
  00e2870  lwz 3, 552(4)
  00e2874  cmpwi 6, 9, 0
  00e2878  cmpwi 7, 0
  00e287c  lvlx 3, 6, 5
  00e2880  cmpwi 1, 3, 0
  00e2884  lvlx 2, 8, 5
  00e2888  bt 2, 0xe2894
  00e288c  li 3, 1
  00e2890  b 0xe2b24
  00e2894  bf 26, 0xe28a0
  00e2898  li 3, 0
  00e289c  b 0xe2b24
  00e28a0  bf 4, 0xe28ac
  00e28a4  li 3, 0
  00e28a8  b 0xe2b24
  00e28ac  lis 6, 14
  00e28b0  slwi 3, 3, 2
  00e28b4  addi 6, 6, 10292
  00e28b8  extsw 3, 3
  00e28bc  lis 7, 16512
  00e28c0  lfs 1, 0(6)
  00e28c4  lfs 2, 4(6)
  00e28c8  lfs 3, 4(5)
  00e28cc  addc 6, 4, 3
  00e28d0  fnmsubs 1, 3, 1, 2
  00e28d4  lwz 3, 552(4)
  00e28d8  slwi 5, 3, 2
  00e28dc  lfs 4, 180(6)
  00e28e0  extsw 5, 5
  00e28e4  addc 5, 4, 5
  00e28e8  fmuls 1, 4, 1
  00e28ec  stfs 1, 180(6)
  00e28f0  lwz 6, 180(5)
  00e28f4  srawi 8, 6, 31
  00e28f8  srwi 9, 8, 1
  00e28fc  xor 6, 9, 6
  00e2900  subc 6, 6, 8
  00e2904  cmpw 6, 7
  00e2908  bf 1, 0xe291c
  00e290c  lis 3, 16512
  00e2910  lwz 6, 552(4)
  00e2914  stw 3, 180(5)
  00e2918  ori 3, 6, 0
  00e291c  ori 5, 3, 0
  00e2920  lis 6, 16166
  00e2924  slwi 3, 5, 2
  00e2928  ori 6, 6, 26214
  00e292c  extsw 3, 3
  00e2930  addc 3, 4, 3
  00e2934  lwz 7, 180(3)
  00e2938  srawi 8, 7, 31
  00e293c  srwi 9, 8, 1
  00e2940  xor 7, 9, 7
  00e2944  subc 7, 7, 8
  00e2948  cmpw 7, 6
  00e294c  bf 0, 0xe2960
  00e2950  lis 5, 16166
  00e2954  ori 6, 5, 26214
  00e2958  lwz 5, 552(4)
  00e295c  stw 6, 180(3)
  00e2960  slwi 3, 5, 2
  00e2964  li 5, 180
  00e2968  extsw 3, 3
  00e296c  addi 6, 5, 16
  00e2970  addc 3, 4, 3
  00e2974  lis 7, 14
  00e2978  vspltisw 7, -1
  00e297c  li 8, 12
  00e2980  vspltisw 9, -1
  00e2984  lvlx 4, 5, 3
  00e2988  lvrx 5, 6, 3
  00e298c  addi 5, 7, 10292
  00e2990  vslw 7, 7, 7
  00e2994  vor 4, 4, 5
  00e2998  li 6, 8
  00e299c  vslw 9, 9, 9
  00e29a0  vrefp 5, 4
  00e29a4  lvlx 6, 8, 5
  00e29a8  vspltw 6, 6, 0
  00e29ac  vspltisw 10, -1
  00e29b0  li 9, 340
  00e29b4  vspltisw 12, -1
  00e29b8  addi 10, 9, 16
  00e29bc  vslw 10, 10, 10
  00e29c0  li 11, 0
  00e29c4  vnmsubfp 8, 5, 4, 6
  00e29c8  li 12, 0
  00e29cc  vmaddfp 5, 5, 8, 7
  00e29d0  vspltisw 8, -1
  00e29d4  lvlx 7, 6, 5
  00e29d8  lwz 7, 552(4)
  00e29dc  vspltw 7, 7, 0
  00e29e0  vslw 8, 8, 8
  00e29e4  li 6, 260
  00e29e8  slwi 7, 7, 2
  00e29ec  addi 8, 6, 16
  00e29f0  extsw 7, 7
  00e29f4  vnmsubfp 11, 5, 4, 6
  00e29f8  addc 7, 4, 7
  00e29fc  vmaddfp 5, 5, 11, 9
  00e2a00  vspltisw 11, -1
  00e2a04  vslw 9, 12, 12
  00e2a08  vnmsubfp 4, 5, 4, 6
  00e2a0c  vslw 6, 11, 11
  00e2a10  lvlx 11, 6, 3
  00e2a14  vmaddfp 4, 5, 4, 8
  00e2a18  lvrx 5, 8, 3
  00e2a1c  lvlx 8, 9, 7
  00e2a20  addi 8, 6, 16
  00e2a24  vor 5, 11, 5
  00e2a28  lvrx 11, 10, 7
  00e2a2c  li 10, 16
  00e2a30  vmaddfp 4, 4, 7, 10
  00e2a34  vor 7, 8, 11
  00e2a38  vmaddfp 3, 3, 4, 9
  00e2a3c  vmaddfp 2, 2, 4, 6
  00e2a40  vspltisw 4, 0
  00e2a44  vctsxs 3, 3, 0
  00e2a48  vctsxs 2, 2, 0
  00e2a4c  vadduwm 3, 5, 3
  00e2a50  vadduwm 2, 7, 2
  00e2a54  vspltw 3, 3, 0
  00e2a58  vspltw 2, 2, 0
  00e2a5c  stvewx 3, 6, 3
  00e2a60  stvewx 2, 9, 7
  00e2a64  lwz 3, 552(4)
  00e2a68  lvlx 2, 10, 5
  00e2a6c  slwi 7, 3, 2
  00e2a70  slwi 5, 3, 2
  00e2a74  extsw 7, 7
  00e2a78  vspltw 2, 2, 0
  00e2a7c  extsw 5, 5
  00e2a80  addc 7, 4, 7
  00e2a84  addc 5, 4, 5
  00e2a88  slwi 9, 3, 2
  00e2a8c  slwi 3, 3, 2
  00e2a90  extsw 9, 9
  00e2a94  lvlx 3, 6, 7
  00e2a98  lvrx 5, 8, 7
  00e2a9c  addi 8, 6, 16
  00e2aa0  vor 3, 3, 5
  00e2aa4  addc 9, 4, 9
  00e2aa8  extsw 3, 3
  00e2aac  vcmpgtsw 4, 4, 3
  00e2ab0  addc 4, 4, 3
  00e2ab4  vandc 3, 3, 4
  00e2ab8  lis 10, 4096
  00e2abc  vspltw 3, 3, 0
  00e2ac0  stvewx 3, 6, 7
  00e2ac4  lvlx 3, 6, 5
  00e2ac8  lvrx 4, 8, 5
  00e2acc  lwz 7, 340(9)
  00e2ad0  vor 3, 3, 4
  00e2ad4  extsw 8, 7
  00e2ad8  subc 12, 12, 7
  00e2adc  subc 8, 8, 11
  00e2ae0  vcmpgtsw 4, 3, 2
  00e2ae4  sradi 8, 8, 63
  00e2ae8  vsel 2, 3, 2, 4
  00e2aec  and 3, 8, 12
  00e2af0  addc 3, 7, 3
  00e2af4  vspltw 2, 2, 0
  00e2af8  stvewx 2, 6, 5
  00e2afc  stw 3, 340(9)
  00e2b00  lwz 5, 340(4)
  00e2b04  li 3, 0
  00e2b08  extsw 6, 5
  00e2b0c  subc 7, 10, 5
  00e2b10  subc 6, 10, 6
  00e2b14  sradi 6, 6, 63
  00e2b18  and 6, 6, 7
  00e2b1c  addc 5, 5, 6
  00e2b20  stw 5, 340(4)
  00e2b24  blr

Map_WorldToMapCoords:   # 0xe2b38, 0xfc bytes
  00e2b38  addic 3, 7, -100
  00e2b3c  li 8, 100
  00e2b40  subc 4, 7, 3
  00e2b44  cmpwi 1, 7, 100
  00e2b48  subc 7, 7, 8
  00e2b4c  sradi 7, 7, 63
  00e2b50  and 4, 7, 4
  00e2b54  addc 3, 3, 4
  00e2b58  cmpwi 3, -1
  00e2b5c  bf 2, 0xe2b68
  00e2b60  lis 3, 151
  00e2b64  lwz 3, -25488(3)
  00e2b68  extsw 4, 3
  00e2b6c  li 8, 0
  00e2b70  li 7, 0
  00e2b74  subc 4, 4, 8
  00e2b78  subc 7, 7, 3
  00e2b7c  sradi 4, 4, 63
  00e2b80  lis 9, 14
  00e2b84  and 4, 4, 7
  00e2b88  li 7, 18
  00e2b8c  addc 3, 3, 4
  00e2b90  li 4, 0
  00e2b94  extsw 8, 3
  00e2b98  subc 4, 4, 3
  00e2b9c  subc 7, 7, 8
  00e2ba0  addi 8, 9, 11048
  00e2ba4  sradi 7, 7, 63
  00e2ba8  and 4, 7, 4
  00e2bac  lis 7, 114
  00e2bb0  addc 3, 3, 4
  00e2bb4  lfs 3, 0(8)
  00e2bb8  addic 4, 7, 19792
  00e2bbc  sldi 7, 3, 4
  00e2bc0  cmpwi 3, 6
  00e2bc4  extsw 7, 7
  00e2bc8  addc 3, 4, 7
  00e2bcc  bf 2, 0xe2c08
  00e2bd0  bt 4, 0xe2c08
  00e2bd4  lis 4, 14
  00e2bd8  lfs 4, 12(3)
  00e2bdc  addi 4, 4, 11048
  00e2be0  lfs 5, 4(4)
  00e2be4  fmadds 2, 4, 2, 5
  00e2be8  fmuls 2, 2, 3
  00e2bec  stfs 2, 0(5)
  00e2bf0  lfs 2, 8(4)
  00e2bf4  lfs 4, 4(3)
  00e2bf8  fnmsubs 1, 4, 1, 2
  00e2bfc  fmuls 1, 1, 3
  00e2c00  stfs 1, 0(6)
  00e2c04  b 0xe2c30
  00e2c08  lfsx 4, 4, 7
  00e2c0c  lfs 5, 4(3)
  00e2c10  fmadds 1, 5, 1, 4
  00e2c14  fmuls 1, 1, 3
  00e2c18  stfs 1, 0(5)
  00e2c1c  lfs 1, 8(3)
  00e2c20  lfs 4, 12(3)
  00e2c24  fmadds 1, 4, 2, 1
  00e2c28  fmuls 1, 1, 3
  00e2c2c  stfs 1, 0(6)
  00e2c30  blr

Map_GetIconLabel:   # 0xe2c34, 0x194 bytes
  00e2c34  stdu 1, -176(1)
  00e2c38  mflr 0
  00e2c3c  std 0, 192(1)
  00e2c40  std 26, 128(1)
  00e2c44  std 30, 160(1)
  00e2c48  lis 26, 162
  00e2c4c  sldi 30, 3, 5
  00e2c50  addic 26, 26, 1216
  00e2c54  std 29, 152(1)
  00e2c58  sldi 3, 3, 3
  00e2c5c  ori 29, 4, 0
  00e2c60  addc 30, 30, 3
  00e2c64  lwz 3, 32(26)
  00e2c68  addc 3, 3, 30
  00e2c6c  clrldi 3, 3, 32
  00e2c70  lhz 3, 10(3)
  00e2c74  std 31, 168(1)
  00e2c78  std 28, 144(1)
  00e2c7c  std 27, 136(1)
  00e2c80  extsh 3, 3
  00e2c84  bl 0x7b740
  00e2c88  nop
  00e2c8c  ori 27, 3, 0
  00e2c90  addic 28, 1, 112
  00e2c94  cmpwi 27, 0
  00e2c98  bt 2, 0xe2da0
  00e2c9c  ori 31, 27, 0
  00e2ca0  lbz 3, 0(31)
  00e2ca4  cmpwi 1, 3, 37
  00e2ca8  cmpwi 3, 0
  00e2cac  cror 2, 2, 6
  00e2cb0  bt 2, 0xe2cc8
  00e2cb4  lbz 3, 0(27)
  00e2cb8  addic 27, 27, 1
  00e2cbc  stb 3, 0(29)
  00e2cc0  addic 29, 29, 1
  00e2cc4  b 0xe2c9c
  00e2cc8  cmpwi 3, 0
  00e2ccc  bf 2, 0xe2cd8
  00e2cd0  stb 3, 0(29)
  00e2cd4  b 0xe2da0
  00e2cd8  lbz 3, 1(27)
  00e2cdc  cmpwi 3, 98
  00e2ce0  bf 2, 0xe2d28
  00e2ce4  lis 3, 115
  00e2ce8  lis 4, 101
  00e2cec  addic 5, 3, 32048
  00e2cf0  lwz 3, 32(26)
  00e2cf4  addic 4, 4, 10588
  00e2cf8  addc 3, 3, 30
  00e2cfc  clrldi 3, 3, 32
  00e2d00  lhz 3, 12(3)
  00e2d04  extsh 3, 3
  00e2d08  sldi 6, 3, 3
  00e2d0c  ori 3, 28, 0
  00e2d10  addc 7, 6, 6
  00e2d14  addc 6, 6, 7
  00e2d18  lwzx 5, 5, 6
  00e2d1c  bl 0x5cd2a8
  00e2d20  nop
  00e2d24  b 0xe2d3c
  00e2d28  lis 4, 101
  00e2d2c  ori 3, 28, 0
  00e2d30  addic 4, 4, 10596
  00e2d34  bl 0x5cd2a8
  00e2d38  nop
  00e2d3c  lbz 3, 112(1)
  00e2d40  addic 27, 27, 2
  00e2d44  cmpwi 3, 0
  00e2d48  bt 2, 0xe2d6c
  00e2d4c  ori 3, 28, 0
  00e2d50  addic 28, 28, 1
  00e2d54  lbz 4, 0(3)
  00e2d58  stb 4, 0(29)
  00e2d5c  lbz 3, 1(3)
  00e2d60  addic 29, 29, 1
  00e2d64  cmpwi 3, 0
  00e2d68  bf 2, 0xe2d4c
  00e2d6c  lbz 3, 2(31)
  00e2d70  cmpwi 3, 0
  00e2d74  bt 2, 0xe2d98
  00e2d78  ori 3, 27, 0
  00e2d7c  addic 27, 27, 1
  00e2d80  lbz 4, 0(3)
  00e2d84  stb 4, 0(29)
  00e2d88  lbz 3, 1(3)
  00e2d8c  addic 29, 29, 1
  00e2d90  cmpwi 3, 0
  00e2d94  bf 2, 0xe2d78
  00e2d98  li 3, 0
  00e2d9c  stb 3, 0(29)
  00e2da0  ld 0, 192(1)
  00e2da4  mtlr 0
  00e2da8  ld 26, 128(1)
  00e2dac  ld 27, 136(1)
  00e2db0  ld 28, 144(1)
  00e2db4  ld 29, 152(1)
  00e2db8  ld 30, 160(1)
  00e2dbc  ld 31, 168(1)
  00e2dc0  addi 1, 1, 176
  00e2dc4  blr

DrawMapFrame:   # 0xe2e10, 0x1838 bytes
  00e2e10  stdu 1, -848(1)
  00e2e14  mflr 0
  00e2e18  std 0, 864(1)
  00e2e1c  stfd 20, 752(1)
  00e2e20  stfd 21, 760(1)
  00e2e24  stfd 22, 768(1)
  00e2e28  stfd 23, 776(1)
  00e2e2c  stfd 24, 784(1)
  00e2e30  stfd 25, 792(1)
  00e2e34  stfd 26, 800(1)
  00e2e38  stfd 27, 808(1)
  00e2e3c  stfd 28, 816(1)
  00e2e40  stfd 29, 824(1)
  00e2e44  stfd 30, 832(1)
  00e2e48  stfd 31, 840(1)
  00e2e4c  std 19, 648(1)
  00e2e50  addi 0, 1, 416
  00e2e54  stvx 20, 0, 0
  00e2e58  addic 0, 0, 16
  00e2e5c  stvx 21, 0, 0
  00e2e60  addic 0, 0, 16
  00e2e64  stvx 22, 0, 0
  00e2e68  addic 0, 0, 16
  00e2e6c  stvx 23, 0, 0
  00e2e70  addic 0, 0, 16
  00e2e74  stvx 24, 0, 0
  00e2e78  addic 0, 0, 16
  00e2e7c  stvx 25, 0, 0
  00e2e80  addic 0, 0, 16
  00e2e84  stvx 26, 0, 0
  00e2e88  addic 0, 0, 16
  00e2e8c  stvx 27, 0, 0
  00e2e90  addic 0, 0, 16
  00e2e94  stvx 28, 0, 0
  00e2e98  addic 0, 0, 16
  00e2e9c  stvx 29, 0, 0
  00e2ea0  addic 0, 0, 16
  00e2ea4  stvx 30, 0, 0
  00e2ea8  addic 0, 0, 16
  00e2eac  stvx 31, 0, 0
  00e2eb0  std 16, 624(1)
  00e2eb4  lis 19, 162
  00e2eb8  lis 16, 14
  00e2ebc  addic 19, 19, 1216
  00e2ec0  addi 16, 16, 11720
  00e2ec4  lwz 3, 36(19)
  00e2ec8  std 31, 744(1)
  00e2ecc  std 30, 736(1)
  00e2ed0  std 29, 728(1)
  00e2ed4  std 28, 720(1)
  00e2ed8  std 27, 712(1)
  00e2edc  std 26, 704(1)
  00e2ee0  std 25, 696(1)
  00e2ee4  std 24, 688(1)
  00e2ee8  std 23, 680(1)
  00e2eec  std 22, 672(1)
  00e2ef0  std 21, 664(1)
  00e2ef4  std 20, 656(1)
  00e2ef8  std 18, 640(1)
  00e2efc  std 17, 632(1)
  00e2f00  std 15, 616(1)
  00e2f04  std 14, 608(1)
  00e2f08  cmpwi 3, 0
  00e2f0c  bf 2, 0xe2f5c
  00e2f10  lis 4, 101
  00e2f14  li 3, 0
  00e2f18  addic 31, 4, 10604
  00e2f1c  bl 0x6d704
  00e2f20  nop
  00e2f24  lis 3, 150
  00e2f28  lis 5, -32624
  00e2f2c  addic 4, 3, 27456
  00e2f30  ori 6, 31, 0
  00e2f34  li 3, 256
  00e2f38  ori 5, 5, 37008
  00e2f3c  lhz 4, 62(4)
  00e2f40  extsh 4, 4
  00e2f44  srawi 4, 4, 1
  00e2f48  bl 0x60c64
  00e2f4c  nop
  00e2f50  bl 0x6d708
  00e2f54  nop
  00e2f58  b 0xe4560
  00e2f5c  lwz 3, 552(19)
  00e2f60  cmpwi 3, 0
  00e2f64  bt 0, 0xe4560
  00e2f68  li 3, 0
  00e2f6c  bl 0x6d704
  00e2f70  nop
  00e2f74  lwz 4, 552(19)
  00e2f78  li 23, 180
  00e2f7c  slwi 3, 4, 2
  00e2f80  extsw 3, 3
  00e2f84  addc 3, 19, 3
  00e2f88  vspltisw 8, 0
  00e2f8c  li 31, 4
  00e2f90  vspltisw 9, -1
  00e2f94  li 9, 0
  00e2f98  vspltisw 10, 1
  00e2f9c  lwz 5, 260(3)
  00e2fa0  srawi 5, 5, 15
  00e2fa4  extsw 5, 5
  00e2fa8  std 5, 376(1)
  00e2fac  li 5, 260
  00e2fb0  lfs 1, 180(3)
  00e2fb4  lwz 6, 340(3)
  00e2fb8  addi 7, 5, 16
  00e2fbc  lvlx 2, 5, 3
  00e2fc0  li 5, 340
  00e2fc4  lvrx 3, 7, 3
  00e2fc8  lfd 2, 376(1)
  00e2fcc  addi 7, 5, 16
  00e2fd0  fcfid 2, 2
  00e2fd4  lvlx 4, 5, 3
  00e2fd8  addi 5, 23, 16
  00e2fdc  vor 2, 2, 3
  00e2fe0  srawi 6, 6, 15
  00e2fe4  lvrx 5, 7, 3
  00e2fe8  vspltisw 3, 15
  00e2fec  vor 4, 4, 5
  00e2ff0  lis 7, 151
  00e2ff4  lvlx 5, 23, 3
  00e2ff8  lvrx 6, 5, 3
  00e2ffc  addic 3, 7, -16268
  00e3000  vsraw 2, 2, 3
  00e3004  frsp 2, 2
  00e3008  vsraw 3, 4, 3
  00e300c  vor 4, 5, 6
  00e3010  li 5, 4
  00e3014  vspltisw 6, -8
  00e3018  li 7, 8
  00e301c  vcfsx 2, 2, 0
  00e3020  lvlx 5, 31, 3
  00e3024  vsrw 5, 5, 6
  00e3028  vspltisw 6, -1
  00e302c  fmuls 2, 1, 2
  00e3030  vcmpequw 5, 5, 8
  00e3034  vslw 6, 6, 6
  00e3038  vcfsx 3, 3, 0
  00e303c  vsel 5, 9, 10, 5
  00e3040  li 10, 1
  00e3044  li 11, -1
  00e3048  vmaddfp 2, 4, 2, 6
  00e304c  vspltisw 6, -1
  00e3050  li 14, 4096
  00e3054  li 15, 2048
  00e3058  fctiwz 2, 2
  00e305c  vslw 6, 6, 6
  00e3060  extsw 4, 4
  00e3064  vctsxs 2, 2, 0
  00e3068  stfd 2, 376(1)
  00e306c  lfs 2, 4(16)
  00e3070  lwz 8, 380(1)
  00e3074  fmuls 2, 1, 2
  00e3078  lvlx 7, 5, 16
  00e307c  extsw 5, 6
  00e3080  lbz 6, 4(3)
  00e3084  vspltw 7, 7, 0
  00e3088  subc 6, 9, 6
  00e308c  li 9, 1
  00e3090  cntlzw 6, 6
  00e3094  vmaddfp 6, 4, 7, 6
  00e3098  vspltisw 7, -16
  00e309c  fctiwz 2, 2
  00e30a0  sldi 6, 6, 58
  00e30a4  sradi 6, 6, 63
  00e30a8  vrlw 11, 5, 7
  00e30ac  vctsxs 27, 6, 0
  00e30b0  vspltisw 6, -1
  00e30b4  stfd 2, 376(1)
  00e30b8  lwz 12, 380(1)
  00e30bc  lvlx 9, 7, 16
  00e30c0  std 5, 376(1)
  00e30c4  std 9, 344(1)
  00e30c8  subc 5, 10, 11
  00e30cc  std 3, 368(1)
  00e30d0  lvlx 10, 0, 16
  00e30d4  lfd 2, 376(1)
  00e30d8  and 5, 6, 5
  00e30dc  vspltw 31, 10, 0
  00e30e0  fcfid 2, 2
  00e30e4  vmulouh 10, 2, 5
  00e30e8  addc 5, 11, 5
  00e30ec  vmsumshm 2, 2, 11, 8
  00e30f0  mullw 3, 8, 5
  00e30f4  frsp 2, 2
  00e30f8  vslw 6, 6, 6
  00e30fc  vslw 2, 2, 7
  00e3100  subc 14, 14, 3
  00e3104  vmsumshm 8, 27, 11, 8
  00e3108  vmulouh 5, 27, 5
  00e310c  vmaddfp 3, 4, 3, 6
  00e3110  vspltw 29, 9, 0
  00e3114  vadduwm 2, 2, 10
  00e3118  mullw 3, 12, 5
  00e311c  fmuls 1, 1, 2
  00e3120  vsubuwm 31, 31, 2
  00e3124  vslw 2, 8, 7
  00e3128  addc 18, 14, 3
  00e312c  lis 3, 0
  00e3130  ori 3, 3, 59801
  00e3134  vadduwm 26, 2, 5
  00e3138  vctsxs 2, 3, 0
  00e313c  vadduwm 26, 31, 26
  00e3140  fctiwz 1, 1
  00e3144  vsubuwm 29, 29, 2
  00e3148  stfd 1, 376(1)
  00e314c  lwz 5, 380(1)
  00e3150  vadduwm 27, 29, 27
  00e3154  subc 15, 15, 5
  00e3158  addc 22, 15, 12
  00e315c  bl 0xca3e4
  00e3160  nop
  00e3164  lis 25, 162
  00e3168  lis 24, 161
  00e316c  addic 25, 25, -16448
  00e3170  sldi 3, 3, 2
  00e3174  addic 24, 24, 24396
  00e3178  extsw 3, 3
  00e317c  extsw 4, 14
  00e3180  lwz 5, 32(25)
  00e3184  lwz 6, 28(24)
  00e3188  std 4, 376(1)
  00e318c  lwzx 3, 5, 3
  00e3190  sldi 4, 3, 5
  00e3194  sldi 3, 3, 2
  00e3198  addc 3, 4, 3
  00e319c  addc 3, 6, 3
  00e31a0  clrldi 3, 3, 32
  00e31a4  lis 4, 1
  00e31a8  ori 4, 4, 257
  00e31ac  lwz 5, 0(3)
  00e31b0  lwz 6, 4(3)
  00e31b4  lwz 7, 8(3)
  00e31b8  lwz 8, 12(3)
  00e31bc  stw 5, 152(1)
  00e31c0  stw 6, 156(1)
  00e31c4  stw 7, 160(1)
  00e31c8  stw 8, 164(1)
  00e31cc  lwz 5, 16(3)
  00e31d0  lwz 6, 20(3)
  00e31d4  lwz 7, 24(3)
  00e31d8  lwz 8, 28(3)
  00e31dc  stw 5, 168(1)
  00e31e0  stw 6, 172(1)
  00e31e4  stw 7, 176(1)
  00e31e8  stw 8, 180(1)
  00e31ec  lfd 1, 376(1)
  00e31f0  lwz 3, 32(3)
  00e31f4  fcfid 26, 1
  00e31f8  stw 3, 184(1)
  00e31fc  stw 4, 160(1)
  00e3200  li 3, 12
  00e3204  lfs 1, 12(16)
  00e3208  extsw 4, 15
  00e320c  lvlx 2, 3, 16
  00e3210  frsp 26, 26
  00e3214  extsw 5, 22
  00e3218  fmuls 2, 26, 1
  00e321c  li 20, 0
  00e3220  fctiwz 3, 2
  00e3224  fctidz 2, 2
  00e3228  vspltisw 6, -1
  00e322c  vcfsx 5, 26, 0
  00e3230  stfd 3, 376(1)
  00e3234  lwz 3, 380(1)
  00e3238  std 4, 376(1)
  00e323c  extsw 4, 18
  00e3240  fcfid 2, 2
  00e3244  vcfsx 30, 31, 0
  00e3248  vspltisw 3, -1
  00e324c  vcfsx 28, 29, 0
  00e3250  vspltw 2, 2, 0
  00e3254  vcfsx 7, 27, 0
  00e3258  vspltisw 4, -1
  00e325c  vslw 6, 6, 6
  00e3260  vspltisw 8, -1
  00e3264  vslw 3, 3, 3
  00e3268  vslw 4, 4, 4
  00e326c  vmaddfp 5, 5, 2, 6
  00e3270  frsp 2, 2
  00e3274  lfd 3, 376(1)
  00e3278  fcfid 25, 3
  00e327c  frsp 25, 25
  00e3280  vslw 6, 8, 8
  00e3284  vmaddfp 3, 30, 2, 3
  00e3288  fmuls 3, 25, 1
  00e328c  vmaddfp 4, 28, 2, 4
  00e3290  fctiwz 4, 3
  00e3294  fctidz 3, 3
  00e3298  vmaddfp 2, 7, 2, 6
  00e329c  vctsxs 3, 3, 0
  00e32a0  stfd 4, 376(1)
  00e32a4  lwz 6, 380(1)
  00e32a8  std 4, 376(1)
  00e32ac  fcfid 3, 3
  00e32b0  vctsxs 5, 5, 0
  00e32b4  vctsxs 4, 4, 0
  00e32b8  vctsxs 2, 2, 0
  00e32bc  vcfsx 25, 3, 0
  00e32c0  frsp 3, 3
  00e32c4  lfd 4, 376(1)
  00e32c8  fcfid 4, 4
  00e32cc  vcfsx 24, 5, 0
  00e32d0  vcfsx 23, 4, 0
  00e32d4  frsp 4, 4
  00e32d8  vcfsx 22, 2, 0
  00e32dc  fmuls 4, 4, 1
  00e32e0  fctiwz 5, 4
  00e32e4  fctidz 4, 4
  00e32e8  stfd 5, 376(1)
  00e32ec  lwz 4, 380(1)
  00e32f0  std 5, 376(1)
  00e32f4  subc 3, 4, 3
  00e32f8  extsw 3, 3
  00e32fc  li 4, 1024
  00e3300  fcfid 4, 4
  00e3304  extsw 4, 4
  00e3308  frsp 4, 4
  00e330c  lfd 5, 376(1)
  00e3310  fcfid 5, 5
  00e3314  frsp 5, 5
  00e3318  fmuls 1, 5, 1
  00e331c  fctiwz 5, 1
  00e3320  fctidz 1, 1
  00e3324  stfd 5, 376(1)
  00e3328  lwz 5, 380(1)
  00e332c  std 3, 376(1)
  00e3330  subc 3, 5, 6
  00e3334  extsw 5, 20
  00e3338  fcfid 1, 1
  00e333c  extsw 3, 3
  00e3340  frsp 1, 1
  00e3344  lfd 5, 376(1)
  00e3348  std 3, 376(1)
  00e334c  fcfid 5, 5
  00e3350  addic 3, 1, 152
  00e3354  frsp 5, 5
  00e3358  lfd 6, 376(1)
  00e335c  std 5, 376(1)
  00e3360  lfs 7, 16(16)
  00e3364  lfd 8, 376(1)
  00e3368  fcfid 6, 6
  00e336c  std 4, 376(1)
  00e3370  fsubs 2, 2, 5
  00e3374  fcfid 8, 8
  00e3378  fadds 4, 4, 5
  00e337c  li 4, 128
  00e3380  frsp 6, 6
  00e3384  fctidz 2, 2
  00e3388  frsp 5, 8
  00e338c  fctidz 4, 4
  00e3390  fsubs 3, 3, 6
  00e3394  fadds 1, 1, 6
  00e3398  lfd 6, 376(1)
  00e339c  fsubs 5, 5, 7
  00e33a0  fcfid 6, 6
  00e33a4  fcfid 2, 2
  00e33a8  fcfid 4, 4
  00e33ac  std 4, 120(1)
  00e33b0  fctidz 3, 3
  00e33b4  fctidz 1, 1
  00e33b8  fctidz 5, 5
  00e33bc  frsp 6, 6
  00e33c0  fcfid 3, 3
  00e33c4  fcfid 5, 5
  00e33c8  fadds 6, 6, 7
  00e33cc  fcfid 7, 1
  00e33d0  frsp 1, 2
  00e33d4  frsp 2, 3
  00e33d8  frsp 3, 4
  00e33dc  frsp 5, 5
  00e33e0  fctidz 6, 6
  00e33e4  frsp 4, 7
  00e33e8  fcfid 7, 6
  00e33ec  fmr 6, 5
  00e33f0  frsp 7, 7
  00e33f4  fmr 8, 7
  00e33f8  bl 0xd6f5c
  00e33fc  nop
  00e3400  lis 3, 161
  00e3404  lis 4, 144
  00e3408  addic 3, 3, 2264
  00e340c  lis 5, 144
  00e3410  addic 30, 4, -23532
  00e3414  lwz 6, 64(3)
  00e3418  lwz 29, 11932(5)
  00e341c  lwz 4, 40(30)
  00e3420  li 5, 14
  00e3424  ori 3, 29, 0
  00e3428  lwz 7, 8(6)
  00e342c  addc 6, 6, 7
  00e3430  clrldi 28, 6, 32
  00e3434  bl 0x4d82b8
  00e3438  nop
  00e343c  lwz 3, 40(30)
  00e3440  addic 5, 19, 808
  00e3444  li 4, 0
  00e3448  bl 0x4d6d00
  00e344c  nop
  00e3450  lwz 3, 40(30)
  00e3454  addic 5, 28, 108
  00e3458  li 4, 1
  00e345c  bl 0x4d6d00
  00e3460  nop
  00e3464  lwz 3, 40(30)
  00e3468  addic 5, 28, 144
  00e346c  li 4, 2
  00e3470  bl 0x4d6d00
  00e3474  nop
  00e3478  lwz 3, 40(30)
  00e347c  bl 0x4d6948
  00e3480  nop
  00e3484  lwz 3, 40(30)
  00e3488  vspltw 2, 25, 0
  00e348c  vspltw 3, 23, 0
  00e3490  lis 28, -32640
  00e3494  lwz 4, 8(3)
  00e3498  addic 5, 4, 8
  00e349c  vspltw 4, 22, 0
  00e34a0  ori 28, 28, 32896
  00e34a4  stw 5, 8(3)
  00e34a8  lwz 3, 40(30)
  00e34ac  li 5, 8
  00e34b0  lis 27, 4
  00e34b4  lwz 6, 8(3)
  00e34b8  addic 7, 6, 24
  00e34bc  ori 27, 27, 6152
  00e34c0  stw 7, 8(3)
  00e34c4  lwz 3, 40(30)
  00e34c8  lwz 7, 8(3)
  00e34cc  addic 8, 7, 12
  00e34d0  stw 8, 8(3)
  00e34d4  lwz 3, 40(30)
  00e34d8  stw 20, 4(7)
  00e34dc  stw 20, 8(7)
  00e34e0  lwz 8, 8(3)
  00e34e4  addic 9, 8, 12
  00e34e8  stvewx 2, 31, 8
  00e34ec  stvewx 3, 5, 8
  00e34f0  stw 9, 8(3)
  00e34f4  lwz 3, 40(30)
  00e34f8  lis 9, 17536
  00e34fc  lwz 10, 8(3)
  00e3500  addic 11, 10, 12
  00e3504  stw 11, 8(3)
  00e3508  lwz 3, 40(30)
  00e350c  stw 20, 4(10)
  00e3510  stw 9, 8(10)
  00e3514  lwz 11, 8(3)
  00e3518  addic 12, 11, 12
  00e351c  stvewx 2, 31, 11
  00e3520  stvewx 4, 5, 11
  00e3524  stw 12, 8(3)
  00e3528  lwz 12, 40(30)
  00e352c  lis 3, 4
  00e3530  vspltw 2, 24, 0
  00e3534  ori 3, 3, 6472
  00e3538  lwz 26, 8(12)
  00e353c  addic 21, 26, 12
  00e3540  stw 3, 0(4)
  00e3544  lis 3, 16396
  00e3548  stw 28, 4(4)
  00e354c  ori 3, 3, 5908
  00e3550  stw 21, 8(12)
  00e3554  lwz 4, 40(30)
  00e3558  lis 12, 8
  00e355c  stw 9, 4(26)
  00e3560  stw 9, 8(26)
  00e3564  stw 3, 0(6)
  00e3568  stw 20, 4(6)
  00e356c  ori 3, 12, 6280
  00e3570  stw 20, 8(6)
  00e3574  lis 12, 8
  00e3578  stw 20, 12(6)
  00e357c  stw 27, 16(6)
  00e3580  ori 12, 12, 6272
  00e3584  lwz 28, 8(4)
  00e3588  stw 5, 20(6)
  00e358c  stw 3, 0(7)
  00e3590  addic 6, 28, 12
  00e3594  stw 12, 0(8)
  00e3598  stvewx 2, 31, 28
  00e359c  stvewx 4, 5, 28
  00e35a0  stw 6, 8(4)
  00e35a4  lwz 4, 40(30)
  00e35a8  stw 3, 0(10)
  00e35ac  stw 12, 0(11)
  00e35b0  lwz 6, 8(4)
  00e35b4  stw 3, 0(26)
  00e35b8  addic 7, 6, 12
  00e35bc  stw 12, 0(28)
  00e35c0  stw 7, 8(4)
  00e35c4  lwz 4, 40(30)
  00e35c8  stw 9, 4(6)
  00e35cc  stw 20, 8(6)
  00e35d0  lwz 7, 8(4)
  00e35d4  stw 3, 0(6)
  00e35d8  addic 8, 7, 12
  00e35dc  ori 3, 29, 0
  00e35e0  stvewx 2, 31, 7
  00e35e4  stvewx 3, 5, 7
  00e35e8  stw 8, 8(4)
  00e35ec  lwz 4, 40(30)
  00e35f0  li 5, 12
  00e35f4  stw 12, 0(7)
  00e35f8  lwz 6, 8(4)
  00e35fc  addic 7, 6, 8
  00e3600  stw 27, 0(6)
  00e3604  stw 7, 8(4)
  00e3608  lwz 4, 40(30)
  00e360c  stw 20, 4(6)
  00e3610  bl 0x4d82b8
  00e3614  nop
  00e3618  li 3, 1
  00e361c  li 4, 5
  00e3620  li 8, 0
  00e3624  li 10, 0
  00e3628  li 5, 96
  00e362c  li 6, 3
  00e3630  li 7, 0
  00e3634  li 9, 0
  00e3638  bl 0x502f7c
  00e363c  nop
  00e3640  ori 4, 3, 0
  00e3644  li 3, 22
  00e3648  bl 0x174f80
  00e364c  nop
  00e3650  lwz 3, 44(19)
  00e3654  cmpwi 3, 0
  00e3658  bt 2, 0xe374c
  00e365c  lwz 3, 8(19)
  00e3660  cmpwi 3, 0
  00e3664  bt 2, 0xe374c
  00e3668  ori 31, 20, 0
  00e366c  addic 28, 19, 48
  00e3670  subc 30, 18, 14
  00e3674  subc 29, 22, 15
  00e3678  ori 27, 19, 0
  00e367c  lwz 3, 0(28)
  00e3680  cmpwi 3, 0
  00e3684  bt 0, 0xe3738
  00e3688  std 18, 392(1)
  00e368c  lwz 3, 48(27)
  00e3690  li 7, 0
  00e3694  srawi 4, 3, 4
  00e3698  addze 4, 4
  00e369c  srawi 5, 3, 4
  00e36a0  sldi 4, 4, 4
  00e36a4  addze 5, 5
  00e36a8  subc 3, 3, 4
  00e36ac  mullw 5, 5, 29
  00e36b0  mullw 3, 3, 30
  00e36b4  srawi 4, 5, 4
  00e36b8  addze 4, 4
  00e36bc  srawi 6, 3, 4
  00e36c0  addze 6, 6
  00e36c4  addc 3, 3, 30
  00e36c8  addc 5, 5, 29
  00e36cc  srawi 3, 3, 4
  00e36d0  addze 3, 3
  00e36d4  srawi 5, 5, 4
  00e36d8  addze 5, 5
  00e36dc  addc 4, 4, 15
  00e36e0  addc 5, 5, 15
  00e36e4  extsw 21, 4
  00e36e8  addc 4, 3, 14
  00e36ec  addc 6, 6, 14
  00e36f0  extsw 17, 5
  00e36f4  li 3, 0
  00e36f8  extsw 18, 4
  00e36fc  extsw 26, 6
  00e3700  li 5, 0
  00e3704  li 4, 0
  00e3708  li 6, 32
  00e370c  bl 0x502f74
  00e3710  nop
  00e3714  ori 7, 3, 0
  00e3718  ori 5, 18, 0
  00e371c  ori 3, 26, 0
  00e3720  ori 4, 21, 0
  00e3724  ori 6, 17, 0
  00e3728  li 8, 1
  00e372c  bl 0xca72c
  00e3730  nop
  00e3734  ld 18, 392(1)
  00e3738  addic 31, 31, 1
  00e373c  addic 28, 28, 16
  00e3740  cmpwi 31, 8
  00e3744  addic 27, 27, 16
  00e3748  bt 0, 0xe367c
  00e374c  lwz 28, 32(19)
  00e3750  std 18, 360(1)
  00e3754  ori 3, 28, 0
  00e3758  std 22, 352(1)
  00e375c  ori 31, 3, 0
  00e3760  ori 4, 31, 0
  00e3764  cmpwi 4, 0
  00e3768  bt 2, 0xe423c
  00e376c  li 7, 20
  00e3770  lwz 8, 552(19)
  00e3774  lfs 1, 20(16)
  00e3778  li 6, 24
  00e377c  slwi 8, 8, 2
  00e3780  addi 5, 23, 16
  00e3784  extsw 8, 8
  00e3788  lvlx 2, 7, 16
  00e378c  addc 7, 19, 8
  00e3790  lfs 2, 24(16)
  00e3794  lvlx 3, 6, 16
  00e3798  lis 21, 144
  00e379c  vspltw 2, 2, 0
  00e37a0  vspltw 3, 3, 0
  00e37a4  lvlx 4, 23, 7
  00e37a8  lvrx 5, 5, 7
  00e37ac  lfs 3, 180(7)
  00e37b0  li 5, 28
  00e37b4  vor 4, 4, 5
  00e37b8  fmadds 1, 3, 1, 2
  00e37bc  vspltisw 5, -1
  00e37c0  lfs 31, 28(16)
  00e37c4  vmaddfp 23, 4, 2, 3
  00e37c8  lvlx 2, 5, 16
  00e37cc  lhz 5, 4(28)
  00e37d0  vspltw 2, 2, 0
  00e37d4  vslw 3, 5, 5
  00e37d8  rlwinm 5, 5, 0, 29, 29
  00e37dc  lwz 21, 11976(21)
  00e37e0  cmpwi 5, 0
  00e37e4  fmuls 31, 1, 31
  00e37e8  vmaddfp 23, 23, 2, 3
  00e37ec  bf 2, 0xe39ec
  00e37f0  li 3, 32
  00e37f4  li 5, 36
  00e37f8  vsubuwm 25, 26, 31
  00e37fc  vsubuwm 24, 27, 29
  00e3800  ori 30, 21, 0
  00e3804  ori 31, 20, 0
  00e3808  addic 26, 30, 8
  00e380c  lvlx 21, 3, 16
  00e3810  addic 27, 30, 4
  00e3814  lvlx 20, 5, 16
  00e3818  addic 29, 30, 12
  00e381c  vcfsx 25, 25, 0
  00e3820  vspltw 21, 21, 0
  00e3824  vcfsx 24, 24, 0
  00e3828  vspltw 20, 20, 0
  00e382c  addc 4, 4, 31
  00e3830  ori 3, 28, 0
  00e3834  clrldi 4, 4, 32
  00e3838  lwz 5, 36(4)
  00e383c  cmpwi 5, 0
  00e3840  bt 2, 0xe39b8
  00e3844  lhz 5, 6(4)
  00e3848  ori 3, 28, 0
  00e384c  cmpwi 5, 0
  00e3850  bt 2, 0xe39b8
  00e3854  lhz 6, 4(4)
  00e3858  ori 3, 28, 0
  00e385c  clrlwi 7, 6, 31
  00e3860  cmpwi 7, 0
  00e3864  bf 2, 0xe39b8
  00e3868  li 3, 40
  00e386c  rlwinm 6, 6, 0, 24, 24
  00e3870  cmpwi 6, 0
  00e3874  lvlx 22, 3, 16
  00e3878  vspltw 22, 22, 0
  00e387c  bt 2, 0xe388c
  00e3880  li 3, 44
  00e3884  lvlx 22, 3, 16
  00e3888  vspltw 22, 22, 0
  00e388c  ori 3, 5, 0
  00e3890  lhz 4, 8(4)
  00e3894  extsh 4, 4
  00e3898  bl 0xca3e4
  00e389c  nop
  00e38a0  sldi 3, 3, 2
  00e38a4  lwz 4, 32(25)
  00e38a8  li 6, 24
  00e38ac  extsw 3, 3
  00e38b0  lwz 5, 28(24)
  00e38b4  lwz 7, 32(19)
  00e38b8  addi 8, 6, 16
  00e38bc  vsldoi 6, 23, 23, 0
  00e38c0  lwzx 3, 4, 3
  00e38c4  addi 4, 6, 16
  00e38c8  sldi 9, 3, 5
  00e38cc  sldi 3, 3, 2
  00e38d0  addc 3, 9, 3
  00e38d4  li 9, 28
  00e38d8  addc 3, 5, 3
  00e38dc  addc 5, 7, 31
  00e38e0  clrldi 3, 3, 32
  00e38e4  clrldi 5, 5, 32
  00e38e8  addi 7, 9, 16
  00e38ec  lvlx 2, 6, 3
  00e38f0  lvrx 3, 4, 3
  00e38f4  lvlx 4, 6, 5
  00e38f8  vor 2, 2, 3
  00e38fc  lvrx 3, 8, 5
  00e3900  lvlx 5, 9, 5
  00e3904  lvrx 7, 7, 5
  00e3908  lhz 3, 4(5)
  00e390c  vor 3, 4, 3
  00e3910  vor 5, 5, 7
  00e3914  rlwinm 3, 3, 0, 22, 22
  00e3918  vand 4, 2, 21
  00e391c  vsrw 2, 2, 20
  00e3920  cmpwi 3, 0
  00e3924  vmaddfp 3, 3, 25, 30
  00e3928  vmaddfp 5, 5, 24, 28
  00e392c  bt 2, 0xe3950
  00e3930  lwz 4, 552(19)
  00e3934  addi 3, 23, 16
  00e3938  slwi 4, 4, 2
  00e393c  extsw 4, 4
  00e3940  addc 4, 4, 19
  00e3944  lvlx 6, 23, 4
  00e3948  lvrx 7, 3, 4
  00e394c  vor 6, 6, 7
  00e3950  vspltisw 7, -1
  00e3954  vspltw 6, 6, 0
  00e3958  vcfux 2, 2, 0
  00e395c  vcfux 4, 4, 0
  00e3960  vslw 7, 7, 7
  00e3964  lwz 28, 32(19)
  00e3968  vmaddfp 6, 6, 22, 7
  00e396c  ori 3, 28, 0
  00e3970  vnmsubfp 3, 6, 2, 3
  00e3974  vnmsubfp 5, 6, 4, 5
  00e3978  vctsxs 3, 3, 0
  00e397c  vctsxs 5, 5, 0
  00e3980  vcfsx 7, 3, 0
  00e3984  vcfsx 8, 5, 0
  00e3988  vspltw 3, 3, 0
  00e398c  vspltw 5, 5, 0
  00e3990  stvewx 3, 0, 30
  00e3994  vmaddfp 2, 6, 2, 7
  00e3998  vmaddfp 4, 6, 4, 8
  00e399c  vctsxs 2, 2, 0
  00e39a0  vctsxs 3, 4, 0
  00e39a4  vspltw 2, 2, 0
  00e39a8  vspltw 3, 3, 0
  00e39ac  stvewx 2, 0, 26
  00e39b0  stvewx 5, 0, 27
  00e39b4  stvewx 3, 0, 29
  00e39b8  ori 4, 3, 0
  00e39bc  addic 31, 31, 40
  00e39c0  addic 26, 26, 16
  00e39c4  addc 5, 4, 31
  00e39c8  addic 27, 27, 16
  00e39cc  clrldi 5, 5, 32
  00e39d0  addic 29, 29, 16
  00e39d4  addic 30, 30, 16
  00e39d8  lhz 5, 4(5)
  00e39dc  rlwinm 5, 5, 0, 29, 29
  00e39e0  cmpwi 5, 0
  00e39e4  bt 2, 0xe382c
  00e39e8  clrldi 31, 3, 32
  00e39ec  ori 5, 3, 0
  00e39f0  ori 4, 31, 0
  00e39f4  ori 9, 5, 0
  00e39f8  lhz 6, 44(5)
  00e39fc  std 18, 360(1)
  00e3a00  rlwinm 6, 6, 0, 29, 29
  00e3a04  std 22, 352(1)
  00e3a08  cmpwi 6, 0
  00e3a0c  bf 2, 0xe3c88
  00e3a10  ori 6, 3, 0
  00e3a14  ori 22, 20, 0
  00e3a18  ori 17, 21, 0
  00e3a1c  ori 18, 22, 0
  00e3a20  ori 5, 6, 0
  00e3a24  addc 7, 6, 18
  00e3a28  ori 3, 31, 0
  00e3a2c  clrldi 7, 7, 32
  00e3a30  ori 4, 5, 0
  00e3a34  lwz 8, 36(7)
  00e3a38  cmpwi 8, 0
  00e3a3c  bt 2, 0xe3c58
  00e3a40  lhz 8, 6(7)
  00e3a44  ori 4, 5, 0
  00e3a48  cmpwi 8, 0
  00e3a4c  bt 2, 0xe3c58
  00e3a50  lhz 7, 4(7)
  00e3a54  ori 4, 5, 0
  00e3a58  clrlwi 7, 7, 30
  00e3a5c  cmpwi 7, 0
  00e3a60  bf 2, 0xe3c58
  00e3a64  addic 29, 18, 40
  00e3a68  ori 12, 6, 0
  00e3a6c  ori 4, 5, 0
  00e3a70  addc 6, 12, 29
  00e3a74  addic 23, 22, 16
  00e3a78  clrldi 6, 6, 32
  00e3a7c  lhz 6, 4(6)
  00e3a80  rlwinm 6, 6, 0, 29, 29
  00e3a84  cmpwi 6, 0
  00e3a88  bf 2, 0xe3c58
  00e3a8c  addic 3, 21, 8
  00e3a90  addic 4, 21, 4
  00e3a94  addc 24, 22, 3
  00e3a98  addic 3, 21, 12
  00e3a9c  addc 25, 22, 4
  00e3aa0  addc 26, 22, 3
  00e3aa4  addic 11, 17, 16
  00e3aa8  clrldi 24, 24, 32
  00e3aac  clrldi 25, 25, 32
  00e3ab0  clrldi 26, 26, 32
  00e3ab4  lwz 8, 8(11)
  00e3ab8  lwzx 27, 21, 22
  00e3abc  subc 8, 8, 27
  00e3ac0  cmpwi 8, 0
  00e3ac4  bf 1, 0xe3c1c
  00e3ac8  extsw 30, 23
  00e3acc  lwz 10, 0(24)
  00e3ad0  lwzx 3, 21, 30
  00e3ad4  subc 10, 10, 3
  00e3ad8  cmpwi 10, 0
  00e3adc  cmpw 7, 8, 10
  00e3ae0  bf 1, 0xe3c1c
  00e3ae4  lwz 7, 12(11)
  00e3ae8  lwz 3, 0(25)
  00e3aec  subc 7, 7, 3
  00e3af0  cmpwi 7, 0
  00e3af4  cmpw 6, 8, 7
  00e3af8  bf 1, 0xe3c1c
  00e3afc  lwz 9, 0(26)
  00e3b00  lwz 3, 4(11)
  00e3b04  subc 9, 9, 3
  00e3b08  cmpwi 9, 0
  00e3b0c  cmpw 1, 8, 9
  00e3b10  bf 1, 0xe3c1c
  00e3b14  addc 3, 12, 29
  00e3b18  clrldi 3, 3, 32
  00e3b1c  lwz 3, 36(3)
  00e3b20  cmpwi 3, 0
  00e3b24  bt 2, 0xe3c1c
  00e3b28  addc 6, 31, 29
  00e3b2c  clrldi 6, 6, 32
  00e3b30  lhz 3, 6(6)
  00e3b34  cmpwi 3, 0
  00e3b38  bt 2, 0xe3c1c
  00e3b3c  lhz 3, 4(6)
  00e3b40  clrlwi 3, 3, 30
  00e3b44  cmpwi 3, 0
  00e3b48  bf 2, 0xe3c1c
  00e3b4c  bt 29, 0xe3b6c
  00e3b50  bt 25, 0xe3b6c
  00e3b54  bt 5, 0xe3b6c
  00e3b58  srawi 9, 8, 1
  00e3b5c  ori 6, 20, 0
  00e3b60  subc 7, 9, 8
  00e3b64  ori 8, 6, 0
  00e3b68  b 0xe3bbc
  00e3b6c  cmpw 7, 10
  00e3b70  bt 0, 0xe3b90
  00e3b74  cmpw 10, 9
  00e3b78  bt 1, 0xe3b90
  00e3b7c  srawi 7, 10, 1
  00e3b80  ori 6, 20, 0
  00e3b84  subc 9, 7, 10
  00e3b88  ori 8, 6, 0
  00e3b8c  b 0xe3bbc
  00e3b90  cmpw 7, 9
  00e3b94  bt 1, 0xe3bac
  00e3b98  srawi 8, 7, 1
  00e3b9c  subc 6, 8, 7
  00e3ba0  ori 7, 20, 0
  00e3ba4  ori 9, 7, 0
  00e3ba8  b 0xe3bbc
  00e3bac  srawi 6, 9, 1
  00e3bb0  ori 7, 20, 0
  00e3bb4  subc 8, 6, 9
  00e3bb8  ori 9, 7, 0
  00e3bbc  addc 3, 27, 9
  00e3bc0  stwx 3, 21, 22
  00e3bc4  lwz 3, 0(24)
  00e3bc8  addc 3, 3, 9
  00e3bcc  stw 3, 0(24)
  00e3bd0  lwz 3, 0(25)
  00e3bd4  addc 3, 3, 8
  00e3bd8  stw 3, 0(25)
  00e3bdc  lwz 3, 0(26)
  00e3be0  addc 3, 3, 8
  00e3be4  stw 3, 0(26)
  00e3be8  lwzx 3, 21, 30
  00e3bec  lwz 28, 32(19)
  00e3bf0  addc 3, 3, 7
  00e3bf4  stwx 3, 21, 30
  00e3bf8  lwz 3, 8(11)
  00e3bfc  lwz 4, 4(11)
  00e3c00  addc 3, 3, 7
  00e3c04  lwz 5, 12(11)
  00e3c08  addc 4, 4, 6
  00e3c0c  addc 5, 5, 6
  00e3c10  stw 3, 8(11)
  00e3c14  stw 4, 4(11)
  00e3c18  stw 5, 12(11)
  00e3c1c  clrldi 28, 28, 32
  00e3c20  addic 29, 29, 40
  00e3c24  ori 5, 28, 0
  00e3c28  addic 11, 11, 16
  00e3c2c  ori 4, 5, 0
  00e3c30  addic 23, 23, 16
  00e3c34  ori 3, 4, 0
  00e3c38  ori 31, 3, 0
  00e3c3c  ori 12, 31, 0
  00e3c40  addc 6, 12, 29
  00e3c44  clrldi 6, 6, 32
  00e3c48  lhz 6, 4(6)
  00e3c4c  rlwinm 6, 6, 0, 29, 29
  00e3c50  cmpwi 6, 0
  00e3c54  bt 2, 0xe3ab4
  00e3c58  ori 31, 3, 0
  00e3c5c  addic 18, 18, 40
  00e3c60  ori 9, 31, 0
  00e3c64  addic 17, 17, 16
  00e3c68  ori 6, 9, 0
  00e3c6c  addic 22, 22, 16
  00e3c70  addc 3, 6, 18
  00e3c74  clrldi 3, 3, 32
  00e3c78  lhz 3, 44(3)
  00e3c7c  rlwinm 3, 3, 0, 29, 29
  00e3c80  cmpwi 3, 0
  00e3c84  bt 2, 0xe3a24
  00e3c88  lhz 3, 4(9)
  00e3c8c  rlwinm 3, 3, 0, 29, 29
  00e3c90  cmpwi 3, 0
  00e3c94  bf 2, 0xe423c
  00e3c98  lis 6, -32513
  00e3c9c  lfs 24, 48(16)
  00e3ca0  lis 3, -32768
  00e3ca4  lfs 23, 52(16)
  00e3ca8  lis 23, 151
  00e3cac  ori 6, 6, 43144
  00e3cb0  lfs 22, 56(16)
  00e3cb4  lfs 21, 40(16)
  00e3cb8  ori 28, 20, 0
  00e3cbc  addic 24, 21, 4
  00e3cc0  ld 17, 344(1)
  00e3cc4  addic 25, 21, 8
  00e3cc8  addic 26, 21, 12
  00e3ccc  clrldi 18, 3, 32
  00e3cd0  addic 23, 23, -15784
  00e3cd4  clrldi 22, 6, 32
  00e3cd8  ori 8, 4, 0
  00e3cdc  ori 10, 5, 0
  00e3ce0  sldi 31, 28, 5
  00e3ce4  sldi 3, 28, 3
  00e3ce8  addc 31, 31, 3
  00e3cec  addc 3, 9, 31
  00e3cf0  ori 9, 8, 0
  00e3cf4  clrldi 3, 3, 32
  00e3cf8  lwz 3, 36(3)
  00e3cfc  cmpwi 3, 0
  00e3d00  bt 2, 0xe420c
  00e3d04  addc 29, 8, 31
  00e3d08  clrldi 29, 29, 32
  00e3d0c  lhz 6, 4(29)
  00e3d10  clrlwi 3, 6, 31
  00e3d14  cmpwi 3, 0
  00e3d18  bf 2, 0xe420c
  00e3d1c  lhz 27, 6(29)
  00e3d20  lhz 29, 8(29)
  00e3d24  cmpwi 27, 0
  00e3d28  extsh 29, 29
  00e3d2c  bt 2, 0xe420c
  00e3d30  rlwinm 3, 6, 0, 25, 25
  00e3d34  cmpwi 3, 0
  00e3d38  bt 2, 0xe3da4
  00e3d3c  slwi 3, 28, 4
  00e3d40  li 8, 1
  00e3d44  extsw 4, 3
  00e3d48  addc 5, 3, 24
  00e3d4c  addc 6, 3, 26
  00e3d50  clrldi 5, 5, 32
  00e3d54  addc 3, 3, 25
  00e3d58  clrldi 6, 6, 32
  00e3d5c  lwzx 4, 21, 4
  00e3d60  clrldi 7, 3, 32
  00e3d64  addic 3, 4, -32
  00e3d68  lwz 4, 0(5)
  00e3d6c  lwz 5, 0(6)
  00e3d70  extsw 3, 3
  00e3d74  lwz 7, 0(7)
  00e3d78  addic 4, 4, -32
  00e3d7c  addic 6, 5, 32
  00e3d80  addic 5, 7, 32
  00e3d84  extsw 4, 4
  00e3d88  extsw 6, 6
  00e3d8c  ori 7, 18, 0
  00e3d90  extsw 5, 5
  00e3d94  bl 0xccf78
  00e3d98  nop
  00e3d9c  lwz 8, 32(19)
  00e3da0  ori 10, 8, 0
  00e3da4  addc 7, 8, 31
  00e3da8  fmr 30, 31
  00e3dac  clrldi 7, 7, 32
  00e3db0  lhz 6, 4(7)
  00e3db4  rlwinm 3, 6, 0, 22, 22
  00e3db8  cmpwi 3, 0
  00e3dbc  bt 2, 0xe3dd4
  00e3dc0  lwz 3, 552(19)
  00e3dc4  slwi 3, 3, 2
  00e3dc8  extsw 3, 3
  00e3dcc  addc 3, 3, 19
  00e3dd0  lfs 30, 180(3)
  00e3dd4  rlwinm 3, 6, 0, 23, 23
  00e3dd8  cmpwi 3, 0
  00e3ddc  bt 2, 0xe3fcc
  00e3de0  fmuls 28, 30, 24
  00e3de4  ori 3, 7, 0
  00e3de8  rlwinm 4, 6, 0, 21, 21
  00e3dec  ori 7, 8, 0
  00e3df0  cmpwi 4, 0
  00e3df4  li 30, 32
  00e3df8  lfs 29, 32(3)
  00e3dfc  ori 6, 10, 0
  00e3e00  fmr 27, 28
  00e3e04  bt 2, 0xe3e64
  00e3e08  fmr 1, 29
  00e3e0c  fmr 2, 23
  00e3e10  bl 0x502578
  00e3e14  nop
  00e3e18  lwz 6, 32(19)
  00e3e1c  lis 4, 114
  00e3e20  fmr 29, 1
  00e3e24  extsw 3, 31
  00e3e28  ori 7, 6, 0
  00e3e2c  lis 5, 114
  00e3e30  li 30, 64
  00e3e34  lfs 28, 25812(4)
  00e3e38  lhzx 3, 7, 3
  00e3e3c  lfs 27, 25816(5)
  00e3e40  fmuls 28, 28, 30
  00e3e44  extsh 3, 3
  00e3e48  fmuls 27, 27, 30
  00e3e4c  sldi 3, 3, 4
  00e3e50  lwzx 3, 23, 3
  00e3e54  rlwinm 3, 3, 0, 30, 30
  00e3e58  cmpwi 3, 0
  00e3e5c  bt 2, 0xe3e64
  00e3e60  addic 29, 29, 1
  00e3e64  addc 3, 7, 31
  00e3e68  ori 7, 6, 0
  00e3e6c  clrldi 3, 3, 32
  00e3e70  lhz 3, 4(3)
  00e3e74  rlwinm 3, 3, 0, 20, 20
  00e3e78  cmpwi 3, 0
  00e3e7c  bt 2, 0xe3ed8
  00e3e80  fmr 1, 29
  00e3e84  fmr 2, 23
  00e3e88  bl 0x502578
  00e3e8c  nop
  00e3e90  lwz 7, 32(19)
  00e3e94  extsw 3, 31
  00e3e98  fmr 29, 1
  00e3e9c  lis 4, 114
  00e3ea0  lis 5, 114
  00e3ea4  li 30, 64
  00e3ea8  lhzx 3, 7, 3
  00e3eac  lfs 28, 25804(4)
  00e3eb0  extsh 3, 3
  00e3eb4  lfs 27, 25808(5)
  00e3eb8  fmuls 28, 28, 30
  00e3ebc  sldi 3, 3, 4
  00e3ec0  fmuls 27, 27, 30
  00e3ec4  lwzx 3, 23, 3
  00e3ec8  rlwinm 3, 3, 0, 30, 30
  00e3ecc  cmpwi 3, 0
  00e3ed0  bt 2, 0xe3ed8
  00e3ed4  addic 29, 29, 1
  00e3ed8  addc 3, 7, 31
  00e3edc  clrldi 3, 3, 32
  00e3ee0  lhz 3, 4(3)
  00e3ee4  rlwinm 3, 3, 0, 19, 19
  00e3ee8  cmpwi 3, 0
  00e3eec  bt 2, 0xe3f1c
  00e3ef0  fmr 1, 29
  00e3ef4  fmr 2, 23
  00e3ef8  bl 0x502578
  00e3efc  nop
  00e3f00  lis 3, 114
  00e3f04  lis 4, 114
  00e3f08  fmr 29, 1
  00e3f0c  lfs 28, 25820(3)
  00e3f10  lfs 27, 25824(4)
  00e3f14  fmuls 28, 28, 30
  00e3f18  fmuls 27, 27, 30
  00e3f1c  slwi 3, 28, 4
  00e3f20  addc 4, 3, 25
  00e3f24  extsw 5, 3
  00e3f28  clrldi 4, 4, 32
  00e3f2c  slwi 30, 30, 1
  00e3f30  lwzx 5, 21, 5
  00e3f34  lwz 4, 0(4)
  00e3f38  addc 4, 5, 4
  00e3f3c  addc 5, 3, 24
  00e3f40  extsw 4, 4
  00e3f44  addc 3, 3, 26
  00e3f48  clrldi 3, 3, 32
  00e3f4c  std 4, 376(1)
  00e3f50  clrldi 4, 5, 32
  00e3f54  lwz 4, 0(4)
  00e3f58  lwz 3, 0(3)
  00e3f5c  lfd 1, 376(1)
  00e3f60  addc 3, 4, 3
  00e3f64  fcfid 1, 1
  00e3f68  extsw 3, 3
  00e3f6c  ori 4, 29, 0
  00e3f70  std 3, 376(1)
  00e3f74  ori 3, 27, 0
  00e3f78  frsp 1, 1
  00e3f7c  fmuls 30, 1, 22
  00e3f80  lfd 2, 376(1)
  00e3f84  fcfid 1, 2
  00e3f88  frsp 1, 1
  00e3f8c  fmuls 20, 1, 22
  00e3f90  bl 0xca3e4
  00e3f94  nop
  00e3f98  bl 0xd6bf8
  00e3f9c  nop
  00e3fa0  fmr 1, 30
  00e3fa4  ori 8, 30, 0
  00e3fa8  fmr 2, 20
  00e3fac  li 9, 64
  00e3fb0  fmr 3, 28
  00e3fb4  ori 10, 3, 0
  00e3fb8  fmr 4, 27
  00e3fbc  fmr 5, 29
  00e3fc0  bl 0xd8328
  00e3fc4  nop
  00e3fc8  b 0xe4030
  00e3fcc  ori 4, 29, 0
  00e3fd0  ori 3, 27, 0
  00e3fd4  bl 0xca3e4
  00e3fd8  nop
  00e3fdc  slwi 4, 28, 4
  00e3fe0  extsw 5, 4
  00e3fe4  addc 6, 4, 24
  00e3fe8  addc 7, 4, 26
  00e3fec  clrldi 6, 6, 32
  00e3ff0  addc 4, 4, 25
  00e3ff4  clrldi 7, 7, 32
  00e3ff8  lwzx 8, 21, 5
  00e3ffc  clrldi 5, 4, 32
  00e4000  extsw 4, 8
  00e4004  lwz 6, 0(6)
  00e4008  lwz 7, 0(7)
  00e400c  lwz 9, 0(5)
  00e4010  subc 7, 7, 6
  00e4014  extsw 5, 6
  00e4018  subc 6, 9, 8
  00e401c  extsw 7, 7
  00e4020  li 8, 128
  00e4024  extsw 6, 6
  00e4028  bl 0xca3bc
  00e402c  nop
  00e4030  lwz 10, 32(19)
  00e4034  ori 9, 10, 0
  00e4038  addc 31, 9, 31
  00e403c  clrldi 31, 31, 32
  00e4040  lhz 3, 4(31)
  00e4044  rlwinm 3, 3, 0, 27, 27
  00e4048  cmpwi 3, 0
  00e404c  bt 2, 0xe420c
  00e4050  lhz 7, 18(31)
  00e4054  lhz 3, 14(31)
  00e4058  lhz 11, 16(31)
  00e405c  lhz 9, 20(31)
  00e4060  extsh 7, 7
  00e4064  extsh 31, 3
  00e4068  extsh 9, 9
  00e406c  cmpwi 1, 7, 0
  00e4070  extsh 11, 11
  00e4074  cmpwi 6, 9, 0
  00e4078  bf 6, 0xe40ac
  00e407c  slwi 3, 28, 4
  00e4080  srawi 4, 31, 1
  00e4084  extsw 5, 3
  00e4088  addze 10, 4
  00e408c  addc 3, 3, 25
  00e4090  clrldi 3, 3, 32
  00e4094  lwzx 4, 21, 5
  00e4098  lwz 3, 0(3)
  00e409c  addc 3, 4, 3
  00e40a0  srawi 3, 3, 5
  00e40a4  subc 10, 3, 10
  00e40a8  b 0xe40e4
  00e40ac  bf 5, 0xe40c4
  00e40b0  slwi 3, 28, 4
  00e40b4  addc 3, 3, 25
  00e40b8  clrldi 3, 3, 32
  00e40bc  lwz 10, 0(3)
  00e40c0  b 0xe40d0
  00e40c4  slwi 3, 28, 4
  00e40c8  extsw 3, 3
  00e40cc  lwzx 10, 21, 3
  00e40d0  srawi 3, 31, 1
  00e40d4  addze 3, 3
  00e40d8  srawi 4, 10, 4
  00e40dc  subc 10, 4, 3
  00e40e0  addc 10, 10, 7
  00e40e4  bf 26, 0xe411c
  00e40e8  slwi 3, 28, 4
  00e40ec  srawi 5, 11, 1
  00e40f0  addze 9, 5
  00e40f4  addc 4, 3, 24
  00e40f8  addc 3, 3, 26
  00e40fc  clrldi 4, 4, 32
  00e4100  clrldi 3, 3, 32
  00e4104  lwz 4, 0(4)
  00e4108  lwz 3, 0(3)
  00e410c  addc 3, 4, 3
  00e4110  srawi 3, 3, 5
  00e4114  subc 9, 3, 9
  00e4118  b 0xe4158
  00e411c  bf 25, 0xe4134
  00e4120  slwi 3, 28, 4
  00e4124  addc 3, 3, 26
  00e4128  clrldi 3, 3, 32
  00e412c  lwz 6, 0(3)
  00e4130  b 0xe4144
  00e4134  slwi 3, 28, 4
  00e4138  addc 3, 3, 24
  00e413c  clrldi 3, 3, 32
  00e4140  lwz 6, 0(3)
  00e4144  srawi 3, 11, 1
  00e4148  addze 3, 3
  00e414c  srawi 4, 6, 4
  00e4150  subc 3, 4, 3
  00e4154  addc 9, 3, 9
  00e4158  std 18, 400(1)
  00e415c  extsw 30, 9
  00e4160  std 23, 392(1)
  00e4164  extsw 29, 10
  00e4168  addc 27, 11, 30
  00e416c  addc 23, 29, 31
  00e4170  ori 3, 30, 0
  00e4174  ori 5, 29, 0
  00e4178  li 7, 64
  00e417c  extsw 4, 27
  00e4180  extsw 6, 23
  00e4184  bl 0x6a718
  00e4188  nop
  00e418c  addic 18, 1, 216
  00e4190  ori 3, 28, 0
  00e4194  ori 4, 18, 0
  00e4198  bl 0xe2c34
  00e419c  li 3, 15
  00e41a0  sth 20, 200(1)
  00e41a4  srawi 4, 31, 1
  00e41a8  sth 20, 202(1)
  00e41ac  ori 5, 18, 0
  00e41b0  addze 4, 4
  00e41b4  fmr 1, 21
  00e41b8  sth 3, 204(1)
  00e41bc  addic 7, 30, 4
  00e41c0  sth 17, 206(1)
  00e41c4  addc 8, 29, 4
  00e41c8  sth 20, 208(1)
  00e41cc  addic 3, 1, 188
  00e41d0  sth 20, 210(1)
  00e41d4  ori 4, 22, 0
  00e41d8  sth 30, 188(1)
  00e41dc  li 6, -1
  00e41e0  sth 27, 190(1)
  00e41e4  sth 29, 192(1)
  00e41e8  sth 23, 194(1)
  00e41ec  sth 8, 196(1)
  00e41f0  sth 7, 198(1)
  00e41f4  bl 0x7100c
  00e41f8  nop
  00e41fc  lwz 9, 32(19)
  00e4200  ld 23, 392(1)
  00e4204  ori 10, 9, 0
  00e4208  ld 18, 400(1)
  00e420c  addic 28, 28, 1
  00e4210  ori 8, 9, 0
  00e4214  extsw 28, 28
  00e4218  sldi 3, 28, 5
  00e421c  sldi 4, 28, 3
  00e4220  addc 3, 3, 4
  00e4224  addc 3, 9, 3
  00e4228  clrldi 3, 3, 32
  00e422c  lhz 3, 4(3)
  00e4230  rlwinm 3, 3, 0, 29, 29
  00e4234  cmpwi 3, 0
  00e4238  bt 2, 0xe3ce0
  00e423c  lis 30, 151
  00e4240  lwz 3, -25488(30)
  00e4244  lwz 4, 552(19)
  00e4248  ld 22, 352(1)
  00e424c  cmpw 3, 4
  00e4250  ld 18, 360(1)
  00e4254  bf 2, 0xe4428
  00e4258  lis 3, 0
  00e425c  li 4, 5
  00e4260  ori 3, 3, 59802
  00e4264  bl 0xca3e4
  00e4268  nop
  00e426c  lwz 4, 552(19)
  00e4270  lfs 1, 60(16)
  00e4274  lis 29, 151
  00e4278  slwi 4, 4, 2
  00e427c  lfs 2, 64(16)
  00e4280  lfs 3, 68(16)
  00e4284  addic 29, 29, -25376
  00e4288  extsw 4, 4
  00e428c  ori 31, 3, 0
  00e4290  addc 4, 19, 4
  00e4294  lfs 4, 180(4)
  00e4298  lfs 31, 28(16)
  00e429c  fmadds 1, 4, 1, 2
  00e42a0  lwz 3, 8332(29)
  00e42a4  lfs 30, 152(29)
  00e42a8  addic 3, 3, -15
  00e42ac  cmpwi 3, 0
  00e42b0  fmuls 1, 1, 3
  00e42b4  fmuls 31, 1, 31
  00e42b8  bf 2, 0xe42d0
  00e42bc  fmr 1, 30
  00e42c0  lfs 2, 52(16)
  00e42c4  bl 0x502578
  00e42c8  nop
  00e42cc  fmr 30, 1
  00e42d0  lis 3, 162
  00e42d4  lwz 3, 2080(3)
  00e42d8  cmpwi 3, 0
  00e42dc  bt 2, 0xe4318
  00e42e0  lwz 3, -25488(30)
  00e42e4  addic 5, 1, 128
  00e42e8  lfs 1, 128(29)
  00e42ec  addic 6, 1, 132
  00e42f0  addic 7, 3, 100
  00e42f4  lfs 2, 132(29)
  00e42f8  extsw 7, 7
  00e42fc  bl 0xe2b38
  00e4300  fmr 1, 30
  00e4304  lfs 2, 52(16)
  00e4308  bl 0x502578
  00e430c  nop
  00e4310  fmr 30, 1
  00e4314  b 0xe4334
  00e4318  lfs 1, 128(29)
  00e431c  lfs 2, 132(29)
  00e4320  addic 5, 1, 128
  00e4324  lwz 7, -25488(30)
  00e4328  addic 6, 1, 132
  00e432c  extsw 7, 7
  00e4330  bl 0xe2b38
  00e4334  vsubuwm 2, 26, 31
  00e4338  subc 3, 18, 14
  00e433c  vsubuwm 4, 27, 29
  00e4340  li 4, 128
  00e4344  extsw 3, 3
  00e4348  vcfsx 2, 2, 0
  00e434c  li 5, 132
  00e4350  lvlx 3, 4, 1
  00e4354  std 3, 376(1)
  00e4358  lfs 1, 128(1)
  00e435c  subc 3, 22, 15
  00e4360  lfs 29, 132(1)
  00e4364  ld 6, 368(1)
  00e4368  extsw 3, 3
  00e436c  vmaddfp 2, 3, 2, 30
  00e4370  vcfsx 3, 4, 0
  00e4374  lvlx 4, 5, 1
  00e4378  lfd 2, 376(1)
  00e437c  fcfid 2, 2
  00e4380  vspltw 2, 2, 0
  00e4384  frsp 2, 2
  00e4388  stvewx 2, 4, 1
  00e438c  std 3, 376(1)
  00e4390  lbz 3, 4(6)
  00e4394  lfd 3, 376(1)
  00e4398  vmaddfp 2, 4, 3, 28
  00e439c  cmpwi 3, 0
  00e43a0  fmadds 26, 1, 2, 26
  00e43a4  fcfid 1, 3
  00e43a8  vspltw 2, 2, 0
  00e43ac  frsp 1, 1
  00e43b0  stvewx 2, 5, 1
  00e43b4  fmadds 29, 29, 1, 25
  00e43b8  bt 2, 0xe43ec
  00e43bc  fmr 1, 30
  00e43c0  lfs 30, 52(16)
  00e43c4  fmr 2, 30
  00e43c8  bl 0x502578
  00e43cc  nop
  00e43d0  fneg 1, 1
  00e43d4  fmr 2, 30
  00e43d8  bl 0x5025e0
  00e43dc  nop
  00e43e0  lfs 26, 128(1)
  00e43e4  fmr 30, 1
  00e43e8  lfs 29, 132(1)
  00e43ec  lfs 1, 48(16)
  00e43f0  ori 3, 31, 0
  00e43f4  fmuls 31, 31, 1
  00e43f8  bl 0xd6bf8
  00e43fc  nop
  00e4400  fmr 1, 26
  00e4404  li 8, 128
  00e4408  fmr 2, 29
  00e440c  li 9, 128
  00e4410  fmr 3, 31
  00e4414  ori 10, 3, 0
  00e4418  fmr 4, 31
  00e441c  fmr 5, 30
  00e4420  bl 0xd8328
  00e4424  nop
  00e4428  bl 0x6d708
  00e442c  nop
  00e4430  lwz 3, 28(19)
  00e4434  cmpwi 3, 0
  00e4438  bt 2, 0xe4560
  00e443c  li 3, 0
  00e4440  bl 0x6d704
  00e4444  nop
  00e4448  lwz 31, 28(19)
  00e444c  lwz 19, 176(19)
  00e4450  cmpwi 19, 0
  00e4454  addic 19, 19, -1
  00e4458  bt 2, 0xe4558
  00e445c  subc 3, 18, 14
  00e4460  subc 4, 22, 15
  00e4464  extsw 3, 3
  00e4468  std 3, 376(1)
  00e446c  extsw 3, 4
  00e4470  lfd 1, 376(1)
  00e4474  std 3, 376(1)
  00e4478  fcfid 31, 1
  00e447c  frsp 31, 31
  00e4480  lfd 1, 376(1)
  00e4484  fcfid 30, 1
  00e4488  frsp 30, 30
  00e448c  lfs 1, 0(31)
  00e4490  lfs 2, 4(31)
  00e4494  addic 5, 1, 144
  00e4498  lwz 7, -25488(30)
  00e449c  addic 6, 1, 148
  00e44a0  extsw 7, 7
  00e44a4  bl 0xe2b38
  00e44a8  lfs 1, 144(1)
  00e44ac  lfs 2, 148(1)
  00e44b0  fmuls 1, 1, 31
  00e44b4  fmuls 2, 2, 30
  00e44b8  fctiwz 1, 1
  00e44bc  fctiwz 2, 2
  00e44c0  stfd 1, 376(1)
  00e44c4  lwz 3, 380(1)
  00e44c8  stfd 2, 376(1)
  00e44cc  addc 3, 3, 14
  00e44d0  lwz 4, 380(1)
  00e44d4  cmpwi 3, -409
  00e44d8  addc 4, 4, 15
  00e44dc  bt 0, 0xe4544
  00e44e0  cmpwi 4, -409
  00e44e4  bt 0, 0xe4544
  00e44e8  cmpwi 3, 8601
  00e44ec  bt 1, 0xe4544
  00e44f0  cmpwi 4, 7065
  00e44f4  bt 1, 0xe4544
  00e44f8  lwz 5, 8(31)
  00e44fc  cmpwi 5, -1
  00e4500  bf 2, 0xe4544
  00e4504  ori 5, 3, 0
  00e4508  lis 3, 114
  00e450c  li 8, 1
  00e4510  lwz 9, 25828(3)
  00e4514  lwz 7, 12(31)
  00e4518  addc 6, 9, 4
  00e451c  subc 3, 5, 9
  00e4520  subc 4, 4, 9
  00e4524  addc 5, 9, 5
  00e4528  slwi 7, 7, 0
  00e452c  extsw 3, 3
  00e4530  extsw 6, 6
  00e4534  extsw 4, 4
  00e4538  extsw 5, 5
  00e453c  bl 0xca72c
  00e4540  nop
  00e4544  ori 3, 19, 0
  00e4548  addic 31, 31, 16
  00e454c  cmpwi 3, 0
  00e4550  addic 19, 19, -1
  00e4554  bf 2, 0xe448c
  00e4558  bl 0x6d708
  00e455c  nop
  00e4560  li 0, 416
  00e4564  lvx 20, 1, 0
  00e4568  addic 0, 0, 16
  00e456c  lvx 21, 1, 0
  00e4570  addic 0, 0, 16
  00e4574  lvx 22, 1, 0
  00e4578  addic 0, 0, 16
  00e457c  lvx 23, 1, 0
  00e4580  addic 0, 0, 16
  00e4584  lvx 24, 1, 0
  00e4588  addic 0, 0, 16
  00e458c  lvx 25, 1, 0
  00e4590  addic 0, 0, 16
  00e4594  lvx 26, 1, 0
  00e4598  addic 0, 0, 16
  00e459c  lvx 27, 1, 0
  00e45a0  addic 0, 0, 16
  00e45a4  lvx 28, 1, 0
  00e45a8  addic 0, 0, 16
  00e45ac  lvx 29, 1, 0
  00e45b0  addic 0, 0, 16
  00e45b4  lvx 30, 1, 0
  00e45b8  addic 0, 0, 16
  00e45bc  lvx 31, 1, 0
  00e45c0  ld 0, 864(1)
  00e45c4  mtlr 0
  00e45c8  lfd 20, 752(1)
  00e45cc  lfd 21, 760(1)
  00e45d0  lfd 22, 768(1)
  00e45d4  lfd 23, 776(1)
  00e45d8  lfd 24, 784(1)
  00e45dc  lfd 25, 792(1)
  00e45e0  lfd 26, 800(1)
  00e45e4  lfd 27, 808(1)
  00e45e8  lfd 28, 816(1)
  00e45ec  lfd 29, 824(1)
  00e45f0  lfd 30, 832(1)
  00e45f4  lfd 31, 840(1)
  00e45f8  ld 14, 608(1)
  00e45fc  ld 15, 616(1)
  00e4600  ld 16, 624(1)
  00e4604  ld 17, 632(1)
  00e4608  ld 18, 640(1)
  00e460c  ld 19, 648(1)
  00e4610  ld 20, 656(1)
  00e4614  ld 21, 664(1)
  00e4618  ld 22, 672(1)
  00e461c  ld 23, 680(1)
  00e4620  ld 24, 688(1)
  00e4624  ld 25, 696(1)
  00e4628  ld 26, 704(1)
  00e462c  ld 27, 712(1)
  00e4630  ld 28, 720(1)
  00e4634  ld 29, 728(1)
  00e4638  ld 30, 736(1)
  00e463c  ld 31, 744(1)
  00e4640  addi 1, 1, 848
  00e4644  blr

Map_DecodeLayer:   # 0xe4648, 0x2d8 bytes
  00e4648  stdu 1, -144(1)
  00e464c  lis 9, 144
  00e4650  li 8, 0
  00e4654  li 6, 1
  00e4658  std 31, 136(1)
  00e465c  std 30, 128(1)
  00e4660  std 29, 120(1)
  00e4664  std 28, 112(1)
  00e4668  std 27, 104(1)
  00e466c  std 26, 96(1)
  00e4670  std 25, 88(1)
  00e4674  std 24, 80(1)
  00e4678  std 23, 72(1)
  00e467c  std 22, 64(1)
  00e4680  std 21, 56(1)
  00e4684  ori 7, 8, 0
  00e4688  lwz 9, 11976(9)
  00e468c  cmpwi 8, 0
  00e4690  ori 30, 9, 0
  00e4694  li 31, 512
  00e4698  bt 2, 0xe46a4
  00e469c  lhz 31, -2(5)
  00e46a0  extsh 31, 31
  00e46a4  lhz 11, 0(5)
  00e46a8  addc 12, 31, 4
  00e46ac  extsh 11, 11
  00e46b0  clrldi 12, 12, 32
  00e46b4  addc 11, 11, 4
  00e46b8  lis 10, 21845
  00e46bc  subc 11, 11, 12
  00e46c0  ori 10, 10, 21846
  00e46c4  sldi 11, 11, 1
  00e46c8  mulhw 11, 10, 11
  00e46cc  ori 10, 7, 0
  00e46d0  srwi 29, 11, 31
  00e46d4  ori 31, 10, 0
  00e46d8  addc 11, 11, 29
  00e46dc  cmpwi 11, 0
  00e46e0  bf 1, 0xe47f8
  00e46e4  ori 28, 7, 0
  00e46e8  srawi 29, 28, 1
  00e46ec  li 27, 0
  00e46f0  addc 26, 29, 12
  00e46f4  clrlwi 25, 28, 31
  00e46f8  clrldi 26, 26, 32
  00e46fc  lbzx 29, 12, 29
  00e4700  subc 27, 27, 25
  00e4704  srwi 24, 29, 4
  00e4708  cntlzw 27, 27
  00e470c  lbz 26, 1(26)
  00e4710  ori 23, 24, 0
  00e4714  sldi 27, 27, 58
  00e4718  rlwimi 23, 26, 4, 20, 27
  00e471c  li 22, 0
  00e4720  clrlwi 23, 23, 24
  00e4724  sradi 27, 27, 63
  00e4728  subc 23, 23, 26
  00e472c  subc 25, 22, 25
  00e4730  and 27, 27, 23
  00e4734  cntlzw 25, 25
  00e4738  clrlwi 29, 29, 28
  00e473c  li 21, 0
  00e4740  addc 27, 26, 27
  00e4744  sldi 25, 25, 58
  00e4748  subc 26, 21, 27
  00e474c  subc 29, 29, 24
  00e4750  sradi 25, 25, 63
  00e4754  cntlzw 26, 26
  00e4758  and 29, 25, 29
  00e475c  li 23, 256
  00e4760  sldi 22, 26, 58
  00e4764  addc 29, 24, 29
  00e4768  subc 24, 23, 27
  00e476c  sradi 23, 22, 63
  00e4770  ori 26, 29, 0
  00e4774  and 24, 23, 24
  00e4778  cmpwi 31, 0
  00e477c  slwi 25, 29, 4
  00e4780  rlwimi 26, 29, 4, 24, 27
  00e4784  addc 27, 27, 24
  00e4788  bt 2, 0xe47ac
  00e478c  ori 24, 30, 0
  00e4790  addic 30, 30, 1
  00e4794  ori 31, 7, 0
  00e4798  addic 27, 27, -1
  00e479c  clrldi 30, 30, 32
  00e47a0  lbz 23, 0(24)
  00e47a4  or 25, 23, 25
  00e47a8  stb 25, 0(24)
  00e47ac  cmpwi 27, 0
  00e47b0  bt 2, 0xe47e8
  00e47b4  clrldi 24, 30, 32
  00e47b8  ori 25, 24, 0
  00e47bc  stb 26, 0(30)
  00e47c0  addic 27, 27, -2
  00e47c4  addic 24, 25, 1
  00e47c8  cmpwi 27, 0
  00e47cc  ori 30, 24, 0
  00e47d0  bt 1, 0xe47b8
  00e47d4  cmpwi 27, 0
  00e47d8  bt 2, 0xe47e8
  00e47dc  ori 30, 25, 0
  00e47e0  ori 31, 6, 0
  00e47e4  stb 29, 0(30)
  00e47e8  addic 10, 10, 1
  00e47ec  addic 28, 28, 3
  00e47f0  cmpw 10, 11
  00e47f4  bt 0, 0xe46e8
  00e47f8  srawi 10, 8, 4
  00e47fc  ori 30, 7, 0
  00e4800  addze 10, 10
  00e4804  srawi 11, 8, 4
  00e4808  sldi 10, 10, 4
  00e480c  addze 11, 11
  00e4810  subc 10, 8, 10
  00e4814  sldi 11, 11, 9
  00e4818  addc 10, 10, 11
  00e481c  sldi 11, 10, 2
  00e4820  ori 10, 30, 0
  00e4824  addc 29, 3, 11
  00e4828  clrldi 29, 29, 32
  00e482c  ori 12, 7, 0
  00e4830  ori 11, 29, 0
  00e4834  ori 31, 12, 0
  00e4838  srawi 28, 12, 1
  00e483c  li 27, 0
  00e4840  addc 28, 28, 10
  00e4844  clrlwi 26, 12, 31
  00e4848  extsw 28, 28
  00e484c  subc 27, 27, 26
  00e4850  li 26, 0
  00e4854  cntlzw 27, 27
  00e4858  slw 24, 6, 12
  00e485c  lbzx 28, 9, 28
  00e4860  sldi 27, 27, 58
  00e4864  srwi 25, 28, 4
  00e4868  clrlwi 28, 28, 28
  00e486c  sradi 27, 27, 63
  00e4870  subc 28, 28, 25
  00e4874  or 24, 31, 24
  00e4878  and 28, 27, 28
  00e487c  subc 31, 31, 24
  00e4880  addc 28, 25, 28
  00e4884  clrlwi 27, 12, 27
  00e4888  subc 28, 26, 28
  00e488c  cmpwi 27, 31
  00e4890  cntlzw 28, 28
  00e4894  sldi 28, 28, 58
  00e4898  sradi 28, 28, 63
  00e489c  and 31, 28, 31
  00e48a0  addc 31, 24, 31
  00e48a4  bf 2, 0xe48b8
  00e48a8  addic 11, 11, 4
  00e48ac  stw 31, 0(29)
  00e48b0  ori 31, 7, 0
  00e48b4  ori 29, 11, 0
  00e48b8  addic 12, 12, 1
  00e48bc  cmpwi 12, 32
  00e48c0  bt 0, 0xe4838
  00e48c4  addic 30, 30, 1
  00e48c8  addic 29, 29, 60
  00e48cc  cmpwi 30, 32
  00e48d0  clrldi 29, 29, 32
  00e48d4  addic 10, 10, 16
  00e48d8  bt 0, 0xe482c
  00e48dc  addic 8, 8, 1
  00e48e0  addic 5, 5, 2
  00e48e4  cmpwi 8, 256
  00e48e8  bt 0, 0xe468c
  00e48ec  ld 21, 56(1)
  00e48f0  ld 22, 64(1)
  00e48f4  ld 23, 72(1)
  00e48f8  ld 24, 80(1)
  00e48fc  ld 25, 88(1)
  00e4900  ld 26, 96(1)
  00e4904  ld 27, 104(1)
  00e4908  ld 28, 112(1)
  00e490c  ld 29, 120(1)
  00e4910  ld 30, 128(1)
  00e4914  ld 31, 136(1)
  00e4918  addi 1, 1, 144
  00e491c  blr

Map_RevealAroundPos:   # 0xe4928, 0x250 bytes
  00e4928  stdu 1, -192(1)
  00e492c  mflr 0
  00e4930  std 0, 208(1)
  00e4934  std 31, 184(1)
  00e4938  lis 31, 162
  00e493c  addic 31, 31, 1216
  00e4940  lwz 4, 40(31)
  00e4944  std 30, 176(1)
  00e4948  std 29, 168(1)
  00e494c  std 28, 160(1)
  00e4950  std 27, 152(1)
  00e4954  std 26, 144(1)
  00e4958  std 25, 136(1)
  00e495c  cmpwi 4, 0
  00e4960  bt 2, 0xe4b4c
  00e4964  lis 4, 162
  00e4968  lwz 4, 2080(4)
  00e496c  cmpwi 4, 0
  00e4970  bt 2, 0xe499c
  00e4974  lis 4, 151
  00e4978  lfs 1, 0(3)
  00e497c  addic 5, 1, 112
  00e4980  addic 6, 1, 116
  00e4984  lwz 4, -25488(4)
  00e4988  lfs 2, 4(3)
  00e498c  addic 7, 4, 100
  00e4990  extsw 7, 7
  00e4994  bl 0xe2b38
  00e4998  b 0xe49bc
  00e499c  lis 4, 151
  00e49a0  lfs 1, 0(3)
  00e49a4  addic 5, 1, 112
  00e49a8  lfs 2, 4(3)
  00e49ac  addic 6, 1, 116
  00e49b0  lwz 7, -25488(4)
  00e49b4  extsw 7, 7
  00e49b8  bl 0xe2b38
  00e49bc  lis 3, 14
  00e49c0  lfs 1, 112(1)
  00e49c4  addi 3, 3, 18720
  00e49c8  lfs 2, 0(3)
  00e49cc  lfs 3, 116(1)
  00e49d0  fmuls 1, 1, 2
  00e49d4  fmuls 2, 3, 2
  00e49d8  fctiwz 1, 1
  00e49dc  fctiwz 2, 2
  00e49e0  stfd 1, 120(1)
  00e49e4  lwz 3, 124(1)
  00e49e8  stfd 2, 120(1)
  00e49ec  lwz 7, 124(1)
  00e49f0  addic 8, 3, 1
  00e49f4  addic 9, 7, 1
  00e49f8  cmpwi 6, 8, 512
  00e49fc  or 4, 8, 9
  00e4a00  cmpwi 1, 9, 512
  00e4a04  cmpwi 4, 0
  00e4a08  crorc 2, 0, 24
  00e4a0c  bt 2, 0xe4b4c
  00e4a10  bf 4, 0xe4b4c
  00e4a14  addic 4, 7, 17
  00e4a18  addic 10, 7, -15
  00e4a1c  extsw 7, 4
  00e4a20  li 11, 511
  00e4a24  li 6, 511
  00e4a28  subc 7, 7, 11
  00e4a2c  subc 4, 4, 6
  00e4a30  sradi 7, 7, 63
  00e4a34  extsw 5, 10
  00e4a38  li 11, 0
  00e4a3c  addic 30, 3, 17
  00e4a40  and 4, 7, 4
  00e4a44  li 12, 511
  00e4a48  extsw 29, 30
  00e4a4c  subc 11, 11, 5
  00e4a50  addc 5, 6, 4
  00e4a54  li 7, 511
  00e4a58  subc 4, 29, 12
  00e4a5c  li 28, 0
  00e4a60  addic 6, 3, -15
  00e4a64  sradi 12, 4, 63
  00e4a68  subc 3, 30, 7
  00e4a6c  subc 10, 10, 28
  00e4a70  sradi 11, 11, 63
  00e4a74  and 3, 12, 3
  00e4a78  and 10, 11, 10
  00e4a7c  addc 3, 7, 3
  00e4a80  addc 7, 28, 10
  00e4a84  extsw 4, 6
  00e4a88  cmpw 7, 5
  00e4a8c  bf 0, 0xe4b4c
  00e4a90  lis 10, 14
  00e4a94  li 11, 1
  00e4a98  addi 12, 10, 18720
  00e4a9c  sldi 10, 7, 9
  00e4aa0  subc 9, 7, 9
  00e4aa4  lfs 1, 4(12)
  00e4aa8  li 12, 0
  00e4aac  li 28, 0
  00e4ab0  subc 12, 12, 4
  00e4ab4  subc 30, 6, 28
  00e4ab8  sradi 12, 12, 63
  00e4abc  and 12, 12, 30
  00e4ac0  addc 28, 28, 12
  00e4ac4  cmpw 28, 3
  00e4ac8  bf 0, 0xe4b38
  00e4acc  subc 29, 28, 8
  00e4ad0  mullw 30, 9, 9
  00e4ad4  addc 12, 28, 10
  00e4ad8  mullw 27, 29, 29
  00e4adc  addc 27, 27, 30
  00e4ae0  extsw 27, 27
  00e4ae4  std 27, 120(1)
  00e4ae8  lfd 2, 120(1)
  00e4aec  fcfid 2, 2
  00e4af0  frsp 2, 2
  00e4af4  fsqrts 2, 2
  00e4af8  fcmpu 0, 2, 1
  00e4afc  bt 1, 0xe4b24
  00e4b00  srawi 27, 12, 3
  00e4b04  lwz 25, 12(31)
  00e4b08  clrlwi 26, 12, 29
  00e4b0c  addc 27, 25, 27
  00e4b10  slw 26, 11, 26
  00e4b14  clrldi 27, 27, 32
  00e4b18  lbz 25, 0(27)
  00e4b1c  or 26, 25, 26
  00e4b20  stb 26, 0(27)
  00e4b24  addic 28, 28, 1
  00e4b28  addic 12, 12, 1
  00e4b2c  cmpw 28, 3
  00e4b30  addic 29, 29, 1
  00e4b34  bt 0, 0xe4ad8
  00e4b38  addic 7, 7, 1
  00e4b3c  addic 9, 9, 1
  00e4b40  cmpw 7, 5
  00e4b44  addic 10, 10, 512
  00e4b48  bt 0, 0xe4aa8
  00e4b4c  ld 0, 208(1)
  00e4b50  mtlr 0
  00e4b54  ld 25, 136(1)
  00e4b58  ld 26, 144(1)
  00e4b5c  ld 27, 152(1)
  00e4b60  ld 28, 160(1)
  00e4b64  ld 29, 168(1)
  00e4b68  ld 30, 176(1)
  00e4b6c  ld 31, 184(1)
  00e4b70  addi 1, 1, 192
  00e4b74  blr

Map_RevealRect:   # 0xe4b78, 0x94 bytes
  00e4b78  stdu 1, -64(1)
  00e4b7c  addc 6, 6, 4
  00e4b80  addc 5, 5, 3
  00e4b84  std 31, 56(1)
  00e4b88  std 30, 48(1)
  00e4b8c  cmpw 4, 6
  00e4b90  bf 0, 0xe4bfc
  00e4b94  lis 11, 162
  00e4b98  li 10, 1
  00e4b9c  addic 11, 11, 1216
  00e4ba0  sldi 9, 4, 9
  00e4ba4  ori 7, 3, 0
  00e4ba8  cmpw 7, 5
  00e4bac  bf 0, 0xe4bec
  00e4bb0  addc 8, 7, 9
  00e4bb4  subc 7, 5, 7
  00e4bb8  srawi 12, 8, 3
  00e4bbc  lwz 30, 12(11)
  00e4bc0  clrlwi 31, 8, 29
  00e4bc4  addic 7, 7, -1
  00e4bc8  addc 12, 30, 12
  00e4bcc  slw 31, 10, 31
  00e4bd0  clrldi 12, 12, 32
  00e4bd4  cmpwi 7, 0
  00e4bd8  addic 8, 8, 1
  00e4bdc  lbz 30, 0(12)
  00e4be0  or 31, 30, 31
  00e4be4  stb 31, 0(12)
  00e4be8  bt 1, 0xe4bb8
  00e4bec  addic 4, 4, 1
  00e4bf0  addic 9, 9, 512
  00e4bf4  cmpw 4, 6
  00e4bf8  bt 0, 0xe4ba4
  00e4bfc  ld 30, 48(1)
  00e4c00  ld 31, 56(1)
  00e4c04  addi 1, 1, 64
  00e4c08  blr

Map_SaveRevealMask:   # 0xe4c0c, 0x7c bytes
  00e4c0c  stdu 1, -128(1)
  00e4c10  mflr 0
  00e4c14  std 0, 144(1)
  00e4c18  std 31, 120(1)
  00e4c1c  lis 4, 162
  00e4c20  ori 31, 3, 0
  00e4c24  addic 3, 4, 1216
  00e4c28  lwz 4, 40(3)
  00e4c2c  cmpwi 4, 0
  00e4c30  bf 2, 0xe4c50
  00e4c34  lis 5, 0
  00e4c38  ori 3, 31, 0
  00e4c3c  li 4, 0
  00e4c40  ori 5, 5, 32768
  00e4c44  bl 0x5001fc
  00e4c48  nop
  00e4c4c  b 0xe4c74
  00e4c50  ori 4, 3, 0
  00e4c54  lis 5, 0
  00e4c58  ori 3, 31, 0
  00e4c5c  ori 5, 5, 32768
  00e4c60  lwz 4, 12(4)
  00e4c64  bl 0x5c5ad0
  00e4c68  nop
  00e4c6c  li 3, 1
  00e4c70  stb 3, 0(31)
  00e4c74  ld 0, 144(1)
  00e4c78  mtlr 0
  00e4c7c  ld 31, 120(1)
  00e4c80  addi 1, 1, 128
  00e4c84  blr

Map_DecompressMapImage:   # 0xe4c88, 0x3e0 bytes
  00e4c88  stdu 1, -1280(1)
  00e4c8c  mflr 0
  00e4c90  std 0, 1296(1)
  00e4c94  std 23, 1208(1)
  00e4c98  lis 6, 162
  00e4c9c  std 27, 1240(1)
  00e4ca0  ori 23, 3, 0
  00e4ca4  addic 6, 6, 1216
  00e4ca8  std 31, 1272(1)
  00e4cac  ori 27, 4, 0
  00e4cb0  ori 31, 5, 0
  00e4cb4  lwz 3, 40(6)
  00e4cb8  std 30, 1264(1)
  00e4cbc  std 29, 1256(1)
  00e4cc0  std 28, 1248(1)
  00e4cc4  std 26, 1232(1)
  00e4cc8  std 25, 1224(1)
  00e4ccc  std 24, 1216(1)
  00e4cd0  cmpwi 3, 0
  00e4cd4  bt 2, 0xe5034
  00e4cd8  lbz 3, 0(27)
  00e4cdc  clrlwi 3, 3, 31
  00e4ce0  cmpwi 3, 0
  00e4ce4  bt 2, 0xe4eb0
  00e4ce8  lis 30, 144
  00e4cec  ori 4, 27, 0
  00e4cf0  lis 3, 0
  00e4cf4  addic 27, 4, 1
  00e4cf8  ori 28, 3, 32768
  00e4cfc  lwz 30, 11976(30)
  00e4d00  li 5, 9216
  00e4d04  lbz 26, 0(4)
  00e4d08  addc 28, 23, 28
  00e4d0c  ori 3, 30, 0
  00e4d10  addic 29, 30, 8192
  00e4d14  srwi 26, 26, 1
  00e4d18  li 4, 0
  00e4d1c  bl 0x5001fc
  00e4d20  nop
  00e4d24  ori 24, 30, 0
  00e4d28  li 25, 1
  00e4d2c  lbz 3, 1(31)
  00e4d30  lbz 4, 0(31)
  00e4d34  cmpwi 3, 0
  00e4d38  addc 24, 24, 4
  00e4d3c  addic 31, 31, 2
  00e4d40  clrldi 24, 24, 32
  00e4d44  bt 2, 0xe4d88
  00e4d48  cmpwi 26, 0
  00e4d4c  bf 2, 0xe4d70
  00e4d50  clrldi 4, 27, 32
  00e4d54  lbz 26, 0(27)
  00e4d58  cntlzw 25, 25
  00e4d5c  addic 4, 4, 1
  00e4d60  cmpwi 26, 0
  00e4d64  rlwinm 25, 25, 27, 31, 31
  00e4d68  ori 27, 4, 0
  00e4d6c  bt 2, 0xe4d54
  00e4d70  addic 3, 3, -1
  00e4d74  stb 25, 0(24)
  00e4d78  addic 26, 26, -1
  00e4d7c  cmpwi 3, 0
  00e4d80  addic 24, 24, 1
  00e4d84  bf 2, 0xe4d48
  00e4d88  cmplw 24, 29
  00e4d8c  bt 0, 0xe4d2c
  00e4d90  ori 3, 30, 0
  00e4d94  ori 4, 3, 0
  00e4d98  lbz 5, 0(3)
  00e4d9c  stb 5, 0(4)
  00e4da0  lbz 6, 1(3)
  00e4da4  slwi 6, 6, 1
  00e4da8  or 5, 5, 6
  00e4dac  stb 5, 0(4)
  00e4db0  lbz 6, 2(3)
  00e4db4  slwi 6, 6, 2
  00e4db8  or 5, 5, 6
  00e4dbc  stb 5, 0(4)
  00e4dc0  lbz 6, 3(3)
  00e4dc4  slwi 6, 6, 3
  00e4dc8  or 5, 5, 6
  00e4dcc  ori 6, 3, 0
  00e4dd0  stb 5, 0(4)
  00e4dd4  lbz 7, 4(3)
  00e4dd8  slwi 7, 7, 4
  00e4ddc  or 5, 5, 7
  00e4de0  ori 7, 4, 0
  00e4de4  stb 5, 0(4)
  00e4de8  lbz 8, 5(3)
  00e4dec  slwi 8, 8, 5
  00e4df0  or 5, 5, 8
  00e4df4  stb 5, 0(4)
  00e4df8  lbz 8, 6(3)
  00e4dfc  addic 3, 3, 8
  00e4e00  slwi 8, 8, 6
  00e4e04  cmplw 3, 29
  00e4e08  or 5, 5, 8
  00e4e0c  stb 5, 0(4)
  00e4e10  lbz 5, 0(7)
  00e4e14  lbz 6, 7(6)
  00e4e18  addic 4, 4, 1
  00e4e1c  slwi 6, 6, 7
  00e4e20  or 5, 5, 6
  00e4e24  stb 5, 0(7)
  00e4e28  bt 0, 0xe4d98
  00e4e2c  ori 3, 23, 0
  00e4e30  ori 4, 30, 0
  00e4e34  li 5, 1024
  00e4e38  bl 0x5002cc
  00e4e3c  nop
  00e4e40  addic 23, 23, 1024
  00e4e44  cmpw 23, 28
  00e4e48  bt 2, 0xe4eac
  00e4e4c  ori 3, 30, 0
  00e4e50  li 4, 0
  00e4e54  li 5, 8192
  00e4e58  bl 0x5001fc
  00e4e5c  nop
  00e4e60  ori 3, 29, 0
  00e4e64  ori 4, 30, 0
  00e4e68  cmplw 3, 24
  00e4e6c  bf 0, 0xe4e90
  00e4e70  subc 5, 24, 3
  00e4e74  addic 5, 5, -1
  00e4e78  lbz 6, 0(3)
  00e4e7c  addic 3, 3, 1
  00e4e80  cmpwi 5, 0
  00e4e84  stb 6, 0(4)
  00e4e88  addic 4, 4, 1
  00e4e8c  bt 1, 0xe4e74
  00e4e90  ori 3, 29, 0
  00e4e94  li 4, 0
  00e4e98  li 5, 1024
  00e4e9c  bl 0x5001fc
  00e4ea0  nop
  00e4ea4  addic 24, 24, -8192
  00e4ea8  b 0xe4d2c
  00e4eac  b 0xe5034
  00e4eb0  li 3, 0
  00e4eb4  lis 5, 0
  00e4eb8  lis 6, -4096
  00e4ebc  ori 31, 3, 0
  00e4ec0  ori 4, 1, 0
  00e4ec4  ori 5, 5, 61440
  00e4ec8  clrlwi 8, 3, 31
  00e4ecc  ori 7, 31, 0
  00e4ed0  stw 31, 176(4)
  00e4ed4  cmpwi 8, 0
  00e4ed8  bt 2, 0xe4ee4
  00e4edc  li 7, 15
  00e4ee0  stw 7, 176(4)
  00e4ee4  rlwinm 9, 3, 0, 30, 30
  00e4ee8  ori 8, 7, 0
  00e4eec  cmpwi 9, 0
  00e4ef0  bt 2, 0xe4efc
  00e4ef4  ori 8, 7, 240
  00e4ef8  stw 8, 176(4)
  00e4efc  rlwinm 9, 3, 0, 29, 29
  00e4f00  ori 7, 8, 0
  00e4f04  cmpwi 9, 0
  00e4f08  bt 2, 0xe4f14
  00e4f0c  ori 7, 8, 3840
  00e4f10  stw 7, 176(4)
  00e4f14  rlwinm 9, 3, 0, 28, 28
  00e4f18  ori 8, 7, 0
  00e4f1c  cmpwi 9, 0
  00e4f20  bt 2, 0xe4f2c
  00e4f24  or 8, 7, 5
  00e4f28  stw 8, 176(4)
  00e4f2c  rlwinm 9, 3, 0, 27, 27
  00e4f30  ori 7, 8, 0
  00e4f34  cmpwi 9, 0
  00e4f38  bt 2, 0xe4f44
  00e4f3c  oris 7, 8, 15
  00e4f40  stw 7, 176(4)
  00e4f44  rlwinm 9, 3, 0, 26, 26
  00e4f48  ori 8, 7, 0
  00e4f4c  cmpwi 9, 0
  00e4f50  bt 2, 0xe4f5c
  00e4f54  oris 8, 7, 240
  00e4f58  stw 8, 176(4)
  00e4f5c  rlwinm 9, 3, 0, 25, 25
  00e4f60  ori 7, 8, 0
  00e4f64  cmpwi 9, 0
  00e4f68  bt 2, 0xe4f74
  00e4f6c  oris 7, 8, 3840
  00e4f70  stw 7, 176(4)
  00e4f74  rlwinm 8, 3, 0, 24, 24
  00e4f78  cmpwi 8, 0
  00e4f7c  bt 2, 0xe4f88
  00e4f80  or 7, 7, 6
  00e4f84  stw 7, 176(4)
  00e4f88  addic 3, 3, 1
  00e4f8c  addic 4, 4, 4
  00e4f90  cmpwi 3, 256
  00e4f94  bt 0, 0xe4ec8
  00e4f98  addic 3, 1, 112
  00e4f9c  li 5, 16
  00e4fa0  ori 30, 3, 0
  00e4fa4  ori 4, 27, 0
  00e4fa8  mtctr 5
  00e4fac  lbz 5, 0(27)
  00e4fb0  addic 4, 4, 1
  00e4fb4  slwi 5, 5, 2
  00e4fb8  ori 27, 4, 0
  00e4fbc  addc 5, 5, 1
  00e4fc0  clrldi 5, 5, 32
  00e4fc4  lwz 5, 176(5)
  00e4fc8  stw 5, 0(3)
  00e4fcc  addic 3, 3, 4
  00e4fd0  bdnz 0xe4fac
  00e4fd4  ori 3, 23, 0
  00e4fd8  ori 4, 30, 0
  00e4fdc  li 5, 64
  00e4fe0  bl 0x5002cc
  00e4fe4  nop
  00e4fe8  addic 3, 23, 64
  00e4fec  ori 4, 30, 0
  00e4ff0  li 5, 64
  00e4ff4  bl 0x5002cc
  00e4ff8  nop
  00e4ffc  addic 3, 23, 128
  00e5000  ori 4, 30, 0
  00e5004  li 5, 64
  00e5008  bl 0x5002cc
  00e500c  nop
  00e5010  addic 3, 23, 192
  00e5014  ori 4, 30, 0
  00e5018  li 5, 64
  00e501c  bl 0x5002cc
  00e5020  nop
  00e5024  addic 31, 31, 1
  00e5028  addic 23, 23, 256
  00e502c  cmpwi 31, 128
  00e5030  bt 0, 0xe4f98
  00e5034  ld 0, 1296(1)
  00e5038  mtlr 0
  00e503c  ld 23, 1208(1)
  00e5040  ld 24, 1216(1)
  00e5044  ld 25, 1224(1)
  00e5048  ld 26, 1232(1)
  00e504c  ld 27, 1240(1)
  00e5050  ld 28, 1248(1)
  00e5054  ld 29, 1256(1)
  00e5058  ld 30, 1264(1)
  00e505c  ld 31, 1272(1)
  00e5060  addi 1, 1, 1280
  00e5064  blr

Map_RegisterLevelObject:   # 0xe5068, 0x40 bytes
  00e5068  lis 6, 151
  00e506c  ori 5, 4, 0
  00e5070  lwz 4, -25488(6)
  00e5074  cmpwi 4, 18
  00e5078  bt 1, 0xe50a4
  00e507c  lis 6, 116
  00e5080  slwi 4, 4, 2
  00e5084  addic 6, 6, -32456
  00e5088  extsw 4, 4
  00e508c  lis 7, 161
  00e5090  addic 7, 7, 23872
  00e5094  lwzx 4, 6, 4
  00e5098  addc 4, 5, 4
  00e509c  slwi 4, 4, 2
  00e50a0  stwx 3, 7, 4
  00e50a4  blr

Map_SetIconSource:   # 0xe50a8, 0x14 bytes
  00e50a8  lis 5, 162
  00e50ac  addic 5, 5, 1216
  00e50b0  stw 3, 28(5)
  00e50b4  stw 4, 176(5)
  00e50b8  blr

Map_SaveLevelObjectState:   # 0xe50bc, 0xa0 bytes
  00e50bc  lis 4, 151
  00e50c0  lwz 4, -25488(4)
  00e50c4  cmpwi 1, 4, 18
  00e50c8  cmpwi 4, 0
  00e50cc  cror 2, 0, 5
  00e50d0  bt 2, 0xe5158
  00e50d4  lis 3, 116
  00e50d8  slwi 4, 4, 2
  00e50dc  lis 5, 116
  00e50e0  addic 3, 3, -32456
  00e50e4  extsw 4, 4
  00e50e8  addic 5, 5, -32452
  00e50ec  lwzx 3, 3, 4
  00e50f0  lwzx 4, 5, 4
  00e50f4  cmpw 4, 3
  00e50f8  bf 1, 0xe5158
  00e50fc  lis 6, 161
  00e5100  lis 5, 151
  00e5104  slwi 8, 3, 2
  00e5108  slwi 7, 3, 4
  00e510c  addic 6, 6, 23872
  00e5110  addic 5, 5, -15796
  00e5114  extsw 9, 8
  00e5118  lwzx 9, 6, 9
  00e511c  cmpwi 9, 0
  00e5120  bt 2, 0xe5144
  00e5124  extsw 10, 7
  00e5128  lfs 1, 16(9)
  00e512c  addc 11, 10, 5
  00e5130  stfsx 1, 5, 10
  00e5134  lfs 1, 20(9)
  00e5138  stfs 1, 4(11)
  00e513c  lfs 1, 72(9)
  00e5140  stfs 1, 8(11)
  00e5144  addic 3, 3, 1
  00e5148  addic 8, 8, 4
  00e514c  cmpw 3, 4
  00e5150  addic 7, 7, 16
  00e5154  bt 0, 0xe5114
  00e5158  blr

Map_RegionVisible_e515c:   # 0xe515c, 0x34 bytes
  00e515c  addic 4, 4, -219
  00e5160  addic 3, 3, -211
  00e5164  sldi 5, 4, 4
  00e5168  sldi 6, 3, 5
  00e516c  addc 5, 4, 5
  00e5170  subc 6, 6, 3
  00e5174  addc 4, 4, 5
  00e5178  sldi 5, 5, 2
  00e517c  subc 3, 6, 3
  00e5180  addc 4, 5, 4
  00e5184  subc 3, 4, 3
  00e5188  srwi 3, 3, 31
  00e518c  blr

Map_RegionVisible_e5190:   # 0xe5190, 0x1c bytes
  00e5190  lis 3, 151
  00e5194  addic 3, 3, -16400
  00e5198  lbz 3, 12(3)
  00e519c  cntlzw 3, 3
  00e51a0  rlwinm 3, 3, 27, 31, 31
  00e51a4  xori 3, 3, 1
  00e51a8  blr

Map_RegionVisible_e51ac:   # 0xe51ac, 0x1c bytes
  00e51ac  lis 3, 151
  00e51b0  addic 3, 3, -16400
  00e51b4  lbz 3, 13(3)
  00e51b8  cntlzw 3, 3
  00e51bc  rlwinm 3, 3, 27, 31, 31
  00e51c0  xori 3, 3, 1
  00e51c4  blr

Map_RegionVisible_e51c8:   # 0xe51c8, 0x1c bytes
  00e51c8  lis 3, 151
  00e51cc  addic 3, 3, -16400
  00e51d0  lbz 3, 21(3)
  00e51d4  cntlzw 3, 3
  00e51d8  rlwinm 3, 3, 27, 31, 31
  00e51dc  xori 3, 3, 1
  00e51e0  blr

Map_RegionVisible_e51f0:   # 0xe51f0, 0x98 bytes
  00e51f0  lis 8, 151
  00e51f4  li 6, 0
  00e51f8  addic 8, 8, -25376
  00e51fc  lis 5, 14
  00e5200  ori 3, 6, 0
  00e5204  addi 5, 5, 20964
  00e5208  lwz 7, 8332(8)
  00e520c  cmpwi 1, 7, 17
  00e5210  cmpwi 7, 18
  00e5214  cror 2, 2, 6
  00e5218  addic 7, 7, -16
  00e521c  bt 2, 0xe522c
  00e5220  lbz 8, 4836(8)
  00e5224  cmpwi 8, 1
  00e5228  bf 2, 0xe5230
  00e522c  li 6, 1
  00e5230  cmpwi 4, 200
  00e5234  bf 0, 0xe5260
  00e5238  lfs 1, 0(5)
  00e523c  fcmpu 0, 3, 1
  00e5240  bt 0, 0xe5260
  00e5244  lfs 1, 4(5)
  00e5248  cmpwi 1, 6, 0
  00e524c  fcmpu 0, 3, 1
  00e5250  crorc 2, 1, 6
  00e5254  bt 2, 0xe5260
  00e5258  li 3, 1
  00e525c  b 0xe5284
  00e5260  cmpwi 4, 200
  00e5264  bt 0, 0xe5284
  00e5268  lfs 1, 8(5)
  00e526c  fcmpu 0, 3, 1
  00e5270  bt 0, 0xe5284
  00e5274  cmpwi 7, 0
  00e5278  bt 2, 0xe5284
  00e527c  li 3, 1
  00e5280  b 0xe5284
  00e5284  blr

Map_RegionVisible_e5290:   # 0xe5290, 0x78 bytes
  00e5290  lis 4, 151
  00e5294  cmpwi 6, 3, 256
  00e5298  addic 3, 4, -25376
  00e529c  lwz 3, 8332(3)
  00e52a0  addic 3, 3, -16
  00e52a4  cmpwi 1, 3, 0
  00e52a8  bf 24, 0xe52c8
  00e52ac  lis 3, 151
  00e52b0  addic 3, 3, -16400
  00e52b4  lbz 3, 14(3)
  00e52b8  cmpwi 3, 0
  00e52bc  bt 2, 0xe52c8
  00e52c0  li 3, 1
  00e52c4  b 0xe5304
  00e52c8  bt 24, 0xe5300
  00e52cc  lis 3, 14
  00e52d0  addi 3, 3, 21128
  00e52d4  lfs 1, 0(3)
  00e52d8  fcmpu 0, 3, 1
  00e52dc  bt 0, 0xe5300
  00e52e0  lis 3, 14
  00e52e4  addi 3, 3, 21128
  00e52e8  lfs 1, 4(3)
  00e52ec  fcmpu 0, 3, 1
  00e52f0  bt 1, 0xe5300
  00e52f4  bt 6, 0xe5300
  00e52f8  li 3, 1
  00e52fc  b 0xe5304
  00e5300  li 3, 0
  00e5304  blr

Map_RegionVisible_e5310:   # 0xe5310, 0x60 bytes
  00e5310  cmpwi 3, 256
  00e5314  bf 0, 0xe5350
  00e5318  lis 3, 151
  00e531c  li 4, 0
  00e5320  addic 3, 3, -25376
  00e5324  lwz 5, 8332(3)
  00e5328  cmpwi 1, 5, 17
  00e532c  cmpwi 5, 18
  00e5330  cror 2, 2, 6
  00e5334  bt 2, 0xe5344
  00e5338  lbz 3, 4836(3)
  00e533c  cmpwi 3, 1
  00e5340  bf 2, 0xe5348
  00e5344  li 4, 1
  00e5348  ori 3, 4, 0
  00e534c  b 0xe536c
  00e5350  lis 3, 14
  00e5354  addi 4, 3, 21256
  00e5358  li 3, 0
  00e535c  lfs 1, 0(4)
  00e5360  fcmpu 0, 3, 1
  00e5364  bt 0, 0xe536c
  00e5368  li 3, 1
  00e536c  blr

Map_RegionVisible_e5370:   # 0xe5370, 0x14 bytes
  00e5370  lis 3, 162
  00e5374  lwz 3, 2084(3)
  00e5378  cntlzw 3, 3
  00e537c  rlwinm 3, 3, 27, 31, 31
  00e5380  blr

Map_RegionVisible_e5384:   # 0xe5384, 0x1c bytes
  00e5384  lis 3, 151
  00e5388  addic 3, 3, -16400
  00e538c  lbz 3, 28(3)
  00e5390  cntlzw 3, 3
  00e5394  rlwinm 3, 3, 27, 31, 31
  00e5398  xori 3, 3, 1
  00e539c  blr

Map_RegionVisible_e53a0:   # 0xe53a0, 0x1c bytes
  00e53a0  lis 3, 151
  00e53a4  addic 3, 3, -16400
  00e53a8  lbz 3, 29(3)
  00e53ac  cntlzw 3, 3
  00e53b0  rlwinm 3, 3, 27, 31, 31
  00e53b4  xori 3, 3, 1
  00e53b8  blr

Map_RegionVisible_e53bc:   # 0xe53bc, 0x1c bytes
  00e53bc  lis 3, 151
  00e53c0  addic 3, 3, -16400
  00e53c4  lbz 3, 30(3)
  00e53c8  cntlzw 3, 3
  00e53cc  rlwinm 3, 3, 27, 31, 31
  00e53d0  xori 3, 3, 1
  00e53d4  blr

Map_RegionVisible_e53d8:   # 0xe53d8, 0x1c bytes
  00e53d8  lis 3, 151
  00e53dc  addic 3, 3, -16400
  00e53e0  lbz 3, 31(3)
  00e53e4  cntlzw 3, 3
  00e53e8  rlwinm 3, 3, 27, 31, 31
  00e53ec  xori 3, 3, 1
  00e53f0  blr

Map_RegionVisible_e53f4:   # 0xe53f4, 0x1c bytes
  00e53f4  lis 3, 151
  00e53f8  addic 3, 3, -16400
  00e53fc  lbz 3, 37(3)
  00e5400  cntlzw 3, 3
  00e5404  rlwinm 3, 3, 27, 31, 31
  00e5408  xori 3, 3, 1
  00e540c  blr

Map_RegionVisible_e5420:   # 0xe5420, 0x2b0 bytes
  00e5420  addic 5, 3, -393
  00e5424  addic 7, 4, -367
  00e5428  sldi 6, 5, 7
  00e542c  sldi 8, 7, 8
  00e5430  addc 6, 5, 6
  00e5434  addc 5, 5, 6
  00e5438  addc 6, 7, 8
  00e543c  subfic 5, 5, 0
  00e5440  addc 6, 7, 6
  00e5444  subfic 6, 6, 0
  00e5448  subc 5, 6, 5
  00e544c  srwi 5, 5, 31
  00e5450  cmpwi 5, 0
  00e5454  bt 2, 0xe54e0
  00e5458  addic 3, 3, -117
  00e545c  addic 6, 4, -326
  00e5460  sldi 5, 3, 6
  00e5464  sldi 7, 6, 5
  00e5468  addc 5, 3, 5
  00e546c  subc 7, 7, 6
  00e5470  addc 5, 3, 5
  00e5474  addc 3, 3, 5
  00e5478  subc 5, 6, 7
  00e547c  sldi 6, 7, 3
  00e5480  addc 3, 3, 3
  00e5484  subc 5, 6, 5
  00e5488  subc 3, 5, 3
  00e548c  srwi 3, 3, 31
  00e5490  cmpwi 3, 0
  00e5494  bt 2, 0xe54d8
  00e5498  addic 3, 4, -304
  00e549c  sldi 4, 3, 7
  00e54a0  sldi 5, 3, 4
  00e54a4  addc 3, 3, 4
  00e54a8  subfic 3, 3, 0
  00e54ac  subc 3, 3, 5
  00e54b0  srwi 3, 3, 31
  00e54b4  cmpwi 3, 0
  00e54b8  bt 2, 0xe54d8
  00e54bc  lis 3, 14
  00e54c0  addi 3, 3, 21520
  00e54c4  lfs 1, 0(3)
  00e54c8  fcmpu 0, 3, 1
  00e54cc  bt 0, 0xe54d8
  00e54d0  li 3, 1
  00e54d4  b 0xe56cc
  00e54d8  li 3, 0
  00e54dc  b 0xe56cc
  00e54e0  addic 5, 3, -401
  00e54e4  addic 7, 4, -205
  00e54e8  sldi 6, 5, 7
  00e54ec  addc 9, 7, 7
  00e54f0  subc 6, 6, 5
  00e54f4  sldi 8, 5, 4
  00e54f8  addc 9, 7, 9
  00e54fc  subc 5, 6, 5
  00e5500  sldi 6, 9, 6
  00e5504  subc 5, 5, 8
  00e5508  subc 6, 7, 6
  00e550c  subc 5, 6, 5
  00e5510  srwi 5, 5, 31
  00e5514  cmpwi 5, 0
  00e5518  bt 2, 0xe55b0
  00e551c  lis 5, 14
  00e5520  addi 5, 5, 21520
  00e5524  lfs 3, 8(5)
  00e5528  lfs 4, 4(5)
  00e552c  fsubs 2, 2, 3
  00e5530  fsubs 1, 1, 4
  00e5534  fmuls 2, 2, 2
  00e5538  fmadds 1, 1, 1, 2
  00e553c  lfs 2, 12(5)
  00e5540  fsqrts 1, 1
  00e5544  fcmpu 0, 1, 2
  00e5548  bt 1, 0xe5554
  00e554c  li 3, 1
  00e5550  b 0xe56cc
  00e5554  addic 3, 3, -322
  00e5558  addic 4, 4, -298
  00e555c  sldi 5, 3, 4
  00e5560  addc 6, 4, 4
  00e5564  subc 3, 3, 5
  00e5568  addc 6, 4, 6
  00e556c  subc 5, 5, 3
  00e5570  subc 3, 3, 5
  00e5574  sldi 5, 6, 4
  00e5578  addc 4, 4, 5
  00e557c  subc 3, 4, 3
  00e5580  srwi 3, 3, 31
  00e5584  cmpwi 3, 0
  00e5588  bt 2, 0xe55a8
  00e558c  lis 3, 162
  00e5590  addic 3, 3, 2088
  00e5594  lwz 3, 8(3)
  00e5598  cmpwi 3, 0
  00e559c  bt 2, 0xe55a8
  00e55a0  li 3, 1
  00e55a4  b 0xe56cc
  00e55a8  li 3, 0
  00e55ac  b 0xe56cc
  00e55b0  lis 6, 151
  00e55b4  li 5, 0
  00e55b8  addic 6, 6, -25376
  00e55bc  lwz 7, 8332(6)
  00e55c0  cmpwi 1, 7, 17
  00e55c4  cmpwi 7, 18
  00e55c8  cror 2, 2, 6
  00e55cc  bt 2, 0xe55dc
  00e55d0  lbz 6, 4836(6)
  00e55d4  cmpwi 6, 1
  00e55d8  bf 2, 0xe56c8
  00e55dc  addic 6, 3, -299
  00e55e0  addic 7, 4, -184
  00e55e4  sldi 8, 6, 5
  00e55e8  sldi 9, 7, 4
  00e55ec  subc 8, 8, 6
  00e55f0  subc 7, 9, 7
  00e55f4  subc 8, 8, 6
  00e55f8  subc 6, 8, 6
  00e55fc  addc 6, 6, 6
  00e5600  subc 6, 7, 6
  00e5604  srwi 6, 6, 31
  00e5608  cmpwi 6, 0
  00e560c  bt 2, 0xe56c8
  00e5610  addic 6, 4, -237
  00e5614  addic 7, 3, -304
  00e5618  sldi 9, 6, 4
  00e561c  sldi 8, 7, 5
  00e5620  addc 9, 6, 9
  00e5624  addc 8, 7, 8
  00e5628  addc 6, 6, 9
  00e562c  addc 7, 7, 8
  00e5630  addc 8, 9, 6
  00e5634  subfic 7, 7, 0
  00e5638  addc 6, 8, 6
  00e563c  subc 6, 6, 7
  00e5640  srwi 6, 6, 31
  00e5644  cmpwi 6, 0
  00e5648  bt 2, 0xe56c8
  00e564c  addic 6, 4, -220
  00e5650  addic 7, 3, -353
  00e5654  addc 8, 6, 6
  00e5658  sldi 9, 7, 4
  00e565c  addc 6, 6, 8
  00e5660  subc 7, 7, 9
  00e5664  addc 6, 8, 6
  00e5668  sldi 7, 7, 2
  00e566c  sldi 6, 6, 3
  00e5670  addc 7, 9, 7
  00e5674  subc 6, 8, 6
  00e5678  subc 6, 6, 7
  00e567c  srwi 6, 6, 31
  00e5680  cmpwi 6, 0
  00e5684  bt 2, 0xe56c8
  00e5688  addic 4, 4, -168
  00e568c  addic 3, 3, -342
  00e5690  sldi 7, 4, 6
  00e5694  sldi 6, 3, 5
  00e5698  subc 7, 4, 7
  00e569c  addc 6, 3, 6
  00e56a0  sldi 3, 3, 3
  00e56a4  addc 7, 4, 7
  00e56a8  addc 3, 6, 3
  00e56ac  addc 4, 4, 7
  00e56b0  subc 3, 4, 3
  00e56b4  srwi 3, 3, 31
  00e56b8  cmpwi 3, 0
  00e56bc  bt 2, 0xe56c8
  00e56c0  li 3, 1
  00e56c4  b 0xe56cc
  00e56c8  ori 3, 5, 0
  00e56cc  blr

Map_RegionVisible_e56d8:   # 0xe56d8, 0x13c bytes
  00e56d8  lis 6, 151
  00e56dc  li 7, 0
  00e56e0  addic 6, 6, -25376
  00e56e4  cmpwi 1, 4, 308
  00e56e8  ori 5, 7, 0
  00e56ec  lwz 8, 8332(6)
  00e56f0  cmpwi 6, 8, 17
  00e56f4  cmpwi 8, 18
  00e56f8  cror 2, 2, 26
  00e56fc  bt 2, 0xe570c
  00e5700  lbz 6, 4836(6)
  00e5704  cmpwi 6, 1
  00e5708  bf 2, 0xe5710
  00e570c  li 7, 1
  00e5710  addic 6, 4, -360
  00e5714  sldi 8, 6, 8
  00e5718  sldi 9, 6, 4
  00e571c  subc 6, 8, 6
  00e5720  subc 6, 6, 9
  00e5724  srwi 6, 6, 31
  00e5728  cmpwi 6, 0
  00e572c  bt 2, 0xe5760
  00e5730  bf 5, 0xe5760
  00e5734  lis 6, 162
  00e5738  lwz 6, 2088(6)
  00e573c  cmpwi 6, 0
  00e5740  bt 2, 0xe5760
  00e5744  lis 6, 14
  00e5748  addi 6, 6, 22224
  00e574c  lfs 1, 0(6)
  00e5750  fcmpu 0, 3, 1
  00e5754  bt 0, 0xe5760
  00e5758  li 3, 1
  00e575c  b 0xe5810
  00e5760  cmpwi 7, 0
  00e5764  bt 2, 0xe580c
  00e5768  addic 7, 4, -154
  00e576c  addic 6, 3, -197
  00e5770  sldi 9, 7, 7
  00e5774  sldi 10, 6, 6
  00e5778  sldi 8, 6, 3
  00e577c  subc 9, 9, 7
  00e5780  sldi 7, 7, 3
  00e5784  subc 6, 6, 10
  00e5788  subc 7, 9, 7
  00e578c  subc 6, 8, 6
  00e5790  subc 6, 7, 6
  00e5794  srwi 6, 6, 31
  00e5798  cmpwi 6, 0
  00e579c  bt 2, 0xe580c
  00e57a0  addic 6, 4, -195
  00e57a4  addic 7, 3, -214
  00e57a8  sldi 8, 6, 7
  00e57ac  sldi 7, 7, 1
  00e57b0  addc 6, 6, 8
  00e57b4  subc 6, 6, 7
  00e57b8  srwi 6, 6, 31
  00e57bc  cmpwi 6, 0
  00e57c0  bt 2, 0xe580c
  00e57c4  addic 3, 3, -263
  00e57c8  addic 4, 4, -218
  00e57cc  sldi 6, 3, 5
  00e57d0  sldi 7, 4, 4
  00e57d4  subc 6, 3, 6
  00e57d8  subc 7, 4, 7
  00e57dc  addc 6, 3, 6
  00e57e0  addc 4, 4, 7
  00e57e4  addc 3, 3, 6
  00e57e8  sldi 6, 7, 3
  00e57ec  addc 3, 3, 3
  00e57f0  subc 4, 4, 6
  00e57f4  subc 3, 4, 3
  00e57f8  srwi 3, 3, 31
  00e57fc  cmpwi 3, 0
  00e5800  bt 2, 0xe580c
  00e5804  li 3, 1
  00e5808  b 0xe5810
  00e580c  ori 3, 5, 0
  00e5810  blr

Map_RegionVisible_e5814:   # 0xe5814, 0x24c bytes
  00e5814  cmpwi 4, 233
  00e5818  bf 0, 0xe58fc
  00e581c  addic 5, 4, -160
  00e5820  addic 6, 3, -306
  00e5824  addc 7, 5, 5
  00e5828  sldi 8, 6, 6
  00e582c  addc 5, 5, 7
  00e5830  sldi 6, 6, 3
  00e5834  sldi 7, 5, 4
  00e5838  subc 6, 8, 6
  00e583c  subc 7, 7, 5
  00e5840  li 5, 0
  00e5844  subc 6, 7, 6
  00e5848  srwi 6, 6, 31
  00e584c  cmpwi 6, 0
  00e5850  bt 2, 0xe58f4
  00e5854  addic 6, 4, -216
  00e5858  addic 7, 3, -333
  00e585c  sldi 8, 6, 4
  00e5860  sldi 9, 7, 6
  00e5864  addc 6, 6, 8
  00e5868  subc 9, 7, 9
  00e586c  sldi 6, 6, 2
  00e5870  addc 7, 7, 9
  00e5874  subc 6, 6, 8
  00e5878  subc 6, 6, 7
  00e587c  srwi 6, 6, 31
  00e5880  cmpwi 6, 0
  00e5884  bt 2, 0xe58f4
  00e5888  addic 6, 4, -180
  00e588c  addic 7, 3, -386
  00e5890  sldi 9, 6, 4
  00e5894  sldi 8, 7, 5
  00e5898  subc 6, 6, 9
  00e589c  addc 7, 7, 8
  00e58a0  sldi 8, 6, 2
  00e58a4  subfic 7, 7, 0
  00e58a8  addc 6, 6, 8
  00e58ac  subc 6, 6, 7
  00e58b0  srwi 6, 6, 31
  00e58b4  cmpwi 6, 0
  00e58b8  bt 2, 0xe58f4
  00e58bc  addic 3, 3, -343
  00e58c0  addic 4, 4, -140
  00e58c4  sldi 6, 3, 5
  00e58c8  sldi 7, 4, 5
  00e58cc  subc 6, 6, 3
  00e58d0  subc 3, 6, 3
  00e58d4  subc 6, 4, 7
  00e58d8  sldi 4, 4, 3
  00e58dc  subc 4, 6, 4
  00e58e0  subc 3, 4, 3
  00e58e4  srwi 3, 3, 31
  00e58e8  cmpwi 3, 0
  00e58ec  bt 2, 0xe58f4
  00e58f0  li 5, 1
  00e58f4  ori 3, 5, 0
  00e58f8  b 0xe5a5c
  00e58fc  addic 5, 3, -143
  00e5900  addic 6, 4, -277
  00e5904  sldi 7, 5, 4
  00e5908  sldi 8, 6, 6
  00e590c  addc 7, 5, 7
  00e5910  subc 8, 6, 8
  00e5914  addc 7, 5, 7
  00e5918  addc 6, 6, 8
  00e591c  addic 9, 3, -231
  00e5920  sldi 5, 6, 2
  00e5924  addc 10, 7, 7
  00e5928  sldi 6, 9, 5
  00e592c  subc 8, 8, 5
  00e5930  addc 7, 7, 10
  00e5934  subc 9, 6, 9
  00e5938  subc 7, 8, 7
  00e593c  addic 5, 4, -264
  00e5940  sldi 8, 9, 2
  00e5944  srwi 7, 7, 31
  00e5948  sldi 10, 5, 6
  00e594c  subc 6, 8, 6
  00e5950  cmpwi 7, 0
  00e5954  subc 6, 10, 6
  00e5958  bf 2, 0xe5970
  00e595c  srwi 6, 6, 31
  00e5960  cmpwi 6, 0
  00e5964  bf 2, 0xe5970
  00e5968  li 3, 0
  00e596c  b 0xe5a5c
  00e5970  addic 6, 4, -351
  00e5974  addic 7, 3, -237
  00e5978  sldi 9, 6, 5
  00e597c  sldi 8, 7, 6
  00e5980  addc 9, 6, 9
  00e5984  sldi 10, 7, 4
  00e5988  addc 6, 6, 9
  00e598c  addc 7, 7, 8
  00e5990  sldi 6, 6, 2
  00e5994  addic 11, 4, -299
  00e5998  subc 6, 6, 9
  00e599c  mulli 8, 11, 205
  00e59a0  addic 9, 3, -162
  00e59a4  subfic 7, 7, 0
  00e59a8  sldi 11, 9, 5
  00e59ac  subc 7, 7, 10
  00e59b0  sldi 9, 9, 2
  00e59b4  subc 6, 6, 7
  00e59b8  subc 7, 11, 9
  00e59bc  srwi 9, 6, 31
  00e59c0  subc 6, 8, 7
  00e59c4  cmpwi 9, 0
  00e59c8  bf 2, 0xe59e0
  00e59cc  srwi 6, 6, 31
  00e59d0  cmpwi 6, 0
  00e59d4  bf 2, 0xe59e0
  00e59d8  li 3, 0
  00e59dc  b 0xe5a5c
  00e59e0  addic 6, 3, -306
  00e59e4  addic 4, 4, -355
  00e59e8  sldi 7, 6, 5
  00e59ec  sldi 8, 4, 4
  00e59f0  subc 7, 6, 7
  00e59f4  addic 3, 3, -194
  00e59f8  addc 6, 6, 7
  00e59fc  subc 4, 8, 4
  00e5a00  sldi 6, 6, 2
  00e5a04  sldi 8, 3, 4
  00e5a08  addc 6, 7, 6
  00e5a0c  addc 8, 3, 8
  00e5a10  sldi 9, 5, 8
  00e5a14  subc 4, 4, 6
  00e5a18  addc 6, 3, 8
  00e5a1c  subc 8, 9, 5
  00e5a20  sldi 7, 5, 5
  00e5a24  addc 3, 3, 6
  00e5a28  subc 5, 8, 5
  00e5a2c  srwi 4, 4, 31
  00e5a30  addc 3, 3, 3
  00e5a34  subc 5, 5, 7
  00e5a38  cmpwi 4, 0
  00e5a3c  subc 5, 5, 3
  00e5a40  bf 2, 0xe5a58
  00e5a44  srwi 3, 5, 31
  00e5a48  cmpwi 3, 0
  00e5a4c  bf 2, 0xe5a58
  00e5a50  li 3, 0
  00e5a54  b 0xe5a5c
  00e5a58  li 3, 1
  00e5a5c  blr

Map_RegionVisible_e5a68:   # 0xe5a68, 0xc0 bytes
  00e5a68  cmpwi 4, 187
  00e5a6c  bf 0, 0xe5abc
  00e5a70  lis 4, 151
  00e5a74  li 3, 0
  00e5a78  addic 4, 4, -25376
  00e5a7c  lwz 5, 8332(4)
  00e5a80  cmpwi 1, 5, 17
  00e5a84  cmpwi 5, 18
  00e5a88  cror 2, 2, 6
  00e5a8c  bt 2, 0xe5ab8
  00e5a90  lbz 4, 4836(4)
  00e5a94  cmpwi 4, 1
  00e5a98  bt 2, 0xe5ab8
  00e5a9c  lis 4, 162
  00e5aa0  addic 4, 4, 2088
  00e5aa4  lwz 4, 20(4)
  00e5aa8  cmpwi 4, 0
  00e5aac  bt 2, 0xe5ab8
  00e5ab0  li 3, 1
  00e5ab4  b 0xe5b24
  00e5ab8  b 0xe5b24
  00e5abc  lis 5, 14
  00e5ac0  addi 5, 5, 23136
  00e5ac4  lfs 1, 0(5)
  00e5ac8  fcmpu 0, 3, 1
  00e5acc  bt 0, 0xe5b20
  00e5ad0  lis 5, 14
  00e5ad4  addi 5, 5, 23136
  00e5ad8  lfs 1, 4(5)
  00e5adc  fcmpu 0, 3, 1
  00e5ae0  bt 1, 0xe5b20
  00e5ae4  addic 4, 4, -229
  00e5ae8  addic 3, 3, -266
  00e5aec  sldi 5, 4, 3
  00e5af0  sldi 6, 3, 4
  00e5af4  addc 4, 4, 5
  00e5af8  sldi 3, 3, 2
  00e5afc  addc 5, 5, 4
  00e5b00  addc 3, 6, 3
  00e5b04  addc 4, 5, 4
  00e5b08  subc 3, 4, 3
  00e5b0c  srwi 3, 3, 31
  00e5b10  cmpwi 3, 0
  00e5b14  bt 2, 0xe5b20
  00e5b18  li 3, 1
  00e5b1c  b 0xe5b24
  00e5b20  li 3, 0
  00e5b24  blr

Map_RegionVisible_e5b28:   # 0xe5b28, 0xa0 bytes
  00e5b28  addic 6, 4, -237
  00e5b2c  addic 7, 4, -247
  00e5b30  sldi 4, 6, 6
  00e5b34  addic 5, 3, -153
  00e5b38  addc 4, 6, 4
  00e5b3c  addc 8, 5, 5
  00e5b40  addc 6, 6, 4
  00e5b44  addc 9, 7, 7
  00e5b48  addc 5, 5, 8
  00e5b4c  sldi 6, 6, 2
  00e5b50  addc 8, 7, 9
  00e5b54  addc 5, 5, 5
  00e5b58  subc 4, 6, 4
  00e5b5c  lis 9, 162
  00e5b60  sldi 6, 8, 4
  00e5b64  sldi 8, 5, 3
  00e5b68  addic 3, 3, -270
  00e5b6c  addic 9, 9, 2088
  00e5b70  subc 5, 8, 5
  00e5b74  sldi 10, 3, 5
  00e5b78  subc 4, 4, 5
  00e5b7c  addc 8, 3, 10
  00e5b80  subc 5, 6, 7
  00e5b84  lwz 6, 12(9)
  00e5b88  addc 3, 3, 8
  00e5b8c  cmpwi 6, 0
  00e5b90  subc 3, 5, 3
  00e5b94  bf 2, 0xe5ba0
  00e5b98  li 3, 0
  00e5b9c  b 0xe5bc4
  00e5ba0  srwi 4, 4, 31
  00e5ba4  cmpwi 4, 0
  00e5ba8  bf 2, 0xe5bc0
  00e5bac  srwi 3, 3, 31
  00e5bb0  cmpwi 3, 0
  00e5bb4  bf 2, 0xe5bc0
  00e5bb8  li 3, 0
  00e5bbc  b 0xe5bc4
  00e5bc0  li 3, 1
  00e5bc4  blr

Map_RegionVisible_e5bd8:   # 0xe5bd8, 0x88 bytes
  00e5bd8  lis 3, 14
  00e5bdc  cmpwi 4, 157
  00e5be0  addi 3, 3, 23496
  00e5be4  bf 0, 0xe5c24
  00e5be8  lfs 1, 0(3)
  00e5bec  fcmpu 0, 3, 1
  00e5bf0  bt 0, 0xe5c14
  00e5bf4  lfs 1, 4(3)
  00e5bf8  fcmpu 0, 3, 1
  00e5bfc  bt 1, 0xe5c14
  00e5c00  lis 3, 162
  00e5c04  addic 3, 3, 2088
  00e5c08  lwz 3, 24(3)
  00e5c0c  cmpwi 3, 0
  00e5c10  bf 2, 0xe5c1c
  00e5c14  li 3, 0
  00e5c18  b 0xe5c5c
  00e5c1c  li 3, 1
  00e5c20  b 0xe5c5c
  00e5c24  lfs 1, 8(3)
  00e5c28  fcmpu 0, 3, 1
  00e5c2c  bt 0, 0xe5c50
  00e5c30  lfs 1, 12(3)
  00e5c34  fcmpu 0, 3, 1
  00e5c38  bt 1, 0xe5c50
  00e5c3c  lis 3, 162
  00e5c40  addic 3, 3, 2088
  00e5c44  lwz 3, 16(3)
  00e5c48  cmpwi 3, 0
  00e5c4c  bf 2, 0xe5c58
  00e5c50  li 3, 0
  00e5c54  b 0xe5c5c
  00e5c58  li 3, 1
  00e5c5c  blr

Map_RegionVisible_e5c68:   # 0xe5c68, 0xc4 bytes
  00e5c68  lis 6, 151
  00e5c6c  li 7, 0
  00e5c70  addic 6, 6, -25376
  00e5c74  cmpwi 1, 4, 192
  00e5c78  cmpwi 6, 4, 260
  00e5c7c  ori 5, 7, 0
  00e5c80  lwz 8, 8332(6)
  00e5c84  cmpwi 7, 8, 17
  00e5c88  cmpwi 8, 18
  00e5c8c  cror 2, 2, 30
  00e5c90  bt 2, 0xe5ca0
  00e5c94  lbz 6, 4836(6)
  00e5c98  cmpwi 6, 1
  00e5c9c  bf 2, 0xe5ca4
  00e5ca0  li 7, 1
  00e5ca4  bf 25, 0xe5ce0
  00e5ca8  lis 3, 162
  00e5cac  addic 3, 3, 2088
  00e5cb0  lwz 3, 4(3)
  00e5cb4  cmpwi 3, 0
  00e5cb8  bt 2, 0xe5cd8
  00e5cbc  lis 3, 14
  00e5cc0  addi 3, 3, 23648
  00e5cc4  lfs 1, 0(3)
  00e5cc8  fcmpu 0, 3, 1
  00e5ccc  bt 0, 0xe5cd8
  00e5cd0  li 3, 1
  00e5cd4  b 0xe5d28
  00e5cd8  ori 3, 5, 0
  00e5cdc  b 0xe5d28
  00e5ce0  bf 5, 0xe5d24
  00e5ce4  addic 3, 3, -217
  00e5ce8  addic 4, 4, -184
  00e5cec  sldi 6, 3, 3
  00e5cf0  sldi 8, 4, 7
  00e5cf4  addc 3, 3, 6
  00e5cf8  subc 8, 8, 4
  00e5cfc  addc 6, 6, 3
  00e5d00  subc 8, 8, 4
  00e5d04  addc 3, 6, 3
  00e5d08  subc 4, 8, 4
  00e5d0c  subc 3, 4, 3
  00e5d10  srwi 3, 3, 31
  00e5d14  cmpwi 3, 0
  00e5d18  bt 2, 0xe5d24
  00e5d1c  ori 3, 5, 0
  00e5d20  b 0xe5d28
  00e5d24  ori 3, 7, 0
  00e5d28  blr

Map_RegionVisible_e5d30:   # 0xe5d30, 0xb8 bytes
  00e5d30  lis 6, 151
  00e5d34  li 5, 0
  00e5d38  addic 6, 6, -25376
  00e5d3c  lwz 7, 8332(6)
  00e5d40  cmpwi 1, 7, 17
  00e5d44  cmpwi 7, 18
  00e5d48  cror 2, 2, 6
  00e5d4c  bt 2, 0xe5dd8
  00e5d50  lbz 6, 4836(6)
  00e5d54  cmpwi 6, 1
  00e5d58  bt 2, 0xe5dd8
  00e5d5c  lis 6, 14
  00e5d60  addi 6, 6, 23852
  00e5d64  lfs 1, 0(6)
  00e5d68  fcmpu 0, 3, 1
  00e5d6c  bt 0, 0xe5dd8
  00e5d70  addic 6, 4, -226
  00e5d74  mulli 6, 6, -107
  00e5d78  addic 7, 3, -305
  00e5d7c  sldi 8, 7, 6
  00e5d80  sldi 9, 7, 4
  00e5d84  subc 7, 7, 8
  00e5d88  subc 7, 7, 9
  00e5d8c  subc 6, 6, 7
  00e5d90  srwi 6, 6, 31
  00e5d94  cmpwi 6, 0
  00e5d98  bf 2, 0xe5dd8
  00e5d9c  addic 3, 3, -400
  00e5da0  addic 4, 4, -137
  00e5da4  sldi 8, 3, 7
  00e5da8  addc 7, 4, 4
  00e5dac  addc 8, 3, 8
  00e5db0  addc 7, 4, 7
  00e5db4  sldi 6, 3, 4
  00e5db8  sldi 7, 7, 6
  00e5dbc  addc 3, 3, 8
  00e5dc0  subc 4, 4, 7
  00e5dc4  subc 3, 3, 6
  00e5dc8  subc 3, 4, 3
  00e5dcc  srwi 3, 3, 31
  00e5dd0  cmpwi 3, 0
  00e5dd4  bt 2, 0xe5de0
  00e5dd8  ori 3, 5, 0
  00e5ddc  b 0xe5de4
  00e5de0  li 3, 1
  00e5de4  blr

Map_RegionVisible_e5de8:   # 0xe5de8, 0x4c bytes
  00e5de8  lis 3, 151
  00e5dec  lis 5, 151
  00e5df0  addic 3, 3, -25376
  00e5df4  addic 5, 5, -16400
  00e5df8  li 6, 256
  00e5dfc  subc 4, 6, 4
  00e5e00  lwz 3, 8332(3)
  00e5e04  lbz 5, 53(5)
  00e5e08  addic 3, 3, -15
  00e5e0c  cntlzw 5, 5
  00e5e10  cntlzw 3, 3
  00e5e14  rlwinm 5, 5, 27, 31, 31
  00e5e18  rlwinm 3, 3, 27, 31, 31
  00e5e1c  xori 5, 5, 1
  00e5e20  sradi 4, 4, 63
  00e5e24  subc 3, 3, 5
  00e5e28  and 3, 4, 3
  00e5e2c  addc 3, 5, 3
  00e5e30  blr

Map_RegionVisible_e5e40:   # 0xe5e40, 0x4c bytes
  00e5e40  cmpwi 3, 224
  00e5e44  bf 0, 0xe5e68
  00e5e48  lis 3, 14
  00e5e4c  addi 3, 3, 24116
  00e5e50  lfs 1, 0(3)
  00e5e54  li 3, 0
  00e5e58  fcmpu 0, 3, 1
  00e5e5c  bt 0, 0xe5e64
  00e5e60  li 3, 1
  00e5e64  b 0xe5e88
  00e5e68  lis 3, 14
  00e5e6c  addi 4, 3, 24116
  00e5e70  li 3, 0
  00e5e74  lfs 1, 4(4)
  00e5e78  fcmpu 0, 3, 1
  00e5e7c  cror 6, 1, 2
  00e5e80  bt 6, 0xe5e88
  00e5e84  li 3, 1
  00e5e88  blr

Map_RegionVisible_e5e98:   # 0xe5e98, 0x54 bytes
  00e5e98  lis 4, 14
  00e5e9c  cmpwi 3, 224
  00e5ea0  addi 3, 4, 24204
  00e5ea4  bf 0, 0xe5ed0
  00e5ea8  lfs 1, 0(3)
  00e5eac  li 4, 0
  00e5eb0  fcmpu 0, 3, 1
  00e5eb4  bt 0, 0xe5ec8
  00e5eb8  lfs 1, 4(3)
  00e5ebc  fcmpu 0, 3, 1
  00e5ec0  bt 1, 0xe5ec8
  00e5ec4  li 4, 1
  00e5ec8  ori 3, 4, 0
  00e5ecc  b 0xe5ee8
  00e5ed0  ori 4, 3, 0
  00e5ed4  li 3, 0
  00e5ed8  lfs 1, 8(4)
  00e5edc  fcmpu 0, 3, 1
  00e5ee0  bt 0, 0xe5ee8
  00e5ee4  li 3, 1
  00e5ee8  blr

Map_RegionVisible_e5ef8:   # 0xe5ef8, 0x54 bytes
  00e5ef8  lis 4, 14
  00e5efc  cmpwi 3, 224
  00e5f00  addi 3, 4, 24300
  00e5f04  bf 0, 0xe5f30
  00e5f08  lfs 1, 0(3)
  00e5f0c  li 4, 0
  00e5f10  fcmpu 0, 3, 1
  00e5f14  bt 0, 0xe5f28
  00e5f18  lfs 1, 4(3)
  00e5f1c  fcmpu 0, 3, 1
  00e5f20  bt 1, 0xe5f28
  00e5f24  li 4, 1
  00e5f28  ori 3, 4, 0
  00e5f2c  b 0xe5f48
  00e5f30  ori 4, 3, 0
  00e5f34  li 3, 0
  00e5f38  lfs 1, 8(4)
  00e5f3c  fcmpu 0, 3, 1
  00e5f40  bt 0, 0xe5f48
  00e5f44  li 3, 1
  00e5f48  blr

Map_RegionVisible_e5f50:   # 0xe5f50, 0x2c bytes
  00e5f50  ori 4, 3, 0
  00e5f54  li 3, 0
  00e5f58  cmpwi 4, 224
  00e5f5c  bf 0, 0xe5f78
  00e5f60  lis 4, 14
  00e5f64  addi 4, 4, 24396
  00e5f68  lfs 1, 0(4)
  00e5f6c  fcmpu 0, 3, 1
  00e5f70  bt 1, 0xe5f78
  00e5f74  li 3, 1
  00e5f78  blr

Map_RegionVisible_e5f7c:   # 0xe5f7c, 0x1c bytes
  00e5f7c  lis 3, 151
  00e5f80  addic 3, 3, -16400
  00e5f84  lbz 3, 48(3)
  00e5f88  cntlzw 3, 3
  00e5f8c  rlwinm 3, 3, 27, 31, 31
  00e5f90  xori 3, 3, 1
  00e5f94  blr

Map_RegionVisible_e5f98:   # 0xe5f98, 0x1c bytes
  00e5f98  lis 3, 151
  00e5f9c  addic 3, 3, -16400
  00e5fa0  lbz 3, 49(3)
  00e5fa4  cntlzw 3, 3
  00e5fa8  rlwinm 3, 3, 27, 31, 31
  00e5fac  xori 3, 3, 1
  00e5fb0  blr

Map_RegionVisible_e5fb4:   # 0xe5fb4, 0x1c bytes
  00e5fb4  lis 3, 151
  00e5fb8  addic 3, 3, -16400
  00e5fbc  lbz 3, 50(3)
  00e5fc0  cntlzw 3, 3
  00e5fc4  rlwinm 3, 3, 27, 31, 31
  00e5fc8  xori 3, 3, 1
  00e5fcc  blr

Map_RegionVisible_e5fd0:   # 0xe5fd0, 0x1c bytes
  00e5fd0  lis 3, 151
  00e5fd4  addic 3, 3, -16400
  00e5fd8  lbz 3, 67(3)
  00e5fdc  cntlzw 3, 3
  00e5fe0  rlwinm 3, 3, 27, 31, 31
  00e5fe4  xori 3, 3, 1
  00e5fe8  blr

Map_RegionVisible_e5fec:   # 0xe5fec, 0x1c bytes
  00e5fec  lis 3, 151
  00e5ff0  addic 3, 3, -16400
  00e5ff4  lbz 3, 68(3)
  00e5ff8  cntlzw 3, 3
  00e5ffc  rlwinm 3, 3, 27, 31, 31
  00e6000  xori 3, 3, 1
  00e6004  blr

Map_RegionVisible_e6008:   # 0xe6008, 0x1c bytes
  00e6008  lis 3, 151
  00e600c  addic 3, 3, -16400
  00e6010  lbz 3, 69(3)
  00e6014  cntlzw 3, 3
  00e6018  rlwinm 3, 3, 27, 31, 31
  00e601c  xori 3, 3, 1
  00e6020  blr

Map_RegionVisible_e6028:   # 0xe6028, 0x44 bytes
  00e6028  cmpwi 3, 190
  00e602c  bt 0, 0xe604c
  00e6030  lis 3, 151
  00e6034  addic 3, 3, -16400
  00e6038  lbz 3, 80(3)
  00e603c  cntlzw 3, 3
  00e6040  rlwinm 3, 3, 27, 31, 31
  00e6044  xori 3, 3, 1
  00e6048  b 0xe6068
  00e604c  lis 3, 14
  00e6050  addi 4, 3, 24612
  00e6054  li 3, 0
  00e6058  lfs 1, 0(4)
  00e605c  fcmpu 0, 3, 1
  00e6060  bt 0, 0xe6068
  00e6064  li 3, 1
  00e6068  blr

Map_RegionVisible_e606c:   # 0xe606c, 0x1c bytes
  00e606c  lis 3, 151
  00e6070  addic 3, 3, -16400
  00e6074  lbz 3, 76(3)
  00e6078  cntlzw 3, 3
  00e607c  rlwinm 3, 3, 27, 31, 31
  00e6080  xori 3, 3, 1
  00e6084  blr

Map_RegionVisible_e6088:   # 0xe6088, 0x1c bytes
  00e6088  lis 3, 151
  00e608c  addic 3, 3, -16400
  00e6090  lbz 3, 77(3)
  00e6094  cntlzw 3, 3
  00e6098  rlwinm 3, 3, 27, 31, 31
  00e609c  xori 3, 3, 1
  00e60a0  blr

Map_RegionVisible_e60a4:   # 0xe60a4, 0x1c bytes
  00e60a4  lis 3, 151
  00e60a8  addic 3, 3, -16400
  00e60ac  lbz 3, 78(3)
  00e60b0  cntlzw 3, 3
  00e60b4  rlwinm 3, 3, 27, 31, 31
  00e60b8  xori 3, 3, 1
  00e60bc  blr

Map_RegionVisible_e60c0:   # 0xe60c0, 0x1c bytes
  00e60c0  lis 3, 151
  00e60c4  addic 3, 3, -16400
  00e60c8  lbz 3, 79(3)
  00e60cc  cntlzw 3, 3
  00e60d0  rlwinm 3, 3, 27, 31, 31
  00e60d4  xori 3, 3, 1
  00e60d8  blr

Map_RegionVisible_e60dc:   # 0xe60dc, 0x1c bytes
  00e60dc  lis 3, 151
  00e60e0  addic 3, 3, -16400
  00e60e4  lbz 3, 81(3)
  00e60e8  cntlzw 3, 3
  00e60ec  rlwinm 3, 3, 27, 31, 31
  00e60f0  xori 3, 3, 1
  00e60f4  blr

Map_RegionVisible_e6108:   # 0xe6108, 0x64 bytes
  00e6108  lis 4, 14
  00e610c  cmpwi 3, 220
  00e6110  addi 3, 4, 24824
  00e6114  bt 1, 0xe6154
  00e6118  lfs 1, 0(3)
  00e611c  li 4, 0
  00e6120  fcmpu 0, 3, 1
  00e6124  bt 0, 0xe614c
  00e6128  lfs 1, 4(3)
  00e612c  fcmpu 0, 3, 1
  00e6130  bt 1, 0xe614c
  00e6134  lis 3, 151
  00e6138  addic 3, 3, -16400
  00e613c  lbz 3, 86(3)
  00e6140  cmpwi 3, 0
  00e6144  bt 2, 0xe614c
  00e6148  li 4, 1
  00e614c  ori 3, 4, 0
  00e6150  b 0xe6168
  00e6154  lfs 1, 8(3)
  00e6158  li 3, 0
  00e615c  fcmpu 0, 3, 1
  00e6160  bt 1, 0xe6168
  00e6164  li 3, 1
  00e6168  blr

Map_RegionVisible_e6178:   # 0xe6178, 0x5c bytes
  00e6178  cmpwi 3, 220
  00e617c  bt 1, 0xe61a0
  00e6180  lis 3, 14
  00e6184  addi 3, 3, 24940
  00e6188  lfs 1, 0(3)
  00e618c  li 3, 0
  00e6190  fcmpu 0, 3, 1
  00e6194  bt 0, 0xe619c
  00e6198  li 3, 1
  00e619c  b 0xe61d0
  00e61a0  lis 3, 14
  00e61a4  addi 3, 3, 24940
  00e61a8  lfs 1, 4(3)
  00e61ac  li 3, 0
  00e61b0  fcmpu 0, 3, 1
  00e61b4  bt 1, 0xe61d0
  00e61b8  lis 4, 151
  00e61bc  addic 4, 4, -16400
  00e61c0  lbz 4, 87(4)
  00e61c4  cmpwi 4, 0
  00e61c8  bt 2, 0xe61d0
  00e61cc  li 3, 1
  00e61d0  blr

Map_RegionVisible_e61e0:   # 0xe61e0, 0x68 bytes
  00e61e0  lis 4, 14
  00e61e4  cmpwi 3, 220
  00e61e8  addi 3, 4, 25044
  00e61ec  bt 1, 0xe6218
  00e61f0  lfs 1, 0(3)
  00e61f4  li 4, 0
  00e61f8  fcmpu 0, 3, 1
  00e61fc  bt 0, 0xe6210
  00e6200  lfs 1, 4(3)
  00e6204  fcmpu 0, 3, 1
  00e6208  bt 1, 0xe6210
  00e620c  li 4, 1
  00e6210  ori 3, 4, 0
  00e6214  b 0xe6244
  00e6218  ori 4, 3, 0
  00e621c  li 3, 0
  00e6220  lfs 1, 8(4)
  00e6224  fcmpu 0, 3, 1
  00e6228  bt 1, 0xe6244
  00e622c  lis 4, 151
  00e6230  addic 4, 4, -16400
  00e6234  lbz 4, 88(4)
  00e6238  cmpwi 4, 0
  00e623c  bt 2, 0xe6244
  00e6240  li 3, 1
  00e6244  blr

Map_RegionVisible_e6258:   # 0xe6258, 0x94 bytes
  00e6258  lis 6, 151
  00e625c  lis 4, 14
  00e6260  addic 6, 6, -25376
  00e6264  li 5, 0
  00e6268  cmpwi 1, 3, 350
  00e626c  addi 4, 4, 25160
  00e6270  ori 3, 5, 0
  00e6274  lwz 7, 8332(6)
  00e6278  cmpwi 6, 7, 17
  00e627c  cmpwi 7, 18
  00e6280  cror 2, 2, 26
  00e6284  bt 2, 0xe6294
  00e6288  lbz 6, 4836(6)
  00e628c  cmpwi 6, 1
  00e6290  bf 2, 0xe6298
  00e6294  li 5, 1
  00e6298  bt 5, 0xe62b8
  00e629c  lfs 1, 0(4)
  00e62a0  cmpwi 1, 5, 0
  00e62a4  fcmpu 0, 3, 1
  00e62a8  cror 2, 0, 6
  00e62ac  bt 2, 0xe62b4
  00e62b0  li 3, 1
  00e62b4  b 0xe62e8
  00e62b8  lfs 1, 4(4)
  00e62bc  fcmpu 0, 3, 1
  00e62c0  bt 0, 0xe62e8
  00e62c4  lfs 1, 8(4)
  00e62c8  fcmpu 0, 3, 1
  00e62cc  bt 1, 0xe62e8
  00e62d0  lis 4, 151
  00e62d4  addic 4, 4, -16400
  00e62d8  lbz 4, 90(4)
  00e62dc  cmpwi 4, 0
  00e62e0  bt 2, 0xe62e8
  00e62e4  li 3, 1
  00e62e8  blr

Map_RegionVisible_e6300:   # 0xe6300, 0x74 bytes
  00e6300  lis 4, 14
  00e6304  cmpwi 3, 350
  00e6308  addi 3, 4, 25324
  00e630c  bt 1, 0xe6338
  00e6310  lfs 1, 0(3)
  00e6314  li 4, 0
  00e6318  fcmpu 0, 3, 1
  00e631c  bt 0, 0xe6330
  00e6320  lfs 1, 4(3)
  00e6324  fcmpu 0, 3, 1
  00e6328  bt 1, 0xe6330
  00e632c  li 4, 1
  00e6330  ori 3, 4, 0
  00e6334  b 0xe6370
  00e6338  lfs 1, 8(3)
  00e633c  li 4, 0
  00e6340  fcmpu 0, 3, 1
  00e6344  bt 0, 0xe636c
  00e6348  lfs 1, 12(3)
  00e634c  fcmpu 0, 3, 1
  00e6350  bt 1, 0xe636c
  00e6354  lis 3, 151
  00e6358  addic 3, 3, -16400
  00e635c  lbz 3, 91(3)
  00e6360  cmpwi 3, 0
  00e6364  bt 2, 0xe636c
  00e6368  li 4, 1
  00e636c  ori 3, 4, 0
  00e6370  blr

Map_RegionVisible_e6374:   # 0xe6374, 0x1c bytes
  00e6374  lis 3, 151
  00e6378  addic 3, 3, -16400
  00e637c  lbz 3, 89(3)
  00e6380  cntlzw 3, 3
  00e6384  rlwinm 3, 3, 27, 31, 31
  00e6388  xori 3, 3, 1
  00e638c  blr

Map_RegionVisible_e6398:   # 0xe6398, 0x30 bytes
  00e6398  cmpwi 4, 320
  00e639c  li 3, 1
  00e63a0  bt 1, 0xe63c4
  00e63a4  lis 4, 14
  00e63a8  addi 5, 4, 25488
  00e63ac  li 4, 0
  00e63b0  lfs 1, 0(5)
  00e63b4  fcmpu 0, 3, 1
  00e63b8  bt 0, 0xe63c0
  00e63bc  ori 4, 3, 0
  00e63c0  ori 3, 4, 0
  00e63c4  blr

Map_RegionVisible_e63c8:   # 0xe63c8, 0x8 bytes
  00e63c8  li 3, 1
  00e63cc  blr

Map_RegionVisible_e63d0:   # 0xe63d0, 0x8 bytes
  00e63d0  li 3, 1
  00e63d4  blr

Map_RegionVisible_e63e8:   # 0xe63e8, 0x88 bytes
  00e63e8  stdu 1, -128(1)
  00e63ec  lis 5, 162
  00e63f0  lwz 5, 2088(5)
  00e63f4  cmpwi 5, 0
  00e63f8  bt 2, 0xe6404
  00e63fc  li 3, 1
  00e6400  b 0xe6468
  00e6404  extsw 3, 3
  00e6408  lis 5, 14
  00e640c  extsw 4, 4
  00e6410  std 3, 112(1)
  00e6414  addi 3, 5, 25560
  00e6418  lfs 1, 0(3)
  00e641c  lfd 2, 112(1)
  00e6420  std 4, 112(1)
  00e6424  fcfid 2, 2
  00e6428  lfs 3, 4(3)
  00e642c  lfd 4, 112(1)
  00e6430  fcfid 4, 4
  00e6434  frsp 2, 2
  00e6438  fsubs 1, 2, 1
  00e643c  frsp 2, 4
  00e6440  fsubs 2, 2, 3
  00e6444  fmuls 2, 2, 2
  00e6448  fmadds 1, 1, 1, 2
  00e644c  lfs 2, 8(3)
  00e6450  fsqrts 1, 1
  00e6454  fcmpu 0, 1, 2
  00e6458  bt 1, 0xe6464
  00e645c  li 3, 1
  00e6460  b 0xe6468
  00e6464  li 3, 0
  00e6468  addi 1, 1, 128
  00e646c  blr

Map_RegionVisible_e6470:   # 0xe6470, 0x1c bytes
  00e6470  lis 3, 151
  00e6474  addic 3, 3, -16400
  00e6478  lbz 3, 114(3)
  00e647c  cntlzw 3, 3
  00e6480  rlwinm 3, 3, 27, 31, 31
  00e6484  xori 3, 3, 1
  00e6488  blr

Map_RegionVisible_e648c:   # 0xe648c, 0x1c bytes
  00e648c  lis 3, 151
  00e6490  addic 3, 3, -16400
  00e6494  lbz 3, 115(3)
  00e6498  cntlzw 3, 3
  00e649c  rlwinm 3, 3, 27, 31, 31
  00e64a0  xori 3, 3, 1
  00e64a4  blr

Map_RegionVisible_e64a8:   # 0xe64a8, 0x1c bytes
  00e64a8  lis 3, 151
  00e64ac  addic 3, 3, -16400
  00e64b0  lbz 3, 116(3)
  00e64b4  cntlzw 3, 3
  00e64b8  rlwinm 3, 3, 27, 31, 31
  00e64bc  xori 3, 3, 1
  00e64c0  blr

Map_RegionVisible_e64c4:   # 0xe64c4, 0x1c bytes
  00e64c4  lis 3, 151
  00e64c8  addic 3, 3, -16400
  00e64cc  lbz 3, 117(3)
  00e64d0  cntlzw 3, 3
  00e64d4  rlwinm 3, 3, 27, 31, 31
  00e64d8  xori 3, 3, 1
  00e64dc  blr

Map_RegionVisible_e64e0:   # 0xe64e0, 0x1c bytes
  00e64e0  lis 3, 151
  00e64e4  addic 3, 3, -16400
  00e64e8  lbz 3, 127(3)
  00e64ec  cntlzw 3, 3
  00e64f0  rlwinm 3, 3, 27, 31, 31
  00e64f4  xori 3, 3, 1
  00e64f8  blr

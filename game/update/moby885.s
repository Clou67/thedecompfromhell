# game/update/moby885.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M936_004a1674:   # 0x4a1674, 0x14 bytes
  04a1674  lis 3, 141
  04a1678  lis 4, 1
  04a167c  addic 3, 3, -16732
  04a1680  stw 4, 72(3)
  04a1684  blr

M936_004a1688:   # 0x4a1688, 0x28 bytes
  04a1688  stdu 1, -112(1)
  04a168c  mflr 0
  04a1690  std 0, 128(1)
  04a1694  li 4, 2
  04a1698  bl 0x1042ec
  04a169c  nop
  04a16a0  ld 0, 128(1)
  04a16a4  mtlr 0
  04a16a8  addi 1, 1, 112
  04a16ac  blr

UpdateMoby_885:   # 0x4a1708, 0x994 bytes
  04a1708  stdu 1, -512(1)
  04a170c  mflr 0
  04a1710  std 0, 528(1)
  04a1714  stfd 19, 408(1)
  04a1718  stfd 20, 416(1)
  04a171c  stfd 21, 424(1)
  04a1720  stfd 22, 432(1)
  04a1724  stfd 23, 440(1)
  04a1728  stfd 24, 448(1)
  04a172c  stfd 25, 456(1)
  04a1730  stfd 26, 464(1)
  04a1734  stfd 27, 472(1)
  04a1738  stfd 28, 480(1)
  04a173c  stfd 29, 488(1)
  04a1740  stfd 30, 496(1)
  04a1744  stfd 31, 504(1)
  04a1748  std 31, 400(1)
  04a174c  addi 0, 1, 304
  04a1750  stvx 30, 0, 0
  04a1754  addic 0, 0, 16
  04a1758  stvx 31, 0, 0
  04a175c  ori 31, 3, 0
  04a1760  std 30, 392(1)
  04a1764  lbz 3, 32(31)
  04a1768  lwz 30, 120(31)
  04a176c  cmpwi 3, 1
  04a1770  cmpwi 1, 3, 3
  04a1774  cmpwi 6, 3, 2
  04a1778  std 29, 384(1)
  04a177c  std 28, 376(1)
  04a1780  std 27, 368(1)
  04a1784  std 26, 360(1)
  04a1788  std 25, 352(1)
  04a178c  std 24, 344(1)
  04a1790  std 23, 336(1)
  04a1794  cmpwi 7, 3, 0
  04a1798  bt 1, 0x4a17ac
  04a179c  cmpwi 3, -1
  04a17a0  bf 1, 0x4a2024
  04a17a4  bf 29, 0x4a17b8
  04a17a8  b 0x4a1820
  04a17ac  bf 25, 0x4a1870
  04a17b0  bf 5, 0x4a1f38
  04a17b4  b 0x4a2024
  04a17b8  lbz 3, 176(31)
  04a17bc  cmpwi 3, 255
  04a17c0  bt 2, 0x4a1800
  04a17c4  lis 4, 151
  04a17c8  lis 5, 161
  04a17cc  addic 5, 5, -13692
  04a17d0  lwz 4, -25488(4)
  04a17d4  addc 3, 3, 5
  04a17d8  slwi 4, 4, 4
  04a17dc  clrldi 3, 3, 32
  04a17e0  extsw 4, 4
  04a17e4  lbzx 3, 3, 4
  04a17e8  cmpwi 3, 255
  04a17ec  bf 2, 0x4a1800
  04a17f0  ori 3, 31, 0
  04a17f4  bl 0xefb38
  04a17f8  nop
  04a17fc  b 0x4a2024
  04a1800  li 3, 1
  04a1804  stb 3, 32(31)
  04a1808  lwz 31, 0(30)
  04a180c  cmpwi 31, 0
  04a1810  bt 2, 0x4a2024
  04a1814  li 3, 3
  04a1818  stw 3, 0(31)
  04a181c  b 0x4a2024
  04a1820  ori 3, 31, 0
  04a1824  lis 4, 8
  04a1828  li 5, 0
  04a182c  bl 0x10675c
  04a1830  nop
  04a1834  cmpwi 3, 0
  04a1838  bt 2, 0x4a1864
  04a183c  li 4, 2
  04a1840  lbz 3, 33(31)
  04a1844  bl 0x1042ec
  04a1848  nop
  04a184c  li 3, 0
  04a1850  li 4, 0
  04a1854  ori 5, 31, 0
  04a1858  li 6, 885
  04a185c  bl 0x15d204
  04a1860  nop
  04a1864  li 3, 255
  04a1868  stb 3, 164(31)
  04a186c  b 0x4a2024
  04a1870  lhz 3, 166(31)
  04a1874  cmpwi 3, 892
  04a1878  bf 2, 0x4a1dd8
  04a187c  lis 3, 74
  04a1880  vspltisw 31, 0
  04a1884  li 30, 0
  04a1888  addi 3, 3, 5808
  04a188c  ori 29, 30, 0
  04a1890  lvlx 30, 0, 3
  04a1894  lfs 31, 0(3)
  04a1898  vspltw 30, 30, 0
  04a189c  vcmpgefp. 2, 31, 30
  04a18a0  bf 26, 0x4a1b58
  04a18a4  lis 3, 74
  04a18a8  lis 28, 161
  04a18ac  addi 3, 3, 5808
  04a18b0  addic 28, 28, 23856
  04a18b4  lfs 30, 4(3)
  04a18b8  lfs 29, 8(3)
  04a18bc  lfs 28, 12(3)
  04a18c0  lfs 27, 16(3)
  04a18c4  lfs 26, 20(3)
  04a18c8  lfs 25, 24(3)
  04a18cc  lfs 24, 28(3)
  04a18d0  lfs 23, 32(3)
  04a18d4  lfs 22, 36(3)
  04a18d8  lfs 21, 40(3)
  04a18dc  lfs 20, 44(3)
  04a18e0  fmr 1, 30
  04a18e4  fmr 2, 31
  04a18e8  bl 0xfcbe8
  04a18ec  nop
  04a18f0  lis 3, 114
  04a18f4  lis 5, 20224
  04a18f8  lis 4, 20224
  04a18fc  ori 5, 5, 36863
  04a1900  ori 4, 4, 28671
  04a1904  lfs 2, -3052(3)
  04a1908  lis 3, 20224
  04a190c  lis 6, 12287
  04a1910  ori 3, 3, 32767
  04a1914  stw 5, 192(1)
  04a1918  ori 6, 6, 65535
  04a191c  stw 5, 196(1)
  04a1920  lis 7, 12032
  04a1924  stw 4, 204(1)
  04a1928  lis 8, 12032
  04a192c  fmuls 19, 1, 2
  04a1930  ori 5, 7, 24447
  04a1934  stw 3, 200(1)
  04a1938  ori 3, 8, 20351
  04a193c  stw 6, 208(1)
  04a1940  lis 4, 12032
  04a1944  stw 6, 212(1)
  04a1948  lis 7, 12032
  04a194c  fmr 1, 29
  04a1950  ori 4, 4, 16255
  04a1954  stw 5, 216(1)
  04a1958  ori 5, 7, 79
  04a195c  stw 3, 220(1)
  04a1960  lis 3, 12032
  04a1964  lis 6, 16128
  04a1968  stw 4, 224(1)
  04a196c  stw 5, 228(1)
  04a1970  stw 3, 232(1)
  04a1974  stw 6, 236(1)
  04a1978  lfs 2, 16(31)
  04a197c  lfs 3, 20(31)
  04a1980  stfs 2, 128(1)
  04a1984  lfs 4, 24(31)
  04a1988  stfs 3, 132(1)
  04a198c  fmr 2, 28
  04a1990  lfs 3, 28(31)
  04a1994  stfs 4, 136(1)
  04a1998  stfs 3, 140(1)
  04a199c  bl 0xfcbe8
  04a19a0  nop
  04a19a4  lfs 2, 136(1)
  04a19a8  li 3, 6
  04a19ac  fadds 1, 2, 1
  04a19b0  stfs 1, 136(1)
  04a19b4  bl 0xfc620
  04a19b8  nop
  04a19bc  sldi 3, 3, 2
  04a19c0  addc 3, 3, 1
  04a19c4  clrldi 4, 3, 32
  04a19c8  li 3, 6
  04a19cc  lwz 4, 192(4)
  04a19d0  extsw 27, 4
  04a19d4  bl 0xfc620
  04a19d8  nop
  04a19dc  lis 26, 114
  04a19e0  sldi 3, 3, 2
  04a19e4  addc 3, 3, 1
  04a19e8  lfs 1, -3056(26)
  04a19ec  clrldi 3, 3, 32
  04a19f0  fmuls 2, 1, 26
  04a19f4  fmuls 1, 1, 25
  04a19f8  lwz 3, 216(3)
  04a19fc  extsw 25, 3
  04a1a00  fctiwz 2, 2
  04a1a04  fctiwz 1, 1
  04a1a08  stfd 2, 288(1)
  04a1a0c  lwz 3, 292(1)
  04a1a10  stfd 1, 288(1)
  04a1a14  lwz 4, 292(1)
  04a1a18  extsw 3, 3
  04a1a1c  extsw 4, 4
  04a1a20  bl 0xfe484
  04a1a24  nop
  04a1a28  lfs 1, -3056(26)
  04a1a2c  ori 24, 3, 0
  04a1a30  fmuls 2, 1, 24
  04a1a34  fmuls 1, 1, 23
  04a1a38  fctiwz 2, 2
  04a1a3c  fctiwz 1, 1
  04a1a40  stfd 2, 288(1)
  04a1a44  lwz 3, 292(1)
  04a1a48  stfd 1, 288(1)
  04a1a4c  lwz 4, 292(1)
  04a1a50  extsw 3, 3
  04a1a54  extsw 4, 4
  04a1a58  bl 0xfe484
  04a1a5c  nop
  04a1a60  addic 23, 1, 128
  04a1a64  std 29, 112(1)
  04a1a68  ori 9, 3, 0
  04a1a6c  fmr 1, 27
  04a1a70  std 29, 120(1)
  04a1a74  ori 4, 28, 0
  04a1a78  ori 8, 24, 0
  04a1a7c  fmr 2, 19
  04a1a80  ori 3, 23, 0
  04a1a84  ori 5, 27, 0
  04a1a88  ori 6, 25, 0
  04a1a8c  bl 0x123390
  04a1a90  nop
  04a1a94  lfs 1, -3056(26)
  04a1a98  fmuls 2, 1, 22
  04a1a9c  fmuls 1, 1, 21
  04a1aa0  fctiwz 2, 2
  04a1aa4  fctiwz 1, 1
  04a1aa8  stfd 2, 288(1)
  04a1aac  lwz 3, 292(1)
  04a1ab0  stfd 1, 288(1)
  04a1ab4  lwz 4, 292(1)
  04a1ab8  extsw 3, 3
  04a1abc  extsw 4, 4
  04a1ac0  bl 0xfe484
  04a1ac4  nop
  04a1ac8  lfs 1, -3056(26)
  04a1acc  ori 27, 3, 0
  04a1ad0  fmuls 2, 1, 26
  04a1ad4  fmuls 1, 1, 25
  04a1ad8  fctiwz 2, 2
  04a1adc  fctiwz 1, 1
  04a1ae0  stfd 2, 288(1)
  04a1ae4  lwz 3, 292(1)
  04a1ae8  stfd 1, 288(1)
  04a1aec  lwz 4, 292(1)
  04a1af0  extsw 3, 3
  04a1af4  extsw 4, 4
  04a1af8  bl 0xfe484
  04a1afc  nop
  04a1b00  lis 5, 32767
  04a1b04  std 29, 112(1)
  04a1b08  lis 6, 255
  04a1b0c  fmuls 2, 19, 20
  04a1b10  ori 9, 3, 0
  04a1b14  fmr 1, 27
  04a1b18  ori 8, 27, 0
  04a1b1c  std 29, 120(1)
  04a1b20  ori 3, 23, 0
  04a1b24  ori 4, 28, 0
  04a1b28  ori 5, 5, 65535
  04a1b2c  ori 6, 6, 65535
  04a1b30  bl 0x123390
  04a1b34  nop
  04a1b38  addic 30, 30, 1
  04a1b3c  extsw 3, 30
  04a1b40  std 3, 288(1)
  04a1b44  lfd 1, 288(1)
  04a1b48  fcfid 1, 1
  04a1b4c  frsp 1, 1
  04a1b50  fcmpu 0, 1, 31
  04a1b54  bt 0, 0x4a18e0
  04a1b58  vcmpgefp. 2, 31, 30
  04a1b5c  ori 30, 29, 0
  04a1b60  bf 26, 0x4a1dc8
  04a1b64  lis 3, 74
  04a1b68  addi 3, 3, 5808
  04a1b6c  lfs 30, 8(3)
  04a1b70  lfs 29, 12(3)
  04a1b74  lfs 28, 48(3)
  04a1b78  lfs 27, 52(3)
  04a1b7c  lfs 26, 56(3)
  04a1b80  lfs 25, 60(3)
  04a1b84  lfs 24, 28(3)
  04a1b88  lfs 23, 32(3)
  04a1b8c  fmr 1, 30
  04a1b90  lfs 3, 16(31)
  04a1b94  fmr 2, 29
  04a1b98  lfs 4, 20(31)
  04a1b9c  stfs 3, 144(1)
  04a1ba0  lfs 3, 24(31)
  04a1ba4  stfs 4, 148(1)
  04a1ba8  lfs 4, 28(31)
  04a1bac  stfs 3, 152(1)
  04a1bb0  stfs 4, 156(1)
  04a1bb4  bl 0xfcbe8
  04a1bb8  nop
  04a1bbc  lfs 2, 152(1)
  04a1bc0  lis 3, 20224
  04a1bc4  fadds 1, 2, 1
  04a1bc8  lis 5, 12287
  04a1bcc  fmr 2, 27
  04a1bd0  ori 3, 3, 36863
  04a1bd4  lis 4, 20224
  04a1bd8  ori 5, 5, 65535
  04a1bdc  lis 6, 20224
  04a1be0  stw 3, 240(1)
  04a1be4  ori 4, 4, 32767
  04a1be8  stw 3, 244(1)
  04a1bec  lis 7, 12032
  04a1bf0  ori 3, 6, 28671
  04a1bf4  stw 5, 256(1)
  04a1bf8  stw 5, 260(1)
  04a1bfc  lis 6, 12032
  04a1c00  stw 4, 248(1)
  04a1c04  ori 5, 7, 24447
  04a1c08  lis 4, 12032
  04a1c0c  stfs 1, 152(1)
  04a1c10  ori 6, 6, 20351
  04a1c14  stw 3, 252(1)
  04a1c18  lis 3, 12032
  04a1c1c  stw 5, 264(1)
  04a1c20  ori 4, 4, 16255
  04a1c24  fmr 1, 28
  04a1c28  ori 3, 3, 79
  04a1c2c  lis 5, 12032
  04a1c30  stw 6, 268(1)
  04a1c34  lis 6, 16128
  04a1c38  stw 4, 272(1)
  04a1c3c  stw 3, 276(1)
  04a1c40  stw 5, 280(1)
  04a1c44  stw 6, 284(1)
  04a1c48  stw 29, 160(1)
  04a1c4c  stw 29, 164(1)
  04a1c50  stw 29, 168(1)
  04a1c54  stw 29, 172(1)
  04a1c58  bl 0xfcbe8
  04a1c5c  nop
  04a1c60  stfs 1, 160(1)
  04a1c64  fmr 2, 27
  04a1c68  fmr 1, 28
  04a1c6c  bl 0xfcbe8
  04a1c70  nop
  04a1c74  stfs 1, 164(1)
  04a1c78  fmr 1, 28
  04a1c7c  fmr 2, 27
  04a1c80  bl 0xfcbe8
  04a1c84  nop
  04a1c88  stfs 1, 168(1)
  04a1c8c  fmr 2, 26
  04a1c90  fmr 1, 30
  04a1c94  bl 0xfcbe8
  04a1c98  nop
  04a1c9c  lfs 2, 164(1)
  04a1ca0  lfs 3, 160(1)
  04a1ca4  fmuls 4, 2, 2
  04a1ca8  lfs 5, 168(1)
  04a1cac  lis 3, 114
  04a1cb0  lfs 6, -3052(3)
  04a1cb4  fmadds 4, 3, 3, 4
  04a1cb8  fmuls 1, 1, 6
  04a1cbc  li 3, 6
  04a1cc0  fmadds 4, 5, 5, 4
  04a1cc4  fsqrts 4, 4
  04a1cc8  fdivs 1, 1, 4
  04a1ccc  fsub 6, 30, 4
  04a1cd0  fsub 7, 30, 4
  04a1cd4  fsub 8, 30, 4
  04a1cd8  fsub 9, 4, 30
  04a1cdc  fsub 10, 4, 30
  04a1ce0  fsub 4, 4, 30
  04a1ce4  fmuls 3, 3, 1
  04a1ce8  fmuls 2, 2, 1
  04a1cec  fmuls 1, 5, 1
  04a1cf0  fsel 5, 6, 30, 3
  04a1cf4  fsel 6, 7, 30, 2
  04a1cf8  fsel 7, 8, 30, 1
  04a1cfc  fsel 3, 9, 5, 3
  04a1d00  fsel 2, 10, 6, 2
  04a1d04  fsel 1, 4, 7, 1
  04a1d08  stfs 3, 160(1)
  04a1d0c  stfs 2, 164(1)
  04a1d10  stfs 1, 168(1)
  04a1d14  bl 0xfc620
  04a1d18  nop
  04a1d1c  sldi 3, 3, 2
  04a1d20  addc 3, 3, 1
  04a1d24  clrldi 4, 3, 32
  04a1d28  li 3, 6
  04a1d2c  lwz 4, 240(4)
  04a1d30  extsw 28, 4
  04a1d34  bl 0xfc620
  04a1d38  nop
  04a1d3c  lis 4, 114
  04a1d40  sldi 3, 3, 2
  04a1d44  addc 3, 3, 1
  04a1d48  lfs 1, -3056(4)
  04a1d4c  clrldi 3, 3, 32
  04a1d50  fmuls 2, 1, 24
  04a1d54  fmuls 1, 1, 23
  04a1d58  lwz 3, 264(3)
  04a1d5c  extsw 27, 3
  04a1d60  fctiwz 2, 2
  04a1d64  fctiwz 1, 1
  04a1d68  stfd 2, 288(1)
  04a1d6c  lwz 3, 292(1)
  04a1d70  stfd 1, 288(1)
  04a1d74  extsw 3, 3
  04a1d78  lwz 4, 292(1)
  04a1d7c  extsw 4, 4
  04a1d80  bl 0xfe484
  04a1d84  nop
  04a1d88  ori 8, 3, 0
  04a1d8c  fmr 1, 25
  04a1d90  addic 3, 1, 144
  04a1d94  addic 4, 1, 160
  04a1d98  ori 5, 28, 0
  04a1d9c  ori 6, 27, 0
  04a1da0  bl 0x1229a8
  04a1da4  nop
  04a1da8  addic 30, 30, 1
  04a1dac  extsw 3, 30
  04a1db0  std 3, 288(1)
  04a1db4  lfd 1, 288(1)
  04a1db8  fcfid 1, 1
  04a1dbc  frsp 1, 1
  04a1dc0  fcmpu 0, 1, 31
  04a1dc4  bt 0, 0x4a1b8c
  04a1dc8  ori 3, 31, 0
  04a1dcc  bl 0xefb38
  04a1dd0  nop
  04a1dd4  b 0x4a2024
  04a1dd8  lis 3, 74
  04a1ddc  addi 29, 3, 5808
  04a1de0  lfs 1, 0(29)
  04a1de4  lfs 2, 64(29)
  04a1de8  bl 0xfcbe8
  04a1dec  nop
  04a1df0  lis 28, 114
  04a1df4  li 3, 3
  04a1df8  li 27, 0
  04a1dfc  lfs 2, -3052(28)
  04a1e00  stb 3, 32(31)
  04a1e04  stw 27, 148(31)
  04a1e08  fmuls 31, 1, 2
  04a1e0c  lfs 3, 8(29)
  04a1e10  lfs 4, 68(29)
  04a1e14  fmr 30, 3
  04a1e18  fmr 29, 4
  04a1e1c  fmr 1, 30
  04a1e20  fmr 2, 29
  04a1e24  bl 0xfe4f0
  04a1e28  nop
  04a1e2c  lfs 28, 72(29)
  04a1e30  fmr 2, 29
  04a1e34  lfs 3, -3052(28)
  04a1e38  fmuls 4, 1, 28
  04a1e3c  fmr 1, 30
  04a1e40  fmuls 3, 4, 3
  04a1e44  stfs 3, 8(30)
  04a1e48  bl 0xfe4f0
  04a1e4c  nop
  04a1e50  fmuls 1, 1, 28
  04a1e54  lfs 2, -3052(28)
  04a1e58  lis 3, 151
  04a1e5c  addic 3, 3, -25376
  04a1e60  fmuls 1, 1, 2
  04a1e64  stfs 1, 12(30)
  04a1e68  lfs 1, 16(31)
  04a1e6c  lfs 2, 128(3)
  04a1e70  fsubs 3, 1, 2
  04a1e74  stfs 3, 16(30)
  04a1e78  lfs 1, 20(31)
  04a1e7c  lfs 2, 132(3)
  04a1e80  fsubs 4, 1, 2
  04a1e84  fmuls 1, 4, 4
  04a1e88  stfs 4, 20(30)
  04a1e8c  fmadds 1, 3, 3, 1
  04a1e90  fsqrts 5, 1
  04a1e94  lfs 1, 24(31)
  04a1e98  lfs 2, 136(3)
  04a1e9c  addic 3, 1, 176
  04a1ea0  fsubs 6, 1, 2
  04a1ea4  fmr 1, 31
  04a1ea8  fmr 2, 31
  04a1eac  stfs 6, 24(30)
  04a1eb0  lfs 6, 28(31)
  04a1eb4  stfs 6, 28(30)
  04a1eb8  stw 27, 24(30)
  04a1ebc  fdivs 6, 31, 5
  04a1ec0  fsub 7, 30, 5
  04a1ec4  fsub 8, 30, 5
  04a1ec8  fsub 9, 5, 30
  04a1ecc  fsub 5, 5, 30
  04a1ed0  fmuls 3, 3, 6
  04a1ed4  fmuls 4, 4, 6
  04a1ed8  fsel 6, 7, 30, 3
  04a1edc  fsel 7, 8, 30, 4
  04a1ee0  fsel 3, 9, 6, 3
  04a1ee4  fsel 4, 5, 7, 4
  04a1ee8  stfs 3, 16(30)
  04a1eec  stfs 4, 20(30)
  04a1ef0  bl 0xfea60
  04a1ef4  nop
  04a1ef8  lfs 1, 16(30)
  04a1efc  lfs 2, 176(1)
  04a1f00  fadds 1, 1, 2
  04a1f04  lfs 2, 20(30)
  04a1f08  lfs 3, 24(30)
  04a1f0c  stfs 1, 16(30)
  04a1f10  lfs 1, 180(1)
  04a1f14  fadds 1, 2, 1
  04a1f18  stfs 1, 20(30)
  04a1f1c  lfs 1, 184(1)
  04a1f20  fadds 1, 3, 1
  04a1f24  fabs 1, 1
  04a1f28  stfs 1, 24(30)
  04a1f2c  lfs 1, 24(31)
  04a1f30  stfs 1, 28(30)
  04a1f34  b 0x4a2024
  04a1f38  lfs 1, 64(31)
  04a1f3c  lfs 2, 8(30)
  04a1f40  bl 0x502578
  04a1f44  nop
  04a1f48  stfs 1, 64(31)
  04a1f4c  lfs 1, 68(31)
  04a1f50  lfs 2, 8(30)
  04a1f54  bl 0x502578
  04a1f58  nop
  04a1f5c  lis 3, 74
  04a1f60  stfs 1, 68(31)
  04a1f64  lis 4, 114
  04a1f68  lfs 1, 24(30)
  04a1f6c  addi 3, 3, 5808
  04a1f70  lfs 2, 76(3)
  04a1f74  lfs 3, -3048(4)
  04a1f78  lfs 4, 16(30)
  04a1f7c  fnmsubs 1, 3, 2, 1
  04a1f80  stfs 1, 24(30)
  04a1f84  lfs 1, 16(31)
  04a1f88  lfs 2, 20(31)
  04a1f8c  fadds 1, 1, 4
  04a1f90  lfs 3, 24(31)
  04a1f94  stfs 1, 16(31)
  04a1f98  lfs 1, 20(30)
  04a1f9c  fadds 1, 2, 1
  04a1fa0  stfs 1, 20(31)
  04a1fa4  lfs 1, 24(30)
  04a1fa8  fadds 1, 3, 1
  04a1fac  stfs 1, 24(31)
  04a1fb0  lfs 2, 80(3)
  04a1fb4  lfs 3, 28(30)
  04a1fb8  addic 30, 31, 16
  04a1fbc  fsubs 2, 3, 2
  04a1fc0  fcmpu 0, 1, 2
  04a1fc4  bt 0, 0x4a1ff0
  04a1fc8  lis 3, 74
  04a1fcc  li 5, 2
  04a1fd0  addi 4, 3, 5808
  04a1fd4  ori 3, 30, 0
  04a1fd8  ori 6, 31, 0
  04a1fdc  lfs 1, 52(4)
  04a1fe0  bl 0x59e20
  04a1fe4  nop
  04a1fe8  cmpwi 3, 0
  04a1fec  bt 2, 0x4a2024
  04a1ff0  lis 3, 74
  04a1ff4  ori 4, 30, 0
  04a1ff8  addi 5, 3, 5808
  04a1ffc  ori 3, 31, 0
  04a2000  li 6, -1
  04a2004  lfs 1, 84(5)
  04a2008  lfs 2, 8(5)
  04a200c  bl 0x10fb28
  04a2010  nop
  04a2014  ori 3, 31, 0
  04a2018  bl 0xefb38
  04a201c  nop
  04a2020  b 0x4a2024
  04a2024  li 0, 304
  04a2028  lvx 30, 1, 0
  04a202c  addic 0, 0, 16
  04a2030  lvx 31, 1, 0
  04a2034  ld 0, 528(1)
  04a2038  mtlr 0
  04a203c  lfd 19, 408(1)
  04a2040  lfd 20, 416(1)
  04a2044  lfd 21, 424(1)
  04a2048  lfd 22, 432(1)
  04a204c  lfd 23, 440(1)
  04a2050  lfd 24, 448(1)
  04a2054  lfd 25, 456(1)
  04a2058  lfd 26, 464(1)
  04a205c  lfd 27, 472(1)
  04a2060  lfd 28, 480(1)
  04a2064  lfd 29, 488(1)
  04a2068  lfd 30, 496(1)
  04a206c  lfd 31, 504(1)
  04a2070  ld 23, 336(1)
  04a2074  ld 24, 344(1)
  04a2078  ld 25, 352(1)
  04a207c  ld 26, 360(1)
  04a2080  ld 27, 368(1)
  04a2084  ld 28, 376(1)
  04a2088  ld 29, 384(1)
  04a208c  ld 30, 392(1)
  04a2090  ld 31, 400(1)
  04a2094  addi 1, 1, 512
  04a2098  blr

M936_004a209c:   # 0x4a209c, 0x14 bytes
  04a209c  lis 3, 141
  04a20a0  lis 4, 1
  04a20a4  addic 3, 3, -16620
  04a20a8  stw 4, 72(3)
  04a20ac  blr

# game/update/moby583.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M583_003d14d8:   # 0x3d14d8, 0x14 bytes
  03d14d8  lis 3, 132
  03d14dc  lis 4, 1
  03d14e0  addic 3, 3, 25796
  03d14e4  stw 4, 72(3)
  03d14e8  blr

UpdateMoby_583:   # 0x3d1510, 0x7f8 bytes
  03d1510  stdu 1, -176(1)
  03d1514  mflr 0
  03d1518  std 0, 192(1)
  03d151c  stfd 31, 168(1)
  03d1520  lis 4, 132
  03d1524  std 31, 160(1)
  03d1528  lwz 5, 36(3)
  03d152c  ori 31, 3, 0
  03d1530  std 30, 152(1)
  03d1534  lfs 1, 25904(4)
  03d1538  lwz 30, 120(3)
  03d153c  lfs 2, 36(5)
  03d1540  lbz 4, 32(3)
  03d1544  fmuls 1, 2, 1
  03d1548  cmpwi 4, 0
  03d154c  cmpwi 1, 4, 1
  03d1550  cmpwi 6, 4, -1
  03d1554  std 29, 144(1)
  03d1558  std 28, 136(1)
  03d155c  std 27, 128(1)
  03d1560  std 26, 120(1)
  03d1564  std 25, 112(1)
  03d1568  stfs 1, 44(3)
  03d156c  bt 1, 0x3d1578
  03d1570  bf 25, 0x3d1cd8
  03d1574  b 0x3d1580
  03d1578  bf 5, 0x3d17a8
  03d157c  b 0x3d1cd8
  03d1580  lis 4, 61
  03d1584  li 3, 0
  03d1588  addi 5, 4, 5360
  03d158c  li 4, 0
  03d1590  stw 3, 148(31)
  03d1594  lfs 1, 24(31)
  03d1598  lfs 2, 0(5)
  03d159c  addic 3, 31, 16
  03d15a0  fadds 1, 1, 2
  03d15a4  stfs 1, 24(31)
  03d15a8  lfs 1, 4(5)
  03d15ac  bl 0xffb70
  03d15b0  nop
  03d15b4  stfs 1, 24(31)
  03d15b8  lis 3, 161
  03d15bc  lfs 1, 16(31)
  03d15c0  addic 3, 3, 2368
  03d15c4  stfs 1, 0(30)
  03d15c8  lfs 1, 20(31)
  03d15cc  stfs 1, 4(30)
  03d15d0  lwz 3, 24(3)
  03d15d4  lfs 1, 24(31)
  03d15d8  cmpwi 3, 0
  03d15dc  stfs 1, 8(30)
  03d15e0  lfs 1, 28(31)
  03d15e4  stfs 1, 12(30)
  03d15e8  bt 2, 0x3d15f4
  03d15ec  li 3, 1
  03d15f0  stw 3, 56(30)
  03d15f4  li 3, 1771
  03d15f8  bl 0xefa28
  03d15fc  nop
  03d1600  ori 29, 3, 0
  03d1604  li 27, 64
  03d1608  li 26, 86
  03d160c  lis 28, 132
  03d1610  li 25, 1
  03d1614  lwz 3, 36(29)
  03d1618  stb 27, 48(29)
  03d161c  sth 26, 50(29)
  03d1620  stb 25, 49(29)
  03d1624  lfs 1, 25904(28)
  03d1628  lfs 2, 36(3)
  03d162c  fmuls 1, 2, 1
  03d1630  ori 3, 29, 0
  03d1634  stfs 1, 44(29)
  03d1638  lfs 1, 0(30)
  03d163c  stfs 1, 16(29)
  03d1640  lfs 1, 4(30)
  03d1644  stfs 1, 20(29)
  03d1648  lfs 1, 8(30)
  03d164c  stfs 1, 24(29)
  03d1650  lfs 1, 12(30)
  03d1654  stfs 1, 28(29)
  03d1658  lfs 1, 64(31)
  03d165c  stfs 1, 64(29)
  03d1660  lfs 1, 68(31)
  03d1664  stfs 1, 68(29)
  03d1668  lfs 1, 72(31)
  03d166c  stfs 1, 72(29)
  03d1670  lfs 1, 76(31)
  03d1674  stfs 1, 76(29)
  03d1678  bl 0xf31a8
  03d167c  nop
  03d1680  li 3, 1776
  03d1684  stw 29, 28(30)
  03d1688  bl 0xefa28
  03d168c  nop
  03d1690  stw 3, 20(30)
  03d1694  stb 27, 48(3)
  03d1698  lwz 3, 20(30)
  03d169c  sth 26, 50(3)
  03d16a0  lwz 3, 20(30)
  03d16a4  stb 25, 49(3)
  03d16a8  lwz 3, 20(30)
  03d16ac  lfs 1, 25904(28)
  03d16b0  lwz 4, 36(3)
  03d16b4  lfs 2, 36(4)
  03d16b8  fmuls 1, 2, 1
  03d16bc  stfs 1, 44(3)
  03d16c0  lwz 3, 20(30)
  03d16c4  lfs 1, 64(31)
  03d16c8  stfs 1, 64(3)
  03d16cc  lfs 1, 68(31)
  03d16d0  stfs 1, 68(3)
  03d16d4  lfs 1, 72(31)
  03d16d8  stfs 1, 72(3)
  03d16dc  lfs 1, 76(31)
  03d16e0  stfs 1, 76(3)
  03d16e4  lwz 3, 20(30)
  03d16e8  bl 0xf31a8
  03d16ec  nop
  03d16f0  li 3, 1776
  03d16f4  bl 0xefa28
  03d16f8  nop
  03d16fc  stw 3, 24(30)
  03d1700  stb 27, 48(3)
  03d1704  lwz 4, 24(30)
  03d1708  lis 3, 61
  03d170c  addi 3, 3, 5360
  03d1710  sth 27, 50(4)
  03d1714  lwz 4, 24(30)
  03d1718  stb 25, 49(4)
  03d171c  lwz 4, 24(30)
  03d1720  lfs 1, 25904(28)
  03d1724  lwz 5, 36(4)
  03d1728  lfs 2, 36(5)
  03d172c  fmuls 1, 2, 1
  03d1730  stfs 1, 44(4)
  03d1734  lwz 4, 24(30)
  03d1738  lfs 1, 64(31)
  03d173c  stfs 1, 64(4)
  03d1740  lfs 1, 68(31)
  03d1744  stfs 1, 68(4)
  03d1748  lfs 1, 72(31)
  03d174c  stfs 1, 72(4)
  03d1750  lfs 1, 76(31)
  03d1754  stfs 1, 76(4)
  03d1758  lwz 4, 24(30)
  03d175c  lfs 2, 8(3)
  03d1760  lfs 1, 72(4)
  03d1764  bl 0x502578
  03d1768  nop
  03d176c  lwz 3, 24(30)
  03d1770  stfs 1, 72(3)
  03d1774  lwz 3, 24(30)
  03d1778  bl 0xf31a8
  03d177c  nop
  03d1780  lis 3, 132
  03d1784  lfs 1, 24(31)
  03d1788  stb 25, 32(31)
  03d178c  stfs 1, 16(30)
  03d1790  lfs 1, 25912(3)
  03d1794  stfs 1, 52(30)
  03d1798  lwz 3, 36(31)
  03d179c  lwz 3, 16(3)
  03d17a0  stw 3, 148(31)
  03d17a4  b 0x3d1cd8
  03d17a8  lis 3, 161
  03d17ac  lwz 3, 1800(3)
  03d17b0  cmpwi 3, 2
  03d17b4  bf 2, 0x3d1820
  03d17b8  lwz 3, 56(30)
  03d17bc  cmpwi 3, 0
  03d17c0  bt 2, 0x3d1820
  03d17c4  lis 3, 150
  03d17c8  addic 3, 3, -12976
  03d17cc  lwz 3, 48(3)
  03d17d0  cmpwi 3, 3
  03d17d4  bf 2, 0x3d1820
  03d17d8  lwz 3, 20(30)
  03d17dc  cmpwi 3, 0
  03d17e0  bt 2, 0x3d17ec
  03d17e4  bl 0xefb38
  03d17e8  nop
  03d17ec  lwz 3, 24(30)
  03d17f0  cmpwi 3, 0
  03d17f4  bt 2, 0x3d1800
  03d17f8  bl 0xefb38
  03d17fc  nop
  03d1800  lwz 3, 28(30)
  03d1804  cmpwi 3, 0
  03d1808  bt 2, 0x3d1814
  03d180c  bl 0xefb38
  03d1810  nop
  03d1814  ori 3, 31, 0
  03d1818  bl 0xefb38
  03d181c  nop
  03d1820  lis 3, 61
  03d1824  lwz 4, 36(30)
  03d1828  lfs 3, 36(30)
  03d182c  addi 3, 3, 5360
  03d1830  cmpwi 4, 0
  03d1834  fmr 1, 3
  03d1838  lfs 31, 12(3)
  03d183c  bt 2, 0x3d18f8
  03d1840  lwz 3, 48(30)
  03d1844  cmpwi 3, 0
  03d1848  bf 2, 0x3d1864
  03d184c  addic 3, 30, 44
  03d1850  bl 0x4fff60
  03d1854  nop
  03d1858  cmpwi 3, 2
  03d185c  bt 2, 0x3d1890
  03d1860  lfs 3, 36(30)
  03d1864  lis 3, 161
  03d1868  fmr 1, 3
  03d186c  lwz 3, 1800(3)
  03d1870  cmpwi 3, 2
  03d1874  bf 2, 0x3d18b4
  03d1878  lis 3, 150
  03d187c  fmr 1, 3
  03d1880  addic 3, 3, -12976
  03d1884  lwz 3, 48(3)
  03d1888  cmpwi 3, 4
  03d188c  bt 0, 0x3d18b4
  03d1890  li 3, 0
  03d1894  li 4, 0
  03d1898  ori 5, 31, 0
  03d189c  bl 0x15d12c
  03d18a0  nop
  03d18a4  fmr 3, 31
  03d18a8  li 3, 0
  03d18ac  stw 3, 36(30)
  03d18b0  fmr 1, 3
  03d18b4  lis 3, 151
  03d18b8  addic 3, 3, -25376
  03d18bc  lhz 4, 782(3)
  03d18c0  cmpwi 4, 0
  03d18c4  bf 2, 0x3d18f8
  03d18c8  lwz 3, 8324(3)
  03d18cc  cmpwi 3, 34
  03d18d0  bf 2, 0x3d18f8
  03d18d4  li 3, 0
  03d18d8  li 4, 0
  03d18dc  ori 5, 31, 0
  03d18e0  bl 0x15d12c
  03d18e4  nop
  03d18e8  fmr 3, 31
  03d18ec  li 3, 0
  03d18f0  stw 3, 36(30)
  03d18f4  fmr 1, 3
  03d18f8  fcmpu 0, 1, 31
  03d18fc  lis 3, 61
  03d1900  addi 4, 3, 5360
  03d1904  addic 3, 30, 40
  03d1908  lfs 1, 16(4)
  03d190c  bt 2, 0x3d19a0
  03d1910  lfs 2, 32(30)
  03d1914  fcmpu 0, 2, 3
  03d1918  bt 2, 0x3d1954
  03d191c  fmr 4, 1
  03d1920  lis 4, 114
  03d1924  fmr 1, 3
  03d1928  lis 6, 114
  03d192c  ori 5, 3, 0
  03d1930  addic 3, 30, 32
  03d1934  lfs 2, -3048(4)
  03d1938  lfs 5, -3052(6)
  03d193c  fmuls 2, 2, 4
  03d1940  fmuls 4, 5, 4
  03d1944  fmr 3, 2
  03d1948  bl 0x109c30
  03d194c  nop
  03d1950  b 0x3d1a30
  03d1954  ori 5, 3, 0
  03d1958  lis 3, 61
  03d195c  lis 4, 132
  03d1960  addi 6, 3, 5360
  03d1964  lis 7, 114
  03d1968  lis 8, 114
  03d196c  addic 3, 30, 52
  03d1970  lfs 2, 25908(4)
  03d1974  lfs 5, 20(6)
  03d1978  lfs 4, 24(6)
  03d197c  lfs 6, -3048(7)
  03d1980  lfs 7, -3052(8)
  03d1984  fmuls 3, 6, 1
  03d1988  fmr 1, 2
  03d198c  fmuls 2, 6, 5
  03d1990  fmuls 4, 7, 4
  03d1994  bl 0x109c30
  03d1998  nop
  03d199c  b 0x3d1a30
  03d19a0  lis 4, 132
  03d19a4  lwz 5, 52(30)
  03d19a8  lwz 6, 25912(4)
  03d19ac  lfs 2, 25912(4)
  03d19b0  cmpw 5, 6
  03d19b4  bt 2, 0x3d19fc
  03d19b8  ori 5, 3, 0
  03d19bc  lis 3, 61
  03d19c0  lis 4, 114
  03d19c4  addi 3, 3, 5360
  03d19c8  lis 6, 114
  03d19cc  lfs 5, 20(3)
  03d19d0  lfs 4, -3048(4)
  03d19d4  lfs 7, 24(3)
  03d19d8  fmuls 3, 4, 1
  03d19dc  lfs 6, -3052(6)
  03d19e0  fmr 1, 2
  03d19e4  addic 3, 30, 52
  03d19e8  fmuls 2, 4, 5
  03d19ec  fmuls 4, 6, 7
  03d19f0  bl 0x109c30
  03d19f4  nop
  03d19f8  b 0x3d1a30
  03d19fc  fmr 4, 1
  03d1a00  lis 4, 114
  03d1a04  fmr 1, 3
  03d1a08  lis 6, 114
  03d1a0c  ori 5, 3, 0
  03d1a10  addic 3, 30, 32
  03d1a14  lfs 2, -3048(4)
  03d1a18  lfs 5, -3052(6)
  03d1a1c  fmuls 2, 2, 4
  03d1a20  fmuls 4, 5, 4
  03d1a24  fmr 3, 2
  03d1a28  bl 0x109c30
  03d1a2c  nop
  03d1a30  lwz 3, 20(30)
  03d1a34  cmpwi 3, 0
  03d1a38  bt 2, 0x3d1b7c
  03d1a3c  lfs 4, 212(3)
  03d1a40  lfs 3, 208(3)
  03d1a44  fmuls 1, 4, 4
  03d1a48  lfs 5, 216(3)
  03d1a4c  fmadds 1, 3, 3, 1
  03d1a50  fmadds 2, 5, 5, 1
  03d1a54  lfs 1, 32(30)
  03d1a58  fneg 1, 1
  03d1a5c  fsqrts 2, 2
  03d1a60  fcmpu 0, 2, 31
  03d1a64  bf 2, 0x3d1a7c
  03d1a68  fmr 2, 31
  03d1a6c  lfs 1, 220(3)
  03d1a70  fmr 3, 2
  03d1a74  fmr 4, 3
  03d1a78  b 0x3d1a94
  03d1a7c  fdivs 2, 1, 2
  03d1a80  lfs 1, 220(3)
  03d1a84  fmr 6, 4
  03d1a88  fmuls 4, 3, 2
  03d1a8c  fmuls 3, 6, 2
  03d1a90  fmuls 2, 5, 2
  03d1a94  stfs 4, 16(3)
  03d1a98  stfs 3, 20(3)
  03d1a9c  stfs 2, 24(3)
  03d1aa0  stfs 1, 28(3)
  03d1aa4  lwz 3, 20(30)
  03d1aa8  lis 4, 61
  03d1aac  lfs 1, 228(3)
  03d1ab0  lfs 2, 224(3)
  03d1ab4  fmuls 3, 1, 1
  03d1ab8  lfs 4, 232(3)
  03d1abc  addi 4, 4, 5360
  03d1ac0  lfs 5, 28(4)
  03d1ac4  lfs 6, 32(30)
  03d1ac8  fmadds 3, 2, 2, 3
  03d1acc  fmuls 5, 6, 5
  03d1ad0  lfs 7, 16(3)
  03d1ad4  lfs 8, 20(3)
  03d1ad8  fmadds 3, 4, 4, 3
  03d1adc  lfs 9, 24(3)
  03d1ae0  fsqrts 3, 3
  03d1ae4  fdivs 5, 5, 3
  03d1ae8  fsub 6, 31, 3
  03d1aec  fsub 10, 31, 3
  03d1af0  fsub 11, 31, 3
  03d1af4  fsub 12, 3, 31
  03d1af8  fsub 13, 3, 31
  03d1afc  fsub 3, 3, 31
  03d1b00  fmuls 4, 4, 5
  03d1b04  fmuls 1, 1, 5
  03d1b08  fmuls 2, 2, 5
  03d1b0c  fsel 5, 6, 31, 4
  03d1b10  fsel 6, 10, 31, 1
  03d1b14  fsel 10, 11, 31, 2
  03d1b18  fsel 4, 12, 5, 4
  03d1b1c  fsel 1, 13, 6, 1
  03d1b20  fsel 2, 3, 10, 2
  03d1b24  fadds 3, 9, 4
  03d1b28  fadds 1, 8, 1
  03d1b2c  fadds 2, 7, 2
  03d1b30  stfs 3, 24(3)
  03d1b34  stfs 1, 20(3)
  03d1b38  stfs 2, 16(3)
  03d1b3c  lwz 3, 20(30)
  03d1b40  lfs 1, 0(30)
  03d1b44  lfs 2, 16(3)
  03d1b48  fadds 1, 2, 1
  03d1b4c  lfs 2, 20(3)
  03d1b50  lfs 3, 24(3)
  03d1b54  stfs 1, 16(3)
  03d1b58  lfs 1, 4(30)
  03d1b5c  fadds 1, 2, 1
  03d1b60  stfs 1, 20(3)
  03d1b64  lfs 1, 8(30)
  03d1b68  fadds 1, 3, 1
  03d1b6c  stfs 1, 24(3)
  03d1b70  lwz 3, 20(30)
  03d1b74  bl 0xf31a8
  03d1b78  nop
  03d1b7c  lwz 3, 24(30)
  03d1b80  cmpwi 3, 0
  03d1b84  bt 2, 0x3d1cc8
  03d1b88  lfs 4, 212(3)
  03d1b8c  lfs 3, 208(3)
  03d1b90  fmuls 1, 4, 4
  03d1b94  lfs 5, 216(3)
  03d1b98  fmadds 1, 3, 3, 1
  03d1b9c  fmadds 2, 5, 5, 1
  03d1ba0  lfs 1, 32(30)
  03d1ba4  fneg 1, 1
  03d1ba8  fsqrts 2, 2
  03d1bac  fcmpu 0, 2, 31
  03d1bb0  bf 2, 0x3d1bc8
  03d1bb4  fmr 2, 31
  03d1bb8  lfs 1, 220(3)
  03d1bbc  fmr 3, 2
  03d1bc0  fmr 4, 3
  03d1bc4  b 0x3d1be0
  03d1bc8  fdivs 2, 1, 2
  03d1bcc  lfs 1, 220(3)
  03d1bd0  fmr 6, 4
  03d1bd4  fmuls 4, 3, 2
  03d1bd8  fmuls 3, 6, 2
  03d1bdc  fmuls 2, 5, 2
  03d1be0  stfs 4, 16(3)
  03d1be4  stfs 3, 20(3)
  03d1be8  stfs 2, 24(3)
  03d1bec  stfs 1, 28(3)
  03d1bf0  lwz 3, 24(30)
  03d1bf4  lis 4, 61
  03d1bf8  addi 4, 4, 5360
  03d1bfc  lfs 1, 228(3)
  03d1c00  lfs 2, 224(3)
  03d1c04  fmuls 3, 1, 1
  03d1c08  lfs 4, 232(3)
  03d1c0c  lfs 5, 28(4)
  03d1c10  lfs 6, 32(30)
  03d1c14  fmuls 5, 6, 5
  03d1c18  fmadds 3, 2, 2, 3
  03d1c1c  lfs 7, 16(3)
  03d1c20  lfs 8, 20(3)
  03d1c24  lfs 9, 24(3)
  03d1c28  fmadds 3, 4, 4, 3
  03d1c2c  fsqrts 3, 3
  03d1c30  fdivs 5, 5, 3
  03d1c34  fsub 6, 31, 3
  03d1c38  fsub 10, 31, 3
  03d1c3c  fsub 11, 31, 3
  03d1c40  fsub 12, 3, 31
  03d1c44  fsub 13, 3, 31
  03d1c48  fsub 3, 3, 31
  03d1c4c  fmuls 4, 4, 5
  03d1c50  fmuls 1, 1, 5
  03d1c54  fmuls 2, 2, 5
  03d1c58  fsel 5, 6, 31, 4
  03d1c5c  fsel 6, 10, 31, 1
  03d1c60  fsel 10, 11, 31, 2
  03d1c64  fsel 4, 12, 5, 4
  03d1c68  fsel 1, 13, 6, 1
  03d1c6c  fsel 2, 3, 10, 2
  03d1c70  fadds 3, 9, 4
  03d1c74  fadds 1, 8, 1
  03d1c78  fadds 2, 7, 2
  03d1c7c  stfs 3, 24(3)
  03d1c80  stfs 1, 20(3)
  03d1c84  stfs 2, 16(3)
  03d1c88  lwz 3, 24(30)
  03d1c8c  lfs 1, 0(30)
  03d1c90  lfs 2, 16(3)
  03d1c94  fadds 1, 2, 1
  03d1c98  lfs 2, 20(3)
  03d1c9c  lfs 3, 24(3)
  03d1ca0  stfs 1, 16(3)
  03d1ca4  lfs 1, 4(30)
  03d1ca8  fadds 1, 2, 1
  03d1cac  stfs 1, 20(3)
  03d1cb0  lfs 1, 8(30)
  03d1cb4  fadds 1, 3, 1
  03d1cb8  stfs 1, 24(3)
  03d1cbc  lwz 3, 24(30)
  03d1cc0  bl 0xf31a8
  03d1cc4  nop
  03d1cc8  lfs 1, 16(30)
  03d1ccc  lfs 2, 52(30)
  03d1cd0  fadds 1, 1, 2
  03d1cd4  stfs 1, 24(31)
  03d1cd8  ld 0, 192(1)
  03d1cdc  mtlr 0
  03d1ce0  lfd 31, 168(1)
  03d1ce4  ld 25, 112(1)
  03d1ce8  ld 26, 120(1)
  03d1cec  ld 27, 128(1)
  03d1cf0  ld 28, 136(1)
  03d1cf4  ld 29, 144(1)
  03d1cf8  ld 30, 152(1)
  03d1cfc  ld 31, 160(1)
  03d1d00  addi 1, 1, 176
  03d1d04  blr

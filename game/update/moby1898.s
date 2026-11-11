# game/update/moby1898.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1898:   # 0x2d1388, 0xb4 bytes
  02d1388  stdu 1, -128(1)
  02d138c  mflr 0
  02d1390  std 0, 144(1)
  02d1394  std 31, 120(1)
  02d1398  lbz 4, 32(3)
  02d139c  std 30, 112(1)
  02d13a0  ori 31, 3, 0
  02d13a4  lwz 30, 120(3)
  02d13a8  cmpwi 4, 0
  02d13ac  cmpwi 1, 4, 1
  02d13b0  cmpwi 6, 4, -1
  02d13b4  bt 1, 0x2d13c0
  02d13b8  bf 25, 0x2d1424
  02d13bc  b 0x2d13c8
  02d13c0  bf 5, 0x2d13d8
  02d13c4  b 0x2d1424
  02d13c8  ori 3, 31, 0
  02d13cc  bl 0xefb38
  02d13d0  nop
  02d13d4  b 0x2d1424
  02d13d8  lis 3, 113
  02d13dc  ori 4, 31, 0
  02d13e0  addic 3, 3, -19784
  02d13e4  bl 0x6d720
  02d13e8  nop
  02d13ec  lfs 1, 0(30)
  02d13f0  lfs 2, 4(30)
  02d13f4  lis 3, 45
  02d13f8  fadds 1, 1, 2
  02d13fc  addi 3, 3, 4992
  02d1400  stfs 1, 0(30)
  02d1404  lfs 2, 0(3)
  02d1408  fcmpu 0, 1, 2
  02d140c  cror 6, 0, 2
  02d1410  bt 6, 0x2d1424
  02d1414  ori 3, 31, 0
  02d1418  bl 0xefb38
  02d141c  nop
  02d1420  b 0x2d1424
  02d1424  ld 0, 144(1)
  02d1428  mtlr 0
  02d142c  ld 30, 112(1)
  02d1430  ld 31, 120(1)
  02d1434  addi 1, 1, 128
  02d1438  blr

FUN_002d1440:   # 0x2d1440, 0xec bytes
  02d1440  stdu 1, -176(1)
  02d1444  mflr 0
  02d1448  std 0, 192(1)
  02d144c  std 27, 136(1)
  02d1450  ori 27, 3, 0
  02d1454  std 31, 168(1)
  02d1458  li 3, 1898
  02d145c  std 30, 160(1)
  02d1460  ori 31, 7, 0
  02d1464  std 29, 152(1)
  02d1468  ori 30, 6, 0
  02d146c  std 28, 144(1)
  02d1470  ori 29, 5, 0
  02d1474  std 26, 128(1)
  02d1478  ori 28, 4, 0
  02d147c  std 25, 120(1)
  02d1480  li 26, 176
  02d1484  bl 0xefa28
  02d1488  nop
  02d148c  ori 25, 3, 0
  02d1490  cmpwi 25, 0
  02d1494  bt 2, 0x2d1500
  02d1498  addc 4, 1, 26
  02d149c  ori 3, 29, 0
  02d14a0  std 27, 48(4)
  02d14a4  std 28, 56(4)
  02d14a8  lwz 29, 120(25)
  02d14ac  lfs 1, 52(4)
  02d14b0  lfs 2, 60(4)
  02d14b4  stfs 1, 20(25)
  02d14b8  stfs 2, 28(25)
  02d14bc  lfs 1, 48(4)
  02d14c0  lfs 2, 56(4)
  02d14c4  stfs 1, 16(25)
  02d14c8  stfs 2, 24(25)
  02d14cc  bl 0x502730
  02d14d0  nop
  02d14d4  lis 3, 45
  02d14d8  addi 3, 3, 5180
  02d14dc  li 4, 1
  02d14e0  lfs 2, 0(3)
  02d14e4  fdivs 1, 2, 1
  02d14e8  li 3, 255
  02d14ec  stw 30, 8(29)
  02d14f0  stw 31, 12(29)
  02d14f4  stfs 1, 4(29)
  02d14f8  stb 3, 48(25)
  02d14fc  stb 4, 32(25)
  02d1500  ld 0, 192(1)
  02d1504  mtlr 0
  02d1508  ld 25, 120(1)
  02d150c  ld 26, 128(1)
  02d1510  ld 27, 136(1)
  02d1514  ld 28, 144(1)
  02d1518  ld 29, 152(1)
  02d151c  ld 30, 160(1)
  02d1520  ld 31, 168(1)
  02d1524  addi 1, 1, 176
  02d1528  blr

M1898_002d1540:   # 0x2d1540, 0x2ac bytes
  02d1540  stdu 1, -272(1)
  02d1544  mflr 0
  02d1548  std 0, 288(1)
  02d154c  stfd 30, 256(1)
  02d1550  stfd 31, 264(1)
  02d1554  lfs 1, 16(3)
  02d1558  lfs 2, 20(3)
  02d155c  lis 4, 45
  02d1560  stfs 1, 112(1)
  02d1564  lfs 1, 24(3)
  02d1568  stfs 2, 116(1)
  02d156c  addi 4, 4, 5424
  02d1570  lfs 2, 28(3)
  02d1574  stfs 1, 120(1)
  02d1578  std 31, 248(1)
  02d157c  stfs 2, 124(1)
  02d1580  lwz 31, 120(3)
  02d1584  lfs 1, 0(4)
  02d1588  lfs 31, 0(31)
  02d158c  fsubs 30, 31, 1
  02d1590  fsub 2, 1, 31
  02d1594  fcmpu 0, 30, 1
  02d1598  fsel 31, 2, 31, 1
  02d159c  std 30, 240(1)
  02d15a0  std 29, 232(1)
  02d15a4  cror 6, 0, 2
  02d15a8  bt 6, 0x2d15b4
  02d15ac  fmr 30, 1
  02d15b0  b 0x2d15d0
  02d15b4  lis 3, 45
  02d15b8  addi 3, 3, 5424
  02d15bc  lfs 1, 4(3)
  02d15c0  fcmpu 0, 30, 1
  02d15c4  cror 6, 1, 2
  02d15c8  bt 6, 0x2d15d0
  02d15cc  fmr 30, 1
  02d15d0  li 3, 1
  02d15d4  li 4, 5
  02d15d8  li 10, 2
  02d15dc  li 5, 128
  02d15e0  li 6, 3
  02d15e4  li 7, 0
  02d15e8  li 8, 0
  02d15ec  li 9, 1
  02d15f0  bl 0x502f7c
  02d15f4  nop
  02d15f8  ori 4, 3, 0
  02d15fc  li 3, 22
  02d1600  bl 0x174f80
  02d1604  nop
  02d1608  addic 3, 1, 128
  02d160c  addic 4, 1, 112
  02d1610  bl 0x65490
  02d1614  nop
  02d1618  lis 3, 150
  02d161c  addic 30, 3, 27392
  02d1620  lwz 3, 16(30)
  02d1624  extsw 3, 3
  02d1628  std 3, 208(1)
  02d162c  lfs 1, 128(1)
  02d1630  lfd 2, 208(1)
  02d1634  fcfid 2, 2
  02d1638  frsp 2, 2
  02d163c  fsubs 1, 1, 2
  02d1640  bl 0x502758
  02d1644  nop
  02d1648  lwz 4, 16(30)
  02d164c  ori 30, 3, 0
  02d1650  extsw 4, 4
  02d1654  std 4, 208(1)
  02d1658  lfs 1, 132(1)
  02d165c  lfd 2, 208(1)
  02d1660  fcfid 2, 2
  02d1664  frsp 2, 2
  02d1668  fsubs 1, 1, 2
  02d166c  bl 0x502758
  02d1670  nop
  02d1674  lis 4, 266
  02d1678  fmr 1, 30
  02d167c  lis 6, 124
  02d1680  lis 7, 124
  02d1684  addic 29, 3, -4096
  02d1688  lis 5, 124
  02d168c  lwz 3, 8900(4)
  02d1690  addic 30, 30, -4096
  02d1694  lwz 4, -10608(6)
  02d1698  stw 3, 192(1)
  02d169c  lwz 3, -10604(7)
  02d16a0  stw 4, 196(1)
  02d16a4  lwz 4, -10600(5)
  02d16a8  stw 3, 200(1)
  02d16ac  stw 4, 204(1)
  02d16b0  lwz 3, 8(31)
  02d16b4  lwz 4, 12(31)
  02d16b8  extsw 3, 3
  02d16bc  extsw 4, 4
  02d16c0  bl 0x5027bc
  02d16c4  nop
  02d16c8  lis 4, 124
  02d16cc  lwz 4, -10612(4)
  02d16d0  slwi 4, 4, 4
  02d16d4  extsw 4, 4
  02d16d8  std 4, 208(1)
  02d16dc  stw 3, 188(1)
  02d16e0  stw 3, 184(1)
  02d16e4  stw 3, 180(1)
  02d16e8  stw 3, 176(1)
  02d16ec  lfd 1, 208(1)
  02d16f0  fcfid 1, 1
  02d16f4  frsp 1, 1
  02d16f8  fmuls 1, 1, 31
  02d16fc  bl 0x502758
  02d1700  nop
  02d1704  lis 4, 45
  02d1708  subc 5, 29, 3
  02d170c  addi 4, 4, 5424
  02d1710  sldi 5, 5, 16
  02d1714  addc 6, 3, 30
  02d1718  addc 7, 3, 29
  02d171c  extsw 5, 5
  02d1720  ld 4, 8(4)
  02d1724  extsw 6, 6
  02d1728  sldi 7, 7, 16
  02d172c  addc 5, 5, 4
  02d1730  subc 3, 30, 3
  02d1734  lis 8, 124
  02d1738  addc 9, 5, 6
  02d173c  extsw 7, 7
  02d1740  extsw 3, 3
  02d1744  addc 4, 7, 4
  02d1748  addc 5, 5, 3
  02d174c  std 9, 144(1)
  02d1750  addc 6, 4, 6
  02d1754  lwz 7, -10616(8)
  02d1758  addc 4, 4, 3
  02d175c  std 5, 152(1)
  02d1760  extsw 3, 7
  02d1764  std 6, 160(1)
  02d1768  std 4, 168(1)
  02d176c  bl 0x685c4
  02d1770  nop
  02d1774  ori 6, 3, 0
  02d1778  addic 3, 1, 144
  02d177c  addic 4, 1, 192
  02d1780  addic 5, 1, 176
  02d1784  li 7, 1
  02d1788  bl 0x6ecf8
  02d178c  nop
  02d1790  li 3, 1
  02d1794  li 4, 5
  02d1798  li 8, 0
  02d179c  li 10, 2
  02d17a0  li 5, 96
  02d17a4  li 6, 3
  02d17a8  li 7, 0
  02d17ac  li 9, 1
  02d17b0  bl 0x502f7c
  02d17b4  nop
  02d17b8  ori 4, 3, 0
  02d17bc  li 3, 22
  02d17c0  bl 0x174f80
  02d17c4  nop
  02d17c8  ld 0, 288(1)
  02d17cc  mtlr 0
  02d17d0  lfd 30, 256(1)
  02d17d4  lfd 31, 264(1)
  02d17d8  ld 29, 232(1)
  02d17dc  ld 30, 240(1)
  02d17e0  ld 31, 248(1)
  02d17e4  addi 1, 1, 272
  02d17e8  blr

M1898_002d17f0:   # 0x2d17f0, 0x78 bytes
  02d17f0  lis 4, 165
  02d17f4  lis 6, 164
  02d17f8  addic 7, 4, -28284
  02d17fc  lbz 4, 33(3)
  02d1800  lis 5, 266
  02d1804  slwi 8, 4, 2
  02d1808  lwz 4, -28512(6)
  02d180c  addic 5, 5, 9288
  02d1810  lwzx 7, 7, 8
  02d1814  lhz 8, 0(7)
  02d1818  lfs 1, 24(3)
  02d181c  rlwinm 8, 8, 8, 9, 23
  02d1820  addc 4, 4, 8
  02d1824  clrldi 4, 4, 32
  02d1828  stfs 1, 24(4)
  02d182c  lwz 4, -28512(6)
  02d1830  lfs 1, 24(3)
  02d1834  addc 8, 4, 8
  02d1838  clrldi 8, 8, 32
  02d183c  lwz 8, 120(8)
  02d1840  lwz 8, 12(8)
  02d1844  mulli 8, 8, 4512
  02d1848  extsw 8, 8
  02d184c  stfsx 1, 5, 8
  02d1850  lhz 8, 0(7)
  02d1854  addic 7, 7, 2
  02d1858  extsh 8, 8
  02d185c  cmpwi 8, 0
  02d1860  bf 0, 0x2d1814
  02d1864  blr

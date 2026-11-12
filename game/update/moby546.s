# game/update/moby546.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_546:   # 0x3b1338, 0x474 bytes
  03b1338  stdu 1, -160(1)
  03b133c  mflr 0
  03b1340  std 0, 176(1)
  03b1344  std 31, 152(1)
  03b1348  lbz 4, 32(3)
  03b134c  std 30, 144(1)
  03b1350  ori 31, 3, 0
  03b1354  lwz 30, 120(3)
  03b1358  cmpwi 4, 0
  03b135c  cmpwi 1, 4, 2
  03b1360  cmpwi 6, 4, 1
  03b1364  std 29, 136(1)
  03b1368  cmpwi 7, 4, -1
  03b136c  bt 1, 0x3b1378
  03b1370  bf 29, 0x3b1788
  03b1374  b 0x3b1384
  03b1378  bf 25, 0x3b1424
  03b137c  bf 5, 0x3b15fc
  03b1380  b 0x3b1788
  03b1384  bl 0xfcc68
  03b1388  nop
  03b138c  lis 3, 14979
  03b1390  stfs 1, 104(30)
  03b1394  lis 4, 151
  03b1398  ori 3, 3, 4719
  03b139c  lis 5, 161
  03b13a0  addic 5, 5, -13692
  03b13a4  stw 3, 48(30)
  03b13a8  lbz 3, 176(31)
  03b13ac  lwz 4, -25488(4)
  03b13b0  addc 3, 3, 5
  03b13b4  slwi 4, 4, 4
  03b13b8  clrldi 3, 3, 32
  03b13bc  extsw 4, 4
  03b13c0  lbzx 3, 3, 4
  03b13c4  cmpwi 3, 255
  03b13c8  bf 2, 0x3b1418
  03b13cc  lwz 3, 100(30)
  03b13d0  cmpwi 3, -1
  03b13d4  bf 2, 0x3b1418
  03b13d8  li 3, 2
  03b13dc  li 4, 1
  03b13e0  stb 3, 32(31)
  03b13e4  stb 4, 188(31)
  03b13e8  lwz 30, 96(30)
  03b13ec  cmpwi 30, -1
  03b13f0  bt 2, 0x3b1788
  03b13f4  lis 3, 164
  03b13f8  slwi 5, 30, 8
  03b13fc  li 4, 0
  03b1400  lwz 3, -28512(3)
  03b1404  addc 3, 3, 5
  03b1408  clrldi 3, 3, 32
  03b140c  bl 0x267300
  03b1410  nop
  03b1414  b 0x3b1788
  03b1418  li 3, 1
  03b141c  stb 3, 32(31)
  03b1420  b 0x3b1788
  03b1424  lis 3, 59
  03b1428  lfs 1, 104(30)
  03b142c  addi 29, 3, 4864
  03b1430  lis 3, 114
  03b1434  lfs 2, 0(29)
  03b1438  lfs 3, -3052(3)
  03b143c  fmuls 2, 3, 2
  03b1440  bl 0x502578
  03b1444  nop
  03b1448  lfs 2, 4(29)
  03b144c  lfs 3, 8(29)
  03b1450  fsubs 2, 2, 1
  03b1454  fsubs 3, 3, 1
  03b1458  fsub 4, 1, 2
  03b145c  fsel 2, 4, 2, 1
  03b1460  lfs 4, 12(29)
  03b1464  lfs 5, 16(29)
  03b1468  fsub 6, 3, 2
  03b146c  fsel 2, 6, 3, 2
  03b1470  lfs 3, 20(29)
  03b1474  lfs 6, 24(29)
  03b1478  lfs 8, 28(29)
  03b147c  lfs 10, 32(29)
  03b1480  fmuls 7, 2, 2
  03b1484  fmuls 9, 7, 2
  03b1488  fmuls 11, 7, 9
  03b148c  fmadds 2, 9, 4, 2
  03b1490  lfs 4, 36(29)
  03b1494  stfs 1, 104(30)
  03b1498  fmuls 9, 7, 11
  03b149c  fmadds 2, 11, 5, 2
  03b14a0  fmuls 1, 7, 9
  03b14a4  fmadds 2, 9, 3, 2
  03b14a8  fmadds 1, 1, 6, 2
  03b14ac  fmsubs 1, 1, 8, 10
  03b14b0  fmuls 1, 1, 4
  03b14b4  bl 0x502758
  03b14b8  nop
  03b14bc  li 4, 32
  03b14c0  li 5, 32
  03b14c4  subc 4, 3, 4
  03b14c8  li 6, 128
  03b14cc  subc 5, 5, 3
  03b14d0  sradi 4, 4, 63
  03b14d4  subc 6, 6, 3
  03b14d8  and 4, 4, 5
  03b14dc  sradi 5, 6, 63
  03b14e0  li 6, 128
  03b14e4  addc 3, 3, 4
  03b14e8  subc 4, 6, 3
  03b14ec  and 4, 5, 4
  03b14f0  lis 5, -32768
  03b14f4  addc 3, 3, 4
  03b14f8  slwi 4, 3, 8
  03b14fc  or 4, 4, 3
  03b1500  slwi 3, 3, 16
  03b1504  or 4, 4, 3
  03b1508  ori 3, 31, 0
  03b150c  or 6, 4, 5
  03b1510  lis 4, 51
  03b1514  li 5, 0
  03b1518  stw 6, 144(31)
  03b151c  bl 0x10675c
  03b1520  nop
  03b1524  cmpwi 3, 0
  03b1528  bt 2, 0x3b1788
  03b152c  li 4, 2
  03b1530  lis 3, -32736
  03b1534  lis 5, 16329
  03b1538  li 6, 1
  03b153c  ori 7, 3, 32800
  03b1540  stb 4, 32(31)
  03b1544  ori 8, 5, 4059
  03b1548  li 3, 0
  03b154c  stb 6, 188(31)
  03b1550  li 4, 0
  03b1554  stw 7, 144(31)
  03b1558  ori 5, 31, 0
  03b155c  stw 8, 104(30)
  03b1560  bl 0x15d12c
  03b1564  nop
  03b1568  lwz 3, 96(30)
  03b156c  cmpwi 3, -1
  03b1570  bt 2, 0x3b1594
  03b1574  lis 5, 164
  03b1578  slwi 3, 3, 8
  03b157c  li 4, 0
  03b1580  lwz 5, -28512(5)
  03b1584  addc 3, 5, 3
  03b1588  clrldi 3, 3, 32
  03b158c  bl 0x267300
  03b1590  nop
  03b1594  li 3, 100
  03b1598  addi 4, 3, 16
  03b159c  lvlx 2, 3, 30
  03b15a0  lwz 3, 100(30)
  03b15a4  lvrx 3, 4, 30
  03b15a8  cmpwi 3, 0
  03b15ac  vor 2, 2, 3
  03b15b0  bf 1, 0x3b1788
  03b15b4  lis 3, 59
  03b15b8  vcfsx 2, 2, 0
  03b15bc  li 4, 40
  03b15c0  vspltisw 4, -1
  03b15c4  addi 3, 3, 4864
  03b15c8  lis 5, 114
  03b15cc  li 6, -3056
  03b15d0  lvlx 3, 4, 3
  03b15d4  vspltw 3, 3, 0
  03b15d8  li 3, 108
  03b15dc  lvlx 5, 6, 5
  03b15e0  vaddfp 2, 2, 3
  03b15e4  vslw 3, 4, 4
  03b15e8  vmaddfp 2, 5, 2, 3
  03b15ec  vctsxs 2, 2, 0
  03b15f0  vspltw 2, 2, 0
  03b15f4  stvewx 2, 3, 30
  03b15f8  b 0x3b1788
  03b15fc  lis 3, 59
  03b1600  lfs 1, 104(30)
  03b1604  addi 3, 3, 4864
  03b1608  lfs 2, 4(3)
  03b160c  lfs 3, 8(3)
  03b1610  fsubs 2, 2, 1
  03b1614  fsubs 3, 3, 1
  03b1618  fsub 4, 1, 2
  03b161c  fsel 1, 4, 2, 1
  03b1620  lfs 2, 12(3)
  03b1624  lfs 4, 16(3)
  03b1628  fsub 5, 3, 1
  03b162c  fsel 1, 5, 3, 1
  03b1630  lfs 3, 20(3)
  03b1634  lfs 5, 24(3)
  03b1638  lfs 7, 40(3)
  03b163c  lfs 9, 36(3)
  03b1640  fmuls 6, 1, 1
  03b1644  fmuls 8, 6, 1
  03b1648  fmadds 1, 8, 2, 1
  03b164c  fmuls 10, 6, 8
  03b1650  fmr 2, 9
  03b1654  fmuls 8, 6, 10
  03b1658  fmadds 1, 10, 4, 1
  03b165c  fmuls 4, 6, 8
  03b1660  fmadds 1, 8, 3, 1
  03b1664  fmadds 1, 4, 5, 1
  03b1668  fmadds 1, 1, 7, 7
  03b166c  fmuls 1, 1, 2
  03b1670  bl 0x502758
  03b1674  nop
  03b1678  li 4, 32
  03b167c  li 5, 32
  03b1680  subc 4, 3, 4
  03b1684  li 6, 128
  03b1688  subc 5, 5, 3
  03b168c  sradi 4, 4, 63
  03b1690  subc 6, 6, 3
  03b1694  and 4, 4, 5
  03b1698  sradi 5, 6, 63
  03b169c  li 6, 128
  03b16a0  addc 3, 3, 4
  03b16a4  subc 4, 6, 3
  03b16a8  lis 6, -32736
  03b16ac  and 4, 5, 4
  03b16b0  ori 5, 6, 32
  03b16b4  addc 3, 3, 4
  03b16b8  slwi 3, 3, 8
  03b16bc  or 3, 3, 5
  03b16c0  stw 3, 144(31)
  03b16c4  lwz 3, 100(30)
  03b16c8  cmpwi 3, 0
  03b16cc  bf 1, 0x3b1788
  03b16d0  addic 3, 30, 108
  03b16d4  bl 0x4fff60
  03b16d8  nop
  03b16dc  cmpwi 3, 0
  03b16e0  bt 2, 0x3b1730
  03b16e4  li 3, 1
  03b16e8  lis 5, 16329
  03b16ec  li 4, 0
  03b16f0  ori 5, 5, 4059
  03b16f4  stb 3, 32(31)
  03b16f8  stb 4, 188(31)
  03b16fc  stw 5, 104(30)
  03b1700  lwz 30, 96(30)
  03b1704  cmpwi 30, -1
  03b1708  bt 2, 0x3b1788
  03b170c  lis 3, 164
  03b1710  slwi 5, 30, 8
  03b1714  li 4, 1
  03b1718  lwz 3, -28512(3)
  03b171c  addc 3, 3, 5
  03b1720  clrldi 3, 3, 32
  03b1724  bl 0x267300
  03b1728  nop
  03b172c  b 0x3b1788
  03b1730  lis 3, 59
  03b1734  lis 4, 114
  03b1738  addi 3, 3, 4864
  03b173c  lfs 1, 44(3)
  03b1740  lfs 2, -3056(4)
  03b1744  lwz 3, 108(30)
  03b1748  fmuls 1, 2, 1
  03b174c  fctiwz 1, 1
  03b1750  stfd 1, 112(1)
  03b1754  lwz 4, 116(1)
  03b1758  cmpw 3, 4
  03b175c  bf 0, 0x3b1788
  03b1760  lis 3, 59
  03b1764  lis 4, 114
  03b1768  lfs 1, 104(30)
  03b176c  addi 3, 3, 4864
  03b1770  lfs 2, 48(3)
  03b1774  lfs 3, -3052(4)
  03b1778  fmuls 2, 3, 2
  03b177c  bl 0x502578
  03b1780  nop
  03b1784  stfs 1, 104(30)
  03b1788  li 3, 255
  03b178c  stb 3, 164(31)
  03b1790  ld 0, 176(1)
  03b1794  mtlr 0
  03b1798  ld 29, 136(1)
  03b179c  ld 30, 144(1)
  03b17a0  ld 31, 152(1)
  03b17a4  addi 1, 1, 160
  03b17a8  blr

M546_003b17ac:   # 0x3b17ac, 0x14 bytes
  03b17ac  lis 3, 132
  03b17b0  lis 4, 1
  03b17b4  addic 3, 3, 22228
  03b17b8  stw 4, 72(3)
  03b17bc  blr

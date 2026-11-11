# game/update/moby1827.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1827_002c11e8:   # 0x2c11e8, 0x7c0 bytes
  02c11e8  stdu 1, -576(1)
  02c11ec  mflr 0
  02c11f0  std 0, 592(1)
  02c11f4  stfd 19, 472(1)
  02c11f8  stfd 20, 480(1)
  02c11fc  stfd 21, 488(1)
  02c1200  stfd 22, 496(1)
  02c1204  stfd 23, 504(1)
  02c1208  stfd 24, 512(1)
  02c120c  stfd 25, 520(1)
  02c1210  stfd 26, 528(1)
  02c1214  stfd 27, 536(1)
  02c1218  stfd 28, 544(1)
  02c121c  stfd 29, 552(1)
  02c1220  stfd 30, 560(1)
  02c1224  stfd 31, 568(1)
  02c1228  std 30, 456(1)
  02c122c  addi 0, 1, 336
  02c1230  stvx 28, 0, 0
  02c1234  addic 0, 0, 16
  02c1238  stvx 29, 0, 0
  02c123c  addic 0, 0, 16
  02c1240  stvx 30, 0, 0
  02c1244  addic 0, 0, 16
  02c1248  stvx 31, 0, 0
  02c124c  ori 30, 3, 0
  02c1250  lis 3, 165
  02c1254  lis 4, 123
  02c1258  std 27, 432(1)
  02c125c  lis 6, 44
  02c1260  lwz 27, 120(30)
  02c1264  std 26, 424(1)
  02c1268  lwz 3, 7120(3)
  02c126c  addi 26, 6, 4532
  02c1270  lwz 5, 160(27)
  02c1274  lfs 1, 176(27)
  02c1278  slwi 5, 5, 7
  02c127c  lfs 23, 184(27)
  02c1280  fabs 1, 1
  02c1284  addc 3, 3, 5
  02c1288  lis 5, 114
  02c128c  clrldi 3, 3, 32
  02c1290  lfs 2, 56(3)
  02c1294  lfs 3, 40(3)
  02c1298  lis 3, 123
  02c129c  fsubs 4, 2, 3
  02c12a0  fadds 2, 2, 3
  02c12a4  lfs 3, 32520(4)
  02c12a8  lfs 5, -3052(5)
  02c12ac  lis 4, 123
  02c12b0  lwz 3, 32548(3)
  02c12b4  fmuls 3, 3, 5
  02c12b8  extsw 3, 3
  02c12bc  lwz 4, 32552(4)
  02c12c0  fadds 31, 4, 23
  02c12c4  extsw 4, 4
  02c12c8  fadds 23, 2, 23
  02c12cc  std 31, 464(1)
  02c12d0  std 29, 448(1)
  02c12d4  std 28, 440(1)
  02c12d8  std 25, 416(1)
  02c12dc  std 24, 408(1)
  02c12e0  fdivs 1, 1, 3
  02c12e4  bl 0x5027bc
  02c12e8  nop
  02c12ec  ori 28, 3, 0
  02c12f0  addic 3, 1, 112
  02c12f4  addic 4, 30, 192
  02c12f8  bl 0x500f6c
  02c12fc  nop
  02c1300  lfs 1, 16(30)
  02c1304  lis 31, 16256
  02c1308  lfs 2, 20(30)
  02c130c  li 3, 14
  02c1310  stfs 1, 160(1)
  02c1314  stfs 2, 164(1)
  02c1318  stfs 31, 168(1)
  02c131c  stw 31, 172(1)
  02c1320  bl 0x685c4
  02c1324  nop
  02c1328  std 3, 296(1)
  02c132c  li 3, 0
  02c1330  lis 9, 0
  02c1334  li 4, 0
  02c1338  li 5, 1
  02c133c  li 6, 1
  02c1340  li 7, 1
  02c1344  li 8, 0
  02c1348  ori 9, 9, 65424
  02c134c  bl 0x502fd4
  02c1350  nop
  02c1354  std 3, 304(1)
  02c1358  li 4, 0
  02c135c  li 3, 0
  02c1360  li 5, 0
  02c1364  li 6, 0
  02c1368  li 7, 0
  02c136c  li 8, 0
  02c1370  bl 0x502f08
  02c1374  nop
  02c1378  std 3, 288(1)
  02c137c  lis 3, 266
  02c1380  lis 4, 266
  02c1384  lis 5, 123
  02c1388  lis 6, 123
  02c138c  li 7, 128
  02c1390  lwz 8, 3028(3)
  02c1394  lwz 3, 3024(4)
  02c1398  lwz 4, 32540(5)
  02c139c  lwz 6, 32544(6)
  02c13a0  ori 5, 8, 0
  02c13a4  bl 0x502ea8
  02c13a8  nop
  02c13ac  std 3, 312(1)
  02c13b0  li 4, 8
  02c13b4  li 3, 4
  02c13b8  <unknown>
  02c13bc  li 10, 12
  02c13c0  vspltisw 2, 0
  02c13c4  li 11, 24
  02c13c8  vspltw 3, 3, 0
  02c13cc  li 12, 32
  02c13d0  li 9, 0
  02c13d4  <unknown>
  02c13d8  ori 7, 1, 0
  02c13dc  lfs 24, 4(26)
  02c13e0  li 3, 16
  02c13e4  <unknown>
  02c13e8  lis 6, 123
  02c13ec  li 4, 20
  02c13f0  lfs 25, 8(26)
  02c13f4  <unknown>
  02c13f8  lis 5, 123
  02c13fc  lfs 26, 12(26)
  02c1400  li 10, 28
  02c1404  <unknown>
  02c1408  ori 29, 9, 0
  02c140c  lfs 27, 16(26)
  02c1410  li 3, 180
  02c1414  <unknown>
  02c1418  lis 30, 123
  02c141c  lfs 28, 20(26)
  02c1420  li 4, 176
  02c1424  <unknown>
  02c1428  ori 8, 1, 0
  02c142c  lfs 29, 24(26)
  02c1430  addic 6, 6, 32564
  02c1434  <unknown>
  02c1438  addic 5, 5, 32568
  02c143c  lfs 30, 28(26)
  02c1440  addc 4, 7, 4
  02c1444  <unknown>
  02c1448  addc 3, 7, 3
  02c144c  lfs 31, 32(26)
  02c1450  vsldoi 31, 2, 2, 0
  02c1454  vspltw 11, 11, 0
  02c1458  vspltw 10, 10, 0
  02c145c  vspltw 12, 12, 0
  02c1460  vspltw 9, 9, 0
  02c1464  vspltw 5, 5, 0
  02c1468  vspltw 6, 6, 0
  02c146c  vspltw 7, 7, 0
  02c1470  vspltw 8, 8, 0
  02c1474  lfs 2, 168(1)
  02c1478  clrlwi 10, 9, 31
  02c147c  lfs 1, 0(6)
  02c1480  lfs 3, 0(5)
  02c1484  cmpwi 10, 0
  02c1488  stfs 1, 256(8)
  02c148c  stfs 3, 260(8)
  02c1490  bt 2, 0x2c14b0
  02c1494  lis 10, 123
  02c1498  lis 11, 123
  02c149c  li 12, 32532
  02c14a0  lfs 1, 32536(10)
  02c14a4  stfs 1, 184(7)
  02c14a8  <unknown>
  02c14ac  b 0x2c14d0
  02c14b0  lis 10, 123
  02c14b4  lis 11, 123
  02c14b8  li 12, 32532
  02c14bc  lfs 1, 32536(10)
  02c14c0  fneg 1, 1
  02c14c4  <unknown>
  02c14c8  vsubfp 4, 4, 3
  02c14cc  stfs 1, 184(7)
  02c14d0  vspltisw 13, -1
  02c14d4  vspltisw 0, 1
  02c14d8  li 10, 32560
  02c14dc  vspltisw 15, -1
  02c14e0  vspltisw 16, -1
  02c14e4  vslw 13, 13, 13
  02c14e8  vsraw 14, 2, 0
  02c14ec  <unknown>
  02c14f0  vslw 15, 15, 15
  02c14f4  vmaddfp 13, 1, 11, 13
  02c14f8  vslw 16, 16, 16
  02c14fc  vcfsx 14, 14, 0
  02c1500  vspltisw 19, -1
  02c1504  vmaddfp 1, 1, 11, 15
  02c1508  vspltisw 17, -1
  02c150c  vspltisw 15, -1
  02c1510  vspltisw 18, -1
  02c1514  vslw 17, 17, 17
  02c1518  vslw 15, 15, 15
  02c151c  vslw 18, 18, 18
  02c1520  vmaddfp 13, 13, 14, 10
  02c1524  vmaddfp 1, 1, 14, 16
  02c1528  vadduwm 2, 2, 0
  02c152c  vspltw 4, 4, 0
  02c1530  addic 9, 9, 1
  02c1534  addic 6, 6, 8
  02c1538  cmpwi 9, 4
  02c153c  addic 5, 5, 8
  02c1540  addic 8, 8, 8
  02c1544  vsubfp 14, 12, 13
  02c1548  vsubfp 16, 9, 13
  02c154c  vsubfp 30, 12, 1
  02c1550  vcmpgtfp 28, 14, 13
  02c1554  vsel 13, 14, 13, 28
  02c1558  vcmpgtfp 29, 30, 1
  02c155c  vsubfp 14, 9, 1
  02c1560  vsel 1, 30, 1, 29
  02c1564  vspltisw 30, -1
  02c1568  vcmpgtfp 28, 13, 16
  02c156c  vsel 13, 16, 13, 28
  02c1570  vslw 16, 19, 19
  02c1574  vslw 30, 30, 30
  02c1578  vmaddfp 15, 13, 13, 15
  02c157c  vspltisw 29, -1
  02c1580  vcmpgtfp 19, 1, 14
  02c1584  vsel 1, 14, 1, 19
  02c1588  vspltisw 14, -1
  02c158c  vspltisw 19, -1
  02c1590  vmaddfp 16, 1, 1, 16
  02c1594  vslw 14, 14, 14
  02c1598  vslw 19, 19, 19
  02c159c  vmaddfp 17, 15, 13, 17
  02c15a0  vspltisw 28, -1
  02c15a4  vslw 29, 29, 29
  02c15a8  vmaddfp 14, 16, 1, 14
  02c15ac  vmaddfp 18, 15, 17, 18
  02c15b0  vmaddfp 13, 17, 5, 13
  02c15b4  vspltisw 17, -1
  02c15b8  vslw 17, 17, 17
  02c15bc  vmaddfp 30, 16, 14, 30
  02c15c0  vmaddfp 1, 14, 5, 1
  02c15c4  vslw 14, 28, 28
  02c15c8  vmaddfp 19, 15, 18, 19
  02c15cc  vmaddfp 13, 18, 6, 13
  02c15d0  vspltisw 18, -1
  02c15d4  vslw 18, 18, 18
  02c15d8  vmaddfp 17, 16, 30, 17
  02c15dc  vmaddfp 1, 30, 6, 1
  02c15e0  vmaddfp 15, 15, 19, 29
  02c15e4  vmaddfp 13, 19, 7, 13
  02c15e8  vspltisw 19, -1
  02c15ec  vmaddfp 14, 16, 17, 14
  02c15f0  vmaddfp 1, 17, 7, 1
  02c15f4  vmaddfp 13, 15, 8, 13
  02c15f8  vslw 15, 19, 19
  02c15fc  vmaddfp 0, 14, 8, 1
  02c1600  vmaddfp 13, 13, 4, 18
  02c1604  vmaddfp 4, 0, 4, 15
  02c1608  vspltw 13, 13, 0
  02c160c  stvewx 13, 0, 4
  02c1610  addic 4, 4, 16
  02c1614  vspltw 4, 4, 0
  02c1618  stvewx 4, 0, 3
  02c161c  stw 31, 188(7)
  02c1620  addic 3, 3, 16
  02c1624  addic 7, 7, 16
  02c1628  bt 0, 0x2c1478
  02c162c  fcmpu 0, 2, 23
  02c1630  li 24, 1
  02c1634  cror 6, 1, 2
  02c1638  bt 6, 0x2c1924
  02c163c  lis 3, 161
  02c1640  lis 4, -30584
  02c1644  ori 4, 4, 34953
  02c1648  vspltisw 5, -1
  02c164c  lwz 3, 1808(3)
  02c1650  mulhw 4, 4, 3
  02c1654  addc 4, 4, 3
  02c1658  vslw 5, 5, 5
  02c165c  srawi 4, 4, 6
  02c1660  vspltisw 7, -1
  02c1664  srwi 5, 4, 31
  02c1668  addc 4, 4, 5
  02c166c  li 5, 32560
  02c1670  sldi 6, 4, 7
  02c1674  sldi 4, 4, 3
  02c1678  vslw 7, 7, 7
  02c167c  subc 4, 6, 4
  02c1680  <unknown>
  02c1684  lis 6, 44
  02c1688  vrefp 3, 2
  02c168c  subc 3, 3, 4
  02c1690  addi 4, 6, 4532
  02c1694  extsw 3, 3
  02c1698  li 5, 44
  02c169c  std 3, 320(1)
  02c16a0  <unknown>
  02c16a4  vspltw 4, 4, 0
  02c16a8  li 3, 40
  02c16ac  vspltisw 9, -1
  02c16b0  vnmsubfp 6, 3, 2, 4
  02c16b4  vslw 9, 9, 9
  02c16b8  neg 24, 24
  02c16bc  ori 25, 29, 0
  02c16c0  vmaddfp 3, 3, 6, 5
  02c16c4  vspltisw 6, -1
  02c16c8  <unknown>
  02c16cc  lfd 1, 320(1)
  02c16d0  vspltw 5, 5, 0
  02c16d4  vslw 6, 6, 6
  02c16d8  fcfid 1, 1
  02c16dc  lfs 20, 36(4)
  02c16e0  lfs 22, 40(4)
  02c16e4  vnmsubfp 8, 3, 2, 4
  02c16e8  frsp 1, 1
  02c16ec  vmaddfp 3, 3, 8, 7
  02c16f0  fmuls 20, 1, 20
  02c16f4  lfs 1, 32560(30)
  02c16f8  vnmsubfp 2, 3, 2, 4
  02c16fc  vmaddfp 2, 3, 2, 6
  02c1700  vmaddfp 2, 2, 5, 9
  02c1704  vspltw 2, 2, 0
  02c1708  vcmpgefp. 2, 31, 2
  02c170c  bf 26, 0x2c1910
  02c1710  extsw 3, 24
  02c1714  lis 26, 161
  02c1718  std 3, 320(1)
  02c171c  lis 3, 44
  02c1720  addic 26, 26, 24396
  02c1724  addi 3, 3, 4532
  02c1728  lfs 21, 48(3)
  02c172c  lfd 2, 320(1)
  02c1730  fcfid 2, 2
  02c1734  frsp 2, 2
  02c1738  fmuls 20, 2, 20
  02c173c  extsw 3, 25
  02c1740  fmuls 1, 1, 24
  02c1744  std 3, 320(1)
  02c1748  lfd 2, 320(1)
  02c174c  fcfid 2, 2
  02c1750  frsp 19, 2
  02c1754  fmadds 1, 1, 19, 20
  02c1758  bl 0x502648
  02c175c  nop
  02c1760  fadds 1, 1, 25
  02c1764  fsubs 2, 26, 1
  02c1768  fsubs 3, 27, 1
  02c176c  fsub 4, 1, 2
  02c1770  fsel 1, 4, 2, 1
  02c1774  fsub 2, 3, 1
  02c1778  fsel 2, 2, 3, 1
  02c177c  lfs 1, 32560(30)
  02c1780  fmuls 1, 1, 24
  02c1784  fmuls 3, 2, 2
  02c1788  fmadds 1, 1, 19, 20
  02c178c  fmuls 4, 3, 2
  02c1790  fmuls 5, 3, 4
  02c1794  fmadds 2, 4, 28, 2
  02c1798  fmuls 4, 3, 5
  02c179c  fmadds 2, 5, 29, 2
  02c17a0  fmuls 3, 3, 4
  02c17a4  fmadds 2, 4, 30, 2
  02c17a8  fmadds 2, 3, 31, 2
  02c17ac  stfs 2, 112(1)
  02c17b0  bl 0x502648
  02c17b4  nop
  02c17b8  fsubs 2, 26, 1
  02c17bc  fsubs 3, 27, 1
  02c17c0  fsub 4, 1, 2
  02c17c4  fsel 1, 4, 2, 1
  02c17c8  lfs 4, 32560(30)
  02c17cc  stw 29, 120(1)
  02c17d0  fsub 2, 3, 1
  02c17d4  fsel 2, 2, 3, 1
  02c17d8  fmuls 1, 4, 24
  02c17dc  fmuls 3, 2, 2
  02c17e0  fmadds 1, 1, 19, 21
  02c17e4  fmuls 4, 3, 2
  02c17e8  fadds 1, 1, 20
  02c17ec  fmuls 5, 3, 4
  02c17f0  fmadds 2, 4, 28, 2
  02c17f4  fmuls 4, 3, 5
  02c17f8  fmadds 2, 5, 29, 2
  02c17fc  fmuls 3, 3, 4
  02c1800  fmadds 2, 4, 30, 2
  02c1804  fmadds 2, 3, 31, 2
  02c1808  stfs 2, 116(1)
  02c180c  bl 0x502648
  02c1810  nop
  02c1814  fadds 1, 1, 25
  02c1818  fsubs 2, 26, 1
  02c181c  fsubs 3, 27, 1
  02c1820  fsub 4, 1, 2
  02c1824  fsel 1, 4, 2, 1
  02c1828  lfs 4, 32560(30)
  02c182c  fsub 2, 3, 1
  02c1830  fsel 2, 2, 3, 1
  02c1834  fmuls 1, 4, 24
  02c1838  fmuls 3, 2, 2
  02c183c  fmadds 1, 1, 19, 21
  02c1840  fmuls 4, 3, 2
  02c1844  fadds 1, 1, 20
  02c1848  fmuls 5, 3, 4
  02c184c  fmadds 2, 4, 28, 2
  02c1850  fmuls 4, 3, 5
  02c1854  fmadds 2, 5, 29, 2
  02c1858  fmuls 3, 3, 4
  02c185c  fmadds 2, 4, 30, 2
  02c1860  fmadds 2, 3, 31, 2
  02c1864  stfs 2, 128(1)
  02c1868  bl 0x502648
  02c186c  nop
  02c1870  fsubs 2, 26, 1
  02c1874  fsubs 3, 27, 1
  02c1878  addic 4, 1, 112
  02c187c  lwz 6, 28(26)
  02c1880  addic 3, 1, 176
  02c1884  stw 29, 136(1)
  02c1888  li 5, 0
  02c188c  stw 31, 152(1)
  02c1890  li 7, 9
  02c1894  stw 28, 252(1)
  02c1898  stw 28, 248(1)
  02c189c  fsub 4, 1, 2
  02c18a0  stw 28, 244(1)
  02c18a4  stw 28, 240(1)
  02c18a8  fsel 1, 4, 2, 1
  02c18ac  fsub 2, 3, 1
  02c18b0  fsel 1, 2, 3, 1
  02c18b4  fmuls 2, 1, 1
  02c18b8  fmuls 3, 2, 1
  02c18bc  fmuls 4, 2, 3
  02c18c0  fmadds 1, 3, 28, 1
  02c18c4  fmuls 3, 2, 4
  02c18c8  fmadds 1, 4, 29, 1
  02c18cc  fmuls 2, 2, 3
  02c18d0  fmadds 1, 3, 30, 1
  02c18d4  fmadds 1, 2, 31, 1
  02c18d8  stfs 1, 132(1)
  02c18dc  bl 0x72280
  02c18e0  nop
  02c18e4  lfs 1, 32560(30)
  02c18e8  addic 25, 25, 1
  02c18ec  fdivs 2, 22, 1
  02c18f0  extsw 3, 25
  02c18f4  std 3, 320(1)
  02c18f8  lfd 3, 320(1)
  02c18fc  fcfid 3, 3
  02c1900  frsp 3, 3
  02c1904  fcmpu 0, 3, 2
  02c1908  bt 0, 0x2c173c
  02c190c  lfs 2, 168(1)
  02c1910  lfs 1, 188(27)
  02c1914  fadds 2, 2, 1
  02c1918  fcmpu 0, 2, 23
  02c191c  stfs 2, 168(1)
  02c1920  bt 0, 0x2c163c
  02c1924  li 0, 336
  02c1928  lvx 28, 1, 0
  02c192c  addic 0, 0, 16
  02c1930  lvx 29, 1, 0
  02c1934  addic 0, 0, 16
  02c1938  lvx 30, 1, 0
  02c193c  addic 0, 0, 16
  02c1940  lvx 31, 1, 0
  02c1944  ld 0, 592(1)
  02c1948  mtlr 0
  02c194c  lfd 19, 472(1)
  02c1950  lfd 20, 480(1)
  02c1954  lfd 21, 488(1)
  02c1958  lfd 22, 496(1)
  02c195c  lfd 23, 504(1)
  02c1960  lfd 24, 512(1)
  02c1964  lfd 25, 520(1)
  02c1968  lfd 26, 528(1)
  02c196c  lfd 27, 536(1)
  02c1970  lfd 28, 544(1)
  02c1974  lfd 29, 552(1)
  02c1978  lfd 30, 560(1)
  02c197c  lfd 31, 568(1)
  02c1980  ld 24, 408(1)
  02c1984  ld 25, 416(1)
  02c1988  ld 26, 424(1)
  02c198c  ld 27, 432(1)
  02c1990  ld 28, 440(1)
  02c1994  ld 29, 448(1)
  02c1998  ld 30, 456(1)
  02c199c  ld 31, 464(1)
  02c19a0  addi 1, 1, 576
  02c19a4  blr

M1827_002c19a8:   # 0x2c19a8, 0x14 bytes
  02c19a8  lis 3, 123
  02c19ac  lis 4, 1
  02c19b0  addic 3, 3, 32600
  02c19b4  stw 4, 72(3)
  02c19b8  blr

UpdateMoby_1827:   # 0x2c19c0, 0xf8 bytes
  02c19c0  stdu 1, -128(1)
  02c19c4  mflr 0
  02c19c8  std 0, 144(1)
  02c19cc  std 31, 120(1)
  02c19d0  ori 31, 3, 0
  02c19d4  lis 4, 1
  02c19d8  li 5, 0
  02c19dc  bl 0x10675c
  02c19e0  nop
  02c19e4  ori 4, 3, 0
  02c19e8  lbz 3, 32(31)
  02c19ec  cmpwi 3, 0
  02c19f0  bt 1, 0x2c1a00
  02c19f4  cmpwi 3, -1
  02c19f8  bf 1, 0x2c1aa4
  02c19fc  b 0x2c1a14
  02c1a00  cmpwi 3, 1
  02c1a04  bf 1, 0x2c1a20
  02c1a08  cmpwi 3, 2
  02c1a0c  bf 1, 0x2c1a40
  02c1a10  b 0x2c1aa4
  02c1a14  li 3, 1
  02c1a18  stb 3, 32(31)
  02c1a1c  b 0x2c1aa4
  02c1a20  cmpwi 4, 0
  02c1a24  bt 2, 0x2c1aa4
  02c1a28  lwz 3, 44(4)
  02c1a2c  cmpwi 3, 0
  02c1a30  bf 1, 0x2c1aa4
  02c1a34  li 3, 2
  02c1a38  stb 3, 32(31)
  02c1a3c  b 0x2c1aa4
  02c1a40  li 3, 0
  02c1a44  li 4, 0
  02c1a48  ori 5, 31, 0
  02c1a4c  bl 0x15d12c
  02c1a50  nop
  02c1a54  ori 3, 31, 0
  02c1a58  bl 0x11a100
  02c1a5c  nop
  02c1a60  ori 3, 31, 0
  02c1a64  li 9, 2
  02c1a68  li 4, 1829
  02c1a6c  li 5, 1
  02c1a70  li 6, 1829
  02c1a74  li 7, 1
  02c1a78  li 8, 1
  02c1a7c  bl 0x11aa78
  02c1a80  nop
  02c1a84  ori 3, 31, 0
  02c1a88  li 4, 1828
  02c1a8c  bl 0x11ad48
  02c1a90  nop
  02c1a94  ori 3, 31, 0
  02c1a98  bl 0xefb38
  02c1a9c  nop
  02c1aa0  b 0x2c1aa4
  02c1aa4  ld 0, 144(1)
  02c1aa8  mtlr 0
  02c1aac  ld 31, 120(1)
  02c1ab0  addi 1, 1, 128
  02c1ab4  blr

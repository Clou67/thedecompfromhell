# game/update/moby1156.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1156_001e10c8:   # 0x1e10c8, 0x14 bytes
  01e10c8  lis 3, 118
  01e10cc  lis 4, 1
  01e10d0  addic 3, 3, 19880
  01e10d4  stw 4, 72(3)
  01e10d8  blr

M1156_001e1120:   # 0x1e1120, 0x9bc bytes
  01e1120  stdu 1, -320(1)
  01e1124  mflr 0
  01e1128  std 0, 336(1)
  01e112c  stfd 14, 176(1)
  01e1130  stfd 15, 184(1)
  01e1134  stfd 16, 192(1)
  01e1138  stfd 17, 200(1)
  01e113c  stfd 18, 208(1)
  01e1140  stfd 19, 216(1)
  01e1144  stfd 20, 224(1)
  01e1148  stfd 21, 232(1)
  01e114c  stfd 22, 240(1)
  01e1150  stfd 23, 248(1)
  01e1154  stfd 24, 256(1)
  01e1158  stfd 25, 264(1)
  01e115c  stfd 26, 272(1)
  01e1160  stfd 27, 280(1)
  01e1164  stfd 28, 288(1)
  01e1168  stfd 29, 296(1)
  01e116c  stfd 30, 304(1)
  01e1170  stfd 31, 312(1)
  01e1174  std 30, 160(1)
  01e1178  lis 4, 30
  01e117c  std 28, 144(1)
  01e1180  li 30, 0
  01e1184  addi 4, 4, 4320
  01e1188  std 29, 152(1)
  01e118c  lis 28, 239
  01e1190  ori 29, 30, 0
  01e1194  std 31, 168(1)
  01e1198  addic 28, 28, 10032
  01e119c  ori 31, 3, 0
  01e11a0  lfs 30, 0(4)
  01e11a4  lfs 29, 4(4)
  01e11a8  lfs 24, 8(4)
  01e11ac  lfs 28, 12(4)
  01e11b0  lfs 27, 16(4)
  01e11b4  std 27, 136(1)
  01e11b8  std 26, 128(1)
  01e11bc  lfs 26, 20(4)
  01e11c0  lfs 25, 24(4)
  01e11c4  lis 3, 21845
  01e11c8  ori 3, 3, 21846
  01e11cc  mulhw 3, 3, 30
  01e11d0  lis 7, 118
  01e11d4  srwi 4, 3, 31
  01e11d8  li 5, -1
  01e11dc  addc 3, 3, 4
  01e11e0  li 6, 1
  01e11e4  addc 4, 3, 3
  01e11e8  subc 5, 5, 6
  01e11ec  addc 3, 3, 4
  01e11f0  lis 4, 239
  01e11f4  subc 3, 30, 3
  01e11f8  extsw 3, 3
  01e11fc  std 3, 112(1)
  01e1200  lfs 1, 10120(4)
  01e1204  li 3, 3
  01e1208  lfs 2, 20000(7)
  01e120c  fsubs 1, 29, 1
  01e1210  subc 3, 30, 3
  01e1214  lwz 4, 0(28)
  01e1218  lfs 3, 64(31)
  01e121c  sradi 3, 3, 63
  01e1220  lfd 4, 112(1)
  01e1224  and 3, 3, 5
  01e1228  fcfid 4, 4
  01e122c  addc 3, 6, 3
  01e1230  extsw 3, 3
  01e1234  fmadds 1, 2, 1, 24
  01e1238  std 3, 112(1)
  01e123c  stfs 3, 64(4)
  01e1240  lfs 2, 68(31)
  01e1244  frsp 3, 4
  01e1248  stfs 2, 68(4)
  01e124c  lfs 2, 72(31)
  01e1250  fmuls 1, 1, 28
  01e1254  stfs 2, 72(4)
  01e1258  lfs 2, 76(31)
  01e125c  stfs 2, 76(4)
  01e1260  lwz 3, 0(28)
  01e1264  fmsubs 23, 3, 30, 1
  01e1268  lfs 1, 72(3)
  01e126c  lfd 4, 112(1)
  01e1270  fcfid 31, 4
  01e1274  frsp 31, 31
  01e1278  fmuls 2, 31, 27
  01e127c  bl 0x502578
  01e1280  nop
  01e1284  lwz 3, 0(28)
  01e1288  lis 4, 118
  01e128c  stfs 1, 72(3)
  01e1290  lfs 1, 20004(4)
  01e1294  lwz 3, 0(28)
  01e1298  fmuls 1, 1, 28
  01e129c  stfs 1, 68(3)
  01e12a0  lwz 3, 0(28)
  01e12a4  stfs 23, 64(3)
  01e12a8  lwz 4, 0(28)
  01e12ac  addic 3, 4, 192
  01e12b0  addic 4, 4, 64
  01e12b4  bl 0x500b64
  01e12b8  nop
  01e12bc  lfs 1, 196(31)
  01e12c0  lfs 2, 192(31)
  01e12c4  fmuls 3, 1, 1
  01e12c8  lfs 13, 200(31)
  01e12cc  lis 3, 118
  01e12d0  lis 4, 118
  01e12d4  lfs 0, 16(31)
  01e12d8  lis 5, 118
  01e12dc  lfs 23, 20(31)
  01e12e0  lfs 22, 24(31)
  01e12e4  lfs 21, 19988(3)
  01e12e8  lfs 5, 19992(4)
  01e12ec  fmadds 3, 2, 2, 3
  01e12f0  lfs 8, 19996(5)
  01e12f4  lfs 9, 208(31)
  01e12f8  lfs 10, 212(31)
  01e12fc  lfs 11, 216(31)
  01e1300  lwz 3, 0(28)
  01e1304  fmadds 3, 13, 13, 3
  01e1308  lfs 7, 228(3)
  01e130c  lfs 6, 224(3)
  01e1310  fmuls 4, 7, 7
  01e1314  lfs 12, 232(3)
  01e1318  fsqrts 3, 3
  01e131c  fmadds 4, 6, 6, 4
  01e1320  fmadds 4, 12, 12, 4
  01e1324  fsqrts 4, 4
  01e1328  fdivs 20, 25, 3
  01e132c  fsub 19, 26, 3
  01e1330  fsub 18, 26, 3
  01e1334  fsub 17, 26, 3
  01e1338  fsub 16, 3, 26
  01e133c  fsub 15, 3, 26
  01e1340  fsub 3, 3, 26
  01e1344  fcmpu 0, 4, 26
  01e1348  fmuls 13, 13, 20
  01e134c  fmuls 1, 1, 20
  01e1350  fmuls 2, 2, 20
  01e1354  fsel 20, 19, 26, 13
  01e1358  fsel 19, 18, 26, 1
  01e135c  fsel 18, 17, 26, 2
  01e1360  fsel 13, 16, 20, 13
  01e1364  fsel 1, 15, 19, 1
  01e1368  fsel 3, 3, 18, 2
  01e136c  fadds 13, 21, 13
  01e1370  fadds 2, 1, 23
  01e1374  fadds 1, 3, 0
  01e1378  fadds 3, 13, 22
  01e137c  bf 2, 0x1e1394
  01e1380  fmr 4, 26
  01e1384  lfs 7, 236(3)
  01e1388  fmr 5, 4
  01e138c  fmr 6, 5
  01e1390  b 0x1e13a8
  01e1394  fdivs 13, 5, 4
  01e1398  fmuls 5, 7, 13
  01e139c  fmuls 4, 6, 13
  01e13a0  lfs 7, 236(3)
  01e13a4  fmuls 6, 12, 13
  01e13a8  fmuls 12, 10, 10
  01e13ac  stfs 7, 28(3)
  01e13b0  fmuls 8, 31, 8
  01e13b4  fmadds 12, 9, 9, 12
  01e13b8  fmadds 12, 11, 11, 12
  01e13bc  fsqrts 12, 12
  01e13c0  fdivs 7, 8, 12
  01e13c4  fsub 8, 26, 12
  01e13c8  fsub 13, 26, 12
  01e13cc  fsub 0, 26, 12
  01e13d0  fsub 31, 12, 26
  01e13d4  fsub 23, 12, 26
  01e13d8  fsub 12, 12, 26
  01e13dc  fmuls 11, 11, 7
  01e13e0  fmuls 10, 10, 7
  01e13e4  fmuls 7, 9, 7
  01e13e8  fsel 8, 8, 26, 11
  01e13ec  fsel 9, 13, 26, 10
  01e13f0  fsel 13, 0, 26, 7
  01e13f4  fsel 8, 31, 8, 11
  01e13f8  fsel 9, 23, 9, 10
  01e13fc  fsel 7, 12, 13, 7
  01e1400  fadds 6, 6, 8
  01e1404  fadds 5, 5, 9
  01e1408  fadds 4, 4, 7
  01e140c  fadds 3, 3, 6
  01e1410  fadds 2, 2, 5
  01e1414  fadds 1, 1, 4
  01e1418  stfs 3, 24(3)
  01e141c  stfs 2, 20(3)
  01e1420  stfs 1, 16(3)
  01e1424  lwz 3, 0(28)
  01e1428  bl 0xf31a8
  01e142c  nop
  01e1430  addic 30, 30, 1
  01e1434  addic 28, 28, 4
  01e1438  cmpwi 30, 6
  01e143c  bt 0, 0x1e11c4
  01e1440  lis 3, 30
  01e1444  lis 27, 239
  01e1448  addi 3, 3, 4320
  01e144c  addic 27, 27, 10072
  01e1450  ori 30, 29, 0
  01e1454  ori 28, 27, 0
  01e1458  lfs 24, 28(3)
  01e145c  lfs 23, 32(3)
  01e1460  lfs 22, 36(3)
  01e1464  srawi 3, 30, 1
  01e1468  lis 4, 239
  01e146c  addze 3, 3
  01e1470  li 5, -1
  01e1474  sldi 3, 3, 1
  01e1478  li 6, 1
  01e147c  subc 3, 30, 3
  01e1480  subc 5, 5, 6
  01e1484  extsw 3, 3
  01e1488  lis 7, 118
  01e148c  li 26, -1
  01e1490  std 3, 112(1)
  01e1494  li 3, 2
  01e1498  lfs 1, 10120(4)
  01e149c  subc 3, 30, 3
  01e14a0  fsubs 1, 29, 1
  01e14a4  lfs 2, 20000(7)
  01e14a8  sradi 3, 3, 63
  01e14ac  lwz 4, 0(27)
  01e14b0  lfd 3, 112(1)
  01e14b4  and 3, 3, 5
  01e14b8  fcfid 3, 3
  01e14bc  addc 3, 6, 3
  01e14c0  li 5, 0
  01e14c4  extsw 3, 3
  01e14c8  fmadds 1, 2, 1, 24
  01e14cc  std 3, 112(1)
  01e14d0  lfs 4, 64(31)
  01e14d4  clrlwi 3, 30, 31
  01e14d8  stfs 4, 64(4)
  01e14dc  subc 3, 5, 3
  01e14e0  lfs 2, 68(31)
  01e14e4  li 5, 1
  01e14e8  cntlzw 3, 3
  01e14ec  stfs 2, 68(4)
  01e14f0  lfs 2, 72(31)
  01e14f4  sldi 3, 3, 58
  01e14f8  subc 5, 5, 26
  01e14fc  stfs 2, 72(4)
  01e1500  frsp 2, 3
  01e1504  sradi 3, 3, 63
  01e1508  lfs 3, 76(31)
  01e150c  fmuls 1, 1, 28
  01e1510  and 3, 3, 5
  01e1514  stfs 3, 76(4)
  01e1518  lwz 4, 0(27)
  01e151c  addc 26, 26, 3
  01e1520  lfd 3, 112(1)
  01e1524  fcfid 31, 3
  01e1528  fmsubs 21, 2, 30, 1
  01e152c  lfs 1, 72(4)
  01e1530  frsp 31, 31
  01e1534  fmuls 2, 31, 27
  01e1538  bl 0x502578
  01e153c  nop
  01e1540  lwz 4, 0(27)
  01e1544  lis 3, 118
  01e1548  stfs 1, 72(4)
  01e154c  lfs 1, 20004(3)
  01e1550  lwz 3, 0(27)
  01e1554  fmuls 1, 1, 28
  01e1558  stfs 1, 68(3)
  01e155c  lwz 3, 0(27)
  01e1560  stfs 21, 64(3)
  01e1564  lwz 4, 0(27)
  01e1568  addic 3, 4, 192
  01e156c  addic 4, 4, 64
  01e1570  bl 0x500b64
  01e1574  nop
  01e1578  lfs 1, 196(31)
  01e157c  lfs 2, 192(31)
  01e1580  fmuls 3, 1, 1
  01e1584  lfs 4, 200(31)
  01e1588  lis 3, 118
  01e158c  lfs 9, 16(31)
  01e1590  lis 5, 118
  01e1594  lfs 10, 20(31)
  01e1598  lis 4, 118
  01e159c  lfs 5, 19988(3)
  01e15a0  lfs 11, 24(31)
  01e15a4  fmadds 3, 2, 2, 3
  01e15a8  lfs 13, 19992(5)
  01e15ac  lfs 0, 19996(4)
  01e15b0  lfs 21, 208(31)
  01e15b4  lfs 20, 212(31)
  01e15b8  lwz 3, 0(27)
  01e15bc  fmadds 3, 4, 4, 3
  01e15c0  lfs 17, 228(3)
  01e15c4  lfs 18, 224(3)
  01e15c8  fmuls 6, 17, 17
  01e15cc  lfs 16, 232(3)
  01e15d0  fsqrts 3, 3
  01e15d4  fmadds 6, 18, 18, 6
  01e15d8  fmadds 12, 16, 16, 6
  01e15dc  fsqrts 12, 12
  01e15e0  fdivs 6, 25, 3
  01e15e4  fsub 7, 26, 3
  01e15e8  fsub 8, 26, 3
  01e15ec  fsub 15, 26, 3
  01e15f0  fsub 14, 3, 26
  01e15f4  fsub 19, 3, 26
  01e15f8  fsub 3, 3, 26
  01e15fc  fcmpu 0, 12, 26
  01e1600  fmuls 4, 4, 6
  01e1604  fmuls 1, 1, 6
  01e1608  fmuls 2, 2, 6
  01e160c  fsel 6, 7, 26, 4
  01e1610  fsel 7, 8, 26, 1
  01e1614  fsel 8, 15, 26, 2
  01e1618  fsel 4, 14, 6, 4
  01e161c  fsel 1, 19, 7, 1
  01e1620  fsel 2, 3, 8, 2
  01e1624  lfs 19, 216(31)
  01e1628  fadds 3, 5, 4
  01e162c  fadds 10, 1, 10
  01e1630  fadds 9, 2, 9
  01e1634  fadds 11, 3, 11
  01e1638  bf 2, 0x1e1650
  01e163c  fmr 12, 26
  01e1640  lfs 3, 236(3)
  01e1644  fmr 1, 12
  01e1648  fmr 2, 1
  01e164c  b 0x1e1664
  01e1650  fdivs 2, 13, 12
  01e1654  lfs 3, 236(3)
  01e1658  fmuls 12, 18, 2
  01e165c  fmuls 1, 17, 2
  01e1660  fmuls 2, 16, 2
  01e1664  fmr 4, 2
  01e1668  fmuls 2, 20, 20
  01e166c  stfs 3, 28(3)
  01e1670  fmuls 5, 31, 0
  01e1674  extsw 4, 26
  01e1678  fmadds 2, 21, 21, 2
  01e167c  std 4, 112(1)
  01e1680  fmadds 2, 19, 19, 2
  01e1684  fsqrts 6, 2
  01e1688  fmr 2, 22
  01e168c  fdivs 3, 5, 6
  01e1690  fsub 5, 26, 6
  01e1694  fsub 7, 26, 6
  01e1698  fsub 8, 26, 6
  01e169c  fsub 13, 6, 26
  01e16a0  fsub 0, 6, 26
  01e16a4  fsub 6, 6, 26
  01e16a8  fmuls 31, 19, 3
  01e16ac  fmuls 20, 20, 3
  01e16b0  fmuls 3, 21, 3
  01e16b4  fsel 5, 5, 26, 31
  01e16b8  fsel 7, 7, 26, 20
  01e16bc  fsel 8, 8, 26, 3
  01e16c0  fsel 5, 13, 5, 31
  01e16c4  fsel 7, 0, 7, 20
  01e16c8  fsel 3, 6, 8, 3
  01e16cc  fadds 4, 4, 5
  01e16d0  fadds 1, 1, 7
  01e16d4  fadds 3, 12, 3
  01e16d8  fadds 4, 11, 4
  01e16dc  fadds 1, 10, 1
  01e16e0  fadds 3, 9, 3
  01e16e4  stfs 4, 24(3)
  01e16e8  stfs 1, 20(3)
  01e16ec  stfs 3, 16(3)
  01e16f0  lfd 1, 112(1)
  01e16f4  fcfid 1, 1
  01e16f8  frsp 1, 1
  01e16fc  fmuls 1, 1, 23
  01e1700  bl 0x5025e0
  01e1704  nop
  01e1708  cmpwi 26, -1
  01e170c  fmr 9, 1
  01e1710  bf 2, 0x1e1720
  01e1714  lis 3, 239
  01e1718  lfs 1, 10124(3)
  01e171c  b 0x1e1728
  01e1720  lis 3, 239
  01e1724  lfs 1, 10128(3)
  01e1728  fmuls 1, 9, 1
  01e172c  fmr 2, 22
  01e1730  bl 0x502578
  01e1734  nop
  01e1738  lwz 3, 0(27)
  01e173c  fmr 2, 1
  01e1740  lfs 1, 64(3)
  01e1744  bl 0x502578
  01e1748  nop
  01e174c  lwz 3, 0(27)
  01e1750  stfs 1, 64(3)
  01e1754  lwz 3, 0(27)
  01e1758  bl 0xf31a8
  01e175c  nop
  01e1760  addic 30, 30, 1
  01e1764  addic 27, 27, 4
  01e1768  cmpwi 30, 4
  01e176c  bt 0, 0x1e1464
  01e1770  lis 3, 30
  01e1774  lis 27, 239
  01e1778  addi 3, 3, 4320
  01e177c  ori 30, 29, 0
  01e1780  addic 27, 27, 10088
  01e1784  lfs 31, 40(3)
  01e1788  lwz 3, 0(28)
  01e178c  lis 4, 118
  01e1790  lfs 1, 228(3)
  01e1794  lfs 2, 224(3)
  01e1798  fmuls 3, 1, 1
  01e179c  lfs 4, 212(3)
  01e17a0  lfs 5, 232(3)
  01e17a4  fmuls 6, 4, 4
  01e17a8  lfs 7, 208(3)
  01e17ac  lfs 8, 216(3)
  01e17b0  lfs 9, 20008(4)
  01e17b4  lis 5, 118
  01e17b8  fmadds 3, 2, 2, 3
  01e17bc  fmadds 6, 7, 7, 6
  01e17c0  lfs 10, 20012(5)
  01e17c4  fmadds 3, 5, 5, 3
  01e17c8  fmadds 6, 8, 8, 6
  01e17cc  lfs 11, 16(3)
  01e17d0  fsqrts 3, 3
  01e17d4  clrlwi 5, 30, 31
  01e17d8  cmpwi 5, 0
  01e17dc  lis 4, 118
  01e17e0  fsqrts 6, 6
  01e17e4  lwz 5, 0(27)
  01e17e8  fdivs 9, 9, 3
  01e17ec  fsub 12, 26, 3
  01e17f0  fsub 0, 26, 3
  01e17f4  fsub 27, 26, 3
  01e17f8  fsub 13, 3, 26
  01e17fc  fsub 28, 3, 26
  01e1800  fsub 3, 3, 26
  01e1804  fdivs 10, 10, 6
  01e1808  fsub 30, 26, 6
  01e180c  fsub 24, 6, 26
  01e1810  fsub 23, 26, 6
  01e1814  fsub 22, 6, 26
  01e1818  fsub 21, 26, 6
  01e181c  fsub 6, 6, 26
  01e1820  fmuls 2, 2, 9
  01e1824  fmuls 1, 1, 9
  01e1828  fmuls 5, 5, 9
  01e182c  fsel 9, 12, 26, 2
  01e1830  fsel 12, 0, 26, 1
  01e1834  fsel 0, 27, 26, 5
  01e1838  fsel 2, 13, 9, 2
  01e183c  fsel 3, 3, 0, 5
  01e1840  fsel 1, 28, 12, 1
  01e1844  fmuls 5, 7, 10
  01e1848  fmuls 7, 8, 10
  01e184c  fmuls 4, 4, 10
  01e1850  fsel 8, 30, 26, 5
  01e1854  fsel 10, 21, 26, 7
  01e1858  fsel 9, 23, 26, 4
  01e185c  fsel 5, 24, 8, 5
  01e1860  fsel 6, 6, 10, 7
  01e1864  fsel 4, 22, 9, 4
  01e1868  fadds 2, 2, 5
  01e186c  fadds 3, 3, 6
  01e1870  fadds 1, 1, 4
  01e1874  fadds 2, 11, 2
  01e1878  stfs 2, 16(5)
  01e187c  lfs 2, 20(3)
  01e1880  fadds 1, 2, 1
  01e1884  stfs 1, 20(5)
  01e1888  lfs 1, 24(3)
  01e188c  fadds 1, 1, 3
  01e1890  stfs 1, 24(5)
  01e1894  lfs 1, 28(3)
  01e1898  stfs 1, 28(5)
  01e189c  lwz 3, 0(28)
  01e18a0  lwz 5, 0(27)
  01e18a4  lfs 1, 64(3)
  01e18a8  stfs 1, 64(5)
  01e18ac  lfs 1, 68(3)
  01e18b0  stfs 1, 68(5)
  01e18b4  lfs 1, 72(3)
  01e18b8  stfs 1, 72(5)
  01e18bc  lfs 1, 76(3)
  01e18c0  stfs 1, 76(5)
  01e18c4  lwz 3, 0(27)
  01e18c8  lfs 2, 20016(4)
  01e18cc  lfs 3, 68(3)
  01e18d0  bt 2, 0x1e18e0
  01e18d4  lis 3, 239
  01e18d8  lfs 1, 10132(3)
  01e18dc  b 0x1e18e8
  01e18e0  lis 3, 239
  01e18e4  lfs 1, 10136(3)
  01e18e8  fmr 4, 1
  01e18ec  fmuls 2, 2, 31
  01e18f0  fmr 1, 3
  01e18f4  fmuls 2, 2, 4
  01e18f8  bl 0x502578
  01e18fc  nop
  01e1900  lwz 3, 0(27)
  01e1904  stfs 1, 68(3)
  01e1908  lwz 3, 0(27)
  01e190c  bl 0xf31a8
  01e1910  nop
  01e1914  addic 30, 30, 1
  01e1918  addic 28, 28, 4
  01e191c  cmpwi 30, 4
  01e1920  addic 27, 27, 4
  01e1924  bt 0, 0x1e1788
  01e1928  lis 3, 30
  01e192c  lis 30, 239
  01e1930  addi 3, 3, 4320
  01e1934  addic 30, 30, 10056
  01e1938  lfs 31, 44(3)
  01e193c  lfs 30, 48(3)
  01e1940  lfs 28, 52(3)
  01e1944  lfs 27, 56(3)
  01e1948  lfs 4, 196(31)
  01e194c  li 3, 2
  01e1950  lfs 3, 192(31)
  01e1954  li 4, -1
  01e1958  fmuls 1, 4, 4
  01e195c  subc 3, 29, 3
  01e1960  li 5, 1
  01e1964  lfs 2, 200(31)
  01e1968  sradi 3, 3, 63
  01e196c  subc 4, 4, 5
  01e1970  and 3, 3, 4
  01e1974  clrlwi 4, 29, 31
  01e1978  addc 3, 5, 3
  01e197c  extsw 3, 3
  01e1980  fmadds 1, 3, 3, 1
  01e1984  std 3, 112(1)
  01e1988  extsw 3, 4
  01e198c  lis 4, 239
  01e1990  fmadds 2, 2, 2, 1
  01e1994  lfs 1, 10140(4)
  01e1998  lfd 5, 112(1)
  01e199c  std 3, 112(1)
  01e19a0  fsubs 1, 29, 1
  01e19a4  fcfid 5, 5
  01e19a8  fsqrts 2, 2
  01e19ac  lfd 6, 112(1)
  01e19b0  fcfid 6, 6
  01e19b4  frsp 5, 5
  01e19b8  frsp 6, 6
  01e19bc  fmadds 6, 6, 31, 30
  01e19c0  fmadds 1, 1, 28, 6
  01e19c4  fsub 6, 27, 1
  01e19c8  fcmpu 0, 2, 26
  01e19cc  fsel 1, 6, 1, 27
  01e19d0  fmadds 1, 1, 5, 25
  01e19d4  bf 2, 0x1e19e8
  01e19d8  fmr 1, 26
  01e19dc  lfs 3, 204(31)
  01e19e0  fmr 2, 1
  01e19e4  b 0x1e19f8
  01e19e8  fdivs 2, 1, 2
  01e19ec  fmuls 1, 3, 2
  01e19f0  lfs 3, 204(31)
  01e19f4  fmuls 2, 4, 2
  01e19f8  lfs 4, 16(31)
  01e19fc  lis 3, 118
  01e1a00  lwz 4, 0(30)
  01e1a04  fadds 1, 1, 4
  01e1a08  lfs 4, 20020(3)
  01e1a0c  stfs 1, 16(4)
  01e1a10  lfs 1, 20(31)
  01e1a14  fadds 1, 2, 1
  01e1a18  stfs 1, 20(4)
  01e1a1c  lfs 1, 24(31)
  01e1a20  stfs 3, 28(4)
  01e1a24  fadds 1, 4, 1
  01e1a28  stfs 1, 24(4)
  01e1a2c  lwz 3, 0(30)
  01e1a30  lfs 1, 64(31)
  01e1a34  stfs 1, 64(3)
  01e1a38  lfs 1, 68(31)
  01e1a3c  stfs 1, 68(3)
  01e1a40  lfs 1, 72(31)
  01e1a44  stfs 1, 72(3)
  01e1a48  lfs 1, 76(31)
  01e1a4c  stfs 1, 76(3)
  01e1a50  lwz 3, 0(30)
  01e1a54  bl 0xf31a8
  01e1a58  nop
  01e1a5c  addic 29, 29, 1
  01e1a60  addic 30, 30, 4
  01e1a64  cmpwi 29, 4
  01e1a68  bt 0, 0x1e1948
  01e1a6c  ld 0, 336(1)
  01e1a70  mtlr 0
  01e1a74  lfd 14, 176(1)
  01e1a78  lfd 15, 184(1)
  01e1a7c  lfd 16, 192(1)
  01e1a80  lfd 17, 200(1)
  01e1a84  lfd 18, 208(1)
  01e1a88  lfd 19, 216(1)
  01e1a8c  lfd 20, 224(1)
  01e1a90  lfd 21, 232(1)
  01e1a94  lfd 22, 240(1)
  01e1a98  lfd 23, 248(1)
  01e1a9c  lfd 24, 256(1)
  01e1aa0  lfd 25, 264(1)
  01e1aa4  lfd 26, 272(1)
  01e1aa8  lfd 27, 280(1)
  01e1aac  lfd 28, 288(1)
  01e1ab0  lfd 29, 296(1)
  01e1ab4  lfd 30, 304(1)
  01e1ab8  lfd 31, 312(1)
  01e1abc  ld 26, 128(1)
  01e1ac0  ld 27, 136(1)
  01e1ac4  ld 28, 144(1)
  01e1ac8  ld 29, 152(1)
  01e1acc  ld 30, 160(1)
  01e1ad0  ld 31, 168(1)
  01e1ad4  addi 1, 1, 320
  01e1ad8  blr

UpdateMoby_1156:   # 0x1e1b00, 0xeb4 bytes
  01e1b00  stdu 1, -288(1)
  01e1b04  mflr 0
  01e1b08  std 0, 304(1)
  01e1b0c  stfd 30, 272(1)
  01e1b10  stfd 31, 280(1)
  01e1b14  std 31, 264(1)
  01e1b18  ori 31, 3, 0
  01e1b1c  std 30, 256(1)
  01e1b20  lbz 3, 32(31)
  01e1b24  lwz 30, 120(31)
  01e1b28  cmpwi 3, 4
  01e1b2c  cmpwi 1, 3, 0
  01e1b30  cmpwi 6, 3, 1
  01e1b34  std 29, 248(1)
  01e1b38  std 28, 240(1)
  01e1b3c  std 27, 232(1)
  01e1b40  std 26, 224(1)
  01e1b44  cmpwi 7, 3, 2
  01e1b48  bt 2, 0x1e293c
  01e1b4c  cmpwi 3, 3
  01e1b50  bt 2, 0x1e2314
  01e1b54  bt 30, 0x1e1f08
  01e1b58  bt 26, 0x1e1ecc
  01e1b5c  bf 6, 0x1e2984
  01e1b60  li 29, 0
  01e1b64  lhz 6, 52(31)
  01e1b68  lis 4, 239
  01e1b6c  ori 6, 6, 1
  01e1b70  lis 7, 239
  01e1b74  stb 29, 49(31)
  01e1b78  lis 8, 239
  01e1b7c  stw 29, 148(31)
  01e1b80  lis 3, 239
  01e1b84  sth 6, 52(31)
  01e1b88  lis 5, 239
  01e1b8c  stw 29, 10120(4)
  01e1b90  lis 9, 239
  01e1b94  stw 29, 10124(7)
  01e1b98  lis 10, 239
  01e1b9c  stw 29, 10128(8)
  01e1ba0  stw 29, 10132(3)
  01e1ba4  lis 26, 239
  01e1ba8  stw 29, 10136(5)
  01e1bac  lis 27, 151
  01e1bb0  stw 29, 10140(9)
  01e1bb4  ori 30, 29, 0
  01e1bb8  stw 29, 10144(10)
  01e1bbc  addic 26, 26, 10032
  01e1bc0  li 28, 1
  01e1bc4  stb 29, 188(31)
  01e1bc8  addic 27, 27, -25376
  01e1bcc  li 3, 1152
  01e1bd0  bl 0xefa28
  01e1bd4  nop
  01e1bd8  li 4, 64
  01e1bdc  stw 3, 0(26)
  01e1be0  addic 30, 30, 1
  01e1be4  sth 4, 50(3)
  01e1be8  lwz 3, 0(26)
  01e1bec  cmpwi 30, 6
  01e1bf0  stb 28, 49(3)
  01e1bf4  lwz 3, 8320(27)
  01e1bf8  lwz 4, 0(26)
  01e1bfc  ld 3, 56(3)
  01e1c00  std 3, 56(4)
  01e1c04  lwz 3, 0(26)
  01e1c08  lfs 1, 16(31)
  01e1c0c  stfs 1, 16(3)
  01e1c10  lfs 1, 20(31)
  01e1c14  stfs 1, 20(3)
  01e1c18  lfs 1, 24(31)
  01e1c1c  stfs 1, 24(3)
  01e1c20  lfs 1, 28(31)
  01e1c24  stfs 1, 28(3)
  01e1c28  lwz 3, 0(26)
  01e1c2c  lfs 1, 64(31)
  01e1c30  stfs 1, 64(3)
  01e1c34  lfs 1, 68(31)
  01e1c38  stfs 1, 68(3)
  01e1c3c  lfs 1, 72(31)
  01e1c40  stfs 1, 72(3)
  01e1c44  lfs 1, 76(31)
  01e1c48  stfs 1, 76(3)
  01e1c4c  lwz 3, 0(26)
  01e1c50  lhz 4, 52(3)
  01e1c54  ori 4, 4, 1
  01e1c58  sth 4, 52(3)
  01e1c5c  lwz 3, 0(26)
  01e1c60  stb 29, 49(3)
  01e1c64  lwz 3, 0(26)
  01e1c68  addic 26, 26, 4
  01e1c6c  stw 29, 148(3)
  01e1c70  bt 0, 0x1e1bcc
  01e1c74  lis 26, 239
  01e1c78  ori 30, 29, 0
  01e1c7c  addic 26, 26, 10072
  01e1c80  li 3, 1153
  01e1c84  bl 0xefa28
  01e1c88  nop
  01e1c8c  li 4, 64
  01e1c90  stw 3, 0(26)
  01e1c94  addic 30, 30, 1
  01e1c98  sth 4, 50(3)
  01e1c9c  lwz 3, 0(26)
  01e1ca0  cmpwi 30, 4
  01e1ca4  stb 28, 49(3)
  01e1ca8  lwz 3, 8320(27)
  01e1cac  lwz 4, 0(26)
  01e1cb0  ld 3, 56(3)
  01e1cb4  std 3, 56(4)
  01e1cb8  lwz 3, 0(26)
  01e1cbc  lfs 1, 16(31)
  01e1cc0  stfs 1, 16(3)
  01e1cc4  lfs 1, 20(31)
  01e1cc8  stfs 1, 20(3)
  01e1ccc  lfs 1, 24(31)
  01e1cd0  stfs 1, 24(3)
  01e1cd4  lfs 1, 28(31)
  01e1cd8  stfs 1, 28(3)
  01e1cdc  lwz 3, 0(26)
  01e1ce0  lfs 1, 64(31)
  01e1ce4  stfs 1, 64(3)
  01e1ce8  lfs 1, 68(31)
  01e1cec  stfs 1, 68(3)
  01e1cf0  lfs 1, 72(31)
  01e1cf4  stfs 1, 72(3)
  01e1cf8  lfs 1, 76(31)
  01e1cfc  stfs 1, 76(3)
  01e1d00  lwz 3, 0(26)
  01e1d04  lhz 4, 52(3)
  01e1d08  ori 4, 4, 1
  01e1d0c  sth 4, 52(3)
  01e1d10  lwz 3, 0(26)
  01e1d14  stb 29, 49(3)
  01e1d18  lwz 3, 0(26)
  01e1d1c  addic 26, 26, 4
  01e1d20  stw 29, 148(3)
  01e1d24  bt 0, 0x1e1c80
  01e1d28  lis 26, 239
  01e1d2c  ori 30, 29, 0
  01e1d30  addic 26, 26, 10088
  01e1d34  li 3, 1154
  01e1d38  bl 0xefa28
  01e1d3c  nop
  01e1d40  li 4, 64
  01e1d44  stw 3, 0(26)
  01e1d48  addic 30, 30, 1
  01e1d4c  sth 4, 50(3)
  01e1d50  lwz 3, 0(26)
  01e1d54  cmpwi 30, 4
  01e1d58  stb 28, 49(3)
  01e1d5c  lwz 3, 8320(27)
  01e1d60  lwz 4, 0(26)
  01e1d64  ld 3, 56(3)
  01e1d68  std 3, 56(4)
  01e1d6c  lwz 3, 0(26)
  01e1d70  lfs 1, 16(31)
  01e1d74  stfs 1, 16(3)
  01e1d78  lfs 1, 20(31)
  01e1d7c  stfs 1, 20(3)
  01e1d80  lfs 1, 24(31)
  01e1d84  stfs 1, 24(3)
  01e1d88  lfs 1, 28(31)
  01e1d8c  stfs 1, 28(3)
  01e1d90  lwz 3, 0(26)
  01e1d94  lfs 1, 64(31)
  01e1d98  stfs 1, 64(3)
  01e1d9c  lfs 1, 68(31)
  01e1da0  stfs 1, 68(3)
  01e1da4  lfs 1, 72(31)
  01e1da8  stfs 1, 72(3)
  01e1dac  lfs 1, 76(31)
  01e1db0  stfs 1, 76(3)
  01e1db4  lwz 3, 0(26)
  01e1db8  lhz 4, 52(3)
  01e1dbc  ori 4, 4, 1
  01e1dc0  sth 4, 52(3)
  01e1dc4  lwz 3, 0(26)
  01e1dc8  stb 29, 49(3)
  01e1dcc  lwz 3, 0(26)
  01e1dd0  addic 26, 26, 4
  01e1dd4  stw 29, 148(3)
  01e1dd8  bt 0, 0x1e1d34
  01e1ddc  lis 26, 239
  01e1de0  ori 30, 29, 0
  01e1de4  addic 26, 26, 10056
  01e1de8  li 3, 1155
  01e1dec  bl 0xefa28
  01e1df0  nop
  01e1df4  li 4, 64
  01e1df8  stw 3, 0(26)
  01e1dfc  sth 4, 50(3)
  01e1e00  lwz 3, 0(26)
  01e1e04  addic 30, 30, 1
  01e1e08  stb 28, 49(3)
  01e1e0c  lwz 3, 8320(27)
  01e1e10  lwz 4, 0(26)
  01e1e14  cmpwi 30, 4
  01e1e18  ld 3, 56(3)
  01e1e1c  std 3, 56(4)
  01e1e20  lwz 3, 0(26)
  01e1e24  lfs 1, 16(31)
  01e1e28  stfs 1, 16(3)
  01e1e2c  lfs 1, 20(31)
  01e1e30  stfs 1, 20(3)
  01e1e34  lfs 1, 24(31)
  01e1e38  stfs 1, 24(3)
  01e1e3c  lfs 1, 28(31)
  01e1e40  stfs 1, 28(3)
  01e1e44  lwz 3, 0(26)
  01e1e48  lfs 1, 64(31)
  01e1e4c  stfs 1, 64(3)
  01e1e50  lfs 1, 68(31)
  01e1e54  stfs 1, 68(3)
  01e1e58  lfs 1, 72(31)
  01e1e5c  stfs 1, 72(3)
  01e1e60  lfs 1, 76(31)
  01e1e64  stfs 1, 76(3)
  01e1e68  lwz 3, 0(26)
  01e1e6c  lhz 4, 52(3)
  01e1e70  ori 4, 4, 32
  01e1e74  sth 4, 52(3)
  01e1e78  lwz 3, 0(26)
  01e1e7c  lwz 3, 120(3)
  01e1e80  addic 4, 3, 32
  01e1e84  lwz 5, 92(3)
  01e1e88  stw 4, 8(3)
  01e1e8c  ori 4, 5, 1
  01e1e90  stw 4, 92(3)
  01e1e94  lwz 3, 0(26)
  01e1e98  lhz 4, 52(3)
  01e1e9c  ori 4, 4, 1
  01e1ea0  sth 4, 52(3)
  01e1ea4  lwz 3, 0(26)
  01e1ea8  stb 29, 49(3)
  01e1eac  lwz 3, 0(26)
  01e1eb0  addic 26, 26, 4
  01e1eb4  stw 29, 148(3)
  01e1eb8  bt 0, 0x1e1de8
  01e1ebc  ori 3, 31, 0
  01e1ec0  bl 0x1e1120
  01e1ec4  stb 28, 32(31)
  01e1ec8  b 0x1e2984
  01e1ecc  lwz 30, 0(30)
  01e1ed0  cmpwi 30, -1
  01e1ed4  bt 2, 0x1e2984
  01e1ed8  lis 3, 164
  01e1edc  slwi 4, 30, 8
  01e1ee0  lwz 3, -28512(3)
  01e1ee4  addc 3, 3, 4
  01e1ee8  clrldi 3, 3, 32
  01e1eec  bl 0x1eebe4
  01e1ef0  nop
  01e1ef4  cmpwi 3, 0
  01e1ef8  bt 2, 0x1e2984
  01e1efc  li 3, 2
  01e1f00  stb 3, 32(31)
  01e1f04  b 0x1e2984
  01e1f08  lis 3, 30
  01e1f0c  lis 5, 114
  01e1f10  addi 4, 3, 6876
  01e1f14  addic 3, 30, 12
  01e1f18  lis 29, 16256
  01e1f1c  lfs 3, 4(4)
  01e1f20  lfs 1, 0(4)
  01e1f24  lfs 4, -3052(5)
  01e1f28  fmuls 2, 4, 3
  01e1f2c  bl 0x109af0
  01e1f30  nop
  01e1f34  lwz 3, 12(30)
  01e1f38  lis 4, 150
  01e1f3c  lfs 1, 12(30)
  01e1f40  srawi 5, 3, 31
  01e1f44  srwi 6, 5, 1
  01e1f48  stfs 1, -12528(4)
  01e1f4c  xor 3, 6, 3
  01e1f50  subc 3, 3, 5
  01e1f54  cmpw 3, 29
  01e1f58  bt 0, 0x1e2984
  01e1f5c  li 3, 3
  01e1f60  lis 4, 164
  01e1f64  stb 3, 32(31)
  01e1f68  lwz 3, 0(30)
  01e1f6c  lwz 4, -28512(4)
  01e1f70  slwi 3, 3, 8
  01e1f74  addc 3, 4, 3
  01e1f78  lis 4, 30
  01e1f7c  clrldi 3, 3, 32
  01e1f80  addi 29, 4, 6876
  01e1f84  li 4, 0
  01e1f88  lfs 1, 16(3)
  01e1f8c  stfs 1, 112(1)
  01e1f90  lfs 1, 20(3)
  01e1f94  stfs 1, 116(1)
  01e1f98  lfs 1, 24(3)
  01e1f9c  stfs 1, 120(1)
  01e1fa0  lfs 2, 28(3)
  01e1fa4  addic 3, 1, 112
  01e1fa8  stfs 2, 124(1)
  01e1fac  lfs 2, 8(29)
  01e1fb0  fadds 1, 1, 2
  01e1fb4  stfs 1, 120(1)
  01e1fb8  lfs 1, 12(29)
  01e1fbc  bl 0xffb70
  01e1fc0  nop
  01e1fc4  lfs 2, 16(31)
  01e1fc8  lfs 3, 112(1)
  01e1fcc  lfs 4, 20(31)
  01e1fd0  lfs 5, 116(1)
  01e1fd4  fsubs 2, 2, 3
  01e1fd8  stfs 1, 120(1)
  01e1fdc  fsubs 3, 4, 5
  01e1fe0  li 3, 0
  01e1fe4  lfs 4, 16(29)
  01e1fe8  lis 4, 115
  01e1fec  addic 4, 4, 22784
  01e1ff0  fabs 6, 2
  01e1ff4  fabs 5, 3
  01e1ff8  stfs 2, 176(1)
  01e1ffc  stfs 3, 180(1)
  01e2000  fsubs 1, 6, 5
  01e2004  stfs 1, 184(1)
  01e2008  lwz 5, 176(1)
  01e200c  lfs 1, 176(1)
  01e2010  lwz 6, 180(1)
  01e2014  stw 3, 140(1)
  01e2018  fabs 1, 1
  01e201c  stw 3, 132(1)
  01e2020  stw 3, 128(1)
  01e2024  lfs 2, 180(1)
  01e2028  rlwinm 6, 6, 3, 29, 29
  01e202c  lwz 3, 184(1)
  01e2030  fabs 3, 2
  01e2034  lfs 2, 184(1)
  01e2038  rlwimi 6, 3, 2, 30, 30
  01e203c  ori 3, 4, 0
  01e2040  fsub 7, 2, 4
  01e2044  fsub 2, 2, 4
  01e2048  rlwimi 6, 5, 4, 28, 28
  01e204c  rlwimi 3, 6, 2, 26, 28
  01e2050  slwi 5, 6, 2
  01e2054  clrldi 3, 3, 32
  01e2058  fsel 5, 7, 1, 5
  01e205c  lfsx 1, 4, 5
  01e2060  fsel 3, 2, 3, 6
  01e2064  lfs 2, 4(3)
  01e2068  fcmpu 0, 5, 4
  01e206c  bt 1, 0x1e2074
  01e2070  b 0x1e2194
  01e2074  fsubs 6, 3, 5
  01e2078  fadds 3, 3, 5
  01e207c  addic 3, 1, 16
  01e2080  li 6, 2
  01e2084  addic 4, 3, 172
  01e2088  addic 5, 3, 188
  01e208c  mtctr 6
  01e2090  fdivs 3, 6, 3
  01e2094  fmuls 5, 3, 3
  01e2098  stfs 3, 200(1)
  01e209c  stfs 3, 192(1)
  01e20a0  stfs 3, 196(1)
  01e20a4  stfs 3, 188(1)
  01e20a8  lfs 7, 200(1)
  01e20ac  lfs 8, 192(1)
  01e20b0  lfs 9, 196(1)
  01e20b4  fmuls 6, 5, 5
  01e20b8  fmuls 8, 8, 5
  01e20bc  fmuls 7, 7, 6
  01e20c0  fmuls 3, 6, 6
  01e20c4  fmuls 6, 9, 6
  01e20c8  stfs 8, 192(1)
  01e20cc  fmuls 5, 7, 5
  01e20d0  stfs 6, 196(1)
  01e20d4  stfs 5, 200(1)
  01e20d8  lfs 5, 172(3)
  01e20dc  fmuls 5, 5, 3
  01e20e0  stfs 5, 188(3)
  01e20e4  lfs 5, 4(4)
  01e20e8  addic 3, 3, 8
  01e20ec  addic 4, 4, 8
  01e20f0  fmuls 5, 5, 3
  01e20f4  stfs 5, 4(5)
  01e20f8  addic 5, 5, 8
  01e20fc  bdnz 0x1e20d8
  01e2100  li 5, 4
  01e2104  ori 3, 1, 0
  01e2108  mtctr 5
  01e210c  lis 4, 115
  01e2110  addic 5, 3, 188
  01e2114  addic 4, 4, 22752
  01e2118  ori 7, 5, 0
  01e211c  lfs 3, 188(3)
  01e2120  lfs 5, 0(4)
  01e2124  fmuls 3, 3, 5
  01e2128  lfs 5, 4(4)
  01e212c  addic 4, 4, 8
  01e2130  stfs 3, 188(3)
  01e2134  lfs 3, 4(5)
  01e2138  addic 3, 3, 8
  01e213c  fmuls 3, 3, 5
  01e2140  stfs 3, 4(5)
  01e2144  addic 5, 5, 8
  01e2148  bdnz 0x1e211c
  01e214c  ori 3, 1, 0
  01e2150  mtctr 6
  01e2154  lfs 3, 188(3)
  01e2158  fadds 3, 4, 3
  01e215c  lfs 4, 4(7)
  01e2160  addic 3, 3, 16
  01e2164  lfs 5, 8(7)
  01e2168  lfs 6, 12(7)
  01e216c  addic 7, 7, 16
  01e2170  fadds 3, 3, 4
  01e2174  fadds 4, 3, 5
  01e2178  fadds 4, 4, 6
  01e217c  bdnz 0x1e2154
  01e2180  lis 3, 30
  01e2184  addi 3, 3, 6876
  01e2188  lfs 3, 20(3)
  01e218c  fadds 4, 4, 3
  01e2190  fmadds 4, 4, 1, 2
  01e2194  addic 3, 1, 112
  01e2198  stfs 4, 136(1)
  01e219c  addic 4, 1, 128
  01e21a0  li 5, 114
  01e21a4  li 6, 1
  01e21a8  bl 0xa0c38
  01e21ac  nop
  01e21b0  lis 3, 165
  01e21b4  lwz 4, 4(30)
  01e21b8  li 7, 0
  01e21bc  lwz 5, 8(30)
  01e21c0  slwi 4, 4, 7
  01e21c4  slwi 6, 5, 7
  01e21c8  lwz 3, 7128(3)
  01e21cc  li 5, 1
  01e21d0  addc 4, 3, 4
  01e21d4  addc 8, 3, 6
  01e21d8  addic 3, 4, 48
  01e21dc  addic 4, 8, 112
  01e21e0  clrldi 3, 3, 32
  01e21e4  li 6, 0
  01e21e8  clrldi 4, 4, 32
  01e21ec  bl 0x47f74
  01e21f0  nop
  01e21f4  lis 30, 239
  01e21f8  li 3, 6
  01e21fc  addic 30, 30, 10032
  01e2200  mtctr 3
  01e2204  lwz 4, 0(30)
  01e2208  li 3, 1
  01e220c  lhz 5, 52(4)
  01e2210  rlwinm 5, 5, 0, 0, 30
  01e2214  sth 5, 52(4)
  01e2218  lwz 4, 0(30)
  01e221c  stb 3, 49(4)
  01e2220  lwz 3, 0(30)
  01e2224  addic 30, 30, 4
  01e2228  lwz 4, 36(3)
  01e222c  lwz 4, 16(4)
  01e2230  stw 4, 148(3)
  01e2234  bdnz 0x1e2204
  01e2238  lis 3, 239
  01e223c  li 4, 4
  01e2240  addic 3, 3, 10072
  01e2244  mtctr 4
  01e2248  lwz 6, 0(3)
  01e224c  li 5, 1
  01e2250  lhz 7, 52(6)
  01e2254  rlwinm 7, 7, 0, 0, 30
  01e2258  sth 7, 52(6)
  01e225c  lwz 6, 0(3)
  01e2260  stb 5, 49(6)
  01e2264  lwz 5, 0(3)
  01e2268  addic 3, 3, 4
  01e226c  lwz 6, 36(5)
  01e2270  lwz 6, 16(6)
  01e2274  stw 6, 148(5)
  01e2278  bdnz 0x1e2248
  01e227c  lis 3, 239
  01e2280  mtctr 4
  01e2284  addic 3, 3, 10088
  01e2288  lwz 6, 0(3)
  01e228c  li 5, 1
  01e2290  lhz 7, 52(6)
  01e2294  rlwinm 7, 7, 0, 0, 30
  01e2298  sth 7, 52(6)
  01e229c  lwz 6, 0(3)
  01e22a0  stb 5, 49(6)
  01e22a4  lwz 5, 0(3)
  01e22a8  addic 3, 3, 4
  01e22ac  lwz 6, 36(5)
  01e22b0  lwz 6, 16(6)
  01e22b4  stw 6, 148(5)
  01e22b8  bdnz 0x1e2288
  01e22bc  lis 3, 239
  01e22c0  mtctr 4
  01e22c4  addic 3, 3, 10056
  01e22c8  lwz 5, 0(3)
  01e22cc  li 4, 1
  01e22d0  lhz 6, 52(5)
  01e22d4  rlwinm 6, 6, 0, 0, 30
  01e22d8  sth 6, 52(5)
  01e22dc  lwz 5, 0(3)
  01e22e0  stb 4, 49(5)
  01e22e4  lwz 4, 0(3)
  01e22e8  addic 3, 3, 4
  01e22ec  lwz 5, 36(4)
  01e22f0  lwz 5, 16(5)
  01e22f4  stw 5, 148(4)
  01e22f8  bdnz 0x1e22c8
  01e22fc  li 3, 0
  01e2300  li 4, 0
  01e2304  ori 5, 31, 0
  01e2308  bl 0x15d12c
  01e230c  nop
  01e2310  b 0x1e2984
  01e2314  lis 3, 239
  01e2318  lis 4, 30
  01e231c  lis 5, 16256
  01e2320  addi 4, 4, 6876
  01e2324  lwz 6, 10120(3)
  01e2328  lfs 1, 10120(3)
  01e232c  srawi 7, 6, 31
  01e2330  lfs 31, 0(4)
  01e2334  srwi 3, 7, 1
  01e2338  xor 3, 3, 6
  01e233c  subc 3, 3, 7
  01e2340  cmpw 3, 5
  01e2344  bf 0, 0x1e237c
  01e2348  lis 4, 114
  01e234c  lis 6, 114
  01e2350  fmr 1, 31
  01e2354  lis 29, 239
  01e2358  lis 5, 239
  01e235c  addic 3, 29, 10120
  01e2360  lfs 3, -3048(4)
  01e2364  lfs 4, -3052(6)
  01e2368  addic 5, 5, 10148
  01e236c  fmr 2, 3
  01e2370  bl 0x109c30
  01e2374  nop
  01e2378  lfs 1, 10120(29)
  01e237c  lis 3, 30
  01e2380  addi 3, 3, 6876
  01e2384  lfs 30, 24(3)
  01e2388  fcmpu 0, 1, 30
  01e238c  cror 6, 0, 2
  01e2390  bt 6, 0x1e23c0
  01e2394  lis 3, 239
  01e2398  lwz 3, 10124(3)
  01e239c  cmpwi 3, 0
  01e23a0  bf 2, 0x1e23c0
  01e23a4  li 3, 1
  01e23a8  li 4, 0
  01e23ac  ori 5, 31, 0
  01e23b0  bl 0x15d12c
  01e23b4  nop
  01e23b8  lis 3, 239
  01e23bc  lfs 1, 10120(3)
  01e23c0  fcmpu 0, 1, 30
  01e23c4  cror 6, 0, 2
  01e23c8  bt 6, 0x1e2434
  01e23cc  lis 3, 239
  01e23d0  lis 4, 16256
  01e23d4  lwz 3, 10124(3)
  01e23d8  srawi 5, 3, 31
  01e23dc  srwi 6, 5, 1
  01e23e0  xor 3, 6, 3
  01e23e4  subc 3, 3, 5
  01e23e8  cmpw 3, 4
  01e23ec  bf 0, 0x1e2434
  01e23f0  lis 3, 30
  01e23f4  lis 4, 114
  01e23f8  fmr 1, 31
  01e23fc  addi 3, 3, 6876
  01e2400  lis 7, 114
  01e2404  lis 5, 239
  01e2408  lis 6, 239
  01e240c  lfs 4, 28(3)
  01e2410  lfs 2, -3048(4)
  01e2414  lfs 3, -3052(7)
  01e2418  addic 3, 5, 10124
  01e241c  fmuls 2, 2, 4
  01e2420  addic 5, 6, 10152
  01e2424  fmuls 4, 3, 4
  01e2428  fmr 3, 2
  01e242c  bl 0x109c30
  01e2430  nop
  01e2434  lis 3, 239
  01e2438  lis 4, 30
  01e243c  lis 5, 16128
  01e2440  addi 4, 4, 6876
  01e2444  lwz 6, 10124(3)
  01e2448  lfs 1, 10124(3)
  01e244c  srawi 7, 6, 31
  01e2450  lfs 30, 12(4)
  01e2454  srwi 3, 7, 1
  01e2458  xor 3, 3, 6
  01e245c  subc 3, 3, 7
  01e2460  cmpw 3, 5
  01e2464  bf 1, 0x1e2494
  01e2468  lis 3, 239
  01e246c  lwz 3, 10128(3)
  01e2470  cmpwi 3, 0
  01e2474  bf 2, 0x1e2494
  01e2478  li 3, 1
  01e247c  li 4, 0
  01e2480  ori 5, 31, 0
  01e2484  bl 0x15d12c
  01e2488  nop
  01e248c  lis 3, 239
  01e2490  lfs 1, 10124(3)
  01e2494  fcmpu 0, 1, 30
  01e2498  cror 6, 0, 2
  01e249c  bt 6, 0x1e2510
  01e24a0  lis 3, 239
  01e24a4  lis 4, 16256
  01e24a8  lwz 3, 10128(3)
  01e24ac  srawi 5, 3, 31
  01e24b0  srwi 6, 5, 1
  01e24b4  xor 3, 6, 3
  01e24b8  subc 3, 3, 5
  01e24bc  cmpw 3, 4
  01e24c0  bf 0, 0x1e2510
  01e24c4  lis 3, 30
  01e24c8  fmr 1, 31
  01e24cc  lis 4, 114
  01e24d0  addi 3, 3, 6876
  01e24d4  lis 5, 239
  01e24d8  lis 6, 239
  01e24dc  lfs 4, 28(3)
  01e24e0  lfs 2, -3048(4)
  01e24e4  lis 4, 114
  01e24e8  fmuls 2, 2, 4
  01e24ec  addic 3, 5, 10128
  01e24f0  addic 5, 6, 10156
  01e24f4  lfs 3, -3052(4)
  01e24f8  fmuls 4, 3, 4
  01e24fc  fmr 3, 2
  01e2500  bl 0x109c30
  01e2504  nop
  01e2508  lis 3, 239
  01e250c  lfs 1, 10124(3)
  01e2510  fcmpu 0, 1, 31
  01e2514  bt 0, 0x1e2580
  01e2518  lis 3, 239
  01e251c  lis 4, 16256
  01e2520  lwz 3, 10132(3)
  01e2524  srawi 5, 3, 31
  01e2528  srwi 6, 5, 1
  01e252c  xor 3, 6, 3
  01e2530  subc 3, 3, 5
  01e2534  cmpw 3, 4
  01e2538  bf 0, 0x1e2580
  01e253c  lis 3, 30
  01e2540  fmr 1, 31
  01e2544  lis 4, 114
  01e2548  addi 3, 3, 6876
  01e254c  lis 5, 239
  01e2550  lis 6, 239
  01e2554  lfs 4, 28(3)
  01e2558  lfs 2, -3048(4)
  01e255c  lis 4, 114
  01e2560  fmuls 2, 2, 4
  01e2564  addic 3, 5, 10132
  01e2568  addic 5, 6, 10160
  01e256c  lfs 3, -3052(4)
  01e2570  fmuls 4, 3, 4
  01e2574  fmr 3, 2
  01e2578  bl 0x109c30
  01e257c  nop
  01e2580  lis 3, 239
  01e2584  lis 4, 16256
  01e2588  lwz 3, 10128(3)
  01e258c  srawi 5, 3, 31
  01e2590  srwi 6, 5, 1
  01e2594  xor 3, 6, 3
  01e2598  subc 3, 3, 5
  01e259c  cmpw 3, 4
  01e25a0  bt 0, 0x1e260c
  01e25a4  lis 3, 239
  01e25a8  lis 4, 16256
  01e25ac  lwz 3, 10136(3)
  01e25b0  srawi 5, 3, 31
  01e25b4  srwi 6, 5, 1
  01e25b8  xor 3, 6, 3
  01e25bc  subc 3, 3, 5
  01e25c0  cmpw 3, 4
  01e25c4  bf 0, 0x1e260c
  01e25c8  lis 3, 30
  01e25cc  lis 4, 114
  01e25d0  fmr 1, 31
  01e25d4  addi 3, 3, 6876
  01e25d8  lis 7, 114
  01e25dc  lis 5, 239
  01e25e0  lis 6, 239
  01e25e4  lfs 4, 28(3)
  01e25e8  lfs 2, -3048(4)
  01e25ec  lfs 3, -3052(7)
  01e25f0  addic 3, 5, 10136
  01e25f4  fmuls 2, 2, 4
  01e25f8  addic 5, 6, 10164
  01e25fc  fmuls 4, 3, 4
  01e2600  fmr 3, 2
  01e2604  bl 0x109c30
  01e2608  nop
  01e260c  lis 3, 239
  01e2610  lis 4, 16230
  01e2614  ori 4, 4, 26214
  01e2618  lwz 3, 10136(3)
  01e261c  srawi 5, 3, 31
  01e2620  srwi 6, 5, 1
  01e2624  xor 3, 6, 3
  01e2628  subc 3, 3, 5
  01e262c  cmpw 3, 4
  01e2630  bf 1, 0x1e26a0
  01e2634  lis 3, 239
  01e2638  lis 4, 16256
  01e263c  lwz 3, 10140(3)
  01e2640  srawi 5, 3, 31
  01e2644  srwi 6, 5, 1
  01e2648  xor 3, 6, 3
  01e264c  subc 3, 3, 5
  01e2650  cmpw 3, 4
  01e2654  bf 0, 0x1e26a0
  01e2658  lis 3, 30
  01e265c  lis 6, 114
  01e2660  fmr 1, 31
  01e2664  addi 4, 3, 6876
  01e2668  lis 3, 239
  01e266c  lis 5, 239
  01e2670  addic 3, 3, 10140
  01e2674  addic 5, 5, 10168
  01e2678  lfs 4, 28(4)
  01e267c  lfs 3, 4(4)
  01e2680  lis 4, 114
  01e2684  lfs 5, -3048(6)
  01e2688  fmuls 2, 5, 4
  01e268c  fmuls 3, 5, 3
  01e2690  lfs 6, -3052(4)
  01e2694  fmuls 4, 6, 4
  01e2698  bl 0x109c30
  01e269c  nop
  01e26a0  ori 3, 31, 0
  01e26a4  bl 0x1e1120
  01e26a8  lis 29, 151
  01e26ac  addic 29, 29, -16400
  01e26b0  lbz 3, 86(29)
  01e26b4  cmpwi 3, 0
  01e26b8  bt 2, 0x1e26d8
  01e26bc  lis 3, 150
  01e26c0  addic 3, 3, 19008
  01e26c4  lwz 3, 164(3)
  01e26c8  cmpwi 3, 0
  01e26cc  bt 2, 0x1e26d8
  01e26d0  li 3, 1
  01e26d4  stb 3, 188(31)
  01e26d8  lis 3, 239
  01e26dc  lis 4, 16256
  01e26e0  lwz 3, 10140(3)
  01e26e4  srawi 5, 3, 31
  01e26e8  srwi 6, 5, 1
  01e26ec  xor 3, 6, 3
  01e26f0  subc 3, 3, 5
  01e26f4  cmpw 3, 4
  01e26f8  bf 0, 0x1e2734
  01e26fc  lbz 3, 188(31)
  01e2700  cmpwi 3, 0
  01e2704  bf 2, 0x1e2734
  01e2708  lis 3, 30
  01e270c  lis 4, 114
  01e2710  addi 5, 3, 6876
  01e2714  addic 3, 30, 12
  01e2718  lfs 3, 4(5)
  01e271c  lfs 1, 16(5)
  01e2720  lfs 4, -3052(4)
  01e2724  fmuls 2, 4, 3
  01e2728  bl 0x109af0
  01e272c  nop
  01e2730  b 0x1e275c
  01e2734  lis 3, 30
  01e2738  lis 5, 114
  01e273c  fmr 1, 31
  01e2740  addi 4, 3, 6876
  01e2744  addic 3, 30, 12
  01e2748  lfs 2, 4(4)
  01e274c  lfs 3, -3052(5)
  01e2750  fmuls 2, 3, 2
  01e2754  bl 0x109af0
  01e2758  nop
  01e275c  lis 4, 30
  01e2760  lis 3, 150
  01e2764  lfs 1, 12(30)
  01e2768  addi 4, 4, 6876
  01e276c  lis 5, 114
  01e2770  lis 28, 239
  01e2774  stfs 1, -12528(3)
  01e2778  lfs 4, 32(4)
  01e277c  addic 3, 28, 10144
  01e2780  lfs 2, -3048(5)
  01e2784  lis 4, 114
  01e2788  lis 5, 239
  01e278c  fmr 1, 31
  01e2790  fmuls 2, 2, 4
  01e2794  addic 5, 5, 10172
  01e2798  lfs 3, -3052(4)
  01e279c  fmuls 4, 3, 4
  01e27a0  fmr 3, 2
  01e27a4  bl 0x109c30
  01e27a8  nop
  01e27ac  lis 3, 165
  01e27b0  lwz 4, 4(30)
  01e27b4  lwz 5, 8(30)
  01e27b8  slwi 6, 4, 7
  01e27bc  slwi 7, 5, 7
  01e27c0  lwz 3, 7128(3)
  01e27c4  slwi 4, 4, 7
  01e27c8  addc 6, 3, 6
  01e27cc  addc 7, 3, 7
  01e27d0  clrldi 6, 6, 32
  01e27d4  clrldi 7, 7, 32
  01e27d8  slwi 5, 5, 7
  01e27dc  addc 4, 3, 4
  01e27e0  lfs 1, 48(6)
  01e27e4  lfs 2, 10144(28)
  01e27e8  lfs 3, 48(7)
  01e27ec  lfs 4, 52(7)
  01e27f0  fsubs 3, 3, 1
  01e27f4  lfs 5, 52(6)
  01e27f8  fsubs 4, 4, 5
  01e27fc  addc 3, 3, 5
  01e2800  lfs 5, 56(7)
  01e2804  clrldi 4, 4, 32
  01e2808  lfs 6, 56(6)
  01e280c  clrldi 5, 3, 32
  01e2810  lfs 7, 60(7)
  01e2814  fsubs 5, 5, 6
  01e2818  fmadds 1, 2, 3, 1
  01e281c  addic 3, 1, 144
  01e2820  stfs 1, 144(1)
  01e2824  lfs 1, 52(6)
  01e2828  fmadds 1, 2, 4, 1
  01e282c  stfs 1, 148(1)
  01e2830  lfs 1, 56(6)
  01e2834  stfs 7, 156(1)
  01e2838  fmadds 1, 2, 5, 1
  01e283c  stfs 1, 152(1)
  01e2840  lfs 1, 112(5)
  01e2844  lfs 3, 112(4)
  01e2848  lfs 4, 116(5)
  01e284c  fsubs 1, 1, 3
  01e2850  lfs 5, 116(4)
  01e2854  fsubs 4, 4, 5
  01e2858  lfs 5, 120(5)
  01e285c  lfs 6, 120(4)
  01e2860  lfs 7, 124(5)
  01e2864  fsubs 5, 5, 6
  01e2868  fmadds 1, 2, 1, 3
  01e286c  stfs 1, 160(1)
  01e2870  lfs 1, 116(4)
  01e2874  fmadds 1, 2, 4, 1
  01e2878  stfs 1, 164(1)
  01e287c  lfs 1, 120(4)
  01e2880  stfs 7, 172(1)
  01e2884  fmadds 1, 2, 5, 1
  01e2888  stfs 1, 168(1)
  01e288c  bl 0x47b98
  01e2890  nop
  01e2894  addic 3, 1, 160
  01e2898  bl 0x47c08
  01e289c  nop
  01e28a0  lwz 3, 12(30)
  01e28a4  lis 5, 16256
  01e28a8  srawi 4, 3, 31
  01e28ac  srwi 6, 4, 1
  01e28b0  xor 3, 6, 3
  01e28b4  subc 3, 3, 4
  01e28b8  cmpw 3, 5
  01e28bc  bt 0, 0x1e2984
  01e28c0  lis 3, 239
  01e28c4  lis 4, 239
  01e28c8  lis 5, 16256
  01e28cc  lis 6, 239
  01e28d0  lis 7, 239
  01e28d4  lis 8, 239
  01e28d8  stw 5, 10120(3)
  01e28dc  lis 9, 239
  01e28e0  stw 5, 10136(4)
  01e28e4  ori 3, 31, 0
  01e28e8  stw 5, 10140(6)
  01e28ec  stw 5, 10124(7)
  01e28f0  stw 5, 10128(8)
  01e28f4  stw 5, 10132(9)
  01e28f8  bl 0x1e1120
  01e28fc  li 4, 4
  01e2900  li 3, 3
  01e2904  stb 4, 32(31)
  01e2908  bl 0x481d0
  01e290c  nop
  01e2910  lis 3, 151
  01e2914  li 5, 0
  01e2918  addic 4, 3, -25376
  01e291c  li 6, 1
  01e2920  addic 3, 4, 128
  01e2924  addic 4, 4, 144
  01e2928  bl 0xa0c38
  01e292c  nop
  01e2930  li 3, 1
  01e2934  stb 3, 86(29)
  01e2938  b 0x1e2984
  01e293c  lis 3, 30
  01e2940  lis 4, 114
  01e2944  addi 5, 3, 6876
  01e2948  addic 3, 30, 12
  01e294c  lfs 3, 4(5)
  01e2950  lfs 1, 16(5)
  01e2954  lfs 4, -3052(4)
  01e2958  fmuls 2, 4, 3
  01e295c  bl 0x109af0
  01e2960  nop
  01e2964  lis 4, 150
  01e2968  lwz 3, 12(30)
  01e296c  lfs 1, 12(30)
  01e2970  cmpwi 3, 0
  01e2974  stfs 1, -12528(4)
  01e2978  bf 2, 0x1e2984
  01e297c  li 3, 5
  01e2980  stb 3, 32(31)
  01e2984  ld 0, 304(1)
  01e2988  mtlr 0
  01e298c  lfd 30, 272(1)
  01e2990  lfd 31, 280(1)
  01e2994  ld 26, 224(1)
  01e2998  ld 27, 232(1)
  01e299c  ld 28, 240(1)
  01e29a0  ld 29, 248(1)
  01e29a4  ld 30, 256(1)
  01e29a8  ld 31, 264(1)
  01e29ac  addi 1, 1, 288
  01e29b0  blr

# game/main.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MAIN:   # 0xe0e14, 0x14 bytes
  00e0e14  lis 3, 114
  00e0e18  lis 4, 1
  00e0e1c  addic 3, 3, 18424
  00e0e20  stw 4, 72(3)
  00e0e24  blr

startLevel:   # 0xe0e60, 0xcac bytes
  00e0e60  stdu 1, -288(1)
  00e0e64  mflr 0
  00e0e68  std 0, 304(1)
  00e0e6c  stfd 25, 232(1)
  00e0e70  stfd 26, 240(1)
  00e0e74  stfd 27, 248(1)
  00e0e78  stfd 28, 256(1)
  00e0e7c  stfd 29, 264(1)
  00e0e80  stfd 30, 272(1)
  00e0e84  stfd 31, 280(1)
  00e0e88  std 31, 224(1)
  00e0e8c  lis 3, 161
  00e0e90  std 30, 216(1)
  00e0e94  lis 31, 161
  00e0e98  addic 30, 3, 1733
  00e0e9c  std 28, 200(1)
  00e0ea0  addic 31, 31, 1732
  00e0ea4  lis 28, 14
  00e0ea8  subc 30, 30, 31
  00e0eac  addi 28, 28, 3632
  00e0eb0  clrlwi 3, 30, 28
  00e0eb4  std 29, 208(1)
  00e0eb8  std 27, 192(1)
  00e0ebc  std 26, 184(1)
  00e0ec0  std 25, 176(1)
  00e0ec4  std 24, 168(1)
  00e0ec8  std 23, 160(1)
  00e0ecc  std 22, 152(1)
  00e0ed0  std 21, 144(1)
  00e0ed4  std 20, 136(1)
  00e0ed8  cmpwi 3, 0
  00e0edc  bf 2, 0xe0f00
  00e0ee0  clrlwi 3, 31, 28
  00e0ee4  cmpwi 3, 0
  00e0ee8  bf 2, 0xe0f00
  00e0eec  extsw 4, 30
  00e0ef0  ori 3, 31, 0
  00e0ef4  bl 0x500250
  00e0ef8  nop
  00e0efc  b 0xe0f34
  00e0f00  lis 3, 101
  00e0f04  addic 3, 3, 10096
  00e0f08  bl 0x5cd098
  00e0f0c  nop
  00e0f10  li 3, 0
  00e0f14  cmpwi 30, 0
  00e0f18  ori 4, 3, 0
  00e0f1c  bf 1, 0xe0f34
  00e0f20  addic 5, 3, 1
  00e0f24  stbx 4, 31, 3
  00e0f28  extsw 3, 5
  00e0f2c  cmpw 3, 30
  00e0f30  bt 0, 0xe0f20
  00e0f34  lis 3, 114
  00e0f38  lwz 3, -13204(3)
  00e0f3c  cmpwi 3, 0
  00e0f40  bt 2, 0xe0f98
  00e0f44  bl 0xd8be8
  00e0f48  nop
  00e0f4c  lis 31, 150
  00e0f50  lis 4, 150
  00e0f54  addic 31, 31, 14024
  00e0f58  li 3, 1
  00e0f5c  li 5, 0
  00e0f60  addic 6, 4, 17760
  00e0f64  stb 3, 11(31)
  00e0f68  sth 5, 17760(4)
  00e0f6c  sth 5, 2(6)
  00e0f70  bl 0xdef78
  00e0f74  nop
  00e0f78  cmpwi 3, 0
  00e0f7c  bf 2, 0xe0f90
  00e0f80  li 3, 0
  00e0f84  bl 0x503078
  00e0f88  nop
  00e0f8c  b 0xe0f70
  00e0f90  li 3, 0
  00e0f94  stb 3, 11(31)
  00e0f98  bl 0x1655a4
  00e0f9c  nop
  00e0fa0  bl 0x11bb00
  00e0fa4  nop
  00e0fa8  lis 3, 161
  00e0fac  li 4, 6
  00e0fb0  lis 5, 161
  00e0fb4  li 31, 0
  00e0fb8  stw 4, 1800(3)
  00e0fbc  stw 31, 1804(5)
  00e0fc0  bl 0x4d3044
  00e0fc4  nop
  00e0fc8  lis 27, 150
  00e0fcc  li 3, 1
  00e0fd0  addic 27, 27, 14024
  00e0fd4  li 4, 0
  00e0fd8  sth 31, 68(27)
  00e0fdc  bl 0xdf408
  00e0fe0  nop
  00e0fe4  lis 26, 150
  00e0fe8  lis 3, 150
  00e0fec  addic 26, 26, -14912
  00e0ff0  li 4, 1
  00e0ff4  li 6, 15
  00e0ff8  li 5, -1
  00e0ffc  lwz 3, 27372(3)
  00e1000  stw 4, 12(26)
  00e1004  stw 6, 8(26)
  00e1008  stw 5, 56(26)
  00e100c  stw 3, 48(26)
  00e1010  stw 4, 244(26)
  00e1014  bl 0x60a90
  00e1018  nop
  00e101c  bl 0xe1b28
  00e1020  nop
  00e1024  bl 0xc8658
  00e1028  nop
  00e102c  bl 0x13a9e8
  00e1030  nop
  00e1034  bl 0x15eaa4
  00e1038  nop
  00e103c  lis 4, 346
  00e1040  li 3, 0
  00e1044  stw 31, -15568(4)
  00e1048  bl 0x503078
  00e104c  nop
  00e1050  bl 0x780f8
  00e1054  nop
  00e1058  lhz 3, 68(27)
  00e105c  li 4, 1
  00e1060  extsh 3, 3
  00e1064  li 5, 1024
  00e1068  bl 0x11c984
  00e106c  nop
  00e1070  lis 31, 151
  00e1074  lwz 3, -25488(31)
  00e1078  cmpwi 3, 1
  00e107c  bf 2, 0xe1094
  00e1080  lis 4, 151
  00e1084  addic 4, 4, -13812
  00e1088  lbz 4, 3(4)
  00e108c  cmpwi 4, 0
  00e1090  bt 2, 0xe10b0
  00e1094  cmpwi 3, 0
  00e1098  bf 2, 0xe10bc
  00e109c  lis 3, 151
  00e10a0  addic 3, 3, -16400
  00e10a4  lbz 3, 8(3)
  00e10a8  cmpwi 3, 0
  00e10ac  bt 2, 0xe10bc
  00e10b0  bl 0x11ce64
  00e10b4  nop
  00e10b8  b 0xe10c8
  00e10bc  li 3, 0
  00e10c0  bl 0x11ce20
  00e10c4  nop
  00e10c8  lis 3, 151
  00e10cc  lwz 4, -25488(31)
  00e10d0  addic 3, 3, -13792
  00e10d4  extsw 5, 4
  00e10d8  lbzx 6, 3, 5
  00e10dc  cmpwi 6, 0
  00e10e0  bf 2, 0xe10ec
  00e10e4  li 6, 1
  00e10e8  stbx 6, 3, 5
  00e10ec  lis 30, 161
  00e10f0  slwi 3, 4, 3
  00e10f4  addic 30, 30, -732
  00e10f8  extsw 3, 3
  00e10fc  lis 5, 0
  00e1100  ori 6, 5, 65535
  00e1104  lhzx 5, 30, 3
  00e1108  cmpw 5, 6
  00e110c  bf 0, 0xe1118
  00e1110  addic 5, 5, 1
  00e1114  sthx 5, 30, 3
  00e1118  lis 5, 161
  00e111c  lis 6, 6990
  00e1120  lwz 5, -2344(5)
  00e1124  extsw 5, 5
  00e1128  ori 6, 6, 33205
  00e112c  std 5, 112(1)
  00e1130  lis 5, 114
  00e1134  lfs 31, 0(28)
  00e1138  lfs 1, -3056(5)
  00e113c  lfd 2, 112(1)
  00e1140  addc 5, 30, 3
  00e1144  fcfid 2, 2
  00e1148  lhz 7, 2(5)
  00e114c  frsp 2, 2
  00e1150  fadds 2, 2, 31
  00e1154  fmuls 1, 1, 2
  00e1158  fctiwz 1, 1
  00e115c  stfd 1, 112(1)
  00e1160  lwz 3, 116(1)
  00e1164  mulhw 6, 6, 3
  00e1168  srawi 6, 6, 6
  00e116c  srwi 8, 6, 31
  00e1170  addc 6, 6, 8
  00e1174  cmpw 6, 7
  00e1178  bf 1, 0xe1198
  00e117c  lis 6, 6990
  00e1180  ori 6, 6, 33205
  00e1184  mulhw 3, 6, 3
  00e1188  srawi 3, 3, 6
  00e118c  srwi 6, 3, 31
  00e1190  addc 3, 3, 6
  00e1194  sth 3, 2(5)
  00e1198  li 3, 1
  00e119c  lis 6, -32768
  00e11a0  slw 3, 3, 4
  00e11a4  lwz 4, 4(5)
  00e11a8  or 3, 4, 3
  00e11ac  or 3, 3, 6
  00e11b0  stw 3, 4(5)
  00e11b4  bl 0x505f50
  00e11b8  nop
  00e11bc  lis 29, 161
  00e11c0  lwz 3, 24396(29)
  00e11c4  bl 0x4fe06c
  00e11c8  nop
  00e11cc  lwz 4, 24396(29)
  00e11d0  ori 29, 3, 0
  00e11d4  ori 3, 4, 0
  00e11d8  lwz 25, 12(4)
  00e11dc  bl 0x4fe524
  00e11e0  nop
  00e11e4  subc 25, 25, 3
  00e11e8  lis 3, 101
  00e11ec  subc 24, 25, 29
  00e11f0  addic 3, 3, 10104
  00e11f4  bl 0x5cd098
  00e11f8  nop
  00e11fc  srawi 3, 25, 10
  00e1200  addze 3, 3
  00e1204  extsw 3, 3
  00e1208  std 3, 112(1)
  00e120c  lfs 30, 4(28)
  00e1210  lfd 1, 112(1)
  00e1214  fcfid 1, 1
  00e1218  lis 3, 101
  00e121c  addic 25, 3, 10120
  00e1220  ori 3, 25, 0
  00e1224  frsp 1, 1
  00e1228  fmuls 1, 1, 30
  00e122c  stfd 1, 56(1)
  00e1230  ld 4, 56(1)
  00e1234  bl 0x5cd098
  00e1238  nop
  00e123c  srawi 3, 24, 10
  00e1240  addze 3, 3
  00e1244  extsw 3, 3
  00e1248  std 3, 112(1)
  00e124c  lis 3, 101
  00e1250  addic 24, 3, 10136
  00e1254  ori 3, 24, 0
  00e1258  lfd 1, 112(1)
  00e125c  fcfid 1, 1
  00e1260  frsp 1, 1
  00e1264  fmuls 1, 1, 30
  00e1268  fmr 29, 1
  00e126c  stfd 29, 56(1)
  00e1270  ld 4, 56(1)
  00e1274  bl 0x5cd098
  00e1278  nop
  00e127c  srawi 3, 29, 10
  00e1280  addze 3, 3
  00e1284  extsw 3, 3
  00e1288  std 3, 112(1)
  00e128c  lis 3, 101
  00e1290  addic 29, 3, 10152
  00e1294  ori 3, 29, 0
  00e1298  lfd 1, 112(1)
  00e129c  fcfid 1, 1
  00e12a0  frsp 1, 1
  00e12a4  fmuls 1, 1, 30
  00e12a8  fmr 30, 1
  00e12ac  stfd 30, 56(1)
  00e12b0  ld 4, 56(1)
  00e12b4  bl 0x5cd098
  00e12b8  nop
  00e12bc  lis 3, 101
  00e12c0  addic 3, 3, 10168
  00e12c4  bl 0x5cd098
  00e12c8  nop
  00e12cc  lfd 1, 8(28)
  00e12d0  ori 3, 25, 0
  00e12d4  stfd 1, 56(1)
  00e12d8  ld 4, 56(1)
  00e12dc  bl 0x5cd098
  00e12e0  nop
  00e12e4  stfd 29, 56(1)
  00e12e8  ori 3, 24, 0
  00e12ec  ld 4, 56(1)
  00e12f0  bl 0x5cd098
  00e12f4  nop
  00e12f8  stfd 30, 56(1)
  00e12fc  ori 3, 29, 0
  00e1300  ld 4, 56(1)
  00e1304  bl 0x5cd098
  00e1308  nop
  00e130c  lis 3, 161
  00e1310  lwz 3, 1792(3)
  00e1314  cmpwi 3, 0
  00e1318  bf 2, 0xe1aa8
  00e131c  lfs 30, 16(28)
  00e1320  lis 25, 150
  00e1324  lfs 29, 20(28)
  00e1328  lis 24, 114
  00e132c  lis 22, 101
  00e1330  lfs 28, 24(28)
  00e1334  lis 23, 165
  00e1338  lfs 27, 28(28)
  00e133c  lis 21, 151
  00e1340  lfs 26, 32(28)
  00e1344  lis 20, 150
  00e1348  addic 25, 25, 19008
  00e134c  addic 24, 24, -1500
  00e1350  addic 23, 23, 11184
  00e1354  addic 22, 22, 10184
  00e1358  addic 21, 21, -25376
  00e135c  addic 20, 20, -12976
  00e1360  bl 0x64f504
  00e1364  ld 2, 40(1)
  00e1368  lis 3, 273
  00e136c  std 2, 40(1)
  00e1370  fmr 1, 30
  00e1374  lwz 3, 5696(3)
  00e1378  lwz 4, 0(3)
  00e137c  lwz 4, 8(4)
  00e1380  lwz 5, 0(4)
  00e1384  lwz 2, 4(4)
  00e1388  mtctr 5
  00e138c  bcctrl 20, 30
  00e1390  lbz 3, 1376(25)
  00e1394  ld 2, 40(1)
  00e1398  cmpwi 3, 0
  00e139c  bt 2, 0xe13c4
  00e13a0  lis 3, 161
  00e13a4  lwz 3, 1800(3)
  00e13a8  cmpwi 3, 4
  00e13ac  bt 2, 0xe13c4
  00e13b0  li 3, 9
  00e13b4  li 4, 0
  00e13b8  li 5, 0
  00e13bc  bl 0x78178
  00e13c0  nop
  00e13c4  bl 0x502d80
  00e13c8  nop
  00e13cc  bl 0x5bdbc
  00e13d0  nop
  00e13d4  lis 3, 146
  00e13d8  lis 4, 165
  00e13dc  li 29, 0
  00e13e0  lwz 3, 29184(3)
  00e13e4  lwz 5, 13568(4)
  00e13e8  lwz 6, 0(3)
  00e13ec  stw 29, 0(3)
  00e13f0  addc 3, 5, 6
  00e13f4  stw 3, 13568(4)
  00e13f8  bl 0x65608
  00e13fc  nop
  00e1400  lis 3, 161
  00e1404  stw 29, 1820(3)
  00e1408  bl 0x174cf0
  00e140c  nop
  00e1410  bl 0x174c88
  00e1414  nop
  00e1418  bl 0x78104
  00e141c  nop
  00e1420  bl 0x78134
  00e1424  nop
  00e1428  bl 0x780fc
  00e142c  nop
  00e1430  bl 0x505d20
  00e1434  nop
  00e1438  lis 29, 161
  00e143c  lwz 29, 1800(29)
  00e1440  cmpwi 29, 2
  00e1444  bt 1, 0xe1470
  00e1448  cmpwi 29, -1
  00e144c  bt 1, 0xe145c
  00e1450  cmpwi 29, -2
  00e1454  bf 1, 0xe1600
  00e1458  b 0xe14a0
  00e145c  cmpwi 29, 0
  00e1460  bf 1, 0xe14bc
  00e1464  cmpwi 29, 1
  00e1468  bf 1, 0xe14ec
  00e146c  b 0xe14f8
  00e1470  cmpwi 29, 5
  00e1474  bt 1, 0xe148c
  00e1478  cmpwi 29, 3
  00e147c  bf 1, 0xe1528
  00e1480  cmpwi 29, 4
  00e1484  bf 1, 0xe1558
  00e1488  b 0xe1588
  00e148c  cmpwi 29, 6
  00e1490  bf 1, 0xe15b8
  00e1494  cmpwi 29, 7
  00e1498  bf 1, 0xe15d4
  00e149c  b 0xe1600
  00e14a0  bl 0x11e2d4
  00e14a4  nop
  00e14a8  bl 0x627d0
  00e14ac  nop
  00e14b0  bl 0x63e68
  00e14b4  nop
  00e14b8  b 0xe1600
  00e14bc  bl 0x11e2d4
  00e14c0  nop
  00e14c4  bl 0x166fb0
  00e14c8  nop
  00e14cc  li 3, 1
  00e14d0  bl 0x684a4
  00e14d4  nop
  00e14d8  bl 0x6c424
  00e14dc  nop
  00e14e0  bl 0x68560
  00e14e4  nop
  00e14e8  b 0xe1600
  00e14ec  bl 0x16974c
  00e14f0  nop
  00e14f4  b 0xe1600
  00e14f8  bl 0x11e2d4
  00e14fc  nop
  00e1500  bl 0x168768
  00e1504  nop
  00e1508  li 3, 1
  00e150c  bl 0x684a4
  00e1510  nop
  00e1514  bl 0x6c494
  00e1518  nop
  00e151c  bl 0x68560
  00e1520  nop
  00e1524  b 0xe1600
  00e1528  bl 0x11e2d4
  00e152c  nop
  00e1530  bl 0x13b838
  00e1534  nop
  00e1538  li 3, 1
  00e153c  bl 0x684a4
  00e1540  nop
  00e1544  bl 0x6c558
  00e1548  nop
  00e154c  bl 0x68560
  00e1550  nop
  00e1554  b 0xe1600
  00e1558  bl 0x11e2d4
  00e155c  nop
  00e1560  bl 0x79b18
  00e1564  nop
  00e1568  li 3, 1
  00e156c  bl 0x684a4
  00e1570  nop
  00e1574  bl 0x6c4d8
  00e1578  nop
  00e157c  bl 0x68560
  00e1580  nop
  00e1584  b 0xe1600
  00e1588  bl 0x11e2d4
  00e158c  nop
  00e1590  bl 0x16da88
  00e1594  nop
  00e1598  li 3, 1
  00e159c  bl 0x684a4
  00e15a0  nop
  00e15a4  bl 0x1744f0
  00e15a8  nop
  00e15ac  bl 0x68560
  00e15b0  nop
  00e15b4  b 0xe1600
  00e15b8  bl 0x11e2d4
  00e15bc  nop
  00e15c0  bl 0x161788
  00e15c4  nop
  00e15c8  bl 0x1639a8
  00e15cc  nop
  00e15d0  b 0xe1600
  00e15d4  bl 0x11e2d4
  00e15d8  nop
  00e15dc  bl 0x169b88
  00e15e0  nop
  00e15e4  li 3, 1
  00e15e8  bl 0x684a4
  00e15ec  nop
  00e15f0  bl 0x6d590
  00e15f4  nop
  00e15f8  bl 0x68560
  00e15fc  nop
  00e1600  lis 3, 161
  00e1604  li 6, 0
  00e1608  lwz 3, 1800(3)
  00e160c  cmpw 3, 29
  00e1610  bf 2, 0xe1620
  00e1614  lis 3, 161
  00e1618  lwz 6, 1804(3)
  00e161c  addic 6, 6, 1
  00e1620  lis 3, 161
  00e1624  lis 4, 161
  00e1628  lwz 3, 1820(3)
  00e162c  stw 6, 1804(4)
  00e1630  cmpwi 3, 0
  00e1634  bt 2, 0xe1650
  00e1638  li 3, 1
  00e163c  bl 0x174cf4
  00e1640  nop
  00e1644  bl 0x174c24
  00e1648  nop
  00e164c  b 0xe1a98
  00e1650  bl 0xe76cc
  00e1654  nop
  00e1658  bl 0xe6598
  00e165c  nop
  00e1660  lwz 7, 220(24)
  00e1664  lwz 8, 312(23)
  00e1668  cmpwi 7, 3
  00e166c  bt 2, 0xe16e0
  00e1670  cmpwi 7, 4
  00e1674  bt 2, 0xe16e0
  00e1678  cmpwi 7, 4
  00e167c  bt 2, 0xe16e0
  00e1680  cmpwi 7, 5
  00e1684  bt 2, 0xe16e0
  00e1688  cmpwi 7, 6
  00e168c  bt 2, 0xe16e0
  00e1690  cmpwi 7, 9
  00e1694  bt 2, 0xe16e0
  00e1698  cmpwi 7, 10
  00e169c  bt 2, 0xe16e0
  00e16a0  cmpwi 7, 11
  00e16a4  bt 2, 0xe16e0
  00e16a8  cmpwi 7, 12
  00e16ac  bt 2, 0xe16e0
  00e16b0  cmpwi 7, 15
  00e16b4  bt 2, 0xe16e0
  00e16b8  cmpwi 7, 16
  00e16bc  bt 2, 0xe16e0
  00e16c0  cmpwi 7, 17
  00e16c4  bt 2, 0xe16e0
  00e16c8  cmpwi 7, 18
  00e16cc  bt 2, 0xe16e0
  00e16d0  cmpwi 7, 19
  00e16d4  bt 2, 0xe16e0
  00e16d8  cmpwi 7, 20
  00e16dc  bf 2, 0xe17ec
  00e16e0  cmpwi 8, 0
  00e16e4  bf 2, 0xe17ec
  00e16e8  li 3, 0
  00e16ec  bl 0x6d704
  00e16f0  nop
  00e16f4  li 3, 1
  00e16f8  li 4, 5
  00e16fc  li 8, 0
  00e1700  li 10, 1
  00e1704  li 5, 4
  00e1708  li 6, 0
  00e170c  li 7, 0
  00e1710  li 9, 1
  00e1714  bl 0x502f7c
  00e1718  nop
  00e171c  ori 4, 3, 0
  00e1720  li 3, 22
  00e1724  bl 0x174f80
  00e1728  nop
  00e172c  li 3, 30045
  00e1730  li 4, 0
  00e1734  bl 0xca3e4
  00e1738  nop
  00e173c  li 4, 50
  00e1740  li 5, 300
  00e1744  li 6, 64
  00e1748  li 7, 64
  00e174c  li 8, 128
  00e1750  bl 0xcc0f0
  00e1754  nop
  00e1758  lis 3, 346
  00e175c  lis 4, 2383
  00e1760  ori 4, 4, 8341
  00e1764  lwz 3, -15568(3)
  00e1768  mulhw 4, 4, 3
  00e176c  srawi 4, 4, 1
  00e1770  srwi 5, 4, 31
  00e1774  addc 4, 4, 5
  00e1778  sldi 5, 4, 6
  00e177c  sldi 6, 4, 3
  00e1780  subc 4, 5, 4
  00e1784  subc 4, 4, 6
  00e1788  subc 3, 3, 4
  00e178c  extsw 3, 3
  00e1790  li 4, 1
  00e1794  std 3, 112(1)
  00e1798  li 3, 30045
  00e179c  lfd 1, 112(1)
  00e17a0  fcfid 1, 1
  00e17a4  frsp 1, 1
  00e17a8  fmuls 25, 1, 26
  00e17ac  bl 0xca3e4
  00e17b0  nop
  00e17b4  bl 0xd6bf8
  00e17b8  nop
  00e17bc  fmr 1, 29
  00e17c0  li 8, 64
  00e17c4  fmr 2, 28
  00e17c8  li 9, 64
  00e17cc  fmr 3, 27
  00e17d0  ori 10, 3, 0
  00e17d4  fmr 4, 27
  00e17d8  fmr 5, 25
  00e17dc  bl 0xd7f88
  00e17e0  nop
  00e17e4  bl 0x6d708
  00e17e8  nop
  00e17ec  li 3, 0
  00e17f0  stw 3, 312(23)
  00e17f4  bl 0x60c44
  00e17f8  nop
  00e17fc  ori 3, 22, 0
  00e1800  li 4, 16
  00e1804  bl 0x6562c
  00e1808  nop
  00e180c  ori 3, 22, 0
  00e1810  li 4, 16
  00e1814  bl 0x65630
  00e1818  nop
  00e181c  li 3, 1
  00e1820  bl 0x174cf4
  00e1824  nop
  00e1828  lis 3, 146
  00e182c  lwz 3, 29184(3)
  00e1830  lwz 3, 0(3)
  00e1834  extsw 3, 3
  00e1838  bl 0x502730
  00e183c  nop
  00e1840  lis 3, 150
  00e1844  lis 4, 161
  00e1848  lfs 2, 36(28)
  00e184c  lwz 7, 24(26)
  00e1850  lwz 8, 27368(3)
  00e1854  lwz 9, 1800(4)
  00e1858  cmpwi 8, 0
  00e185c  bt 2, 0xe1864
  00e1860  lfs 2, 40(28)
  00e1864  fdivs 1, 1, 2
  00e1868  lis 3, 161
  00e186c  cmpwi 9, 0
  00e1870  stfs 1, 1812(3)
  00e1874  bf 2, 0xe1898
  00e1878  cmpwi 7, 0
  00e187c  bt 2, 0xe1898
  00e1880  bl 0x65628
  00e1884  nop
  00e1888  lis 3, 161
  00e188c  lis 8, 150
  00e1890  lwz 9, 1800(3)
  00e1894  lwz 8, 27368(8)
  00e1898  lbz 3, 8369(21)
  00e189c  cmpwi 6, 9, 0
  00e18a0  cmpwi 3, 0
  00e18a4  bf 2, 0xe1988
  00e18a8  cmpwi 1, 9, 2
  00e18ac  bt 26, 0xe18b4
  00e18b0  bf 6, 0xe1958
  00e18b4  li 4, 0
  00e18b8  lis 3, 146
  00e18bc  subc 4, 4, 8
  00e18c0  li 5, 9600
  00e18c4  cntlzw 4, 4
  00e18c8  li 6, 11520
  00e18cc  sldi 4, 4, 58
  00e18d0  lwz 3, 29184(3)
  00e18d4  subc 5, 5, 6
  00e18d8  sradi 4, 4, 63
  00e18dc  cmpwi 6, 9, 0
  00e18e0  and 4, 4, 5
  00e18e4  lwz 3, 0(3)
  00e18e8  addc 4, 6, 4
  00e18ec  cmpw 3, 4
  00e18f0  bf 1, 0xe1930
  00e18f4  cmpwi 1, 9, 2
  00e18f8  bf 26, 0xe1910
  00e18fc  bl 0x11e2d4
  00e1900  nop
  00e1904  bl 0x166fb0
  00e1908  nop
  00e190c  b 0xe1930
  00e1910  bf 6, 0xe1930
  00e1914  lhz 3, 80(20)
  00e1918  cmpwi 3, 0
  00e191c  bf 2, 0xe1930
  00e1920  bl 0x11e2d4
  00e1924  nop
  00e1928  bl 0x168768
  00e192c  nop
  00e1930  li 3, 0
  00e1934  bl 0x503078
  00e1938  nop
  00e193c  lis 3, 346
  00e1940  lwz 4, -15568(3)
  00e1944  addic 4, 4, 1
  00e1948  stw 4, -15568(3)
  00e194c  bl 0x13fa18
  00e1950  nop
  00e1954  b 0xe197c
  00e1958  li 3, 0
  00e195c  bl 0x503078
  00e1960  nop
  00e1964  lis 3, 346
  00e1968  lwz 4, -15568(3)
  00e196c  addic 4, 4, 1
  00e1970  stw 4, -15568(3)
  00e1974  bl 0x13fa18
  00e1978  nop
  00e197c  lis 3, 161
  00e1980  li 4, 0
  00e1984  stb 4, 24378(3)
  00e1988  bl 0x684a0
  00e198c  nop
  00e1990  lis 3, 161
  00e1994  lwz 3, 1800(3)
  00e1998  cmpwi 3, 0
  00e199c  bf 2, 0xe1a10
  00e19a0  lbz 3, 8369(21)
  00e19a4  cmpwi 3, 0
  00e19a8  bt 2, 0xe1a10
  00e19ac  bl 0x174c24
  00e19b0  nop
  00e19b4  bl 0x505f4c
  00e19b8  nop
  00e19bc  bl 0x505d20
  00e19c0  nop
  00e19c4  bl 0x15d8b4
  00e19c8  nop
  00e19cc  bl 0x11cd1c
  00e19d0  nop
  00e19d4  li 3, 0
  00e19d8  li 4, 1
  00e19dc  bl 0xdf408
  00e19e0  nop
  00e19e4  lis 6, 161
  00e19e8  lhz 3, 68(27)
  00e19ec  li 7, 0
  00e19f0  li 4, 1
  00e19f4  li 5, 1024
  00e19f8  extsh 3, 3
  00e19fc  stw 7, 1800(6)
  00e1a00  bl 0x11c984
  00e1a04  nop
  00e1a08  bl 0xc8658
  00e1a0c  nop
  00e1a10  lis 3, 161
  00e1a14  lwz 3, -2344(3)
  00e1a18  extsw 3, 3
  00e1a1c  std 3, 112(1)
  00e1a20  lis 3, 114
  00e1a24  lfs 1, -3056(3)
  00e1a28  lwz 4, -25488(31)
  00e1a2c  lfd 2, 112(1)
  00e1a30  lis 3, 6990
  00e1a34  fcfid 2, 2
  00e1a38  slwi 4, 4, 3
  00e1a3c  ori 3, 3, 33205
  00e1a40  extsw 7, 4
  00e1a44  addc 7, 7, 30
  00e1a48  frsp 2, 2
  00e1a4c  lhz 4, 2(7)
  00e1a50  fadds 2, 2, 31
  00e1a54  fmuls 1, 1, 2
  00e1a58  fctiwz 1, 1
  00e1a5c  stfd 1, 112(1)
  00e1a60  lwz 6, 116(1)
  00e1a64  mulhw 3, 3, 6
  00e1a68  srawi 3, 3, 6
  00e1a6c  srwi 5, 3, 31
  00e1a70  addc 3, 3, 5
  00e1a74  cmpw 3, 4
  00e1a78  bf 1, 0xe1a98
  00e1a7c  lis 3, 6990
  00e1a80  ori 3, 3, 33205
  00e1a84  mulhw 3, 3, 6
  00e1a88  srawi 3, 3, 6
  00e1a8c  srwi 4, 3, 31
  00e1a90  addc 3, 3, 4
  00e1a94  sth 3, 2(7)
  00e1a98  lis 3, 161
  00e1a9c  lwz 3, 1792(3)
  00e1aa0  cmpwi 3, 0
  00e1aa4  bt 2, 0xe1360
  00e1aa8  bl 0x164c58
  00e1aac  nop
  00e1ab0  ld 0, 304(1)
  00e1ab4  mtlr 0
  00e1ab8  lfd 25, 232(1)
  00e1abc  lfd 26, 240(1)
  00e1ac0  lfd 27, 248(1)
  00e1ac4  lfd 28, 256(1)
  00e1ac8  lfd 29, 264(1)
  00e1acc  lfd 30, 272(1)
  00e1ad0  lfd 31, 280(1)
  00e1ad4  ld 20, 136(1)
  00e1ad8  ld 21, 144(1)
  00e1adc  ld 22, 152(1)
  00e1ae0  ld 23, 160(1)
  00e1ae4  ld 24, 168(1)
  00e1ae8  ld 25, 176(1)
  00e1aec  ld 26, 184(1)
  00e1af0  ld 27, 192(1)
  00e1af4  ld 28, 200(1)
  00e1af8  ld 29, 208(1)
  00e1afc  ld 30, 216(1)
  00e1b00  ld 31, 224(1)
  00e1b04  addi 1, 1, 288
  00e1b08  blr

# game/update/moby882.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M881_004a1030:   # 0x4a1030, 0x180 bytes
  04a1030  stdu 1, -192(1)
  04a1034  mflr 0
  04a1038  std 0, 208(1)
  04a103c  stfd 29, 168(1)
  04a1040  stfd 30, 176(1)
  04a1044  stfd 31, 184(1)
  04a1048  std 29, 144(1)
  04a104c  ori 29, 3, 0
  04a1050  std 31, 160(1)
  04a1054  li 3, 882
  04a1058  std 30, 152(1)
  04a105c  std 27, 128(1)
  04a1060  ori 31, 5, 0
  04a1064  ori 30, 4, 0
  04a1068  std 28, 136(1)
  04a106c  std 26, 120(1)
  04a1070  std 25, 112(1)
  04a1074  extsh 27, 6
  04a1078  bl 0xefa28
  04a107c  nop
  04a1080  ori 28, 3, 0
  04a1084  cmpwi 28, 0
  04a1088  bt 2, 0x4a1174
  04a108c  li 3, 255
  04a1090  li 4, 1
  04a1094  lwz 26, 120(28)
  04a1098  stb 3, 48(28)
  04a109c  sth 3, 50(28)
  04a10a0  stb 4, 49(28)
  04a10a4  bl 0xfcc68
  04a10a8  nop
  04a10ac  stfs 1, 64(28)
  04a10b0  bl 0xfcc68
  04a10b4  nop
  04a10b8  stfs 1, 68(28)
  04a10bc  bl 0xfcc68
  04a10c0  nop
  04a10c4  lis 3, 74
  04a10c8  stfs 1, 72(28)
  04a10cc  addi 25, 3, 4128
  04a10d0  lfs 31, 0(25)
  04a10d4  lfs 30, 4(25)
  04a10d8  fmr 1, 31
  04a10dc  fmr 2, 30
  04a10e0  bl 0xfe4f0
  04a10e4  nop
  04a10e8  lfs 29, 8(25)
  04a10ec  fmr 2, 30
  04a10f0  lis 25, 114
  04a10f4  fmuls 4, 1, 29
  04a10f8  fmr 1, 31
  04a10fc  lfs 3, -3052(25)
  04a1100  fmuls 3, 4, 3
  04a1104  stfs 3, 24(26)
  04a1108  bl 0xfe4f0
  04a110c  nop
  04a1110  fmuls 1, 1, 29
  04a1114  lfs 2, -3052(25)
  04a1118  ori 3, 28, 0
  04a111c  fmuls 1, 1, 2
  04a1120  stfs 1, 28(26)
  04a1124  lfs 1, 0(29)
  04a1128  stfs 1, 16(28)
  04a112c  lfs 1, 4(29)
  04a1130  stfs 1, 20(28)
  04a1134  lfs 1, 8(29)
  04a1138  stfs 1, 24(28)
  04a113c  lfs 1, 12(29)
  04a1140  stfs 1, 28(28)
  04a1144  lfs 1, 0(30)
  04a1148  stfs 1, 0(26)
  04a114c  lfs 1, 4(30)
  04a1150  stfs 1, 4(26)
  04a1154  lfs 1, 8(30)
  04a1158  stfs 1, 8(26)
  04a115c  lfs 1, 12(30)
  04a1160  stw 31, 16(26)
  04a1164  stfs 1, 12(26)
  04a1168  stw 27, 20(26)
  04a116c  bl 0xf31a8
  04a1170  nop
  04a1174  ori 3, 28, 0
  04a1178  ld 0, 208(1)
  04a117c  mtlr 0
  04a1180  lfd 29, 168(1)
  04a1184  lfd 30, 176(1)
  04a1188  lfd 31, 184(1)
  04a118c  ld 25, 112(1)
  04a1190  ld 26, 120(1)
  04a1194  ld 27, 128(1)
  04a1198  ld 28, 136(1)
  04a119c  ld 29, 144(1)
  04a11a0  ld 30, 152(1)
  04a11a4  ld 31, 160(1)
  04a11a8  addi 1, 1, 192
  04a11ac  blr

UpdateMoby_882:   # 0x4a11e0, 0x494 bytes
  04a11e0  stdu 1, -240(1)
  04a11e4  mflr 0
  04a11e8  std 0, 256(1)
  04a11ec  std 31, 232(1)
  04a11f0  ori 31, 3, 0
  04a11f4  lis 3, 74
  04a11f8  lis 4, 114
  04a11fc  std 30, 224(1)
  04a1200  addi 3, 3, 4528
  04a1204  lwz 30, 120(31)
  04a1208  lfs 1, 16(31)
  04a120c  lfs 2, 20(31)
  04a1210  stfs 1, 192(1)
  04a1214  lfs 3, 24(31)
  04a1218  stfs 2, 196(1)
  04a121c  lfs 4, 28(31)
  04a1220  stfs 3, 200(1)
  04a1224  stfs 4, 204(1)
  04a1228  lfs 4, 0(30)
  04a122c  fadds 1, 1, 4
  04a1230  stfs 1, 16(31)
  04a1234  lfs 1, 4(30)
  04a1238  fadds 1, 2, 1
  04a123c  stfs 1, 20(31)
  04a1240  lfs 1, 8(30)
  04a1244  fadds 1, 3, 1
  04a1248  stfs 1, 24(31)
  04a124c  lfs 1, 0(3)
  04a1250  lfs 3, 8(30)
  04a1254  lfs 4, -3048(4)
  04a1258  lfs 2, 24(30)
  04a125c  fnmsubs 1, 4, 1, 3
  04a1260  stfs 1, 8(30)
  04a1264  std 29, 216(1)
  04a1268  lfs 1, 68(31)
  04a126c  bl 0x502578
  04a1270  nop
  04a1274  stfs 1, 68(31)
  04a1278  lfs 1, 72(31)
  04a127c  lfs 2, 28(30)
  04a1280  bl 0x502578
  04a1284  nop
  04a1288  addic 29, 31, 16
  04a128c  addic 3, 1, 192
  04a1290  stfs 1, 72(31)
  04a1294  lwz 6, 16(30)
  04a1298  ori 4, 29, 0
  04a129c  li 5, 0
  04a12a0  li 7, 0
  04a12a4  bl 0x57820
  04a12a8  nop
  04a12ac  cmpwi 3, 0
  04a12b0  bf 2, 0x4a12dc
  04a12b4  lis 4, 74
  04a12b8  lwz 6, 16(30)
  04a12bc  ori 3, 29, 0
  04a12c0  addi 4, 4, 4528
  04a12c4  li 5, 0
  04a12c8  lfs 1, 4(4)
  04a12cc  bl 0x59e20
  04a12d0  nop
  04a12d4  cmpwi 3, 0
  04a12d8  bt 2, 0x4a15bc
  04a12dc  lis 3, 161
  04a12e0  addic 3, 3, 2368
  04a12e4  lwz 3, 24(3)
  04a12e8  cmpwi 3, 0
  04a12ec  bt 2, 0x4a1304
  04a12f0  lhz 3, 166(3)
  04a12f4  cmpwi 3, 881
  04a12f8  cmpwi 1, 3, 882
  04a12fc  bt 2, 0x4a15bc
  04a1300  bt 6, 0x4a15bc
  04a1304  lbz 3, 49(31)
  04a1308  cmpwi 3, 0
  04a130c  bf 2, 0x4a1354
  04a1310  lis 3, 151
  04a1314  lfs 1, 20(31)
  04a1318  addic 3, 3, -25376
  04a131c  lfs 2, 16(31)
  04a1320  lfs 3, 132(3)
  04a1324  lfs 4, 128(3)
  04a1328  fsubs 1, 1, 3
  04a132c  fsubs 2, 2, 4
  04a1330  lis 3, 74
  04a1334  addi 3, 3, 4528
  04a1338  fmuls 1, 1, 1
  04a133c  fmadds 1, 2, 2, 1
  04a1340  lfs 2, 8(3)
  04a1344  fsqrts 1, 1
  04a1348  fcmpu 0, 1, 2
  04a134c  cror 6, 1, 2
  04a1350  bt 6, 0x4a1598
  04a1354  lis 3, 21845
  04a1358  lis 4, 74
  04a135c  ori 5, 3, 21846
  04a1360  lwz 3, 20(30)
  04a1364  mulhw 5, 5, 3
  04a1368  addi 4, 4, 4528
  04a136c  lfs 5, 12(4)
  04a1370  srwi 4, 5, 31
  04a1374  fmr 1, 5
  04a1378  addc 4, 5, 4
  04a137c  addc 5, 4, 4
  04a1380  addc 4, 4, 5
  04a1384  subc 4, 3, 4
  04a1388  cmpwi 4, 0
  04a138c  bf 2, 0x4a139c
  04a1390  lis 4, 74
  04a1394  addi 4, 4, 4528
  04a1398  lfs 5, 16(4)
  04a139c  lis 4, 149
  04a13a0  lfs 2, 20(31)
  04a13a4  lfs 3, 16(31)
  04a13a8  addic 4, 4, 5056
  04a13ac  lfs 4, 324(4)
  04a13b0  lfs 6, 320(4)
  04a13b4  fsubs 2, 2, 4
  04a13b8  fsubs 3, 3, 6
  04a13bc  lis 4, 74
  04a13c0  addi 4, 4, 4528
  04a13c4  fmuls 2, 2, 2
  04a13c8  lfs 8, 20(4)
  04a13cc  lfs 4, 24(4)
  04a13d0  fmadds 2, 3, 3, 2
  04a13d4  lfs 3, 28(4)
  04a13d8  fsqrts 6, 2
  04a13dc  lfs 2, 32(4)
  04a13e0  fcmpu 0, 6, 8
  04a13e4  cror 6, 0, 2
  04a13e8  bt 6, 0x4a14d0
  04a13ec  clrlwi 3, 3, 31
  04a13f0  cmpwi 3, 0
  04a13f4  bt 2, 0x4a1464
  04a13f8  lis 3, 74
  04a13fc  fmr 8, 1
  04a1400  li 7, -1
  04a1404  addi 4, 3, 4528
  04a1408  fmr 7, 5
  04a140c  li 11, 0
  04a1410  fmr 1, 2
  04a1414  li 6, 1
  04a1418  fmr 5, 3
  04a141c  fmr 2, 4
  04a1420  ori 3, 31, 0
  04a1424  li 8, 1
  04a1428  lfs 6, 36(4)
  04a142c  std 7, 144(1)
  04a1430  ori 4, 30, 0
  04a1434  std 11, 160(1)
  04a1438  li 5, 0
  04a143c  std 6, 168(1)
  04a1440  li 9, 2
  04a1444  std 7, 176(1)
  04a1448  li 10, 3
  04a144c  fmr 3, 8
  04a1450  std 11, 184(1)
  04a1454  fmr 4, 8
  04a1458  bl 0x10e030
  04a145c  nop
  04a1460  b 0x4a15ac
  04a1464  lis 3, 74
  04a1468  fmr 8, 1
  04a146c  li 12, 0
  04a1470  fmr 7, 5
  04a1474  addi 7, 3, 4528
  04a1478  fmr 1, 2
  04a147c  li 6, 1
  04a1480  fmr 5, 3
  04a1484  li 11, -1
  04a1488  fmr 2, 4
  04a148c  ori 3, 31, 0
  04a1490  ori 4, 30, 0
  04a1494  lfs 6, 40(7)
  04a1498  li 5, 0
  04a149c  std 12, 144(1)
  04a14a0  li 8, 0
  04a14a4  std 12, 160(1)
  04a14a8  li 9, 2
  04a14ac  std 6, 168(1)
  04a14b0  li 10, 3
  04a14b4  std 11, 176(1)
  04a14b8  fmr 3, 8
  04a14bc  fmr 4, 8
  04a14c0  std 12, 184(1)
  04a14c4  bl 0x10e030
  04a14c8  nop
  04a14cc  b 0x4a15ac
  04a14d0  clrlwi 3, 3, 31
  04a14d4  cmpwi 3, 0
  04a14d8  bt 2, 0x4a1538
  04a14dc  fmr 6, 4
  04a14e0  li 11, 0
  04a14e4  li 6, 1
  04a14e8  fmr 7, 5
  04a14ec  li 7, -1
  04a14f0  fmr 5, 3
  04a14f4  fmr 3, 1
  04a14f8  ori 3, 31, 0
  04a14fc  std 11, 144(1)
  04a1500  fmr 1, 2
  04a1504  std 11, 160(1)
  04a1508  ori 4, 30, 0
  04a150c  std 6, 168(1)
  04a1510  li 8, 0
  04a1514  std 7, 176(1)
  04a1518  li 5, 0
  04a151c  li 9, 2
  04a1520  std 11, 184(1)
  04a1524  li 10, 4
  04a1528  fmr 2, 6
  04a152c  bl 0x10e030
  04a1530  nop
  04a1534  b 0x4a15ac
  04a1538  fmr 6, 4
  04a153c  fmr 4, 1
  04a1540  li 11, 0
  04a1544  li 6, 1
  04a1548  fmr 7, 5
  04a154c  li 7, -1
  04a1550  fmr 5, 3
  04a1554  fmr 1, 2
  04a1558  ori 3, 31, 0
  04a155c  std 11, 144(1)
  04a1560  li 8, 1
  04a1564  std 11, 160(1)
  04a1568  ori 4, 30, 0
  04a156c  std 6, 168(1)
  04a1570  li 5, 0
  04a1574  std 7, 176(1)
  04a1578  li 9, 2
  04a157c  li 10, 4
  04a1580  std 11, 184(1)
  04a1584  fmr 2, 6
  04a1588  fmr 3, 4
  04a158c  bl 0x10e030
  04a1590  nop
  04a1594  b 0x4a15ac
  04a1598  li 3, 0
  04a159c  li 4, 0
  04a15a0  ori 5, 31, 0
  04a15a4  bl 0x15d12c
  04a15a8  nop
  04a15ac  ori 3, 31, 0
  04a15b0  bl 0xefb38
  04a15b4  nop
  04a15b8  b 0x4a1658
  04a15bc  lwz 3, 16(31)
  04a15c0  lis 4, 16384
  04a15c4  srawi 5, 3, 31
  04a15c8  srwi 6, 5, 1
  04a15cc  xor 3, 6, 3
  04a15d0  subc 3, 3, 5
  04a15d4  cmpw 3, 4
  04a15d8  bt 0, 0x4a164c
  04a15dc  lis 4, 17535
  04a15e0  ori 4, 4, 16384
  04a15e4  cmpw 3, 4
  04a15e8  bt 1, 0x4a164c
  04a15ec  lwz 5, 20(31)
  04a15f0  lis 3, 17535
  04a15f4  srawi 6, 5, 31
  04a15f8  lis 4, 16384
  04a15fc  srwi 7, 6, 1
  04a1600  ori 3, 3, 16384
  04a1604  xor 5, 7, 5
  04a1608  subc 5, 5, 6
  04a160c  cmpw 1, 5, 3
  04a1610  cmpw 5, 4
  04a1614  cror 2, 0, 5
  04a1618  bt 2, 0x4a164c
  04a161c  lwz 5, 24(31)
  04a1620  lis 3, 17535
  04a1624  srawi 6, 5, 31
  04a1628  lis 4, 16384
  04a162c  srwi 7, 6, 1
  04a1630  ori 3, 3, 16384
  04a1634  xor 5, 7, 5
  04a1638  subc 5, 5, 6
  04a163c  cmpw 5, 4
  04a1640  cmpw 1, 5, 3
  04a1644  bt 0, 0x4a164c
  04a1648  bf 5, 0x4a1658
  04a164c  ori 3, 31, 0
  04a1650  bl 0xefb38
  04a1654  nop
  04a1658  ld 0, 256(1)
  04a165c  mtlr 0
  04a1660  ld 29, 216(1)
  04a1664  ld 30, 224(1)
  04a1668  ld 31, 232(1)
  04a166c  addi 1, 1, 240
  04a1670  blr

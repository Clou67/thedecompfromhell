# game/update/moby1111.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1111_001d0f18:   # 0x1d0f18, 0xc bytes
  01d0f18  lis 3, 239
  01d0f1c  lfs 1, 6800(3)
  01d0f20  blr

FUN_001d0f24:   # 0x1d0f24, 0xc bytes
  01d0f24  lis 3, 239
  01d0f28  stfs 1, 6804(3)
  01d0f2c  blr

M1111_Pokitaru_Ocean:   # 0x1d0f60, 0xcfc bytes
  01d0f60  stdu 1, -640(1)
  01d0f64  mflr 0
  01d0f68  std 0, 656(1)
  01d0f6c  stfd 14, 496(1)
  01d0f70  stfd 15, 504(1)
  01d0f74  stfd 16, 512(1)
  01d0f78  stfd 17, 520(1)
  01d0f7c  stfd 18, 528(1)
  01d0f80  stfd 19, 536(1)
  01d0f84  stfd 20, 544(1)
  01d0f88  stfd 21, 552(1)
  01d0f8c  stfd 22, 560(1)
  01d0f90  stfd 23, 568(1)
  01d0f94  stfd 24, 576(1)
  01d0f98  stfd 25, 584(1)
  01d0f9c  stfd 26, 592(1)
  01d0fa0  stfd 27, 600(1)
  01d0fa4  stfd 28, 608(1)
  01d0fa8  stfd 29, 616(1)
  01d0fac  stfd 30, 624(1)
  01d0fb0  stfd 31, 632(1)
  01d0fb4  std 25, 440(1)
  01d0fb8  std 29, 472(1)
  01d0fbc  lis 25, 150
  01d0fc0  std 31, 488(1)
  01d0fc4  lis 29, 151
  01d0fc8  lwz 31, 120(3)
  01d0fcc  addic 25, 25, -12416
  01d0fd0  std 21, 408(1)
  01d0fd4  addic 29, 29, -25376
  01d0fd8  lis 21, 29
  01d0fdc  addi 21, 21, 3888
  01d0fe0  lfs 1, 552(25)
  01d0fe4  lfs 2, 556(25)
  01d0fe8  stfs 1, 352(1)
  01d0fec  lwz 3, 8324(29)
  01d0ff0  stfs 2, 348(1)
  01d0ff4  std 30, 480(1)
  01d0ff8  std 28, 464(1)
  01d0ffc  std 27, 456(1)
  01d1000  std 26, 448(1)
  01d1004  std 24, 432(1)
  01d1008  std 23, 424(1)
  01d100c  std 22, 416(1)
  01d1010  std 20, 400(1)
  01d1014  std 19, 392(1)
  01d1018  std 18, 384(1)
  01d101c  std 17, 376(1)
  01d1020  std 16, 368(1)
  01d1024  std 15, 360(1)
  01d1028  cmpwi 3, 29
  01d102c  bt 2, 0x1d1054
  01d1030  lis 3, 114
  01d1034  lbz 3, -4400(3)
  01d1038  cmpwi 3, 0
  01d103c  bf 2, 0x1d1054
  01d1040  lis 3, 17273
  01d1044  lis 4, 17279
  01d1048  ori 3, 3, 58982
  01d104c  stw 4, 552(25)
  01d1050  stw 3, 556(25)
  01d1054  lis 3, 144
  01d1058  li 5, 144
  01d105c  addic 30, 3, -23532
  01d1060  li 4, 0
  01d1064  lwz 30, 36(30)
  01d1068  addic 3, 30, 20
  01d106c  bl 0x5d0140
  01d1070  nop
  01d1074  addic 3, 30, 168
  01d1078  li 4, 255
  01d107c  li 5, 72
  01d1080  bl 0x5d0140
  01d1084  nop
  01d1088  li 24, 0
  01d108c  li 3, 0
  01d1090  li 4, 1
  01d1094  li 5, 0
  01d1098  stw 24, 196(30)
  01d109c  stw 24, 192(30)
  01d10a0  li 6, 1
  01d10a4  li 7, 50
  01d10a8  bl 0x502ea8
  01d10ac  nop
  01d10b0  ori 4, 3, 0
  01d10b4  ori 3, 30, 0
  01d10b8  bl 0x4d5fe4
  01d10bc  nop
  01d10c0  li 3, 1
  01d10c4  li 4, 0
  01d10c8  li 10, 2
  01d10cc  li 5, 63
  01d10d0  li 6, 1
  01d10d4  li 7, 0
  01d10d8  li 8, 0
  01d10dc  li 9, 1
  01d10e0  bl 0x502f7c
  01d10e4  nop
  01d10e8  ori 4, 3, 0
  01d10ec  ori 3, 30, 0
  01d10f0  bl 0x4d6634
  01d10f4  nop
  01d10f8  li 4, 0
  01d10fc  li 5, 0
  01d1100  li 3, 0
  01d1104  li 6, 0
  01d1108  li 7, 0
  01d110c  li 8, 0
  01d1110  bl 0x502f08
  01d1114  nop
  01d1118  addic 4, 1, 320
  01d111c  addic 5, 1, 324
  01d1120  bl 0x4d6704
  01d1124  nop
  01d1128  lis 18, 161
  01d112c  li 3, 22
  01d1130  addic 18, 18, 24396
  01d1134  lwz 28, 28(18)
  01d1138  bl 0x685c4
  01d113c  nop
  01d1140  sldi 4, 3, 5
  01d1144  sldi 3, 3, 2
  01d1148  lwz 6, 320(1)
  01d114c  lwz 7, 324(1)
  01d1150  addc 4, 4, 3
  01d1154  ori 3, 30, 0
  01d1158  addc 5, 28, 4
  01d115c  li 4, 0
  01d1160  clrldi 5, 5, 32
  01d1164  bl 0x4d676c
  01d1168  nop
  01d116c  lis 17, 149
  01d1170  addic 17, 17, 5056
  01d1174  lfs 4, 852(17)
  01d1178  lfs 2, 848(17)
  01d117c  fmuls 6, 4, 4
  01d1180  lfs 17, 4(21)
  01d1184  fmr 7, 17
  01d1188  lfs 31, 0(21)
  01d118c  lfs 3, 864(17)
  01d1190  lfs 1, 860(17)
  01d1194  lfs 5, 868(17)
  01d1198  lfs 9, 40(31)
  01d119c  fmadds 6, 2, 2, 6
  01d11a0  lfs 10, 320(17)
  01d11a4  lfs 11, 324(17)
  01d11a8  fadds 1, 1, 31
  01d11ac  fmr 8, 7
  01d11b0  lfs 12, 328(17)
  01d11b4  fsqrts 13, 6
  01d11b8  fcmpu 0, 13, 8
  01d11bc  bt 2, 0x1d1200
  01d11c0  frsqrte 7, 6
  01d11c4  lfs 8, 8(21)
  01d11c8  fmuls 13, 6, 7
  01d11cc  fmuls 0, 8, 7
  01d11d0  fnmsubs 13, 13, 7, 31
  01d11d4  fmadds 7, 13, 0, 7
  01d11d8  fmuls 13, 6, 7
  01d11dc  fmuls 0, 8, 7
  01d11e0  fnmsubs 13, 13, 7, 31
  01d11e4  fmadds 7, 13, 0, 7
  01d11e8  fmuls 6, 6, 7
  01d11ec  fmuls 8, 8, 7
  01d11f0  fnmsubs 6, 6, 7, 31
  01d11f4  fmadds 7, 6, 8, 7
  01d11f8  fmuls 8, 2, 7
  01d11fc  fmuls 7, 4, 7
  01d1200  fmuls 2, 5, 5
  01d1204  fmr 4, 17
  01d1208  fmadds 2, 3, 3, 2
  01d120c  fmr 6, 4
  01d1210  fsqrts 13, 2
  01d1214  fcmpu 0, 13, 6
  01d1218  bt 2, 0x1d125c
  01d121c  frsqrte 4, 2
  01d1220  lfs 6, 8(21)
  01d1224  fmuls 13, 2, 4
  01d1228  fmuls 0, 6, 4
  01d122c  fnmsubs 13, 13, 4, 31
  01d1230  fmadds 4, 13, 0, 4
  01d1234  fmuls 13, 2, 4
  01d1238  fmuls 0, 6, 4
  01d123c  fnmsubs 13, 13, 4, 31
  01d1240  fmadds 4, 13, 0, 4
  01d1244  fmuls 2, 2, 4
  01d1248  fmuls 6, 6, 4
  01d124c  fnmsubs 2, 2, 4, 31
  01d1250  fmadds 4, 2, 6, 4
  01d1254  fmuls 6, 3, 4
  01d1258  fmuls 4, 5, 4
  01d125c  fmuls 2, 7, 7
  01d1260  fmuls 3, 4, 4
  01d1264  lfs 5, 12(21)
  01d1268  lfs 13, 16(21)
  01d126c  fmadds 2, 8, 8, 2
  01d1270  fmadds 3, 6, 6, 3
  01d1274  stw 24, 120(1)
  01d1278  fmadds 2, 17, 17, 2
  01d127c  fmadds 3, 17, 17, 3
  01d1280  stfs 1, 124(1)
  01d1284  fsqrts 2, 2
  01d1288  li 5, 4
  01d128c  ori 3, 1, 0
  01d1290  addic 4, 1, 112
  01d1294  lis 16, 239
  01d1298  mtctr 5
  01d129c  fsqrts 3, 3
  01d12a0  fdivs 5, 5, 2
  01d12a4  fsub 30, 17, 2
  01d12a8  fsub 0, 17, 2
  01d12ac  fsub 27, 2, 17
  01d12b0  fsub 29, 2, 17
  01d12b4  fdivs 9, 9, 2
  01d12b8  fdivs 13, 13, 3
  01d12bc  fsub 28, 17, 3
  01d12c0  fsub 26, 17, 3
  01d12c4  fsub 25, 3, 17
  01d12c8  fsub 24, 3, 17
  01d12cc  fsub 22, 17, 3
  01d12d0  fsub 21, 3, 17
  01d12d4  fsub 20, 3, 17
  01d12d8  fmuls 23, 7, 5
  01d12dc  fmuls 5, 8, 5
  01d12e0  fsel 0, 0, 17, 23
  01d12e4  fsel 30, 30, 17, 5
  01d12e8  fsel 0, 29, 0, 23
  01d12ec  fsel 5, 27, 30, 5
  01d12f0  fsub 27, 3, 17
  01d12f4  fmuls 7, 7, 9
  01d12f8  fmuls 8, 8, 9
  01d12fc  fsub 23, 2, 17
  01d1300  fmuls 30, 4, 13
  01d1304  fmuls 13, 6, 13
  01d1308  fsel 29, 28, 17, 30
  01d130c  fsel 28, 26, 17, 13
  01d1310  fsub 26, 17, 2
  01d1314  fsel 30, 25, 29, 30
  01d1318  fsel 13, 24, 28, 13
  01d131c  fsub 29, 17, 3
  01d1320  fsub 28, 3, 17
  01d1324  fadds 30, 0, 30
  01d1328  fadds 13, 5, 13
  01d132c  fsub 24, 17, 3
  01d1330  fsub 25, 17, 2
  01d1334  fsel 9, 26, 17, 7
  01d1338  fsub 2, 2, 17
  01d133c  stfs 30, 116(1)
  01d1340  stfs 13, 112(1)
  01d1344  lfs 13, 20(21)
  01d1348  fdivs 13, 13, 3
  01d134c  stw 24, 152(1)
  01d1350  stfs 1, 156(1)
  01d1354  fsub 30, 17, 3
  01d1358  fsel 7, 23, 9, 7
  01d135c  fsub 9, 17, 3
  01d1360  fmuls 19, 4, 13
  01d1364  fmuls 13, 6, 13
  01d1368  fsel 30, 30, 17, 19
  01d136c  fsel 29, 29, 17, 13
  01d1370  fsel 30, 28, 30, 19
  01d1374  fsel 13, 27, 29, 13
  01d1378  fadds 0, 0, 30
  01d137c  fadds 5, 5, 13
  01d1380  fsel 13, 25, 17, 8
  01d1384  stfs 0, 148(1)
  01d1388  stfs 5, 144(1)
  01d138c  lfs 5, 24(21)
  01d1390  fdivs 5, 5, 3
  01d1394  stw 24, 136(1)
  01d1398  stfs 1, 140(1)
  01d139c  fsel 2, 2, 13, 8
  01d13a0  fsub 8, 17, 3
  01d13a4  fsub 13, 3, 17
  01d13a8  fsub 0, 3, 17
  01d13ac  fmuls 30, 4, 5
  01d13b0  fmuls 5, 6, 5
  01d13b4  fsel 29, 24, 17, 30
  01d13b8  fsel 28, 22, 17, 5
  01d13bc  fsel 30, 21, 29, 30
  01d13c0  fsel 5, 20, 28, 5
  01d13c4  fadds 30, 7, 30
  01d13c8  fadds 5, 2, 5
  01d13cc  stfs 30, 132(1)
  01d13d0  stfs 5, 128(1)
  01d13d4  lfs 5, 28(21)
  01d13d8  fdivs 3, 5, 3
  01d13dc  stw 24, 168(1)
  01d13e0  stfs 1, 172(1)
  01d13e4  fmuls 1, 4, 3
  01d13e8  fmuls 3, 6, 3
  01d13ec  fsel 4, 8, 17, 1
  01d13f0  fsel 5, 9, 17, 3
  01d13f4  fsel 1, 13, 4, 1
  01d13f8  fsel 3, 0, 5, 3
  01d13fc  fadds 1, 7, 1
  01d1400  fadds 2, 2, 3
  01d1404  stfs 1, 164(1)
  01d1408  stfs 2, 160(1)
  01d140c  lfs 1, 0(4)
  01d1410  lfs 2, 4(4)
  01d1414  fadds 1, 1, 10
  01d1418  lfs 3, 8(4)
  01d141c  fadds 2, 2, 11
  01d1420  fadds 3, 3, 12
  01d1424  stfs 1, 0(4)
  01d1428  stfs 2, 4(4)
  01d142c  stfs 3, 8(4)
  01d1430  lfs 1, 6800(16)
  01d1434  addic 4, 4, 16
  01d1438  stfs 1, 120(3)
  01d143c  addic 3, 3, 16
  01d1440  bdnz 0x1d140c
  01d1444  lfs 1, 128(1)
  01d1448  lis 28, 239
  01d144c  lfs 2, 132(1)
  01d1450  lis 27, 239
  01d1454  lfs 3, 136(1)
  01d1458  lis 26, 239
  01d145c  lfs 24, 112(1)
  01d1460  ori 23, 24, 0
  01d1464  stfs 1, 336(1)
  01d1468  addic 28, 28, 7576
  01d146c  lfs 25, 116(1)
  01d1470  fsubs 18, 1, 24
  01d1474  stfs 2, 332(1)
  01d1478  addic 27, 27, 8864
  01d147c  lfs 26, 120(1)
  01d1480  fsubs 19, 2, 25
  01d1484  lfs 14, 160(1)
  01d1488  addic 26, 26, 6808
  01d148c  stfs 3, 328(1)
  01d1490  fsubs 20, 3, 26
  01d1494  lfs 27, 144(1)
  01d1498  lfs 15, 164(1)
  01d149c  lfs 28, 148(1)
  01d14a0  fsubs 21, 14, 27
  01d14a4  lfs 16, 168(1)
  01d14a8  lfs 29, 152(1)
  01d14ac  fsubs 22, 15, 28
  01d14b0  lfs 30, 32(21)
  01d14b4  fsubs 23, 16, 29
  01d14b8  lfs 1, 140(1)
  01d14bc  lfs 2, 172(1)
  01d14c0  fmuls 18, 30, 18
  01d14c4  stfs 1, 344(1)
  01d14c8  fmuls 19, 30, 19
  01d14cc  stfs 2, 340(1)
  01d14d0  fmuls 20, 30, 20
  01d14d4  fmuls 21, 30, 21
  01d14d8  fmuls 22, 30, 22
  01d14dc  fmuls 23, 30, 23
  01d14e0  stfs 16, 356(1)
  01d14e4  ori 3, 23, 0
  01d14e8  bl 0x502730
  01d14ec  nop
  01d14f0  fmr 16, 1
  01d14f4  ori 3, 23, 0
  01d14f8  bl 0x502730
  01d14fc  nop
  01d1500  lwz 3, 0(31)
  01d1504  lwz 4, 4(31)
  01d1508  fmuls 1, 1, 30
  01d150c  extsw 4, 4
  01d1510  extsw 3, 3
  01d1514  bl 0x5027bc
  01d1518  nop
  01d151c  slwi 4, 23, 2
  01d1520  fmadds 1, 16, 18, 24
  01d1524  slwi 5, 23, 3
  01d1528  fmadds 2, 16, 19, 25
  01d152c  extsw 4, 4
  01d1530  fmadds 3, 16, 20, 26
  01d1534  addc 6, 23, 23
  01d1538  fmadds 4, 16, 21, 27
  01d153c  extsw 5, 5
  01d1540  fmadds 5, 16, 22, 28
  01d1544  addc 6, 23, 6
  01d1548  fmadds 6, 16, 23, 29
  01d154c  addc 7, 5, 27
  01d1550  sldi 6, 6, 2
  01d1554  stwx 3, 28, 4
  01d1558  addic 23, 23, 2
  01d155c  stwx 24, 27, 5
  01d1560  addc 4, 4, 28
  01d1564  extsw 5, 6
  01d1568  stw 24, 4(7)
  01d156c  addc 6, 5, 26
  01d1570  stw 24, 8(7)
  01d1574  extsw 23, 23
  01d1578  stfsx 1, 26, 5
  01d157c  cmpwi 23, 12
  01d1580  stfs 2, 4(6)
  01d1584  stfs 3, 8(6)
  01d1588  stw 3, 4(4)
  01d158c  stw 24, 12(7)
  01d1590  stfs 4, 12(6)
  01d1594  stfs 5, 16(6)
  01d1598  stfs 6, 20(6)
  01d159c  lfs 16, 356(1)
  01d15a0  bt 0, 0x1d14e0
  01d15a4  li 3, 12
  01d15a8  ori 4, 26, 0
  01d15ac  ori 5, 28, 0
  01d15b0  ori 6, 27, 0
  01d15b4  li 7, 9
  01d15b8  bl 0x74604
  01d15bc  nop
  01d15c0  li 3, 22
  01d15c4  bl 0x685c4
  01d15c8  nop
  01d15cc  std 3, 296(1)
  01d15d0  lis 9, 0
  01d15d4  li 3, 0
  01d15d8  li 4, 0
  01d15dc  li 5, 1
  01d15e0  li 6, 1
  01d15e4  li 7, 1
  01d15e8  li 8, 0
  01d15ec  ori 9, 9, 65424
  01d15f0  bl 0x502fd4
  01d15f4  nop
  01d15f8  std 3, 304(1)
  01d15fc  li 3, 0
  01d1600  li 4, 0
  01d1604  li 5, 0
  01d1608  li 6, 0
  01d160c  li 7, 0
  01d1610  li 8, 0
  01d1614  bl 0x502f08
  01d1618  nop
  01d161c  std 3, 288(1)
  01d1620  li 4, 1
  01d1624  li 3, 0
  01d1628  li 5, 0
  01d162c  li 6, 1
  01d1630  li 7, 128
  01d1634  bl 0x502ea8
  01d1638  nop
  01d163c  lfs 1, 328(17)
  01d1640  lfs 2, 36(31)
  01d1644  lfs 3, 20(31)
  01d1648  fsubs 2, 1, 2
  01d164c  std 3, 312(1)
  01d1650  fcmpu 0, 2, 3
  01d1654  cror 6, 0, 2
  01d1658  bt 6, 0x1d1738
  01d165c  lwz 3, 8324(29)
  01d1660  cmpwi 3, 29
  01d1664  bt 2, 0x1d1738
  01d1668  lis 3, 114
  01d166c  lbz 3, -4400(3)
  01d1670  cmpwi 3, 0
  01d1674  bf 2, 0x1d1738
  01d1678  stw 24, 256(1)
  01d167c  stw 24, 260(1)
  01d1680  stw 24, 264(1)
  01d1684  lwz 3, 4(31)
  01d1688  stw 24, 268(1)
  01d168c  stw 24, 272(1)
  01d1690  stw 24, 276(1)
  01d1694  stw 24, 280(1)
  01d1698  stw 3, 240(1)
  01d169c  stw 24, 284(1)
  01d16a0  lwz 4, 8(31)
  01d16a4  lfs 2, 336(1)
  01d16a8  lfs 3, 332(1)
  01d16ac  lfs 4, 328(1)
  01d16b0  lfs 5, 344(1)
  01d16b4  stfs 2, 176(1)
  01d16b8  stfs 3, 180(1)
  01d16bc  stfs 4, 184(1)
  01d16c0  stfs 5, 188(1)
  01d16c4  stfs 2, 192(1)
  01d16c8  stfs 3, 196(1)
  01d16cc  stfs 4, 200(1)
  01d16d0  stfs 5, 204(1)
  01d16d4  lfs 2, 36(31)
  01d16d8  li 5, 0
  01d16dc  lfs 3, 340(1)
  01d16e0  li 7, 9
  01d16e4  fsubs 2, 1, 2
  01d16e8  stfs 14, 208(1)
  01d16ec  stfs 15, 212(1)
  01d16f0  stfs 16, 216(1)
  01d16f4  stfs 3, 220(1)
  01d16f8  stw 4, 244(1)
  01d16fc  stfs 14, 224(1)
  01d1700  stfs 15, 228(1)
  01d1704  stfs 16, 232(1)
  01d1708  stfs 3, 236(1)
  01d170c  stw 3, 248(1)
  01d1710  addic 3, 1, 176
  01d1714  stfs 2, 200(1)
  01d1718  stw 4, 252(1)
  01d171c  lfs 2, 36(31)
  01d1720  li 4, 0
  01d1724  lwz 6, 28(18)
  01d1728  fsubs 1, 1, 2
  01d172c  stfs 1, 232(1)
  01d1730  bl 0x72280
  01d1734  nop
  01d1738  li 3, 0
  01d173c  li 4, 2
  01d1740  li 5, 0
  01d1744  li 6, 1
  01d1748  li 7, 128
  01d174c  bl 0x502ea8
  01d1750  nop
  01d1754  ori 4, 3, 0
  01d1758  ori 3, 30, 0
  01d175c  bl 0x4d5fe4
  01d1760  nop
  01d1764  li 3, 1
  01d1768  li 4, 0
  01d176c  li 8, 0
  01d1770  li 10, 2
  01d1774  li 5, 63
  01d1778  li 6, 1
  01d177c  li 7, 0
  01d1780  li 9, 1
  01d1784  bl 0x502f7c
  01d1788  nop
  01d178c  ori 4, 3, 0
  01d1790  ori 3, 30, 0
  01d1794  bl 0x4d6634
  01d1798  nop
  01d179c  li 4, 0
  01d17a0  li 5, 0
  01d17a4  li 3, 0
  01d17a8  li 6, 0
  01d17ac  li 7, 0
  01d17b0  li 8, 0
  01d17b4  bl 0x502f08
  01d17b8  nop
  01d17bc  addic 4, 1, 320
  01d17c0  addic 5, 1, 324
  01d17c4  bl 0x4d6704
  01d17c8  nop
  01d17cc  lfs 1, 328(17)
  01d17d0  lfs 2, 6800(16)
  01d17d4  fsubs 1, 1, 2
  01d17d8  lfs 2, 44(31)
  01d17dc  lwz 28, 12(31)
  01d17e0  lwz 27, 16(31)
  01d17e4  extsw 28, 28
  01d17e8  extsw 27, 27
  01d17ec  fdivs 1, 1, 2
  01d17f0  fsubs 30, 31, 1
  01d17f4  fsub 1, 31, 30
  01d17f8  fsel 30, 1, 30, 31
  01d17fc  fcmpu 0, 30, 17
  01d1800  bt 0, 0x1d1bb0
  01d1804  li 3, 0
  01d1808  fmr 1, 30
  01d180c  ori 4, 28, 0
  01d1810  bl 0x5027bc
  01d1814  nop
  01d1818  ori 28, 3, 0
  01d181c  li 3, 0
  01d1820  fmr 1, 30
  01d1824  ori 4, 27, 0
  01d1828  bl 0x5027bc
  01d182c  nop
  01d1830  ori 27, 3, 0
  01d1834  ori 26, 24, 0
  01d1838  lwz 3, 28(31)
  01d183c  lwz 29, 28(18)
  01d1840  addc 3, 3, 26
  01d1844  addic 3, 3, 40
  01d1848  extsw 3, 3
  01d184c  bl 0x685c4
  01d1850  nop
  01d1854  sldi 4, 3, 5
  01d1858  lwz 6, 320(1)
  01d185c  sldi 3, 3, 2
  01d1860  lwz 7, 324(1)
  01d1864  addc 4, 4, 3
  01d1868  ori 3, 30, 0
  01d186c  addc 5, 29, 4
  01d1870  li 4, 0
  01d1874  clrldi 5, 5, 32
  01d1878  bl 0x4d676c
  01d187c  nop
  01d1880  lfs 1, 24(31)
  01d1884  lfs 28, 36(21)
  01d1888  lfs 27, 40(21)
  01d188c  fmuls 30, 1, 28
  01d1890  fmuls 2, 1, 27
  01d1894  fcmpu 0, 30, 2
  01d1898  cror 6, 1, 2
  01d189c  bt 6, 0x1d1ba4
  01d18a0  fmuls 29, 1, 28
  01d18a4  fmuls 2, 1, 27
  01d18a8  ori 29, 24, 0
  01d18ac  fcmpu 0, 29, 2
  01d18b0  cror 6, 1, 2
  01d18b4  bt 6, 0x1d1b68
  01d18b8  ori 29, 24, 0
  01d18bc  fadds 26, 30, 31
  01d18c0  fmuls 1, 1, 27
  01d18c4  lis 3, 118
  01d18c8  slwi 4, 26, 2
  01d18cc  lis 5, 239
  01d18d0  slwi 6, 26, 3
  01d18d4  addic 3, 3, 17388
  01d18d8  extsw 4, 4
  01d18dc  addic 5, 5, 6784
  01d18e0  fdivs 3, 29, 1
  01d18e4  extsw 6, 6
  01d18e8  lfsx 4, 3, 4
  01d18ec  lis 3, 239
  01d18f0  slwi 4, 29, 3
  01d18f4  addic 3, 3, 9376
  01d18f8  extsw 4, 4
  01d18fc  lfsx 5, 5, 6
  01d1900  addc 5, 5, 6
  01d1904  lfs 1, 320(17)
  01d1908  lfs 2, 324(17)
  01d190c  lfs 6, 4(5)
  01d1910  lfs 9, 6800(16)
  01d1914  addc 6, 29, 29
  01d1918  lis 23, 239
  01d191c  addc 6, 29, 6
  01d1920  fadds 7, 29, 1
  01d1924  fadds 8, 2, 26
  01d1928  sldi 6, 6, 2
  01d192c  addic 23, 23, 7832
  01d1930  extsw 6, 6
  01d1934  addc 5, 3, 4
  01d1938  addc 7, 23, 6
  01d193c  addic 8, 29, 1
  01d1940  fadds 7, 7, 31
  01d1944  addic 9, 29, 2
  01d1948  slwi 10, 9, 3
  01d194c  addc 11, 9, 9
  01d1950  addc 9, 9, 11
  01d1954  sldi 9, 9, 2
  01d1958  extsw 9, 9
  01d195c  addc 11, 23, 9
  01d1960  addic 22, 29, 4
  01d1964  cmpw 29, 22
  01d1968  fmadds 3, 3, 4, 5
  01d196c  stfsx 3, 3, 4
  01d1970  lfs 3, 24(31)
  01d1974  fmuls 3, 3, 27
  01d1978  stfsx 7, 23, 6
  01d197c  stfs 8, 4(7)
  01d1980  stfs 9, 8(7)
  01d1984  slwi 4, 8, 3
  01d1988  fdivs 3, 30, 3
  01d198c  extsw 4, 4
  01d1990  addc 6, 8, 8
  01d1994  addc 7, 3, 4
  01d1998  addc 6, 8, 6
  01d199c  sldi 6, 6, 2
  01d19a0  extsw 6, 6
  01d19a4  addc 8, 23, 6
  01d19a8  fmadds 3, 3, 4, 6
  01d19ac  stfs 3, 4(5)
  01d19b0  lfs 3, 24(31)
  01d19b4  fmuls 3, 3, 27
  01d19b8  fdivs 3, 29, 3
  01d19bc  extsw 5, 10
  01d19c0  addc 10, 3, 5
  01d19c4  fmadds 3, 3, 4, 5
  01d19c8  stfsx 3, 3, 4
  01d19cc  lfs 3, 24(31)
  01d19d0  fadds 10, 3, 30
  01d19d4  fmuls 3, 3, 27
  01d19d8  stfsx 7, 23, 6
  01d19dc  fdivs 3, 10, 3
  01d19e0  addic 4, 29, 3
  01d19e4  slwi 6, 4, 3
  01d19e8  extsw 6, 6
  01d19ec  fmadds 3, 3, 4, 6
  01d19f0  stfs 3, 4(7)
  01d19f4  lfs 3, 24(31)
  01d19f8  fadds 3, 3, 30
  01d19fc  stfs 9, 8(8)
  01d1a00  fadds 3, 3, 2
  01d1a04  fadds 3, 3, 31
  01d1a08  stfs 3, 4(8)
  01d1a0c  lfs 3, 24(31)
  01d1a10  fadds 7, 29, 3
  01d1a14  fmuls 3, 3, 27
  01d1a18  fdivs 3, 7, 3
  01d1a1c  addc 7, 3, 6
  01d1a20  addc 8, 4, 4
  01d1a24  addc 4, 4, 8
  01d1a28  sldi 4, 4, 2
  01d1a2c  extsw 4, 4
  01d1a30  fmadds 3, 3, 4, 5
  01d1a34  stfsx 3, 3, 5
  01d1a38  lfs 3, 24(31)
  01d1a3c  fmuls 3, 3, 27
  01d1a40  fdivs 3, 30, 3
  01d1a44  addc 5, 23, 4
  01d1a48  fmadds 3, 3, 4, 6
  01d1a4c  stfs 3, 4(10)
  01d1a50  lfs 3, 24(31)
  01d1a54  fadds 3, 29, 3
  01d1a58  stfs 8, 4(11)
  01d1a5c  stfs 9, 8(11)
  01d1a60  fadds 3, 3, 1
  01d1a64  fadds 3, 3, 31
  01d1a68  stfsx 3, 23, 9
  01d1a6c  lfs 3, 24(31)
  01d1a70  fadds 7, 29, 3
  01d1a74  fmuls 3, 3, 27
  01d1a78  fdivs 3, 7, 3
  01d1a7c  fmadds 3, 3, 4, 5
  01d1a80  stfsx 3, 3, 6
  01d1a84  lfs 3, 24(31)
  01d1a88  fadds 5, 3, 30
  01d1a8c  fmuls 3, 3, 27
  01d1a90  fdivs 3, 5, 3
  01d1a94  fmadds 3, 3, 4, 6
  01d1a98  stfs 3, 4(7)
  01d1a9c  lfs 3, 24(31)
  01d1aa0  fadds 3, 29, 3
  01d1aa4  fadds 3, 3, 1
  01d1aa8  fadds 3, 3, 31
  01d1aac  stfsx 3, 23, 4
  01d1ab0  lfs 3, 24(31)
  01d1ab4  fadds 3, 3, 30
  01d1ab8  stfs 9, 8(5)
  01d1abc  fadds 3, 3, 2
  01d1ac0  fadds 3, 3, 31
  01d1ac4  stfs 3, 4(5)
  01d1ac8  bf 0, 0x1d1b50
  01d1acc  addc 3, 29, 29
  01d1ad0  lis 15, 239
  01d1ad4  addc 20, 29, 3
  01d1ad8  slwi 19, 29, 2
  01d1adc  sldi 20, 20, 2
  01d1ae0  addic 15, 15, 8600
  01d1ae4  extsw 3, 20
  01d1ae8  addc 4, 3, 23
  01d1aec  lfsx 3, 23, 3
  01d1af0  lfs 4, 4(4)
  01d1af4  fsubs 1, 3, 1
  01d1af8  fsubs 2, 4, 2
  01d1afc  ori 4, 27, 0
  01d1b00  ori 3, 28, 0
  01d1b04  fmuls 2, 2, 2
  01d1b08  fmadds 1, 1, 1, 2
  01d1b0c  lfs 2, 24(31)
  01d1b10  fmuls 2, 2, 27
  01d1b14  fsqrts 1, 1
  01d1b18  fdivs 1, 1, 2
  01d1b1c  fsub 2, 31, 1
  01d1b20  fsel 1, 2, 1, 31
  01d1b24  bl 0x5027bc
  01d1b28  nop
  01d1b2c  extsw 4, 19
  01d1b30  lfs 1, 320(17)
  01d1b34  addic 29, 29, 1
  01d1b38  lfs 2, 324(17)
  01d1b3c  addic 19, 19, 4
  01d1b40  cmpw 29, 22
  01d1b44  addic 20, 20, 12
  01d1b48  stwx 3, 15, 4
  01d1b4c  bt 0, 0x1d1ae4
  01d1b50  lfs 1, 24(31)
  01d1b54  extsw 29, 22
  01d1b58  fadds 29, 29, 1
  01d1b5c  fmuls 2, 1, 27
  01d1b60  fcmpu 0, 29, 2
  01d1b64  bt 0, 0x1d18c0
  01d1b68  lis 4, 239
  01d1b6c  lis 5, 239
  01d1b70  lis 6, 239
  01d1b74  ori 3, 29, 0
  01d1b78  addic 4, 4, 7832
  01d1b7c  li 7, 9
  01d1b80  addic 5, 5, 8600
  01d1b84  addic 6, 6, 9376
  01d1b88  bl 0x74604
  01d1b8c  nop
  01d1b90  lfs 1, 24(31)
  01d1b94  fadds 30, 30, 1
  01d1b98  fmuls 2, 1, 27
  01d1b9c  fcmpu 0, 30, 2
  01d1ba0  bt 0, 0x1d18a0
  01d1ba4  addic 26, 26, 1
  01d1ba8  cmpwi 26, 2
  01d1bac  bt 0, 0x1d1838
  01d1bb0  lfs 1, 352(1)
  01d1bb4  lfs 2, 348(1)
  01d1bb8  stfs 1, 552(25)
  01d1bbc  stfs 2, 556(25)
  01d1bc0  ld 0, 656(1)
  01d1bc4  mtlr 0
  01d1bc8  lfd 14, 496(1)
  01d1bcc  lfd 15, 504(1)
  01d1bd0  lfd 16, 512(1)
  01d1bd4  lfd 17, 520(1)
  01d1bd8  lfd 18, 528(1)
  01d1bdc  lfd 19, 536(1)
  01d1be0  lfd 20, 544(1)
  01d1be4  lfd 21, 552(1)
  01d1be8  lfd 22, 560(1)
  01d1bec  lfd 23, 568(1)
  01d1bf0  lfd 24, 576(1)
  01d1bf4  lfd 25, 584(1)
  01d1bf8  lfd 26, 592(1)
  01d1bfc  lfd 27, 600(1)
  01d1c00  lfd 28, 608(1)
  01d1c04  lfd 29, 616(1)
  01d1c08  lfd 30, 624(1)
  01d1c0c  lfd 31, 632(1)
  01d1c10  ld 15, 360(1)
  01d1c14  ld 16, 368(1)
  01d1c18  ld 17, 376(1)
  01d1c1c  ld 18, 384(1)
  01d1c20  ld 19, 392(1)
  01d1c24  ld 20, 400(1)
  01d1c28  ld 21, 408(1)
  01d1c2c  ld 22, 416(1)
  01d1c30  ld 23, 424(1)
  01d1c34  ld 24, 432(1)
  01d1c38  ld 25, 440(1)
  01d1c3c  ld 26, 448(1)
  01d1c40  ld 27, 456(1)
  01d1c44  ld 28, 464(1)
  01d1c48  ld 29, 472(1)
  01d1c4c  ld 30, 480(1)
  01d1c50  ld 31, 488(1)
  01d1c54  addi 1, 1, 640
  01d1c58  blr

UpdateMoby_1111:   # 0x1d1c90, 0x4dc bytes
  01d1c90  stdu 1, -256(1)
  01d1c94  mflr 0
  01d1c98  std 0, 272(1)
  01d1c9c  stfd 24, 192(1)
  01d1ca0  stfd 25, 200(1)
  01d1ca4  stfd 26, 208(1)
  01d1ca8  stfd 27, 216(1)
  01d1cac  stfd 28, 224(1)
  01d1cb0  stfd 29, 232(1)
  01d1cb4  stfd 30, 240(1)
  01d1cb8  stfd 31, 248(1)
  01d1cbc  std 31, 184(1)
  01d1cc0  lbz 4, 32(3)
  01d1cc4  std 26, 144(1)
  01d1cc8  ori 31, 3, 0
  01d1ccc  lwz 26, 120(3)
  01d1cd0  std 30, 176(1)
  01d1cd4  std 29, 168(1)
  01d1cd8  std 28, 160(1)
  01d1cdc  std 27, 152(1)
  01d1ce0  std 25, 136(1)
  01d1ce4  std 24, 128(1)
  01d1ce8  std 23, 120(1)
  01d1cec  cmpwi 4, 0
  01d1cf0  bf 2, 0x1d1d60
  01d1cf4  li 5, 255
  01d1cf8  lis 7, 239
  01d1cfc  li 3, 1
  01d1d00  li 4, 0
  01d1d04  addic 8, 7, 6784
  01d1d08  stb 5, 48(31)
  01d1d0c  lis 6, 149
  01d1d10  stb 3, 32(31)
  01d1d14  addic 6, 6, 5056
  01d1d18  stw 4, 6784(7)
  01d1d1c  lis 9, 239
  01d1d20  stw 4, 4(8)
  01d1d24  stw 4, 8(8)
  01d1d28  addic 3, 9, 9904
  01d1d2c  stw 4, 12(8)
  01d1d30  lis 5, 239
  01d1d34  lfs 1, 320(6)
  01d1d38  lfs 2, 324(6)
  01d1d3c  stfs 1, 9904(9)
  01d1d40  lfs 1, 328(6)
  01d1d44  stfs 2, 4(3)
  01d1d48  lfs 2, 332(6)
  01d1d4c  stfs 1, 8(3)
  01d1d50  stfs 2, 12(3)
  01d1d54  lfs 1, 20(26)
  01d1d58  stfs 1, 6804(5)
  01d1d5c  b 0x1d2118
  01d1d60  lis 4, 149
  01d1d64  lis 5, 17204
  01d1d68  addic 4, 4, 5056
  01d1d6c  lwz 3, 328(4)
  01d1d70  lfs 1, 328(4)
  01d1d74  srawi 6, 3, 31
  01d1d78  srwi 7, 6, 1
  01d1d7c  xor 3, 7, 3
  01d1d80  subc 3, 3, 6
  01d1d84  cmpw 3, 5
  01d1d88  bf 1, 0x1d1dd0
  01d1d8c  lis 5, 116
  01d1d90  li 7, 40
  01d1d94  lis 9, 116
  01d1d98  lis 6, 116
  01d1d9c  lis 8, 116
  01d1da0  stb 7, -22176(5)
  01d1da4  li 5, 64
  01d1da8  li 11, 144
  01d1dac  lis 10, 116
  01d1db0  lis 12, 116
  01d1db4  lis 30, 116
  01d1db8  stb 5, -22175(9)
  01d1dbc  stb 11, -22174(6)
  01d1dc0  stb 5, -22173(8)
  01d1dc4  stb 7, -22172(10)
  01d1dc8  stb 5, -22171(12)
  01d1dcc  stb 11, -22170(30)
  01d1dd0  lis 5, 239
  01d1dd4  lfs 28, 320(4)
  01d1dd8  addic 6, 5, 9904
  01d1ddc  lfs 2, 9904(5)
  01d1de0  lfs 29, 324(4)
  01d1de4  lfs 3, 4(6)
  01d1de8  lfs 4, 332(4)
  01d1dec  stfs 28, 9904(5)
  01d1df0  stfs 29, 4(6)
  01d1df4  stfs 1, 8(6)
  01d1df8  fsubs 28, 28, 2
  01d1dfc  stfs 4, 12(6)
  01d1e00  fsubs 29, 29, 3
  01d1e04  lwz 4, 32(26)
  01d1e08  srawi 5, 4, 31
  01d1e0c  srwi 6, 5, 1
  01d1e10  xor 4, 6, 4
  01d1e14  subc 4, 4, 5
  01d1e18  cmpw 3, 4
  01d1e1c  bf 1, 0x1d2118
  01d1e20  lis 3, 29
  01d1e24  lis 24, 239
  01d1e28  addi 3, 3, 7260
  01d1e2c  addic 24, 24, 6784
  01d1e30  li 27, 0
  01d1e34  ori 29, 24, 0
  01d1e38  lis 23, 118
  01d1e3c  lfs 26, 0(3)
  01d1e40  addic 25, 29, 4
  01d1e44  lfs 27, 4(3)
  01d1e48  ori 28, 27, 0
  01d1e4c  lfs 30, 8(3)
  01d1e50  addic 23, 23, 17388
  01d1e54  ori 30, 25, 0
  01d1e58  lfs 31, 12(3)
  01d1e5c  lfs 1, 0(23)
  01d1e60  lfs 2, 24(26)
  01d1e64  fmuls 1, 1, 26
  01d1e68  fmuls 2, 2, 27
  01d1e6c  fdivs 25, 1, 2
  01d1e70  fmuls 24, 25, 28
  01d1e74  fmuls 25, 25, 29
  01d1e78  fcmpu 0, 24, 30
  01d1e7c  bt 2, 0x1d1e98
  01d1e80  fmr 1, 24
  01d1e84  bl 0x502758
  01d1e88  nop
  01d1e8c  bl 0x502730
  01d1e90  nop
  01d1e94  fsubs 24, 24, 1
  01d1e98  fcmpu 0, 25, 30
  01d1e9c  bt 2, 0x1d1eb8
  01d1ea0  fmr 1, 25
  01d1ea4  bl 0x502758
  01d1ea8  nop
  01d1eac  bl 0x502730
  01d1eb0  nop
  01d1eb4  fsubs 25, 25, 1
  01d1eb8  lfs 1, 0(24)
  01d1ebc  lfs 2, 0(25)
  01d1ec0  lis 3, 16256
  01d1ec4  fadds 1, 1, 24
  01d1ec8  fadds 2, 2, 25
  01d1ecc  stfs 1, 0(24)
  01d1ed0  stfs 2, 0(25)
  01d1ed4  lwz 4, 0(24)
  01d1ed8  lfs 24, 0(24)
  01d1edc  srawi 5, 4, 31
  01d1ee0  srwi 6, 5, 1
  01d1ee4  xor 4, 6, 4
  01d1ee8  subc 4, 4, 5
  01d1eec  cmpw 4, 3
  01d1ef0  bf 1, 0x1d1efc
  01d1ef4  fsubs 24, 24, 30
  01d1ef8  stfs 24, 0(24)
  01d1efc  fcmpu 0, 24, 31
  01d1f00  cror 6, 1, 2
  01d1f04  bt 6, 0x1d1f10
  01d1f08  fadds 1, 24, 30
  01d1f0c  stfs 1, 0(24)
  01d1f10  lwz 4, 0(25)
  01d1f14  lis 3, 16256
  01d1f18  lfs 1, 0(25)
  01d1f1c  srawi 5, 4, 31
  01d1f20  srwi 6, 5, 1
  01d1f24  xor 4, 6, 4
  01d1f28  subc 4, 4, 5
  01d1f2c  cmpw 4, 3
  01d1f30  bf 1, 0x1d1f3c
  01d1f34  fsubs 1, 1, 30
  01d1f38  stfs 1, 0(25)
  01d1f3c  fcmpu 0, 1, 31
  01d1f40  cror 6, 1, 2
  01d1f44  bt 6, 0x1d1f50
  01d1f48  fadds 1, 1, 30
  01d1f4c  stfs 1, 0(25)
  01d1f50  addic 27, 27, 1
  01d1f54  addic 23, 23, 4
  01d1f58  cmpwi 27, 2
  01d1f5c  addic 24, 24, 8
  01d1f60  addic 25, 25, 8
  01d1f64  bt 0, 0x1d1e5c
  01d1f68  lis 3, 161
  01d1f6c  lis 4, -18933
  01d1f70  ori 4, 4, 24759
  01d1f74  lwz 3, 1808(3)
  01d1f78  mulhw 4, 4, 3
  01d1f7c  addc 4, 4, 3
  01d1f80  srawi 4, 4, 8
  01d1f84  srwi 5, 4, 31
  01d1f88  addc 4, 4, 5
  01d1f8c  sldi 5, 4, 7
  01d1f90  sldi 4, 4, 3
  01d1f94  subc 4, 5, 4
  01d1f98  addc 5, 4, 4
  01d1f9c  addc 4, 4, 5
  01d1fa0  subc 3, 3, 4
  01d1fa4  extsw 3, 3
  01d1fa8  bl 0x502730
  01d1fac  nop
  01d1fb0  lis 3, 29
  01d1fb4  addi 3, 3, 7260
  01d1fb8  lfs 2, 16(3)
  01d1fbc  lfs 3, 20(3)
  01d1fc0  lfs 4, 24(3)
  01d1fc4  fmsubs 1, 1, 2, 3
  01d1fc8  lfs 5, 28(3)
  01d1fcc  li 5, 1
  01d1fd0  lis 7, 230
  01d1fd4  lis 6, 17408
  01d1fd8  lis 8, 17536
  01d1fdc  lis 9, 114
  01d1fe0  lis 4, 239
  01d1fe4  fsubs 2, 4, 1
  01d1fe8  fsubs 3, 5, 1
  01d1fec  lfs 5, 32(3)
  01d1ff0  lis 10, 118
  01d1ff4  ori 27, 28, 0
  01d1ff8  addic 28, 10, 17404
  01d1ffc  fsub 4, 1, 2
  01d2000  fsel 1, 4, 2, 1
  01d2004  lfs 2, 36(3)
  01d2008  fsub 4, 3, 1
  01d200c  fsel 1, 4, 3, 1
  01d2010  lfs 3, 40(3)
  01d2014  lfs 4, 44(3)
  01d2018  lfs 7, 48(3)
  01d201c  lis 3, 239
  01d2020  fmuls 6, 1, 1
  01d2024  fmuls 8, 6, 1
  01d2028  fmuls 9, 6, 8
  01d202c  fmadds 1, 8, 5, 1
  01d2030  lfs 5, 6804(3)
  01d2034  lis 3, 230
  01d2038  stw 5, -21876(3)
  01d203c  fmuls 8, 6, 9
  01d2040  fmadds 1, 9, 2, 1
  01d2044  addic 5, 7, -21872
  01d2048  stw 6, -21872(7)
  01d204c  lis 3, 118
  01d2050  addic 3, 3, 17400
  01d2054  stw 6, 4(5)
  01d2058  stw 8, 12(5)
  01d205c  fmuls 2, 6, 8
  01d2060  fmadds 1, 8, 3, 1
  01d2064  fmadds 2, 2, 4, 1
  01d2068  lfs 1, -3036(9)
  01d206c  fmadds 2, 2, 7, 5
  01d2070  stfs 2, 6800(4)
  01d2074  stfs 2, 8(5)
  01d2078  lfs 2, 0(29)
  01d207c  lfs 3, 0(3)
  01d2080  fmadds 2, 3, 1, 2
  01d2084  fcmpu 0, 2, 30
  01d2088  stfs 2, 0(29)
  01d208c  cror 6, 0, 2
  01d2090  bt 6, 0x1d209c
  01d2094  fsubs 2, 2, 30
  01d2098  stfs 2, 0(29)
  01d209c  fcmpu 0, 2, 31
  01d20a0  cror 6, 1, 2
  01d20a4  bt 6, 0x1d20b0
  01d20a8  fadds 2, 2, 30
  01d20ac  stfs 2, 0(29)
  01d20b0  lfs 2, 0(30)
  01d20b4  lfs 3, 0(28)
  01d20b8  fmadds 2, 3, 1, 2
  01d20bc  fcmpu 0, 2, 30
  01d20c0  stfs 2, 0(30)
  01d20c4  cror 6, 0, 2
  01d20c8  bt 6, 0x1d20d4
  01d20cc  fsubs 2, 2, 30
  01d20d0  stfs 2, 0(30)
  01d20d4  fcmpu 0, 2, 31
  01d20d8  cror 6, 1, 2
  01d20dc  bt 6, 0x1d20e8
  01d20e0  fadds 2, 2, 30
  01d20e4  stfs 2, 0(30)
  01d20e8  addic 27, 27, 1
  01d20ec  addic 3, 3, 8
  01d20f0  cmpwi 27, 2
  01d20f4  addic 29, 29, 8
  01d20f8  addic 28, 28, 8
  01d20fc  addic 30, 30, 8
  01d2100  bt 0, 0x1d2078
  01d2104  lis 3, 113
  01d2108  ori 4, 31, 0
  01d210c  addic 3, 3, -29304
  01d2110  bl 0x6d720
  01d2114  nop
  01d2118  ld 0, 272(1)
  01d211c  mtlr 0
  01d2120  lfd 24, 192(1)
  01d2124  lfd 25, 200(1)
  01d2128  lfd 26, 208(1)
  01d212c  lfd 27, 216(1)
  01d2130  lfd 28, 224(1)
  01d2134  lfd 29, 232(1)
  01d2138  lfd 30, 240(1)
  01d213c  lfd 31, 248(1)
  01d2140  ld 23, 120(1)
  01d2144  ld 24, 128(1)
  01d2148  ld 25, 136(1)
  01d214c  ld 26, 144(1)
  01d2150  ld 27, 152(1)
  01d2154  ld 28, 160(1)
  01d2158  ld 29, 168(1)
  01d215c  ld 30, 176(1)
  01d2160  ld 31, 184(1)
  01d2164  addi 1, 1, 256
  01d2168  blr

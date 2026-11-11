# game/update/moby127.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002a0dec:   # 0x2a0dec, 0x58 bytes
  02a0dec  stdu 1, -128(1)
  02a0df0  mflr 0
  02a0df4  std 0, 144(1)
  02a0df8  std 31, 120(1)
  02a0dfc  ori 31, 3, 0
  02a0e00  lhz 3, 166(3)
  02a0e04  cmpwi 3, 1584
  02a0e08  bf 2, 0x2a0e30
  02a0e0c  lwz 3, 120(31)
  02a0e10  lwz 3, 132(3)
  02a0e14  cmpwi 3, 0
  02a0e18  bt 2, 0x2a0e24
  02a0e1c  bl 0xefb38
  02a0e20  nop
  02a0e24  ori 3, 31, 0
  02a0e28  bl 0xefb38
  02a0e2c  nop
  02a0e30  ld 0, 144(1)
  02a0e34  mtlr 0
  02a0e38  ld 31, 120(1)
  02a0e3c  addi 1, 1, 128
  02a0e40  blr

UpdateMoby_127:   # 0x2a0e58, 0x500 bytes
  02a0e58  stdu 1, -160(1)
  02a0e5c  mflr 0
  02a0e60  std 0, 176(1)
  02a0e64  stfd 30, 144(1)
  02a0e68  stfd 31, 152(1)
  02a0e6c  std 31, 136(1)
  02a0e70  ori 31, 3, 0
  02a0e74  std 30, 128(1)
  02a0e78  lbz 3, 176(31)
  02a0e7c  lwz 30, 120(31)
  02a0e80  std 29, 120(1)
  02a0e84  cmpwi 3, 255
  02a0e88  bt 2, 0x2a0ec0
  02a0e8c  lis 4, 151
  02a0e90  lis 5, 161
  02a0e94  addic 5, 5, -13692
  02a0e98  lwz 4, -25488(4)
  02a0e9c  addc 3, 3, 5
  02a0ea0  slwi 4, 4, 4
  02a0ea4  clrldi 3, 3, 32
  02a0ea8  extsw 4, 4
  02a0eac  lbzx 3, 3, 4
  02a0eb0  cmpwi 3, 255
  02a0eb4  bf 2, 0x2a0ec0
  02a0eb8  li 3, -1
  02a0ebc  stw 3, 16(30)
  02a0ec0  lbz 3, 32(31)
  02a0ec4  cmpwi 3, 4
  02a0ec8  cmpwi 1, 3, 3
  02a0ecc  cmpwi 6, 3, 2
  02a0ed0  cmpwi 7, 3, 1
  02a0ed4  bt 2, 0x2a11ec
  02a0ed8  bt 6, 0x2a1170
  02a0edc  bt 26, 0x2a0fe0
  02a0ee0  bt 30, 0x2a0f68
  02a0ee4  cmpwi 3, 0
  02a0ee8  bf 2, 0x2a1334
  02a0eec  lfs 1, 64(31)
  02a0ef0  li 3, 0
  02a0ef4  lwz 6, 60(30)
  02a0ef8  li 4, 1
  02a0efc  li 5, 2
  02a0f00  stfs 1, 0(30)
  02a0f04  subc 3, 3, 6
  02a0f08  lfs 1, 68(31)
  02a0f0c  subc 4, 4, 5
  02a0f10  cntlzw 3, 3
  02a0f14  stfs 1, 4(30)
  02a0f18  sldi 3, 3, 58
  02a0f1c  lfs 1, 72(31)
  02a0f20  sradi 3, 3, 63
  02a0f24  stfs 1, 8(30)
  02a0f28  and 3, 3, 4
  02a0f2c  lfs 1, 76(31)
  02a0f30  li 4, 0
  02a0f34  addc 3, 5, 3
  02a0f38  stfs 1, 12(30)
  02a0f3c  stb 3, 32(31)
  02a0f40  lwz 3, 56(30)
  02a0f44  stw 4, 12(30)
  02a0f48  cmpwi 3, 0
  02a0f4c  lfs 1, 56(30)
  02a0f50  bf 1, 0x2a1334
  02a0f54  lwz 3, 36(31)
  02a0f58  lfs 2, 36(3)
  02a0f5c  fmuls 1, 2, 1
  02a0f60  stfs 1, 44(31)
  02a0f64  b 0x2a1334
  02a0f68  lwz 3, 16(30)
  02a0f6c  cmpwi 3, -1
  02a0f70  bt 2, 0x2a0fb0
  02a0f74  lis 4, 164
  02a0f78  slwi 3, 3, 8
  02a0f7c  lwz 4, -28512(4)
  02a0f80  addc 3, 4, 3
  02a0f84  cmpwi 3, 0
  02a0f88  bt 2, 0x2a0fb0
  02a0f8c  clrldi 3, 3, 32
  02a0f90  lbz 3, 32(3)
  02a0f94  cmpwi 1, 3, 253
  02a0f98  cmpwi 3, 254
  02a0f9c  cror 2, 2, 6
  02a0fa0  bt 2, 0x2a0fb0
  02a0fa4  lwz 4, 20(30)
  02a0fa8  cmpw 3, 4
  02a0fac  bf 2, 0x2a1334
  02a0fb0  lwz 3, 48(30)
  02a0fb4  cmpwi 3, -1
  02a0fb8  bt 2, 0x2a0fcc
  02a0fbc  li 4, 0
  02a0fc0  ori 5, 31, 0
  02a0fc4  bl 0x15d12c
  02a0fc8  nop
  02a0fcc  li 3, 0
  02a0fd0  li 4, 2
  02a0fd4  stw 3, 12(30)
  02a0fd8  stb 4, 32(31)
  02a0fdc  b 0x2a1334
  02a0fe0  lwz 3, 16(30)
  02a0fe4  cmpwi 3, -1
  02a0fe8  bt 2, 0x2a1054
  02a0fec  lis 4, 164
  02a0ff0  slwi 3, 3, 8
  02a0ff4  lwz 4, -28512(4)
  02a0ff8  addc 3, 4, 3
  02a0ffc  cmpwi 3, 0
  02a1000  bt 2, 0x2a1054
  02a1004  clrldi 3, 3, 32
  02a1008  lbz 3, 32(3)
  02a100c  cmpwi 1, 3, 253
  02a1010  cmpwi 3, 254
  02a1014  cror 2, 2, 6
  02a1018  bt 2, 0x2a1054
  02a101c  lwz 4, 24(30)
  02a1020  cmpw 3, 4
  02a1024  bf 2, 0x2a1054
  02a1028  lwz 30, 48(30)
  02a102c  cmpwi 30, -1
  02a1030  bt 2, 0x2a1048
  02a1034  ori 3, 30, 0
  02a1038  li 4, 0
  02a103c  ori 5, 31, 0
  02a1040  bl 0x15d12c
  02a1044  nop
  02a1048  li 3, 4
  02a104c  stb 3, 32(31)
  02a1050  b 0x2a1334
  02a1054  lis 3, 42
  02a1058  lfs 1, 44(30)
  02a105c  addi 3, 3, 3656
  02a1060  lis 29, 16256
  02a1064  lfs 2, 0(3)
  02a1068  lfs 3, 4(3)
  02a106c  fmuls 1, 1, 2
  02a1070  fdivs 30, 3, 1
  02a1074  lfs 1, 12(30)
  02a1078  lfs 2, 28(30)
  02a107c  fadds 1, 1, 30
  02a1080  stfs 1, 12(30)
  02a1084  lfs 31, 8(3)
  02a1088  lfs 1, 64(31)
  02a108c  fmuls 2, 2, 31
  02a1090  fmuls 2, 2, 30
  02a1094  bl 0x502578
  02a1098  nop
  02a109c  stfs 1, 64(31)
  02a10a0  lfs 1, 32(30)
  02a10a4  fmuls 3, 1, 31
  02a10a8  lfs 1, 68(31)
  02a10ac  fmuls 2, 3, 30
  02a10b0  bl 0x502578
  02a10b4  nop
  02a10b8  stfs 1, 68(31)
  02a10bc  lfs 1, 36(30)
  02a10c0  fmuls 3, 1, 31
  02a10c4  lfs 1, 72(31)
  02a10c8  fmuls 2, 3, 30
  02a10cc  bl 0x502578
  02a10d0  nop
  02a10d4  stfs 1, 72(31)
  02a10d8  lwz 3, 12(30)
  02a10dc  srawi 4, 3, 31
  02a10e0  srwi 5, 4, 1
  02a10e4  xor 3, 5, 3
  02a10e8  subc 3, 3, 4
  02a10ec  cmpw 3, 29
  02a10f0  bt 0, 0x2a1334
  02a10f4  lfs 1, 0(30)
  02a10f8  lfs 2, 28(30)
  02a10fc  fmuls 2, 2, 31
  02a1100  bl 0x502578
  02a1104  nop
  02a1108  stfs 1, 64(31)
  02a110c  lfs 1, 4(30)
  02a1110  lfs 2, 32(30)
  02a1114  fmuls 2, 2, 31
  02a1118  bl 0x502578
  02a111c  nop
  02a1120  stfs 1, 68(31)
  02a1124  lfs 1, 8(30)
  02a1128  lfs 2, 36(30)
  02a112c  fmuls 2, 2, 31
  02a1130  bl 0x502578
  02a1134  nop
  02a1138  lis 3, 16256
  02a113c  li 4, 3
  02a1140  stfs 1, 72(31)
  02a1144  stw 3, 12(30)
  02a1148  stb 4, 32(31)
  02a114c  lwz 30, 48(30)
  02a1150  cmpwi 30, -1
  02a1154  bt 2, 0x2a1334
  02a1158  ori 3, 30, 0
  02a115c  li 4, 0
  02a1160  ori 5, 31, 0
  02a1164  bl 0x15d12c
  02a1168  nop
  02a116c  b 0x2a1334
  02a1170  lwz 3, 16(30)
  02a1174  cmpwi 3, -1
  02a1178  bt 2, 0x2a1334
  02a117c  lis 4, 164
  02a1180  slwi 3, 3, 8
  02a1184  lwz 4, -28512(4)
  02a1188  addc 3, 4, 3
  02a118c  cmpwi 3, 0
  02a1190  bt 2, 0x2a1334
  02a1194  clrldi 3, 3, 32
  02a1198  lbz 3, 32(3)
  02a119c  cmpwi 1, 3, 253
  02a11a0  cmpwi 3, 254
  02a11a4  cror 2, 2, 6
  02a11a8  bt 2, 0x2a1334
  02a11ac  lwz 4, 24(30)
  02a11b0  cmpw 3, 4
  02a11b4  bf 2, 0x2a1334
  02a11b8  lis 3, 16256
  02a11bc  stw 3, 12(30)
  02a11c0  lwz 30, 48(30)
  02a11c4  cmpwi 30, -1
  02a11c8  bt 2, 0x2a11e0
  02a11cc  ori 3, 30, 0
  02a11d0  li 4, 0
  02a11d4  ori 5, 31, 0
  02a11d8  bl 0x15d12c
  02a11dc  nop
  02a11e0  li 3, 4
  02a11e4  stb 3, 32(31)
  02a11e8  b 0x2a1334
  02a11ec  lwz 3, 16(30)
  02a11f0  cmpwi 3, -1
  02a11f4  bt 2, 0x2a1234
  02a11f8  lis 4, 164
  02a11fc  slwi 3, 3, 8
  02a1200  lwz 4, -28512(4)
  02a1204  addc 3, 4, 3
  02a1208  cmpwi 3, 0
  02a120c  bt 2, 0x2a1234
  02a1210  clrldi 3, 3, 32
  02a1214  lbz 3, 32(3)
  02a1218  cmpwi 1, 3, 253
  02a121c  cmpwi 3, 254
  02a1220  cror 2, 2, 6
  02a1224  bt 2, 0x2a1234
  02a1228  lwz 4, 20(30)
  02a122c  cmpw 3, 4
  02a1230  bf 2, 0x2a1260
  02a1234  lwz 30, 48(30)
  02a1238  cmpwi 30, -1
  02a123c  bt 2, 0x2a1254
  02a1240  ori 3, 30, 0
  02a1244  li 4, 0
  02a1248  ori 5, 31, 0
  02a124c  bl 0x15d12c
  02a1250  nop
  02a1254  li 3, 2
  02a1258  stb 3, 32(31)
  02a125c  b 0x2a1334
  02a1260  lis 3, 42
  02a1264  lfs 1, 44(30)
  02a1268  addi 3, 3, 3656
  02a126c  lfs 2, 0(3)
  02a1270  lfs 3, 4(3)
  02a1274  fmuls 1, 1, 2
  02a1278  fdivs 31, 3, 1
  02a127c  lfs 1, 12(30)
  02a1280  lfs 2, 28(30)
  02a1284  fsubs 1, 1, 31
  02a1288  stfs 1, 12(30)
  02a128c  lfs 30, 8(3)
  02a1290  lfs 1, 64(31)
  02a1294  fmuls 2, 2, 30
  02a1298  fmuls 2, 2, 31
  02a129c  bl 0x5025e0
  02a12a0  nop
  02a12a4  stfs 1, 64(31)
  02a12a8  lfs 1, 32(30)
  02a12ac  fmuls 3, 1, 30
  02a12b0  lfs 1, 68(31)
  02a12b4  fmuls 2, 3, 31
  02a12b8  bl 0x5025e0
  02a12bc  nop
  02a12c0  stfs 1, 68(31)
  02a12c4  lfs 1, 36(30)
  02a12c8  fmuls 3, 1, 30
  02a12cc  lfs 1, 72(31)
  02a12d0  fmuls 2, 3, 31
  02a12d4  bl 0x5025e0
  02a12d8  nop
  02a12dc  stfs 1, 72(31)
  02a12e0  lwz 3, 12(30)
  02a12e4  cmpwi 3, 0
  02a12e8  bt 1, 0x2a1334
  02a12ec  lfs 1, 0(30)
  02a12f0  li 3, 0
  02a12f4  stfs 1, 64(31)
  02a12f8  lfs 1, 4(30)
  02a12fc  stfs 1, 68(31)
  02a1300  lfs 1, 8(30)
  02a1304  stfs 1, 72(31)
  02a1308  stw 3, 12(30)
  02a130c  lwz 30, 52(30)
  02a1310  cmpwi 30, -1
  02a1314  bt 2, 0x2a132c
  02a1318  ori 3, 30, 0
  02a131c  li 4, 0
  02a1320  ori 5, 31, 0
  02a1324  bl 0x15d12c
  02a1328  nop
  02a132c  li 3, 1
  02a1330  stb 3, 32(31)
  02a1334  ld 0, 176(1)
  02a1338  mtlr 0
  02a133c  lfd 30, 144(1)
  02a1340  lfd 31, 152(1)
  02a1344  ld 29, 120(1)
  02a1348  ld 30, 128(1)
  02a134c  ld 31, 136(1)
  02a1350  addi 1, 1, 160
  02a1354  blr

M169_002a1358:   # 0x2a1358, 0x14 bytes
  02a1358  lis 3, 123
  02a135c  lis 4, 1
  02a1360  addic 3, 3, -14364
  02a1364  stw 4, 72(3)
  02a1368  blr

M169_002a1370:   # 0x2a1370, 0x1c0 bytes
  02a1370  stdu 1, -368(1)
  02a1374  mflr 0
  02a1378  std 0, 384(1)
  02a137c  lis 4, 161
  02a1380  std 31, 360(1)
  02a1384  lwz 4, 1800(4)
  02a1388  lwz 31, 120(3)
  02a138c  std 30, 352(1)
  02a1390  std 29, 344(1)
  02a1394  cmpwi 4, 2
  02a1398  bt 2, 0x2a1514
  02a139c  lfs 1, 32(31)
  02a13a0  lis 30, 16256
  02a13a4  addic 29, 1, 128
  02a13a8  stfs 1, 112(1)
  02a13ac  lfs 1, 36(31)
  02a13b0  addic 4, 1, 112
  02a13b4  ori 3, 29, 0
  02a13b8  stfs 1, 116(1)
  02a13bc  lfs 1, 40(31)
  02a13c0  stw 30, 124(1)
  02a13c4  stfs 1, 120(1)
  02a13c8  bl 0x500ca4
  02a13cc  nop
  02a13d0  lfs 1, 16(31)
  02a13d4  lis 3, -32640
  02a13d8  stfs 1, 176(1)
  02a13dc  lfs 1, 20(31)
  02a13e0  ori 4, 3, 32896
  02a13e4  li 3, 13
  02a13e8  stfs 1, 180(1)
  02a13ec  lfs 1, 24(31)
  02a13f0  stfs 1, 184(1)
  02a13f4  lfs 1, 28(31)
  02a13f8  stw 4, 256(1)
  02a13fc  stfs 1, 188(1)
  02a1400  stw 4, 260(1)
  02a1404  stw 4, 264(1)
  02a1408  stw 4, 268(1)
  02a140c  bl 0x685c4
  02a1410  nop
  02a1414  std 3, 312(1)
  02a1418  lis 9, 0
  02a141c  li 3, 0
  02a1420  li 4, 0
  02a1424  li 5, 1
  02a1428  li 6, 1
  02a142c  li 7, 1
  02a1430  li 8, 0
  02a1434  ori 9, 9, 65424
  02a1438  bl 0x502fd4
  02a143c  nop
  02a1440  std 3, 320(1)
  02a1444  li 3, 0
  02a1448  li 4, 0
  02a144c  li 5, 0
  02a1450  li 6, 0
  02a1454  li 7, 0
  02a1458  li 8, 0
  02a145c  bl 0x502f08
  02a1460  nop
  02a1464  std 3, 304(1)
  02a1468  li 4, 2
  02a146c  li 3, 0
  02a1470  li 5, 0
  02a1474  li 6, 1
  02a1478  li 7, 128
  02a147c  bl 0x502ea8
  02a1480  nop
  02a1484  std 3, 328(1)
  02a1488  lis 4, -16512
  02a148c  li 6, 0
  02a1490  stw 30, 200(1)
  02a1494  stw 30, 204(1)
  02a1498  lis 3, 161
  02a149c  stw 30, 208(1)
  02a14a0  li 5, 1
  02a14a4  stw 4, 192(1)
  02a14a8  addic 8, 3, 24396
  02a14ac  stw 6, 196(1)
  02a14b0  addic 3, 1, 192
  02a14b4  stw 6, 212(1)
  02a14b8  li 7, 9
  02a14bc  stw 30, 216(1)
  02a14c0  stw 30, 220(1)
  02a14c4  stw 4, 224(1)
  02a14c8  stw 6, 228(1)
  02a14cc  stw 4, 232(1)
  02a14d0  stw 30, 236(1)
  02a14d4  stw 30, 240(1)
  02a14d8  stw 6, 244(1)
  02a14dc  stw 4, 248(1)
  02a14e0  stw 30, 252(1)
  02a14e4  stw 6, 272(1)
  02a14e8  ori 4, 29, 0
  02a14ec  stw 30, 276(1)
  02a14f0  stw 30, 280(1)
  02a14f4  stw 30, 284(1)
  02a14f8  stw 6, 288(1)
  02a14fc  stw 6, 292(1)
  02a1500  stw 30, 296(1)
  02a1504  stw 6, 300(1)
  02a1508  lwz 6, 28(8)
  02a150c  bl 0x72280
  02a1510  nop
  02a1514  ld 0, 384(1)
  02a1518  mtlr 0
  02a151c  ld 29, 344(1)
  02a1520  ld 30, 352(1)
  02a1524  ld 31, 360(1)
  02a1528  addi 1, 1, 368
  02a152c  blr

M169_002a1540:   # 0x2a1540, 0x134 bytes
  02a1540  stdu 1, -176(1)
  02a1544  mflr 0
  02a1548  std 0, 192(1)
  02a154c  stfd 30, 160(1)
  02a1550  stfd 31, 168(1)
  02a1554  std 30, 144(1)
  02a1558  ori 30, 3, 0
  02a155c  std 31, 152(1)
  02a1560  li 3, 160
  02a1564  std 29, 136(1)
  02a1568  std 28, 128(1)
  02a156c  std 27, 120(1)
  02a1570  ori 31, 4, 0
  02a1574  bl 0xefa28
  02a1578  nop
  02a157c  ori 29, 3, 0
  02a1580  cmpwi 29, 0
  02a1584  bt 2, 0x2a1644
  02a1588  li 3, 255
  02a158c  li 4, 127
  02a1590  lis 7, 42
  02a1594  li 5, 1
  02a1598  stb 3, 48(29)
  02a159c  li 6, 0
  02a15a0  sth 4, 50(29)
  02a15a4  addi 3, 7, 5424
  02a15a8  stb 5, 49(29)
  02a15ac  stb 6, 32(29)
  02a15b0  lis 27, 114
  02a15b4  lfs 1, 0(3)
  02a15b8  lfs 2, 44(29)
  02a15bc  lwz 28, 120(29)
  02a15c0  fmuls 1, 2, 1
  02a15c4  stfs 1, 44(29)
  02a15c8  sth 6, 54(28)
  02a15cc  stw 30, 48(28)
  02a15d0  lfs 1, 0(31)
  02a15d4  stfs 1, 16(29)
  02a15d8  lfs 1, 4(31)
  02a15dc  stfs 1, 20(29)
  02a15e0  lfs 1, 8(31)
  02a15e4  stfs 1, 24(29)
  02a15e8  lfs 1, 12(31)
  02a15ec  stfs 1, 28(29)
  02a15f0  stw 6, 12(28)
  02a15f4  stw 6, 8(28)
  02a15f8  stw 6, 4(28)
  02a15fc  stw 6, 0(28)
  02a1600  lfs 31, 4(3)
  02a1604  lfs 30, 8(3)
  02a1608  lfs 3, -3052(27)
  02a160c  fmuls 1, 3, 31
  02a1610  fmuls 2, 3, 30
  02a1614  bl 0xfcbe8
  02a1618  nop
  02a161c  stfs 1, 56(28)
  02a1620  lfs 2, -3052(27)
  02a1624  fmuls 1, 2, 31
  02a1628  fmuls 2, 2, 30
  02a162c  bl 0xfcbe8
  02a1630  nop
  02a1634  ori 3, 29, 0
  02a1638  stfs 1, 60(28)
  02a163c  bl 0xf31a8
  02a1640  nop
  02a1644  ori 3, 29, 0
  02a1648  ld 0, 192(1)
  02a164c  mtlr 0
  02a1650  lfd 30, 160(1)
  02a1654  lfd 31, 168(1)
  02a1658  ld 27, 120(1)
  02a165c  ld 28, 128(1)
  02a1660  ld 29, 136(1)
  02a1664  ld 30, 144(1)
  02a1668  ld 31, 152(1)
  02a166c  addi 1, 1, 176
  02a1670  blr

M169_002a1698:   # 0x2a1698, 0x370 bytes
  02a1698  stdu 1, -208(1)
  02a169c  mflr 0
  02a16a0  std 0, 224(1)
  02a16a4  stfd 27, 168(1)
  02a16a8  stfd 28, 176(1)
  02a16ac  stfd 29, 184(1)
  02a16b0  stfd 30, 192(1)
  02a16b4  stfd 31, 200(1)
  02a16b8  std 31, 160(1)
  02a16bc  std 29, 144(1)
  02a16c0  lis 6, 42
  02a16c4  ori 31, 4, 0
  02a16c8  std 30, 152(1)
  02a16cc  addi 29, 6, 5748
  02a16d0  std 27, 128(1)
  02a16d4  ori 30, 3, 0
  02a16d8  ori 27, 5, 0
  02a16dc  lfs 30, 4(29)
  02a16e0  lfs 29, 8(29)
  02a16e4  fmr 1, 30
  02a16e8  std 28, 136(1)
  02a16ec  lfs 31, 0(29)
  02a16f0  lwz 28, 120(31)
  02a16f4  fmr 2, 29
  02a16f8  bl 0xfcbe8
  02a16fc  nop
  02a1700  fmr 28, 1
  02a1704  fmr 1, 30
  02a1708  fmr 2, 29
  02a170c  bl 0xfcbe8
  02a1710  nop
  02a1714  fmr 27, 1
  02a1718  fmr 1, 30
  02a171c  fmr 2, 29
  02a1720  bl 0xfcbe8
  02a1724  nop
  02a1728  li 3, 1
  02a172c  lfs 2, 44(31)
  02a1730  fmr 30, 1
  02a1734  stb 3, 32(31)
  02a1738  lfs 3, 12(29)
  02a173c  lis 3, 114
  02a1740  fmuls 1, 2, 3
  02a1744  stfs 1, 44(31)
  02a1748  lfs 1, 16(29)
  02a174c  lfs 2, 20(29)
  02a1750  lfs 3, -3052(3)
  02a1754  fmuls 2, 3, 2
  02a1758  fmuls 1, 3, 1
  02a175c  bl 0xfcbe8
  02a1760  nop
  02a1764  fmuls 2, 27, 27
  02a1768  lfs 3, 0(27)
  02a176c  lis 29, 151
  02a1770  addic 29, 29, -25376
  02a1774  fmadds 2, 28, 28, 2
  02a1778  lwz 3, 764(29)
  02a177c  li 4, 0
  02a1780  fmadds 2, 30, 30, 2
  02a1784  cmpwi 3, 0
  02a1788  fsqrts 2, 2
  02a178c  fdivs 1, 1, 2
  02a1790  fsub 4, 31, 2
  02a1794  fsub 8, 31, 2
  02a1798  fsub 5, 2, 31
  02a179c  fsub 6, 31, 2
  02a17a0  fsub 7, 2, 31
  02a17a4  fsub 2, 2, 31
  02a17a8  fmuls 9, 28, 1
  02a17ac  fmuls 10, 27, 1
  02a17b0  fmuls 1, 30, 1
  02a17b4  fsel 4, 4, 31, 9
  02a17b8  fsel 6, 6, 31, 10
  02a17bc  fsel 8, 8, 31, 1
  02a17c0  fsel 4, 5, 4, 9
  02a17c4  fsel 5, 7, 6, 10
  02a17c8  fsel 1, 2, 8, 1
  02a17cc  fadds 2, 4, 3
  02a17d0  stfs 2, 0(28)
  02a17d4  lfs 2, 4(27)
  02a17d8  fadds 2, 5, 2
  02a17dc  stfs 2, 4(28)
  02a17e0  lfs 2, 8(27)
  02a17e4  stw 4, 12(28)
  02a17e8  fadds 1, 1, 2
  02a17ec  stfs 1, 8(28)
  02a17f0  bt 2, 0x2a1834
  02a17f4  bl 0x1122ac
  02a17f8  nop
  02a17fc  cmpwi 3, 0
  02a1800  bt 2, 0x2a1834
  02a1804  lfs 1, 0(28)
  02a1808  lfs 2, 256(29)
  02a180c  fadds 1, 1, 2
  02a1810  lfs 2, 4(28)
  02a1814  lfs 3, 8(28)
  02a1818  stfs 1, 0(28)
  02a181c  lfs 1, 260(29)
  02a1820  fadds 1, 2, 1
  02a1824  stfs 1, 4(28)
  02a1828  lfs 1, 264(29)
  02a182c  fadds 1, 3, 1
  02a1830  stfs 1, 8(28)
  02a1834  lis 3, 42
  02a1838  li 4, 24
  02a183c  vspltisw 2, -1
  02a1840  addi 3, 3, 5748
  02a1844  lis 5, 114
  02a1848  li 6, -3056
  02a184c  vslw 2, 2, 2
  02a1850  <unknown>
  02a1854  li 8, 52
  02a1858  vspltw 3, 3, 0
  02a185c  <unknown>
  02a1860  lwz 9, 8320(29)
  02a1864  addic 3, 1, 112
  02a1868  vmaddfp 2, 4, 3, 2
  02a186c  ori 4, 30, 0
  02a1870  li 5, 0
  02a1874  ori 6, 9, 0
  02a1878  li 7, 0
  02a187c  vctsxs 2, 2, 0
  02a1880  vsplth 2, 2, 1
  02a1884  stvehx 2, 8, 28
  02a1888  lfs 1, 0(30)
  02a188c  stfs 1, 16(31)
  02a1890  lfs 1, 4(30)
  02a1894  stfs 1, 20(31)
  02a1898  lfs 1, 8(30)
  02a189c  stfs 1, 24(31)
  02a18a0  lfs 1, 12(30)
  02a18a4  stfs 1, 28(31)
  02a18a8  lfs 1, 16(9)
  02a18ac  stfs 1, 112(1)
  02a18b0  lfs 1, 20(9)
  02a18b4  stfs 1, 116(1)
  02a18b8  lfs 1, 24(9)
  02a18bc  lfs 2, 8(30)
  02a18c0  stfs 1, 120(1)
  02a18c4  lfs 1, 28(9)
  02a18c8  stfs 2, 120(1)
  02a18cc  stfs 1, 124(1)
  02a18d0  bl 0x57820
  02a18d4  nop
  02a18d8  cmpwi 3, 0
  02a18dc  bt 2, 0x2a19d0
  02a18e0  lis 3, 161
  02a18e4  addic 5, 3, 2368
  02a18e8  lis 3, 42
  02a18ec  lfs 1, 32(5)
  02a18f0  stfs 1, 16(31)
  02a18f4  lfs 2, 36(5)
  02a18f8  stfs 2, 20(31)
  02a18fc  lfs 3, 40(5)
  02a1900  stfs 3, 24(31)
  02a1904  lfs 4, 44(5)
  02a1908  stfs 4, 28(31)
  02a190c  lfs 4, 68(5)
  02a1910  lfs 5, 64(5)
  02a1914  fmuls 6, 4, 4
  02a1918  lfs 7, 72(5)
  02a191c  addi 30, 3, 5748
  02a1920  lis 3, 114
  02a1924  lfs 8, 28(30)
  02a1928  lfs 9, -3048(3)
  02a192c  fmadds 6, 5, 5, 6
  02a1930  fmuls 8, 9, 8
  02a1934  addic 5, 5, 64
  02a1938  ori 3, 28, 0
  02a193c  ori 4, 28, 0
  02a1940  fmadds 6, 7, 7, 6
  02a1944  fsqrts 6, 6
  02a1948  fdivs 8, 8, 6
  02a194c  fsub 9, 31, 6
  02a1950  fsub 10, 31, 6
  02a1954  fsub 11, 31, 6
  02a1958  fsub 12, 6, 31
  02a195c  fsub 13, 6, 31
  02a1960  fsub 6, 6, 31
  02a1964  fmuls 7, 7, 8
  02a1968  fmuls 4, 4, 8
  02a196c  fmuls 5, 5, 8
  02a1970  fsel 8, 9, 31, 7
  02a1974  fsel 9, 10, 31, 4
  02a1978  fsel 10, 11, 31, 5
  02a197c  fsel 7, 12, 8, 7
  02a1980  fsel 4, 13, 9, 4
  02a1984  fsel 5, 6, 10, 5
  02a1988  fadds 3, 3, 7
  02a198c  fadds 2, 2, 4
  02a1990  fadds 1, 1, 5
  02a1994  stfs 3, 24(31)
  02a1998  stfs 2, 20(31)
  02a199c  stfs 1, 16(31)
  02a19a0  bl 0x500608
  02a19a4  nop
  02a19a8  lfs 1, 32(30)
  02a19ac  lfs 2, 0(28)
  02a19b0  lfs 3, 4(28)
  02a19b4  lfs 4, 8(28)
  02a19b8  fmuls 2, 2, 1
  02a19bc  fmuls 3, 3, 1
  02a19c0  fmuls 1, 4, 1
  02a19c4  stfs 2, 0(28)
  02a19c8  stfs 3, 4(28)
  02a19cc  stfs 1, 8(28)
  02a19d0  ld 0, 224(1)
  02a19d4  mtlr 0
  02a19d8  lfd 27, 168(1)
  02a19dc  lfd 28, 176(1)
  02a19e0  lfd 29, 184(1)
  02a19e4  lfd 30, 192(1)
  02a19e8  lfd 31, 200(1)
  02a19ec  ld 27, 128(1)
  02a19f0  ld 28, 136(1)
  02a19f4  ld 29, 144(1)
  02a19f8  ld 30, 152(1)
  02a19fc  ld 31, 160(1)
  02a1a00  addi 1, 1, 208
  02a1a04  blr

# sdk/libc/malloc_lv2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

do_check_any_chunk:   # 0x5d0d68, 0x54 bytes
  05d0d68  addi 0, 4, 8
  05d0d6c  li 10, 1
  05d0d70  clrlwi 0, 0, 28
  05d0d74  mr 9, 4
  05d0d78  cmpwi 7, 0, 0
  05d0d7c  li 11, 1
  05d0d80  bt 30, 0x5d0d98
  05d0d84  lwz 0, 4(4)
  05d0d88  cmpwi 7, 0, 7
  05d0d8c  bt 30, 0x5d0d98
  05d0d90  extsw 3, 11
  05d0d94  blr
  05d0d98  lwz 0, 16(3)
  05d0d9c  cmplw 7, 9, 0
  05d0da0  bf 28, 0x5d0db0
  05d0da4  mr 11, 10
  05d0da8  extsw 3, 11
  05d0dac  blr
  05d0db0  li 10, 0
  05d0db4  mr 11, 10
  05d0db8  b 0x5d0da8

do_check_top_chunk:   # 0x5d0dbc, 0xe8 bytes
  05d0dbc  stdu 1, -144(1)
  05d0dc0  mflr 0
  05d0dc4  std 29, 120(1)
  05d0dc8  std 30, 128(1)
  05d0dcc  mr 29, 4
  05d0dd0  mr 30, 4
  05d0dd4  clrldi 4, 4, 32
  05d0dd8  std 31, 136(1)
  05d0ddc  std 0, 160(1)
  05d0de0  mr 31, 3
  05d0de4  bl 0x5d0d34
  05d0de8  cmpwi 7, 3, 0
  05d0dec  lwz 11, 4(29)
  05d0df0  mr 9, 3
  05d0df4  bt 30, 0x5d0e24
  05d0df8  addi 0, 29, 8
  05d0dfc  clrlwi 0, 0, 28
  05d0e00  cmpwi 7, 0, 0
  05d0e04  bf 30, 0x5d0e48
  05d0e08  lwz 0, 16(31)
  05d0e0c  cmplw 7, 0, 30
  05d0e10  bt 29, 0x5d0e24
  05d0e14  rlwinm 0, 11, 0, 0, 29
  05d0e18  lwz 3, 12(31)
  05d0e1c  cmpw 7, 3, 0
  05d0e20  bt 30, 0x5d0e60
  05d0e24  li 0, 1
  05d0e28  extsw 3, 0
  05d0e2c  ld 0, 160(1)
  05d0e30  ld 29, 120(1)
  05d0e34  ld 30, 128(1)
  05d0e38  mtlr 0
  05d0e3c  ld 31, 136(1)
  05d0e40  addi 1, 1, 144
  05d0e44  blr
  05d0e48  cmpwi 7, 11, 7
  05d0e4c  bf 30, 0x5d0e24
  05d0e50  lwz 0, 16(31)
  05d0e54  cmplw 7, 0, 30
  05d0e58  bf 29, 0x5d0e14
  05d0e5c  b 0x5d0e24
  05d0e60  cmpwi 7, 3, 0
  05d0e64  bt 30, 0x5d0e24
  05d0e68  lwz 0, 4(9)
  05d0e6c  lwz 9, 0(9)
  05d0e70  add 9, 9, 0
  05d0e74  sub 9, 9, 30
  05d0e78  addi 4, 9, -48
  05d0e7c  cmpw 7, 4, 3
  05d0e80  bf 30, 0x5d0e24
  05d0e84  clrlwi 0, 11, 31
  05d0e88  cmpwi 7, 0, 0
  05d0e8c  bt 30, 0x5d0e24
  05d0e90  add 9, 30, 4
  05d0e94  clrldi 9, 9, 32
  05d0e98  lwz 0, 4(9)
  05d0e9c  clrlwi 0, 0, 31
  05d0ea0  b 0x5d0e28

do_check_inuse_chunk:   # 0x5d0ea4, 0xb0 bytes
  05d0ea4  stdu 1, -128(1)
  05d0ea8  mflr 0
  05d0eac  std 31, 120(1)
  05d0eb0  mr 31, 4
  05d0eb4  clrldi 4, 4, 32
  05d0eb8  std 30, 112(1)
  05d0ebc  std 0, 144(1)
  05d0ec0  bl 0x5d0d68
  05d0ec4  cmpwi 7, 3, 0
  05d0ec8  li 3, 1
  05d0ecc  bf 30, 0x5d0f38
  05d0ed0  lwz 11, 4(31)
  05d0ed4  rlwinm 9, 11, 0, 30, 30
  05d0ed8  rlwinm 0, 11, 0, 0, 29
  05d0edc  cmpwi 7, 9, 0
  05d0ee0  add 0, 0, 31
  05d0ee4  clrldi 9, 0, 32
  05d0ee8  bt 30, 0x5d0f38
  05d0eec  lwz 0, 4(9)
  05d0ef0  clrlwi 9, 11, 31
  05d0ef4  clrlwi 0, 0, 31
  05d0ef8  cmpwi 6, 9, 0
  05d0efc  cmpwi 7, 0, 0
  05d0f00  bt 30, 0x5d0f38
  05d0f04  li 3, 0
  05d0f08  bf 26, 0x5d0f38
  05d0f0c  lwz 9, 0(31)
  05d0f10  sub 9, 31, 9
  05d0f14  clrldi 11, 9, 32
  05d0f18  lwz 0, 4(11)
  05d0f1c  rlwinm 0, 0, 0, 0, 29
  05d0f20  add 9, 9, 0
  05d0f24  xor 9, 31, 9
  05d0f28  srawi 11, 9, 31
  05d0f2c  xor 0, 11, 9
  05d0f30  sub 0, 11, 0
  05d0f34  srwi 3, 0, 31
  05d0f38  ld 0, 144(1)
  05d0f3c  extsw 3, 3
  05d0f40  ld 30, 112(1)
  05d0f44  ld 31, 120(1)
  05d0f48  mtlr 0
  05d0f4c  addi 1, 1, 128
  05d0f50  blr

do_check_free_chunk:   # 0x5d0f54, 0x140 bytes
  05d0f54  stdu 1, -144(1)
  05d0f58  mflr 0
  05d0f5c  std 28, 112(1)
  05d0f60  std 30, 128(1)
  05d0f64  mr 28, 4
  05d0f68  mr 30, 4
  05d0f6c  clrldi 4, 4, 32
  05d0f70  std 29, 120(1)
  05d0f74  std 31, 136(1)
  05d0f78  std 0, 160(1)
  05d0f7c  mr 31, 3
  05d0f80  bl 0x5d0d68
  05d0f84  cmpwi 7, 3, 0
  05d0f88  lwz 29, 4(28)
  05d0f8c  bf 30, 0x5d1014
  05d0f90  rlwinm 0, 29, 0, 30, 30
  05d0f94  cmpwi 7, 0, 0
  05d0f98  bf 30, 0x5d1014
  05d0f9c  rlwinm 11, 29, 0, 0, 29
  05d0fa0  add 8, 28, 11
  05d0fa4  clrldi 10, 8, 32
  05d0fa8  lwz 7, 4(10)
  05d0fac  clrlwi 0, 7, 31
  05d0fb0  cmpwi 7, 0, 0
  05d0fb4  bf 30, 0x5d1014
  05d0fb8  lwz 0, 20(31)
  05d0fbc  cmpw 7, 0, 28
  05d0fc0  bt 30, 0x5d103c
  05d0fc4  lwz 3, 24(31)
  05d0fc8  cmpw 7, 28, 3
  05d0fcc  bt 30, 0x5d103c
  05d0fd0  xori 0, 11, 4
  05d0fd4  cmplwi 7, 11, 15
  05d0fd8  srawi 6, 0, 31
  05d0fdc  xor 9, 6, 0
  05d0fe0  sub 9, 6, 9
  05d0fe4  srwi 0, 9, 31
  05d0fe8  bf 29, 0x5d1018
  05d0fec  rlwinm 0, 29, 0, 28, 29
  05d0ff0  cmpwi 7, 0, 0
  05d0ff4  bf 30, 0x5d1014
  05d0ff8  addi 0, 28, 8
  05d0ffc  clrlwi 0, 0, 28
  05d1000  cmpwi 7, 0, 0
  05d1004  bf 30, 0x5d1014
  05d1008  lwz 0, 0(10)
  05d100c  cmpw 7, 0, 11
  05d1010  bt 30, 0x5d1044
  05d1014  li 0, 1
  05d1018  extsw 3, 0
  05d101c  ld 0, 160(1)
  05d1020  ld 28, 112(1)
  05d1024  ld 29, 120(1)
  05d1028  mtlr 0
  05d102c  ld 30, 128(1)
  05d1030  ld 31, 136(1)
  05d1034  addi 1, 1, 144
  05d1038  blr
  05d103c  li 0, 0
  05d1040  b 0x5d1018
  05d1044  clrlwi 0, 29, 31
  05d1048  cmpwi 7, 0, 0
  05d104c  bt 30, 0x5d1014
  05d1050  cmpw 7, 8, 3
  05d1054  bt 30, 0x5d1064
  05d1058  rlwinm 0, 7, 0, 30, 30
  05d105c  cmpwi 7, 0, 0
  05d1060  bt 30, 0x5d1014
  05d1064  lwz 9, 8(28)
  05d1068  lwz 0, 12(9)
  05d106c  cmpw 7, 0, 30
  05d1070  bf 30, 0x5d1014
  05d1074  lwz 9, 12(28)
  05d1078  lwz 0, 8(9)
  05d107c  xor 0, 30, 0
  05d1080  srawi 6, 0, 31
  05d1084  xor 9, 6, 0
  05d1088  sub 9, 6, 9
  05d108c  srwi 0, 9, 31
  05d1090  b 0x5d1018

do_check_malloced_chunk:   # 0x5d1094, 0x9c bytes
  05d1094  stdu 1, -128(1)
  05d1098  mflr 0
  05d109c  cmpwi 7, 4, 0
  05d10a0  std 0, 144(1)
  05d10a4  addi 0, 4, -8
  05d10a8  std 30, 112(1)
  05d10ac  clrldi 9, 0, 32
  05d10b0  std 31, 120(1)
  05d10b4  mr 30, 5
  05d10b8  mr 4, 9
  05d10bc  clrldi 3, 3, 32
  05d10c0  li 11, 0
  05d10c4  bt 30, 0x5d1114
  05d10c8  lwz 31, 4(9)
  05d10cc  bl 0x5d0ea4
  05d10d0  cmpwi 7, 3, 0
  05d10d4  rlwinm 0, 31, 0, 28, 29
  05d10d8  li 11, 1
  05d10dc  cmpwi 6, 0, 0
  05d10e0  rlwinm 0, 31, 0, 0, 29
  05d10e4  bf 30, 0x5d1114
  05d10e8  cmplwi 7, 0, 15
  05d10ec  bf 26, 0x5d1114
  05d10f0  cmplw 6, 0, 30
  05d10f4  bf 29, 0x5d1114
  05d10f8  addi 4, 30, 16
  05d10fc  bt 24, 0x5d1114
  05d1100  cmplw 7, 0, 4
  05d1104  li 3, 1
  05d1108  bf 28, 0x5d1110
  05d110c  li 3, 0
  05d1110  mr 11, 3
  05d1114  ld 0, 144(1)
  05d1118  extsw 3, 11
  05d111c  ld 30, 112(1)
  05d1120  ld 31, 120(1)
  05d1124  mtlr 0
  05d1128  addi 1, 1, 128
  05d112c  blr

do_check_tree:   # 0x5d1130, 0x2f4 bytes
  05d1130  stdu 1, -160(1)
  05d1134  mflr 0
  05d1138  std 30, 144(1)
  05d113c  std 0, 176(1)
  05d1140  lwz 0, 4(4)
  05d1144  std 26, 112(1)
  05d1148  rlwinm 30, 0, 0, 0, 29
  05d114c  lwz 8, 28(4)
  05d1150  std 29, 136(1)
  05d1154  srwi 9, 30, 8
  05d1158  std 27, 120(1)
  05d115c  cmpwi 7, 9, 0
  05d1160  std 28, 128(1)
  05d1164  std 31, 152(1)
  05d1168  mr 26, 4
  05d116c  li 29, 0
  05d1170  bt 30, 0x5d1180
  05d1174  cmplwi 7, 9, 65535
  05d1178  li 29, 31
  05d117c  bf 29, 0x5d13b4
  05d1180  cmpw 7, 29, 8
  05d1184  bt 30, 0x5d11b8
  05d1188  li 3, 1
  05d118c  ld 0, 176(1)
  05d1190  extsw 3, 3
  05d1194  ld 26, 112(1)
  05d1198  ld 27, 120(1)
  05d119c  mtlr 0
  05d11a0  ld 28, 128(1)
  05d11a4  ld 29, 136(1)
  05d11a8  ld 30, 144(1)
  05d11ac  ld 31, 152(1)
  05d11b0  addi 1, 1, 160
  05d11b4  blr
  05d11b8  cmplwi 7, 30, 255
  05d11bc  bf 29, 0x5d1188
  05d11c0  srwi 9, 29, 1
  05d11c4  clrlwi 0, 29, 31
  05d11c8  addi 11, 9, 7
  05d11cc  li 10, 1
  05d11d0  addi 9, 9, 8
  05d11d4  slw 0, 0, 11
  05d11d8  slw 9, 10, 9
  05d11dc  or 9, 9, 0
  05d11e0  cmplw 7, 9, 30
  05d11e4  bt 29, 0x5d1188
  05d11e8  cmpwi 7, 29, 31
  05d11ec  bt 30, 0x5d1218
  05d11f0  addi 0, 29, 1
  05d11f4  srwi 9, 0, 1
  05d11f8  clrlwi 0, 0, 31
  05d11fc  addi 11, 9, 7
  05d1200  addi 9, 9, 8
  05d1204  slw 0, 0, 11
  05d1208  slw 9, 10, 9
  05d120c  or 9, 9, 0
  05d1210  cmplw 7, 9, 30
  05d1214  bf 29, 0x5d1188
  05d1218  clrldi 27, 3, 32
  05d121c  mr 31, 26
  05d1220  li 28, 0
  05d1224  b 0x5d1314
  05d1228  cmpwi 7, 28, 0
  05d122c  bf- 30, 0x5d1188
  05d1230  cmpw 7, 31, 0
  05d1234  bt- 30, 0x5d1188
  05d1238  clrldi 9, 0, 32
  05d123c  lwz 0, 16(9)
  05d1240  cmpw 7, 0, 31
  05d1244  bt 30, 0x5d1260
  05d1248  lwz 0, 20(9)
  05d124c  cmpw 7, 0, 31
  05d1250  bt 30, 0x5d1260
  05d1254  lwz 0, 0(9)
  05d1258  cmpw 7, 0, 31
  05d125c  bf- 30, 0x5d1188
  05d1260  lwz 9, 16(31)
  05d1264  cmpwi 7, 9, 0
  05d1268  bt 30, 0x5d1294
  05d126c  clrldi 4, 9, 32
  05d1270  lwz 0, 24(4)
  05d1274  cmpw 7, 0, 31
  05d1278  bf- 30, 0x5d1188
  05d127c  cmpw 7, 31, 9
  05d1280  bt- 30, 0x5d1188
  05d1284  mr 3, 27
  05d1288  bl 0x5d1130
  05d128c  cmpwi 7, 3, 0
  05d1290  bf- 30, 0x5d1188
  05d1294  lwz 9, 20(31)
  05d1298  cmpwi 7, 9, 0
  05d129c  bt 30, 0x5d12c8
  05d12a0  clrldi 4, 9, 32
  05d12a4  lwz 0, 24(4)
  05d12a8  cmpw 7, 0, 31
  05d12ac  bf- 30, 0x5d1188
  05d12b0  cmpw 7, 31, 9
  05d12b4  bt- 30, 0x5d1188
  05d12b8  mr 3, 27
  05d12bc  bl 0x5d1130
  05d12c0  cmpwi 7, 3, 0
  05d12c4  bf- 30, 0x5d1188
  05d12c8  lwz 11, 16(31)
  05d12cc  cmpwi 7, 11, 0
  05d12d0  bt 30, 0x5d1300
  05d12d4  lwz 10, 20(31)
  05d12d8  cmpwi 7, 10, 0
  05d12dc  bt 30, 0x5d1300
  05d12e0  clrldi 11, 11, 32
  05d12e4  clrldi 10, 10, 32
  05d12e8  lwz 9, 4(11)
  05d12ec  lwz 0, 4(10)
  05d12f0  rlwinm 9, 9, 0, 0, 29
  05d12f4  rlwinm 0, 0, 0, 0, 29
  05d12f8  cmplw 7, 9, 0
  05d12fc  bf- 28, 0x5d1188
  05d1300  mr 28, 31
  05d1304  lwz 11, 8(31)
  05d1308  cmpw 7, 26, 11
  05d130c  mr 31, 11
  05d1310  bt 30, 0x5d140c
  05d1314  mr 3, 27
  05d1318  clrldi 4, 31, 32
  05d131c  bl 0x5d0d68
  05d1320  cmpwi 7, 3, 0
  05d1324  bf- 30, 0x5d1188
  05d1328  lwz 0, 28(31)
  05d132c  cmpw 7, 0, 29
  05d1330  bf- 30, 0x5d1188
  05d1334  lwz 9, 4(31)
  05d1338  rlwinm 0, 9, 0, 0, 29
  05d133c  cmpw 7, 0, 30
  05d1340  bf- 30, 0x5d1188
  05d1344  rlwinm 0, 9, 0, 30, 30
  05d1348  cmpwi 7, 0, 0
  05d134c  bf- 30, 0x5d1188
  05d1350  add 9, 30, 31
  05d1354  clrldi 9, 9, 32
  05d1358  lwz 0, 4(9)
  05d135c  clrlwi 0, 0, 31
  05d1360  cmpwi 7, 0, 0
  05d1364  bf- 30, 0x5d1188
  05d1368  lwz 11, 8(31)
  05d136c  clrldi 9, 11, 32
  05d1370  lwz 0, 12(9)
  05d1374  cmpw 7, 0, 31
  05d1378  bf- 30, 0x5d1188
  05d137c  lwz 9, 12(31)
  05d1380  lwz 0, 8(9)
  05d1384  cmpw 7, 0, 31
  05d1388  bf- 30, 0x5d1188
  05d138c  lwz 0, 24(31)
  05d1390  cmpwi 7, 0, 0
  05d1394  bf 30, 0x5d1228
  05d1398  lwz 0, 16(31)
  05d139c  cmpwi 7, 0, 0
  05d13a0  bf- 30, 0x5d1188
  05d13a4  lwz 0, 20(31)
  05d13a8  cmpwi 7, 0, 0
  05d13ac  bt+ 30, 0x5d1308
  05d13b0  b 0x5d1188
  05d13b4  addi 10, 9, -256
  05d13b8  rlwinm 10, 10, 16, 28, 28
  05d13bc  slw 9, 9, 10
  05d13c0  addi 0, 9, -4096
  05d13c4  rlwinm 0, 0, 16, 29, 29
  05d13c8  slw 9, 9, 0
  05d13cc  add 10, 10, 0
  05d13d0  addi 11, 9, -16384
  05d13d4  rlwinm 11, 11, 16, 30, 30
  05d13d8  slw 9, 9, 11
  05d13dc  add 10, 10, 11
  05d13e0  srwi 9, 9, 15
  05d13e4  sub 9, 9, 10
  05d13e8  addi 0, 9, 21
  05d13ec  addi 9, 9, 14
  05d13f0  srw 0, 30, 0
  05d13f4  slwi 9, 9, 1
  05d13f8  clrlwi 0, 0, 31
  05d13fc  add 29, 9, 0
  05d1400  cmpw 7, 29, 8
  05d1404  bf 30, 0x5d1188
  05d1408  b 0x5d11b8
  05d140c  srawi 0, 28, 31
  05d1410  xor 9, 0, 28
  05d1414  sub 9, 9, 0
  05d1418  addi 9, 9, -1
  05d141c  srwi 3, 9, 31
  05d1420  b 0x5d118c

bin_find:   # 0x5d1424, 0x1c8 bytes
  05d1424  lwz 0, 4(4)
  05d1428  mr 6, 4
  05d142c  mr 7, 3
  05d1430  rlwinm 8, 0, 0, 0, 29
  05d1434  srwi 9, 8, 3
  05d1438  cmplwi 7, 9, 31
  05d143c  bt 29, 0x5d149c
  05d1440  lwz 0, 0(3)
  05d1444  srw 0, 0, 9
  05d1448  clrlwi 0, 0, 31
  05d144c  cmpwi 7, 0, 0
  05d1450  bt 30, 0x5d1490
  05d1454  addi 0, 3, 36
  05d1458  slwi 9, 9, 3
  05d145c  add 0, 0, 9
  05d1460  cmpw 7, 4, 0
  05d1464  bt 30, 0x5d15e0
  05d1468  clrldi 9, 0, 32
  05d146c  lwz 9, 8(9)
  05d1470  cmpw 7, 0, 9
  05d1474  bt 30, 0x5d1490
  05d1478  cmpw 7, 6, 9
  05d147c  clrldi 11, 9, 32
  05d1480  bt 30, 0x5d15e0
  05d1484  lwz 9, 8(11)
  05d1488  cmpw 7, 0, 9
  05d148c  bf 30, 0x5d1478
  05d1490  li 3, 0
  05d1494  extsw 3, 3
  05d1498  blr
  05d149c  srwi 9, 8, 8
  05d14a0  li 10, 0
  05d14a4  cmpwi 7, 9, 0
  05d14a8  li 11, 1
  05d14ac  bf 30, 0x5d1544
  05d14b0  lwz 0, 4(3)
  05d14b4  clrldi 7, 7, 32
  05d14b8  and 9, 11, 0
  05d14bc  cmpwi 9, 0
  05d14c0  bt 2, 0x5d1490
  05d14c4  slwi 9, 10, 2
  05d14c8  cmpwi 7, 10, 31
  05d14cc  addi 9, 9, 288
  05d14d0  li 5, 0
  05d14d4  extsw 9, 9
  05d14d8  add 9, 7, 9
  05d14dc  lwz 9, 12(9)
  05d14e0  bt 30, 0x5d14ec
  05d14e4  srwi 0, 10, 1
  05d14e8  subfic 5, 0, 25
  05d14ec  cmpwi 7, 9, 0
  05d14f0  bt 30, 0x5d1490
  05d14f4  clrldi 11, 9, 32
  05d14f8  lwz 0, 4(11)
  05d14fc  rlwinm 0, 0, 0, 0, 29
  05d1500  cmpw 7, 0, 8
  05d1504  bt 30, 0x5d15c0
  05d1508  slw 10, 8, 5
  05d150c  b 0x5d1520
  05d1510  lwz 0, 4(11)
  05d1514  rlwinm 0, 0, 0, 0, 29
  05d1518  cmpw 7, 0, 8
  05d151c  bt 30, 0x5d15c0
  05d1520  rlwinm 9, 10, 3, 29, 29
  05d1524  slwi 10, 10, 1
  05d1528  addi 9, 9, 16
  05d152c  extsw 9, 9
  05d1530  lwzx 9, 11, 9
  05d1534  cmpwi 7, 9, 0
  05d1538  clrldi 11, 9, 32
  05d153c  bf 30, 0x5d1510
  05d1540  b 0x5d1490
  05d1544  cmplwi 7, 9, 65535
  05d1548  li 10, 31
  05d154c  lis 11, -32768
  05d1550  bt 29, 0x5d14b0
  05d1554  addi 10, 9, -256
  05d1558  clrldi 7, 7, 32
  05d155c  rlwinm 10, 10, 16, 28, 28
  05d1560  slw 9, 9, 10
  05d1564  addi 0, 9, -4096
  05d1568  rlwinm 0, 0, 16, 29, 29
  05d156c  slw 9, 9, 0
  05d1570  add 10, 10, 0
  05d1574  addi 11, 9, -16384
  05d1578  rlwinm 11, 11, 16, 30, 30
  05d157c  slw 9, 9, 11
  05d1580  add 10, 10, 11
  05d1584  srwi 9, 9, 15
  05d1588  li 11, 1
  05d158c  sub 9, 9, 10
  05d1590  addi 0, 9, 21
  05d1594  addi 9, 9, 14
  05d1598  srw 0, 8, 0
  05d159c  slwi 9, 9, 1
  05d15a0  clrlwi 0, 0, 31
  05d15a4  add 10, 9, 0
  05d15a8  lwz 0, 4(3)
  05d15ac  slw 11, 11, 10
  05d15b0  and 9, 11, 0
  05d15b4  cmpwi 9, 0
  05d15b8  bf 2, 0x5d14c4
  05d15bc  b 0x5d1490
  05d15c0  mr 0, 9
  05d15c4  cmpw 7, 0, 6
  05d15c8  clrldi 11, 0, 32
  05d15cc  bt 30, 0x5d15e0
  05d15d0  lwz 0, 8(11)
  05d15d4  cmpw 7, 0, 9
  05d15d8  bf 30, 0x5d15c4
  05d15dc  b 0x5d1490
  05d15e0  li 3, 1
  05d15e4  extsw 3, 3
  05d15e8  blr

init_top:   # 0x5d15ec, 0x64 bytes
  05d15ec  addi 0, 4, 8
  05d15f0  mr 9, 5
  05d15f4  clrlwi 0, 0, 28
  05d15f8  li 5, 0
  05d15fc  cmpwi 7, 0, 0
  05d1600  subfic 11, 0, 16
  05d1604  li 0, 0
  05d1608  bt 30, 0x5d1614
  05d160c  clrlwi 5, 11, 28
  05d1610  mr 0, 5
  05d1614  add 0, 4, 0
  05d1618  lwz 8, -24308(2)
  05d161c  sub 9, 9, 5
  05d1620  clrldi 11, 0, 32
  05d1624  stw 9, 12(3)
  05d1628  ori 10, 9, 1
  05d162c  add 9, 0, 9
  05d1630  stw 0, 24(3)
  05d1634  clrldi 9, 9, 32
  05d1638  li 0, 48
  05d163c  stw 10, 4(11)
  05d1640  stw 0, 4(9)
  05d1644  lwz 11, 16(8)
  05d1648  stw 11, 28(3)
  05d164c  blr

FUN_005d1650:   # 0x5d1650, 0x30 bytes
  05d1650  li 0, 32
  05d1654  addi 3, 3, 36
  05d1658  li 11, 0
  05d165c  mtctr 0
  05d1660  slwi 0, 11, 3
  05d1664  addi 11, 11, 1
  05d1668  add 0, 3, 0
  05d166c  clrldi 9, 0, 32
  05d1670  stw 0, 8(9)
  05d1674  stw 0, 12(9)
  05d1678  bdnz 0x5d1660
  05d167c  blr

FUN_005d1680:   # 0x5d1680, 0x3c bytes
  05d1680  cmpwi 7, 3, 0
  05d1684  addi 0, 3, -8
  05d1688  clrldi 9, 0, 32
  05d168c  bt 30, 0x5d16b0
  05d1690  lwz 9, 4(9)
  05d1694  rlwinm 0, 9, 0, 30, 30
  05d1698  rlwinm 9, 9, 0, 0, 29
  05d169c  cmpwi 7, 0, 0
  05d16a0  addi 0, 9, -4
  05d16a4  bt 30, 0x5d16b0
  05d16a8  rlwinm 3, 0, 0, 0, 29
  05d16ac  blr
  05d16b0  li 0, 0
  05d16b4  rlwinm 3, 0, 0, 0, 29
  05d16b8  blr

init_mparams:   # 0x5d16bc, 0x6c bytes
  05d16bc  lwz 8, -24308(2)
  05d16c0  mflr 0
  05d16c4  stdu 1, -112(1)
  05d16c8  std 0, 128(1)
  05d16cc  lwz 0, 4(8)
  05d16d0  cmpwi 7, 0, 0
  05d16d4  bf 30, 0x5d1714
  05d16d8  lwz 10, -24304(2)
  05d16dc  li 0, 7
  05d16e0  lis 9, 22616
  05d16e4  stw 0, 20(8)
  05d16e8  ori 9, 9, 22616
  05d16ec  lwz 11, 0(10)
  05d16f0  stw 9, 0(8)
  05d16f4  addi 0, 11, -1
  05d16f8  stw 11, 8(8)
  05d16fc  and 9, 11, 0
  05d1700  stw 11, 12(8)
  05d1704  cmpwi 9, 0
  05d1708  stw 0, 16(8)
  05d170c  stw 11, 4(8)
  05d1710  bf- 2, 0x5d1724
  05d1714  ld 0, 128(1)
  05d1718  addi 1, 1, 112
  05d171c  mtlr 0
  05d1720  blr
  05d1724  bl 0x5c4840

PREACTION:   # 0x5d172c, 0x40 bytes
  05d172c  addi 3, 3, 448
  05d1730  mflr 0
  05d1734  li 4, 0
  05d1738  clrldi 3, 3, 32
  05d173c  stdu 1, -112(1)
  05d1740  std 0, 128(1)
  05d1744  bl 0x6504c4
  05d1748  ld 2, 40(1)
  05d174c  cmpwi 7, 3, 0
  05d1750  bf- 30, 0x5d1768
  05d1754  ld 0, 128(1)
  05d1758  li 3, 0
  05d175c  addi 1, 1, 112
  05d1760  mtlr 0
  05d1764  blr
  05d1768  bl 0x5c4840

POSTACTION:   # 0x5d1770, 0x318 bytes
  05d1770  stdu 1, -224(1)
  05d1774  mflr 0
  05d1778  std 28, 192(1)
  05d177c  lwz 28, -24300(2)
  05d1780  std 0, 240(1)
  05d1784  std 23, 152(1)
  05d1788  std 24, 160(1)
  05d178c  std 25, 168(1)
  05d1790  lwz 9, 0(28)
  05d1794  mr 25, 5
  05d1798  std 26, 176(1)
  05d179c  cmpwi 7, 9, 0
  05d17a0  std 27, 184(1)
  05d17a4  std 29, 200(1)
  05d17a8  std 21, 136(1)
  05d17ac  std 22, 144(1)
  05d17b0  std 30, 208(1)
  05d17b4  std 31, 216(1)
  05d17b8  mr 29, 3
  05d17bc  mr 26, 4
  05d17c0  mr 24, 6
  05d17c4  mr 23, 7
  05d17c8  mr 27, 3
  05d17cc  bt 30, 0x5d17f0
  05d17d0  lwz 31, -24296(2)
  05d17d4  lwz 0, 0(31)
  05d17d8  cmpwi 7, 0, 0
  05d17dc  bt 30, 0x5d17f0
  05d17e0  clrldi 11, 9, 32
  05d17e4  ld 0, 16(11)
  05d17e8  cmpdi 7, 0, 0
  05d17ec  bf 30, 0x5d1844
  05d17f0  addi 3, 27, 448
  05d17f4  clrldi 3, 3, 32
  05d17f8  bl 0x6504e4
  05d17fc  ld 2, 40(1)
  05d1800  cmpwi 7, 3, 0
  05d1804  bf- 30, 0x5d1a84
  05d1808  ld 0, 240(1)
  05d180c  ld 21, 136(1)
  05d1810  ld 22, 144(1)
  05d1814  mtlr 0
  05d1818  ld 23, 152(1)
  05d181c  ld 24, 160(1)
  05d1820  ld 25, 168(1)
  05d1824  ld 26, 176(1)
  05d1828  ld 27, 184(1)
  05d182c  ld 28, 192(1)
  05d1830  ld 29, 200(1)
  05d1834  ld 30, 208(1)
  05d1838  ld 31, 216(1)
  05d183c  addi 1, 1, 224
  05d1840  blr
  05d1844  lwz 30, -24308(2)
  05d1848  ld 0, 0(11)
  05d184c  ld 9, 24(30)
  05d1850  addi 9, 9, 32
  05d1854  cmpld 7, 9, 0
  05d1858  bt 28, 0x5d1870
  05d185c  ld 0, 24(11)
  05d1860  cmpdi 7, 0, 0
  05d1864  bt 30, 0x5d17f0
  05d1868  li 0, 0
  05d186c  std 0, 24(30)
  05d1870  mftb 21, 268
  05d1874  addi 3, 1, 112
  05d1878  li 22, 0
  05d187c  bl 0x6505c4
  05d1880  ld 2, 40(1)
  05d1884  lwz 6, 24(29)
  05d1888  cmpwi 7, 6, 0
  05d188c  li 12, 0
  05d1890  bt 30, 0x5d1958
  05d1894  addi 5, 27, 472
  05d1898  lwz 9, 12(29)
  05d189c  lwz 22, 428(29)
  05d18a0  cmpwi 7, 5, 0
  05d18a4  sub 9, 22, 9
  05d18a8  addi 12, 9, -48
  05d18ac  bt 30, 0x5d1958
  05d18b0  lwz 8, 0(5)
  05d18b4  li 9, 0
  05d18b8  addi 0, 8, 8
  05d18bc  clrlwi 0, 0, 28
  05d18c0  cmpwi 7, 0, 0
  05d18c4  bt 30, 0x5d18d0
  05d18c8  subfic 0, 0, 16
  05d18cc  clrlwi 9, 0, 28
  05d18d0  add 10, 9, 8
  05d18d4  cmplw 7, 10, 8
  05d18d8  bt 28, 0x5d194c
  05d18dc  lwz 0, 4(5)
  05d18e0  add 7, 8, 0
  05d18e4  cmplw 7, 7, 10
  05d18e8  bf 29, 0x5d194c
  05d18ec  cmpw 7, 6, 10
  05d18f0  bt 30, 0x5d194c
  05d18f4  clrldi 9, 10, 32
  05d18f8  lwz 11, 4(9)
  05d18fc  cmpwi 7, 11, 7
  05d1900  bf 30, 0x5d1928
  05d1904  b 0x5d194c
  05d1908  cmplw 7, 7, 9
  05d190c  bf 29, 0x5d194c
  05d1910  cmpw 7, 6, 9
  05d1914  bt 30, 0x5d194c
  05d1918  clrldi 9, 9, 32
  05d191c  lwz 11, 4(9)
  05d1920  cmpwi 7, 11, 7
  05d1924  bt 30, 0x5d194c
  05d1928  rlwinm 0, 11, 0, 30, 30
  05d192c  rlwinm 9, 11, 0, 0, 29
  05d1930  cmpwi 7, 0, 0
  05d1934  bf 30, 0x5d193c
  05d1938  sub 12, 12, 9
  05d193c  add 9, 9, 10
  05d1940  cmplw 7, 8, 9
  05d1944  mr 10, 9
  05d1948  bf 29, 0x5d1908
  05d194c  lwz 5, 8(5)
  05d1950  cmpwi 7, 5, 0
  05d1954  bf 30, 0x5d18b0
  05d1958  lwz 10, 0(31)
  05d195c  ld 31, 24(30)
  05d1960  ld 0, 112(1)
  05d1964  add 10, 10, 31
  05d1968  addi 29, 31, 32
  05d196c  addi 5, 10, 4
  05d1970  clrldi 10, 10, 32
  05d1974  addi 6, 5, 4
  05d1978  clrldi 5, 5, 32
  05d197c  addi 7, 6, 4
  05d1980  clrldi 6, 6, 32
  05d1984  addi 8, 7, 4
  05d1988  clrldi 7, 7, 32
  05d198c  addi 11, 8, 4
  05d1990  clrldi 8, 8, 32
  05d1994  addi 9, 11, 4
  05d1998  clrldi 11, 11, 32
  05d199c  addi 4, 9, 4
  05d19a0  clrldi 9, 9, 32
  05d19a4  clrldi 3, 4, 32
  05d19a8  stw 21, 0(10)
  05d19ac  std 29, 24(30)
  05d19b0  stw 0, 0(5)
  05d19b4  addi 4, 4, 4
  05d19b8  stw 24, 0(6)
  05d19bc  stw 23, 0(7)
  05d19c0  stw 26, 0(8)
  05d19c4  stw 25, 0(11)
  05d19c8  stw 22, 0(9)
  05d19cc  stw 12, 0(3)
  05d19d0  mr 9, 1
  05d19d4  clrldi 9, 9, 32
  05d19d8  ld 9, 0(9)
  05d19dc  cmpwi 7, 9, 0
  05d19e0  bt 30, 0x5d1a00
  05d19e4  lwz 8, 0(28)
  05d19e8  addi 0, 31, 40
  05d19ec  mr 11, 9
  05d19f0  addi 29, 31, 36
  05d19f4  ld 9, 0(8)
  05d19f8  cmpld 7, 0, 9
  05d19fc  bf 29, 0x5d1a3c
  05d1a00  clrldi 11, 4, 32
  05d1a04  lwz 10, 0(28)
  05d1a08  ld 9, 24(30)
  05d1a0c  li 0, 0
  05d1a10  addi 9, 9, 4
  05d1a14  stw 0, 0(11)
  05d1a18  std 9, 24(30)
  05d1a1c  std 9, 32(10)
  05d1a20  b 0x5d17f0
  05d1a24  addi 9, 29, 8
  05d1a28  ld 0, 0(8)
  05d1a2c  addi 10, 29, 4
  05d1a30  cmpld 7, 9, 0
  05d1a34  bt 29, 0x5d1a5c
  05d1a38  mr 29, 10
  05d1a3c  clrldi 9, 11, 32
  05d1a40  clrldi 10, 4, 32
  05d1a44  addi 4, 4, 4
  05d1a48  ld 11, 0(9)
  05d1a4c  ld 0, 16(9)
  05d1a50  cmpwi 7, 11, 0
  05d1a54  stw 0, 0(10)
  05d1a58  bf 30, 0x5d1a24
  05d1a5c  std 29, 24(30)
  05d1a60  clrldi 11, 4, 32
  05d1a64  lwz 10, 0(28)
  05d1a68  ld 9, 24(30)
  05d1a6c  li 0, 0
  05d1a70  addi 9, 9, 4
  05d1a74  stw 0, 0(11)
  05d1a78  std 9, 24(30)
  05d1a7c  std 9, 32(10)
  05d1a80  b 0x5d17f0
  05d1a84  bl 0x5c4840

internal_is_heap_empty:   # 0x5d1a8c, 0x14c bytes
  05d1a8c  stdu 1, -160(1)
  05d1a90  mflr 0
  05d1a94  std 28, 128(1)
  05d1a98  clrldi 28, 3, 32
  05d1a9c  std 30, 144(1)
  05d1aa0  std 31, 152(1)
  05d1aa4  mr 30, 3
  05d1aa8  mr 31, 3
  05d1aac  mr 3, 28
  05d1ab0  std 27, 120(1)
  05d1ab4  std 29, 136(1)
  05d1ab8  std 0, 176(1)
  05d1abc  bl 0x5d172c
  05d1ac0  cmpwi 7, 3, 0
  05d1ac4  bf 30, 0x5d1b78
  05d1ac8  lwz 0, 24(31)
  05d1acc  cmpwi 7, 0, 0
  05d1ad0  bt 30, 0x5d1bc8
  05d1ad4  lwz 29, -24308(2)
  05d1ad8  lwz 27, 436(31)
  05d1adc  lwz 0, 32(29)
  05d1ae0  cmpw 7, 31, 0
  05d1ae4  bt 30, 0x5d1ba4
  05d1ae8  li 31, 0
  05d1aec  li 5, -1
  05d1af0  mr 3, 28
  05d1af4  clrldi 5, 5, 32
  05d1af8  li 4, 0
  05d1afc  li 6, 3
  05d1b00  li 7, 0
  05d1b04  bl 0x5d1770
  05d1b08  xori 0, 27, 560
  05d1b0c  lwz 11, 32(29)
  05d1b10  srawi 10, 0, 31
  05d1b14  cmpw 7, 30, 11
  05d1b18  xor 9, 10, 0
  05d1b1c  sub 9, 9, 10
  05d1b20  addi 9, 9, -1
  05d1b24  srwi 0, 9, 31
  05d1b28  bt 30, 0x5d1b54
  05d1b2c  extsw 3, 0
  05d1b30  ld 0, 176(1)
  05d1b34  ld 27, 120(1)
  05d1b38  ld 28, 128(1)
  05d1b3c  mtlr 0
  05d1b40  ld 29, 136(1)
  05d1b44  ld 30, 144(1)
  05d1b48  ld 31, 152(1)
  05d1b4c  addi 1, 1, 160
  05d1b50  blr
  05d1b54  slwi 0, 31, 6
  05d1b58  cmpwi 7, 27, 0
  05d1b5c  xor 0, 27, 0
  05d1b60  srawi 11, 0, 31
  05d1b64  xor 9, 11, 0
  05d1b68  sub 9, 9, 11
  05d1b6c  addi 9, 9, -1
  05d1b70  srwi 0, 9, 31
  05d1b74  bf 30, 0x5d1b2c
  05d1b78  li 0, 1
  05d1b7c  ld 27, 120(1)
  05d1b80  ld 28, 128(1)
  05d1b84  extsw 3, 0
  05d1b88  ld 0, 176(1)
  05d1b8c  ld 29, 136(1)
  05d1b90  ld 30, 144(1)
  05d1b94  mtlr 0
  05d1b98  ld 31, 152(1)
  05d1b9c  addi 1, 1, 160
  05d1ba0  blr
  05d1ba4  addi 9, 31, 472
  05d1ba8  cmpwi 7, 9, 0
  05d1bac  bt 30, 0x5d1ae8
  05d1bb0  li 31, 0
  05d1bb4  lwz 9, 8(9)
  05d1bb8  addi 31, 31, 1
  05d1bbc  cmpwi 7, 9, 0
  05d1bc0  bf 30, 0x5d1bb4
  05d1bc4  b 0x5d1aec
  05d1bc8  lwz 29, -24308(2)
  05d1bcc  li 27, 0
  05d1bd0  li 31, 0
  05d1bd4  b 0x5d1aec

thunk_FUN_005d1a8c:   # 0x5d1bd8, 0x4 bytes
  05d1bd8  b 0x5d1a8c

FUN_005d1bdc:   # 0x5d1bdc, 0xc bytes
  05d1bdc  lwz 9, -24308(2)
  05d1be0  lwz 3, 32(9)
  05d1be4  b 0x5d1a8c

mspace_malloc_stats_fast:   # 0x5d1be8, 0xc4 bytes
  05d1be8  stdu 1, -160(1)
  05d1bec  mflr 0
  05d1bf0  std 29, 136(1)
  05d1bf4  clrldi 29, 3, 32
  05d1bf8  std 31, 152(1)
  05d1bfc  mr 31, 3
  05d1c00  mr 3, 29
  05d1c04  std 26, 112(1)
  05d1c08  std 27, 120(1)
  05d1c0c  std 28, 128(1)
  05d1c10  std 30, 144(1)
  05d1c14  mr 27, 4
  05d1c18  mr 30, 4
  05d1c1c  std 0, 176(1)
  05d1c20  bl 0x5d172c
  05d1c24  cmpwi 7, 3, 0
  05d1c28  li 5, -1
  05d1c2c  li 26, 0
  05d1c30  li 4, 0
  05d1c34  clrldi 5, 5, 32
  05d1c38  li 6, 3
  05d1c3c  li 7, 0
  05d1c40  mr 3, 29
  05d1c44  li 28, 0
  05d1c48  bf 30, 0x5d1c80
  05d1c4c  lwz 0, 24(31)
  05d1c50  li 29, 0
  05d1c54  cmpwi 7, 0, 0
  05d1c58  bt 30, 0x5d1c68
  05d1c5c  lwz 29, 436(31)
  05d1c60  lwz 26, 432(31)
  05d1c64  lwz 28, 428(31)
  05d1c68  bl 0x5d1770
  05d1c6c  cmpwi 7, 27, 0
  05d1c70  bt 30, 0x5d1c80
  05d1c74  stw 29, 8(30)
  05d1c78  stw 26, 0(30)
  05d1c7c  stw 28, 4(30)
  05d1c80  ld 0, 176(1)
  05d1c84  li 3, 0
  05d1c88  ld 26, 112(1)
  05d1c8c  ld 27, 120(1)
  05d1c90  mtlr 0
  05d1c94  ld 28, 128(1)
  05d1c98  ld 29, 136(1)
  05d1c9c  ld 30, 144(1)
  05d1ca0  ld 31, 152(1)
  05d1ca4  addi 1, 1, 160
  05d1ca8  blr

mspace_malloc_stats:   # 0x5d1cac, 0x5b8 bytes
  05d1cac  mfcr 12
  05d1cb0  stdu 1, -208(1)
  05d1cb4  std 26, 160(1)
  05d1cb8  clrldi 26, 3, 32
  05d1cbc  std 25, 152(1)
  05d1cc0  mr 25, 3
  05d1cc4  mr 3, 26
  05d1cc8  std 20, 112(1)
  05d1ccc  std 21, 120(1)
  05d1cd0  std 22, 128(1)
  05d1cd4  std 23, 136(1)
  05d1cd8  std 24, 144(1)
  05d1cdc  std 27, 168(1)
  05d1ce0  std 28, 176(1)
  05d1ce4  std 29, 184(1)
  05d1ce8  std 30, 192(1)
  05d1cec  std 31, 200(1)
  05d1cf0  mr 21, 4
  05d1cf4  mr 20, 4
  05d1cf8  stw 12, 216(1)
  05d1cfc  mflr 0
  05d1d00  std 0, 224(1)
  05d1d04  bl 0x5d172c
  05d1d08  cmpwi 7, 3, 0
  05d1d0c  bf 30, 0x5d20d4
  05d1d10  lwz 23, 0(25)
  05d1d14  li 28, 0
  05d1d18  addi 24, 25, 36
  05d1d1c  li 22, 1
  05d1d20  b 0x5d1d30
  05d1d24  addi 28, 28, 1
  05d1d28  cmpdi 7, 28, 32
  05d1d2c  bt 30, 0x5d1e8c
  05d1d30  slwi 9, 28, 3
  05d1d34  slw 0, 22, 28
  05d1d38  add 29, 24, 9
  05d1d3c  and 0, 23, 0
  05d1d40  clrldi 11, 29, 32
  05d1d44  srawi 10, 0, 31
  05d1d48  mr 27, 28
  05d1d4c  xor 9, 10, 0
  05d1d50  lwz 30, 12(11)
  05d1d54  sub 9, 9, 10
  05d1d58  cmpw 7, 29, 30
  05d1d5c  addi 9, 9, -1
  05d1d60  srwi 9, 9, 31
  05d1d64  bt 30, 0x5d1e78
  05d1d68  cmpwi 7, 9, 0
  05d1d6c  bf 30, 0x5d1d24
  05d1d70  clrldi 31, 30, 32
  05d1d74  mr 3, 26
  05d1d78  mr 4, 31
  05d1d7c  bl 0x5d0f54
  05d1d80  cmpwi 7, 3, 0
  05d1d84  lwz 0, 4(31)
  05d1d88  rlwinm 11, 0, 0, 0, 29
  05d1d8c  bf 30, 0x5d1e0c
  05d1d90  srwi 9, 11, 3
  05d1d94  add 0, 11, 30
  05d1d98  cmpw 7, 9, 27
  05d1d9c  clrldi 10, 0, 32
  05d1da0  mr 3, 26
  05d1da4  mr 4, 10
  05d1da8  bf 30, 0x5d1e0c
  05d1dac  lwz 0, 12(31)
  05d1db0  cmpw 4, 29, 0
  05d1db4  clrldi 9, 0, 32
  05d1db8  mr 30, 0
  05d1dbc  bt 18, 0x5d1dd0
  05d1dc0  lwz 0, 4(9)
  05d1dc4  rlwinm 0, 0, 0, 0, 29
  05d1dc8  cmpw 7, 0, 11
  05d1dcc  bf 30, 0x5d1e0c
  05d1dd0  lwz 0, 4(10)
  05d1dd4  cmpwi 7, 0, 7
  05d1dd8  bt 30, 0x5d1de8
  05d1ddc  bl 0x5d0ea4
  05d1de0  cmpwi 7, 3, 0
  05d1de4  bf 30, 0x5d1e0c
  05d1de8  bt 18, 0x5d1d24
  05d1dec  clrldi 31, 30, 32
  05d1df0  mr 3, 26
  05d1df4  mr 4, 31
  05d1df8  bl 0x5d0f54
  05d1dfc  cmpwi 7, 3, 0
  05d1e00  lwz 0, 4(31)
  05d1e04  rlwinm 11, 0, 0, 0, 29
  05d1e08  bt 30, 0x5d1d90
  05d1e0c  li 5, -1
  05d1e10  mr 3, 26
  05d1e14  clrldi 5, 5, 32
  05d1e18  li 4, 0
  05d1e1c  li 6, 3
  05d1e20  li 7, 0
  05d1e24  bl 0x5d1770
  05d1e28  li 3, 1
  05d1e2c  ld 0, 224(1)
  05d1e30  extsw 3, 3
  05d1e34  lwz 12, 216(1)
  05d1e38  ld 20, 112(1)
  05d1e3c  mtlr 0
  05d1e40  ld 21, 120(1)
  05d1e44  mtocrf 8, 12
  05d1e48  ld 22, 128(1)
  05d1e4c  ld 23, 136(1)
  05d1e50  ld 24, 144(1)
  05d1e54  ld 25, 152(1)
  05d1e58  ld 26, 160(1)
  05d1e5c  ld 27, 168(1)
  05d1e60  ld 28, 176(1)
  05d1e64  ld 29, 184(1)
  05d1e68  ld 30, 192(1)
  05d1e6c  ld 31, 200(1)
  05d1e70  addi 1, 1, 208
  05d1e74  blr
  05d1e78  cmpwi 7, 9, 0
  05d1e7c  bt- 30, 0x5d1e0c
  05d1e80  addi 28, 28, 1
  05d1e84  cmpdi 7, 28, 32
  05d1e88  bf 30, 0x5d1d30
  05d1e8c  addi 31, 25, 300
  05d1e90  li 30, 0
  05d1e94  li 29, 1
  05d1e98  b 0x5d1ea8
  05d1e9c  cmpwi 7, 30, 31
  05d1ea0  addi 30, 30, 1
  05d1ea4  bt 30, 0x5d1f00
  05d1ea8  lwz 9, 4(25)
  05d1eac  slw 0, 29, 30
  05d1eb0  lwz 4, 0(31)
  05d1eb4  addi 31, 31, 4
  05d1eb8  and 0, 0, 9
  05d1ebc  cmpwi 7, 4, 0
  05d1ec0  srawi 10, 0, 31
  05d1ec4  xor 9, 10, 0
  05d1ec8  sub 9, 9, 10
  05d1ecc  addi 9, 9, -1
  05d1ed0  srwi 9, 9, 31
  05d1ed4  bt 30, 0x5d20dc
  05d1ed8  cmpwi 7, 9, 0
  05d1edc  clrldi 4, 4, 32
  05d1ee0  mr 3, 26
  05d1ee4  bf 30, 0x5d1e9c
  05d1ee8  bl 0x5d1130
  05d1eec  cmpwi 7, 3, 0
  05d1ef0  bf 30, 0x5d1e0c
  05d1ef4  cmpwi 7, 30, 31
  05d1ef8  addi 30, 30, 1
  05d1efc  bf 30, 0x5d1ea8
  05d1f00  lwz 31, 8(25)
  05d1f04  cmpwi 7, 31, 0
  05d1f08  bf 30, 0x5d21f0
  05d1f0c  lwz 4, 24(25)
  05d1f10  cmpwi 7, 4, 0
  05d1f14  bt 30, 0x5d20e8
  05d1f18  clrldi 4, 4, 32
  05d1f1c  mr 3, 26
  05d1f20  bl 0x5d0dbc
  05d1f24  cmpwi 7, 3, 0
  05d1f28  bf 30, 0x5d1e0c
  05d1f2c  lwz 4, 24(25)
  05d1f30  lwz 0, 12(25)
  05d1f34  lwz 9, 4(4)
  05d1f38  rlwinm 9, 9, 0, 0, 29
  05d1f3c  cmpw 7, 9, 0
  05d1f40  bf 30, 0x5d1e0c
  05d1f44  cmpwi 7, 9, 0
  05d1f48  bt 30, 0x5d1e0c
  05d1f4c  mr 3, 26
  05d1f50  bl 0x5d1424
  05d1f54  cmpwi 7, 3, 0
  05d1f58  bf 30, 0x5d1e0c
  05d1f5c  lwz 0, 24(25)
  05d1f60  cmpwi 7, 0, 0
  05d1f64  bt- 30, 0x5d20e8
  05d1f68  addi 28, 25, 472
  05d1f6c  lwz 9, 12(25)
  05d1f70  cmpwi 7, 28, 0
  05d1f74  addi 27, 9, 48
  05d1f78  bt- 30, 0x5d2254
  05d1f7c  lwz 11, 0(28)
  05d1f80  li 4, 0
  05d1f84  addi 0, 11, 8
  05d1f88  clrlwi 0, 0, 28
  05d1f8c  cmpwi 7, 0, 0
  05d1f90  bt 30, 0x5d1f9c
  05d1f94  subfic 0, 0, 16
  05d1f98  clrlwi 4, 0, 28
  05d1f9c  add 30, 4, 11
  05d1fa0  clrldi 9, 30, 32
  05d1fa4  lwz 29, 4(9)
  05d1fa8  clrlwi 0, 29, 31
  05d1fac  cmpwi 7, 0, 0
  05d1fb0  bt- 30, 0x5d1e0c
  05d1fb4  cmplw 7, 11, 30
  05d1fb8  mr 24, 30
  05d1fbc  bt- 29, 0x5d2248
  05d1fc0  lwz 0, 4(28)
  05d1fc4  add 0, 11, 0
  05d1fc8  cmplw 7, 0, 30
  05d1fcc  bf- 29, 0x5d2248
  05d1fd0  lwz 0, 24(25)
  05d1fd4  cmpw 7, 0, 30
  05d1fd8  bt- 30, 0x5d2248
  05d1fdc  cmpwi 7, 29, 7
  05d1fe0  bt- 30, 0x5d2248
  05d1fe4  li 31, 0
  05d1fe8  b 0x5d2098
  05d1fec  lwz 0, 20(25)
  05d1ff0  cmpw 7, 0, 30
  05d1ff4  bt 30, 0x5d200c
  05d1ff8  mr 3, 26
  05d1ffc  clrldi 4, 30, 32
  05d2000  bl 0x5d1424
  05d2004  cmpwi 7, 3, 0
  05d2008  bt- 30, 0x5d1e0c
  05d200c  cmpwi 7, 31, 0
  05d2010  bt 30, 0x5d2028
  05d2014  clrldi 9, 31, 32
  05d2018  lwz 0, 4(9)
  05d201c  rlwinm 0, 0, 0, 30, 30
  05d2020  cmpwi 7, 0, 0
  05d2024  bt- 30, 0x5d1e0c
  05d2028  clrldi 31, 30, 32
  05d202c  mr 3, 26
  05d2030  mr 4, 31
  05d2034  bl 0x5d0f54
  05d2038  cmpwi 7, 3, 0
  05d203c  bf- 30, 0x5d1e0c
  05d2040  lwz 0, 4(31)
  05d2044  rlwinm 9, 29, 0, 0, 29
  05d2048  lwz 11, 0(28)
  05d204c  rlwinm 0, 0, 0, 0, 29
  05d2050  add 27, 27, 9
  05d2054  add 4, 0, 24
  05d2058  cmplw 7, 11, 4
  05d205c  mr 24, 4
  05d2060  bt- 29, 0x5d2248
  05d2064  lwz 0, 4(28)
  05d2068  add 0, 11, 0
  05d206c  cmplw 7, 0, 4
  05d2070  bf- 29, 0x5d2248
  05d2074  lwz 0, 24(25)
  05d2078  cmpw 7, 0, 4
  05d207c  bt- 30, 0x5d2248
  05d2080  clrldi 9, 4, 32
  05d2084  lwz 29, 4(9)
  05d2088  cmpwi 7, 29, 7
  05d208c  bt- 30, 0x5d2248
  05d2090  mr 31, 30
  05d2094  mr 30, 4
  05d2098  rlwinm 0, 29, 0, 30, 30
  05d209c  cmpwi 7, 0, 0
  05d20a0  bt 30, 0x5d1fec
  05d20a4  clrldi 31, 30, 32
  05d20a8  mr 3, 26
  05d20ac  mr 4, 31
  05d20b0  bl 0x5d1424
  05d20b4  cmpwi 7, 3, 0
  05d20b8  bf- 30, 0x5d1e0c
  05d20bc  mr 3, 26
  05d20c0  mr 4, 31
  05d20c4  bl 0x5d0ea4
  05d20c8  cmpwi 7, 3, 0
  05d20cc  bt+ 30, 0x5d2040
  05d20d0  b 0x5d1e0c
  05d20d4  li 3, 0
  05d20d8  b 0x5d1e2c
  05d20dc  cmpwi 7, 9, 0
  05d20e0  bf 30, 0x5d1e9c
  05d20e4  b 0x5d1e0c
  05d20e8  lwz 30, 428(25)
  05d20ec  lwz 29, 432(25)
  05d20f0  cmplw 7, 30, 29
  05d20f4  bt 29, 0x5d1e0c
  05d20f8  lwz 7, 24(25)
  05d20fc  cmpwi 7, 7, 0
  05d2100  bt 30, 0x5d2238
  05d2104  addi 5, 25, 472
  05d2108  lwz 9, 12(25)
  05d210c  cmpwi 7, 5, 0
  05d2110  sub 9, 30, 9
  05d2114  addi 31, 9, 8
  05d2118  bt 30, 0x5d21b8
  05d211c  lwz 8, 0(5)
  05d2120  li 9, 0
  05d2124  addi 0, 8, 8
  05d2128  clrlwi 0, 0, 28
  05d212c  cmpwi 7, 0, 0
  05d2130  bt 30, 0x5d213c
  05d2134  subfic 0, 0, 16
  05d2138  clrlwi 9, 0, 28
  05d213c  add 10, 9, 8
  05d2140  cmplw 7, 8, 10
  05d2144  bt 29, 0x5d21ac
  05d2148  lwz 0, 4(5)
  05d214c  add 6, 8, 0
  05d2150  cmplw 7, 10, 6
  05d2154  bf 28, 0x5d21ac
  05d2158  cmpw 7, 7, 10
  05d215c  bt 30, 0x5d21ac
  05d2160  clrldi 9, 10, 32
  05d2164  b 0x5d21a0
  05d2168  rlwinm 0, 11, 0, 30, 30
  05d216c  rlwinm 9, 11, 0, 0, 29
  05d2170  cmpwi 7, 0, 0
  05d2174  bf 30, 0x5d217c
  05d2178  sub 31, 31, 9
  05d217c  add 0, 9, 10
  05d2180  cmplw 7, 8, 0
  05d2184  clrldi 9, 0, 32
  05d2188  cmplw 6, 0, 6
  05d218c  cmpw 1, 7, 0
  05d2190  mr 10, 0
  05d2194  bt 29, 0x5d21ac
  05d2198  bf 24, 0x5d21ac
  05d219c  bt 6, 0x5d21ac
  05d21a0  lwz 11, 4(9)
  05d21a4  cmpwi 7, 11, 7
  05d21a8  bf 30, 0x5d2168
  05d21ac  lwz 5, 8(5)
  05d21b0  cmpwi 7, 5, 0
  05d21b4  bf 30, 0x5d211c
  05d21b8  li 5, -1
  05d21bc  mr 3, 26
  05d21c0  clrldi 5, 5, 32
  05d21c4  li 4, 0
  05d21c8  li 6, 3
  05d21cc  li 7, 0
  05d21d0  bl 0x5d1770
  05d21d4  cmpwi 7, 20, 0
  05d21d8  bt 30, 0x5d20d4
  05d21dc  li 3, 0
  05d21e0  stw 31, 8(21)
  05d21e4  stw 29, 0(21)
  05d21e8  stw 30, 4(21)
  05d21ec  b 0x5d1e2c
  05d21f0  lwz 30, 20(25)
  05d21f4  mr 3, 26
  05d21f8  mr 4, 30
  05d21fc  bl 0x5d0d68
  05d2200  cmpwi 7, 3, 0
  05d2204  bf 30, 0x5d1e0c
  05d2208  lwz 0, 4(30)
  05d220c  rlwinm 0, 0, 0, 0, 29
  05d2210  cmpw 7, 0, 31
  05d2214  bf 30, 0x5d1e0c
  05d2218  cmplwi 7, 0, 15
  05d221c  bf 29, 0x5d1e0c
  05d2220  mr 4, 30
  05d2224  mr 3, 26
  05d2228  bl 0x5d1424
  05d222c  cmpwi 7, 3, 0
  05d2230  bf 30, 0x5d1e0c
  05d2234  b 0x5d1f0c
  05d2238  li 29, 0
  05d223c  li 30, 0
  05d2240  li 31, 0
  05d2244  b 0x5d21b8
  05d2248  lwz 28, 8(28)
  05d224c  cmpwi 7, 28, 0
  05d2250  bf+ 30, 0x5d1f7c
  05d2254  lwz 30, 428(25)
  05d2258  cmplw 7, 27, 30
  05d225c  bt+ 29, 0x5d1e0c
  05d2260  b 0x5d20ec

mspace_free:   # 0x5d2264, 0xe34 bytes
  05d2264  cmpwi 7, 4, 0
  05d2268  mflr 0
  05d226c  stdu 1, -208(1)
  05d2270  std 26, 160(1)
  05d2274  std 20, 112(1)
  05d2278  std 21, 120(1)
  05d227c  std 22, 128(1)
  05d2280  std 23, 136(1)
  05d2284  std 24, 144(1)
  05d2288  std 25, 152(1)
  05d228c  std 27, 168(1)
  05d2290  std 28, 176(1)
  05d2294  std 29, 184(1)
  05d2298  std 30, 192(1)
  05d229c  std 31, 200(1)
  05d22a0  std 0, 224(1)
  05d22a4  mr 26, 4
  05d22a8  bt 30, 0x5d2498
  05d22ac  clrldi 24, 3, 32
  05d22b0  mr 30, 3
  05d22b4  mr 3, 24
  05d22b8  bl 0x5d172c
  05d22bc  cmpwi 7, 3, 0
  05d22c0  bf 30, 0x5d2498
  05d22c4  addi 31, 26, -8
  05d22c8  lwz 7, 16(30)
  05d22cc  cmplw 7, 7, 31
  05d22d0  mr 29, 31
  05d22d4  bt 29, 0x5d2490
  05d22d8  clrldi 10, 31, 32
  05d22dc  lwz 11, 4(10)
  05d22e0  rldicl 0, 11, 63, 63
  05d22e4  cmpwi 7, 0, 0
  05d22e8  bt- 30, 0x5d2490
  05d22ec  clrlwi 9, 11, 31
  05d22f0  lwz 0, 436(30)
  05d22f4  rlwinm 28, 11, 0, 0, 29
  05d22f8  cmpwi 7, 9, 0
  05d22fc  sub 0, 0, 28
  05d2300  add 27, 31, 28
  05d2304  stw 0, 436(30)
  05d2308  bt 30, 0x5d24d8
  05d230c  cmplw 7, 27, 29
  05d2310  bf 29, 0x5d2490
  05d2314  clrldi 8, 27, 32
  05d2318  lwz 11, 4(8)
  05d231c  clrlwi 0, 11, 31
  05d2320  cmpwi 7, 0, 0
  05d2324  bt- 30, 0x5d2490
  05d2328  rlwinm 0, 11, 0, 30, 30
  05d232c  mr 25, 8
  05d2330  cmpwi 7, 0, 0
  05d2334  bf 30, 0x5d2540
  05d2338  lwz 0, 24(30)
  05d233c  cmpw 7, 0, 27
  05d2340  bt 30, 0x5d2930
  05d2344  lwz 22, 20(30)
  05d2348  cmpw 7, 22, 27
  05d234c  bt 30, 0x5d2c8c
  05d2350  rlwinm 20, 11, 0, 0, 29
  05d2354  srwi 23, 20, 3
  05d2358  cmplwi 7, 23, 31
  05d235c  bt 29, 0x5d2848
  05d2360  lwz 21, 12(8)
  05d2364  lwz 22, 8(8)
  05d2368  cmpw 7, 27, 21
  05d236c  bt 30, 0x5d2eb4
  05d2370  cmpw 7, 27, 22
  05d2374  bt 30, 0x5d2ec8
  05d2378  lwz 0, 4(25)
  05d237c  slwi 27, 23, 3
  05d2380  rlwinm 0, 0, 0, 0, 29
  05d2384  cmpw 7, 0, 27
  05d2388  bt 30, 0x5d239c
  05d238c  lwz 3, -24268(2)
  05d2390  lwz 4, -24288(2)
  05d2394  bl 0x5cef7c
  05d2398  nop
  05d239c  cmpw 7, 22, 21
  05d23a0  bt 30, 0x5d2e50
  05d23a4  addi 0, 30, 36
  05d23a8  add 9, 0, 27
  05d23ac  cmpw 7, 22, 9
  05d23b0  bt 30, 0x5d23c0
  05d23b4  lwz 0, 16(30)
  05d23b8  cmplw 7, 0, 22
  05d23bc  bt 29, 0x5d2490
  05d23c0  cmpw 7, 21, 9
  05d23c4  bt 30, 0x5d23e4
  05d23c8  lwz 0, 16(30)
  05d23cc  li 9, 1
  05d23d0  cmplw 7, 0, 21
  05d23d4  bf 29, 0x5d23dc
  05d23d8  li 9, 0
  05d23dc  cmpwi 7, 9, 0
  05d23e0  bt- 30, 0x5d2490
  05d23e4  clrldi 11, 22, 32
  05d23e8  clrldi 9, 21, 32
  05d23ec  stw 21, 12(11)
  05d23f0  stw 22, 8(9)
  05d23f4  lwz 22, 20(30)
  05d23f8  add 28, 28, 20
  05d23fc  clrldi 27, 31, 32
  05d2400  add 9, 28, 29
  05d2404  cmpw 7, 22, 31
  05d2408  clrldi 9, 9, 32
  05d240c  ori 0, 28, 1
  05d2410  stw 0, 4(27)
  05d2414  stw 28, 0(9)
  05d2418  bt 30, 0x5d2e0c
  05d241c  srwi 29, 28, 3
  05d2420  cmplwi 7, 29, 31
  05d2424  bt 29, 0x5d262c
  05d2428  cmplwi 7, 28, 15
  05d242c  addi 9, 30, 36
  05d2430  slwi 0, 29, 3
  05d2434  add 28, 9, 0
  05d2438  bf 29, 0x5d291c
  05d243c  li 0, 1
  05d2440  lwz 9, 0(30)
  05d2444  slw 0, 0, 29
  05d2448  and 11, 9, 0
  05d244c  cmpwi 11, 0
  05d2450  bf 2, 0x5d247c
  05d2454  or 0, 9, 0
  05d2458  mr 11, 28
  05d245c  clrldi 10, 28, 32
  05d2460  stw 0, 0(30)
  05d2464  clrldi 9, 11, 32
  05d2468  stw 31, 8(10)
  05d246c  stw 11, 8(27)
  05d2470  stw 31, 12(9)
  05d2474  stw 28, 12(27)
  05d2478  b 0x5d24e8
  05d247c  clrldi 10, 28, 32
  05d2480  lwz 0, 16(30)
  05d2484  lwz 11, 8(10)
  05d2488  cmplw 7, 0, 11
  05d248c  bf+ 29, 0x5d2464
  05d2490  bl 0x5c4840
  05d2494  nop
  05d2498  ld 0, 224(1)
  05d249c  ld 20, 112(1)
  05d24a0  ld 21, 120(1)
  05d24a4  mtlr 0
  05d24a8  ld 22, 128(1)
  05d24ac  ld 23, 136(1)
  05d24b0  ld 24, 144(1)
  05d24b4  ld 25, 152(1)
  05d24b8  ld 26, 160(1)
  05d24bc  ld 27, 168(1)
  05d24c0  ld 28, 176(1)
  05d24c4  ld 29, 184(1)
  05d24c8  ld 30, 192(1)
  05d24cc  ld 31, 200(1)
  05d24d0  addi 1, 1, 208
  05d24d4  blr
  05d24d8  lwz 9, 0(10)
  05d24dc  clrlwi 0, 9, 31
  05d24e0  cmpwi 7, 0, 0
  05d24e4  bt 30, 0x5d2564
  05d24e8  li 5, -1
  05d24ec  ld 0, 224(1)
  05d24f0  mr 3, 24
  05d24f4  ld 20, 112(1)
  05d24f8  clrldi 7, 26, 32
  05d24fc  ld 21, 120(1)
  05d2500  ld 22, 128(1)
  05d2504  clrldi 5, 5, 32
  05d2508  ld 23, 136(1)
  05d250c  li 4, 0
  05d2510  ld 24, 144(1)
  05d2514  li 6, 0
  05d2518  ld 25, 152(1)
  05d251c  mtlr 0
  05d2520  ld 26, 160(1)
  05d2524  ld 27, 168(1)
  05d2528  ld 28, 176(1)
  05d252c  ld 29, 184(1)
  05d2530  ld 30, 192(1)
  05d2534  ld 31, 200(1)
  05d2538  addi 1, 1, 208
  05d253c  b 0x5d1770
  05d2540  add 9, 28, 29
  05d2544  clrldi 27, 31, 32
  05d2548  clrldi 9, 9, 32
  05d254c  rlwinm 0, 11, 0, 0, 30
  05d2550  ori 11, 28, 1
  05d2554  stw 0, 4(8)
  05d2558  stw 11, 4(27)
  05d255c  stw 28, 0(9)
  05d2560  b 0x5d241c
  05d2564  sub 29, 31, 9
  05d2568  cmplw 7, 7, 29
  05d256c  bt- 29, 0x5d2490
  05d2570  lwz 0, 20(30)
  05d2574  add 28, 28, 9
  05d2578  cmpw 7, 0, 29
  05d257c  bt 30, 0x5d2c50
  05d2580  srwi 25, 9, 3
  05d2584  cmplwi 7, 25, 31
  05d2588  bt 29, 0x5d26f0
  05d258c  clrldi 31, 29, 32
  05d2590  lwz 22, 12(31)
  05d2594  lwz 23, 8(31)
  05d2598  cmpw 7, 29, 22
  05d259c  bt 30, 0x5d2e98
  05d25a0  cmpw 7, 29, 23
  05d25a4  bt 30, 0x5d2e84
  05d25a8  lwz 0, 4(31)
  05d25ac  slwi 31, 25, 3
  05d25b0  rlwinm 0, 0, 0, 0, 29
  05d25b4  cmpw 7, 0, 31
  05d25b8  bt 30, 0x5d25cc
  05d25bc  lwz 3, -24280(2)
  05d25c0  lwz 4, -24288(2)
  05d25c4  bl 0x5cef7c
  05d25c8  nop
  05d25cc  cmpw 7, 23, 22
  05d25d0  bt 30, 0x5d2e28
  05d25d4  addi 0, 30, 36
  05d25d8  add 0, 0, 31
  05d25dc  cmpw 7, 23, 0
  05d25e0  bt 30, 0x5d25f0
  05d25e4  lwz 7, 16(30)
  05d25e8  cmplw 7, 7, 23
  05d25ec  bt 29, 0x5d2490
  05d25f0  cmpw 7, 22, 0
  05d25f4  bt 30, 0x5d2614
  05d25f8  lwz 7, 16(30)
  05d25fc  li 0, 1
  05d2600  cmplw 7, 7, 22
  05d2604  bf 29, 0x5d260c
  05d2608  li 0, 0
  05d260c  cmpwi 7, 0, 0
  05d2610  bt- 30, 0x5d2490
  05d2614  clrldi 9, 22, 32
  05d2618  clrldi 11, 23, 32
  05d261c  mr 31, 29
  05d2620  stw 23, 8(9)
  05d2624  stw 22, 12(11)
  05d2628  b 0x5d230c
  05d262c  srwi 9, 28, 8
  05d2630  li 10, 0
  05d2634  cmpwi 7, 9, 0
  05d2638  li 11, 1
  05d263c  bt 30, 0x5d26a4
  05d2640  cmplwi 7, 9, 65535
  05d2644  li 10, 31
  05d2648  lis 11, -32768
  05d264c  bt 29, 0x5d26a4
  05d2650  addi 10, 9, -256
  05d2654  rlwinm 10, 10, 16, 28, 28
  05d2658  slw 9, 9, 10
  05d265c  addi 0, 9, -4096
  05d2660  rlwinm 0, 0, 16, 29, 29
  05d2664  slw 9, 9, 0
  05d2668  add 10, 10, 0
  05d266c  addi 11, 9, -16384
  05d2670  rlwinm 11, 11, 16, 30, 30
  05d2674  slw 9, 9, 11
  05d2678  add 10, 10, 11
  05d267c  srwi 9, 9, 15
  05d2680  li 11, 1
  05d2684  sub 9, 9, 10
  05d2688  addi 0, 9, 21
  05d268c  addi 9, 9, 14
  05d2690  srw 0, 28, 0
  05d2694  slwi 9, 9, 1
  05d2698  clrlwi 0, 0, 31
  05d269c  add 10, 9, 0
  05d26a0  slw 11, 11, 10
  05d26a4  stw 10, 28(27)
  05d26a8  lwz 7, 4(30)
  05d26ac  slwi 9, 10, 2
  05d26b0  and 0, 7, 11
  05d26b4  add 9, 9, 30
  05d26b8  cmpwi 0, 0
  05d26bc  li 0, 0
  05d26c0  addi 8, 9, 300
  05d26c4  stw 0, 16(27)
  05d26c8  stw 0, 20(27)
  05d26cc  bf 2, 0x5d27c4
  05d26d0  clrldi 9, 8, 32
  05d26d4  or 0, 7, 11
  05d26d8  stw 0, 4(30)
  05d26dc  stw 31, 0(9)
  05d26e0  stw 31, 8(27)
  05d26e4  stw 8, 24(27)
  05d26e8  stw 31, 12(27)
  05d26ec  b 0x5d24e8
  05d26f0  clrldi 5, 29, 32
  05d26f4  lwz 10, 12(5)
  05d26f8  lwz 4, 24(5)
  05d26fc  cmpw 7, 29, 10
  05d2700  bt 30, 0x5d2cb8
  05d2704  lwz 0, 8(5)
  05d2708  cmplw 7, 7, 0
  05d270c  bt- 29, 0x5d2490
  05d2710  clrldi 9, 0, 32
  05d2714  clrldi 11, 10, 32
  05d2718  stw 10, 12(9)
  05d271c  stw 0, 8(11)
  05d2720  cmpwi 7, 4, 0
  05d2724  bt 30, 0x5d2840
  05d2728  lwz 11, 28(5)
  05d272c  slwi 9, 11, 2
  05d2730  add 9, 9, 30
  05d2734  addi 9, 9, 300
  05d2738  clrldi 9, 9, 32
  05d273c  lwz 0, 0(9)
  05d2740  cmpw 7, 0, 29
  05d2744  bt 30, 0x5d2dcc
  05d2748  cmplw 7, 7, 4
  05d274c  bt- 29, 0x5d2490
  05d2750  clrldi 9, 4, 32
  05d2754  lwz 0, 16(9)
  05d2758  cmpw 7, 0, 29
  05d275c  bt 30, 0x5d2e6c
  05d2760  stw 10, 20(9)
  05d2764  cmpwi 7, 10, 0
  05d2768  bt 30, 0x5d2840
  05d276c  cmplw 7, 7, 10
  05d2770  bt- 29, 0x5d2490
  05d2774  clrldi 11, 10, 32
  05d2778  lwz 0, 16(5)
  05d277c  cmpwi 7, 0, 0
  05d2780  stw 4, 24(11)
  05d2784  bt 30, 0x5d279c
  05d2788  cmplw 7, 7, 0
  05d278c  bt- 29, 0x5d2490
  05d2790  clrldi 9, 0, 32
  05d2794  stw 0, 16(11)
  05d2798  stw 10, 24(9)
  05d279c  lwz 0, 20(5)
  05d27a0  cmpwi 7, 0, 0
  05d27a4  bt 30, 0x5d2840
  05d27a8  cmplw 7, 7, 0
  05d27ac  bt- 29, 0x5d2490
  05d27b0  clrldi 9, 0, 32
  05d27b4  mr 31, 29
  05d27b8  stw 0, 20(11)
  05d27bc  stw 10, 24(9)
  05d27c0  b 0x5d230c
  05d27c4  clrldi 9, 8, 32
  05d27c8  cmpwi 7, 10, 31
  05d27cc  li 0, 0
  05d27d0  lwz 8, 0(9)
  05d27d4  bt 30, 0x5d27e0
  05d27d8  srwi 0, 10, 1
  05d27dc  subfic 0, 0, 25
  05d27e0  slw 10, 28, 0
  05d27e4  b 0x5d27f0
  05d27e8  slwi 10, 10, 1
  05d27ec  mr 8, 0
  05d27f0  clrldi 11, 8, 32
  05d27f4  lwz 0, 4(11)
  05d27f8  rlwinm 0, 0, 0, 0, 29
  05d27fc  cmpw 7, 0, 28
  05d2800  bt 30, 0x5d2d24
  05d2804  rlwinm 9, 10, 3, 29, 29
  05d2808  addi 9, 9, 16
  05d280c  add 3, 8, 9
  05d2810  clrldi 11, 3, 32
  05d2814  lwz 0, 0(11)
  05d2818  cmpwi 7, 0, 0
  05d281c  bf 30, 0x5d27e8
  05d2820  lwz 0, 16(30)
  05d2824  cmplw 7, 0, 3
  05d2828  bt- 29, 0x5d2490
  05d282c  stw 31, 0(11)
  05d2830  stw 31, 8(27)
  05d2834  stw 8, 24(27)
  05d2838  stw 31, 12(27)
  05d283c  b 0x5d24e8
  05d2840  mr 31, 29
  05d2844  b 0x5d230c
  05d2848  lwz 10, 12(8)
  05d284c  lwz 5, 24(8)
  05d2850  cmpw 7, 27, 10
  05d2854  bt 30, 0x5d2d74
  05d2858  lwz 0, 8(8)
  05d285c  lwz 7, 16(30)
  05d2860  cmplw 7, 7, 0
  05d2864  bt- 29, 0x5d2490
  05d2868  clrldi 9, 0, 32
  05d286c  clrldi 11, 10, 32
  05d2870  stw 10, 12(9)
  05d2874  stw 0, 8(11)
  05d2878  cmpwi 7, 5, 0
  05d287c  bt 30, 0x5d23f8
  05d2880  lwz 11, 28(25)
  05d2884  slwi 9, 11, 2
  05d2888  add 9, 9, 30
  05d288c  addi 9, 9, 300
  05d2890  clrldi 9, 9, 32
  05d2894  lwz 0, 0(9)
  05d2898  cmpw 7, 0, 27
  05d289c  bt 30, 0x5d2e14
  05d28a0  lwz 7, 16(30)
  05d28a4  cmplw 7, 7, 5
  05d28a8  bt- 29, 0x5d2490
  05d28ac  clrldi 9, 5, 32
  05d28b0  lwz 0, 16(9)
  05d28b4  cmpw 7, 0, 27
  05d28b8  bt 30, 0x5d2eac
  05d28bc  stw 10, 20(9)
  05d28c0  cmpwi 7, 10, 0
  05d28c4  bt 30, 0x5d23f8
  05d28c8  cmplw 7, 7, 10
  05d28cc  bt- 29, 0x5d2490
  05d28d0  clrldi 11, 10, 32
  05d28d4  lwz 0, 16(25)
  05d28d8  cmpwi 7, 0, 0
  05d28dc  stw 5, 24(11)
  05d28e0  bt 30, 0x5d28f8
  05d28e4  cmplw 7, 7, 0
  05d28e8  bt- 29, 0x5d2490
  05d28ec  clrldi 9, 0, 32
  05d28f0  stw 0, 16(11)
  05d28f4  stw 10, 24(9)
  05d28f8  lwz 0, 20(25)
  05d28fc  cmpwi 7, 0, 0
  05d2900  bt 30, 0x5d23f8
  05d2904  cmplw 7, 7, 0
  05d2908  bt- 29, 0x5d2490
  05d290c  clrldi 9, 0, 32
  05d2910  stw 0, 20(11)
  05d2914  stw 10, 24(9)
  05d2918  b 0x5d23f8
  05d291c  lwz 4, -24288(2)
  05d2920  lwz 3, -24264(2)
  05d2924  bl 0x5cef7c
  05d2928  nop
  05d292c  b 0x5d243c
  05d2930  lwz 9, 12(30)
  05d2934  clrldi 11, 31, 32
  05d2938  lwz 0, 20(30)
  05d293c  add 10, 28, 9
  05d2940  cmpw 7, 0, 31
  05d2944  ori 9, 10, 1
  05d2948  stw 10, 12(30)
  05d294c  stw 31, 24(30)
  05d2950  stw 9, 4(11)
  05d2954  bt 30, 0x5d2e74
  05d2958  lwz 0, 28(30)
  05d295c  cmplw 7, 0, 10
  05d2960  bf 28, 0x5d24e8
  05d2964  lwz 4, 24(30)
  05d2968  cmpwi 7, 4, 0
  05d296c  bt 30, 0x5d24e8
  05d2970  lwz 29, 12(30)
  05d2974  cmplwi 7, 29, 48
  05d2978  bt 29, 0x5d2f04
  05d297c  lwz 0, 444(30)
  05d2980  rlwinm 0, 0, 0, 29, 29
  05d2984  cmpwi 7, 0, 0
  05d2988  bt 30, 0x5d2e44
  05d298c  lwz 4, 480(30)
  05d2990  cmpwi 7, 4, 0
  05d2994  bt- 30, 0x5d2e44
  05d2998  li 7, 0
  05d299c  li 27, 1
  05d29a0  li 25, 0
  05d29a4  b 0x5d29d4
  05d29a8  clrldi 9, 11, 32
  05d29ac  or 0, 8, 10
  05d29b0  stw 0, 4(30)
  05d29b4  stw 5, 0(9)
  05d29b8  stw 5, 8(3)
  05d29bc  stw 11, 24(3)
  05d29c0  stw 5, 12(3)
  05d29c4  cmpwi 7, 31, 0
  05d29c8  bt- 30, 0x5d2e44
  05d29cc  mr 7, 4
  05d29d0  mr 4, 31
  05d29d4  clrldi 9, 4, 32
  05d29d8  lwz 0, 12(9)
  05d29dc  lwz 11, 0(9)
  05d29e0  clrlwi 0, 0, 31
  05d29e4  lwz 8, 4(9)
  05d29e8  lwz 31, 8(9)
  05d29ec  cmpwi 7, 0, 0
  05d29f0  bt 30, 0x5d29c4
  05d29f4  addi 0, 11, 8
  05d29f8  li 9, 0
  05d29fc  clrlwi 0, 0, 28
  05d2a00  cmpwi 7, 0, 0
  05d2a04  bt 30, 0x5d2a10
  05d2a08  subfic 0, 0, 16
  05d2a0c  clrlwi 9, 0, 28
  05d2a10  add 5, 9, 11
  05d2a14  clrldi 3, 5, 32
  05d2a18  lwz 10, 4(3)
  05d2a1c  rlwinm 0, 10, 0, 30, 30
  05d2a20  cmpwi 7, 0, 0
  05d2a24  bf 30, 0x5d29c4
  05d2a28  lwz 0, 24(30)
  05d2a2c  cmpw 7, 0, 5
  05d2a30  bt 30, 0x5d29c4
  05d2a34  cmplw 7, 11, 7
  05d2a38  bt 29, 0x5d29c4
  05d2a3c  add 9, 11, 8
  05d2a40  cmplw 7, 7, 9
  05d2a44  bf 28, 0x5d29c4
  05d2a48  rlwinm 29, 10, 0, 0, 29
  05d2a4c  addi 0, 9, -48
  05d2a50  add 9, 5, 29
  05d2a54  cmplw 7, 9, 0
  05d2a58  bt 28, 0x5d29c4
  05d2a5c  lwz 0, 20(30)
  05d2a60  cmpw 7, 0, 5
  05d2a64  bt 30, 0x5d300c
  05d2a68  lwz 10, 12(3)
  05d2a6c  lwz 28, 24(3)
  05d2a70  cmpw 7, 5, 10
  05d2a74  bt 30, 0x5d2f74
  05d2a78  lwz 0, 8(3)
  05d2a7c  lwz 7, 16(30)
  05d2a80  cmplw 7, 7, 0
  05d2a84  bt- 29, 0x5d2490
  05d2a88  clrldi 9, 0, 32
  05d2a8c  clrldi 11, 10, 32
  05d2a90  stw 10, 12(9)
  05d2a94  stw 0, 8(11)
  05d2a98  cmpwi 7, 28, 0
  05d2a9c  bt 30, 0x5d2b38
  05d2aa0  lwz 11, 28(3)
  05d2aa4  slwi 9, 11, 2
  05d2aa8  add 9, 9, 30
  05d2aac  addi 9, 9, 300
  05d2ab0  clrldi 9, 9, 32
  05d2ab4  lwz 0, 0(9)
  05d2ab8  cmpw 7, 0, 5
  05d2abc  bt 30, 0x5d2ff8
  05d2ac0  lwz 7, 16(30)
  05d2ac4  cmplw 7, 7, 28
  05d2ac8  bt- 29, 0x5d2490
  05d2acc  clrldi 9, 28, 32
  05d2ad0  lwz 0, 16(9)
  05d2ad4  cmpw 7, 0, 5
  05d2ad8  bt 30, 0x5d3068
  05d2adc  stw 10, 20(9)
  05d2ae0  cmpwi 7, 10, 0
  05d2ae4  bt 30, 0x5d2b38
  05d2ae8  cmplw 7, 7, 10
  05d2aec  bt- 29, 0x5d2490
  05d2af0  clrldi 11, 10, 32
  05d2af4  lwz 0, 16(3)
  05d2af8  cmpwi 7, 0, 0
  05d2afc  stw 28, 24(11)
  05d2b00  bt 30, 0x5d2b18
  05d2b04  cmplw 7, 7, 0
  05d2b08  bt- 29, 0x5d2490
  05d2b0c  clrldi 9, 0, 32
  05d2b10  stw 0, 16(11)
  05d2b14  stw 10, 24(9)
  05d2b18  lwz 0, 20(3)
  05d2b1c  cmpwi 7, 0, 0
  05d2b20  bt 30, 0x5d2b38
  05d2b24  cmplw 7, 7, 0
  05d2b28  bt- 29, 0x5d2490
  05d2b2c  clrldi 9, 0, 32
  05d2b30  stw 0, 20(11)
  05d2b34  stw 10, 24(9)
  05d2b38  srwi 9, 29, 8
  05d2b3c  li 0, 0
  05d2b40  cmpwi 7, 9, 0
  05d2b44  li 8, 1
  05d2b48  bt 30, 0x5d2bac
  05d2b4c  cmplwi 7, 9, 65535
  05d2b50  li 0, 31
  05d2b54  lis 8, -32768
  05d2b58  bt 29, 0x5d2bac
  05d2b5c  addi 10, 9, -256
  05d2b60  rlwinm 10, 10, 16, 28, 28
  05d2b64  slw 9, 9, 10
  05d2b68  addi 0, 9, -4096
  05d2b6c  rlwinm 0, 0, 16, 29, 29
  05d2b70  slw 9, 9, 0
  05d2b74  add 10, 10, 0
  05d2b78  addi 11, 9, -16384
  05d2b7c  rlwinm 11, 11, 16, 30, 30
  05d2b80  slw 9, 9, 11
  05d2b84  add 10, 10, 11
  05d2b88  srwi 9, 9, 15
  05d2b8c  sub 9, 9, 10
  05d2b90  addi 0, 9, 21
  05d2b94  addi 9, 9, 14
  05d2b98  srw 0, 29, 0
  05d2b9c  slwi 9, 9, 1
  05d2ba0  clrlwi 0, 0, 31
  05d2ba4  add 0, 9, 0
  05d2ba8  slw 8, 27, 0
  05d2bac  stw 0, 28(3)
  05d2bb0  lwz 10, 4(30)
  05d2bb4  slwi 9, 0, 2
  05d2bb8  stw 25, 20(3)
  05d2bbc  and 11, 8, 10
  05d2bc0  add 9, 9, 30
  05d2bc4  cmpwi 11, 0
  05d2bc8  stw 25, 16(3)
  05d2bcc  addi 11, 9, 300
  05d2bd0  bt 2, 0x5d29a8
  05d2bd4  clrldi 9, 11, 32
  05d2bd8  cmpwi 7, 0, 31
  05d2bdc  li 10, 0
  05d2be0  lwz 8, 0(9)
  05d2be4  bt 30, 0x5d2bf0
  05d2be8  srwi 0, 0, 1
  05d2bec  subfic 10, 0, 25
  05d2bf0  slw 10, 29, 10
  05d2bf4  b 0x5d2c00
  05d2bf8  slwi 10, 10, 1
  05d2bfc  mr 8, 0
  05d2c00  clrldi 11, 8, 32
  05d2c04  lwz 0, 4(11)
  05d2c08  rlwinm 0, 0, 0, 0, 29
  05d2c0c  cmpw 7, 0, 29
  05d2c10  bt 30, 0x5d301c
  05d2c14  rlwinm 9, 10, 3, 29, 29
  05d2c18  addi 9, 9, 16
  05d2c1c  add 9, 8, 9
  05d2c20  clrldi 11, 9, 32
  05d2c24  lwz 0, 0(11)
  05d2c28  cmpwi 7, 0, 0
  05d2c2c  bf 30, 0x5d2bf8
  05d2c30  lwz 7, 16(30)
  05d2c34  cmplw 7, 7, 9
  05d2c38  bt- 29, 0x5d2490
  05d2c3c  stw 5, 0(11)
  05d2c40  stw 5, 8(3)
  05d2c44  stw 8, 24(3)
  05d2c48  stw 5, 12(3)
  05d2c4c  b 0x5d29c4
  05d2c50  clrldi 8, 27, 32
  05d2c54  lwz 11, 4(8)
  05d2c58  clrlwi 0, 11, 30
  05d2c5c  cmpwi 7, 0, 3
  05d2c60  bf 30, 0x5d2840
  05d2c64  add 9, 29, 28
  05d2c68  clrldi 10, 29, 32
  05d2c6c  clrldi 9, 9, 32
  05d2c70  rlwinm 0, 11, 0, 0, 30
  05d2c74  ori 11, 28, 1
  05d2c78  stw 28, 8(30)
  05d2c7c  stw 0, 4(8)
  05d2c80  stw 28, 0(9)
  05d2c84  stw 11, 4(10)
  05d2c88  b 0x5d24e8
  05d2c8c  lwz 0, 8(30)
  05d2c90  clrldi 10, 31, 32
  05d2c94  stw 31, 20(30)
  05d2c98  add 0, 28, 0
  05d2c9c  add 9, 29, 0
  05d2ca0  ori 11, 0, 1
  05d2ca4  clrldi 9, 9, 32
  05d2ca8  stw 0, 8(30)
  05d2cac  stw 11, 4(10)
  05d2cb0  stw 0, 0(9)
  05d2cb4  b 0x5d24e8
  05d2cb8  addi 0, 29, 20
  05d2cbc  addi 6, 29, 16
  05d2cc0  clrldi 9, 0, 32
  05d2cc4  lwz 10, 0(9)
  05d2cc8  cmpwi 7, 10, 0
  05d2ccc  bt 30, 0x5d2edc
  05d2cd0  mr 6, 0
  05d2cd4  b 0x5d2ce0
  05d2cd8  lwz 10, 0(9)
  05d2cdc  mr 6, 11
  05d2ce0  addi 11, 10, 20
  05d2ce4  addi 8, 10, 16
  05d2ce8  clrldi 9, 11, 32
  05d2cec  lwz 0, 0(9)
  05d2cf0  cmpwi 7, 0, 0
  05d2cf4  bf 30, 0x5d2cd8
  05d2cf8  clrldi 9, 8, 32
  05d2cfc  lwz 0, 0(9)
  05d2d00  cmpwi 7, 0, 0
  05d2d04  bt 30, 0x5d2d10
  05d2d08  mr 11, 8
  05d2d0c  b 0x5d2cd8
  05d2d10  cmplw 7, 7, 6
  05d2d14  bt- 29, 0x5d2490
  05d2d18  clrldi 9, 6, 32
  05d2d1c  stw 0, 0(9)
  05d2d20  b 0x5d2720
  05d2d24  lwz 0, 16(30)
  05d2d28  lwz 10, 8(11)
  05d2d2c  cmplw 7, 0, 8
  05d2d30  bt 29, 0x5d2490
  05d2d34  cmplw 7, 0, 10
  05d2d38  li 0, 1
  05d2d3c  bt 29, 0x5d2d44
  05d2d40  li 0, 0
  05d2d44  xori 0, 0, 1
  05d2d48  clrlwi 0, 0, 24
  05d2d4c  cmpwi 7, 0, 0
  05d2d50  bt- 30, 0x5d2490
  05d2d54  clrldi 9, 10, 32
  05d2d58  li 0, 0
  05d2d5c  stw 31, 8(11)
  05d2d60  stw 0, 24(27)
  05d2d64  stw 10, 8(27)
  05d2d68  stw 31, 12(9)
  05d2d6c  stw 8, 12(27)
  05d2d70  b 0x5d24e8
  05d2d74  addi 0, 10, 20
  05d2d78  addi 6, 10, 16
  05d2d7c  clrldi 9, 0, 32
  05d2d80  lwz 10, 0(9)
  05d2d84  cmpwi 7, 10, 0
  05d2d88  bt 30, 0x5d2ef0
  05d2d8c  mr 6, 0
  05d2d90  b 0x5d2d9c
  05d2d94  lwz 10, 0(9)
  05d2d98  mr 6, 11
  05d2d9c  addi 11, 10, 20
  05d2da0  addi 8, 10, 16
  05d2da4  clrldi 9, 11, 32
  05d2da8  lwz 0, 0(9)
  05d2dac  cmpwi 7, 0, 0
  05d2db0  bf 30, 0x5d2d94
  05d2db4  clrldi 9, 8, 32
  05d2db8  lwz 0, 0(9)
  05d2dbc  cmpwi 7, 0, 0
  05d2dc0  bt 30, 0x5d2df4
  05d2dc4  mr 11, 8
  05d2dc8  b 0x5d2d94
  05d2dcc  cmpwi 7, 10, 0
  05d2dd0  stw 10, 0(9)
  05d2dd4  bf 30, 0x5d276c
  05d2dd8  li 0, -2
  05d2ddc  lwz 9, 4(30)
  05d2de0  mr 31, 29
  05d2de4  rotlw 0, 0, 11
  05d2de8  and 9, 9, 0
  05d2dec  stw 9, 4(30)
  05d2df0  b 0x5d230c
  05d2df4  lwz 7, 16(30)
  05d2df8  cmplw 7, 7, 6
  05d2dfc  bt- 29, 0x5d2490
  05d2e00  clrldi 9, 6, 32
  05d2e04  stw 0, 0(9)
  05d2e08  b 0x5d2878
  05d2e0c  stw 28, 8(30)
  05d2e10  b 0x5d24e8
  05d2e14  cmpwi 7, 10, 0
  05d2e18  stw 10, 0(9)
  05d2e1c  bt 30, 0x5d2fe0
  05d2e20  lwz 7, 16(30)
  05d2e24  b 0x5d28c8
  05d2e28  li 0, -2
  05d2e2c  lwz 9, 0(30)
  05d2e30  mr 31, 29
  05d2e34  rotlw 0, 0, 25
  05d2e38  and 9, 9, 0
  05d2e3c  stw 9, 0(30)
  05d2e40  b 0x5d230c
  05d2e44  li 0, -1
  05d2e48  stw 0, 28(30)
  05d2e4c  b 0x5d24e8
  05d2e50  li 0, -2
  05d2e54  lwz 9, 0(30)
  05d2e58  lwz 22, 20(30)
  05d2e5c  rotlw 0, 0, 23
  05d2e60  and 9, 9, 0
  05d2e64  stw 9, 0(30)
  05d2e68  b 0x5d23f8
  05d2e6c  stw 10, 16(9)
  05d2e70  b 0x5d2764
  05d2e74  li 22, 0
  05d2e78  stw 22, 8(30)
  05d2e7c  stw 22, 20(30)
  05d2e80  b 0x5d2958
  05d2e84  lwz 3, -24284(2)
  05d2e88  lwz 4, -24288(2)
  05d2e8c  bl 0x5cef7c
  05d2e90  nop
  05d2e94  b 0x5d25a8
  05d2e98  lwz 3, -24292(2)
  05d2e9c  lwz 4, -24288(2)
  05d2ea0  bl 0x5cef7c
  05d2ea4  nop
  05d2ea8  b 0x5d25a0
  05d2eac  stw 10, 16(9)
  05d2eb0  b 0x5d28c0
  05d2eb4  lwz 3, -24276(2)
  05d2eb8  lwz 4, -24288(2)
  05d2ebc  bl 0x5cef7c
  05d2ec0  nop
  05d2ec4  b 0x5d2370
  05d2ec8  lwz 3, -24272(2)
  05d2ecc  lwz 4, -24288(2)
  05d2ed0  bl 0x5cef7c
  05d2ed4  nop
  05d2ed8  b 0x5d2378
  05d2edc  clrldi 9, 6, 32
  05d2ee0  lwz 10, 0(9)
  05d2ee4  cmpwi 7, 10, 0
  05d2ee8  bf 30, 0x5d2ce0
  05d2eec  b 0x5d2720
  05d2ef0  clrldi 9, 6, 32
  05d2ef4  lwz 10, 0(9)
  05d2ef8  cmpwi 7, 10, 0
  05d2efc  bf 30, 0x5d2d9c
  05d2f00  b 0x5d2878
  05d2f04  lwz 9, -24308(2)
  05d2f08  clrldi 4, 4, 32
  05d2f0c  mr 3, 24
  05d2f10  lwz 31, 8(9)
  05d2f14  bl 0x5d0d34
  05d2f18  lwz 0, 12(3)
  05d2f1c  clrlwi 0, 0, 31
  05d2f20  cmpwi 7, 0, 0
  05d2f24  bt 30, 0x5d297c
  05d2f28  add 9, 29, 31
  05d2f2c  lwz 0, 4(3)
  05d2f30  addi 9, 9, -49
  05d2f34  divwu 9, 9, 31
  05d2f38  addi 9, 9, -1
  05d2f3c  mullw 9, 31, 9
  05d2f40  cmplw 7, 9, 0
  05d2f44  bt 29, 0x5d297c
  05d2f48  lwz 3, 0(3)
  05d2f4c  addi 9, 30, 472
  05d2f50  add 0, 3, 0
  05d2f54  cmplw 7, 3, 9
  05d2f58  bt 29, 0x5d2f64
  05d2f5c  cmplw 7, 9, 0
  05d2f60  bt 28, 0x5d297c
  05d2f64  lwz 9, 8(9)
  05d2f68  cmpwi 7, 9, 0
  05d2f6c  bf 30, 0x5d2f54
  05d2f70  b 0x5d297c
  05d2f74  addi 6, 5, 20
  05d2f78  addi 0, 5, 16
  05d2f7c  clrldi 9, 6, 32
  05d2f80  lwz 10, 0(9)
  05d2f84  cmpwi 7, 10, 0
  05d2f88  bf 30, 0x5d2f98
  05d2f8c  b 0x5d3070
  05d2f90  lwz 10, 0(9)
  05d2f94  mr 6, 11
  05d2f98  addi 11, 10, 20
  05d2f9c  addi 8, 10, 16
  05d2fa0  clrldi 9, 11, 32
  05d2fa4  lwz 0, 0(9)
  05d2fa8  cmpwi 7, 0, 0
  05d2fac  bf 30, 0x5d2f90
  05d2fb0  clrldi 9, 8, 32
  05d2fb4  lwz 0, 0(9)
  05d2fb8  cmpwi 7, 0, 0
  05d2fbc  bt 30, 0x5d2fc8
  05d2fc0  mr 11, 8
  05d2fc4  b 0x5d2f90
  05d2fc8  lwz 7, 16(30)
  05d2fcc  cmplw 7, 7, 6
  05d2fd0  bt- 29, 0x5d2490
  05d2fd4  clrldi 9, 6, 32
  05d2fd8  stw 0, 0(9)
  05d2fdc  b 0x5d2a98
  05d2fe0  li 0, -2
  05d2fe4  lwz 9, 4(30)
  05d2fe8  rotlw 0, 0, 11
  05d2fec  and 9, 9, 0
  05d2ff0  stw 9, 4(30)
  05d2ff4  b 0x5d23f8
  05d2ff8  cmpwi 7, 10, 0
  05d2ffc  stw 10, 0(9)
  05d3000  bt 30, 0x5d3088
  05d3004  lwz 7, 16(30)
  05d3008  b 0x5d2ae8
  05d300c  li 22, 0
  05d3010  stw 22, 8(30)
  05d3014  stw 22, 20(30)
  05d3018  b 0x5d2b38
  05d301c  lwz 7, 16(30)
  05d3020  lwz 10, 8(11)
  05d3024  cmplw 7, 7, 8
  05d3028  bt 29, 0x5d2490
  05d302c  cmplw 7, 7, 10
  05d3030  li 0, 1
  05d3034  bt 29, 0x5d303c
  05d3038  li 0, 0
  05d303c  xori 0, 0, 1
  05d3040  clrlwi 0, 0, 24
  05d3044  cmpwi 7, 0, 0
  05d3048  bt- 30, 0x5d2490
  05d304c  clrldi 9, 10, 32
  05d3050  stw 5, 8(11)
  05d3054  stw 25, 24(3)
  05d3058  stw 10, 8(3)
  05d305c  stw 5, 12(9)
  05d3060  stw 8, 12(3)
  05d3064  b 0x5d29c4
  05d3068  stw 10, 16(9)
  05d306c  b 0x5d2ae0
  05d3070  clrldi 9, 0, 32
  05d3074  mr 6, 0
  05d3078  lwz 10, 0(9)
  05d307c  cmpwi 7, 10, 0
  05d3080  bf 30, 0x5d2f98
  05d3084  b 0x5d2a98
  05d3088  lwz 9, 4(30)
  05d308c  slw 0, 27, 11
  05d3090  andc 0, 9, 0
  05d3094  stw 0, 4(30)

mspace_malloc:   # 0x5d309c, 0x1b6c bytes
  05d309c  mfcr 12
  05d30a0  stdu 1, -240(1)
  05d30a4  std 23, 168(1)
  05d30a8  clrldi 23, 3, 32
  05d30ac  std 26, 192(1)
  05d30b0  mr 26, 3
  05d30b4  mr 3, 23
  05d30b8  std 22, 160(1)
  05d30bc  std 31, 232(1)
  05d30c0  std 19, 136(1)
  05d30c4  std 20, 144(1)
  05d30c8  std 21, 152(1)
  05d30cc  std 24, 176(1)
  05d30d0  std 25, 184(1)
  05d30d4  std 27, 200(1)
  05d30d8  std 28, 208(1)
  05d30dc  std 29, 216(1)
  05d30e0  std 30, 224(1)
  05d30e4  mr 22, 4
  05d30e8  li 31, 0
  05d30ec  stw 12, 248(1)
  05d30f0  mflr 0
  05d30f4  std 0, 256(1)
  05d30f8  bl 0x5d172c
  05d30fc  cmpwi 7, 3, 0
  05d3100  bf 30, 0x5d3168
  05d3104  cmplwi 7, 22, 236
  05d3108  bf 29, 0x5d31b8
  05d310c  li 0, -65
  05d3110  cmplw 7, 22, 0
  05d3114  bf 29, 0x5d34a8
  05d3118  li 30, -1
  05d311c  lwz 6, 8(26)
  05d3120  cmplw 7, 30, 6
  05d3124  mr 11, 6
  05d3128  bf 29, 0x5d359c
  05d312c  lwz 8, 12(26)
  05d3130  cmplw 7, 8, 30
  05d3134  bt 29, 0x5d37f8
  05d3138  lwz 31, -24308(2)
  05d313c  lwz 0, 32(31)
  05d3140  cmpw 7, 26, 0
  05d3144  bt 30, 0x5d3be0
  05d3148  li 5, 0
  05d314c  mr 3, 23
  05d3150  clrldi 4, 22, 32
  05d3154  clrldi 5, 5, 32
  05d3158  li 6, 1
  05d315c  li 7, 0
  05d3160  li 31, 0
  05d3164  bl 0x5d1770
  05d3168  ld 0, 256(1)
  05d316c  clrldi 3, 31, 32
  05d3170  lwz 12, 248(1)
  05d3174  ld 19, 136(1)
  05d3178  mtlr 0
  05d317c  ld 20, 144(1)
  05d3180  mtocrf 8, 12
  05d3184  ld 21, 152(1)
  05d3188  ld 22, 160(1)
  05d318c  ld 23, 168(1)
  05d3190  ld 24, 176(1)
  05d3194  ld 25, 184(1)
  05d3198  ld 26, 192(1)
  05d319c  ld 27, 200(1)
  05d31a0  ld 28, 208(1)
  05d31a4  ld 29, 216(1)
  05d31a8  ld 30, 224(1)
  05d31ac  ld 31, 232(1)
  05d31b0  addi 1, 1, 240
  05d31b4  blr
  05d31b8  cmplwi 7, 22, 10
  05d31bc  li 30, 16
  05d31c0  li 11, 2
  05d31c4  li 10, 2
  05d31c8  bt 29, 0x5d3574
  05d31cc  lwz 0, 0(26)
  05d31d0  srw 0, 0, 10
  05d31d4  clrlwi 9, 0, 30
  05d31d8  cmpwi 7, 9, 0
  05d31dc  bt 30, 0x5d32f8
  05d31e0  not 0, 0
  05d31e4  addi 9, 26, 36
  05d31e8  clrlwi 0, 0, 31
  05d31ec  add 24, 11, 0
  05d31f0  slwi 29, 24, 3
  05d31f4  add 28, 9, 29
  05d31f8  clrldi 25, 28, 32
  05d31fc  lwz 30, 8(25)
  05d3200  clrldi 27, 30, 32
  05d3204  lwz 0, 4(27)
  05d3208  rlwinm 0, 0, 0, 0, 29
  05d320c  cmpw 7, 0, 29
  05d3210  bt 30, 0x5d3228
  05d3214  lwz 4, -24288(2)
  05d3218  lwz 3, -24260(2)
  05d321c  addi 4, 4, 16
  05d3220  bl 0x5cef7c
  05d3224  nop
  05d3228  cmpw 7, 28, 30
  05d322c  lwz 31, 8(27)
  05d3230  bt 30, 0x5d3bb4
  05d3234  cmpw 7, 30, 31
  05d3238  bt 30, 0x5d3b9c
  05d323c  lwz 0, 4(27)
  05d3240  rlwinm 0, 0, 0, 0, 29
  05d3244  cmpw 7, 0, 29
  05d3248  bt 30, 0x5d3260
  05d324c  lwz 4, -24288(2)
  05d3250  lwz 3, -24248(2)
  05d3254  addi 4, 4, 16
  05d3258  bl 0x5cef7c
  05d325c  nop
  05d3260  cmpw 7, 28, 31
  05d3264  bt 30, 0x5d37e0
  05d3268  lwz 0, 16(26)
  05d326c  cmplw 7, 0, 31
  05d3270  bt- 29, 0x5d3d8c
  05d3274  clrldi 9, 31, 32
  05d3278  stw 31, 8(25)
  05d327c  stw 28, 12(9)
  05d3280  add 9, 29, 30
  05d3284  ori 0, 29, 3
  05d3288  clrldi 9, 9, 32
  05d328c  stw 0, 4(27)
  05d3290  addi 31, 30, 8
  05d3294  lwz 0, 4(9)
  05d3298  ori 0, 0, 1
  05d329c  stw 0, 4(9)
  05d32a0  cmpwi 7, 31, 0
  05d32a4  li 5, 0
  05d32a8  bt 30, 0x5d32dc
  05d32ac  addi 9, 31, -8
  05d32b0  lwz 10, 436(26)
  05d32b4  lwz 11, 440(26)
  05d32b8  mr 5, 31
  05d32bc  clrldi 9, 9, 32
  05d32c0  lwz 0, 4(9)
  05d32c4  rlwinm 0, 0, 0, 0, 29
  05d32c8  add 0, 0, 10
  05d32cc  cmplw 7, 11, 0
  05d32d0  stw 0, 436(26)
  05d32d4  bf 28, 0x5d32dc
  05d32d8  stw 0, 440(26)
  05d32dc  mr 3, 23
  05d32e0  clrldi 4, 22, 32
  05d32e4  clrldi 5, 5, 32
  05d32e8  li 6, 1
  05d32ec  li 7, 0
  05d32f0  bl 0x5d1770
  05d32f4  b 0x5d3168
  05d32f8  lwz 11, 8(26)
  05d32fc  cmplw 7, 30, 11
  05d3300  bf 29, 0x5d359c
  05d3304  cmpwi 7, 0, 0
  05d3308  bt 30, 0x5d389c
  05d330c  li 19, 1
  05d3310  slw 9, 0, 10
  05d3314  slw 0, 19, 10
  05d3318  addi 20, 26, 36
  05d331c  slwi 0, 0, 1
  05d3320  neg 11, 0
  05d3324  or 0, 0, 11
  05d3328  and 9, 9, 0
  05d332c  neg 11, 9
  05d3330  and 9, 9, 11
  05d3334  addi 9, 9, -1
  05d3338  rlwinm 0, 9, 20, 27, 27
  05d333c  srw 9, 9, 0
  05d3340  rlwinm 11, 9, 27, 28, 28
  05d3344  srw 9, 9, 11
  05d3348  add 0, 0, 11
  05d334c  rlwinm 10, 9, 30, 29, 29
  05d3350  srw 9, 9, 10
  05d3354  add 0, 0, 10
  05d3358  rlwinm 11, 9, 31, 30, 30
  05d335c  srw 9, 9, 11
  05d3360  add 0, 0, 11
  05d3364  rldicl 10, 9, 63, 63
  05d3368  add 0, 0, 10
  05d336c  srw 9, 9, 10
  05d3370  add 21, 0, 9
  05d3374  slwi 28, 21, 3
  05d3378  add 29, 20, 28
  05d337c  clrldi 24, 29, 32
  05d3380  lwz 25, 8(24)
  05d3384  clrldi 27, 25, 32
  05d3388  lwz 0, 4(27)
  05d338c  rlwinm 0, 0, 0, 0, 29
  05d3390  cmpw 7, 0, 28
  05d3394  bt 30, 0x5d33ac
  05d3398  lwz 4, -24288(2)
  05d339c  lwz 3, -24244(2)
  05d33a0  addi 4, 4, 16
  05d33a4  bl 0x5cef7c
  05d33a8  nop
  05d33ac  cmpw 7, 29, 25
  05d33b0  lwz 31, 8(27)
  05d33b4  bt 30, 0x5d4198
  05d33b8  cmpw 7, 25, 31
  05d33bc  bt 30, 0x5d4180
  05d33c0  lwz 0, 4(27)
  05d33c4  rlwinm 0, 0, 0, 0, 29
  05d33c8  cmpw 7, 0, 28
  05d33cc  bt 30, 0x5d33e4
  05d33d0  lwz 4, -24288(2)
  05d33d4  lwz 3, -24232(2)
  05d33d8  addi 4, 4, 16
  05d33dc  bl 0x5cef7c
  05d33e0  nop
  05d33e4  cmpw 7, 29, 31
  05d33e8  bt 30, 0x5d3bcc
  05d33ec  lwz 0, 16(26)
  05d33f0  cmplw 7, 0, 31
  05d33f4  bt- 29, 0x5d3d8c
  05d33f8  clrldi 9, 31, 32
  05d33fc  stw 31, 8(24)
  05d3400  stw 29, 12(9)
  05d3404  sub 29, 28, 30
  05d3408  add 28, 25, 30
  05d340c  ori 10, 30, 3
  05d3410  add 9, 28, 29
  05d3414  clrldi 11, 28, 32
  05d3418  clrldi 9, 9, 32
  05d341c  ori 0, 29, 1
  05d3420  stw 10, 4(27)
  05d3424  stw 0, 4(11)
  05d3428  stw 29, 0(9)
  05d342c  lwz 31, 8(26)
  05d3430  cmpwi 7, 31, 0
  05d3434  bt 30, 0x5d3498
  05d3438  srwi 30, 31, 3
  05d343c  lwz 27, 20(26)
  05d3440  cmplwi 7, 30, 31
  05d3444  bt 29, 0x5d3dac
  05d3448  cmplwi 7, 31, 15
  05d344c  slwi 0, 30, 3
  05d3450  add 31, 20, 0
  05d3454  bf 29, 0x5d3d94
  05d3458  li 0, 1
  05d345c  lwz 9, 0(26)
  05d3460  slw 0, 0, 30
  05d3464  and 11, 9, 0
  05d3468  cmpwi 11, 0
  05d346c  bf 2, 0x5d3d78
  05d3470  or 0, 9, 0
  05d3474  mr 10, 31
  05d3478  clrldi 8, 31, 32
  05d347c  stw 0, 0(26)
  05d3480  clrldi 11, 27, 32
  05d3484  clrldi 9, 10, 32
  05d3488  stw 27, 8(8)
  05d348c  stw 10, 8(11)
  05d3490  stw 27, 12(9)
  05d3494  stw 31, 12(11)
  05d3498  addi 31, 25, 8
  05d349c  stw 29, 8(26)
  05d34a0  stw 28, 20(26)
  05d34a4  b 0x5d32a0
  05d34a8  lwz 6, 4(26)
  05d34ac  addi 0, 22, 19
  05d34b0  cmpwi 7, 6, 0
  05d34b4  rlwinm 30, 0, 0, 0, 27
  05d34b8  bt 30, 0x5d37d8
  05d34bc  srwi 9, 30, 8
  05d34c0  neg 31, 30
  05d34c4  cmpwi 7, 9, 0
  05d34c8  li 10, 0
  05d34cc  li 0, 0
  05d34d0  bf 30, 0x5d3838
  05d34d4  addi 27, 26, 300
  05d34d8  li 29, 0
  05d34dc  add 9, 0, 27
  05d34e0  clrldi 9, 9, 32
  05d34e4  lwz 11, 0(9)
  05d34e8  cmpwi 7, 11, 0
  05d34ec  bt 30, 0x5d3b1c
  05d34f0  cmpwi 7, 10, 31
  05d34f4  li 0, 0
  05d34f8  bt 30, 0x5d3504
  05d34fc  srwi 0, 10, 1
  05d3500  subfic 0, 0, 25
  05d3504  mr 9, 11
  05d3508  slw 7, 30, 0
  05d350c  li 29, 0
  05d3510  li 11, 0
  05d3514  clrldi 8, 9, 32
  05d3518  lwz 0, 4(8)
  05d351c  rlwinm 0, 0, 0, 0, 29
  05d3520  sub 0, 0, 30
  05d3524  cmplw 7, 31, 0
  05d3528  bf 29, 0x5d353c
  05d352c  cmpwi 7, 0, 0
  05d3530  bt 30, 0x5d3b94
  05d3534  mr 29, 9
  05d3538  mr 31, 0
  05d353c  rlwinm 9, 7, 3, 29, 29
  05d3540  lwz 0, 20(8)
  05d3544  addi 9, 9, 16
  05d3548  cmpwi 7, 0, 0
  05d354c  extsw 9, 9
  05d3550  lwzx 9, 8, 9
  05d3554  bt 30, 0x5d3564
  05d3558  cmpw 7, 0, 9
  05d355c  bt 30, 0x5d356c
  05d3560  mr 11, 0
  05d3564  cmpwi 7, 9, 0
  05d3568  bt 30, 0x5d361c
  05d356c  slwi 7, 7, 1
  05d3570  b 0x5d3514
  05d3574  addi 0, 22, 19
  05d3578  rlwinm 30, 0, 0, 0, 27
  05d357c  lwz 0, 0(26)
  05d3580  srwi 10, 30, 3
  05d3584  srw 0, 0, 10
  05d3588  mr 11, 10
  05d358c  clrlwi 9, 0, 30
  05d3590  cmpwi 7, 9, 0
  05d3594  bt 30, 0x5d32f8
  05d3598  b 0x5d31e0
  05d359c  sub 0, 11, 30
  05d35a0  lwz 3, 20(26)
  05d35a4  cmplwi 7, 0, 15
  05d35a8  bf 29, 0x5d35e8
  05d35ac  add 11, 3, 30
  05d35b0  clrldi 7, 3, 32
  05d35b4  add 9, 11, 0
  05d35b8  clrldi 10, 11, 32
  05d35bc  clrldi 9, 9, 32
  05d35c0  mr 6, 0
  05d35c4  ori 8, 30, 3
  05d35c8  ori 0, 0, 1
  05d35cc  addi 31, 3, 8
  05d35d0  stw 6, 8(26)
  05d35d4  stw 11, 20(26)
  05d35d8  stw 0, 4(10)
  05d35dc  stw 6, 0(9)
  05d35e0  stw 8, 4(7)
  05d35e4  b 0x5d32a0
  05d35e8  add 9, 3, 11
  05d35ec  clrldi 10, 3, 32
  05d35f0  clrldi 9, 9, 32
  05d35f4  li 6, 0
  05d35f8  ori 11, 11, 3
  05d35fc  stw 6, 8(26)
  05d3600  stw 11, 4(10)
  05d3604  lwz 0, 4(9)
  05d3608  addi 31, 3, 8
  05d360c  stw 6, 20(26)
  05d3610  ori 0, 0, 1
  05d3614  stw 0, 4(9)
  05d3618  b 0x5d32a0
  05d361c  or 0, 29, 11
  05d3620  cmpwi 7, 0, 0
  05d3624  bt 30, 0x5d3b1c
  05d3628  cmpwi 7, 11, 0
  05d362c  mr 9, 29
  05d3630  mr 0, 31
  05d3634  bt 30, 0x5d3680
  05d3638  mr 29, 9
  05d363c  mr 31, 0
  05d3640  b 0x5d3648
  05d3644  mr 11, 9
  05d3648  clrldi 10, 11, 32
  05d364c  lwz 0, 4(10)
  05d3650  rlwinm 0, 0, 0, 0, 29
  05d3654  sub 0, 0, 30
  05d3658  cmplw 7, 31, 0
  05d365c  bf 29, 0x5d3668
  05d3660  mr 29, 11
  05d3664  mr 31, 0
  05d3668  lwz 9, 16(10)
  05d366c  cmpwi 7, 9, 0
  05d3670  bf 30, 0x5d3644
  05d3674  lwz 11, 20(10)
  05d3678  cmpwi 7, 11, 0
  05d367c  bf 30, 0x5d3648
  05d3680  cmpwi 7, 29, 0
  05d3684  bt 30, 0x5d37d8
  05d3688  lwz 6, 8(26)
  05d368c  sub 0, 6, 30
  05d3690  cmplw 7, 0, 31
  05d3694  bf 29, 0x5d3120
  05d3698  lwz 11, 16(26)
  05d369c  cmplw 7, 11, 29
  05d36a0  bt- 29, 0x5d3d8c
  05d36a4  clrldi 28, 29, 32
  05d36a8  add 25, 31, 30
  05d36ac  add 24, 29, 30
  05d36b0  lwz 0, 4(28)
  05d36b4  rlwinm 0, 0, 0, 0, 29
  05d36b8  cmpw 7, 0, 25
  05d36bc  bt 30, 0x5d36d4
  05d36c0  lwz 4, -24288(2)
  05d36c4  lwz 3, -24208(2)
  05d36c8  addi 4, 4, 48
  05d36cc  bl 0x5cef7c
  05d36d0  nop
  05d36d4  cmplw 7, 29, 24
  05d36d8  bf- 28, 0x5d3d8c
  05d36dc  lwz 8, 12(28)
  05d36e0  lwz 6, 24(28)
  05d36e4  cmpw 7, 29, 8
  05d36e8  bt 30, 0x5d3cf4
  05d36ec  lwz 0, 8(28)
  05d36f0  lwz 11, 16(26)
  05d36f4  cmplw 7, 11, 0
  05d36f8  bt- 29, 0x5d3d8c
  05d36fc  clrldi 9, 0, 32
  05d3700  clrldi 11, 8, 32
  05d3704  stw 8, 12(9)
  05d3708  stw 0, 8(11)
  05d370c  cmpwi 7, 6, 0
  05d3710  bt 30, 0x5d37a8
  05d3714  lwz 10, 28(28)
  05d3718  slwi 0, 10, 2
  05d371c  add 0, 27, 0
  05d3720  clrldi 11, 0, 32
  05d3724  lwz 9, 0(11)
  05d3728  cmpw 7, 9, 29
  05d372c  bt 30, 0x5d3dd8
  05d3730  lwz 11, 16(26)
  05d3734  cmplw 7, 11, 6
  05d3738  bt- 29, 0x5d3d8c
  05d373c  clrldi 9, 6, 32
  05d3740  lwz 0, 16(9)
  05d3744  cmpw 7, 0, 29
  05d3748  bt 30, 0x5d422c
  05d374c  stw 8, 20(9)
  05d3750  cmpwi 7, 8, 0
  05d3754  bt 30, 0x5d37a8
  05d3758  cmplw 7, 11, 8
  05d375c  bt- 29, 0x5d3d8c
  05d3760  clrldi 10, 8, 32
  05d3764  lwz 0, 16(28)
  05d3768  cmpwi 7, 0, 0
  05d376c  stw 6, 24(10)
  05d3770  bt 30, 0x5d3788
  05d3774  cmplw 7, 11, 0
  05d3778  bt- 29, 0x5d3d8c
  05d377c  clrldi 9, 0, 32
  05d3780  stw 0, 16(10)
  05d3784  stw 8, 24(9)
  05d3788  lwz 0, 20(28)
  05d378c  cmpwi 7, 0, 0
  05d3790  bt 30, 0x5d37a8
  05d3794  cmplw 7, 11, 0
  05d3798  bt- 29, 0x5d3d8c
  05d379c  clrldi 9, 0, 32
  05d37a0  stw 0, 20(10)
  05d37a4  stw 8, 24(9)
  05d37a8  cmplwi 7, 31, 15
  05d37ac  bt 29, 0x5d3c28
  05d37b0  add 9, 29, 25
  05d37b4  ori 11, 25, 3
  05d37b8  clrldi 9, 9, 32
  05d37bc  stw 11, 4(28)
  05d37c0  lwz 0, 4(9)
  05d37c4  ori 0, 0, 1
  05d37c8  stw 0, 4(9)
  05d37cc  addi 31, 29, 8
  05d37d0  cmpwi 7, 31, 0
  05d37d4  bf 30, 0x5d32ac
  05d37d8  lwz 6, 8(26)
  05d37dc  b 0x5d3120
  05d37e0  li 0, -2
  05d37e4  lwz 9, 0(26)
  05d37e8  rotlw 0, 0, 24
  05d37ec  and 9, 9, 0
  05d37f0  stw 9, 0(26)
  05d37f4  b 0x5d3280
  05d37f8  lwz 9, 24(26)
  05d37fc  sub 8, 8, 30
  05d3800  ori 10, 30, 3
  05d3804  add 29, 9, 30
  05d3808  clrldi 7, 9, 32
  05d380c  clrldi 11, 29, 32
  05d3810  ori 0, 8, 1
  05d3814  mr 4, 11
  05d3818  mr 3, 23
  05d381c  stw 8, 12(26)
  05d3820  stw 29, 24(26)
  05d3824  stw 0, 4(11)
  05d3828  addi 31, 9, 8
  05d382c  stw 10, 4(7)
  05d3830  bl 0x5d0dbc
  05d3834  b 0x5d32a0
  05d3838  cmplwi 7, 9, 65535
  05d383c  li 10, 31
  05d3840  li 0, 124
  05d3844  bt 29, 0x5d34d4
  05d3848  addi 10, 9, -256
  05d384c  rlwinm 10, 10, 16, 28, 28
  05d3850  slw 9, 9, 10
  05d3854  addi 0, 9, -4096
  05d3858  rlwinm 0, 0, 16, 29, 29
  05d385c  slw 9, 9, 0
  05d3860  add 10, 10, 0
  05d3864  addi 11, 9, -16384
  05d3868  rlwinm 11, 11, 16, 30, 30
  05d386c  slw 9, 9, 11
  05d3870  add 10, 10, 11
  05d3874  srwi 9, 9, 15
  05d3878  sub 9, 9, 10
  05d387c  addi 0, 9, 21
  05d3880  addi 9, 9, 14
  05d3884  srw 0, 30, 0
  05d3888  slwi 9, 9, 1
  05d388c  clrlwi 0, 0, 31
  05d3890  add 10, 9, 0
  05d3894  slwi 0, 10, 2
  05d3898  b 0x5d34d4
  05d389c  lwz 0, 4(26)
  05d38a0  cmpwi 7, 0, 0
  05d38a4  bt 30, 0x5d312c
  05d38a8  neg 9, 0
  05d38ac  addi 25, 26, 300
  05d38b0  and 9, 0, 9
  05d38b4  addi 9, 9, -1
  05d38b8  rlwinm 11, 9, 20, 27, 27
  05d38bc  srw 9, 9, 11
  05d38c0  rlwinm 0, 9, 27, 28, 28
  05d38c4  srw 9, 9, 0
  05d38c8  add 11, 11, 0
  05d38cc  rlwinm 10, 9, 30, 29, 29
  05d38d0  srw 9, 9, 10
  05d38d4  add 11, 11, 10
  05d38d8  rlwinm 0, 9, 31, 30, 30
  05d38dc  srw 9, 9, 0
  05d38e0  add 11, 11, 0
  05d38e4  rldicl 10, 9, 63, 63
  05d38e8  srw 9, 9, 10
  05d38ec  add 11, 11, 9
  05d38f0  add 11, 11, 10
  05d38f4  slwi 11, 11, 2
  05d38f8  add 11, 11, 25
  05d38fc  clrldi 11, 11, 32
  05d3900  lwz 9, 0(11)
  05d3904  clrldi 10, 9, 32
  05d3908  mr 29, 9
  05d390c  lwz 9, 16(10)
  05d3910  lwz 0, 4(10)
  05d3914  cmpwi 7, 9, 0
  05d3918  rlwinm 0, 0, 0, 0, 29
  05d391c  sub 31, 0, 30
  05d3920  bt 30, 0x5d3954
  05d3924  clrldi 11, 9, 32
  05d3928  lwz 0, 4(11)
  05d392c  rlwinm 0, 0, 0, 0, 29
  05d3930  sub 0, 0, 30
  05d3934  cmplw 7, 31, 0
  05d3938  bf 29, 0x5d3944
  05d393c  mr 29, 9
  05d3940  mr 31, 0
  05d3944  mr 10, 11
  05d3948  lwz 9, 16(10)
  05d394c  cmpwi 7, 9, 0
  05d3950  bf 30, 0x5d3924
  05d3954  lwz 9, 20(10)
  05d3958  cmpwi 7, 9, 0
  05d395c  bf 30, 0x5d3924
  05d3960  lwz 11, 16(26)
  05d3964  cmplw 7, 11, 29
  05d3968  bt- 29, 0x5d3d8c
  05d396c  clrldi 28, 29, 32
  05d3970  add 27, 30, 31
  05d3974  add 24, 29, 30
  05d3978  lwz 0, 4(28)
  05d397c  rlwinm 0, 0, 0, 0, 29
  05d3980  cmpw 7, 0, 27
  05d3984  bt 30, 0x5d399c
  05d3988  lwz 4, -24288(2)
  05d398c  lwz 3, -24220(2)
  05d3990  addi 4, 4, 32
  05d3994  bl 0x5cef7c
  05d3998  nop
  05d399c  cmplw 7, 29, 24
  05d39a0  bf- 28, 0x5d3d8c
  05d39a4  lwz 10, 12(28)
  05d39a8  lwz 6, 24(28)
  05d39ac  cmpw 7, 29, 10
  05d39b0  bt 30, 0x5d3ca0
  05d39b4  lwz 0, 8(28)
  05d39b8  lwz 11, 16(26)
  05d39bc  cmplw 7, 11, 0
  05d39c0  bt- 29, 0x5d3d8c
  05d39c4  clrldi 9, 0, 32
  05d39c8  clrldi 11, 10, 32
  05d39cc  stw 10, 12(9)
  05d39d0  stw 0, 8(11)
  05d39d4  cmpwi 7, 6, 0
  05d39d8  bt 30, 0x5d3a70
  05d39dc  lwz 8, 28(28)
  05d39e0  slwi 0, 8, 2
  05d39e4  add 0, 25, 0
  05d39e8  clrldi 11, 0, 32
  05d39ec  lwz 9, 0(11)
  05d39f0  cmpw 7, 9, 29
  05d39f4  bt 30, 0x5d3dc4
  05d39f8  lwz 11, 16(26)
  05d39fc  cmplw 7, 11, 6
  05d3a00  bt- 29, 0x5d3d8c
  05d3a04  clrldi 9, 6, 32
  05d3a08  lwz 0, 16(9)
  05d3a0c  cmpw 7, 0, 29
  05d3a10  bt 30, 0x5d4234
  05d3a14  stw 10, 20(9)
  05d3a18  cmpwi 7, 10, 0
  05d3a1c  bt 30, 0x5d3a70
  05d3a20  cmplw 7, 11, 10
  05d3a24  bt- 29, 0x5d3d8c
  05d3a28  clrldi 8, 10, 32
  05d3a2c  lwz 0, 16(28)
  05d3a30  cmpwi 7, 0, 0
  05d3a34  stw 6, 24(8)
  05d3a38  bt 30, 0x5d3a50
  05d3a3c  cmplw 7, 11, 0
  05d3a40  bt- 29, 0x5d3d8c
  05d3a44  clrldi 9, 0, 32
  05d3a48  stw 0, 16(8)
  05d3a4c  stw 10, 24(9)
  05d3a50  lwz 0, 20(28)
  05d3a54  cmpwi 7, 0, 0
  05d3a58  bt 30, 0x5d3a70
  05d3a5c  cmplw 7, 11, 0
  05d3a60  bt- 29, 0x5d3d8c
  05d3a64  clrldi 9, 0, 32
  05d3a68  stw 0, 20(8)
  05d3a6c  stw 10, 24(9)
  05d3a70  cmplwi 7, 31, 15
  05d3a74  add 9, 29, 27
  05d3a78  ori 11, 27, 3
  05d3a7c  bf 29, 0x5d37b8
  05d3a80  add 9, 24, 31
  05d3a84  clrldi 10, 24, 32
  05d3a88  clrldi 9, 9, 32
  05d3a8c  ori 0, 30, 3
  05d3a90  ori 11, 31, 1
  05d3a94  stw 0, 4(28)
  05d3a98  stw 11, 4(10)
  05d3a9c  stw 31, 0(9)
  05d3aa0  lwz 28, 8(26)
  05d3aa4  cmpwi 7, 28, 0
  05d3aa8  bt 30, 0x5d3b10
  05d3aac  srwi 27, 28, 3
  05d3ab0  lwz 25, 20(26)
  05d3ab4  cmplwi 7, 27, 31
  05d3ab8  bt 29, 0x5d426c
  05d3abc  cmplwi 7, 28, 15
  05d3ac0  addi 9, 26, 36
  05d3ac4  slwi 0, 27, 3
  05d3ac8  add 28, 9, 0
  05d3acc  bf 29, 0x5d4254
  05d3ad0  li 0, 1
  05d3ad4  lwz 9, 0(26)
  05d3ad8  slw 0, 0, 27
  05d3adc  and 11, 9, 0
  05d3ae0  cmpwi 11, 0
  05d3ae4  bf 2, 0x5d423c
  05d3ae8  or 0, 9, 0
  05d3aec  mr 10, 28
  05d3af0  clrldi 8, 28, 32
  05d3af4  stw 0, 0(26)
  05d3af8  clrldi 11, 25, 32
  05d3afc  clrldi 9, 10, 32
  05d3b00  stw 25, 8(8)
  05d3b04  stw 10, 8(11)
  05d3b08  stw 25, 12(9)
  05d3b0c  stw 28, 12(11)
  05d3b10  stw 31, 8(26)
  05d3b14  stw 24, 20(26)
  05d3b18  b 0x5d37cc
  05d3b1c  li 0, 2
  05d3b20  slw 0, 0, 10
  05d3b24  neg 9, 0
  05d3b28  or 0, 0, 9
  05d3b2c  and 0, 6, 0
  05d3b30  cmpwi 0, 0
  05d3b34  bt 2, 0x5d3628
  05d3b38  neg 9, 0
  05d3b3c  and 9, 0, 9
  05d3b40  addi 9, 9, -1
  05d3b44  rlwinm 11, 9, 20, 27, 27
  05d3b48  srw 9, 9, 11
  05d3b4c  rlwinm 0, 9, 27, 28, 28
  05d3b50  srw 9, 9, 0
  05d3b54  add 11, 11, 0
  05d3b58  rlwinm 10, 9, 30, 29, 29
  05d3b5c  srw 9, 9, 10
  05d3b60  add 11, 11, 10
  05d3b64  rlwinm 0, 9, 31, 30, 30
  05d3b68  srw 9, 9, 0
  05d3b6c  add 11, 11, 0
  05d3b70  rldicl 10, 9, 63, 63
  05d3b74  srw 9, 9, 10
  05d3b78  add 11, 11, 9
  05d3b7c  add 11, 11, 10
  05d3b80  slwi 11, 11, 2
  05d3b84  add 11, 11, 27
  05d3b88  clrldi 11, 11, 32
  05d3b8c  lwz 11, 0(11)
  05d3b90  b 0x5d3628
  05d3b94  mr 11, 9
  05d3b98  b 0x5d3638
  05d3b9c  lwz 4, -24288(2)
  05d3ba0  lwz 3, -24252(2)
  05d3ba4  addi 4, 4, 16
  05d3ba8  bl 0x5cef7c
  05d3bac  nop
  05d3bb0  b 0x5d323c
  05d3bb4  lwz 4, -24288(2)
  05d3bb8  lwz 3, -24256(2)
  05d3bbc  addi 4, 4, 16
  05d3bc0  bl 0x5cef7c
  05d3bc4  nop
  05d3bc8  b 0x5d3234
  05d3bcc  lwz 9, 0(26)
  05d3bd0  slw 0, 19, 21
  05d3bd4  andc 0, 9, 0
  05d3bd8  stw 0, 0(26)
  05d3bdc  b 0x5d3404
  05d3be0  bl 0x5d16bc
  05d3be4  lwz 9, 8(31)
  05d3be8  addi 0, 9, 49
  05d3bec  neg 9, 9
  05d3bf0  add 0, 0, 30
  05d3bf4  and 28, 0, 9
  05d3bf8  cmplw 7, 28, 30
  05d3bfc  bf 29, 0x5d3148
  05d3c00  lwz 9, 36(31)
  05d3c04  cmpwi 7, 9, 0
  05d3c08  bt 30, 0x5d3eb4
  05d3c0c  lwz 0, 432(26)
  05d3c10  add 0, 28, 0
  05d3c14  cmplw 7, 0, 9
  05d3c18  bf 29, 0x5d3eb4
  05d3c1c  li 0, -1
  05d3c20  stw 0, 112(1)
  05d3c24  b 0x5d3148
  05d3c28  add 9, 24, 31
  05d3c2c  clrldi 7, 24, 32
  05d3c30  clrldi 9, 9, 32
  05d3c34  srwi 10, 31, 3
  05d3c38  ori 11, 30, 3
  05d3c3c  cmplwi 7, 10, 31
  05d3c40  ori 0, 31, 1
  05d3c44  stw 11, 4(28)
  05d3c48  stw 0, 4(7)
  05d3c4c  stw 31, 0(9)
  05d3c50  bt 29, 0x5d3dec
  05d3c54  li 0, 1
  05d3c58  lwz 6, 0(26)
  05d3c5c  addi 9, 26, 36
  05d3c60  slw 11, 0, 10
  05d3c64  and 0, 6, 11
  05d3c68  cmpwi 0, 0
  05d3c6c  slwi 0, 10, 3
  05d3c70  add 8, 9, 0
  05d3c74  bf 2, 0x5d4284
  05d3c78  or 0, 6, 11
  05d3c7c  clrldi 10, 8, 32
  05d3c80  mr 11, 8
  05d3c84  stw 0, 0(26)
  05d3c88  clrldi 9, 11, 32
  05d3c8c  stw 24, 8(10)
  05d3c90  stw 11, 8(7)
  05d3c94  stw 24, 12(9)
  05d3c98  stw 8, 12(7)
  05d3c9c  b 0x5d37cc
  05d3ca0  addi 7, 29, 20
  05d3ca4  addi 0, 29, 16
  05d3ca8  clrldi 9, 7, 32
  05d3cac  lwz 10, 0(9)
  05d3cb0  cmpwi 7, 10, 0
  05d3cb4  bf 30, 0x5d3cc4
  05d3cb8  b 0x5d429c
  05d3cbc  lwz 10, 0(9)
  05d3cc0  mr 7, 11
  05d3cc4  addi 11, 10, 20
  05d3cc8  addi 8, 10, 16
  05d3ccc  clrldi 9, 11, 32
  05d3cd0  lwz 0, 0(9)
  05d3cd4  cmpwi 7, 0, 0
  05d3cd8  bf 30, 0x5d3cbc
  05d3cdc  clrldi 9, 8, 32
  05d3ce0  lwz 0, 0(9)
  05d3ce4  cmpwi 7, 0, 0
  05d3ce8  bt 30, 0x5d3d60
  05d3cec  mr 11, 8
  05d3cf0  b 0x5d3cbc
  05d3cf4  addi 0, 29, 20
  05d3cf8  addi 7, 29, 16
  05d3cfc  clrldi 9, 0, 32
  05d3d00  lwz 8, 0(9)
  05d3d04  cmpwi 7, 8, 0
  05d3d08  bt 30, 0x5d42b4
  05d3d0c  mr 7, 0
  05d3d10  b 0x5d3d20
  05d3d14  mr 11, 10
  05d3d18  lwz 8, 0(9)
  05d3d1c  mr 7, 11
  05d3d20  addi 10, 8, 20
  05d3d24  addi 11, 8, 16
  05d3d28  clrldi 9, 10, 32
  05d3d2c  lwz 0, 0(9)
  05d3d30  cmpwi 7, 0, 0
  05d3d34  bf 30, 0x5d3d14
  05d3d38  clrldi 9, 11, 32
  05d3d3c  lwz 0, 0(9)
  05d3d40  cmpwi 7, 0, 0
  05d3d44  bf 30, 0x5d3d18
  05d3d48  lwz 11, 16(26)
  05d3d4c  cmplw 7, 11, 7
  05d3d50  bt- 29, 0x5d3d8c
  05d3d54  clrldi 9, 7, 32
  05d3d58  stw 0, 0(9)
  05d3d5c  b 0x5d370c
  05d3d60  lwz 11, 16(26)
  05d3d64  cmplw 7, 11, 7
  05d3d68  bt- 29, 0x5d3d8c
  05d3d6c  clrldi 9, 7, 32
  05d3d70  stw 0, 0(9)
  05d3d74  b 0x5d39d4
  05d3d78  clrldi 8, 31, 32
  05d3d7c  lwz 0, 16(26)
  05d3d80  lwz 10, 8(8)
  05d3d84  cmplw 7, 0, 10
  05d3d88  bf+ 29, 0x5d3480
  05d3d8c  bl 0x5c4840
  05d3d90  nop
  05d3d94  lwz 4, -24288(2)
  05d3d98  lwz 3, -24224(2)
  05d3d9c  addi 4, 4, 16
  05d3da0  bl 0x5cef7c
  05d3da4  nop
  05d3da8  b 0x5d3458
  05d3dac  lwz 4, -24288(2)
  05d3db0  lwz 3, -24228(2)
  05d3db4  addi 4, 4, 16
  05d3db8  bl 0x5cef7c
  05d3dbc  nop
  05d3dc0  b 0x5d3448
  05d3dc4  cmpwi 7, 10, 0
  05d3dc8  stw 10, 0(11)
  05d3dcc  bt 30, 0x5d42e0
  05d3dd0  lwz 11, 16(26)
  05d3dd4  b 0x5d3a20
  05d3dd8  cmpwi 7, 8, 0
  05d3ddc  stw 8, 0(11)
  05d3de0  bt 30, 0x5d42c8
  05d3de4  lwz 11, 16(26)
  05d3de8  b 0x5d3758
  05d3dec  srwi 9, 31, 8
  05d3df0  li 10, 0
  05d3df4  cmpwi 7, 9, 0
  05d3df8  li 8, 0
  05d3dfc  li 6, 1
  05d3e00  bt 30, 0x5d3e70
  05d3e04  cmplwi 7, 9, 65535
  05d3e08  li 10, 31
  05d3e0c  li 8, 124
  05d3e10  lis 6, -32768
  05d3e14  bt 29, 0x5d3e70
  05d3e18  addi 10, 9, -256
  05d3e1c  rlwinm 10, 10, 16, 28, 28
  05d3e20  slw 9, 9, 10
  05d3e24  addi 0, 9, -4096
  05d3e28  rlwinm 0, 0, 16, 29, 29
  05d3e2c  slw 9, 9, 0
  05d3e30  add 10, 10, 0
  05d3e34  addi 11, 9, -16384
  05d3e38  rlwinm 11, 11, 16, 30, 30
  05d3e3c  slw 9, 9, 11
  05d3e40  add 10, 10, 11
  05d3e44  srwi 9, 9, 15
  05d3e48  li 11, 1
  05d3e4c  sub 9, 9, 10
  05d3e50  addi 0, 9, 21
  05d3e54  addi 9, 9, 14
  05d3e58  srw 0, 31, 0
  05d3e5c  slwi 9, 9, 1
  05d3e60  clrlwi 0, 0, 31
  05d3e64  add 10, 9, 0
  05d3e68  slw 6, 11, 10
  05d3e6c  slwi 8, 10, 2
  05d3e70  stw 10, 28(7)
  05d3e74  lwz 11, 4(26)
  05d3e78  li 0, 0
  05d3e7c  add 8, 27, 8
  05d3e80  and 9, 6, 11
  05d3e84  stw 0, 16(7)
  05d3e88  cmpwi 9, 0
  05d3e8c  stw 0, 20(7)
  05d3e90  bf 2, 0x5d41b0
  05d3e94  clrldi 9, 8, 32
  05d3e98  or 0, 6, 11
  05d3e9c  stw 0, 4(26)
  05d3ea0  stw 24, 0(9)
  05d3ea4  stw 24, 8(7)
  05d3ea8  stw 8, 24(7)
  05d3eac  stw 24, 12(7)
  05d3eb0  b 0x5d37cc
  05d3eb4  lwz 9, -24304(2)
  05d3eb8  clrldi 3, 28, 32
  05d3ebc  addi 5, 1, 112
  05d3ec0  li 11, 348
  05d3ec4  lwz 0, 0(9)
  05d3ec8  xoris 0, 0, 16
  05d3ecc  srawi 9, 0, 31
  05d3ed0  xor 4, 9, 0
  05d3ed4  sub 4, 9, 4
  05d3ed8  srawi 4, 4, 31
  05d3edc  extsw 4, 4
  05d3ee0  rldicr 4, 4, 0, 54
  05d3ee4  addi 4, 4, 1024
  05d3ee8  sc
  05d3eec  cmpwi 4, 3, 0
  05d3ef0  bf 18, 0x5d3c1c
  05d3ef4  lwz 27, 112(1)
  05d3ef8  cmpwi 7, 27, -1
  05d3efc  bt 30, 0x5d3148
  05d3f00  lwz 0, 428(26)
  05d3f04  lwz 9, 432(26)
  05d3f08  add 0, 28, 0
  05d3f0c  cmplw 7, 9, 0
  05d3f10  stw 0, 428(26)
  05d3f14  bf 28, 0x5d3f1c
  05d3f18  stw 0, 432(26)
  05d3f1c  lwz 29, 24(26)
  05d3f20  cmpwi 7, 29, 0
  05d3f24  bt 30, 0x5d47b0
  05d3f28  addi 7, 26, 472
  05d3f2c  cmpwi 6, 7, 0
  05d3f30  bt 26, 0x5d3f78
  05d3f34  lwz 8, 0(7)
  05d3f38  clrldi 10, 7, 32
  05d3f3c  lwz 6, 4(7)
  05d3f40  add 11, 8, 6
  05d3f44  cmpw 7, 11, 27
  05d3f48  bt 30, 0x5d4348
  05d3f4c  mr 9, 7
  05d3f50  b 0x5d3f6c
  05d3f54  clrldi 10, 9, 32
  05d3f58  lwz 8, 0(10)
  05d3f5c  lwz 6, 4(10)
  05d3f60  add 11, 8, 6
  05d3f64  cmpw 7, 11, 27
  05d3f68  bt 30, 0x5d4348
  05d3f6c  lwz 9, 8(9)
  05d3f70  cmpwi 7, 9, 0
  05d3f74  bf 30, 0x5d3f54
  05d3f78  lwz 0, 16(26)
  05d3f7c  cmplw 7, 0, 27
  05d3f80  bf 29, 0x5d3f88
  05d3f84  stw 27, 16(26)
  05d3f88  bt 26, 0x5d3fbc
  05d3f8c  add 10, 28, 27
  05d3f90  lwz 0, 0(7)
  05d3f94  cmpw 7, 0, 10
  05d3f98  bf 30, 0x5d3fb0
  05d3f9c  b 0x5d438c
  05d3fa0  clrldi 9, 7, 32
  05d3fa4  lwz 0, 0(9)
  05d3fa8  cmpw 7, 0, 10
  05d3fac  bt 30, 0x5d438c
  05d3fb0  lwz 7, 8(7)
  05d3fb4  cmpwi 7, 7, 0
  05d3fb8  bf 30, 0x5d3fa0
  05d3fbc  clrldi 24, 29, 32
  05d3fc0  mr 3, 23
  05d3fc4  mr 4, 24
  05d3fc8  bl 0x5d0d34
  05d3fcc  li 10, 0
  05d3fd0  lwz 11, 4(3)
  05d3fd4  lwz 0, 0(3)
  05d3fd8  add 31, 0, 11
  05d3fdc  addi 9, 31, -55
  05d3fe0  addi 11, 31, -63
  05d3fe4  clrlwi 9, 9, 28
  05d3fe8  cmpwi 7, 9, 0
  05d3fec  bt 30, 0x5d3ff8
  05d3ff0  subfic 0, 9, 16
  05d3ff4  clrlwi 10, 0, 28
  05d3ff8  add 25, 11, 10
  05d3ffc  addi 0, 29, 16
  05d4000  cmplw 7, 0, 25
  05d4004  bf 29, 0x5d400c
  05d4008  mr 25, 29
  05d400c  lwz 9, 436(26)
  05d4010  addi 21, 25, 8
  05d4014  lwz 0, 440(26)
  05d4018  addi 9, 9, 64
  05d401c  cmplw 7, 0, 9
  05d4020  stw 9, 436(26)
  05d4024  bf 28, 0x5d402c
  05d4028  stw 9, 440(26)
  05d402c  addi 5, 28, -48
  05d4030  mr 3, 23
  05d4034  clrldi 5, 5, 32
  05d4038  clrldi 4, 27, 32
  05d403c  bl 0x5d15ec
  05d4040  clrlwi 0, 21, 28
  05d4044  cmpwi 7, 0, 0
  05d4048  bf 30, 0x5d46b4
  05d404c  clrldi 11, 25, 32
  05d4050  lwz 10, 480(26)
  05d4054  clrldi 9, 21, 32
  05d4058  li 0, 35
  05d405c  li 7, 0
  05d4060  addi 8, 25, 36
  05d4064  stw 0, 4(11)
  05d4068  li 0, 1
  05d406c  li 6, 7
  05d4070  stw 10, 8(9)
  05d4074  stw 27, 0(9)
  05d4078  stw 28, 4(9)
  05d407c  stw 0, 12(9)
  05d4080  stw 21, 480(26)
  05d4084  clrldi 9, 8, 32
  05d4088  addi 8, 8, 4
  05d408c  addi 7, 7, 1
  05d4090  cmplw 7, 8, 31
  05d4094  stw 6, 0(9)
  05d4098  bt 28, 0x5d4084
  05d409c  cmpwi 7, 7, 1
  05d40a0  bt 30, 0x5d46cc
  05d40a4  cmpw 7, 25, 29
  05d40a8  bt 30, 0x5d4128
  05d40ac  clrldi 9, 25, 32
  05d40b0  sub 7, 25, 29
  05d40b4  srwi 28, 7, 3
  05d40b8  ori 11, 7, 1
  05d40bc  lwz 0, 4(9)
  05d40c0  cmplwi 7, 28, 31
  05d40c4  stw 7, 0(9)
  05d40c8  rlwinm 0, 0, 0, 0, 30
  05d40cc  stw 0, 4(9)
  05d40d0  stw 11, 4(24)
  05d40d4  bt 29, 0x5d45f0
  05d40d8  cmplwi 7, 7, 15
  05d40dc  addi 9, 26, 36
  05d40e0  slwi 0, 28, 3
  05d40e4  add 31, 9, 0
  05d40e8  bf 29, 0x5d4824
  05d40ec  li 0, 1
  05d40f0  lwz 9, 0(26)
  05d40f4  slw 0, 0, 28
  05d40f8  and 11, 9, 0
  05d40fc  cmpwi 11, 0
  05d4100  bf 2, 0x5d480c
  05d4104  or 0, 9, 0
  05d4108  mr 11, 31
  05d410c  clrldi 10, 31, 32
  05d4110  stw 0, 0(26)
  05d4114  clrldi 9, 11, 32
  05d4118  stw 29, 8(10)
  05d411c  stw 11, 8(24)
  05d4120  stw 29, 12(9)
  05d4124  stw 31, 12(24)
  05d4128  mr 3, 23
  05d412c  lwz 4, 24(26)
  05d4130  bl 0x5d0dbc
  05d4134  lwz 8, 12(26)
  05d4138  cmplw 7, 8, 30
  05d413c  bf 29, 0x5d3148
  05d4140  lwz 9, 24(26)
  05d4144  sub 8, 8, 30
  05d4148  ori 10, 30, 3
  05d414c  add 7, 9, 30
  05d4150  clrldi 6, 9, 32
  05d4154  clrldi 11, 7, 32
  05d4158  ori 0, 8, 1
  05d415c  mr 4, 11
  05d4160  mr 3, 23
  05d4164  stw 8, 12(26)
  05d4168  stw 7, 24(26)
  05d416c  stw 0, 4(11)
  05d4170  addi 31, 9, 8
  05d4174  stw 10, 4(6)
  05d4178  bl 0x5d0dbc
  05d417c  b 0x5d32a0
  05d4180  lwz 4, -24288(2)
  05d4184  lwz 3, -24236(2)
  05d4188  addi 4, 4, 16
  05d418c  bl 0x5cef7c
  05d4190  nop
  05d4194  b 0x5d33c0
  05d4198  lwz 4, -24288(2)
  05d419c  lwz 3, -24240(2)
  05d41a0  addi 4, 4, 16
  05d41a4  bl 0x5cef7c
  05d41a8  nop
  05d41ac  b 0x5d33b8
  05d41b0  clrldi 9, 8, 32
  05d41b4  cmpwi 7, 10, 31
  05d41b8  li 0, 0
  05d41bc  lwz 8, 0(9)
  05d41c0  bt 30, 0x5d41cc
  05d41c4  srwi 0, 10, 1
  05d41c8  subfic 0, 0, 25
  05d41cc  slw 10, 31, 0
  05d41d0  b 0x5d41dc
  05d41d4  slwi 10, 10, 1
  05d41d8  mr 8, 0
  05d41dc  clrldi 11, 8, 32
  05d41e0  lwz 0, 4(11)
  05d41e4  rlwinm 0, 0, 0, 0, 29
  05d41e8  cmpw 7, 0, 31
  05d41ec  bt 30, 0x5d42f8
  05d41f0  rlwinm 9, 10, 3, 29, 29
  05d41f4  addi 9, 9, 16
  05d41f8  add 9, 8, 9
  05d41fc  clrldi 11, 9, 32
  05d4200  lwz 0, 0(11)
  05d4204  cmpwi 7, 0, 0
  05d4208  bf 30, 0x5d41d4
  05d420c  lwz 0, 16(26)
  05d4210  cmplw 7, 0, 9
  05d4214  bt- 29, 0x5d3d8c
  05d4218  stw 24, 0(11)
  05d421c  stw 24, 8(7)
  05d4220  stw 8, 24(7)
  05d4224  stw 24, 12(7)
  05d4228  b 0x5d37cc
  05d422c  stw 8, 16(9)
  05d4230  b 0x5d3750
  05d4234  stw 10, 16(9)
  05d4238  b 0x5d3a18
  05d423c  clrldi 8, 28, 32
  05d4240  lwz 0, 16(26)
  05d4244  lwz 10, 8(8)
  05d4248  cmplw 7, 0, 10
  05d424c  bf+ 29, 0x5d3af8
  05d4250  b 0x5d3d8c
  05d4254  lwz 4, -24288(2)
  05d4258  lwz 3, -24212(2)
  05d425c  addi 4, 4, 32
  05d4260  bl 0x5cef7c
  05d4264  nop
  05d4268  b 0x5d3ad0
  05d426c  lwz 4, -24288(2)
  05d4270  lwz 3, -24216(2)
  05d4274  addi 4, 4, 32
  05d4278  bl 0x5cef7c
  05d427c  nop
  05d4280  b 0x5d3abc
  05d4284  clrldi 10, 8, 32
  05d4288  lwz 0, 16(26)
  05d428c  lwz 11, 8(10)
  05d4290  cmplw 7, 0, 11
  05d4294  bf+ 29, 0x5d3c88
  05d4298  b 0x5d3d8c
  05d429c  clrldi 9, 0, 32
  05d42a0  mr 7, 0
  05d42a4  lwz 10, 0(9)
  05d42a8  cmpwi 7, 10, 0
  05d42ac  bf 30, 0x5d3cc4
  05d42b0  b 0x5d39d4
  05d42b4  clrldi 9, 7, 32
  05d42b8  lwz 8, 0(9)
  05d42bc  cmpwi 7, 8, 0
  05d42c0  bf 30, 0x5d3d20
  05d42c4  b 0x5d370c
  05d42c8  li 0, -2
  05d42cc  lwz 9, 4(26)
  05d42d0  rotlw 0, 0, 10
  05d42d4  and 9, 9, 0
  05d42d8  stw 9, 4(26)
  05d42dc  b 0x5d37a8
  05d42e0  li 0, -2
  05d42e4  lwz 9, 4(26)
  05d42e8  rotlw 0, 0, 8
  05d42ec  and 9, 9, 0
  05d42f0  stw 9, 4(26)
  05d42f4  b 0x5d3a70
  05d42f8  lwz 0, 16(26)
  05d42fc  lwz 10, 8(11)
  05d4300  cmplw 7, 0, 8
  05d4304  bt 29, 0x5d3d8c
  05d4308  cmplw 7, 0, 10
  05d430c  li 0, 1
  05d4310  bt 29, 0x5d4318
  05d4314  li 0, 0
  05d4318  xori 0, 0, 1
  05d431c  clrlwi 0, 0, 24
  05d4320  cmpwi 7, 0, 0
  05d4324  bt- 30, 0x5d3d8c
  05d4328  clrldi 9, 10, 32
  05d432c  li 0, 0
  05d4330  stw 24, 8(11)
  05d4334  stw 0, 24(7)
  05d4338  stw 10, 8(7)
  05d433c  stw 24, 12(9)
  05d4340  stw 8, 12(7)
  05d4344  b 0x5d37cc
  05d4348  lwz 0, 12(10)
  05d434c  clrlwi 0, 0, 31
  05d4350  cmpwi 7, 0, 0
  05d4354  bt 30, 0x5d3f78
  05d4358  cmplw 7, 8, 29
  05d435c  bt 29, 0x5d3f78
  05d4360  cmplw 7, 11, 29
  05d4364  bf 29, 0x5d3f78
  05d4368  add 0, 6, 28
  05d436c  clrldi 4, 29, 32
  05d4370  stw 0, 4(10)
  05d4374  lwz 5, 12(26)
  05d4378  mr 3, 23
  05d437c  add 5, 28, 5
  05d4380  clrldi 5, 5, 32
  05d4384  bl 0x5d15ec
  05d4388  b 0x5d4134
  05d438c  lwz 0, 12(7)
  05d4390  clrlwi 0, 0, 31
  05d4394  cmpwi 7, 0, 0
  05d4398  bt 30, 0x5d3fbc
  05d439c  addi 0, 27, 8
  05d43a0  lwz 9, 4(7)
  05d43a4  stw 27, 0(7)
  05d43a8  clrlwi 0, 0, 28
  05d43ac  add 9, 9, 28
  05d43b0  cmpwi 7, 0, 0
  05d43b4  stw 9, 4(7)
  05d43b8  li 11, 0
  05d43bc  bt 30, 0x5d43c8
  05d43c0  subfic 0, 0, 16
  05d43c4  clrlwi 11, 0, 28
  05d43c8  addi 0, 10, 8
  05d43cc  add 21, 11, 27
  05d43d0  clrlwi 0, 0, 28
  05d43d4  li 9, 0
  05d43d8  cmpwi 7, 0, 0
  05d43dc  bt 30, 0x5d43e8
  05d43e0  subfic 0, 0, 16
  05d43e4  clrlwi 9, 0, 28
  05d43e8  add 31, 9, 10
  05d43ec  add 28, 21, 30
  05d43f0  clrldi 11, 21, 32
  05d43f4  cmplw 7, 31, 28
  05d43f8  ori 0, 30, 3
  05d43fc  sub 9, 31, 21
  05d4400  stw 0, 4(11)
  05d4404  sub 24, 9, 30
  05d4408  bt 29, 0x5d4420
  05d440c  lwz 4, -24288(2)
  05d4410  lwz 3, -24204(2)
  05d4414  addi 4, 4, 64
  05d4418  bl 0x5cef7c
  05d441c  nop
  05d4420  clrldi 30, 31, 32
  05d4424  lwz 0, 4(30)
  05d4428  clrlwi 0, 0, 31
  05d442c  cmpwi 7, 0, 0
  05d4430  bf 30, 0x5d4448
  05d4434  lwz 4, -24288(2)
  05d4438  lwz 3, -24200(2)
  05d443c  addi 4, 4, 64
  05d4440  bl 0x5cef7c
  05d4444  nop
  05d4448  cmplwi 7, 24, 15
  05d444c  bt 29, 0x5d4464
  05d4450  lwz 4, -24288(2)
  05d4454  lwz 3, -24196(2)
  05d4458  addi 4, 4, 64
  05d445c  bl 0x5cef7c
  05d4460  nop
  05d4464  lwz 0, 24(26)
  05d4468  cmpw 7, 0, 31
  05d446c  bt 30, 0x5d4934
  05d4470  lwz 0, 20(26)
  05d4474  cmpw 7, 0, 31
  05d4478  bt 30, 0x5d4904
  05d447c  lwz 9, 4(30)
  05d4480  rlwinm 0, 9, 0, 30, 30
  05d4484  cmpwi 7, 0, 0
  05d4488  bf 30, 0x5d4568
  05d448c  rlwinm 20, 9, 0, 0, 29
  05d4490  srwi 29, 20, 3
  05d4494  cmplwi 7, 29, 31
  05d4498  bt 29, 0x5d4a5c
  05d449c  lwz 25, 12(30)
  05d44a0  lwz 27, 8(30)
  05d44a4  cmpw 7, 31, 25
  05d44a8  bf 30, 0x5d44c0
  05d44ac  lwz 4, -24288(2)
  05d44b0  lwz 3, -24192(2)
  05d44b4  addi 4, 4, 64
  05d44b8  bl 0x5cef7c
  05d44bc  nop
  05d44c0  cmpw 7, 31, 27
  05d44c4  bf 30, 0x5d44dc
  05d44c8  lwz 4, -24288(2)
  05d44cc  lwz 3, -24188(2)
  05d44d0  addi 4, 4, 64
  05d44d4  bl 0x5cef7c
  05d44d8  nop
  05d44dc  lwz 0, 4(30)
  05d44e0  slwi 30, 29, 3
  05d44e4  rlwinm 0, 0, 0, 0, 29
  05d44e8  cmpw 7, 0, 30
  05d44ec  bt 30, 0x5d4504
  05d44f0  lwz 4, -24288(2)
  05d44f4  lwz 3, -24184(2)
  05d44f8  addi 4, 4, 64
  05d44fc  bl 0x5cef7c
  05d4500  nop
  05d4504  cmpw 7, 27, 25
  05d4508  bt 30, 0x5d4a44
  05d450c  addi 0, 26, 36
  05d4510  add 9, 0, 30
  05d4514  cmpw 7, 27, 9
  05d4518  bt 30, 0x5d4528
  05d451c  lwz 0, 16(26)
  05d4520  cmplw 7, 0, 27
  05d4524  bt 29, 0x5d3d8c
  05d4528  cmpw 7, 25, 9
  05d452c  bt 30, 0x5d454c
  05d4530  lwz 0, 16(26)
  05d4534  li 9, 1
  05d4538  cmplw 7, 0, 25
  05d453c  bf 29, 0x5d4544
  05d4540  li 9, 0
  05d4544  cmpwi 7, 9, 0
  05d4548  bt- 30, 0x5d3d8c
  05d454c  clrldi 9, 25, 32
  05d4550  clrldi 11, 27, 32
  05d4554  stw 27, 8(9)
  05d4558  stw 25, 12(11)
  05d455c  add 31, 31, 20
  05d4560  add 24, 24, 20
  05d4564  clrldi 30, 31, 32
  05d4568  add 9, 28, 24
  05d456c  lwz 0, 4(30)
  05d4570  clrldi 31, 28, 32
  05d4574  clrldi 9, 9, 32
  05d4578  srwi 29, 24, 3
  05d457c  rlwinm 0, 0, 0, 0, 30
  05d4580  cmplwi 7, 29, 31
  05d4584  ori 11, 24, 1
  05d4588  stw 0, 4(30)
  05d458c  stw 24, 0(9)
  05d4590  stw 11, 4(31)
  05d4594  bt 29, 0x5d483c
  05d4598  cmplwi 7, 24, 15
  05d459c  addi 9, 26, 36
  05d45a0  slwi 0, 29, 3
  05d45a4  add 30, 9, 0
  05d45a8  bf 29, 0x5d4a2c
  05d45ac  li 0, 1
  05d45b0  lwz 9, 0(26)
  05d45b4  slw 0, 0, 29
  05d45b8  and 11, 9, 0
  05d45bc  cmpwi 11, 0
  05d45c0  bf 2, 0x5d4a14
  05d45c4  or 0, 9, 0
  05d45c8  mr 11, 30
  05d45cc  clrldi 10, 30, 32
  05d45d0  stw 0, 0(26)
  05d45d4  clrldi 9, 11, 32
  05d45d8  stw 28, 8(10)
  05d45dc  stw 11, 8(31)
  05d45e0  stw 28, 12(9)
  05d45e4  stw 30, 12(31)
  05d45e8  addi 31, 21, 8
  05d45ec  b 0x5d32a0
  05d45f0  srwi 9, 7, 8
  05d45f4  li 10, 0
  05d45f8  cmpwi 7, 9, 0
  05d45fc  li 11, 1
  05d4600  bt 30, 0x5d4668
  05d4604  cmplwi 7, 9, 65535
  05d4608  li 10, 31
  05d460c  lis 11, -32768
  05d4610  bt 29, 0x5d4668
  05d4614  addi 10, 9, -256
  05d4618  rlwinm 10, 10, 16, 28, 28
  05d461c  slw 9, 9, 10
  05d4620  addi 0, 9, -4096
  05d4624  rlwinm 0, 0, 16, 29, 29
  05d4628  slw 9, 9, 0
  05d462c  add 10, 10, 0
  05d4630  addi 11, 9, -16384
  05d4634  rlwinm 11, 11, 16, 30, 30
  05d4638  slw 9, 9, 11
  05d463c  add 10, 10, 11
  05d4640  srwi 9, 9, 15
  05d4644  li 11, 1
  05d4648  sub 9, 9, 10
  05d464c  addi 0, 9, 21
  05d4650  addi 9, 9, 14
  05d4654  srw 0, 7, 0
  05d4658  slwi 9, 9, 1
  05d465c  clrlwi 0, 0, 31
  05d4660  add 10, 9, 0
  05d4664  slw 11, 11, 10
  05d4668  stw 10, 28(24)
  05d466c  lwz 6, 4(26)
  05d4670  slwi 9, 10, 2
  05d4674  and 0, 6, 11
  05d4678  add 9, 9, 26
  05d467c  cmpwi 0, 0
  05d4680  li 0, 0
  05d4684  addi 8, 9, 300
  05d4688  stw 0, 16(24)
  05d468c  stw 0, 20(24)
  05d4690  bf 2, 0x5d46e4
  05d4694  clrldi 9, 8, 32
  05d4698  or 0, 6, 11
  05d469c  stw 0, 4(26)
  05d46a0  stw 29, 0(9)
  05d46a4  stw 29, 8(24)
  05d46a8  stw 8, 24(24)
  05d46ac  stw 29, 12(24)
  05d46b0  b 0x5d4128
  05d46b4  lwz 4, -24288(2)
  05d46b8  lwz 3, -24176(2)
  05d46bc  addi 4, 4, 80
  05d46c0  bl 0x5cef7c
  05d46c4  nop
  05d46c8  b 0x5d404c
  05d46cc  lwz 4, -24288(2)
  05d46d0  lwz 3, -24172(2)
  05d46d4  addi 4, 4, 80
  05d46d8  bl 0x5cef7c
  05d46dc  nop
  05d46e0  b 0x5d40a4
  05d46e4  clrldi 9, 8, 32
  05d46e8  cmpwi 7, 10, 31
  05d46ec  li 0, 0
  05d46f0  lwz 6, 0(9)
  05d46f4  bt 30, 0x5d4700
  05d46f8  srwi 0, 10, 1
  05d46fc  subfic 0, 0, 25
  05d4700  slw 10, 7, 0
  05d4704  b 0x5d4710
  05d4708  slwi 10, 10, 1
  05d470c  mr 6, 0
  05d4710  clrldi 8, 6, 32
  05d4714  lwz 0, 4(8)
  05d4718  rlwinm 0, 0, 0, 0, 29
  05d471c  cmpw 7, 0, 7
  05d4720  bt 30, 0x5d4760
  05d4724  rlwinm 9, 10, 3, 29, 29
  05d4728  addi 9, 9, 16
  05d472c  add 9, 6, 9
  05d4730  clrldi 11, 9, 32
  05d4734  lwz 0, 0(11)
  05d4738  cmpwi 7, 0, 0
  05d473c  bf 30, 0x5d4708
  05d4740  lwz 0, 16(26)
  05d4744  cmplw 7, 0, 9
  05d4748  bt- 29, 0x5d3d8c
  05d474c  stw 29, 0(11)
  05d4750  stw 29, 8(24)
  05d4754  stw 6, 24(24)
  05d4758  stw 29, 12(24)
  05d475c  b 0x5d4128
  05d4760  lwz 0, 16(26)
  05d4764  lwz 11, 8(8)
  05d4768  cmplw 7, 0, 6
  05d476c  bt 29, 0x5d3d8c
  05d4770  cmplw 7, 0, 11
  05d4774  li 0, 1
  05d4778  bt 29, 0x5d4780
  05d477c  li 0, 0
  05d4780  xori 0, 0, 1
  05d4784  clrlwi 0, 0, 24
  05d4788  cmpwi 7, 0, 0
  05d478c  bt- 30, 0x5d3d8c
  05d4790  clrldi 9, 11, 32
  05d4794  li 0, 0
  05d4798  stw 29, 8(8)
  05d479c  stw 0, 24(24)
  05d47a0  stw 11, 8(24)
  05d47a4  stw 29, 12(9)
  05d47a8  stw 6, 12(24)
  05d47ac  b 0x5d4128
  05d47b0  li 0, 1
  05d47b4  stw 28, 476(26)
  05d47b8  stw 0, 484(26)
  05d47bc  lwz 9, 0(31)
  05d47c0  mr 3, 23
  05d47c4  stw 27, 16(26)
  05d47c8  stw 9, 32(26)
  05d47cc  lwz 0, 20(31)
  05d47d0  stw 27, 472(26)
  05d47d4  stw 0, 444(26)
  05d47d8  bl 0x5d1650
  05d47dc  lwz 0, 440(26)
  05d47e0  li 9, 64
  05d47e4  cmplwi 7, 0, 63
  05d47e8  stw 9, 436(26)
  05d47ec  bt 29, 0x5d47f4
  05d47f0  stw 9, 440(26)
  05d47f4  addi 5, 28, -48
  05d47f8  clrldi 4, 27, 32
  05d47fc  clrldi 5, 5, 32
  05d4800  mr 3, 23
  05d4804  bl 0x5d15ec
  05d4808  b 0x5d4134
  05d480c  clrldi 10, 31, 32
  05d4810  lwz 0, 16(26)
  05d4814  lwz 11, 8(10)
  05d4818  cmplw 7, 0, 11
  05d481c  bf+ 29, 0x5d4114
  05d4820  b 0x5d3d8c
  05d4824  lwz 4, -24288(2)
  05d4828  lwz 3, -24168(2)
  05d482c  addi 4, 4, 80
  05d4830  bl 0x5cef7c
  05d4834  nop
  05d4838  b 0x5d40ec
  05d483c  srwi 9, 24, 8
  05d4840  li 10, 0
  05d4844  cmpwi 7, 9, 0
  05d4848  li 11, 1
  05d484c  bt 30, 0x5d48b4
  05d4850  cmplwi 7, 9, 65535
  05d4854  li 10, 31
  05d4858  lis 11, -32768
  05d485c  bt 29, 0x5d48b4
  05d4860  addi 10, 9, -256
  05d4864  rlwinm 10, 10, 16, 28, 28
  05d4868  slw 9, 9, 10
  05d486c  addi 0, 9, -4096
  05d4870  rlwinm 0, 0, 16, 29, 29
  05d4874  slw 9, 9, 0
  05d4878  add 10, 10, 0
  05d487c  addi 11, 9, -16384
  05d4880  rlwinm 11, 11, 16, 30, 30
  05d4884  slw 9, 9, 11
  05d4888  add 10, 10, 11
  05d488c  srwi 9, 9, 15
  05d4890  li 11, 1
  05d4894  sub 9, 9, 10
  05d4898  addi 0, 9, 21
  05d489c  addi 9, 9, 14
  05d48a0  srw 0, 24, 0
  05d48a4  slwi 9, 9, 1
  05d48a8  clrlwi 0, 0, 31
  05d48ac  add 10, 9, 0
  05d48b0  slw 11, 11, 10
  05d48b4  stw 10, 28(31)
  05d48b8  lwz 7, 4(26)
  05d48bc  slwi 9, 10, 2
  05d48c0  and 0, 11, 7
  05d48c4  add 9, 9, 26
  05d48c8  cmpwi 0, 0
  05d48cc  li 0, 0
  05d48d0  addi 8, 9, 300
  05d48d4  stw 0, 16(31)
  05d48d8  stw 0, 20(31)
  05d48dc  bf 2, 0x5d4964
  05d48e0  clrldi 9, 8, 32
  05d48e4  or 0, 11, 7
  05d48e8  stw 0, 4(26)
  05d48ec  stw 28, 0(9)
  05d48f0  stw 28, 8(31)
  05d48f4  stw 8, 24(31)
  05d48f8  stw 28, 12(31)
  05d48fc  addi 31, 21, 8
  05d4900  b 0x5d32a0
  05d4904  lwz 0, 8(26)
  05d4908  clrldi 10, 28, 32
  05d490c  addi 31, 21, 8
  05d4910  add 0, 24, 0
  05d4914  stw 28, 20(26)
  05d4918  add 9, 28, 0
  05d491c  ori 11, 0, 1
  05d4920  clrldi 9, 9, 32
  05d4924  stw 0, 8(26)
  05d4928  stw 11, 4(10)
  05d492c  stw 0, 0(9)
  05d4930  b 0x5d32a0
  05d4934  lwz 0, 12(26)
  05d4938  clrldi 11, 28, 32
  05d493c  mr 3, 23
  05d4940  add 0, 24, 0
  05d4944  mr 4, 11
  05d4948  ori 9, 0, 1
  05d494c  stw 0, 12(26)
  05d4950  stw 28, 24(26)
  05d4954  stw 9, 4(11)
  05d4958  addi 31, 21, 8
  05d495c  bl 0x5d0dbc
  05d4960  b 0x5d32a0
  05d4964  clrldi 9, 8, 32
  05d4968  cmpwi 7, 10, 31
  05d496c  li 0, 0
  05d4970  lwz 7, 0(9)
  05d4974  bt 30, 0x5d4980
  05d4978  srwi 0, 10, 1
  05d497c  subfic 0, 0, 25
  05d4980  slw 10, 24, 0
  05d4984  b 0x5d49ac
  05d4988  rlwinm 9, 10, 3, 29, 29
  05d498c  addi 9, 9, 16
  05d4990  add 9, 7, 9
  05d4994  clrldi 11, 9, 32
  05d4998  lwz 0, 0(11)
  05d499c  cmpwi 7, 0, 0
  05d49a0  bt 30, 0x5d4bb8
  05d49a4  slwi 10, 10, 1
  05d49a8  mr 7, 0
  05d49ac  clrldi 8, 7, 32
  05d49b0  lwz 0, 4(8)
  05d49b4  rlwinm 0, 0, 0, 0, 29
  05d49b8  cmpw 7, 0, 24
  05d49bc  bf 30, 0x5d4988
  05d49c0  lwz 0, 16(26)
  05d49c4  lwz 11, 8(8)
  05d49c8  cmplw 7, 0, 7
  05d49cc  bt 29, 0x5d3d8c
  05d49d0  cmplw 7, 0, 11
  05d49d4  li 0, 1
  05d49d8  bt 29, 0x5d49e0
  05d49dc  li 0, 0
  05d49e0  xori 0, 0, 1
  05d49e4  clrlwi 0, 0, 24
  05d49e8  cmpwi 7, 0, 0
  05d49ec  bt- 30, 0x5d3d8c
  05d49f0  clrldi 9, 11, 32
  05d49f4  li 0, 0
  05d49f8  stw 28, 8(8)
  05d49fc  stw 0, 24(31)
  05d4a00  stw 11, 8(31)
  05d4a04  stw 28, 12(9)
  05d4a08  stw 7, 12(31)
  05d4a0c  addi 31, 21, 8
  05d4a10  b 0x5d32a0
  05d4a14  clrldi 10, 30, 32
  05d4a18  lwz 0, 16(26)
  05d4a1c  lwz 11, 8(10)
  05d4a20  cmplw 7, 0, 11
  05d4a24  bf+ 29, 0x5d45d4
  05d4a28  b 0x5d3d8c
  05d4a2c  lwz 4, -24288(2)
  05d4a30  lwz 3, -24180(2)
  05d4a34  addi 4, 4, 64
  05d4a38  bl 0x5cef7c
  05d4a3c  nop
  05d4a40  b 0x5d45ac
  05d4a44  li 0, -2
  05d4a48  lwz 9, 0(26)
  05d4a4c  rotlw 0, 0, 29
  05d4a50  and 9, 9, 0
  05d4a54  stw 9, 0(26)
  05d4a58  b 0x5d455c
  05d4a5c  lwz 10, 12(30)
  05d4a60  lwz 6, 24(30)
  05d4a64  cmpw 7, 31, 10
  05d4a68  bt 30, 0x5d4b4c
  05d4a6c  lwz 0, 8(30)
  05d4a70  lwz 11, 16(26)
  05d4a74  cmplw 7, 11, 0
  05d4a78  bt- 29, 0x5d3d8c
  05d4a7c  clrldi 9, 0, 32
  05d4a80  clrldi 11, 10, 32
  05d4a84  stw 10, 12(9)
  05d4a88  stw 0, 8(11)
  05d4a8c  cmpwi 7, 6, 0
  05d4a90  bt 30, 0x5d455c
  05d4a94  lwz 11, 28(30)
  05d4a98  slwi 9, 11, 2
  05d4a9c  add 9, 9, 26
  05d4aa0  addi 9, 9, 300
  05d4aa4  clrldi 9, 9, 32
  05d4aa8  lwz 0, 0(9)
  05d4aac  cmpw 7, 0, 31
  05d4ab0  bt 30, 0x5d4b38
  05d4ab4  lwz 11, 16(26)
  05d4ab8  cmplw 7, 11, 6
  05d4abc  bt- 29, 0x5d3d8c
  05d4ac0  clrldi 9, 6, 32
  05d4ac4  lwz 0, 16(9)
  05d4ac8  cmpw 7, 0, 31
  05d4acc  bt 30, 0x5d4b30
  05d4ad0  stw 10, 20(9)
  05d4ad4  cmpwi 7, 10, 0
  05d4ad8  bt 30, 0x5d455c
  05d4adc  cmplw 7, 11, 10
  05d4ae0  bt- 29, 0x5d3d8c
  05d4ae4  clrldi 8, 10, 32
  05d4ae8  lwz 0, 16(30)
  05d4aec  cmpwi 7, 0, 0
  05d4af0  stw 6, 24(8)
  05d4af4  bt 30, 0x5d4b0c
  05d4af8  cmplw 7, 11, 0
  05d4afc  bt- 29, 0x5d3d8c
  05d4b00  clrldi 9, 0, 32
  05d4b04  stw 0, 16(8)
  05d4b08  stw 10, 24(9)
  05d4b0c  lwz 0, 20(30)
  05d4b10  cmpwi 7, 0, 0
  05d4b14  bt 30, 0x5d455c
  05d4b18  cmplw 7, 11, 0
  05d4b1c  bt- 29, 0x5d3d8c
  05d4b20  clrldi 9, 0, 32
  05d4b24  stw 0, 20(8)
  05d4b28  stw 10, 24(9)
  05d4b2c  b 0x5d455c
  05d4b30  stw 10, 16(9)
  05d4b34  b 0x5d4ad4
  05d4b38  cmpwi 7, 10, 0
  05d4b3c  stw 10, 0(9)
  05d4b40  bt 30, 0x5d4bdc
  05d4b44  lwz 11, 16(26)
  05d4b48  b 0x5d4adc
  05d4b4c  addi 8, 31, 20
  05d4b50  addi 0, 31, 16
  05d4b54  clrldi 9, 8, 32
  05d4b58  lwz 10, 0(9)
  05d4b5c  cmpwi 7, 10, 0
  05d4b60  bf 30, 0x5d4b70
  05d4b64  b 0x5d4ba0
  05d4b68  lwz 10, 0(9)
  05d4b6c  mr 8, 11
  05d4b70  addi 11, 10, 20
  05d4b74  addi 7, 10, 16
  05d4b78  clrldi 9, 11, 32
  05d4b7c  lwz 0, 0(9)
  05d4b80  cmpwi 7, 0, 0
  05d4b84  bf 30, 0x5d4b68
  05d4b88  clrldi 9, 7, 32
  05d4b8c  lwz 0, 0(9)
  05d4b90  cmpwi 7, 0, 0
  05d4b94  bt 30, 0x5d4bf4
  05d4b98  mr 11, 7
  05d4b9c  b 0x5d4b68
  05d4ba0  clrldi 9, 0, 32
  05d4ba4  mr 8, 0
  05d4ba8  lwz 10, 0(9)
  05d4bac  cmpwi 7, 10, 0
  05d4bb0  bf 30, 0x5d4b70
  05d4bb4  b 0x5d4a8c
  05d4bb8  lwz 0, 16(26)
  05d4bbc  cmplw 7, 0, 9
  05d4bc0  bt- 29, 0x5d3d8c
  05d4bc4  stw 28, 0(11)
  05d4bc8  stw 28, 8(31)
  05d4bcc  stw 7, 24(31)
  05d4bd0  stw 28, 12(31)
  05d4bd4  addi 31, 21, 8
  05d4bd8  b 0x5d32a0
  05d4bdc  li 0, -2
  05d4be0  lwz 9, 4(26)
  05d4be4  rotlw 0, 0, 11
  05d4be8  and 9, 9, 0
  05d4bec  stw 9, 4(26)
  05d4bf0  b 0x5d455c
  05d4bf4  lwz 11, 16(26)
  05d4bf8  cmplw 7, 11, 8
  05d4bfc  bt- 29, 0x5d3d8c
  05d4c00  clrldi 9, 8, 32
  05d4c04  stw 0, 0(9)

internal_memalign:   # 0x5d4c0c, 0x2f8 bytes
  05d4c0c  cmpwi 7, 4, 0
  05d4c10  mflr 0
  05d4c14  stdu 1, -176(1)
  05d4c18  std 30, 160(1)
  05d4c1c  std 31, 168(1)
  05d4c20  std 24, 112(1)
  05d4c24  std 25, 120(1)
  05d4c28  std 26, 128(1)
  05d4c2c  std 27, 136(1)
  05d4c30  std 28, 144(1)
  05d4c34  std 29, 152(1)
  05d4c38  std 0, 192(1)
  05d4c3c  mr 31, 4
  05d4c40  mr 30, 5
  05d4c44  bt 28, 0x5d4cc4
  05d4c48  cmplwi 7, 4, 16
  05d4c4c  bt 29, 0x5d4c88
  05d4c50  ld 0, 192(1)
  05d4c54  clrldi 3, 3, 32
  05d4c58  ld 24, 112(1)
  05d4c5c  clrldi 4, 5, 32
  05d4c60  ld 25, 120(1)
  05d4c64  mtlr 0
  05d4c68  ld 26, 128(1)
  05d4c6c  ld 27, 136(1)
  05d4c70  ld 28, 144(1)
  05d4c74  ld 29, 152(1)
  05d4c78  ld 30, 160(1)
  05d4c7c  ld 31, 168(1)
  05d4c80  addi 1, 1, 176
  05d4c84  b 0x5d309c
  05d4c88  addi 0, 4, -1
  05d4c8c  subfic 9, 4, -64
  05d4c90  and 11, 0, 4
  05d4c94  cmpwi 11, 0
  05d4c98  bt 2, 0x5d4cbc
  05d4c9c  cmplwi 7, 4, 32
  05d4ca0  li 0, 32
  05d4ca4  bf 29, 0x5d4ec8
  05d4ca8  slwi 0, 0, 1
  05d4cac  cmplw 7, 31, 0
  05d4cb0  bt 29, 0x5d4ca8
  05d4cb4  mr 31, 0
  05d4cb8  subfic 9, 0, -64
  05d4cbc  cmplw 7, 9, 30
  05d4cc0  bt 29, 0x5d4cfc
  05d4cc4  li 0, 0
  05d4cc8  clrldi 3, 0, 32
  05d4ccc  ld 0, 192(1)
  05d4cd0  ld 24, 112(1)
  05d4cd4  ld 25, 120(1)
  05d4cd8  mtlr 0
  05d4cdc  ld 26, 128(1)
  05d4ce0  ld 27, 136(1)
  05d4ce4  ld 28, 144(1)
  05d4ce8  ld 29, 152(1)
  05d4cec  ld 30, 160(1)
  05d4cf0  ld 31, 168(1)
  05d4cf4  addi 1, 1, 176
  05d4cf8  blr
  05d4cfc  cmplwi 7, 30, 10
  05d4d00  li 28, 16
  05d4d04  li 0, 28
  05d4d08  bf 29, 0x5d4d18
  05d4d0c  addi 0, 30, 19
  05d4d10  rlwinm 28, 0, 0, 0, 27
  05d4d14  addi 0, 28, 12
  05d4d18  add 4, 31, 0
  05d4d1c  clrldi 27, 3, 32
  05d4d20  clrldi 4, 4, 32
  05d4d24  mr 3, 27
  05d4d28  bl 0x5d309c
  05d4d2c  cmpwi 7, 3, 0
  05d4d30  mr 29, 3
  05d4d34  bt 30, 0x5d4cc4
  05d4d38  mr 3, 27
  05d4d3c  bl 0x5d172c
  05d4d40  cmpwi 7, 3, 0
  05d4d44  bf 30, 0x5d4cc4
  05d4d48  addi 6, 29, -8
  05d4d4c  li 24, 0
  05d4d50  mr 26, 6
  05d4d54  divwu 0, 29, 31
  05d4d58  mullw 0, 0, 31
  05d4d5c  cmpw 7, 29, 0
  05d4d60  bt 30, 0x5d4e00
  05d4d64  add 9, 29, 31
  05d4d68  neg 0, 31
  05d4d6c  addi 9, 9, -1
  05d4d70  and 9, 9, 0
  05d4d74  addi 0, 9, -8
  05d4d78  sub 5, 0, 6
  05d4d7c  mr 11, 0
  05d4d80  cmplwi 7, 5, 15
  05d4d84  bt 29, 0x5d4d90
  05d4d88  add 11, 31, 0
  05d4d8c  sub 5, 11, 6
  05d4d90  clrldi 8, 6, 32
  05d4d94  clrldi 7, 11, 32
  05d4d98  mr 26, 11
  05d4d9c  add 10, 6, 5
  05d4da0  addi 24, 6, 8
  05d4da4  lwz 0, 4(8)
  05d4da8  clrldi 10, 10, 32
  05d4dac  lwz 9, 4(7)
  05d4db0  mr 6, 26
  05d4db4  rlwinm 0, 0, 0, 0, 29
  05d4db8  clrlwi 9, 9, 31
  05d4dbc  sub 0, 0, 5
  05d4dc0  ori 9, 9, 2
  05d4dc4  add 11, 11, 0
  05d4dc8  or 0, 0, 9
  05d4dcc  clrldi 11, 11, 32
  05d4dd0  stw 0, 4(7)
  05d4dd4  lwz 9, 4(11)
  05d4dd8  ori 9, 9, 1
  05d4ddc  stw 9, 4(11)
  05d4de0  lwz 0, 4(8)
  05d4de4  clrlwi 0, 0, 31
  05d4de8  ori 0, 0, 2
  05d4dec  or 0, 0, 5
  05d4df0  stw 0, 4(8)
  05d4df4  lwz 9, 4(10)
  05d4df8  ori 9, 9, 1
  05d4dfc  stw 9, 4(10)
  05d4e00  clrldi 7, 6, 32
  05d4e04  addi 0, 28, 16
  05d4e08  li 25, 0
  05d4e0c  lwz 10, 4(7)
  05d4e10  rlwinm 11, 10, 0, 0, 29
  05d4e14  cmplw 7, 0, 11
  05d4e18  bf 28, 0x5d4e58
  05d4e1c  add 9, 28, 26
  05d4e20  sub 11, 11, 28
  05d4e24  clrlwi 0, 10, 31
  05d4e28  add 10, 9, 11
  05d4e2c  clrldi 8, 9, 32
  05d4e30  clrldi 10, 10, 32
  05d4e34  ori 0, 0, 2
  05d4e38  ori 11, 11, 3
  05d4e3c  or 0, 28, 0
  05d4e40  addi 25, 9, 8
  05d4e44  stw 0, 4(7)
  05d4e48  stw 11, 4(8)
  05d4e4c  lwz 0, 4(10)
  05d4e50  ori 0, 0, 1
  05d4e54  stw 0, 4(10)
  05d4e58  lwz 0, 4(7)
  05d4e5c  rlwinm 0, 0, 0, 0, 29
  05d4e60  cmplw 7, 0, 28
  05d4e64  bt 28, 0x5d4eec
  05d4e68  addi 29, 26, 8
  05d4e6c  divwu 0, 29, 31
  05d4e70  mullw 0, 0, 31
  05d4e74  cmpw 7, 29, 0
  05d4e78  bf 30, 0x5d4ed4
  05d4e7c  li 5, -1
  05d4e80  clrldi 4, 30, 32
  05d4e84  clrldi 5, 5, 32
  05d4e88  mr 3, 27
  05d4e8c  li 6, 1
  05d4e90  li 7, 0
  05d4e94  bl 0x5d1770
  05d4e98  cmpwi 7, 24, 0
  05d4e9c  bt 30, 0x5d4eac
  05d4ea0  clrldi 4, 24, 32
  05d4ea4  mr 3, 27
  05d4ea8  bl 0x5d2264
  05d4eac  cmpwi 7, 25, 0
  05d4eb0  bt 30, 0x5d4ec0
  05d4eb4  mr 3, 27
  05d4eb8  clrldi 4, 25, 32
  05d4ebc  bl 0x5d2264
  05d4ec0  mr 0, 29
  05d4ec4  b 0x5d4cc8
  05d4ec8  li 31, 32
  05d4ecc  li 9, -96
  05d4ed0  b 0x5d4cbc
  05d4ed4  lwz 4, -24288(2)
  05d4ed8  lwz 3, -24160(2)
  05d4edc  addi 4, 4, 96
  05d4ee0  bl 0x5cef7c
  05d4ee4  nop
  05d4ee8  b 0x5d4e7c
  05d4eec  lwz 4, -24288(2)
  05d4ef0  lwz 3, -24164(2)
  05d4ef4  addi 4, 4, 96
  05d4ef8  bl 0x5cef7c
  05d4efc  nop
  05d4f00  b 0x5d4e68

thunk_FUN_005d4c0c:   # 0x5d4f04, 0x4 bytes
  05d4f04  b 0x5d4c0c

internal_realloc:   # 0x5d4f08, 0x26c bytes
  05d4f08  stdu 1, -160(1)
  05d4f0c  mflr 0
  05d4f10  std 29, 136(1)
  05d4f14  std 0, 176(1)
  05d4f18  li 0, -65
  05d4f1c  std 30, 144(1)
  05d4f20  cmplw 7, 5, 0
  05d4f24  std 31, 152(1)
  05d4f28  std 26, 112(1)
  05d4f2c  std 27, 120(1)
  05d4f30  std 28, 128(1)
  05d4f34  mr 30, 5
  05d4f38  mr 31, 3
  05d4f3c  mr 29, 4
  05d4f40  bf 29, 0x5d4f74
  05d4f44  li 31, 0
  05d4f48  ld 0, 176(1)
  05d4f4c  mr 3, 31
  05d4f50  ld 26, 112(1)
  05d4f54  ld 27, 120(1)
  05d4f58  mtlr 0
  05d4f5c  ld 28, 128(1)
  05d4f60  ld 29, 136(1)
  05d4f64  ld 30, 144(1)
  05d4f68  ld 31, 152(1)
  05d4f6c  addi 1, 1, 160
  05d4f70  blr
  05d4f74  clrldi 27, 3, 32
  05d4f78  mr 3, 27
  05d4f7c  bl 0x5d172c
  05d4f80  cmpwi 7, 3, 0
  05d4f84  bf 30, 0x5d4f44
  05d4f88  addi 28, 29, -8
  05d4f8c  lwz 0, 16(31)
  05d4f90  clrldi 6, 28, 32
  05d4f94  cmplw 7, 0, 28
  05d4f98  lwz 8, 4(6)
  05d4f9c  rlwinm 26, 8, 0, 0, 29
  05d4fa0  add 10, 28, 26
  05d4fa4  bt 29, 0x5d4fbc
  05d4fa8  rlwinm 0, 8, 0, 30, 30
  05d4fac  cmpwi 7, 0, 0
  05d4fb0  bt 30, 0x5d4fbc
  05d4fb4  cmplw 7, 28, 10
  05d4fb8  bt- 28, 0x5d4fc4
  05d4fbc  bl 0x5c4840
  05d4fc0  nop
  05d4fc4  clrldi 9, 10, 32
  05d4fc8  lwz 0, 4(9)
  05d4fcc  clrlwi 0, 0, 31
  05d4fd0  cmpwi 7, 0, 0
  05d4fd4  bt- 30, 0x5d4fbc
  05d4fd8  cmplwi 7, 30, 10
  05d4fdc  li 5, 16
  05d4fe0  bf 29, 0x5d4fec
  05d4fe4  addi 0, 30, 19
  05d4fe8  rlwinm 5, 0, 0, 0, 27
  05d4fec  cmplw 7, 5, 26
  05d4ff0  bt 29, 0x5d5028
  05d4ff4  sub 10, 26, 5
  05d4ff8  cmplwi 7, 10, 15
  05d4ffc  bt 29, 0x5d510c
  05d5000  li 5, -1
  05d5004  mr 3, 27
  05d5008  clrldi 4, 30, 32
  05d500c  clrldi 5, 5, 32
  05d5010  clrldi 7, 29, 32
  05d5014  li 6, 2
  05d5018  bl 0x5d1770
  05d501c  addi 3, 28, 8
  05d5020  clrldi 31, 3, 32
  05d5024  b 0x5d4f48
  05d5028  lwz 0, 24(31)
  05d502c  cmpw 7, 0, 10
  05d5030  bt 30, 0x5d50ac
  05d5034  clrldi 28, 29, 32
  05d5038  li 5, -1
  05d503c  clrldi 29, 30, 32
  05d5040  li 6, 2
  05d5044  clrldi 5, 5, 32
  05d5048  mr 7, 28
  05d504c  mr 3, 27
  05d5050  mr 4, 29
  05d5054  bl 0x5d1770
  05d5058  mr 3, 27
  05d505c  mr 4, 29
  05d5060  bl 0x5d309c
  05d5064  cmpwi 7, 3, 0
  05d5068  clrldi 31, 3, 32
  05d506c  bt 30, 0x5d4f48
  05d5070  addi 0, 26, -4
  05d5074  mr 5, 30
  05d5078  cmplw 7, 30, 0
  05d507c  clrldi 31, 3, 32
  05d5080  bf 29, 0x5d5088
  05d5084  mr 5, 0
  05d5088  mr 4, 28
  05d508c  clrldi 5, 5, 32
  05d5090  mr 3, 31
  05d5094  bl 0x5c5ad0
  05d5098  nop
  05d509c  mr 3, 27
  05d50a0  mr 4, 28
  05d50a4  bl 0x5d2264
  05d50a8  b 0x5d4f48
  05d50ac  lwz 0, 12(31)
  05d50b0  add 7, 26, 0
  05d50b4  cmplw 7, 5, 7
  05d50b8  bf 28, 0x5d5034
  05d50bc  add 10, 28, 5
  05d50c0  clrlwi 0, 8, 31
  05d50c4  clrldi 8, 10, 32
  05d50c8  sub 7, 7, 5
  05d50cc  ori 0, 0, 2
  05d50d0  ori 9, 7, 1
  05d50d4  or 0, 5, 0
  05d50d8  sub 11, 5, 26
  05d50dc  stw 0, 4(6)
  05d50e0  stw 9, 4(8)
  05d50e4  lwz 0, 436(31)
  05d50e8  lwz 9, 440(31)
  05d50ec  add 0, 11, 0
  05d50f0  stw 10, 24(31)
  05d50f4  cmplw 7, 9, 0
  05d50f8  stw 7, 12(31)
  05d50fc  stw 0, 436(31)
  05d5100  bf 28, 0x5d5000
  05d5104  stw 0, 440(31)
  05d5108  b 0x5d5000
  05d510c  add 9, 28, 5
  05d5110  clrlwi 0, 8, 31
  05d5114  add 11, 9, 10
  05d5118  clrldi 8, 9, 32
  05d511c  clrldi 11, 11, 32
  05d5120  ori 0, 0, 2
  05d5124  ori 10, 10, 3
  05d5128  or 0, 5, 0
  05d512c  li 5, -1
  05d5130  stw 0, 4(6)
  05d5134  stw 10, 4(8)
  05d5138  lwz 0, 4(11)
  05d513c  addi 31, 9, 8
  05d5140  clrldi 4, 30, 32
  05d5144  ori 0, 0, 1
  05d5148  clrldi 5, 5, 32
  05d514c  clrldi 7, 29, 32
  05d5150  mr 3, 27
  05d5154  li 6, 2
  05d5158  stw 0, 4(11)
  05d515c  bl 0x5d1770
  05d5160  cmpwi 7, 31, 0
  05d5164  bt 30, 0x5d501c
  05d5168  mr 3, 27
  05d516c  clrldi 4, 31, 32
  05d5170  bl 0x5d2264

mspace_reallocalign:   # 0x5d5178, 0x124 bytes
  05d5178  stdu 1, -144(1)
  05d517c  mflr 0
  05d5180  std 29, 120(1)
  05d5184  mr 29, 4
  05d5188  addi 9, 6, -1
  05d518c  std 0, 160(1)
  05d5190  addi 0, 4, -8
  05d5194  cmpwi 7, 29, 0
  05d5198  clrldi 11, 0, 32
  05d519c  and 0, 9, 4
  05d51a0  std 30, 128(1)
  05d51a4  mr 9, 3
  05d51a8  mr 30, 5
  05d51ac  std 28, 112(1)
  05d51b0  std 31, 136(1)
  05d51b4  cmpwi 0, 0
  05d51b8  clrldi 4, 6, 32
  05d51bc  clrldi 5, 5, 32
  05d51c0  clrldi 3, 3, 32
  05d51c4  bt 30, 0x5d527c
  05d51c8  clrldi 28, 9, 32
  05d51cc  lwz 0, 4(11)
  05d51d0  clrldi 4, 6, 32
  05d51d4  clrldi 5, 30, 32
  05d51d8  mr 3, 28
  05d51dc  rlwinm 31, 0, 0, 0, 29
  05d51e0  bf 2, 0x5d51ec
  05d51e4  cmplw 7, 31, 30
  05d51e8  bf 28, 0x5d5258
  05d51ec  bl 0x5d4c0c
  05d51f0  clrldi 29, 29, 32
  05d51f4  cmpwi 7, 3, 0
  05d51f8  mr 0, 31
  05d51fc  cmplw 6, 31, 30
  05d5200  mr 4, 29
  05d5204  clrldi 31, 3, 32
  05d5208  bt 30, 0x5d522c
  05d520c  bt 25, 0x5d5250
  05d5210  clrldi 5, 0, 32
  05d5214  mr 3, 31
  05d5218  bl 0x5c5ad0
  05d521c  nop
  05d5220  mr 3, 28
  05d5224  mr 4, 29
  05d5228  bl 0x5d2264
  05d522c  ld 0, 160(1)
  05d5230  mr 3, 31
  05d5234  ld 28, 112(1)
  05d5238  ld 29, 120(1)
  05d523c  mtlr 0
  05d5240  ld 30, 128(1)
  05d5244  ld 31, 136(1)
  05d5248  addi 1, 1, 144
  05d524c  blr
  05d5250  mr 0, 30
  05d5254  b 0x5d5210
  05d5258  ld 0, 160(1)
  05d525c  clrldi 4, 29, 32
  05d5260  ld 28, 112(1)
  05d5264  ld 29, 120(1)
  05d5268  mtlr 0
  05d526c  ld 30, 128(1)
  05d5270  ld 31, 136(1)
  05d5274  addi 1, 1, 144
  05d5278  b 0x5d4f08
  05d527c  ld 0, 160(1)
  05d5280  ld 28, 112(1)
  05d5284  ld 29, 120(1)
  05d5288  mtlr 0
  05d528c  ld 30, 128(1)
  05d5290  ld 31, 136(1)
  05d5294  addi 1, 1, 144
  05d5298  b 0x5d4c0c

FUN_005d529c:   # 0x5d529c, 0x2c bytes
  05d529c  mr 0, 4
  05d52a0  clrldi 5, 5, 32
  05d52a4  cmpwi 7, 0, 0
  05d52a8  clrldi 4, 4, 32
  05d52ac  mr 0, 3
  05d52b0  clrldi 3, 3, 32
  05d52b4  bt 30, 0x5d52c0
  05d52b8  clrldi 3, 0, 32
  05d52bc  b 0x5d4f08
  05d52c0  mr 4, 5
  05d52c4  b 0x5d309c

_malloc_stats_fast:   # 0x5d52c8, 0x54 bytes
  05d52c8  lwz 9, -24308(2)
  05d52cc  mflr 0
  05d52d0  stdu 1, -112(1)
  05d52d4  std 0, 128(1)
  05d52d8  clrldi 3, 3, 32
  05d52dc  lwz 0, 32(9)
  05d52e0  mr 4, 3
  05d52e4  cmpwi 7, 0, 0
  05d52e8  bt 30, 0x5d5300
  05d52ec  clrldi 3, 0, 32
  05d52f0  ld 0, 128(1)
  05d52f4  addi 1, 1, 112
  05d52f8  mtlr 0
  05d52fc  b 0x5d1be8
  05d5300  bl 0x5d5734
  05d5304  nop
  05d5308  ld 0, 128(1)
  05d530c  extsw 3, 3
  05d5310  mtlr 0
  05d5314  addi 1, 1, 112
  05d5318  blr

mspace_calloc:   # 0x5d531c, 0x8c bytes
  05d531c  stdu 1, -144(1)
  05d5320  mflr 0
  05d5324  cmpwi 7, 4, 0
  05d5328  std 0, 160(1)
  05d532c  or 0, 4, 5
  05d5330  std 29, 120(1)
  05d5334  rlwinm 9, 0, 0, 0, 15
  05d5338  clrldi 3, 3, 32
  05d533c  cmpwi 6, 9, 0
  05d5340  li 29, 0
  05d5344  bt 30, 0x5d5350
  05d5348  mullw 29, 4, 5
  05d534c  bf 26, 0x5d5394
  05d5350  clrldi 29, 29, 32
  05d5354  mr 4, 29
  05d5358  bl 0x5d309c
  05d535c  mr 5, 29
  05d5360  cmpwi 7, 3, 0
  05d5364  li 4, 0
  05d5368  clrldi 29, 3, 32
  05d536c  bt 30, 0x5d537c
  05d5370  mr 3, 29
  05d5374  bl 0x5d0140
  05d5378  nop
  05d537c  ld 0, 160(1)
  05d5380  mr 3, 29
  05d5384  ld 29, 120(1)
  05d5388  addi 1, 1, 144
  05d538c  mtlr 0
  05d5390  blr
  05d5394  divwu 0, 29, 4
  05d5398  cmpw 7, 0, 5
  05d539c  bt 30, 0x5d5350
  05d53a0  li 29, -1
  05d53a4  b 0x5d5350

FUN_005d53a8:   # 0x5d53a8, 0x3c bytes
  05d53a8  addi 3, 3, 448
  05d53ac  mflr 0
  05d53b0  stdu 1, -112(1)
  05d53b4  clrldi 3, 3, 32
  05d53b8  std 0, 128(1)
  05d53bc  bl 0x650784
  05d53c0  ld 2, 40(1)
  05d53c4  cmpwi 7, 3, 0
  05d53c8  bf- 30, 0x5d53e0
  05d53cc  ld 0, 128(1)
  05d53d0  li 3, 0
  05d53d4  addi 1, 1, 112
  05d53d8  mtlr 0
  05d53dc  blr
  05d53e0  bl 0x5c4840

FUN_005d53e8:   # 0x5d53e8, 0x34 bytes
  05d53e8  lwz 9, -24308(2)
  05d53ec  mflr 0
  05d53f0  stdu 1, -112(1)
  05d53f4  std 0, 128(1)
  05d53f8  lwz 3, 32(9)
  05d53fc  addi 3, 3, 448
  05d5400  clrldi 3, 3, 32
  05d5404  bl 0x650784
  05d5408  ld 2, 40(1)
  05d540c  ld 0, 128(1)
  05d5410  addi 1, 1, 112
  05d5414  mtlr 0
  05d5418  blr

mspace_create:   # 0x5d541c, 0x164 bytes
  05d541c  stdu 1, -176(1)
  05d5420  mflr 0
  05d5424  std 30, 160(1)
  05d5428  mr 30, 4
  05d542c  std 31, 168(1)
  05d5430  std 25, 120(1)
  05d5434  std 26, 128(1)
  05d5438  std 27, 136(1)
  05d543c  std 28, 144(1)
  05d5440  std 29, 152(1)
  05d5444  std 0, 192(1)
  05d5448  mr 31, 3
  05d544c  bl 0x5d16bc
  05d5450  cmplwi 7, 30, 544
  05d5454  bf 29, 0x5d5550
  05d5458  lwz 26, -24308(2)
  05d545c  lwz 0, 4(26)
  05d5460  subfic 0, 0, -544
  05d5464  cmplw 7, 0, 30
  05d5468  bf 29, 0x5d5550
  05d546c  addi 0, 31, 8
  05d5470  mr 27, 31
  05d5474  clrlwi 0, 0, 28
  05d5478  li 29, 0
  05d547c  cmpwi 7, 0, 0
  05d5480  bt 30, 0x5d548c
  05d5484  subfic 0, 0, 16
  05d5488  clrlwi 29, 0, 28
  05d548c  add 29, 29, 27
  05d5490  li 4, 0
  05d5494  addi 25, 29, 8
  05d5498  clrldi 28, 29, 32
  05d549c  clrldi 31, 25, 32
  05d54a0  li 5, 496
  05d54a4  mr 3, 31
  05d54a8  addi 29, 29, 456
  05d54ac  bl 0x5d0140
  05d54b0  nop
  05d54b4  li 0, 499
  05d54b8  stw 0, 4(28)
  05d54bc  stw 30, 432(31)
  05d54c0  stw 30, 428(31)
  05d54c4  stw 30, 476(31)
  05d54c8  lwz 9, 0(26)
  05d54cc  mr 3, 31
  05d54d0  stw 27, 16(31)
  05d54d4  stw 9, 32(31)
  05d54d8  lwz 0, 20(26)
  05d54dc  stw 27, 472(31)
  05d54e0  ori 0, 0, 4
  05d54e4  stw 0, 444(31)
  05d54e8  bl 0x5d1650
  05d54ec  li 0, 560
  05d54f0  add 5, 27, 30
  05d54f4  stw 0, 440(31)
  05d54f8  stw 0, 436(31)
  05d54fc  lwz 4, 4(28)
  05d5500  mr 3, 31
  05d5504  rlwinm 4, 4, 0, 0, 29
  05d5508  add 4, 25, 4
  05d550c  addi 4, 4, -8
  05d5510  sub 5, 5, 4
  05d5514  clrldi 4, 4, 32
  05d5518  addi 5, 5, -48
  05d551c  clrldi 5, 5, 32
  05d5520  bl 0x5d15ec
  05d5524  lwz 4, 24(31)
  05d5528  mr 3, 31
  05d552c  bl 0x5d0dbc
  05d5530  lwz 4, -24156(2)
  05d5534  clrldi 3, 29, 32
  05d5538  bl 0x6505a4
  05d553c  ld 2, 40(1)
  05d5540  cmpwi 7, 3, 0
  05d5544  bt+ 30, 0x5d5554
  05d5548  bl 0x5c4840
  05d554c  nop
  05d5550  li 31, 0
  05d5554  ld 0, 192(1)
  05d5558  mr 3, 31
  05d555c  ld 25, 120(1)
  05d5560  ld 26, 128(1)
  05d5564  mtlr 0
  05d5568  ld 27, 136(1)
  05d556c  ld 28, 144(1)
  05d5570  ld 29, 152(1)
  05d5574  ld 30, 160(1)
  05d5578  ld 31, 168(1)
  05d557c  addi 1, 1, 176

_malloc_init_lv2:   # 0x5d5584, 0x144 bytes
  05d5584  stdu 1, -240(1)
  05d5588  mflr 0
  05d558c  std 30, 224(1)
  05d5590  lwz 30, -24308(2)
  05d5594  std 0, 256(1)
  05d5598  mr 0, 3
  05d559c  std 27, 200(1)
  05d55a0  std 28, 208(1)
  05d55a4  lwz 3, 32(30)
  05d55a8  std 29, 216(1)
  05d55ac  cmpwi 7, 3, 0
  05d55b0  std 31, 232(1)
  05d55b4  bt 30, 0x5d56b8
  05d55b8  addi 3, 3, 448
  05d55bc  lwz 4, -24156(2)
  05d55c0  clrldi 3, 3, 32
  05d55c4  bl 0x6505a4
  05d55c8  ld 2, 40(1)
  05d55cc  cmpwi 7, 3, 0
  05d55d0  mr 31, 3
  05d55d4  bf- 30, 0x5d56c4
  05d55d8  lwz 10, -24304(2)
  05d55dc  addi 3, 1, 116
  05d55e0  li 11, 352
  05d55e4  lwz 9, 4(10)
  05d55e8  stw 9, 0(10)
  05d55ec  sc
  05d55f0  lwz 29, -24152(2)
  05d55f4  lwz 0, 120(1)
  05d55f8  srwi 0, 0, 20
  05d55fc  lwz 29, 0(29)
  05d5600  cmplw 7, 0, 29
  05d5604  bf 28, 0x5d568c
  05d5608  lwz 9, -24148(2)
  05d560c  li 3, 1
  05d5610  addi 4, 1, 128
  05d5614  li 5, 57
  05d5618  addi 6, 1, 112
  05d561c  ld 11, 8(9)
  05d5620  lbz 27, 56(9)
  05d5624  ld 0, 0(9)
  05d5628  ld 10, 16(9)
  05d562c  ld 8, 24(9)
  05d5630  ld 7, 32(9)
  05d5634  ld 29, 40(9)
  05d5638  ld 28, 48(9)
  05d563c  std 11, 136(1)
  05d5640  std 0, 128(1)
  05d5644  std 10, 144(1)
  05d5648  std 8, 152(1)
  05d564c  std 7, 160(1)
  05d5650  std 29, 168(1)
  05d5654  std 28, 176(1)
  05d5658  stb 27, 184(1)
  05d565c  li 11, 403
  05d5660  sc
  05d5664  ld 0, 256(1)
  05d5668  stw 31, 36(30)
  05d566c  ld 27, 200(1)
  05d5670  mtlr 0
  05d5674  ld 28, 208(1)
  05d5678  ld 29, 216(1)
  05d567c  ld 30, 224(1)
  05d5680  ld 31, 232(1)
  05d5684  addi 1, 1, 240
  05d5688  blr
  05d568c  slwi 0, 29, 20
  05d5690  ld 27, 200(1)
  05d5694  ld 28, 208(1)
  05d5698  stw 0, 36(30)
  05d569c  ld 0, 256(1)
  05d56a0  ld 29, 216(1)
  05d56a4  ld 30, 224(1)
  05d56a8  mtlr 0
  05d56ac  ld 31, 232(1)
  05d56b0  addi 1, 1, 240
  05d56b4  blr
  05d56b8  mr 3, 0
  05d56bc  stw 0, 32(30)
  05d56c0  b 0x5d55b8
  05d56c4  bl 0x5c4840

FUN_005d56cc:   # 0x5d56cc, 0x28 bytes
  05d56cc  stdu 1, -112(1)
  05d56d0  mflr 0
  05d56d4  std 0, 128(1)
  05d56d8  bl 0x5d1680
  05d56dc  nop
  05d56e0  ld 0, 128(1)
  05d56e4  clrldi 3, 3, 32
  05d56e8  mtlr 0
  05d56ec  addi 1, 1, 112
  05d56f0  blr

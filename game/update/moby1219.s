# game/update/moby1219.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1219_0020b7a8:   # 0x20b7a8, 0x238 bytes
  020b7a8  stdu 1, -160(1)
  020b7ac  mflr 0
  020b7b0  std 0, 176(1)
  020b7b4  std 30, 144(1)
  020b7b8  ori 30, 3, 0
  020b7bc  std 31, 152(1)
  020b7c0  lbz 3, 32(3)
  020b7c4  std 29, 136(1)
  020b7c8  ori 31, 4, 0
  020b7cc  ori 29, 5, 0
  020b7d0  std 28, 128(1)
  020b7d4  cmpwi 3, 4
  020b7d8  bt 2, 0x20b9b0
  020b7dc  ori 3, 30, 0
  020b7e0  lis 4, 51
  020b7e4  li 5, 0
  020b7e8  bl 0x10675c
  020b7ec  nop
  020b7f0  ori 28, 3, 0
  020b7f4  cmpwi 28, 0
  020b7f8  bt 2, 0x20b820
  020b7fc  lfs 1, 44(28)
  020b800  lhz 4, 166(30)
  020b804  lis 3, 101
  020b808  addic 3, 3, 20272
  020b80c  extsh 4, 4
  020b810  stfd 1, 64(1)
  020b814  ld 5, 64(1)
  020b818  bl 0x5cd098
  020b81c  nop
  020b820  ori 3, 30, 0
  020b824  ori 4, 28, 0
  020b828  addic 7, 1, 112
  020b82c  li 9, 0
  020b830  li 10, 4
  020b834  ori 5, 29, 0
  020b838  li 6, 0
  020b83c  li 8, 0
  020b840  bl 0x106840
  020b844  nop
  020b848  ori 4, 3, 0
  020b84c  lwz 3, 112(1)
  020b850  cmpwi 4, 0
  020b854  bf 1, 0x20b868
  020b858  cmpwi 4, 2
  020b85c  bt 1, 0x20b868
  020b860  li 4, 0
  020b864  stw 4, 0(29)
  020b868  cmpwi 3, 1
  020b86c  bf 1, 0x20b9a8
  020b870  lwz 3, 0(29)
  020b874  lwz 4, 44(28)
  020b878  srawi 5, 3, 31
  020b87c  lfs 2, 0(29)
  020b880  srawi 6, 4, 31
  020b884  lfs 1, 44(28)
  020b888  srwi 7, 5, 1
  020b88c  srwi 8, 6, 1
  020b890  xor 3, 7, 3
  020b894  xor 4, 8, 4
  020b898  subc 3, 3, 5
  020b89c  subc 4, 4, 6
  020b8a0  cmpw 3, 4
  020b8a4  bt 1, 0x20b92c
  020b8a8  li 5, 0
  020b8ac  lhz 7, 52(30)
  020b8b0  li 6, 120
  020b8b4  rlwimi 7, 5, 0, 19, 19
  020b8b8  ori 3, 30, 0
  020b8bc  stw 5, 0(29)
  020b8c0  addic 4, 31, 96
  020b8c4  sth 7, 52(30)
  020b8c8  stb 6, 103(31)
  020b8cc  bl 0x10c808
  020b8d0  nop
  020b8d4  lbz 3, 83(30)
  020b8d8  cmpwi 3, 2
  020b8dc  bt 2, 0x20b8f8
  020b8e0  ori 3, 30, 0
  020b8e4  li 4, 2
  020b8e8  li 5, 0
  020b8ec  li 6, 3
  020b8f0  bl 0xfddc0
  020b8f4  nop
  020b8f8  lwz 3, 112(31)
  020b8fc  cmpwi 3, 0
  020b900  bt 2, 0x20b920
  020b904  lbz 4, 32(3)
  020b908  cmpwi 1, 4, 253
  020b90c  cmpwi 4, 254
  020b910  cror 2, 2, 6
  020b914  bt 2, 0x20b920
  020b918  li 4, 3
  020b91c  stb 4, 32(3)
  020b920  li 3, 3
  020b924  stb 3, 32(30)
  020b928  b 0x20b9a8
  020b92c  fsubs 1, 2, 1
  020b930  lis 3, 33
  020b934  vspltisw 2, -1
  020b938  li 4, 250
  020b93c  addi 3, 3, -18528
  020b940  lis 5, 114
  020b944  li 6, -3056
  020b948  vslw 2, 2, 2
  020b94c  stfs 1, 0(29)
  020b950  stb 4, 103(31)
  020b954  <unknown>
  020b958  <unknown>
  020b95c  vspltw 3, 3, 0
  020b960  li 5, 38
  020b964  ori 3, 30, 0
  020b968  vmaddfp 2, 4, 3, 2
  020b96c  addic 4, 31, 96
  020b970  vctsxs 2, 2, 0
  020b974  vsplth 2, 2, 1
  020b978  stvehx 2, 5, 31
  020b97c  bl 0x10c808
  020b980  nop
  020b984  lbz 3, 83(30)
  020b988  cmpwi 3, 4
  020b98c  bt 2, 0x20b9a8
  020b990  ori 3, 30, 0
  020b994  li 4, 4
  020b998  li 5, 0
  020b99c  li 6, 3
  020b9a0  bl 0xfddc0
  020b9a4  nop
  020b9a8  li 3, 255
  020b9ac  stb 3, 164(30)
  020b9b0  addic 4, 31, 96
  020b9b4  ori 3, 30, 0
  020b9b8  bl 0x10c9a0
  020b9bc  nop
  020b9c0  ld 0, 176(1)
  020b9c4  mtlr 0
  020b9c8  ld 28, 128(1)
  020b9cc  ld 29, 136(1)
  020b9d0  ld 30, 144(1)
  020b9d4  ld 31, 152(1)
  020b9d8  addi 1, 1, 160
  020b9dc  blr

UpdateMoby_1219:   # 0x20b9e8, 0x174 bytes
  020b9e8  stdu 1, -128(1)
  020b9ec  mflr 0
  020b9f0  std 0, 144(1)
  020b9f4  std 31, 120(1)
  020b9f8  ori 31, 3, 0
  020b9fc  lwz 6, 120(31)
  020ba00  lbz 3, 32(31)
  020ba04  addic 5, 6, 32
  020ba08  cmpwi 6, 3, 3
  020ba0c  cmpwi 7, 3, 4
  020ba10  lwz 4, 112(6)
  020ba14  cmpwi 4, 0
  020ba18  bt 2, 0x20ba30
  020ba1c  lbz 4, 32(4)
  020ba20  cmpwi 4, 254
  020ba24  cmpwi 1, 4, 253
  020ba28  bt 2, 0x20ba30
  020ba2c  bf 6, 0x20ba40
  020ba30  bf 24, 0x20ba40
  020ba34  li 3, 4
  020ba38  stb 3, 32(31)
  020ba3c  b 0x20bb3c
  020ba40  bt 30, 0x20bb3c
  020ba44  bt 26, 0x20baf8
  020ba48  cmpwi 3, 2
  020ba4c  bt 2, 0x20bab4
  020ba50  cmpwi 3, 1
  020ba54  bt 2, 0x20ba90
  020ba58  cmpwi 3, 0
  020ba5c  bf 2, 0x20bb48
  020ba60  lbz 3, 83(31)
  020ba64  cmpwi 3, 1
  020ba68  bt 2, 0x20ba84
  020ba6c  ori 3, 31, 0
  020ba70  li 4, 1
  020ba74  li 5, 0
  020ba78  li 6, 15
  020ba7c  bl 0xfddc0
  020ba80  nop
  020ba84  li 3, 1
  020ba88  stb 3, 32(31)
  020ba8c  b 0x20bb48
  020ba90  lbz 3, 112(31)
  020ba94  rlwinm 3, 3, 0, 30, 30
  020ba98  cmpwi 3, 0
  020ba9c  bt 2, 0x20bb48
  020baa0  li 3, 255
  020baa4  li 4, 2
  020baa8  stb 3, 164(31)
  020baac  stb 4, 32(31)
  020bab0  b 0x20bb48
  020bab4  ori 3, 31, 0
  020bab8  ori 4, 6, 0
  020babc  bl 0x20b7a8
  020bac0  lbz 3, 112(31)
  020bac4  rlwinm 3, 3, 0, 30, 30
  020bac8  cmpwi 3, 0
  020bacc  bt 2, 0x20bb48
  020bad0  lbz 3, 83(31)
  020bad4  cmpwi 3, 1
  020bad8  bt 2, 0x20bb48
  020badc  ori 3, 31, 0
  020bae0  li 4, 1
  020bae4  li 5, 0
  020bae8  li 6, 10
  020baec  bl 0xfddc0
  020baf0  nop
  020baf4  b 0x20bb48
  020baf8  lbz 3, 35(31)
  020bafc  cmpwi 3, 0
  020bb00  bf 1, 0x20bb0c
  020bb04  addic 3, 3, -1
  020bb08  stb 3, 35(31)
  020bb0c  ori 3, 31, 0
  020bb10  bl 0xefe40
  020bb14  nop
  020bb18  lis 3, 33
  020bb1c  addi 3, 3, -17952
  020bb20  lfs 2, 0(3)
  020bb24  fcmpu 0, 1, 2
  020bb28  cror 6, 0, 2
  020bb2c  bt 6, 0x20bb48
  020bb30  li 3, 4
  020bb34  stb 3, 32(31)
  020bb38  b 0x20bb48
  020bb3c  ori 3, 31, 0
  020bb40  bl 0xefb38
  020bb44  nop
  020bb48  ld 0, 144(1)
  020bb4c  mtlr 0
  020bb50  ld 31, 120(1)
  020bb54  addi 1, 1, 128
  020bb58  blr

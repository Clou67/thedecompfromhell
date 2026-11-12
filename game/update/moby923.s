# game/update/moby923.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004b62f8:   # 0x4b62f8, 0xc bytes
  04b62f8  li 4, 2
  04b62fc  stb 4, 32(3)
  04b6300  blr

FUN_004b6304:   # 0x4b6304, 0x78 bytes
  04b6304  stdu 1, -128(1)
  04b6308  mflr 0
  04b630c  std 0, 144(1)
  04b6310  std 31, 120(1)
  04b6314  ori 31, 3, 0
  04b6318  lis 3, 164
  04b631c  lwz 4, 120(31)
  04b6320  lwz 3, -28512(3)
  04b6324  lwz 4, 4(4)
  04b6328  slwi 4, 4, 8
  04b632c  addc 3, 3, 4
  04b6330  clrldi 3, 3, 32
  04b6334  cmpwi 3, 0
  04b6338  bt 2, 0x4b6350
  04b633c  lbz 4, 32(3)
  04b6340  cmpwi 4, 128
  04b6344  bf 0, 0x4b6350
  04b6348  bl 0xefb38
  04b634c  nop
  04b6350  lbz 3, 32(31)
  04b6354  cmpwi 3, 128
  04b6358  bf 0, 0x4b6368
  04b635c  ori 3, 31, 0
  04b6360  bl 0xefb38
  04b6364  nop
  04b6368  ld 0, 144(1)
  04b636c  mtlr 0
  04b6370  ld 31, 120(1)
  04b6374  addi 1, 1, 128
  04b6378  blr

M923_004b63a8:   # 0x4b63a8, 0x2fc bytes
  04b63a8  stdu 1, -240(1)
  04b63ac  mflr 0
  04b63b0  std 0, 256(1)
  04b63b4  stfd 28, 208(1)
  04b63b8  stfd 29, 216(1)
  04b63bc  stfd 30, 224(1)
  04b63c0  stfd 31, 232(1)
  04b63c4  addi 0, 1, 144
  04b63c8  stvx 31, 0, 0
  04b63cc  lis 4, 143
  04b63d0  lfs 1, 192(3)
  04b63d4  lis 5, 143
  04b63d8  std 27, 168(1)
  04b63dc  lis 6, 75
  04b63e0  li 27, 0
  04b63e4  lfs 2, 17916(4)
  04b63e8  lfs 3, 196(3)
  04b63ec  lfs 4, 200(3)
  04b63f0  addi 4, 6, 25472
  04b63f4  lfs 5, 16(3)
  04b63f8  lfs 6, 20(3)
  04b63fc  std 31, 200(1)
  04b6400  fmadds 1, 1, 2, 5
  04b6404  lis 31, 161
  04b6408  lfs 5, 24(3)
  04b640c  std 28, 176(1)
  04b6410  fmadds 3, 3, 2, 6
  04b6414  ori 28, 27, 0
  04b6418  fmadds 2, 4, 2, 5
  04b641c  std 29, 184(1)
  04b6420  lfs 4, 224(3)
  04b6424  lis 29, 114
  04b6428  lfs 5, 17920(5)
  04b642c  addic 31, 31, 23856
  04b6430  lfs 6, 228(3)
  04b6434  li 5, 16
  04b6438  std 30, 192(1)
  04b643c  lfs 7, 232(3)
  04b6440  ori 30, 3, 0
  04b6444  lfs 8, 28(3)
  04b6448  stfs 8, 124(1)
  04b644c  fmadds 4, 4, 5, 1
  04b6450  fmadds 6, 6, 5, 3
  04b6454  stfs 1, 112(1)
  04b6458  fmadds 1, 7, 5, 2
  04b645c  stfs 3, 116(1)
  04b6460  stfs 2, 120(1)
  04b6464  stfs 4, 112(1)
  04b6468  stfs 6, 116(1)
  04b646c  stfs 1, 120(1)
  04b6470  lfs 28, 0(4)
  04b6474  lfs 31, 4(4)
  04b6478  lfs 29, 8(4)
  04b647c  lfs 30, 12(4)
  04b6480  std 26, 160(1)
  04b6484  lvlx 31, 5, 4
  04b6488  vspltw 31, 31, 0
  04b648c  li 3, 16
  04b6490  bl 0xfc620
  04b6494  nop
  04b6498  ori 26, 3, 0
  04b649c  li 3, 2
  04b64a0  bl 0xfc620
  04b64a4  nop
  04b64a8  li 4, 0
  04b64ac  fmr 1, 28
  04b64b0  lis 5, 143
  04b64b4  fmr 2, 31
  04b64b8  subc 3, 4, 3
  04b64bc  fmr 3, 29
  04b64c0  neg 7, 26
  04b64c4  fmr 4, 30
  04b64c8  cntlzw 3, 3
  04b64cc  subc 4, 26, 7
  04b64d0  sldi 3, 3, 58
  04b64d4  lwz 10, 17940(5)
  04b64d8  ori 8, 31, 0
  04b64dc  sradi 3, 3, 63
  04b64e0  extsw 10, 10
  04b64e4  and 4, 3, 4
  04b64e8  addic 3, 1, 112
  04b64ec  addc 7, 7, 4
  04b64f0  bl 0x126f50
  04b64f4  nop
  04b64f8  cmpwi 3, 0
  04b64fc  bt 2, 0x4b6540
  04b6500  vspltisw 2, -1
  04b6504  li 4, -3056
  04b6508  li 5, 2
  04b650c  li 6, 127
  04b6510  vslw 2, 2, 2
  04b6514  lvlx 3, 4, 29
  04b6518  li 4, 10
  04b651c  li 7, 43
  04b6520  vmaddfp 2, 3, 31, 2
  04b6524  vctsxs 2, 2, 0
  04b6528  vsplth 3, 2, 1
  04b652c  vspltb 2, 2, 3
  04b6530  stvehx 3, 4, 3
  04b6534  stw 5, 36(3)
  04b6538  stb 6, 42(3)
  04b653c  stvebx 2, 7, 3
  04b6540  addic 27, 27, 1
  04b6544  cmpwi 27, 2
  04b6548  bt 0, 0x4b648c
  04b654c  lis 3, 143
  04b6550  lfs 1, 192(30)
  04b6554  lis 4, 143
  04b6558  lfs 2, 17924(3)
  04b655c  lfs 3, 196(30)
  04b6560  lfs 4, 200(30)
  04b6564  lis 3, 75
  04b6568  lfs 5, 16(30)
  04b656c  lfs 6, 20(30)
  04b6570  fmadds 1, 1, 2, 5
  04b6574  addi 3, 3, 25472
  04b6578  lfs 5, 24(30)
  04b657c  fmadds 3, 3, 2, 6
  04b6580  fmadds 2, 4, 2, 5
  04b6584  lfs 4, 224(30)
  04b6588  lfs 5, 17928(4)
  04b658c  lfs 6, 228(30)
  04b6590  lfs 7, 232(30)
  04b6594  lfs 8, 28(30)
  04b6598  fmadds 4, 4, 5, 1
  04b659c  stfs 8, 124(1)
  04b65a0  fmadds 6, 6, 5, 3
  04b65a4  stfs 1, 112(1)
  04b65a8  fmadds 1, 7, 5, 2
  04b65ac  stfs 3, 116(1)
  04b65b0  stfs 2, 120(1)
  04b65b4  lfs 2, -3056(29)
  04b65b8  li 29, 16
  04b65bc  stfs 4, 112(1)
  04b65c0  stfs 6, 116(1)
  04b65c4  stfs 1, 120(1)
  04b65c8  lfs 1, 20(3)
  04b65cc  fmuls 1, 2, 1
  04b65d0  fctiwz 1, 1
  04b65d4  stfd 1, 128(1)
  04b65d8  lwz 30, 132(1)
  04b65dc  lfs 28, 24(3)
  04b65e0  lfs 29, 28(3)
  04b65e4  lfs 30, 32(3)
  04b65e8  addic 3, 1, 112
  04b65ec  fmr 1, 29
  04b65f0  lis 10, 32767
  04b65f4  fmr 2, 31
  04b65f8  ori 7, 29, 0
  04b65fc  fmr 3, 31
  04b6600  fmr 4, 28
  04b6604  ori 8, 31, 0
  04b6608  ori 10, 10, 65535
  04b660c  bl 0x126f50
  04b6610  nop
  04b6614  ori 27, 3, 0
  04b6618  cmpwi 27, 0
  04b661c  bt 2, 0x4b664c
  04b6620  li 3, 255
  04b6624  sth 30, 10(27)
  04b6628  bl 0xfc620
  04b662c  nop
  04b6630  stb 3, 8(27)
  04b6634  li 4, 127
  04b6638  li 3, 2
  04b663c  lhz 5, 10(27)
  04b6640  stb 5, 43(27)
  04b6644  stw 3, 36(27)
  04b6648  stb 4, 42(27)
  04b664c  addic 28, 28, 1
  04b6650  fsubs 28, 28, 30
  04b6654  neg 29, 29
  04b6658  cmpwi 28, 3
  04b665c  sldi 30, 30, 1
  04b6660  bt 0, 0x4b65e8
  04b6664  li 0, 144
  04b6668  lvx 31, 1, 0
  04b666c  ld 0, 256(1)
  04b6670  mtlr 0
  04b6674  lfd 28, 208(1)
  04b6678  lfd 29, 216(1)
  04b667c  lfd 30, 224(1)
  04b6680  lfd 31, 232(1)
  04b6684  ld 26, 160(1)
  04b6688  ld 27, 168(1)
  04b668c  ld 28, 176(1)
  04b6690  ld 29, 184(1)
  04b6694  ld 30, 192(1)
  04b6698  ld 31, 200(1)
  04b669c  addi 1, 1, 240
  04b66a0  blr

M923_004b66b8:   # 0x4b66b8, 0x384 bytes
  04b66b8  stdu 1, -224(1)
  04b66bc  mflr 0
  04b66c0  std 0, 240(1)
  04b66c4  stfd 31, 216(1)
  04b66c8  lis 4, 143
  04b66cc  std 30, 200(1)
  04b66d0  lis 5, 151
  04b66d4  lwz 30, 120(3)
  04b66d8  std 31, 208(1)
  04b66dc  lis 6, 114
  04b66e0  ori 31, 3, 0
  04b66e4  lfs 3, 17896(4)
  04b66e8  lwz 4, -25488(5)
  04b66ec  lfs 1, -3052(6)
  04b66f0  lbz 3, 32(3)
  04b66f4  cmpwi 4, 16
  04b66f8  lfs 2, 248(30)
  04b66fc  std 29, 192(1)
  04b6700  std 28, 184(1)
  04b6704  std 27, 176(1)
  04b6708  cmpwi 1, 3, 5
  04b670c  bf 2, 0x4b671c
  04b6710  lis 3, 75
  04b6714  addi 3, 3, 26276
  04b6718  lfs 3, 0(3)
  04b671c  lis 3, 75
  04b6720  addi 3, 3, 26276
  04b6724  lis 29, 165
  04b6728  addic 29, 29, 7136
  04b672c  lfs 31, 4(3)
  04b6730  fsub 4, 31, 2
  04b6734  fsub 5, 31, 2
  04b6738  fsub 6, 2, 31
  04b673c  fsub 7, 2, 31
  04b6740  fsel 3, 4, 3, 1
  04b6744  fsel 4, 5, 1, 2
  04b6748  fsel 1, 6, 3, 1
  04b674c  fsel 2, 7, 4, 2
  04b6750  fmuls 1, 2, 1
  04b6754  bf 6, 0x4b676c
  04b6758  lwz 3, 220(30)
  04b675c  slwi 3, 3, 2
  04b6760  extsw 3, 3
  04b6764  lwzx 29, 29, 3
  04b6768  b 0x4b677c
  04b676c  lwz 3, 216(30)
  04b6770  slwi 3, 3, 2
  04b6774  extsw 3, 3
  04b6778  lwzx 29, 29, 3
  04b677c  addic 4, 1, 112
  04b6780  addic 5, 30, 208
  04b6784  addic 6, 30, 212
  04b6788  ori 3, 29, 0
  04b678c  li 8, 0
  04b6790  bl 0x10ce18
  04b6794  nop
  04b6798  lis 28, 143
  04b679c  lfs 1, 112(1)
  04b67a0  lis 27, 143
  04b67a4  fmr 4, 31
  04b67a8  ori 29, 3, 0
  04b67ac  addic 3, 31, 16
  04b67b0  addic 5, 30, 228
  04b67b4  lfs 2, 17900(28)
  04b67b8  lfs 3, 17904(27)
  04b67bc  bl 0x109b40
  04b67c0  nop
  04b67c4  lfs 1, 116(1)
  04b67c8  lfs 2, 17900(28)
  04b67cc  addic 3, 31, 20
  04b67d0  lfs 3, 17904(27)
  04b67d4  addic 5, 30, 232
  04b67d8  fmr 4, 31
  04b67dc  bl 0x109b40
  04b67e0  nop
  04b67e4  lfs 1, 120(1)
  04b67e8  lfs 2, 17900(28)
  04b67ec  addic 3, 31, 24
  04b67f0  lfs 3, 17904(27)
  04b67f4  addic 5, 30, 236
  04b67f8  fmr 4, 31
  04b67fc  bl 0x109b40
  04b6800  nop
  04b6804  lfs 1, 112(1)
  04b6808  lfs 2, 16(31)
  04b680c  lis 3, 75
  04b6810  fsubs 1, 1, 2
  04b6814  addi 3, 3, 26276
  04b6818  lfs 2, 116(1)
  04b681c  lfs 6, 20(31)
  04b6820  fsubs 2, 2, 6
  04b6824  lfs 4, 8(3)
  04b6828  lfs 5, 17900(28)
  04b682c  lfs 6, 17904(27)
  04b6830  fabs 3, 1
  04b6834  fcmpu 0, 3, 4
  04b6838  cror 6, 0, 2
  04b683c  bt 6, 0x4b6a10
  04b6840  fmr 7, 4
  04b6844  fabs 4, 2
  04b6848  fcmpu 0, 4, 7
  04b684c  cror 6, 0, 2
  04b6850  bt 6, 0x4b6a10
  04b6854  fsubs 7, 3, 4
  04b6858  stfs 1, 128(1)
  04b685c  stfs 2, 132(1)
  04b6860  lis 3, 115
  04b6864  addic 3, 3, 22784
  04b6868  stfs 7, 136(1)
  04b686c  lwz 4, 128(1)
  04b6870  lfs 1, 128(1)
  04b6874  lwz 5, 136(1)
  04b6878  lfs 2, 136(1)
  04b687c  fabs 1, 1
  04b6880  lwz 6, 132(1)
  04b6884  fsub 7, 2, 31
  04b6888  rlwinm 6, 6, 3, 29, 29
  04b688c  lfs 8, 132(1)
  04b6890  fsub 2, 2, 31
  04b6894  rlwimi 6, 5, 2, 30, 30
  04b6898  fabs 8, 8
  04b689c  rlwimi 6, 4, 4, 28, 28
  04b68a0  ori 4, 3, 0
  04b68a4  slwi 5, 6, 2
  04b68a8  rlwimi 4, 6, 2, 26, 28
  04b68ac  fsel 4, 7, 1, 4
  04b68b0  clrldi 4, 4, 32
  04b68b4  lfsx 1, 3, 5
  04b68b8  fsel 3, 2, 8, 3
  04b68bc  lfs 2, 4(4)
  04b68c0  fcmpu 0, 4, 31
  04b68c4  bt 1, 0x4b68d0
  04b68c8  fmr 1, 31
  04b68cc  b 0x4b69f4
  04b68d0  fsubs 7, 3, 4
  04b68d4  fadds 3, 3, 4
  04b68d8  addic 3, 1, 16
  04b68dc  li 6, 2
  04b68e0  addic 4, 3, 124
  04b68e4  addic 5, 3, 140
  04b68e8  mtctr 6
  04b68ec  fdivs 3, 7, 3
  04b68f0  fmuls 4, 3, 3
  04b68f4  stfs 3, 152(1)
  04b68f8  stfs 3, 144(1)
  04b68fc  stfs 3, 148(1)
  04b6900  stfs 3, 140(1)
  04b6904  lfs 8, 152(1)
  04b6908  lfs 9, 144(1)
  04b690c  lfs 10, 148(1)
  04b6910  fmuls 7, 4, 4
  04b6914  fmuls 9, 9, 4
  04b6918  fmuls 8, 8, 7
  04b691c  fmuls 3, 7, 7
  04b6920  fmuls 7, 10, 7
  04b6924  stfs 9, 144(1)
  04b6928  fmuls 4, 8, 4
  04b692c  stfs 7, 148(1)
  04b6930  stfs 4, 152(1)
  04b6934  lfs 4, 124(3)
  04b6938  fmuls 4, 4, 3
  04b693c  stfs 4, 140(3)
  04b6940  lfs 4, 4(4)
  04b6944  addic 3, 3, 8
  04b6948  addic 4, 4, 8
  04b694c  fmuls 4, 4, 3
  04b6950  stfs 4, 4(5)
  04b6954  addic 5, 5, 8
  04b6958  bdnz 0x4b6934
  04b695c  ori 3, 1, 0
  04b6960  lis 4, 115
  04b6964  li 8, 4
  04b6968  addic 5, 3, 140
  04b696c  addic 4, 4, 22752
  04b6970  ori 7, 5, 0
  04b6974  mtctr 8
  04b6978  lfs 3, 140(3)
  04b697c  lfs 4, 0(4)
  04b6980  fmuls 3, 3, 4
  04b6984  lfs 4, 4(4)
  04b6988  addic 4, 4, 8
  04b698c  stfs 3, 140(3)
  04b6990  lfs 3, 4(5)
  04b6994  addic 3, 3, 8
  04b6998  fmuls 3, 3, 4
  04b699c  stfs 3, 4(5)
  04b69a0  addic 5, 5, 8
  04b69a4  bdnz 0x4b6978
  04b69a8  fmr 3, 31
  04b69ac  ori 3, 1, 0
  04b69b0  mtctr 6
  04b69b4  lfs 4, 140(3)
  04b69b8  fadds 3, 3, 4
  04b69bc  addic 3, 3, 16
  04b69c0  lfs 4, 4(7)
  04b69c4  lfs 7, 8(7)
  04b69c8  lfs 8, 12(7)
  04b69cc  addic 7, 7, 16
  04b69d0  fadds 3, 3, 4
  04b69d4  fadds 3, 3, 7
  04b69d8  fadds 3, 3, 8
  04b69dc  bdnz 0x4b69b4
  04b69e0  lis 3, 75
  04b69e4  addi 3, 3, 26276
  04b69e8  lfs 4, 12(3)
  04b69ec  fadds 3, 3, 4
  04b69f0  fmadds 1, 3, 1, 2
  04b69f4  addic 5, 30, 240
  04b69f8  ori 3, 31, 0
  04b69fc  fmr 2, 5
  04b6a00  fmr 3, 6
  04b6a04  fmr 4, 31
  04b6a08  bl 0xff2e8
  04b6a0c  nop
  04b6a10  ori 3, 29, 0
  04b6a14  ld 0, 240(1)
  04b6a18  mtlr 0
  04b6a1c  lfd 31, 216(1)
  04b6a20  ld 27, 176(1)
  04b6a24  ld 28, 184(1)
  04b6a28  ld 29, 192(1)
  04b6a2c  ld 30, 200(1)
  04b6a30  ld 31, 208(1)
  04b6a34  addi 1, 1, 224
  04b6a38  blr

M923_004b6a40:   # 0x4b6a40, 0x13c bytes
  04b6a40  lwz 5, 120(3)
  04b6a44  lfs 1, 16(3)
  04b6a48  lwz 4, 244(5)
  04b6a4c  cmpwi 4, 0
  04b6a50  bt 2, 0x4b6b78
  04b6a54  lfs 2, 196(3)
  04b6a58  lfs 3, 192(3)
  04b6a5c  fmuls 4, 2, 2
  04b6a60  lfs 5, 200(3)
  04b6a64  lis 6, 143
  04b6a68  lfs 6, 17908(6)
  04b6a6c  fmadds 4, 3, 3, 4
  04b6a70  lis 6, 75
  04b6a74  addi 6, 6, 27196
  04b6a78  fmadds 4, 5, 5, 4
  04b6a7c  lfs 7, 0(6)
  04b6a80  fsqrts 4, 4
  04b6a84  lis 6, 143
  04b6a88  fdivs 6, 6, 4
  04b6a8c  fsub 8, 7, 4
  04b6a90  fsub 9, 4, 7
  04b6a94  fsub 10, 7, 4
  04b6a98  fsub 11, 4, 7
  04b6a9c  fsub 12, 7, 4
  04b6aa0  fsub 4, 4, 7
  04b6aa4  fmuls 3, 3, 6
  04b6aa8  fmuls 2, 2, 6
  04b6aac  fmuls 5, 5, 6
  04b6ab0  fsel 6, 8, 7, 3
  04b6ab4  fsel 8, 10, 7, 2
  04b6ab8  fsel 10, 12, 7, 5
  04b6abc  fsel 3, 9, 6, 3
  04b6ac0  fsel 2, 11, 8, 2
  04b6ac4  fsel 4, 4, 10, 5
  04b6ac8  fadds 1, 1, 3
  04b6acc  stfs 1, 16(4)
  04b6ad0  lfs 1, 20(3)
  04b6ad4  fadds 1, 1, 2
  04b6ad8  stfs 1, 20(4)
  04b6adc  lfs 1, 24(3)
  04b6ae0  fadds 1, 1, 4
  04b6ae4  stfs 1, 24(4)
  04b6ae8  lfs 1, 28(3)
  04b6aec  stfs 1, 28(4)
  04b6af0  lfs 1, 228(3)
  04b6af4  lfs 2, 224(3)
  04b6af8  fmuls 3, 1, 1
  04b6afc  lfs 4, 232(3)
  04b6b00  lfs 5, 17912(6)
  04b6b04  lwz 3, 244(5)
  04b6b08  fmadds 3, 2, 2, 3
  04b6b0c  lfs 6, 16(3)
  04b6b10  lfs 8, 20(3)
  04b6b14  lfs 9, 24(3)
  04b6b18  fmadds 3, 4, 4, 3
  04b6b1c  fsqrts 3, 3
  04b6b20  fdivs 5, 5, 3
  04b6b24  fsub 10, 7, 3
  04b6b28  fsub 11, 7, 3
  04b6b2c  fsub 12, 7, 3
  04b6b30  fsub 13, 3, 7
  04b6b34  fsub 0, 3, 7
  04b6b38  fsub 3, 3, 7
  04b6b3c  fmuls 4, 4, 5
  04b6b40  fmuls 1, 1, 5
  04b6b44  fmuls 2, 2, 5
  04b6b48  fsel 5, 10, 7, 4
  04b6b4c  fsel 10, 11, 7, 1
  04b6b50  fsel 7, 12, 7, 2
  04b6b54  fsel 4, 13, 5, 4
  04b6b58  fsel 1, 0, 10, 1
  04b6b5c  fsel 2, 3, 7, 2
  04b6b60  fadds 3, 9, 4
  04b6b64  fadds 1, 8, 1
  04b6b68  fadds 2, 6, 2
  04b6b6c  stfs 3, 24(3)
  04b6b70  stfs 1, 20(3)
  04b6b74  stfs 2, 16(3)
  04b6b78  blr

M923_004b6b88:   # 0x4b6b88, 0x314 bytes
  04b6b88  stdu 1, -96(1)
  04b6b8c  lwz 6, 120(3)
  04b6b90  lis 5, 165
  04b6b94  li 7, 0
  04b6b98  addic 5, 5, 7136
  04b6b9c  lwz 4, 216(6)
  04b6ba0  slwi 4, 4, 2
  04b6ba4  extsw 9, 4
  04b6ba8  ori 4, 7, 0
  04b6bac  lwzx 9, 5, 9
  04b6bb0  lwz 8, 0(9)
  04b6bb4  addic 8, 8, -1
  04b6bb8  cmpwi 8, 0
  04b6bbc  bf 1, 0x4b6c14
  04b6bc0  ori 8, 9, 0
  04b6bc4  lfs 1, 20(8)
  04b6bc8  lfs 2, 36(8)
  04b6bcc  lfs 3, 16(8)
  04b6bd0  fsubs 1, 1, 2
  04b6bd4  lfs 2, 32(8)
  04b6bd8  fsubs 2, 3, 2
  04b6bdc  lfs 3, 24(8)
  04b6be0  lfs 4, 40(8)
  04b6be4  fsubs 3, 3, 4
  04b6be8  fmuls 1, 1, 1
  04b6bec  addic 7, 7, 1
  04b6bf0  fmadds 1, 2, 2, 1
  04b6bf4  fmadds 1, 3, 3, 1
  04b6bf8  fsqrts 1, 1
  04b6bfc  stfs 1, 28(8)
  04b6c00  lwz 10, 0(9)
  04b6c04  addic 8, 8, 16
  04b6c08  addic 10, 10, -1
  04b6c0c  cmpw 7, 10
  04b6c10  bt 0, 0x4b6bc4
  04b6c14  lis 7, 75
  04b6c18  stw 4, 208(6)
  04b6c1c  addi 7, 7, 27516
  04b6c20  lfs 1, 0(7)
  04b6c24  stw 4, 212(6)
  04b6c28  lfs 2, 16(9)
  04b6c2c  stfs 2, 16(3)
  04b6c30  lfs 3, 20(9)
  04b6c34  stfs 3, 20(3)
  04b6c38  lfs 4, 24(9)
  04b6c3c  stfs 4, 24(3)
  04b6c40  lfs 4, 28(9)
  04b6c44  stfs 4, 28(3)
  04b6c48  lfs 4, 32(9)
  04b6c4c  lfs 5, 36(9)
  04b6c50  fsubs 2, 4, 2
  04b6c54  fsubs 3, 5, 3
  04b6c58  lis 7, 115
  04b6c5c  addic 7, 7, 22784
  04b6c60  fabs 5, 2
  04b6c64  fabs 4, 3
  04b6c68  stfs 2, 48(1)
  04b6c6c  stfs 3, 52(1)
  04b6c70  fsubs 2, 5, 4
  04b6c74  stfs 2, 56(1)
  04b6c78  lwz 8, 48(1)
  04b6c7c  lfs 2, 48(1)
  04b6c80  lwz 9, 52(1)
  04b6c84  lfs 3, 52(1)
  04b6c88  fabs 2, 2
  04b6c8c  lwz 10, 56(1)
  04b6c90  rlwinm 9, 9, 3, 29, 29
  04b6c94  fabs 6, 3
  04b6c98  lfs 3, 56(1)
  04b6c9c  rlwimi 9, 10, 2, 30, 30
  04b6ca0  fsub 7, 3, 1
  04b6ca4  fsub 8, 3, 1
  04b6ca8  rlwimi 9, 8, 4, 28, 28
  04b6cac  ori 8, 7, 0
  04b6cb0  rlwimi 8, 9, 2, 26, 28
  04b6cb4  slwi 9, 9, 2
  04b6cb8  clrldi 8, 8, 32
  04b6cbc  fsel 4, 7, 2, 4
  04b6cc0  lfsx 3, 7, 9
  04b6cc4  lfs 2, 4(8)
  04b6cc8  fsel 5, 8, 6, 5
  04b6ccc  fcmpu 0, 4, 1
  04b6cd0  bt 1, 0x4b6cd8
  04b6cd4  b 0x4b6dfc
  04b6cd8  fsubs 6, 5, 4
  04b6cdc  fadds 4, 5, 4
  04b6ce0  addic 10, 1, 16
  04b6ce4  li 7, 2
  04b6ce8  addic 8, 10, 60
  04b6cec  addic 9, 10, 44
  04b6cf0  mtctr 7
  04b6cf4  fdivs 4, 6, 4
  04b6cf8  fmuls 6, 4, 4
  04b6cfc  stfs 4, 72(1)
  04b6d00  stfs 4, 64(1)
  04b6d04  stfs 4, 68(1)
  04b6d08  stfs 4, 60(1)
  04b6d0c  lfs 7, 72(1)
  04b6d10  lfs 8, 64(1)
  04b6d14  lfs 9, 68(1)
  04b6d18  fmuls 4, 6, 6
  04b6d1c  fmuls 8, 8, 6
  04b6d20  fmuls 7, 7, 4
  04b6d24  fmuls 5, 4, 4
  04b6d28  fmuls 4, 9, 4
  04b6d2c  stfs 8, 64(1)
  04b6d30  fmuls 6, 7, 6
  04b6d34  stfs 4, 68(1)
  04b6d38  stfs 6, 72(1)
  04b6d3c  lfs 4, 44(10)
  04b6d40  fmuls 4, 4, 5
  04b6d44  stfs 4, 60(10)
  04b6d48  lfs 4, 4(9)
  04b6d4c  addic 9, 9, 8
  04b6d50  fmuls 4, 4, 5
  04b6d54  addic 10, 10, 8
  04b6d58  stfs 4, 4(8)
  04b6d5c  addic 8, 8, 8
  04b6d60  bdnz 0x4b6d3c
  04b6d64  ori 11, 1, 0
  04b6d68  li 8, 4
  04b6d6c  lis 10, 115
  04b6d70  addic 9, 11, 60
  04b6d74  mtctr 8
  04b6d78  addic 10, 10, 22752
  04b6d7c  ori 8, 9, 0
  04b6d80  lfs 4, 60(11)
  04b6d84  lfs 5, 0(10)
  04b6d88  fmuls 4, 4, 5
  04b6d8c  lfs 5, 4(10)
  04b6d90  addic 10, 10, 8
  04b6d94  stfs 4, 60(11)
  04b6d98  lfs 4, 4(9)
  04b6d9c  addic 11, 11, 8
  04b6da0  fmuls 4, 4, 5
  04b6da4  stfs 4, 4(9)
  04b6da8  addic 9, 9, 8
  04b6dac  bdnz 0x4b6d80
  04b6db0  ori 9, 7, 0
  04b6db4  ori 7, 1, 0
  04b6db8  mtctr 9
  04b6dbc  lfs 4, 60(7)
  04b6dc0  fadds 1, 1, 4
  04b6dc4  lfs 4, 4(8)
  04b6dc8  addic 7, 7, 16
  04b6dcc  lfs 5, 8(8)
  04b6dd0  lfs 6, 12(8)
  04b6dd4  addic 8, 8, 16
  04b6dd8  fadds 1, 1, 4
  04b6ddc  fadds 1, 1, 5
  04b6de0  fadds 1, 1, 6
  04b6de4  bdnz 0x4b6dbc
  04b6de8  lis 7, 75
  04b6dec  addi 7, 7, 27516
  04b6df0  lfs 4, 4(7)
  04b6df4  fadds 1, 1, 4
  04b6df8  fmadds 1, 1, 3, 2
  04b6dfc  stfs 1, 72(3)
  04b6e00  lwz 3, 252(6)
  04b6e04  stw 4, 236(6)
  04b6e08  stw 4, 232(6)
  04b6e0c  cmpwi 3, 1
  04b6e10  stw 4, 228(6)
  04b6e14  stw 4, 240(6)
  04b6e18  bt 2, 0x4b6e94
  04b6e1c  lwz 3, 220(6)
  04b6e20  ori 7, 4, 0
  04b6e24  slwi 3, 3, 2
  04b6e28  extsw 6, 3
  04b6e2c  lwzx 6, 5, 6
  04b6e30  lwz 3, 0(6)
  04b6e34  addic 3, 3, -1
  04b6e38  cmpwi 3, 0
  04b6e3c  bf 1, 0x4b6e94
  04b6e40  ori 3, 6, 0
  04b6e44  lfs 1, 20(3)
  04b6e48  lfs 2, 36(3)
  04b6e4c  lfs 3, 16(3)
  04b6e50  fsubs 1, 1, 2
  04b6e54  lfs 2, 32(3)
  04b6e58  fsubs 2, 3, 2
  04b6e5c  lfs 3, 24(3)
  04b6e60  lfs 4, 40(3)
  04b6e64  fsubs 3, 3, 4
  04b6e68  fmuls 1, 1, 1
  04b6e6c  addic 7, 7, 1
  04b6e70  fmadds 1, 2, 2, 1
  04b6e74  fmadds 1, 3, 3, 1
  04b6e78  fsqrts 1, 1
  04b6e7c  stfs 1, 28(3)
  04b6e80  lwz 4, 0(6)
  04b6e84  addic 3, 3, 16
  04b6e88  addic 4, 4, -1
  04b6e8c  cmpw 7, 4
  04b6e90  bt 0, 0x4b6e44
  04b6e94  addi 1, 1, 96
  04b6e98  blr

UpdateMoby_923:   # 0x4b6ec0, 0xcb4 bytes
  04b6ec0  stdu 1, -336(1)
  04b6ec4  mflr 0
  04b6ec8  std 0, 352(1)
  04b6ecc  stfd 29, 312(1)
  04b6ed0  stfd 30, 320(1)
  04b6ed4  stfd 31, 328(1)
  04b6ed8  std 31, 304(1)
  04b6edc  lbz 4, 112(3)
  04b6ee0  std 28, 280(1)
  04b6ee4  ori 31, 3, 0
  04b6ee8  lwz 28, 120(3)
  04b6eec  rlwinm 3, 4, 0, 30, 30
  04b6ef0  std 30, 296(1)
  04b6ef4  std 29, 288(1)
  04b6ef8  std 27, 272(1)
  04b6efc  std 26, 264(1)
  04b6f00  cmpwi 3, 0
  04b6f04  bt 2, 0x4b6f5c
  04b6f08  lbz 3, 82(31)
  04b6f0c  lbz 4, 83(31)
  04b6f10  cmpwi 1, 3, 1
  04b6f14  cmpw 3, 4
  04b6f18  crnand 2, 2, 6
  04b6f1c  bt 2, 0x4b6f5c
  04b6f20  lis 3, 75
  04b6f24  lis 4, 114
  04b6f28  addi 3, 3, 28316
  04b6f2c  li 5, 0
  04b6f30  lfs 1, 0(3)
  04b6f34  lfs 2, -3056(4)
  04b6f38  ori 3, 31, 0
  04b6f3c  li 4, 4
  04b6f40  fmuls 1, 2, 1
  04b6f44  fctiwz 1, 1
  04b6f48  stfd 1, 248(1)
  04b6f4c  lwz 6, 252(1)
  04b6f50  extsw 6, 6
  04b6f54  bl 0xfddc0
  04b6f58  nop
  04b6f5c  lis 30, 151
  04b6f60  addic 30, 30, -25376
  04b6f64  lwz 3, 572(30)
  04b6f68  cmpw 3, 31
  04b6f6c  bf 2, 0x4b6fc4
  04b6f70  lbz 3, 83(31)
  04b6f74  cmpwi 3, 1
  04b6f78  bt 2, 0x4b6fc4
  04b6f7c  lbz 3, 82(31)
  04b6f80  cmpwi 3, 1
  04b6f84  bt 2, 0x4b6fc4
  04b6f88  lis 3, 75
  04b6f8c  lis 4, 114
  04b6f90  addi 3, 3, 28316
  04b6f94  li 5, 0
  04b6f98  lfs 1, 0(3)
  04b6f9c  lfs 2, -3056(4)
  04b6fa0  ori 3, 31, 0
  04b6fa4  li 4, 1
  04b6fa8  fmuls 1, 2, 1
  04b6fac  fctiwz 1, 1
  04b6fb0  stfd 1, 248(1)
  04b6fb4  lwz 6, 252(1)
  04b6fb8  extsw 6, 6
  04b6fbc  bl 0xfddc0
  04b6fc0  nop
  04b6fc4  ori 3, 31, 0
  04b6fc8  lis 4, 33
  04b6fcc  li 5, 0
  04b6fd0  bl 0x10675c
  04b6fd4  nop
  04b6fd8  ori 4, 3, 0
  04b6fdc  lbz 3, 32(31)
  04b6fe0  cmpwi 4, 0
  04b6fe4  bt 2, 0x4b7244
  04b6fe8  cmpwi 3, 6
  04b6fec  bt 2, 0x4b7244
  04b6ff0  lis 3, 15363
  04b6ff4  lis 4, 14851
  04b6ff8  ori 3, 3, 4719
  04b6ffc  lis 5, 75
  04b7000  ori 4, 4, 4719
  04b7004  addi 5, 5, 28316
  04b7008  stw 3, 128(28)
  04b700c  lis 3, 114
  04b7010  stw 4, 132(28)
  04b7014  li 4, 1
  04b7018  lfs 1, 4(5)
  04b701c  lfs 2, -3052(3)
  04b7020  li 3, 0
  04b7024  fmuls 1, 2, 1
  04b7028  stfs 1, 136(28)
  04b702c  lfs 1, 8(5)
  04b7030  stb 3, 173(28)
  04b7034  fmuls 1, 2, 1
  04b7038  stw 4, 148(28)
  04b703c  lis 4, 115
  04b7040  addic 3, 28, 112
  04b7044  addic 4, 4, 22784
  04b7048  stfs 1, 140(28)
  04b704c  lfs 1, 16(31)
  04b7050  lfs 2, 128(30)
  04b7054  lfs 3, 20(31)
  04b7058  lfs 4, 132(30)
  04b705c  fsubs 1, 1, 2
  04b7060  fsubs 2, 3, 4
  04b7064  fabs 3, 1
  04b7068  fabs 5, 2
  04b706c  stfs 1, 136(1)
  04b7070  stfs 2, 140(1)
  04b7074  fsubs 1, 3, 5
  04b7078  stfs 1, 144(1)
  04b707c  lwz 6, 136(1)
  04b7080  lfs 4, 12(5)
  04b7084  lfs 1, 136(1)
  04b7088  lwz 5, 140(1)
  04b708c  lfs 2, 140(1)
  04b7090  fabs 1, 1
  04b7094  lwz 7, 144(1)
  04b7098  rlwinm 5, 5, 3, 29, 29
  04b709c  fabs 6, 2
  04b70a0  lfs 2, 144(1)
  04b70a4  rlwimi 5, 7, 2, 30, 30
  04b70a8  fsub 7, 2, 4
  04b70ac  fsub 8, 2, 4
  04b70b0  rlwimi 5, 6, 4, 28, 28
  04b70b4  ori 6, 4, 0
  04b70b8  rlwimi 6, 5, 2, 26, 28
  04b70bc  slwi 5, 5, 2
  04b70c0  clrldi 6, 6, 32
  04b70c4  fsel 5, 7, 1, 5
  04b70c8  lfsx 1, 4, 5
  04b70cc  lfs 2, 4(6)
  04b70d0  fsel 3, 8, 6, 3
  04b70d4  fcmpu 0, 5, 4
  04b70d8  bt 1, 0x4b70e0
  04b70dc  b 0x4b7200
  04b70e0  fsubs 6, 3, 5
  04b70e4  fadds 3, 3, 5
  04b70e8  addic 4, 1, 16
  04b70ec  li 7, 2
  04b70f0  addic 6, 4, 212
  04b70f4  addic 5, 4, 196
  04b70f8  mtctr 7
  04b70fc  fdivs 3, 6, 3
  04b7100  fmuls 5, 3, 3
  04b7104  stfs 3, 224(1)
  04b7108  stfs 3, 216(1)
  04b710c  stfs 3, 220(1)
  04b7110  stfs 3, 212(1)
  04b7114  lfs 7, 224(1)
  04b7118  lfs 8, 216(1)
  04b711c  lfs 9, 220(1)
  04b7120  fmuls 6, 5, 5
  04b7124  fmuls 8, 8, 5
  04b7128  fmuls 7, 7, 6
  04b712c  fmuls 3, 6, 6
  04b7130  fmuls 6, 9, 6
  04b7134  stfs 8, 216(1)
  04b7138  fmuls 5, 7, 5
  04b713c  stfs 6, 220(1)
  04b7140  stfs 5, 224(1)
  04b7144  lfs 5, 196(4)
  04b7148  fmuls 5, 5, 3
  04b714c  stfs 5, 212(4)
  04b7150  lfs 5, 4(5)
  04b7154  addic 5, 5, 8
  04b7158  fmuls 5, 5, 3
  04b715c  addic 4, 4, 8
  04b7160  stfs 5, 4(6)
  04b7164  addic 6, 6, 8
  04b7168  bdnz 0x4b7144
  04b716c  li 6, 4
  04b7170  ori 4, 1, 0
  04b7174  mtctr 6
  04b7178  lis 5, 115
  04b717c  addic 6, 4, 212
  04b7180  addic 5, 5, 22752
  04b7184  ori 8, 6, 0
  04b7188  lfs 3, 212(4)
  04b718c  lfs 5, 0(5)
  04b7190  fmuls 3, 3, 5
  04b7194  lfs 5, 4(5)
  04b7198  addic 5, 5, 8
  04b719c  stfs 3, 212(4)
  04b71a0  lfs 3, 4(6)
  04b71a4  addic 4, 4, 8
  04b71a8  fmuls 3, 3, 5
  04b71ac  stfs 3, 4(6)
  04b71b0  addic 6, 6, 8
  04b71b4  bdnz 0x4b7188
  04b71b8  ori 4, 1, 0
  04b71bc  mtctr 7
  04b71c0  lfs 3, 212(4)
  04b71c4  fadds 3, 4, 3
  04b71c8  addic 4, 4, 16
  04b71cc  lfs 4, 4(8)
  04b71d0  lfs 5, 8(8)
  04b71d4  lfs 6, 12(8)
  04b71d8  addic 8, 8, 16
  04b71dc  fadds 3, 3, 4
  04b71e0  fadds 4, 3, 5
  04b71e4  fadds 4, 4, 6
  04b71e8  bdnz 0x4b71c0
  04b71ec  lis 4, 75
  04b71f0  addi 4, 4, 28316
  04b71f4  lfs 3, 16(4)
  04b71f8  fadds 4, 4, 3
  04b71fc  fmadds 4, 4, 1, 2
  04b7200  ori 4, 3, 0
  04b7204  li 6, 1
  04b7208  fmr 1, 4
  04b720c  ori 3, 31, 0
  04b7210  li 7, 1
  04b7214  li 8, 0
  04b7218  bl 0x10ad80
  04b721c  nop
  04b7220  li 6, 120
  04b7224  ori 3, 31, 0
  04b7228  li 4, 0
  04b722c  li 5, -1
  04b7230  stb 6, 103(28)
  04b7234  bl 0xfd8d0
  04b7238  nop
  04b723c  li 3, 6
  04b7240  stb 3, 32(31)
  04b7244  li 4, 255
  04b7248  cmpwi 3, 6
  04b724c  cmpwi 6, 3, 5
  04b7250  stb 4, 164(31)
  04b7254  bt 2, 0x4b7ab0
  04b7258  cmpwi 1, 3, 4
  04b725c  bt 26, 0x4b7860
  04b7260  cmpwi 6, 3, 3
  04b7264  bt 6, 0x4b76ac
  04b7268  cmpwi 1, 3, 2
  04b726c  bt 26, 0x4b76fc
  04b7270  cmpwi 6, 3, 1
  04b7274  bt 6, 0x4b7614
  04b7278  cmpwi 1, 3, 0
  04b727c  bt 26, 0x4b741c
  04b7280  bf 6, 0x4b7b30
  04b7284  lwz 3, 252(28)
  04b7288  cmpwi 3, 2
  04b728c  cmpwi 1, 3, 1
  04b7290  bf 2, 0x4b72bc
  04b7294  li 5, 1
  04b7298  li 6, 0
  04b729c  ori 3, 31, 0
  04b72a0  li 4, 4
  04b72a4  stb 5, 32(31)
  04b72a8  li 5, 0
  04b72ac  stw 6, 240(28)
  04b72b0  bl 0xfdcf0
  04b72b4  nop
  04b72b8  b 0x4b7410
  04b72bc  lwz 3, 216(28)
  04b72c0  cmpwi 3, -1
  04b72c4  bf 2, 0x4b72f0
  04b72c8  lis 3, 102
  04b72cc  lhz 4, 178(31)
  04b72d0  addic 3, 3, -29896
  04b72d4  extsh 4, 4
  04b72d8  bl 0x5cd098
  04b72dc  nop
  04b72e0  ori 3, 31, 0
  04b72e4  bl 0xefb38
  04b72e8  nop
  04b72ec  b 0x4b7b40
  04b72f0  lis 4, 165
  04b72f4  slwi 5, 3, 2
  04b72f8  addic 3, 4, 7136
  04b72fc  extsw 4, 5
  04b7300  lwzx 4, 3, 4
  04b7304  lwz 4, 0(4)
  04b7308  cmpwi 4, 0
  04b730c  bf 2, 0x4b7338
  04b7310  lis 3, 102
  04b7314  lhz 4, 178(31)
  04b7318  addic 3, 3, -29840
  04b731c  extsh 4, 4
  04b7320  bl 0x5cd098
  04b7324  nop
  04b7328  ori 3, 31, 0
  04b732c  bl 0xefb38
  04b7330  nop
  04b7334  b 0x4b7b40
  04b7338  bt 6, 0x4b73b0
  04b733c  lwz 4, 220(28)
  04b7340  cmpwi 4, -1
  04b7344  bf 2, 0x4b7370
  04b7348  lis 3, 102
  04b734c  lhz 4, 178(31)
  04b7350  addic 3, 3, -29768
  04b7354  extsh 4, 4
  04b7358  bl 0x5cd098
  04b735c  nop
  04b7360  ori 3, 31, 0
  04b7364  bl 0xefb38
  04b7368  nop
  04b736c  b 0x4b7b40
  04b7370  slwi 4, 4, 2
  04b7374  extsw 4, 4
  04b7378  lwzx 3, 3, 4
  04b737c  lwz 3, 0(3)
  04b7380  cmpwi 3, 0
  04b7384  bf 2, 0x4b73b0
  04b7388  lis 3, 102
  04b738c  lhz 4, 178(31)
  04b7390  addic 3, 3, -29712
  04b7394  extsh 4, 4
  04b7398  bl 0x5cd098
  04b739c  nop
  04b73a0  ori 3, 31, 0
  04b73a4  bl 0xefb38
  04b73a8  nop
  04b73ac  b 0x4b7b40
  04b73b0  lwz 3, 224(28)
  04b73b4  cmpwi 3, -1
  04b73b8  bf 2, 0x4b73e4
  04b73bc  lis 3, 102
  04b73c0  lhz 4, 178(31)
  04b73c4  addic 3, 3, -29640
  04b73c8  extsh 4, 4
  04b73cc  bl 0x5cd098
  04b73d0  nop
  04b73d4  ori 3, 31, 0
  04b73d8  bl 0xefb38
  04b73dc  nop
  04b73e0  b 0x4b7b40
  04b73e4  ori 3, 31, 0
  04b73e8  bl 0x4b6b88
  04b73ec  li 3, 2
  04b73f0  lhz 4, 52(31)
  04b73f4  li 5, 128
  04b73f8  li 6, 0
  04b73fc  ori 4, 4, 65
  04b7400  stb 3, 32(31)
  04b7404  stb 5, 48(31)
  04b7408  stw 6, 148(31)
  04b740c  sth 4, 52(31)
  04b7410  li 3, 0
  04b7414  stw 3, 244(28)
  04b7418  b 0x4b7b30
  04b741c  lfs 1, 128(30)
  04b7420  lfs 2, 16(31)
  04b7424  lfs 3, 132(30)
  04b7428  lfs 4, 20(31)
  04b742c  fsubs 1, 1, 2
  04b7430  lis 3, 75
  04b7434  fsubs 2, 3, 4
  04b7438  addi 3, 3, 28316
  04b743c  lis 4, 115
  04b7440  addic 4, 4, 22784
  04b7444  fabs 3, 1
  04b7448  fabs 5, 2
  04b744c  stfs 1, 124(1)
  04b7450  stfs 2, 128(1)
  04b7454  fsubs 1, 3, 5
  04b7458  stfs 1, 132(1)
  04b745c  lwz 5, 124(1)
  04b7460  lfs 4, 12(3)
  04b7464  lfs 1, 124(1)
  04b7468  lwz 3, 128(1)
  04b746c  lfs 2, 128(1)
  04b7470  lwz 6, 132(1)
  04b7474  rlwinm 3, 3, 3, 29, 29
  04b7478  fabs 6, 2
  04b747c  lfs 2, 132(1)
  04b7480  fabs 1, 1
  04b7484  rlwimi 3, 6, 2, 30, 30
  04b7488  fsub 7, 2, 4
  04b748c  rlwimi 3, 5, 4, 28, 28
  04b7490  fsub 8, 2, 4
  04b7494  ori 5, 4, 0
  04b7498  rlwimi 5, 3, 2, 26, 28
  04b749c  slwi 3, 3, 2
  04b74a0  clrldi 5, 5, 32
  04b74a4  fsel 5, 7, 1, 5
  04b74a8  lfsx 1, 4, 3
  04b74ac  lfs 2, 4(5)
  04b74b0  fsel 3, 8, 6, 3
  04b74b4  fcmpu 0, 5, 4
  04b74b8  bt 1, 0x4b74c4
  04b74bc  fmr 1, 4
  04b74c0  b 0x4b75e8
  04b74c4  fsubs 6, 3, 5
  04b74c8  fadds 3, 3, 5
  04b74cc  addic 3, 1, 16
  04b74d0  li 6, 2
  04b74d4  addic 5, 3, 180
  04b74d8  addic 4, 3, 164
  04b74dc  mtctr 6
  04b74e0  fdivs 3, 6, 3
  04b74e4  fmuls 5, 3, 3
  04b74e8  stfs 3, 192(1)
  04b74ec  stfs 3, 184(1)
  04b74f0  stfs 3, 188(1)
  04b74f4  stfs 3, 180(1)
  04b74f8  lfs 7, 192(1)
  04b74fc  lfs 8, 184(1)
  04b7500  lfs 9, 188(1)
  04b7504  fmuls 6, 5, 5
  04b7508  fmuls 8, 8, 5
  04b750c  fmuls 7, 7, 6
  04b7510  fmuls 3, 6, 6
  04b7514  fmuls 6, 9, 6
  04b7518  stfs 8, 184(1)
  04b751c  fmuls 5, 7, 5
  04b7520  stfs 6, 188(1)
  04b7524  stfs 5, 192(1)
  04b7528  lfs 5, 164(3)
  04b752c  fmuls 5, 5, 3
  04b7530  stfs 5, 180(3)
  04b7534  lfs 5, 4(4)
  04b7538  addic 4, 4, 8
  04b753c  fmuls 5, 5, 3
  04b7540  addic 3, 3, 8
  04b7544  stfs 5, 4(5)
  04b7548  addic 5, 5, 8
  04b754c  bdnz 0x4b7528
  04b7550  li 5, 4
  04b7554  ori 3, 1, 0
  04b7558  mtctr 5
  04b755c  lis 4, 115
  04b7560  addic 5, 3, 180
  04b7564  addic 4, 4, 22752
  04b7568  ori 7, 5, 0
  04b756c  lfs 3, 180(3)
  04b7570  lfs 5, 0(4)
  04b7574  fmuls 3, 3, 5
  04b7578  lfs 5, 4(4)
  04b757c  addic 4, 4, 8
  04b7580  stfs 3, 180(3)
  04b7584  lfs 3, 4(5)
  04b7588  addic 3, 3, 8
  04b758c  fmuls 3, 3, 5
  04b7590  stfs 3, 4(5)
  04b7594  addic 5, 5, 8
  04b7598  bdnz 0x4b756c
  04b759c  ori 3, 1, 0
  04b75a0  fmr 3, 4
  04b75a4  mtctr 6
  04b75a8  lfs 5, 180(3)
  04b75ac  fadds 3, 3, 5
  04b75b0  lfs 5, 4(7)
  04b75b4  addic 3, 3, 16
  04b75b8  lfs 6, 8(7)
  04b75bc  lfs 7, 12(7)
  04b75c0  addic 7, 7, 16
  04b75c4  fadds 3, 3, 5
  04b75c8  fadds 3, 3, 6
  04b75cc  fadds 3, 3, 7
  04b75d0  bdnz 0x4b75a8
  04b75d4  lis 3, 75
  04b75d8  addi 3, 3, 28316
  04b75dc  lfs 5, 16(3)
  04b75e0  fadds 3, 3, 5
  04b75e4  fmadds 1, 3, 1, 2
  04b75e8  lis 4, 75
  04b75ec  ori 3, 31, 0
  04b75f0  addi 4, 4, 28316
  04b75f4  addic 5, 28, 240
  04b75f8  lfs 2, 20(4)
  04b75fc  lfs 3, 24(4)
  04b7600  bl 0xff2e8
  04b7604  nop
  04b7608  ori 3, 31, 0
  04b760c  bl 0x4b63a8
  04b7610  b 0x4b7b30
  04b7614  addic 3, 30, 128
  04b7618  lwz 4, 224(28)
  04b761c  extsw 4, 4
  04b7620  bl 0x110b70
  04b7624  nop
  04b7628  cmpwi 3, 0
  04b762c  bt 2, 0x4b7b30
  04b7630  lwz 3, 252(28)
  04b7634  cmpwi 3, 1
  04b7638  bf 2, 0x4b7654
  04b763c  ori 3, 31, 0
  04b7640  li 4, 0
  04b7644  li 5, 0
  04b7648  bl 0xfdcf0
  04b764c  nop
  04b7650  b 0x4b7684
  04b7654  ori 3, 31, 0
  04b7658  addic 4, 31, 16
  04b765c  bl 0x4bfdf8
  04b7660  nop
  04b7664  stw 3, 244(28)
  04b7668  ori 3, 31, 0
  04b766c  bl 0x4b6a40
  04b7670  ori 3, 31, 0
  04b7674  li 4, 2
  04b7678  li 5, 0
  04b767c  bl 0xfdcf0
  04b7680  nop
  04b7684  li 3, -66
  04b7688  lhz 5, 52(31)
  04b768c  li 4, 4
  04b7690  lwz 6, 36(31)
  04b7694  and 3, 5, 3
  04b7698  sth 3, 52(31)
  04b769c  lwz 3, 16(6)
  04b76a0  stb 4, 32(31)
  04b76a4  stw 3, 148(31)
  04b76a8  b 0x4b7b30
  04b76ac  lwz 3, 252(28)
  04b76b0  cmpwi 3, 0
  04b76b4  bf 2, 0x4b76c0
  04b76b8  ori 3, 31, 0
  04b76bc  bl 0x4b6a40
  04b76c0  ori 3, 31, 0
  04b76c4  bl 0x4b66b8
  04b76c8  cmpwi 3, 0
  04b76cc  bt 2, 0x4b76f0
  04b76d0  li 6, 3
  04b76d4  ori 3, 31, 0
  04b76d8  li 4, 3
  04b76dc  li 5, 0
  04b76e0  stb 6, 32(31)
  04b76e4  li 6, 5
  04b76e8  bl 0xfddc0
  04b76ec  nop
  04b76f0  ori 3, 31, 0
  04b76f4  bl 0x4b63a8
  04b76f8  b 0x4b7b30
  04b76fc  lwz 30, 120(31)
  04b7700  lis 3, 165
  04b7704  addic 29, 3, 7136
  04b7708  lwz 3, 216(30)
  04b770c  lwz 4, 252(30)
  04b7710  slwi 3, 3, 2
  04b7714  cmpwi 4, 0
  04b7718  extsw 3, 3
  04b771c  lwzx 29, 29, 3
  04b7720  bf 2, 0x4b772c
  04b7724  ori 3, 31, 0
  04b7728  bl 0x4b6a40
  04b772c  lis 3, 75
  04b7730  lwz 4, 0(29)
  04b7734  lis 27, 143
  04b7738  addi 3, 3, 28316
  04b773c  slwi 4, 4, 4
  04b7740  lis 26, 143
  04b7744  addic 5, 30, 228
  04b7748  lfs 31, 12(3)
  04b774c  addc 3, 29, 4
  04b7750  lfs 2, 17900(27)
  04b7754  fmr 4, 31
  04b7758  clrldi 4, 3, 32
  04b775c  lfs 3, 17904(26)
  04b7760  addic 3, 31, 16
  04b7764  lfs 1, 0(4)
  04b7768  lfs 30, 4(4)
  04b776c  lfs 29, 8(4)
  04b7770  bl 0x109b40
  04b7774  nop
  04b7778  lfs 2, 17900(27)
  04b777c  addic 3, 31, 20
  04b7780  lfs 3, 17904(26)
  04b7784  addic 5, 30, 232
  04b7788  fmr 1, 30
  04b778c  fmr 4, 31
  04b7790  bl 0x109b40
  04b7794  nop
  04b7798  lfs 2, 17900(27)
  04b779c  addic 3, 31, 24
  04b77a0  lfs 3, 17904(26)
  04b77a4  addic 5, 30, 236
  04b77a8  fmr 1, 29
  04b77ac  fmr 4, 31
  04b77b0  bl 0x109b40
  04b77b4  nop
  04b77b8  lbz 3, 112(31)
  04b77bc  rlwinm 3, 3, 0, 30, 30
  04b77c0  cmpwi 3, 0
  04b77c4  bt 2, 0x4b7854
  04b77c8  lbz 3, 82(31)
  04b77cc  lbz 4, 83(31)
  04b77d0  cmpw 3, 4
  04b77d4  bf 2, 0x4b7854
  04b77d8  lwz 3, 252(30)
  04b77dc  cmpwi 3, 1
  04b77e0  bf 2, 0x4b780c
  04b77e4  li 6, 1
  04b77e8  li 7, 0
  04b77ec  ori 3, 31, 0
  04b77f0  li 4, 4
  04b77f4  stb 6, 32(31)
  04b77f8  li 5, 0
  04b77fc  stw 7, 240(30)
  04b7800  bl 0xfdcf0
  04b7804  nop
  04b7808  b 0x4b7854
  04b780c  lwz 3, 244(30)
  04b7810  cmpwi 3, 0
  04b7814  bt 2, 0x4b7828
  04b7818  bl 0x4bff20
  04b781c  nop
  04b7820  li 3, 0
  04b7824  stw 3, 244(30)
  04b7828  li 6, 5
  04b782c  ori 3, 31, 0
  04b7830  li 4, 0
  04b7834  li 5, 0
  04b7838  stb 6, 32(31)
  04b783c  li 6, 20
  04b7840  bl 0xfddc0
  04b7844  nop
  04b7848  li 3, 0
  04b784c  stw 3, 208(30)
  04b7850  stw 3, 212(30)
  04b7854  ori 3, 31, 0
  04b7858  bl 0x4b63a8
  04b785c  b 0x4b7b30
  04b7860  ori 3, 31, 0
  04b7864  bl 0x4b66b8
  04b7868  cmpwi 3, 0
  04b786c  bt 2, 0x4b7aa4
  04b7870  li 3, 2
  04b7874  lhz 7, 52(31)
  04b7878  li 4, 0
  04b787c  lis 5, 75
  04b7880  lis 6, 165
  04b7884  stb 3, 32(31)
  04b7888  ori 3, 7, 65
  04b788c  stw 4, 148(31)
  04b7890  addi 5, 5, 28316
  04b7894  stw 4, 208(28)
  04b7898  lwz 7, 216(28)
  04b789c  addic 6, 6, 7136
  04b78a0  sth 3, 52(31)
  04b78a4  slwi 3, 7, 2
  04b78a8  lfs 4, 12(5)
  04b78ac  extsw 3, 3
  04b78b0  stw 4, 240(28)
  04b78b4  stw 4, 212(28)
  04b78b8  stw 4, 236(28)
  04b78bc  stw 4, 232(28)
  04b78c0  stw 4, 228(28)
  04b78c4  lwzx 3, 6, 3
  04b78c8  lfs 1, 16(3)
  04b78cc  stfs 1, 16(31)
  04b78d0  lfs 2, 20(3)
  04b78d4  stfs 2, 20(31)
  04b78d8  lfs 3, 24(3)
  04b78dc  stfs 3, 24(31)
  04b78e0  lfs 3, 28(3)
  04b78e4  stfs 3, 28(31)
  04b78e8  lfs 3, 32(3)
  04b78ec  lfs 5, 36(3)
  04b78f0  fsubs 1, 3, 1
  04b78f4  fsubs 2, 5, 2
  04b78f8  lis 3, 115
  04b78fc  addic 3, 3, 22784
  04b7900  fabs 3, 1
  04b7904  fabs 5, 2
  04b7908  stfs 1, 112(1)
  04b790c  stfs 2, 116(1)
  04b7910  fsubs 1, 3, 5
  04b7914  stfs 1, 120(1)
  04b7918  lwz 4, 112(1)
  04b791c  lfs 1, 112(1)
  04b7920  lwz 5, 116(1)
  04b7924  lfs 2, 116(1)
  04b7928  lwz 6, 120(1)
  04b792c  rlwinm 5, 5, 3, 29, 29
  04b7930  lfs 6, 120(1)
  04b7934  fabs 1, 1
  04b7938  rlwimi 5, 6, 2, 30, 30
  04b793c  fabs 2, 2
  04b7940  fsub 7, 6, 4
  04b7944  fsub 6, 6, 4
  04b7948  rlwimi 5, 4, 4, 28, 28
  04b794c  ori 4, 3, 0
  04b7950  rlwimi 4, 5, 2, 26, 28
  04b7954  slwi 5, 5, 2
  04b7958  clrldi 4, 4, 32
  04b795c  fsel 5, 7, 1, 5
  04b7960  lfsx 1, 3, 5
  04b7964  fsel 3, 6, 2, 3
  04b7968  lfs 2, 4(4)
  04b796c  fcmpu 0, 5, 4
  04b7970  bt 1, 0x4b7978
  04b7974  b 0x4b7a9c
  04b7978  fsubs 6, 3, 5
  04b797c  fadds 3, 3, 5
  04b7980  addic 3, 1, 16
  04b7984  li 6, 2
  04b7988  addic 4, 3, 132
  04b798c  addic 5, 3, 148
  04b7990  mtctr 6
  04b7994  fdivs 3, 6, 3
  04b7998  fmuls 5, 3, 3
  04b799c  stfs 3, 160(1)
  04b79a0  stfs 3, 152(1)
  04b79a4  stfs 3, 156(1)
  04b79a8  stfs 3, 148(1)
  04b79ac  lfs 7, 160(1)
  04b79b0  lfs 8, 152(1)
  04b79b4  lfs 9, 156(1)
  04b79b8  fmuls 6, 5, 5
  04b79bc  fmuls 8, 8, 5
  04b79c0  fmuls 7, 7, 6
  04b79c4  fmuls 3, 6, 6
  04b79c8  fmuls 6, 9, 6
  04b79cc  stfs 8, 152(1)
  04b79d0  fmuls 5, 7, 5
  04b79d4  stfs 6, 156(1)
  04b79d8  stfs 5, 160(1)
  04b79dc  lfs 5, 132(3)
  04b79e0  fmuls 5, 5, 3
  04b79e4  stfs 5, 148(3)
  04b79e8  lfs 5, 4(4)
  04b79ec  addic 3, 3, 8
  04b79f0  addic 4, 4, 8
  04b79f4  fmuls 5, 5, 3
  04b79f8  stfs 5, 4(5)
  04b79fc  addic 5, 5, 8
  04b7a00  bdnz 0x4b79dc
  04b7a04  li 5, 4
  04b7a08  ori 3, 1, 0
  04b7a0c  mtctr 5
  04b7a10  lis 4, 115
  04b7a14  addic 5, 3, 148
  04b7a18  addic 4, 4, 22752
  04b7a1c  ori 6, 5, 0
  04b7a20  lfs 3, 148(3)
  04b7a24  lfs 5, 0(4)
  04b7a28  fmuls 3, 3, 5
  04b7a2c  lfs 5, 4(4)
  04b7a30  addic 4, 4, 8
  04b7a34  stfs 3, 148(3)
  04b7a38  lfs 3, 4(5)
  04b7a3c  addic 3, 3, 8
  04b7a40  fmuls 3, 3, 5
  04b7a44  stfs 3, 4(5)
  04b7a48  addic 5, 5, 8
  04b7a4c  bdnz 0x4b7a20
  04b7a50  li 4, 2
  04b7a54  ori 3, 1, 0
  04b7a58  mtctr 4
  04b7a5c  lfs 3, 148(3)
  04b7a60  fadds 3, 4, 3
  04b7a64  addic 3, 3, 16
  04b7a68  lfs 4, 4(6)
  04b7a6c  lfs 5, 8(6)
  04b7a70  lfs 6, 12(6)
  04b7a74  addic 6, 6, 16
  04b7a78  fadds 3, 3, 4
  04b7a7c  fadds 4, 3, 5
  04b7a80  fadds 4, 4, 6
  04b7a84  bdnz 0x4b7a5c
  04b7a88  lis 3, 75
  04b7a8c  addi 3, 3, 28316
  04b7a90  lfs 3, 16(3)
  04b7a94  fadds 4, 4, 3
  04b7a98  fmadds 4, 4, 1, 2
  04b7a9c  stfs 4, 72(31)
  04b7aa0  b 0x4b7b30
  04b7aa4  ori 3, 31, 0
  04b7aa8  bl 0x4b63a8
  04b7aac  b 0x4b7b30
  04b7ab0  ori 3, 31, 0
  04b7ab4  addic 4, 28, 112
  04b7ab8  bl 0x10b030
  04b7abc  nop
  04b7ac0  clrlwi 3, 3, 30
  04b7ac4  cmpwi 3, 0
  04b7ac8  bt 2, 0x4b7b00
  04b7acc  lis 4, 75
  04b7ad0  ori 3, 31, 0
  04b7ad4  addi 5, 4, 28316
  04b7ad8  li 6, -1
  04b7adc  addic 4, 31, 16
  04b7ae0  lfs 1, 28(5)
  04b7ae4  lfs 2, 32(5)
  04b7ae8  bl 0x10fb28
  04b7aec  nop
  04b7af0  ori 3, 31, 0
  04b7af4  bl 0xefb38
  04b7af8  nop
  04b7afc  b 0x4b7b40
  04b7b00  lwz 4, 24(31)
  04b7b04  lis 3, 16544
  04b7b08  srawi 5, 4, 31
  04b7b0c  srwi 6, 5, 1
  04b7b10  xor 4, 6, 4
  04b7b14  subc 4, 4, 5
  04b7b18  cmpw 4, 3
  04b7b1c  bf 0, 0x4b7b30
  04b7b20  ori 3, 31, 0
  04b7b24  bl 0xefb38
  04b7b28  nop
  04b7b2c  b 0x4b7b40
  04b7b30  addic 4, 28, 96
  04b7b34  ori 3, 31, 0
  04b7b38  bl 0x10c9a0
  04b7b3c  nop
  04b7b40  ld 0, 352(1)
  04b7b44  mtlr 0
  04b7b48  lfd 29, 312(1)
  04b7b4c  lfd 30, 320(1)
  04b7b50  lfd 31, 328(1)
  04b7b54  ld 26, 264(1)
  04b7b58  ld 27, 272(1)
  04b7b5c  ld 28, 280(1)
  04b7b60  ld 29, 288(1)
  04b7b64  ld 30, 296(1)
  04b7b68  ld 31, 304(1)
  04b7b6c  addi 1, 1, 336
  04b7b70  blr

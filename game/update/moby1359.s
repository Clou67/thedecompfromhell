# game/update/moby1359.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1373_0025b2e4:   # 0x25b2e4, 0x14 bytes
  025b2e4  lis 3, 122
  025b2e8  lis 4, 1
  025b2ec  addic 3, 3, -16592
  025b2f0  stw 4, 72(3)
  025b2f4  blr

UpdateMoby_1359:   # 0x25b328, 0x968 bytes
  025b328  stdu 1, -208(1)
  025b32c  mflr 0
  025b330  std 0, 224(1)
  025b334  std 30, 192(1)
  025b338  std 31, 200(1)
  025b33c  lwz 30, 120(3)
  025b340  ori 31, 3, 0
  025b344  lwz 3, 24(30)
  025b348  std 29, 184(1)
  025b34c  cmpwi 3, -1
  025b350  bt 2, 0x25b360
  025b354  lwz 3, 28(30)
  025b358  cmpwi 3, -1
  025b35c  bf 2, 0x25b370
  025b360  ori 3, 31, 0
  025b364  bl 0xefb38
  025b368  nop
  025b36c  b 0x25bc74
  025b370  lis 4, 161
  025b374  lwz 4, 1800(4)
  025b378  cmpwi 4, 2
  025b37c  bt 2, 0x25bc74
  025b380  lbz 4, 32(31)
  025b384  cmpwi 4, 5
  025b388  cmpwi 1, 4, 4
  025b38c  cmpwi 6, 4, 2
  025b390  cmpwi 7, 4, 1
  025b394  bt 2, 0x25b91c
  025b398  bt 6, 0x25b7f8
  025b39c  bt 26, 0x25b40c
  025b3a0  bt 30, 0x25b6c0
  025b3a4  cmpwi 4, 0
  025b3a8  bf 2, 0x25bc74
  025b3ac  lhz 3, 166(31)
  025b3b0  cmpwi 1, 3, 1361
  025b3b4  cmpwi 3, 1360
  025b3b8  cror 2, 2, 6
  025b3bc  bt 2, 0x25b3d8
  025b3c0  cmpwi 3, 1363
  025b3c4  bt 2, 0x25b3d8
  025b3c8  cmpwi 3, 1367
  025b3cc  bt 2, 0x25b3d8
  025b3d0  cmpwi 3, 1373
  025b3d4  bf 2, 0x25b3e0
  025b3d8  li 3, 1
  025b3dc  stb 3, 188(31)
  025b3e0  lfs 1, 16(31)
  025b3e4  li 3, 1
  025b3e8  stfs 1, 0(30)
  025b3ec  lfs 1, 20(31)
  025b3f0  stfs 1, 4(30)
  025b3f4  lfs 1, 24(31)
  025b3f8  stfs 1, 8(30)
  025b3fc  lfs 1, 28(31)
  025b400  stfs 1, 12(30)
  025b404  stb 3, 32(31)
  025b408  b 0x25bc74
  025b40c  lwz 3, 36(31)
  025b410  lwz 3, 40(3)
  025b414  cmpwi 3, 0
  025b418  bt 2, 0x25b450
  025b41c  ori 3, 31, 0
  025b420  lwz 4, 32(30)
  025b424  extsw 4, 4
  025b428  bl 0x15cc7c
  025b42c  nop
  025b430  cmpwi 3, 0
  025b434  bf 2, 0x25b450
  025b438  li 3, 0
  025b43c  li 4, 4
  025b440  ori 5, 31, 0
  025b444  bl 0x15d12c
  025b448  nop
  025b44c  stw 3, 32(30)
  025b450  lis 3, 38
  025b454  lfs 1, 20(30)
  025b458  lis 4, 114
  025b45c  addi 3, 3, -19720
  025b460  lfs 2, 0(3)
  025b464  lfs 4, -3052(4)
  025b468  lfs 3, 4(3)
  025b46c  lbz 3, 188(31)
  025b470  fmuls 2, 4, 2
  025b474  cmpwi 3, 0
  025b478  bt 2, 0x25b488
  025b47c  lis 3, 38
  025b480  addi 3, 3, -19720
  025b484  lfs 3, 8(3)
  025b488  fmadds 2, 2, 3, 1
  025b48c  lhz 3, 166(31)
  025b490  cmpwi 1, 3, 1373
  025b494  cmpwi 3, 1372
  025b498  cror 2, 2, 6
  025b49c  stfs 2, 20(30)
  025b4a0  lfs 1, 72(31)
  025b4a4  bt 2, 0x25b4b8
  025b4a8  cmpwi 3, 1367
  025b4ac  bt 2, 0x25b4b8
  025b4b0  cmpwi 3, 1369
  025b4b4  bf 2, 0x25b558
  025b4b8  lis 3, 38
  025b4bc  fmr 2, 1
  025b4c0  addi 29, 3, -19720
  025b4c4  lfs 1, 12(29)
  025b4c8  bl 0x502578
  025b4cc  nop
  025b4d0  lfs 2, 16(29)
  025b4d4  lfs 5, 20(29)
  025b4d8  fadds 3, 1, 2
  025b4dc  lfs 6, 24(29)
  025b4e0  fsubs 9, 5, 1
  025b4e4  lfs 2, 28(29)
  025b4e8  fsubs 4, 5, 3
  025b4ec  fsubs 7, 6, 3
  025b4f0  fsubs 6, 6, 1
  025b4f4  fsub 8, 3, 4
  025b4f8  fsel 4, 8, 4, 3
  025b4fc  lfs 3, 32(29)
  025b500  fsub 8, 7, 4
  025b504  fsel 7, 8, 7, 4
  025b508  fsub 8, 1, 9
  025b50c  lfs 4, 36(29)
  025b510  lfs 5, 40(29)
  025b514  lfs 11, 20(30)
  025b518  fmuls 10, 7, 7
  025b51c  fsel 1, 8, 9, 1
  025b520  fmuls 12, 10, 7
  025b524  fsub 9, 6, 1
  025b528  fmuls 8, 10, 12
  025b52c  fmadds 7, 12, 2, 7
  025b530  fsel 1, 9, 6, 1
  025b534  fmuls 12, 10, 8
  025b538  fmadds 7, 8, 3, 7
  025b53c  fmuls 6, 10, 12
  025b540  fmadds 7, 12, 4, 7
  025b544  fmadds 6, 6, 5, 7
  025b548  fmuls 6, 6, 11
  025b54c  stfs 6, 112(1)
  025b550  lfs 6, 20(30)
  025b554  b 0x25b5e4
  025b558  lis 3, 38
  025b55c  addi 3, 3, -19720
  025b560  fmr 7, 2
  025b564  lfs 3, 16(3)
  025b568  lfs 5, 20(3)
  025b56c  fadds 3, 1, 3
  025b570  lfs 6, 24(3)
  025b574  fsubs 10, 5, 1
  025b578  lfs 2, 28(3)
  025b57c  fsubs 4, 5, 3
  025b580  fsubs 8, 6, 3
  025b584  fsubs 6, 6, 1
  025b588  fsub 9, 3, 4
  025b58c  fsel 4, 9, 4, 3
  025b590  lfs 3, 32(3)
  025b594  fsub 9, 8, 4
  025b598  fsel 8, 9, 8, 4
  025b59c  fsub 9, 1, 10
  025b5a0  lfs 4, 36(3)
  025b5a4  lfs 5, 40(3)
  025b5a8  fmuls 11, 8, 8
  025b5ac  fsel 1, 9, 10, 1
  025b5b0  fmuls 12, 11, 8
  025b5b4  fsub 10, 6, 1
  025b5b8  fmuls 9, 11, 12
  025b5bc  fmadds 8, 12, 2, 8
  025b5c0  fsel 1, 10, 6, 1
  025b5c4  fmuls 12, 11, 9
  025b5c8  fmadds 8, 9, 3, 8
  025b5cc  fmuls 6, 11, 12
  025b5d0  fmadds 8, 12, 4, 8
  025b5d4  fmadds 6, 6, 5, 8
  025b5d8  fmuls 6, 6, 7
  025b5dc  stfs 6, 112(1)
  025b5e0  lfs 6, 20(30)
  025b5e4  fmuls 7, 1, 1
  025b5e8  li 3, 0
  025b5ec  addic 5, 1, 112
  025b5f0  ori 4, 30, 0
  025b5f4  stw 3, 120(1)
  025b5f8  addic 3, 1, 128
  025b5fc  fmuls 8, 7, 1
  025b600  fmuls 9, 7, 8
  025b604  fmadds 1, 8, 2, 1
  025b608  fmuls 2, 7, 9
  025b60c  fmadds 1, 9, 3, 1
  025b610  fmuls 3, 7, 2
  025b614  fmadds 1, 2, 4, 1
  025b618  fmadds 1, 3, 5, 1
  025b61c  fmuls 1, 1, 6
  025b620  stfs 1, 116(1)
  025b624  bl 0x5023f0
  025b628  nop
  025b62c  lfs 1, 128(1)
  025b630  lis 3, 16384
  025b634  stfs 1, 16(31)
  025b638  lfs 1, 132(1)
  025b63c  stfs 1, 20(31)
  025b640  lfs 1, 136(1)
  025b644  stfs 1, 24(31)
  025b648  lfs 1, 140(1)
  025b64c  stfs 1, 28(31)
  025b650  lwz 4, 20(30)
  025b654  clrlwi 4, 4, 1
  025b658  cmpw 4, 3
  025b65c  bf 1, 0x25bc74
  025b660  lwz 4, 32(30)
  025b664  cmpwi 4, -1
  025b668  bt 2, 0x25b6ac
  025b66c  sldi 3, 4, 7
  025b670  sldi 6, 4, 4
  025b674  lis 5, 150
  025b678  subc 3, 3, 6
  025b67c  addic 5, 5, 14176
  025b680  extsw 3, 3
  025b684  addc 3, 5, 3
  025b688  lwz 5, 136(3)
  025b68c  cmpw 5, 31
  025b690  bf 2, 0x25b6ac
  025b694  lbz 3, 116(3)
  025b698  cmpwi 3, 0
  025b69c  bt 2, 0x25b6ac
  025b6a0  extsw 3, 4
  025b6a4  bl 0x15cdb0
  025b6a8  nop
  025b6ac  li 3, -1
  025b6b0  li 4, 4
  025b6b4  stw 3, 32(30)
  025b6b8  stb 4, 32(31)
  025b6bc  b 0x25bc74
  025b6c0  li 3, 0
  025b6c4  lwz 4, 32(30)
  025b6c8  cmpwi 4, -1
  025b6cc  stw 3, 20(30)
  025b6d0  bt 2, 0x25b714
  025b6d4  sldi 3, 4, 7
  025b6d8  sldi 6, 4, 4
  025b6dc  lis 5, 150
  025b6e0  subc 3, 3, 6
  025b6e4  addic 5, 5, 14176
  025b6e8  extsw 3, 3
  025b6ec  addc 3, 5, 3
  025b6f0  lwz 5, 136(3)
  025b6f4  cmpw 5, 31
  025b6f8  bf 2, 0x25b714
  025b6fc  lbz 3, 116(3)
  025b700  cmpwi 3, 0
  025b704  bt 2, 0x25b714
  025b708  extsw 3, 4
  025b70c  bl 0x15cdb0
  025b710  nop
  025b714  li 3, -1
  025b718  lis 4, 16201
  025b71c  lwz 5, 64(31)
  025b720  ori 4, 4, 4059
  025b724  stw 3, 32(30)
  025b728  clrlwi 3, 5, 1
  025b72c  cmpw 3, 4
  025b730  bt 0, 0x25b748
  025b734  lis 3, 151
  025b738  addic 3, 3, -25376
  025b73c  lhz 3, 776(3)
  025b740  cmpwi 3, 0
  025b744  bt 2, 0x25bc74
  025b748  lis 3, 151
  025b74c  lwz 4, 24(30)
  025b750  addic 3, 3, -25376
  025b754  extsw 4, 4
  025b758  addic 3, 3, 128
  025b75c  bl 0x110b70
  025b760  nop
  025b764  cmpwi 3, 0
  025b768  bf 2, 0x25b7a8
  025b76c  lwz 3, 16(30)
  025b770  cmpwi 3, -1
  025b774  bt 2, 0x25bc74
  025b778  lis 4, 164
  025b77c  slwi 3, 3, 8
  025b780  lwz 4, -28512(4)
  025b784  addc 3, 4, 3
  025b788  lwz 4, 24(30)
  025b78c  addic 3, 3, 16
  025b790  extsw 4, 4
  025b794  clrldi 3, 3, 32
  025b798  bl 0x110b70
  025b79c  nop
  025b7a0  cmpwi 3, 0
  025b7a4  bt 2, 0x25bc74
  025b7a8  lwz 3, 36(31)
  025b7ac  lwz 3, 40(3)
  025b7b0  cmpwi 3, 0
  025b7b4  bt 2, 0x25b7ec
  025b7b8  ori 3, 31, 0
  025b7bc  lwz 4, 32(30)
  025b7c0  extsw 4, 4
  025b7c4  bl 0x15cc7c
  025b7c8  nop
  025b7cc  cmpwi 3, 0
  025b7d0  bf 2, 0x25b7ec
  025b7d4  li 3, 0
  025b7d8  li 4, 4
  025b7dc  ori 5, 31, 0
  025b7e0  bl 0x15d12c
  025b7e4  nop
  025b7e8  stw 3, 32(30)
  025b7ec  li 3, 2
  025b7f0  stb 3, 32(31)
  025b7f4  b 0x25bc74
  025b7f8  lwz 5, 32(30)
  025b7fc  cmpwi 5, -1
  025b800  bt 2, 0x25b848
  025b804  sldi 4, 5, 7
  025b808  sldi 7, 5, 4
  025b80c  lis 6, 150
  025b810  subc 4, 4, 7
  025b814  addic 6, 6, 14176
  025b818  extsw 4, 4
  025b81c  addc 4, 6, 4
  025b820  lwz 6, 136(4)
  025b824  cmpw 6, 31
  025b828  bf 2, 0x25b848
  025b82c  lbz 4, 116(4)
  025b830  cmpwi 4, 0
  025b834  bt 2, 0x25b848
  025b838  extsw 3, 5
  025b83c  bl 0x15cdb0
  025b840  nop
  025b844  lwz 3, 28(30)
  025b848  lis 4, 151
  025b84c  li 5, -1
  025b850  addic 6, 4, -25376
  025b854  extsw 4, 3
  025b858  addic 3, 6, 128
  025b85c  stw 5, 32(30)
  025b860  bl 0x110b70
  025b864  nop
  025b868  cmpwi 3, 0
  025b86c  bf 2, 0x25bc74
  025b870  lis 3, 149
  025b874  lwz 4, 28(30)
  025b878  addic 3, 3, 5376
  025b87c  extsw 4, 4
  025b880  bl 0x110b70
  025b884  nop
  025b888  cmpwi 3, 0
  025b88c  bf 2, 0x25bc74
  025b890  lwz 3, 16(30)
  025b894  cmpwi 3, -1
  025b898  bt 2, 0x25b8cc
  025b89c  lis 4, 164
  025b8a0  slwi 3, 3, 8
  025b8a4  lwz 4, -28512(4)
  025b8a8  lwz 5, 24(30)
  025b8ac  addc 3, 4, 3
  025b8b0  extsw 4, 5
  025b8b4  addic 3, 3, 16
  025b8b8  clrldi 3, 3, 32
  025b8bc  bl 0x110b70
  025b8c0  nop
  025b8c4  cmpwi 3, 0
  025b8c8  bf 2, 0x25bc74
  025b8cc  lwz 3, 36(31)
  025b8d0  lwz 3, 40(3)
  025b8d4  cmpwi 3, 0
  025b8d8  bt 2, 0x25b910
  025b8dc  ori 3, 31, 0
  025b8e0  lwz 4, 32(30)
  025b8e4  extsw 4, 4
  025b8e8  bl 0x15cc7c
  025b8ec  nop
  025b8f0  cmpwi 3, 0
  025b8f4  bf 2, 0x25b910
  025b8f8  li 3, 0
  025b8fc  li 4, 4
  025b900  ori 5, 31, 0
  025b904  bl 0x15d12c
  025b908  nop
  025b90c  stw 3, 32(30)
  025b910  li 3, 5
  025b914  stb 3, 32(31)
  025b918  b 0x25bc74
  025b91c  lwz 3, 36(31)
  025b920  lwz 3, 40(3)
  025b924  cmpwi 3, 0
  025b928  bt 2, 0x25b960
  025b92c  ori 3, 31, 0
  025b930  lwz 4, 32(30)
  025b934  extsw 4, 4
  025b938  bl 0x15cc7c
  025b93c  nop
  025b940  cmpwi 3, 0
  025b944  bf 2, 0x25b960
  025b948  li 3, 0
  025b94c  li 4, 4
  025b950  ori 5, 31, 0
  025b954  bl 0x15d12c
  025b958  nop
  025b95c  stw 3, 32(30)
  025b960  lis 3, 151
  025b964  lwz 4, 24(30)
  025b968  addic 3, 3, -25376
  025b96c  extsw 4, 4
  025b970  addic 3, 3, 128
  025b974  bl 0x110b70
  025b978  nop
  025b97c  cmpwi 3, 0
  025b980  bf 2, 0x25b9e0
  025b984  lis 3, 149
  025b988  lwz 4, 24(30)
  025b98c  addic 3, 3, 5376
  025b990  extsw 4, 4
  025b994  bl 0x110b70
  025b998  nop
  025b99c  cmpwi 3, 0
  025b9a0  bf 2, 0x25b9e0
  025b9a4  lwz 3, 16(30)
  025b9a8  cmpwi 3, -1
  025b9ac  bt 2, 0x25b9ec
  025b9b0  lis 4, 164
  025b9b4  slwi 3, 3, 8
  025b9b8  lwz 4, -28512(4)
  025b9bc  addc 3, 4, 3
  025b9c0  lwz 4, 24(30)
  025b9c4  addic 3, 3, 16
  025b9c8  extsw 4, 4
  025b9cc  clrldi 3, 3, 32
  025b9d0  bl 0x110b70
  025b9d4  nop
  025b9d8  cmpwi 3, 0
  025b9dc  bt 2, 0x25b9ec
  025b9e0  li 3, 2
  025b9e4  stb 3, 32(31)
  025b9e8  b 0x25bc74
  025b9ec  lis 3, 38
  025b9f0  lis 4, 114
  025b9f4  lfs 2, 20(30)
  025b9f8  addi 3, 3, -19720
  025b9fc  fabs 4, 2
  025ba00  lfs 1, 0(3)
  025ba04  lfs 3, -3052(4)
  025ba08  fmuls 1, 3, 1
  025ba0c  fcmpu 0, 4, 1
  025ba10  cror 6, 0, 2
  025ba14  bt 6, 0x25ba44
  025ba18  lis 3, 38
  025ba1c  lbz 4, 188(31)
  025ba20  addi 3, 3, -19720
  025ba24  cmpwi 4, 0
  025ba28  lfs 3, 4(3)
  025ba2c  bt 2, 0x25ba3c
  025ba30  lis 3, 38
  025ba34  addi 3, 3, -19720
  025ba38  lfs 3, 8(3)
  025ba3c  fnmsubs 1, 1, 3, 2
  025ba40  b 0x25ba50
  025ba44  lis 3, 38
  025ba48  addi 3, 3, -19720
  025ba4c  lfs 1, 44(3)
  025ba50  lhz 3, 166(31)
  025ba54  stfs 1, 20(30)
  025ba58  cmpwi 1, 3, 1373
  025ba5c  lfs 6, 72(31)
  025ba60  cmpwi 3, 1372
  025ba64  cror 2, 2, 6
  025ba68  bt 2, 0x25ba7c
  025ba6c  cmpwi 3, 1367
  025ba70  bt 2, 0x25ba7c
  025ba74  cmpwi 3, 1369
  025ba78  bf 2, 0x25bb1c
  025ba7c  lis 3, 38
  025ba80  fmr 2, 6
  025ba84  addi 29, 3, -19720
  025ba88  lfs 1, 12(29)
  025ba8c  bl 0x502578
  025ba90  nop
  025ba94  lfs 2, 16(29)
  025ba98  lfs 4, 20(29)
  025ba9c  fadds 3, 1, 2
  025baa0  lfs 6, 24(29)
  025baa4  fsubs 10, 4, 1
  025baa8  lfs 2, 28(29)
  025baac  fsubs 5, 4, 3
  025bab0  fsubs 7, 6, 3
  025bab4  fsub 11, 1, 10
  025bab8  fsubs 6, 6, 1
  025babc  fsub 8, 3, 5
  025bac0  fsel 1, 11, 10, 1
  025bac4  fsel 5, 8, 5, 3
  025bac8  lfs 3, 32(29)
  025bacc  fsub 11, 6, 1
  025bad0  lfs 4, 36(29)
  025bad4  fsub 8, 7, 5
  025bad8  fsel 1, 11, 6, 1
  025badc  fsel 7, 8, 7, 5
  025bae0  lfs 5, 40(29)
  025bae4  lfs 9, 20(30)
  025bae8  fmuls 8, 7, 7
  025baec  fmuls 12, 8, 7
  025baf0  fmuls 10, 8, 12
  025baf4  fmadds 7, 12, 2, 7
  025baf8  fmuls 12, 8, 10
  025bafc  fmadds 7, 10, 3, 7
  025bb00  fmuls 6, 8, 12
  025bb04  fmadds 7, 12, 4, 7
  025bb08  fmadds 6, 6, 5, 7
  025bb0c  fmuls 6, 6, 9
  025bb10  stfs 6, 144(1)
  025bb14  lfs 6, 20(30)
  025bb18  b 0x25bba4
  025bb1c  lis 3, 38
  025bb20  addi 3, 3, -19720
  025bb24  lfs 2, 16(3)
  025bb28  lfs 5, 20(3)
  025bb2c  fadds 3, 6, 2
  025bb30  lfs 7, 24(3)
  025bb34  fsubs 10, 5, 6
  025bb38  lfs 2, 28(3)
  025bb3c  fsubs 4, 5, 3
  025bb40  fsubs 8, 7, 3
  025bb44  fsubs 7, 7, 6
  025bb48  fsub 9, 3, 4
  025bb4c  fsel 4, 9, 4, 3
  025bb50  lfs 3, 32(3)
  025bb54  fsub 9, 8, 4
  025bb58  fsel 8, 9, 8, 4
  025bb5c  fsub 9, 6, 10
  025bb60  lfs 4, 36(3)
  025bb64  lfs 5, 40(3)
  025bb68  fmuls 11, 8, 8
  025bb6c  fsel 6, 9, 10, 6
  025bb70  fmuls 12, 11, 8
  025bb74  fsub 10, 7, 6
  025bb78  fmuls 9, 11, 12
  025bb7c  fmadds 8, 12, 2, 8
  025bb80  fmuls 12, 11, 9
  025bb84  fmadds 8, 9, 3, 8
  025bb88  fmuls 9, 11, 12
  025bb8c  fmadds 8, 12, 4, 8
  025bb90  fmadds 8, 9, 5, 8
  025bb94  fmuls 8, 8, 1
  025bb98  fsel 1, 10, 7, 6
  025bb9c  stfs 8, 144(1)
  025bba0  lfs 6, 20(30)
  025bba4  fmuls 7, 1, 1
  025bba8  li 3, 0
  025bbac  addic 5, 1, 144
  025bbb0  ori 4, 30, 0
  025bbb4  stw 3, 152(1)
  025bbb8  addic 3, 1, 160
  025bbbc  fmuls 8, 7, 1
  025bbc0  fmuls 9, 7, 8
  025bbc4  fmadds 1, 8, 2, 1
  025bbc8  fmuls 2, 7, 9
  025bbcc  fmadds 1, 9, 3, 1
  025bbd0  fmuls 3, 7, 2
  025bbd4  fmadds 1, 2, 4, 1
  025bbd8  fmadds 1, 3, 5, 1
  025bbdc  fmuls 1, 1, 6
  025bbe0  stfs 1, 148(1)
  025bbe4  bl 0x5023f0
  025bbe8  nop
  025bbec  lfs 1, 160(1)
  025bbf0  stfs 1, 16(31)
  025bbf4  lfs 1, 164(1)
  025bbf8  stfs 1, 20(31)
  025bbfc  lfs 1, 168(1)
  025bc00  stfs 1, 24(31)
  025bc04  lfs 1, 172(1)
  025bc08  stfs 1, 28(31)
  025bc0c  lwz 3, 20(30)
  025bc10  cmpwi 3, 0
  025bc14  bf 2, 0x25bc74
  025bc18  lwz 4, 32(30)
  025bc1c  cmpwi 4, -1
  025bc20  bt 2, 0x25bc64
  025bc24  sldi 3, 4, 7
  025bc28  sldi 6, 4, 4
  025bc2c  lis 5, 150
  025bc30  subc 3, 3, 6
  025bc34  addic 5, 5, 14176
  025bc38  extsw 3, 3
  025bc3c  addc 3, 5, 3
  025bc40  lwz 5, 136(3)
  025bc44  cmpw 5, 31
  025bc48  bf 2, 0x25bc64
  025bc4c  lbz 3, 116(3)
  025bc50  cmpwi 3, 0
  025bc54  bt 2, 0x25bc64
  025bc58  extsw 3, 4
  025bc5c  bl 0x15cdb0
  025bc60  nop
  025bc64  li 3, -1
  025bc68  li 4, 1
  025bc6c  stw 3, 32(30)
  025bc70  stb 4, 32(31)
  025bc74  ld 0, 224(1)
  025bc78  mtlr 0
  025bc7c  ld 29, 184(1)
  025bc80  ld 30, 192(1)
  025bc84  ld 31, 200(1)
  025bc88  addi 1, 1, 208
  025bc8c  blr

M1373_0025bc90:   # 0x25bc90, 0x14 bytes
  025bc90  lis 3, 122
  025bc94  lis 4, 1
  025bc98  addic 3, 3, -16480
  025bc9c  stw 4, 72(3)
  025bca0  blr

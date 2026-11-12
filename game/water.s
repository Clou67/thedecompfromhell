# game/water.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_WATER:   # 0x17b214, 0x14 bytes
  017b214  lis 3, 116
  017b218  lis 4, 1
  017b21c  addic 3, 3, -22308
  017b220  stw 4, 72(3)
  017b224  blr

WaterTile_InitAll:   # 0x17b230, 0x274 bytes
  017b230  stdu 1, -288(1)
  017b234  mflr 0
  017b238  std 0, 304(1)
  017b23c  std 21, 200(1)
  017b240  li 21, 0
  017b244  std 31, 280(1)
  017b248  std 30, 272(1)
  017b24c  std 29, 264(1)
  017b250  std 28, 256(1)
  017b254  std 27, 248(1)
  017b258  std 26, 240(1)
  017b25c  std 25, 232(1)
  017b260  std 24, 224(1)
  017b264  std 23, 216(1)
  017b268  std 22, 208(1)
  017b26c  std 20, 192(1)
  017b270  std 19, 184(1)
  017b274  std 18, 176(1)
  017b278  std 17, 168(1)
  017b27c  std 16, 160(1)
  017b280  std 15, 152(1)
  017b284  std 14, 144(1)
  017b288  cmpwi 4, 0
  017b28c  std 21, 120(1)
  017b290  std 4, 128(1)
  017b294  bf 1, 0x17b44c
  017b298  addic 4, 3, 80
  017b29c  addic 17, 3, 1360
  017b2a0  ori 22, 3, 0
  017b2a4  addic 18, 3, 1296
  017b2a8  addic 14, 3, 1104
  017b2ac  std 4, 112(1)
  017b2b0  addic 19, 3, 1424
  017b2b4  addic 15, 3, 1168
  017b2b8  addic 16, 3, 1232
  017b2bc  addic 20, 3, 1488
  017b2c0  ori 23, 21, 0
  017b2c4  ld 24, 112(1)
  017b2c8  ori 30, 19, 0
  017b2cc  ori 25, 14, 0
  017b2d0  ori 31, 20, 0
  017b2d4  ori 26, 15, 0
  017b2d8  ori 27, 16, 0
  017b2dc  ori 29, 18, 0
  017b2e0  ori 28, 17, 0
  017b2e4  ori 3, 24, 0
  017b2e8  li 4, 0
  017b2ec  li 5, 1024
  017b2f0  bl 0x5d0140
  017b2f4  nop
  017b2f8  ori 3, 25, 0
  017b2fc  li 4, 0
  017b300  li 5, 64
  017b304  bl 0x5d0140
  017b308  nop
  017b30c  ori 3, 26, 0
  017b310  li 4, 0
  017b314  li 5, 64
  017b318  bl 0x5d0140
  017b31c  nop
  017b320  ori 3, 27, 0
  017b324  li 4, 0
  017b328  li 5, 64
  017b32c  bl 0x5d0140
  017b330  nop
  017b334  ori 3, 28, 0
  017b338  li 4, 0
  017b33c  li 5, 64
  017b340  bl 0x5d0140
  017b344  nop
  017b348  ori 3, 29, 0
  017b34c  li 4, 0
  017b350  li 5, 64
  017b354  bl 0x5d0140
  017b358  nop
  017b35c  ori 3, 30, 0
  017b360  li 4, 0
  017b364  li 5, 64
  017b368  bl 0x5d0140
  017b36c  nop
  017b370  ori 3, 31, 0
  017b374  li 4, 0
  017b378  li 5, 24
  017b37c  bl 0x5d0140
  017b380  nop
  017b384  addic 23, 23, 1
  017b388  addic 24, 24, 1472
  017b38c  cmpwi 23, 3
  017b390  addic 30, 30, 1472
  017b394  addic 25, 25, 1472
  017b398  addic 26, 26, 1472
  017b39c  addic 27, 27, 1472
  017b3a0  addic 28, 28, 1472
  017b3a4  addic 29, 29, 1472
  017b3a8  addic 31, 31, 1472
  017b3ac  bt 0, 0x17b2e4
  017b3b0  lis 3, -17711
  017b3b4  stw 21, 32(22)
  017b3b8  lis 4, 15523
  017b3bc  stw 21, 36(22)
  017b3c0  ori 3, 3, 46871
  017b3c4  ori 4, 4, 55050
  017b3c8  lis 6, 16329
  017b3cc  lis 7, -16439
  017b3d0  stw 3, 40(22)
  017b3d4  ori 6, 6, 4059
  017b3d8  stw 3, 44(22)
  017b3dc  lis 5, -17155
  017b3e0  ori 7, 7, 4059
  017b3e4  stw 4, 56(22)
  017b3e8  lis 4, 15605
  017b3ec  ori 3, 5, 62390
  017b3f0  stw 6, 48(22)
  017b3f4  ori 4, 4, 49807
  017b3f8  stw 7, 52(22)
  017b3fc  addic 14, 14, 4512
  017b400  ld 5, 112(1)
  017b404  addic 15, 15, 4512
  017b408  stw 3, 60(22)
  017b40c  addic 16, 16, 4512
  017b410  stw 4, 64(22)
  017b414  addic 3, 5, 4512
  017b418  stw 21, 68(22)
  017b41c  addic 17, 17, 4512
  017b420  ld 4, 120(1)
  017b424  addic 18, 18, 4512
  017b428  ld 5, 128(1)
  017b42c  addic 19, 19, 4512
  017b430  addic 4, 4, 1
  017b434  std 3, 112(1)
  017b438  addic 20, 20, 4512
  017b43c  cmpw 4, 5
  017b440  addic 22, 22, 4512
  017b444  std 4, 120(1)
  017b448  bt 0, 0x17b2c0
  017b44c  ld 0, 304(1)
  017b450  mtlr 0
  017b454  ld 14, 144(1)
  017b458  ld 15, 152(1)
  017b45c  ld 16, 160(1)
  017b460  ld 17, 168(1)
  017b464  ld 18, 176(1)
  017b468  ld 19, 184(1)
  017b46c  ld 20, 192(1)
  017b470  ld 21, 200(1)
  017b474  ld 22, 208(1)
  017b478  ld 23, 216(1)
  017b47c  ld 24, 224(1)
  017b480  ld 25, 232(1)
  017b484  ld 26, 240(1)
  017b488  ld 27, 248(1)
  017b48c  ld 28, 256(1)
  017b490  ld 29, 264(1)
  017b494  ld 30, 272(1)
  017b498  ld 31, 280(1)
  017b49c  addi 1, 1, 288
  017b4a0  blr

WaterTile_CalcGridBSphere:   # 0x17b4b0, 0xe8 bytes
  017b4b0  stdu 1, -160(1)
  017b4b4  mflr 0
  017b4b8  std 0, 176(1)
  017b4bc  stfd 31, 152(1)
  017b4c0  std 31, 144(1)
  017b4c4  lis 5, 24
  017b4c8  std 30, 136(1)
  017b4cc  ori 31, 3, 0
  017b4d0  std 29, 128(1)
  017b4d4  lis 30, 116
  017b4d8  std 28, 120(1)
  017b4dc  addi 29, 5, -19292
  017b4e0  std 27, 112(1)
  017b4e4  addic 28, 30, -22016
  017b4e8  ori 27, 4, 0
  017b4ec  lfs 1, 0(31)
  017b4f0  lfs 2, 0(29)
  017b4f4  lfs 3, 8(28)
  017b4f8  fmr 31, 2
  017b4fc  fadds 1, 1, 3
  017b500  fmuls 1, 1, 31
  017b504  bl 0x502758
  017b508  nop
  017b50c  lfs 1, 4(31)
  017b510  lfs 2, 12(28)
  017b514  stw 3, 0(27)
  017b518  fadds 1, 1, 2
  017b51c  fmuls 1, 1, 31
  017b520  bl 0x502758
  017b524  nop
  017b528  stw 3, 4(27)
  017b52c  lfs 1, 4(29)
  017b530  lfs 2, 8(31)
  017b534  fsubs 1, 2, 1
  017b538  fmuls 1, 1, 31
  017b53c  bl 0x502758
  017b540  nop
  017b544  lfs 1, -22016(30)
  017b548  stw 3, 8(27)
  017b54c  fmuls 1, 1, 31
  017b550  bl 0x502758
  017b554  nop
  017b558  lfs 1, -22016(30)
  017b55c  sth 3, 12(27)
  017b560  fmuls 1, 1, 31
  017b564  bl 0x502758
  017b568  nop
  017b56c  sth 3, 14(27)
  017b570  ld 0, 176(1)
  017b574  mtlr 0
  017b578  lfd 31, 152(1)
  017b57c  ld 27, 112(1)
  017b580  ld 28, 120(1)
  017b584  ld 29, 128(1)
  017b588  ld 30, 136(1)
  017b58c  ld 31, 144(1)
  017b590  addi 1, 1, 160
  017b594  blr

WaterTile_LookupTile:   # 0x17b5a0, 0x1e0 bytes
  017b5a0  stdu 1, -208(1)
  017b5a4  mflr 0
  017b5a8  std 0, 224(1)
  017b5ac  stfd 28, 176(1)
  017b5b0  stfd 29, 184(1)
  017b5b4  stfd 30, 192(1)
  017b5b8  stfd 31, 200(1)
  017b5bc  fmr 30, 1
  017b5c0  lis 3, 24
  017b5c4  fmr 31, 2
  017b5c8  fmr 29, 3
  017b5cc  addi 3, 3, -19048
  017b5d0  lfs 28, 0(3)
  017b5d4  std 31, 168(1)
  017b5d8  std 30, 160(1)
  017b5dc  std 29, 152(1)
  017b5e0  std 28, 144(1)
  017b5e4  std 27, 136(1)
  017b5e8  std 26, 128(1)
  017b5ec  std 25, 120(1)
  017b5f0  std 24, 112(1)
  017b5f4  fmuls 1, 30, 28
  017b5f8  bl 0x502758
  017b5fc  nop
  017b600  fmuls 1, 31, 28
  017b604  ori 26, 3, 0
  017b608  bl 0x502758
  017b60c  nop
  017b610  ori 27, 3, 0
  017b614  fmuls 1, 29, 28
  017b618  bl 0x502758
  017b61c  nop
  017b620  lis 4, 230
  017b624  lis 5, 230
  017b628  ori 28, 3, 0
  017b62c  li 30, 0
  017b630  lwz 3, -21880(4)
  017b634  lwz 29, -21884(5)
  017b638  cmpwi 3, 0
  017b63c  bf 1, 0x17b73c
  017b640  lis 31, 116
  017b644  addic 31, 31, -22016
  017b648  lwz 6, 0(29)
  017b64c  cmpw 26, 6
  017b650  bt 0, 0x17b728
  017b654  lwz 5, 4(29)
  017b658  cmpw 27, 5
  017b65c  bt 0, 0x17b728
  017b660  lwz 4, 8(29)
  017b664  cmpw 28, 4
  017b668  bt 0, 0x17b728
  017b66c  lhz 7, 12(29)
  017b670  addc 6, 6, 7
  017b674  cmpw 26, 6
  017b678  bf 0, 0x17b728
  017b67c  lhz 6, 14(29)
  017b680  addc 5, 5, 6
  017b684  cmpw 27, 5
  017b688  bf 0, 0x17b728
  017b68c  addic 4, 4, 2048
  017b690  cmpw 28, 4
  017b694  bf 0, 0x17b728
  017b698  mulli 3, 30, 4512
  017b69c  lis 4, 230
  017b6a0  lfs 1, 8(31)
  017b6a4  lwz 4, -21888(4)
  017b6a8  lfs 2, 16(31)
  017b6ac  addc 3, 4, 3
  017b6b0  clrldi 25, 3, 32
  017b6b4  lfs 3, 0(25)
  017b6b8  fadds 1, 3, 1
  017b6bc  fsubs 1, 30, 1
  017b6c0  fdivs 1, 1, 2
  017b6c4  bl 0x502758
  017b6c8  nop
  017b6cc  lfs 1, 4(25)
  017b6d0  lfs 2, 12(31)
  017b6d4  ori 24, 3, 0
  017b6d8  fadds 1, 1, 2
  017b6dc  lfs 2, 20(31)
  017b6e0  fsubs 1, 31, 1
  017b6e4  fdivs 1, 1, 2
  017b6e8  bl 0x502758
  017b6ec  nop
  017b6f0  srawi 4, 24, 2
  017b6f4  lhz 6, 30(25)
  017b6f8  srawi 3, 3, 2
  017b6fc  clrlwi 4, 4, 30
  017b700  li 5, 1
  017b704  rlwimi 4, 3, 2, 28, 29
  017b708  lis 7, 230
  017b70c  slw 3, 5, 4
  017b710  and 4, 6, 3
  017b714  cmpwi 4, 0
  017b718  lwz 3, -21880(7)
  017b71c  bt 2, 0x17b728
  017b720  ori 3, 30, 0
  017b724  b 0x17b740
  017b728  addic 30, 30, 1
  017b72c  addic 29, 29, 16
  017b730  extsw 30, 30
  017b734  cmpw 3, 30
  017b738  bt 1, 0x17b648
  017b73c  li 3, -1
  017b740  ld 0, 224(1)
  017b744  mtlr 0
  017b748  lfd 28, 176(1)
  017b74c  lfd 29, 184(1)
  017b750  lfd 30, 192(1)
  017b754  lfd 31, 200(1)
  017b758  ld 24, 112(1)
  017b75c  ld 25, 120(1)
  017b760  ld 26, 128(1)
  017b764  ld 27, 136(1)
  017b768  ld 28, 144(1)
  017b76c  ld 29, 152(1)
  017b770  ld 30, 160(1)
  017b774  ld 31, 168(1)
  017b778  addi 1, 1, 208
  017b77c  blr

WaterWave_ScaleTable:   # 0x17b780, 0x3c bytes
  017b780  lis 3, 116
  017b784  li 4, 46
  017b788  addic 3, 3, -21824
  017b78c  mtctr 4
  017b790  lfs 2, 64(3)
  017b794  fdivs 1, 1, 2
  017b798  lfs 2, 0(3)
  017b79c  lfs 3, 4(3)
  017b7a0  fmuls 2, 2, 1
  017b7a4  fmuls 3, 3, 1
  017b7a8  stfs 2, 0(3)
  017b7ac  stfs 3, 4(3)
  017b7b0  addic 3, 3, 8
  017b7b4  bdnz 0x17b798
  017b7b8  blr

WaterTile_StepSim:   # 0x17b7bc, 0xf4 bytes
  017b7bc  stdu 1, -160(1)
  017b7c0  mflr 0
  017b7c4  std 0, 176(1)
  017b7c8  std 30, 144(1)
  017b7cc  std 27, 120(1)
  017b7d0  cmpwi 4, 0
  017b7d4  li 27, 0
  017b7d8  std 31, 152(1)
  017b7dc  ori 30, 3, 0
  017b7e0  std 29, 136(1)
  017b7e4  std 28, 128(1)
  017b7e8  std 26, 112(1)
  017b7ec  ori 31, 4, 0
  017b7f0  bf 1, 0x17b870
  017b7f4  addic 28, 30, 30
  017b7f8  addic 29, 30, 80
  017b7fc  mulli 3, 27, 4512
  017b800  addc 4, 3, 28
  017b804  clrldi 4, 4, 32
  017b808  lhz 4, 0(4)
  017b80c  cmpwi 4, 0
  017b810  bt 2, 0x17b860
  017b814  lis 4, 230
  017b818  lis 26, 144
  017b81c  addc 3, 3, 29
  017b820  lwz 4, -21852(4)
  017b824  mulli 4, 4, 1472
  017b828  lwz 5, 11976(26)
  017b82c  addc 4, 3, 4
  017b830  ori 3, 5, 0
  017b834  clrldi 4, 4, 32
  017b838  bl 0xe91a8
  017b83c  nop
  017b840  lis 5, 116
  017b844  lwz 3, 11976(26)
  017b848  ori 4, 27, 0
  017b84c  ori 6, 30, 0
  017b850  lwz 5, -22032(5)
  017b854  extsw 5, 5
  017b858  bl 0xe9c08
  017b85c  nop
  017b860  addic 27, 27, 1
  017b864  extsw 27, 27
  017b868  cmpw 27, 31
  017b86c  bt 0, 0x17b7fc
  017b870  lis 3, 230
  017b874  lis 4, 116
  017b878  lwz 5, -21852(3)
  017b87c  lwz 6, -22032(4)
  017b880  stw 5, -22032(4)
  017b884  stw 6, -21852(3)
  017b888  ld 0, 176(1)
  017b88c  mtlr 0
  017b890  ld 26, 112(1)
  017b894  ld 27, 120(1)
  017b898  ld 28, 128(1)
  017b89c  ld 29, 136(1)
  017b8a0  ld 30, 144(1)
  017b8a4  ld 31, 152(1)
  017b8a8  addi 1, 1, 160
  017b8ac  blr

WaterTile_UpdateWaves:   # 0x17b8b8, 0x1d4 bytes
  017b8b8  stdu 1, -176(1)
  017b8bc  mflr 0
  017b8c0  std 0, 192(1)
  017b8c4  std 29, 152(1)
  017b8c8  lis 5, 24
  017b8cc  lis 29, 116
  017b8d0  addi 5, 5, -18256
  017b8d4  std 28, 144(1)
  017b8d8  addic 29, 29, -22016
  017b8dc  lis 28, 116
  017b8e0  cmpwi 1, 4, 0
  017b8e4  lfs 2, 0(5)
  017b8e8  std 30, 160(1)
  017b8ec  lfs 1, 32(29)
  017b8f0  ori 30, 3, 0
  017b8f4  std 31, 168(1)
  017b8f8  lfs 3, -21952(28)
  017b8fc  ori 31, 4, 0
  017b900  fsubs 2, 2, 1
  017b904  std 27, 136(1)
  017b908  std 26, 128(1)
  017b90c  std 25, 120(1)
  017b910  std 24, 112(1)
  017b914  fcmpu 0, 3, 2
  017b918  bt 0, 0x17b9c8
  017b91c  li 25, 0
  017b920  stfs 1, -21952(28)
  017b924  bf 5, 0x17b9a4
  017b928  addic 26, 30, 30
  017b92c  addic 27, 30, 80
  017b930  mulli 3, 25, 4512
  017b934  addc 4, 3, 26
  017b938  clrldi 4, 4, 32
  017b93c  lhz 4, 0(4)
  017b940  cmpwi 4, 0
  017b944  bt 2, 0x17b994
  017b948  lis 4, 230
  017b94c  lis 24, 144
  017b950  addc 3, 3, 27
  017b954  lwz 4, -21852(4)
  017b958  mulli 4, 4, 1472
  017b95c  lwz 5, 11976(24)
  017b960  addc 4, 3, 4
  017b964  ori 3, 5, 0
  017b968  clrldi 4, 4, 32
  017b96c  bl 0xe91a8
  017b970  nop
  017b974  lis 5, 116
  017b978  lwz 3, 11976(24)
  017b97c  ori 4, 25, 0
  017b980  ori 6, 30, 0
  017b984  lwz 5, -22032(5)
  017b988  extsw 5, 5
  017b98c  bl 0xe9c08
  017b990  nop
  017b994  addic 25, 25, 1
  017b998  extsw 25, 25
  017b99c  cmpw 25, 31
  017b9a0  bt 0, 0x17b930
  017b9a4  lis 3, 230
  017b9a8  lis 4, 116
  017b9ac  lis 5, 116
  017b9b0  lwz 6, -21852(3)
  017b9b4  lwz 7, -22032(4)
  017b9b8  stw 6, -22032(4)
  017b9bc  stw 7, -21852(3)
  017b9c0  stw 6, -22028(5)
  017b9c4  b 0x17ba4c
  017b9c8  lis 3, 116
  017b9cc  li 4, 2
  017b9d0  li 26, 0
  017b9d4  stw 4, -22028(3)
  017b9d8  bf 5, 0x17ba4c
  017b9dc  ori 27, 30, 0
  017b9e0  addic 30, 30, 80
  017b9e4  lhz 3, 30(27)
  017b9e8  cmpwi 3, 0
  017b9ec  bt 2, 0x17ba38
  017b9f0  lis 3, 116
  017b9f4  lis 5, 116
  017b9f8  lis 4, 230
  017b9fc  lwz 3, -22028(3)
  017ba00  lwz 5, -22032(5)
  017ba04  lwz 4, -21852(4)
  017ba08  mulli 6, 4, 1472
  017ba0c  mulli 3, 3, 1472
  017ba10  mulli 4, 5, 1472
  017ba14  addc 3, 30, 3
  017ba18  addc 4, 30, 4
  017ba1c  lfs 1, -21952(28)
  017ba20  addc 5, 30, 6
  017ba24  clrldi 4, 4, 32
  017ba28  clrldi 3, 3, 32
  017ba2c  clrldi 5, 5, 32
  017ba30  bl 0xe92e8
  017ba34  nop
  017ba38  addic 26, 26, 1
  017ba3c  addic 30, 30, 4512
  017ba40  cmpw 26, 31
  017ba44  addic 27, 27, 4512
  017ba48  bt 0, 0x17b9e4
  017ba4c  lfs 1, 32(29)
  017ba50  lfs 2, -21952(28)
  017ba54  fadds 1, 2, 1
  017ba58  stfs 1, -21952(28)
  017ba5c  ld 0, 192(1)
  017ba60  mtlr 0
  017ba64  ld 24, 112(1)
  017ba68  ld 25, 120(1)
  017ba6c  ld 26, 128(1)
  017ba70  ld 27, 136(1)
  017ba74  ld 28, 144(1)
  017ba78  ld 29, 152(1)
  017ba7c  ld 30, 160(1)
  017ba80  ld 31, 168(1)
  017ba84  addi 1, 1, 176
  017ba88  blr

WaterTile_UpdateWaves:   # 0x17bab0, 0x2dc bytes
  017bab0  stdu 1, -208(1)
  017bab4  mflr 0
  017bab8  std 0, 224(1)
  017babc  stfd 21, 120(1)
  017bac0  stfd 22, 128(1)
  017bac4  stfd 23, 136(1)
  017bac8  stfd 24, 144(1)
  017bacc  stfd 25, 152(1)
  017bad0  stfd 26, 160(1)
  017bad4  stfd 27, 168(1)
  017bad8  stfd 28, 176(1)
  017badc  stfd 29, 184(1)
  017bae0  stfd 30, 192(1)
  017bae4  stfd 31, 200(1)
  017bae8  lfs 6, 32(3)
  017baec  lfs 1, 40(3)
  017baf0  lis 4, 24
  017baf4  std 31, 112(1)
  017baf8  lfs 3, 36(3)
  017bafc  ori 31, 3, 0
  017bb00  fadds 6, 6, 1
  017bb04  addi 4, 4, -17780
  017bb08  lfs 2, 44(3)
  017bb0c  lfs 1, 48(3)
  017bb10  lfs 31, 56(3)
  017bb14  stfs 6, 32(3)
  017bb18  lfs 5, 0(4)
  017bb1c  fcmpu 0, 6, 5
  017bb20  cror 6, 0, 2
  017bb24  bt 6, 0x17bb30
  017bb28  fsubs 6, 6, 5
  017bb2c  stfs 6, 32(31)
  017bb30  lis 3, 24
  017bb34  addi 3, 3, -17780
  017bb38  lfs 4, 4(3)
  017bb3c  fcmpu 0, 6, 4
  017bb40  cror 6, 1, 2
  017bb44  bt 6, 0x17bb50
  017bb48  fadds 6, 6, 5
  017bb4c  stfs 6, 32(31)
  017bb50  fadds 3, 3, 2
  017bb54  fcmpu 0, 3, 5
  017bb58  stfs 3, 36(31)
  017bb5c  cror 6, 0, 2
  017bb60  bt 6, 0x17bb6c
  017bb64  fsubs 3, 3, 5
  017bb68  stfs 3, 36(31)
  017bb6c  fcmpu 0, 3, 4
  017bb70  cror 6, 1, 2
  017bb74  bt 6, 0x17bb80
  017bb78  fadds 2, 3, 5
  017bb7c  stfs 2, 36(31)
  017bb80  fmr 2, 31
  017bb84  bl 0x502578
  017bb88  nop
  017bb8c  lfs 2, 52(31)
  017bb90  stfs 1, 48(31)
  017bb94  lfs 3, 60(31)
  017bb98  fmr 1, 2
  017bb9c  fmr 2, 3
  017bba0  bl 0x502578
  017bba4  nop
  017bba8  lis 3, 24
  017bbac  stfs 1, 52(31)
  017bbb0  lfs 2, 48(31)
  017bbb4  addi 3, 3, -17780
  017bbb8  lis 5, 116
  017bbbc  lis 4, 116
  017bbc0  lfs 3, 8(3)
  017bbc4  lfs 4, 12(3)
  017bbc8  fadds 7, 2, 3
  017bbcc  lfs 5, 16(3)
  017bbd0  fadds 3, 1, 3
  017bbd4  fsubs 8, 4, 1
  017bbd8  fsubs 6, 4, 2
  017bbdc  lfs 11, 32(31)
  017bbe0  fsubs 28, 5, 1
  017bbe4  fsubs 12, 5, 2
  017bbe8  lis 6, 116
  017bbec  addic 5, 5, -21440
  017bbf0  addic 4, 4, -21824
  017bbf4  fsubs 9, 4, 7
  017bbf8  fsubs 4, 4, 3
  017bbfc  fsub 0, 1, 8
  017bc00  fsub 10, 2, 6
  017bc04  fsubs 13, 5, 7
  017bc08  fsubs 31, 5, 3
  017bc0c  li 7, 0
  017bc10  addic 6, 6, -20880
  017bc14  fsub 30, 7, 9
  017bc18  fsub 29, 3, 4
  017bc1c  fsel 1, 0, 8, 1
  017bc20  fsel 2, 10, 6, 2
  017bc24  lfs 6, 64(31)
  017bc28  lfs 5, 36(31)
  017bc2c  lfs 10, 20(3)
  017bc30  addic 31, 4, 4
  017bc34  fsel 0, 30, 9, 7
  017bc38  fsel 30, 29, 4, 3
  017bc3c  lfs 9, 24(3)
  017bc40  fsub 4, 28, 1
  017bc44  lfs 8, 28(3)
  017bc48  fsub 3, 12, 2
  017bc4c  lfs 7, 32(3)
  017bc50  addic 3, 5, 4
  017bc54  fsub 29, 13, 0
  017bc58  fsub 27, 31, 30
  017bc5c  fsel 1, 4, 28, 1
  017bc60  fsel 3, 3, 12, 2
  017bc64  fsel 4, 29, 13, 0
  017bc68  fsel 2, 27, 31, 30
  017bc6c  fmuls 12, 1, 1
  017bc70  fmuls 0, 3, 3
  017bc74  fmuls 31, 4, 4
  017bc78  fmuls 13, 2, 2
  017bc7c  srawi 8, 7, 1
  017bc80  slwi 8, 8, 2
  017bc84  extsw 8, 8
  017bc88  lwzx 8, 6, 8
  017bc8c  cmpwi 8, 0
  017bc90  bf 2, 0x17bcb8
  017bc94  fmr 25, 4
  017bc98  fmr 26, 31
  017bc9c  lfs 24, 0(5)
  017bca0  fmr 27, 0
  017bca4  lfs 23, 0(3)
  017bca8  fmr 28, 3
  017bcac  fmr 30, 25
  017bcb0  fmr 29, 26
  017bcb4  b 0x17bcd8
  017bcb8  fmr 25, 2
  017bcbc  lfs 24, 0(5)
  017bcc0  fmr 26, 13
  017bcc4  lfs 23, 0(3)
  017bcc8  fmr 27, 12
  017bccc  fmr 28, 1
  017bcd0  fmr 30, 25
  017bcd4  fmr 29, 26
  017bcd8  fmuls 30, 29, 30
  017bcdc  fmuls 29, 27, 28
  017bce0  addic 7, 7, 2
  017bce4  addic 5, 5, 8
  017bce8  cmpwi 7, 92
  017bcec  addic 3, 3, 8
  017bcf0  fmuls 22, 26, 30
  017bcf4  fmuls 21, 27, 29
  017bcf8  fmadds 30, 30, 10, 25
  017bcfc  fmadds 29, 29, 10, 28
  017bd00  fmuls 28, 26, 22
  017bd04  fmuls 25, 27, 21
  017bd08  fmadds 30, 22, 9, 30
  017bd0c  fmadds 29, 21, 9, 29
  017bd10  fmuls 26, 26, 28
  017bd14  fmuls 27, 27, 25
  017bd18  fmadds 30, 28, 8, 30
  017bd1c  fmadds 29, 25, 8, 29
  017bd20  fmadds 30, 26, 7, 30
  017bd24  fmadds 29, 27, 7, 29
  017bd28  fmadds 30, 30, 6, 11
  017bd2c  fmadds 29, 29, 6, 5
  017bd30  fadds 30, 24, 30
  017bd34  fadds 29, 23, 29
  017bd38  stfs 30, 0(4)
  017bd3c  stfs 29, 0(31)
  017bd40  addic 4, 4, 8
  017bd44  addic 31, 31, 8
  017bd48  bt 0, 0x17bc7c
  017bd4c  ld 0, 224(1)
  017bd50  mtlr 0
  017bd54  lfd 21, 120(1)
  017bd58  lfd 22, 128(1)
  017bd5c  lfd 23, 136(1)
  017bd60  lfd 24, 144(1)
  017bd64  lfd 25, 152(1)
  017bd68  lfd 26, 160(1)
  017bd6c  lfd 27, 168(1)
  017bd70  lfd 28, 176(1)
  017bd74  lfd 29, 184(1)
  017bd78  lfd 30, 192(1)
  017bd7c  lfd 31, 200(1)
  017bd80  ld 31, 112(1)
  017bd84  addi 1, 1, 208
  017bd88  blr

WaterTile_PutDrop:   # 0x17bd90, 0x620 bytes
  017bd90  stdu 1, -224(1)
  017bd94  stfd 31, 216(1)
  017bd98  li 5, 0
  017bd9c  ori 7, 3, 0
  017bda0  std 31, 208(1)
  017bda4  std 30, 200(1)
  017bda8  std 29, 192(1)
  017bdac  std 28, 184(1)
  017bdb0  std 27, 176(1)
  017bdb4  std 26, 168(1)
  017bdb8  std 25, 160(1)
  017bdbc  std 24, 152(1)
  017bdc0  std 23, 144(1)
  017bdc4  std 22, 136(1)
  017bdc8  std 21, 128(1)
  017bdcc  std 20, 120(1)
  017bdd0  std 19, 112(1)
  017bdd4  std 18, 104(1)
  017bdd8  std 17, 96(1)
  017bddc  std 16, 88(1)
  017bde0  cmpwi 4, 0
  017bde4  ori 12, 7, 0
  017bde8  std 5, 64(1)
  017bdec  bf 1, 0x17c364
  017bdf0  lis 3, 116
  017bdf4  lfs 5, 0(7)
  017bdf8  addic 3, 3, -22016
  017bdfc  lfs 8, 8(3)
  017be00  lfs 6, 4(7)
  017be04  fadds 5, 5, 8
  017be08  lfs 7, 12(3)
  017be0c  lfs 9, 16(3)
  017be10  fadds 6, 6, 7
  017be14  lfs 10, 20(3)
  017be18  li 10, 0
  017be1c  li 3, 0
  017be20  fsubs 5, 1, 5
  017be24  fsubs 7, 2, 6
  017be28  li 5, 0
  017be2c  li 11, 0
  017be30  fdivs 5, 5, 9
  017be34  li 6, 15
  017be38  li 8, 15
  017be3c  li 31, 15
  017be40  li 30, 15
  017be44  fdivs 7, 7, 10
  017be48  fsubs 11, 5, 3
  017be4c  fadds 5, 5, 3
  017be50  fctiwz 11, 11
  017be54  fctiwz 5, 5
  017be58  fsubs 12, 7, 3
  017be5c  fadds 7, 7, 3
  017be60  stfd 11, 72(1)
  017be64  lwz 29, 76(1)
  017be68  stfd 5, 72(1)
  017be6c  lwz 18, 76(1)
  017be70  subc 27, 10, 29
  017be74  fctiwz 5, 12
  017be78  fctiwz 7, 7
  017be7c  extsw 28, 29
  017be80  stfd 5, 72(1)
  017be84  lwz 10, 76(1)
  017be88  stfd 7, 72(1)
  017be8c  extsw 26, 10
  017be90  subc 5, 5, 10
  017be94  lwz 25, 76(1)
  017be98  subc 3, 26, 3
  017be9c  sradi 3, 3, 63
  017bea0  and 3, 3, 5
  017bea4  extsw 5, 18
  017bea8  addc 10, 10, 3
  017beac  subc 5, 6, 5
  017beb0  extsw 3, 10
  017beb4  subc 6, 8, 18
  017beb8  sradi 5, 5, 63
  017bebc  extsw 8, 25
  017bec0  std 3, 72(1)
  017bec4  and 5, 5, 6
  017bec8  subc 3, 28, 11
  017becc  subc 6, 31, 8
  017bed0  sradi 3, 3, 63
  017bed4  subc 11, 30, 25
  017bed8  and 3, 3, 27
  017bedc  addc 18, 18, 5
  017bee0  addc 3, 29, 3
  017bee4  std 3, 48(1)
  017bee8  lfd 5, 72(1)
  017beec  sradi 3, 6, 63
  017bef0  fcfid 5, 5
  017bef4  and 3, 3, 11
  017bef8  addc 3, 25, 3
  017befc  cmpw 10, 3
  017bf00  std 3, 56(1)
  017bf04  frsp 5, 5
  017bf08  fmadds 5, 10, 5, 6
  017bf0c  bt 1, 0x17c34c
  017bf10  sldi 8, 10, 6
  017bf14  sldi 31, 10, 2
  017bf18  addc 8, 8, 7
  017bf1c  ld 6, 48(1)
  017bf20  extsw 3, 6
  017bf24  cmpw 6, 18
  017bf28  std 3, 72(1)
  017bf2c  lfs 6, 0(7)
  017bf30  lfd 7, 72(1)
  017bf34  fadds 6, 6, 8
  017bf38  fcfid 7, 7
  017bf3c  frsp 7, 7
  017bf40  fmadds 6, 9, 7, 6
  017bf44  bt 1, 0x17c330
  017bf48  fsubs 12, 2, 5
  017bf4c  lis 3, 24
  017bf50  sldi 5, 6, 2
  017bf54  addi 3, 3, -17012
  017bf58  lis 11, 230
  017bf5c  addic 24, 12, 1508
  017bf60  addic 19, 7, 80
  017bf64  addic 25, 7, 140
  017bf68  lfs 13, 0(3)
  017bf6c  addic 20, 12, 1500
  017bf70  addic 21, 7, 84
  017bf74  addic 27, 7, 1040
  017bf78  fmuls 12, 12, 12
  017bf7c  addic 22, 12, 1504
  017bf80  addic 23, 7, 144
  017bf84  addic 26, 12, 1496
  017bf88  addic 28, 12, 1492
  017bf8c  addic 29, 7, 1100
  017bf90  addic 30, 12, 1488
  017bf94  fsubs 7, 1, 6
  017bf98  cmpwi 9, 0
  017bf9c  fmadds 7, 7, 7, 12
  017bfa0  fsqrts 11, 7
  017bfa4  fsub 7, 7, 13
  017bfa8  fdivs 11, 4, 11
  017bfac  fsel 7, 7, 11, 4
  017bfb0  bf 2, 0x17bfe8
  017bfb4  lwz 3, -21852(11)
  017bfb8  mulli 3, 3, 1472
  017bfbc  fabs 0, 7
  017bfc0  addc 3, 3, 8
  017bfc4  addc 3, 3, 5
  017bfc8  clrldi 3, 3, 32
  017bfcc  lfs 11, 80(3)
  017bfd0  fabs 31, 11
  017bfd4  fcmpu 0, 0, 31
  017bfd8  cror 6, 1, 2
  017bfdc  bt 6, 0x17c008
  017bfe0  fmr 7, 11
  017bfe4  b 0x17c008
  017bfe8  lis 3, 116
  017bfec  lwz 3, -22028(3)
  017bff0  mulli 3, 3, 1472
  017bff4  addc 3, 3, 8
  017bff8  addc 3, 3, 5
  017bffc  clrldi 3, 3, 32
  017c000  lfs 11, 80(3)
  017c004  fadds 7, 7, 11
  017c008  lwz 3, -21852(11)
  017c00c  cmpwi 10, 1
  017c010  mulli 3, 3, 1472
  017c014  addc 3, 3, 8
  017c018  addc 3, 3, 5
  017c01c  clrldi 3, 3, 32
  017c020  stfs 7, 80(3)
  017c024  bt 1, 0x17c098
  017c028  lbz 3, 12(7)
  017c02c  cmpwi 1, 10, 0
  017c030  cmpwi 3, 255
  017c034  bt 2, 0x17c098
  017c038  mulli 3, 3, 4512
  017c03c  addc 3, 3, 12
  017c040  bf 6, 0x17c070
  017c044  lwz 17, -21852(11)
  017c048  mulli 17, 17, 1472
  017c04c  addc 3, 3, 17
  017c050  addc 17, 17, 8
  017c054  addc 3, 3, 5
  017c058  addc 17, 17, 5
  017c05c  clrldi 3, 3, 32
  017c060  clrldi 17, 17, 32
  017c064  lfs 7, 80(17)
  017c068  stfs 7, 1232(3)
  017c06c  b 0x17c098
  017c070  lwz 17, -21852(11)
  017c074  mulli 17, 17, 1472
  017c078  addc 3, 3, 17
  017c07c  addc 17, 17, 8
  017c080  addc 3, 3, 5
  017c084  addc 17, 17, 5
  017c088  clrldi 3, 3, 32
  017c08c  clrldi 17, 17, 32
  017c090  lfs 7, 80(17)
  017c094  stfs 7, 1360(3)
  017c098  cmpwi 6, 1
  017c09c  bt 1, 0x17c110
  017c0a0  lbz 3, 13(7)
  017c0a4  cmpwi 1, 6, 0
  017c0a8  cmpwi 3, 255
  017c0ac  bt 2, 0x17c110
  017c0b0  mulli 3, 3, 4512
  017c0b4  addc 3, 3, 12
  017c0b8  bf 6, 0x17c0e8
  017c0bc  lwz 17, -21852(11)
  017c0c0  mulli 17, 17, 1472
  017c0c4  addc 3, 3, 17
  017c0c8  addc 17, 17, 8
  017c0cc  addc 3, 3, 31
  017c0d0  addc 17, 17, 5
  017c0d4  clrldi 3, 3, 32
  017c0d8  clrldi 17, 17, 32
  017c0dc  lfs 7, 80(17)
  017c0e0  stfs 7, 1296(3)
  017c0e4  b 0x17c110
  017c0e8  lwz 17, -21852(11)
  017c0ec  mulli 17, 17, 1472
  017c0f0  addc 3, 3, 17
  017c0f4  addc 17, 17, 8
  017c0f8  addc 3, 3, 31
  017c0fc  addc 17, 17, 5
  017c100  clrldi 3, 3, 32
  017c104  clrldi 17, 17, 32
  017c108  lfs 7, 80(17)
  017c10c  stfs 7, 1424(3)
  017c110  cmpwi 10, 15
  017c114  bf 2, 0x17c154
  017c118  lbz 3, 14(7)
  017c11c  cmpwi 3, 255
  017c120  bt 2, 0x17c154
  017c124  mulli 3, 3, 4512
  017c128  lwz 17, -21852(11)
  017c12c  mulli 17, 17, 1472
  017c130  addc 3, 3, 12
  017c134  addc 16, 17, 8
  017c138  addc 3, 3, 17
  017c13c  addc 17, 16, 5
  017c140  addc 3, 3, 5
  017c144  clrldi 17, 17, 32
  017c148  clrldi 3, 3, 32
  017c14c  lfs 7, 80(17)
  017c150  stfs 7, 1104(3)
  017c154  cmpwi 6, 15
  017c158  bf 2, 0x17c198
  017c15c  lbz 3, 15(7)
  017c160  cmpwi 3, 255
  017c164  bt 2, 0x17c198
  017c168  mulli 3, 3, 4512
  017c16c  lwz 17, -21852(11)
  017c170  mulli 17, 17, 1472
  017c174  addc 3, 3, 12
  017c178  addc 16, 17, 8
  017c17c  addc 3, 3, 17
  017c180  addc 17, 16, 5
  017c184  addc 3, 3, 31
  017c188  clrldi 17, 17, 32
  017c18c  clrldi 3, 3, 32
  017c190  lfs 7, 80(17)
  017c194  stfs 7, 1168(3)
  017c198  lbz 3, 16(7)
  017c19c  cmpwi 3, 255
  017c1a0  bt 2, 0x17c250
  017c1a4  or 17, 6, 10
  017c1a8  cmpwi 17, 0
  017c1ac  bf 2, 0x17c1d8
  017c1b0  mulli 3, 3, 4512
  017c1b4  lwz 17, -21852(11)
  017c1b8  mulli 17, 17, 1472
  017c1bc  addc 3, 3, 20
  017c1c0  addc 16, 17, 19
  017c1c4  addc 3, 3, 17
  017c1c8  clrldi 17, 16, 32
  017c1cc  clrldi 3, 3, 32
  017c1d0  lfs 7, 0(17)
  017c1d4  stfs 7, 0(3)
  017c1d8  cmpwi 1, 10, 0
  017c1dc  cmpwi 6, 1
  017c1e0  crnand 2, 2, 6
  017c1e4  bt 2, 0x17c214
  017c1e8  lwz 3, -21852(11)
  017c1ec  lbz 17, 16(7)
  017c1f0  mulli 3, 3, 1472
  017c1f4  mulli 17, 17, 4512
  017c1f8  addc 16, 3, 21
  017c1fc  addc 17, 17, 22
  017c200  clrldi 16, 16, 32
  017c204  addc 3, 17, 3
  017c208  clrldi 3, 3, 32
  017c20c  lfs 7, 0(16)
  017c210  stfs 7, 0(3)
  017c214  cmpwi 1, 10, 1
  017c218  cmpwi 6, 0
  017c21c  crnand 2, 2, 6
  017c220  bt 2, 0x17c250
  017c224  lwz 3, -21852(11)
  017c228  lbz 17, 16(7)
  017c22c  mulli 17, 17, 4512
  017c230  mulli 3, 3, 1472
  017c234  addc 17, 17, 24
  017c238  addc 16, 3, 23
  017c23c  addc 3, 17, 3
  017c240  clrldi 17, 16, 32
  017c244  clrldi 3, 3, 32
  017c248  lfs 7, 0(17)
  017c24c  stfs 7, 0(3)
  017c250  lbz 3, 17(7)
  017c254  cmpwi 3, 255
  017c258  bt 2, 0x17c294
  017c25c  cmpwi 1, 10, 0
  017c260  cmpwi 6, 15
  017c264  crnand 2, 2, 6
  017c268  bt 2, 0x17c294
  017c26c  mulli 3, 3, 4512
  017c270  lwz 17, -21852(11)
  017c274  mulli 17, 17, 1472
  017c278  addc 3, 3, 26
  017c27c  addc 16, 17, 25
  017c280  addc 3, 3, 17
  017c284  clrldi 17, 16, 32
  017c288  clrldi 3, 3, 32
  017c28c  lfs 7, 0(17)
  017c290  stfs 7, 0(3)
  017c294  lbz 3, 18(7)
  017c298  cmpwi 3, 255
  017c29c  bt 2, 0x17c2d8
  017c2a0  cmpwi 1, 10, 15
  017c2a4  cmpwi 6, 0
  017c2a8  crnand 2, 2, 6
  017c2ac  bt 2, 0x17c2d8
  017c2b0  mulli 3, 3, 4512
  017c2b4  lwz 17, -21852(11)
  017c2b8  mulli 17, 17, 1472
  017c2bc  addc 3, 3, 28
  017c2c0  addc 16, 17, 27
  017c2c4  addc 3, 3, 17
  017c2c8  clrldi 17, 16, 32
  017c2cc  clrldi 3, 3, 32
  017c2d0  lfs 7, 0(17)
  017c2d4  stfs 7, 0(3)
  017c2d8  lbz 3, 19(7)
  017c2dc  cmpwi 3, 255
  017c2e0  bt 2, 0x17c31c
  017c2e4  cmpwi 1, 10, 15
  017c2e8  cmpwi 6, 15
  017c2ec  crnand 2, 2, 6
  017c2f0  bt 2, 0x17c31c
  017c2f4  mulli 3, 3, 4512
  017c2f8  lwz 17, -21852(11)
  017c2fc  mulli 17, 17, 1472
  017c300  addc 3, 3, 30
  017c304  addc 16, 17, 29
  017c308  addc 3, 3, 17
  017c30c  clrldi 17, 16, 32
  017c310  clrldi 3, 3, 32
  017c314  lfs 7, 0(17)
  017c318  stfs 7, 0(3)
  017c31c  addic 6, 6, 1
  017c320  addic 5, 5, 4
  017c324  fadds 6, 6, 9
  017c328  cmpw 6, 18
  017c32c  bf 1, 0x17bf94
  017c330  addic 10, 10, 1
  017c334  ld 3, 56(1)
  017c338  fadds 5, 5, 10
  017c33c  addic 8, 8, 64
  017c340  cmpw 10, 3
  017c344  addic 31, 31, 4
  017c348  bf 1, 0x17bf1c
  017c34c  ld 3, 64(1)
  017c350  addic 7, 7, 4512
  017c354  addic 3, 3, 1
  017c358  cmpw 3, 4
  017c35c  std 3, 64(1)
  017c360  bt 0, 0x17bdf0
  017c364  lfd 31, 216(1)
  017c368  ld 16, 88(1)
  017c36c  ld 17, 96(1)
  017c370  ld 18, 104(1)
  017c374  ld 19, 112(1)
  017c378  ld 20, 120(1)
  017c37c  ld 21, 128(1)
  017c380  ld 22, 136(1)
  017c384  ld 23, 144(1)
  017c388  ld 24, 152(1)
  017c38c  ld 25, 160(1)
  017c390  ld 26, 168(1)
  017c394  ld 27, 176(1)
  017c398  ld 28, 184(1)
  017c39c  ld 29, 192(1)
  017c3a0  ld 30, 200(1)
  017c3a4  ld 31, 208(1)
  017c3a8  addi 1, 1, 224
  017c3ac  blr

WaterTile_PutDrop_Thunk:   # 0x17c3b0, 0x24 bytes
  017c3b0  stdu 1, -112(1)
  017c3b4  mflr 0
  017c3b8  std 0, 128(1)
  017c3bc  li 9, 0
  017c3c0  bl 0x17bd90
  017c3c4  ld 0, 128(1)
  017c3c8  mtlr 0
  017c3cc  addi 1, 1, 112
  017c3d0  blr

WaterTile_GetHeight:   # 0x17c3e0, 0x2dc bytes
  017c3e0  stdu 1, -192(1)
  017c3e4  mflr 0
  017c3e8  std 0, 208(1)
  017c3ec  stfd 29, 168(1)
  017c3f0  stfd 30, 176(1)
  017c3f4  stfd 31, 184(1)
  017c3f8  fmr 31, 2
  017c3fc  std 31, 160(1)
  017c400  fmr 30, 1
  017c404  std 30, 152(1)
  017c408  ori 31, 7, 0
  017c40c  std 29, 144(1)
  017c410  std 28, 136(1)
  017c414  std 27, 128(1)
  017c418  std 26, 120(1)
  017c41c  ori 30, 6, 0
  017c420  bl 0x17b5a0
  017c424  ori 26, 3, 0
  017c428  cmpwi 26, 0
  017c42c  bf 0, 0x17c438
  017c430  li 3, 0
  017c434  b 0x17c688
  017c438  mulli 3, 26, 4512
  017c43c  lis 4, 230
  017c440  lis 29, 116
  017c444  addic 29, 29, -22016
  017c448  lwz 4, -21888(4)
  017c44c  addc 26, 4, 3
  017c450  lfs 1, 8(29)
  017c454  clrldi 26, 26, 32
  017c458  lfs 2, 12(29)
  017c45c  lfs 3, 0(26)
  017c460  lfs 4, 4(26)
  017c464  fadds 1, 3, 1
  017c468  fadds 2, 4, 2
  017c46c  lfs 3, 16(29)
  017c470  fsubs 30, 30, 1
  017c474  fsubs 29, 31, 2
  017c478  fdivs 1, 30, 3
  017c47c  bl 0x502758
  017c480  nop
  017c484  lfs 1, 20(29)
  017c488  fdivs 1, 29, 1
  017c48c  ori 27, 3, 0
  017c490  bl 0x502758
  017c494  nop
  017c498  ori 28, 3, 0
  017c49c  ori 3, 27, 0
  017c4a0  bl 0x502730
  017c4a4  nop
  017c4a8  lfs 31, 16(29)
  017c4ac  ori 3, 28, 0
  017c4b0  fnmsubs 1, 1, 31, 30
  017c4b4  fdivs 31, 1, 31
  017c4b8  bl 0x502730
  017c4bc  nop
  017c4c0  lis 3, 116
  017c4c4  lfs 30, 20(29)
  017c4c8  sldi 7, 28, 6
  017c4cc  sldi 4, 27, 2
  017c4d0  fnmsubs 4, 1, 30, 29
  017c4d4  cmpwi 27, 15
  017c4d8  lwz 6, -22028(3)
  017c4dc  mulli 6, 6, 1472
  017c4e0  fdivs 4, 4, 30
  017c4e4  addc 5, 26, 6
  017c4e8  addc 3, 5, 7
  017c4ec  addc 3, 3, 4
  017c4f0  clrldi 3, 3, 32
  017c4f4  lfs 1, 80(3)
  017c4f8  bf 2, 0x17c510
  017c4fc  sldi 7, 28, 2
  017c500  addc 7, 5, 7
  017c504  clrldi 7, 7, 32
  017c508  lfs 3, 1296(7)
  017c50c  b 0x17c514
  017c510  lfs 3, 84(3)
  017c514  cmpwi 28, 15
  017c518  bf 2, 0x17c52c
  017c51c  addc 7, 5, 4
  017c520  clrldi 7, 7, 32
  017c524  lfs 2, 1232(7)
  017c528  b 0x17c530
  017c52c  lfs 2, 144(3)
  017c530  cmpwi 27, 15
  017c534  bf 2, 0x17c550
  017c538  cmpwi 28, 15
  017c53c  bf 2, 0x17c550
  017c540  addc 3, 26, 6
  017c544  clrldi 3, 3, 32
  017c548  lfs 5, 1500(3)
  017c54c  b 0x17c588
  017c550  cmpwi 27, 15
  017c554  bf 2, 0x17c56c
  017c558  sldi 3, 28, 2
  017c55c  addc 3, 5, 3
  017c560  clrldi 3, 3, 32
  017c564  lfs 5, 1300(3)
  017c568  b 0x17c588
  017c56c  cmpwi 28, 15
  017c570  bf 2, 0x17c584
  017c574  addc 3, 5, 4
  017c578  clrldi 3, 3, 32
  017c57c  lfs 5, 1236(3)
  017c580  b 0x17c588
  017c584  lfs 5, 148(3)
  017c588  cmpwi 30, 0
  017c58c  bt 2, 0x17c5b8
  017c590  fsubs 6, 3, 1
  017c594  fsubs 5, 5, 2
  017c598  lfs 7, 8(26)
  017c59c  fmadds 6, 6, 31, 1
  017c5a0  fmadds 5, 5, 31, 2
  017c5a4  fsubs 5, 5, 6
  017c5a8  fmadds 4, 5, 4, 6
  017c5ac  fadds 4, 4, 7
  017c5b0  stfs 4, 0(30)
  017c5b4  lfs 30, 20(29)
  017c5b8  cmpwi 31, 0
  017c5bc  bt 2, 0x17c684
  017c5c0  fsubs 2, 2, 1
  017c5c4  fsubs 1, 3, 1
  017c5c8  lfs 3, 16(29)
  017c5cc  fmuls 4, 3, 30
  017c5d0  lis 3, 24
  017c5d4  addi 3, 3, -15404
  017c5d8  fmuls 2, 3, 2
  017c5dc  fmuls 1, 1, 30
  017c5e0  fneg 3, 4
  017c5e4  stfs 2, 4(31)
  017c5e8  stfs 1, 0(31)
  017c5ec  stfs 3, 8(31)
  017c5f0  lfs 5, 4(31)
  017c5f4  lfs 6, 0(31)
  017c5f8  fmuls 1, 5, 5
  017c5fc  lfs 4, 8(31)
  017c600  lfs 3, 0(3)
  017c604  fmr 2, 3
  017c608  li 3, 0
  017c60c  fmadds 7, 6, 6, 1
  017c610  stw 3, 12(31)
  017c614  fmr 1, 2
  017c618  fmadds 7, 4, 4, 7
  017c61c  fsqrts 8, 7
  017c620  fcmpu 0, 8, 1
  017c624  bt 2, 0x17c678
  017c628  frsqrte 1, 7
  017c62c  lis 3, 24
  017c630  addi 3, 3, -15404
  017c634  lfs 2, 4(3)
  017c638  lfs 3, 8(3)
  017c63c  fmuls 8, 7, 1
  017c640  fmuls 9, 2, 1
  017c644  fnmsubs 8, 8, 1, 3
  017c648  fmadds 1, 8, 9, 1
  017c64c  fmuls 8, 7, 1
  017c650  fmuls 9, 2, 1
  017c654  fnmsubs 8, 8, 1, 3
  017c658  fmadds 1, 8, 9, 1
  017c65c  fmuls 7, 7, 1
  017c660  fmuls 2, 2, 1
  017c664  fnmsubs 3, 7, 1, 3
  017c668  fmadds 3, 3, 2, 1
  017c66c  fmuls 1, 6, 3
  017c670  fmuls 2, 5, 3
  017c674  fmuls 3, 4, 3
  017c678  stfs 1, 0(31)
  017c67c  stfs 2, 4(31)
  017c680  stfs 3, 8(31)
  017c684  li 3, 1
  017c688  ld 0, 208(1)
  017c68c  mtlr 0
  017c690  lfd 29, 168(1)
  017c694  lfd 30, 176(1)
  017c698  lfd 31, 184(1)
  017c69c  ld 26, 120(1)
  017c6a0  ld 27, 128(1)
  017c6a4  ld 28, 136(1)
  017c6a8  ld 29, 144(1)
  017c6ac  ld 30, 152(1)
  017c6b0  ld 31, 160(1)
  017c6b4  addi 1, 1, 192
  017c6b8  blr

WaterTile_BuildVertexGrid:   # 0x17c6bc, 0x94 bytes
  017c6bc  lis 4, 144
  017c6c0  lis 6, 116
  017c6c4  li 8, 0
  017c6c8  addic 6, 6, -22016
  017c6cc  lwz 4, 11976(4)
  017c6d0  lfs 2, 4(3)
  017c6d4  addic 9, 4, 8192
  017c6d8  lfs 1, 12(6)
  017c6dc  addic 4, 4, 112
  017c6e0  fadds 2, 2, 1
  017c6e4  lfs 1, 0(3)
  017c6e8  li 10, 17
  017c6ec  lfs 3, 8(6)
  017c6f0  ori 7, 9, 0
  017c6f4  ori 5, 4, 0
  017c6f8  mtctr 10
  017c6fc  fadds 1, 1, 3
  017c700  lfs 3, 0(5)
  017c704  stfs 1, 0(9)
  017c708  ori 10, 7, 0
  017c70c  stfs 2, 4(7)
  017c710  addic 5, 5, 4
  017c714  lfs 4, 8(3)
  017c718  addic 7, 7, 12
  017c71c  addic 9, 10, 12
  017c720  fadds 3, 3, 4
  017c724  stfs 3, 8(10)
  017c728  lfs 3, 16(6)
  017c72c  fadds 1, 1, 3
  017c730  bdnz 0x17c700
  017c734  addic 8, 8, 1
  017c738  lfs 1, 20(6)
  017c73c  addic 4, 4, 96
  017c740  cmpwi 8, 17
  017c744  fadds 2, 2, 1
  017c748  bt 0, 0x17c6e4
  017c74c  blr

WaterTile_DrawCellBase:   # 0x17c750, 0x120 bytes
  017c750  stdu 1, -128(1)
  017c754  mflr 0
  017c758  std 0, 144(1)
  017c75c  std 31, 120(1)
  017c760  lis 3, 144
  017c764  ori 31, 4, 0
  017c768  li 4, 1104
  017c76c  li 5, 16
  017c770  lwz 3, -23488(3)
  017c774  bl 0x4fe098
  017c778  nop
  017c77c  srawi 4, 31, 2
  017c780  lis 8, 144
  017c784  sldi 6, 4, 6
  017c788  sldi 4, 4, 2
  017c78c  rlwinm 5, 31, 2, 28, 29
  017c790  addc 4, 6, 4
  017c794  ori 7, 3, 0
  017c798  addc 3, 5, 4
  017c79c  lwz 5, 11976(8)
  017c7a0  lis 4, 116
  017c7a4  addc 8, 3, 3
  017c7a8  ori 6, 7, 0
  017c7ac  addc 3, 3, 8
  017c7b0  li 8, 46
  017c7b4  sldi 3, 3, 2
  017c7b8  mtctr 8
  017c7bc  addc 5, 5, 3
  017c7c0  addic 3, 4, -21824
  017c7c4  addic 5, 5, 8192
  017c7c8  lis 4, 116
  017c7cc  clrldi 5, 5, 32
  017c7d0  addic 4, 4, -21920
  017c7d4  lhz 8, 0(4)
  017c7d8  addic 4, 4, 2
  017c7dc  extsh 8, 8
  017c7e0  addc 9, 8, 8
  017c7e4  addc 8, 8, 9
  017c7e8  sldi 9, 8, 2
  017c7ec  addic 10, 8, 2
  017c7f0  addic 8, 8, 1
  017c7f4  clrldi 9, 9, 32
  017c7f8  sldi 8, 8, 2
  017c7fc  sldi 10, 10, 2
  017c800  clrldi 8, 8, 32
  017c804  lfsx 1, 5, 9
  017c808  clrldi 9, 10, 32
  017c80c  stfs 1, 0(6)
  017c810  lfsx 1, 5, 8
  017c814  lis 8, 32639
  017c818  stfs 1, 4(6)
  017c81c  lfsx 1, 5, 9
  017c820  ori 8, 8, 32639
  017c824  stfs 1, 8(6)
  017c828  lfs 1, 0(3)
  017c82c  stfs 1, 12(6)
  017c830  lfs 1, 4(3)
  017c834  stw 8, 20(6)
  017c838  addic 3, 3, 8
  017c83c  stfs 1, 16(6)
  017c840  addic 6, 6, 24
  017c844  bdnz 0x17c7d4
  017c848  li 3, 46
  017c84c  ori 4, 7, 0
  017c850  li 5, 9
  017c854  bl 0x74150
  017c858  nop
  017c85c  ld 0, 144(1)
  017c860  mtlr 0
  017c864  ld 31, 120(1)
  017c868  addi 1, 1, 128
  017c86c  blr

WaterTile_DrawCellOvl:   # 0x17c888, 0x28c bytes
  017c888  stdu 1, -128(1)
  017c88c  mflr 0
  017c890  std 0, 144(1)
  017c894  std 31, 120(1)
  017c898  lis 3, 144
  017c89c  ori 31, 4, 0
  017c8a0  lis 6, 24
  017c8a4  li 4, 1104
  017c8a8  li 5, 16
  017c8ac  std 30, 112(1)
  017c8b0  lwz 3, -23488(3)
  017c8b4  addi 30, 6, -14224
  017c8b8  bl 0x4fe098
  017c8bc  nop
  017c8c0  srawi 4, 31, 2
  017c8c4  lis 7, 144
  017c8c8  sldi 6, 4, 6
  017c8cc  sldi 4, 4, 2
  017c8d0  rlwinm 5, 31, 2, 28, 29
  017c8d4  addc 4, 6, 4
  017c8d8  ori 9, 3, 0
  017c8dc  addc 3, 5, 4
  017c8e0  lwz 5, 11976(7)
  017c8e4  li 10, 4
  017c8e8  addc 6, 3, 3
  017c8ec  lvlx 6, 0, 30
  017c8f0  slwi 4, 3, 2
  017c8f4  slwi 7, 3, 3
  017c8f8  addc 3, 3, 6
  017c8fc  vspltw 6, 6, 0
  017c900  li 11, 8
  017c904  lvlx 5, 10, 30
  017c908  sldi 3, 3, 2
  017c90c  li 12, 12
  017c910  li 31, 16
  017c914  vspltw 5, 5, 0
  017c918  addc 3, 5, 3
  017c91c  addc 6, 5, 7
  017c920  addic 7, 3, 8192
  017c924  lvlx 4, 11, 30
  017c928  addc 4, 5, 4
  017c92c  lvlx 3, 12, 30
  017c930  lis 3, 116
  017c934  lvlx 2, 31, 30
  017c938  ori 8, 9, 0
  017c93c  vspltw 4, 4, 0
  017c940  addic 6, 6, 1920
  017c944  vspltw 3, 3, 0
  017c948  addic 5, 4, 4232
  017c94c  vspltw 2, 2, 0
  017c950  li 10, 46
  017c954  addic 4, 3, -21920
  017c958  clrldi 7, 7, 32
  017c95c  clrldi 6, 6, 32
  017c960  clrldi 5, 5, 32
  017c964  addic 3, 8, 20
  017c968  mtctr 10
  017c96c  lhz 10, 0(4)
  017c970  extsh 10, 10
  017c974  vspltisw 9, -8
  017c978  addc 11, 10, 10
  017c97c  slwi 30, 10, 1
  017c980  addc 11, 10, 11
  017c984  vspltisw 11, -1
  017c988  sldi 10, 10, 2
  017c98c  addic 12, 11, 2
  017c990  sldi 31, 11, 2
  017c994  addic 11, 11, 1
  017c998  clrldi 31, 31, 32
  017c99c  sldi 11, 11, 2
  017c9a0  sldi 12, 12, 2
  017c9a4  clrldi 11, 11, 32
  017c9a8  clrldi 12, 12, 32
  017c9ac  lfsx 1, 7, 31
  017c9b0  addic 31, 30, 1
  017c9b4  stfs 1, 0(8)
  017c9b8  sldi 30, 30, 2
  017c9bc  lfsx 1, 7, 11
  017c9c0  sldi 11, 31, 2
  017c9c4  clrldi 31, 30, 32
  017c9c8  stfs 1, 4(8)
  017c9cc  clrldi 11, 11, 32
  017c9d0  lfsx 1, 7, 12
  017c9d4  clrldi 10, 10, 32
  017c9d8  stfs 1, 8(8)
  017c9dc  addi 12, 10, 16
  017c9e0  lfsx 1, 6, 31
  017c9e4  vspltisw 12, -1
  017c9e8  stfs 1, 12(8)
  017c9ec  lfsx 1, 6, 11
  017c9f0  vspltisw 13, -1
  017c9f4  stfs 1, 16(8)
  017c9f8  lvlx 7, 10, 5
  017c9fc  lvrx 8, 12, 5
  017ca00  vslw 11, 11, 11
  017ca04  vor 7, 7, 8
  017ca08  vspltisw 8, -16
  017ca0c  vslw 12, 12, 12
  017ca10  vslw 13, 13, 13
  017ca14  vrlw 9, 7, 9
  017ca18  vrlw 8, 7, 8
  017ca1c  vand 10, 7, 4
  017ca20  vsrw 7, 7, 3
  017ca24  vand 9, 9, 4
  017ca28  vand 8, 8, 4
  017ca2c  vcfux 10, 10, 0
  017ca30  vcfux 7, 7, 0
  017ca34  vspltisw 0, -1
  017ca38  vcfux 9, 9, 0
  017ca3c  vcfux 8, 8, 0
  017ca40  addic 8, 8, 24
  017ca44  addic 4, 4, 2
  017ca48  vmaddfp 10, 10, 6, 12
  017ca4c  vmaddfp 9, 9, 6, 11
  017ca50  vmaddfp 8, 8, 6, 13
  017ca54  vslw 11, 0, 0
  017ca58  vmaddfp 7, 7, 6, 11
  017ca5c  vcmpgtfp 11, 10, 5
  017ca60  vcmpgtfp 12, 9, 5
  017ca64  vsel 10, 10, 5, 11
  017ca68  vcmpgtfp 13, 8, 5
  017ca6c  vsel 9, 9, 5, 12
  017ca70  vsel 8, 8, 5, 13
  017ca74  vaddfp 10, 10, 6
  017ca78  vcmpgtfp 11, 7, 5
  017ca7c  vaddfp 9, 9, 6
  017ca80  vsel 7, 7, 5, 11
  017ca84  vaddfp 8, 8, 6
  017ca88  vspltisw 11, 8
  017ca8c  vaddfp 7, 7, 6
  017ca90  vcmpgtfp 13, 10, 5
  017ca94  vcmpgtfp 12, 9, 5
  017ca98  vsel 10, 10, 5, 13
  017ca9c  vsel 9, 9, 5, 12
  017caa0  vcmpgtfp 12, 8, 5
  017caa4  vsel 8, 8, 5, 12
  017caa8  vctsxs 9, 9, 0
  017caac  vcmpgtfp 13, 7, 5
  017cab0  vctsxs 10, 10, 0
  017cab4  vsel 7, 7, 5, 13
  017cab8  vctsxs 8, 8, 0
  017cabc  vctsxs 7, 7, 0
  017cac0  vslw 9, 9, 11
  017cac4  vslw 8, 8, 2
  017cac8  vor 9, 10, 9
  017cacc  vslw 7, 7, 3
  017cad0  vor 8, 9, 8
  017cad4  vor 7, 8, 7
  017cad8  vspltw 7, 7, 0
  017cadc  stvewx 7, 0, 3
  017cae0  addic 3, 3, 24
  017cae4  bdnz 0x17c96c
  017cae8  li 3, 46
  017caec  ori 4, 9, 0
  017caf0  li 5, 9
  017caf4  bl 0x74150
  017caf8  nop
  017cafc  ld 0, 144(1)
  017cb00  mtlr 0
  017cb04  ld 30, 112(1)
  017cb08  ld 31, 120(1)
  017cb0c  addi 1, 1, 128
  017cb10  blr

WaterTile_CullAndDrawCell:   # 0x17cb20, 0x494 bytes
  017cb20  stdu 1, -304(1)
  017cb24  mflr 0
  017cb28  std 0, 320(1)
  017cb2c  stfd 30, 288(1)
  017cb30  stfd 31, 296(1)
  017cb34  li 0, 208
  017cb38  std 27, 248(1)
  017cb3c  stw 4, 208(1)
  017cb40  ori 27, 5, 0
  017cb44  std 31, 280(1)
  017cb48  stw 4, 212(1)
  017cb4c  ori 31, 4, 0
  017cb50  stw 4, 216(1)
  017cb54  cmpwi 27, 0
  017cb58  stw 4, 220(1)
  017cb5c  std 30, 272(1)
  017cb60  std 29, 264(1)
  017cb64  std 28, 256(1)
  017cb68  std 26, 240(1)
  017cb6c  std 25, 232(1)
  017cb70  std 24, 224(1)
  017cb74  lvx 2, 1, 0
  017cb78  bt 2, 0x17cf30
  017cb7c  lis 4, 24
  017cb80  lis 5, 116
  017cb84  vspltisw 3, 3
  017cb88  addi 4, 4, -13548
  017cb8c  vspltisw 6, -1
  017cb90  addic 5, 5, -22016
  017cb94  vspltisw 7, -1
  017cb98  li 6, 8
  017cb9c  vspltisw 8, 2
  017cba0  li 7, 12
  017cba4  vand 3, 2, 3
  017cba8  vslw 6, 6, 6
  017cbac  lvlx 4, 0, 4
  017cbb0  vslw 7, 7, 7
  017cbb4  vspltw 4, 4, 0
  017cbb8  lvlx 5, 6, 5
  017cbbc  vcfsx 3, 3, 0
  017cbc0  lvlx 9, 7, 5
  017cbc4  vmaddfp 6, 5, 4, 6
  017cbc8  vsraw 2, 2, 8
  017cbcc  li 5, 4
  017cbd0  vmaddfp 4, 9, 4, 7
  017cbd4  lvlx 7, 0, 3
  017cbd8  li 6, 148
  017cbdc  vcfsx 2, 2, 0
  017cbe0  vaddfp 5, 7, 5
  017cbe4  lvlx 7, 5, 3
  017cbe8  li 5, 144
  017cbec  lfs 1, 8(3)
  017cbf0  vaddfp 7, 7, 9
  017cbf4  li 7, 160
  017cbf8  lis 8, 16256
  017cbfc  li 3, 164
  017cc00  vmaddfp 8, 6, 3, 6
  017cc04  li 10, 176
  017cc08  li 9, 180
  017cc0c  li 25, 0
  017cc10  lis 29, 149
  017cc14  vmaddfp 9, 4, 2, 4
  017cc18  vmaddfp 3, 6, 3, 5
  017cc1c  ori 28, 25, 0
  017cc20  addic 29, 29, 5056
  017cc24  vmaddfp 2, 4, 2, 7
  017cc28  ori 26, 28, 0
  017cc2c  vaddfp 4, 5, 8
  017cc30  ori 24, 26, 0
  017cc34  addic 30, 1, 144
  017cc38  vaddfp 5, 7, 9
  017cc3c  vspltw 3, 3, 0
  017cc40  vspltw 2, 2, 0
  017cc44  vspltw 4, 4, 0
  017cc48  stvewx 3, 5, 1
  017cc4c  li 5, 192
  017cc50  stvewx 2, 6, 1
  017cc54  stfs 1, 152(1)
  017cc58  stw 8, 156(1)
  017cc5c  li 6, 196
  017cc60  vspltw 5, 5, 0
  017cc64  stvewx 4, 7, 1
  017cc68  stvewx 2, 3, 1
  017cc6c  stvewx 3, 10, 1
  017cc70  stfs 1, 168(1)
  017cc74  stw 8, 172(1)
  017cc78  stvewx 5, 9, 1
  017cc7c  stfs 1, 184(1)
  017cc80  stvewx 4, 5, 1
  017cc84  stw 8, 188(1)
  017cc88  stvewx 5, 6, 1
  017cc8c  stfs 1, 200(1)
  017cc90  stw 8, 204(1)
  017cc94  lfs 31, 4(4)
  017cc98  lfs 1, 0(30)
  017cc9c  lfs 2, 320(29)
  017cca0  fsubs 1, 1, 2
  017cca4  lfs 2, 324(29)
  017cca8  lfs 3, 328(29)
  017ccac  lfs 4, 208(29)
  017ccb0  lfs 5, 212(29)
  017ccb4  lfs 6, 192(29)
  017ccb8  lfs 7, 216(29)
  017ccbc  slwi 25, 25, 8
  017ccc0  addic 3, 1, 128
  017ccc4  stfs 1, 112(1)
  017ccc8  lfs 8, 4(30)
  017cccc  fmuls 1, 1, 31
  017ccd0  fsubs 2, 8, 2
  017ccd4  lfs 8, 196(29)
  017ccd8  lfs 9, 220(29)
  017ccdc  lfs 10, 200(29)
  017cce0  lfs 11, 224(29)
  017cce4  fmuls 12, 2, 31
  017cce8  stfs 2, 116(1)
  017ccec  lfs 2, 8(30)
  017ccf0  fsubs 2, 2, 3
  017ccf4  lfs 3, 12(30)
  017ccf8  lfs 13, 204(29)
  017ccfc  lfs 0, 228(29)
  017cd00  lfs 30, 232(29)
  017cd04  fmuls 4, 4, 12
  017cd08  fmuls 5, 5, 12
  017cd0c  fmuls 7, 7, 12
  017cd10  fmuls 9, 9, 12
  017cd14  fmuls 2, 2, 31
  017cd18  fmadds 4, 6, 1, 4
  017cd1c  fmadds 5, 8, 1, 5
  017cd20  fmadds 6, 10, 1, 7
  017cd24  fmadds 8, 13, 1, 9
  017cd28  lfs 7, 240(29)
  017cd2c  stfs 1, 128(1)
  017cd30  stfs 12, 132(1)
  017cd34  lfs 9, 236(29)
  017cd38  lfs 10, 244(29)
  017cd3c  stfs 2, 136(1)
  017cd40  fmadds 4, 11, 2, 4
  017cd44  stfs 3, 140(1)
  017cd48  fmadds 5, 0, 2, 5
  017cd4c  fmadds 6, 30, 2, 6
  017cd50  fmadds 8, 9, 2, 8
  017cd54  lfs 9, 248(29)
  017cd58  lfs 11, 252(29)
  017cd5c  stfs 3, 124(1)
  017cd60  stfs 1, 112(1)
  017cd64  stfs 12, 116(1)
  017cd68  stfs 2, 120(1)
  017cd6c  fmadds 4, 7, 3, 4
  017cd70  fmadds 5, 10, 3, 5
  017cd74  fmadds 6, 9, 3, 6
  017cd78  fmadds 7, 11, 3, 8
  017cd7c  stfs 4, 128(1)
  017cd80  stfs 5, 132(1)
  017cd84  stfs 6, 136(1)
  017cd88  stfs 7, 140(1)
  017cd8c  lfs 4, 272(29)
  017cd90  lfs 5, 276(29)
  017cd94  lfs 6, 256(29)
  017cd98  lfs 7, 280(29)
  017cd9c  fmuls 4, 4, 12
  017cda0  fmuls 5, 5, 12
  017cda4  lfs 8, 260(29)
  017cda8  lfs 9, 284(29)
  017cdac  fmuls 7, 7, 12
  017cdb0  lfs 10, 264(29)
  017cdb4  fmuls 9, 9, 12
  017cdb8  lfs 11, 288(29)
  017cdbc  lfs 12, 268(29)
  017cdc0  fmadds 4, 6, 1, 4
  017cdc4  fmadds 5, 8, 1, 5
  017cdc8  fmadds 7, 10, 1, 7
  017cdcc  lfs 6, 292(29)
  017cdd0  lfs 8, 296(29)
  017cdd4  fmadds 1, 12, 1, 9
  017cdd8  lfs 9, 304(29)
  017cddc  fmadds 4, 11, 2, 4
  017cde0  fmadds 5, 6, 2, 5
  017cde4  lfs 6, 300(29)
  017cde8  fmadds 7, 8, 2, 7
  017cdec  lfs 10, 308(29)
  017cdf0  fmadds 1, 6, 2, 1
  017cdf4  lfs 8, 312(29)
  017cdf8  lfs 2, 316(29)
  017cdfc  fmadds 4, 9, 3, 4
  017ce00  fmadds 5, 10, 3, 5
  017ce04  fmadds 6, 8, 3, 7
  017ce08  fmadds 1, 2, 3, 1
  017ce0c  stfs 4, 112(1)
  017ce10  stfs 5, 116(1)
  017ce14  stfs 6, 120(1)
  017ce18  stfs 1, 124(1)
  017ce1c  bl 0x500460
  017ce20  nop
  017ce24  or 25, 25, 3
  017ce28  slwi 24, 24, 8
  017ce2c  addic 3, 1, 112
  017ce30  bl 0x500460
  017ce34  nop
  017ce38  addic 26, 26, 1
  017ce3c  or 24, 24, 3
  017ce40  cmpwi 26, 4
  017ce44  addic 30, 30, 16
  017ce48  bt 0, 0x17cc98
  017ce4c  cmpwi 27, 1
  017ce50  bf 2, 0x17cec8
  017ce54  lis 3, 257
  017ce58  ori 3, 3, 257
  017ce5c  and 4, 24, 3
  017ce60  cmpw 4, 3
  017ce64  bt 2, 0x17cf7c
  017ce68  lis 3, 514
  017ce6c  ori 3, 3, 514
  017ce70  and 4, 24, 3
  017ce74  cmpw 4, 3
  017ce78  bt 2, 0x17cf7c
  017ce7c  lis 3, 1028
  017ce80  ori 3, 3, 1028
  017ce84  and 4, 24, 3
  017ce88  cmpw 4, 3
  017ce8c  bt 2, 0x17cf7c
  017ce90  lis 3, 2056
  017ce94  ori 3, 3, 2056
  017ce98  and 4, 24, 3
  017ce9c  cmpw 4, 3
  017cea0  bt 2, 0x17cf7c
  017cea4  lis 3, 8224
  017cea8  cmpwi 1, 25, 0
  017ceac  ori 3, 3, 8224
  017ceb0  and 4, 24, 3
  017ceb4  cmpw 4, 3
  017ceb8  bt 2, 0x17cf7c
  017cebc  bf 6, 0x17cf30
  017cec0  ori 27, 28, 0
  017cec4  b 0x17cf30
  017cec8  lis 3, 257
  017cecc  ori 3, 3, 257
  017ced0  and 4, 24, 3
  017ced4  cmpw 4, 3
  017ced8  bt 2, 0x17cf7c
  017cedc  lis 3, 514
  017cee0  ori 3, 3, 514
  017cee4  and 4, 24, 3
  017cee8  cmpw 4, 3
  017ceec  bt 2, 0x17cf7c
  017cef0  lis 3, 1028
  017cef4  ori 3, 3, 1028
  017cef8  and 4, 24, 3
  017cefc  cmpw 4, 3
  017cf00  bt 2, 0x17cf7c
  017cf04  lis 3, 2056
  017cf08  ori 3, 3, 2056
  017cf0c  and 4, 24, 3
  017cf10  cmpw 4, 3
  017cf14  bt 2, 0x17cf7c
  017cf18  lis 3, 8224
  017cf1c  ori 3, 3, 8224
  017cf20  and 4, 24, 3
  017cf24  cmpw 4, 3
  017cf28  bt 2, 0x17cf7c
  017cf2c  ori 27, 28, 0
  017cf30  li 4, 0
  017cf34  srawi 3, 31, 2
  017cf38  subc 4, 4, 27
  017cf3c  sldi 5, 3, 6
  017cf40  cntlzw 4, 4
  017cf44  sldi 3, 3, 2
  017cf48  sldi 4, 4, 58
  017cf4c  rlwinm 6, 31, 2, 28, 29
  017cf50  addc 3, 5, 3
  017cf54  sradi 5, 4, 63
  017cf58  addc 4, 6, 3
  017cf5c  li 3, 12
  017cf60  li 6, 14
  017cf64  extsw 4, 4
  017cf68  subc 3, 3, 6
  017cf6c  and 3, 5, 3
  017cf70  addc 3, 6, 3
  017cf74  bl 0xe9f28
  017cf78  nop
  017cf7c  ld 0, 320(1)
  017cf80  mtlr 0
  017cf84  lfd 30, 288(1)
  017cf88  lfd 31, 296(1)
  017cf8c  ld 24, 224(1)
  017cf90  ld 25, 232(1)
  017cf94  ld 26, 240(1)
  017cf98  ld 27, 248(1)
  017cf9c  ld 28, 256(1)
  017cfa0  ld 29, 264(1)
  017cfa4  ld 30, 272(1)
  017cfa8  ld 31, 280(1)
  017cfac  addi 1, 1, 304
  017cfb0  blr

???_Unused_Water_ResetIds_73aa44:   # 0x17cfb4, 0x28 bytes
  017cfb4  lis 3, 116
  017cfb8  lis 4, 116
  017cfbc  li 5, -1
  017cfc0  lis 6, 116
  017cfc4  lis 7, 116
  017cfc8  stw 5, -21948(3)
  017cfcc  stw 5, -21936(4)
  017cfd0  stw 5, -21944(6)
  017cfd4  stw 5, -21940(7)
  017cfd8  blr

WaterTile_DrawAll:   # 0x17cfdc, 0x474 bytes
  017cfdc  stdu 1, -176(1)
  017cfe0  mflr 0
  017cfe4  std 0, 192(1)
  017cfe8  lis 5, 116
  017cfec  li 6, -1
  017cff0  lis 7, 116
  017cff4  std 29, 152(1)
  017cff8  lis 8, 116
  017cffc  ori 29, 3, 0
  017d000  lis 3, 116
  017d004  std 28, 144(1)
  017d008  stw 6, -21948(5)
  017d00c  li 28, 0
  017d010  stw 6, -21944(7)
  017d014  std 30, 160(1)
  017d018  stw 6, -21940(8)
  017d01c  cmpwi 4, 0
  017d020  std 31, 168(1)
  017d024  ori 30, 28, 0
  017d028  ori 31, 4, 0
  017d02c  std 27, 136(1)
  017d030  std 26, 128(1)
  017d034  std 25, 120(1)
  017d038  stw 6, -21936(3)
  017d03c  bf 1, 0x17d3c0
  017d040  lhz 3, 30(29)
  017d044  cmpwi 3, 0
  017d048  bt 2, 0x17d3b0
  017d04c  lis 3, 116
  017d050  lis 4, 144
  017d054  lwz 3, -22028(3)
  017d058  mulli 3, 3, 1472
  017d05c  addc 5, 29, 3
  017d060  lwz 3, 11976(4)
  017d064  addic 4, 5, 80
  017d068  clrldi 4, 4, 32
  017d06c  bl 0xe91a8
  017d070  nop
  017d074  ori 3, 29, 0
  017d078  bl 0xe9470
  017d07c  nop
  017d080  ori 3, 29, 0
  017d084  bl 0x17c6bc
  017d088  ori 3, 29, 0
  017d08c  bl 0x17bab0
  017d090  lwz 3, 68(29)
  017d094  clrlwi 4, 3, 31
  017d098  cmpwi 4, 0
  017d09c  bt 2, 0x17d0d0
  017d0a0  li 4, 17
  017d0a4  ori 3, 30, 0
  017d0a8  mtctr 4
  017d0ac  lis 4, 144
  017d0b0  lwz 4, 11976(4)
  017d0b4  lfs 1, 8(29)
  017d0b8  addc 4, 4, 3
  017d0bc  addic 3, 3, 12
  017d0c0  clrldi 4, 4, 32
  017d0c4  stfs 1, 8200(4)
  017d0c8  bdnz 0x17d0ac
  017d0cc  lwz 3, 68(29)
  017d0d0  rlwinm 4, 3, 0, 30, 30
  017d0d4  cmpwi 4, 0
  017d0d8  bt 2, 0x17d10c
  017d0dc  li 4, 17
  017d0e0  ori 3, 30, 0
  017d0e4  mtctr 4
  017d0e8  lis 4, 144
  017d0ec  lwz 4, 11976(4)
  017d0f0  lfs 1, 8(29)
  017d0f4  addc 4, 4, 3
  017d0f8  addic 3, 3, 204
  017d0fc  clrldi 4, 4, 32
  017d100  stfs 1, 8392(4)
  017d104  bdnz 0x17d0e8
  017d108  lwz 3, 68(29)
  017d10c  rlwinm 4, 3, 0, 29, 29
  017d110  cmpwi 4, 0
  017d114  bt 2, 0x17d148
  017d118  li 4, 17
  017d11c  ori 3, 30, 0
  017d120  mtctr 4
  017d124  lis 4, 144
  017d128  lwz 4, 11976(4)
  017d12c  lfs 1, 8(29)
  017d130  addc 4, 4, 3
  017d134  addic 3, 3, 12
  017d138  clrldi 4, 4, 32
  017d13c  stfs 1, 11464(4)
  017d140  bdnz 0x17d124
  017d144  lwz 3, 68(29)
  017d148  rlwinm 3, 3, 0, 28, 28
  017d14c  cmpwi 3, 0
  017d150  bt 2, 0x17d180
  017d154  li 4, 17
  017d158  ori 3, 30, 0
  017d15c  mtctr 4
  017d160  lis 4, 144
  017d164  lwz 4, 11976(4)
  017d168  lfs 1, 8(29)
  017d16c  addc 4, 4, 3
  017d170  addic 3, 3, 204
  017d174  clrldi 4, 4, 32
  017d178  stfs 1, 8200(4)
  017d17c  bdnz 0x17d160
  017d180  lis 3, 116
  017d184  lhz 27, 30(29)
  017d188  lwz 4, 24(29)
  017d18c  lwz 3, -21948(3)
  017d190  cmpw 4, 3
  017d194  bf 2, 0x17d1ac
  017d198  lis 3, 116
  017d19c  lbz 4, 29(29)
  017d1a0  lwz 3, -21940(3)
  017d1a4  cmpw 4, 3
  017d1a8  bt 2, 0x17d268
  017d1ac  lis 3, 144
  017d1b0  li 4, 255
  017d1b4  addic 26, 3, -23532
  017d1b8  lbz 3, 29(29)
  017d1bc  slwi 7, 3, 1
  017d1c0  li 3, 255
  017d1c4  lwz 25, 36(26)
  017d1c8  subc 5, 3, 7
  017d1cc  subc 3, 4, 7
  017d1d0  li 4, 1
  017d1d4  sradi 6, 3, 63
  017d1d8  li 3, 0
  017d1dc  and 8, 6, 5
  017d1e0  li 5, 2
  017d1e4  li 6, 1
  017d1e8  addc 7, 7, 8
  017d1ec  bl 0x502ea8
  017d1f0  nop
  017d1f4  ori 4, 3, 0
  017d1f8  ori 3, 25, 0
  017d1fc  bl 0x4d5fe4
  017d200  nop
  017d204  lis 3, 161
  017d208  lwz 26, 36(26)
  017d20c  addic 4, 3, 24396
  017d210  lwz 3, 24(29)
  017d214  extsw 3, 3
  017d218  lwz 25, 28(4)
  017d21c  bl 0x685c4
  017d220  nop
  017d224  sldi 4, 3, 5
  017d228  sldi 3, 3, 2
  017d22c  li 6, 1
  017d230  addc 5, 4, 3
  017d234  li 4, 0
  017d238  addc 5, 25, 5
  017d23c  ori 3, 26, 0
  017d240  clrldi 5, 5, 32
  017d244  li 7, 1
  017d248  bl 0x4d676c
  017d24c  nop
  017d250  lis 4, 116
  017d254  lwz 3, 24(29)
  017d258  lis 5, 116
  017d25c  stw 3, -21948(4)
  017d260  lbz 3, 29(29)
  017d264  stw 3, -21940(5)
  017d268  ori 26, 30, 0
  017d26c  clrlwi 3, 27, 31
  017d270  cmpwi 3, 0
  017d274  bt 2, 0x17d284
  017d278  ori 3, 29, 0
  017d27c  ori 4, 26, 0
  017d280  bl 0x17c750
  017d284  addic 26, 26, 1
  017d288  srawi 27, 27, 1
  017d28c  extsw 26, 26
  017d290  cmpwi 26, 16
  017d294  bt 0, 0x17d26c
  017d298  lis 3, 116
  017d29c  lhz 27, 30(29)
  017d2a0  lwz 4, 20(29)
  017d2a4  lwz 3, -21948(3)
  017d2a8  cmpw 4, 3
  017d2ac  bf 2, 0x17d2c4
  017d2b0  lis 3, 116
  017d2b4  lbz 4, 28(29)
  017d2b8  lwz 3, -21940(3)
  017d2bc  cmpw 4, 3
  017d2c0  bt 2, 0x17d380
  017d2c4  lis 3, 144
  017d2c8  li 4, 255
  017d2cc  addic 26, 3, -23532
  017d2d0  lbz 3, 28(29)
  017d2d4  li 6, 1
  017d2d8  slwi 7, 3, 1
  017d2dc  li 3, 255
  017d2e0  subc 8, 4, 7
  017d2e4  subc 3, 3, 7
  017d2e8  lwz 25, 36(26)
  017d2ec  li 4, 1
  017d2f0  sradi 3, 3, 63
  017d2f4  li 5, 2
  017d2f8  and 8, 3, 8
  017d2fc  li 3, 0
  017d300  addc 7, 7, 8
  017d304  bl 0x502ea8
  017d308  nop
  017d30c  ori 4, 3, 0
  017d310  ori 3, 25, 0
  017d314  bl 0x4d5fe4
  017d318  nop
  017d31c  lis 3, 161
  017d320  lwz 26, 36(26)
  017d324  lwz 4, 20(29)
  017d328  addic 5, 3, 24396
  017d32c  extsw 3, 4
  017d330  lwz 25, 28(5)
  017d334  bl 0x685c4
  017d338  nop
  017d33c  sldi 4, 3, 5
  017d340  sldi 3, 3, 2
  017d344  li 6, 1
  017d348  addc 4, 4, 3
  017d34c  ori 3, 26, 0
  017d350  addc 5, 25, 4
  017d354  li 4, 0
  017d358  clrldi 5, 5, 32
  017d35c  li 7, 1
  017d360  bl 0x4d676c
  017d364  nop
  017d368  lis 3, 116
  017d36c  lwz 4, 20(29)
  017d370  lis 5, 116
  017d374  stw 4, -21948(3)
  017d378  lbz 3, 28(29)
  017d37c  stw 3, -21940(5)
  017d380  ori 26, 30, 0
  017d384  clrlwi 3, 27, 31
  017d388  cmpwi 3, 0
  017d38c  bt 2, 0x17d39c
  017d390  ori 3, 29, 0
  017d394  ori 4, 26, 0
  017d398  bl 0x17c888
  017d39c  addic 26, 26, 1
  017d3a0  srawi 27, 27, 1
  017d3a4  extsw 26, 26
  017d3a8  cmpwi 26, 16
  017d3ac  bt 0, 0x17d384
  017d3b0  addic 28, 28, 1
  017d3b4  addic 29, 29, 4512
  017d3b8  cmpw 28, 31
  017d3bc  bt 0, 0x17d040
  017d3c0  lis 3, 144
  017d3c4  lis 4, 4
  017d3c8  addic 3, 3, -23532
  017d3cc  lis 7, -32762
  017d3d0  ori 4, 4, 800
  017d3d4  ori 7, 7, 32774
  017d3d8  lis 5, 8
  017d3dc  lwz 6, 36(3)
  017d3e0  lis 10, 770
  017d3e4  ori 5, 5, 788
  017d3e8  lwz 8, 8(6)
  017d3ec  addic 9, 8, 8
  017d3f0  stw 9, 8(6)
  017d3f4  lwz 3, 36(3)
  017d3f8  stw 4, 0(8)
  017d3fc  ori 6, 10, 770
  017d400  stw 7, 4(8)
  017d404  lis 4, 771
  017d408  ori 4, 4, 771
  017d40c  lwz 7, 8(3)
  017d410  addic 8, 7, 12
  017d414  stw 5, 0(7)
  017d418  stw 6, 4(7)
  017d41c  stw 4, 8(7)
  017d420  stw 8, 8(3)
  017d424  ld 0, 192(1)
  017d428  mtlr 0
  017d42c  ld 25, 120(1)
  017d430  ld 26, 128(1)
  017d434  ld 27, 136(1)
  017d438  ld 28, 144(1)
  017d43c  ld 29, 152(1)
  017d440  ld 30, 160(1)
  017d444  ld 31, 168(1)
  017d448  addi 1, 1, 176
  017d44c  blr

Sheet_ResetScroll:   # 0x17d450, 0x38 bytes
  017d450  ori 5, 4, 0
  017d454  cmpwi 3, 0
  017d458  li 4, 0
  017d45c  bf 1, 0x17d484
  017d460  stw 4, 64(5)
  017d464  stw 4, 68(5)
  017d468  addic 3, 3, -1
  017d46c  stw 4, 72(5)
  017d470  stw 4, 76(5)
  017d474  cmpwi 3, 0
  017d478  stw 4, 28(5)
  017d47c  addic 5, 5, 96
  017d480  bt 1, 0x17d460
  017d484  blr

CALL_STUB_0017d488:   # 0x17d488, 0x24 bytes
  017d488  stdu 1, -112(1)
  017d48c  mflr 0
  017d490  std 0, 128(1)
  017d494  bl 0x71170
  017d498  nop
  017d49c  ld 0, 128(1)
  017d4a0  mtlr 0
  017d4a4  addi 1, 1, 112
  017d4a8  blr

WaterSheet_DrawAll:   # 0x17d4b8, 0x3b8 bytes
  017d4b8  stdu 1, -208(1)
  017d4bc  mflr 0
  017d4c0  std 0, 224(1)
  017d4c4  stfd 29, 184(1)
  017d4c8  stfd 30, 192(1)
  017d4cc  stfd 31, 200(1)
  017d4d0  std 28, 152(1)
  017d4d4  std 27, 144(1)
  017d4d8  cmpwi 3, 0
  017d4dc  ori 28, 4, 0
  017d4e0  std 31, 176(1)
  017d4e4  li 27, 0
  017d4e8  std 30, 168(1)
  017d4ec  std 29, 160(1)
  017d4f0  std 26, 136(1)
  017d4f4  std 25, 128(1)
  017d4f8  std 24, 120(1)
  017d4fc  ori 31, 3, 0
  017d500  bf 1, 0x17d7d0
  017d504  lis 3, 24
  017d508  lis 30, 161
  017d50c  addi 3, 3, -11092
  017d510  lis 29, 144
  017d514  addic 30, 30, 24396
  017d518  addic 29, 29, -23532
  017d51c  lfs 29, 0(3)
  017d520  lfs 30, 4(3)
  017d524  lfs 31, 8(3)
  017d528  lfs 2, 64(28)
  017d52c  lfs 1, 32(28)
  017d530  lfs 3, 16(28)
  017d534  fmadds 2, 1, 3, 2
  017d538  lfs 1, 68(28)
  017d53c  lfs 4, 36(28)
  017d540  fmadds 1, 4, 3, 1
  017d544  fcmpu 0, 2, 29
  017d548  fcmpu 1, 2, 30
  017d54c  stfs 2, 64(28)
  017d550  fcmpu 6, 1, 29
  017d554  fcmpu 7, 1, 30
  017d558  stfs 1, 68(28)
  017d55c  cror 2, 0, 2
  017d560  bt 2, 0x17d570
  017d564  fsubs 2, 2, 29
  017d568  stfs 2, 64(28)
  017d56c  b 0x17d57c
  017d570  bf 4, 0x17d57c
  017d574  fadds 2, 2, 29
  017d578  stfs 2, 64(28)
  017d57c  bf 25, 0x17d58c
  017d580  fsubs 1, 1, 29
  017d584  stfs 1, 68(28)
  017d588  b 0x17d598
  017d58c  bf 28, 0x17d598
  017d590  fadds 1, 1, 29
  017d594  stfs 1, 68(28)
  017d598  lfs 2, 72(28)
  017d59c  lfs 1, 40(28)
  017d5a0  lfs 3, 20(28)
  017d5a4  fmadds 2, 1, 3, 2
  017d5a8  lfs 1, 76(28)
  017d5ac  lfs 4, 44(28)
  017d5b0  fmadds 1, 4, 3, 1
  017d5b4  fcmpu 0, 2, 29
  017d5b8  fcmpu 1, 2, 30
  017d5bc  stfs 2, 72(28)
  017d5c0  fcmpu 6, 1, 29
  017d5c4  fcmpu 7, 1, 30
  017d5c8  stfs 1, 76(28)
  017d5cc  cror 2, 0, 2
  017d5d0  bt 2, 0x17d5e0
  017d5d4  fsubs 2, 2, 29
  017d5d8  stfs 2, 72(28)
  017d5dc  b 0x17d5ec
  017d5e0  bf 4, 0x17d5ec
  017d5e4  fadds 2, 2, 29
  017d5e8  stfs 2, 72(28)
  017d5ec  bf 25, 0x17d5fc
  017d5f0  fsubs 1, 1, 29
  017d5f4  stfs 1, 76(28)
  017d5f8  b 0x17d608
  017d5fc  bf 28, 0x17d608
  017d600  fadds 1, 1, 29
  017d604  stfs 1, 76(28)
  017d608  lwz 3, 80(28)
  017d60c  lwz 4, 28(28)
  017d610  lwz 5, 8(28)
  017d614  addc 3, 3, 4
  017d618  fmr 1, 31
  017d61c  clrlwi 4, 3, 8
  017d620  ori 3, 5, 0
  017d624  stw 4, 80(28)
  017d628  bl 0x502910
  017d62c  nop
  017d630  cmpwi 3, -1
  017d634  bt 2, 0x17d7c0
  017d638  lis 3, 144
  017d63c  lwz 4, 12(28)
  017d640  li 5, 16
  017d644  slwi 4, 4, 5
  017d648  lwz 3, -23488(3)
  017d64c  extsw 4, 4
  017d650  bl 0x4fe098
  017d654  nop
  017d658  ori 26, 3, 0
  017d65c  ori 3, 28, 0
  017d660  ori 4, 26, 0
  017d664  bl 0xe9f48
  017d668  nop
  017d66c  lbz 3, 60(28)
  017d670  li 4, 255
  017d674  lwz 25, 36(29)
  017d678  li 6, 1
  017d67c  slwi 7, 3, 1
  017d680  li 3, 255
  017d684  subc 5, 4, 7
  017d688  subc 3, 3, 7
  017d68c  li 4, 1
  017d690  sradi 3, 3, 63
  017d694  and 5, 3, 5
  017d698  li 3, 0
  017d69c  addc 7, 7, 5
  017d6a0  li 5, 2
  017d6a4  bl 0x502ea8
  017d6a8  nop
  017d6ac  ori 4, 3, 0
  017d6b0  ori 3, 25, 0
  017d6b4  bl 0x4d5fe4
  017d6b8  nop
  017d6bc  lwz 3, 52(28)
  017d6c0  lwz 25, 36(29)
  017d6c4  extsw 3, 3
  017d6c8  lwz 24, 28(30)
  017d6cc  bl 0x685c4
  017d6d0  nop
  017d6d4  sldi 4, 3, 5
  017d6d8  sldi 3, 3, 2
  017d6dc  li 6, 1
  017d6e0  addc 5, 4, 3
  017d6e4  ori 3, 25, 0
  017d6e8  addc 5, 24, 5
  017d6ec  li 4, 0
  017d6f0  clrldi 5, 5, 32
  017d6f4  li 7, 1
  017d6f8  bl 0x4d676c
  017d6fc  nop
  017d700  lwz 3, 12(28)
  017d704  ori 4, 26, 0
  017d708  extsw 3, 3
  017d70c  li 5, 9
  017d710  bl 0x72ddc
  017d714  nop
  017d718  lbz 3, 61(28)
  017d71c  li 4, 255
  017d720  lwz 25, 36(29)
  017d724  slwi 7, 3, 1
  017d728  li 3, 255
  017d72c  subc 5, 3, 7
  017d730  subc 3, 4, 7
  017d734  li 4, 1
  017d738  sradi 6, 3, 63
  017d73c  li 3, 0
  017d740  and 6, 6, 5
  017d744  li 5, 2
  017d748  addc 7, 7, 6
  017d74c  li 6, 1
  017d750  bl 0x502ea8
  017d754  nop
  017d758  ori 4, 3, 0
  017d75c  ori 3, 25, 0
  017d760  bl 0x4d5fe4
  017d764  nop
  017d768  lwz 3, 56(28)
  017d76c  lwz 25, 36(29)
  017d770  extsw 3, 3
  017d774  lwz 24, 28(30)
  017d778  bl 0x685c4
  017d77c  nop
  017d780  sldi 4, 3, 5
  017d784  sldi 3, 3, 2
  017d788  li 6, 1
  017d78c  addc 4, 4, 3
  017d790  ori 3, 25, 0
  017d794  addc 5, 24, 4
  017d798  li 4, 0
  017d79c  clrldi 5, 5, 32
  017d7a0  li 7, 1
  017d7a4  bl 0x4d676c
  017d7a8  nop
  017d7ac  lwz 3, 12(28)
  017d7b0  ori 4, 26, 0
  017d7b4  extsw 3, 3
  017d7b8  bl 0x72b1c
  017d7bc  nop
  017d7c0  addic 27, 27, 1
  017d7c4  addic 28, 28, 96
  017d7c8  cmpw 27, 31
  017d7cc  bt 0, 0x17d528
  017d7d0  lis 3, 144
  017d7d4  lis 4, 4
  017d7d8  addic 3, 3, -23532
  017d7dc  lis 6, -32762
  017d7e0  ori 4, 4, 800
  017d7e4  ori 6, 6, 32774
  017d7e8  lis 7, 771
  017d7ec  lwz 5, 36(3)
  017d7f0  lis 10, 8
  017d7f4  lwz 8, 8(5)
  017d7f8  addic 9, 8, 8
  017d7fc  stw 9, 8(5)
  017d800  lwz 3, 36(3)
  017d804  stw 4, 0(8)
  017d808  lis 9, 770
  017d80c  ori 4, 7, 771
  017d810  stw 6, 4(8)
  017d814  ori 5, 10, 788
  017d818  ori 6, 9, 770
  017d81c  lwz 7, 8(3)
  017d820  addic 8, 7, 12
  017d824  stw 5, 0(7)
  017d828  stw 6, 4(7)
  017d82c  stw 4, 8(7)
  017d830  stw 8, 8(3)
  017d834  ld 0, 224(1)
  017d838  mtlr 0
  017d83c  lfd 29, 184(1)
  017d840  lfd 30, 192(1)
  017d844  lfd 31, 200(1)
  017d848  ld 24, 120(1)
  017d84c  ld 25, 128(1)
  017d850  ld 26, 136(1)
  017d854  ld 27, 144(1)
  017d858  ld 28, 152(1)
  017d85c  ld 29, 160(1)
  017d860  ld 30, 168(1)
  017d864  ld 31, 176(1)
  017d868  addi 1, 1, 208
  017d86c  blr

STUB_0017d870:   # 0x17d870, 0x4 bytes
  017d870  blr

SubmitOceanCell:   # 0x17d8f8, 0x3a4 bytes
  017d8f8  stdu 1, -2208(1)
  017d8fc  mflr 0
  017d900  std 0, 2224(1)
  017d904  stfd 31, 2200(1)
  017d908  std 29, 2176(1)
  017d90c  ori 29, 3, 0
  017d910  li 4, 8
  017d914  vspltisw 11, 0
  017d918  li 5, 16
  017d91c  lis 3, 24
  017d920  li 10, 16
  017d924  addi 9, 3, -10112
  017d928  lvlx 2, 4, 29
  017d92c  li 7, 144
  017d930  li 4, 20
  017d934  lvlx 3, 5, 29
  017d938  li 5, 128
  017d93c  vspltw 2, 2, 0
  017d940  li 12, 32
  017d944  fmr 31, 3
  017d948  lvx 4, 0, 9
  017d94c  li 3, 112
  017d950  li 11, 120
  017d954  lvlx 5, 4, 29
  017d958  lvx 8, 5, 1
  017d95c  li 4, 0
  017d960  lvx 6, 10, 9
  017d964  addic 5, 1, 160
  017d968  lvx 7, 7, 1
  017d96c  li 10, 64
  017d970  lvx 9, 12, 9
  017d974  li 7, 48
  017d978  std 30, 2184(1)
  017d97c  lvx 10, 3, 1
  017d980  ori 30, 6, 0
  017d984  std 31, 2192(1)
  017d988  vperm 3, 3, 11, 4
  017d98c  ori 31, 8, 0
  017d990  stvewx 2, 11, 1
  017d994  stfs 2, 2144(1)
  017d998  stfs 2, 116(1)
  017d99c  stfs 2, 2148(1)
  017d9a0  vperm 8, 3, 8, 6
  017d9a4  stfs 2, 2152(1)
  017d9a8  stfs 2, 2156(1)
  017d9ac  lvx 12, 7, 9
  017d9b0  vperm 4, 11, 5, 9
  017d9b4  li 7, 80
  017d9b8  vaddfp 5, 8, 8
  017d9bc  li 0, 2144
  017d9c0  lvx 13, 10, 9
  017d9c4  vperm 4, 4, 7, 6
  017d9c8  lvx 3, 1, 0
  017d9cc  stfs 1, 2144(1)
  017d9d0  li 0, 2144
  017d9d4  stfs 1, 2148(1)
  017d9d8  vperm 9, 3, 2, 12
  017d9dc  stfs 1, 2152(1)
  017d9e0  stfs 1, 2156(1)
  017d9e4  lvx 6, 7, 9
  017d9e8  vperm 9, 9, 10, 13
  017d9ec  vaddfp 3, 5, 8
  017d9f0  std 28, 2168(1)
  017d9f4  vaddfp 2, 5, 5
  017d9f8  lvx 7, 1, 0
  017d9fc  li 7, 2
  017da00  vperm 9, 7, 9, 6
  017da04  ori 6, 5, 0
  017da08  stfs 1, 112(1)
  017da0c  mtctr 7
  017da10  vaddfp 10, 9, 8
  017da14  vaddfp 11, 9, 5
  017da18  addic 7, 6, 16
  017da1c  vaddfp 12, 9, 3
  017da20  addic 8, 6, 32
  017da24  addic 9, 6, 48
  017da28  stvx 9, 0, 5
  017da2c  addic 6, 6, 64
  017da30  vaddfp 9, 9, 2
  017da34  ori 5, 6, 0
  017da38  stvx 10, 0, 7
  017da3c  stvx 11, 0, 8
  017da40  stvx 12, 0, 9
  017da44  bdnz 0x17da10
  017da48  vaddfp 9, 9, 4
  017da4c  addic 4, 4, 1
  017da50  cmpwi 4, 7
  017da54  stvx 9, 3, 1
  017da58  bf 1, 0x17d9fc
  017da5c  lis 3, 144
  017da60  li 4, 3472
  017da64  ori 28, 30, 0
  017da68  li 5, 16
  017da6c  lwz 3, -23488(3)
  017da70  bl 0x4fe098
  017da74  nop
  017da78  lis 4, 24
  017da7c  ori 30, 3, 0
  017da80  addi 4, 4, -10112
  017da84  li 5, 96
  017da88  li 3, 104
  017da8c  li 7, 100
  017da90  li 6, 108
  017da94  li 11, 116
  017da98  lvlx 5, 5, 4
  017da9c  lvlx 7, 3, 4
  017daa0  lis 5, 230
  017daa4  li 3, 112
  017daa8  lvlx 6, 7, 4
  017daac  lvlx 4, 6, 4
  017dab0  ori 10, 30, 0
  017dab4  lis 9, 116
  017dab8  vspltw 5, 5, 0
  017dabc  lis 8, 230
  017dac0  vspltw 7, 7, 0
  017dac4  li 12, 124
  017dac8  vspltw 6, 6, 0
  017dacc  lvlx 3, 3, 4
  017dad0  addic 7, 5, -21804
  017dad4  lvlx 2, 11, 4
  017dad8  addic 9, 9, -19664
  017dadc  addic 8, 8, -21808
  017dae0  vspltw 4, 4, 0
  017dae4  addic 6, 10, 4
  017dae8  vspltw 3, 3, 0
  017daec  addic 5, 10, 8
  017daf0  vspltw 2, 2, 0
  017daf4  addic 4, 28, 16
  017daf8  addic 3, 10, 24
  017dafc  mtctr 12
  017db00  lhz 12, 0(9)
  017db04  addic 11, 1, 160
  017db08  vspltisw 8, -16
  017db0c  extsh 12, 12
  017db10  vspltisw 12, -1
  017db14  sldi 12, 12, 4
  017db18  vspltisw 13, -1
  017db1c  addc 11, 12, 11
  017db20  vslw 12, 12, 12
  017db24  clrldi 11, 11, 32
  017db28  vslw 13, 13, 13
  017db2c  vspltisw 0, -1
  017db30  addic 9, 9, 2
  017db34  lvx 9, 0, 11
  017db38  vspltw 10, 9, 0
  017db3c  vspltw 11, 9, 1
  017db40  vspltw 9, 9, 2
  017db44  vslw 0, 0, 0
  017db48  stvewx 10, 0, 10
  017db4c  stvewx 11, 0, 6
  017db50  stvewx 9, 0, 5
  017db54  lfs 1, 0(8)
  017db58  vspltisw 10, -8
  017db5c  stfs 1, 12(10)
  017db60  lfs 1, 0(7)
  017db64  stfs 31, 20(10)
  017db68  stfs 1, 16(10)
  017db6c  lvlx 9, 0, 4
  017db70  vrlw 8, 9, 8
  017db74  vrlw 10, 9, 10
  017db78  vand 11, 9, 4
  017db7c  vsrw 9, 9, 3
  017db80  vand 8, 8, 4
  017db84  vand 10, 10, 4
  017db88  vcfux 11, 11, 0
  017db8c  vcfux 9, 9, 0
  017db90  vcfux 8, 8, 0
  017db94  vcfux 10, 10, 0
  017db98  addic 6, 6, 28
  017db9c  addic 5, 5, 28
  017dba0  addic 10, 10, 28
  017dba4  addic 8, 8, 8
  017dba8  addic 7, 7, 8
  017dbac  addic 4, 4, 4
  017dbb0  vmaddfp 11, 11, 5, 0
  017dbb4  vaddfp 9, 9, 7
  017dbb8  vmaddfp 8, 8, 5, 12
  017dbbc  vmaddfp 10, 10, 5, 13
  017dbc0  vcmpgtfp 0, 11, 6
  017dbc4  vcmpgtfp 12, 8, 6
  017dbc8  vsel 11, 11, 6, 0
  017dbcc  vcmpgtfp 13, 10, 6
  017dbd0  vsel 8, 8, 6, 12
  017dbd4  vsel 10, 10, 6, 13
  017dbd8  vaddfp 11, 11, 7
  017dbdc  vspltisw 12, 8
  017dbe0  vaddfp 8, 8, 7
  017dbe4  vaddfp 10, 10, 7
  017dbe8  vcmpgtfp 0, 11, 6
  017dbec  vcmpgtfp 13, 8, 6
  017dbf0  vsel 11, 11, 6, 0
  017dbf4  vsel 8, 8, 6, 13
  017dbf8  vcmpgtfp 13, 10, 6
  017dbfc  vctsxs 11, 11, 0
  017dc00  vsel 10, 10, 6, 13
  017dc04  vcmpgtfp 13, 9, 6
  017dc08  vctsxs 8, 8, 0
  017dc0c  vsel 9, 9, 6, 13
  017dc10  vctsxs 10, 10, 0
  017dc14  vctsxs 9, 9, 0
  017dc18  vslw 11, 11, 3
  017dc1c  vslw 8, 8, 12
  017dc20  vslw 10, 10, 2
  017dc24  vor 8, 9, 8
  017dc28  vor 8, 8, 10
  017dc2c  vor 8, 8, 11
  017dc30  vor 8, 8, 4
  017dc34  vspltw 8, 8, 0
  017dc38  stvewx 8, 0, 3
  017dc3c  addic 3, 3, 28
  017dc40  bdnz 0x17db00
  017dc44  li 3, 124
  017dc48  ori 4, 30, 0
  017dc4c  ori 5, 31, 0
  017dc50  bl 0x74780
  017dc54  nop
  017dc58  lbz 3, 63(29)
  017dc5c  cmpwi 3, 128
  017dc60  bf 2, 0x17dc78
  017dc64  li 3, 124
  017dc68  ori 4, 30, 0
  017dc6c  li 5, 0
  017dc70  bl 0x74780
  017dc74  nop
  017dc78  ld 0, 2224(1)
  017dc7c  mtlr 0
  017dc80  lfd 31, 2200(1)
  017dc84  ld 28, 2168(1)
  017dc88  ld 29, 2176(1)
  017dc8c  ld 30, 2184(1)
  017dc90  ld 31, 2192(1)
  017dc94  addi 1, 1, 2208
  017dc98  blr

OceanPass:   # 0x17dd20, 0x5fc bytes
  017dd20  stdu 1, -400(1)
  017dd24  mflr 0
  017dd28  std 0, 416(1)
  017dd2c  stfd 26, 352(1)
  017dd30  stfd 27, 360(1)
  017dd34  stfd 28, 368(1)
  017dd38  stfd 29, 376(1)
  017dd3c  stfd 30, 384(1)
  017dd40  stfd 31, 392(1)
  017dd44  std 31, 344(1)
  017dd48  addi 0, 1, 176
  017dd4c  stvx 27, 0, 0
  017dd50  addic 0, 0, 16
  017dd54  stvx 28, 0, 0
  017dd58  addic 0, 0, 16
  017dd5c  stvx 29, 0, 0
  017dd60  addic 0, 0, 16
  017dd64  stvx 30, 0, 0
  017dd68  addic 0, 0, 16
  017dd6c  stvx 31, 0, 0
  017dd70  std 29, 328(1)
  017dd74  ori 31, 3, 0
  017dd78  std 21, 264(1)
  017dd7c  lis 29, 144
  017dd80  li 21, 0
  017dd84  addic 29, 29, -23532
  017dd88  lbz 3, 63(31)
  017dd8c  std 30, 336(1)
  017dd90  std 28, 320(1)
  017dd94  std 27, 312(1)
  017dd98  std 26, 304(1)
  017dd9c  std 25, 296(1)
  017dda0  std 24, 288(1)
  017dda4  std 23, 280(1)
  017dda8  std 22, 272(1)
  017ddac  std 20, 256(1)
  017ddb0  cmpwi 3, 128
  017ddb4  bf 2, 0x17de2c
  017ddb8  lis 28, 144
  017ddbc  li 4, 0
  017ddc0  li 30, 2
  017ddc4  lwz 3, -23532(28)
  017ddc8  bl 0x4d5fe4
  017ddcc  nop
  017ddd0  lwz 3, -23532(28)
  017ddd4  lis 4, 4
  017ddd8  ori 28, 4, 772
  017dddc  li 4, 0
  017dde0  lwz 5, 8(3)
  017dde4  stw 28, 0(5)
  017dde8  lwz 5, 8(3)
  017ddec  stw 21, 4(5)
  017ddf0  lwz 5, 8(3)
  017ddf4  addic 5, 5, 8
  017ddf8  stw 5, 8(3)
  017ddfc  lwz 3, 8(29)
  017de00  bl 0x4d5fe4
  017de04  nop
  017de08  lwz 3, 8(29)
  017de0c  lwz 4, 8(3)
  017de10  stw 28, 0(4)
  017de14  lwz 4, 8(3)
  017de18  stw 21, 4(4)
  017de1c  lwz 4, 8(3)
  017de20  addic 4, 4, 8
  017de24  stw 4, 8(3)
  017de28  b 0x17decc
  017de2c  lis 4, 151
  017de30  lwz 4, -25488(4)
  017de34  cmpwi 4, 3
  017de38  bf 2, 0x17de88
  017de3c  lis 3, 24
  017de40  li 30, 1
  017de44  addi 3, 3, -9056
  017de48  ld 5, 0(3)
  017de4c  lwz 3, 4(29)
  017de50  ori 4, 5, 0
  017de54  bl 0x4d5fe4
  017de58  nop
  017de5c  lwz 3, 4(29)
  017de60  lis 4, 4
  017de64  ori 4, 4, 772
  017de68  lwz 5, 8(3)
  017de6c  stw 4, 0(5)
  017de70  lwz 4, 8(3)
  017de74  stw 21, 4(4)
  017de78  lwz 4, 8(3)
  017de7c  addic 4, 4, 8
  017de80  stw 4, 8(3)
  017de84  b 0x17decc
  017de88  sldi 3, 3, 1
  017de8c  li 30, 2
  017de90  sldi 4, 3, 32
  017de94  lwz 3, 8(29)
  017de98  ori 4, 4, 100
  017de9c  bl 0x4d5fe4
  017dea0  nop
  017dea4  lwz 3, 8(29)
  017dea8  lis 4, 4
  017deac  ori 4, 4, 772
  017deb0  lwz 5, 8(3)
  017deb4  stw 4, 0(5)
  017deb8  lwz 4, 8(3)
  017debc  stw 21, 4(4)
  017dec0  lwz 4, 8(3)
  017dec4  addic 4, 4, 8
  017dec8  stw 4, 8(3)
  017decc  slwi 24, 30, 2
  017ded0  lis 4, 101
  017ded4  addic 4, 4, 16676
  017ded8  lwzx 3, 29, 24
  017dedc  bl 0x50eaf8
  017dee0  nop
  017dee4  lis 3, 161
  017dee8  lbz 4, 51(31)
  017deec  lis 20, 144
  017def0  lwz 3, 1808(3)
  017def4  extsw 5, 3
  017def8  divw 3, 3, 4
  017defc  std 5, 160(1)
  017df00  clrldi 5, 4, 32
  017df04  extsw 8, 3
  017df08  lis 27, 161
  017df0c  addic 27, 27, 24396
  017df10  lfd 1, 160(1)
  017df14  std 5, 160(1)
  017df18  lbz 4, 62(31)
  017df1c  lfd 2, 160(1)
  017df20  fcfid 1, 1
  017df24  fcfid 2, 2
  017df28  addic 5, 3, 1
  017df2c  std 8, 160(1)
  017df30  divw 6, 3, 4
  017df34  frsp 1, 1
  017df38  frsp 2, 2
  017df3c  divw 7, 5, 4
  017df40  fdivs 31, 1, 2
  017df44  mullw 7, 7, 4
  017df48  mullw 4, 6, 4
  017df4c  lhz 6, 60(31)
  017df50  lfd 1, 160(1)
  017df54  subc 3, 3, 4
  017df58  subc 5, 5, 7
  017df5c  lwz 20, 11932(20)
  017df60  fcfid 1, 1
  017df64  addc 28, 6, 3
  017df68  addc 4, 6, 5
  017df6c  lwzx 25, 29, 24
  017df70  extsw 28, 28
  017df74  lwz 23, 28(27)
  017df78  extsw 26, 4
  017df7c  ori 3, 28, 0
  017df80  frsp 1, 1
  017df84  fsubs 31, 31, 1
  017df88  bl 0x685c4
  017df8c  nop
  017df90  sldi 4, 3, 5
  017df94  sldi 3, 3, 2
  017df98  li 6, 1
  017df9c  addc 5, 4, 3
  017dfa0  ori 3, 25, 0
  017dfa4  addc 5, 23, 5
  017dfa8  li 4, 0
  017dfac  clrldi 5, 5, 32
  017dfb0  li 7, 1
  017dfb4  bl 0x4d676c
  017dfb8  nop
  017dfbc  ori 3, 26, 0
  017dfc0  lwzx 25, 29, 24
  017dfc4  lwz 26, 28(27)
  017dfc8  bl 0x685c4
  017dfcc  nop
  017dfd0  sldi 4, 3, 5
  017dfd4  sldi 3, 3, 2
  017dfd8  li 6, 1
  017dfdc  addc 5, 4, 3
  017dfe0  ori 3, 25, 0
  017dfe4  addc 5, 26, 5
  017dfe8  li 4, 1
  017dfec  clrldi 5, 5, 32
  017dff0  li 7, 1
  017dff4  bl 0x4d676c
  017dff8  nop
  017dffc  lbz 3, 63(31)
  017e000  cmpwi 3, 128
  017e004  bf 2, 0x17e04c
  017e008  lis 4, 144
  017e00c  ori 3, 28, 0
  017e010  lwz 28, -23532(4)
  017e014  lwz 27, 28(27)
  017e018  bl 0x685c4
  017e01c  nop
  017e020  sldi 4, 3, 5
  017e024  sldi 3, 3, 2
  017e028  li 6, 1
  017e02c  addc 4, 4, 3
  017e030  ori 3, 28, 0
  017e034  addc 5, 27, 4
  017e038  li 4, 0
  017e03c  clrldi 5, 5, 32
  017e040  li 7, 1
  017e044  bl 0x4d676c
  017e048  nop
  017e04c  lwzx 3, 29, 24
  017e050  bl 0x4d6948
  017e054  nop
  017e058  lis 3, 24
  017e05c  lfs 1, 20(31)
  017e060  lfs 2, 16(31)
  017e064  addi 4, 3, -9056
  017e068  li 3, 8
  017e06c  vspltisw 2, -1
  017e070  li 5, 20
  017e074  li 6, 16
  017e078  lfs 26, 8(4)
  017e07c  lfs 30, 12(31)
  017e080  fmuls 1, 1, 26
  017e084  fmuls 2, 2, 26
  017e088  lvlx 3, 3, 4
  017e08c  vslw 2, 2, 2
  017e090  vspltw 5, 3, 0
  017e094  li 3, 4
  017e098  vspltisw 3, -1
  017e09c  lvlx 29, 5, 31
  017e0a0  lfs 3, 12(4)
  017e0a4  li 5, 8
  017e0a8  vmaddfp 29, 29, 5, 2
  017e0ac  vslw 2, 3, 3
  017e0b0  lvlx 4, 6, 31
  017e0b4  fsub 4, 1, 2
  017e0b8  lwz 28, 52(31)
  017e0bc  li 6, 16
  017e0c0  lwz 27, 56(31)
  017e0c4  lfs 28, 4(31)
  017e0c8  vmaddfp 5, 4, 5, 2
  017e0cc  lhz 7, 26(31)
  017e0d0  lvlx 2, 3, 31
  017e0d4  lvlx 3, 5, 31
  017e0d8  lhz 3, 24(31)
  017e0dc  extsh 5, 7
  017e0e0  lvlx 6, 6, 4
  017e0e4  fsel 1, 4, 1, 2
  017e0e8  vspltw 6, 6, 0
  017e0ec  cmpwi 5, 0
  017e0f0  vmaddfp 2, 29, 6, 2
  017e0f4  fmuls 1, 1, 1
  017e0f8  fmuls 29, 1, 3
  017e0fc  fsqrts 29, 29
  017e100  bf 1, 0x17e28c
  017e104  lis 5, 24
  017e108  li 4, 112
  017e10c  vspltw 6, 3, 0
  017e110  addi 5, 5, -9056
  017e114  vspltw 7, 2, 0
  017e118  li 7, 20
  017e11c  li 6, 120
  017e120  li 8, 116
  017e124  lvx 8, 4, 1
  017e128  li 9, 144
  017e12c  lvlx 30, 7, 5
  017e130  stvewx 6, 6, 1
  017e134  li 7, 64
  017e138  li 6, 32
  017e13c  stvewx 7, 8, 1
  017e140  li 8, 48
  017e144  vspltisw 7, 0
  017e148  li 10, 96
  017e14c  vspltw 30, 30, 0
  017e150  li 4, 128
  017e154  li 11, 112
  017e158  lvx 6, 6, 5
  017e15c  ori 26, 21, 0
  017e160  li 6, 80
  017e164  vperm 2, 2, 3, 6
  017e168  lvx 3, 7, 5
  017e16c  addic 20, 20, 800
  017e170  lvx 6, 8, 5
  017e174  lvx 28, 9, 1
  017e178  vperm 3, 5, 7, 3
  017e17c  lvx 5, 10, 5
  017e180  vperm 2, 2, 8, 6
  017e184  vperm 5, 7, 29, 5
  017e188  lvx 27, 6, 5
  017e18c  lvx 6, 4, 1
  017e190  vperm 28, 3, 28, 27
  017e194  lvx 29, 11, 5
  017e198  vperm 27, 5, 6, 27
  017e19c  vspltw 3, 4, 0
  017e1a0  lvlx 5, 0, 31
  017e1a4  li 4, 112
  017e1a8  extsh 5, 3
  017e1ac  lfs 27, 0(31)
  017e1b0  vmaddfp 3, 3, 30, 5
  017e1b4  cmpwi 5, 0
  017e1b8  vspltw 5, 3, 0
  017e1bc  vperm 2, 3, 2, 29
  017e1c0  stvewx 5, 4, 1
  017e1c4  bf 1, 0x17e260
  017e1c8  li 3, 112
  017e1cc  clrldi 23, 27, 32
  017e1d0  clrldi 22, 28, 32
  017e1d4  ori 25, 21, 0
  017e1d8  lvx 31, 3, 1
  017e1dc  lbz 3, 0(27)
  017e1e0  addic 23, 23, 1
  017e1e4  cmpwi 3, 1
  017e1e8  ori 27, 23, 0
  017e1ec  bf 2, 0x17e22c
  017e1f0  ori 3, 20, 0
  017e1f4  fmr 1, 29
  017e1f8  fmr 2, 30
  017e1fc  vsldoi 2, 31, 31, 0
  017e200  bl 0x4ff328
  017e204  nop
  017e208  cmpwi 3, 0
  017e20c  bt 2, 0x17e22c
  017e210  fmr 1, 27
  017e214  ori 3, 31, 0
  017e218  fmr 2, 28
  017e21c  ori 6, 28, 0
  017e220  fmr 3, 31
  017e224  ori 8, 30, 0
  017e228  bl 0x17d8f8
  017e22c  vaddfp 2, 31, 28
  017e230  li 4, 16
  017e234  lhz 3, 24(31)
  017e238  addic 25, 25, 7
  017e23c  lfs 1, 16(31)
  017e240  addic 22, 22, 512
  017e244  ori 28, 22, 0
  017e248  fmadds 27, 1, 26, 27
  017e24c  lvlx 4, 4, 31
  017e250  extsh 4, 3
  017e254  cmpw 25, 4
  017e258  vsldoi 31, 2, 2, 0
  017e25c  bt 0, 0x17e1dc
  017e260  vaddfp 2, 2, 27
  017e264  lfs 1, 20(31)
  017e268  li 4, 112
  017e26c  lhz 5, 26(31)
  017e270  addic 26, 26, 7
  017e274  vspltw 4, 4, 0
  017e278  extsh 5, 5
  017e27c  fmadds 28, 1, 26, 28
  017e280  cmpw 26, 5
  017e284  stvx 2, 4, 1
  017e288  bt 0, 0x17e19c
  017e28c  lwzx 3, 29, 24
  017e290  bl 0x50ec5c
  017e294  nop
  017e298  fmr 1, 31
  017e29c  li 0, 176
  017e2a0  lvx 27, 1, 0
  017e2a4  addic 0, 0, 16
  017e2a8  lvx 28, 1, 0
  017e2ac  addic 0, 0, 16
  017e2b0  lvx 29, 1, 0
  017e2b4  addic 0, 0, 16
  017e2b8  lvx 30, 1, 0
  017e2bc  addic 0, 0, 16
  017e2c0  lvx 31, 1, 0
  017e2c4  ld 0, 416(1)
  017e2c8  mtlr 0
  017e2cc  lfd 26, 352(1)
  017e2d0  lfd 27, 360(1)
  017e2d4  lfd 28, 368(1)
  017e2d8  lfd 29, 376(1)
  017e2dc  lfd 30, 384(1)
  017e2e0  lfd 31, 392(1)
  017e2e4  ld 20, 256(1)
  017e2e8  ld 21, 264(1)
  017e2ec  ld 22, 272(1)
  017e2f0  ld 23, 280(1)
  017e2f4  ld 24, 288(1)
  017e2f8  ld 25, 296(1)
  017e2fc  ld 26, 304(1)
  017e300  ld 27, 312(1)
  017e304  ld 28, 320(1)
  017e308  ld 29, 328(1)
  017e30c  ld 30, 336(1)
  017e310  ld 31, 344(1)
  017e314  addi 1, 1, 400
  017e318  blr

OceanPlane_SetDepth:   # 0x17e31c, 0x4c bytes
  017e31c  li 6, 124
  017e320  stb 5, 63(3)
  017e324  lis 4, 116
  017e328  lis 7, 230
  017e32c  mtctr 6
  017e330  addic 4, 4, -20672
  017e334  addic 6, 7, -21824
  017e338  addic 4, 4, 16
  017e33c  addic 3, 6, 16
  017e340  lfs 2, 0(4)
  017e344  lfs 3, 4(4)
  017e348  fmuls 2, 2, 1
  017e34c  fmuls 3, 3, 1
  017e350  addic 4, 4, 8
  017e354  stfs 2, 0(3)
  017e358  stfs 3, 4(3)
  017e35c  addic 3, 3, 8
  017e360  bdnz 0x17e340
  017e364  blr

OceanPlane_SetDefaultDepth:   # 0x17e368, 0x50 bytes
  017e368  li 4, 128
  017e36c  lis 6, 116
  017e370  lis 7, 230
  017e374  li 5, 124
  017e378  stb 4, 63(3)
  017e37c  addic 6, 6, -20672
  017e380  addic 3, 7, -21824
  017e384  mtctr 5
  017e388  addic 4, 6, 16
  017e38c  addic 3, 3, 16
  017e390  lfs 2, 0(4)
  017e394  lfs 3, 4(4)
  017e398  fmuls 2, 2, 1
  017e39c  addic 4, 4, 8
  017e3a0  fmuls 3, 3, 1
  017e3a4  stfs 2, 0(3)
  017e3a8  stfs 3, 4(3)
  017e3ac  addic 3, 3, 8
  017e3b0  bdnz 0x17e390
  017e3b4  blr

PushOceanFog:   # 0x17e3b8, 0x110 bytes
  017e3b8  stdu 1, -128(1)
  017e3bc  mflr 0
  017e3c0  std 0, 144(1)
  017e3c4  std 31, 120(1)
  017e3c8  ori 31, 3, 0
  017e3cc  lis 3, 150
  017e3d0  lis 4, 230
  017e3d4  addic 3, 3, -12416
  017e3d8  lis 5, 230
  017e3dc  lis 8, 230
  017e3e0  lis 6, 230
  017e3e4  lis 7, 230
  017e3e8  lfs 1, 536(3)
  017e3ec  lfs 2, 540(3)
  017e3f0  lis 9, 230
  017e3f4  stfs 1, -20808(4)
  017e3f8  lis 10, 150
  017e3fc  lfs 1, 552(3)
  017e400  lis 11, 230
  017e404  stfs 2, -20804(5)
  017e408  lfs 2, 556(3)
  017e40c  stfs 1, -20800(8)
  017e410  lwz 4, 560(3)
  017e414  stfs 2, -20796(6)
  017e418  lwz 5, 564(3)
  017e41c  stw 4, -20792(7)
  017e420  lwz 4, 568(3)
  017e424  stw 5, -20788(9)
  017e428  lwz 5, -5616(10)
  017e42c  stw 4, -20784(11)
  017e430  cmpwi 5, 1
  017e434  bt 2, 0x17e488
  017e438  lfs 1, 32(31)
  017e43c  lis 4, 151
  017e440  stfs 1, 536(3)
  017e444  lfs 1, 36(31)
  017e448  stfs 1, 540(3)
  017e44c  lfs 1, 40(31)
  017e450  lwz 4, -25488(4)
  017e454  stfs 1, 552(3)
  017e458  lfs 1, 44(31)
  017e45c  cmpwi 4, 7
  017e460  stfs 1, 556(3)
  017e464  bt 2, 0x17e480
  017e468  lbz 4, 48(31)
  017e46c  stw 4, 560(3)
  017e470  lbz 4, 49(31)
  017e474  stw 4, 564(3)
  017e478  lbz 4, 50(31)
  017e47c  stw 4, 568(3)
  017e480  bl 0x66598
  017e484  nop
  017e488  li 3, 0
  017e48c  li 4, 1
  017e490  lbz 7, 63(31)
  017e494  li 5, 2
  017e498  li 6, 1
  017e49c  bl 0x502ea8
  017e4a0  nop
  017e4a4  ori 4, 3, 0
  017e4a8  li 3, 3
  017e4ac  bl 0x174f80
  017e4b0  nop
  017e4b4  ld 0, 144(1)
  017e4b8  mtlr 0
  017e4bc  ld 31, 120(1)
  017e4c0  addi 1, 1, 128
  017e4c4  blr

PopZoneFog:   # 0x17e4c8, 0x90 bytes
  017e4c8  stdu 1, -112(1)
  017e4cc  mflr 0
  017e4d0  std 0, 128(1)
  017e4d4  lis 3, 150
  017e4d8  lwz 3, -5616(3)
  017e4dc  cmpwi 3, 1
  017e4e0  bt 2, 0x17e548
  017e4e4  lis 3, 230
  017e4e8  lis 4, 150
  017e4ec  lis 6, 230
  017e4f0  lis 5, 230
  017e4f4  lis 7, 230
  017e4f8  lfs 1, -20808(3)
  017e4fc  lis 8, 230
  017e500  addic 3, 4, -12416
  017e504  lis 4, 230
  017e508  lfs 2, -20804(6)
  017e50c  lfs 3, -20796(5)
  017e510  lis 6, 230
  017e514  stfs 1, 536(3)
  017e518  lfs 1, -20800(4)
  017e51c  stfs 2, 540(3)
  017e520  stfs 1, 552(3)
  017e524  lwz 4, -20792(7)
  017e528  stfs 3, 556(3)
  017e52c  lwz 5, -20788(8)
  017e530  stw 4, 560(3)
  017e534  lwz 4, -20784(6)
  017e538  stw 5, 564(3)
  017e53c  stw 4, 568(3)
  017e540  bl 0x66598
  017e544  nop
  017e548  ld 0, 128(1)
  017e54c  mtlr 0
  017e550  addi 1, 1, 112
  017e554  blr

SubmitZone:   # 0x17e558, 0x19c bytes
  017e558  stdu 1, -144(1)
  017e55c  mflr 0
  017e560  std 0, 160(1)
  017e564  stfd 31, 136(1)
  017e568  std 30, 120(1)
  017e56c  lis 30, 150
  017e570  lis 4, 230
  017e574  addic 30, 30, -12416
  017e578  lis 5, 230
  017e57c  lis 7, 230
  017e580  lis 9, 230
  017e584  lis 6, 230
  017e588  lfs 1, 536(30)
  017e58c  lis 8, 230
  017e590  lfs 2, 540(30)
  017e594  lis 10, 230
  017e598  std 31, 128(1)
  017e59c  stfs 1, -20808(4)
  017e5a0  ori 31, 3, 0
  017e5a4  lfs 1, 552(30)
  017e5a8  lis 4, 150
  017e5ac  stfs 2, -20804(5)
  017e5b0  lfs 2, 556(30)
  017e5b4  stfs 1, -20800(7)
  017e5b8  lwz 5, 560(30)
  017e5bc  stfs 2, -20796(9)
  017e5c0  lwz 7, 564(30)
  017e5c4  stw 5, -20792(6)
  017e5c8  lwz 5, 568(30)
  017e5cc  stw 7, -20788(8)
  017e5d0  stw 5, -20784(10)
  017e5d4  lwz 3, -5616(4)
  017e5d8  cmpwi 3, 1
  017e5dc  bt 2, 0x17e630
  017e5e0  lfs 1, 32(31)
  017e5e4  lis 3, 151
  017e5e8  stfs 1, 536(30)
  017e5ec  lfs 1, 36(31)
  017e5f0  stfs 1, 540(30)
  017e5f4  lfs 1, 40(31)
  017e5f8  lwz 3, -25488(3)
  017e5fc  stfs 1, 552(30)
  017e600  lfs 1, 44(31)
  017e604  cmpwi 3, 7
  017e608  stfs 1, 556(30)
  017e60c  bt 2, 0x17e628
  017e610  lbz 3, 48(31)
  017e614  stw 3, 560(30)
  017e618  lbz 3, 49(31)
  017e61c  stw 3, 564(30)
  017e620  lbz 3, 50(31)
  017e624  stw 3, 568(30)
  017e628  bl 0x66598
  017e62c  nop
  017e630  li 3, 0
  017e634  li 4, 1
  017e638  lbz 7, 63(31)
  017e63c  li 5, 2
  017e640  li 6, 1
  017e644  bl 0x502ea8
  017e648  nop
  017e64c  ori 4, 3, 0
  017e650  li 3, 3
  017e654  bl 0x174f80
  017e658  nop
  017e65c  ori 3, 31, 0
  017e660  bl 0x17dd20
  017e664  lis 3, 150
  017e668  fmr 31, 1
  017e66c  lwz 3, -5616(3)
  017e670  cmpwi 3, 1
  017e674  bt 2, 0x17e6d4
  017e678  lis 3, 230
  017e67c  lis 4, 230
  017e680  lis 5, 230
  017e684  lis 7, 230
  017e688  lis 6, 230
  017e68c  lfs 1, -20808(3)
  017e690  lfs 2, -20796(4)
  017e694  lis 3, 230
  017e698  lfs 3, -20804(5)
  017e69c  lis 4, 230
  017e6a0  stfs 1, 536(30)
  017e6a4  lfs 1, -20800(7)
  017e6a8  stfs 3, 540(30)
  017e6ac  stfs 1, 552(30)
  017e6b0  lwz 5, -20792(6)
  017e6b4  stfs 2, 556(30)
  017e6b8  lwz 3, -20788(3)
  017e6bc  stw 5, 560(30)
  017e6c0  lwz 4, -20784(4)
  017e6c4  stw 3, 564(30)
  017e6c8  stw 4, 568(30)
  017e6cc  bl 0x66598
  017e6d0  nop
  017e6d4  fmr 1, 31
  017e6d8  ld 0, 160(1)
  017e6dc  mtlr 0
  017e6e0  lfd 31, 136(1)
  017e6e4  ld 30, 120(1)
  017e6e8  ld 31, 128(1)
  017e6ec  addi 1, 1, 144
  017e6f0  blr

OceanSpecialPass:   # 0x17e700, 0x304 bytes
  017e700  stdu 1, -192(1)
  017e704  mflr 0
  017e708  std 0, 208(1)
  017e70c  stfd 29, 168(1)
  017e710  stfd 30, 176(1)
  017e714  stfd 31, 184(1)
  017e718  std 30, 152(1)
  017e71c  std 28, 136(1)
  017e720  lis 30, 144
  017e724  ori 28, 4, 0
  017e728  std 29, 144(1)
  017e72c  fmr 31, 1
  017e730  addic 29, 30, -23532
  017e734  std 27, 128(1)
  017e738  std 26, 120(1)
  017e73c  lis 4, 101
  017e740  ori 27, 3, 0
  017e744  std 31, 160(1)
  017e748  addic 26, 4, 16684
  017e74c  ori 31, 5, 0
  017e750  lwz 3, 8(29)
  017e754  ori 4, 26, 0
  017e758  bl 0x50eaf8
  017e75c  nop
  017e760  lwz 3, -23532(30)
  017e764  ori 4, 26, 0
  017e768  bl 0x50eaf8
  017e76c  nop
  017e770  lis 30, 150
  017e774  lis 3, 230
  017e778  addic 30, 30, -12416
  017e77c  lis 4, 230
  017e780  lis 6, 230
  017e784  lis 8, 230
  017e788  lis 5, 230
  017e78c  lfs 1, 536(30)
  017e790  lis 7, 230
  017e794  lfs 2, 540(30)
  017e798  lis 9, 230
  017e79c  stfs 1, -20808(3)
  017e7a0  lfs 1, 552(30)
  017e7a4  stfs 2, -20804(4)
  017e7a8  lis 3, 150
  017e7ac  lfs 2, 556(30)
  017e7b0  stfs 1, -20800(6)
  017e7b4  lwz 4, 560(30)
  017e7b8  stfs 2, -20796(8)
  017e7bc  lwz 6, 564(30)
  017e7c0  stw 4, -20792(5)
  017e7c4  lwz 4, 568(30)
  017e7c8  stw 6, -20788(7)
  017e7cc  stw 4, -20784(9)
  017e7d0  lwz 3, -5616(3)
  017e7d4  cmpwi 3, 1
  017e7d8  bt 2, 0x17e81c
  017e7dc  lfs 1, 32(27)
  017e7e0  stfs 1, 536(30)
  017e7e4  lfs 1, 36(27)
  017e7e8  stfs 1, 540(30)
  017e7ec  lfs 1, 40(27)
  017e7f0  stfs 1, 552(30)
  017e7f4  lfs 1, 44(27)
  017e7f8  stfs 1, 556(30)
  017e7fc  lbz 3, 48(27)
  017e800  stw 3, 560(30)
  017e804  lbz 3, 49(27)
  017e808  stw 3, 564(30)
  017e80c  lbz 3, 50(27)
  017e810  stw 3, 568(30)
  017e814  bl 0x66598
  017e818  nop
  017e81c  li 3, 0
  017e820  lbz 7, 63(27)
  017e824  li 4, 1
  017e828  li 5, 2
  017e82c  li 6, 1
  017e830  bl 0x502ea8
  017e834  nop
  017e838  ori 4, 3, 0
  017e83c  li 3, 3
  017e840  bl 0x174f80
  017e844  nop
  017e848  bl 0x71170
  017e84c  nop
  017e850  li 3, 128
  017e854  li 27, 0
  017e858  mtctr 3
  017e85c  lis 3, 144
  017e860  lis 4, -139
  017e864  ori 4, 4, 31886
  017e868  lwz 5, 11976(3)
  017e86c  stwx 4, 5, 27
  017e870  lwz 3, 11976(3)
  017e874  addc 3, 3, 27
  017e878  addic 27, 27, 8
  017e87c  stw 4, 4(3)
  017e880  bdnz 0x17e85c
  017e884  cmpwi 31, 0
  017e888  li 27, 0
  017e88c  bf 1, 0x17e948
  017e890  lis 3, 24
  017e894  addi 3, 3, -6412
  017e898  lfs 29, 0(3)
  017e89c  lfs 30, 4(3)
  017e8a0  ori 3, 28, 0
  017e8a4  fmr 1, 29
  017e8a8  bl 0x502910
  017e8ac  nop
  017e8b0  cmpwi 3, -1
  017e8b4  bt 2, 0x17e938
  017e8b8  lis 3, 144
  017e8bc  lwz 5, 28(28)
  017e8c0  lwz 4, 20(28)
  017e8c4  extsw 5, 5
  017e8c8  lwz 6, 11976(3)
  017e8cc  cmpwi 5, 0
  017e8d0  addic 3, 6, 4096
  017e8d4  bf 1, 0x17e918
  017e8d8  ori 6, 5, 0
  017e8dc  lfs 1, 0(4)
  017e8e0  ori 7, 4, 0
  017e8e4  ori 8, 3, 0
  017e8e8  fmuls 1, 1, 30
  017e8ec  addic 6, 6, -1
  017e8f0  addic 4, 4, 8
  017e8f4  cmpwi 6, 0
  017e8f8  stfs 1, 0(3)
  017e8fc  lfs 1, 4(7)
  017e900  addic 3, 3, 8
  017e904  fmuls 1, 1, 30
  017e908  stfs 1, 4(8)
  017e90c  bt 1, 0x17e8dc
  017e910  lis 3, 144
  017e914  lwz 6, 11976(3)
  017e918  addic 4, 6, 4096
  017e91c  ori 3, 5, 0
  017e920  fmr 1, 31
  017e924  ori 5, 6, 0
  017e928  ori 6, 4, 0
  017e92c  lwz 4, 16(28)
  017e930  bl 0x74be0
  017e934  nop
  017e938  addic 27, 27, 1
  017e93c  addic 28, 28, 32
  017e940  cmpw 27, 31
  017e944  bt 0, 0x17e8a0
  017e948  lis 3, 150
  017e94c  lwz 3, -5616(3)
  017e950  cmpwi 3, 1
  017e954  bt 2, 0x17e9b4
  017e958  lis 3, 230
  017e95c  lis 4, 230
  017e960  lis 6, 230
  017e964  lis 5, 230
  017e968  lis 7, 230
  017e96c  lfs 1, -20808(3)
  017e970  lis 3, 230
  017e974  lfs 2, -20804(4)
  017e978  stfs 1, 536(30)
  017e97c  lfs 1, -20800(6)
  017e980  lis 4, 230
  017e984  stfs 2, 540(30)
  017e988  lfs 2, -20796(3)
  017e98c  stfs 1, 552(30)
  017e990  lwz 3, -20792(5)
  017e994  stfs 2, 556(30)
  017e998  lwz 5, -20788(7)
  017e99c  stw 3, 560(30)
  017e9a0  lwz 3, -20784(4)
  017e9a4  stw 5, 564(30)
  017e9a8  stw 3, 568(30)
  017e9ac  bl 0x66598
  017e9b0  nop
  017e9b4  lwz 3, 8(29)
  017e9b8  bl 0x50ec5c
  017e9bc  nop
  017e9c0  lis 3, 144
  017e9c4  lwz 3, -23532(3)
  017e9c8  bl 0x50ec5c
  017e9cc  nop
  017e9d0  ld 0, 208(1)
  017e9d4  mtlr 0
  017e9d8  lfd 29, 168(1)
  017e9dc  lfd 30, 176(1)
  017e9e0  lfd 31, 184(1)
  017e9e4  ld 26, 120(1)
  017e9e8  ld 27, 128(1)
  017e9ec  ld 28, 136(1)
  017e9f0  ld 29, 144(1)
  017e9f4  ld 30, 152(1)
  017e9f8  ld 31, 160(1)
  017e9fc  addi 1, 1, 192
  017ea00  blr

ScaleWaveTable:   # 0x17ea04, 0x48 bytes
  017ea04  li 4, 124
  017ea08  lis 3, 116
  017ea0c  lis 5, 230
  017ea10  mtctr 4
  017ea14  addic 4, 3, -20672
  017ea18  addic 3, 5, -21824
  017ea1c  addic 4, 4, 16
  017ea20  addic 3, 3, 16
  017ea24  lfs 2, 0(4)
  017ea28  lfs 3, 4(4)
  017ea2c  fmuls 2, 2, 1
  017ea30  addic 4, 4, 8
  017ea34  fmuls 3, 3, 1
  017ea38  stfs 2, 0(3)
  017ea3c  stfs 3, 4(3)
  017ea40  addic 3, 3, 8
  017ea44  bdnz 0x17ea24
  017ea48  blr

SetFogVars:   # 0x17ea4c, 0x124 bytes
  017ea4c  stdu 1, -112(1)
  017ea50  mflr 0
  017ea54  std 0, 128(1)
  017ea58  lis 3, 150
  017ea5c  ori 6, 7, 0
  017ea60  addic 3, 3, -12416
  017ea64  lis 7, 230
  017ea68  ori 4, 9, 0
  017ea6c  lis 9, 230
  017ea70  lis 10, 230
  017ea74  lfs 5, 536(3)
  017ea78  ori 5, 8, 0
  017ea7c  lfs 6, 540(3)
  017ea80  lis 8, 230
  017ea84  lfs 7, 552(3)
  017ea88  lis 11, 230
  017ea8c  stfs 5, -20808(7)
  017ea90  lis 12, 150
  017ea94  lfs 5, 556(3)
  017ea98  lis 7, 230
  017ea9c  stfs 6, -20804(9)
  017eaa0  stfs 7, -20800(10)
  017eaa4  lwz 10, 560(3)
  017eaa8  lis 9, 230
  017eaac  stfs 5, -20796(8)
  017eab0  lwz 8, 564(3)
  017eab4  stw 10, -20792(11)
  017eab8  lwz 10, 568(3)
  017eabc  stw 8, -20788(7)
  017eac0  lwz 7, -5616(12)
  017eac4  stw 10, -20784(9)
  017eac8  cmpwi 7, 1
  017eacc  bt 2, 0x17eb10
  017ead0  lis 7, 151
  017ead4  stfs 1, 536(3)
  017ead8  lwz 7, -25488(7)
  017eadc  stfs 2, 540(3)
  017eae0  cmpwi 7, 7
  017eae4  stfs 3, 552(3)
  017eae8  stfs 4, 556(3)
  017eaec  bt 2, 0x17eb08
  017eaf0  clrlwi 6, 6, 24
  017eaf4  clrlwi 5, 5, 24
  017eaf8  clrlwi 4, 4, 24
  017eafc  stw 6, 560(3)
  017eb00  stw 5, 564(3)
  017eb04  stw 4, 568(3)
  017eb08  bl 0x66598
  017eb0c  nop
  017eb10  li 3, 0
  017eb14  li 4, 1
  017eb18  li 5, 2
  017eb1c  li 6, 1
  017eb20  li 7, 128
  017eb24  bl 0x502ea8
  017eb28  nop
  017eb2c  ori 4, 3, 0
  017eb30  li 3, 3
  017eb34  bl 0x174f80
  017eb38  nop
  017eb3c  lis 4, 144
  017eb40  lis 3, 116
  017eb44  li 5, 248
  017eb48  addic 3, 3, -19664
  017eb4c  lwz 4, 11976(4)
  017eb50  addic 4, 4, 10240
  017eb54  extsw 4, 4
  017eb58  bl 0x500458
  017eb5c  nop
  017eb60  ld 0, 128(1)
  017eb64  mtlr 0
  017eb68  addi 1, 1, 112
  017eb6c  blr

RestoreFogVars:   # 0x17eb70, 0x90 bytes
  017eb70  stdu 1, -112(1)
  017eb74  mflr 0
  017eb78  std 0, 128(1)
  017eb7c  lis 3, 150
  017eb80  lwz 3, -5616(3)
  017eb84  cmpwi 3, 1
  017eb88  bt 2, 0x17ebf0
  017eb8c  lis 3, 230
  017eb90  lis 4, 150
  017eb94  lis 6, 230
  017eb98  lis 5, 230
  017eb9c  lis 7, 230
  017eba0  lfs 1, -20808(3)
  017eba4  lis 8, 230
  017eba8  addic 3, 4, -12416
  017ebac  lis 4, 230
  017ebb0  lfs 2, -20804(6)
  017ebb4  lfs 3, -20796(5)
  017ebb8  lis 6, 230
  017ebbc  stfs 1, 536(3)
  017ebc0  lfs 1, -20800(4)
  017ebc4  stfs 2, 540(3)
  017ebc8  stfs 1, 552(3)
  017ebcc  lwz 4, -20792(7)
  017ebd0  stfs 3, 556(3)
  017ebd4  lwz 5, -20788(8)
  017ebd8  stw 4, 560(3)
  017ebdc  lwz 4, -20784(6)
  017ebe0  stw 5, 564(3)
  017ebe4  stw 4, 568(3)
  017ebe8  bl 0x66598
  017ebec  nop
  017ebf0  ld 0, 128(1)
  017ebf4  mtlr 0
  017ebf8  addi 1, 1, 112
  017ebfc  blr

OceanPass_Thunk:   # 0x17ec00, 0x38 bytes
  017ec00  stdu 1, -128(1)
  017ec04  mflr 0
  017ec08  std 0, 144(1)
  017ec0c  std 31, 120(1)
  017ec10  ori 31, 3, 0
  017ec14  bl 0xea1e8
  017ec18  nop
  017ec1c  ori 3, 31, 0
  017ec20  bl 0x17dd20
  017ec24  ld 0, 144(1)
  017ec28  mtlr 0
  017ec2c  ld 31, 120(1)
  017ec30  addi 1, 1, 128
  017ec34  blr

IcePass:   # 0x17ec40, 0x1d4 bytes
  017ec40  stdu 1, -208(1)
  017ec44  mflr 0
  017ec48  std 0, 224(1)
  017ec4c  stfd 31, 200(1)
  017ec50  std 28, 168(1)
  017ec54  std 31, 192(1)
  017ec58  lis 28, 144
  017ec5c  ori 31, 6, 0
  017ec60  addic 28, 28, -23532
  017ec64  std 27, 160(1)
  017ec68  std 26, 152(1)
  017ec6c  lis 6, 101
  017ec70  ori 27, 3, 0
  017ec74  std 29, 176(1)
  017ec78  addic 26, 6, 16700
  017ec7c  ori 29, 4, 0
  017ec80  std 30, 184(1)
  017ec84  lwz 3, 36(28)
  017ec88  ori 30, 5, 0
  017ec8c  std 25, 144(1)
  017ec90  std 24, 136(1)
  017ec94  std 23, 128(1)
  017ec98  ori 4, 26, 0
  017ec9c  bl 0x50eaf8
  017eca0  nop
  017eca4  lwz 3, 32(28)
  017eca8  ori 4, 26, 0
  017ecac  bl 0x50eaf8
  017ecb0  nop
  017ecb4  bl 0x71170
  017ecb8  nop
  017ecbc  li 3, 0
  017ecc0  li 4, 1
  017ecc4  li 5, 2
  017ecc8  li 6, 1
  017eccc  li 7, 128
  017ecd0  bl 0x502ea8
  017ecd4  nop
  017ecd8  ori 25, 3, 0
  017ecdc  li 3, 0
  017ece0  li 4, 1
  017ece4  li 5, 2
  017ece8  li 6, 1
  017ecec  li 7, 64
  017ecf0  bl 0x502ea8
  017ecf4  nop
  017ecf8  lis 4, 144
  017ecfc  ori 26, 3, 0
  017ed00  li 3, 45
  017ed04  mtctr 3
  017ed08  lwz 3, 11976(4)
  017ed0c  lis 4, -32640
  017ed10  ori 5, 3, 0
  017ed14  ori 4, 4, 32896
  017ed18  stw 4, 0(3)
  017ed1c  stw 4, 4(3)
  017ed20  stw 4, 8(3)
  017ed24  addic 3, 3, 16
  017ed28  stw 4, 12(5)
  017ed2c  bdnz 0x17ed0c
  017ed30  cmpwi 29, 0
  017ed34  li 24, 0
  017ed38  bf 1, 0x17edc4
  017ed3c  lis 3, 24
  017ed40  addi 3, 3, -5064
  017ed44  lfs 31, 0(3)
  017ed48  ori 3, 27, 0
  017ed4c  fmr 1, 31
  017ed50  bl 0x502910
  017ed54  nop
  017ed58  cmpwi 3, -1
  017ed5c  bt 2, 0x17edb4
  017ed60  lis 23, 144
  017ed64  lwz 3, 28(27)
  017ed68  lwz 4, 16(27)
  017ed6c  lwz 5, 24(27)
  017ed70  extsw 3, 3
  017ed74  lwz 6, 11976(23)
  017ed78  addic 6, 6, 4096
  017ed7c  bl 0xea1f8
  017ed80  nop
  017ed84  lwz 3, 28(27)
  017ed88  lwz 4, 16(27)
  017ed8c  ori 9, 31, 0
  017ed90  lwz 5, 11976(23)
  017ed94  ori 8, 30, 0
  017ed98  lwz 6, 20(27)
  017ed9c  extsw 3, 3
  017eda0  ori 10, 25, 0
  017eda4  std 26, 112(1)
  017eda8  addic 7, 5, 4096
  017edac  bl 0x731c8
  017edb0  nop
  017edb4  addic 24, 24, 1
  017edb8  addic 27, 27, 32
  017edbc  cmpw 24, 29
  017edc0  bt 0, 0x17ed48
  017edc4  lwz 3, 36(28)
  017edc8  bl 0x50ec5c
  017edcc  nop
  017edd0  lwz 3, 32(28)
  017edd4  bl 0x50ec5c
  017edd8  nop
  017eddc  ld 0, 224(1)
  017ede0  mtlr 0
  017ede4  lfd 31, 200(1)
  017ede8  ld 23, 128(1)
  017edec  ld 24, 136(1)
  017edf0  ld 25, 144(1)
  017edf4  ld 26, 152(1)
  017edf8  ld 27, 160(1)
  017edfc  ld 28, 168(1)
  017ee00  ld 29, 176(1)
  017ee04  ld 30, 184(1)
  017ee08  ld 31, 192(1)
  017ee0c  addi 1, 1, 208
  017ee10  blr

Water_StaticInitGsPackets:   # 0x17ee14, 0x32c bytes
  017ee14  stdu 1, -128(1)
  017ee18  mflr 0
  017ee1c  std 0, 144(1)
  017ee20  lis 3, 116
  017ee24  lis 7, 1
  017ee28  addic 8, 3, -19260
  017ee2c  li 3, 1
  017ee30  li 4, 1
  017ee34  li 5, 0
  017ee38  li 6, 0
  017ee3c  stw 7, 72(8)
  017ee40  li 7, 0
  017ee44  std 31, 120(1)
  017ee48  li 8, 6
  017ee4c  bl 0x502ea0
  017ee50  nop
  017ee54  lis 31, 116
  017ee58  li 4, 5
  017ee5c  li 10, 2
  017ee60  li 5, 96
  017ee64  li 6, 3
  017ee68  std 3, -22144(31)
  017ee6c  li 7, 0
  017ee70  li 3, 1
  017ee74  li 8, 0
  017ee78  li 9, 1
  017ee7c  bl 0x502f7c
  017ee80  nop
  017ee84  addic 31, 31, -22144
  017ee88  li 4, 5
  017ee8c  li 10, 2
  017ee90  li 5, 96
  017ee94  li 6, 3
  017ee98  std 3, 16(31)
  017ee9c  li 7, 0
  017eea0  li 3, 1
  017eea4  li 8, 0
  017eea8  li 9, 1
  017eeac  bl 0x502f7c
  017eeb0  nop
  017eeb4  std 3, 32(31)
  017eeb8  li 3, 0
  017eebc  li 4, 0
  017eec0  li 5, 0
  017eec4  li 6, 0
  017eec8  li 7, 0
  017eecc  li 8, 0
  017eed0  bl 0x502f08
  017eed4  nop
  017eed8  std 3, 48(31)
  017eedc  li 4, 0
  017eee0  li 3, 0
  017eee4  li 5, 0
  017eee8  li 6, 0
  017eeec  li 7, 0
  017eef0  li 8, 0
  017eef4  bl 0x502f08
  017eef8  nop
  017eefc  std 3, 64(31)
  017ef00  li 3, 0
  017ef04  lis 9, 0
  017ef08  li 4, 0
  017ef0c  li 5, 1
  017ef10  li 6, 1
  017ef14  li 7, 1
  017ef18  li 8, 0
  017ef1c  ori 9, 9, 65424
  017ef20  bl 0x502fd4
  017ef24  nop
  017ef28  std 3, 80(31)
  017ef2c  lis 9, 0
  017ef30  li 3, 0
  017ef34  li 4, 0
  017ef38  li 5, 1
  017ef3c  li 6, 1
  017ef40  li 7, 1
  017ef44  li 8, 0
  017ef48  ori 9, 9, 65424
  017ef4c  bl 0x502fd4
  017ef50  nop
  017ef54  li 4, 4
  017ef58  std 3, 96(31)
  017ef5c  li 5, 0
  017ef60  li 3, 4
  017ef64  bl 0x502e98
  017ef68  nop
  017ef6c  lis 4, 116
  017ef70  addic 31, 4, -21056
  017ef74  stw 3, 8(31)
  017ef78  li 3, 0
  017ef7c  bl 0x5030dc
  017ef80  nop
  017ef84  stw 3, 52(31)
  017ef88  li 3, 1
  017ef8c  li 4, 3
  017ef90  li 5, 0
  017ef94  bl 0x502e98
  017ef98  nop
  017ef9c  stw 3, 72(31)
  017efa0  li 3, 0
  017efa4  bl 0x5030ec
  017efa8  nop
  017efac  lis 4, 116
  017efb0  stw 3, -20960(4)
  017efb4  li 3, 0
  017efb8  bl 0x5030ec
  017efbc  nop
  017efc0  lis 7, 116
  017efc4  li 4, 1
  017efc8  li 5, 0
  017efcc  li 6, 0
  017efd0  li 8, 8
  017efd4  stw 3, -20896(7)
  017efd8  li 7, 0
  017efdc  li 3, 1
  017efe0  bl 0x502ea0
  017efe4  nop
  017efe8  lis 31, 116
  017efec  li 9, 1
  017eff0  li 4, 0
  017eff4  li 10, 2
  017eff8  li 5, 0
  017effc  std 3, -19408(31)
  017f000  li 3, 0
  017f004  li 6, 0
  017f008  li 7, 0
  017f00c  li 8, 0
  017f010  bl 0x502f98
  017f014  nop
  017f018  addic 31, 31, -19408
  017f01c  li 9, 1
  017f020  li 4, 0
  017f024  li 10, 2
  017f028  li 5, 0
  017f02c  std 3, 16(31)
  017f030  li 3, 0
  017f034  li 6, 0
  017f038  li 7, 0
  017f03c  li 8, 0
  017f040  bl 0x502f98
  017f044  nop
  017f048  std 3, 32(31)
  017f04c  lis 9, 0
  017f050  li 3, 0
  017f054  li 4, 0
  017f058  li 5, 1
  017f05c  li 6, 1
  017f060  li 7, 1
  017f064  li 8, 0
  017f068  ori 9, 9, 65424
  017f06c  bl 0x502fd4
  017f070  nop
  017f074  std 3, 48(31)
  017f078  li 3, 0
  017f07c  li 4, 0
  017f080  li 5, 0
  017f084  li 6, 0
  017f088  li 7, 0
  017f08c  li 8, 0
  017f090  bl 0x502f08
  017f094  nop
  017f098  std 3, 64(31)
  017f09c  li 4, 1
  017f0a0  li 3, 0
  017f0a4  li 5, 2
  017f0a8  li 6, 1
  017f0ac  li 7, 128
  017f0b0  bl 0x502ea8
  017f0b4  nop
  017f0b8  std 3, 80(31)
  017f0bc  lis 9, 0
  017f0c0  li 3, 0
  017f0c4  li 4, 0
  017f0c8  li 5, 1
  017f0cc  li 6, 1
  017f0d0  li 7, 1
  017f0d4  li 8, 0
  017f0d8  ori 9, 9, 65424
  017f0dc  bl 0x502fd4
  017f0e0  nop
  017f0e4  std 3, 96(31)
  017f0e8  li 3, 0
  017f0ec  li 4, 0
  017f0f0  li 5, 0
  017f0f4  li 6, 0
  017f0f8  li 7, 0
  017f0fc  li 8, 0
  017f100  bl 0x502f08
  017f104  nop
  017f108  std 3, 112(31)
  017f10c  li 4, 1
  017f110  li 3, 0
  017f114  li 5, 2
  017f118  li 6, 1
  017f11c  li 7, 64
  017f120  bl 0x502ea8
  017f124  nop
  017f128  std 3, 128(31)
  017f12c  ld 0, 144(1)
  017f130  mtlr 0
  017f134  ld 31, 120(1)
  017f138  addi 1, 1, 128
  017f13c  blr

WaterDrift_Set:   # 0x17f148, 0x7c bytes
  017f148  lis 4, 230
  017f14c  ori 5, 3, 0
  017f150  addic 3, 4, -20768
  017f154  cmpwi 5, 0
  017f158  sth 5, 12(3)
  017f15c  bf 2, 0x17f178
  017f160  lis 4, 230
  017f164  li 5, 0
  017f168  stw 5, -20768(4)
  017f16c  stw 5, 16(3)
  017f170  sth 5, 28(3)
  017f174  b 0x17f1c0
  017f178  lis 4, 24
  017f17c  lis 5, 114
  017f180  fabs 3, 2
  017f184  addi 4, 4, -3776
  017f188  lfs 4, 0(4)
  017f18c  lfs 5, -3052(5)
  017f190  fmuls 4, 5, 4
  017f194  lis 4, 230
  017f198  stfs 1, 4(3)
  017f19c  sth 6, 28(3)
  017f1a0  li 5, 0
  017f1a4  stfs 1, -20768(4)
  017f1a8  sth 5, 14(3)
  017f1ac  fdivs 5, 4, 3
  017f1b0  fsub 1, 4, 3
  017f1b4  fsel 1, 1, 2, 5
  017f1b8  stfs 1, 16(3)
  017f1bc  stfs 1, 20(3)
  017f1c0  blr

WaterDrift_Update:   # 0x17f210, 0x5b0 bytes
  017f210  stdu 1, -160(1)
  017f214  mflr 0
  017f218  std 0, 176(1)
  017f21c  stfd 28, 128(1)
  017f220  stfd 29, 136(1)
  017f224  stfd 30, 144(1)
  017f228  stfd 31, 152(1)
  017f22c  std 31, 120(1)
  017f230  lis 31, 230
  017f234  addic 31, 31, -20768
  017f238  lhz 3, 12(31)
  017f23c  extsh 3, 3
  017f240  cmpwi 3, 1
  017f244  cmpwi 1, 3, 2
  017f248  std 30, 112(1)
  017f24c  cmpwi 6, 3, 3
  017f250  bf 1, 0x17f798
  017f254  bf 5, 0x17f260
  017f258  bf 25, 0x17f42c
  017f25c  b 0x17f798
  017f260  lhz 3, 14(31)
  017f264  extsh 3, 3
  017f268  cmpwi 3, 0
  017f26c  cmpwi 1, 3, -1
  017f270  cmpwi 6, 3, 1
  017f274  bt 1, 0x17f280
  017f278  bf 5, 0x17f798
  017f27c  b 0x17f288
  017f280  bf 25, 0x17f35c
  017f284  b 0x17f798
  017f288  addic 3, 31, 30
  017f28c  bl 0x4fffb4
  017f290  nop
  017f294  cmpwi 3, 0
  017f298  bt 2, 0x17f798
  017f29c  lhz 3, 28(31)
  017f2a0  extsh 3, 3
  017f2a4  bl 0x502730
  017f2a8  nop
  017f2ac  lis 3, 24
  017f2b0  fmr 31, 1
  017f2b4  addi 30, 3, -3644
  017f2b8  lfs 30, 0(30)
  017f2bc  lfs 29, 4(30)
  017f2c0  fmr 1, 30
  017f2c4  fmr 2, 29
  017f2c8  bl 0xfcbe8
  017f2cc  nop
  017f2d0  lis 3, 230
  017f2d4  fmuls 31, 31, 1
  017f2d8  lfs 1, 8(30)
  017f2dc  lfs 2, 12(30)
  017f2e0  lfs 28, -20768(3)
  017f2e4  bl 0xfcbe8
  017f2e8  nop
  017f2ec  fmr 2, 1
  017f2f0  fmr 1, 28
  017f2f4  bl 0x502578
  017f2f8  nop
  017f2fc  lfs 2, 16(31)
  017f300  fmr 28, 1
  017f304  fmuls 1, 2, 30
  017f308  fmuls 2, 2, 29
  017f30c  bl 0xfcbe8
  017f310  nop
  017f314  fmr 30, 1
  017f318  lfs 2, 4(31)
  017f31c  fmr 1, 28
  017f320  bl 0x5025e0
  017f324  nop
  017f328  lfs 2, 20(31)
  017f32c  fdivs 3, 1, 31
  017f330  fsubs 2, 30, 2
  017f334  fmr 1, 31
  017f338  fdivs 2, 2, 31
  017f33c  stfs 3, 8(31)
  017f340  stfs 2, 24(31)
  017f344  bl 0x502758
  017f348  nop
  017f34c  sth 3, 30(31)
  017f350  li 3, 1
  017f354  sth 3, 14(31)
  017f358  b 0x17f798
  017f35c  addic 3, 31, 30
  017f360  bl 0x4fffb4
  017f364  nop
  017f368  cmpwi 3, 0
  017f36c  bt 2, 0x17f3b8
  017f370  lhz 3, 28(31)
  017f374  extsh 3, 3
  017f378  bl 0x502730
  017f37c  nop
  017f380  fmr 31, 1
  017f384  lis 3, 24
  017f388  addi 3, 3, -3644
  017f38c  lfs 1, 16(3)
  017f390  lfs 2, 20(3)
  017f394  bl 0xfcbe8
  017f398  nop
  017f39c  fmuls 1, 31, 1
  017f3a0  bl 0x502758
  017f3a4  nop
  017f3a8  sth 3, 30(31)
  017f3ac  li 3, 0
  017f3b0  sth 3, 14(31)
  017f3b4  b 0x17f798
  017f3b8  lfs 1, 4(31)
  017f3bc  lfs 2, 8(31)
  017f3c0  bl 0x502578
  017f3c4  nop
  017f3c8  lfs 2, 20(31)
  017f3cc  lis 3, 24
  017f3d0  lfs 3, 24(31)
  017f3d4  lis 4, 114
  017f3d8  addi 3, 3, -3644
  017f3dc  stfs 1, 4(31)
  017f3e0  fadds 2, 2, 3
  017f3e4  lfs 1, -3052(4)
  017f3e8  fabs 4, 2
  017f3ec  stfs 2, 20(31)
  017f3f0  lfs 3, 24(3)
  017f3f4  fmuls 1, 1, 3
  017f3f8  fcmpu 0, 4, 1
  017f3fc  cror 6, 0, 2
  017f400  bt 6, 0x17f798
  017f404  lis 3, 24
  017f408  addi 3, 3, -3644
  017f40c  lfs 3, 28(3)
  017f410  lfs 4, 32(3)
  017f414  fsub 2, 2, 3
  017f418  lfs 5, 36(3)
  017f41c  fsel 2, 2, 5, 4
  017f420  fmuls 1, 1, 2
  017f424  stfs 1, 20(31)
  017f428  b 0x17f798
  017f42c  lhz 3, 14(31)
  017f430  extsh 3, 3
  017f434  cmpwi 3, 1
  017f438  cmpwi 1, 3, -1
  017f43c  cmpwi 6, 3, 0
  017f440  cmpwi 7, 3, 2
  017f444  bt 1, 0x17f454
  017f448  bf 5, 0x17f798
  017f44c  bf 25, 0x17f464
  017f450  b 0x17f530
  017f454  bf 29, 0x17f600
  017f458  cmpwi 3, 3
  017f45c  bf 1, 0x17f6cc
  017f460  b 0x17f798
  017f464  addic 3, 31, 30
  017f468  bl 0x4fffb4
  017f46c  nop
  017f470  cmpwi 3, 0
  017f474  bt 2, 0x17f798
  017f478  lis 3, 24
  017f47c  addi 30, 3, -3644
  017f480  lfs 1, 40(30)
  017f484  lfs 2, 44(30)
  017f488  bl 0xfcbe8
  017f48c  nop
  017f490  lis 3, 114
  017f494  lfs 3, 48(30)
  017f498  lfs 2, 52(30)
  017f49c  lis 4, 230
  017f4a0  lfs 4, -3056(3)
  017f4a4  lfs 31, -20768(4)
  017f4a8  fmuls 30, 1, 4
  017f4ac  fmr 1, 3
  017f4b0  bl 0xfcbe8
  017f4b4  nop
  017f4b8  fmr 2, 1
  017f4bc  fmr 1, 31
  017f4c0  bl 0x502578
  017f4c4  nop
  017f4c8  fmr 31, 1
  017f4cc  lfs 1, 4(30)
  017f4d0  lfs 3, 16(30)
  017f4d4  lfs 2, 16(31)
  017f4d8  fmuls 1, 2, 1
  017f4dc  fmuls 2, 2, 3
  017f4e0  bl 0xfcbe8
  017f4e4  nop
  017f4e8  fmr 29, 1
  017f4ec  lfs 2, 4(31)
  017f4f0  fmr 1, 31
  017f4f4  bl 0x5025e0
  017f4f8  nop
  017f4fc  lfs 2, 20(31)
  017f500  fdivs 3, 1, 30
  017f504  fsubs 2, 29, 2
  017f508  fmr 1, 30
  017f50c  fdivs 2, 2, 30
  017f510  stfs 3, 8(31)
  017f514  stfs 2, 24(31)
  017f518  bl 0x502758
  017f51c  nop
  017f520  sth 3, 30(31)
  017f524  li 3, 1
  017f528  sth 3, 14(31)
  017f52c  b 0x17f798
  017f530  addic 3, 31, 30
  017f534  bl 0x4fffb4
  017f538  nop
  017f53c  cmpwi 3, 0
  017f540  bt 2, 0x17f58c
  017f544  lhz 3, 28(31)
  017f548  extsh 3, 3
  017f54c  bl 0x502730
  017f550  nop
  017f554  fmr 31, 1
  017f558  lis 3, 24
  017f55c  addi 3, 3, -3644
  017f560  lfs 1, 36(3)
  017f564  lfs 2, 4(3)
  017f568  bl 0xfcbe8
  017f56c  nop
  017f570  fmuls 1, 31, 1
  017f574  bl 0x502758
  017f578  nop
  017f57c  li 4, 2
  017f580  sth 3, 30(31)
  017f584  sth 4, 14(31)
  017f588  b 0x17f798
  017f58c  lfs 1, 4(31)
  017f590  lfs 2, 8(31)
  017f594  bl 0x502578
  017f598  nop
  017f59c  lfs 2, 20(31)
  017f5a0  lfs 3, 24(31)
  017f5a4  lis 3, 24
  017f5a8  lis 4, 114
  017f5ac  stfs 1, 4(31)
  017f5b0  fadds 2, 2, 3
  017f5b4  addi 3, 3, -3644
  017f5b8  lfs 1, -3052(4)
  017f5bc  fabs 4, 2
  017f5c0  stfs 2, 20(31)
  017f5c4  lfs 3, 24(3)
  017f5c8  fmuls 1, 1, 3
  017f5cc  fcmpu 0, 4, 1
  017f5d0  cror 6, 0, 2
  017f5d4  bt 6, 0x17f798
  017f5d8  lis 3, 24
  017f5dc  addi 3, 3, -3644
  017f5e0  lfs 3, 28(3)
  017f5e4  lfs 4, 32(3)
  017f5e8  fsub 2, 2, 3
  017f5ec  lfs 5, 36(3)
  017f5f0  fsel 2, 2, 5, 4
  017f5f4  fmuls 1, 1, 2
  017f5f8  stfs 1, 20(31)
  017f5fc  b 0x17f798
  017f600  addic 3, 31, 30
  017f604  bl 0x4fffb4
  017f608  nop
  017f60c  cmpwi 3, 0
  017f610  bt 2, 0x17f798
  017f614  lis 3, 24
  017f618  addi 30, 3, -3644
  017f61c  lfs 1, 40(30)
  017f620  lfs 2, 44(30)
  017f624  bl 0xfcbe8
  017f628  nop
  017f62c  lis 3, 114
  017f630  lfs 3, 56(30)
  017f634  lis 4, 230
  017f638  lfs 2, 60(30)
  017f63c  lfs 4, -3056(3)
  017f640  lfs 31, -20768(4)
  017f644  fmuls 30, 1, 4
  017f648  fmr 1, 3
  017f64c  bl 0xfcbe8
  017f650  nop
  017f654  fmr 2, 1
  017f658  fmr 1, 31
  017f65c  bl 0x502578
  017f660  nop
  017f664  lfs 2, 64(30)
  017f668  lfs 3, 68(30)
  017f66c  fmr 31, 1
  017f670  lfs 4, 16(31)
  017f674  fmuls 1, 4, 2
  017f678  fmuls 2, 4, 3
  017f67c  bl 0xfcbe8
  017f680  nop
  017f684  fmr 29, 1
  017f688  fmr 1, 31
  017f68c  lfs 2, 4(31)
  017f690  bl 0x5025e0
  017f694  nop
  017f698  lfs 2, 20(31)
  017f69c  fdivs 3, 1, 30
  017f6a0  fsubs 1, 29, 2
  017f6a4  fdivs 2, 1, 30
  017f6a8  fmr 1, 30
  017f6ac  stfs 3, 8(31)
  017f6b0  stfs 2, 24(31)
  017f6b4  bl 0x502758
  017f6b8  nop
  017f6bc  li 4, 3
  017f6c0  sth 3, 30(31)
  017f6c4  sth 4, 14(31)
  017f6c8  b 0x17f798
  017f6cc  addic 3, 31, 30
  017f6d0  bl 0x4fffb4
  017f6d4  nop
  017f6d8  cmpwi 3, 0
  017f6dc  bt 2, 0x17f728
  017f6e0  lhz 3, 28(31)
  017f6e4  extsh 3, 3
  017f6e8  bl 0x502730
  017f6ec  nop
  017f6f0  fmr 31, 1
  017f6f4  lis 3, 24
  017f6f8  addi 3, 3, -3644
  017f6fc  lfs 1, 20(3)
  017f700  lfs 2, 72(3)
  017f704  bl 0xfcbe8
  017f708  nop
  017f70c  fmuls 1, 31, 1
  017f710  bl 0x502758
  017f714  nop
  017f718  sth 3, 30(31)
  017f71c  li 3, 0
  017f720  sth 3, 14(31)
  017f724  b 0x17f798
  017f728  lfs 1, 4(31)
  017f72c  lfs 2, 8(31)
  017f730  bl 0x502578
  017f734  nop
  017f738  lfs 2, 20(31)
  017f73c  lis 3, 24
  017f740  lfs 3, 24(31)
  017f744  lis 4, 114
  017f748  addi 3, 3, -3644
  017f74c  stfs 1, 4(31)
  017f750  fadds 2, 2, 3
  017f754  lfs 1, -3052(4)
  017f758  fabs 4, 2
  017f75c  stfs 2, 20(31)
  017f760  lfs 3, 24(3)
  017f764  fmuls 1, 1, 3
  017f768  fcmpu 0, 4, 1
  017f76c  cror 6, 0, 2
  017f770  bt 6, 0x17f798
  017f774  lis 3, 24
  017f778  addi 3, 3, -3644
  017f77c  lfs 3, 28(3)
  017f780  lfs 4, 32(3)
  017f784  fsub 2, 2, 3
  017f788  lfs 5, 36(3)
  017f78c  fsel 2, 2, 5, 4
  017f790  fmuls 1, 1, 2
  017f794  stfs 1, 20(31)
  017f798  ld 0, 176(1)
  017f79c  mtlr 0
  017f7a0  lfd 28, 128(1)
  017f7a4  lfd 29, 136(1)
  017f7a8  lfd 30, 144(1)
  017f7ac  lfd 31, 152(1)
  017f7b0  ld 30, 112(1)
  017f7b4  ld 31, 120(1)
  017f7b8  addi 1, 1, 160
  017f7bc  blr

UpdateSound_0:   # 0x17f7d0, 0x228 bytes
  017f7d0  stdu 1, -160(1)
  017f7d4  mflr 0
  017f7d8  std 0, 176(1)
  017f7dc  std 30, 144(1)
  017f7e0  std 31, 152(1)
  017f7e4  lwz 30, 8(3)
  017f7e8  std 29, 136(1)
  017f7ec  ori 31, 3, 0
  017f7f0  lwz 29, 0(30)
  017f7f4  cmpwi 29, 0
  017f7f8  bt 0, 0x17f9dc
  017f7fc  lis 3, 149
  017f800  lfs 1, 68(31)
  017f804  addic 3, 3, 5056
  017f808  lfs 2, 324(3)
  017f80c  lfs 3, 320(3)
  017f810  fsubs 1, 2, 1
  017f814  lfs 2, 64(31)
  017f818  fsubs 2, 3, 2
  017f81c  lfs 3, 328(3)
  017f820  lfs 4, 72(31)
  017f824  fsubs 3, 3, 4
  017f828  fmuls 1, 1, 1
  017f82c  fmadds 1, 2, 2, 1
  017f830  fmadds 2, 3, 3, 1
  017f834  lfs 1, 12(31)
  017f838  fsqrts 2, 2
  017f83c  fcmpu 0, 2, 1
  017f840  cror 6, 1, 2
  017f844  bt 6, 0x17f96c
  017f848  lis 3, 161
  017f84c  slwi 4, 29, 5
  017f850  li 8, 0
  017f854  li 5, 0
  017f858  li 29, 4
  017f85c  lwz 3, 1844(3)
  017f860  lis 6, 150
  017f864  subc 5, 5, 29
  017f868  addc 3, 3, 4
  017f86c  lwz 4, 16(30)
  017f870  addic 6, 6, 14176
  017f874  clrldi 3, 3, 32
  017f878  sldi 7, 4, 7
  017f87c  sldi 4, 4, 4
  017f880  subc 4, 7, 4
  017f884  lbz 3, 24(3)
  017f888  extsw 4, 4
  017f88c  subc 3, 8, 3
  017f890  cntlzw 3, 3
  017f894  sldi 3, 3, 58
  017f898  sradi 3, 3, 63
  017f89c  and 5, 3, 5
  017f8a0  addc 3, 6, 4
  017f8a4  addc 29, 29, 5
  017f8a8  lwz 4, 140(3)
  017f8ac  cmpw 4, 31
  017f8b0  bf 2, 0x17f8c0
  017f8b4  lbz 3, 116(3)
  017f8b8  cmpwi 3, 0
  017f8bc  bf 2, 0x17f9dc
  017f8c0  addic 3, 30, 12
  017f8c4  bl 0x4fff60
  017f8c8  nop
  017f8cc  cmpwi 3, 0
  017f8d0  bt 2, 0x17f9dc
  017f8d4  lwz 3, 0(30)
  017f8d8  ori 5, 31, 0
  017f8dc  ori 4, 29, 0
  017f8e0  li 6, 1024
  017f8e4  bl 0x15d434
  017f8e8  nop
  017f8ec  lwz 31, 8(30)
  017f8f0  stw 3, 16(30)
  017f8f4  cmpwi 31, 0
  017f8f8  bf 1, 0x17f9dc
  017f8fc  lwz 3, 4(30)
  017f900  subc 3, 31, 3
  017f904  extsw 3, 3
  017f908  bl 0xfc620
  017f90c  nop
  017f910  lwz 4, 4(30)
  017f914  addc 3, 4, 3
  017f918  lis 4, 114
  017f91c  extsw 3, 3
  017f920  std 3, 112(1)
  017f924  lis 3, 24
  017f928  addi 3, 3, -2112
  017f92c  lfs 1, 0(3)
  017f930  lfs 2, -3056(4)
  017f934  lfd 3, 112(1)
  017f938  fcfid 3, 3
  017f93c  frsp 3, 3
  017f940  fadds 1, 3, 1
  017f944  lfs 3, 4(3)
  017f948  li 3, 12
  017f94c  fmuls 1, 2, 1
  017f950  fctidz 1, 1
  017f954  fcfid 1, 1
  017f958  frsp 1, 1
  017f95c  fmuls 1, 1, 3
  017f960  fctiwz 1, 1
  017f964  stfiwx 1, 3, 30
  017f968  b 0x17f9dc
  017f96c  lis 3, 24
  017f970  addi 3, 3, -2112
  017f974  lfs 3, 8(3)
  017f978  fadds 1, 1, 3
  017f97c  fcmpu 0, 2, 1
  017f980  cror 6, 0, 2
  017f984  bt 6, 0x17f9dc
  017f988  lwz 4, 16(30)
  017f98c  cmpwi 4, -1
  017f990  bt 2, 0x17f9d4
  017f994  sldi 3, 4, 7
  017f998  sldi 6, 4, 4
  017f99c  lis 5, 150
  017f9a0  subc 3, 3, 6
  017f9a4  addic 5, 5, 14176
  017f9a8  extsw 3, 3
  017f9ac  addc 3, 5, 3
  017f9b0  lwz 5, 140(3)
  017f9b4  cmpw 5, 31
  017f9b8  bf 2, 0x17f9d4
  017f9bc  lbz 3, 116(3)
  017f9c0  cmpwi 3, 0
  017f9c4  bt 2, 0x17f9d4
  017f9c8  extsw 3, 4
  017f9cc  bl 0x15cdb0
  017f9d0  nop
  017f9d4  li 3, -1
  017f9d8  stw 3, 16(30)
  017f9dc  ld 0, 176(1)
  017f9e0  mtlr 0
  017f9e4  ld 29, 136(1)
  017f9e8  ld 30, 144(1)
  017f9ec  ld 31, 152(1)
  017f9f0  addi 1, 1, 160
  017f9f4  blr

UpdateSound_1:   # 0x17fa08, 0x4c4 bytes
  017fa08  stdu 1, -224(1)
  017fa0c  mflr 0
  017fa10  std 0, 240(1)
  017fa14  stfd 26, 176(1)
  017fa18  stfd 27, 184(1)
  017fa1c  stfd 28, 192(1)
  017fa20  stfd 29, 200(1)
  017fa24  stfd 30, 208(1)
  017fa28  stfd 31, 216(1)
  017fa2c  lis 4, 149
  017fa30  lfs 1, 68(3)
  017fa34  addic 4, 4, 5056
  017fa38  lfs 2, 12(3)
  017fa3c  lfs 3, 324(4)
  017fa40  lfs 4, 320(4)
  017fa44  fsubs 3, 3, 1
  017fa48  lfs 1, 64(3)
  017fa4c  fsubs 26, 4, 1
  017fa50  lfs 1, 100(3)
  017fa54  lfs 31, 328(4)
  017fa58  lfs 4, 72(3)
  017fa5c  lfs 5, 96(3)
  017fa60  fsubs 31, 31, 4
  017fa64  lfs 4, 84(3)
  017fa68  fmuls 6, 1, 3
  017fa6c  lfs 7, 80(3)
  017fa70  fmuls 1, 1, 2
  017fa74  lfs 9, 116(3)
  017fa78  fmuls 8, 5, 3
  017fa7c  lfs 10, 104(3)
  017fa80  fmuls 5, 5, 2
  017fa84  lfs 11, 112(3)
  017fa88  fmuls 12, 10, 3
  017fa8c  std 31, 168(1)
  017fa90  lfs 13, 88(3)
  017fa94  ori 31, 3, 0
  017fa98  fmadds 29, 4, 26, 6
  017fa9c  fmadds 1, 4, 2, 1
  017faa0  lfs 6, 120(3)
  017faa4  fmadds 30, 7, 26, 8
  017faa8  fmadds 4, 7, 2, 5
  017faac  fmuls 5, 10, 2
  017fab0  fmadds 28, 13, 26, 12
  017fab4  fmadds 29, 9, 31, 29
  017fab8  fmadds 1, 9, 2, 1
  017fabc  fmadds 30, 11, 31, 30
  017fac0  fmadds 4, 11, 2, 4
  017fac4  fmadds 5, 13, 2, 5
  017fac8  fmadds 28, 6, 31, 28
  017facc  fmuls 7, 29, 29
  017fad0  fmuls 1, 1, 1
  017fad4  fmadds 2, 6, 2, 5
  017fad8  fmadds 5, 30, 30, 7
  017fadc  fmadds 1, 4, 4, 1
  017fae0  fmadds 4, 28, 28, 5
  017fae4  fmadds 2, 2, 2, 1
  017fae8  fsqrts 1, 4
  017faec  lfs 4, 108(3)
  017faf0  lfs 5, 92(3)
  017faf4  lfs 27, 124(3)
  017faf8  fsqrts 2, 2
  017fafc  std 30, 160(1)
  017fb00  fmuls 3, 4, 3
  017fb04  lwz 30, 8(3)
  017fb08  fmadds 26, 5, 26, 3
  017fb0c  fcmpu 0, 1, 2
  017fb10  std 29, 152(1)
  017fb14  std 28, 144(1)
  017fb18  std 27, 136(1)
  017fb1c  cror 6, 1, 2
  017fb20  bt 6, 0x17fe3c
  017fb24  fabs 4, 30
  017fb28  lis 3, 24
  017fb2c  addi 3, 3, -1544
  017fb30  lfs 3, 0(3)
  017fb34  fcmpu 0, 4, 3
  017fb38  bt 1, 0x17fb78
  017fb3c  fabs 4, 29
  017fb40  fcmpu 0, 4, 3
  017fb44  bt 1, 0x17fb78
  017fb48  fabs 4, 28
  017fb4c  fcmpu 0, 4, 3
  017fb50  bt 1, 0x17fb78
  017fb54  lis 3, 161
  017fb58  lwz 28, 0(30)
  017fb5c  slwi 4, 28, 5
  017fb60  lwz 3, 1844(3)
  017fb64  addc 3, 3, 4
  017fb68  clrldi 3, 3, 32
  017fb6c  lwz 27, 12(3)
  017fb70  extsw 27, 27
  017fb74  b 0x17fc44
  017fb78  fcmpu 0, 30, 3
  017fb7c  cror 6, 0, 2
  017fb80  bt 6, 0x17fb8c
  017fb84  fmr 30, 3
  017fb88  b 0x17fba8
  017fb8c  lis 3, 24
  017fb90  addi 3, 3, -1544
  017fb94  lfs 4, 4(3)
  017fb98  fcmpu 0, 30, 4
  017fb9c  cror 6, 1, 2
  017fba0  bt 6, 0x17fba8
  017fba4  fmr 30, 4
  017fba8  fcmpu 0, 29, 3
  017fbac  cror 6, 0, 2
  017fbb0  bt 6, 0x17fbbc
  017fbb4  fmr 29, 3
  017fbb8  b 0x17fbd8
  017fbbc  lis 3, 24
  017fbc0  addi 3, 3, -1544
  017fbc4  lfs 4, 4(3)
  017fbc8  fcmpu 0, 29, 4
  017fbcc  cror 6, 1, 2
  017fbd0  bt 6, 0x17fbd8
  017fbd4  fmr 29, 4
  017fbd8  fcmpu 0, 28, 3
  017fbdc  cror 6, 0, 2
  017fbe0  bt 6, 0x17fbec
  017fbe4  fmr 28, 3
  017fbe8  b 0x17fc08
  017fbec  lis 3, 24
  017fbf0  addi 3, 3, -1544
  017fbf4  lfs 3, 4(3)
  017fbf8  fcmpu 0, 28, 3
  017fbfc  cror 6, 1, 2
  017fc00  bt 6, 0x17fc08
  017fc04  fmr 28, 3
  017fc08  fmuls 4, 29, 29
  017fc0c  fmr 3, 2
  017fc10  lis 3, 161
  017fc14  lwz 4, 0(30)
  017fc18  slwi 4, 4, 5
  017fc1c  lwz 3, 1844(3)
  017fc20  addc 3, 3, 4
  017fc24  fmadds 2, 30, 30, 4
  017fc28  clrldi 3, 3, 32
  017fc2c  fmadds 2, 28, 28, 2
  017fc30  fsqrts 2, 2
  017fc34  bl 0x15b7d8
  017fc38  nop
  017fc3c  ori 27, 3, 0
  017fc40  lwz 28, 0(30)
  017fc44  lis 3, 161
  017fc48  slwi 4, 28, 5
  017fc4c  li 7, 0
  017fc50  lis 28, 150
  017fc54  li 6, 16
  017fc58  lwz 3, 1844(3)
  017fc5c  li 29, 20
  017fc60  addc 3, 3, 4
  017fc64  addic 28, 28, 14176
  017fc68  clrldi 5, 3, 32
  017fc6c  lwz 3, 16(30)
  017fc70  subc 6, 6, 29
  017fc74  sldi 4, 3, 7
  017fc78  sldi 8, 3, 4
  017fc7c  lbz 5, 24(5)
  017fc80  subc 4, 4, 8
  017fc84  subc 5, 7, 5
  017fc88  extsw 4, 4
  017fc8c  cntlzw 5, 5
  017fc90  addc 4, 28, 4
  017fc94  sldi 5, 5, 58
  017fc98  sradi 5, 5, 63
  017fc9c  and 5, 5, 6
  017fca0  addc 29, 29, 5
  017fca4  lwz 5, 140(4)
  017fca8  cmpw 5, 31
  017fcac  bf 2, 0x17fcbc
  017fcb0  lbz 4, 116(4)
  017fcb4  cmpwi 4, 0
  017fcb8  bf 2, 0x17fd78
  017fcbc  addic 3, 30, 12
  017fcc0  bl 0x4fff60
  017fcc4  nop
  017fcc8  cmpwi 3, 0
  017fccc  bt 2, 0x17fd6c
  017fcd0  lwz 3, 0(30)
  017fcd4  ori 4, 29, 0
  017fcd8  ori 5, 31, 0
  017fcdc  ori 6, 27, 0
  017fce0  bl 0x15d434
  017fce4  nop
  017fce8  lwz 29, 8(30)
  017fcec  stw 3, 16(30)
  017fcf0  cmpwi 29, 0
  017fcf4  bf 1, 0x17fd78
  017fcf8  lwz 3, 4(30)
  017fcfc  subc 3, 29, 3
  017fd00  extsw 3, 3
  017fd04  bl 0xfc620
  017fd08  nop
  017fd0c  lwz 4, 4(30)
  017fd10  addc 3, 4, 3
  017fd14  lis 4, 24
  017fd18  extsw 3, 3
  017fd1c  std 3, 112(1)
  017fd20  addi 3, 4, -1544
  017fd24  lis 4, 114
  017fd28  lfs 1, 8(3)
  017fd2c  lfs 2, -3056(4)
  017fd30  lfs 3, 12(3)
  017fd34  lfd 4, 112(1)
  017fd38  fcfid 4, 4
  017fd3c  li 4, 12
  017fd40  lwz 3, 16(30)
  017fd44  frsp 4, 4
  017fd48  fadds 1, 4, 1
  017fd4c  fmuls 1, 2, 1
  017fd50  fctidz 1, 1
  017fd54  fcfid 1, 1
  017fd58  frsp 1, 1
  017fd5c  fmuls 1, 1, 3
  017fd60  fctiwz 1, 1
  017fd64  stfiwx 1, 4, 30
  017fd68  b 0x17fd78
  017fd6c  li 3, -1
  017fd70  stw 3, 16(30)
  017fd74  b 0x17fe90
  017fd78  cmpwi 3, -1
  017fd7c  bt 2, 0x17fe90
  017fd80  extsw 3, 3
  017fd84  ori 4, 27, 0
  017fd88  bl 0x15d710
  017fd8c  nop
  017fd90  lfs 1, 32(31)
  017fd94  lfs 2, 36(31)
  017fd98  lfs 3, 40(31)
  017fd9c  fmuls 1, 1, 29
  017fda0  lfs 4, 16(31)
  017fda4  fmuls 2, 2, 29
  017fda8  lfs 5, 44(31)
  017fdac  fmuls 3, 3, 29
  017fdb0  lfs 6, 20(31)
  017fdb4  fmuls 5, 5, 29
  017fdb8  lfs 7, 24(31)
  017fdbc  lfs 8, 28(31)
  017fdc0  lfs 9, 48(31)
  017fdc4  fmadds 1, 4, 30, 1
  017fdc8  fmadds 2, 6, 30, 2
  017fdcc  fmadds 3, 7, 30, 3
  017fdd0  lfs 4, 52(31)
  017fdd4  fmadds 5, 8, 30, 5
  017fdd8  lfs 6, 56(31)
  017fddc  lfs 8, 60(31)
  017fde0  fmadds 7, 27, 31, 26
  017fde4  lfs 10, 64(31)
  017fde8  lfs 11, 68(31)
  017fdec  fmadds 1, 9, 28, 1
  017fdf0  fmadds 2, 4, 28, 2
  017fdf4  fmadds 3, 6, 28, 3
  017fdf8  lfs 4, 72(31)
  017fdfc  fmadds 5, 8, 28, 5
  017fe00  lwz 3, 16(30)
  017fe04  sldi 4, 3, 7
  017fe08  sldi 3, 3, 4
  017fe0c  subc 3, 4, 3
  017fe10  fadds 1, 1, 10
  017fe14  fadds 2, 2, 11
  017fe18  addc 3, 28, 3
  017fe1c  fadds 3, 3, 4
  017fe20  fadds 4, 5, 7
  017fe24  clrldi 3, 3, 32
  017fe28  stfs 1, 144(3)
  017fe2c  stfs 2, 148(3)
  017fe30  stfs 3, 152(3)
  017fe34  stfs 4, 156(3)
  017fe38  b 0x17fe90
  017fe3c  lwz 4, 16(30)
  017fe40  cmpwi 4, -1
  017fe44  bt 2, 0x17fe88
  017fe48  sldi 3, 4, 7
  017fe4c  sldi 6, 4, 4
  017fe50  lis 5, 150
  017fe54  subc 3, 3, 6
  017fe58  addic 5, 5, 14176
  017fe5c  extsw 3, 3
  017fe60  addc 3, 5, 3
  017fe64  lwz 5, 140(3)
  017fe68  cmpw 5, 31
  017fe6c  bf 2, 0x17fe88
  017fe70  lbz 3, 116(3)
  017fe74  cmpwi 3, 0
  017fe78  bt 2, 0x17fe88
  017fe7c  extsw 3, 4
  017fe80  bl 0x15cdb0
  017fe84  nop
  017fe88  li 3, -1
  017fe8c  stw 3, 16(30)
  017fe90  ld 0, 240(1)
  017fe94  mtlr 0
  017fe98  lfd 26, 176(1)
  017fe9c  lfd 27, 184(1)
  017fea0  lfd 28, 192(1)
  017fea4  lfd 29, 200(1)
  017fea8  lfd 30, 208(1)
  017feac  lfd 31, 216(1)
  017feb0  ld 27, 136(1)
  017feb4  ld 28, 144(1)
  017feb8  ld 29, 152(1)
  017febc  ld 30, 160(1)
  017fec0  ld 31, 168(1)
  017fec4  addi 1, 1, 224
  017fec8  blr

UpdateSound_2:   # 0x17fee0, 0x31c bytes
  017fee0  stdu 1, -192(1)
  017fee4  mflr 0
  017fee8  std 0, 208(1)
  017feec  stfd 28, 160(1)
  017fef0  stfd 29, 168(1)
  017fef4  stfd 30, 176(1)
  017fef8  stfd 31, 184(1)
  017fefc  lis 4, 149
  017ff00  lfs 3, 12(3)
  017ff04  lis 5, 24
  017ff08  addic 4, 4, 5056
  017ff0c  lfs 1, 68(3)
  017ff10  std 30, 144(1)
  017ff14  addi 5, 5, -304
  017ff18  ori 30, 3, 0
  017ff1c  lfs 2, 324(4)
  017ff20  lfs 4, 96(3)
  017ff24  fsubs 1, 2, 1
  017ff28  fmuls 6, 4, 3
  017ff2c  lfs 2, 320(4)
  017ff30  lfs 5, 64(3)
  017ff34  lfs 7, 80(3)
  017ff38  fsubs 9, 2, 5
  017ff3c  lfs 8, 328(4)
  017ff40  lfs 2, 72(3)
  017ff44  lfs 5, 112(3)
  017ff48  fsubs 8, 8, 2
  017ff4c  fmuls 2, 4, 1
  017ff50  lfs 31, 0(5)
  017ff54  fmadds 4, 7, 3, 6
  017ff58  std 31, 152(1)
  017ff5c  lfs 6, 100(3)
  017ff60  lwz 31, 8(3)
  017ff64  lfs 10, 104(3)
  017ff68  lfs 11, 84(3)
  017ff6c  fmuls 0, 10, 1
  017ff70  fmuls 10, 10, 3
  017ff74  lfs 13, 88(3)
  017ff78  fmadds 2, 7, 9, 2
  017ff7c  fmadds 4, 5, 3, 4
  017ff80  fmuls 7, 6, 1
  017ff84  fmuls 6, 6, 3
  017ff88  fmadds 12, 5, 8, 2
  017ff8c  fabs 4, 4
  017ff90  fmadds 7, 11, 9, 7
  017ff94  lfs 2, 116(3)
  017ff98  fmadds 5, 11, 3, 6
  017ff9c  lfs 1, 120(3)
  017ffa0  fmadds 6, 13, 9, 0
  017ffa4  fabs 11, 12
  017ffa8  fadds 12, 4, 31
  017ffac  fmadds 4, 13, 3, 10
  017ffb0  std 29, 136(1)
  017ffb4  fcmpu 0, 11, 12
  017ffb8  bt 1, 0x1801d0
  017ffbc  fmadds 5, 2, 3, 5
  017ffc0  fmadds 2, 2, 8, 7
  017ffc4  fabs 5, 5
  017ffc8  fabs 2, 2
  017ffcc  fadds 5, 5, 31
  017ffd0  fcmpu 0, 2, 5
  017ffd4  bt 1, 0x1801d0
  017ffd8  fmadds 2, 1, 3, 4
  017ffdc  fmadds 1, 1, 8, 6
  017ffe0  fabs 2, 2
  017ffe4  fabs 1, 1
  017ffe8  fadds 2, 2, 31
  017ffec  fcmpu 0, 1, 2
  017fff0  bt 1, 0x1801d0
  017fff4  lwz 3, 16(31)
  017fff8  lis 29, 150
  017fffc  sldi 4, 3, 7
  0180000  sldi 3, 3, 4
  0180004  addic 29, 29, 14176
  0180008  subc 3, 4, 3
  018000c  extsw 3, 3
  0180010  addc 3, 29, 3
  0180014  lwz 4, 140(3)
  0180018  cmpw 4, 30
  018001c  bf 2, 0x18002c
  0180020  lbz 3, 116(3)
  0180024  cmpwi 3, 0
  0180028  bf 2, 0x1801d0
  018002c  addic 3, 31, 12
  0180030  bl 0x4fff60
  0180034  nop
  0180038  cmpwi 3, 0
  018003c  bt 2, 0x1801c8
  0180040  lwz 3, 0(31)
  0180044  li 4, 0
  0180048  ori 5, 30, 0
  018004c  li 6, 1024
  0180050  bl 0x15d434
  0180054  nop
  0180058  cmpwi 3, -1
  018005c  stw 3, 16(31)
  0180060  bt 2, 0x18014c
  0180064  lis 3, 24
  0180068  fmr 2, 31
  018006c  addi 3, 3, -304
  0180070  lfs 30, 4(3)
  0180074  fmr 1, 30
  0180078  bl 0xfcbe8
  018007c  nop
  0180080  fmr 29, 1
  0180084  fmr 1, 30
  0180088  fmr 2, 31
  018008c  bl 0xfcbe8
  0180090  nop
  0180094  fmr 28, 1
  0180098  fmr 2, 31
  018009c  fmr 1, 30
  01800a0  bl 0xfcbe8
  01800a4  nop
  01800a8  lfs 2, 32(30)
  01800ac  lfs 3, 36(30)
  01800b0  lfs 4, 40(30)
  01800b4  lfs 5, 16(30)
  01800b8  fmuls 2, 2, 28
  01800bc  lfs 6, 44(30)
  01800c0  fmuls 3, 3, 28
  01800c4  fmuls 4, 4, 28
  01800c8  lfs 7, 20(30)
  01800cc  fmuls 6, 6, 28
  01800d0  lfs 8, 24(30)
  01800d4  lfs 9, 28(30)
  01800d8  lfs 10, 48(30)
  01800dc  lfs 11, 52(30)
  01800e0  fmadds 2, 5, 29, 2
  01800e4  fmadds 3, 7, 29, 3
  01800e8  lfs 5, 56(30)
  01800ec  fmadds 4, 8, 29, 4
  01800f0  lfs 7, 60(30)
  01800f4  fmadds 6, 9, 29, 6
  01800f8  fmadds 6, 7, 1, 6
  01800fc  fmadds 2, 10, 1, 2
  0180100  fmadds 3, 11, 1, 3
  0180104  fmadds 1, 5, 1, 4
  0180108  lfs 4, 64(30)
  018010c  fadds 6, 6, 7
  0180110  lfs 5, 68(30)
  0180114  lfs 8, 72(30)
  0180118  lwz 3, 16(31)
  018011c  sldi 4, 3, 7
  0180120  sldi 3, 3, 4
  0180124  fadds 2, 2, 4
  0180128  fadds 3, 3, 5
  018012c  subc 3, 4, 3
  0180130  fadds 1, 1, 8
  0180134  addc 3, 29, 3
  0180138  clrldi 3, 3, 32
  018013c  stfs 6, 156(3)
  0180140  stfs 2, 144(3)
  0180144  stfs 3, 148(3)
  0180148  stfs 1, 152(3)
  018014c  lwz 3, 8(31)
  0180150  cmpwi 3, 0
  0180154  bf 1, 0x1801d0
  0180158  lwz 4, 4(31)
  018015c  subc 3, 3, 4
  0180160  extsw 3, 3
  0180164  bl 0xfc620
  0180168  nop
  018016c  lwz 4, 4(31)
  0180170  addc 3, 4, 3
  0180174  lis 4, 114
  0180178  extsw 3, 3
  018017c  std 3, 112(1)
  0180180  lis 3, 24
  0180184  addi 3, 3, -304
  0180188  lfs 1, 8(3)
  018018c  lfs 2, -3056(4)
  0180190  lfd 3, 112(1)
  0180194  fcfid 3, 3
  0180198  frsp 3, 3
  018019c  fadds 1, 3, 1
  01801a0  lfs 3, 12(3)
  01801a4  li 3, 12
  01801a8  fmuls 1, 2, 1
  01801ac  fctidz 1, 1
  01801b0  fcfid 1, 1
  01801b4  frsp 1, 1
  01801b8  fmuls 1, 1, 3
  01801bc  fctiwz 1, 1
  01801c0  stfiwx 1, 3, 31
  01801c4  b 0x1801d0
  01801c8  li 3, -1
  01801cc  stw 3, 16(31)
  01801d0  ld 0, 208(1)
  01801d4  mtlr 0
  01801d8  lfd 28, 160(1)
  01801dc  lfd 29, 168(1)
  01801e0  lfd 30, 176(1)
  01801e4  lfd 31, 184(1)
  01801e8  ld 29, 136(1)
  01801ec  ld 30, 144(1)
  01801f0  ld 31, 152(1)
  01801f4  addi 1, 1, 192
  01801f8  blr

UpdateSound_3:   # 0x180210, 0x1c4 bytes
  0180210  stdu 1, -144(1)
  0180214  mflr 0
  0180218  std 0, 160(1)
  018021c  stfd 31, 136(1)
  0180220  lis 4, 151
  0180224  lfs 1, 68(3)
  0180228  std 31, 128(1)
  018022c  addic 4, 4, -25376
  0180230  ori 31, 3, 0
  0180234  lfs 2, 132(4)
  0180238  lfs 3, 128(4)
  018023c  fsubs 1, 2, 1
  0180240  lfs 2, 64(3)
  0180244  lfs 4, 96(3)
  0180248  fsubs 8, 3, 2
  018024c  lfs 7, 136(4)
  0180250  lis 4, 24
  0180254  lfs 2, 72(3)
  0180258  lfs 3, 80(3)
  018025c  addi 4, 4, 512
  0180260  fsubs 7, 7, 2
  0180264  lfs 5, 112(3)
  0180268  fmuls 4, 4, 1
  018026c  std 30, 120(1)
  0180270  lfs 2, 0(4)
  0180274  lwz 30, 8(3)
  0180278  fmadds 3, 3, 8, 4
  018027c  lfs 4, 100(3)
  0180280  lfs 6, 104(3)
  0180284  fmuls 4, 4, 1
  0180288  lfs 9, 84(3)
  018028c  fmuls 10, 6, 1
  0180290  lfs 11, 88(3)
  0180294  fmadds 1, 5, 7, 3
  0180298  lfs 5, 116(3)
  018029c  lfs 3, 120(3)
  01802a0  fmadds 6, 9, 8, 4
  01802a4  fmadds 4, 11, 8, 10
  01802a8  fabs 8, 1
  01802ac  fcmpu 0, 8, 2
  01802b0  bt 1, 0x18034c
  01802b4  fmadds 5, 5, 7, 6
  01802b8  fabs 5, 5
  01802bc  fcmpu 0, 5, 2
  01802c0  bt 1, 0x18034c
  01802c4  fmadds 3, 3, 7, 4
  01802c8  fabs 3, 3
  01802cc  fcmpu 0, 3, 2
  01802d0  bt 1, 0x18034c
  01802d4  fadds 1, 1, 2
  01802d8  lis 3, 24
  01802dc  addi 3, 3, 512
  01802e0  lfs 2, 4(3)
  01802e4  lwz 3, 4(30)
  01802e8  fmuls 31, 1, 2
  01802ec  extsw 3, 3
  01802f0  bl 0x502730
  01802f4  nop
  01802f8  fmuls 1, 1, 31
  01802fc  bl 0x502758
  0180300  nop
  0180304  lwz 4, 4(30)
  0180308  lbz 5, 0(30)
  018030c  extsw 4, 4
  0180310  lbz 6, 1(30)
  0180314  lbz 8, 2(30)
  0180318  subc 7, 4, 3
  018031c  subc 9, 4, 3
  0180320  sradi 7, 7, 63
  0180324  ori 4, 5, 0
  0180328  and 5, 7, 9
  018032c  ori 7, 8, 0
  0180330  addc 5, 3, 5
  0180334  ori 3, 31, 0
  0180338  bl 0x15d844
  018033c  nop
  0180340  li 3, 1
  0180344  stb 3, 3(30)
  0180348  b 0x1803b8
  018034c  lbz 3, 3(30)
  0180350  cmpwi 3, 0
  0180354  bt 2, 0x1803b8
  0180358  lis 3, 24
  018035c  addi 3, 3, 512
  0180360  lfs 2, 8(3)
  0180364  fcmpu 0, 1, 2
  0180368  cror 6, 0, 2
  018036c  bt 6, 0x180394
  0180370  lbz 4, 0(30)
  0180374  lwz 5, 4(30)
  0180378  li 3, 0
  018037c  lbz 6, 1(30)
  0180380  lbz 7, 2(30)
  0180384  extsw 5, 5
  0180388  bl 0x15d844
  018038c  nop
  0180390  b 0x1803b0
  0180394  ori 3, 31, 0
  0180398  li 4, 5
  018039c  li 5, 0
  01803a0  li 6, 0
  01803a4  li 7, 0
  01803a8  bl 0x15d844
  01803ac  nop
  01803b0  li 3, 0
  01803b4  stb 3, 3(30)
  01803b8  ld 0, 160(1)
  01803bc  mtlr 0
  01803c0  lfd 31, 136(1)
  01803c4  ld 30, 120(1)
  01803c8  ld 31, 128(1)
  01803cc  addi 1, 1, 144
  01803d0  blr

Water_StaticInit2:   # 0x1803d4, 0x14 bytes
  01803d4  lis 3, 116
  01803d8  lis 4, 1
  01803dc  addic 3, 3, -19132
  01803e0  stw 4, 72(3)
  01803e4  blr

UpdateSound_4:   # 0x180408, 0x2e0 bytes
  0180408  stdu 1, -272(1)
  018040c  mflr 0
  0180410  std 0, 288(1)
  0180414  stfd 25, 216(1)
  0180418  stfd 26, 224(1)
  018041c  stfd 27, 232(1)
  0180420  stfd 28, 240(1)
  0180424  stfd 29, 248(1)
  0180428  stfd 30, 256(1)
  018042c  stfd 31, 264(1)
  0180430  lis 4, 24
  0180434  lis 5, 16512
  0180438  addi 4, 4, 1000
  018043c  std 30, 200(1)
  0180440  lis 6, 16256
  0180444  lis 30, 149
  0180448  std 31, 208(1)
  018044c  stw 5, 128(1)
  0180450  ori 31, 3, 0
  0180454  li 5, 0
  0180458  lfs 30, 0(4)
  018045c  addic 30, 30, 5056
  0180460  fmr 29, 30
  0180464  stw 5, 132(1)
  0180468  std 29, 192(1)
  018046c  stw 5, 136(1)
  0180470  lwz 29, 8(3)
  0180474  lfs 31, 4(4)
  0180478  stw 6, 140(1)
  018047c  stw 5, 144(1)
  0180480  stw 5, 148(1)
  0180484  stw 6, 152(1)
  0180488  lfs 26, 8(4)
  018048c  lfs 27, 12(4)
  0180490  std 28, 184(1)
  0180494  lfs 28, 16(4)
  0180498  fmr 25, 29
  018049c  fmr 1, 25
  01804a0  addic 3, 1, 112
  01804a4  addic 4, 1, 128
  01804a8  addic 5, 1, 144
  01804ac  bl 0x1113e0
  01804b0  nop
  01804b4  lfs 1, 320(30)
  01804b8  lfs 2, 112(1)
  01804bc  lfs 3, 328(30)
  01804c0  fadds 1, 1, 2
  01804c4  lfs 2, 120(1)
  01804c8  fadds 2, 3, 2
  01804cc  lfs 3, 324(30)
  01804d0  lfs 4, 332(30)
  01804d4  lfs 5, 116(1)
  01804d8  fadds 3, 3, 5
  01804dc  stfs 1, 48(1)
  01804e0  stfs 2, 56(1)
  01804e4  stfs 1, 112(1)
  01804e8  stfs 2, 120(1)
  01804ec  stfs 4, 60(1)
  01804f0  stfs 4, 124(1)
  01804f4  stfs 3, 116(1)
  01804f8  stfs 3, 52(1)
  01804fc  ld 3, 48(1)
  0180500  ld 4, 56(1)
  0180504  bl 0x118d60
  0180508  nop
  018050c  fadds 25, 25, 28
  0180510  fmr 2, 1
  0180514  lfs 1, 328(30)
  0180518  fadds 3, 29, 27
  018051c  fcmpu 0, 25, 26
  0180520  fsub 2, 2, 1
  0180524  fsel 29, 2, 29, 3
  0180528  bt 0, 0x18049c
  018052c  lis 3, 230
  0180530  lfs 2, -20736(3)
  0180534  fcmpu 0, 29, 2
  0180538  cror 6, 0, 2
  018053c  bt 6, 0x18055c
  0180540  lis 4, 24
  0180544  lis 5, 114
  0180548  addi 4, 4, 1000
  018054c  lfs 3, 20(4)
  0180550  lfs 4, -3036(5)
  0180554  fmadds 2, 4, 3, 2
  0180558  b 0x180574
  018055c  lis 4, 24
  0180560  lis 5, 114
  0180564  addi 4, 4, 1000
  0180568  lfs 3, 24(4)
  018056c  lfs 4, -3036(5)
  0180570  fnmsubs 2, 4, 3, 2
  0180574  fcmpu 0, 2, 31
  0180578  stfs 2, -20736(3)
  018057c  cror 6, 0, 2
  0180580  bt 6, 0x180594
  0180584  lis 4, 16256
  0180588  fmr 2, 31
  018058c  stw 4, -20736(3)
  0180590  b 0x1805ac
  0180594  fcmpu 0, 2, 30
  0180598  cror 6, 1, 2
  018059c  bt 6, 0x1805ac
  01805a0  li 4, 0
  01805a4  fmr 2, 30
  01805a8  stw 4, -20736(3)
  01805ac  lwz 3, 8(29)
  01805b0  lis 28, 150
  01805b4  fmr 3, 1
  01805b8  sldi 4, 3, 7
  01805bc  sldi 5, 3, 4
  01805c0  addic 28, 28, 14176
  01805c4  subc 4, 4, 5
  01805c8  extsw 4, 4
  01805cc  addc 4, 28, 4
  01805d0  lwz 5, 140(4)
  01805d4  cmpw 5, 31
  01805d8  bf 2, 0x180630
  01805dc  lbz 4, 116(4)
  01805e0  fmr 3, 1
  01805e4  cmpwi 4, 0
  01805e8  bt 2, 0x180630
  01805ec  lfs 1, 4(29)
  01805f0  fadds 2, 1, 2
  01805f4  fadds 1, 1, 31
  01805f8  lis 4, 24
  01805fc  addi 4, 4, 1000
  0180600  extsw 3, 3
  0180604  fdivs 1, 2, 1
  0180608  lfs 2, 28(4)
  018060c  fmuls 1, 1, 2
  0180610  fctiwz 1, 1
  0180614  stfd 1, 160(1)
  0180618  lwz 4, 164(1)
  018061c  extsw 4, 4
  0180620  bl 0x15d710
  0180624  nop
  0180628  lwz 3, 8(29)
  018062c  lfs 3, 328(30)
  0180630  sldi 4, 3, 7
  0180634  sldi 3, 3, 4
  0180638  lfs 1, 320(30)
  018063c  subc 3, 4, 3
  0180640  addc 3, 28, 3
  0180644  clrldi 3, 3, 32
  0180648  stfs 1, 144(3)
  018064c  lfs 1, 324(30)
  0180650  stfs 3, 152(3)
  0180654  stfs 1, 148(3)
  0180658  lfs 1, 332(30)
  018065c  stfs 1, 156(3)
  0180660  lwz 3, 8(29)
  0180664  sldi 4, 3, 7
  0180668  sldi 3, 3, 4
  018066c  subc 3, 4, 3
  0180670  extsw 3, 3
  0180674  addc 28, 28, 3
  0180678  lwz 3, 140(28)
  018067c  cmpw 3, 31
  0180680  bf 2, 0x180690
  0180684  lbz 3, 116(28)
  0180688  cmpwi 3, 0
  018068c  bf 2, 0x1806ac
  0180690  lwz 3, 0(29)
  0180694  li 4, 21
  0180698  ori 5, 31, 0
  018069c  li 6, 1024
  01806a0  bl 0x15d434
  01806a4  nop
  01806a8  stw 3, 8(29)
  01806ac  ld 0, 288(1)
  01806b0  mtlr 0
  01806b4  lfd 25, 216(1)
  01806b8  lfd 26, 224(1)
  01806bc  lfd 27, 232(1)
  01806c0  lfd 28, 240(1)
  01806c4  lfd 29, 248(1)
  01806c8  lfd 30, 256(1)
  01806cc  lfd 31, 264(1)
  01806d0  ld 28, 184(1)
  01806d4  ld 29, 192(1)
  01806d8  ld 30, 200(1)
  01806dc  ld 31, 208(1)
  01806e0  addi 1, 1, 272
  01806e4  blr

UpdateSound_5:   # 0x1806e8, 0xf8 bytes
  01806e8  stdu 1, -128(1)
  01806ec  mflr 0
  01806f0  std 0, 144(1)
  01806f4  std 31, 120(1)
  01806f8  lwz 31, 8(3)
  01806fc  lis 5, 149
  0180700  lis 4, 150
  0180704  addic 7, 5, 5056
  0180708  addic 4, 4, 14176
  018070c  lwz 5, 4(31)
  0180710  sldi 6, 5, 7
  0180714  sldi 5, 5, 4
  0180718  lfs 1, 320(7)
  018071c  subc 5, 6, 5
  0180720  addc 5, 4, 5
  0180724  clrldi 5, 5, 32
  0180728  li 6, 0
  018072c  stfs 1, 144(5)
  0180730  lfs 1, 324(7)
  0180734  stfs 1, 148(5)
  0180738  lfs 1, 328(7)
  018073c  stfs 1, 152(5)
  0180740  lfs 1, 332(7)
  0180744  stfs 1, 156(5)
  0180748  lwz 5, 4(31)
  018074c  lwz 7, 916(7)
  0180750  sldi 8, 5, 7
  0180754  sldi 9, 5, 4
  0180758  cmpwi 6, 7, 0
  018075c  subc 8, 8, 9
  0180760  addc 4, 4, 8
  0180764  ori 8, 3, 0
  0180768  clrldi 4, 4, 32
  018076c  lwz 7, 140(4)
  0180770  cmpw 7, 8
  0180774  bf 2, 0x180788
  0180778  lbz 4, 116(4)
  018077c  cmpwi 4, 0
  0180780  bt 2, 0x180788
  0180784  li 6, 1
  0180788  cmpwi 1, 6, 0
  018078c  bt 26, 0x1807b4
  0180790  bf 6, 0x1807cc
  0180794  ori 5, 3, 0
  0180798  lwz 3, 0(31)
  018079c  li 4, 21
  01807a0  li 6, 1024
  01807a4  bl 0x15d434
  01807a8  nop
  01807ac  stw 3, 4(31)
  01807b0  b 0x1807cc
  01807b4  bt 6, 0x1807cc
  01807b8  extsw 3, 5
  01807bc  bl 0x15cdb0
  01807c0  nop
  01807c4  li 3, -1
  01807c8  stw 3, 4(31)
  01807cc  ld 0, 144(1)
  01807d0  mtlr 0
  01807d4  ld 31, 120(1)
  01807d8  addi 1, 1, 128
  01807dc  blr

UpdateSound_6:   # 0x1807e8, 0x174 bytes
  01807e8  stdu 1, -128(1)
  01807ec  mflr 0
  01807f0  std 0, 144(1)
  01807f4  std 31, 120(1)
  01807f8  lwz 31, 8(3)
  01807fc  lhz 4, 12(31)
  0180800  extsh 5, 4
  0180804  cmpwi 1, 5, -1
  0180808  bf 6, 0x18081c
  018080c  lhz 5, 14(31)
  0180810  extsh 5, 5
  0180814  cmpwi 5, -1
  0180818  bt 2, 0x180948
  018081c  lis 5, 151
  0180820  lfs 1, 68(3)
  0180824  addic 5, 5, -25376
  0180828  lfs 2, 132(5)
  018082c  lfs 3, 128(5)
  0180830  fsubs 1, 2, 1
  0180834  lfs 2, 64(3)
  0180838  lfs 4, 96(3)
  018083c  fsubs 8, 3, 2
  0180840  lfs 7, 136(5)
  0180844  lfs 2, 72(3)
  0180848  lis 5, 24
  018084c  lfs 3, 80(3)
  0180850  fsubs 7, 7, 2
  0180854  lfs 5, 112(3)
  0180858  addi 5, 5, 2016
  018085c  fmuls 2, 4, 1
  0180860  lfs 4, 100(3)
  0180864  lfs 6, 104(3)
  0180868  fmuls 4, 4, 1
  018086c  fmuls 10, 6, 1
  0180870  fmadds 3, 3, 8, 2
  0180874  lfs 2, 0(5)
  0180878  lfs 9, 84(3)
  018087c  lfs 11, 88(3)
  0180880  fmadds 6, 9, 8, 4
  0180884  fmadds 4, 11, 8, 10
  0180888  fmadds 1, 5, 7, 3
  018088c  lfs 5, 116(3)
  0180890  lfs 3, 120(3)
  0180894  fabs 8, 1
  0180898  fcmpu 0, 8, 2
  018089c  bt 1, 0x1808cc
  01808a0  fmadds 5, 5, 7, 6
  01808a4  fabs 5, 5
  01808a8  fcmpu 0, 5, 2
  01808ac  bt 1, 0x1808cc
  01808b0  fmadds 3, 3, 7, 4
  01808b4  fabs 3, 3
  01808b8  fcmpu 0, 3, 2
  01808bc  bt 1, 0x1808cc
  01808c0  li 3, 1
  01808c4  stw 3, 8(31)
  01808c8  b 0x180948
  01808cc  lwz 3, 8(31)
  01808d0  cmpwi 3, 0
  01808d4  bt 2, 0x180948
  01808d8  lhz 3, 14(31)
  01808dc  extsh 5, 3
  01808e0  cmpwi 5, -1
  01808e4  bf 2, 0x1808f0
  01808e8  ori 3, 4, 0
  01808ec  sth 4, 14(31)
  01808f0  bf 6, 0x1808fc
  01808f4  ori 4, 3, 0
  01808f8  sth 4, 12(31)
  01808fc  lis 5, 24
  0180900  addi 5, 5, 2016
  0180904  lfs 2, 4(5)
  0180908  fcmpu 0, 1, 2
  018090c  cror 6, 0, 2
  0180910  bt 6, 0x18092c
  0180914  extsh 4, 3
  0180918  lwz 3, 4(31)
  018091c  extsw 3, 3
  0180920  bl 0x11ccc8
  0180924  nop
  0180928  b 0x180940
  018092c  lwz 3, 0(31)
  0180930  extsh 4, 4
  0180934  extsw 3, 3
  0180938  bl 0x11ccc8
  018093c  nop
  0180940  li 3, 0
  0180944  stw 3, 8(31)
  0180948  ld 0, 144(1)
  018094c  mtlr 0
  0180950  ld 31, 120(1)
  0180954  addi 1, 1, 128
  0180958  blr

# game/update/moby186.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1859_002caea0:   # 0x2caea0, 0x28 bytes
  02caea0  stdu 1, -112(1)
  02caea4  mflr 0
  02caea8  std 0, 128(1)
  02caeac  ori 3, 5, 0
  02caeb0  bl 0x502730
  02caeb4  nop
  02caeb8  ld 0, 128(1)
  02caebc  mtlr 0
  02caec0  addi 1, 1, 112
  02caec4  blr

M186_002caee0:   # 0x2caee0, 0x2e0 bytes
  02caee0  stdu 1, -176(1)
  02caee4  mflr 0
  02caee8  std 0, 192(1)
  02caeec  lis 6, 45
  02caef0  li 7, 0
  02caef4  addi 6, 6, -20792
  02caef8  lfs 3, 0(6)
  02caefc  stw 7, 48(4)
  02caf00  lfs 7, 0(5)
  02caf04  stfs 7, 0(4)
  02caf08  lfs 6, 4(5)
  02caf0c  stfs 6, 4(4)
  02caf10  lfs 1, 8(5)
  02caf14  stfs 1, 8(4)
  02caf18  lfs 2, 12(5)
  02caf1c  stfs 2, 12(4)
  02caf20  lfs 5, 20(3)
  02caf24  lfs 4, 16(3)
  02caf28  fsubs 9, 5, 6
  02caf2c  lfs 11, 4(6)
  02caf30  lfs 8, 24(3)
  02caf34  fsubs 10, 4, 7
  02caf38  lfs 2, 28(4)
  02caf3c  fsubs 1, 1, 8
  02caf40  fmuls 11, 2, 11
  02caf44  lfs 12, 8(6)
  02caf48  std 31, 168(1)
  02caf4c  lfs 8, 32(4)
  02caf50  ori 31, 4, 0
  02caf54  fmuls 9, 9, 9
  02caf58  fabs 1, 1
  02caf5c  fmadds 9, 10, 10, 9
  02caf60  fmuls 10, 11, 8
  02caf64  fadds 1, 1, 12
  02caf68  fsqrts 9, 9
  02caf6c  fdivs 1, 10, 1
  02caf70  lfs 10, 12(6)
  02caf74  fmadds 9, 9, 9, 10
  02caf78  fmuls 1, 1, 9
  02caf7c  fcmpu 0, 1, 8
  02caf80  stfs 1, 20(4)
  02caf84  cror 6, 0, 2
  02caf88  bt 6, 0x2caf94
  02caf8c  fmr 1, 8
  02caf90  stfs 8, 20(31)
  02caf94  fsubs 4, 7, 4
  02caf98  fsubs 5, 6, 5
  02caf9c  lis 4, 115
  02cafa0  addic 4, 4, 22784
  02cafa4  fabs 7, 4
  02cafa8  fabs 6, 5
  02cafac  stfs 4, 112(1)
  02cafb0  stfs 5, 116(1)
  02cafb4  fsubs 4, 7, 6
  02cafb8  stfs 4, 120(1)
  02cafbc  lwz 5, 112(1)
  02cafc0  lfs 4, 112(1)
  02cafc4  lwz 6, 116(1)
  02cafc8  lfs 5, 116(1)
  02cafcc  lwz 7, 120(1)
  02cafd0  rlwinm 6, 6, 3, 29, 29
  02cafd4  fabs 8, 5
  02cafd8  lfs 5, 120(1)
  02cafdc  fabs 4, 4
  02cafe0  rlwimi 6, 7, 2, 30, 30
  02cafe4  fsub 9, 5, 3
  02cafe8  fsub 10, 5, 3
  02cafec  rlwimi 6, 5, 4, 28, 28
  02caff0  ori 5, 4, 0
  02caff4  rlwimi 5, 6, 2, 26, 28
  02caff8  slwi 6, 6, 2
  02caffc  clrldi 5, 5, 32
  02cb000  fsel 6, 9, 4, 6
  02cb004  lfsx 5, 4, 6
  02cb008  fsel 7, 10, 8, 7
  02cb00c  lfs 4, 4(5)
  02cb010  fcmpu 0, 6, 3
  02cb014  bt 1, 0x2cb01c
  02cb018  b 0x2cb140
  02cb01c  fsubs 8, 7, 6
  02cb020  fadds 6, 7, 6
  02cb024  addic 7, 1, 16
  02cb028  li 4, 2
  02cb02c  addic 6, 7, 108
  02cb030  addic 5, 7, 124
  02cb034  mtctr 4
  02cb038  fdivs 6, 8, 6
  02cb03c  fmuls 8, 6, 6
  02cb040  stfs 6, 136(1)
  02cb044  stfs 6, 128(1)
  02cb048  stfs 6, 132(1)
  02cb04c  stfs 6, 124(1)
  02cb050  lfs 9, 136(1)
  02cb054  lfs 10, 128(1)
  02cb058  lfs 11, 132(1)
  02cb05c  fmuls 6, 8, 8
  02cb060  fmuls 10, 10, 8
  02cb064  fmuls 9, 9, 6
  02cb068  fmuls 7, 6, 6
  02cb06c  fmuls 6, 11, 6
  02cb070  stfs 10, 128(1)
  02cb074  fmuls 8, 9, 8
  02cb078  stfs 6, 132(1)
  02cb07c  stfs 8, 136(1)
  02cb080  lfs 6, 108(7)
  02cb084  fmuls 6, 6, 7
  02cb088  stfs 6, 124(7)
  02cb08c  lfs 6, 4(6)
  02cb090  addic 7, 7, 8
  02cb094  addic 6, 6, 8
  02cb098  fmuls 6, 6, 7
  02cb09c  stfs 6, 4(5)
  02cb0a0  addic 5, 5, 8
  02cb0a4  bdnz 0x2cb080
  02cb0a8  ori 8, 1, 0
  02cb0ac  lis 7, 115
  02cb0b0  li 9, 4
  02cb0b4  addic 6, 8, 124
  02cb0b8  addic 7, 7, 22752
  02cb0bc  ori 5, 6, 0
  02cb0c0  mtctr 9
  02cb0c4  lfs 6, 124(8)
  02cb0c8  lfs 7, 0(7)
  02cb0cc  fmuls 6, 6, 7
  02cb0d0  lfs 7, 4(7)
  02cb0d4  addic 7, 7, 8
  02cb0d8  stfs 6, 124(8)
  02cb0dc  lfs 6, 4(6)
  02cb0e0  addic 8, 8, 8
  02cb0e4  fmuls 6, 6, 7
  02cb0e8  stfs 6, 4(6)
  02cb0ec  addic 6, 6, 8
  02cb0f0  bdnz 0x2cb0c4
  02cb0f4  ori 6, 4, 0
  02cb0f8  ori 4, 1, 0
  02cb0fc  mtctr 6
  02cb100  lfs 6, 124(4)
  02cb104  fadds 3, 3, 6
  02cb108  addic 4, 4, 16
  02cb10c  lfs 6, 4(5)
  02cb110  lfs 7, 8(5)
  02cb114  lfs 8, 12(5)
  02cb118  addic 5, 5, 16
  02cb11c  fadds 3, 3, 6
  02cb120  fadds 3, 3, 7
  02cb124  fadds 3, 3, 8
  02cb128  bdnz 0x2cb100
  02cb12c  lis 4, 45
  02cb130  addi 4, 4, -20792
  02cb134  lfs 6, 16(4)
  02cb138  fadds 3, 3, 6
  02cb13c  fmadds 3, 3, 5, 4
  02cb140  addic 3, 3, 16
  02cb144  fneg 2, 2
  02cb148  ori 4, 31, 0
  02cb14c  li 7, 0
  02cb150  stfs 3, 24(31)
  02cb154  bl 0x108180
  02cb158  nop
  02cb15c  fmr 4, 1
  02cb160  lis 3, 45
  02cb164  lis 4, 114
  02cb168  lfs 1, 20(31)
  02cb16c  addi 3, 3, -20792
  02cb170  fmr 3, 4
  02cb174  stfs 4, 16(31)
  02cb178  lfs 2, 20(3)
  02cb17c  lfs 5, -3052(4)
  02cb180  fmuls 2, 5, 2
  02cb184  fcmpu 0, 3, 2
  02cb188  cror 6, 0, 2
  02cb18c  bt 6, 0x2cb198
  02cb190  fmr 3, 2
  02cb194  stfs 2, 16(31)
  02cb198  fdivs 2, 4, 3
  02cb19c  li 3, 0
  02cb1a0  stb 3, 47(31)
  02cb1a4  fmuls 1, 1, 2
  02cb1a8  stfs 1, 20(31)
  02cb1ac  ld 0, 192(1)
  02cb1b0  mtlr 0
  02cb1b4  ld 31, 168(1)
  02cb1b8  addi 1, 1, 176
  02cb1bc  blr

M186_002cb1e0:   # 0x2cb1e0, 0x644 bytes
  02cb1e0  stdu 1, -352(1)
  02cb1e4  mflr 0
  02cb1e8  std 0, 368(1)
  02cb1ec  stfd 24, 288(1)
  02cb1f0  stfd 25, 296(1)
  02cb1f4  stfd 26, 304(1)
  02cb1f8  stfd 27, 312(1)
  02cb1fc  stfd 28, 320(1)
  02cb200  stfd 29, 328(1)
  02cb204  stfd 30, 336(1)
  02cb208  stfd 31, 344(1)
  02cb20c  lfs 1, 4(5)
  02cb210  lfs 2, 20(3)
  02cb214  lis 7, 45
  02cb218  lfs 3, 0(5)
  02cb21c  fsubs 1, 1, 2
  02cb220  lfs 4, 16(3)
  02cb224  addi 7, 7, -20032
  02cb228  fsubs 3, 3, 4
  02cb22c  lfs 5, 0(7)
  02cb230  lfs 6, 44(3)
  02cb234  lwz 8, 36(3)
  02cb238  fmuls 5, 6, 5
  02cb23c  fmuls 7, 1, 1
  02cb240  std 28, 256(1)
  02cb244  lfs 8, 36(8)
  02cb248  fdivs 5, 5, 8
  02cb24c  std 31, 280(1)
  02cb250  std 26, 240(1)
  02cb254  li 28, 0
  02cb258  ori 31, 3, 0
  02cb25c  std 30, 272(1)
  02cb260  ori 26, 28, 0
  02cb264  std 29, 264(1)
  02cb268  ori 30, 4, 0
  02cb26c  ori 29, 6, 0
  02cb270  fmadds 6, 3, 3, 7
  02cb274  lfs 7, 8(5)
  02cb278  lfs 8, 24(3)
  02cb27c  lfs 9, 28(3)
  02cb280  fsubs 7, 7, 8
  02cb284  stfs 9, 124(1)
  02cb288  lfs 30, 12(5)
  02cb28c  fsqrts 6, 6
  02cb290  fadds 10, 8, 7
  02cb294  stfs 10, 120(1)
  02cb298  fdivs 10, 5, 6
  02cb29c  fsub 11, 5, 6
  02cb2a0  fsub 5, 5, 6
  02cb2a4  fmuls 6, 1, 10
  02cb2a8  fmuls 10, 3, 10
  02cb2ac  fsel 26, 11, 1, 6
  02cb2b0  fsel 27, 5, 3, 10
  02cb2b4  fadds 1, 2, 26
  02cb2b8  fadds 3, 4, 27
  02cb2bc  stfs 1, 116(1)
  02cb2c0  stfs 3, 112(1)
  02cb2c4  lfs 28, 4(7)
  02cb2c8  fmuls 26, 26, 28
  02cb2cc  fmuls 27, 27, 28
  02cb2d0  stfs 9, 172(1)
  02cb2d4  fmuls 1, 26, 26
  02cb2d8  fadds 3, 4, 27
  02cb2dc  fadds 2, 2, 26
  02cb2e0  fmadds 4, 7, 28, 8
  02cb2e4  fmadds 1, 27, 27, 1
  02cb2e8  stfs 3, 160(1)
  02cb2ec  stfs 2, 164(1)
  02cb2f0  stfs 4, 168(1)
  02cb2f4  fsqrts 1, 1
  02cb2f8  fcmpu 0, 1, 28
  02cb2fc  std 27, 248(1)
  02cb300  std 25, 232(1)
  02cb304  cror 6, 0, 2
  02cb308  bt 6, 0x2cb310
  02cb30c  li 28, 1
  02cb310  addic 3, 1, 112
  02cb314  ori 4, 31, 0
  02cb318  bl 0x2c9a68
  02cb31c  fmr 29, 1
  02cb320  lis 3, 45
  02cb324  lfs 31, 24(31)
  02cb328  addi 3, 3, -20032
  02cb32c  fsubs 31, 29, 31
  02cb330  stfs 29, 120(1)
  02cb334  lfs 8, 8(3)
  02cb338  fcmpu 0, 29, 8
  02cb33c  bf 2, 0x2cb364
  02cb340  cmpwi 28, 0
  02cb344  ori 3, 26, 0
  02cb348  bt 2, 0x2cb360
  02cb34c  addic 5, 1, 160
  02cb350  ori 3, 31, 0
  02cb354  ori 4, 30, 0
  02cb358  li 6, 1
  02cb35c  bl 0x2cb1e0
  02cb360  b 0x2cb7d8
  02cb364  lis 3, 45
  02cb368  lfs 1, 44(31)
  02cb36c  addi 3, 3, -20032
  02cb370  cmpwi 1, 28, 0
  02cb374  lfs 3, 12(3)
  02cb378  lwz 3, 36(31)
  02cb37c  fmuls 3, 1, 3
  02cb380  lfs 2, 36(3)
  02cb384  fdivs 3, 3, 2
  02cb388  fcmpu 0, 31, 3
  02cb38c  cror 2, 0, 2
  02cb390  bt 2, 0x2cb3b4
  02cb394  ori 3, 26, 0
  02cb398  bt 6, 0x2cb3b0
  02cb39c  addic 5, 1, 160
  02cb3a0  ori 3, 31, 0
  02cb3a4  ori 4, 30, 0
  02cb3a8  li 6, 1
  02cb3ac  bl 0x2cb1e0
  02cb3b0  b 0x2cb7d8
  02cb3b4  lis 27, 161
  02cb3b8  addic 27, 27, 2368
  02cb3bc  lfs 5, 68(27)
  02cb3c0  lfs 3, 64(27)
  02cb3c4  fmuls 4, 5, 5
  02cb3c8  lfs 7, 72(27)
  02cb3cc  fmadds 9, 3, 3, 4
  02cb3d0  fmr 4, 8
  02cb3d4  fmadds 9, 7, 7, 9
  02cb3d8  fmr 6, 4
  02cb3dc  fsqrts 10, 9
  02cb3e0  fcmpu 0, 10, 8
  02cb3e4  bt 2, 0x2cb434
  02cb3e8  frsqrte 4, 9
  02cb3ec  lis 3, 45
  02cb3f0  addi 3, 3, -20032
  02cb3f4  lfs 6, 16(3)
  02cb3f8  fmuls 8, 9, 4
  02cb3fc  fmuls 10, 28, 4
  02cb400  fnmsubs 8, 8, 4, 6
  02cb404  fmadds 4, 8, 10, 4
  02cb408  fmuls 8, 9, 4
  02cb40c  fmuls 10, 28, 4
  02cb410  fnmsubs 8, 8, 4, 6
  02cb414  fmadds 4, 8, 10, 4
  02cb418  fmuls 8, 9, 4
  02cb41c  fmuls 9, 28, 4
  02cb420  fnmsubs 6, 8, 4, 6
  02cb424  fmadds 8, 6, 9, 4
  02cb428  fmuls 4, 3, 8
  02cb42c  fmuls 6, 5, 8
  02cb430  fmuls 8, 7, 8
  02cb434  fabs 3, 4
  02cb438  fabs 4, 6
  02cb43c  cmpwi 1, 28, 0
  02cb440  fabs 5, 8
  02cb444  fadds 3, 3, 4
  02cb448  fcmpu 0, 3, 5
  02cb44c  cror 2, 0, 2
  02cb450  bt 2, 0x2cb474
  02cb454  ori 3, 26, 0
  02cb458  bt 6, 0x2cb470
  02cb45c  addic 5, 1, 160
  02cb460  ori 3, 31, 0
  02cb464  ori 4, 30, 0
  02cb468  li 6, 1
  02cb46c  bl 0x2cb1e0
  02cb470  b 0x2cb7d8
  02cb474  lis 3, 45
  02cb478  addi 25, 3, -20032
  02cb47c  lis 3, 151
  02cb480  lfs 25, 20(25)
  02cb484  fmuls 1, 1, 25
  02cb488  addic 3, 3, -25432
  02cb48c  lbz 3, 20(3)
  02cb490  fdivs 1, 1, 2
  02cb494  fadds 1, 29, 1
  02cb498  stfs 1, 120(1)
  02cb49c  bl 0x502730
  02cb4a0  nop
  02cb4a4  addic 3, 1, 112
  02cb4a8  lfs 29, 16(25)
  02cb4ac  cmpwi 3, 0
  02cb4b0  fmadds 29, 1, 28, 29
  02cb4b4  bt 2, 0x2cb4cc
  02cb4b8  lfs 3, 112(1)
  02cb4bc  lfs 2, 116(1)
  02cb4c0  lfs 1, 120(1)
  02cb4c4  lfs 24, 124(1)
  02cb4c8  b 0x2cb4dc
  02cb4cc  lfs 3, 16(31)
  02cb4d0  lfs 2, 20(31)
  02cb4d4  lfs 1, 24(31)
  02cb4d8  lfs 24, 28(31)
  02cb4dc  lis 3, 45
  02cb4e0  stfs 3, 208(1)
  02cb4e4  stfs 2, 212(1)
  02cb4e8  li 5, 6
  02cb4ec  addi 4, 3, -20032
  02cb4f0  stfs 24, 220(1)
  02cb4f4  addic 3, 1, 208
  02cb4f8  ori 6, 31, 0
  02cb4fc  lfs 24, 24(4)
  02cb500  fmadds 1, 29, 24, 1
  02cb504  stfs 1, 216(1)
  02cb508  lfs 1, 28(4)
  02cb50c  fmuls 1, 29, 1
  02cb510  bl 0x59e20
  02cb514  nop
  02cb518  lfs 1, 44(31)
  02cb51c  cmpwi 3, 0
  02cb520  lwz 3, 36(31)
  02cb524  lfs 2, 16(31)
  02cb528  lfs 3, 20(31)
  02cb52c  lfs 4, 24(31)
  02cb530  lfs 5, 28(31)
  02cb534  bt 2, 0x2cb568
  02cb538  lfs 1, 56(27)
  02cb53c  cmpwi 28, 0
  02cb540  fnmsubs 1, 29, 24, 1
  02cb544  ori 3, 26, 0
  02cb548  stfs 1, 56(27)
  02cb54c  bt 2, 0x2cb564
  02cb550  addic 5, 1, 160
  02cb554  ori 3, 31, 0
  02cb558  ori 4, 30, 0
  02cb55c  li 6, 1
  02cb560  bl 0x2cb1e0
  02cb564  b 0x2cb7d8
  02cb568  fmuls 6, 1, 25
  02cb56c  lfs 7, 36(3)
  02cb570  fmuls 1, 1, 24
  02cb574  clrlwi 4, 29, 24
  02cb578  fdivs 6, 6, 7
  02cb57c  lfs 7, 120(1)
  02cb580  stfs 2, 128(1)
  02cb584  stfs 3, 132(1)
  02cb588  stfs 4, 136(1)
  02cb58c  stfs 5, 140(1)
  02cb590  lfs 2, 112(1)
  02cb594  lfs 3, 116(1)
  02cb598  lfs 5, 124(1)
  02cb59c  cmpwi 4, 0
  02cb5a0  fsubs 6, 7, 6
  02cb5a4  stfs 6, 120(1)
  02cb5a8  lfs 7, 36(3)
  02cb5ac  fdivs 7, 1, 7
  02cb5b0  stfs 2, 144(1)
  02cb5b4  stfs 3, 148(1)
  02cb5b8  stfs 6, 152(1)
  02cb5bc  stfs 5, 156(1)
  02cb5c0  fadds 2, 4, 7
  02cb5c4  stfs 2, 136(1)
  02cb5c8  lfs 2, 36(3)
  02cb5cc  fdivs 1, 1, 2
  02cb5d0  fadds 1, 6, 1
  02cb5d4  stfs 1, 152(1)
  02cb5d8  bt 2, 0x2cb624
  02cb5dc  addic 3, 1, 128
  02cb5e0  addic 4, 1, 144
  02cb5e4  li 5, 6
  02cb5e8  ori 6, 31, 0
  02cb5ec  li 7, 0
  02cb5f0  bl 0x57820
  02cb5f4  nop
  02cb5f8  cmpwi 3, 0
  02cb5fc  bf 2, 0x2cb624
  02cb600  cmpwi 28, 0
  02cb604  ori 3, 26, 0
  02cb608  bt 2, 0x2cb620
  02cb60c  addic 5, 1, 160
  02cb610  ori 3, 31, 0
  02cb614  ori 4, 30, 0
  02cb618  li 6, 1
  02cb61c  bl 0x2cb1e0
  02cb620  b 0x2cb7d8
  02cb624  lis 3, 151
  02cb628  lfs 1, 80(30)
  02cb62c  addic 29, 3, -25376
  02cb630  addic 5, 1, 112
  02cb634  addic 4, 29, 7952
  02cb638  stfs 1, 7968(29)
  02cb63c  lfs 1, 84(30)
  02cb640  stfs 1, 7972(29)
  02cb644  lfs 1, 88(30)
  02cb648  stfs 1, 7976(29)
  02cb64c  lbz 3, 104(30)
  02cb650  stb 3, 7999(29)
  02cb654  lfs 1, 68(30)
  02cb658  ori 3, 31, 0
  02cb65c  stfs 1, 8000(29)
  02cb660  lfs 1, 0(30)
  02cb664  stfs 1, 7952(29)
  02cb668  lfs 1, 4(30)
  02cb66c  stfs 1, 7956(29)
  02cb670  lfs 1, 8(30)
  02cb674  stfs 1, 7960(29)
  02cb678  lfs 1, 12(30)
  02cb67c  stfs 1, 7964(29)
  02cb680  bl 0x2caee0
  02cb684  lfs 1, 7968(29)
  02cb688  vspltisw 2, 0
  02cb68c  li 5, 192
  02cb690  stfs 1, 80(30)
  02cb694  lfs 2, 7972(29)
  02cb698  stfs 2, 84(30)
  02cb69c  lfs 2, 7976(29)
  02cb6a0  stfs 2, 88(30)
  02cb6a4  lbz 3, 7999(29)
  02cb6a8  addic 4, 1, 192
  02cb6ac  stb 3, 104(30)
  02cb6b0  lfs 2, 8000(29)
  02cb6b4  addic 3, 31, 16
  02cb6b8  li 6, 0
  02cb6bc  stfs 2, 68(30)
  02cb6c0  lfs 2, 16(31)
  02cb6c4  lfs 3, 20(31)
  02cb6c8  fadds 2, 27, 2
  02cb6cc  lfs 4, 24(31)
  02cb6d0  fadds 3, 26, 3
  02cb6d4  stfs 30, 188(1)
  02cb6d8  fmadds 4, 31, 28, 4
  02cb6dc  stfs 2, 176(1)
  02cb6e0  stfs 3, 180(1)
  02cb6e4  stfs 4, 184(1)
  02cb6e8  stvx 2, 5, 1
  02cb6ec  lfs 2, 7980(29)
  02cb6f0  stfs 1, 200(1)
  02cb6f4  fmr 1, 2
  02cb6f8  bl 0x104b7c
  02cb6fc  nop
  02cb700  li 3, 10
  02cb704  stfs 1, 184(1)
  02cb708  bl 0x502730
  02cb70c  nop
  02cb710  li 3, 10
  02cb714  bl 0x502730
  02cb718  nop
  02cb71c  addic 3, 1, 128
  02cb720  addic 4, 1, 176
  02cb724  li 5, 6
  02cb728  ori 6, 31, 0
  02cb72c  li 7, 0
  02cb730  bl 0x57820
  02cb734  nop
  02cb738  cmpwi 3, 0
  02cb73c  bt 2, 0x2cb774
  02cb740  lwz 3, 24(27)
  02cb744  cmpwi 1, 28, 0
  02cb748  lwz 4, 56(30)
  02cb74c  cmpw 3, 4
  02cb750  bt 2, 0x2cb774
  02cb754  ori 3, 26, 0
  02cb758  bt 6, 0x2cb770
  02cb75c  addic 5, 1, 160
  02cb760  ori 3, 31, 0
  02cb764  ori 4, 30, 0
  02cb768  li 6, 1
  02cb76c  bl 0x2cb1e0
  02cb770  b 0x2cb7d8
  02cb774  addic 3, 1, 176
  02cb778  addic 4, 1, 144
  02cb77c  li 5, 6
  02cb780  ori 6, 31, 0
  02cb784  li 7, 0
  02cb788  bl 0x57820
  02cb78c  nop
  02cb790  cmpwi 3, 0
  02cb794  bt 2, 0x2cb7cc
  02cb798  lwz 3, 24(27)
  02cb79c  lwz 4, 56(30)
  02cb7a0  cmpwi 1, 28, 0
  02cb7a4  cmpw 3, 4
  02cb7a8  bt 2, 0x2cb7cc
  02cb7ac  ori 3, 26, 0
  02cb7b0  bt 6, 0x2cb7c8
  02cb7b4  addic 5, 1, 160
  02cb7b8  ori 3, 31, 0
  02cb7bc  ori 4, 30, 0
  02cb7c0  li 6, 1
  02cb7c4  bl 0x2cb1e0
  02cb7c8  b 0x2cb7d8
  02cb7cc  li 4, 13
  02cb7d0  li 3, 1
  02cb7d4  stb 4, 188(31)
  02cb7d8  ld 0, 368(1)
  02cb7dc  mtlr 0
  02cb7e0  lfd 24, 288(1)
  02cb7e4  lfd 25, 296(1)
  02cb7e8  lfd 26, 304(1)
  02cb7ec  lfd 27, 312(1)
  02cb7f0  lfd 28, 320(1)
  02cb7f4  lfd 29, 328(1)
  02cb7f8  lfd 30, 336(1)
  02cb7fc  lfd 31, 344(1)
  02cb800  ld 25, 232(1)
  02cb804  ld 26, 240(1)
  02cb808  ld 27, 248(1)
  02cb80c  ld 28, 256(1)
  02cb810  ld 29, 264(1)
  02cb814  ld 30, 272(1)
  02cb818  ld 31, 280(1)
  02cb81c  addi 1, 1, 352
  02cb820  blr

FUN_002cb828:   # 0x2cb828, 0x100 bytes
  02cb828  stdu 1, -144(1)
  02cb82c  mflr 0
  02cb830  std 0, 160(1)
  02cb834  std 29, 120(1)
  02cb838  ori 29, 3, 0
  02cb83c  std 31, 136(1)
  02cb840  li 3, 186
  02cb844  std 30, 128(1)
  02cb848  ori 31, 5, 0
  02cb84c  std 28, 112(1)
  02cb850  ori 30, 4, 0
  02cb854  bl 0xefa28
  02cb858  nop
  02cb85c  ori 28, 3, 0
  02cb860  cmpwi 28, 0
  02cb864  bt 2, 0x2cb904
  02cb868  li 3, 255
  02cb86c  li 4, 1
  02cb870  li 5, 0
  02cb874  stb 3, 48(28)
  02cb878  stb 4, 49(28)
  02cb87c  stb 5, 32(28)
  02cb880  stb 5, 188(28)
  02cb884  lfs 1, 0(30)
  02cb888  lwz 4, 120(28)
  02cb88c  stfs 1, 16(28)
  02cb890  lfs 1, 4(30)
  02cb894  stfs 1, 20(28)
  02cb898  lfs 1, 8(30)
  02cb89c  stfs 1, 24(28)
  02cb8a0  lfs 1, 12(30)
  02cb8a4  sth 3, 50(28)
  02cb8a8  stfs 1, 28(28)
  02cb8ac  ori 3, 28, 0
  02cb8b0  lfs 1, 0(31)
  02cb8b4  stfs 1, 16(4)
  02cb8b8  lfs 1, 4(31)
  02cb8bc  stfs 1, 20(4)
  02cb8c0  lfs 1, 8(31)
  02cb8c4  stw 29, 96(4)
  02cb8c8  stfs 1, 24(4)
  02cb8cc  lfs 1, 12(31)
  02cb8d0  stfs 1, 28(4)
  02cb8d4  bl 0xf31a8
  02cb8d8  nop
  02cb8dc  ori 3, 28, 0
  02cb8e0  bl 0x10c000
  02cb8e4  nop
  02cb8e8  lis 3, 45
  02cb8ec  lwz 4, 36(28)
  02cb8f0  addi 3, 3, -18396
  02cb8f4  lfs 1, 36(4)
  02cb8f8  lfs 2, 0(3)
  02cb8fc  fmuls 1, 1, 2
  02cb900  stfs 1, 44(28)
  02cb904  ori 3, 28, 0
  02cb908  ld 0, 160(1)
  02cb90c  mtlr 0
  02cb910  ld 28, 112(1)
  02cb914  ld 29, 120(1)
  02cb918  ld 30, 128(1)
  02cb91c  ld 31, 136(1)
  02cb920  addi 1, 1, 144
  02cb924  blr

M186_002cb930:   # 0x2cb930, 0x120 bytes
  02cb930  stdu 1, -160(1)
  02cb934  mflr 0
  02cb938  std 0, 176(1)
  02cb93c  ori 6, 3, 0
  02cb940  lis 3, 45
  02cb944  addi 8, 3, -18136
  02cb948  lfs 1, 16(6)
  02cb94c  lfs 2, 20(6)
  02cb950  stfs 1, 112(1)
  02cb954  stfs 2, 116(1)
  02cb958  lfs 3, 28(6)
  02cb95c  stfs 1, 128(1)
  02cb960  stfs 3, 124(1)
  02cb964  stfs 2, 132(1)
  02cb968  stfs 3, 140(1)
  02cb96c  addic 3, 1, 128
  02cb970  lfs 1, 0(8)
  02cb974  addic 4, 1, 112
  02cb978  lfs 2, 24(6)
  02cb97c  std 31, 152(1)
  02cb980  li 5, 6
  02cb984  lbz 31, 32(6)
  02cb988  li 7, 0
  02cb98c  fsubs 1, 2, 1
  02cb990  stfs 1, 120(1)
  02cb994  lfs 1, 4(8)
  02cb998  fadds 1, 2, 1
  02cb99c  stfs 1, 136(1)
  02cb9a0  bl 0x57820
  02cb9a4  nop
  02cb9a8  cmpwi 3, 0
  02cb9ac  bt 2, 0x2cba38
  02cb9b0  lis 3, 161
  02cb9b4  addic 3, 3, 2368
  02cb9b8  lwz 3, 24(3)
  02cb9bc  cmpwi 3, 0
  02cb9c0  bt 2, 0x2cb9e8
  02cb9c4  lwz 3, 36(3)
  02cb9c8  cmpwi 3, 0
  02cb9cc  bt 2, 0x2cb9e8
  02cb9d0  lhz 3, 70(3)
  02cb9d4  extsh 3, 3
  02cb9d8  cmpwi 3, 5
  02cb9dc  bf 2, 0x2cb9e8
  02cb9e0  li 31, 11
  02cb9e4  b 0x2cba38
  02cb9e8  bl 0x60780
  02cb9ec  nop
  02cb9f0  cmpwi 3, 3
  02cb9f4  bt 1, 0x2cba18
  02cb9f8  cmpwi 3, 1
  02cb9fc  bt 1, 0x2cba0c
  02cba00  cmpwi 3, -1
  02cba04  bf 1, 0x2cba38
  02cba08  b 0x2cba34
  02cba0c  cmpwi 3, 2
  02cba10  bf 1, 0x2cba38
  02cba14  b 0x2cba34
  02cba18  cmpwi 3, 10
  02cba1c  bt 1, 0x2cba2c
  02cba20  cmpwi 3, 8
  02cba24  bt 2, 0x2cba34
  02cba28  b 0x2cba38
  02cba2c  cmpwi 3, 13
  02cba30  bt 1, 0x2cba38
  02cba34  li 31, 11
  02cba38  ori 3, 31, 0
  02cba3c  ld 0, 176(1)
  02cba40  mtlr 0
  02cba44  ld 31, 152(1)
  02cba48  addi 1, 1, 160
  02cba4c  blr

UpdateMoby_186:   # 0x2cbaf8, 0x1e60 bytes
  02cbaf8  stdu 1, -432(1)
  02cbafc  mflr 0
  02cbb00  std 0, 448(1)
  02cbb04  stfd 23, 360(1)
  02cbb08  stfd 24, 368(1)
  02cbb0c  stfd 25, 376(1)
  02cbb10  stfd 26, 384(1)
  02cbb14  stfd 27, 392(1)
  02cbb18  stfd 28, 400(1)
  02cbb1c  stfd 29, 408(1)
  02cbb20  stfd 30, 416(1)
  02cbb24  stfd 31, 424(1)
  02cbb28  std 31, 352(1)
  02cbb2c  cmpwi 3, 0
  02cbb30  std 30, 344(1)
  02cbb34  std 29, 336(1)
  02cbb38  std 28, 328(1)
  02cbb3c  std 27, 320(1)
  02cbb40  std 26, 312(1)
  02cbb44  std 25, 304(1)
  02cbb48  ori 31, 3, 0
  02cbb4c  bt 2, 0x2cd908
  02cbb50  lwz 30, 120(31)
  02cbb54  cmpwi 30, 0
  02cbb58  bt 2, 0x2cd908
  02cbb5c  lis 3, 161
  02cbb60  lwz 3, 1800(3)
  02cbb64  cmpwi 3, 2
  02cbb68  bf 2, 0x2cbb7c
  02cbb6c  lhz 3, 52(31)
  02cbb70  ori 3, 3, 65
  02cbb74  sth 3, 52(31)
  02cbb78  b 0x2cd908
  02cbb7c  li 3, -66
  02cbb80  lhz 6, 52(31)
  02cbb84  lwz 7, 16(31)
  02cbb88  lis 4, 45
  02cbb8c  and 3, 6, 3
  02cbb90  srawi 6, 7, 31
  02cbb94  addi 4, 4, -17836
  02cbb98  srwi 8, 6, 1
  02cbb9c  sth 3, 52(31)
  02cbba0  lis 5, 16384
  02cbba4  xor 3, 8, 7
  02cbba8  subc 3, 3, 6
  02cbbac  lfs 29, 0(4)
  02cbbb0  cmpw 3, 5
  02cbbb4  bt 0, 0x2cbc28
  02cbbb8  lis 4, 17535
  02cbbbc  ori 4, 4, 16384
  02cbbc0  cmpw 3, 4
  02cbbc4  bt 1, 0x2cbc28
  02cbbc8  lwz 5, 20(31)
  02cbbcc  lis 3, 17535
  02cbbd0  srawi 6, 5, 31
  02cbbd4  lis 4, 16384
  02cbbd8  srwi 7, 6, 1
  02cbbdc  ori 3, 3, 16384
  02cbbe0  xor 5, 7, 5
  02cbbe4  subc 5, 5, 6
  02cbbe8  cmpw 1, 5, 3
  02cbbec  cmpw 5, 4
  02cbbf0  cror 2, 0, 5
  02cbbf4  bt 2, 0x2cbc28
  02cbbf8  lwz 5, 24(31)
  02cbbfc  lis 3, 17535
  02cbc00  srawi 6, 5, 31
  02cbc04  lis 4, 16384
  02cbc08  srwi 7, 6, 1
  02cbc0c  ori 3, 3, 16384
  02cbc10  xor 5, 7, 5
  02cbc14  subc 5, 5, 6
  02cbc18  cmpw 5, 4
  02cbc1c  cmpw 1, 5, 3
  02cbc20  bt 0, 0x2cbc28
  02cbc24  bf 5, 0x2cbc38
  02cbc28  ori 3, 31, 0
  02cbc2c  bl 0xefb38
  02cbc30  nop
  02cbc34  b 0x2cd908
  02cbc38  lis 4, 128
  02cbc3c  ori 3, 31, 0
  02cbc40  ori 4, 4, 1
  02cbc44  li 5, 0
  02cbc48  bl 0x10675c
  02cbc4c  nop
  02cbc50  cmpwi 3, 0
  02cbc54  bt 2, 0x2cbc60
  02cbc58  li 3, 11
  02cbc5c  stb 3, 32(31)
  02cbc60  lis 28, 151
  02cbc64  addic 28, 28, -25432
  02cbc68  lbz 3, 20(28)
  02cbc6c  bl 0x502730
  02cbc70  nop
  02cbc74  lis 3, 45
  02cbc78  addi 29, 3, -17836
  02cbc7c  lwz 3, 36(31)
  02cbc80  lfs 28, 4(29)
  02cbc84  lfs 2, 44(31)
  02cbc88  fadds 31, 1, 28
  02cbc8c  lfs 3, 36(3)
  02cbc90  lfs 27, 8(29)
  02cbc94  fmsubs 1, 3, 31, 2
  02cbc98  fmadds 1, 1, 27, 2
  02cbc9c  stfs 1, 44(31)
  02cbca0  lbz 3, 20(28)
  02cbca4  bl 0x502730
  02cbca8  nop
  02cbcac  lfs 26, 12(29)
  02cbcb0  lbz 3, 82(31)
  02cbcb4  fmadds 30, 1, 26, 28
  02cbcb8  cmpwi 3, 0
  02cbcbc  bt 2, 0x2cbcd0
  02cbcc0  cmpwi 3, 6
  02cbcc4  bt 2, 0x2cbcd0
  02cbcc8  cmpwi 3, 7
  02cbccc  bf 2, 0x2cbcd8
  02cbcd0  fdivs 1, 30, 31
  02cbcd4  b 0x2cbcdc
  02cbcd8  fmr 1, 28
  02cbcdc  lbz 3, 32(31)
  02cbce0  stfs 1, 88(31)
  02cbce4  cmpwi 3, 11
  02cbce8  bt 2, 0x2cc240
  02cbcec  lis 3, 45
  02cbcf0  addi 29, 3, -17836
  02cbcf4  lfs 1, 16(29)
  02cbcf8  fmuls 1, 31, 1
  02cbcfc  bl 0x502758
  02cbd00  nop
  02cbd04  lis 4, 151
  02cbd08  addic 5, 3, 1
  02cbd0c  addic 3, 4, -25376
  02cbd10  li 4, 0
  02cbd14  stw 5, 7872(3)
  02cbd18  lfs 3, 20(29)
  02cbd1c  lfs 1, 24(29)
  02cbd20  stw 4, 7920(3)
  02cbd24  fmadds 2, 31, 3, 1
  02cbd28  stfs 2, 7876(3)
  02cbd2c  lbz 4, 32(31)
  02cbd30  cmpwi 4, 0
  02cbd34  bf 2, 0x2cbf20
  02cbd38  vspltisw 2, 0
  02cbd3c  li 4, 7952
  02cbd40  li 6, 7968
  02cbd44  li 7, 7984
  02cbd48  lis 8, 45
  02cbd4c  li 5, 8000
  02cbd50  addi 8, 8, -17836
  02cbd54  stvx 2, 4, 3
  02cbd58  stvx 2, 6, 3
  02cbd5c  lis 4, 114
  02cbd60  stvx 2, 7, 3
  02cbd64  stvx 2, 5, 3
  02cbd68  lfs 2, 28(8)
  02cbd6c  lis 5, 16025
  02cbd70  fmuls 2, 31, 2
  02cbd74  lfs 3, -3064(4)
  02cbd78  li 6, 0
  02cbd7c  lis 7, 16428
  02cbd80  ori 5, 5, 39322
  02cbd84  fmuls 1, 3, 1
  02cbd88  ori 7, 7, 52429
  02cbd8c  lis 9, 16457
  02cbd90  li 10, 3
  02cbd94  li 11, 4
  02cbd98  stfs 2, 7880(3)
  02cbd9c  stfs 2, 7884(3)
  02cbda0  lfs 2, 32(8)
  02cbda4  fmuls 2, 3, 2
  02cbda8  li 12, 14
  02cbdac  stfs 2, 68(30)
  02cbdb0  lfs 2, 36(8)
  02cbdb4  fmuls 4, 31, 2
  02cbdb8  fmuls 2, 3, 2
  02cbdbc  fmuls 4, 4, 3
  02cbdc0  stfs 4, 64(30)
  02cbdc4  stw 6, 7896(3)
  02cbdc8  stw 5, 7904(3)
  02cbdcc  stw 7, 7908(3)
  02cbdd0  stfs 4, 7900(3)
  02cbdd4  lfs 4, 40(8)
  02cbdd8  fmuls 4, 3, 4
  02cbddc  ori 5, 9, 4059
  02cbde0  lis 7, 114
  02cbde4  li 9, 2
  02cbde8  fmuls 4, 4, 30
  02cbdec  stfs 4, 92(30)
  02cbdf0  stfs 2, 7936(3)
  02cbdf4  stfs 1, 7932(3)
  02cbdf8  lfs 4, 44(8)
  02cbdfc  stw 5, 7912(3)
  02cbe00  fmuls 3, 3, 4
  02cbe04  lfs 5, -3048(7)
  02cbe08  lis 5, 16624
  02cbe0c  lis 7, 16696
  02cbe10  stfs 3, 7940(3)
  02cbe14  lfs 4, 48(8)
  02cbe18  fmuls 4, 5, 4
  02cbe1c  stfs 4, 7980(3)
  02cbe20  lfs 4, 52(8)
  02cbe24  stw 5, 7988(3)
  02cbe28  stw 7, 7992(3)
  02cbe2c  stb 9, 7996(3)
  02cbe30  stb 10, 7997(3)
  02cbe34  stb 11, 7998(3)
  02cbe38  stfs 1, 8004(3)
  02cbe3c  fmuls 1, 31, 4
  02cbe40  stfs 2, 8008(3)
  02cbe44  stfs 3, 8012(3)
  02cbe48  stfs 1, 7984(3)
  02cbe4c  stw 6, 56(30)
  02cbe50  stb 12, 32(31)
  02cbe54  stw 6, 48(30)
  02cbe58  lfs 1, -3064(4)
  02cbe5c  lfs 2, 64(30)
  02cbe60  fmuls 1, 1, 4
  02cbe64  fmuls 1, 1, 30
  02cbe68  stfs 1, 92(30)
  02cbe6c  stfs 2, 7888(3)
  02cbe70  lfs 1, 68(30)
  02cbe74  stfs 1, 7892(3)
  02cbe78  lfs 1, 72(30)
  02cbe7c  stfs 1, 7896(3)
  02cbe80  lwz 4, 76(30)
  02cbe84  stw 4, 7944(3)
  02cbe88  lfs 1, 92(30)
  02cbe8c  stfs 1, 7908(3)
  02cbe90  lfs 1, 80(30)
  02cbe94  stfs 1, 7968(3)
  02cbe98  lfs 1, 84(30)
  02cbe9c  stfs 1, 7972(3)
  02cbea0  lfs 1, 88(30)
  02cbea4  stfs 1, 7976(3)
  02cbea8  lbz 4, 104(30)
  02cbeac  stb 4, 7999(3)
  02cbeb0  lfs 1, 68(30)
  02cbeb4  stfs 1, 8000(3)
  02cbeb8  lfs 1, 0(30)
  02cbebc  stfs 1, 7952(3)
  02cbec0  lfs 1, 4(30)
  02cbec4  stfs 1, 7956(3)
  02cbec8  lfs 1, 8(30)
  02cbecc  stfs 1, 7960(3)
  02cbed0  lfs 1, 12(30)
  02cbed4  stfs 1, 7964(3)
  02cbed8  lbz 3, 83(31)
  02cbedc  cmpwi 3, 5
  02cbee0  bt 2, 0x2cbf20
  02cbee4  lis 3, 45
  02cbee8  lis 4, 114
  02cbeec  addi 3, 3, -17836
  02cbef0  li 5, 0
  02cbef4  lfs 1, 56(3)
  02cbef8  lfs 2, -3056(4)
  02cbefc  ori 3, 31, 0
  02cbf00  li 4, 5
  02cbf04  fmuls 1, 2, 1
  02cbf08  fctiwz 1, 1
  02cbf0c  stfd 1, 280(1)
  02cbf10  lwz 6, 284(1)
  02cbf14  extsw 6, 6
  02cbf18  bl 0xfddc0
  02cbf1c  nop
  02cbf20  lbz 3, 32(31)
  02cbf24  cmpwi 3, 13
  02cbf28  bf 2, 0x2cbffc
  02cbf2c  lwz 30, 96(30)
  02cbf30  cmpwi 30, 0
  02cbf34  bt 2, 0x2cbf4c
  02cbf38  lbz 3, 32(30)
  02cbf3c  cmpwi 3, 254
  02cbf40  cmpwi 1, 3, 253
  02cbf44  bt 2, 0x2cbf4c
  02cbf48  bf 6, 0x2cbf5c
  02cbf4c  ori 3, 31, 0
  02cbf50  bl 0xefb38
  02cbf54  nop
  02cbf58  b 0x2cd908
  02cbf5c  lwz 5, 16(31)
  02cbf60  lis 3, 17535
  02cbf64  lis 4, 16384
  02cbf68  srawi 6, 5, 31
  02cbf6c  ori 3, 3, 16384
  02cbf70  srwi 7, 6, 1
  02cbf74  xor 5, 7, 5
  02cbf78  subc 5, 5, 6
  02cbf7c  cmpw 1, 5, 3
  02cbf80  cmpw 5, 4
  02cbf84  cror 2, 0, 5
  02cbf88  bt 2, 0x2cbfec
  02cbf8c  lwz 5, 20(31)
  02cbf90  lis 3, 17535
  02cbf94  lis 4, 16384
  02cbf98  srawi 6, 5, 31
  02cbf9c  ori 3, 3, 16384
  02cbfa0  srwi 7, 6, 1
  02cbfa4  xor 5, 7, 5
  02cbfa8  subc 5, 5, 6
  02cbfac  cmpw 1, 5, 3
  02cbfb0  cmpw 5, 4
  02cbfb4  cror 2, 0, 5
  02cbfb8  bt 2, 0x2cbfec
  02cbfbc  lwz 5, 24(31)
  02cbfc0  lis 3, 17535
  02cbfc4  lis 4, 16384
  02cbfc8  srawi 6, 5, 31
  02cbfcc  ori 3, 3, 16384
  02cbfd0  srwi 7, 6, 1
  02cbfd4  xor 5, 7, 5
  02cbfd8  subc 5, 5, 6
  02cbfdc  cmpw 5, 4
  02cbfe0  cmpw 1, 5, 3
  02cbfe4  bt 0, 0x2cbfec
  02cbfe8  bf 5, 0x2cd908
  02cbfec  ori 3, 31, 0
  02cbff0  bl 0xefb38
  02cbff4  nop
  02cbff8  b 0x2cd908
  02cbffc  lis 3, 45
  02cc000  lwz 4, 52(30)
  02cc004  lis 5, 114
  02cc008  addi 3, 3, -17836
  02cc00c  addic 4, 4, 1
  02cc010  stw 4, 52(30)
  02cc014  lfs 1, 60(3)
  02cc018  lfs 2, -3056(5)
  02cc01c  fmuls 1, 2, 1
  02cc020  fctiwz 1, 1
  02cc024  stfd 1, 280(1)
  02cc028  lwz 3, 284(1)
  02cc02c  cmpw 4, 3
  02cc030  bf 1, 0x2cc03c
  02cc034  li 3, 11
  02cc038  stb 3, 32(31)
  02cc03c  addic 3, 30, 48
  02cc040  bl 0x4fff60
  02cc044  nop
  02cc048  lfs 1, 16(31)
  02cc04c  ori 3, 31, 0
  02cc050  li 4, 5
  02cc054  stfs 1, 32(30)
  02cc058  lfs 1, 20(31)
  02cc05c  li 5, 0
  02cc060  stfs 1, 36(30)
  02cc064  lfs 1, 24(31)
  02cc068  stfs 1, 40(30)
  02cc06c  lfs 1, 28(31)
  02cc070  stfs 1, 44(30)
  02cc074  bl 0x2c9860
  02cc078  cmpwi 3, 0
  02cc07c  lfs 1, 24(31)
  02cc080  bt 2, 0x2cc1f8
  02cc084  lis 4, 161
  02cc088  addic 4, 4, 2368
  02cc08c  lwz 3, 24(4)
  02cc090  lwz 5, 28(4)
  02cc094  cmpwi 3, 0
  02cc098  cmpwi 1, 5, 0
  02cc09c  bt 2, 0x2cc0e0
  02cc0a0  bf 4, 0x2cc1f8
  02cc0a4  lhz 5, 52(3)
  02cc0a8  rlwinm 5, 5, 0, 19, 19
  02cc0ac  cmpwi 5, 0
  02cc0b0  bt 2, 0x2cc0dc
  02cc0b4  lwz 3, 36(3)
  02cc0b8  cmpwi 3, 0
  02cc0bc  bt 2, 0x2cc0dc
  02cc0c0  lhz 3, 70(3)
  02cc0c4  extsh 3, 3
  02cc0c8  cmpwi 3, 5
  02cc0cc  bf 2, 0x2cc0dc
  02cc0d0  li 3, 11
  02cc0d4  stb 3, 32(31)
  02cc0d8  b 0x2cc1f8
  02cc0dc  bf 4, 0x2cc1f8
  02cc0e0  lfs 2, 48(4)
  02cc0e4  lis 3, 45
  02cc0e8  stfs 2, 16(31)
  02cc0ec  lfs 2, 52(4)
  02cc0f0  addi 3, 3, -17836
  02cc0f4  stfs 2, 20(31)
  02cc0f8  lfs 2, 56(4)
  02cc0fc  fsubs 3, 2, 1
  02cc100  stfs 2, 24(31)
  02cc104  lfs 2, 60(4)
  02cc108  stfs 2, 28(31)
  02cc10c  lfs 2, 64(3)
  02cc110  fabs 3, 3
  02cc114  fcmpu 0, 3, 2
  02cc118  cror 6, 0, 2
  02cc11c  bt 6, 0x2cc134
  02cc120  lis 3, 45
  02cc124  addi 3, 3, -17836
  02cc128  lfs 2, 36(3)
  02cc12c  fadds 1, 1, 2
  02cc130  stfs 1, 24(31)
  02cc134  lfs 1, 64(4)
  02cc138  lis 29, 114
  02cc13c  addic 27, 30, 16
  02cc140  stfs 1, 16(30)
  02cc144  lfs 1, 68(4)
  02cc148  ori 3, 27, 0
  02cc14c  stfs 1, 20(30)
  02cc150  lfs 1, 72(4)
  02cc154  stfs 1, 24(30)
  02cc158  lfs 1, 76(4)
  02cc15c  ori 4, 27, 0
  02cc160  stfs 1, 28(30)
  02cc164  lfs 1, -3064(29)
  02cc168  fmuls 1, 1, 27
  02cc16c  bl 0x5e8e80
  02cc170  nop
  02cc174  lfs 1, -3064(29)
  02cc178  ori 3, 27, 0
  02cc17c  ori 4, 27, 0
  02cc180  fmuls 1, 1, 27
  02cc184  bl 0x5e7ed8
  02cc188  nop
  02cc18c  li 3, 8
  02cc190  lis 5, 114
  02cc194  stb 3, 32(31)
  02cc198  lwz 4, 56(30)
  02cc19c  lfs 1, -3056(5)
  02cc1a0  cmpwi 4, 0
  02cc1a4  bt 2, 0x2cc1b8
  02cc1a8  lwz 3, 48(30)
  02cc1ac  stw 4, 60(30)
  02cc1b0  addic 3, 3, 500
  02cc1b4  stw 3, 48(30)
  02cc1b8  lbz 3, 83(31)
  02cc1bc  cmpwi 3, 5
  02cc1c0  bt 2, 0x2cc1f8
  02cc1c4  lis 3, 45
  02cc1c8  addi 3, 3, -17836
  02cc1cc  li 4, 5
  02cc1d0  li 5, 0
  02cc1d4  lfs 2, 56(3)
  02cc1d8  ori 3, 31, 0
  02cc1dc  fmuls 1, 1, 2
  02cc1e0  fctiwz 1, 1
  02cc1e4  stfd 1, 280(1)
  02cc1e8  lwz 6, 284(1)
  02cc1ec  extsw 6, 6
  02cc1f0  bl 0xfddc0
  02cc1f4  nop
  02cc1f8  lwz 4, 24(31)
  02cc1fc  lis 3, 15820
  02cc200  srawi 5, 4, 31
  02cc204  ori 3, 3, 52429
  02cc208  srwi 6, 5, 1
  02cc20c  xor 4, 6, 4
  02cc210  subc 4, 4, 5
  02cc214  cmpw 4, 3
  02cc218  bf 0, 0x2cc22c
  02cc21c  ori 3, 31, 0
  02cc220  bl 0xefb38
  02cc224  nop
  02cc228  b 0x2cd908
  02cc22c  lwz 3, 48(30)
  02cc230  cmpwi 3, 4000
  02cc234  bf 1, 0x2cc240
  02cc238  li 3, 11
  02cc23c  stb 3, 32(31)
  02cc240  addic 29, 31, 16
  02cc244  fmr 1, 26
  02cc248  li 4, 0
  02cc24c  ori 3, 29, 0
  02cc250  bl 0xffb70
  02cc254  nop
  02cc258  lis 3, 45
  02cc25c  addi 3, 3, -17836
  02cc260  lfs 25, 68(3)
  02cc264  fcmpu 0, 1, 25
  02cc268  bt 2, 0x2cc2a0
  02cc26c  lis 3, 161
  02cc270  addic 3, 3, 2368
  02cc274  lwz 3, 24(3)
  02cc278  cmpwi 3, 0
  02cc27c  bt 2, 0x2cc2a0
  02cc280  addic 6, 31, 64
  02cc284  ori 4, 3, 0
  02cc288  ori 3, 31, 0
  02cc28c  ori 5, 29, 0
  02cc290  ori 7, 29, 0
  02cc294  ori 8, 6, 0
  02cc298  bl 0x1122e0
  02cc29c  nop
  02cc2a0  lbz 3, 32(31)
  02cc2a4  cmpwi 3, 7
  02cc2a8  cmpwi 1, 3, 1
  02cc2ac  cmpwi 6, 3, -1
  02cc2b0  cmpwi 7, 3, 0
  02cc2b4  bt 1, 0x2cc2dc
  02cc2b8  bt 5, 0x2cc2c8
  02cc2bc  bf 25, 0x2cd864
  02cc2c0  bf 29, 0x2cc318
  02cc2c4  b 0x2cc4c8
  02cc2c8  cmpwi 3, 5
  02cc2cc  bf 1, 0x2cc4f0
  02cc2d0  cmpwi 3, 6
  02cc2d4  bf 1, 0x2cd148
  02cc2d8  b 0x2cd270
  02cc2dc  cmpwi 3, 11
  02cc2e0  bt 1, 0x2cc2f8
  02cc2e4  cmpwi 3, 8
  02cc2e8  bf 1, 0x2cc334
  02cc2ec  cmpwi 3, 10
  02cc2f0  bf 1, 0x2cc4c8
  02cc2f4  b 0x2cd380
  02cc2f8  cmpwi 3, 13
  02cc2fc  bt 1, 0x2cc30c
  02cc300  cmpwi 3, 12
  02cc304  bf 1, 0x2cd568
  02cc308  b 0x2cd5ec
  02cc30c  cmpwi 3, 14
  02cc310  bf 1, 0x2cd600
  02cc314  b 0x2cd864
  02cc318  lis 3, 101
  02cc31c  addic 3, 3, 23348
  02cc320  bl 0x5cd098
  02cc324  nop
  02cc328  li 3, 1
  02cc32c  stb 3, 32(31)
  02cc330  b 0x2cd86c
  02cc334  lis 3, 45
  02cc338  lfs 1, 24(30)
  02cc33c  lis 27, 151
  02cc340  addi 5, 3, -17836
  02cc344  lis 3, 114
  02cc348  addic 27, 27, -25376
  02cc34c  addic 29, 30, 16
  02cc350  lfs 2, 72(5)
  02cc354  lfs 3, -3048(3)
  02cc358  lfs 4, 64(30)
  02cc35c  ori 3, 31, 0
  02cc360  fnmsubs 1, 3, 2, 1
  02cc364  ori 4, 29, 0
  02cc368  li 8, 0
  02cc36c  stfs 1, 24(30)
  02cc370  stfs 4, 7888(27)
  02cc374  lfs 1, 68(30)
  02cc378  stfs 1, 7892(27)
  02cc37c  lfs 1, 72(30)
  02cc380  stfs 1, 7896(27)
  02cc384  lwz 6, 76(30)
  02cc388  stw 6, 7944(27)
  02cc38c  lfs 1, 92(30)
  02cc390  stfs 1, 7908(27)
  02cc394  lfs 1, 76(5)
  02cc398  lwz 6, 7872(27)
  02cc39c  lfs 2, 7920(27)
  02cc3a0  extsw 6, 6
  02cc3a4  fmuls 1, 31, 1
  02cc3a8  bl 0x100ef8
  02cc3ac  nop
  02cc3b0  rlwinm 28, 3, 0, 30, 30
  02cc3b4  cmpwi 28, 0
  02cc3b8  bt 2, 0x2cc3dc
  02cc3bc  lfs 1, 16(30)
  02cc3c0  lfs 2, 20(30)
  02cc3c4  li 3, 0
  02cc3c8  fmuls 1, 1, 26
  02cc3cc  fmuls 2, 2, 26
  02cc3d0  stw 3, 24(30)
  02cc3d4  stfs 1, 16(30)
  02cc3d8  stfs 2, 20(30)
  02cc3dc  lis 5, 114
  02cc3e0  ori 3, 29, 0
  02cc3e4  ori 4, 29, 0
  02cc3e8  lfs 1, -3064(5)
  02cc3ec  fmuls 1, 1, 27
  02cc3f0  bl 0x5e7ed8
  02cc3f4  nop
  02cc3f8  lbz 3, 112(31)
  02cc3fc  rlwinm 3, 3, 0, 30, 30
  02cc400  cmpwi 3, 0
  02cc404  bt 2, 0x2cc464
  02cc408  cmpwi 28, 0
  02cc40c  bf 2, 0x2cc45c
  02cc410  lbz 3, 83(31)
  02cc414  cmpwi 3, 5
  02cc418  bt 2, 0x2cc464
  02cc41c  lis 3, 45
  02cc420  lis 4, 114
  02cc424  addi 3, 3, -17836
  02cc428  li 5, 0
  02cc42c  lfs 1, 56(3)
  02cc430  lfs 2, -3056(4)
  02cc434  ori 3, 31, 0
  02cc438  li 4, 5
  02cc43c  fmuls 1, 2, 1
  02cc440  fctiwz 1, 1
  02cc444  stfd 1, 280(1)
  02cc448  lwz 6, 284(1)
  02cc44c  extsw 6, 6
  02cc450  bl 0xfddc0
  02cc454  nop
  02cc458  b 0x2cc464
  02cc45c  li 3, 2
  02cc460  stb 3, 32(31)
  02cc464  lfs 1, 16(30)
  02cc468  lfs 2, 20(30)
  02cc46c  bl 0x5e8338
  02cc470  nop
  02cc474  lfs 2, 7900(27)
  02cc478  lfs 3, 7904(27)
  02cc47c  addic 5, 30, 64
  02cc480  lfs 4, 7908(27)
  02cc484  ori 3, 31, 0
  02cc488  bl 0xff2e8
  02cc48c  nop
  02cc490  lfs 1, 7888(27)
  02cc494  ori 3, 31, 0
  02cc498  stfs 1, 64(30)
  02cc49c  lfs 1, 7892(27)
  02cc4a0  stfs 1, 68(30)
  02cc4a4  lfs 1, 7896(27)
  02cc4a8  stfs 1, 72(30)
  02cc4ac  lwz 4, 7944(27)
  02cc4b0  stw 4, 76(30)
  02cc4b4  lfs 1, 7908(27)
  02cc4b8  stfs 1, 92(30)
  02cc4bc  bl 0x2cb930
  02cc4c0  stb 3, 32(31)
  02cc4c4  b 0x2cd86c
  02cc4c8  lbz 3, 112(31)
  02cc4cc  rlwinm 3, 3, 0, 30, 30
  02cc4d0  cmpwi 3, 0
  02cc4d4  bt 2, 0x2cc4e0
  02cc4d8  li 3, 2
  02cc4dc  stb 3, 32(31)
  02cc4e0  ori 3, 31, 0
  02cc4e4  bl 0x2cb930
  02cc4e8  stb 3, 32(31)
  02cc4ec  b 0x2cd86c
  02cc4f0  lwz 28, 56(30)
  02cc4f4  cmpwi 28, 0
  02cc4f8  bt 2, 0x2cc744
  02cc4fc  lbz 3, 32(28)
  02cc500  cmpwi 1, 3, 253
  02cc504  cmpwi 3, 254
  02cc508  cror 2, 2, 6
  02cc50c  bt 2, 0x2cc744
  02cc510  ori 3, 28, 0
  02cc514  lfs 27, 24(28)
  02cc518  fmr 29, 30
  02cc51c  bl 0xfcccc
  02cc520  nop
  02cc524  ori 28, 3, 0
  02cc528  cmpwi 28, 0
  02cc52c  bt 2, 0x2cc554
  02cc530  lbz 3, 10(28)
  02cc534  bl 0x502730
  02cc538  nop
  02cc53c  lis 3, 45
  02cc540  lfs 2, 16(28)
  02cc544  addi 3, 3, -17836
  02cc548  fadds 27, 27, 2
  02cc54c  lfs 3, 80(3)
  02cc550  fmadds 29, 1, 3, 29
  02cc554  lfs 2, 20(31)
  02cc558  lwz 3, 56(30)
  02cc55c  lfs 1, 16(31)
  02cc560  lfs 4, 20(3)
  02cc564  lfs 5, 16(3)
  02cc568  fsubs 4, 2, 4
  02cc56c  lfs 3, 24(31)
  02cc570  fsubs 5, 1, 5
  02cc574  lfs 6, 24(3)
  02cc578  fsubs 6, 3, 6
  02cc57c  fmuls 4, 4, 4
  02cc580  fmadds 4, 5, 5, 4
  02cc584  fmadds 4, 6, 6, 4
  02cc588  fsqrts 4, 4
  02cc58c  fcmpu 0, 4, 29
  02cc590  cror 6, 1, 2
  02cc594  bt 6, 0x2cc5d0
  02cc598  fmr 1, 30
  02cc59c  ori 3, 29, 0
  02cc5a0  li 5, 1
  02cc5a4  ori 6, 31, 0
  02cc5a8  bl 0x59e20
  02cc5ac  nop
  02cc5b0  lfs 1, 16(31)
  02cc5b4  cmpwi 3, 0
  02cc5b8  lfs 2, 20(31)
  02cc5bc  lfs 3, 24(31)
  02cc5c0  bt 2, 0x2cc5d0
  02cc5c4  li 3, 11
  02cc5c8  stb 3, 32(31)
  02cc5cc  b 0x2cd86c
  02cc5d0  lwz 3, 56(30)
  02cc5d4  fmuls 29, 29, 26
  02cc5d8  lfs 4, 20(3)
  02cc5dc  lfs 5, 16(3)
  02cc5e0  fsubs 2, 2, 4
  02cc5e4  fsubs 1, 1, 5
  02cc5e8  fmuls 2, 2, 2
  02cc5ec  fmadds 1, 1, 1, 2
  02cc5f0  fsqrts 1, 1
  02cc5f4  fcmpu 0, 1, 29
  02cc5f8  cror 6, 1, 2
  02cc5fc  bt 6, 0x2cc744
  02cc600  lis 3, 45
  02cc604  addi 3, 3, -17836
  02cc608  lfs 1, 52(3)
  02cc60c  fmadds 1, 30, 1, 3
  02cc610  fsubs 1, 27, 1
  02cc614  fabs 1, 1
  02cc618  fcmpu 0, 1, 29
  02cc61c  cror 6, 1, 2
  02cc620  bt 6, 0x2cc744
  02cc624  lis 3, 151
  02cc628  lfs 1, 80(30)
  02cc62c  addic 28, 3, -25376
  02cc630  addic 4, 28, 7952
  02cc634  stfs 1, 7968(28)
  02cc638  lfs 1, 84(30)
  02cc63c  stfs 1, 7972(28)
  02cc640  lfs 1, 88(30)
  02cc644  stfs 1, 7976(28)
  02cc648  lbz 3, 104(30)
  02cc64c  stb 3, 7999(28)
  02cc650  lfs 1, 68(30)
  02cc654  ori 3, 31, 0
  02cc658  stfs 1, 8000(28)
  02cc65c  lfs 1, 0(30)
  02cc660  stfs 1, 7952(28)
  02cc664  lfs 1, 4(30)
  02cc668  stfs 1, 7956(28)
  02cc66c  lfs 1, 8(30)
  02cc670  stfs 1, 7960(28)
  02cc674  lfs 1, 12(30)
  02cc678  stfs 1, 7964(28)
  02cc67c  lwz 5, 56(30)
  02cc680  addic 5, 5, 16
  02cc684  bl 0x2caee0
  02cc688  lfs 1, 7968(28)
  02cc68c  lis 5, 114
  02cc690  stfs 1, 80(30)
  02cc694  lfs 1, 7972(28)
  02cc698  stfs 1, 84(30)
  02cc69c  lfs 1, 7976(28)
  02cc6a0  lwz 3, 56(30)
  02cc6a4  stfs 1, 88(30)
  02cc6a8  lbz 4, 7999(28)
  02cc6ac  stb 4, 104(30)
  02cc6b0  lfs 1, 8000(28)
  02cc6b4  lis 4, 45
  02cc6b8  stfs 1, 68(30)
  02cc6bc  lfs 1, 16(3)
  02cc6c0  addi 4, 4, -17836
  02cc6c4  stfs 1, 0(30)
  02cc6c8  lfs 1, 20(3)
  02cc6cc  stfs 1, 4(30)
  02cc6d0  lfs 1, 24(3)
  02cc6d4  stfs 1, 8(30)
  02cc6d8  lfs 1, 28(3)
  02cc6dc  stfs 1, 12(30)
  02cc6e0  lfs 1, 40(4)
  02cc6e4  lfs 2, -3064(5)
  02cc6e8  fmuls 1, 2, 1
  02cc6ec  fmuls 1, 1, 30
  02cc6f0  stfs 1, 92(30)
  02cc6f4  lbz 3, 83(31)
  02cc6f8  cmpwi 3, 0
  02cc6fc  bt 2, 0x2cc73c
  02cc700  lis 3, 45
  02cc704  lis 4, 114
  02cc708  addi 3, 3, -17836
  02cc70c  li 5, 0
  02cc710  lfs 1, 84(3)
  02cc714  lfs 2, -3056(4)
  02cc718  ori 3, 31, 0
  02cc71c  li 4, 0
  02cc720  fmuls 1, 2, 1
  02cc724  fctiwz 1, 1
  02cc728  stfd 1, 280(1)
  02cc72c  lwz 6, 284(1)
  02cc730  extsw 6, 6
  02cc734  bl 0xfddc0
  02cc738  nop
  02cc73c  li 3, 6
  02cc740  stb 3, 32(31)
  02cc744  lis 3, 45
  02cc748  lfs 1, 16(31)
  02cc74c  lfs 2, 20(31)
  02cc750  addi 3, 3, -17836
  02cc754  stfs 1, 192(1)
  02cc758  lfs 1, 28(31)
  02cc75c  stfs 2, 196(1)
  02cc760  stfs 1, 204(1)
  02cc764  lfs 1, 88(3)
  02cc768  lfs 2, 24(31)
  02cc76c  li 3, 4
  02cc770  fmadds 1, 31, 1, 2
  02cc774  stfs 1, 200(1)
  02cc778  bl 0xfc620
  02cc77c  nop
  02cc780  cmpwi 3, 0
  02cc784  bf 2, 0x2cc7a4
  02cc788  ori 3, 31, 0
  02cc78c  lwz 6, 60(30)
  02cc790  addic 4, 1, 192
  02cc794  addic 5, 31, 64
  02cc798  li 7, 1
  02cc79c  bl 0x2c9be0
  02cc7a0  stw 3, 56(30)
  02cc7a4  lis 3, 45
  02cc7a8  lis 4, 114
  02cc7ac  addi 3, 3, -17836
  02cc7b0  lfs 27, 52(3)
  02cc7b4  lfs 1, -3064(4)
  02cc7b8  li 3, 4
  02cc7bc  fmuls 1, 1, 27
  02cc7c0  fmuls 1, 1, 30
  02cc7c4  stfs 1, 92(30)
  02cc7c8  stb 3, 32(31)
  02cc7cc  lwz 3, 56(30)
  02cc7d0  cmpwi 3, 0
  02cc7d4  bf 2, 0x2cc884
  02cc7d8  lis 3, 45
  02cc7dc  addi 3, 3, -17836
  02cc7e0  lfs 1, 92(3)
  02cc7e4  lfs 2, 96(3)
  02cc7e8  bl 0xfcbe8
  02cc7ec  nop
  02cc7f0  li 3, 4
  02cc7f4  fmr 29, 1
  02cc7f8  bl 0xfc620
  02cc7fc  nop
  02cc800  cmpwi 3, 0
  02cc804  bf 2, 0x2cc87c
  02cc808  lis 3, 45
  02cc80c  addi 28, 3, -17836
  02cc810  lis 3, 151
  02cc814  addic 3, 3, -25376
  02cc818  lfs 1, 104(28)
  02cc81c  lfs 2, 100(28)
  02cc820  lfs 3, 108(28)
  02cc824  fmuls 23, 31, 1
  02cc828  fmr 25, 2
  02cc82c  fmr 24, 3
  02cc830  lwz 3, 7872(3)
  02cc834  extsw 3, 3
  02cc838  bl 0x502730
  02cc83c  nop
  02cc840  lfs 6, 112(28)
  02cc844  addic 5, 1, 272
  02cc848  fmr 2, 25
  02cc84c  ori 3, 31, 0
  02cc850  fmuls 6, 1, 6
  02cc854  ori 4, 29, 0
  02cc858  fmr 1, 29
  02cc85c  li 10, 0
  02cc860  std 5, 120(1)
  02cc864  fmr 3, 24
  02cc868  fmr 4, 23
  02cc86c  fmr 5, 24
  02cc870  bl 0x2ca268
  02cc874  stfs 1, 100(30)
  02cc878  b 0x2cc884
  02cc87c  lis 3, 16544
  02cc880  stw 3, 272(1)
  02cc884  lwz 3, 56(30)
  02cc888  cmpwi 3, 0
  02cc88c  bt 2, 0x2cc918
  02cc890  lis 4, 151
  02cc894  addic 4, 4, -25376
  02cc898  lwz 4, 8320(4)
  02cc89c  cmpw 3, 4
  02cc8a0  bt 2, 0x2cc918
  02cc8a4  lbz 4, 32(3)
  02cc8a8  cmpwi 1, 4, 253
  02cc8ac  cmpwi 4, 254
  02cc8b0  cror 2, 2, 6
  02cc8b4  bt 2, 0x2cc8e4
  02cc8b8  lwz 4, 36(3)
  02cc8bc  cmpwi 4, 0
  02cc8c0  bt 2, 0x2cc8e4
  02cc8c4  lhz 4, 70(4)
  02cc8c8  extsh 4, 4
  02cc8cc  cmpwi 4, 5
  02cc8d0  bf 2, 0x2cc8e4
  02cc8d4  lhz 4, 52(3)
  02cc8d8  rlwinm 4, 4, 0, 19, 19
  02cc8dc  cmpwi 4, 0
  02cc8e0  bf 2, 0x2cc918
  02cc8e4  li 3, 0
  02cc8e8  lis 5, 45
  02cc8ec  li 4, 2
  02cc8f0  addi 5, 5, -17836
  02cc8f4  stw 3, 56(30)
  02cc8f8  lis 3, 114
  02cc8fc  stb 4, 32(31)
  02cc900  lfs 1, 116(5)
  02cc904  lfs 2, -3064(3)
  02cc908  fmuls 1, 2, 1
  02cc90c  fmuls 1, 1, 30
  02cc910  stfs 1, 92(30)
  02cc914  b 0x2cd86c
  02cc918  cmpwi 3, 0
  02cc91c  lbz 28, 32(31)
  02cc920  bf 2, 0x2cc998
  02cc924  li 3, 5
  02cc928  lbz 4, 83(31)
  02cc92c  cmpwi 4, 6
  02cc930  stb 3, 32(31)
  02cc934  bt 2, 0x2cc974
  02cc938  lis 3, 45
  02cc93c  lis 4, 114
  02cc940  addi 3, 3, -17836
  02cc944  li 5, 0
  02cc948  lfs 1, 120(3)
  02cc94c  lfs 2, -3056(4)
  02cc950  ori 3, 31, 0
  02cc954  li 4, 6
  02cc958  fmuls 1, 2, 1
  02cc95c  fctiwz 1, 1
  02cc960  stfd 1, 280(1)
  02cc964  lwz 6, 284(1)
  02cc968  extsw 6, 6
  02cc96c  bl 0xfddc0
  02cc970  nop
  02cc974  lis 3, 45
  02cc978  lis 4, 114
  02cc97c  addi 3, 3, -17836
  02cc980  lfs 1, 116(3)
  02cc984  lfs 2, -3064(4)
  02cc988  fmuls 1, 2, 1
  02cc98c  fmuls 1, 1, 30
  02cc990  stfs 1, 92(30)
  02cc994  b 0x2ccd14
  02cc998  li 3, 4
  02cc99c  bl 0xfc620
  02cc9a0  nop
  02cc9a4  cmpwi 3, 0
  02cc9a8  bf 2, 0x2cca64
  02cc9ac  ori 3, 31, 0
  02cc9b0  lwz 5, 56(30)
  02cc9b4  ori 4, 30, 0
  02cc9b8  li 6, 1
  02cc9bc  addic 5, 5, 16
  02cc9c0  bl 0x2cb1e0
  02cc9c4  cmpwi 3, 0
  02cc9c8  bt 2, 0x2cca64
  02cc9cc  lwz 4, 56(30)
  02cc9d0  lis 3, 45
  02cc9d4  lis 5, 114
  02cc9d8  addi 3, 3, -17836
  02cc9dc  lfs 1, 16(4)
  02cc9e0  stfs 1, 0(30)
  02cc9e4  lfs 1, 20(4)
  02cc9e8  stfs 1, 4(30)
  02cc9ec  lfs 1, 24(4)
  02cc9f0  stfs 1, 8(30)
  02cc9f4  lfs 1, 28(4)
  02cc9f8  stfs 1, 12(30)
  02cc9fc  lfs 1, 40(3)
  02cca00  lfs 2, -3064(5)
  02cca04  fmuls 1, 2, 1
  02cca08  fmuls 1, 1, 30
  02cca0c  stfs 1, 92(30)
  02cca10  lbz 3, 83(31)
  02cca14  cmpwi 3, 0
  02cca18  bt 2, 0x2cca58
  02cca1c  lis 3, 45
  02cca20  lis 4, 114
  02cca24  addi 3, 3, -17836
  02cca28  li 5, 0
  02cca2c  lfs 1, 84(3)
  02cca30  lfs 2, -3056(4)
  02cca34  ori 3, 31, 0
  02cca38  li 4, 0
  02cca3c  fmuls 1, 2, 1
  02cca40  fctiwz 1, 1
  02cca44  stfd 1, 280(1)
  02cca48  lwz 6, 284(1)
  02cca4c  extsw 6, 6
  02cca50  bl 0xfddc0
  02cca54  nop
  02cca58  li 3, 6
  02cca5c  stb 3, 32(31)
  02cca60  b 0x2cd86c
  02cca64  lwz 3, 56(30)
  02cca68  lfs 1, 20(31)
  02cca6c  lis 27, 151
  02cca70  lfs 2, 16(31)
  02cca74  addic 27, 27, -25376
  02cca78  lfs 3, 20(3)
  02cca7c  lfs 4, 16(3)
  02cca80  fsubs 1, 1, 3
  02cca84  fsubs 2, 2, 4
  02cca88  lwz 4, 8320(27)
  02cca8c  cmpw 3, 4
  02cca90  fmuls 1, 1, 1
  02cca94  fmadds 29, 2, 2, 1
  02cca98  fsqrts 29, 29
  02cca9c  bf 2, 0x2ccb14
  02ccaa0  li 3, 5
  02ccaa4  lbz 4, 112(31)
  02ccaa8  stb 3, 32(31)
  02ccaac  rlwinm 3, 4, 0, 30, 30
  02ccab0  cmpwi 3, 0
  02ccab4  bt 2, 0x2ccaf4
  02ccab8  lbz 3, 83(31)
  02ccabc  cmpwi 3, 6
  02ccac0  bt 2, 0x2ccaf4
  02ccac4  lis 3, 114
  02ccac8  li 4, 6
  02ccacc  li 5, 0
  02ccad0  lfs 1, -3056(3)
  02ccad4  ori 3, 31, 0
  02ccad8  fmuls 1, 1, 26
  02ccadc  fctiwz 1, 1
  02ccae0  stfd 1, 280(1)
  02ccae4  lwz 6, 284(1)
  02ccae8  extsw 6, 6
  02ccaec  bl 0xfddc0
  02ccaf0  nop
  02ccaf4  lis 3, 45
  02ccaf8  lis 4, 114
  02ccafc  addi 3, 3, -17836
  02ccb00  lfs 1, 116(3)
  02ccb04  lfs 2, -3064(4)
  02ccb08  fmuls 1, 2, 1
  02ccb0c  fmuls 1, 1, 30
  02ccb10  stfs 1, 92(30)
  02ccb14  lis 3, 45
  02ccb18  addi 3, 3, -17836
  02ccb1c  lfs 1, 124(3)
  02ccb20  fcmpu 0, 29, 1
  02ccb24  cror 6, 1, 2
  02ccb28  bt 6, 0x2ccb94
  02ccb2c  li 3, 4
  02ccb30  lbz 4, 83(31)
  02ccb34  cmpwi 4, 7
  02ccb38  stb 3, 32(31)
  02ccb3c  bt 2, 0x2ccb7c
  02ccb40  lis 3, 45
  02ccb44  lis 4, 114
  02ccb48  addi 3, 3, -17836
  02ccb4c  li 5, 0
  02ccb50  lfs 1, 120(3)
  02ccb54  lfs 2, -3056(4)
  02ccb58  ori 3, 31, 0
  02ccb5c  fmuls 1, 2, 1
  02ccb60  li 4, 7
  02ccb64  fctiwz 1, 1
  02ccb68  stfd 1, 280(1)
  02ccb6c  lwz 6, 284(1)
  02ccb70  extsw 6, 6
  02ccb74  bl 0xfddc0
  02ccb78  nop
  02ccb7c  lis 3, 114
  02ccb80  lfs 1, -3064(3)
  02ccb84  fmuls 1, 1, 27
  02ccb88  fmuls 1, 1, 30
  02ccb8c  stfs 1, 92(30)
  02ccb90  b 0x2ccc84
  02ccb94  lis 3, 45
  02ccb98  addi 3, 3, -17836
  02ccb9c  lfs 1, 128(3)
  02ccba0  fcmpu 0, 29, 1
  02ccba4  cror 6, 0, 2
  02ccba8  bt 6, 0x2ccc20
  02ccbac  li 3, 5
  02ccbb0  lbz 4, 83(31)
  02ccbb4  cmpwi 4, 0
  02ccbb8  stb 3, 32(31)
  02ccbbc  bt 2, 0x2ccbfc
  02ccbc0  lis 3, 45
  02ccbc4  lis 4, 114
  02ccbc8  addi 3, 3, -17836
  02ccbcc  li 5, 0
  02ccbd0  lfs 1, 120(3)
  02ccbd4  lfs 2, -3056(4)
  02ccbd8  ori 3, 31, 0
  02ccbdc  fmuls 1, 2, 1
  02ccbe0  li 4, 0
  02ccbe4  fctiwz 1, 1
  02ccbe8  stfd 1, 280(1)
  02ccbec  lwz 6, 284(1)
  02ccbf0  extsw 6, 6
  02ccbf4  bl 0xfddc0
  02ccbf8  nop
  02ccbfc  lis 3, 45
  02ccc00  lis 4, 114
  02ccc04  addi 3, 3, -17836
  02ccc08  lfs 1, 116(3)
  02ccc0c  lfs 2, -3064(4)
  02ccc10  fmuls 1, 2, 1
  02ccc14  fmuls 1, 1, 30
  02ccc18  stfs 1, 92(30)
  02ccc1c  b 0x2ccc84
  02ccc20  li 3, 4
  02ccc24  lbz 4, 83(31)
  02ccc28  cmpwi 4, 7
  02ccc2c  stb 3, 32(31)
  02ccc30  bt 2, 0x2ccc70
  02ccc34  lis 3, 45
  02ccc38  lis 4, 114
  02ccc3c  addi 3, 3, -17836
  02ccc40  li 5, 0
  02ccc44  lfs 1, 120(3)
  02ccc48  lfs 2, -3056(4)
  02ccc4c  ori 3, 31, 0
  02ccc50  li 4, 7
  02ccc54  fmuls 1, 2, 1
  02ccc58  fctiwz 1, 1
  02ccc5c  stfd 1, 280(1)
  02ccc60  lwz 6, 284(1)
  02ccc64  extsw 6, 6
  02ccc68  bl 0xfddc0
  02ccc6c  nop
  02ccc70  lis 3, 114
  02ccc74  lfs 1, -3064(3)
  02ccc78  fmuls 1, 1, 27
  02ccc7c  fmuls 1, 1, 30
  02ccc80  stfs 1, 92(30)
  02ccc84  li 3, 4
  02ccc88  bl 0xfc620
  02ccc8c  nop
  02ccc90  cmpwi 3, 0
  02ccc94  bf 2, 0x2ccd0c
  02ccc98  lis 3, 45
  02ccc9c  lfs 29, 72(31)
  02ccca0  addi 26, 3, -17836
  02ccca4  lwz 3, 56(30)
  02ccca8  addic 25, 3, 16
  02cccac  lfs 26, 100(26)
  02cccb0  lfs 2, 104(26)
  02cccb4  lfs 1, 108(26)
  02cccb8  fmr 25, 2
  02cccbc  fmr 24, 1
  02cccc0  lwz 3, 7872(27)
  02cccc4  extsw 3, 3
  02cccc8  bl 0x502730
  02ccccc  nop
  02cccd0  lfs 6, 112(26)
  02cccd4  addic 5, 1, 272
  02cccd8  fmr 2, 26
  02cccdc  ori 3, 31, 0
  02ccce0  fmuls 6, 1, 6
  02ccce4  ori 4, 29, 0
  02ccce8  fmr 1, 29
  02cccec  ori 10, 25, 0
  02cccf0  std 5, 120(1)
  02cccf4  fmr 3, 24
  02cccf8  fmr 4, 25
  02cccfc  fmr 5, 24
  02ccd00  bl 0x2ca268
  02ccd04  stfs 1, 100(30)
  02ccd08  b 0x2ccd14
  02ccd0c  lis 3, 16544
  02ccd10  stw 3, 272(1)
  02ccd14  lbz 3, 32(31)
  02ccd18  cmpwi 3, 4
  02ccd1c  bf 2, 0x2ccd7c
  02ccd20  cmpwi 28, 5
  02ccd24  bf 2, 0x2ccd7c
  02ccd28  li 3, 12
  02ccd2c  lbz 4, 83(31)
  02ccd30  cmpwi 4, 1
  02ccd34  stb 3, 32(31)
  02ccd38  bt 2, 0x2cd138
  02ccd3c  lis 3, 45
  02ccd40  lis 4, 114
  02ccd44  addi 3, 3, -17836
  02ccd48  li 5, 0
  02ccd4c  lfs 1, 120(3)
  02ccd50  lfs 2, -3056(4)
  02ccd54  ori 3, 31, 0
  02ccd58  fmuls 1, 2, 1
  02ccd5c  li 4, 1
  02ccd60  fctiwz 1, 1
  02ccd64  stfd 1, 280(1)
  02ccd68  lwz 6, 284(1)
  02ccd6c  extsw 6, 6
  02ccd70  bl 0xfddc0
  02ccd74  nop
  02ccd78  b 0x2cd138
  02ccd7c  lfs 1, 100(30)
  02ccd80  lfs 29, 20(31)
  02ccd84  bl 0x5e8128
  02ccd88  nop
  02ccd8c  lis 3, 45
  02ccd90  lfs 2, 100(30)
  02ccd94  addi 29, 3, -17836
  02ccd98  lfs 26, 132(29)
  02ccd9c  fmadds 3, 1, 26, 29
  02ccda0  fmr 1, 2
  02ccda4  stfs 3, 4(30)
  02ccda8  lfs 29, 16(31)
  02ccdac  bl 0x5e8078
  02ccdb0  nop
  02ccdb4  fmadds 1, 1, 26, 29
  02ccdb8  lfs 2, 64(30)
  02ccdbc  lis 28, 151
  02ccdc0  addic 5, 30, 68
  02ccdc4  addic 28, 28, -25376
  02ccdc8  ori 3, 31, 0
  02ccdcc  stfs 1, 0(30)
  02ccdd0  lfs 1, 24(31)
  02ccdd4  fadds 1, 1, 28
  02ccdd8  stfs 1, 8(30)
  02ccddc  stfs 2, 7888(28)
  02ccde0  lfs 1, 68(30)
  02ccde4  stfs 1, 7892(28)
  02ccde8  lfs 1, 72(30)
  02ccdec  stfs 1, 7896(28)
  02ccdf0  lwz 4, 76(30)
  02ccdf4  stw 4, 7944(28)
  02ccdf8  lfs 1, 92(30)
  02ccdfc  lfs 2, 7932(28)
  02cce00  stfs 1, 7908(28)
  02cce04  lfs 1, 100(30)
  02cce08  lfs 3, 7936(28)
  02cce0c  lfs 4, 7940(28)
  02cce10  bl 0xff2e8
  02cce14  nop
  02cce18  lfs 1, 16(30)
  02cce1c  lfs 2, 16(31)
  02cce20  addic 3, 1, 208
  02cce24  lfs 3, 20(30)
  02cce28  addic 4, 1, 224
  02cce2c  lfs 4, 20(31)
  02cce30  fmadds 1, 1, 26, 2
  02cce34  stfs 2, 208(1)
  02cce38  li 5, 6
  02cce3c  lfs 5, 28(31)
  02cce40  fmadds 2, 3, 26, 4
  02cce44  stfs 4, 212(1)
  02cce48  ori 6, 31, 0
  02cce4c  stfs 5, 220(1)
  02cce50  li 7, 0
  02cce54  lfs 6, 136(29)
  02cce58  lfs 7, 24(31)
  02cce5c  stfs 5, 236(1)
  02cce60  fmadds 3, 31, 6, 7
  02cce64  stfs 1, 224(1)
  02cce68  stfs 2, 228(1)
  02cce6c  stfs 3, 216(1)
  02cce70  stfs 3, 232(1)
  02cce74  bl 0x57820
  02cce78  nop
  02cce7c  cmpwi 3, 0
  02cce80  lfs 1, 16(31)
  02cce84  lfs 31, 24(31)
  02cce88  bt 2, 0x2ccec8
  02cce8c  lis 3, 161
  02cce90  lwz 4, 56(30)
  02cce94  addic 3, 3, 2368
  02cce98  lwz 3, 24(3)
  02cce9c  cmpw 3, 4
  02ccea0  cmpwi 1, 3, 0
  02ccea4  bt 2, 0x2ccec8
  02ccea8  bt 6, 0x2ccf5c
  02cceac  lwz 3, 36(3)
  02cceb0  cmpwi 3, 0
  02cceb4  bt 2, 0x2ccf5c
  02cceb8  lhz 3, 70(3)
  02ccebc  extsh 3, 3
  02ccec0  cmpwi 3, 5
  02ccec4  bf 2, 0x2ccf5c
  02ccec8  addic 4, 28, 7872
  02ccecc  addic 6, 30, 16
  02cced0  ori 3, 31, 0
  02cced4  ori 5, 30, 0
  02cced8  bl 0x101cc0
  02ccedc  nop
  02ccee0  lfs 1, 24(31)
  02ccee4  fsubs 1, 1, 31
  02ccee8  ori 29, 3, 0
  02cceec  fabs 1, 1
  02ccef0  fcmpu 0, 1, 28
  02ccef4  cror 6, 0, 2
  02ccef8  bt 6, 0x2ccfa4
  02ccefc  ori 3, 31, 0
  02ccf00  stfs 31, 24(31)
  02ccf04  li 4, 5
  02ccf08  li 5, 0
  02ccf0c  bl 0x2c9860
  02ccf10  cmpwi 3, 0
  02ccf14  bt 2, 0x2ccfa4
  02ccf18  lis 3, 161
  02ccf1c  addic 3, 3, 2368
  02ccf20  lfs 1, 48(3)
  02ccf24  stfs 1, 16(31)
  02ccf28  lfs 1, 52(3)
  02ccf2c  stfs 1, 20(31)
  02ccf30  lfs 1, 56(3)
  02ccf34  fsubs 2, 1, 31
  02ccf38  stfs 1, 24(31)
  02ccf3c  lfs 1, 60(3)
  02ccf40  stfs 1, 28(31)
  02ccf44  fabs 1, 2
  02ccf48  fcmpu 0, 1, 28
  02ccf4c  cror 6, 0, 2
  02ccf50  bt 6, 0x2ccfa4
  02ccf54  stfs 31, 24(31)
  02ccf58  b 0x2ccfa4
  02ccf5c  li 3, 0
  02ccf60  lis 4, 15395
  02ccf64  li 29, 2
  02ccf68  ori 5, 4, 55050
  02ccf6c  stw 3, 272(1)
  02ccf70  lfs 2, 0(30)
  02ccf74  addic 3, 30, 16
  02ccf78  lfs 3, 4(30)
  02ccf7c  fsubs 2, 1, 2
  02ccf80  fmr 1, 27
  02ccf84  ori 4, 3, 0
  02ccf88  stfs 2, 16(30)
  02ccf8c  lfs 2, 20(31)
  02ccf90  stw 5, 24(30)
  02ccf94  fsubs 2, 2, 3
  02ccf98  stfs 2, 20(30)
  02ccf9c  bl 0x5e7f98
  02ccfa0  nop
  02ccfa4  lfs 1, 7888(28)
  02ccfa8  rlwinm 3, 29, 0, 30, 30
  02ccfac  stfs 1, 64(30)
  02ccfb0  lfs 1, 7892(28)
  02ccfb4  cmpwi 3, 0
  02ccfb8  stfs 1, 68(30)
  02ccfbc  lfs 1, 7896(28)
  02ccfc0  stfs 1, 72(30)
  02ccfc4  lwz 3, 7944(28)
  02ccfc8  stw 3, 76(30)
  02ccfcc  lfs 1, 7908(28)
  02ccfd0  stfs 1, 92(30)
  02ccfd4  bf 2, 0x2ccff8
  02ccfd8  lwz 4, 272(1)
  02ccfdc  lis 3, 16512
  02ccfe0  srawi 5, 4, 31
  02ccfe4  srwi 6, 5, 1
  02ccfe8  xor 4, 6, 4
  02ccfec  subc 4, 4, 5
  02ccff0  cmpw 4, 3
  02ccff4  bf 0, 0x2cd138
  02ccff8  ori 3, 31, 0
  02ccffc  ori 4, 30, 0
  02cd000  ori 5, 30, 0
  02cd004  li 6, 0
  02cd008  bl 0x2cb1e0
  02cd00c  cmpwi 3, 0
  02cd010  bt 2, 0x2cd088
  02cd014  lis 3, 45
  02cd018  lis 4, 114
  02cd01c  addi 3, 3, -17836
  02cd020  lfs 1, 40(3)
  02cd024  lfs 2, -3064(4)
  02cd028  fmuls 1, 2, 1
  02cd02c  fmuls 1, 1, 30
  02cd030  stfs 1, 92(30)
  02cd034  lbz 3, 83(31)
  02cd038  cmpwi 3, 0
  02cd03c  bt 2, 0x2cd07c
  02cd040  lis 3, 45
  02cd044  lis 4, 114
  02cd048  addi 3, 3, -17836
  02cd04c  li 5, 0
  02cd050  lfs 1, 84(3)
  02cd054  lfs 2, -3056(4)
  02cd058  ori 3, 31, 0
  02cd05c  li 4, 0
  02cd060  fmuls 1, 2, 1
  02cd064  fctiwz 1, 1
  02cd068  stfd 1, 280(1)
  02cd06c  lwz 6, 284(1)
  02cd070  extsw 6, 6
  02cd074  bl 0xfddc0
  02cd078  nop
  02cd07c  li 3, 6
  02cd080  stb 3, 32(31)
  02cd084  b 0x2cd138
  02cd088  lwz 3, 56(30)
  02cd08c  cmpwi 3, 0
  02cd090  bt 2, 0x2cd0a4
  02cd094  lwz 4, 48(30)
  02cd098  stw 3, 60(30)
  02cd09c  addic 3, 4, 500
  02cd0a0  stw 3, 48(30)
  02cd0a4  lfs 1, 16(31)
  02cd0a8  lis 4, 15395
  02cd0ac  lfs 2, 0(30)
  02cd0b0  addic 3, 30, 16
  02cd0b4  lfs 3, 4(30)
  02cd0b8  ori 5, 4, 55050
  02cd0bc  fsubs 2, 1, 2
  02cd0c0  ori 4, 3, 0
  02cd0c4  fmr 1, 27
  02cd0c8  stfs 2, 16(30)
  02cd0cc  lfs 2, 20(31)
  02cd0d0  stw 5, 24(30)
  02cd0d4  fsubs 2, 2, 3
  02cd0d8  stfs 2, 20(30)
  02cd0dc  bl 0x5e7f98
  02cd0e0  nop
  02cd0e4  li 4, 8
  02cd0e8  lbz 3, 83(31)
  02cd0ec  cmpwi 3, 5
  02cd0f0  stb 4, 32(31)
  02cd0f4  bt 2, 0x2cd86c
  02cd0f8  lis 3, 45
  02cd0fc  lis 4, 114
  02cd100  addi 3, 3, -17836
  02cd104  li 5, 0
  02cd108  lfs 1, 56(3)
  02cd10c  lfs 2, -3056(4)
  02cd110  ori 3, 31, 0
  02cd114  li 4, 5
  02cd118  fmuls 1, 2, 1
  02cd11c  fctiwz 1, 1
  02cd120  stfd 1, 280(1)
  02cd124  lwz 6, 284(1)
  02cd128  extsw 6, 6
  02cd12c  bl 0xfddc0
  02cd130  nop
  02cd134  b 0x2cd86c
  02cd138  ori 3, 31, 0
  02cd13c  bl 0x2cb930
  02cd140  stb 3, 32(31)
  02cd144  b 0x2cd86c
  02cd148  ori 29, 30, 0
  02cd14c  lfs 1, 0(29)
  02cd150  lfs 2, 16(31)
  02cd154  lfs 3, 4(29)
  02cd158  fsubs 1, 1, 2
  02cd15c  lfs 4, 20(31)
  02cd160  fsubs 2, 3, 4
  02cd164  bl 0x5e8338
  02cd168  nop
  02cd16c  lis 30, 151
  02cd170  lfs 2, 64(29)
  02cd174  fmr 31, 1
  02cd178  addic 30, 30, -25376
  02cd17c  ori 3, 31, 0
  02cd180  addic 5, 30, 7892
  02cd184  stfs 2, 7888(30)
  02cd188  lfs 1, 68(29)
  02cd18c  stfs 1, 7892(30)
  02cd190  lfs 1, 72(29)
  02cd194  stfs 1, 7896(30)
  02cd198  lwz 4, 76(29)
  02cd19c  lfs 2, 7932(30)
  02cd1a0  stw 4, 7944(30)
  02cd1a4  lfs 1, 92(29)
  02cd1a8  lfs 3, 7936(30)
  02cd1ac  fmuls 2, 2, 29
  02cd1b0  stfs 1, 7908(30)
  02cd1b4  lfs 4, 7940(30)
  02cd1b8  fmr 1, 31
  02cd1bc  fmuls 3, 3, 26
  02cd1c0  fmuls 4, 4, 29
  02cd1c4  bl 0xff2e8
  02cd1c8  nop
  02cd1cc  lfs 1, 7888(30)
  02cd1d0  fmr 2, 31
  02cd1d4  stfs 1, 64(29)
  02cd1d8  lfs 1, 7892(30)
  02cd1dc  stfs 1, 68(29)
  02cd1e0  lfs 1, 7896(30)
  02cd1e4  stfs 1, 72(29)
  02cd1e8  lwz 3, 7944(30)
  02cd1ec  stw 3, 76(29)
  02cd1f0  lfs 1, 7908(30)
  02cd1f4  stfs 1, 92(29)
  02cd1f8  lfs 1, 72(31)
  02cd1fc  bl 0x5026a0
  02cd200  nop
  02cd204  lis 3, 45
  02cd208  addi 3, 3, -17836
  02cd20c  lfs 2, 140(3)
  02cd210  fcmpu 0, 1, 2
  02cd214  cror 6, 1, 2
  02cd218  bt 6, 0x2cd260
  02cd21c  lis 3, 45
  02cd220  lis 4, 114
  02cd224  addi 3, 3, -17836
  02cd228  li 5, 0
  02cd22c  lfs 1, 144(3)
  02cd230  lfs 2, -3056(4)
  02cd234  ori 3, 31, 0
  02cd238  lbz 4, 7996(30)
  02cd23c  fmuls 1, 2, 1
  02cd240  fctiwz 1, 1
  02cd244  stfd 1, 280(1)
  02cd248  lwz 6, 284(1)
  02cd24c  extsw 6, 6
  02cd250  bl 0xfddc0
  02cd254  nop
  02cd258  li 3, 7
  02cd25c  stb 3, 32(31)
  02cd260  ori 3, 31, 0
  02cd264  bl 0x2cb930
  02cd268  stb 3, 32(31)
  02cd26c  b 0x2cd86c
  02cd270  lis 29, 151
  02cd274  lfs 1, 80(30)
  02cd278  addic 29, 29, -25376
  02cd27c  addic 4, 29, 7952
  02cd280  stfs 1, 7968(29)
  02cd284  lfs 1, 84(30)
  02cd288  stfs 1, 7972(29)
  02cd28c  lfs 1, 88(30)
  02cd290  stfs 1, 7976(29)
  02cd294  lbz 3, 104(30)
  02cd298  stb 3, 7999(29)
  02cd29c  lfs 1, 68(30)
  02cd2a0  ori 3, 31, 0
  02cd2a4  stfs 1, 8000(29)
  02cd2a8  lfs 1, 0(30)
  02cd2ac  stfs 1, 7952(29)
  02cd2b0  lfs 1, 4(30)
  02cd2b4  stfs 1, 7956(29)
  02cd2b8  lfs 1, 8(30)
  02cd2bc  stfs 1, 7960(29)
  02cd2c0  lfs 1, 12(30)
  02cd2c4  stfs 1, 7964(29)
  02cd2c8  bl 0x1095b8
  02cd2cc  nop
  02cd2d0  cmpwi 3, 4
  02cd2d4  bf 2, 0x2cd348
  02cd2d8  li 3, 4
  02cd2dc  lbz 4, 83(31)
  02cd2e0  cmpwi 4, 7
  02cd2e4  stb 3, 32(31)
  02cd2e8  bt 2, 0x2cd328
  02cd2ec  lis 3, 45
  02cd2f0  lis 4, 114
  02cd2f4  addi 3, 3, -17836
  02cd2f8  li 5, 0
  02cd2fc  lfs 1, 144(3)
  02cd300  lfs 2, -3056(4)
  02cd304  ori 3, 31, 0
  02cd308  fmuls 1, 2, 1
  02cd30c  li 4, 7
  02cd310  fctiwz 1, 1
  02cd314  stfd 1, 280(1)
  02cd318  lwz 6, 284(1)
  02cd31c  extsw 6, 6
  02cd320  bl 0xfddc0
  02cd324  nop
  02cd328  lis 3, 45
  02cd32c  lis 4, 114
  02cd330  addi 3, 3, -17836
  02cd334  lfs 1, 52(3)
  02cd338  lfs 2, -3064(4)
  02cd33c  fmuls 1, 2, 1
  02cd340  fmuls 1, 1, 30
  02cd344  stfs 1, 92(30)
  02cd348  lfs 1, 7968(29)
  02cd34c  ori 3, 31, 0
  02cd350  stfs 1, 80(30)
  02cd354  lfs 1, 7972(29)
  02cd358  stfs 1, 84(30)
  02cd35c  lfs 1, 7976(29)
  02cd360  stfs 1, 88(30)
  02cd364  lbz 4, 7999(29)
  02cd368  stb 4, 104(30)
  02cd36c  lfs 1, 8000(29)
  02cd370  stfs 1, 68(30)
  02cd374  bl 0x2cb930
  02cd378  stb 3, 32(31)
  02cd37c  b 0x2cd86c
  02cd380  lwz 5, 16(31)
  02cd384  lis 3, 17535
  02cd388  lis 4, 16384
  02cd38c  srawi 6, 5, 31
  02cd390  ori 3, 3, 16384
  02cd394  srwi 7, 6, 1
  02cd398  xor 5, 7, 5
  02cd39c  subc 5, 5, 6
  02cd3a0  cmpw 1, 5, 3
  02cd3a4  cmpw 5, 4
  02cd3a8  cror 2, 0, 5
  02cd3ac  bt 2, 0x2cd410
  02cd3b0  lwz 5, 20(31)
  02cd3b4  lis 3, 17535
  02cd3b8  lis 4, 16384
  02cd3bc  srawi 6, 5, 31
  02cd3c0  ori 3, 3, 16384
  02cd3c4  srwi 7, 6, 1
  02cd3c8  xor 5, 7, 5
  02cd3cc  subc 5, 5, 6
  02cd3d0  cmpw 1, 5, 3
  02cd3d4  cmpw 5, 4
  02cd3d8  cror 2, 0, 5
  02cd3dc  bt 2, 0x2cd410
  02cd3e0  lwz 5, 24(31)
  02cd3e4  lis 3, 17535
  02cd3e8  lis 4, 16384
  02cd3ec  srawi 6, 5, 31
  02cd3f0  ori 3, 3, 16384
  02cd3f4  srwi 7, 6, 1
  02cd3f8  xor 5, 7, 5
  02cd3fc  subc 5, 5, 6
  02cd400  cmpw 5, 4
  02cd404  cmpw 1, 5, 3
  02cd408  bt 0, 0x2cd410
  02cd40c  bf 5, 0x2cd420
  02cd410  ori 3, 31, 0
  02cd414  bl 0xefb38
  02cd418  nop
  02cd41c  b 0x2cd908
  02cd420  li 3, 0
  02cd424  lis 6, 45
  02cd428  fmr 1, 25
  02cd42c  lis 5, 16256
  02cd430  fmuls 3, 30, 29
  02cd434  addi 30, 6, -17836
  02cd438  fmr 2, 25
  02cd43c  stw 3, 240(1)
  02cd440  li 11, -1
  02cd444  stw 3, 244(1)
  02cd448  li 6, 1
  02cd44c  stw 5, 248(1)
  02cd450  li 7, 5
  02cd454  stw 5, 252(1)
  02cd458  addic 4, 1, 240
  02cd45c  lfs 5, 72(30)
  02cd460  ori 3, 31, 0
  02cd464  lfs 7, 148(30)
  02cd468  ori 5, 29, 0
  02cd46c  lbz 12, 20(28)
  02cd470  li 8, 5
  02cd474  std 11, 144(1)
  02cd478  li 9, 2
  02cd47c  std 6, 160(1)
  02cd480  li 10, 4
  02cd484  std 7, 168(1)
  02cd488  fmr 4, 30
  02cd48c  std 11, 176(1)
  02cd490  fmr 6, 28
  02cd494  std 12, 184(1)
  02cd498  bl 0x10e030
  02cd49c  nop
  02cd4a0  fmr 1, 30
  02cd4a4  ori 3, 29, 0
  02cd4a8  li 5, 21
  02cd4ac  ori 6, 31, 0
  02cd4b0  li 7, 0
  02cd4b4  bl 0x5e598
  02cd4b8  nop
  02cd4bc  lfs 1, 152(30)
  02cd4c0  li 4, 2
  02cd4c4  lfs 2, 16(31)
  02cd4c8  li 5, 3
  02cd4cc  lfs 3, 24(31)
  02cd4d0  lis 7, 161
  02cd4d4  stfs 2, 64(1)
  02cd4d8  ori 8, 3, 0
  02cd4dc  stfs 3, 72(1)
  02cd4e0  ori 3, 31, 0
  02cd4e4  lfs 2, 20(31)
  02cd4e8  addic 7, 7, 18944
  02cd4ec  li 9, 0
  02cd4f0  fmr 3, 28
  02cd4f4  stfs 2, 68(1)
  02cd4f8  lis 10, 1
  02cd4fc  lfs 2, 28(31)
  02cd500  stfs 2, 76(1)
  02cd504  std 4, 120(1)
  02cd508  fmr 2, 28
  02cd50c  std 5, 128(1)
  02cd510  ld 5, 64(1)
  02cd514  ld 6, 72(1)
  02cd518  bl 0x107860
  02cd51c  nop
  02cd520  lbz 3, 20(28)
  02cd524  cmpwi 3, 0
  02cd528  bt 2, 0x2cd544
  02cd52c  li 3, 4
  02cd530  li 4, 0
  02cd534  ori 5, 31, 0
  02cd538  bl 0x15d12c
  02cd53c  nop
  02cd540  b 0x2cd558
  02cd544  li 3, 0
  02cd548  li 4, 0
  02cd54c  ori 5, 31, 0
  02cd550  bl 0x15d12c
  02cd554  nop
  02cd558  ori 3, 31, 0
  02cd55c  bl 0xefb38
  02cd560  nop
  02cd564  b 0x2cd908
  02cd568  lbz 3, 112(31)
  02cd56c  rlwinm 3, 3, 0, 30, 30
  02cd570  cmpwi 3, 0
  02cd574  bt 2, 0x2cd86c
  02cd578  li 3, 4
  02cd57c  lbz 4, 83(31)
  02cd580  cmpwi 4, 7
  02cd584  stb 3, 32(31)
  02cd588  bt 2, 0x2cd5c8
  02cd58c  lis 3, 45
  02cd590  lis 4, 114
  02cd594  addi 3, 3, -17836
  02cd598  li 5, 0
  02cd59c  lfs 1, 120(3)
  02cd5a0  lfs 2, -3056(4)
  02cd5a4  ori 3, 31, 0
  02cd5a8  li 4, 7
  02cd5ac  fmuls 1, 2, 1
  02cd5b0  fctiwz 1, 1
  02cd5b4  stfd 1, 280(1)
  02cd5b8  lwz 6, 284(1)
  02cd5bc  extsw 6, 6
  02cd5c0  bl 0xfddc0
  02cd5c4  nop
  02cd5c8  lis 3, 45
  02cd5cc  lis 4, 114
  02cd5d0  addi 3, 3, -17836
  02cd5d4  lfs 1, 52(3)
  02cd5d8  lfs 2, -3064(4)
  02cd5dc  fmuls 1, 2, 1
  02cd5e0  fmuls 1, 1, 30
  02cd5e4  stfs 1, 92(30)
  02cd5e8  b 0x2cd86c
  02cd5ec  lis 3, 101
  02cd5f0  addic 3, 3, 23388
  02cd5f4  bl 0x5cd098
  02cd5f8  nop
  02cd5fc  b 0x2cd86c
  02cd600  ori 3, 29, 0
  02cd604  fmuls 1, 31, 26
  02cd608  li 5, 1
  02cd60c  ori 6, 31, 0
  02cd610  bl 0x59e20
  02cd614  nop
  02cd618  cmpwi 3, 0
  02cd61c  bt 2, 0x2cd6e0
  02cd620  lis 4, 161
  02cd624  addic 4, 4, 2368
  02cd628  lwz 3, 24(4)
  02cd62c  cmpwi 3, 0
  02cd630  bt 2, 0x2cd6e0
  02cd634  lhz 3, 166(3)
  02cd638  cmpwi 3, 186
  02cd63c  bf 2, 0x2cd6e0
  02cd640  lfs 1, 52(4)
  02cd644  lfs 2, 20(31)
  02cd648  lfs 3, 48(4)
  02cd64c  fsubs 1, 1, 2
  02cd650  lfs 2, 16(31)
  02cd654  fsubs 2, 3, 2
  02cd658  lfs 3, 56(4)
  02cd65c  lfs 4, 24(31)
  02cd660  fsubs 3, 3, 4
  02cd664  fmuls 4, 1, 1
  02cd668  lis 3, 45
  02cd66c  li 5, 0
  02cd670  stfs 2, 256(1)
  02cd674  stfs 1, 260(1)
  02cd678  addi 3, 3, -17836
  02cd67c  fmadds 4, 2, 2, 4
  02cd680  fmadds 2, 3, 3, 4
  02cd684  fsqrts 1, 2
  02cd688  lfs 2, 60(4)
  02cd68c  stfs 3, 264(1)
  02cd690  stfs 2, 268(1)
  02cd694  lfs 2, 156(3)
  02cd698  addic 3, 1, 256
  02cd69c  stw 5, 264(1)
  02cd6a0  ori 4, 3, 0
  02cd6a4  fmuls 1, 1, 2
  02cd6a8  bl 0x5e7f98
  02cd6ac  nop
  02cd6b0  lfs 1, 16(31)
  02cd6b4  lfs 2, 256(1)
  02cd6b8  lfs 3, 20(31)
  02cd6bc  fadds 1, 1, 2
  02cd6c0  lfs 2, 260(1)
  02cd6c4  lfs 4, 24(31)
  02cd6c8  fadds 2, 3, 2
  02cd6cc  lfs 3, 264(1)
  02cd6d0  fadds 3, 4, 3
  02cd6d4  stfs 1, 16(31)
  02cd6d8  stfs 2, 20(31)
  02cd6dc  stfs 3, 24(31)
  02cd6e0  lis 3, 45
  02cd6e4  lfs 1, 24(30)
  02cd6e8  lis 27, 151
  02cd6ec  addi 5, 3, -17836
  02cd6f0  lis 3, 114
  02cd6f4  addic 27, 27, -25376
  02cd6f8  addic 29, 30, 16
  02cd6fc  lfs 2, 72(5)
  02cd700  lfs 3, -3048(3)
  02cd704  ori 4, 29, 0
  02cd708  lfs 4, 64(30)
  02cd70c  ori 3, 31, 0
  02cd710  fnmsubs 1, 3, 2, 1
  02cd714  li 8, 0
  02cd718  stfs 1, 24(30)
  02cd71c  stfs 4, 7888(27)
  02cd720  lfs 1, 68(30)
  02cd724  stfs 1, 7892(27)
  02cd728  lfs 1, 72(30)
  02cd72c  stfs 1, 7896(27)
  02cd730  lwz 6, 76(30)
  02cd734  stw 6, 7944(27)
  02cd738  lfs 1, 92(30)
  02cd73c  stfs 1, 7908(27)
  02cd740  lfs 1, 76(5)
  02cd744  lfs 2, 7920(27)
  02cd748  lwz 6, 7872(27)
  02cd74c  fmuls 1, 31, 1
  02cd750  extsw 6, 6
  02cd754  bl 0x100ef8
  02cd758  nop
  02cd75c  rlwinm 28, 3, 0, 30, 30
  02cd760  cmpwi 28, 0
  02cd764  bt 2, 0x2cd788
  02cd768  lfs 1, 16(30)
  02cd76c  li 3, 0
  02cd770  lfs 2, 20(30)
  02cd774  fmuls 1, 1, 26
  02cd778  fmuls 2, 2, 26
  02cd77c  stw 3, 24(30)
  02cd780  stfs 1, 16(30)
  02cd784  stfs 2, 20(30)
  02cd788  lis 5, 114
  02cd78c  ori 3, 29, 0
  02cd790  ori 4, 29, 0
  02cd794  lfs 1, -3064(5)
  02cd798  fmuls 1, 1, 27
  02cd79c  bl 0x5e8e80
  02cd7a0  nop
  02cd7a4  cmpwi 28, 0
  02cd7a8  bf 2, 0x2cd7f8
  02cd7ac  lbz 3, 83(31)
  02cd7b0  cmpwi 3, 5
  02cd7b4  bt 2, 0x2cd800
  02cd7b8  lis 3, 45
  02cd7bc  lis 4, 114
  02cd7c0  addi 3, 3, -17836
  02cd7c4  li 5, 0
  02cd7c8  lfs 1, 56(3)
  02cd7cc  lfs 2, -3056(4)
  02cd7d0  ori 3, 31, 0
  02cd7d4  fmuls 1, 2, 1
  02cd7d8  li 4, 5
  02cd7dc  fctiwz 1, 1
  02cd7e0  stfd 1, 280(1)
  02cd7e4  lwz 6, 284(1)
  02cd7e8  extsw 6, 6
  02cd7ec  bl 0xfddc0
  02cd7f0  nop
  02cd7f4  b 0x2cd800
  02cd7f8  li 3, 2
  02cd7fc  stb 3, 32(31)
  02cd800  lfs 1, 16(30)
  02cd804  lfs 2, 20(30)
  02cd808  bl 0x5e8338
  02cd80c  nop
  02cd810  lfs 2, 7900(27)
  02cd814  addic 5, 30, 64
  02cd818  lfs 3, 7904(27)
  02cd81c  ori 3, 31, 0
  02cd820  lfs 4, 7908(27)
  02cd824  bl 0xff2e8
  02cd828  nop
  02cd82c  lfs 1, 7888(27)
  02cd830  ori 3, 31, 0
  02cd834  stfs 1, 64(30)
  02cd838  lfs 1, 7892(27)
  02cd83c  stfs 1, 68(30)
  02cd840  lfs 1, 7896(27)
  02cd844  stfs 1, 72(30)
  02cd848  lwz 4, 7944(27)
  02cd84c  stw 4, 76(30)
  02cd850  lfs 1, 7908(27)
  02cd854  stfs 1, 92(30)
  02cd858  bl 0x2cb930
  02cd85c  stb 3, 32(31)
  02cd860  b 0x2cd86c
  02cd864  li 3, 0
  02cd868  stb 3, 32(31)
  02cd86c  lwz 5, 16(31)
  02cd870  lis 3, 17535
  02cd874  lis 4, 16384
  02cd878  srawi 6, 5, 31
  02cd87c  ori 3, 3, 16384
  02cd880  srwi 7, 6, 1
  02cd884  xor 5, 7, 5
  02cd888  subc 5, 5, 6
  02cd88c  cmpw 1, 5, 3
  02cd890  cmpw 5, 4
  02cd894  cror 2, 0, 5
  02cd898  bt 2, 0x2cd8fc
  02cd89c  lwz 5, 20(31)
  02cd8a0  lis 3, 17535
  02cd8a4  lis 4, 16384
  02cd8a8  srawi 6, 5, 31
  02cd8ac  ori 3, 3, 16384
  02cd8b0  srwi 7, 6, 1
  02cd8b4  xor 5, 7, 5
  02cd8b8  subc 5, 5, 6
  02cd8bc  cmpw 1, 5, 3
  02cd8c0  cmpw 5, 4
  02cd8c4  cror 2, 0, 5
  02cd8c8  bt 2, 0x2cd8fc
  02cd8cc  lwz 5, 24(31)
  02cd8d0  lis 3, 17535
  02cd8d4  lis 4, 16384
  02cd8d8  srawi 6, 5, 31
  02cd8dc  ori 3, 3, 16384
  02cd8e0  srwi 7, 6, 1
  02cd8e4  xor 5, 7, 5
  02cd8e8  subc 5, 5, 6
  02cd8ec  cmpw 5, 4
  02cd8f0  cmpw 1, 5, 3
  02cd8f4  bt 0, 0x2cd8fc
  02cd8f8  bf 5, 0x2cd908
  02cd8fc  ori 3, 31, 0
  02cd900  bl 0xefb38
  02cd904  nop
  02cd908  ld 0, 448(1)
  02cd90c  mtlr 0
  02cd910  lfd 23, 360(1)
  02cd914  lfd 24, 368(1)
  02cd918  lfd 25, 376(1)
  02cd91c  lfd 26, 384(1)
  02cd920  lfd 27, 392(1)
  02cd924  lfd 28, 400(1)
  02cd928  lfd 29, 408(1)
  02cd92c  lfd 30, 416(1)
  02cd930  lfd 31, 424(1)
  02cd934  ld 25, 304(1)
  02cd938  ld 26, 312(1)
  02cd93c  ld 27, 320(1)
  02cd940  ld 28, 328(1)
  02cd944  ld 29, 336(1)
  02cd948  ld 30, 344(1)
  02cd94c  ld 31, 352(1)
  02cd950  addi 1, 1, 432
  02cd954  blr

# game/update/moby578.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M578_003cafa4:   # 0x3cafa4, 0x58 bytes
  03cafa4  stdu 1, -128(1)
  03cafa8  mflr 0
  03cafac  std 0, 144(1)
  03cafb0  std 31, 120(1)
  03cafb4  ori 31, 3, 0
  03cafb8  bl 0x48a718
  03cafbc  nop
  03cafc0  cmpwi 3, 0
  03cafc4  bt 2, 0x3cafd4
  03cafc8  li 4, 7
  03cafcc  stb 4, 32(31)
  03cafd0  b 0x3cafe8
  03cafd4  lbz 4, 32(31)
  03cafd8  cmpwi 4, 7
  03cafdc  bf 2, 0x3cafe8
  03cafe0  li 4, 1
  03cafe4  stb 4, 32(31)
  03cafe8  ld 0, 144(1)
  03cafec  mtlr 0
  03caff0  ld 31, 120(1)
  03caff4  addi 1, 1, 128
  03caff8  blr

M578_003caffc:   # 0x3caffc, 0x58 bytes
  03caffc  stdu 1, -128(1)
  03cb000  mflr 0
  03cb004  std 0, 144(1)
  03cb008  std 31, 120(1)
  03cb00c  ori 31, 3, 0
  03cb010  bl 0x48aa70
  03cb014  nop
  03cb018  cmpwi 3, 0
  03cb01c  bt 2, 0x3cb02c
  03cb020  li 4, 7
  03cb024  stb 4, 32(31)
  03cb028  b 0x3cb040
  03cb02c  lbz 4, 32(31)
  03cb030  cmpwi 4, 7
  03cb034  bf 2, 0x3cb040
  03cb038  li 4, 1
  03cb03c  stb 4, 32(31)
  03cb040  ld 0, 144(1)
  03cb044  mtlr 0
  03cb048  ld 31, 120(1)
  03cb04c  addi 1, 1, 128
  03cb050  blr

M578_003cb054:   # 0x3cb054, 0xd0 bytes
  03cb054  stdu 1, -160(1)
  03cb058  mflr 0
  03cb05c  std 0, 176(1)
  03cb060  stfd 31, 152(1)
  03cb064  std 31, 144(1)
  03cb068  fmr 31, 1
  03cb06c  std 30, 136(1)
  03cb070  std 28, 120(1)
  03cb074  ori 31, 3, 0
  03cb078  ori 30, 5, 0
  03cb07c  std 29, 128(1)
  03cb080  ori 28, 4, 0
  03cb084  bl 0x486828
  03cb088  nop
  03cb08c  ori 29, 3, 0
  03cb090  ori 3, 31, 0
  03cb094  fmr 1, 31
  03cb098  ori 5, 30, 0
  03cb09c  ori 4, 28, 0
  03cb0a0  bl 0x48acb8
  03cb0a4  nop
  03cb0a8  ori 30, 3, 0
  03cb0ac  cmpwi 30, 0
  03cb0b0  bt 2, 0x3cb0c0
  03cb0b4  li 3, 7
  03cb0b8  stb 3, 32(31)
  03cb0bc  b 0x3cb0d4
  03cb0c0  lbz 3, 32(31)
  03cb0c4  cmpwi 3, 7
  03cb0c8  bf 2, 0x3cb0d4
  03cb0cc  li 3, 1
  03cb0d0  stb 3, 32(31)
  03cb0d4  cmpwi 29, 0
  03cb0d8  bt 2, 0x3cb0fc
  03cb0dc  lhz 3, 104(29)
  03cb0e0  cmpwi 3, 6
  03cb0e4  bf 2, 0x3cb0fc
  03cb0e8  li 3, 2
  03cb0ec  li 4, 0
  03cb0f0  ori 5, 31, 0
  03cb0f4  bl 0x15d12c
  03cb0f8  nop
  03cb0fc  ori 3, 30, 0
  03cb100  ld 0, 176(1)
  03cb104  mtlr 0
  03cb108  lfd 31, 152(1)
  03cb10c  ld 28, 120(1)
  03cb110  ld 29, 128(1)
  03cb114  ld 30, 136(1)
  03cb118  ld 31, 144(1)
  03cb11c  addi 1, 1, 160
  03cb120  blr

M578_003cb124:   # 0x3cb124, 0x38 bytes
  03cb124  stdu 1, -128(1)
  03cb128  mflr 0
  03cb12c  std 0, 144(1)
  03cb130  std 31, 120(1)
  03cb134  ori 31, 3, 0
  03cb138  bl 0x48afe8
  03cb13c  nop
  03cb140  li 4, 7
  03cb144  stb 4, 32(31)
  03cb148  ld 0, 144(1)
  03cb14c  mtlr 0
  03cb150  ld 31, 120(1)
  03cb154  addi 1, 1, 128
  03cb158  blr

M578_003cb15c:   # 0x3cb15c, 0x40 bytes
  03cb15c  cmpwi 3, 0
  03cb160  bt 2, 0x3cb194
  03cb164  li 4, 0
  03cb168  lwz 3, 120(3)
  03cb16c  li 5, 0
  03cb170  subc 4, 4, 3
  03cb174  addic 3, 3, 96
  03cb178  cntlzw 4, 4
  03cb17c  subc 5, 5, 3
  03cb180  sldi 4, 4, 58
  03cb184  sradi 4, 4, 63
  03cb188  and 4, 4, 5
  03cb18c  addc 3, 3, 4
  03cb190  b 0x3cb198
  03cb194  li 3, 0
  03cb198  blr

M578_003cb19c:   # 0x3cb19c, 0x14 bytes
  03cb19c  lis 3, 132
  03cb1a0  lis 4, 1
  03cb1a4  addic 3, 3, 25004
  03cb1a8  stw 4, 72(3)
  03cb1ac  blr

M578_003cb1b8:   # 0x3cb1b8, 0xe08 bytes
  03cb1b8  stdu 1, -448(1)
  03cb1bc  mflr 0
  03cb1c0  std 0, 464(1)
  03cb1c4  stfd 30, 432(1)
  03cb1c8  stfd 31, 440(1)
  03cb1cc  std 31, 424(1)
  03cb1d0  lis 4, 61
  03cb1d4  ori 31, 3, 0
  03cb1d8  addi 5, 4, -20048
  03cb1dc  li 6, 0
  03cb1e0  std 30, 416(1)
  03cb1e4  lis 4, 51
  03cb1e8  lwz 30, 120(31)
  03cb1ec  lfs 30, 0(5)
  03cb1f0  li 5, 0
  03cb1f4  std 29, 408(1)
  03cb1f8  std 28, 400(1)
  03cb1fc  stw 6, 116(1)
  03cb200  bl 0x10675c
  03cb204  nop
  03cb208  ori 29, 3, 0
  03cb20c  addic 5, 30, 32
  03cb210  ori 4, 29, 0
  03cb214  li 6, 0
  03cb218  addic 7, 1, 112
  03cb21c  li 9, 0
  03cb220  addic 8, 1, 116
  03cb224  ori 3, 31, 0
  03cb228  li 10, 4
  03cb22c  bl 0x106840
  03cb230  nop
  03cb234  lwz 4, 112(1)
  03cb238  cmpwi 4, 1
  03cb23c  bt 2, 0x3cbf80
  03cb240  lbz 4, 32(31)
  03cb244  cmpwi 4, 5
  03cb248  bt 2, 0x3cbf80
  03cb24c  lis 4, 61
  03cb250  addi 5, 4, -20048
  03cb254  lwz 4, 32(29)
  03cb258  cmpwi 4, 0
  03cb25c  lfs 31, 4(5)
  03cb260  bt 2, 0x3cb5e8
  03cb264  lis 5, 151
  03cb268  addic 5, 5, -25376
  03cb26c  lwz 6, 4240(5)
  03cb270  cmpw 4, 6
  03cb274  bt 2, 0x3cb430
  03cb278  lfs 1, 16(31)
  03cb27c  lfs 2, 16(4)
  03cb280  lfs 3, 20(31)
  03cb284  lfs 4, 20(4)
  03cb288  fsubs 1, 1, 2
  03cb28c  fsubs 2, 3, 4
  03cb290  lis 4, 115
  03cb294  addic 4, 4, 22784
  03cb298  fabs 3, 1
  03cb29c  fabs 4, 2
  03cb2a0  stfs 1, 184(1)
  03cb2a4  stfs 2, 188(1)
  03cb2a8  fsubs 1, 3, 4
  03cb2ac  stfs 1, 192(1)
  03cb2b0  lwz 5, 184(1)
  03cb2b4  lfs 1, 184(1)
  03cb2b8  lwz 6, 188(1)
  03cb2bc  lfs 2, 188(1)
  03cb2c0  lwz 7, 192(1)
  03cb2c4  rlwinm 6, 6, 3, 29, 29
  03cb2c8  fabs 5, 2
  03cb2cc  lfs 2, 192(1)
  03cb2d0  fabs 1, 1
  03cb2d4  rlwimi 6, 7, 2, 30, 30
  03cb2d8  fsub 6, 2, 30
  03cb2dc  fsub 7, 2, 30
  03cb2e0  rlwimi 6, 5, 4, 28, 28
  03cb2e4  ori 5, 4, 0
  03cb2e8  rlwimi 5, 6, 2, 26, 28
  03cb2ec  slwi 6, 6, 2
  03cb2f0  clrldi 5, 5, 32
  03cb2f4  fsel 4, 6, 1, 4
  03cb2f8  lfsx 1, 4, 6
  03cb2fc  fsel 3, 7, 5, 3
  03cb300  lfs 2, 4(5)
  03cb304  fcmpu 0, 4, 30
  03cb308  bt 1, 0x3cb314
  03cb30c  fmr 1, 30
  03cb310  b 0x3cb42c
  03cb314  fsubs 5, 3, 4
  03cb318  fadds 3, 3, 4
  03cb31c  addic 4, 1, 16
  03cb320  li 7, 2
  03cb324  addic 6, 4, 356
  03cb328  addic 5, 4, 340
  03cb32c  mtctr 7
  03cb330  fdivs 3, 5, 3
  03cb334  fmuls 4, 3, 3
  03cb338  stfs 3, 368(1)
  03cb33c  stfs 3, 360(1)
  03cb340  stfs 3, 364(1)
  03cb344  stfs 3, 356(1)
  03cb348  lfs 6, 368(1)
  03cb34c  lfs 7, 360(1)
  03cb350  lfs 8, 364(1)
  03cb354  fmuls 5, 4, 4
  03cb358  fmuls 7, 7, 4
  03cb35c  fmuls 6, 6, 5
  03cb360  fmuls 3, 5, 5
  03cb364  fmuls 5, 8, 5
  03cb368  stfs 7, 360(1)
  03cb36c  fmuls 4, 6, 4
  03cb370  stfs 5, 364(1)
  03cb374  stfs 4, 368(1)
  03cb378  lfs 4, 340(4)
  03cb37c  fmuls 4, 4, 3
  03cb380  stfs 4, 356(4)
  03cb384  lfs 4, 4(5)
  03cb388  addic 5, 5, 8
  03cb38c  fmuls 4, 4, 3
  03cb390  addic 4, 4, 8
  03cb394  stfs 4, 4(6)
  03cb398  addic 6, 6, 8
  03cb39c  bdnz 0x3cb378
  03cb3a0  li 6, 4
  03cb3a4  ori 4, 1, 0
  03cb3a8  mtctr 6
  03cb3ac  lis 5, 115
  03cb3b0  addic 6, 4, 356
  03cb3b4  addic 5, 5, 22752
  03cb3b8  ori 8, 6, 0
  03cb3bc  lfs 3, 356(4)
  03cb3c0  lfs 4, 0(5)
  03cb3c4  fmuls 3, 3, 4
  03cb3c8  lfs 4, 4(5)
  03cb3cc  addic 5, 5, 8
  03cb3d0  stfs 3, 356(4)
  03cb3d4  lfs 3, 4(6)
  03cb3d8  addic 4, 4, 8
  03cb3dc  fmuls 3, 3, 4
  03cb3e0  stfs 3, 4(6)
  03cb3e4  addic 6, 6, 8
  03cb3e8  bdnz 0x3cb3bc
  03cb3ec  ori 4, 1, 0
  03cb3f0  fmr 3, 30
  03cb3f4  mtctr 7
  03cb3f8  lfs 4, 356(4)
  03cb3fc  fadds 3, 3, 4
  03cb400  lfs 4, 4(8)
  03cb404  addic 4, 4, 16
  03cb408  lfs 5, 8(8)
  03cb40c  lfs 6, 12(8)
  03cb410  addic 8, 8, 16
  03cb414  fadds 3, 3, 4
  03cb418  fadds 3, 3, 5
  03cb41c  fadds 3, 3, 6
  03cb420  bdnz 0x3cb3f8
  03cb424  fadds 3, 3, 31
  03cb428  fmadds 1, 3, 1, 2
  03cb42c  b 0x3cb5e4
  03cb430  lfs 1, 16(31)
  03cb434  lfs 2, 128(5)
  03cb438  lfs 3, 20(31)
  03cb43c  lfs 4, 132(5)
  03cb440  fsubs 1, 1, 2
  03cb444  fsubs 2, 3, 4
  03cb448  lis 4, 115
  03cb44c  addic 4, 4, 22784
  03cb450  fabs 3, 1
  03cb454  fabs 4, 2
  03cb458  stfs 1, 172(1)
  03cb45c  stfs 2, 176(1)
  03cb460  fsubs 1, 3, 4
  03cb464  stfs 1, 180(1)
  03cb468  lwz 5, 172(1)
  03cb46c  lfs 1, 172(1)
  03cb470  lwz 6, 176(1)
  03cb474  lfs 2, 176(1)
  03cb478  lwz 7, 180(1)
  03cb47c  rlwinm 6, 6, 3, 29, 29
  03cb480  fabs 5, 2
  03cb484  lfs 2, 180(1)
  03cb488  fabs 1, 1
  03cb48c  rlwimi 6, 7, 2, 30, 30
  03cb490  fsub 6, 2, 30
  03cb494  fsub 7, 2, 30
  03cb498  rlwimi 6, 5, 4, 28, 28
  03cb49c  ori 5, 4, 0
  03cb4a0  rlwimi 5, 6, 2, 26, 28
  03cb4a4  slwi 6, 6, 2
  03cb4a8  clrldi 5, 5, 32
  03cb4ac  fsel 4, 6, 1, 4
  03cb4b0  lfsx 1, 4, 6
  03cb4b4  fsel 3, 7, 5, 3
  03cb4b8  lfs 2, 4(5)
  03cb4bc  fcmpu 0, 4, 30
  03cb4c0  bt 1, 0x3cb4cc
  03cb4c4  fmr 1, 30
  03cb4c8  b 0x3cb5e4
  03cb4cc  fsubs 5, 3, 4
  03cb4d0  fadds 3, 3, 4
  03cb4d4  addic 4, 1, 16
  03cb4d8  li 7, 2
  03cb4dc  addic 6, 4, 324
  03cb4e0  addic 5, 4, 308
  03cb4e4  mtctr 7
  03cb4e8  fdivs 3, 5, 3
  03cb4ec  fmuls 4, 3, 3
  03cb4f0  stfs 3, 336(1)
  03cb4f4  stfs 3, 328(1)
  03cb4f8  stfs 3, 332(1)
  03cb4fc  stfs 3, 324(1)
  03cb500  lfs 6, 336(1)
  03cb504  lfs 7, 328(1)
  03cb508  lfs 8, 332(1)
  03cb50c  fmuls 5, 4, 4
  03cb510  fmuls 7, 7, 4
  03cb514  fmuls 6, 6, 5
  03cb518  fmuls 3, 5, 5
  03cb51c  fmuls 5, 8, 5
  03cb520  stfs 7, 328(1)
  03cb524  fmuls 4, 6, 4
  03cb528  stfs 5, 332(1)
  03cb52c  stfs 4, 336(1)
  03cb530  lfs 4, 308(4)
  03cb534  fmuls 4, 4, 3
  03cb538  stfs 4, 324(4)
  03cb53c  lfs 4, 4(5)
  03cb540  addic 5, 5, 8
  03cb544  fmuls 4, 4, 3
  03cb548  addic 4, 4, 8
  03cb54c  stfs 4, 4(6)
  03cb550  addic 6, 6, 8
  03cb554  bdnz 0x3cb530
  03cb558  li 6, 4
  03cb55c  ori 4, 1, 0
  03cb560  mtctr 6
  03cb564  lis 5, 115
  03cb568  addic 6, 4, 324
  03cb56c  addic 5, 5, 22752
  03cb570  ori 8, 6, 0
  03cb574  lfs 3, 324(4)
  03cb578  lfs 4, 0(5)
  03cb57c  fmuls 3, 3, 4
  03cb580  lfs 4, 4(5)
  03cb584  addic 5, 5, 8
  03cb588  stfs 3, 324(4)
  03cb58c  lfs 3, 4(6)
  03cb590  addic 4, 4, 8
  03cb594  fmuls 3, 3, 4
  03cb598  stfs 3, 4(6)
  03cb59c  addic 6, 6, 8
  03cb5a0  bdnz 0x3cb574
  03cb5a4  ori 4, 1, 0
  03cb5a8  fmr 3, 30
  03cb5ac  mtctr 7
  03cb5b0  lfs 4, 324(4)
  03cb5b4  fadds 3, 3, 4
  03cb5b8  lfs 4, 4(8)
  03cb5bc  addic 4, 4, 16
  03cb5c0  lfs 5, 8(8)
  03cb5c4  lfs 6, 12(8)
  03cb5c8  addic 8, 8, 16
  03cb5cc  fadds 3, 3, 4
  03cb5d0  fadds 3, 3, 5
  03cb5d4  fadds 3, 3, 6
  03cb5d8  bdnz 0x3cb5b0
  03cb5dc  fadds 3, 3, 31
  03cb5e0  fmadds 1, 3, 1, 2
  03cb5e4  b 0x3cb7a4
  03cb5e8  lis 4, 151
  03cb5ec  lfs 1, 16(31)
  03cb5f0  addic 4, 4, -25376
  03cb5f4  lfs 2, 20(31)
  03cb5f8  lfs 3, 128(4)
  03cb5fc  lfs 4, 132(4)
  03cb600  fsubs 1, 1, 3
  03cb604  fsubs 2, 2, 4
  03cb608  lis 4, 115
  03cb60c  addic 4, 4, 22784
  03cb610  fabs 3, 1
  03cb614  fabs 4, 2
  03cb618  stfs 1, 160(1)
  03cb61c  stfs 2, 164(1)
  03cb620  fsubs 1, 3, 4
  03cb624  stfs 1, 168(1)
  03cb628  lwz 5, 160(1)
  03cb62c  lfs 1, 160(1)
  03cb630  lwz 6, 164(1)
  03cb634  lfs 2, 164(1)
  03cb638  fabs 1, 1
  03cb63c  lwz 7, 168(1)
  03cb640  rlwinm 6, 6, 3, 29, 29
  03cb644  lfs 5, 168(1)
  03cb648  fabs 2, 2
  03cb64c  rlwimi 6, 7, 2, 30, 30
  03cb650  fsub 6, 5, 30
  03cb654  fsub 5, 5, 30
  03cb658  rlwimi 6, 5, 4, 28, 28
  03cb65c  ori 5, 4, 0
  03cb660  rlwimi 5, 6, 2, 26, 28
  03cb664  slwi 6, 6, 2
  03cb668  clrldi 5, 5, 32
  03cb66c  fsel 4, 6, 1, 4
  03cb670  lfsx 1, 4, 6
  03cb674  fsel 3, 5, 2, 3
  03cb678  lfs 2, 4(5)
  03cb67c  fcmpu 0, 4, 30
  03cb680  bt 1, 0x3cb68c
  03cb684  fmr 1, 30
  03cb688  b 0x3cb7a4
  03cb68c  fsubs 5, 3, 4
  03cb690  fadds 3, 3, 4
  03cb694  addic 4, 1, 16
  03cb698  li 7, 2
  03cb69c  addic 5, 4, 276
  03cb6a0  addic 6, 4, 292
  03cb6a4  mtctr 7
  03cb6a8  fdivs 3, 5, 3
  03cb6ac  fmuls 4, 3, 3
  03cb6b0  stfs 3, 304(1)
  03cb6b4  stfs 3, 296(1)
  03cb6b8  stfs 3, 300(1)
  03cb6bc  stfs 3, 292(1)
  03cb6c0  lfs 6, 304(1)
  03cb6c4  lfs 7, 296(1)
  03cb6c8  lfs 8, 300(1)
  03cb6cc  fmuls 5, 4, 4
  03cb6d0  fmuls 7, 7, 4
  03cb6d4  fmuls 6, 6, 5
  03cb6d8  fmuls 3, 5, 5
  03cb6dc  fmuls 5, 8, 5
  03cb6e0  stfs 7, 296(1)
  03cb6e4  fmuls 4, 6, 4
  03cb6e8  stfs 5, 300(1)
  03cb6ec  stfs 4, 304(1)
  03cb6f0  lfs 4, 276(4)
  03cb6f4  fmuls 4, 4, 3
  03cb6f8  stfs 4, 292(4)
  03cb6fc  lfs 4, 4(5)
  03cb700  addic 4, 4, 8
  03cb704  addic 5, 5, 8
  03cb708  fmuls 4, 4, 3
  03cb70c  stfs 4, 4(6)
  03cb710  addic 6, 6, 8
  03cb714  bdnz 0x3cb6f0
  03cb718  li 6, 4
  03cb71c  ori 4, 1, 0
  03cb720  mtctr 6
  03cb724  lis 5, 115
  03cb728  addic 6, 4, 292
  03cb72c  addic 5, 5, 22752
  03cb730  ori 8, 6, 0
  03cb734  lfs 3, 292(4)
  03cb738  lfs 4, 0(5)
  03cb73c  fmuls 3, 3, 4
  03cb740  lfs 4, 4(5)
  03cb744  addic 5, 5, 8
  03cb748  stfs 3, 292(4)
  03cb74c  lfs 3, 4(6)
  03cb750  addic 4, 4, 8
  03cb754  fmuls 3, 3, 4
  03cb758  stfs 3, 4(6)
  03cb75c  addic 6, 6, 8
  03cb760  bdnz 0x3cb734
  03cb764  fmr 3, 30
  03cb768  ori 4, 1, 0
  03cb76c  mtctr 7
  03cb770  lfs 4, 292(4)
  03cb774  fadds 3, 3, 4
  03cb778  addic 4, 4, 16
  03cb77c  lfs 4, 4(8)
  03cb780  lfs 5, 8(8)
  03cb784  lfs 6, 12(8)
  03cb788  addic 8, 8, 16
  03cb78c  fadds 3, 3, 4
  03cb790  fadds 3, 3, 5
  03cb794  fadds 3, 3, 6
  03cb798  bdnz 0x3cb770
  03cb79c  fadds 3, 3, 31
  03cb7a0  fmadds 1, 3, 1, 2
  03cb7a4  stfs 1, 120(1)
  03cb7a8  lfs 1, 32(30)
  03cb7ac  lfs 2, 116(1)
  03cb7b0  fsubs 1, 1, 2
  03cb7b4  fcmpu 0, 1, 30
  03cb7b8  stfs 1, 32(30)
  03cb7bc  cror 6, 0, 2
  03cb7c0  bt 6, 0x3cbce4
  03cb7c4  cmpwi 3, 2
  03cb7c8  bt 1, 0x3cb7d8
  03cb7cc  cmpwi 3, 1
  03cb7d0  bt 2, 0x3cbce4
  03cb7d4  b 0x3cbf70
  03cb7d8  cmpwi 3, 5
  03cb7dc  bt 1, 0x3cb7ec
  03cb7e0  cmpwi 3, 3
  03cb7e4  bf 1, 0x3cb7f4
  03cb7e8  b 0x3cba6c
  03cb7ec  cmpwi 3, 6
  03cb7f0  bt 1, 0x3cbf70
  03cb7f4  lis 3, 132
  03cb7f8  lis 4, 114
  03cb7fc  ori 28, 29, 0
  03cb800  addic 29, 30, 112
  03cb804  lfs 1, 25116(3)
  03cb808  lfs 2, -3048(4)
  03cb80c  lis 3, 132
  03cb810  lis 4, 132
  03cb814  fmuls 1, 1, 2
  03cb818  ori 5, 29, 0
  03cb81c  stfs 1, 128(30)
  03cb820  lfs 1, 25120(3)
  03cb824  lfs 2, 25124(4)
  03cb828  bl 0x1158b0
  03cb82c  nop
  03cb830  li 3, 0
  03cb834  li 4, 9
  03cb838  addic 5, 1, 120
  03cb83c  addic 6, 30, 136
  03cb840  stb 3, 173(30)
  03cb844  addic 7, 30, 140
  03cb848  stw 4, 148(30)
  03cb84c  lfs 1, 16(28)
  03cb850  lfs 2, 24(28)
  03cb854  stfs 1, 48(1)
  03cb858  stfs 2, 56(1)
  03cb85c  lfs 1, 20(28)
  03cb860  lfs 2, 28(28)
  03cb864  stfs 1, 52(1)
  03cb868  stfs 2, 60(1)
  03cb86c  ld 3, 48(1)
  03cb870  ld 4, 56(1)
  03cb874  bl 0x107de8
  03cb878  nop
  03cb87c  lis 4, 151
  03cb880  lfs 1, 16(31)
  03cb884  addic 4, 4, -25376
  03cb888  lfs 2, 20(31)
  03cb88c  lis 3, 115
  03cb890  lfs 3, 128(4)
  03cb894  lfs 4, 132(4)
  03cb898  fsubs 1, 1, 3
  03cb89c  fsubs 2, 2, 4
  03cb8a0  addic 3, 3, 22784
  03cb8a4  fabs 3, 1
  03cb8a8  fabs 4, 2
  03cb8ac  stfs 1, 148(1)
  03cb8b0  stfs 2, 152(1)
  03cb8b4  fsubs 1, 3, 4
  03cb8b8  stfs 1, 156(1)
  03cb8bc  lwz 4, 148(1)
  03cb8c0  lfs 1, 148(1)
  03cb8c4  lwz 5, 152(1)
  03cb8c8  lfs 2, 152(1)
  03cb8cc  fabs 1, 1
  03cb8d0  lwz 6, 156(1)
  03cb8d4  rlwinm 5, 5, 3, 29, 29
  03cb8d8  lfs 5, 156(1)
  03cb8dc  fabs 2, 2
  03cb8e0  rlwimi 5, 6, 2, 30, 30
  03cb8e4  fsub 6, 5, 30
  03cb8e8  fsub 5, 5, 30
  03cb8ec  rlwimi 5, 4, 4, 28, 28
  03cb8f0  ori 4, 3, 0
  03cb8f4  rlwimi 4, 5, 2, 26, 28
  03cb8f8  slwi 5, 5, 2
  03cb8fc  clrldi 4, 4, 32
  03cb900  fsel 4, 6, 1, 4
  03cb904  lfsx 1, 3, 5
  03cb908  fsel 3, 5, 2, 3
  03cb90c  lfs 2, 4(4)
  03cb910  fcmpu 0, 4, 30
  03cb914  bt 1, 0x3cb91c
  03cb918  b 0x3cba30
  03cb91c  fsubs 5, 3, 4
  03cb920  fadds 3, 3, 4
  03cb924  addic 3, 1, 16
  03cb928  li 6, 2
  03cb92c  addic 5, 3, 260
  03cb930  addic 4, 3, 244
  03cb934  mtctr 6
  03cb938  fdivs 3, 5, 3
  03cb93c  fmuls 4, 3, 3
  03cb940  stfs 3, 272(1)
  03cb944  stfs 3, 264(1)
  03cb948  stfs 3, 268(1)
  03cb94c  stfs 3, 260(1)
  03cb950  lfs 6, 272(1)
  03cb954  lfs 7, 264(1)
  03cb958  lfs 8, 268(1)
  03cb95c  fmuls 5, 4, 4
  03cb960  fmuls 7, 7, 4
  03cb964  fmuls 6, 6, 5
  03cb968  fmuls 3, 5, 5
  03cb96c  fmuls 5, 8, 5
  03cb970  stfs 7, 264(1)
  03cb974  fmuls 4, 6, 4
  03cb978  stfs 5, 268(1)
  03cb97c  stfs 4, 272(1)
  03cb980  lfs 4, 244(3)
  03cb984  fmuls 4, 4, 3
  03cb988  stfs 4, 260(3)
  03cb98c  lfs 4, 4(4)
  03cb990  addic 4, 4, 8
  03cb994  fmuls 4, 4, 3
  03cb998  addic 3, 3, 8
  03cb99c  stfs 4, 4(5)
  03cb9a0  addic 5, 5, 8
  03cb9a4  bdnz 0x3cb980
  03cb9a8  li 5, 4
  03cb9ac  ori 3, 1, 0
  03cb9b0  mtctr 5
  03cb9b4  lis 4, 115
  03cb9b8  addic 5, 3, 260
  03cb9bc  addic 4, 4, 22752
  03cb9c0  ori 7, 5, 0
  03cb9c4  lfs 3, 260(3)
  03cb9c8  lfs 4, 0(4)
  03cb9cc  fmuls 3, 3, 4
  03cb9d0  lfs 4, 4(4)
  03cb9d4  addic 4, 4, 8
  03cb9d8  stfs 3, 260(3)
  03cb9dc  lfs 3, 4(5)
  03cb9e0  addic 3, 3, 8
  03cb9e4  fmuls 3, 3, 4
  03cb9e8  stfs 3, 4(5)
  03cb9ec  addic 5, 5, 8
  03cb9f0  bdnz 0x3cb9c4
  03cb9f4  ori 3, 1, 0
  03cb9f8  mtctr 6
  03cb9fc  lfs 3, 260(3)
  03cba00  lfs 4, 4(7)
  03cba04  fadds 3, 30, 3
  03cba08  lfs 5, 8(7)
  03cba0c  addic 3, 3, 16
  03cba10  lfs 30, 12(7)
  03cba14  addic 7, 7, 16
  03cba18  fadds 3, 3, 4
  03cba1c  fadds 3, 3, 5
  03cba20  fadds 30, 3, 30
  03cba24  bdnz 0x3cb9fc
  03cba28  fadds 30, 30, 31
  03cba2c  fmadds 30, 30, 1, 2
  03cba30  ori 3, 31, 0
  03cba34  fmr 1, 30
  03cba38  ori 4, 29, 0
  03cba3c  li 6, 3
  03cba40  li 7, 1
  03cba44  li 8, 0
  03cba48  bl 0x10ad80
  03cba4c  nop
  03cba50  lis 3, 16544
  03cba54  lis 4, 16672
  03cba58  li 5, 4
  03cba5c  stw 3, 192(30)
  03cba60  stw 4, 196(30)
  03cba64  stb 5, 32(31)
  03cba68  b 0x3cbf70
  03cba6c  lis 3, 132
  03cba70  lis 4, 114
  03cba74  ori 28, 29, 0
  03cba78  addic 29, 30, 112
  03cba7c  lfs 1, 25116(3)
  03cba80  lfs 2, -3048(4)
  03cba84  lis 3, 132
  03cba88  lis 4, 132
  03cba8c  fmuls 1, 1, 2
  03cba90  ori 5, 29, 0
  03cba94  stfs 1, 128(30)
  03cba98  lfs 1, 25120(3)
  03cba9c  lfs 2, 25124(4)
  03cbaa0  bl 0x1158b0
  03cbaa4  nop
  03cbaa8  li 3, 0
  03cbaac  li 4, 9
  03cbab0  addic 5, 1, 120
  03cbab4  addic 6, 30, 136
  03cbab8  stb 3, 173(30)
  03cbabc  addic 7, 30, 140
  03cbac0  stw 4, 148(30)
  03cbac4  lfs 1, 16(28)
  03cbac8  lfs 2, 24(28)
  03cbacc  stfs 1, 48(1)
  03cbad0  stfs 2, 56(1)
  03cbad4  lfs 1, 20(28)
  03cbad8  lfs 2, 28(28)
  03cbadc  stfs 1, 52(1)
  03cbae0  stfs 2, 60(1)
  03cbae4  ld 3, 48(1)
  03cbae8  ld 4, 56(1)
  03cbaec  bl 0x107de8
  03cbaf0  nop
  03cbaf4  lis 4, 151
  03cbaf8  lfs 1, 16(31)
  03cbafc  addic 4, 4, -25376
  03cbb00  lfs 2, 20(31)
  03cbb04  lis 3, 115
  03cbb08  lfs 3, 128(4)
  03cbb0c  lfs 4, 132(4)
  03cbb10  fsubs 1, 1, 3
  03cbb14  fsubs 2, 2, 4
  03cbb18  addic 3, 3, 22784
  03cbb1c  fabs 3, 1
  03cbb20  fabs 4, 2
  03cbb24  stfs 1, 136(1)
  03cbb28  stfs 2, 140(1)
  03cbb2c  fsubs 1, 3, 4
  03cbb30  stfs 1, 144(1)
  03cbb34  lwz 4, 136(1)
  03cbb38  lfs 1, 136(1)
  03cbb3c  lwz 5, 140(1)
  03cbb40  lfs 2, 140(1)
  03cbb44  fabs 1, 1
  03cbb48  lwz 6, 144(1)
  03cbb4c  rlwinm 5, 5, 3, 29, 29
  03cbb50  lfs 5, 144(1)
  03cbb54  fabs 2, 2
  03cbb58  rlwimi 5, 6, 2, 30, 30
  03cbb5c  fsub 6, 5, 30
  03cbb60  fsub 5, 5, 30
  03cbb64  rlwimi 5, 4, 4, 28, 28
  03cbb68  ori 4, 3, 0
  03cbb6c  rlwimi 4, 5, 2, 26, 28
  03cbb70  slwi 5, 5, 2
  03cbb74  clrldi 4, 4, 32
  03cbb78  fsel 4, 6, 1, 4
  03cbb7c  lfsx 1, 3, 5
  03cbb80  fsel 3, 5, 2, 3
  03cbb84  lfs 2, 4(4)
  03cbb88  fcmpu 0, 4, 30
  03cbb8c  bt 1, 0x3cbb94
  03cbb90  b 0x3cbca8
  03cbb94  fsubs 5, 3, 4
  03cbb98  fadds 3, 3, 4
  03cbb9c  addic 3, 1, 16
  03cbba0  li 6, 2
  03cbba4  addic 5, 3, 228
  03cbba8  addic 4, 3, 212
  03cbbac  mtctr 6
  03cbbb0  fdivs 3, 5, 3
  03cbbb4  fmuls 4, 3, 3
  03cbbb8  stfs 3, 240(1)
  03cbbbc  stfs 3, 232(1)
  03cbbc0  stfs 3, 236(1)
  03cbbc4  stfs 3, 228(1)
  03cbbc8  lfs 6, 240(1)
  03cbbcc  lfs 7, 232(1)
  03cbbd0  lfs 8, 236(1)
  03cbbd4  fmuls 5, 4, 4
  03cbbd8  fmuls 7, 7, 4
  03cbbdc  fmuls 6, 6, 5
  03cbbe0  fmuls 3, 5, 5
  03cbbe4  fmuls 5, 8, 5
  03cbbe8  stfs 7, 232(1)
  03cbbec  fmuls 4, 6, 4
  03cbbf0  stfs 5, 236(1)
  03cbbf4  stfs 4, 240(1)
  03cbbf8  lfs 4, 212(3)
  03cbbfc  fmuls 4, 4, 3
  03cbc00  stfs 4, 228(3)
  03cbc04  lfs 4, 4(4)
  03cbc08  addic 4, 4, 8
  03cbc0c  fmuls 4, 4, 3
  03cbc10  addic 3, 3, 8
  03cbc14  stfs 4, 4(5)
  03cbc18  addic 5, 5, 8
  03cbc1c  bdnz 0x3cbbf8
  03cbc20  li 5, 4
  03cbc24  ori 3, 1, 0
  03cbc28  mtctr 5
  03cbc2c  lis 4, 115
  03cbc30  addic 5, 3, 228
  03cbc34  addic 4, 4, 22752
  03cbc38  ori 7, 5, 0
  03cbc3c  lfs 3, 228(3)
  03cbc40  lfs 4, 0(4)
  03cbc44  fmuls 3, 3, 4
  03cbc48  lfs 4, 4(4)
  03cbc4c  addic 4, 4, 8
  03cbc50  stfs 3, 228(3)
  03cbc54  lfs 3, 4(5)
  03cbc58  addic 3, 3, 8
  03cbc5c  fmuls 3, 3, 4
  03cbc60  stfs 3, 4(5)
  03cbc64  addic 5, 5, 8
  03cbc68  bdnz 0x3cbc3c
  03cbc6c  ori 3, 1, 0
  03cbc70  mtctr 6
  03cbc74  lfs 3, 228(3)
  03cbc78  lfs 4, 4(7)
  03cbc7c  fadds 3, 30, 3
  03cbc80  lfs 5, 8(7)
  03cbc84  addic 3, 3, 16
  03cbc88  lfs 30, 12(7)
  03cbc8c  addic 7, 7, 16
  03cbc90  fadds 3, 3, 4
  03cbc94  fadds 3, 3, 5
  03cbc98  fadds 30, 3, 30
  03cbc9c  bdnz 0x3cbc74
  03cbca0  fadds 30, 30, 31
  03cbca4  fmadds 30, 30, 1, 2
  03cbca8  ori 3, 31, 0
  03cbcac  fmr 1, 30
  03cbcb0  ori 4, 29, 0
  03cbcb4  li 6, 4
  03cbcb8  li 7, 1
  03cbcbc  li 8, 0
  03cbcc0  bl 0x10ad80
  03cbcc4  nop
  03cbcc8  lis 3, 16624
  03cbccc  lis 4, 16752
  03cbcd0  li 5, 4
  03cbcd4  stw 3, 192(30)
  03cbcd8  stw 4, 196(30)
  03cbcdc  stb 5, 32(31)
  03cbce0  b 0x3cbf70
  03cbce4  lis 3, 132
  03cbce8  lis 4, 114
  03cbcec  ori 28, 29, 0
  03cbcf0  addic 29, 30, 112
  03cbcf4  lfs 1, 25112(3)
  03cbcf8  lfs 2, -3048(4)
  03cbcfc  lis 3, 132
  03cbd00  lis 4, 132
  03cbd04  fmuls 1, 1, 2
  03cbd08  ori 5, 29, 0
  03cbd0c  stfs 1, 128(30)
  03cbd10  lfs 1, 25128(3)
  03cbd14  lfs 2, 25132(4)
  03cbd18  bl 0x1158b0
  03cbd1c  nop
  03cbd20  li 3, 0
  03cbd24  li 4, 9
  03cbd28  addic 5, 1, 120
  03cbd2c  addic 6, 30, 136
  03cbd30  stb 3, 173(30)
  03cbd34  addic 7, 30, 140
  03cbd38  stw 4, 148(30)
  03cbd3c  lfs 1, 16(28)
  03cbd40  lfs 2, 24(28)
  03cbd44  stfs 1, 48(1)
  03cbd48  stfs 2, 56(1)
  03cbd4c  lfs 1, 20(28)
  03cbd50  lfs 2, 28(28)
  03cbd54  stfs 1, 52(1)
  03cbd58  stfs 2, 60(1)
  03cbd5c  ld 3, 48(1)
  03cbd60  ld 4, 56(1)
  03cbd64  bl 0x107de8
  03cbd68  nop
  03cbd6c  lis 4, 151
  03cbd70  lfs 1, 16(31)
  03cbd74  addic 4, 4, -25376
  03cbd78  lfs 2, 20(31)
  03cbd7c  lis 3, 115
  03cbd80  lfs 3, 128(4)
  03cbd84  lfs 4, 132(4)
  03cbd88  fsubs 1, 1, 3
  03cbd8c  fsubs 2, 2, 4
  03cbd90  addic 3, 3, 22784
  03cbd94  fabs 3, 1
  03cbd98  fabs 4, 2
  03cbd9c  stfs 1, 124(1)
  03cbda0  stfs 2, 128(1)
  03cbda4  fsubs 1, 3, 4
  03cbda8  stfs 1, 132(1)
  03cbdac  lwz 4, 124(1)
  03cbdb0  lfs 1, 124(1)
  03cbdb4  lwz 5, 128(1)
  03cbdb8  lfs 2, 128(1)
  03cbdbc  fabs 1, 1
  03cbdc0  lwz 6, 132(1)
  03cbdc4  rlwinm 5, 5, 3, 29, 29
  03cbdc8  lfs 5, 132(1)
  03cbdcc  fabs 2, 2
  03cbdd0  rlwimi 5, 6, 2, 30, 30
  03cbdd4  fsub 6, 5, 30
  03cbdd8  fsub 5, 5, 30
  03cbddc  rlwimi 5, 4, 4, 28, 28
  03cbde0  ori 4, 3, 0
  03cbde4  rlwimi 4, 5, 2, 26, 28
  03cbde8  slwi 5, 5, 2
  03cbdec  clrldi 4, 4, 32
  03cbdf0  fsel 4, 6, 1, 4
  03cbdf4  lfsx 1, 3, 5
  03cbdf8  fsel 3, 5, 2, 3
  03cbdfc  lfs 2, 4(4)
  03cbe00  fcmpu 0, 4, 30
  03cbe04  bt 1, 0x3cbe0c
  03cbe08  b 0x3cbf20
  03cbe0c  fsubs 5, 3, 4
  03cbe10  fadds 3, 3, 4
  03cbe14  addic 3, 1, 16
  03cbe18  li 6, 2
  03cbe1c  addic 5, 3, 196
  03cbe20  addic 4, 3, 180
  03cbe24  mtctr 6
  03cbe28  fdivs 3, 5, 3
  03cbe2c  fmuls 4, 3, 3
  03cbe30  stfs 3, 208(1)
  03cbe34  stfs 3, 200(1)
  03cbe38  stfs 3, 204(1)
  03cbe3c  stfs 3, 196(1)
  03cbe40  lfs 6, 208(1)
  03cbe44  lfs 7, 200(1)
  03cbe48  lfs 8, 204(1)
  03cbe4c  fmuls 5, 4, 4
  03cbe50  fmuls 7, 7, 4
  03cbe54  fmuls 6, 6, 5
  03cbe58  fmuls 3, 5, 5
  03cbe5c  fmuls 5, 8, 5
  03cbe60  stfs 7, 200(1)
  03cbe64  fmuls 4, 6, 4
  03cbe68  stfs 5, 204(1)
  03cbe6c  stfs 4, 208(1)
  03cbe70  lfs 4, 180(3)
  03cbe74  fmuls 4, 4, 3
  03cbe78  stfs 4, 196(3)
  03cbe7c  lfs 4, 4(4)
  03cbe80  addic 4, 4, 8
  03cbe84  fmuls 4, 4, 3
  03cbe88  addic 3, 3, 8
  03cbe8c  stfs 4, 4(5)
  03cbe90  addic 5, 5, 8
  03cbe94  bdnz 0x3cbe70
  03cbe98  li 5, 4
  03cbe9c  ori 3, 1, 0
  03cbea0  mtctr 5
  03cbea4  lis 4, 115
  03cbea8  addic 5, 3, 196
  03cbeac  addic 4, 4, 22752
  03cbeb0  ori 7, 5, 0
  03cbeb4  lfs 3, 196(3)
  03cbeb8  lfs 4, 0(4)
  03cbebc  fmuls 3, 3, 4
  03cbec0  lfs 4, 4(4)
  03cbec4  addic 4, 4, 8
  03cbec8  stfs 3, 196(3)
  03cbecc  lfs 3, 4(5)
  03cbed0  addic 3, 3, 8
  03cbed4  fmuls 3, 3, 4
  03cbed8  stfs 3, 4(5)
  03cbedc  addic 5, 5, 8
  03cbee0  bdnz 0x3cbeb4
  03cbee4  ori 3, 1, 0
  03cbee8  mtctr 6
  03cbeec  lfs 3, 196(3)
  03cbef0  lfs 4, 4(7)
  03cbef4  fadds 3, 30, 3
  03cbef8  lfs 5, 8(7)
  03cbefc  addic 3, 3, 16
  03cbf00  lfs 30, 12(7)
  03cbf04  addic 7, 7, 16
  03cbf08  fadds 3, 3, 4
  03cbf0c  fadds 3, 3, 5
  03cbf10  fadds 30, 3, 30
  03cbf14  bdnz 0x3cbeec
  03cbf18  fadds 30, 30, 31
  03cbf1c  fmadds 30, 30, 1, 2
  03cbf20  ori 3, 31, 0
  03cbf24  fmr 1, 30
  03cbf28  ori 4, 29, 0
  03cbf2c  li 6, 5
  03cbf30  li 7, 1
  03cbf34  li 8, 0
  03cbf38  bl 0x10ad80
  03cbf3c  nop
  03cbf40  lhz 3, 52(31)
  03cbf44  lis 4, 16640
  03cbf48  li 5, 0
  03cbf4c  lis 7, 16752
  03cbf50  rlwimi 3, 5, 0, 19, 19
  03cbf54  li 6, 250
  03cbf58  li 8, 5
  03cbf5c  stw 4, 192(30)
  03cbf60  stw 7, 196(30)
  03cbf64  sth 3, 52(31)
  03cbf68  stb 6, 103(30)
  03cbf6c  stb 8, 32(31)
  03cbf70  addic 4, 30, 96
  03cbf74  ori 3, 31, 0
  03cbf78  bl 0x10c808
  03cbf7c  nop
  03cbf80  li 5, 255
  03cbf84  addic 4, 30, 96
  03cbf88  ori 3, 31, 0
  03cbf8c  stb 5, 164(31)
  03cbf90  bl 0x10c9a0
  03cbf94  nop
  03cbf98  ld 0, 464(1)
  03cbf9c  mtlr 0
  03cbfa0  lfd 30, 432(1)
  03cbfa4  lfd 31, 440(1)
  03cbfa8  ld 28, 400(1)
  03cbfac  ld 29, 408(1)
  03cbfb0  ld 30, 416(1)
  03cbfb4  ld 31, 424(1)
  03cbfb8  addi 1, 1, 448
  03cbfbc  blr

UpdateMoby_578:   # 0x3cc030, 0xe40 bytes
  03cc030  stdu 1, -528(1)
  03cc034  mflr 0
  03cc038  std 0, 544(1)
  03cc03c  stfd 24, 464(1)
  03cc040  stfd 25, 472(1)
  03cc044  stfd 26, 480(1)
  03cc048  stfd 27, 488(1)
  03cc04c  stfd 28, 496(1)
  03cc050  stfd 29, 504(1)
  03cc054  stfd 30, 512(1)
  03cc058  stfd 31, 520(1)
  03cc05c  addi 0, 1, 416
  03cc060  stvx 31, 0, 0
  03cc064  std 31, 456(1)
  03cc068  lis 4, 61
  03cc06c  std 29, 440(1)
  03cc070  ori 31, 3, 0
  03cc074  addi 29, 4, -16448
  03cc078  std 30, 448(1)
  03cc07c  addic 5, 1, 272
  03cc080  lwz 30, 120(31)
  03cc084  std 28, 432(1)
  03cc088  lfs 1, 0(29)
  03cc08c  bl 0x1118d8
  03cc090  nop
  03cc094  lfs 31, 4(29)
  03cc098  ori 3, 31, 0
  03cc09c  lfs 1, 8(29)
  03cc0a0  addic 5, 30, 352
  03cc0a4  li 4, 0
  03cc0a8  bl 0x119a18
  03cc0ac  nop
  03cc0b0  ori 3, 31, 0
  03cc0b4  bl 0x3cb1b8
  03cc0b8  lwz 3, 56(30)
  03cc0bc  cmpwi 3, 0
  03cc0c0  bt 2, 0x3cc108
  03cc0c4  lis 3, 61
  03cc0c8  vspltisw 2, -1
  03cc0cc  li 4, 0
  03cc0d0  addi 3, 3, -16448
  03cc0d4  li 6, 12
  03cc0d8  lis 5, 114
  03cc0dc  stw 4, 56(30)
  03cc0e0  li 4, -3056
  03cc0e4  vslw 2, 2, 2
  03cc0e8  <unknown>
  03cc0ec  li 3, 348
  03cc0f0  vspltw 3, 3, 0
  03cc0f4  <unknown>
  03cc0f8  vmaddfp 2, 4, 3, 2
  03cc0fc  vctsxs 2, 2, 0
  03cc100  vspltw 2, 2, 0
  03cc104  stvewx 2, 3, 30
  03cc108  addic 3, 30, 348
  03cc10c  bl 0x4fff60
  03cc110  nop
  03cc114  cmpwi 3, 0
  03cc118  lbz 3, 32(31)
  03cc11c  lfs 1, 272(1)
  03cc120  lfs 2, 16(31)
  03cc124  lfs 3, 276(1)
  03cc128  lfs 4, 20(31)
  03cc12c  lbz 4, 112(31)
  03cc130  bf 2, 0x3cc140
  03cc134  lis 5, 61
  03cc138  addi 5, 5, -16448
  03cc13c  lfs 31, 16(5)
  03cc140  cmpwi 3, 5
  03cc144  bt 2, 0x3ccb90
  03cc148  cmpwi 3, 4
  03cc14c  bt 2, 0x3cca50
  03cc150  cmpwi 3, 3
  03cc154  bt 2, 0x3cc5cc
  03cc158  cmpwi 3, 2
  03cc15c  bt 2, 0x3cc500
  03cc160  cmpwi 3, 1
  03cc164  bt 2, 0x3cc274
  03cc168  cmpwi 3, 0
  03cc16c  bf 2, 0x3ccc7c
  03cc170  addic 3, 30, 208
  03cc174  bl 0x100f8c
  03cc178  nop
  03cc17c  lis 3, 61
  03cc180  lis 4, 114
  03cc184  addi 3, 3, -16448
  03cc188  li 6, 1
  03cc18c  lis 7, 16384
  03cc190  li 8, 0
  03cc194  lfs 1, 20(3)
  03cc198  lfs 2, -3048(4)
  03cc19c  lwz 5, 308(30)
  03cc1a0  lis 4, 114
  03cc1a4  fmuls 3, 2, 1
  03cc1a8  li 9, 8
  03cc1ac  lis 10, 165
  03cc1b0  slwi 5, 5, 2
  03cc1b4  li 11, 2
  03cc1b8  addic 10, 10, 7136
  03cc1bc  extsw 5, 5
  03cc1c0  stfs 3, 268(30)
  03cc1c4  lfs 3, 24(3)
  03cc1c8  fmuls 2, 2, 3
  03cc1cc  stfs 2, 272(30)
  03cc1d0  lfs 2, -3052(4)
  03cc1d4  fmuls 1, 2, 1
  03cc1d8  lis 4, 132
  03cc1dc  stfs 1, 276(30)
  03cc1e0  lfs 1, 28(3)
  03cc1e4  stb 6, 40(30)
  03cc1e8  fmuls 1, 2, 1
  03cc1ec  stw 7, 220(30)
  03cc1f0  stb 8, 41(30)
  03cc1f4  stw 7, 216(30)
  03cc1f8  stw 7, 32(30)
  03cc1fc  stb 9, 88(30)
  03cc200  stb 9, 90(30)
  03cc204  sth 11, 36(30)
  03cc208  lwzx 3, 10, 5
  03cc20c  stw 3, 304(30)
  03cc210  stfs 1, 244(30)
  03cc214  lfs 1, 16(3)
  03cc218  stfs 1, 16(31)
  03cc21c  lfs 1, 20(3)
  03cc220  stfs 1, 20(31)
  03cc224  lfs 1, 24(3)
  03cc228  stfs 1, 24(31)
  03cc22c  lfs 1, 28(3)
  03cc230  lfs 2, 44(31)
  03cc234  stfs 1, 28(31)
  03cc238  lfs 1, 25152(4)
  03cc23c  stw 6, 288(30)
  03cc240  fmuls 1, 2, 1
  03cc244  stb 6, 32(31)
  03cc248  lbz 3, 83(31)
  03cc24c  cmpwi 3, 0
  03cc250  stfs 1, 44(31)
  03cc254  bt 2, 0x3ccc7c
  03cc258  ori 3, 31, 0
  03cc25c  li 4, 0
  03cc260  li 5, 0
  03cc264  li 6, 0
  03cc268  bl 0xfddc0
  03cc26c  nop
  03cc270  b 0x3ccc7c
  03cc274  fsubs 1, 1, 2
  03cc278  lis 3, 61
  03cc27c  fsubs 2, 3, 4
  03cc280  addi 3, 3, -16448
  03cc284  lis 4, 115
  03cc288  addic 4, 4, 22784
  03cc28c  fabs 4, 1
  03cc290  fabs 5, 2
  03cc294  stfs 1, 352(1)
  03cc298  stfs 2, 356(1)
  03cc29c  fsubs 1, 4, 5
  03cc2a0  stfs 1, 360(1)
  03cc2a4  lwz 5, 352(1)
  03cc2a8  lfs 3, 32(3)
  03cc2ac  lfs 1, 352(1)
  03cc2b0  lwz 3, 356(1)
  03cc2b4  lfs 2, 356(1)
  03cc2b8  fabs 1, 1
  03cc2bc  lwz 6, 360(1)
  03cc2c0  rlwinm 3, 3, 3, 29, 29
  03cc2c4  fabs 6, 2
  03cc2c8  lfs 2, 360(1)
  03cc2cc  rlwimi 3, 6, 2, 30, 30
  03cc2d0  fsub 7, 2, 3
  03cc2d4  rlwimi 3, 5, 4, 28, 28
  03cc2d8  fsub 8, 2, 3
  03cc2dc  ori 5, 4, 0
  03cc2e0  rlwimi 5, 3, 2, 26, 28
  03cc2e4  slwi 3, 3, 2
  03cc2e8  clrldi 5, 5, 32
  03cc2ec  fsel 5, 7, 1, 5
  03cc2f0  lfsx 1, 4, 3
  03cc2f4  lfs 2, 4(5)
  03cc2f8  fsel 4, 8, 6, 4
  03cc2fc  fcmpu 0, 5, 3
  03cc300  bt 1, 0x3cc308
  03cc304  b 0x3cc428
  03cc308  fsubs 6, 4, 5
  03cc30c  fadds 4, 4, 5
  03cc310  addic 3, 1, 16
  03cc314  li 6, 2
  03cc318  addic 5, 3, 364
  03cc31c  addic 4, 3, 348
  03cc320  mtctr 6
  03cc324  fdivs 4, 6, 4
  03cc328  fmuls 5, 4, 4
  03cc32c  stfs 4, 376(1)
  03cc330  stfs 4, 368(1)
  03cc334  stfs 4, 372(1)
  03cc338  stfs 4, 364(1)
  03cc33c  lfs 7, 376(1)
  03cc340  lfs 8, 368(1)
  03cc344  lfs 9, 372(1)
  03cc348  fmuls 6, 5, 5
  03cc34c  fmuls 8, 8, 5
  03cc350  fmuls 7, 7, 6
  03cc354  fmuls 4, 6, 6
  03cc358  fmuls 6, 9, 6
  03cc35c  stfs 8, 368(1)
  03cc360  fmuls 5, 7, 5
  03cc364  stfs 6, 372(1)
  03cc368  stfs 5, 376(1)
  03cc36c  lfs 5, 348(3)
  03cc370  fmuls 5, 5, 4
  03cc374  stfs 5, 364(3)
  03cc378  lfs 5, 4(4)
  03cc37c  addic 4, 4, 8
  03cc380  fmuls 5, 5, 4
  03cc384  addic 3, 3, 8
  03cc388  stfs 5, 4(5)
  03cc38c  addic 5, 5, 8
  03cc390  bdnz 0x3cc36c
  03cc394  li 5, 4
  03cc398  ori 3, 1, 0
  03cc39c  mtctr 5
  03cc3a0  lis 4, 115
  03cc3a4  addic 5, 3, 364
  03cc3a8  addic 4, 4, 22752
  03cc3ac  ori 7, 5, 0
  03cc3b0  lfs 4, 364(3)
  03cc3b4  lfs 5, 0(4)
  03cc3b8  fmuls 4, 4, 5
  03cc3bc  lfs 5, 4(4)
  03cc3c0  addic 4, 4, 8
  03cc3c4  stfs 4, 364(3)
  03cc3c8  lfs 4, 4(5)
  03cc3cc  addic 3, 3, 8
  03cc3d0  fmuls 4, 4, 5
  03cc3d4  stfs 4, 4(5)
  03cc3d8  addic 5, 5, 8
  03cc3dc  bdnz 0x3cc3b0
  03cc3e0  ori 3, 1, 0
  03cc3e4  mtctr 6
  03cc3e8  lfs 4, 364(3)
  03cc3ec  fadds 3, 3, 4
  03cc3f0  addic 3, 3, 16
  03cc3f4  lfs 4, 4(7)
  03cc3f8  lfs 5, 8(7)
  03cc3fc  lfs 6, 12(7)
  03cc400  addic 7, 7, 16
  03cc404  fadds 3, 3, 4
  03cc408  fadds 3, 3, 5
  03cc40c  fadds 3, 3, 6
  03cc410  bdnz 0x3cc3e8
  03cc414  lis 3, 61
  03cc418  addi 3, 3, -16448
  03cc41c  lfs 4, 36(3)
  03cc420  fadds 3, 3, 4
  03cc424  fmadds 3, 3, 1, 2
  03cc428  lis 3, 61
  03cc42c  fmr 1, 3
  03cc430  addic 5, 30, 336
  03cc434  addi 4, 3, -16448
  03cc438  ori 3, 31, 0
  03cc43c  lfs 5, 44(4)
  03cc440  lfs 2, 40(4)
  03cc444  lfs 4, 48(4)
  03cc448  fmr 3, 5
  03cc44c  bl 0xff2e8
  03cc450  nop
  03cc454  lfs 1, 20(31)
  03cc458  lfs 2, 276(1)
  03cc45c  lfs 3, 16(31)
  03cc460  fsubs 1, 1, 2
  03cc464  lfs 2, 272(1)
  03cc468  fsubs 2, 3, 2
  03cc46c  fmuls 1, 1, 1
  03cc470  fmadds 1, 2, 2, 1
  03cc474  fsqrts 1, 1
  03cc478  fcmpu 0, 1, 31
  03cc47c  cror 6, 1, 2
  03cc480  bt 6, 0x3ccc7c
  03cc484  lfs 1, 280(1)
  03cc488  lis 3, 61
  03cc48c  lfs 2, 24(31)
  03cc490  addi 3, 3, -16448
  03cc494  fsubs 1, 1, 2
  03cc498  lfs 2, 52(3)
  03cc49c  fabs 1, 1
  03cc4a0  fcmpu 0, 1, 2
  03cc4a4  cror 6, 1, 2
  03cc4a8  bt 6, 0x3ccc7c
  03cc4ac  li 3, 2
  03cc4b0  lbz 4, 83(31)
  03cc4b4  cmpwi 4, 1
  03cc4b8  stb 3, 32(31)
  03cc4bc  bt 2, 0x3ccc7c
  03cc4c0  lis 3, 61
  03cc4c4  lis 4, 114
  03cc4c8  addi 3, 3, -16448
  03cc4cc  li 5, 0
  03cc4d0  lfs 1, 56(3)
  03cc4d4  lfs 2, -3056(4)
  03cc4d8  ori 3, 31, 0
  03cc4dc  li 4, 1
  03cc4e0  fmuls 1, 2, 1
  03cc4e4  fctiwz 1, 1
  03cc4e8  stfd 1, 400(1)
  03cc4ec  lwz 6, 404(1)
  03cc4f0  extsw 6, 6
  03cc4f4  bl 0xfddc0
  03cc4f8  nop
  03cc4fc  b 0x3ccc7c
  03cc500  rlwinm 3, 4, 0, 30, 30
  03cc504  cmpwi 3, 0
  03cc508  bt 2, 0x3ccc7c
  03cc50c  lis 3, 61
  03cc510  vspltisw 2, -1
  03cc514  li 4, 3
  03cc518  addi 3, 3, -16448
  03cc51c  li 6, 60
  03cc520  lis 5, 114
  03cc524  stb 4, 32(31)
  03cc528  li 4, -3056
  03cc52c  vslw 2, 2, 2
  03cc530  <unknown>
  03cc534  li 3, 342
  03cc538  vspltw 31, 31, 0
  03cc53c  <unknown>
  03cc540  lfs 1, -3056(5)
  03cc544  vmaddfp 2, 3, 31, 2
  03cc548  vctsxs 2, 2, 0
  03cc54c  vsplth 2, 2, 1
  03cc550  stvehx 2, 3, 30
  03cc554  lbz 3, 83(31)
  03cc558  cmpwi 3, 2
  03cc55c  bt 2, 0x3cc594
  03cc560  lis 3, 61
  03cc564  addi 3, 3, -16448
  03cc568  li 4, 2
  03cc56c  li 5, 0
  03cc570  lfs 2, 56(3)
  03cc574  ori 3, 31, 0
  03cc578  fmuls 1, 1, 2
  03cc57c  fctiwz 1, 1
  03cc580  stfd 1, 400(1)
  03cc584  lwz 6, 404(1)
  03cc588  extsw 6, 6
  03cc58c  bl 0xfddc0
  03cc590  nop
  03cc594  lis 3, 132
  03cc598  vspltisw 2, -1
  03cc59c  lis 4, 114
  03cc5a0  li 5, -3056
  03cc5a4  vslw 2, 2, 2
  03cc5a8  lfs 1, 25148(3)
  03cc5ac  li 3, 340
  03cc5b0  stfs 1, 88(31)
  03cc5b4  <unknown>
  03cc5b8  vmaddfp 2, 3, 31, 2
  03cc5bc  vctsxs 2, 2, 0
  03cc5c0  vsplth 2, 2, 1
  03cc5c4  stvehx 2, 3, 30
  03cc5c8  b 0x3ccc7c
  03cc5cc  lwz 5, 288(30)
  03cc5d0  addic 4, 30, 208
  03cc5d4  lwz 7, 304(30)
  03cc5d8  addic 6, 30, 64
  03cc5dc  slwi 29, 5, 4
  03cc5e0  ori 3, 31, 0
  03cc5e4  addc 5, 7, 29
  03cc5e8  addic 5, 5, 16
  03cc5ec  clrldi 5, 5, 32
  03cc5f0  bl 0x101cc0
  03cc5f4  nop
  03cc5f8  lis 4, 132
  03cc5fc  addic 3, 30, 342
  03cc600  lfs 1, 25148(4)
  03cc604  stfs 1, 88(31)
  03cc608  bl 0x4fffb4
  03cc60c  nop
  03cc610  lwz 3, 304(30)
  03cc614  lfs 2, 20(31)
  03cc618  addc 4, 3, 29
  03cc61c  lfs 1, 16(31)
  03cc620  clrldi 4, 4, 32
  03cc624  lfs 3, 24(31)
  03cc628  lfs 4, 20(4)
  03cc62c  lfs 5, 16(4)
  03cc630  fsubs 4, 2, 4
  03cc634  fsubs 5, 1, 5
  03cc638  lfs 6, 24(4)
  03cc63c  fsubs 3, 3, 6
  03cc640  lis 4, 61
  03cc644  addi 4, 4, -16448
  03cc648  fmuls 4, 4, 4
  03cc64c  lfs 30, 64(4)
  03cc650  fmadds 4, 5, 5, 4
  03cc654  fmadds 3, 3, 3, 4
  03cc658  fsqrts 3, 3
  03cc65c  fcmpu 0, 3, 30
  03cc660  cror 6, 1, 2
  03cc664  bt 6, 0x3cc7d0
  03cc668  lhz 4, 342(30)
  03cc66c  lfs 3, 272(1)
  03cc670  cmpwi 1, 4, 0
  03cc674  lfs 4, 276(1)
  03cc678  bf 6, 0x3cc6fc
  03cc67c  fsubs 5, 2, 4
  03cc680  fsubs 6, 1, 3
  03cc684  lis 4, 61
  03cc688  addi 4, 4, -16448
  03cc68c  fmuls 5, 5, 5
  03cc690  fmadds 5, 6, 6, 5
  03cc694  lfs 6, 68(4)
  03cc698  fsqrts 5, 5
  03cc69c  fcmpu 0, 5, 6
  03cc6a0  cror 2, 0, 2
  03cc6a4  bt 2, 0x3cc6fc
  03cc6a8  li 3, 1
  03cc6ac  lbz 4, 83(31)
  03cc6b0  cmpwi 4, 0
  03cc6b4  stb 3, 32(31)
  03cc6b8  bt 2, 0x3cc7d0
  03cc6bc  lis 3, 61
  03cc6c0  lis 4, 114
  03cc6c4  addi 3, 3, -16448
  03cc6c8  li 5, 0
  03cc6cc  lfs 1, 56(3)
  03cc6d0  lfs 2, -3056(4)
  03cc6d4  ori 3, 31, 0
  03cc6d8  fmuls 1, 2, 1
  03cc6dc  li 4, 0
  03cc6e0  fctiwz 1, 1
  03cc6e4  stfd 1, 400(1)
  03cc6e8  lwz 6, 404(1)
  03cc6ec  extsw 6, 6
  03cc6f0  bl 0xfddc0
  03cc6f4  nop
  03cc6f8  b 0x3cc7d0
  03cc6fc  lbz 6, 292(30)
  03cc700  lwz 4, 288(30)
  03cc704  lwz 7, 0(3)
  03cc708  extsb 5, 6
  03cc70c  addc 8, 4, 7
  03cc710  addc 5, 8, 5
  03cc714  divw 8, 5, 7
  03cc718  mullw 8, 8, 7
  03cc71c  subc 5, 5, 8
  03cc720  bf 6, 0x3cc7b4
  03cc724  sldi 5, 5, 4
  03cc728  addc 5, 3, 5
  03cc72c  clrldi 5, 5, 32
  03cc730  lfs 5, 20(5)
  03cc734  lfs 6, 16(5)
  03cc738  fsubs 4, 4, 5
  03cc73c  fsubs 2, 2, 5
  03cc740  fsubs 3, 3, 6
  03cc744  fsubs 1, 1, 6
  03cc748  fmuls 4, 4, 4
  03cc74c  fmuls 2, 2, 2
  03cc750  fmadds 3, 3, 3, 4
  03cc754  fmadds 1, 1, 1, 2
  03cc758  fsqrts 2, 3
  03cc75c  fsqrts 1, 1
  03cc760  fcmpu 0, 2, 1
  03cc764  cror 6, 1, 2
  03cc768  bt 6, 0x3cc7b4
  03cc76c  lis 5, 61
  03cc770  vspltisw 2, -1
  03cc774  neg 6, 6
  03cc778  addi 5, 5, -16448
  03cc77c  li 8, 60
  03cc780  lis 7, 114
  03cc784  stb 6, 292(30)
  03cc788  li 9, -3056
  03cc78c  vslw 2, 2, 2
  03cc790  <unknown>
  03cc794  li 5, 342
  03cc798  vspltw 3, 3, 0
  03cc79c  <unknown>
  03cc7a0  vmaddfp 2, 4, 3, 2
  03cc7a4  vctsxs 2, 2, 0
  03cc7a8  vsplth 2, 2, 1
  03cc7ac  stvehx 2, 5, 30
  03cc7b0  lwz 7, 0(3)
  03cc7b4  addc 3, 4, 7
  03cc7b8  extsb 4, 6
  03cc7bc  addc 3, 3, 4
  03cc7c0  divw 4, 3, 7
  03cc7c4  mullw 4, 4, 7
  03cc7c8  subc 3, 3, 4
  03cc7cc  stw 3, 288(30)
  03cc7d0  addic 3, 30, 340
  03cc7d4  bl 0x4fffb4
  03cc7d8  nop
  03cc7dc  cmpwi 3, 0
  03cc7e0  bt 2, 0x3ccc7c
  03cc7e4  lis 3, 132
  03cc7e8  vspltisw 4, -1
  03cc7ec  li 4, 25144
  03cc7f0  lis 5, 61
  03cc7f4  li 6, 72
  03cc7f8  addi 28, 5, -16448
  03cc7fc  vslw 4, 4, 4
  03cc800  <unknown>
  03cc804  lis 3, 114
  03cc808  vcfsx 2, 2, 0
  03cc80c  <unknown>
  03cc810  li 4, -3056
  03cc814  vspltw 3, 3, 0
  03cc818  li 7, 340
  03cc81c  ori 5, 31, 0
  03cc820  <unknown>
  03cc824  lfs 29, 72(28)
  03cc828  li 3, 1
  03cc82c  li 4, 0
  03cc830  li 6, 627
  03cc834  vaddfp 2, 2, 3
  03cc838  vmaddfp 2, 5, 2, 4
  03cc83c  vctsxs 2, 2, 0
  03cc840  vsplth 2, 2, 1
  03cc844  stvehx 2, 7, 30
  03cc848  lfs 1, 16(31)
  03cc84c  lfs 2, 20(31)
  03cc850  stfs 1, 192(1)
  03cc854  lfs 1, 28(31)
  03cc858  stfs 2, 196(1)
  03cc85c  stfs 1, 204(1)
  03cc860  lfs 28, 76(28)
  03cc864  lfs 1, 24(31)
  03cc868  fadds 1, 1, 28
  03cc86c  stfs 1, 200(1)
  03cc870  bl 0x15d204
  03cc874  nop
  03cc878  lfs 27, 80(28)
  03cc87c  lfs 26, 84(28)
  03cc880  li 29, -2
  03cc884  lfs 25, 32(28)
  03cc888  lfs 24, 88(28)
  03cc88c  ori 3, 29, 0
  03cc890  bl 0x502730
  03cc894  nop
  03cc898  fmr 31, 1
  03cc89c  fmr 1, 27
  03cc8a0  fmr 2, 26
  03cc8a4  bl 0xfcbe8
  03cc8a8  nop
  03cc8ac  lfs 7, 212(31)
  03cc8b0  lfs 5, 208(31)
  03cc8b4  fmuls 2, 7, 7
  03cc8b8  extsw 3, 29
  03cc8bc  fmuls 31, 31, 1
  03cc8c0  std 3, 400(1)
  03cc8c4  fmadds 3, 5, 5, 2
  03cc8c8  lfs 2, 16(31)
  03cc8cc  lfs 4, 20(31)
  03cc8d0  lfs 6, 24(31)
  03cc8d4  lfd 8, 400(1)
  03cc8d8  fcfid 8, 8
  03cc8dc  fsqrts 3, 3
  03cc8e0  frsp 1, 8
  03cc8e4  fmuls 1, 1, 29
  03cc8e8  fcmpu 0, 3, 25
  03cc8ec  bf 2, 0x3cc904
  03cc8f0  fmr 3, 25
  03cc8f4  lfs 5, 216(31)
  03cc8f8  lfs 7, 220(31)
  03cc8fc  fmr 1, 3
  03cc900  b 0x3cc918
  03cc904  fdivs 3, 1, 3
  03cc908  fmuls 1, 5, 3
  03cc90c  lfs 5, 216(31)
  03cc910  fmuls 3, 7, 3
  03cc914  lfs 7, 220(31)
  03cc918  fadds 5, 5, 6
  03cc91c  fadds 6, 1, 2
  03cc920  stfs 7, 204(1)
  03cc924  fadds 3, 3, 4
  03cc928  fmr 1, 24
  03cc92c  fmr 2, 30
  03cc930  fadds 4, 5, 28
  03cc934  stfs 6, 192(1)
  03cc938  stfs 3, 196(1)
  03cc93c  stfs 4, 200(1)
  03cc940  bl 0xfcbe8
  03cc944  nop
  03cc948  lfs 5, 196(31)
  03cc94c  lfs 4, 192(31)
  03cc950  fmuls 2, 5, 5
  03cc954  lis 3, 132
  03cc958  lis 4, 114
  03cc95c  lfs 6, 25136(3)
  03cc960  fmadds 2, 4, 4, 2
  03cc964  lfs 7, 208(31)
  03cc968  lfs 8, 212(31)
  03cc96c  lfs 3, -3052(4)
  03cc970  fmuls 1, 1, 3
  03cc974  fsqrts 2, 2
  03cc978  fcmpu 0, 2, 25
  03cc97c  bf 2, 0x3cc990
  03cc980  fmr 1, 25
  03cc984  lfs 4, 200(31)
  03cc988  fmr 2, 1
  03cc98c  b 0x3cc9a0
  03cc990  fdivs 2, 1, 2
  03cc994  fmuls 1, 4, 2
  03cc998  lfs 4, 200(31)
  03cc99c  fmuls 2, 5, 2
  03cc9a0  fmuls 5, 8, 8
  03cc9a4  fmuls 3, 6, 3
  03cc9a8  fmadds 5, 7, 7, 5
  03cc9ac  fsqrts 5, 5
  03cc9b0  fcmpu 0, 5, 25
  03cc9b4  bf 2, 0x3cc9cc
  03cc9b8  fmr 5, 25
  03cc9bc  lfs 6, 216(31)
  03cc9c0  lfs 7, 220(31)
  03cc9c4  fmr 3, 5
  03cc9c8  b 0x3cc9e0
  03cc9cc  fdivs 5, 3, 5
  03cc9d0  lfs 6, 216(31)
  03cc9d4  fmuls 3, 7, 5
  03cc9d8  lfs 7, 220(31)
  03cc9dc  fmuls 5, 8, 5
  03cc9e0  fmadds 3, 3, 31, 1
  03cc9e4  fmadds 5, 5, 31, 2
  03cc9e8  stfs 7, 220(1)
  03cc9ec  fmadds 4, 6, 31, 4
  03cc9f0  fmr 1, 27
  03cc9f4  fmr 2, 26
  03cc9f8  stfs 3, 208(1)
  03cc9fc  stfs 5, 212(1)
  03cca00  stfs 4, 216(1)
  03cca04  bl 0xfcbe8
  03cca08  nop
  03cca0c  lis 3, 132
  03cca10  lis 4, 114
  03cca14  addic 5, 1, 208
  03cca18  lfs 2, 25140(3)
  03cca1c  lfs 3, -3052(4)
  03cca20  ori 3, 31, 0
  03cca24  addic 4, 1, 192
  03cca28  fmuls 2, 2, 3
  03cca2c  fmuls 1, 2, 1
  03cca30  stfs 1, 216(1)
  03cca34  bl 0x3eba50
  03cca38  nop
  03cca3c  addic 29, 29, 1
  03cca40  extsw 29, 29
  03cca44  cmpwi 29, 3
  03cca48  bt 0, 0x3cc88c
  03cca4c  b 0x3ccc7c
  03cca50  ori 3, 31, 0
  03cca54  addic 4, 30, 112
  03cca58  bl 0x10b030
  03cca5c  nop
  03cca60  rlwinm 3, 3, 0, 25, 26
  03cca64  cmpwi 3, 0
  03cca68  bt 2, 0x3ccac0
  03cca6c  lbz 3, 83(31)
  03cca70  cmpwi 3, 0
  03cca74  bt 2, 0x3ccab4
  03cca78  lis 3, 61
  03cca7c  lis 4, 114
  03cca80  addi 3, 3, -16448
  03cca84  li 5, 0
  03cca88  lfs 1, 56(3)
  03cca8c  lfs 2, -3056(4)
  03cca90  ori 3, 31, 0
  03cca94  li 4, 0
  03cca98  fmuls 1, 2, 1
  03cca9c  fctiwz 1, 1
  03ccaa0  stfd 1, 400(1)
  03ccaa4  lwz 6, 404(1)
  03ccaa8  extsw 6, 6
  03ccaac  bl 0xfddc0
  03ccab0  nop
  03ccab4  li 3, 1
  03ccab8  stb 3, 32(31)
  03ccabc  b 0x3ccc7c
  03ccac0  lwz 4, 24(31)
  03ccac4  lis 3, 16544
  03ccac8  lfs 1, 24(31)
  03ccacc  srawi 5, 4, 31
  03ccad0  srwi 6, 5, 1
  03ccad4  xor 4, 6, 4
  03ccad8  subc 4, 4, 5
  03ccadc  cmpw 4, 3
  03ccae0  bf 0, 0x3ccc7c
  03ccae4  lis 3, 61
  03ccae8  lfs 2, 16(31)
  03ccaec  lfs 3, 20(31)
  03ccaf0  li 7, 1
  03ccaf4  addi 6, 3, -16448
  03ccaf8  stfs 2, 224(1)
  03ccafc  lfs 2, 28(31)
  03ccb00  li 11, -1
  03ccb04  stfs 3, 228(1)
  03ccb08  li 12, 0
  03ccb0c  stfs 2, 236(1)
  03ccb10  ori 3, 31, 0
  03ccb14  addic 4, 30, 64
  03ccb18  lfs 2, 72(6)
  03ccb1c  std 7, 160(1)
  03ccb20  addic 5, 1, 224
  03ccb24  fadds 1, 1, 2
  03ccb28  std 11, 144(1)
  03ccb2c  std 7, 168(1)
  03ccb30  li 8, 5
  03ccb34  std 11, 176(1)
  03ccb38  li 9, 2
  03ccb3c  std 12, 184(1)
  03ccb40  li 10, 4
  03ccb44  stfs 1, 232(1)
  03ccb48  lfs 1, 32(6)
  03ccb4c  lfs 4, 64(6)
  03ccb50  lfs 3, 76(6)
  03ccb54  lfs 5, 92(6)
  03ccb58  fmr 2, 1
  03ccb5c  lfs 7, 96(6)
  03ccb60  fmr 6, 4
  03ccb64  bl 0x10e030
  03ccb68  nop
  03ccb6c  ori 3, 31, 0
  03ccb70  li 4, 0
  03ccb74  li 5, -1
  03ccb78  bl 0xfd8d0
  03ccb7c  nop
  03ccb80  ori 3, 31, 0
  03ccb84  bl 0xefb38
  03ccb88  nop
  03ccb8c  b 0x3cce28
  03ccb90  addic 4, 30, 112
  03ccb94  ori 3, 31, 0
  03ccb98  bl 0x10b030
  03ccb9c  nop
  03ccba0  lwz 4, 24(31)
  03ccba4  rlwinm 3, 3, 0, 25, 26
  03ccba8  lfs 1, 16(31)
  03ccbac  srawi 5, 4, 31
  03ccbb0  cmpwi 3, 0
  03ccbb4  lfs 2, 20(31)
  03ccbb8  srwi 6, 5, 1
  03ccbbc  lfs 3, 24(31)
  03ccbc0  lfs 4, 28(31)
  03ccbc4  xor 3, 6, 4
  03ccbc8  subc 3, 3, 5
  03ccbcc  bf 2, 0x3ccbdc
  03ccbd0  lis 4, 16544
  03ccbd4  cmpw 3, 4
  03ccbd8  bf 0, 0x3ccc7c
  03ccbdc  lis 3, 61
  03ccbe0  stfs 1, 240(1)
  03ccbe4  li 7, 1
  03ccbe8  addi 6, 3, -16448
  03ccbec  stfs 2, 244(1)
  03ccbf0  stfs 4, 252(1)
  03ccbf4  li 11, -1
  03ccbf8  li 12, 0
  03ccbfc  ori 3, 31, 0
  03ccc00  addic 4, 30, 64
  03ccc04  lfs 1, 72(6)
  03ccc08  std 7, 160(1)
  03ccc0c  addic 5, 1, 240
  03ccc10  fadds 1, 3, 1
  03ccc14  std 11, 144(1)
  03ccc18  std 7, 168(1)
  03ccc1c  li 8, 5
  03ccc20  std 11, 176(1)
  03ccc24  li 9, 2
  03ccc28  std 12, 184(1)
  03ccc2c  li 10, 4
  03ccc30  stfs 1, 248(1)
  03ccc34  lfs 1, 32(6)
  03ccc38  lfs 4, 64(6)
  03ccc3c  lfs 3, 76(6)
  03ccc40  lfs 5, 92(6)
  03ccc44  fmr 2, 1
  03ccc48  lfs 7, 96(6)
  03ccc4c  fmr 6, 4
  03ccc50  bl 0x10e030
  03ccc54  nop
  03ccc58  ori 3, 31, 0
  03ccc5c  li 4, 0
  03ccc60  li 5, -1
  03ccc64  bl 0xfd8d0
  03ccc68  nop
  03ccc6c  ori 3, 31, 0
  03ccc70  bl 0xefb38
  03ccc74  nop
  03ccc78  b 0x3cce28
  03ccc7c  lbz 3, 32(31)
  03ccc80  cmpwi 3, 4
  03ccc84  bf 0, 0x3ccdbc
  03ccc88  lis 3, 61
  03ccc8c  lfs 1, 232(30)
  03ccc90  addi 5, 3, -16448
  03ccc94  lis 3, 114
  03ccc98  li 4, 0
  03ccc9c  lfs 2, 100(5)
  03ccca0  lfs 3, -3048(3)
  03ccca4  fmadds 1, 3, 2, 1
  03ccca8  addic 3, 31, 16
  03cccac  stfs 1, 232(30)
  03cccb0  lfs 31, 76(5)
  03cccb4  lfs 2, 24(31)
  03cccb8  fsubs 1, 1, 31
  03cccbc  fsubs 1, 2, 1
  03cccc0  stfs 1, 24(31)
  03cccc4  lfs 30, 72(5)
  03cccc8  fmr 1, 30
  03ccccc  bl 0xffb70
  03cccd0  nop
  03cccd4  lfs 2, 24(31)
  03cccd8  fsubs 2, 2, 31
  03cccdc  fcmpu 0, 2, 1
  03ccce0  stfs 2, 24(31)
  03ccce4  cror 6, 1, 2
  03ccce8  bt 6, 0x3cccfc
  03cccec  li 3, 0
  03cccf0  stfs 1, 24(31)
  03cccf4  stw 3, 232(30)
  03cccf8  b 0x3ccdbc
  03cccfc  lis 3, 61
  03ccd00  addi 3, 3, -16448
  03ccd04  lfs 1, 28(3)
  03ccd08  fcmpu 0, 2, 1
  03ccd0c  cror 6, 1, 2
  03ccd10  bt 6, 0x3ccdbc
  03ccd14  fadds 1, 2, 30
  03ccd18  lis 3, 61
  03ccd1c  lfs 2, 16(31)
  03ccd20  li 7, -1
  03ccd24  lfs 3, 20(31)
  03ccd28  addi 3, 3, -16448
  03ccd2c  stfs 2, 256(1)
  03ccd30  li 6, 1
  03ccd34  lfs 2, 28(31)
  03ccd38  li 11, 0
  03ccd3c  stfs 3, 260(1)
  03ccd40  addic 4, 30, 64
  03ccd44  stfs 2, 268(1)
  03ccd48  addic 5, 1, 256
  03ccd4c  li 8, 5
  03ccd50  fmr 3, 31
  03ccd54  li 9, 2
  03ccd58  li 10, 4
  03ccd5c  stfs 1, 264(1)
  03ccd60  lfs 1, 32(3)
  03ccd64  lfs 4, 64(3)
  03ccd68  lfs 5, 92(3)
  03ccd6c  lfs 7, 96(3)
  03ccd70  fmr 2, 1
  03ccd74  std 7, 144(1)
  03ccd78  ori 3, 31, 0
  03ccd7c  std 6, 160(1)
  03ccd80  fmr 6, 4
  03ccd84  std 6, 168(1)
  03ccd88  std 7, 176(1)
  03ccd8c  std 11, 184(1)
  03ccd90  bl 0x10e030
  03ccd94  nop
  03ccd98  ori 3, 31, 0
  03ccd9c  li 4, 0
  03ccda0  li 5, -1
  03ccda4  bl 0xfd8d0
  03ccda8  nop
  03ccdac  ori 3, 31, 0
  03ccdb0  bl 0xefb38
  03ccdb4  nop
  03ccdb8  b 0x3cce28
  03ccdbc  lbz 3, 49(31)
  03ccdc0  cmpwi 3, 0
  03ccdc4  bt 2, 0x3cce28
  03ccdc8  lis 3, 149
  03ccdcc  lfs 1, 20(31)
  03ccdd0  lfs 2, 16(31)
  03ccdd4  addic 3, 3, 5056
  03ccdd8  lfs 3, 324(3)
  03ccddc  lfs 4, 320(3)
  03ccde0  fsubs 1, 1, 3
  03ccde4  fsubs 2, 2, 4
  03ccde8  lfs 3, 24(31)
  03ccdec  lfs 4, 328(3)
  03ccdf0  fsubs 3, 3, 4
  03ccdf4  lis 3, 61
  03ccdf8  fmuls 1, 1, 1
  03ccdfc  addi 3, 3, -16448
  03cce00  fmadds 1, 2, 2, 1
  03cce04  lfs 2, 104(3)
  03cce08  fmadds 1, 3, 3, 1
  03cce0c  fsqrts 1, 1
  03cce10  fcmpu 0, 1, 2
  03cce14  cror 6, 1, 2
  03cce18  bt 6, 0x3cce28
  03cce1c  ori 3, 31, 0
  03cce20  bl 0x106360
  03cce24  nop
  03cce28  li 0, 416
  03cce2c  lvx 31, 1, 0
  03cce30  ld 0, 544(1)
  03cce34  mtlr 0
  03cce38  lfd 24, 464(1)
  03cce3c  lfd 25, 472(1)
  03cce40  lfd 26, 480(1)
  03cce44  lfd 27, 488(1)
  03cce48  lfd 28, 496(1)
  03cce4c  lfd 29, 504(1)
  03cce50  lfd 30, 512(1)
  03cce54  lfd 31, 520(1)
  03cce58  ld 28, 432(1)
  03cce5c  ld 29, 440(1)
  03cce60  ld 30, 448(1)
  03cce64  ld 31, 456(1)
  03cce68  addi 1, 1, 528
  03cce6c  blr

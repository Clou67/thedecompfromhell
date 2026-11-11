# game/update/moby613.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M613_003dd32c:   # 0x3dd32c, 0x14 bytes
  03dd32c  lis 3, 133
  03dd330  lis 4, 1
  03dd334  addic 3, 3, 14880
  03dd338  stw 4, 72(3)
  03dd33c  blr

UpdateMoby_613:   # 0x3dd370, 0x63c bytes
  03dd370  stdu 1, -240(1)
  03dd374  mflr 0
  03dd378  std 0, 256(1)
  03dd37c  stfd 31, 232(1)
  03dd380  std 30, 216(1)
  03dd384  lwz 30, 120(3)
  03dd388  std 31, 224(1)
  03dd38c  std 29, 208(1)
  03dd390  std 28, 200(1)
  03dd394  std 27, 192(1)
  03dd398  std 26, 184(1)
  03dd39c  cmpwi 30, 0
  03dd3a0  bt 2, 0x3dd980
  03dd3a4  lwz 31, 32(30)
  03dd3a8  cmpwi 31, -1
  03dd3ac  bt 2, 0x3dd980
  03dd3b0  lis 4, 165
  03dd3b4  slwi 5, 31, 2
  03dd3b8  addic 31, 4, 7136
  03dd3bc  extsw 4, 5
  03dd3c0  lhz 5, 46(30)
  03dd3c4  cmpwi 5, 0
  03dd3c8  lwzx 31, 31, 4
  03dd3cc  bf 2, 0x3dd48c
  03dd3d0  li 4, 1
  03dd3d4  li 5, 0
  03dd3d8  sth 4, 46(30)
  03dd3dc  lwz 4, 0(31)
  03dd3e0  addic 4, 4, -1
  03dd3e4  cmpwi 4, 0
  03dd3e8  bf 1, 0x3dd440
  03dd3ec  ori 4, 31, 0
  03dd3f0  lfs 1, 20(4)
  03dd3f4  lfs 2, 36(4)
  03dd3f8  lfs 3, 16(4)
  03dd3fc  fsubs 1, 1, 2
  03dd400  lfs 2, 32(4)
  03dd404  fsubs 2, 3, 2
  03dd408  lfs 3, 24(4)
  03dd40c  lfs 4, 40(4)
  03dd410  fsubs 3, 3, 4
  03dd414  fmuls 1, 1, 1
  03dd418  addic 5, 5, 1
  03dd41c  fmadds 1, 2, 2, 1
  03dd420  fmadds 1, 3, 3, 1
  03dd424  fsqrts 1, 1
  03dd428  stfs 1, 28(4)
  03dd42c  lwz 6, 0(31)
  03dd430  addic 4, 4, 16
  03dd434  addic 6, 6, -1
  03dd438  cmpw 5, 6
  03dd43c  bt 0, 0x3dd3f0
  03dd440  slwi 4, 5, 4
  03dd444  lfs 1, 20(31)
  03dd448  addc 4, 31, 4
  03dd44c  lfs 2, 16(31)
  03dd450  clrldi 4, 4, 32
  03dd454  li 5, 255
  03dd458  lfs 3, 20(4)
  03dd45c  lfs 4, 16(4)
  03dd460  fsubs 1, 3, 1
  03dd464  fsubs 2, 4, 2
  03dd468  lfs 3, 24(4)
  03dd46c  lfs 4, 24(31)
  03dd470  fsubs 3, 3, 4
  03dd474  fmuls 1, 1, 1
  03dd478  fmadds 1, 2, 2, 1
  03dd47c  fmadds 1, 3, 3, 1
  03dd480  fsqrts 1, 1
  03dd484  stfs 1, 28(4)
  03dd488  stb 5, 48(3)
  03dd48c  lis 29, 151
  03dd490  addic 29, 29, -25376
  03dd494  lwz 3, 8332(29)
  03dd498  cmpwi 1, 3, 18
  03dd49c  cmpwi 3, 17
  03dd4a0  cror 2, 2, 6
  03dd4a4  bt 2, 0x3dd4d4
  03dd4a8  lwz 3, 8340(29)
  03dd4ac  cmpwi 1, 3, 18
  03dd4b0  cmpwi 3, 17
  03dd4b4  cror 2, 2, 6
  03dd4b8  bt 2, 0x3dd4d4
  03dd4bc  lwz 3, 8324(29)
  03dd4c0  cmpwi 3, 18
  03dd4c4  bt 2, 0x3dd4d4
  03dd4c8  lwz 3, 8336(29)
  03dd4cc  cmpwi 3, 18
  03dd4d0  bf 2, 0x3dd980
  03dd4d4  lis 3, 62
  03dd4d8  addic 27, 1, 160
  03dd4dc  addi 28, 3, -11456
  03dd4e0  addic 26, 1, 164
  03dd4e4  addic 4, 29, 128
  03dd4e8  addic 5, 1, 128
  03dd4ec  ori 3, 31, 0
  03dd4f0  lfs 31, 8(28)
  03dd4f4  lfs 1, 0(28)
  03dd4f8  ori 6, 27, 0
  03dd4fc  lfs 2, 4(28)
  03dd500  ori 7, 26, 0
  03dd504  li 9, 0
  03dd508  fmr 3, 31
  03dd50c  bl 0x10d7a0
  03dd510  nop
  03dd514  lfs 1, 12(28)
  03dd518  addic 4, 1, 144
  03dd51c  ori 3, 31, 0
  03dd520  ori 5, 27, 0
  03dd524  ori 6, 26, 0
  03dd528  li 8, 0
  03dd52c  bl 0x10ce18
  03dd530  nop
  03dd534  lfs 1, 132(29)
  03dd538  lfs 2, 132(1)
  03dd53c  lfs 3, 128(29)
  03dd540  fsubs 1, 1, 2
  03dd544  lfs 2, 128(1)
  03dd548  fsubs 2, 3, 2
  03dd54c  lfs 3, 40(30)
  03dd550  ori 31, 3, 0
  03dd554  fmuls 1, 1, 1
  03dd558  fmadds 2, 2, 2, 1
  03dd55c  lfs 1, 8888(29)
  03dd560  fsqrts 2, 2
  03dd564  fcmpu 0, 2, 3
  03dd568  bt 1, 0x3dd980
  03dd56c  lwz 3, 8332(29)
  03dd570  cmpwi 3, 17
  03dd574  cmpwi 1, 3, 18
  03dd578  cmpwi 6, 3, 4
  03dd57c  cmpwi 7, 3, 5
  03dd580  bt 2, 0x3dd588
  03dd584  bf 6, 0x3dd860
  03dd588  fcmpu 0, 2, 1
  03dd58c  bt 1, 0x3dd980
  03dd590  cmpwi 31, 0
  03dd594  stfs 2, 8888(29)
  03dd598  bf 2, 0x3dd730
  03dd59c  lfs 1, 148(1)
  03dd5a0  lfs 2, 132(1)
  03dd5a4  lfs 3, 144(1)
  03dd5a8  fsubs 1, 1, 2
  03dd5ac  lfs 2, 128(1)
  03dd5b0  fsubs 3, 3, 2
  03dd5b4  lfs 2, 152(1)
  03dd5b8  lfs 4, 136(1)
  03dd5bc  fsubs 2, 2, 4
  03dd5c0  lis 3, 62
  03dd5c4  fmuls 4, 1, 1
  03dd5c8  addi 3, 3, -11456
  03dd5cc  lis 4, 114
  03dd5d0  fmadds 4, 3, 3, 4
  03dd5d4  fmadds 2, 2, 2, 4
  03dd5d8  lfs 4, 16(3)
  03dd5dc  lfs 5, -3048(4)
  03dd5e0  fmuls 4, 5, 4
  03dd5e4  fsqrts 2, 2
  03dd5e8  lfs 6, 4(30)
  03dd5ec  lfs 7, 0(30)
  03dd5f0  li 3, 0
  03dd5f4  fdivs 4, 4, 2
  03dd5f8  fsub 5, 31, 2
  03dd5fc  fsub 8, 2, 31
  03dd600  fsub 9, 31, 2
  03dd604  fsub 10, 2, 31
  03dd608  lfs 2, 36(30)
  03dd60c  stw 3, 8(30)
  03dd610  fmuls 1, 1, 4
  03dd614  fmuls 3, 3, 4
  03dd618  fsel 4, 5, 31, 1
  03dd61c  fsel 5, 9, 31, 3
  03dd620  fsel 4, 8, 4, 1
  03dd624  fsel 1, 10, 5, 3
  03dd628  fadds 4, 6, 4
  03dd62c  fadds 1, 7, 1
  03dd630  fmuls 3, 4, 4
  03dd634  stfs 1, 0(30)
  03dd638  stfs 4, 4(30)
  03dd63c  fmadds 3, 1, 1, 3
  03dd640  fsqrts 3, 3
  03dd644  fcmpu 0, 3, 2
  03dd648  cror 6, 0, 2
  03dd64c  bt 6, 0x3dd68c
  03dd650  fdivs 2, 2, 3
  03dd654  li 3, 0
  03dd658  stw 3, 8(30)
  03dd65c  fsub 5, 31, 3
  03dd660  fsub 6, 31, 3
  03dd664  fsub 7, 3, 31
  03dd668  fsub 3, 3, 31
  03dd66c  fmuls 1, 1, 2
  03dd670  fmuls 2, 4, 2
  03dd674  fsel 4, 5, 31, 1
  03dd678  fsel 5, 6, 31, 2
  03dd67c  fsel 1, 7, 4, 1
  03dd680  fsel 2, 3, 5, 2
  03dd684  stfs 1, 0(30)
  03dd688  stfs 2, 4(30)
  03dd68c  stfs 1, 240(29)
  03dd690  lfs 3, 4(30)
  03dd694  lhz 3, 44(30)
  03dd698  stfs 3, 244(29)
  03dd69c  lfs 2, 8(30)
  03dd6a0  cmpwi 3, 0
  03dd6a4  stfs 2, 248(29)
  03dd6a8  lfs 4, 12(30)
  03dd6ac  stfs 4, 252(29)
  03dd6b0  bt 2, 0x3dd7d4
  03dd6b4  lfs 6, 132(1)
  03dd6b8  lfs 4, 132(29)
  03dd6bc  lfs 7, 128(1)
  03dd6c0  fsubs 6, 6, 4
  03dd6c4  lfs 4, 128(29)
  03dd6c8  fsubs 7, 7, 4
  03dd6cc  lis 3, 62
  03dd6d0  lfs 5, 36(30)
  03dd6d4  addi 3, 3, -11456
  03dd6d8  fmuls 4, 6, 6
  03dd6dc  lfs 8, 20(3)
  03dd6e0  fmuls 5, 5, 8
  03dd6e4  fmadds 4, 7, 7, 4
  03dd6e8  fsqrts 4, 4
  03dd6ec  fcmpu 0, 4, 5
  03dd6f0  fcmpu 1, 4, 31
  03dd6f4  cror 2, 0, 2
  03dd6f8  bt 2, 0x3dd718
  03dd6fc  bf 6, 0x3dd70c
  03dd700  fmr 7, 31
  03dd704  fmr 6, 7
  03dd708  b 0x3dd718
  03dd70c  fdivs 4, 5, 4
  03dd710  fmuls 7, 4, 7
  03dd714  fmuls 6, 4, 6
  03dd718  fadds 1, 1, 7
  03dd71c  fadds 3, 3, 6
  03dd720  stfs 2, 248(29)
  03dd724  stfs 1, 240(29)
  03dd728  stfs 3, 244(29)
  03dd72c  b 0x3dd7d4
  03dd730  lfs 1, 4(30)
  03dd734  lfs 2, 0(30)
  03dd738  fmuls 3, 1, 1
  03dd73c  lfs 4, 8(30)
  03dd740  lis 3, 62
  03dd744  lis 4, 114
  03dd748  addi 3, 3, -11456
  03dd74c  fmadds 3, 2, 2, 3
  03dd750  lfs 5, 24(3)
  03dd754  lfs 6, 28(3)
  03dd758  lfs 7, -3064(4)
  03dd75c  fmadds 5, 7, 5, 6
  03dd760  fmadds 3, 4, 4, 3
  03dd764  fsqrts 3, 3
  03dd768  fmuls 5, 3, 5
  03dd76c  fsub 6, 31, 3
  03dd770  fsub 7, 31, 3
  03dd774  fsub 9, 31, 3
  03dd778  fsub 8, 3, 31
  03dd77c  fsub 10, 3, 31
  03dd780  fdivs 5, 5, 3
  03dd784  fsub 3, 3, 31
  03dd788  fmuls 1, 1, 5
  03dd78c  fmuls 4, 4, 5
  03dd790  fmuls 2, 2, 5
  03dd794  fsel 5, 6, 31, 1
  03dd798  fsel 6, 7, 31, 4
  03dd79c  fsel 7, 9, 31, 2
  03dd7a0  fsel 1, 8, 5, 1
  03dd7a4  fsel 4, 10, 6, 4
  03dd7a8  fsel 2, 3, 7, 2
  03dd7ac  stfs 1, 4(30)
  03dd7b0  stfs 4, 8(30)
  03dd7b4  stfs 2, 0(30)
  03dd7b8  stfs 2, 240(29)
  03dd7bc  lfs 1, 4(30)
  03dd7c0  stfs 1, 244(29)
  03dd7c4  lfs 1, 8(30)
  03dd7c8  stfs 1, 248(29)
  03dd7cc  lfs 1, 12(30)
  03dd7d0  stfs 1, 252(29)
  03dd7d4  lwz 3, 8332(29)
  03dd7d8  cmpwi 3, 18
  03dd7dc  bf 2, 0x3dd980
  03dd7e0  lwz 3, 8336(29)
  03dd7e4  cmpwi 3, 18
  03dd7e8  bf 2, 0x3dd980
  03dd7ec  lis 3, 62
  03dd7f0  lis 4, 114
  03dd7f4  addi 3, 3, -11456
  03dd7f8  lfs 1, 32(3)
  03dd7fc  lfs 2, -3056(4)
  03dd800  lwz 3, 408(29)
  03dd804  fmuls 1, 2, 1
  03dd808  fctiwz 1, 1
  03dd80c  stfd 1, 168(1)
  03dd810  lwz 4, 172(1)
  03dd814  cmpw 3, 4
  03dd818  bf 0, 0x3dd980
  03dd81c  lis 3, 62
  03dd820  lis 4, 114
  03dd824  addi 3, 3, -11456
  03dd828  lfs 1, 36(3)
  03dd82c  lfs 2, -3052(4)
  03dd830  lfs 3, 404(29)
  03dd834  fmuls 1, 2, 1
  03dd838  fcmpu 0, 3, 1
  03dd83c  cror 6, 0, 2
  03dd840  bt 6, 0x3dd848
  03dd844  stfs 1, 404(29)
  03dd848  li 3, 0
  03dd84c  stw 3, 348(29)
  03dd850  stw 3, 344(29)
  03dd854  stw 3, 340(29)
  03dd858  stw 3, 336(29)
  03dd85c  b 0x3dd980
  03dd860  lwz 3, 8340(29)
  03dd864  cmpwi 3, 18
  03dd868  bt 2, 0x3dd878
  03dd86c  lwz 3, 8352(29)
  03dd870  cmpwi 3, 18
  03dd874  bf 2, 0x3dd980
  03dd878  bt 26, 0x3dd880
  03dd87c  bf 30, 0x3dd980
  03dd880  lfs 1, 4(30)
  03dd884  lfs 2, 0(30)
  03dd888  fmuls 3, 1, 1
  03dd88c  lfs 4, 8(30)
  03dd890  lis 3, 62
  03dd894  lis 4, 114
  03dd898  addi 3, 3, -11456
  03dd89c  fmadds 3, 2, 2, 3
  03dd8a0  lfs 5, 40(3)
  03dd8a4  lfs 6, 28(3)
  03dd8a8  lfs 7, -3064(4)
  03dd8ac  fmadds 5, 7, 5, 6
  03dd8b0  fmadds 3, 4, 4, 3
  03dd8b4  lis 4, 114
  03dd8b8  lhz 7, 472(29)
  03dd8bc  li 6, -3056
  03dd8c0  vspltisw 2, -1
  03dd8c4  li 5, 44
  03dd8c8  fsqrts 3, 3
  03dd8cc  vslw 2, 2, 2
  03dd8d0  extsh 7, 7
  03dd8d4  fmuls 5, 3, 5
  03dd8d8  fsub 6, 31, 3
  03dd8dc  fsub 7, 31, 3
  03dd8e0  fsub 9, 31, 3
  03dd8e4  fsub 8, 3, 31
  03dd8e8  fsub 10, 3, 31
  03dd8ec  fdivs 5, 5, 3
  03dd8f0  fsub 3, 3, 31
  03dd8f4  fmuls 1, 1, 5
  03dd8f8  fmuls 4, 4, 5
  03dd8fc  fmuls 2, 2, 5
  03dd900  fsel 5, 6, 31, 1
  03dd904  fsel 6, 7, 31, 4
  03dd908  fsel 7, 9, 31, 2
  03dd90c  fsel 1, 8, 5, 1
  03dd910  fsel 4, 10, 6, 4
  03dd914  fsel 2, 3, 7, 2
  03dd918  stfs 1, 4(30)
  03dd91c  stfs 4, 8(30)
  03dd920  stfs 2, 0(30)
  03dd924  stfs 2, 240(29)
  03dd928  lfs 1, -3056(4)
  03dd92c  <unknown>
  03dd930  lfs 2, 4(30)
  03dd934  stfs 2, 244(29)
  03dd938  lfs 2, 8(30)
  03dd93c  stfs 2, 248(29)
  03dd940  lfs 2, 12(30)
  03dd944  stfs 2, 252(29)
  03dd948  lfs 2, 44(3)
  03dd94c  <unknown>
  03dd950  fmuls 1, 1, 2
  03dd954  vspltw 4, 4, 0
  03dd958  vmaddfp 2, 3, 4, 2
  03dd95c  fctiwz 1, 1
  03dd960  vctsxs 2, 2, 0
  03dd964  stfd 1, 168(1)
  03dd968  lwz 3, 172(1)
  03dd96c  cmpw 7, 3
  03dd970  bf 0, 0x3dd980
  03dd974  vsplth 2, 2, 1
  03dd978  li 3, 472
  03dd97c  stvehx 2, 3, 29
  03dd980  ld 0, 256(1)
  03dd984  mtlr 0
  03dd988  lfd 31, 232(1)
  03dd98c  ld 26, 184(1)
  03dd990  ld 27, 192(1)
  03dd994  ld 28, 200(1)
  03dd998  ld 29, 208(1)
  03dd99c  ld 30, 216(1)
  03dd9a0  ld 31, 224(1)
  03dd9a4  addi 1, 1, 240
  03dd9a8  blr

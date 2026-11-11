# game/update/moby111.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1109_001ce3f0:   # 0x1ce3f0, 0x120 bytes
  01ce3f0  stdu 1, -176(1)
  01ce3f4  mflr 0
  01ce3f8  std 0, 192(1)
  01ce3fc  stfd 29, 152(1)
  01ce400  stfd 30, 160(1)
  01ce404  stfd 31, 168(1)
  01ce408  std 28, 120(1)
  01ce40c  lis 5, 29
  01ce410  lis 28, 114
  01ce414  std 31, 144(1)
  01ce418  std 29, 128(1)
  01ce41c  fmr 31, 2
  01ce420  addi 31, 5, -7208
  01ce424  std 30, 136(1)
  01ce428  lis 29, 114
  01ce42c  std 27, 112(1)
  01ce430  ori 30, 3, 0
  01ce434  ori 27, 4, 0
  01ce438  lfs 30, 0(31)
  01ce43c  addic 5, 27, 136
  01ce440  lfs 29, 4(31)
  01ce444  lfs 3, -3048(28)
  01ce448  lfs 4, -3052(29)
  01ce44c  fmuls 2, 3, 30
  01ce450  fmuls 3, 3, 29
  01ce454  fmuls 4, 4, 30
  01ce458  bl 0xff2e8
  01ce45c  nop
  01ce460  lfs 1, 68(30)
  01ce464  addic 5, 27, 132
  01ce468  lfs 4, -3048(28)
  01ce46c  fmr 2, 31
  01ce470  lfs 5, -3052(29)
  01ce474  fmuls 3, 4, 30
  01ce478  fmuls 4, 4, 29
  01ce47c  fmuls 5, 5, 30
  01ce480  bl 0xff190
  01ce484  nop
  01ce488  stfs 1, 68(30)
  01ce48c  lfs 1, 64(30)
  01ce490  lfs 2, 8(31)
  01ce494  fabs 3, 1
  01ce498  lfs 4, 12(31)
  01ce49c  lfs 5, 136(27)
  01ce4a0  lfs 6, 16(31)
  01ce4a4  fsubs 3, 2, 3
  01ce4a8  fmuls 3, 3, 4
  01ce4ac  fmr 4, 6
  01ce4b0  fmuls 3, 5, 3
  01ce4b4  lfs 5, 20(31)
  01ce4b8  fneg 3, 3
  01ce4bc  fadds 1, 1, 3
  01ce4c0  fsub 3, 2, 1
  01ce4c4  fsel 1, 3, 1, 2
  01ce4c8  fsub 2, 1, 4
  01ce4cc  fsel 1, 2, 1, 4
  01ce4d0  fmuls 1, 1, 5
  01ce4d4  stfs 1, 64(30)
  01ce4d8  bl 0x10de78
  01ce4dc  nop
  01ce4e0  ld 0, 192(1)
  01ce4e4  mtlr 0
  01ce4e8  lfd 29, 152(1)
  01ce4ec  lfd 30, 160(1)
  01ce4f0  lfd 31, 168(1)
  01ce4f4  ld 27, 112(1)
  01ce4f8  ld 28, 120(1)
  01ce4fc  ld 29, 128(1)
  01ce500  ld 30, 136(1)
  01ce504  ld 31, 144(1)
  01ce508  addi 1, 1, 176
  01ce50c  blr

M1109_001ce520:   # 0x1ce520, 0x208 bytes
  01ce520  stdu 1, -224(1)
  01ce524  mflr 0
  01ce528  std 0, 240(1)
  01ce52c  stfd 26, 176(1)
  01ce530  stfd 27, 184(1)
  01ce534  stfd 28, 192(1)
  01ce538  stfd 29, 200(1)
  01ce53c  stfd 30, 208(1)
  01ce540  stfd 31, 216(1)
  01ce544  std 29, 152(1)
  01ce548  lis 6, 29
  01ce54c  ori 29, 3, 0
  01ce550  fmr 31, 1
  01ce554  std 30, 160(1)
  01ce558  addi 3, 6, -6896
  01ce55c  std 27, 136(1)
  01ce560  std 26, 128(1)
  01ce564  ori 30, 4, 0
  01ce568  ori 26, 5, 0
  01ce56c  std 31, 168(1)
  01ce570  li 27, 0
  01ce574  ori 31, 5, 0
  01ce578  lfs 28, 0(3)
  01ce57c  lwz 3, 0(4)
  01ce580  srawi 4, 3, 1
  01ce584  addze 4, 4
  01ce588  std 28, 144(1)
  01ce58c  std 25, 120(1)
  01ce590  cmpwi 4, 0
  01ce594  bf 1, 0x1ce6e0
  01ce598  lis 4, 29
  01ce59c  addic 28, 30, 16
  01ce5a0  addi 4, 4, -6896
  01ce5a4  lfs 29, 4(4)
  01ce5a8  lfs 30, 8(4)
  01ce5ac  addc 4, 27, 31
  01ce5b0  lfs 1, 4(29)
  01ce5b4  divw 5, 4, 3
  01ce5b8  mullw 3, 5, 3
  01ce5bc  lfs 2, 0(29)
  01ce5c0  subc 25, 4, 3
  01ce5c4  lfs 3, 8(29)
  01ce5c8  extsw 25, 25
  01ce5cc  sldi 3, 25, 4
  01ce5d0  addc 3, 3, 28
  01ce5d4  clrldi 3, 3, 32
  01ce5d8  lfs 4, 4(3)
  01ce5dc  lfs 5, 0(3)
  01ce5e0  fsubs 1, 4, 1
  01ce5e4  fsubs 2, 5, 2
  01ce5e8  lfs 4, 8(3)
  01ce5ec  fsubs 3, 4, 3
  01ce5f0  ori 3, 27, 0
  01ce5f4  fmuls 1, 1, 1
  01ce5f8  fmadds 1, 2, 2, 1
  01ce5fc  fmadds 27, 3, 3, 1
  01ce600  fsqrts 27, 27
  01ce604  fsubs 1, 27, 31
  01ce608  fabs 26, 1
  01ce60c  bl 0x502730
  01ce610  nop
  01ce614  fmadds 26, 1, 29, 26
  01ce618  ori 3, 27, 0
  01ce61c  bl 0x502730
  01ce620  nop
  01ce624  fmadds 4, 1, 30, 28
  01ce628  lfs 3, 0(29)
  01ce62c  lfs 2, 4(29)
  01ce630  lfs 1, 8(29)
  01ce634  lwz 3, 0(30)
  01ce638  fcmpu 0, 26, 4
  01ce63c  cror 6, 1, 2
  01ce640  bt 6, 0x1ce64c
  01ce644  fmr 28, 27
  01ce648  ori 26, 25, 0
  01ce64c  addc 4, 3, 31
  01ce650  subc 4, 4, 27
  01ce654  divw 5, 4, 3
  01ce658  mullw 3, 5, 3
  01ce65c  subc 25, 4, 3
  01ce660  extsw 25, 25
  01ce664  sldi 3, 25, 4
  01ce668  addc 3, 3, 28
  01ce66c  clrldi 3, 3, 32
  01ce670  lfs 4, 4(3)
  01ce674  lfs 5, 0(3)
  01ce678  fsubs 2, 4, 2
  01ce67c  fsubs 3, 5, 3
  01ce680  lfs 4, 8(3)
  01ce684  fsubs 1, 4, 1
  01ce688  ori 3, 27, 0
  01ce68c  fmuls 2, 2, 2
  01ce690  fmadds 2, 3, 3, 2
  01ce694  fmadds 27, 1, 1, 2
  01ce698  fsqrts 27, 27
  01ce69c  fsubs 1, 27, 31
  01ce6a0  fabs 26, 1
  01ce6a4  bl 0x502730
  01ce6a8  nop
  01ce6ac  fmadds 1, 1, 29, 26
  01ce6b0  lwz 3, 0(30)
  01ce6b4  fcmpu 0, 1, 28
  01ce6b8  cror 6, 1, 2
  01ce6bc  bt 6, 0x1ce6c8
  01ce6c0  ori 26, 25, 0
  01ce6c4  fmr 28, 27
  01ce6c8  addic 27, 27, 1
  01ce6cc  srawi 4, 3, 1
  01ce6d0  extsw 27, 27
  01ce6d4  addze 4, 4
  01ce6d8  cmpw 27, 4
  01ce6dc  bt 0, 0x1ce5ac
  01ce6e0  ori 3, 26, 0
  01ce6e4  ld 0, 240(1)
  01ce6e8  mtlr 0
  01ce6ec  lfd 26, 176(1)
  01ce6f0  lfd 27, 184(1)
  01ce6f4  lfd 28, 192(1)
  01ce6f8  lfd 29, 200(1)
  01ce6fc  lfd 30, 208(1)
  01ce700  lfd 31, 216(1)
  01ce704  ld 25, 120(1)
  01ce708  ld 26, 128(1)
  01ce70c  ld 27, 136(1)
  01ce710  ld 28, 144(1)
  01ce714  ld 29, 152(1)
  01ce718  ld 30, 160(1)
  01ce71c  ld 31, 168(1)
  01ce720  addi 1, 1, 224
  01ce724  blr

M1109_001ce738:   # 0x1ce738, 0x63c bytes
  01ce738  stdu 1, -256(1)
  01ce73c  mflr 0
  01ce740  std 0, 272(1)
  01ce744  stfd 26, 208(1)
  01ce748  stfd 27, 216(1)
  01ce74c  stfd 28, 224(1)
  01ce750  stfd 29, 232(1)
  01ce754  stfd 30, 240(1)
  01ce758  stfd 31, 248(1)
  01ce75c  lwz 7, 160(4)
  01ce760  lis 6, 165
  01ce764  lhz 8, 182(4)
  01ce768  slwi 7, 7, 2
  01ce76c  addic 6, 6, 7136
  01ce770  extsw 9, 7
  01ce774  extsh 8, 8
  01ce778  lhz 7, 180(4)
  01ce77c  lfs 3, 20(3)
  01ce780  sldi 8, 8, 4
  01ce784  lwzx 6, 6, 9
  01ce788  extsh 9, 7
  01ce78c  lfs 2, 16(3)
  01ce790  addc 8, 6, 8
  01ce794  sldi 9, 9, 4
  01ce798  clrldi 8, 8, 32
  01ce79c  addc 9, 6, 9
  01ce7a0  clrldi 9, 9, 32
  01ce7a4  lfs 1, 20(8)
  01ce7a8  lfs 5, 16(8)
  01ce7ac  lfs 8, 24(8)
  01ce7b0  lfs 4, 20(9)
  01ce7b4  fsubs 6, 1, 3
  01ce7b8  lfs 9, 16(9)
  01ce7bc  fsubs 7, 5, 2
  01ce7c0  fsubs 1, 1, 4
  01ce7c4  fsubs 5, 5, 9
  01ce7c8  lfs 4, 24(3)
  01ce7cc  lfs 10, 24(9)
  01ce7d0  fsubs 9, 8, 4
  01ce7d4  fsubs 8, 8, 10
  01ce7d8  fmuls 6, 6, 6
  01ce7dc  fmuls 1, 1, 1
  01ce7e0  std 31, 200(1)
  01ce7e4  lis 8, 29
  01ce7e8  li 31, 0
  01ce7ec  addi 8, 8, -6360
  01ce7f0  fmadds 6, 7, 7, 6
  01ce7f4  fmadds 1, 5, 5, 1
  01ce7f8  lfs 10, 0(8)
  01ce7fc  fmadds 5, 9, 9, 6
  01ce800  fmadds 7, 8, 8, 1
  01ce804  fsqrts 1, 5
  01ce808  fsqrts 7, 7
  01ce80c  fsubs 5, 7, 1
  01ce810  fcmpu 0, 5, 10
  01ce814  bt 0, 0x1ce824
  01ce818  lfs 6, 204(4)
  01ce81c  fcmpu 0, 5, 6
  01ce820  bt 0, 0x1ce838
  01ce824  lfs 6, 204(4)
  01ce828  fmr 5, 6
  01ce82c  fcmpu 0, 7, 5
  01ce830  cror 6, 1, 2
  01ce834  bt 6, 0x1ce88c
  01ce838  lbz 8, 208(4)
  01ce83c  sth 7, 182(4)
  01ce840  extsb 9, 8
  01ce844  lwz 8, 0(6)
  01ce848  addc 7, 7, 9
  01ce84c  extsh 10, 7
  01ce850  cmpw 10, 8
  01ce854  sth 7, 180(4)
  01ce858  bt 0, 0x1ce868
  01ce85c  ori 7, 31, 0
  01ce860  sth 31, 180(4)
  01ce864  li 31, 1
  01ce868  extsh 9, 7
  01ce86c  cmpwi 9, 0
  01ce870  bf 0, 0x1ce880
  01ce874  addic 7, 8, -1
  01ce878  li 31, 1
  01ce87c  sth 7, 180(4)
  01ce880  fmr 1, 10
  01ce884  fmr 5, 6
  01ce888  b 0x1ce890
  01ce88c  fdivs 1, 1, 7
  01ce890  extsh 7, 7
  01ce894  sldi 7, 7, 4
  01ce898  addc 6, 6, 7
  01ce89c  clrldi 6, 6, 32
  01ce8a0  lfs 7, 20(6)
  01ce8a4  lfs 8, 16(6)
  01ce8a8  fsubs 7, 7, 3
  01ce8ac  fsubs 8, 8, 2
  01ce8b0  lfs 9, 24(6)
  01ce8b4  fsubs 9, 9, 4
  01ce8b8  lis 6, 29
  01ce8bc  addi 6, 6, -6360
  01ce8c0  fmuls 11, 7, 7
  01ce8c4  lfs 12, 4(6)
  01ce8c8  lfs 13, 8(6)
  01ce8cc  fsub 29, 1, 12
  01ce8d0  lfs 0, 116(4)
  01ce8d4  fmadds 11, 8, 8, 11
  01ce8d8  lfs 31, 112(4)
  01ce8dc  fsel 1, 29, 1, 12
  01ce8e0  fmadds 11, 9, 9, 11
  01ce8e4  lfs 30, 120(4)
  01ce8e8  fsub 12, 13, 1
  01ce8ec  fsqrts 11, 11
  01ce8f0  clrlwi 5, 5, 24
  01ce8f4  cmpwi 5, 0
  01ce8f8  fsel 1, 12, 1, 13
  01ce8fc  fsubs 13, 13, 1
  01ce900  fdivs 5, 5, 11
  01ce904  fsub 29, 10, 11
  01ce908  fsub 28, 10, 11
  01ce90c  fsub 27, 10, 11
  01ce910  fsub 12, 11, 10
  01ce914  fsub 26, 11, 10
  01ce918  fsub 11, 11, 10
  01ce91c  fmuls 7, 7, 5
  01ce920  fmuls 8, 8, 5
  01ce924  fmuls 5, 9, 5
  01ce928  fsel 9, 29, 10, 7
  01ce92c  fsel 29, 28, 10, 8
  01ce930  fsel 28, 27, 10, 5
  01ce934  fsel 7, 12, 9, 7
  01ce938  fsel 8, 26, 29, 8
  01ce93c  fsel 5, 11, 28, 5
  01ce940  fmuls 7, 7, 1
  01ce944  fmuls 8, 8, 1
  01ce948  fmuls 1, 5, 1
  01ce94c  fmadds 5, 0, 13, 7
  01ce950  fmadds 7, 31, 13, 8
  01ce954  fmadds 1, 30, 13, 1
  01ce958  fmuls 8, 5, 5
  01ce95c  fmadds 8, 7, 7, 8
  01ce960  fmadds 8, 1, 1, 8
  01ce964  fsqrts 8, 8
  01ce968  fdivs 6, 6, 8
  01ce96c  fsub 9, 10, 8
  01ce970  fsub 11, 10, 8
  01ce974  fsub 12, 10, 8
  01ce978  fsub 13, 8, 10
  01ce97c  fsub 0, 8, 10
  01ce980  fsub 8, 8, 10
  01ce984  fmuls 7, 7, 6
  01ce988  fmuls 5, 5, 6
  01ce98c  fmuls 1, 1, 6
  01ce990  fsel 6, 9, 10, 7
  01ce994  fsel 9, 11, 10, 5
  01ce998  fsel 11, 12, 10, 1
  01ce99c  fsel 6, 13, 6, 7
  01ce9a0  fsel 5, 0, 9, 5
  01ce9a4  fsel 7, 8, 11, 1
  01ce9a8  fadds 1, 2, 6
  01ce9ac  fadds 2, 3, 5
  01ce9b0  fadds 3, 4, 7
  01ce9b4  stfs 6, 112(4)
  01ce9b8  stfs 5, 116(4)
  01ce9bc  stfs 7, 120(4)
  01ce9c0  stfs 1, 16(3)
  01ce9c4  stfs 2, 20(3)
  01ce9c8  stfs 3, 24(3)
  01ce9cc  bt 2, 0x1ced44
  01ce9d0  lis 5, 151
  01ce9d4  addic 5, 5, -25376
  01ce9d8  lis 6, 115
  01ce9dc  lis 7, 29
  01ce9e0  lfs 4, 128(5)
  01ce9e4  lfs 5, 132(5)
  01ce9e8  fsubs 6, 4, 1
  01ce9ec  fsubs 7, 5, 2
  01ce9f0  addic 6, 6, 22784
  01ce9f4  addi 7, 7, -6360
  01ce9f8  fabs 8, 6
  01ce9fc  fabs 11, 7
  01cea00  stfs 6, 124(1)
  01cea04  stfs 7, 128(1)
  01cea08  fsubs 6, 8, 11
  01cea0c  stfs 6, 132(1)
  01cea10  lwz 8, 124(1)
  01cea14  lfs 6, 124(1)
  01cea18  lwz 9, 128(1)
  01cea1c  lfs 7, 128(1)
  01cea20  fabs 6, 6
  01cea24  lwz 10, 132(1)
  01cea28  rlwinm 9, 9, 3, 29, 29
  01cea2c  lfs 9, 132(1)
  01cea30  fabs 7, 7
  01cea34  rlwimi 9, 10, 2, 30, 30
  01cea38  fsub 12, 9, 10
  01cea3c  fsub 9, 9, 10
  01cea40  rlwimi 9, 8, 4, 28, 28
  01cea44  ori 8, 6, 0
  01cea48  rlwimi 8, 9, 2, 26, 28
  01cea4c  slwi 9, 9, 2
  01cea50  clrldi 8, 8, 32
  01cea54  fsel 11, 12, 6, 11
  01cea58  lfsx 6, 6, 9
  01cea5c  fsel 8, 9, 7, 8
  01cea60  lfs 7, 4(8)
  01cea64  lfs 9, 12(7)
  01cea68  fcmpu 0, 11, 10
  01cea6c  bt 1, 0x1cea78
  01cea70  fmr 6, 10
  01cea74  b 0x1ceb90
  01cea78  fsubs 12, 8, 11
  01cea7c  fadds 8, 8, 11
  01cea80  addic 7, 1, 16
  01cea84  li 11, 2
  01cea88  addic 9, 7, 168
  01cea8c  addic 8, 7, 152
  01cea90  mtctr 11
  01cea94  fdivs 8, 12, 8
  01cea98  fmuls 11, 8, 8
  01cea9c  stfs 8, 180(1)
  01ceaa0  stfs 8, 172(1)
  01ceaa4  stfs 8, 176(1)
  01ceaa8  stfs 8, 168(1)
  01ceaac  lfs 13, 180(1)
  01ceab0  lfs 0, 172(1)
  01ceab4  lfs 31, 176(1)
  01ceab8  fmuls 12, 11, 11
  01ceabc  fmuls 0, 0, 11
  01ceac0  fmuls 13, 13, 12
  01ceac4  fmuls 8, 12, 12
  01ceac8  fmuls 12, 31, 12
  01ceacc  stfs 0, 172(1)
  01cead0  fmuls 11, 13, 11
  01cead4  stfs 12, 176(1)
  01cead8  stfs 11, 180(1)
  01ceadc  lfs 11, 152(7)
  01ceae0  fmuls 11, 11, 8
  01ceae4  stfs 11, 168(7)
  01ceae8  lfs 11, 4(8)
  01ceaec  addic 8, 8, 8
  01ceaf0  fmuls 11, 11, 8
  01ceaf4  addic 7, 7, 8
  01ceaf8  stfs 11, 4(9)
  01ceafc  addic 9, 9, 8
  01ceb00  bdnz 0x1ceadc
  01ceb04  li 9, 4
  01ceb08  ori 7, 1, 0
  01ceb0c  mtctr 9
  01ceb10  lis 8, 115
  01ceb14  addic 9, 7, 168
  01ceb18  addic 8, 8, 22752
  01ceb1c  ori 10, 9, 0
  01ceb20  lfs 8, 168(7)
  01ceb24  lfs 11, 0(8)
  01ceb28  fmuls 8, 8, 11
  01ceb2c  lfs 11, 4(8)
  01ceb30  addic 8, 8, 8
  01ceb34  stfs 8, 168(7)
  01ceb38  lfs 8, 4(9)
  01ceb3c  addic 7, 7, 8
  01ceb40  fmuls 8, 8, 11
  01ceb44  stfs 8, 4(9)
  01ceb48  addic 9, 9, 8
  01ceb4c  bdnz 0x1ceb20
  01ceb50  ori 7, 1, 0
  01ceb54  fmr 8, 10
  01ceb58  mtctr 11
  01ceb5c  lfs 11, 168(7)
  01ceb60  fadds 8, 8, 11
  01ceb64  lfs 11, 4(10)
  01ceb68  addic 7, 7, 16
  01ceb6c  lfs 12, 8(10)
  01ceb70  lfs 13, 12(10)
  01ceb74  addic 10, 10, 16
  01ceb78  fadds 8, 8, 11
  01ceb7c  fadds 8, 8, 12
  01ceb80  fadds 8, 8, 13
  01ceb84  bdnz 0x1ceb5c
  01ceb88  fadds 8, 8, 9
  01ceb8c  fmadds 6, 8, 6, 7
  01ceb90  fsubs 2, 2, 5
  01ceb94  fsubs 1, 1, 4
  01ceb98  fmuls 2, 2, 2
  01ceb9c  fmadds 1, 1, 1, 2
  01ceba0  lfs 2, 136(5)
  01ceba4  fsubs 2, 2, 3
  01ceba8  fsqrts 1, 1
  01cebac  stfs 2, 116(1)
  01cebb0  fabs 4, 2
  01cebb4  fabs 3, 1
  01cebb8  stfs 1, 112(1)
  01cebbc  lwz 5, 116(1)
  01cebc0  lfs 2, 116(1)
  01cebc4  rlwinm 5, 5, 3, 29, 29
  01cebc8  fabs 5, 2
  01cebcc  fsubs 1, 3, 4
  01cebd0  stfs 1, 120(1)
  01cebd4  lwz 7, 112(1)
  01cebd8  lfs 1, 112(1)
  01cebdc  lwz 8, 120(1)
  01cebe0  lfs 2, 120(1)
  01cebe4  fabs 1, 1
  01cebe8  rlwimi 5, 8, 2, 30, 30
  01cebec  fsub 7, 2, 10
  01cebf0  fsub 8, 2, 10
  01cebf4  rlwimi 5, 7, 4, 28, 28
  01cebf8  ori 7, 6, 0
  01cebfc  rlwimi 7, 5, 2, 26, 28
  01cec00  slwi 5, 5, 2
  01cec04  clrldi 7, 7, 32
  01cec08  fsel 4, 7, 1, 4
  01cec0c  lfsx 1, 6, 5
  01cec10  fsel 3, 8, 5, 3
  01cec14  lfs 2, 4(7)
  01cec18  fcmpu 0, 4, 10
  01cec1c  bt 1, 0x1cec24
  01cec20  b 0x1ced38
  01cec24  fsubs 5, 3, 4
  01cec28  fadds 3, 3, 4
  01cec2c  addic 5, 1, 16
  01cec30  li 8, 2
  01cec34  addic 6, 5, 120
  01cec38  addic 7, 5, 136
  01cec3c  mtctr 8
  01cec40  fdivs 3, 5, 3
  01cec44  fmuls 4, 3, 3
  01cec48  stfs 3, 148(1)
  01cec4c  stfs 3, 140(1)
  01cec50  stfs 3, 144(1)
  01cec54  stfs 3, 136(1)
  01cec58  lfs 7, 148(1)
  01cec5c  lfs 8, 140(1)
  01cec60  lfs 11, 144(1)
  01cec64  fmuls 5, 4, 4
  01cec68  fmuls 8, 8, 4
  01cec6c  fmuls 7, 7, 5
  01cec70  fmuls 3, 5, 5
  01cec74  fmuls 5, 11, 5
  01cec78  stfs 8, 140(1)
  01cec7c  fmuls 4, 7, 4
  01cec80  stfs 5, 144(1)
  01cec84  stfs 4, 148(1)
  01cec88  lfs 4, 120(5)
  01cec8c  fmuls 4, 4, 3
  01cec90  stfs 4, 136(5)
  01cec94  lfs 4, 4(6)
  01cec98  addic 5, 5, 8
  01cec9c  addic 6, 6, 8
  01ceca0  fmuls 4, 4, 3
  01ceca4  stfs 4, 4(7)
  01ceca8  addic 7, 7, 8
  01cecac  bdnz 0x1cec88
  01cecb0  li 7, 4
  01cecb4  ori 5, 1, 0
  01cecb8  mtctr 7
  01cecbc  lis 6, 115
  01cecc0  addic 7, 5, 136
  01cecc4  addic 6, 6, 22752
  01cecc8  ori 9, 7, 0
  01ceccc  lfs 3, 136(5)
  01cecd0  lfs 4, 0(6)
  01cecd4  fmuls 3, 3, 4
  01cecd8  lfs 4, 4(6)
  01cecdc  addic 6, 6, 8
  01cece0  stfs 3, 136(5)
  01cece4  lfs 3, 4(7)
  01cece8  addic 5, 5, 8
  01cecec  fmuls 3, 3, 4
  01cecf0  stfs 3, 4(7)
  01cecf4  addic 7, 7, 8
  01cecf8  bdnz 0x1ceccc
  01cecfc  ori 5, 1, 0
  01ced00  mtctr 8
  01ced04  lfs 3, 136(5)
  01ced08  lfs 4, 4(9)
  01ced0c  fadds 3, 10, 3
  01ced10  lfs 5, 8(9)
  01ced14  lfs 10, 12(9)
  01ced18  addic 5, 5, 16
  01ced1c  addic 9, 9, 16
  01ced20  fadds 3, 3, 4
  01ced24  fadds 3, 3, 5
  01ced28  fadds 10, 3, 10
  01ced2c  bdnz 0x1ced04
  01ced30  fadds 10, 10, 9
  01ced34  fmadds 10, 10, 1, 2
  01ced38  fneg 2, 10
  01ced3c  fmr 1, 6
  01ced40  bl 0x1ce3f0
  01ced44  ori 3, 31, 0
  01ced48  ld 0, 272(1)
  01ced4c  mtlr 0
  01ced50  lfd 26, 208(1)
  01ced54  lfd 27, 216(1)
  01ced58  lfd 28, 224(1)
  01ced5c  lfd 29, 232(1)
  01ced60  lfd 30, 240(1)
  01ced64  lfd 31, 248(1)
  01ced68  ld 31, 200(1)
  01ced6c  addi 1, 1, 256
  01ced70  blr

M1109_001ced74:   # 0x1ced74, 0x100 bytes
  01ced74  stdu 1, -160(1)
  01ced78  mflr 0
  01ced7c  std 0, 176(1)
  01ced80  stfd 30, 144(1)
  01ced84  stfd 31, 152(1)
  01ced88  std 30, 128(1)
  01ced8c  std 31, 136(1)
  01ced90  lis 30, 151
  01ced94  ori 31, 3, 0
  01ced98  fmr 31, 1
  01ced9c  addic 30, 30, -25376
  01ceda0  lwz 3, 5616(30)
  01ceda4  std 29, 120(1)
  01ceda8  cmpwi 3, 0
  01cedac  bf 2, 0x1cedd4
  01cedb0  lfs 1, 128(30)
  01cedb4  stfs 1, 0(31)
  01cedb8  lfs 1, 132(30)
  01cedbc  stfs 1, 4(31)
  01cedc0  lfs 1, 136(30)
  01cedc4  stfs 1, 8(31)
  01cedc8  lfs 1, 140(30)
  01cedcc  stfs 1, 12(31)
  01cedd0  b 0x1cee50
  01cedd4  lwz 29, 120(3)
  01cedd8  lfs 1, 72(3)
  01ceddc  lfs 2, 144(29)
  01cede0  bl 0x502578
  01cede4  nop
  01cede8  fmr 30, 1
  01cedec  lwz 3, 5616(30)
  01cedf0  lfs 2, 148(29)
  01cedf4  lfs 1, 68(3)
  01cedf8  bl 0x502578
  01cedfc  nop
  01cee00  lfs 2, 100(29)
  01cee04  fneg 3, 1
  01cee08  ori 3, 31, 0
  01cee0c  fmuls 1, 31, 2
  01cee10  fmr 2, 30
  01cee14  bl 0xfe610
  01cee18  nop
  01cee1c  lwz 3, 5616(30)
  01cee20  lfs 1, 0(31)
  01cee24  lfs 2, 4(31)
  01cee28  lfs 3, 16(3)
  01cee2c  fadds 1, 1, 3
  01cee30  lfs 3, 8(31)
  01cee34  stfs 1, 0(31)
  01cee38  lfs 1, 20(3)
  01cee3c  fadds 1, 2, 1
  01cee40  stfs 1, 4(31)
  01cee44  lfs 1, 24(3)
  01cee48  fadds 1, 3, 1
  01cee4c  stfs 1, 8(31)
  01cee50  ld 0, 176(1)
  01cee54  mtlr 0
  01cee58  lfd 30, 144(1)
  01cee5c  lfd 31, 152(1)
  01cee60  ld 29, 120(1)
  01cee64  ld 30, 128(1)
  01cee68  ld 31, 136(1)
  01cee6c  addi 1, 1, 160
  01cee70  blr

M111_001ceea0:   # 0x1ceea0, 0x5d0 bytes
  01ceea0  stdu 1, -192(1)
  01ceea4  mflr 0
  01ceea8  std 0, 208(1)
  01ceeac  stfd 31, 184(1)
  01ceeb0  std 31, 176(1)
  01ceeb4  ori 31, 3, 0
  01ceeb8  lwz 3, 160(4)
  01ceebc  std 29, 160(1)
  01ceec0  lis 6, 165
  01ceec4  std 27, 144(1)
  01ceec8  clrlwi 29, 5, 24
  01ceecc  slwi 3, 3, 2
  01ceed0  std 28, 152(1)
  01ceed4  addic 27, 6, 7136
  01ceed8  extsw 3, 3
  01ceedc  std 30, 168(1)
  01ceee0  li 28, 0
  01ceee4  ori 30, 4, 0
  01ceee8  lwzx 27, 27, 3
  01ceeec  std 26, 136(1)
  01ceef0  cmpwi 27, 0
  01ceef4  bt 2, 0x1cf440
  01ceef8  lis 26, 151
  01ceefc  addic 26, 26, -25376
  01cef00  lwz 3, 5616(26)
  01cef04  cmpwi 3, 0
  01cef08  bt 2, 0x1cf02c
  01cef0c  lhz 4, 166(3)
  01cef10  cmpwi 4, 69
  01cef14  bf 2, 0x1cf02c
  01cef18  lwz 4, 188(30)
  01cef1c  cmpwi 4, -1
  01cef20  bt 2, 0x1cf014
  01cef24  lis 5, 164
  01cef28  slwi 4, 4, 8
  01cef2c  lwz 5, -28512(5)
  01cef30  addc 4, 5, 4
  01cef34  cmpwi 4, 0
  01cef38  bt 2, 0x1cf014
  01cef3c  clrldi 4, 4, 32
  01cef40  lbz 5, 32(4)
  01cef44  cmpwi 1, 5, 253
  01cef48  cmpwi 5, 254
  01cef4c  cror 2, 2, 6
  01cef50  bt 2, 0x1cf014
  01cef54  lfs 1, 16(3)
  01cef58  lfs 2, 16(4)
  01cef5c  fsubs 3, 1, 2
  01cef60  lis 5, 29
  01cef64  addi 5, 5, -4492
  01cef68  stfs 3, 112(1)
  01cef6c  lfs 1, 20(3)
  01cef70  lfs 2, 20(4)
  01cef74  fsubs 4, 1, 2
  01cef78  stfs 4, 116(1)
  01cef7c  lfs 1, 24(3)
  01cef80  lfs 2, 24(4)
  01cef84  fsubs 5, 1, 2
  01cef88  stfs 5, 120(1)
  01cef8c  lfs 1, 28(3)
  01cef90  stfs 1, 124(1)
  01cef94  lfs 1, 0(5)
  01cef98  fmuls 4, 4, 1
  01cef9c  fmuls 3, 3, 1
  01cefa0  fmuls 5, 5, 1
  01cefa4  fmuls 1, 4, 4
  01cefa8  stfs 3, 112(1)
  01cefac  stfs 4, 116(1)
  01cefb0  stfs 5, 120(1)
  01cefb4  lfs 2, 4(5)
  01cefb8  fmadds 1, 3, 3, 1
  01cefbc  fmadds 1, 5, 5, 1
  01cefc0  fsqrts 1, 1
  01cefc4  fcmpu 0, 1, 2
  01cefc8  cror 6, 0, 2
  01cefcc  bt 6, 0x1cefec
  01cefd0  fdivs 1, 2, 1
  01cefd4  fmuls 3, 3, 1
  01cefd8  fmuls 4, 4, 1
  01cefdc  fmuls 5, 5, 1
  01cefe0  stfs 3, 112(1)
  01cefe4  stfs 4, 116(1)
  01cefe8  stfs 5, 120(1)
  01cefec  lfs 1, 16(4)
  01ceff0  fadds 1, 3, 1
  01ceff4  stfs 1, 112(1)
  01ceff8  lfs 1, 20(4)
  01ceffc  fadds 1, 4, 1
  01cf000  stfs 1, 116(1)
  01cf004  lfs 1, 24(4)
  01cf008  fadds 1, 5, 1
  01cf00c  stfs 1, 120(1)
  01cf010  b 0x1cf0ac
  01cf014  lis 4, 29
  01cf018  addic 3, 1, 112
  01cf01c  addi 4, 4, -4492
  01cf020  lfs 1, 8(4)
  01cf024  bl 0x1ced74
  01cf028  b 0x1cf0ac
  01cf02c  lwz 3, 188(30)
  01cf030  cmpwi 3, -1
  01cf034  bt 2, 0x1cf08c
  01cf038  lis 4, 164
  01cf03c  slwi 3, 3, 8
  01cf040  lwz 4, -28512(4)
  01cf044  addc 3, 4, 3
  01cf048  cmpwi 3, 0
  01cf04c  bt 2, 0x1cf08c
  01cf050  clrldi 3, 3, 32
  01cf054  lbz 4, 32(3)
  01cf058  cmpwi 1, 4, 253
  01cf05c  cmpwi 4, 254
  01cf060  cror 2, 2, 6
  01cf064  bt 2, 0x1cf08c
  01cf068  lfs 1, 16(3)
  01cf06c  stfs 1, 112(1)
  01cf070  lfs 1, 20(3)
  01cf074  stfs 1, 116(1)
  01cf078  lfs 1, 24(3)
  01cf07c  stfs 1, 120(1)
  01cf080  lfs 1, 28(3)
  01cf084  stfs 1, 124(1)
  01cf088  b 0x1cf0ac
  01cf08c  lfs 1, 128(26)
  01cf090  lfs 2, 132(26)
  01cf094  stfs 1, 112(1)
  01cf098  lfs 1, 136(26)
  01cf09c  stfs 2, 116(1)
  01cf0a0  lfs 2, 140(26)
  01cf0a4  stfs 1, 120(1)
  01cf0a8  stfs 2, 124(1)
  01cf0ac  lis 4, 29
  01cf0b0  lhz 6, 180(30)
  01cf0b4  addic 3, 1, 112
  01cf0b8  addi 5, 4, -4492
  01cf0bc  ori 4, 27, 0
  01cf0c0  lfs 1, 12(5)
  01cf0c4  extsh 5, 6
  01cf0c8  bl 0x1ce520
  01cf0cc  lwz 4, 0(27)
  01cf0d0  addic 5, 3, 5
  01cf0d4  li 9, 0
  01cf0d8  lfs 1, 132(26)
  01cf0dc  extsw 6, 4
  01cf0e0  lfs 2, 128(26)
  01cf0e4  extsw 7, 5
  01cf0e8  lfs 3, 136(26)
  01cf0ec  subc 8, 5, 4
  01cf0f0  subc 6, 7, 6
  01cf0f4  addic 7, 3, -5
  01cf0f8  subc 5, 5, 8
  01cf0fc  sradi 3, 6, 63
  01cf100  extsw 6, 7
  01cf104  and 3, 3, 5
  01cf108  addc 5, 7, 4
  01cf10c  subc 6, 6, 9
  01cf110  subc 5, 5, 7
  01cf114  sradi 6, 6, 63
  01cf118  addc 3, 8, 3
  01cf11c  and 5, 6, 5
  01cf120  sldi 8, 3, 4
  01cf124  addc 7, 7, 5
  01cf128  addc 8, 27, 8
  01cf12c  sldi 5, 7, 4
  01cf130  clrldi 6, 8, 32
  01cf134  addc 5, 27, 5
  01cf138  clrldi 5, 5, 32
  01cf13c  lfs 4, 20(6)
  01cf140  lfs 5, 16(6)
  01cf144  lfs 6, 24(6)
  01cf148  fsubs 4, 4, 1
  01cf14c  lfs 7, 20(5)
  01cf150  fsubs 5, 5, 2
  01cf154  lfs 8, 16(5)
  01cf158  fsubs 6, 6, 3
  01cf15c  fsubs 1, 7, 1
  01cf160  fsubs 2, 8, 2
  01cf164  lfs 7, 24(5)
  01cf168  fsubs 3, 7, 3
  01cf16c  fmuls 4, 4, 4
  01cf170  fmuls 1, 1, 1
  01cf174  lfs 7, 112(1)
  01cf178  lfs 8, 116(1)
  01cf17c  lfs 9, 120(1)
  01cf180  fmadds 4, 5, 5, 4
  01cf184  fmadds 1, 2, 2, 1
  01cf188  fmadds 2, 6, 6, 4
  01cf18c  fmadds 6, 3, 3, 1
  01cf190  lfs 3, 16(31)
  01cf194  lfs 4, 20(31)
  01cf198  lfs 5, 24(31)
  01cf19c  lhz 5, 180(30)
  01cf1a0  fsqrts 1, 2
  01cf1a4  fsqrts 2, 6
  01cf1a8  lbz 6, 208(30)
  01cf1ac  fcmpu 0, 2, 1
  01cf1b0  cror 6, 1, 2
  01cf1b4  bt 6, 0x1cf1c0
  01cf1b8  li 7, 1
  01cf1bc  b 0x1cf1f0
  01cf1c0  fcmpu 0, 2, 1
  01cf1c4  cmpwi 1, 6, 1
  01cf1c8  cror 2, 0, 2
  01cf1cc  bt 2, 0x1cf1dc
  01cf1d0  ori 3, 7, 0
  01cf1d4  li 7, -1
  01cf1d8  b 0x1cf1f0
  01cf1dc  bf 6, 0x1cf1e8
  01cf1e0  li 7, 1
  01cf1e4  b 0x1cf1f0
  01cf1e8  ori 3, 7, 0
  01cf1ec  li 7, -1
  01cf1f0  lis 8, 29
  01cf1f4  addi 9, 8, -4492
  01cf1f8  ori 8, 28, 0
  01cf1fc  lfs 6, 16(9)
  01cf200  sldi 9, 3, 4
  01cf204  addc 9, 27, 9
  01cf208  clrldi 9, 9, 32
  01cf20c  lfs 1, 20(9)
  01cf210  lfs 31, 16(9)
  01cf214  fsubs 10, 8, 1
  01cf218  lfs 2, 24(9)
  01cf21c  fsubs 11, 7, 31
  01cf220  fsubs 12, 9, 2
  01cf224  cmpw 1, 8, 4
  01cf228  fmuls 10, 10, 10
  01cf22c  fmadds 10, 11, 11, 10
  01cf230  fmadds 10, 12, 12, 10
  01cf234  fsqrts 10, 10
  01cf238  fcmpu 0, 10, 6
  01cf23c  crnand 2, 0, 4
  01cf240  bt 2, 0x1cf25c
  01cf244  addc 3, 7, 3
  01cf248  divw 9, 3, 4
  01cf24c  mullw 9, 9, 4
  01cf250  addic 8, 8, 1
  01cf254  subc 3, 3, 9
  01cf258  b 0x1cf200
  01cf25c  fsubs 1, 4, 1
  01cf260  extsh 5, 5
  01cf264  fsubs 3, 3, 31
  01cf268  subc 7, 4, 3
  01cf26c  subc 4, 4, 5
  01cf270  fsubs 2, 5, 2
  01cf274  subc 8, 3, 5
  01cf278  addc 7, 7, 5
  01cf27c  subc 9, 5, 3
  01cf280  addc 4, 4, 3
  01cf284  extsw 8, 8
  01cf288  extsw 7, 7
  01cf28c  extsw 9, 9
  01cf290  fmuls 1, 1, 1
  01cf294  extsw 4, 4
  01cf298  subc 10, 8, 7
  01cf29c  subc 4, 9, 4
  01cf2a0  li 8, 1
  01cf2a4  li 9, -1
  01cf2a8  sradi 7, 10, 63
  01cf2ac  subc 8, 8, 9
  01cf2b0  li 10, -1
  01cf2b4  li 11, 1
  01cf2b8  fmadds 1, 3, 3, 1
  01cf2bc  and 7, 7, 8
  01cf2c0  subc 8, 10, 11
  01cf2c4  sradi 4, 4, 63
  01cf2c8  extsw 3, 3
  01cf2cc  and 4, 4, 8
  01cf2d0  addc 7, 9, 7
  01cf2d4  subc 3, 5, 3
  01cf2d8  addc 27, 11, 4
  01cf2dc  sradi 3, 3, 63
  01cf2e0  fmadds 31, 2, 2, 1
  01cf2e4  subc 5, 7, 27
  01cf2e8  extsb 4, 6
  01cf2ec  and 3, 3, 5
  01cf2f0  addc 27, 27, 3
  01cf2f4  cmpw 27, 4
  01cf2f8  fsqrts 31, 31
  01cf2fc  bt 2, 0x1cf3d4
  01cf300  addic 3, 30, 210
  01cf304  bl 0x4fffb4
  01cf308  nop
  01cf30c  cmpwi 3, 0
  01cf310  lbz 6, 208(30)
  01cf314  bt 2, 0x1cf3d4
  01cf318  lis 4, 29
  01cf31c  li 3, 10
  01cf320  addi 4, 4, -4492
  01cf324  lis 5, 114
  01cf328  sth 3, 210(30)
  01cf32c  lfs 1, 20(4)
  01cf330  lfs 2, 24(4)
  01cf334  lfs 3, -3064(5)
  01cf338  lfs 4, 204(30)
  01cf33c  fmadds 1, 3, 1, 2
  01cf340  ori 3, 28, 0
  01cf344  fmuls 1, 4, 1
  01cf348  stfs 1, 204(30)
  01cf34c  lfs 2, 28(4)
  01cf350  lfs 3, -3064(5)
  01cf354  fmuls 2, 3, 2
  01cf358  fcmpu 0, 1, 2
  01cf35c  bt 0, 0x1cf36c
  01cf360  lbz 4, 49(31)
  01cf364  cmpwi 4, 0
  01cf368  bf 2, 0x1cf370
  01cf36c  li 3, 1
  01cf370  lfs 1, 20(31)
  01cf374  lfs 2, 132(26)
  01cf378  lfs 3, 16(31)
  01cf37c  fsubs 1, 1, 2
  01cf380  lfs 2, 128(26)
  01cf384  fsubs 2, 3, 2
  01cf388  lis 4, 29
  01cf38c  addi 4, 4, -4492
  01cf390  fmuls 1, 1, 1
  01cf394  fmadds 1, 2, 2, 1
  01cf398  lfs 2, 32(4)
  01cf39c  fsqrts 1, 1
  01cf3a0  fcmpu 0, 1, 2
  01cf3a4  cror 6, 1, 2
  01cf3a8  bt 6, 0x1cf3b0
  01cf3ac  li 28, 1
  01cf3b0  or 3, 3, 28
  01cf3b4  cmpwi 3, 0
  01cf3b8  bt 2, 0x1cf42c
  01cf3bc  lhz 3, 180(30)
  01cf3c0  lhz 4, 182(30)
  01cf3c4  stb 27, 208(30)
  01cf3c8  sth 4, 180(30)
  01cf3cc  sth 3, 182(30)
  01cf3d0  b 0x1cf42c
  01cf3d4  extsb 3, 6
  01cf3d8  cmpw 27, 3
  01cf3dc  bf 2, 0x1cf42c
  01cf3e0  lis 3, 29
  01cf3e4  lis 4, 114
  01cf3e8  lfs 1, 204(30)
  01cf3ec  addi 3, 3, -4492
  01cf3f0  lfs 2, 36(3)
  01cf3f4  lfs 3, 40(3)
  01cf3f8  lfs 4, -3064(4)
  01cf3fc  fmsubs 3, 31, 3, 1
  01cf400  lis 4, 114
  01cf404  fmuls 2, 4, 2
  01cf408  fmadds 1, 2, 3, 1
  01cf40c  stfs 1, 204(30)
  01cf410  lfs 2, 4(3)
  01cf414  lfs 31, -3052(4)
  01cf418  fmuls 31, 31, 2
  01cf41c  fcmpu 0, 1, 31
  01cf420  cror 6, 0, 2
  01cf424  bt 6, 0x1cf42c
  01cf428  stfs 31, 204(30)
  01cf42c  ori 3, 31, 0
  01cf430  ori 4, 30, 0
  01cf434  ori 5, 29, 0
  01cf438  bl 0x1ce738
  01cf43c  ori 28, 3, 0
  01cf440  ori 3, 28, 0
  01cf444  ld 0, 208(1)
  01cf448  mtlr 0
  01cf44c  lfd 31, 184(1)
  01cf450  ld 26, 136(1)
  01cf454  ld 27, 144(1)
  01cf458  ld 28, 152(1)
  01cf45c  ld 29, 160(1)
  01cf460  ld 30, 168(1)
  01cf464  ld 31, 176(1)
  01cf468  addi 1, 1, 192
  01cf46c  blr

UpdateMoby_111:   # 0x1cf4f0, 0x109c bytes
  01cf4f0  stdu 1, -448(1)
  01cf4f4  mflr 0
  01cf4f8  std 0, 464(1)
  01cf4fc  stfd 21, 360(1)
  01cf500  stfd 22, 368(1)
  01cf504  stfd 23, 376(1)
  01cf508  stfd 24, 384(1)
  01cf50c  stfd 25, 392(1)
  01cf510  stfd 26, 400(1)
  01cf514  stfd 27, 408(1)
  01cf518  stfd 28, 416(1)
  01cf51c  stfd 29, 424(1)
  01cf520  stfd 30, 432(1)
  01cf524  stfd 31, 440(1)
  01cf528  std 25, 304(1)
  01cf52c  std 31, 352(1)
  01cf530  ori 31, 3, 0
  01cf534  std 28, 328(1)
  01cf538  lis 25, 151
  01cf53c  std 24, 296(1)
  01cf540  li 28, 0
  01cf544  addic 25, 25, -25376
  01cf548  std 30, 344(1)
  01cf54c  ori 24, 28, 0
  01cf550  std 27, 320(1)
  01cf554  lwz 30, 120(31)
  01cf558  lbz 4, 32(31)
  01cf55c  std 29, 336(1)
  01cf560  ori 27, 24, 0
  01cf564  lwz 29, 5616(25)
  01cf568  cmpwi 1, 4, 4
  01cf56c  lwz 3, 160(30)
  01cf570  std 26, 312(1)
  01cf574  lhz 5, 50(31)
  01cf578  ori 26, 27, 0
  01cf57c  cmpwi 3, -1
  01cf580  lbz 6, 48(31)
  01cf584  cmpwi 6, 4, 3
  01cf588  cmpwi 7, 4, 2
  01cf58c  bt 2, 0x1cf5a4
  01cf590  lis 7, 165
  01cf594  slwi 8, 3, 2
  01cf598  addic 7, 7, 7136
  01cf59c  extsw 8, 8
  01cf5a0  lwzx 26, 7, 8
  01cf5a4  bt 6, 0x1d03d8
  01cf5a8  bt 26, 0x1d0124
  01cf5ac  bt 30, 0x1cf8d0
  01cf5b0  cmpwi 4, 1
  01cf5b4  bt 2, 0x1cf718
  01cf5b8  cmpwi 4, 0
  01cf5bc  bf 2, 0x1d0450
  01cf5c0  cmpwi 5, 0
  01cf5c4  bf 2, 0x1cf5e0
  01cf5c8  cmpwi 6, 0
  01cf5cc  bf 2, 0x1cf5e0
  01cf5d0  ori 3, 31, 0
  01cf5d4  bl 0xefb38
  01cf5d8  nop
  01cf5dc  b 0x1d0530
  01cf5e0  cmpwi 26, 0
  01cf5e4  bf 2, 0x1cf610
  01cf5e8  lis 3, 101
  01cf5ec  lhz 4, 178(31)
  01cf5f0  addic 3, 3, 18064
  01cf5f4  extsh 4, 4
  01cf5f8  bl 0x5cd098
  01cf5fc  nop
  01cf600  ori 3, 31, 0
  01cf604  bl 0xefb38
  01cf608  nop
  01cf60c  b 0x1d0530
  01cf610  lis 4, 165
  01cf614  slwi 3, 3, 2
  01cf618  lwz 6, 160(30)
  01cf61c  addic 4, 4, 7136
  01cf620  extsw 3, 3
  01cf624  slwi 6, 6, 2
  01cf628  li 5, 1
  01cf62c  extsw 6, 6
  01cf630  vspltisw 2, -1
  01cf634  lwzx 3, 4, 3
  01cf638  vslw 2, 2, 2
  01cf63c  lfs 1, 16(3)
  01cf640  stfs 1, 16(31)
  01cf644  lfs 1, 20(3)
  01cf648  stfs 1, 20(31)
  01cf64c  lfs 1, 24(3)
  01cf650  lwzx 4, 4, 6
  01cf654  stfs 1, 24(31)
  01cf658  lfs 1, 28(3)
  01cf65c  sth 5, 180(30)
  01cf660  li 6, -3056
  01cf664  stfs 1, 28(31)
  01cf668  lwz 3, 0(4)
  01cf66c  lis 4, 114
  01cf670  addic 3, 3, -1
  01cf674  sth 3, 182(30)
  01cf678  lfs 1, 32(26)
  01cf67c  lis 3, 29
  01cf680  stfs 1, 144(30)
  01cf684  lfs 2, 36(26)
  01cf688  addi 3, 3, -2960
  01cf68c  stfs 2, 148(30)
  01cf690  lfs 2, 40(26)
  01cf694  stfs 2, 152(30)
  01cf698  lfs 2, 44(26)
  01cf69c  stfs 2, 156(30)
  01cf6a0  stfs 1, 16(31)
  01cf6a4  lfs 1, 148(30)
  01cf6a8  stfs 1, 20(31)
  01cf6ac  lfs 1, 152(30)
  01cf6b0  stfs 1, 24(31)
  01cf6b4  lfs 1, 156(30)
  01cf6b8  stfs 1, 28(31)
  01cf6bc  <unknown>
  01cf6c0  <unknown>
  01cf6c4  vspltw 3, 3, 0
  01cf6c8  li 3, 168
  01cf6cc  lhz 4, 52(31)
  01cf6d0  li 6, 255
  01cf6d4  vmaddfp 2, 4, 3, 2
  01cf6d8  ori 4, 4, 1
  01cf6dc  vspltisw 3, 5
  01cf6e0  rlwimi 4, 28, 0, 19, 19
  01cf6e4  vctsxs 2, 2, 0
  01cf6e8  vadduwm 2, 2, 3
  01cf6ec  vspltw 2, 2, 0
  01cf6f0  stvewx 2, 3, 30
  01cf6f4  stb 5, 32(31)
  01cf6f8  stb 28, 188(31)
  01cf6fc  stb 6, 48(31)
  01cf700  sth 6, 50(31)
  01cf704  stw 28, 148(31)
  01cf708  stb 28, 49(31)
  01cf70c  sth 4, 52(31)
  01cf710  stb 5, 208(30)
  01cf714  b 0x1d0450
  01cf718  lwz 3, 188(30)
  01cf71c  cmpwi 3, -1
  01cf720  bt 2, 0x1cf760
  01cf724  lis 4, 164
  01cf728  slwi 3, 3, 8
  01cf72c  lwz 4, -28512(4)
  01cf730  addc 3, 4, 3
  01cf734  cmpwi 3, 0
  01cf738  bt 2, 0x1cf760
  01cf73c  clrldi 3, 3, 32
  01cf740  lbz 4, 32(3)
  01cf744  cmpwi 1, 4, 253
  01cf748  cmpwi 4, 254
  01cf74c  cror 2, 2, 6
  01cf750  bt 2, 0x1cf760
  01cf754  lbz 3, 188(3)
  01cf758  cmpwi 3, 4
  01cf75c  bf 2, 0x1d0450
  01cf760  lis 3, 149
  01cf764  addic 3, 3, 5056
  01cf768  lis 4, 29
  01cf76c  lfs 1, 852(3)
  01cf770  lfs 2, 848(3)
  01cf774  fmuls 1, 1, 1
  01cf778  lfs 3, 856(3)
  01cf77c  addi 4, 4, -2960
  01cf780  fmadds 1, 2, 2, 1
  01cf784  fmadds 1, 3, 3, 1
  01cf788  lfs 3, 4(4)
  01cf78c  fsqrts 1, 1
  01cf790  fcmpu 0, 1, 3
  01cf794  bf 2, 0x1cf7cc
  01cf798  fmr 4, 3
  01cf79c  stfs 2, 192(1)
  01cf7a0  lfs 1, 852(3)
  01cf7a4  stfs 1, 196(1)
  01cf7a8  lfs 2, 856(3)
  01cf7ac  stfs 2, 200(1)
  01cf7b0  lfs 5, 860(3)
  01cf7b4  stw 28, 200(1)
  01cf7b8  fmr 1, 4
  01cf7bc  stw 28, 196(1)
  01cf7c0  stw 28, 192(1)
  01cf7c4  fmr 2, 1
  01cf7c8  b 0x1cf800
  01cf7cc  lis 4, 29
  01cf7d0  addi 4, 4, -2960
  01cf7d4  lfs 4, 8(4)
  01cf7d8  fdivs 4, 4, 1
  01cf7dc  lfs 1, 852(3)
  01cf7e0  lfs 6, 856(3)
  01cf7e4  lfs 5, 860(3)
  01cf7e8  fmuls 2, 2, 4
  01cf7ec  fmuls 1, 1, 4
  01cf7f0  fmuls 4, 6, 4
  01cf7f4  stfs 2, 192(1)
  01cf7f8  stfs 1, 196(1)
  01cf7fc  stfs 4, 200(1)
  01cf800  fmr 6, 1
  01cf804  ori 5, 3, 0
  01cf808  fmr 1, 3
  01cf80c  addic 3, 1, 192
  01cf810  ori 4, 26, 0
  01cf814  lfs 3, 320(5)
  01cf818  lfs 7, 324(5)
  01cf81c  fsubs 2, 3, 2
  01cf820  lfs 3, 328(5)
  01cf824  fsubs 6, 7, 6
  01cf828  stfs 5, 204(1)
  01cf82c  fsubs 3, 3, 4
  01cf830  lfs 4, 332(5)
  01cf834  stfs 4, 204(1)
  01cf838  stfs 2, 192(1)
  01cf83c  stfs 6, 196(1)
  01cf840  stfs 3, 200(1)
  01cf844  bl 0x1367d0
  01cf848  nop
  01cf84c  extsh 4, 3
  01cf850  sth 3, 180(30)
  01cf854  sth 3, 182(30)
  01cf858  sldi 3, 4, 4
  01cf85c  addc 3, 26, 3
  01cf860  li 5, 2
  01cf864  clrldi 3, 3, 32
  01cf868  lfs 1, 16(3)
  01cf86c  stfs 1, 144(30)
  01cf870  lfs 2, 20(3)
  01cf874  stfs 2, 148(30)
  01cf878  lfs 2, 24(3)
  01cf87c  stfs 2, 152(30)
  01cf880  lfs 2, 28(3)
  01cf884  li 3, 1
  01cf888  stfs 2, 156(30)
  01cf88c  stfs 1, 16(31)
  01cf890  lwz 4, 36(31)
  01cf894  lhz 6, 52(31)
  01cf898  lfs 1, 148(30)
  01cf89c  rlwinm 6, 6, 0, 0, 30
  01cf8a0  stfs 1, 20(31)
  01cf8a4  lfs 1, 152(30)
  01cf8a8  ori 6, 6, 4096
  01cf8ac  stfs 1, 24(31)
  01cf8b0  lfs 1, 156(30)
  01cf8b4  stfs 1, 28(31)
  01cf8b8  lwz 4, 16(4)
  01cf8bc  stb 3, 49(31)
  01cf8c0  stw 4, 148(31)
  01cf8c4  sth 6, 52(31)
  01cf8c8  stb 5, 32(31)
  01cf8cc  b 0x1d0450
  01cf8d0  addic 5, 30, 32
  01cf8d4  ori 3, 31, 0
  01cf8d8  ori 4, 30, 0
  01cf8dc  bl 0x1ce130
  01cf8e0  lfs 31, 128(25)
  01cf8e4  cmpwi 29, 0
  01cf8e8  lfs 30, 132(25)
  01cf8ec  lfs 29, 136(25)
  01cf8f0  lfs 28, 140(25)
  01cf8f4  bt 2, 0x1cf990
  01cf8f8  lbz 3, 32(29)
  01cf8fc  cmpwi 1, 3, 253
  01cf900  cmpwi 3, 254
  01cf904  cror 2, 2, 6
  01cf908  bt 2, 0x1cf990
  01cf90c  lwz 3, 5616(25)
  01cf910  lfs 1, 20(31)
  01cf914  ori 27, 24, 0
  01cf918  lfs 30, 20(3)
  01cf91c  lfs 31, 16(3)
  01cf920  fsubs 1, 1, 30
  01cf924  lfs 29, 24(3)
  01cf928  lfs 2, 16(31)
  01cf92c  lfs 3, 24(31)
  01cf930  fsubs 2, 2, 31
  01cf934  fsubs 3, 3, 29
  01cf938  lwz 28, 120(29)
  01cf93c  lfs 28, 28(3)
  01cf940  lwz 3, 8324(25)
  01cf944  cmpwi 3, 50
  01cf948  fmuls 1, 1, 1
  01cf94c  fmadds 1, 2, 2, 1
  01cf950  fmadds 1, 3, 3, 1
  01cf954  fsqrts 1, 1
  01cf958  bf 2, 0x1cf98c
  01cf95c  lhz 3, 166(29)
  01cf960  cmpwi 3, 69
  01cf964  cmpwi 1, 3, 1242
  01cf968  bt 2, 0x1cf970
  01cf96c  bf 6, 0x1cf98c
  01cf970  lis 3, 29
  01cf974  addi 3, 3, -2960
  01cf978  lfs 2, 12(3)
  01cf97c  fcmpu 0, 1, 2
  01cf980  cror 6, 1, 2
  01cf984  bt 6, 0x1cf98c
  01cf988  li 27, 1
  01cf98c  b 0x1cf990
  01cf990  lbz 3, 49(31)
  01cf994  cmpwi 1, 27, 0
  01cf998  cmpwi 3, 0
  01cf99c  bf 2, 0x1cf9b0
  01cf9a0  lwz 3, 168(30)
  01cf9a4  addic 3, 3, 1
  01cf9a8  stw 3, 168(30)
  01cf9ac  b 0x1cf9b8
  01cf9b0  bt 6, 0x1cf9b8
  01cf9b4  stw 24, 168(30)
  01cf9b8  lwz 3, 188(30)
  01cf9bc  cmpwi 3, -1
  01cf9c0  bt 2, 0x1cfa14
  01cf9c4  lis 4, 164
  01cf9c8  slwi 3, 3, 8
  01cf9cc  lwz 4, -28512(4)
  01cf9d0  addc 3, 4, 3
  01cf9d4  cmpwi 3, 0
  01cf9d8  bt 2, 0x1cfa14
  01cf9dc  clrldi 4, 3, 32
  01cf9e0  lbz 3, 32(4)
  01cf9e4  cmpwi 1, 3, 253
  01cf9e8  cmpwi 3, 254
  01cf9ec  cror 2, 2, 6
  01cf9f0  bt 2, 0x1cfa14
  01cf9f4  cmpwi 4, 0
  01cf9f8  lwz 26, 120(4)
  01cf9fc  bt 2, 0x1cfa14
  01cfa00  cmpwi 3, 254
  01cfa04  bt 2, 0x1cfa14
  01cfa08  bt 6, 0x1cfa14
  01cfa0c  cmpwi 3, 1
  01cfa10  bf 2, 0x1cfa34
  01cfa14  lhz 4, 52(31)
  01cfa18  li 3, 4
  01cfa1c  stw 24, 148(31)
  01cfa20  ori 4, 4, 65
  01cfa24  rlwimi 4, 24, 0, 19, 19
  01cfa28  stb 3, 32(31)
  01cfa2c  sth 4, 52(31)
  01cfa30  b 0x1d0530
  01cfa34  lwz 3, 212(30)
  01cfa38  cmpwi 3, -1
  01cfa3c  bt 2, 0x1cfa74
  01cfa40  sldi 4, 3, 7
  01cfa44  sldi 3, 3, 4
  01cfa48  lis 5, 150
  01cfa4c  subc 3, 4, 3
  01cfa50  addic 5, 5, 14176
  01cfa54  extsw 3, 3
  01cfa58  addc 3, 5, 3
  01cfa5c  lwz 4, 136(3)
  01cfa60  cmpw 4, 31
  01cfa64  bf 2, 0x1cfa74
  01cfa68  lbz 3, 116(3)
  01cfa6c  cmpwi 3, 0
  01cfa70  bf 2, 0x1cfa94
  01cfa74  li 6, -1
  01cfa78  li 3, 1
  01cfa7c  li 4, 4
  01cfa80  ori 5, 31, 0
  01cfa84  stw 6, 212(30)
  01cfa88  bl 0x15d12c
  01cfa8c  nop
  01cfa90  stw 3, 212(30)
  01cfa94  ori 3, 31, 0
  01cfa98  ori 4, 30, 0
  01cfa9c  li 5, 1
  01cfaa0  bl 0x1ceea0
  01cfaa4  lbz 3, 188(31)
  01cfaa8  cmpwi 3, 0
  01cfaac  bt 1, 0x1cfac0
  01cfab0  cmpwi 3, -1
  01cfab4  cmpwi 1, 28, 0
  01cfab8  bf 1, 0x1d0450
  01cfabc  b 0x1cfad4
  01cfac0  cmpwi 3, 1
  01cfac4  bf 1, 0x1cfb58
  01cfac8  cmpwi 3, 2
  01cfacc  bf 1, 0x1d0108
  01cfad0  b 0x1d0450
  01cfad4  bt 6, 0x1d0450
  01cfad8  lbz 3, 32(29)
  01cfadc  cmpwi 3, 4
  01cfae0  bf 2, 0x1d0450
  01cfae4  lbz 3, 49(31)
  01cfae8  cmpwi 1, 27, 0
  01cfaec  cmpwi 3, 0
  01cfaf0  cror 2, 2, 6
  01cfaf4  bt 2, 0x1d0450
  01cfaf8  lbz 3, 271(26)
  01cfafc  cmpwi 3, 3
  01cfb00  bf 0, 0x1d0450
  01cfb04  lis 3, 29
  01cfb08  li 4, 16
  01cfb0c  vspltisw 2, -1
  01cfb10  addi 3, 3, -2960
  01cfb14  lis 5, 114
  01cfb18  li 6, -3056
  01cfb1c  vslw 2, 2, 2
  01cfb20  <unknown>
  01cfb24  li 3, 184
  01cfb28  vspltw 3, 3, 0
  01cfb2c  <unknown>
  01cfb30  lis 4, 16256
  01cfb34  li 5, 1
  01cfb38  vmaddfp 2, 4, 3, 2
  01cfb3c  vctsxs 2, 2, 0
  01cfb40  vspltw 2, 2, 0
  01cfb44  stvewx 2, 3, 30
  01cfb48  stw 24, 168(30)
  01cfb4c  stw 4, 172(30)
  01cfb50  stb 5, 188(31)
  01cfb54  b 0x1d0450
  01cfb58  lbz 3, 271(26)
  01cfb5c  addic 3, 3, 1
  01cfb60  clrlwi 4, 3, 24
  01cfb64  cmpwi 4, 3
  01cfb68  stb 3, 271(26)
  01cfb6c  bt 1, 0x1d0450
  01cfb70  lbz 3, 49(31)
  01cfb74  cmpwi 3, 0
  01cfb78  bf 2, 0x1cfb8c
  01cfb7c  lwz 3, 168(30)
  01cfb80  addic 3, 3, 1
  01cfb84  stw 3, 168(30)
  01cfb88  lbz 3, 49(31)
  01cfb8c  cmpwi 1, 27, 0
  01cfb90  cmpwi 3, 0
  01cfb94  cror 2, 2, 6
  01cfb98  bt 2, 0x1cfbcc
  01cfb9c  lis 3, 29
  01cfba0  lis 4, 114
  01cfba4  addi 3, 3, -2960
  01cfba8  lfs 1, 0(3)
  01cfbac  lfs 2, -3056(4)
  01cfbb0  lwz 3, 168(30)
  01cfbb4  fmuls 1, 2, 1
  01cfbb8  fctiwz 1, 1
  01cfbbc  stfd 1, 272(1)
  01cfbc0  lwz 4, 276(1)
  01cfbc4  cmpw 3, 4
  01cfbc8  bt 0, 0x1cfc10
  01cfbcc  lis 3, 29
  01cfbd0  li 4, 20
  01cfbd4  vspltisw 2, -1
  01cfbd8  addi 3, 3, -2960
  01cfbdc  lis 5, 114
  01cfbe0  li 6, -3056
  01cfbe4  vslw 2, 2, 2
  01cfbe8  <unknown>
  01cfbec  li 3, 184
  01cfbf0  vspltw 3, 3, 0
  01cfbf4  li 4, 2
  01cfbf8  <unknown>
  01cfbfc  vmaddfp 2, 4, 3, 2
  01cfc00  vctsxs 2, 2, 0
  01cfc04  vspltw 2, 2, 0
  01cfc08  stvewx 2, 3, 30
  01cfc0c  stb 4, 188(31)
  01cfc10  addic 3, 30, 184
  01cfc14  bl 0x4fff60
  01cfc18  nop
  01cfc1c  cmpwi 3, 0
  01cfc20  bt 2, 0x1cfc68
  01cfc24  lis 3, 29
  01cfc28  li 4, 24
  01cfc2c  vspltisw 2, -1
  01cfc30  addi 3, 3, -2960
  01cfc34  lis 5, 114
  01cfc38  li 6, -3056
  01cfc3c  vslw 2, 2, 2
  01cfc40  <unknown>
  01cfc44  li 3, 184
  01cfc48  vspltw 3, 3, 0
  01cfc4c  li 4, 2
  01cfc50  <unknown>
  01cfc54  vmaddfp 2, 4, 3, 2
  01cfc58  vctsxs 2, 2, 0
  01cfc5c  vspltw 2, 2, 0
  01cfc60  stvewx 2, 3, 30
  01cfc64  stb 4, 188(31)
  01cfc68  addic 3, 30, 164
  01cfc6c  bl 0x4fff60
  01cfc70  nop
  01cfc74  cmpwi 3, 0
  01cfc78  bt 2, 0x1d0450
  01cfc7c  lis 3, 161
  01cfc80  lis 4, 16230
  01cfc84  ori 4, 4, 26214
  01cfc88  lwz 5, 1812(3)
  01cfc8c  lfs 1, 1812(3)
  01cfc90  srawi 6, 5, 31
  01cfc94  srwi 3, 6, 1
  01cfc98  xor 3, 3, 5
  01cfc9c  subc 3, 3, 6
  01cfca0  cmpw 3, 4
  01cfca4  bf 0, 0x1d0450
  01cfca8  lis 3, 161
  01cfcac  lis 4, 16230
  01cfcb0  ori 4, 4, 26214
  01cfcb4  lwz 5, 1816(3)
  01cfcb8  lfs 2, 1816(3)
  01cfcbc  srawi 6, 5, 31
  01cfcc0  srwi 3, 6, 1
  01cfcc4  xor 3, 3, 5
  01cfcc8  subc 3, 3, 6
  01cfccc  cmpw 3, 4
  01cfcd0  bf 0, 0x1d0450
  01cfcd4  lis 3, 29
  01cfcd8  lis 4, 114
  01cfcdc  fadds 1, 2, 1
  01cfce0  addi 3, 3, -2960
  01cfce4  lfs 3, 28(3)
  01cfce8  lfs 4, -3056(4)
  01cfcec  fmuls 2, 4, 3
  01cfcf0  fctiwz 2, 2
  01cfcf4  stfd 2, 272(1)
  01cfcf8  lfs 2, 32(3)
  01cfcfc  lwz 29, 276(1)
  01cfd00  fmuls 1, 1, 2
  01cfd04  bl 0x502758
  01cfd08  nop
  01cfd0c  addc 3, 29, 3
  01cfd10  cmpwi 28, 0
  01cfd14  stw 3, 164(30)
  01cfd18  bt 2, 0x1d0048
  01cfd1c  lis 3, 29
  01cfd20  lfs 1, 24(28)
  01cfd24  addi 29, 3, -2960
  01cfd28  lfs 2, 16(28)
  01cfd2c  fmuls 4, 1, 2
  01cfd30  lfs 3, 36(29)
  01cfd34  lfs 5, 176(30)
  01cfd38  lfs 6, 20(28)
  01cfd3c  fsubs 10, 3, 5
  01cfd40  fmuls 1, 6, 1
  01cfd44  lfs 7, 40(29)
  01cfd48  fmuls 8, 6, 6
  01cfd4c  lfs 9, 64(29)
  01cfd50  fsubs 13, 7, 5
  01cfd54  fadds 9, 5, 9
  01cfd58  fmuls 11, 4, 4
  01cfd5c  fsub 0, 5, 10
  01cfd60  fneg 12, 1
  01cfd64  fneg 8, 8
  01cfd68  fsubs 3, 3, 9
  01cfd6c  fneg 11, 11
  01cfd70  fsubs 7, 7, 9
  01cfd74  fsel 5, 0, 10, 5
  01cfd78  fmsubs 27, 2, 2, 8
  01cfd7c  fneg 8, 8
  01cfd80  fneg 10, 11
  01cfd84  lfs 11, 44(29)
  01cfd88  fsub 0, 13, 5
  01cfd8c  fmadds 8, 2, 2, 8
  01cfd90  fmadds 10, 12, 12, 10
  01cfd94  fsub 12, 9, 3
  01cfd98  fsel 5, 0, 13, 5
  01cfd9c  fmadds 10, 27, 27, 10
  01cfda0  fsel 3, 12, 3, 9
  01cfda4  lfs 9, 48(29)
  01cfda8  lfs 13, 52(29)
  01cfdac  fmuls 12, 5, 5
  01cfdb0  lfs 0, 56(29)
  01cfdb4  lfs 26, 60(29)
  01cfdb8  lfs 25, 172(30)
  01cfdbc  fsqrts 10, 10
  01cfdc0  lfs 24, 4(29)
  01cfdc4  stfs 28, 220(1)
  01cfdc8  addic 27, 1, 208
  01cfdcc  ori 3, 27, 0
  01cfdd0  fmuls 23, 12, 5
  01cfdd4  fsub 22, 7, 3
  01cfdd8  fmuls 25, 25, 26
  01cfddc  fmuls 21, 12, 23
  01cfde0  fmadds 5, 23, 11, 5
  01cfde4  fsel 3, 22, 7, 3
  01cfde8  fsqrts 7, 8
  01cfdec  fmuls 8, 12, 21
  01cfdf0  fmadds 5, 21, 9, 5
  01cfdf4  fmuls 23, 3, 3
  01cfdf8  fmuls 12, 12, 8
  01cfdfc  fmadds 5, 8, 13, 5
  01cfe00  fmuls 8, 23, 3
  01cfe04  fmadds 5, 12, 0, 5
  01cfe08  fmuls 12, 23, 8
  01cfe0c  fmadds 3, 8, 11, 3
  01cfe10  fsub 11, 24, 10
  01cfe14  fmuls 5, 25, 5
  01cfe18  fmuls 8, 23, 12
  01cfe1c  fmadds 3, 12, 9, 3
  01cfe20  fsub 12, 10, 24
  01cfe24  fdivs 5, 5, 10
  01cfe28  fmuls 9, 23, 8
  01cfe2c  fmadds 3, 8, 13, 3
  01cfe30  fsub 8, 24, 10
  01cfe34  fsub 13, 10, 24
  01cfe38  fsub 28, 24, 7
  01cfe3c  fmadds 3, 9, 0, 3
  01cfe40  fsub 9, 24, 10
  01cfe44  fsub 10, 10, 24
  01cfe48  fsub 0, 24, 7
  01cfe4c  fmuls 3, 25, 3
  01cfe50  fdivs 3, 3, 7
  01cfe54  fmuls 1, 1, 5
  01cfe58  fmuls 4, 4, 5
  01cfe5c  fmuls 5, 27, 5
  01cfe60  fsub 27, 7, 24
  01cfe64  fsub 7, 7, 24
  01cfe68  fneg 1, 1
  01cfe6c  fneg 4, 4
  01cfe70  fsel 11, 11, 24, 5
  01cfe74  fsel 8, 8, 24, 1
  01cfe78  fsel 9, 9, 24, 4
  01cfe7c  fsel 5, 10, 11, 5
  01cfe80  fsel 1, 12, 8, 1
  01cfe84  fsel 4, 13, 9, 4
  01cfe88  fadds 5, 29, 5
  01cfe8c  fadds 1, 30, 1
  01cfe90  fadds 4, 31, 4
  01cfe94  stfs 5, 216(1)
  01cfe98  fmuls 6, 6, 3
  01cfe9c  fmuls 2, 2, 3
  01cfea0  fneg 3, 6
  01cfea4  fsel 6, 0, 24, 2
  01cfea8  fsel 5, 28, 24, 3
  01cfeac  fsel 2, 27, 6, 2
  01cfeb0  fsel 3, 7, 5, 3
  01cfeb4  fadds 1, 1, 2
  01cfeb8  fadds 2, 4, 3
  01cfebc  stfs 1, 212(1)
  01cfec0  stfs 2, 208(1)
  01cfec4  lfs 1, 68(29)
  01cfec8  bl 0x110950
  01cfecc  nop
  01cfed0  lfs 1, 20(31)
  01cfed4  lfs 2, 132(25)
  01cfed8  lfs 4, 16(31)
  01cfedc  fsubs 2, 1, 2
  01cfee0  lfs 3, 128(25)
  01cfee4  fsubs 3, 4, 3
  01cfee8  lis 3, 114
  01cfeec  fmuls 2, 2, 2
  01cfef0  fmadds 2, 3, 3, 2
  01cfef4  lfs 3, 72(29)
  01cfef8  lfs 5, 20(28)
  01cfefc  lfs 6, 100(28)
  01cff00  fmuls 10, 5, 5
  01cff04  lfs 7, -3052(3)
  01cff08  lfs 8, 16(28)
  01cff0c  fmadds 11, 7, 3, 6
  01cff10  lfs 9, 24(28)
  01cff14  fsqrts 2, 2
  01cff18  lfs 12, 212(1)
  01cff1c  addic 5, 1, 224
  01cff20  ori 3, 31, 0
  01cff24  ori 4, 27, 0
  01cff28  fmadds 10, 8, 8, 10
  01cff2c  fmadds 10, 9, 9, 10
  01cff30  fsqrts 10, 10
  01cff34  fdivs 2, 2, 11
  01cff38  lfs 11, 208(1)
  01cff3c  lfs 13, 216(1)
  01cff40  lfs 0, 24(31)
  01cff44  lfs 31, 76(29)
  01cff48  fsub 30, 24, 10
  01cff4c  fsub 29, 10, 24
  01cff50  fsub 28, 24, 10
  01cff54  fsub 27, 24, 10
  01cff58  fsub 25, 10, 24
  01cff5c  fsub 23, 10, 24
  01cff60  fmuls 2, 6, 2
  01cff64  fdivs 6, 2, 10
  01cff68  lfs 2, 220(1)
  01cff6c  stfs 2, 236(1)
  01cff70  fmuls 2, 7, 3
  01cff74  fmr 3, 26
  01cff78  fmuls 5, 5, 6
  01cff7c  fmuls 7, 8, 6
  01cff80  fmuls 6, 9, 6
  01cff84  fsel 8, 30, 24, 5
  01cff88  fsel 9, 28, 24, 7
  01cff8c  fsel 10, 27, 24, 6
  01cff90  fsel 5, 29, 8, 5
  01cff94  fsel 7, 25, 9, 7
  01cff98  fsel 6, 23, 10, 6
  01cff9c  fadds 5, 12, 5
  01cffa0  fadds 7, 11, 7
  01cffa4  fadds 6, 13, 6
  01cffa8  fsubs 5, 5, 1
  01cffac  fsubs 7, 7, 4
  01cffb0  fsubs 6, 6, 0
  01cffb4  fmuls 8, 5, 5
  01cffb8  fmadds 8, 7, 7, 8
  01cffbc  fmadds 8, 6, 6, 8
  01cffc0  fsqrts 8, 8
  01cffc4  fdivs 9, 31, 8
  01cffc8  fsub 10, 24, 8
  01cffcc  fsub 11, 24, 8
  01cffd0  fsub 12, 24, 8
  01cffd4  fsub 13, 8, 24
  01cffd8  fsub 31, 8, 24
  01cffdc  fsub 8, 8, 24
  01cffe0  fmuls 30, 6, 9
  01cffe4  fmuls 29, 5, 9
  01cffe8  fmuls 9, 7, 9
  01cffec  fsel 10, 10, 24, 30
  01cfff0  fsel 11, 11, 24, 29
  01cfff4  fsel 12, 12, 24, 9
  01cfff8  fsel 10, 13, 10, 30
  01cfffc  fsel 11, 31, 11, 29
  01d0000  fsel 8, 8, 12, 9
  01d0004  fadds 9, 10, 0
  01d0008  fadds 1, 11, 1
  01d000c  fadds 4, 8, 4
  01d0010  stfs 9, 232(1)
  01d0014  stfs 1, 228(1)
  01d0018  stfs 4, 224(1)
  01d001c  lfs 1, 80(29)
  01d0020  stfs 6, 216(1)
  01d0024  stfs 5, 212(1)
  01d0028  stfs 7, 208(1)
  01d002c  bl 0x187e00
  01d0030  nop
  01d0034  li 3, 0
  01d0038  li 4, 0
  01d003c  ori 5, 31, 0
  01d0040  bl 0x15d12c
  01d0044  nop
  01d0048  lis 3, 29
  01d004c  lfs 31, 172(30)
  01d0050  addi 29, 3, -2960
  01d0054  lfs 1, 84(29)
  01d0058  lfs 2, 88(29)
  01d005c  bl 0xfcbe8
  01d0060  nop
  01d0064  lfs 2, 92(29)
  01d0068  lis 3, 114
  01d006c  lwz 4, 176(30)
  01d0070  fsubs 1, 1, 2
  01d0074  lis 5, 16329
  01d0078  ori 5, 5, 4059
  01d007c  lfs 3, -3064(3)
  01d0080  srawi 3, 4, 31
  01d0084  lfs 30, 176(30)
  01d0088  srwi 6, 3, 1
  01d008c  xor 4, 6, 4
  01d0090  fmadds 1, 1, 3, 2
  01d0094  subc 3, 4, 3
  01d0098  cmpw 3, 5
  01d009c  fmuls 1, 31, 1
  01d00a0  stfs 1, 172(30)
  01d00a4  lfs 31, 96(29)
  01d00a8  bf 1, 0x1d00d8
  01d00ac  lis 3, 29
  01d00b0  addi 3, 3, -2960
  01d00b4  lfs 1, 100(3)
  01d00b8  lfs 2, 8(3)
  01d00bc  bl 0xfcbe8
  01d00c0  nop
  01d00c4  fmuls 31, 1, 31
  01d00c8  lis 3, 114
  01d00cc  lfs 1, -3052(3)
  01d00d0  fnmsubs 31, 31, 1, 30
  01d00d4  b 0x1d0100
  01d00d8  lis 3, 29
  01d00dc  addi 3, 3, -2960
  01d00e0  lfs 1, 100(3)
  01d00e4  lfs 2, 8(3)
  01d00e8  bl 0xfcbe8
  01d00ec  nop
  01d00f0  fmuls 31, 1, 31
  01d00f4  lis 3, 114
  01d00f8  lfs 1, -3052(3)
  01d00fc  fmadds 31, 31, 1, 30
  01d0100  stfs 31, 176(30)
  01d0104  b 0x1d0450
  01d0108  addic 3, 30, 184
  01d010c  bl 0x4fff60
  01d0110  nop
  01d0114  cmpwi 3, 0
  01d0118  bt 2, 0x1d0450
  01d011c  stb 24, 188(31)
  01d0120  b 0x1d0450
  01d0124  lwz 3, 212(30)
  01d0128  cmpwi 1, 3, -1
  01d012c  bt 6, 0x1d017c
  01d0130  bt 6, 0x1d0174
  01d0134  sldi 4, 3, 7
  01d0138  sldi 6, 3, 4
  01d013c  lis 5, 150
  01d0140  subc 4, 4, 6
  01d0144  addic 5, 5, 14176
  01d0148  extsw 4, 4
  01d014c  addc 4, 5, 4
  01d0150  lwz 5, 136(4)
  01d0154  cmpw 5, 31
  01d0158  bf 2, 0x1d0174
  01d015c  lbz 4, 116(4)
  01d0160  cmpwi 4, 0
  01d0164  bt 2, 0x1d0174
  01d0168  extsw 3, 3
  01d016c  bl 0x15cdb0
  01d0170  nop
  01d0174  li 3, -1
  01d0178  stw 3, 212(30)
  01d017c  lis 3, 149
  01d0180  lfs 1, 16(31)
  01d0184  lis 4, 29
  01d0188  addic 3, 3, 5056
  01d018c  lfs 2, 20(31)
  01d0190  addi 29, 4, -2960
  01d0194  li 7, -1
  01d0198  li 6, 1
  01d019c  lfs 3, 320(3)
  01d01a0  lfs 4, 324(3)
  01d01a4  addic 4, 1, 240
  01d01a8  fsubs 1, 3, 1
  01d01ac  li 5, 0
  01d01b0  lfs 3, 328(3)
  01d01b4  fsubs 2, 4, 2
  01d01b8  lfs 4, 24(31)
  01d01bc  li 8, 5
  01d01c0  li 9, 3
  01d01c4  fsubs 3, 3, 4
  01d01c8  lfs 4, 332(3)
  01d01cc  li 10, 10
  01d01d0  ori 3, 31, 0
  01d01d4  stfs 4, 252(1)
  01d01d8  stfs 1, 240(1)
  01d01dc  stfs 2, 244(1)
  01d01e0  stfs 3, 248(1)
  01d01e4  lfs 31, 4(29)
  01d01e8  lfs 30, 104(29)
  01d01ec  lfs 4, 108(29)
  01d01f0  lfs 5, 112(29)
  01d01f4  fmr 1, 31
  01d01f8  lfs 6, 116(29)
  01d01fc  fmr 2, 31
  01d0200  lfs 7, 100(29)
  01d0204  fmr 3, 30
  01d0208  std 7, 144(1)
  01d020c  std 28, 160(1)
  01d0210  std 6, 168(1)
  01d0214  std 7, 176(1)
  01d0218  std 28, 184(1)
  01d021c  bl 0x10e030
  01d0220  nop
  01d0224  lfs 1, 244(1)
  01d0228  lfs 2, 240(1)
  01d022c  fmuls 3, 1, 1
  01d0230  lfs 4, 248(1)
  01d0234  lfs 5, 16(31)
  01d0238  lfs 6, 20(31)
  01d023c  lfs 7, 24(31)
  01d0240  lfs 8, 28(31)
  01d0244  fmadds 3, 2, 2, 3
  01d0248  stfs 8, 268(1)
  01d024c  fmadds 3, 4, 4, 3
  01d0250  fsqrts 3, 3
  01d0254  fdivs 8, 30, 3
  01d0258  fsub 9, 31, 3
  01d025c  fsub 10, 31, 3
  01d0260  fsub 11, 31, 3
  01d0264  fsub 12, 3, 31
  01d0268  fsub 13, 3, 31
  01d026c  fsub 3, 3, 31
  01d0270  fmuls 2, 2, 8
  01d0274  fmuls 1, 1, 8
  01d0278  fmuls 4, 4, 8
  01d027c  fsel 8, 9, 31, 2
  01d0280  fsel 9, 10, 31, 1
  01d0284  fsel 10, 11, 31, 4
  01d0288  fsel 2, 12, 8, 2
  01d028c  fsel 1, 13, 9, 1
  01d0290  fsel 3, 3, 10, 4
  01d0294  fsubs 4, 5, 2
  01d0298  fsubs 5, 6, 1
  01d029c  fsubs 6, 7, 3
  01d02a0  stfs 2, 240(1)
  01d02a4  stfs 1, 244(1)
  01d02a8  stfs 3, 248(1)
  01d02ac  stfs 4, 256(1)
  01d02b0  stfs 5, 260(1)
  01d02b4  stfs 6, 264(1)
  01d02b8  lfs 1, 120(29)
  01d02bc  lfs 2, 112(30)
  01d02c0  fmuls 2, 2, 1
  01d02c4  stfs 2, 240(1)
  01d02c8  lfs 2, 116(30)
  01d02cc  fmuls 2, 2, 1
  01d02d0  stfs 2, 244(1)
  01d02d4  lfs 2, 120(30)
  01d02d8  fmuls 1, 2, 1
  01d02dc  stfs 1, 248(1)
  01d02e0  lfs 1, 124(30)
  01d02e4  stfs 1, 252(1)
  01d02e8  bl 0x5c8318
  01d02ec  nop
  01d02f0  lis 4, 26214
  01d02f4  ori 4, 4, 26215
  01d02f8  mulhw 4, 4, 3
  01d02fc  srawi 4, 4, 2
  01d0300  srwi 5, 4, 31
  01d0304  addc 4, 4, 5
  01d0308  sldi 5, 4, 3
  01d030c  addc 5, 4, 5
  01d0310  addc 4, 4, 5
  01d0314  subc 3, 3, 4
  01d0318  cmpwi 3, 0
  01d031c  bt 1, 0x1d032c
  01d0320  cmpwi 3, -1
  01d0324  bf 1, 0x1d035c
  01d0328  b 0x1d0338
  01d032c  cmpwi 3, 6
  01d0330  bf 1, 0x1d034c
  01d0334  b 0x1d035c
  01d0338  addic 3, 1, 256
  01d033c  li 4, 224
  01d0340  bl 0x2f9610
  01d0344  nop
  01d0348  b 0x1d035c
  01d034c  addic 3, 1, 256
  01d0350  li 4, 228
  01d0354  bl 0x2f9610
  01d0358  nop
  01d035c  lwz 30, 188(30)
  01d0360  cmpwi 30, -1
  01d0364  bt 2, 0x1d03b8
  01d0368  lis 3, 164
  01d036c  slwi 30, 30, 8
  01d0370  lwz 3, -28512(3)
  01d0374  addc 30, 3, 30
  01d0378  cmpwi 30, 0
  01d037c  bt 2, 0x1d03b8
  01d0380  clrldi 30, 30, 32
  01d0384  lbz 3, 32(30)
  01d0388  cmpwi 1, 3, 253
  01d038c  cmpwi 3, 254
  01d0390  cror 2, 2, 6
  01d0394  bt 2, 0x1d03b8
  01d0398  cmpwi 30, 0
  01d039c  lwz 3, 120(30)
  01d03a0  bt 2, 0x1d03b8
  01d03a4  lbz 4, 270(3)
  01d03a8  cmpwi 4, 0
  01d03ac  bf 1, 0x1d03b8
  01d03b0  addic 4, 4, -1
  01d03b4  stb 4, 270(3)
  01d03b8  lhz 4, 52(31)
  01d03bc  li 3, 4
  01d03c0  stw 28, 148(31)
  01d03c4  ori 4, 4, 65
  01d03c8  rlwimi 4, 28, 0, 19, 19
  01d03cc  stb 3, 32(31)
  01d03d0  sth 4, 52(31)
  01d03d4  b 0x1d0450
  01d03d8  lwz 3, 188(30)
  01d03dc  cmpwi 3, -1
  01d03e0  bt 2, 0x1d0450
  01d03e4  lis 4, 164
  01d03e8  slwi 3, 3, 8
  01d03ec  lwz 4, -28512(4)
  01d03f0  addc 3, 4, 3
  01d03f4  cmpwi 3, 0
  01d03f8  bt 2, 0x1d0450
  01d03fc  clrldi 3, 3, 32
  01d0400  lbz 4, 32(3)
  01d0404  cmpwi 1, 4, 253
  01d0408  cmpwi 4, 254
  01d040c  cror 2, 2, 6
  01d0410  bt 2, 0x1d0450
  01d0414  lbz 3, 188(3)
  01d0418  cmpwi 3, 4
  01d041c  bt 2, 0x1d0450
  01d0420  li 3, 36
  01d0424  vspltisw 2, -16
  01d0428  addi 4, 3, 16
  01d042c  <unknown>
  01d0430  li 3, 32
  01d0434  <unknown>
  01d0438  vor 3, 3, 4
  01d043c  vsraw 2, 3, 2
  01d0440  vcfsx 2, 2, 0
  01d0444  vspltw 2, 2, 0
  01d0448  stvewx 2, 3, 30
  01d044c  stb 28, 32(31)
  01d0450  lis 4, 29
  01d0454  lwz 5, 16(31)
  01d0458  lfs 2, 16(31)
  01d045c  lis 3, 16800
  01d0460  addi 4, 4, -2960
  01d0464  srawi 6, 5, 31
  01d0468  srwi 7, 6, 1
  01d046c  lfs 1, 100(4)
  01d0470  xor 4, 7, 5
  01d0474  subc 4, 4, 6
  01d0478  cmpw 4, 3
  01d047c  bf 0, 0x1d0488
  01d0480  fmr 2, 1
  01d0484  stw 3, 16(31)
  01d0488  fmr 3, 2
  01d048c  lis 4, 29
  01d0490  addi 4, 4, -2960
  01d0494  lfs 2, 124(4)
  01d0498  fcmpu 0, 3, 2
  01d049c  cror 6, 0, 2
  01d04a0  bt 6, 0x1d04b0
  01d04a4  lis 4, 17530
  01d04a8  ori 4, 4, 49152
  01d04ac  stw 4, 16(31)
  01d04b0  lwz 4, 20(31)
  01d04b4  lfs 3, 20(31)
  01d04b8  srawi 5, 4, 31
  01d04bc  srwi 6, 5, 1
  01d04c0  xor 4, 6, 4
  01d04c4  subc 4, 4, 5
  01d04c8  cmpw 4, 3
  01d04cc  bf 0, 0x1d04d8
  01d04d0  fmr 3, 1
  01d04d4  stw 3, 20(31)
  01d04d8  fcmpu 0, 3, 2
  01d04dc  cror 6, 0, 2
  01d04e0  bt 6, 0x1d04f0
  01d04e4  lis 4, 17530
  01d04e8  ori 4, 4, 49152
  01d04ec  stw 4, 20(31)
  01d04f0  lwz 4, 24(31)
  01d04f4  lfs 3, 24(31)
  01d04f8  srawi 5, 4, 31
  01d04fc  srwi 6, 5, 1
  01d0500  xor 4, 6, 4
  01d0504  subc 4, 4, 5
  01d0508  cmpw 4, 3
  01d050c  bf 0, 0x1d0518
  01d0510  fmr 3, 1
  01d0514  stw 3, 24(31)
  01d0518  fcmpu 0, 3, 2
  01d051c  cror 6, 0, 2
  01d0520  bt 6, 0x1d0530
  01d0524  lis 3, 17530
  01d0528  ori 3, 3, 49152
  01d052c  stw 3, 24(31)
  01d0530  ld 0, 464(1)
  01d0534  mtlr 0
  01d0538  lfd 21, 360(1)
  01d053c  lfd 22, 368(1)
  01d0540  lfd 23, 376(1)
  01d0544  lfd 24, 384(1)
  01d0548  lfd 25, 392(1)
  01d054c  lfd 26, 400(1)
  01d0550  lfd 27, 408(1)
  01d0554  lfd 28, 416(1)
  01d0558  lfd 29, 424(1)
  01d055c  lfd 30, 432(1)
  01d0560  lfd 31, 440(1)
  01d0564  ld 24, 296(1)
  01d0568  ld 25, 304(1)
  01d056c  ld 26, 312(1)
  01d0570  ld 27, 320(1)
  01d0574  ld 28, 328(1)
  01d0578  ld 29, 336(1)
  01d057c  ld 30, 344(1)
  01d0580  ld 31, 352(1)
  01d0584  addi 1, 1, 448
  01d0588  blr

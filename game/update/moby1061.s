# game/update/moby1061.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1061:   # 0x1ac298, 0xe90 bytes
  01ac298  stdu 1, -208(1)
  01ac29c  mflr 0
  01ac2a0  std 0, 224(1)
  01ac2a4  stfd 31, 200(1)
  01ac2a8  std 31, 192(1)
  01ac2ac  ori 31, 3, 0
  01ac2b0  lis 3, 116
  01ac2b4  lfs 2, 16(31)
  01ac2b8  lfs 1, 20(31)
  01ac2bc  fneg 3, 2
  01ac2c0  lfs 4, 24(31)
  01ac2c4  fneg 5, 1
  01ac2c8  lfs 6, 28(31)
  01ac2cc  fneg 4, 4
  01ac2d0  lfs 7, 64(31)
  01ac2d4  stfs 6, 124(1)
  01ac2d8  lfs 6, 68(31)
  01ac2dc  stfs 7, 128(1)
  01ac2e0  lfs 7, 72(31)
  01ac2e4  lwz 4, 36(31)
  01ac2e8  stfs 6, 132(1)
  01ac2ec  stfs 3, 112(1)
  01ac2f0  stfs 5, 116(1)
  01ac2f4  stfs 4, 120(1)
  01ac2f8  lfs 3, 76(31)
  01ac2fc  stfs 7, 136(1)
  01ac300  std 30, 184(1)
  01ac304  stfs 3, 140(1)
  01ac308  lwz 30, 120(31)
  01ac30c  lfs 3, 36(4)
  01ac310  lfs 4, 2452(3)
  01ac314  lbz 3, 32(31)
  01ac318  fmuls 3, 3, 4
  01ac31c  cmpwi 3, 2
  01ac320  cmpwi 1, 3, 0
  01ac324  cmpwi 6, 3, -1
  01ac328  cmpwi 7, 3, 1
  01ac32c  std 29, 176(1)
  01ac330  std 28, 168(1)
  01ac334  stfs 3, 44(31)
  01ac338  bt 1, 0x1ac350
  01ac33c  bt 5, 0x1ac348
  01ac340  bf 25, 0x1acf94
  01ac344  b 0x1ac370
  01ac348  bf 29, 0x1ac4f0
  01ac34c  b 0x1ac568
  01ac350  cmpwi 3, 6
  01ac354  bt 1, 0x1ac364
  01ac358  cmpwi 3, 4
  01ac35c  bf 1, 0x1ac584
  01ac360  b 0x1ace3c
  01ac364  cmpwi 3, 8
  01ac368  bf 1, 0x1acf30
  01ac36c  b 0x1acf94
  01ac370  lis 3, 116
  01ac374  lwz 3, 2476(3)
  01ac378  cmpwi 3, -1
  01ac37c  bf 2, 0x1ac3a0
  01ac380  lis 3, 151
  01ac384  lis 4, 116
  01ac388  addic 3, 3, -16064
  01ac38c  lbz 3, 22(3)
  01ac390  cntlzw 3, 3
  01ac394  rlwinm 3, 3, 27, 31, 31
  01ac398  xori 3, 3, 1
  01ac39c  stw 3, 2476(4)
  01ac3a0  lis 4, 151
  01ac3a4  li 3, -1
  01ac3a8  li 5, 0
  01ac3ac  addic 4, 4, -16400
  01ac3b0  li 6, 3
  01ac3b4  stw 3, 136(30)
  01ac3b8  stw 5, 148(30)
  01ac3bc  li 3, 0
  01ac3c0  lbz 4, 32(4)
  01ac3c4  li 5, 1
  01ac3c8  subc 3, 3, 4
  01ac3cc  subc 4, 5, 6
  01ac3d0  cntlzw 3, 3
  01ac3d4  lis 5, 165
  01ac3d8  sldi 3, 3, 58
  01ac3dc  sradi 3, 3, 63
  01ac3e0  and 3, 3, 4
  01ac3e4  lis 4, 151
  01ac3e8  addc 3, 6, 3
  01ac3ec  addic 4, 4, -25376
  01ac3f0  stb 3, 32(31)
  01ac3f4  lwz 3, 120(30)
  01ac3f8  lwz 5, 7128(5)
  01ac3fc  slwi 3, 3, 7
  01ac400  addc 3, 5, 3
  01ac404  clrldi 3, 3, 32
  01ac408  lfs 1, 56(3)
  01ac40c  lfs 2, 40(3)
  01ac410  fadds 1, 1, 2
  01ac414  stfs 1, 24(31)
  01ac418  lbz 3, 8356(4)
  01ac41c  cmpwi 3, 0
  01ac420  cmpwi 1, 3, 1
  01ac424  bf 2, 0x1ac48c
  01ac428  lis 3, 164
  01ac42c  lwz 4, 108(30)
  01ac430  slwi 4, 4, 8
  01ac434  lwz 5, -28512(3)
  01ac438  addc 4, 5, 4
  01ac43c  clrldi 4, 4, 32
  01ac440  lhz 5, 52(4)
  01ac444  ori 5, 5, 1
  01ac448  sth 5, 52(4)
  01ac44c  lwz 4, 108(30)
  01ac450  lwz 5, -28512(3)
  01ac454  slwi 4, 4, 8
  01ac458  addc 4, 5, 4
  01ac45c  li 5, 0
  01ac460  clrldi 4, 4, 32
  01ac464  lhz 6, 52(4)
  01ac468  ori 6, 6, 2
  01ac46c  sth 6, 52(4)
  01ac470  lwz 4, 108(30)
  01ac474  lwz 3, -28512(3)
  01ac478  slwi 4, 4, 8
  01ac47c  addc 3, 3, 4
  01ac480  clrldi 3, 3, 32
  01ac484  stw 5, 148(3)
  01ac488  b 0x1ac4b0
  01ac48c  bf 6, 0x1ac4b0
  01ac490  lis 3, 164
  01ac494  lwz 4, 96(30)
  01ac498  slwi 4, 4, 8
  01ac49c  lwz 3, -28512(3)
  01ac4a0  addc 3, 3, 4
  01ac4a4  clrldi 3, 3, 32
  01ac4a8  bl 0x189040
  01ac4ac  nop
  01ac4b0  lis 29, 164
  01ac4b4  lwz 3, 100(30)
  01ac4b8  slwi 3, 3, 8
  01ac4bc  lwz 4, -28512(29)
  01ac4c0  addc 3, 4, 3
  01ac4c4  clrldi 3, 3, 32
  01ac4c8  bl 0x189040
  01ac4cc  nop
  01ac4d0  lwz 3, 104(30)
  01ac4d4  lwz 4, -28512(29)
  01ac4d8  slwi 3, 3, 8
  01ac4dc  addc 3, 4, 3
  01ac4e0  clrldi 3, 3, 32
  01ac4e4  bl 0x189040
  01ac4e8  nop
  01ac4ec  b 0x1acf94
  01ac4f0  lis 29, 151
  01ac4f4  lwz 4, 112(30)
  01ac4f8  addic 29, 29, -25376
  01ac4fc  extsw 4, 4
  01ac500  addic 3, 29, 128
  01ac504  bl 0x110b70
  01ac508  nop
  01ac50c  cmpwi 3, 0
  01ac510  bt 2, 0x1ac544
  01ac514  lis 3, 151
  01ac518  addic 3, 3, -16400
  01ac51c  lbz 4, 32(3)
  01ac520  cmpwi 4, 0
  01ac524  bf 2, 0x1ac530
  01ac528  li 4, 1
  01ac52c  stb 4, 32(3)
  01ac530  li 3, 3
  01ac534  li 4, 0
  01ac538  stb 3, 32(31)
  01ac53c  stw 4, 144(30)
  01ac540  b 0x1acf94
  01ac544  lwz 3, 8320(29)
  01ac548  lhz 3, 166(3)
  01ac54c  cmpwi 3, 87
  01ac550  bf 2, 0x1acf94
  01ac554  li 3, 3
  01ac558  li 4, 1
  01ac55c  stb 3, 32(31)
  01ac560  stw 4, 132(30)
  01ac564  b 0x1acf94
  01ac568  lis 3, 161
  01ac56c  lwz 3, 1800(3)
  01ac570  cmpwi 3, 0
  01ac574  bf 2, 0x1acf94
  01ac578  li 3, 3
  01ac57c  stb 3, 32(31)
  01ac580  b 0x1acf94
  01ac584  addic 29, 30, 144
  01ac588  ori 3, 29, 0
  01ac58c  bl 0x4fff60
  01ac590  nop
  01ac594  cmpwi 3, 0
  01ac598  bt 2, 0x1acb24
  01ac59c  lis 28, 151
  01ac5a0  lwz 4, 112(30)
  01ac5a4  addic 28, 28, -25376
  01ac5a8  extsw 4, 4
  01ac5ac  addic 3, 28, 128
  01ac5b0  bl 0x110b70
  01ac5b4  nop
  01ac5b8  cmpwi 3, 0
  01ac5bc  bt 2, 0x1acb24
  01ac5c0  lbz 3, 8356(28)
  01ac5c4  cmpwi 3, 1
  01ac5c8  bf 2, 0x1ac5e0
  01ac5cc  li 3, 9
  01ac5d0  li 4, 6017
  01ac5d4  bl 0x11aeec
  01ac5d8  nop
  01ac5dc  b 0x1ac638
  01ac5e0  lis 3, 151
  01ac5e4  addic 3, 3, -16064
  01ac5e8  lbz 3, 6(3)
  01ac5ec  cmpwi 3, 0
  01ac5f0  bf 2, 0x1ac608
  01ac5f4  li 3, 9
  01ac5f8  li 4, 6014
  01ac5fc  bl 0x11aeec
  01ac600  nop
  01ac604  b 0x1ac638
  01ac608  lwz 3, 132(30)
  01ac60c  cmpwi 3, 0
  01ac610  bt 2, 0x1ac628
  01ac614  li 3, 9
  01ac618  li 4, 6021
  01ac61c  bl 0x11aeec
  01ac620  nop
  01ac624  b 0x1ac638
  01ac628  li 3, 9
  01ac62c  li 4, 6025
  01ac630  bl 0x11aeec
  01ac634  nop
  01ac638  lis 4, 150
  01ac63c  addic 4, 4, 19008
  01ac640  lwz 4, 164(4)
  01ac644  rlwinm 4, 4, 0, 27, 27
  01ac648  cmpwi 4, 0
  01ac64c  bt 2, 0x1acb24
  01ac650  cmpwi 1, 3, 0
  01ac654  lwz 3, 8324(28)
  01ac658  cmpwi 3, 100
  01ac65c  cror 2, 2, 6
  01ac660  bt 2, 0x1acb24
  01ac664  lis 3, 27
  01ac668  vspltisw 2, -1
  01ac66c  lis 4, 114
  01ac670  addi 3, 3, -15792
  01ac674  li 5, -3056
  01ac678  vslw 2, 2, 2
  01ac67c  li 6, 4
  01ac680  <unknown>
  01ac684  <unknown>
  01ac688  vspltw 3, 3, 0
  01ac68c  li 5, 498
  01ac690  lfs 1, -3056(4)
  01ac694  vmaddfp 2, 4, 3, 2
  01ac698  vspltisw 3, -1
  01ac69c  li 4, 144
  01ac6a0  vslw 3, 3, 3
  01ac6a4  vctsxs 2, 2, 0
  01ac6a8  vsplth 2, 2, 1
  01ac6ac  stvehx 2, 5, 28
  01ac6b0  <unknown>
  01ac6b4  vspltw 2, 2, 0
  01ac6b8  vmaddfp 2, 4, 2, 3
  01ac6bc  vctsxs 2, 2, 0
  01ac6c0  vspltw 2, 2, 0
  01ac6c4  stvewx 2, 4, 30
  01ac6c8  lbz 3, 8356(28)
  01ac6cc  cmpwi 3, 1
  01ac6d0  bf 2, 0x1ac84c
  01ac6d4  lis 3, 27
  01ac6d8  addi 3, 3, -15792
  01ac6dc  lfs 2, 8(3)
  01ac6e0  fmuls 1, 1, 2
  01ac6e4  fctiwz 1, 1
  01ac6e8  stfd 1, 144(1)
  01ac6ec  lwz 3, 148(1)
  01ac6f0  extsw 3, 3
  01ac6f4  bl 0x6dad0
  01ac6f8  nop
  01ac6fc  lis 28, 164
  01ac700  lwz 3, 100(30)
  01ac704  slwi 3, 3, 8
  01ac708  lwz 4, -28512(28)
  01ac70c  addc 3, 4, 3
  01ac710  clrldi 3, 3, 32
  01ac714  bl 0x189100
  01ac718  nop
  01ac71c  lwz 3, 104(30)
  01ac720  lwz 4, -28512(28)
  01ac724  slwi 3, 3, 8
  01ac728  addc 3, 4, 3
  01ac72c  clrldi 3, 3, 32
  01ac730  bl 0x189100
  01ac734  nop
  01ac738  lwz 3, 96(30)
  01ac73c  lwz 4, -28512(28)
  01ac740  slwi 3, 3, 8
  01ac744  addc 3, 4, 3
  01ac748  clrldi 3, 3, 32
  01ac74c  bl 0x188fb4
  01ac750  nop
  01ac754  lwz 3, 108(30)
  01ac758  li 5, 0
  01ac75c  lwz 4, -28512(28)
  01ac760  slwi 3, 3, 8
  01ac764  addc 3, 4, 3
  01ac768  stw 5, 132(30)
  01ac76c  clrldi 3, 3, 32
  01ac770  stw 5, 148(3)
  01ac774  bl 0x836ac
  01ac778  nop
  01ac77c  lis 3, 165
  01ac780  lwz 4, 124(30)
  01ac784  li 5, 0
  01ac788  slwi 4, 4, 7
  01ac78c  li 6, 1
  01ac790  lwz 3, 7128(3)
  01ac794  addc 3, 3, 4
  01ac798  addic 4, 3, 48
  01ac79c  addic 7, 3, 112
  01ac7a0  clrldi 3, 4, 32
  01ac7a4  clrldi 4, 7, 32
  01ac7a8  bl 0xa0c38
  01ac7ac  nop
  01ac7b0  li 3, 0
  01ac7b4  li 4, 10
  01ac7b8  bl 0x11ccc8
  01ac7bc  nop
  01ac7c0  lwz 3, 108(30)
  01ac7c4  lwz 4, -28512(28)
  01ac7c8  slwi 3, 3, 8
  01ac7cc  addc 3, 4, 3
  01ac7d0  lis 4, 151
  01ac7d4  clrldi 3, 3, 32
  01ac7d8  addic 4, 4, -16064
  01ac7dc  lhz 5, 52(3)
  01ac7e0  ori 5, 5, 1
  01ac7e4  sth 5, 52(3)
  01ac7e8  lwz 3, 108(30)
  01ac7ec  lwz 5, -28512(28)
  01ac7f0  slwi 3, 3, 8
  01ac7f4  addc 3, 5, 3
  01ac7f8  clrldi 3, 3, 32
  01ac7fc  lhz 5, 52(3)
  01ac800  ori 5, 5, 2
  01ac804  sth 5, 52(3)
  01ac808  lbz 3, 22(4)
  01ac80c  cmpwi 3, 0
  01ac810  bt 2, 0x1acb24
  01ac814  lis 3, 116
  01ac818  lwz 3, 2476(3)
  01ac81c  cmpwi 3, 0
  01ac820  bf 2, 0x1acb24
  01ac824  lis 5, 116
  01ac828  li 6, 1
  01ac82c  li 3, 3
  01ac830  li 4, 0
  01ac834  stw 6, 2476(5)
  01ac838  bl 0x167e60
  01ac83c  nop
  01ac840  li 3, 2
  01ac844  stb 3, 32(31)
  01ac848  b 0x1acf94
  01ac84c  lis 3, 151
  01ac850  addic 3, 3, -16064
  01ac854  lbz 3, 6(3)
  01ac858  cmpwi 3, 0
  01ac85c  bf 2, 0x1ac994
  01ac860  lis 3, 27
  01ac864  addi 3, 3, -15792
  01ac868  lfs 2, 8(3)
  01ac86c  fmuls 1, 1, 2
  01ac870  fctiwz 1, 1
  01ac874  stfd 1, 144(1)
  01ac878  lwz 3, 148(1)
  01ac87c  extsw 3, 3
  01ac880  bl 0x6dad0
  01ac884  nop
  01ac888  lis 28, 164
  01ac88c  lwz 3, 100(30)
  01ac890  slwi 3, 3, 8
  01ac894  lwz 4, -28512(28)
  01ac898  addc 3, 4, 3
  01ac89c  clrldi 3, 3, 32
  01ac8a0  bl 0x188fb4
  01ac8a4  nop
  01ac8a8  lwz 3, 104(30)
  01ac8ac  lwz 4, -28512(28)
  01ac8b0  slwi 3, 3, 8
  01ac8b4  addc 3, 4, 3
  01ac8b8  clrldi 3, 3, 32
  01ac8bc  bl 0x189040
  01ac8c0  nop
  01ac8c4  lwz 3, 96(30)
  01ac8c8  lwz 4, -28512(28)
  01ac8cc  slwi 3, 3, 8
  01ac8d0  addc 3, 4, 3
  01ac8d4  clrldi 3, 3, 32
  01ac8d8  bl 0x189100
  01ac8dc  nop
  01ac8e0  lwz 3, 108(30)
  01ac8e4  lwz 4, -28512(28)
  01ac8e8  li 5, 1
  01ac8ec  slwi 3, 3, 8
  01ac8f0  addc 3, 4, 3
  01ac8f4  stw 5, 132(30)
  01ac8f8  clrldi 3, 3, 32
  01ac8fc  lwz 4, 36(3)
  01ac900  lwz 4, 16(4)
  01ac904  stw 4, 148(3)
  01ac908  lwz 3, 108(30)
  01ac90c  lwz 4, -28512(28)
  01ac910  slwi 3, 3, 8
  01ac914  addc 3, 4, 3
  01ac918  lis 4, 165
  01ac91c  clrldi 3, 3, 32
  01ac920  lhz 5, 52(3)
  01ac924  rlwinm 6, 5, 0, 0, 30
  01ac928  li 5, 0
  01ac92c  sth 6, 52(3)
  01ac930  lwz 3, 128(30)
  01ac934  lwz 4, 7128(4)
  01ac938  li 6, 1
  01ac93c  slwi 3, 3, 7
  01ac940  addc 3, 4, 3
  01ac944  addic 4, 3, 48
  01ac948  addic 7, 3, 112
  01ac94c  clrldi 3, 4, 32
  01ac950  clrldi 4, 7, 32
  01ac954  bl 0xa0c38
  01ac958  nop
  01ac95c  lwz 3, 108(30)
  01ac960  li 4, 67
  01ac964  lwz 5, -28512(28)
  01ac968  slwi 6, 3, 8
  01ac96c  li 3, 1
  01ac970  addc 5, 5, 6
  01ac974  clrldi 5, 5, 32
  01ac978  bl 0x86b60
  01ac97c  nop
  01ac980  li 3, 2
  01ac984  li 4, 7
  01ac988  bl 0x11ccc8
  01ac98c  nop
  01ac990  b 0x1acb24
  01ac994  lwz 3, 132(30)
  01ac998  cmpwi 3, 0
  01ac99c  bf 2, 0x1aca64
  01ac9a0  lis 3, 27
  01ac9a4  addi 3, 3, -15792
  01ac9a8  lfs 2, 8(3)
  01ac9ac  fmuls 1, 1, 2
  01ac9b0  fctiwz 1, 1
  01ac9b4  stfd 1, 144(1)
  01ac9b8  lwz 3, 148(1)
  01ac9bc  extsw 3, 3
  01ac9c0  bl 0x6dad0
  01ac9c4  nop
  01ac9c8  lis 28, 164
  01ac9cc  lwz 3, 100(30)
  01ac9d0  slwi 3, 3, 8
  01ac9d4  lwz 4, -28512(28)
  01ac9d8  addc 3, 4, 3
  01ac9dc  clrldi 3, 3, 32
  01ac9e0  bl 0x188fb4
  01ac9e4  nop
  01ac9e8  lwz 3, 104(30)
  01ac9ec  lwz 4, -28512(28)
  01ac9f0  slwi 3, 3, 8
  01ac9f4  addc 3, 4, 3
  01ac9f8  clrldi 3, 3, 32
  01ac9fc  bl 0x189040
  01aca00  nop
  01aca04  lwz 3, 96(30)
  01aca08  lwz 4, -28512(28)
  01aca0c  slwi 3, 3, 8
  01aca10  addc 3, 4, 3
  01aca14  clrldi 3, 3, 32
  01aca18  bl 0x189100
  01aca1c  nop
  01aca20  lis 3, 165
  01aca24  lwz 4, 128(30)
  01aca28  li 6, 1
  01aca2c  li 5, 0
  01aca30  slwi 4, 4, 7
  01aca34  lwz 3, 7128(3)
  01aca38  stw 6, 132(30)
  01aca3c  addc 3, 3, 4
  01aca40  stw 6, 148(30)
  01aca44  li 6, 1
  01aca48  addic 4, 3, 48
  01aca4c  addic 7, 3, 112
  01aca50  clrldi 3, 4, 32
  01aca54  clrldi 4, 7, 32
  01aca58  bl 0xa0c38
  01aca5c  nop
  01aca60  b 0x1acb24
  01aca64  lis 3, 27
  01aca68  addi 3, 3, -15792
  01aca6c  lfs 2, 8(3)
  01aca70  fmuls 1, 1, 2
  01aca74  fctiwz 1, 1
  01aca78  stfd 1, 144(1)
  01aca7c  lwz 3, 148(1)
  01aca80  extsw 3, 3
  01aca84  bl 0x6dad0
  01aca88  nop
  01aca8c  lis 28, 164
  01aca90  lwz 3, 100(30)
  01aca94  slwi 3, 3, 8
  01aca98  lwz 4, -28512(28)
  01aca9c  addc 3, 4, 3
  01acaa0  clrldi 3, 3, 32
  01acaa4  bl 0x189100
  01acaa8  nop
  01acaac  lwz 3, 104(30)
  01acab0  lwz 4, -28512(28)
  01acab4  slwi 3, 3, 8
  01acab8  addc 3, 4, 3
  01acabc  clrldi 3, 3, 32
  01acac0  bl 0x189040
  01acac4  nop
  01acac8  lwz 3, 96(30)
  01acacc  lwz 4, -28512(28)
  01acad0  slwi 3, 3, 8
  01acad4  addc 3, 4, 3
  01acad8  clrldi 3, 3, 32
  01acadc  bl 0x188fb4
  01acae0  nop
  01acae4  lis 3, 165
  01acae8  lwz 4, 124(30)
  01acaec  li 7, 0
  01acaf0  slwi 4, 4, 7
  01acaf4  li 5, 0
  01acaf8  li 6, 1
  01acafc  lwz 3, 7128(3)
  01acb00  stw 7, 132(30)
  01acb04  addc 3, 3, 4
  01acb08  stw 7, 148(30)
  01acb0c  addic 4, 3, 48
  01acb10  addic 7, 3, 112
  01acb14  clrldi 3, 4, 32
  01acb18  clrldi 4, 7, 32
  01acb1c  bl 0xa0c38
  01acb20  nop
  01acb24  lis 28, 151
  01acb28  addic 28, 28, -25376
  01acb2c  lwz 3, 764(28)
  01acb30  cmpw 3, 31
  01acb34  bf 2, 0x1acca8
  01acb38  lhz 3, 782(28)
  01acb3c  cmpwi 3, 0
  01acb40  bf 2, 0x1acca8
  01acb44  ori 3, 29, 0
  01acb48  bl 0x4fff60
  01acb4c  nop
  01acb50  cmpwi 3, 0
  01acb54  bt 2, 0x1acca8
  01acb58  lis 3, 27
  01acb5c  lfs 1, 24(31)
  01acb60  addi 3, 3, -15792
  01acb64  lfs 2, 12(3)
  01acb68  lfs 3, 136(28)
  01acb6c  fadds 1, 1, 2
  01acb70  fcmpu 0, 3, 1
  01acb74  cror 6, 0, 2
  01acb78  bt 6, 0x1acca8
  01acb7c  lfs 1, 132(28)
  01acb80  lfs 2, 20(31)
  01acb84  lfs 3, 128(28)
  01acb88  fsubs 1, 1, 2
  01acb8c  lfs 2, 16(31)
  01acb90  fsubs 2, 3, 2
  01acb94  lis 3, 27
  01acb98  addi 3, 3, -15792
  01acb9c  fmuls 1, 1, 1
  01acba0  fmadds 1, 2, 2, 1
  01acba4  lfs 2, 16(3)
  01acba8  fsqrts 1, 1
  01acbac  fcmpu 0, 1, 2
  01acbb0  cror 6, 1, 2
  01acbb4  bt 6, 0x1acca8
  01acbb8  li 3, 0
  01acbbc  li 4, 0
  01acbc0  ori 5, 31, 0
  01acbc4  bl 0x15d12c
  01acbc8  nop
  01acbcc  lbz 3, 32(31)
  01acbd0  cmpwi 3, 3
  01acbd4  bf 2, 0x1acc40
  01acbd8  li 3, 5
  01acbdc  lis 4, 164
  01acbe0  stb 3, 32(31)
  01acbe4  lwz 3, 100(30)
  01acbe8  lwz 4, -28512(4)
  01acbec  slwi 3, 3, 8
  01acbf0  addc 3, 4, 3
  01acbf4  clrldi 3, 3, 32
  01acbf8  bl 0x189040
  01acbfc  nop
  01acc00  lis 3, 27
  01acc04  li 4, 4
  01acc08  vspltisw 2, -1
  01acc0c  addi 3, 3, -15792
  01acc10  lis 5, 114
  01acc14  li 6, -3056
  01acc18  vslw 2, 2, 2
  01acc1c  <unknown>
  01acc20  li 3, 144
  01acc24  vspltw 3, 3, 0
  01acc28  <unknown>
  01acc2c  vmaddfp 2, 4, 3, 2
  01acc30  vctsxs 2, 2, 0
  01acc34  vspltw 2, 2, 0
  01acc38  stvewx 2, 3, 30
  01acc3c  b 0x1acf94
  01acc40  li 3, 6
  01acc44  lis 4, 164
  01acc48  stb 3, 32(31)
  01acc4c  lwz 3, 104(30)
  01acc50  lwz 4, -28512(4)
  01acc54  slwi 3, 3, 8
  01acc58  addc 3, 4, 3
  01acc5c  clrldi 3, 3, 32
  01acc60  bl 0x189040
  01acc64  nop
  01acc68  lis 3, 27
  01acc6c  li 4, 4
  01acc70  vspltisw 2, -1
  01acc74  addi 3, 3, -15792
  01acc78  lis 5, 114
  01acc7c  li 6, -3056
  01acc80  vslw 2, 2, 2
  01acc84  <unknown>
  01acc88  li 3, 144
  01acc8c  vspltw 3, 3, 0
  01acc90  <unknown>
  01acc94  vmaddfp 2, 4, 3, 2
  01acc98  vctsxs 2, 2, 0
  01acc9c  vspltw 2, 2, 0
  01acca0  stvewx 2, 3, 30
  01acca4  b 0x1acf94
  01acca8  lfs 1, 20(31)
  01accac  lfs 2, 132(28)
  01accb0  lfs 3, 16(31)
  01accb4  fsubs 1, 1, 2
  01accb8  lfs 2, 128(28)
  01accbc  fsubs 2, 3, 2
  01accc0  lis 3, 27
  01accc4  addi 3, 3, -15792
  01accc8  fmuls 1, 1, 1
  01acccc  fmadds 1, 2, 2, 1
  01accd0  lfs 2, 20(3)
  01accd4  fsqrts 1, 1
  01accd8  fcmpu 1, 1, 2
  01accdc  bf 4, 0x1acda0
  01acce0  lbz 3, 32(31)
  01acce4  cmpwi 3, 3
  01acce8  bf 2, 0x1acda0
  01accec  lis 3, 27
  01accf0  lfs 1, 136(28)
  01accf4  addi 3, 3, -15792
  01accf8  lfs 2, 24(3)
  01accfc  lfs 3, 24(31)
  01acd00  fadds 1, 1, 2
  01acd04  fcmpu 0, 3, 1
  01acd08  cror 2, 0, 2
  01acd0c  bt 2, 0x1acda0
  01acd10  li 3, 1
  01acd14  li 4, 5
  01acd18  lis 29, 164
  01acd1c  stw 3, 132(30)
  01acd20  stw 3, 148(30)
  01acd24  stb 4, 32(31)
  01acd28  lwz 3, 100(30)
  01acd2c  lwz 4, -28512(29)
  01acd30  slwi 3, 3, 8
  01acd34  addc 3, 4, 3
  01acd38  clrldi 3, 3, 32
  01acd3c  bl 0x189040
  01acd40  nop
  01acd44  lwz 3, 96(30)
  01acd48  lwz 4, -28512(29)
  01acd4c  slwi 3, 3, 8
  01acd50  addc 3, 4, 3
  01acd54  clrldi 3, 3, 32
  01acd58  bl 0x189040
  01acd5c  nop
  01acd60  lis 3, 27
  01acd64  li 4, 4
  01acd68  vspltisw 2, -1
  01acd6c  addi 3, 3, -15792
  01acd70  lis 5, 114
  01acd74  li 6, -3056
  01acd78  vslw 2, 2, 2
  01acd7c  <unknown>
  01acd80  li 3, 144
  01acd84  vspltw 3, 3, 0
  01acd88  <unknown>
  01acd8c  vmaddfp 2, 4, 3, 2
  01acd90  vctsxs 2, 2, 0
  01acd94  vspltw 2, 2, 0
  01acd98  stvewx 2, 3, 30
  01acd9c  b 0x1acf94
  01acda0  bf 4, 0x1acf94
  01acda4  lbz 3, 32(31)
  01acda8  cmpwi 3, 4
  01acdac  bf 2, 0x1acf94
  01acdb0  lis 3, 27
  01acdb4  lfs 1, 136(28)
  01acdb8  addi 3, 3, -15792
  01acdbc  lfs 2, 24(3)
  01acdc0  lfs 3, 24(31)
  01acdc4  fsubs 1, 1, 2
  01acdc8  fcmpu 0, 3, 1
  01acdcc  cror 6, 1, 2
  01acdd0  bt 6, 0x1acf94
  01acdd4  li 3, 6
  01acdd8  lis 4, 164
  01acddc  stb 3, 32(31)
  01acde0  lwz 3, 104(30)
  01acde4  lwz 4, -28512(4)
  01acde8  slwi 3, 3, 8
  01acdec  addc 3, 4, 3
  01acdf0  clrldi 3, 3, 32
  01acdf4  bl 0x189040
  01acdf8  nop
  01acdfc  lis 3, 27
  01ace00  vspltisw 2, -1
  01ace04  li 5, 4
  01ace08  addi 3, 3, -15792
  01ace0c  lis 4, 114
  01ace10  li 6, -3056
  01ace14  vslw 2, 2, 2
  01ace18  <unknown>
  01ace1c  li 3, 144
  01ace20  vspltw 3, 3, 0
  01ace24  <unknown>
  01ace28  vmaddfp 2, 4, 3, 2
  01ace2c  vctsxs 2, 2, 0
  01ace30  vspltw 2, 2, 0
  01ace34  stvewx 2, 3, 30
  01ace38  b 0x1acf94
  01ace3c  lis 4, 165
  01ace40  lwz 5, 120(30)
  01ace44  cmpwi 3, 6
  01ace48  slwi 5, 5, 7
  01ace4c  lwz 4, 7128(4)
  01ace50  addc 3, 4, 5
  01ace54  clrldi 3, 3, 32
  01ace58  lfs 31, 56(3)
  01ace5c  bf 2, 0x1ace68
  01ace60  lfs 1, 40(3)
  01ace64  fadds 31, 31, 1
  01ace68  lis 4, 116
  01ace6c  lis 6, 114
  01ace70  lis 7, 116
  01ace74  lis 8, 114
  01ace78  addic 3, 31, 24
  01ace7c  lfs 2, 2460(4)
  01ace80  addic 5, 30, 140
  01ace84  lfs 1, -3048(6)
  01ace88  lfs 4, 2456(7)
  01ace8c  fmuls 2, 2, 1
  01ace90  lfs 3, -3052(8)
  01ace94  fmr 1, 31
  01ace98  fmuls 4, 4, 3
  01ace9c  fmr 3, 2
  01acea0  bl 0x109c30
  01acea4  nop
  01acea8  lfs 1, 24(31)
  01aceac  lis 3, 27
  01aceb0  fsubs 1, 1, 31
  01aceb4  addi 3, 3, -15792
  01aceb8  lfs 2, 28(3)
  01acebc  fabs 1, 1
  01acec0  fcmpu 0, 1, 2
  01acec4  cror 6, 1, 2
  01acec8  bt 6, 0x1acf94
  01acecc  lbz 3, 32(31)
  01aced0  cmpwi 3, 6
  01aced4  bf 2, 0x1acf04
  01aced8  li 3, 7
  01acedc  lis 4, 164
  01acee0  stb 3, 32(31)
  01acee4  lwz 3, 100(30)
  01acee8  lwz 4, -28512(4)
  01aceec  slwi 3, 3, 8
  01acef0  addc 3, 4, 3
  01acef4  clrldi 3, 3, 32
  01acef8  bl 0x188fb4
  01acefc  nop
  01acf00  b 0x1acf94
  01acf04  lis 3, 164
  01acf08  lwz 4, 104(30)
  01acf0c  slwi 4, 4, 8
  01acf10  lwz 3, -28512(3)
  01acf14  addc 3, 3, 4
  01acf18  clrldi 3, 3, 32
  01acf1c  bl 0x188fb4
  01acf20  nop
  01acf24  li 3, 8
  01acf28  stb 3, 32(31)
  01acf2c  b 0x1acf94
  01acf30  lis 4, 151
  01acf34  addic 4, 4, -25376
  01acf38  lfs 3, 132(4)
  01acf3c  lfs 4, 128(4)
  01acf40  fsubs 1, 3, 1
  01acf44  fsubs 2, 4, 2
  01acf48  lis 4, 27
  01acf4c  addi 4, 4, -15792
  01acf50  fmuls 1, 1, 1
  01acf54  fmadds 1, 2, 2, 1
  01acf58  lfs 2, 16(4)
  01acf5c  fsqrts 1, 1
  01acf60  fcmpu 0, 1, 2
  01acf64  bt 0, 0x1acf94
  01acf68  li 4, 7
  01acf6c  li 5, 4
  01acf70  subc 3, 4, 3
  01acf74  li 4, 3
  01acf78  cntlzw 3, 3
  01acf7c  subc 4, 4, 5
  01acf80  sldi 3, 3, 58
  01acf84  sradi 3, 3, 63
  01acf88  and 3, 3, 4
  01acf8c  addc 3, 5, 3
  01acf90  stb 3, 32(31)
  01acf94  lwz 4, 148(30)
  01acf98  lis 3, 151
  01acf9c  cntlzw 4, 4
  01acfa0  addic 3, 3, -25376
  01acfa4  rlwinm 4, 4, 27, 31, 31
  01acfa8  xori 4, 4, 1
  01acfac  stb 4, 8907(3)
  01acfb0  lbz 3, 32(31)
  01acfb4  cmpwi 1, 3, 8
  01acfb8  cmpwi 3, 5
  01acfbc  cror 2, 0, 5
  01acfc0  bt 2, 0x1acfd8
  01acfc4  lis 3, 116
  01acfc8  li 4, 0
  01acfcc  lwz 3, 2472(3)
  01acfd0  stw 4, 156(30)
  01acfd4  b 0x1ad0b4
  01acfd8  lis 3, 27
  01acfdc  lfs 1, 156(30)
  01acfe0  addi 29, 3, -15792
  01acfe4  lis 3, 114
  01acfe8  lfs 2, 32(29)
  01acfec  lfs 3, -3052(3)
  01acff0  fmuls 2, 3, 2
  01acff4  bl 0x502578
  01acff8  nop
  01acffc  stfs 1, 156(30)
  01ad000  lfs 2, 36(29)
  01ad004  lfs 3, 40(29)
  01ad008  fsubs 2, 2, 1
  01ad00c  fsubs 3, 3, 1
  01ad010  fsub 4, 1, 2
  01ad014  fsel 1, 4, 2, 1
  01ad018  lfs 2, 44(29)
  01ad01c  lfs 4, 48(29)
  01ad020  fsub 5, 3, 1
  01ad024  fsel 1, 5, 3, 1
  01ad028  lfs 3, 52(29)
  01ad02c  lfs 5, 56(29)
  01ad030  lfs 7, 60(29)
  01ad034  lfs 9, 64(29)
  01ad038  fmuls 6, 1, 1
  01ad03c  fmuls 8, 6, 1
  01ad040  fmuls 10, 6, 8
  01ad044  fmadds 1, 8, 2, 1
  01ad048  lfs 2, 16(29)
  01ad04c  fmuls 8, 6, 10
  01ad050  fmadds 1, 10, 4, 1
  01ad054  fmuls 4, 6, 8
  01ad058  fmadds 1, 8, 3, 1
  01ad05c  fmadds 1, 4, 5, 1
  01ad060  fmsubs 1, 1, 7, 9
  01ad064  fcmpu 0, 1, 2
  01ad068  cror 6, 0, 2
  01ad06c  bt 6, 0x1ad078
  01ad070  fmr 1, 2
  01ad074  b 0x1ad094
  01ad078  lis 3, 27
  01ad07c  addi 3, 3, -15792
  01ad080  lfs 2, 68(3)
  01ad084  fcmpu 0, 1, 2
  01ad088  cror 6, 1, 2
  01ad08c  bt 6, 0x1ad094
  01ad090  fmr 1, 2
  01ad094  lis 3, 116
  01ad098  lis 4, 116
  01ad09c  lwz 3, 2464(3)
  01ad0a0  lwz 4, 2468(4)
  01ad0a4  extsw 3, 3
  01ad0a8  extsw 4, 4
  01ad0ac  bl 0x5027bc
  01ad0b0  nop
  01ad0b4  lfs 1, 112(1)
  01ad0b8  ori 5, 3, 0
  01ad0bc  lfs 2, 16(31)
  01ad0c0  addic 3, 30, 32
  01ad0c4  lfs 3, 116(1)
  01ad0c8  addic 4, 1, 112
  01ad0cc  fadds 1, 1, 2
  01ad0d0  addic 6, 31, 64
  01ad0d4  lfs 2, 20(31)
  01ad0d8  lfs 4, 120(1)
  01ad0dc  fadds 2, 3, 2
  01ad0e0  lfs 3, 24(31)
  01ad0e4  stw 5, 144(31)
  01ad0e8  fadds 3, 4, 3
  01ad0ec  addic 5, 1, 128
  01ad0f0  stfs 1, 112(1)
  01ad0f4  stfs 2, 116(1)
  01ad0f8  stfs 3, 120(1)
  01ad0fc  bl 0x112900
  01ad100  nop
  01ad104  ld 0, 224(1)
  01ad108  mtlr 0
  01ad10c  lfd 31, 200(1)
  01ad110  ld 28, 168(1)
  01ad114  ld 29, 176(1)
  01ad118  ld 30, 184(1)
  01ad11c  ld 31, 192(1)
  01ad120  addi 1, 1, 208
  01ad124  blr

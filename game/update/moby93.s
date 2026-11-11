# game/update/moby93.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M990_004bb3d4:   # 0x4bb3d4, 0x14 bytes
  04bb3d4  lis 3, 143
  04bb3d8  lis 4, 1
  04bb3dc  addic 3, 3, 18440
  04bb3e0  stw 4, 72(3)
  04bb3e4  blr

UpdateMoby_93:   # 0x4bb3f8, 0x428 bytes
  04bb3f8  stdu 1, -192(1)
  04bb3fc  mflr 0
  04bb400  std 0, 208(1)
  04bb404  stfd 31, 184(1)
  04bb408  std 31, 176(1)
  04bb40c  std 29, 160(1)
  04bb410  std 26, 136(1)
  04bb414  ori 31, 3, 0
  04bb418  li 26, 0
  04bb41c  std 30, 168(1)
  04bb420  li 29, 1
  04bb424  std 28, 152(1)
  04bb428  ori 30, 26, 0
  04bb42c  std 27, 144(1)
  04bb430  lwz 28, 120(31)
  04bb434  ori 27, 30, 0
  04bb438  lwz 3, 20(28)
  04bb43c  std 25, 128(1)
  04bb440  std 24, 120(1)
  04bb444  cmpwi 3, -1
  04bb448  bf 2, 0x4bb560
  04bb44c  lbz 3, 32(31)
  04bb450  cmpwi 3, 0
  04bb454  bt 2, 0x4bb5a0
  04bb458  lis 24, 151
  04bb45c  lwz 4, 4(28)
  04bb460  addic 24, 24, -25248
  04bb464  extsw 4, 4
  04bb468  ori 3, 24, 0
  04bb46c  bl 0x110b70
  04bb470  nop
  04bb474  cmpwi 3, 0
  04bb478  bf 2, 0x4bb4a0
  04bb47c  lis 25, 149
  04bb480  lwz 4, 4(28)
  04bb484  addic 25, 25, 5376
  04bb488  extsw 4, 4
  04bb48c  ori 3, 25, 0
  04bb490  bl 0x110b70
  04bb494  nop
  04bb498  cmpwi 3, 0
  04bb49c  bt 2, 0x4bb4a8
  04bb4a0  ori 26, 29, 0
  04bb4a4  b 0x4bb4e4
  04bb4a8  ori 3, 24, 0
  04bb4ac  lwz 4, 8(28)
  04bb4b0  extsw 4, 4
  04bb4b4  bl 0x110b70
  04bb4b8  nop
  04bb4bc  cmpwi 3, 0
  04bb4c0  bf 2, 0x4bb4e4
  04bb4c4  ori 3, 25, 0
  04bb4c8  lwz 4, 8(28)
  04bb4cc  extsw 4, 4
  04bb4d0  bl 0x110b70
  04bb4d4  nop
  04bb4d8  cmpwi 3, 0
  04bb4dc  bf 2, 0x4bb4e4
  04bb4e0  ori 27, 29, 0
  04bb4e4  lis 3, 164
  04bb4e8  lwz 24, -28500(3)
  04bb4ec  cmpwi 24, 0
  04bb4f0  bt 2, 0x4bb594
  04bb4f4  ori 3, 24, 0
  04bb4f8  bl 0xfcccc
  04bb4fc  nop
  04bb500  cmpwi 3, 0
  04bb504  bt 2, 0x4bb550
  04bb508  addic 25, 24, 16
  04bb50c  lwz 4, 4(28)
  04bb510  ori 3, 25, 0
  04bb514  extsw 4, 4
  04bb518  bl 0x110b70
  04bb51c  nop
  04bb520  cmpwi 3, 0
  04bb524  bt 2, 0x4bb530
  04bb528  ori 26, 29, 0
  04bb52c  b 0x4bb550
  04bb530  ori 3, 25, 0
  04bb534  lwz 4, 8(28)
  04bb538  extsw 4, 4
  04bb53c  bl 0x110b70
  04bb540  nop
  04bb544  cmpwi 3, 0
  04bb548  bf 2, 0x4bb550
  04bb54c  ori 27, 29, 0
  04bb550  lwz 24, 40(24)
  04bb554  cmpwi 24, 0
  04bb558  bf 2, 0x4bb4f4
  04bb55c  b 0x4bb594
  04bb560  lis 4, 164
  04bb564  slwi 3, 3, 8
  04bb568  lwz 4, -28512(4)
  04bb56c  addc 3, 4, 3
  04bb570  clrldi 3, 3, 32
  04bb574  lhz 4, 166(3)
  04bb578  cmpwi 4, 1179
  04bb57c  bf 2, 0x4bb5a0
  04bb580  lbz 3, 32(3)
  04bb584  cmpwi 3, 2
  04bb588  bf 2, 0x4bb5a0
  04bb58c  ori 26, 29, 0
  04bb590  b 0x4bb59c
  04bb594  cmpwi 26, 0
  04bb598  bt 2, 0x4bb5a0
  04bb59c  ori 27, 30, 0
  04bb5a0  lbz 3, 32(31)
  04bb5a4  cmpwi 3, 4
  04bb5a8  cmpwi 1, 3, 3
  04bb5ac  cmpwi 6, 3, 2
  04bb5b0  cmpwi 7, 3, 1
  04bb5b4  bt 2, 0x4bb748
  04bb5b8  bt 6, 0x4bb71c
  04bb5bc  bt 26, 0x4bb684
  04bb5c0  cmpwi 1, 26, 0
  04bb5c4  bt 30, 0x4bb650
  04bb5c8  cmpwi 3, 0
  04bb5cc  bf 2, 0x4bb7ec
  04bb5d0  lwz 3, 16(28)
  04bb5d4  cmpwi 3, 0
  04bb5d8  bt 2, 0x4bb5f4
  04bb5dc  lis 3, 0
  04bb5e0  lhz 4, 52(31)
  04bb5e4  ori 3, 3, 32768
  04bb5e8  or 4, 4, 3
  04bb5ec  lwz 3, 16(28)
  04bb5f0  sth 4, 52(31)
  04bb5f4  cmpwi 3, 0
  04bb5f8  lfs 3, 72(31)
  04bb5fc  bt 2, 0x4bb618
  04bb600  lis 4, 76
  04bb604  lis 3, 143
  04bb608  addi 4, 4, -19480
  04bb60c  lfs 2, 18548(3)
  04bb610  lfs 1, 0(4)
  04bb614  b 0x4bb62c
  04bb618  lis 4, 76
  04bb61c  lis 3, 143
  04bb620  addi 4, 4, -19480
  04bb624  lfs 2, 18548(3)
  04bb628  lfs 1, 4(4)
  04bb62c  fmuls 2, 2, 1
  04bb630  fmr 1, 3
  04bb634  bl 0x502578
  04bb638  nop
  04bb63c  stfs 1, 0(28)
  04bb640  stw 30, 12(28)
  04bb644  stfs 1, 72(31)
  04bb648  stb 29, 32(31)
  04bb64c  b 0x4bb7ec
  04bb650  lfs 1, 0(28)
  04bb654  stw 30, 12(28)
  04bb658  stfs 1, 72(31)
  04bb65c  bt 6, 0x4bb7ec
  04bb660  li 6, 2
  04bb664  li 3, 0
  04bb668  li 4, 0
  04bb66c  ori 5, 31, 0
  04bb670  stb 6, 32(31)
  04bb674  bl 0x15d12c
  04bb678  nop
  04bb67c  stw 3, 24(28)
  04bb680  b 0x4bb7ec
  04bb684  lis 30, 143
  04bb688  lis 3, 143
  04bb68c  lis 4, 114
  04bb690  lfs 1, 18548(30)
  04bb694  lfs 2, 18552(3)
  04bb698  fdivs 2, 1, 2
  04bb69c  lis 3, 76
  04bb6a0  lfs 1, 12(28)
  04bb6a4  addi 3, 3, -19480
  04bb6a8  lfs 3, 0(3)
  04bb6ac  lfs 4, -3052(4)
  04bb6b0  fmr 31, 3
  04bb6b4  fmuls 2, 2, 31
  04bb6b8  fmuls 2, 2, 4
  04bb6bc  bl 0x502578
  04bb6c0  nop
  04bb6c4  fmr 2, 1
  04bb6c8  stfs 2, 12(28)
  04bb6cc  lfs 1, 18548(30)
  04bb6d0  fmuls 1, 1, 31
  04bb6d4  fcmpu 0, 2, 1
  04bb6d8  cror 6, 1, 2
  04bb6dc  bt 6, 0x4bb6ec
  04bb6e0  li 3, 3
  04bb6e4  stfs 1, 12(28)
  04bb6e8  stb 3, 32(31)
  04bb6ec  lwz 3, 16(28)
  04bb6f0  lfs 1, 0(28)
  04bb6f4  cmpwi 3, 0
  04bb6f8  bt 2, 0x4bb708
  04bb6fc  lfs 2, 12(28)
  04bb700  fneg 2, 2
  04bb704  b 0x4bb70c
  04bb708  lfs 2, 12(28)
  04bb70c  bl 0x502578
  04bb710  nop
  04bb714  stfs 1, 72(31)
  04bb718  b 0x4bb7ec
  04bb71c  cmpwi 27, 0
  04bb720  bt 2, 0x4bb7ec
  04bb724  li 6, 4
  04bb728  li 3, 0
  04bb72c  li 4, 0
  04bb730  ori 5, 31, 0
  04bb734  stb 6, 32(31)
  04bb738  bl 0x15d12c
  04bb73c  nop
  04bb740  stw 3, 24(28)
  04bb744  b 0x4bb7ec
  04bb748  lis 3, 143
  04bb74c  lis 4, 143
  04bb750  lfs 1, 18548(3)
  04bb754  lfs 2, 18552(4)
  04bb758  fdivs 2, 1, 2
  04bb75c  lis 3, 76
  04bb760  lfs 1, 12(28)
  04bb764  addi 27, 3, -19480
  04bb768  lis 3, 114
  04bb76c  lfs 3, 0(27)
  04bb770  lfs 4, -3052(3)
  04bb774  fmuls 2, 2, 3
  04bb778  fmuls 2, 2, 4
  04bb77c  fneg 2, 2
  04bb780  bl 0x502578
  04bb784  nop
  04bb788  stfs 1, 12(28)
  04bb78c  lfs 2, 8(27)
  04bb790  fcmpu 0, 1, 2
  04bb794  cror 6, 0, 2
  04bb798  bt 6, 0x4bb7a4
  04bb79c  stw 30, 12(28)
  04bb7a0  stb 29, 32(31)
  04bb7a4  lwz 3, 16(28)
  04bb7a8  lfs 2, 0(28)
  04bb7ac  cmpwi 3, 0
  04bb7b0  bt 2, 0x4bb7c0
  04bb7b4  lfs 1, 12(28)
  04bb7b8  fneg 1, 1
  04bb7bc  b 0x4bb7c4
  04bb7c0  lfs 1, 12(28)
  04bb7c4  fmr 3, 1
  04bb7c8  fmr 1, 2
  04bb7cc  fmr 2, 3
  04bb7d0  bl 0x502578
  04bb7d4  nop
  04bb7d8  cmpwi 26, 0
  04bb7dc  stfs 1, 72(31)
  04bb7e0  bt 2, 0x4bb7ec
  04bb7e4  li 3, 2
  04bb7e8  stb 3, 32(31)
  04bb7ec  ld 0, 208(1)
  04bb7f0  mtlr 0
  04bb7f4  lfd 31, 184(1)
  04bb7f8  ld 24, 120(1)
  04bb7fc  ld 25, 128(1)
  04bb800  ld 26, 136(1)
  04bb804  ld 27, 144(1)
  04bb808  ld 28, 152(1)
  04bb80c  ld 29, 160(1)
  04bb810  ld 30, 168(1)
  04bb814  ld 31, 176(1)
  04bb818  addi 1, 1, 192
  04bb81c  blr

M990_004bb820:   # 0x4bb820, 0x14 bytes
  04bb820  lis 3, 143
  04bb824  lis 4, 1
  04bb828  addic 3, 3, 18560
  04bb82c  stw 4, 72(3)
  04bb830  blr

M990_004bb840:   # 0x4bb840, 0x74 bytes
  04bb840  stdu 1, -128(1)
  04bb844  mflr 0
  04bb848  std 0, 144(1)
  04bb84c  std 30, 112(1)
  04bb850  std 31, 120(1)
  04bb854  li 30, 0
  04bb858  lwz 31, 120(3)
  04bb85c  lwz 3, 96(31)
  04bb860  li 4, 0
  04bb864  li 5, 0
  04bb868  li 6, 0
  04bb86c  extsw 3, 3
  04bb870  bl 0x10434c
  04bb874  nop
  04bb878  addic 30, 30, 1
  04bb87c  addic 31, 31, 4
  04bb880  cmpwi 30, 16
  04bb884  bt 0, 0x4bb85c
  04bb888  lis 3, 76
  04bb88c  addi 3, 3, -18376
  04bb890  lfs 1, 0(3)
  04bb894  bl 0x1d0f24
  04bb898  nop
  04bb89c  ld 0, 144(1)
  04bb8a0  mtlr 0
  04bb8a4  ld 30, 112(1)
  04bb8a8  ld 31, 120(1)
  04bb8ac  addi 1, 1, 128
  04bb8b0  blr

M990_004bb8b8:   # 0x4bb8b8, 0x80 bytes
  04bb8b8  stdu 1, -128(1)
  04bb8bc  mflr 0
  04bb8c0  std 0, 144(1)
  04bb8c4  std 30, 112(1)
  04bb8c8  std 31, 120(1)
  04bb8cc  li 30, 0
  04bb8d0  lwz 31, 120(3)
  04bb8d4  lwz 3, 96(31)
  04bb8d8  li 4, 1
  04bb8dc  li 5, 1
  04bb8e0  li 6, 1
  04bb8e4  extsw 3, 3
  04bb8e8  bl 0x10434c
  04bb8ec  nop
  04bb8f0  addic 30, 30, 1
  04bb8f4  addic 31, 31, 4
  04bb8f8  cmpwi 30, 16
  04bb8fc  bt 0, 0x4bb8d4
  04bb900  lis 4, 76
  04bb904  lis 3, 161
  04bb908  lis 5, 17044
  04bb90c  addi 4, 4, -18252
  04bb910  stw 5, 2356(3)
  04bb914  lfs 1, 0(4)
  04bb918  bl 0x1d0f24
  04bb91c  nop
  04bb920  ld 0, 144(1)
  04bb924  mtlr 0
  04bb928  ld 30, 112(1)
  04bb92c  ld 31, 120(1)
  04bb930  addi 1, 1, 128
  04bb934  blr

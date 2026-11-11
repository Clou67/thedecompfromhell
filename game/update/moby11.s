# game/update/moby11.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_11:   # 0x1bd450, 0x980 bytes
  01bd450  stdu 1, -224(1)
  01bd454  mflr 0
  01bd458  std 0, 240(1)
  01bd45c  stfd 30, 208(1)
  01bd460  stfd 31, 216(1)
  01bd464  lis 4, 28
  01bd468  lis 5, 118
  01bd46c  li 6, 15772
  01bd470  addi 4, 4, -11296
  01bd474  std 31, 200(1)
  01bd478  li 7, 4
  01bd47c  ori 31, 3, 0
  01bd480  <unknown>
  01bd484  std 30, 192(1)
  01bd488  <unknown>
  01bd48c  lwz 30, 120(3)
  01bd490  vspltw 3, 3, 0
  01bd494  vaddfp 2, 2, 3
  01bd498  vspltw 3, 2, 0
  01bd49c  stvewx 3, 6, 5
  01bd4a0  <unknown>
  01bd4a4  vspltw 4, 4, 0
  01bd4a8  vcmpgtfp. 3, 3, 4
  01bd4ac  std 29, 184(1)
  01bd4b0  std 28, 176(1)
  01bd4b4  std 27, 168(1)
  01bd4b8  std 26, 160(1)
  01bd4bc  bt 26, 0x1bd4e4
  01bd4c0  lis 3, 28
  01bd4c4  li 5, 8
  01bd4c8  addi 3, 3, -11296
  01bd4cc  lis 6, -16312
  01bd4d0  lis 4, 118
  01bd4d4  ori 6, 6, 62915
  01bd4d8  <unknown>
  01bd4dc  vspltw 2, 2, 0
  01bd4e0  stw 6, 15772(4)
  01bd4e4  lis 3, 28
  01bd4e8  li 4, 12
  01bd4ec  vspltw 2, 2, 0
  01bd4f0  addi 3, 3, -11296
  01bd4f4  vspltisw 5, -1
  01bd4f8  li 5, 16
  01bd4fc  vspltisw 7, -1
  01bd500  vspltisw 9, -1
  01bd504  vslw 5, 5, 5
  01bd508  <unknown>
  01bd50c  <unknown>
  01bd510  vspltw 3, 3, 0
  01bd514  vspltw 4, 4, 0
  01bd518  li 4, 20
  01bd51c  vslw 7, 7, 7
  01bd520  vsubfp 3, 3, 2
  01bd524  vsubfp 4, 4, 2
  01bd528  li 5, 24
  01bd52c  vslw 9, 9, 9
  01bd530  vcmpgtfp 6, 3, 2
  01bd534  vsel 2, 3, 2, 6
  01bd538  <unknown>
  01bd53c  <unknown>
  01bd540  vspltw 6, 6, 0
  01bd544  vcmpgtfp 3, 2, 4
  01bd548  vsel 2, 4, 2, 3
  01bd54c  vspltisw 3, -1
  01bd550  vspltw 8, 8, 0
  01bd554  li 4, 28
  01bd558  vmaddfp 4, 2, 2, 5
  01bd55c  vslw 3, 3, 3
  01bd560  vspltisw 5, -1
  01bd564  li 5, 32
  01bd568  <unknown>
  01bd56c  li 4, 36
  01bd570  vslw 5, 5, 5
  01bd574  vmaddfp 3, 4, 2, 3
  01bd578  vmaddfp 5, 4, 3, 5
  01bd57c  vmaddfp 2, 3, 6, 2
  01bd580  vspltw 3, 10, 0
  01bd584  <unknown>
  01bd588  vspltw 6, 6, 0
  01bd58c  li 5, 48
  01bd590  vmaddfp 7, 4, 5, 7
  01bd594  vmaddfp 2, 5, 8, 2
  01bd598  vspltisw 8, -1
  01bd59c  <unknown>
  01bd5a0  li 4, 40
  01bd5a4  vspltw 5, 5, 0
  01bd5a8  vmaddfp 4, 4, 7, 9
  01bd5ac  vmaddfp 2, 7, 3, 2
  01bd5b0  vslw 3, 8, 8
  01bd5b4  <unknown>
  01bd5b8  vspltisw 7, -16
  01bd5bc  li 4, 44
  01bd5c0  vspltisw 8, 0
  01bd5c4  vmaddfp 2, 4, 6, 2
  01bd5c8  vspltw 4, 9, 0
  01bd5cc  vrlw 6, 4, 7
  01bd5d0  vmaddfp 2, 2, 5, 3
  01bd5d4  <unknown>
  01bd5d8  <unknown>
  01bd5dc  li 4, 144
  01bd5e0  vspltw 3, 3, 0
  01bd5e4  vspltw 5, 5, 0
  01bd5e8  lbz 3, 32(31)
  01bd5ec  cmpwi 3, 1
  01bd5f0  cmpwi 1, 3, -1
  01bd5f4  cmpwi 6, 3, 0
  01bd5f8  cmpwi 7, 3, 2
  01bd5fc  vctsxs 2, 2, 0
  01bd600  vmsumshm 6, 2, 6, 8
  01bd604  vmulouh 2, 2, 4
  01bd608  vslw 4, 6, 7
  01bd60c  vadduwm 2, 4, 2
  01bd610  vadduwm 2, 2, 3
  01bd614  vor 2, 2, 5
  01bd618  vspltw 2, 2, 0
  01bd61c  stvewx 2, 4, 31
  01bd620  bt 1, 0x1bd630
  01bd624  bf 5, 0x1bdda0
  01bd628  bf 25, 0x1bd640
  01bd62c  b 0x1bd6f8
  01bd630  bf 29, 0x1bd8a4
  01bd634  cmpwi 3, 3
  01bd638  bf 1, 0x1bdd7c
  01bd63c  b 0x1bdda0
  01bd640  ori 28, 31, 0
  01bd644  li 4, 1
  01bd648  li 31, 0
  01bd64c  li 3, 1143
  01bd650  stb 4, 32(28)
  01bd654  stw 31, 0(30)
  01bd658  stw 31, 4(30)
  01bd65c  bl 0xefa28
  01bd660  nop
  01bd664  stw 3, 12(30)
  01bd668  lhz 4, 52(3)
  01bd66c  li 5, 64
  01bd670  lis 6, 28
  01bd674  ori 4, 4, 2
  01bd678  addic 29, 30, 16
  01bd67c  sth 4, 52(3)
  01bd680  lwz 4, 12(30)
  01bd684  addi 3, 6, -11296
  01bd688  sth 5, 50(4)
  01bd68c  lwz 4, 12(30)
  01bd690  lfs 1, 16(28)
  01bd694  stfs 1, 16(4)
  01bd698  lwz 4, 12(30)
  01bd69c  lfs 1, 20(28)
  01bd6a0  stfs 1, 20(4)
  01bd6a4  lfs 1, 52(3)
  01bd6a8  lfs 2, 24(28)
  01bd6ac  lwz 3, 12(30)
  01bd6b0  fadds 1, 2, 1
  01bd6b4  stfs 1, 24(3)
  01bd6b8  stw 31, 144(30)
  01bd6bc  slwi 3, 31, 6
  01bd6c0  ori 4, 31, 0
  01bd6c4  addc 5, 3, 29
  01bd6c8  lwz 3, 12(30)
  01bd6cc  clrldi 5, 5, 32
  01bd6d0  bl 0xf0ea8
  01bd6d4  nop
  01bd6d8  addic 31, 31, 1
  01bd6dc  extsw 31, 31
  01bd6e0  cmpwi 31, 2
  01bd6e4  bt 0, 0x1bd6bc
  01bd6e8  lwz 3, 12(30)
  01bd6ec  bl 0xf31a8
  01bd6f0  nop
  01bd6f4  b 0x1bdda0
  01bd6f8  lis 3, 28
  01bd6fc  lwz 4, 144(30)
  01bd700  lfs 2, 144(30)
  01bd704  addi 3, 3, -11296
  01bd708  cmpwi 4, 0
  01bd70c  lfs 1, 56(3)
  01bd710  bf 1, 0x1bd728
  01bd714  lis 3, 28
  01bd718  addi 3, 3, -11296
  01bd71c  lfs 3, 60(3)
  01bd720  fsubs 2, 2, 3
  01bd724  stfs 2, 144(30)
  01bd728  fcmpu 0, 2, 1
  01bd72c  bt 1, 0x1bd740
  01bd730  lwz 3, 12(30)
  01bd734  lhz 4, 52(3)
  01bd738  ori 4, 4, 1
  01bd73c  sth 4, 52(3)
  01bd740  lis 3, 161
  01bd744  lwz 3, 1808(3)
  01bd748  srawi 4, 3, 3
  01bd74c  addze 4, 4
  01bd750  sldi 4, 4, 3
  01bd754  subc 3, 3, 4
  01bd758  cmpwi 3, 0
  01bd75c  bf 2, 0x1bd800
  01bd760  lis 3, 151
  01bd764  lfs 1, 20(31)
  01bd768  lfs 2, 16(31)
  01bd76c  addic 3, 3, -25376
  01bd770  lis 4, 28
  01bd774  lfs 3, 132(3)
  01bd778  lfs 4, 128(3)
  01bd77c  fsubs 1, 1, 3
  01bd780  fsubs 2, 2, 4
  01bd784  addi 4, 4, -11296
  01bd788  fmuls 1, 1, 1
  01bd78c  fmadds 1, 2, 2, 1
  01bd790  lfs 2, 64(4)
  01bd794  fsqrts 1, 1
  01bd798  fcmpu 0, 1, 2
  01bd79c  bt 1, 0x1bd800
  01bd7a0  lfs 1, 24(31)
  01bd7a4  lis 4, 28
  01bd7a8  lfs 2, 136(3)
  01bd7ac  addi 4, 4, -11296
  01bd7b0  fsubs 1, 1, 2
  01bd7b4  lfs 2, 68(4)
  01bd7b8  fabs 1, 1
  01bd7bc  fcmpu 0, 1, 2
  01bd7c0  bt 1, 0x1bd800
  01bd7c4  li 3, 2
  01bd7c8  lbz 4, 83(31)
  01bd7cc  cmpwi 4, 1
  01bd7d0  stb 3, 32(31)
  01bd7d4  bt 2, 0x1bd7f0
  01bd7d8  ori 3, 31, 0
  01bd7dc  li 4, 1
  01bd7e0  li 5, 0
  01bd7e4  li 6, 10
  01bd7e8  bl 0xfddc0
  01bd7ec  nop
  01bd7f0  lwz 3, 12(30)
  01bd7f4  lhz 4, 52(3)
  01bd7f8  rlwinm 4, 4, 0, 0, 30
  01bd7fc  sth 4, 52(3)
  01bd800  lis 3, 113
  01bd804  ori 4, 31, 0
  01bd808  addic 3, 3, -29928
  01bd80c  bl 0x6d7e0
  01bd810  nop
  01bd814  lis 31, 118
  01bd818  addic 3, 30, 32
  01bd81c  li 4, 2
  01bd820  lfs 1, 15764(31)
  01bd824  bl 0x501980
  01bd828  nop
  01bd82c  lis 29, 118
  01bd830  addic 3, 30, 96
  01bd834  li 4, 2
  01bd838  lfs 1, 15768(29)
  01bd83c  bl 0x501980
  01bd840  nop
  01bd844  lis 3, 28
  01bd848  lfs 1, 15764(31)
  01bd84c  addi 28, 3, -11296
  01bd850  lfs 2, 72(28)
  01bd854  bl 0x502578
  01bd858  nop
  01bd85c  stfs 1, 15764(31)
  01bd860  lfs 1, 15768(29)
  01bd864  lfs 2, 76(28)
  01bd868  bl 0x502578
  01bd86c  nop
  01bd870  lwz 3, 12(30)
  01bd874  stfs 1, 15768(29)
  01bd878  lfs 1, 144(30)
  01bd87c  lfs 2, 80(28)
  01bd880  lwz 4, 36(3)
  01bd884  lfs 3, 36(4)
  01bd888  fmuls 1, 1, 3
  01bd88c  fmuls 1, 1, 2
  01bd890  stfs 1, 44(3)
  01bd894  lwz 3, 12(30)
  01bd898  bl 0xf31a8
  01bd89c  nop
  01bd8a0  b 0x1bdda0
  01bd8a4  lwz 4, 144(30)
  01bd8a8  lis 3, 16256
  01bd8ac  lfs 1, 144(30)
  01bd8b0  srawi 5, 4, 31
  01bd8b4  srwi 6, 5, 1
  01bd8b8  xor 4, 6, 4
  01bd8bc  subc 4, 4, 5
  01bd8c0  cmpw 4, 3
  01bd8c4  bf 0, 0x1bd8dc
  01bd8c8  lis 3, 28
  01bd8cc  addi 3, 3, -11296
  01bd8d0  lfs 2, 60(3)
  01bd8d4  fadds 1, 1, 2
  01bd8d8  stfs 1, 144(30)
  01bd8dc  lis 29, 151
  01bd8e0  lfs 1, 20(31)
  01bd8e4  lis 3, 161
  01bd8e8  addic 29, 29, -25376
  01bd8ec  lfs 2, 132(29)
  01bd8f0  lfs 3, 16(31)
  01bd8f4  fsubs 1, 1, 2
  01bd8f8  lfs 2, 128(29)
  01bd8fc  fsubs 2, 3, 2
  01bd900  lfs 3, 24(31)
  01bd904  lfs 4, 136(29)
  01bd908  lwz 3, 1808(3)
  01bd90c  fsubs 30, 3, 4
  01bd910  srawi 4, 3, 3
  01bd914  fmuls 1, 1, 1
  01bd918  addze 4, 4
  01bd91c  sldi 4, 4, 3
  01bd920  subc 3, 3, 4
  01bd924  cmpwi 3, 0
  01bd928  fabs 30, 30
  01bd92c  fmadds 31, 2, 2, 1
  01bd930  fsqrts 31, 31
  01bd934  bf 2, 0x1bd994
  01bd938  lis 3, 28
  01bd93c  addi 3, 3, -11296
  01bd940  lfs 1, 84(3)
  01bd944  fcmpu 0, 31, 1
  01bd948  bt 1, 0x1bd964
  01bd94c  lis 3, 28
  01bd950  addi 3, 3, -11296
  01bd954  lfs 1, 88(3)
  01bd958  fcmpu 0, 30, 1
  01bd95c  cror 6, 0, 2
  01bd960  bt 6, 0x1bd994
  01bd964  li 3, 1
  01bd968  lbz 4, 83(31)
  01bd96c  cmpwi 4, 0
  01bd970  stb 3, 32(31)
  01bd974  bt 2, 0x1bdda0
  01bd978  ori 3, 31, 0
  01bd97c  li 4, 0
  01bd980  li 5, 0
  01bd984  li 6, 10
  01bd988  bl 0xfddc0
  01bd98c  nop
  01bd990  b 0x1bdda0
  01bd994  lis 3, 113
  01bd998  ori 4, 31, 0
  01bd99c  addic 3, 3, -29928
  01bd9a0  bl 0x6d7e0
  01bd9a4  nop
  01bd9a8  lis 28, 118
  01bd9ac  addic 3, 30, 32
  01bd9b0  li 4, 2
  01bd9b4  lfs 1, 15764(28)
  01bd9b8  bl 0x501980
  01bd9bc  nop
  01bd9c0  lis 27, 118
  01bd9c4  addic 3, 30, 96
  01bd9c8  li 4, 2
  01bd9cc  lfs 1, 15768(27)
  01bd9d0  bl 0x501980
  01bd9d4  nop
  01bd9d8  lis 3, 28
  01bd9dc  lfs 1, 15764(28)
  01bd9e0  addi 26, 3, -11296
  01bd9e4  lfs 2, 72(26)
  01bd9e8  bl 0x502578
  01bd9ec  nop
  01bd9f0  stfs 1, 15764(28)
  01bd9f4  lfs 1, 15768(27)
  01bd9f8  lfs 2, 76(26)
  01bd9fc  bl 0x502578
  01bda00  nop
  01bda04  lwz 3, 12(30)
  01bda08  stfs 1, 15768(27)
  01bda0c  lfs 1, 144(30)
  01bda10  lfs 2, 80(26)
  01bda14  lwz 4, 36(3)
  01bda18  lfs 3, 36(4)
  01bda1c  fmuls 1, 1, 3
  01bda20  fmuls 1, 1, 2
  01bda24  stfs 1, 44(3)
  01bda28  lwz 3, 12(30)
  01bda2c  bl 0xf31a8
  01bda30  nop
  01bda34  lwz 30, 8332(29)
  01bda38  lwz 3, 8324(29)
  01bda3c  li 6, 1
  01bda40  lbz 4, 8356(29)
  01bda44  cmpwi 30, 0
  01bda48  lbz 5, 82(31)
  01bda4c  lfs 1, 152(29)
  01bda50  lfs 2, 16(31)
  01bda54  lfs 3, 128(29)
  01bda58  lfs 4, 20(31)
  01bda5c  lfs 5, 132(29)
  01bda60  bt 2, 0x1bda78
  01bda64  cmpwi 3, 3
  01bda68  bt 2, 0x1bda78
  01bda6c  cmpwi 30, 1
  01bda70  bt 2, 0x1bda78
  01bda74  li 6, 0
  01bda78  cmpwi 3, 29
  01bda7c  bt 2, 0x1bda8c
  01bda80  cmpwi 3, 50
  01bda84  ori 29, 6, 0
  01bda88  bf 2, 0x1bda94
  01bda8c  li 6, 0
  01bda90  ori 29, 6, 0
  01bda94  lis 3, 28
  01bda98  li 7, 0
  01bda9c  addi 3, 3, -11296
  01bdaa0  subc 7, 7, 4
  01bdaa4  li 9, 0
  01bdaa8  cntlzw 7, 7
  01bdaac  li 8, 0
  01bdab0  lfs 6, 92(3)
  01bdab4  subc 6, 6, 9
  01bdab8  sldi 3, 7, 58
  01bdabc  fcmpu 0, 31, 6
  01bdac0  sradi 3, 3, 63
  01bdac4  subc 4, 8, 4
  01bdac8  and 3, 3, 6
  01bdacc  li 6, 1
  01bdad0  cntlzw 4, 4
  01bdad4  subc 5, 6, 5
  01bdad8  li 7, 0
  01bdadc  sldi 4, 4, 58
  01bdae0  cntlzw 5, 5
  01bdae4  subc 6, 29, 7
  01bdae8  sradi 4, 4, 63
  01bdaec  addc 3, 9, 3
  01bdaf0  li 30, 0
  01bdaf4  sldi 5, 5, 58
  01bdaf8  and 29, 4, 6
  01bdafc  subc 3, 3, 30
  01bdb00  sradi 4, 5, 63
  01bdb04  addc 29, 7, 29
  01bdb08  and 3, 4, 3
  01bdb0c  addc 30, 30, 3
  01bdb10  bt 1, 0x1bdb2c
  01bdb14  lis 3, 28
  01bdb18  addi 3, 3, -11296
  01bdb1c  lfs 6, 96(3)
  01bdb20  fcmpu 0, 30, 6
  01bdb24  cror 6, 0, 2
  01bdb28  bt 6, 0x1bdb34
  01bdb2c  li 30, 0
  01bdb30  ori 29, 30, 0
  01bdb34  fsubs 2, 2, 3
  01bdb38  fsubs 3, 4, 5
  01bdb3c  lis 3, 28
  01bdb40  addi 3, 3, -11296
  01bdb44  lis 4, 115
  01bdb48  addic 4, 4, 22784
  01bdb4c  fabs 5, 2
  01bdb50  fabs 6, 3
  01bdb54  stfs 2, 112(1)
  01bdb58  stfs 3, 116(1)
  01bdb5c  fsubs 2, 5, 6
  01bdb60  stfs 2, 120(1)
  01bdb64  lwz 5, 112(1)
  01bdb68  lfs 4, 56(3)
  01bdb6c  lfs 2, 112(1)
  01bdb70  lwz 3, 116(1)
  01bdb74  lfs 3, 116(1)
  01bdb78  lwz 6, 120(1)
  01bdb7c  rlwinm 3, 3, 3, 29, 29
  01bdb80  fabs 7, 3
  01bdb84  lfs 3, 120(1)
  01bdb88  fabs 2, 2
  01bdb8c  rlwimi 3, 6, 2, 30, 30
  01bdb90  fsub 8, 3, 4
  01bdb94  rlwimi 3, 5, 4, 28, 28
  01bdb98  fsub 9, 3, 4
  01bdb9c  ori 5, 4, 0
  01bdba0  rlwimi 5, 3, 2, 26, 28
  01bdba4  slwi 3, 3, 2
  01bdba8  clrldi 5, 5, 32
  01bdbac  fsel 6, 8, 2, 6
  01bdbb0  lfsx 2, 4, 3
  01bdbb4  lfs 3, 4(5)
  01bdbb8  fsel 5, 9, 7, 5
  01bdbbc  fcmpu 0, 6, 4
  01bdbc0  bt 1, 0x1bdbc8
  01bdbc4  b 0x1bdce8
  01bdbc8  fsubs 7, 5, 6
  01bdbcc  fadds 5, 5, 6
  01bdbd0  addic 3, 1, 16
  01bdbd4  li 7, 2
  01bdbd8  addic 4, 3, 108
  01bdbdc  addic 5, 3, 124
  01bdbe0  mtctr 7
  01bdbe4  fdivs 5, 7, 5
  01bdbe8  fmuls 6, 5, 5
  01bdbec  stfs 5, 136(1)
  01bdbf0  stfs 5, 128(1)
  01bdbf4  stfs 5, 132(1)
  01bdbf8  stfs 5, 124(1)
  01bdbfc  lfs 8, 136(1)
  01bdc00  lfs 9, 128(1)
  01bdc04  lfs 10, 132(1)
  01bdc08  fmuls 7, 6, 6
  01bdc0c  fmuls 9, 9, 6
  01bdc10  fmuls 8, 8, 7
  01bdc14  fmuls 5, 7, 7
  01bdc18  fmuls 7, 10, 7
  01bdc1c  stfs 9, 128(1)
  01bdc20  fmuls 6, 8, 6
  01bdc24  stfs 7, 132(1)
  01bdc28  stfs 6, 136(1)
  01bdc2c  lfs 6, 108(3)
  01bdc30  fmuls 6, 6, 5
  01bdc34  stfs 6, 124(3)
  01bdc38  lfs 6, 4(4)
  01bdc3c  addic 3, 3, 8
  01bdc40  addic 4, 4, 8
  01bdc44  fmuls 6, 6, 5
  01bdc48  stfs 6, 4(5)
  01bdc4c  addic 5, 5, 8
  01bdc50  bdnz 0x1bdc2c
  01bdc54  li 5, 4
  01bdc58  ori 3, 1, 0
  01bdc5c  mtctr 5
  01bdc60  lis 4, 115
  01bdc64  addic 5, 3, 124
  01bdc68  addic 4, 4, 22752
  01bdc6c  ori 6, 5, 0
  01bdc70  lfs 5, 124(3)
  01bdc74  lfs 6, 0(4)
  01bdc78  fmuls 5, 5, 6
  01bdc7c  lfs 6, 4(4)
  01bdc80  addic 4, 4, 8
  01bdc84  stfs 5, 124(3)
  01bdc88  lfs 5, 4(5)
  01bdc8c  addic 3, 3, 8
  01bdc90  fmuls 5, 5, 6
  01bdc94  stfs 5, 4(5)
  01bdc98  addic 5, 5, 8
  01bdc9c  bdnz 0x1bdc70
  01bdca0  ori 3, 1, 0
  01bdca4  mtctr 7
  01bdca8  lfs 5, 124(3)
  01bdcac  fadds 4, 4, 5
  01bdcb0  lfs 5, 4(6)
  01bdcb4  addic 3, 3, 16
  01bdcb8  lfs 6, 8(6)
  01bdcbc  lfs 7, 12(6)
  01bdcc0  addic 6, 6, 16
  01bdcc4  fadds 4, 4, 5
  01bdcc8  fadds 4, 4, 6
  01bdccc  fadds 4, 4, 7
  01bdcd0  bdnz 0x1bdca8
  01bdcd4  lis 3, 28
  01bdcd8  addi 3, 3, -11296
  01bdcdc  lfs 5, 100(3)
  01bdce0  fadds 4, 4, 5
  01bdce4  fmadds 4, 4, 2, 3
  01bdce8  fmr 2, 4
  01bdcec  bl 0x5026a0
  01bdcf0  nop
  01bdcf4  lis 3, 28
  01bdcf8  addi 3, 3, -11296
  01bdcfc  lfs 2, 104(3)
  01bdd00  fcmpu 0, 1, 2
  01bdd04  cror 6, 0, 2
  01bdd08  bt 6, 0x1bdd14
  01bdd0c  li 30, 0
  01bdd10  ori 29, 30, 0
  01bdd14  cmpwi 29, 0
  01bdd18  li 3, 0
  01bdd1c  bt 2, 0x1bdd3c
  01bdd20  li 3, 1
  01bdd24  li 4, 21475
  01bdd28  bl 0x11aeec
  01bdd2c  nop
  01bdd30  cntlzw 3, 3
  01bdd34  rlwinm 3, 3, 27, 31, 31
  01bdd38  xori 3, 3, 1
  01bdd3c  lis 4, 150
  01bdd40  addic 4, 4, 19008
  01bdd44  lwz 4, 164(4)
  01bdd48  rlwinm 4, 4, 0, 27, 27
  01bdd4c  cmpwi 4, 0
  01bdd50  bt 2, 0x1bdda0
  01bdd54  cmpwi 1, 3, 0
  01bdd58  cmpwi 30, 0
  01bdd5c  cror 2, 2, 6
  01bdd60  bt 2, 0x1bdda0
  01bdd64  ori 3, 31, 0
  01bdd68  bl 0x16a8f0
  01bdd6c  nop
  01bdd70  li 3, 3
  01bdd74  stb 3, 32(31)
  01bdd78  b 0x1bdda0
  01bdd7c  lwz 3, 12(30)
  01bdd80  cmpwi 3, 0
  01bdd84  bt 2, 0x1bdda0
  01bdd88  li 4, 0
  01bdd8c  stw 4, 144(30)
  01bdd90  stw 4, 44(3)
  01bdd94  lwz 3, 12(30)
  01bdd98  bl 0xf31a8
  01bdd9c  nop
  01bdda0  ld 0, 240(1)
  01bdda4  mtlr 0
  01bdda8  lfd 30, 208(1)
  01bddac  lfd 31, 216(1)
  01bddb0  ld 26, 160(1)
  01bddb4  ld 27, 168(1)
  01bddb8  ld 28, 176(1)
  01bddbc  ld 29, 184(1)
  01bddc0  ld 30, 192(1)
  01bddc4  ld 31, 200(1)
  01bddc8  addi 1, 1, 224
  01bddcc  blr

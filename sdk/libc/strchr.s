# sdk/libc/strchr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strchr:   # 0x5cc578, 0x20c bytes
  05cc578  clrlwi 0, 3, 29
  05cc57c  cmpwi 7, 0, 0
  05cc580  bf 30, 0x5cc688
  05cc584  lis 8, 32639
  05cc588  ld 6, 0(3)
  05cc58c  ori 8, 8, 32639
  05cc590  sldi 8, 8, 32
  05cc594  oris 8, 8, 32639
  05cc598  ori 8, 8, 32639
  05cc59c  and 0, 6, 8
  05cc5a0  or 9, 6, 8
  05cc5a4  add 0, 0, 8
  05cc5a8  nor 11, 0, 9
  05cc5ac  cmpdi 7, 11, 0
  05cc5b0  bf 30, 0x5cc63c
  05cc5b4  clrldi 0, 4, 56
  05cc5b8  sldi 9, 0, 8
  05cc5bc  or 0, 0, 9
  05cc5c0  sldi 11, 0, 16
  05cc5c4  or 0, 0, 11
  05cc5c8  sldi 10, 0, 32
  05cc5cc  or 7, 0, 10
  05cc5d0  xor 9, 7, 6
  05cc5d4  and 0, 9, 8
  05cc5d8  or 9, 9, 8
  05cc5dc  add 0, 0, 8
  05cc5e0  nor 0, 0, 9
  05cc5e4  cmpdi 7, 0, 0
  05cc5e8  bt 30, 0x5cc5f4
  05cc5ec  b 0x5cc75c
  05cc5f0  bf 26, 0x5cc75c
  05cc5f4  lis 0, 32639
  05cc5f8  ldu 10, 8(3)
  05cc5fc  ori 0, 0, 32639
  05cc600  xor 8, 7, 10
  05cc604  sldi 0, 0, 32
  05cc608  oris 0, 0, 32639
  05cc60c  ori 0, 0, 32639
  05cc610  and 11, 8, 0
  05cc614  and 9, 10, 0
  05cc618  add 11, 11, 0
  05cc61c  add 9, 9, 0
  05cc620  or 10, 10, 0
  05cc624  or 8, 8, 0
  05cc628  nor 0, 11, 8
  05cc62c  nor 11, 9, 10
  05cc630  cmpdi 6, 0, 0
  05cc634  cmpdi 11, 0
  05cc638  bt 2, 0x5cc5f0
  05cc63c  mr 9, 3
  05cc640  clrldi 3, 9, 32
  05cc644  extsb 4, 4
  05cc648  lbz 0, 0(3)
  05cc64c  extsb 0, 0
  05cc650  cmpw 7, 4, 0
  05cc654  bclr 12, 30
  05cc658  cmpwi 7, 0, 0
  05cc65c  bf 30, 0x5cc668
  05cc660  b 0x5cc754
  05cc664  bt 26, 0x5cc754
  05cc668  addi 9, 9, 1
  05cc66c  clrldi 3, 9, 32
  05cc670  lbz 0, 0(3)
  05cc674  extsb 0, 0
  05cc678  cmpw 7, 4, 0
  05cc67c  cmpwi 6, 0, 0
  05cc680  bf 30, 0x5cc664
  05cc684  blr
  05cc688  clrlwi 0, 3, 30
  05cc68c  mr 9, 3
  05cc690  cmpwi 7, 0, 0
  05cc694  bf 30, 0x5cc640
  05cc698  lis 8, 32639
  05cc69c  lwz 11, 0(3)
  05cc6a0  ori 8, 8, 32639
  05cc6a4  oris 0, 11, 32639
  05cc6a8  and 9, 11, 8
  05cc6ac  ori 0, 0, 32639
  05cc6b0  addis 9, 9, 32639
  05cc6b4  addi 9, 9, 32639
  05cc6b8  nor 0, 0, 9
  05cc6bc  cmpwi 7, 0, 0
  05cc6c0  bf 30, 0x5cc63c
  05cc6c4  clrlwi 0, 4, 24
  05cc6c8  slwi 9, 0, 8
  05cc6cc  or 0, 0, 9
  05cc6d0  slwi 10, 0, 16
  05cc6d4  or 7, 0, 10
  05cc6d8  xor 11, 7, 11
  05cc6dc  and 9, 11, 8
  05cc6e0  oris 11, 11, 32639
  05cc6e4  addis 9, 9, 32639
  05cc6e8  ori 11, 11, 32639
  05cc6ec  addi 9, 9, 32639
  05cc6f0  nor 9, 9, 11
  05cc6f4  cmpwi 7, 9, 0
  05cc6f8  bt 30, 0x5cc704
  05cc6fc  b 0x5cc770
  05cc700  bf 26, 0x5cc770
  05cc704  lis 9, 32639
  05cc708  lwzu 0, 4(3)
  05cc70c  ori 9, 9, 32639
  05cc710  xor 10, 7, 0
  05cc714  and 11, 0, 9
  05cc718  oris 0, 0, 32639
  05cc71c  addis 11, 11, 32639
  05cc720  and 9, 10, 9
  05cc724  addi 11, 11, 32639
  05cc728  ori 0, 0, 32639
  05cc72c  addis 9, 9, 32639
  05cc730  oris 10, 10, 32639
  05cc734  nor 11, 11, 0
  05cc738  addi 8, 9, 32639
  05cc73c  ori 9, 10, 32639
  05cc740  cmpwi 7, 11, 0
  05cc744  nor 9, 8, 9
  05cc748  cmpwi 6, 9, 0
  05cc74c  bt 30, 0x5cc700
  05cc750  b 0x5cc63c
  05cc754  li 3, 0
  05cc758  blr
  05cc75c  cntlzd 0, 0
  05cc760  rldicl 0, 0, 61, 3
  05cc764  add 9, 3, 0
  05cc768  clrldi 3, 9, 32
  05cc76c  blr
  05cc770  cntlzw 0, 9
  05cc774  srwi 0, 0, 3
  05cc778  add 9, 0, 3
  05cc77c  clrldi 3, 9, 32
  05cc780  blr

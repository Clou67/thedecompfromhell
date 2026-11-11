# sdk/libc/xstoflt.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stoflt:   # 0x5ca4a0, 0x4fc bytes
  05ca4a0  slwi 0, 7, 3
  05ca4a4  std 31, -8(1)
  05ca4a8  add 31, 0, 7
  05ca4ac  std 26, -48(1)
  05ca4b0  cmpwi 7, 31, 45
  05ca4b4  mr 26, 5
  05ca4b8  std 24, -64(1)
  05ca4bc  std 25, -56(1)
  05ca4c0  std 29, -24(1)
  05ca4c4  std 27, -40(1)
  05ca4c8  std 28, -32(1)
  05ca4cc  std 30, -16(1)
  05ca4d0  mr 5, 6
  05ca4d4  mr 24, 3
  05ca4d8  mr 25, 26
  05ca4dc  mr 29, 6
  05ca4e0  bf 29, 0x5ca4e8
  05ca4e4  li 31, 45
  05ca4e8  li 9, 0
  05ca4ec  li 6, 0
  05ca4f0  stw 9, 4(5)
  05ca4f4  stw 9, 0(5)
  05ca4f8  lbz 8, 0(4)
  05ca4fc  cmpwi 7, 8, 48
  05ca500  bf 30, 0x5ca514
  05ca504  lbzu 8, 1(4)
  05ca508  cmpwi 7, 8, 48
  05ca50c  bt 30, 0x5ca504
  05ca510  li 6, 1
  05ca514  lwz 11, -24672(2)
  05ca518  rlwinm 9, 8, 1, 23, 30
  05ca51c  li 7, 0
  05ca520  cmpwi 6, 31, 0
  05ca524  lwz 30, 0(11)
  05ca528  add 9, 9, 30
  05ca52c  clrldi 9, 9, 32
  05ca530  lhz 0, 0(9)
  05ca534  rlwinm 0, 0, 0, 26, 26
  05ca538  cmpwi 7, 0, 0
  05ca53c  bf 30, 0x5ca570
  05ca540  b 0x5ca5b4
  05ca544  stb 10, 48(9)
  05ca548  lbzu 8, 1(4)
  05ca54c  addi 7, 7, 1
  05ca550  rlwinm 9, 8, 1, 23, 30
  05ca554  cmpw 6, 31, 7
  05ca558  add 9, 9, 30
  05ca55c  clrldi 9, 9, 32
  05ca560  lhz 0, 0(9)
  05ca564  rlwinm 0, 0, 0, 26, 26
  05ca568  cmpwi 7, 0, 0
  05ca56c  bt 30, 0x5ca5b0
  05ca570  extsw 0, 7
  05ca574  addi 11, 1, -160
  05ca578  addi 10, 8, -48
  05ca57c  add 9, 11, 0
  05ca580  bf 24, 0x5ca544
  05ca584  lwz 9, 0(5)
  05ca588  addi 9, 9, 1
  05ca58c  stw 9, 0(5)
  05ca590  lbzu 8, 1(4)
  05ca594  rlwinm 9, 8, 1, 23, 30
  05ca598  add 9, 9, 30
  05ca59c  clrldi 9, 9, 32
  05ca5a0  lhz 0, 0(9)
  05ca5a4  rlwinm 0, 0, 0, 26, 26
  05ca5a8  cmpwi 7, 0, 0
  05ca5ac  bf 30, 0x5ca570
  05ca5b0  li 6, 1
  05ca5b4  lwz 11, -24668(2)
  05ca5b8  extsb 10, 8
  05ca5bc  lwz 9, 44(11)
  05ca5c0  lbz 0, 0(9)
  05ca5c4  extsb 0, 0
  05ca5c8  cmpw 7, 0, 10
  05ca5cc  bt 30, 0x5ca97c
  05ca5d0  cmpwi 7, 7, 0
  05ca5d4  bf 30, 0x5ca600
  05ca5d8  extsb 0, 8
  05ca5dc  cmpwi 7, 0, 48
  05ca5e0  bf 30, 0x5ca600
  05ca5e4  lwz 9, 0(5)
  05ca5e8  addi 9, 9, -1
  05ca5ec  stw 9, 0(5)
  05ca5f0  lbzu 8, 1(4)
  05ca5f4  cmpwi 7, 8, 48
  05ca5f8  bt 30, 0x5ca5e8
  05ca5fc  li 6, 1
  05ca600  mr 10, 8
  05ca604  rlwinm 9, 10, 1, 23, 30
  05ca608  add 9, 9, 30
  05ca60c  clrldi 9, 9, 32
  05ca610  lhz 0, 0(9)
  05ca614  rlwinm 0, 0, 0, 26, 26
  05ca618  cmpwi 7, 0, 0
  05ca61c  bt 30, 0x5ca670
  05ca620  extsw 0, 7
  05ca624  addi 9, 1, -160
  05ca628  addi 10, 10, -48
  05ca62c  add 11, 9, 0
  05ca630  bt 24, 0x5ca64c
  05ca634  lwz 9, 0(5)
  05ca638  addi 7, 7, 1
  05ca63c  stb 10, 48(11)
  05ca640  addi 9, 9, -1
  05ca644  cmpw 6, 31, 7
  05ca648  stw 9, 0(5)
  05ca64c  lbzu 10, 1(4)
  05ca650  rlwinm 9, 10, 1, 23, 30
  05ca654  add 9, 9, 30
  05ca658  clrldi 9, 9, 32
  05ca65c  lhz 0, 0(9)
  05ca660  rlwinm 0, 0, 0, 26, 26
  05ca664  cmpwi 7, 0, 0
  05ca668  bf 30, 0x5ca620
  05ca66c  li 6, 1
  05ca670  bf 24, 0x5ca6a0
  05ca674  addi 0, 1, -160
  05ca678  extsw 9, 31
  05ca67c  add 11, 0, 9
  05ca680  lbz 0, 48(11)
  05ca684  extsb 0, 0
  05ca688  cmpwi 7, 0, 4
  05ca68c  bt 29, 0x5ca950
  05ca690  lwz 9, 0(5)
  05ca694  mr 7, 31
  05ca698  addi 9, 9, 1
  05ca69c  stw 9, 0(5)
  05ca6a0  cmpwi 7, 7, 0
  05ca6a4  bf 29, 0x5ca994
  05ca6a8  addi 8, 7, -1
  05ca6ac  addi 11, 1, -160
  05ca6b0  extsw 0, 8
  05ca6b4  add 9, 11, 0
  05ca6b8  lbz 11, 48(9)
  05ca6bc  cmpwi 7, 11, 0
  05ca6c0  bf 30, 0x5ca70c
  05ca6c4  clrldi 7, 7, 32
  05ca6c8  lwz 10, 0(5)
  05ca6cc  mtctr 7
  05ca6d0  b 0x5ca6ec
  05ca6d4  addi 7, 1, -160
  05ca6d8  add 9, 7, 0
  05ca6dc  lbz 0, 48(9)
  05ca6e0  cmpwi 7, 0, 0
  05ca6e4  bf 30, 0x5ca970
  05ca6e8  mr 8, 11
  05ca6ec  addi 11, 8, -1
  05ca6f0  addi 10, 10, 1
  05ca6f4  extsw 0, 11
  05ca6f8  bdnz 0x5ca6d4
  05ca6fc  stw 10, 0(5)
  05ca700  li 0, 0
  05ca704  li 7, 1
  05ca708  stb 0, -112(1)
  05ca70c  cmpwi 1, 6, 0
  05ca710  bt 6, 0x5ca90c
  05ca714  lis 6, 14563
  05ca718  srawi 11, 7, 31
  05ca71c  ori 6, 6, 36409
  05ca720  cmpwi 7, 7, 0
  05ca724  mulhw 9, 7, 6
  05ca728  srawi 9, 9, 1
  05ca72c  sub 9, 9, 11
  05ca730  slwi 0, 9, 3
  05ca734  add 0, 0, 9
  05ca738  sub 0, 7, 0
  05ca73c  subfic 10, 0, 9
  05ca740  srawi 8, 10, 31
  05ca744  mulhw 9, 10, 6
  05ca748  srawi 9, 9, 1
  05ca74c  sub 9, 9, 8
  05ca750  slwi 0, 9, 3
  05ca754  add 0, 0, 9
  05ca758  sub 0, 10, 0
  05ca75c  srawi 11, 0, 31
  05ca760  xor 9, 11, 0
  05ca764  sub 9, 11, 9
  05ca768  srwi 28, 9, 31
  05ca76c  bf 29, 0x5ca814
  05ca770  slwi 0, 28, 2
  05ca774  clrldi 7, 7, 32
  05ca778  add 12, 0, 29
  05ca77c  mr 27, 6
  05ca780  mtctr 7
  05ca784  li 6, 0
  05ca788  addi 29, 1, -112
  05ca78c  mr 31, 12
  05ca790  b 0x5ca7c0
  05ca794  addi 31, 31, 4
  05ca798  lbz 0, 0(7)
  05ca79c  addi 28, 28, 1
  05ca7a0  clrldi 9, 31, 32
  05ca7a4  extsb 0, 0
  05ca7a8  addi 12, 12, 4
  05ca7ac  addi 10, 10, 1
  05ca7b0  addi 6, 6, 1
  05ca7b4  stw 0, 0(9)
  05ca7b8  bdz 0x5ca814
  05ca7bc  srawi 8, 10, 31
  05ca7c0  add 0, 6, 29
  05ca7c4  clrldi 3, 12, 32
  05ca7c8  clrldi 7, 0, 32
  05ca7cc  mulhw 9, 10, 27
  05ca7d0  srawi 9, 9, 1
  05ca7d4  sub 9, 9, 8
  05ca7d8  slwi 0, 9, 3
  05ca7dc  add 0, 0, 9
  05ca7e0  cmpw 7, 10, 0
  05ca7e4  bt 30, 0x5ca794
  05ca7e8  lwz 0, 0(3)
  05ca7ec  addi 10, 10, 1
  05ca7f0  lbz 9, 0(7)
  05ca7f4  addi 6, 6, 1
  05ca7f8  slwi 11, 0, 3
  05ca7fc  slwi 0, 0, 1
  05ca800  extsb 9, 9
  05ca804  add 0, 0, 11
  05ca808  add 0, 0, 9
  05ca80c  stw 0, 0(3)
  05ca810  bdnz 0x5ca7bc
  05ca814  lbz 0, 0(4)
  05ca818  extsb 0, 0
  05ca81c  cmpwi 7, 0, 101
  05ca820  bt 30, 0x5ca82c
  05ca824  cmpwi 7, 0, 69
  05ca828  bf 30, 0x5ca910
  05ca82c  mr 10, 4
  05ca830  lbzu 9, 1(10)
  05ca834  extsb 7, 9
  05ca838  cmpwi 7, 7, 43
  05ca83c  bt 30, 0x5ca984
  05ca840  cmpwi 7, 7, 45
  05ca844  bt 30, 0x5ca984
  05ca848  li 7, 43
  05ca84c  clrlwi 11, 9, 24
  05ca850  li 6, 0
  05ca854  slwi 9, 11, 1
  05ca858  li 8, 0
  05ca85c  add 9, 9, 30
  05ca860  clrldi 9, 9, 32
  05ca864  lhz 0, 0(9)
  05ca868  rlwinm 0, 0, 0, 26, 26
  05ca86c  cmpwi 7, 0, 0
  05ca870  bt 30, 0x5ca8e8
  05ca874  slwi 0, 8, 3
  05ca878  slwi 9, 8, 1
  05ca87c  add 9, 9, 0
  05ca880  lis 0, 1525
  05ca884  add 9, 9, 11
  05ca888  lbzu 11, 1(10)
  05ca88c  ori 0, 0, 57599
  05ca890  addi 8, 9, -48
  05ca894  slwi 9, 11, 1
  05ca898  cmpw 6, 8, 0
  05ca89c  add 9, 9, 30
  05ca8a0  clrldi 9, 9, 32
  05ca8a4  lhz 0, 0(9)
  05ca8a8  rlwinm 0, 0, 0, 26, 26
  05ca8ac  cmpwi 7, 0, 0
  05ca8b0  bt 30, 0x5ca8e4
  05ca8b4  bf 25, 0x5ca874
  05ca8b8  lbzu 11, 1(10)
  05ca8bc  lis 0, 1525
  05ca8c0  slwi 9, 11, 1
  05ca8c4  ori 0, 0, 57599
  05ca8c8  add 9, 9, 30
  05ca8cc  cmpw 6, 8, 0
  05ca8d0  clrldi 9, 9, 32
  05ca8d4  lhz 0, 0(9)
  05ca8d8  rlwinm 0, 0, 0, 26, 26
  05ca8dc  cmpwi 7, 0, 0
  05ca8e0  bf 30, 0x5ca8b4
  05ca8e4  li 6, 1
  05ca8e8  cmpwi 7, 7, 45
  05ca8ec  bt 30, 0x5ca98c
  05ca8f0  lwz 0, 0(5)
  05ca8f4  cmpwi 7, 6, 0
  05ca8f8  add 0, 8, 0
  05ca8fc  stw 0, 0(5)
  05ca900  bt 30, 0x5ca910
  05ca904  mr 4, 10
  05ca908  b 0x5ca910
  05ca90c  li 28, 0
  05ca910  cmpwi 7, 25, 0
  05ca914  bt 30, 0x5ca920
  05ca918  bt 6, 0x5ca948
  05ca91c  stw 4, 0(26)
  05ca920  extsw 3, 28
  05ca924  ld 24, -64(1)
  05ca928  ld 25, -56(1)
  05ca92c  ld 26, -48(1)
  05ca930  ld 27, -40(1)
  05ca934  ld 28, -32(1)
  05ca938  ld 29, -24(1)
  05ca93c  ld 30, -16(1)
  05ca940  ld 31, -8(1)
  05ca944  blr
  05ca948  mr 4, 24
  05ca94c  b 0x5ca91c
  05ca950  addi 0, 31, -1
  05ca954  addi 7, 1, -160
  05ca958  extsw 0, 0
  05ca95c  add 11, 7, 0
  05ca960  lbz 9, 48(11)
  05ca964  addi 9, 9, 1
  05ca968  stb 9, 48(11)
  05ca96c  b 0x5ca690
  05ca970  mr 7, 8
  05ca974  stw 10, 0(5)
  05ca978  b 0x5ca70c
  05ca97c  lbzu 8, 1(4)
  05ca980  b 0x5ca5d0
  05ca984  lbzu 9, 1(10)
  05ca988  b 0x5ca84c
  05ca98c  neg 8, 8
  05ca990  b 0x5ca8f0
  05ca994  bf+ 30, 0x5ca70c
  05ca998  b 0x5ca700

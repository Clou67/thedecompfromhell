# sdk/libc/xgentime.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

isleapyr:   # 0x5db6ac, 0x74 bytes
  05db6ac  clrlwi 0, 3, 30
  05db6b0  lis 11, 20971
  05db6b4  cmpwi 7, 0, 0
  05db6b8  ori 11, 11, 34079
  05db6bc  srawi 8, 3, 31
  05db6c0  li 10, 0
  05db6c4  bf 30, 0x5db6f0
  05db6c8  addis 9, 3, -1
  05db6cc  li 10, 1
  05db6d0  addi 9, 9, 25536
  05db6d4  mulhw 0, 3, 11
  05db6d8  srawi 0, 0, 5
  05db6dc  cmplwi 6, 9, 399
  05db6e0  sub 0, 0, 8
  05db6e4  mulli 0, 0, 100
  05db6e8  cmpw 7, 3, 0
  05db6ec  bt 30, 0x5db6f8
  05db6f0  extsw 3, 10
  05db6f4  blr
  05db6f8  addis 3, 3, 2
  05db6fc  bf 25, 0x5db6f0
  05db700  addi 0, 3, -10673
  05db704  li 3, 1
  05db708  cmplwi 7, 0, 399
  05db70c  bf 29, 0x5db714
  05db710  li 3, 0
  05db714  mr 10, 3
  05db718  extsw 3, 10
  05db71c  blr

wkyr:   # 0x5db720, 0x54 bytes
  05db720  sub 4, 4, 3
  05db724  lis 3, -28087
  05db728  addi 4, 4, 7
  05db72c  ori 3, 3, 9363
  05db730  srawi 11, 4, 31
  05db734  mulhw 0, 4, 3
  05db738  add 0, 0, 4
  05db73c  srawi 0, 0, 2
  05db740  sub 0, 0, 11
  05db744  slwi 9, 0, 3
  05db748  sub 9, 9, 0
  05db74c  sub 4, 4, 9
  05db750  sub 5, 5, 4
  05db754  addi 5, 5, 7
  05db758  srawi 0, 5, 31
  05db75c  mulhw 3, 5, 3
  05db760  add 3, 3, 5
  05db764  srawi 3, 3, 2
  05db768  sub 3, 3, 0
  05db76c  extsw 3, 3
  05db770  blr

ISOwkyr:   # 0x5db774, 0x114 bytes
  05db774  stdu 1, -144(1)
  05db778  mflr 0
  05db77c  std 29, 120(1)
  05db780  std 30, 128(1)
  05db784  mr 29, 4
  05db788  mr 30, 5
  05db78c  std 31, 136(1)
  05db790  std 0, 160(1)
  05db794  bl 0x5db6ac
  05db798  sub 10, 29, 30
  05db79c  lis 11, -28087
  05db7a0  addi 10, 10, 371
  05db7a4  ori 11, 11, 9363
  05db7a8  srawi 7, 10, 31
  05db7ac  addi 8, 3, 365
  05db7b0  sub 6, 30, 3
  05db7b4  mulhw 9, 10, 11
  05db7b8  add 9, 9, 10
  05db7bc  cmpwi 7, 6, 363
  05db7c0  srawi 9, 9, 2
  05db7c4  sub 31, 9, 7
  05db7c8  slwi 0, 31, 3
  05db7cc  sub 0, 0, 31
  05db7d0  sub 31, 10, 0
  05db7d4  add 8, 31, 8
  05db7d8  srawi 9, 8, 31
  05db7dc  mulhw 11, 8, 11
  05db7e0  add 11, 11, 8
  05db7e4  srawi 11, 11, 2
  05db7e8  sub 11, 11, 9
  05db7ec  slwi 0, 11, 3
  05db7f0  sub 0, 0, 11
  05db7f4  sub 11, 8, 0
  05db7f8  bt 29, 0x5db854
  05db7fc  cmpwi 7, 6, 362
  05db800  bt 29, 0x5db85c
  05db804  cmpwi 7, 6, 361
  05db808  bf 29, 0x5db814
  05db80c  cmpwi 7, 11, 4
  05db810  bt 30, 0x5db864
  05db814  extsw 4, 29
  05db818  extsw 5, 30
  05db81c  li 3, 1
  05db820  bl 0x5db720
  05db824  addi 0, 31, -2
  05db828  cmplwi 7, 0, 2
  05db82c  bt 29, 0x5db834
  05db830  addi 3, 3, 1
  05db834  ld 0, 160(1)
  05db838  extsw 3, 3
  05db83c  ld 29, 120(1)
  05db840  ld 30, 128(1)
  05db844  mtlr 0
  05db848  ld 31, 136(1)
  05db84c  addi 1, 1, 144
  05db850  blr
  05db854  cmpwi 7, 11, 2
  05db858  bt 30, 0x5db864
  05db85c  cmpwi 7, 11, 3
  05db860  bf 30, 0x5db80c
  05db864  ld 0, 160(1)
  05db868  li 3, -1
  05db86c  ld 29, 120(1)
  05db870  extsw 3, 3
  05db874  ld 30, 128(1)
  05db878  ld 31, 136(1)
  05db87c  mtlr 0
  05db880  addi 1, 1, 144
  05db884  blr

ISOyear:   # 0x5db888, 0x78 bytes
  05db888  stdu 1, -128(1)
  05db88c  mflr 0
  05db890  std 30, 112(1)
  05db894  extsw 30, 3
  05db898  std 31, 120(1)
  05db89c  mr 31, 3
  05db8a0  mr 3, 30
  05db8a4  std 0, 144(1)
  05db8a8  bl 0x5db774
  05db8ac  cmpwi 7, 3, 0
  05db8b0  bf 30, 0x5db8d8
  05db8b4  addi 31, 31, -1
  05db8b8  extsw 30, 31
  05db8bc  ld 0, 144(1)
  05db8c0  mr 3, 30
  05db8c4  ld 31, 120(1)
  05db8c8  ld 30, 112(1)
  05db8cc  mtlr 0
  05db8d0  addi 1, 1, 128
  05db8d4  blr
  05db8d8  addi 31, 31, 1
  05db8dc  bt 29, 0x5db8bc
  05db8e0  extsw 30, 31
  05db8e4  ld 0, 144(1)
  05db8e8  ld 31, 120(1)
  05db8ec  mr 3, 30
  05db8f0  mtlr 0
  05db8f4  ld 30, 112(1)
  05db8f8  addi 1, 1, 128
  05db8fc  blr

getval:   # 0x5db900, 0xf0 bytes
  05db900  stdu 1, -144(1)
  05db904  mflr 0
  05db908  cmpwi 7, 7, 79
  05db90c  std 0, 160(1)
  05db910  not 0, 4
  05db914  std 28, 112(1)
  05db918  srawi 0, 0, 31
  05db91c  std 29, 120(1)
  05db920  std 30, 128(1)
  05db924  std 31, 136(1)
  05db928  mr 30, 6
  05db92c  mr 29, 5
  05db930  and 31, 4, 0
  05db934  mr 28, 3
  05db938  bt 30, 0x5db9cc
  05db93c  add 3, 29, 28
  05db940  cmpwi 7, 29, 0
  05db944  clrldi 9, 3, 32
  05db948  li 0, 0
  05db94c  stw 29, 0(30)
  05db950  stb 0, 0(9)
  05db954  bf 29, 0x5db9a8
  05db958  lis 8, 26214
  05db95c  clrldi 0, 29, 32
  05db960  ori 8, 8, 26215
  05db964  sub 7, 3, 29
  05db968  mtctr 0
  05db96c  srawi 11, 31, 31
  05db970  addi 3, 3, -1
  05db974  mulhw 0, 31, 8
  05db978  srawi 0, 0, 2
  05db97c  clrldi 10, 3, 32
  05db980  sub 0, 0, 11
  05db984  slwi 9, 0, 1
  05db988  slwi 11, 0, 3
  05db98c  add 9, 9, 11
  05db990  sub 9, 31, 9
  05db994  mr 31, 0
  05db998  addi 9, 9, 48
  05db99c  stb 9, 0(10)
  05db9a0  bdnz 0x5db96c
  05db9a4  mr 3, 7
  05db9a8  ld 0, 160(1)
  05db9ac  clrldi 3, 3, 32
  05db9b0  ld 28, 112(1)
  05db9b4  ld 29, 120(1)
  05db9b8  mtlr 0
  05db9bc  ld 30, 128(1)
  05db9c0  ld 31, 136(1)
  05db9c4  addi 1, 1, 144
  05db9c8  blr
  05db9cc  lwz 3, 72(8)
  05db9d0  clrldi 5, 6, 32
  05db9d4  extsw 4, 31
  05db9d8  bl 0x5dc734
  05db9dc  nop
  05db9e0  lwz 0, 0(30)
  05db9e4  cmpwi 7, 0, 0
  05db9e8  bt 29, 0x5db9a8
  05db9ec  b 0x5db93c

cmp_era_date:   # 0x5db9f0, 0x140 bytes
  05db9f0  stdu 1, -160(1)
  05db9f4  mflr 0
  05db9f8  std 29, 136(1)
  05db9fc  std 0, 176(1)
  05dba00  addi 0, 1, 112
  05dba04  mr 29, 4
  05dba08  std 31, 152(1)
  05dba0c  clrldi 31, 0, 32
  05dba10  std 30, 144(1)
  05dba14  mr 4, 31
  05dba18  mr 30, 3
  05dba1c  li 5, 10
  05dba20  clrldi 3, 29, 32
  05dba24  bl 0x5c8a8c
  05dba28  nop
  05dba2c  mr 11, 3
  05dba30  lwz 3, 112(1)
  05dba34  cmpw 7, 29, 3
  05dba38  bt- 30, 0x5dba4c
  05dba3c  clrldi 9, 3, 32
  05dba40  lbz 0, 0(9)
  05dba44  cmpwi 7, 0, 47
  05dba48  bt 30, 0x5dba70
  05dba4c  li 3, 2
  05dba50  ld 0, 176(1)
  05dba54  extsw 3, 3
  05dba58  ld 29, 136(1)
  05dba5c  ld 30, 144(1)
  05dba60  mtlr 0
  05dba64  ld 31, 152(1)
  05dba68  addi 1, 1, 160
  05dba6c  blr
  05dba70  lwz 9, 20(30)
  05dba74  addi 9, 9, 1900
  05dba78  cmpw 7, 11, 9
  05dba7c  bf 30, 0x5dbb00
  05dba80  addi 29, 3, 1
  05dba84  mr 4, 31
  05dba88  clrldi 3, 29, 32
  05dba8c  li 5, 10
  05dba90  bl 0x5c8a8c
  05dba94  nop
  05dba98  mr 11, 3
  05dba9c  lwz 3, 112(1)
  05dbaa0  cmpw 7, 29, 3
  05dbaa4  bt- 30, 0x5dba4c
  05dbaa8  clrldi 9, 3, 32
  05dbaac  lbz 0, 0(9)
  05dbab0  cmpwi 7, 0, 47
  05dbab4  bf 30, 0x5dba4c
  05dbab8  lwz 9, 16(30)
  05dbabc  addi 9, 9, 1
  05dbac0  cmpw 7, 11, 9
  05dbac4  bf 30, 0x5dbb00
  05dbac8  addi 3, 3, 1
  05dbacc  mr 4, 31
  05dbad0  clrldi 3, 3, 32
  05dbad4  li 5, 10
  05dbad8  bl 0x5c8a8c
  05dbadc  nop
  05dbae0  lwz 0, 112(1)
  05dbae4  cmpw 7, 29, 0
  05dbae8  mr 9, 3
  05dbaec  bt 30, 0x5dba4c
  05dbaf0  lwz 0, 12(30)
  05dbaf4  li 3, 0
  05dbaf8  cmpw 7, 9, 0
  05dbafc  bt 30, 0x5dba50
  05dbb00  bt 29, 0x5dbb28
  05dbb04  ld 0, 176(1)
  05dbb08  li 3, 1
  05dbb0c  ld 29, 136(1)
  05dbb10  extsw 3, 3
  05dbb14  ld 30, 144(1)
  05dbb18  ld 31, 152(1)
  05dbb1c  mtlr 0
  05dbb20  addi 1, 1, 160
  05dbb24  blr
  05dbb28  li 3, -1
  05dbb2c  b 0x5dba50

getera:   # 0x5dbb30, 0x1a8 bytes
  05dbb30  stdu 1, -192(1)
  05dbb34  mflr 0
  05dbb38  std 25, 136(1)
  05dbb3c  mr 25, 4
  05dbb40  std 24, 128(1)
  05dbb44  addi 24, 1, 112
  05dbb48  std 28, 160(1)
  05dbb4c  std 29, 168(1)
  05dbb50  clrldi 28, 24, 32
  05dbb54  li 29, 0
  05dbb58  std 0, 208(1)
  05dbb5c  std 26, 144(1)
  05dbb60  extsw 4, 29
  05dbb64  mr 26, 3
  05dbb68  lwz 3, 68(25)
  05dbb6c  mr 5, 28
  05dbb70  std 27, 152(1)
  05dbb74  std 31, 184(1)
  05dbb78  std 30, 176(1)
  05dbb7c  bl 0x5dc734
  05dbb80  nop
  05dbb84  lbz 0, 0(3)
  05dbb88  mr 31, 3
  05dbb8c  cmpwi 7, 0, 0
  05dbb90  clrldi 27, 3, 32
  05dbb94  bt 30, 0x5dbc04
  05dbb98  addi 0, 31, 1
  05dbb9c  li 4, 1
  05dbba0  clrldi 30, 0, 32
  05dbba4  mr 5, 28
  05dbba8  mr 3, 30
  05dbbac  bl 0x5dc734
  05dbbb0  nop
  05dbbb4  clrldi 4, 3, 32
  05dbbb8  mr 3, 26
  05dbbbc  bl 0x5db9f0
  05dbbc0  lbz 0, 0(31)
  05dbbc4  extsb 0, 0
  05dbbc8  cmpwi 7, 0, 45
  05dbbcc  bt 30, 0x5dbcb4
  05dbbd0  cmpwi 7, 0, 43
  05dbbd4  bt 30, 0x5dbc3c
  05dbbd8  addi 29, 29, 1
  05dbbdc  lwz 3, 68(25)
  05dbbe0  extsw 4, 29
  05dbbe4  mr 5, 28
  05dbbe8  bl 0x5dc734
  05dbbec  nop
  05dbbf0  lbz 0, 0(3)
  05dbbf4  mr 31, 3
  05dbbf8  cmpwi 7, 0, 0
  05dbbfc  clrldi 27, 3, 32
  05dbc00  bf 30, 0x5dbb98
  05dbc04  lwz 27, -23956(2)
  05dbc08  ld 0, 208(1)
  05dbc0c  mr 3, 27
  05dbc10  ld 24, 128(1)
  05dbc14  ld 25, 136(1)
  05dbc18  mtlr 0
  05dbc1c  ld 26, 144(1)
  05dbc20  ld 27, 152(1)
  05dbc24  ld 28, 160(1)
  05dbc28  ld 29, 168(1)
  05dbc2c  ld 30, 176(1)
  05dbc30  ld 31, 184(1)
  05dbc34  addi 1, 1, 192
  05dbc38  blr
  05dbc3c  cmplwi 7, 3, 1
  05dbc40  bt 29, 0x5dbbd8
  05dbc44  li 4, 2
  05dbc48  mr 3, 30
  05dbc4c  clrldi 5, 24, 32
  05dbc50  bl 0x5dc734
  05dbc54  nop
  05dbc58  lbz 0, 0(31)
  05dbc5c  lbz 9, 0(3)
  05dbc60  extsb 0, 0
  05dbc64  extsb 9, 9
  05dbc68  clrldi 4, 3, 32
  05dbc6c  cmpw 7, 9, 0
  05dbc70  bf 30, 0x5dbc80
  05dbc74  lbz 0, 1(3)
  05dbc78  cmpwi 7, 0, 42
  05dbc7c  bt 30, 0x5dbc08
  05dbc80  mr 3, 26
  05dbc84  bl 0x5db9f0
  05dbc88  lbz 0, 0(31)
  05dbc8c  extsb 0, 0
  05dbc90  cmpwi 7, 0, 45
  05dbc94  bt 30, 0x5dbcc8
  05dbc98  cmpwi 7, 0, 43
  05dbc9c  bf 30, 0x5dbbd8
  05dbca0  addi 0, 3, 1
  05dbca4  cmplwi 7, 0, 1
  05dbca8  bf 29, 0x5dbc08
  05dbcac  addi 29, 29, 1
  05dbcb0  b 0x5dbbdc
  05dbcb4  addi 0, 3, 1
  05dbcb8  cmplwi 7, 0, 1
  05dbcbc  bf 29, 0x5dbc44
  05dbcc0  addi 29, 29, 1
  05dbcc4  b 0x5dbbdc
  05dbcc8  cmplwi 7, 3, 1
  05dbccc  bf 29, 0x5dbc08
  05dbcd0  addi 29, 29, 1
  05dbcd4  b 0x5dbbdc

FUN_005dbcd8:   # 0x5dbcd8, 0xe4 bytes
  05dbcd8  addi 9, 6, -37
  05dbcdc  mflr 0
  05dbce0  stdu 1, -224(1)
  05dbce4  std 0, 240(1)
  05dbce8  clrlwi 0, 9, 24
  05dbcec  std 29, 200(1)
  05dbcf0  cmplwi 7, 0, 85
  05dbcf4  mr 29, 8
  05dbcf8  std 25, 168(1)
  05dbcfc  std 26, 176(1)
  05dbd00  std 27, 184(1)
  05dbd04  std 28, 192(1)
  05dbd08  std 30, 208(1)
  05dbd0c  std 31, 216(1)
  05dbd10  std 20, 128(1)
  05dbd14  mr 31, 3
  05dbd18  std 21, 136(1)
  05dbd1c  std 22, 144(1)
  05dbd20  std 23, 152(1)
  05dbd24  std 24, 160(1)
  05dbd28  mr 3, 4
  05dbd2c  mr 28, 7
  05dbd30  mr 25, 5
  05dbd34  mr 26, 4
  05dbd38  mr 30, 7
  05dbd3c  mr 27, 29
  05dbd40  bt 29, 0x5dbeb8
  05dbd44  lwz 11, -23952(2)
  05dbd48  rlwinm 9, 9, 2, 22, 29
  05dbd4c  lwzx 0, 9, 11
  05dbd50  extsw 0, 0
  05dbd54  add 0, 0, 11
  05dbd58  mtctr 0
  05dbd5c  bctr
  05dbd60  <unknown>
  05dbd64  <unknown>
  05dbd68  <unknown>
  05dbd6c  <unknown>
  05dbd70  <unknown>
  05dbd74  <unknown>
  05dbd78  <unknown>
  05dbd7c  <unknown>
  05dbd80  <unknown>
  05dbd84  <unknown>
  05dbd88  <unknown>
  05dbd8c  <unknown>
  05dbd90  <unknown>
  05dbd94  <unknown>
  05dbd98  <unknown>
  05dbd9c  <unknown>
  05dbda0  <unknown>
  05dbda4  <unknown>
  05dbda8  <unknown>
  05dbdac  <unknown>
  05dbdb0  <unknown>
  05dbdb4  <unknown>
  05dbdb8  <unknown>

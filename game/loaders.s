# game/loaders.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_LOADERS:   # 0xdb1e0, 0x14 bytes
  00db1e0  lis 3, 114
  00db1e4  lis 4, 1
  00db1e8  addic 3, 3, 18260
  00db1ec  stw 4, 72(3)
  00db1f0  blr

LoadByteGrid:   # 0xdb200, 0x40 bytes
  00db200  lis 4, 162
  00db204  lwz 8, 0(3)
  00db208  lis 6, 162
  00db20c  lis 5, 162
  00db210  addic 7, 3, 16
  00db214  lis 9, 162
  00db218  stw 8, 1176(4)
  00db21c  lwz 8, 4(3)
  00db220  lis 4, 162
  00db224  stw 8, 1180(6)
  00db228  lfs 1, 8(3)
  00db22c  stfs 1, 1184(5)
  00db230  lfs 1, 12(3)
  00db234  stw 7, 1192(4)
  00db238  stfs 1, 1188(9)
  00db23c  blr

???_Loaders_RelocEffectTable:   # 0xdb240, 0xac bytes
  00db240  lis 6, 150
  00db244  lwz 4, 0(3)
  00db248  lis 7, 150
  00db24c  slwi 9, 4, 5
  00db250  lis 5, 150
  00db254  addic 8, 3, 16
  00db258  stw 4, -5648(6)
  00db25c  cmpwi 1, 4, 0
  00db260  addc 6, 3, 9
  00db264  li 3, 0
  00db268  addic 6, 6, 16
  00db26c  stw 8, -5644(7)
  00db270  stw 6, -5640(5)
  00db274  bf 5, 0xdb2e8
  00db278  ori 7, 3, 0
  00db27c  ori 6, 4, 0
  00db280  lwz 8, -5640(5)
  00db284  addic 6, 6, -1
  00db288  cmpwi 6, 0
  00db28c  lwzx 9, 8, 7
  00db290  addc 9, 9, 8
  00db294  stwx 9, 8, 7
  00db298  addic 7, 7, 4
  00db29c  bt 1, 0xdb280
  00db2a0  lwz 5, -5640(5)
  00db2a4  bf 5, 0xdb2e8
  00db2a8  ori 6, 5, 0
  00db2ac  ori 7, 3, 0
  00db2b0  clrldi 5, 6, 32
  00db2b4  ori 3, 5, 0
  00db2b8  clrldi 8, 6, 32
  00db2bc  addic 4, 4, -1
  00db2c0  ori 6, 5, 0
  00db2c4  cmpwi 4, 0
  00db2c8  lwzx 8, 8, 7
  00db2cc  lwz 9, 0(3)
  00db2d0  addic 7, 7, 4
  00db2d4  addic 3, 3, 4
  00db2d8  lwz 8, 4(8)
  00db2dc  addc 8, 8, 5
  00db2e0  stw 8, 4(9)
  00db2e4  bt 1, 0xdb2b8
  00db2e8  blr

ParsePif:   # 0xdb2ec, 0x4b8 bytes
  00db2ec  stdu 1, -304(1)
  00db2f0  mflr 0
  00db2f4  std 0, 320(1)
  00db2f8  std 30, 288(1)
  00db2fc  std 31, 296(1)
  00db300  ori 30, 3, 0
  00db304  ori 31, 4, 0
  00db308  addic 3, 1, 152
  00db30c  li 4, 0
  00db310  std 29, 280(1)
  00db314  std 28, 272(1)
  00db318  std 27, 264(1)
  00db31c  std 26, 256(1)
  00db320  std 25, 248(1)
  00db324  std 24, 240(1)
  00db328  li 5, 84
  00db32c  bl 0x5001fc
  00db330  nop
  00db334  lwz 3, 16(30)
  00db338  cmpwi 3, 39
  00db33c  bt 2, 0xdb368
  00db340  cmpwi 3, 38
  00db344  bt 2, 0xdb358
  00db348  cmpwi 3, 19
  00db34c  bt 2, 0xdb368
  00db350  cmpwi 3, 18
  00db354  bf 2, 0xdb3d8
  00db358  li 3, 0
  00db35c  stw 3, 152(1)
  00db360  stw 3, 172(1)
  00db364  b 0xdb3d8
  00db368  addic 4, 30, 32
  00db36c  cmpwi 3, 39
  00db370  stw 4, 152(1)
  00db374  bf 2, 0xdb3a8
  00db378  li 4, 18
  00db37c  lwz 6, 20(30)
  00db380  li 3, 64
  00db384  li 5, 32
  00db388  subc 4, 4, 6
  00db38c  subc 3, 3, 5
  00db390  cntlzw 4, 4
  00db394  sldi 4, 4, 58
  00db398  sradi 4, 4, 63
  00db39c  and 3, 4, 3
  00db3a0  addc 3, 5, 3
  00db3a4  b 0xdb3d4
  00db3a8  li 4, 18
  00db3ac  lwz 6, 20(30)
  00db3b0  li 3, 1024
  00db3b4  li 5, 512
  00db3b8  subc 4, 4, 6
  00db3bc  subc 3, 3, 5
  00db3c0  cntlzw 4, 4
  00db3c4  sldi 4, 4, 58
  00db3c8  sradi 4, 4, 63
  00db3cc  and 3, 4, 3
  00db3d0  addc 3, 5, 3
  00db3d4  stw 3, 172(1)
  00db3d8  lwz 3, 8(30)
  00db3dc  extsw 3, 3
  00db3e0  bl 0x500178
  00db3e4  nop
  00db3e8  lwz 4, 12(30)
  00db3ec  stw 3, 228(1)
  00db3f0  extsw 3, 4
  00db3f4  bl 0x500178
  00db3f8  nop
  00db3fc  lwz 4, 172(1)
  00db400  stw 3, 232(1)
  00db404  addc 5, 30, 4
  00db408  addic 3, 5, 32
  00db40c  stw 3, 156(1)
  00db410  lwz 3, 16(30)
  00db414  cmpwi 3, 39
  00db418  bt 2, 0xdb478
  00db41c  cmpwi 3, 38
  00db420  bt 2, 0xdb44c
  00db424  cmpwi 3, 19
  00db428  bt 2, 0xdb464
  00db42c  cmpwi 3, 18
  00db430  bf 2, 0xdb48c
  00db434  lwz 5, 8(30)
  00db438  lwz 6, 12(30)
  00db43c  mullw 5, 5, 6
  00db440  slwi 5, 5, 2
  00db444  stw 5, 176(1)
  00db448  b 0xdb48c
  00db44c  lwz 5, 8(30)
  00db450  lwz 6, 12(30)
  00db454  mullw 5, 5, 6
  00db458  slwi 5, 5, 1
  00db45c  stw 5, 176(1)
  00db460  b 0xdb48c
  00db464  lwz 5, 8(30)
  00db468  lwz 6, 12(30)
  00db46c  mullw 5, 5, 6
  00db470  stw 5, 176(1)
  00db474  b 0xdb48c
  00db478  lwz 5, 8(30)
  00db47c  lwz 6, 12(30)
  00db480  mullw 5, 5, 6
  00db484  srawi 5, 5, 1
  00db488  stw 5, 176(1)
  00db48c  cmpwi 3, 39
  00db490  bt 2, 0xdb49c
  00db494  cmpwi 3, 19
  00db498  bf 2, 0xdb564
  00db49c  lis 5, 150
  00db4a0  cmpwi 3, 39
  00db4a4  lwz 3, 27344(5)
  00db4a8  srawi 3, 3, 8
  00db4ac  stw 3, 192(1)
  00db4b0  bf 2, 0xdb4f8
  00db4b4  lis 6, 150
  00db4b8  li 8, 0
  00db4bc  addic 3, 1, 144
  00db4c0  li 5, 1
  00db4c4  li 7, 0
  00db4c8  lwz 4, 27344(6)
  00db4cc  lwz 9, 192(1)
  00db4d0  addic 10, 4, 256
  00db4d4  extsw 4, 9
  00db4d8  li 9, 8
  00db4dc  stw 10, 27344(6)
  00db4e0  lwz 6, 20(30)
  00db4e4  li 10, 2
  00db4e8  extsw 6, 6
  00db4ec  bl 0x503084
  00db4f0  nop
  00db4f4  b 0xdb538
  00db4f8  lis 6, 150
  00db4fc  addic 3, 1, 144
  00db500  li 5, 1
  00db504  li 7, 0
  00db508  lwz 8, 27344(6)
  00db50c  lwz 9, 192(1)
  00db510  addc 10, 8, 4
  00db514  extsw 4, 9
  00db518  li 8, 0
  00db51c  li 9, 16
  00db520  stw 10, 27344(6)
  00db524  lwz 6, 20(30)
  00db528  li 10, 16
  00db52c  extsw 6, 6
  00db530  bl 0x503084
  00db534  nop
  00db538  li 3, 0
  00db53c  bl 0x503244
  00db540  nop
  00db544  lwz 4, 152(1)
  00db548  addic 3, 1, 144
  00db54c  bl 0x50306c
  00db550  nop
  00db554  li 3, 0
  00db558  li 4, 0
  00db55c  bl 0x503074
  00db560  nop
  00db564  lwz 3, 28(30)
  00db568  cmpwi 3, 1
  00db56c  cmpwi 1, 3, 0
  00db570  bf 1, 0xdb5a4
  00db574  addic 4, 1, 4
  00db578  addic 3, 3, -1
  00db57c  lwz 5, 172(4)
  00db580  addic 3, 3, -1
  00db584  lwz 6, 152(4)
  00db588  srawi 7, 5, 2
  00db58c  addc 5, 6, 5
  00db590  cmpwi 3, 0
  00db594  stw 7, 176(4)
  00db598  stw 5, 156(4)
  00db59c  addic 4, 4, 4
  00db5a0  bt 1, 0xdb57c
  00db5a4  li 26, 0
  00db5a8  ori 29, 26, 0
  00db5ac  bf 5, 0xdb6a0
  00db5b0  ori 27, 26, 0
  00db5b4  ori 28, 1, 0
  00db5b8  addic 3, 26, 6
  00db5bc  lwz 9, 8(30)
  00db5c0  lis 25, 150
  00db5c4  li 5, 1
  00db5c8  sraw 3, 9, 3
  00db5cc  li 6, 1
  00db5d0  extsw 7, 3
  00db5d4  lwz 4, 27344(25)
  00db5d8  subc 6, 6, 3
  00db5dc  subc 5, 7, 5
  00db5e0  srawi 4, 4, 8
  00db5e4  sradi 5, 5, 63
  00db5e8  addic 24, 1, 148
  00db5ec  and 5, 5, 6
  00db5f0  stw 4, 196(28)
  00db5f4  addc 3, 3, 5
  00db5f8  lwz 6, 16(30)
  00db5fc  lwz 10, 12(30)
  00db600  sraw 9, 9, 26
  00db604  extsw 5, 3
  00db608  extsw 6, 6
  00db60c  stw 3, 212(28)
  00db610  li 7, 0
  00db614  ori 3, 24, 0
  00db618  sraw 10, 10, 26
  00db61c  li 8, 0
  00db620  bl 0x503084
  00db624  nop
  00db628  li 3, 0
  00db62c  bl 0x503244
  00db630  nop
  00db634  ori 3, 24, 0
  00db638  lwz 4, 156(28)
  00db63c  bl 0x50306c
  00db640  nop
  00db644  li 3, 0
  00db648  li 4, 0
  00db64c  bl 0x503074
  00db650  nop
  00db654  lwz 3, 176(1)
  00db658  li 5, 256
  00db65c  li 6, 256
  00db660  lwz 4, 27344(25)
  00db664  sraw 3, 3, 27
  00db668  addic 26, 26, 1
  00db66c  extsw 7, 3
  00db670  subc 6, 6, 3
  00db674  subc 5, 7, 5
  00db678  addic 27, 27, 2
  00db67c  sradi 5, 5, 63
  00db680  addic 28, 28, 4
  00db684  and 5, 5, 6
  00db688  addc 3, 3, 5
  00db68c  addc 3, 4, 3
  00db690  stw 3, 27344(25)
  00db694  lwz 3, 28(30)
  00db698  cmpw 26, 3
  00db69c  bt 0, 0xdb5b8
  00db6a0  lwz 3, 196(1)
  00db6a4  lwz 4, 212(1)
  00db6a8  li 11, 4
  00db6ac  lwz 5, 16(30)
  00db6b0  extsw 3, 3
  00db6b4  lwz 6, 228(1)
  00db6b8  extsw 4, 4
  00db6bc  lwz 7, 20(30)
  00db6c0  li 8, 1
  00db6c4  lwz 10, 232(1)
  00db6c8  li 9, 0
  00db6cc  extsw 28, 7
  00db6d0  lwz 12, 192(1)
  00db6d4  std 29, 120(1)
  00db6d8  extsw 7, 10
  00db6dc  extsw 5, 5
  00db6e0  extsw 6, 6
  00db6e4  std 28, 112(1)
  00db6e8  extsw 10, 12
  00db6ec  std 29, 128(1)
  00db6f0  std 11, 136(1)
  00db6f4  bl 0x502fbc
  00db6f8  nop
  00db6fc  lwz 4, 28(30)
  00db700  lis 9, 0
  00db704  std 3, 0(31)
  00db708  li 5, 1
  00db70c  li 3, 0
  00db710  addic 4, 4, -1
  00db714  li 6, 3
  00db718  extsw 4, 4
  00db71c  li 7, 0
  00db720  li 8, 0
  00db724  ori 9, 9, 65440
  00db728  bl 0x502fd4
  00db72c  nop
  00db730  lwz 4, 200(1)
  00db734  std 3, 8(31)
  00db738  extsw 3, 4
  00db73c  lwz 4, 216(1)
  00db740  lwz 5, 204(1)
  00db744  lwz 6, 220(1)
  00db748  extsw 4, 4
  00db74c  lwz 7, 208(1)
  00db750  extsw 5, 5
  00db754  lwz 8, 224(1)
  00db758  extsw 6, 6
  00db75c  extsw 7, 7
  00db760  extsw 8, 8
  00db764  bl 0x502f6c
  00db768  nop
  00db76c  std 3, 16(31)
  00db770  li 3, -1
  00db774  ld 0, 320(1)
  00db778  mtlr 0
  00db77c  ld 24, 240(1)
  00db780  ld 25, 248(1)
  00db784  ld 26, 256(1)
  00db788  ld 27, 264(1)
  00db78c  ld 28, 272(1)
  00db790  ld 29, 280(1)
  00db794  ld 30, 288(1)
  00db798  ld 31, 296(1)
  00db79c  addi 1, 1, 304
  00db7a0  blr

LoadPifFile:   # 0xdb7a4, 0x134 bytes
  00db7a4  stdu 1, -160(1)
  00db7a8  mflr 0
  00db7ac  std 0, 176(1)
  00db7b0  std 31, 152(1)
  00db7b4  lis 4, 161
  00db7b8  addic 31, 4, 2264
  00db7bc  li 4, 0
  00db7c0  std 30, 144(1)
  00db7c4  std 29, 136(1)
  00db7c8  std 28, 128(1)
  00db7cc  std 27, 120(1)
  00db7d0  lwz 31, 60(31)
  00db7d4  bl 0x502dcc
  00db7d8  nop
  00db7dc  ori 29, 3, 0
  00db7e0  cmpwi 29, 0
  00db7e4  bf 0, 0xdb7f0
  00db7e8  li 3, 0
  00db7ec  b 0xdb8b4
  00db7f0  ori 3, 29, 0
  00db7f4  li 4, 0
  00db7f8  li 5, 5
  00db7fc  bl 0x502de0
  00db800  nop
  00db804  ori 30, 3, 0
  00db808  ori 3, 29, 0
  00db80c  li 4, 0
  00db810  li 5, 6
  00db814  bl 0x502de0
  00db818  nop
  00db81c  ori 3, 29, 0
  00db820  ori 4, 31, 0
  00db824  ori 5, 30, 0
  00db828  bl 0x502dd4
  00db82c  nop
  00db830  cmpw 3, 30
  00db834  bt 2, 0xdb84c
  00db838  ori 3, 29, 0
  00db83c  bl 0x502ddc
  00db840  nop
  00db844  li 3, 0
  00db848  b 0xdb8b4
  00db84c  ori 3, 29, 0
  00db850  bl 0x502ddc
  00db854  nop
  00db858  cmpwi 30, 0
  00db85c  bf 2, 0xdb868
  00db860  li 3, 0
  00db864  b 0xdb8b4
  00db868  lwz 28, 0(31)
  00db86c  addic 27, 31, 4
  00db870  extsw 28, 28
  00db874  li 29, 0
  00db878  cmpwi 28, 0
  00db87c  bf 1, 0xdb8b0
  00db880  lis 30, 162
  00db884  addic 30, 30, 720
  00db888  lwz 3, 0(27)
  00db88c  ori 4, 30, 0
  00db890  addc 3, 3, 31
  00db894  clrldi 3, 3, 32
  00db898  bl 0xdb2ec
  00db89c  addic 29, 29, 1
  00db8a0  addic 27, 27, 4
  00db8a4  cmpw 29, 28
  00db8a8  addic 30, 30, 24
  00db8ac  bt 0, 0xdb888
  00db8b0  ori 3, 28, 0
  00db8b4  ld 0, 176(1)
  00db8b8  mtlr 0
  00db8bc  ld 27, 120(1)
  00db8c0  ld 28, 128(1)
  00db8c4  ld 29, 136(1)
  00db8c8  ld 30, 144(1)
  00db8cc  ld 31, 152(1)
  00db8d0  addi 1, 1, 160
  00db8d4  blr

???_Loaders_RelocSpaceWadPtrs:   # 0xdb8d8, 0x54 bytes
  00db8d8  ori 4, 3, 0
  00db8dc  lis 6, 165
  00db8e0  addic 3, 4, 16
  00db8e4  lwz 7, 4(4)
  00db8e8  lwz 5, 0(4)
  00db8ec  stw 7, 11064(6)
  00db8f0  lwz 6, 8(4)
  00db8f4  cmpwi 5, 0
  00db8f8  addc 4, 6, 4
  00db8fc  bf 1, 0xdb928
  00db900  lis 6, 165
  00db904  addic 6, 6, 10244
  00db908  lwz 7, 0(3)
  00db90c  addic 5, 5, -1
  00db910  addic 3, 3, 4
  00db914  addc 7, 7, 4
  00db918  cmpwi 5, 0
  00db91c  stw 7, 0(6)
  00db920  addic 6, 6, 4
  00db924  bt 1, 0xdb908
  00db928  blr

ParseEffectTexs:   # 0xdb92c, 0x10c bytes
  00db92c  stdu 1, -160(1)
  00db930  mflr 0
  00db934  std 0, 176(1)
  00db938  std 29, 136(1)
  00db93c  ori 29, 3, 0
  00db940  lis 5, 150
  00db944  li 3, 0
  00db948  std 31, 152(1)
  00db94c  cmpwi 4, 0
  00db950  ori 31, 4, 0
  00db954  std 30, 144(1)
  00db958  std 28, 128(1)
  00db95c  std 27, 120(1)
  00db960  stw 3, -8752(5)
  00db964  bf 1, 0xdba14
  00db968  lis 30, 150
  00db96c  addic 30, 30, -10544
  00db970  slwi 3, 3, 4
  00db974  lwz 5, 0(29)
  00db978  ori 4, 29, 0
  00db97c  lwz 6, 4(29)
  00db980  extsw 3, 3
  00db984  srawi 5, 5, 4
  00db988  addc 7, 3, 30
  00db98c  lwz 3, 8(29)
  00db990  lwz 4, 12(4)
  00db994  addic 29, 29, 16
  00db998  extsw 3, 3
  00db99c  extsw 28, 4
  00db9a0  srawi 4, 6, 4
  00db9a4  sth 5, 10(7)
  00db9a8  sth 4, 8(7)
  00db9ac  bl 0x500178
  00db9b0  nop
  00db9b4  lis 27, 150
  00db9b8  lwz 4, -8752(27)
  00db9bc  slwi 4, 4, 4
  00db9c0  extsw 4, 4
  00db9c4  addc 4, 4, 30
  00db9c8  sth 3, 12(4)
  00db9cc  ori 3, 28, 0
  00db9d0  bl 0x500178
  00db9d4  nop
  00db9d8  lwz 4, -8752(27)
  00db9dc  li 6, 0
  00db9e0  ori 7, 3, 0
  00db9e4  slwi 5, 4, 4
  00db9e8  addic 3, 4, 1
  00db9ec  extsw 5, 5
  00db9f0  cmpw 3, 31
  00db9f4  addc 4, 5, 30
  00db9f8  stdx 6, 30, 5
  00db9fc  stw 3, -8752(27)
  00dba00  ori 5, 3, 0
  00dba04  ori 3, 7, 0
  00dba08  sth 3, 14(4)
  00dba0c  ori 3, 5, 0
  00dba10  bt 0, 0xdb970
  00dba14  ld 0, 176(1)
  00dba18  mtlr 0
  00dba1c  ld 27, 120(1)
  00dba20  ld 28, 128(1)
  00dba24  ld 29, 136(1)
  00dba28  ld 30, 144(1)
  00dba2c  ld 31, 152(1)
  00dba30  addi 1, 1, 160
  00dba34  blr

ParseSky:   # 0xdba38, 0x1fc bytes
  00dba38  stdu 1, -176(1)
  00dba3c  mflr 0
  00dba40  std 0, 192(1)
  00dba44  std 30, 160(1)
  00dba48  std 31, 168(1)
  00dba4c  lis 30, 165
  00dba50  ori 31, 3, 0
  00dba54  li 3, 1
  00dba58  stw 31, 24896(30)
  00dba5c  sth 3, 4(31)
  00dba60  lwz 3, 24896(30)
  00dba64  lwz 4, 16(3)
  00dba68  addc 4, 4, 31
  00dba6c  stw 4, 16(3)
  00dba70  lwz 3, 24896(30)
  00dba74  lwz 4, 20(3)
  00dba78  addc 4, 4, 31
  00dba7c  stw 4, 20(3)
  00dba80  lwz 3, 24896(30)
  00dba84  lwz 4, 24(3)
  00dba88  addc 4, 4, 31
  00dba8c  stw 4, 24(3)
  00dba90  lwz 4, 24896(30)
  00dba94  lwz 3, 28(4)
  00dba98  std 29, 152(1)
  00dba9c  std 28, 144(1)
  00dbaa0  std 27, 136(1)
  00dbaa4  std 26, 128(1)
  00dbaa8  std 25, 120(1)
  00dbaac  cmpwi 3, 0
  00dbab0  bt 2, 0xdbac0
  00dbab4  addc 3, 3, 31
  00dbab8  stw 3, 28(4)
  00dbabc  lwz 4, 24896(30)
  00dbac0  lhz 5, 12(4)
  00dbac4  li 27, 0
  00dbac8  lwz 26, 16(4)
  00dbacc  extsh 5, 5
  00dbad0  ori 3, 4, 0
  00dbad4  cmpwi 5, 0
  00dbad8  ori 29, 27, 0
  00dbadc  bf 1, 0xdbb84
  00dbae0  ori 28, 27, 0
  00dbae4  lwz 5, 0(26)
  00dbae8  ori 3, 26, 0
  00dbaec  lwz 6, 4(26)
  00dbaf0  lwz 4, 16(4)
  00dbaf4  srawi 5, 5, 4
  00dbaf8  lwz 7, 8(26)
  00dbafc  addc 4, 4, 28
  00dbb00  srawi 6, 6, 4
  00dbb04  clrldi 4, 4, 32
  00dbb08  lwz 8, 12(3)
  00dbb0c  extsw 3, 7
  00dbb10  addic 26, 26, 16
  00dbb14  extsw 25, 8
  00dbb18  sth 5, 10(4)
  00dbb1c  sth 6, 8(4)
  00dbb20  bl 0x500178
  00dbb24  nop
  00dbb28  lwz 4, 24896(30)
  00dbb2c  lwz 4, 16(4)
  00dbb30  addc 4, 4, 28
  00dbb34  clrldi 4, 4, 32
  00dbb38  sth 3, 12(4)
  00dbb3c  ori 3, 25, 0
  00dbb40  bl 0x500178
  00dbb44  nop
  00dbb48  lwz 4, 24896(30)
  00dbb4c  li 7, 0
  00dbb50  addic 27, 27, 1
  00dbb54  ori 6, 4, 0
  00dbb58  lwz 5, 16(4)
  00dbb5c  addc 8, 5, 28
  00dbb60  clrldi 8, 8, 32
  00dbb64  stdx 7, 5, 28
  00dbb68  addic 28, 28, 16
  00dbb6c  sth 3, 14(8)
  00dbb70  lhz 3, 12(4)
  00dbb74  extsh 3, 3
  00dbb78  cmpw 27, 3
  00dbb7c  ori 3, 6, 0
  00dbb80  bt 0, 0xdbae4
  00dbb84  lhz 5, 6(3)
  00dbb88  ori 4, 29, 0
  00dbb8c  extsh 5, 5
  00dbb90  cmpwi 5, 0
  00dbb94  bf 1, 0xdbc08
  00dbb98  ori 5, 3, 0
  00dbb9c  ori 3, 29, 0
  00dbba0  addc 5, 5, 3
  00dbba4  clrldi 7, 5, 32
  00dbba8  ori 5, 29, 0
  00dbbac  lwz 6, 32(7)
  00dbbb0  addc 6, 6, 31
  00dbbb4  clrldi 6, 6, 32
  00dbbb8  stw 6, 32(7)
  00dbbbc  lwz 7, 0(6)
  00dbbc0  cmpwi 7, 0
  00dbbc4  bf 1, 0xdbbec
  00dbbc8  ori 7, 6, 0
  00dbbcc  lwz 8, 32(7)
  00dbbd0  addic 5, 5, 1
  00dbbd4  lwz 9, 0(6)
  00dbbd8  addc 8, 8, 31
  00dbbdc  cmpw 5, 9
  00dbbe0  stw 8, 32(7)
  00dbbe4  addic 7, 7, 32
  00dbbe8  bt 0, 0xdbbcc
  00dbbec  lwz 5, 24896(30)
  00dbbf0  addic 4, 4, 1
  00dbbf4  addic 3, 3, 4
  00dbbf8  lhz 6, 6(5)
  00dbbfc  extsh 6, 6
  00dbc00  cmpw 4, 6
  00dbc04  bt 0, 0xdbba0
  00dbc08  ld 0, 192(1)
  00dbc0c  mtlr 0
  00dbc10  ld 25, 120(1)
  00dbc14  ld 26, 128(1)
  00dbc18  ld 27, 136(1)
  00dbc1c  ld 28, 144(1)
  00dbc20  ld 29, 152(1)
  00dbc24  ld 30, 160(1)
  00dbc28  ld 31, 168(1)
  00dbc2c  addi 1, 1, 176
  00dbc30  blr

LoadMobyModel:   # 0xdbc38, 0x4b4 bytes
  00dbc38  stdu 1, -80(1)
  00dbc3c  lwz 5, 0(3)
  00dbc40  ori 4, 3, 0
  00dbc44  cmpwi 7, 6, 1138
  00dbc48  std 31, 72(1)
  00dbc4c  std 30, 64(1)
  00dbc50  std 29, 56(1)
  00dbc54  cmpwi 5, 0
  00dbc58  bt 2, 0xdbe18
  00dbc5c  addc 6, 4, 5
  00dbc60  clrldi 5, 6, 32
  00dbc64  stw 6, 0(3)
  00dbc68  lwz 6, 8(5)
  00dbc6c  lwz 11, 12(5)
  00dbc70  lwz 7, 20(5)
  00dbc74  cmpwi 6, 0
  00dbc78  lwz 8, 16(5)
  00dbc7c  lwz 10, 0(5)
  00dbc80  bt 2, 0xdbc8c
  00dbc84  addc 6, 4, 6
  00dbc88  stw 6, 8(5)
  00dbc8c  ori 9, 11, 0
  00dbc90  cmpwi 9, 0
  00dbc94  bt 2, 0xdbca0
  00dbc98  addc 9, 4, 11
  00dbc9c  stw 9, 12(5)
  00dbca0  lis 11, 144
  00dbca4  addc 12, 4, 8
  00dbca8  addc 7, 4, 7
  00dbcac  lis 31, 161
  00dbcb0  cmpwi 10, 0
  00dbcb4  lwz 8, -23196(11)
  00dbcb8  clrldi 11, 6, 32
  00dbcbc  li 6, 0
  00dbcc0  lwz 30, 1192(8)
  00dbcc4  ori 8, 6, 0
  00dbcc8  subc 29, 7, 30
  00dbccc  subc 12, 12, 30
  00dbcd0  addic 7, 31, 24396
  00dbcd4  stw 29, 20(5)
  00dbcd8  stw 12, 16(5)
  00dbcdc  bt 2, 0xdbd74
  00dbce0  lwz 12, 0(11)
  00dbce4  cmpwi 12, 0
  00dbce8  cmpwi 1, 12, -1
  00dbcec  bt 0, 0xdbd0c
  00dbcf0  sldi 31, 12, 5
  00dbcf4  sldi 12, 12, 2
  00dbcf8  addc 12, 31, 12
  00dbcfc  lwz 31, 28(7)
  00dbd00  addc 12, 31, 12
  00dbd04  stw 12, 0(11)
  00dbd08  b 0xdbd44
  00dbd0c  cmpwi 6, 12, -2
  00dbd10  bf 6, 0xdbd20
  00dbd14  lwz 12, 28(7)
  00dbd18  stw 12, 0(11)
  00dbd1c  b 0xdbd44
  00dbd20  cmpwi 1, 12, -3
  00dbd24  bf 26, 0xdbd34
  00dbd28  lwz 12, 28(7)
  00dbd2c  stw 12, 0(11)
  00dbd30  b 0xdbd44
  00dbd34  bf 6, 0xdbd44
  00dbd38  lwz 12, 28(7)
  00dbd3c  addic 12, 12, 36
  00dbd40  stw 12, 0(11)
  00dbd44  lbz 31, 12(11)
  00dbd48  cmpwi 31, 0
  00dbd4c  bf 2, 0xdbd64
  00dbd50  clrldi 12, 12, 32
  00dbd54  lwz 12, 8(12)
  00dbd58  clrlwi 31, 12, 30
  00dbd5c  rlwimi 31, 12, 26, 28, 29
  00dbd60  stb 31, 12(11)
  00dbd64  addic 6, 6, 1
  00dbd68  addic 11, 11, 16
  00dbd6c  cmplw 6, 10
  00dbd70  bt 0, 0xdbce0
  00dbd74  lwz 5, 4(5)
  00dbd78  clrldi 9, 9, 32
  00dbd7c  cmpwi 5, 0
  00dbd80  bt 2, 0xdbe18
  00dbd84  lwz 6, 0(9)
  00dbd88  cmpwi 6, 0
  00dbd8c  cmpwi 1, 6, -1
  00dbd90  bt 0, 0xdbdb0
  00dbd94  sldi 10, 6, 5
  00dbd98  sldi 6, 6, 2
  00dbd9c  addc 6, 10, 6
  00dbda0  lwz 10, 28(7)
  00dbda4  addc 6, 10, 6
  00dbda8  stw 6, 0(9)
  00dbdac  b 0xdbde8
  00dbdb0  cmpwi 6, 6, -2
  00dbdb4  bf 6, 0xdbdc4
  00dbdb8  lwz 6, 28(7)
  00dbdbc  stw 6, 0(9)
  00dbdc0  b 0xdbde8
  00dbdc4  cmpwi 1, 6, -3
  00dbdc8  bf 26, 0xdbdd8
  00dbdcc  lwz 6, 28(7)
  00dbdd0  stw 6, 0(9)
  00dbdd4  b 0xdbde8
  00dbdd8  bf 6, 0xdbde8
  00dbddc  lwz 6, 28(7)
  00dbde0  addic 6, 6, 36
  00dbde4  stw 6, 0(9)
  00dbde8  lbz 10, 12(9)
  00dbdec  cmpwi 10, 0
  00dbdf0  bf 2, 0xdbe08
  00dbdf4  clrldi 6, 6, 32
  00dbdf8  lwz 6, 8(6)
  00dbdfc  clrlwi 10, 6, 30
  00dbe00  rlwimi 10, 6, 26, 28, 29
  00dbe04  stb 10, 12(9)
  00dbe08  addic 8, 8, 1
  00dbe0c  addic 9, 9, 16
  00dbe10  cmplw 8, 5
  00dbe14  bt 0, 0xdbd84
  00dbe18  lwz 5, 16(3)
  00dbe1c  cmpwi 5, 0
  00dbe20  bt 2, 0xdbe2c
  00dbe24  addc 5, 4, 5
  00dbe28  stw 5, 16(3)
  00dbe2c  lwz 5, 20(3)
  00dbe30  cmpwi 5, 0
  00dbe34  bt 2, 0xdbeb0
  00dbe38  addc 8, 4, 5
  00dbe3c  lbz 9, 8(3)
  00dbe40  li 6, 0
  00dbe44  cmpwi 9, 0
  00dbe48  clrldi 5, 8, 32
  00dbe4c  ori 7, 6, 0
  00dbe50  stw 8, 20(3)
  00dbe54  bt 2, 0xdbeb0
  00dbe58  lis 8, 14
  00dbe5c  addi 9, 8, -17356
  00dbe60  lis 8, 16256
  00dbe64  lfs 1, 0(9)
  00dbe68  lfs 2, 48(5)
  00dbe6c  addic 6, 6, 1
  00dbe70  lfs 3, 52(5)
  00dbe74  fmuls 2, 2, 1
  00dbe78  lfs 4, 56(5)
  00dbe7c  fmuls 3, 3, 1
  00dbe80  stw 7, 12(5)
  00dbe84  fmuls 4, 4, 1
  00dbe88  stw 7, 28(5)
  00dbe8c  stw 7, 44(5)
  00dbe90  stw 8, 60(5)
  00dbe94  stfs 2, 48(5)
  00dbe98  stfs 3, 52(5)
  00dbe9c  stfs 4, 56(5)
  00dbea0  lbz 9, 8(3)
  00dbea4  addic 5, 5, 64
  00dbea8  cmplw 6, 9
  00dbeac  bt 0, 0xdbe68
  00dbeb0  lwz 5, 24(3)
  00dbeb4  cmpwi 5, 0
  00dbeb8  bt 2, 0xdbf1c
  00dbebc  addc 7, 4, 5
  00dbec0  lbz 8, 8(3)
  00dbec4  li 6, 0
  00dbec8  clrldi 5, 7, 32
  00dbecc  cmpwi 8, 0
  00dbed0  stw 7, 24(3)
  00dbed4  bt 2, 0xdbf1c
  00dbed8  lis 7, 14
  00dbedc  addi 7, 7, -17356
  00dbee0  lfs 1, 0(7)
  00dbee4  lfs 2, 0(5)
  00dbee8  lfs 3, 4(5)
  00dbeec  addic 6, 6, 1
  00dbef0  fmuls 2, 2, 1
  00dbef4  lfs 4, 8(5)
  00dbef8  fmuls 3, 3, 1
  00dbefc  fmuls 4, 4, 1
  00dbf00  stfs 2, 0(5)
  00dbf04  stfs 3, 4(5)
  00dbf08  stfs 4, 8(5)
  00dbf0c  lbz 7, 8(3)
  00dbf10  addic 5, 5, 16
  00dbf14  cmplw 6, 7
  00dbf18  bt 0, 0xdbee4
  00dbf1c  lwz 5, 28(3)
  00dbf20  cmpwi 5, 0
  00dbf24  bt 2, 0xdbf70
  00dbf28  addc 5, 4, 5
  00dbf2c  clrldi 6, 5, 32
  00dbf30  stw 5, 28(3)
  00dbf34  lwz 5, 0(6)
  00dbf38  cmpwi 5, 0
  00dbf3c  bf 1, 0xdbf70
  00dbf40  ori 6, 5, 0
  00dbf44  li 5, 0
  00dbf48  lwz 7, 28(3)
  00dbf4c  addic 6, 6, -1
  00dbf50  addc 7, 7, 5
  00dbf54  cmpwi 6, 0
  00dbf58  clrldi 7, 7, 32
  00dbf5c  addic 5, 5, 4
  00dbf60  lwz 8, 4(7)
  00dbf64  addc 8, 8, 4
  00dbf68  stw 8, 4(7)
  00dbf6c  bt 1, 0xdbf48
  00dbf70  lwz 5, 40(3)
  00dbf74  cmpwi 5, 0
  00dbf78  bt 2, 0xdbf84
  00dbf7c  addc 5, 4, 5
  00dbf80  stw 5, 40(3)
  00dbf84  lbz 10, 12(3)
  00dbf88  li 6, 0
  00dbf8c  cmpwi 10, 0
  00dbf90  ori 5, 6, 0
  00dbf94  bf 1, 0xdc010
  00dbf98  ori 9, 3, 0
  00dbf9c  lwz 7, 72(9)
  00dbfa0  cmpwi 7, 0
  00dbfa4  bt 2, 0xdc000
  00dbfa8  addc 8, 7, 4
  00dbfac  clrldi 7, 8, 32
  00dbfb0  stw 8, 72(9)
  00dbfb4  lbz 10, 12(3)
  00dbfb8  lwz 8, 20(7)
  00dbfbc  lbz 11, 16(7)
  00dbfc0  cmpwi 8, 0
  00dbfc4  cmpwi 1, 11, 0
  00dbfc8  bt 2, 0xdbfd4
  00dbfcc  addc 8, 8, 4
  00dbfd0  stw 8, 20(7)
  00dbfd4  ori 8, 5, 0
  00dbfd8  bf 5, 0xdc000
  00dbfdc  ori 11, 7, 0
  00dbfe0  lwz 12, 28(11)
  00dbfe4  addic 8, 8, 1
  00dbfe8  addc 12, 12, 4
  00dbfec  stw 12, 28(11)
  00dbff0  lbz 12, 16(7)
  00dbff4  addic 11, 11, 4
  00dbff8  cmpw 8, 12
  00dbffc  bt 0, 0xdbfe0
  00dc000  addic 6, 6, 1
  00dc004  addic 9, 9, 4
  00dc008  cmpw 6, 10
  00dc00c  bt 0, 0xdbf9c
  00dc010  lis 4, 144
  00dc014  lwz 4, -23196(4)
  00dc018  bf 30, 0xdc0d8
  00dc01c  lwz 4, 12(4)
  00dc020  cmpwi 4, 0
  00dc024  bt 2, 0xdc0d8
  00dc028  lis 7, 114
  00dc02c  ori 4, 3, 0
  00dc030  addic 7, 7, 18532
  00dc034  ori 3, 5, 0
  00dc038  addic 4, 4, 72
  00dc03c  addic 5, 7, 12
  00dc040  addic 6, 7, 8
  00dc044  lwz 8, 0(7)
  00dc048  lwz 10, 0(5)
  00dc04c  slwi 8, 8, 2
  00dc050  lwz 9, 0(6)
  00dc054  addc 8, 8, 4
  00dc058  clrldi 8, 8, 32
  00dc05c  lwz 8, 0(8)
  00dc060  lbz 11, 16(8)
  00dc064  subc 12, 11, 10
  00dc068  subc 11, 11, 10
  00dc06c  sradi 12, 12, 63
  00dc070  and 11, 12, 11
  00dc074  addc 10, 10, 11
  00dc078  cmplw 9, 10
  00dc07c  bf 0, 0xdc0c0
  00dc080  slwi 11, 9, 2
  00dc084  subc 9, 10, 9
  00dc088  addc 8, 8, 11
  00dc08c  clrldi 8, 8, 32
  00dc090  lwz 10, 28(8)
  00dc094  addic 9, 9, -1
  00dc098  lwz 11, 4(7)
  00dc09c  addic 8, 8, 4
  00dc0a0  cmpwi 9, 0
  00dc0a4  lhz 12, 12(10)
  00dc0a8  addc 10, 10, 12
  00dc0ac  clrldi 10, 10, 32
  00dc0b0  lhz 12, 18(10)
  00dc0b4  addc 11, 12, 11
  00dc0b8  sth 11, 18(10)
  00dc0bc  bt 1, 0xdc090
  00dc0c0  addic 3, 3, 1
  00dc0c4  addic 5, 5, 16
  00dc0c8  cmplwi 3, 33
  00dc0cc  addic 6, 6, 16
  00dc0d0  addic 7, 7, 16
  00dc0d4  bt 0, 0xdc044
  00dc0d8  ld 29, 56(1)
  00dc0dc  ld 30, 64(1)
  00dc0e0  ld 31, 72(1)
  00dc0e4  addi 1, 1, 80
  00dc0e8  blr

LoadMobyPClasses:   # 0xdc0ec, 0xf4 bytes
  00dc0ec  stdu 1, -144(1)
  00dc0f0  mflr 0
  00dc0f4  std 0, 160(1)
  00dc0f8  std 28, 112(1)
  00dc0fc  lis 7, 163
  00dc100  ori 28, 3, 0
  00dc104  lis 8, 163
  00dc108  lis 9, 163
  00dc10c  addic 8, 8, 21248
  00dc110  lwz 3, 23744(7)
  00dc114  addic 9, 9, 19456
  00dc118  lis 7, 163
  00dc11c  slwi 10, 3, 1
  00dc120  addic 7, 7, 21696
  00dc124  slwi 11, 3, 2
  00dc128  extsw 10, 10
  00dc12c  std 29, 120(1)
  00dc130  cmpwi 28, 0
  00dc134  ori 29, 4, 0
  00dc138  stbx 3, 7, 6
  00dc13c  std 30, 128(1)
  00dc140  extsw 3, 11
  00dc144  sthx 6, 8, 10
  00dc148  std 31, 136(1)
  00dc14c  ori 30, 5, 0
  00dc150  ori 31, 6, 0
  00dc154  stwx 28, 9, 3
  00dc158  bf 2, 0xdc17c
  00dc15c  ori 3, 31, 0
  00dc160  bl 0xfbfa0
  00dc164  nop
  00dc168  lis 3, 163
  00dc16c  lwz 4, 23744(3)
  00dc170  addic 4, 4, 1
  00dc174  stw 4, 23744(3)
  00dc178  b 0xdc1c0
  00dc17c  ori 4, 3, 0
  00dc180  lis 3, 163
  00dc184  lwz 6, 44(28)
  00dc188  addic 5, 3, 31632
  00dc18c  ori 3, 31, 0
  00dc190  stwx 6, 5, 4
  00dc194  bl 0xfbfa0
  00dc198  nop
  00dc19c  lis 7, 163
  00dc1a0  ori 3, 28, 0
  00dc1a4  ori 4, 29, 0
  00dc1a8  ori 5, 30, 0
  00dc1ac  ori 6, 31, 0
  00dc1b0  lwz 8, 23744(7)
  00dc1b4  addic 8, 8, 1
  00dc1b8  stw 8, 23744(7)
  00dc1bc  bl 0xdbc38
  00dc1c0  ld 0, 160(1)
  00dc1c4  mtlr 0
  00dc1c8  ld 28, 112(1)
  00dc1cc  ld 29, 120(1)
  00dc1d0  ld 30, 128(1)
  00dc1d4  ld 31, 136(1)
  00dc1d8  addi 1, 1, 144
  00dc1dc  blr

LoadSpaceshipModel:   # 0xdc210, 0x5ec bytes
  00dc210  stdu 1, -240(1)
  00dc214  mflr 0
  00dc218  std 0, 256(1)
  00dc21c  std 20, 144(1)
  00dc220  std 25, 184(1)
  00dc224  lis 20, 150
  00dc228  ori 25, 3, 0
  00dc22c  addic 20, 20, 17776
  00dc230  lis 5, 150
  00dc234  lis 6, 271
  00dc238  addic 5, 5, 17760
  00dc23c  addic 6, 6, -24300
  00dc240  std 31, 232(1)
  00dc244  lhz 3, 38(20)
  00dc248  ori 31, 4, 0
  00dc24c  extsh 3, 3
  00dc250  lwz 4, 12(5)
  00dc254  sldi 7, 3, 3
  00dc258  ori 3, 25, 0
  00dc25c  lwzx 5, 6, 7
  00dc260  slwi 5, 5, 11
  00dc264  std 30, 224(1)
  00dc268  std 29, 216(1)
  00dc26c  std 28, 208(1)
  00dc270  std 27, 200(1)
  00dc274  std 26, 192(1)
  00dc278  std 24, 176(1)
  00dc27c  std 23, 168(1)
  00dc280  std 22, 160(1)
  00dc284  std 21, 152(1)
  00dc288  std 19, 136(1)
  00dc28c  std 18, 128(1)
  00dc290  extsw 5, 5
  00dc294  bl 0x5002cc
  00dc298  nop
  00dc29c  lwz 30, 0(25)
  00dc2a0  li 27, 0
  00dc2a4  lwz 22, 4(25)
  00dc2a8  lis 26, 150
  00dc2ac  lwz 29, 8(25)
  00dc2b0  ori 19, 27, 0
  00dc2b4  lwz 28, 12(25)
  00dc2b8  addic 26, 26, 27352
  00dc2bc  cmpwi 27, 0
  00dc2c0  cmpwi 6, 27, 1
  00dc2c4  bf 2, 0xdc30c
  00dc2c8  lwz 4, 12(26)
  00dc2cc  addic 3, 1, 112
  00dc2d0  lwz 9, 172(31)
  00dc2d4  li 10, 64
  00dc2d8  li 5, 1
  00dc2dc  addc 4, 4, 9
  00dc2e0  li 6, 19
  00dc2e4  li 7, 0
  00dc2e8  li 8, 0
  00dc2ec  li 9, 64
  00dc2f0  srawi 4, 4, 8
  00dc2f4  bl 0x503084
  00dc2f8  nop
  00dc2fc  lis 3, 1
  00dc300  ori 3, 3, 17456
  00dc304  addc 3, 22, 3
  00dc308  b 0xdc3d0
  00dc30c  cmpwi 1, 27, 2
  00dc310  bf 26, 0xdc358
  00dc314  lwz 4, 12(26)
  00dc318  lwz 9, 176(31)
  00dc31c  addic 3, 1, 112
  00dc320  li 5, 1
  00dc324  addc 4, 4, 9
  00dc328  li 6, 19
  00dc32c  li 7, 0
  00dc330  li 8, 0
  00dc334  li 9, 32
  00dc338  srawi 4, 4, 8
  00dc33c  li 10, 32
  00dc340  bl 0x503084
  00dc344  nop
  00dc348  lis 3, 1
  00dc34c  ori 3, 3, 21552
  00dc350  addc 3, 22, 3
  00dc354  b 0xdc3d0
  00dc358  bf 6, 0xdc398
  00dc35c  lwz 4, 12(26)
  00dc360  lwz 9, 180(31)
  00dc364  addic 3, 1, 112
  00dc368  li 5, 1
  00dc36c  addc 4, 4, 9
  00dc370  li 6, 18
  00dc374  li 7, 0
  00dc378  li 8, 0
  00dc37c  li 9, 16
  00dc380  srawi 4, 4, 8
  00dc384  li 10, 16
  00dc388  bl 0x503084
  00dc38c  nop
  00dc390  addic 3, 22, 48
  00dc394  b 0xdc3d0
  00dc398  lwz 4, 12(26)
  00dc39c  addic 3, 1, 112
  00dc3a0  lwz 9, 184(31)
  00dc3a4  li 10, 16
  00dc3a8  li 5, 1
  00dc3ac  addc 4, 4, 9
  00dc3b0  li 6, 18
  00dc3b4  li 7, 0
  00dc3b8  li 8, 0
  00dc3bc  li 9, 16
  00dc3c0  srawi 4, 4, 8
  00dc3c4  bl 0x503084
  00dc3c8  nop
  00dc3cc  addic 3, 28, 48
  00dc3d0  addc 4, 3, 25
  00dc3d4  li 3, 0
  00dc3d8  clrldi 24, 4, 32
  00dc3dc  bl 0x503244
  00dc3e0  nop
  00dc3e4  addic 3, 1, 112
  00dc3e8  ori 4, 24, 0
  00dc3ec  bl 0x50306c
  00dc3f0  nop
  00dc3f4  li 3, 0
  00dc3f8  li 4, 0
  00dc3fc  bl 0x503074
  00dc400  nop
  00dc404  addic 27, 27, 1
  00dc408  cmpwi 27, 4
  00dc40c  bt 0, 0xdc2bc
  00dc410  li 3, 180
  00dc414  vspltisw 2, 8
  00dc418  li 5, 172
  00dc41c  li 4, 176
  00dc420  lis 7, 114
  00dc424  li 6, 10
  00dc428  lvlx 3, 3, 31
  00dc42c  addic 27, 7, 18368
  00dc430  lvlx 4, 5, 31
  00dc434  li 3, 18368
  00dc438  vsraw 3, 3, 2
  00dc43c  li 8, 12
  00dc440  lvlx 5, 4, 31
  00dc444  lis 18, 163
  00dc448  vsraw 4, 4, 2
  00dc44c  li 5, 14
  00dc450  vsraw 2, 5, 2
  00dc454  lis 24, 165
  00dc458  vsplth 6, 3, 1
  00dc45c  addc 9, 25, 22
  00dc460  lvx 7, 3, 7
  00dc464  addic 24, 24, -15040
  00dc468  vsplth 5, 4, 1
  00dc46c  lis 3, 14
  00dc470  clrldi 26, 9, 32
  00dc474  addi 3, 3, -15904
  00dc478  lis 23, 163
  00dc47c  stvehx 6, 6, 27
  00dc480  vsplth 6, 2, 1
  00dc484  li 6, 16
  00dc488  stvehx 5, 8, 27
  00dc48c  addic 23, 23, 29584
  00dc490  lwz 4, 29576(18)
  00dc494  lis 8, 1
  00dc498  slwi 7, 4, 4
  00dc49c  stvehx 6, 5, 27
  00dc4a0  lvx 5, 0, 3
  00dc4a4  addc 5, 24, 7
  00dc4a8  lis 7, -32768
  00dc4ac  vperm 3, 7, 3, 5
  00dc4b0  vperm 2, 4, 2, 5
  00dc4b4  clrldi 5, 5, 32
  00dc4b8  lvx 4, 6, 3
  00dc4bc  slwi 3, 4, 2
  00dc4c0  subc 6, 26, 7
  00dc4c4  vperm 2, 3, 2, 4
  00dc4c8  extsw 7, 3
  00dc4cc  addc 4, 25, 22
  00dc4d0  ori 3, 26, 0
  00dc4d4  addic 4, 4, 1072
  00dc4d8  stvx 2, 0, 5
  00dc4dc  clrldi 4, 4, 32
  00dc4e0  stwx 6, 23, 7
  00dc4e4  ori 5, 8, 16384
  00dc4e8  bl 0x5002cc
  00dc4ec  nop
  00dc4f0  lhz 3, 38(20)
  00dc4f4  lis 4, 115
  00dc4f8  lis 6, 1
  00dc4fc  extsh 5, 3
  00dc500  addic 4, 4, 7232
  00dc504  lwz 3, 29576(18)
  00dc508  sldi 5, 5, 2
  00dc50c  ori 6, 6, 16384
  00dc510  lis 21, 163
  00dc514  addc 22, 26, 6
  00dc518  lis 7, 114
  00dc51c  lwzx 6, 4, 5
  00dc520  addic 21, 21, 21696
  00dc524  extsw 6, 6
  00dc528  clrldi 22, 22, 32
  00dc52c  stb 3, 18400(7)
  00dc530  lbzx 6, 21, 6
  00dc534  cmpwi 6, 255
  00dc538  bf 2, 0xdc5fc
  00dc53c  lis 6, 163
  00dc540  slwi 3, 3, 4
  00dc544  lwzx 4, 4, 5
  00dc548  addc 26, 25, 30
  00dc54c  lis 7, 163
  00dc550  subc 30, 27, 3
  00dc554  lwz 5, 23744(6)
  00dc558  extsw 27, 4
  00dc55c  addic 6, 7, 21248
  00dc560  slwi 4, 5, 1
  00dc564  slwi 3, 5, 2
  00dc568  lis 7, 163
  00dc56c  extsw 4, 4
  00dc570  extsw 3, 3
  00dc574  stbx 5, 21, 27
  00dc578  addic 7, 7, 19456
  00dc57c  clrldi 26, 26, 32
  00dc580  clrldi 30, 30, 32
  00dc584  cmpwi 26, 0
  00dc588  sthx 27, 6, 4
  00dc58c  stwx 26, 7, 3
  00dc590  bf 2, 0xdc5b4
  00dc594  ori 3, 27, 0
  00dc598  bl 0xfbfa0
  00dc59c  nop
  00dc5a0  lis 3, 163
  00dc5a4  lwz 4, 23744(3)
  00dc5a8  addic 4, 4, 1
  00dc5ac  stw 4, 23744(3)
  00dc5b0  b 0xdc5fc
  00dc5b4  ori 4, 3, 0
  00dc5b8  lis 3, 163
  00dc5bc  lwz 6, 44(26)
  00dc5c0  addic 5, 3, 31632
  00dc5c4  ori 3, 27, 0
  00dc5c8  stwx 6, 5, 4
  00dc5cc  bl 0xfbfa0
  00dc5d0  nop
  00dc5d4  lis 7, 163
  00dc5d8  lis 5, 114
  00dc5dc  ori 3, 26, 0
  00dc5e0  ori 4, 30, 0
  00dc5e4  addic 5, 5, 18400
  00dc5e8  lwz 6, 23744(7)
  00dc5ec  addic 8, 6, 1
  00dc5f0  ori 6, 27, 0
  00dc5f4  stw 8, 23744(7)
  00dc5f8  bl 0xdbc38
  00dc5fc  lis 27, 163
  00dc600  vspltisw 2, 8
  00dc604  li 3, 184
  00dc608  lis 4, 114
  00dc60c  li 6, 18384
  00dc610  lis 7, 14
  00dc614  lwz 5, 29576(27)
  00dc618  addic 30, 4, 18384
  00dc61c  addi 7, 7, -15904
  00dc620  addic 5, 5, 1
  00dc624  lis 9, 28672
  00dc628  addc 8, 25, 28
  00dc62c  stw 5, 29576(27)
  00dc630  lvlx 3, 3, 31
  00dc634  li 3, 10
  00dc638  vsraw 2, 3, 2
  00dc63c  lvx 3, 6, 4
  00dc640  li 4, 32
  00dc644  slwi 6, 5, 4
  00dc648  vsplth 4, 2, 1
  00dc64c  addc 6, 24, 6
  00dc650  clrldi 6, 6, 32
  00dc654  stvehx 4, 3, 30
  00dc658  lvx 4, 4, 7
  00dc65c  slwi 3, 5, 2
  00dc660  vperm 2, 3, 2, 4
  00dc664  addc 7, 22, 9
  00dc668  extsw 9, 3
  00dc66c  addic 4, 8, 1072
  00dc670  ori 3, 22, 0
  00dc674  clrldi 4, 4, 32
  00dc678  stvx 2, 0, 6
  00dc67c  stwx 7, 23, 9
  00dc680  li 5, 16384
  00dc684  bl 0x5002cc
  00dc688  nop
  00dc68c  lhz 3, 38(20)
  00dc690  lis 4, 115
  00dc694  lis 6, 114
  00dc698  extsh 5, 3
  00dc69c  addic 4, 4, 7244
  00dc6a0  lwz 3, 29576(27)
  00dc6a4  sldi 5, 5, 2
  00dc6a8  addic 31, 22, 16384
  00dc6ac  lwzx 7, 4, 5
  00dc6b0  stb 3, 18400(6)
  00dc6b4  extsw 6, 7
  00dc6b8  lbzx 6, 21, 6
  00dc6bc  cmpwi 6, 255
  00dc6c0  bf 2, 0xdc784
  00dc6c4  lis 6, 163
  00dc6c8  lwzx 4, 4, 5
  00dc6cc  slwi 3, 3, 4
  00dc6d0  addc 28, 25, 29
  00dc6d4  subc 29, 30, 3
  00dc6d8  lis 3, 163
  00dc6dc  lwz 5, 23744(6)
  00dc6e0  extsw 30, 4
  00dc6e4  lis 7, 163
  00dc6e8  slwi 4, 5, 2
  00dc6ec  slwi 6, 5, 1
  00dc6f0  addic 8, 3, 19456
  00dc6f4  extsw 3, 4
  00dc6f8  stbx 5, 21, 30
  00dc6fc  addic 7, 7, 21248
  00dc700  clrldi 28, 28, 32
  00dc704  extsw 4, 6
  00dc708  cmpwi 28, 0
  00dc70c  clrldi 29, 29, 32
  00dc710  stwx 28, 8, 3
  00dc714  sthx 30, 7, 4
  00dc718  bf 2, 0xdc73c
  00dc71c  ori 3, 30, 0
  00dc720  bl 0xfbfa0
  00dc724  nop
  00dc728  lis 3, 163
  00dc72c  lwz 4, 23744(3)
  00dc730  addic 4, 4, 1
  00dc734  stw 4, 23744(3)
  00dc738  b 0xdc784
  00dc73c  ori 4, 3, 0
  00dc740  lwz 6, 44(28)
  00dc744  lis 3, 163
  00dc748  addic 5, 3, 31632
  00dc74c  ori 3, 30, 0
  00dc750  stwx 6, 5, 4
  00dc754  bl 0xfbfa0
  00dc758  nop
  00dc75c  lis 7, 163
  00dc760  lis 5, 114
  00dc764  ori 3, 28, 0
  00dc768  addic 5, 5, 18400
  00dc76c  ori 6, 30, 0
  00dc770  lwz 4, 23744(7)
  00dc774  addic 8, 4, 1
  00dc778  ori 4, 29, 0
  00dc77c  stw 8, 23744(7)
  00dc780  bl 0xdbc38
  00dc784  lis 4, 163
  00dc788  lis 5, 115
  00dc78c  li 6, 1
  00dc790  lis 7, 115
  00dc794  lis 9, 165
  00dc798  lwz 8, 29576(4)
  00dc79c  ori 3, 31, 0
  00dc7a0  stw 6, 7312(5)
  00dc7a4  addic 5, 8, 1
  00dc7a8  stw 6, 7316(7)
  00dc7ac  stw 19, 25028(9)
  00dc7b0  stw 5, 29576(4)
  00dc7b4  ld 0, 256(1)
  00dc7b8  mtlr 0
  00dc7bc  ld 18, 128(1)
  00dc7c0  ld 19, 136(1)
  00dc7c4  ld 20, 144(1)
  00dc7c8  ld 21, 152(1)
  00dc7cc  ld 22, 160(1)
  00dc7d0  ld 23, 168(1)
  00dc7d4  ld 24, 176(1)
  00dc7d8  ld 25, 184(1)
  00dc7dc  ld 26, 192(1)
  00dc7e0  ld 27, 200(1)
  00dc7e4  ld 28, 208(1)
  00dc7e8  ld 29, 216(1)
  00dc7ec  ld 30, 224(1)
  00dc7f0  ld 31, 232(1)
  00dc7f4  addi 1, 1, 240
  00dc7f8  blr

SetUpVisGif:   # 0xdc7fc, 0x360 bytes
  00dc7fc  stdu 1, -256(1)
  00dc800  mflr 0
  00dc804  std 0, 272(1)
  00dc808  std 24, 192(1)
  00dc80c  std 23, 184(1)
  00dc810  ori 23, 4, 0
  00dc814  std 27, 216(1)
  00dc818  ori 24, 3, 0
  00dc81c  ori 27, 5, 0
  00dc820  std 29, 232(1)
  00dc824  li 5, 1
  00dc828  ori 29, 7, 0
  00dc82c  lhz 3, 4(23)
  00dc830  li 4, 1
  00dc834  li 7, 1
  00dc838  std 28, 224(1)
  00dc83c  std 25, 200(1)
  00dc840  extsh 3, 3
  00dc844  ori 28, 6, 0
  00dc848  std 26, 208(1)
  00dc84c  srawi 25, 3, 6
  00dc850  srawi 26, 3, 7
  00dc854  subc 5, 25, 5
  00dc858  subc 4, 4, 25
  00dc85c  sradi 5, 5, 63
  00dc860  li 6, 1
  00dc864  subc 7, 26, 7
  00dc868  and 4, 5, 4
  00dc86c  subc 6, 6, 26
  00dc870  sradi 5, 7, 63
  00dc874  addc 25, 25, 4
  00dc878  std 31, 248(1)
  00dc87c  and 4, 5, 6
  00dc880  ori 31, 9, 0
  00dc884  std 30, 240(1)
  00dc888  addc 26, 26, 4
  00dc88c  std 22, 176(1)
  00dc890  std 21, 168(1)
  00dc894  std 20, 160(1)
  00dc898  std 19, 152(1)
  00dc89c  ori 30, 8, 0
  00dc8a0  bl 0x500178
  00dc8a4  nop
  00dc8a8  lhz 4, 6(23)
  00dc8ac  ori 19, 3, 0
  00dc8b0  extsh 3, 4
  00dc8b4  bl 0x500178
  00dc8b8  nop
  00dc8bc  lis 4, 150
  00dc8c0  lhz 5, 10(23)
  00dc8c4  ori 20, 3, 0
  00dc8c8  addic 4, 4, 27352
  00dc8cc  lhz 6, 8(23)
  00dc8d0  lhz 7, 12(23)
  00dc8d4  extsh 5, 5
  00dc8d8  lhz 8, 14(23)
  00dc8dc  extsh 3, 6
  00dc8e0  extsh 6, 7
  00dc8e4  extsh 7, 8
  00dc8e8  lwz 4, 12(4)
  00dc8ec  cmpwi 31, 0
  00dc8f0  srawi 4, 4, 8
  00dc8f4  addc 21, 5, 4
  00dc8f8  addc 22, 6, 4
  00dc8fc  addc 23, 7, 4
  00dc900  extsw 21, 21
  00dc904  extsw 22, 22
  00dc908  extsw 23, 23
  00dc90c  bt 0, 0xdc9cc
  00dc910  addic 4, 3, -1
  00dc914  li 3, 0
  00dc918  ori 9, 27, 0
  00dc91c  li 5, 1
  00dc920  ori 6, 28, 0
  00dc924  li 7, 0
  00dc928  li 8, 0
  00dc92c  bl 0x502fd4
  00dc930  nop
  00dc934  std 3, 0(24)
  00dc938  clrldi 3, 29, 32
  00dc93c  clrldi 7, 31, 32
  00dc940  clrldi 4, 30, 32
  00dc944  li 5, 0
  00dc948  li 6, 0
  00dc94c  li 8, 0
  00dc950  bl 0x502f08
  00dc954  nop
  00dc958  li 7, 18
  00dc95c  std 3, 16(24)
  00dc960  li 11, 0
  00dc964  li 3, 0
  00dc968  li 12, 4
  00dc96c  std 7, 112(1)
  00dc970  std 11, 120(1)
  00dc974  li 9, 0
  00dc978  std 11, 128(1)
  00dc97c  ori 4, 25, 0
  00dc980  std 12, 136(1)
  00dc984  ori 10, 21, 0
  00dc988  li 5, 19
  00dc98c  ori 6, 19, 0
  00dc990  ori 7, 20, 0
  00dc994  li 8, 1
  00dc998  bl 0x502fbc
  00dc99c  nop
  00dc9a0  std 3, 32(24)
  00dc9a4  ori 4, 26, 0
  00dc9a8  li 3, 0
  00dc9ac  ori 5, 22, 0
  00dc9b0  li 6, 1
  00dc9b4  ori 7, 23, 0
  00dc9b8  li 8, 1
  00dc9bc  bl 0x502f6c
  00dc9c0  nop
  00dc9c4  std 3, 48(24)
  00dc9c8  b 0xdcb18
  00dc9cc  cmpwi 31, -2
  00dc9d0  bt 1, 0xdca64
  00dc9d4  li 3, -3
  00dc9d8  lis 4, 162
  00dc9dc  subc 3, 3, 31
  00dc9e0  lis 5, 162
  00dc9e4  cntlzw 3, 3
  00dc9e8  addic 4, 4, 1104
  00dc9ec  addic 5, 5, 1128
  00dc9f0  sldi 3, 3, 58
  00dc9f4  subc 5, 5, 4
  00dc9f8  sradi 3, 3, 63
  00dc9fc  li 8, 0
  00dca00  and 3, 3, 5
  00dca04  ori 9, 27, 0
  00dca08  addc 31, 4, 3
  00dca0c  li 3, 0
  00dca10  li 4, 0
  00dca14  li 5, 1
  00dca18  ori 6, 28, 0
  00dca1c  li 7, 0
  00dca20  bl 0x502fd4
  00dca24  nop
  00dca28  std 3, 0(24)
  00dca2c  li 4, 1
  00dca30  li 3, 1
  00dca34  li 5, 0
  00dca38  li 6, 0
  00dca3c  li 7, 0
  00dca40  li 8, 0
  00dca44  bl 0x502f08
  00dca48  nop
  00dca4c  std 3, 16(24)
  00dca50  ld 3, 0(31)
  00dca54  std 3, 32(24)
  00dca58  ld 3, 16(31)
  00dca5c  std 3, 48(24)
  00dca60  b 0xdcb18
  00dca64  li 3, 0
  00dca68  li 4, 0
  00dca6c  li 5, 1
  00dca70  ori 6, 28, 0
  00dca74  li 7, 0
  00dca78  li 8, 0
  00dca7c  ori 9, 27, 0
  00dca80  bl 0x502fd4
  00dca84  nop
  00dca88  std 3, 0(24)
  00dca8c  li 4, 1
  00dca90  li 3, 1
  00dca94  li 5, 0
  00dca98  li 6, 0
  00dca9c  li 7, 0
  00dcaa0  li 8, 0
  00dcaa4  bl 0x502f08
  00dcaa8  nop
  00dcaac  li 11, 0
  00dcab0  std 3, 16(24)
  00dcab4  li 12, 4
  00dcab8  li 3, 16379
  00dcabc  li 9, 0
  00dcac0  std 11, 112(1)
  00dcac4  li 4, 1
  00dcac8  std 11, 120(1)
  00dcacc  li 10, 0
  00dcad0  std 11, 128(1)
  00dcad4  li 5, 18
  00dcad8  std 12, 136(1)
  00dcadc  li 6, 3
  00dcae0  li 7, 3
  00dcae4  li 8, 1
  00dcae8  bl 0x502fbc
  00dcaec  nop
  00dcaf0  std 3, 32(24)
  00dcaf4  li 4, 0
  00dcaf8  li 3, 0
  00dcafc  li 5, 0
  00dcb00  li 6, 0
  00dcb04  li 7, 0
  00dcb08  li 8, 0
  00dcb0c  bl 0x502f6c
  00dcb10  nop
  00dcb14  std 3, 48(24)
  00dcb18  ld 0, 272(1)
  00dcb1c  mtlr 0
  00dcb20  ld 19, 152(1)
  00dcb24  ld 20, 160(1)
  00dcb28  ld 21, 168(1)
  00dcb2c  ld 22, 176(1)
  00dcb30  ld 23, 184(1)
  00dcb34  ld 24, 192(1)
  00dcb38  ld 25, 200(1)
  00dcb3c  ld 26, 208(1)
  00dcb40  ld 27, 216(1)
  00dcb44  ld 28, 224(1)
  00dcb48  ld 29, 232(1)
  00dcb4c  ld 30, 240(1)
  00dcb50  ld 31, 248(1)
  00dcb54  addi 1, 1, 256
  00dcb58  blr

STUB_000dcb5c:   # 0xdcb5c, 0x4 bytes
  00dcb5c  blr

STUB_000dcb60:   # 0xdcb60, 0x4 bytes
  00dcb60  blr

ParseMobySeq:   # 0xdcb64, 0x5c bytes
  00dcb64  sldi 4, 4, 2
  00dcb68  addc 3, 3, 4
  00dcb6c  clrldi 3, 3, 32
  00dcb70  lwz 3, 72(3)
  00dcb74  lwz 4, 20(3)
  00dcb78  lbz 5, 16(3)
  00dcb7c  cmpwi 4, 0
  00dcb80  cmpwi 1, 5, 0
  00dcb84  bt 2, 0xdcb90
  00dcb88  addc 4, 3, 4
  00dcb8c  stw 4, 20(3)
  00dcb90  li 5, 0
  00dcb94  bf 5, 0xdcbbc
  00dcb98  ori 4, 3, 0
  00dcb9c  lwz 6, 28(4)
  00dcba0  addic 5, 5, 1
  00dcba4  lbz 7, 16(3)
  00dcba8  addc 6, 6, 3
  00dcbac  cmpw 5, 7
  00dcbb0  stw 6, 28(4)
  00dcbb4  addic 4, 4, 4
  00dcbb8  bt 0, 0xdcb9c
  00dcbbc  blr

STUB_000dcbc0:   # 0xdcbc0, 0x4 bytes
  00dcbc0  blr

STUB_000dcbc4:   # 0xdcbc4, 0x4 bytes
  00dcbc4  blr

STUB_000dcbc8:   # 0xdcbc8, 0x4 bytes
  00dcbc8  blr

ParseColl:   # 0xdcbcc, 0x7c bytes
  00dcbcc  ori 4, 3, 0
  00dcbd0  lwz 5, 0(4)
  00dcbd4  cmpwi 5, 0
  00dcbd8  bt 2, 0xdcbe8
  00dcbdc  lis 6, 161
  00dcbe0  addc 5, 3, 5
  00dcbe4  stw 5, 2368(6)
  00dcbe8  lwz 4, 4(4)
  00dcbec  cmpwi 4, 0
  00dcbf0  bt 2, 0xdcc44
  00dcbf4  addc 3, 3, 4
  00dcbf8  lis 4, 161
  00dcbfc  clrldi 6, 3, 32
  00dcc00  li 5, 0
  00dcc04  lwz 6, 0(6)
  00dcc08  stw 3, 23552(4)
  00dcc0c  cmpwi 6, 0
  00dcc10  bf 1, 0xdcc44
  00dcc14  ori 6, 5, 0
  00dcc18  addc 7, 3, 6
  00dcc1c  addic 5, 5, 1
  00dcc20  clrldi 7, 7, 32
  00dcc24  addic 6, 6, 16
  00dcc28  lwz 8, 28(7)
  00dcc2c  addc 3, 3, 8
  00dcc30  stw 3, 28(7)
  00dcc34  lwz 3, 23552(4)
  00dcc38  lwz 7, 0(3)
  00dcc3c  cmpw 5, 7
  00dcc40  bt 0, 0xdcc18
  00dcc44  blr

PrintMobyMemory:   # 0xdcc50, 0x1ec bytes
  00dcc50  stdu 1, -4288(1)
  00dcc54  mflr 0
  00dcc58  std 0, 4304(1)
  00dcc5c  stfd 31, 4280(1)
  00dcc60  std 26, 4232(1)
  00dcc64  std 24, 4216(1)
  00dcc68  lis 26, 14
  00dcc6c  li 24, 0
  00dcc70  cmpwi 4, 0
  00dcc74  std 30, 4264(1)
  00dcc78  std 25, 4224(1)
  00dcc7c  addi 26, 26, -13240
  00dcc80  ori 25, 3, 0
  00dcc84  std 31, 4272(1)
  00dcc88  ori 30, 24, 0
  00dcc8c  std 29, 4256(1)
  00dcc90  std 28, 4248(1)
  00dcc94  std 27, 4240(1)
  00dcc98  ori 31, 4, 0
  00dcc9c  bf 1, 0xdcd3c
  00dcca0  ori 27, 1, 0
  00dcca4  li 29, 112
  00dcca8  lfs 31, 0(26)
  00dccac  addic 28, 25, 4
  00dccb0  addc 29, 27, 29
  00dccb4  lvlx 2, 0, 28
  00dccb8  lwz 4, 0(25)
  00dccbc  vcfsx 2, 2, 0
  00dccc0  cmpwi 4, 0
  00dccc4  vspltw 2, 2, 0
  00dccc8  stvewx 2, 0, 29
  00dcccc  bf 2, 0xdccd8
  00dccd0  lfs 1, 4(26)
  00dccd4  b 0xdcd1c
  00dccd8  lwz 3, 32(25)
  00dccdc  cmpwi 3, 0
  00dcce0  bf 2, 0xdccfc
  00dcce4  lwz 3, 64(25)
  00dcce8  subc 3, 3, 4
  00dccec  extsw 3, 3
  00dccf0  bl 0x502730
  00dccf4  nop
  00dccf8  b 0xdcd0c
  00dccfc  subc 3, 3, 4
  00dcd00  extsw 3, 3
  00dcd04  bl 0x502730
  00dcd08  nop
  00dcd0c  lis 3, -16512
  00dcd10  fmuls 1, 1, 31
  00dcd14  stw 3, 120(27)
  00dcd18  stw 30, 124(27)
  00dcd1c  addic 24, 24, 1
  00dcd20  stfs 1, 116(27)
  00dcd24  addic 28, 28, 32
  00dcd28  cmpw 24, 31
  00dcd2c  addic 25, 25, 32
  00dcd30  addic 29, 29, 8
  00dcd34  addic 27, 27, 8
  00dcd38  bt 0, 0xdccb4
  00dcd3c  cmpwi 31, 0
  00dcd40  ori 4, 30, 0
  00dcd44  li 5, 1
  00dcd48  bf 1, 0xdcdb4
  00dcd4c  ori 3, 1, 0
  00dcd50  lwz 6, 116(3)
  00dcd54  lwz 7, 124(3)
  00dcd58  srawi 9, 6, 31
  00dcd5c  srawi 8, 7, 31
  00dcd60  lfs 2, 116(3)
  00dcd64  srwi 11, 9, 1
  00dcd68  lfs 1, 124(3)
  00dcd6c  srwi 10, 8, 1
  00dcd70  xor 6, 11, 6
  00dcd74  xor 7, 10, 7
  00dcd78  subc 6, 6, 9
  00dcd7c  subc 7, 7, 8
  00dcd80  cmpw 6, 7
  00dcd84  bf 0, 0xdcda4
  00dcd88  lfs 3, 112(3)
  00dcd8c  lfs 4, 120(3)
  00dcd90  ori 5, 30, 0
  00dcd94  stfs 1, 116(3)
  00dcd98  stfs 4, 112(3)
  00dcd9c  stfs 3, 120(3)
  00dcda0  stfs 2, 124(3)
  00dcda4  addic 4, 4, 1
  00dcda8  addic 3, 3, 8
  00dcdac  cmpw 4, 31
  00dcdb0  bt 0, 0xdcd50
  00dcdb4  cmpwi 5, 0
  00dcdb8  bt 2, 0xdcd3c
  00dcdbc  cmpwi 31, 0
  00dcdc0  bf 1, 0xdce08
  00dcdc4  lis 29, 101
  00dcdc8  ori 28, 1, 0
  00dcdcc  addic 29, 29, 8848
  00dcdd0  lfs 1, 112(28)
  00dcdd4  bl 0x502758
  00dcdd8  nop
  00dcddc  lfs 1, 116(28)
  00dcde0  ori 4, 3, 0
  00dcde4  ori 3, 29, 0
  00dcde8  stfd 1, 64(1)
  00dcdec  ld 5, 64(1)
  00dcdf0  bl 0x5cd098
  00dcdf4  nop
  00dcdf8  addic 30, 30, 1
  00dcdfc  addic 28, 28, 8
  00dce00  cmpw 30, 31
  00dce04  bt 0, 0xdcdd0
  00dce08  ld 0, 4304(1)
  00dce0c  mtlr 0
  00dce10  lfd 31, 4280(1)
  00dce14  ld 24, 4216(1)
  00dce18  ld 25, 4224(1)
  00dce1c  ld 26, 4232(1)
  00dce20  ld 27, 4240(1)
  00dce24  ld 28, 4248(1)
  00dce28  ld 29, 4256(1)
  00dce2c  ld 30, 4264(1)
  00dce30  ld 31, 4272(1)
  00dce34  addi 1, 1, 4288
  00dce38  blr

STUB_000dce3c:   # 0xdce3c, 0x4 bytes
  00dce3c  blr

LoadHelp:   # 0xdce40, 0x10c bytes
  00dce40  stdu 1, -256(1)
  00dce44  mflr 0
  00dce48  std 0, 272(1)
  00dce4c  std 31, 248(1)
  00dce50  lis 3, 346
  00dce54  addic 31, 1, 112
  00dce58  lbz 3, -15535(3)
  00dce5c  std 30, 240(1)
  00dce60  cmpwi 3, 0
  00dce64  bf 2, 0xdce90
  00dce68  lis 3, 101
  00dce6c  addic 30, 3, 8872
  00dce70  bl 0x10388
  00dce74  nop
  00dce78  ori 5, 3, 0
  00dce7c  ori 3, 31, 0
  00dce80  ori 4, 30, 0
  00dce84  bl 0x5cd2a8
  00dce88  nop
  00dce8c  b 0xdcea4
  00dce90  lis 4, 101
  00dce94  ori 3, 31, 0
  00dce98  addic 4, 4, 8904
  00dce9c  bl 0x5cd2a8
  00dcea0  nop
  00dcea4  lis 3, 161
  00dcea8  lis 5, 4
  00dceac  addic 30, 3, 2264
  00dceb0  ori 3, 31, 0
  00dceb4  lwz 4, 84(30)
  00dceb8  bl 0x503e00
  00dcebc  nop
  00dcec0  lis 3, 114
  00dcec4  lis 6, 162
  00dcec8  addic 31, 3, 2180
  00dcecc  lwz 3, 84(30)
  00dced0  addic 4, 3, 8
  00dced4  lwz 7, 0(3)
  00dced8  stw 7, 44(31)
  00dcedc  lwz 7, 4(3)
  00dcee0  stw 3, -22528(6)
  00dcee4  addic 5, 7, 3
  00dcee8  rlwinm 5, 5, 0, 0, 29
  00dceec  addic 5, 5, -8
  00dcef0  extsw 5, 5
  00dcef4  bl 0x50027c
  00dcef8  nop
  00dcefc  lwz 31, 44(31)
  00dcf00  cmpwi 31, 0
  00dcf04  bf 1, 0xdcf34
  00dcf08  li 3, 0
  00dcf0c  lis 4, 162
  00dcf10  addic 31, 31, -1
  00dcf14  cmpwi 31, 0
  00dcf18  lwz 4, -22528(4)
  00dcf1c  addic 5, 4, -8
  00dcf20  lwzx 6, 4, 3
  00dcf24  addc 5, 6, 5
  00dcf28  stwx 5, 4, 3
  00dcf2c  addic 3, 3, 16
  00dcf30  bt 1, 0xdcf0c
  00dcf34  ld 0, 272(1)
  00dcf38  mtlr 0
  00dcf3c  ld 30, 240(1)
  00dcf40  ld 31, 248(1)
  00dcf44  addi 1, 1, 256
  00dcf48  blr

NAVG_LoadFile:   # 0xdcf58, 0x1fe0 bytes
  00dcf58  stdu 1, -576(1)
  00dcf5c  mflr 0
  00dcf60  std 0, 592(1)
  00dcf64  stfd 29, 552(1)
  00dcf68  stfd 30, 560(1)
  00dcf6c  stfd 31, 568(1)
  00dcf70  std 31, 544(1)
  00dcf74  lis 4, 161
  00dcf78  std 29, 528(1)
  00dcf7c  std 20, 456(1)
  00dcf80  ori 31, 3, 0
  00dcf84  addic 29, 4, 2264
  00dcf88  std 27, 512(1)
  00dcf8c  lwz 20, 24(29)
  00dcf90  std 30, 536(1)
  00dcf94  std 28, 520(1)
  00dcf98  std 26, 504(1)
  00dcf9c  std 25, 496(1)
  00dcfa0  std 24, 488(1)
  00dcfa4  std 23, 480(1)
  00dcfa8  std 22, 472(1)
  00dcfac  std 21, 464(1)
  00dcfb0  std 19, 448(1)
  00dcfb4  std 18, 440(1)
  00dcfb8  std 17, 432(1)
  00dcfbc  std 16, 424(1)
  00dcfc0  std 15, 416(1)
  00dcfc4  std 14, 408(1)
  00dcfc8  lwz 27, 28(29)
  00dcfcc  bl 0x51cc4c
  00dcfd0  nop
  00dcfd4  lis 4, 150
  00dcfd8  ori 30, 3, 0
  00dcfdc  lis 26, 151
  00dcfe0  lwz 3, 27368(4)
  00dcfe4  cmpwi 3, 0
  00dcfe8  bt 2, 0xdd00c
  00dcfec  lis 4, 101
  00dcff0  lwz 5, -25488(26)
  00dcff4  addic 3, 1, 256
  00dcff8  addic 4, 4, 8940
  00dcffc  extsw 5, 5
  00dd000  bl 0x5cd2a8
  00dd004  nop
  00dd008  b 0xdd028
  00dd00c  lis 4, 101
  00dd010  lwz 5, -25488(26)
  00dd014  addic 3, 1, 256
  00dd018  addic 4, 4, 8980
  00dd01c  extsw 5, 5
  00dd020  bl 0x5cd2a8
  00dd024  nop
  00dd028  ori 3, 30, 0
  00dd02c  li 4, 0
  00dd030  addic 7, 1, 248
  00dd034  addic 5, 1, 256
  00dd038  li 6, 1
  00dd03c  bl 0x5207a0
  00dd040  nop
  00dd044  li 4, 0
  00dd048  bl 0x51c030
  00dd04c  nop
  00dd050  lwz 3, 248(1)
  00dd054  cmpwi 3, 0
  00dd058  bf 2, 0xdd074
  00dd05c  bl 0x64f504
  00dd060  ld 2, 40(1)
  00dd064  li 11, 141
  00dd068  li 3, 100
  00dd06c  sc
  00dd070  b 0xdd05c
  00dd074  ori 3, 30, 0
  00dd078  li 4, 0
  00dd07c  addic 6, 1, 240
  00dd080  addic 5, 1, 256
  00dd084  li 7, 3
  00dd088  bl 0x521794
  00dd08c  nop
  00dd090  li 4, 0
  00dd094  bl 0x51c030
  00dd098  nop
  00dd09c  lwz 3, 28(29)
  00dd0a0  cmpwi 3, 0
  00dd0a4  ld 3, 240(1)
  00dd0a8  bt 2, 0xdd0b8
  00dd0ac  cmpwi 31, 0
  00dd0b0  std 29, 384(1)
  00dd0b4  bt 2, 0xdd0dc
  00dd0b8  lis 5, 161
  00dd0bc  extsw 4, 3
  00dd0c0  lwz 3, 24396(5)
  00dd0c4  std 29, 384(1)
  00dd0c8  bl 0x4fe52c
  00dd0cc  nop
  00dd0d0  ori 27, 3, 0
  00dd0d4  ld 3, 240(1)
  00dd0d8  stw 27, 28(29)
  00dd0dc  ori 7, 3, 0
  00dd0e0  lwz 5, 248(1)
  00dd0e4  ori 3, 30, 0
  00dd0e8  li 4, 0
  00dd0ec  ori 6, 27, 0
  00dd0f0  li 8, -1
  00dd0f4  bl 0x52521c
  00dd0f8  nop
  00dd0fc  li 4, 0
  00dd100  bl 0x51c030
  00dd104  nop
  00dd108  cmpwi 3, 0
  00dd10c  bt 2, 0xdd128
  00dd110  bl 0x64f504
  00dd114  ld 2, 40(1)
  00dd118  li 11, 141
  00dd11c  li 3, 100
  00dd120  sc
  00dd124  b 0xdd110
  00dd128  ori 3, 30, 0
  00dd12c  li 4, 0
  00dd130  lwz 5, 248(1)
  00dd134  bl 0x521b58
  00dd138  nop
  00dd13c  li 4, 0
  00dd140  bl 0x51c030
  00dd144  nop
  00dd148  cmpwi 3, 0
  00dd14c  bt 2, 0xdd168
  00dd150  bl 0x64f504
  00dd154  ld 2, 40(1)
  00dd158  li 11, 141
  00dd15c  li 3, 100
  00dd160  sc
  00dd164  b 0xdd150
  00dd168  li 3, 0
  00dd16c  bl 0x503244
  00dd170  nop
  00dd174  lis 3, 150
  00dd178  ori 4, 27, 0
  00dd17c  addic 3, 3, 17760
  00dd180  lwz 3, 8(3)
  00dd184  bl 0xe9150
  00dd188  nop
  00dd18c  li 3, 0
  00dd190  bl 0x503244
  00dd194  nop
  00dd198  lis 3, 151
  00dd19c  li 4, 0
  00dd1a0  addic 29, 3, -25376
  00dd1a4  li 5, 8976
  00dd1a8  ori 3, 29, 0
  00dd1ac  bl 0x5001fc
  00dd1b0  nop
  00dd1b4  lis 3, 149
  00dd1b8  li 4, 0
  00dd1bc  addic 3, 3, 5056
  00dd1c0  li 5, 928
  00dd1c4  bl 0x5001fc
  00dd1c8  nop
  00dd1cc  lis 3, 163
  00dd1d0  li 4, 0
  00dd1d4  addic 3, 3, -15296
  00dd1d8  li 5, 384
  00dd1dc  bl 0x5001fc
  00dd1e0  nop
  00dd1e4  li 3, 1234
  00dd1e8  bl 0x5c8420
  00dd1ec  nop
  00dd1f0  li 3, 0
  00dd1f4  bl 0x1131a8
  00dd1f8  nop
  00dd1fc  lis 4, 161
  00dd200  lis 3, 161
  00dd204  addic 5, 4, 2368
  00dd208  lis 6, 161
  00dd20c  addic 3, 3, 2560
  00dd210  addic 6, 6, 2496
  00dd214  li 14, 0
  00dd218  lis 7, 164
  00dd21c  stw 3, 4(5)
  00dd220  lis 4, 1
  00dd224  stw 6, 8(5)
  00dd228  addic 3, 7, -28384
  00dd22c  stw 14, 12(5)
  00dd230  stw 14, 16(5)
  00dd234  stw 14, 20(5)
  00dd238  bl 0x500250
  00dd23c  nop
  00dd240  lis 3, 165
  00dd244  li 4, 96
  00dd248  addic 3, 3, -28384
  00dd24c  bl 0x500250
  00dd250  nop
  00dd254  lwz 3, 0(27)
  00dd258  lis 4, 150
  00dd25c  lis 6, 150
  00dd260  addc 3, 27, 3
  00dd264  addic 31, 4, -12416
  00dd268  clrldi 28, 3, 32
  00dd26c  lis 3, 150
  00dd270  lis 4, 150
  00dd274  lis 7, 150
  00dd278  lwz 5, 0(28)
  00dd27c  stw 5, 572(31)
  00dd280  lwz 5, 4(28)
  00dd284  stw 5, 576(31)
  00dd288  lwz 5, 8(28)
  00dd28c  stw 5, 580(31)
  00dd290  lwz 5, 12(28)
  00dd294  stb 5, -5636(3)
  00dd298  lwz 5, 16(28)
  00dd29c  lis 3, 150
  00dd2a0  stb 5, -5635(6)
  00dd2a4  lwz 5, 20(28)
  00dd2a8  lis 6, 150
  00dd2ac  stb 5, -5634(4)
  00dd2b0  addic 25, 6, 17776
  00dd2b4  lfs 1, 24(28)
  00dd2b8  lis 4, 150
  00dd2bc  lis 5, 150
  00dd2c0  stfs 1, -5632(3)
  00dd2c4  lfs 1, 28(28)
  00dd2c8  lis 3, 161
  00dd2cc  stfs 1, -5628(7)
  00dd2d0  lfs 1, 32(28)
  00dd2d4  stfs 1, -5624(4)
  00dd2d8  lfs 1, 36(28)
  00dd2dc  stfs 1, -5620(5)
  00dd2e0  lfs 1, 40(28)
  00dd2e4  stfs 1, 2356(3)
  00dd2e8  lwz 3, 60(28)
  00dd2ec  stw 3, 48(25)
  00dd2f0  lwz 3, 64(28)
  00dd2f4  stw 3, 52(25)
  00dd2f8  lwz 3, 68(28)
  00dd2fc  stw 3, 56(25)
  00dd300  bl 0x678d8
  00dd304  nop
  00dd308  lis 3, 147
  00dd30c  lis 5, 18682
  00dd310  lis 6, 164
  00dd314  lis 7, 230
  00dd318  li 8, 500
  00dd31c  stw 5, -11152(3)
  00dd320  lis 4, 17402
  00dd324  lis 3, 17460
  00dd328  lis 5, 165
  00dd32c  lis 9, 31
  00dd330  stw 8, -28488(6)
  00dd334  lis 6, 165
  00dd338  stw 3, -23008(7)
  00dd33c  ori 7, 9, 16384
  00dd340  lwz 3, 572(31)
  00dd344  stw 4, 20252(5)
  00dd348  lwz 4, 576(31)
  00dd34c  extsw 3, 3
  00dd350  stw 7, 8144(6)
  00dd354  lwz 5, 580(31)
  00dd358  extsw 4, 4
  00dd35c  extsw 5, 5
  00dd360  bl 0x780f4
  00dd364  nop
  00dd368  lis 3, 161
  00dd36c  addic 3, 3, 1664
  00dd370  bl 0x174bd8
  00dd374  nop
  00dd378  lis 3, 162
  00dd37c  li 4, 256
  00dd380  addic 3, 3, -8448
  00dd384  bl 0x500250
  00dd388  nop
  00dd38c  lis 3, 162
  00dd390  li 4, 384
  00dd394  addic 3, 3, -7936
  00dd398  bl 0x500250
  00dd39c  nop
  00dd3a0  lis 31, 162
  00dd3a4  li 4, 1024
  00dd3a8  addic 31, 31, -9472
  00dd3ac  ori 3, 31, 0
  00dd3b0  bl 0x500250
  00dd3b4  nop
  00dd3b8  lis 30, 161
  00dd3bc  std 28, 368(1)
  00dd3c0  addic 30, 30, 24396
  00dd3c4  std 25, 376(1)
  00dd3c8  lwz 3, 20(30)
  00dd3cc  std 29, 392(1)
  00dd3d0  lwz 3, 96(3)
  00dd3d4  cmpwi 3, 12
  00dd3d8  bt 0, 0xdd3f4
  00dd3dc  lis 3, 101
  00dd3e0  addic 3, 3, 9020
  00dd3e4  bl 0x5cd098
  00dd3e8  nop
  00dd3ec  li 3, 12
  00dd3f0  b 0xdd3fc
  00dd3f4  cmpwi 3, 0
  00dd3f8  bt 2, 0xdd414
  00dd3fc  slwi 5, 3, 6
  00dd400  lwz 4, 36(30)
  00dd404  ori 3, 31, 0
  00dd408  extsw 5, 5
  00dd40c  bl 0x50027c
  00dd410  nop
  00dd414  lwz 3, 128(27)
  00dd418  cmpwi 3, 0
  00dd41c  bt 2, 0xdd4e0
  00dd420  addc 3, 27, 3
  00dd424  lis 4, 162
  00dd428  clrldi 3, 3, 32
  00dd42c  addic 31, 3, 16
  00dd430  lwz 3, 0(3)
  00dd434  cmpwi 3, 0
  00dd438  stw 3, -14140(4)
  00dd43c  bt 2, 0xdd4e8
  00dd440  lis 4, 162
  00dd444  slwi 5, 3, 4
  00dd448  addic 3, 4, -14080
  00dd44c  extsw 5, 5
  00dd450  ori 4, 31, 0
  00dd454  bl 0x50027c
  00dd458  nop
  00dd45c  lis 29, 162
  00dd460  lis 3, 162
  00dd464  lwz 4, -14140(29)
  00dd468  slwi 5, 4, 4
  00dd46c  slwi 4, 4, 7
  00dd470  addc 6, 31, 5
  00dd474  addic 31, 3, -13568
  00dd478  extsw 5, 4
  00dd47c  ori 3, 31, 0
  00dd480  clrldi 4, 6, 32
  00dd484  bl 0x50027c
  00dd488  nop
  00dd48c  lwz 3, -14140(29)
  00dd490  cmpwi 3, 0
  00dd494  bf 1, 0xdd4e8
  00dd498  addic 6, 31, 72
  00dd49c  ori 4, 14, 0
  00dd4a0  li 5, 11
  00dd4a4  addic 31, 31, 76
  00dd4a8  lwz 7, 0(6)
  00dd4ac  cmpwi 7, 0
  00dd4b0  bf 0, 0xdd4b8
  00dd4b4  stw 5, 0(6)
  00dd4b8  lwz 7, 0(31)
  00dd4bc  cmpwi 7, 0
  00dd4c0  bf 0, 0xdd4c8
  00dd4c4  stw 5, 0(31)
  00dd4c8  addic 4, 4, 1
  00dd4cc  addic 6, 6, 128
  00dd4d0  cmpw 3, 4
  00dd4d4  addic 31, 31, 128
  00dd4d8  bt 1, 0xdd4a8
  00dd4dc  b 0xdd4e8
  00dd4e0  lis 3, 162
  00dd4e4  stw 14, -14140(3)
  00dd4e8  lwz 3, 16(27)
  00dd4ec  cmpwi 3, 0
  00dd4f0  bt 2, 0xdd59c
  00dd4f4  lis 3, 151
  00dd4f8  lis 4, 114
  00dd4fc  lis 6, 162
  00dd500  addic 29, 4, 2180
  00dd504  lwz 3, -25484(3)
  00dd508  slwi 3, 3, 2
  00dd50c  addc 3, 27, 3
  00dd510  clrldi 3, 3, 32
  00dd514  lwz 3, 16(3)
  00dd518  addc 3, 27, 3
  00dd51c  clrldi 5, 3, 32
  00dd520  ori 3, 20, 0
  00dd524  addic 4, 5, 8
  00dd528  lwz 7, 0(5)
  00dd52c  stw 7, 44(29)
  00dd530  lwz 5, 4(5)
  00dd534  stw 20, -22528(6)
  00dd538  addic 5, 5, 3
  00dd53c  rlwinm 5, 5, 0, 0, 29
  00dd540  addic 31, 5, -8
  00dd544  extsw 31, 31
  00dd548  ori 5, 31, 0
  00dd54c  bl 0x50027c
  00dd550  nop
  00dd554  lwz 3, 44(29)
  00dd558  cmpwi 3, 0
  00dd55c  bf 1, 0xdd590
  00dd560  ori 4, 3, 0
  00dd564  ori 3, 14, 0
  00dd568  lis 5, 162
  00dd56c  addic 4, 4, -1
  00dd570  cmpwi 4, 0
  00dd574  lwz 5, -22528(5)
  00dd578  addic 6, 5, -8
  00dd57c  lwzx 7, 5, 3
  00dd580  addc 6, 7, 6
  00dd584  stwx 6, 5, 3
  00dd588  addic 3, 3, 16
  00dd58c  bt 1, 0xdd568
  00dd590  addc 3, 20, 31
  00dd594  addic 20, 3, 63
  00dd598  rlwinm 20, 20, 0, 0, 25
  00dd59c  lis 4, 230
  00dd5a0  lwz 8, 9276(30)
  00dd5a4  lis 6, 230
  00dd5a8  lwz 9, 9272(30)
  00dd5ac  sldi 10, 8, 7
  00dd5b0  std 30, 352(1)
  00dd5b4  sldi 11, 8, 4
  00dd5b8  lis 3, 230
  00dd5bc  stw 8, -31748(4)
  00dd5c0  lis 5, 230
  00dd5c4  subc 4, 10, 11
  00dd5c8  stw 9, -31756(6)
  00dd5cc  ori 7, 14, 0
  00dd5d0  addc 6, 9, 4
  00dd5d4  lwz 4, 52(30)
  00dd5d8  stw 14, -31760(3)
  00dd5dc  cmpwi 4, 0
  00dd5e0  stw 6, -31752(5)
  00dd5e4  bt 2, 0xdd648
  00dd5e8  lis 8, 229
  00dd5ec  lis 9, 229
  00dd5f0  ld 10, 352(1)
  00dd5f4  lis 6, 229
  00dd5f8  ori 5, 14, 0
  00dd5fc  addic 8, 8, 29936
  00dd600  addic 9, 9, 30448
  00dd604  addic 6, 6, 30704
  00dd608  lwz 12, 48(10)
  00dd60c  ori 11, 7, 0
  00dd610  addc 12, 12, 5
  00dd614  addic 11, 11, 1
  00dd618  clrldi 12, 12, 32
  00dd61c  cmplw 11, 4
  00dd620  addic 5, 5, 64
  00dd624  lhz 31, 48(12)
  00dd628  stw 12, 0(8)
  00dd62c  sth 31, 0(9)
  00dd630  addic 8, 8, 4
  00dd634  addic 9, 9, 2
  00dd638  stbx 7, 31, 6
  00dd63c  addic 7, 7, 1
  00dd640  stw 7, -31760(3)
  00dd644  bt 0, 0xdd608
  00dd648  ld 6, 352(1)
  00dd64c  lis 3, 165
  00dd650  lis 4, 165
  00dd654  lis 5, 165
  00dd658  lwz 7, 18508(6)
  00dd65c  lwz 6, 18504(6)
  00dd660  sldi 8, 7, 7
  00dd664  sldi 9, 7, 4
  00dd668  stw 7, 20248(3)
  00dd66c  stw 6, 20240(4)
  00dd670  subc 3, 8, 9
  00dd674  addc 3, 6, 3
  00dd678  stw 3, 20244(5)
  00dd67c  lwz 31, 8(27)
  00dd680  cmpwi 31, 0
  00dd684  bt 2, 0xdd754
  00dd688  addc 3, 27, 31
  00dd68c  lis 4, 149
  00dd690  clrldi 3, 3, 32
  00dd694  lis 29, 149
  00dd698  addic 31, 3, 16
  00dd69c  lwz 5, 0(3)
  00dd6a0  stw 20, 16468(4)
  00dd6a4  ori 4, 5, 0
  00dd6a8  stw 5, 16472(29)
  00dd6ac  slwi 3, 5, 5
  00dd6b0  cmpwi 4, 0
  00dd6b4  addc 30, 20, 3
  00dd6b8  bt 2, 0xdd6d4
  00dd6bc  extsw 5, 3
  00dd6c0  li 4, 0
  00dd6c4  ori 3, 20, 0
  00dd6c8  bl 0x5001fc
  00dd6cc  nop
  00dd6d0  lwz 4, 16472(29)
  00dd6d4  addic 20, 30, 63
  00dd6d8  cmpwi 4, 0
  00dd6dc  rlwinm 20, 20, 0, 0, 25
  00dd6e0  bf 1, 0xdd754
  00dd6e4  ori 4, 14, 0
  00dd6e8  ori 3, 4, 0
  00dd6ec  lis 5, 149
  00dd6f0  addic 3, 3, 1
  00dd6f4  lwz 5, 16468(5)
  00dd6f8  lwz 6, 0(31)
  00dd6fc  addc 5, 5, 4
  00dd700  clrldi 5, 5, 32
  00dd704  addic 4, 4, 32
  00dd708  stw 6, 12(5)
  00dd70c  lfs 1, 4(31)
  00dd710  stfs 1, 0(5)
  00dd714  lfs 1, 8(31)
  00dd718  stfs 1, 4(5)
  00dd71c  lfs 1, 12(31)
  00dd720  stfs 1, 8(5)
  00dd724  lfs 1, 16(31)
  00dd728  stfs 1, 16(5)
  00dd72c  lfs 1, 20(31)
  00dd730  stfs 1, 20(5)
  00dd734  lfs 1, 24(31)
  00dd738  stfs 1, 24(5)
  00dd73c  lwz 6, 28(31)
  00dd740  addic 31, 31, 32
  00dd744  stw 6, 28(5)
  00dd748  lwz 5, 16472(29)
  00dd74c  cmpw 3, 5
  00dd750  bt 0, 0xdd6ec
  00dd754  lwz 31, 12(27)
  00dd758  cmpwi 31, 0
  00dd75c  bt 2, 0xdd818
  00dd760  addc 3, 27, 31
  00dd764  lis 28, 150
  00dd768  clrldi 3, 3, 32
  00dd76c  addic 28, 28, 14176
  00dd770  addic 31, 3, 16
  00dd774  lwz 3, 0(3)
  00dd778  cmpwi 3, 0
  00dd77c  stw 3, 3472(28)
  00dd780  bt 2, 0xdd814
  00dd784  sldi 4, 3, 7
  00dd788  stw 20, 3476(28)
  00dd78c  sldi 3, 3, 4
  00dd790  ori 6, 20, 0
  00dd794  addc 5, 4, 3
  00dd798  ori 3, 6, 0
  00dd79c  addc 4, 20, 5
  00dd7a0  extsw 5, 5
  00dd7a4  addic 20, 4, 63
  00dd7a8  li 4, 0
  00dd7ac  rlwinm 20, 20, 0, 0, 25
  00dd7b0  bl 0x5001fc
  00dd7b4  nop
  00dd7b8  lwz 3, 3472(28)
  00dd7bc  cmpwi 3, 0
  00dd7c0  bf 1, 0xdd818
  00dd7c4  ori 29, 14, 0
  00dd7c8  ori 30, 29, 0
  00dd7cc  lwz 3, 3476(28)
  00dd7d0  ori 4, 31, 0
  00dd7d4  li 5, 144
  00dd7d8  addc 3, 3, 29
  00dd7dc  clrldi 25, 3, 32
  00dd7e0  ori 3, 25, 0
  00dd7e4  bl 0x50027c
  00dd7e8  nop
  00dd7ec  ori 3, 25, 0
  00dd7f0  bl 0x15d758
  00dd7f4  nop
  00dd7f8  addic 30, 30, 1
  00dd7fc  lwz 3, 3472(28)
  00dd800  addic 29, 29, 144
  00dd804  addic 31, 31, 144
  00dd808  cmpw 30, 3
  00dd80c  bt 0, 0xdd7cc
  00dd810  b 0xdd818
  00dd814  stw 14, 3476(28)
  00dd818  lwz 4, 68(27)
  00dd81c  li 3, 9
  00dd820  lwz 5, -25488(26)
  00dd824  addc 4, 27, 4
  00dd828  stw 27, 344(1)
  00dd82c  subc 3, 3, 5
  00dd830  clrldi 30, 4, 32
  00dd834  cntlzw 3, 3
  00dd838  lis 6, 164
  00dd83c  sldi 3, 3, 58
  00dd840  lis 22, 165
  00dd844  lwz 4, 4(30)
  00dd848  sradi 3, 3, 63
  00dd84c  lwz 31, 0(30)
  00dd850  addic 22, 22, -24352
  00dd854  addic 5, 4, 128
  00dd858  std 31, 320(1)
  00dd85c  subc 5, 5, 4
  00dd860  stw 20, -28512(6)
  00dd864  addic 30, 30, 16
  00dd868  and 3, 3, 5
  00dd86c  addc 29, 4, 3
  00dd870  ori 3, 20, 0
  00dd874  addc 5, 31, 29
  00dd878  li 4, 0
  00dd87c  slwi 5, 5, 8
  00dd880  extsw 5, 5
  00dd884  bl 0x5001fc
  00dd888  nop
  00dd88c  cmpwi 31, 0
  00dd890  std 29, 360(1)
  00dd894  ori 19, 14, 0
  00dd898  bf 1, 0xddc70
  00dd89c  lis 3, 14
  00dd8a0  lis 4, 165
  00dd8a4  addi 3, 3, -12468
  00dd8a8  lis 5, 162
  00dd8ac  addic 4, 4, 17860
  00dd8b0  addic 5, 5, 704
  00dd8b4  ori 18, 14, 0
  00dd8b8  lis 15, 165
  00dd8bc  std 4, 336(1)
  00dd8c0  ori 17, 18, 0
  00dd8c4  lis 16, 161
  00dd8c8  lfs 30, 0(3)
  00dd8cc  std 5, 328(1)
  00dd8d0  addic 15, 15, 19920
  00dd8d4  ori 19, 17, 0
  00dd8d8  lfs 29, 4(3)
  00dd8dc  addic 16, 16, -13028
  00dd8e0  ori 21, 22, 0
  00dd8e4  lwz 3, 0(30)
  00dd8e8  li 24, 254
  00dd8ec  lwz 23, 4(30)
  00dd8f0  rlwinm 3, 3, 0, 0, 29
  00dd8f4  lwz 31, 8(30)
  00dd8f8  extsw 23, 23
  00dd8fc  lwz 27, 16(30)
  00dd900  addc 14, 30, 3
  00dd904  lwz 28, 12(30)
  00dd908  cmpwi 31, 0
  00dd90c  clrldi 14, 14, 32
  00dd910  lwz 26, 20(30)
  00dd914  extsw 29, 28
  00dd918  ori 25, 27, 0
  00dd91c  bt 2, 0xddaac
  00dd920  rlwinm 4, 31, 0, 27, 27
  00dd924  li 3, 255
  00dd928  cmpwi 4, 0
  00dd92c  bt 2, 0xdd948
  00dd930  lis 3, 151
  00dd934  ori 4, 29, 0
  00dd938  lwz 3, -25488(3)
  00dd93c  extsw 3, 3
  00dd940  bl 0x151d98
  00dd944  nop
  00dd948  ori 24, 3, 0
  00dd94c  ld 3, 336(1)
  00dd950  lbzx 3, 3, 29
  00dd954  cmpwi 3, 0
  00dd958  bf 2, 0xddaa0
  00dd95c  clrlwi 3, 31, 30
  00dd960  cmpwi 3, 0
  00dd964  bt 2, 0xdda20
  00dd968  ld 3, 328(1)
  00dd96c  lbzx 3, 3, 23
  00dd970  cmpwi 3, 255
  00dd974  bf 2, 0xdd9c8
  00dd978  rlwinm 3, 31, 0, 30, 30
  00dd97c  cmpwi 3, 0
  00dd980  bt 2, 0xddaa0
  00dd984  srawi 3, 29, 5
  00dd988  clrlwi 4, 28, 27
  00dd98c  slwi 3, 3, 2
  00dd990  li 5, 1
  00dd994  extsw 6, 3
  00dd998  slw 4, 5, 4
  00dd99c  ori 25, 26, 0
  00dd9a0  ori 3, 25, 0
  00dd9a4  lwzx 5, 15, 6
  00dd9a8  and 4, 5, 4
  00dd9ac  cmpwi 4, 0
  00dd9b0  bt 2, 0xdd9c0
  00dd9b4  addic 3, 26, 1
  00dd9b8  srawi 3, 3, 1
  00dd9bc  addze 3, 3
  00dd9c0  ori 27, 3, 0
  00dd9c4  b 0xddaac
  00dd9c8  clrlwi 3, 31, 31
  00dd9cc  cmpwi 3, 0
  00dd9d0  bt 2, 0xddaa0
  00dd9d4  lis 3, 151
  00dd9d8  srawi 4, 29, 5
  00dd9dc  li 5, 1
  00dd9e0  slwi 4, 4, 2
  00dd9e4  clrlwi 6, 28, 27
  00dd9e8  lwz 3, -25488(3)
  00dd9ec  addc 4, 4, 16
  00dd9f0  slwi 3, 3, 8
  00dd9f4  clrldi 4, 4, 32
  00dd9f8  extsw 3, 3
  00dd9fc  slw 5, 5, 6
  00dda00  lwzx 3, 4, 3
  00dda04  and 3, 3, 5
  00dda08  cmpwi 3, 0
  00dda0c  bt 2, 0xddaac
  00dda10  addic 3, 27, 1
  00dda14  srawi 27, 3, 1
  00dda18  addze 27, 27
  00dda1c  b 0xddaac
  00dda20  rlwinm 3, 31, 0, 28, 28
  00dda24  cmpwi 3, 0
  00dda28  bt 2, 0xdda58
  00dda2c  srawi 3, 29, 5
  00dda30  clrlwi 4, 28, 27
  00dda34  slwi 3, 3, 2
  00dda38  li 5, 1
  00dda3c  extsw 3, 3
  00dda40  slw 4, 5, 4
  00dda44  lwzx 3, 15, 3
  00dda48  and 3, 3, 4
  00dda4c  cmpwi 3, 0
  00dda50  bf 2, 0xddaa0
  00dda54  b 0xddaac
  00dda58  rlwinm 3, 31, 0, 28, 29
  00dda5c  cmpwi 3, 4
  00dda60  bf 2, 0xddaac
  00dda64  lis 3, 151
  00dda68  srawi 4, 29, 5
  00dda6c  li 5, 1
  00dda70  slwi 4, 4, 2
  00dda74  clrlwi 6, 28, 27
  00dda78  lwz 3, -25488(3)
  00dda7c  addc 4, 4, 16
  00dda80  slwi 3, 3, 8
  00dda84  clrldi 4, 4, 32
  00dda88  extsw 3, 3
  00dda8c  slw 5, 5, 6
  00dda90  lwzx 3, 4, 3
  00dda94  and 3, 3, 5
  00dda98  cmpwi 3, 0
  00dda9c  bt 2, 0xddaac
  00ddaa0  li 3, -1
  00ddaa4  sth 3, 0(21)
  00ddaa8  b 0xddc58
  00ddaac  lis 3, 164
  00ddab0  sth 19, 0(21)
  00ddab4  lwz 3, -28512(3)
  00ddab8  lwz 4, 24(30)
  00ddabc  addc 31, 3, 18
  00ddac0  extsw 4, 4
  00ddac4  clrldi 31, 31, 32
  00ddac8  ori 3, 31, 0
  00ddacc  bl 0xef810
  00ddad0  nop
  00ddad4  stb 24, 177(31)
  00ddad8  lwz 3, 36(31)
  00ddadc  sth 29, 178(31)
  00ddae0  stb 23, 176(31)
  00ddae4  cmpwi 3, 0
  00ddae8  sth 27, 180(31)
  00ddaec  sth 25, 182(31)
  00ddaf0  bt 2, 0xddb04
  00ddaf4  lfs 1, 36(3)
  00ddaf8  lfs 2, 28(30)
  00ddafc  fmuls 1, 1, 2
  00ddb00  stfs 1, 44(31)
  00ddb04  lwz 3, 32(30)
  00ddb08  sth 3, 50(31)
  00ddb0c  lwz 3, 36(30)
  00ddb10  stb 3, 48(31)
  00ddb14  lfs 1, 48(30)
  00ddb18  stfs 1, 16(31)
  00ddb1c  lfs 1, 52(30)
  00ddb20  stfs 1, 20(31)
  00ddb24  lfs 1, 56(30)
  00ddb28  stfs 1, 24(31)
  00ddb2c  lfs 1, 60(30)
  00ddb30  stfs 1, 64(31)
  00ddb34  lfs 1, 64(30)
  00ddb38  stfs 1, 68(31)
  00ddb3c  lfs 1, 68(30)
  00ddb40  stfs 1, 72(31)
  00ddb44  lwz 3, 72(30)
  00ddb48  stb 3, 33(31)
  00ddb4c  lwz 3, 76(30)
  00ddb50  lfs 31, 80(30)
  00ddb54  cmpwi 3, 0
  00ddb58  bt 2, 0xddb84
  00ddb5c  fmr 1, 30
  00ddb60  addic 3, 31, 16
  00ddb64  li 4, 0
  00ddb68  bl 0xffb70
  00ddb6c  nop
  00ddb70  fcmpu 0, 1, 29
  00ddb74  cror 6, 0, 2
  00ddb78  bt 6, 0xddb84
  00ddb7c  fadds 1, 1, 31
  00ddb80  stfs 1, 24(31)
  00ddb84  li 3, 32640
  00ddb88  lwz 4, 88(30)
  00ddb8c  sth 3, 54(31)
  00ddb90  stw 4, 120(31)
  00ddb94  lwz 3, 92(30)
  00ddb98  cmpwi 3, 0
  00ddb9c  bf 2, 0xddba8
  00ddba0  li 3, 0
  00ddba4  sth 3, 54(31)
  00ddba8  lwz 3, 36(31)
  00ddbac  cmpwi 1, 3, 0
  00ddbb0  bt 6, 0xddbc4
  00ddbb4  lhz 4, 68(3)
  00ddbb8  lwz 5, 96(30)
  00ddbbc  or 4, 4, 5
  00ddbc0  sth 4, 68(3)
  00ddbc4  lhz 3, 52(31)
  00ddbc8  lwz 4, 96(30)
  00ddbcc  or 3, 3, 4
  00ddbd0  sth 3, 52(31)
  00ddbd4  bt 6, 0xddbe4
  00ddbd8  ori 3, 31, 0
  00ddbdc  bl 0xf31a8
  00ddbe0  nop
  00ddbe4  lwz 4, 104(30)
  00ddbe8  ori 3, 31, 0
  00ddbec  lwz 6, 108(30)
  00ddbf0  li 5, 0
  00ddbf4  slwi 4, 4, 8
  00ddbf8  lwz 7, 100(30)
  00ddbfc  slwi 6, 6, 16
  00ddc00  lwz 8, 112(30)
  00ddc04  addc 4, 6, 4
  00ddc08  extsw 29, 8
  00ddc0c  addc 4, 4, 7
  00ddc10  li 6, 0
  00ddc14  extsw 4, 4
  00ddc18  li 7, 0
  00ddc1c  stw 4, 128(31)
  00ddc20  bl 0xf1ea0
  00ddc24  nop
  00ddc28  ld 3, 56(31)
  00ddc2c  or 3, 3, 29
  00ddc30  std 3, 56(31)
  00ddc34  lwz 3, 116(30)
  00ddc38  cmpwi 3, -1
  00ddc3c  bt 2, 0xddc50
  00ddc40  ori 4, 3, 0
  00ddc44  ori 3, 31, 0
  00ddc48  bl 0xe5068
  00ddc4c  nop
  00ddc50  addic 18, 18, 256
  00ddc54  addic 19, 19, 1
  00ddc58  addic 17, 17, 1
  00ddc5c  ld 3, 320(1)
  00ddc60  ori 30, 14, 0
  00ddc64  addic 21, 21, 2
  00ddc68  cmpw 17, 3
  00ddc6c  bt 0, 0xdd8e4
  00ddc70  lis 18, 164
  00ddc74  sldi 3, 19, 8
  00ddc78  lis 25, 164
  00ddc7c  li 4, 255
  00ddc80  lis 24, 164
  00ddc84  lwz 5, -28512(18)
  00ddc88  li 14, 0
  00ddc8c  ld 6, 360(1)
  00ddc90  lis 17, 230
  00ddc94  addc 3, 5, 3
  00ddc98  addc 5, 6, 19
  00ddc9c  clrldi 7, 3, 32
  00ddca0  slwi 8, 5, 8
  00ddca4  stw 3, -28508(25)
  00ddca8  slwi 6, 6, 7
  00ddcac  addc 3, 20, 8
  00ddcb0  lis 16, 230
  00ddcb4  stb 4, 32(7)
  00ddcb8  sldi 4, 5, 8
  00ddcbc  lwz 5, -28512(18)
  00ddcc0  lis 7, 164
  00ddcc4  lwz 27, 344(1)
  00ddcc8  addc 4, 5, 4
  00ddccc  addic 4, 4, -256
  00ddcd0  stw 3, -28496(7)
  00ddcd4  addc 3, 3, 6
  00ddcd8  stw 4, -28504(24)
  00ddcdc  addic 20, 3, 63
  00ddce0  lwz 3, 88(27)
  00ddce4  rlwinm 20, 20, 0, 0, 25
  00ddce8  cmpwi 3, 0
  00ddcec  ori 19, 20, 0
  00ddcf0  bt 2, 0xddec0
  00ddcf4  lis 4, 149
  00ddcf8  addc 26, 27, 3
  00ddcfc  lwz 3, 84(27)
  00ddd00  addc 28, 27, 3
  00ddd04  lwz 4, 16472(4)
  00ddd08  clrldi 28, 28, 32
  00ddd0c  cmpwi 4, 0
  00ddd10  bf 1, 0xddda0
  00ddd14  ori 31, 14, 0
  00ddd18  addic 29, 28, 4
  00ddd1c  ori 30, 31, 0
  00ddd20  lis 3, 149
  00ddd24  lwz 3, 16468(3)
  00ddd28  addc 7, 3, 31
  00ddd2c  clrldi 7, 7, 32
  00ddd30  lwz 3, 28(7)
  00ddd34  cmpwi 3, 0
  00ddd38  bf 0, 0xddd44
  00ddd3c  stw 14, 28(7)
  00ddd40  b 0xddd88
  00ddd44  slwi 3, 3, 3
  00ddd48  addc 4, 3, 29
  00ddd4c  extsw 23, 3
  00ddd50  clrldi 4, 4, 32
  00ddd54  ori 3, 20, 0
  00ddd58  lwzx 5, 28, 23
  00ddd5c  lwz 6, 0(4)
  00ddd60  addc 5, 5, 26
  00ddd64  extsw 21, 6
  00ddd68  stw 20, 28(7)
  00ddd6c  clrldi 4, 5, 32
  00ddd70  ori 5, 21, 0
  00ddd74  bl 0x5002cc
  00ddd78  nop
  00ddd7c  stwx 20, 28, 23
  00ddd80  addc 20, 20, 21
  00ddd84  clrldi 20, 20, 32
  00ddd88  lis 3, 149
  00ddd8c  addic 30, 30, 1
  00ddd90  addic 31, 31, 32
  00ddd94  lwz 3, 16472(3)
  00ddd98  cmpw 30, 3
  00ddd9c  bt 0, 0xddd20
  00ddda0  lis 29, 150
  00ddda4  addic 29, 29, 14176
  00ddda8  lwz 8, 3472(29)
  00dddac  cmpwi 8, 0
  00dddb0  bf 1, 0xdde38
  00dddb4  ori 31, 14, 0
  00dddb8  addic 27, 28, 4
  00dddbc  ori 30, 31, 0
  00dddc0  lwz 3, 3476(29)
  00dddc4  addc 7, 3, 31
  00dddc8  clrldi 7, 7, 32
  00dddcc  lwz 3, 8(7)
  00dddd0  cmpwi 3, 0
  00dddd4  bf 0, 0xddde0
  00dddd8  stw 14, 8(7)
  00ddddc  b 0xdde28
  00ddde0  slwi 3, 3, 3
  00ddde4  extsw 23, 3
  00ddde8  addc 3, 3, 27
  00dddec  clrldi 4, 3, 32
  00dddf0  lwzx 3, 28, 23
  00dddf4  addc 5, 3, 26
  00dddf8  lwz 6, 0(4)
  00dddfc  ori 3, 20, 0
  00dde00  stw 20, 8(7)
  00dde04  extsw 21, 6
  00dde08  clrldi 4, 5, 32
  00dde0c  ori 5, 21, 0
  00dde10  bl 0x5002cc
  00dde14  nop
  00dde18  addc 3, 20, 21
  00dde1c  stwx 20, 28, 23
  00dde20  clrldi 20, 3, 32
  00dde24  lwz 8, 3472(29)
  00dde28  addic 30, 30, 1
  00dde2c  addic 31, 31, 144
  00dde30  cmpw 30, 8
  00dde34  bt 0, 0xdddc0
  00dde38  lwz 31, -28512(18)
  00dde3c  lwz 3, -28508(25)
  00dde40  lwz 27, 344(1)
  00dde44  cmpw 31, 3
  00dde48  bt 2, 0xddeb8
  00dde4c  addic 30, 28, 4
  00dde50  lwz 3, 120(31)
  00dde54  cmpwi 3, 0
  00dde58  bf 0, 0xdde64
  00dde5c  stw 14, 120(31)
  00dde60  b 0xddea8
  00dde64  slwi 3, 3, 3
  00dde68  addc 4, 3, 30
  00dde6c  extsw 29, 3
  00dde70  clrldi 4, 4, 32
  00dde74  ori 3, 20, 0
  00dde78  lwzx 5, 28, 29
  00dde7c  lwz 6, 0(4)
  00dde80  addc 5, 5, 26
  00dde84  extsw 23, 6
  00dde88  stw 20, 120(31)
  00dde8c  clrldi 4, 5, 32
  00dde90  ori 5, 23, 0
  00dde94  bl 0x5002cc
  00dde98  nop
  00dde9c  stwx 20, 28, 29
  00ddea0  addc 20, 20, 23
  00ddea4  clrldi 20, 20, 32
  00ddea8  addic 31, 31, 256
  00ddeac  lwz 3, -28508(25)
  00ddeb0  cmpw 31, 3
  00ddeb4  bf 2, 0xdde50
  00ddeb8  addic 20, 20, 63
  00ddebc  rlwinm 20, 20, 0, 0, 25
  00ddec0  lwz 3, 80(27)
  00ddec4  cmpwi 3, 0
  00ddec8  bt 2, 0xddf40
  00ddecc  addc 3, 27, 3
  00dded0  lwz 4, 84(27)
  00dded4  clrldi 3, 3, 32
  00dded8  addc 5, 27, 4
  00ddedc  clrldi 5, 5, 32
  00ddee0  lwz 4, 0(3)
  00ddee4  cmpwi 4, 0
  00ddee8  bt 0, 0xddf40
  00ddeec  lwz 4, 0(3)
  00ddef0  slwi 6, 4, 3
  00ddef4  lwz 4, 4(3)
  00ddef8  extsw 6, 6
  00ddefc  lwzx 6, 5, 6
  00ddf00  cmpw 6, 19
  00ddf04  bt 0, 0xddf30
  00ddf08  addc 4, 6, 4
  00ddf0c  clrldi 4, 4, 32
  00ddf10  lwz 6, 0(4)
  00ddf14  cmpwi 6, 0
  00ddf18  bt 0, 0xddf30
  00ddf1c  slwi 6, 6, 1
  00ddf20  extsw 6, 6
  00ddf24  lhzx 6, 22, 6
  00ddf28  extsh 6, 6
  00ddf2c  stw 6, 0(4)
  00ddf30  addic 3, 3, 8
  00ddf34  lwz 4, 0(3)
  00ddf38  cmpwi 4, 0
  00ddf3c  bf 0, 0xddeec
  00ddf40  lwz 3, 92(27)
  00ddf44  cmpwi 3, 0
  00ddf48  bt 2, 0xddfac
  00ddf4c  addc 3, 27, 3
  00ddf50  lwz 4, 84(27)
  00ddf54  clrldi 3, 3, 32
  00ddf58  addc 5, 27, 4
  00ddf5c  clrldi 5, 5, 32
  00ddf60  lwz 4, 0(3)
  00ddf64  cmpwi 4, 0
  00ddf68  bt 0, 0xddfac
  00ddf6c  lwz 4, 0(3)
  00ddf70  slwi 6, 4, 3
  00ddf74  lwz 4, 4(3)
  00ddf78  extsw 6, 6
  00ddf7c  lwzx 6, 5, 6
  00ddf80  cmpw 6, 19
  00ddf84  bt 0, 0xddf9c
  00ddf88  addc 4, 6, 4
  00ddf8c  clrldi 4, 4, 32
  00ddf90  lwz 7, 0(4)
  00ddf94  addc 6, 7, 6
  00ddf98  stw 6, 0(4)
  00ddf9c  addic 3, 3, 8
  00ddfa0  lwz 4, 0(3)
  00ddfa4  cmpwi 4, 0
  00ddfa8  bf 0, 0xddf6c
  00ddfac  lwz 28, 72(27)
  00ddfb0  cmpwi 28, 0
  00ddfb4  bt 2, 0xde0d8
  00ddfb8  addc 3, 27, 28
  00ddfbc  ori 29, 20, 0
  00ddfc0  clrldi 4, 3, 32
  00ddfc4  addic 31, 4, 16
  00ddfc8  lwz 28, 0(4)
  00ddfcc  lwz 3, 4(4)
  00ddfd0  slwi 5, 28, 2
  00ddfd4  extsw 3, 3
  00ddfd8  addc 4, 4, 5
  00ddfdc  addc 5, 29, 3
  00ddfe0  addic 4, 4, 16
  00ddfe4  addic 20, 5, 63
  00ddfe8  cmpwi 3, 0
  00ddfec  clrldi 4, 4, 32
  00ddff0  rlwinm 20, 20, 0, 0, 25
  00ddff4  bt 2, 0xde008
  00ddff8  ori 5, 3, 0
  00ddffc  ori 3, 29, 0
  00de000  bl 0x5002f4
  00de004  nop
  00de008  lis 30, 165
  00de00c  li 4, 0
  00de010  addic 30, 30, -28284
  00de014  li 5, 448
  00de018  ori 3, 30, 0
  00de01c  bl 0x5001fc
  00de020  nop
  00de024  cmpwi 28, 0
  00de028  bf 1, 0xde0d8
  00de02c  ori 11, 30, 0
  00de030  lis 30, 0
  00de034  ori 12, 14, 0
  00de038  lis 27, 165
  00de03c  ori 30, 30, 32768
  00de040  lwz 10, 0(31)
  00de044  cmpwi 10, 0
  00de048  bt 0, 0xde0c4
  00de04c  addc 3, 10, 29
  00de050  addic 4, 12, 1
  00de054  clrldi 8, 3, 32
  00de058  stw 3, 0(11)
  00de05c  ori 10, 8, 0
  00de060  stw 4, -28288(27)
  00de064  lhz 3, 0(10)
  00de068  ori 9, 8, 0
  00de06c  rlwinm 4, 3, 1, 16, 30
  00de070  rlwinm 3, 3, 0, 16, 16
  00de074  cmpwi 1, 3, 0
  00de078  lhzx 3, 22, 4
  00de07c  extsh 4, 3
  00de080  cmpwi 4, 0
  00de084  bt 0, 0xde094
  00de088  addic 9, 8, 2
  00de08c  sth 3, 0(8)
  00de090  ori 8, 9, 0
  00de094  bt 6, 0xde0bc
  00de098  lwz 3, 0(11)
  00de09c  cmpw 9, 3
  00de0a0  bf 1, 0xde0b4
  00de0a4  lhz 3, -2(9)
  00de0a8  or 3, 3, 30
  00de0ac  sth 3, -2(9)
  00de0b0  b 0xde0c4
  00de0b4  stw 14, 0(11)
  00de0b8  b 0xde0c4
  00de0bc  addic 10, 10, 2
  00de0c0  b 0xde064
  00de0c4  addic 12, 12, 1
  00de0c8  addic 31, 31, 4
  00de0cc  cmpw 12, 28
  00de0d0  addic 11, 11, 4
  00de0d4  bt 0, 0xde040
  00de0d8  lwz 27, 344(1)
  00de0dc  lwz 31, 76(27)
  00de0e0  cmpwi 31, 0
  00de0e4  bt 2, 0xde194
  00de0e8  addc 3, 27, 31
  00de0ec  ori 29, 20, 0
  00de0f0  clrldi 30, 3, 32
  00de0f4  addic 28, 30, 16
  00de0f8  lwz 31, 0(30)
  00de0fc  lwz 30, 4(30)
  00de100  extsw 31, 31
  00de104  addc 3, 29, 31
  00de108  cmpwi 31, 0
  00de10c  addic 20, 3, 63
  00de110  rlwinm 20, 20, 0, 0, 25
  00de114  bt 2, 0xde12c
  00de118  ori 3, 29, 0
  00de11c  ori 4, 28, 0
  00de120  ori 5, 31, 0
  00de124  bl 0x500334
  00de128  nop
  00de12c  lwz 3, 84(27)
  00de130  addc 31, 28, 31
  00de134  cmpwi 30, 0
  00de138  addc 3, 27, 3
  00de13c  clrldi 31, 31, 32
  00de140  clrldi 3, 3, 32
  00de144  bf 1, 0xde194
  00de148  ori 4, 14, 0
  00de14c  lhz 5, 0(31)
  00de150  extsh 6, 5
  00de154  lhz 5, 2(31)
  00de158  sldi 6, 6, 3
  00de15c  extsh 5, 5
  00de160  lwzx 7, 3, 6
  00de164  cmpw 7, 19
  00de168  bt 0, 0xde184
  00de16c  lwzx 6, 3, 6
  00de170  lwz 7, 4(31)
  00de174  addc 5, 6, 5
  00de178  addc 6, 7, 29
  00de17c  clrldi 5, 5, 32
  00de180  stw 6, 0(5)
  00de184  addic 4, 4, 1
  00de188  addic 31, 31, 8
  00de18c  cmpw 4, 30
  00de190  bt 0, 0xde14c
  00de194  lwz 31, 112(27)
  00de198  cmpwi 31, 0
  00de19c  bt 2, 0xde248
  00de1a0  addc 3, 27, 31
  00de1a4  lis 4, 165
  00de1a8  clrldi 3, 3, 32
  00de1ac  lis 8, 165
  00de1b0  ori 6, 20, 0
  00de1b4  addic 31, 3, 16
  00de1b8  ori 5, 6, 0
  00de1bc  lwz 7, 0(3)
  00de1c0  stw 7, 7840(4)
  00de1c4  lwz 4, 8(3)
  00de1c8  lwz 9, 4(3)
  00de1cc  extsw 4, 4
  00de1d0  stw 20, 7844(8)
  00de1d4  addc 3, 3, 9
  00de1d8  addc 8, 5, 4
  00de1dc  cmpwi 4, 0
  00de1e0  addic 20, 8, 63
  00de1e4  clrldi 3, 3, 32
  00de1e8  rlwinm 20, 20, 0, 0, 25
  00de1ec  bt 2, 0xde218
  00de1f0  ori 6, 4, 0
  00de1f4  ori 4, 3, 0
  00de1f8  ori 3, 5, 0
  00de1fc  ori 5, 6, 0
  00de200  bl 0x5002cc
  00de204  nop
  00de208  lis 6, 165
  00de20c  lis 7, 165
  00de210  lwz 6, 7844(6)
  00de214  lwz 7, 7840(7)
  00de218  cmpwi 7, 0
  00de21c  bf 1, 0xde248
  00de220  lis 3, 165
  00de224  addic 3, 3, 7136
  00de228  lwz 4, 0(31)
  00de22c  addic 7, 7, -1
  00de230  addc 4, 4, 6
  00de234  cmpwi 7, 0
  00de238  addic 31, 31, 4
  00de23c  stw 4, 0(3)
  00de240  addic 3, 3, 4
  00de244  bt 1, 0xde228
  00de248  lwz 29, 116(27)
  00de24c  cmpwi 29, 0
  00de250  bt 2, 0xde36c
  00de254  lwz 3, 344(1)
  00de258  lis 27, 162
  00de25c  lis 4, 162
  00de260  addc 3, 3, 29
  00de264  clrldi 3, 3, 32
  00de268  addic 29, 3, 16
  00de26c  lwz 5, 0(3)
  00de270  stw 5, -22432(27)
  00de274  lwz 6, 4(3)
  00de278  slwi 7, 5, 5
  00de27c  lwz 26, 8(3)
  00de280  addc 7, 20, 7
  00de284  addc 25, 3, 6
  00de288  stw 20, -22436(4)
  00de28c  ori 3, 5, 0
  00de290  addic 28, 7, 63
  00de294  cmpwi 3, 0
  00de298  clrldi 25, 25, 32
  00de29c  extsw 26, 26
  00de2a0  rlwinm 28, 28, 0, 0, 25
  00de2a4  bf 1, 0xde2fc
  00de2a8  ori 31, 14, 0
  00de2ac  ori 30, 31, 0
  00de2b0  lis 23, 162
  00de2b4  ori 4, 29, 0
  00de2b8  li 5, 16
  00de2bc  lwz 3, -22436(23)
  00de2c0  addc 3, 3, 31
  00de2c4  clrldi 3, 3, 32
  00de2c8  bl 0x5c5ad0
  00de2cc  nop
  00de2d0  lwz 3, -22436(23)
  00de2d4  lwz 4, 16(29)
  00de2d8  addic 30, 30, 1
  00de2dc  addc 3, 3, 31
  00de2e0  addic 29, 29, 32
  00de2e4  clrldi 3, 3, 32
  00de2e8  addic 31, 31, 32
  00de2ec  stw 4, 20(3)
  00de2f0  lwz 3, -22432(27)
  00de2f4  cmpw 30, 3
  00de2f8  bt 0, 0xde2b0
  00de2fc  addc 4, 28, 26
  00de300  cmpwi 26, 0
  00de304  addic 20, 4, 63
  00de308  rlwinm 20, 20, 0, 0, 25
  00de30c  bt 2, 0xde328
  00de310  ori 3, 28, 0
  00de314  ori 4, 25, 0
  00de318  ori 5, 26, 0
  00de31c  bl 0x5002cc
  00de320  nop
  00de324  lwz 3, -22432(27)
  00de328  cmpwi 3, 0
  00de32c  bf 1, 0xde36c
  00de330  ori 4, 14, 0
  00de334  ori 3, 4, 0
  00de338  lis 5, 162
  00de33c  addic 3, 3, 1
  00de340  lwz 5, -22436(5)
  00de344  lwz 6, 0(29)
  00de348  addc 5, 5, 4
  00de34c  addc 6, 6, 28
  00de350  clrldi 5, 5, 32
  00de354  addic 4, 4, 32
  00de358  addic 29, 29, 4
  00de35c  stw 6, 16(5)
  00de360  lwz 5, -22432(27)
  00de364  cmpw 3, 5
  00de368  bt 0, 0xde338
  00de36c  lwz 27, 344(1)
  00de370  lwz 31, 108(27)
  00de374  cmpwi 31, 0
  00de378  bt 2, 0xde424
  00de37c  addc 3, 27, 31
  00de380  lis 29, 165
  00de384  clrldi 3, 3, 32
  00de388  lis 5, 165
  00de38c  addic 31, 3, 16
  00de390  ori 4, 20, 0
  00de394  lwz 3, 0(3)
  00de398  stw 3, 7108(29)
  00de39c  sldi 6, 3, 7
  00de3a0  stw 20, 7104(5)
  00de3a4  sldi 7, 3, 4
  00de3a8  ori 5, 3, 0
  00de3ac  addc 3, 6, 7
  00de3b0  cmpwi 5, 0
  00de3b4  addc 6, 4, 3
  00de3b8  addic 20, 6, 63
  00de3bc  rlwinm 20, 20, 0, 0, 25
  00de3c0  bt 2, 0xde3dc
  00de3c4  extsw 5, 3
  00de3c8  ori 3, 4, 0
  00de3cc  li 4, 0
  00de3d0  bl 0x5001fc
  00de3d4  nop
  00de3d8  lwz 5, 7108(29)
  00de3dc  cmpwi 5, 0
  00de3e0  bf 1, 0xde424
  00de3e4  ori 28, 14, 0
  00de3e8  ori 30, 28, 0
  00de3ec  lis 3, 165
  00de3f0  ori 4, 31, 0
  00de3f4  li 5, 144
  00de3f8  lwz 3, 7104(3)
  00de3fc  addc 3, 3, 28
  00de400  clrldi 3, 3, 32
  00de404  bl 0x50027c
  00de408  nop
  00de40c  lwz 3, 7108(29)
  00de410  addic 30, 30, 1
  00de414  addic 28, 28, 144
  00de418  cmpw 30, 3
  00de41c  addic 31, 31, 128
  00de420  bt 0, 0xde3ec
  00de424  lwz 31, 96(27)
  00de428  cmpwi 31, 0
  00de42c  bt 2, 0xde4cc
  00de430  addc 3, 27, 31
  00de434  lis 29, 165
  00de438  clrldi 3, 3, 32
  00de43c  lis 6, 165
  00de440  addic 31, 3, 16
  00de444  ori 4, 20, 0
  00de448  lwz 5, 0(3)
  00de44c  slwi 3, 5, 7
  00de450  stw 5, 7132(29)
  00de454  stw 20, 7128(6)
  00de458  cmpwi 5, 0
  00de45c  addc 7, 4, 3
  00de460  addic 20, 7, 63
  00de464  rlwinm 20, 20, 0, 0, 25
  00de468  bt 2, 0xde484
  00de46c  extsw 5, 3
  00de470  ori 3, 4, 0
  00de474  li 4, 0
  00de478  bl 0x5001fc
  00de47c  nop
  00de480  lwz 5, 7132(29)
  00de484  cmpwi 5, 0
  00de488  bf 1, 0xde4cc
  00de48c  ori 28, 14, 0
  00de490  ori 30, 28, 0
  00de494  lis 3, 165
  00de498  ori 4, 31, 0
  00de49c  li 5, 128
  00de4a0  lwz 3, 7128(3)
  00de4a4  addc 3, 3, 28
  00de4a8  clrldi 3, 3, 32
  00de4ac  bl 0x50027c
  00de4b0  nop
  00de4b4  lwz 3, 7132(29)
  00de4b8  addic 30, 30, 1
  00de4bc  addic 28, 28, 128
  00de4c0  cmpw 30, 3
  00de4c4  addic 31, 31, 128
  00de4c8  bt 0, 0xde494
  00de4cc  lwz 31, 100(27)
  00de4d0  cmpwi 31, 0
  00de4d4  bt 2, 0xde574
  00de4d8  addc 3, 27, 31
  00de4dc  lis 29, 165
  00de4e0  clrldi 3, 3, 32
  00de4e4  lis 6, 165
  00de4e8  addic 31, 3, 16
  00de4ec  ori 4, 20, 0
  00de4f0  lwz 5, 0(3)
  00de4f4  slwi 3, 5, 7
  00de4f8  stw 5, 7116(29)
  00de4fc  stw 20, 7112(6)
  00de500  cmpwi 5, 0
  00de504  addc 7, 4, 3
  00de508  addic 20, 7, 63
  00de50c  rlwinm 20, 20, 0, 0, 25
  00de510  bt 2, 0xde52c
  00de514  extsw 5, 3
  00de518  ori 3, 4, 0
  00de51c  li 4, 0
  00de520  bl 0x5001fc
  00de524  nop
  00de528  lwz 5, 7116(29)
  00de52c  cmpwi 5, 0
  00de530  bf 1, 0xde574
  00de534  ori 28, 14, 0
  00de538  ori 30, 28, 0
  00de53c  lis 3, 165
  00de540  ori 4, 31, 0
  00de544  li 5, 128
  00de548  lwz 3, 7112(3)
  00de54c  addc 3, 3, 28
  00de550  clrldi 3, 3, 32
  00de554  bl 0x50027c
  00de558  nop
  00de55c  lwz 3, 7116(29)
  00de560  addic 30, 30, 1
  00de564  addic 28, 28, 128
  00de568  cmpw 30, 3
  00de56c  addic 31, 31, 128
  00de570  bt 0, 0xde53c
  00de574  lwz 31, 104(27)
  00de578  cmpwi 31, 0
  00de57c  bt 2, 0xde61c
  00de580  addc 3, 27, 31
  00de584  lis 29, 165
  00de588  clrldi 3, 3, 32
  00de58c  lis 6, 165
  00de590  addic 31, 3, 16
  00de594  ori 4, 20, 0
  00de598  lwz 5, 0(3)
  00de59c  slwi 3, 5, 7
  00de5a0  stw 5, 7124(29)
  00de5a4  stw 20, 7120(6)
  00de5a8  cmpwi 5, 0
  00de5ac  addc 7, 4, 3
  00de5b0  addic 20, 7, 63
  00de5b4  rlwinm 20, 20, 0, 0, 25
  00de5b8  bt 2, 0xde5d4
  00de5bc  extsw 5, 3
  00de5c0  ori 3, 4, 0
  00de5c4  li 4, 0
  00de5c8  bl 0x5001fc
  00de5cc  nop
  00de5d0  lwz 5, 7124(29)
  00de5d4  cmpwi 5, 0
  00de5d8  bf 1, 0xde61c
  00de5dc  ori 28, 14, 0
  00de5e0  ori 30, 28, 0
  00de5e4  lis 3, 165
  00de5e8  ori 4, 31, 0
  00de5ec  li 5, 128
  00de5f0  lwz 3, 7120(3)
  00de5f4  addc 3, 3, 28
  00de5f8  clrldi 3, 3, 32
  00de5fc  bl 0x50027c
  00de600  nop
  00de604  lwz 3, 7124(29)
  00de608  addic 30, 30, 1
  00de60c  addic 28, 28, 128
  00de610  cmpw 30, 3
  00de614  addic 31, 31, 128
  00de618  bt 0, 0xde5e4
  00de61c  lwz 3, 132(27)
  00de620  cmpwi 3, 0
  00de624  bt 2, 0xde660
  00de628  addc 3, 27, 3
  00de62c  lis 5, 149
  00de630  clrldi 6, 3, 32
  00de634  ori 3, 20, 0
  00de638  addic 4, 6, 16
  00de63c  lwz 31, 0(6)
  00de640  stw 20, 16512(5)
  00de644  addic 5, 31, 16384
  00de648  extsw 5, 5
  00de64c  bl 0x50027c
  00de650  nop
  00de654  addc 3, 20, 31
  00de658  addic 20, 3, 16447
  00de65c  rlwinm 20, 20, 0, 0, 25
  00de660  lwz 3, 120(27)
  00de664  cmpwi 3, 0
  00de668  bt 2, 0xde6a4
  00de66c  addc 3, 27, 3
  00de670  lis 5, 162
  00de674  clrldi 6, 3, 32
  00de678  ori 3, 20, 0
  00de67c  addic 4, 6, 16
  00de680  lwz 31, 0(6)
  00de684  stw 20, -14144(5)
  00de688  addic 5, 31, 16384
  00de68c  extsw 5, 5
  00de690  bl 0x50027c
  00de694  nop
  00de698  addc 3, 20, 31
  00de69c  addic 20, 3, 16447
  00de6a0  rlwinm 20, 20, 0, 0, 25
  00de6a4  lwz 3, 124(27)
  00de6a8  cmpwi 3, 0
  00de6ac  bt 2, 0xde708
  00de6b0  addc 3, 27, 3
  00de6b4  lis 6, 162
  00de6b8  clrldi 4, 3, 32
  00de6bc  lis 7, 162
  00de6c0  addic 3, 4, 16
  00de6c4  ori 5, 20, 0
  00de6c8  lwz 8, 0(4)
  00de6cc  slwi 4, 8, 5
  00de6d0  stw 8, -14272(6)
  00de6d4  stw 20, -14208(7)
  00de6d8  cmpwi 8, 0
  00de6dc  addc 6, 5, 4
  00de6e0  addic 20, 6, 63
  00de6e4  rlwinm 20, 20, 0, 0, 25
  00de6e8  bt 2, 0xde708
  00de6ec  extsw 7, 4
  00de6f0  ori 6, 3, 0
  00de6f4  ori 3, 5, 0
  00de6f8  ori 4, 6, 0
  00de6fc  ori 5, 7, 0
  00de700  bl 0x50027c
  00de704  nop
  00de708  lwz 3, 136(27)
  00de70c  cmpwi 3, 0
  00de710  bt 2, 0xde774
  00de714  addc 3, 27, 3
  00de718  lis 4, 165
  00de71c  clrldi 3, 3, 32
  00de720  lis 6, 165
  00de724  ori 5, 20, 0
  00de728  lwz 7, 0(3)
  00de72c  addic 3, 3, 16
  00de730  sldi 8, 7, 4
  00de734  stw 7, -9484(4)
  00de738  cmpwi 7, 0
  00de73c  addc 4, 8, 8
  00de740  stw 20, -9472(6)
  00de744  addc 4, 8, 4
  00de748  addc 6, 5, 4
  00de74c  addic 20, 6, 63
  00de750  rlwinm 20, 20, 0, 0, 25
  00de754  bt 2, 0xde774
  00de758  extsw 7, 4
  00de75c  ori 6, 3, 0
  00de760  ori 3, 5, 0
  00de764  ori 4, 6, 0
  00de768  ori 5, 7, 0
  00de76c  bl 0x50027c
  00de770  nop
  00de774  lis 3, 165
  00de778  lis 7, 165
  00de77c  lis 6, 165
  00de780  lis 5, 165
  00de784  lis 4, 4
  00de788  li 9, -1
  00de78c  lis 8, 165
  00de790  stw 20, 8128(3)
  00de794  addc 19, 20, 4
  00de798  stw 14, 8132(7)
  00de79c  addic 3, 8, 8192
  00de7a0  stw 14, 8140(6)
  00de7a4  clrldi 19, 19, 32
  00de7a8  stw 9, 8136(5)
  00de7ac  li 4, 512
  00de7b0  bl 0x500250
  00de7b4  nop
  00de7b8  lis 3, 150
  00de7bc  ld 30, 368(1)
  00de7c0  stw 14, 17776(3)
  00de7c4  lwz 3, 44(30)
  00de7c8  cmpwi 3, 0
  00de7cc  bf 1, 0xde924
  00de7d0  lis 3, 151
  00de7d4  lwz 3, -25488(3)
  00de7d8  cmpwi 3, 13
  00de7dc  bf 2, 0xde878
  00de7e0  ld 3, 376(1)
  00de7e4  lhz 3, 38(3)
  00de7e8  cmpwi 3, 2
  00de7ec  bf 2, 0xde878
  00de7f0  lis 4, 165
  00de7f4  lwz 4, 25024(4)
  00de7f8  cmpwi 4, 0
  00de7fc  bt 2, 0xde878
  00de800  lwz 31, -28512(18)
  00de804  lbz 4, 32(31)
  00de808  cmpwi 4, 255
  00de80c  bt 2, 0xde878
  00de810  lis 4, 115
  00de814  extsh 5, 3
  00de818  addic 3, 4, 7232
  00de81c  sldi 4, 5, 2
  00de820  lhz 5, 166(31)
  00de824  lwzx 6, 3, 4
  00de828  extsh 5, 5
  00de82c  cmpw 5, 6
  00de830  bf 2, 0xde868
  00de834  ori 3, 31, 0
  00de838  bl 0x15e2ec
  00de83c  nop
  00de840  ori 3, 31, 0
  00de844  li 4, 1
  00de848  li 5, 0
  00de84c  bl 0xfdcf0
  00de850  nop
  00de854  lis 3, 150
  00de858  lwz 3, 17776(3)
  00de85c  cmpwi 3, 0
  00de860  bt 2, 0xde878
  00de864  b 0xde924
  00de868  addic 31, 31, 256
  00de86c  lbz 5, 32(31)
  00de870  cmpwi 5, 255
  00de874  bf 2, 0xde820
  00de878  ld 4, 376(1)
  00de87c  lis 3, 115
  00de880  addic 3, 3, 7232
  00de884  lhz 4, 38(4)
  00de888  extsh 4, 4
  00de88c  sldi 4, 4, 2
  00de890  lwzx 3, 3, 4
  00de894  extsw 3, 3
  00de898  bl 0xefa28
  00de89c  nop
  00de8a0  ori 31, 3, 0
  00de8a4  lfs 1, 44(30)
  00de8a8  li 3, 255
  00de8ac  lis 4, 112
  00de8b0  li 5, 16
  00de8b4  addic 6, 4, 31832
  00de8b8  stfs 1, 16(31)
  00de8bc  lfs 1, 48(30)
  00de8c0  li 4, 1
  00de8c4  stfs 1, 20(31)
  00de8c8  lfs 1, 52(30)
  00de8cc  lhz 7, 52(31)
  00de8d0  stfs 1, 24(31)
  00de8d4  lfs 1, 56(30)
  00de8d8  rlwimi 7, 14, 0, 30, 30
  00de8dc  sth 3, 50(31)
  00de8e0  stfs 1, 72(31)
  00de8e4  stb 5, 48(31)
  00de8e8  ori 3, 31, 0
  00de8ec  li 5, 0
  00de8f0  stw 6, 116(31)
  00de8f4  sth 7, 52(31)
  00de8f8  bl 0xfdcf0
  00de8fc  nop
  00de900  ori 3, 31, 0
  00de904  bl 0xf31a8
  00de908  nop
  00de90c  lis 5, 150
  00de910  ori 3, 31, 0
  00de914  li 4, 0
  00de918  stw 31, 17776(5)
  00de91c  bl 0xe5068
  00de920  nop
  00de924  lis 3, 161
  00de928  lwz 3, 2240(3)
  00de92c  cmpwi 3, 0
  00de930  bt 2, 0xdec20
  00de934  lwz 23, 140(27)
  00de938  cmpwi 23, 0
  00de93c  bt 2, 0xdec20
  00de940  lwz 4, -31752(17)
  00de944  lis 3, -28087
  00de948  lwz 5, -31756(16)
  00de94c  lwz 6, 344(1)
  00de950  lis 25, 147
  00de954  ori 3, 3, 9363
  00de958  subc 4, 4, 5
  00de95c  mulhw 3, 3, 4
  00de960  addc 23, 6, 23
  00de964  addc 3, 3, 4
  00de968  clrldi 23, 23, 32
  00de96c  srawi 3, 3, 6
  00de970  addic 22, 23, 16
  00de974  srwi 4, 3, 31
  00de978  li 29, 1
  00de97c  lwz 24, 0(23)
  00de980  addc 4, 3, 4
  00de984  lwz 27, 4(23)
  00de988  slwi 21, 24, 3
  00de98c  lwz 10, 8(23)
  00de990  cmpw 4, 27
  00de994  addc 3, 22, 21
  00de998  lwz 20, -11196(25)
  00de99c  cmpwi 1, 10, 0
  00de9a0  clrldi 3, 3, 32
  00de9a4  cmpwi 6, 27, 0
  00de9a8  bf 2, 0xde9d0
  00de9ac  ori 12, 3, 0
  00de9b0  bf 25, 0xde9dc
  00de9b4  ori 12, 3, 0
  00de9b8  ori 3, 14, 0
  00de9bc  addic 3, 3, 1
  00de9c0  addic 12, 12, 8
  00de9c4  cmpw 3, 27
  00de9c8  bt 0, 0xde9bc
  00de9cc  b 0xde9dc
  00de9d0  slwi 4, 27, 3
  00de9d4  addc 12, 3, 4
  00de9d8  clrldi 12, 12, 32
  00de9dc  lwz 11, -28512(18)
  00de9e0  lbz 3, 32(11)
  00de9e4  cmpwi 3, 255
  00de9e8  bt 2, 0xdeae0
  00de9ec  ori 28, 14, 0
  00de9f0  li 26, 32640
  00de9f4  ori 31, 28, 0
  00de9f8  ori 30, 31, 0
  00de9fc  lhz 3, 54(11)
  00dea00  cmpwi 3, 32640
  00dea04  bt 2, 0xdeab0
  00dea08  addic 31, 31, 1
  00dea0c  lhz 9, 178(11)
  00dea10  ori 8, 14, 0
  00dea14  extsw 31, 31
  00dea18  extsh 9, 9
  00dea1c  bf 5, 0xdea58
  00dea20  ori 8, 14, 0
  00dea24  ori 3, 12, 0
  00dea28  lwz 4, 4(3)
  00dea2c  rlwinm 5, 4, 24, 16, 23
  00dea30  slwi 6, 4, 24
  00dea34  rlwimi 5, 4, 8, 24, 31
  00dea38  rlwimi 6, 4, 8, 8, 15
  00dea3c  or 4, 5, 6
  00dea40  cmpw 4, 9
  00dea44  bt 2, 0xdea58
  00dea48  addic 8, 8, 1
  00dea4c  addic 3, 3, 8
  00dea50  cmpw 8, 10
  00dea54  bt 0, 0xdea28
  00dea58  cmpw 8, 10
  00dea5c  bf 2, 0xdea74
  00dea60  addic 30, 30, 1
  00dea64  ori 28, 29, 0
  00dea68  sth 26, 54(11)
  00dea6c  extsw 30, 30
  00dea70  b 0xdeab0
  00dea74  slwi 3, 8, 1
  00dea78  sldi 3, 3, 2
  00dea7c  extsw 3, 3
  00dea80  lwzx 3, 3, 12
  00dea84  rlwinm 4, 3, 24, 16, 23
  00dea88  slwi 5, 3, 24
  00dea8c  rlwimi 4, 3, 8, 24, 31
  00dea90  rlwimi 5, 3, 8, 8, 15
  00dea94  or 3, 4, 5
  00dea98  srawi 4, 3, 3
  00dea9c  clrlwi 3, 3, 29
  00deaa0  slwi 4, 4, 8
  00deaa4  slw 3, 29, 3
  00deaa8  or 3, 4, 3
  00deaac  sth 3, 54(11)
  00deab0  addic 11, 11, 256
  00deab4  lbz 3, 32(11)
  00deab8  cmpwi 3, 255
  00deabc  bf 2, 0xde9fc
  00deac0  cmpwi 28, 0
  00deac4  bt 2, 0xdeae0
  00deac8  lis 3, 101
  00deacc  ori 4, 30, 0
  00dead0  addic 3, 3, 9100
  00dead4  ori 5, 31, 0
  00dead8  bl 0x5cd098
  00deadc  nop
  00deae0  cmpw 20, 24
  00deae4  bt 2, 0xdeb3c
  00deae8  lis 3, 101
  00deaec  addic 3, 3, 9156
  00deaf0  bl 0x5cd098
  00deaf4  nop
  00deaf8  lwz 3, -11196(25)
  00deafc  cmpwi 3, 0
  00deb00  bf 1, 0xdeba0
  00deb04  ori 4, 14, 0
  00deb08  li 5, 32640
  00deb0c  ori 3, 4, 0
  00deb10  lis 6, 147
  00deb14  lwz 7, -11200(6)
  00deb18  addic 3, 3, 1
  00deb1c  addc 7, 7, 4
  00deb20  addic 4, 4, 48
  00deb24  clrldi 7, 7, 32
  00deb28  sth 5, 30(7)
  00deb2c  lwz 7, -11196(25)
  00deb30  cmpw 7, 3
  00deb34  bt 1, 0xdeb14
  00deb38  b 0xdeba0
  00deb3c  cmpwi 24, 0
  00deb40  bf 1, 0xdeba0
  00deb44  ori 3, 14, 0
  00deb48  ld 4, 352(1)
  00deb4c  lwz 5, 0(22)
  00deb50  addic 24, 24, -1
  00deb54  lwz 8, 40(4)
  00deb58  addic 22, 22, 8
  00deb5c  rlwinm 6, 5, 24, 16, 23
  00deb60  slwi 7, 5, 24
  00deb64  rlwimi 6, 5, 8, 24, 31
  00deb68  rlwimi 7, 5, 8, 8, 15
  00deb6c  cmpwi 24, 0
  00deb70  or 5, 6, 7
  00deb74  lwz 7, 0(8)
  00deb78  srawi 6, 5, 3
  00deb7c  clrlwi 5, 5, 29
  00deb80  slwi 6, 6, 8
  00deb84  slw 5, 29, 5
  00deb88  addc 7, 7, 3
  00deb8c  or 5, 6, 5
  00deb90  clrldi 6, 7, 32
  00deb94  addic 3, 3, 48
  00deb98  sth 5, 30(6)
  00deb9c  bt 1, 0xdeb4c
  00deba0  addc 3, 23, 21
  00deba4  cmpwi 27, 0
  00deba8  addic 23, 3, 16
  00debac  clrldi 23, 23, 32
  00debb0  bf 1, 0xdec0c
  00debb4  ori 3, 14, 0
  00debb8  lis 4, 230
  00debbc  lwz 5, 0(23)
  00debc0  addic 27, 27, -1
  00debc4  addic 23, 23, 8
  00debc8  rlwinm 6, 5, 24, 16, 23
  00debcc  slwi 7, 5, 24
  00debd0  rlwimi 6, 5, 8, 24, 31
  00debd4  rlwimi 7, 5, 8, 8, 15
  00debd8  lwz 5, -31756(4)
  00debdc  or 6, 6, 7
  00debe0  addc 5, 5, 3
  00debe4  srawi 7, 6, 3
  00debe8  clrlwi 6, 6, 29
  00debec  slwi 7, 7, 8
  00debf0  slw 6, 29, 6
  00debf4  clrldi 5, 5, 32
  00debf8  or 6, 7, 6
  00debfc  cmpwi 27, 0
  00dec00  addic 3, 3, 112
  00dec04  stw 6, 88(5)
  00dec08  bt 1, 0xdebbc
  00dec0c  lis 3, 150
  00dec10  li 4, 2
  00dec14  addic 3, 3, -14912
  00dec18  stw 4, 28(3)
  00dec1c  b 0xdecd4
  00dec20  lis 3, 101
  00dec24  addic 3, 3, 9196
  00dec28  bl 0x5cd098
  00dec2c  nop
  00dec30  lwz 3, -28512(18)
  00dec34  lwz 4, -28504(24)
  00dec38  cmpw 3, 4
  00dec3c  bt 2, 0xdec58
  00dec40  li 4, 32640
  00dec44  sth 4, 54(3)
  00dec48  addic 3, 3, 256
  00dec4c  lwz 5, -28504(24)
  00dec50  cmpw 3, 5
  00dec54  bf 2, 0xdec44
  00dec58  lwz 3, -31756(16)
  00dec5c  lwz 4, -31752(17)
  00dec60  cmpw 3, 4
  00dec64  bt 2, 0xdec84
  00dec68  li 4, 32640
  00dec6c  lis 5, 230
  00dec70  stw 4, 88(3)
  00dec74  lwz 6, -31752(5)
  00dec78  addic 3, 3, 112
  00dec7c  cmpw 3, 6
  00dec80  bf 2, 0xdec70
  00dec84  lis 4, 147
  00dec88  lwz 3, -11196(4)
  00dec8c  cmpwi 3, 0
  00dec90  bf 1, 0xdecc8
  00dec94  ori 5, 14, 0
  00dec98  li 6, 32640
  00dec9c  ori 3, 5, 0
  00deca0  lis 7, 147
  00deca4  lwz 8, -11200(7)
  00deca8  addic 3, 3, 1
  00decac  addc 8, 8, 5
  00decb0  addic 5, 5, 48
  00decb4  clrldi 8, 8, 32
  00decb8  sth 6, 30(8)
  00decbc  lwz 8, -11196(4)
  00decc0  cmpw 3, 8
  00decc4  bt 0, 0xdeca4
  00decc8  lis 3, 150
  00deccc  addic 3, 3, -14912
  00decd0  stw 14, 28(3)
  00decd4  ld 31, 392(1)
  00decd8  bl 0x6840c
  00decdc  nop
  00dece0  bl 0x7f018
  00dece4  nop
  00dece8  bl 0x7f398
  00decec  nop
  00decf0  bl 0x53ae8
  00decf4  nop
  00decf8  bl 0x53550
  00decfc  nop
  00ded00  bl 0x11dfc8
  00ded04  nop
  00ded08  bl 0x6c5dc
  00ded0c  nop
  00ded10  lis 3, 165
  00ded14  lis 4, 165
  00ded18  lis 5, 150
  00ded1c  lis 6, 165
  00ded20  lis 8, 161
  00ded24  sth 14, 7848(3)
  00ded28  lis 9, 161
  00ded2c  sth 14, 7912(4)
  00ded30  lis 7, 128
  00ded34  lwz 4, 17776(5)
  00ded38  sth 14, 8040(6)
  00ded3c  li 6, 5
  00ded40  lwz 5, 8320(31)
  00ded44  stw 14, 1808(8)
  00ded48  addic 3, 7, -3524
  00ded4c  stw 14, 23676(9)
  00ded50  mtctr 6
  00ded54  stw 14, 0(3)
  00ded58  stw 14, 4(3)
  00ded5c  stw 14, 8(3)
  00ded60  stw 14, 12(3)
  00ded64  addic 3, 3, 16
  00ded68  bdnz 0xded54
  00ded6c  lis 3, 268
  00ded70  cmpwi 4, 0
  00ded74  stw 14, -19336(3)
  00ded78  bt 2, 0xded84
  00ded7c  ld 3, 56(5)
  00ded80  std 3, 56(4)
  00ded84  lis 3, 151
  00ded88  lwz 3, -25488(3)
  00ded8c  cmpwi 3, 4
  00ded90  cmpwi 1, 3, 2
  00ded94  cmpwi 6, 3, 9
  00ded98  cmpwi 7, 3, 8
  00ded9c  bt 1, 0xdeda8
  00deda0  bt 6, 0xdedbc
  00deda4  b 0xdedd0
  00deda8  bt 25, 0xdedb4
  00dedac  bf 29, 0xdedbc
  00dedb0  b 0xdedd0
  00dedb4  cmpwi 3, 10
  00dedb8  bt 1, 0xdedd0
  00dedbc  lis 3, 114
  00dedc0  lis 4, 150
  00dedc4  addic 3, 3, -4352
  00dedc8  stw 3, -12516(4)
  00dedcc  b 0xdede0
  00dedd0  lis 3, 114
  00dedd4  lis 4, 150
  00dedd8  addic 3, 3, -4400
  00deddc  stw 3, -12516(4)
  00dede0  lis 3, 150
  00dede4  lis 4, 346
  00dede8  lis 5, 114
  00dedec  lwz 3, -12516(3)
  00dedf0  lbz 4, -15535(4)
  00dedf4  stw 3, -4304(5)
  00dedf8  cmpwi 4, 0
  00dedfc  bf 2, 0xdee28
  00dee00  lis 3, 101
  00dee04  addic 31, 3, 8872
  00dee08  bl 0x10388
  00dee0c  nop
  00dee10  ori 5, 3, 0
  00dee14  addic 3, 1, 112
  00dee18  ori 4, 31, 0
  00dee1c  bl 0x5cd2a8
  00dee20  nop
  00dee24  b 0xdee3c
  00dee28  lis 4, 101
  00dee2c  addic 3, 1, 112
  00dee30  addic 4, 4, 8904
  00dee34  bl 0x5cd2a8
  00dee38  nop
  00dee3c  ld 31, 384(1)
  00dee40  addic 3, 1, 112
  00dee44  lis 5, 4
  00dee48  lwz 4, 84(31)
  00dee4c  bl 0x503e00
  00dee50  nop
  00dee54  lis 3, 114
  00dee58  lwz 5, 84(31)
  00dee5c  lis 6, 162
  00dee60  addic 31, 3, 2180
  00dee64  ori 3, 5, 0
  00dee68  addic 4, 5, 8
  00dee6c  lwz 7, 0(5)
  00dee70  stw 7, 44(31)
  00dee74  lwz 7, 4(5)
  00dee78  stw 5, -22528(6)
  00dee7c  addic 5, 7, 3
  00dee80  rlwinm 5, 5, 0, 0, 29
  00dee84  addic 5, 5, -8
  00dee88  extsw 5, 5
  00dee8c  bl 0x50027c
  00dee90  nop
  00dee94  lwz 3, 44(31)
  00dee98  cmpwi 3, 0
  00dee9c  bf 1, 0xdeed0
  00deea0  ori 4, 3, 0
  00deea4  ori 3, 14, 0
  00deea8  lis 5, 162
  00deeac  addic 4, 4, -1
  00deeb0  cmpwi 4, 0
  00deeb4  lwz 5, -22528(5)
  00deeb8  addic 6, 5, -8
  00deebc  lwzx 7, 5, 3
  00deec0  addc 6, 7, 6
  00deec4  stwx 6, 5, 3
  00deec8  addic 3, 3, 16
  00deecc  bt 1, 0xdeea8
  00deed0  ori 3, 19, 0
  00deed4  ld 0, 592(1)
  00deed8  mtlr 0
  00deedc  lfd 29, 552(1)
  00deee0  lfd 30, 560(1)
  00deee4  lfd 31, 568(1)
  00deee8  ld 14, 408(1)
  00deeec  ld 15, 416(1)
  00deef0  ld 16, 424(1)
  00deef4  ld 17, 432(1)
  00deef8  ld 18, 440(1)
  00deefc  ld 19, 448(1)
  00def00  ld 20, 456(1)
  00def04  ld 21, 464(1)
  00def08  ld 22, 472(1)
  00def0c  ld 23, 480(1)
  00def10  ld 24, 488(1)
  00def14  ld 25, 496(1)
  00def18  ld 26, 504(1)
  00def1c  ld 27, 512(1)
  00def20  ld 28, 520(1)
  00def24  ld 29, 528(1)
  00def28  ld 30, 536(1)
  00def2c  ld 31, 544(1)
  00def30  addi 1, 1, 576
  00def34  blr

STUB_000def38_RET_1:   # 0xdef38, 0x8 bytes
  00def38  li 3, 1
  00def3c  blr

???_Unused_IncCounter_a204ac:   # 0xdef40, 0x14 bytes
  00def40  lis 3, 162
  00def44  lwz 4, 1196(3)
  00def48  addic 4, 4, 1
  00def4c  stw 4, 1196(3)
  00def50  blr

AdvanceLoadingStage:   # 0xdef54, 0x24 bytes
  00def54  lis 3, 150
  00def58  lis 4, 162
  00def5c  lhz 5, 17760(3)
  00def60  lwz 6, 1200(4)
  00def64  addic 5, 5, 1
  00def68  addic 6, 6, 1
  00def6c  sth 5, 17760(3)
  00def70  stw 6, 1200(4)
  00def74  blr

LoadLevelFiles:   # 0xdef78, 0x488 bytes
  00def78  stdu 1, -464(1)
  00def7c  mflr 0
  00def80  std 0, 480(1)
  00def84  lis 3, 150
  00def88  addic 4, 3, 17776
  00def8c  li 3, 1
  00def90  std 31, 456(1)
  00def94  lhz 4, 38(4)
  00def98  extsh 31, 4
  00def9c  std 30, 448(1)
  00defa0  std 29, 440(1)
  00defa4  std 28, 432(1)
  00defa8  addic 31, 31, 1
  00defac  bl 0x503128
  00defb0  nop
  00defb4  cmpwi 3, 0
  00defb8  bt 2, 0xdefd4
  00defbc  lis 4, 150
  00defc0  li 3, 0
  00defc4  lwz 5, 14016(4)
  00defc8  addic 5, 5, 1
  00defcc  stw 5, 14016(4)
  00defd0  b 0xdf3e0
  00defd4  lis 3, 150
  00defd8  lhz 3, 17760(3)
  00defdc  extsh 3, 3
  00defe0  cmpwi 3, 7
  00defe4  cmpwi 1, 3, 6
  00defe8  cmpwi 6, 3, 5
  00defec  cmpwi 7, 3, 4
  00deff0  bt 2, 0xdf3ac
  00deff4  bt 6, 0xdf2f8
  00deff8  bt 26, 0xdf2cc
  00deffc  bt 30, 0xdf28c
  00df000  cmpwi 3, 3
  00df004  bt 2, 0xdf244
  00df008  cmpwi 3, 2
  00df00c  bt 2, 0xdf1e4
  00df010  cmpwi 3, 1
  00df014  bt 2, 0xdf140
  00df018  cmpwi 3, 0
  00df01c  bf 2, 0xdf3dc
  00df020  lis 3, 162
  00df024  lwz 3, 1200(3)
  00df028  cmpwi 3, 0
  00df02c  bf 2, 0xdf3dc
  00df030  lis 3, 150
  00df034  lis 4, 271
  00df038  li 5, 0
  00df03c  addic 4, 4, -29120
  00df040  sldi 7, 31, 3
  00df044  lwz 3, 27372(3)
  00df048  lis 31, 151
  00df04c  addic 30, 1, 176
  00df050  subc 3, 5, 3
  00df054  lwz 6, 6148(4)
  00df058  lwz 5, 6140(4)
  00df05c  cntlzw 3, 3
  00df060  slwi 6, 6, 11
  00df064  slwi 5, 5, 11
  00df068  sldi 3, 3, 58
  00df06c  addic 6, 6, 4095
  00df070  addic 5, 5, 4095
  00df074  sradi 3, 3, 63
  00df078  subc 5, 5, 6
  00df07c  and 3, 3, 5
  00df080  addc 5, 4, 7
  00df084  addc 3, 6, 3
  00df088  lis 6, 4096
  00df08c  lis 7, 150
  00df090  rlwinm 3, 3, 0, 0, 19
  00df094  lwz 5, 4812(5)
  00df098  addic 6, 6, 0
  00df09c  lwz 4, 6132(4)
  00df0a0  addic 7, 7, 17760
  00df0a4  slwi 5, 5, 11
  00df0a8  slwi 4, 4, 11
  00df0ac  subc 3, 6, 3
  00df0b0  addic 4, 4, 4095
  00df0b4  addic 5, 5, 4095
  00df0b8  rlwinm 6, 4, 0, 0, 19
  00df0bc  rlwinm 4, 5, 0, 0, 19
  00df0c0  stw 3, 8(7)
  00df0c4  lis 5, 101
  00df0c8  subc 3, 3, 4
  00df0cc  addic 4, 5, 9220
  00df0d0  subc 6, 3, 6
  00df0d4  lwz 5, -25488(31)
  00df0d8  stw 3, 12(7)
  00df0dc  extsw 5, 5
  00df0e0  ori 3, 30, 0
  00df0e4  stw 6, 4(7)
  00df0e8  bl 0x5cd2a8
  00df0ec  nop
  00df0f0  addic 29, 1, 304
  00df0f4  lwz 5, -25488(31)
  00df0f8  lis 4, 101
  00df0fc  ori 3, 29, 0
  00df100  addic 4, 4, 9252
  00df104  extsw 5, 5
  00df108  bl 0x5cd2a8
  00df10c  nop
  00df110  lis 3, 162
  00df114  li 6, 1
  00df118  lis 7, 161
  00df11c  ori 4, 30, 0
  00df120  ori 5, 29, 0
  00df124  stw 6, 1200(3)
  00df128  lis 6, 112
  00df12c  addic 3, 7, 24396
  00df130  addic 6, 6, 23248
  00df134  bl 0x5085cc
  00df138  nop
  00df13c  b 0xdf3dc
  00df140  lis 3, 162
  00df144  lwz 3, 1200(3)
  00df148  cmpwi 3, 2
  00df14c  bf 2, 0xdf15c
  00df150  lis 3, 162
  00df154  li 4, 0
  00df158  stw 4, 1200(3)
  00df15c  lis 31, 150
  00df160  lis 4, 101
  00df164  addic 3, 31, 17760
  00df168  addic 4, 4, 9284
  00df16c  lwz 3, 12(3)
  00df170  bl 0x503494
  00df174  nop
  00df178  lis 3, 101
  00df17c  lis 30, 145
  00df180  addic 3, 3, 9300
  00df184  li 5, 36
  00df188  addic 4, 30, -10460
  00df18c  bl 0x503e00
  00df190  nop
  00df194  lis 3, 161
  00df198  lis 4, 101
  00df19c  addic 29, 3, 2264
  00df1a0  addic 3, 4, 9332
  00df1a4  lis 5, 8
  00df1a8  lwz 4, 88(29)
  00df1ac  bl 0x503e00
  00df1b0  nop
  00df1b4  lis 3, 144
  00df1b8  lwz 4, 88(29)
  00df1bc  lwz 5, -10460(30)
  00df1c0  lhz 6, 17760(31)
  00df1c4  addic 6, 6, 1
  00df1c8  lwz 3, -23196(3)
  00df1cc  lwz 3, 1196(3)
  00df1d0  sth 6, 17760(31)
  00df1d4  subc 3, 4, 3
  00df1d8  addc 3, 5, 3
  00df1dc  stw 3, -10460(30)
  00df1e0  b 0xdf3dc
  00df1e4  lis 3, 150
  00df1e8  lwz 3, 27372(3)
  00df1ec  cmpwi 3, 0
  00df1f0  bt 2, 0xdf214
  00df1f4  lis 3, 150
  00df1f8  lis 4, 101
  00df1fc  addic 3, 3, 17760
  00df200  addic 4, 4, 9364
  00df204  lwz 3, 8(3)
  00df208  bl 0x503404
  00df20c  nop
  00df210  b 0xdf230
  00df214  lis 3, 150
  00df218  lis 4, 101
  00df21c  addic 3, 3, 17760
  00df220  addic 4, 4, 9380
  00df224  lwz 3, 8(3)
  00df228  bl 0x503404
  00df22c  nop
  00df230  lis 3, 150
  00df234  lhz 4, 17760(3)
  00df238  addic 4, 4, 1
  00df23c  sth 4, 17760(3)
  00df240  b 0xdf3dc
  00df244  lis 3, 150
  00df248  addic 3, 3, 17760
  00df24c  lhz 3, 2(3)
  00df250  cmpwi 3, 0
  00df254  bf 2, 0xdf3dc
  00df258  bl 0x60c0d0
  00df25c  nop
  00df260  lis 4, 114
  00df264  li 3, 6
  00df268  lwz 4, -3068(4)
  00df26c  cmpwi 4, 0
  00df270  bt 2, 0xdf280
  00df274  lis 3, 150
  00df278  lhz 3, 17760(3)
  00df27c  addic 3, 3, 1
  00df280  lis 4, 150
  00df284  sth 3, 17760(4)
  00df288  b 0xdf3dc
  00df28c  bl 0x505d20
  00df290  nop
  00df294  cmpwi 3, 0
  00df298  bf 2, 0xdf3dc
  00df29c  lis 31, 114
  00df2a0  li 4, 1
  00df2a4  lwz 3, -3068(31)
  00df2a8  bl 0x60a9b4
  00df2ac  nop
  00df2b0  lis 3, 150
  00df2b4  li 4, 0
  00df2b8  lhz 5, 17760(3)
  00df2bc  stw 4, -3068(31)
  00df2c0  addic 4, 5, 1
  00df2c4  sth 4, 17760(3)
  00df2c8  b 0xdf3dc
  00df2cc  bl 0x505d20
  00df2d0  nop
  00df2d4  cmpwi 3, 0
  00df2d8  bf 2, 0xdf3dc
  00df2dc  bl 0x505f48
  00df2e0  nop
  00df2e4  lis 3, 150
  00df2e8  lhz 4, 17760(3)
  00df2ec  addic 4, 4, 1
  00df2f0  sth 4, 17760(3)
  00df2f4  b 0xdf3dc
  00df2f8  bl 0x505d20
  00df2fc  nop
  00df300  cmpwi 3, 0
  00df304  bf 2, 0xdf3dc
  00df308  lis 31, 114
  00df30c  li 4, -1
  00df310  lis 5, 151
  00df314  addic 30, 1, 112
  00df318  stw 4, -3068(31)
  00df31c  lis 4, 101
  00df320  lwz 5, -25488(5)
  00df324  ori 3, 30, 0
  00df328  addic 4, 4, 9396
  00df32c  extsw 5, 5
  00df330  bl 0x5cd2a8
  00df334  nop
  00df338  lis 29, 161
  00df33c  li 4, 16
  00df340  lwz 3, 24396(29)
  00df344  bl 0x4fe5c8
  00df348  nop
  00df34c  lwz 3, 24396(29)
  00df350  bl 0x4fe5ec
  00df354  nop
  00df358  ori 28, 3, 0
  00df35c  ori 3, 30, 0
  00df360  ori 4, 28, 0
  00df364  li 5, -1
  00df368  bl 0x503e00
  00df36c  nop
  00df370  extsw 4, 3
  00df374  lwz 3, 24396(29)
  00df378  bl 0x4fe6ec
  00df37c  nop
  00df380  lis 4, 112
  00df384  ori 3, 28, 0
  00df388  addic 5, 31, -3068
  00df38c  addic 4, 4, 31800
  00df390  bl 0x505b30
  00df394  nop
  00df398  lis 3, 150
  00df39c  lhz 4, 17760(3)
  00df3a0  addic 4, 4, 1
  00df3a4  sth 4, 17760(3)
  00df3a8  b 0xdf3dc
  00df3ac  bl 0x505d20
  00df3b0  nop
  00df3b4  cmpwi 3, 0
  00df3b8  bf 2, 0xdf3dc
  00df3bc  lis 3, 114
  00df3c0  lwz 3, -3068(3)
  00df3c4  cmpwi 3, -1
  00df3c8  bt 2, 0xdf3dc
  00df3cc  bl 0x505f48
  00df3d0  nop
  00df3d4  li 3, 1
  00df3d8  b 0xdf3e0
  00df3dc  li 3, 0
  00df3e0  ld 0, 480(1)
  00df3e4  mtlr 0
  00df3e8  ld 28, 432(1)
  00df3ec  ld 29, 440(1)
  00df3f0  ld 30, 448(1)
  00df3f4  ld 31, 456(1)
  00df3f8  addi 1, 1, 464
  00df3fc  blr

LoadAllMobys:   # 0xdf408, 0xc30 bytes
  00df408  stdu 1, -416(1)
  00df40c  mflr 0
  00df410  std 0, 432(1)
  00df414  std 14, 272(1)
  00df418  lis 14, 161
  00df41c  std 3, 240(1)
  00df420  std 15, 280(1)
  00df424  cmpwi 3, 0
  00df428  addic 14, 14, 2264
  00df42c  std 4, 248(1)
  00df430  std 31, 408(1)
  00df434  std 30, 400(1)
  00df438  std 29, 392(1)
  00df43c  std 28, 384(1)
  00df440  std 27, 376(1)
  00df444  std 26, 368(1)
  00df448  std 25, 360(1)
  00df44c  std 24, 352(1)
  00df450  std 23, 344(1)
  00df454  std 22, 336(1)
  00df458  std 21, 328(1)
  00df45c  std 20, 320(1)
  00df460  std 19, 312(1)
  00df464  std 18, 304(1)
  00df468  std 17, 296(1)
  00df46c  std 16, 288(1)
  00df470  lwz 15, 20(14)
  00df474  bt 2, 0xdff48
  00df478  lis 16, 161
  00df47c  lis 3, 151
  00df480  addic 16, 16, 24396
  00df484  lis 4, 161
  00df488  lis 5, 162
  00df48c  addic 4, 4, -13692
  00df490  lwz 3, -25488(3)
  00df494  lwz 23, 20(16)
  00df498  slwi 6, 3, 4
  00df49c  addic 3, 5, 704
  00df4a0  addc 4, 4, 6
  00df4a4  li 5, 16
  00df4a8  clrldi 4, 4, 32
  00df4ac  bl 0x50027c
  00df4b0  nop
  00df4b4  lwz 3, 116(23)
  00df4b8  lis 21, 114
  00df4bc  lwz 4, 4(23)
  00df4c0  addc 3, 3, 23
  00df4c4  lwz 5, 40(16)
  00df4c8  lis 9, 162
  00df4cc  clrldi 6, 3, 32
  00df4d0  lis 8, 165
  00df4d4  li 11, 0
  00df4d8  addic 9, 9, -16448
  00df4dc  addc 7, 23, 4
  00df4e0  lwz 10, 4(6)
  00df4e4  subc 4, 11, 4
  00df4e8  lwz 6, 8(6)
  00df4ec  lis 11, 161
  00df4f0  lwz 12, -3068(21)
  00df4f4  addc 10, 23, 10
  00df4f8  cntlzw 4, 4
  00df4fc  stw 12, -9504(8)
  00df500  addc 6, 23, 6
  00df504  stw 3, 24(9)
  00df508  lis 8, 147
  00df50c  stw 10, 28(9)
  00df510  li 3, 0
  00df514  lhz 10, 6(5)
  00df518  sldi 4, 4, 58
  00df51c  subc 3, 3, 7
  00df520  sradi 4, 4, 63
  00df524  stw 6, 32(9)
  00df528  stw 10, -11196(8)
  00df52c  and 3, 4, 3
  00df530  lwz 4, 20(23)
  00df534  addc 6, 7, 3
  00df538  addc 4, 23, 4
  00df53c  lwz 31, 0(23)
  00df540  clrldi 3, 4, 32
  00df544  lis 4, 147
  00df548  stw 6, 2240(11)
  00df54c  lwz 6, 0(5)
  00df550  lwz 5, 0(3)
  00df554  stw 6, -11200(4)
  00df558  cmpwi 5, 0
  00df55c  lwz 4, 4(3)
  00df560  bt 2, 0xdf570
  00df564  lis 6, 161
  00df568  addc 5, 3, 5
  00df56c  stw 5, 2368(6)
  00df570  cmpwi 4, 0
  00df574  bt 2, 0xdf5c8
  00df578  addc 5, 3, 4
  00df57c  lis 4, 161
  00df580  clrldi 6, 5, 32
  00df584  li 3, 0
  00df588  lwz 6, 0(6)
  00df58c  stw 5, 23552(4)
  00df590  cmpwi 6, 0
  00df594  bf 1, 0xdf5c8
  00df598  ori 6, 3, 0
  00df59c  addc 7, 5, 6
  00df5a0  addic 3, 3, 1
  00df5a4  clrldi 7, 7, 32
  00df5a8  addic 6, 6, 16
  00df5ac  lwz 8, 28(7)
  00df5b0  addc 5, 5, 8
  00df5b4  stw 5, 28(7)
  00df5b8  lwz 5, 23552(4)
  00df5bc  lwz 7, 0(5)
  00df5c0  cmpw 3, 7
  00df5c4  bt 0, 0xdf59c
  00df5c8  addc 3, 23, 31
  00df5cc  li 29, 0
  00df5d0  clrldi 31, 3, 32
  00df5d4  ori 20, 29, 0
  00df5d8  addic 30, 31, 4
  00df5dc  lwz 31, 0(31)
  00df5e0  cmpwi 31, 0
  00df5e4  bf 1, 0xdf6d8
  00df5e8  lis 27, 163
  00df5ec  lis 26, 163
  00df5f0  lis 25, 163
  00df5f4  lis 24, 163
  00df5f8  addic 27, 27, 21248
  00df5fc  addic 26, 26, 21696
  00df600  addic 25, 25, 19456
  00df604  addic 24, 24, 31632
  00df608  li 5, 0
  00df60c  lwz 6, 4(30)
  00df610  lis 3, 163
  00df614  lwz 28, 0(30)
  00df618  subc 5, 5, 6
  00df61c  addc 7, 6, 23
  00df620  cntlzw 5, 5
  00df624  li 4, 0
  00df628  clrldi 22, 7, 32
  00df62c  lwz 6, 23744(3)
  00df630  sldi 5, 5, 58
  00df634  subc 4, 4, 22
  00df638  sradi 3, 5, 63
  00df63c  extsw 28, 28
  00df640  and 3, 3, 4
  00df644  slwi 4, 6, 1
  00df648  addc 22, 22, 3
  00df64c  slwi 3, 6, 2
  00df650  extsw 4, 4
  00df654  stbx 6, 26, 28
  00df658  extsw 3, 3
  00df65c  cmpwi 22, 0
  00df660  sthx 28, 27, 4
  00df664  stwx 22, 25, 3
  00df668  bf 2, 0xdf68c
  00df66c  ori 3, 28, 0
  00df670  bl 0xfbfa0
  00df674  nop
  00df678  lis 3, 163
  00df67c  lwz 4, 23744(3)
  00df680  addic 4, 4, 1
  00df684  stw 4, 23744(3)
  00df688  b 0xdf6c8
  00df68c  ori 4, 3, 0
  00df690  lwz 5, 44(22)
  00df694  ori 3, 28, 0
  00df698  stwx 5, 24, 4
  00df69c  bl 0xfbfa0
  00df6a0  nop
  00df6a4  lis 7, 163
  00df6a8  addic 5, 30, 16
  00df6ac  ori 3, 22, 0
  00df6b0  li 4, 0
  00df6b4  ori 6, 28, 0
  00df6b8  lwz 8, 23744(7)
  00df6bc  addic 8, 8, 1
  00df6c0  stw 8, 23744(7)
  00df6c4  bl 0xdbc38
  00df6c8  addic 29, 29, 1
  00df6cc  addic 30, 30, 8
  00df6d0  cmpw 29, 31
  00df6d4  bt 0, 0xdf608
  00df6d8  lis 17, 163
  00df6dc  ori 4, 20, 0
  00df6e0  lwz 6, 19456(17)
  00df6e4  lwz 3, 24(23)
  00df6e8  addc 3, 23, 3
  00df6ec  lbz 5, 12(6)
  00df6f0  clrldi 3, 3, 32
  00df6f4  cmpwi 5, 0
  00df6f8  bf 1, 0xdf790
  00df6fc  ori 7, 20, 0
  00df700  lwz 5, 0(3)
  00df704  cmpwi 5, 0
  00df708  bt 2, 0xdf774
  00df70c  addc 6, 6, 7
  00df710  addc 5, 5, 23
  00df714  clrldi 6, 6, 32
  00df718  stw 5, 72(6)
  00df71c  lwz 5, 19456(17)
  00df720  addc 5, 5, 7
  00df724  clrldi 5, 5, 32
  00df728  lwz 5, 72(5)
  00df72c  lwz 6, 20(5)
  00df730  cmpwi 6, 0
  00df734  bt 2, 0xdf740
  00df738  addc 6, 5, 6
  00df73c  stw 6, 20(5)
  00df740  lbz 8, 16(5)
  00df744  ori 6, 20, 0
  00df748  cmpwi 8, 0
  00df74c  bf 1, 0xdf774
  00df750  ori 8, 5, 0
  00df754  lwz 9, 28(8)
  00df758  addic 6, 6, 1
  00df75c  addc 9, 9, 5
  00df760  stw 9, 28(8)
  00df764  lbz 9, 16(5)
  00df768  addic 8, 8, 4
  00df76c  cmpw 6, 9
  00df770  bt 0, 0xdf754
  00df774  lwz 6, 19456(17)
  00df778  addic 4, 4, 1
  00df77c  addic 3, 3, 4
  00df780  addic 7, 7, 4
  00df784  lbz 5, 12(6)
  00df788  cmpw 4, 5
  00df78c  bt 0, 0xdf700
  00df790  lis 3, 165
  00df794  li 4, -1
  00df798  lis 5, 165
  00df79c  lis 6, 165
  00df7a0  stw 4, -9496(3)
  00df7a4  stw 20, -9492(5)
  00df7a8  lwz 3, 76(23)
  00df7ac  lwz 4, 80(23)
  00df7b0  addc 3, 23, 3
  00df7b4  cmpwi 4, 0
  00df7b8  stw 4, -9500(6)
  00df7bc  clrldi 3, 3, 32
  00df7c0  bf 1, 0xdf818
  00df7c4  lis 5, 165
  00df7c8  ori 7, 4, 0
  00df7cc  lis 6, 165
  00df7d0  addic 4, 5, -10944
  00df7d4  lis 8, 165
  00df7d8  addic 5, 6, -10848
  00df7dc  addic 6, 8, -10752
  00df7e0  lwz 8, 0(3)
  00df7e4  addic 7, 7, -1
  00df7e8  stw 8, 0(4)
  00df7ec  lwz 8, 4(3)
  00df7f0  cmpwi 7, 0
  00df7f4  lwz 9, 8(3)
  00df7f8  addic 4, 4, 4
  00df7fc  addc 8, 8, 23
  00df800  stw 9, 0(6)
  00df804  addic 6, 6, 4
  00df808  addic 3, 3, 16
  00df80c  stw 8, 0(5)
  00df810  addic 5, 5, 4
  00df814  bt 1, 0xdf7e0
  00df818  lwz 3, 64(23)
  00df81c  cmpwi 3, 0
  00df820  bt 2, 0xdf854
  00df824  addc 3, 23, 3
  00df828  lis 6, 162
  00df82c  clrldi 5, 3, 32
  00df830  lis 4, 162
  00df834  addic 3, 5, 16
  00df838  lwz 7, 0(5)
  00df83c  lfs 1, 8(5)
  00df840  stw 7, 1176(6)
  00df844  lwz 6, 4(5)
  00df848  lfs 2, 12(5)
  00df84c  stw 6, 1180(4)
  00df850  b 0xdf878
  00df854  lis 3, 162
  00df858  lis 5, 14
  00df85c  lis 4, 162
  00df860  addi 5, 5, -3072
  00df864  stw 20, 1176(3)
  00df868  ori 3, 20, 0
  00df86c  stw 20, 1180(4)
  00df870  lfs 1, 0(5)
  00df874  fmr 2, 1
  00df878  lis 5, 162
  00df87c  li 4, 0
  00df880  lwz 7, 8(23)
  00df884  lis 8, 162
  00df888  subc 4, 4, 7
  00df88c  li 6, 0
  00df890  stw 3, 1192(5)
  00df894  addc 3, 23, 7
  00df898  lwz 5, 112(23)
  00df89c  lis 7, 162
  00df8a0  stfs 2, 1188(8)
  00df8a4  cntlzw 4, 4
  00df8a8  addc 5, 23, 5
  00df8ac  sldi 4, 4, 58
  00df8b0  subc 6, 6, 3
  00df8b4  stfs 1, 1184(7)
  00df8b8  sradi 4, 4, 63
  00df8bc  clrldi 7, 5, 32
  00df8c0  and 4, 4, 6
  00df8c4  lis 9, 161
  00df8c8  lis 8, 165
  00df8cc  addc 4, 3, 4
  00df8d0  lwz 6, 4(7)
  00df8d4  lwz 3, 0(7)
  00df8d8  addic 5, 7, 16
  00df8dc  stw 4, 2244(9)
  00df8e0  cmpwi 3, 0
  00df8e4  stw 6, 11064(8)
  00df8e8  lwz 4, 8(7)
  00df8ec  addc 4, 4, 7
  00df8f0  bf 1, 0xdf920
  00df8f4  lis 7, 165
  00df8f8  ori 6, 3, 0
  00df8fc  addic 3, 7, 10244
  00df900  lwz 7, 0(5)
  00df904  addic 6, 6, -1
  00df908  addc 7, 7, 4
  00df90c  cmpwi 6, 0
  00df910  addic 5, 5, 4
  00df914  stw 7, 0(3)
  00df918  addic 3, 3, 4
  00df91c  bt 1, 0xdf900
  00df920  lwz 5, 72(23)
  00df924  lis 4, 161
  00df928  addc 23, 23, 5
  00df92c  lis 31, 161
  00df930  clrldi 23, 23, 32
  00df934  ori 3, 15, 0
  00df938  stw 15, 1844(4)
  00df93c  lhz 4, 0(23)
  00df940  lhz 5, 2(23)
  00df944  extsh 4, 4
  00df948  extsh 5, 5
  00df94c  addc 4, 23, 4
  00df950  slwi 6, 5, 5
  00df954  clrldi 4, 4, 32
  00df958  extsw 30, 6
  00df95c  stw 5, 1840(31)
  00df960  ori 5, 30, 0
  00df964  bl 0x50027c
  00df968  nop
  00df96c  lhz 3, 4(23)
  00df970  addc 15, 15, 30
  00df974  lwz 4, 1840(31)
  00df978  extsh 3, 3
  00df97c  cmpwi 4, 0
  00df980  addc 30, 23, 3
  00df984  ori 31, 20, 0
  00df988  clrldi 30, 30, 32
  00df98c  bf 1, 0xdfa28
  00df990  lis 28, 101
  00df994  ori 29, 20, 0
  00df998  addic 28, 28, 9428
  00df99c  lis 3, 161
  00df9a0  lwz 3, 1844(3)
  00df9a4  lhz 5, 6(23)
  00df9a8  addc 4, 3, 29
  00df9ac  extsh 5, 5
  00df9b0  clrldi 4, 4, 32
  00df9b4  lhz 3, 26(4)
  00df9b8  extsh 3, 3
  00df9bc  cmpw 3, 5
  00df9c0  bt 0, 0xdf9ec
  00df9c4  ori 3, 28, 0
  00df9c8  bl 0x5cd098
  00df9cc  nop
  00df9d0  lis 3, 161
  00df9d4  li 4, -1
  00df9d8  lwz 3, 1844(3)
  00df9dc  addc 3, 3, 29
  00df9e0  clrldi 3, 3, 32
  00df9e4  sth 4, 26(3)
  00df9e8  b 0xdf9f8
  00df9ec  sldi 3, 3, 2
  00df9f0  lwzx 3, 30, 3
  00df9f4  sth 3, 26(4)
  00df9f8  lis 3, 161
  00df9fc  lis 4, 161
  00dfa00  addic 31, 31, 1
  00dfa04  lwz 3, 1844(3)
  00dfa08  lwz 5, -3068(21)
  00dfa0c  addc 3, 3, 29
  00dfa10  lwz 4, 1840(4)
  00dfa14  addic 29, 29, 32
  00dfa18  clrldi 3, 3, 32
  00dfa1c  cmpw 31, 4
  00dfa20  stw 5, 28(3)
  00dfa24  bt 0, 0xdf99c
  00dfa28  lis 18, 163
  00dfa2c  addic 29, 23, 8
  00dfa30  ori 24, 20, 0
  00dfa34  lwz 3, 23744(18)
  00dfa38  cmpwi 3, 0
  00dfa3c  bf 1, 0xdfbe4
  00dfa40  lis 27, 163
  00dfa44  ori 28, 20, 0
  00dfa48  addic 30, 17, 19456
  00dfa4c  addic 27, 27, 21248
  00dfa50  lis 22, 165
  00dfa54  lis 19, 101
  00dfa58  ori 31, 28, 0
  00dfa5c  ori 26, 30, 0
  00dfa60  ori 25, 27, 0
  00dfa64  addic 22, 22, -10272
  00dfa68  addic 19, 19, 9460
  00dfa6c  lwz 3, 0(26)
  00dfa70  cmpwi 3, 0
  00dfa74  bf 2, 0xdfb2c
  00dfa78  lis 5, 165
  00dfa7c  ori 3, 20, 0
  00dfa80  addic 5, 5, -10944
  00dfa84  lis 4, 165
  00dfa88  lwz 4, -9500(4)
  00dfa8c  cmpw 3, 4
  00dfa90  bf 0, 0xdfab4
  00dfa94  lhzx 6, 27, 28
  00dfa98  lwz 7, 0(5)
  00dfa9c  extsh 6, 6
  00dfaa0  cmpw 7, 6
  00dfaa4  bt 2, 0xdfab4
  00dfaa8  addic 5, 5, 4
  00dfaac  addic 3, 3, 1
  00dfab0  b 0xdfa84
  00dfab4  cmpw 3, 4
  00dfab8  bf 0, 0xdfbc0
  00dfabc  std 26, 256(1)
  00dfac0  li 4, -1
  00dfac4  slwi 26, 3, 5
  00dfac8  li 5, 32
  00dfacc  addc 3, 26, 22
  00dfad0  clrldi 3, 3, 32
  00dfad4  bl 0x5001fc
  00dfad8  nop
  00dfadc  lhz 4, 0(29)
  00dfae0  extsw 5, 26
  00dfae4  ori 3, 20, 0
  00dfae8  ld 26, 256(1)
  00dfaec  extsh 6, 4
  00dfaf0  addc 4, 5, 22
  00dfaf4  addc 6, 6, 23
  00dfaf8  clrldi 6, 6, 32
  00dfafc  lhz 5, 2(29)
  00dfb00  cmpwi 1, 3, 15
  00dfb04  extsh 5, 5
  00dfb08  cmpw 3, 5
  00dfb0c  crnand 2, 0, 4
  00dfb10  bt 2, 0xdfbc0
  00dfb14  lwz 5, 0(6)
  00dfb18  addic 3, 3, 1
  00dfb1c  addic 6, 6, 4
  00dfb20  sth 5, 0(4)
  00dfb24  addic 4, 4, 2
  00dfb28  b 0xdfafc
  00dfb2c  lhz 4, 2(29)
  00dfb30  lbz 5, 13(3)
  00dfb34  extsh 4, 4
  00dfb38  cmpw 4, 5
  00dfb3c  bt 2, 0xdfb58
  00dfb40  lhz 4, 0(25)
  00dfb44  ori 3, 19, 0
  00dfb48  extsh 4, 4
  00dfb4c  bl 0x5cd098
  00dfb50  nop
  00dfb54  lwz 3, 0(26)
  00dfb58  lhz 5, 0(29)
  00dfb5c  lbz 3, 13(3)
  00dfb60  ori 4, 20, 0
  00dfb64  cmpwi 3, 0
  00dfb68  extsh 3, 5
  00dfb6c  addc 3, 3, 23
  00dfb70  clrldi 3, 3, 32
  00dfb74  bf 1, 0xdfbc0
  00dfb78  ori 5, 20, 0
  00dfb7c  lwzx 6, 30, 31
  00dfb80  addic 4, 4, 1
  00dfb84  lwz 7, -3068(21)
  00dfb88  lwz 8, 0(3)
  00dfb8c  addic 3, 3, 4
  00dfb90  lwz 6, 40(6)
  00dfb94  addc 9, 6, 5
  00dfb98  addc 6, 6, 5
  00dfb9c  clrldi 9, 9, 32
  00dfba0  clrldi 6, 6, 32
  00dfba4  addic 5, 5, 32
  00dfba8  stw 7, 28(9)
  00dfbac  sth 8, 26(6)
  00dfbb0  lwzx 6, 30, 31
  00dfbb4  lbz 6, 13(6)
  00dfbb8  cmpw 4, 6
  00dfbbc  bt 0, 0xdfb7c
  00dfbc0  addic 24, 24, 1
  00dfbc4  lwz 3, 23744(18)
  00dfbc8  addic 29, 29, 4
  00dfbcc  addic 25, 25, 2
  00dfbd0  cmpw 24, 3
  00dfbd4  addic 28, 28, 2
  00dfbd8  addic 26, 26, 4
  00dfbdc  addic 31, 31, 4
  00dfbe0  bt 0, 0xdfa6c
  00dfbe4  lis 3, 150
  00dfbe8  lis 4, 115
  00dfbec  addic 30, 3, 17776
  00dfbf0  lis 3, 115
  00dfbf4  addic 4, 4, 7244
  00dfbf8  addic 6, 3, 7232
  00dfbfc  addic 26, 15, 63
  00dfc00  lhz 3, 38(30)
  00dfc04  addic 29, 1, 112
  00dfc08  extsh 5, 3
  00dfc0c  rlwinm 26, 26, 0, 0, 25
  00dfc10  sldi 7, 5, 2
  00dfc14  addic 5, 5, 1
  00dfc18  ori 3, 29, 0
  00dfc1c  lwzx 15, 6, 7
  00dfc20  lis 6, 101
  00dfc24  lwzx 31, 4, 7
  00dfc28  extsw 15, 15
  00dfc2c  addic 4, 6, 9508
  00dfc30  extsw 31, 31
  00dfc34  bl 0x5cd2a8
  00dfc38  nop
  00dfc3c  lhz 4, 38(30)
  00dfc40  lis 5, 101
  00dfc44  addic 3, 1, 176
  00dfc48  extsh 6, 4
  00dfc4c  addic 4, 5, 9548
  00dfc50  addic 5, 6, 1
  00dfc54  bl 0x5cd2a8
  00dfc58  nop
  00dfc5c  ori 3, 29, 0
  00dfc60  ori 4, 26, 0
  00dfc64  li 5, -1
  00dfc68  bl 0x503e00
  00dfc6c  nop
  00dfc70  lis 25, 163
  00dfc74  lwz 27, 8(26)
  00dfc78  ori 30, 3, 0
  00dfc7c  addic 25, 25, 21696
  00dfc80  lwz 3, 0(26)
  00dfc84  lwz 28, 4(26)
  00dfc88  extsw 27, 27
  00dfc8c  addc 29, 26, 30
  00dfc90  lbzx 4, 25, 15
  00dfc94  cmpwi 4, 255
  00dfc98  bf 2, 0xdfd34
  00dfc9c  addc 24, 26, 3
  00dfca0  lis 3, 163
  00dfca4  addic 4, 17, 19456
  00dfca8  addic 5, 3, 21248
  00dfcac  lwz 3, 23744(18)
  00dfcb0  clrldi 24, 24, 32
  00dfcb4  slwi 6, 3, 1
  00dfcb8  stbx 3, 25, 15
  00dfcbc  slwi 7, 3, 2
  00dfcc0  extsw 6, 6
  00dfcc4  extsw 3, 7
  00dfcc8  cmpwi 24, 0
  00dfccc  sthx 15, 5, 6
  00dfcd0  stwx 24, 4, 3
  00dfcd4  bf 2, 0xdfcf4
  00dfcd8  ori 3, 15, 0
  00dfcdc  bl 0xfbfa0
  00dfce0  nop
  00dfce4  lwz 3, 23744(18)
  00dfce8  addic 3, 3, 1
  00dfcec  stw 3, 23744(18)
  00dfcf0  b 0xdfd34
  00dfcf4  ori 4, 3, 0
  00dfcf8  lwz 6, 44(24)
  00dfcfc  lis 3, 163
  00dfd00  addic 5, 3, 31632
  00dfd04  ori 3, 15, 0
  00dfd08  stwx 6, 5, 4
  00dfd0c  bl 0xfbfa0
  00dfd10  nop
  00dfd14  lwz 4, 23744(18)
  00dfd18  ori 3, 24, 0
  00dfd1c  li 5, 0
  00dfd20  addic 6, 4, 1
  00dfd24  li 4, 0
  00dfd28  stw 6, 23744(18)
  00dfd2c  ori 6, 15, 0
  00dfd30  bl 0xdbc38
  00dfd34  lbzx 3, 25, 31
  00dfd38  cmpwi 3, 255
  00dfd3c  bf 2, 0xdfdd8
  00dfd40  lis 3, 163
  00dfd44  addc 28, 26, 28
  00dfd48  addic 5, 3, 21248
  00dfd4c  lwz 3, 23744(18)
  00dfd50  addic 4, 17, 19456
  00dfd54  slwi 6, 3, 1
  00dfd58  slwi 7, 3, 2
  00dfd5c  stbx 3, 25, 31
  00dfd60  extsw 6, 6
  00dfd64  extsw 3, 7
  00dfd68  clrldi 28, 28, 32
  00dfd6c  cmpwi 28, 0
  00dfd70  sthx 31, 5, 6
  00dfd74  stwx 28, 4, 3
  00dfd78  bf 2, 0xdfd98
  00dfd7c  ori 3, 31, 0
  00dfd80  bl 0xfbfa0
  00dfd84  nop
  00dfd88  lwz 3, 23744(18)
  00dfd8c  addic 3, 3, 1
  00dfd90  stw 3, 23744(18)
  00dfd94  b 0xdfdd8
  00dfd98  ori 4, 3, 0
  00dfd9c  lwz 6, 44(28)
  00dfda0  lis 3, 163
  00dfda4  addic 5, 3, 31632
  00dfda8  ori 3, 31, 0
  00dfdac  stwx 6, 5, 4
  00dfdb0  bl 0xfbfa0
  00dfdb4  nop
  00dfdb8  lwz 4, 23744(18)
  00dfdbc  ori 3, 28, 0
  00dfdc0  li 5, 0
  00dfdc4  addic 6, 4, 1
  00dfdc8  li 4, 0
  00dfdcc  stw 6, 23744(18)
  00dfdd0  ori 6, 31, 0
  00dfdd4  bl 0xdbc38
  00dfdd8  lis 3, 101
  00dfddc  subc 4, 30, 27
  00dfde0  addc 28, 26, 27
  00dfde4  clrldi 28, 28, 32
  00dfde8  ld 3, 8832(3)
  00dfdec  mulhd 3, 3, 4
  00dfdf0  lwz 4, 4(16)
  00dfdf4  sradi 30, 3, 1
  00dfdf8  ori 3, 4, 0
  00dfdfc  rldicl 5, 30, 1, 63
  00dfe00  li 4, 128
  00dfe04  addc 30, 30, 5
  00dfe08  bl 0x4fe5c8
  00dfe0c  nop
  00dfe10  lwz 3, 4(16)
  00dfe14  li 4, 128
  00dfe18  bl 0x4fe5f4
  00dfe1c  nop
  00dfe20  ori 27, 3, 0
  00dfe24  addic 3, 1, 176
  00dfe28  ori 4, 27, 0
  00dfe2c  li 5, -1
  00dfe30  bl 0x503e00
  00dfe34  nop
  00dfe38  extsw 4, 3
  00dfe3c  lwz 3, 4(16)
  00dfe40  bl 0x4fe6ec
  00dfe44  nop
  00dfe48  lis 3, 144
  00dfe4c  cmpwi 30, 0
  00dfe50  lwz 3, 11932(3)
  00dfe54  lwz 3, 1196(3)
  00dfe58  subc 3, 27, 3
  00dfe5c  bt 2, 0xdfe80
  00dfe60  ori 4, 28, 0
  00dfe64  lwz 5, 0(4)
  00dfe68  addic 30, 30, -1
  00dfe6c  addc 5, 5, 3
  00dfe70  cmpwi 30, 0
  00dfe74  stw 5, 0(4)
  00dfe78  addic 4, 4, 36
  00dfe7c  bt 1, 0xdfe64
  00dfe80  lbzx 3, 25, 15
  00dfe84  addic 17, 17, 19456
  00dfe88  slwi 3, 3, 2
  00dfe8c  ori 15, 20, 0
  00dfe90  lwzx 3, 17, 3
  00dfe94  lwz 3, 0(3)
  00dfe98  lwz 4, 8(3)
  00dfe9c  lwz 3, 0(3)
  00dfea0  cmpwi 3, 0
  00dfea4  bt 2, 0xdfee0
  00dfea8  lbz 5, 12(4)
  00dfeac  stw 28, 0(4)
  00dfeb0  cmpwi 5, 0
  00dfeb4  bf 2, 0xdfed0
  00dfeb8  lwz 5, 8(28)
  00dfebc  clrlwi 5, 5, 30
  00dfec0  stb 5, 12(4)
  00dfec4  lwz 6, 8(28)
  00dfec8  rlwimi 5, 6, 26, 28, 29
  00dfecc  stb 5, 12(4)
  00dfed0  addic 15, 15, 1
  00dfed4  addic 4, 4, 16
  00dfed8  cmplw 15, 3
  00dfedc  bt 0, 0xdfea8
  00dfee0  lbzx 3, 25, 31
  00dfee4  slwi 3, 3, 2
  00dfee8  lwzx 3, 17, 3
  00dfeec  lwz 3, 0(3)
  00dfef0  lwz 31, 8(3)
  00dfef4  lwz 3, 0(3)
  00dfef8  cmpwi 3, 0
  00dfefc  bt 2, 0xdff3c
  00dff00  addic 4, 28, 36
  00dff04  lbz 5, 12(31)
  00dff08  stw 4, 0(31)
  00dff0c  cmpwi 5, 0
  00dff10  bf 2, 0xdff2c
  00dff14  lwz 5, 44(28)
  00dff18  clrlwi 5, 5, 30
  00dff1c  stb 5, 12(31)
  00dff20  lwz 6, 44(28)
  00dff24  rlwimi 5, 6, 26, 28, 29
  00dff28  stb 5, 12(31)
  00dff2c  addic 20, 20, 1
  00dff30  addic 31, 31, 16
  00dff34  cmplw 20, 3
  00dff38  bt 0, 0xdff04
  00dff3c  addic 3, 29, 63
  00dff40  rlwinm 3, 3, 0, 0, 25
  00dff44  stw 3, 24(14)
  00dff48  ld 31, 248(1)
  00dff4c  ld 3, 240(1)
  00dff50  bl 0xdcf58
  00dff54  cmpwi 31, 0
  00dff58  bt 2, 0xdff68
  00dff5c  bl 0x1521d0
  00dff60  nop
  00dff64  b 0xdffac
  00dff68  bl 0x151e0c
  00dff6c  nop
  00dff70  lis 4, 161
  00dff74  li 5, 2
  00dff78  li 3, 0
  00dff7c  addic 4, 4, -812
  00dff80  mtctr 5
  00dff84  stw 3, 0(4)
  00dff88  stw 3, 4(4)
  00dff8c  stw 3, 8(4)
  00dff90  stw 3, 12(4)
  00dff94  stw 3, 16(4)
  00dff98  stw 3, 20(4)
  00dff9c  stw 3, 24(4)
  00dffa0  stw 3, 28(4)
  00dffa4  addic 4, 4, 32
  00dffa8  bdnz 0xdff84
  00dffac  lis 3, 161
  00dffb0  li 31, 0
  00dffb4  addic 3, 3, 23556
  00dffb8  stw 31, 16(3)
  00dffbc  stw 31, 8(3)
  00dffc0  stw 31, 12(3)
  00dffc4  bl 0xfc024
  00dffc8  nop
  00dffcc  lis 4, 161
  00dffd0  ori 3, 31, 0
  00dffd4  lwz 5, 1808(4)
  00dffd8  addic 5, 5, 1
  00dffdc  stw 5, 1808(4)
  00dffe0  ld 0, 432(1)
  00dffe4  mtlr 0
  00dffe8  ld 14, 272(1)
  00dffec  ld 15, 280(1)
  00dfff0  ld 16, 288(1)
  00dfff4  ld 17, 296(1)
  00dfff8  ld 18, 304(1)
  00dfffc  ld 19, 312(1)
  00e0000  ld 20, 320(1)
  00e0004  ld 21, 328(1)
  00e0008  ld 22, 336(1)
  00e000c  ld 23, 344(1)
  00e0010  ld 24, 352(1)
  00e0014  ld 25, 360(1)
  00e0018  ld 26, 368(1)
  00e001c  ld 27, 376(1)
  00e0020  ld 28, 384(1)
  00e0024  ld 29, 392(1)
  00e0028  ld 30, 400(1)
  00e002c  ld 31, 408(1)
  00e0030  addi 1, 1, 416
  00e0034  blr

LoadNpcMobys:   # 0xe0038, 0xd8 bytes
  00e0038  stdu 1, -224(1)
  00e003c  mflr 0
  00e0040  std 0, 240(1)
  00e0044  std 29, 200(1)
  00e0048  std 30, 208(1)
  00e004c  ori 29, 3, 0
  00e0050  li 3, 1
  00e0054  std 31, 216(1)
  00e0058  ori 30, 4, 0
  00e005c  bl 0x174cf4
  00e0060  nop
  00e0064  li 3, 0
  00e0068  bl 0x503078
  00e006c  nop
  00e0070  lis 3, 150
  00e0074  addic 31, 1, 112
  00e0078  lwz 3, 27372(3)
  00e007c  cmpwi 3, 0
  00e0080  bf 2, 0xe00a4
  00e0084  lis 4, 101
  00e0088  ori 3, 31, 0
  00e008c  addic 4, 4, 9592
  00e0090  ori 5, 29, 0
  00e0094  ori 6, 30, 0
  00e0098  bl 0x5cd2a8
  00e009c  nop
  00e00a0  b 0xe00c0
  00e00a4  lis 4, 101
  00e00a8  ori 3, 31, 0
  00e00ac  addic 4, 4, 9648
  00e00b0  ori 5, 29, 0
  00e00b4  ori 6, 30, 0
  00e00b8  bl 0x5cd2a8
  00e00bc  nop
  00e00c0  ori 3, 31, 0
  00e00c4  li 4, 0
  00e00c8  bl 0x502dcc
  00e00cc  nop
  00e00d0  ori 31, 3, 0
  00e00d4  cmpwi 31, 0
  00e00d8  bf 0, 0xe00e4
  00e00dc  li 3, 0
  00e00e0  b 0xe00f4
  00e00e4  ori 3, 31, 0
  00e00e8  bl 0x502ddc
  00e00ec  nop
  00e00f0  li 3, 1
  00e00f4  ld 0, 240(1)
  00e00f8  mtlr 0
  00e00fc  ld 29, 200(1)
  00e0100  ld 30, 208(1)
  00e0104  ld 31, 216(1)
  00e0108  addi 1, 1, 224
  00e010c  blr

LoadNpcSubtitles:   # 0xe0110, 0x8 bytes
  00e0110  li 3, 1
  00e0114  blr

PreLoadNpcChunk:   # 0xe0118, 0x10c bytes
  00e0118  stdu 1, -192(1)
  00e011c  mflr 0
  00e0120  std 0, 208(1)
  00e0124  lis 4, 161
  00e0128  lis 7, 150
  00e012c  addic 6, 4, 2264
  00e0130  lis 4, 150
  00e0134  lis 5, 8
  00e0138  std 31, 184(1)
  00e013c  addic 4, 4, -12976
  00e0140  addic 31, 1, 112
  00e0144  lwz 6, 64(6)
  00e0148  addc 5, 6, 5
  00e014c  std 30, 176(1)
  00e0150  lwz 6, 27368(7)
  00e0154  clrldi 30, 5, 32
  00e0158  cmpwi 6, 0
  00e015c  stw 5, 92(4)
  00e0160  bt 2, 0xe0194
  00e0164  ori 7, 3, 0
  00e0168  lis 3, 151
  00e016c  lwz 8, 48(4)
  00e0170  lis 5, 101
  00e0174  addic 4, 5, 9700
  00e0178  lwz 6, -25488(3)
  00e017c  ori 3, 31, 0
  00e0180  extsw 5, 6
  00e0184  extsw 6, 8
  00e0188  bl 0x5cd2a8
  00e018c  nop
  00e0190  b 0xe01c0
  00e0194  ori 7, 3, 0
  00e0198  lis 3, 151
  00e019c  lwz 8, 48(4)
  00e01a0  lis 5, 101
  00e01a4  addic 4, 5, 9748
  00e01a8  lwz 6, -25488(3)
  00e01ac  ori 3, 31, 0
  00e01b0  extsw 5, 6
  00e01b4  extsw 6, 8
  00e01b8  bl 0x5cd2a8
  00e01bc  nop
  00e01c0  ori 3, 31, 0
  00e01c4  bl 0x504178
  00e01c8  nop
  00e01cc  cmpdi 3, 0
  00e01d0  bt 2, 0xe0208
  00e01d4  lis 3, 114
  00e01d8  lwz 3, 18416(3)
  00e01dc  cmpwi 3, 0
  00e01e0  bt 2, 0xe01ec
  00e01e4  bl 0x5040f4
  00e01e8  nop
  00e01ec  ori 4, 30, 0
  00e01f0  ori 3, 31, 0
  00e01f4  lis 5, 8
  00e01f8  bl 0x503f8c
  00e01fc  nop
  00e0200  lis 4, 114
  00e0204  stw 3, 18416(4)
  00e0208  li 3, 1
  00e020c  ld 0, 208(1)
  00e0210  mtlr 0
  00e0214  ld 30, 176(1)
  00e0218  ld 31, 184(1)
  00e021c  addi 1, 1, 192
  00e0220  blr

ParseNpcChunk:   # 0xe0230, 0x2f8 bytes
  00e0230  stdu 1, -240(1)
  00e0234  mflr 0
  00e0238  std 0, 256(1)
  00e023c  lis 3, 114
  00e0240  lwz 3, 18416(3)
  00e0244  std 31, 232(1)
  00e0248  std 30, 224(1)
  00e024c  std 29, 216(1)
  00e0250  std 28, 208(1)
  00e0254  std 27, 200(1)
  00e0258  std 26, 192(1)
  00e025c  std 25, 184(1)
  00e0260  std 24, 176(1)
  00e0264  std 23, 168(1)
  00e0268  std 22, 160(1)
  00e026c  std 21, 152(1)
  00e0270  std 20, 144(1)
  00e0274  std 19, 136(1)
  00e0278  std 18, 128(1)
  00e027c  std 17, 120(1)
  00e0280  std 16, 112(1)
  00e0284  cmpwi 3, 0
  00e0288  bt 2, 0xe02a0
  00e028c  bl 0x5040f4
  00e0290  nop
  00e0294  lis 3, 114
  00e0298  li 4, 0
  00e029c  stw 4, 18416(3)
  00e02a0  lis 3, 161
  00e02a4  lis 23, 150
  00e02a8  addic 30, 3, 2264
  00e02ac  addic 23, 23, -12976
  00e02b0  lis 5, 8
  00e02b4  lwz 3, 64(30)
  00e02b8  lwz 4, 92(23)
  00e02bc  bl 0x5002cc
  00e02c0  nop
  00e02c4  li 31, 0
  00e02c8  lwz 30, 64(30)
  00e02cc  li 3, 1024
  00e02d0  li 4, 0
  00e02d4  addic 29, 30, 20
  00e02d8  stw 31, 56(23)
  00e02dc  lwz 5, 4(30)
  00e02e0  lwz 6, 0(30)
  00e02e4  extsw 7, 5
  00e02e8  addc 5, 30, 5
  00e02ec  lwz 8, 12(30)
  00e02f0  subc 3, 7, 3
  00e02f4  lwz 9, 16(30)
  00e02f8  subc 4, 4, 5
  00e02fc  lwz 7, 8(30)
  00e0300  sradi 3, 3, 63
  00e0304  sth 6, 64(23)
  00e0308  addc 6, 30, 9
  00e030c  sth 7, 70(23)
  00e0310  and 3, 3, 4
  00e0314  sth 8, 68(23)
  00e0318  extsh 7, 8
  00e031c  addc 3, 5, 3
  00e0320  cmpwi 7, 0
  00e0324  stw 6, 84(23)
  00e0328  stw 3, 76(23)
  00e032c  bf 1, 0xe04d8
  00e0330  lis 22, 115
  00e0334  lis 18, 101
  00e0338  lis 17, 151
  00e033c  lis 21, 150
  00e0340  lis 20, 163
  00e0344  lis 19, 101
  00e0348  ori 28, 31, 0
  00e034c  addic 18, 18, 9840
  00e0350  addic 22, 22, 7232
  00e0354  addic 21, 21, 17776
  00e0358  addic 17, 17, -25376
  00e035c  ori 16, 23, 0
  00e0360  addic 20, 20, 21696
  00e0364  addic 19, 19, 9792
  00e0368  lwz 4, 0(29)
  00e036c  lis 3, 161
  00e0370  addic 29, 29, 4
  00e0374  addc 24, 4, 30
  00e0378  clrldi 24, 24, 32
  00e037c  lwz 3, 1800(3)
  00e0380  cmpwi 3, 6
  00e0384  lwz 27, 0(24)
  00e0388  lwz 26, 12(24)
  00e038c  extsw 27, 27
  00e0390  addc 26, 26, 30
  00e0394  bf 2, 0xe03bc
  00e0398  cmpwi 1, 27, 533
  00e039c  cmpwi 28, 0
  00e03a0  crnand 2, 2, 6
  00e03a4  bt 2, 0xe03bc
  00e03a8  lhz 3, 38(21)
  00e03ac  extsh 3, 3
  00e03b0  sldi 3, 3, 2
  00e03b4  lwzx 27, 22, 3
  00e03b8  extsw 27, 27
  00e03bc  lbzx 3, 20, 27
  00e03c0  addic 25, 24, 16
  00e03c4  cmpwi 3, 255
  00e03c8  bf 2, 0xe03e0
  00e03cc  ori 3, 19, 0
  00e03d0  ori 4, 27, 0
  00e03d4  bl 0x5cd098
  00e03d8  nop
  00e03dc  b 0xe04c0
  00e03e0  lwz 3, 376(16)
  00e03e4  cmpwi 3, 0
  00e03e8  bf 2, 0xe0470
  00e03ec  ori 3, 27, 0
  00e03f0  bl 0xefa28
  00e03f4  nop
  00e03f8  lwz 4, 36(3)
  00e03fc  cmpwi 4, 0
  00e0400  bf 2, 0xe0418
  00e0404  ori 3, 18, 0
  00e0408  ori 4, 27, 0
  00e040c  bl 0x5cd098
  00e0410  nop
  00e0414  b 0xe04c0
  00e0418  lbz 8, 12(4)
  00e041c  li 5, 511
  00e0420  li 7, 255
  00e0424  addic 9, 8, 1
  00e0428  lis 6, 14
  00e042c  addi 6, 6, 552
  00e0430  stb 9, 12(4)
  00e0434  lhz 4, 52(3)
  00e0438  stb 8, 82(3)
  00e043c  ori 4, 4, 6
  00e0440  stb 8, 83(3)
  00e0444  sth 5, 50(3)
  00e0448  stb 7, 114(3)
  00e044c  stw 31, 148(3)
  00e0450  sth 4, 52(3)
  00e0454  lwz 5, 8320(17)
  00e0458  ld 4, 0(6)
  00e045c  cmpwi 5, 0
  00e0460  bt 2, 0xe0468
  00e0464  ld 4, 56(5)
  00e0468  std 4, 56(3)
  00e046c  stw 3, 376(16)
  00e0470  lbz 4, 82(3)
  00e0474  lwz 5, 36(3)
  00e0478  slwi 4, 4, 2
  00e047c  stw 26, 120(3)
  00e0480  addc 3, 5, 4
  00e0484  clrldi 3, 3, 32
  00e0488  stw 25, 72(3)
  00e048c  lbz 3, 32(24)
  00e0490  cmpwi 3, 0
  00e0494  bf 1, 0xe04c0
  00e0498  ori 4, 24, 0
  00e049c  ori 3, 31, 0
  00e04a0  lwz 5, 44(4)
  00e04a4  addic 3, 3, 1
  00e04a8  addc 5, 5, 25
  00e04ac  stw 5, 44(4)
  00e04b0  lbz 5, 32(24)
  00e04b4  addic 4, 4, 4
  00e04b8  cmpw 3, 5
  00e04bc  bt 0, 0xe04a0
  00e04c0  lhz 3, 68(23)
  00e04c4  addic 28, 28, 1
  00e04c8  addic 16, 16, 4
  00e04cc  extsh 3, 3
  00e04d0  cmpw 28, 3
  00e04d4  bt 0, 0xe0368
  00e04d8  ld 0, 256(1)
  00e04dc  mtlr 0
  00e04e0  ld 16, 112(1)
  00e04e4  ld 17, 120(1)
  00e04e8  ld 18, 128(1)
  00e04ec  ld 19, 136(1)
  00e04f0  ld 20, 144(1)
  00e04f4  ld 21, 152(1)
  00e04f8  ld 22, 160(1)
  00e04fc  ld 23, 168(1)
  00e0500  ld 24, 176(1)
  00e0504  ld 25, 184(1)
  00e0508  ld 26, 192(1)
  00e050c  ld 27, 200(1)
  00e0510  ld 28, 208(1)
  00e0514  ld 29, 216(1)
  00e0518  ld 30, 224(1)
  00e051c  ld 31, 232(1)
  00e0520  addi 1, 1, 240
  00e0524  blr

LoadWeaponCutscene:   # 0xe0528, 0x12c bytes
  00e0528  stdu 1, -192(1)
  00e052c  mflr 0
  00e0530  std 0, 208(1)
  00e0534  std 31, 184(1)
  00e0538  ori 31, 3, 0
  00e053c  std 30, 176(1)
  00e0540  li 3, 4
  00e0544  bl 0x6dad0
  00e0548  nop
  00e054c  lis 3, 150
  00e0550  lwz 3, 27372(3)
  00e0554  cmpwi 3, 0
  00e0558  bf 2, 0xe05c4
  00e055c  lis 3, 150
  00e0560  addic 30, 1, 112
  00e0564  lwz 3, 27368(3)
  00e0568  cmpwi 3, 0
  00e056c  bt 2, 0xe058c
  00e0570  lis 4, 101
  00e0574  ori 3, 30, 0
  00e0578  addic 4, 4, 9900
  00e057c  ori 5, 31, 0
  00e0580  bl 0x5cd2a8
  00e0584  nop
  00e0588  b 0xe05a4
  00e058c  lis 4, 101
  00e0590  ori 3, 30, 0
  00e0594  addic 4, 4, 9940
  00e0598  ori 5, 31, 0
  00e059c  bl 0x5cd2a8
  00e05a0  nop
  00e05a4  lis 3, 150
  00e05a8  li 5, -1
  00e05ac  addic 4, 3, -12976
  00e05b0  ori 3, 30, 0
  00e05b4  lwz 4, 92(4)
  00e05b8  bl 0x503e00
  00e05bc  nop
  00e05c0  b 0xe05e0
  00e05c4  lis 3, 150
  00e05c8  lis 4, 101
  00e05cc  addic 3, 3, -12976
  00e05d0  addic 4, 4, 9972
  00e05d4  lwz 3, 92(3)
  00e05d8  bl 0x5034c4
  00e05dc  nop
  00e05e0  li 3, 0
  00e05e4  bl 0x11dbcc
  00e05e8  nop
  00e05ec  li 3, 1
  00e05f0  bl 0x11dbcc
  00e05f4  nop
  00e05f8  lis 6, 150
  00e05fc  li 4, 0
  00e0600  addic 6, 6, -12976
  00e0604  addic 3, 6, 96
  00e0608  lwz 5, 92(6)
  00e060c  lwz 7, 4(5)
  00e0610  cmpwi 7, 0
  00e0614  bt 2, 0xe063c
  00e0618  lwz 7, 92(6)
  00e061c  addic 4, 4, 1
  00e0620  lwz 8, 0(5)
  00e0624  cmpwi 4, 70
  00e0628  addc 7, 7, 8
  00e062c  addic 5, 5, 8
  00e0630  stw 7, 0(3)
  00e0634  addic 3, 3, 4
  00e0638  bt 0, 0xe060c
  00e063c  ld 0, 208(1)
  00e0640  mtlr 0
  00e0644  ld 30, 176(1)
  00e0648  ld 31, 184(1)
  00e064c  addi 1, 1, 192
  00e0650  blr

ParseWeaponSceneChunk:   # 0xe0654, 0x5c bytes
  00e0654  stdu 1, -128(1)
  00e0658  mflr 0
  00e065c  std 0, 144(1)
  00e0660  lis 4, 150
  00e0664  std 31, 120(1)
  00e0668  sldi 3, 3, 2
  00e066c  addic 31, 4, -12976
  00e0670  extsw 3, 3
  00e0674  addc 3, 31, 3
  00e0678  lwz 3, 96(3)
  00e067c  stw 3, 92(31)
  00e0680  bl 0xe0230
  00e0684  lis 3, 161
  00e0688  lis 4, 4
  00e068c  addic 3, 3, 2264
  00e0690  lwz 3, 64(3)
  00e0694  addc 3, 3, 4
  00e0698  stw 3, 92(31)
  00e069c  ld 0, 144(1)
  00e06a0  mtlr 0
  00e06a4  ld 31, 120(1)
  00e06a8  addi 1, 1, 128
  00e06ac  blr

LoadSpaceScene:   # 0xe06b0, 0x148 bytes
  00e06b0  stdu 1, -208(1)
  00e06b4  mflr 0
  00e06b8  std 0, 224(1)
  00e06bc  std 30, 192(1)
  00e06c0  cmpwi 4, 0
  00e06c4  std 31, 200(1)
  00e06c8  ori 30, 3, 0
  00e06cc  std 29, 184(1)
  00e06d0  ori 31, 4, 0
  00e06d4  bt 2, 0xe06e4
  00e06d8  ori 3, 31, 0
  00e06dc  bl 0x6dad0
  00e06e0  nop
  00e06e4  lis 3, 150
  00e06e8  lwz 3, 27372(3)
  00e06ec  cmpwi 3, 0
  00e06f0  bf 2, 0xe075c
  00e06f4  lis 3, 150
  00e06f8  addic 29, 1, 112
  00e06fc  lwz 3, 27368(3)
  00e0700  cmpwi 3, 0
  00e0704  bt 2, 0xe0724
  00e0708  lis 4, 101
  00e070c  ori 3, 29, 0
  00e0710  addic 4, 4, 9992
  00e0714  ori 5, 30, 0
  00e0718  bl 0x5cd2a8
  00e071c  nop
  00e0720  b 0xe073c
  00e0724  lis 4, 101
  00e0728  ori 3, 29, 0
  00e072c  addic 4, 4, 10032
  00e0730  ori 5, 30, 0
  00e0734  bl 0x5cd2a8
  00e0738  nop
  00e073c  lis 3, 150
  00e0740  li 5, -1
  00e0744  addic 4, 3, -12976
  00e0748  ori 3, 29, 0
  00e074c  lwz 4, 92(4)
  00e0750  bl 0x503e00
  00e0754  nop
  00e0758  b 0xe0778
  00e075c  lis 3, 150
  00e0760  lis 4, 101
  00e0764  addic 3, 3, -12976
  00e0768  addic 4, 4, 10064
  00e076c  lwz 3, 92(3)
  00e0770  bl 0x5034c4
  00e0774  nop
  00e0778  cmpwi 31, 0
  00e077c  bt 2, 0xe078c
  00e0780  li 3, 0
  00e0784  bl 0x11dbcc
  00e0788  nop
  00e078c  li 3, 1
  00e0790  bl 0x11dbcc
  00e0794  nop
  00e0798  lis 6, 150
  00e079c  li 4, 0
  00e07a0  addic 6, 6, -12976
  00e07a4  addic 3, 6, 96
  00e07a8  lwz 5, 92(6)
  00e07ac  lwz 7, 4(5)
  00e07b0  cmpwi 7, 0
  00e07b4  bt 2, 0xe07dc
  00e07b8  lwz 7, 92(6)
  00e07bc  lwz 8, 0(5)
  00e07c0  addic 4, 4, 1
  00e07c4  addic 5, 5, 8
  00e07c8  addc 7, 7, 8
  00e07cc  cmpwi 4, 70
  00e07d0  stw 7, 0(3)
  00e07d4  addic 3, 3, 4
  00e07d8  bt 0, 0xe07ac
  00e07dc  ld 0, 224(1)
  00e07e0  mtlr 0
  00e07e4  ld 29, 184(1)
  00e07e8  ld 30, 192(1)
  00e07ec  ld 31, 200(1)
  00e07f0  addi 1, 1, 208
  00e07f4  blr

ParseSpaceSceneChunk:   # 0xe07f8, 0x5c bytes
  00e07f8  stdu 1, -128(1)
  00e07fc  mflr 0
  00e0800  std 0, 144(1)
  00e0804  lis 4, 150
  00e0808  std 31, 120(1)
  00e080c  sldi 3, 3, 2
  00e0810  addic 31, 4, -12976
  00e0814  extsw 3, 3
  00e0818  addc 3, 31, 3
  00e081c  lwz 3, 96(3)
  00e0820  stw 3, 92(31)
  00e0824  bl 0xe0230
  00e0828  lis 3, 161
  00e082c  lis 4, 4
  00e0830  addic 3, 3, 2264
  00e0834  lwz 3, 64(3)
  00e0838  addc 3, 3, 4
  00e083c  stw 3, 92(31)
  00e0840  ld 0, 144(1)
  00e0844  mtlr 0
  00e0848  ld 31, 120(1)
  00e084c  addi 1, 1, 128
  00e0850  blr

LoadGadgetModel:   # 0xe0854, 0x1d8 bytes
  00e0854  stdu 1, -160(1)
  00e0858  mflr 0
  00e085c  std 0, 176(1)
  00e0860  std 31, 152(1)
  00e0864  std 30, 144(1)
  00e0868  lis 31, 165
  00e086c  ori 30, 3, 0
  00e0870  cmpwi 1, 4, -1
  00e0874  lwz 3, -9496(31)
  00e0878  std 29, 136(1)
  00e087c  std 28, 128(1)
  00e0880  std 27, 120(1)
  00e0884  cmpwi 3, 0
  00e0888  bt 0, 0xe08a8
  00e088c  lis 5, 165
  00e0890  slwi 3, 3, 2
  00e0894  addic 5, 5, -10944
  00e0898  extsw 3, 3
  00e089c  lwzx 3, 5, 3
  00e08a0  cmpw 3, 30
  00e08a4  bt 2, 0xe0a08
  00e08a8  lis 6, 165
  00e08ac  li 29, 0
  00e08b0  ori 5, 29, 0
  00e08b4  lwz 6, -9500(6)
  00e08b8  stw 29, -9496(31)
  00e08bc  cmpwi 6, 0
  00e08c0  bf 1, 0xe08f4
  00e08c4  lis 3, 165
  00e08c8  addic 3, 3, -10944
  00e08cc  lwz 7, 0(3)
  00e08d0  ori 29, 5, 0
  00e08d4  cmpw 7, 30
  00e08d8  bt 2, 0xe08f4
  00e08dc  addic 29, 5, 1
  00e08e0  addic 3, 3, 4
  00e08e4  ori 5, 29, 0
  00e08e8  cmpw 5, 6
  00e08ec  stw 29, -9496(31)
  00e08f0  bt 0, 0xe08cc
  00e08f4  ori 5, 4, 0
  00e08f8  bf 6, 0xe090c
  00e08fc  lis 3, 165
  00e0900  lwz 3, -9492(3)
  00e0904  cntlzw 5, 3
  00e0908  rlwinm 5, 5, 27, 31, 31
  00e090c  cntlzw 3, 5
  00e0910  lis 4, 161
  00e0914  rlwinm 3, 3, 27, 31, 31
  00e0918  addic 4, 4, 2264
  00e091c  lis 6, 165
  00e0920  sldi 5, 3, 16
  00e0924  lis 8, 163
  00e0928  subfic 7, 5, 0
  00e092c  lwz 4, 16(4)
  00e0930  sldi 5, 5, 2
  00e0934  stw 3, -9492(6)
  00e0938  ori 28, 30, 0
  00e093c  addc 3, 7, 5
  00e0940  addic 5, 8, 21696
  00e0944  lis 9, 165
  00e0948  slwi 10, 29, 2
  00e094c  addc 3, 4, 3
  00e0950  lis 6, 165
  00e0954  addic 4, 9, -10848
  00e0958  extsw 7, 10
  00e095c  lbzx 30, 5, 28
  00e0960  addic 5, 6, -10752
  00e0964  clrldi 27, 3, 32
  00e0968  ori 3, 27, 0
  00e096c  lwzx 4, 4, 7
  00e0970  lwzx 5, 5, 7
  00e0974  bl 0x5c5ad0
  00e0978  nop
  00e097c  lis 29, 163
  00e0980  slwi 30, 30, 2
  00e0984  addic 29, 29, 19456
  00e0988  ori 3, 27, 0
  00e098c  li 4, 0
  00e0990  li 5, 0
  00e0994  ori 6, 28, 0
  00e0998  stwx 27, 29, 30
  00e099c  bl 0xdbc38
  00e09a0  li 4, 0
  00e09a4  lis 3, 165
  00e09a8  ori 5, 4, 0
  00e09ac  addic 3, 3, -10272
  00e09b0  lwz 6, -9496(31)
  00e09b4  slwi 6, 6, 5
  00e09b8  extsw 6, 6
  00e09bc  lhzx 6, 6, 3
  00e09c0  extsh 7, 6
  00e09c4  cmpwi 7, 0
  00e09c8  bt 0, 0xe09f4
  00e09cc  lis 7, 165
  00e09d0  lwzx 8, 29, 30
  00e09d4  lwz 7, -9504(7)
  00e09d8  lwz 8, 40(8)
  00e09dc  addc 9, 8, 4
  00e09e0  addc 8, 8, 4
  00e09e4  clrldi 9, 9, 32
  00e09e8  clrldi 8, 8, 32
  00e09ec  sth 6, 26(9)
  00e09f0  stw 7, 28(8)
  00e09f4  addic 5, 5, 1
  00e09f8  addic 3, 3, 2
  00e09fc  cmpwi 5, 16
  00e0a00  addic 4, 4, 32
  00e0a04  bt 0, 0xe09b0
  00e0a08  ld 0, 176(1)
  00e0a0c  mtlr 0
  00e0a10  ld 27, 120(1)
  00e0a14  ld 28, 128(1)
  00e0a18  ld 29, 136(1)
  00e0a1c  ld 30, 144(1)
  00e0a20  ld 31, 152(1)
  00e0a24  addi 1, 1, 160
  00e0a28  blr

QueuePifLoad:   # 0xe0a2c, 0x170 bytes
  00e0a2c  stdu 1, -192(1)
  00e0a30  mflr 0
  00e0a34  std 0, 208(1)
  00e0a38  std 31, 184(1)
  00e0a3c  ori 31, 3, 0
  00e0a40  lwz 3, 8(31)
  00e0a44  std 30, 176(1)
  00e0a48  std 29, 168(1)
  00e0a4c  std 28, 160(1)
  00e0a50  std 27, 152(1)
  00e0a54  std 26, 144(1)
  00e0a58  extsw 3, 3
  00e0a5c  bl 0x500178
  00e0a60  nop
  00e0a64  lwz 4, 12(31)
  00e0a68  ori 26, 3, 0
  00e0a6c  extsw 3, 4
  00e0a70  bl 0x500178
  00e0a74  nop
  00e0a78  lis 4, 150
  00e0a7c  ori 27, 3, 0
  00e0a80  addic 3, 26, -6
  00e0a84  li 6, 0
  00e0a88  extsw 7, 3
  00e0a8c  addc 5, 26, 27
  00e0a90  lwz 29, 27344(4)
  00e0a94  li 8, 1
  00e0a98  li 9, 0
  00e0a9c  subc 6, 7, 6
  00e0aa0  addic 10, 29, 1024
  00e0aa4  slw 5, 8, 5
  00e0aa8  subc 9, 9, 3
  00e0aac  sradi 6, 6, 63
  00e0ab0  addc 5, 10, 5
  00e0ab4  and 6, 6, 9
  00e0ab8  li 7, 18
  00e0abc  li 9, 0
  00e0ac0  srawi 30, 10, 8
  00e0ac4  stw 5, 27344(4)
  00e0ac8  li 10, 4
  00e0acc  addc 3, 3, 6
  00e0ad0  std 7, 112(1)
  00e0ad4  std 9, 120(1)
  00e0ad8  srawi 29, 29, 8
  00e0adc  slw 4, 8, 3
  00e0ae0  std 9, 128(1)
  00e0ae4  li 5, 19
  00e0ae8  std 10, 136(1)
  00e0aec  ori 28, 31, 0
  00e0af0  ori 3, 30, 0
  00e0af4  extsw 4, 4
  00e0af8  ori 6, 26, 0
  00e0afc  ori 7, 27, 0
  00e0b00  li 8, 1
  00e0b04  li 9, 0
  00e0b08  ori 10, 29, 0
  00e0b0c  bl 0x502fbc
  00e0b10  nop
  00e0b14  lis 5, 150
  00e0b18  ori 4, 3, 0
  00e0b1c  lwz 3, -10548(5)
  00e0b20  cmpwi 3, 64
  00e0b24  bf 0, 0xe0b70
  00e0b28  lis 5, 150
  00e0b2c  slwi 6, 3, 4
  00e0b30  addic 5, 5, -11572
  00e0b34  extsw 6, 6
  00e0b38  addic 8, 31, 32
  00e0b3c  addc 10, 5, 6
  00e0b40  li 7, 18
  00e0b44  addic 9, 28, 1056
  00e0b48  stwx 8, 5, 6
  00e0b4c  lis 11, 150
  00e0b50  sth 7, 4(10)
  00e0b54  sth 29, 6(10)
  00e0b58  addic 3, 3, 1
  00e0b5c  stw 9, 8(10)
  00e0b60  stb 26, 12(10)
  00e0b64  stb 27, 13(10)
  00e0b68  sth 30, 14(10)
  00e0b6c  stw 3, -10548(11)
  00e0b70  ori 3, 4, 0
  00e0b74  ld 0, 208(1)
  00e0b78  mtlr 0
  00e0b7c  ld 26, 144(1)
  00e0b80  ld 27, 152(1)
  00e0b84  ld 28, 160(1)
  00e0b88  ld 29, 168(1)
  00e0b8c  ld 30, 176(1)
  00e0b90  ld 31, 184(1)
  00e0b94  addi 1, 1, 192
  00e0b98  blr

QueuePifLoad:   # 0xe0b9c, 0x148 bytes
  00e0b9c  stdu 1, -192(1)
  00e0ba0  mflr 0
  00e0ba4  std 0, 208(1)
  00e0ba8  std 30, 176(1)
  00e0bac  ori 30, 3, 0
  00e0bb0  lis 3, 150
  00e0bb4  std 29, 168(1)
  00e0bb8  addic 7, 30, -6
  00e0bbc  ori 29, 4, 0
  00e0bc0  li 4, 0
  00e0bc4  extsw 10, 7
  00e0bc8  li 9, 0
  00e0bcc  std 26, 144(1)
  00e0bd0  subc 4, 10, 4
  00e0bd4  lwz 26, 27344(3)
  00e0bd8  addc 8, 30, 29
  00e0bdc  li 11, 1
  00e0be0  subc 9, 9, 7
  00e0be4  sradi 4, 4, 63
  00e0be8  addic 12, 26, 1024
  00e0bec  slw 8, 11, 8
  00e0bf0  std 31, 184(1)
  00e0bf4  and 4, 4, 9
  00e0bf8  ori 31, 5, 0
  00e0bfc  addc 5, 12, 8
  00e0c00  addc 4, 7, 4
  00e0c04  li 7, 18
  00e0c08  li 9, 0
  00e0c0c  stw 5, 27344(3)
  00e0c10  std 27, 152(1)
  00e0c14  li 10, 4
  00e0c18  srawi 26, 26, 8
  00e0c1c  std 7, 112(1)
  00e0c20  std 9, 120(1)
  00e0c24  std 28, 160(1)
  00e0c28  srawi 27, 12, 8
  00e0c2c  slw 4, 11, 4
  00e0c30  std 9, 128(1)
  00e0c34  ori 28, 6, 0
  00e0c38  std 10, 136(1)
  00e0c3c  li 5, 19
  00e0c40  ori 3, 27, 0
  00e0c44  extsw 4, 4
  00e0c48  ori 6, 30, 0
  00e0c4c  ori 7, 29, 0
  00e0c50  li 8, 1
  00e0c54  li 9, 0
  00e0c58  ori 10, 26, 0
  00e0c5c  bl 0x502fbc
  00e0c60  nop
  00e0c64  lis 5, 150
  00e0c68  ori 4, 3, 0
  00e0c6c  lwz 3, -10548(5)
  00e0c70  cmpwi 3, 64
  00e0c74  bf 0, 0xe0cb8
  00e0c78  lis 5, 150
  00e0c7c  slwi 6, 3, 4
  00e0c80  addic 5, 5, -11572
  00e0c84  extsw 6, 6
  00e0c88  lis 8, 150
  00e0c8c  addic 3, 3, 1
  00e0c90  addc 9, 5, 6
  00e0c94  li 7, 18
  00e0c98  stwx 31, 5, 6
  00e0c9c  stw 3, -10548(8)
  00e0ca0  sth 7, 4(9)
  00e0ca4  sth 26, 6(9)
  00e0ca8  stw 28, 8(9)
  00e0cac  stb 30, 12(9)
  00e0cb0  stb 29, 13(9)
  00e0cb4  sth 27, 14(9)
  00e0cb8  ori 3, 4, 0
  00e0cbc  ld 0, 208(1)
  00e0cc0  mtlr 0
  00e0cc4  ld 26, 144(1)
  00e0cc8  ld 27, 152(1)
  00e0ccc  ld 28, 160(1)
  00e0cd0  ld 29, 168(1)
  00e0cd4  ld 30, 176(1)
  00e0cd8  ld 31, 184(1)
  00e0cdc  addi 1, 1, 192
  00e0ce0  blr

QueuePifLoad:   # 0xe0ce4, 0x12c bytes
  00e0ce4  stdu 1, -192(1)
  00e0ce8  mflr 0
  00e0cec  std 0, 208(1)
  00e0cf0  std 28, 160(1)
  00e0cf4  ori 28, 3, 0
  00e0cf8  li 9, 0
  00e0cfc  addic 3, 28, -6
  00e0d00  li 11, 0
  00e0d04  std 29, 168(1)
  00e0d08  extsw 10, 3
  00e0d0c  ori 29, 4, 0
  00e0d10  subc 9, 10, 9
  00e0d14  subc 10, 11, 3
  00e0d18  sradi 9, 9, 63
  00e0d1c  li 11, 1
  00e0d20  and 4, 9, 10
  00e0d24  li 9, 18
  00e0d28  addc 4, 3, 4
  00e0d2c  li 10, 0
  00e0d30  std 30, 176(1)
  00e0d34  slw 4, 11, 4
  00e0d38  li 11, 4
  00e0d3c  std 9, 112(1)
  00e0d40  std 26, 144(1)
  00e0d44  ori 30, 5, 0
  00e0d48  std 31, 184(1)
  00e0d4c  std 27, 152(1)
  00e0d50  srawi 26, 8, 8
  00e0d54  srawi 27, 7, 8
  00e0d58  std 10, 120(1)
  00e0d5c  ori 31, 6, 0
  00e0d60  std 10, 128(1)
  00e0d64  li 5, 19
  00e0d68  std 11, 136(1)
  00e0d6c  ori 3, 26, 0
  00e0d70  ori 6, 28, 0
  00e0d74  extsw 4, 4
  00e0d78  ori 7, 29, 0
  00e0d7c  li 8, 1
  00e0d80  li 9, 0
  00e0d84  ori 10, 27, 0
  00e0d88  bl 0x502fbc
  00e0d8c  nop
  00e0d90  lis 5, 150
  00e0d94  ori 4, 3, 0
  00e0d98  lwz 3, -10548(5)
  00e0d9c  cmpwi 3, 64
  00e0da0  bf 0, 0xe0de4
  00e0da4  lis 5, 150
  00e0da8  slwi 6, 3, 4
  00e0dac  addic 5, 5, -11572
  00e0db0  extsw 6, 6
  00e0db4  li 7, 18
  00e0db8  addc 9, 5, 6
  00e0dbc  lis 8, 150
  00e0dc0  addic 3, 3, 1
  00e0dc4  stwx 30, 5, 6
  00e0dc8  sth 7, 4(9)
  00e0dcc  sth 27, 6(9)
  00e0dd0  stw 31, 8(9)
  00e0dd4  stb 28, 12(9)
  00e0dd8  stb 29, 13(9)
  00e0ddc  sth 26, 14(9)
  00e0de0  stw 3, -10548(8)
  00e0de4  ori 3, 4, 0
  00e0de8  ld 0, 208(1)
  00e0dec  mtlr 0
  00e0df0  ld 26, 144(1)
  00e0df4  ld 27, 152(1)
  00e0df8  ld 28, 160(1)
  00e0dfc  ld 29, 168(1)
  00e0e00  ld 30, 176(1)
  00e0e04  ld 31, 184(1)
  00e0e08  addi 1, 1, 192
  00e0e0c  blr

STUB_000e0e10:   # 0xe0e10, 0x4 bytes
  00e0e10  blr

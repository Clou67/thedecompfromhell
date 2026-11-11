# sdk/vUnk2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

vsnprintf:   # 0x5cd5c4, 0x6c4 bytes
  05cd5c4  stdu 1, -352(1)
  05cd5c8  mflr 0
  05cd5cc  std 25, 296(1)
  05cd5d0  addi 25, 1, 116
  05cd5d4  std 27, 312(1)
  05cd5d8  std 28, 320(1)
  05cd5dc  std 29, 328(1)
  05cd5e0  li 28, 0
  05cd5e4  mr 29, 3
  05cd5e8  mr 27, 4
  05cd5ec  mr 3, 25
  05cd5f0  mr 4, 6
  05cd5f4  std 26, 304(1)
  05cd5f8  std 30, 336(1)
  05cd5fc  addi 26, 1, 120
  05cd600  addi 30, 1, 112
  05cd604  std 31, 344(1)
  05cd608  std 0, 368(1)
  05cd60c  mr 31, 5
  05cd610  stw 28, 120(1)
  05cd614  sth 28, 124(1)
  05cd618  sth 28, 126(1)
  05cd61c  bl 0x5cc0a8
  05cd620  nop
  05cd624  stw 29, 224(1)
  05cd628  stw 27, 228(1)
  05cd62c  stw 28, 264(1)
  05cd630  mr 28, 31
  05cd634  b 0x5cd650
  05cd638  addi 0, 9, -1
  05cd63c  srwi 0, 0, 31
  05cd640  sub 3, 3, 0
  05cd644  cmpwi 7, 3, 0
  05cd648  bt 30, 0x5cd6ac
  05cd64c  add 28, 28, 3
  05cd650  clrldi 29, 28, 32
  05cd654  li 5, -1
  05cd658  li 11, 0
  05cd65c  clrldi 5, 5, 33
  05cd660  clrldi 3, 30, 32
  05cd664  mr 4, 29
  05cd668  clrldi 6, 26, 32
  05cd66c  sth 11, 112(1)
  05cd670  bl 0x5d9b38
  05cd674  nop
  05cd678  lhz 11, 112(1)
  05cd67c  cmpwi 7, 3, 0
  05cd680  clrlwi 0, 11, 16
  05cd684  xori 9, 0, 37
  05cd688  bt 29, 0x5cd638
  05cd68c  lbz 0, 0(29)
  05cd690  neg 0, 0
  05cd694  rldicl 3, 0, 1, 63
  05cd698  addi 0, 9, -1
  05cd69c  srwi 0, 0, 31
  05cd6a0  sub 3, 3, 0
  05cd6a4  cmpwi 7, 3, 0
  05cd6a8  bf 30, 0x5cd64c
  05cd6ac  sub 29, 28, 31
  05cd6b0  cmpwi 7, 29, 0
  05cd6b4  bt 29, 0x5cdbb0
  05cd6b8  clrlwi 0, 11, 16
  05cd6bc  lwz 9, 264(1)
  05cd6c0  cmpwi 7, 0, 0
  05cd6c4  add 3, 29, 9
  05cd6c8  bt 30, 0x5cd924
  05cd6cc  lwz 27, -24388(2)
  05cd6d0  li 0, 0
  05cd6d4  addi 29, 28, 1
  05cd6d8  mr 31, 27
  05cd6dc  stw 3, 264(1)
  05cd6e0  sth 0, 272(1)
  05cd6e4  stw 0, 256(1)
  05cd6e8  stw 0, 252(1)
  05cd6ec  stw 0, 248(1)
  05cd6f0  stw 0, 244(1)
  05cd6f4  stw 0, 240(1)
  05cd6f8  stw 0, 236(1)
  05cd6fc  b 0x5cd718
  05cd700  add 9, 0, 31
  05cd704  lhz 11, 272(1)
  05cd708  addi 29, 29, 1
  05cd70c  lwz 0, 12(9)
  05cd710  or 0, 0, 11
  05cd714  sth 0, 272(1)
  05cd718  clrldi 28, 29, 32
  05cd71c  clrldi 3, 27, 32
  05cd720  lbz 4, 0(28)
  05cd724  extsb 4, 4
  05cd728  bl 0x5cc578
  05cd72c  nop
  05cd730  sub 0, 3, 31
  05cd734  cmpwi 7, 3, 0
  05cd738  slwi 0, 0, 2
  05cd73c  extsw 0, 0
  05cd740  bf 30, 0x5cd700
  05cd744  lbz 0, 0(28)
  05cd748  cmpwi 7, 0, 42
  05cd74c  bt 30, 0x5cda3c
  05cd750  lwz 11, -24384(2)
  05cd754  li 8, 0
  05cd758  stw 3, 268(1)
  05cd75c  lbz 10, 0(28)
  05cd760  slwi 9, 10, 1
  05cd764  lwz 11, 0(11)
  05cd768  add 9, 9, 11
  05cd76c  clrldi 9, 9, 32
  05cd770  lhz 0, 0(9)
  05cd774  rlwinm 0, 0, 0, 26, 26
  05cd778  cmpwi 7, 0, 0
  05cd77c  bf 30, 0x5cd788
  05cd780  b 0x5cd7d4
  05cd784  bt 26, 0x5cd7a0
  05cd788  slwi 0, 8, 3
  05cd78c  slwi 9, 8, 1
  05cd790  add 9, 9, 0
  05cd794  add 9, 9, 10
  05cd798  addi 8, 9, -48
  05cd79c  stw 8, 268(1)
  05cd7a0  addi 29, 29, 1
  05cd7a4  lis 0, 32767
  05cd7a8  clrldi 28, 29, 32
  05cd7ac  ori 0, 0, 65535
  05cd7b0  cmpw 6, 8, 0
  05cd7b4  lbz 10, 0(28)
  05cd7b8  slwi 9, 10, 1
  05cd7bc  add 9, 9, 11
  05cd7c0  clrldi 9, 9, 32
  05cd7c4  lhz 0, 0(9)
  05cd7c8  rlwinm 0, 0, 0, 26, 26
  05cd7cc  cmpwi 7, 0, 0
  05cd7d0  bf 30, 0x5cd784
  05cd7d4  lbz 0, 0(28)
  05cd7d8  cmpwi 7, 0, 46
  05cd7dc  bt 30, 0x5cd954
  05cd7e0  li 0, -1
  05cd7e4  stw 0, 260(1)
  05cd7e8  lbz 4, 0(28)
  05cd7ec  lwz 3, -24380(2)
  05cd7f0  extsb 4, 4
  05cd7f4  bl 0x5cc578
  05cd7f8  nop
  05cd7fc  cmpwi 7, 3, 0
  05cd800  bt 30, 0x5cda0c
  05cd804  addi 29, 29, 1
  05cd808  lbz 0, 0(28)
  05cd80c  addi 10, 29, 1
  05cd810  extsb 11, 0
  05cd814  clrldi 9, 10, 32
  05cd818  cmpwi 7, 11, 104
  05cd81c  stb 0, 274(1)
  05cd820  mr 31, 10
  05cd824  lbz 9, 0(9)
  05cd828  bt 30, 0x5cda68
  05cd82c  cmpwi 7, 11, 118
  05cd830  bt 30, 0x5cdaa0
  05cd834  cmpwi 7, 11, 108
  05cd838  bt 30, 0x5cdaf4
  05cd83c  cmpwi 7, 11, 76
  05cd840  clrldi 28, 29, 32
  05cd844  bt 30, 0x5cdb18
  05cd848  lbz 0, 274(1)
  05cd84c  cmpwi 7, 0, 102
  05cd850  bt 30, 0x5cda20
  05cd854  extsb 0, 0
  05cd858  cmpwi 7, 0, 118
  05cd85c  bt 30, 0x5cd8dc
  05cd860  mr 31, 10
  05cd864  cmpwi 7, 0, 97
  05cd868  bt 30, 0x5cd8d8
  05cd86c  cmpwi 7, 0, 99
  05cd870  bt 30, 0x5cd8d8
  05cd874  cmpwi 7, 0, 103
  05cd878  bt 30, 0x5cd8d8
  05cd87c  cmpwi 7, 0, 100
  05cd880  bt 30, 0x5cd8d8
  05cd884  cmpwi 7, 0, 101
  05cd888  addi 10, 29, 1
  05cd88c  bt 30, 0x5cd8dc
  05cd890  lbz 5, 0(28)
  05cd894  addi 3, 1, 192
  05cd898  mr 4, 25
  05cd89c  extsb 5, 5
  05cd8a0  addi 6, 1, 128
  05cd8a4  bl 0x5cdc88
  05cd8a8  nop
  05cd8ac  cmpwi 7, 3, 0
  05cd8b0  bt 28, 0x5cd920
  05cd8b4  clrldi 9, 31, 32
  05cd8b8  lbz 0, 0(9)
  05cd8bc  cmpwi 7, 0, 99
  05cd8c0  bf 30, 0x5cd630
  05cd8c4  lbz 0, 274(1)
  05cd8c8  cmpwi 7, 0, 100
  05cd8cc  bf 30, 0x5cd630
  05cd8d0  addi 31, 31, 1
  05cd8d4  b 0x5cd630
  05cd8d8  addi 10, 29, 1
  05cd8dc  lhz 9, 272(1)
  05cd8e0  li 11, 1921
  05cd8e4  mr 31, 10
  05cd8e8  and 0, 9, 11
  05cd8ec  cmpwi 7, 0, 0
  05cd8f0  bf 30, 0x5cd890
  05cd8f4  ori 0, 9, 1
  05cd8f8  addi 3, 1, 192
  05cd8fc  sth 0, 272(1)
  05cd900  lbz 5, 0(28)
  05cd904  mr 4, 25
  05cd908  addi 6, 1, 128
  05cd90c  extsb 5, 5
  05cd910  bl 0x5cdc88
  05cd914  nop
  05cd918  cmpwi 7, 3, 0
  05cd91c  bf 28, 0x5cd8b4
  05cd920  li 3, -1
  05cd924  ld 0, 368(1)
  05cd928  extsw 3, 3
  05cd92c  ld 25, 296(1)
  05cd930  ld 26, 304(1)
  05cd934  mtlr 0
  05cd938  ld 27, 312(1)
  05cd93c  ld 28, 320(1)
  05cd940  ld 29, 328(1)
  05cd944  ld 30, 336(1)
  05cd948  ld 31, 344(1)
  05cd94c  addi 1, 1, 352
  05cd950  blr
  05cd954  addi 29, 29, 1
  05cd958  clrldi 28, 29, 32
  05cd95c  lbz 0, 0(28)
  05cd960  cmpwi 7, 0, 42
  05cd964  bt 30, 0x5cdb34
  05cd968  li 0, 0
  05cd96c  lwz 11, -24384(2)
  05cd970  li 8, 0
  05cd974  stw 0, 260(1)
  05cd978  lbz 10, 0(28)
  05cd97c  lwz 11, 0(11)
  05cd980  slwi 9, 10, 1
  05cd984  add 9, 9, 11
  05cd988  clrldi 9, 9, 32
  05cd98c  lhz 0, 0(9)
  05cd990  rlwinm 0, 0, 0, 26, 26
  05cd994  cmpwi 7, 0, 0
  05cd998  bf 30, 0x5cd9a4
  05cd99c  b 0x5cd7e8
  05cd9a0  bt 26, 0x5cd9bc
  05cd9a4  slwi 0, 8, 3
  05cd9a8  slwi 9, 8, 1
  05cd9ac  add 9, 9, 0
  05cd9b0  add 9, 9, 10
  05cd9b4  addi 8, 9, -48
  05cd9b8  stw 8, 260(1)
  05cd9bc  addi 29, 29, 1
  05cd9c0  lis 0, 32767
  05cd9c4  clrldi 28, 29, 32
  05cd9c8  ori 0, 0, 65535
  05cd9cc  cmpw 6, 8, 0
  05cd9d0  lbz 10, 0(28)
  05cd9d4  slwi 9, 10, 1
  05cd9d8  add 9, 9, 11
  05cd9dc  clrldi 9, 9, 32
  05cd9e0  lhz 0, 0(9)
  05cd9e4  rlwinm 0, 0, 0, 26, 26
  05cd9e8  cmpwi 7, 0, 0
  05cd9ec  bf 30, 0x5cd9a0
  05cd9f0  lbz 4, 0(28)
  05cd9f4  lwz 3, -24380(2)
  05cd9f8  extsb 4, 4
  05cd9fc  bl 0x5cc578
  05cda00  nop
  05cda04  cmpwi 7, 3, 0
  05cda08  bf 30, 0x5cd804
  05cda0c  stb 3, 274(1)
  05cda10  lbz 0, 274(1)
  05cda14  addi 10, 29, 1
  05cda18  cmpwi 7, 0, 102
  05cda1c  bf 30, 0x5cd854
  05cda20  mr 31, 10
  05cda24  lbz 0, 0(28)
  05cda28  cmpwi 7, 0, 99
  05cda2c  bt 30, 0x5cdb6c
  05cda30  lbz 0, 274(1)
  05cda34  extsb 0, 0
  05cda38  b 0x5cd864
  05cda3c  lwz 11, 116(1)
  05cda40  clrldi 9, 11, 32
  05cda44  lwz 9, 4(9)
  05cda48  cmpwi 7, 9, 0
  05cda4c  stw 9, 268(1)
  05cda50  bt 28, 0x5cdbec
  05cda54  addi 29, 29, 1
  05cda58  addi 0, 11, 8
  05cda5c  clrldi 28, 29, 32
  05cda60  stw 0, 116(1)
  05cda64  b 0x5cd7d4
  05cda68  clrldi 28, 29, 32
  05cda6c  lbz 0, 0(28)
  05cda70  extsb 0, 0
  05cda74  cmpwi 7, 0, 104
  05cda78  bt 30, 0x5cdb58
  05cda7c  cmpwi 7, 0, 118
  05cda80  bf 30, 0x5cd848
  05cda84  li 0, 99
  05cda88  stb 0, 274(1)
  05cda8c  mr 29, 31
  05cda90  lbz 0, 274(1)
  05cda94  addi 10, 31, 1
  05cda98  clrldi 28, 31, 32
  05cda9c  b 0x5cd854
  05cdaa0  clrldi 28, 29, 32
  05cdaa4  lbz 0, 0(28)
  05cdaa8  extsb 0, 0
  05cdaac  cmpwi 7, 0, 99
  05cdab0  bt 30, 0x5cdc04
  05cdab4  cmpwi 7, 0, 104
  05cdab8  bt 30, 0x5cdc10
  05cdabc  cmpwi 7, 0, 108
  05cdac0  bt 30, 0x5cdc64
  05cdac4  cmpwi 7, 0, 76
  05cdac8  bt 30, 0x5cdb28
  05cdacc  cmpwi 7, 0, 117
  05cdad0  bt 30, 0x5cdc3c
  05cdad4  cmpwi 7, 0, 111
  05cdad8  bt 30, 0x5cdc3c
  05cdadc  cmpwi 7, 0, 120
  05cdae0  bt 30, 0x5cdc3c
  05cdae4  cmpwi 7, 0, 88
  05cdae8  bt 30, 0x5cdc3c
  05cdaec  mr 31, 29
  05cdaf0  b 0x5cda8c
  05cdaf4  clrldi 28, 29, 32
  05cdaf8  lbz 0, 0(28)
  05cdafc  extsb 0, 0
  05cdb00  cmpwi 7, 0, 108
  05cdb04  bt 30, 0x5cdc28
  05cdb08  cmpwi 7, 0, 118
  05cdb0c  bf 30, 0x5cd848
  05cdb10  stb 0, 274(1)
  05cdb14  b 0x5cda8c
  05cdb18  clrldi 28, 29, 32
  05cdb1c  lbz 0, 0(28)
  05cdb20  cmpwi 7, 0, 118
  05cdb24  bf 30, 0x5cd848
  05cdb28  li 0, 101
  05cdb2c  stb 0, 274(1)
  05cdb30  b 0x5cda8c
  05cdb34  lwz 9, 116(1)
  05cdb38  addi 29, 29, 1
  05cdb3c  mr 11, 9
  05cdb40  clrldi 28, 29, 32
  05cdb44  addi 9, 9, 8
  05cdb48  stw 9, 116(1)
  05cdb4c  lwz 0, 4(11)
  05cdb50  stw 0, 260(1)
  05cdb54  b 0x5cd7e8
  05cdb58  cmpwi 7, 9, 118
  05cdb5c  bt 30, 0x5cdc78
  05cdb60  li 0, 98
  05cdb64  stb 0, 274(1)
  05cdb68  b 0x5cda8c
  05cdb6c  clrldi 9, 10, 32
  05cdb70  lbz 0, 0(9)
  05cdb74  extsb 0, 0
  05cdb78  cmpwi 7, 0, 117
  05cdb7c  bt 30, 0x5cdb98
  05cdb80  cmpwi 7, 0, 111
  05cdb84  bt 30, 0x5cdb98
  05cdb88  cmpwi 7, 0, 120
  05cdb8c  bt 30, 0x5cdb98
  05cdb90  cmpwi 7, 0, 88
  05cdb94  bf 30, 0x5cda30
  05cdb98  li 0, 100
  05cdb9c  mr 29, 10
  05cdba0  addi 31, 10, 1
  05cdba4  clrldi 28, 10, 32
  05cdba8  stb 0, 274(1)
  05cdbac  b 0x5cda30
  05cdbb0  lwz 9, 224(1)
  05cdbb4  clrldi 4, 31, 32
  05cdbb8  lwz 3, 228(1)
  05cdbbc  clrldi 5, 29, 32
  05cdbc0  lwz 0, 0(9)
  05cdbc4  std 2, 40(1)
  05cdbc8  mtctr 0
  05cdbcc  lwz 2, 4(9)
  05cdbd0  bctrl
  05cdbd4  ld 2, 40(1)
  05cdbd8  cmpwi 7, 3, 0
  05cdbdc  bt 30, 0x5cd920
  05cdbe0  lhz 11, 112(1)
  05cdbe4  stw 3, 228(1)
  05cdbe8  b 0x5cd6b8
  05cdbec  lhz 0, 272(1)
  05cdbf0  neg 9, 9
  05cdbf4  ori 0, 0, 4
  05cdbf8  stw 9, 268(1)
  05cdbfc  sth 0, 272(1)
  05cdc00  b 0x5cda54
  05cdc04  li 0, 102
  05cdc08  stb 0, 274(1)
  05cdc0c  b 0x5cda24
  05cdc10  cmpwi 7, 9, 104
  05cdc14  bf 30, 0x5cda84
  05cdc18  li 0, 103
  05cdc1c  addi 31, 10, 1
  05cdc20  stb 0, 274(1)
  05cdc24  b 0x5cda8c
  05cdc28  cmpwi 7, 9, 118
  05cdc2c  bt 30, 0x5cdc54
  05cdc30  li 0, 113
  05cdc34  stb 0, 274(1)
  05cdc38  b 0x5cda8c
  05cdc3c  cmpwi 7, 9, 99
  05cdc40  bf 30, 0x5cdaec
  05cdc44  li 0, 100
  05cdc48  mr 31, 29
  05cdc4c  stb 0, 274(1)
  05cdc50  b 0x5cda8c
  05cdc54  li 0, 97
  05cdc58  addi 31, 10, 1
  05cdc5c  stb 0, 274(1)
  05cdc60  b 0x5cda8c
  05cdc64  cmpwi 7, 9, 108
  05cdc68  bt 30, 0x5cdc54
  05cdc6c  li 0, 118
  05cdc70  stb 0, 274(1)
  05cdc74  b 0x5cda8c
  05cdc78  li 0, 103
  05cdc7c  addi 31, 10, 1
  05cdc80  stb 0, 274(1)
  05cdc84  b 0x5cda8c

vprintf_format_dispatch:   # 0x5cdc88, 0x154 bytes
  05cdc88  stdu 1, -256(1)
  05cdc8c  mflr 0
  05cdc90  std 23, 184(1)
  05cdc94  mr 23, 5
  05cdc98  std 0, 272(1)
  05cdc9c  addi 9, 23, -37
  05cdca0  std 21, 168(1)
  05cdca4  clrlwi 0, 9, 24
  05cdca8  std 28, 224(1)
  05cdcac  cmplwi 7, 0, 83
  05cdcb0  std 30, 240(1)
  05cdcb4  std 31, 248(1)
  05cdcb8  std 17, 136(1)
  05cdcbc  std 18, 144(1)
  05cdcc0  std 19, 152(1)
  05cdcc4  std 20, 160(1)
  05cdcc8  std 22, 176(1)
  05cdccc  std 24, 192(1)
  05cdcd0  std 25, 200(1)
  05cdcd4  std 26, 208(1)
  05cdcd8  std 27, 216(1)
  05cdcdc  std 29, 232(1)
  05cdce0  mr 31, 3
  05cdce4  mr 21, 6
  05cdce8  mr 7, 4
  05cdcec  mr 30, 3
  05cdcf0  mr 28, 6
  05cdcf4  bt 29, 0x5cde64
  05cdcf8  lwz 11, -24376(2)
  05cdcfc  rlwinm 9, 9, 2, 22, 29
  05cdd00  lwzx 0, 9, 11
  05cdd04  extsw 0, 0
  05cdd08  add 0, 0, 11
  05cdd0c  mtctr 0
  05cdd10  bctr
  05cdd14  <unknown>
  05cdd18  <unknown>
  05cdd1c  <unknown>
  05cdd20  <unknown>
  05cdd24  <unknown>
  05cdd28  <unknown>
  05cdd2c  <unknown>
  05cdd30  <unknown>
  05cdd34  <unknown>
  05cdd38  <unknown>
  05cdd3c  <unknown>
  05cdd40  <unknown>
  05cdd44  <unknown>
  05cdd48  <unknown>
  05cdd4c  <unknown>
  05cdd50  <unknown>
  05cdd54  <unknown>
  05cdd58  <unknown>
  05cdd5c  <unknown>
  05cdd60  <unknown>
  05cdd64  <unknown>
  05cdd68  <unknown>
  05cdd6c  <unknown>
  05cdd70  <unknown>
  05cdd74  <unknown>
  05cdd78  <unknown>
  05cdd7c  <unknown>
  05cdd80  <unknown>
  05cdd84  <unknown>
  05cdd88  <unknown>
  05cdd8c  <unknown>
  05cdd90  <unknown>
  05cdd94  <unknown>
  05cdd98  <unknown>
  05cdd9c  <unknown>
  05cdda0  <unknown>
  05cdda4  <unknown>
  05cdda8  <unknown>
  05cddac  <unknown>
  05cddb0  <unknown>
  05cddb4  <unknown>
  05cddb8  <unknown>
  05cddbc  <unknown>
  05cddc0  <unknown>
  05cddc4  <unknown>
  05cddc8  <unknown>
  05cddcc  <unknown>
  05cddd0  <unknown>
  05cddd4  <unknown>
  05cddd8  <unknown>

FUN_005cedb8:   # 0x5cedb8, 0x30 bytes
  05cedb8  stdu 1, -112(1)
  05cedbc  mflr 0
  05cedc0  std 0, 128(1)
  05cedc4  bl 0x650684
  05cedc8  ld 2, 40(1)
  05cedcc  lwz 9, -24360(2)
  05cedd0  ld 0, 0(9)
  05cedd4  sub 3, 3, 0
  05cedd8  ld 0, 128(1)
  05ceddc  addi 1, 1, 112
  05cede0  mtlr 0
  05cede4  blr

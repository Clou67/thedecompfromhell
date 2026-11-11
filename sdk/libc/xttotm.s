# sdk/libc/xttotm.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Daysto:   # 0x5cbdbc, 0x90 bytes
  05cbdbc  cmpwi 6, 3, 0
  05cbdc0  addi 0, 3, -1
  05cbdc4  mr 10, 4
  05cbdc8  srawi 11, 0, 2
  05cbdcc  addze 11, 11
  05cbdd0  bf 25, 0x5cbe0c
  05cbdd4  clrlwi 0, 3, 30
  05cbdd8  cmpwi 7, 0, 0
  05cbddc  bf 30, 0x5cbde4
  05cbde0  bf 26, 0x5cbe28
  05cbde4  lwz 9, -24436(2)
  05cbde8  addi 4, 9, 24
  05cbdec  slwi 9, 10, 1
  05cbdf0  add 9, 9, 4
  05cbdf4  clrldi 9, 9, 32
  05cbdf8  lhz 3, 0(9)
  05cbdfc  extsh 3, 3
  05cbe00  add 3, 11, 3
  05cbe04  extsw 3, 3
  05cbe08  blr
  05cbe0c  cmpwi 7, 3, -4
  05cbe10  subfic 0, 3, 4
  05cbe14  li 11, 0
  05cbe18  srawi 9, 0, 2
  05cbe1c  bt 29, 0x5cbdd4
  05cbe20  addi 11, 9, 1
  05cbe24  b 0x5cbdd4
  05cbe28  lwz 4, -24436(2)
  05cbe2c  slwi 9, 10, 1
  05cbe30  add 9, 9, 4
  05cbe34  clrldi 9, 9, 32
  05cbe38  lhz 3, 0(9)
  05cbe3c  extsh 3, 3
  05cbe40  add 3, 11, 3
  05cbe44  extsw 3, 3
  05cbe48  blr

_Ttotm:   # 0x5cbe4c, 0x25c bytes
  05cbe4c  stdu 1, -176(1)
  05cbe50  mflr 0
  05cbe54  cmpwi 7, 3, 0
  05cbe58  std 0, 192(1)
  05cbe5c  li 0, 32384
  05cbe60  std 31, 168(1)
  05cbe64  oris 0, 0, 33706
  05cbe68  std 26, 128(1)
  05cbe6c  std 27, 136(1)
  05cbe70  std 28, 144(1)
  05cbe74  std 29, 152(1)
  05cbe78  std 30, 160(1)
  05cbe7c  mr 11, 5
  05cbe80  add 31, 4, 0
  05cbe84  bt 30, 0x5cc09c
  05cbe88  clrldi 28, 3, 32
  05cbe8c  cmpwi 7, 11, 0
  05cbe90  mr 27, 31
  05cbe94  stw 5, 32(28)
  05cbe98  bt 30, 0x5cbec4
  05cbe9c  addi 3, 1, 112
  05cbea0  addi 4, 1, 116
  05cbea4  li 11, 144
  05cbea8  sc
  05cbeac  lwz 29, 116(1)
  05cbeb0  slwi 0, 29, 6
  05cbeb4  slwi 29, 29, 2
  05cbeb8  sub 0, 0, 29
  05cbebc  extsw 0, 0
  05cbec0  add 27, 31, 0
  05cbec4  lis 0, 6213
  05cbec8  sradi 26, 27, 63
  05cbecc  ori 0, 0, 51360
  05cbed0  lis 11, -19572
  05cbed4  sldi 0, 0, 32
  05cbed8  ori 11, 11, 63921
  05cbedc  oris 0, 0, 52817
  05cbee0  lis 9, -28087
  05cbee4  ori 0, 0, 10583
  05cbee8  ori 9, 9, 9363
  05cbeec  mulhd 0, 27, 0
  05cbef0  sradi 0, 0, 13
  05cbef4  sub 30, 0, 26
  05cbef8  addi 10, 30, 1
  05cbefc  srawi 8, 30, 31
  05cbf00  mulhw 9, 10, 9
  05cbf04  add 9, 9, 10
  05cbf08  srawi 0, 10, 31
  05cbf0c  srawi 9, 9, 2
  05cbf10  mulhw 11, 30, 11
  05cbf14  add 11, 11, 30
  05cbf18  sub 9, 9, 0
  05cbf1c  srawi 11, 11, 8
  05cbf20  slwi 0, 9, 3
  05cbf24  sub 31, 11, 8
  05cbf28  sub 0, 0, 9
  05cbf2c  mulli 29, 31, 365
  05cbf30  sub 10, 10, 0
  05cbf34  stw 10, 24(28)
  05cbf38  b 0x5cbf40
  05cbf3c  addi 31, 31, -1
  05cbf40  extsw 3, 31
  05cbf44  li 4, 0
  05cbf48  bl 0x5cbdbc
  05cbf4c  add 3, 3, 29
  05cbf50  addi 29, 29, -365
  05cbf54  cmpw 7, 30, 3
  05cbf58  bt 28, 0x5cbf3c
  05cbf5c  clrlwi 0, 31, 30
  05cbf60  sub 6, 30, 3
  05cbf64  cmpwi 7, 0, 0
  05cbf68  stw 31, 20(28)
  05cbf6c  stw 6, 28(28)
  05cbf70  bf 30, 0x5cbf7c
  05cbf74  cmpwi 7, 31, 0
  05cbf78  bf 30, 0x5cc094
  05cbf7c  lwz 9, -24436(2)
  05cbf80  addi 9, 9, 24
  05cbf84  addi 11, 9, 22
  05cbf88  li 7, 12
  05cbf8c  clrldi 9, 11, 32
  05cbf90  addi 7, 7, -1
  05cbf94  addi 11, 11, -2
  05cbf98  lhz 0, 0(9)
  05cbf9c  extsh 3, 0
  05cbfa0  cmpw 7, 6, 3
  05cbfa4  bt 28, 0x5cbf8c
  05cbfa8  lis 0, 6213
  05cbfac  ld 29, 152(1)
  05cbfb0  sub 9, 6, 3
  05cbfb4  ld 30, 160(1)
  05cbfb8  ori 0, 0, 51360
  05cbfbc  ld 31, 168(1)
  05cbfc0  addi 9, 9, 1
  05cbfc4  sldi 0, 0, 32
  05cbfc8  stw 9, 12(28)
  05cbfcc  oris 0, 0, 52817
  05cbfd0  lis 10, 18641
  05cbfd4  ori 0, 0, 10583
  05cbfd8  ori 10, 10, 23010
  05cbfdc  lis 8, -30584
  05cbfe0  sldi 10, 10, 32
  05cbfe4  ori 8, 8, 34952
  05cbfe8  oris 10, 10, 27379
  05cbfec  sldi 8, 8, 32
  05cbff0  ori 10, 10, 31749
  05cbff4  oris 8, 8, 34952
  05cbff8  mr 3, 28
  05cbffc  ori 8, 8, 34953
  05cc000  stw 7, 16(28)
  05cc004  mulhd 0, 27, 0
  05cc008  sradi 0, 0, 13
  05cc00c  sub 0, 0, 26
  05cc010  ld 26, 128(1)
  05cc014  sldi 11, 0, 9
  05cc018  sldi 0, 0, 7
  05cc01c  sub 11, 11, 0
  05cc020  sldi 9, 11, 4
  05cc024  sub 9, 9, 11
  05cc028  sldi 0, 9, 4
  05cc02c  sub 0, 0, 9
  05cc030  sub 0, 27, 0
  05cc034  ld 27, 136(1)
  05cc038  sradi 9, 0, 63
  05cc03c  mulhd 10, 0, 10
  05cc040  sradi 10, 10, 10
  05cc044  sub 10, 10, 9
  05cc048  stw 10, 8(28)
  05cc04c  mulli 10, 10, 3600
  05cc050  sub 10, 0, 10
  05cc054  sradi 9, 10, 63
  05cc058  mulhd 8, 10, 8
  05cc05c  add 8, 8, 10
  05cc060  sradi 8, 8, 5
  05cc064  sub 8, 8, 9
  05cc068  sldi 0, 8, 6
  05cc06c  sldi 9, 8, 2
  05cc070  stw 8, 4(28)
  05cc074  sub 0, 0, 9
  05cc078  sub 10, 10, 0
  05cc07c  ld 0, 192(1)
  05cc080  stw 10, 0(28)
  05cc084  mtlr 0
  05cc088  ld 28, 144(1)
  05cc08c  addi 1, 1, 176
  05cc090  blr
  05cc094  lwz 9, -24436(2)
  05cc098  b 0x5cbf84
  05cc09c  addis 9, 13, 0
  05cc0a0  addi 3, 9, -28504
  05cc0a4  b 0x5cbe88

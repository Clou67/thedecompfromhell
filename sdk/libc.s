# sdk/libc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strcpy:   # 0x5cccec, 0x2a4 bytes
  05cccec  or 9, 3, 4
  05cccf0  mr 7, 4
  05cccf4  clrlwi 0, 9, 29
  05cccf8  mr 6, 3
  05cccfc  cmpwi 7, 0, 0
  05ccd00  bf 30, 0x5ccdd8
  05ccd04  srwi 8, 5, 3
  05ccd08  clrlwi 5, 5, 29
  05ccd0c  cmpwi 7, 8, 0
  05ccd10  bf 29, 0x5ccd94
  05ccd14  lis 9, 32639
  05ccd18  ld 10, 0(7)
  05ccd1c  clrldi 0, 8, 32
  05ccd20  ori 9, 9, 32639
  05ccd24  mtctr 0
  05ccd28  sldi 9, 9, 32
  05ccd2c  oris 9, 9, 32639
  05ccd30  ori 9, 9, 32639
  05ccd34  and 0, 10, 9
  05ccd38  or 11, 10, 9
  05ccd3c  add 0, 0, 9
  05ccd40  nor 0, 0, 11
  05ccd44  cmpdi 0, 0
  05ccd48  bt 2, 0x5ccd6c
  05ccd4c  b 0x5cce90
  05ccd50  ld 10, 0(4)
  05ccd54  and 0, 10, 11
  05ccd58  or 9, 10, 11
  05ccd5c  add 0, 0, 11
  05ccd60  nor 0, 0, 9
  05ccd64  cmpdi 0, 0
  05ccd68  bf 2, 0x5cce90
  05ccd6c  lis 11, 32639
  05ccd70  std 10, 0(3)
  05ccd74  ori 11, 11, 32639
  05ccd78  addi 4, 4, 8
  05ccd7c  sldi 11, 11, 32
  05ccd80  addi 3, 3, 8
  05ccd84  oris 11, 11, 32639
  05ccd88  addi 8, 8, -1
  05ccd8c  ori 11, 11, 32639
  05ccd90  bdnz 0x5ccd50
  05ccd94  cmpwi 7, 5, 0
  05ccd98  bt 30, 0x5ccdd0
  05ccd9c  lbz 0, 0(4)
  05ccda0  cmpwi 7, 0, 0
  05ccda4  bt 30, 0x5cce70
  05ccda8  clrldi 9, 5, 32
  05ccdac  mtctr 9
  05ccdb0  b 0x5ccdc0
  05ccdb4  lbzu 0, 1(4)
  05ccdb8  cmpwi 7, 0, 0
  05ccdbc  bt 30, 0x5cce70
  05ccdc0  stb 0, 0(3)
  05ccdc4  addi 5, 5, -1
  05ccdc8  addi 3, 3, 1
  05ccdcc  bdnz 0x5ccdb4
  05ccdd0  clrldi 3, 6, 32
  05ccdd4  blr
  05ccdd8  clrlwi 0, 9, 30
  05ccddc  cmpwi 7, 0, 0
  05ccde0  bf 30, 0x5ccd94
  05ccde4  srwi 8, 5, 2
  05ccde8  clrlwi 5, 5, 30
  05ccdec  cmpwi 7, 8, 0
  05ccdf0  bf 29, 0x5ccd94
  05ccdf4  lis 9, 32639
  05ccdf8  lwz 11, 0(4)
  05ccdfc  clrldi 10, 8, 32
  05cce00  ori 9, 9, 32639
  05cce04  oris 0, 11, 32639
  05cce08  mtctr 10
  05cce0c  and 9, 11, 9
  05cce10  ori 0, 0, 32639
  05cce14  addis 9, 9, 32639
  05cce18  addi 9, 9, 32639
  05cce1c  nor 0, 9, 0
  05cce20  cmpwi 7, 0, 0
  05cce24  bt 30, 0x5cce50
  05cce28  b 0x5ccf10
  05cce2c  lwz 11, 0(4)
  05cce30  and 9, 11, 0
  05cce34  oris 0, 11, 32639
  05cce38  addis 9, 9, 32639
  05cce3c  ori 0, 0, 32639
  05cce40  addi 9, 9, 32639
  05cce44  nor 0, 9, 0
  05cce48  cmpwi 7, 0, 0
  05cce4c  bf 30, 0x5ccf10
  05cce50  lis 0, 32639
  05cce54  stw 11, 0(3)
  05cce58  ori 0, 0, 32639
  05cce5c  addi 4, 4, 4
  05cce60  addi 3, 3, 4
  05cce64  addi 8, 8, -1
  05cce68  bdnz 0x5cce2c
  05cce6c  b 0x5ccd94
  05cce70  clrldi 5, 5, 32
  05cce74  mtctr 5
  05cce78  li 0, 0
  05cce7c  stb 0, 0(3)
  05cce80  addi 3, 3, 1
  05cce84  bdnz 0x5cce78
  05cce88  clrldi 3, 6, 32
  05cce8c  blr
  05cce90  cntlzd 0, 0
  05cce94  li 9, -1
  05cce98  addi 11, 8, -1
  05cce9c  srd 9, 9, 0
  05ccea0  cmpwi 7, 11, 0
  05ccea4  andc 9, 10, 9
  05ccea8  addi 10, 3, 8
  05cceac  std 9, 0(3)
  05cceb0  bt 30, 0x5ccee0
  05cceb4  clrldi 11, 11, 32
  05cceb8  li 0, 0
  05ccebc  mtctr 11
  05ccec0  mr 11, 10
  05ccec4  clrldi 9, 11, 32
  05ccec8  addi 11, 11, 8
  05ccecc  std 0, 0(9)
  05cced0  bdnz 0x5ccec4
  05cced4  slwi 9, 8, 3
  05cced8  add 9, 9, 10
  05ccedc  addi 10, 9, -8
  05ccee0  cmpwi 7, 5, 0
  05ccee4  bt 30, 0x5ccdd0
  05ccee8  clrldi 5, 5, 32
  05cceec  mr 11, 10
  05ccef0  li 0, 0
  05ccef4  mtctr 5
  05ccef8  clrldi 9, 11, 32
  05ccefc  addi 11, 11, 1
  05ccf00  stb 0, 0(9)
  05ccf04  bdnz 0x5ccef8
  05ccf08  clrldi 3, 6, 32
  05ccf0c  blr
  05ccf10  cntlzw 0, 0
  05ccf14  li 9, -1
  05ccf18  addi 7, 8, -1
  05ccf1c  srw 9, 9, 0
  05ccf20  cmpwi 7, 7, 0
  05ccf24  andc 9, 11, 9
  05ccf28  addi 10, 3, 4
  05ccf2c  stw 9, 0(3)
  05ccf30  bt 30, 0x5ccf60
  05ccf34  clrldi 7, 7, 32
  05ccf38  mr 11, 10
  05ccf3c  li 0, 0
  05ccf40  mtctr 7
  05ccf44  clrldi 9, 11, 32
  05ccf48  addi 11, 11, 4
  05ccf4c  stw 0, 0(9)
  05ccf50  bdnz 0x5ccf44
  05ccf54  slwi 9, 8, 2
  05ccf58  add 9, 9, 10
  05ccf5c  addi 10, 9, -4
  05ccf60  cmpwi 7, 5, 0
  05ccf64  bt 30, 0x5ccdd0
  05ccf68  clrldi 5, 5, 32
  05ccf6c  mr 11, 10
  05ccf70  li 0, 0
  05ccf74  mtctr 5
  05ccf78  clrldi 9, 11, 32
  05ccf7c  addi 11, 11, 1
  05ccf80  stb 0, 0(9)
  05ccf84  bdnz 0x5ccf78
  05ccf88  clrldi 3, 6, 32
  05ccf8c  blr

fscanf:   # 0x5ccf90, 0x98 bytes
  05ccf90  stdu 1, -176(1)
  05ccf94  mflr 0
  05ccf98  std 27, 136(1)
  05ccf9c  lwz 27, -24428(2)
  05ccfa0  std 28, 144(1)
  05ccfa4  std 29, 152(1)
  05ccfa8  mr 28, 4
  05ccfac  std 0, 192(1)
  05ccfb0  mr 29, 3
  05ccfb4  addi 0, 1, 240
  05ccfb8  mr 3, 27
  05ccfbc  stw 0, 112(1)
  05ccfc0  std 7, 256(1)
  05ccfc4  std 8, 264(1)
  05ccfc8  std 9, 272(1)
  05ccfcc  std 10, 280(1)
  05ccfd0  std 5, 240(1)
  05ccfd4  std 6, 248(1)
  05ccfd8  bl 0x5cbc38
  05ccfdc  nop
  05ccfe0  lwz 6, 112(1)
  05ccfe4  clrldi 4, 29, 32
  05ccfe8  lwz 3, -24424(2)
  05ccfec  clrldi 5, 28, 32
  05ccff0  bl 0x5cd5c4
  05ccff4  nop
  05ccff8  mr 29, 3
  05ccffc  mr 3, 27
  05cd000  bl 0x5cbbbc
  05cd004  nop
  05cd008  ld 0, 192(1)
  05cd00c  ld 27, 136(1)
  05cd010  extsw 3, 29
  05cd014  ld 28, 144(1)
  05cd018  ld 29, 152(1)
  05cd01c  mtlr 0
  05cd020  addi 1, 1, 176
  05cd024  blr

FUN_005cd028:   # 0x5cd028, 0x70 bytes
  05cd028  stdu 1, -144(1)
  05cd02c  mflr 0
  05cd030  std 29, 120(1)
  05cd034  mr 29, 3
  05cd038  std 31, 136(1)
  05cd03c  mr 3, 4
  05cd040  mr 31, 5
  05cd044  mr 6, 29
  05cd048  clrldi 5, 5, 32
  05cd04c  li 4, 1
  05cd050  std 0, 160(1)
  05cd054  bl 0x5c5638
  05cd058  nop
  05cd05c  xor 5, 31, 3
  05cd060  ld 31, 136(1)
  05cd064  srawi 0, 5, 31
  05cd068  xor 5, 0, 5
  05cd06c  sub 5, 5, 0
  05cd070  ld 0, 160(1)
  05cd074  addi 5, 5, -1
  05cd078  mtlr 0
  05cd07c  srawi 5, 5, 31
  05cd080  extsw 5, 5
  05cd084  and 29, 29, 5
  05cd088  mr 3, 29
  05cd08c  ld 29, 120(1)
  05cd090  addi 1, 1, 144
  05cd094  blr

printf:   # 0x5cd098, 0x90 bytes
  05cd098  stdu 1, -160(1)
  05cd09c  mflr 0
  05cd0a0  std 28, 128(1)
  05cd0a4  lwz 28, -24420(2)
  05cd0a8  std 29, 136(1)
  05cd0ac  std 0, 176(1)
  05cd0b0  mr 29, 3
  05cd0b4  addi 0, 1, 216
  05cd0b8  mr 3, 28
  05cd0bc  stw 0, 112(1)
  05cd0c0  std 7, 240(1)
  05cd0c4  std 8, 248(1)
  05cd0c8  std 9, 256(1)
  05cd0cc  std 10, 264(1)
  05cd0d0  std 4, 216(1)
  05cd0d4  std 5, 224(1)
  05cd0d8  std 6, 232(1)
  05cd0dc  bl 0x5cbc38
  05cd0e0  nop
  05cd0e4  lwz 6, 112(1)
  05cd0e8  clrldi 5, 29, 32
  05cd0ec  lwz 3, -24416(2)
  05cd0f0  mr 4, 28
  05cd0f4  bl 0x5cd5c4
  05cd0f8  nop
  05cd0fc  mr 29, 3
  05cd100  mr 3, 28
  05cd104  bl 0x5cbbbc
  05cd108  nop
  05cd10c  ld 0, 176(1)
  05cd110  ld 28, 128(1)
  05cd114  extsw 3, 29
  05cd118  mtlr 0
  05cd11c  ld 29, 136(1)
  05cd120  addi 1, 1, 160
  05cd124  blr

FUN_005cd128:   # 0x5cd128, 0x70 bytes
  05cd128  stdu 1, -144(1)
  05cd12c  mflr 0
  05cd130  std 29, 120(1)
  05cd134  mr 29, 3
  05cd138  std 31, 136(1)
  05cd13c  mr 3, 4
  05cd140  mr 31, 5
  05cd144  mr 6, 29
  05cd148  clrldi 5, 5, 32
  05cd14c  li 4, 1
  05cd150  std 0, 160(1)
  05cd154  bl 0x5c5638
  05cd158  nop
  05cd15c  xor 5, 31, 3
  05cd160  ld 31, 136(1)
  05cd164  srawi 0, 5, 31
  05cd168  xor 5, 0, 5
  05cd16c  sub 5, 5, 0
  05cd170  ld 0, 160(1)
  05cd174  addi 5, 5, -1
  05cd178  mtlr 0
  05cd17c  srawi 5, 5, 31
  05cd180  extsw 5, 5
  05cd184  and 29, 29, 5
  05cd188  mr 3, 29
  05cd18c  ld 29, 120(1)
  05cd190  addi 1, 1, 144
  05cd194  blr

snprintf:   # 0x5cd198, 0x8c bytes
  05cd198  stdu 1, -128(1)
  05cd19c  mflr 0
  05cd1a0  cmpwi 7, 4, 0
  05cd1a4  std 0, 144(1)
  05cd1a8  addi 0, 1, 200
  05cd1ac  std 6, 200(1)
  05cd1b0  addi 11, 4, -1
  05cd1b4  stw 0, 112(1)
  05cd1b8  std 7, 208(1)
  05cd1bc  std 8, 216(1)
  05cd1c0  std 9, 224(1)
  05cd1c4  std 10, 232(1)
  05cd1c8  bf 30, 0x5cd218
  05cd1cc  stw 4, 120(1)
  05cd1d0  stw 4, 116(1)
  05cd1d4  lwz 3, -24412(2)
  05cd1d8  clrldi 5, 5, 32
  05cd1dc  addi 4, 1, 116
  05cd1e0  lwz 6, 112(1)
  05cd1e4  bl 0x5cd5c4
  05cd1e8  nop
  05cd1ec  lwz 0, 116(1)
  05cd1f0  cmpwi 7, 0, 0
  05cd1f4  clrldi 9, 0, 32
  05cd1f8  extsw 3, 3
  05cd1fc  bt 30, 0x5cd208
  05cd200  li 0, 0
  05cd204  stb 0, 0(9)
  05cd208  ld 0, 144(1)
  05cd20c  addi 1, 1, 128
  05cd210  mtlr 0
  05cd214  blr
  05cd218  stw 3, 116(1)
  05cd21c  stw 11, 120(1)
  05cd220  b 0x5cd1d4

FUN_005cd224:   # 0x5cd224, 0x84 bytes
  05cd224  stdu 1, -144(1)
  05cd228  mflr 0
  05cd22c  std 31, 136(1)
  05cd230  std 0, 160(1)
  05cd234  lwz 31, 4(3)
  05cd238  clrldi 4, 4, 32
  05cd23c  std 29, 120(1)
  05cd240  cmplw 7, 31, 5
  05cd244  std 30, 128(1)
  05cd248  clrldi 29, 3, 32
  05cd24c  mr 30, 3
  05cd250  bf 29, 0x5cd258
  05cd254  mr 31, 5
  05cd258  cmpwi 7, 31, 0
  05cd25c  clrldi 5, 31, 32
  05cd260  bt 30, 0x5cd288
  05cd264  lwz 3, 0(30)
  05cd268  bl 0x5c5ad0
  05cd26c  nop
  05cd270  lwz 0, 0(30)
  05cd274  lwz 9, 4(30)
  05cd278  add 0, 0, 31
  05cd27c  sub 9, 9, 31
  05cd280  stw 0, 0(30)
  05cd284  stw 9, 4(30)
  05cd288  ld 0, 160(1)
  05cd28c  mr 3, 29
  05cd290  ld 30, 128(1)
  05cd294  ld 29, 120(1)
  05cd298  mtlr 0
  05cd29c  ld 31, 136(1)
  05cd2a0  addi 1, 1, 144
  05cd2a4  blr

snprintf:   # 0x5cd2a8, 0x7c bytes
  05cd2a8  stdu 1, -160(1)
  05cd2ac  mflr 0
  05cd2b0  std 29, 136(1)
  05cd2b4  mr 29, 3
  05cd2b8  lwz 3, -24408(2)
  05cd2bc  std 0, 176(1)
  05cd2c0  addi 0, 1, 224
  05cd2c4  std 5, 224(1)
  05cd2c8  std 6, 232(1)
  05cd2cc  mr 5, 4
  05cd2d0  mr 6, 0
  05cd2d4  clrldi 4, 29, 32
  05cd2d8  std 7, 240(1)
  05cd2dc  std 8, 248(1)
  05cd2e0  std 9, 256(1)
  05cd2e4  std 10, 264(1)
  05cd2e8  stw 0, 112(1)
  05cd2ec  bl 0x5cd5c4
  05cd2f0  nop
  05cd2f4  cmpwi 7, 3, 0
  05cd2f8  add 29, 29, 3
  05cd2fc  extsw 3, 3
  05cd300  clrldi 29, 29, 32
  05cd304  bt 28, 0x5cd310
  05cd308  li 0, 0
  05cd30c  stb 0, 0(29)
  05cd310  ld 0, 176(1)
  05cd314  ld 29, 136(1)
  05cd318  addi 1, 1, 160
  05cd31c  mtlr 0
  05cd320  blr

FUN_005cd324:   # 0x5cd324, 0x3c bytes
  05cd324  stdu 1, -144(1)
  05cd328  mflr 0
  05cd32c  std 29, 120(1)
  05cd330  mr 29, 5
  05cd334  clrldi 5, 5, 32
  05cd338  std 0, 160(1)
  05cd33c  bl 0x5c5ad0
  05cd340  nop
  05cd344  ld 0, 160(1)
  05cd348  add 3, 3, 29
  05cd34c  mtlr 0
  05cd350  ld 29, 120(1)
  05cd354  addi 1, 1, 144
  05cd358  clrldi 3, 3, 32
  05cd35c  blr

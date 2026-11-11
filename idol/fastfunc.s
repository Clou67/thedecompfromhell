# idol/fastfunc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FastDecTimerS32:   # 0x4fff60, 0x54 bytes
  04fff60  lwz 4, 0(3)
  04fff64  cmpwi 4, 0
  04fff68  bf 2, 0x4fff74
  04fff6c  li 3, 1
  04fff70  b 0x4fffb0
  04fff74  extsw 5, 4
  04fff78  li 7, 1
  04fff7c  li 6, 1
  04fff80  subc 5, 7, 5
  04fff84  subc 4, 4, 6
  04fff88  sradi 5, 5, 63
  04fff8c  and 4, 5, 4
  04fff90  addc 4, 6, 4
  04fff94  addic 4, 4, -1
  04fff98  cmpwi 4, 0
  04fff9c  stw 4, 0(3)
  04fffa0  bf 1, 0x4fffac
  04fffa4  li 3, 0
  04fffa8  b 0x4fffb0
  04fffac  li 3, 2
  04fffb0  blr

FastDecTimerS16:   # 0x4fffb4, 0x58 bytes
  04fffb4  lhz 4, 0(3)
  04fffb8  extsh 4, 4
  04fffbc  cmpwi 4, 0
  04fffc0  bf 2, 0x4fffcc
  04fffc4  li 3, 1
  04fffc8  b 0x500008
  04fffcc  li 5, 1
  04fffd0  li 6, 1
  04fffd4  subc 7, 4, 5
  04fffd8  subc 4, 6, 4
  04fffdc  sradi 4, 4, 63
  04fffe0  and 4, 4, 7
  04fffe4  addc 4, 5, 4
  04fffe8  addic 4, 4, -1
  04fffec  extsh 5, 4
  04ffff0  cmpwi 5, 0
  04ffff4  sth 4, 0(3)
  04ffff8  bf 1, 0x500004
  04ffffc  li 3, 0
  0500000  b 0x500008
  0500004  li 3, 2
  0500008  blr

FastDecTimerU16:   # 0x50000c, 0x54 bytes
  050000c  lhz 4, 0(3)
  0500010  cmpwi 4, 0
  0500014  bf 2, 0x500020
  0500018  li 3, 1
  050001c  b 0x50005c
  0500020  li 5, 1
  0500024  li 6, 1
  0500028  subc 5, 5, 4
  050002c  subc 4, 4, 6
  0500030  sradi 5, 5, 63
  0500034  and 4, 5, 4
  0500038  addc 4, 6, 4
  050003c  addic 4, 4, -1
  0500040  clrlwi 4, 4, 16
  0500044  cmpwi 4, 0
  0500048  sth 4, 0(3)
  050004c  bf 1, 0x500058
  0500050  li 3, 0
  0500054  b 0x50005c
  0500058  li 3, 2
  050005c  blr

FastDecTimerS8:   # 0x500060, 0x54 bytes
  0500060  lbz 4, 0(3)
  0500064  cmpwi 4, 0
  0500068  bf 2, 0x500074
  050006c  li 3, 1
  0500070  b 0x5000b0
  0500074  li 5, 1
  0500078  li 6, 1
  050007c  subc 5, 5, 4
  0500080  subc 4, 4, 6
  0500084  sradi 5, 5, 63
  0500088  and 4, 5, 4
  050008c  addc 4, 6, 4
  0500090  addic 4, 4, -1
  0500094  clrlwi 4, 4, 24
  0500098  cmpwi 4, 0
  050009c  stb 4, 0(3)
  05000a0  bf 1, 0x5000ac
  05000a4  li 3, 0
  05000a8  b 0x5000b0
  05000ac  li 3, 2
  05000b0  blr

FastDecTimerU8:   # 0x5000b4, 0x54 bytes
  05000b4  lbz 4, 0(3)
  05000b8  cmpwi 4, 0
  05000bc  bf 2, 0x5000c8
  05000c0  li 3, 1
  05000c4  b 0x500104
  05000c8  li 5, 1
  05000cc  li 6, 1
  05000d0  subc 5, 5, 4
  05000d4  subc 4, 4, 6
  05000d8  sradi 5, 5, 63
  05000dc  and 4, 5, 4
  05000e0  addc 4, 6, 4
  05000e4  addic 4, 4, -1
  05000e8  clrlwi 4, 4, 24
  05000ec  cmpwi 4, 0
  05000f0  stb 4, 0(3)
  05000f4  bf 1, 0x500100
  05000f8  li 3, 0
  05000fc  b 0x500104
  0500100  li 3, 2
  0500104  blr

FastDecTimerF32:   # 0x500108, 0x70 bytes
  0500108  lis 4, 114
  050010c  lwz 5, -3036(4)
  0500110  lwz 6, 0(3)
  0500114  srawi 8, 5, 31
  0500118  srawi 7, 6, 31
  050011c  lfs 2, -3036(4)
  0500120  srwi 10, 8, 1
  0500124  lfs 1, 0(3)
  0500128  srwi 9, 7, 1
  050012c  xor 5, 10, 5
  0500130  xor 4, 9, 6
  0500134  subc 5, 5, 8
  0500138  subc 4, 4, 7
  050013c  cmpw 4, 5
  0500140  bt 1, 0x500168
  0500144  li 5, 0
  0500148  lis 6, 16256
  050014c  cmpw 4, 6
  0500150  stw 5, 0(3)
  0500154  bf 0, 0x500160
  0500158  li 3, -1
  050015c  b 0x500174
  0500160  li 3, -2
  0500164  b 0x500174
  0500168  fsubs 1, 1, 2
  050016c  stfs 1, 0(3)
  0500170  li 3, 0
  0500174  blr

FastLog2:   # 0x500178, 0x80 bytes
  0500178  lis 4, 0
  050017c  clrldi 5, 3, 32
  0500180  ori 4, 4, 65535
  0500184  subc 4, 4, 5
  0500188  rldicl 4, 4, 1, 63
  050018c  slwi 5, 4, 4
  0500190  srw 3, 3, 5
  0500194  li 5, 255
  0500198  clrldi 6, 3, 32
  050019c  subc 5, 5, 6
  05001a0  li 6, 15
  05001a4  rldicl 5, 5, 1, 63
  05001a8  slwi 5, 5, 3
  05001ac  srw 3, 3, 5
  05001b0  rlwimi 5, 4, 4, 27, 27
  05001b4  clrldi 7, 3, 32
  05001b8  subc 6, 6, 7
  05001bc  li 7, 3
  05001c0  rldicl 6, 6, 1, 63
  05001c4  slwi 4, 6, 2
  05001c8  rlwimi 5, 6, 2, 29, 29
  05001cc  srw 3, 3, 4
  05001d0  clrldi 4, 3, 32
  05001d4  subc 4, 7, 4
  05001d8  rldicl 4, 4, 1, 63
  05001dc  slwi 6, 4, 1
  05001e0  rlwimi 5, 4, 1, 30, 30
  05001e4  srw 3, 3, 6
  05001e8  srwi 3, 3, 1
  05001ec  or 3, 5, 3
  05001f0  extsw 3, 3
  05001f4  blr

FastSitAndSpin_STUB:   # 0x5001f8, 0x4 bytes
  05001f8  blr

FastMemSet:   # 0x5001fc, 0x28 bytes
  05001fc  stdu 1, -112(1)
  0500200  mflr 0
  0500204  std 0, 128(1)
  0500208  clrldi 5, 5, 32
  050020c  bl 0x5d0140
  0500210  nop
  0500214  ld 0, 128(1)
  0500218  mtlr 0
  050021c  addi 1, 1, 112
  0500220  blr

FastMemSetZero16:   # 0x500224, 0x2c bytes
  0500224  stdu 1, -112(1)
  0500228  mflr 0
  050022c  std 0, 128(1)
  0500230  clrldi 5, 4, 32
  0500234  li 4, 0
  0500238  bl 0x5d0140
  050023c  nop
  0500240  ld 0, 128(1)
  0500244  mtlr 0
  0500248  addi 1, 1, 112
  050024c  blr

FastMemSetZero:   # 0x500250, 0x2c bytes
  0500250  stdu 1, -112(1)
  0500254  mflr 0
  0500258  std 0, 128(1)
  050025c  clrldi 5, 4, 32
  0500260  li 4, 0
  0500264  bl 0x5d0140
  0500268  nop
  050026c  ld 0, 128(1)
  0500270  mtlr 0
  0500274  addi 1, 1, 112
  0500278  blr

FastMemCopy32:   # 0x50027c, 0x28 bytes
  050027c  stdu 1, -112(1)
  0500280  mflr 0
  0500284  std 0, 128(1)
  0500288  clrldi 5, 5, 32
  050028c  bl 0x5c5ad0
  0500290  nop
  0500294  ld 0, 128(1)
  0500298  mtlr 0
  050029c  addi 1, 1, 112
  05002a0  blr

FastMemCopy:   # 0x5002a4, 0x28 bytes
  05002a4  stdu 1, -112(1)
  05002a8  mflr 0
  05002ac  std 0, 128(1)
  05002b0  clrldi 5, 5, 32
  05002b4  bl 0x5c5ad0
  05002b8  nop
  05002bc  ld 0, 128(1)
  05002c0  mtlr 0
  05002c4  addi 1, 1, 112
  05002c8  blr

FastMemCopy:   # 0x5002cc, 0x28 bytes
  05002cc  stdu 1, -112(1)
  05002d0  mflr 0
  05002d4  std 0, 128(1)
  05002d8  clrldi 5, 5, 32
  05002dc  bl 0x5c5ad0
  05002e0  nop
  05002e4  ld 0, 128(1)
  05002e8  mtlr 0
  05002ec  addi 1, 1, 112
  05002f0  blr

FastMemCopyReverse16:   # 0x5002f4, 0x40 bytes
  05002f4  ori 6, 3, 0
  05002f8  ori 3, 5, 0
  05002fc  ori 5, 4, 0
  0500300  cmpwi 3, 0
  0500304  ori 4, 6, 0
  0500308  bt 2, 0x500330
  050030c  lbz 6, 0(5)
  0500310  addic 3, 3, -2
  0500314  lbz 7, 1(5)
  0500318  cmpwi 3, 0
  050031c  rlwimi 6, 7, 8, 16, 23
  0500320  addic 5, 5, 2
  0500324  sth 6, 0(4)
  0500328  addic 4, 4, 2
  050032c  bf 2, 0x50030c
  0500330  blr

FastMemCopyReverse32:   # 0x500334, 0x54 bytes
  0500334  ori 6, 3, 0
  0500338  ori 3, 5, 0
  050033c  ori 5, 4, 0
  0500340  cmpwi 3, 0
  0500344  ori 4, 6, 0
  0500348  bt 2, 0x500384
  050034c  lbz 6, 3(5)
  0500350  addic 3, 3, -4
  0500354  lbz 7, 2(5)
  0500358  slwi 6, 6, 24
  050035c  lbz 8, 0(5)
  0500360  cmpwi 3, 0
  0500364  rlwimi 6, 7, 16, 8, 15
  0500368  lbz 7, 1(5)
  050036c  addic 5, 5, 4
  0500370  rlwimi 8, 7, 8, 16, 23
  0500374  or 6, 6, 8
  0500378  stw 6, 0(4)
  050037c  addic 4, 4, 4
  0500380  bf 2, 0x50034c
  0500384  blr

FastMemCopy16:   # 0x500388, 0x3c bytes
  0500388  addc 6, 4, 5
  050038c  addc 4, 3, 5
  0500390  cmpwi 5, 0
  0500394  clrldi 6, 6, 32
  0500398  clrldi 4, 4, 32
  050039c  li 3, 0
  05003a0  bt 0, 0x5003c0
  05003a4  addic 3, 3, 16
  05003a8  lvx 2, 0, 6
  05003ac  cmpw 3, 5
  05003b0  stvx 2, 0, 4
  05003b4  addic 6, 6, -16
  05003b8  addic 4, 4, -16
  05003bc  bf 1, 0x5003a4
  05003c0  blr

FastMemOr16:   # 0x5003c4, 0x4c bytes
  05003c4  ori 7, 3, 0
  05003c8  ori 3, 6, 0
  05003cc  ori 8, 5, 0
  05003d0  ori 5, 4, 0
  05003d4  cmpwi 3, 0
  05003d8  ori 4, 8, 0
  05003dc  ori 6, 7, 0
  05003e0  bf 1, 0x50040c
  05003e4  lwz 7, 0(5)
  05003e8  addic 3, 3, -4
  05003ec  lwz 8, 0(4)
  05003f0  addic 5, 5, 4
  05003f4  cmpwi 3, 0
  05003f8  or 7, 7, 8
  05003fc  addic 4, 4, 4
  0500400  stw 7, 0(6)
  0500404  addic 6, 6, 4
  0500408  bt 1, 0x5003e4
  050040c  blr

FastMemCmp:   # 0x500410, 0x48 bytes
  0500410  ori 6, 3, 0
  0500414  ori 3, 5, 0
  0500418  ori 5, 6, 0
  050041c  cmpwi 3, 0
  0500420  bf 1, 0x500450
  0500424  lwz 6, 0(5)
  0500428  lwz 7, 0(4)
  050042c  cmpw 6, 7
  0500430  bt 2, 0x50043c
  0500434  li 3, 0
  0500438  b 0x500454
  050043c  addic 3, 3, -4
  0500440  addic 5, 5, 4
  0500444  cmpwi 3, 0
  0500448  addic 4, 4, 4
  050044c  bt 1, 0x500424
  0500450  li 3, 1
  0500454  blr

STUB_00500458:   # 0x500458, 0x4 bytes
  0500458  blr

STUB_0050045c:   # 0x50045c, 0x4 bytes
  050045c  blr

FastUpdateClipFlags:   # 0x500460, 0xe0 bytes
  0500460  ori 4, 3, 0
  0500464  lis 3, 144
  0500468  lis 8, 16256
  050046c  lwz 5, 0(4)
  0500470  lwz 7, 11968(3)
  0500474  srawi 6, 5, 31
  0500478  lwz 9, 4(4)
  050047c  slwi 7, 7, 6
  0500480  srwi 10, 6, 1
  0500484  lwz 4, 8(4)
  0500488  xor 5, 10, 5
  050048c  srawi 10, 9, 31
  0500490  subc 5, 5, 6
  0500494  stw 7, 11968(3)
  0500498  srawi 6, 4, 31
  050049c  srwi 11, 10, 1
  05004a0  srwi 12, 6, 1
  05004a4  xor 9, 11, 9
  05004a8  xor 11, 12, 4
  05004ac  cmpw 5, 8
  05004b0  subc 6, 11, 6
  05004b4  subc 4, 9, 10
  05004b8  cmpw 6, 6, 8
  05004bc  bf 1, 0x5004c8
  05004c0  ori 7, 7, 1
  05004c4  stw 7, 11968(3)
  05004c8  ori 8, 5, 0
  05004cc  lis 9, -16256
  05004d0  ori 5, 7, 0
  05004d4  cmpw 8, 9
  05004d8  cmpw 1, 6, 9
  05004dc  cmpw 7, 4, 9
  05004e0  bf 0, 0x5004ec
  05004e4  ori 5, 7, 2
  05004e8  stw 5, 11968(3)
  05004ec  ori 6, 4, 0
  05004f0  lis 7, 16256
  05004f4  ori 4, 5, 0
  05004f8  cmpw 6, 7
  05004fc  bf 1, 0x500508
  0500500  ori 4, 5, 4
  0500504  stw 4, 11968(3)
  0500508  ori 5, 4, 0
  050050c  bf 28, 0x500518
  0500510  ori 5, 4, 8
  0500514  stw 5, 11968(3)
  0500518  ori 4, 5, 0
  050051c  bf 25, 0x500528
  0500520  ori 4, 5, 16
  0500524  stw 4, 11968(3)
  0500528  ori 5, 4, 0
  050052c  bf 4, 0x500538
  0500530  ori 5, 4, 32
  0500534  stw 5, 11968(3)
  0500538  clrlwi 3, 5, 26
  050053c  blr

STUB_00500540:   # 0x500540, 0x4 bytes
  0500540  blr

STUB_00500544:   # 0x500544, 0x8 bytes
  0500544  li 3, 0
  0500548  blr

STUB_0050054c:   # 0x50054c, 0x8 bytes
  050054c  li 3, 0
  0500550  blr

FastAbsF:   # 0x500554, 0x34 bytes
  0500554  lfs 1, 0(4)
  0500558  lfs 2, 4(4)
  050055c  fabs 1, 1
  0500560  lfs 3, 8(4)
  0500564  fabs 2, 2
  0500568  lfs 4, 12(4)
  050056c  fabs 3, 3
  0500570  fabs 4, 4
  0500574  stfs 1, 0(3)
  0500578  stfs 2, 4(3)
  050057c  stfs 3, 8(3)
  0500580  stfs 4, 12(3)
  0500584  blr

FastVecClamp:   # 0x500588, 0x70 bytes
  0500588  lfs 1, 0(4)
  050058c  lfs 2, 4(4)
  0500590  lfs 3, 8(4)
  0500594  fabs 1, 1
  0500598  fabs 2, 2
  050059c  lfs 4, 0(3)
  05005a0  fabs 3, 3
  05005a4  lfs 5, 4(3)
  05005a8  lfs 6, 8(3)
  05005ac  fsub 7, 4, 1
  05005b0  fsub 8, 5, 2
  05005b4  fsub 9, 6, 3
  05005b8  fneg 10, 1
  05005bc  fneg 11, 2
  05005c0  fneg 12, 3
  05005c4  fsel 1, 7, 1, 4
  05005c8  fsel 2, 8, 2, 5
  05005cc  fsel 3, 9, 3, 6
  05005d0  fsub 4, 10, 1
  05005d4  fsub 5, 11, 2
  05005d8  fsub 6, 12, 3
  05005dc  fsel 1, 4, 10, 1
  05005e0  fsel 2, 5, 11, 2
  05005e4  fsel 3, 6, 12, 3
  05005e8  stfs 1, 0(3)
  05005ec  stfs 2, 4(3)
  05005f0  stfs 3, 8(3)
  05005f4  blr

FastVecNormalize:   # 0x500608, 0x110 bytes
  0500608  lfs 9, 4(5)
  050060c  lfs 10, 0(5)
  0500610  fmuls 1, 9, 9
  0500614  lfs 8, 8(5)
  0500618  lis 5, 80
  050061c  addi 5, 5, 1528
  0500620  fmadds 11, 10, 10, 1
  0500624  lfs 4, 0(5)
  0500628  fmr 7, 4
  050062c  lfs 3, 0(4)
  0500630  lfs 2, 4(4)
  0500634  lfs 1, 8(4)
  0500638  fmadds 11, 8, 8, 11
  050063c  fmr 6, 7
  0500640  fsqrts 12, 11
  0500644  fmr 5, 6
  0500648  fcmpu 0, 12, 5
  050064c  bt 2, 0x5006a0
  0500650  frsqrte 5, 11
  0500654  lis 5, 80
  0500658  addi 5, 5, 1528
  050065c  lfs 6, 4(5)
  0500660  lfs 7, 8(5)
  0500664  fmuls 12, 11, 5
  0500668  fmuls 13, 6, 5
  050066c  fnmsubs 12, 12, 5, 7
  0500670  fmadds 5, 12, 13, 5
  0500674  fmuls 12, 11, 5
  0500678  fmuls 13, 6, 5
  050067c  fnmsubs 12, 12, 5, 7
  0500680  fmadds 5, 12, 13, 5
  0500684  fmuls 11, 11, 5
  0500688  fmuls 6, 6, 5
  050068c  fnmsubs 7, 11, 5, 7
  0500690  fmadds 5, 7, 6, 5
  0500694  fmuls 7, 10, 5
  0500698  fmuls 6, 9, 5
  050069c  fmuls 5, 8, 5
  05006a0  fmuls 2, 6, 2
  05006a4  fmadds 2, 7, 3, 2
  05006a8  fmadds 1, 5, 1, 2
  05006ac  fcmpu 0, 1, 4
  05006b0  cror 6, 0, 2
  05006b4  bt 6, 0x5006dc
  05006b8  lfs 2, 0(4)
  05006bc  stfs 2, 0(3)
  05006c0  lfs 2, 4(4)
  05006c4  stfs 2, 4(3)
  05006c8  lfs 2, 8(4)
  05006cc  stfs 2, 8(3)
  05006d0  lfs 2, 12(4)
  05006d4  stfs 2, 12(3)
  05006d8  b 0x500714
  05006dc  lis 5, 80
  05006e0  addi 5, 5, 1528
  05006e4  lfs 2, 12(5)
  05006e8  lfs 4, 4(4)
  05006ec  fmuls 2, 1, 2
  05006f0  lfs 8, 8(4)
  05006f4  lfs 9, 12(4)
  05006f8  stfs 9, 12(3)
  05006fc  fnmsubs 3, 2, 7, 3
  0500700  fnmsubs 4, 2, 6, 4
  0500704  fnmsubs 2, 2, 5, 8
  0500708  stfs 3, 0(3)
  050070c  stfs 4, 4(3)
  0500710  stfs 2, 8(3)
  0500714  blr

FastVecFromPackedBits:   # 0x500720, 0x98 bytes
  0500720  stdu 1, -64(1)
  0500724  lis 5, 80
  0500728  stw 4, 48(1)
  050072c  stw 4, 52(1)
  0500730  li 6, 4
  0500734  addi 5, 5, 1816
  0500738  stw 4, 56(1)
  050073c  stw 4, 60(1)
  0500740  li 7, 8
  0500744  li 4, 4
  0500748  vspltisw 3, -16
  050074c  li 8, 12
  0500750  vspltisw 4, -8
  0500754  <unknown>
  0500758  li 0, 48
  050075c  vspltw 2, 2, 0
  0500760  lvx 5, 1, 0
  0500764  vsrw 2, 5, 2
  0500768  vrlw 3, 5, 3
  050076c  vrlw 4, 5, 4
  0500770  vcfux 2, 2, 0
  0500774  vspltw 2, 2, 0
  0500778  stvewx 2, 0, 3
  050077c  <unknown>
  0500780  vspltw 2, 2, 0
  0500784  vand 3, 3, 2
  0500788  vand 4, 4, 2
  050078c  vand 2, 5, 2
  0500790  vcfux 3, 3, 0
  0500794  vcfux 4, 4, 0
  0500798  vcfux 2, 2, 0
  050079c  vspltw 3, 3, 0
  05007a0  vspltw 4, 4, 0
  05007a4  stvewx 3, 6, 3
  05007a8  stvewx 4, 7, 3
  05007ac  stvewx 2, 8, 3
  05007b0  addi 1, 1, 64
  05007b4  blr

FastVecToPackedChars:   # 0x5007d8, 0x7c bytes
  05007d8  stdu 1, -64(1)
  05007dc  lis 4, 80
  05007e0  lfs 1, 0(3)
  05007e4  addi 4, 4, 1976
  05007e8  lfs 2, 0(4)
  05007ec  lfs 3, 4(3)
  05007f0  fadds 1, 1, 2
  05007f4  lfs 4, 8(3)
  05007f8  fadds 3, 3, 2
  05007fc  lfs 5, 12(3)
  0500800  fadds 4, 4, 2
  0500804  fadds 2, 5, 2
  0500808  fctidz 1, 1
  050080c  fctidz 3, 3
  0500810  fctidz 4, 4
  0500814  fctidz 2, 2
  0500818  stfd 1, 48(1)
  050081c  lwz 3, 52(1)
  0500820  stfd 3, 48(1)
  0500824  slwi 3, 3, 24
  0500828  lwz 4, 52(1)
  050082c  stfd 4, 48(1)
  0500830  lwz 5, 52(1)
  0500834  rlwimi 3, 4, 16, 8, 15
  0500838  stfd 2, 48(1)
  050083c  lwz 4, 52(1)
  0500840  rlwimi 3, 5, 8, 16, 23
  0500844  rlwimi 3, 4, 0, 24, 31
  0500848  extsw 3, 3
  050084c  addi 1, 1, 64
  0500850  blr

FastVecFromPackedShorts:   # 0x500854, 0x7c bytes
  0500854  stdu 1, -64(1)
  0500858  rldicl 5, 4, 16, 48
  050085c  clrldi 5, 5, 32
  0500860  rldicl 6, 4, 48, 48
  0500864  std 5, 48(1)
  0500868  rldicl 5, 4, 32, 48
  050086c  clrldi 5, 5, 32
  0500870  clrldi 6, 6, 32
  0500874  clrlwi 4, 4, 16
  0500878  clrldi 4, 4, 32
  050087c  lfd 1, 48(1)
  0500880  std 5, 48(1)
  0500884  fcfid 1, 1
  0500888  frsp 1, 1
  050088c  lfd 2, 48(1)
  0500890  std 6, 48(1)
  0500894  fcfid 2, 2
  0500898  stfs 1, 0(3)
  050089c  frsp 1, 2
  05008a0  lfd 2, 48(1)
  05008a4  std 4, 48(1)
  05008a8  fcfid 2, 2
  05008ac  stfs 1, 4(3)
  05008b0  frsp 1, 2
  05008b4  lfd 2, 48(1)
  05008b8  fcfid 2, 2
  05008bc  stfs 1, 8(3)
  05008c0  frsp 1, 2
  05008c4  stfs 1, 12(3)
  05008c8  addi 1, 1, 64
  05008cc  blr

FastVecFromSignedShort:   # 0x5008d0, 0x80 bytes
  05008d0  stdu 1, -64(1)
  05008d4  li 5, 48
  05008d8  std 4, 48(1)
  05008dc  li 7, 50
  05008e0  vspltisw 2, -16
  05008e4  li 6, 52
  05008e8  li 4, 54
  05008ec  <unknown>
  05008f0  <unknown>
  05008f4  vsraw 3, 3, 2
  05008f8  li 5, 8
  05008fc  <unknown>
  0500900  vsraw 4, 4, 2
  0500904  <unknown>
  0500908  li 6, 12
  050090c  vsraw 5, 5, 2
  0500910  vcfsx 3, 3, 0
  0500914  vsraw 2, 6, 2
  0500918  li 4, 4
  050091c  vcfsx 4, 4, 0
  0500920  vcfsx 5, 5, 0
  0500924  vcfsx 2, 2, 0
  0500928  vspltw 3, 3, 0
  050092c  vspltw 4, 4, 0
  0500930  vspltw 5, 5, 0
  0500934  vspltw 2, 2, 0
  0500938  stvewx 3, 0, 3
  050093c  stvewx 4, 4, 3
  0500940  stvewx 5, 5, 3
  0500944  stvewx 2, 6, 3
  0500948  addi 1, 1, 64
  050094c  blr

FastVecMultAndPack:   # 0x500950, 0x6c bytes
  0500950  stdu 1, -64(1)
  0500954  lfs 2, 0(3)
  0500958  lfs 3, 4(3)
  050095c  fmuls 2, 2, 1
  0500960  lfs 4, 8(3)
  0500964  fmuls 3, 3, 1
  0500968  lfs 5, 12(3)
  050096c  fmuls 4, 4, 1
  0500970  fmuls 1, 5, 1
  0500974  fctiwz 2, 2
  0500978  fctiwz 3, 3
  050097c  fctiwz 4, 4
  0500980  fctiwz 1, 1
  0500984  stfd 2, 48(1)
  0500988  lwz 3, 52(1)
  050098c  stfd 3, 48(1)
  0500990  sldi 3, 3, 48
  0500994  lwz 4, 52(1)
  0500998  stfd 4, 48(1)
  050099c  lwz 5, 52(1)
  05009a0  rldimi 3, 4, 32, 16
  05009a4  stfd 1, 48(1)
  05009a8  rldimi 3, 5, 16, 32
  05009ac  lwz 4, 52(1)
  05009b0  rldimi 3, 4, 0, 48
  05009b4  addi 1, 1, 64
  05009b8  blr

FastVecFromPackedChar:   # 0x5009c8, 0x7c bytes
  05009c8  stdu 1, -64(1)
  05009cc  lis 5, 80
  05009d0  stw 4, 48(1)
  05009d4  stw 4, 52(1)
  05009d8  li 6, 4
  05009dc  addi 5, 5, 2492
  05009e0  stw 4, 56(1)
  05009e4  stw 4, 60(1)
  05009e8  li 7, 8
  05009ec  li 4, 4
  05009f0  vspltisw 3, -10
  05009f4  <unknown>
  05009f8  li 0, 48
  05009fc  vspltw 2, 2, 0
  0500a00  lvx 4, 1, 0
  0500a04  vrlw 3, 4, 3
  0500a08  vand 5, 4, 2
  0500a0c  vand 2, 3, 2
  0500a10  vcfux 3, 5, 0
  0500a14  vcfux 2, 2, 0
  0500a18  stvewx 3, 0, 3
  0500a1c  vspltw 2, 2, 0
  0500a20  stvewx 2, 4, 3
  0500a24  <unknown>
  0500a28  vspltw 2, 2, 0
  0500a2c  vsrw 2, 4, 2
  0500a30  vcfux 2, 2, 0
  0500a34  vspltw 2, 2, 0
  0500a38  stvewx 2, 7, 3
  0500a3c  addi 1, 1, 64
  0500a40  blr

FastFindChar:   # 0x500a44, 0x44 bytes
  0500a44  ori 5, 4, 0
  0500a48  li 4, 0
  0500a4c  lbz 6, 0(5)
  0500a50  cmpwi 6, 255
  0500a54  bf 2, 0x500a60
  0500a58  li 3, -1
  0500a5c  b 0x500a74
  0500a60  xor 6, 6, 3
  0500a64  clrlwi 6, 6, 24
  0500a68  cmpwi 6, 0
  0500a6c  bf 2, 0x500a78
  0500a70  ori 3, 4, 0
  0500a74  blr
  0500a78  addic 4, 4, 1
  0500a7c  addic 5, 5, 1
  0500a80  extsw 4, 4
  0500a84  b 0x500a4c

FastSumChars:   # 0x500a88, 0x30 bytes
  0500a88  cmpwi 4, 0
  0500a8c  li 5, 0
  0500a90  bf 1, 0x500ab0
  0500a94  lbz 6, 0(3)
  0500a98  addic 4, 4, -1
  0500a9c  addic 3, 3, 1
  0500aa0  addc 5, 5, 6
  0500aa4  cmpwi 4, 0
  0500aa8  extsw 5, 5
  0500aac  bt 1, 0x500a94
  0500ab0  ori 3, 5, 0
  0500ab4  blr

STUB_00500ab8:   # 0x500ab8, 0x8 bytes
  0500ab8  li 3, 0
  0500abc  blr

STUB_00500ac0:   # 0x500ac0, 0x8 bytes
  0500ac0  li 3, 0
  0500ac4  blr

STUB_00500ac8:   # 0x500ac8, 0x4 bytes
  0500ac8  blr

FastMtx3Identity:   # 0x500acc, 0x2c bytes
  0500acc  vspltisw 2, 0
  0500ad0  li 4, 16
  0500ad4  li 6, 32
  0500ad8  lis 5, 16256
  0500adc  stvx 2, 0, 3
  0500ae0  stvx 2, 4, 3
  0500ae4  stvx 2, 6, 3
  0500ae8  stw 5, 0(3)
  0500aec  stw 5, 20(3)
  0500af0  stw 5, 40(3)
  0500af4  blr

FastMtx4Identity:   # 0x500af8, 0x38 bytes
  0500af8  vspltisw 2, 0
  0500afc  li 4, 16
  0500b00  li 5, 32
  0500b04  li 6, 48
  0500b08  lis 7, 16256
  0500b0c  stvx 2, 0, 3
  0500b10  stvx 2, 4, 3
  0500b14  stvx 2, 5, 3
  0500b18  stvx 2, 6, 3
  0500b1c  stw 7, 60(3)
  0500b20  stw 7, 40(3)
  0500b24  stw 7, 20(3)
  0500b28  stw 7, 0(3)
  0500b2c  blr

FastMtxScaleIdentity:   # 0x500b30, 0x34 bytes
  0500b30  vspltisw 2, 0
  0500b34  li 4, 16
  0500b38  li 5, 32
  0500b3c  li 6, 48
  0500b40  stvx 2, 0, 3
  0500b44  stvx 2, 4, 3
  0500b48  stvx 2, 5, 3
  0500b4c  stvx 2, 6, 3
  0500b50  stfs 1, 60(3)
  0500b54  stfs 1, 40(3)
  0500b58  stfs 1, 20(3)
  0500b5c  stfs 1, 0(3)
  0500b60  blr

FastEulerToMtx:   # 0x500b64, 0x140 bytes
  0500b64  stdu 1, -176(1)
  0500b68  mflr 0
  0500b6c  std 0, 192(1)
  0500b70  stfd 27, 136(1)
  0500b74  stfd 28, 144(1)
  0500b78  stfd 29, 152(1)
  0500b7c  stfd 30, 160(1)
  0500b80  stfd 31, 168(1)
  0500b84  std 31, 128(1)
  0500b88  std 30, 120(1)
  0500b8c  ori 31, 4, 0
  0500b90  ori 30, 3, 0
  0500b94  li 4, 0
  0500b98  lfs 1, 0(31)
  0500b9c  bl 0x5dd914
  0500ba0  nop
  0500ba4  lfs 2, 0(31)
  0500ba8  fmr 31, 1
  0500bac  li 4, 1
  0500bb0  fmr 1, 2
  0500bb4  bl 0x5dd914
  0500bb8  nop
  0500bbc  lfs 2, 4(31)
  0500bc0  fmr 30, 1
  0500bc4  li 4, 0
  0500bc8  fmr 1, 2
  0500bcc  bl 0x5dd914
  0500bd0  nop
  0500bd4  lfs 2, 4(31)
  0500bd8  fmr 29, 1
  0500bdc  li 4, 1
  0500be0  fmr 1, 2
  0500be4  bl 0x5dd914
  0500be8  nop
  0500bec  lfs 2, 8(31)
  0500bf0  fmr 28, 1
  0500bf4  li 4, 0
  0500bf8  fmr 1, 2
  0500bfc  bl 0x5dd914
  0500c00  nop
  0500c04  fmr 27, 1
  0500c08  lfs 1, 8(31)
  0500c0c  li 4, 1
  0500c10  bl 0x5dd914
  0500c14  nop
  0500c18  fmuls 2, 1, 29
  0500c1c  fmuls 4, 30, 27
  0500c20  fmuls 3, 29, 27
  0500c24  fmuls 5, 30, 1
  0500c28  fmuls 6, 31, 27
  0500c2c  fmuls 7, 28, 1
  0500c30  fmuls 1, 1, 31
  0500c34  fmuls 8, 28, 27
  0500c38  fneg 9, 29
  0500c3c  fmuls 10, 28, 31
  0500c40  fmuls 11, 30, 28
  0500c44  fmsubs 4, 31, 2, 4
  0500c48  fmadds 5, 31, 3, 5
  0500c4c  fmadds 2, 30, 2, 6
  0500c50  fmsubs 1, 30, 3, 1
  0500c54  stfs 7, 0(30)
  0500c58  stfs 8, 4(30)
  0500c5c  stfs 9, 8(30)
  0500c60  stfs 10, 24(30)
  0500c64  stfs 11, 40(30)
  0500c68  stfs 4, 16(30)
  0500c6c  stfs 5, 20(30)
  0500c70  stfs 2, 32(30)
  0500c74  stfs 1, 36(30)
  0500c78  ld 0, 192(1)
  0500c7c  mtlr 0
  0500c80  lfd 27, 136(1)
  0500c84  lfd 28, 144(1)
  0500c88  lfd 29, 152(1)
  0500c8c  lfd 30, 160(1)
  0500c90  lfd 31, 168(1)
  0500c94  ld 30, 120(1)
  0500c98  ld 31, 128(1)
  0500c9c  addi 1, 1, 176
  0500ca0  blr

FastEulerToMtx1:   # 0x500ca4, 0x164 bytes
  0500ca4  stdu 1, -176(1)
  0500ca8  mflr 0
  0500cac  std 0, 192(1)
  0500cb0  stfd 27, 136(1)
  0500cb4  stfd 28, 144(1)
  0500cb8  stfd 29, 152(1)
  0500cbc  stfd 30, 160(1)
  0500cc0  stfd 31, 168(1)
  0500cc4  std 31, 128(1)
  0500cc8  std 30, 120(1)
  0500ccc  ori 31, 4, 0
  0500cd0  ori 30, 3, 0
  0500cd4  li 4, 0
  0500cd8  lfs 1, 0(31)
  0500cdc  bl 0x5dd914
  0500ce0  nop
  0500ce4  lfs 2, 0(31)
  0500ce8  fmr 31, 1
  0500cec  li 4, 1
  0500cf0  fmr 1, 2
  0500cf4  bl 0x5dd914
  0500cf8  nop
  0500cfc  lfs 2, 4(31)
  0500d00  fmr 30, 1
  0500d04  li 4, 0
  0500d08  fmr 1, 2
  0500d0c  bl 0x5dd914
  0500d10  nop
  0500d14  lfs 2, 4(31)
  0500d18  fmr 29, 1
  0500d1c  li 4, 1
  0500d20  fmr 1, 2
  0500d24  bl 0x5dd914
  0500d28  nop
  0500d2c  lfs 2, 8(31)
  0500d30  fmr 28, 1
  0500d34  li 4, 0
  0500d38  fmr 1, 2
  0500d3c  bl 0x5dd914
  0500d40  nop
  0500d44  fmr 27, 1
  0500d48  lfs 1, 8(31)
  0500d4c  li 4, 1
  0500d50  bl 0x5dd914
  0500d54  nop
  0500d58  fmuls 2, 1, 29
  0500d5c  li 3, 0
  0500d60  fmuls 4, 30, 27
  0500d64  lis 4, 16256
  0500d68  fmuls 3, 29, 27
  0500d6c  fmuls 5, 30, 1
  0500d70  fmuls 6, 28, 1
  0500d74  stw 3, 12(30)
  0500d78  fmuls 8, 31, 27
  0500d7c  fmuls 7, 28, 27
  0500d80  fneg 9, 29
  0500d84  fmuls 1, 1, 31
  0500d88  fmuls 10, 28, 31
  0500d8c  fmuls 11, 30, 28
  0500d90  fmsubs 4, 31, 2, 4
  0500d94  fmadds 5, 31, 3, 5
  0500d98  fmadds 2, 30, 2, 8
  0500d9c  stfs 6, 0(30)
  0500da0  fmsubs 1, 30, 3, 1
  0500da4  stfs 7, 4(30)
  0500da8  stfs 9, 8(30)
  0500dac  stw 3, 28(30)
  0500db0  stfs 10, 24(30)
  0500db4  stfs 11, 40(30)
  0500db8  stfs 4, 16(30)
  0500dbc  stfs 5, 20(30)
  0500dc0  stw 3, 44(30)
  0500dc4  stw 3, 48(30)
  0500dc8  stfs 2, 32(30)
  0500dcc  stw 3, 52(30)
  0500dd0  stfs 1, 36(30)
  0500dd4  stw 3, 56(30)
  0500dd8  stw 4, 60(30)
  0500ddc  ld 0, 192(1)
  0500de0  mtlr 0
  0500de4  lfd 27, 136(1)
  0500de8  lfd 28, 144(1)
  0500dec  lfd 29, 152(1)
  0500df0  lfd 30, 160(1)
  0500df4  lfd 31, 168(1)
  0500df8  ld 30, 120(1)
  0500dfc  ld 31, 128(1)
  0500e00  addi 1, 1, 176
  0500e04  blr

FastEulerToMtx2:   # 0x500e08, 0x164 bytes
  0500e08  stdu 1, -176(1)
  0500e0c  mflr 0
  0500e10  std 0, 192(1)
  0500e14  stfd 27, 136(1)
  0500e18  stfd 28, 144(1)
  0500e1c  stfd 29, 152(1)
  0500e20  stfd 30, 160(1)
  0500e24  stfd 31, 168(1)
  0500e28  std 31, 128(1)
  0500e2c  std 30, 120(1)
  0500e30  ori 31, 4, 0
  0500e34  ori 30, 3, 0
  0500e38  li 4, 0
  0500e3c  lfs 1, 0(31)
  0500e40  bl 0x5dd914
  0500e44  nop
  0500e48  lfs 2, 0(31)
  0500e4c  fmr 31, 1
  0500e50  li 4, 1
  0500e54  fmr 1, 2
  0500e58  bl 0x5dd914
  0500e5c  nop
  0500e60  lfs 2, 4(31)
  0500e64  fmr 30, 1
  0500e68  li 4, 0
  0500e6c  fmr 1, 2
  0500e70  bl 0x5dd914
  0500e74  nop
  0500e78  lfs 2, 4(31)
  0500e7c  fmr 29, 1
  0500e80  li 4, 1
  0500e84  fmr 1, 2
  0500e88  bl 0x5dd914
  0500e8c  nop
  0500e90  lfs 2, 8(31)
  0500e94  fmr 28, 1
  0500e98  li 4, 0
  0500e9c  fmr 1, 2
  0500ea0  bl 0x5dd914
  0500ea4  nop
  0500ea8  fmr 27, 1
  0500eac  lfs 1, 8(31)
  0500eb0  li 4, 1
  0500eb4  bl 0x5dd914
  0500eb8  nop
  0500ebc  fmuls 2, 1, 29
  0500ec0  li 3, 0
  0500ec4  fmuls 4, 30, 27
  0500ec8  lis 4, 16256
  0500ecc  fmuls 3, 29, 27
  0500ed0  fmuls 5, 30, 1
  0500ed4  fmuls 6, 28, 1
  0500ed8  stw 3, 12(30)
  0500edc  fmuls 8, 31, 27
  0500ee0  fmuls 7, 28, 27
  0500ee4  fneg 9, 29
  0500ee8  fmuls 1, 1, 31
  0500eec  fmuls 10, 28, 31
  0500ef0  fmuls 11, 30, 28
  0500ef4  fmsubs 4, 31, 2, 4
  0500ef8  fmadds 5, 31, 3, 5
  0500efc  fmadds 2, 30, 2, 8
  0500f00  stfs 6, 0(30)
  0500f04  fmsubs 1, 30, 3, 1
  0500f08  stfs 7, 4(30)
  0500f0c  stfs 9, 8(30)
  0500f10  stw 3, 28(30)
  0500f14  stfs 10, 24(30)
  0500f18  stfs 11, 40(30)
  0500f1c  stfs 4, 16(30)
  0500f20  stfs 5, 20(30)
  0500f24  stw 3, 44(30)
  0500f28  stw 3, 48(30)
  0500f2c  stfs 2, 32(30)
  0500f30  stw 3, 52(30)
  0500f34  stfs 1, 36(30)
  0500f38  stw 3, 56(30)
  0500f3c  stw 4, 60(30)
  0500f40  ld 0, 192(1)
  0500f44  mtlr 0
  0500f48  lfd 27, 136(1)
  0500f4c  lfd 28, 144(1)
  0500f50  lfd 29, 152(1)
  0500f54  lfd 30, 160(1)
  0500f58  lfd 31, 168(1)
  0500f5c  ld 30, 120(1)
  0500f60  ld 31, 128(1)
  0500f64  addi 1, 1, 176
  0500f68  blr

FastMtxCopyNoTranslate:   # 0x500f6c, 0x3c bytes
  0500f6c  li 5, 16
  0500f70  lvx 2, 0, 4
  0500f74  li 6, 32
  0500f78  li 7, 0
  0500f7c  lis 8, 16256
  0500f80  lvx 3, 5, 4
  0500f84  lvx 4, 6, 4
  0500f88  stvx 2, 0, 3
  0500f8c  stvx 3, 5, 3
  0500f90  stvx 4, 6, 3
  0500f94  stw 7, 56(3)
  0500f98  stw 7, 52(3)
  0500f9c  stw 7, 48(3)
  0500fa0  stw 8, 60(3)
  0500fa4  blr

FastApplyTransform:   # 0x500fa8, 0x24 bytes
  0500fa8  li 5, 16
  0500fac  lvx 2, 0, 4
  0500fb0  li 6, 32
  0500fb4  lvx 3, 5, 4
  0500fb8  lvx 4, 6, 4
  0500fbc  stvx 2, 0, 3
  0500fc0  stvx 3, 5, 3
  0500fc4  stvx 4, 6, 3
  0500fc8  blr

FastMtx3Transpose:   # 0x500fcc, 0x58 bytes
  0500fcc  lfs 2, 0(4)
  0500fd0  lfs 3, 16(4)
  0500fd4  lfs 4, 32(4)
  0500fd8  lfs 5, 4(4)
  0500fdc  lfs 6, 20(4)
  0500fe0  lfs 7, 36(4)
  0500fe4  lfs 8, 8(4)
  0500fe8  lfs 9, 24(4)
  0500fec  lfs 10, 40(4)
  0500ff0  stfs 2, 0(3)
  0500ff4  stfs 3, 4(3)
  0500ff8  stfs 4, 8(3)
  0500ffc  stfs 1, 12(3)
  0501000  stfs 5, 16(3)
  0501004  stfs 6, 20(3)
  0501008  stfs 7, 24(3)
  050100c  stfs 1, 28(3)
  0501010  stfs 8, 32(3)
  0501014  stfs 9, 36(3)
  0501018  stfs 10, 40(3)
  050101c  stfs 1, 44(3)
  0501020  blr

FastMtx4Transpose:   # 0x501024, 0x9c bytes
  0501024  stdu 1, -64(1)
  0501028  stfd 30, 48(1)
  050102c  stfd 31, 56(1)
  0501030  lfs 1, 0(4)
  0501034  lfs 2, 16(4)
  0501038  lfs 3, 32(4)
  050103c  lfs 4, 48(4)
  0501040  lfs 5, 4(4)
  0501044  lfs 6, 20(4)
  0501048  lfs 7, 36(4)
  050104c  lfs 8, 52(4)
  0501050  lfs 9, 8(4)
  0501054  lfs 10, 24(4)
  0501058  lfs 11, 40(4)
  050105c  lfs 12, 56(4)
  0501060  lfs 13, 12(4)
  0501064  lfs 0, 28(4)
  0501068  lfs 31, 44(4)
  050106c  lfs 30, 60(4)
  0501070  stfs 1, 0(3)
  0501074  stfs 2, 4(3)
  0501078  stfs 3, 8(3)
  050107c  stfs 4, 12(3)
  0501080  stfs 5, 16(3)
  0501084  stfs 6, 20(3)
  0501088  stfs 7, 24(3)
  050108c  stfs 8, 28(3)
  0501090  stfs 9, 32(3)
  0501094  stfs 10, 36(3)
  0501098  stfs 11, 40(3)
  050109c  stfs 12, 44(3)
  05010a0  stfs 13, 48(3)
  05010a4  stfs 0, 52(3)
  05010a8  stfs 31, 56(3)
  05010ac  stfs 30, 60(3)
  05010b0  lfd 30, 48(1)
  05010b4  lfd 31, 56(1)
  05010b8  addi 1, 1, 64
  05010bc  blr

FastNormalizeRMtx4:   # 0x5010c0, 0x70 bytes
  05010c0  lfs 1, 0(4)
  05010c4  li 5, 0
  05010c8  lfs 2, 16(4)
  05010cc  lis 6, 16256
  05010d0  lfs 3, 32(4)
  05010d4  lfs 4, 4(4)
  05010d8  lfs 5, 20(4)
  05010dc  lfs 6, 36(4)
  05010e0  lfs 7, 8(4)
  05010e4  lfs 8, 24(4)
  05010e8  lfs 9, 40(4)
  05010ec  stfs 1, 0(3)
  05010f0  stfs 2, 4(3)
  05010f4  stfs 3, 8(3)
  05010f8  stw 5, 12(3)
  05010fc  stfs 4, 16(3)
  0501100  stfs 5, 20(3)
  0501104  stfs 6, 24(3)
  0501108  stw 5, 28(3)
  050110c  stfs 7, 32(3)
  0501110  stfs 8, 36(3)
  0501114  stfs 9, 40(3)
  0501118  stw 5, 44(3)
  050111c  stw 5, 48(3)
  0501120  stw 5, 52(3)
  0501124  stw 5, 56(3)
  0501128  stw 6, 60(3)
  050112c  blr

FastMtx4ToMtx4Scale:   # 0x501130, 0x58 bytes
  0501130  lfs 2, 0(4)
  0501134  lfs 3, 16(4)
  0501138  lfs 4, 32(4)
  050113c  lfs 5, 4(4)
  0501140  lfs 6, 20(4)
  0501144  lfs 7, 36(4)
  0501148  lfs 8, 8(4)
  050114c  lfs 9, 24(4)
  0501150  lfs 10, 40(4)
  0501154  stfs 2, 0(3)
  0501158  stfs 3, 4(3)
  050115c  stfs 4, 8(3)
  0501160  stfs 1, 12(3)
  0501164  stfs 5, 16(3)
  0501168  stfs 6, 20(3)
  050116c  stfs 7, 24(3)
  0501170  stfs 1, 28(3)
  0501174  stfs 8, 32(3)
  0501178  stfs 9, 36(3)
  050117c  stfs 10, 40(3)
  0501180  stfs 1, 44(3)
  0501184  blr

FastMtxScale:   # 0x501188, 0xc4 bytes
  0501188  lfs 2, 0(4)
  050118c  lfs 3, 4(4)
  0501190  fmuls 2, 2, 1
  0501194  lfs 4, 8(4)
  0501198  fmuls 3, 3, 1
  050119c  lfs 5, 12(4)
  05011a0  fmuls 4, 4, 1
  05011a4  fmuls 5, 5, 1
  05011a8  stfs 2, 0(3)
  05011ac  stfs 3, 4(3)
  05011b0  stfs 4, 8(3)
  05011b4  stfs 5, 12(3)
  05011b8  lfs 2, 16(4)
  05011bc  lfs 3, 20(4)
  05011c0  fmuls 2, 2, 1
  05011c4  lfs 4, 24(4)
  05011c8  fmuls 3, 3, 1
  05011cc  lfs 5, 28(4)
  05011d0  fmuls 4, 4, 1
  05011d4  fmuls 5, 5, 1
  05011d8  stfs 2, 16(3)
  05011dc  stfs 3, 20(3)
  05011e0  stfs 4, 24(3)
  05011e4  stfs 5, 28(3)
  05011e8  lfs 2, 32(4)
  05011ec  lfs 3, 36(4)
  05011f0  fmuls 2, 2, 1
  05011f4  lfs 4, 40(4)
  05011f8  fmuls 3, 3, 1
  05011fc  lfs 5, 44(4)
  0501200  fmuls 4, 4, 1
  0501204  fmuls 5, 5, 1
  0501208  stfs 2, 32(3)
  050120c  stfs 3, 36(3)
  0501210  stfs 4, 40(3)
  0501214  stfs 5, 44(3)
  0501218  lfs 2, 48(4)
  050121c  lfs 3, 52(4)
  0501220  fmuls 2, 2, 1
  0501224  lfs 4, 56(4)
  0501228  fmuls 3, 3, 1
  050122c  lfs 5, 60(4)
  0501230  fmuls 4, 4, 1
  0501234  fmuls 1, 5, 1
  0501238  stfs 2, 48(3)
  050123c  stfs 3, 52(3)
  0501240  stfs 4, 56(3)
  0501244  stfs 1, 60(3)
  0501248  blr

FastVecMtx3Mult:   # 0x50124c, 0x64 bytes
  050124c  lfs 1, 16(4)
  0501250  lfs 2, 4(5)
  0501254  lfs 3, 20(4)
  0501258  lfs 4, 0(4)
  050125c  lfs 5, 0(5)
  0501260  fmuls 1, 1, 2
  0501264  lfs 6, 24(4)
  0501268  fmuls 3, 3, 2
  050126c  lfs 7, 4(4)
  0501270  fmuls 2, 6, 2
  0501274  lfs 6, 8(4)
  0501278  lfs 8, 32(4)
  050127c  lfs 9, 8(5)
  0501280  fmadds 1, 4, 5, 1
  0501284  fmadds 3, 7, 5, 3
  0501288  lfs 4, 36(4)
  050128c  lfs 7, 40(4)
  0501290  fmadds 2, 6, 5, 2
  0501294  fmadds 1, 8, 9, 1
  0501298  fmadds 3, 4, 9, 3
  050129c  fmadds 2, 7, 9, 2
  05012a0  stfs 1, 0(3)
  05012a4  stfs 3, 4(3)
  05012a8  stfs 2, 8(3)
  05012ac  blr

FastVecMtx4Mult:   # 0x5012b0, 0x80 bytes
  05012b0  lfs 1, 16(4)
  05012b4  lfs 2, 4(5)
  05012b8  lfs 3, 20(4)
  05012bc  lfs 4, 0(4)
  05012c0  lfs 5, 0(5)
  05012c4  fmuls 1, 1, 2
  05012c8  lfs 6, 24(4)
  05012cc  fmuls 3, 3, 2
  05012d0  lfs 7, 28(4)
  05012d4  fmuls 6, 6, 2
  05012d8  fmuls 2, 7, 2
  05012dc  lfs 8, 4(4)
  05012e0  lfs 7, 8(4)
  05012e4  lfs 9, 32(4)
  05012e8  fmadds 1, 4, 5, 1
  05012ec  lfs 4, 12(4)
  05012f0  fmadds 3, 8, 5, 3
  05012f4  fmadds 6, 7, 5, 6
  05012f8  fmadds 2, 4, 5, 2
  05012fc  lfs 8, 8(5)
  0501300  lfs 10, 36(4)
  0501304  lfs 11, 40(4)
  0501308  lfs 4, 44(4)
  050130c  fmadds 1, 9, 8, 1
  0501310  fmadds 3, 10, 8, 3
  0501314  fmadds 5, 11, 8, 6
  0501318  fmadds 2, 4, 8, 2
  050131c  stfs 1, 0(3)
  0501320  stfs 3, 4(3)
  0501324  stfs 5, 8(3)
  0501328  stfs 2, 12(3)
  050132c  blr

FastVecMtx3MultTranslate:   # 0x501330, 0x7c bytes
  0501330  lfs 1, 16(4)
  0501334  lfs 2, 4(5)
  0501338  lfs 3, 20(4)
  050133c  lfs 4, 0(4)
  0501340  lfs 5, 0(5)
  0501344  fmuls 1, 1, 2
  0501348  lfs 6, 24(4)
  050134c  fmuls 3, 3, 2
  0501350  lfs 7, 4(4)
  0501354  fmuls 2, 6, 2
  0501358  lfs 6, 8(4)
  050135c  lfs 8, 32(4)
  0501360  lfs 9, 8(5)
  0501364  fmadds 1, 4, 5, 1
  0501368  fmadds 3, 7, 5, 3
  050136c  lfs 4, 36(4)
  0501370  lfs 7, 40(4)
  0501374  fmadds 2, 6, 5, 2
  0501378  lfs 10, 48(4)
  050137c  lfs 5, 52(4)
  0501380  lfs 6, 56(4)
  0501384  fmadds 1, 8, 9, 1
  0501388  fmadds 3, 4, 9, 3
  050138c  fmadds 2, 7, 9, 2
  0501390  fadds 1, 1, 10
  0501394  fadds 3, 3, 5
  0501398  fadds 2, 2, 6
  050139c  stfs 1, 0(3)
  05013a0  stfs 3, 4(3)
  05013a4  stfs 2, 8(3)
  05013a8  blr

FastVec3MtxMultTranslateW:   # 0x5013ac, 0x84 bytes
  05013ac  lfs 1, 16(4)
  05013b0  lfs 2, 4(5)
  05013b4  lfs 3, 20(4)
  05013b8  lfs 4, 0(4)
  05013bc  lfs 5, 0(5)
  05013c0  fmuls 1, 1, 2
  05013c4  lfs 6, 24(4)
  05013c8  fmuls 3, 3, 2
  05013cc  lfs 7, 4(4)
  05013d0  fmuls 2, 6, 2
  05013d4  lfs 6, 8(4)
  05013d8  lfs 8, 32(4)
  05013dc  lfs 9, 8(5)
  05013e0  fmadds 1, 4, 5, 1
  05013e4  fmadds 3, 7, 5, 3
  05013e8  lfs 4, 36(4)
  05013ec  lfs 7, 40(4)
  05013f0  fmadds 2, 6, 5, 2
  05013f4  lfs 10, 48(4)
  05013f8  lfs 5, 52(4)
  05013fc  lfs 6, 56(4)
  0501400  lis 4, 16256
  0501404  fmadds 1, 8, 9, 1
  0501408  fmadds 3, 4, 9, 3
  050140c  stw 4, 12(3)
  0501410  fmadds 2, 7, 9, 2
  0501414  fadds 1, 1, 10
  0501418  fadds 3, 3, 5
  050141c  fadds 2, 2, 6
  0501420  stfs 1, 0(3)
  0501424  stfs 3, 4(3)
  0501428  stfs 2, 8(3)
  050142c  blr

FastVecMtx4MultSingle:   # 0x501430, 0xa4 bytes
  0501430  lfs 1, 16(4)
  0501434  lfs 2, 4(5)
  0501438  lfs 3, 20(4)
  050143c  lfs 4, 0(4)
  0501440  lfs 5, 0(5)
  0501444  fmuls 1, 1, 2
  0501448  lfs 6, 24(4)
  050144c  fmuls 3, 3, 2
  0501450  lfs 7, 4(4)
  0501454  lfs 8, 28(4)
  0501458  fmuls 6, 6, 2
  050145c  lfs 9, 8(4)
  0501460  fmuls 2, 8, 2
  0501464  lfs 8, 32(4)
  0501468  fmadds 1, 4, 5, 1
  050146c  lfs 4, 8(5)
  0501470  fmadds 3, 7, 5, 3
  0501474  lfs 7, 12(4)
  0501478  fmadds 6, 9, 5, 6
  050147c  lfs 10, 36(4)
  0501480  fmadds 2, 7, 5, 2
  0501484  lfs 11, 48(4)
  0501488  lfs 9, 40(4)
  050148c  lfs 12, 12(5)
  0501490  lfs 5, 44(4)
  0501494  lfs 7, 52(4)
  0501498  fmadds 1, 8, 4, 1
  050149c  lfs 8, 56(4)
  05014a0  fmadds 3, 10, 4, 3
  05014a4  fmadds 6, 9, 4, 6
  05014a8  fmadds 2, 5, 4, 2
  05014ac  lfs 9, 60(4)
  05014b0  fmadds 1, 11, 12, 1
  05014b4  fmadds 3, 7, 12, 3
  05014b8  fmadds 4, 8, 12, 6
  05014bc  fmadds 2, 9, 12, 2
  05014c0  stfs 1, 0(3)
  05014c4  stfs 3, 4(3)
  05014c8  stfs 4, 8(3)
  05014cc  stfs 2, 12(3)
  05014d0  blr

FastVecMtx4MultBatch3:   # 0x5014d4, 0x94 bytes
  05014d4  stdu 1, -192(1)
  05014d8  mflr 0
  05014dc  std 0, 208(1)
  05014e0  std 29, 168(1)
  05014e4  std 31, 184(1)
  05014e8  ori 29, 3, 0
  05014ec  std 30, 176(1)
  05014f0  ori 31, 5, 0
  05014f4  ori 30, 4, 0
  05014f8  addic 3, 1, 112
  05014fc  bl 0x5012b0
  0501500  addic 3, 1, 128
  0501504  addic 5, 31, 16
  0501508  ori 4, 30, 0
  050150c  bl 0x5012b0
  0501510  addic 3, 1, 144
  0501514  addic 5, 31, 32
  0501518  ori 4, 30, 0
  050151c  bl 0x5012b0
  0501520  li 3, 112
  0501524  li 4, 128
  0501528  li 6, 144
  050152c  li 5, 16
  0501530  li 7, 32
  0501534  lvx 2, 3, 1
  0501538  lvx 3, 4, 1
  050153c  lvx 4, 6, 1
  0501540  stvx 2, 0, 29
  0501544  stvx 3, 5, 29
  0501548  stvx 4, 7, 29
  050154c  ld 0, 208(1)
  0501550  mtlr 0
  0501554  ld 29, 168(1)
  0501558  ld 30, 176(1)
  050155c  ld 31, 184(1)
  0501560  addi 1, 1, 192
  0501564  blr

FastVecMtx4MultBatch3InPlace:   # 0x501568, 0xc4 bytes
  0501568  stdu 1, -208(1)
  050156c  mflr 0
  0501570  std 0, 224(1)
  0501574  stfd 29, 184(1)
  0501578  stfd 30, 192(1)
  050157c  stfd 31, 200(1)
  0501580  std 31, 176(1)
  0501584  std 30, 168(1)
  0501588  ori 31, 3, 0
  050158c  ori 30, 5, 0
  0501590  std 29, 160(1)
  0501594  addic 3, 1, 112
  0501598  ori 29, 4, 0
  050159c  lfs 31, 12(31)
  05015a0  lfs 30, 28(31)
  05015a4  lfs 29, 44(31)
  05015a8  bl 0x5012b0
  05015ac  addic 3, 1, 128
  05015b0  addic 5, 30, 16
  05015b4  ori 4, 29, 0
  05015b8  bl 0x5012b0
  05015bc  addic 3, 1, 144
  05015c0  addic 5, 30, 32
  05015c4  ori 4, 29, 0
  05015c8  bl 0x5012b0
  05015cc  li 3, 112
  05015d0  stfs 31, 12(31)
  05015d4  li 4, 128
  05015d8  stfs 30, 28(31)
  05015dc  li 5, 144
  05015e0  stfs 29, 44(31)
  05015e4  li 6, 16
  05015e8  li 7, 32
  05015ec  lvx 2, 3, 1
  05015f0  lvx 3, 4, 1
  05015f4  lvx 4, 5, 1
  05015f8  stvx 2, 0, 31
  05015fc  stvx 3, 6, 31
  0501600  stvx 4, 7, 31
  0501604  ld 0, 224(1)
  0501608  mtlr 0
  050160c  lfd 29, 184(1)
  0501610  lfd 30, 192(1)
  0501614  lfd 31, 200(1)
  0501618  ld 29, 160(1)
  050161c  ld 30, 168(1)
  0501620  ld 31, 176(1)
  0501624  addi 1, 1, 208
  0501628  blr

FastVecMtx4Mul:   # 0x50162c, 0xb4 bytes
  050162c  stdu 1, -208(1)
  0501630  mflr 0
  0501634  std 0, 224(1)
  0501638  std 29, 184(1)
  050163c  std 31, 200(1)
  0501640  ori 29, 3, 0
  0501644  std 30, 192(1)
  0501648  ori 31, 5, 0
  050164c  ori 30, 4, 0
  0501650  addic 3, 1, 112
  0501654  bl 0x501430
  0501658  addic 3, 1, 128
  050165c  addic 5, 31, 16
  0501660  ori 4, 30, 0
  0501664  bl 0x501430
  0501668  addic 3, 1, 144
  050166c  addic 5, 31, 32
  0501670  ori 4, 30, 0
  0501674  bl 0x501430
  0501678  addic 3, 1, 160
  050167c  addic 5, 31, 48
  0501680  ori 4, 30, 0
  0501684  bl 0x501430
  0501688  li 3, 112
  050168c  li 4, 128
  0501690  li 5, 144
  0501694  li 7, 160
  0501698  li 6, 16
  050169c  lvx 2, 3, 1
  05016a0  li 3, 32
  05016a4  lvx 3, 4, 1
  05016a8  li 8, 48
  05016ac  lvx 4, 5, 1
  05016b0  lvx 5, 7, 1
  05016b4  stvx 2, 0, 29
  05016b8  stvx 3, 6, 29
  05016bc  stvx 4, 3, 29
  05016c0  stvx 5, 8, 29
  05016c4  ld 0, 224(1)
  05016c8  mtlr 0
  05016cc  ld 29, 184(1)
  05016d0  ld 30, 192(1)
  05016d4  ld 31, 200(1)
  05016d8  addi 1, 1, 208
  05016dc  blr

FastVecAdd:   # 0x5016e0, 0xe4 bytes
  05016e0  lfs 1, 0(4)
  05016e4  lfs 2, 0(5)
  05016e8  lfs 3, 4(4)
  05016ec  fadds 1, 1, 2
  05016f0  lfs 2, 4(5)
  05016f4  lfs 4, 8(4)
  05016f8  fadds 2, 3, 2
  05016fc  lfs 3, 8(5)
  0501700  fadds 3, 4, 3
  0501704  lfs 4, 12(4)
  0501708  stfs 1, 0(3)
  050170c  lfs 1, 16(4)
  0501710  lfs 5, 16(5)
  0501714  stfs 2, 4(3)
  0501718  lfs 2, 20(4)
  050171c  fadds 1, 1, 5
  0501720  stfs 3, 8(3)
  0501724  lfs 3, 20(5)
  0501728  lfs 5, 24(4)
  050172c  fadds 2, 2, 3
  0501730  lfs 3, 24(5)
  0501734  stfs 4, 12(3)
  0501738  fadds 3, 5, 3
  050173c  stfs 1, 16(3)
  0501740  lfs 1, 32(4)
  0501744  lfs 4, 32(5)
  0501748  fadds 1, 1, 4
  050174c  stfs 2, 20(3)
  0501750  lfs 2, 36(4)
  0501754  lfs 4, 36(5)
  0501758  stfs 3, 24(3)
  050175c  lfs 3, 40(4)
  0501760  fadds 2, 2, 4
  0501764  lfs 4, 40(5)
  0501768  fadds 3, 3, 4
  050176c  lfs 4, 28(4)
  0501770  stfs 4, 28(3)
  0501774  stfs 1, 32(3)
  0501778  lfs 1, 48(4)
  050177c  lfs 4, 48(5)
  0501780  fadds 1, 1, 4
  0501784  stfs 2, 36(3)
  0501788  lfs 2, 52(4)
  050178c  stfs 3, 40(3)
  0501790  lfs 3, 52(5)
  0501794  lfs 4, 56(4)
  0501798  fadds 2, 2, 3
  050179c  lfs 3, 56(5)
  05017a0  lfs 5, 44(4)
  05017a4  fadds 3, 4, 3
  05017a8  stfs 5, 44(3)
  05017ac  lfs 4, 60(4)
  05017b0  stfs 1, 48(3)
  05017b4  stfs 4, 60(3)
  05017b8  stfs 2, 52(3)
  05017bc  stfs 3, 56(3)
  05017c0  blr

FastQuaternionMult:   # 0x5017c4, 0x74 bytes
  05017c4  lfs 1, 0(5)
  05017c8  lfs 2, 0(4)
  05017cc  lfs 3, 12(5)
  05017d0  lfs 4, 4(4)
  05017d4  fmuls 5, 2, 3
  05017d8  lfs 6, 8(4)
  05017dc  fmuls 8, 4, 3
  05017e0  lfs 7, 12(4)
  05017e4  fmuls 9, 6, 3
  05017e8  lfs 10, 8(5)
  05017ec  fmuls 11, 2, 1
  05017f0  lfs 12, 4(5)
  05017f4  fmadds 5, 7, 1, 5
  05017f8  fmadds 8, 7, 12, 8
  05017fc  fmadds 9, 7, 10, 9
  0501800  fmsubs 3, 7, 3, 11
  0501804  fmadds 5, 4, 10, 5
  0501808  fmadds 7, 6, 1, 8
  050180c  fmadds 8, 2, 12, 9
  0501810  fnmsubs 3, 4, 12, 3
  0501814  fnmsubs 5, 6, 12, 5
  0501818  fnmsubs 2, 2, 10, 7
  050181c  fnmsubs 1, 4, 1, 8
  0501820  fnmsubs 3, 6, 10, 3
  0501824  stfs 5, 0(3)
  0501828  stfs 2, 4(3)
  050182c  stfs 1, 8(3)
  0501830  stfs 3, 12(3)
  0501834  blr

FastSlerp:   # 0x501848, 0x110 bytes
  0501848  lis 6, 80
  050184c  addi 6, 6, 6200
  0501850  lfs 2, 0(6)
  0501854  lfs 3, 4(4)
  0501858  fsubs 7, 2, 1
  050185c  lfs 4, 4(5)
  0501860  lfs 5, 0(4)
  0501864  fmuls 4, 4, 1
  0501868  lfs 6, 0(5)
  050186c  lfs 8, 8(4)
  0501870  lfs 9, 8(5)
  0501874  fmuls 6, 6, 1
  0501878  lfs 10, 12(4)
  050187c  lfs 11, 12(5)
  0501880  fmuls 9, 9, 1
  0501884  fmuls 1, 11, 1
  0501888  fmuls 3, 3, 7
  050188c  fmuls 5, 5, 7
  0501890  fmuls 8, 8, 7
  0501894  fmuls 7, 10, 7
  0501898  lfs 10, 4(6)
  050189c  fmuls 11, 3, 4
  05018a0  fsubs 12, 3, 4
  05018a4  fadds 3, 3, 4
  05018a8  fadds 13, 7, 1
  05018ac  fmadds 4, 5, 6, 11
  05018b0  fsubs 11, 5, 6
  05018b4  fadds 5, 5, 6
  05018b8  fsubs 6, 8, 9
  05018bc  fmadds 4, 8, 9, 4
  05018c0  fadds 8, 8, 9
  05018c4  fsubs 9, 7, 1
  05018c8  fmadds 1, 7, 1, 4
  05018cc  fsub 4, 1, 10
  05018d0  fsub 7, 1, 10
  05018d4  fsub 0, 1, 10
  05018d8  fsub 1, 1, 10
  05018dc  fsel 3, 4, 3, 12
  05018e0  fsel 4, 7, 5, 11
  05018e4  fsel 5, 0, 8, 6
  05018e8  fsel 1, 1, 13, 9
  05018ec  lfs 7, 8(6)
  05018f0  fmuls 6, 3, 3
  05018f4  fmadds 6, 4, 4, 6
  05018f8  fmadds 6, 5, 5, 6
  05018fc  fmadds 6, 1, 1, 6
  0501900  frsqrte 8, 6
  0501904  fmuls 9, 6, 8
  0501908  fmuls 10, 7, 8
  050190c  fnmsubs 9, 9, 8, 2
  0501910  fmadds 8, 9, 10, 8
  0501914  fmuls 9, 6, 8
  0501918  fmuls 10, 7, 8
  050191c  fnmsubs 9, 9, 8, 2
  0501920  fmadds 8, 9, 10, 8
  0501924  fmuls 6, 6, 8
  0501928  fmuls 7, 7, 8
  050192c  fnmsubs 2, 6, 8, 2
  0501930  fmadds 2, 2, 7, 8
  0501934  fmuls 4, 2, 4
  0501938  fmuls 3, 2, 3
  050193c  fmuls 5, 2, 5
  0501940  fmuls 1, 2, 1
  0501944  stfs 4, 0(3)
  0501948  stfs 3, 4(3)
  050194c  stfs 5, 8(3)
  0501950  stfs 1, 12(3)
  0501954  blr

FastQuaternionToEuler:   # 0x501980, 0x124 bytes
  0501980  lis 5, 80
  0501984  addi 5, 5, 6488
  0501988  lfs 2, 0(5)
  050198c  lfs 3, 24(5)
  0501990  lfs 4, 4(5)
  0501994  fadds 3, 1, 3
  0501998  lfs 5, 8(5)
  050199c  lfs 8, 12(5)
  05019a0  fsubs 6, 2, 3
  05019a4  fsubs 7, 4, 3
  05019a8  fsubs 2, 2, 1
  05019ac  fsubs 4, 4, 1
  05019b0  fsub 9, 3, 6
  05019b4  fsub 11, 1, 2
  05019b8  fsel 3, 9, 6, 3
  05019bc  fsel 1, 11, 2, 1
  05019c0  lfs 6, 16(5)
  05019c4  lfs 9, 20(5)
  05019c8  fsub 10, 7, 3
  05019cc  cmpwi 4, 0
  05019d0  cmpwi 1, 4, 1
  05019d4  fsel 3, 10, 7, 3
  05019d8  fsub 10, 4, 1
  05019dc  lfs 7, 28(5)
  05019e0  fmuls 2, 3, 3
  05019e4  fsel 1, 10, 4, 1
  05019e8  cmpwi 6, 4, -1
  05019ec  fmuls 11, 2, 3
  05019f0  fmuls 10, 1, 1
  05019f4  fmuls 4, 2, 11
  05019f8  fmadds 3, 11, 5, 3
  05019fc  fmuls 11, 2, 4
  0501a00  fmadds 3, 4, 8, 3
  0501a04  fmuls 4, 10, 1
  0501a08  fmuls 2, 2, 11
  0501a0c  fmadds 3, 11, 6, 3
  0501a10  fmuls 11, 10, 4
  0501a14  fmadds 1, 4, 5, 1
  0501a18  fmadds 2, 2, 9, 3
  0501a1c  fmuls 3, 10, 11
  0501a20  fmadds 1, 11, 8, 1
  0501a24  fmuls 2, 2, 7
  0501a28  fmuls 4, 10, 3
  0501a2c  fmadds 1, 3, 6, 1
  0501a30  fabs 5, 2
  0501a34  fnmadds 1, 4, 9, 1
  0501a38  lfs 4, 32(5)
  0501a3c  fsub 6, 2, 4
  0501a40  fsub 2, 2, 4
  0501a44  fadds 3, 5, 7
  0501a48  lfs 5, 36(5)
  0501a4c  li 5, 0
  0501a50  fsqrts 3, 3
  0501a54  stw 5, 8(3)
  0501a58  stw 5, 4(3)
  0501a5c  fdivs 4, 1, 3
  0501a60  fmuls 3, 3, 5
  0501a64  fsel 1, 6, 4, 3
  0501a68  fsel 2, 2, 3, 4
  0501a6c  stfs 1, 0(3)
  0501a70  stfs 2, 12(3)
  0501a74  bt 1, 0x501a80
  0501a78  bf 25, 0x501a94
  0501a7c  b 0x501aa0
  0501a80  bt 5, 0x501a94
  0501a84  li 4, 0
  0501a88  stfs 1, 4(3)
  0501a8c  stw 4, 0(3)
  0501a90  b 0x501aa0
  0501a94  li 4, 0
  0501a98  stfs 1, 8(3)
  0501a9c  stw 4, 0(3)
  0501aa0  blr

FastQuaternionToMtx4:   # 0x501ab0, 0x144 bytes
  0501ab0  vspltisw 2, 0
  0501ab4  lis 5, 80
  0501ab8  li 6, 16
  0501abc  li 7, 32
  0501ac0  addi 5, 5, 6820
  0501ac4  lis 8, 16256
  0501ac8  stvx 2, 0, 4
  0501acc  stvx 2, 6, 4
  0501ad0  stvx 2, 7, 4
  0501ad4  lfs 1, 0(5)
  0501ad8  stw 8, 0(4)
  0501adc  stw 8, 20(4)
  0501ae0  stw 8, 40(4)
  0501ae4  lfs 2, 8(3)
  0501ae8  lfs 3, 4(3)
  0501aec  fmuls 2, 2, 2
  0501af0  lfs 4, 4(5)
  0501af4  fmadds 2, 3, 3, 2
  0501af8  fnmsubs 2, 2, 4, 1
  0501afc  stfs 2, 0(4)
  0501b00  lfs 2, 12(3)
  0501b04  lfs 3, 8(3)
  0501b08  lfs 5, 0(3)
  0501b0c  fmuls 2, 2, 3
  0501b10  lfs 3, 4(3)
  0501b14  fmadds 2, 5, 3, 2
  0501b18  fmuls 2, 2, 4
  0501b1c  stfs 2, 16(4)
  0501b20  lfs 2, 12(3)
  0501b24  lfs 3, 4(3)
  0501b28  lfs 5, 0(3)
  0501b2c  fmuls 2, 2, 3
  0501b30  lfs 3, 8(3)
  0501b34  fmsubs 2, 5, 3, 2
  0501b38  fmuls 2, 2, 4
  0501b3c  stfs 2, 32(4)
  0501b40  lfs 2, 12(3)
  0501b44  lfs 3, 8(3)
  0501b48  lfs 5, 0(3)
  0501b4c  fmuls 2, 2, 3
  0501b50  lfs 3, 4(3)
  0501b54  fmsubs 2, 5, 3, 2
  0501b58  fmuls 2, 2, 4
  0501b5c  stfs 2, 4(4)
  0501b60  lfs 2, 8(3)
  0501b64  lfs 3, 0(3)
  0501b68  fmuls 2, 2, 2
  0501b6c  fmadds 2, 3, 3, 2
  0501b70  fnmsubs 2, 2, 4, 1
  0501b74  stfs 2, 20(4)
  0501b78  lfs 2, 12(3)
  0501b7c  lfs 3, 0(3)
  0501b80  lfs 5, 4(3)
  0501b84  fmuls 2, 2, 3
  0501b88  lfs 3, 8(3)
  0501b8c  fmadds 2, 5, 3, 2
  0501b90  fmuls 2, 2, 4
  0501b94  stfs 2, 36(4)
  0501b98  lfs 2, 12(3)
  0501b9c  lfs 3, 4(3)
  0501ba0  lfs 5, 0(3)
  0501ba4  fmuls 2, 2, 3
  0501ba8  lfs 3, 8(3)
  0501bac  fmadds 2, 5, 3, 2
  0501bb0  fmuls 2, 2, 4
  0501bb4  stfs 2, 8(4)
  0501bb8  lfs 2, 12(3)
  0501bbc  lfs 3, 0(3)
  0501bc0  lfs 5, 4(3)
  0501bc4  fmuls 2, 2, 3
  0501bc8  lfs 3, 8(3)
  0501bcc  fmsubs 2, 5, 3, 2
  0501bd0  fmuls 2, 2, 4
  0501bd4  stfs 2, 24(4)
  0501bd8  lfs 2, 4(3)
  0501bdc  lfs 3, 0(3)
  0501be0  fmuls 2, 2, 2
  0501be4  fmadds 2, 3, 3, 2
  0501be8  fnmsubs 1, 2, 4, 1
  0501bec  stfs 1, 40(4)
  0501bf0  blr

FastVecFromSignedShort:   # 0x501bf8, 0x220 bytes
  0501bf8  li 5, 16
  0501bfc  <unknown>
  0501c00  li 6, 2
  0501c04  vspltisw 2, -16
  0501c08  lis 8, 80
  0501c0c  vspltisw 6, -1
  0501c10  addi 7, 6, 16
  0501c14  vspltisw 11, -1
  0501c18  addi 8, 8, 7156
  0501c1c  <unknown>
  0501c20  li 5, 4
  0501c24  vslw 6, 6, 6
  0501c28  vor 3, 3, 4
  0501c2c  li 9, 6
  0501c30  <unknown>
  0501c34  <unknown>
  0501c38  addi 6, 5, 16
  0501c3c  vsraw 3, 3, 2
  0501c40  vor 4, 4, 5
  0501c44  li 7, 8
  0501c48  <unknown>
  0501c4c  li 10, 12
  0501c50  <unknown>
  0501c54  addi 8, 9, 16
  0501c58  vcfsx 3, 3, 0
  0501c5c  vspltw 5, 5, 0
  0501c60  vsraw 4, 4, 2
  0501c64  addi 11, 7, 16
  0501c68  <unknown>
  0501c6c  <unknown>
  0501c70  vor 7, 7, 8
  0501c74  li 6, 10
  0501c78  vcfsx 4, 4, 0
  0501c7c  vspltisw 8, -1
  0501c80  <unknown>
  0501c84  addi 8, 6, 16
  0501c88  vsraw 7, 7, 2
  0501c8c  vslw 8, 8, 8
  0501c90  li 9, 16
  0501c94  vmaddfp 3, 3, 5, 6
  0501c98  vcfsx 6, 7, 0
  0501c9c  vor 7, 9, 10
  0501ca0  <unknown>
  0501ca4  <unknown>
  0501ca8  vmaddfp 4, 4, 5, 8
  0501cac  vor 8, 9, 10
  0501cb0  vsraw 7, 7, 2
  0501cb4  vslw 10, 11, 11
  0501cb8  vspltisw 11, 3
  0501cbc  vsrw 8, 8, 2
  0501cc0  <unknown>
  0501cc4  vspltw 3, 3, 0
  0501cc8  vcfsx 7, 7, 0
  0501ccc  addi 6, 10, 16
  0501cd0  <unknown>
  0501cd4  vmaddfp 6, 6, 5, 10
  0501cd8  vslw 8, 8, 11
  0501cdc  vspltisw 10, -1
  0501ce0  vor 9, 9, 12
  0501ce4  stvewx 3, 0, 4
  0501ce8  vspltw 3, 4, 0
  0501cec  vcfsx 4, 8, 0
  0501cf0  vslw 8, 10, 10
  0501cf4  vsrw 9, 9, 2
  0501cf8  <unknown>
  0501cfc  li 8, 20
  0501d00  <unknown>
  0501d04  stvewx 3, 5, 4
  0501d08  vslw 3, 9, 11
  0501d0c  vmaddfp 7, 7, 5, 8
  0501d10  vspltisw 8, -1
  0501d14  addi 5, 9, 16
  0501d18  vor 9, 10, 12
  0501d1c  li 6, 18
  0501d20  vspltw 6, 6, 0
  0501d24  vcfsx 3, 3, 0
  0501d28  vslw 8, 8, 8
  0501d2c  vspltisw 10, -1
  0501d30  vsrw 9, 9, 2
  0501d34  vmaddfp 4, 4, 5, 8
  0501d38  vslw 8, 10, 10
  0501d3c  stvewx 6, 7, 4
  0501d40  vslw 6, 9, 11
  0501d44  addi 7, 6, 16
  0501d48  vspltw 7, 7, 0
  0501d4c  vspltisw 9, -1
  0501d50  <unknown>
  0501d54  vmaddfp 3, 3, 5, 8
  0501d58  vcfsx 6, 6, 0
  0501d5c  stvewx 7, 10, 4
  0501d60  <unknown>
  0501d64  addi 10, 8, 16
  0501d68  vspltw 4, 4, 0
  0501d6c  li 5, 22
  0501d70  vslw 7, 9, 9
  0501d74  vor 8, 10, 8
  0501d78  <unknown>
  0501d7c  <unknown>
  0501d80  addi 6, 5, 16
  0501d84  stvewx 4, 9, 4
  0501d88  vspltw 3, 3, 0
  0501d8c  li 7, 24
  0501d90  vmaddfp 5, 6, 5, 7
  0501d94  vor 4, 9, 10
  0501d98  vsraw 6, 8, 2
  0501d9c  li 9, 0
  0501da0  <unknown>
  0501da4  <unknown>
  0501da8  vsraw 4, 4, 2
  0501dac  stvewx 3, 8, 4
  0501db0  vor 3, 7, 8
  0501db4  vcfsx 6, 6, 0
  0501db8  <unknown>
  0501dbc  li 8, 32
  0501dc0  <unknown>
  0501dc4  li 5, 40
  0501dc8  vcfsx 4, 4, 0
  0501dcc  li 3, 36
  0501dd0  vor 7, 7, 8
  0501dd4  li 6, 44
  0501dd8  vsraw 3, 3, 2
  0501ddc  vspltw 5, 5, 0
  0501de0  vsraw 2, 7, 2
  0501de4  vcfsx 3, 3, 0
  0501de8  vcfsx 2, 2, 0
  0501dec  vspltw 6, 6, 0
  0501df0  stvewx 5, 7, 4
  0501df4  stw 9, 28(4)
  0501df8  vspltw 4, 4, 0
  0501dfc  stvewx 6, 8, 4
  0501e00  vspltw 3, 3, 0
  0501e04  stvewx 4, 3, 4
  0501e08  vspltw 2, 2, 0
  0501e0c  stvewx 3, 5, 4
  0501e10  stvewx 2, 6, 4
  0501e14  blr

FastQuaternionToMtx4Identity:   # 0x501e18, 0x74 bytes
  0501e18  stdu 1, -176(1)
  0501e1c  mflr 0
  0501e20  std 0, 192(1)
  0501e24  std 31, 168(1)
  0501e28  ori 31, 4, 0
  0501e2c  addic 4, 1, 112
  0501e30  bl 0x501ab0
  0501e34  li 3, 112
  0501e38  li 5, 128
  0501e3c  li 7, 144
  0501e40  li 4, 16
  0501e44  li 6, 32
  0501e48  lvx 2, 3, 1
  0501e4c  lis 8, 16256
  0501e50  lvx 3, 5, 1
  0501e54  li 3, 0
  0501e58  lvx 4, 7, 1
  0501e5c  stvx 2, 0, 31
  0501e60  stvx 3, 4, 31
  0501e64  stvx 4, 6, 31
  0501e68  stw 3, 56(31)
  0501e6c  stw 3, 52(31)
  0501e70  stw 3, 48(31)
  0501e74  stw 8, 60(31)
  0501e78  ld 0, 192(1)
  0501e7c  mtlr 0
  0501e80  ld 31, 168(1)
  0501e84  addi 1, 1, 176
  0501e88  blr

FastQuaternionVecTransform:   # 0x501e8c, 0x5c bytes
  0501e8c  stdu 1, -192(1)
  0501e90  mflr 0
  0501e94  std 0, 208(1)
  0501e98  std 30, 176(1)
  0501e9c  std 31, 184(1)
  0501ea0  addic 30, 1, 112
  0501ea4  std 29, 168(1)
  0501ea8  ori 31, 4, 0
  0501eac  ori 29, 3, 0
  0501eb0  ori 4, 30, 0
  0501eb4  ori 3, 5, 0
  0501eb8  bl 0x501ab0
  0501ebc  ori 3, 29, 0
  0501ec0  ori 4, 30, 0
  0501ec4  ori 5, 31, 0
  0501ec8  bl 0x5012b0
  0501ecc  ld 0, 208(1)
  0501ed0  mtlr 0
  0501ed4  ld 29, 168(1)
  0501ed8  ld 30, 176(1)
  0501edc  ld 31, 184(1)
  0501ee0  addi 1, 1, 192
  0501ee4  blr

FastQuaternionVecTransformInverse:   # 0x501ee8, 0x68 bytes
  0501ee8  stdu 1, -192(1)
  0501eec  mflr 0
  0501ef0  std 0, 208(1)
  0501ef4  std 30, 176(1)
  0501ef8  std 31, 184(1)
  0501efc  addic 30, 1, 112
  0501f00  std 29, 168(1)
  0501f04  ori 31, 4, 0
  0501f08  ori 29, 3, 0
  0501f0c  ori 4, 30, 0
  0501f10  ori 3, 5, 0
  0501f14  bl 0x501ab0
  0501f18  ori 3, 30, 0
  0501f1c  ori 4, 30, 0
  0501f20  bl 0x500fcc
  0501f24  ori 3, 29, 0
  0501f28  ori 4, 30, 0
  0501f2c  ori 5, 31, 0
  0501f30  bl 0x5012b0
  0501f34  ld 0, 208(1)
  0501f38  mtlr 0
  0501f3c  ld 29, 168(1)
  0501f40  ld 30, 176(1)
  0501f44  ld 31, 184(1)
  0501f48  addi 1, 1, 192
  0501f4c  blr

FastQuaternionVecTransform:   # 0x501f50, 0xb8 bytes
  0501f50  stdu 1, -224(1)
  0501f54  mflr 0
  0501f58  std 0, 240(1)
  0501f5c  std 26, 176(1)
  0501f60  std 28, 192(1)
  0501f64  std 25, 168(1)
  0501f68  addic 26, 1, 112
  0501f6c  ori 28, 4, 0
  0501f70  std 29, 200(1)
  0501f74  ori 25, 3, 0
  0501f78  ori 29, 6, 0
  0501f7c  ori 4, 26, 0
  0501f80  std 31, 216(1)
  0501f84  ori 3, 9, 0
  0501f88  std 30, 208(1)
  0501f8c  ori 31, 8, 0
  0501f90  std 27, 184(1)
  0501f94  ori 30, 7, 0
  0501f98  ori 27, 5, 0
  0501f9c  bl 0x501ab0
  0501fa0  ori 3, 26, 0
  0501fa4  ori 4, 26, 0
  0501fa8  bl 0x500fcc
  0501fac  ori 3, 25, 0
  0501fb0  ori 4, 26, 0
  0501fb4  ori 5, 29, 0
  0501fb8  bl 0x5012b0
  0501fbc  ori 3, 28, 0
  0501fc0  ori 4, 26, 0
  0501fc4  ori 5, 30, 0
  0501fc8  bl 0x5012b0
  0501fcc  ori 3, 27, 0
  0501fd0  ori 4, 26, 0
  0501fd4  ori 5, 31, 0
  0501fd8  bl 0x5012b0
  0501fdc  ld 0, 240(1)
  0501fe0  mtlr 0
  0501fe4  ld 25, 168(1)
  0501fe8  ld 26, 176(1)
  0501fec  ld 27, 184(1)
  0501ff0  ld 28, 192(1)
  0501ff4  ld 29, 200(1)
  0501ff8  ld 30, 208(1)
  0501ffc  ld 31, 216(1)
  0502000  addi 1, 1, 224
  0502004  blr

FastQuaternionSlerp:   # 0x502030, 0x1d8 bytes
  0502030  stdu 1, -208(1)
  0502034  mflr 0
  0502038  std 0, 224(1)
  050203c  fabs 2, 1
  0502040  std 30, 192(1)
  0502044  lis 6, 80
  0502048  ori 30, 3, 0
  050204c  std 31, 200(1)
  0502050  addi 6, 6, 8200
  0502054  ori 31, 4, 0
  0502058  ori 3, 5, 0
  050205c  lfs 3, 0(6)
  0502060  fcmpu 0, 2, 3
  0502064  std 29, 184(1)
  0502068  cror 6, 1, 2
  050206c  bt 6, 0x502094
  0502070  lfs 1, 0(31)
  0502074  stfs 1, 0(30)
  0502078  lfs 1, 4(31)
  050207c  stfs 1, 4(30)
  0502080  lfs 1, 8(31)
  0502084  stfs 1, 8(30)
  0502088  lfs 1, 12(31)
  050208c  stfs 1, 12(30)
  0502090  b 0x5021ec
  0502094  lfs 2, 4(3)
  0502098  lfs 3, 0(3)
  050209c  fmuls 2, 2, 2
  05020a0  lfs 4, 8(3)
  05020a4  lis 4, 80
  05020a8  addi 4, 4, 8200
  05020ac  fmadds 2, 3, 3, 2
  05020b0  lfs 3, 4(4)
  05020b4  fmadds 2, 4, 4, 2
  05020b8  fsqrts 2, 2
  05020bc  fcmpu 0, 2, 3
  05020c0  cror 6, 1, 2
  05020c4  bt 6, 0x5020ec
  05020c8  lfs 1, 0(31)
  05020cc  stfs 1, 0(30)
  05020d0  lfs 1, 4(31)
  05020d4  stfs 1, 4(30)
  05020d8  lfs 1, 8(31)
  05020dc  stfs 1, 8(30)
  05020e0  lfs 1, 12(31)
  05020e4  stfs 1, 12(30)
  05020e8  b 0x5021ec
  05020ec  lis 4, 80
  05020f0  addi 4, 4, 8200
  05020f4  lfs 3, 8(4)
  05020f8  lfs 4, 12(4)
  05020fc  fmuls 1, 1, 3
  0502100  lfs 5, 16(4)
  0502104  lfs 7, 20(4)
  0502108  addic 29, 1, 128
  050210c  fsubs 3, 4, 1
  0502110  fsubs 6, 5, 1
  0502114  fsub 8, 1, 3
  0502118  fsel 3, 8, 3, 1
  050211c  lfs 8, 24(4)
  0502120  lfs 9, 36(4)
  0502124  fadds 1, 1, 9
  0502128  lfs 11, 28(4)
  050212c  fsub 10, 6, 3
  0502130  fsubs 4, 4, 1
  0502134  fsel 3, 10, 6, 3
  0502138  lfs 6, 32(4)
  050213c  fsub 12, 1, 4
  0502140  ori 4, 29, 0
  0502144  fmuls 9, 3, 3
  0502148  fsel 4, 12, 4, 1
  050214c  fsubs 1, 5, 1
  0502150  fmuls 10, 9, 3
  0502154  fmuls 13, 9, 10
  0502158  fmadds 3, 10, 7, 3
  050215c  fsub 10, 1, 4
  0502160  fmuls 5, 9, 13
  0502164  fmadds 3, 13, 8, 3
  0502168  fsel 1, 10, 1, 4
  050216c  fmuls 9, 9, 5
  0502170  fmadds 3, 5, 11, 3
  0502174  fmuls 4, 1, 1
  0502178  fmadds 3, 9, 6, 3
  050217c  fmuls 10, 4, 1
  0502180  fdivs 2, 3, 2
  0502184  lfs 3, 0(3)
  0502188  lfs 5, 4(3)
  050218c  lfs 9, 8(3)
  0502190  addic 3, 1, 112
  0502194  fmuls 12, 4, 10
  0502198  fmadds 1, 10, 7, 1
  050219c  fmuls 7, 4, 12
  05021a0  fmadds 1, 12, 8, 1
  05021a4  fmuls 4, 4, 7
  05021a8  fmadds 1, 7, 11, 1
  05021ac  fmadds 1, 4, 6, 1
  05021b0  stfs 1, 124(1)
  05021b4  fmuls 3, 3, 2
  05021b8  fmuls 4, 5, 2
  05021bc  fmuls 2, 9, 2
  05021c0  stfs 3, 112(1)
  05021c4  stfs 4, 116(1)
  05021c8  stfs 2, 120(1)
  05021cc  bl 0x501ab0
  05021d0  ori 3, 29, 0
  05021d4  ori 4, 29, 0
  05021d8  bl 0x500fcc
  05021dc  ori 3, 30, 0
  05021e0  ori 4, 29, 0
  05021e4  ori 5, 31, 0
  05021e8  bl 0x5012b0
  05021ec  ld 0, 224(1)
  05021f0  mtlr 0
  05021f4  ld 29, 184(1)
  05021f8  ld 30, 192(1)
  05021fc  ld 31, 200(1)
  0502200  addi 1, 1, 208
  0502204  blr

FastVecMtx4MultBatch4VMX:   # 0x502238, 0x184 bytes
  0502238  stdu 1, -192(1)
  050223c  mflr 0
  0502240  std 0, 208(1)
  0502244  std 31, 184(1)
  0502248  ori 31, 6, 0
  050224c  std 30, 176(1)
  0502250  lis 6, 80
  0502254  std 29, 168(1)
  0502258  ori 30, 4, 0
  050225c  std 28, 160(1)
  0502260  ori 29, 5, 0
  0502264  addi 28, 6, 8720
  0502268  addic 4, 1, 112
  050226c  bl 0x501ab0
  0502270  li 3, 112
  0502274  li 4, 128
  0502278  vspltisw 6, -1
  050227c  li 5, 144
  0502280  vspltisw 10, -1
  0502284  vspltisw 8, -1
  0502288  li 6, 4
  050228c  vspltisw 0, -1
  0502290  lvx 2, 3, 1
  0502294  lvx 3, 4, 1
  0502298  li 3, 8
  050229c  vspltw 5, 2, 0
  05022a0  vslw 6, 6, 6
  05022a4  lvx 4, 5, 1
  05022a8  li 4, 32
  05022ac  <unknown>
  05022b0  vspltw 11, 2, 2
  05022b4  vmaddfp 5, 5, 7, 6
  05022b8  vspltw 9, 2, 1
  05022bc  vslw 6, 10, 10
  05022c0  vslw 8, 8, 8
  05022c4  vspltisw 10, -1
  05022c8  vspltw 14, 3, 2
  05022cc  vmaddfp 6, 11, 7, 6
  05022d0  vslw 0, 0, 0
  05022d4  vspltisw 11, -1
  05022d8  vmaddfp 8, 9, 7, 8
  05022dc  vspltw 9, 3, 0
  05022e0  vspltw 7, 3, 1
  05022e4  vslw 10, 10, 10
  05022e8  vslw 11, 11, 11
  05022ec  <unknown>
  05022f0  vspltisw 15, -1
  05022f4  vmaddfp 9, 9, 12, 10
  05022f8  vspltisw 17, -1
  05022fc  vmaddfp 7, 7, 12, 11
  0502300  vspltw 18, 4, 2
  0502304  <unknown>
  0502308  li 5, 48
  050230c  vmaddfp 12, 14, 12, 0
  0502310  vspltw 11, 4, 0
  0502314  <unknown>
  0502318  vslw 14, 15, 15
  050231c  <unknown>
  0502320  vspltisw 15, -1
  0502324  <unknown>
  0502328  vspltw 0, 4, 1
  050232c  vmaddfp 11, 11, 16, 14
  0502330  vslw 17, 17, 17
  0502334  vslw 14, 15, 15
  0502338  li 3, 16
  050233c  lvx 19, 0, 28
  0502340  vmaddfp 0, 0, 16, 17
  0502344  vmaddfp 14, 18, 16, 14
  0502348  lvx 15, 3, 28
  050234c  li 3, 16
  0502350  vperm 5, 5, 8, 15
  0502354  vperm 2, 6, 2, 15
  0502358  vperm 6, 9, 7, 15
  050235c  vperm 3, 12, 3, 15
  0502360  <unknown>
  0502364  vperm 2, 5, 2, 19
  0502368  li 4, 32
  050236c  vspltw 5, 7, 0
  0502370  vperm 3, 6, 3, 19
  0502374  vperm 6, 11, 0, 15
  0502378  vperm 4, 14, 4, 15
  050237c  vperm 7, 13, 1, 15
  0502380  vperm 5, 10, 5, 15
  0502384  stvx 2, 0, 31
  0502388  stvx 3, 3, 31
  050238c  vperm 3, 6, 4, 19
  0502390  vperm 2, 7, 5, 19
  0502394  stvx 3, 4, 31
  0502398  stvx 2, 5, 31
  050239c  ld 0, 208(1)
  05023a0  mtlr 0
  05023a4  ld 28, 160(1)
  05023a8  ld 29, 168(1)
  05023ac  ld 30, 176(1)
  05023b0  ld 31, 184(1)
  05023b4  addi 1, 1, 192
  05023b8  blr

FastVecScale:   # 0x5023bc, 0x34 bytes
  05023bc  lfs 2, 0(4)
  05023c0  lfs 3, 4(4)
  05023c4  fmuls 2, 2, 1
  05023c8  lfs 4, 8(4)
  05023cc  fmuls 3, 3, 1
  05023d0  lfs 5, 12(4)
  05023d4  fmuls 4, 4, 1
  05023d8  fmuls 1, 5, 1
  05023dc  stfs 2, 0(3)
  05023e0  stfs 3, 4(3)
  05023e4  stfs 4, 8(3)
  05023e8  stfs 1, 12(3)
  05023ec  blr

FastVecAdd:   # 0x5023f0, 0x44 bytes
  05023f0  lfs 1, 0(4)
  05023f4  lfs 2, 0(5)
  05023f8  lfs 3, 4(4)
  05023fc  lfs 4, 4(5)
  0502400  fadds 1, 1, 2
  0502404  lfs 2, 8(4)
  0502408  lfs 5, 8(5)
  050240c  fadds 3, 3, 4
  0502410  lfs 4, 12(4)
  0502414  lfs 6, 12(5)
  0502418  fadds 2, 2, 5
  050241c  fadds 4, 4, 6
  0502420  stfs 1, 0(3)
  0502424  stfs 3, 4(3)
  0502428  stfs 2, 8(3)
  050242c  stfs 4, 12(3)
  0502430  blr

FastVecMtx4MultLerp:   # 0x502438, 0x134 bytes
  0502438  stdu 1, -96(1)
  050243c  stfd 27, 56(1)
  0502440  stfd 28, 64(1)
  0502444  stfd 29, 72(1)
  0502448  stfd 30, 80(1)
  050244c  stfd 31, 88(1)
  0502450  lis 6, 80
  0502454  addi 6, 6, 9268
  0502458  lfs 2, 0(6)
  050245c  lfs 3, 0(5)
  0502460  lfs 4, 4(5)
  0502464  fsubs 2, 2, 1
  0502468  lfs 5, 8(5)
  050246c  fmuls 3, 3, 1
  0502470  lfs 6, 12(5)
  0502474  fmuls 4, 4, 1
  0502478  lfs 7, 0(4)
  050247c  fmuls 5, 5, 1
  0502480  fmuls 6, 6, 1
  0502484  lfs 8, 4(4)
  0502488  lfs 9, 16(4)
  050248c  lfs 10, 8(4)
  0502490  lfs 11, 20(4)
  0502494  lfs 12, 12(4)
  0502498  lfs 13, 24(4)
  050249c  fmuls 9, 9, 2
  05024a0  lfs 0, 28(4)
  05024a4  fmuls 11, 11, 2
  05024a8  lfs 31, 32(4)
  05024ac  fmuls 13, 13, 2
  05024b0  lfs 30, 36(4)
  05024b4  fmuls 0, 0, 2
  05024b8  fmadds 6, 12, 2, 6
  05024bc  lfs 29, 40(4)
  05024c0  fmuls 12, 31, 2
  05024c4  lfs 28, 44(4)
  05024c8  fmuls 31, 30, 2
  05024cc  lfs 27, 16(5)
  05024d0  fmadds 3, 7, 2, 3
  05024d4  fmadds 4, 8, 2, 4
  05024d8  fmadds 5, 10, 2, 5
  05024dc  lfs 7, 20(5)
  05024e0  fmuls 30, 29, 2
  05024e4  lfs 8, 24(5)
  05024e8  fmuls 2, 28, 2
  05024ec  lfs 10, 28(5)
  05024f0  fmadds 9, 27, 1, 9
  05024f4  lfs 29, 32(5)
  05024f8  fmadds 7, 7, 1, 11
  05024fc  lfs 28, 36(5)
  0502500  fmadds 8, 8, 1, 13
  0502504  lfs 11, 40(5)
  0502508  fmadds 10, 10, 1, 0
  050250c  lfs 13, 44(5)
  0502510  fmadds 12, 29, 1, 12
  0502514  fmadds 0, 28, 1, 31
  0502518  stfs 3, 0(3)
  050251c  fmadds 11, 11, 1, 30
  0502520  fmadds 1, 13, 1, 2
  0502524  stfs 4, 4(3)
  0502528  stfs 5, 8(3)
  050252c  stfs 6, 12(3)
  0502530  stfs 9, 16(3)
  0502534  stfs 7, 20(3)
  0502538  stfs 8, 24(3)
  050253c  stfs 10, 28(3)
  0502540  stfs 12, 32(3)
  0502544  stfs 0, 36(3)
  0502548  stfs 11, 40(3)
  050254c  stfs 1, 44(3)
  0502550  lfd 27, 56(1)
  0502554  lfd 28, 64(1)
  0502558  lfd 29, 72(1)
  050255c  lfd 30, 80(1)
  0502560  lfd 31, 88(1)
  0502564  addi 1, 1, 96
  0502568  blr

FastWrapRot:   # 0x502578, 0x58 bytes
  0502578  fadds 1, 1, 2
  050257c  lis 3, 80
  0502580  addi 4, 3, 9580
  0502584  li 3, 0
  0502588  lfs 2, 0(4)
  050258c  fcmpu 0, 1, 2
  0502590  cror 6, 1, 2
  0502594  bt 6, 0x50259c
  0502598  li 3, 1
  050259c  fmr 2, 1
  05025a0  lis 4, 80
  05025a4  cmpwi 3, 0
  05025a8  addi 4, 4, 9580
  05025ac  lfs 4, 4(4)
  05025b0  lfs 1, 8(4)
  05025b4  fsub 3, 2, 4
  05025b8  fsubs 4, 2, 1
  05025bc  fsel 2, 3, 4, 2
  05025c0  bt 2, 0x5025c8
  05025c4  fadds 2, 2, 1
  05025c8  fmr 1, 2
  05025cc  blr

FastDiffRots:   # 0x5025e0, 0x58 bytes
  05025e0  fsubs 1, 1, 2
  05025e4  lis 3, 80
  05025e8  addi 4, 3, 9680
  05025ec  li 3, 0
  05025f0  lfs 2, 0(4)
  05025f4  fcmpu 0, 1, 2
  05025f8  cror 6, 1, 2
  05025fc  bt 6, 0x502604
  0502600  li 3, 1
  0502604  fmr 2, 1
  0502608  lis 4, 80
  050260c  cmpwi 3, 0
  0502610  addi 4, 4, 9680
  0502614  lfs 4, 4(4)
  0502618  lfs 1, 8(4)
  050261c  fsub 3, 2, 4
  0502620  fsubs 4, 2, 1
  0502624  fsel 2, 3, 4, 2
  0502628  bt 2, 0x502630
  050262c  fadds 2, 2, 1
  0502630  fmr 1, 2
  0502634  blr

FastAddRots:   # 0x502648, 0x4c bytes
  0502648  lis 3, 80
  050264c  addi 3, 3, 9784
  0502650  lfs 2, 0(3)
  0502654  fcmpu 0, 1, 2
  0502658  cror 6, 0, 2
  050265c  bt 6, 0x502670
  0502660  lfs 3, 4(3)
  0502664  fsubs 1, 1, 3
  0502668  fcmpu 0, 1, 2
  050266c  bt 1, 0x502664
  0502670  lfs 3, 8(3)
  0502674  fcmpu 0, 1, 3
  0502678  cror 6, 1, 2
  050267c  bt 6, 0x502690
  0502680  lfs 2, 4(3)
  0502684  fadds 1, 1, 2
  0502688  fcmpu 0, 1, 3
  050268c  bt 0, 0x502684
  0502690  blr

FastSubRots:   # 0x5026a0, 0x38 bytes
  05026a0  fsubs 1, 1, 2
  05026a4  lis 3, 80
  05026a8  addi 3, 3, 9876
  05026ac  lfs 2, 0(3)
  05026b0  fabs 1, 1
  05026b4  fcmpu 0, 1, 2
  05026b8  cror 6, 1, 2
  05026bc  bt 6, 0x5026c4
  05026c0  b 0x5026d4
  05026c4  lis 3, 80
  05026c8  addi 3, 3, 9876
  05026cc  lfs 2, 4(3)
  05026d0  fsubs 1, 2, 1
  05026d4  blr

STUB_005026d8:   # 0x5026d8, 0x4 bytes
  05026d8  blr

FastFrac:   # 0x5026dc, 0x40 bytes
  05026dc  stdu 1, -64(1)
  05026e0  li 0, 48
  05026e4  stfs 1, 48(1)
  05026e8  stfs 1, 52(1)
  05026ec  fctidz 2, 1
  05026f0  stfs 1, 56(1)
  05026f4  stfs 1, 60(1)
  05026f8  lvx 2, 1, 0
  05026fc  vctsxs 2, 2, 0
  0502700  fcfid 2, 2
  0502704  vcfsx 2, 2, 0
  0502708  frsp 2, 2
  050270c  fsubs 1, 1, 2
  0502710  stvewx 2, 0, 4
  0502714  addi 1, 1, 64
  0502718  blr

FastMod:   # 0x50271c, 0x14 bytes
  050271c  fctidz 2, 1
  0502720  fcfid 2, 2
  0502724  frsp 2, 2
  0502728  fsubs 1, 1, 2
  050272c  blr

FastIntToDouble:   # 0x502730, 0x20 bytes
  0502730  stdu 1, -64(1)
  0502734  extsw 3, 3
  0502738  std 3, 48(1)
  050273c  lfd 1, 48(1)
  0502740  fcfid 1, 1
  0502744  frsp 1, 1
  0502748  addi 1, 1, 64
  050274c  blr

FastDoubleToInt:   # 0x502758, 0x3c bytes
  0502758  stdu 1, -64(1)
  050275c  lis 3, 80
  0502760  addi 3, 3, 10064
  0502764  lfs 2, 0(3)
  0502768  lfs 3, 4(3)
  050276c  fsub 2, 1, 2
  0502770  fadds 4, 1, 3
  0502774  fsubs 1, 1, 3
  0502778  fsel 1, 2, 4, 1
  050277c  fctiwz 1, 1
  0502780  stfd 1, 48(1)
  0502784  lwz 3, 52(1)
  0502788  extsw 3, 3
  050278c  addi 1, 1, 64
  0502790  blr

STUB_00502794:   # 0x502794, 0x4 bytes
  0502794  blr

FastFMod:   # 0x502798, 0x24 bytes
  0502798  stdu 1, -112(1)
  050279c  mflr 0
  05027a0  std 0, 128(1)
  05027a4  bl 0x5dc9a4
  05027a8  nop
  05027ac  ld 0, 128(1)
  05027b0  mtlr 0
  05027b4  addi 1, 1, 112
  05027b8  blr

FastLerpColor:   # 0x5027bc, 0x94 bytes
  05027bc  stdu 1, -80(1)
  05027c0  ori 7, 3, 0
  05027c4  stfs 1, 64(1)
  05027c8  ori 8, 4, 0
  05027cc  stfs 1, 68(1)
  05027d0  li 4, 0
  05027d4  stfs 1, 72(1)
  05027d8  li 3, 56
  05027dc  stfs 1, 76(1)
  05027e0  li 0, 64
  05027e4  stw 7, 48(1)
  05027e8  stw 8, 52(1)
  05027ec  addic 6, 1, 48
  05027f0  addic 5, 1, 52
  05027f4  vspltisw 2, -8
  05027f8  lvx 3, 1, 0
  05027fc  <unknown>
  0502800  <unknown>
  0502804  vsrw 4, 4, 2
  0502808  vsrw 5, 5, 2
  050280c  addc 7, 4, 1
  0502810  addic 4, 4, 1
  0502814  vcfux 6, 4, 0
  0502818  vsubuwm 4, 5, 4
  050281c  clrldi 7, 7, 32
  0502820  extsw 4, 4
  0502824  vcfsx 4, 4, 0
  0502828  cmpwi 4, 4
  050282c  vmaddfp 4, 4, 3, 6
  0502830  vctuxs 4, 4, 0
  0502834  vspltb 4, 4, 3
  0502838  stvebx 4, 3, 7
  050283c  bt 0, 0x5027fc
  0502840  lwz 3, 56(1)
  0502844  extsw 3, 3
  0502848  addi 1, 1, 80
  050284c  blr

FUN_00502850:   # 0x502850, 0x94 bytes
  0502850  stdu 1, -64(1)
  0502854  ori 6, 3, 0
  0502858  ori 7, 4, 0
  050285c  addic 5, 1, 48
  0502860  addic 4, 1, 52
  0502864  stw 6, 48(1)
  0502868  li 3, 0
  050286c  stw 7, 52(1)
  0502870  lbzx 7, 5, 3
  0502874  lbzx 8, 4, 3
  0502878  li 9, -32768
  050287c  mullw 7, 7, 8
  0502880  li 8, -32768
  0502884  subc 9, 9, 7
  0502888  subc 8, 7, 8
  050288c  li 6, 32767
  0502890  sradi 8, 8, 63
  0502894  subc 6, 6, 7
  0502898  and 8, 8, 9
  050289c  li 10, 32767
  05028a0  addc 7, 7, 8
  05028a4  sradi 6, 6, 63
  05028a8  subc 8, 10, 7
  05028ac  addc 9, 3, 1
  05028b0  and 6, 6, 8
  05028b4  clrldi 9, 9, 32
  05028b8  addc 6, 7, 6
  05028bc  addic 3, 3, 1
  05028c0  srawi 6, 6, 7
  05028c4  extsw 3, 3
  05028c8  cmpwi 3, 4
  05028cc  stb 6, 56(9)
  05028d0  bt 0, 0x502870
  05028d4  lwz 3, 56(1)
  05028d8  extsw 3, 3
  05028dc  addi 1, 1, 64
  05028e0  blr

FastCheckBsphereInView:   # 0x502910, 0x88 bytes
  0502910  stdu 1, -128(1)
  0502914  mflr 0
  0502918  std 0, 144(1)
  050291c  lis 4, 80
  0502920  li 5, 4
  0502924  <unknown>
  0502928  li 6, 8
  050292c  fmr 2, 1
  0502930  addi 4, 4, 10480
  0502934  li 7, 112
  0502938  lis 8, 144
  050293c  <unknown>
  0502940  <unknown>
  0502944  li 5, 16
  0502948  lvx 5, 0, 4
  050294c  lvx 6, 7, 1
  0502950  vperm 2, 2, 3, 5
  0502954  lwz 6, 11932(8)
  0502958  vperm 3, 4, 6, 5
  050295c  lfs 1, 12(3)
  0502960  lvx 4, 5, 4
  0502964  addic 3, 6, 800
  0502968  vperm 2, 2, 3, 4
  050296c  bl 0x4ff328
  0502970  nop
  0502974  cmpwi 3, 0
  0502978  bt 2, 0x502984
  050297c  li 3, 1
  0502980  b 0x502988
  0502984  li 3, -1
  0502988  ld 0, 144(1)
  050298c  mtlr 0
  0502990  addi 1, 1, 128
  0502994  blr

FUN_005029c0:   # 0x5029c0, 0x88 bytes
  05029c0  stdu 1, -128(1)
  05029c4  mflr 0
  05029c8  std 0, 144(1)
  05029cc  lis 4, 80
  05029d0  li 5, 4
  05029d4  <unknown>
  05029d8  li 6, 8
  05029dc  fmr 2, 1
  05029e0  addi 4, 4, 10656
  05029e4  li 7, 112
  05029e8  lis 8, 144
  05029ec  <unknown>
  05029f0  <unknown>
  05029f4  li 5, 16
  05029f8  lvx 5, 0, 4
  05029fc  lvx 6, 7, 1
  0502a00  vperm 2, 2, 3, 5
  0502a04  lwz 6, 11932(8)
  0502a08  vperm 3, 4, 6, 5
  0502a0c  lfs 1, 12(3)
  0502a10  lvx 4, 5, 4
  0502a14  addic 3, 6, 800
  0502a18  vperm 2, 2, 3, 4
  0502a1c  bl 0x4ff328
  0502a20  nop
  0502a24  cmpwi 3, 0
  0502a28  bt 2, 0x502a34
  0502a2c  li 3, 1
  0502a30  b 0x502a38
  0502a34  li 3, -1
  0502a38  ld 0, 144(1)
  0502a3c  mtlr 0
  0502a40  addi 1, 1, 128
  0502a44  blr

FUN_00502a48:   # 0x502a48, 0x8 bytes
  0502a48  li 3, 0
  0502a4c  blr

FUN_00502a50:   # 0x502a50, 0x8 bytes
  0502a50  li 3, 0
  0502a54  blr

FUN_00502a58:   # 0x502a58, 0x4 bytes
  0502a58  blr

FUN_00502a5c:   # 0x502a5c, 0x8 bytes
  0502a5c  li 3, -1
  0502a60  blr

FastVecSub:   # 0x502a64, 0x44 bytes
  0502a64  lfs 1, 0(4)
  0502a68  lfs 2, 0(5)
  0502a6c  lfs 3, 4(4)
  0502a70  lfs 4, 4(5)
  0502a74  fsubs 1, 1, 2
  0502a78  lfs 2, 8(4)
  0502a7c  lfs 5, 8(5)
  0502a80  fsubs 3, 3, 4
  0502a84  lfs 4, 12(4)
  0502a88  lfs 6, 12(5)
  0502a8c  fsubs 2, 2, 5
  0502a90  fsubs 4, 4, 6
  0502a94  stfs 1, 0(3)
  0502a98  stfs 3, 4(3)
  0502a9c  stfs 2, 8(3)
  0502aa0  stfs 4, 12(3)
  0502aa4  blr

FUN_00502aa8:   # 0x502aa8, 0x60 bytes
  0502aa8  stdu 1, -64(1)
  0502aac  lfs 1, 4(3)
  0502ab0  lfs 2, 4(4)
  0502ab4  lfs 3, 0(3)
  0502ab8  fsubs 1, 1, 2
  0502abc  lfs 2, 0(4)
  0502ac0  lfs 4, 4(5)
  0502ac4  fsubs 2, 3, 2
  0502ac8  lfs 3, 8(3)
  0502acc  lfs 5, 8(4)
  0502ad0  lfs 6, 0(5)
  0502ad4  fsubs 3, 3, 5
  0502ad8  li 3, 1
  0502adc  lfs 5, 8(5)
  0502ae0  fmuls 1, 1, 4
  0502ae4  fmadds 1, 2, 6, 1
  0502ae8  fmadds 1, 3, 5, 1
  0502aec  fctidz 1, 1
  0502af0  stfd 1, 48(1)
  0502af4  lwz 4, 52(1)
  0502af8  srwi 4, 4, 31
  0502afc  subc 3, 3, 4
  0502b00  addi 1, 1, 64
  0502b04  blr

FastVecAddSelf:   # 0x502b08, 0x64 bytes
  0502b08  lfs 1, 0(4)
  0502b0c  lfs 2, 0(5)
  0502b10  lfs 3, 4(4)
  0502b14  fadds 1, 1, 2
  0502b18  lfs 2, 4(5)
  0502b1c  lfs 4, 8(4)
  0502b20  fadds 2, 3, 2
  0502b24  lfs 3, 8(5)
  0502b28  lfs 5, 12(4)
  0502b2c  fadds 3, 4, 3
  0502b30  lfs 4, 12(5)
  0502b34  fadds 4, 5, 4
  0502b38  stfs 1, 0(4)
  0502b3c  stfs 2, 4(4)
  0502b40  stfs 3, 8(4)
  0502b44  stfs 4, 12(4)
  0502b48  lfs 1, 0(4)
  0502b4c  stfs 1, 0(3)
  0502b50  lfs 1, 4(4)
  0502b54  lfs 2, 8(4)
  0502b58  stfs 1, 4(3)
  0502b5c  stfs 2, 8(3)
  0502b60  lfs 1, 12(4)
  0502b64  stfs 1, 12(3)
  0502b68  blr

FastVecSubSelf:   # 0x502b6c, 0x64 bytes
  0502b6c  lfs 1, 0(4)
  0502b70  lfs 2, 0(5)
  0502b74  lfs 3, 4(4)
  0502b78  fsubs 1, 1, 2
  0502b7c  lfs 2, 4(5)
  0502b80  lfs 4, 8(4)
  0502b84  fsubs 2, 3, 2
  0502b88  lfs 3, 8(5)
  0502b8c  lfs 5, 12(4)
  0502b90  fsubs 3, 4, 3
  0502b94  lfs 4, 12(5)
  0502b98  fsubs 4, 5, 4
  0502b9c  stfs 1, 0(4)
  0502ba0  stfs 2, 4(4)
  0502ba4  stfs 3, 8(4)
  0502ba8  stfs 4, 12(4)
  0502bac  lfs 1, 0(4)
  0502bb0  stfs 1, 0(3)
  0502bb4  lfs 1, 4(4)
  0502bb8  lfs 2, 8(4)
  0502bbc  stfs 1, 4(3)
  0502bc0  stfs 2, 8(3)
  0502bc4  lfs 1, 12(4)
  0502bc8  stfs 1, 12(3)
  0502bcc  blr

FastVecScaleSelf:   # 0x502bd0, 0x54 bytes
  0502bd0  lfs 2, 0(4)
  0502bd4  lfs 3, 4(4)
  0502bd8  fmuls 2, 2, 1
  0502bdc  lfs 4, 8(4)
  0502be0  fmuls 3, 3, 1
  0502be4  lfs 5, 12(4)
  0502be8  fmuls 4, 4, 1
  0502bec  fmuls 1, 5, 1
  0502bf0  stfs 2, 0(4)
  0502bf4  stfs 3, 4(4)
  0502bf8  stfs 4, 8(4)
  0502bfc  stfs 1, 12(4)
  0502c00  lfs 1, 0(4)
  0502c04  lfs 2, 4(4)
  0502c08  stfs 1, 0(3)
  0502c0c  lfs 1, 8(4)
  0502c10  stfs 2, 4(3)
  0502c14  lfs 2, 12(4)
  0502c18  stfs 1, 8(3)
  0502c1c  stfs 2, 12(3)
  0502c20  blr

FastVecMul:   # 0x502c24, 0x44 bytes
  0502c24  lfs 1, 0(4)
  0502c28  lfs 2, 0(5)
  0502c2c  lfs 3, 4(4)
  0502c30  lfs 4, 4(5)
  0502c34  fmuls 1, 1, 2
  0502c38  lfs 2, 8(4)
  0502c3c  lfs 5, 8(5)
  0502c40  fmuls 3, 3, 4
  0502c44  lfs 4, 12(4)
  0502c48  lfs 6, 12(5)
  0502c4c  fmuls 2, 2, 5
  0502c50  fmuls 4, 4, 6
  0502c54  stfs 1, 0(3)
  0502c58  stfs 3, 4(3)
  0502c5c  stfs 2, 8(3)
  0502c60  stfs 4, 12(3)
  0502c64  blr

FastVecMulSelf:   # 0x502c68, 0x64 bytes
  0502c68  lfs 1, 0(4)
  0502c6c  lfs 2, 0(5)
  0502c70  lfs 3, 4(4)
  0502c74  fmuls 1, 1, 2
  0502c78  lfs 2, 4(5)
  0502c7c  lfs 4, 8(4)
  0502c80  fmuls 2, 3, 2
  0502c84  lfs 3, 8(5)
  0502c88  lfs 5, 12(4)
  0502c8c  fmuls 3, 4, 3
  0502c90  lfs 4, 12(5)
  0502c94  fmuls 4, 5, 4
  0502c98  stfs 1, 0(4)
  0502c9c  stfs 2, 4(4)
  0502ca0  stfs 3, 8(4)
  0502ca4  stfs 4, 12(4)
  0502ca8  lfs 1, 0(4)
  0502cac  stfs 1, 0(3)
  0502cb0  lfs 1, 4(4)
  0502cb4  lfs 2, 8(4)
  0502cb8  stfs 1, 4(3)
  0502cbc  stfs 2, 8(3)
  0502cc0  lfs 1, 12(4)
  0502cc4  stfs 1, 12(3)
  0502cc8  blr

FUN_00502cd0:   # 0x502cd0, 0x54 bytes
  0502cd0  lis 3, 346
  0502cd4  lis 5, 146
  0502cd8  addic 3, 3, -19596
  0502cdc  lis 7, 346
  0502ce0  lis 6, 346
  0502ce4  lis 8, 146
  0502ce8  stw 3, 29176(5)
  0502cec  lis 9, 146
  0502cf0  addic 3, 7, -19588
  0502cf4  addic 6, 6, -19584
  0502cf8  lis 5, 346
  0502cfc  lis 4, 146
  0502d00  lis 7, 346
  0502d04  stw 3, 29184(8)
  0502d08  addic 5, 5, -19592
  0502d0c  stw 6, 29188(9)
  0502d10  lis 3, 346
  0502d14  addic 6, 7, -19580
  0502d18  stw 5, 29180(4)
  0502d1c  stw 6, -19620(3)
  0502d20  blr

FUN_00502d24:   # 0x502d24, 0x5c bytes
  0502d24  clrlwi 3, 3, 30
  0502d28  cmpwi 3, 0
  0502d2c  cmpwi 1, 3, 2
  0502d30  cmpwi 6, 3, 1
  0502d34  cmpwi 7, 3, -1
  0502d38  bt 1, 0x502d44
  0502d3c  bf 29, 0x502d7c
  0502d40  b 0x502d50
  0502d44  bf 25, 0x502d60
  0502d48  bf 5, 0x502d70
  0502d4c  b 0x502d7c
  0502d50  lwz 3, 0(4)
  0502d54  addic 3, 3, 256
  0502d58  stw 3, 0(4)
  0502d5c  b 0x502d7c
  0502d60  lwz 3, 0(4)
  0502d64  addic 3, 3, 16
  0502d68  stw 3, 0(4)
  0502d6c  b 0x502d7c
  0502d70  lwz 3, 0(4)
  0502d74  addic 3, 3, 1
  0502d78  stw 3, 0(4)
  0502d7c  blr

FUN_00502d80:   # 0x502d80, 0x4c bytes
  0502d80  stdu 1, -112(1)
  0502d84  mflr 0
  0502d88  std 0, 128(1)
  0502d8c  lis 3, 346
  0502d90  lis 4, 346
  0502d94  addic 4, 4, -19596
  0502d98  lwz 3, -19592(3)
  0502d9c  extsw 3, 3
  0502da0  bl 0x502d24
  0502da4  lis 3, 346
  0502da8  lis 4, 346
  0502dac  addic 4, 4, -19588
  0502db0  lwz 3, -19584(3)
  0502db4  extsw 3, 3
  0502db8  bl 0x502d24
  0502dbc  ld 0, 128(1)
  0502dc0  mtlr 0
  0502dc4  addi 1, 1, 112
  0502dc8  blr

FUN_00502dcc:   # 0x502dcc, 0x8 bytes
  0502dcc  li 3, 0
  0502dd0  blr

STUB_00502dd4:   # 0x502dd4, 0x8 bytes
  0502dd4  li 3, 0
  0502dd8  blr

STUB_00502ddc:   # 0x502ddc, 0x4 bytes
  0502ddc  blr

STUB_00502de0_RET_0:   # 0x502de0, 0x8 bytes
  0502de0  li 3, 0
  0502de4  blr

STUB_00502de8:   # 0x502de8, 0x4 bytes
  0502de8  blr

FUN_00502dec:   # 0x502dec, 0x4 bytes
  0502dec  blr

FUN_00502df0:   # 0x502df0, 0x4 bytes
  0502df0  blr

FUN_00502df4:   # 0x502df4, 0x4 bytes
  0502df4  blr

FUN_00502df8:   # 0x502df8, 0x4 bytes
  0502df8  blr

FUN_00502dfc:   # 0x502dfc, 0x4 bytes
  0502dfc  blr

FUN_00502e00:   # 0x502e00, 0x8 bytes
  0502e00  li 3, 0
  0502e04  blr

FUN_00502e08:   # 0x502e08, 0x8 bytes
  0502e08  li 3, 0
  0502e0c  blr

FUN_00502e10:   # 0x502e10, 0x8 bytes
  0502e10  li 3, 0
  0502e14  blr

FUN_00502e18:   # 0x502e18, 0x8 bytes
  0502e18  li 3, 0
  0502e1c  blr

FUN_00502e20:   # 0x502e20, 0x8 bytes
  0502e20  li 3, 0
  0502e24  blr

FUN_00502e28:   # 0x502e28, 0x8 bytes
  0502e28  li 3, 0
  0502e2c  blr

FUN_00502e30:   # 0x502e30, 0x8 bytes
  0502e30  li 3, 0
  0502e34  blr

FUN_00502e38:   # 0x502e38, 0x8 bytes
  0502e38  li 3, 0
  0502e3c  blr

FUN_00502e40:   # 0x502e40, 0x8 bytes
  0502e40  li 3, 0
  0502e44  blr

FUN_00502e48:   # 0x502e48, 0x8 bytes
  0502e48  li 3, 0
  0502e4c  blr

FUN_00502e50:   # 0x502e50, 0x8 bytes
  0502e50  li 3, 0
  0502e54  blr

FUN_00502e58:   # 0x502e58, 0x8 bytes
  0502e58  li 3, 0
  0502e5c  blr

FUN_00502e60:   # 0x502e60, 0x8 bytes
  0502e60  li 3, 0
  0502e64  blr

FUN_00502e68:   # 0x502e68, 0x8 bytes
  0502e68  li 3, 0
  0502e6c  blr

FUN_00502e70:   # 0x502e70, 0x8 bytes
  0502e70  li 3, 0
  0502e74  blr

FUN_00502e78:   # 0x502e78, 0x8 bytes
  0502e78  li 3, 0
  0502e7c  blr

FUN_00502e80:   # 0x502e80, 0x8 bytes
  0502e80  li 3, 0
  0502e84  blr

FUN_00502e88:   # 0x502e88, 0x8 bytes
  0502e88  li 3, 0
  0502e8c  blr

FUN_00502e90:   # 0x502e90, 0x8 bytes
  0502e90  li 3, 0
  0502e94  blr

FUN_00502e98:   # 0x502e98, 0x8 bytes
  0502e98  li 3, 0
  0502e9c  blr

FUN_00502ea0:   # 0x502ea0, 0x8 bytes
  0502ea0  li 3, 0
  0502ea4  blr

idol_draw::PackCmd:   # 0x502ea8, 0x30 bytes
  0502ea8  sldi 7, 7, 32
  0502eac  slwi 4, 4, 2
  0502eb0  slwi 5, 5, 4
  0502eb4  or 3, 7, 3
  0502eb8  clrldi 4, 4, 32
  0502ebc  clrldi 5, 5, 32
  0502ec0  slwi 6, 6, 6
  0502ec4  or 3, 3, 4
  0502ec8  clrldi 6, 6, 32
  0502ecc  or 3, 3, 5
  0502ed0  or 3, 3, 6
  0502ed4  blr

FUN_00502ed8:   # 0x502ed8, 0x30 bytes
  0502ed8  sldi 7, 7, 32
  0502edc  slwi 4, 4, 2
  0502ee0  slwi 5, 5, 4
  0502ee4  or 3, 7, 3
  0502ee8  clrldi 4, 4, 32
  0502eec  clrldi 5, 5, 32
  0502ef0  slwi 6, 6, 6
  0502ef4  or 3, 3, 4
  0502ef8  clrldi 6, 6, 32
  0502efc  or 3, 3, 5
  0502f00  or 3, 3, 6
  0502f04  blr

FUN_00502f08:   # 0x502f08, 0x54 bytes
  0502f08  clrlwi 3, 3, 30
  0502f0c  rlwinm 4, 4, 2, 28, 29
  0502f10  clrlwi 5, 5, 22
  0502f14  clrldi 3, 3, 32
  0502f18  clrldi 4, 4, 32
  0502f1c  clrldi 5, 5, 32
  0502f20  clrlwi 6, 6, 22
  0502f24  or 3, 3, 4
  0502f28  sldi 5, 5, 4
  0502f2c  clrldi 6, 6, 32
  0502f30  clrlwi 4, 7, 22
  0502f34  or 3, 3, 5
  0502f38  sldi 5, 6, 14
  0502f3c  clrldi 4, 4, 32
  0502f40  clrlwi 7, 8, 22
  0502f44  or 3, 3, 5
  0502f48  sldi 4, 4, 24
  0502f4c  sldi 6, 7, 34
  0502f50  or 3, 3, 4
  0502f54  or 3, 3, 6
  0502f58  blr

FUN_00502f5c:   # 0x502f5c, 0x8 bytes
  0502f5c  li 3, 0
  0502f60  blr

FUN_00502f64:   # 0x502f64, 0x8 bytes
  0502f64  li 3, 0
  0502f68  blr

STUB_00502f6c:   # 0x502f6c, 0x8 bytes
  0502f6c  li 3, 0
  0502f70  blr

FUN_00502f74_RET_0:   # 0x502f74, 0x8 bytes
  0502f74  li 3, 0
  0502f78  blr

idol_draw::Blend:   # 0x502f7c, 0x1c bytes
  0502f7c  slwi 4, 4, 1
  0502f80  slwi 5, 5, 4
  0502f84  extsw 4, 4
  0502f88  extsw 5, 5
  0502f8c  or 3, 3, 4
  0502f90  or 3, 3, 5
  0502f94  blr

FUN_00502f98:   # 0x502f98, 0x1c bytes
  0502f98  slwi 4, 4, 1
  0502f9c  slwi 5, 5, 4
  0502fa0  extsw 4, 4
  0502fa4  extsw 5, 5
  0502fa8  or 3, 3, 4
  0502fac  or 3, 3, 5
  0502fb0  blr

FUN_00502fb4:   # 0x502fb4, 0x8 bytes
  0502fb4  li 3, 0
  0502fb8  blr

STUB_00502fbc_RET_0:   # 0x502fbc, 0x8 bytes
  0502fbc  li 3, 0
  0502fc0  blr

FUN_00502fc4:   # 0x502fc4, 0x8 bytes
  0502fc4  li 3, 0
  0502fc8  blr

FUN_00502fcc:   # 0x502fcc, 0x8 bytes
  0502fcc  li 3, 0
  0502fd0  blr

STUB_00502fd4_RET_0:   # 0x502fd4, 0x8 bytes
  0502fd4  li 3, 0
  0502fd8  blr

FUN_00502fdc:   # 0x502fdc, 0x8 bytes
  0502fdc  li 3, 0
  0502fe0  blr

FUN_00502fe4:   # 0x502fe4, 0x8 bytes
  0502fe4  li 3, 0
  0502fe8  blr

FUN_00502fec:   # 0x502fec, 0x8 bytes
  0502fec  li 3, 0
  0502ff0  blr

FUN_00502ff4:   # 0x502ff4, 0x8 bytes
  0502ff4  li 3, 0
  0502ff8  blr

VU1_addGSregister:   # 0x502ffc, 0x8 bytes
  0502ffc  li 3, 0
  0503000  blr

FUN_00503004:   # 0x503004, 0x8 bytes
  0503004  li 3, 0
  0503008  blr

FUN_0050300c:   # 0x50300c, 0x8 bytes
  050300c  li 3, 0
  0503010  blr

FUN_00503014:   # 0x503014, 0x8 bytes
  0503014  li 3, 0
  0503018  blr

FUN_0050301c:   # 0x50301c, 0x8 bytes
  050301c  li 3, 0
  0503020  blr

FUN_00503024:   # 0x503024, 0x8 bytes
  0503024  li 3, 0
  0503028  blr

FUN_0050302c:   # 0x50302c, 0x8 bytes
  050302c  li 3, 0
  0503030  blr

FUN_00503034:   # 0x503034, 0x8 bytes
  0503034  li 3, 0
  0503038  blr

FUN_0050303c:   # 0x50303c, 0x8 bytes
  050303c  li 3, 0
  0503040  blr

FUN_00503044:   # 0x503044, 0x8 bytes
  0503044  li 3, 0
  0503048  blr

FUN_0050304c:   # 0x50304c, 0x8 bytes
  050304c  li 3, 0
  0503050  blr

FUN_00503054:   # 0x503054, 0x4 bytes
  0503054  blr

FUN_00503058:   # 0x503058, 0x8 bytes
  0503058  li 3, 0
  050305c  blr

FUN_00503060_RET_0:   # 0x503060, 0x8 bytes
  0503060  li 3, 0
  0503064  blr

FUN_00503068:   # 0x503068, 0x4 bytes
  0503068  blr

sceGsExecLoadImage:   # 0x50306c, 0x4 bytes
  050306c  blr

STUB_00503070:   # 0x503070, 0x4 bytes
  0503070  blr

sceGsSyncPath:   # 0x503074, 0x4 bytes
  0503074  blr

STUB_00503078:   # 0x503078, 0x4 bytes
  0503078  blr

STUB_0050307c:   # 0x50307c, 0x4 bytes
  050307c  blr

STUB_00503080:   # 0x503080, 0x4 bytes
  0503080  blr

sceGsSetDefLoadImage:   # 0x503084, 0x4 bytes
  0503084  blr

FUN_00503088:   # 0x503088, 0x4 bytes
  0503088  blr

FUN_0050308c:   # 0x50308c, 0x4 bytes
  050308c  blr

FUN_00503090:   # 0x503090, 0x4 bytes
  0503090  blr

FUN_00503094:   # 0x503094, 0x8 bytes
  0503094  li 3, 0
  0503098  blr

FUN_0050309c:   # 0x50309c, 0x8 bytes
  050309c  li 3, 0
  05030a0  blr

FUN_005030a4:   # 0x5030a4, 0x8 bytes
  05030a4  li 3, 2
  05030a8  blr

FUN_005030ac:   # 0x5030ac, 0x8 bytes
  05030ac  li 3, 0
  05030b0  blr

FUN_005030b4:   # 0x5030b4, 0x8 bytes
  05030b4  li 3, 0
  05030b8  blr

FUN_005030bc:   # 0x5030bc, 0x8 bytes
  05030bc  li 3, 0
  05030c0  blr

FUN_005030c4:   # 0x5030c4, 0x8 bytes
  05030c4  li 3, 0
  05030c8  blr

FUN_005030cc:   # 0x5030cc, 0x8 bytes
  05030cc  li 3, 0
  05030d0  blr

FUN_005030d4:   # 0x5030d4, 0x8 bytes
  05030d4  li 3, 0
  05030d8  blr

FUN_005030dc:   # 0x5030dc, 0x8 bytes
  05030dc  li 3, 0
  05030e0  blr

FUN_005030e4:   # 0x5030e4, 0x8 bytes
  05030e4  li 3, 0
  05030e8  blr

FUN_005030ec:   # 0x5030ec, 0x8 bytes
  05030ec  li 3, 0
  05030f0  blr

FUN_005030f4:   # 0x5030f4, 0x8 bytes
  05030f4  li 3, 0
  05030f8  blr

FUN_005030fc:   # 0x5030fc, 0x8 bytes
  05030fc  li 3, 0
  0503100  blr

FUN_00503104:   # 0x503104, 0x8 bytes
  0503104  li 3, 0
  0503108  blr

FUN_0050310c:   # 0x50310c, 0x8 bytes
  050310c  li 3, 0
  0503110  blr

STUB_00503114:   # 0x503114, 0x4 bytes
  0503114  blr

STUB_00503118:   # 0x503118, 0x4 bytes
  0503118  blr

FUN_0050311c:   # 0x50311c, 0x4 bytes
  050311c  blr

FUN_00503120:   # 0x503120, 0x8 bytes
  0503120  li 3, 0
  0503124  blr

FUN_00503128_RET_0:   # 0x503128, 0x8 bytes
  0503128  li 3, 0
  050312c  blr

FUN_00503130_RET_3:   # 0x503130, 0x8 bytes
  0503130  li 3, 3
  0503134  blr

FUN_00503138_RET_0:   # 0x503138, 0x8 bytes
  0503138  li 3, 0
  050313c  blr

FUN_00503140:   # 0x503140, 0x4 bytes
  0503140  blr

FUN_00503144:   # 0x503144, 0x8 bytes
  0503144  li 3, 0
  0503148  blr

FUN_0050314c:   # 0x50314c, 0x10 bytes
  050314c  li 4, 1
  0503150  stw 4, 0(3)
  0503154  li 3, 0
  0503158  blr

FUN_0050315c_RET_0:   # 0x50315c, 0x8 bytes
  050315c  li 3, 0
  0503160  blr

FUN_00503164:   # 0x503164, 0x8 bytes
  0503164  li 3, 0
  0503168  blr

FUN_0050316c:   # 0x50316c, 0x8 bytes
  050316c  li 3, 1
  0503170  blr

FUN_00503174:   # 0x503174, 0x4 bytes
  0503174  blr

FUN_00503178:   # 0x503178, 0x4 bytes
  0503178  blr

FUN_0050317c:   # 0x50317c, 0x4 bytes
  050317c  blr

FUN_00503180:   # 0x503180, 0x8 bytes
  0503180  li 3, 1
  0503184  blr

FUN_00503188:   # 0x503188, 0x4 bytes
  0503188  blr

FUN_0050318c:   # 0x50318c, 0x8 bytes
  050318c  li 3, 0
  0503190  blr

FUN_00503194:   # 0x503194, 0x8 bytes
  0503194  li 3, 0
  0503198  blr

FUN_0050319c:   # 0x50319c, 0x8 bytes
  050319c  li 3, 0
  05031a0  blr

STUB_005031a4:   # 0x5031a4, 0x4 bytes
  05031a4  blr

FUN_005031a8:   # 0x5031a8, 0x8 bytes
  05031a8  li 3, 0
  05031ac  blr

FUN_005031b0:   # 0x5031b0, 0x8 bytes
  05031b0  li 3, 0
  05031b4  blr

STUB_005031b8:   # 0x5031b8, 0x4 bytes
  05031b8  blr

FUN_005031bc:   # 0x5031bc, 0x38 bytes
  05031bc  stdu 1, -112(1)
  05031c0  mflr 0
  05031c4  std 0, 128(1)
  05031c8  lwz 4, 0(3)
  05031cc  lwz 6, 8(3)
  05031d0  lwz 3, 4(3)
  05031d4  ori 5, 6, 0
  05031d8  bl 0x5c5ad0
  05031dc  nop
  05031e0  li 3, 0
  05031e4  ld 0, 128(1)
  05031e8  mtlr 0
  05031ec  addi 1, 1, 112
  05031f0  blr

FUN_005031f4:   # 0x5031f4, 0x4 bytes
  05031f4  blr

STUB_005031f8:   # 0x5031f8, 0x4 bytes
  05031f8  blr

STUB_005031fc:   # 0x5031fc, 0x4 bytes
  05031fc  blr

FUN_00503200:   # 0x503200, 0x4 bytes
  0503200  blr

STUB_00503204:   # 0x503204, 0x4 bytes
  0503204  blr

STUB_00503208:   # 0x503208, 0x4 bytes
  0503208  blr

FUN_0050320c:   # 0x50320c, 0x8 bytes
  050320c  li 3, 0
  0503210  blr

FUN_00503214:   # 0x503214, 0x4 bytes
  0503214  blr

STUB_00503218:   # 0x503218, 0x4 bytes
  0503218  blr

STUB_0050321c:   # 0x50321c, 0x4 bytes
  050321c  blr

FUN_00503220:   # 0x503220, 0x8 bytes
  0503220  li 3, 0
  0503224  blr

FUN_00503228:   # 0x503228, 0x8 bytes
  0503228  li 3, 0
  050322c  blr

FUN_00503230:   # 0x503230, 0x8 bytes
  0503230  li 3, 0
  0503234  blr

FUN_00503238:   # 0x503238, 0x8 bytes
  0503238  li 3, 0
  050323c  blr

FUN_00503240:   # 0x503240, 0x4 bytes
  0503240  blr

FlushCache:   # 0x503244, 0x4 bytes
  0503244  blr

FUN_00503248:   # 0x503248, 0x4 bytes
  0503248  blr

FUN_0050324c:   # 0x50324c, 0x4 bytes
  050324c  blr

FUN_00503250:   # 0x503250, 0x8 bytes
  0503250  li 3, 0
  0503254  blr

FUN_00503258:   # 0x503258, 0x8 bytes
  0503258  li 3, 0
  050325c  blr

FUN_00503260:   # 0x503260, 0x8 bytes
  0503260  li 3, 0
  0503264  blr

FUN_00503268:   # 0x503268, 0x4 bytes
  0503268  blr

FUN_0050326c:   # 0x50326c, 0x4 bytes
  050326c  blr

FUN_00503270:   # 0x503270, 0x4 bytes
  0503270  blr

FUN_00503274:   # 0x503274, 0x8 bytes
  0503274  li 3, 0
  0503278  blr

FUN_0050327c:   # 0x50327c, 0x4 bytes
  050327c  blr

FUN_00503280:   # 0x503280, 0x4 bytes
  0503280  blr

FUN_00503284:   # 0x503284, 0x8 bytes
  0503284  li 3, 0
  0503288  blr

FUN_0050328c:   # 0x50328c, 0x4 bytes
  050328c  blr

FUN_00503290:   # 0x503290, 0x8 bytes
  0503290  li 3, 0
  0503294  blr

FUN_00503298:   # 0x503298, 0x4 bytes
  0503298  blr

FUN_0050329c:   # 0x50329c, 0x8 bytes
  050329c  li 3, 0
  05032a0  blr

FUN_005032a4:   # 0x5032a4, 0x4 bytes
  05032a4  blr

FUN_005032a8:   # 0x5032a8, 0x8 bytes
  05032a8  li 3, 0
  05032ac  blr

FUN_005032b0:   # 0x5032b0, 0x8 bytes
  05032b0  li 3, 0
  05032b4  blr

FUN_005032b8:   # 0x5032b8, 0x4 bytes
  05032b8  blr

FUN_005032bc:   # 0x5032bc, 0x8 bytes
  05032bc  li 3, 0
  05032c0  blr

FUN_005032c4:   # 0x5032c4, 0x8 bytes
  05032c4  li 3, 0
  05032c8  blr

FUN_005032cc:   # 0x5032cc, 0x8 bytes
  05032cc  li 3, 0
  05032d0  blr

FUN_005032d4:   # 0x5032d4, 0x8 bytes
  05032d4  li 3, 0
  05032d8  blr

FUN_005032dc:   # 0x5032dc, 0x8 bytes
  05032dc  li 3, 0
  05032e0  blr

FUN_005032e4:   # 0x5032e4, 0x8 bytes
  05032e4  li 3, 0
  05032e8  blr

FUN_005032ec:   # 0x5032ec, 0x8 bytes
  05032ec  li 3, 0
  05032f0  blr

FUN_005032f4:   # 0x5032f4, 0x8 bytes
  05032f4  li 3, 0
  05032f8  blr

FUN_005032fc:   # 0x5032fc, 0x8 bytes
  05032fc  li 3, 0
  0503300  blr

FUN_00503304:   # 0x503304, 0x8 bytes
  0503304  li 3, 0
  0503308  blr

FUN_0050330c:   # 0x50330c, 0x8 bytes
  050330c  li 3, 0
  0503310  blr

FUN_00503314:   # 0x503314, 0x8 bytes
  0503314  li 3, 0
  0503318  blr

FUN_0050331c:   # 0x50331c, 0x4 bytes
  050331c  blr

FUN_00503320:   # 0x503320, 0x4 bytes
  0503320  blr

FUN_00503324:   # 0x503324, 0x4 bytes
  0503324  blr

FUN_00503328:   # 0x503328, 0x4 bytes
  0503328  blr

FUN_0050332c:   # 0x50332c, 0x4 bytes
  050332c  blr

FUN_00503330:   # 0x503330, 0x24 bytes
  0503330  stdu 1, -112(1)
  0503334  mflr 0
  0503338  std 0, 128(1)
  050333c  li 11, 141
  0503340  sc
  0503344  ld 0, 128(1)
  0503348  mtlr 0
  050334c  addi 1, 1, 112
  0503350  blr

FUN_00503354:   # 0x503354, 0x8 bytes
  0503354  li 3, 0
  0503358  blr

FUN_0050335c:   # 0x50335c, 0x8 bytes
  050335c  li 3, 0
  0503360  blr

FUN_00503364:   # 0x503364, 0x8 bytes
  0503364  li 3, 0
  0503368  blr

FUN_0050336c:   # 0x50336c, 0x4 bytes
  050336c  blr

FUN_00503370:   # 0x503370, 0x8 bytes
  0503370  li 3, 0
  0503374  blr

FUN_00503378:   # 0x503378, 0x4 bytes
  0503378  blr

FUN_0050337c:   # 0x50337c, 0x8 bytes
  050337c  li 3, 0
  0503380  blr

FUN_00503384:   # 0x503384, 0x4 bytes
  0503384  blr

FUN_00503388:   # 0x503388, 0x8 bytes
  0503388  li 3, 0
  050338c  blr

FUN_00503390:   # 0x503390, 0x28 bytes
  0503390  stdu 1, -112(1)
  0503394  mflr 0
  0503398  std 0, 128(1)
  050339c  bl 0x650684
  05033a0  ld 2, 40(1)
  05033a4  clrldi 3, 3, 32
  05033a8  ld 0, 128(1)
  05033ac  mtlr 0
  05033b0  addi 1, 1, 112
  05033b4  blr

FUN_005033b8:   # 0x5033b8, 0x8 bytes
  05033b8  li 3, 0
  05033bc  blr

FUN_005033c0:   # 0x5033c0, 0x8 bytes
  05033c0  li 3, 0
  05033c4  blr

FUN_005033c8:   # 0x5033c8, 0x8 bytes
  05033c8  li 3, 0
  05033cc  blr

FUN_005033d0:   # 0x5033d0, 0x4 bytes
  05033d0  blr

FUN_005033d4:   # 0x5033d4, 0x8 bytes
  05033d4  li 3, 0
  05033d8  blr

FUN_005033dc:   # 0x5033dc, 0x8 bytes
  05033dc  li 3, 0
  05033e0  blr

FUN_005033e4:   # 0x5033e4, 0x4 bytes
  05033e4  blr

FUN_005033e8:   # 0x5033e8, 0x8 bytes
  05033e8  stw 4, 0(3)
  05033ec  blr

FUN_005033f0:   # 0x5033f0, 0x8 bytes
  05033f0  li 3, 0
  05033f4  blr

FUN_005033f8:   # 0x5033f8, 0x4 bytes
  05033f8  blr

FUN_005033fc:   # 0x5033fc, 0x8 bytes
  05033fc  li 3, 0
  0503400  blr

FUN_00503404:   # 0x503404, 0x30 bytes
  0503404  stdu 1, -112(1)
  0503408  mflr 0
  050340c  std 0, 128(1)
  0503410  lis 3, 102
  0503414  addic 3, 3, -2404
  0503418  bl 0x5cd098
  050341c  nop
  0503420  li 3, 0
  0503424  ld 0, 128(1)
  0503428  mtlr 0
  050342c  addi 1, 1, 112
  0503430  blr

FUN_00503434:   # 0x503434, 0x30 bytes
  0503434  stdu 1, -112(1)
  0503438  mflr 0
  050343c  std 0, 128(1)
  0503440  lis 3, 102
  0503444  addic 3, 3, -2380
  0503448  bl 0x5cd098
  050344c  nop
  0503450  li 3, 0
  0503454  ld 0, 128(1)
  0503458  mtlr 0
  050345c  addi 1, 1, 112
  0503460  blr

FUN_00503464:   # 0x503464, 0x30 bytes
  0503464  stdu 1, -112(1)
  0503468  mflr 0
  050346c  std 0, 128(1)
  0503470  lis 3, 102
  0503474  addic 3, 3, -2360
  0503478  bl 0x5cd098
  050347c  nop
  0503480  li 3, 0
  0503484  ld 0, 128(1)
  0503488  mtlr 0
  050348c  addi 1, 1, 112
  0503490  blr

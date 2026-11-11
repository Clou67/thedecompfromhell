# sdk/libc/strcmp.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strcmp:   # 0x5cc784, 0x154 bytes
  05cc784  or 11, 3, 4
  05cc788  clrlwi 0, 11, 29
  05cc78c  cmpwi 7, 0, 0
  05cc790  bf 30, 0x5cc858
  05cc794  ld 0, 0(3)
  05cc798  ld 9, 0(4)
  05cc79c  cmpd 7, 9, 0
  05cc7a0  bf 30, 0x5cc800
  05cc7a4  lis 11, 32639
  05cc7a8  ori 11, 11, 32639
  05cc7ac  sldi 11, 11, 32
  05cc7b0  oris 11, 11, 32639
  05cc7b4  ori 11, 11, 32639
  05cc7b8  and 0, 9, 11
  05cc7bc  or 9, 9, 11
  05cc7c0  add 0, 0, 11
  05cc7c4  nor 10, 0, 9
  05cc7c8  cmpdi 10, 0
  05cc7cc  bf 2, 0x5cc84c
  05cc7d0  mr 8, 11
  05cc7d4  b 0x5cc7dc
  05cc7d8  bf 2, 0x5cc84c
  05cc7dc  ldu 0, 8(4)
  05cc7e0  ldu 11, 8(3)
  05cc7e4  and 9, 0, 8
  05cc7e8  or 10, 0, 8
  05cc7ec  add 9, 9, 8
  05cc7f0  cmpd 7, 0, 11
  05cc7f4  nor 0, 9, 10
  05cc7f8  cmpdi 0, 0
  05cc7fc  bt 30, 0x5cc7d8
  05cc800  lbz 0, 0(3)
  05cc804  lbz 9, 0(4)
  05cc808  cmpw 7, 0, 9
  05cc80c  bf 30, 0x5cc834
  05cc810  cmpwi 7, 0, 0
  05cc814  bf 30, 0x5cc820
  05cc818  b 0x5cc84c
  05cc81c  bt 26, 0x5cc84c
  05cc820  lbzu 0, 1(3)
  05cc824  lbzu 9, 1(4)
  05cc828  cmpwi 6, 0, 0
  05cc82c  cmpw 7, 0, 9
  05cc830  bt 30, 0x5cc81c
  05cc834  cmplw 7, 0, 9
  05cc838  li 3, -1
  05cc83c  bt 28, 0x5cc850
  05cc840  li 3, 1
  05cc844  extsw 3, 3
  05cc848  blr
  05cc84c  li 3, 0
  05cc850  extsw 3, 3
  05cc854  blr
  05cc858  clrlwi 0, 11, 30
  05cc85c  cmpwi 7, 0, 0
  05cc860  bf 30, 0x5cc800
  05cc864  lwz 0, 0(3)
  05cc868  lwz 9, 0(4)
  05cc86c  cmpw 7, 9, 0
  05cc870  bf 30, 0x5cc800
  05cc874  lis 0, 32639
  05cc878  oris 11, 9, 32639
  05cc87c  ori 0, 0, 32639
  05cc880  ori 11, 11, 32639
  05cc884  and 9, 9, 0
  05cc888  mr 8, 0
  05cc88c  addis 9, 9, 32639
  05cc890  addi 9, 9, 32639
  05cc894  nor 9, 9, 11
  05cc898  cmpwi 7, 9, 0
  05cc89c  bt 30, 0x5cc8a8
  05cc8a0  b 0x5cc84c
  05cc8a4  bf 26, 0x5cc84c
  05cc8a8  lwzu 11, 4(4)
  05cc8ac  lwzu 10, 4(3)
  05cc8b0  and 9, 11, 8
  05cc8b4  oris 0, 11, 32639
  05cc8b8  addis 9, 9, 32639
  05cc8bc  ori 0, 0, 32639
  05cc8c0  addi 9, 9, 32639
  05cc8c4  cmpw 7, 11, 10
  05cc8c8  nor 0, 9, 0
  05cc8cc  cmpwi 6, 0, 0
  05cc8d0  bt 30, 0x5cc8a4
  05cc8d4  b 0x5cc800

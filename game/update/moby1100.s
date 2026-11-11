# game/update/moby1100.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1100_001bddd0:   # 0x1bddd0, 0x14 bytes
  01bddd0  lis 3, 118
  01bddd4  lis 4, 1
  01bddd8  addic 3, 3, 15648
  01bdddc  stw 4, 72(3)
  01bdde0  blr

UpdateMoby_1100:   # 0x1bddf0, 0x258 bytes
  01bddf0  stdu 1, -288(1)
  01bddf4  mflr 0
  01bddf8  std 0, 304(1)
  01bddfc  stfd 24, 224(1)
  01bde00  stfd 25, 232(1)
  01bde04  stfd 26, 240(1)
  01bde08  stfd 27, 248(1)
  01bde0c  stfd 28, 256(1)
  01bde10  stfd 29, 264(1)
  01bde14  stfd 30, 272(1)
  01bde18  stfd 31, 280(1)
  01bde1c  std 31, 216(1)
  01bde20  ori 31, 3, 0
  01bde24  lis 3, 165
  01bde28  addic 5, 3, 17860
  01bde2c  lhz 4, 178(31)
  01bde30  extsh 3, 4
  01bde34  lbzx 5, 5, 3
  01bde38  std 30, 208(1)
  01bde3c  std 29, 200(1)
  01bde40  std 28, 192(1)
  01bde44  std 27, 184(1)
  01bde48  std 26, 176(1)
  01bde4c  cmpwi 5, 0
  01bde50  bf 2, 0x1bde98
  01bde54  lis 5, 151
  01bde58  lis 30, 161
  01bde5c  srawi 3, 3, 5
  01bde60  addic 30, 30, -13028
  01bde64  sldi 3, 3, 2
  01bde68  lwz 5, -25488(5)
  01bde6c  clrlwi 4, 4, 27
  01bde70  addc 3, 3, 30
  01bde74  slwi 5, 5, 8
  01bde78  clrldi 3, 3, 32
  01bde7c  extsw 5, 5
  01bde80  li 6, 1
  01bde84  slw 4, 6, 4
  01bde88  lwzx 3, 3, 5
  01bde8c  and 3, 3, 4
  01bde90  cmpwi 3, 0
  01bde94  bt 2, 0x1bdea8
  01bde98  ori 3, 31, 0
  01bde9c  bl 0xefb38
  01bdea0  nop
  01bdea4  b 0x1be000
  01bdea8  lis 4, 28
  01bdeac  li 3, 128
  01bdeb0  addi 4, 4, -8728
  01bdeb4  li 26, 0
  01bdeb8  lis 29, 161
  01bdebc  sth 3, 50(31)
  01bdec0  addic 28, 31, 192
  01bdec4  ori 27, 26, 0
  01bdec8  addic 29, 29, 19456
  01bdecc  lfs 31, 0(4)
  01bded0  lwz 3, 52(29)
  01bded4  cmpw 3, 31
  01bded8  bf 2, 0x1bdff0
  01bdedc  lwz 3, 36(29)
  01bdee0  rlwinm 3, 3, 0, 14, 14
  01bdee4  cmpwi 3, 0
  01bdee8  bt 2, 0x1bdff0
  01bdeec  lwz 3, 32(29)
  01bdef0  lhz 4, 166(3)
  01bdef4  cmpwi 4, 172
  01bdef8  cmpwi 1, 4, 153
  01bdefc  bt 2, 0x1bdf04
  01bdf00  bf 6, 0x1bdfec
  01bdf04  ori 5, 3, 0
  01bdf08  lfs 30, 20(31)
  01bdf0c  lfs 29, 16(31)
  01bdf10  addic 3, 1, 112
  01bdf14  ori 4, 28, 0
  01bdf18  lfs 28, 20(5)
  01bdf1c  lfs 27, 16(5)
  01bdf20  lfs 26, 24(31)
  01bdf24  lfs 25, 24(5)
  01bdf28  lfs 24, 28(31)
  01bdf2c  bl 0x5010c0
  01bdf30  nop
  01bdf34  fsubs 1, 30, 28
  01bdf38  lfs 2, 128(1)
  01bdf3c  fsubs 3, 29, 27
  01bdf40  lfs 4, 112(1)
  01bdf44  fsubs 5, 26, 25
  01bdf48  lfs 6, 144(1)
  01bdf4c  lfs 7, 160(1)
  01bdf50  fmuls 1, 2, 1
  01bdf54  fmadds 1, 4, 3, 1
  01bdf58  fmadds 1, 6, 5, 1
  01bdf5c  fmadds 1, 7, 24, 1
  01bdf60  fcmpu 0, 1, 31
  01bdf64  cror 6, 0, 2
  01bdf68  bt 6, 0x1bdfe4
  01bdf6c  lis 3, 151
  01bdf70  lhz 5, 178(31)
  01bdf74  lis 4, 165
  01bdf78  extsh 6, 5
  01bdf7c  clrlwi 8, 5, 27
  01bdf80  srawi 6, 6, 5
  01bdf84  lwz 3, -25488(3)
  01bdf88  addic 4, 4, 19920
  01bdf8c  sldi 6, 6, 2
  01bdf90  slwi 3, 3, 8
  01bdf94  extsw 7, 3
  01bdf98  addc 3, 6, 30
  01bdf9c  extsh 6, 5
  01bdfa0  clrldi 9, 3, 32
  01bdfa4  srawi 3, 6, 5
  01bdfa8  li 6, 1
  01bdfac  sldi 10, 3, 2
  01bdfb0  clrlwi 5, 5, 27
  01bdfb4  lwzx 3, 9, 7
  01bdfb8  slw 8, 6, 8
  01bdfbc  slw 5, 6, 5
  01bdfc0  or 6, 3, 8
  01bdfc4  lwzx 8, 4, 10
  01bdfc8  ori 3, 31, 0
  01bdfcc  or 5, 8, 5
  01bdfd0  stwx 6, 9, 7
  01bdfd4  stwx 5, 4, 10
  01bdfd8  bl 0xefb38
  01bdfdc  nop
  01bdfe0  b 0x1be000
  01bdfe4  stw 27, 52(29)
  01bdfe8  b 0x1bdff0
  01bdfec  stw 27, 52(29)
  01bdff0  addic 26, 26, 1
  01bdff4  addic 29, 29, 64
  01bdff8  cmpwi 26, 64
  01bdffc  bt 0, 0x1bded0
  01be000  ld 0, 304(1)
  01be004  mtlr 0
  01be008  lfd 24, 224(1)
  01be00c  lfd 25, 232(1)
  01be010  lfd 26, 240(1)
  01be014  lfd 27, 248(1)
  01be018  lfd 28, 256(1)
  01be01c  lfd 29, 264(1)
  01be020  lfd 30, 272(1)
  01be024  lfd 31, 280(1)
  01be028  ld 26, 176(1)
  01be02c  ld 27, 184(1)
  01be030  ld 28, 192(1)
  01be034  ld 29, 200(1)
  01be038  ld 30, 208(1)
  01be03c  ld 31, 216(1)
  01be040  addi 1, 1, 288
  01be044  blr

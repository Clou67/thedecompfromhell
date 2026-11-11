# game/update/moby188.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M188_002cdd18:   # 0x2cdd18, 0x1d8 bytes
  02cdd18  stdu 1, -128(1)
  02cdd1c  mflr 0
  02cdd20  std 0, 144(1)
  02cdd24  std 31, 120(1)
  02cdd28  ori 31, 3, 0
  02cdd2c  lbz 3, 32(3)
  02cdd30  cmpwi 3, 0
  02cdd34  cmpwi 1, 3, 2
  02cdd38  cmpwi 6, 3, 1
  02cdd3c  cmpwi 7, 3, -1
  02cdd40  bt 1, 0x2cdd4c
  02cdd44  bf 29, 0x2cdedc
  02cdd48  b 0x2cdd58
  02cdd4c  bf 25, 0x2cddb4
  02cdd50  bf 5, 0x2cde98
  02cdd54  b 0x2cdedc
  02cdd58  lis 4, 45
  02cdd5c  addic 3, 31, 16
  02cdd60  addi 5, 4, -8960
  02cdd64  li 4, 0
  02cdd68  lfs 1, 0(5)
  02cdd6c  bl 0xffb70
  02cdd70  nop
  02cdd74  lis 3, 16329
  02cdd78  lis 4, 16457
  02cdd7c  ori 3, 3, 4059
  02cdd80  lis 6, 161
  02cdd84  lis 5, 124
  02cdd88  ori 4, 4, 4059
  02cdd8c  addic 6, 6, 2368
  02cdd90  stw 3, 64(31)
  02cdd94  li 3, 1
  02cdd98  stw 4, 68(31)
  02cdd9c  lfs 1, -10960(5)
  02cdda0  lfs 2, 40(6)
  02cdda4  stb 3, 32(31)
  02cdda8  fadds 1, 2, 1
  02cddac  stfs 1, 24(31)
  02cddb0  b 0x2cdedc
  02cddb4  lis 3, 266
  02cddb8  lfs 1, 72(31)
  02cddbc  lfs 2, 8896(3)
  02cddc0  bl 0x502578
  02cddc4  nop
  02cddc8  lis 3, 161
  02cddcc  lis 4, 26214
  02cddd0  stfs 1, 72(31)
  02cddd4  ori 4, 4, 26215
  02cddd8  lwz 3, 1808(3)
  02cdddc  mulhw 4, 4, 3
  02cdde0  srawi 4, 4, 2
  02cdde4  srwi 5, 4, 31
  02cdde8  addc 4, 4, 5
  02cddec  sldi 5, 4, 3
  02cddf0  addc 5, 4, 5
  02cddf4  addc 4, 4, 5
  02cddf8  subc 3, 3, 4
  02cddfc  cmpwi 3, 0
  02cde00  bf 2, 0x2cdedc
  02cde04  lis 3, 151
  02cde08  addic 3, 3, -25376
  02cde0c  lwz 4, 8872(3)
  02cde10  cmpwi 4, 0
  02cde14  bt 2, 0x2cdedc
  02cde18  lfs 1, 20(31)
  02cde1c  lfs 2, 132(3)
  02cde20  lfs 3, 16(31)
  02cde24  fsubs 1, 1, 2
  02cde28  lfs 2, 128(3)
  02cde2c  fsubs 2, 3, 2
  02cde30  lis 4, 45
  02cde34  addi 4, 4, -8960
  02cde38  fmuls 1, 1, 1
  02cde3c  fmadds 1, 2, 2, 1
  02cde40  lfs 2, 4(4)
  02cde44  fsqrts 1, 1
  02cde48  fcmpu 0, 1, 2
  02cde4c  cror 6, 1, 2
  02cde50  bt 6, 0x2cdedc
  02cde54  lfs 1, 24(31)
  02cde58  lis 4, 45
  02cde5c  lfs 2, 136(3)
  02cde60  addi 4, 4, -8960
  02cde64  fsubs 1, 1, 2
  02cde68  lfs 2, 8(4)
  02cde6c  fabs 1, 1
  02cde70  fcmpu 0, 1, 2
  02cde74  cror 6, 1, 2
  02cde78  bt 6, 0x2cdedc
  02cde7c  li 3, 26
  02cde80  li 4, 1
  02cde84  bl 0x112e18
  02cde88  nop
  02cde8c  li 3, 2
  02cde90  stb 3, 32(31)
  02cde94  b 0x2cdedc
  02cde98  lis 3, 45
  02cde9c  lwz 5, 36(31)
  02cdea0  addi 4, 3, -8960
  02cdea4  addic 3, 31, 44
  02cdea8  lfs 3, 16(4)
  02cdeac  lfs 1, 12(4)
  02cdeb0  lfs 4, 36(5)
  02cdeb4  fmuls 2, 4, 3
  02cdeb8  bl 0x109af0
  02cdebc  nop
  02cdec0  lwz 3, 44(31)
  02cdec4  cmpwi 3, 0
  02cdec8  bf 2, 0x2cdedc
  02cdecc  ori 3, 31, 0
  02cded0  bl 0xefb38
  02cded4  nop
  02cded8  b 0x2cdedc
  02cdedc  ld 0, 144(1)
  02cdee0  mtlr 0
  02cdee4  ld 31, 120(1)
  02cdee8  addi 1, 1, 128
  02cdeec  blr

UpdateMoby_188:   # 0x2cdef0, 0x60 bytes
  02cdef0  stdu 1, -112(1)
  02cdef4  mflr 0
  02cdef8  std 0, 128(1)
  02cdefc  lwz 4, 120(3)
  02cdf00  lwz 4, 4(4)
  02cdf04  cmpwi 4, 0
  02cdf08  bt 2, 0x2cdf14
  02cdf0c  bl 0x2cdd18
  02cdf10  b 0x2cdf40
  02cdf14  lis 4, 150
  02cdf18  lis 5, 151
  02cdf1c  addic 4, 4, 19008
  02cdf20  addic 5, 5, -25376
  02cdf24  lwz 4, 160(4)
  02cdf28  lwz 5, 4256(5)
  02cdf2c  and 4, 4, 5
  02cdf30  cntlzw 4, 4
  02cdf34  rlwinm 4, 4, 27, 31, 31
  02cdf38  xori 4, 4, 1
  02cdf3c  stb 4, 188(3)
  02cdf40  ld 0, 128(1)
  02cdf44  mtlr 0
  02cdf48  addi 1, 1, 112
  02cdf4c  blr

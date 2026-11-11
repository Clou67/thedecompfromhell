# game/update/moby1179.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1179_001ee690:   # 0x1ee690, 0x14 bytes
  01ee690  lis 3, 118
  01ee694  lis 4, 1
  01ee698  addic 3, 3, 24016
  01ee69c  stw 4, 72(3)
  01ee6a0  blr

UpdateMoby_1179:   # 0x1ee6c0, 0x524 bytes
  01ee6c0  stdu 1, -144(1)
  01ee6c4  mflr 0
  01ee6c8  std 0, 160(1)
  01ee6cc  std 31, 136(1)
  01ee6d0  ori 31, 3, 0
  01ee6d4  lbz 4, 32(31)
  01ee6d8  lwz 3, 120(31)
  01ee6dc  cmpwi 4, 0
  01ee6e0  cmpwi 1, 4, -1
  01ee6e4  std 30, 128(1)
  01ee6e8  cmpwi 6, 4, 1
  01ee6ec  bt 1, 0x1ee6f8
  01ee6f0  bf 5, 0x1eebcc
  01ee6f4  b 0x1ee700
  01ee6f8  bf 25, 0x1ee7d8
  01ee6fc  b 0x1eebcc
  01ee700  lis 4, 161
  01ee704  li 5, 0
  01ee708  addic 4, 4, 12
  01ee70c  lis 6, 151
  01ee710  sth 5, 864(4)
  01ee714  sth 5, 866(4)
  01ee718  lhz 4, 62(3)
  01ee71c  lfs 1, 24(31)
  01ee720  ori 4, 4, 8
  01ee724  sth 4, 62(3)
  01ee728  lwz 3, -25488(6)
  01ee72c  cmpwi 3, 11
  01ee730  bf 2, 0x1ee7cc
  01ee734  lbz 4, 176(31)
  01ee738  cmpwi 4, 255
  01ee73c  bt 2, 0x1ee7cc
  01ee740  lis 4, 165
  01ee744  lhz 5, 178(31)
  01ee748  addic 6, 4, 17860
  01ee74c  extsh 4, 5
  01ee750  lbzx 6, 6, 4
  01ee754  cmpwi 6, 0
  01ee758  bf 2, 0x1ee798
  01ee75c  lis 6, 161
  01ee760  srawi 4, 4, 5
  01ee764  addic 6, 6, -13028
  01ee768  sldi 4, 4, 2
  01ee76c  slwi 3, 3, 8
  01ee770  addc 4, 4, 6
  01ee774  extsw 3, 3
  01ee778  clrldi 4, 4, 32
  01ee77c  clrlwi 5, 5, 27
  01ee780  li 6, 1
  01ee784  slw 5, 6, 5
  01ee788  lwzx 3, 4, 3
  01ee78c  and 3, 3, 5
  01ee790  cmpwi 3, 0
  01ee794  bt 2, 0x1ee7cc
  01ee798  lis 3, 31
  01ee79c  li 5, 2
  01ee7a0  addi 4, 3, -6488
  01ee7a4  li 3, 0
  01ee7a8  lfs 2, 0(4)
  01ee7ac  stb 5, 32(31)
  01ee7b0  fsubs 1, 1, 2
  01ee7b4  li 4, 0
  01ee7b8  ori 5, 31, 0
  01ee7bc  stfs 1, 24(31)
  01ee7c0  bl 0x15d12c
  01ee7c4  nop
  01ee7c8  b 0x1eebcc
  01ee7cc  li 3, 1
  01ee7d0  stb 3, 32(31)
  01ee7d4  b 0x1eebcc
  01ee7d8  lis 30, 151
  01ee7dc  addic 30, 30, -25376
  01ee7e0  lwz 3, 764(30)
  01ee7e4  cmpw 3, 31
  01ee7e8  bf 2, 0x1ee8c8
  01ee7ec  lis 3, 151
  01ee7f0  addic 3, 3, -16064
  01ee7f4  lbz 3, 3(3)
  01ee7f8  cmpwi 3, 0
  01ee7fc  bt 2, 0x1ee8c8
  01ee800  lhz 3, 782(30)
  01ee804  cmpwi 3, 0
  01ee808  bf 2, 0x1ee8c8
  01ee80c  lwz 3, 8324(30)
  01ee810  cmpwi 3, 34
  01ee814  bf 2, 0x1ee8c8
  01ee818  lis 6, 151
  01ee81c  lwz 6, -25488(6)
  01ee820  cmpwi 6, 11
  01ee824  bf 2, 0x1ee894
  01ee828  lbz 5, 176(31)
  01ee82c  cmpwi 1, 5, 255
  01ee830  bt 6, 0x1ee894
  01ee834  lis 3, 165
  01ee838  addic 4, 5, 2
  01ee83c  addic 7, 3, 14692
  01ee840  lhz 3, 178(31)
  01ee844  extsh 3, 3
  01ee848  stbx 4, 7, 3
  01ee84c  bt 6, 0x1ee888
  01ee850  lis 7, 162
  01ee854  addic 7, 7, 704
  01ee858  lbzx 7, 5, 7
  01ee85c  cmpwi 7, 255
  01ee860  bt 2, 0x1ee894
  01ee864  lis 7, 161
  01ee868  slwi 6, 6, 4
  01ee86c  addic 7, 7, -13692
  01ee870  extsw 6, 6
  01ee874  addc 5, 5, 7
  01ee878  clrldi 5, 5, 32
  01ee87c  lbzx 5, 5, 6
  01ee880  cmpwi 5, 255
  01ee884  bf 2, 0x1ee894
  01ee888  lis 5, 165
  01ee88c  addic 5, 5, 17860
  01ee890  stbx 4, 5, 3
  01ee894  lis 3, 31
  01ee898  lfs 1, 24(31)
  01ee89c  li 6, 2
  01ee8a0  addi 4, 3, -6488
  01ee8a4  li 3, 0
  01ee8a8  ori 5, 31, 0
  01ee8ac  lfs 2, 0(4)
  01ee8b0  stb 6, 32(31)
  01ee8b4  li 4, 0
  01ee8b8  fsubs 1, 1, 2
  01ee8bc  stfs 1, 24(31)
  01ee8c0  bl 0x15d12c
  01ee8c4  nop
  01ee8c8  lbz 3, 176(31)
  01ee8cc  cmpwi 3, 255
  01ee8d0  bt 2, 0x1eebcc
  01ee8d4  lfs 1, 20(31)
  01ee8d8  lfs 2, 132(30)
  01ee8dc  lfs 3, 16(31)
  01ee8e0  fsubs 1, 1, 2
  01ee8e4  lfs 2, 128(30)
  01ee8e8  fsubs 2, 3, 2
  01ee8ec  lis 3, 31
  01ee8f0  addi 3, 3, -6488
  01ee8f4  fmuls 1, 1, 1
  01ee8f8  fmadds 1, 2, 2, 1
  01ee8fc  lfs 2, 4(3)
  01ee900  fsqrts 1, 1
  01ee904  fcmpu 0, 1, 2
  01ee908  cror 6, 1, 2
  01ee90c  bt 6, 0x1eebcc
  01ee910  lwz 3, 8332(30)
  01ee914  cmpwi 3, 0
  01ee918  cmpwi 1, 3, 1
  01ee91c  bt 2, 0x1ee924
  01ee920  bf 6, 0x1eebcc
  01ee924  lis 3, 151
  01ee928  addic 3, 3, -16064
  01ee92c  lbz 3, 3(3)
  01ee930  cmpwi 3, 0
  01ee934  bf 2, 0x1eea1c
  01ee938  lis 3, 161
  01ee93c  lis 4, 31
  01ee940  lwz 3, -2344(3)
  01ee944  extsw 3, 3
  01ee948  std 3, 112(1)
  01ee94c  addi 3, 4, -6488
  01ee950  lis 4, 114
  01ee954  lfs 1, 8(3)
  01ee958  lfs 2, -3056(4)
  01ee95c  lfd 3, 112(1)
  01ee960  fcfid 3, 3
  01ee964  frsp 3, 3
  01ee968  fadds 1, 3, 1
  01ee96c  fmuls 1, 2, 1
  01ee970  fctiwz 1, 1
  01ee974  stfd 1, 112(1)
  01ee978  lfs 1, 12(3)
  01ee97c  fmuls 1, 2, 1
  01ee980  lfs 3, 16(3)
  01ee984  lis 3, 161
  01ee988  lwz 5, 116(1)
  01ee98c  addic 3, 3, 12
  01ee990  fctidz 1, 1
  01ee994  lhz 4, 906(3)
  01ee998  mulli 6, 4, 600
  01ee99c  fcfid 1, 1
  01ee9a0  subc 7, 5, 6
  01ee9a4  cmpwi 1, 6, 0
  01ee9a8  frsp 1, 1
  01ee9ac  fmuls 1, 1, 3
  01ee9b0  fctiwz 1, 1
  01ee9b4  stfd 1, 112(1)
  01ee9b8  lwz 6, 116(1)
  01ee9bc  cmpw 7, 6
  01ee9c0  bt 1, 0x1ee9c8
  01ee9c4  bf 6, 0x1ee9dc
  01ee9c8  li 3, 11009
  01ee9cc  li 4, 113
  01ee9d0  bl 0x7b310
  01ee9d4  nop
  01ee9d8  b 0x1eebcc
  01ee9dc  lis 6, 6990
  01ee9e0  ori 6, 6, 33205
  01ee9e4  mulhw 6, 6, 5
  01ee9e8  srawi 6, 6, 6
  01ee9ec  srwi 7, 6, 31
  01ee9f0  addc 6, 6, 7
  01ee9f4  cmpw 6, 4
  01ee9f8  bf 1, 0x1eebcc
  01ee9fc  lis 4, 6990
  01eea00  ori 4, 4, 33205
  01eea04  mulhw 4, 4, 5
  01eea08  srawi 4, 4, 6
  01eea0c  srwi 5, 4, 31
  01eea10  addc 4, 4, 5
  01eea14  sth 4, 906(3)
  01eea18  b 0x1eebcc
  01eea1c  lis 3, 161
  01eea20  addic 3, 3, 12
  01eea24  lhz 4, 864(3)
  01eea28  cmpwi 4, 0
  01eea2c  bt 2, 0x1eeb0c
  01eea30  lis 4, 161
  01eea34  lis 5, 31
  01eea38  lwz 4, -2344(4)
  01eea3c  extsw 4, 4
  01eea40  std 4, 112(1)
  01eea44  addi 4, 5, -6488
  01eea48  lis 5, 114
  01eea4c  lfs 1, 8(4)
  01eea50  lfs 2, -3056(5)
  01eea54  lfd 3, 112(1)
  01eea58  fcfid 3, 3
  01eea5c  frsp 3, 3
  01eea60  fadds 1, 3, 1
  01eea64  fmuls 1, 2, 1
  01eea68  fctiwz 1, 1
  01eea6c  stfd 1, 112(1)
  01eea70  lfs 1, 12(4)
  01eea74  fmuls 1, 2, 1
  01eea78  lfs 3, 16(4)
  01eea7c  lhz 4, 866(3)
  01eea80  mulli 6, 4, 600
  01eea84  fctidz 1, 1
  01eea88  lwz 5, 116(1)
  01eea8c  cmpwi 1, 6, 0
  01eea90  subc 7, 5, 6
  01eea94  fcfid 1, 1
  01eea98  frsp 1, 1
  01eea9c  fmuls 1, 1, 3
  01eeaa0  fctiwz 1, 1
  01eeaa4  stfd 1, 112(1)
  01eeaa8  lwz 6, 116(1)
  01eeaac  cmpw 7, 6
  01eeab0  bt 1, 0x1eeab8
  01eeab4  bf 6, 0x1eeacc
  01eeab8  li 3, 11010
  01eeabc  li 4, 108
  01eeac0  bl 0x7b310
  01eeac4  nop
  01eeac8  b 0x1eebcc
  01eeacc  lis 6, 6990
  01eead0  ori 6, 6, 33205
  01eead4  mulhw 6, 6, 5
  01eead8  srawi 6, 6, 6
  01eeadc  srwi 7, 6, 31
  01eeae0  addc 6, 6, 7
  01eeae4  cmpw 6, 4
  01eeae8  bf 1, 0x1eebcc
  01eeaec  lis 4, 6990
  01eeaf0  ori 4, 4, 33205
  01eeaf4  mulhw 4, 4, 5
  01eeaf8  srawi 4, 4, 6
  01eeafc  srwi 5, 4, 31
  01eeb00  addc 4, 4, 5
  01eeb04  sth 4, 866(3)
  01eeb08  b 0x1eebcc
  01eeb0c  lis 5, 0
  01eeb10  ori 5, 5, 65535
  01eeb14  cmpw 4, 5
  01eeb18  bf 0, 0x1eeb24
  01eeb1c  addic 4, 4, 1
  01eeb20  sth 4, 864(3)
  01eeb24  lis 4, 161
  01eeb28  lis 5, 114
  01eeb2c  lwz 4, -2344(4)
  01eeb30  extsw 4, 4
  01eeb34  std 4, 112(1)
  01eeb38  lis 4, 31
  01eeb3c  addi 4, 4, -6488
  01eeb40  lfs 1, 8(4)
  01eeb44  lfs 2, -3056(5)
  01eeb48  lfd 3, 112(1)
  01eeb4c  lis 4, 6990
  01eeb50  fcfid 3, 3
  01eeb54  ori 5, 4, 33205
  01eeb58  lhz 6, 866(3)
  01eeb5c  frsp 3, 3
  01eeb60  fadds 1, 3, 1
  01eeb64  fmuls 1, 2, 1
  01eeb68  fctiwz 1, 1
  01eeb6c  stfd 1, 112(1)
  01eeb70  lwz 4, 116(1)
  01eeb74  mulhw 5, 5, 4
  01eeb78  srawi 5, 5, 6
  01eeb7c  srwi 7, 5, 31
  01eeb80  addc 5, 5, 7
  01eeb84  cmpw 5, 6
  01eeb88  bf 1, 0x1eeba8
  01eeb8c  lis 5, 6990
  01eeb90  ori 5, 5, 33205
  01eeb94  mulhw 4, 5, 4
  01eeb98  srawi 4, 4, 6
  01eeb9c  srwi 5, 4, 31
  01eeba0  addc 4, 4, 5
  01eeba4  sth 4, 866(3)
  01eeba8  lis 4, 151
  01eebac  lwz 7, 868(3)
  01eebb0  li 5, 1
  01eebb4  lis 6, -32768
  01eebb8  lwz 4, -25488(4)
  01eebbc  slw 4, 5, 4
  01eebc0  or 4, 7, 4
  01eebc4  or 4, 4, 6
  01eebc8  stw 4, 868(3)
  01eebcc  ld 0, 160(1)
  01eebd0  mtlr 0
  01eebd4  ld 30, 128(1)
  01eebd8  ld 31, 136(1)
  01eebdc  addi 1, 1, 144
  01eebe0  blr

# game/update/moby830.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M830_0047e760:   # 0x47e760, 0x14 bytes
  047e760  lis 3, 135
  047e764  lis 4, 1
  047e768  addic 3, 3, 31716
  047e76c  stw 4, 72(3)
  047e770  blr

UpdateMoby_830:   # 0x47e7a8, 0x404 bytes
  047e7a8  stdu 1, -144(1)
  047e7ac  mflr 0
  047e7b0  std 0, 160(1)
  047e7b4  std 31, 136(1)
  047e7b8  lbz 4, 32(3)
  047e7bc  std 30, 128(1)
  047e7c0  ori 31, 3, 0
  047e7c4  lwz 30, 120(3)
  047e7c8  cmpwi 4, 0
  047e7cc  cmpwi 1, 4, 1
  047e7d0  std 29, 120(1)
  047e7d4  cmpwi 6, 4, -1
  047e7d8  bt 1, 0x47e7e4
  047e7dc  bf 25, 0x47eb90
  047e7e0  b 0x47e7ec
  047e7e4  bf 5, 0x47e958
  047e7e8  b 0x47eb90
  047e7ec  bl 0xfcc68
  047e7f0  nop
  047e7f4  lis 3, 72
  047e7f8  stfs 1, 12(30)
  047e7fc  lfs 1, 24(31)
  047e800  lis 5, 165
  047e804  addi 4, 3, -6280
  047e808  lhz 3, 178(31)
  047e80c  addic 5, 5, 17860
  047e810  lfs 2, 0(4)
  047e814  extsh 4, 3
  047e818  fsubs 1, 1, 2
  047e81c  stfs 1, 24(31)
  047e820  lbzx 5, 5, 4
  047e824  cmpwi 5, 0
  047e828  bf 2, 0x47e8a4
  047e82c  lis 6, 151
  047e830  srawi 4, 4, 5
  047e834  lis 5, 161
  047e838  sldi 7, 4, 2
  047e83c  addic 5, 5, -13028
  047e840  lwz 4, -25488(6)
  047e844  addc 5, 7, 5
  047e848  slwi 6, 4, 8
  047e84c  clrldi 5, 5, 32
  047e850  extsw 6, 6
  047e854  li 8, 1
  047e858  clrlwi 3, 3, 27
  047e85c  slw 3, 8, 3
  047e860  lwzx 5, 5, 6
  047e864  and 3, 5, 3
  047e868  cmpwi 3, 0
  047e86c  bf 2, 0x47e8a4
  047e870  lwz 3, 8(30)
  047e874  cmpwi 3, 0
  047e878  bt 2, 0x47e94c
  047e87c  lis 3, 161
  047e880  lbz 5, 176(31)
  047e884  slwi 4, 4, 4
  047e888  addic 3, 3, -13692
  047e88c  extsw 4, 4
  047e890  addc 3, 5, 3
  047e894  clrldi 3, 3, 32
  047e898  lbzx 3, 3, 4
  047e89c  cmpwi 3, 255
  047e8a0  bf 2, 0x47e94c
  047e8a4  li 3, 2
  047e8a8  lis 4, -32736
  047e8ac  ori 4, 4, 32800
  047e8b0  stb 3, 188(31)
  047e8b4  stb 3, 32(31)
  047e8b8  stw 4, 144(31)
  047e8bc  lwz 31, 0(30)
  047e8c0  cmpwi 31, -1
  047e8c4  bt 2, 0x47eb90
  047e8c8  lis 4, 165
  047e8cc  slwi 3, 31, 2
  047e8d0  addic 4, 4, 7136
  047e8d4  extsw 5, 3
  047e8d8  li 3, 0
  047e8dc  ori 7, 3, 0
  047e8e0  lwzx 5, 4, 5
  047e8e4  lwz 5, 0(5)
  047e8e8  cmpwi 5, 0
  047e8ec  bf 1, 0x47eb90
  047e8f0  ori 5, 3, 0
  047e8f4  ori 6, 31, 0
  047e8f8  lwz 9, 4(30)
  047e8fc  slwi 8, 6, 2
  047e900  extsw 8, 8
  047e904  lwzx 8, 4, 8
  047e908  addc 31, 8, 5
  047e90c  clrldi 31, 31, 32
  047e910  lwz 8, 28(31)
  047e914  cmpw 8, 9
  047e918  bf 2, 0x47e924
  047e91c  stw 7, 28(31)
  047e920  lwz 6, 0(30)
  047e924  ori 31, 6, 0
  047e928  addic 3, 3, 1
  047e92c  slwi 6, 31, 2
  047e930  addic 5, 5, 16
  047e934  extsw 6, 6
  047e938  lwzx 6, 4, 6
  047e93c  lwz 6, 0(6)
  047e940  cmpw 3, 6
  047e944  bt 0, 0x47e8f4
  047e948  b 0x47eb90
  047e94c  li 3, 1
  047e950  stb 3, 32(31)
  047e954  b 0x47eb90
  047e958  lis 3, 72
  047e95c  lfs 1, 12(30)
  047e960  addi 29, 3, -6280
  047e964  lis 3, 114
  047e968  lfs 2, 4(29)
  047e96c  lfs 3, -3052(3)
  047e970  fmuls 2, 3, 2
  047e974  bl 0x502578
  047e978  nop
  047e97c  lfs 2, 8(29)
  047e980  lfs 3, 12(29)
  047e984  fsubs 2, 2, 1
  047e988  fsubs 3, 3, 1
  047e98c  lfs 5, 16(29)
  047e990  fsub 4, 1, 2
  047e994  fsel 2, 4, 2, 1
  047e998  lfs 4, 20(29)
  047e99c  fsub 6, 3, 2
  047e9a0  fsel 2, 6, 3, 2
  047e9a4  lfs 3, 24(29)
  047e9a8  lfs 6, 28(29)
  047e9ac  lfs 8, 32(29)
  047e9b0  lfs 9, 36(29)
  047e9b4  fmuls 7, 2, 2
  047e9b8  fmuls 10, 7, 2
  047e9bc  fmuls 11, 7, 10
  047e9c0  fmadds 2, 10, 5, 2
  047e9c4  fmuls 10, 7, 11
  047e9c8  fmadds 2, 11, 4, 2
  047e9cc  lfs 4, 40(29)
  047e9d0  stfs 1, 12(30)
  047e9d4  fmuls 5, 7, 10
  047e9d8  fmadds 2, 10, 3, 2
  047e9dc  fmadds 1, 5, 6, 2
  047e9e0  fmsubs 1, 1, 8, 9
  047e9e4  fmuls 1, 1, 4
  047e9e8  bl 0x502758
  047e9ec  nop
  047e9f0  li 4, 32
  047e9f4  li 5, 32
  047e9f8  subc 4, 3, 4
  047e9fc  subc 5, 5, 3
  047ea00  sradi 4, 4, 63
  047ea04  li 6, 128
  047ea08  and 4, 4, 5
  047ea0c  subc 6, 6, 3
  047ea10  addc 4, 3, 4
  047ea14  li 3, 128
  047ea18  sradi 5, 6, 63
  047ea1c  subc 3, 3, 4
  047ea20  lis 6, 151
  047ea24  and 5, 5, 3
  047ea28  addic 3, 6, -25376
  047ea2c  addc 4, 4, 5
  047ea30  lis 7, -32768
  047ea34  slwi 5, 4, 8
  047ea38  slwi 6, 4, 16
  047ea3c  or 4, 5, 4
  047ea40  lwz 5, 764(3)
  047ea44  or 4, 4, 6
  047ea48  cmpw 5, 31
  047ea4c  or 4, 4, 7
  047ea50  stw 4, 144(31)
  047ea54  bf 2, 0x47eb90
  047ea58  lhz 3, 782(3)
  047ea5c  cmpwi 3, 0
  047ea60  bf 2, 0x47eb90
  047ea64  lis 3, 165
  047ea68  addic 6, 3, 14692
  047ea6c  lbz 3, 176(31)
  047ea70  lhz 5, 178(31)
  047ea74  addic 4, 3, 2
  047ea78  extsh 5, 5
  047ea7c  cmpwi 3, 255
  047ea80  stbx 4, 6, 5
  047ea84  bt 2, 0x47eac8
  047ea88  lis 6, 162
  047ea8c  addic 6, 6, 704
  047ea90  lbzx 6, 3, 6
  047ea94  cmpwi 6, 255
  047ea98  bt 2, 0x47ead4
  047ea9c  lis 6, 151
  047eaa0  lis 7, 161
  047eaa4  addic 7, 7, -13692
  047eaa8  lwz 6, -25488(6)
  047eaac  addc 3, 3, 7
  047eab0  slwi 6, 6, 4
  047eab4  clrldi 3, 3, 32
  047eab8  extsw 6, 6
  047eabc  lbzx 3, 3, 6
  047eac0  cmpwi 3, 255
  047eac4  bf 2, 0x47ead4
  047eac8  lis 3, 165
  047eacc  addic 3, 3, 17860
  047ead0  stbx 4, 3, 5
  047ead4  li 4, 2
  047ead8  lis 5, -32736
  047eadc  li 6, 1
  047eae0  ori 7, 5, 32800
  047eae4  stb 4, 32(31)
  047eae8  ori 5, 31, 0
  047eaec  li 3, 0
  047eaf0  stb 6, 188(31)
  047eaf4  stw 7, 144(31)
  047eaf8  li 4, 0
  047eafc  bl 0x15d12c
  047eb00  nop
  047eb04  lwz 31, 0(30)
  047eb08  cmpwi 31, -1
  047eb0c  bt 2, 0x47eb90
  047eb10  lis 4, 165
  047eb14  slwi 3, 31, 2
  047eb18  addic 4, 4, 7136
  047eb1c  extsw 5, 3
  047eb20  li 3, 0
  047eb24  ori 7, 3, 0
  047eb28  lwzx 5, 4, 5
  047eb2c  lwz 5, 0(5)
  047eb30  cmpwi 5, 0
  047eb34  bf 1, 0x47eb90
  047eb38  ori 5, 3, 0
  047eb3c  ori 6, 31, 0
  047eb40  lwz 9, 4(30)
  047eb44  slwi 8, 6, 2
  047eb48  extsw 8, 8
  047eb4c  lwzx 8, 4, 8
  047eb50  addc 31, 8, 5
  047eb54  clrldi 31, 31, 32
  047eb58  lwz 8, 28(31)
  047eb5c  cmpw 8, 9
  047eb60  bf 2, 0x47eb6c
  047eb64  stw 7, 28(31)
  047eb68  lwz 6, 0(30)
  047eb6c  ori 31, 6, 0
  047eb70  addic 3, 3, 1
  047eb74  slwi 6, 31, 2
  047eb78  addic 5, 5, 16
  047eb7c  extsw 6, 6
  047eb80  lwzx 6, 4, 6
  047eb84  lwz 6, 0(6)
  047eb88  cmpw 3, 6
  047eb8c  bt 0, 0x47eb3c
  047eb90  ld 0, 160(1)
  047eb94  mtlr 0
  047eb98  ld 29, 120(1)
  047eb9c  ld 30, 128(1)
  047eba0  ld 31, 136(1)
  047eba4  addi 1, 1, 144
  047eba8  blr

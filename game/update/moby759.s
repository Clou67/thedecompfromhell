# game/update/moby759.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M759_0044ecac:   # 0x44ecac, 0x14 bytes
  044ecac  lis 3, 135
  044ecb0  lis 4, 1
  044ecb4  addic 3, 3, 7320
  044ecb8  stw 4, 72(3)
  044ecbc  blr

UpdateMoby_759:   # 0x44ece0, 0x370 bytes
  044ece0  stdu 1, -272(1)
  044ece4  mflr 0
  044ece8  std 0, 288(1)
  044ecec  std 31, 264(1)
  044ecf0  cmpwi 3, 0
  044ecf4  std 30, 256(1)
  044ecf8  std 29, 248(1)
  044ecfc  std 28, 240(1)
  044ed00  ori 31, 3, 0
  044ed04  bt 2, 0x44f030
  044ed08  lwz 30, 120(31)
  044ed0c  cmpwi 30, 0
  044ed10  bt 2, 0x44f030
  044ed14  lbz 3, 32(31)
  044ed18  addic 29, 30, 32
  044ed1c  cmpwi 3, 2
  044ed20  bt 2, 0x44eeb0
  044ed24  ori 3, 31, 0
  044ed28  ori 28, 29, 0
  044ed2c  lis 4, 51
  044ed30  li 5, 0
  044ed34  bl 0x10675c
  044ed38  nop
  044ed3c  ori 29, 3, 0
  044ed40  ori 3, 31, 0
  044ed44  ori 4, 29, 0
  044ed48  addic 7, 1, 224
  044ed4c  li 9, 0
  044ed50  li 10, 4
  044ed54  ori 5, 28, 0
  044ed58  li 6, 0
  044ed5c  li 8, 0
  044ed60  bl 0x106840
  044ed64  nop
  044ed68  ori 4, 3, 0
  044ed6c  lwz 3, 224(1)
  044ed70  cmpwi 4, 0
  044ed74  bf 1, 0x44ed88
  044ed78  cmpwi 4, 2
  044ed7c  bt 1, 0x44ed88
  044ed80  li 4, 0
  044ed84  stw 4, 32(30)
  044ed88  cmpwi 3, 1
  044ed8c  bf 1, 0x44eea8
  044ed90  lwz 3, 32(30)
  044ed94  lwz 4, 44(29)
  044ed98  srawi 5, 3, 31
  044ed9c  lfs 2, 32(30)
  044eda0  srawi 6, 4, 31
  044eda4  lfs 1, 44(29)
  044eda8  srwi 7, 5, 1
  044edac  srwi 8, 6, 1
  044edb0  xor 3, 7, 3
  044edb4  xor 4, 8, 4
  044edb8  subc 3, 3, 5
  044edbc  subc 4, 4, 6
  044edc0  cmpw 3, 4
  044edc4  bt 1, 0x44ee7c
  044edc8  lis 3, 102
  044edcc  addic 3, 3, -32364
  044edd0  bl 0x5cd098
  044edd4  nop
  044edd8  lis 3, 69
  044eddc  li 6, 0
  044ede0  addi 7, 3, -4928
  044ede4  lis 3, 114
  044ede8  li 11, 1
  044edec  li 12, -1
  044edf0  lfs 1, 0(7)
  044edf4  li 5, 0
  044edf8  stw 6, 32(30)
  044edfc  li 8, 10
  044ee00  lhz 4, 52(31)
  044ee04  li 9, 3
  044ee08  stw 6, 192(1)
  044ee0c  li 10, 16
  044ee10  rlwimi 4, 6, 0, 19, 19
  044ee14  stw 6, 196(1)
  044ee18  stw 6, 200(1)
  044ee1c  sth 4, 52(31)
  044ee20  stw 6, 204(1)
  044ee24  addic 4, 1, 192
  044ee28  lfs 2, 4(7)
  044ee2c  lfs 3, -3064(3)
  044ee30  std 11, 160(1)
  044ee34  ori 3, 31, 0
  044ee38  fmuls 3, 3, 2
  044ee3c  std 12, 144(1)
  044ee40  std 11, 168(1)
  044ee44  fmr 2, 1
  044ee48  std 12, 176(1)
  044ee4c  std 6, 184(1)
  044ee50  stfs 3, 200(1)
  044ee54  lfs 3, 8(7)
  044ee58  lfs 4, 12(7)
  044ee5c  lfs 5, 16(7)
  044ee60  lfs 6, 20(7)
  044ee64  lfs 7, 24(7)
  044ee68  bl 0x10e030
  044ee6c  nop
  044ee70  li 3, 2
  044ee74  stb 3, 32(31)
  044ee78  b 0x44eea8
  044ee7c  fsubs 2, 2, 1
  044ee80  lis 3, 102
  044ee84  addic 3, 3, -32340
  044ee88  stfs 2, 32(30)
  044ee8c  lfs 1, 44(29)
  044ee90  stfd 2, 64(1)
  044ee94  stfd 1, 56(1)
  044ee98  ld 5, 64(1)
  044ee9c  ld 4, 56(1)
  044eea0  bl 0x5cd098
  044eea4  nop
  044eea8  li 3, 255
  044eeac  stb 3, 164(31)
  044eeb0  lbz 3, 32(31)
  044eeb4  cmpwi 3, 0
  044eeb8  cmpwi 1, 3, -1
  044eebc  cmpwi 6, 3, 1
  044eec0  cmpwi 7, 3, 2
  044eec4  bt 1, 0x44eed0
  044eec8  bf 5, 0x44f030
  044eecc  b 0x44eedc
  044eed0  bf 25, 0x44ef58
  044eed4  bf 29, 0x44f020
  044eed8  b 0x44f030
  044eedc  li 3, 0
  044eee0  lis 4, 164
  044eee4  lis 29, 102
  044eee8  stw 3, 96(30)
  044eeec  addic 29, 29, -32308
  044eef0  lwz 28, -28500(4)
  044eef4  cmpwi 28, 0
  044eef8  bt 2, 0x44f030
  044eefc  lwz 3, 96(30)
  044ef00  cmpwi 3, 0
  044ef04  bf 2, 0x44f030
  044ef08  lhz 3, 166(28)
  044ef0c  cmpwi 3, 760
  044ef10  bf 2, 0x44ef48
  044ef14  li 3, 1
  044ef18  lis 4, 164
  044ef1c  stw 28, 96(30)
  044ef20  stb 3, 32(31)
  044ef24  ori 3, 29, 0
  044ef28  lwz 4, -28512(4)
  044ef2c  lwz 5, 96(30)
  044ef30  subc 4, 5, 4
  044ef34  srawi 4, 4, 8
  044ef38  addze 4, 4
  044ef3c  extsw 4, 4
  044ef40  bl 0x5cd098
  044ef44  nop
  044ef48  lwz 28, 40(28)
  044ef4c  cmpwi 28, 0
  044ef50  bf 2, 0x44eefc
  044ef54  b 0x44f030
  044ef58  lwz 3, 96(30)
  044ef5c  lwz 4, 24(31)
  044ef60  srawi 5, 4, 31
  044ef64  lwz 3, 24(3)
  044ef68  srwi 6, 5, 1
  044ef6c  srawi 7, 3, 31
  044ef70  xor 4, 6, 4
  044ef74  srwi 6, 7, 1
  044ef78  subc 4, 4, 5
  044ef7c  xor 3, 6, 3
  044ef80  subc 3, 3, 7
  044ef84  cmpw 3, 4
  044ef88  bf 1, 0x44f030
  044ef8c  li 6, 0
  044ef90  lis 3, 69
  044ef94  li 10, 1
  044ef98  addi 7, 3, -4928
  044ef9c  stw 6, 208(1)
  044efa0  lis 3, 114
  044efa4  stw 6, 212(1)
  044efa8  stw 6, 216(1)
  044efac  li 11, -1
  044efb0  stw 6, 220(1)
  044efb4  addic 4, 1, 208
  044efb8  lfs 1, 4(7)
  044efbc  li 5, 0
  044efc0  li 8, 10
  044efc4  lfs 2, -3064(3)
  044efc8  std 10, 160(1)
  044efcc  ori 3, 31, 0
  044efd0  fmuls 1, 2, 1
  044efd4  std 10, 168(1)
  044efd8  std 6, 184(1)
  044efdc  li 9, 3
  044efe0  std 11, 144(1)
  044efe4  li 10, 16
  044efe8  std 11, 176(1)
  044efec  stfs 1, 216(1)
  044eff0  lfs 2, 20(7)
  044eff4  lfs 1, 28(7)
  044eff8  lfs 3, 8(7)
  044effc  fmr 6, 2
  044f000  lfs 4, 12(7)
  044f004  lfs 5, 16(7)
  044f008  lfs 7, 24(7)
  044f00c  bl 0x10e030
  044f010  nop
  044f014  li 3, 2
  044f018  stb 3, 32(31)
  044f01c  b 0x44f030
  044f020  ori 3, 31, 0
  044f024  bl 0xefb38
  044f028  nop
  044f02c  b 0x44f030
  044f030  ld 0, 288(1)
  044f034  mtlr 0
  044f038  ld 28, 240(1)
  044f03c  ld 29, 248(1)
  044f040  ld 30, 256(1)
  044f044  ld 31, 264(1)
  044f048  addi 1, 1, 272
  044f04c  blr

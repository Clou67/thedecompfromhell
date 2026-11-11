# game/update/moby1684.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1684_002acc60:   # 0x2acc60, 0x14 bytes
  02acc60  lis 3, 123
  02acc64  lis 4, 1
  02acc68  addic 3, 3, 29124
  02acc6c  stw 4, 72(3)
  02acc70  blr

UpdateMoby_1684:   # 0x2acc80, 0x164 bytes
  02acc80  stdu 1, -160(1)
  02acc84  mflr 0
  02acc88  std 0, 176(1)
  02acc8c  stfd 31, 152(1)
  02acc90  std 28, 120(1)
  02acc94  lis 28, 151
  02acc98  li 4, 255
  02acc9c  std 31, 144(1)
  02acca0  addic 28, 28, -25376
  02acca4  ori 31, 3, 0
  02acca8  std 30, 136(1)
  02accac  stb 4, 48(3)
  02accb0  lwz 30, 120(3)
  02accb4  lwz 3, 8324(28)
  02accb8  std 29, 128(1)
  02accbc  std 27, 112(1)
  02accc0  cmpwi 3, 50
  02accc4  bt 2, 0x2acdbc
  02accc8  lis 3, 43
  02acccc  li 27, 0
  02accd0  addi 3, 3, -13192
  02accd4  addic 29, 28, 128
  02accd8  stb 27, 188(31)
  02accdc  lfs 31, 0(3)
  02acce0  ori 3, 29, 0
  02acce4  lwz 4, 0(30)
  02acce8  extsw 4, 4
  02accec  bl 0x110b70
  02accf0  nop
  02accf4  cmpwi 3, 0
  02accf8  bt 2, 0x2acdac
  02accfc  li 3, 1
  02acd00  lbz 5, 188(31)
  02acd04  lis 4, 165
  02acd08  slw 3, 3, 27
  02acd0c  or 3, 5, 3
  02acd10  stb 3, 188(31)
  02acd14  lwz 3, 0(30)
  02acd18  lwz 4, 7128(4)
  02acd1c  slwi 3, 3, 7
  02acd20  lfs 1, 132(28)
  02acd24  addc 3, 4, 3
  02acd28  lfs 2, 128(28)
  02acd2c  clrldi 3, 3, 32
  02acd30  lfs 3, 136(28)
  02acd34  lfs 4, 52(3)
  02acd38  lfs 5, 48(3)
  02acd3c  fsubs 1, 1, 4
  02acd40  lfs 4, 80(3)
  02acd44  fsubs 2, 2, 5
  02acd48  lfs 5, 56(3)
  02acd4c  lfs 6, 64(3)
  02acd50  fsubs 3, 3, 5
  02acd54  lfs 5, 96(3)
  02acd58  fmuls 1, 4, 1
  02acd5c  fmadds 1, 6, 2, 1
  02acd60  fmadds 1, 5, 3, 1
  02acd64  fcmpu 0, 1, 31
  02acd68  cror 6, 0, 2
  02acd6c  bt 6, 0x2acd90
  02acd70  li 3, 1
  02acd74  stb 3, 32(31)
  02acd78  lwz 3, 8384(28)
  02acd7c  cmpwi 3, 6
  02acd80  bt 2, 0x2acdac
  02acd84  li 3, 6
  02acd88  stw 3, 8384(28)
  02acd8c  b 0x2acdac
  02acd90  li 3, 0
  02acd94  stb 3, 32(31)
  02acd98  lwz 3, 8384(28)
  02acd9c  cmpwi 3, 6
  02acda0  bf 2, 0x2acdac
  02acda4  li 3, 0
  02acda8  stw 3, 8384(28)
  02acdac  addic 27, 27, 1
  02acdb0  addic 30, 30, 4
  02acdb4  cmpwi 27, 32
  02acdb8  bt 0, 0x2acce0
  02acdbc  ld 0, 176(1)
  02acdc0  mtlr 0
  02acdc4  lfd 31, 152(1)
  02acdc8  ld 27, 112(1)
  02acdcc  ld 28, 120(1)
  02acdd0  ld 29, 128(1)
  02acdd4  ld 30, 136(1)
  02acdd8  ld 31, 144(1)
  02acddc  addi 1, 1, 160
  02acde0  blr

# game/update/moby1921.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1921_002dbdac:   # 0x2dbdac, 0x14 bytes
  02dbdac  lis 3, 127
  02dbdb0  lis 4, 1
  02dbdb4  addic 3, 3, 15812
  02dbdb8  stw 4, 72(3)
  02dbdbc  blr

FUN_002dbdc0:   # 0x2dbdc0, 0xb0 bytes
  02dbdc0  stdu 1, -128(1)
  02dbdc4  mflr 0
  02dbdc8  std 0, 144(1)
  02dbdcc  std 31, 120(1)
  02dbdd0  ori 31, 3, 0
  02dbdd4  std 30, 112(1)
  02dbdd8  li 3, 1921
  02dbddc  bl 0xefa28
  02dbde0  nop
  02dbde4  ori 30, 3, 0
  02dbde8  cmpwi 30, 0
  02dbdec  bt 2, 0x2dbe54
  02dbdf0  li 4, 255
  02dbdf4  li 5, 1
  02dbdf8  li 6, 0
  02dbdfc  lis 7, 17004
  02dbe00  stb 4, 48(30)
  02dbe04  ori 3, 30, 0
  02dbe08  sth 4, 50(30)
  02dbe0c  stb 5, 49(30)
  02dbe10  lfs 1, 72(31)
  02dbe14  stw 6, 64(30)
  02dbe18  stw 6, 68(30)
  02dbe1c  ld 4, 56(31)
  02dbe20  stfs 1, 72(30)
  02dbe24  lfs 1, 16(31)
  02dbe28  std 4, 56(30)
  02dbe2c  lfs 2, 20(31)
  02dbe30  lfs 3, 24(31)
  02dbe34  stfs 1, 16(30)
  02dbe38  stfs 2, 20(30)
  02dbe3c  lfs 1, 28(31)
  02dbe40  stfs 3, 24(30)
  02dbe44  stfs 1, 28(30)
  02dbe48  stw 7, 24(30)
  02dbe4c  bl 0xf31a8
  02dbe50  nop
  02dbe54  ori 3, 30, 0
  02dbe58  ld 0, 144(1)
  02dbe5c  mtlr 0
  02dbe60  ld 30, 112(1)
  02dbe64  ld 31, 120(1)
  02dbe68  addi 1, 1, 128
  02dbe6c  blr

UpdateMoby_1921:   # 0x2dbe70, 0x4 bytes
  02dbe70  blr

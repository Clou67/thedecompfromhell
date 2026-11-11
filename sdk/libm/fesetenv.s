# sdk/libm/fesetenv.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Force_raise:   # 0x5ddbd8, 0x3c bytes
  05ddbd8  li 0, 5
  05ddbdc  lwz 11, -23560(2)
  05ddbe0  lfd 1, -23568(2)
  05ddbe4  mtctr 0
  05ddbe8  clrldi 9, 11, 32
  05ddbec  addi 11, 11, 24
  05ddbf0  lwz 0, 0(9)
  05ddbf4  and 10, 3, 0
  05ddbf8  cmpwi 10, 0
  05ddbfc  bt 2, 0x5ddc0c
  05ddc00  lfd 13, 16(9)
  05ddc04  lfd 0, 8(9)
  05ddc08  fdiv 1, 0, 13
  05ddc0c  bdnz 0x5ddbe8
  05ddc10  blr

fesetenv:   # 0x5ddc14, 0x3c bytes
  05ddc14  lwz 0, 0(3)
  05ddc18  li 11, 0
  05ddc1c  rlwinm 9, 0, 0, 2, 2
  05ddc20  cmpwi 7, 9, 0
  05ddc24  li 9, -1
  05ddc28  rldimi 11, 9, 32, 0
  05ddc2c  ori 9, 0, 1024
  05ddc30  rldimi 11, 0, 0, 32
  05ddc34  bt 30, 0x5ddc3c
  05ddc38  rldimi 11, 9, 0, 32
  05ddc3c  std 11, -16(1)
  05ddc40  lfd 0, -16(1)
  05ddc44  mtfsf 255, 0
  05ddc48  li 3, 0
  05ddc4c  blr

FUN_005ddc50:   # 0x5ddc50, 0x18 bytes
  05ddc50  mffs 0
  05ddc54  stfd 0, -16(1)
  05ddc58  ld 0, -16(1)
  05ddc5c  stw 0, 0(3)
  05ddc60  li 3, 0
  05ddc64  blr

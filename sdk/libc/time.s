# sdk/libc/time.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

time:   # 0x5cede8, 0x74 bytes
  05cede8  mfcr 12
  05cedec  std 31, -8(1)
  05cedf0  std 29, -24(1)
  05cedf4  mr 31, 3
  05cedf8  addi 4, 1, -40
  05cedfc  addi 3, 1, -48
  05cee00  li 11, 145
  05cee04  stw 12, 8(1)
  05cee08  mflr 0
  05cee0c  std 0, 16(1)
  05cee10  sc
  05cee14  cmpwi 4, 3, 0
  05cee18  cmpwi 6, 31, 0
  05cee1c  bf 18, 0x5cee48
  05cee20  ld 3, -48(1)
  05cee24  bt 26, 0x5cee2c
  05cee28  std 3, 0(31)
  05cee2c  ld 0, 16(1)
  05cee30  lwz 12, 8(1)
  05cee34  mtlr 0
  05cee38  ld 29, -24(1)
  05cee3c  ld 31, -8(1)
  05cee40  mtocrf 8, 12
  05cee44  blr
  05cee48  li 3, -1
  05cee4c  bt 26, 0x5cee2c
  05cee50  li 0, -1
  05cee54  std 0, 0(31)
  05cee58  b 0x5cee2c

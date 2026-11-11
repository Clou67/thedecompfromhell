# game/update/moby284.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0032dadc:   # 0x32dadc, 0xf8 bytes
  032dadc  stdu 1, -160(1)
  032dae0  mflr 0
  032dae4  std 0, 176(1)
  032dae8  stfd 31, 152(1)
  032daec  std 29, 128(1)
  032daf0  ori 29, 3, 0
  032daf4  fmr 31, 1
  032daf8  std 31, 144(1)
  032dafc  li 3, 284
  032db00  std 30, 136(1)
  032db04  ori 31, 6, 0
  032db08  std 28, 120(1)
  032db0c  ori 30, 5, 0
  032db10  std 27, 112(1)
  032db14  li 28, 160
  032db18  bl 0xefa28
  032db1c  nop
  032db20  ori 27, 3, 0
  032db24  cmpwi 27, 0
  032db28  bt 2, 0x32dba8
  032db2c  addc 4, 1, 28
  032db30  lbz 5, 48(29)
  032db34  li 3, 1
  032db38  std 30, 64(4)
  032db3c  std 31, 72(4)
  032db40  stb 5, 48(27)
  032db44  lbz 5, 48(29)
  032db48  stb 3, 49(27)
  032db4c  sth 5, 50(27)
  032db50  lfs 1, 68(4)
  032db54  ori 3, 27, 0
  032db58  lfs 2, 76(4)
  032db5c  stfs 1, 20(27)
  032db60  lfs 1, 64(29)
  032db64  stfs 2, 28(27)
  032db68  lfs 2, 68(29)
  032db6c  lfs 3, 72(29)
  032db70  stfs 1, 64(27)
  032db74  stfs 2, 68(27)
  032db78  lfs 1, 76(29)
  032db7c  stfs 3, 72(27)
  032db80  ld 5, 56(29)
  032db84  stfs 1, 76(27)
  032db88  lfs 1, 64(4)
  032db8c  lfs 2, 72(4)
  032db90  stfs 1, 16(27)
  032db94  stfs 2, 24(27)
  032db98  stfs 31, 72(27)
  032db9c  std 5, 56(27)
  032dba0  bl 0xf31a8
  032dba4  nop
  032dba8  ori 3, 27, 0
  032dbac  ld 0, 176(1)
  032dbb0  mtlr 0
  032dbb4  lfd 31, 152(1)
  032dbb8  ld 27, 112(1)
  032dbbc  ld 28, 120(1)
  032dbc0  ld 29, 128(1)
  032dbc4  ld 30, 136(1)
  032dbc8  ld 31, 144(1)
  032dbcc  addi 1, 1, 160
  032dbd0  blr

UpdateMoby_284:   # 0x32dbd4, 0x4 bytes
  032dbd4  blr

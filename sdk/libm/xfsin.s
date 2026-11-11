# sdk/libm/xfsin.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FSin:   # 0x5dd914, 0x1d8 bytes
  05dd914  stdu 1, -160(1)
  05dd918  mflr 0
  05dd91c  addi 3, 1, 208
  05dd920  stfs 1, 208(1)
  05dd924  std 31, 152(1)
  05dd928  std 0, 176(1)
  05dd92c  mr 31, 4
  05dd930  bl 0x5dd48c
  05dd934  nop
  05dd938  extsh 3, 3
  05dd93c  cmpwi 7, 3, 1
  05dd940  bt 30, 0x5dda48
  05dd944  cmpwi 7, 3, 2
  05dd948  bt 30, 0x5dd95c
  05dd94c  cmpwi 7, 3, 0
  05dd950  bf 30, 0x5dd974
  05dd954  cmpwi 7, 31, 0
  05dd958  bf 30, 0x5dda70
  05dd95c  lfs 1, 208(1)
  05dd960  ld 0, 176(1)
  05dd964  ld 31, 152(1)
  05dd968  addi 1, 1, 160
  05dd96c  mtlr 0
  05dd970  blr
  05dd974  lfs 1, 208(1)
  05dd978  fmr 13, 1
  05dd97c  lfd 0, -23640(2)
  05dd980  fcmpu 7, 13, 0
  05dd984  bt 28, 0x5dd994
  05dd988  lfd 0, -23632(2)
  05dd98c  fcmpu 7, 13, 0
  05dd990  bf 29, 0x5dd9a4
  05dd994  lfs 2, -23624(2)
  05dd998  bl 0x5dc9a4
  05dd99c  nop
  05dd9a0  stfs 1, 208(1)
  05dd9a4  lfs 0, -23620(2)
  05dd9a8  fmuls 12, 1, 0
  05dd9ac  lfs 13, -23576(2)
  05dd9b0  fcmpu 7, 12, 13
  05dd9b4  bf 29, 0x5ddac8
  05dd9b8  lfs 0, -23616(2)
  05dd9bc  addi 9, 1, 112
  05dd9c0  fadds 0, 12, 0
  05dd9c4  fctiwz 0, 0
  05dd9c8  stfiwx 0, 0, 9
  05dd9cc  lwz 11, 112(1)
  05dd9d0  extsw 0, 11
  05dd9d4  lfs 13, -23612(2)
  05dd9d8  lwz 9, -23604(2)
  05dd9dc  std 0, 128(1)
  05dd9e0  lfd 0, 128(1)
  05dd9e4  clrlwi 0, 11, 30
  05dd9e8  fcfid 0, 0
  05dd9ec  lfs 11, -23608(2)
  05dd9f0  add 4, 0, 31
  05dd9f4  lfs 10, 0(9)
  05dd9f8  frsp 12, 0
  05dd9fc  fneg 0, 10
  05dda00  fmadds 13, 12, 13, 1
  05dda04  fmadds 1, 12, 11, 13
  05dda08  fcmpu 7, 0, 1
  05dda0c  bf 28, 0x5dda78
  05dda10  fcmpu 7, 1, 10
  05dda14  bf 28, 0x5dda78
  05dda18  clrlwi 0, 4, 31
  05dda1c  cmpwi 7, 0, 0
  05dda20  bf 30, 0x5ddae4
  05dda24  rlwinm 0, 4, 0, 30, 30
  05dda28  cmpwi 7, 0, 0
  05dda2c  bt 30, 0x5dd960
  05dda30  ld 0, 176(1)
  05dda34  fneg 1, 1
  05dda38  ld 31, 152(1)
  05dda3c  addi 1, 1, 160
  05dda40  mtlr 0
  05dda44  blr
  05dda48  lis 3, 8192
  05dda4c  bl 0x5dd4f8
  05dda50  nop
  05dda54  lwz 9, -23644(2)
  05dda58  ld 0, 176(1)
  05dda5c  ld 31, 152(1)
  05dda60  addi 1, 1, 160
  05dda64  mtlr 0
  05dda68  lfs 1, 0(9)
  05dda6c  blr
  05dda70  lfs 1, -23648(2)
  05dda74  b 0x5dd960
  05dda78  clrlwi 0, 4, 31
  05dda7c  fmuls 10, 1, 1
  05dda80  cmpwi 7, 0, 0
  05dda84  bt 30, 0x5ddaa8
  05dda88  lfs 0, -23600(2)
  05dda8c  lfs 13, -23596(2)
  05dda90  fmadds 0, 10, 0, 13
  05dda94  lfs 11, -23592(2)
  05dda98  lfs 12, -23648(2)
  05dda9c  fmsubs 0, 10, 0, 11
  05ddaa0  fmadds 1, 10, 0, 12
  05ddaa4  b 0x5dda24
  05ddaa8  lfs 0, -23588(2)
  05ddaac  fmuls 12, 1, 10
  05ddab0  lfs 13, -23584(2)
  05ddab4  fmadds 0, 10, 0, 13
  05ddab8  lfs 11, -23580(2)
  05ddabc  fmsubs 0, 10, 0, 11
  05ddac0  fmadds 1, 12, 0, 1
  05ddac4  b 0x5dda24
  05ddac8  lfs 0, -23616(2)
  05ddacc  addi 9, 1, 112
  05ddad0  fsubs 0, 12, 0
  05ddad4  fctiwz 0, 0
  05ddad8  stfiwx 0, 0, 9
  05ddadc  lwz 11, 112(1)
  05ddae0  b 0x5dd9d0
  05ddae4  lfs 1, -23648(2)
  05ddae8  b 0x5dda24

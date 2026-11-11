# sdk/libm/tanf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

tanf:   # 0x5dd1f4, 0x184 bytes
  05dd1f4  stdu 1, -144(1)
  05dd1f8  mflr 0
  05dd1fc  addi 3, 1, 192
  05dd200  stfs 1, 192(1)
  05dd204  std 0, 160(1)
  05dd208  bl 0x5dd48c
  05dd20c  nop
  05dd210  extsh 3, 3
  05dd214  cmpwi 7, 3, 1
  05dd218  bt 30, 0x5dd2f4
  05dd21c  cmpwi 7, 3, 2
  05dd220  bt 30, 0x5dd22c
  05dd224  cmpwi 7, 3, 0
  05dd228  bf 30, 0x5dd240
  05dd22c  lfs 1, 192(1)
  05dd230  ld 0, 160(1)
  05dd234  addi 1, 1, 144
  05dd238  mtlr 0
  05dd23c  blr
  05dd240  lfs 1, 192(1)
  05dd244  fmr 13, 1
  05dd248  lfd 0, -23840(2)
  05dd24c  fcmpu 7, 13, 0
  05dd250  bt 28, 0x5dd260
  05dd254  lfd 0, -23832(2)
  05dd258  fcmpu 7, 13, 0
  05dd25c  bf 29, 0x5dd270
  05dd260  lfs 2, -23824(2)
  05dd264  bl 0x5dc9a4
  05dd268  nop
  05dd26c  stfs 1, 192(1)
  05dd270  lfs 0, -23820(2)
  05dd274  fmuls 12, 1, 0
  05dd278  lfs 13, -23780(2)
  05dd27c  fcmpu 7, 12, 13
  05dd280  bf 29, 0x5dd35c
  05dd284  lfs 0, -23816(2)
  05dd288  addi 9, 1, 112
  05dd28c  fadds 0, 12, 0
  05dd290  fctiwz 0, 0
  05dd294  stfiwx 0, 0, 9
  05dd298  lwz 11, 112(1)
  05dd29c  extsw 0, 11
  05dd2a0  lfs 0, -23812(2)
  05dd2a4  lwz 9, -23804(2)
  05dd2a8  std 0, 128(1)
  05dd2ac  lfd 13, 128(1)
  05dd2b0  fcfid 13, 13
  05dd2b4  lfs 12, -23808(2)
  05dd2b8  lfs 10, 0(9)
  05dd2bc  frsp 11, 13
  05dd2c0  fneg 13, 10
  05dd2c4  fmadds 0, 11, 0, 1
  05dd2c8  fmadds 1, 11, 12, 0
  05dd2cc  fcmpu 7, 13, 1
  05dd2d0  bf 28, 0x5dd318
  05dd2d4  fcmpu 7, 1, 10
  05dd2d8  bf 28, 0x5dd318
  05dd2dc  clrlwi 0, 11, 31
  05dd2e0  cmpwi 7, 0, 0
  05dd2e4  bt 30, 0x5dd230
  05dd2e8  lfs 0, -23800(2)
  05dd2ec  fdivs 1, 0, 1
  05dd2f0  b 0x5dd230
  05dd2f4  lis 3, 8192
  05dd2f8  bl 0x5dd4f8
  05dd2fc  nop
  05dd300  lwz 9, -23848(2)
  05dd304  ld 0, 160(1)
  05dd308  addi 1, 1, 144
  05dd30c  mtlr 0
  05dd310  lfs 1, 0(9)
  05dd314  blr
  05dd318  fmuls 12, 1, 1
  05dd31c  lfs 0, -23796(2)
  05dd320  lfs 10, -23792(2)
  05dd324  clrlwi 0, 11, 31
  05dd328  lfs 9, -23784(2)
  05dd32c  cmpwi 7, 0, 0
  05dd330  lfs 11, -23788(2)
  05dd334  fmsubs 0, 12, 0, 10
  05dd338  fmuls 13, 1, 12
  05dd33c  fmadds 0, 12, 0, 11
  05dd340  fmadds 1, 13, 9, 1
  05dd344  bt 30, 0x5dd354
  05dd348  fneg 0, 0
  05dd34c  fdivs 1, 0, 1
  05dd350  b 0x5dd230
  05dd354  fdivs 1, 1, 0
  05dd358  b 0x5dd230
  05dd35c  lfs 0, -23816(2)
  05dd360  addi 9, 1, 112
  05dd364  fsubs 0, 12, 0
  05dd368  fctiwz 0, 0
  05dd36c  stfiwx 0, 0, 9
  05dd370  lwz 11, 112(1)
  05dd374  b 0x5dd29c

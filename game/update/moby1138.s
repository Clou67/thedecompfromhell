# game/update/moby1138.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1138_001db948:   # 0x1db948, 0x3a0 bytes
  01db948  stdu 1, -416(1)
  01db94c  mflr 0
  01db950  std 0, 432(1)
  01db954  stfd 27, 376(1)
  01db958  stfd 28, 384(1)
  01db95c  stfd 29, 392(1)
  01db960  stfd 30, 400(1)
  01db964  stfd 31, 408(1)
  01db968  std 28, 344(1)
  01db96c  std 31, 368(1)
  01db970  ori 28, 3, 0
  01db974  lis 31, 30
  01db978  addic 3, 1, 112
  01db97c  std 29, 352(1)
  01db980  addi 31, 31, -18160
  01db984  addic 4, 28, 192
  01db988  std 30, 360(1)
  01db98c  lwz 29, 120(28)
  01db990  bl 0x500f6c
  01db994  nop
  01db998  lfs 1, 16(28)
  01db99c  lfs 2, 20(28)
  01db9a0  lis 3, 118
  01db9a4  stfs 1, 160(1)
  01db9a8  lfs 1, 24(28)
  01db9ac  stfs 2, 164(1)
  01db9b0  lfs 2, 28(28)
  01db9b4  stfs 1, 168(1)
  01db9b8  lwz 3, 18948(3)
  01db9bc  stfs 2, 172(1)
  01db9c0  extsw 3, 3
  01db9c4  bl 0x685c4
  01db9c8  nop
  01db9cc  std 3, 296(1)
  01db9d0  lis 9, 0
  01db9d4  li 3, 0
  01db9d8  li 4, 0
  01db9dc  li 5, 1
  01db9e0  li 6, 1
  01db9e4  li 7, 1
  01db9e8  li 8, 0
  01db9ec  ori 9, 9, 65424
  01db9f0  bl 0x502fd4
  01db9f4  nop
  01db9f8  std 3, 304(1)
  01db9fc  li 3, 0
  01dba00  li 4, 0
  01dba04  li 5, 0
  01dba08  li 6, 0
  01dba0c  li 7, 0
  01dba10  li 8, 0
  01dba14  bl 0x502f08
  01dba18  nop
  01dba1c  std 3, 288(1)
  01dba20  lis 4, 239
  01dba24  lis 3, 239
  01dba28  lis 5, 118
  01dba2c  lis 6, 118
  01dba30  li 7, 128
  01dba34  lwz 8, 9964(3)
  01dba38  lwz 3, 9960(4)
  01dba3c  lwz 4, 18940(5)
  01dba40  ori 5, 8, 0
  01dba44  lwz 6, 18944(6)
  01dba48  bl 0x502ea8
  01dba4c  nop
  01dba50  lis 5, 118
  01dba54  lis 4, 118
  01dba58  std 3, 312(1)
  01dba5c  li 8, 4
  01dba60  lbz 3, 32(28)
  01dba64  li 30, 0
  01dba68  ori 7, 1, 0
  01dba6c  ori 6, 1, 0
  01dba70  addic 5, 5, 18956
  01dba74  addic 4, 4, 18960
  01dba78  mtctr 8
  01dba7c  lis 8, 118
  01dba80  lfs 1, 0(5)
  01dba84  lfs 2, 0(4)
  01dba88  addic 5, 5, 8
  01dba8c  stfs 1, 256(7)
  01dba90  addic 4, 4, 8
  01dba94  lwz 8, 18952(8)
  01dba98  stfs 2, 260(7)
  01dba9c  stw 8, 240(6)
  01dbaa0  addic 7, 7, 8
  01dbaa4  addic 6, 6, 4
  01dbaa8  bdnz 0x1dba7c
  01dbaac  lis 4, 16275
  01dbab0  ori 5, 4, 13107
  01dbab4  lwz 4, 52(29)
  01dbab8  lfs 31, 0(31)
  01dbabc  srawi 6, 4, 31
  01dbac0  lfs 2, 52(29)
  01dbac4  lfs 1, 4(31)
  01dbac8  srwi 7, 6, 1
  01dbacc  xor 4, 7, 4
  01dbad0  subc 4, 4, 6
  01dbad4  cmpw 4, 5
  01dbad8  bf 0, 0x1dbb48
  01dbadc  fsubs 1, 1, 2
  01dbae0  lfs 3, 8(31)
  01dbae4  lfs 2, 12(31)
  01dbae8  fmuls 1, 1, 3
  01dbaec  fcmpu 0, 1, 2
  01dbaf0  cror 6, 0, 2
  01dbaf4  bt 6, 0x1dbb00
  01dbaf8  fmr 1, 2
  01dbafc  b 0x1dbb14
  01dbb00  lfs 2, 16(31)
  01dbb04  fcmpu 0, 1, 2
  01dbb08  cror 6, 1, 2
  01dbb0c  bt 6, 0x1dbb14
  01dbb10  fmr 1, 2
  01dbb14  cmpwi 3, 7
  01dbb18  fadds 31, 1, 31
  01dbb1c  bt 0, 0x1dbb28
  01dbb20  cmpwi 3, 8
  01dbb24  bf 1, 0x1dbb48
  01dbb28  lis 3, 16166
  01dbb2c  extsw 4, 4
  01dbb30  ori 3, 3, 26214
  01dbb34  lis 5, 151
  01dbb38  subc 6, 4, 3
  01dbb3c  addic 5, 5, -25376
  01dbb40  rldicl 3, 6, 1, 63
  01dbb44  stb 3, 8357(5)
  01dbb48  ori 28, 30, 0
  01dbb4c  lfs 12, 20(31)
  01dbb50  ori 6, 30, 0
  01dbb54  lfs 11, 24(31)
  01dbb58  ori 5, 1, 0
  01dbb5c  lfs 10, 28(31)
  01dbb60  lis 4, 118
  01dbb64  lfs 9, 32(31)
  01dbb68  lis 3, 16256
  01dbb6c  lfs 8, 36(31)
  01dbb70  lfs 7, 40(31)
  01dbb74  lfs 6, 44(31)
  01dbb78  lfs 5, 48(31)
  01dbb7c  lfs 4, 16(31)
  01dbb80  lfs 1, 52(31)
  01dbb84  srawi 7, 6, 1
  01dbb88  addze 7, 7
  01dbb8c  addc 7, 7, 28
  01dbb90  extsw 7, 7
  01dbb94  std 7, 320(1)
  01dbb98  clrlwi 7, 6, 31
  01dbb9c  cmpwi 7, 0
  01dbba0  lfd 2, 320(1)
  01dbba4  fcfid 2, 2
  01dbba8  frsp 2, 2
  01dbbac  fmsubs 2, 2, 1, 12
  01dbbb0  fadds 3, 2, 11
  01dbbb4  fsubs 13, 10, 2
  01dbbb8  fsubs 0, 9, 2
  01dbbbc  fsubs 30, 10, 3
  01dbbc0  fsub 28, 2, 13
  01dbbc4  fsubs 29, 9, 3
  01dbbc8  fsub 27, 3, 30
  01dbbcc  fsel 2, 28, 13, 2
  01dbbd0  fsel 3, 27, 30, 3
  01dbbd4  fsub 13, 0, 2
  01dbbd8  lfs 27, 52(29)
  01dbbdc  fsub 30, 29, 3
  01dbbe0  fsel 2, 13, 0, 2
  01dbbe4  fsel 3, 30, 29, 3
  01dbbe8  fmuls 13, 2, 2
  01dbbec  fmuls 0, 3, 3
  01dbbf0  fmuls 30, 13, 2
  01dbbf4  fmuls 29, 0, 3
  01dbbf8  fmuls 28, 13, 30
  01dbbfc  fmadds 2, 30, 8, 2
  01dbc00  fmuls 30, 0, 29
  01dbc04  fmadds 3, 29, 8, 3
  01dbc08  fmuls 29, 13, 28
  01dbc0c  fmadds 2, 28, 7, 2
  01dbc10  fmuls 28, 0, 30
  01dbc14  fmadds 3, 30, 7, 3
  01dbc18  fmuls 13, 13, 29
  01dbc1c  fmadds 2, 29, 6, 2
  01dbc20  fmuls 0, 0, 28
  01dbc24  fmadds 3, 28, 6, 3
  01dbc28  fmadds 2, 13, 5, 2
  01dbc2c  fmadds 3, 0, 5, 3
  01dbc30  fmuls 3, 3, 27
  01dbc34  stfs 3, 176(5)
  01dbc38  lfs 3, 52(29)
  01dbc3c  stw 30, 184(5)
  01dbc40  fmuls 2, 2, 3
  01dbc44  stfs 2, 180(5)
  01dbc48  bt 2, 0x1dbc5c
  01dbc4c  lfs 3, 18988(4)
  01dbc50  fmr 2, 4
  01dbc54  fadds 3, 3, 31
  01dbc58  b 0x1dbc68
  01dbc5c  lfs 2, 18988(4)
  01dbc60  fmr 3, 4
  01dbc64  fsubs 2, 2, 31
  01dbc68  fadds 2, 3, 2
  01dbc6c  addic 6, 6, 1
  01dbc70  stw 3, 188(5)
  01dbc74  cmpwi 6, 4
  01dbc78  stfs 2, 184(5)
  01dbc7c  addic 5, 5, 16
  01dbc80  bt 0, 0x1dbb84
  01dbc84  lis 3, 161
  01dbc88  li 5, 0
  01dbc8c  addic 6, 3, 24396
  01dbc90  li 7, 9
  01dbc94  addic 3, 1, 176
  01dbc98  addic 4, 1, 112
  01dbc9c  lwz 6, 28(6)
  01dbca0  bl 0x72280
  01dbca4  nop
  01dbca8  addic 28, 28, 1
  01dbcac  cmpwi 28, 32
  01dbcb0  bt 0, 0x1dbb4c
  01dbcb4  ld 0, 432(1)
  01dbcb8  mtlr 0
  01dbcbc  lfd 27, 376(1)
  01dbcc0  lfd 28, 384(1)
  01dbcc4  lfd 29, 392(1)
  01dbcc8  lfd 30, 400(1)
  01dbccc  lfd 31, 408(1)
  01dbcd0  ld 28, 344(1)
  01dbcd4  ld 29, 352(1)
  01dbcd8  ld 30, 360(1)
  01dbcdc  ld 31, 368(1)
  01dbce0  addi 1, 1, 416
  01dbce4  blr

FUN_001dbce8:   # 0x1dbce8, 0x50 bytes
  01dbce8  stdu 1, -128(1)
  01dbcec  mflr 0
  01dbcf0  std 0, 144(1)
  01dbcf4  std 31, 120(1)
  01dbcf8  ori 31, 3, 0
  01dbcfc  lbz 3, 32(3)
  01dbd00  cmpwi 3, 1
  01dbd04  bf 2, 0x1dbd24
  01dbd08  li 3, 0
  01dbd0c  li 4, 0
  01dbd10  ori 5, 31, 0
  01dbd14  bl 0x15d12c
  01dbd18  nop
  01dbd1c  li 3, 7
  01dbd20  stb 3, 32(31)
  01dbd24  ld 0, 144(1)
  01dbd28  mtlr 0
  01dbd2c  ld 31, 120(1)
  01dbd30  addi 1, 1, 128
  01dbd34  blr

FUN_001dbd38:   # 0x1dbd38, 0x58 bytes
  01dbd38  lbz 4, 32(3)
  01dbd3c  lwz 3, 120(3)
  01dbd40  cmpwi 1, 4, 8
  01dbd44  cmpwi 4, 7
  01dbd48  cror 2, 0, 5
  01dbd4c  bt 2, 0x1dbd88
  01dbd50  bf 6, 0x1dbd80
  01dbd54  lwz 3, 52(3)
  01dbd58  lis 4, 15948
  01dbd5c  srawi 5, 3, 31
  01dbd60  ori 4, 4, 52429
  01dbd64  srwi 6, 5, 1
  01dbd68  xor 3, 6, 3
  01dbd6c  subc 3, 3, 5
  01dbd70  cmpw 3, 4
  01dbd74  bf 1, 0x1dbd80
  01dbd78  li 3, 2
  01dbd7c  b 0x1dbd8c
  01dbd80  li 3, 1
  01dbd84  b 0x1dbd8c
  01dbd88  li 3, 0
  01dbd8c  blr

M1138_001dbd90:   # 0x1dbd90, 0x14 bytes
  01dbd90  lis 3, 118
  01dbd94  lis 4, 1
  01dbd98  addic 3, 3, 19004
  01dbd9c  stw 4, 72(3)
  01dbda0  blr

UpdateMoby_1138:   # 0x1dbdb0, 0x1a8 bytes
  01dbdb0  stdu 1, -144(1)
  01dbdb4  mflr 0
  01dbdb8  std 0, 160(1)
  01dbdbc  std 31, 136(1)
  01dbdc0  ori 31, 3, 0
  01dbdc4  lbz 3, 112(3)
  01dbdc8  rlwinm 3, 3, 0, 30, 30
  01dbdcc  std 30, 128(1)
  01dbdd0  cmpwi 3, 0
  01dbdd4  bt 2, 0x1dbe00
  01dbdd8  lis 3, 30
  01dbddc  lfs 1, 88(31)
  01dbde0  addi 3, 3, -16984
  01dbde4  lfs 2, 0(3)
  01dbde8  lfs 3, 4(3)
  01dbdec  fsub 1, 2, 1
  01dbdf0  li 3, 0
  01dbdf4  stw 3, 88(31)
  01dbdf8  fsel 1, 1, 3, 2
  01dbdfc  stfs 1, 84(31)
  01dbe00  lis 3, 161
  01dbe04  lbz 3, 24377(3)
  01dbe08  cmpwi 3, 0
  01dbe0c  bt 2, 0x1dbe2c
  01dbe10  lbz 3, 113(31)
  01dbe14  cmpwi 3, 2
  01dbe18  cmpwi 1, 3, 4
  01dbe1c  bt 2, 0x1dbe24
  01dbe20  bf 6, 0x1dbe2c
  01dbe24  lis 3, 17408
  01dbe28  stw 3, 16(31)
  01dbe2c  bl 0x13a9d8
  01dbe30  nop
  01dbe34  ori 4, 3, 0
  01dbe38  cmpwi 4, 15
  01dbe3c  bt 2, 0x1dbe48
  01dbe40  cmpwi 4, 16
  01dbe44  bf 2, 0x1dbea0
  01dbe48  cmpwi 4, 15
  01dbe4c  lis 3, 239
  01dbe50  bf 2, 0x1dbe70
  01dbe54  lbz 5, 113(31)
  01dbe58  cmpwi 5, 109
  01dbe5c  bf 2, 0x1dbe70
  01dbe60  lis 5, 17408
  01dbe64  li 6, 15
  01dbe68  stw 5, 16(31)
  01dbe6c  stw 6, 9968(3)
  01dbe70  cmpwi 4, 16
  01dbe74  bf 2, 0x1dbea0
  01dbe78  lwz 4, 9968(3)
  01dbe7c  cmpwi 4, 15
  01dbe80  bf 2, 0x1dbea0
  01dbe84  lbz 4, 113(31)
  01dbe88  cmpwi 4, 109
  01dbe8c  bf 2, 0x1dbea0
  01dbe90  lis 4, 17280
  01dbe94  li 5, 16
  01dbe98  stw 4, 16(31)
  01dbe9c  stw 5, 9968(3)
  01dbea0  li 3, 0
  01dbea4  lwz 30, 120(31)
  01dbea8  li 4, 1
  01dbeac  li 6, 2
  01dbeb0  li 7, 3
  01dbeb4  stw 3, 112(1)
  01dbeb8  stw 4, 116(1)
  01dbebc  addic 5, 1, 112
  01dbec0  stw 6, 120(1)
  01dbec4  ori 3, 31, 0
  01dbec8  stw 7, 124(1)
  01dbecc  li 4, 4
  01dbed0  ori 6, 30, 0
  01dbed4  bl 0xf1238
  01dbed8  nop
  01dbedc  lfs 1, 20(30)
  01dbee0  lfs 2, 4(30)
  01dbee4  lfs 3, 36(30)
  01dbee8  fsubs 1, 1, 2
  01dbeec  lfs 4, 16(30)
  01dbef0  fsubs 2, 3, 2
  01dbef4  lfs 3, 0(30)
  01dbef8  lfs 5, 32(30)
  01dbefc  fsubs 4, 4, 3
  01dbf00  fsubs 3, 5, 3
  01dbf04  lfs 5, 24(30)
  01dbf08  lfs 6, 8(30)
  01dbf0c  lfs 7, 40(30)
  01dbf10  fsubs 5, 5, 6
  01dbf14  fmuls 1, 1, 1
  01dbf18  fmuls 2, 2, 2
  01dbf1c  fsubs 6, 7, 6
  01dbf20  fmadds 1, 4, 4, 1
  01dbf24  fmadds 2, 3, 3, 2
  01dbf28  fmadds 1, 5, 5, 1
  01dbf2c  fmadds 2, 6, 6, 2
  01dbf30  fsqrts 1, 1
  01dbf34  fsqrts 2, 2
  01dbf38  stfs 1, 64(30)
  01dbf3c  stfs 2, 68(30)
  01dbf40  ld 0, 160(1)
  01dbf44  mtlr 0
  01dbf48  ld 30, 128(1)
  01dbf4c  ld 31, 136(1)
  01dbf50  addi 1, 1, 144
  01dbf54  blr

# game/update/moby1403.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1403_0026d8d8:   # 0x26d8d8, 0x228 bytes
  026d8d8  stdu 1, -384(1)
  026d8dc  mflr 0
  026d8e0  std 0, 400(1)
  026d8e4  std 31, 376(1)
  026d8e8  lis 4, 122
  026d8ec  ori 31, 3, 0
  026d8f0  std 30, 368(1)
  026d8f4  lwz 3, -8668(4)
  026d8f8  lwz 30, 120(31)
  026d8fc  std 29, 360(1)
  026d900  std 28, 352(1)
  026d904  std 27, 344(1)
  026d908  std 26, 336(1)
  026d90c  std 25, 328(1)
  026d910  extsw 3, 3
  026d914  bl 0x685c4
  026d918  nop
  026d91c  std 3, 296(1)
  026d920  lis 9, 0
  026d924  li 3, 0
  026d928  li 4, 0
  026d92c  li 5, 1
  026d930  li 6, 1
  026d934  li 7, 1
  026d938  li 8, 0
  026d93c  ori 9, 9, 65424
  026d940  bl 0x502fd4
  026d944  nop
  026d948  std 3, 304(1)
  026d94c  li 4, 0
  026d950  li 3, 0
  026d954  li 5, 0
  026d958  li 6, 0
  026d95c  li 7, 0
  026d960  li 8, 0
  026d964  bl 0x502f08
  026d968  nop
  026d96c  lis 4, 251
  026d970  std 3, 288(1)
  026d974  lis 5, 122
  026d978  lis 6, 122
  026d97c  lis 7, 251
  026d980  lis 8, 122
  026d984  lwz 3, -30132(4)
  026d988  lwz 4, -8672(5)
  026d98c  lwz 5, -8680(6)
  026d990  lwz 6, -30128(7)
  026d994  ori 7, 4, 0
  026d998  lwz 8, -8676(8)
  026d99c  ori 4, 5, 0
  026d9a0  ori 5, 6, 0
  026d9a4  ori 6, 8, 0
  026d9a8  bl 0x502ea8
  026d9ac  nop
  026d9b0  std 3, 312(1)
  026d9b4  addic 3, 1, 112
  026d9b8  bl 0x500af8
  026d9bc  nop
  026d9c0  lfs 1, 24(31)
  026d9c4  lfs 2, 0(30)
  026d9c8  lis 3, 122
  026d9cc  lis 30, 122
  026d9d0  fsubs 1, 1, 2
  026d9d4  lis 28, 122
  026d9d8  lis 31, 122
  026d9dc  lis 29, 161
  026d9e0  lis 26, 122
  026d9e4  lis 27, 122
  026d9e8  li 25, 0
  026d9ec  addic 28, 28, -12012
  026d9f0  addic 29, 29, 24396
  026d9f4  addic 30, 30, -12416
  026d9f8  addic 26, 26, -13008
  026d9fc  addic 27, 27, -12016
  026da00  stfs 1, 168(1)
  026da04  lwz 3, -8664(3)
  026da08  addic 31, 31, -12414
  026da0c  stw 3, 252(1)
  026da10  stw 3, 248(1)
  026da14  stw 3, 244(1)
  026da18  stw 3, 240(1)
  026da1c  li 3, 4
  026da20  ori 6, 1, 0
  026da24  mtctr 3
  026da28  addic 5, 1, 176
  026da2c  ori 4, 30, 0
  026da30  ori 3, 31, 0
  026da34  lhz 7, 0(4)
  026da38  lis 9, 251
  026da3c  lhz 8, 0(3)
  026da40  extsh 7, 7
  026da44  extsh 8, 8
  026da48  sldi 7, 7, 4
  026da4c  sldi 8, 8, 3
  026da50  addc 7, 7, 26
  026da54  clrldi 7, 7, 32
  026da58  addic 4, 4, 4
  026da5c  addic 3, 3, 4
  026da60  lfs 1, 0(7)
  026da64  stfs 1, 0(5)
  026da68  lfs 1, 4(7)
  026da6c  stfs 1, 4(5)
  026da70  lfs 1, 8(7)
  026da74  stfs 1, 8(5)
  026da78  lfs 1, 12(7)
  026da7c  stfs 1, 12(5)
  026da80  lfsx 1, 27, 8
  026da84  lfs 2, -30136(9)
  026da88  addic 5, 5, 16
  026da8c  fadds 1, 1, 2
  026da90  lfsx 2, 28, 8
  026da94  stfs 2, 260(6)
  026da98  stfs 1, 256(6)
  026da9c  addic 6, 6, 8
  026daa0  bdnz 0x26da34
  026daa4  addic 4, 1, 112
  026daa8  lwz 6, 28(29)
  026daac  addic 3, 1, 176
  026dab0  li 5, 0
  026dab4  li 7, 9
  026dab8  bl 0x72280
  026dabc  nop
  026dac0  addic 25, 25, 1
  026dac4  addic 30, 30, 16
  026dac8  cmpwi 25, 25
  026dacc  addic 31, 31, 16
  026dad0  bt 0, 0x26da1c
  026dad4  ld 0, 400(1)
  026dad8  mtlr 0
  026dadc  ld 25, 328(1)
  026dae0  ld 26, 336(1)
  026dae4  ld 27, 344(1)
  026dae8  ld 28, 352(1)
  026daec  ld 29, 360(1)
  026daf0  ld 30, 368(1)
  026daf4  ld 31, 376(1)
  026daf8  addi 1, 1, 384
  026dafc  blr

M1403_0026db00:   # 0x26db00, 0x228 bytes
  026db00  stdu 1, -384(1)
  026db04  mflr 0
  026db08  std 0, 400(1)
  026db0c  std 31, 376(1)
  026db10  lis 4, 122
  026db14  ori 31, 3, 0
  026db18  std 30, 368(1)
  026db1c  lwz 3, -8668(4)
  026db20  lwz 30, 120(31)
  026db24  std 29, 360(1)
  026db28  std 28, 352(1)
  026db2c  std 27, 344(1)
  026db30  std 26, 336(1)
  026db34  std 25, 328(1)
  026db38  extsw 3, 3
  026db3c  bl 0x685c4
  026db40  nop
  026db44  std 3, 296(1)
  026db48  lis 9, 0
  026db4c  li 3, 0
  026db50  li 4, 0
  026db54  li 5, 1
  026db58  li 6, 1
  026db5c  li 7, 1
  026db60  li 8, 0
  026db64  ori 9, 9, 65424
  026db68  bl 0x502fd4
  026db6c  nop
  026db70  std 3, 304(1)
  026db74  li 4, 0
  026db78  li 3, 0
  026db7c  li 5, 0
  026db80  li 6, 0
  026db84  li 7, 0
  026db88  li 8, 0
  026db8c  bl 0x502f08
  026db90  nop
  026db94  lis 4, 251
  026db98  std 3, 288(1)
  026db9c  lis 5, 122
  026dba0  lis 6, 122
  026dba4  lis 7, 251
  026dba8  lis 8, 122
  026dbac  lwz 3, -30132(4)
  026dbb0  lwz 4, -8672(5)
  026dbb4  lwz 5, -8680(6)
  026dbb8  lwz 6, -30128(7)
  026dbbc  ori 7, 4, 0
  026dbc0  lwz 8, -8676(8)
  026dbc4  ori 4, 5, 0
  026dbc8  ori 5, 6, 0
  026dbcc  ori 6, 8, 0
  026dbd0  bl 0x502ea8
  026dbd4  nop
  026dbd8  std 3, 312(1)
  026dbdc  addic 3, 1, 112
  026dbe0  bl 0x500af8
  026dbe4  nop
  026dbe8  lfs 1, 24(31)
  026dbec  lfs 2, 0(30)
  026dbf0  lis 3, 122
  026dbf4  lis 30, 122
  026dbf8  fsubs 1, 1, 2
  026dbfc  lis 28, 122
  026dc00  lis 31, 122
  026dc04  lis 29, 161
  026dc08  lis 26, 122
  026dc0c  lis 27, 122
  026dc10  li 25, 0
  026dc14  addic 28, 28, -10252
  026dc18  addic 29, 29, 24396
  026dc1c  addic 30, 30, -10864
  026dc20  addic 26, 26, -11712
  026dc24  addic 27, 27, -10256
  026dc28  stfs 1, 168(1)
  026dc2c  lwz 3, -8664(3)
  026dc30  addic 31, 31, -10862
  026dc34  stw 3, 252(1)
  026dc38  stw 3, 248(1)
  026dc3c  stw 3, 244(1)
  026dc40  stw 3, 240(1)
  026dc44  li 3, 4
  026dc48  ori 6, 1, 0
  026dc4c  mtctr 3
  026dc50  addic 5, 1, 176
  026dc54  ori 4, 30, 0
  026dc58  ori 3, 31, 0
  026dc5c  lhz 7, 0(4)
  026dc60  lis 9, 251
  026dc64  lhz 8, 0(3)
  026dc68  extsh 7, 7
  026dc6c  extsh 8, 8
  026dc70  sldi 7, 7, 4
  026dc74  sldi 8, 8, 3
  026dc78  addc 7, 7, 26
  026dc7c  clrldi 7, 7, 32
  026dc80  addic 4, 4, 4
  026dc84  addic 3, 3, 4
  026dc88  lfs 1, 0(7)
  026dc8c  stfs 1, 0(5)
  026dc90  lfs 1, 4(7)
  026dc94  stfs 1, 4(5)
  026dc98  lfs 1, 8(7)
  026dc9c  stfs 1, 8(5)
  026dca0  lfs 1, 12(7)
  026dca4  stfs 1, 12(5)
  026dca8  lfsx 1, 27, 8
  026dcac  lfs 2, -30136(9)
  026dcb0  addic 5, 5, 16
  026dcb4  fadds 1, 1, 2
  026dcb8  lfsx 2, 28, 8
  026dcbc  stfs 2, 260(6)
  026dcc0  stfs 1, 256(6)
  026dcc4  addic 6, 6, 8
  026dcc8  bdnz 0x26dc5c
  026dccc  addic 4, 1, 112
  026dcd0  lwz 6, 28(29)
  026dcd4  addic 3, 1, 176
  026dcd8  li 5, 0
  026dcdc  li 7, 9
  026dce0  bl 0x72280
  026dce4  nop
  026dce8  addic 25, 25, 1
  026dcec  addic 30, 30, 16
  026dcf0  cmpwi 25, 38
  026dcf4  addic 31, 31, 16
  026dcf8  bt 0, 0x26dc44
  026dcfc  ld 0, 400(1)
  026dd00  mtlr 0
  026dd04  ld 25, 328(1)
  026dd08  ld 26, 336(1)
  026dd0c  ld 27, 344(1)
  026dd10  ld 28, 352(1)
  026dd14  ld 29, 360(1)
  026dd18  ld 30, 368(1)
  026dd1c  ld 31, 376(1)
  026dd20  addi 1, 1, 384
  026dd24  blr

M1403_0026dd28:   # 0x26dd28, 0x228 bytes
  026dd28  stdu 1, -384(1)
  026dd2c  mflr 0
  026dd30  std 0, 400(1)
  026dd34  std 31, 376(1)
  026dd38  lis 4, 122
  026dd3c  ori 31, 3, 0
  026dd40  std 30, 368(1)
  026dd44  lwz 3, -8668(4)
  026dd48  lwz 30, 120(31)
  026dd4c  std 29, 360(1)
  026dd50  std 28, 352(1)
  026dd54  std 27, 344(1)
  026dd58  std 26, 336(1)
  026dd5c  std 25, 328(1)
  026dd60  extsw 3, 3
  026dd64  bl 0x685c4
  026dd68  nop
  026dd6c  std 3, 296(1)
  026dd70  lis 9, 0
  026dd74  li 3, 0
  026dd78  li 4, 0
  026dd7c  li 5, 1
  026dd80  li 6, 1
  026dd84  li 7, 1
  026dd88  li 8, 0
  026dd8c  ori 9, 9, 65424
  026dd90  bl 0x502fd4
  026dd94  nop
  026dd98  std 3, 304(1)
  026dd9c  li 4, 0
  026dda0  li 3, 0
  026dda4  li 5, 0
  026dda8  li 6, 0
  026ddac  li 7, 0
  026ddb0  li 8, 0
  026ddb4  bl 0x502f08
  026ddb8  nop
  026ddbc  lis 4, 251
  026ddc0  std 3, 288(1)
  026ddc4  lis 5, 122
  026ddc8  lis 6, 122
  026ddcc  lis 7, 251
  026ddd0  lis 8, 122
  026ddd4  lwz 3, -30132(4)
  026ddd8  lwz 4, -8672(5)
  026dddc  lwz 5, -8680(6)
  026dde0  lwz 6, -30128(7)
  026dde4  ori 7, 4, 0
  026dde8  lwz 8, -8676(8)
  026ddec  ori 4, 5, 0
  026ddf0  ori 5, 6, 0
  026ddf4  ori 6, 8, 0
  026ddf8  bl 0x502ea8
  026ddfc  nop
  026de00  std 3, 312(1)
  026de04  addic 3, 1, 112
  026de08  bl 0x500af8
  026de0c  nop
  026de10  lfs 1, 24(31)
  026de14  lfs 2, 0(30)
  026de18  lis 3, 122
  026de1c  lis 30, 122
  026de20  fsubs 1, 1, 2
  026de24  lis 28, 122
  026de28  lis 31, 122
  026de2c  lis 29, 161
  026de30  lis 26, 122
  026de34  lis 27, 122
  026de38  li 25, 0
  026de3c  addic 28, 28, -8940
  026de40  addic 29, 29, 24396
  026de44  addic 30, 30, -9296
  026de48  addic 26, 26, -9824
  026de4c  addic 27, 27, -8944
  026de50  stfs 1, 168(1)
  026de54  lwz 3, -8664(3)
  026de58  addic 31, 31, -9294
  026de5c  stw 3, 252(1)
  026de60  stw 3, 248(1)
  026de64  stw 3, 244(1)
  026de68  stw 3, 240(1)
  026de6c  li 3, 4
  026de70  ori 6, 1, 0
  026de74  mtctr 3
  026de78  addic 5, 1, 176
  026de7c  ori 4, 30, 0
  026de80  ori 3, 31, 0
  026de84  lhz 7, 0(4)
  026de88  lis 9, 251
  026de8c  lhz 8, 0(3)
  026de90  extsh 7, 7
  026de94  extsh 8, 8
  026de98  sldi 7, 7, 4
  026de9c  sldi 8, 8, 3
  026dea0  addc 7, 7, 26
  026dea4  clrldi 7, 7, 32
  026dea8  addic 4, 4, 4
  026deac  addic 3, 3, 4
  026deb0  lfs 1, 0(7)
  026deb4  stfs 1, 0(5)
  026deb8  lfs 1, 4(7)
  026debc  stfs 1, 4(5)
  026dec0  lfs 1, 8(7)
  026dec4  stfs 1, 8(5)
  026dec8  lfs 1, 12(7)
  026decc  stfs 1, 12(5)
  026ded0  lfsx 1, 27, 8
  026ded4  lfs 2, -30136(9)
  026ded8  addic 5, 5, 16
  026dedc  fadds 1, 1, 2
  026dee0  lfsx 2, 28, 8
  026dee4  stfs 2, 260(6)
  026dee8  stfs 1, 256(6)
  026deec  addic 6, 6, 8
  026def0  bdnz 0x26de84
  026def4  addic 4, 1, 112
  026def8  lwz 6, 28(29)
  026defc  addic 3, 1, 176
  026df00  li 5, 0
  026df04  li 7, 9
  026df08  bl 0x72280
  026df0c  nop
  026df10  addic 25, 25, 1
  026df14  addic 30, 30, 16
  026df18  cmpwi 25, 22
  026df1c  addic 31, 31, 16
  026df20  bt 0, 0x26de6c
  026df24  ld 0, 400(1)
  026df28  mtlr 0
  026df2c  ld 25, 328(1)
  026df30  ld 26, 336(1)
  026df34  ld 27, 344(1)
  026df38  ld 28, 352(1)
  026df3c  ld 29, 360(1)
  026df40  ld 30, 368(1)
  026df44  ld 31, 376(1)
  026df48  addi 1, 1, 384
  026df4c  blr

M1403_0026df50:   # 0x26df50, 0x14 bytes
  026df50  lis 3, 122
  026df54  lis 4, 1
  026df58  addic 3, 3, -8656
  026df5c  stw 4, 72(3)
  026df60  blr

UpdateMoby_1403:   # 0x26df78, 0x318 bytes
  026df78  stdu 1, -176(1)
  026df7c  mflr 0
  026df80  std 0, 192(1)
  026df84  std 31, 168(1)
  026df88  lbz 4, 32(3)
  026df8c  std 30, 160(1)
  026df90  ori 31, 3, 0
  026df94  lwz 30, 120(3)
  026df98  std 29, 152(1)
  026df9c  cmpwi 4, 0
  026dfa0  bf 2, 0x26e060
  026dfa4  li 3, 255
  026dfa8  stb 3, 48(31)
  026dfac  lwz 5, 4(30)
  026dfb0  cmpwi 5, -1
  026dfb4  bt 2, 0x26e048
  026dfb8  lis 3, 165
  026dfbc  slwi 4, 5, 2
  026dfc0  addic 3, 3, 7136
  026dfc4  extsw 4, 4
  026dfc8  li 5, 0
  026dfcc  lwzx 4, 3, 4
  026dfd0  lwz 3, 0(4)
  026dfd4  cmpwi 3, 0
  026dfd8  bf 1, 0x26e048
  026dfdc  ori 7, 4, 0
  026dfe0  addic 6, 7, 16
  026dfe4  addic 5, 5, 1
  026dfe8  lfs 1, 20(7)
  026dfec  divw 8, 5, 3
  026dff0  mullw 3, 8, 3
  026dff4  lfs 2, 16(7)
  026dff8  subc 3, 5, 3
  026dffc  sldi 3, 3, 4
  026e000  addc 3, 3, 6
  026e004  clrldi 3, 3, 32
  026e008  lfs 3, 4(3)
  026e00c  lfs 4, 0(3)
  026e010  fsubs 1, 1, 3
  026e014  fsubs 2, 2, 4
  026e018  lfs 3, 24(7)
  026e01c  lfs 4, 8(3)
  026e020  fsubs 3, 3, 4
  026e024  fmuls 1, 1, 1
  026e028  fmadds 1, 2, 2, 1
  026e02c  fmadds 1, 3, 3, 1
  026e030  fsqrts 1, 1
  026e034  stfs 1, 28(7)
  026e038  lwz 3, 0(4)
  026e03c  addic 7, 7, 16
  026e040  cmpw 5, 3
  026e044  bt 0, 0x26dfe4
  026e048  li 3, 0
  026e04c  li 4, 1
  026e050  stw 3, 8(30)
  026e054  stw 3, 12(30)
  026e058  stb 4, 32(31)
  026e05c  stw 3, 16(30)
  026e060  lwz 3, 0(30)
  026e064  cmpwi 3, -1
  026e068  bt 2, 0x26e274
  026e06c  lis 4, 164
  026e070  slwi 3, 3, 8
  026e074  lwz 4, -28512(4)
  026e078  addc 3, 4, 3
  026e07c  clrldi 3, 3, 32
  026e080  cmpwi 3, 0
  026e084  bt 2, 0x26e0a0
  026e088  lbz 4, 32(3)
  026e08c  cmpwi 4, 254
  026e090  cmpwi 1, 4, 7
  026e094  cmpwi 6, 4, 253
  026e098  bt 2, 0x26e0a0
  026e09c  bf 26, 0x26e0b0
  026e0a0  ori 3, 31, 0
  026e0a4  bl 0xefb38
  026e0a8  nop
  026e0ac  b 0x26e274
  026e0b0  bt 4, 0x26e254
  026e0b4  lwz 4, 16(30)
  026e0b8  lwz 29, 4(30)
  026e0bc  addic 4, 4, 1
  026e0c0  cmpwi 29, -1
  026e0c4  stw 4, 16(30)
  026e0c8  bt 2, 0x26e274
  026e0cc  lis 4, 165
  026e0d0  slwi 5, 29, 2
  026e0d4  addic 29, 4, 7136
  026e0d8  extsw 5, 5
  026e0dc  lbz 4, 32(31)
  026e0e0  cmpwi 4, 1
  026e0e4  lwzx 29, 29, 5
  026e0e8  bf 2, 0x26e1ac
  026e0ec  lis 5, 39
  026e0f0  addic 4, 3, 16
  026e0f4  addi 8, 5, -8344
  026e0f8  addic 5, 1, 128
  026e0fc  addic 6, 1, 148
  026e100  addic 7, 1, 144
  026e104  ori 3, 29, 0
  026e108  lfs 1, 0(8)
  026e10c  li 9, 0
  026e110  lfs 2, 4(8)
  026e114  lfs 3, 8(8)
  026e118  bl 0x10d7a0
  026e11c  nop
  026e120  lwz 4, 144(1)
  026e124  lwz 3, 148(1)
  026e128  lwz 6, 8(30)
  026e12c  srawi 5, 4, 31
  026e130  lfs 1, 144(1)
  026e134  cmpw 3, 6
  026e138  srwi 6, 5, 1
  026e13c  xor 4, 6, 4
  026e140  subc 4, 4, 5
  026e144  bt 1, 0x26e170
  026e148  lwz 5, 12(30)
  026e14c  srawi 6, 5, 31
  026e150  srwi 7, 6, 1
  026e154  xor 5, 7, 5
  026e158  subc 5, 5, 6
  026e15c  cmpw 4, 5
  026e160  bt 1, 0x26e170
  026e164  lwz 4, 16(30)
  026e168  cmpwi 4, 30
  026e16c  bf 0, 0x26e1a0
  026e170  stfs 1, 12(30)
  026e174  stw 3, 8(30)
  026e178  lfs 1, 128(1)
  026e17c  lfs 2, 132(1)
  026e180  stfs 1, 16(31)
  026e184  lfs 1, 136(1)
  026e188  stfs 2, 20(31)
  026e18c  lfs 2, 140(1)
  026e190  stfs 1, 24(31)
  026e194  stfs 2, 28(31)
  026e198  lbz 4, 32(31)
  026e19c  b 0x26e1ac
  026e1a0  li 3, 2
  026e1a4  stb 3, 32(31)
  026e1a8  b 0x26e1b4
  026e1ac  cmpwi 4, 2
  026e1b0  bf 2, 0x26e274
  026e1b4  lwz 4, 0(29)
  026e1b8  lwz 3, 8(30)
  026e1bc  addic 4, 4, -1
  026e1c0  cmpw 3, 4
  026e1c4  bf 0, 0x26e248
  026e1c8  lis 4, 39
  026e1cc  lis 7, 114
  026e1d0  addi 4, 4, -8344
  026e1d4  extsw 6, 3
  026e1d8  ori 3, 31, 0
  026e1dc  addic 5, 31, 16
  026e1e0  lfs 1, 12(4)
  026e1e4  lfs 2, -3064(7)
  026e1e8  ori 4, 29, 0
  026e1ec  li 7, 1
  026e1f0  fmuls 1, 2, 1
  026e1f4  bl 0x138238
  026e1f8  nop
  026e1fc  sldi 4, 3, 4
  026e200  stw 3, 8(30)
  026e204  addc 3, 29, 4
  026e208  lfs 1, 20(31)
  026e20c  clrldi 3, 3, 32
  026e210  lfs 2, 16(31)
  026e214  lfs 3, 24(31)
  026e218  lfs 4, 20(3)
  026e21c  lfs 5, 16(3)
  026e220  fsubs 1, 1, 4
  026e224  fsubs 2, 2, 5
  026e228  lfs 4, 24(3)
  026e22c  fsubs 3, 3, 4
  026e230  fmuls 1, 1, 1
  026e234  fmadds 1, 2, 2, 1
  026e238  fmadds 1, 3, 3, 1
  026e23c  fsqrts 1, 1
  026e240  stfs 1, 12(30)
  026e244  b 0x26e274
  026e248  li 3, 3
  026e24c  stb 3, 32(31)
  026e250  b 0x26e274
  026e254  lfs 1, 16(3)
  026e258  stfs 1, 16(31)
  026e25c  lfs 1, 20(3)
  026e260  stfs 1, 20(31)
  026e264  lfs 1, 24(3)
  026e268  stfs 1, 24(31)
  026e26c  lfs 1, 28(3)
  026e270  stfs 1, 28(31)
  026e274  ld 0, 192(1)
  026e278  mtlr 0
  026e27c  ld 29, 152(1)
  026e280  ld 30, 160(1)
  026e284  ld 31, 168(1)
  026e288  addi 1, 1, 176
  026e28c  blr

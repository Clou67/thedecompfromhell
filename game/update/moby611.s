# game/update/moby611.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M611_003da478:   # 0x3da478, 0x3b8 bytes
  03da478  stdu 1, -352(1)
  03da47c  mflr 0
  03da480  std 0, 368(1)
  03da484  stfd 25, 296(1)
  03da488  stfd 26, 304(1)
  03da48c  stfd 27, 312(1)
  03da490  stfd 28, 320(1)
  03da494  stfd 29, 328(1)
  03da498  stfd 30, 336(1)
  03da49c  stfd 31, 344(1)
  03da4a0  std 31, 288(1)
  03da4a4  lwz 31, 120(3)
  03da4a8  li 3, 48
  03da4ac  std 28, 264(1)
  03da4b0  lis 4, 62
  03da4b4  std 30, 280(1)
  03da4b8  std 29, 272(1)
  03da4bc  std 27, 256(1)
  03da4c0  addi 28, 4, -23444
  03da4c4  bl 0x685c4
  03da4c8  nop
  03da4cc  std 3, 232(1)
  03da4d0  li 3, 0
  03da4d4  lis 9, 0
  03da4d8  li 4, 0
  03da4dc  li 5, 1
  03da4e0  li 6, 1
  03da4e4  li 7, 1
  03da4e8  li 8, 0
  03da4ec  ori 9, 9, 65424
  03da4f0  bl 0x502fd4
  03da4f4  nop
  03da4f8  std 3, 240(1)
  03da4fc  li 4, 0
  03da500  li 3, 0
  03da504  li 5, 0
  03da508  li 6, 0
  03da50c  li 7, 0
  03da510  li 8, 0
  03da514  bl 0x502f08
  03da518  nop
  03da51c  std 3, 224(1)
  03da520  li 3, 0
  03da524  li 4, 2
  03da528  li 5, 0
  03da52c  li 6, 1
  03da530  li 7, 128
  03da534  bl 0x502ea8
  03da538  nop
  03da53c  std 3, 248(1)
  03da540  li 3, 0
  03da544  bl 0x502e50
  03da548  nop
  03da54c  ori 4, 3, 0
  03da550  li 3, 8
  03da554  bl 0x174f80
  03da558  nop
  03da55c  li 3, 1
  03da560  li 4, 0
  03da564  li 10, 2
  03da568  li 5, 0
  03da56c  li 6, 1
  03da570  li 7, 0
  03da574  li 8, 0
  03da578  li 9, 1
  03da57c  bl 0x502f98
  03da580  nop
  03da584  ori 4, 3, 0
  03da588  li 3, 22
  03da58c  bl 0x174f80
  03da590  nop
  03da594  lis 3, 16256
  03da598  lfs 31, 0(28)
  03da59c  li 30, 0
  03da5a0  ori 29, 31, 0
  03da5a4  ori 27, 30, 0
  03da5a8  stw 3, 192(1)
  03da5ac  stw 3, 196(1)
  03da5b0  lfs 30, 4(28)
  03da5b4  stw 30, 200(1)
  03da5b8  stw 3, 204(1)
  03da5bc  ori 28, 29, 0
  03da5c0  stw 3, 208(1)
  03da5c4  stw 30, 212(1)
  03da5c8  stw 30, 216(1)
  03da5cc  stw 30, 220(1)
  03da5d0  lhz 3, 800(29)
  03da5d4  cmpwi 3, 0
  03da5d8  bt 2, 0x3da7d8
  03da5dc  lis 3, 133
  03da5e0  lis 4, 149
  03da5e4  lhz 5, 992(29)
  03da5e8  addic 4, 4, 5056
  03da5ec  slwi 5, 5, 24
  03da5f0  lwz 3, 14528(3)
  03da5f4  or 3, 3, 5
  03da5f8  lfs 10, 324(4)
  03da5fc  fmr 7, 30
  03da600  stw 3, 188(1)
  03da604  stw 3, 184(1)
  03da608  stw 3, 180(1)
  03da60c  stw 3, 176(1)
  03da610  lfs 2, 36(28)
  03da614  lfs 1, 32(28)
  03da618  fsubs 10, 2, 10
  03da61c  lfs 6, 320(4)
  03da620  lfs 3, 40(28)
  03da624  fsubs 6, 1, 6
  03da628  lfs 11, 328(4)
  03da62c  fsubs 11, 3, 11
  03da630  fmr 8, 7
  03da634  fmuls 4, 10, 10
  03da638  fmr 9, 8
  03da63c  fmadds 5, 6, 6, 4
  03da640  lfs 4, 44(28)
  03da644  fmadds 5, 11, 11, 5
  03da648  fsqrts 12, 5
  03da64c  fcmpu 0, 12, 9
  03da650  bt 2, 0x3da6a0
  03da654  frsqrte 7, 5
  03da658  lis 3, 62
  03da65c  addi 3, 3, -23444
  03da660  lfs 8, 8(3)
  03da664  fmuls 9, 5, 7
  03da668  fmuls 12, 8, 7
  03da66c  fnmsubs 9, 9, 7, 31
  03da670  fmadds 7, 9, 12, 7
  03da674  fmuls 9, 5, 7
  03da678  fmuls 12, 8, 7
  03da67c  fnmsubs 9, 9, 7, 31
  03da680  fmadds 7, 9, 12, 7
  03da684  fmuls 5, 5, 7
  03da688  fmuls 8, 8, 7
  03da68c  fnmsubs 5, 5, 7, 31
  03da690  fmadds 7, 5, 8, 7
  03da694  fmuls 9, 6, 7
  03da698  fmuls 8, 10, 7
  03da69c  fmuls 7, 11, 7
  03da6a0  fmuls 5, 8, 8
  03da6a4  fneg 5, 5
  03da6a8  fneg 10, 5
  03da6ac  fmr 5, 30
  03da6b0  fmadds 10, 9, 9, 10
  03da6b4  fmr 6, 5
  03da6b8  fsqrts 11, 10
  03da6bc  fcmpu 0, 11, 6
  03da6c0  bt 2, 0x3da710
  03da6c4  frsqrte 5, 10
  03da6c8  lis 3, 62
  03da6cc  addi 3, 3, -23444
  03da6d0  lfs 6, 8(3)
  03da6d4  fmuls 11, 10, 5
  03da6d8  fmuls 12, 6, 5
  03da6dc  fnmsubs 11, 11, 5, 31
  03da6e0  fmadds 5, 11, 12, 5
  03da6e4  fmuls 11, 10, 5
  03da6e8  fmuls 12, 6, 5
  03da6ec  fnmsubs 11, 11, 5, 31
  03da6f0  fmadds 5, 11, 12, 5
  03da6f4  fmuls 10, 10, 5
  03da6f8  fmuls 6, 6, 5
  03da6fc  fnmsubs 10, 10, 5, 31
  03da700  fmadds 5, 10, 6, 5
  03da704  fmuls 6, 8, 5
  03da708  fmuls 5, 9, 5
  03da70c  fneg 6, 6
  03da710  fmuls 10, 7, 5
  03da714  addic 3, 31, 44
  03da718  fmuls 12, 8, 6
  03da71c  li 4, 4
  03da720  lis 5, 133
  03da724  fmsubs 11, 7, 6, 30
  03da728  addc 3, 27, 3
  03da72c  mtctr 4
  03da730  addic 5, 5, 14464
  03da734  clrldi 3, 3, 32
  03da738  addic 4, 1, 112
  03da73c  fmsubs 10, 8, 30, 10
  03da740  fmsubs 12, 9, 5, 12
  03da744  lfs 13, 0(3)
  03da748  lfs 0, 4(5)
  03da74c  lfs 29, 0(5)
  03da750  fmuls 0, 0, 13
  03da754  lfs 28, 8(5)
  03da758  fmuls 29, 29, 13
  03da75c  fmuls 13, 28, 13
  03da760  lfs 28, 12(5)
  03da764  addic 5, 5, 16
  03da768  fmuls 27, 0, 6
  03da76c  fmuls 0, 0, 5
  03da770  fmadds 26, 29, 7, 30
  03da774  fmuls 25, 29, 4
  03da778  fmadds 27, 29, 9, 27
  03da77c  fmadds 0, 29, 8, 0
  03da780  fmadds 29, 12, 13, 26
  03da784  fmadds 26, 28, 4, 25
  03da788  fmadds 27, 10, 13, 27
  03da78c  fmadds 13, 11, 13, 0
  03da790  fmadds 0, 28, 3, 29
  03da794  stfs 26, 12(4)
  03da798  fmadds 29, 28, 1, 27
  03da79c  fmadds 13, 28, 2, 13
  03da7a0  stfs 0, 8(4)
  03da7a4  stfs 29, 0(4)
  03da7a8  stfs 13, 4(4)
  03da7ac  addic 4, 4, 16
  03da7b0  bdnz 0x3da744
  03da7b4  lis 4, 161
  03da7b8  addic 3, 1, 112
  03da7bc  addic 6, 4, 24396
  03da7c0  li 4, 0
  03da7c4  li 5, 0
  03da7c8  li 7, 9
  03da7cc  lwz 6, 28(6)
  03da7d0  bl 0x72280
  03da7d4  nop
  03da7d8  addic 30, 30, 1
  03da7dc  addic 27, 27, 16
  03da7e0  cmpwi 30, 48
  03da7e4  addic 29, 29, 2
  03da7e8  addic 28, 28, 16
  03da7ec  bt 0, 0x3da5d0
  03da7f0  ld 0, 368(1)
  03da7f4  mtlr 0
  03da7f8  lfd 25, 296(1)
  03da7fc  lfd 26, 304(1)
  03da800  lfd 27, 312(1)
  03da804  lfd 28, 320(1)
  03da808  lfd 29, 328(1)
  03da80c  lfd 30, 336(1)
  03da810  lfd 31, 344(1)
  03da814  ld 27, 256(1)
  03da818  ld 28, 264(1)
  03da81c  ld 29, 272(1)
  03da820  ld 30, 280(1)
  03da824  ld 31, 288(1)
  03da828  addi 1, 1, 352
  03da82c  blr

M611_003da830:   # 0x3da830, 0x14 bytes
  03da830  lis 3, 133
  03da834  lis 4, 1
  03da838  addic 3, 3, 14584
  03da83c  stw 4, 72(3)
  03da840  blr

UpdateMoby_611:   # 0x3da868, 0x608 bytes
  03da868  stdu 1, -272(1)
  03da86c  mflr 0
  03da870  std 0, 288(1)
  03da874  stfd 31, 264(1)
  03da878  std 31, 256(1)
  03da87c  cmpwi 3, 0
  03da880  std 30, 248(1)
  03da884  std 29, 240(1)
  03da888  std 28, 232(1)
  03da88c  ori 31, 3, 0
  03da890  bt 2, 0x3dae4c
  03da894  lwz 30, 120(31)
  03da898  cmpwi 30, 0
  03da89c  bt 2, 0x3dae4c
  03da8a0  ori 3, 31, 0
  03da8a4  lis 4, 195
  03da8a8  li 5, 0
  03da8ac  bl 0x10675c
  03da8b0  nop
  03da8b4  ori 29, 3, 0
  03da8b8  cmpwi 29, 0
  03da8bc  bt 2, 0x3da8e8
  03da8c0  lfs 1, 44(29)
  03da8c4  lwz 4, 32(29)
  03da8c8  lis 3, 101
  03da8cc  addic 3, 3, 27968
  03da8d0  lhz 5, 166(4)
  03da8d4  stfd 1, 56(1)
  03da8d8  extsh 5, 5
  03da8dc  ld 4, 56(1)
  03da8e0  bl 0x5cd098
  03da8e4  nop
  03da8e8  addic 7, 1, 208
  03da8ec  ori 3, 31, 0
  03da8f0  li 10, 4
  03da8f4  ori 4, 29, 0
  03da8f8  ori 5, 30, 0
  03da8fc  li 6, 0
  03da900  li 8, 0
  03da904  li 9, 0
  03da908  bl 0x106840
  03da90c  nop
  03da910  cmpwi 29, 0
  03da914  bt 2, 0x3da934
  03da918  lis 5, 101
  03da91c  ori 4, 3, 0
  03da920  addic 3, 5, 28000
  03da924  lwz 5, 208(1)
  03da928  extsw 5, 5
  03da92c  bl 0x5cd098
  03da930  nop
  03da934  lwz 3, 208(1)
  03da938  cmpwi 3, 1
  03da93c  bf 1, 0x3da9b8
  03da940  lfs 1, 0(30)
  03da944  lfs 2, 44(29)
  03da948  lis 3, 101
  03da94c  fsubs 1, 1, 2
  03da950  addic 3, 3, 28032
  03da954  fmr 2, 1
  03da958  stfs 1, 0(30)
  03da95c  stfd 2, 56(1)
  03da960  ld 4, 56(1)
  03da964  bl 0x5cd098
  03da968  nop
  03da96c  lwz 3, 0(30)
  03da970  addic 29, 30, 64
  03da974  cmpwi 3, 0
  03da978  bf 1, 0x3da998
  03da97c  li 5, 90
  03da980  ori 3, 31, 0
  03da984  ori 4, 29, 0
  03da988  stb 5, 71(30)
  03da98c  bl 0x10c808
  03da990  nop
  03da994  b 0x3da9b8
  03da998  li 5, 4
  03da99c  li 6, 120
  03da9a0  ori 3, 31, 0
  03da9a4  ori 4, 29, 0
  03da9a8  stb 5, 32(31)
  03da9ac  stb 6, 71(30)
  03da9b0  bl 0x10c808
  03da9b4  nop
  03da9b8  lis 3, 151
  03da9bc  li 4, 255
  03da9c0  addic 3, 3, -25376
  03da9c4  stb 4, 164(31)
  03da9c8  lfs 1, 20(31)
  03da9cc  lfs 2, 132(3)
  03da9d0  lfs 3, 16(31)
  03da9d4  fsubs 1, 1, 2
  03da9d8  lfs 2, 128(3)
  03da9dc  lbz 3, 32(31)
  03da9e0  fsubs 2, 3, 2
  03da9e4  cmpwi 3, 2
  03da9e8  cmpwi 1, 3, -1
  03da9ec  cmpwi 6, 3, 0
  03da9f0  cmpwi 7, 3, 4
  03da9f4  fmuls 1, 1, 1
  03da9f8  fmadds 31, 2, 2, 1
  03da9fc  fsqrts 31, 31
  03daa00  bt 1, 0x3daa10
  03daa04  bf 5, 0x3dae4c
  03daa08  bf 25, 0x3daa2c
  03daa0c  b 0x3dab64
  03daa10  bt 29, 0x3daa20
  03daa14  cmpwi 3, 3
  03daa18  bf 1, 0x3dae4c
  03daa1c  b 0x3dad7c
  03daa20  cmpwi 3, 5
  03daa24  bf 1, 0x3dae3c
  03daa28  b 0x3dae4c
  03daa2c  li 4, 0
  03daa30  lis 6, 165
  03daa34  lis 3, 101
  03daa38  stw 4, 212(1)
  03daa3c  stw 4, 104(30)
  03daa40  addic 3, 3, 28040
  03daa44  stw 4, 100(30)
  03daa48  lwz 4, 84(30)
  03daa4c  lbz 5, 33(31)
  03daa50  lwz 6, -28288(6)
  03daa54  extsw 4, 4
  03daa58  extsw 6, 6
  03daa5c  bl 0x5cd098
  03daa60  nop
  03daa64  addic 3, 1, 212
  03daa68  lwz 4, 84(30)
  03daa6c  li 5, 1
  03daa70  li 6, 0
  03daa74  extsw 4, 4
  03daa78  bl 0x104800
  03daa7c  nop
  03daa80  cmpwi 3, 0
  03daa84  bf 2, 0x3daaf0
  03daa88  lwz 3, 212(1)
  03daa8c  cmpwi 3, 0
  03daa90  bt 2, 0x3daabc
  03daa94  lbz 4, 32(3)
  03daa98  cmpwi 1, 4, 253
  03daa9c  cmpwi 4, 254
  03daaa0  cror 2, 2, 6
  03daaa4  bt 2, 0x3daabc
  03daaa8  cmpw 3, 31
  03daaac  bt 2, 0x3daabc
  03daab0  bl 0xefb38
  03daab4  nop
  03daab8  lwz 3, 212(1)
  03daabc  cmpw 3, 31
  03daac0  bt 2, 0x3daad0
  03daac4  lwz 4, 104(30)
  03daac8  addic 4, 4, 1
  03daacc  stw 4, 104(30)
  03daad0  ori 4, 3, 0
  03daad4  addic 3, 1, 212
  03daad8  li 5, 0
  03daadc  li 6, 0
  03daae0  bl 0x10466c
  03daae4  nop
  03daae8  cmpwi 3, 0
  03daaec  bt 2, 0x3daa88
  03daaf0  li 3, 88
  03daaf4  li 4, 1
  03daaf8  vspltisw 4, -1
  03daafc  addi 5, 3, 16
  03dab00  stb 4, 32(31)
  03dab04  lvlx 2, 3, 30
  03dab08  lis 4, 62
  03dab0c  lvrx 3, 5, 30
  03dab10  addi 3, 4, -22456
  03dab14  vor 2, 2, 3
  03dab18  li 4, -3056
  03dab1c  vslw 4, 4, 4
  03dab20  vcfsx 2, 2, 0
  03dab24  lvlx 3, 0, 3
  03dab28  lis 3, 114
  03dab2c  vspltw 3, 3, 0
  03dab30  lvlx 5, 4, 3
  03dab34  li 3, 96
  03dab38  li 4, 0
  03dab3c  vaddfp 2, 2, 3
  03dab40  vmaddfp 2, 5, 2, 4
  03dab44  vctsxs 2, 2, 0
  03dab48  vspltw 2, 2, 0
  03dab4c  stvewx 2, 3, 30
  03dab50  stw 4, 100(30)
  03dab54  lhz 3, 52(31)
  03dab58  ori 3, 3, 4096
  03dab5c  sth 3, 52(31)
  03dab60  b 0x3dae4c
  03dab64  addic 3, 30, 96
  03dab68  bl 0x4fff60
  03dab6c  nop
  03dab70  cmpwi 3, 0
  03dab74  bt 2, 0x3dad60
  03dab78  lfs 1, 80(30)
  03dab7c  fcmpu 0, 31, 1
  03dab80  cror 6, 1, 2
  03dab84  bt 6, 0x3dad60
  03dab88  li 4, 0
  03dab8c  addic 3, 1, 216
  03dab90  li 5, 1
  03dab94  li 6, 1
  03dab98  stw 4, 216(1)
  03dab9c  lwz 4, 84(30)
  03daba0  extsw 4, 4
  03daba4  bl 0x104800
  03daba8  nop
  03dabac  lwz 3, 216(1)
  03dabb0  cmpw 3, 31
  03dabb4  bf 2, 0x3dabd4
  03dabb8  ori 4, 3, 0
  03dabbc  addic 3, 1, 216
  03dabc0  li 5, 1
  03dabc4  li 6, 1
  03dabc8  bl 0x10466c
  03dabcc  nop
  03dabd0  lwz 3, 216(1)
  03dabd4  cmpwi 3, 0
  03dabd8  bt 2, 0x3dad60
  03dabdc  lwz 5, 100(30)
  03dabe0  li 4, 0
  03dabe4  addic 5, 5, 1
  03dabe8  li 29, 255
  03dabec  lis 6, -32640
  03dabf0  stw 5, 100(30)
  03dabf4  stb 4, 32(3)
  03dabf8  lwz 3, 216(1)
  03dabfc  li 5, 1
  03dac00  stb 4, 188(3)
  03dac04  lwz 3, 216(1)
  03dac08  lwz 4, 36(3)
  03dac0c  lhz 4, 68(4)
  03dac10  sth 4, 52(3)
  03dac14  lwz 3, 216(1)
  03dac18  lwz 4, 36(3)
  03dac1c  lfs 1, 36(4)
  03dac20  ori 4, 6, 32639
  03dac24  stfs 1, 44(3)
  03dac28  lwz 3, 216(1)
  03dac2c  stb 29, 48(3)
  03dac30  lwz 3, 216(1)
  03dac34  sth 29, 50(3)
  03dac38  lwz 3, 216(1)
  03dac3c  stb 5, 49(3)
  03dac40  lwz 3, 216(1)
  03dac44  bl 0xf25f4
  03dac48  nop
  03dac4c  lwz 4, 216(1)
  03dac50  li 3, 32640
  03dac54  sth 3, 54(4)
  03dac58  lwz 3, 216(1)
  03dac5c  stb 29, 114(3)
  03dac60  lwz 3, 216(1)
  03dac64  stb 29, 164(3)
  03dac68  lwz 3, 216(1)
  03dac6c  stb 29, 113(3)
  03dac70  lwz 3, 216(1)
  03dac74  lwz 4, 36(3)
  03dac78  lwz 4, 16(4)
  03dac7c  stw 4, 148(3)
  03dac80  lwz 3, 216(1)
  03dac84  bl 0x10c000
  03dac88  nop
  03dac8c  lwz 3, 216(1)
  03dac90  bl 0xf31a8
  03dac94  nop
  03dac98  lwz 3, 216(1)
  03dac9c  bl 0xfcccc
  03daca0  nop
  03daca4  ori 4, 3, 0
  03daca8  lbz 3, 32(31)
  03dacac  cmpwi 4, 0
  03dacb0  bt 2, 0x3dacdc
  03dacb4  li 5, 4
  03dacb8  vspltisw 2, -16
  03dacbc  addi 6, 5, 16
  03dacc0  lvlx 3, 5, 4
  03dacc4  lvrx 4, 6, 4
  03dacc8  vor 3, 3, 4
  03daccc  vsraw 2, 3, 2
  03dacd0  vcfsx 2, 2, 0
  03dacd4  vspltw 2, 2, 0
  03dacd8  stvewx 2, 0, 4
  03dacdc  cmpwi 3, 1
  03dace0  bf 2, 0x3dad08
  03dace4  li 3, 88
  03dace8  lis 5, 114
  03dacec  addi 4, 3, 16
  03dacf0  li 6, -3056
  03dacf4  lvlx 2, 3, 30
  03dacf8  lvrx 3, 4, 30
  03dacfc  vor 2, 2, 3
  03dad00  lvlx 3, 6, 5
  03dad04  b 0x3dad28
  03dad08  li 3, 92
  03dad0c  lis 5, 114
  03dad10  addi 4, 3, 16
  03dad14  li 6, -3056
  03dad18  lvlx 2, 3, 30
  03dad1c  lvrx 3, 4, 30
  03dad20  vor 2, 2, 3
  03dad24  lvlx 3, 6, 5
  03dad28  lis 3, 62
  03dad2c  vcfsx 2, 2, 0
  03dad30  vspltisw 4, -1
  03dad34  addi 3, 3, -22456
  03dad38  vspltw 3, 3, 0
  03dad3c  vslw 4, 4, 4
  03dad40  lvlx 5, 0, 3
  03dad44  vspltw 5, 5, 0
  03dad48  li 3, 96
  03dad4c  vaddfp 2, 2, 5
  03dad50  vspltw 2, 2, 0
  03dad54  vmaddfp 2, 3, 2, 4
  03dad58  vctsxs 2, 2, 0
  03dad5c  stvewx 2, 3, 30
  03dad60  lwz 3, 100(30)
  03dad64  lwz 4, 104(30)
  03dad68  cmpw 3, 4
  03dad6c  bt 0, 0x3dae4c
  03dad70  li 3, 2
  03dad74  stb 3, 32(31)
  03dad78  b 0x3dae4c
  03dad7c  lis 3, 62
  03dad80  li 30, 0
  03dad84  addi 29, 3, -22456
  03dad88  lis 3, 114
  03dad8c  addic 28, 1, 192
  03dad90  lfs 31, 4(29)
  03dad94  stw 30, 192(1)
  03dad98  stw 30, 196(1)
  03dad9c  stw 30, 200(1)
  03dada0  stw 30, 204(1)
  03dada4  lfs 2, 0(29)
  03dada8  lfs 3, -3064(3)
  03dadac  ori 3, 28, 0
  03dadb0  fmuls 4, 3, 2
  03dadb4  fmuls 5, 3, 2
  03dadb8  fmuls 1, 3, 2
  03dadbc  stfs 4, 192(1)
  03dadc0  stfs 5, 196(1)
  03dadc4  lfs 2, 8(29)
  03dadc8  fmuls 2, 3, 2
  03dadcc  stfs 2, 200(1)
  03dadd0  bl 0x110950
  03dadd4  nop
  03dadd8  lfs 3, 12(29)
  03daddc  lfs 4, 16(29)
  03dade0  li 7, -1
  03dade4  li 6, 1
  03dade8  lfs 5, 20(29)
  03dadec  lfs 6, 24(29)
  03dadf0  ori 3, 31, 0
  03dadf4  lfs 7, 28(29)
  03dadf8  ori 4, 28, 0
  03dadfc  std 7, 144(1)
  03dae00  fmr 1, 31
  03dae04  std 6, 160(1)
  03dae08  li 5, 0
  03dae0c  std 6, 168(1)
  03dae10  fmr 2, 31
  03dae14  std 7, 176(1)
  03dae18  li 8, 30
  03dae1c  li 9, 8
  03dae20  std 30, 184(1)
  03dae24  li 10, 20
  03dae28  bl 0x10e030
  03dae2c  nop
  03dae30  li 3, 5
  03dae34  stb 3, 32(31)
  03dae38  b 0x3dae4c
  03dae3c  ori 3, 31, 0
  03dae40  bl 0xefb38
  03dae44  nop
  03dae48  b 0x3dae4c
  03dae4c  ld 0, 288(1)
  03dae50  mtlr 0
  03dae54  lfd 31, 264(1)
  03dae58  ld 28, 232(1)
  03dae5c  ld 29, 240(1)
  03dae60  ld 30, 248(1)
  03dae64  ld 31, 256(1)
  03dae68  addi 1, 1, 272
  03dae6c  blr

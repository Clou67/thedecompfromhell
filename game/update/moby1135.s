# game/update/moby1135.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

Spawn_Moby1135_GoldBolt:   # 0x1da838, 0x1a8 bytes
  01da838  stdu 1, -144(1)
  01da83c  mflr 0
  01da840  std 0, 160(1)
  01da844  cmpwi 1, 4, 3
  01da848  cmpwi 4, 0
  01da84c  std 31, 136(1)
  01da850  cror 2, 0, 5
  01da854  std 30, 128(1)
  01da858  ori 31, 4, 0
  01da85c  std 29, 120(1)
  01da860  std 28, 112(1)
  01da864  ori 30, 3, 0
  01da868  bt 2, 0x1da898
  01da86c  lis 3, 151
  01da870  lis 4, 161
  01da874  addic 4, 4, -13772
  01da878  lwz 3, -25488(3)
  01da87c  addc 4, 31, 4
  01da880  slwi 3, 3, 2
  01da884  clrldi 4, 4, 32
  01da888  extsw 3, 3
  01da88c  lbzx 3, 4, 3
  01da890  cmpwi 3, 0
  01da894  bt 2, 0x1da8a0
  01da898  li 3, 0
  01da89c  b 0x1da9c0
  01da8a0  li 3, 1134
  01da8a4  bl 0xefa28
  01da8a8  nop
  01da8ac  ori 29, 3, 0
  01da8b0  cmpwi 29, 0
  01da8b4  bt 2, 0x1da9bc
  01da8b8  lfs 1, 0(30)
  01da8bc  lis 3, 151
  01da8c0  stfs 1, 16(29)
  01da8c4  lfs 1, 4(30)
  01da8c8  addic 3, 3, -25376
  01da8cc  li 4, 64
  01da8d0  stfs 1, 20(29)
  01da8d4  lfs 1, 8(30)
  01da8d8  lwz 28, 120(29)
  01da8dc  stfs 1, 24(29)
  01da8e0  lfs 1, 12(30)
  01da8e4  lwz 3, 8320(3)
  01da8e8  li 30, 1
  01da8ec  stfs 1, 28(29)
  01da8f0  ld 3, 56(3)
  01da8f4  stb 4, 48(29)
  01da8f8  stb 30, 49(29)
  01da8fc  std 3, 56(29)
  01da900  sth 4, 50(29)
  01da904  stw 31, 0(28)
  01da908  lfs 1, 16(29)
  01da90c  stfs 1, 16(28)
  01da910  lfs 1, 20(29)
  01da914  stfs 1, 20(28)
  01da918  lfs 1, 24(29)
  01da91c  stfs 1, 24(28)
  01da920  lfs 1, 28(29)
  01da924  stfs 1, 28(28)
  01da928  lfs 1, 72(29)
  01da92c  stfs 1, 28(28)
  01da930  bl 0xfcc68
  01da934  nop
  01da938  stfs 1, 64(29)
  01da93c  bl 0xfcc68
  01da940  nop
  01da944  stfs 1, 68(29)
  01da948  bl 0xfcc68
  01da94c  nop
  01da950  stfs 1, 72(29)
  01da954  bl 0xfcc68
  01da958  nop
  01da95c  lis 3, 30
  01da960  stfs 1, 76(29)
  01da964  lis 4, 118
  01da968  addi 3, 3, -22476
  01da96c  lis 5, 118
  01da970  lfs 1, 0(3)
  01da974  lfs 2, 18712(4)
  01da978  lis 3, 114
  01da97c  lis 4, 118
  01da980  fmuls 2, 2, 1
  01da984  lfs 3, -3052(3)
  01da988  ori 3, 29, 0
  01da98c  fmuls 2, 2, 3
  01da990  stfs 2, 104(28)
  01da994  lfs 2, 18716(4)
  01da998  fmuls 2, 2, 1
  01da99c  fmuls 2, 2, 3
  01da9a0  stfs 2, 100(28)
  01da9a4  lfs 2, 18720(5)
  01da9a8  fmuls 1, 2, 1
  01da9ac  fmuls 1, 1, 3
  01da9b0  stfs 1, 96(28)
  01da9b4  stb 30, 32(29)
  01da9b8  bl 0x1d9bd0
  01da9bc  ori 3, 29, 0
  01da9c0  ld 0, 160(1)
  01da9c4  mtlr 0
  01da9c8  ld 28, 112(1)
  01da9cc  ld 29, 120(1)
  01da9d0  ld 30, 128(1)
  01da9d4  ld 31, 136(1)
  01da9d8  addi 1, 1, 144
  01da9dc  blr

M1135_001da9e0:   # 0x1da9e0, 0x14 bytes
  01da9e0  lis 3, 118
  01da9e4  lis 4, 1
  01da9e8  addic 3, 3, 18800
  01da9ec  stw 4, 72(3)
  01da9f0  blr

M1135_001da9f8:   # 0x1da9f8, 0xb4 bytes
  01da9f8  stdu 1, -112(1)
  01da9fc  mflr 0
  01daa00  std 0, 128(1)
  01daa04  lhz 6, 178(3)
  01daa08  lis 5, 151
  01daa0c  extsh 7, 6
  01daa10  lis 4, 161
  01daa14  srawi 7, 7, 5
  01daa18  addic 4, 4, -13028
  01daa1c  lwz 5, -25488(5)
  01daa20  sldi 7, 7, 2
  01daa24  slwi 5, 5, 8
  01daa28  addc 4, 7, 4
  01daa2c  extsw 5, 5
  01daa30  clrldi 4, 4, 32
  01daa34  extsh 7, 6
  01daa38  lis 8, 165
  01daa3c  clrlwi 9, 6, 27
  01daa40  srawi 7, 7, 5
  01daa44  li 10, 1
  01daa48  addic 8, 8, 19920
  01daa4c  lwzx 11, 4, 5
  01daa50  sldi 7, 7, 2
  01daa54  slw 9, 10, 9
  01daa58  clrlwi 6, 6, 27
  01daa5c  or 9, 11, 9
  01daa60  slw 6, 10, 6
  01daa64  lwzx 10, 8, 7
  01daa68  stwx 9, 4, 5
  01daa6c  or 4, 10, 6
  01daa70  stwx 4, 8, 7
  01daa74  lbz 4, 33(3)
  01daa78  cmpwi 4, 255
  01daa7c  bt 2, 0x1daa94
  01daa80  ori 3, 4, 0
  01daa84  li 4, 1
  01daa88  bl 0x1042ec
  01daa8c  nop
  01daa90  b 0x1daa9c
  01daa94  li 4, 1
  01daa98  stb 4, 32(3)
  01daa9c  ld 0, 128(1)
  01daaa0  mtlr 0
  01daaa4  addi 1, 1, 112
  01daaa8  blr

M1135_001daac8:   # 0x1daac8, 0x1d4 bytes
  01daac8  stdu 1, -208(1)
  01daacc  mflr 0
  01daad0  std 0, 224(1)
  01daad4  stfd 25, 152(1)
  01daad8  stfd 26, 160(1)
  01daadc  stfd 27, 168(1)
  01daae0  stfd 28, 176(1)
  01daae4  stfd 29, 184(1)
  01daae8  stfd 30, 192(1)
  01daaec  stfd 31, 200(1)
  01daaf0  std 28, 120(1)
  01daaf4  lis 4, 30
  01daaf8  std 29, 128(1)
  01daafc  lwz 28, 120(3)
  01dab00  li 29, 0
  01dab04  std 31, 144(1)
  01dab08  addi 4, 4, -21844
  01dab0c  std 30, 136(1)
  01dab10  ori 31, 3, 0
  01dab14  ori 30, 28, 0
  01dab18  lfs 26, 0(4)
  01dab1c  lfs 27, 4(4)
  01dab20  lfs 28, 8(4)
  01dab24  lfs 29, 12(4)
  01dab28  lfs 30, 16(4)
  01dab2c  lfs 31, 20(4)
  01dab30  lwz 4, 20(30)
  01dab34  lfs 1, 16(31)
  01dab38  lis 3, 118
  01dab3c  stfs 1, 16(4)
  01dab40  lfs 1, 20(31)
  01dab44  stfs 1, 20(4)
  01dab48  lfs 1, 24(31)
  01dab4c  stfs 1, 24(4)
  01dab50  lfs 1, 28(31)
  01dab54  stfs 1, 28(4)
  01dab58  lwz 4, 20(30)
  01dab5c  lfs 1, 18908(3)
  01dab60  lis 3, 118
  01dab64  lfs 2, 24(4)
  01dab68  fadds 1, 2, 1
  01dab6c  stfs 1, 24(4)
  01dab70  lfs 1, 18916(3)
  01dab74  lwz 3, 20(30)
  01dab78  fmuls 1, 1, 26
  01dab7c  stfs 1, 68(3)
  01dab80  lfs 1, 32(28)
  01dab84  lwz 4, 20(30)
  01dab88  fmsubs 25, 1, 27, 28
  01dab8c  addic 3, 4, 192
  01dab90  addic 4, 4, 64
  01dab94  bl 0x500b64
  01dab98  nop
  01dab9c  lwz 3, 20(30)
  01daba0  lfs 1, 196(3)
  01daba4  lfs 2, 192(3)
  01daba8  fmuls 3, 1, 1
  01dabac  lfs 4, 200(3)
  01dabb0  lfs 5, 16(3)
  01dabb4  lfs 6, 20(3)
  01dabb8  fmadds 3, 2, 2, 3
  01dabbc  lfs 7, 24(3)
  01dabc0  fmadds 3, 4, 4, 3
  01dabc4  fsqrts 3, 3
  01dabc8  fdivs 8, 25, 3
  01dabcc  fsub 9, 29, 3
  01dabd0  fsub 10, 29, 3
  01dabd4  fsub 11, 29, 3
  01dabd8  fsub 12, 3, 29
  01dabdc  fsub 13, 3, 29
  01dabe0  fsub 3, 3, 29
  01dabe4  fmuls 4, 4, 8
  01dabe8  fmuls 1, 1, 8
  01dabec  fmuls 2, 2, 8
  01dabf0  fsel 8, 9, 29, 4
  01dabf4  fsel 9, 10, 29, 1
  01dabf8  fsel 10, 11, 29, 2
  01dabfc  fsel 4, 12, 8, 4
  01dac00  fsel 1, 13, 9, 1
  01dac04  fsel 2, 3, 10, 2
  01dac08  fadds 3, 7, 4
  01dac0c  fadds 1, 6, 1
  01dac10  fadds 2, 5, 2
  01dac14  stfs 3, 24(3)
  01dac18  stfs 1, 20(3)
  01dac1c  stfs 2, 16(3)
  01dac20  lfs 1, 36(28)
  01dac24  lwz 3, 20(30)
  01dac28  fmsubs 1, 1, 30, 31
  01dac2c  stfs 1, 68(3)
  01dac30  lwz 4, 20(30)
  01dac34  addic 3, 4, 192
  01dac38  addic 4, 4, 64
  01dac3c  bl 0x500b64
  01dac40  nop
  01dac44  lwz 3, 20(30)
  01dac48  bl 0xf31a8
  01dac4c  nop
  01dac50  addic 29, 29, 1
  01dac54  addic 30, 30, 4
  01dac58  cmpwi 29, 3
  01dac5c  bt 0, 0x1dab30
  01dac60  ld 0, 224(1)
  01dac64  mtlr 0
  01dac68  lfd 25, 152(1)
  01dac6c  lfd 26, 160(1)
  01dac70  lfd 27, 168(1)
  01dac74  lfd 28, 176(1)
  01dac78  lfd 29, 184(1)
  01dac7c  lfd 30, 192(1)
  01dac80  lfd 31, 200(1)
  01dac84  ld 28, 120(1)
  01dac88  ld 29, 128(1)
  01dac8c  ld 30, 136(1)
  01dac90  ld 31, 144(1)
  01dac94  addi 1, 1, 208
  01dac98  blr

M1135_001dac9c:   # 0x1dac9c, 0x174 bytes
  01dac9c  stdu 1, -112(1)
  01daca0  mflr 0
  01daca4  std 0, 128(1)
  01daca8  ori 4, 3, 0
  01dacac  lis 3, 151
  01dacb0  lwz 3, -25488(3)
  01dacb4  lwz 4, 120(4)
  01dacb8  cmpwi 3, 18
  01dacbc  cmpwi 1, 3, 17
  01dacc0  cmpwi 6, 3, 16
  01dacc4  cmpwi 7, 3, 13
  01dacc8  bt 2, 0x1dadd8
  01daccc  bt 6, 0x1dad28
  01dacd0  bt 26, 0x1dadac
  01dacd4  bt 30, 0x1dad54
  01dacd8  cmpwi 3, 12
  01dacdc  bt 2, 0x1dacfc
  01dace0  cmpwi 3, 8
  01dace4  bt 2, 0x1dad80
  01dace8  cmpwi 3, 7
  01dacec  bt 2, 0x1dad54
  01dacf0  cmpwi 3, 1
  01dacf4  bt 2, 0x1dad54
  01dacf8  b 0x1dae00
  01dacfc  lwz 4, 16(4)
  01dad00  lis 5, 118
  01dad04  li 3, 4
  01dad08  slwi 4, 4, 2
  01dad0c  addic 5, 5, 19120
  01dad10  extsw 4, 4
  01dad14  lwzx 4, 5, 4
  01dad18  extsw 4, 4
  01dad1c  bl 0x11aeec
  01dad20  nop
  01dad24  b 0x1dae00
  01dad28  lwz 4, 16(4)
  01dad2c  lis 3, 118
  01dad30  slwi 4, 4, 2
  01dad34  addic 5, 3, 19152
  01dad38  extsw 4, 4
  01dad3c  li 3, 4
  01dad40  lwzx 4, 5, 4
  01dad44  extsw 4, 4
  01dad48  bl 0x11aeec
  01dad4c  nop
  01dad50  b 0x1dae00
  01dad54  lwz 4, 16(4)
  01dad58  lis 5, 118
  01dad5c  li 3, 4
  01dad60  slwi 4, 4, 2
  01dad64  addic 5, 5, 19128
  01dad68  extsw 4, 4
  01dad6c  lwzx 4, 5, 4
  01dad70  extsw 4, 4
  01dad74  bl 0x11aeec
  01dad78  nop
  01dad7c  b 0x1dae00
  01dad80  lwz 4, 16(4)
  01dad84  lis 3, 118
  01dad88  slwi 4, 4, 2
  01dad8c  addic 5, 3, 19112
  01dad90  extsw 4, 4
  01dad94  li 3, 4
  01dad98  lwzx 4, 5, 4
  01dad9c  extsw 4, 4
  01dada0  bl 0x11aeec
  01dada4  nop
  01dada8  b 0x1dae00
  01dadac  lwz 4, 16(4)
  01dadb0  lis 5, 118
  01dadb4  li 3, 4
  01dadb8  slwi 4, 4, 2
  01dadbc  addic 5, 5, 19172
  01dadc0  extsw 4, 4
  01dadc4  lwzx 4, 5, 4
  01dadc8  extsw 4, 4
  01dadcc  bl 0x11aeec
  01dadd0  nop
  01dadd4  b 0x1dae00
  01dadd8  lwz 4, 16(4)
  01daddc  lis 3, 118
  01dade0  slwi 4, 4, 2
  01dade4  addic 5, 3, 19180
  01dade8  extsw 4, 4
  01dadec  li 3, 4
  01dadf0  lwzx 4, 5, 4
  01dadf4  extsw 4, 4
  01dadf8  bl 0x11aeec
  01dadfc  nop
  01dae00  ld 0, 128(1)
  01dae04  mtlr 0
  01dae08  addi 1, 1, 112
  01dae0c  blr

M1135_001dae10:   # 0x1dae10, 0x58 bytes
  01dae10  ori 6, 3, 0
  01dae14  li 5, 0
  01dae18  ori 4, 5, 0
  01dae1c  lhz 3, 52(6)
  01dae20  ori 8, 3, 1
  01dae24  lwz 3, 120(6)
  01dae28  stw 5, 148(6)
  01dae2c  stb 5, 49(6)
  01dae30  sth 8, 52(6)
  01dae34  lwz 6, 20(3)
  01dae38  cmpwi 6, 0
  01dae3c  bt 2, 0x1dae54
  01dae40  lhz 7, 52(6)
  01dae44  ori 7, 7, 1
  01dae48  sth 7, 52(6)
  01dae4c  lwz 6, 20(3)
  01dae50  stb 5, 49(6)
  01dae54  addic 4, 4, 1
  01dae58  addic 3, 3, 4
  01dae5c  cmpwi 4, 3
  01dae60  bt 0, 0x1dae34
  01dae64  blr

M1135_001dae68:   # 0x1dae68, 0x60 bytes
  01dae68  ori 6, 3, 0
  01dae6c  li 4, 1
  01dae70  li 5, 0
  01dae74  lwz 3, 36(6)
  01dae78  lhz 7, 52(6)
  01dae7c  rlwinm 7, 7, 0, 0, 30
  01dae80  lwz 9, 16(3)
  01dae84  lwz 3, 120(6)
  01dae88  stb 4, 49(6)
  01dae8c  stw 9, 148(6)
  01dae90  sth 7, 52(6)
  01dae94  lwz 6, 20(3)
  01dae98  cmpwi 6, 0
  01dae9c  bt 2, 0x1daeb4
  01daea0  lhz 7, 52(6)
  01daea4  rlwinm 7, 7, 0, 0, 30
  01daea8  sth 7, 52(6)
  01daeac  lwz 6, 20(3)
  01daeb0  stb 4, 49(6)
  01daeb4  addic 5, 5, 1
  01daeb8  addic 3, 3, 4
  01daebc  cmpwi 5, 3
  01daec0  bt 0, 0x1dae94
  01daec4  blr

UpdateMoby_1135:   # 0x1daee8, 0xa28 bytes
  01daee8  stdu 1, -240(1)
  01daeec  mflr 0
  01daef0  std 0, 256(1)
  01daef4  stfd 31, 232(1)
  01daef8  std 31, 224(1)
  01daefc  ori 31, 3, 0
  01daf00  std 30, 216(1)
  01daf04  lis 3, 165
  01daf08  li 30, 0
  01daf0c  std 29, 208(1)
  01daf10  addic 5, 3, 16752
  01daf14  std 25, 176(1)
  01daf18  li 29, 1
  01daf1c  lhz 3, 178(31)
  01daf20  std 27, 192(1)
  01daf24  ori 25, 30, 0
  01daf28  lwz 27, 120(31)
  01daf2c  extsh 4, 3
  01daf30  addc 5, 5, 4
  01daf34  lbz 5, 1108(5)
  01daf38  std 28, 200(1)
  01daf3c  std 26, 184(1)
  01daf40  std 24, 168(1)
  01daf44  cmpwi 5, 0
  01daf48  bf 2, 0x1daf8c
  01daf4c  lis 5, 161
  01daf50  lis 6, 151
  01daf54  srawi 4, 4, 5
  01daf58  addic 5, 5, -13028
  01daf5c  sldi 4, 4, 2
  01daf60  clrlwi 3, 3, 27
  01daf64  addc 4, 4, 5
  01daf68  lwz 5, -25488(6)
  01daf6c  clrldi 4, 4, 32
  01daf70  slwi 5, 5, 8
  01daf74  slw 3, 29, 3
  01daf78  extsw 5, 5
  01daf7c  lwzx 4, 4, 5
  01daf80  and 3, 4, 3
  01daf84  cmpwi 3, 0
  01daf88  bt 2, 0x1daf90
  01daf8c  ori 30, 29, 0
  01daf90  lbz 3, 32(31)
  01daf94  cmpwi 3, 0
  01daf98  bt 2, 0x1db0d4
  01daf9c  lwz 4, 4(27)
  01dafa0  cmpwi 1, 30, 0
  01dafa4  cmpwi 4, -1
  01dafa8  crorc 2, 2, 6
  01dafac  bt 2, 0x1db0d4
  01dafb0  lis 3, 151
  01dafb4  extsw 4, 4
  01dafb8  addic 3, 3, -25376
  01dafbc  addic 3, 3, 128
  01dafc0  bl 0x110b70
  01dafc4  nop
  01dafc8  ori 4, 3, 0
  01dafcc  lbz 3, 32(31)
  01dafd0  cmpwi 4, 0
  01dafd4  bt 2, 0x1db0d4
  01dafd8  lhz 5, 178(31)
  01dafdc  lis 4, 151
  01dafe0  extsh 6, 5
  01dafe4  lis 3, 161
  01dafe8  srawi 6, 6, 5
  01dafec  addic 3, 3, -13028
  01daff0  lwz 4, -25488(4)
  01daff4  sldi 6, 6, 2
  01daff8  slwi 4, 4, 8
  01daffc  addc 3, 6, 3
  01db000  extsh 6, 5
  01db004  extsw 4, 4
  01db008  clrldi 3, 3, 32
  01db00c  lis 7, 165
  01db010  srawi 6, 6, 5
  01db014  clrlwi 8, 5, 27
  01db018  addic 7, 7, 19920
  01db01c  sldi 6, 6, 2
  01db020  lwzx 9, 3, 4
  01db024  slw 8, 29, 8
  01db028  clrlwi 5, 5, 27
  01db02c  or 8, 9, 8
  01db030  slw 5, 29, 5
  01db034  lwzx 9, 7, 6
  01db038  or 5, 9, 5
  01db03c  stwx 8, 3, 4
  01db040  stwx 5, 7, 6
  01db044  lbz 3, 33(31)
  01db048  cmpwi 3, 255
  01db04c  bt 2, 0x1db060
  01db050  li 4, 1
  01db054  bl 0x1042ec
  01db058  nop
  01db05c  b 0x1db064
  01db060  stb 29, 32(31)
  01db064  lwz 4, 36(31)
  01db068  ori 3, 25, 0
  01db06c  lhz 5, 52(31)
  01db070  rlwinm 7, 5, 0, 0, 30
  01db074  lwz 5, 120(31)
  01db078  lwz 4, 16(4)
  01db07c  stb 29, 49(31)
  01db080  stw 4, 148(31)
  01db084  sth 7, 52(31)
  01db088  lwz 4, 20(5)
  01db08c  cmpwi 4, 0
  01db090  bt 2, 0x1db0a8
  01db094  lhz 6, 52(4)
  01db098  rlwinm 6, 6, 0, 0, 30
  01db09c  sth 6, 52(4)
  01db0a0  lwz 4, 20(5)
  01db0a4  stb 29, 49(4)
  01db0a8  addic 3, 3, 1
  01db0ac  addic 5, 5, 4
  01db0b0  cmpwi 3, 3
  01db0b4  bt 0, 0x1db088
  01db0b8  lbz 3, 32(31)
  01db0bc  ori 30, 29, 0
  01db0c0  cmpwi 3, 5
  01db0c4  bf 2, 0x1db0d4
  01db0c8  ori 3, 29, 0
  01db0cc  stb 29, 32(31)
  01db0d0  ori 30, 3, 0
  01db0d4  lwz 4, 60(27)
  01db0d8  cmpwi 4, 0
  01db0dc  bt 2, 0x1db124
  01db0e0  lis 4, 151
  01db0e4  lwz 4, -13828(4)
  01db0e8  cmpwi 4, 0
  01db0ec  bt 2, 0x1db110
  01db0f0  lwz 5, 36(31)
  01db0f4  li 4, -66
  01db0f8  lhz 6, 52(31)
  01db0fc  and 4, 6, 4
  01db100  lwz 5, 16(5)
  01db104  stw 5, 148(31)
  01db108  sth 4, 52(31)
  01db10c  b 0x1db124
  01db110  lhz 3, 52(31)
  01db114  stw 25, 148(31)
  01db118  ori 3, 3, 65
  01db11c  sth 3, 52(31)
  01db120  b 0x1db8dc
  01db124  cmpwi 3, 3
  01db128  cmpwi 6, 3, 0
  01db12c  cmpwi 1, 3, 6
  01db130  bt 1, 0x1db158
  01db134  cmpwi 1, 3, -1
  01db138  cmpwi 7, 3, 1
  01db13c  bt 25, 0x1db148
  01db140  bf 5, 0x1db8dc
  01db144  b 0x1db184
  01db148  cmpwi 1, 3, 2
  01db14c  bf 29, 0x1db308
  01db150  bf 5, 0x1db51c
  01db154  b 0x1db658
  01db158  cmpwi 6, 3, 4
  01db15c  cmpwi 7, 3, 7
  01db160  bt 5, 0x1db174
  01db164  cmpwi 1, 3, 5
  01db168  bf 25, 0x1db7ac
  01db16c  bf 5, 0x1db8dc
  01db170  b 0x1db2ec
  01db174  cmpwi 1, 3, 8
  01db178  bf 29, 0x1db414
  01db17c  bf 5, 0x1db7ac
  01db180  b 0x1db8dc
  01db184  lis 4, 30
  01db188  li 3, 255
  01db18c  addi 4, 4, -20792
  01db190  lis 24, 151
  01db194  ori 28, 25, 0
  01db198  stb 3, 48(31)
  01db19c  ori 26, 27, 0
  01db1a0  addic 24, 24, -25376
  01db1a4  lfs 31, 0(4)
  01db1a8  li 3, 315
  01db1ac  bl 0xefa28
  01db1b0  nop
  01db1b4  li 4, 64
  01db1b8  stw 3, 20(26)
  01db1bc  sth 4, 50(3)
  01db1c0  extsw 3, 28
  01db1c4  std 3, 144(1)
  01db1c8  lwz 3, 20(26)
  01db1cc  stb 29, 49(3)
  01db1d0  lwz 3, 8320(24)
  01db1d4  lwz 4, 20(26)
  01db1d8  ld 3, 56(3)
  01db1dc  std 3, 56(4)
  01db1e0  lwz 3, 20(26)
  01db1e4  lhz 4, 52(31)
  01db1e8  sth 4, 52(3)
  01db1ec  lwz 3, 20(26)
  01db1f0  lfs 1, 16(31)
  01db1f4  stfs 1, 16(3)
  01db1f8  lfs 1, 20(31)
  01db1fc  stfs 1, 20(3)
  01db200  lfs 1, 24(31)
  01db204  stfs 1, 24(3)
  01db208  lfs 1, 28(31)
  01db20c  stfs 1, 28(3)
  01db210  lwz 3, 20(26)
  01db214  lfs 1, 64(31)
  01db218  stfs 1, 64(3)
  01db21c  lfs 1, 68(31)
  01db220  stfs 1, 68(3)
  01db224  lfs 1, 72(31)
  01db228  stfs 1, 72(3)
  01db22c  lfs 1, 76(31)
  01db230  stfs 1, 76(3)
  01db234  lfd 1, 144(1)
  01db238  lwz 3, 20(26)
  01db23c  fcfid 2, 1
  01db240  lfs 1, 72(3)
  01db244  frsp 2, 2
  01db248  fmuls 2, 2, 31
  01db24c  bl 0x502578
  01db250  nop
  01db254  lwz 3, 20(26)
  01db258  addic 28, 28, 1
  01db25c  addic 26, 26, 4
  01db260  cmpwi 28, 3
  01db264  stfs 1, 72(3)
  01db268  bt 0, 0x1db1a8
  01db26c  lwz 3, 56(27)
  01db270  cmpwi 1, 30, 0
  01db274  cmpwi 3, 0
  01db278  bf 2, 0x1db280
  01db27c  bt 6, 0x1db28c
  01db280  li 3, 6
  01db284  stb 3, 32(31)
  01db288  b 0x1db2e0
  01db28c  li 4, 5
  01db290  lhz 5, 52(31)
  01db294  ori 3, 25, 0
  01db298  ori 7, 5, 1
  01db29c  lwz 5, 120(31)
  01db2a0  stb 4, 32(31)
  01db2a4  stw 25, 148(31)
  01db2a8  stb 25, 49(31)
  01db2ac  sth 7, 52(31)
  01db2b0  lwz 4, 20(5)
  01db2b4  cmpwi 4, 0
  01db2b8  bt 2, 0x1db2d0
  01db2bc  lhz 6, 52(4)
  01db2c0  ori 6, 6, 1
  01db2c4  sth 6, 52(4)
  01db2c8  lwz 4, 20(5)
  01db2cc  stb 25, 49(4)
  01db2d0  addic 3, 3, 1
  01db2d4  addic 5, 5, 4
  01db2d8  cmpwi 3, 3
  01db2dc  bt 0, 0x1db2b0
  01db2e0  ori 3, 31, 0
  01db2e4  bl 0x1daac8
  01db2e8  b 0x1db8dc
  01db2ec  lbz 3, 33(31)
  01db2f0  cmpwi 3, 255
  01db2f4  bt 2, 0x1db304
  01db2f8  li 4, 1
  01db2fc  bl 0x1042ec
  01db300  nop
  01db304  stb 29, 32(31)
  01db308  lwz 3, 8(27)
  01db30c  cmpwi 3, -1
  01db310  bf 1, 0x1db340
  01db314  lis 4, 151
  01db318  lis 5, 161
  01db31c  addic 5, 5, -13692
  01db320  lwz 4, -25488(4)
  01db324  addc 3, 3, 5
  01db328  slwi 4, 4, 4
  01db32c  clrldi 3, 3, 32
  01db330  extsw 4, 4
  01db334  lbzx 3, 3, 4
  01db338  cmpwi 3, 255
  01db33c  bf 2, 0x1db8dc
  01db340  lwz 3, 0(27)
  01db344  cmpwi 3, -1
  01db348  bt 2, 0x1db8dc
  01db34c  lis 3, 151
  01db350  addic 3, 3, -25376
  01db354  lbz 4, 8356(3)
  01db358  cmpwi 4, 2
  01db35c  bt 2, 0x1db8dc
  01db360  lwz 4, 764(3)
  01db364  cmpw 4, 31
  01db368  bf 2, 0x1db8dc
  01db36c  lhz 3, 782(3)
  01db370  cmpwi 3, 0
  01db374  bf 2, 0x1db8dc
  01db378  ori 3, 31, 0
  01db37c  bl 0x1dac9c
  01db380  lis 3, 150
  01db384  addic 3, 3, 19008
  01db388  lwz 3, 164(3)
  01db38c  rlwinm 3, 3, 0, 27, 27
  01db390  cmpwi 3, 0
  01db394  bt 2, 0x1db8dc
  01db398  li 3, 0
  01db39c  li 4, 0
  01db3a0  ori 5, 31, 0
  01db3a4  bl 0x15d12c
  01db3a8  nop
  01db3ac  li 3, 2
  01db3b0  li 4, -1
  01db3b4  addic 30, 31, 16
  01db3b8  li 5, 0
  01db3bc  stb 3, 32(31)
  01db3c0  stw 25, 40(27)
  01db3c4  ori 3, 30, 0
  01db3c8  stw 25, 44(27)
  01db3cc  lfs 1, 72(31)
  01db3d0  stw 4, 48(27)
  01db3d4  bl 0xaa368
  01db3d8  nop
  01db3dc  lis 4, 30
  01db3e0  std 25, 112(1)
  01db3e4  ori 3, 31, 0
  01db3e8  addi 5, 4, -20792
  01db3ec  ori 4, 30, 0
  01db3f0  lis 6, 1
  01db3f4  li 9, 0
  01db3f8  li 10, 1
  01db3fc  lfs 1, 4(5)
  01db400  lfs 2, 8(5)
  01db404  lfs 3, 12(5)
  01db408  bl 0x105870
  01db40c  nop
  01db410  b 0x1db8dc
  01db414  lis 3, 30
  01db418  lwz 5, 32(27)
  01db41c  lis 4, 16256
  01db420  addi 3, 3, -20792
  01db424  srawi 6, 5, 31
  01db428  lfs 1, 12(3)
  01db42c  srwi 3, 6, 1
  01db430  xor 3, 3, 5
  01db434  subc 3, 3, 6
  01db438  cmpw 3, 4
  01db43c  bf 0, 0x1db488
  01db440  lis 4, 118
  01db444  lis 7, 114
  01db448  lis 6, 118
  01db44c  lis 9, 118
  01db450  lis 8, 114
  01db454  lfs 2, 18924(4)
  01db458  lfs 3, -3048(7)
  01db45c  addic 3, 27, 32
  01db460  lfs 4, 18932(6)
  01db464  addic 5, 27, 40
  01db468  lfs 5, 18928(9)
  01db46c  fmuls 2, 2, 3
  01db470  lfs 6, -3052(8)
  01db474  fmuls 3, 5, 3
  01db478  fmuls 4, 4, 6
  01db47c  bl 0x109c30
  01db480  nop
  01db484  b 0x1db510
  01db488  lwz 4, 36(27)
  01db48c  lis 3, 16256
  01db490  srawi 5, 4, 31
  01db494  srwi 6, 5, 1
  01db498  xor 4, 6, 4
  01db49c  subc 4, 4, 5
  01db4a0  cmpw 4, 3
  01db4a4  bf 0, 0x1db4f0
  01db4a8  lis 4, 118
  01db4ac  lis 7, 114
  01db4b0  lis 6, 118
  01db4b4  lis 9, 118
  01db4b8  lis 8, 114
  01db4bc  lfs 2, 18924(4)
  01db4c0  lfs 3, -3048(7)
  01db4c4  addic 3, 27, 36
  01db4c8  lfs 4, 18932(6)
  01db4cc  addic 5, 27, 44
  01db4d0  lfs 5, 18928(9)
  01db4d4  fmuls 2, 2, 3
  01db4d8  lfs 6, -3052(8)
  01db4dc  fmuls 3, 5, 3
  01db4e0  fmuls 4, 4, 6
  01db4e4  bl 0x109c30
  01db4e8  nop
  01db4ec  b 0x1db510
  01db4f0  li 3, 1
  01db4f4  li 4, 0
  01db4f8  ori 5, 31, 0
  01db4fc  bl 0x15d12c
  01db500  nop
  01db504  li 3, 8
  01db508  stb 3, 32(31)
  01db50c  stw 25, 52(27)
  01db510  ori 3, 31, 0
  01db514  bl 0x1daac8
  01db518  b 0x1db8dc
  01db51c  bl 0x85a10
  01db520  nop
  01db524  lwz 4, 32(27)
  01db528  lis 5, 30
  01db52c  srawi 6, 4, 31
  01db530  addi 5, 5, -20792
  01db534  srwi 7, 6, 1
  01db538  xor 4, 7, 4
  01db53c  lis 7, 16256
  01db540  subc 4, 4, 6
  01db544  lfs 1, 12(5)
  01db548  cmpw 4, 7
  01db54c  bf 0, 0x1db598
  01db550  lis 3, 118
  01db554  lis 4, 114
  01db558  lis 6, 114
  01db55c  lis 7, 118
  01db560  lis 8, 118
  01db564  lfs 2, 18924(3)
  01db568  addic 5, 27, 40
  01db56c  lfs 3, -3048(4)
  01db570  addic 3, 27, 32
  01db574  lfs 4, -3052(6)
  01db578  lfs 5, 18928(7)
  01db57c  lfs 6, 18932(8)
  01db580  fmuls 2, 2, 3
  01db584  fmuls 3, 5, 3
  01db588  fmuls 4, 6, 4
  01db58c  bl 0x109c30
  01db590  nop
  01db594  b 0x1db64c
  01db598  lwz 6, 36(27)
  01db59c  lis 5, 16256
  01db5a0  srawi 7, 6, 31
  01db5a4  srwi 8, 7, 1
  01db5a8  xor 6, 8, 6
  01db5ac  subc 6, 6, 7
  01db5b0  cmpw 6, 5
  01db5b4  bf 0, 0x1db600
  01db5b8  lis 3, 118
  01db5bc  lis 4, 114
  01db5c0  lis 6, 114
  01db5c4  lis 7, 118
  01db5c8  lis 8, 118
  01db5cc  lfs 2, 18924(3)
  01db5d0  addic 5, 27, 44
  01db5d4  lfs 3, -3048(4)
  01db5d8  addic 3, 27, 36
  01db5dc  lfs 4, -3052(6)
  01db5e0  lfs 5, 18928(7)
  01db5e4  lfs 6, 18932(8)
  01db5e8  fmuls 2, 2, 3
  01db5ec  fmuls 3, 5, 3
  01db5f0  fmuls 4, 6, 4
  01db5f4  bl 0x109c30
  01db5f8  nop
  01db5fc  b 0x1db64c
  01db600  lis 5, 161
  01db604  lwz 5, 24360(5)
  01db608  cmpwi 5, 4
  01db60c  bf 2, 0x1db61c
  01db610  lis 5, 16000
  01db614  cmpw 4, 5
  01db618  bt 1, 0x1db64c
  01db61c  cmpwi 3, 2
  01db620  bf 2, 0x1db63c
  01db624  lis 3, 16377
  01db628  li 4, 3
  01db62c  ori 3, 3, 39322
  01db630  stw 3, 52(27)
  01db634  stb 4, 32(31)
  01db638  b 0x1db64c
  01db63c  cmpwi 3, 0
  01db640  bf 2, 0x1db64c
  01db644  li 3, 4
  01db648  stb 3, 32(31)
  01db64c  ori 3, 31, 0
  01db650  bl 0x1daac8
  01db654  b 0x1db8dc
  01db658  lis 3, 30
  01db65c  lwz 4, 52(27)
  01db660  addi 3, 3, -20792
  01db664  cmpwi 4, 0
  01db668  lfs 31, 16(3)
  01db66c  bt 2, 0x1db6b0
  01db670  lis 3, 113
  01db674  ori 4, 31, 0
  01db678  addic 3, 3, -28912
  01db67c  bl 0x6d720
  01db680  nop
  01db684  lis 3, 30
  01db688  lis 5, 114
  01db68c  fmr 1, 31
  01db690  addi 4, 3, -20792
  01db694  addic 3, 27, 52
  01db698  lfs 2, 20(4)
  01db69c  lfs 3, -3052(5)
  01db6a0  fmuls 2, 3, 2
  01db6a4  bl 0x109af0
  01db6a8  nop
  01db6ac  b 0x1db8dc
  01db6b0  lis 3, 164
  01db6b4  lwz 5, 0(27)
  01db6b8  lis 4, 30
  01db6bc  slwi 5, 5, 8
  01db6c0  li 6, 1
  01db6c4  lwz 3, -28512(3)
  01db6c8  addc 30, 3, 5
  01db6cc  addi 3, 4, -20792
  01db6d0  clrldi 30, 30, 32
  01db6d4  li 5, 0
  01db6d8  addic 4, 30, 64
  01db6dc  lfs 1, 16(30)
  01db6e0  lwz 28, 120(30)
  01db6e4  stfs 1, 128(1)
  01db6e8  lfs 1, 20(30)
  01db6ec  stfs 1, 132(1)
  01db6f0  lfs 1, 24(30)
  01db6f4  stfs 1, 136(1)
  01db6f8  lfs 2, 28(30)
  01db6fc  stfs 2, 140(1)
  01db700  lfs 2, 24(3)
  01db704  addic 3, 1, 128
  01db708  fadds 1, 1, 2
  01db70c  stfs 1, 136(1)
  01db710  bl 0xa0c38
  01db714  nop
  01db718  lis 3, 151
  01db71c  addic 3, 3, -25376
  01db720  stb 29, 8357(3)
  01db724  lwz 3, 64(27)
  01db728  cmpwi 3, -1
  01db72c  bt 2, 0x1db74c
  01db730  lwz 4, 68(27)
  01db734  cmpwi 4, -1
  01db738  bt 2, 0x1db74c
  01db73c  extsw 3, 3
  01db740  extsw 4, 4
  01db744  bl 0x11ccc8
  01db748  nop
  01db74c  li 6, 4
  01db750  lis 7, 16256
  01db754  li 4, 0
  01db758  li 3, 1
  01db75c  stb 6, 32(30)
  01db760  stw 7, 32(28)
  01db764  ori 5, 30, 0
  01db768  stw 7, 36(28)
  01db76c  stw 25, 40(28)
  01db770  stw 25, 44(28)
  01db774  stw 25, 52(28)
  01db778  bl 0x15d12c
  01db77c  nop
  01db780  lis 4, 16377
  01db784  stb 29, 32(31)
  01db788  stw 25, 32(27)
  01db78c  ori 3, 31, 0
  01db790  ori 4, 4, 39322
  01db794  stw 25, 36(27)
  01db798  stw 25, 40(27)
  01db79c  stw 25, 44(27)
  01db7a0  stw 4, 52(27)
  01db7a4  bl 0x1daac8
  01db7a8  b 0x1db8dc
  01db7ac  lis 3, 30
  01db7b0  lwz 5, 52(27)
  01db7b4  lis 4, 16377
  01db7b8  addi 3, 3, -20792
  01db7bc  srawi 6, 5, 31
  01db7c0  ori 4, 4, 39322
  01db7c4  lfs 31, 28(3)
  01db7c8  srwi 3, 6, 1
  01db7cc  xor 3, 3, 5
  01db7d0  subc 3, 3, 6
  01db7d4  cmpw 3, 4
  01db7d8  bf 0, 0x1db81c
  01db7dc  lis 3, 113
  01db7e0  ori 4, 31, 0
  01db7e4  addic 3, 3, -28912
  01db7e8  bl 0x6d720
  01db7ec  nop
  01db7f0  lis 3, 30
  01db7f4  lis 5, 114
  01db7f8  fmr 1, 31
  01db7fc  addi 4, 3, -20792
  01db800  addic 3, 27, 52
  01db804  lfs 2, 20(4)
  01db808  lfs 3, -3052(5)
  01db80c  fmuls 2, 3, 2
  01db810  bl 0x109af0
  01db814  nop
  01db818  b 0x1db8d4
  01db81c  lis 3, 30
  01db820  lwz 4, 36(27)
  01db824  addi 3, 3, -20792
  01db828  cmpwi 4, 0
  01db82c  lfs 1, 16(3)
  01db830  bf 1, 0x1db87c
  01db834  lis 4, 118
  01db838  lis 7, 114
  01db83c  lis 6, 118
  01db840  lis 9, 118
  01db844  lis 8, 114
  01db848  lfs 2, 18924(4)
  01db84c  lfs 3, -3048(7)
  01db850  addic 3, 27, 36
  01db854  lfs 4, 18932(6)
  01db858  addic 5, 27, 40
  01db85c  lfs 5, 18928(9)
  01db860  fmuls 2, 2, 3
  01db864  lfs 6, -3052(8)
  01db868  fmuls 3, 5, 3
  01db86c  fmuls 4, 4, 6
  01db870  bl 0x109c30
  01db874  nop
  01db878  b 0x1db8d4
  01db87c  lwz 3, 32(27)
  01db880  cmpwi 3, 0
  01db884  bf 1, 0x1db8d0
  01db888  lis 3, 118
  01db88c  lis 4, 114
  01db890  lis 6, 114
  01db894  lis 7, 118
  01db898  lis 8, 118
  01db89c  lfs 2, 18924(3)
  01db8a0  addic 5, 27, 44
  01db8a4  lfs 3, -3048(4)
  01db8a8  addic 3, 27, 32
  01db8ac  lfs 4, -3052(6)
  01db8b0  lfs 5, 18928(7)
  01db8b4  lfs 6, 18932(8)
  01db8b8  fmuls 2, 2, 3
  01db8bc  fmuls 3, 5, 3
  01db8c0  fmuls 4, 6, 4
  01db8c4  bl 0x109c30
  01db8c8  nop
  01db8cc  b 0x1db8d4
  01db8d0  stb 29, 32(31)
  01db8d4  ori 3, 31, 0
  01db8d8  bl 0x1daac8
  01db8dc  ld 0, 256(1)
  01db8e0  mtlr 0
  01db8e4  lfd 31, 232(1)
  01db8e8  ld 24, 168(1)
  01db8ec  ld 25, 176(1)
  01db8f0  ld 26, 184(1)
  01db8f4  ld 27, 192(1)
  01db8f8  ld 28, 200(1)
  01db8fc  ld 29, 208(1)
  01db900  ld 30, 216(1)
  01db904  ld 31, 224(1)
  01db908  addi 1, 1, 240
  01db90c  blr

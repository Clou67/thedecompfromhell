# game/update/moby716.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M716_004317b4:   # 0x4317b4, 0xcc bytes
  04317b4  stdu 1, -128(1)
  04317b8  mflr 0
  04317bc  std 0, 144(1)
  04317c0  std 31, 120(1)
  04317c4  cmpwi 3, 0
  04317c8  ori 31, 3, 0
  04317cc  bt 2, 0x43186c
  04317d0  cmpwi 4, 0
  04317d4  cmpwi 1, 4, 1
  04317d8  cmpwi 6, 4, 2
  04317dc  cmpwi 7, 4, -1
  04317e0  bt 1, 0x4317ec
  04317e4  bf 29, 0x43186c
  04317e8  b 0x4317f8
  04317ec  bt 25, 0x43186c
  04317f0  bf 5, 0x43186c
  04317f4  b 0x431834
  04317f8  lbz 3, 32(31)
  04317fc  cmpwi 3, 2
  0431800  bf 2, 0x43186c
  0431804  lbz 3, 83(31)
  0431808  cmpwi 3, 5
  043180c  bt 2, 0x431828
  0431810  ori 3, 31, 0
  0431814  li 4, 5
  0431818  li 5, 0
  043181c  li 6, 10
  0431820  bl 0xfddc0
  0431824  nop
  0431828  li 3, 5
  043182c  stb 3, 32(31)
  0431830  b 0x43186c
  0431834  lbz 3, 32(31)
  0431838  cmpwi 3, 2
  043183c  bf 2, 0x43186c
  0431840  lbz 3, 83(31)
  0431844  cmpwi 3, 6
  0431848  bt 2, 0x431864
  043184c  ori 3, 31, 0
  0431850  li 4, 6
  0431854  li 5, 0
  0431858  li 6, 10
  043185c  bl 0xfddc0
  0431860  nop
  0431864  li 3, 6
  0431868  stb 3, 32(31)
  043186c  ld 0, 144(1)
  0431870  mtlr 0
  0431874  ld 31, 120(1)
  0431878  addi 1, 1, 128
  043187c  blr

M716_00431880:   # 0x431880, 0x14 bytes
  0431880  lis 3, 134
  0431884  lis 4, 1
  0431888  addic 3, 3, -24996
  043188c  stw 4, 72(3)
  0431890  blr

UpdateMoby_716:   # 0x4318a8, 0x164 bytes
  04318a8  stdu 1, -128(1)
  04318ac  mflr 0
  04318b0  std 0, 144(1)
  04318b4  std 31, 120(1)
  04318b8  lbz 4, 32(3)
  04318bc  std 30, 112(1)
  04318c0  ori 31, 3, 0
  04318c4  lwz 30, 120(3)
  04318c8  cmpwi 4, 0
  04318cc  cmpwi 1, 4, 1
  04318d0  cmpwi 6, 4, -1
  04318d4  bt 1, 0x4318e0
  04318d8  bf 25, 0x4319f4
  04318dc  b 0x4318e8
  04318e0  bf 5, 0x4318fc
  04318e4  b 0x4319f4
  04318e8  li 3, 0
  04318ec  li 4, 1
  04318f0  stw 3, 8(30)
  04318f4  stb 4, 32(31)
  04318f8  b 0x4319f4
  04318fc  addic 3, 30, 8
  0431900  bl 0x4fff60
  0431904  nop
  0431908  cmpwi 3, 0
  043190c  bt 2, 0x4319f4
  0431910  lis 3, 151
  0431914  lfs 1, 20(31)
  0431918  addic 3, 3, -25376
  043191c  lis 4, 134
  0431920  lfs 2, 132(3)
  0431924  lfs 3, 128(3)
  0431928  fsubs 1, 2, 1
  043192c  lfs 2, 16(31)
  0431930  fsubs 2, 3, 2
  0431934  lfs 3, 136(3)
  0431938  lfs 4, 24(31)
  043193c  fsubs 3, 3, 4
  0431940  fmuls 1, 1, 1
  0431944  fmadds 1, 2, 2, 1
  0431948  lfs 2, -24888(4)
  043194c  fmadds 1, 3, 3, 1
  0431950  fsqrts 1, 1
  0431954  fcmpu 0, 1, 2
  0431958  cror 6, 1, 2
  043195c  bt 6, 0x4319f4
  0431960  li 4, 16
  0431964  lvlx 2, 0, 30
  0431968  lis 5, 67
  043196c  vspltisw 4, -1
  0431970  li 6, -3056
  0431974  addi 5, 5, 6296
  0431978  lvrx 3, 4, 30
  043197c  lis 4, 114
  0431980  vor 2, 2, 3
  0431984  lvlx 3, 0, 5
  0431988  vslw 4, 4, 4
  043198c  vspltw 3, 3, 0
  0431990  vcfsx 2, 2, 0
  0431994  lvlx 5, 6, 4
  0431998  li 4, 2148
  043199c  li 6, 4
  04319a0  li 7, 8
  04319a4  vaddfp 2, 2, 3
  04319a8  lvlx 3, 4, 3
  04319ac  lvlx 6, 6, 5
  04319b0  li 6, 8
  04319b4  vmaddfp 2, 5, 2, 4
  04319b8  vspltw 4, 6, 0
  04319bc  vspltisw 6, -1
  04319c0  vslw 6, 6, 6
  04319c4  vctsxs 2, 2, 0
  04319c8  vadduwm 2, 3, 2
  04319cc  vcmpgtsw 3, 2, 4
  04319d0  vsel 2, 2, 4, 3
  04319d4  vspltw 2, 2, 0
  04319d8  stvewx 2, 4, 3
  04319dc  lvlx 2, 7, 5
  04319e0  vspltw 2, 2, 0
  04319e4  vmaddfp 2, 5, 2, 6
  04319e8  vctsxs 2, 2, 0
  04319ec  vspltw 2, 2, 0
  04319f0  stvewx 2, 6, 30
  04319f4  ld 0, 144(1)
  04319f8  mtlr 0
  04319fc  ld 30, 112(1)
  0431a00  ld 31, 120(1)
  0431a04  addi 1, 1, 128
  0431a08  blr

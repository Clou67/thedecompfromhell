# game/mobyfunc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBYFUNC:   # 0xef6b8, 0x14 bytes
  00ef6b8  lis 3, 115
  00ef6bc  lis 4, 1
  00ef6c0  addic 3, 3, -28680
  00ef6c4  stw 4, 72(3)
  00ef6c8  blr

UpdateNumSpawnableMobys:   # 0xef6d0, 0x7c bytes
  00ef6d0  lis 3, 164
  00ef6d4  lis 6, 165
  00ef6d8  li 4, 0
  00ef6dc  lis 5, 164
  00ef6e0  lwz 7, -28508(3)
  00ef6e4  stw 4, -9488(6)
  00ef6e8  lwz 5, -28504(5)
  00ef6ec  cmplw 7, 5
  00ef6f0  bf 0, 0xef748
  00ef6f4  lis 3, 161
  00ef6f8  ori 8, 4, 0
  00ef6fc  lwz 3, 1808(3)
  00ef700  clrldi 3, 3, 32
  00ef704  lbz 9, 32(7)
  00ef708  cmpwi 9, 254
  00ef70c  bt 0, 0xef71c
  00ef710  ld 9, 56(7)
  00ef714  cmpld 3, 9
  00ef718  bf 0, 0xef724
  00ef71c  cmpwi 8, 0
  00ef720  bt 2, 0xef73c
  00ef724  addic 4, 4, 1
  00ef728  stw 4, -9488(6)
  00ef72c  lbz 9, 32(7)
  00ef730  cmpwi 9, 255
  00ef734  bf 2, 0xef73c
  00ef738  li 8, 1
  00ef73c  addic 7, 7, 256
  00ef740  cmplw 7, 5
  00ef744  bt 0, 0xef704
  00ef748  blr

UpdateMobyFrameData:   # 0xef74c, 0xbc bytes
  00ef74c  lbz 6, 82(3)
  00ef750  lbz 5, 83(3)
  00ef754  cmpwi 6, 255
  00ef758  lbz 4, 81(3)
  00ef75c  bt 2, 0xef7b4
  00ef760  rlwinm 7, 6, 2, 22, 29
  00ef764  lwz 8, 36(3)
  00ef768  slwi 6, 6, 2
  00ef76c  lbz 9, 80(3)
  00ef770  addc 7, 8, 7
  00ef774  slwi 9, 9, 2
  00ef778  clrldi 7, 7, 32
  00ef77c  addc 6, 8, 6
  00ef780  clrldi 10, 6, 32
  00ef784  ori 6, 8, 0
  00ef788  lwz 7, 72(7)
  00ef78c  addc 9, 7, 9
  00ef790  clrldi 9, 9, 32
  00ef794  lwz 8, 28(9)
  00ef798  stw 8, 104(3)
  00ef79c  lwz 8, 72(10)
  00ef7a0  lbz 8, 18(8)
  00ef7a4  stb 8, 126(3)
  00ef7a8  lbz 7, 17(7)
  00ef7ac  stb 7, 124(3)
  00ef7b0  b 0xef7e0
  00ef7b4  li 7, 0
  00ef7b8  lbz 9, 80(3)
  00ef7bc  lis 6, 163
  00ef7c0  li 8, 255
  00ef7c4  addic 6, 6, -14912
  00ef7c8  slwi 9, 9, 11
  00ef7cc  stb 7, 126(3)
  00ef7d0  addc 7, 6, 9
  00ef7d4  stb 8, 124(3)
  00ef7d8  lwz 6, 36(3)
  00ef7dc  stw 7, 104(3)
  00ef7e0  rlwinm 5, 5, 2, 22, 29
  00ef7e4  rlwinm 4, 4, 2, 22, 29
  00ef7e8  addc 5, 6, 5
  00ef7ec  clrldi 5, 5, 32
  00ef7f0  lwz 5, 72(5)
  00ef7f4  addc 4, 5, 4
  00ef7f8  clrldi 4, 4, 32
  00ef7fc  lwz 4, 28(4)
  00ef800  stw 4, 108(3)
  00ef804  blr

InitMobyInstance:   # 0xef810, 0x218 bytes
  00ef810  stdu 1, -144(1)
  00ef814  mflr 0
  00ef818  std 0, 160(1)
  00ef81c  std 31, 136(1)
  00ef820  lis 5, 15
  00ef824  std 30, 128(1)
  00ef828  ori 31, 3, 0
  00ef82c  std 29, 120(1)
  00ef830  ori 30, 4, 0
  00ef834  addi 29, 5, -2040
  00ef838  li 4, 0
  00ef83c  li 5, 256
  00ef840  bl 0x5001fc
  00ef844  nop
  00ef848  lis 3, 163
  00ef84c  li 6, 128
  00ef850  addic 3, 3, 21696
  00ef854  lis 4, 164
  00ef858  li 5, 255
  00ef85c  li 8, 32640
  00ef860  li 7, 0
  00ef864  lbzx 3, 3, 30
  00ef868  li 11, 127
  00ef86c  sth 30, 166(31)
  00ef870  stb 3, 34(31)
  00ef874  stb 6, 35(31)
  00ef878  ld 9, 0(29)
  00ef87c  lwz 4, -28512(4)
  00ef880  stb 5, 164(31)
  00ef884  subc 10, 31, 4
  00ef888  stb 5, 33(31)
  00ef88c  stb 5, 113(31)
  00ef890  subc 4, 31, 4
  00ef894  srawi 10, 10, 8
  00ef898  stb 5, 114(31)
  00ef89c  std 9, 56(31)
  00ef8a0  addze 9, 10
  00ef8a4  sth 8, 54(31)
  00ef8a8  srawi 8, 4, 8
  00ef8ac  slwi 9, 9, 16
  00ef8b0  stb 7, 126(31)
  00ef8b4  rlwinm 4, 3, 2, 22, 29
  00ef8b8  stb 5, 124(31)
  00ef8bc  addze 3, 8
  00ef8c0  lis 7, 163
  00ef8c4  stw 9, 168(31)
  00ef8c8  stb 5, 125(31)
  00ef8cc  addic 7, 7, 20352
  00ef8d0  stw 3, 172(31)
  00ef8d4  stb 11, 160(31)
  00ef8d8  stb 11, 161(31)
  00ef8dc  stb 6, 162(31)
  00ef8e0  stb 6, 163(31)
  00ef8e4  lwzx 5, 7, 4
  00ef8e8  lhz 3, 52(31)
  00ef8ec  cmpwi 5, 0
  00ef8f0  stw 5, 116(31)
  00ef8f4  bf 2, 0xef900
  00ef8f8  ori 3, 3, 2
  00ef8fc  sth 3, 52(31)
  00ef900  lis 5, 163
  00ef904  addic 5, 5, 19456
  00ef908  lwzx 4, 5, 4
  00ef90c  cmpwi 4, 0
  00ef910  bt 2, 0xef9f8
  00ef914  stw 4, 36(31)
  00ef918  lis 5, 16256
  00ef91c  lhz 6, 68(4)
  00ef920  or 3, 3, 6
  00ef924  sth 3, 52(31)
  00ef928  lwz 6, 16(4)
  00ef92c  stw 6, 148(31)
  00ef930  lfs 1, 36(4)
  00ef934  stw 5, 88(31)
  00ef938  stfs 1, 44(31)
  00ef93c  stw 5, 92(31)
  00ef940  lwz 5, 64(4)
  00ef944  cmpwi 5, 0
  00ef948  bt 2, 0xef958
  00ef94c  ori 3, 3, 16
  00ef950  sth 3, 52(31)
  00ef954  stw 5, 144(31)
  00ef958  lbz 5, 15(4)
  00ef95c  cmpwi 5, 0
  00ef960  bt 2, 0xef984
  00ef964  ori 3, 3, 1024
  00ef968  li 5, 24
  00ef96c  li 6, 0
  00ef970  sth 3, 52(31)
  00ef974  stb 5, 127(31)
  00ef978  stw 6, 132(31)
  00ef97c  stw 6, 136(31)
  00ef980  stb 6, 189(31)
  00ef984  lwz 3, 72(4)
  00ef988  cmpwi 3, 0
  00ef98c  bt 2, 0xefa0c
  00ef990  ori 3, 31, 0
  00ef994  bl 0xef74c
  00ef998  lwz 3, 36(31)
  00ef99c  lhz 4, 52(31)
  00ef9a0  lwz 5, 72(3)
  00ef9a4  lbz 3, 12(3)
  00ef9a8  lbz 6, 16(5)
  00ef9ac  cmpwi 6, 1
  00ef9b0  bf 1, 0xef9c0
  00ef9b4  li 6, 0
  00ef9b8  rlwimi 4, 6, 0, 30, 30
  00ef9bc  sth 4, 52(31)
  00ef9c0  cmpwi 3, 1
  00ef9c4  bf 2, 0xefa0c
  00ef9c8  lbz 3, 16(5)
  00ef9cc  cmpwi 3, 1
  00ef9d0  bt 1, 0xefa0c
  00ef9d4  li 3, 0
  00ef9d8  stw 3, 88(31)
  00ef9dc  lbz 3, 17(5)
  00ef9e0  extsb 3, 3
  00ef9e4  cmpwi 3, 0
  00ef9e8  bf 0, 0xefa0c
  00ef9ec  ori 3, 4, 64
  00ef9f0  sth 3, 52(31)
  00ef9f4  b 0xefa0c
  00ef9f8  li 4, 0
  00ef9fc  ori 3, 3, 5
  00efa00  stw 4, 36(31)
  00efa04  sth 3, 52(31)
  00efa08  stw 4, 148(31)
  00efa0c  ld 0, 160(1)
  00efa10  mtlr 0
  00efa14  ld 29, 120(1)
  00efa18  ld 30, 128(1)
  00efa1c  ld 31, 136(1)
  00efa20  addi 1, 1, 144
  00efa24  blr

CreateMoby:   # 0xefa28, 0x110 bytes
  00efa28  stdu 1, -128(1)
  00efa2c  mflr 0
  00efa30  std 0, 144(1)
  00efa34  lis 4, 164
  00efa38  std 31, 120(1)
  00efa3c  lis 5, 164
  00efa40  lwz 31, -28508(4)
  00efa44  lwz 4, -28504(5)
  00efa48  cmplw 31, 4
  00efa4c  bf 0, 0xefb00
  00efa50  lis 5, 161
  00efa54  lwz 5, 1808(5)
  00efa58  clrldi 5, 5, 32
  00efa5c  lbz 6, 32(31)
  00efa60  cmpwi 6, 254
  00efa64  bt 0, 0xefaf4
  00efa68  ld 7, 56(31)
  00efa6c  cmpld 5, 7
  00efa70  bt 0, 0xefaf4
  00efa74  cmpwi 6, 255
  00efa78  bf 2, 0xefa84
  00efa7c  li 4, 255
  00efa80  stb 4, 288(31)
  00efa84  ori 4, 3, 0
  00efa88  ori 3, 31, 0
  00efa8c  bl 0xef810
  00efa90  lis 3, 164
  00efa94  lis 4, 164
  00efa98  lwz 3, -28508(3)
  00efa9c  lwz 5, -28496(4)
  00efaa0  subc 3, 31, 3
  00efaa4  li 4, 0
  00efaa8  srawi 3, 3, 8
  00efaac  addze 3, 3
  00efab0  sldi 3, 3, 7
  00efab4  addc 3, 5, 3
  00efab8  li 5, 128
  00efabc  clrldi 6, 3, 32
  00efac0  stw 3, 120(31)
  00efac4  ori 3, 6, 0
  00efac8  bl 0x5001fc
  00efacc  nop
  00efad0  lis 3, 165
  00efad4  lwz 3, -9488(3)
  00efad8  cmpwi 3, 0
  00efadc  bt 2, 0xefaec
  00efae0  lis 4, 165
  00efae4  addic 3, 3, -1
  00efae8  stw 3, -9488(4)
  00efaec  ori 3, 31, 0
  00efaf0  b 0xefb24
  00efaf4  addic 31, 31, 256
  00efaf8  cmplw 31, 4
  00efafc  bt 0, 0xefa5c
  00efb00  lis 4, 161
  00efb04  lis 6, 101
  00efb08  ori 5, 3, 0
  00efb0c  addic 3, 6, 11656
  00efb10  lwz 4, 1808(4)
  00efb14  extsw 4, 4
  00efb18  bl 0x5cd098
  00efb1c  nop
  00efb20  li 3, 0
  00efb24  ld 0, 144(1)
  00efb28  mtlr 0
  00efb2c  ld 31, 120(1)
  00efb30  addi 1, 1, 128
  00efb34  blr

DeleteMoby:   # 0xefb38, 0x68 bytes
  00efb38  stdu 1, -112(1)
  00efb3c  mflr 0
  00efb40  std 0, 128(1)
  00efb44  lis 4, 164
  00efb48  li 5, 253
  00efb4c  li 6, 254
  00efb50  lis 7, 161
  00efb54  subc 5, 5, 6
  00efb58  lwz 4, -28508(4)
  00efb5c  subc 4, 3, 4
  00efb60  sradi 4, 4, 63
  00efb64  and 4, 4, 5
  00efb68  lis 5, -32640
  00efb6c  addc 4, 6, 4
  00efb70  stb 4, 32(3)
  00efb74  lwz 4, 1808(7)
  00efb78  addic 4, 4, 2
  00efb7c  extsw 6, 4
  00efb80  ori 4, 5, 32639
  00efb84  std 6, 56(3)
  00efb88  bl 0xf25f4
  00efb8c  nop
  00efb90  ld 0, 128(1)
  00efb94  mtlr 0
  00efb98  addi 1, 1, 112
  00efb9c  blr

MB_UpdateLoopSound:   # 0xefba0, 0xb0 bytes
  00efba0  stdu 1, -128(1)
  00efba4  mflr 0
  00efba8  std 0, 144(1)
  00efbac  std 31, 120(1)
  00efbb0  ori 31, 3, 0
  00efbb4  lbz 3, 125(31)
  00efbb8  cmpwi 3, 255
  00efbbc  bt 2, 0xefc1c
  00efbc0  lis 4, 150
  00efbc4  sldi 5, 3, 7
  00efbc8  sldi 6, 3, 4
  00efbcc  addic 7, 4, 14312
  00efbd0  subc 4, 5, 6
  00efbd4  lwzx 5, 7, 4
  00efbd8  cmpw 5, 31
  00efbdc  bt 2, 0xefbec
  00efbe0  li 3, 255
  00efbe4  stb 3, 125(31)
  00efbe8  b 0xefc3c
  00efbec  lis 5, 150
  00efbf0  lbz 6, 124(31)
  00efbf4  addic 5, 5, 14302
  00efbf8  lhzx 4, 5, 4
  00efbfc  extsh 4, 4
  00efc00  cmpw 4, 6
  00efc04  bt 2, 0xefc3c
  00efc08  bl 0x15cdb0
  00efc0c  nop
  00efc10  li 3, 255
  00efc14  stb 3, 125(31)
  00efc18  b 0xefc3c
  00efc1c  lbz 3, 124(31)
  00efc20  cmpwi 3, 255
  00efc24  bt 2, 0xefc3c
  00efc28  li 4, 4
  00efc2c  ori 5, 31, 0
  00efc30  bl 0x15d12c
  00efc34  nop
  00efc38  stb 3, 125(31)
  00efc3c  ld 0, 144(1)
  00efc40  mtlr 0
  00efc44  ld 31, 120(1)
  00efc48  addi 1, 1, 128
  00efc4c  blr

MB_FindNearestAnimTrigger:   # 0xefc58, 0xbc bytes
  00efc58  stdu 1, -128(1)
  00efc5c  mflr 0
  00efc60  std 0, 144(1)
  00efc64  std 31, 120(1)
  00efc68  lis 4, 15
  00efc6c  ori 31, 3, 0
  00efc70  addi 4, 4, -944
  00efc74  lfs 2, 0(4)
  00efc78  fmuls 1, 1, 2
  00efc7c  bl 0x502758
  00efc80  nop
  00efc84  extsh 5, 3
  00efc88  lbz 3, 16(31)
  00efc8c  li 4, 0
  00efc90  cmpwi 3, 0
  00efc94  bf 1, 0xefcfc
  00efc98  slwi 6, 4, 2
  00efc9c  addc 6, 31, 6
  00efca0  clrldi 6, 6, 32
  00efca4  lwz 7, 28(6)
  00efca8  lhz 7, 4(7)
  00efcac  extsh 7, 7
  00efcb0  cmpw 7, 5
  00efcb4  bf 1, 0xefcec
  00efcb8  cmpwi 4, 0
  00efcbc  bf 1, 0xefce4
  00efcc0  lwz 6, 24(6)
  00efcc4  subc 3, 7, 5
  00efcc8  lhz 6, 4(6)
  00efccc  extsh 6, 6
  00efcd0  subc 5, 5, 6
  00efcd4  cmpw 3, 5
  00efcd8  bf 1, 0xefce4
  00efcdc  addic 4, 4, -1
  00efce0  extsw 4, 4
  00efce4  ori 3, 4, 0
  00efce8  b 0xefd00
  00efcec  addic 4, 4, 1
  00efcf0  extsw 4, 4
  00efcf4  cmpw 4, 3
  00efcf8  bt 0, 0xefc98
  00efcfc  li 3, -1
  00efd00  ld 0, 144(1)
  00efd04  mtlr 0
  00efd08  ld 31, 120(1)
  00efd0c  addi 1, 1, 128
  00efd10  blr

MB_FindAnimTriggerAfter:   # 0xefd18, 0x11c bytes
  00efd18  stdu 1, -160(1)
  00efd1c  mflr 0
  00efd20  std 0, 176(1)
  00efd24  stfd 30, 144(1)
  00efd28  stfd 31, 152(1)
  00efd2c  fmr 31, 1
  00efd30  std 30, 128(1)
  00efd34  lis 4, 15
  00efd38  ori 30, 3, 0
  00efd3c  std 31, 136(1)
  00efd40  addi 4, 4, -748
  00efd44  ori 31, 5, 0
  00efd48  lfs 1, 0(4)
  00efd4c  std 29, 120(1)
  00efd50  fmuls 1, 31, 1
  00efd54  bl 0x502758
  00efd58  nop
  00efd5c  lbz 4, 16(30)
  00efd60  li 29, 0
  00efd64  extsh 5, 3
  00efd68  cmpwi 4, 0
  00efd6c  ori 3, 29, 0
  00efd70  bf 1, 0xefda4
  00efd74  ori 6, 30, 0
  00efd78  lwz 7, 28(6)
  00efd7c  lhz 7, 4(7)
  00efd80  extsh 7, 7
  00efd84  cmpw 7, 5
  00efd88  bt 1, 0xefd9c
  00efd8c  addic 29, 29, 1
  00efd90  addic 6, 6, 4
  00efd94  cmpw 29, 4
  00efd98  bt 0, 0xefd78
  00efd9c  cmpwi 29, 0
  00efda0  bt 1, 0xefdb8
  00efda4  cmpwi 31, 0
  00efda8  bt 2, 0xefdb0
  00efdac  stw 3, 0(31)
  00efdb0  li 3, -1
  00efdb4  b 0xefe10
  00efdb8  cmpwi 31, 0
  00efdbc  bt 2, 0xefe08
  00efdc0  slwi 3, 29, 2
  00efdc4  addc 3, 30, 3
  00efdc8  clrldi 3, 3, 32
  00efdcc  lwz 4, 24(3)
  00efdd0  lwz 30, 28(3)
  00efdd4  lhz 3, 4(4)
  00efdd8  extsh 3, 3
  00efddc  bl 0x502730
  00efde0  nop
  00efde4  fmr 30, 1
  00efde8  lhz 3, 4(30)
  00efdec  extsh 3, 3
  00efdf0  bl 0x502730
  00efdf4  nop
  00efdf8  fsubs 1, 1, 30
  00efdfc  fsubs 2, 31, 30
  00efe00  fdivs 1, 2, 1
  00efe04  stfs 1, 0(31)
  00efe08  addic 3, 29, -1
  00efe0c  extsw 3, 3
  00efe10  ld 0, 176(1)
  00efe14  mtlr 0
  00efe18  lfd 30, 144(1)
  00efe1c  lfd 31, 152(1)
  00efe20  ld 29, 120(1)
  00efe24  ld 30, 128(1)
  00efe28  ld 31, 136(1)
  00efe2c  addi 1, 1, 160
  00efe30  blr

BlendAnimFrame:   # 0xefe40, 0x118 bytes
  00efe40  stdu 1, -160(1)
  00efe44  mflr 0
  00efe48  std 0, 176(1)
  00efe4c  stfd 29, 136(1)
  00efe50  stfd 30, 144(1)
  00efe54  stfd 31, 152(1)
  00efe58  std 31, 128(1)
  00efe5c  ori 31, 3, 0
  00efe60  lbz 4, 82(31)
  00efe64  lwz 3, 84(31)
  00efe68  lbz 5, 80(31)
  00efe6c  cmpwi 4, 255
  00efe70  lbz 6, 81(31)
  00efe74  cmpwi 6, 3, 0
  00efe78  lbz 3, 83(31)
  00efe7c  std 30, 120(1)
  00efe80  cmpw 1, 5, 6
  00efe84  bt 2, 0xefe90
  00efe88  lwz 5, 104(31)
  00efe8c  b 0xefe94
  00efe90  lwz 5, 108(31)
  00efe94  lis 6, 15
  00efe98  addi 6, 6, -460
  00efe9c  lfs 31, 0(6)
  00efea0  bf 26, 0xefebc
  00efea4  lhz 3, 4(5)
  00efea8  extsh 3, 3
  00efeac  bl 0x502730
  00efeb0  nop
  00efeb4  fmuls 1, 1, 31
  00efeb8  b 0xeff34
  00efebc  xor 3, 4, 3
  00efec0  cmpwi 3, 0
  00efec4  bf 2, 0xefecc
  00efec8  bf 5, 0xefee8
  00efecc  lhz 3, 4(5)
  00efed0  extsh 3, 3
  00efed4  bl 0x502730
  00efed8  nop
  00efedc  lfs 2, 84(31)
  00efee0  fmadds 1, 1, 31, 2
  00efee4  b 0xeff34
  00efee8  lhz 3, 4(5)
  00efeec  lwz 30, 108(31)
  00efef0  extsh 3, 3
  00efef4  bl 0x502730
  00efef8  nop
  00efefc  lis 3, 15
  00eff00  lfs 2, 84(31)
  00eff04  fmr 30, 1
  00eff08  addi 3, 3, -460
  00eff0c  lhz 4, 4(30)
  00eff10  lfs 1, 4(3)
  00eff14  extsh 3, 4
  00eff18  fsubs 29, 1, 2
  00eff1c  bl 0x502730
  00eff20  nop
  00eff24  lfs 2, 84(31)
  00eff28  fmuls 1, 1, 2
  00eff2c  fmadds 1, 30, 29, 1
  00eff30  fmuls 1, 1, 31
  00eff34  ld 0, 176(1)
  00eff38  mtlr 0
  00eff3c  lfd 29, 136(1)
  00eff40  lfd 30, 144(1)
  00eff44  lfd 31, 152(1)
  00eff48  ld 30, 120(1)
  00eff4c  ld 31, 128(1)
  00eff50  addi 1, 1, 160
  00eff54  blr

MB_GetAnimSeqLength:   # 0xeff60, 0x90 bytes
  00eff60  stdu 1, -112(1)
  00eff64  mflr 0
  00eff68  std 0, 128(1)
  00eff6c  ori 5, 4, 0
  00eff70  ori 4, 3, 0
  00eff74  cmpwi 5, 0
  00eff78  cmpwi 1, 5, 255
  00eff7c  ori 3, 5, 0
  00eff80  bt 0, 0xeff88
  00eff84  bt 4, 0xeff98
  00eff88  lis 3, 15
  00eff8c  addi 3, 3, -168
  00eff90  lfs 1, 0(3)
  00eff94  b 0xeffe0
  00eff98  lis 5, 163
  00eff9c  sldi 4, 4, 2
  00effa0  addic 5, 5, 19456
  00effa4  extsw 4, 4
  00effa8  sldi 3, 3, 2
  00effac  lwzx 4, 5, 4
  00effb0  addc 3, 4, 3
  00effb4  clrldi 3, 3, 32
  00effb8  lwz 3, 72(3)
  00effbc  lwz 3, 28(3)
  00effc0  lhz 3, 4(3)
  00effc4  extsh 3, 3
  00effc8  bl 0x502730
  00effcc  nop
  00effd0  lis 3, 15
  00effd4  addi 3, 3, -168
  00effd8  lfs 2, 4(3)
  00effdc  fmuls 1, 1, 2
  00effe0  ld 0, 128(1)
  00effe4  mtlr 0
  00effe8  addi 1, 1, 112
  00effec  blr

MB_GetAnimSeqTriggerLength:   # 0xefff8, 0xa0 bytes
  00efff8  stdu 1, -112(1)
  00efffc  mflr 0
  00f0000  std 0, 128(1)
  00f0004  ori 5, 4, 0
  00f0008  ori 4, 3, 0
  00f000c  cmpwi 5, 0
  00f0010  cmpwi 1, 5, 255
  00f0014  ori 3, 5, 0
  00f0018  bt 0, 0xf0020
  00f001c  bt 4, 0xf0030
  00f0020  lis 3, 15
  00f0024  addi 3, 3, -16
  00f0028  lfs 1, 0(3)
  00f002c  b 0xf0088
  00f0030  lis 5, 163
  00f0034  sldi 4, 4, 2
  00f0038  addic 5, 5, 19456
  00f003c  extsw 4, 4
  00f0040  sldi 3, 3, 2
  00f0044  lwzx 4, 5, 4
  00f0048  addc 3, 4, 3
  00f004c  clrldi 3, 3, 32
  00f0050  lwz 3, 72(3)
  00f0054  lbz 4, 16(3)
  00f0058  slwi 4, 4, 2
  00f005c  addc 3, 3, 4
  00f0060  clrldi 3, 3, 32
  00f0064  lwz 3, 24(3)
  00f0068  lhz 3, 4(3)
  00f006c  extsh 3, 3
  00f0070  bl 0x502730
  00f0074  nop
  00f0078  lis 3, 15
  00f007c  addi 3, 3, -16
  00f0080  lfs 2, 4(3)
  00f0084  fmuls 1, 1, 2
  00f0088  ld 0, 128(1)
  00f008c  mtlr 0
  00f0090  addi 1, 1, 112
  00f0094  blr

MB_GetCollPrimWorld:   # 0xf00a0, 0x648 bytes
  00f00a0  stdu 1, -2448(1)
  00f00a4  mflr 0
  00f00a8  std 0, 2464(1)
  00f00ac  stfd 14, 2304(1)
  00f00b0  stfd 15, 2312(1)
  00f00b4  stfd 16, 2320(1)
  00f00b8  stfd 17, 2328(1)
  00f00bc  stfd 18, 2336(1)
  00f00c0  stfd 19, 2344(1)
  00f00c4  stfd 20, 2352(1)
  00f00c8  stfd 21, 2360(1)
  00f00cc  stfd 22, 2368(1)
  00f00d0  stfd 23, 2376(1)
  00f00d4  stfd 24, 2384(1)
  00f00d8  stfd 25, 2392(1)
  00f00dc  stfd 26, 2400(1)
  00f00e0  stfd 27, 2408(1)
  00f00e4  stfd 28, 2416(1)
  00f00e8  stfd 29, 2424(1)
  00f00ec  stfd 30, 2432(1)
  00f00f0  stfd 31, 2440(1)
  00f00f4  std 31, 2296(1)
  00f00f8  ori 31, 3, 0
  00f00fc  std 30, 2288(1)
  00f0100  ori 3, 4, 0
  00f0104  std 29, 2280(1)
  00f0108  ori 30, 5, 0
  00f010c  std 28, 2272(1)
  00f0110  ori 29, 6, 0
  00f0114  ori 28, 7, 0
  00f0118  std 27, 2264(1)
  00f011c  lwz 4, 148(31)
  00f0120  ori 27, 8, 0
  00f0124  std 26, 2256(1)
  00f0128  cmpwi 4, 0
  00f012c  bf 2, 0xf0138
  00f0130  li 3, 0
  00f0134  b 0xf0678
  00f0138  slwi 3, 3, 3
  00f013c  ori 26, 30, 0
  00f0140  lfs 29, 44(31)
  00f0144  sldi 3, 3, 2
  00f0148  lis 5, 15
  00f014c  addic 3, 3, 16
  00f0150  addc 30, 4, 3
  00f0154  addi 3, 5, 152
  00f0158  clrldi 30, 30, 32
  00f015c  lwz 4, 0(30)
  00f0160  clrlwi 4, 4, 24
  00f0164  stw 4, 0(26)
  00f0168  lfs 1, 0(3)
  00f016c  addic 3, 1, 112
  00f0170  addic 4, 31, 64
  00f0174  fmuls 29, 29, 1
  00f0178  bl 0x500ca4
  00f017c  nop
  00f0180  lfs 14, 128(1)
  00f0184  lfs 15, 144(1)
  00f0188  lfs 16, 160(1)
  00f018c  lfs 17, 116(1)
  00f0190  lfs 1, 112(1)
  00f0194  lwz 3, 0(26)
  00f0198  lfs 18, 132(1)
  00f019c  lfs 19, 148(1)
  00f01a0  cmpwi 3, 1
  00f01a4  stfd 1, 2224(1)
  00f01a8  fmr 30, 17
  00f01ac  lfs 20, 164(1)
  00f01b0  fmr 31, 18
  00f01b4  stfs 1, 2244(1)
  00f01b8  fmr 0, 19
  00f01bc  lfs 21, 120(1)
  00f01c0  fmr 13, 20
  00f01c4  lfs 22, 136(1)
  00f01c8  stfs 14, 2240(1)
  00f01cc  stfs 15, 2236(1)
  00f01d0  fmr 12, 21
  00f01d4  lfs 23, 152(1)
  00f01d8  fmr 11, 22
  00f01dc  stfs 16, 2232(1)
  00f01e0  lfs 24, 168(1)
  00f01e4  lfs 25, 124(1)
  00f01e8  fmr 10, 23
  00f01ec  lfs 26, 140(1)
  00f01f0  fmr 9, 24
  00f01f4  lfs 27, 156(1)
  00f01f8  fmr 8, 25
  00f01fc  lfs 28, 172(1)
  00f0200  fmr 7, 26
  00f0204  fmr 6, 27
  00f0208  fmr 5, 28
  00f020c  bt 2, 0xf0220
  00f0210  cmpwi 3, 0
  00f0214  bt 2, 0xf0220
  00f0218  cmpwi 3, 3
  00f021c  bf 2, 0xf0314
  00f0220  lfs 1, 20(30)
  00f0224  lfs 2, 16(30)
  00f0228  fmuls 1, 1, 29
  00f022c  fmuls 2, 2, 29
  00f0230  lfs 3, 28(30)
  00f0234  lfs 4, 24(30)
  00f0238  lwz 4, 28(30)
  00f023c  fmuls 4, 4, 29
  00f0240  stw 4, 12(29)
  00f0244  lfd 5, 2224(1)
  00f0248  cmpwi 3, 1
  00f024c  fmuls 6, 14, 1
  00f0250  fmuls 7, 18, 1
  00f0254  fmuls 8, 22, 1
  00f0258  fmuls 9, 26, 1
  00f025c  stfs 2, 0(29)
  00f0260  stfs 1, 4(29)
  00f0264  stfs 4, 8(29)
  00f0268  fmadds 5, 5, 2, 6
  00f026c  fmadds 6, 17, 2, 7
  00f0270  fmadds 7, 21, 2, 8
  00f0274  fmadds 2, 25, 2, 9
  00f0278  fmadds 1, 15, 4, 5
  00f027c  fmadds 5, 19, 4, 6
  00f0280  fmadds 6, 23, 4, 7
  00f0284  fmadds 2, 27, 4, 2
  00f0288  fmadds 1, 16, 3, 1
  00f028c  fmadds 4, 20, 3, 5
  00f0290  fmadds 5, 24, 3, 6
  00f0294  fmadds 2, 28, 3, 2
  00f0298  stfs 1, 0(29)
  00f029c  stfs 4, 4(29)
  00f02a0  stfs 5, 8(29)
  00f02a4  stfs 2, 12(29)
  00f02a8  lfs 1, 16(31)
  00f02ac  lfs 2, 0(29)
  00f02b0  fadds 1, 2, 1
  00f02b4  lfs 2, 4(29)
  00f02b8  lfs 3, 8(29)
  00f02bc  lfs 4, 12(29)
  00f02c0  fmuls 4, 4, 29
  00f02c4  stfs 1, 0(29)
  00f02c8  lfs 1, 20(31)
  00f02cc  fadds 1, 2, 1
  00f02d0  stfs 1, 4(29)
  00f02d4  lfs 1, 24(31)
  00f02d8  fadds 1, 3, 1
  00f02dc  stfs 1, 8(29)
  00f02e0  stfs 4, 0(28)
  00f02e4  bt 2, 0xf02f0
  00f02e8  cmpwi 3, 0
  00f02ec  bf 2, 0xf0300
  00f02f0  lis 3, 15
  00f02f4  addi 3, 3, 152
  00f02f8  lfs 29, 4(3)
  00f02fc  b 0xf0308
  00f0300  lfs 1, 4(30)
  00f0304  fmuls 29, 1, 29
  00f0308  li 3, 1
  00f030c  stfs 29, 0(27)
  00f0310  b 0xf0678
  00f0314  cmpwi 3, 2
  00f0318  bf 2, 0xf04a4
  00f031c  lis 3, 15
  00f0320  addi 3, 3, 152
  00f0324  lfs 1, 4(3)
  00f0328  lwz 3, 148(31)
  00f032c  fmr 28, 1
  00f0330  lfs 27, 2232(1)
  00f0334  lfs 26, 2236(1)
  00f0338  lfs 25, 2240(1)
  00f033c  lhz 3, 2(3)
  00f0340  lfs 24, 2244(1)
  00f0344  cmpwi 3, 0
  00f0348  fmr 4, 28
  00f034c  fmr 3, 4
  00f0350  fmr 2, 3
  00f0354  bt 2, 0xf03f0
  00f0358  extsh 4, 3
  00f035c  ori 3, 31, 0
  00f0360  addic 5, 1, 176
  00f0364  bl 0xf595c
  00f0368  nop
  00f036c  lwz 3, 4(30)
  00f0370  slwi 3, 3, 4
  00f0374  addc 3, 1, 3
  00f0378  addic 3, 3, 176
  00f037c  clrldi 3, 3, 32
  00f0380  lfs 1, 0(3)
  00f0384  stfs 1, 0(29)
  00f0388  lfs 1, 4(3)
  00f038c  stfs 1, 4(29)
  00f0390  lfs 1, 8(3)
  00f0394  stfs 1, 8(29)
  00f0398  lfs 1, 12(3)
  00f039c  stfs 1, 12(29)
  00f03a0  lfs 24, 112(1)
  00f03a4  lfs 25, 128(1)
  00f03a8  lfs 26, 144(1)
  00f03ac  lfs 27, 160(1)
  00f03b0  lfs 30, 116(1)
  00f03b4  lfs 31, 132(1)
  00f03b8  lfs 0, 148(1)
  00f03bc  lfs 13, 164(1)
  00f03c0  lfs 12, 120(1)
  00f03c4  lfs 11, 136(1)
  00f03c8  lfs 1, 0(29)
  00f03cc  lfs 10, 152(1)
  00f03d0  lfs 2, 4(29)
  00f03d4  lfs 9, 168(1)
  00f03d8  lfs 3, 8(29)
  00f03dc  lfs 8, 124(1)
  00f03e0  lfs 4, 12(29)
  00f03e4  lfs 7, 140(1)
  00f03e8  lfs 6, 156(1)
  00f03ec  lfs 5, 172(1)
  00f03f0  fmuls 2, 2, 29
  00f03f4  fmuls 1, 1, 29
  00f03f8  fmuls 3, 3, 29
  00f03fc  li 3, 1
  00f0400  fmuls 25, 25, 2
  00f0404  fmuls 31, 31, 2
  00f0408  fmuls 11, 11, 2
  00f040c  fmuls 7, 7, 2
  00f0410  stfs 1, 0(29)
  00f0414  stfs 2, 4(29)
  00f0418  stfs 3, 8(29)
  00f041c  stfs 4, 12(29)
  00f0420  fmadds 25, 24, 1, 25
  00f0424  fmadds 31, 30, 1, 31
  00f0428  fmadds 11, 12, 1, 11
  00f042c  fmadds 1, 8, 1, 7
  00f0430  fmadds 2, 26, 3, 25
  00f0434  fmadds 7, 0, 3, 31
  00f0438  fmadds 8, 10, 3, 11
  00f043c  fmadds 1, 6, 3, 1
  00f0440  fmadds 2, 27, 4, 2
  00f0444  fmadds 3, 13, 4, 7
  00f0448  fmadds 6, 9, 4, 8
  00f044c  fmadds 1, 5, 4, 1
  00f0450  stfs 2, 0(29)
  00f0454  stfs 3, 4(29)
  00f0458  stfs 6, 8(29)
  00f045c  stfs 1, 12(29)
  00f0460  lfs 1, 16(31)
  00f0464  lfs 2, 0(29)
  00f0468  fadds 1, 2, 1
  00f046c  lfs 2, 4(29)
  00f0470  lfs 3, 8(29)
  00f0474  stfs 1, 0(29)
  00f0478  lfs 1, 20(31)
  00f047c  fadds 1, 2, 1
  00f0480  stfs 1, 4(29)
  00f0484  lfs 1, 24(31)
  00f0488  fadds 1, 3, 1
  00f048c  stfs 1, 8(29)
  00f0490  lfs 1, 12(30)
  00f0494  fmuls 1, 1, 29
  00f0498  stfs 1, 0(28)
  00f049c  stfs 28, 0(27)
  00f04a0  b 0xf0678
  00f04a4  cmpwi 3, 4
  00f04a8  bf 2, 0xf0674
  00f04ac  lwz 3, 148(31)
  00f04b0  lhz 3, 2(3)
  00f04b4  cmpwi 3, 0
  00f04b8  bt 2, 0xf0514
  00f04bc  extsh 4, 3
  00f04c0  ori 3, 31, 0
  00f04c4  li 5, 0
  00f04c8  bl 0xf595c
  00f04cc  nop
  00f04d0  lfs 1, 112(1)
  00f04d4  lfs 14, 128(1)
  00f04d8  lfs 15, 144(1)
  00f04dc  lfs 16, 160(1)
  00f04e0  stfd 1, 2224(1)
  00f04e4  lfs 17, 116(1)
  00f04e8  lfs 18, 132(1)
  00f04ec  lfs 19, 148(1)
  00f04f0  lfs 20, 164(1)
  00f04f4  lfs 21, 120(1)
  00f04f8  lfs 22, 136(1)
  00f04fc  lfs 23, 152(1)
  00f0500  lfs 24, 168(1)
  00f0504  lfs 25, 124(1)
  00f0508  lfs 26, 140(1)
  00f050c  lfs 27, 156(1)
  00f0510  lfs 28, 172(1)
  00f0514  lhz 5, 4(30)
  00f0518  lis 3, 28672
  00f051c  lhz 6, 6(30)
  00f0520  lis 4, 28672
  00f0524  extsh 5, 5
  00f0528  extsh 6, 6
  00f052c  ori 3, 3, 8
  00f0530  slwi 5, 5, 4
  00f0534  slwi 6, 6, 4
  00f0538  lis 7, 28672
  00f053c  ori 4, 4, 4
  00f0540  addc 8, 5, 7
  00f0544  lfsx 1, 5, 3
  00f0548  lfsx 2, 6, 3
  00f054c  fmuls 1, 1, 29
  00f0550  addc 3, 6, 7
  00f0554  fmuls 2, 2, 29
  00f0558  lfsx 3, 5, 4
  00f055c  lfs 4, 0(8)
  00f0560  lfsx 5, 6, 4
  00f0564  fmuls 3, 3, 29
  00f0568  fmuls 5, 5, 29
  00f056c  lfs 6, 0(3)
  00f0570  fmuls 4, 4, 29
  00f0574  lis 3, 28672
  00f0578  fmuls 6, 6, 29
  00f057c  ori 3, 3, 12
  00f0580  fsub 7, 1, 2
  00f0584  fsub 8, 1, 2
  00f0588  fsub 9, 1, 2
  00f058c  lfsx 10, 5, 3
  00f0590  fsub 11, 1, 2
  00f0594  lfsx 12, 6, 3
  00f0598  li 3, 1
  00f059c  fsel 7, 7, 5, 3
  00f05a0  fsubs 3, 5, 3
  00f05a4  fsel 8, 8, 6, 4
  00f05a8  fsel 9, 9, 12, 10
  00f05ac  fsubs 4, 6, 4
  00f05b0  fsel 10, 11, 2, 1
  00f05b4  fsubs 1, 2, 1
  00f05b8  fmuls 5, 14, 7
  00f05bc  fmuls 12, 18, 7
  00f05c0  fmuls 13, 22, 7
  00f05c4  fmuls 0, 26, 7
  00f05c8  fmuls 3, 3, 3
  00f05cc  stfs 8, 0(29)
  00f05d0  fmuls 9, 9, 29
  00f05d4  lfd 11, 2224(1)
  00f05d8  stfs 7, 4(29)
  00f05dc  stfs 10, 8(29)
  00f05e0  fmadds 5, 11, 8, 5
  00f05e4  fmadds 6, 17, 8, 12
  00f05e8  fmadds 11, 21, 8, 13
  00f05ec  fmadds 8, 25, 8, 0
  00f05f0  fmadds 2, 4, 4, 3
  00f05f4  stfs 9, 12(29)
  00f05f8  fmadds 5, 15, 10, 5
  00f05fc  fmadds 3, 19, 10, 6
  00f0600  fmadds 4, 23, 10, 11
  00f0604  fmadds 6, 27, 10, 8
  00f0608  fmadds 1, 1, 1, 2
  00f060c  fmadds 5, 16, 9, 5
  00f0610  fmadds 2, 20, 9, 3
  00f0614  fmadds 3, 24, 9, 4
  00f0618  fmadds 4, 28, 9, 6
  00f061c  fsqrts 1, 1
  00f0620  stfs 5, 0(29)
  00f0624  stfs 2, 4(29)
  00f0628  stfs 3, 8(29)
  00f062c  stfs 4, 12(29)
  00f0630  lfs 2, 16(31)
  00f0634  lfs 3, 0(29)
  00f0638  lfs 4, 4(29)
  00f063c  lfs 5, 8(29)
  00f0640  fadds 2, 3, 2
  00f0644  stfs 2, 0(29)
  00f0648  lfs 2, 20(31)
  00f064c  fadds 2, 4, 2
  00f0650  stfs 2, 4(29)
  00f0654  lfs 2, 24(31)
  00f0658  fadds 2, 5, 2
  00f065c  stfs 2, 8(29)
  00f0660  lfs 2, 12(30)
  00f0664  fmuls 2, 2, 29
  00f0668  stfs 2, 0(28)
  00f066c  stfs 1, 0(27)
  00f0670  b 0xf0678
  00f0674  li 3, 0
  00f0678  ld 0, 2464(1)
  00f067c  mtlr 0
  00f0680  lfd 14, 2304(1)
  00f0684  lfd 15, 2312(1)
  00f0688  lfd 16, 2320(1)
  00f068c  lfd 17, 2328(1)
  00f0690  lfd 18, 2336(1)
  00f0694  lfd 19, 2344(1)
  00f0698  lfd 20, 2352(1)
  00f069c  lfd 21, 2360(1)
  00f06a0  lfd 22, 2368(1)
  00f06a4  lfd 23, 2376(1)
  00f06a8  lfd 24, 2384(1)
  00f06ac  lfd 25, 2392(1)
  00f06b0  lfd 26, 2400(1)
  00f06b4  lfd 27, 2408(1)
  00f06b8  lfd 28, 2416(1)
  00f06bc  lfd 29, 2424(1)
  00f06c0  lfd 30, 2432(1)
  00f06c4  lfd 31, 2440(1)
  00f06c8  ld 26, 2256(1)
  00f06cc  ld 27, 2264(1)
  00f06d0  ld 28, 2272(1)
  00f06d4  ld 29, 2280(1)
  00f06d8  ld 30, 2288(1)
  00f06dc  ld 31, 2296(1)
  00f06e0  addi 1, 1, 2448
  00f06e4  blr

MB_SetCollPrimFromWorld:   # 0xf06f0, 0x148 bytes
  00f06f0  stdu 1, -224(1)
  00f06f4  mflr 0
  00f06f8  std 0, 240(1)
  00f06fc  stfd 29, 200(1)
  00f0700  stfd 30, 208(1)
  00f0704  stfd 31, 216(1)
  00f0708  lis 6, 15
  00f070c  std 31, 192(1)
  00f0710  ori 31, 3, 0
  00f0714  fmr 30, 1
  00f0718  addi 6, 6, 1768
  00f071c  fmr 31, 2
  00f0720  std 30, 184(1)
  00f0724  slwi 3, 4, 3
  00f0728  ori 30, 5, 0
  00f072c  sldi 3, 3, 2
  00f0730  lfs 3, 0(6)
  00f0734  lfs 4, 44(31)
  00f0738  addic 5, 3, 16
  00f073c  lwz 4, 148(31)
  00f0740  addic 3, 1, 112
  00f0744  fdivs 29, 3, 4
  00f0748  std 29, 176(1)
  00f074c  addc 4, 4, 5
  00f0750  clrldi 29, 4, 32
  00f0754  addic 4, 31, 192
  00f0758  bl 0x5010c0
  00f075c  nop
  00f0760  lfs 1, 4(30)
  00f0764  lfs 2, 20(31)
  00f0768  lfs 3, 0(30)
  00f076c  fsubs 1, 1, 2
  00f0770  lfs 2, 16(31)
  00f0774  lfs 4, 128(1)
  00f0778  fsubs 2, 3, 2
  00f077c  lfs 3, 132(1)
  00f0780  lfs 5, 8(30)
  00f0784  lfs 6, 24(31)
  00f0788  lfs 7, 112(1)
  00f078c  lfs 8, 136(1)
  00f0790  fsubs 5, 5, 6
  00f0794  fmuls 4, 4, 1
  00f0798  fmuls 3, 3, 1
  00f079c  lfs 6, 116(1)
  00f07a0  fmuls 1, 8, 1
  00f07a4  lfs 9, 120(1)
  00f07a8  lfs 8, 144(1)
  00f07ac  lfs 10, 148(1)
  00f07b0  lfs 11, 12(30)
  00f07b4  lfs 12, 152(1)
  00f07b8  lfs 13, 160(1)
  00f07bc  fmadds 4, 7, 2, 4
  00f07c0  fmadds 3, 6, 2, 3
  00f07c4  fmadds 1, 9, 2, 1
  00f07c8  lfs 2, 164(1)
  00f07cc  lfs 6, 168(1)
  00f07d0  fmadds 4, 8, 5, 4
  00f07d4  fmadds 3, 10, 5, 3
  00f07d8  fmadds 1, 12, 5, 1
  00f07dc  fmuls 5, 31, 29
  00f07e0  fmuls 7, 30, 29
  00f07e4  fmadds 4, 13, 11, 4
  00f07e8  fmadds 2, 2, 11, 3
  00f07ec  fmadds 1, 6, 11, 1
  00f07f0  stfs 5, 4(29)
  00f07f4  stfs 7, 28(29)
  00f07f8  fmuls 3, 4, 29
  00f07fc  fmuls 2, 2, 29
  00f0800  fmuls 1, 1, 29
  00f0804  stfs 3, 16(29)
  00f0808  stfs 2, 20(29)
  00f080c  stfs 1, 24(29)
  00f0810  ld 0, 240(1)
  00f0814  mtlr 0
  00f0818  lfd 29, 200(1)
  00f081c  lfd 30, 208(1)
  00f0820  lfd 31, 216(1)
  00f0824  ld 29, 176(1)
  00f0828  ld 30, 184(1)
  00f082c  ld 31, 192(1)
  00f0830  addi 1, 1, 224
  00f0834  blr

MB_AddShortPairOffset:   # 0xf0838, 0x1c bytes
  00f0838  lhz 6, 4(3)
  00f083c  lhz 7, 6(3)
  00f0840  addc 4, 6, 4
  00f0844  addc 5, 7, 5
  00f0848  sth 4, 4(3)
  00f084c  sth 5, 6(3)
  00f0850  blr

MB_AllocAnimLayer:   # 0xf0854, 0xac bytes
  00f0854  lis 5, 163
  00f0858  li 6, 0
  00f085c  addic 5, 5, -15292
  00f0860  lbz 7, 0(5)
  00f0864  cmpwi 7, 0
  00f0868  bt 2, 0xf087c
  00f086c  addic 6, 6, 1
  00f0870  addic 5, 5, 64
  00f0874  cmpwi 6, 6
  00f0878  bt 0, 0xf0860
  00f087c  slwi 8, 6, 6
  00f0880  lis 5, 163
  00f0884  mulli 6, 6, 5376
  00f0888  addic 5, 5, -15296
  00f088c  lis 7, 162
  00f0890  addc 5, 5, 8
  00f0894  li 8, 1
  00f0898  clrldi 5, 5, 32
  00f089c  addic 7, 7, 17984
  00f08a0  addc 6, 7, 6
  00f08a4  stb 8, 4(5)
  00f08a8  sth 4, 0(5)
  00f08ac  stw 6, 16(5)
  00f08b0  extsh 4, 4
  00f08b4  lwz 6, 36(3)
  00f08b8  sldi 4, 4, 2
  00f08bc  stw 6, 20(5)
  00f08c0  lwz 6, 36(3)
  00f08c4  lwz 6, 28(6)
  00f08c8  addc 4, 6, 4
  00f08cc  clrldi 4, 4, 32
  00f08d0  lwz 4, 4(4)
  00f08d4  lbz 6, 3(4)
  00f08d8  sth 6, 2(5)
  00f08dc  lbz 6, 1(4)
  00f08e0  addc 4, 4, 6
  00f08e4  addic 4, 4, 4
  00f08e8  stw 4, 12(5)
  00f08ec  lwz 4, 96(3)
  00f08f0  stw 4, 28(5)
  00f08f4  stw 5, 96(3)
  00f08f8  ori 3, 5, 0
  00f08fc  blr

MB_FreeAnimLayer:   # 0xf0900, 0x94 bytes
  00f0900  stdu 1, -128(1)
  00f0904  mflr 0
  00f0908  std 0, 144(1)
  00f090c  std 31, 120(1)
  00f0910  ori 31, 4, 0
  00f0914  lwz 4, 0(31)
  00f0918  cmpwi 4, 0
  00f091c  bt 2, 0xf0980
  00f0920  lwz 5, 96(3)
  00f0924  cmpw 5, 4
  00f0928  bf 2, 0xf0938
  00f092c  lwz 5, 28(4)
  00f0930  stw 5, 96(3)
  00f0934  b 0xf0964
  00f0938  lwz 3, 28(5)
  00f093c  cmpw 1, 3, 4
  00f0940  cmpwi 3, 0
  00f0944  cror 2, 2, 6
  00f0948  bt 2, 0xf0954
  00f094c  ori 5, 3, 0
  00f0950  b 0xf0938
  00f0954  cmpw 3, 4
  00f0958  bf 2, 0xf0964
  00f095c  lwz 3, 28(4)
  00f0960  stw 3, 28(5)
  00f0964  lwz 3, 0(31)
  00f0968  li 4, 0
  00f096c  li 5, 64
  00f0970  bl 0x5001fc
  00f0974  nop
  00f0978  li 3, 0
  00f097c  stw 3, 0(31)
  00f0980  ld 0, 144(1)
  00f0984  mtlr 0
  00f0988  ld 31, 120(1)
  00f098c  addi 1, 1, 128
  00f0990  blr

MB_InitAnimLayerBuffer:   # 0xf0994, 0x194 bytes
  00f0994  stdu 1, -160(1)
  00f0998  mflr 0
  00f099c  std 0, 176(1)
  00f09a0  std 29, 136(1)
  00f09a4  ori 29, 3, 0
  00f09a8  sldi 3, 4, 2
  00f09ac  std 31, 152(1)
  00f09b0  sldi 4, 5, 2
  00f09b4  std 30, 144(1)
  00f09b8  ori 31, 6, 0
  00f09bc  lwz 30, 24(29)
  00f09c0  lwz 5, 20(29)
  00f09c4  addc 3, 30, 3
  00f09c8  clrldi 3, 3, 32
  00f09cc  std 26, 112(1)
  00f09d0  lbz 30, 8(30)
  00f09d4  lwz 3, 72(3)
  00f09d8  std 27, 120(1)
  00f09dc  lbz 26, 8(5)
  00f09e0  addc 3, 3, 4
  00f09e4  std 28, 128(1)
  00f09e8  slwi 27, 26, 3
  00f09ec  clrldi 28, 3, 32
  00f09f0  addic 4, 27, 24
  00f09f4  ori 3, 31, 0
  00f09f8  rlwinm 4, 4, 0, 16, 27
  00f09fc  lwz 28, 28(28)
  00f0a00  bl 0x500250
  00f0a04  nop
  00f0a08  lhz 3, 10(28)
  00f0a0c  lhz 4, 14(28)
  00f0a10  extsh 6, 3
  00f0a14  extsh 5, 4
  00f0a18  sth 27, 8(31)
  00f0a1c  addc 6, 26, 6
  00f0a20  sth 3, 10(31)
  00f0a24  addc 7, 26, 3
  00f0a28  sth 4, 14(31)
  00f0a2c  addc 5, 6, 5
  00f0a30  slwi 6, 7, 3
  00f0a34  addic 5, 5, 1
  00f0a38  srawi 3, 5, 1
  00f0a3c  sth 6, 12(31)
  00f0a40  slwi 5, 30, 3
  00f0a44  sth 3, 6(31)
  00f0a48  addc 3, 28, 5
  00f0a4c  lhz 4, 6(28)
  00f0a50  addic 3, 3, 16
  00f0a54  extsh 6, 4
  00f0a58  clrldi 4, 3, 32
  00f0a5c  slwi 3, 6, 4
  00f0a60  subc 3, 3, 5
  00f0a64  extsw 3, 3
  00f0a68  cmpwi 3, 0
  00f0a6c  bt 2, 0xf0a88
  00f0a70  addc 6, 31, 27
  00f0a74  ori 5, 3, 0
  00f0a78  addic 3, 6, 16
  00f0a7c  clrldi 3, 3, 32
  00f0a80  bl 0x50027c
  00f0a84  nop
  00f0a88  lwz 3, 24(29)
  00f0a8c  cmpwi 30, 0
  00f0a90  addic 28, 28, 16
  00f0a94  lwz 29, 28(3)
  00f0a98  addic 29, 29, 4
  00f0a9c  bf 1, 0xf0acc
  00f0aa0  lbz 3, 0(29)
  00f0aa4  addic 30, 30, -1
  00f0aa8  lfd 1, 0(28)
  00f0aac  addic 29, 29, 1
  00f0ab0  slwi 3, 3, 3
  00f0ab4  cmpwi 30, 0
  00f0ab8  addc 3, 31, 3
  00f0abc  addic 28, 28, 8
  00f0ac0  clrldi 3, 3, 32
  00f0ac4  stfd 1, 16(3)
  00f0ac8  bt 1, 0xf0aa0
  00f0acc  lhz 3, 6(31)
  00f0ad0  extsh 3, 3
  00f0ad4  slwi 3, 3, 4
  00f0ad8  addc 31, 31, 3
  00f0adc  clrldi 31, 31, 32
  00f0ae0  ld 3, 0(31)
  00f0ae4  cmpdi 3, 0
  00f0ae8  bf 2, 0xf0af4
  00f0aec  li 3, 1
  00f0af0  std 3, 0(31)
  00f0af4  li 3, 0
  00f0af8  bl 0x503244
  00f0afc  nop
  00f0b00  ld 0, 176(1)
  00f0b04  mtlr 0
  00f0b08  ld 26, 112(1)
  00f0b0c  ld 27, 120(1)
  00f0b10  ld 28, 128(1)
  00f0b14  ld 29, 136(1)
  00f0b18  ld 30, 144(1)
  00f0b1c  ld 31, 152(1)
  00f0b20  addi 1, 1, 160
  00f0b24  blr

MB_UpdateAnimLayer:   # 0xf0b38, 0x258 bytes
  00f0b38  stdu 1, -160(1)
  00f0b3c  mflr 0
  00f0b40  std 0, 176(1)
  00f0b44  std 31, 152(1)
  00f0b48  ori 31, 4, 0
  00f0b4c  li 10, 0
  00f0b50  lis 11, 15
  00f0b54  ori 9, 10, 0
  00f0b58  addi 11, 11, 2856
  00f0b5c  lwz 12, 40(31)
  00f0b60  stw 12, 112(1)
  00f0b64  stb 10, 5(31)
  00f0b68  cmpwi 1, 12, 0
  00f0b6c  lbz 8, 33(31)
  00f0b70  lbz 4, 7(31)
  00f0b74  ori 6, 8, 0
  00f0b78  lbz 3, 35(31)
  00f0b7c  lwz 5, 20(31)
  00f0b80  ori 7, 6, 0
  00f0b84  std 30, 144(1)
  00f0b88  std 29, 136(1)
  00f0b8c  std 28, 128(1)
  00f0b90  lfs 1, 112(1)
  00f0b94  bt 6, 0xf0cc0
  00f0b98  lwz 12, 44(31)
  00f0b9c  stw 12, 112(1)
  00f0ba0  cmpwi 12, 0
  00f0ba4  lfs 2, 112(1)
  00f0ba8  bt 2, 0xf0cc0
  00f0bac  lwz 12, 36(31)
  00f0bb0  stw 12, 112(1)
  00f0bb4  lfs 3, 112(1)
  00f0bb8  fmadds 1, 1, 2, 3
  00f0bbc  stfs 1, 112(1)
  00f0bc0  lwz 12, 112(1)
  00f0bc4  stw 12, 36(31)
  00f0bc8  bf 5, 0xf0cc0
  00f0bcc  lfs 3, 0(11)
  00f0bd0  fcmpu 0, 1, 3
  00f0bd4  cror 6, 0, 2
  00f0bd8  bt 6, 0xf0bf8
  00f0bdc  lfs 3, 4(11)
  00f0be0  fcmpu 0, 1, 3
  00f0be4  cror 6, 1, 2
  00f0be8  bt 6, 0xf0bf8
  00f0bec  lis 12, 16256
  00f0bf0  stw 12, 36(31)
  00f0bf4  lfs 1, 8(11)
  00f0bf8  lfs 3, 8(11)
  00f0bfc  fcmpu 0, 1, 3
  00f0c00  bt 0, 0xf0cc0
  00f0c04  rlwinm 6, 3, 2, 22, 29
  00f0c08  addc 11, 6, 5
  00f0c0c  clrldi 11, 11, 32
  00f0c10  ori 30, 9, 0
  00f0c14  stb 4, 6(31)
  00f0c18  ori 12, 8, 0
  00f0c1c  ori 9, 30, 1
  00f0c20  cmpwi 4, 0
  00f0c24  stb 9, 5(31)
  00f0c28  stb 12, 32(31)
  00f0c2c  bt 2, 0xf0c38
  00f0c30  lwz 6, 60(31)
  00f0c34  stw 6, 56(31)
  00f0c38  addic 7, 7, 1
  00f0c3c  stb 3, 34(31)
  00f0c40  clrlwi 8, 7, 24
  00f0c44  stb 7, 33(31)
  00f0c48  lwz 6, 72(11)
  00f0c4c  lbz 28, 16(6)
  00f0c50  cmpw 8, 28
  00f0c54  bt 0, 0xf0c6c
  00f0c58  ori 9, 30, 3
  00f0c5c  stb 10, 33(31)
  00f0c60  ori 7, 10, 0
  00f0c64  ori 8, 7, 0
  00f0c68  stb 9, 5(31)
  00f0c6c  fsubs 1, 1, 3
  00f0c70  rlwinm 12, 12, 2, 22, 29
  00f0c74  addc 6, 6, 12
  00f0c78  clrldi 12, 6, 32
  00f0c7c  fdivs 1, 1, 2
  00f0c80  ori 6, 7, 0
  00f0c84  lwz 12, 28(12)
  00f0c88  stfs 1, 112(1)
  00f0c8c  lwz 30, 112(1)
  00f0c90  stw 30, 36(31)
  00f0c94  lfs 2, 0(12)
  00f0c98  stfs 2, 112(1)
  00f0c9c  fmuls 1, 1, 2
  00f0ca0  fcmpu 0, 1, 3
  00f0ca4  cror 6, 1, 2
  00f0ca8  lwz 12, 112(1)
  00f0cac  stfs 1, 112(1)
  00f0cb0  stw 12, 44(31)
  00f0cb4  lwz 12, 112(1)
  00f0cb8  stw 12, 36(31)
  00f0cbc  bt 6, 0xf0c10
  00f0cc0  lbz 7, 6(31)
  00f0cc4  cmpwi 7, 0
  00f0cc8  bt 2, 0xf0cf4
  00f0ccc  lbz 4, 34(31)
  00f0cd0  lbz 5, 32(31)
  00f0cd4  ori 3, 31, 0
  00f0cd8  lwz 6, 56(31)
  00f0cdc  bl 0xf0994
  00f0ce0  lwz 5, 20(31)
  00f0ce4  lbz 4, 7(31)
  00f0ce8  lbz 6, 33(31)
  00f0cec  lbz 3, 35(31)
  00f0cf0  b 0xf0d20
  00f0cf4  lbz 7, 34(31)
  00f0cf8  lbz 8, 32(31)
  00f0cfc  slwi 7, 7, 2
  00f0d00  slwi 8, 8, 2
  00f0d04  addc 7, 5, 7
  00f0d08  clrldi 7, 7, 32
  00f0d0c  lwz 7, 72(7)
  00f0d10  addc 7, 7, 8
  00f0d14  clrldi 7, 7, 32
  00f0d18  lwz 7, 28(7)
  00f0d1c  stw 7, 56(31)
  00f0d20  cmpwi 4, 0
  00f0d24  bt 2, 0xf0d40
  00f0d28  ori 4, 3, 0
  00f0d2c  clrlwi 5, 6, 24
  00f0d30  ori 3, 31, 0
  00f0d34  lwz 6, 60(31)
  00f0d38  bl 0xf0994
  00f0d3c  b 0xf0d64
  00f0d40  rlwinm 3, 3, 2, 22, 29
  00f0d44  rlwinm 4, 6, 2, 22, 29
  00f0d48  addc 3, 5, 3
  00f0d4c  clrldi 3, 3, 32
  00f0d50  lwz 3, 72(3)
  00f0d54  addc 3, 3, 4
  00f0d58  clrldi 3, 3, 32
  00f0d5c  lwz 3, 28(3)
  00f0d60  stw 3, 60(31)
  00f0d64  ori 3, 31, 0
  00f0d68  bl 0xfbdac
  00f0d6c  nop
  00f0d70  ld 0, 176(1)
  00f0d74  mtlr 0
  00f0d78  ld 28, 128(1)
  00f0d7c  ld 29, 136(1)
  00f0d80  ld 30, 144(1)
  00f0d84  ld 31, 152(1)
  00f0d88  addi 1, 1, 160
  00f0d8c  blr

MB_SyncAnimLayer:   # 0xf0d90, 0x40 bytes
  00f0d90  stdu 1, -128(1)
  00f0d94  mflr 0
  00f0d98  std 0, 144(1)
  00f0d9c  lbz 5, 80(3)
  00f0da0  stb 5, 32(4)
  00f0da4  lbz 5, 81(3)
  00f0da8  stb 5, 33(4)
  00f0dac  lfs 1, 84(3)
  00f0db0  stfs 1, 112(1)
  00f0db4  lwz 5, 112(1)
  00f0db8  stw 5, 36(4)
  00f0dbc  bl 0xf0b38
  00f0dc0  ld 0, 144(1)
  00f0dc4  mtlr 0
  00f0dc8  addi 1, 1, 128
  00f0dcc  blr

MB_StartAnimLayer:   # 0xf0dd8, 0xd0 bytes
  00f0dd8  stdu 1, -128(1)
  00f0ddc  mflr 0
  00f0de0  std 0, 144(1)
  00f0de4  ori 9, 4, 0
  00f0de8  lis 4, 15
  00f0dec  stw 7, 112(1)
  00f0df0  li 10, 0
  00f0df4  stw 7, 116(1)
  00f0df8  lis 11, 16256
  00f0dfc  stw 7, 120(1)
  00f0e00  li 0, 112
  00f0e04  stw 7, 124(1)
  00f0e08  lbz 7, 83(3)
  00f0e0c  addi 4, 4, 3536
  00f0e10  vspltisw 2, -1
  00f0e14  vspltisw 6, -1
  00f0e18  lvx 3, 1, 0
  00f0e1c  stb 7, 34(9)
  00f0e20  vcfsx 3, 3, 0
  00f0e24  vslw 2, 2, 2
  00f0e28  lbz 7, 81(3)
  00f0e2c  stw 10, 36(9)
  00f0e30  stb 7, 32(9)
  00f0e34  stb 5, 35(9)
  00f0e38  stb 6, 33(9)
  00f0e3c  stw 11, 40(9)
  00f0e40  lvlx 4, 0, 4
  00f0e44  vspltw 4, 4, 0
  00f0e48  vslw 6, 6, 6
  00f0e4c  vrefp 5, 3
  00f0e50  vspltisw 8, -1
  00f0e54  li 5, 44
  00f0e58  ori 4, 3, 0
  00f0e5c  cmpwi 8, 0
  00f0e60  ori 3, 9, 0
  00f0e64  vslw 8, 8, 8
  00f0e68  vnmsubfp 7, 5, 3, 4
  00f0e6c  vmaddfp 2, 5, 7, 2
  00f0e70  vnmsubfp 5, 2, 3, 4
  00f0e74  vmaddfp 2, 2, 5, 6
  00f0e78  vnmsubfp 3, 2, 3, 4
  00f0e7c  vmaddfp 2, 2, 3, 8
  00f0e80  stvewx 2, 5, 9
  00f0e84  bt 2, 0xf0e98
  00f0e88  ori 5, 3, 0
  00f0e8c  ori 3, 4, 0
  00f0e90  ori 4, 5, 0
  00f0e94  bl 0xf0b38
  00f0e98  ld 0, 144(1)
  00f0e9c  mtlr 0
  00f0ea0  addi 1, 1, 128
  00f0ea4  blr

AttachManipulator:   # 0xf0ea8, 0x74 bytes
  00f0ea8  lbz 6, 1(5)
  00f0eac  cmpwi 6, 0
  00f0eb0  bf 2, 0xf0f18
  00f0eb4  li 6, 1
  00f0eb8  lis 7, 16256
  00f0ebc  rlwinm 8, 4, 2, 22, 29
  00f0ec0  stb 6, 1(5)
  00f0ec4  stb 4, 0(5)
  00f0ec8  lwz 4, 36(3)
  00f0ecc  lis 6, 28672
  00f0ed0  stw 7, 28(5)
  00f0ed4  stw 7, 32(5)
  00f0ed8  stw 7, 36(5)
  00f0edc  stw 7, 40(5)
  00f0ee0  lwz 4, 28(4)
  00f0ee4  lwz 7, 100(3)
  00f0ee8  addc 4, 4, 8
  00f0eec  clrldi 4, 4, 32
  00f0ef0  lwz 4, 4(4)
  00f0ef4  addic 8, 4, 4
  00f0ef8  clrldi 8, 8, 32
  00f0efc  lbz 4, 1(4)
  00f0f00  lbzx 4, 8, 4
  00f0f04  stw 7, 8(5)
  00f0f08  slwi 4, 4, 6
  00f0f0c  stw 5, 100(3)
  00f0f10  addc 4, 4, 6
  00f0f14  stw 4, 4(5)
  00f0f18  blr

DetachManipulator:   # 0xf0f1c, 0x80 bytes
  00f0f1c  stdu 1, -112(1)
  00f0f20  mflr 0
  00f0f24  std 0, 128(1)
  00f0f28  ori 5, 4, 0
  00f0f2c  cmpwi 5, 0
  00f0f30  bt 2, 0xf0f8c
  00f0f34  lwz 5, 100(3)
  00f0f38  cmpw 5, 4
  00f0f3c  bf 2, 0xf0f4c
  00f0f40  lwz 5, 8(4)
  00f0f44  stw 5, 100(3)
  00f0f48  b 0xf0f78
  00f0f4c  lwz 3, 8(5)
  00f0f50  cmpwi 3, 0
  00f0f54  bt 2, 0xf0f68
  00f0f58  cmpw 3, 4
  00f0f5c  bt 2, 0xf0f68
  00f0f60  ori 5, 3, 0
  00f0f64  b 0xf0f4c
  00f0f68  cmpw 3, 4
  00f0f6c  bf 2, 0xf0f78
  00f0f70  lwz 3, 8(4)
  00f0f74  stw 3, 8(5)
  00f0f78  ori 3, 4, 0
  00f0f7c  li 4, 0
  00f0f80  li 5, 64
  00f0f84  bl 0x5001fc
  00f0f88  nop
  00f0f8c  ld 0, 128(1)
  00f0f90  mtlr 0
  00f0f94  addi 1, 1, 112
  00f0f98  blr

AnimCache_Register:   # 0xf0f9c, 0x4c bytes
  00f0f9c  lis 4, 163
  00f0fa0  li 7, 0
  00f0fa4  addic 4, 4, 17856
  00f0fa8  slwi 6, 7, 2
  00f0fac  extsw 6, 6
  00f0fb0  lwzx 5, 4, 6
  00f0fb4  cmpwi 5, 0
  00f0fb8  bt 2, 0xf0fc4
  00f0fbc  cmpw 5, 3
  00f0fc0  bf 2, 0xf0fd0
  00f0fc4  stwx 3, 4, 6
  00f0fc8  ori 3, 7, 0
  00f0fcc  b 0xf0fe4
  00f0fd0  addic 7, 7, 1
  00f0fd4  extsw 7, 7
  00f0fd8  cmpwi 7, 16
  00f0fdc  bt 0, 0xf0fa8
  00f0fe0  li 3, -1
  00f0fe4  blr

CleanAnimationCache:   # 0xf0fe8, 0x50 bytes
  00f0fe8  li 6, 0
  00f0fec  lis 3, 163
  00f0ff0  ori 4, 6, 0
  00f0ff4  addic 3, 3, 17856
  00f0ff8  lwz 5, 0(3)
  00f0ffc  cmpwi 5, 0
  00f1000  bt 2, 0xf1024
  00f1004  lbz 7, 32(5)
  00f1008  rlwinm 7, 7, 0, 24, 24
  00f100c  cmpwi 7, 0
  00f1010  bf 2, 0xf1020
  00f1014  lbz 5, 82(5)
  00f1018  cmpwi 5, 255
  00f101c  bt 2, 0xf1024
  00f1020  stw 4, 0(3)
  00f1024  addic 6, 6, 1
  00f1028  addic 3, 3, 4
  00f102c  cmpwi 6, 16
  00f1030  bt 0, 0xf0ff8
  00f1034  blr

GetBoneTransformations:   # 0xf1038, 0xdc bytes
  00f1038  stdu 1, -224(1)
  00f103c  mflr 0
  00f1040  std 0, 240(1)
  00f1044  stfd 31, 216(1)
  00f1048  std 30, 200(1)
  00f104c  std 31, 208(1)
  00f1050  ori 30, 3, 0
  00f1054  ori 31, 5, 0
  00f1058  stw 4, 176(1)
  00f105c  addic 5, 1, 176
  00f1060  ori 6, 31, 0
  00f1064  li 4, 1
  00f1068  std 29, 192(1)
  00f106c  lfs 31, 44(30)
  00f1070  bl 0xf9d18
  00f1074  nop
  00f1078  lfs 1, 48(31)
  00f107c  addic 29, 1, 112
  00f1080  lfs 2, 52(31)
  00f1084  addic 4, 30, 192
  00f1088  fmuls 1, 1, 31
  00f108c  lfs 3, 56(31)
  00f1090  fmuls 2, 2, 31
  00f1094  ori 3, 29, 0
  00f1098  fmuls 3, 3, 31
  00f109c  stfs 1, 48(31)
  00f10a0  stfs 2, 52(31)
  00f10a4  stfs 3, 56(31)
  00f10a8  bl 0x500f6c
  00f10ac  nop
  00f10b0  ori 3, 31, 0
  00f10b4  ori 4, 29, 0
  00f10b8  ori 5, 31, 0
  00f10bc  bl 0x50162c
  00f10c0  nop
  00f10c4  lfs 1, 48(31)
  00f10c8  lfs 2, 16(30)
  00f10cc  fadds 1, 1, 2
  00f10d0  lfs 2, 52(31)
  00f10d4  lfs 3, 56(31)
  00f10d8  stfs 1, 48(31)
  00f10dc  lfs 1, 20(30)
  00f10e0  fadds 1, 2, 1
  00f10e4  stfs 1, 52(31)
  00f10e8  lfs 1, 24(30)
  00f10ec  fadds 1, 3, 1
  00f10f0  stfs 1, 56(31)
  00f10f4  ld 0, 240(1)
  00f10f8  mtlr 0
  00f10fc  lfd 31, 216(1)
  00f1100  ld 29, 192(1)
  00f1104  ld 30, 200(1)
  00f1108  ld 31, 208(1)
  00f110c  addi 1, 1, 224
  00f1110  blr

GetBonePosition:   # 0xf1114, 0x124 bytes
  00f1114  stdu 1, -208(1)
  00f1118  mflr 0
  00f111c  std 0, 224(1)
  00f1120  stfd 31, 200(1)
  00f1124  std 31, 192(1)
  00f1128  ori 31, 3, 0
  00f112c  std 30, 184(1)
  00f1130  stw 4, 176(1)
  00f1134  ori 30, 5, 0
  00f1138  addic 5, 1, 176
  00f113c  addic 6, 1, 112
  00f1140  li 4, 1
  00f1144  lfs 31, 44(31)
  00f1148  bl 0xf9d18
  00f114c  nop
  00f1150  lfs 1, 160(1)
  00f1154  lfs 2, 164(1)
  00f1158  fmuls 1, 1, 31
  00f115c  lfs 3, 168(1)
  00f1160  fmuls 2, 2, 31
  00f1164  lfs 4, 172(1)
  00f1168  fmuls 3, 3, 31
  00f116c  stfs 4, 12(30)
  00f1170  stfs 1, 0(30)
  00f1174  stfs 2, 4(30)
  00f1178  stfs 3, 8(30)
  00f117c  lfs 5, 208(31)
  00f1180  lfs 6, 192(31)
  00f1184  lfs 7, 212(31)
  00f1188  fmuls 5, 5, 2
  00f118c  lfs 8, 224(31)
  00f1190  fmuls 7, 7, 2
  00f1194  lfs 9, 216(31)
  00f1198  lfs 10, 196(31)
  00f119c  fmuls 9, 9, 2
  00f11a0  lfs 11, 204(31)
  00f11a4  lfs 12, 200(31)
  00f11a8  fmadds 4, 11, 1, 4
  00f11ac  fmadds 5, 6, 1, 5
  00f11b0  fmadds 6, 10, 1, 7
  00f11b4  lfs 7, 228(31)
  00f11b8  lfs 10, 232(31)
  00f11bc  fmadds 1, 12, 1, 9
  00f11c0  lfs 9, 236(31)
  00f11c4  lfs 11, 220(31)
  00f11c8  fmadds 4, 9, 3, 4
  00f11cc  fmadds 5, 8, 3, 5
  00f11d0  fmadds 6, 7, 3, 6
  00f11d4  fmadds 1, 10, 3, 1
  00f11d8  fmadds 2, 11, 2, 4
  00f11dc  stfs 5, 0(30)
  00f11e0  stfs 6, 4(30)
  00f11e4  stfs 1, 8(30)
  00f11e8  stfs 2, 12(30)
  00f11ec  lfs 1, 16(31)
  00f11f0  lfs 2, 0(30)
  00f11f4  fadds 1, 2, 1
  00f11f8  lfs 2, 4(30)
  00f11fc  lfs 3, 8(30)
  00f1200  stfs 1, 0(30)
  00f1204  lfs 1, 20(31)
  00f1208  fadds 1, 2, 1
  00f120c  stfs 1, 4(30)
  00f1210  lfs 1, 24(31)
  00f1214  fadds 1, 3, 1
  00f1218  stfs 1, 8(30)
  00f121c  ld 0, 224(1)
  00f1220  mtlr 0
  00f1224  lfd 31, 200(1)
  00f1228  ld 30, 184(1)
  00f122c  ld 31, 192(1)
  00f1230  addi 1, 1, 208
  00f1234  blr

GetMobyJointsWorldPos:   # 0xf1238, 0x12c bytes
  00f1238  stdu 1, -144(1)
  00f123c  mflr 0
  00f1240  std 0, 160(1)
  00f1244  stfd 31, 136(1)
  00f1248  std 30, 120(1)
  00f124c  std 29, 112(1)
  00f1250  ori 29, 3, 0
  00f1254  std 31, 128(1)
  00f1258  ori 30, 4, 0
  00f125c  ori 31, 6, 0
  00f1260  lfs 31, 44(29)
  00f1264  bl 0xf9fc0
  00f1268  nop
  00f126c  cmpwi 30, 0
  00f1270  bf 1, 0xf1344
  00f1274  lfs 1, 0(31)
  00f1278  lfs 2, 4(31)
  00f127c  fmuls 1, 1, 31
  00f1280  lfs 3, 8(31)
  00f1284  fmuls 2, 2, 31
  00f1288  lfs 4, 12(31)
  00f128c  fmuls 3, 3, 31
  00f1290  addic 30, 30, -1
  00f1294  cmpwi 30, 0
  00f1298  stfs 1, 0(31)
  00f129c  stfs 2, 4(31)
  00f12a0  stfs 3, 8(31)
  00f12a4  lfs 5, 208(29)
  00f12a8  lfs 6, 212(29)
  00f12ac  lfs 7, 216(29)
  00f12b0  fmuls 5, 5, 2
  00f12b4  lfs 8, 192(29)
  00f12b8  fmuls 6, 6, 2
  00f12bc  lfs 9, 204(29)
  00f12c0  fmuls 7, 7, 2
  00f12c4  lfs 10, 196(29)
  00f12c8  fmadds 4, 9, 1, 4
  00f12cc  lfs 9, 200(29)
  00f12d0  lfs 11, 224(29)
  00f12d4  lfs 12, 236(29)
  00f12d8  fmadds 5, 8, 1, 5
  00f12dc  fmadds 6, 10, 1, 6
  00f12e0  fmadds 1, 9, 1, 7
  00f12e4  lfs 8, 228(29)
  00f12e8  fmadds 4, 12, 3, 4
  00f12ec  lfs 7, 232(29)
  00f12f0  lfs 9, 220(29)
  00f12f4  fmadds 5, 11, 3, 5
  00f12f8  fmadds 6, 8, 3, 6
  00f12fc  fmadds 1, 7, 3, 1
  00f1300  fmadds 2, 9, 2, 4
  00f1304  stfs 5, 0(31)
  00f1308  stfs 6, 4(31)
  00f130c  stfs 1, 8(31)
  00f1310  stfs 2, 12(31)
  00f1314  lfs 3, 16(29)
  00f1318  fadds 3, 5, 3
  00f131c  stfs 3, 0(31)
  00f1320  lfs 3, 20(29)
  00f1324  fadds 3, 6, 3
  00f1328  stfs 3, 4(31)
  00f132c  lfs 3, 24(29)
  00f1330  stfs 2, 12(31)
  00f1334  fadds 1, 1, 3
  00f1338  stfs 1, 8(31)
  00f133c  addic 31, 31, 16
  00f1340  bt 1, 0xf1274
  00f1344  ld 0, 160(1)
  00f1348  mtlr 0
  00f134c  lfd 31, 136(1)
  00f1350  ld 29, 112(1)
  00f1354  ld 30, 120(1)
  00f1358  ld 31, 128(1)
  00f135c  addi 1, 1, 144
  00f1360  blr

GetMobyJointsWorldMtx:   # 0xf1364, 0xe0 bytes
  00f1364  stdu 1, -224(1)
  00f1368  mflr 0
  00f136c  std 0, 240(1)
  00f1370  stfd 31, 216(1)
  00f1374  std 29, 192(1)
  00f1378  std 31, 208(1)
  00f137c  std 28, 184(1)
  00f1380  ori 29, 3, 0
  00f1384  ori 31, 6, 0
  00f1388  std 30, 200(1)
  00f138c  ori 28, 5, 0
  00f1390  ori 30, 4, 0
  00f1394  addic 3, 1, 112
  00f1398  addic 4, 29, 192
  00f139c  lfs 31, 44(29)
  00f13a0  bl 0x500f6c
  00f13a4  nop
  00f13a8  ori 3, 29, 0
  00f13ac  ori 4, 30, 0
  00f13b0  ori 5, 28, 0
  00f13b4  ori 6, 31, 0
  00f13b8  bl 0xf9d18
  00f13bc  nop
  00f13c0  cmpwi 30, 0
  00f13c4  li 28, 0
  00f13c8  bf 1, 0xf1420
  00f13cc  addic 4, 1, 112
  00f13d0  ori 3, 31, 0
  00f13d4  ori 5, 31, 0
  00f13d8  bl 0x50162c
  00f13dc  nop
  00f13e0  lfs 1, 48(31)
  00f13e4  lfs 2, 16(29)
  00f13e8  addic 28, 28, 1
  00f13ec  fmadds 1, 1, 31, 2
  00f13f0  lfs 2, 52(31)
  00f13f4  lfs 3, 56(31)
  00f13f8  cmpw 28, 30
  00f13fc  stfs 1, 48(31)
  00f1400  lfs 1, 20(29)
  00f1404  fmadds 1, 2, 31, 1
  00f1408  stfs 1, 52(31)
  00f140c  lfs 1, 24(29)
  00f1410  fmadds 1, 3, 31, 1
  00f1414  stfs 1, 56(31)
  00f1418  addic 31, 31, 64
  00f141c  bt 0, 0xf13cc
  00f1420  ld 0, 240(1)
  00f1424  mtlr 0
  00f1428  lfd 31, 216(1)
  00f142c  ld 28, 184(1)
  00f1430  ld 29, 192(1)
  00f1434  ld 30, 200(1)
  00f1438  ld 31, 208(1)
  00f143c  addi 1, 1, 224
  00f1440  blr

STUB_000f1444:   # 0xf1444, 0x4 bytes
  00f1444  blr

STUB_000f1448:   # 0xf1448, 0x4 bytes
  00f1448  blr

UpdateHeroLightAngle:   # 0xf1478, 0x2a4 bytes
  00f1478  stdu 1, -176(1)
  00f147c  mflr 0
  00f1480  std 0, 192(1)
  00f1484  lis 3, 151
  00f1488  lis 4, 15
  00f148c  std 31, 168(1)
  00f1490  addic 3, 3, -25376
  00f1494  addi 31, 4, 5196
  00f1498  addic 4, 1, 112
  00f149c  lwz 3, 8320(3)
  00f14a0  bl 0xf1f28
  00f14a4  nop
  00f14a8  lwz 3, 112(1)
  00f14ac  lwz 4, 116(1)
  00f14b0  lfs 1, 112(1)
  00f14b4  lfs 2, 116(1)
  00f14b8  fabs 5, 1
  00f14bc  fabs 6, 2
  00f14c0  rlwinm 4, 4, 3, 29, 29
  00f14c4  lis 5, 115
  00f14c8  addic 5, 5, 22784
  00f14cc  fsubs 1, 5, 6
  00f14d0  stfs 1, 128(1)
  00f14d4  lfs 1, 0(31)
  00f14d8  lwz 6, 128(1)
  00f14dc  lfs 2, 128(1)
  00f14e0  rlwimi 4, 6, 2, 30, 30
  00f14e4  fsub 4, 2, 1
  00f14e8  fsub 7, 2, 1
  00f14ec  rlwimi 4, 3, 4, 28, 28
  00f14f0  ori 3, 5, 0
  00f14f4  rlwimi 3, 4, 2, 26, 28
  00f14f8  slwi 4, 4, 2
  00f14fc  clrldi 3, 3, 32
  00f1500  fsel 4, 4, 5, 6
  00f1504  lfsx 3, 5, 4
  00f1508  fsel 5, 7, 6, 5
  00f150c  lfs 2, 4(3)
  00f1510  fcmpu 0, 4, 1
  00f1514  bt 1, 0xf151c
  00f1518  b 0xf1640
  00f151c  fsubs 6, 5, 4
  00f1520  fadds 4, 5, 4
  00f1524  addic 6, 1, 16
  00f1528  li 3, 2
  00f152c  addic 5, 6, 116
  00f1530  addic 4, 6, 132
  00f1534  mtctr 3
  00f1538  fdivs 4, 6, 4
  00f153c  fmuls 6, 4, 4
  00f1540  stfs 4, 144(1)
  00f1544  stfs 4, 136(1)
  00f1548  stfs 4, 140(1)
  00f154c  stfs 4, 132(1)
  00f1550  lfs 7, 144(1)
  00f1554  lfs 8, 136(1)
  00f1558  lfs 9, 140(1)
  00f155c  fmuls 4, 6, 6
  00f1560  fmuls 8, 8, 6
  00f1564  fmuls 7, 7, 4
  00f1568  fmuls 5, 4, 4
  00f156c  fmuls 4, 9, 4
  00f1570  stfs 8, 136(1)
  00f1574  fmuls 6, 7, 6
  00f1578  stfs 4, 140(1)
  00f157c  stfs 6, 144(1)
  00f1580  lfs 4, 116(6)
  00f1584  fmuls 4, 4, 5
  00f1588  stfs 4, 132(6)
  00f158c  lfs 4, 4(5)
  00f1590  addic 6, 6, 8
  00f1594  addic 5, 5, 8
  00f1598  fmuls 4, 4, 5
  00f159c  stfs 4, 4(4)
  00f15a0  addic 4, 4, 8
  00f15a4  bdnz 0xf1580
  00f15a8  ori 7, 1, 0
  00f15ac  lis 6, 115
  00f15b0  li 8, 4
  00f15b4  addic 5, 7, 132
  00f15b8  addic 6, 6, 22752
  00f15bc  ori 4, 5, 0
  00f15c0  mtctr 8
  00f15c4  lfs 4, 132(7)
  00f15c8  lfs 5, 0(6)
  00f15cc  fmuls 4, 4, 5
  00f15d0  lfs 5, 4(6)
  00f15d4  addic 6, 6, 8
  00f15d8  stfs 4, 132(7)
  00f15dc  lfs 4, 4(5)
  00f15e0  addic 7, 7, 8
  00f15e4  fmuls 4, 4, 5
  00f15e8  stfs 4, 4(5)
  00f15ec  addic 5, 5, 8
  00f15f0  bdnz 0xf15c4
  00f15f4  ori 5, 3, 0
  00f15f8  ori 3, 1, 0
  00f15fc  mtctr 5
  00f1600  lfs 4, 132(3)
  00f1604  fadds 1, 1, 4
  00f1608  addic 3, 3, 16
  00f160c  lfs 4, 4(4)
  00f1610  lfs 5, 8(4)
  00f1614  lfs 6, 12(4)
  00f1618  addic 4, 4, 16
  00f161c  fadds 1, 1, 4
  00f1620  fadds 1, 1, 5
  00f1624  fadds 1, 1, 6
  00f1628  bdnz 0xf1600
  00f162c  lis 3, 15
  00f1630  addi 3, 3, 5196
  00f1634  lfs 4, 4(3)
  00f1638  fadds 1, 1, 4
  00f163c  fmadds 1, 1, 3, 2
  00f1640  lis 3, 15
  00f1644  addi 3, 3, 5196
  00f1648  lfs 2, 8(3)
  00f164c  lfs 3, 12(3)
  00f1650  fadds 2, 1, 2
  00f1654  fsubs 5, 3, 1
  00f1658  lfs 4, 16(3)
  00f165c  lis 5, -16515
  00f1660  ori 5, 5, 28836
  00f1664  fsubs 3, 3, 2
  00f1668  fsub 7, 1, 5
  00f166c  fsubs 6, 4, 2
  00f1670  fsubs 4, 4, 1
  00f1674  fsub 8, 2, 3
  00f1678  fsel 1, 7, 5, 1
  00f167c  lfs 5, 20(3)
  00f1680  fsel 2, 8, 3, 2
  00f1684  fsub 3, 4, 1
  00f1688  fsub 8, 6, 2
  00f168c  fsel 1, 3, 4, 1
  00f1690  lfs 3, 24(3)
  00f1694  lfs 4, 28(3)
  00f1698  lfs 9, 32(3)
  00f169c  fsel 2, 8, 6, 2
  00f16a0  fmuls 6, 1, 1
  00f16a4  fmuls 7, 2, 2
  00f16a8  fmuls 8, 6, 1
  00f16ac  fmuls 10, 7, 2
  00f16b0  fmuls 11, 6, 8
  00f16b4  fmadds 1, 8, 5, 1
  00f16b8  lfs 8, 36(3)
  00f16bc  lis 3, 165
  00f16c0  addic 4, 3, -15136
  00f16c4  fmuls 12, 7, 10
  00f16c8  fmadds 2, 10, 5, 2
  00f16cc  fmuls 5, 6, 11
  00f16d0  fmadds 1, 11, 3, 1
  00f16d4  stw 5, 8(4)
  00f16d8  fmuls 10, 7, 12
  00f16dc  fmadds 2, 12, 3, 2
  00f16e0  fmuls 3, 6, 5
  00f16e4  fmadds 1, 5, 4, 1
  00f16e8  fmuls 5, 7, 10
  00f16ec  fmadds 2, 10, 4, 2
  00f16f0  fmadds 1, 3, 9, 1
  00f16f4  fmadds 2, 5, 9, 2
  00f16f8  fmuls 1, 1, 8
  00f16fc  fmuls 2, 2, 8
  00f1700  stfs 1, 4(4)
  00f1704  stfs 2, -15136(3)
  00f1708  ld 0, 192(1)
  00f170c  mtlr 0
  00f1710  ld 31, 168(1)
  00f1714  addi 1, 1, 176
  00f1718  blr

DrawMobyShadows:   # 0xf171c, 0x128 bytes
  00f171c  stdu 1, -144(1)
  00f1720  mflr 0
  00f1724  std 0, 160(1)
  00f1728  lis 3, 165
  00f172c  lwz 3, -24752(3)
  00f1730  std 31, 136(1)
  00f1734  std 30, 128(1)
  00f1738  std 29, 120(1)
  00f173c  std 28, 112(1)
  00f1740  cmpwi 3, 0
  00f1744  bf 2, 0xf1774
  00f1748  lis 3, 165
  00f174c  li 4, 0
  00f1750  lwz 5, -24748(3)
  00f1754  stb 4, 0(5)
  00f1758  lwz 5, -24748(3)
  00f175c  stb 4, 1(5)
  00f1760  lwz 5, -24748(3)
  00f1764  stb 4, 2(5)
  00f1768  lwz 3, -24748(3)
  00f176c  stb 4, 3(3)
  00f1770  b 0xf1824
  00f1774  lis 31, 230
  00f1778  lis 30, 165
  00f177c  li 29, 0
  00f1780  lwz 28, -21928(31)
  00f1784  lwz 4, -24748(30)
  00f1788  addic 3, 28, 16
  00f178c  stw 3, -21928(31)
  00f1790  stb 29, 0(4)
  00f1794  lwz 3, -24748(30)
  00f1798  lwz 4, -21928(31)
  00f179c  stb 4, 1(3)
  00f17a0  lwz 3, -24748(30)
  00f17a4  stb 29, 2(3)
  00f17a8  lwz 3, -24748(30)
  00f17ac  stb 29, 3(3)
  00f17b0  bl 0x1534fc
  00f17b4  nop
  00f17b8  lis 3, 165
  00f17bc  addic 3, 3, -24352
  00f17c0  bl 0x152df8
  00f17c4  nop
  00f17c8  lwz 3, -21928(31)
  00f17cc  stb 29, 0(3)
  00f17d0  lwz 3, -24748(30)
  00f17d4  lwz 4, -21928(31)
  00f17d8  addic 3, 3, 16
  00f17dc  stb 3, 1(4)
  00f17e0  lwz 3, -21928(31)
  00f17e4  lis 4, 101
  00f17e8  stb 29, 2(3)
  00f17ec  lwz 3, -21928(31)
  00f17f0  stb 29, 3(3)
  00f17f4  lwz 3, -21928(31)
  00f17f8  addic 5, 3, 16
  00f17fc  addic 3, 4, 11716
  00f1800  li 4, 8
  00f1804  stw 5, -21928(31)
  00f1808  stb 29, 0(28)
  00f180c  lwz 5, -21928(31)
  00f1810  stb 29, 2(28)
  00f1814  stb 5, 1(28)
  00f1818  stb 29, 3(28)
  00f181c  bl 0x6562c
  00f1820  nop
  00f1824  ld 0, 160(1)
  00f1828  mtlr 0
  00f182c  ld 28, 112(1)
  00f1830  ld 29, 120(1)
  00f1834  ld 30, 128(1)
  00f1838  ld 31, 136(1)
  00f183c  addi 1, 1, 144
  00f1840  blr

STUB_000f1844:   # 0xf1844, 0x4 bytes
  00f1844  blr

STUB_000f1848:   # 0xf1848, 0x4 bytes
  00f1848  blr

STUB_000f184c:   # 0xf184c, 0x4 bytes
  00f184c  blr

DrawMobyDepth:   # 0xf1850, 0xe4 bytes
  00f1850  stdu 1, -128(1)
  00f1854  mflr 0
  00f1858  std 0, 144(1)
  00f185c  lis 3, 144
  00f1860  std 31, 120(1)
  00f1864  lis 4, 273
  00f1868  addic 31, 3, -23532
  00f186c  addic 3, 4, 5888
  00f1870  li 5, 3
  00f1874  std 30, 112(1)
  00f1878  lwz 4, 24(31)
  00f187c  bl 0x4eda68
  00f1880  nop
  00f1884  li 3, 0
  00f1888  lwz 30, 28(31)
  00f188c  li 4, 1
  00f1890  li 5, 0
  00f1894  li 6, 1
  00f1898  li 7, 128
  00f189c  bl 0x502ea8
  00f18a0  nop
  00f18a4  ori 4, 3, 0
  00f18a8  ori 3, 30, 0
  00f18ac  bl 0x4d5fe4
  00f18b0  nop
  00f18b4  li 3, 0
  00f18b8  lwz 31, 40(31)
  00f18bc  li 4, 1
  00f18c0  li 5, 0
  00f18c4  li 6, 1
  00f18c8  li 7, 128
  00f18cc  bl 0x502ea8
  00f18d0  nop
  00f18d4  ori 4, 3, 0
  00f18d8  ori 3, 31, 0
  00f18dc  bl 0x4d5fe4
  00f18e0  nop
  00f18e4  lis 3, 144
  00f18e8  lis 4, 1
  00f18ec  li 5, 16
  00f18f0  ori 4, 4, 57344
  00f18f4  lwz 3, -23488(3)
  00f18f8  bl 0x4fe098
  00f18fc  nop
  00f1900  lis 4, 164
  00f1904  lis 5, 164
  00f1908  lis 6, 165
  00f190c  li 7, 0
  00f1910  stw 3, -28520(4)
  00f1914  stw 3, -28516(5)
  00f1918  stw 7, -25788(6)
  00f191c  ld 0, 144(1)
  00f1920  mtlr 0
  00f1924  ld 30, 112(1)
  00f1928  ld 31, 120(1)
  00f192c  addi 1, 1, 128
  00f1930  blr

MB_AddToDrawList:   # 0xf1934, 0x40 bytes
  00f1934  stdu 1, -128(1)
  00f1938  mflr 0
  00f193c  std 0, 144(1)
  00f1940  std 31, 120(1)
  00f1944  lis 31, 164
  00f1948  ori 5, 4, 0
  00f194c  li 6, 0
  00f1950  lwz 4, -28520(31)
  00f1954  bl 0xf7af0
  00f1958  nop
  00f195c  stw 3, -28520(31)
  00f1960  ld 0, 144(1)
  00f1964  mtlr 0
  00f1968  ld 31, 120(1)
  00f196c  addi 1, 1, 128
  00f1970  blr

DrawMobyList:   # 0xf1974, 0x104 bytes
  00f1974  stdu 1, -128(1)
  00f1978  mflr 0
  00f197c  std 0, 144(1)
  00f1980  lis 3, 101
  00f1984  std 31, 120(1)
  00f1988  li 4, 3
  00f198c  addic 31, 3, 11728
  00f1990  ori 3, 31, 0
  00f1994  bl 0x65630
  00f1998  nop
  00f199c  ori 3, 31, 0
  00f19a0  li 4, 5
  00f19a4  bl 0x6562c
  00f19a8  nop
  00f19ac  lis 31, 150
  00f19b0  addic 31, 31, -23188
  00f19b4  lwz 3, 40(31)
  00f19b8  cmpwi 3, 0
  00f19bc  bt 2, 0xf1a10
  00f19c0  lis 3, 164
  00f19c4  lis 4, 164
  00f19c8  lis 5, 11915
  00f19cc  ori 5, 5, 41705
  00f19d0  lwz 3, -28516(3)
  00f19d4  lwz 4, -28520(4)
  00f19d8  subc 4, 4, 3
  00f19dc  mulhw 4, 5, 4
  00f19e0  srawi 4, 4, 5
  00f19e4  srwi 5, 4, 31
  00f19e8  addc 4, 4, 5
  00f19ec  clrldi 4, 4, 32
  00f19f0  bl 0xf7a44
  00f19f4  nop
  00f19f8  lis 3, 165
  00f19fc  lwz 3, -25788(3)
  00f1a00  cmpwi 3, 0
  00f1a04  bt 2, 0xf1a10
  00f1a08  bl 0xf5a7c
  00f1a0c  nop
  00f1a10  lis 3, 101
  00f1a14  li 4, 3
  00f1a18  addic 3, 3, 11744
  00f1a1c  bl 0x6562c
  00f1a20  nop
  00f1a24  lwz 3, 40(31)
  00f1a28  cmpwi 3, 0
  00f1a2c  bt 2, 0xf1a44
  00f1a30  lis 3, 165
  00f1a34  lwz 3, -24748(3)
  00f1a38  cmpwi 3, 0
  00f1a3c  bt 2, 0xf1a44
  00f1a40  bl 0xf171c
  00f1a44  lis 31, 144
  00f1a48  addic 3, 31, -23532
  00f1a4c  lwz 3, 8(3)
  00f1a50  bl 0x50ec5c
  00f1a54  nop
  00f1a58  lwz 3, -23532(31)
  00f1a5c  bl 0x50ec5c
  00f1a60  nop
  00f1a64  ld 0, 144(1)
  00f1a68  mtlr 0
  00f1a6c  ld 31, 120(1)
  00f1a70  addi 1, 1, 128
  00f1a74  blr

DrawMobys:   # 0xf1a78, 0x1f8 bytes
  00f1a78  stdu 1, -144(1)
  00f1a7c  mflr 0
  00f1a80  std 0, 160(1)
  00f1a84  std 30, 128(1)
  00f1a88  lis 30, 144
  00f1a8c  lis 3, 273
  00f1a90  addic 30, 30, -23532
  00f1a94  addic 3, 3, 5888
  00f1a98  li 5, 3
  00f1a9c  std 31, 136(1)
  00f1aa0  std 29, 120(1)
  00f1aa4  lwz 4, 24(30)
  00f1aa8  bl 0x4eda68
  00f1aac  nop
  00f1ab0  li 3, 0
  00f1ab4  lwz 31, 28(30)
  00f1ab8  li 4, 1
  00f1abc  li 5, 0
  00f1ac0  li 6, 1
  00f1ac4  li 7, 128
  00f1ac8  bl 0x502ea8
  00f1acc  nop
  00f1ad0  ori 4, 3, 0
  00f1ad4  ori 3, 31, 0
  00f1ad8  bl 0x4d5fe4
  00f1adc  nop
  00f1ae0  li 3, 0
  00f1ae4  lwz 31, 40(30)
  00f1ae8  li 4, 1
  00f1aec  li 5, 0
  00f1af0  li 6, 1
  00f1af4  li 7, 128
  00f1af8  bl 0x502ea8
  00f1afc  nop
  00f1b00  ori 4, 3, 0
  00f1b04  ori 3, 31, 0
  00f1b08  bl 0x4d5fe4
  00f1b0c  nop
  00f1b10  lis 3, 144
  00f1b14  lis 4, 1
  00f1b18  li 5, 16
  00f1b1c  ori 4, 4, 57344
  00f1b20  lwz 3, -23488(3)
  00f1b24  bl 0x4fe098
  00f1b28  nop
  00f1b2c  lis 31, 150
  00f1b30  lis 4, 164
  00f1b34  addic 31, 31, -23188
  00f1b38  lis 6, 164
  00f1b3c  lis 5, 165
  00f1b40  li 7, 0
  00f1b44  lwz 8, 40(31)
  00f1b48  stw 3, -28520(4)
  00f1b4c  cmpwi 8, 0
  00f1b50  stw 3, -28516(6)
  00f1b54  stw 7, -25788(5)
  00f1b58  bt 2, 0xf1b80
  00f1b5c  lis 7, 164
  00f1b60  ori 4, 3, 0
  00f1b64  li 5, -1
  00f1b68  li 6, 1
  00f1b6c  lwz 3, -28512(7)
  00f1b70  bl 0xf7af0
  00f1b74  nop
  00f1b78  lis 4, 164
  00f1b7c  stw 3, -28520(4)
  00f1b80  lis 3, 101
  00f1b84  li 4, 3
  00f1b88  addic 29, 3, 11728
  00f1b8c  ori 3, 29, 0
  00f1b90  bl 0x65630
  00f1b94  nop
  00f1b98  ori 3, 29, 0
  00f1b9c  li 4, 5
  00f1ba0  bl 0x6562c
  00f1ba4  nop
  00f1ba8  lwz 3, 40(31)
  00f1bac  cmpwi 3, 0
  00f1bb0  bt 2, 0xf1c04
  00f1bb4  lis 3, 164
  00f1bb8  lis 4, 164
  00f1bbc  lis 5, 11915
  00f1bc0  ori 5, 5, 41705
  00f1bc4  lwz 3, -28516(3)
  00f1bc8  lwz 4, -28520(4)
  00f1bcc  subc 4, 4, 3
  00f1bd0  mulhw 4, 5, 4
  00f1bd4  srawi 4, 4, 5
  00f1bd8  srwi 5, 4, 31
  00f1bdc  addc 4, 4, 5
  00f1be0  clrldi 4, 4, 32
  00f1be4  bl 0xf7a44
  00f1be8  nop
  00f1bec  lis 3, 165
  00f1bf0  lwz 3, -25788(3)
  00f1bf4  cmpwi 3, 0
  00f1bf8  bt 2, 0xf1c04
  00f1bfc  bl 0xf5a7c
  00f1c00  nop
  00f1c04  lis 3, 101
  00f1c08  li 4, 3
  00f1c0c  addic 3, 3, 11744
  00f1c10  bl 0x6562c
  00f1c14  nop
  00f1c18  lwz 3, 40(31)
  00f1c1c  cmpwi 3, 0
  00f1c20  bt 2, 0xf1c38
  00f1c24  lis 3, 165
  00f1c28  lwz 3, -24748(3)
  00f1c2c  cmpwi 3, 0
  00f1c30  bt 2, 0xf1c38
  00f1c34  bl 0xf171c
  00f1c38  lwz 3, 8(30)
  00f1c3c  bl 0x50ec5c
  00f1c40  nop
  00f1c44  lis 3, 144
  00f1c48  lwz 3, -23532(3)
  00f1c4c  bl 0x50ec5c
  00f1c50  nop
  00f1c54  ld 0, 160(1)
  00f1c58  mtlr 0
  00f1c5c  ld 29, 120(1)
  00f1c60  ld 30, 128(1)
  00f1c64  ld 31, 136(1)
  00f1c68  addi 1, 1, 144
  00f1c6c  blr

MB_SetLightsFromEnvSample:   # 0xf1c78, 0x1d8 bytes
  00f1c78  stdu 1, -128(1)
  00f1c7c  mflr 0
  00f1c80  std 0, 144(1)
  00f1c84  lis 5, 165
  00f1c88  std 31, 120(1)
  00f1c8c  lis 4, 15
  00f1c90  ori 31, 3, 0
  00f1c94  addi 4, 4, 7280
  00f1c98  li 6, 0
  00f1c9c  lwz 5, -9484(5)
  00f1ca0  li 3, -1
  00f1ca4  cmpwi 5, 0
  00f1ca8  std 30, 112(1)
  00f1cac  lfs 6, 0(4)
  00f1cb0  bf 1, 0xf1d30
  00f1cb4  lis 4, 15
  00f1cb8  lis 7, 165
  00f1cbc  lfs 3, 16(31)
  00f1cc0  addi 8, 4, 7280
  00f1cc4  lwz 4, -9472(7)
  00f1cc8  lfs 4, 4(8)
  00f1ccc  lfs 2, 20(31)
  00f1cd0  ori 7, 4, 0
  00f1cd4  lfs 1, 24(31)
  00f1cd8  lfs 5, 4(7)
  00f1cdc  lfs 7, 0(7)
  00f1ce0  fsubs 5, 2, 5
  00f1ce4  lfs 8, 8(7)
  00f1ce8  fsubs 7, 3, 7
  00f1cec  fsubs 8, 1, 8
  00f1cf0  fmuls 5, 5, 5
  00f1cf4  fmadds 5, 7, 7, 5
  00f1cf8  fmadds 5, 8, 8, 5
  00f1cfc  fsqrts 5, 5
  00f1d00  fcmpu 1, 5, 6
  00f1d04  fcmpu 0, 5, 4
  00f1d08  crorc 2, 1, 4
  00f1d0c  bt 2, 0xf1d18
  00f1d10  fmr 6, 5
  00f1d14  ori 3, 6, 0
  00f1d18  addic 6, 6, 1
  00f1d1c  addic 7, 7, 48
  00f1d20  cmpw 6, 5
  00f1d24  bt 0, 0xf1cd8
  00f1d28  cmpwi 3, -1
  00f1d2c  bf 2, 0xf1d44
  00f1d30  lis 3, 101
  00f1d34  addic 3, 3, 11756
  00f1d38  bl 0x5cd098
  00f1d3c  nop
  00f1d40  b 0xf1e38
  00f1d44  sldi 3, 3, 4
  00f1d48  addc 5, 3, 3
  00f1d4c  addc 30, 3, 5
  00f1d50  addc 3, 4, 30
  00f1d54  clrldi 4, 3, 32
  00f1d58  ori 3, 31, 0
  00f1d5c  lwz 5, 24(4)
  00f1d60  lwz 6, 20(4)
  00f1d64  slwi 7, 5, 16
  00f1d68  lwz 4, 16(4)
  00f1d6c  slwi 6, 6, 8
  00f1d70  li 5, 0
  00f1d74  addc 7, 7, 6
  00f1d78  li 6, 0
  00f1d7c  addc 4, 7, 4
  00f1d80  li 7, 0
  00f1d84  extsw 4, 4
  00f1d88  stw 4, 128(31)
  00f1d8c  bl 0xf1ea0
  00f1d90  nop
  00f1d94  lis 3, 165
  00f1d98  lwz 4, -9472(3)
  00f1d9c  addc 4, 4, 30
  00f1da0  clrldi 4, 4, 32
  00f1da4  lwz 4, 28(4)
  00f1da8  stw 4, 60(31)
  00f1dac  lwz 3, -9472(3)
  00f1db0  addc 3, 3, 30
  00f1db4  clrldi 3, 3, 32
  00f1db8  lbz 4, 39(3)
  00f1dbc  lwz 31, 40(3)
  00f1dc0  cmpwi 4, 0
  00f1dc4  bt 2, 0xf1dfc
  00f1dc8  lis 4, 150
  00f1dcc  lwz 5, 32(3)
  00f1dd0  addic 4, 4, 14176
  00f1dd4  stw 5, 100(4)
  00f1dd8  lbz 5, 36(3)
  00f1ddc  lbz 6, 107(4)
  00f1de0  stb 5, 104(4)
  00f1de4  lbz 5, 37(3)
  00f1de8  ori 6, 6, 7
  00f1dec  stb 5, 105(4)
  00f1df0  lbz 3, 38(3)
  00f1df4  stb 6, 107(4)
  00f1df8  stb 3, 106(4)
  00f1dfc  cmpwi 31, 0
  00f1e00  bt 0, 0xf1e38
  00f1e04  lis 3, 150
  00f1e08  addic 3, 3, 14024
  00f1e0c  lhz 4, 74(3)
  00f1e10  cmpwi 4, 0
  00f1e14  bf 2, 0xf1e38
  00f1e18  lbz 4, 34(3)
  00f1e1c  extsb 4, 4
  00f1e20  cmpwi 4, -1
  00f1e24  bf 2, 0xf1e38
  00f1e28  lhz 4, 32(3)
  00f1e2c  cmpwi 4, 0
  00f1e30  bf 2, 0xf1e38
  00f1e34  sth 31, 68(3)
  00f1e38  ld 0, 144(1)
  00f1e3c  mtlr 0
  00f1e40  ld 30, 112(1)
  00f1e44  ld 31, 120(1)
  00f1e48  addi 1, 1, 128
  00f1e4c  blr

SetLevelFlag:   # 0xf1e50, 0x34 bytes
  00f1e50  cmpwi 3, 255
  00f1e54  bt 2, 0xf1e80
  00f1e58  lis 4, 151
  00f1e5c  lis 5, 161
  00f1e60  li 6, 255
  00f1e64  addic 5, 5, -13692
  00f1e68  lwz 4, -25488(4)
  00f1e6c  addc 3, 3, 5
  00f1e70  slwi 4, 4, 4
  00f1e74  clrldi 3, 3, 32
  00f1e78  extsw 4, 4
  00f1e7c  stbx 6, 3, 4
  00f1e80  blr

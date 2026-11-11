# sdk/libc/xstoull.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stoullx:   # 0x5da754, 0x354 bytes
  05da754  mfcr 12
  05da758  cmpwi 4, 6, 0
  05da75c  stdu 1, -256(1)
  05da760  std 15, 120(1)
  05da764  std 17, 136(1)
  05da768  std 20, 160(1)
  05da76c  std 21, 168(1)
  05da770  std 26, 208(1)
  05da774  std 16, 128(1)
  05da778  std 18, 144(1)
  05da77c  std 19, 152(1)
  05da780  std 22, 176(1)
  05da784  std 23, 184(1)
  05da788  std 24, 192(1)
  05da78c  std 25, 200(1)
  05da790  std 27, 216(1)
  05da794  std 28, 224(1)
  05da798  std 29, 232(1)
  05da79c  std 30, 240(1)
  05da7a0  std 31, 248(1)
  05da7a4  mr 21, 6
  05da7a8  mr 20, 4
  05da7ac  mr 26, 5
  05da7b0  mr 15, 3
  05da7b4  mr 17, 4
  05da7b8  stw 12, 264(1)
  05da7bc  mflr 0
  05da7c0  std 0, 272(1)
  05da7c4  bt 18, 0x5da7d0
  05da7c8  li 0, 0
  05da7cc  stw 0, 0(6)
  05da7d0  lwz 16, -23972(2)
  05da7d4  mr 31, 3
  05da7d8  lbz 28, 0(3)
  05da7dc  rlwinm 9, 28, 1, 23, 30
  05da7e0  lwz 10, 0(16)
  05da7e4  b 0x5da7f8
  05da7e8  addi 31, 31, 1
  05da7ec  clrldi 11, 31, 32
  05da7f0  lbz 28, 0(11)
  05da7f4  rlwinm 9, 28, 1, 23, 30
  05da7f8  add 9, 9, 10
  05da7fc  clrldi 9, 9, 32
  05da800  lhz 0, 0(9)
  05da804  li 9, 324
  05da808  and 9, 0, 9
  05da80c  cmpwi 7, 9, 0
  05da810  bf 30, 0x5da7e8
  05da814  extsb 0, 28
  05da818  cmpwi 7, 0, 45
  05da81c  bt 30, 0x5da9e8
  05da820  cmpwi 7, 0, 43
  05da824  bt 30, 0x5da9e8
  05da828  li 28, 43
  05da82c  cmpwi 6, 26, 0
  05da830  bt 24, 0x5da844
  05da834  cmpwi 7, 26, 1
  05da838  bt 30, 0x5da844
  05da83c  cmpwi 7, 26, 36
  05da840  bf 29, 0x5da8b8
  05da844  cmpwi 7, 17, 0
  05da848  li 25, 0
  05da84c  bt 30, 0x5da858
  05da850  li 25, 0
  05da854  stw 15, 0(20)
  05da858  ld 0, 272(1)
  05da85c  mr 3, 25
  05da860  lwz 12, 264(1)
  05da864  ld 15, 120(1)
  05da868  mtlr 0
  05da86c  ld 16, 128(1)
  05da870  mtocrf 8, 12
  05da874  ld 17, 136(1)
  05da878  ld 18, 144(1)
  05da87c  ld 19, 152(1)
  05da880  ld 20, 160(1)
  05da884  ld 21, 168(1)
  05da888  ld 22, 176(1)
  05da88c  ld 23, 184(1)
  05da890  ld 24, 192(1)
  05da894  ld 25, 200(1)
  05da898  ld 26, 208(1)
  05da89c  ld 27, 216(1)
  05da8a0  ld 28, 224(1)
  05da8a4  ld 29, 232(1)
  05da8a8  ld 30, 240(1)
  05da8ac  ld 31, 248(1)
  05da8b0  addi 1, 1, 256
  05da8b4  blr
  05da8b8  bf 25, 0x5daa40
  05da8bc  cmpwi 7, 26, 16
  05da8c0  bt 30, 0x5da9f0
  05da8c4  clrldi 4, 31, 32
  05da8c8  mr 5, 26
  05da8cc  mr 29, 31
  05da8d0  mr 19, 31
  05da8d4  lbz 0, 0(4)
  05da8d8  cmpwi 7, 0, 48
  05da8dc  bf- 30, 0x5da908
  05da8e0  mr 29, 31
  05da8e4  addi 29, 29, 1
  05da8e8  clrldi 9, 29, 32
  05da8ec  lbz 0, 0(9)
  05da8f0  cmpwi 7, 0, 48
  05da8f4  bt 30, 0x5da8e4
  05da8f8  mr 19, 31
  05da8fc  mr 4, 9
  05da900  mr 5, 26
  05da904  mr 31, 29
  05da908  lwz 22, -23968(2)
  05da90c  clrldi 23, 5, 32
  05da910  li 27, 0
  05da914  li 25, 0
  05da918  li 18, 0
  05da91c  extsw 24, 26
  05da920  b 0x5da940
  05da924  sub 27, 3, 30
  05da928  addi 31, 31, 1
  05da92c  extsb 9, 27
  05da930  mr 18, 25
  05da934  clrldi 4, 31, 32
  05da938  mulld 0, 25, 24
  05da93c  add 25, 0, 9
  05da940  lbz 4, 0(4)
  05da944  mr 30, 22
  05da948  lwz 0, 0(16)
  05da94c  mr 3, 22
  05da950  slwi 9, 4, 1
  05da954  mr 5, 23
  05da958  add 9, 9, 0
  05da95c  clrldi 9, 9, 32
  05da960  lhz 0, 0(9)
  05da964  rlwinm 0, 0, 0, 30, 30
  05da968  cmpwi 7, 0, 0
  05da96c  bt 30, 0x5da974
  05da970  addi 4, 4, 32
  05da974  extsw 4, 4
  05da978  bl 0x5c5984
  05da97c  nop
  05da980  cmpwi 7, 3, 0
  05da984  bf 30, 0x5da924
  05da988  cmpw 7, 31, 19
  05da98c  bt 30, 0x5da844
  05da990  extsw 5, 26
  05da994  sub 0, 31, 29
  05da998  add 11, 5, 30
  05da99c  lbz 9, 40(11)
  05da9a0  extsb 9, 9
  05da9a4  sub 0, 0, 9
  05da9a8  cmpwi 7, 0, 0
  05da9ac  bt 28, 0x5daa2c
  05da9b0  bf 29, 0x5daa10
  05da9b4  bl 0x5d5904
  05da9b8  nop
  05da9bc  lis 0, -32767
  05da9c0  ori 0, 0, 28
  05da9c4  stw 0, 0(3)
  05da9c8  bt 18, 0x5daaa0
  05da9cc  li 0, 1
  05da9d0  li 25, -1
  05da9d4  stw 0, 0(21)
  05da9d8  cmpwi 7, 17, 0
  05da9dc  bt 30, 0x5da858
  05da9e0  stw 31, 0(20)
  05da9e4  b 0x5da858
  05da9e8  addi 31, 31, 1
  05da9ec  b 0x5da82c
  05da9f0  clrldi 4, 31, 32
  05da9f4  li 5, 16
  05da9f8  lbz 0, 0(4)
  05da9fc  cmpwi 7, 0, 48
  05daa00  bt 30, 0x5daa80
  05daa04  mr 29, 31
  05daa08  mr 19, 31
  05daa0c  b 0x5da908
  05daa10  extsb 0, 27
  05daa14  sub 0, 25, 0
  05daa18  cmpld 7, 25, 0
  05daa1c  bt 28, 0x5da9b4
  05daa20  divdu 0, 0, 5
  05daa24  cmpd 7, 0, 18
  05daa28  bf 30, 0x5da9b4
  05daa2c  extsb 0, 28
  05daa30  cmpwi 7, 0, 45
  05daa34  bf 30, 0x5da9d8
  05daa38  neg 25, 25
  05daa3c  b 0x5da9d8
  05daa40  clrldi 4, 31, 32
  05daa44  li 26, 10
  05daa48  li 5, 10
  05daa4c  lbz 0, 0(4)
  05daa50  cmpwi 7, 0, 48
  05daa54  bf 30, 0x5daa04
  05daa58  lbz 0, 1(4)
  05daa5c  extsb 0, 0
  05daa60  cmpwi 7, 0, 120
  05daa64  bt 30, 0x5daa74
  05daa68  cmpwi 7, 0, 88
  05daa6c  li 26, 8
  05daa70  bf 30, 0x5da8e0
  05daa74  addi 31, 31, 2
  05daa78  li 26, 16
  05daa7c  b 0x5da8c4
  05daa80  lbz 0, 1(4)
  05daa84  extsb 0, 0
  05daa88  cmpwi 7, 0, 120
  05daa8c  bt 30, 0x5daa98
  05daa90  cmpwi 7, 0, 88
  05daa94  bf 30, 0x5da8e0
  05daa98  addi 31, 31, 2
  05daa9c  b 0x5da8c4
  05daaa0  li 25, -1
  05daaa4  b 0x5da9d8

FUN_005daaa8:   # 0x5daaa8, 0x8 bytes
  05daaa8  li 6, 0
  05daaac  b 0x5da754

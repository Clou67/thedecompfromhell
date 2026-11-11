# sdk/libm/floorf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

floorf:   # 0x5dc924, 0x80 bytes
  05dc924  stdu 1, -160(1)
  05dc928  mflr 0
  05dc92c  addi 3, 1, 112
  05dc930  stfd 31, 152(1)
  05dc934  li 4, 0
  05dc938  fmr 31, 1
  05dc93c  std 0, 176(1)
  05dc940  stfs 1, 112(1)
  05dc944  bl 0x5dd378
  05dc948  nop
  05dc94c  extsh 3, 3
  05dc950  cmpwi 7, 3, 0
  05dc954  bt 28, 0x5dc970
  05dc958  ld 0, 176(1)
  05dc95c  lfs 1, 112(1)
  05dc960  lfd 31, 152(1)
  05dc964  mtlr 0
  05dc968  addi 1, 1, 160
  05dc96c  blr
  05dc970  li 0, 0
  05dc974  stw 0, 128(1)
  05dc978  lfs 0, 128(1)
  05dc97c  fcmpu 7, 31, 0
  05dc980  bf 28, 0x5dc958
  05dc984  ld 0, 176(1)
  05dc988  lfs 0, 112(1)
  05dc98c  lfs 13, -23904(2)
  05dc990  mtlr 0
  05dc994  fsubs 1, 0, 13
  05dc998  lfd 31, 152(1)
  05dc99c  addi 1, 1, 160
  05dc9a0  blr

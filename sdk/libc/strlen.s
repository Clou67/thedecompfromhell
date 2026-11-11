# sdk/libc/strlen.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strlen:   # 0x5c8510, 0xa4 bytes
  05c8510  neg 0, 3
  05c8514  clrldi 0, 0, 61
  05c8518  xor 5, 5, 5
  05c851c  cmplwi 0, 0
  05c8520  mr 4, 3
  05c8524  bt 2, 0x5c8540
  05c8528  mtctr 0
  05c852c  lbz 0, 0(4)
  05c8530  cmpd 5, 0
  05c8534  addi 4, 4, 1
  05c8538  bt 2, 0x5c85a8
  05c853c  bdnz 0x5c852c
  05c8540  li 6, 128
  05c8544  dcbt 0, 4
  05c8548  dcbt 6, 4
  05c854c  li 6, 32639
  05c8550  rldimi 6, 6, 16, 32
  05c8554  li 8, 16
  05c8558  rldimi 6, 6, 32, 0
  05c855c  addi 0, 4, 256
  05c8560  dcbt 0, 0
  05c8564  mtctr 8
  05c8568  ld 0, 0(4)
  05c856c  and 7, 0, 6
  05c8570  or 9, 0, 6
  05c8574  add 10, 7, 6
  05c8578  nor 11, 9, 10
  05c857c  cntlzd 0, 11
  05c8580  rldicl 0, 0, 61, 3
  05c8584  cmplwi 0, 8
  05c8588  addi 4, 4, 8
  05c858c  bt 0, 0x5c8598
  05c8590  bdnz 0x5c8568
  05c8594  b 0x5c855c
  05c8598  addi 4, 4, -8
  05c859c  add 4, 4, 0
  05c85a0  sub 3, 4, 3
  05c85a4  blr
  05c85a8  addi 4, 4, -1
  05c85ac  sub 3, 4, 3
  05c85b0  blr

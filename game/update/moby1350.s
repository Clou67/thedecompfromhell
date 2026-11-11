# game/update/moby1350.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1350_00255240:   # 0x255240, 0x14 bytes
  0255240  lis 3, 122
  0255244  lis 4, 1
  0255248  addic 3, 3, -17876
  025524c  stw 4, 72(3)
  0255250  blr

UpdateMoby_1350:   # 0x255258, 0x70 bytes
  0255258  stdu 1, -112(1)
  025525c  mflr 0
  0255260  std 0, 128(1)
  0255264  ori 4, 3, 0
  0255268  lwz 3, 120(4)
  025526c  lwz 5, 0(3)
  0255270  cmpwi 5, -1
  0255274  bf 2, 0x255288
  0255278  ori 3, 4, 0
  025527c  bl 0xefb38
  0255280  nop
  0255284  b 0x2552b8
  0255288  lwz 3, 4(3)
  025528c  cmpwi 3, -1
  0255290  bt 2, 0x2552b8
  0255294  extsw 3, 3
  0255298  li 4, -1
  025529c  bl 0x104214
  02552a0  nop
  02552a4  cmpwi 3, 0
  02552a8  bf 2, 0x2552b8
  02552ac  li 3, 19
  02552b0  bl 0x11b728
  02552b4  nop
  02552b8  ld 0, 128(1)
  02552bc  mtlr 0
  02552c0  addi 1, 1, 112
  02552c4  blr

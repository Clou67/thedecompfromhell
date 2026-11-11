# sdk/libm/feraiseexcept.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

feraiseexcept:   # 0x5ddaec, 0xec bytes
  05ddaec  mr 11, 3
  05ddaf0  mflr 0
  05ddaf4  stdu 1, -144(1)
  05ddaf8  std 31, 136(1)
  05ddafc  rlwinm 31, 11, 0, 2, 6
  05ddb00  std 0, 160(1)
  05ddb04  addi 0, 1, 112
  05ddb08  cmpwi 7, 31, 0
  05ddb0c  rlwinm 9, 3, 0, 2, 2
  05ddb10  std 30, 128(1)
  05ddb14  clrldi 30, 0, 32
  05ddb18  cmpwi 6, 9, 0
  05ddb1c  mr 3, 30
  05ddb20  bt 30, 0x5ddb60
  05ddb24  rlwinm 9, 11, 0, 3, 6
  05ddb28  bf 26, 0x5ddb7c
  05ddb2c  bl 0x5ddc50
  05ddb30  nop
  05ddb34  lwz 0, 112(1)
  05ddb38  mr 3, 30
  05ddb3c  or 0, 0, 31
  05ddb40  stw 0, 112(1)
  05ddb44  bl 0x5ddc14
  05ddb48  nop
  05ddb4c  lwz 0, 112(1)
  05ddb50  extsw 3, 31
  05ddb54  rlwinm 9, 0, 0, 24, 28
  05ddb58  cmpwi 7, 9, 0
  05ddb5c  bf 30, 0x5ddbb4
  05ddb60  ld 0, 160(1)
  05ddb64  li 3, 0
  05ddb68  ld 30, 128(1)
  05ddb6c  ld 31, 136(1)
  05ddb70  mtlr 0
  05ddb74  addi 1, 1, 144
  05ddb78  blr
  05ddb7c  ori 31, 9, 1024
  05ddb80  bl 0x5ddc50
  05ddb84  nop
  05ddb88  lwz 0, 112(1)
  05ddb8c  mr 3, 30
  05ddb90  or 0, 0, 31
  05ddb94  stw 0, 112(1)
  05ddb98  bl 0x5ddc14
  05ddb9c  nop
  05ddba0  lwz 0, 112(1)
  05ddba4  extsw 3, 31
  05ddba8  rlwinm 9, 0, 0, 24, 28
  05ddbac  cmpwi 7, 9, 0
  05ddbb0  bt 30, 0x5ddb60
  05ddbb4  bl 0x5ddbd8
  05ddbb8  nop
  05ddbbc  ld 0, 160(1)
  05ddbc0  ld 30, 128(1)
  05ddbc4  li 3, 0
  05ddbc8  ld 31, 136(1)
  05ddbcc  mtlr 0
  05ddbd0  addi 1, 1, 144
  05ddbd4  blr

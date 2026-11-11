# sdk/libc/xdnorm.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Dnorm:   # 0x5dad7c, 0x1c4 bytes
  05dad7c  mr 6, 3
  05dad80  li 3, 1
  05dad84  mr 5, 6
  05dad88  lhz 9, 0(6)
  05dad8c  clrlwi 0, 9, 28
  05dad90  mr 4, 9
  05dad94  cmpwi 7, 0, 0
  05dad98  mr 9, 0
  05dad9c  sth 0, 0(6)
  05dada0  bf 30, 0x5dae00
  05dada4  mr 7, 6
  05dada8  lhzu 11, 2(7)
  05dadac  cmpwi 7, 11, 0
  05dadb0  bf 30, 0x5daf1c
  05dadb4  mr 8, 6
  05dadb8  addi 10, 6, 6
  05dadbc  lhzu 0, 4(8)
  05dadc0  cmpwi 7, 0, 0
  05dadc4  bt 30, 0x5daf28
  05dadc8  li 3, 1
  05dadcc  b 0x5dadd4
  05dadd0  lhz 11, 0(7)
  05dadd4  sth 11, 0(6)
  05dadd8  lhz 0, 0(8)
  05daddc  addi 3, 3, -16
  05dade0  sth 0, 0(7)
  05dade4  lhz 9, 0(10)
  05dade8  li 0, 0
  05dadec  sth 9, 0(8)
  05dadf0  sth 0, 0(10)
  05dadf4  lhz 9, 0(6)
  05dadf8  cmpwi 7, 9, 0
  05dadfc  bt 30, 0x5dadd0
  05dae00  clrlwi 11, 9, 16
  05dae04  cmplwi 7, 11, 15
  05dae08  bt 29, 0x5dae7c
  05dae0c  addi 7, 5, 2
  05dae10  addi 8, 5, 4
  05dae14  addi 10, 5, 6
  05dae18  lhz 0, 0(7)
  05dae1c  slwi 11, 11, 1
  05dae20  addi 3, 3, -1
  05dae24  srwi 0, 0, 15
  05dae28  or 11, 11, 0
  05dae2c  sth 11, 0(6)
  05dae30  lhz 9, 0(7)
  05dae34  lhz 0, 0(8)
  05dae38  slwi 9, 9, 1
  05dae3c  srwi 0, 0, 15
  05dae40  or 9, 9, 0
  05dae44  sth 9, 0(7)
  05dae48  lhz 11, 0(8)
  05dae4c  lhz 0, 0(10)
  05dae50  slwi 11, 11, 1
  05dae54  srwi 0, 0, 15
  05dae58  or 11, 11, 0
  05dae5c  sth 11, 0(8)
  05dae60  lhz 0, 0(10)
  05dae64  slwi 0, 0, 1
  05dae68  sth 0, 0(10)
  05dae6c  lhz 9, 0(6)
  05dae70  clrlwi 11, 9, 16
  05dae74  cmplwi 7, 11, 15
  05dae78  bf 29, 0x5dae18
  05dae7c  clrlwi 0, 9, 16
  05dae80  cmplwi 7, 0, 31
  05dae84  bf 29, 0x5daef8
  05dae88  addi 8, 5, 2
  05dae8c  addi 7, 5, 6
  05dae90  addi 10, 5, 4
  05dae94  lhz 0, 0(7)
  05dae98  addi 3, 3, 1
  05dae9c  lhz 9, 0(10)
  05daea0  srwi 0, 0, 1
  05daea4  slwi 9, 9, 15
  05daea8  or 0, 0, 9
  05daeac  sth 0, 0(7)
  05daeb0  lhz 9, 0(10)
  05daeb4  lhz 0, 0(8)
  05daeb8  srwi 9, 9, 1
  05daebc  slwi 0, 0, 15
  05daec0  or 9, 9, 0
  05daec4  sth 9, 0(10)
  05daec8  lhz 11, 0(8)
  05daecc  lhz 0, 0(6)
  05daed0  srwi 11, 11, 1
  05daed4  slwi 0, 0, 15
  05daed8  or 11, 11, 0
  05daedc  sth 11, 0(8)
  05daee0  lhz 0, 0(6)
  05daee4  srwi 0, 0, 1
  05daee8  cmplwi 7, 0, 31
  05daeec  sth 0, 0(6)
  05daef0  mr 9, 0
  05daef4  bt 29, 0x5dae94
  05daef8  clrlwi 0, 9, 28
  05daefc  extsh 3, 3
  05daf00  mr 9, 0
  05daf04  sth 0, 0(6)
  05daf08  rlwinm 0, 4, 0, 0, 16
  05daf0c  extsw 3, 3
  05daf10  or 0, 0, 9
  05daf14  sth 0, 0(6)
  05daf18  blr
  05daf1c  addi 8, 6, 4
  05daf20  addi 10, 6, 6
  05daf24  b 0x5dadc8
  05daf28  mr 10, 6
  05daf2c  li 3, 1
  05daf30  lhzu 0, 6(10)
  05daf34  cmpwi 7, 0, 0
  05daf38  bf 30, 0x5dadc8
  05daf3c  b 0x5daf08

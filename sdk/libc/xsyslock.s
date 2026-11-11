# sdk/libc/xsyslock.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Initlocks:   # 0x5cbc68, 0xf8 bytes
  05cbc68  stdu 1, -144(1)
  05cbc6c  mflr 0
  05cbc70  std 28, 112(1)
  05cbc74  lwz 28, -24452(2)
  05cbc78  std 0, 160(1)
  05cbc7c  addi 0, 28, 208
  05cbc80  std 31, 136(1)
  05cbc84  mr 31, 0
  05cbc88  std 29, 120(1)
  05cbc8c  std 30, 128(1)
  05cbc90  mr 29, 0
  05cbc94  addi 30, 31, 120
  05cbc98  clrldi 3, 31, 32
  05cbc9c  addi 31, 31, 40
  05cbca0  bl 0x5d04b0
  05cbca4  nop
  05cbca8  cmpw 7, 30, 31
  05cbcac  bf 30, 0x5cbc98
  05cbcb0  lwz 6, -24448(2)
  05cbcb4  addi 31, 28, 8
  05cbcb8  lwz 4, -24440(2)
  05cbcbc  lwz 5, -24444(2)
  05cbcc0  addi 30, 31, 200
  05cbcc4  lhz 0, 4(6)
  05cbcc8  lhz 11, 4(4)
  05cbccc  extsh 0, 0
  05cbcd0  lhz 9, 4(5)
  05cbcd4  extsh 11, 11
  05cbcd8  extsh 9, 9
  05cbcdc  slwi 10, 0, 5
  05cbce0  slwi 0, 0, 3
  05cbce4  slwi 8, 9, 5
  05cbce8  slwi 7, 11, 5
  05cbcec  slwi 9, 9, 3
  05cbcf0  slwi 11, 11, 3
  05cbcf4  add 0, 0, 10
  05cbcf8  add 9, 9, 8
  05cbcfc  add 0, 0, 29
  05cbd00  add 11, 11, 7
  05cbd04  add 9, 9, 29
  05cbd08  add 11, 11, 29
  05cbd0c  stw 0, 68(6)
  05cbd10  li 0, 256
  05cbd14  stw 9, 68(5)
  05cbd18  stw 11, 68(4)
  05cbd1c  stw 0, 328(28)
  05cbd20  clrldi 3, 31, 32
  05cbd24  addi 31, 31, 40
  05cbd28  bl 0x5d04b0
  05cbd2c  nop
  05cbd30  cmpw 7, 30, 31
  05cbd34  bf 30, 0x5cbd20
  05cbd38  li 0, 5
  05cbd3c  ld 29, 120(1)
  05cbd40  ld 30, 128(1)
  05cbd44  stw 0, 0(28)
  05cbd48  ld 0, 160(1)
  05cbd4c  ld 28, 112(1)
  05cbd50  ld 31, 136(1)
  05cbd54  mtlr 0
  05cbd58  addi 1, 1, 144
  05cbd5c  blr

_Clearlocks:   # 0x5cbd60, 0x5c bytes
  05cbd60  lwz 9, -24452(2)
  05cbd64  mflr 0
  05cbd68  stdu 1, -128(1)
  05cbd6c  std 31, 120(1)
  05cbd70  addi 31, 9, 8
  05cbd74  std 0, 144(1)
  05cbd78  li 0, 0
  05cbd7c  std 30, 112(1)
  05cbd80  addi 30, 31, 200
  05cbd84  stw 0, 0(9)
  05cbd88  stw 0, 328(9)
  05cbd8c  clrldi 3, 31, 32
  05cbd90  addi 31, 31, 40
  05cbd94  bl 0x5d045c
  05cbd98  nop
  05cbd9c  cmpw 7, 31, 30
  05cbda0  bf 30, 0x5cbd8c
  05cbda4  ld 0, 144(1)
  05cbda8  ld 30, 112(1)
  05cbdac  ld 31, 120(1)
  05cbdb0  mtlr 0
  05cbdb4  addi 1, 1, 128
  05cbdb8  blr

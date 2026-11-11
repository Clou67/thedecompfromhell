# game/update/moby331.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M331_0034570c:   # 0x34570c, 0x14 bytes
  034570c  lis 3, 132
  0345710  lis 4, 1
  0345714  addic 3, 3, -1160
  0345718  stw 4, 72(3)
  034571c  blr

UpdateMoby_331:   # 0x345720, 0x28 bytes
  0345720  lis 4, 164
  0345724  lwz 4, -28508(4)
  0345728  cmplw 3, 4
  034572c  bf 0, 0x345744
  0345730  li 4, 0
  0345734  lhz 5, 52(3)
  0345738  stw 4, 88(3)
  034573c  ori 4, 5, 64
  0345740  sth 4, 52(3)
  0345744  blr

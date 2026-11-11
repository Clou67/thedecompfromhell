# sdk/mUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

sceNpTrophyDestroyHandle:   # 0x4efdf4, 0x90 bytes
  04efdf4  stdu 1, -128(1)
  04efdf8  mflr 0
  04efdfc  std 0, 144(1)
  04efe00  std 31, 120(1)
  04efe04  ori 31, 3, 0
  04efe08  lwz 3, 432(31)
  04efe0c  cmpwi 3, 0
  04efe10  bt 2, 0x4efe38
  04efe14  bl 0x64f884
  04efe18  ld 2, 40(1)
  04efe1c  cmpwi 3, 0
  04efe20  bf 0, 0x4efe38
  04efe24  lis 5, 102
  04efe28  ori 4, 3, 0
  04efe2c  addic 3, 5, -18592
  04efe30  bl 0x4ffc9c
  04efe34  nop
  04efe38  lwz 3, 428(31)
  04efe3c  cmpwi 3, 0
  04efe40  bt 2, 0x4efe68
  04efe44  bl 0x64f824
  04efe48  ld 2, 40(1)
  04efe4c  cmpwi 3, 0
  04efe50  bf 0, 0x4efe68
  04efe54  lis 5, 102
  04efe58  ori 4, 3, 0
  04efe5c  addic 3, 5, -18536
  04efe60  bl 0x4ffc9c
  04efe64  nop
  04efe68  li 3, 0
  04efe6c  stb 3, 4(31)
  04efe70  ld 0, 144(1)
  04efe74  mtlr 0
  04efe78  ld 31, 120(1)
  04efe7c  addi 1, 1, 128
  04efe80  blr

FUN_004efe84:   # 0x4efe84, 0xd0 bytes
  04efe84  stdu 1, -144(1)
  04efe88  mflr 0
  04efe8c  std 0, 160(1)
  04efe90  std 29, 120(1)
  04efe94  clrlwi 6, 6, 24
  04efe98  std 30, 128(1)
  04efe9c  ori 29, 3, 0
  04efea0  cmpwi 6, 0
  04efea4  std 31, 136(1)
  04efea8  ori 30, 4, 0
  04efeac  ori 31, 5, 0
  04efeb0  bt 2, 0x4eff1c
  04efeb4  lwz 3, 432(29)
  04efeb8  cmpwi 3, 0
  04efebc  bt 2, 0x4efee4
  04efec0  bl 0x64f884
  04efec4  ld 2, 40(1)
  04efec8  cmpwi 3, 0
  04efecc  bf 0, 0x4efee4
  04efed0  lis 5, 102
  04efed4  ori 4, 3, 0
  04efed8  addic 3, 5, -18592
  04efedc  bl 0x4ffc9c
  04efee0  nop
  04efee4  lwz 3, 428(29)
  04efee8  cmpwi 3, 0
  04efeec  bt 2, 0x4eff14
  04efef0  bl 0x64f824
  04efef4  ld 2, 40(1)
  04efef8  cmpwi 3, 0
  04efefc  bf 0, 0x4eff14
  04eff00  lis 5, 102
  04eff04  ori 4, 3, 0
  04eff08  addic 3, 5, -18536
  04eff0c  bl 0x4ffc9c
  04eff10  nop
  04eff14  li 3, 0
  04eff18  stb 3, 4(29)
  04eff1c  lis 3, 102
  04eff20  ori 4, 30, 0
  04eff24  addic 3, 3, -18484
  04eff28  ori 5, 31, 0
  04eff2c  bl 0x4ffc9c
  04eff30  nop
  04eff34  ori 3, 31, 0
  04eff38  ld 0, 160(1)
  04eff3c  mtlr 0
  04eff40  ld 29, 120(1)
  04eff44  ld 30, 128(1)
  04eff48  ld 31, 136(1)
  04eff4c  addi 1, 1, 144
  04eff50  blr

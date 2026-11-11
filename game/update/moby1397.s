# game/update/moby1397.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0026a854:   # 0x26a854, 0xb4 bytes
  026a854  stdu 1, -128(1)
  026a858  mflr 0
  026a85c  std 0, 144(1)
  026a860  std 31, 120(1)
  026a864  ori 31, 3, 0
  026a868  std 30, 112(1)
  026a86c  li 3, 1396
  026a870  bl 0xefa28
  026a874  nop
  026a878  ori 30, 3, 0
  026a87c  cmpwi 30, 0
  026a880  bt 2, 0x26a8ec
  026a884  lfs 1, 16(31)
  026a888  li 4, 64
  026a88c  li 5, 1
  026a890  stfs 1, 16(30)
  026a894  lfs 1, 20(31)
  026a898  li 6, 0
  026a89c  ori 3, 30, 0
  026a8a0  stfs 1, 20(30)
  026a8a4  lfs 1, 24(31)
  026a8a8  stfs 1, 24(30)
  026a8ac  lfs 1, 28(31)
  026a8b0  stfs 1, 28(30)
  026a8b4  lfs 1, 64(31)
  026a8b8  stfs 1, 64(30)
  026a8bc  lfs 1, 68(31)
  026a8c0  stfs 1, 68(30)
  026a8c4  lfs 1, 72(31)
  026a8c8  sth 4, 50(30)
  026a8cc  stfs 1, 72(30)
  026a8d0  lfs 1, 76(31)
  026a8d4  stb 4, 48(30)
  026a8d8  stfs 1, 76(30)
  026a8dc  stb 5, 49(30)
  026a8e0  stb 6, 32(30)
  026a8e4  bl 0xf31a8
  026a8e8  nop
  026a8ec  ori 3, 30, 0
  026a8f0  ld 0, 144(1)
  026a8f4  mtlr 0
  026a8f8  ld 30, 112(1)
  026a8fc  ld 31, 120(1)
  026a900  addi 1, 1, 128
  026a904  blr

UpdateMoby_1397:   # 0x26a908, 0x64 bytes
  026a908  lbz 4, 32(3)
  026a90c  cmpwi 4, 0
  026a910  cmpwi 1, 4, 2
  026a914  cmpwi 6, 4, -1
  026a918  bt 1, 0x26a924
  026a91c  bf 25, 0x26a968
  026a920  b 0x26a92c
  026a924  bt 6, 0x26a954
  026a928  b 0x26a968
  026a92c  lwz 7, 120(3)
  026a930  li 4, 0
  026a934  li 5, 4
  026a938  li 6, 1
  026a93c  stw 4, 32(7)
  026a940  sth 4, 36(7)
  026a944  stb 5, 40(7)
  026a948  sth 4, 62(7)
  026a94c  stb 6, 32(3)
  026a950  b 0x26a968
  026a954  lwz 6, 120(3)
  026a958  li 4, 5
  026a95c  li 5, 3
  026a960  sth 4, 62(6)
  026a964  stb 5, 32(3)
  026a968  blr

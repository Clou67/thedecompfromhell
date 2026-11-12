# game/update/moby1342.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1342_0024fcec:   # 0x24fcec, 0x14 bytes
  024fcec  lis 3, 122
  024fcf0  lis 4, 1
  024fcf4  addic 3, 3, -19116
  024fcf8  stw 4, 72(3)
  024fcfc  blr

UpdateMoby_1342:   # 0x24fd10, 0xf44 bytes
  024fd10  stdu 1, -176(1)
  024fd14  mflr 0
  024fd18  std 0, 192(1)
  024fd1c  std 30, 160(1)
  024fd20  std 31, 168(1)
  024fd24  ori 30, 3, 0
  024fd28  lwz 31, 120(30)
  024fd2c  std 29, 152(1)
  024fd30  std 28, 144(1)
  024fd34  std 27, 136(1)
  024fd38  std 26, 128(1)
  024fd3c  addic 3, 31, 88
  024fd40  bl 0x4fff60
  024fd44  nop
  024fd48  lbz 3, 32(30)
  024fd4c  cmpwi 3, 0
  024fd50  bt 1, 0x24fd60
  024fd54  cmpwi 3, -1
  024fd58  bf 1, 0x250c2c
  024fd5c  b 0x24fd6c
  024fd60  cmpwi 3, 1
  024fd64  bf 1, 0x24fd8c
  024fd68  b 0x250c2c
  024fd6c  li 3, 0
  024fd70  li 4, 255
  024fd74  li 5, 1
  024fd78  stw 3, 80(31)
  024fd7c  stw 3, 84(31)
  024fd80  stb 4, 48(30)
  024fd84  stb 5, 32(30)
  024fd88  b 0x250c2c
  024fd8c  lis 27, 151
  024fd90  lwz 4, 120(31)
  024fd94  addic 27, 27, -25376
  024fd98  extsw 4, 4
  024fd9c  addic 29, 27, 128
  024fda0  ori 3, 29, 0
  024fda4  bl 0x110b70
  024fda8  nop
  024fdac  cmpwi 3, 0
  024fdb0  bt 2, 0x24fde0
  024fdb4  lwz 3, 8332(27)
  024fdb8  cmpwi 1, 3, 1
  024fdbc  cmpwi 3, 0
  024fdc0  cror 2, 2, 6
  024fdc4  bt 2, 0x24fdd0
  024fdc8  cmpwi 3, 9
  024fdcc  bf 2, 0x24fde0
  024fdd0  lis 3, 151
  024fdd4  li 4, 1
  024fdd8  addic 3, 3, -16400
  024fddc  stb 4, 26(3)
  024fde0  lis 28, 151
  024fde4  addic 28, 28, -16400
  024fde8  lbz 3, 26(28)
  024fdec  cmpwi 3, 0
  024fdf0  bf 2, 0x24ff80
  024fdf4  ori 3, 29, 0
  024fdf8  lwz 4, 0(31)
  024fdfc  extsw 4, 4
  024fe00  bl 0x110b70
  024fe04  nop
  024fe08  cmpwi 3, 0
  024fe0c  bt 2, 0x24fe78
  024fe10  lwz 3, 8332(27)
  024fe14  cmpwi 1, 3, 1
  024fe18  cmpwi 3, 0
  024fe1c  cror 2, 2, 6
  024fe20  bt 2, 0x24fe2c
  024fe24  cmpwi 3, 9
  024fe28  bf 2, 0x24fe78
  024fe2c  lis 3, 114
  024fe30  lwz 3, 2180(3)
  024fe34  cmpwi 3, 0
  024fe38  bf 2, 0x24fe78
  024fe3c  lis 3, 114
  024fe40  addic 3, 3, 2180
  024fe44  lwz 3, 36(3)
  024fe48  cmpwi 3, -1
  024fe4c  bf 2, 0x24fe78
  024fe50  lis 3, 161
  024fe54  addic 3, 3, 12
  024fe58  lwz 3, 164(3)
  024fe5c  rlwinm 3, 3, 0, 0, 0
  024fe60  cmpwi 3, 0
  024fe64  bf 2, 0x24fe78
  024fe68  li 3, 3000
  024fe6c  li 4, 20
  024fe70  bl 0x7b310
  024fe74  nop
  024fe78  ori 3, 29, 0
  024fe7c  lwz 4, 12(31)
  024fe80  extsw 4, 4
  024fe84  bl 0x110b70
  024fe88  nop
  024fe8c  cmpwi 3, 0
  024fe90  bt 2, 0x24fefc
  024fe94  lwz 3, 8332(27)
  024fe98  cmpwi 1, 3, 1
  024fe9c  cmpwi 3, 0
  024fea0  cror 2, 2, 6
  024fea4  bt 2, 0x24feb0
  024fea8  cmpwi 3, 9
  024feac  bf 2, 0x24fefc
  024feb0  lis 3, 114
  024feb4  lwz 3, 2180(3)
  024feb8  cmpwi 3, 0
  024febc  bf 2, 0x24fefc
  024fec0  lis 3, 114
  024fec4  addic 3, 3, 2180
  024fec8  lwz 3, 36(3)
  024fecc  cmpwi 3, -1
  024fed0  bf 2, 0x24fefc
  024fed4  lis 3, 161
  024fed8  addic 3, 3, 12
  024fedc  lwz 3, 172(3)
  024fee0  rlwinm 3, 3, 0, 0, 0
  024fee4  cmpwi 3, 0
  024fee8  bf 2, 0x24fefc
  024feec  li 3, 3001
  024fef0  li 4, 21
  024fef4  bl 0x7b310
  024fef8  nop
  024fefc  ori 3, 29, 0
  024ff00  lwz 4, 24(31)
  024ff04  extsw 4, 4
  024ff08  bl 0x110b70
  024ff0c  nop
  024ff10  cmpwi 3, 0
  024ff14  bt 2, 0x24ff80
  024ff18  lwz 3, 8332(27)
  024ff1c  cmpwi 1, 3, 1
  024ff20  cmpwi 3, 0
  024ff24  cror 2, 2, 6
  024ff28  bt 2, 0x24ff34
  024ff2c  cmpwi 3, 9
  024ff30  bf 2, 0x24ff80
  024ff34  lis 3, 114
  024ff38  lwz 3, 2180(3)
  024ff3c  cmpwi 3, 0
  024ff40  bf 2, 0x24ff80
  024ff44  lis 3, 114
  024ff48  addic 3, 3, 2180
  024ff4c  lwz 3, 36(3)
  024ff50  cmpwi 3, -1
  024ff54  bf 2, 0x24ff80
  024ff58  lis 3, 161
  024ff5c  addic 3, 3, 12
  024ff60  lwz 3, 188(3)
  024ff64  rlwinm 3, 3, 0, 0, 0
  024ff68  cmpwi 3, 0
  024ff6c  bf 2, 0x24ff80
  024ff70  li 3, 3003
  024ff74  li 4, 23
  024ff78  bl 0x7b310
  024ff7c  nop
  024ff80  ori 3, 29, 0
  024ff84  lwz 4, 48(31)
  024ff88  extsw 4, 4
  024ff8c  bl 0x110b70
  024ff90  nop
  024ff94  cmpwi 3, 0
  024ff98  bt 2, 0x25008c
  024ff9c  lis 5, 161
  024ffa0  addic 5, 5, -276
  024ffa4  lhz 3, 24(5)
  024ffa8  cmpwi 3, 0
  024ffac  bf 2, 0x25008c
  024ffb0  lwz 4, 8332(27)
  024ffb4  cmpwi 1, 4, 1
  024ffb8  cmpwi 4, 0
  024ffbc  cror 2, 2, 6
  024ffc0  bt 2, 0x24ffcc
  024ffc4  cmpwi 4, 9
  024ffc8  bf 2, 0x25008c
  024ffcc  lis 4, 0
  024ffd0  ori 4, 4, 65535
  024ffd4  cmpw 3, 4
  024ffd8  bf 0, 0x24ffe4
  024ffdc  addic 3, 3, 1
  024ffe0  sth 3, 24(5)
  024ffe4  lis 3, 161
  024ffe8  lis 4, 114
  024ffec  lwz 3, -2344(3)
  024fff0  extsw 3, 3
  024fff4  std 3, 112(1)
  024fff8  lis 3, 37
  024fffc  addi 3, 3, -768
  0250000  lfs 1, 0(3)
  0250004  lfs 2, -3056(4)
  0250008  lfd 3, 112(1)
  025000c  lis 3, 6990
  0250010  fcfid 3, 3
  0250014  ori 4, 3, 33205
  0250018  lhz 6, 26(5)
  025001c  frsp 3, 3
  0250020  fadds 1, 3, 1
  0250024  fmuls 1, 2, 1
  0250028  fctiwz 1, 1
  025002c  stfd 1, 112(1)
  0250030  lwz 3, 116(1)
  0250034  mulhw 4, 4, 3
  0250038  srawi 4, 4, 6
  025003c  srwi 7, 4, 31
  0250040  addc 4, 4, 7
  0250044  cmpw 4, 6
  0250048  bf 1, 0x250068
  025004c  lis 4, 6990
  0250050  ori 4, 4, 33205
  0250054  mulhw 3, 4, 3
  0250058  srawi 3, 3, 6
  025005c  srwi 4, 3, 31
  0250060  addc 3, 3, 4
  0250064  sth 3, 26(5)
  0250068  lis 3, 151
  025006c  lwz 7, 28(5)
  0250070  li 4, 1
  0250074  lis 6, -32768
  0250078  lwz 3, -25488(3)
  025007c  slw 3, 4, 3
  0250080  or 3, 7, 3
  0250084  or 3, 3, 6
  0250088  stw 3, 28(5)
  025008c  ori 3, 29, 0
  0250090  lwz 4, 36(31)
  0250094  extsw 4, 4
  0250098  bl 0x110b70
  025009c  nop
  02500a0  cmpwi 3, 0
  02500a4  bt 2, 0x250130
  02500a8  lis 3, 161
  02500ac  addic 3, 3, -276
  02500b0  lhz 3, 24(3)
  02500b4  cmpwi 3, 0
  02500b8  bf 2, 0x250130
  02500bc  lwz 3, 8332(27)
  02500c0  cmpwi 1, 3, 1
  02500c4  cmpwi 3, 0
  02500c8  cror 2, 2, 6
  02500cc  bt 2, 0x250130
  02500d0  cmpwi 3, 9
  02500d4  bt 2, 0x250130
  02500d8  lwz 3, 88(31)
  02500dc  cmpwi 3, 0
  02500e0  bf 2, 0x250130
  02500e4  lis 3, 37
  02500e8  lwz 5, 80(31)
  02500ec  li 4, 4
  02500f0  addi 3, 3, -768
  02500f4  vspltisw 2, -1
  02500f8  addic 5, 5, 1
  02500fc  lis 6, 114
  0250100  li 7, -3056
  0250104  vslw 2, 2, 2
  0250108  stw 5, 80(31)
  025010c  lvlx 3, 4, 3
  0250110  li 3, 88
  0250114  vspltw 3, 3, 0
  0250118  lvlx 4, 7, 6
  025011c  vmaddfp 2, 4, 3, 2
  0250120  vctsxs 2, 2, 0
  0250124  vspltw 2, 2, 0
  0250128  stvewx 2, 3, 31
  025012c  b 0x250160
  0250130  lwz 3, 88(31)
  0250134  cmpwi 3, 0
  0250138  bt 2, 0x250160
  025013c  lwz 3, 8332(27)
  0250140  cmpwi 1, 3, 1
  0250144  cmpwi 3, 0
  0250148  cror 2, 2, 6
  025014c  bt 2, 0x250158
  0250150  cmpwi 3, 9
  0250154  bf 2, 0x250160
  0250158  li 3, 0
  025015c  stw 3, 88(31)
  0250160  ori 3, 29, 0
  0250164  lwz 4, 36(31)
  0250168  extsw 4, 4
  025016c  bl 0x110b70
  0250170  nop
  0250174  cmpwi 3, 0
  0250178  bt 2, 0x25022c
  025017c  lis 3, 161
  0250180  addic 3, 3, -276
  0250184  lhz 3, 24(3)
  0250188  cmpwi 3, 0
  025018c  bf 2, 0x25022c
  0250190  lwz 3, 8332(27)
  0250194  cmpwi 1, 3, 1
  0250198  cmpwi 3, 0
  025019c  cror 2, 2, 6
  02501a0  bt 2, 0x2501ac
  02501a4  cmpwi 3, 9
  02501a8  bf 2, 0x25022c
  02501ac  lis 3, 10922
  02501b0  lwz 4, 80(31)
  02501b4  ori 3, 3, 43691
  02501b8  mulhw 3, 3, 4
  02501bc  cmpwi 1, 4, 0
  02501c0  srwi 5, 3, 31
  02501c4  addc 3, 3, 5
  02501c8  addc 5, 3, 3
  02501cc  addc 3, 3, 5
  02501d0  addc 3, 3, 3
  02501d4  subc 3, 4, 3
  02501d8  cmpwi 3, 0
  02501dc  crorc 2, 6, 2
  02501e0  bt 2, 0x25022c
  02501e4  lis 3, 114
  02501e8  lwz 3, 2180(3)
  02501ec  cmpwi 3, 0
  02501f0  bf 2, 0x25022c
  02501f4  lis 3, 114
  02501f8  addic 3, 3, 2180
  02501fc  lwz 3, 36(3)
  0250200  cmpwi 3, -1
  0250204  bf 2, 0x25022c
  0250208  lis 3, 161
  025020c  addic 3, 3, 12
  0250210  lhz 3, 176(3)
  0250214  cmpwi 3, 0
  0250218  bf 2, 0x25022c
  025021c  li 3, 3002
  0250220  li 4, 22
  0250224  bl 0x7b310
  0250228  nop
  025022c  ori 3, 29, 0
  0250230  lwz 4, 40(31)
  0250234  extsw 4, 4
  0250238  bl 0x110b70
  025023c  nop
  0250240  cmpwi 3, 0
  0250244  bt 2, 0x250320
  0250248  lwz 3, 8332(27)
  025024c  cmpwi 1, 3, 1
  0250250  cmpwi 3, 0
  0250254  cror 2, 2, 6
  0250258  bt 2, 0x250264
  025025c  cmpwi 3, 9
  0250260  bf 2, 0x250320
  0250264  lis 3, 114
  0250268  lwz 3, 2180(3)
  025026c  cmpwi 3, 0
  0250270  bf 2, 0x250320
  0250274  lis 3, 114
  0250278  addic 3, 3, 2180
  025027c  lwz 3, 36(3)
  0250280  cmpwi 3, -1
  0250284  bf 2, 0x250320
  0250288  lis 3, 161
  025028c  addic 3, 3, 12
  0250290  lhz 3, 192(3)
  0250294  cmpwi 3, 0
  0250298  bf 2, 0x250320
  025029c  lis 3, 161
  02502a0  lis 4, 114
  02502a4  lwz 3, -2344(3)
  02502a8  extsw 3, 3
  02502ac  std 3, 112(1)
  02502b0  lis 3, 37
  02502b4  addi 3, 3, -768
  02502b8  lfs 1, 0(3)
  02502bc  lfs 2, -3056(4)
  02502c0  lfd 3, 112(1)
  02502c4  lis 4, 161
  02502c8  fcfid 3, 3
  02502cc  addic 4, 4, -276
  02502d0  lhz 4, 74(4)
  02502d4  mulli 4, 4, 600
  02502d8  frsp 3, 3
  02502dc  fadds 1, 3, 1
  02502e0  fmuls 1, 2, 1
  02502e4  fctiwz 1, 1
  02502e8  stfd 1, 112(1)
  02502ec  lfs 1, 8(3)
  02502f0  lwz 3, 116(1)
  02502f4  fmuls 1, 2, 1
  02502f8  subc 3, 3, 4
  02502fc  fctiwz 1, 1
  0250300  stfd 1, 112(1)
  0250304  lwz 4, 116(1)
  0250308  cmpw 3, 4
  025030c  bf 1, 0x250320
  0250310  li 3, 3004
  0250314  li 4, 24
  0250318  bl 0x7b310
  025031c  nop
  0250320  lis 3, 164
  0250324  li 30, 0
  0250328  ori 26, 30, 0
  025032c  lwz 3, -28500(3)
  0250330  cmpwi 3, 0
  0250334  bt 2, 0x2503a0
  0250338  lis 4, 37
  025033c  addi 4, 4, -768
  0250340  lfs 1, 12(4)
  0250344  lwz 4, 36(3)
  0250348  cmpwi 4, 0
  025034c  bt 2, 0x250394
  0250350  lhz 4, 70(4)
  0250354  extsh 4, 4
  0250358  cmpwi 4, 5
  025035c  bf 2, 0x250394
  0250360  lfs 2, 20(3)
  0250364  lfs 3, 132(27)
  0250368  lfs 4, 16(3)
  025036c  fsubs 2, 2, 3
  0250370  lfs 3, 128(27)
  0250374  fsubs 3, 4, 3
  0250378  fmuls 2, 2, 2
  025037c  fmadds 2, 3, 3, 2
  0250380  fsqrts 2, 2
  0250384  fcmpu 0, 2, 1
  0250388  cror 6, 1, 2
  025038c  bt 6, 0x250394
  0250390  addic 30, 30, 1
  0250394  lwz 3, 40(3)
  0250398  cmpwi 3, 0
  025039c  bf 2, 0x250344
  02503a0  lwz 4, 60(31)
  02503a4  ori 3, 29, 0
  02503a8  extsw 4, 4
  02503ac  bl 0x110b70
  02503b0  nop
  02503b4  ori 4, 3, 0
  02503b8  lwz 3, 8324(27)
  02503bc  cmpwi 4, 0
  02503c0  bt 2, 0x250478
  02503c4  cmpwi 30, 0
  02503c8  bf 2, 0x250478
  02503cc  lwz 4, 8332(27)
  02503d0  cmpwi 1, 4, 1
  02503d4  cmpwi 4, 0
  02503d8  cror 2, 2, 6
  02503dc  bt 2, 0x2503e8
  02503e0  cmpwi 4, 9
  02503e4  bf 2, 0x250478
  02503e8  cmpwi 3, 30
  02503ec  bt 2, 0x250478
  02503f0  lis 3, 151
  02503f4  addic 3, 3, -16064
  02503f8  lbz 3, 15(3)
  02503fc  cmpwi 3, 0
  0250400  bt 2, 0x250478
  0250404  li 3, 15
  0250408  bl 0x8e0f4
  025040c  nop
  0250410  cmpwi 3, 20
  0250414  bf 1, 0x250478
  0250418  lis 3, 114
  025041c  lwz 3, 2180(3)
  0250420  cmpwi 3, 0
  0250424  bf 2, 0x250478
  0250428  lis 3, 114
  025042c  addic 3, 3, 2180
  0250430  lwz 3, 36(3)
  0250434  cmpwi 3, -1
  0250438  bf 2, 0x250478
  025043c  lis 3, 161
  0250440  addic 3, 3, 12
  0250444  lhz 3, 592(3)
  0250448  cmpwi 3, 0
  025044c  bf 2, 0x250478
  0250450  lis 3, 161
  0250454  addic 3, 3, -276
  0250458  lhz 3, 152(3)
  025045c  cmpwi 3, 0
  0250460  bf 2, 0x250478
  0250464  li 3, 20000
  0250468  li 4, 74
  025046c  bl 0x7b310
  0250470  nop
  0250474  b 0x250550
  0250478  lwz 3, 8324(27)
  025047c  cmpwi 3, 30
  0250480  bf 2, 0x250550
  0250484  lis 4, 161
  0250488  lis 3, 0
  025048c  addic 4, 4, -276
  0250490  ori 5, 3, 65535
  0250494  lhz 3, 152(4)
  0250498  cmpw 3, 5
  025049c  bf 0, 0x2504a8
  02504a0  addic 3, 3, 1
  02504a4  sth 3, 152(4)
  02504a8  lis 3, 161
  02504ac  lis 5, 37
  02504b0  lwz 3, -2344(3)
  02504b4  extsw 3, 3
  02504b8  std 3, 112(1)
  02504bc  addi 3, 5, -768
  02504c0  lis 5, 114
  02504c4  lfs 1, 0(3)
  02504c8  lfs 2, -3056(5)
  02504cc  lfd 3, 112(1)
  02504d0  fcfid 3, 3
  02504d4  lis 3, 6990
  02504d8  lhz 6, 154(4)
  02504dc  ori 5, 3, 33205
  02504e0  frsp 3, 3
  02504e4  fadds 1, 3, 1
  02504e8  fmuls 1, 2, 1
  02504ec  fctiwz 1, 1
  02504f0  stfd 1, 112(1)
  02504f4  lwz 3, 116(1)
  02504f8  mulhw 5, 5, 3
  02504fc  srawi 5, 5, 6
  0250500  srwi 7, 5, 31
  0250504  addc 5, 5, 7
  0250508  cmpw 5, 6
  025050c  bf 1, 0x25052c
  0250510  lis 5, 6990
  0250514  ori 5, 5, 33205
  0250518  mulhw 3, 5, 3
  025051c  srawi 3, 3, 6
  0250520  srwi 5, 3, 31
  0250524  addc 3, 3, 5
  0250528  sth 3, 154(4)
  025052c  lis 3, 151
  0250530  lwz 7, 156(4)
  0250534  li 5, 1
  0250538  lis 6, -32768
  025053c  lwz 3, -25488(3)
  0250540  slw 3, 5, 3
  0250544  or 3, 7, 3
  0250548  or 3, 3, 6
  025054c  stw 3, 156(4)
  0250550  ori 3, 29, 0
  0250554  lwz 4, 56(31)
  0250558  extsw 4, 4
  025055c  bl 0x110b70
  0250560  nop
  0250564  cmpwi 3, 0
  0250568  bt 2, 0x2505e0
  025056c  lwz 3, 8332(27)
  0250570  cmpwi 1, 3, 1
  0250574  cmpwi 3, 0
  0250578  cror 2, 2, 6
  025057c  bt 2, 0x250588
  0250580  cmpwi 3, 9
  0250584  bf 2, 0x2505e0
  0250588  lis 3, 162
  025058c  lwz 3, -22444(3)
  0250590  cmpwi 3, 3
  0250594  bf 0, 0x2505e0
  0250598  lis 3, 114
  025059c  lwz 3, 2180(3)
  02505a0  cmpwi 3, 0
  02505a4  bf 2, 0x2505e0
  02505a8  lis 3, 114
  02505ac  addic 3, 3, 2180
  02505b0  lwz 3, 36(3)
  02505b4  cmpwi 3, -1
  02505b8  bf 2, 0x2505e0
  02505bc  lis 3, 161
  02505c0  addic 3, 3, 12
  02505c4  lhz 3, 512(3)
  02505c8  cmpwi 3, 0
  02505cc  bf 2, 0x2505e0
  02505d0  li 3, 1004
  02505d4  li 4, 64
  02505d8  bl 0x7b310
  02505dc  nop
  02505e0  ori 3, 29, 0
  02505e4  lwz 4, 56(31)
  02505e8  extsw 4, 4
  02505ec  bl 0x110b70
  02505f0  nop
  02505f4  cmpwi 3, 0
  02505f8  lwz 4, 8324(27)
  02505fc  bt 2, 0x250688
  0250600  lwz 3, 8332(27)
  0250604  cmpwi 1, 3, 1
  0250608  cmpwi 3, 0
  025060c  cror 2, 2, 6
  0250610  bt 2, 0x25061c
  0250614  cmpwi 3, 9
  0250618  bf 2, 0x250688
  025061c  cmpwi 4, 1
  0250620  bf 2, 0x250688
  0250624  lis 3, 162
  0250628  lwz 3, -22448(3)
  025062c  cmpwi 3, -1
  0250630  bf 2, 0x250688
  0250634  lis 3, 114
  0250638  lwz 3, 2180(3)
  025063c  cmpwi 3, 0
  0250640  bf 2, 0x250688
  0250644  lis 3, 114
  0250648  addic 3, 3, 2180
  025064c  lwz 3, 36(3)
  0250650  cmpwi 3, -1
  0250654  bf 2, 0x250688
  0250658  lis 3, 161
  025065c  addic 3, 3, 12
  0250660  lhz 4, 512(3)
  0250664  cmpwi 4, 0
  0250668  bt 2, 0x250688
  025066c  lhz 3, 520(3)
  0250670  cmpwi 3, 0
  0250674  bf 2, 0x250688
  0250678  li 3, 1005
  025067c  li 4, 65
  0250680  bl 0x7b310
  0250684  nop
  0250688  ori 3, 29, 0
  025068c  lwz 4, 64(31)
  0250690  extsw 4, 4
  0250694  bl 0x110b70
  0250698  nop
  025069c  cmpwi 3, 0
  02506a0  bt 2, 0x250708
  02506a4  lwz 3, 8332(27)
  02506a8  cmpwi 1, 3, 1
  02506ac  cmpwi 3, 0
  02506b0  cror 2, 2, 6
  02506b4  bt 2, 0x2506c0
  02506b8  cmpwi 3, 9
  02506bc  bf 2, 0x250708
  02506c0  lis 3, 114
  02506c4  lwz 3, 2180(3)
  02506c8  cmpwi 3, 0
  02506cc  bf 2, 0x250708
  02506d0  lis 3, 114
  02506d4  addic 3, 3, 2180
  02506d8  lwz 3, 36(3)
  02506dc  cmpwi 3, -1
  02506e0  bf 2, 0x250708
  02506e4  lis 3, 161
  02506e8  addic 3, 3, 12
  02506ec  lhz 3, 672(3)
  02506f0  cmpwi 3, 0
  02506f4  bf 2, 0x250708
  02506f8  li 3, 3008
  02506fc  li 4, 84
  0250700  bl 0x7b310
  0250704  nop
  0250708  lis 3, 161
  025070c  lwz 3, 1800(3)
  0250710  cmpwi 3, 0
  0250714  bf 2, 0x250774
  0250718  lis 3, 151
  025071c  addic 3, 3, -16027
  0250720  lbz 3, 12(3)
  0250724  cmpwi 3, 0
  0250728  bt 2, 0x250774
  025072c  lis 3, 114
  0250730  lwz 3, 2180(3)
  0250734  cmpwi 3, 0
  0250738  bf 2, 0x250774
  025073c  lis 3, 114
  0250740  addic 3, 3, 2180
  0250744  lwz 3, 36(3)
  0250748  cmpwi 3, -1
  025074c  bf 2, 0x250774
  0250750  lis 3, 161
  0250754  addic 3, 3, 12
  0250758  lhz 3, 200(3)
  025075c  cmpwi 3, 0
  0250760  bf 2, 0x250774
  0250764  li 3, 3005
  0250768  li 4, 25
  025076c  bl 0x7b310
  0250770  nop
  0250774  ori 3, 29, 0
  0250778  lwz 4, 52(31)
  025077c  extsw 4, 4
  0250780  bl 0x110b70
  0250784  nop
  0250788  cmpwi 3, 0
  025078c  bt 2, 0x250880
  0250790  lis 5, 161
  0250794  addic 5, 5, -276
  0250798  lhz 3, 120(5)
  025079c  cmpwi 3, 0
  02507a0  bf 2, 0x250880
  02507a4  lwz 4, 8332(27)
  02507a8  cmpwi 1, 4, 1
  02507ac  cmpwi 4, 0
  02507b0  cror 2, 2, 6
  02507b4  bt 2, 0x2507c0
  02507b8  cmpwi 4, 9
  02507bc  bf 2, 0x250880
  02507c0  lis 4, 0
  02507c4  ori 4, 4, 65535
  02507c8  cmpw 3, 4
  02507cc  bf 0, 0x2507d8
  02507d0  addic 3, 3, 1
  02507d4  sth 3, 120(5)
  02507d8  lis 3, 161
  02507dc  lis 4, 37
  02507e0  lwz 3, -2344(3)
  02507e4  extsw 3, 3
  02507e8  std 3, 112(1)
  02507ec  addi 3, 4, -768
  02507f0  lis 4, 114
  02507f4  lfs 1, 0(3)
  02507f8  lfs 2, -3056(4)
  02507fc  lfd 3, 112(1)
  0250800  fcfid 3, 3
  0250804  lis 3, 6990
  0250808  lhz 6, 122(5)
  025080c  ori 4, 3, 33205
  0250810  frsp 3, 3
  0250814  fadds 1, 3, 1
  0250818  fmuls 1, 2, 1
  025081c  fctiwz 1, 1
  0250820  stfd 1, 112(1)
  0250824  lwz 3, 116(1)
  0250828  mulhw 4, 4, 3
  025082c  srawi 4, 4, 6
  0250830  srwi 7, 4, 31
  0250834  addc 4, 4, 7
  0250838  cmpw 4, 6
  025083c  bf 1, 0x25085c
  0250840  lis 4, 6990
  0250844  ori 4, 4, 33205
  0250848  mulhw 3, 4, 3
  025084c  srawi 3, 3, 6
  0250850  srwi 4, 3, 31
  0250854  addc 3, 3, 4
  0250858  sth 3, 122(5)
  025085c  lis 3, 151
  0250860  lwz 7, 124(5)
  0250864  li 4, 1
  0250868  lis 6, -32768
  025086c  lwz 3, -25488(3)
  0250870  slw 3, 4, 3
  0250874  or 3, 7, 3
  0250878  or 3, 3, 6
  025087c  stw 3, 124(5)
  0250880  lwz 3, 2440(27)
  0250884  cmpwi 3, 0
  0250888  bt 2, 0x2508b0
  025088c  lis 3, 161
  0250890  addic 3, 3, -276
  0250894  lhz 3, 120(3)
  0250898  cmpwi 3, 0
  025089c  bf 2, 0x2508b0
  02508a0  stw 26, 2440(27)
  02508a4  lwz 3, 84(31)
  02508a8  addic 3, 3, 1
  02508ac  stw 3, 84(31)
  02508b0  lis 30, 161
  02508b4  addic 30, 30, -276
  02508b8  lhz 3, 120(30)
  02508bc  cmpwi 3, 0
  02508c0  bf 2, 0x250934
  02508c4  lwz 3, 8332(27)
  02508c8  cmpwi 1, 3, 1
  02508cc  cmpwi 3, 0
  02508d0  cror 2, 2, 6
  02508d4  bt 2, 0x2508e0
  02508d8  cmpwi 3, 9
  02508dc  bf 2, 0x250934
  02508e0  lwz 3, 84(31)
  02508e4  cmpwi 3, 2
  02508e8  bf 1, 0x250934
  02508ec  lis 3, 114
  02508f0  lwz 3, 2180(3)
  02508f4  cmpwi 3, 0
  02508f8  bf 2, 0x250934
  02508fc  lis 3, 114
  0250900  addic 3, 3, 2180
  0250904  lwz 3, 36(3)
  0250908  cmpwi 3, -1
  025090c  bf 2, 0x250934
  0250910  lis 3, 161
  0250914  addic 3, 3, 12
  0250918  lhz 3, 208(3)
  025091c  cmpwi 3, 0
  0250920  bf 2, 0x250934
  0250924  li 3, 3006
  0250928  li 4, 26
  025092c  bl 0x7b310
  0250930  nop
  0250934  lwz 3, 8324(27)
  0250938  cmpwi 3, 116
  025093c  bf 2, 0x250a0c
  0250940  lhz 3, 128(30)
  0250944  cmpwi 3, 0
  0250948  bf 2, 0x250a0c
  025094c  lis 4, 0
  0250950  ori 4, 4, 65535
  0250954  cmpw 3, 4
  0250958  bf 0, 0x250964
  025095c  addic 3, 3, 1
  0250960  sth 3, 128(30)
  0250964  lis 3, 161
  0250968  lis 4, 114
  025096c  lwz 3, -2344(3)
  0250970  extsw 3, 3
  0250974  std 3, 112(1)
  0250978  lis 3, 37
  025097c  addi 3, 3, -768
  0250980  lfs 1, 0(3)
  0250984  lfs 2, -3056(4)
  0250988  lfd 3, 112(1)
  025098c  lis 3, 6990
  0250990  fcfid 3, 3
  0250994  ori 4, 3, 33205
  0250998  lhz 5, 130(30)
  025099c  frsp 3, 3
  02509a0  fadds 1, 3, 1
  02509a4  fmuls 1, 2, 1
  02509a8  fctiwz 1, 1
  02509ac  stfd 1, 112(1)
  02509b0  lwz 3, 116(1)
  02509b4  mulhw 4, 4, 3
  02509b8  srawi 4, 4, 6
  02509bc  srwi 6, 4, 31
  02509c0  addc 4, 4, 6
  02509c4  cmpw 4, 5
  02509c8  bf 1, 0x2509e8
  02509cc  lis 4, 6990
  02509d0  ori 4, 4, 33205
  02509d4  mulhw 3, 4, 3
  02509d8  srawi 3, 3, 6
  02509dc  srwi 4, 3, 31
  02509e0  addc 3, 3, 4
  02509e4  sth 3, 130(30)
  02509e8  lis 3, 151
  02509ec  lwz 6, 132(30)
  02509f0  li 4, 1
  02509f4  lis 5, -32768
  02509f8  lwz 3, -25488(3)
  02509fc  slw 3, 4, 3
  0250a00  or 3, 6, 3
  0250a04  or 3, 3, 5
  0250a08  stw 3, 132(30)
  0250a0c  ori 3, 29, 0
  0250a10  lwz 4, 44(31)
  0250a14  extsw 4, 4
  0250a18  bl 0x110b70
  0250a1c  nop
  0250a20  cmpwi 3, 0
  0250a24  bt 2, 0x250a94
  0250a28  lhz 3, 128(30)
  0250a2c  cmpwi 3, 0
  0250a30  bf 2, 0x250a94
  0250a34  lwz 3, 8332(27)
  0250a38  cmpwi 3, 6
  0250a3c  bf 2, 0x250a94
  0250a40  lwz 3, 4280(27)
  0250a44  cmpwi 3, 8
  0250a48  bf 2, 0x250a94
  0250a4c  lis 3, 114
  0250a50  lwz 3, 2180(3)
  0250a54  cmpwi 3, 0
  0250a58  bf 2, 0x250a94
  0250a5c  lis 3, 114
  0250a60  addic 3, 3, 2180
  0250a64  lwz 3, 36(3)
  0250a68  cmpwi 3, -1
  0250a6c  bf 2, 0x250a94
  0250a70  lis 3, 161
  0250a74  addic 3, 3, 12
  0250a78  lhz 3, 216(3)
  0250a7c  cmpwi 3, 0
  0250a80  bf 2, 0x250a94
  0250a84  li 3, 3007
  0250a88  li 4, 27
  0250a8c  bl 0x7b310
  0250a90  nop
  0250a94  ori 3, 29, 0
  0250a98  lwz 4, 68(31)
  0250a9c  extsw 4, 4
  0250aa0  bl 0x110b70
  0250aa4  nop
  0250aa8  cmpwi 3, 0
  0250aac  bt 2, 0x250b14
  0250ab0  lwz 3, 8332(27)
  0250ab4  cmpwi 1, 3, 1
  0250ab8  cmpwi 3, 0
  0250abc  cror 2, 2, 6
  0250ac0  bt 2, 0x250acc
  0250ac4  cmpwi 3, 9
  0250ac8  bf 2, 0x250b14
  0250acc  lis 3, 114
  0250ad0  lwz 3, 2180(3)
  0250ad4  cmpwi 3, 0
  0250ad8  bf 2, 0x250b14
  0250adc  lis 3, 114
  0250ae0  addic 3, 3, 2180
  0250ae4  lwz 3, 36(3)
  0250ae8  cmpwi 3, -1
  0250aec  bf 2, 0x250b14
  0250af0  lis 3, 161
  0250af4  addic 3, 3, 12
  0250af8  lhz 3, 968(3)
  0250afc  cmpwi 3, 0
  0250b00  bf 2, 0x250b14
  0250b04  li 3, 20015
  0250b08  li 4, 121
  0250b0c  bl 0x7b310
  0250b10  nop
  0250b14  ori 3, 29, 0
  0250b18  lwz 4, 124(31)
  0250b1c  extsw 4, 4
  0250b20  bl 0x110b70
  0250b24  nop
  0250b28  cmpwi 3, 0
  0250b2c  lhz 30, 160(30)
  0250b30  bt 2, 0x250be0
  0250b34  lwz 3, 8332(27)
  0250b38  cmpwi 3, 0
  0250b3c  cmpwi 1, 3, 1
  0250b40  bt 2, 0x250b48
  0250b44  bf 6, 0x250be0
  0250b48  lis 3, 161
  0250b4c  addic 3, 3, 12
  0250b50  lhz 3, 632(3)
  0250b54  cmpwi 3, 0
  0250b58  bf 2, 0x250be0
  0250b5c  cmpwi 30, 0
  0250b60  bf 2, 0x250be0
  0250b64  lis 4, 114
  0250b68  lis 5, 151
  0250b6c  ori 3, 26, 0
  0250b70  addic 4, 4, 4104
  0250b74  addic 5, 5, -16064
  0250b78  sldi 6, 3, 4
  0250b7c  subc 7, 3, 6
  0250b80  sldi 7, 7, 2
  0250b84  subc 6, 6, 7
  0250b88  extsw 6, 6
  0250b8c  lwzx 6, 4, 6
  0250b90  cmpwi 6, 0
  0250b94  bf 2, 0x250bb8
  0250b98  cmpwi 1, 3, 24
  0250b9c  cmpwi 3, 8
  0250ba0  cror 2, 2, 6
  0250ba4  bt 2, 0x250bb8
  0250ba8  lbzx 6, 5, 3
  0250bac  cmpwi 6, 0
  0250bb0  bt 2, 0x250bb8
  0250bb4  addic 26, 26, 1
  0250bb8  addic 3, 3, 1
  0250bbc  extsw 3, 3
  0250bc0  cmpwi 3, 37
  0250bc4  bt 0, 0x250b78
  0250bc8  cmpwi 26, 2
  0250bcc  bt 0, 0x250be0
  0250bd0  li 3, 20005
  0250bd4  li 4, 79
  0250bd8  bl 0x7b310
  0250bdc  nop
  0250be0  ori 3, 29, 0
  0250be4  lwz 4, 112(31)
  0250be8  extsw 4, 4
  0250bec  bl 0x110b70
  0250bf0  nop
  0250bf4  cmpwi 3, 0
  0250bf8  bt 2, 0x250c04
  0250bfc  li 3, 1
  0250c00  stb 3, 24(28)
  0250c04  ori 3, 29, 0
  0250c08  lwz 4, 116(31)
  0250c0c  extsw 4, 4
  0250c10  bl 0x110b70
  0250c14  nop
  0250c18  cmpwi 3, 0
  0250c1c  bt 2, 0x250c2c
  0250c20  li 3, 3
  0250c24  bl 0x11b728
  0250c28  nop
  0250c2c  ld 0, 192(1)
  0250c30  mtlr 0
  0250c34  ld 26, 128(1)
  0250c38  ld 27, 136(1)
  0250c3c  ld 28, 144(1)
  0250c40  ld 29, 152(1)
  0250c44  ld 30, 160(1)
  0250c48  ld 31, 168(1)
  0250c4c  addi 1, 1, 176
  0250c50  blr

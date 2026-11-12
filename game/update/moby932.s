# game/update/moby932.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M932_004be8c0:   # 0x4be8c0, 0x14 bytes
  04be8c0  lis 3, 143
  04be8c4  lis 4, 1
  04be8c8  addic 3, 3, 18908
  04be8cc  stw 4, 72(3)
  04be8d0  blr

M932_004be908:   # 0x4be908, 0x870 bytes
  04be908  stdu 1, -272(1)
  04be90c  mflr 0
  04be910  std 0, 288(1)
  04be914  stfd 31, 264(1)
  04be918  std 31, 256(1)
  04be91c  std 30, 248(1)
  04be920  ori 31, 3, 0
  04be924  lwz 30, 120(31)
  04be928  std 29, 240(1)
  04be92c  std 28, 232(1)
  04be930  addic 3, 30, 388
  04be934  bl 0x4fff60
  04be938  nop
  04be93c  cmpwi 3, 2
  04be940  bf 2, 0x4be950
  04be944  li 3, 5
  04be948  stb 3, 32(31)
  04be94c  b 0x4bf154
  04be950  lis 3, 76
  04be954  lis 4, 114
  04be958  addi 3, 3, -5928
  04be95c  lfs 2, 0(3)
  04be960  lfs 1, -3056(4)
  04be964  lwz 3, 388(30)
  04be968  fmuls 2, 1, 2
  04be96c  fctiwz 2, 2
  04be970  stfd 2, 216(1)
  04be974  lwz 4, 220(1)
  04be978  cmpw 3, 4
  04be97c  bt 2, 0x4bea34
  04be980  lis 4, 76
  04be984  addi 4, 4, -5928
  04be988  lfs 2, 4(4)
  04be98c  fmuls 2, 1, 2
  04be990  fctiwz 2, 2
  04be994  stfd 2, 216(1)
  04be998  lwz 4, 220(1)
  04be99c  cmpw 3, 4
  04be9a0  bt 2, 0x4bea34
  04be9a4  lis 4, 76
  04be9a8  addi 4, 4, -5928
  04be9ac  lfs 2, 8(4)
  04be9b0  fmuls 2, 1, 2
  04be9b4  fctiwz 2, 2
  04be9b8  stfd 2, 216(1)
  04be9bc  lwz 4, 220(1)
  04be9c0  cmpw 3, 4
  04be9c4  bt 2, 0x4bea34
  04be9c8  lis 4, 76
  04be9cc  addi 4, 4, -5928
  04be9d0  lfs 2, 12(4)
  04be9d4  fmuls 2, 1, 2
  04be9d8  fctiwz 2, 2
  04be9dc  stfd 2, 216(1)
  04be9e0  lwz 4, 220(1)
  04be9e4  cmpw 3, 4
  04be9e8  bt 2, 0x4bea34
  04be9ec  lis 4, 76
  04be9f0  addi 4, 4, -5928
  04be9f4  lfs 2, 16(4)
  04be9f8  fmuls 2, 1, 2
  04be9fc  fctiwz 2, 2
  04bea00  stfd 2, 216(1)
  04bea04  lwz 4, 220(1)
  04bea08  cmpw 3, 4
  04bea0c  bt 2, 0x4bea34
  04bea10  lis 4, 76
  04bea14  addi 4, 4, -5928
  04bea18  lfs 2, 20(4)
  04bea1c  fmuls 1, 1, 2
  04bea20  fctiwz 1, 1
  04bea24  stfd 1, 216(1)
  04bea28  lwz 4, 220(1)
  04bea2c  cmpw 3, 4
  04bea30  bf 2, 0x4bea4c
  04bea34  li 5, 240
  04bea38  addic 4, 30, 96
  04bea3c  ori 3, 31, 0
  04bea40  stb 5, 103(30)
  04bea44  bl 0x10c808
  04bea48  nop
  04bea4c  lis 3, 76
  04bea50  li 6, 0
  04bea54  addi 7, 3, -5928
  04bea58  ori 3, 31, 0
  04bea5c  lis 4, 51
  04bea60  li 5, 0
  04bea64  lfs 31, 24(7)
  04bea68  stw 6, 116(1)
  04bea6c  bl 0x10675c
  04bea70  nop
  04bea74  ori 29, 3, 0
  04bea78  ori 3, 31, 0
  04bea7c  ori 4, 29, 0
  04bea80  addic 5, 30, 32
  04bea84  li 6, 0
  04bea88  addic 7, 1, 112
  04bea8c  li 9, 0
  04bea90  addic 8, 1, 116
  04bea94  li 10, 4
  04bea98  bl 0x106840
  04bea9c  nop
  04beaa0  ori 28, 3, 0
  04beaa4  lwz 3, 112(1)
  04beaa8  cmpwi 3, 1
  04beaac  bt 2, 0x4bf068
  04beab0  lbz 3, 32(31)
  04beab4  cmpwi 3, 4
  04beab8  bt 2, 0x4bf068
  04beabc  lfs 1, 32(30)
  04beac0  lfs 2, 116(1)
  04beac4  fsubs 1, 1, 2
  04beac8  fcmpu 0, 1, 31
  04beacc  stfs 1, 32(30)
  04bead0  bt 1, 0x4bead8
  04bead4  li 28, 1
  04bead8  lis 3, 76
  04beadc  addi 3, 3, -5928
  04beae0  lfs 1, 28(3)
  04beae4  bl 0x502758
  04beae8  nop
  04beaec  lis 4, 16128
  04beaf0  lis 5, 143
  04beaf4  lis 6, 114
  04beaf8  lis 7, 14851
  04beafc  stw 4, 152(30)
  04beb00  ori 4, 7, 4719
  04beb04  lfs 1, 19016(5)
  04beb08  lfs 2, -3048(6)
  04beb0c  cmpwi 28, 2
  04beb10  stw 3, 144(30)
  04beb14  fmuls 1, 1, 2
  04beb18  stw 4, 132(30)
  04beb1c  li 3, 0
  04beb20  li 4, 9
  04beb24  stb 3, 173(30)
  04beb28  stw 4, 148(30)
  04beb2c  stfs 1, 128(30)
  04beb30  bt 1, 0x4beb48
  04beb34  cmpwi 28, -1
  04beb38  cmpwi 1, 28, 0
  04beb3c  bf 1, 0x4bf058
  04beb40  bf 5, 0x4bf058
  04beb44  b 0x4bedcc
  04beb48  cmpwi 28, 10
  04beb4c  cmpwi 1, 28, 8
  04beb50  bt 1, 0x4bf058
  04beb54  bf 5, 0x4beb64
  04beb58  li 3, 250
  04beb5c  stb 3, 103(30)
  04beb60  b 0x4bf058
  04beb64  lis 3, 143
  04beb68  lis 4, 114
  04beb6c  lis 5, 143
  04beb70  lfs 1, 19024(3)
  04beb74  lfs 2, -3052(4)
  04beb78  lis 3, 16448
  04beb7c  fmuls 1, 1, 2
  04beb80  lis 4, 16576
  04beb84  stfs 1, 136(30)
  04beb88  lfs 1, 19020(5)
  04beb8c  stw 3, 192(30)
  04beb90  fmuls 1, 1, 2
  04beb94  stw 4, 196(30)
  04beb98  stfs 1, 140(30)
  04beb9c  lwz 3, 32(29)
  04beba0  lfs 1, 16(31)
  04beba4  lfs 2, 20(31)
  04beba8  lfs 3, 16(3)
  04bebac  lfs 4, 20(3)
  04bebb0  fsubs 1, 1, 3
  04bebb4  fsubs 2, 2, 4
  04bebb8  lis 3, 115
  04bebbc  addic 3, 3, 22784
  04bebc0  fabs 3, 1
  04bebc4  fabs 4, 2
  04bebc8  stfs 1, 140(1)
  04bebcc  stfs 2, 144(1)
  04bebd0  fsubs 1, 3, 4
  04bebd4  stfs 1, 148(1)
  04bebd8  lwz 4, 140(1)
  04bebdc  lfs 1, 140(1)
  04bebe0  lwz 5, 144(1)
  04bebe4  lfs 2, 144(1)
  04bebe8  lwz 6, 148(1)
  04bebec  rlwinm 5, 5, 3, 29, 29
  04bebf0  fabs 5, 2
  04bebf4  lfs 2, 148(1)
  04bebf8  fabs 1, 1
  04bebfc  rlwimi 5, 6, 2, 30, 30
  04bec00  fsub 6, 2, 31
  04bec04  fsub 7, 2, 31
  04bec08  rlwimi 5, 4, 4, 28, 28
  04bec0c  ori 4, 3, 0
  04bec10  rlwimi 4, 5, 2, 26, 28
  04bec14  slwi 5, 5, 2
  04bec18  clrldi 4, 4, 32
  04bec1c  fsel 4, 6, 1, 4
  04bec20  lfsx 1, 3, 5
  04bec24  fsel 3, 7, 5, 3
  04bec28  lfs 2, 4(4)
  04bec2c  fcmpu 0, 4, 31
  04bec30  bt 1, 0x4bec38
  04bec34  b 0x4bed58
  04bec38  fsubs 5, 3, 4
  04bec3c  fadds 3, 3, 4
  04bec40  addic 3, 1, 16
  04bec44  li 7, 2
  04bec48  addic 4, 3, 168
  04bec4c  addic 5, 3, 184
  04bec50  mtctr 7
  04bec54  fdivs 3, 5, 3
  04bec58  fmuls 4, 3, 3
  04bec5c  stfs 3, 196(1)
  04bec60  stfs 3, 188(1)
  04bec64  stfs 3, 192(1)
  04bec68  stfs 3, 184(1)
  04bec6c  lfs 6, 196(1)
  04bec70  lfs 7, 188(1)
  04bec74  lfs 8, 192(1)
  04bec78  fmuls 5, 4, 4
  04bec7c  fmuls 7, 7, 4
  04bec80  fmuls 6, 6, 5
  04bec84  fmuls 3, 5, 5
  04bec88  fmuls 5, 8, 5
  04bec8c  stfs 7, 188(1)
  04bec90  fmuls 4, 6, 4
  04bec94  stfs 5, 192(1)
  04bec98  stfs 4, 196(1)
  04bec9c  lfs 4, 168(3)
  04beca0  fmuls 4, 4, 3
  04beca4  stfs 4, 184(3)
  04beca8  lfs 4, 4(4)
  04becac  addic 3, 3, 8
  04becb0  addic 4, 4, 8
  04becb4  fmuls 4, 4, 3
  04becb8  stfs 4, 4(5)
  04becbc  addic 5, 5, 8
  04becc0  bdnz 0x4bec9c
  04becc4  li 5, 4
  04becc8  ori 3, 1, 0
  04beccc  mtctr 5
  04becd0  lis 4, 115
  04becd4  addic 5, 3, 184
  04becd8  addic 4, 4, 22752
  04becdc  ori 6, 5, 0
  04bece0  lfs 3, 184(3)
  04bece4  lfs 4, 0(4)
  04bece8  fmuls 3, 3, 4
  04becec  lfs 4, 4(4)
  04becf0  addic 4, 4, 8
  04becf4  stfs 3, 184(3)
  04becf8  lfs 3, 4(5)
  04becfc  addic 3, 3, 8
  04bed00  fmuls 3, 3, 4
  04bed04  stfs 3, 4(5)
  04bed08  addic 5, 5, 8
  04bed0c  bdnz 0x4bece0
  04bed10  ori 3, 1, 0
  04bed14  mtctr 7
  04bed18  lfs 3, 184(3)
  04bed1c  lfs 4, 4(6)
  04bed20  fadds 3, 31, 3
  04bed24  lfs 5, 8(6)
  04bed28  lfs 31, 12(6)
  04bed2c  addic 3, 3, 16
  04bed30  addic 6, 6, 16
  04bed34  fadds 3, 3, 4
  04bed38  fadds 3, 3, 5
  04bed3c  fadds 31, 3, 31
  04bed40  bdnz 0x4bed18
  04bed44  lis 3, 76
  04bed48  addi 3, 3, -5928
  04bed4c  lfs 3, 32(3)
  04bed50  fadds 31, 31, 3
  04bed54  fmadds 31, 31, 1, 2
  04bed58  stfs 31, 120(1)
  04bed5c  addic 5, 1, 120
  04bed60  lfs 1, 16(29)
  04bed64  addic 6, 30, 136
  04bed68  lfs 2, 24(29)
  04bed6c  addic 7, 30, 140
  04bed70  stfs 1, 48(1)
  04bed74  stfs 2, 56(1)
  04bed78  lfs 1, 20(29)
  04bed7c  lfs 2, 28(29)
  04bed80  stfs 1, 52(1)
  04bed84  stfs 2, 60(1)
  04bed88  ld 3, 48(1)
  04bed8c  ld 4, 56(1)
  04bed90  bl 0x107de8
  04bed94  nop
  04bed98  ori 3, 31, 0
  04bed9c  lfs 1, 120(1)
  04beda0  addic 4, 30, 112
  04beda4  li 6, 0
  04beda8  li 7, 1
  04bedac  li 8, 0
  04bedb0  bl 0x10ad80
  04bedb4  nop
  04bedb8  li 3, 3
  04bedbc  li 4, 120
  04bedc0  stb 3, 32(31)
  04bedc4  stb 4, 103(30)
  04bedc8  b 0x4bf058
  04bedcc  lis 3, 143
  04bedd0  lis 4, 114
  04bedd4  li 6, 0
  04bedd8  lis 5, 143
  04beddc  lfs 1, 19016(3)
  04bede0  lfs 2, -3048(4)
  04bede4  lis 3, 114
  04bede8  lhz 4, 52(31)
  04bedec  fmuls 1, 1, 2
  04bedf0  rlwimi 4, 6, 0, 19, 19
  04bedf4  lis 6, 143
  04bedf8  sth 4, 52(31)
  04bedfc  lis 4, 16736
  04bee00  stfs 1, 128(30)
  04bee04  lfs 1, 19032(5)
  04bee08  lfs 2, -3052(3)
  04bee0c  lis 3, 16864
  04bee10  fmuls 1, 1, 2
  04bee14  stfs 1, 136(30)
  04bee18  lfs 1, 19028(6)
  04bee1c  stw 4, 192(30)
  04bee20  fmuls 1, 1, 2
  04bee24  stw 3, 196(30)
  04bee28  stfs 1, 140(30)
  04bee2c  lwz 3, 32(29)
  04bee30  lfs 1, 16(31)
  04bee34  lfs 2, 20(31)
  04bee38  lfs 3, 16(3)
  04bee3c  lfs 4, 20(3)
  04bee40  fsubs 1, 1, 3
  04bee44  fsubs 2, 2, 4
  04bee48  lis 3, 115
  04bee4c  addic 3, 3, 22784
  04bee50  fabs 3, 1
  04bee54  fabs 4, 2
  04bee58  stfs 1, 128(1)
  04bee5c  stfs 2, 132(1)
  04bee60  fsubs 1, 3, 4
  04bee64  stfs 1, 136(1)
  04bee68  lwz 4, 128(1)
  04bee6c  lfs 1, 128(1)
  04bee70  lwz 5, 132(1)
  04bee74  lfs 2, 132(1)
  04bee78  lwz 6, 136(1)
  04bee7c  rlwinm 5, 5, 3, 29, 29
  04bee80  fabs 5, 2
  04bee84  lfs 2, 136(1)
  04bee88  fabs 1, 1
  04bee8c  rlwimi 5, 6, 2, 30, 30
  04bee90  fsub 6, 2, 31
  04bee94  fsub 7, 2, 31
  04bee98  rlwimi 5, 4, 4, 28, 28
  04bee9c  ori 4, 3, 0
  04beea0  rlwimi 4, 5, 2, 26, 28
  04beea4  slwi 5, 5, 2
  04beea8  clrldi 4, 4, 32
  04beeac  fsel 4, 6, 1, 4
  04beeb0  lfsx 1, 3, 5
  04beeb4  fsel 3, 7, 5, 3
  04beeb8  lfs 2, 4(4)
  04beebc  fcmpu 0, 4, 31
  04beec0  bt 1, 0x4beec8
  04beec4  b 0x4befe8
  04beec8  fsubs 5, 3, 4
  04beecc  fadds 3, 3, 4
  04beed0  addic 3, 1, 16
  04beed4  li 7, 2
  04beed8  addic 4, 3, 136
  04beedc  addic 5, 3, 152
  04beee0  mtctr 7
  04beee4  fdivs 3, 5, 3
  04beee8  fmuls 4, 3, 3
  04beeec  stfs 3, 164(1)
  04beef0  stfs 3, 156(1)
  04beef4  stfs 3, 160(1)
  04beef8  stfs 3, 152(1)
  04beefc  lfs 6, 164(1)
  04bef00  lfs 7, 156(1)
  04bef04  lfs 8, 160(1)
  04bef08  fmuls 5, 4, 4
  04bef0c  fmuls 7, 7, 4
  04bef10  fmuls 6, 6, 5
  04bef14  fmuls 3, 5, 5
  04bef18  fmuls 5, 8, 5
  04bef1c  stfs 7, 156(1)
  04bef20  fmuls 4, 6, 4
  04bef24  stfs 5, 160(1)
  04bef28  stfs 4, 164(1)
  04bef2c  lfs 4, 136(3)
  04bef30  fmuls 4, 4, 3
  04bef34  stfs 4, 152(3)
  04bef38  lfs 4, 4(4)
  04bef3c  addic 3, 3, 8
  04bef40  addic 4, 4, 8
  04bef44  fmuls 4, 4, 3
  04bef48  stfs 4, 4(5)
  04bef4c  addic 5, 5, 8
  04bef50  bdnz 0x4bef2c
  04bef54  li 5, 4
  04bef58  ori 3, 1, 0
  04bef5c  mtctr 5
  04bef60  lis 4, 115
  04bef64  addic 5, 3, 152
  04bef68  addic 4, 4, 22752
  04bef6c  ori 6, 5, 0
  04bef70  lfs 3, 152(3)
  04bef74  lfs 4, 0(4)
  04bef78  fmuls 3, 3, 4
  04bef7c  lfs 4, 4(4)
  04bef80  addic 4, 4, 8
  04bef84  stfs 3, 152(3)
  04bef88  lfs 3, 4(5)
  04bef8c  addic 3, 3, 8
  04bef90  fmuls 3, 3, 4
  04bef94  stfs 3, 4(5)
  04bef98  addic 5, 5, 8
  04bef9c  bdnz 0x4bef70
  04befa0  ori 3, 1, 0
  04befa4  mtctr 7
  04befa8  lfs 3, 152(3)
  04befac  lfs 4, 4(6)
  04befb0  fadds 3, 31, 3
  04befb4  lfs 5, 8(6)
  04befb8  lfs 31, 12(6)
  04befbc  addic 3, 3, 16
  04befc0  addic 6, 6, 16
  04befc4  fadds 3, 3, 4
  04befc8  fadds 3, 3, 5
  04befcc  fadds 31, 3, 31
  04befd0  bdnz 0x4befa8
  04befd4  lis 3, 76
  04befd8  addi 3, 3, -5928
  04befdc  lfs 3, 32(3)
  04befe0  fadds 31, 31, 3
  04befe4  fmadds 31, 31, 1, 2
  04befe8  stfs 31, 124(1)
  04befec  addic 5, 1, 124
  04beff0  lfs 1, 16(29)
  04beff4  addic 6, 30, 136
  04beff8  lfs 2, 24(29)
  04beffc  addic 7, 30, 140
  04bf000  stfs 1, 48(1)
  04bf004  stfs 2, 56(1)
  04bf008  lfs 1, 20(29)
  04bf00c  lfs 2, 28(29)
  04bf010  stfs 1, 52(1)
  04bf014  stfs 2, 60(1)
  04bf018  ld 3, 48(1)
  04bf01c  ld 4, 56(1)
  04bf020  bl 0x107de8
  04bf024  nop
  04bf028  ori 3, 31, 0
  04bf02c  lfs 1, 124(1)
  04bf030  addic 4, 30, 112
  04bf034  li 6, 0
  04bf038  li 7, 1
  04bf03c  li 8, 0
  04bf040  bl 0x10ad80
  04bf044  nop
  04bf048  li 3, 4
  04bf04c  li 4, 240
  04bf050  stb 3, 32(31)
  04bf054  stb 4, 103(30)
  04bf058  addic 4, 30, 96
  04bf05c  ori 3, 31, 0
  04bf060  bl 0x10c808
  04bf064  nop
  04bf068  li 5, 255
  04bf06c  addic 4, 30, 96
  04bf070  ori 3, 31, 0
  04bf074  stb 5, 164(31)
  04bf078  bl 0x10c9a0
  04bf07c  nop
  04bf080  lwz 3, 384(30)
  04bf084  lis 4, 76
  04bf088  lis 5, 165
  04bf08c  slwi 3, 3, 2
  04bf090  addi 4, 4, -5928
  04bf094  addic 5, 5, 7136
  04bf098  extsw 3, 3
  04bf09c  lis 6, 16704
  04bf0a0  li 7, 0
  04bf0a4  lfs 1, 36(4)
  04bf0a8  addic 4, 30, 288
  04bf0ac  stw 6, 392(30)
  04bf0b0  lwzx 5, 5, 3
  04bf0b4  li 6, 0
  04bf0b8  ori 3, 31, 0
  04bf0bc  addic 8, 5, 16
  04bf0c0  lwz 9, 0(5)
  04bf0c4  extsw 9, 9
  04bf0c8  bl 0x111ba0
  04bf0cc  nop
  04bf0d0  cmpwi 3, 2
  04bf0d4  bt 2, 0x4bf138
  04bf0d8  lfs 1, 20(31)
  04bf0dc  lfs 2, 292(30)
  04bf0e0  lfs 3, 16(31)
  04bf0e4  fsubs 1, 1, 2
  04bf0e8  lfs 2, 288(30)
  04bf0ec  fsubs 2, 3, 2
  04bf0f0  fmuls 1, 1, 1
  04bf0f4  fmadds 1, 2, 2, 1
  04bf0f8  lfs 2, 392(30)
  04bf0fc  fsqrts 1, 1
  04bf100  fcmpu 0, 1, 2
  04bf104  bt 1, 0x4bf130
  04bf108  lfs 1, 24(31)
  04bf10c  lis 3, 76
  04bf110  lfs 2, 296(30)
  04bf114  addi 3, 3, -5928
  04bf118  fsubs 1, 1, 2
  04bf11c  lfs 2, 40(3)
  04bf120  fabs 1, 1
  04bf124  fcmpu 0, 1, 2
  04bf128  cror 6, 0, 2
  04bf12c  bt 6, 0x4bf138
  04bf130  li 3, 2
  04bf134  stw 3, 356(30)
  04bf138  lwz 3, 352(30)
  04bf13c  cmpwi 3, 0
  04bf140  bf 2, 0x4bf154
  04bf144  lis 3, 151
  04bf148  addic 3, 3, -25376
  04bf14c  lwz 3, 8320(3)
  04bf150  stw 3, 352(30)
  04bf154  ld 0, 288(1)
  04bf158  mtlr 0
  04bf15c  lfd 31, 264(1)
  04bf160  ld 28, 232(1)
  04bf164  ld 29, 240(1)
  04bf168  ld 30, 248(1)
  04bf16c  ld 31, 256(1)
  04bf170  addi 1, 1, 272
  04bf174  blr

UpdateMoby_932:   # 0x4bf1d0, 0x64c bytes
  04bf1d0  stdu 1, -336(1)
  04bf1d4  mflr 0
  04bf1d8  std 0, 352(1)
  04bf1dc  std 31, 328(1)
  04bf1e0  std 30, 320(1)
  04bf1e4  ori 31, 3, 0
  04bf1e8  std 29, 312(1)
  04bf1ec  lwz 30, 120(31)
  04bf1f0  bl 0x4be908
  04bf1f4  lbz 4, 32(31)
  04bf1f8  lwz 3, 352(30)
  04bf1fc  cmpwi 4, 5
  04bf200  bt 2, 0x4bf780
  04bf204  cmpwi 4, 4
  04bf208  bt 2, 0x4bf72c
  04bf20c  cmpwi 4, 3
  04bf210  bt 2, 0x4bf694
  04bf214  cmpwi 4, 2
  04bf218  bt 2, 0x4bf3b8
  04bf21c  cmpwi 4, 1
  04bf220  bt 2, 0x4bf310
  04bf224  cmpwi 4, 0
  04bf228  bf 2, 0x4bf800
  04bf22c  lis 3, 16448
  04bf230  li 4, 3
  04bf234  li 5, 2
  04bf238  stw 3, 32(30)
  04bf23c  lwz 3, 384(30)
  04bf240  sth 4, 36(30)
  04bf244  cmpwi 3, -1
  04bf248  stb 5, 40(30)
  04bf24c  bf 2, 0x4bf278
  04bf250  lis 3, 102
  04bf254  lhz 4, 178(31)
  04bf258  addic 3, 3, -29484
  04bf25c  extsh 4, 4
  04bf260  bl 0x5cd098
  04bf264  nop
  04bf268  ori 3, 31, 0
  04bf26c  bl 0xefb38
  04bf270  nop
  04bf274  b 0x4bf800
  04bf278  addic 3, 30, 208
  04bf27c  bl 0x100f8c
  04bf280  nop
  04bf284  lis 4, 76
  04bf288  lis 3, 16128
  04bf28c  addi 29, 4, -3720
  04bf290  stw 3, 220(30)
  04bf294  stw 3, 216(30)
  04bf298  lfs 1, 0(29)
  04bf29c  bl 0x502758
  04bf2a0  nop
  04bf2a4  stw 3, 208(30)
  04bf2a8  li 4, 1
  04bf2ac  lis 3, 114
  04bf2b0  lfs 1, 4(29)
  04bf2b4  lfs 2, -3052(3)
  04bf2b8  fmuls 1, 2, 1
  04bf2bc  stfs 1, 244(30)
  04bf2c0  lbz 3, 83(31)
  04bf2c4  stb 4, 32(31)
  04bf2c8  cmpwi 3, 0
  04bf2cc  bt 2, 0x4bf800
  04bf2d0  lis 3, 76
  04bf2d4  lis 4, 114
  04bf2d8  addi 3, 3, -3720
  04bf2dc  li 5, 0
  04bf2e0  lfs 1, 8(3)
  04bf2e4  lfs 2, -3056(4)
  04bf2e8  ori 3, 31, 0
  04bf2ec  li 4, 0
  04bf2f0  fmuls 1, 2, 1
  04bf2f4  fctiwz 1, 1
  04bf2f8  stfd 1, 288(1)
  04bf2fc  lwz 6, 292(1)
  04bf300  extsw 6, 6
  04bf304  bl 0xfddc0
  04bf308  nop
  04bf30c  b 0x4bf800
  04bf310  lwz 3, 356(30)
  04bf314  cmpwi 3, 2
  04bf318  bt 2, 0x4bf800
  04bf31c  li 3, 2
  04bf320  lbz 4, 83(31)
  04bf324  cmpwi 4, 1
  04bf328  stb 3, 32(31)
  04bf32c  bt 2, 0x4bf36c
  04bf330  lis 3, 76
  04bf334  lis 4, 114
  04bf338  addi 3, 3, -3720
  04bf33c  li 5, 0
  04bf340  lfs 1, 8(3)
  04bf344  lfs 2, -3056(4)
  04bf348  ori 3, 31, 0
  04bf34c  li 4, 1
  04bf350  fmuls 1, 2, 1
  04bf354  fctiwz 1, 1
  04bf358  stfd 1, 288(1)
  04bf35c  lwz 6, 292(1)
  04bf360  extsw 6, 6
  04bf364  bl 0xfddc0
  04bf368  nop
  04bf36c  lwz 3, 388(30)
  04bf370  cmpwi 3, 0
  04bf374  bf 2, 0x4bf800
  04bf378  lis 3, 76
  04bf37c  li 4, 12
  04bf380  vspltisw 2, -1
  04bf384  addi 3, 3, -3720
  04bf388  lis 5, 114
  04bf38c  li 6, -3056
  04bf390  vslw 2, 2, 2
  04bf394  lvlx 3, 4, 3
  04bf398  li 3, 388
  04bf39c  vspltw 3, 3, 0
  04bf3a0  lvlx 4, 6, 5
  04bf3a4  vmaddfp 2, 4, 3, 2
  04bf3a8  vctsxs 2, 2, 0
  04bf3ac  vspltw 2, 2, 0
  04bf3b0  stvewx 2, 3, 30
  04bf3b4  b 0x4bf800
  04bf3b8  lfs 1, 16(3)
  04bf3bc  lfs 2, 16(31)
  04bf3c0  lfs 3, 20(3)
  04bf3c4  lfs 4, 20(31)
  04bf3c8  fsubs 1, 1, 2
  04bf3cc  lis 3, 76
  04bf3d0  fsubs 2, 3, 4
  04bf3d4  addi 4, 3, -3720
  04bf3d8  lis 5, 115
  04bf3dc  addic 3, 31, 72
  04bf3e0  addic 5, 5, 22784
  04bf3e4  fabs 5, 1
  04bf3e8  fabs 4, 2
  04bf3ec  stfs 1, 240(1)
  04bf3f0  stfs 2, 244(1)
  04bf3f4  fsubs 1, 5, 4
  04bf3f8  stfs 1, 248(1)
  04bf3fc  lwz 6, 240(1)
  04bf400  lfs 1, 16(4)
  04bf404  lfs 2, 240(1)
  04bf408  lwz 4, 244(1)
  04bf40c  lfs 3, 244(1)
  04bf410  fabs 2, 2
  04bf414  lwz 7, 248(1)
  04bf418  rlwinm 4, 4, 3, 29, 29
  04bf41c  fabs 6, 3
  04bf420  lfs 3, 248(1)
  04bf424  rlwimi 4, 7, 2, 30, 30
  04bf428  fsub 7, 3, 1
  04bf42c  rlwimi 4, 6, 4, 28, 28
  04bf430  fsub 8, 3, 1
  04bf434  ori 6, 5, 0
  04bf438  rlwimi 6, 4, 2, 26, 28
  04bf43c  slwi 4, 4, 2
  04bf440  clrldi 6, 6, 32
  04bf444  fsel 4, 7, 2, 4
  04bf448  lfsx 3, 5, 4
  04bf44c  lfs 2, 4(6)
  04bf450  fsel 5, 8, 6, 5
  04bf454  fcmpu 0, 4, 1
  04bf458  bt 1, 0x4bf460
  04bf45c  b 0x4bf584
  04bf460  fsubs 6, 5, 4
  04bf464  fadds 4, 5, 4
  04bf468  addic 7, 1, 16
  04bf46c  li 4, 2
  04bf470  addic 5, 7, 252
  04bf474  addic 6, 7, 236
  04bf478  mtctr 4
  04bf47c  fdivs 4, 6, 4
  04bf480  fmuls 6, 4, 4
  04bf484  stfs 4, 264(1)
  04bf488  stfs 4, 256(1)
  04bf48c  stfs 4, 260(1)
  04bf490  stfs 4, 252(1)
  04bf494  lfs 7, 264(1)
  04bf498  lfs 8, 256(1)
  04bf49c  lfs 9, 260(1)
  04bf4a0  fmuls 4, 6, 6
  04bf4a4  fmuls 8, 8, 6
  04bf4a8  fmuls 7, 7, 4
  04bf4ac  fmuls 5, 4, 4
  04bf4b0  fmuls 4, 9, 4
  04bf4b4  stfs 8, 256(1)
  04bf4b8  fmuls 6, 7, 6
  04bf4bc  stfs 4, 260(1)
  04bf4c0  stfs 6, 264(1)
  04bf4c4  lfs 4, 236(7)
  04bf4c8  fmuls 4, 4, 5
  04bf4cc  stfs 4, 252(7)
  04bf4d0  lfs 4, 4(6)
  04bf4d4  addic 6, 6, 8
  04bf4d8  fmuls 4, 4, 5
  04bf4dc  addic 7, 7, 8
  04bf4e0  stfs 4, 4(5)
  04bf4e4  addic 5, 5, 8
  04bf4e8  bdnz 0x4bf4c4
  04bf4ec  ori 8, 1, 0
  04bf4f0  li 5, 4
  04bf4f4  lis 7, 115
  04bf4f8  addic 6, 8, 252
  04bf4fc  mtctr 5
  04bf500  addic 7, 7, 22752
  04bf504  ori 5, 6, 0
  04bf508  lfs 4, 252(8)
  04bf50c  lfs 5, 0(7)
  04bf510  fmuls 4, 4, 5
  04bf514  lfs 5, 4(7)
  04bf518  addic 7, 7, 8
  04bf51c  stfs 4, 252(8)
  04bf520  lfs 4, 4(6)
  04bf524  addic 8, 8, 8
  04bf528  fmuls 4, 4, 5
  04bf52c  stfs 4, 4(6)
  04bf530  addic 6, 6, 8
  04bf534  bdnz 0x4bf508
  04bf538  ori 6, 4, 0
  04bf53c  ori 4, 1, 0
  04bf540  mtctr 6
  04bf544  lfs 4, 252(4)
  04bf548  fadds 1, 1, 4
  04bf54c  lfs 4, 4(5)
  04bf550  addic 4, 4, 16
  04bf554  lfs 5, 8(5)
  04bf558  lfs 6, 12(5)
  04bf55c  addic 5, 5, 16
  04bf560  fadds 1, 1, 4
  04bf564  fadds 1, 1, 5
  04bf568  fadds 1, 1, 6
  04bf56c  bdnz 0x4bf544
  04bf570  lis 4, 76
  04bf574  addi 4, 4, -3720
  04bf578  lfs 4, 20(4)
  04bf57c  fadds 1, 1, 4
  04bf580  fmadds 1, 1, 3, 2
  04bf584  lis 4, 76
  04bf588  lis 6, 114
  04bf58c  addi 29, 4, -3720
  04bf590  lis 4, 114
  04bf594  addic 5, 30, 396
  04bf598  lfs 2, 24(29)
  04bf59c  lfs 3, -3048(4)
  04bf5a0  lfs 4, 28(29)
  04bf5a4  fmuls 2, 3, 2
  04bf5a8  lfs 5, -3052(6)
  04bf5ac  fmuls 4, 5, 4
  04bf5b0  fmr 3, 2
  04bf5b4  bl 0x10a2e0
  04bf5b8  nop
  04bf5bc  lfs 1, 32(29)
  04bf5c0  lfs 2, 36(29)
  04bf5c4  lfs 3, 72(31)
  04bf5c8  lfs 4, 40(29)
  04bf5cc  fadds 1, 3, 1
  04bf5d0  fsubs 5, 2, 3
  04bf5d4  fsubs 6, 4, 3
  04bf5d8  li 5, 0
  04bf5dc  addic 4, 30, 208
  04bf5e0  ori 3, 31, 0
  04bf5e4  addic 6, 1, 208
  04bf5e8  fsubs 2, 2, 1
  04bf5ec  fsub 7, 3, 5
  04bf5f0  fsubs 4, 4, 1
  04bf5f4  fsub 9, 1, 2
  04bf5f8  fsel 3, 7, 5, 3
  04bf5fc  lfs 5, 44(29)
  04bf600  fsel 1, 9, 2, 1
  04bf604  fsub 2, 6, 3
  04bf608  fsub 8, 4, 1
  04bf60c  fsel 2, 2, 6, 3
  04bf610  lfs 3, 48(29)
  04bf614  lfs 6, 52(29)
  04bf618  lfs 7, 56(29)
  04bf61c  fsel 1, 8, 4, 1
  04bf620  fmuls 4, 2, 2
  04bf624  fmuls 8, 1, 1
  04bf628  fmuls 9, 4, 2
  04bf62c  fmuls 11, 8, 1
  04bf630  fmuls 12, 4, 9
  04bf634  fmadds 2, 9, 5, 2
  04bf638  lfs 9, 60(29)
  04bf63c  stw 5, 200(1)
  04bf640  addic 5, 1, 192
  04bf644  fmuls 10, 8, 11
  04bf648  fmadds 1, 11, 5, 1
  04bf64c  fmuls 5, 4, 12
  04bf650  fmadds 2, 12, 3, 2
  04bf654  fmuls 11, 8, 10
  04bf658  fmadds 1, 10, 3, 1
  04bf65c  fmuls 3, 4, 5
  04bf660  fmadds 2, 5, 6, 2
  04bf664  fmuls 4, 8, 11
  04bf668  fmadds 1, 11, 6, 1
  04bf66c  fmadds 2, 3, 7, 2
  04bf670  fmadds 1, 4, 7, 1
  04bf674  fmuls 2, 2, 9
  04bf678  fmuls 3, 1, 9
  04bf67c  stfs 2, 196(1)
  04bf680  lfs 1, 64(29)
  04bf684  stfs 3, 192(1)
  04bf688  bl 0x101058
  04bf68c  nop
  04bf690  b 0x4bf800
  04bf694  ori 3, 31, 0
  04bf698  addic 4, 30, 112
  04bf69c  bl 0x10b030
  04bf6a0  nop
  04bf6a4  ori 30, 3, 0
  04bf6a8  li 3, 65
  04bf6ac  and 3, 30, 3
  04bf6b0  cmpwi 3, 0
  04bf6b4  bt 2, 0x4bf70c
  04bf6b8  li 3, 1
  04bf6bc  lbz 4, 83(31)
  04bf6c0  cmpwi 4, 0
  04bf6c4  stb 3, 32(31)
  04bf6c8  bt 2, 0x4bf800
  04bf6cc  lis 3, 76
  04bf6d0  lis 4, 114
  04bf6d4  addi 3, 3, -3720
  04bf6d8  li 5, 0
  04bf6dc  lfs 1, 8(3)
  04bf6e0  lfs 2, -3056(4)
  04bf6e4  ori 3, 31, 0
  04bf6e8  fmuls 1, 2, 1
  04bf6ec  li 4, 0
  04bf6f0  fctiwz 1, 1
  04bf6f4  stfd 1, 288(1)
  04bf6f8  lwz 6, 292(1)
  04bf6fc  extsw 6, 6
  04bf700  bl 0xfddc0
  04bf704  nop
  04bf708  b 0x4bf800
  04bf70c  li 3, 288
  04bf710  and 3, 30, 3
  04bf714  cmpwi 3, 0
  04bf718  bt 2, 0x4bf800
  04bf71c  ori 3, 31, 0
  04bf720  bl 0xefb38
  04bf724  nop
  04bf728  b 0x4bf800
  04bf72c  addic 4, 30, 112
  04bf730  ori 3, 31, 0
  04bf734  bl 0x10b030
  04bf738  nop
  04bf73c  li 4, 352
  04bf740  and 3, 3, 4
  04bf744  cmpwi 3, 0
  04bf748  bt 2, 0x4bf800
  04bf74c  lis 3, 76
  04bf750  addic 4, 31, 16
  04bf754  addi 5, 3, -3720
  04bf758  ori 3, 31, 0
  04bf75c  li 6, -1
  04bf760  lfs 1, 68(5)
  04bf764  lfs 2, 72(5)
  04bf768  bl 0x10fb28
  04bf76c  nop
  04bf770  ori 3, 31, 0
  04bf774  bl 0xefb38
  04bf778  nop
  04bf77c  b 0x4bf800
  04bf780  li 6, 0
  04bf784  lis 3, 76
  04bf788  li 12, -1
  04bf78c  addi 7, 3, -3720
  04bf790  stw 6, 236(1)
  04bf794  stw 6, 232(1)
  04bf798  li 11, 1
  04bf79c  stw 6, 228(1)
  04bf7a0  ori 3, 31, 0
  04bf7a4  stw 6, 224(1)
  04bf7a8  addic 4, 1, 224
  04bf7ac  lfs 1, 60(7)
  04bf7b0  addic 5, 31, 16
  04bf7b4  lfs 2, 64(7)
  04bf7b8  li 8, 10
  04bf7bc  lfs 3, 4(7)
  04bf7c0  li 9, 3
  04bf7c4  lfs 5, 76(7)
  04bf7c8  li 10, 16
  04bf7cc  lfs 7, 80(7)
  04bf7d0  fmr 4, 1
  04bf7d4  std 12, 144(1)
  04bf7d8  fmr 6, 2
  04bf7dc  std 11, 160(1)
  04bf7e0  std 11, 168(1)
  04bf7e4  std 12, 176(1)
  04bf7e8  std 6, 184(1)
  04bf7ec  bl 0x10e030
  04bf7f0  nop
  04bf7f4  ori 3, 31, 0
  04bf7f8  bl 0xefb38
  04bf7fc  nop
  04bf800  ld 0, 352(1)
  04bf804  mtlr 0
  04bf808  ld 29, 312(1)
  04bf80c  ld 30, 320(1)
  04bf810  ld 31, 328(1)
  04bf814  addi 1, 1, 336
  04bf818  blr

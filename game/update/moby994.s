# game/update/moby994.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M994_004ceb48:   # 0x4ceb48, 0x4 bytes
  04ceb48  blr

M994_004ceb50:   # 0x4ceb50, 0x3e8 bytes
  04ceb50  stdu 1, -384(1)
  04ceb54  mflr 0
  04ceb58  std 0, 400(1)
  04ceb5c  stfd 31, 376(1)
  04ceb60  std 31, 368(1)
  04ceb64  lis 4, 149
  04ceb68  lwz 31, 120(3)
  04ceb6c  addic 4, 4, 5056
  04ceb70  lfs 1, 320(4)
  04ceb74  lfs 2, 16(31)
  04ceb78  lfs 3, 32(31)
  04ceb7c  fsubs 4, 2, 1
  04ceb80  lfs 5, 20(31)
  04ceb84  fsubs 2, 2, 3
  04ceb88  lfs 6, 36(31)
  04ceb8c  lfs 7, 24(31)
  04ceb90  lfs 8, 40(31)
  04ceb94  fsubs 5, 5, 6
  04ceb98  lfs 9, 324(4)
  04ceb9c  lfs 3, 328(4)
  04ceba0  fsubs 7, 7, 8
  04ceba4  lis 3, 77
  04ceba8  stfs 4, 112(1)
  04cebac  lfs 6, 20(31)
  04cebb0  fmuls 8, 5, 4
  04cebb4  fsubs 6, 6, 9
  04cebb8  addi 3, 3, -5300
  04cebbc  li 4, 0
  04cebc0  fmuls 11, 7, 6
  04cebc4  stfs 6, 116(1)
  04cebc8  lfs 10, 24(31)
  04cebcc  fmsubs 6, 2, 6, 8
  04cebd0  fsubs 10, 10, 3
  04cebd4  fmuls 8, 2, 10
  04cebd8  fmsubs 11, 5, 10, 11
  04cebdc  stfs 10, 120(1)
  04cebe0  lfs 10, 28(31)
  04cebe4  stfs 10, 124(1)
  04cebe8  fmsubs 4, 7, 4, 8
  04cebec  lfs 8, 32(31)
  04cebf0  fsubs 1, 8, 1
  04cebf4  fmuls 8, 4, 4
  04cebf8  fmuls 12, 5, 1
  04cebfc  stfs 1, 128(1)
  04cec00  lfs 10, 36(31)
  04cec04  fsubs 9, 10, 9
  04cec08  fmadds 8, 11, 11, 8
  04cec0c  fmadds 8, 6, 6, 8
  04cec10  stfs 9, 132(1)
  04cec14  lfs 10, 40(31)
  04cec18  fsubs 3, 10, 3
  04cec1c  fmuls 10, 7, 9
  04cec20  fsqrts 8, 8
  04cec24  stfs 3, 136(1)
  04cec28  lfs 13, 44(31)
  04cec2c  stfs 11, 112(1)
  04cec30  stfs 13, 140(1)
  04cec34  stfs 4, 116(1)
  04cec38  stfs 6, 120(1)
  04cec3c  lfs 13, 0(3)
  04cec40  stw 4, 124(1)
  04cec44  lfs 31, 76(31)
  04cec48  li 3, 14
  04cec4c  fmuls 0, 2, 3
  04cec50  fmsubs 2, 2, 9, 12
  04cec54  fmsubs 3, 5, 3, 10
  04cec58  fmr 5, 13
  04cec5c  fmsubs 1, 7, 1, 0
  04cec60  stfs 3, 128(1)
  04cec64  fmuls 9, 1, 1
  04cec68  stfs 1, 132(1)
  04cec6c  stfs 2, 136(1)
  04cec70  stw 4, 140(1)
  04cec74  fmadds 9, 3, 3, 9
  04cec78  fmadds 9, 2, 2, 9
  04cec7c  fdivs 7, 31, 8
  04cec80  fsqrts 9, 9
  04cec84  fsub 10, 5, 8
  04cec88  fsub 12, 5, 8
  04cec8c  fsub 13, 5, 8
  04cec90  fsub 0, 8, 5
  04cec94  fsub 31, 8, 5
  04cec98  fsub 8, 8, 5
  04cec9c  fmuls 11, 11, 7
  04ceca0  fmuls 4, 4, 7
  04ceca4  fmuls 6, 6, 7
  04ceca8  fsel 7, 10, 5, 11
  04cecac  fsel 10, 12, 5, 4
  04cecb0  fsel 12, 13, 5, 6
  04cecb4  fsel 7, 0, 7, 11
  04cecb8  fsel 4, 31, 10, 4
  04cecbc  fsel 6, 8, 12, 6
  04cecc0  fsub 8, 5, 9
  04cecc4  fsub 10, 9, 5
  04cecc8  fsub 11, 9, 5
  04ceccc  stfs 7, 112(1)
  04cecd0  stfs 4, 116(1)
  04cecd4  stfs 6, 120(1)
  04cecd8  lfs 4, 76(31)
  04cecdc  fdivs 4, 4, 9
  04cece0  fsub 6, 5, 9
  04cece4  fsub 7, 5, 9
  04cece8  fsub 9, 9, 5
  04cecec  fmuls 3, 3, 4
  04cecf0  fmuls 1, 1, 4
  04cecf4  fmuls 2, 2, 4
  04cecf8  fsel 4, 6, 5, 3
  04cecfc  fsel 6, 7, 5, 1
  04ced00  fsel 5, 8, 5, 2
  04ced04  fsel 3, 10, 4, 3
  04ced08  fsel 1, 11, 6, 1
  04ced0c  fsel 2, 9, 5, 2
  04ced10  stfs 3, 128(1)
  04ced14  stfs 1, 132(1)
  04ced18  std 30, 360(1)
  04ced1c  std 29, 352(1)
  04ced20  stfs 2, 136(1)
  04ced24  bl 0x685c4
  04ced28  nop
  04ced2c  std 3, 328(1)
  04ced30  li 3, 0
  04ced34  lis 9, 0
  04ced38  li 4, 0
  04ced3c  li 5, 1
  04ced40  li 6, 1
  04ced44  li 7, 1
  04ced48  li 8, 0
  04ced4c  ori 9, 9, 65424
  04ced50  bl 0x502fd4
  04ced54  nop
  04ced58  std 3, 336(1)
  04ced5c  li 4, 0
  04ced60  li 3, 0
  04ced64  li 5, 0
  04ced68  li 6, 0
  04ced6c  li 7, 0
  04ced70  li 8, 0
  04ced74  bl 0x502f08
  04ced78  nop
  04ced7c  li 4, 2
  04ced80  std 3, 320(1)
  04ced84  li 5, 0
  04ced88  li 3, 0
  04ced8c  li 6, 1
  04ced90  li 7, 128
  04ced94  bl 0x502ea8
  04ced98  nop
  04ced9c  lis 4, -32732
  04ceda0  std 3, 344(1)
  04ceda4  ori 7, 1, 0
  04ceda8  ori 5, 4, 12920
  04cedac  lis 6, 102
  04cedb0  lis 8, 102
  04cedb4  li 9, 2
  04cedb8  stw 5, 284(1)
  04cedbc  addic 4, 7, 288
  04cedc0  stw 5, 280(1)
  04cedc4  addic 3, 7, 292
  04cedc8  stw 5, 276(1)
  04cedcc  addic 6, 6, -29224
  04cedd0  stw 5, 272(1)
  04cedd4  mtctr 9
  04cedd8  addic 5, 8, -29220
  04ceddc  lfs 1, 0(6)
  04cede0  lfs 2, 0(5)
  04cede4  stfs 1, 288(7)
  04cede8  lfs 1, 8(6)
  04cedec  stfs 2, 292(7)
  04cedf0  lfs 2, 8(5)
  04cedf4  addic 6, 6, 16
  04cedf8  stfs 1, 8(4)
  04cedfc  addic 5, 5, 16
  04cee00  stfs 2, 8(3)
  04cee04  addic 4, 4, 16
  04cee08  addic 3, 3, 16
  04cee0c  addic 7, 7, 16
  04cee10  bdnz 0x4ceddc
  04cee14  addic 30, 31, 16
  04cee18  addic 29, 1, 112
  04cee1c  addic 3, 1, 144
  04cee20  ori 5, 29, 0
  04cee24  ori 4, 30, 0
  04cee28  bl 0x502a64
  04cee2c  nop
  04cee30  lfs 1, 144(1)
  04cee34  addic 3, 1, 160
  04cee38  lfs 2, 148(1)
  04cee3c  ori 4, 30, 0
  04cee40  stfs 1, 208(1)
  04cee44  ori 5, 29, 0
  04cee48  lfs 1, 152(1)
  04cee4c  stfs 2, 212(1)
  04cee50  lfs 2, 156(1)
  04cee54  stfs 1, 216(1)
  04cee58  stfs 2, 220(1)
  04cee5c  bl 0x5023f0
  04cee60  nop
  04cee64  lfs 1, 160(1)
  04cee68  lfs 2, 164(1)
  04cee6c  addic 31, 31, 32
  04cee70  stfs 1, 224(1)
  04cee74  addic 30, 1, 128
  04cee78  lfs 1, 168(1)
  04cee7c  addic 3, 1, 176
  04cee80  stfs 2, 228(1)
  04cee84  ori 4, 31, 0
  04cee88  lfs 2, 172(1)
  04cee8c  ori 5, 30, 0
  04cee90  stfs 1, 232(1)
  04cee94  stfs 2, 236(1)
  04cee98  bl 0x502a64
  04cee9c  nop
  04ceea0  lfs 1, 176(1)
  04ceea4  addic 3, 1, 192
  04ceea8  lfs 2, 180(1)
  04ceeac  ori 4, 31, 0
  04ceeb0  stfs 1, 240(1)
  04ceeb4  ori 5, 30, 0
  04ceeb8  lfs 1, 184(1)
  04ceebc  stfs 2, 244(1)
  04ceec0  lfs 2, 188(1)
  04ceec4  stfs 1, 248(1)
  04ceec8  stfs 2, 252(1)
  04ceecc  bl 0x5023f0
  04ceed0  nop
  04ceed4  lfs 1, 192(1)
  04ceed8  lis 5, 161
  04ceedc  lfs 2, 196(1)
  04ceee0  stfs 1, 256(1)
  04ceee4  li 4, 0
  04ceee8  addic 6, 5, 24396
  04ceeec  lfs 1, 200(1)
  04ceef0  stfs 2, 260(1)
  04ceef4  addic 3, 1, 208
  04ceef8  lfs 2, 204(1)
  04ceefc  li 5, 0
  04cef00  stfs 1, 264(1)
  04cef04  li 7, 9
  04cef08  stfs 2, 268(1)
  04cef0c  lwz 6, 28(6)
  04cef10  bl 0x72280
  04cef14  nop
  04cef18  ld 0, 400(1)
  04cef1c  mtlr 0
  04cef20  lfd 31, 376(1)
  04cef24  ld 29, 352(1)
  04cef28  ld 30, 360(1)
  04cef2c  ld 31, 368(1)
  04cef30  addi 1, 1, 384
  04cef34  blr

M994_004cef38:   # 0x4cef38, 0x14 bytes
  04cef38  lis 3, 143
  04cef3c  lis 4, 1
  04cef40  addic 3, 3, 21428
  04cef44  stw 4, 72(3)
  04cef48  blr

M994_004cef50:   # 0x4cef50, 0x2c bytes
  04cef50  stdu 1, -112(1)
  04cef54  mflr 0
  04cef58  std 0, 128(1)
  04cef5c  lis 3, 144
  04cef60  addic 3, 3, -28608
  04cef64  bl 0x17e558
  04cef68  nop
  04cef6c  ld 0, 128(1)
  04cef70  mtlr 0
  04cef74  addi 1, 1, 112
  04cef78  blr

UpdateMoby_994:   # 0x4cef80, 0x94 bytes
  04cef80  stdu 1, -128(1)
  04cef84  mflr 0
  04cef88  std 0, 144(1)
  04cef8c  std 31, 120(1)
  04cef90  ori 31, 3, 0
  04cef94  lbz 3, 32(3)
  04cef98  cmpwi 3, 0
  04cef9c  cmpwi 1, 3, 1
  04cefa0  cmpwi 6, 3, -1
  04cefa4  bt 1, 0x4cefb0
  04cefa8  bf 25, 0x4cf000
  04cefac  b 0x4cefb8
  04cefb0  bf 5, 0x4cefec
  04cefb4  b 0x4cf000
  04cefb8  lis 3, 77
  04cefbc  lis 4, 144
  04cefc0  addi 6, 3, -4228
  04cefc4  addic 3, 4, -28608
  04cefc8  li 5, 32
  04cefcc  lfs 1, 0(6)
  04cefd0  bl 0x17e31c
  04cefd4  nop
  04cefd8  li 3, 1
  04cefdc  li 4, 255
  04cefe0  stb 3, 32(31)
  04cefe4  stb 4, 48(31)
  04cefe8  b 0x4cf000
  04cefec  lis 3, 113
  04ceff0  ori 4, 31, 0
  04ceff4  addic 3, 3, -1696
  04ceff8  bl 0x6d720
  04ceffc  nop
  04cf000  ld 0, 144(1)
  04cf004  mtlr 0
  04cf008  ld 31, 120(1)
  04cf00c  addi 1, 1, 128
  04cf010  blr

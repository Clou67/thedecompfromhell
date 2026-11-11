# sdk/libm/xflog.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FLog:   # 0x5dd718, 0x1fc bytes
  05dd718  stdu 1, -160(1)
  05dd71c  mflr 0
  05dd720  std 31, 152(1)
  05dd724  addi 3, 1, 112
  05dd728  stfs 1, 208(1)
  05dd72c  mr 31, 4
  05dd730  addi 4, 1, 208
  05dd734  std 0, 176(1)
  05dd738  bl 0x5e6774
  05dd73c  nop
  05dd740  extsh 3, 3
  05dd744  cmpwi 7, 3, 1
  05dd748  bt 30, 0x5dd83c
  05dd74c  cmpwi 7, 3, 2
  05dd750  bt 30, 0x5dd894
  05dd754  cmpwi 7, 3, 0
  05dd758  bt 30, 0x5dd810
  05dd75c  lfs 11, 208(1)
  05dd760  stfs 11, 128(1)
  05dd764  lwz 0, 128(1)
  05dd768  rlwinm 0, 0, 16, 16, 16
  05dd76c  cmpwi 7, 0, 0
  05dd770  bf 30, 0x5dd86c
  05dd774  lfs 0, -23712(2)
  05dd778  fcmpu 7, 11, 0
  05dd77c  bf 28, 0x5dd8ac
  05dd780  fadds 11, 11, 11
  05dd784  lhz 9, 112(1)
  05dd788  addi 0, 9, -1
  05dd78c  mr 9, 0
  05dd790  sth 0, 112(1)
  05dd794  stfs 11, 208(1)
  05dd798  lfs 0, -23708(2)
  05dd79c  extsh 0, 9
  05dd7a0  fsubs 9, 11, 0
  05dd7a4  lfs 13, -23704(2)
  05dd7a8  fadds 12, 11, 0
  05dd7ac  std 0, 136(1)
  05dd7b0  lfd 0, 136(1)
  05dd7b4  cmpwi 7, 31, 0
  05dd7b8  fcfid 0, 0
  05dd7bc  lfs 11, -23700(2)
  05dd7c0  lfs 10, -23696(2)
  05dd7c4  fdivs 12, 9, 12
  05dd7c8  frsp 1, 0
  05dd7cc  fmuls 0, 12, 12
  05dd7d0  fmadds 13, 0, 13, 11
  05dd7d4  fmadds 13, 0, 13, 10
  05dd7d8  fmuls 0, 0, 13
  05dd7dc  fsubs 0, 9, 0
  05dd7e0  fmuls 8, 12, 0
  05dd7e4  bf 30, 0x5dd8b4
  05dd7e8  lfs 0, -23692(2)
  05dd7ec  fmadds 0, 1, 0, 8
  05dd7f0  ld 0, 176(1)
  05dd7f4  lfs 13, -23688(2)
  05dd7f8  ld 31, 152(1)
  05dd7fc  mtlr 0
  05dd800  addi 1, 1, 160
  05dd804  fsubs 0, 9, 0
  05dd808  fmadds 1, 1, 13, 0
  05dd80c  blr
  05dd810  lis 3, 1024
  05dd814  bl 0x5dd4f8
  05dd818  nop
  05dd81c  lwz 9, -23720(2)
  05dd820  lfs 0, 0(9)
  05dd824  fneg 1, 0
  05dd828  ld 0, 176(1)
  05dd82c  ld 31, 152(1)
  05dd830  addi 1, 1, 160
  05dd834  mtlr 0
  05dd838  blr
  05dd83c  lfs 1, 208(1)
  05dd840  stfs 1, 128(1)
  05dd844  fmr 11, 1
  05dd848  lwz 0, 128(1)
  05dd84c  rlwinm 0, 0, 16, 16, 16
  05dd850  cmpwi 7, 0, 0
  05dd854  bt 30, 0x5dd828
  05dd858  stfs 11, 128(1)
  05dd85c  lwz 0, 128(1)
  05dd860  rlwinm 0, 0, 16, 16, 16
  05dd864  cmpwi 7, 0, 0
  05dd868  bt 30, 0x5dd774
  05dd86c  lis 3, 8192
  05dd870  bl 0x5dd4f8
  05dd874  nop
  05dd878  lwz 9, -23716(2)
  05dd87c  ld 0, 176(1)
  05dd880  ld 31, 152(1)
  05dd884  addi 1, 1, 160
  05dd888  mtlr 0
  05dd88c  lfs 1, 0(9)
  05dd890  blr
  05dd894  ld 0, 176(1)
  05dd898  lfs 1, 208(1)
  05dd89c  ld 31, 152(1)
  05dd8a0  mtlr 0
  05dd8a4  addi 1, 1, 160
  05dd8a8  blr
  05dd8ac  lhz 9, 112(1)
  05dd8b0  b 0x5dd798
  05dd8b4  bf 29, 0x5dd8f4
  05dd8b8  lfs 12, -23672(2)
  05dd8bc  fmuls 12, 1, 12
  05dd8c0  lfs 11, -23676(2)
  05dd8c4  lfs 0, -23680(2)
  05dd8c8  lfs 13, -23684(2)
  05dd8cc  ld 0, 176(1)
  05dd8d0  lfs 10, -23668(2)
  05dd8d4  ld 31, 152(1)
  05dd8d8  mtlr 0
  05dd8dc  addi 1, 1, 160
  05dd8e0  fmadds 11, 8, 11, 12
  05dd8e4  fmsubs 0, 9, 0, 11
  05dd8e8  fmadds 13, 9, 13, 0
  05dd8ec  fmadds 1, 1, 10, 13
  05dd8f0  blr
  05dd8f4  lfs 0, -23656(2)
  05dd8f8  fmuls 0, 8, 0
  05dd8fc  lfs 12, -23660(2)
  05dd900  lfs 13, -23664(2)
  05dd904  fmadds 12, 9, 12, 0
  05dd908  fmadds 13, 9, 13, 12
  05dd90c  fadds 1, 1, 13
  05dd910  b 0x5dd828

# sdk/sUnk2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellHttpInit:   # 0x64eda4, 0x20 bytes
  064eda4  li 12, 0
  064eda8  oris 12, 12, 112
  064edac  lwz 12, 6488(12)
  064edb0  std 2, 40(1)
  064edb4  lwz 0, 0(12)
  064edb8  lwz 2, 4(12)
  064edbc  mtctr 0
  064edc0  bctr

cellHttpsInit:   # 0x64edc4, 0x20 bytes
  064edc4  li 12, 0
  064edc8  oris 12, 12, 112
  064edcc  lwz 12, 6492(12)
  064edd0  std 2, 40(1)
  064edd4  lwz 0, 0(12)
  064edd8  lwz 2, 4(12)
  064eddc  mtctr 0
  064ede0  bctr

cellSslCertificateLoader:   # 0x64ede4, 0x20 bytes
  064ede4  li 12, 0
  064ede8  oris 12, 12, 112
  064edec  lwz 12, 6648(12)
  064edf0  std 2, 40(1)
  064edf4  lwz 0, 0(12)
  064edf8  lwz 2, 4(12)
  064edfc  mtctr 0
  064ee00  bctr

cellSslInit:   # 0x64ee04, 0x20 bytes
  064ee04  li 12, 0
  064ee08  oris 12, 12, 112
  064ee0c  lwz 12, 6652(12)
  064ee10  std 2, 40(1)
  064ee14  lwz 0, 0(12)
  064ee18  lwz 2, 4(12)
  064ee1c  mtctr 0
  064ee20  bctr

cellVideoOutGetScreenSize:   # 0x64ee24, 0x20 bytes
  064ee24  li 12, 0
  064ee28  oris 12, 12, 112
  064ee2c  lwz 12, 6736(12)
  064ee30  std 2, 40(1)
  064ee34  lwz 0, 0(12)
  064ee38  lwz 2, 4(12)
  064ee3c  mtctr 0
  064ee40  bctr

cellSslEnd:   # 0x64ee44, 0x20 bytes
  064ee44  li 12, 0
  064ee48  oris 12, 12, 112
  064ee4c  lwz 12, 6656(12)
  064ee50  std 2, 40(1)
  064ee54  lwz 0, 0(12)
  064ee58  lwz 2, 4(12)
  064ee5c  mtctr 0
  064ee60  bctr

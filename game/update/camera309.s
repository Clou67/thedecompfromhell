# game/update/camera309.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x46828, 0x14 bytes
  0046828  lis 3, 114
  004682c  lis 4, 1
  0046830  addic 3, 3, -6800
  0046834  stw 4, 72(3)
  0046838  blr

ActivateCamera_309:   # 0x46840, 0x8 bytes
  0046840  li 3, 0
  0046844  blr

STUB_00046848:   # 0x46848, 0x4 bytes
  0046848  blr

STUB_0004684c:   # 0x4684c, 0x4 bytes
  004684c  blr

STUB_00046850:   # 0x46850, 0x4 bytes
  0046850  blr

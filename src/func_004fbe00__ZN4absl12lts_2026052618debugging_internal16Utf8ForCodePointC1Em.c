// Function: _ZN4absl12lts_2026052618debugging_internal16Utf8ForCodePointC1Em
// Address: 004fbe00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal16Utf8ForCodePointC1Em(byte *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = bVar1;
    return;
  }
  if (param_2 < 0x800) {
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = (byte)(uVar2 >> 6) | 0xc0;
    param_1[1] = bVar1 & 0x3f | 0x80;
    return;
  }
  if ((param_2 & 0xfffffffffffff800) != 0xd800) {
    if (param_2 < 0x10000) {
      param_1[4] = 3;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = (byte)(uVar2 >> 0xc) | 0xe0;
      param_1[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return;
    }
    if (param_2 < 0x110000) {
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = (byte)(uVar2 >> 0x12) | 0xf0;
      param_1[1] = (byte)(uVar2 >> 0xc) & 0x3f | 0x80;
      param_1[2] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      return;
    }
  }
  return;
}



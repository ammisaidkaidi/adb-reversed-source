// Function: _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
// Address: 004bf5f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
          (uint param_1,byte *param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)param_1;
  if (param_1 < 0x80) {
    *param_2 = bVar2;
    param_3[0] = '\0';
    param_3[1] = '\0';
    return 1;
  }
  if (param_1 < 0x800) {
    *param_2 = (byte)(param_1 >> 6) | 0xc0;
  }
  else {
    if (param_1 < 0xd800 || (param_1 & 0xffffe000) == 0xe000) {
      *param_2 = (byte)(param_1 >> 0xc) | 0xe0;
      param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[2] = bVar2 & 0x3f | 0x80;
      param_3[0] = '\0';
      param_3[1] = '\0';
      return 3;
    }
    if (param_1 < 0xdc00) {
      uVar1 = (param_1 >> 6 & 0xf) + 1;
      *param_2 = (byte)uVar1 >> 2 | 0xf0;
      param_2[1] = (byte)(param_1 >> 2) & 0xf | (byte)((uVar1 & 3) << 4) | 0x80;
      *param_3 = '\x01';
      param_3[1] = bVar2 & 3;
      return 2;
    }
    if (0xdfff < param_1) {
      if (0xfffff < param_1 - 0x10000) {
        param_3[0] = '\0';
        param_3[1] = '\0';
        return 0xffffffffffffffff;
      }
      *param_2 = (byte)(param_1 >> 0x12) | 0xf0;
      param_2[1] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      param_2[2] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[3] = bVar2 & 0x3f | 0x80;
      param_3[0] = '\0';
      param_3[1] = '\0';
      return 4;
    }
    if (*param_3 != '\x01') {
      return 0xffffffffffffffff;
    }
    *param_2 = (byte)(param_1 >> 6) & 0xf | (param_3[1] & 3U) << 4 | 0x80;
  }
  param_2[1] = bVar2 & 0x3f | 0x80;
  param_3[0] = '\0';
  param_3[1] = '\0';
  return 2;
}



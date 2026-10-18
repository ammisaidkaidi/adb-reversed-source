// Function: _ZN4absl12lts_2026052616strings_internal14EncodeUTF8CharEPcDi
// Address: 004bf570
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616strings_internal14EncodeUTF8CharEPcDi(undefined1 *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = (uint)param_2;
  if (uVar5 < 0x80) {
    uVar3 = 1;
  }
  else {
    bVar2 = (byte)param_2 & 0x3f | 0x80;
    if (uVar5 < 0x800) {
      param_1[1] = bVar2;
      param_2 = (ulong)(byte)((byte)(uVar5 >> 6) | 0xc0);
      uVar3 = 2;
    }
    else {
      bVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      bVar1 = (byte)(param_2 >> 0xc);
      if (uVar5 < 0x10000) {
        param_1[2] = bVar2;
        param_1[1] = bVar4;
        uVar3 = 3;
        param_2 = (ulong)(bVar1 | 0xe0);
      }
      else {
        param_1[3] = bVar2;
        param_1[2] = bVar4;
        param_1[1] = bVar1 & 0x3f | 0x80;
        param_2 = (ulong)(byte)((byte)(uVar5 >> 0x12) | 0xf0);
        uVar3 = 4;
      }
    }
  }
  *param_1 = (char)param_2;
  return uVar3;
}



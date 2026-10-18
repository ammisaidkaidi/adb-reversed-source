// Function: _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilder9NewStringEv
// Address: 004fc510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilder9NewStringEv(long param_1)

{
  byte *pbVar1;
  
  func_0x0032eb30(param_1,&UNK_001692c7,1);
  pbVar1 = (byte *)_Znwm(0x18);
  func_0x004fe4f0(pbVar1,param_1 + 8);
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar1);
  if ((*pbVar1 & 1) == 0) {
    pbVar1 = pbVar1 + 1;
  }
  else {
    pbVar1 = *(byte **)(pbVar1 + 0x10);
  }
  return pbVar1;
}



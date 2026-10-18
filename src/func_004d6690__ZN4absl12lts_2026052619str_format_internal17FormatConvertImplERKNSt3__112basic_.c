// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
               (byte *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulong uVar2;
  bool bVar3;
  
  bVar3 = (*param_1 & 1) != 0;
  pbVar1 = param_1 + 4;
  if (bVar3) {
    pbVar1 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = (ulong)(*param_1 >> 1);
  if (bVar3) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  func_0x004d67a0(pbVar1,uVar2,param_2,param_3,param_4);
  return;
}



// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneLibCC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// Address: 004cbe60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneLibCC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
               (undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  *param_1 = 0x99ff00;
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 9) goto code_r0x004cbe94;
  }
  else if (*(long *)(param_2 + 8) == 9) {
code_r0x004cbe94:
    if ((bVar1 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    bVar2 = param_2[8] == 0x65 && *(long *)param_2 == 0x6d69746c61636f6c;
    goto code_r0x004cbebc;
  }
  bVar2 = false;
code_r0x004cbebc:
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



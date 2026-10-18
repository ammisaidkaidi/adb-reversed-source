// Function: _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalC1EPKciS4_
// Address: 004bdc46
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalC1EPKciS4_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = param_4;
  _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalC1EPKci();
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            (param_1,&UNK_00165d45,0xe);
  uVar2 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIPKcEERS2_RKT_(param_1,&uStack_28);
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            (uVar2,&UNK_0015ae05,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



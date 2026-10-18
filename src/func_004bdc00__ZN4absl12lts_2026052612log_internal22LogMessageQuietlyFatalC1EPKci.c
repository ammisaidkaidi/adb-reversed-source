// Function: _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalC1EPKci
// Address: 004bdc00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalC1EPKci
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0099bcf0(param_2);
  _ZN4absl12lts_2026052612log_internal10LogMessageC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiNS0_11LogSeverityE
            (param_1,param_2,uVar1,param_3,3);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x81) = 1;
  return;
}



// Function: _ZN4absl12lts_2026052612log_internal13WriteToStderrENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEENS0_11LogSeverityE
// Address: 004cef50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN4absl12lts_2026052612log_internal13WriteToStderrENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEENS0_11LogSeverityE
               (undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  fwrite(param_1,param_2,1,_stderr);
  return;
}



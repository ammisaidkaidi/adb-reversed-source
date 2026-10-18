// Function: _ZN4absl12lts_2026052619str_format_internal13BufferRawSink5WriteENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
// Address: 004ee510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal13BufferRawSink5WriteENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
               (long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_3 <= (ulong)param_1[1]) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    func_0x0099bda0(*param_1,param_2,uVar1);
    *param_1 = *param_1 + uVar1;
    param_1[1] = param_1[1] - uVar1;
  }
  param_1[2] = param_1[2] + param_3;
  return;
}



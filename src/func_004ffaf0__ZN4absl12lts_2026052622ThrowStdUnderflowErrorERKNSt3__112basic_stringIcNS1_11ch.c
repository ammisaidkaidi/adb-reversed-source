// Function: _ZN4absl12lts_2026052622ThrowStdUnderflowErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// Address: 004ffaf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052622ThrowStdUnderflowErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
               (byte *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xa7,&UNK_0016c5ec,param_1);
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,uVar2,in_R9,&stack0xfffffffffffffff8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



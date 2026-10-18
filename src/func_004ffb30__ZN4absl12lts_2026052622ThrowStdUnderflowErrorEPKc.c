// Function: _ZN4absl12lts_2026052622ThrowStdUnderflowErrorEPKc
// Address: 004ffb30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052622ThrowStdUnderflowErrorEPKc(undefined8 param_1)

{
  code *pcVar1;
  
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



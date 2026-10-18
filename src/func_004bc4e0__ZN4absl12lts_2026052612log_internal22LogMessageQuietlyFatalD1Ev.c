// Function: _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalD1Ev
// Address: 004bc4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal22LogMessageQuietlyFatalD1Ev(void)

{
  code *pcVar1;
  
  _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



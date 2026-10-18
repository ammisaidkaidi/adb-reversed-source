// Function: _ZN4absl12lts_2026052620InitializeSymbolizerEPKc
// Address: 004eecb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052620InitializeSymbolizerEPKc(char *param_1)

{
  _ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv();
  if (lRam0000000000a02fa0 != 0) {
    func_0x0099c1f0();
    lRam0000000000a02fa0 = 0;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    lRam0000000000a02fa0 = func_0x0099c590(param_1);
  }
  return;
}



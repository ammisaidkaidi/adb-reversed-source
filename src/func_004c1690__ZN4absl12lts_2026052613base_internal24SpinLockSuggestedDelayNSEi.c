// Function: _ZN4absl12lts_2026052613base_internal24SpinLockSuggestedDelayNSEi
// Address: 004c1690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN4absl12lts_2026052613base_internal24SpinLockSuggestedDelayNSEi(uint param_1)

{
  uint uVar1;
  
  lRam0000000000a009d0 = lRam0000000000a009d0 * 0x5deece66d + 0xb;
  uVar1 = 0x20;
  if (param_1 < 0x20) {
    uVar1 = param_1;
  }
  uVar1 = 0x20000 << ((byte)(uVar1 >> 3) & 0x1f);
  return (uint)lRam0000000000a009d0 & uVar1 - 1 | uVar1;
}



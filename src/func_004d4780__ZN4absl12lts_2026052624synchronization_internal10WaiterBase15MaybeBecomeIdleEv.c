// Function: _ZN4absl12lts_2026052624synchronization_internal10WaiterBase15MaybeBecomeIdleEv
// Address: 004d4780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052624synchronization_internal10WaiterBase15MaybeBecomeIdleEv(void)

{
  long lVar1;
  
  lVar1 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if ((*(char *)(lVar1 + 400) == '\0') && (0x3c < *(int *)(lVar1 + 0x188) - *(int *)(lVar1 + 0x18c))
     ) {
    *(undefined1 *)(lVar1 + 400) = 1;
  }
  return;
}



// Function: _ZN4absl12lts_2026052616raw_log_internal25AsyncSignalSafeWriteErrorEPKcm
// Address: 004bfcb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616raw_log_internal25AsyncSignalSafeWriteErrorEPKcm
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar2;
    func_0x0099c620(1,2,param_1,param_2);
    *puVar2 = uVar1;
  }
  return;
}



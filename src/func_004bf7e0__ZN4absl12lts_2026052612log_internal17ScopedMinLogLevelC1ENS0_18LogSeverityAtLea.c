// Function: _ZN4absl12lts_2026052612log_internal17ScopedMinLogLevelC1ENS0_18LogSeverityAtLeastE
// Address: 004bf7e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal17ScopedMinLogLevelC1ENS0_18LogSeverityAtLeastE
               (undefined4 *param_1,undefined4 param_2)

{
  *param_1 = uRam0000000000a009a8;
  uRam0000000000a009a8 = param_2;
  if ((pcRam00000000009fb7a8 !=
       _ZN4absl12lts_2026052613base_internal10AtomicHookIPFvvEE13DummyFunctionEv) &&
     (pcRam00000000009fb7a8 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004bf808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000009fb7a8)();
    return;
  }
  return;
}



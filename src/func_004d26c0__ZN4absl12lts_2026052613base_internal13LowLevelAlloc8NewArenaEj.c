// Function: _ZN4absl12lts_2026052613base_internal13LowLevelAlloc8NewArenaEj
// Address: 004d26c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN4absl12lts_2026052613base_internal13LowLevelAlloc8NewArenaEj(uint param_1)

{
  undefined8 uVar1;
  
  if (iRam0000000000a02ce0 == 0xdd) {
    if ((param_1 & 2) == 0) goto code_r0x004d26db;
code_r0x004d2719:
    uVar1 = 0xa02e30;
  }
  else {
    _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
              (0xa02ce0,0,&UNK_004d2c20);
    if ((param_1 & 2) != 0) goto code_r0x004d2719;
code_r0x004d26db:
    if ((param_1 & 1) != 0) {
      uVar1 = 0xa02b90;
      goto code_r0x004d272d;
    }
    uVar1 = 0xa02ce8;
  }
  if (iRam0000000000a02ce0 != 0xdd) {
    _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
              (0xa02ce0,0,&UNK_004d2c20);
  }
code_r0x004d272d:
  uVar1 = _ZN4absl12lts_2026052613base_internal13LowLevelAlloc14AllocWithArenaEmPNS2_5ArenaE
                    (0x148,uVar1);
  _ZN4absl12lts_2026052613base_internal13LowLevelAlloc5ArenaC2Ej(uVar1,param_1);
  return uVar1;
}



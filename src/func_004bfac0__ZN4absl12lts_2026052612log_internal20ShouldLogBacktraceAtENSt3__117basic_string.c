// Function: _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
// Address: 004bfac0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
          (undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = uRam0000000000a009b0;
  if (uRam0000000000a009b0 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = _ZN4absl12lts_2026052613hash_internal15MixingHashState18combine_contiguousES2_PKhm
                      (strcmp,param_1,param_2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3 ^ param_3;
    auVar1 = auVar1 * ZEXT816(0x79d5f9e0de1e8cf5);
    uVar4 = CONCAT71(auVar1._1_7_,uVar2 == (auVar1._8_8_ ^ auVar1._0_8_));
  }
  return uVar4;
}



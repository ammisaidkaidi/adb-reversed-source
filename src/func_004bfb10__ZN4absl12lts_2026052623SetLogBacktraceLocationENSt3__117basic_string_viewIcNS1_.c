// Function: _ZN4absl12lts_2026052623SetLogBacktraceLocationENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEi
// Address: 004bfb10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052623SetLogBacktraceLocationENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEi
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  uVar2 = _ZN4absl12lts_2026052613hash_internal15MixingHashState18combine_contiguousES2_PKhm
                    (strcmp,param_1,param_2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 ^ param_3;
  uRam0000000000a009b0 =
       SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
       SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),0);
  return;
}



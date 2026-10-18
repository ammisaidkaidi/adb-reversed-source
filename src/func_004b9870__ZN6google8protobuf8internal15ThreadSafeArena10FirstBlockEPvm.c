// Function: _ZN6google8protobuf8internal15ThreadSafeArena10FirstBlockEPvm
// Address: 004b9870
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal15ThreadSafeArena10FirstBlockEPvm
          (long param_1,undefined8 *param_2,ulong param_3)

{
  if (param_3 < 0x11 || param_2 == (undefined8 *)0x0) {
    return (undefined8 *)&UNK_001ff288;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  *param_2 = 0;
  param_2[1] = param_3;
  return param_2;
}



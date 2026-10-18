// Function: _ZN6google8protobuf8internal11SerialArena3NewENS1_8SizedPtrERNS1_15ThreadSafeArenaE
// Address: 004b9000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal11SerialArena3NewENS1_8SizedPtrERNS1_15ThreadSafeArenaE
          (undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_1 + 0x11;
  param_1[4] = param_1;
  param_1[5] = param_1 + 0x11;
  param_1[6] = (param_2 & 0xfffffffffffffff8) + (long)param_1;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1 + 2;
}



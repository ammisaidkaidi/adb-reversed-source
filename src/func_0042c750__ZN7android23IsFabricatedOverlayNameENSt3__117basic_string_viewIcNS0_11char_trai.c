// Function: _ZN7android23IsFabricatedOverlayNameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
// Address: 0042c750
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android23IsFabricatedOverlayNameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
          (long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (5 < param_2) {
    uVar1 = *(uint *)(param_1 + -5 + param_2) ^ 0x7272662e;
    if (*(char *)(param_1 + -1 + param_2) == 'o' && uVar1 == 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    if (0xb < param_2) {
      uVar2 = *(ulong *)(param_1 + -0xb + param_2) ^ 0x6469406f7272662e;
      return CONCAT71((int7)(uVar2 >> 8),
                      *(long *)(param_1 + -8 + param_2) == 0x70616d6469406f72 && uVar2 == 0);
    }
  }
  return 0;
}



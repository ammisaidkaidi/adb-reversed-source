// Function: _ZNK7android15DynamicRefTable14requiresLookupEPKNS_9Res_valueE
// Address: 0042f3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android15DynamicRefTable14requiresLookupEPKNS_9Res_valueE(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(byte *)(param_2 + 3) - 1;
  uVar2 = (ulong)uVar1;
  if ((1 < (byte)uVar1) ||
     ((uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1), *(char *)(param_1 + 0x109) == '\0' &&
      (0xffffff < *(uint *)(param_2 + 4))))) {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)(*(byte *)(param_2 + 3) - 7) < 2);
  }
  return uVar2;
}



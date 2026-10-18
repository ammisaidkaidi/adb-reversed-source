// Function: _ZNK7android15ResTable_config24isBetterThanBeforeLocaleERKS0_S2_
// Address: 004315d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
_ZNK7android15ResTable_config24isBetterThanBeforeLocaleERKS0_S2_
          (long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar1 == 0 && uVar2 == 0) {
    return 0;
  }
  uVar3 = (undefined3)(uVar1 >> 8);
  if (((short)uVar1 != (short)uVar2) && (*(short *)(param_3 + 4) != 0)) {
    return CONCAT31(uVar3,(short)uVar1 != 0);
  }
  return CONCAT31(uVar3,(0xffff < uVar1 && *(short *)(param_3 + 6) != 0) && 0xffff < (uVar2 ^ uVar1)
                 );
}



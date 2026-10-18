// Function: LZ4_attach_dictionary
// Address: 00497df0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_attach_dictionary(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4010) == 0) {
      *(undefined4 *)(param_1 + 0x4010) = 0x10000;
    }
    lVar1 = 0;
    if (*(int *)(param_2 + 0x4018) != 0) {
      lVar1 = param_2;
    }
  }
  *(long *)(param_1 + 0x4008) = lVar1;
  return;
}



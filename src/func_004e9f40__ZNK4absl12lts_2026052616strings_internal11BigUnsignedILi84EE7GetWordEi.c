// Function: _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi84EE7GetWordEi
// Address: 004e9f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZNK4absl12lts_2026052616strings_internal11BigUnsignedILi84EE7GetWordEi
              (int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *param_1)) {
    iVar1 = param_1[(ulong)param_2 + 1];
  }
  return iVar1;
}



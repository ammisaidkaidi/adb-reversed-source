// Function: _ZN4absl12lts_2026052624synchronization_internal13KernelTimeoutC1ENS0_4TimeE
// Address: 004d41a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052624synchronization_internal13KernelTimeoutC1ENS0_4TimeE
               (long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = -1;
  if (param_2 != 0x7fffffffffffffff || param_3 != -1) {
    lVar1 = _ZN4absl12lts_2026052611ToUnixNanosENS0_4TimeE(param_2,param_3);
    lVar3 = 0;
    if (0 < lVar1) {
      lVar3 = lVar1;
    }
    lVar2 = -1;
    if (lVar1 != 0x7fffffffffffffff) {
      lVar2 = lVar3 * 2;
    }
  }
  *param_1 = lVar2;
  return;
}



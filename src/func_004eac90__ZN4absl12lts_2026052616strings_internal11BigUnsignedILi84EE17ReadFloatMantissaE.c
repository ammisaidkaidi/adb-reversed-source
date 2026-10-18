// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE17ReadFloatMantissaERKNS1_11ParsedFloatEi
// Address: 004eac90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE17ReadFloatMantissaERKNS1_11ParsedFloatEi
              (int *param_1,ulong *param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  if (0 < (long)*param_1) {
    func_0x0099bdb0(param_1 + 1,0,(long)*param_1 << 2);
  }
  *param_1 = 0;
  if (param_2[3] == 0) {
    uVar2 = *param_2;
    param_1[1] = (int)uVar2;
    uVar1 = *param_2;
    param_1[2] = (int)(uVar1 >> 0x20);
    iVar3 = 2;
    if ((uVar1 >> 0x20 != 0) || (iVar3 = 1, (int)uVar2 != 0)) {
      *param_1 = iVar3;
    }
    iVar3 = (int)param_2[1];
  }
  else {
    iVar3 = _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10ReadDigitsEPKcS5_i
                      (param_1,param_2[3],param_2[4],param_3);
    iVar3 = iVar3 + *(int *)((long)param_2 + 0xc);
  }
  return iVar3;
}



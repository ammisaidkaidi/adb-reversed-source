// Function: _ZN7android13findAncestorsEPjPljPKcPKjm
// Address: 00440b10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN7android13findAncestorsEPjPljPKcPKjm
               (long param_1,long *param_2,uint param_3,undefined8 param_4,long param_5,long param_6
               )

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    if (param_1 != 0) {
      *(uint *)(param_1 + lVar3 * 4) = param_3;
    }
    lVar3 = lVar3 + 1;
    if (param_6 != 0) {
      lVar2 = 0;
      do {
        if (*(uint *)(param_5 + lVar2 * 4) == param_3) goto code_r0x00440b88;
        lVar2 = lVar2 + 1;
      } while (param_6 != lVar2);
    }
    lVar2 = -1;
    if ((short)param_3 == 0) break;
    uVar1 = _ZN7android25findParentLocalePackedKeyEPKcj(param_4,param_3);
    param_3 = param_3 & 0xffff0000;
    if (uVar1 != 0) {
      param_3 = uVar1;
    }
  } while (param_3 != 0);
code_r0x00440b88:
  *param_2 = lVar2;
  return lVar3;
}



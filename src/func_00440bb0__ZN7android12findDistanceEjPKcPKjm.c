// Function: _ZN7android12findDistanceEjPKcPKjm
// Address: 00440bb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN7android12findDistanceEjPKcPKjm(uint param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  do {
    lVar4 = lVar1;
    if (param_4 != 0) {
      lVar3 = 0;
      do {
        if (*(uint *)(param_3 + lVar3 * 4) == param_1) goto code_r0x00440c25;
        lVar3 = lVar3 + 1;
      } while (param_4 != lVar3);
    }
    lVar3 = -1;
    if ((short)param_1 == 0) break;
    uVar2 = _ZN7android25findParentLocalePackedKeyEPKcj(param_2,param_1);
    param_1 = param_1 & 0xffff0000;
    if (uVar2 != 0) {
      param_1 = uVar2;
    }
    lVar1 = lVar4 + 1;
  } while (param_1 != 0);
code_r0x00440c25:
  return lVar3 + lVar4;
}



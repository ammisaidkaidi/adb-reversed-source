// Function: LZ4F_compressBound
// Address: 004a5f90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long LZ4F_compressBound(ulong param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == (uint *)0x0) {
    lVar6 = 8;
    uVar3 = 0x10000;
    lVar5 = 8;
    goto code_r0x004a6076;
  }
  uVar1 = *param_2;
  if (param_2[9] != 0) {
    if (uVar1 == 0) {
      uVar1 = 4;
    }
    else {
      uVar3 = 0xfffffffffffffffe;
      if ((uVar1 & 0xfffffffc) != 4) goto code_r0x004a5ff7;
    }
    uVar3 = *(ulong *)(&UNK_001fe7d0 + (ulong)uVar1 * 8);
code_r0x004a5ff7:
    if ((param_1 | uVar3) >> 0x20 == 0) {
      uVar1 = (uint)((param_1 & 0xffffffff) / (uVar3 & 0xffffffff));
    }
    else {
      uVar1 = (uint)(param_1 / uVar3);
    }
    param_1 = uVar3 - 1 & param_1;
    return (ulong)((uVar1 + 1) - (uint)(param_1 == 0)) * ((ulong)param_2[7] * 4 + 4) +
           param_1 + (ulong)param_2[2] * 4 + uVar1 * uVar3 + 4;
  }
  if (uVar1 == 0) {
    uVar1 = 4;
code_r0x004a6052:
    uVar3 = *(ulong *)(&UNK_001fe7d0 + (ulong)uVar1 * 8);
  }
  else {
    uVar3 = 0xfffffffffffffffe;
    if ((uVar1 & 0xfffffffc) == 4) goto code_r0x004a6052;
  }
  lVar5 = (ulong)param_2[2] * 4 + 4;
  lVar6 = (ulong)param_2[7] * 4 + 4;
code_r0x004a6076:
  uVar2 = (uVar3 + param_1) - 1;
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    uVar1 = (uint)((uVar2 & 0xffffffff) / (uVar3 & 0xffffffff));
  }
  else {
    uVar1 = (uint)(uVar2 / uVar3);
  }
  lVar4 = 0;
  if (param_1 == 0) {
    lVar4 = uVar3 - 1;
  }
  return lVar4 + lVar5 + uVar1 * uVar3 + (ulong)((uVar1 + 1) - (uint)(lVar4 == 0)) * lVar6;
}



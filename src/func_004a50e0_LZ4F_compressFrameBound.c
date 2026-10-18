// Function: LZ4F_compressFrameBound
// Address: 004a50e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long LZ4F_compressFrameBound(ulong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = 4;
  if (param_2 == (uint *)0x0) {
    lVar4 = 4;
    lVar3 = 0;
  }
  else {
    uVar1 = *param_2;
    lVar3 = (ulong)param_2[2] << 2;
    lVar4 = (ulong)param_2[7] * 4 + 4;
    if ((uVar1 != 0) && (uVar5 = 0xfffffffffffffffe, uVar2 = uVar1, (uVar1 & 0xfffffffc) != 4))
    goto code_r0x004a5133;
  }
  uVar5 = *(ulong *)(&UNK_001fe7d0 + (ulong)uVar2 * 8);
code_r0x004a5133:
  if ((param_1 | uVar5) >> 0x20 == 0) {
    uVar2 = (uint)((param_1 & 0xffffffff) / (uVar5 & 0xffffffff));
  }
  else {
    uVar2 = (uint)(param_1 / uVar5);
  }
  param_1 = uVar5 - 1 & param_1;
  return (ulong)((uVar2 + 1) - (uint)(param_1 == 0)) * lVar4 + param_1 + lVar3 + uVar2 * uVar5 +
         0x17;
}



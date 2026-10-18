// Function: LZ4_saveDict
// Address: 0049cbb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_saveDict(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4018);
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  uVar2 = 0x10000;
  if (param_3 < 0x10000) {
    uVar2 = (ulong)param_3;
  }
  if (param_3 != 0) {
    func_0x0099bd90(param_2,((ulong)uVar1 + *(long *)(param_1 + 0x4000)) - uVar2);
  }
  *(undefined8 *)(param_1 + 0x4000) = param_2;
  *(int *)(param_1 + 0x4018) = (int)uVar2;
  return uVar2;
}



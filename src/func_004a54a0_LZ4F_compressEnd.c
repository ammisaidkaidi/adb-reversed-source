// Function: LZ4F_compressEnd
// Address: 004a54a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4F_compressEnd(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = LZ4F_flush();
  uVar4 = uVar2;
  if (uVar2 < 0xffffffffffffffe9) {
    uVar4 = 0xfffffffffffffff5;
    if (3 < param_3 - uVar2) {
      *(undefined4 *)(param_2 + uVar2) = 0;
      if (*(int *)(param_1 + 0x28) == 1) {
        uVar1 = XXH32_digest(param_1 + 0x98);
        if (param_3 - uVar2 < 8) {
          return 0xfffffffffffffff5;
        }
        *(undefined4 *)(uVar2 + param_2 + 4) = uVar1;
        lVar3 = uVar2 + param_2 + 8;
      }
      else {
        lVar3 = uVar2 + param_2 + 4;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (uVar4 = 0xfffffffffffffff2, *(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x90))) {
        uVar4 = lVar3 - param_2;
      }
    }
  }
  return uVar4;
}



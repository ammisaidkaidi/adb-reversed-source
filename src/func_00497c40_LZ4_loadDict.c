// Function: LZ4_loadDict
// Address: 00497c40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_loadDict(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  func_0x0099bdb0(param_1,0,0x4020);
  *(undefined4 *)(param_1 + 0x4010) = 0x10000;
  if (7 < (int)param_3) {
    plVar1 = (long *)((long)param_2 + ((ulong)param_3 - 0x10000));
    if (param_3 < 0x10001) {
      plVar1 = param_2;
    }
    *(long **)(param_1 + 0x4000) = plVar1;
    iVar3 = ((int)param_2 + param_3) - (int)plVar1;
    *(int *)(param_1 + 0x4018) = iVar3;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    param_2 = (long *)((long)param_2 + ((ulong)param_3 - 8));
    if (plVar1 <= param_2) {
      iVar2 = 0x10000 - iVar3;
      do {
        *(int *)(param_1 + ((ulong)(*plVar1 * -0x30e4432345000000) >> 0x34) * 4) = iVar2;
        plVar1 = (long *)((long)plVar1 + 3);
        iVar2 = iVar2 + 3;
      } while (plVar1 <= param_2);
    }
  }
  return iVar3;
}



// Function: LZ4_resetStreamHC_fast
// Address: 004a8430
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_resetStreamHC_fast(ulong param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 0x40027) == '\0') {
    *(int *)(param_1 + 0x40018) =
         *(int *)(param_1 + 0x40018) + (*(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008));
    *(undefined8 *)(param_1 + 0x40028) = 0;
    *(undefined8 *)(param_1 + 0x40000) = 0;
    *(undefined8 *)(param_1 + 0x40008) = 0;
  }
  else if ((param_1 & 7) == 0) {
    func_0x0099bdb0(param_1,0,0x40030);
  }
  uVar1 = 0xc;
  if (param_2 < 0xc) {
    uVar1 = param_2;
  }
  uVar2 = 9;
  if (0 < (int)param_2) {
    uVar2 = (undefined2)uVar1;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar2;
  return;
}



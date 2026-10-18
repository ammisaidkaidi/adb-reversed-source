// Function: BrotliDecoderTakeOutput
// Address: 00372070
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong BrotliDecoderTakeOutput(int *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long in_FS_OFFSET;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = 0;
  lVar4 = 0x1000000;
  if (*param_2 != 0) {
    lVar4 = *param_2;
  }
  piVar3 = param_1;
  lStack_38 = lVar4;
  if ((*(long *)(param_1 + 0x22) != 0) && (-1 < param_1[0x20])) {
    func_0x00371ff0(param_1);
    uVar1 = func_0x0036e680(param_1,&lStack_38,&uStack_30,0,1);
    if ((uVar1 & 0xfffffffd) == 1) {
      *param_2 = lVar4 - lStack_38;
      uVar2 = uStack_30;
      goto code_r0x0037210f;
    }
    if ((int)uVar1 < 0) {
      func_0x0036e640(param_1,uVar1,0);
      piVar3 = param_1;
    }
  }
  *param_2 = 0;
  uVar2 = 0;
code_r0x0037210f:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return uVar2;
  }
  func_0x0099bd00();
  if (*piVar3 != 0) {
    return 1;
  }
  return (ulong)(*(long *)(piVar3 + 4) != 0);
}



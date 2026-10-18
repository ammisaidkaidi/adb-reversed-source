// Function: BrotliEncoderTakeOutput
// Address: 00379840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long BrotliEncoderTakeOutput(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x1b10);
  uVar2 = *param_2;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  if (uVar2 == 0) {
    uVar4 = uVar1;
  }
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1b08);
    *(ulong *)(param_1 + 0x1b08) = lVar3 + uVar4;
    *(long *)(param_1 + 0x1b18) = *(long *)(param_1 + 0x1b18) + uVar4;
    *(ulong *)(param_1 + 0x1b10) = uVar1 - uVar4;
    if ((uVar1 - uVar4 == 0) && (*(int *)(param_1 + 0x1b34) == 1)) {
      *(undefined4 *)(param_1 + 0x1b34) = 0;
      *(undefined8 *)(param_1 + 0x1b08) = 0;
    }
  }
  *param_2 = uVar4;
  return lVar3;
}



// Function: _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE
// Address: 003e4900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE
               (undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0x99ece0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  uVar1 = *param_2;
  *param_2 = 0xffffffff;
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar3;
  if (*(int *)(param_1 + 1) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  *puVar3 = uVar2;
  param_1[2] = 0;
  return;
}



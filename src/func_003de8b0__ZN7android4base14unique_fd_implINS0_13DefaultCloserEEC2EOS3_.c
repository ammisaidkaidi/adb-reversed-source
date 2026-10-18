// Function: _ZN7android4base14unique_fd_implINS0_13DefaultCloserEEC2EOS3_
// Address: 003de8b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android4base14unique_fd_implINS0_13DefaultCloserEEC2EOS3_(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = -1;
  iVar1 = *param_2;
  *param_2 = -1;
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar3;
  if (*param_1 != -1) {
    func_0x0099bd10();
  }
  *param_1 = iVar1;
  *puVar3 = uVar2;
  return;
}



// Function: _ZN10atransport14update_versionEim
// Address: 003eb610
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport14update_versionEim(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0x1000001;
  if (param_2 < 0x1000001) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xe8) = iVar1;
  uVar2 = 0x100000;
  if (param_3 < 0x100000) {
    uVar2 = param_3;
  }
  *(ulong *)(param_1 + 0xf0) = uVar2;
  return;
}



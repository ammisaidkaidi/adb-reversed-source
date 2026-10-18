// Function: _ZN12FdConnection5CloseEv
// Address: 003e5360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12FdConnection5CloseEv(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  func_0x0099c060(*(undefined4 *)(param_1 + 8),2);
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  if (*(int *)(param_1 + 8) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *puVar2 = uVar1;
  return;
}



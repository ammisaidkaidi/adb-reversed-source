// Function: _ZN7android22IdmapMatchingResourcesD2Ev
// Address: 0043efc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android22IdmapMatchingResourcesD2Ev(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long *plStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_28 = param_1 + 5;
  func_0x0043f920(&plStack_28,param_1[5]);
  plStack_28 = param_1 + 2;
  func_0x0043f920(&plStack_28,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    plStack_28 = (long *)(lVar1 + 8);
    func_0x0043f8a0(&plStack_28,*(undefined8 *)(lVar1 + 8));
    _ZdaPvSt11align_val_t(lVar1,0x18);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



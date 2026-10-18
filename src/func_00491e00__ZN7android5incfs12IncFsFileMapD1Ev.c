// Function: _ZN7android5incfs12IncFsFileMapD1Ev
// Address: 00491e00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android5incfs12IncFsFileMapD1Ev(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x60) = lVar1;
    _ZdaPvSt11align_val_t(lVar1,*(long *)(param_1 + 0x68) - lVar1);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_1 + 0x48),*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffe);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((lVar1 != 0) && (uVar2 = *(ulong *)(param_1 + 0x20), uVar2 != 0)) {
      if (CARRY8(uVar2,*(ulong *)(param_1 + 0x28))) {
        func_0x008fce60(lVar1,uVar2 + *(ulong *)(param_1 + 0x28));
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      func_0x0099c710();
    }
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  return;
}



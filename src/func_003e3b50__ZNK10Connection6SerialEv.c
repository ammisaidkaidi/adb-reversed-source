// Function: _ZNK10Connection6SerialEv
// Address: 003e3b50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZNK10Connection6SerialEv(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x28);
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(lVar2 + 0x30);
    }
    if (uVar4 != 0) {
      if ((bVar1 & 1) == 0) {
        param_1[2] = *(undefined8 *)(lVar2 + 0x38);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        *param_1 = *(undefined8 *)(lVar2 + 0x28);
        param_1[1] = uVar3;
        return param_1;
      }
      func_0x00330340(param_1,*(undefined8 *)(lVar2 + 0x38));
      return param_1;
    }
  }
  *(undefined1 *)param_1 = 0x12;
  *(undefined8 *)((long)param_1 + 1) = 0x6e776f6e6b6e753c;
  *(undefined2 *)((long)param_1 + 9) = 0x3e;
  return param_1;
}



// Function: _ZNK10atransport11serial_nameEv
// Address: 003cfb50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZNK10atransport11serial_nameEv(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x28);
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x30);
  }
  if (uVar3 != 0) {
    if ((bVar1 & 1) == 0) {
      param_1[2] = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      *param_1 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = uVar2;
      return param_1;
    }
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x38));
    return param_1;
  }
  *(undefined1 *)param_1 = 0x12;
  *(undefined8 *)((long)param_1 + 1) = 0x6e776f6e6b6e753c;
  *(undefined2 *)((long)param_1 + 9) = 0x3e;
  return param_1;
}



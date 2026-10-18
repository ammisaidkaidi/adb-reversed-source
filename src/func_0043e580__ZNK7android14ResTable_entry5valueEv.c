// Function: _ZNK7android14ResTable_entry5valueEv
// Address: 0043e580
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android14ResTable_entry5valueEv(ushort *param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_1[1] & 8) == 0) {
    uVar4 = (ulong)*param_1;
    puVar1 = (undefined2 *)((long)param_1 + uVar4);
    puVar2 = (undefined1 *)((long)param_1 + uVar4 + 2);
    uVar3 = (uint)*(byte *)((long)param_1 + uVar4 + 3);
    param_1 = (ushort *)((long)param_1 + uVar4);
    uVar4 = (ulong)CONCAT12(*puVar2,*puVar1);
  }
  else {
    uVar3 = (uint)(param_1[1] >> 8);
    uVar4 = 8;
  }
  return CONCAT44(*(undefined4 *)(param_1 + 2),uVar3 << 0x18) | uVar4;
}



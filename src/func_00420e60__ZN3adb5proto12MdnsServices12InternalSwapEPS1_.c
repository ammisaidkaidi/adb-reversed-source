// Function: _ZN3adb5proto12MdnsServices12InternalSwapEPS1_
// Address: 00420e60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12MdnsServices12InternalSwapEPS1_(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  return;
}



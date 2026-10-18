// Function: _ZN3adb5proto12ProcessEntry12InternalSwapEPS1_
// Address: 0036c350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12ProcessEntry12InternalSwapEPS1_(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x58) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x59);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_2 + 0x59) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x5a);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  return;
}



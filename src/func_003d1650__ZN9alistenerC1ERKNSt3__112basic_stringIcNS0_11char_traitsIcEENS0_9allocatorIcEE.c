// Function: _ZN9alistenerC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
// Address: 003d1650
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN9alistenerC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
               (undefined8 *param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if ((*param_2 & 1) == 0) {
    param_1[4] = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  }
  else {
    func_0x00330340(param_1 + 2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((*param_3 & 1) == 0) {
    param_1[7] = *(undefined8 *)(param_3 + 0x10);
    uVar4 = *(undefined8 *)(param_3 + 8);
    param_1[5] = *(undefined8 *)param_3;
    param_1[6] = uVar4;
  }
  else {
    func_0x00330340(param_1 + 5,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  param_1[8] = 0;
  return;
}



// Function: _ZN11ServiceInfoaSERKS_
// Address: 004011e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN11ServiceInfoaSERKS_(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 != param_2) {
    bVar1 = *param_2;
    if ((*param_1 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar4 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 8) = uVar3;
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      else {
        func_0x0032e990(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      bVar8 = (bVar1 & 1) != 0;
      pbVar6 = param_2 + 1;
      if (bVar8) {
        pbVar6 = *(byte **)(param_2 + 0x10);
      }
      uVar5 = (ulong)(bVar1 >> 1);
      if (bVar8) {
        uVar5 = *(ulong *)(param_2 + 8);
      }
      func_0x0032e920(param_1,pbVar6,uVar5);
    }
    pbVar6 = param_1 + 0x18;
    bVar1 = param_2[0x18];
    if ((param_1[0x18] & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
        uVar3 = *(undefined4 *)(param_2 + 0x20);
        uVar4 = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)pbVar6 = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined4 *)(param_1 + 0x24) = uVar4;
      }
      else {
        func_0x0032e990(pbVar6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
      }
    }
    else {
      bVar8 = (bVar1 & 1) != 0;
      pbVar7 = param_2 + 0x19;
      if (bVar8) {
        pbVar7 = *(byte **)(param_2 + 0x28);
      }
      uVar5 = (ulong)(bVar1 >> 1);
      if (bVar8) {
        uVar5 = *(ulong *)(param_2 + 0x20);
      }
      func_0x0032e920(pbVar6,pbVar7,uVar5);
    }
    pbVar6 = param_1 + 0x30;
    bVar1 = param_2[0x30];
    if ((param_1[0x30] & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
        uVar2 = *(undefined4 *)(param_2 + 0x34);
        uVar3 = *(undefined4 *)(param_2 + 0x38);
        uVar4 = *(undefined4 *)(param_2 + 0x3c);
        *(undefined4 *)pbVar6 = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_1 + 0x34) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x3c) = uVar4;
      }
      else {
        func_0x0032e990(pbVar6,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
      }
    }
    else {
      bVar8 = (bVar1 & 1) != 0;
      pbVar7 = param_2 + 0x31;
      if (bVar8) {
        pbVar7 = *(byte **)(param_2 + 0x40);
      }
      uVar5 = (ulong)(bVar1 >> 1);
      if (bVar8) {
        uVar5 = *(ulong *)(param_2 + 0x38);
      }
      func_0x0032e920(pbVar6,pbVar7,uVar5);
    }
  }
  param_1[0x4c] = param_2[0x4c];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  func_0x004015b0(param_1 + 0x50,param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  func_0x00401a90(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



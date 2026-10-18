// Function: _ZN7android15ResTable_config17copyFromDtoH_slowERKS0_
// Address: 00430870
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android15ResTable_config17copyFromDtoH_slowERKS0_(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)*param_2;
  if (uVar8 < 0x40) {
    func_0x0099bda0(param_1,param_2,uVar8);
    func_0x0099bdb0((long)param_1 + uVar8,0,0x40 - uVar8);
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  *(undefined4 *)param_1 = 0x40;
  return;
}



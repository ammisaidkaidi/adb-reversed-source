// Function: _ZN8IOVector5clearEv
// Address: 003f2560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN8IOVector5clearEv(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = param_2[3];
  lVar8 = param_2[4];
  if (lVar7 != lVar8) {
    uVar1 = *(undefined8 *)(lVar8 + -0x20);
    *(undefined8 *)(lVar8 + -0x20) = 0;
    *param_1 = uVar1;
    uVar3 = *(undefined4 *)(lVar8 + -0x18);
    uVar4 = *(undefined4 *)(lVar8 + -0x14);
    uVar5 = *(undefined4 *)(lVar8 + -0x10);
    uVar6 = *(undefined4 *)(lVar8 + -0xc);
    *(undefined8 *)(lVar8 + -0x18) = 0;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 2) = uVar5;
    *(undefined4 *)((long)param_1 + 0x14) = uVar6;
    *(undefined8 *)(lVar8 + -0x10) = 0;
    param_1[3] = 0;
    lVar7 = param_2[3];
    lVar8 = param_2[4];
  }
  for (; lVar7 != lVar8; lVar8 = lVar8 + -0x20) {
    lVar2 = *(long *)(lVar8 + -0x20);
    *(undefined8 *)(lVar8 + -0x20) = 0;
    if (lVar2 != 0) {
      _ZdaPvSt11align_val_t();
    }
  }
  param_2[4] = lVar7;
  return param_1;
}



// Function: _ZN8IOVector15pop_front_blockEv
// Address: 003f2910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN8IOVector15pop_front_blockEv(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = param_1[3];
  lVar4 = param_1[2] * 0x20;
  lVar1 = lVar2 + lVar4;
  *param_1 = *param_1 - *(long *)(lVar2 + 0x10 + lVar4);
  param_1[1] = 0;
  lVar3 = *(long *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  if (lVar3 != 0) {
    _ZdaPvSt11align_val_t();
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  lVar1 = param_1[3];
  uVar7 = param_1[2] + 1;
  param_1[2] = uVar7;
  uVar5 = (ulong)(param_1[4] - lVar1 >> 5) >> 1;
  uVar6 = 4;
  if (4 < uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 < uVar7) {
    func_0x003f3580(param_1 + 3,lVar1,uVar7 * 0x20 + lVar1);
    param_1[2] = 0;
  }
  return;
}



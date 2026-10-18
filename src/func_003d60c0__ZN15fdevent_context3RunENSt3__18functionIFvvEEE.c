// Function: _ZN15fdevent_context3RunENSt3__18functionIFvvEEE
// Address: 003d60c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context3RunENSt3__18functionIFvvEEE(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _ZNSt3__15mutex4lockEv(param_1 + 8);
  lVar3 = param_1[0xe];
  lVar1 = param_1[0xf];
  lVar2 = 0;
  if (lVar1 != lVar3) {
    lVar2 = (lVar1 - lVar3 >> 3) * 0x55 + -1;
  }
  if (lVar2 == param_1[0x12] + param_1[0x11]) {
    func_0x00345950(param_1 + 0xd);
    lVar3 = param_1[0xe];
    lVar1 = param_1[0xf];
  }
  if (lVar3 == lVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = ((ulong)(param_1[0x12] + param_1[0x11]) % 0x55) * 0x30 +
            *(long *)(lVar3 + ((ulong)(param_1[0x12] + param_1[0x11]) / 0x55) * 8);
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(lVar3 + 0x20) = lVar3;
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
  }
  else {
    *(long *)(lVar3 + 0x20) = lVar1;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  param_1[0x12] = param_1[0x12] + 1;
  _ZNSt3__115recursive_mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x003d61b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// Function: _ZN8IOVector10trim_frontEv
// Address: 003f2f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN8IOVector10trim_frontEv(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  lVar3 = param_1[2];
  if ((lVar5 != 0 || lVar3 != 0) && (lVar1 = param_1[3], lVar1 != param_1[4])) {
    lVar2 = *(long *)(lVar1 + 0x10 + lVar3 * 0x20) - lVar5;
    if (lVar2 == 0) {
      lVar3 = lVar3 + 1;
      param_1[2] = lVar3;
    }
    else {
      plVar4 = (long *)(lVar1 + lVar3 * 0x20);
      func_0x0099bd90(*plVar4,lVar5 + *plVar4,lVar2);
      _ZN5Block6resizeEm(plVar4,plVar4[2] - param_1[1]);
      lVar5 = param_1[1];
      lVar3 = param_1[2];
    }
    *param_1 = *param_1 - lVar5;
    param_1[1] = 0;
    if (lVar3 != 0) {
      func_0x003f3580(param_1 + 3,param_1[3],lVar3 * 0x20 + param_1[3]);
      param_1[2] = 0;
    }
  }
  return;
}



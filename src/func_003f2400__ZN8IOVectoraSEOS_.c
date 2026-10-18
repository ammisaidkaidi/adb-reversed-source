// Function: _ZN8IOVectoraSEOS_
// Address: 003f2400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN8IOVectoraSEOS_(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    lVar4 = param_1[4];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        lVar2 = *(long *)(lVar4 + -0x20);
        *(undefined8 *)(lVar4 + -0x20) = 0;
        if (lVar2 != 0) {
          _ZdaPvSt11align_val_t();
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar2 = param_1[3];
    }
    param_1[4] = lVar3;
    _ZdaPvSt11align_val_t(lVar2,param_1[5] - lVar2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar3 = param_2[3];
  lVar4 = param_2[4];
  if (lVar3 == lVar4) {
    lVar2 = 0;
    if (lVar3 == lVar4) goto code_r0x003f2506;
  }
  else {
    lVar2 = *(long *)(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x20) = 0;
    *(undefined8 *)(lVar4 + -0x18) = 0;
    *(undefined8 *)(lVar4 + -0x10) = 0;
    lVar3 = param_2[3];
    lVar4 = param_2[4];
    if (lVar3 == lVar4) goto code_r0x003f2506;
  }
  do {
    lVar1 = *(long *)(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x20) = 0;
    if (lVar1 != 0) {
      _ZdaPvSt11align_val_t();
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != lVar3);
code_r0x003f2506:
  param_2[4] = lVar3;
  if (lVar2 != 0) {
    _ZdaPvSt11align_val_t(lVar2);
  }
  return param_1;
}



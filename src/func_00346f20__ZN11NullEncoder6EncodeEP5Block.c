// Function: _ZN11NullEncoder6EncodeEP5Block
// Address: 00346f20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN11NullEncoder6EncodeEP5Block(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *param_2;
  *param_2 = 0;
  if (lVar4 != 0) {
    _ZdaPvSt11align_val_t();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  _ZN5Block6resizeEm(param_2,*(undefined8 *)(param_1 + 8));
  uVar6 = param_2[2];
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *param_2;
    do {
      lVar1 = *(long *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x18) == lVar1) goto code_r0x00346fbb;
      lVar3 = *(long *)(param_1 + 0x28) * 0x20;
      uVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10 + lVar3) - lVar1;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      func_0x0099bda0(lVar4,lVar1 + *(long *)(*(long *)(param_1 + 0x30) + lVar3),uVar5);
      lVar4 = lVar4 + uVar5;
      _ZN8IOVector10drop_frontEm(param_1 + 0x18,uVar5);
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    uVar6 = 0;
code_r0x00346fbb:
    lVar4 = param_2[2] - uVar6;
  }
  _ZN5Block6resizeEm(param_2,lVar4);
  iVar2 = 3;
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
    iVar2 = 2 - (uint)*(byte *)(param_1 + 0x10);
  }
  return iVar2;
}



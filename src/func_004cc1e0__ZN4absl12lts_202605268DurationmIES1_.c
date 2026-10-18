// Function: _ZN4absl12lts_202605268DurationmIES1_
// Address: 004cc1e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605268DurationmIES1_(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0xffffffff) {
    return;
  }
  lVar2 = 0x7fffffffffffffff;
  if (param_3 == 0xffffffff) {
    if (-1 < param_2) {
      lVar2 = -0x8000000000000000;
    }
  }
  else {
    lVar1 = *param_1;
    lVar4 = lVar1 - param_2;
    *param_1 = lVar4;
    if (uVar3 < param_3) {
      lVar4 = lVar4 + -1;
      *param_1 = lVar4;
      uVar3 = uVar3 + 4000000000;
    }
    *(uint *)(param_1 + 1) = uVar3 - param_3;
    if (param_2 < 0) {
      if (lVar1 <= lVar4) {
        return;
      }
    }
    else {
      if (lVar4 <= lVar1) {
        return;
      }
      lVar2 = -0x8000000000000000;
    }
  }
  *param_1 = lVar2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



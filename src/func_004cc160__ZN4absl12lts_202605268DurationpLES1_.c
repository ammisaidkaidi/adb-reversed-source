// Function: _ZN4absl12lts_202605268DurationpLES1_
// Address: 004cc160
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605268DurationpLES1_(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((ulong)uVar2 == 0xffffffff) {
    return;
  }
  if (param_3 != 0xffffffff) {
    lVar1 = *param_1;
    lVar3 = lVar1 + param_2;
    *param_1 = lVar3;
    if ((long)(4000000000 - (ulong)param_3) <= (long)(ulong)uVar2) {
      lVar3 = lVar3 + 1;
      *param_1 = lVar3;
      uVar2 = uVar2 + 0x1194d800;
    }
    *(uint *)(param_1 + 1) = uVar2 + param_3;
    if (param_2 < 0) {
      if (lVar3 <= lVar1) {
        return;
      }
      param_2 = -0x8000000000000000;
    }
    else {
      param_2 = 0x7fffffffffffffff;
      if (lVar1 <= lVar3) {
        return;
      }
    }
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



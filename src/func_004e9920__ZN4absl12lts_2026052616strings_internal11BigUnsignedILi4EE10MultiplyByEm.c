// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE10MultiplyByEm
// Address: 004e9920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE10MultiplyByEm
               (uint *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long in_FS_OFFSET;
  ulong uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_1;
  uVar6 = (ulong)uVar1;
  uStack_38 = param_2;
  if (param_2 >> 0x20 != 0) {
    if (-1 < (int)uVar1) {
      uVar3 = 3;
      if (uVar1 < 3) {
        uVar3 = uVar6;
      }
      do {
        iVar7 = (int)uVar3;
        _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12MultiplyStepEiPKjii
                  (param_1,uVar6,&uStack_38,2,uVar3);
        uVar3 = (ulong)(iVar7 - 1);
      } while (iVar7 != 0);
    }
    goto code_r0x004e99ac;
  }
  if (((int)param_2 == 1) || (uVar1 == 0)) goto code_r0x004e99ac;
  if ((int)param_2 == 0) {
    if ((int)uVar1 < 1) {
      *param_1 = 0;
    }
    else {
      func_0x0099bdb0(param_1 + 1,0,uVar6 << 2);
      *param_1 = 0;
    }
    goto code_r0x004e99ac;
  }
  if ((int)uVar1 < 1) goto code_r0x004e99ac;
  if (uVar1 == 1) {
    uVar3 = 0;
    uVar4 = 0;
code_r0x004e9a3a:
    uVar5 = param_2 * param_1[uVar3 + 1] + uVar4;
    param_1[uVar3 + 1] = (uint)uVar5;
    uVar4 = uVar5 >> 0x20;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = param_1[uVar3 + 1] * param_2 + uVar4;
      param_1[uVar3 + 1] = (uint)uVar4;
      uVar5 = param_1[uVar3 + 2] * param_2 + (uVar4 >> 0x20);
      param_1[uVar3 + 2] = (uint)uVar5;
      uVar4 = uVar5 >> 0x20;
      uVar3 = uVar3 + 2;
    } while ((uVar1 & 0x7ffffffe) != uVar3);
    if ((uVar1 & 1) != 0) goto code_r0x004e9a3a;
  }
  if ((uVar1 < 4) && (uVar5 >> 0x20 != 0)) {
    param_1[uVar6 + 1] = (uint)uVar4;
    *param_1 = uVar1 + 1;
  }
code_r0x004e99ac:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



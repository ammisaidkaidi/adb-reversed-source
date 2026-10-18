// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10MultiplyByEj
// Address: 004eae40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10MultiplyByEj
               (uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 1) {
    return;
  }
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    if ((int)uVar1 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      func_0x0099bdb0(param_1 + 1,0,(ulong)uVar1 << 2);
    }
    goto code_r0x004eaf1a;
  }
  if ((int)uVar1 < 1) {
    return;
  }
  uVar2 = (ulong)param_2;
  if (uVar1 == 1) {
    uVar3 = 0;
    uVar5 = 0;
code_r0x004eaeeb:
    uVar6 = param_1[uVar3 + 1] * uVar2 + uVar5;
    param_1[uVar3 + 1] = (uint)uVar6;
    uVar5 = uVar6 >> 0x20;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = param_1[uVar3 + 1] * uVar2 + uVar5;
      param_1[uVar3 + 1] = (uint)uVar5;
      uVar6 = param_1[uVar3 + 2] * uVar2 + (uVar5 >> 0x20);
      param_1[uVar3 + 2] = (uint)uVar6;
      uVar5 = uVar6 >> 0x20;
      uVar3 = uVar3 + 2;
    } while ((uVar1 & 0x7ffffffe) != uVar3);
    if ((uVar1 & 1) != 0) goto code_r0x004eaeeb;
  }
  if (0x53 < uVar1) {
    return;
  }
  if (uVar6 >> 0x20 == 0) {
    return;
  }
  param_1[(ulong)uVar1 + 1] = (uint)uVar5;
  uVar4 = *param_1 + 1;
code_r0x004eaf1a:
  *param_1 = uVar4;
  return;
}



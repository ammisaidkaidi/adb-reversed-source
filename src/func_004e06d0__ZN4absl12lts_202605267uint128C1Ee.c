// Function: _ZN4absl12lts_202605267uint128C1Ee
// Address: 004e06d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605267uint128C1Ee(ulong *param_1)

{
  ulong uVar1;
  longdouble in_ST0;
  longdouble lVar2;
  longdouble lVar3;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_stack_00000008;
  
  func_0x0099c760(0x40);
  if (in_ST0 <= in_stack_00000008) {
    func_0x0099c760(0xffffffc0);
    lVar2 = (longdouble)9.223372e+18;
    lVar3 = (longdouble)0;
    if (lVar2 <= in_ST1) {
      lVar3 = lVar2;
    }
    uVar1 = (ulong)(lVar2 <= in_ST1) << 0x3f ^ (long)(in_ST1 - lVar3);
    func_0x0099c760(0x40);
    in_stack_00000008 = in_stack_00000008 - in_ST2;
  }
  else {
    uVar1 = 0;
  }
  lVar2 = (longdouble)9.223372e+18;
  lVar3 = (longdouble)0;
  if (lVar2 <= in_stack_00000008) {
    lVar3 = lVar2;
  }
  *param_1 = (ulong)(lVar2 <= in_stack_00000008) << 0x3f ^ (long)(in_stack_00000008 - lVar3);
  param_1[1] = uVar1;
  return;
}



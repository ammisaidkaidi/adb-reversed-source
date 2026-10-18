// Function: _ZN4absl12lts_202605268DurationdVEl
// Address: 004cc5a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_202605268DurationdVEl(ulong *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong uVar3;
  ulong uVar4;
  
  uVar7 = *param_1;
  if ((param_2 == 0) || (uVar1 = (uint)param_1[1], uVar1 == 0xffffffff)) {
    uVar5 = (ulong)((long)(uVar7 ^ param_2) < 0) + 0x7fffffffffffffff;
    iVar6 = -1;
  }
  else {
    uVar2 = 4000000000 - uVar1;
    if (-1 < (long)uVar7) {
      uVar2 = uVar1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (long)uVar7 >> 0x3f ^ uVar7;
    auVar8 = auVar8 * ZEXT816(4000000000) + ZEXT416(uVar2);
    auVar8 = func_0x00998c70(auVar8._0_8_,auVar8._8_8_,
                             ((long)param_2 >> 0x3f ^ param_2) - ((long)param_2 >> 0x3f),0);
    uVar4 = auVar8._8_8_;
    uVar3 = auVar8._0_8_;
    uVar7 = uVar7 ^ param_2;
    if (uVar4 == 0) {
      uVar5 = uVar3 / 4000000000;
    }
    else {
      if (1999999999 < uVar4) {
        uVar5 = 0x8000000000000000;
        if (-1 < (long)uVar7) {
          uVar5 = 0x7fffffffffffffff;
        }
        iVar6 = -(uint)(-1 < (long)uVar7 || (uVar3 != 0 || uVar4 != 2000000000));
        goto code_r0x004cc6c1;
      }
      uVar5 = func_0x00998c70(uVar3,uVar4,4000000000,0);
    }
    iVar6 = auVar8._0_4_ + (int)uVar5 * 0x1194d800;
    if ((long)uVar7 < 0) {
      if (iVar6 == 0) {
        uVar5 = -uVar5;
        iVar6 = 0;
      }
      else {
        uVar5 = ~uVar5;
        iVar6 = -0x1194d800 - iVar6;
      }
    }
  }
code_r0x004cc6c1:
  *param_1 = uVar5;
  *(int *)(param_1 + 1) = iVar6;
  return param_1;
}



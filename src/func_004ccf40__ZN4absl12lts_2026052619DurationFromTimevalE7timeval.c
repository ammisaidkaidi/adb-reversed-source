// Function: _ZN4absl12lts_2026052619DurationFromTimevalE7timeval
// Address: 004ccf40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_2026052619DurationFromTimevalE7timeval(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 1000000) {
    auVar5._8_4_ = (int)param_2 * 4000;
    auVar5._0_8_ = param_1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  lVar2 = ((long)param_2 % 1000000) * 4000;
  uVar1 = (uint)lVar2;
  lVar2 = (lVar2 >> 0x3f) + (long)param_2 / 1000000;
  uVar4 = uVar1 + 4000000000;
  if (-1 < (long)param_2 % 1000000) {
    uVar4 = uVar1;
  }
  auVar6._0_8_ = (lVar2 + param_1 + 1) - (ulong)(uVar4 < 4000000000);
  uVar3 = 0x7fffffffffffffff;
  uVar1 = uVar4 + 0x1194d800;
  if (uVar4 < 4000000000) {
    uVar1 = uVar4;
  }
  if (lVar2 < 0) {
    if (param_1 < auVar6._0_8_) {
      uVar3 = 0x8000000000000000;
      goto code_r0x004ccfd9;
    }
  }
  else if (auVar6._0_8_ < param_1) {
code_r0x004ccfd9:
    auVar7._8_8_ = 0xffffffff;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



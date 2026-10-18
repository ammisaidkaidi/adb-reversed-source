// Function: _ZN4absl12lts_202605268DurationmLEl
// Address: 004cc250
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_202605268DurationmLEl(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  uVar2 = *param_1;
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0xffffffff) {
    uVar13 = (ulong)((long)(uVar2 ^ param_2) < 0) + 0x7fffffffffffffff;
    iVar14 = -1;
    goto code_r0x004cc405;
  }
  uVar8 = 4000000000 - uVar1;
  if (-1 < (long)uVar2) {
    uVar8 = uVar1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)uVar2 >> 0x3f ^ uVar2;
  auVar10 = auVar3 * ZEXT816(4000000000) + ZEXT416(uVar8);
  uVar13 = auVar10._0_8_;
  uVar12 = ((long)param_2 >> 0x3f ^ param_2) - ((long)param_2 >> 0x3f);
  if (auVar10._8_8_ == 0) {
    if ((uVar12 | uVar13) >> 0x20 == 0) {
      uVar12 = uVar12 * uVar13;
      goto code_r0x004cc392;
    }
code_r0x004cc328:
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar12;
    auVar10 = auVar10 * auVar11;
    uVar13 = auVar10._8_8_;
    if (uVar13 == 0) {
      uVar13 = auVar10._0_8_ / 4000000000;
    }
    else {
      if (1999999999 < uVar13) goto code_r0x004cc3d9;
      uVar13 = func_0x00998c70(auVar10._0_8_,uVar13,4000000000,0);
    }
    iVar14 = auVar10._0_4_ + (int)uVar13 * 0x1194d800;
  }
  else {
    if (uVar12 != 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar10._8_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar12;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar13;
      if (!CARRY8(SUB168(auVar5 * auVar7,8),SUB168(auVar4 * auVar6,0)) &&
          SUB168(auVar4 * auVar6,8) == 0) goto code_r0x004cc328;
      auVar10._8_8_ = 0xffffffffffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
code_r0x004cc3d9:
      bVar9 = (byte)(uVar2 >> 0x38) ^ (byte)(param_2 >> 0x38);
      uVar13 = 0x8000000000000000;
      if (-1 < (char)bVar9) {
        uVar13 = 0x7fffffffffffffff;
      }
      iVar14 = ((auVar10._8_8_ == 2000000000 && auVar10._0_8_ == 0) & bVar9 >> 7) - 1;
      goto code_r0x004cc405;
    }
    uVar12 = 0;
code_r0x004cc392:
    uVar13 = uVar12 / 4000000000;
    iVar14 = (int)uVar12 + (int)uVar13 * 0x1194d800;
  }
  if ((long)(uVar2 ^ param_2) < 0) {
    if (iVar14 == 0) {
      uVar13 = -uVar13;
      iVar14 = 0;
    }
    else {
      uVar13 = ~uVar13;
      iVar14 = -0x1194d800 - iVar14;
    }
  }
code_r0x004cc405:
  *param_1 = uVar13;
  *(int *)(param_1 + 1) = iVar14;
  return param_1;
}



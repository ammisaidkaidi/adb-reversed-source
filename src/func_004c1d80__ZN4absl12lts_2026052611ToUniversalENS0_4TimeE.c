// Function: _ZN4absl12lts_2026052611ToUniversalENS0_4TimeE
// Address: 004c1d80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_2026052611ToUniversalENS0_4TimeE(long param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_20 = param_1;
  uStack_18 = param_2;
  plVar2 = (long *)_ZN4absl12lts_202605268DurationmIES1_(&lStack_20,0xfffffff1886e0900,0);
  lVar7 = *plVar2;
  uVar5 = (ulong)*(uint *)(plVar2 + 1);
  uStack_18 = 0;
  lStack_20 = 0;
  lVar3 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_(lVar7,uVar5,0,400,&lStack_20);
  lVar6 = -0x8000000000000000;
  if (!SBORROW8(0,lVar3)) {
    lVar6 = lVar3 + -1;
  }
  if (-1 < lStack_20) {
    lVar6 = lVar3;
  }
  if (0 < lVar3) {
    lVar6 = lVar3;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    auVar8._8_8_ = lVar3 + -1;
    auVar8._0_8_ = lVar6;
    return auVar8;
  }
  func_0x0099bd00();
  if (uVar5 < 1000000000) {
    uVar4 = (int)uVar5 << 2;
    lVar6 = lVar7;
  }
  else {
    lVar6 = (long)uVar5 % 1000000000;
    lVar3 = (lVar6 >> 0x3d) + (long)uVar5 / 1000000000;
    uVar1 = (int)lVar6 * 4 + 4000000000;
    if (-1 < lVar6) {
      uVar1 = (int)lVar6 * 4;
    }
    lVar6 = (lVar3 + lVar7 + 1) - (ulong)(uVar1 < 4000000000);
    uVar4 = uVar1 + 0x1194d800;
    if (uVar1 < 4000000000) {
      uVar4 = uVar1;
    }
    if (lVar3 < 0) {
      if (lVar6 <= lVar7) goto code_r0x004ccf2d;
      lVar3 = -0x8000000000000000;
    }
    else {
      lVar3 = 0x7fffffffffffffff;
      if (lVar7 <= lVar6) goto code_r0x004ccf2d;
    }
    lVar6 = lVar3;
    uVar4 = 0xffffffff;
  }
code_r0x004ccf2d:
  auVar9._8_4_ = uVar4;
  auVar9._0_8_ = lVar6;
  auVar9._12_4_ = 0;
  return auVar9;
}



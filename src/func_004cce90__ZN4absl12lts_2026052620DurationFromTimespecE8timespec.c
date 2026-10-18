// Function: _ZN4absl12lts_2026052620DurationFromTimespecE8timespec
// Address: 004cce90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_2026052620DurationFromTimespecE8timespec(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (param_2 < 1000000000) {
    uVar2 = (int)param_2 << 2;
    lVar3 = param_1;
  }
  else {
    lVar3 = (long)param_2 % 1000000000;
    lVar4 = (lVar3 >> 0x3d) + (long)param_2 / 1000000000;
    uVar1 = (int)lVar3 * 4 + 4000000000;
    if (-1 < lVar3) {
      uVar1 = (int)lVar3 * 4;
    }
    lVar3 = (lVar4 + param_1 + 1) - (ulong)(uVar1 < 4000000000);
    uVar2 = uVar1 + 0x1194d800;
    if (uVar1 < 4000000000) {
      uVar2 = uVar1;
    }
    if (lVar4 < 0) {
      if (lVar3 <= param_1) goto code_r0x004ccf2d;
      lVar4 = -0x8000000000000000;
    }
    else {
      lVar4 = 0x7fffffffffffffff;
      if (param_1 <= lVar3) goto code_r0x004ccf2d;
    }
    lVar3 = lVar4;
    uVar2 = 0xffffffff;
  }
code_r0x004ccf2d:
  auVar5._8_4_ = uVar2;
  auVar5._0_8_ = lVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



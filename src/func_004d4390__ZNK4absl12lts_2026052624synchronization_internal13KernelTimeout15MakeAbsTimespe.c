// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout15MakeAbsTimespecEv
// Address: 004d4390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout15MakeAbsTimespecEv(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar1 = *param_1;
  lVar9 = 0x7fffffffffffffff;
  if (uVar1 != 0xffffffffffffffff) {
    uVar10 = uVar1 >> 1;
    if ((uVar1 & 1) == 0) {
      lVar9 = uVar10 + (uVar10 == 0);
    }
    else {
      lVar3 = _ZNSt3__16chrono12steady_clock3nowEv();
      lVar3 = uVar10 - lVar3;
      lVar7 = 0;
      if (0 < lVar3) {
        lVar7 = lVar3;
      }
      lVar4 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
      if (lVar3 <= 0x7fffffffffffffff - lVar4) {
        lVar9 = lVar7 + lVar4;
      }
    }
  }
  lVar7 = lVar9 % 1000000000;
  lVar9 = (lVar7 >> 0x3d) + lVar9 / 1000000000;
  uVar8 = (int)lVar7 * 4 + 4000000000;
  if (-1 < lVar7) {
    uVar8 = (int)lVar7 * 4;
  }
  if (uVar8 == 0xffffffff) {
    uVar6 = 999999999;
    if (lVar9 < 0) {
      uVar6 = 0;
    }
    uVar2 = 0x8000000000000000;
    if (lVar9 >= 0) {
      uVar2 = 0x7fffffffffffffff;
    }
    auVar11._8_8_ = uVar6;
    auVar11._0_8_ = uVar2;
    return auVar11;
  }
  uVar5 = uVar8;
  if ((lVar9 < 0) && (uVar5 = uVar8 + 3, 3999999999 < uVar5)) {
    lVar9 = lVar9 + 1;
    uVar5 = uVar8 + 0x1194d803;
  }
  auVar12._8_4_ = uVar5 >> 2;
  auVar12._0_8_ = lVar9;
  auVar12._12_4_ = 0;
  return auVar12;
}



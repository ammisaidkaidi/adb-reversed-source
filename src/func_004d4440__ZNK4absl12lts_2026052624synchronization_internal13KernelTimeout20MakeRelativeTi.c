// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout20MakeRelativeTimespecEv
// Address: 004d4440
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004cd1ad) */
/* WARNING: Removing unreachable block (ram,0x004cd183) */
/* WARNING: Removing unreachable block (ram,0x004cd1bb) */
/* WARNING: Removing unreachable block (ram,0x004cd18e) */

undefined1  [16]
_ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout20MakeRelativeTimespecEv
          (ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar4 = *param_1;
  if (uVar4 == 0xffffffffffffffff) {
    uVar4 = 0x7fffffffffffffff;
  }
  else {
    if ((uVar4 & 1) == 0) {
      lVar1 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
    }
    else {
      lVar1 = _ZNSt3__16chrono12steady_clock3nowEv();
    }
    uVar2 = (uVar4 >> 1) - lVar1;
    uVar4 = 0;
    if (0 < (long)uVar2) {
      uVar4 = uVar2;
    }
  }
  uVar3 = (int)uVar4 + (int)(uVar4 / 1000000000) * -1000000000;
  if (uVar3 * 4 == -1) {
    auVar5._8_8_ = 999999999;
    auVar5._0_8_ = 0x7fffffffffffffff;
    return auVar5;
  }
  auVar6._8_4_ = uVar3 & 0x3fffffff;
  auVar6._0_8_ = uVar4 / 1000000000;
  auVar6._12_4_ = 0;
  return auVar6;
}



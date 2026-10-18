// Function: _ZN4absl12lts_2026052624synchronization_internal13KernelTimeoutC1ENS0_8DurationE
// Address: 004d4200
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052624synchronization_internal13KernelTimeoutC1ENS0_8DurationE
               (ulong *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  ulong *puStack_40;
  int iStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0xffffffffffffffff;
  puVar4 = param_1;
  if (param_2 != (ulong *)0x7fffffffffffffff || (int)param_3 != -1) {
    if ((ulong)param_2 >> 0x21 == 0) {
      lVar5 = (param_3 >> 2 & 0x3fffffff) + (long)param_2 * 1000000000;
    }
    else {
      puStack_40 = param_2;
      iStack_38 = (int)param_3;
      lVar5 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                        (param_2,param_3 & 0xffffffff,0,4,&puStack_40);
      puVar4 = param_2;
    }
    lVar1 = _ZNSt3__16chrono12steady_clock3nowEv();
    if (lVar5 <= 0x7fffffffffffffff - lVar1) {
      lVar2 = 0;
      if (0 < lVar5) {
        lVar2 = lVar5;
      }
      uVar7 = (lVar2 + lVar1) * 2 + 1;
    }
  }
  *param_1 = uVar7;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_30) {
    func_0x0099bd00();
    uVar7 = *puVar4;
    lVar5 = 0x7fffffffffffffff;
    if (uVar7 != 0xffffffffffffffff) {
      uVar6 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        lVar5 = uVar6 + (uVar6 == 0);
      }
      else {
        lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
        lVar2 = uVar6 - lVar2;
        lVar1 = 0;
        if (0 < lVar2) {
          lVar1 = lVar2;
        }
        lVar3 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
        if (lVar2 <= 0x7fffffffffffffff - lVar3) {
          lVar5 = lVar1 + lVar3;
        }
      }
    }
    return lVar5;
  }
  return *(long *)(in_FS_OFFSET + 0x28);
}



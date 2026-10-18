// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo14NextTransitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS2_9time_zone16civil_transitionE
// Address: 004c7f10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo14NextTransitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS2_9time_zone16civil_transitionE
          (long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar10 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar10 != plVar1) {
    plVar9 = plVar10 + 6;
    if (-0x800000000000000 < *plVar10) {
      plVar9 = plVar10;
    }
    lVar2 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lVar2 = SUB168(SEXT816(lVar2) * SEXT816(-0x431bde82d7b634db),8);
    plVar10 = plVar9;
    if ((long)plVar1 - (long)plVar9 != 0) {
      uVar6 = ((long)plVar1 - (long)plVar9 >> 4) * -0x5555555555555555;
      do {
        uVar3 = uVar6 >> 1;
        uVar4 = uVar3;
        if (plVar10[uVar3 * 6] <= ((lVar2 >> 0x12) - (lVar2 >> 0x3f)) + *param_2) {
          uVar4 = ~uVar3 + uVar6;
          plVar10 = plVar10 + uVar3 * 6 + 6;
        }
        uVar6 = uVar4;
      } while (uVar4 != 0);
    }
    if (plVar10 != plVar1) {
      lVar2 = *(long *)(param_1 + 0x20);
      do {
        pbVar5 = (byte *)(plVar10 + -5);
        if (plVar10 == plVar9) {
          pbVar5 = (byte *)(param_1 + 0x38);
        }
        if (*pbVar5 != *(byte *)(plVar10 + 1)) {
          uVar6 = (ulong)((uint)*pbVar5 * 0x30);
          uVar4 = (ulong)((uint)*(byte *)(plVar10 + 1) * 0x30);
          if (*(int *)(lVar2 + uVar6) != *(int *)(lVar2 + uVar4)) break;
          lVar7 = uVar6 + lVar2;
          lVar8 = uVar4 + lVar2;
          if ((*(char *)(lVar7 + 0x28) != *(char *)(lVar8 + 0x28)) ||
             (*(char *)(lVar7 + 0x29) != *(char *)(lVar8 + 0x29))) break;
        }
        plVar10 = plVar10 + 6;
      } while (plVar10 != plVar1);
    }
    if (plVar10 != plVar1) {
      lVar2 = plVar10[5];
      auVar11 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          (plVar10[4],(long)(char)lVar2,(long)(char)((ulong)lVar2 >> 8),
                           (long)(char)((ulong)lVar2 >> 0x10),(long)(char)((ulong)lVar2 >> 0x18),
                           (long)(char)((ulong)lVar2 >> 0x20) + 1);
      *param_3 = auVar11._0_8_;
      param_3[1] = auVar11._8_8_ & 0xffffffffff;
      lVar2 = plVar10[3];
      param_3[2] = plVar10[2];
      param_3[3] = lVar2;
      return 1;
    }
  }
  return 0;
}


